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

#include "aknlayoutscalable_abrw_pvp4_apps_vga4_prt_tch_large.h"
#include "AknLayout2ScalableDecode.h"
namespace AknLayoutScalable_Apps { extern const TUint8 KByteCodedData_AknLayoutScalable_Elaf_pvp4_apps_vga4_prt_tch[]; }

namespace AknLayoutScalable_Abrw_pvp4_apps_vga4_prt_tch_Large
{

extern const TUint16 KDataLookup[AknLayoutScalable_Apps::E_TApiId_TableSize];
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Apps::KByteCodedData_AknLayoutScalable_Elaf_pvp4_apps_vga4_prt_tch + 0x0009c75c };

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
0x0bda,	// (0x0009d336) Screen

0x0be6,	// (0x0009d342) application_window

0x0c3e,	// (0x0009d39a) area_bottom_pane_ParamLimits

0x0c3e,	// (0x0009d39a) area_bottom_pane

0x0c73,	// (0x0009d3cf) area_top_pane_ParamLimits

0x0c73,	// (0x0009d3cf) area_top_pane

0x9c8d,	// (0x000a63e9) call_video_uplink_pane_ParamLimits

0x9c8d,	// (0x000a63e9) call_video_uplink_pane

0x0d02,	// (0x0009d45e) main_pane_ParamLimits

0x0d02,	// (0x0009d45e) main_pane

0xc8b1,	// (0x000a900d) context_pane

0x462f,	// (0x000a0d8b) navi_pane

0x4653,	// (0x000a0daf) popup_cale_events_window_ParamLimits

0x4653,	// (0x000a0daf) popup_cale_events_window

0xc8c4,	// (0x000a9020) popup_mup_playback_window

0x466b,	// (0x000a0dc7) signal_pane

0xa891,	// (0x000a6fed) main_browser_pane

0xb452,	// (0x000a7bae) main_burst_pane

0x44e1,	// (0x000a0c3d) main_calc_pane

0xc854,	// (0x000a8fb0) main_cale_day_pane

0x1434,	// (0x0009db90) main_cale_month_pane

0xc854,	// (0x000a8fb0) main_cale_week_pane

0xb452,	// (0x000a7bae) main_call_pane

0xa0be,	// (0x000a681a) main_call_poc_pane

0xb452,	// (0x000a7bae) main_camera_pane

0xb452,	// (0x000a7bae) main_chi_dic_pane

0xb2da,	// (0x000a7a36) main_clock_pane

0xa0be,	// (0x000a681a) main_fmradio_pane

0xb452,	// (0x000a7bae) main_graph_messa_pane

0xa0be,	// (0x000a681a) main_help_pane

0xa891,	// (0x000a6fed) main_im_pane

0xa7cc,	// (0x000a6f28) main_image_pane_ParamLimits

0xa7cc,	// (0x000a6f28) main_image_pane

0xa0be,	// (0x000a681a) main_location2_pane

0xb452,	// (0x000a7bae) main_location_pane

0xa7cc,	// (0x000a6f28) main_messa_pane

0xa0be,	// (0x000a681a) main_mp2_pane

0xb452,	// (0x000a7bae) main_mp_pane

0xa0be,	// (0x000a681a) main_msg_pane

0xa0be,	// (0x000a681a) main_mup_eq_pane

0xa0be,	// (0x000a681a) main_mup_pane

0xa891,	// (0x000a6fed) main_notes_pane

0xa0be,	// (0x000a681a) main_pec_pane

0xa0be,	// (0x000a681a) main_phob_pane

0xa0be,	// (0x000a681a) main_pinb_pane

0xa0be,	// (0x000a681a) main_postcard_pane

0xa0be,	// (0x000a681a) main_qdial_pane

0xb452,	// (0x000a7bae) main_skin_pane

0xa0be,	// (0x000a681a) main_smil2_pane

0xb452,	// (0x000a7bae) main_smil_pane

0xb452,	// (0x000a7bae) main_video_pane

0xb452,	// (0x000a7bae) main_video_tele_pane

0xa7cc,	// (0x000a6f28) main_viewer_pane_ParamLimits

0xa7cc,	// (0x000a6f28) main_viewer_pane

0xb452,	// (0x000a7bae) main_vorec_pane

0x4519,	// (0x000a0c75) popup_blid_sat_info_window_ParamLimits

0x4519,	// (0x000a0c75) popup_blid_sat_info_window

0x4533,	// (0x000a0c8f) popup_dyc_status_message_window_ParamLimits

0x4533,	// (0x000a0c8f) popup_dyc_status_message_window

0x4543,	// (0x000a0c9f) popup_grid_large_graphic_window_ParamLimits

0x4543,	// (0x000a0c9f) popup_grid_large_graphic_window

0x45bb,	// (0x000a0d17) popup_loc_request_window_ParamLimits

0x45bb,	// (0x000a0d17) popup_loc_request_window

0x4603,	// (0x000a0d5f) popup_wml_address_window_ParamLimits

0x4603,	// (0x000a0d5f) popup_wml_address_window

0x43b9,	// (0x000a0b15) call_muted_g1

0x4078,	// (0x000a07d4) popup_call_audio_conf_window_ParamLimits

0x4078,	// (0x000a07d4) popup_call_audio_conf_window

0x43c9,	// (0x000a0b25) popup_call_audio_first_window_ParamLimits

0x43c9,	// (0x000a0b25) popup_call_audio_first_window

0x4409,	// (0x000a0b65) popup_call_audio_in_window_ParamLimits

0x4409,	// (0x000a0b65) popup_call_audio_in_window

0x442d,	// (0x000a0b89) popup_call_audio_out_window_ParamLimits

0x442d,	// (0x000a0b89) popup_call_audio_out_window

0x444f,	// (0x000a0bab) popup_call_audio_second_window_ParamLimits

0x444f,	// (0x000a0bab) popup_call_audio_second_window

0x447f,	// (0x000a0bdb) popup_call_audio_wait_window_ParamLimits

0x447f,	// (0x000a0bdb) popup_call_audio_wait_window

0x44a0,	// (0x000a0bfc) popup_number_entry_window_ParamLimits

0x44a0,	// (0x000a0bfc) popup_number_entry_window

0x9cab,	// (0x000a6407) bg_popup_call_pane_cp05_ParamLimits

0x9cab,	// (0x000a6407) bg_popup_call_pane_cp05

0x9ccb,	// (0x000a6427) popup_number_entry_window_t1

0x9cde,	// (0x000a643a) popup_number_entry_window_t2

0x9cf0,	// (0x000a644c) popup_number_entry_window_t3

0x0003,

0xf0cd,	// (0x000ab829) popup_number_entry_window_t

0x9d02,	// (0x000a645e) text_title_cp2

0x9d15,	// (0x000a6471) bg_popup_call_pane_cp_ParamLimits

0x9d15,	// (0x000a6471) bg_popup_call_pane_cp

0x9d23,	// (0x000a647f) call_thumbnail_pane

0x9d2b,	// (0x000a6487) popup_call_audio_in_window_g1_ParamLimits

0x9d2b,	// (0x000a6487) popup_call_audio_in_window_g1

0x9d37,	// (0x000a6493) popup_call_audio_in_window_g2_ParamLimits

0x9d37,	// (0x000a6493) popup_call_audio_in_window_g2

0x9d43,	// (0x000a649f) popup_call_audio_in_window_g3_ParamLimits

0x9d43,	// (0x000a649f) popup_call_audio_in_window_g3

0x0002,

0xf0d6,	// (0x000ab832) popup_call_audio_in_window_g_ParamLimits

0xf0d6,	// (0x000ab832) popup_call_audio_in_window_g

0x9d4f,	// (0x000a64ab) popup_call_audio_in_window_t1_ParamLimits

0x9d4f,	// (0x000a64ab) popup_call_audio_in_window_t1

0x9d6b,	// (0x000a64c7) popup_call_audio_in_window_t2_ParamLimits

0x9d6b,	// (0x000a64c7) popup_call_audio_in_window_t2

0x9d87,	// (0x000a64e3) popup_call_audio_in_window_t3_ParamLimits

0x9d87,	// (0x000a64e3) popup_call_audio_in_window_t3

0x0002,

0xf0dd,	// (0x000ab839) popup_call_audio_in_window_t_ParamLimits

0xf0dd,	// (0x000ab839) popup_call_audio_in_window_t

0x9d15,	// (0x000a6471) bg_popup_call_pane_cp01_ParamLimits

0x9d15,	// (0x000a6471) bg_popup_call_pane_cp01

0x9d23,	// (0x000a647f) call_thumbnail_pane_cp02

0x9d9a,	// (0x000a64f6) call_type_pane_cp022

0x9da2,	// (0x000a64fe) popup_call_audio_out_window_g1_ParamLimits

0x9da2,	// (0x000a64fe) popup_call_audio_out_window_g1

0x9db4,	// (0x000a6510) popup_call_audio_out_window_g2_ParamLimits

0x9db4,	// (0x000a6510) popup_call_audio_out_window_g2

0x9dc0,	// (0x000a651c) popup_call_audio_out_window_g3_ParamLimits

0x9dc0,	// (0x000a651c) popup_call_audio_out_window_g3

0x0002,

0xf0e4,	// (0x000ab840) popup_call_audio_out_window_g_ParamLimits

0xf0e4,	// (0x000ab840) popup_call_audio_out_window_g

0x9dd2,	// (0x000a652e) popup_call_audio_out_window_t1_ParamLimits

0x9dd2,	// (0x000a652e) popup_call_audio_out_window_t1

0x9dea,	// (0x000a6546) popup_call_audio_out_window_t2_ParamLimits

0x9dea,	// (0x000a6546) popup_call_audio_out_window_t2

0x0001,

0xf0eb,	// (0x000ab847) popup_call_audio_out_window_t_ParamLimits

0xf0eb,	// (0x000ab847) popup_call_audio_out_window_t

0x9dff,	// (0x000a655b) bg_popup_call_pane_ParamLimits

0x9dff,	// (0x000a655b) bg_popup_call_pane

0x0f06,	// (0x0009d662) call_thumbnail_pane_cp_ParamLimits

0x0f06,	// (0x0009d662) call_thumbnail_pane_cp

0x9e83,	// (0x000a65df) call_type_pane_cp01_ParamLimits

0x9e83,	// (0x000a65df) call_type_pane_cp01

0x9ec7,	// (0x000a6623) popup_call_audio_first_window_g1_ParamLimits

0x9ec7,	// (0x000a6623) popup_call_audio_first_window_g1

0x9f13,	// (0x000a666f) popup_call_audio_first_window_g2_ParamLimits

0x9f13,	// (0x000a666f) popup_call_audio_first_window_g2

0x0001,

0xf0f0,	// (0x000ab84c) popup_call_audio_first_window_g_ParamLimits

0xf0f0,	// (0x000ab84c) popup_call_audio_first_window_g

0x9f57,	// (0x000a66b3) popup_call_audio_first_window_t1_ParamLimits

0x9f57,	// (0x000a66b3) popup_call_audio_first_window_t1

0xa003,	// (0x000a675f) popup_call_audio_first_window_t4_ParamLimits

0xa003,	// (0x000a675f) popup_call_audio_first_window_t4

0xa08f,	// (0x000a67eb) popup_call_audio_first_window_t5_ParamLimits

0xa08f,	// (0x000a67eb) popup_call_audio_first_window_t5

0x0002,

0xf0f5,	// (0x000ab851) popup_call_audio_first_window_t_ParamLimits

0xf0f5,	// (0x000ab851) popup_call_audio_first_window_t

0xa0be,	// (0x000a681a) bg_popup_call_pane_cp02

0xa0c8,	// (0x000a6824) call_type_pane_cp023

0xa0d0,	// (0x000a682c) popup_call_audio_wait_window_g1

0xa0d8,	// (0x000a6834) popup_call_audio_wait_window_g2

0x0001,

0xf0fc,	// (0x000ab858) popup_call_audio_wait_window_g

0xa0e0,	// (0x000a683c) popup_call_audio_wait_window_t3

0xa0ee,	// (0x000a684a) bg_popup_call_pane_cp03_ParamLimits

0xa0ee,	// (0x000a684a) bg_popup_call_pane_cp03

0xa14e,	// (0x000a68aa) call_thumbnail_pane_cp011_ParamLimits

0xa14e,	// (0x000a68aa) call_thumbnail_pane_cp011

0xa15a,	// (0x000a68b6) call_type_pane_cp034_ParamLimits

0xa15a,	// (0x000a68b6) call_type_pane_cp034

0xa196,	// (0x000a68f2) popup_call_audio_second_window_g1_ParamLimits

0xa196,	// (0x000a68f2) popup_call_audio_second_window_g1

0xa1d2,	// (0x000a692e) popup_call_audio_second_window_g2_ParamLimits

0xa1d2,	// (0x000a692e) popup_call_audio_second_window_g2

0x0001,

0xf101,	// (0x000ab85d) popup_call_audio_second_window_g_ParamLimits

0xf101,	// (0x000ab85d) popup_call_audio_second_window_g

0xa20e,	// (0x000a696a) popup_call_audio_second_window_t1_ParamLimits

0xa20e,	// (0x000a696a) popup_call_audio_second_window_t1

0xa742,	// (0x000a6e9e) popup_call_audio_second_window_t2_ParamLimits

0xa742,	// (0x000a6e9e) popup_call_audio_second_window_t2

0xa778,	// (0x000a6ed4) popup_call_audio_second_window_t3_ParamLimits

0xa778,	// (0x000a6ed4) popup_call_audio_second_window_t3

0x0002,

0xf106,	// (0x000ab862) popup_call_audio_second_window_t_ParamLimits

0xf106,	// (0x000ab862) popup_call_audio_second_window_t

0xa0be,	// (0x000a681a) bg_popup_call_pane_cp04

0xa7ae,	// (0x000a6f0a) list_conf_pane

0xa7b6,	// (0x000a6f12) popup_call_audio_conf_window_t1

0xa7c4,	// (0x000a6f20) call_thumbnail_pane_g1

0xa7cc,	// (0x000a6f28) bg_pinb_pane_ParamLimits

0xa7cc,	// (0x000a6f28) bg_pinb_pane

0xa7da,	// (0x000a6f36) find_pinb_pane

0xa7e3,	// (0x000a6f3f) listscroll_pinb_pane_ParamLimits

0xa7e3,	// (0x000a6f3f) listscroll_pinb_pane

0xa7f2,	// (0x000a6f4e) pinb_bg_pane_g1

0x0f2a,	// (0x0009d686) pinb_bg_pane_g2

0x0f36,	// (0x0009d692) pinb_bg_pane_g3

0x0f42,	// (0x0009d69e) pinb_bg_pane_g4

0x0f4e,	// (0x0009d6aa) pinb_bg_pane_g5

0x0f5a,	// (0x0009d6b6) pinb_bg_pane_g6

0x0f65,	// (0x0009d6c1) pinb_bg_pane_g7

0x0f70,	// (0x0009d6cc) pinb_bg_pane_g8

0x0f7b,	// (0x0009d6d7) pinb_bg_pane_g9

0x0f85,	// (0x0009d6e1) pinb_bg_pane_g10

0x0009,

0xf10d,	// (0x000ab869) pinb_bg_pane_g

0x0fa2,	// (0x0009d6fe) grid_pinb_pane

0x0fad,	// (0x0009d709) list_pinb_pane

0x0fb8,	// (0x0009d714) scroll_pane_cp01_ParamLimits

0x0fb8,	// (0x0009d714) scroll_pane_cp01

0xa7fc,	// (0x000a6f58) find_pinb_pane_g1_ParamLimits

0xa7fc,	// (0x000a6f58) find_pinb_pane_g1

0xa814,	// (0x000a6f70) find_pinb_pane_t1

0xa826,	// (0x000a6f82) find_pinb_pane_t2

0x0001,

0xf127,	// (0x000ab883) find_pinb_pane_t

0xa83b,	// (0x000a6f97) input_focus_pane_cp01_ParamLimits

0xa83b,	// (0x000a6f97) input_focus_pane_cp01

0x0fca,	// (0x0009d726) cell_pinb_pane_ParamLimits

0x0fca,	// (0x0009d726) cell_pinb_pane

0x0fef,	// (0x0009d74b) cell_pinb_pane_g1_ParamLimits

0x0fef,	// (0x0009d74b) cell_pinb_pane_g1

0x1004,	// (0x0009d760) cell_pinb_pane_g2_ParamLimits

0x1004,	// (0x0009d760) cell_pinb_pane_g2

0xa847,	// (0x000a6fa3) cell_pinb_pane_g3_ParamLimits

0xa847,	// (0x000a6fa3) cell_pinb_pane_g3

0x0002,

0xf12c,	// (0x000ab888) cell_pinb_pane_g_ParamLimits

0xf12c,	// (0x000ab888) cell_pinb_pane_g

0xa0be,	// (0x000a681a) grid_highlight_pane_cp01

0x1010,	// (0x0009d76c) list_pinb_item_pane_ParamLimits

0x1010,	// (0x0009d76c) list_pinb_item_pane

0xa0be,	// (0x000a681a) list_highlight_pane_cp02

0x102e,	// (0x0009d78a) list_pinb_item_pane_g1_ParamLimits

0x102e,	// (0x0009d78a) list_pinb_item_pane_g1

0x103b,	// (0x0009d797) list_pinb_item_pane_g2_ParamLimits

0x103b,	// (0x0009d797) list_pinb_item_pane_g2

0x1047,	// (0x0009d7a3) list_pinb_item_pane_g3_ParamLimits

0x1047,	// (0x0009d7a3) list_pinb_item_pane_g3

0x1058,	// (0x0009d7b4) list_pinb_item_pane_g4_ParamLimits

0x1058,	// (0x0009d7b4) list_pinb_item_pane_g4

0x0003,

0xf133,	// (0x000ab88f) list_pinb_item_pane_g_ParamLimits

0xf133,	// (0x000ab88f) list_pinb_item_pane_g

0x1064,	// (0x0009d7c0) list_pinb_item_pane_t1_ParamLimits

0x1064,	// (0x0009d7c0) list_pinb_item_pane_t1

0x1095,	// (0x0009d7f1) calc_display_pane

0x10b3,	// (0x0009d80f) calc_paper_pane

0x10cf,	// (0x0009d82b) grid_calc_pane

0xa0be,	// (0x000a681a) bg_list_pane_cp01

0x10fb,	// (0x0009d857) clock_g1

0x1103,	// (0x0009d85f) clock_g2

0x0001,

0xf13c,	// (0x000ab898) clock_g

0x110d,	// (0x0009d869) clock_t1_ParamLimits

0x110d,	// (0x0009d869) clock_t1

0x1122,	// (0x0009d87e) clock_t2_ParamLimits

0x1122,	// (0x0009d87e) clock_t2

0x1134,	// (0x0009d890) clock_t3_ParamLimits

0x1134,	// (0x0009d890) clock_t3

0x1146,	// (0x0009d8a2) clock_t4_ParamLimits

0x1146,	// (0x0009d8a2) clock_t4

0x1158,	// (0x0009d8b4) clock_t5_ParamLimits

0x1158,	// (0x0009d8b4) clock_t5

0x116d,	// (0x0009d8c9) clock_t6_ParamLimits

0x116d,	// (0x0009d8c9) clock_t6

0x117f,	// (0x0009d8db) clock_t7_ParamLimits

0x117f,	// (0x0009d8db) clock_t7

0x1191,	// (0x0009d8ed) clock_t8_ParamLimits

0x1191,	// (0x0009d8ed) clock_t8

0x11a7,	// (0x0009d903) clock_t9_ParamLimits

0x11a7,	// (0x0009d903) clock_t9

0x0008,

0xf141,	// (0x000ab89d) clock_t_ParamLimits

0xf141,	// (0x000ab89d) clock_t

0xa853,	// (0x000a6faf) popup_clock_analogue_window_cp02

0xa853,	// (0x000a6faf) popup_clock_digital_window_cp01

0xa85b,	// (0x000a6fb7) listscroll_help_pane

0xa0be,	// (0x000a681a) phob_pre_status_pane

0xa865,	// (0x000a6fc1) grid_qdial_pane

0xa7cc,	// (0x000a6f28) listscroll_mce_pane

0xa7cc,	// (0x000a6f28) bg_notes_pane

0xa86f,	// (0x000a6fcb) list_notes_pane

0x11bd,	// (0x0009d919) scroll_pane_cp06

0xa87d,	// (0x000a6fd9) bg_calc_paper_pane

0x11d6,	// (0x0009d932) list_calc_pane

0xa891,	// (0x000a6fed) bg_calc_display_pane

0x11f0,	// (0x0009d94c) calc_display_pane_t1

0x1205,	// (0x0009d961) calc_display_pane_t2

0x121a,	// (0x0009d976) calc_display_pane_t3

0x0002,

0xf154,	// (0x000ab8b0) calc_display_pane_t

0x122c,	// (0x0009d988) cell_calc_pane_ParamLimits

0x122c,	// (0x0009d988) cell_calc_pane

0xa89d,	// (0x000a6ff9) bg_calc_paper_pane_g1

0xa8a9,	// (0x000a7005) bg_calc_paper_pane_g2

0xa8b5,	// (0x000a7011) bg_calc_paper_pane_g3

0xa8c1,	// (0x000a701d) bg_calc_paper_pane_g4

0xa8cd,	// (0x000a7029) bg_calc_paper_pane_g5

0x125b,	// (0x0009d9b7) bg_calc_paper_pane_g6

0x126c,	// (0x0009d9c8) bg_calc_paper_pane_g7

0x127d,	// (0x0009d9d9) bg_calc_paper_pane_g8

0x0007,

0xf15b,	// (0x000ab8b7) bg_calc_paper_pane_g

0x1290,	// (0x0009d9ec) calc_bg_paper_pane_g9

0x12a3,	// (0x0009d9ff) list_calc_item_pane_ParamLimits

0x12a3,	// (0x0009d9ff) list_calc_item_pane

0xa8d9,	// (0x000a7035) list_calc_item_pane_g1

0x12c4,	// (0x0009da20) list_calc_item_pane_t1_ParamLimits

0x12c4,	// (0x0009da20) list_calc_item_pane_t1

0x12d6,	// (0x0009da32) list_calc_item_pane_t2_ParamLimits

0x12d6,	// (0x0009da32) list_calc_item_pane_t2

0x0001,

0xf16c,	// (0x000ab8c8) list_calc_item_pane_t_ParamLimits

0xf16c,	// (0x000ab8c8) list_calc_item_pane_t

0xa8e6,	// (0x000a7042) cell_calc_pane_g1

0xa8f0,	// (0x000a704c) grid_highlight_pane_cp02

0xa912,	// (0x000a706e) bg_calc_display_pane_g1

0x1306,	// (0x0009da62) bg_calc_display_pane_g2

0xa91b,	// (0x000a7077) bg_calc_display_pane_g3

0x0002,

0xf176,	// (0x000ab8d2) bg_calc_display_pane_g

0x1310,	// (0x0009da6c) cell_qdial_pane_ParamLimits

0x1310,	// (0x0009da6c) cell_qdial_pane

0x1326,	// (0x0009da82) cell_qdial_pane_g1_ParamLimits

0x1326,	// (0x0009da82) cell_qdial_pane_g1

0x1333,	// (0x0009da8f) cell_qdial_pane_g2_ParamLimits

0x1333,	// (0x0009da8f) cell_qdial_pane_g2

0xa924,	// (0x000a7080) cell_qdial_pane_g3_ParamLimits

0xa924,	// (0x000a7080) cell_qdial_pane_g3

0x0003,

0xf17d,	// (0x000ab8d9) cell_qdial_pane_g_ParamLimits

0xf17d,	// (0x000ab8d9) cell_qdial_pane_g

0x1351,	// (0x0009daad) cell_qdial_pane_t1_ParamLimits

0x1351,	// (0x0009daad) cell_qdial_pane_t1

0x1369,	// (0x0009dac5) cell_qdial_pane_t2_ParamLimits

0x1369,	// (0x0009dac5) cell_qdial_pane_t2

0x137c,	// (0x0009dad8) cell_qdial_pane_t3_ParamLimits

0x137c,	// (0x0009dad8) cell_qdial_pane_t3

0x0002,

0xf186,	// (0x000ab8e2) cell_qdial_pane_t_ParamLimits

0xf186,	// (0x000ab8e2) cell_qdial_pane_t

0xa0be,	// (0x000a681a) grid_highlight_pane_cp04

0xa930,	// (0x000a708c) thumbnail_qdial_pane_ParamLimits

0xa930,	// (0x000a708c) thumbnail_qdial_pane

0xa98c,	// (0x000a70e8) list_help_pane

0xa995,	// (0x000a70f1) scroll_pane_cp02

0x138f,	// (0x0009daeb) help_list_pane_t1_ParamLimits

0x138f,	// (0x0009daeb) help_list_pane_t1

0x13b6,	// (0x0009db12) bg_notes_pane_g2

0x13be,	// (0x0009db1a) bg_notes_pane_g3

0x13c6,	// (0x0009db22) notes_bg_pane_g1

0x13ce,	// (0x0009db2a) notes_bg_pane_g4

0x13d6,	// (0x0009db32) notes_bg_pane_g5

0x13de,	// (0x0009db3a) notes_bg_pane_g6

0x13e6,	// (0x0009db42) notes_bg_pane_g7

0x13ee,	// (0x0009db4a) notes_bg_pane_g8

0x13f6,	// (0x0009db52) notes_bg_pane_g9

0x0006,

0xf1a4,	// (0x000ab900) notes_bg_pane_g

0x13fe,	// (0x0009db5a) list_notes_text_pane_ParamLimits

0x13fe,	// (0x0009db5a) list_notes_text_pane

0xa99e,	// (0x000a70fa) list_notes_text_pane_g1

0x1426,	// (0x0009db82) list_notes_text_pane_t1

0x1434,	// (0x0009db90) listscroll_cale_week_pane

0x146a,	// (0x0009dbc6) bg_cale_heading_pane

0xa9b8,	// (0x000a7114) bg_cale_pane_cp01

0x1493,	// (0x0009dbef) cale_week_corner_pane

0x14b2,	// (0x0009dc0e) cale_week_day_heading_pane

0x14e0,	// (0x0009dc3c) cale_week_scroll_pane_g1

0x1504,	// (0x0009dc60) cale_week_scroll_pane_g2

0x151c,	// (0x0009dc78) cale_week_scroll_pane_g3

0x1534,	// (0x0009dc90) cale_week_scroll_pane_g4

0x154c,	// (0x0009dca8) cale_week_scroll_pane_g5

0x1564,	// (0x0009dcc0) cale_week_scroll_pane_g6

0x1584,	// (0x0009dce0) cale_week_scroll_pane_g7

0x15a4,	// (0x0009dd00) cale_week_scroll_pane_g8

0x15c4,	// (0x0009dd20) cale_week_scroll_pane_g9

0x15e1,	// (0x0009dd3d) cale_week_scroll_pane_g10

0x15fe,	// (0x0009dd5a) cale_week_scroll_pane_g11

0x161b,	// (0x0009dd77) cale_week_scroll_pane_g12

0x1638,	// (0x0009dd94) cale_week_scroll_pane_g13

0x165d,	// (0x0009ddb9) cale_week_scroll_pane_g14

0x1686,	// (0x0009dde2) cale_week_scroll_pane_g15

0x000e,

0xf1b3,	// (0x000ab90f) cale_week_scroll_pane_g

0x16af,	// (0x0009de0b) cale_week_time_pane

0x16cf,	// (0x0009de2b) grid_cale_week_pane

0xa9e8,	// (0x000a7144) scroll_pane_cp08

0x1702,	// (0x0009de5e) cell_cale_week_pane_ParamLimits

0x1702,	// (0x0009de5e) cell_cale_week_pane

0x178d,	// (0x0009dee9) cale_week_day_heading_pane_t1

0x17d5,	// (0x0009df31) cale_week_day_heading_pane_t2

0x1822,	// (0x0009df7e) cale_week_day_heading_pane_t3

0x186f,	// (0x0009dfcb) cale_week_day_heading_pane_t4

0x18bc,	// (0x0009e018) cale_week_day_heading_pane_t5

0x1909,	// (0x0009e065) cale_week_day_heading_pane_t6

0x1956,	// (0x0009e0b2) cale_week_day_heading_pane_t7

0x0006,

0xf1d2,	// (0x000ab92e) cale_week_day_heading_pane_t

0xaa0a,	// (0x000a7166) bg_cale_side_pane

0x199e,	// (0x0009e0fa) cale_week_time_pane_t1

0x19e2,	// (0x0009e13e) cale_week_time_pane_t2

0x1a26,	// (0x0009e182) cale_week_time_pane_t3

0x1a6a,	// (0x0009e1c6) cale_week_time_pane_t4

0x1aae,	// (0x0009e20a) cale_week_time_pane_t5

0x1af2,	// (0x0009e24e) cale_week_time_pane_t6

0x1b36,	// (0x0009e292) cale_week_time_pane_t7

0x1b82,	// (0x0009e2de) cale_week_time_pane_t8

0x0007,

0xf1e1,	// (0x000ab93d) cale_week_time_pane_t

0x1bd0,	// (0x0009e32c) cell_cale_week_pane_g2

0x1bef,	// (0x0009e34b) cell_cale_week_pane_g3_ParamLimits

0x1bef,	// (0x0009e34b) cell_cale_week_pane_g3

0xaa18,	// (0x000a7174) grid_highlight_pane_cp07

0xaa20,	// (0x000a717c) listscroll_gms_pane

0xaa2a,	// (0x000a7186) grid_gms_pane

0xaa33,	// (0x000a718f) listscroll_gms_pane_g1

0xaa3b,	// (0x000a7197) listscroll_gms_pane_g2

0x0001,

0xf1f2,	// (0x000ab94e) listscroll_gms_pane_g

0x1c07,	// (0x0009e363) scroll_pane_cp010

0x1c12,	// (0x0009e36e) cell_gms_pane_ParamLimits

0x1c12,	// (0x0009e36e) cell_gms_pane

0x1c25,	// (0x0009e381) cell_gms_pane_g1

0xaa43,	// (0x000a719f) cell_gms_pane_g2

0xaa4b,	// (0x000a71a7) cell_gms_pane_g3

0xaa54,	// (0x000a71b0) cell_gms_pane_g4

0x0003,

0xf1f7,	// (0x000ab953) cell_gms_pane_g

0xaa5d,	// (0x000a71b9) grid_highlight_pane_cp09

0x4361,	// (0x000a0abd) phob_pre_status_pane_g1

0x4369,	// (0x000a0ac5) phob_pre_status_pane_g2

0x4371,	// (0x000a0acd) phob_pre_status_pane_g3

0x4379,	// (0x000a0ad5) phob_pre_status_pane_g4

0x0004,

0xf5e6,	// (0x000abd42) phob_pre_status_pane_g

0x4389,	// (0x000a0ae5) phob_pre_status_pane_t1

0x4399,	// (0x000a0af5) phob_pre_status_pane_t2

0x43a9,	// (0x000a0b05) phob_pre_status_pane_t3

0x0002,

0xf5f1,	// (0x000abd4d) phob_pre_status_pane_t

0xa0be,	// (0x000a681a) bg_list_pane_cp05

0x1c35,	// (0x0009e391) grid_vorec_pane

0x1c41,	// (0x0009e39d) vorec_t1

0x1c4f,	// (0x0009e3ab) vorec_t2

0x1c5d,	// (0x0009e3b9) vorec_t3

0x1c6b,	// (0x0009e3c7) vorec_t4

0x1c79,	// (0x0009e3d5) vorec_t5

0x1c87,	// (0x0009e3e3) vorec_t6

0x0006,

0xf200,	// (0x000ab95c) vorec_t

0x1ca3,	// (0x0009e3ff) wait_bar_pane_cp01

0x1cab,	// (0x0009e407) cell_vorec_pane_ParamLimits

0x1cab,	// (0x0009e407) cell_vorec_pane

0x1cc0,	// (0x0009e41c) cell_vorec_pane_g1

0xa0be,	// (0x000a681a) grid_highlight_pane_cp05

0x1cd8,	// (0x0009e434) cams_zoom_pane

0x1ce4,	// (0x0009e440) image_vga_pane

0x1cf3,	// (0x0009e44f) main_camera_pane_g1

0x1d01,	// (0x0009e45d) main_camera_pane_g2

0x1d0d,	// (0x0009e469) main_camera_pane_g3

0x1d1b,	// (0x0009e477) main_camera_pane_g4

0x1d29,	// (0x0009e485) main_camera_pane_g5

0x1d37,	// (0x0009e493) main_camera_pane_g6

0x1d45,	// (0x0009e4a1) main_camera_pane_g7

0x0007,

0xf20f,	// (0x000ab96b) main_camera_pane_g

0x1d53,	// (0x0009e4af) main_camera_pane_t1

0x1d65,	// (0x0009e4c1) main_camera_pane_t2

0x0001,

0xf220,	// (0x000ab97c) main_camera_pane_t

0x1d88,	// (0x0009e4e4) cams_zoom_pane_cp_ParamLimits

0x1d88,	// (0x0009e4e4) cams_zoom_pane_cp

0x1dac,	// (0x0009e508) image_cif_pane_ParamLimits

0x1dac,	// (0x0009e508) image_cif_pane

0x1dca,	// (0x0009e526) image_subqcif_pane

0x1dd4,	// (0x0009e530) main_video_pane_g1_ParamLimits

0x1dd4,	// (0x0009e530) main_video_pane_g1

0x1df4,	// (0x0009e550) main_video_pane_g2_ParamLimits

0x1df4,	// (0x0009e550) main_video_pane_g2

0x1e24,	// (0x0009e580) main_video_pane_g3_ParamLimits

0x1e24,	// (0x0009e580) main_video_pane_g3

0x1e4d,	// (0x0009e5a9) main_video_pane_g4_ParamLimits

0x1e4d,	// (0x0009e5a9) main_video_pane_g4

0x1e76,	// (0x0009e5d2) main_video_pane_g5_ParamLimits

0x1e76,	// (0x0009e5d2) main_video_pane_g5

0xaa71,	// (0x000a71cd) main_video_pane_g6_ParamLimits

0xaa71,	// (0x000a71cd) main_video_pane_g6

0x0006,

0xf225,	// (0x000ab981) main_video_pane_g_ParamLimits

0xf225,	// (0x000ab981) main_video_pane_g

0x1e98,	// (0x0009e5f4) main_video_pane_t1_ParamLimits

0x1e98,	// (0x0009e5f4) main_video_pane_t1

0xaa8b,	// (0x000a71e7) cams_zoom_pane_g1

0xaa94,	// (0x000a71f0) cams_zoom_pane_g2

0xaa9d,	// (0x000a71f9) cams_zoom_pane_g3

0xaaa6,	// (0x000a7202) cams_zoom_pane_g4

0x0003,

0xf234,	// (0x000ab990) cams_zoom_pane_g

0x1ee2,	// (0x0009e63e) grid_cams_pane

0x1ef0,	// (0x0009e64c) linegrid_cams_pane

0x1efc,	// (0x0009e658) cell_cams_pane_ParamLimits

0x1efc,	// (0x0009e658) cell_cams_pane

0xaaaf,	// (0x000a720b) cams_burst_image_pane

0xaab7,	// (0x000a7213) cell_cams_pane_g1

0xa0be,	// (0x000a681a) grid_highlight_pane_cp03

0xa8e6,	// (0x000a7042) mp_bg_pane_g1

0xa0be,	// (0x000a681a) bg_list_pane_cp03

0xc777,	// (0x000a8ed3) bg_mp_pane

0xc77f,	// (0x000a8edb) grid_mp_pane

0xc787,	// (0x000a8ee3) media_player_g1

0xc791,	// (0x000a8eed) media_player_t1

0xc79f,	// (0x000a8efb) media_player_t2

0xc7ad,	// (0x000a8f09) media_player_t3

0xc7bb,	// (0x000a8f17) media_player_t4

0xc7c9,	// (0x000a8f25) media_player_t5

0xc7d7,	// (0x000a8f33) media_player_t6

0xc7e5,	// (0x000a8f41) media_player_t7

0x0006,

0xf5d0,	// (0x000abd2c) media_player_t

0xc7f3,	// (0x000a8f4f) wait_bar_pane_cp02

0xf5b5,	// (0x000abd11) main_usb_pane_t

0x4358,	// (0x000a0ab4) cell_mp_pane

0xa8e6,	// (0x000a7042) cell_mp_pane_g1

0xa0be,	// (0x000a681a) grid_highlight_pane_cp06

0xaabf,	// (0x000a721b) grid_skin_colour_pane

0xaac7,	// (0x000a7223) list_highlight_pane_cp03

0x2021,	// (0x0009e77d) skin_g1

0xaacf,	// (0x000a722b) skin_t1

0xaade,	// (0x000a723a) skin_t2

0x0001,

0xf269,	// (0x000ab9c5) skin_t

0x202b,	// (0x0009e787) cell_skin_colour_pane_ParamLimits

0x202b,	// (0x0009e787) cell_skin_colour_pane

0xaaec,	// (0x000a7248) cell_skin_colour_pane_g1

0x20ab,	// (0x0009e807) call_video_g1_ParamLimits

0x20ab,	// (0x0009e807) call_video_g1

0x20bb,	// (0x0009e817) call_video_g2_ParamLimits

0x20bb,	// (0x0009e817) call_video_g2

0x0001,

0xf26e,	// (0x000ab9ca) call_video_g_ParamLimits

0xf26e,	// (0x000ab9ca) call_video_g

0x210b,	// (0x0009e867) call_video_uplink_pane_cp1_ParamLimits

0x210b,	// (0x0009e867) call_video_uplink_pane_cp1

0xaafe,	// (0x000a725a) call_video_uplink_pane_cp2

0x21d9,	// (0x0009e935) video_down_crop_pane_ParamLimits

0x21d9,	// (0x0009e935) video_down_crop_pane

0x22cb,	// (0x0009ea27) video_down_pane_ParamLimits

0x22cb,	// (0x0009ea27) video_down_pane

0xab06,	// (0x000a7262) video_down_subqcif_pane_ParamLimits

0xab06,	// (0x000a7262) video_down_subqcif_pane

0xab20,	// (0x000a727c) video_down_subqcif_pane_cp_ParamLimits

0xab20,	// (0x000a727c) video_down_subqcif_pane_cp

0xab48,	// (0x000a72a4) im_reading_pane_ParamLimits

0xab48,	// (0x000a72a4) im_reading_pane

0x23e8,	// (0x0009eb44) im_writing_pane_ParamLimits

0x23e8,	// (0x0009eb44) im_writing_pane

0x2406,	// (0x0009eb62) im_reading_pane_t1

0xab62,	// (0x000a72be) list_im_pane

0xab73,	// (0x000a72cf) scroll_pane_cp07

0x2448,	// (0x0009eba4) im_writing_pane_t1_ParamLimits

0x2448,	// (0x0009eba4) im_writing_pane_t1

0xab8c,	// (0x000a72e8) im_writing_pane_t2_ParamLimits

0xab8c,	// (0x000a72e8) im_writing_pane_t2

0x0001,

0xf278,	// (0x000ab9d4) im_writing_pane_t_ParamLimits

0xf278,	// (0x000ab9d4) im_writing_pane_t

0xa0be,	// (0x000a681a) input_focus_pane_cp04

0xa0be,	// (0x000a681a) input_focus_pane_cp05

0x245a,	// (0x0009ebb6) list_im_single_pane_ParamLimits

0x245a,	// (0x0009ebb6) list_im_single_pane

0x2473,	// (0x0009ebcf) list_single_im_pane_t1

0x431c,	// (0x000a0a78) blid_accuracy_pane

0x4324,	// (0x000a0a80) blid_compass_pane

0x432e,	// (0x000a0a8a) main_location_t1

0x433c,	// (0x000a0a98) main_location_t2

0x434a,	// (0x000a0aa6) main_location_t3

0x0002,

0xf5df,	// (0x000abd3b) main_location_t

0xa0be,	// (0x000a681a) aid_levels_location

0xa8e6,	// (0x000a7042) blid_accuracy_pane_g1

0xa8e6,	// (0x000a7042) blid_accuracy_pane_g2

0x0001,

0xf2da,	// (0x000aba36) blid_accuracy_pane_g

0xabec,	// (0x000a7348) wml_content_pane

0xac2a,	// (0x000a7386) wml_button_pane_ParamLimits

0xac2a,	// (0x000a7386) wml_button_pane

0x2482,	// (0x0009ebde) wml_list_single_large_pane_ParamLimits

0x2482,	// (0x0009ebde) wml_list_single_large_pane

0x24a4,	// (0x0009ec00) wml_list_single_medium_pane_ParamLimits

0x24a4,	// (0x0009ec00) wml_list_single_medium_pane

0x24c7,	// (0x0009ec23) wml_list_single_small_pane_ParamLimits

0x24c7,	// (0x0009ec23) wml_list_single_small_pane

0xac3e,	// (0x000a739a) wml_selection_box_pane_ParamLimits

0xac3e,	// (0x000a739a) wml_selection_box_pane

0xac51,	// (0x000a73ad) wml_list_single_pane_t1

0xac60,	// (0x000a73bc) wml_list_single_medium_pane_t1

0xac6f,	// (0x000a73cb) wml_list_single_large_pane_t1

0xac7e,	// (0x000a73da) input_focus_pane_cp02_ParamLimits

0xac7e,	// (0x000a73da) input_focus_pane_cp02

0xac91,	// (0x000a73ed) wml_selection_box_pane_g1

0xac9a,	// (0x000a73f6) wml_selection_box_pane_t1_ParamLimits

0xac9a,	// (0x000a73f6) wml_selection_box_pane_t1

0xa7cc,	// (0x000a6f28) bg_wml_button_pane_ParamLimits

0xa7cc,	// (0x000a6f28) bg_wml_button_pane

0xacb2,	// (0x000a740e) wml_button_pane_g1

0xacba,	// (0x000a7416) wml_button_pane_t1

0xacb2,	// (0x000a740e) wml_button_bg_pane_g1

0xacca,	// (0x000a7426) wml_button_bg_pane_g2

0xacd2,	// (0x000a742e) wml_button_bg_pane_g3

0xacda,	// (0x000a7436) wml_button_bg_pane_g4

0xace2,	// (0x000a743e) wml_button_bg_pane_g5

0xacea,	// (0x000a7446) wml_button_bg_pane_g6

0xacf2,	// (0x000a744e) wml_button_bg_pane_g7

0xacfa,	// (0x000a7456) wml_button_bg_pane_g8

0xad02,	// (0x000a745e) wml_button_bg_pane_g9

0x0008,

0xf27d,	// (0x000ab9d9) wml_button_bg_pane_g

0x24ef,	// (0x0009ec4b) bg_list_pane_cp02

0xad0a,	// (0x000a7466) mce_header_pane_ParamLimits

0xad0a,	// (0x000a7466) mce_header_pane

0xad20,	// (0x000a747c) mce_icon_pane

0xad20,	// (0x000a747c) mce_image_pane

0xad29,	// (0x000a7485) mce_text_pane_ParamLimits

0xad29,	// (0x000a7485) mce_text_pane

0x24f9,	// (0x0009ec55) scroll_pane_cp03

0xac22,	// (0x000a737e) scroll_pane_cp04

0xad3c,	// (0x000a7498) scroll_pane_cp05_ParamLimits

0xad3c,	// (0x000a7498) scroll_pane_cp05

0x2503,	// (0x0009ec5f) mce_header_field_pane_ParamLimits

0x2503,	// (0x0009ec5f) mce_header_field_pane

0x2525,	// (0x0009ec81) mce_header_field_pane_2_ParamLimits

0x2525,	// (0x0009ec81) mce_header_field_pane_2

0x253b,	// (0x0009ec97) mce_header_field_pane_3

0x2543,	// (0x0009ec9f) list_single_mce_message_pane_ParamLimits

0x2543,	// (0x0009ec9f) list_single_mce_message_pane

0x2562,	// (0x0009ecbe) list_single_mce_smart_pane_ParamLimits

0x2562,	// (0x0009ecbe) list_single_mce_smart_pane

0xad48,	// (0x000a74a4) input_focus_pane_cp03

0xad51,	// (0x000a74ad) list_header_data_pane

0x258c,	// (0x0009ece8) mce_header_field_pane_t1

0x259c,	// (0x0009ecf8) list_single_mce_header_pane_ParamLimits

0x259c,	// (0x0009ecf8) list_single_mce_header_pane

0xad59,	// (0x000a74b5) list_single_mce_header_pane_t1

0xad68,	// (0x000a74c4) list_single_mce_message_pane_g1

0xad70,	// (0x000a74cc) list_single_mce_message_pane_t1

0x25e0,	// (0x0009ed3c) bg_cale_heading_pane_cp01_ParamLimits

0x25e0,	// (0x0009ed3c) bg_cale_heading_pane_cp01

0xad7e,	// (0x000a74da) bg_cale_pane_cp02_ParamLimits

0xad7e,	// (0x000a74da) bg_cale_pane_cp02

0x2627,	// (0x0009ed83) cale_month_corner_pane

0x2646,	// (0x0009eda2) cale_month_day_heading_pane_ParamLimits

0x2646,	// (0x0009eda2) cale_month_day_heading_pane

0x269d,	// (0x0009edf9) cale_month_pane_g1_ParamLimits

0x269d,	// (0x0009edf9) cale_month_pane_g1

0x26d9,	// (0x0009ee35) cale_month_pane_g2_ParamLimits

0x26d9,	// (0x0009ee35) cale_month_pane_g2

0x2711,	// (0x0009ee6d) cale_month_pane_g3_ParamLimits

0x2711,	// (0x0009ee6d) cale_month_pane_g3

0x2765,	// (0x0009eec1) cale_month_pane_g4_ParamLimits

0x2765,	// (0x0009eec1) cale_month_pane_g4

0x27b9,	// (0x0009ef15) cale_month_pane_g5_ParamLimits

0x27b9,	// (0x0009ef15) cale_month_pane_g5

0x280d,	// (0x0009ef69) cale_month_pane_g6_ParamLimits

0x280d,	// (0x0009ef69) cale_month_pane_g6

0x2871,	// (0x0009efcd) cale_month_pane_g7_ParamLimits

0x2871,	// (0x0009efcd) cale_month_pane_g7

0x28d5,	// (0x0009f031) cale_month_pane_g8_ParamLimits

0x28d5,	// (0x0009f031) cale_month_pane_g8

0x2939,	// (0x0009f095) cale_month_pane_g9_ParamLimits

0x2939,	// (0x0009f095) cale_month_pane_g9

0x2991,	// (0x0009f0ed) cale_month_pane_g10_ParamLimits

0x2991,	// (0x0009f0ed) cale_month_pane_g10

0x29df,	// (0x0009f13b) cale_month_pane_g11_ParamLimits

0x29df,	// (0x0009f13b) cale_month_pane_g11

0x2a2b,	// (0x0009f187) cale_month_pane_g12_ParamLimits

0x2a2b,	// (0x0009f187) cale_month_pane_g12

0x2a7b,	// (0x0009f1d7) cale_month_pane_g13_ParamLimits

0x2a7b,	// (0x0009f1d7) cale_month_pane_g13

0x000c,

0xf290,	// (0x000ab9ec) cale_month_pane_g_ParamLimits

0xf290,	// (0x000ab9ec) cale_month_pane_g

0x2acb,	// (0x0009f227) cale_month_week_pane

0x2aeb,	// (0x0009f247) grid_cale_month_pane_ParamLimits

0x2aeb,	// (0x0009f247) grid_cale_month_pane

0x2b39,	// (0x0009f295) cale_month_day_heading_pane_t1

0x2bbb,	// (0x0009f317) cale_month_day_heading_pane_t2

0x2c48,	// (0x0009f3a4) cale_month_day_heading_pane_t3

0x2cd5,	// (0x0009f431) cale_month_day_heading_pane_t4

0x2d62,	// (0x0009f4be) cale_month_day_heading_pane_t5

0x2df7,	// (0x0009f553) cale_month_day_heading_pane_t6

0x2e94,	// (0x0009f5f0) cale_month_day_heading_pane_t7

0x0006,

0xf2ab,	// (0x000aba07) cale_month_day_heading_pane_t

0xaa0a,	// (0x000a7166) bg_cale_side_pane_cp01

0x2f31,	// (0x0009f68d) cale_month_week_pane_t1

0x2f4a,	// (0x0009f6a6) cale_month_week_pane_t2

0x2f63,	// (0x0009f6bf) cale_month_week_pane_t3

0x2f7c,	// (0x0009f6d8) cale_month_week_pane_t4

0x2f95,	// (0x0009f6f1) cale_month_week_pane_t5

0x2fb0,	// (0x0009f70c) cale_month_week_pane_t6

0x0005,

0xf2ba,	// (0x000aba16) cale_month_week_pane_t

0x2fd1,	// (0x0009f72d) cell_cale_month_pane_ParamLimits

0x2fd1,	// (0x0009f72d) cell_cale_month_pane

0x311d,	// (0x0009f879) cell_cale_month_pane_g1

0x3129,	// (0x0009f885) cell_cale_month_pane_t1_ParamLimits

0x3129,	// (0x0009f885) cell_cale_month_pane_t1

0xaa18,	// (0x000a7174) grid_highlight_pane_cp08

0xa8e6,	// (0x000a7042) main_smil_g1

0x3149,	// (0x0009f8a5) smil_status_pane

0xadbd,	// (0x000a7519) smil_text_pane

0xc695,	// (0x000a8df1) bg_popup_call3_rect_pane_g8

0xc69d,	// (0x000a8df9) bg_popup_call3_rect_pane_g9

0x0008,

0xf573,	// (0x000abccf) bg_popup_call3_rect_pane_g

0xc92b,	// (0x000a9087) smil_status_volume_pane_g1

0x315c,	// (0x0009f8b8) smil_status_pane_t1

0x4710,	// (0x000a0e6c) volume_smil_pane

0xadc7,	// (0x000a7523) list_smil_text_pane

0x3173,	// (0x0009f8cf) scroll_pane_cp011

0x317e,	// (0x0009f8da) smil_text_list_pane_t1_ParamLimits

0x317e,	// (0x0009f8da) smil_text_list_pane_t1

0x31d0,	// (0x0009f92c) aid_volume_smil_ParamLimits

0x31d0,	// (0x0009f92c) aid_volume_smil

0xa8e6,	// (0x000a7042) smil_volume_pane_g1

0xa8e6,	// (0x000a7042) smil_volume_pane_g2

0x0001,

0xf2da,	// (0x000aba36) smil_volume_pane_g

0x1434,	// (0x0009db90) listscroll_cale_day_pane

0xadd1,	// (0x000a752d) bg_cale_pane

0xade9,	// (0x000a7545) list_cale_pane

0xae0c,	// (0x000a7568) scroll_pane_cp09

0xae1d,	// (0x000a7579) cale_bg_pane_g1

0xae25,	// (0x000a7581) cale_bg_pane_g2

0xae2d,	// (0x000a7589) cale_bg_pane_g3

0xae35,	// (0x000a7591) cale_bg_pane_g4

0xae3d,	// (0x000a7599) cale_bg_pane_g5

0xae45,	// (0x000a75a1) cale_bg_pane_g6

0xae4d,	// (0x000a75a9) cale_bg_pane_g7

0xae55,	// (0x000a75b1) cale_bg_pane_g8

0xae5d,	// (0x000a75b9) cale_bg_pane_g9

0x0008,

0xf2df,	// (0x000aba3b) cale_bg_pane_g

0x31f2,	// (0x0009f94e) list_cale_time_pane_ParamLimits

0x31f2,	// (0x0009f94e) list_cale_time_pane

0xae6d,	// (0x000a75c9) list_cale_time_pane_g1_ParamLimits

0xae6d,	// (0x000a75c9) list_cale_time_pane_g1

0xae79,	// (0x000a75d5) list_cale_time_pane_g2_ParamLimits

0xae79,	// (0x000a75d5) list_cale_time_pane_g2

0x3206,	// (0x0009f962) list_cale_time_pane_g3_ParamLimits

0x3206,	// (0x0009f962) list_cale_time_pane_g3

0x3214,	// (0x0009f970) list_cale_time_pane_g4_ParamLimits

0x3214,	// (0x0009f970) list_cale_time_pane_g4

0x3222,	// (0x0009f97e) list_cale_time_pane_g5_ParamLimits

0x3222,	// (0x0009f97e) list_cale_time_pane_g5

0x0005,

0xf2f2,	// (0x000aba4e) list_cale_time_pane_g_ParamLimits

0xf2f2,	// (0x000aba4e) list_cale_time_pane_g

0xae93,	// (0x000a75ef) list_cale_time_pane_t1_ParamLimits

0xae93,	// (0x000a75ef) list_cale_time_pane_t1

0xaebb,	// (0x000a7617) list_cale_time_pane_t2_ParamLimits

0xaebb,	// (0x000a7617) list_cale_time_pane_t2

0x35eb,	// (0x0009fd47) aid_blid_cardinal_pane

0x362d,	// (0x0009fd89) compass_pane_t4

0xaee3,	// (0x000a763f) list_cale_time_pane_t4_ParamLimits

0xaee3,	// (0x000a763f) list_cale_time_pane_t4

0x363b,	// (0x0009fd97) compass_pane_t5

0x364b,	// (0x0009fda7) compass_pane_t6

0x3659,	// (0x0009fdb5) compass_pane_t7

0xb38a,	// (0x000a7ae6) navi_pane_cc_t1

0xb4f9,	// (0x000a7c55) aid_phob_thumbnail_center_pane

0x3e18,	// (0x000a0574) main_postcard_pane_g4_ParamLimits

0x0002,

0xf2ff,	// (0x000aba5b) list_cale_time_pane_t_ParamLimits

0xf2ff,	// (0x000aba5b) list_cale_time_pane_t

0x9d15,	// (0x000a6471) bg_popup_window_pane_cp02_ParamLimits

0x9d15,	// (0x000a6471) bg_popup_window_pane_cp02

0xaf0b,	// (0x000a7667) heading_pane_cp01_ParamLimits

0xaf0b,	// (0x000a7667) heading_pane_cp01

0xaf17,	// (0x000a7673) loc_req_pane_ParamLimits

0xaf17,	// (0x000a7673) loc_req_pane

0xaf27,	// (0x000a7683) loc_type_pane_ParamLimits

0xaf27,	// (0x000a7683) loc_type_pane

0xafd2,	// (0x000a772e) loc_type_pane_t1_ParamLimits

0xafd2,	// (0x000a772e) loc_type_pane_t1

0xafe4,	// (0x000a7740) loc_type_pane_t2_ParamLimits

0xafe4,	// (0x000a7740) loc_type_pane_t2

0xaff6,	// (0x000a7752) loc_type_pane_t3_ParamLimits

0xaff6,	// (0x000a7752) loc_type_pane_t3

0x0002,

0xf306,	// (0x000aba62) loc_type_pane_t_ParamLimits

0xf306,	// (0x000aba62) loc_type_pane_t

0xb008,	// (0x000a7764) list_loc_req_pane

0xb012,	// (0x000a776e) scroll_pane_cp012

0x3230,	// (0x0009f98c) list_single_loc_request_popup_menu_pane_ParamLimits

0x3230,	// (0x0009f98c) list_single_loc_request_popup_menu_pane

0xb01d,	// (0x000a7779) list_single_loc_request_popup_menu_pane_g1_ParamLimits

0xb01d,	// (0x000a7779) list_single_loc_request_popup_menu_pane_g1

0xb029,	// (0x000a7785) list_single_loc_request_popup_menu_pane_g2_ParamLimits

0xb029,	// (0x000a7785) list_single_loc_request_popup_menu_pane_g2

0x0001,

0xf30d,	// (0x000aba69) list_single_loc_request_popup_menu_pane_g_ParamLimits

0xf30d,	// (0x000aba69) list_single_loc_request_popup_menu_pane_g

0xb035,	// (0x000a7791) list_single_loc_request_popup_menu_pane_t1_ParamLimits

0xb035,	// (0x000a7791) list_single_loc_request_popup_menu_pane_t1

0x3242,	// (0x0009f99e) bg_popup_window_pane_cp03_ParamLimits

0x3242,	// (0x0009f99e) bg_popup_window_pane_cp03

0x3250,	// (0x0009f9ac) heading_loc_req_pane_ParamLimits

0x3250,	// (0x0009f9ac) heading_loc_req_pane

0x325c,	// (0x0009f9b8) popup_dyc_status_message_window_g1_ParamLimits

0x325c,	// (0x0009f9b8) popup_dyc_status_message_window_g1

0x3268,	// (0x0009f9c4) popup_dyc_status_message_window_t1_ParamLimits

0x3268,	// (0x0009f9c4) popup_dyc_status_message_window_t1

0x327a,	// (0x0009f9d6) popup_dyc_status_message_window_t2_ParamLimits

0x327a,	// (0x0009f9d6) popup_dyc_status_message_window_t2

0x328c,	// (0x0009f9e8) popup_dyc_status_message_window_t3_ParamLimits

0x328c,	// (0x0009f9e8) popup_dyc_status_message_window_t3

0x0002,

0xf312,	// (0x000aba6e) popup_dyc_status_message_window_t_ParamLimits

0xf312,	// (0x000aba6e) popup_dyc_status_message_window_t

0xa0be,	// (0x000a681a) bg_heading_pane_cp01

0xb04b,	// (0x000a77a7) heading_loc_req_pane_g1

0xb053,	// (0x000a77af) heading_loc_req_pane_g2

0xb05b,	// (0x000a77b7) heading_loc_req_pane_g3

0x0002,

0xf319,	// (0x000aba75) heading_loc_req_pane_g

0xb063,	// (0x000a77bf) heading_loc_req_pane_t1

0xb073,	// (0x000a77cf) bg_popup_sub_pane_cp01_ParamLimits

0xb073,	// (0x000a77cf) bg_popup_sub_pane_cp01

0xb081,	// (0x000a77dd) popup_cale_events_window_g1_ParamLimits

0xb081,	// (0x000a77dd) popup_cale_events_window_g1

0xb0a1,	// (0x000a77fd) popup_cale_events_window_g2_ParamLimits

0xb0a1,	// (0x000a77fd) popup_cale_events_window_g2

0x0001,

0xf34d,	// (0x000abaa9) popup_cale_events_window_g_ParamLimits

0xf34d,	// (0x000abaa9) popup_cale_events_window_g

0xb0c1,	// (0x000a781d) popup_cale_events_window_t1_ParamLimits

0xb0c1,	// (0x000a781d) popup_cale_events_window_t1

0xb0d3,	// (0x000a782f) popup_cale_events_window_t2_ParamLimits

0xb0d3,	// (0x000a782f) popup_cale_events_window_t2

0xb111,	// (0x000a786d) popup_cale_events_window_t3_ParamLimits

0xb111,	// (0x000a786d) popup_cale_events_window_t3

0xb14b,	// (0x000a78a7) popup_cale_events_window_t4_ParamLimits

0xb14b,	// (0x000a78a7) popup_cale_events_window_t4

0x0003,

0xf352,	// (0x000abaae) popup_cale_events_window_t_ParamLimits

0xf352,	// (0x000abaae) popup_cale_events_window_t

0x3387,	// (0x0009fae3) call_type_pane

0xb3de,	// (0x000a7b3a) popup_call_status_window_g1

0x3393,	// (0x0009faef) popup_call_status_window_g2

0x339f,	// (0x0009fafb) popup_call_status_window_g3

0x0002,

0xf35b,	// (0x000abab7) popup_call_status_window_g

0xb181,	// (0x000a78dd) call_type_pane_g1

0xb18a,	// (0x000a78e6) call_type_pane_g2

0x0001,

0xf362,	// (0x000ababe) call_type_pane_g

0xa0be,	// (0x000a681a) bg_popup_sub_pane_cp02

0xb193,	// (0x000a78ef) listscroll_popup_wml_pane

0xb19b,	// (0x000a78f7) list_wml_pane

0xb1a5,	// (0x000a7901) scroll_pane_cp013

0xb1b0,	// (0x000a790c) list_single_graphic_popup_wml_pane_ParamLimits

0xb1b0,	// (0x000a790c) list_single_graphic_popup_wml_pane

0xa8e6,	// (0x000a7042) list_single_graphic_popup_wml_pane_g1

0xb1c4,	// (0x000a7920) list_single_graphic_popup_wml_pane_g2

0x0001,

0xf367,	// (0x000abac3) list_single_graphic_popup_wml_pane_g

0xb1cc,	// (0x000a7928) list_single_graphic_popup_wml_pane_t1

0xb1e2,	// (0x000a793e) aid_call_pane

0xa7c4,	// (0x000a6f20) popup_clock_analogue_window_g1

0xa7c4,	// (0x000a6f20) popup_clock_analogue_window_g2

0x33ab,	// (0x0009fb07) popup_clock_analogue_window_g3

0x33ab,	// (0x0009fb07) popup_clock_analogue_window_g4

0xa8e6,	// (0x000a7042) popup_clock_analogue_window_g5

0x0004,

0xf36c,	// (0x000abac8) popup_clock_analogue_window_g

0x33b3,	// (0x0009fb0f) popup_clock_analogue_window_t1

0x33c1,	// (0x0009fb1d) clock_digital_number_pane_ParamLimits

0x33c1,	// (0x0009fb1d) clock_digital_number_pane

0x33cd,	// (0x0009fb29) clock_digital_number_pane_cp02_ParamLimits

0x33cd,	// (0x0009fb29) clock_digital_number_pane_cp02

0x33d9,	// (0x0009fb35) clock_digital_number_pane_cp03_ParamLimits

0x33d9,	// (0x0009fb35) clock_digital_number_pane_cp03

0x33e5,	// (0x0009fb41) clock_digital_number_pane_cp04_ParamLimits

0x33e5,	// (0x0009fb41) clock_digital_number_pane_cp04

0x33f1,	// (0x0009fb4d) clock_digital_separator_pane_ParamLimits

0x33f1,	// (0x0009fb4d) clock_digital_separator_pane

0x33fd,	// (0x0009fb59) popup_clock_digital_window_t1

0xa8e6,	// (0x000a7042) clock_digital_number_pane_g1

0xa8e6,	// (0x000a7042) clock_digital_number_pane_g2

0x0001,

0xf2da,	// (0x000aba36) clock_digital_number_pane_g

0xa8e6,	// (0x000a7042) clock_digital_separator_pane_g1

0xa8e6,	// (0x000a7042) clock_digital_separator_pane_g2

0x0001,

0xf2da,	// (0x000aba36) clock_digital_separator_pane_g

0xa0be,	// (0x000a681a) bg_popup_window_pane_cp04

0xb1ea,	// (0x000a7946) heading_pane_cp03

0xb1f2,	// (0x000a794e) listscroll_popup_gms_pane

0xb1fa,	// (0x000a7956) grid_large_graphic_popup_pane

0xb204,	// (0x000a7960) listscroll_popup_gms_pane_g1

0xb20c,	// (0x000a7968) listscroll_popup_gms_pane_g2

0x0001,

0xf377,	// (0x000abad3) listscroll_popup_gms_pane_g

0xac22,	// (0x000a737e) scroll_pane_cp014

0x341a,	// (0x0009fb76) cell_large_graphic_popup_pane_ParamLimits

0x341a,	// (0x0009fb76) cell_large_graphic_popup_pane

0x3434,	// (0x0009fb90) cell_large_graphic_popup_pane_g1_ParamLimits

0x3434,	// (0x0009fb90) cell_large_graphic_popup_pane_g1

0xb214,	// (0x000a7970) cell_large_graphic_popup_pane_g2_ParamLimits

0xb214,	// (0x000a7970) cell_large_graphic_popup_pane_g2

0xb220,	// (0x000a797c) cell_large_graphic_popup_pane_g3_ParamLimits

0xb220,	// (0x000a797c) cell_large_graphic_popup_pane_g3

0xb22d,	// (0x000a7989) cell_large_graphic_popup_pane_g4_ParamLimits

0xb22d,	// (0x000a7989) cell_large_graphic_popup_pane_g4

0x0003,

0xf37c,	// (0x000abad8) cell_large_graphic_popup_pane_g_ParamLimits

0xf37c,	// (0x000abad8) cell_large_graphic_popup_pane_g

0xb23d,	// (0x000a7999) grid_highlight_pane_cp010

0xa8e6,	// (0x000a7042) bg_popup_call_pane_g1

0xb247,	// (0x000a79a3) list_single_graphic_popup_conf_pane_ParamLimits

0xb247,	// (0x000a79a3) list_single_graphic_popup_conf_pane

0xb259,	// (0x000a79b5) list_highlight_pane_cp01

0xb262,	// (0x000a79be) list_single_graphic_popup_conf_pane_g1

0xb26a,	// (0x000a79c6) list_single_graphic_popup_conf_pane_g2

0x0001,

0xf385,	// (0x000abae1) list_single_graphic_popup_conf_pane_g

0xb272,	// (0x000a79ce) list_single_graphic_popup_conf_pane_t1

0xb280,	// (0x000a79dc) linegrid_cams_pane_g1

0x3440,	// (0x0009fb9c) linegrid_cams_pane_g2

0xaa4b,	// (0x000a71a7) linegrid_cams_pane_g3

0xb289,	// (0x000a79e5) linegrid_cams_pane_g4

0x3449,	// (0x0009fba5) linegrid_cams_pane_g5

0x3452,	// (0x0009fbae) linegrid_cams_pane_g6

0xaa54,	// (0x000a71b0) linegrid_cams_pane_g7

0x0006,

0xf38a,	// (0x000abae6) linegrid_cams_pane_g

0xb292,	// (0x000a79ee) popup_clock_analogue_window

0xb292,	// (0x000a79ee) popup_clock_digital_window

0xa0be,	// (0x000a681a) popup_phob_thumbnail_window

0xa8e6,	// (0x000a7042) call_video_uplink_pane_g1

0xb29b,	// (0x000a79f7) call_video_uplink_pane_g2

0x0001,

0xf399,	// (0x000abaf5) call_video_uplink_pane_g

0xb2a3,	// (0x000a79ff) video_uplink_pane

0xb2ab,	// (0x000a7a07) mce_image_pane_g1

0x345d,	// (0x0009fbb9) mce_image_pane_g2

0x3467,	// (0x0009fbc3) mce_image_pane_g3

0x3471,	// (0x0009fbcd) mce_image_pane_g4

0x3479,	// (0x0009fbd5) mce_image_pane_g5

0x0004,

0xf39e,	// (0x000abafa) mce_image_pane_g

0xb2b5,	// (0x000a7a11) control_top_pane_stacon_cp01_ParamLimits

0xb2b5,	// (0x000a7a11) control_top_pane_stacon_cp01

0xb2c9,	// (0x000a7a25) uni_indicator_pane_stacon_cp01_ParamLimits

0xb2c9,	// (0x000a7a25) uni_indicator_pane_stacon_cp01

0xb2da,	// (0x000a7a36) bg_popup_sub_pane_cp03

0x3481,	// (0x0009fbdd) chi_dic_find_pane

0x3489,	// (0x0009fbe5) listscroll_chi_dic_pane

0x3492,	// (0x0009fbee) main_pane_chidic_g1

0x34a5,	// (0x0009fc01) chi_dic_find_pane_t1

0xb2e4,	// (0x000a7a40) find_chidic_pane

0xb2ed,	// (0x000a7a49) chi_dic_list_pane_ParamLimits

0xb2ed,	// (0x000a7a49) chi_dic_list_pane

0xb2fe,	// (0x000a7a5a) scroll_pane_cp020

0x34b3,	// (0x0009fc0f) find_chidic_pane_t1

0xa0be,	// (0x000a681a) input_focus_pane_cp06

0x34c2,	// (0x0009fc1e) list_chi_dic_pane_ParamLimits

0x34c2,	// (0x0009fc1e) list_chi_dic_pane

0x34d7,	// (0x0009fc33) list_chi_dic_pane_t1_ParamLimits

0x34d7,	// (0x0009fc33) list_chi_dic_pane_t1

0xa0be,	// (0x000a681a) list_highlight_pane_cp020

0xb306,	// (0x000a7a62) bg_cale_heading_pane_g1

0x34ea,	// (0x0009fc46) bg_cale_heading_pane_g2

0x34f2,	// (0x0009fc4e) bg_cale_heading_pane_g3

0x34fa,	// (0x0009fc56) bg_cale_heading_pane_g4

0x3504,	// (0x0009fc60) bg_cale_heading_pane_g5

0x350e,	// (0x0009fc6a) bg_cale_heading_pane_g6

0x3516,	// (0x0009fc72) bg_cale_heading_pane_g7

0x351e,	// (0x0009fc7a) bg_cale_heading_pane_g8

0x3528,	// (0x0009fc84) bg_cale_heading_pane_g9

0x0008,

0xf3a9,	// (0x000abb05) bg_cale_heading_pane_g

0xb306,	// (0x000a7a62) bg_cale_side_pane_g1

0x3532,	// (0x0009fc8e) bg_cale_side_pane_g2

0x353c,	// (0x0009fc98) bg_cale_side_pane_g3

0x3546,	// (0x0009fca2) bg_cale_side_pane_g4

0x3550,	// (0x0009fcac) bg_cale_side_pane_g5

0x355a,	// (0x0009fcb6) bg_cale_side_pane_g6

0x3564,	// (0x0009fcc0) bg_cale_side_pane_g7

0x356e,	// (0x0009fcca) bg_cale_side_pane_g8

0x3576,	// (0x0009fcd2) bg_cale_side_pane_g9

0x0008,

0xf3bc,	// (0x000abb18) bg_cale_side_pane_g

0x357e,	// (0x0009fcda) popup_call_status_window_ParamLimits

0x357e,	// (0x0009fcda) popup_call_status_window

0xb30e,	// (0x000a7a6a) stacon_top_pane

0xb316,	// (0x000a7a72) status_pane_ParamLimits

0xb316,	// (0x000a7a72) status_pane

0xb32b,	// (0x000a7a87) status_small_pane

0xb333,	// (0x000a7a8f) control_pane

0xa0be,	// (0x000a681a) stacon_bottom_pane

0xb33b,	// (0x000a7a97) list_single_mce_smart_pane_t1_ParamLimits

0xb33b,	// (0x000a7a97) list_single_mce_smart_pane_t1

0xb34e,	// (0x000a7aaa) list_single_mce_smart_pane_t2_ParamLimits

0xb34e,	// (0x000a7aaa) list_single_mce_smart_pane_t2

0x0001,

0xf3cf,	// (0x000abb2b) list_single_mce_smart_pane_t_ParamLimits

0xf3cf,	// (0x000abb2b) list_single_mce_smart_pane_t

0x358a,	// (0x0009fce6) compass_pane

0x3595,	// (0x0009fcf1) main_location2_pane_t1

0x35ab,	// (0x0009fd07) main_location2_pane_t2

0x35c1,	// (0x0009fd1d) main_location2_pane_t3

0x0003,

0xf3d4,	// (0x000abb30) main_location2_pane_t

0xb36d,	// (0x000a7ac9) compass_pane_g1_ParamLimits

0xb36d,	// (0x000a7ac9) compass_pane_g1

0x360f,	// (0x0009fd6b) compass_pane_t1

0x361e,	// (0x0009fd7a) compass_pane_t2

0x0005,

0xf3dd,	// (0x000abb39) compass_pane_t

0x3669,	// (0x0009fdc5) text_secondary_cp61

0xb381,	// (0x000a7add) navi_pane_cams_g5

0xb3a4,	// (0x000a7b00) navi_pane_im_t1

0xb3b2,	// (0x000a7b0e) navi_pane_mp_g1_ParamLimits

0xb3b2,	// (0x000a7b0e) navi_pane_mp_g1

0xb3c6,	// (0x000a7b22) navi_pane_mp_g2_ParamLimits

0xb3c6,	// (0x000a7b22) navi_pane_mp_g2

0xb3ec,	// (0x000a7b48) navi_pane_mp_g3_ParamLimits

0xb3ec,	// (0x000a7b48) navi_pane_mp_g3

0x0002,

0xf3f1,	// (0x000abb4d) navi_pane_mp_g_ParamLimits

0xf3f1,	// (0x000abb4d) navi_pane_mp_g

0xb3f8,	// (0x000a7b54) navi_pane_mp_t1

0xb406,	// (0x000a7b62) navi_pane_mp_t2

0x0002,

0xf3f8,	// (0x000abb54) navi_pane_mp_t

0xb442,	// (0x000a7b9e) navi_pane_vt_g1

0xb3f8,	// (0x000a7b54) navi_pane_vt_t1

0xb44a,	// (0x000a7ba6) navi_slider_pane

0xb452,	// (0x000a7bae) zooming_pane

0xb45a,	// (0x000a7bb6) navi_slider_pane_g1

0x379e,	// (0x0009fefa) navi_slider_pane_g2

0x0006,

0xf3ff,	// (0x000abb5b) navi_slider_pane_g

0xb47e,	// (0x000a7bda) aid_levels_zoom

0xb486,	// (0x000a7be2) zooming_pane_g1

0xb48e,	// (0x000a7bea) zooming_pane_g2

0xb48e,	// (0x000a7bea) zooming_pane_g3

0x0002,

0xf40e,	// (0x000abb6a) zooming_pane_g

0xb496,	// (0x000a7bf2) level_10_zoom

0xb49f,	// (0x000a7bfb) level_11_zoom

0xb4a8,	// (0x000a7c04) level_1_zoom

0xb4b1,	// (0x000a7c0d) level_2_zoom

0xb4ba,	// (0x000a7c16) level_3_zoom

0xb4c3,	// (0x000a7c1f) level_4_zoom

0xb4cc,	// (0x000a7c28) level_5_zoom

0xb4d5,	// (0x000a7c31) level_6_zoom

0xb4de,	// (0x000a7c3a) level_7_zoom

0xb4e7,	// (0x000a7c43) level_8_zoom

0xb4f0,	// (0x000a7c4c) level_9_zoom

0xb501,	// (0x000a7c5d) popup_phob_thumbnail_window_g1

0xb509,	// (0x000a7c65) popup_phob_thumbnail_window_g2

0x0001,

0xf415,	// (0x000abb71) popup_phob_thumbnail_window_g

0xc7fb,	// (0x000a8f57) level_1_location

0xc803,	// (0x000a8f5f) level_2_location

0xc80b,	// (0x000a8f67) level_3_location

0xc813,	// (0x000a8f6f) level_4_location

0xb452,	// (0x000a7bae) level_5_location

0x37b0,	// (0x0009ff0c) mce_icon_pane_g1

0x37b8,	// (0x0009ff14) mce_icon_pane_g2

0x0001,

0xf41a,	// (0x000abb76) mce_icon_pane_g

0x37c0,	// (0x0009ff1c) main_mup_pane_g1_ParamLimits

0x37c0,	// (0x0009ff1c) main_mup_pane_g1

0x37d8,	// (0x0009ff34) main_mup_pane_g2_ParamLimits

0x37d8,	// (0x0009ff34) main_mup_pane_g2

0x37f4,	// (0x0009ff50) main_mup_pane_g3_ParamLimits

0x37f4,	// (0x0009ff50) main_mup_pane_g3

0x3810,	// (0x0009ff6c) main_mup_pane_g4_ParamLimits

0x3810,	// (0x0009ff6c) main_mup_pane_g4

0x382c,	// (0x0009ff88) main_mup_pane_g5_ParamLimits

0x382c,	// (0x0009ff88) main_mup_pane_g5

0x384d,	// (0x0009ffa9) main_mup_pane_g6_ParamLimits

0x384d,	// (0x0009ffa9) main_mup_pane_g6

0x386d,	// (0x0009ffc9) main_mup_pane_g7_ParamLimits

0x386d,	// (0x0009ffc9) main_mup_pane_g7

0x3891,	// (0x0009ffed) main_mup_pane_g8_ParamLimits

0x3891,	// (0x0009ffed) main_mup_pane_g8

0x38b5,	// (0x000a0011) main_mup_pane_g9_ParamLimits

0x38b5,	// (0x000a0011) main_mup_pane_g9

0x38d8,	// (0x000a0034) main_mup_pane_g10_ParamLimits

0x38d8,	// (0x000a0034) main_mup_pane_g10

0x38fb,	// (0x000a0057) main_mup_pane_g11_ParamLimits

0x38fb,	// (0x000a0057) main_mup_pane_g11

0x391b,	// (0x000a0077) main_mup_pane_g12_ParamLimits

0x391b,	// (0x000a0077) main_mup_pane_g12

0x3929,	// (0x000a0085) main_mup_pane_g13_ParamLimits

0x3929,	// (0x000a0085) main_mup_pane_g13

0x000c,

0xf41f,	// (0x000abb7b) main_mup_pane_g_ParamLimits

0xf41f,	// (0x000abb7b) main_mup_pane_g

0x393f,	// (0x000a009b) main_mup_pane_t1_ParamLimits

0x393f,	// (0x000a009b) main_mup_pane_t1

0x395e,	// (0x000a00ba) main_mup_pane_t2_ParamLimits

0x395e,	// (0x000a00ba) main_mup_pane_t2

0x3978,	// (0x000a00d4) main_mup_pane_t3_ParamLimits

0x3978,	// (0x000a00d4) main_mup_pane_t3

0x3992,	// (0x000a00ee) main_mup_pane_t4_ParamLimits

0x3992,	// (0x000a00ee) main_mup_pane_t4

0x39a4,	// (0x000a0100) main_mup_pane_t5_ParamLimits

0x39a4,	// (0x000a0100) main_mup_pane_t5

0x39b6,	// (0x000a0112) main_mup_pane_t6_ParamLimits

0x39b6,	// (0x000a0112) main_mup_pane_t6

0x0005,

0xf43a,	// (0x000abb96) main_mup_pane_t_ParamLimits

0xf43a,	// (0x000abb96) main_mup_pane_t

0x39cc,	// (0x000a0128) mup_progress_pane_ParamLimits

0x39cc,	// (0x000a0128) mup_progress_pane

0x39d8,	// (0x000a0134) mup_visualizer_pane_ParamLimits

0x39d8,	// (0x000a0134) mup_visualizer_pane

0x3a16,	// (0x000a0172) mup_volume_pane_ParamLimits

0x3a16,	// (0x000a0172) mup_volume_pane

0xb3de,	// (0x000a7b3a) mup_visualizer_pane_g1_ParamLimits

0xb3de,	// (0x000a7b3a) mup_visualizer_pane_g1

0xb3de,	// (0x000a7b3a) mup_visualizer_pane_g2_ParamLimits

0xb3de,	// (0x000a7b3a) mup_visualizer_pane_g2

0xb36d,	// (0x000a7ac9) mup_visualizer_pane_g3_ParamLimits

0xb36d,	// (0x000a7ac9) mup_visualizer_pane_g3

0x0002,

0xf447,	// (0x000abba3) mup_visualizer_pane_g_ParamLimits

0xf447,	// (0x000abba3) mup_visualizer_pane_g

0xa8e6,	// (0x000a7042) mup_volume_pane_g1

0xb519,	// (0x000a7c75) mup_volume_pane_g2

0x0001,

0xf44e,	// (0x000abbaa) mup_volume_pane_g

0xa8e6,	// (0x000a7042) mup_progress_pane_g1

0xb522,	// (0x000a7c7e) mup_progress_pane_g2

0xb52b,	// (0x000a7c87) mup_progress_pane_g3

0x0002,

0xf453,	// (0x000abbaf) mup_progress_pane_g

0xa0be,	// (0x000a681a) bg_popup_window_pane_cp05

0xb534,	// (0x000a7c90) heading_pane_cp02_ParamLimits

0xb534,	// (0x000a7c90) heading_pane_cp02

0xb550,	// (0x000a7cac) list_popup_blid_pane

0xb558,	// (0x000a7cb4) list_blid_sat_info_pane_ParamLimits

0xb558,	// (0x000a7cb4) list_blid_sat_info_pane

0xb56b,	// (0x000a7cc7) list_blid_sat_info_pane_g1

0xb573,	// (0x000a7ccf) list_blid_sat_info_pane_t1

0x3b35,	// (0x000a0291) mup_equalizer_pane_ParamLimits

0x3b35,	// (0x000a0291) mup_equalizer_pane

0x3b56,	// (0x000a02b2) mup_equalizer_pane_cp1_ParamLimits

0x3b56,	// (0x000a02b2) mup_equalizer_pane_cp1

0x3b77,	// (0x000a02d3) mup_equalizer_pane_cp2_ParamLimits

0x3b77,	// (0x000a02d3) mup_equalizer_pane_cp2

0x3b98,	// (0x000a02f4) mup_equalizer_pane_cp3_ParamLimits

0x3b98,	// (0x000a02f4) mup_equalizer_pane_cp3

0x3bbd,	// (0x000a0319) mup_equalizer_pane_cp4_ParamLimits

0x3bbd,	// (0x000a0319) mup_equalizer_pane_cp4

0x3be2,	// (0x000a033e) mup_equalizer_pane_cp5

0x3bfa,	// (0x000a0356) mup_equalizer_pane_cp6

0x3c12,	// (0x000a036e) mup_equalizer_pane_cp7

0xc715,	// (0x000a8e71) bg_popup_call_poc_act_pane_g9

0xc71d,	// (0x000a8e79) bg_popup_call_poc_act_pane_g10

0xc725,	// (0x000a8e81) bg_popup_call_poc_act_pane_g11

0x000a,

0xa7cc,	// (0x000a6f28) mup_scale_pane

0xa8e6,	// (0x000a7042) mup_scale_pane_g1

0xb581,	// (0x000a7cdd) mup_scale_pane_g2

0x0006,

0xf46f,	// (0x000abbcb) mup_scale_pane_g

0xb5a5,	// (0x000a7d01) msg_data_pane

0xb5ad,	// (0x000a7d09) scroll_pane_cp017

0x3c3c,	// (0x000a0398) bg_list_pane_cp04_ParamLimits

0x3c3c,	// (0x000a0398) bg_list_pane_cp04

0xb5b5,	// (0x000a7d11) msg_data_pane_g1

0x3c5c,	// (0x000a03b8) msg_data_pane_g2

0x3c66,	// (0x000a03c2) msg_data_pane_g3

0x3c70,	// (0x000a03cc) msg_data_pane_g4

0x3c78,	// (0x000a03d4) msg_data_pane_g5

0x3c80,	// (0x000a03dc) msg_data_pane_g6

0x3c88,	// (0x000a03e4) msg_data_pane_g7

0x0006,

0xf47e,	// (0x000abbda) msg_data_pane_g

0x3c90,	// (0x000a03ec) msg_text_pane_ParamLimits

0x3c90,	// (0x000a03ec) msg_text_pane

0x3cb6,	// (0x000a0412) qrid_highlight_pane_cp011_ParamLimits

0x3cb6,	// (0x000a0412) qrid_highlight_pane_cp011

0xa0be,	// (0x000a681a) msg_body_pane

0xa0be,	// (0x000a681a) msg_header_pane

0xb5bd,	// (0x000a7d19) input_focus_pane_cp07

0xa297,	// (0x000a69f3) msg_header_pane_t1_ParamLimits

0xa297,	// (0x000a69f3) msg_header_pane_t1

0xa2a9,	// (0x000a6a05) msg_header_pane_t2_ParamLimits

0xa2a9,	// (0x000a6a05) msg_header_pane_t2

0x0001,

0xf492,	// (0x000abbee) msg_header_pane_t_ParamLimits

0xf492,	// (0x000abbee) msg_header_pane_t

0xb5d2,	// (0x000a7d2e) msg_body_pane_g1

0x3ce5,	// (0x000a0441) msg_body_pane_t1_ParamLimits

0x3ce5,	// (0x000a0441) msg_body_pane_t1

0xa2bb,	// (0x000a6a17) msg_body_pane_t2_ParamLimits

0xa2bb,	// (0x000a6a17) msg_body_pane_t2

0xa2cd,	// (0x000a6a29) msg_body_pane_t3_ParamLimits

0xa2cd,	// (0x000a6a29) msg_body_pane_t3

0x0002,

0xf497,	// (0x000abbf3) msg_body_pane_t_ParamLimits

0xf497,	// (0x000abbf3) msg_body_pane_t

0x3d68,	// (0x000a04c4) main_viewer_pane_g1_ParamLimits

0x3d68,	// (0x000a04c4) main_viewer_pane_g1

0x3d74,	// (0x000a04d0) main_viewer_pane_g2_ParamLimits

0x3d74,	// (0x000a04d0) main_viewer_pane_g2

0x3d80,	// (0x000a04dc) main_viewer_pane_g3_ParamLimits

0x3d80,	// (0x000a04dc) main_viewer_pane_g3

0x3d91,	// (0x000a04ed) main_viewer_pane_g4_ParamLimits

0x3d91,	// (0x000a04ed) main_viewer_pane_g4

0x3da2,	// (0x000a04fe) main_viewer_pane_g5_ParamLimits

0x3da2,	// (0x000a04fe) main_viewer_pane_g5

0x3da2,	// (0x000a04fe) main_viewer_pane_g7_ParamLimits

0x3da2,	// (0x000a04fe) main_viewer_pane_g7

0x3db4,	// (0x000a0510) main_viewer_pane_g8_ParamLimits

0x3db4,	// (0x000a0510) main_viewer_pane_g8

0x0007,

0xf4a7,	// (0x000abc03) main_viewer_pane_g_ParamLimits

0xf4a7,	// (0x000abc03) main_viewer_pane_g

0xb5da,	// (0x000a7d36) viewer_content_pane_ParamLimits

0xb5da,	// (0x000a7d36) viewer_content_pane

0x3dec,	// (0x000a0548) main_postcard_pane_g1_ParamLimits

0x3dec,	// (0x000a0548) main_postcard_pane_g1

0x3dfa,	// (0x000a0556) main_postcard_pane_g2_ParamLimits

0x3dfa,	// (0x000a0556) main_postcard_pane_g2

0x3e08,	// (0x000a0564) main_postcard_pane_g3_ParamLimits

0x3e08,	// (0x000a0564) main_postcard_pane_g3

0x0005,

0xf4b8,	// (0x000abc14) main_postcard_pane_g_ParamLimits

0xf4b8,	// (0x000abc14) main_postcard_pane_g

0x3e18,	// (0x000a0574) main_postcard_pane_g4

0xc93e,	// (0x000a909a) smil_status_volume_pane_g2

0x3e44,	// (0x000a05a0) postcard_pane_ParamLimits

0x3e44,	// (0x000a05a0) postcard_pane

0xb3de,	// (0x000a7b3a) postcard_pane_g1_ParamLimits

0xb3de,	// (0x000a7b3a) postcard_pane_g1

0x3e7e,	// (0x000a05da) postcard_pane_g2_ParamLimits

0x3e7e,	// (0x000a05da) postcard_pane_g2

0x3e8a,	// (0x000a05e6) postcard_pane_g3_ParamLimits

0x3e8a,	// (0x000a05e6) postcard_pane_g3

0xb5e8,	// (0x000a7d44) postcard_pane_g4_ParamLimits

0xb5e8,	// (0x000a7d44) postcard_pane_g4

0x3e96,	// (0x000a05f2) postcard_pane_g5_ParamLimits

0x3e96,	// (0x000a05f2) postcard_pane_g5

0x3ea2,	// (0x000a05fe) postcard_pane_g6_ParamLimits

0x3ea2,	// (0x000a05fe) postcard_pane_g6

0xb5f6,	// (0x000a7d52) postcard_pane_g7_ParamLimits

0xb5f6,	// (0x000a7d52) postcard_pane_g7

0x0006,

0xf4c5,	// (0x000abc21) postcard_pane_g_ParamLimits

0xf4c5,	// (0x000abc21) postcard_pane_g

0x3eb0,	// (0x000a060c) main_mp2_pane_g1_ParamLimits

0x3eb0,	// (0x000a060c) main_mp2_pane_g1

0x3ebe,	// (0x000a061a) main_mp2_pane_g2_ParamLimits

0x3ebe,	// (0x000a061a) main_mp2_pane_g2

0x3eca,	// (0x000a0626) main_mp2_pane_g3_ParamLimits

0x3eca,	// (0x000a0626) main_mp2_pane_g3

0x0002,

0xf4d4,	// (0x000abc30) main_mp2_pane_g_ParamLimits

0xf4d4,	// (0x000abc30) main_mp2_pane_g

0x3ed6,	// (0x000a0632) main_mp2_pane_t1_ParamLimits

0x3ed6,	// (0x000a0632) main_mp2_pane_t1

0x3eed,	// (0x000a0649) main_mp2_pane_t2_ParamLimits

0x3eed,	// (0x000a0649) main_mp2_pane_t2

0x3f01,	// (0x000a065d) main_mp2_pane_t3_ParamLimits

0x3f01,	// (0x000a065d) main_mp2_pane_t3

0x0002,

0xf4db,	// (0x000abc37) main_mp2_pane_t_ParamLimits

0xf4db,	// (0x000abc37) main_mp2_pane_t

0xb604,	// (0x000a7d60) pec_content_pane_ParamLimits

0xb604,	// (0x000a7d60) pec_content_pane

0xac22,	// (0x000a737e) scroll_pane_cp015

0xb616,	// (0x000a7d72) pec_attribute_pane_ParamLimits

0xb616,	// (0x000a7d72) pec_attribute_pane

0x3f13,	// (0x000a066f) pec_content_pane_g1_ParamLimits

0x3f13,	// (0x000a066f) pec_content_pane_g1

0xb626,	// (0x000a7d82) pec_content_pane_t1_ParamLimits

0xb626,	// (0x000a7d82) pec_content_pane_t1

0xb638,	// (0x000a7d94) pec_content_pane_t2_ParamLimits

0xb638,	// (0x000a7d94) pec_content_pane_t2

0x0001,

0xf4e2,	// (0x000abc3e) pec_content_pane_t_ParamLimits

0xf4e2,	// (0x000abc3e) pec_content_pane_t

0x3f1f,	// (0x000a067b) list_single_graphic_pane_cp01_ParamLimits

0x3f1f,	// (0x000a067b) list_single_graphic_pane_cp01

0xa7cc,	// (0x000a6f28) bg_popup_sub_pane_cp04

0xb64a,	// (0x000a7da6) popup_mup_playback_window_g1

0xb656,	// (0x000a7db2) popup_mup_playback_window_t1

0xb66b,	// (0x000a7dc7) popup_mup_playback_window_t2

0x0001,

0xf4e7,	// (0x000abc43) popup_mup_playback_window_t

0xb6a2,	// (0x000a7dfe) main_image_pane_g1_ParamLimits

0xb6a2,	// (0x000a7dfe) main_image_pane_g1

0xb6e5,	// (0x000a7e41) scroll_pane_cp018_ParamLimits

0xb6e5,	// (0x000a7e41) scroll_pane_cp018

0xb6fd,	// (0x000a7e59) scroll_pane_cp016_ParamLimits

0xb6fd,	// (0x000a7e59) scroll_pane_cp016

0x3fad,	// (0x000a0709) smil2_image_pane_ParamLimits

0x3fad,	// (0x000a0709) smil2_image_pane

0x3fe3,	// (0x000a073f) smil2_root_pane_ParamLimits

0x3fe3,	// (0x000a073f) smil2_root_pane

0x400f,	// (0x000a076b) smil2_text_pane_ParamLimits

0x400f,	// (0x000a076b) smil2_text_pane

0xa0be,	// (0x000a681a) bg_list_pane_cp06

0xb739,	// (0x000a7e95) grid_radio_pane

0xa0be,	// (0x000a681a) bg_popup_window_pane_cp06

0xb743,	// (0x000a7e9f) main_fmradio_pane_t1

0xb1ea,	// (0x000a7946) heading_pane_cp04

0xb751,	// (0x000a7ead) main_fmradio_pane_t2

0xc72d,	// (0x000a8e89) popup_cale_lunar_info_window_g1

0xb75f,	// (0x000a7ebb) main_fmradio_pane_t3

0xc735,	// (0x000a8e91) popup_cale_lunar_info_window_g2

0xb76f,	// (0x000a7ecb) main_fmradio_pane_t4

0x0001,

0xb77d,	// (0x000a7ed9) main_fmradio_pane_t5

0x0004,

0xf5c2,	// (0x000abd1e) popup_cale_lunar_info_window_g

0xf4fc,	// (0x000abc58) main_fmradio_pane_t

0xb78b,	// (0x000a7ee7) wait_bar_pane_cp03

0xb793,	// (0x000a7eef) cell_fmradio_pane_ParamLimits

0xb793,	// (0x000a7eef) cell_fmradio_pane

0xb5f6,	// (0x000a7d52) cell_fmradio_pane_g1_ParamLimits

0xb5f6,	// (0x000a7d52) cell_fmradio_pane_g1

0xa0be,	// (0x000a681a) grid_highlight_pane_cp011

0xb7a8,	// (0x000a7f04) poc_content_pane_ParamLimits

0xb7a8,	// (0x000a7f04) poc_content_pane

0xb7ba,	// (0x000a7f16) scroll_pane_cp019

0x404f,	// (0x000a07ab) popup_call_poc_act_window_ParamLimits

0x404f,	// (0x000a07ab) popup_call_poc_act_window

0x405c,	// (0x000a07b8) popup_call_poc_inact_window_ParamLimits

0x405c,	// (0x000a07b8) popup_call_poc_inact_window

0xf599,	// (0x000abcf5) bg_popup_call_poc_act_pane_g

0xc6a5,	// (0x000a8e01) bg_popup_call_poc_inact_pane_g1

0xc6ad,	// (0x000a8e09) bg_popup_call_poc_inact_pane_g2

0xb7c2,	// (0x000a7f1e) popup_call_poc_act_window_g2

0xc6b5,	// (0x000a8e11) bg_popup_call_poc_inact_pane_g3

0xc6bd,	// (0x000a8e19) bg_popup_call_poc_inact_pane_g4

0xc6c5,	// (0x000a8e21) bg_popup_call_poc_inact_pane_g5

0xb7ca,	// (0x000a7f26) popup_call_poc_act_window_t1_ParamLimits

0xb7ca,	// (0x000a7f26) popup_call_poc_act_window_t1

0xb7f2,	// (0x000a7f4e) popup_call_poc_act_window_t2_ParamLimits

0xb7f2,	// (0x000a7f4e) popup_call_poc_act_window_t2

0xb81a,	// (0x000a7f76) popup_call_poc_act_window_t3_ParamLimits

0xb81a,	// (0x000a7f76) popup_call_poc_act_window_t3

0xb842,	// (0x000a7f9e) popup_call_poc_act_window_t4_ParamLimits

0xb842,	// (0x000a7f9e) popup_call_poc_act_window_t4

0x0003,

0xf507,	// (0x000abc63) popup_call_poc_act_window_t_ParamLimits

0xf507,	// (0x000abc63) popup_call_poc_act_window_t

0xc6cd,	// (0x000a8e29) bg_popup_call_poc_inact_pane_g6

0xc6d5,	// (0x000a8e31) bg_popup_call_poc_inact_pane_g7

0xc6dd,	// (0x000a8e39) bg_popup_call_poc_inact_pane_g8

0xb854,	// (0x000a7fb0) popup_call_poc_inact_window_g2

0xc6e5,	// (0x000a8e41) bg_popup_call_poc_inact_pane_g9

0x0008,

0xf586,	// (0x000abce2) bg_popup_call_poc_inact_pane_g

0xb85c,	// (0x000a7fb8) popup_call_poc_inact_window_t1_ParamLimits

0xb85c,	// (0x000a7fb8) popup_call_poc_inact_window_t1

0xb871,	// (0x000a7fcd) popup_call_poc_inact_window_t2_ParamLimits

0xb871,	// (0x000a7fcd) popup_call_poc_inact_window_t2

0xb886,	// (0x000a7fe2) popup_call_poc_inact_window_t3_ParamLimits

0xb886,	// (0x000a7fe2) popup_call_poc_inact_window_t3

0x0002,

0xf510,	// (0x000abc6c) popup_call_poc_inact_window_t_ParamLimits

0xf510,	// (0x000abc6c) popup_call_poc_inact_window_t

0xc8b1,	// (0x000a900d) context_pane_ParamLimits

0x466b,	// (0x000a0dc7) signal_pane_ParamLimits

0xb452,	// (0x000a7bae) main_call2_pane

0xc89f,	// (0x000a8ffb) popup_phob_thumbnail2_window_ParamLimits

0xc89f,	// (0x000a8ffb) popup_phob_thumbnail2_window

0x3d16,	// (0x000a0472) aid_hotspot_pointer_arrow_pane

0x3d1e,	// (0x000a047a) aid_hotspot_pointer_hand_pane

0x4381,	// (0x000a0add) phob_pre_status_pane_g5

0x1cd8,	// (0x0009e434) cams_zoom_pane_ParamLimits

0x1ce4,	// (0x0009e440) image_vga_pane_ParamLimits

0x1cf3,	// (0x0009e44f) main_camera_pane_g1_ParamLimits

0x1d01,	// (0x0009e45d) main_camera_pane_g2_ParamLimits

0x1d0d,	// (0x0009e469) main_camera_pane_g3_ParamLimits

0x1d1b,	// (0x0009e477) main_camera_pane_g4_ParamLimits

0x1d29,	// (0x0009e485) main_camera_pane_g5_ParamLimits

0x1d37,	// (0x0009e493) main_camera_pane_g6_ParamLimits

0x1d45,	// (0x0009e4a1) main_camera_pane_g7_ParamLimits

0xf20f,	// (0x000ab96b) main_camera_pane_g_ParamLimits

0x1d53,	// (0x0009e4af) main_camera_pane_t1_ParamLimits

0x1d65,	// (0x0009e4c1) main_camera_pane_t2_ParamLimits

0xf220,	// (0x000ab97c) main_camera_pane_t_ParamLimits

0xa7cc,	// (0x000a6f28) bg_popup_preview_window_pane_cp01_ParamLimits

0xa7cc,	// (0x000a6f28) bg_popup_preview_window_pane_cp01

0xb89b,	// (0x000a7ff7) popup_phob_thumbnail2_window_g1_ParamLimits

0xb89b,	// (0x000a7ff7) popup_phob_thumbnail2_window_g1

0xa0be,	// (0x000a681a) call2_cli_visual_pane

0x4078,	// (0x000a07d4) popup_call2_audio_conf_window_ParamLimits

0x4078,	// (0x000a07d4) popup_call2_audio_conf_window

0x4091,	// (0x000a07ed) popup_call2_audio_first_window_ParamLimits

0x4091,	// (0x000a07ed) popup_call2_audio_first_window

0x412f,	// (0x000a088b) popup_call2_audio_in_window_ParamLimits

0x412f,	// (0x000a088b) popup_call2_audio_in_window

0x4173,	// (0x000a08cf) popup_call2_audio_out_window_ParamLimits

0x4173,	// (0x000a08cf) popup_call2_audio_out_window

0x41dd,	// (0x000a0939) popup_call2_audio_second_window_ParamLimits

0x41dd,	// (0x000a0939) popup_call2_audio_second_window

0x423b,	// (0x000a0997) popup_call2_audio_wait_window_ParamLimits

0x423b,	// (0x000a0997) popup_call2_audio_wait_window

0xa0be,	// (0x000a681a) bg_popup_call2_act_pane_cp03

0xa7ae,	// (0x000a6f0a) list_conf_pane_cp

0xb8a7,	// (0x000a8003) popup_call2_audio_conf_window_t1

0xb8b5,	// (0x000a8011) list_single_graphic_popup_conf2_pane_ParamLimits

0xb8b5,	// (0x000a8011) list_single_graphic_popup_conf2_pane

0xb259,	// (0x000a79b5) list_highlight_pane_cp04

0xb8c8,	// (0x000a8024) list_single_graphic_popup_conf2_pane_g1

0xb26a,	// (0x000a79c6) list_single_graphic_popup_conf2_pane_g2

0x0001,

0xf517,	// (0x000abc73) list_single_graphic_popup_conf2_pane_g

0xb8d2,	// (0x000a802e) list_single_graphic_popup_conf2_pane_t1

0xb8e0,	// (0x000a803c) bg_popup_call2_act_pane_cp01_ParamLimits

0xb8e0,	// (0x000a803c) bg_popup_call2_act_pane_cp01

0xb96a,	// (0x000a80c6) call_type_pane_cp05_ParamLimits

0xb96a,	// (0x000a80c6) call_type_pane_cp05

0xb9be,	// (0x000a811a) popup_call2_audio_second_window_g1_ParamLimits

0xb9be,	// (0x000a811a) popup_call2_audio_second_window_g1

0xba12,	// (0x000a816e) popup_call2_audio_second_window_g2_ParamLimits

0xba12,	// (0x000a816e) popup_call2_audio_second_window_g2

0x0002,

0xf51c,	// (0x000abc78) popup_call2_audio_second_window_g_ParamLimits

0xf51c,	// (0x000abc78) popup_call2_audio_second_window_g

0xba77,	// (0x000a81d3) popup_call2_audio_second_window_t1_ParamLimits

0xba77,	// (0x000a81d3) popup_call2_audio_second_window_t1

0xbb32,	// (0x000a828e) popup_call2_audio_second_window_t2_ParamLimits

0xbb32,	// (0x000a828e) popup_call2_audio_second_window_t2

0xbb85,	// (0x000a82e1) popup_call2_audio_second_window_t3_ParamLimits

0xbb85,	// (0x000a82e1) popup_call2_audio_second_window_t3

0x0003,

0xf523,	// (0x000abc7f) popup_call2_audio_second_window_t_ParamLimits

0xf523,	// (0x000abc7f) popup_call2_audio_second_window_t

0xa0be,	// (0x000a681a) bg_popup_call2_in_pane_cp02

0xa0c8,	// (0x000a6824) call_type_pane_cp04

0xa0d0,	// (0x000a682c) popup_call2_audio_wait_window_g1

0xa0d8,	// (0x000a6834) popup_call2_audio_wait_window_g2

0x0001,

0xf0fc,	// (0x000ab858) popup_call2_audio_wait_window_g

0xa0e0,	// (0x000a683c) popup_call2_audio_wait_window_t3

0xbc78,	// (0x000a83d4) bg_popup_call2_act_pane_ParamLimits

0xbc78,	// (0x000a83d4) bg_popup_call2_act_pane

0xbd38,	// (0x000a8494) call_type_pane_cp03_ParamLimits

0xbd38,	// (0x000a8494) call_type_pane_cp03

0xbd9c,	// (0x000a84f8) popup_call2_audio_first_window_g1_ParamLimits

0xbd9c,	// (0x000a84f8) popup_call2_audio_first_window_g1

0xbe0c,	// (0x000a8568) popup_call2_audio_first_window_g2_ParamLimits

0xbe0c,	// (0x000a8568) popup_call2_audio_first_window_g2

0xb3de,	// (0x000a7b3a) popup_call2_audio_first_window_g3_ParamLimits

0xb3de,	// (0x000a7b3a) popup_call2_audio_first_window_g3

0x0004,

0xf52c,	// (0x000abc88) popup_call2_audio_first_window_g_ParamLimits

0xf52c,	// (0x000abc88) popup_call2_audio_first_window_g

0xbeea,	// (0x000a8646) popup_call2_audio_first_window_t1_ParamLimits

0xbeea,	// (0x000a8646) popup_call2_audio_first_window_t1

0xbfed,	// (0x000a8749) popup_call2_audio_first_window_t4_ParamLimits

0xbfed,	// (0x000a8749) popup_call2_audio_first_window_t4

0xc0d0,	// (0x000a882c) popup_call2_audio_first_window_t5_ParamLimits

0xc0d0,	// (0x000a882c) popup_call2_audio_first_window_t5

0x0003,

0xf537,	// (0x000abc93) popup_call2_audio_first_window_t_ParamLimits

0xf537,	// (0x000abc93) popup_call2_audio_first_window_t

0xa7c4,	// (0x000a6f20) bg_popup_call2_act_pane_g1

0xc73f,	// (0x000a8e9b) popup_cale_lunar_info_window_t1

0xc74d,	// (0x000a8ea9) popup_cale_lunar_info_window_t2

0xc75b,	// (0x000a8eb7) popup_cale_lunar_info_window_t3

0xa0be,	// (0x000a681a) bg_popup_call2_bubble_pane

0xc1d1,	// (0x000a892d) bg_popup_call2_in_pane_cp01_ParamLimits

0xc1d1,	// (0x000a892d) bg_popup_call2_in_pane_cp01

0x9d9a,	// (0x000a64f6) call_type_pane_cp02

0xc219,	// (0x000a8975) popup_call2_audio_out_window_g1_ParamLimits

0xc219,	// (0x000a8975) popup_call2_audio_out_window_g1

0xc245,	// (0x000a89a1) popup_call2_audio_out_window_g2_ParamLimits

0xc245,	// (0x000a89a1) popup_call2_audio_out_window_g2

0xc26d,	// (0x000a89c9) popup_call2_audio_out_window_g3_ParamLimits

0xc26d,	// (0x000a89c9) popup_call2_audio_out_window_g3

0x0003,

0xf540,	// (0x000abc9c) popup_call2_audio_out_window_g_ParamLimits

0xf540,	// (0x000abc9c) popup_call2_audio_out_window_g

0xc2a8,	// (0x000a8a04) popup_call2_audio_out_window_t1_ParamLimits

0xc2a8,	// (0x000a8a04) popup_call2_audio_out_window_t1

0xc307,	// (0x000a8a63) popup_call2_audio_out_window_t2_ParamLimits

0xc307,	// (0x000a8a63) popup_call2_audio_out_window_t2

0xc35b,	// (0x000a8ab7) popup_call2_audio_out_window_t3_ParamLimits

0xc35b,	// (0x000a8ab7) popup_call2_audio_out_window_t3

0xc371,	// (0x000a8acd) popup_call2_audio_out_window_t4_ParamLimits

0xc371,	// (0x000a8acd) popup_call2_audio_out_window_t4

0xc387,	// (0x000a8ae3) popup_call2_audio_out_window_t5_ParamLimits

0xc387,	// (0x000a8ae3) popup_call2_audio_out_window_t5

0x0005,

0xf549,	// (0x000abca5) popup_call2_audio_out_window_t_ParamLimits

0xf549,	// (0x000abca5) popup_call2_audio_out_window_t

0xc3eb,	// (0x000a8b47) bg_popup_call2_in_pane_ParamLimits

0xc3eb,	// (0x000a8b47) bg_popup_call2_in_pane

0xc447,	// (0x000a8ba3) popup_call2_audio_in_window_g1_ParamLimits

0xc447,	// (0x000a8ba3) popup_call2_audio_in_window_g1

0xc47f,	// (0x000a8bdb) popup_call2_audio_in_window_g2_ParamLimits

0xc47f,	// (0x000a8bdb) popup_call2_audio_in_window_g2

0xc4b7,	// (0x000a8c13) popup_call2_audio_in_window_g3_ParamLimits

0xc4b7,	// (0x000a8c13) popup_call2_audio_in_window_g3

0x0003,

0xf556,	// (0x000abcb2) popup_call2_audio_in_window_g_ParamLimits

0xf556,	// (0x000abcb2) popup_call2_audio_in_window_g

0xc50f,	// (0x000a8c6b) popup_call2_audio_in_window_t1_ParamLimits

0xc50f,	// (0x000a8c6b) popup_call2_audio_in_window_t1

0xc58f,	// (0x000a8ceb) popup_call2_audio_in_window_t2_ParamLimits

0xc58f,	// (0x000a8ceb) popup_call2_audio_in_window_t2

0xc60f,	// (0x000a8d6b) popup_call2_audio_in_window_t3_ParamLimits

0xc60f,	// (0x000a8d6b) popup_call2_audio_in_window_t3

0xc629,	// (0x000a8d85) popup_call2_audio_in_window_t4_ParamLimits

0xc629,	// (0x000a8d85) popup_call2_audio_in_window_t4

0xc63b,	// (0x000a8d97) popup_call2_audio_in_window_t5_ParamLimits

0xc63b,	// (0x000a8d97) popup_call2_audio_in_window_t5

0xc650,	// (0x000a8dac) popup_call2_audio_in_window_t6_ParamLimits

0xc650,	// (0x000a8dac) popup_call2_audio_in_window_t6

0x0005,

0xf55f,	// (0x000abcbb) popup_call2_audio_in_window_t_ParamLimits

0xf55f,	// (0x000abcbb) popup_call2_audio_in_window_t

0xa7c4,	// (0x000a6f20) bg_popup_call2_in_pane_g1

0xc769,	// (0x000a8ec5) popup_cale_lunar_info_window_t4

0x0003,

0xf5c7,	// (0x000abd23) popup_cale_lunar_info_window_t

0xa7cc,	// (0x000a6f28) bg_popup_call2_rect_pane_ParamLimits

0xa7cc,	// (0x000a6f28) bg_popup_call2_rect_pane

0xa0be,	// (0x000a681a) call2_cli_visual_graphic_pane

0xa0be,	// (0x000a681a) call2_cli_visual_text_pane

0x4703,	// (0x000a0e5f) smil_status_volume_pane_g3

0x0002,

0xa8e6,	// (0x000a7042) call2_cli_visual_graphic_pane_g1

0xa8e6,	// (0x000a7042) call2_cli_visual_graphic_pane_g2

0xa8e6,	// (0x000a7042) call2_cli_visual_graphic_pane_g3

0x0002,

0xf56c,	// (0x000abcc8) call2_cli_visual_graphic_pane_g

0xc665,	// (0x000a8dc1) bg_popup_call2_rect_pane_g1

0xa984,	// (0x000a70e0) bg_popup_call2_rect_pane_g2

0xc66d,	// (0x000a8dc9) bg_popup_call2_rect_pane_g3

0xc675,	// (0x000a8dd1) bg_popup_call2_rect_pane_g4

0xc67d,	// (0x000a8dd9) bg_popup_call2_rect_pane_g5

0xc685,	// (0x000a8de1) bg_popup_call2_rect_pane_g6

0xc68d,	// (0x000a8de9) bg_popup_call2_rect_pane_g7

0xc695,	// (0x000a8df1) bg_popup_call2_rect_pane_g8

0xc69d,	// (0x000a8df9) bg_popup_call2_rect_pane_g9

0x0008,

0xf573,	// (0x000abccf) bg_popup_call2_rect_pane_g

0xc6a5,	// (0x000a8e01) bg_popup_call2_bubble_pane_g1

0xc6ad,	// (0x000a8e09) bg_popup_call2_bubble_pane_g2

0xc6b5,	// (0x000a8e11) bg_popup_call2_bubble_pane_g3

0xc6bd,	// (0x000a8e19) bg_popup_call2_bubble_pane_g4

0xc6c5,	// (0x000a8e21) bg_popup_call2_bubble_pane_g5

0xc6cd,	// (0x000a8e29) bg_popup_call2_bubble_pane_g6

0xc6d5,	// (0x000a8e31) bg_popup_call2_bubble_pane_g7

0xc6dd,	// (0x000a8e39) bg_popup_call2_bubble_pane_g8

0xc6e5,	// (0x000a8e41) bg_popup_call2_bubble_pane_g9

0x0008,

0xf586,	// (0x000abce2) bg_popup_call2_bubble_pane_g

0x1450,	// (0x0009dbac) aid_cale_week_size_cell_pane

0x1d79,	// (0x0009e4d5) aid_cams_cif_uncrop_pane_ParamLimits

0x1d79,	// (0x0009e4d5) aid_cams_cif_uncrop_pane

0x1ed6,	// (0x0009e632) aid_cams_size_cell_ParamLimits

0x1ed6,	// (0x0009e632) aid_cams_size_cell

0x1ee2,	// (0x0009e63e) grid_cams_pane_ParamLimits

0x1ef0,	// (0x0009e64c) linegrid_cams_pane_ParamLimits

0x20d1,	// (0x0009e82d) call_video_pane_t1

0x20ee,	// (0x0009e84a) call_video_pane_t2

0x0001,

0xf273,	// (0x000ab9cf) call_video_pane_t

0x25ba,	// (0x0009ed16) aid_cale_month_size_cell_pane_ParamLimits

0x25ba,	// (0x0009ed16) aid_cale_month_size_cell_pane

0xf610,	// (0x000abd6c) smil_status_volume_pane_g

0x4710,	// (0x000a0e6c) volume_smil_pane_ParamLimits

0x9c6c,	// (0x000a63c8) aid_popup2_width_pane

0x1344,	// (0x0009daa0) cell_qdial_pane_g4_ParamLimits

0x1344,	// (0x0009daa0) cell_qdial_pane_g4

0x35eb,	// (0x0009fd47) aid_blid_cardinal_pane_ParamLimits

0x35fb,	// (0x0009fd57) aid_blid_destination_pane_ParamLimits

0x35fb,	// (0x0009fd57) aid_blid_destination_pane

0xa7cc,	// (0x000a6f28) bg_popup_call_poc_act_pane_ParamLimits

0xa7cc,	// (0x000a6f28) bg_popup_call_poc_act_pane

0xa7cc,	// (0x000a6f28) bg_popup_call_poc_inact_pane_ParamLimits

0xa7cc,	// (0x000a6f28) bg_popup_call_poc_inact_pane

0xc6ed,	// (0x000a8e49) bg_popup_call_poc_act_pane_g1

0xc6f5,	// (0x000a8e51) bg_popup_call_poc_act_pane_g2

0xc6fd,	// (0x000a8e59) bg_popup_call_poc_act_pane_g3

0xc6bd,	// (0x000a8e19) bg_popup_call_poc_act_pane_g4

0xc6c5,	// (0x000a8e21) bg_popup_call_poc_act_pane_g5

0xc705,	// (0x000a8e61) bg_popup_call_poc_act_pane_g6

0xc6d5,	// (0x000a8e31) bg_popup_call_poc_act_pane_g7

0xc70d,	// (0x000a8e69) bg_popup_call_poc_act_pane_g8

0xa0be,	// (0x000a681a) main_usb_pane

0xc876,	// (0x000a8fd2) popup_cale_lunar_info_window

0x2406,	// (0x0009eb62) im_reading_pane_t1_ParamLimits

0xab62,	// (0x000a72be) list_im_pane_ParamLimits

0xab73,	// (0x000a72cf) scroll_pane_cp07_ParamLimits

0xa0be,	// (0x000a681a) grid_highlight_pane_cp012

0xa7cc,	// (0x000a6f28) mup_scale_pane_ParamLimits

0xb3de,	// (0x000a7b3a) main_usb_pane_g1_ParamLimits

0xb3de,	// (0x000a7b3a) main_usb_pane_g1

0x42a4,	// (0x000a0a00) main_usb_pane_g2_ParamLimits

0x42a4,	// (0x000a0a00) main_usb_pane_g2

0x0001,

0xf5b0,	// (0x000abd0c) main_usb_pane_g_ParamLimits

0xf5b0,	// (0x000abd0c) main_usb_pane_g

0x42b0,	// (0x000a0a0c) main_usb_pane_t1_ParamLimits

0x42b0,	// (0x000a0a0c) main_usb_pane_t1

0x42c2,	// (0x000a0a1e) main_usb_pane_t2_ParamLimits

0x42c2,	// (0x000a0a1e) main_usb_pane_t2

0x42d4,	// (0x000a0a30) main_usb_pane_t3_ParamLimits

0x42d4,	// (0x000a0a30) main_usb_pane_t3

0x42e6,	// (0x000a0a42) main_usb_pane_t4_ParamLimits

0x42e6,	// (0x000a0a42) main_usb_pane_t4

0x42f8,	// (0x000a0a54) main_usb_pane_t5_ParamLimits

0x42f8,	// (0x000a0a54) main_usb_pane_t5

0x430a,	// (0x000a0a66) main_usb_pane_t6_ParamLimits

0x430a,	// (0x000a0a66) main_usb_pane_t6

0x0005,

0xf5b5,	// (0x000abd11) main_usb_pane_t_ParamLimits

0x358a,	// (0x0009fce6) aid_text_placing

0x3595,	// (0x0009fcf1) main_location2_pane_t1_ParamLimits

0x35ab,	// (0x0009fd07) main_location2_pane_t2_ParamLimits

0x35c1,	// (0x0009fd1d) main_location2_pane_t3_ParamLimits

0x35d7,	// (0x0009fd33) main_location2_pane_t4_ParamLimits

0x35d7,	// (0x0009fd33) main_location2_pane_t4

0xf3d4,	// (0x000abb30) main_location2_pane_t_ParamLimits

0xa808,	// (0x000a6f64) find_pinb_pane_g2_ParamLimits

0xa808,	// (0x000a6f64) find_pinb_pane_g2

0x0001,

0xf122,	// (0x000ab87e) find_pinb_pane_g_ParamLimits

0xf122,	// (0x000ab87e) find_pinb_pane_g

0xa814,	// (0x000a6f70) find_pinb_pane_t1_ParamLimits

0xa826,	// (0x000a6f82) find_pinb_pane_t2_ParamLimits

0xf127,	// (0x000ab883) find_pinb_pane_t_ParamLimits

0xa0be,	// (0x000a681a) main_call3_pane

0x2b39,	// (0x0009f295) cale_month_day_heading_pane_t1_ParamLimits

0x2bbb,	// (0x0009f317) cale_month_day_heading_pane_t2_ParamLimits

0x2c48,	// (0x0009f3a4) cale_month_day_heading_pane_t3_ParamLimits

0x2cd5,	// (0x0009f431) cale_month_day_heading_pane_t4_ParamLimits

0x2d62,	// (0x0009f4be) cale_month_day_heading_pane_t5_ParamLimits

0x2df7,	// (0x0009f553) cale_month_day_heading_pane_t6_ParamLimits

0x2e94,	// (0x0009f5f0) cale_month_day_heading_pane_t7_ParamLimits

0xf2ab,	// (0x000aba07) cale_month_day_heading_pane_t_ParamLimits

0x316a,	// (0x0009f8c6) smil_status_volume_pane

0x3e62,	// (0x000a05be) postcard_address_pane_ParamLimits

0x3e62,	// (0x000a05be) postcard_address_pane

0x3e70,	// (0x000a05cc) postcard_message_pane_ParamLimits

0x3e70,	// (0x000a05cc) postcard_message_pane

0x427a,	// (0x000a09d6) call2_cli_visual_pane_t1_ParamLimits

0x427a,	// (0x000a09d6) call2_cli_visual_pane_t1

0x486f,	// (0x000a0fcb) postcard_message_pane_t1_ParamLimits

0x486f,	// (0x000a0fcb) postcard_message_pane_t1

0x4858,	// (0x000a0fb4) postcard_address_pane_t1_ParamLimits

0x4858,	// (0x000a0fb4) postcard_address_pane_t1

0x4849,	// (0x000a0fa5) popup_call3_audio_in_window_ParamLimits

0x4849,	// (0x000a0fa5) popup_call3_audio_in_window

0x4727,	// (0x000a0e83) bg_popup_call3_in_pane_ParamLimits

0x4727,	// (0x000a0e83) bg_popup_call3_in_pane

0x478f,	// (0x000a0eeb) popup_call3_audio_in_window_g1_ParamLimits

0x478f,	// (0x000a0eeb) popup_call3_audio_in_window_g1

0x47a7,	// (0x000a0f03) popup_call3_audio_in_window_g2_ParamLimits

0x47a7,	// (0x000a0f03) popup_call3_audio_in_window_g2

0x47bf,	// (0x000a0f1b) popup_call3_audio_in_window_g3_ParamLimits

0x47bf,	// (0x000a0f1b) popup_call3_audio_in_window_g3

0x0003,

0xf617,	// (0x000abd73) popup_call3_audio_in_window_g_ParamLimits

0xf617,	// (0x000abd73) popup_call3_audio_in_window_g

0x47e7,	// (0x000a0f43) popup_call3_audio_in_window_t1_ParamLimits

0x47e7,	// (0x000a0f43) popup_call3_audio_in_window_t1

0x480f,	// (0x000a0f6b) popup_call3_audio_in_window_t2_ParamLimits

0x480f,	// (0x000a0f6b) popup_call3_audio_in_window_t2

0x4837,	// (0x000a0f93) popup_call3_audio_in_window_t3_ParamLimits

0x4837,	// (0x000a0f93) popup_call3_audio_in_window_t3

0x0002,

0xf620,	// (0x000abd7c) popup_call3_audio_in_window_t_ParamLimits

0xf620,	// (0x000abd7c) popup_call3_audio_in_window_t

0xb452,	// (0x000a7bae) bg_popup_call3_rect_pane

0xc665,	// (0x000a8dc1) bg_popup_call3_rect_pane_g1

0xa984,	// (0x000a70e0) bg_popup_call3_rect_pane_g2

0xc66d,	// (0x000a8dc9) bg_popup_call3_rect_pane_g3

0xc675,	// (0x000a8dd1) bg_popup_call3_rect_pane_g4

0xc67d,	// (0x000a8dd9) bg_popup_call3_rect_pane_g5

0xc685,	// (0x000a8de1) bg_popup_call3_rect_pane_g6

0xc68d,	// (0x000a8de9) bg_popup_call3_rect_pane_g7

0x3a31,	// (0x000a018d) mup_visualizer_osc_pane

0xb511,	// (0x000a7c6d) mup_visualizer_spec_pane

0x4747,	// (0x000a0ea3) call3_video_qcif_pane_ParamLimits

0x4747,	// (0x000a0ea3) call3_video_qcif_pane

0x4759,	// (0x000a0eb5) call3_video_qcif_uncrop_pane_ParamLimits

0x4759,	// (0x000a0eb5) call3_video_qcif_uncrop_pane

0x4769,	// (0x000a0ec5) call3_video_subqcif_pane_ParamLimits

0x4769,	// (0x000a0ec5) call3_video_subqcif_pane

0x477d,	// (0x000a0ed9) call3_video_subqcif_uncrop_pane_ParamLimits

0x477d,	// (0x000a0ed9) call3_video_subqcif_uncrop_pane

0x47d7,	// (0x000a0f33) popup_call3_audio_in_window_g4_ParamLimits

0x47d7,	// (0x000a0f33) popup_call3_audio_in_window_g4

0x46f2,	// (0x000a0e4e) mup_spec_half_pane

0x46fb,	// (0x000a0e57) mup_spec_half_pane_cp

0xc911,	// (0x000a906d) mup_osc_middle_pane

0xc91a,	// (0x000a9076) mup_visualizer_osc_pane_g1

0x46d2,	// (0x000a0e2e) mup_spec_bar_pane_ParamLimits

0x46d2,	// (0x000a0e2e) mup_spec_bar_pane

0xc8fe,	// (0x000a905a) mup_spec_bar_pane_g1

0xc908,	// (0x000a9064) mup_spec_bar_pane_g2

0x0001,

0xf60b,	// (0x000abd67) mup_spec_bar_pane_g

0x1450,	// (0x0009dbac) aid_cale_week_size_cell_pane_ParamLimits

0x146a,	// (0x0009dbc6) bg_cale_heading_pane_ParamLimits

0xa9b8,	// (0x000a7114) bg_cale_pane_cp01_ParamLimits

0x1493,	// (0x0009dbef) cale_week_corner_pane_ParamLimits

0x14b2,	// (0x0009dc0e) cale_week_day_heading_pane_ParamLimits

0x14e0,	// (0x0009dc3c) cale_week_scroll_pane_g1_ParamLimits

0x1504,	// (0x0009dc60) cale_week_scroll_pane_g2_ParamLimits

0x151c,	// (0x0009dc78) cale_week_scroll_pane_g3_ParamLimits

0x1534,	// (0x0009dc90) cale_week_scroll_pane_g4_ParamLimits

0x154c,	// (0x0009dca8) cale_week_scroll_pane_g5_ParamLimits

0x1564,	// (0x0009dcc0) cale_week_scroll_pane_g6_ParamLimits

0x1584,	// (0x0009dce0) cale_week_scroll_pane_g7_ParamLimits

0x15a4,	// (0x0009dd00) cale_week_scroll_pane_g8_ParamLimits

0x15c4,	// (0x0009dd20) cale_week_scroll_pane_g9_ParamLimits

0x15e1,	// (0x0009dd3d) cale_week_scroll_pane_g10_ParamLimits

0x15fe,	// (0x0009dd5a) cale_week_scroll_pane_g11_ParamLimits

0x161b,	// (0x0009dd77) cale_week_scroll_pane_g12_ParamLimits

0x1638,	// (0x0009dd94) cale_week_scroll_pane_g13_ParamLimits

0x165d,	// (0x0009ddb9) cale_week_scroll_pane_g14_ParamLimits

0x1686,	// (0x0009dde2) cale_week_scroll_pane_g15_ParamLimits

0xf1b3,	// (0x000ab90f) cale_week_scroll_pane_g_ParamLimits

0x16af,	// (0x0009de0b) cale_week_time_pane_ParamLimits

0x16cf,	// (0x0009de2b) grid_cale_week_pane_ParamLimits

0xa9d6,	// (0x000a7132) listscroll_cale_week_pane_t1

0xa9e8,	// (0x000a7144) scroll_pane_cp08_ParamLimits

0x2627,	// (0x0009ed83) cale_month_corner_pane_ParamLimits

0xadab,	// (0x000a7507) cale_month_pane_t1

0x2acb,	// (0x0009f227) cale_month_week_pane_ParamLimits

0xb3de,	// (0x000a7b3a) popup_call_status_window_g1_ParamLimits

0x3393,	// (0x0009faef) popup_call_status_window_g2_ParamLimits

0x339f,	// (0x0009fafb) popup_call_status_window_g3_ParamLimits

0xf35b,	// (0x000abab7) popup_call_status_window_g_ParamLimits

0xb1da,	// (0x000a7936) aid_call2_pane

0x3cd7,	// (0x000a0433) msg_header_pane_g1

0x3e62,	// (0x000a05be) postcard_address2_pane_ParamLimits

0x3e62,	// (0x000a05be) postcard_address2_pane

0x3e70,	// (0x000a05cc) postcard_message2_pane_ParamLimits

0x3e70,	// (0x000a05cc) postcard_message2_pane

0x4679,	// (0x000a0dd5) message2_row_pane_ParamLimits

0x4679,	// (0x000a0dd5) message2_row_pane

0x4693,	// (0x000a0def) address2_row_pane_ParamLimits

0x4693,	// (0x000a0def) address2_row_pane

0xc8cc,	// (0x000a9028) postcard_message2_row_pane_g1

0xc8d4,	// (0x000a9030) postcard_message2_row_pane_t1

0xc8cc,	// (0x000a9028) address2_row_pane_g1

0xc8d4,	// (0x000a9030) address2_row_pane_t1

0x1c2d,	// (0x0009e389) aid_size_cell_vorec

0xa0be,	// (0x000a681a) main_rss_pane

0x46a6,	// (0x000a0e02) rss_list_single_pane_ParamLimits

0x46a6,	// (0x000a0e02) rss_list_single_pane

0xc8e2,	// (0x000a903e) rss_list_single_pane_t1

0xc8f0,	// (0x000a904c) rss_list_single_pane_t2

0x0001,

0xf606,	// (0x000abd62) rss_list_single_pane_t

0xa0be,	// (0x000a681a) main_camera2_pane

0xa0be,	// (0x000a681a) main_video2_pane

0x48d3,	// (0x000a102f) cams_zoom_pane_cp2_ParamLimits

0x48d3,	// (0x000a102f) cams_zoom_pane_cp2

0x48df,	// (0x000a103b) image2_vga_pane_ParamLimits

0x48df,	// (0x000a103b) image2_vga_pane

0x48ee,	// (0x000a104a) main_camera2_pane_g1_ParamLimits

0x48ee,	// (0x000a104a) main_camera2_pane_g1

0x48fa,	// (0x000a1056) main_camera2_pane_g2_ParamLimits

0x48fa,	// (0x000a1056) main_camera2_pane_g2

0x4906,	// (0x000a1062) main_camera2_pane_g3_ParamLimits

0x4906,	// (0x000a1062) main_camera2_pane_g3

0x4912,	// (0x000a106e) main_camera2_pane_g4_ParamLimits

0x4912,	// (0x000a106e) main_camera2_pane_g4

0x491e,	// (0x000a107a) main_camera2_pane_g5_ParamLimits

0x491e,	// (0x000a107a) main_camera2_pane_g5

0x492a,	// (0x000a1086) main_camera2_pane_g6_ParamLimits

0x492a,	// (0x000a1086) main_camera2_pane_g6

0x4936,	// (0x000a1092) main_camera2_pane_g7_ParamLimits

0x4936,	// (0x000a1092) main_camera2_pane_g7

0x4942,	// (0x000a109e) main_camera2_pane_g8_ParamLimits

0x4942,	// (0x000a109e) main_camera2_pane_g8

0x0008,

0xf627,	// (0x000abd83) main_camera2_pane_g_ParamLimits

0xf627,	// (0x000abd83) main_camera2_pane_g

0x495a,	// (0x000a10b6) main_camera2_pane_t1_ParamLimits

0x495a,	// (0x000a10b6) main_camera2_pane_t1

0x496c,	// (0x000a10c8) main_camera2_pane_t2_ParamLimits

0x496c,	// (0x000a10c8) main_camera2_pane_t2

0x497e,	// (0x000a10da) main_camera2_pane_t3_ParamLimits

0x497e,	// (0x000a10da) main_camera2_pane_t3

0x4990,	// (0x000a10ec) main_camera2_pane_t4_ParamLimits

0x4990,	// (0x000a10ec) main_camera2_pane_t4

0x0006,

0xf63a,	// (0x000abd96) main_camera2_pane_t_ParamLimits

0xf63a,	// (0x000abd96) main_camera2_pane_t

0x49ed,	// (0x000a1149) cams_zoom_pane_cp4_ParamLimits

0x49ed,	// (0x000a1149) cams_zoom_pane_cp4

0x49fd,	// (0x000a1159) image2_cif_pane_ParamLimits

0x49fd,	// (0x000a1159) image2_cif_pane

0x4a12,	// (0x000a116e) image2_subqcif_pane_ParamLimits

0x4a12,	// (0x000a116e) image2_subqcif_pane

0x4a21,	// (0x000a117d) main_video2_pane_g1_ParamLimits

0x4a21,	// (0x000a117d) main_video2_pane_g1

0x4a33,	// (0x000a118f) main_video2_pane_g2_ParamLimits

0x4a33,	// (0x000a118f) main_video2_pane_g2

0x4a43,	// (0x000a119f) main_video2_pane_g3_ParamLimits

0x4a43,	// (0x000a119f) main_video2_pane_g3

0x4a53,	// (0x000a11af) main_video2_pane_g4_ParamLimits

0x4a53,	// (0x000a11af) main_video2_pane_g4

0x4a63,	// (0x000a11bf) main_video2_pane_g5_ParamLimits

0x4a63,	// (0x000a11bf) main_video2_pane_g5

0x4a73,	// (0x000a11cf) main_video2_pane_g6_ParamLimits

0x4a73,	// (0x000a11cf) main_video2_pane_g6

0x0005,

0xf649,	// (0x000abda5) main_video2_pane_g_ParamLimits

0xf649,	// (0x000abda5) main_video2_pane_g

0x4a85,	// (0x000a11e1) main_video2_pane_t1_ParamLimits

0x4a85,	// (0x000a11e1) main_video2_pane_t1

0x4a9f,	// (0x000a11fb) main_video2_pane_t2_ParamLimits

0x4a9f,	// (0x000a11fb) main_video2_pane_t2

0x4ac5,	// (0x000a1221) main_video2_pane_t3_ParamLimits

0x4ac5,	// (0x000a1221) main_video2_pane_t3

0x0002,

0xf656,	// (0x000abdb2) main_video2_pane_t_ParamLimits

0xf656,	// (0x000abdb2) main_video2_pane_t

0x43c1,	// (0x000a0b1d) call_muted_g2

0x0001,

0xf5f8,	// (0x000abd54) call_muted_g

0xa0be,	// (0x000a681a) main_mup2_pane

0xc951,	// (0x000a90ad) main_mup2_pane_g1_ParamLimits

0xc951,	// (0x000a90ad) main_mup2_pane_g1

0x4aeb,	// (0x000a1247) main_mup2_pane_g2_ParamLimits

0x4aeb,	// (0x000a1247) main_mup2_pane_g2

0x4d7d,	// (0x000a14d9) main_mup_pane_g13_cp1

0x4d85,	// (0x000a14e1) mup_volume_pane_cp1

0x4b0d,	// (0x000a1269) main_mup2_pane_g4_ParamLimits

0x4b0d,	// (0x000a1269) main_mup2_pane_g4

0x4b22,	// (0x000a127e) main_mup2_pane_g5_ParamLimits

0x4b22,	// (0x000a127e) main_mup2_pane_g5

0x4b37,	// (0x000a1293) main_mup2_pane_g6_ParamLimits

0x4b37,	// (0x000a1293) main_mup2_pane_g6

0x4b4c,	// (0x000a12a8) main_mup2_pane_g7_ParamLimits

0x4b4c,	// (0x000a12a8) main_mup2_pane_g7

0x0006,

0xf65d,	// (0x000abdb9) main_mup2_pane_g_ParamLimits

0xf65d,	// (0x000abdb9) main_mup2_pane_g

0x4b68,	// (0x000a12c4) main_mup2_pane_t1_ParamLimits

0x4b68,	// (0x000a12c4) main_mup2_pane_t1

0x4b7f,	// (0x000a12db) main_mup2_pane_t2_ParamLimits

0x4b7f,	// (0x000a12db) main_mup2_pane_t2

0x4b96,	// (0x000a12f2) main_mup2_pane_t3_ParamLimits

0x4b96,	// (0x000a12f2) main_mup2_pane_t3

0x4bad,	// (0x000a1309) main_mup2_pane_t4_ParamLimits

0x4bad,	// (0x000a1309) main_mup2_pane_t4

0x4bc7,	// (0x000a1323) main_mup2_pane_t5_ParamLimits

0x4bc7,	// (0x000a1323) main_mup2_pane_t5

0x4be1,	// (0x000a133d) main_mup2_pane_t6_ParamLimits

0x4be1,	// (0x000a133d) main_mup2_pane_t6

0x0005,

0xf66c,	// (0x000abdc8) main_mup2_pane_t_ParamLimits

0xf66c,	// (0x000abdc8) main_mup2_pane_t

0x4c19,	// (0x000a1375) mup2_visualizer_pane_ParamLimits

0x4c19,	// (0x000a1375) mup2_visualizer_pane

0x4c4f,	// (0x000a13ab) mup_progress_pane_cp_ParamLimits

0x4c4f,	// (0x000a13ab) mup_progress_pane_cp

0x4d68,	// (0x000a14c4) mup_volume_pane_cp_ParamLimits

0x4d68,	// (0x000a14c4) mup_volume_pane_cp

0x4c68,	// (0x000a13c4) mup2_visualizer_pane_g1_ParamLimits

0x4c68,	// (0x000a13c4) mup2_visualizer_pane_g1

0xc95d,	// (0x000a90b9) mup2_visualizer_pane_g2_ParamLimits

0xc95d,	// (0x000a90b9) mup2_visualizer_pane_g2

0x4c7d,	// (0x000a13d9) mup2_visualizer_pane_g3_ParamLimits

0x4c7d,	// (0x000a13d9) mup2_visualizer_pane_g3

0x0002,

0xf679,	// (0x000abdd5) mup2_visualizer_pane_g_ParamLimits

0xf679,	// (0x000abdd5) mup2_visualizer_pane_g

0xb731,	// (0x000a7e8d) aid_size_cell_fmradio

0x44d7,	// (0x000a0c33) aid_height_parent_landcape

0xac09,	// (0x000a7365) wml_content_pane_cp

0xac11,	// (0x000a736d) wml_tabs_pane

0xac1a,	// (0x000a7376) popup_wml_miniature_window

0xac22,	// (0x000a737e) scroll_pane_cp021

0xac36,	// (0x000a7392) wml_content_pane_comp8

0xa0be,	// (0x000a681a) bg_popup_sub_pane_cp05

0xc97b,	// (0x000a90d7) popup_wml_miniature_window_g1

0xc983,	// (0x000a90df) wml_miniature_view_pane

0x4c8b,	// (0x000a13e7) aid_size_wml_view

0x4c93,	// (0x000a13ef) wml_miniature_view_pane_g1

0x4c9c,	// (0x000a13f8) wml_miniature_view_pane_g2

0x4ca5,	// (0x000a1401) wml_miniature_view_pane_g3

0x4cad,	// (0x000a1409) wml_miniature_view_pane_g4

0x4cb5,	// (0x000a1411) wml_miniature_view_pane_g5

0x4cbd,	// (0x000a1419) wml_miniature_view_pane_g6

0x4cc5,	// (0x000a1421) wml_miniature_view_pane_g7

0x4ccd,	// (0x000a1429) wml_miniature_view_pane_g8

0x0007,

0xf680,	// (0x000abddc) wml_miniature_view_pane_g

0xc951,	// (0x000a90ad) background_graphic_ParamLimits

0xc951,	// (0x000a90ad) background_graphic

0xc98b,	// (0x000a90e7) wml_tabs_2_pane

0xc994,	// (0x000a90f0) wml_tabs_3_pane_ParamLimits

0xc994,	// (0x000a90f0) wml_tabs_3_pane

0xc9a6,	// (0x000a9102) wml_tabs_4_pane_ParamLimits

0xc9a6,	// (0x000a9102) wml_tabs_4_pane

0xc9bc,	// (0x000a9118) wml_tabs_5_pane_ParamLimits

0xc9bc,	// (0x000a9118) wml_tabs_5_pane

0xc9d6,	// (0x000a9132) wml_tabs_pane_g2_ParamLimits

0xc9d6,	// (0x000a9132) wml_tabs_pane_g2

0xc9ea,	// (0x000a9146) wml_tabs_pane_g3_ParamLimits

0xc9ea,	// (0x000a9146) wml_tabs_pane_g3

0x4cd5,	// (0x000a1431) wml_tabs_2_active_pane_ParamLimits

0x4cd5,	// (0x000a1431) wml_tabs_2_active_pane

0x4ce7,	// (0x000a1443) wml_tabs_2_passive_pane_ParamLimits

0x4ce7,	// (0x000a1443) wml_tabs_2_passive_pane

0x4cf9,	// (0x000a1455) wml_tabs_3_active_pane_cp_ParamLimits

0x4cf9,	// (0x000a1455) wml_tabs_3_active_pane_cp

0x4d0c,	// (0x000a1468) wml_tabs_3_passive_pane_ParamLimits

0x4d0c,	// (0x000a1468) wml_tabs_3_passive_pane

0x4d1d,	// (0x000a1479) wml_tabs_3_passive_pane_cp_ParamLimits

0x4d1d,	// (0x000a1479) wml_tabs_3_passive_pane_cp

0x4d32,	// (0x000a148e) tabs_4_active_pane

0x4d3a,	// (0x000a1496) tabs_4_passive_pane

0x4d42,	// (0x000a149e) tabs_4_passive_pane_cp

0x4d4a,	// (0x000a14a6) tabs_4_passive_pane_cp2

0x429c,	// (0x000a09f8) aid_height_text

0x39fa,	// (0x000a0156) mup_volume_cont_pane_ParamLimits

0x39fa,	// (0x000a0156) mup_volume_cont_pane

0x0f90,	// (0x0009d6ec) aid_size_cell_pinb

0x0f9a,	// (0x0009d6f6) aid_size_list_pinb

0x4c38,	// (0x000a1394) mup2_volume_cont_pane_ParamLimits

0x4c38,	// (0x000a1394) mup2_volume_cont_pane

0x4d54,	// (0x000a14b0) mup2_volume_cont_pane_g1_ParamLimits

0x4d54,	// (0x000a14b0) mup2_volume_cont_pane_g1

0x0bf2,	// (0x0009d34e) aid_size_cell_touch_ParamLimits

0x0bf2,	// (0x0009d34e) aid_size_cell_touch

0x0e7a,	// (0x0009d5d6) touch_pane_ParamLimits

0x0e7a,	// (0x0009d5d6) touch_pane

0x9c5a,	// (0x000a63b6) main_rss2_pane

0xca07,	// (0x000a9163) listscroll_rss2_pane

0xca10,	// (0x000a916c) rss2_navigation_pane

0xca18,	// (0x000a9174) list_rss2_pane

0xb2fe,	// (0x000a7a5a) scroll_pane_cp22

0xca20,	// (0x000a917c) rss2_navigation_pane_g1

0xca29,	// (0x000a9185) rss2_navigation_pane_g2

0xca31,	// (0x000a918d) rss2_navigation_pane_g3

0x0002,

0xf691,	// (0x000abded) rss2_navigation_pane_g

0xca39,	// (0x000a9195) rss2_navigation_pane_t1

0x4d8d,	// (0x000a14e9) rss2_list_single_pane_ParamLimits

0x4d8d,	// (0x000a14e9) rss2_list_single_pane

0xca47,	// (0x000a91a3) rss2_list_single_pane_t2

0xca55,	// (0x000a91b1) rss2_list_single_pane_t3_ParamLimits

0xca55,	// (0x000a91b1) rss2_list_single_pane_t3

0xca72,	// (0x000a91ce) rss2_list_single_pane_t4

0x3154,	// (0x0009f8b0) smil_status_pane_g1

0xa2df,	// (0x000a6a3b) main_image2_pane_ParamLimits

0xa2df,	// (0x000a6a3b) main_image2_pane

0x494e,	// (0x000a10aa) main_camera2_pane_g9_ParamLimits

0x494e,	// (0x000a10aa) main_camera2_pane_g9

0x49a2,	// (0x000a10fe) main_camera2_pane_t5_ParamLimits

0x49a2,	// (0x000a10fe) main_camera2_pane_t5

0x49b4,	// (0x000a1110) main_camera2_pane_t6_ParamLimits

0x49b4,	// (0x000a1110) main_camera2_pane_t6

0x4db0,	// (0x000a150c) main_image2_pane_g1_ParamLimits

0x4db0,	// (0x000a150c) main_image2_pane_g1

0x4039,	// (0x000a0795) smil2_video_pane_ParamLimits

0x4039,	// (0x000a0795) smil2_video_pane

0x0c36,	// (0x0009d392) aid_zoom_text_primary_cp

0x9ca1,	// (0x000a63fd) popup_preview_fixed_window

0xab5a,	// (0x000a72b6) im_reading_pane_g1

0x4898,	// (0x000a0ff4) cams2_bc_adjust_pane_cp_ParamLimits

0x4898,	// (0x000a0ff4) cams2_bc_adjust_pane_cp

0x49df,	// (0x000a113b) cams2_bc_adjust_pane_ParamLimits

0x49df,	// (0x000a113b) cams2_bc_adjust_pane

0xcd10,	// (0x000a946c) cams2_bc_adjust_pane_g1

0x4dbc,	// (0x000a1518) cams2_slider_pane

0x4dc5,	// (0x000a1521) cams2_slider_pane_g1

0x4dce,	// (0x000a152a) cams2_slider_pane_g2

0x0006,

0xf698,	// (0x000abdf4) cams2_slider_pane_g

0x1095,	// (0x0009d7f1) calc_display_pane_ParamLimits

0x10b3,	// (0x0009d80f) calc_paper_pane_ParamLimits

0x10cf,	// (0x0009d82b) grid_calc_pane_ParamLimits

0x33fd,	// (0x0009fb59) popup_clock_digital_window_t1_ParamLimits

0xb6ce,	// (0x000a7e2a) main_image_pane_t1

0x107b,	// (0x0009d7d7) aid_size_cell_calc_ParamLimits

0x107b,	// (0x0009d7d7) aid_size_cell_calc

0x4509,	// (0x000a0c65) popup_blid_sat_info2_window_ParamLimits

0x4509,	// (0x000a0c65) popup_blid_sat_info2_window

0xca88,	// (0x000a91e4) aid_size_cell_blid

0xca90,	// (0x000a91ec) bg_popup_window_pane_cp07

0xcab3,	// (0x000a920f) grid_popup_blid_pane

0xcabd,	// (0x000a9219) heading_pane_cp05_ParamLimits

0xcabd,	// (0x000a9219) heading_pane_cp05

0xcb87,	// (0x000a92e3) cell_popup_blid_pane_ParamLimits

0xcb87,	// (0x000a92e3) cell_popup_blid_pane

0xcbb1,	// (0x000a930d) cell_popup_blid_pane_g1

0xcbb9,	// (0x000a9315) cell_popup_blid_pane_t1

0x4bfe,	// (0x000a135a) mup2_indicator_pane_ParamLimits

0x4bfe,	// (0x000a135a) mup2_indicator_pane

0xb452,	// (0x000a7bae) mup2_visualizer_osc_pane

0xc969,	// (0x000a90c5) mup2_visualizer_spec_pane_ParamLimits

0xc969,	// (0x000a90c5) mup2_visualizer_spec_pane

0x4de8,	// (0x000a1544) mup2_spec_half_pane

0x4df1,	// (0x000a154d) mup2_spec_half_pane_cp

0x4dfb,	// (0x000a1557) mup2_spec_bar_pane_ParamLimits

0x4dfb,	// (0x000a1557) mup2_spec_bar_pane

0xc8fe,	// (0x000a905a) mup2_spec_bar_pane_g1

0xc908,	// (0x000a9064) mup2_spec_bar_pane_g2

0x0001,

0xf60b,	// (0x000abd67) mup2_spec_bar_pane_g

0x4e1a,	// (0x000a1576) mup2_osc_middle_pane

0xc91a,	// (0x000a9076) mup2_visualizer_osc_pane_g1

0x9ccb,	// (0x000a6427) popup_number_entry_window_t1_ParamLimits

0x9cde,	// (0x000a643a) popup_number_entry_window_t2_ParamLimits

0x9cf0,	// (0x000a644c) popup_number_entry_window_t3_ParamLimits

0x0ed1,	// (0x0009d62d) popup_number_entry_window_t5_ParamLimits

0x0ed1,	// (0x0009d62d) popup_number_entry_window_t5

0xf0cd,	// (0x000ab829) popup_number_entry_window_t_ParamLimits

0x9d02,	// (0x000a645e) text_title_cp2_ParamLimits

0x3d26,	// (0x000a0482) aid_hotspot_pointer_text2_pane

0x3dc0,	// (0x000a051c) main_viewer_pane_g9_ParamLimits

0x3dc0,	// (0x000a051c) main_viewer_pane_g9

0xadab,	// (0x000a7507) cale_month_pane_t1_ParamLimits

0xadd1,	// (0x000a752d) bg_cale_pane_ParamLimits

0xade9,	// (0x000a7545) list_cale_pane_ParamLimits

0xadfa,	// (0x000a7556) listscroll_cale_day_pane_t1

0xae0c,	// (0x000a7568) scroll_pane_cp09_ParamLimits

0x3a39,	// (0x000a0195) main_mup_eq_pane_t1_ParamLimits

0x3a39,	// (0x000a0195) main_mup_eq_pane_t1

0x3a55,	// (0x000a01b1) main_mup_eq_pane_t2_ParamLimits

0x3a55,	// (0x000a01b1) main_mup_eq_pane_t2

0x3a71,	// (0x000a01cd) main_mup_eq_pane_t3_ParamLimits

0x3a71,	// (0x000a01cd) main_mup_eq_pane_t3

0x3a8b,	// (0x000a01e7) main_mup_eq_pane_t4_ParamLimits

0x3a8b,	// (0x000a01e7) main_mup_eq_pane_t4

0x3aa5,	// (0x000a0201) main_mup_eq_pane_t5_ParamLimits

0x3aa5,	// (0x000a0201) main_mup_eq_pane_t5

0x3abf,	// (0x000a021b) main_mup_eq_pane_t6_ParamLimits

0x3abf,	// (0x000a021b) main_mup_eq_pane_t6

0x3ad5,	// (0x000a0231) main_mup_eq_pane_t7_ParamLimits

0x3ad5,	// (0x000a0231) main_mup_eq_pane_t7

0x3aeb,	// (0x000a0247) main_mup_eq_pane_t8_ParamLimits

0x3aeb,	// (0x000a0247) main_mup_eq_pane_t8

0x3b01,	// (0x000a025d) main_mup_eq_pane_t9_ParamLimits

0x3b01,	// (0x000a025d) main_mup_eq_pane_t9

0x3b1d,	// (0x000a0279) main_mup_eq_pane_t10_ParamLimits

0x3b1d,	// (0x000a0279) main_mup_eq_pane_t10

0x0009,

0xf45a,	// (0x000abbb6) main_mup_eq_pane_t_ParamLimits

0xf45a,	// (0x000abbb6) main_mup_eq_pane_t

0x3be2,	// (0x000a033e) mup_equalizer_pane_cp5_ParamLimits

0x3bfa,	// (0x000a0356) mup_equalizer_pane_cp6_ParamLimits

0x3c12,	// (0x000a036e) mup_equalizer_pane_cp7_ParamLimits

0x9c5a,	// (0x000a63b6) main_gallery_pane

0xc923,	// (0x000a907f) smil2_volume_pane

0xc92b,	// (0x000a9087) smil_status_volume_pane_g1_ParamLimits

0xc93e,	// (0x000a909a) smil_status_volume_pane_g2_ParamLimits

0x4703,	// (0x000a0e5f) smil_status_volume_pane_g3_ParamLimits

0xf610,	// (0x000abd6c) smil_status_volume_pane_g_ParamLimits

0xca90,	// (0x000a91ec) bg_popup_window_pane_cp07_ParamLimits

0xca9e,	// (0x000a91fa) blid_firmament_pane

0x4e23,	// (0x000a157f) aid_size_cell_gallery_ParamLimits

0x4e23,	// (0x000a157f) aid_size_cell_gallery

0x4e31,	// (0x000a158d) grid_gallery_pane_ParamLimits

0x4e31,	// (0x000a158d) grid_gallery_pane

0x4e41,	// (0x000a159d) cell_gallery_pane_ParamLimits

0x4e41,	// (0x000a159d) cell_gallery_pane

0xcbc7,	// (0x000a9323) bg_cell_gallery_focus_pane_ParamLimits

0xcbc7,	// (0x000a9323) bg_cell_gallery_focus_pane

0xcbd9,	// (0x000a9335) cell_gallery_pane_g1_ParamLimits

0xcbd9,	// (0x000a9335) cell_gallery_pane_g1

0x4e87,	// (0x000a15e3) cell_gallery_pane_g2_ParamLimits

0x4e87,	// (0x000a15e3) cell_gallery_pane_g2

0x4e94,	// (0x000a15f0) cell_gallery_pane_g3_ParamLimits

0x4e94,	// (0x000a15f0) cell_gallery_pane_g3

0xcbe5,	// (0x000a9341) cell_gallery_pane_g4_ParamLimits

0xcbe5,	// (0x000a9341) cell_gallery_pane_g4

0x0003,

0xf6be,	// (0x000abe1a) cell_gallery_pane_g_ParamLimits

0xf6be,	// (0x000abe1a) cell_gallery_pane_g

0xcbf1,	// (0x000a934d) bg_cell_gallery_focus_pane_g1

0xcbf9,	// (0x000a9355) bg_cell_gallery_focus_pane_g2

0xcc01,	// (0x000a935d) bg_cell_gallery_focus_pane_g3

0xcc09,	// (0x000a9365) bg_cell_gallery_focus_pane_g4

0xcc11,	// (0x000a936d) bg_cell_gallery_focus_pane_g5

0xcc19,	// (0x000a9375) bg_cell_gallery_focus_pane_g6

0xcc21,	// (0x000a937d) bg_cell_gallery_focus_pane_g7

0xcc29,	// (0x000a9385) bg_cell_gallery_focus_pane_g8

0x0007,

0xf6c7,	// (0x000abe23) bg_cell_gallery_focus_pane_g

0xcc31,	// (0x000a938d) aid_firma_cardinal

0xcc45,	// (0x000a93a1) blid_firmament_pane_t1

0xcc5c,	// (0x000a93b8) blid_firmament_pane_t2

0xcc73,	// (0x000a93cf) blid_firmament_pane_t3

0xcc8a,	// (0x000a93e6) blid_firmament_pane_t4

0x0003,

0xf6d8,	// (0x000abe34) blid_firmament_pane_t

0xcca1,	// (0x000a93fd) blid_sat_info_pane

0xccb1,	// (0x000a940d) blid_sat_info_pane_g1

0xccb1,	// (0x000a940d) blid_sat_info_pane_g2

0x0001,

0xf6e1,	// (0x000abe3d) blid_sat_info_pane_g

0xccbb,	// (0x000a9417) blid_sat_info_pane_t1

0xccc9,	// (0x000a9425) smil2_volume_content_pane

0xccd2,	// (0x000a942e) smil2_volume_pane_g1

0xccda,	// (0x000a9436) smil2_volume_content_pane_g1

0xcce3,	// (0x000a943f) smil2_volume_content_pane_g2

0xccec,	// (0x000a9448) smil2_volume_content_pane_g3

0xccf5,	// (0x000a9451) smil2_volume_content_pane_g4

0xccfe,	// (0x000a945a) smil2_volume_content_pane_g5

0xcd07,	// (0x000a9463) smil2_volume_content_pane_g6

0xcd18,	// (0x000a9474) smil2_volume_content_pane_g7

0xcd21,	// (0x000a947d) smil2_volume_content_pane_g8

0xcd2a,	// (0x000a9486) smil2_volume_content_pane_g9

0xcd33,	// (0x000a948f) smil2_volume_content_pane_g10

0x0009,

0xf6e6,	// (0x000abe42) smil2_volume_content_pane_g

0x178d,	// (0x0009dee9) cale_week_day_heading_pane_t1_ParamLimits

0x17d5,	// (0x0009df31) cale_week_day_heading_pane_t2_ParamLimits

0x1822,	// (0x0009df7e) cale_week_day_heading_pane_t3_ParamLimits

0x186f,	// (0x0009dfcb) cale_week_day_heading_pane_t4_ParamLimits

0x18bc,	// (0x0009e018) cale_week_day_heading_pane_t5_ParamLimits

0x1909,	// (0x0009e065) cale_week_day_heading_pane_t6_ParamLimits

0x1956,	// (0x0009e0b2) cale_week_day_heading_pane_t7_ParamLimits

0xf1d2,	// (0x000ab92e) cale_week_day_heading_pane_t_ParamLimits

0xaa0a,	// (0x000a7166) bg_cale_side_pane_ParamLimits

0x199e,	// (0x0009e0fa) cale_week_time_pane_t1_ParamLimits

0x19e2,	// (0x0009e13e) cale_week_time_pane_t2_ParamLimits

0x1a26,	// (0x0009e182) cale_week_time_pane_t3_ParamLimits

0x1a6a,	// (0x0009e1c6) cale_week_time_pane_t4_ParamLimits

0x1aae,	// (0x0009e20a) cale_week_time_pane_t5_ParamLimits

0x1af2,	// (0x0009e24e) cale_week_time_pane_t6_ParamLimits

0x1b36,	// (0x0009e292) cale_week_time_pane_t7_ParamLimits

0x1b82,	// (0x0009e2de) cale_week_time_pane_t8_ParamLimits

0xf1e1,	// (0x000ab93d) cale_week_time_pane_t_ParamLimits

0x1bd0,	// (0x0009e32c) cell_cale_week_pane_g2_ParamLimits

0xaa0a,	// (0x000a7166) bg_cale_side_pane_cp01_ParamLimits

0x2f31,	// (0x0009f68d) cale_month_week_pane_t1_ParamLimits

0x2f4a,	// (0x0009f6a6) cale_month_week_pane_t2_ParamLimits

0x2f63,	// (0x0009f6bf) cale_month_week_pane_t3_ParamLimits

0x2f7c,	// (0x0009f6d8) cale_month_week_pane_t4_ParamLimits

0x2f95,	// (0x0009f6f1) cale_month_week_pane_t5_ParamLimits

0x2fb0,	// (0x0009f70c) cale_month_week_pane_t6_ParamLimits

0xf2ba,	// (0x000aba16) cale_month_week_pane_t_ParamLimits

0x311d,	// (0x0009f879) cell_cale_month_pane_g1_ParamLimits

0x9c5a,	// (0x000a63b6) main_cale_event_viewer_pane

0x9c5a,	// (0x000a63b6) listscroll_cale_event_viewer_pane

0xcd3c,	// (0x000a9498) list_cale_ev_pane

0xcd44,	// (0x000a94a0) scroll_pane_cp023

0x4ea1,	// (0x000a15fd) field_cale_ev_pane_ParamLimits

0x4ea1,	// (0x000a15fd) field_cale_ev_pane

0xcd50,	// (0x000a94ac) field_cale_ev_content_pane_ParamLimits

0xcd50,	// (0x000a94ac) field_cale_ev_content_pane

0xcd5c,	// (0x000a94b8) field_cale_ev_pane_g1_ParamLimits

0xcd5c,	// (0x000a94b8) field_cale_ev_pane_g1

0xcd68,	// (0x000a94c4) field_cale_ev_pane_g2_ParamLimits

0xcd68,	// (0x000a94c4) field_cale_ev_pane_g2

0xcd80,	// (0x000a94dc) field_cale_ev_pane_g3_ParamLimits

0xcd80,	// (0x000a94dc) field_cale_ev_pane_g3

0x0002,

0xf6fb,	// (0x000abe57) field_cale_ev_pane_g_ParamLimits

0xf6fb,	// (0x000abe57) field_cale_ev_pane_g

0xcd98,	// (0x000a94f4) field_cale_ev_pane_t1_ParamLimits

0xcd98,	// (0x000a94f4) field_cale_ev_pane_t1

0x4ec5,	// (0x000a1621) field_cale_ev_content_pane_t1_ParamLimits

0x4ec5,	// (0x000a1621) field_cale_ev_content_pane_t1

0x3ccc,	// (0x000a0428) bg_button_pane_cp01

0x1434,	// (0x0009db90) listscroll_cale_week_pane_ParamLimits

0x1446,	// (0x0009dba2) popup_toolbar_window_cp01

0xa9d6,	// (0x000a7132) listscroll_cale_week_pane_t1_ParamLimits

0x1434,	// (0x0009db90) listscroll_cale_day_pane_ParamLimits

0x1446,	// (0x0009dba2) popup_toolbar_window_cp02

0xadfa,	// (0x000a7556) listscroll_cale_day_pane_t1_ParamLimits

0x1434,	// (0x0009db90) main_cale_month_pane_ParamLimits

0x45ed,	// (0x000a0d49) popup_toolbar_window_cp03_ParamLimits

0x45ed,	// (0x000a0d49) popup_toolbar_window_cp03

0x3f49,	// (0x000a06a5) main_image_pane_g2_ParamLimits

0x3f49,	// (0x000a06a5) main_image_pane_g2

0x3f55,	// (0x000a06b1) main_image_pane_g3_ParamLimits

0x3f55,	// (0x000a06b1) main_image_pane_g3

0x0002,

0xf4ec,	// (0x000abc48) main_image_pane_g_ParamLimits

0xf4ec,	// (0x000abc48) main_image_pane_g

0xb6ce,	// (0x000a7e2a) main_image_pane_t1_ParamLimits

0x3f61,	// (0x000a06bd) main_image_pane_t2_ParamLimits

0x3f61,	// (0x000a06bd) main_image_pane_t2

0x3f73,	// (0x000a06cf) main_image_pane_t3_ParamLimits

0x3f73,	// (0x000a06cf) main_image_pane_t3

0x3f85,	// (0x000a06e1) main_image_pane_t4_ParamLimits

0x3f85,	// (0x000a06e1) main_image_pane_t4

0x0003,

0xf4f3,	// (0x000abc4f) main_image_pane_t_ParamLimits

0xf4f3,	// (0x000abc4f) main_image_pane_t

0x3f97,	// (0x000a06f3) popup_image_details_window_cp01

0x3fa1,	// (0x000a06fd) popup_toobar_trans_pane_cp01_ParamLimits

0x3fa1,	// (0x000a06fd) popup_toobar_trans_pane_cp01

0x455e,	// (0x000a0cba) popup_image_details_window_ParamLimits

0x455e,	// (0x000a0cba) popup_image_details_window

0xc882,	// (0x000a8fde) popup_image_focus_window

0x488a,	// (0x000a0fe6) camera2_autofocus_pane_ParamLimits

0x488a,	// (0x000a0fe6) camera2_autofocus_pane

0x9c5a,	// (0x000a63b6) bg_popup_sub_pane_cp06

0xcdaf,	// (0x000a950b) popup_image_focus_window_g1

0xcdb7,	// (0x000a9513) popup_image_focus_window_g2

0xcdbf,	// (0x000a951b) popup_image_focus_window_g3

0xcdc7,	// (0x000a9523) popup_image_focus_window_g4

0x0003,

0xf702,	// (0x000abe5e) popup_image_focus_window_g

0xcdcf,	// (0x000a952b) popup_image_focus_window_t1

0xcddd,	// (0x000a9539) popup_image_focus_window_t2

0xcded,	// (0x000a9549) popup_image_focus_window_t3

0x0002,

0xf70b,	// (0x000abe67) popup_image_focus_window_t

0xcdfb,	// (0x000a9557) camera2_autofocus_pane_g1

0xa2df,	// (0x000a6a3b) bg_tb_trans_pane_cp01

0xce09,	// (0x000a9565) popup_image_details_window_g1

0xce1c,	// (0x000a9578) popup_image_details_window_g2

0x0002,

0xf71d,	// (0x000abe79) popup_image_details_window_g

0xce45,	// (0x000a95a1) popup_image_details_window_t1

0xce57,	// (0x000a95b3) popup_image_details_window_t2

0xce70,	// (0x000a95cc) popup_image_details_window_t3

0xce84,	// (0x000a95e0) popup_image_details_window_t4

0xce9f,	// (0x000a95fb) popup_image_details_window_t5

0x0004,

0xf724,	// (0x000abe80) popup_image_details_window_t

0xa87d,	// (0x000a6fd9) bg_calc_paper_pane_ParamLimits

0x11cc,	// (0x0009d928) grid_highlight_pane_cp013

0x11d6,	// (0x0009d932) list_calc_pane_ParamLimits

0x11e8,	// (0x0009d944) scroll_pane_cp024

0xa891,	// (0x000a6fed) bg_calc_display_pane_ParamLimits

0x11f0,	// (0x0009d94c) calc_display_pane_t1_ParamLimits

0x1205,	// (0x0009d961) calc_display_pane_t2_ParamLimits

0x121a,	// (0x0009d976) calc_display_pane_t3_ParamLimits

0xf154,	// (0x000ab8b0) calc_display_pane_t_ParamLimits

0x12ee,	// (0x0009da4a) cell_calc_pane_g2

0x0001,

0xf171,	// (0x000ab8cd) cell_calc_pane_g

0x12f7,	// (0x0009da53) cell_calc_pane_t1

0xa8f0,	// (0x000a704c) grid_highlight_pane_cp02_ParamLimits

0xa906,	// (0x000a7062) toolbar_button_pane_cp01_ParamLimits

0xa906,	// (0x000a7062) toolbar_button_pane_cp01

0xb713,	// (0x000a7e6f) temp_image_control_pane_ParamLimits

0xb713,	// (0x000a7e6f) temp_image_control_pane

0xa2df,	// (0x000a6a3b) main_mp3_pane

0xceb9,	// (0x000a9615) temp_image_control_pane_g1_ParamLimits

0xceb9,	// (0x000a9615) temp_image_control_pane_g1

0xcec7,	// (0x000a9623) temp_image_control_pane_g2_ParamLimits

0xcec7,	// (0x000a9623) temp_image_control_pane_g2

0xced9,	// (0x000a9635) temp_image_control_pane_g3_ParamLimits

0xced9,	// (0x000a9635) temp_image_control_pane_g3

0x4f10,	// (0x000a166c) temp_image_control_pane_g4_ParamLimits

0x4f10,	// (0x000a166c) temp_image_control_pane_g4

0x0003,

0xf72f,	// (0x000abe8b) temp_image_control_pane_g_ParamLimits

0xf72f,	// (0x000abe8b) temp_image_control_pane_g

0xceb9,	// (0x000a9615) main_mp3_pane_g1

0x4f21,	// (0x000a167d) main_mp3_pane_g2

0x0007,

0xf738,	// (0x000abe94) main_mp3_pane_g

0xcf1c,	// (0x000a9678) main_mp3_pane_t1

0xaa65,	// (0x000a71c1) main_camera_pane_g8_ParamLimits

0xaa65,	// (0x000a71c1) main_camera_pane_g8

0x1e8c,	// (0x0009e5e8) main_video_pane_g7_ParamLimits

0x1e8c,	// (0x0009e5e8) main_video_pane_g7

0x49cd,	// (0x000a1129) main_camera2_pane_t7_ParamLimits

0x49cd,	// (0x000a1129) main_camera2_pane_t7

0xabc9,	// (0x000a7325) scroll_pane_cp025_ParamLimits

0xabc9,	// (0x000a7325) scroll_pane_cp025

0xabdd,	// (0x000a7339) scroll_pane_cp026_ParamLimits

0xabdd,	// (0x000a7339) scroll_pane_cp026

0xabec,	// (0x000a7348) wml_content_pane_ParamLimits

0x9c5a,	// (0x000a63b6) main_touch_calib_pane

0x4fc5,	// (0x000a1721) main_touch_calib_pane_g1

0x4fd1,	// (0x000a172d) main_touch_calib_pane_g2

0x4fdd,	// (0x000a1739) main_touch_calib_pane_g3

0x4fe9,	// (0x000a1745) main_touch_calib_pane_g4

0x0003,

0xf756,	// (0x000abeb2) main_touch_calib_pane_g

0x4ff5,	// (0x000a1751) main_touch_calib_pane_t1

0x500c,	// (0x000a1768) main_touch_calib_pane_t2

0x0004,

0xf75f,	// (0x000abebb) main_touch_calib_pane_t

0xb379,	// (0x000a7ad5) mup_progress_pane_cp02

0xb398,	// (0x000a7af4) navi_pane_g1

0xb414,	// (0x000a7b70) navi_pane_mp_t3

0xa2df,	// (0x000a6a3b) main_mp3_pane_ParamLimits

0x462f,	// (0x000a0d8b) navi_pane_ParamLimits

0xceb9,	// (0x000a9615) main_mp3_pane_g1_ParamLimits

0x4f21,	// (0x000a167d) main_mp3_pane_g2_ParamLimits

0x4f2d,	// (0x000a1689) main_mp3_pane_g3_ParamLimits

0x4f2d,	// (0x000a1689) main_mp3_pane_g3

0x4f39,	// (0x000a1695) main_mp3_pane_g4_ParamLimits

0x4f39,	// (0x000a1695) main_mp3_pane_g4

0xcee9,	// (0x000a9645) main_mp3_pane_g5_ParamLimits

0xcee9,	// (0x000a9645) main_mp3_pane_g5

0xcef7,	// (0x000a9653) main_mp3_pane_g6_ParamLimits

0xcef7,	// (0x000a9653) main_mp3_pane_g6

0xcf04,	// (0x000a9660) main_mp3_pane_g7_ParamLimits

0xcf04,	// (0x000a9660) main_mp3_pane_g7

0xcf10,	// (0x000a966c) main_mp3_pane_g8_ParamLimits

0xcf10,	// (0x000a966c) main_mp3_pane_g8

0xf738,	// (0x000abe94) main_mp3_pane_g_ParamLimits

0x4f45,	// (0x000a16a1) main_mp3_pane_t2

0x4f55,	// (0x000a16b1) main_mp3_pane_t3

0xcf2a,	// (0x000a9686) main_mp3_pane_t4

0xcf38,	// (0x000a9694) main_mp3_pane_t5

0x0005,

0xf749,	// (0x000abea5) main_mp3_pane_t

0xcf46,	// (0x000a96a2) mup_progress_pane_cp01

0x0c36,	// (0x0009d392) aid_zoom_text_secondary2

0xcd3c,	// (0x000a9498) list_cale_ev2_pane

0xcd44,	// (0x000a94a0) scroll_pane_cp023_ParamLimits

0xe5bc,	// (0x000aad18) field_cale_ev2_pane_ParamLimits

0xe5bc,	// (0x000aad18) field_cale_ev2_pane

0x5067,	// (0x000a17c3) field_cale_ev2_pane_g1_ParamLimits

0x5067,	// (0x000a17c3) field_cale_ev2_pane_g1

0x5073,	// (0x000a17cf) field_cale_ev2_pane_g2_ParamLimits

0x5073,	// (0x000a17cf) field_cale_ev2_pane_g2

0x508b,	// (0x000a17e7) field_cale_ev2_pane_g3_ParamLimits

0x508b,	// (0x000a17e7) field_cale_ev2_pane_g3

0x0003,

0xf76a,	// (0x000abec6) field_cale_ev2_pane_g_ParamLimits

0xf76a,	// (0x000abec6) field_cale_ev2_pane_g

0x50a3,	// (0x000a17ff) field_cale_ev2_pane_t1_ParamLimits

0x50a3,	// (0x000a17ff) field_cale_ev2_pane_t1

0x50ba,	// (0x000a1816) field_cale_ev2_pane_t2_ParamLimits

0x50ba,	// (0x000a1816) field_cale_ev2_pane_t2

0x0001,

0xf773,	// (0x000abecf) field_cale_ev2_pane_t_ParamLimits

0xf773,	// (0x000abecf) field_cale_ev2_pane_t

0x3e28,	// (0x000a0584) main_postcard_pane_g5_ParamLimits

0x3e28,	// (0x000a0584) main_postcard_pane_g5

0x3e36,	// (0x000a0592) main_postcard_pane_g6_ParamLimits

0x3e36,	// (0x000a0592) main_postcard_pane_g6

0x1cca,	// (0x0009e426) camera2_autofocus_pane_cp_ParamLimits

0x1cca,	// (0x0009e426) camera2_autofocus_pane_cp

0xa2df,	// (0x000a6a3b) main_mup3_pane

0x50ef,	// (0x000a184b) main_mup3_pane_g1_ParamLimits

0x50ef,	// (0x000a184b) main_mup3_pane_g1

0x5110,	// (0x000a186c) main_mup3_pane_g2_ParamLimits

0x5110,	// (0x000a186c) main_mup3_pane_g2

0x518c,	// (0x000a18e8) main_mup3_pane_g3_ParamLimits

0x518c,	// (0x000a18e8) main_mup3_pane_g3

0x51d1,	// (0x000a192d) main_mup3_pane_g4_ParamLimits

0x51d1,	// (0x000a192d) main_mup3_pane_g4

0x5214,	// (0x000a1970) main_mup3_pane_g5_ParamLimits

0x5214,	// (0x000a1970) main_mup3_pane_g5

0x5259,	// (0x000a19b5) main_mup3_pane_g6_ParamLimits

0x5259,	// (0x000a19b5) main_mup3_pane_g6

0xcf4e,	// (0x000a96aa) main_mup3_pane_g7_ParamLimits

0xcf4e,	// (0x000a96aa) main_mup3_pane_g7

0x0007,

0xf783,	// (0x000abedf) main_mup3_pane_g_ParamLimits

0xf783,	// (0x000abedf) main_mup3_pane_g

0x52cf,	// (0x000a1a2b) main_mup3_pane_t1_ParamLimits

0x52cf,	// (0x000a1a2b) main_mup3_pane_t1

0x5338,	// (0x000a1a94) main_mup3_pane_t2_ParamLimits

0x5338,	// (0x000a1a94) main_mup3_pane_t2

0x5401,	// (0x000a1b5d) main_mup3_pane_t4_ParamLimits

0x5401,	// (0x000a1b5d) main_mup3_pane_t4

0x5455,	// (0x000a1bb1) main_mup3_pane_t5_ParamLimits

0x5455,	// (0x000a1bb1) main_mup3_pane_t5

0x5503,	// (0x000a1c5f) main_mup3_pane_t6_ParamLimits

0x5503,	// (0x000a1c5f) main_mup3_pane_t6

0x0005,

0xf794,	// (0x000abef0) main_mup3_pane_t_ParamLimits

0xf794,	// (0x000abef0) main_mup3_pane_t

0x55af,	// (0x000a1d0b) mup3_progress_pane_ParamLimits

0x55af,	// (0x000a1d0b) mup3_progress_pane

0x5629,	// (0x000a1d85) popup_mup3_control_window_ParamLimits

0x5629,	// (0x000a1d85) popup_mup3_control_window

0xcf5c,	// (0x000a96b8) popup_mup3_text_window

0x5646,	// (0x000a1da2) mup3_progress_pane_t1

0x5665,	// (0x000a1dc1) mup3_progress_pane_t2

0xcf64,	// (0x000a96c0) mup3_progress_pane_t3

0x0002,

0xf7a1,	// (0x000abefd) mup3_progress_pane_t

0xcf81,	// (0x000a96dd) mup_progress_pane_cp03

0x9c5a,	// (0x000a63b6) bg_tb_trans_pane_cp04

0x5684,	// (0x000a1de0) mup3_volume_pane

0x568c,	// (0x000a1de8) popup_mup3_control_window_g1

0xd973,	// (0x000aa0cf) mup3_volume_pane_g1

0xd97c,	// (0x000aa0d8) mup3_volume_pane_g2

0xd985,	// (0x000aa0e1) mup3_volume_pane_g3

0x0002,

0xf7a8,	// (0x000abf04) mup3_volume_pane_g

0x9c5a,	// (0x000a63b6) bg_tb_trans_pane_cp03

0xcf91,	// (0x000a96ed) popup_mup3_text_window_g1

0xcf99,	// (0x000a96f5) popup_mup3_text_window_t1

0xa8d9,	// (0x000a7035) list_calc_item_pane_g1_ParamLimits

0xc9fe,	// (0x000a915a) mup_volume_pane_cp_g1

0x5025,	// (0x000a1781) main_touch_calib_pane_t3

0x503b,	// (0x000a1797) main_touch_calib_pane_t4

0x5051,	// (0x000a17ad) main_touch_calib_pane_t5

0x9c64,	// (0x000a63c0) aid_cell_size_toolbar2

0x9c6c,	// (0x000a63c8) aid_popup3_width_pane

0x0c26,	// (0x0009d382) aid_zoom_text_msg_primary

0x1c95,	// (0x0009e3f1) vorec_t7

0xa89d,	// (0x000a6ff9) bg_calc_paper_pane_g1_ParamLimits

0xa8a9,	// (0x000a7005) bg_calc_paper_pane_g2_ParamLimits

0xa8b5,	// (0x000a7011) bg_calc_paper_pane_g3_ParamLimits

0xa8c1,	// (0x000a701d) bg_calc_paper_pane_g4_ParamLimits

0xa8cd,	// (0x000a7029) bg_calc_paper_pane_g5_ParamLimits

0x125b,	// (0x0009d9b7) bg_calc_paper_pane_g6_ParamLimits

0x126c,	// (0x0009d9c8) bg_calc_paper_pane_g7_ParamLimits

0x127d,	// (0x0009d9d9) bg_calc_paper_pane_g8_ParamLimits

0xf15b,	// (0x000ab8b7) bg_calc_paper_pane_g_ParamLimits

0x1290,	// (0x0009d9ec) calc_bg_paper_pane_g9_ParamLimits

0x1dbb,	// (0x0009e517) image_qvga_pane_ParamLimits

0x1dbb,	// (0x0009e517) image_qvga_pane

0xa7cc,	// (0x000a6f28) bg_popup_sub_pane_cp04_ParamLimits

0xb64a,	// (0x000a7da6) popup_mup_playback_window_g1_ParamLimits

0xb656,	// (0x000a7db2) popup_mup_playback_window_t1_ParamLimits

0xb66b,	// (0x000a7dc7) popup_mup_playback_window_t2_ParamLimits

0xf4e7,	// (0x000abc43) popup_mup_playback_window_t_ParamLimits

0x4afc,	// (0x000a1258) main_mup2_pane_g3_ParamLimits

0x4afc,	// (0x000a1258) main_mup2_pane_g3

0x2177,	// (0x0009e8d3) popup_toolbar_window_cp04

0xba66,	// (0x000a81c2) popup_call2_audio_second_window_g3_ParamLimits

0xba66,	// (0x000a81c2) popup_call2_audio_second_window_g3

0xbe70,	// (0x000a85cc) popup_call2_audio_first_window_g4_ParamLimits

0xbe70,	// (0x000a85cc) popup_call2_audio_first_window_g4

0xc4ef,	// (0x000a8c4b) popup_call2_audio_in_window_g4_ParamLimits

0xc4ef,	// (0x000a8c4b) popup_call2_audio_in_window_g4

0x3f3c,	// (0x000a0698) aid_area_sk_bg_cut_ParamLimits

0x3f3c,	// (0x000a0698) aid_area_sk_bg_cut

0xb680,	// (0x000a7ddc) aid_area_sk_bg_cut_2_ParamLimits

0xb680,	// (0x000a7ddc) aid_area_sk_bg_cut_2

0x4e77,	// (0x000a15d3) aid_placing_details_win

0x4e7f,	// (0x000a15db) aid_placing_details_win_2

0xcdfb,	// (0x000a9557) camera2_autofocus_pane_g1_ParamLimits

0x0e10,	// (0x0009d56c) popup_fixed_preview_cale_window_ParamLimits

0x0e10,	// (0x0009d56c) popup_fixed_preview_cale_window

0xb463,	// (0x000a7bbf) navi_slider_pane_g3

0xb46c,	// (0x000a7bc8) navi_slider_pane_g4

0xb475,	// (0x000a7bd1) navi_slider_pane_g5

0xb463,	// (0x000a7bbf) navi_slider_pane_g6

0x37a7,	// (0x0009ff03) navi_slider_pane_g7

0xb58a,	// (0x000a7ce6) mup_scale_pane_g3

0xb593,	// (0x000a7cef) mup_scale_pane_g4

0xb59c,	// (0x000a7cf8) mup_scale_pane_g5

0x3c2a,	// (0x000a0386) mup_scale_pane_g6

0x3c33,	// (0x000a038f) mup_scale_pane_g7

0xb463,	// (0x000a7bbf) cams2_slider_pane_g3

0xca80,	// (0x000a91dc) cams2_slider_pane_g4

0x4dd7,	// (0x000a1533) cams2_slider_pane_g5

0xb463,	// (0x000a7bbf) cams2_slider_pane_g6

0x4ddf,	// (0x000a153b) cams2_slider_pane_g7

0xccb1,	// (0x000a940d) camera2_autofocus_pane_cp_g1

0xc854,	// (0x000a8fb0) bg_popup_preview_window_pane_cp02_ParamLimits

0xc854,	// (0x000a8fb0) bg_popup_preview_window_pane_cp02

0xcfa7,	// (0x000a9703) list_fp_cale_pane_ParamLimits

0xcfa7,	// (0x000a9703) list_fp_cale_pane

0xcfb3,	// (0x000a970f) popup_fixed_preview_cale_window_t1_ParamLimits

0xcfb3,	// (0x000a970f) popup_fixed_preview_cale_window_t1

0x5695,	// (0x000a1df1) popup_fixed_preview_cale_window_t2_ParamLimits

0x5695,	// (0x000a1df1) popup_fixed_preview_cale_window_t2

0x56aa,	// (0x000a1e06) popup_fixed_preview_cale_window_t3_ParamLimits

0x56aa,	// (0x000a1e06) popup_fixed_preview_cale_window_t3

0x0002,

0xf7af,	// (0x000abf0b) popup_fixed_preview_cale_window_t_ParamLimits

0xf7af,	// (0x000abf0b) popup_fixed_preview_cale_window_t

0x56bf,	// (0x000a1e1b) list_single_fp_cale_pane_ParamLimits

0x56bf,	// (0x000a1e1b) list_single_fp_cale_pane

0xcfd1,	// (0x000a972d) list_single_fp_cale_pane_g1_ParamLimits

0xcfd1,	// (0x000a972d) list_single_fp_cale_pane_g1

0xcfdd,	// (0x000a9739) list_single_fp_cale_pane_g2_ParamLimits

0xcfdd,	// (0x000a9739) list_single_fp_cale_pane_g2

0x0002,

0xf7b6,	// (0x000abf12) list_single_fp_cale_pane_g_ParamLimits

0xf7b6,	// (0x000abf12) list_single_fp_cale_pane_g

0xcff6,	// (0x000a9752) list_single_fp_cale_pane_t1_ParamLimits

0xcff6,	// (0x000a9752) list_single_fp_cale_pane_t1

0xd008,	// (0x000a9764) list_single_fp_cale_pane_t2_ParamLimits

0xd008,	// (0x000a9764) list_single_fp_cale_pane_t2

0x0001,

0xf7bd,	// (0x000abf19) list_single_fp_cale_pane_t_ParamLimits

0xf7bd,	// (0x000abf19) list_single_fp_cale_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0x9c5a,	// (0x000a63b6) main_dialer_pane

0x56cf,	// (0x000a1e2b) aid_cell_size_keypad

0x56d9,	// (0x000a1e35) dialer_ne_pane

0x56e3,	// (0x000a1e3f) grid_dialer_command_1_pane

0x56eb,	// (0x000a1e47) grid_dialer_command_2_pane

0x56f3,	// (0x000a1e4f) grid_dialer_keypad_pane

0x5707,	// (0x000a1e63) bg_popup_call_pane_cp06_ParamLimits

0x5707,	// (0x000a1e63) bg_popup_call_pane_cp06

0x5713,	// (0x000a1e6f) dialer_ne_clear_pane_ParamLimits

0x5713,	// (0x000a1e6f) dialer_ne_clear_pane

0xd03b,	// (0x000a9797) dialer_ne_pane_g1

0xd043,	// (0x000a979f) dialer_ne_pane_t1_ParamLimits

0xd043,	// (0x000a979f) dialer_ne_pane_t1

0x571f,	// (0x000a1e7b) dialer_ne_pane_t2_ParamLimits

0x571f,	// (0x000a1e7b) dialer_ne_pane_t2

0x573c,	// (0x000a1e98) dialer_ne_pane_t3_ParamLimits

0x573c,	// (0x000a1e98) dialer_ne_pane_t3

0x0002,

0xf7c2,	// (0x000abf1e) dialer_ne_pane_t_ParamLimits

0xf7c2,	// (0x000abf1e) dialer_ne_pane_t

0x5760,	// (0x000a1ebc) dialer_ne_pane_t3_copy1_ParamLimits

0x5760,	// (0x000a1ebc) dialer_ne_pane_t3_copy1

0x5784,	// (0x000a1ee0) cell_dialer_keypad_pane_ParamLimits

0x5784,	// (0x000a1ee0) cell_dialer_keypad_pane

0x579b,	// (0x000a1ef7) cell_dialer_command_1_pane_ParamLimits

0x579b,	// (0x000a1ef7) cell_dialer_command_1_pane

0x57b1,	// (0x000a1f0d) cell_dialer_command_2_pane_ParamLimits

0x57b1,	// (0x000a1f0d) cell_dialer_command_2_pane

0xd055,	// (0x000a97b1) bg_button_pane_cp02_ParamLimits

0xd055,	// (0x000a97b1) bg_button_pane_cp02

0x57c0,	// (0x000a1f1c) cell_dialer_keypad_pane_g1_ParamLimits

0x57c0,	// (0x000a1f1c) cell_dialer_keypad_pane_g1

0xd055,	// (0x000a97b1) bg_button_pane_cp03_ParamLimits

0xd055,	// (0x000a97b1) bg_button_pane_cp03

0x57d5,	// (0x000a1f31) cell_dialer_command_1_pane_g1_ParamLimits

0x57d5,	// (0x000a1f31) cell_dialer_command_1_pane_g1

0xd061,	// (0x000a97bd) bg_button_pane_cp04

0x57e9,	// (0x000a1f45) cell_dialer_command_2_pane_g1

0xb452,	// (0x000a7bae) bg_button_pane_cp06

0xd069,	// (0x000a97c5) dialer_ne_clear_pane_g1

0x36e2,	// (0x0009fe3e) navi_pane_g2

0x3710,	// (0x0009fe6c) navi_pane_g3

0x0002,

0xf3ea,	// (0x000abb46) navi_pane_g

0x373b,	// (0x0009fe97) navi_pane_mv_g2

0x3762,	// (0x0009febe) navi_pane_mv_g5

0x376a,	// (0x0009fec6) navi_pane_mv_t1

0xa891,	// (0x000a6fed) main_clock2_pane

0x5827,	// (0x000a1f83) main_clock2_list_pane_ParamLimits

0x5827,	// (0x000a1f83) main_clock2_list_pane

0x5851,	// (0x000a1fad) main_clock2_pane_t1_ParamLimits

0x5851,	// (0x000a1fad) main_clock2_pane_t1

0x5873,	// (0x000a1fcf) main_clock2_pane_t2_ParamLimits

0x5873,	// (0x000a1fcf) main_clock2_pane_t2

0x0004,

0xf7c9,	// (0x000abf25) main_clock2_pane_t_ParamLimits

0xf7c9,	// (0x000abf25) main_clock2_pane_t

0x58d0,	// (0x000a202c) popup_clock_analogue_window_cp03_ParamLimits

0x58d0,	// (0x000a202c) popup_clock_analogue_window_cp03

0x58f0,	// (0x000a204c) popup_clock_digital_window_cp02_ParamLimits

0x58f0,	// (0x000a204c) popup_clock_digital_window_cp02

0x5961,	// (0x000a20bd) main_clock2_list_single_pane_ParamLimits

0x5961,	// (0x000a20bd) main_clock2_list_single_pane

0xb452,	// (0x000a7bae) list_highlight_pane_cp05

0xd085,	// (0x000a97e1) main_clock2_list_single_pane_t1

0x2177,	// (0x0009e8d3) popup_toolbar_window_cp04_ParamLimits

0x4ee0,	// (0x000a163c) camera2_autofocus_pane_g2_ParamLimits

0x4ee0,	// (0x000a163c) camera2_autofocus_pane_g2

0x4eec,	// (0x000a1648) camera2_autofocus_pane_g3_ParamLimits

0x4eec,	// (0x000a1648) camera2_autofocus_pane_g3

0x4ef8,	// (0x000a1654) camera2_autofocus_pane_g4_ParamLimits

0x4ef8,	// (0x000a1654) camera2_autofocus_pane_g4

0x4f04,	// (0x000a1660) camera2_autofocus_pane_g5_ParamLimits

0x4f04,	// (0x000a1660) camera2_autofocus_pane_g5

0x0004,

0xf712,	// (0x000abe6e) camera2_autofocus_pane_g_ParamLimits

0xf712,	// (0x000abe6e) camera2_autofocus_pane_g

0x50cf,	// (0x000a182b) camera2_autofocus_pane_cp_g2

0x50d7,	// (0x000a1833) camera2_autofocus_pane_cp_g3

0x50df,	// (0x000a183b) camera2_autofocus_pane_cp_g4

0x50e7,	// (0x000a1843) camera2_autofocus_pane_cp_g5

0x0004,

0xf778,	// (0x000abed4) camera2_autofocus_pane_cp_g

0x56ff,	// (0x000a1e5b) popup_dialer_spcha_window

0x9c5a,	// (0x000a63b6) bg_popup_sub_pane_cp07

0xd093,	// (0x000a97ef) list_spcha_pane

0xd09b,	// (0x000a97f7) list_single_spcha_pane_ParamLimits

0xd09b,	// (0x000a97f7) list_single_spcha_pane

0x9c5a,	// (0x000a63b6) list_highlight_pane_cp06

0xd0ac,	// (0x000a9808) list_single_spcha_pane_t1

0xc299,	// (0x000a89f5) popup_call2_audio_out_window_g4_ParamLimits

0xc299,	// (0x000a89f5) popup_call2_audio_out_window_g4

0x9c5a,	// (0x000a63b6) main_imed2_pane

0xc88c,	// (0x000a8fe8) popup_imed_adjust2_window

0x456c,	// (0x000a0cc8) popup_imed_trans_window_ParamLimits

0x456c,	// (0x000a0cc8) popup_imed_trans_window

0xcae9,	// (0x000a9245) popup_blid_sat_info2_window_t1

0xcaf7,	// (0x000a9253) popup_blid_sat_info2_window_t2

0x000a,

0xf6a7,	// (0x000abe03) popup_blid_sat_info2_window_t

0x5a0b,	// (0x000a2167) aid_size_cell_colour_35

0x5a25,	// (0x000a2181) aid_size_cell_colour_112

0x5a3c,	// (0x000a2198) aid_size_cell_effect

0xa2df,	// (0x000a6a3b) bg_tb_trans_pane_cp02

0xb3d2,	// (0x000a7b2e) heading_imed_pane

0x5a56,	// (0x000a21b2) listscroll_imed_pane

0xd0ba,	// (0x000a9816) heading_imed_pane_g1

0xd0c2,	// (0x000a981e) heading_imed_pane_t1

0xd0d0,	// (0x000a982c) grid_imed_colour_35_pane_ParamLimits

0xd0d0,	// (0x000a982c) grid_imed_colour_35_pane

0x5a62,	// (0x000a21be) grid_imed_effect_pane

0xd0ec,	// (0x000a9848) list_imed_aspect_pane

0x5a72,	// (0x000a21ce) scroll_pane_cp027_ParamLimits

0x5a72,	// (0x000a21ce) scroll_pane_cp027

0x5a7e,	// (0x000a21da) cell_imed_effect_pane_ParamLimits

0x5a7e,	// (0x000a21da) cell_imed_effect_pane

0xd0f4,	// (0x000a9850) cell_imed_colour_pane_ParamLimits

0xd0f4,	// (0x000a9850) cell_imed_colour_pane

0xd13e,	// (0x000a989a) cell_imed_colour_pane_g1_ParamLimits

0xd13e,	// (0x000a989a) cell_imed_colour_pane_g1

0xd14f,	// (0x000a98ab) hgihlgiht_grid_pane_cp016_ParamLimits

0xd14f,	// (0x000a98ab) hgihlgiht_grid_pane_cp016

0x5a9a,	// (0x000a21f6) cell_imed_effect_pane_g1

0x5aa2,	// (0x000a21fe) grid_highlight_pane_cp017

0xd160,	// (0x000a98bc) list_imed_single_pane_ParamLimits

0xd160,	// (0x000a98bc) list_imed_single_pane

0x9c5a,	// (0x000a63b6) list_highlight_pane_cp07

0xd174,	// (0x000a98d0) list_imed_aspect_pane_comp1_t1

0xc860,	// (0x000a8fbc) bg_tb_trans_pane_cp05

0xd196,	// (0x000a98f2) popup_imed_adjust2_window_g1

0xd1bd,	// (0x000a9919) popup_imed_adjust2_window_t1

0xd1d5,	// (0x000a9931) slider_imed_adjust_pane

0xd1e9,	// (0x000a9945) slider_imed_adjust_pane_g1

0xd1f9,	// (0x000a9955) slider_imed_adjust_pane_g2

0xd209,	// (0x000a9965) slider_imed_adjust_pane_g3

0xd21a,	// (0x000a9976) slider_imed_adjust_pane_g4

0x0003,

0xf7e6,	// (0x000abf42) slider_imed_adjust_pane_g

0x5aab,	// (0x000a2207) aid_size_cell_clipart2

0x5ab7,	// (0x000a2213) grid_imed_clipart_pane

0xd22b,	// (0x000a9987) scroll_pane_cp031

0x5ac1,	// (0x000a221d) cell_imed_clipart_pane_ParamLimits

0x5ac1,	// (0x000a221d) cell_imed_clipart_pane

0x5adf,	// (0x000a223b) cell_imed_clipart_pane_g1

0x9c5a,	// (0x000a63b6) grid_highlight_pane_cp014

0x5833,	// (0x000a1f8f) main_clock2_pane_g1_ParamLimits

0x5833,	// (0x000a1f8f) main_clock2_pane_g1

0x590c,	// (0x000a2068) aid_call2_pane_cp10

0x591e,	// (0x000a207a) aid_call_pane_cp10

0xb36d,	// (0x000a7ac9) popup_clock_analogue_window_cp10_g1

0xb36d,	// (0x000a7ac9) popup_clock_analogue_window_cp10_g2

0x5930,	// (0x000a208c) popup_clock_analogue_window_cp10_g3

0x5930,	// (0x000a208c) popup_clock_analogue_window_cp10_g4

0xb36d,	// (0x000a7ac9) popup_clock_analogue_window_cp10_g5

0x0004,

0xf7d4,	// (0x000abf30) popup_clock_analogue_window_cp10_g

0x5942,	// (0x000a209e) popup_clock_analogue_window_cp10_t1

0x5973,	// (0x000a20cf) clock_digital_number_pane_cp10_ParamLimits

0x5973,	// (0x000a20cf) clock_digital_number_pane_cp10

0x598b,	// (0x000a20e7) clock_digital_number_pane_cp11_ParamLimits

0x598b,	// (0x000a20e7) clock_digital_number_pane_cp11

0x59a3,	// (0x000a20ff) clock_digital_number_pane_cp12_ParamLimits

0x59a3,	// (0x000a20ff) clock_digital_number_pane_cp12

0x59bb,	// (0x000a2117) clock_digital_number_pane_cp13_ParamLimits

0x59bb,	// (0x000a2117) clock_digital_number_pane_cp13

0x59d3,	// (0x000a212f) clock_digital_separator_pane_cp10_ParamLimits

0x59d3,	// (0x000a212f) clock_digital_separator_pane_cp10

0x59eb,	// (0x000a2147) popup_clock_digital_window_cp02_t1_ParamLimits

0x59eb,	// (0x000a2147) popup_clock_digital_window_cp02_t1

0xa7c4,	// (0x000a6f20) clock_digital_number_pane_cp10_g1

0xa7c4,	// (0x000a6f20) clock_digital_number_pane_cp10_g2

0x0001,

0xf7ef,	// (0x000abf4b) clock_digital_number_pane_cp10_g

0xa7c4,	// (0x000a6f20) clock_digital_separator_pane_cp10_g1

0xa7c4,	// (0x000a6f20) clock_digital_separator_pane_g2_cp10

0xb422,	// (0x000a7b7e) navi_pane_vded_g4

0xb42b,	// (0x000a7b87) navi_pane_vded_g5

0xb434,	// (0x000a7b90) navi_pane_vded_t1

0x9c5a,	// (0x000a63b6) main_vded_pane

0x5ae8,	// (0x000a2244) main_vded_pane_g1

0x5af4,	// (0x000a2250) main_vded_pane_g2

0x5afe,	// (0x000a225a) main_vded_pane_g3

0x0002,

0xf7f4,	// (0x000abf50) main_vded_pane_g

0x5b08,	// (0x000a2264) main_vded_pane_t1

0x5b16,	// (0x000a2272) main_vded_pane_t2

0x0001,

0xf7fb,	// (0x000abf57) main_vded_pane_t

0x5b24,	// (0x000a2280) vded_slider_pane

0x5b2e,	// (0x000a228a) vded_video_pane

0xd233,	// (0x000a998f) vded_video_pane_g1

0x5b3a,	// (0x000a2296) vded_video_pane_g2

0xccb1,	// (0x000a940d) vded_video_pane_g3

0x0002,

0xf800,	// (0x000abf5c) vded_video_pane_g

0xd23d,	// (0x000a9999) vded_slider_pane_g1

0xc9fe,	// (0x000a915a) vded_slider_pane_g2

0xd246,	// (0x000a99a2) vded_slider_pane_g3

0xd24f,	// (0x000a99ab) vded_slider_pane_g4

0xd258,	// (0x000a99b4) vded_slider_pane_g5

0x0004,

0xf807,	// (0x000abf63) vded_slider_pane_g

0x561d,	// (0x000a1d79) mup3_rocker_pane_ParamLimits

0x561d,	// (0x000a1d79) mup3_rocker_pane

0x5b43,	// (0x000a229f) mup3_control_keys_pane_g1

0x5b4b,	// (0x000a22a7) mup3_control_keys_pane_g2

0x5b53,	// (0x000a22af) mup3_control_keys_pane_g3

0x5b5b,	// (0x000a22b7) mup3_control_keys_pane_g4

0x0003,

0xf812,	// (0x000abf6e) mup3_control_keys_pane_g

0x0e2e,	// (0x0009d58a) popup_toolbar2_fixed_window_cp01_ParamLimits

0x0e2e,	// (0x0009d58a) popup_toolbar2_fixed_window_cp01

0x5639,	// (0x000a1d95) popup_toolbar2_fixed_window_cp02_ParamLimits

0x5639,	// (0x000a1d95) popup_toolbar2_fixed_window_cp02

0xbbd8,	// (0x000a8334) popup_call2_audio_second_window_t4_ParamLimits

0xbbd8,	// (0x000a8334) popup_call2_audio_second_window_t4

0xc106,	// (0x000a8862) popup_call2_audio_first_window_t6_ParamLimits

0xc106,	// (0x000a8862) popup_call2_audio_first_window_t6

0xc39c,	// (0x000a8af8) popup_call2_audio_out_window_t6_ParamLimits

0xc39c,	// (0x000a8af8) popup_call2_audio_out_window_t6

0x9c5a,	// (0x000a63b6) main_vitu_pane

0x5b6b,	// (0x000a22c7) aid_size_cell_itu_ParamLimits

0x5b6b,	// (0x000a22c7) aid_size_cell_itu

0x0e60,	// (0x0009d5bc) bg_popup_window_pane_cp08_ParamLimits

0x0e60,	// (0x0009d5bc) bg_popup_window_pane_cp08

0x5b79,	// (0x000a22d5) field_vitu_entry_pane_ParamLimits

0x5b79,	// (0x000a22d5) field_vitu_entry_pane

0x5b88,	// (0x000a22e4) grid_vitu_function_pane_ParamLimits

0x5b88,	// (0x000a22e4) grid_vitu_function_pane

0x5b98,	// (0x000a22f4) grid_vitu_itu_pane_ParamLimits

0x5b98,	// (0x000a22f4) grid_vitu_itu_pane

0x5ba8,	// (0x000a2304) cell_vitu_itu_pane_ParamLimits

0x5ba8,	// (0x000a2304) cell_vitu_itu_pane

0x5bbf,	// (0x000a231b) cell_vitu_function_pane_ParamLimits

0x5bbf,	// (0x000a231b) cell_vitu_function_pane

0xa2df,	// (0x000a6a3b) bg_popup_sub_pane_cp08_ParamLimits

0xa2df,	// (0x000a6a3b) bg_popup_sub_pane_cp08

0x5bd3,	// (0x000a232f) field_vitu_entry_pane_t1_ParamLimits

0x5bd3,	// (0x000a232f) field_vitu_entry_pane_t1

0xd279,	// (0x000a99d5) field_vitu_entry_pane_t2_ParamLimits

0xd279,	// (0x000a99d5) field_vitu_entry_pane_t2

0x0001,

0xf820,	// (0x000abf7c) field_vitu_entry_pane_t_ParamLimits

0xf820,	// (0x000abf7c) field_vitu_entry_pane_t

0xd296,	// (0x000a99f2) bg_button_pane_cp05_ParamLimits

0xd296,	// (0x000a99f2) bg_button_pane_cp05

0x5bed,	// (0x000a2349) cell_vitu_itu_pane_g1

0x5c05,	// (0x000a2361) cell_vitu_itu_pane_t1_ParamLimits

0x5c05,	// (0x000a2361) cell_vitu_itu_pane_t1

0x5c17,	// (0x000a2373) cell_vitu_itu_pane_t2_ParamLimits

0x5c17,	// (0x000a2373) cell_vitu_itu_pane_t2

0x0002,

0xf825,	// (0x000abf81) cell_vitu_itu_pane_t_ParamLimits

0xf825,	// (0x000abf81) cell_vitu_itu_pane_t

0xd2a4,	// (0x000a9a00) bg_button_pane_cp07

0x5c5a,	// (0x000a23b6) cell_vitu_function_pane_g1

0x10f3,	// (0x0009d84f) main_calc_pane_g1

0x0c1a,	// (0x0009d376) aid_visual_content_pane

0x9c5a,	// (0x000a63b6) main_vradio_pane

0x5c63,	// (0x000a23bf) main_vradio_pane_g1_ParamLimits

0x5c63,	// (0x000a23bf) main_vradio_pane_g1

0xd2ae,	// (0x000a9a0a) main_vradio_pane_g2_ParamLimits

0xd2ae,	// (0x000a9a0a) main_vradio_pane_g2

0x0001,

0xf82c,	// (0x000abf88) main_vradio_pane_g_ParamLimits

0xf82c,	// (0x000abf88) main_vradio_pane_g

0x5c71,	// (0x000a23cd) main_vradio_pane_t1_ParamLimits

0x5c71,	// (0x000a23cd) main_vradio_pane_t1

0x5c83,	// (0x000a23df) main_vradio_pane_t2_ParamLimits

0x5c83,	// (0x000a23df) main_vradio_pane_t2

0xd2bb,	// (0x000a9a17) main_vradio_pane_t3_ParamLimits

0xd2bb,	// (0x000a9a17) main_vradio_pane_t3

0x0002,

0xf831,	// (0x000abf8d) main_vradio_pane_t_ParamLimits

0xf831,	// (0x000abf8d) main_vradio_pane_t

0x5c95,	// (0x000a23f1) vradio_rocker_control_pane_ParamLimits

0x5c95,	// (0x000a23f1) vradio_rocker_control_pane

0x5ca1,	// (0x000a23fd) vradio_station_info_pane_ParamLimits

0x5ca1,	// (0x000a23fd) vradio_station_info_pane

0xd2cf,	// (0x000a9a2b) vradio_frequency_info_pane_ParamLimits

0xd2cf,	// (0x000a9a2b) vradio_frequency_info_pane

0xccb1,	// (0x000a940d) vradio_station_info_pane_g1

0xd2de,	// (0x000a9a3a) vradio_station_info_pane_t1_ParamLimits

0xd2de,	// (0x000a9a3a) vradio_station_info_pane_t1

0xd300,	// (0x000a9a5c) vradio_station_info_pane_t2_ParamLimits

0xd300,	// (0x000a9a5c) vradio_station_info_pane_t2

0x0001,

0xf838,	// (0x000abf94) vradio_station_info_pane_t_ParamLimits

0xf838,	// (0x000abf94) vradio_station_info_pane_t

0xd312,	// (0x000a9a6e) vradio_tuning_pane

0xd31a,	// (0x000a9a76) vradio_rocker_control_pane_g1

0xd322,	// (0x000a9a7e) vradio_rocker_control_pane_g2

0xd32a,	// (0x000a9a86) vradio_rocker_control_pane_g3

0xd332,	// (0x000a9a8e) vradio_rocker_control_pane_g4

0xd33a,	// (0x000a9a96) vradio_rocker_control_pane_g5

0x0004,

0xf83d,	// (0x000abf99) vradio_rocker_control_pane_g

0x5cae,	// (0x000a240a) vradio_frequency_info_pane_g1

0xd342,	// (0x000a9a9e) vradio_frequency_info_pane_t1_ParamLimits

0xd342,	// (0x000a9a9e) vradio_frequency_info_pane_t1

0x5cb8,	// (0x000a2414) vradio_tuning_pane_g1

0x5cc3,	// (0x000a241f) vradio_tuning_pane_t1

0x9c78,	// (0x000a63d4) area_side_right_pane_ParamLimits

0x9c78,	// (0x000a63d4) area_side_right_pane

0xc81b,	// (0x000a8f77) status_small_pane_g1

0xc823,	// (0x000a8f7f) status_small_pane_g2

0xc82c,	// (0x000a8f88) status_small_pane_g3

0xc835,	// (0x000a8f91) status_small_pane_g4

0x0003,

0xf5fd,	// (0x000abd59) status_small_pane_g

0xc83e,	// (0x000a8f9a) status_small_pane_t1

0x9c5a,	// (0x000a63b6) main_video3_pane

0xd356,	// (0x000a9ab2) cams_zoom_vslider_pane

0xd35e,	// (0x000a9aba) image3_wide_pane_ParamLimits

0xd35e,	// (0x000a9aba) image3_wide_pane

0xd378,	// (0x000a9ad4) image3_wide_small_pane

0xd384,	// (0x000a9ae0) main_video3_pane_g1_ParamLimits

0xd384,	// (0x000a9ae0) main_video3_pane_g1

0xd3a0,	// (0x000a9afc) main_video3_pane_g2_ParamLimits

0xd3a0,	// (0x000a9afc) main_video3_pane_g2

0x0001,

0xf848,	// (0x000abfa4) main_video3_pane_g_ParamLimits

0xf848,	// (0x000abfa4) main_video3_pane_g

0xd3bc,	// (0x000a9b18) main_video3_pane_t1_ParamLimits

0xd3bc,	// (0x000a9b18) main_video3_pane_t1

0xd3e7,	// (0x000a9b43) main_video3_pane_t2_ParamLimits

0xd3e7,	// (0x000a9b43) main_video3_pane_t2

0xd414,	// (0x000a9b70) main_video3_pane_t3_ParamLimits

0xd414,	// (0x000a9b70) main_video3_pane_t3

0x0002,

0xf84d,	// (0x000abfa9) main_video3_pane_t_ParamLimits

0xf84d,	// (0x000abfa9) main_video3_pane_t

0xd441,	// (0x000a9b9d) cams_zoom_vslider_pane_g1

0xd44a,	// (0x000a9ba6) cams_zoom_vslider_pane_g2

0x0001,

0xf854,	// (0x000abfb0) cams_zoom_vslider_pane_g

0xd452,	// (0x000a9bae) small_slider_vertical_pane

0xccb1,	// (0x000a940d) small_slider_vertical_pane_g1

0xccb1,	// (0x000a940d) small_slider_vertical_pane_g2

0xd45a,	// (0x000a9bb6) small_slider_vertical_pane_g3

0x0002,

0xf859,	// (0x000abfb5) small_slider_vertical_pane_g

0x9c5a,	// (0x000a63b6) main_hwr_training_pane

0xd463,	// (0x000a9bbf) hwr_training_instruct_pane_ParamLimits

0xd463,	// (0x000a9bbf) hwr_training_instruct_pane

0x5cd2,	// (0x000a242e) hwr_training_navi_pane_ParamLimits

0x5cd2,	// (0x000a242e) hwr_training_navi_pane

0x5cec,	// (0x000a2448) hwr_training_write_pane_ParamLimits

0x5cec,	// (0x000a2448) hwr_training_write_pane

0x9c5a,	// (0x000a63b6) bg_frame_shadow_pane

0xd49a,	// (0x000a9bf6) hwr_training_write_pane_g1

0xd4a2,	// (0x000a9bfe) hwr_training_write_pane_g2

0xd4aa,	// (0x000a9c06) hwr_training_write_pane_g3

0xd4b2,	// (0x000a9c0e) hwr_training_write_pane_g4

0xd4ba,	// (0x000a9c16) hwr_training_write_pane_g5

0xd4c2,	// (0x000a9c1e) hwr_training_write_pane_g6

0xd4ca,	// (0x000a9c26) hwr_training_write_pane_g7

0x0006,

0xf860,	// (0x000abfbc) hwr_training_write_pane_g

0x5d24,	// (0x000a2480) hwr_training_navi_pane_g1_ParamLimits

0x5d24,	// (0x000a2480) hwr_training_navi_pane_g1

0x5d36,	// (0x000a2492) hwr_training_navi_pane_g2_ParamLimits

0x5d36,	// (0x000a2492) hwr_training_navi_pane_g2

0x5d48,	// (0x000a24a4) hwr_training_navi_pane_g3_ParamLimits

0x5d48,	// (0x000a24a4) hwr_training_navi_pane_g3

0x5d58,	// (0x000a24b4) hwr_training_navi_pane_g4_ParamLimits

0x5d58,	// (0x000a24b4) hwr_training_navi_pane_g4

0x0004,

0xf86f,	// (0x000abfcb) hwr_training_navi_pane_g_ParamLimits

0xf86f,	// (0x000abfcb) hwr_training_navi_pane_g

0x5d72,	// (0x000a24ce) hwr_training_navi_pane_t1

0x5d80,	// (0x000a24dc) list_single_hwr_training_instruct_pane_ParamLimits

0x5d80,	// (0x000a24dc) list_single_hwr_training_instruct_pane

0xd4d2,	// (0x000a9c2e) list_single_hwr_training_instruct_pane_t1

0xcbf1,	// (0x000a934d) bg_frame_shadow_pane_g1

0xd4e1,	// (0x000a9c3d) bg_frame_shadow_pane_g2

0xd4e9,	// (0x000a9c45) bg_frame_shadow_pane_g3

0xd4f1,	// (0x000a9c4d) bg_frame_shadow_pane_g4

0xd4f9,	// (0x000a9c55) bg_frame_shadow_pane_g5

0xd501,	// (0x000a9c5d) bg_frame_shadow_pane_g6

0xd509,	// (0x000a9c65) bg_frame_shadow_pane_g7

0xa95c,	// (0x000a70b8) bg_frame_shadow_pane_g8

0x0007,

0xf87a,	// (0x000abfd6) bg_frame_shadow_pane_g

0x9c5a,	// (0x000a63b6) main_video_tele_dialer_pane

0x5d99,	// (0x000a24f5) aid_size_cell_video_keypad_ParamLimits

0x5d99,	// (0x000a24f5) aid_size_cell_video_keypad

0x5da9,	// (0x000a2505) grid_video_dialer_keypad_pane_ParamLimits

0x5da9,	// (0x000a2505) grid_video_dialer_keypad_pane

0x5ddb,	// (0x000a2537) video_down_pane_cp_ParamLimits

0x5ddb,	// (0x000a2537) video_down_pane_cp

0x5e03,	// (0x000a255f) cell_video_dialer_keypad_pane_ParamLimits

0x5e03,	// (0x000a255f) cell_video_dialer_keypad_pane

0xd511,	// (0x000a9c6d) bg_button_pane_cp08_ParamLimits

0xd511,	// (0x000a9c6d) bg_button_pane_cp08

0x5e1a,	// (0x000a2576) cell_video_dialer_keypad_pane_g1_ParamLimits

0x5e1a,	// (0x000a2576) cell_video_dialer_keypad_pane_g1

0x5611,	// (0x000a1d6d) mup3_rocker2_pane_ParamLimits

0x5611,	// (0x000a1d6d) mup3_rocker2_pane

0xccb1,	// (0x000a940d) mup3_rocker2_pane_g1

0x44ee,	// (0x000a0c4a) main_dialer2_pane

0x9c5a,	// (0x000a63b6) main_mp4_pane

0x5e59,	// (0x000a25b5) main_mp4_pane_g1_ParamLimits

0x5e59,	// (0x000a25b5) main_mp4_pane_g1

0x5e67,	// (0x000a25c3) main_mp4_pane_g2_ParamLimits

0x5e67,	// (0x000a25c3) main_mp4_pane_g2

0x5e75,	// (0x000a25d1) main_mp4_pane_g3_ParamLimits

0x5e75,	// (0x000a25d1) main_mp4_pane_g3

0x5ec8,	// (0x000a2624) main_mp4_pane_g4_ParamLimits

0x5ec8,	// (0x000a2624) main_mp4_pane_g4

0x5ef0,	// (0x000a264c) main_mp4_pane_g5_ParamLimits

0x5ef0,	// (0x000a264c) main_mp4_pane_g5

0x0005,

0xf89a,	// (0x000abff6) main_mp4_pane_g_ParamLimits

0xf89a,	// (0x000abff6) main_mp4_pane_g

0x5f40,	// (0x000a269c) main_mp4_pane_t1_ParamLimits

0x5f40,	// (0x000a269c) main_mp4_pane_t1

0x5f9c,	// (0x000a26f8) main_mp4_pane_t2_ParamLimits

0x5f9c,	// (0x000a26f8) main_mp4_pane_t2

0xd51d,	// (0x000a9c79) main_mp4_pane_t3_ParamLimits

0xd51d,	// (0x000a9c79) main_mp4_pane_t3

0x5fee,	// (0x000a274a) main_mp4_pane_t4_ParamLimits

0x5fee,	// (0x000a274a) main_mp4_pane_t4

0x0003,

0xf8a7,	// (0x000ac003) main_mp4_pane_t_ParamLimits

0xf8a7,	// (0x000ac003) main_mp4_pane_t

0x602e,	// (0x000a278a) mp4_progress_pane_ParamLimits

0x602e,	// (0x000a278a) mp4_progress_pane

0x6078,	// (0x000a27d4) mp4_rocker_pane_ParamLimits

0x6078,	// (0x000a27d4) mp4_rocker_pane

0xd545,	// (0x000a9ca1) mp4_progress_pane_t1

0xd55e,	// (0x000a9cba) mp4_progress_pane_t2

0x0001,

0xf8b0,	// (0x000ac00c) mp4_progress_pane_t

0xd577,	// (0x000a9cd3) mup_progress_pane_cp04

0xd98e,	// (0x000aa0ea) mp4_rocker_pane_g1

0x609a,	// (0x000a27f6) aid_cell_size_keypad2_ParamLimits

0x609a,	// (0x000a27f6) aid_cell_size_keypad2

0x60aa,	// (0x000a2806) dialer2_ne_pane_ParamLimits

0x60aa,	// (0x000a2806) dialer2_ne_pane

0x60b6,	// (0x000a2812) grid_dialer2_keypad_pane_ParamLimits

0x60b6,	// (0x000a2812) grid_dialer2_keypad_pane

0xd998,	// (0x000aa0f4) bg_popup_call_pane_cp07_ParamLimits

0xd998,	// (0x000aa0f4) bg_popup_call_pane_cp07

0x60c4,	// (0x000a2820) dialer2_ne_pane_t1_ParamLimits

0x60c4,	// (0x000a2820) dialer2_ne_pane_t1

0x60e9,	// (0x000a2845) cell_dialer2_keypad_pane_ParamLimits

0x60e9,	// (0x000a2845) cell_dialer2_keypad_pane

0xd595,	// (0x000a9cf1) bg_button_pane_pane_cp04_ParamLimits

0xd595,	// (0x000a9cf1) bg_button_pane_pane_cp04

0x6100,	// (0x000a285c) cell_dialer2_keypad_pane_g1_ParamLimits

0x6100,	// (0x000a285c) cell_dialer2_keypad_pane_g1

0x2049,	// (0x0009e7a5) aid_placing_vt_set_content_ParamLimits

0x2049,	// (0x0009e7a5) aid_placing_vt_set_content

0x2071,	// (0x0009e7cd) aid_placing_vt_set_title_ParamLimits

0x2071,	// (0x0009e7cd) aid_placing_vt_set_title

0x9c5a,	// (0x000a63b6) main_image3_pane

0x619a,	// (0x000a28f6) area_side_right_pane_cp01_ParamLimits

0x619a,	// (0x000a28f6) area_side_right_pane_cp01

0x61c9,	// (0x000a2925) main_image3_pane_g1_ParamLimits

0x61c9,	// (0x000a2925) main_image3_pane_g1

0x61d7,	// (0x000a2933) main_image3_pane_g2_ParamLimits

0x61d7,	// (0x000a2933) main_image3_pane_g2

0x61f0,	// (0x000a294c) main_image3_pane_g3_ParamLimits

0x61f0,	// (0x000a294c) main_image3_pane_g3

0x6209,	// (0x000a2965) main_image3_pane_g4_ParamLimits

0x6209,	// (0x000a2965) main_image3_pane_g4

0x0003,

0xf8bf,	// (0x000ac01b) main_image3_pane_g_ParamLimits

0xf8bf,	// (0x000ac01b) main_image3_pane_g

0x6222,	// (0x000a297e) main_image3_pane_t1_ParamLimits

0x6222,	// (0x000a297e) main_image3_pane_t1

0x6247,	// (0x000a29a3) main_image3_pane_t2_ParamLimits

0x6247,	// (0x000a29a3) main_image3_pane_t2

0x6266,	// (0x000a29c2) main_image3_pane_t3_ParamLimits

0x6266,	// (0x000a29c2) main_image3_pane_t3

0x0003,

0xf8c8,	// (0x000ac024) main_image3_pane_t_ParamLimits

0xf8c8,	// (0x000ac024) main_image3_pane_t

0x0e60,	// (0x0009d5bc) grid_sctrl_middle_pane_cp01_ParamLimits

0x0e60,	// (0x0009d5bc) grid_sctrl_middle_pane_cp01

0x62c7,	// (0x000a2a23) cell_sctrl_middle_pane_cp01_ParamLimits

0x62c7,	// (0x000a2a23) cell_sctrl_middle_pane_cp01

0x62d8,	// (0x000a2a34) cell_sctrl_middle_pane_cp01_g1_ParamLimits

0x62d8,	// (0x000a2a34) cell_sctrl_middle_pane_cp01_g1

0x9c5a,	// (0x000a63b6) main_call4_pane

0x62e5,	// (0x000a2a41) aid_size_button_call4_ParamLimits

0x62e5,	// (0x000a2a41) aid_size_button_call4

0x6317,	// (0x000a2a73) call4_windows_pane_ParamLimits

0x6317,	// (0x000a2a73) call4_windows_pane

0x6333,	// (0x000a2a8f) grid_call4_button_pane_ParamLimits

0x6333,	// (0x000a2a8f) grid_call4_button_pane

0xd5a1,	// (0x000a9cfd) call4_windows_conf_pane

0x6357,	// (0x000a2ab3) popup_call4_audio_first_window_ParamLimits

0x6357,	// (0x000a2ab3) popup_call4_audio_first_window

0x6383,	// (0x000a2adf) popup_call4_audio_second_window_ParamLimits

0x6383,	// (0x000a2adf) popup_call4_audio_second_window

0xd5de,	// (0x000a9d3a) popup_call4_audio_wait_window_ParamLimits

0xd5de,	// (0x000a9d3a) popup_call4_audio_wait_window

0x6397,	// (0x000a2af3) cell_call4_button_pane_ParamLimits

0x6397,	// (0x000a2af3) cell_call4_button_pane

0x63ba,	// (0x000a2b16) bg_button_pane_cp09_ParamLimits

0x63ba,	// (0x000a2b16) bg_button_pane_cp09

0x63c6,	// (0x000a2b22) cell_call4_button_pane_g1_ParamLimits

0x63c6,	// (0x000a2b22) cell_call4_button_pane_g1

0x63d3,	// (0x000a2b2f) cell_call4_button_pane_t1_ParamLimits

0x63d3,	// (0x000a2b2f) cell_call4_button_pane_t1

0xd626,	// (0x000a9d82) popup_call4_audio_conf_window_ParamLimits

0xd626,	// (0x000a9d82) popup_call4_audio_conf_window

0x5646,	// (0x000a1da2) mup3_progress_pane_t1_ParamLimits

0x5665,	// (0x000a1dc1) mup3_progress_pane_t2_ParamLimits

0xcf64,	// (0x000a96c0) mup3_progress_pane_t3_ParamLimits

0xf7a1,	// (0x000abefd) mup3_progress_pane_t_ParamLimits

0xcf81,	// (0x000a96dd) mup_progress_pane_cp03_ParamLimits

0x5b63,	// (0x000a22bf) mup3_control_keys_pane_g4_copy1

0x605c,	// (0x000a27b8) mp4_rocker2_pane_ParamLimits

0x605c,	// (0x000a27b8) mp4_rocker2_pane

0xd640,	// (0x000a9d9c) mp4_rocker2_pane_g1

0xd648,	// (0x000a9da4) mp4_rocker2_pane_g2

0x63e5,	// (0x000a2b41) mp4_rocker2_pane_g3

0x63ed,	// (0x000a2b49) mp4_rocker2_pane_g4

0x63f5,	// (0x000a2b51) mp4_rocker2_pane_g5

0x0004,

0xf8d1,	// (0x000ac02d) mp4_rocker2_pane_g

0x9c5a,	// (0x000a63b6) main_camera4_pane

0x9c5a,	// (0x000a63b6) main_video4_pane

0x5db7,	// (0x000a2513) main_video_tele_dialer_pane_t1_ParamLimits

0x5db7,	// (0x000a2513) main_video_tele_dialer_pane_t1

0x5dc9,	// (0x000a2525) main_video_tele_dialer_pane_t2_ParamLimits

0x5dc9,	// (0x000a2525) main_video_tele_dialer_pane_t2

0x0001,

0xf88b,	// (0x000abfe7) main_video_tele_dialer_pane_t_ParamLimits

0xf88b,	// (0x000abfe7) main_video_tele_dialer_pane_t

0x6415,	// (0x000a2b71) cam4_autofocus_pane_ParamLimits

0x6415,	// (0x000a2b71) cam4_autofocus_pane

0x642d,	// (0x000a2b89) cam4_image_uncrop_pane_ParamLimits

0x642d,	// (0x000a2b89) cam4_image_uncrop_pane

0x6446,	// (0x000a2ba2) cam4_indicators_pane_ParamLimits

0x6446,	// (0x000a2ba2) cam4_indicators_pane

0x6462,	// (0x000a2bbe) main_camera4_pane_g1_ParamLimits

0x6462,	// (0x000a2bbe) main_camera4_pane_g1

0x646e,	// (0x000a2bca) main_camera4_pane_g2_ParamLimits

0x646e,	// (0x000a2bca) main_camera4_pane_g2

0x646e,	// (0x000a2bca) main_camera4_pane_g3_ParamLimits

0x646e,	// (0x000a2bca) main_camera4_pane_g3

0x647a,	// (0x000a2bd6) main_camera4_pane_g4_ParamLimits

0x647a,	// (0x000a2bd6) main_camera4_pane_g4

0x6486,	// (0x000a2be2) main_camera4_pane_g5_ParamLimits

0x6486,	// (0x000a2be2) main_camera4_pane_g5

0x0005,

0xf8dc,	// (0x000ac038) main_camera4_pane_g_ParamLimits

0xf8dc,	// (0x000ac038) main_camera4_pane_g

0x64a0,	// (0x000a2bfc) main_camera4_pane_t1_ParamLimits

0x64a0,	// (0x000a2bfc) main_camera4_pane_t1

0x64ea,	// (0x000a2c46) bg_tb_trans_pane_cp06

0x6500,	// (0x000a2c5c) cam4_indicators_pane_g1

0x6511,	// (0x000a2c6d) cam4_indicators_pane_g2

0x0002,

0xf8f7,	// (0x000ac053) cam4_indicators_pane_g

0x6529,	// (0x000a2c85) cam4_indicators_pane_t1

0x6553,	// (0x000a2caf) main_video4_pane_g1_ParamLimits

0x6553,	// (0x000a2caf) main_video4_pane_g1

0x655f,	// (0x000a2cbb) main_video4_pane_g2_ParamLimits

0x655f,	// (0x000a2cbb) main_video4_pane_g2

0x656b,	// (0x000a2cc7) main_video4_pane_g3_ParamLimits

0x656b,	// (0x000a2cc7) main_video4_pane_g3

0x6577,	// (0x000a2cd3) main_video4_pane_g4_ParamLimits

0x6577,	// (0x000a2cd3) main_video4_pane_g4

0x0004,

0xf8fe,	// (0x000ac05a) main_video4_pane_g_ParamLimits

0xf8fe,	// (0x000ac05a) main_video4_pane_g

0x6599,	// (0x000a2cf5) vid4_indicators_pane_ParamLimits

0x6599,	// (0x000a2cf5) vid4_indicators_pane

0x65b8,	// (0x000a2d14) video4_image_uncrop_cif_pane_ParamLimits

0x65b8,	// (0x000a2d14) video4_image_uncrop_cif_pane

0x65c7,	// (0x000a2d23) video4_image_uncrop_nhd_pane_ParamLimits

0x65c7,	// (0x000a2d23) video4_image_uncrop_nhd_pane

0x642d,	// (0x000a2b89) video4_image_uncrop_vga_pane_ParamLimits

0x642d,	// (0x000a2b89) video4_image_uncrop_vga_pane

0x65d6,	// (0x000a2d32) bg_tb_trans_pane_cp07

0x65ee,	// (0x000a2d4a) vid4_indicators_pane_g1

0x6604,	// (0x000a2d60) vid4_indicators_pane_g2

0x6618,	// (0x000a2d74) vid4_indicators_pane_g3

0x0004,

0xf909,	// (0x000ac065) vid4_indicators_pane_g

0x6649,	// (0x000a2da5) vid4_indicators_pane_t1

0x6660,	// (0x000a2dbc) cam4_autofocus_pane_g1

0x6668,	// (0x000a2dc4) cam4_autofocus_pane_g2

0x6670,	// (0x000a2dcc) cam4_autofocus_pane_g3

0x0002,

0xf914,	// (0x000ac070) cam4_autofocus_pane_g

0x6678,	// (0x000a2dd4) cam4_autofocus_pane_g3_copy1

0x5de7,	// (0x000a2543) video_down_pane_cp_t1

0x5df5,	// (0x000a2551) video_down_pane_cp_t2

0x0001,

0xf890,	// (0x000abfec) video_down_pane_cp_t

0x0e60,	// (0x0009d5bc) popup_vitu2_window_ParamLimits

0x0e60,	// (0x0009d5bc) popup_vitu2_window

0x6680,	// (0x000a2ddc) aid_size_cell2_itu2_ParamLimits

0x6680,	// (0x000a2ddc) aid_size_cell2_itu2

0x66a2,	// (0x000a2dfe) aid_size_cell_itu2_ParamLimits

0x66a2,	// (0x000a2dfe) aid_size_cell_itu2

0x66e8,	// (0x000a2e44) bg_popup_window_pane_cp09_ParamLimits

0x66e8,	// (0x000a2e44) bg_popup_window_pane_cp09

0x66f6,	// (0x000a2e52) field_vitu2_entry_pane_ParamLimits

0x66f6,	// (0x000a2e52) field_vitu2_entry_pane

0x6716,	// (0x000a2e72) grid_vitu2_function_pane_ParamLimits

0x6716,	// (0x000a2e72) grid_vitu2_function_pane

0x675a,	// (0x000a2eb6) grid_vitu2_itu_pane_ParamLimits

0x675a,	// (0x000a2eb6) grid_vitu2_itu_pane

0x67d2,	// (0x000a2f2e) cell_vitu2_itu_pane_ParamLimits

0x67d2,	// (0x000a2f2e) cell_vitu2_itu_pane

0x67e9,	// (0x000a2f45) cell_vitu2_function_pane_ParamLimits

0x67e9,	// (0x000a2f45) cell_vitu2_function_pane

0xd650,	// (0x000a9dac) bg_popup_call_pane_cp08_ParamLimits

0xd650,	// (0x000a9dac) bg_popup_call_pane_cp08

0xd669,	// (0x000a9dc5) field_vitu2_entry_pane_g1

0xd675,	// (0x000a9dd1) field_vitu2_entry_pane_g2

0x0002,

0xf91b,	// (0x000ac077) field_vitu2_entry_pane_g

0x682d,	// (0x000a2f89) field_vitu2_entry_pane_t1_ParamLimits

0x682d,	// (0x000a2f89) field_vitu2_entry_pane_t1

0xa2ed,	// (0x000a6a49) field_vitu2_entry_pane_t2_ParamLimits

0xa2ed,	// (0x000a6a49) field_vitu2_entry_pane_t2

0x0001,

0xf922,	// (0x000ac07e) field_vitu2_entry_pane_t_ParamLimits

0xf922,	// (0x000ac07e) field_vitu2_entry_pane_t

0x685b,	// (0x000a2fb7) bg_button_pane_cp010_ParamLimits

0x685b,	// (0x000a2fb7) bg_button_pane_cp010

0x6869,	// (0x000a2fc5) cell_vitu2_itu_pane_g1

0x6892,	// (0x000a2fee) cell_vitu2_itu_pane_t1_ParamLimits

0x6892,	// (0x000a2fee) cell_vitu2_itu_pane_t1

0x0b17,	// (0x0009d273) cell_vitu2_itu_pane_t2_ParamLimits

0x0b17,	// (0x0009d273) cell_vitu2_itu_pane_t2

0x0002,

0xf92c,	// (0x000ac088) cell_vitu2_itu_pane_t_ParamLimits

0xf92c,	// (0x000ac088) cell_vitu2_itu_pane_t

0x65d6,	// (0x000a2d32) bg_button_pane_cp011

0x68de,	// (0x000a303a) cell_vitu2_function_pane_g1

0x9c5a,	// (0x000a63b6) main_myfav_hc_pane

0x62a8,	// (0x000a2a04) popup_image3_note_pane_ParamLimits

0x62a8,	// (0x000a2a04) popup_image3_note_pane

0x62b6,	// (0x000a2a12) popup_image3_tool_bar_pane_ParamLimits

0x62b6,	// (0x000a2a12) popup_image3_tool_bar_pane

0x0b8d,	// (0x0009d2e9) cell_vitu2_itu_pane_t3_ParamLimits

0x0b8d,	// (0x0009d2e9) cell_vitu2_itu_pane_t3

0x9c5a,	// (0x000a63b6) bg_popup_trans_pane

0xd697,	// (0x000a9df3) grid_image3_tool_bar_pane

0xd6a1,	// (0x000a9dfd) bg_popup_trans_pane_g1

0xacd2,	// (0x000a742e) bg_popup_trans_pane_g2

0xd6a9,	// (0x000a9e05) bg_popup_trans_pane_g3

0xd6b1,	// (0x000a9e0d) bg_popup_trans_pane_g4

0xd6b9,	// (0x000a9e15) bg_popup_trans_pane_g5

0xd6c1,	// (0x000a9e1d) bg_popup_trans_pane_g6

0xd6c9,	// (0x000a9e25) bg_popup_trans_pane_g7

0xd6d1,	// (0x000a9e2d) bg_popup_trans_pane_g8

0xacb2,	// (0x000a740e) bg_popup_trans_pane_g9

0x0008,

0xf933,	// (0x000ac08f) bg_popup_trans_pane_g

0xd6d9,	// (0x000a9e35) cell_image3_tool_bar_pane_ParamLimits

0xd6d9,	// (0x000a9e35) cell_image3_tool_bar_pane

0xccb1,	// (0x000a940d) cell_image3_tool_bar_pane_g1

0x9c5a,	// (0x000a63b6) bg_popup_trans_pane_cp1

0xd6ef,	// (0x000a9e4b) popup_image3_note_pane_t1

0xd6fd,	// (0x000a9e59) popup_image3_note_pane_t2

0xd70b,	// (0x000a9e67) popup_image3_note_pane_t3

0x0002,

0xf946,	// (0x000ac0a2) popup_image3_note_pane_t

0xd71b,	// (0x000a9e77) popup_image3_note_pane_t3_copy1

0x68f2,	// (0x000a304e) bg_myfav_hc_instruction_pane_ParamLimits

0x68f2,	// (0x000a304e) bg_myfav_hc_instruction_pane

0x690a,	// (0x000a3066) cell_myfav_contact_pane_ParamLimits

0x690a,	// (0x000a3066) cell_myfav_contact_pane

0x6924,	// (0x000a3080) cell_myfav_contact_pane_cp1_ParamLimits

0x6924,	// (0x000a3080) cell_myfav_contact_pane_cp1

0x693c,	// (0x000a3098) cell_myfav_contact_pane_cp2_ParamLimits

0x693c,	// (0x000a3098) cell_myfav_contact_pane_cp2

0x6954,	// (0x000a30b0) cell_myfav_contact_pane_cp3_ParamLimits

0x6954,	// (0x000a30b0) cell_myfav_contact_pane_cp3

0x696b,	// (0x000a30c7) cell_myfav_contact_pane_cp4_ParamLimits

0x696b,	// (0x000a30c7) cell_myfav_contact_pane_cp4

0x6981,	// (0x000a30dd) cell_myfav_contact_pane_cp5_ParamLimits

0x6981,	// (0x000a30dd) cell_myfav_contact_pane_cp5

0x6995,	// (0x000a30f1) cell_myfav_contact_pane_cp6_ParamLimits

0x6995,	// (0x000a30f1) cell_myfav_contact_pane_cp6

0x69a9,	// (0x000a3105) cell_myfav_contact_pane_cp7_ParamLimits

0x69a9,	// (0x000a3105) cell_myfav_contact_pane_cp7

0xd729,	// (0x000a9e85) listscroll_gen_pane_cp05

0x69c1,	// (0x000a311d) main_myfav_hc_pane_g1_ParamLimits

0x69c1,	// (0x000a311d) main_myfav_hc_pane_g1

0x69db,	// (0x000a3137) main_myfav_hc_pane_g2_ParamLimits

0x69db,	// (0x000a3137) main_myfav_hc_pane_g2

0x0002,

0xf94d,	// (0x000ac0a9) main_myfav_hc_pane_g_ParamLimits

0xf94d,	// (0x000ac0a9) main_myfav_hc_pane_g

0x6a0d,	// (0x000a3169) main_myfav_hc_pane_t1_ParamLimits

0x6a0d,	// (0x000a3169) main_myfav_hc_pane_t1

0xd732,	// (0x000a9e8e) main_myfav_hc_pane_t2_ParamLimits

0xd732,	// (0x000a9e8e) main_myfav_hc_pane_t2

0xd744,	// (0x000a9ea0) main_myfav_hc_pane_t3_ParamLimits

0xd744,	// (0x000a9ea0) main_myfav_hc_pane_t3

0x6a24,	// (0x000a3180) main_myfav_hc_pane_t4_ParamLimits

0x6a24,	// (0x000a3180) main_myfav_hc_pane_t4

0x0004,

0xf954,	// (0x000ac0b0) main_myfav_hc_pane_t_ParamLimits

0xf954,	// (0x000ac0b0) main_myfav_hc_pane_t

0xccb1,	// (0x000a940d) bg_myfav_hc_instruction_pane_g1

0xd756,	// (0x000a9eb2) cell_myfav_contact_pane_g1_ParamLimits

0xd756,	// (0x000a9eb2) cell_myfav_contact_pane_g1

0xd756,	// (0x000a9eb2) cell_myfav_contact_pane_g2_ParamLimits

0xd756,	// (0x000a9eb2) cell_myfav_contact_pane_g2

0xd762,	// (0x000a9ebe) cell_myfav_contact_pane_g3_ParamLimits

0xd762,	// (0x000a9ebe) cell_myfav_contact_pane_g3

0xcf4e,	// (0x000a96aa) cell_myfav_contact_pane_g4_ParamLimits

0xcf4e,	// (0x000a96aa) cell_myfav_contact_pane_g4

0xd76f,	// (0x000a9ecb) cell_myfav_contact_pane_g5_ParamLimits

0xd76f,	// (0x000a9ecb) cell_myfav_contact_pane_g5

0x0004,

0xf95f,	// (0x000ac0bb) cell_myfav_contact_pane_g_ParamLimits

0xf95f,	// (0x000ac0bb) cell_myfav_contact_pane_g

0x69f5,	// (0x000a3151) main_myfav_hc_pane_g3_ParamLimits

0x69f5,	// (0x000a3151) main_myfav_hc_pane_g3

0x0d72,	// (0x0009d4ce) popup_adpt_find_window

0x6a4e,	// (0x000a31aa) afind_page_pane_ParamLimits

0x6a4e,	// (0x000a31aa) afind_page_pane

0x6a5b,	// (0x000a31b7) aid_size_cell_afind_ParamLimits

0x6a5b,	// (0x000a31b7) aid_size_cell_afind

0x6a75,	// (0x000a31d1) bg_popup_sub_pane_cp09_ParamLimits

0x6a75,	// (0x000a31d1) bg_popup_sub_pane_cp09

0x6a82,	// (0x000a31de) find_pane_cp01_ParamLimits

0x6a82,	// (0x000a31de) find_pane_cp01

0xd77b,	// (0x000a9ed7) grid_afind_control_pane_ParamLimits

0xd77b,	// (0x000a9ed7) grid_afind_control_pane

0x6a8f,	// (0x000a31eb) grid_afind_pane_ParamLimits

0x6a8f,	// (0x000a31eb) grid_afind_pane

0x6aab,	// (0x000a3207) cell_afind_pane_ParamLimits

0x6aab,	// (0x000a3207) cell_afind_pane

0xccb1,	// (0x000a940d) afind_page_pane_g1

0x6af7,	// (0x000a3253) afind_page_pane_g2

0x6b00,	// (0x000a325c) afind_page_pane_g3

0x0002,

0xf96a,	// (0x000ac0c6) afind_page_pane_g

0x6b09,	// (0x000a3265) afind_page_pane_t1

0xd78f,	// (0x000a9eeb) cell_afind_grid_control_pane_ParamLimits

0xd78f,	// (0x000a9eeb) cell_afind_grid_control_pane

0xd595,	// (0x000a9cf1) bg_button_pane_cp69_ParamLimits

0xd595,	// (0x000a9cf1) bg_button_pane_cp69

0x6b29,	// (0x000a3285) cell_afind_pane_g1_ParamLimits

0x6b29,	// (0x000a3285) cell_afind_pane_g1

0x6b36,	// (0x000a3292) cell_afind_pane_t1_ParamLimits

0x6b36,	// (0x000a3292) cell_afind_pane_t1

0xaaaf,	// (0x000a720b) bg_button_pane_cp72

0xd79e,	// (0x000a9efa) cell_afind_grid_control_pane_g1

0x4069,	// (0x000a07c5) aid_image_placing_area_ParamLimits

0x4069,	// (0x000a07c5) aid_image_placing_area

0xd261,	// (0x000a99bd) field_vitu_entry_pane_g1_ParamLimits

0xd261,	// (0x000a99bd) field_vitu_entry_pane_g1

0xd26d,	// (0x000a99c9) field_vitu_entry_pane_g2_ParamLimits

0xd26d,	// (0x000a99c9) field_vitu_entry_pane_g2

0x0001,

0xf81b,	// (0x000abf77) field_vitu_entry_pane_g_ParamLimits

0xf81b,	// (0x000abf77) field_vitu_entry_pane_g

0x5bed,	// (0x000a2349) cell_vitu_itu_pane_g1_ParamLimits

0x5c3d,	// (0x000a2399) cell_vitu_itu_pane_t3_ParamLimits

0x5c3d,	// (0x000a2399) cell_vitu_itu_pane_t3

0xd545,	// (0x000a9ca1) mp4_progress_pane_t1_ParamLimits

0xd55e,	// (0x000a9cba) mp4_progress_pane_t2_ParamLimits

0xf8b0,	// (0x000ac00c) mp4_progress_pane_t_ParamLimits

0xd577,	// (0x000a9cd3) mup_progress_pane_cp04_ParamLimits

0x6a38,	// (0x000a3194) main_myfav_hc_pane_t5_ParamLimits

0x6a38,	// (0x000a3194) main_myfav_hc_pane_t5

0x0c2e,	// (0x0009d38a) aid_zoom_text_primary

0x0d72,	// (0x0009d4ce) popup_adpt_find_window_ParamLimits

0xa2df,	// (0x000a6a3b) main_cam_set_pane

0x6454,	// (0x000a2bb0) cam4_zoom_pane_ParamLimits

0x6454,	// (0x000a2bb0) cam4_zoom_pane

0x6b48,	// (0x000a32a4) main_cam_set_pane_g1_ParamLimits

0x6b48,	// (0x000a32a4) main_cam_set_pane_g1

0x6b56,	// (0x000a32b2) main_cam_set_pane_g2_ParamLimits

0x6b56,	// (0x000a32b2) main_cam_set_pane_g2

0x0001,

0xf971,	// (0x000ac0cd) main_cam_set_pane_g_ParamLimits

0xf971,	// (0x000ac0cd) main_cam_set_pane_g

0x6b62,	// (0x000a32be) main_cam_set_pane_t1_ParamLimits

0x6b62,	// (0x000a32be) main_cam_set_pane_t1

0x6b7e,	// (0x000a32da) main_cset_listscroll_pane_ParamLimits

0x6b7e,	// (0x000a32da) main_cset_listscroll_pane

0x6bad,	// (0x000a3309) main_cset_slider_pane_ParamLimits

0x6bad,	// (0x000a3309) main_cset_slider_pane

0xd7af,	// (0x000a9f0b) main_cset_list_pane_ParamLimits

0xd7af,	// (0x000a9f0b) main_cset_list_pane

0xd7bf,	// (0x000a9f1b) scroll_pane_cp028

0x6bce,	// (0x000a332a) aid_area_touch_slider

0x6bea,	// (0x000a3346) cset_slider_pane

0x6c14,	// (0x000a3370) main_cset_slider_pane_g1

0x6c29,	// (0x000a3385) main_cset_slider_pane_g2

0x0011,

0xf976,	// (0x000ac0d2) main_cset_slider_pane_g

0xd7f8,	// (0x000a9f54) main_cset_slider_pane_t1

0x6ce5,	// (0x000a3441) main_cset_slider_pane_t2

0x6cff,	// (0x000a345b) main_cset_slider_pane_t3

0x6d19,	// (0x000a3475) main_cset_slider_pane_t4

0x6d33,	// (0x000a348f) main_cset_slider_pane_t5

0x6d4d,	// (0x000a34a9) main_cset_slider_pane_t6

0x6d62,	// (0x000a34be) main_cset_slider_pane_t7

0x000e,

0xf99b,	// (0x000ac0f7) main_cset_slider_pane_t

0x6e66,	// (0x000a35c2) cset_list_set_pane_ParamLimits

0x6e66,	// (0x000a35c2) cset_list_set_pane

0x6e77,	// (0x000a35d3) aid_position_infowindow_above

0x6e7f,	// (0x000a35db) aid_position_infowindow_below

0x6e87,	// (0x000a35e3) cset_list_set_pane_g1_ParamLimits

0x6e87,	// (0x000a35e3) cset_list_set_pane_g1

0x6e93,	// (0x000a35ef) cset_list_set_pane_g3_ParamLimits

0x6e93,	// (0x000a35ef) cset_list_set_pane_g3

0x0001,

0xf9ba,	// (0x000ac116) cset_list_set_pane_g_ParamLimits

0xf9ba,	// (0x000ac116) cset_list_set_pane_g

0x6ea2,	// (0x000a35fe) cset_list_set_pane_t1_ParamLimits

0x6ea2,	// (0x000a35fe) cset_list_set_pane_t1

0xa2df,	// (0x000a6a3b) list_highlight_pane_cp021_ParamLimits

0xa2df,	// (0x000a6a3b) list_highlight_pane_cp021

0xb58a,	// (0x000a7ce6) cset_slider_pane_g1

0xb59c,	// (0x000a7cf8) cset_slider_pane_g2

0xb593,	// (0x000a7cef) cset_slider_pane_g3

0x0002,

0xf9bf,	// (0x000ac11b) cset_slider_pane_g

0x6eb7,	// (0x000a3613) aid_area_touch_cam4_zoom

0x6ebf,	// (0x000a361b) cam4_zoom_cont_pane

0x6ec7,	// (0x000a3623) cam4_zoom_pane_g1

0x6ecf,	// (0x000a362b) cam4_zoom_pane_g2

0x6ed7,	// (0x000a3633) cam4_zoom_pane_g3

0x0002,

0xf9c6,	// (0x000ac122) cam4_zoom_pane_g

0x6edf,	// (0x000a363b) cam4_zoom_cont_pane_g1

0x6ee8,	// (0x000a3644) cam4_zoom_cont_pane_g2

0x6ef1,	// (0x000a364d) cam4_zoom_cont_pane_g3

0x0002,

0xf9cd,	// (0x000ac129) cam4_zoom_cont_pane_g

0x62ff,	// (0x000a2a5b) call4_image_pane_ParamLimits

0x62ff,	// (0x000a2a5b) call4_image_pane

0xd5a1,	// (0x000a9cfd) call4_windows_conf_pane_ParamLimits

0xd5bc,	// (0x000a9d18) popup_call4_audio_in_window_ParamLimits

0xd5bc,	// (0x000a9d18) popup_call4_audio_in_window

0x9c5a,	// (0x000a63b6) bg_popup_call2_act_pane_cp02

0xd61e,	// (0x000a9d7a) call4_list_conf_pane

0xccb1,	// (0x000a940d) call4_image_pane_g1

0xccb1,	// (0x000a940d) call4_image_pane_g2

0x0001,

0xf6e1,	// (0x000abe3d) call4_image_pane_g

0xd898,	// (0x000a9ff4) list_single_graphic_popup_conf4_pane_ParamLimits

0xd898,	// (0x000a9ff4) list_single_graphic_popup_conf4_pane

0x9c5a,	// (0x000a63b6) list_highlight_pane_cp022

0xd8ad,	// (0x000aa009) list_single_graphic_popup_conf4_pane_g1

0xb26a,	// (0x000a79c6) list_single_graphic_popup_conf4_pane_g2

0x0001,

0xf9d4,	// (0x000ac130) list_single_graphic_popup_conf4_pane_g

0xd8b5,	// (0x000aa011) list_single_graphic_popup_conf4_pane_t1

0x21cb,	// (0x0009e927) popup_vtel_slider_window_ParamLimits

0x21cb,	// (0x0009e927) popup_vtel_slider_window

0xd583,	// (0x000a9cdf) dialer2_ne_pane_t2_ParamLimits

0xd583,	// (0x000a9cdf) dialer2_ne_pane_t2

0x0001,

0xf8b5,	// (0x000ac011) dialer2_ne_pane_t_ParamLimits

0xf8b5,	// (0x000ac011) dialer2_ne_pane_t

0xa2df,	// (0x000a6a3b) bg_popup_sub_pane_cp010_ParamLimits

0xa2df,	// (0x000a6a3b) bg_popup_sub_pane_cp010

0x6efa,	// (0x000a3656) popup_vtel_slider_window_g1_ParamLimits

0x6efa,	// (0x000a3656) popup_vtel_slider_window_g1

0x6f06,	// (0x000a3662) popup_vtel_slider_window_g2_ParamLimits

0x6f06,	// (0x000a3662) popup_vtel_slider_window_g2

0x0003,

0xf9d9,	// (0x000ac135) popup_vtel_slider_window_g_ParamLimits

0xf9d9,	// (0x000ac135) popup_vtel_slider_window_g

0x6f4e,	// (0x000a36aa) vtel_slider_pane_ParamLimits

0x6f4e,	// (0x000a36aa) vtel_slider_pane

0x6f5d,	// (0x000a36b9) vtel_slider_pane_g1_ParamLimits

0x6f5d,	// (0x000a36b9) vtel_slider_pane_g1

0x6f6a,	// (0x000a36c6) vtel_slider_pane_g2_ParamLimits

0x6f6a,	// (0x000a36c6) vtel_slider_pane_g2

0x6f77,	// (0x000a36d3) vtel_slider_pane_g3_ParamLimits

0x6f77,	// (0x000a36d3) vtel_slider_pane_g3

0x6f5d,	// (0x000a36b9) vtel_slider_pane_g4_ParamLimits

0x6f5d,	// (0x000a36b9) vtel_slider_pane_g4

0x6f84,	// (0x000a36e0) vtel_slider_pane_g5_ParamLimits

0x6f84,	// (0x000a36e0) vtel_slider_pane_g5

0x0004,

0xf9e2,	// (0x000ac13e) vtel_slider_pane_g_ParamLimits

0xf9e2,	// (0x000ac13e) vtel_slider_pane_g

0xa2df,	// (0x000a6a3b) main_gallery2_pane

0x66c8,	// (0x000a2e24) aid_size_row_itut2_dropdow_list_ParamLimits

0x66c8,	// (0x000a2e24) aid_size_row_itut2_dropdow_list

0x6738,	// (0x000a2e94) grid_vitu2_function_top_pane_ParamLimits

0x6738,	// (0x000a2e94) grid_vitu2_function_top_pane

0x678a,	// (0x000a2ee6) popup_vitu2_dropdown_list_window_ParamLimits

0x678a,	// (0x000a2ee6) popup_vitu2_dropdown_list_window

0x67ae,	// (0x000a2f0a) popup_vitu2_match_list_window

0x6f91,	// (0x000a36ed) cell_vitu2_function_top_pane_ParamLimits

0x6f91,	// (0x000a36ed) cell_vitu2_function_top_pane

0x6fb1,	// (0x000a370d) cell_vitu2_function_top_pane_cp01_ParamLimits

0x6fb1,	// (0x000a370d) cell_vitu2_function_top_pane_cp01

0x6fcf,	// (0x000a372b) cell_vitu2_function_top_wide_pane_ParamLimits

0x6fcf,	// (0x000a372b) cell_vitu2_function_top_wide_pane

0x65d6,	// (0x000a2d32) bg_button_pane_cp012

0x6fed,	// (0x000a3749) cell_vitu2_function_top_pane_g1

0x7001,	// (0x000a375d) bg_button_pane_cp013_ParamLimits

0x7001,	// (0x000a375d) bg_button_pane_cp013

0x701d,	// (0x000a3779) cell_vitu2_function_top_wide_pane_g1_ParamLimits

0x701d,	// (0x000a3779) cell_vitu2_function_top_wide_pane_g1

0x7035,	// (0x000a3791) bg_popup_sub_pane_cp20

0x7043,	// (0x000a379f) list_vitu2_match_list_pane

0xd6a1,	// (0x000a9dfd) bg_popup_sub_pane_cp20_g1

0xd6a9,	// (0x000a9e05) bg_popup_sub_pane_cp20_g2

0xacd2,	// (0x000a742e) bg_popup_sub_pane_cp20_g3

0xd6b1,	// (0x000a9e0d) bg_popup_sub_pane_cp20_g4

0xacb2,	// (0x000a740e) bg_popup_sub_pane_cp20_g5

0xd8cb,	// (0x000aa027) bg_popup_sub_pane_cp20_g6

0xd6c1,	// (0x000a9e1d) bg_popup_sub_pane_cp20_g7

0xd6c9,	// (0x000a9e25) bg_popup_sub_pane_cp20_g8

0xd6d1,	// (0x000a9e2d) bg_popup_sub_pane_cp20_g9

0x0008,

0xf9ed,	// (0x000ac149) bg_popup_sub_pane_cp20_g

0x705b,	// (0x000a37b7) list_vitu2_match_list_item_pane_ParamLimits

0x705b,	// (0x000a37b7) list_vitu2_match_list_item_pane

0x706d,	// (0x000a37c9) list_vitu2_match_list_item_pane_t1

0x11cc,	// (0x0009d928) bg_popup_sub_pane_cp21

0x70ab,	// (0x000a3807) grid_vitu2_dropdown_list_pane

0x70b3,	// (0x000a380f) cell_vitu2_dropdown_list_char_pane_ParamLimits

0x70b3,	// (0x000a380f) cell_vitu2_dropdown_list_char_pane

0x70d8,	// (0x000a3834) cell_vitu2_dropdown_list_ctrl_pane_ParamLimits

0x70d8,	// (0x000a3834) cell_vitu2_dropdown_list_ctrl_pane

0xd8d3,	// (0x000aa02f) cell_vitu2_dropdown_list_char_pane_g1

0xd8dc,	// (0x000aa038) cell_vitu2_dropdown_list_char_pane_g2

0xd8e5,	// (0x000aa041) cell_vitu2_dropdown_list_char_pane_g3

0x0002,

0xfa0a,	// (0x000ac166) cell_vitu2_dropdown_list_char_pane_g

0x7106,	// (0x000a3862) cell_vitu2_dropdown_list_char_pane_t1

0x7114,	// (0x000a3870) cell_vitu2_dropdown_list_ctrl_pane_g1_ParamLimits

0x7114,	// (0x000a3870) cell_vitu2_dropdown_list_ctrl_pane_g1

0x7124,	// (0x000a3880) cell_vitu2_dropdown_list_ctrl_pane_g2_ParamLimits

0x7124,	// (0x000a3880) cell_vitu2_dropdown_list_ctrl_pane_g2

0x7135,	// (0x000a3891) cell_vitu2_dropdown_list_ctrl_pane_g3_ParamLimits

0x7135,	// (0x000a3891) cell_vitu2_dropdown_list_ctrl_pane_g3

0x7145,	// (0x000a38a1) cell_vitu2_dropdown_list_ctrl_pane_g4_ParamLimits

0x7145,	// (0x000a38a1) cell_vitu2_dropdown_list_ctrl_pane_g4

0x64ea,	// (0x000a2c46) cell_vitu2_dropdown_list_ctrl_pane_g5_ParamLimits

0x64ea,	// (0x000a2c46) cell_vitu2_dropdown_list_ctrl_pane_g5

0x0004,

0xfa11,	// (0x000ac16d) cell_vitu2_dropdown_list_ctrl_pane_g_ParamLimits

0xfa11,	// (0x000ac16d) cell_vitu2_dropdown_list_ctrl_pane_g

0x715e,	// (0x000a38ba) aid_size_cell_gallery2_ParamLimits

0x715e,	// (0x000a38ba) aid_size_cell_gallery2

0x7178,	// (0x000a38d4) grid_gallery2_pane_ParamLimits

0x7178,	// (0x000a38d4) grid_gallery2_pane

0x5a72,	// (0x000a21ce) scroll_pane_cp029_ParamLimits

0x5a72,	// (0x000a21ce) scroll_pane_cp029

0x718f,	// (0x000a38eb) cell_gallery2_pane_ParamLimits

0x718f,	// (0x000a38eb) cell_gallery2_pane

0xd8ee,	// (0x000aa04a) cell_gallery2_pane_g2

0x71db,	// (0x000a3937) cell_gallery2_pane_g3

0xd8f6,	// (0x000aa052) cell_gallery2_pane_g4

0xd8fe,	// (0x000aa05a) cell_gallery2_pane_g5

0xb452,	// (0x000a7bae) grid_highlight_pane_cp10

0x67ae,	// (0x000a2f0a) popup_vitu2_match_list_window_ParamLimits

0x67c2,	// (0x000a2f1e) popup_vitu2_query_window_ParamLimits

0x67c2,	// (0x000a2f1e) popup_vitu2_query_window

0x11cc,	// (0x0009d928) bg_vitu2_candi_button_pane

0xd8d3,	// (0x000aa02f) cell_vitu2_dropdown_list_char_pane_g1_copy1

0xd8dc,	// (0x000aa038) cell_vitu2_dropdown_list_char_pane_g2_copy1

0xd8e5,	// (0x000aa041) cell_vitu2_dropdown_list_char_pane_g2_copy2

0x71e3,	// (0x000a393f) bg_button_pane_cp015

0x71f5,	// (0x000a3951) bg_button_pane_cp016

0x7208,	// (0x000a3964) bg_button_pane_cp017

0xc860,	// (0x000a8fbc) bg_popup_sub_pane_cp22

0xd906,	// (0x000aa062) popup_vitu2_query_window_g1

0x724d,	// (0x000a39a9) popup_vitu2_query_window_g2

0x0002,

0xfa1c,	// (0x000ac178) popup_vitu2_query_window_g

0x726a,	// (0x000a39c6) popup_vitu2_query_window_t1_ParamLimits

0x726a,	// (0x000a39c6) popup_vitu2_query_window_t1

0x729d,	// (0x000a39f9) popup_vitu2_query_window_t2_ParamLimits

0x729d,	// (0x000a39f9) popup_vitu2_query_window_t2

0x72af,	// (0x000a3a0b) popup_vitu2_query_window_t3_ParamLimits

0x72af,	// (0x000a3a0b) popup_vitu2_query_window_t3

0x72d7,	// (0x000a3a33) popup_vitu2_query_window_t4_ParamLimits

0x72d7,	// (0x000a3a33) popup_vitu2_query_window_t4

0x72fa,	// (0x000a3a56) popup_vitu2_query_window_t5_ParamLimits

0x72fa,	// (0x000a3a56) popup_vitu2_query_window_t5

0x0006,

0xfa23,	// (0x000ac17f) popup_vitu2_query_window_t_ParamLimits

0xfa23,	// (0x000ac17f) popup_vitu2_query_window_t

0xd7a7,	// (0x000a9f03) main_cset_text_pane

0x6bce,	// (0x000a332a) aid_area_touch_slider_ParamLimits

0x6bea,	// (0x000a3346) cset_slider_pane_ParamLimits

0x6c14,	// (0x000a3370) main_cset_slider_pane_g1_ParamLimits

0x6c29,	// (0x000a3385) main_cset_slider_pane_g2_ParamLimits

0xd7c8,	// (0x000a9f24) main_cset_slider_pane_g3_ParamLimits

0xd7c8,	// (0x000a9f24) main_cset_slider_pane_g3

0x6c3e,	// (0x000a339a) main_cset_slider_pane_g4_ParamLimits

0x6c3e,	// (0x000a339a) main_cset_slider_pane_g4

0x6c4d,	// (0x000a33a9) main_cset_slider_pane_g5_ParamLimits

0x6c4d,	// (0x000a33a9) main_cset_slider_pane_g5

0x6c59,	// (0x000a33b5) main_cset_slider_pane_g6_ParamLimits

0x6c59,	// (0x000a33b5) main_cset_slider_pane_g6

0xf976,	// (0x000ac0d2) main_cset_slider_pane_g_ParamLimits

0xd7f8,	// (0x000a9f54) main_cset_slider_pane_t1_ParamLimits

0x6ce5,	// (0x000a3441) main_cset_slider_pane_t2_ParamLimits

0x6cff,	// (0x000a345b) main_cset_slider_pane_t3_ParamLimits

0x6d19,	// (0x000a3475) main_cset_slider_pane_t4_ParamLimits

0x6d33,	// (0x000a348f) main_cset_slider_pane_t5_ParamLimits

0x6d4d,	// (0x000a34a9) main_cset_slider_pane_t6_ParamLimits

0x6d62,	// (0x000a34be) main_cset_slider_pane_t7_ParamLimits

0x6d8c,	// (0x000a34e8) main_cset_slider_pane_t8_ParamLimits

0x6d8c,	// (0x000a34e8) main_cset_slider_pane_t8

0x6db4,	// (0x000a3510) main_cset_slider_pane_t9_ParamLimits

0x6db4,	// (0x000a3510) main_cset_slider_pane_t9

0x6ddc,	// (0x000a3538) main_cset_slider_pane_t10_ParamLimits

0x6ddc,	// (0x000a3538) main_cset_slider_pane_t10

0x6e04,	// (0x000a3560) main_cset_slider_pane_t11_ParamLimits

0x6e04,	// (0x000a3560) main_cset_slider_pane_t11

0x6e2c,	// (0x000a3588) main_cset_slider_pane_t12_ParamLimits

0x6e2c,	// (0x000a3588) main_cset_slider_pane_t12

0x6e49,	// (0x000a35a5) main_cset_slider_pane_t13_ParamLimits

0x6e49,	// (0x000a35a5) main_cset_slider_pane_t13

0xf99b,	// (0x000ac0f7) main_cset_slider_pane_t_ParamLimits

0x9c5a,	// (0x000a63b6) bg_popup_sub_pane_cp011

0xd912,	// (0x000aa06e) main_cset_text_pane_g1

0xd91a,	// (0x000aa076) main_cset_text_pane_t1

0xd928,	// (0x000aa084) main_cset_text_pane_t2

0xd936,	// (0x000aa092) main_cset_text_pane_t3

0xd9a6,	// (0x000aa102) main_cset_text_pane_t4

0xd9b4,	// (0x000aa110) main_cset_text_pane_t5

0xd9c2,	// (0x000aa11e) main_cset_text_pane_t6

0xd9d0,	// (0x000aa12c) main_cset_text_pane_t7

0x0006,

0xfa32,	// (0x000ac18e) main_cset_text_pane_t

0x9c5a,	// (0x000a63b6) main_cam4_burst_pane

0x9c5a,	// (0x000a63b6) main_cam5_pane

0x6b17,	// (0x000a3273) bg_button_pane_cp019

0x6b20,	// (0x000a327c) bg_button_pane_cp020

0xd7d4,	// (0x000a9f30) main_cset_slider_pane_g7_ParamLimits

0xd7d4,	// (0x000a9f30) main_cset_slider_pane_g7

0xd7e0,	// (0x000a9f3c) main_cset_slider_pane_g8_ParamLimits

0xd7e0,	// (0x000a9f3c) main_cset_slider_pane_g8

0x6c6d,	// (0x000a33c9) main_cset_slider_pane_g9_ParamLimits

0x6c6d,	// (0x000a33c9) main_cset_slider_pane_g9

0x6c79,	// (0x000a33d5) main_cset_slider_pane_g10_ParamLimits

0x6c79,	// (0x000a33d5) main_cset_slider_pane_g10

0x6c85,	// (0x000a33e1) main_cset_slider_pane_g11_ParamLimits

0x6c85,	// (0x000a33e1) main_cset_slider_pane_g11

0x6c91,	// (0x000a33ed) main_cset_slider_pane_g12_ParamLimits

0x6c91,	// (0x000a33ed) main_cset_slider_pane_g12

0x6c9d,	// (0x000a33f9) main_cset_slider_pane_g13_ParamLimits

0x6c9d,	// (0x000a33f9) main_cset_slider_pane_g13

0x6ca9,	// (0x000a3405) main_cset_slider_pane_g14_ParamLimits

0x6ca9,	// (0x000a3405) main_cset_slider_pane_g14

0x6cb5,	// (0x000a3411) main_cset_slider_pane_g15_ParamLimits

0x6cb5,	// (0x000a3411) main_cset_slider_pane_g15

0xd826,	// (0x000a9f82) main_cset_slider_pane_t14_ParamLimits

0xd826,	// (0x000a9f82) main_cset_slider_pane_t14

0xd85f,	// (0x000a9fbb) main_cset_slider_pane_t15_ParamLimits

0xd85f,	// (0x000a9fbb) main_cset_slider_pane_t15

0x7373,	// (0x000a3acf) aid_cam4_burst_size_cell_ParamLimits

0x7373,	// (0x000a3acf) aid_cam4_burst_size_cell

0x738f,	// (0x000a3aeb) grid_cam4_burst_pane_ParamLimits

0x738f,	// (0x000a3aeb) grid_cam4_burst_pane

0x73c1,	// (0x000a3b1d) linegrid_cam4_burst_pane_ParamLimits

0x73c1,	// (0x000a3b1d) linegrid_cam4_burst_pane

0x73df,	// (0x000a3b3b) scroll_pane_cp30_ParamLimits

0x73df,	// (0x000a3b3b) scroll_pane_cp30

0x73eb,	// (0x000a3b47) cell_cam4_burst_pane_ParamLimits

0x73eb,	// (0x000a3b47) cell_cam4_burst_pane

0xd9de,	// (0x000aa13a) linegrid_cam4_burst_pane_g1_ParamLimits

0xd9de,	// (0x000aa13a) linegrid_cam4_burst_pane_g1

0x742b,	// (0x000a3b87) linegrid_cam4_burst_pane_g2_ParamLimits

0x742b,	// (0x000a3b87) linegrid_cam4_burst_pane_g2

0xd9eb,	// (0x000aa147) linegrid_cam4_burst_pane_g3_ParamLimits

0xd9eb,	// (0x000aa147) linegrid_cam4_burst_pane_g3

0x0002,

0xfa41,	// (0x000ac19d) linegrid_cam4_burst_pane_g_ParamLimits

0xfa41,	// (0x000ac19d) linegrid_cam4_burst_pane_g

0x743c,	// (0x000a3b98) linegrid_cam4_burst_pane_g3_copy1_ParamLimits

0x743c,	// (0x000a3b98) linegrid_cam4_burst_pane_g3_copy1

0xd9f8,	// (0x000aa154) linegrid_cam4_burst_pane_g4_ParamLimits

0xd9f8,	// (0x000aa154) linegrid_cam4_burst_pane_g4

0x7456,	// (0x000a3bb2) linegrid_cam4_burst_pane_g5_ParamLimits

0x7456,	// (0x000a3bb2) linegrid_cam4_burst_pane_g5

0x7467,	// (0x000a3bc3) linegrid_cam4_burst_pane_g6_ParamLimits

0x7467,	// (0x000a3bc3) linegrid_cam4_burst_pane_g6

0xda05,	// (0x000aa161) linegrid_cam4_burst_pane_g7_ParamLimits

0xda05,	// (0x000aa161) linegrid_cam4_burst_pane_g7

0x747e,	// (0x000a3bda) cell_cam4_burst_pane_g1

0xda1e,	// (0x000aa17a) main_cam5_pane_t1_ParamLimits

0xda1e,	// (0x000aa17a) main_cam5_pane_t1

0xda30,	// (0x000aa18c) main_cam5_pane_t2_ParamLimits

0xda30,	// (0x000aa18c) main_cam5_pane_t2

0xda42,	// (0x000aa19e) main_cam5_pane_t3_ParamLimits

0xda42,	// (0x000aa19e) main_cam5_pane_t3

0xda54,	// (0x000aa1b0) main_cam5_pane_t4_ParamLimits

0xda54,	// (0x000aa1b0) main_cam5_pane_t4

0xda6c,	// (0x000aa1c8) main_cam5_pane_t5_ParamLimits

0xda6c,	// (0x000aa1c8) main_cam5_pane_t5

0xda80,	// (0x000aa1dc) main_cam5_pane_t6_ParamLimits

0xda80,	// (0x000aa1dc) main_cam5_pane_t6

0xda94,	// (0x000aa1f0) main_cam5_pane_t7_ParamLimits

0xda94,	// (0x000aa1f0) main_cam5_pane_t7

0xdaa6,	// (0x000aa202) main_cam5_pane_t8_ParamLimits

0xdaa6,	// (0x000aa202) main_cam5_pane_t8

0xdac4,	// (0x000aa220) main_cam5_pane_t9_ParamLimits

0xdac4,	// (0x000aa220) main_cam5_pane_t9

0xdad6,	// (0x000aa232) main_cam5_pane_t10_ParamLimits

0xdad6,	// (0x000aa232) main_cam5_pane_t10

0xdae8,	// (0x000aa244) main_cam5_pane_t11_ParamLimits

0xdae8,	// (0x000aa244) main_cam5_pane_t11

0xdafc,	// (0x000aa258) main_cam5_pane_t12_ParamLimits

0xdafc,	// (0x000aa258) main_cam5_pane_t12

0xdb13,	// (0x000aa26f) main_cam5_pane_t13_ParamLimits

0xdb13,	// (0x000aa26f) main_cam5_pane_t13

0x000c,

0xfa4d,	// (0x000ac1a9) main_cam5_pane_t_ParamLimits

0xfa4d,	// (0x000ac1a9) main_cam5_pane_t

0x0e1f,	// (0x0009d57b) popup_scut_keymap_window_ParamLimits

0x0e1f,	// (0x0009d57b) popup_scut_keymap_window

0x7491,	// (0x000a3bed) aid_size_cell_brow_shortcut

0xb452,	// (0x000a7bae) bg_popup_window_pane_cp010

0x749d,	// (0x000a3bf9) grid_scut_pane

0x74a9,	// (0x000a3c05) cell_scut_pane_ParamLimits

0x74a9,	// (0x000a3c05) cell_scut_pane

0x74c4,	// (0x000a3c20) cell_scut_pane_g1

0xdb36,	// (0x000aa292) cell_scut_pane_t1

0xdb45,	// (0x000aa2a1) cell_scut_pane_t2

0x74cd,	// (0x000a3c29) cell_scut_pane_t3

0x0002,

0xfa68,	// (0x000ac1c4) cell_scut_pane_t

0x5267,	// (0x000a19c3) main_mup3_pane_g8_ParamLimits

0x5267,	// (0x000a19c3) main_mup3_pane_g8

0x66d8,	// (0x000a2e34) area_vitu2_query_pane_ParamLimits

0x66d8,	// (0x000a2e34) area_vitu2_query_pane

0x721b,	// (0x000a3977) input_focus_pane_cp08

0xdb54,	// (0x000aa2b0) area_vitu2_query_pane_g1

0x74db,	// (0x000a3c37) area_vitu2_query_pane_g2

0x0001,

0xfa6f,	// (0x000ac1cb) area_vitu2_query_pane_g

0x74ec,	// (0x000a3c48) area_vitu2_query_pane_t1_ParamLimits

0x74ec,	// (0x000a3c48) area_vitu2_query_pane_t1

0x7500,	// (0x000a3c5c) area_vitu2_query_pane_t2_ParamLimits

0x7500,	// (0x000a3c5c) area_vitu2_query_pane_t2

0x7514,	// (0x000a3c70) area_vitu2_query_pane_t3_ParamLimits

0x7514,	// (0x000a3c70) area_vitu2_query_pane_t3

0xa324,	// (0x000a6a80) area_vitu2_query_pane_t4_ParamLimits

0xa324,	// (0x000a6a80) area_vitu2_query_pane_t4

0xa34c,	// (0x000a6aa8) area_vitu2_query_pane_t5_ParamLimits

0xa34c,	// (0x000a6aa8) area_vitu2_query_pane_t5

0xa374,	// (0x000a6ad0) area_vitu2_query_pane_t6_ParamLimits

0xa374,	// (0x000a6ad0) area_vitu2_query_pane_t6

0x0006,

0xfa74,	// (0x000ac1d0) area_vitu2_query_pane_t_ParamLimits

0xfa74,	// (0x000ac1d0) area_vitu2_query_pane_t

0x753c,	// (0x000a3c98) bg_button_pane_cp018

0x754a,	// (0x000a3ca6) bg_button_pane_cp021

0x7556,	// (0x000a3cb2) bg_button_pane_cp022

0x7567,	// (0x000a3cc3) input_focus_pane_cp09

0x3678,	// (0x0009fdd4) aid_size_touch_mv_arrow_left

0x36a3,	// (0x0009fdff) aid_size_touch_mv_arrow_right

0x6ccd,	// (0x000a3429) main_cset_slider_pane_g16_ParamLimits

0x6ccd,	// (0x000a3429) main_cset_slider_pane_g16

0x6cd9,	// (0x000a3435) main_cset_slider_pane_g17_ParamLimits

0x6cd9,	// (0x000a3435) main_cset_slider_pane_g17

0x747e,	// (0x000a3bda) cell_cam4_burst_pane_g1_ParamLimits

0x9c5a,	// (0x000a63b6) compa_mode_pane

0x6f12,	// (0x000a366e) popup_vtel_slider_window_g3_ParamLimits

0x6f12,	// (0x000a366e) popup_vtel_slider_window_g3

0x6f26,	// (0x000a3682) popup_vtel_slider_window_g4_ParamLimits

0x6f26,	// (0x000a3682) popup_vtel_slider_window_g4

0x6f3a,	// (0x000a3696) popup_vtel_slider_window_t1_ParamLimits

0x6f3a,	// (0x000a3696) popup_vtel_slider_window_t1

0x9c5a,	// (0x000a63b6) main_cl_pane

0xc88c,	// (0x000a8fe8) popup_imed_adjust2_window_ParamLimits

0xc860,	// (0x000a8fbc) bg_tb_trans_pane_cp05_ParamLimits

0xd196,	// (0x000a98f2) popup_imed_adjust2_window_g1_ParamLimits

0xd1a5,	// (0x000a9901) popup_imed_adjust2_window_g2_ParamLimits

0xd1a5,	// (0x000a9901) popup_imed_adjust2_window_g2

0xd1b1,	// (0x000a990d) popup_imed_adjust2_window_g3_ParamLimits

0xd1b1,	// (0x000a990d) popup_imed_adjust2_window_g3

0x0002,

0xf7df,	// (0x000abf3b) popup_imed_adjust2_window_g_ParamLimits

0xf7df,	// (0x000abf3b) popup_imed_adjust2_window_g

0xd1bd,	// (0x000a9919) popup_imed_adjust2_window_t1_ParamLimits

0xd1d5,	// (0x000a9931) slider_imed_adjust_pane_ParamLimits

0xd1e9,	// (0x000a9945) slider_imed_adjust_pane_g1_ParamLimits

0xd1f9,	// (0x000a9955) slider_imed_adjust_pane_g2_ParamLimits

0xd209,	// (0x000a9965) slider_imed_adjust_pane_g3_ParamLimits

0xd21a,	// (0x000a9976) slider_imed_adjust_pane_g4_ParamLimits

0xf7e6,	// (0x000abf42) slider_imed_adjust_pane_g_ParamLimits

0x63fd,	// (0x000a2b59) aid_touch_area_cam4_ParamLimits

0x63fd,	// (0x000a2b59) aid_touch_area_cam4

0x640d,	// (0x000a2b69) battery_pane_cp01

0x6494,	// (0x000a2bf0) main_camera4_pane_g6_ParamLimits

0x6494,	// (0x000a2bf0) main_camera4_pane_g6

0x64b2,	// (0x000a2c0e) main_camera4_pane_t2_ParamLimits

0x64b2,	// (0x000a2c0e) main_camera4_pane_t2

0x0001,

0xf8e9,	// (0x000ac045) main_camera4_pane_t_ParamLimits

0xf8e9,	// (0x000ac045) main_camera4_pane_t

0x6543,	// (0x000a2c9f) aid_touch_area_vid4_ParamLimits

0x6543,	// (0x000a2c9f) aid_touch_area_vid4

0x6583,	// (0x000a2cdf) main_video4_pane_g5_ParamLimits

0x6583,	// (0x000a2cdf) main_video4_pane_g5

0x65a9,	// (0x000a2d05) vid4_progress_pane_ParamLimits

0x65a9,	// (0x000a2d05) vid4_progress_pane

0xd7ec,	// (0x000a9f48) main_cset_slider_pane_g18_ParamLimits

0xd7ec,	// (0x000a9f48) main_cset_slider_pane_g18

0xda12,	// (0x000aa16e) cell_cam4_burst_pane_g2_ParamLimits

0xda12,	// (0x000aa16e) cell_cam4_burst_pane_g2

0x0001,

0xfa48,	// (0x000ac1a4) cell_cam4_burst_pane_g_ParamLimits

0xfa48,	// (0x000ac1a4) cell_cam4_burst_pane_g

0x7578,	// (0x000a3cd4) bg_cl_pane_ParamLimits

0x7578,	// (0x000a3cd4) bg_cl_pane

0x7584,	// (0x000a3ce0) cl_header_pane_ParamLimits

0x7584,	// (0x000a3ce0) cl_header_pane

0x7590,	// (0x000a3cec) cl_listscroll_pane_ParamLimits

0x7590,	// (0x000a3cec) cl_listscroll_pane

0xdb60,	// (0x000aa2bc) bg_cl_pane_g1

0xdb68,	// (0x000aa2c4) bg_cl_pane_g2

0xdb70,	// (0x000aa2cc) bg_cl_pane_g3

0xdb78,	// (0x000aa2d4) bg_cl_pane_g4

0xdb80,	// (0x000aa2dc) bg_cl_pane_g5

0xdb88,	// (0x000aa2e4) bg_cl_pane_g6

0xdb90,	// (0x000aa2ec) bg_cl_pane_g7

0xdb98,	// (0x000aa2f4) bg_cl_pane_g8

0xdba0,	// (0x000aa2fc) bg_cl_pane_g9

0x0008,

0xfa83,	// (0x000ac1df) bg_cl_pane_g

0x759c,	// (0x000a3cf8) aid_height_cl_leading_ParamLimits

0x759c,	// (0x000a3cf8) aid_height_cl_leading

0x75a8,	// (0x000a3d04) aid_height_cl_text_ParamLimits

0x75a8,	// (0x000a3d04) aid_height_cl_text

0x0e60,	// (0x0009d5bc) bg_cl_header_pane_ParamLimits

0x0e60,	// (0x0009d5bc) bg_cl_header_pane

0x75c0,	// (0x000a3d1c) cl_header_pane_g1_ParamLimits

0x75c0,	// (0x000a3d1c) cl_header_pane_g1

0x75cd,	// (0x000a3d29) cl_header_pane_t1_ParamLimits

0x75cd,	// (0x000a3d29) cl_header_pane_t1

0xdba8,	// (0x000aa304) cl_list_pane

0xd7bf,	// (0x000a9f1b) hc_scroll_pane_cp01

0xacb2,	// (0x000a740e) bg_cl_header_pane_g1

0xd6a1,	// (0x000a9dfd) bg_cl_header_pane_g2

0xacd2,	// (0x000a742e) bg_cl_header_pane_g3

0xd6b1,	// (0x000a9e0d) bg_cl_header_pane_g4

0xd6a9,	// (0x000a9e05) bg_cl_header_pane_g5

0xd8cb,	// (0x000aa027) bg_cl_header_pane_g6

0xd6c9,	// (0x000a9e25) bg_cl_header_pane_g7

0xd6d1,	// (0x000a9e2d) bg_cl_header_pane_g8

0xd6c1,	// (0x000a9e1d) bg_cl_header_pane_g9

0x0008,

0xfa96,	// (0x000ac1f2) bg_cl_header_pane_g

0x75df,	// (0x000a3d3b) hc_cl_list_double_graphic_heading_pane_ParamLimits

0x75df,	// (0x000a3d3b) hc_cl_list_double_graphic_heading_pane

0x75ef,	// (0x000a3d4b) hc_cl_list_single_graphic_pane_ParamLimits

0x75ef,	// (0x000a3d4b) hc_cl_list_single_graphic_pane

0x7601,	// (0x000a3d5d) hc_cl_list_single_graphic_pane_g1_ParamLimits

0x7601,	// (0x000a3d5d) hc_cl_list_single_graphic_pane_g1

0x760d,	// (0x000a3d69) hc_cl_list_single_graphic_pane_g2_ParamLimits

0x760d,	// (0x000a3d69) hc_cl_list_single_graphic_pane_g2

0x0001,

0xfaa9,	// (0x000ac205) hc_cl_list_single_graphic_pane_g_ParamLimits

0xfaa9,	// (0x000ac205) hc_cl_list_single_graphic_pane_g

0x7621,	// (0x000a3d7d) hc_cl_list_single_graphic_pane_t1_ParamLimits

0x7621,	// (0x000a3d7d) hc_cl_list_single_graphic_pane_t1

0x7601,	// (0x000a3d5d) hc_cl_list_double_graphic_heading_pane_g1_ParamLimits

0x7601,	// (0x000a3d5d) hc_cl_list_double_graphic_heading_pane_g1

0x7636,	// (0x000a3d92) hc_cl_list_double_graphic_heading_pane_g2_ParamLimits

0x7636,	// (0x000a3d92) hc_cl_list_double_graphic_heading_pane_g2

0x764a,	// (0x000a3da6) hc_cl_list_double_graphic_heading_pane_g3_ParamLimits

0x764a,	// (0x000a3da6) hc_cl_list_double_graphic_heading_pane_g3

0x0002,

0xfaae,	// (0x000ac20a) hc_cl_list_double_graphic_heading_pane_g_ParamLimits

0xfaae,	// (0x000ac20a) hc_cl_list_double_graphic_heading_pane_g

0x765e,	// (0x000a3dba) hc_cl_list_double_graphic_heading_pane_t1_ParamLimits

0x765e,	// (0x000a3dba) hc_cl_list_double_graphic_heading_pane_t1

0x7673,	// (0x000a3dcf) hc_cl_list_double_graphic_heading_pane_t2_ParamLimits

0x7673,	// (0x000a3dcf) hc_cl_list_double_graphic_heading_pane_t2

0x0001,

0xfab5,	// (0x000ac211) hc_cl_list_double_graphic_heading_pane_t_ParamLimits

0xfab5,	// (0x000ac211) hc_cl_list_double_graphic_heading_pane_t

0x7690,	// (0x000a3dec) vid4_progress_pane_g1

0x76a2,	// (0x000a3dfe) vid4_progress_pane_g2

0x3db4,	// (0x000a0510) vid4_progress_pane_g3

0x76b4,	// (0x000a3e10) vid4_progress_pane_g4

0x0004,

0xfaba,	// (0x000ac216) vid4_progress_pane_g

0x76d2,	// (0x000a3e2e) vid4_progress_pane_t1

0x76e7,	// (0x000a3e43) vid4_progress_pane_t2

0x0002,

0xfac5,	// (0x000ac221) vid4_progress_pane_t

0x7712,	// (0x000a3e6e) wait_bar_pane_cp07

0xca9e,	// (0x000a91fa) blid_firmament_pane_ParamLimits

0xcae1,	// (0x000a923d) popup_blid_sat_info2_window_g1

0xcb05,	// (0x000a9261) popup_blid_sat_info2_window_t3

0xcb13,	// (0x000a926f) popup_blid_sat_info2_window_t4

0xcb21,	// (0x000a927d) popup_blid_sat_info2_window_t5

0xcb2f,	// (0x000a928b) popup_blid_sat_info2_window_t6

0xcb3f,	// (0x000a929b) popup_blid_sat_info2_window_t7

0xcb4d,	// (0x000a92a9) popup_blid_sat_info2_window_t8

0xcb5b,	// (0x000a92b7) popup_blid_sat_info2_window_t9

0xcb69,	// (0x000a92c5) popup_blid_sat_info2_window_t10

0xcc31,	// (0x000a938d) aid_firma_cardinal_ParamLimits

0xcc45,	// (0x000a93a1) blid_firmament_pane_t1_ParamLimits

0xcc5c,	// (0x000a93b8) blid_firmament_pane_t2_ParamLimits

0xcc73,	// (0x000a93cf) blid_firmament_pane_t3_ParamLimits

0xcc8a,	// (0x000a93e6) blid_firmament_pane_t4_ParamLimits

0xf6d8,	// (0x000abe34) blid_firmament_pane_t_ParamLimits

0xcca1,	// (0x000a93fd) blid_sat_info_pane_ParamLimits

0xa2df,	// (0x000a6a3b) main_cam_set_pane_ParamLimits

0x5a0b,	// (0x000a2167) aid_size_cell_colour_35_ParamLimits

0x5a25,	// (0x000a2181) aid_size_cell_colour_112_ParamLimits

0x5a3c,	// (0x000a2198) aid_size_cell_effect_ParamLimits

0xa2df,	// (0x000a6a3b) bg_tb_trans_pane_cp02_ParamLimits

0xb3d2,	// (0x000a7b2e) heading_imed_pane_ParamLimits

0x5a56,	// (0x000a21b2) listscroll_imed_pane_ParamLimits

0xbe82,	// (0x000a85de) popup_call2_audio_first_window_g5_ParamLimits

0xbe82,	// (0x000a85de) popup_call2_audio_first_window_g5

0x6168,	// (0x000a28c4) aid_size_touch_image3_arrow_left_ParamLimits

0x6168,	// (0x000a28c4) aid_size_touch_image3_arrow_left

0x617e,	// (0x000a28da) aid_size_touch_image3_arrow_right_ParamLimits

0x617e,	// (0x000a28da) aid_size_touch_image3_arrow_right

0x76fd,	// (0x000a3e59) vid4_progress_pane_t3

0x5d04,	// (0x000a2460) main_hwr_training_symbol_option_pane_ParamLimits

0x5d04,	// (0x000a2460) main_hwr_training_symbol_option_pane

0xd485,	// (0x000a9be1) popup_hwr_training_preview_window_ParamLimits

0xd485,	// (0x000a9be1) popup_hwr_training_preview_window

0x5d65,	// (0x000a24c1) hwr_training_navi_pane_g5_ParamLimits

0x5d65,	// (0x000a24c1) hwr_training_navi_pane_g5

0xd68f,	// (0x000a9deb) popup_char_count_window

0x7035,	// (0x000a3791) bg_popup_sub_pane_cp20_ParamLimits

0x7043,	// (0x000a379f) list_vitu2_match_list_pane_ParamLimits

0x704f,	// (0x000a37ab) vitu2_page_scroll_pane_ParamLimits

0x704f,	// (0x000a37ab) vitu2_page_scroll_pane

0xdbb1,	// (0x000aa30d) list_single_hwr_training_symbol_option_pane_ParamLimits

0xdbb1,	// (0x000aa30d) list_single_hwr_training_symbol_option_pane

0xdbc4,	// (0x000aa320) list_single_hwr_training_symbol_option_pane_g1

0xdbcc,	// (0x000aa328) list_single_hwr_training_symbol_option_pane_t1

0xdbda,	// (0x000aa336) bg_button_pane_cp023

0xdbe3,	// (0x000aa33f) bg_button_pane_cp024

0x775e,	// (0x000a3eba) vitu2_page_scroll_pane_g1

0x7766,	// (0x000a3ec2) vitu2_page_scroll_pane_g2

0x0001,

0xfacc,	// (0x000ac228) vitu2_page_scroll_pane_g

0x7770,	// (0x000a3ecc) vitu2_page_scroll_pane_t1

0xc9fe,	// (0x000a915a) popup_char_count_window_g1

0xdc16,	// (0x000aa372) popup_char_count_window_g2

0xdc1f,	// (0x000aa37b) popup_char_count_window_g3

0x0002,

0xfad1,	// (0x000ac22d) popup_char_count_window_g

0xdc28,	// (0x000aa384) popup_char_count_window_t1

0x9c5a,	// (0x000a63b6) main_vded2_pane

0xd182,	// (0x000a98de) aid_size_cell_imed_line

0xd18c,	// (0x000a98e8) grid_imed_line_width_pane

0x662b,	// (0x000a2d87) vid4_indicators_pane_g4

0xdc36,	// (0x000aa392) cell_imed_line_width_pane_ParamLimits

0xdc36,	// (0x000aa392) cell_imed_line_width_pane

0xdc4c,	// (0x000aa3a8) cell_imed_line_width_pane_g1

0xcd10,	// (0x000a946c) cell_imed_line_width_pane_g2

0x0001,

0xfad8,	// (0x000ac234) cell_imed_line_width_pane_g

0x777f,	// (0x000a3edb) main_vded2_pane_g1_ParamLimits

0x777f,	// (0x000a3edb) main_vded2_pane_g1

0x778e,	// (0x000a3eea) main_vded2_pane_g2_ParamLimits

0x778e,	// (0x000a3eea) main_vded2_pane_g2

0x0001,

0xfadd,	// (0x000ac239) main_vded2_pane_g_ParamLimits

0xfadd,	// (0x000ac239) main_vded2_pane_g

0x779c,	// (0x000a3ef8) vded2_slider_pane_ParamLimits

0x779c,	// (0x000a3ef8) vded2_slider_pane

0x77a9,	// (0x000a3f05) aid_size_touch_vded2_end

0x77b3,	// (0x000a3f0f) aid_size_touch_vded2_playhead

0xdc55,	// (0x000aa3b1) aid_size_touch_vded2_start

0xdc5d,	// (0x000aa3b9) vded2_slider_bg_pane

0xdc66,	// (0x000aa3c2) vded2_slider_pane_g1

0xdc6f,	// (0x000aa3cb) vded2_slider_pane_g2

0x77bb,	// (0x000a3f17) vded2_slider_pane_g3

0x0002,

0xfae2,	// (0x000ac23e) vded2_slider_pane_g

0xd973,	// (0x000aa0cf) vded2_slider_bg_pane_g1

0xd97c,	// (0x000aa0d8) vded2_slider_bg_pane_g2

0xd985,	// (0x000aa0e1) vded2_slider_bg_pane_g3

0x0002,

0xf7a8,	// (0x000abf04) vded2_slider_bg_pane_g

0x3dcc,	// (0x000a0528) aid_postcard_touch_down_pane_ParamLimits

0x3dcc,	// (0x000a0528) aid_postcard_touch_down_pane

0x3ddc,	// (0x000a0538) aid_postcard_touch_up_pane_ParamLimits

0x3ddc,	// (0x000a0538) aid_postcard_touch_up_pane

0x9c5a,	// (0x000a63b6) main_blid2_pane

0xc86e,	// (0x000a8fca) popup_blid2_search_window

0x9c5a,	// (0x000a63b6) blid2_gps_pane

0x9c5a,	// (0x000a63b6) blid2_navig_pane

0x9c5a,	// (0x000a63b6) blid2_search_pane

0x9c5a,	// (0x000a63b6) blid2_tripm_pane

0x77c4,	// (0x000a3f20) blid2_search_pane_g1_ParamLimits

0x77c4,	// (0x000a3f20) blid2_search_pane_g1

0x77d0,	// (0x000a3f2c) blid2_search_pane_t1_ParamLimits

0x77d0,	// (0x000a3f2c) blid2_search_pane_t1

0x77e2,	// (0x000a3f3e) aid_size_cell_blid2_gps_ParamLimits

0x77e2,	// (0x000a3f3e) aid_size_cell_blid2_gps

0x77f2,	// (0x000a3f4e) blid2_gps_pane_g1_ParamLimits

0x77f2,	// (0x000a3f4e) blid2_gps_pane_g1

0x77fe,	// (0x000a3f5a) grid_blid2_satellite_pane_ParamLimits

0x77fe,	// (0x000a3f5a) grid_blid2_satellite_pane

0x780c,	// (0x000a3f68) blid2_navig_pane_g1_ParamLimits

0x780c,	// (0x000a3f68) blid2_navig_pane_g1

0x7818,	// (0x000a3f74) blid2_navig_pane_t1_ParamLimits

0x7818,	// (0x000a3f74) blid2_navig_pane_t1

0x782a,	// (0x000a3f86) blid2_navig_pane_t2_ParamLimits

0x782a,	// (0x000a3f86) blid2_navig_pane_t2

0x0001,

0xfae9,	// (0x000ac245) blid2_navig_pane_t_ParamLimits

0xfae9,	// (0x000ac245) blid2_navig_pane_t

0x783c,	// (0x000a3f98) blid2_navig_ring_pane_ParamLimits

0x783c,	// (0x000a3f98) blid2_navig_ring_pane

0x784c,	// (0x000a3fa8) blid2_speed_pane_ParamLimits

0x784c,	// (0x000a3fa8) blid2_speed_pane

0x7858,	// (0x000a3fb4) blid2_tripm_pane_g1_ParamLimits

0x7858,	// (0x000a3fb4) blid2_tripm_pane_g1

0x7868,	// (0x000a3fc4) blid2_tripm_pane_g2_ParamLimits

0x7868,	// (0x000a3fc4) blid2_tripm_pane_g2

0x7874,	// (0x000a3fd0) blid2_tripm_pane_g3_ParamLimits

0x7874,	// (0x000a3fd0) blid2_tripm_pane_g3

0x7880,	// (0x000a3fdc) blid2_tripm_pane_g4_ParamLimits

0x7880,	// (0x000a3fdc) blid2_tripm_pane_g4

0x788c,	// (0x000a3fe8) blid2_tripm_pane_g5_ParamLimits

0x788c,	// (0x000a3fe8) blid2_tripm_pane_g5

0x0005,

0xfaee,	// (0x000ac24a) blid2_tripm_pane_g_ParamLimits

0xfaee,	// (0x000ac24a) blid2_tripm_pane_g

0x78a8,	// (0x000a4004) blid2_tripm_pane_t1_ParamLimits

0x78a8,	// (0x000a4004) blid2_tripm_pane_t1

0x78ba,	// (0x000a4016) blid2_tripm_pane_t2_ParamLimits

0x78ba,	// (0x000a4016) blid2_tripm_pane_t2

0x78cc,	// (0x000a4028) blid2_tripm_pane_t3_ParamLimits

0x78cc,	// (0x000a4028) blid2_tripm_pane_t3

0x0003,

0xfafb,	// (0x000ac257) blid2_tripm_pane_t_ParamLimits

0xfafb,	// (0x000ac257) blid2_tripm_pane_t

0x78fe,	// (0x000a405a) cell_blid2_satellite_pane_ParamLimits

0x78fe,	// (0x000a405a) cell_blid2_satellite_pane

0x791c,	// (0x000a4078) cell_blid2_satellite_pane_g1

0xdc77,	// (0x000aa3d3) cell_blid2_satellite_pane_t1

0xccb1,	// (0x000a940d) blid2_speed_pane_g1

0xdc85,	// (0x000aa3e1) blid2_speed_pane_t1

0xdc93,	// (0x000aa3ef) blid2_speed_pane_t2

0x0001,

0xfb04,	// (0x000ac260) blid2_speed_pane_t

0xccb1,	// (0x000a940d) blid2_navig_ring_pane_g1

0x7925,	// (0x000a4081) blid2_navig_ring_pane_g2

0x792d,	// (0x000a4089) blid2_navig_ring_pane_g3

0x7935,	// (0x000a4091) blid2_navig_ring_pane_g4

0x793d,	// (0x000a4099) blid2_navig_ring_pane_g5

0x0004,

0xfb09,	// (0x000ac265) blid2_navig_ring_pane_g

0x9c5a,	// (0x000a63b6) bg_popup_window_pane_cp011

0xdca1,	// (0x000aa3fd) popup_blid2_search_window_g1

0xdca9,	// (0x000aa405) popup_blid2_search_window_t1

0xdcb7,	// (0x000aa413) popup_blid2_search_window_t2

0x0001,

0xfb14,	// (0x000ac270) popup_blid2_search_window_t

0xabc1,	// (0x000a731d) main_browser_pane_g1

0xa891,	// (0x000a6fed) main_browser_pane_ParamLimits

0x65d6,	// (0x000a2d32) bg_button_pane_cp011_ParamLimits

0x68de,	// (0x000a303a) cell_vitu2_function_pane_g1_ParamLimits

0xc860,	// (0x000a8fbc) bg_popup_sub_pane_cp22_ParamLimits

0x721b,	// (0x000a3977) input_focus_pane_cp08_ParamLimits

0x7232,	// (0x000a398e) popup_vitu2_query_button_pane_ParamLimits

0x7232,	// (0x000a398e) popup_vitu2_query_button_pane

0x7243,	// (0x000a399f) popup_vitu2_query_input_button_pane

0xd906,	// (0x000aa062) popup_vitu2_query_window_g1_ParamLimits

0x724d,	// (0x000a39a9) popup_vitu2_query_window_g2_ParamLimits

0xfa1c,	// (0x000ac178) popup_vitu2_query_window_g_ParamLimits

0x9c5a,	// (0x000a63b6) bg_button_pane_cp026

0x7945,	// (0x000a40a1) popup_vitu2_query_input_button_pane_g1

0x9c5a,	// (0x000a63b6) bg_button_pane_cp025

0xdcc5,	// (0x000aa421) popup_vitu2_query_button_pane_t1

0x4f65,	// (0x000a16c1) main_mp3_pane_t6

0x4f75,	// (0x000a16d1) popup_slider_window_cp01

0x64f8,	// (0x000a2c54) cam4_battery_pane

0x65e4,	// (0x000a2d40) cam4_battery_pane_cp02

0x7688,	// (0x000a3de4) cam4_battery_pane_cp01

0x7688,	// (0x000a3de4) cam4_battery_pane_cp03

0xd98e,	// (0x000aa0ea) cam4_battery_pane_g1

0xccb1,	// (0x000a940d) cam4_battery_pane_g2

0x0001,

0xfb19,	// (0x000ac275) cam4_battery_pane_g

0xcb77,	// (0x000a92d3) popup_blid_sat_info2_window_t11

0x3678,	// (0x0009fdd4) aid_size_touch_mv_arrow_left_ParamLimits

0x36a3,	// (0x0009fdff) aid_size_touch_mv_arrow_right_ParamLimits

0xb398,	// (0x000a7af4) navi_pane_g1_ParamLimits

0x36e2,	// (0x0009fe3e) navi_pane_g2_ParamLimits

0x3710,	// (0x0009fe6c) navi_pane_g3_ParamLimits

0xf3ea,	// (0x000abb46) navi_pane_g_ParamLimits

0x376a,	// (0x0009fec6) navi_pane_mv_t1_ParamLimits

0x5a62,	// (0x000a21be) grid_imed_effect_pane_ParamLimits

0x2093,	// (0x0009e7ef) aid_placing_vt_slider_lsc

0xaaf4,	// (0x000a7250) aid_placing_vt_slider_prt

0xa2df,	// (0x000a6a3b) bg_tb_trans_pane_cp01_ParamLimits

0xce09,	// (0x000a9565) popup_image_details_window_g1_ParamLimits

0xce1c,	// (0x000a9578) popup_image_details_window_g2_ParamLimits

0xce31,	// (0x000a958d) popup_image_details_window_g3_ParamLimits

0xce31,	// (0x000a958d) popup_image_details_window_g3

0xf71d,	// (0x000abe79) popup_image_details_window_g_ParamLimits

0xce45,	// (0x000a95a1) popup_image_details_window_t1_ParamLimits

0xce57,	// (0x000a95b3) popup_image_details_window_t2_ParamLimits

0xce70,	// (0x000a95cc) popup_image_details_window_t3_ParamLimits

0xce84,	// (0x000a95e0) popup_image_details_window_t4_ParamLimits

0xce9f,	// (0x000a95fb) popup_image_details_window_t5_ParamLimits

0xf724,	// (0x000abe80) popup_image_details_window_t_ParamLimits

0x75b4,	// (0x000a3d10) cl_header_name_pane_ParamLimits

0x75b4,	// (0x000a3d10) cl_header_name_pane

0x794d,	// (0x000a40a9) cl_header_name_pane_t1_ParamLimits

0x794d,	// (0x000a40a9) cl_header_name_pane_t1

0x7964,	// (0x000a40c0) cl_header_name_pane_t2_ParamLimits

0x7964,	// (0x000a40c0) cl_header_name_pane_t2

0x798e,	// (0x000a40ea) cl_header_name_pane_t3_ParamLimits

0x798e,	// (0x000a40ea) cl_header_name_pane_t3

0x0002,

0xfb1e,	// (0x000ac27a) cl_header_name_pane_t_ParamLimits

0xfb1e,	// (0x000ac27a) cl_header_name_pane_t

0x373b,	// (0x0009fe97) navi_pane_mv_g2_ParamLimits

0xd669,	// (0x000a9dc5) field_vitu2_entry_pane_g1_ParamLimits

0xd675,	// (0x000a9dd1) field_vitu2_entry_pane_g2_ParamLimits

0xd681,	// (0x000a9ddd) field_vitu2_entry_pane_g3_ParamLimits

0xd681,	// (0x000a9ddd) field_vitu2_entry_pane_g3

0xf91b,	// (0x000ac077) field_vitu2_entry_pane_g_ParamLimits

0x6869,	// (0x000a2fc5) cell_vitu2_itu_pane_g1_ParamLimits

0x6879,	// (0x000a2fd5) cell_vitu2_itu_pane_g2_ParamLimits

0x6879,	// (0x000a2fd5) cell_vitu2_itu_pane_g2

0x0001,

0xf927,	// (0x000ac083) cell_vitu2_itu_pane_g_ParamLimits

0xf927,	// (0x000ac083) cell_vitu2_itu_pane_g

0x65d6,	// (0x000a2d32) bg_vkb2_func_pane_cp05_ParamLimits

0x65d6,	// (0x000a2d32) bg_vkb2_func_pane_cp05

0x65d6,	// (0x000a2d32) bg_vkb2_func_pane_cp03

0x65d6,	// (0x000a2d32) bg_vkb2_func_pane_cp04

0x65d6,	// (0x000a2d32) bg_vkb2_func_pane_cp10_ParamLimits

0x65d6,	// (0x000a2d32) bg_vkb2_func_pane_cp10

0x7556,	// (0x000a3cb2) bg_vkb2_func_pane_cp08

0x753c,	// (0x000a3c98) bg_vkb2_func_pane_cp06

0x754a,	// (0x000a3ca6) bg_vkb2_func_pane_cp07

0xdbec,	// (0x000aa348) bg_vkb2_func_pane_cp11_ParamLimits

0xdbec,	// (0x000aa348) bg_vkb2_func_pane_cp11

0xdc01,	// (0x000aa35d) bg_vkb2_func_pane_cp12_ParamLimits

0xdc01,	// (0x000aa35d) bg_vkb2_func_pane_cp12

0x9c5a,	// (0x000a63b6) bg_vkb2_func_pane_cp09

0xd6a1,	// (0x000a9dfd) bg_vkb2_func_pane_g1

0xacd2,	// (0x000a742e) bg_vkb2_func_pane_g2

0xd6a9,	// (0x000a9e05) bg_vkb2_func_pane_g3

0xd6b1,	// (0x000a9e0d) bg_vkb2_func_pane_g4

0xd8cb,	// (0x000aa027) bg_vkb2_func_pane_g5

0xd6c9,	// (0x000a9e25) bg_vkb2_func_pane_g6

0xd6d1,	// (0x000a9e2d) bg_vkb2_func_pane_g7

0xd6c1,	// (0x000a9e1d) bg_vkb2_func_pane_g8

0xacb2,	// (0x000a740e) bg_vkb2_func_pane_g9

0x0008,

0xfb25,	// (0x000ac281) bg_vkb2_func_pane_g

0x789a,	// (0x000a3ff6) blid2_tripm_pane_g6_ParamLimits

0x789a,	// (0x000a3ff6) blid2_tripm_pane_g6

0xd53d,	// (0x000a9c99) mp4_progress_pane_g1

0x78f2,	// (0x000a404e) blid2_tripm_values_pane_ParamLimits

0x78f2,	// (0x000a404e) blid2_tripm_values_pane

0x79b3,	// (0x000a410f) blid2_tripm_values_pane_t1

0x79c1,	// (0x000a411d) blid2_tripm_values_pane_t2

0x79cf,	// (0x000a412b) blid2_tripm_values_pane_t3

0x79dd,	// (0x000a4139) blid2_tripm_values_pane_t4

0x79eb,	// (0x000a4147) blid2_tripm_values_pane_t5

0x79f9,	// (0x000a4155) blid2_tripm_values_pane_t6

0x7a07,	// (0x000a4163) blid2_tripm_values_pane_t7

0x7a15,	// (0x000a4171) blid2_tripm_values_pane_t8

0x7a23,	// (0x000a417f) blid2_tripm_values_pane_t9

0x0008,

0xfb38,	// (0x000ac294) blid2_tripm_values_pane_t

0x20d1,	// (0x0009e82d) call_video_pane_t1_ParamLimits

0x20ee,	// (0x0009e84a) call_video_pane_t2_ParamLimits

0xf273,	// (0x000ab9cf) call_video_pane_t_ParamLimits

0x3cd7,	// (0x000a0433) msg_header_pane_g1_ParamLimits

0xb5c6,	// (0x000a7d22) msg_header_pane_g2_ParamLimits

0xb5c6,	// (0x000a7d22) msg_header_pane_g2

0x0001,

0xf48d,	// (0x000abbe9) msg_header_pane_g_ParamLimits

0xf48d,	// (0x000abbe9) msg_header_pane_g

0xa891,	// (0x000a6fed) main_clock2_pane_ParamLimits

0x57f1,	// (0x000a1f4d) grid_clock2_toolbar_pane_ParamLimits

0x57f1,	// (0x000a1f4d) grid_clock2_toolbar_pane

0x57f1,	// (0x000a1f4d) listscroll_clock2_pane_ParamLimits

0x57f1,	// (0x000a1f4d) listscroll_clock2_pane

0x5899,	// (0x000a1ff5) main_clock2_pane_t3_ParamLimits

0x5899,	// (0x000a1ff5) main_clock2_pane_t3

0x58ab,	// (0x000a2007) main_clock2_pane_t4_ParamLimits

0x58ab,	// (0x000a2007) main_clock2_pane_t4

0xdcd3,	// (0x000aa42f) cell_clock2_toolbar_pane

0xdcdb,	// (0x000aa437) cell_clock2_toolbar_pane_cp01

0xdcdb,	// (0x000aa437) cell_clock2_toolbar_pane_cp02

0xdce3,	// (0x000aa43f) cell_clock2_toolbar_pane_cp03

0xdceb,	// (0x000aa447) list_clock2_pane

0xb2fe,	// (0x000a7a5a) scroll_pane_cp10

0xdcf3,	// (0x000aa44f) list_single_clock2_pane_ParamLimits

0xdcf3,	// (0x000aa44f) list_single_clock2_pane

0xb452,	// (0x000a7bae) list_highlight_pane_cp08

0xdd00,	// (0x000aa45c) list_single_clock2_pane_t1

0xdd0e,	// (0x000aa46a) list_single_clock2_pane_t2

0x0001,

0xfb4b,	// (0x000ac2a7) list_single_clock2_pane_t

0x9c5a,	// (0x000a63b6) bg_button_pane_cp10

0xdd1c,	// (0x000aa478) cell_clock2_toolbar_pane_g1

0x3d2e,	// (0x000a048a) aid_main_viewer_pane_g1_ParamLimits

0x3d2e,	// (0x000a048a) aid_main_viewer_pane_g1

0x3d3a,	// (0x000a0496) aid_main_viewer_pane_g2_ParamLimits

0x3d3a,	// (0x000a0496) aid_main_viewer_pane_g2

0x3d46,	// (0x000a04a2) aid_main_viewer_pane_g3_ParamLimits

0x3d46,	// (0x000a04a2) aid_main_viewer_pane_g3

0x3d57,	// (0x000a04b3) aid_main_viewer_pane_g4_ParamLimits

0x3d57,	// (0x000a04b3) aid_main_viewer_pane_g4

0x0003,

0xf49e,	// (0x000abbfa) aid_main_viewer_pane_g_ParamLimits

0xf49e,	// (0x000abbfa) aid_main_viewer_pane_g

0x44e1,	// (0x000a0c3d) main_calc_pane_ParamLimits

0x44ee,	// (0x000a0c4a) main_dialer2_pane_ParamLimits

0x9c5a,	// (0x000a63b6) main_cam6_pane

0x9c5a,	// (0x000a63b6) main_vid6_pane

0x57fd,	// (0x000a1f59) listscroll_gen_pane_cp06_ParamLimits

0x57fd,	// (0x000a1f59) listscroll_gen_pane_cp06

0x58bd,	// (0x000a2019) main_clock2_pane_t5_ParamLimits

0x58bd,	// (0x000a2019) main_clock2_pane_t5

0x590c,	// (0x000a2068) aid_call2_pane_cp10_ParamLimits

0x591e,	// (0x000a207a) aid_call_pane_cp10_ParamLimits

0xb36d,	// (0x000a7ac9) popup_clock_analogue_window_cp10_g1_ParamLimits

0xb36d,	// (0x000a7ac9) popup_clock_analogue_window_cp10_g2_ParamLimits

0x5930,	// (0x000a208c) popup_clock_analogue_window_cp10_g3_ParamLimits

0x5930,	// (0x000a208c) popup_clock_analogue_window_cp10_g4_ParamLimits

0xb36d,	// (0x000a7ac9) popup_clock_analogue_window_cp10_g5_ParamLimits

0xf7d4,	// (0x000abf30) popup_clock_analogue_window_cp10_g_ParamLimits

0x5942,	// (0x000a209e) popup_clock_analogue_window_cp10_t1_ParamLimits

0x6115,	// (0x000a2871) cell_dialer2_keypad_pane_g2_ParamLimits

0x6115,	// (0x000a2871) cell_dialer2_keypad_pane_g2

0x0001,

0xf8ba,	// (0x000ac016) cell_dialer2_keypad_pane_g_ParamLimits

0xf8ba,	// (0x000ac016) cell_dialer2_keypad_pane_g

0x6131,	// (0x000a288d) cell_dialer2_keypad_pane_t1

0x6bbb,	// (0x000a3317) main_cset_text2_pane_ParamLimits

0x6bbb,	// (0x000a3317) main_cset_text2_pane

0xdb54,	// (0x000aa2b0) area_vitu2_query_pane_g1_ParamLimits

0x74db,	// (0x000a3c37) area_vitu2_query_pane_g2_ParamLimits

0xfa6f,	// (0x000ac1cb) area_vitu2_query_pane_g_ParamLimits

0xa39c,	// (0x000a6af8) area_vitu2_query_pane_t7_ParamLimits

0xa39c,	// (0x000a6af8) area_vitu2_query_pane_t7

0x753c,	// (0x000a3c98) bg_button_pane_cp018_ParamLimits

0x754a,	// (0x000a3ca6) bg_button_pane_cp021_ParamLimits

0x7556,	// (0x000a3cb2) bg_button_pane_cp022_ParamLimits

0x7556,	// (0x000a3cb2) bg_vkb2_func_pane_cp08_ParamLimits

0x753c,	// (0x000a3c98) bg_vkb2_func_pane_cp06_ParamLimits

0x754a,	// (0x000a3ca6) bg_vkb2_func_pane_cp07_ParamLimits

0x7567,	// (0x000a3cc3) input_focus_pane_cp09_ParamLimits

0x7a31,	// (0x000a418d) cam6_autofocus_pane_ParamLimits

0x7a31,	// (0x000a418d) cam6_autofocus_pane

0x7a53,	// (0x000a41af) cam6_image_uncrop_pane_ParamLimits

0x7a53,	// (0x000a41af) cam6_image_uncrop_pane

0x7a80,	// (0x000a41dc) cam6_indi_pane_ParamLimits

0x7a80,	// (0x000a41dc) cam6_indi_pane

0x7a9a,	// (0x000a41f6) cam6_mode_pane_ParamLimits

0x7a9a,	// (0x000a41f6) cam6_mode_pane

0x7aae,	// (0x000a420a) cam6_timer_pane_ParamLimits

0x7aae,	// (0x000a420a) cam6_timer_pane

0x7aba,	// (0x000a4216) cam6_zoom_pane_ParamLimits

0x7aba,	// (0x000a4216) cam6_zoom_pane

0x7ad6,	// (0x000a4232) cam6_mode_pane_g1_ParamLimits

0x7ad6,	// (0x000a4232) cam6_mode_pane_g1

0x7ae2,	// (0x000a423e) cam6_mode_pane_g2_ParamLimits

0x7ae2,	// (0x000a423e) cam6_mode_pane_g2

0x7aee,	// (0x000a424a) cam6_mode_pane_g3_ParamLimits

0x7aee,	// (0x000a424a) cam6_mode_pane_g3

0x7afa,	// (0x000a4256) cam6_mode_pane_g4_ParamLimits

0x7afa,	// (0x000a4256) cam6_mode_pane_g4

0x0003,

0xfb50,	// (0x000ac2ac) cam6_mode_pane_g_ParamLimits

0xfb50,	// (0x000ac2ac) cam6_mode_pane_g

0xd998,	// (0x000aa0f4) bg_tb_trans_pane_cp08_ParamLimits

0xd998,	// (0x000aa0f4) bg_tb_trans_pane_cp08

0xdd24,	// (0x000aa480) cam6_battery_pane_ParamLimits

0xdd24,	// (0x000aa480) cam6_battery_pane

0xdd3a,	// (0x000aa496) cam6_indi_pane_g1_ParamLimits

0xdd3a,	// (0x000aa496) cam6_indi_pane_g1

0xdd4c,	// (0x000aa4a8) cam6_indi_pane_g2_ParamLimits

0xdd4c,	// (0x000aa4a8) cam6_indi_pane_g2

0xdd5e,	// (0x000aa4ba) cam6_indi_pane_g3_ParamLimits

0xdd5e,	// (0x000aa4ba) cam6_indi_pane_g3

0x0002,

0xfb59,	// (0x000ac2b5) cam6_indi_pane_g_ParamLimits

0xfb59,	// (0x000ac2b5) cam6_indi_pane_g

0xdd70,	// (0x000aa4cc) cam6_indi_pane_t1_ParamLimits

0xdd70,	// (0x000aa4cc) cam6_indi_pane_t1

0x6668,	// (0x000a2dc4) cam6_autofocus_pane_g1

0x6660,	// (0x000a2dbc) cam6_autofocus_pane_g2

0x6678,	// (0x000a2dd4) cam6_autofocus_pane_g3

0x6670,	// (0x000a2dcc) cam6_autofocus_pane_g4

0x0003,

0xfb60,	// (0x000ac2bc) cam6_autofocus_pane_g

0xdda2,	// (0x000aa4fe) cam6_timer_pane_g1

0xddaa,	// (0x000aa506) cam6_timer_pane_t1

0xddb8,	// (0x000aa514) cam6_zoom_cont_pane

0xddc0,	// (0x000aa51c) cam6_zoom_pane_g1

0xddc8,	// (0x000aa524) cam6_zoom_pane_g2

0x7b06,	// (0x000a4262) cam6_zoom_pane_g3

0x0002,

0xfb69,	// (0x000ac2c5) cam6_zoom_pane_g

0xccb1,	// (0x000a940d) cam6_battery_pane_g1

0xccb1,	// (0x000a940d) cam6_battery_pane_g2

0x0001,

0xf6e1,	// (0x000abe3d) cam6_battery_pane_g

0xddd0,	// (0x000aa52c) cam6_zoom_cont_pane_g1

0xddd9,	// (0x000aa535) cam6_zoom_cont_pane_g2

0xdde2,	// (0x000aa53e) cam6_zoom_cont_pane_g3

0x0002,

0xfb70,	// (0x000ac2cc) cam6_zoom_cont_pane_g

0x7b23,	// (0x000a427f) cam6_mode_pane_cp_ParamLimits

0x7b23,	// (0x000a427f) cam6_mode_pane_cp

0x7b37,	// (0x000a4293) cam6_zoom_pane_cp_ParamLimits

0x7b37,	// (0x000a4293) cam6_zoom_pane_cp

0x7b53,	// (0x000a42af) vid6_image_uncrop_cif_pane_ParamLimits

0x7b53,	// (0x000a42af) vid6_image_uncrop_cif_pane

0x7b7f,	// (0x000a42db) vid6_image_uncrop_nhd_pane_ParamLimits

0x7b7f,	// (0x000a42db) vid6_image_uncrop_nhd_pane

0x7b9e,	// (0x000a42fa) vid6_image_uncrop_vga_pane_ParamLimits

0x7b9e,	// (0x000a42fa) vid6_image_uncrop_vga_pane

0x7bbd,	// (0x000a4319) vid6_image_uncrop_wvga_pane_ParamLimits

0x7bbd,	// (0x000a4319) vid6_image_uncrop_wvga_pane

0x7bdc,	// (0x000a4338) vid6_indi_pane_ParamLimits

0x7bdc,	// (0x000a4338) vid6_indi_pane

0xd998,	// (0x000aa0f4) bg_tb_trans_pane_cp09_ParamLimits

0xd998,	// (0x000aa0f4) bg_tb_trans_pane_cp09

0xddfa,	// (0x000aa556) cam6_battery_pane_cp_ParamLimits

0xddfa,	// (0x000aa556) cam6_battery_pane_cp

0xde06,	// (0x000aa562) vid6_indi_pane_g1_ParamLimits

0xde06,	// (0x000aa562) vid6_indi_pane_g1

0xde18,	// (0x000aa574) vid6_indi_pane_g2_ParamLimits

0xde18,	// (0x000aa574) vid6_indi_pane_g2

0xde2a,	// (0x000aa586) vid6_indi_pane_g3_ParamLimits

0xde2a,	// (0x000aa586) vid6_indi_pane_g3

0xde41,	// (0x000aa59d) vid6_indi_pane_g4_ParamLimits

0xde41,	// (0x000aa59d) vid6_indi_pane_g4

0xde58,	// (0x000aa5b4) vid6_indi_pane_g5_ParamLimits

0xde58,	// (0x000aa5b4) vid6_indi_pane_g5

0x0004,

0xfb77,	// (0x000ac2d3) vid6_indi_pane_g_ParamLimits

0xfb77,	// (0x000ac2d3) vid6_indi_pane_g

0xde72,	// (0x000aa5ce) vid6_indi_pane_t1_ParamLimits

0xde72,	// (0x000aa5ce) vid6_indi_pane_t1

0xde88,	// (0x000aa5e4) vid6_indi_pane_t2_ParamLimits

0xde88,	// (0x000aa5e4) vid6_indi_pane_t2

0xdeb0,	// (0x000aa60c) vid6_indi_pane_t3_ParamLimits

0xdeb0,	// (0x000aa60c) vid6_indi_pane_t3

0xded8,	// (0x000aa634) vid6_indi_pane_t4_ParamLimits

0xded8,	// (0x000aa634) vid6_indi_pane_t4

0x0003,

0xfb82,	// (0x000ac2de) vid6_indi_pane_t_ParamLimits

0xfb82,	// (0x000ac2de) vid6_indi_pane_t

0xdefc,	// (0x000aa658) wait_bar_pane_cp08

0x7c01,	// (0x000a435d) main_cset_text2_pane_t1_ParamLimits

0x7c01,	// (0x000a435d) main_cset_text2_pane_t1

0x7b0e,	// (0x000a426a) listscroll_gen_pane_cp06_t1_ParamLimits

0x7b0e,	// (0x000a426a) listscroll_gen_pane_cp06_t1

0x9c5a,	// (0x000a63b6) main_cam6_set_pane

0x64ea,	// (0x000a2c46) bg_tb_trans_pane_cp06_ParamLimits

0x6500,	// (0x000a2c5c) cam4_indicators_pane_g1_ParamLimits

0x6511,	// (0x000a2c6d) cam4_indicators_pane_g2_ParamLimits

0xf8f7,	// (0x000ac053) cam4_indicators_pane_g_ParamLimits

0x6529,	// (0x000a2c85) cam4_indicators_pane_t1_ParamLimits

0x65d6,	// (0x000a2d32) bg_tb_trans_pane_cp07_ParamLimits

0x65ee,	// (0x000a2d4a) vid4_indicators_pane_g1_ParamLimits

0x6604,	// (0x000a2d60) vid4_indicators_pane_g2_ParamLimits

0x6618,	// (0x000a2d74) vid4_indicators_pane_g3_ParamLimits

0x662b,	// (0x000a2d87) vid4_indicators_pane_g4_ParamLimits

0xf909,	// (0x000ac065) vid4_indicators_pane_g_ParamLimits

0x6649,	// (0x000a2da5) vid4_indicators_pane_t1_ParamLimits

0x7690,	// (0x000a3dec) vid4_progress_pane_g1_ParamLimits

0x76a2,	// (0x000a3dfe) vid4_progress_pane_g2_ParamLimits

0x3db4,	// (0x000a0510) vid4_progress_pane_g3_ParamLimits

0x76b4,	// (0x000a3e10) vid4_progress_pane_g4_ParamLimits

0xfaba,	// (0x000ac216) vid4_progress_pane_g_ParamLimits

0x76d2,	// (0x000a3e2e) vid4_progress_pane_t1_ParamLimits

0x76e7,	// (0x000a3e43) vid4_progress_pane_t2_ParamLimits

0x76fd,	// (0x000a3e59) vid4_progress_pane_t3_ParamLimits

0xfac5,	// (0x000ac221) vid4_progress_pane_t_ParamLimits

0x7712,	// (0x000a3e6e) wait_bar_pane_cp07_ParamLimits

0x7c28,	// (0x000a4384) main_cam6_set_pane_g2_ParamLimits

0x7c28,	// (0x000a4384) main_cam6_set_pane_g2

0x7c34,	// (0x000a4390) main_cset6_listscroll_pane_ParamLimits

0x7c34,	// (0x000a4390) main_cset6_listscroll_pane

0x7c61,	// (0x000a43bd) main_cset6_slider_pane_ParamLimits

0x7c61,	// (0x000a43bd) main_cset6_slider_pane

0x7c6d,	// (0x000a43c9) main_cset6_text2_pane_ParamLimits

0x7c6d,	// (0x000a43c9) main_cset6_text2_pane

0xdf0b,	// (0x000aa667) main_cset6_text_pane

0xdf13,	// (0x000aa66f) main_cset_list_pane_copy1_ParamLimits

0xdf13,	// (0x000aa66f) main_cset_list_pane_copy1

0xdf23,	// (0x000aa67f) scroll_pane_cp028_copy1

0x7c80,	// (0x000a43dc) cset_list_set_pane_copy1

0x7c90,	// (0x000a43ec) aid_position_infowindow_above_copy1

0x7c98,	// (0x000a43f4) aid_position_infowindow_below_copy1

0x7ca0,	// (0x000a43fc) cset_list_set_pane_g1_copy1

0x7ca8,	// (0x000a4404) cset_list_set_pane_g3_copy1_ParamLimits

0x7ca8,	// (0x000a4404) cset_list_set_pane_g3_copy1

0x7cb7,	// (0x000a4413) cset_list_set_pane_t1_copy1_ParamLimits

0x7cb7,	// (0x000a4413) cset_list_set_pane_t1_copy1

0xa2df,	// (0x000a6a3b) list_highlight_pane_cp021_copy1_ParamLimits

0xa2df,	// (0x000a6a3b) list_highlight_pane_cp021_copy1

0xdf2c,	// (0x000aa688) cset6_slider_pane_ParamLimits

0xdf2c,	// (0x000aa688) cset6_slider_pane

0xdf58,	// (0x000aa6b4) main_cset6_slider_pane_g1_ParamLimits

0xdf58,	// (0x000aa6b4) main_cset6_slider_pane_g1

0x7ccc,	// (0x000a4428) main_cset6_slider_pane_g2_ParamLimits

0x7ccc,	// (0x000a4428) main_cset6_slider_pane_g2

0xdf80,	// (0x000aa6dc) main_cset6_slider_pane_g3_ParamLimits

0xdf80,	// (0x000aa6dc) main_cset6_slider_pane_g3

0x7cf4,	// (0x000a4450) main_cset6_slider_pane_g4_ParamLimits

0x7cf4,	// (0x000a4450) main_cset6_slider_pane_g4

0x7d00,	// (0x000a445c) main_cset6_slider_pane_g5_ParamLimits

0x7d00,	// (0x000a445c) main_cset6_slider_pane_g5

0xd7d4,	// (0x000a9f30) main_cset6_slider_pane_g7_ParamLimits

0xd7d4,	// (0x000a9f30) main_cset6_slider_pane_g7

0xd7e0,	// (0x000a9f3c) main_cset6_slider_pane_g8_ParamLimits

0xd7e0,	// (0x000a9f3c) main_cset6_slider_pane_g8

0x7d0c,	// (0x000a4468) main_cset6_slider_pane_g9_ParamLimits

0x7d0c,	// (0x000a4468) main_cset6_slider_pane_g9

0x7d18,	// (0x000a4474) main_cset6_slider_pane_g10_ParamLimits

0x7d18,	// (0x000a4474) main_cset6_slider_pane_g10

0x7d24,	// (0x000a4480) main_cset6_slider_pane_g11_ParamLimits

0x7d24,	// (0x000a4480) main_cset6_slider_pane_g11

0x7d30,	// (0x000a448c) main_cset6_slider_pane_g12_ParamLimits

0x7d30,	// (0x000a448c) main_cset6_slider_pane_g12

0x7d3c,	// (0x000a4498) main_cset6_slider_pane_g13_ParamLimits

0x7d3c,	// (0x000a4498) main_cset6_slider_pane_g13

0x7d48,	// (0x000a44a4) main_cset6_slider_pane_g14_ParamLimits

0x7d48,	// (0x000a44a4) main_cset6_slider_pane_g14

0x7d54,	// (0x000a44b0) main_cset6_slider_pane_g15_ParamLimits

0x7d54,	// (0x000a44b0) main_cset6_slider_pane_g15

0x7d6c,	// (0x000a44c8) main_cset6_slider_pane_g16_ParamLimits

0x7d6c,	// (0x000a44c8) main_cset6_slider_pane_g16

0x7d78,	// (0x000a44d4) main_cset6_slider_pane_g17_ParamLimits

0x7d78,	// (0x000a44d4) main_cset6_slider_pane_g17

0x0011,

0xfb8b,	// (0x000ac2e7) main_cset6_slider_pane_g_ParamLimits

0xfb8b,	// (0x000ac2e7) main_cset6_slider_pane_g

0xdf8c,	// (0x000aa6e8) main_cset6_slider_pane_t1_ParamLimits

0xdf8c,	// (0x000aa6e8) main_cset6_slider_pane_t1

0x7d9c,	// (0x000a44f8) main_cset6_slider_pane_t2_ParamLimits

0x7d9c,	// (0x000a44f8) main_cset6_slider_pane_t2

0x7dc7,	// (0x000a4523) main_cset6_slider_pane_t3_ParamLimits

0x7dc7,	// (0x000a4523) main_cset6_slider_pane_t3

0x7df2,	// (0x000a454e) main_cset6_slider_pane_t4_ParamLimits

0x7df2,	// (0x000a454e) main_cset6_slider_pane_t4

0x7e1d,	// (0x000a4579) main_cset6_slider_pane_t5_ParamLimits

0x7e1d,	// (0x000a4579) main_cset6_slider_pane_t5

0xdfcd,	// (0x000aa729) main_cset6_slider_pane_t7_ParamLimits

0xdfcd,	// (0x000aa729) main_cset6_slider_pane_t7

0x7e48,	// (0x000a45a4) main_cset6_slider_pane_t8_ParamLimits

0x7e48,	// (0x000a45a4) main_cset6_slider_pane_t8

0x7e6c,	// (0x000a45c8) main_cset6_slider_pane_t9_ParamLimits

0x7e6c,	// (0x000a45c8) main_cset6_slider_pane_t9

0x7e90,	// (0x000a45ec) main_cset6_slider_pane_t10_ParamLimits

0x7e90,	// (0x000a45ec) main_cset6_slider_pane_t10

0x7eb4,	// (0x000a4610) main_cset6_slider_pane_t11_ParamLimits

0x7eb4,	// (0x000a4610) main_cset6_slider_pane_t11

0xe003,	// (0x000aa75f) main_cset6_slider_pane_t14_ParamLimits

0xe003,	// (0x000aa75f) main_cset6_slider_pane_t14

0xe03c,	// (0x000aa798) main_cset6_slider_pane_t15_ParamLimits

0xe03c,	// (0x000aa798) main_cset6_slider_pane_t15

0x000b,

0xfbb0,	// (0x000ac30c) main_cset6_slider_pane_t_ParamLimits

0xfbb0,	// (0x000ac30c) main_cset6_slider_pane_t

0xd944,	// (0x000aa0a0) cset_slider_pane_g1_copy1

0xd94d,	// (0x000aa0a9) cset_slider_pane_g2_copy1

0xd956,	// (0x000aa0b2) cset_slider_pane_g3_copy1

0x9c5a,	// (0x000a63b6) bg_popup_sub_pane_cp011_copy1

0xe075,	// (0x000aa7d1) main_cset_text_pane_g1_copy1

0xd91a,	// (0x000aa076) main_cset_text_pane_t1_copy1

0xd928,	// (0x000aa084) main_cset_text_pane_t2_copy1

0xd936,	// (0x000aa092) main_cset_text_pane_t3_copy1

0xd9a6,	// (0x000aa102) main_cset_text_pane_t4_copy1

0xd9b4,	// (0x000aa110) main_cset_text_pane_t5_copy1

0xe07d,	// (0x000aa7d9) main_cset_text_pane_t6_copy1

0xe08b,	// (0x000aa7e7) main_cset_text_pane_t7_copy1

0x7fa7,	// (0x000a4703) main_cset_text2_pane_t1_copy1

0xa2df,	// (0x000a6a3b) main_ncimui_pane

0x4533,	// (0x000a0c8f) popup_query_ncimui_window_ParamLimits

0x4533,	// (0x000a0c8f) popup_query_ncimui_window

0xaba9,	// (0x000a7305) field_cale_ev2_pane_g4_ParamLimits

0xaba9,	// (0x000a7305) field_cale_ev2_pane_g4

0x5e2b,	// (0x000a2587) cell_video_dialer_keypad_pane_g2_ParamLimits

0x5e2b,	// (0x000a2587) cell_video_dialer_keypad_pane_g2

0x0001,

0xf895,	// (0x000abff1) cell_video_dialer_keypad_pane_g_ParamLimits

0xf895,	// (0x000abff1) cell_video_dialer_keypad_pane_g

0x5e43,	// (0x000a259f) cell_video_dialer_keypad_pane_t1

0x9c5a,	// (0x000a63b6) bg_popup_window_pane_cp012

0xb1ea,	// (0x000a7946) heading_pane_cp06

0xe0b7,	// (0x000aa813) ncim_query_content_pane

0x9c5a,	// (0x000a63b6) bg_popup_heading_pane_cp01

0xe0bf,	// (0x000aa81b) ncim_heading_pane_t1

0xe0cd,	// (0x000aa829) ncim_indicator_popup_pane

0xe0df,	// (0x000aa83b) ncim_query_button_pane

0xe0f5,	// (0x000aa851) ncim_query_content_pane_t1

0xe107,	// (0x000aa863) ncim_query_content_pane_t2

0x0005,

0xfbf4,	// (0x000ac350) ncim_query_content_pane_t

0xe141,	// (0x000aa89d) ncim_query_list_pane

0xe153,	// (0x000aa8af) ncim_query_popup_pane

0xe0cd,	// (0x000aa829) ncim_indicator_popup_pane_ParamLimits

0x8103,	// (0x000a485f) ncim_query_content_pane_g1_ParamLimits

0x8103,	// (0x000a485f) ncim_query_content_pane_g1

0xe0f5,	// (0x000aa851) ncim_query_content_pane_t1_ParamLimits

0xe107,	// (0x000aa863) ncim_query_content_pane_t2_ParamLimits

0x810f,	// (0x000a486b) ncim_query_content_pane_t3_ParamLimits

0x810f,	// (0x000a486b) ncim_query_content_pane_t3

0x812c,	// (0x000a4888) ncim_query_content_pane_t4_ParamLimits

0x812c,	// (0x000a4888) ncim_query_content_pane_t4

0x8149,	// (0x000a48a5) ncim_query_content_pane_t5_ParamLimits

0x8149,	// (0x000a48a5) ncim_query_content_pane_t5

0xe119,	// (0x000aa875) ncim_query_content_pane_t6_ParamLimits

0xe119,	// (0x000aa875) ncim_query_content_pane_t6

0xfbf4,	// (0x000ac350) ncim_query_content_pane_t_ParamLimits

0xe141,	// (0x000aa89d) ncim_query_list_pane_ParamLimits

0xe153,	// (0x000aa8af) ncim_query_popup_pane_ParamLimits

0xe167,	// (0x000aa8c3) wait_bar_pane_cp04

0x9c5a,	// (0x000a63b6) input_focus_pane_cp011

0xe16f,	// (0x000aa8cb) ncim_query_popup_pane_t1

0xe17d,	// (0x000aa8d9) ncim_list_query_list_pane_ParamLimits

0xe17d,	// (0x000aa8d9) ncim_list_query_list_pane

0x9c5a,	// (0x000a63b6) bg_button_pane_cp027

0xe190,	// (0x000aa8ec) ncim_query_button_pane_g1

0x9c5a,	// (0x000a63b6) list_highlight_pane_cp012

0xe19a,	// (0x000aa8f6) ncim_list_query_list_pane_g1

0xe1a2,	// (0x000aa8fe) ncim_list_query_list_pane_t1

0x651d,	// (0x000a2c79) cam4_indicators_pane_g3_ParamLimits

0x651d,	// (0x000a2c79) cam4_indicators_pane_g3

0x6637,	// (0x000a2d93) vid4_indicators_pane_g5_ParamLimits

0x6637,	// (0x000a2d93) vid4_indicators_pane_g5

0x76c3,	// (0x000a3e1f) vid4_progress_pane_g5_ParamLimits

0x76c3,	// (0x000a3e1f) vid4_progress_pane_g5

0x7fd9,	// (0x000a4735) main_ncimui_pane_g1

0x8045,	// (0x000a47a1) ncimui_group_query_pane_ParamLimits

0x8045,	// (0x000a47a1) ncimui_group_query_pane

0x809f,	// (0x000a47fb) ncimui_list_pane_ParamLimits

0x809f,	// (0x000a47fb) ncimui_list_pane

0x80c6,	// (0x000a4822) ncimui_text_pane_ParamLimits

0x80c6,	// (0x000a4822) ncimui_text_pane

0x8166,	// (0x000a48c2) ncimui_text_pane_t1_ParamLimits

0x8166,	// (0x000a48c2) ncimui_text_pane_t1

0xe1b0,	// (0x000aa90c) ncimui_list_single_graphic_pane_ParamLimits

0xe1b0,	// (0x000aa90c) ncimui_list_single_graphic_pane

0x8185,	// (0x000a48e1) ncimui_query_pane_ParamLimits

0x8185,	// (0x000a48e1) ncimui_query_pane

0x9c5a,	// (0x000a63b6) list_highlight_pane_cp013

0xe1c0,	// (0x000aa91c) ncim_list_query_list_pane_t1_copy1

0xe19a,	// (0x000aa8f6) ncim_list_single_graphic_pane_g1

0xe1ce,	// (0x000aa92a) ncim_query_button_pane_cp01

0xe1da,	// (0x000aa936) ncim_query_entry_pane_ParamLimits

0xe1da,	// (0x000aa936) ncim_query_entry_pane

0xe1ed,	// (0x000aa949) ncimui_query_pane_g1

0xe1f9,	// (0x000aa955) ncimui_query_pane_t1_ParamLimits

0xe1f9,	// (0x000aa955) ncimui_query_pane_t1

0xa2df,	// (0x000a6a3b) input_focus_pane_cp012

0xe212,	// (0x000aa96e) ncim_query_entry_pane_t1

0xa891,	// (0x000a6fed) main_im_pane_ParamLimits

0xa2df,	// (0x000a6a3b) main_mobtv_pane_ParamLimits

0xa2df,	// (0x000a6a3b) main_mobtv_pane

0x7d84,	// (0x000a44e0) main_cset6_slider_pane_g18_ParamLimits

0x7d84,	// (0x000a44e0) main_cset6_slider_pane_g18

0x7d90,	// (0x000a44ec) main_cset6_slider_pane_g19_ParamLimits

0x7d90,	// (0x000a44ec) main_cset6_slider_pane_g19

0xd681,	// (0x000a9ddd) bg_main_mobtv_pane_ParamLimits

0xd681,	// (0x000a9ddd) bg_main_mobtv_pane

0x8198,	// (0x000a48f4) main_mobtv_info_pane

0x81a3,	// (0x000a48ff) main_mobtv_loading_pane_ParamLimits

0x81a3,	// (0x000a48ff) main_mobtv_loading_pane

0xe224,	// (0x000aa980) main_mobtv_pg_channel_list_pane

0xe22e,	// (0x000aa98a) main_mobtv_pg_hdr_pane

0x81b0,	// (0x000a490c) main_mobtv_programe_curr_pane_ParamLimits

0x81b0,	// (0x000a490c) main_mobtv_programe_curr_pane

0x81bd,	// (0x000a4919) main_mobtv_programe_next_pane_ParamLimits

0x81bd,	// (0x000a4919) main_mobtv_programe_next_pane

0xe237,	// (0x000aa993) popup_mobtv_noti_window

0xccb1,	// (0x000a940d) main_tv_pg_hdr_pane_g1

0xe241,	// (0x000aa99d) main_tv_pg_hdr_pane_g2

0xe249,	// (0x000aa9a5) main_tv_pg_hdr_pane_g3

0xe251,	// (0x000aa9ad) main_tv_pg_hdr_pane_g4

0xe259,	// (0x000aa9b5) main_tv_pg_hdr_pane_g5

0xe263,	// (0x000aa9bf) main_tv_pg_hdr_pane_g6

0xe26d,	// (0x000aa9c9) main_tv_pg_hdr_pane_g7

0xe277,	// (0x000aa9d3) main_tv_pg_hdr_pane_g8

0xe281,	// (0x000aa9dd) main_tv_pg_hdr_pane_g9

0xe28b,	// (0x000aa9e7) main_tv_pg_hdr_pane_g10

0xe295,	// (0x000aa9f1) main_tv_pg_hdr_pane_g11

0x000a,

0xfc01,	// (0x000ac35d) main_tv_pg_hdr_pane_g

0xe29f,	// (0x000aa9fb) main_tv_pg_hdr_pane_t1

0xe2ad,	// (0x000aaa09) main_tv_pg_hdr_pane_t2

0xe2bb,	// (0x000aaa17) main_tv_pg_hdr_pane_t3

0xe2cb,	// (0x000aaa27) main_tv_pg_hdr_pane_t4

0xe2db,	// (0x000aaa37) main_tv_pg_hdr_pane_t5

0x0004,

0xfc18,	// (0x000ac374) main_tv_pg_hdr_pane_t

0xe2eb,	// (0x000aaa47) single_mobtv_pg_channel_pane_ParamLimits

0xe2eb,	// (0x000aaa47) single_mobtv_pg_channel_pane

0xe2fd,	// (0x000aaa59) single_mobtv_pg_channel_table_pane

0xe306,	// (0x000aaa62) single_mobtv_pg_channel_thumb_pane

0xe30f,	// (0x000aaa6b) single_tv_pg_channel_pane_g1

0xe318,	// (0x000aaa74) single_tv_pg_channel_pane_g2

0x0001,

0xfc23,	// (0x000ac37f) single_tv_pg_channel_pane_g

0xcee9,	// (0x000a9645) bg_single_mobtv_pg_channel_thumb_pane_ParamLimits

0xcee9,	// (0x000a9645) bg_single_mobtv_pg_channel_thumb_pane

0xe321,	// (0x000aaa7d) single_mobtv_pg_channel_thumb_pane_g1_ParamLimits

0xe321,	// (0x000aaa7d) single_mobtv_pg_channel_thumb_pane_g1

0xe32f,	// (0x000aaa8b) single_mobtv_pg_channel_thumb_pane_g2_ParamLimits

0xe32f,	// (0x000aaa8b) single_mobtv_pg_channel_thumb_pane_g2

0xe33b,	// (0x000aaa97) single_mobtv_pg_channel_thumb_pane_g3_ParamLimits

0xe33b,	// (0x000aaa97) single_mobtv_pg_channel_thumb_pane_g3

0x0002,

0xfc28,	// (0x000ac384) single_mobtv_pg_channel_thumb_pane_g_ParamLimits

0xfc28,	// (0x000ac384) single_mobtv_pg_channel_thumb_pane_g

0xe347,	// (0x000aaaa3) single_mobtv_pg_channel_thumb_pane_t1

0xe355,	// (0x000aaab1) single_mobtv_pg_channel_thumb_pane_t2

0x0001,

0xfc2f,	// (0x000ac38b) single_mobtv_pg_channel_thumb_pane_t

0xccb1,	// (0x000a940d) bg_single_mobtv_pg_channel_table_pane_g1

0xccb1,	// (0x000a940d) bg_single_mobtv_pg_channel_table_pane_g2

0x0001,

0xf6e1,	// (0x000abe3d) bg_single_mobtv_pg_channel_table_pane_g

0xe363,	// (0x000aaabf) single_mobtv_pg_channel_table_pane_t1

0xe371,	// (0x000aaacd) single_mobtv_pg_channel_table_pane_t2

0x0001,

0xfc34,	// (0x000ac390) single_mobtv_pg_channel_table_pane_t

0x81d2,	// (0x000a492e) main_mobtv_info_pane_g1_ParamLimits

0x81d2,	// (0x000a492e) main_mobtv_info_pane_g1

0x81ee,	// (0x000a494a) main_mobtv_info_pane_t1_ParamLimits

0x81ee,	// (0x000a494a) main_mobtv_info_pane_t1

0x8266,	// (0x000a49c2) main_mobtv_info_pane_t2_ParamLimits

0x8266,	// (0x000a49c2) main_mobtv_info_pane_t2

0x0002,

0xfc3e,	// (0x000ac39a) main_mobtv_info_pane_t_ParamLimits

0xfc3e,	// (0x000ac39a) main_mobtv_info_pane_t

0x82f7,	// (0x000a4a53) wait_bar_pane_cp05

0x8309,	// (0x000a4a65) main_mobtv_loading_pane_g1_ParamLimits

0x8309,	// (0x000a4a65) main_mobtv_loading_pane_g1

0x8315,	// (0x000a4a71) main_mobtv_loading_pane_g2_ParamLimits

0x8315,	// (0x000a4a71) main_mobtv_loading_pane_g2

0x8321,	// (0x000a4a7d) main_mobtv_loading_pane_g3_ParamLimits

0x8321,	// (0x000a4a7d) main_mobtv_loading_pane_g3

0x0002,

0xfc45,	// (0x000ac3a1) main_mobtv_loading_pane_g_ParamLimits

0xfc45,	// (0x000ac3a1) main_mobtv_loading_pane_g

0xe37f,	// (0x000aaadb) main_mobtv_loading_pane_t1_ParamLimits

0xe37f,	// (0x000aaadb) main_mobtv_loading_pane_t1

0xe397,	// (0x000aaaf3) main_mobtv_loading_pane_t2_ParamLimits

0xe397,	// (0x000aaaf3) main_mobtv_loading_pane_t2

0x0001,

0xfc4c,	// (0x000ac3a8) main_mobtv_loading_pane_t_ParamLimits

0xfc4c,	// (0x000ac3a8) main_mobtv_loading_pane_t

0x832f,	// (0x000a4a8b) wait_bar_pane_cp06_ParamLimits

0x832f,	// (0x000a4a8b) wait_bar_pane_cp06

0xe3bb,	// (0x000aab17) main_mobtv_programe_curr_pane_t1

0xe3c9,	// (0x000aab25) main_mobtv_programe_curr_pane_t2

0x0001,

0xfc51,	// (0x000ac3ad) main_mobtv_programe_curr_pane_t

0xe3d7,	// (0x000aab33) main_mobtv_programe_next_pane_t1

0xe3e5,	// (0x000aab41) main_mobtv_programe_next_pane_t2

0xe3f3,	// (0x000aab4f) main_mobtv_programe_next_pane_t3

0x0002,

0xfc56,	// (0x000ac3b2) main_mobtv_programe_next_pane_t

0x9c5a,	// (0x000a63b6) bg_popup_mobtv_noti_window_pane

0xe401,	// (0x000aab5d) popup_mobtv_noti_window_g1

0xe409,	// (0x000aab65) popup_mobtv_noti_window_t1

0xe417,	// (0x000aab73) popup_mobtv_noti_window_t2

0x0001,

0xfc5d,	// (0x000ac3b9) popup_mobtv_noti_window_t

0xccb1,	// (0x000a940d) bg_popup_mobtv_noti_window_pane_g1

0x9c5a,	// (0x000a63b6) sc_clock_pane

0x9c5a,	// (0x000a63b6) main_fs_bigclock_pane

0x78e0,	// (0x000a403c) blid2_tripm_pane_t4_ParamLimits

0x78e0,	// (0x000a403c) blid2_tripm_pane_t4

0x833b,	// (0x000a4a97) sc_clock_pane_g1_ParamLimits

0x833b,	// (0x000a4a97) sc_clock_pane_g1

0x8349,	// (0x000a4aa5) sc_clock_pane_t1_ParamLimits

0x8349,	// (0x000a4aa5) sc_clock_pane_t1

0x835e,	// (0x000a4aba) sc_clock_pane_t2_ParamLimits

0x835e,	// (0x000a4aba) sc_clock_pane_t2

0x8370,	// (0x000a4acc) sc_clock_pane_t3_ParamLimits

0x8370,	// (0x000a4acc) sc_clock_pane_t3

0x0004,

0xfc62,	// (0x000ac3be) sc_clock_pane_t_ParamLimits

0xfc62,	// (0x000ac3be) sc_clock_pane_t

0x9276,	// (0x000a59d2) main_fs_bigclock_indicator_pane_ParamLimits

0x9276,	// (0x000a59d2) main_fs_bigclock_indicator_pane

0x83fd,	// (0x000a4b59) main_fs_bigclock_pane_g1_ParamLimits

0x83fd,	// (0x000a4b59) main_fs_bigclock_pane_g1

0x9282,	// (0x000a59de) main_fs_bigclock_pane_t1_ParamLimits

0x9282,	// (0x000a59de) main_fs_bigclock_pane_t1

0x9294,	// (0x000a59f0) main_fs_bigclock_pane_t2_ParamLimits

0x9294,	// (0x000a59f0) main_fs_bigclock_pane_t2

0x92a8,	// (0x000a5a04) main_fs_bigclock_pane_t3_ParamLimits

0x92a8,	// (0x000a5a04) main_fs_bigclock_pane_t3

0x0002,

0xfe6c,	// (0x000ac5c8) main_fs_bigclock_pane_t_ParamLimits

0xfe6c,	// (0x000ac5c8) main_fs_bigclock_pane_t

0xec6b,	// (0x000ab3c7) main_fs_bigclock_indicator_pane_g1

0xe0e7,	// (0x000aa843) ncim_query_content_pane_g2_ParamLimits

0xe0e7,	// (0x000aa843) ncim_query_content_pane_g2

0x0001,

0xfbef,	// (0x000ac34b) ncim_query_content_pane_g_ParamLimits

0xfbef,	// (0x000ac34b) ncim_query_content_pane_g

0x8382,	// (0x000a4ade) sc_clock_pane_t4_ParamLimits

0x8382,	// (0x000a4ade) sc_clock_pane_t4

0xa2df,	// (0x000a6a3b) main_radioblah_pane

0xd5ec,	// (0x000a9d48) cell_call4_button_pane_t1_copy1_ParamLimits

0xd5ec,	// (0x000a9d48) cell_call4_button_pane_t1_copy1

0x7ff5,	// (0x000a4751) main_ncimui_pane_t1_ParamLimits

0x7ff5,	// (0x000a4751) main_ncimui_pane_t1

0x800f,	// (0x000a476b) main_ncimui_pane_t2_ParamLimits

0x800f,	// (0x000a476b) main_ncimui_pane_t2

0x0002,

0xfbe8,	// (0x000ac344) main_ncimui_pane_t_ParamLimits

0xfbe8,	// (0x000ac344) main_ncimui_pane_t

0xe563,	// (0x000aacbf) main_radioblah_anim_pane_ParamLimits

0xe563,	// (0x000aacbf) main_radioblah_anim_pane

0xe574,	// (0x000aacd0) main_radioblah_info_pane_ParamLimits

0xe574,	// (0x000aacd0) main_radioblah_info_pane

0xe588,	// (0x000aace4) main_radioblah_pane_t1_ParamLimits

0xe588,	// (0x000aace4) main_radioblah_pane_t1

0xe5a4,	// (0x000aad00) main_radioblah_pane_t2_ParamLimits

0xe5a4,	// (0x000aad00) main_radioblah_pane_t2

0x0003,

0xfc83,	// (0x000ac3df) main_radioblah_pane_t_ParamLimits

0xfc83,	// (0x000ac3df) main_radioblah_pane_t

0x844f,	// (0x000a4bab) main_radioblah_rocker_ctrl_pane_ParamLimits

0x844f,	// (0x000a4bab) main_radioblah_rocker_ctrl_pane

0xe607,	// (0x000aad63) main_radioblah_info_pane_t1_ParamLimits

0xe607,	// (0x000aad63) main_radioblah_info_pane_t1

0x8498,	// (0x000a4bf4) main_radioblah_info_pane_t2_ParamLimits

0x8498,	// (0x000a4bf4) main_radioblah_info_pane_t2

0x0003,

0xfc8c,	// (0x000ac3e8) main_radioblah_info_pane_t_ParamLimits

0xfc8c,	// (0x000ac3e8) main_radioblah_info_pane_t

0xccb1,	// (0x000a940d) main_radioblah_rocker_ctrl_pane_g1

0x8548,	// (0x000a4ca4) main_radioblah_rocker_ctrl_pane_g2

0x8550,	// (0x000a4cac) main_radioblah_rocker_ctrl_pane_g3

0x8558,	// (0x000a4cb4) main_radioblah_rocker_ctrl_pane_g4

0x8560,	// (0x000a4cbc) main_radioblah_rocker_ctrl_pane_g5

0x8568,	// (0x000a4cc4) main_radioblah_rocker_ctrl_pane_g6

0x0005,

0xfc95,	// (0x000ac3f1) main_radioblah_rocker_ctrl_pane_g

0x7fa7,	// (0x000a4703) main_cset_text2_pane_t1_copy1_ParamLimits

0x643c,	// (0x000a2b98) cam4_image_uncrop_qvga_pane

0x658f,	// (0x000a2ceb) vid4_image_uncrop_qcif_pane

0x7a72,	// (0x000a41ce) cam6_image_uncrop_qvga_pane_ParamLimits

0x7a72,	// (0x000a41ce) cam6_image_uncrop_qvga_pane

0xddea,	// (0x000aa546) vid6_image_uncrop_qcif_pane_ParamLimits

0xddea,	// (0x000aa546) vid6_image_uncrop_qcif_pane

0x9c5a,	// (0x000a63b6) bg_popup_preview_window_pane_cp03

0xe099,	// (0x000aa7f5) list_cset_text2_pane

0xe0a1,	// (0x000aa7fd) main_cset6_text2_pane_g1

0xe0a9,	// (0x000aa805) main_cset6_text2_pane_t1

0x8570,	// (0x000a4ccc) list_cset_text2_pane_t1_ParamLimits

0x8570,	// (0x000a4ccc) list_cset_text2_pane_t1

0xa2df,	// (0x000a6a3b) main_radioblah_pane_ParamLimits

0x82e3,	// (0x000a4a3f) main_mobtv_info_pane_t3_ParamLimits

0x82e3,	// (0x000a4a3f) main_mobtv_info_pane_t3

0x843d,	// (0x000a4b99) main_radioblah_pane_g1

0x8468,	// (0x000a4bc4) main_radioblah_info_pane_g1

0x84ed,	// (0x000a4c49) main_radioblah_info_pane_t3_ParamLimits

0x84ed,	// (0x000a4c49) main_radioblah_info_pane_t3

0x30cd,	// (0x0009f829) highlight_cell_cale_month_pane_ParamLimits

0x30cd,	// (0x0009f829) highlight_cell_cale_month_pane

0x9c5a,	// (0x000a63b6) main_phob_fisheye_pane

0xcfc5,	// (0x000a9721) scroll_pane_cp0031_ParamLimits

0xcfc5,	// (0x000a9721) scroll_pane_cp0031

0xdefc,	// (0x000aa658) wait_bar_pane_cp08_ParamLimits

0x7c80,	// (0x000a43dc) cset_list_set_pane_copy1_ParamLimits

0xe641,	// (0x000aad9d) highlight_cell_cale_month_pane_g1

0x8587,	// (0x000a4ce3) highlight_cell_cale_month_pane_t1

0xdba8,	// (0x000aa304) list_gen_pane_cp01

0xd7bf,	// (0x000a9f1b) scroll_pane_01

0x8595,	// (0x000a4cf1) list_single_double_fisheye_pane

0x859e,	// (0x000a4cfa) list_double_fisheye_pane_g1_ParamLimits

0x859e,	// (0x000a4cfa) list_double_fisheye_pane_g1

0x85aa,	// (0x000a4d06) list_double_fisheye_pane_g2_ParamLimits

0x85aa,	// (0x000a4d06) list_double_fisheye_pane_g2

0x85be,	// (0x000a4d1a) list_double_fisheye_pane_g3_ParamLimits

0x85be,	// (0x000a4d1a) list_double_fisheye_pane_g3

0x0004,

0xfca2,	// (0x000ac3fe) list_double_fisheye_pane_g_ParamLimits

0xfca2,	// (0x000ac3fe) list_double_fisheye_pane_g

0x85e7,	// (0x000a4d43) list_double_fisheye_pane_t1_ParamLimits

0x85e7,	// (0x000a4d43) list_double_fisheye_pane_t1

0x8602,	// (0x000a4d5e) list_double_fisheye_pane_t2_ParamLimits

0x8602,	// (0x000a4d5e) list_double_fisheye_pane_t2

0x0001,

0xfcad,	// (0x000ac409) list_double_fisheye_pane_t_ParamLimits

0xfcad,	// (0x000ac409) list_double_fisheye_pane_t

0x9c5a,	// (0x000a63b6) main_call5_pane

0x83a8,	// (0x000a4b04) sc_swipe_pane_ParamLimits

0x83a8,	// (0x000a4b04) sc_swipe_pane

0x8630,	// (0x000a4d8c) call5_image_pane_ParamLimits

0x8630,	// (0x000a4d8c) call5_image_pane

0x8642,	// (0x000a4d9e) call5_swipe_1_pane_ParamLimits

0x8642,	// (0x000a4d9e) call5_swipe_1_pane

0x864e,	// (0x000a4daa) call5_swipe_2_pane_ParamLimits

0x864e,	// (0x000a4daa) call5_swipe_2_pane

0x866a,	// (0x000a4dc6) popup_call5_audio_first_window_ParamLimits

0x866a,	// (0x000a4dc6) popup_call5_audio_first_window

0xcee9,	// (0x000a9645) call5_swipe_1_pane_g1_ParamLimits

0xcee9,	// (0x000a9645) call5_swipe_1_pane_g1

0xe649,	// (0x000aada5) call5_swipe_1_pane_g2_ParamLimits

0xe649,	// (0x000aada5) call5_swipe_1_pane_g2

0x0001,

0xfcb2,	// (0x000ac40e) call5_swipe_1_pane_g_ParamLimits

0xfcb2,	// (0x000ac40e) call5_swipe_1_pane_g

0xe655,	// (0x000aadb1) call5_swipe_1_pane_t1_ParamLimits

0xe655,	// (0x000aadb1) call5_swipe_1_pane_t1

0xcee9,	// (0x000a9645) call5_swipe_2_pane_g1_ParamLimits

0xcee9,	// (0x000a9645) call5_swipe_2_pane_g1

0xe66a,	// (0x000aadc6) call5_swipe_2_pane_g2_ParamLimits

0xe66a,	// (0x000aadc6) call5_swipe_2_pane_g2

0x0001,

0xfcb7,	// (0x000ac413) call5_swipe_2_pane_g_ParamLimits

0xfcb7,	// (0x000ac413) call5_swipe_2_pane_g

0xe676,	// (0x000aadd2) call5_swipe_2_pane_t1_ParamLimits

0xe676,	// (0x000aadd2) call5_swipe_2_pane_t1

0xe68b,	// (0x000aade7) sc_swipe_pane_g1_ParamLimits

0xe68b,	// (0x000aade7) sc_swipe_pane_g1

0xe698,	// (0x000aadf4) sc_swipe_pane_g2_ParamLimits

0xe698,	// (0x000aadf4) sc_swipe_pane_g2

0x0001,

0xfcbc,	// (0x000ac418) sc_swipe_pane_g_ParamLimits

0xfcbc,	// (0x000ac418) sc_swipe_pane_g

0xe6a4,	// (0x000aae00) sc_swipe_pane_t1_ParamLimits

0xe6a4,	// (0x000aae00) sc_swipe_pane_t1

0x9c5a,	// (0x000a63b6) main_cmail_launcher_pane

0x867a,	// (0x000a4dd6) aid_size_cell_cmail_l_ParamLimits

0x867a,	// (0x000a4dd6) aid_size_cell_cmail_l

0x868a,	// (0x000a4de6) grid_cmail_l_pane_ParamLimits

0x868a,	// (0x000a4de6) grid_cmail_l_pane

0x869a,	// (0x000a4df6) cell_cmail_l_pane_ParamLimits

0x869a,	// (0x000a4df6) cell_cmail_l_pane

0x86b0,	// (0x000a4e0c) cell_cmail_l_pane_g1_ParamLimits

0x86b0,	// (0x000a4e0c) cell_cmail_l_pane_g1

0x86bc,	// (0x000a4e18) cell_cmail_l_pane_t1_ParamLimits

0x86bc,	// (0x000a4e18) cell_cmail_l_pane_t1

0xe6b9,	// (0x000aae15) cell_cmail_l_pane_t2_ParamLimits

0xe6b9,	// (0x000aae15) cell_cmail_l_pane_t2

0x0001,

0xfcc1,	// (0x000ac41d) cell_cmail_l_pane_t_ParamLimits

0xfcc1,	// (0x000ac41d) cell_cmail_l_pane_t

0xa2df,	// (0x000a6a3b) grid_highlight_pane_cp018_ParamLimits

0xa2df,	// (0x000a6a3b) grid_highlight_pane_cp018

0x0cd7,	// (0x0009d433) main2_pane_ParamLimits

0x0cd7,	// (0x0009d433) main2_pane

0xa93c,	// (0x000a7098) popup_sp_fs_action_menu_bg_pane_g1

0xa944,	// (0x000a70a0) popup_sp_fs_action_menu_bg_pane_g2

0xa94c,	// (0x000a70a8) popup_sp_fs_action_menu_bg_pane_g3

0xa954,	// (0x000a70b0) popup_sp_fs_action_menu_bg_pane_g4

0xa95c,	// (0x000a70b8) popup_sp_fs_action_menu_bg_pane_g5

0xa964,	// (0x000a70c0) popup_sp_fs_action_menu_bg_pane_g6

0xa96c,	// (0x000a70c8) popup_sp_fs_action_menu_bg_pane_g7

0xa974,	// (0x000a70d0) popup_sp_fs_action_menu_bg_pane_g8

0xa97c,	// (0x000a70d8) popup_sp_fs_action_menu_bg_pane_g9

0xa984,	// (0x000a70e0) popup_sp_fs_action_menu_bg_pane_g10

0xa984,	// (0x000a70e0) popup_sp_fs_action_menu_bg_pane_g11

0x000a,

0xf18d,	// (0x000ab8e9) popup_sp_fs_action_menu_bg_pane_g

0x1f11,	// (0x0009e66d) list_medium_line_x2_t3_g3_g1_ParamLimits

0x1f11,	// (0x0009e66d) list_medium_line_x2_t3_g3_g1

0x1f1d,	// (0x0009e679) list_medium_line_x2_t3_g3_g2_ParamLimits

0x1f1d,	// (0x0009e679) list_medium_line_x2_t3_g3_g2

0x1f29,	// (0x0009e685) list_medium_line_x2_t3_g3_g3_ParamLimits

0x1f29,	// (0x0009e685) list_medium_line_x2_t3_g3_g3

0x0002,

0xf23d,	// (0x000ab999) list_medium_line_x2_t3_g3_g_ParamLimits

0xf23d,	// (0x000ab999) list_medium_line_x2_t3_g3_g

0x1f35,	// (0x0009e691) list_medium_line_x2_t3_g3_t1_ParamLimits

0x1f35,	// (0x0009e691) list_medium_line_x2_t3_g3_t1

0x1f4a,	// (0x0009e6a6) list_medium_line_x2_t3_g3_t2_ParamLimits

0x1f4a,	// (0x0009e6a6) list_medium_line_x2_t3_g3_t2

0x1f5e,	// (0x0009e6ba) list_medium_line_x2_t3_g3_t3_ParamLimits

0x1f5e,	// (0x0009e6ba) list_medium_line_x2_t3_g3_t3

0x0002,

0xf244,	// (0x000ab9a0) list_medium_line_x2_t3_g3_t_ParamLimits

0xf244,	// (0x000ab9a0) list_medium_line_x2_t3_g3_t

0x1f11,	// (0x0009e66d) list_medium_line_x2_t3_g2_g1_ParamLimits

0x1f11,	// (0x0009e66d) list_medium_line_x2_t3_g2_g1

0x1f29,	// (0x0009e685) list_medium_line_x2_t3_g2_g2_ParamLimits

0x1f29,	// (0x0009e685) list_medium_line_x2_t3_g2_g2

0x0001,

0xf24b,	// (0x000ab9a7) list_medium_line_x2_t3_g2_g_ParamLimits

0xf24b,	// (0x000ab9a7) list_medium_line_x2_t3_g2_g

0x1f73,	// (0x0009e6cf) list_medium_line_x2_t3_g2_t1_ParamLimits

0x1f73,	// (0x0009e6cf) list_medium_line_x2_t3_g2_t1

0x1f89,	// (0x0009e6e5) list_medium_line_x2_t3_g2_t2_ParamLimits

0x1f89,	// (0x0009e6e5) list_medium_line_x2_t3_g2_t2

0x1f9b,	// (0x0009e6f7) list_medium_line_x2_t3_g2_t3_ParamLimits

0x1f9b,	// (0x0009e6f7) list_medium_line_x2_t3_g2_t3

0x0002,

0xf250,	// (0x000ab9ac) list_medium_line_x2_t3_g2_t_ParamLimits

0xf250,	// (0x000ab9ac) list_medium_line_x2_t3_g2_t

0x1f11,	// (0x0009e66d) list_medium_line_x2_t4_g4_g1_ParamLimits

0x1f11,	// (0x0009e66d) list_medium_line_x2_t4_g4_g1

0x1fb9,	// (0x0009e715) list_medium_line_x2_t4_g4_g2_ParamLimits

0x1fb9,	// (0x0009e715) list_medium_line_x2_t4_g4_g2

0x1f1d,	// (0x0009e679) list_medium_line_x2_t4_g4_g3_ParamLimits

0x1f1d,	// (0x0009e679) list_medium_line_x2_t4_g4_g3

0x1fc5,	// (0x0009e721) list_medium_line_x2_t4_g4_g4_ParamLimits

0x1fc5,	// (0x0009e721) list_medium_line_x2_t4_g4_g4

0x0003,

0xf257,	// (0x000ab9b3) list_medium_line_x2_t4_g4_g_ParamLimits

0xf257,	// (0x000ab9b3) list_medium_line_x2_t4_g4_g

0x1fd1,	// (0x0009e72d) list_medium_line_x2_t4_g4_t1_ParamLimits

0x1fd1,	// (0x0009e72d) list_medium_line_x2_t4_g4_t1

0x1fe8,	// (0x0009e744) list_medium_line_x2_t4_g4_t2_ParamLimits

0x1fe8,	// (0x0009e744) list_medium_line_x2_t4_g4_t2

0x1ffd,	// (0x0009e759) list_medium_line_x2_t4_g4_t3_ParamLimits

0x1ffd,	// (0x0009e759) list_medium_line_x2_t4_g4_t3

0x200f,	// (0x0009e76b) list_medium_line_x2_t4_g4_t4_ParamLimits

0x200f,	// (0x0009e76b) list_medium_line_x2_t4_g4_t4

0x0003,

0xf260,	// (0x000ab9bc) list_medium_line_x2_t4_g4_t_ParamLimits

0xf260,	// (0x000ab9bc) list_medium_line_x2_t4_g4_t

0x1f11,	// (0x0009e66d) list_medium_line_x2_t2_g4_g1_ParamLimits

0x1f11,	// (0x0009e66d) list_medium_line_x2_t2_g4_g1

0x1fb9,	// (0x0009e715) list_medium_line_x2_t2_g4_g2_ParamLimits

0x1fb9,	// (0x0009e715) list_medium_line_x2_t2_g4_g2

0x1f1d,	// (0x0009e679) list_medium_line_x2_t2_g4_g3_ParamLimits

0x1f1d,	// (0x0009e679) list_medium_line_x2_t2_g4_g3

0x1f29,	// (0x0009e685) list_medium_line_x2_t2_g4_g4_ParamLimits

0x1f29,	// (0x0009e685) list_medium_line_x2_t2_g4_g4

0x0003,

0xf2c7,	// (0x000aba23) list_medium_line_x2_t2_g4_g_ParamLimits

0xf2c7,	// (0x000aba23) list_medium_line_x2_t2_g4_g

0x30f3,	// (0x0009f84f) list_medium_line_x2_t2_g4_t1_ParamLimits

0x30f3,	// (0x0009f84f) list_medium_line_x2_t2_g4_t1

0x1f5e,	// (0x0009e6ba) list_medium_line_x2_t2_g4_t2_ParamLimits

0x1f5e,	// (0x0009e6ba) list_medium_line_x2_t2_g4_t2

0x0001,

0xf2d0,	// (0x000aba2c) list_medium_line_x2_t2_g4_t_ParamLimits

0xf2d0,	// (0x000aba2c) list_medium_line_x2_t2_g4_t

0x1f11,	// (0x0009e66d) list_medium_line_x2_t2_g3_g1_ParamLimits

0x1f11,	// (0x0009e66d) list_medium_line_x2_t2_g3_g1

0x1f1d,	// (0x0009e679) list_medium_line_x2_t2_g3_g2_ParamLimits

0x1f1d,	// (0x0009e679) list_medium_line_x2_t2_g3_g2

0x1f29,	// (0x0009e685) list_medium_line_x2_t2_g3_g3_ParamLimits

0x1f29,	// (0x0009e685) list_medium_line_x2_t2_g3_g3

0x0002,

0xf23d,	// (0x000ab999) list_medium_line_x2_t2_g3_g_ParamLimits

0xf23d,	// (0x000ab999) list_medium_line_x2_t2_g3_g

0x3108,	// (0x0009f864) list_medium_line_x2_t2_g3_t1_ParamLimits

0x3108,	// (0x0009f864) list_medium_line_x2_t2_g3_t1

0x1f5e,	// (0x0009e6ba) list_medium_line_x2_t2_g3_t2_ParamLimits

0x1f5e,	// (0x0009e6ba) list_medium_line_x2_t2_g3_t2

0x0001,

0xf2d5,	// (0x000aba31) list_medium_line_x2_t2_g3_t_ParamLimits

0xf2d5,	// (0x000aba31) list_medium_line_x2_t2_g3_t

0x329e,	// (0x0009f9fa) main_sp_fs_list_pane_ParamLimits

0x329e,	// (0x0009f9fa) main_sp_fs_list_pane

0x32aa,	// (0x0009fa06) sp_fs_scroll_pane_ParamLimits

0x32aa,	// (0x0009fa06) sp_fs_scroll_pane

0x32b6,	// (0x0009fa12) list_medium_line_x2_t3_t1

0x32c6,	// (0x0009fa22) list_medium_line_x2_t3_t2

0x32d4,	// (0x0009fa30) list_medium_line_x2_t3_t3

0x0002,

0xf320,	// (0x000aba7c) list_medium_line_x2_t3_t

0x32e2,	// (0x0009fa3e) list_medium_line_x3_t4_t1

0x32f2,	// (0x0009fa4e) list_medium_line_x3_t4_t2

0x3300,	// (0x0009fa5c) list_medium_line_x3_t4_t3

0x32d4,	// (0x0009fa30) list_medium_line_x3_t4_t4

0x0003,

0xf327,	// (0x000aba83) list_medium_line_x3_t4_t

0x330e,	// (0x0009fa6a) list_medium_line_x4_t5_t1

0x331e,	// (0x0009fa7a) list_medium_line_x4_t5_t2

0x3300,	// (0x0009fa5c) list_medium_line_x4_t5_t3

0x332c,	// (0x0009fa88) list_medium_line_x4_t5_t4

0x32d4,	// (0x0009fa30) list_medium_line_x4_t5_t5

0x0004,

0xf330,	// (0x000aba8c) list_medium_line_x4_t5_t

0x1f11,	// (0x0009e66d) list_medium_line_t4_g4_g1_ParamLimits

0x1f11,	// (0x0009e66d) list_medium_line_t4_g4_g1

0x1fc5,	// (0x0009e721) list_medium_line_t4_g4_g2_ParamLimits

0x1fc5,	// (0x0009e721) list_medium_line_t4_g4_g2

0x333a,	// (0x0009fa96) list_medium_line_t4_g4_g3_ParamLimits

0x333a,	// (0x0009fa96) list_medium_line_t4_g4_g3

0x1f29,	// (0x0009e685) list_medium_line_t4_g4_g4_ParamLimits

0x1f29,	// (0x0009e685) list_medium_line_t4_g4_g4

0x0003,

0xf33b,	// (0x000aba97) list_medium_line_t4_g4_g_ParamLimits

0xf33b,	// (0x000aba97) list_medium_line_t4_g4_g

0x3346,	// (0x0009faa2) list_medium_line_t4_g4_t1_ParamLimits

0x3346,	// (0x0009faa2) list_medium_line_t4_g4_t1

0x335b,	// (0x0009fab7) list_medium_line_t4_g4_t2_ParamLimits

0x335b,	// (0x0009fab7) list_medium_line_t4_g4_t2

0x3371,	// (0x0009facd) list_medium_line_t4_g4_t3_ParamLimits

0x3371,	// (0x0009facd) list_medium_line_t4_g4_t3

0x1f5e,	// (0x0009e6ba) list_medium_line_t4_g4_t4_ParamLimits

0x1f5e,	// (0x0009e6ba) list_medium_line_t4_g4_t4

0x0003,

0xf344,	// (0x000abaa0) list_medium_line_t4_g4_t_ParamLimits

0xf344,	// (0x000abaa0) list_medium_line_t4_g4_t

0x349a,	// (0x0009fbf6) chi_dic_find_pane_g1

0x44fc,	// (0x000a0c58) main_tport_pane

0xa30a,	// (0x000a6a66) list_medium_line_plain_t1

0xa318,	// (0x000a6a74) list_medium_line_t2_g2_g1_ParamLimits

0xa318,	// (0x000a6a74) list_medium_line_t2_g2_g1

0xabb5,	// (0x000a7311) list_medium_line_t2_g2_g2_ParamLimits

0xabb5,	// (0x000a7311) list_medium_line_t2_g2_g2

0x0001,

0xfa00,	// (0x000ac15c) list_medium_line_t2_g2_g_ParamLimits

0xfa00,	// (0x000ac15c) list_medium_line_t2_g2_g

0x707b,	// (0x000a37d7) list_medium_line_t2_g2_t1_ParamLimits

0x707b,	// (0x000a37d7) list_medium_line_t2_g2_t1

0x7095,	// (0x000a37f1) list_medium_line_t2_g2_t2_ParamLimits

0x7095,	// (0x000a37f1) list_medium_line_t2_g2_t2

0x0001,

0xfa05,	// (0x000ac161) list_medium_line_t2_g2_t_ParamLimits

0xfa05,	// (0x000ac161) list_medium_line_t2_g2_t

0xa3c0,	// (0x000a6b1c) aid_sp_fs_list_icon_a_sm

0xaf39,	// (0x000a7695) aid_sp_fs_list_icon_d

0xa3c8,	// (0x000a6b24) aid_sp_fs_text_primary

0xa3d1,	// (0x000a6b2d) aid_sp_fs_text_secondary

0x7726,	// (0x000a3e82) list_medium_line

0x7726,	// (0x000a3e82) list_medium_line_g2

0x7726,	// (0x000a3e82) list_medium_line_g3

0x7726,	// (0x000a3e82) list_medium_line_plain

0x7726,	// (0x000a3e82) list_medium_line_plain_t2

0x7726,	// (0x000a3e82) list_medium_line_plain_t3

0x7726,	// (0x000a3e82) list_medium_line_right_icon

0x7726,	// (0x000a3e82) list_medium_line_right_iconx2

0x7726,	// (0x000a3e82) list_medium_line_t2

0x7726,	// (0x000a3e82) list_medium_line_t2_g2

0x7726,	// (0x000a3e82) list_medium_line_t2_g3

0x7726,	// (0x000a3e82) list_medium_line_t2_right_icon

0x7726,	// (0x000a3e82) list_medium_line_t2_right_iconx2

0x7726,	// (0x000a3e82) list_medium_line_t3

0x7726,	// (0x000a3e82) list_medium_line_t3_g2

0x7726,	// (0x000a3e82) list_medium_line_t3_g3

0x7726,	// (0x000a3e82) list_medium_line_t3_right_iconx2

0x772f,	// (0x000a3e8b) list_medium_line_t4_g4

0x7738,	// (0x000a3e94) list_medium_line_x2

0x7738,	// (0x000a3e94) list_medium_line_x2_t2_g2

0x7738,	// (0x000a3e94) list_medium_line_x2_t2_g3

0x7738,	// (0x000a3e94) list_medium_line_x2_t2_g4

0x7738,	// (0x000a3e94) list_medium_line_x2_t3

0x7738,	// (0x000a3e94) list_medium_line_x2_t3_g2

0x7738,	// (0x000a3e94) list_medium_line_x2_t3_g3

0x7738,	// (0x000a3e94) list_medium_line_x2_t3_g4

0x7738,	// (0x000a3e94) list_medium_line_x2_t4_g2

0x7738,	// (0x000a3e94) list_medium_line_x2_t4_g4

0x7741,	// (0x000a3e9d) list_medium_line_x3

0x7741,	// (0x000a3e9d) list_medium_line_x3_t4

0x7741,	// (0x000a3e9d) list_medium_line_x3_t4_g4

0x772f,	// (0x000a3e8b) list_medium_line_x4_t4

0x772f,	// (0x000a3e8b) list_medium_line_x4_t4_g7

0x772f,	// (0x000a3e8b) list_medium_line_x4_t5

0x774a,	// (0x000a3ea6) list_single_fs_dyc_pane_ParamLimits

0x774a,	// (0x000a3ea6) list_single_fs_dyc_pane

0x1f11,	// (0x0009e66d) list_medium_line_x4_t4_g7_g1_ParamLimits

0x1f11,	// (0x0009e66d) list_medium_line_x4_t4_g7_g1

0x7ed8,	// (0x000a4634) list_medium_line_x4_t4_g7_g2_ParamLimits

0x7ed8,	// (0x000a4634) list_medium_line_x4_t4_g7_g2

0x7ee4,	// (0x000a4640) list_medium_line_x4_t4_g7_g3_ParamLimits

0x7ee4,	// (0x000a4640) list_medium_line_x4_t4_g7_g3

0x7ef3,	// (0x000a464f) list_medium_line_x4_t4_g7_g4_ParamLimits

0x7ef3,	// (0x000a464f) list_medium_line_x4_t4_g7_g4

0x7eff,	// (0x000a465b) list_medium_line_x4_t4_g7_g5_ParamLimits

0x7eff,	// (0x000a465b) list_medium_line_x4_t4_g7_g5

0x7f0e,	// (0x000a466a) list_medium_line_x4_t4_g7_g6_ParamLimits

0x7f0e,	// (0x000a466a) list_medium_line_x4_t4_g7_g6

0x7f1d,	// (0x000a4679) list_medium_line_x4_t4_g7_g7_ParamLimits

0x7f1d,	// (0x000a4679) list_medium_line_x4_t4_g7_g7

0x0006,

0xfbc9,	// (0x000ac325) list_medium_line_x4_t4_g7_g_ParamLimits

0xfbc9,	// (0x000ac325) list_medium_line_x4_t4_g7_g

0x7f29,	// (0x000a4685) list_medium_line_x4_t4_g7_t1_ParamLimits

0x7f29,	// (0x000a4685) list_medium_line_x4_t4_g7_t1

0x7f3e,	// (0x000a469a) list_medium_line_x4_t4_g7_t2_ParamLimits

0x7f3e,	// (0x000a469a) list_medium_line_x4_t4_g7_t2

0x7f53,	// (0x000a46af) list_medium_line_x4_t4_g7_t3_ParamLimits

0x7f53,	// (0x000a46af) list_medium_line_x4_t4_g7_t3

0x7f68,	// (0x000a46c4) list_medium_line_x4_t4_g7_t4_ParamLimits

0x7f68,	// (0x000a46c4) list_medium_line_x4_t4_g7_t4

0x7f7a,	// (0x000a46d6) list_medium_line_x4_t4_g7_t5_ParamLimits

0x7f7a,	// (0x000a46d6) list_medium_line_x4_t4_g7_t5

0x0004,

0xfbd8,	// (0x000ac334) list_medium_line_x4_t4_g7_t_ParamLimits

0xfbd8,	// (0x000ac334) list_medium_line_x4_t4_g7_t

0x7f8c,	// (0x000a46e8) list_single_dyc_row_pane_ParamLimits

0x7f8c,	// (0x000a46e8) list_single_dyc_row_pane

0x8624,	// (0x000a4d80) call5_gesture_pane_ParamLimits

0x8624,	// (0x000a4d80) call5_gesture_pane

0x865a,	// (0x000a4db6) call5_windows_pane_ParamLimits

0x865a,	// (0x000a4db6) call5_windows_pane

0x86d2,	// (0x000a4e2e) call5_swipe_1_pane_cp_ParamLimits

0x86d2,	// (0x000a4e2e) call5_swipe_1_pane_cp

0x86de,	// (0x000a4e3a) call5_swipe_2_pane_cp_ParamLimits

0x86de,	// (0x000a4e3a) call5_swipe_2_pane_cp

0xb452,	// (0x000a7bae) call5_image_pane_cp

0x86ea,	// (0x000a4e46) popup_call5_audio_first_window_cp_ParamLimits

0x86ea,	// (0x000a4e46) popup_call5_audio_first_window_cp

0xe68b,	// (0x000aade7) call5_swipe_1_pane_g1_cp_ParamLimits

0xe68b,	// (0x000aade7) call5_swipe_1_pane_g1_cp

0xe6cb,	// (0x000aae27) call5_swipe_1_pane_g2_cp

0xe6a4,	// (0x000aae00) call5_swipe_1_pane_t1_cp_ParamLimits

0xe6a4,	// (0x000aae00) call5_swipe_1_pane_t1_cp

0xe68b,	// (0x000aade7) call5_swipe_2_pane_g1_cp_ParamLimits

0xe68b,	// (0x000aade7) call5_swipe_2_pane_g1_cp

0xe6d3,	// (0x000aae2f) call5_swipe_2_pane_g2_cp

0xe6db,	// (0x000aae37) call5_swipe_2_pane_t1_cp_ParamLimits

0xe6db,	// (0x000aae37) call5_swipe_2_pane_t1_cp

0xa2df,	// (0x000a6a3b) main_sp_fs_email_pane

0xe6f0,	// (0x000aae4c) main_sp_fs_listscroll_pane_te

0xa3da,	// (0x000a6b36) popup_sp_fs_action_menu_pane_ParamLimits

0xa3da,	// (0x000a6b36) popup_sp_fs_action_menu_pane

0xccb1,	// (0x000a940d) bg_sp_fs_ctrlbar_pane_g1

0xd246,	// (0x000a99a2) bg_sp_fs_ctrlbar_ddmenu_pane_g1

0xd258,	// (0x000a99b4) bg_sp_fs_ctrlbar_ddmenu_pane_g2

0xd24f,	// (0x000a99ab) bg_sp_fs_ctrlbar_ddmenu_pane_g3

0xccb1,	// (0x000a940d) bg_sp_fs_ctrlbar_ddmenu_pane_g4

0x0003,

0xfcc6,	// (0x000ac422) bg_sp_fs_ctrlbar_ddmenu_pane_g

0xca90,	// (0x000a91ec) bg_sp_fs_ctrlbar_ddmenu_pane_ParamLimits

0xca90,	// (0x000a91ec) bg_sp_fs_ctrlbar_ddmenu_pane

0xe6f9,	// (0x000aae55) main_sp_fs_ctrlbar_ddmenu_pane_g1_ParamLimits

0xe6f9,	// (0x000aae55) main_sp_fs_ctrlbar_ddmenu_pane_g1

0xe705,	// (0x000aae61) main_sp_fs_ctrlbar_ddmenu_pane_g2_ParamLimits

0xe705,	// (0x000aae61) main_sp_fs_ctrlbar_ddmenu_pane_g2

0x0001,

0xfccf,	// (0x000ac42b) main_sp_fs_ctrlbar_ddmenu_pane_g_ParamLimits

0xfccf,	// (0x000ac42b) main_sp_fs_ctrlbar_ddmenu_pane_g

0xe711,	// (0x000aae6d) main_sp_fs_ctrlbar_ddmenu_pane_t1_ParamLimits

0xe711,	// (0x000aae6d) main_sp_fs_ctrlbar_ddmenu_pane_t1

0xaf41,	// (0x000a769d) list_medium_line_t2_right_icon_g1

0x86f8,	// (0x000a4e54) list_medium_line_t2_right_icon_t1

0x8708,	// (0x000a4e64) list_medium_line_t2_right_icon_t2

0x0001,

0xfcd4,	// (0x000ac430) list_medium_line_t2_right_icon_t

0xc860,	// (0x000a8fbc) bg_sp_fs_ctrlbar_pane_ParamLimits

0xc860,	// (0x000a8fbc) bg_sp_fs_ctrlbar_pane

0x876f,	// (0x000a4ecb) main_sp_fs_ctrlbar_button_pane_cp01

0x8777,	// (0x000a4ed3) main_sp_fs_ctrlbar_ddmenu_pane

0xe763,	// (0x000aaebf) main_sp_fs_ctrlbar_pane_g1

0xe76f,	// (0x000aaecb) main_sp_fs_ctrlbar_pane_g2

0x0001,

0xfcd9,	// (0x000ac435) main_sp_fs_ctrlbar_pane_g

0xe77b,	// (0x000aaed7) main_sp_fs_ctrlbar_pane_t1

0x8781,	// (0x000a4edd) main_sp_fs_ctrlbar_pane

0x879b,	// (0x000a4ef7) main_sp_fs_listscroll_pane_te_cp01

0x87ac,	// (0x000a4f08) popup_sp_fs_action_menu_pane_cp01_ParamLimits

0x87ac,	// (0x000a4f08) popup_sp_fs_action_menu_pane_cp01

0xa2df,	// (0x000a6a3b) bg_sp_fs_highlight_list_pane_cp01_ParamLimits

0xa2df,	// (0x000a6a3b) bg_sp_fs_highlight_list_pane_cp01

0xa420,	// (0x000a6b7c) sp_fs_action_menu_list_gene_pane_g1_ParamLimits

0xa420,	// (0x000a6b7c) sp_fs_action_menu_list_gene_pane_g1

0xe7ab,	// (0x000aaf07) sp_fs_action_menu_list_gene_pane_g2_ParamLimits

0xe7ab,	// (0x000aaf07) sp_fs_action_menu_list_gene_pane_g2

0x0001,

0xfce3,	// (0x000ac43f) sp_fs_action_menu_list_gene_pane_g_ParamLimits

0xfce3,	// (0x000ac43f) sp_fs_action_menu_list_gene_pane_g

0xa42f,	// (0x000a6b8b) sp_fs_action_menu_list_gene_pane_t1_ParamLimits

0xa42f,	// (0x000a6b8b) sp_fs_action_menu_list_gene_pane_t1

0xa447,	// (0x000a6ba3) sp_fs_action_menu_list_gene_pane_ParamLimits

0xa447,	// (0x000a6ba3) sp_fs_action_menu_list_gene_pane

0xe7b8,	// (0x000aaf14) popup_sp_fs_action_menu_bg_pane_ParamLimits

0xe7b8,	// (0x000aaf14) popup_sp_fs_action_menu_bg_pane

0xa46a,	// (0x000a6bc6) sp_fs_action_menu_list_pane_ParamLimits

0xa46a,	// (0x000a6bc6) sp_fs_action_menu_list_pane

0xe7c6,	// (0x000aaf22) sp_fs_scroll_pane_cp01_ParamLimits

0xe7c6,	// (0x000aaf22) sp_fs_scroll_pane_cp01

0x87da,	// (0x000a4f36) list_medium_line_plain_t2_t1

0x87ea,	// (0x000a4f46) list_medium_line_plain_t2_t2

0x0001,

0xfce8,	// (0x000ac444) list_medium_line_plain_t2_t

0x87f8,	// (0x000a4f54) list_medium_line_plain_t3_t1

0x8808,	// (0x000a4f64) list_medium_line_plain_t3_t2

0x8816,	// (0x000a4f72) list_medium_line_plain_t3_t3

0x0002,

0xfced,	// (0x000ac449) list_medium_line_plain_t3_t

0x1f11,	// (0x0009e66d) list_medium_line_x2_t2_g2_g1_ParamLimits

0x1f11,	// (0x0009e66d) list_medium_line_x2_t2_g2_g1

0x1f29,	// (0x0009e685) list_medium_line_x2_t2_g2_g2_ParamLimits

0x1f29,	// (0x0009e685) list_medium_line_x2_t2_g2_g2

0x0001,

0xf24b,	// (0x000ab9a7) list_medium_line_x2_t2_g2_g_ParamLimits

0xf24b,	// (0x000ab9a7) list_medium_line_x2_t2_g2_g

0x3346,	// (0x0009faa2) list_medium_line_x2_t2_g2_t1_ParamLimits

0x3346,	// (0x0009faa2) list_medium_line_x2_t2_g2_t1

0x1f5e,	// (0x0009e6ba) list_medium_line_x2_t2_g2_t2_ParamLimits

0x1f5e,	// (0x0009e6ba) list_medium_line_x2_t2_g2_t2

0x0001,

0xfcf4,	// (0x000ac450) list_medium_line_x2_t2_g2_t_ParamLimits

0xfcf4,	// (0x000ac450) list_medium_line_x2_t2_g2_t

0x1f11,	// (0x0009e66d) list_medium_line_x2_t4_g2_g1_ParamLimits

0x1f11,	// (0x0009e66d) list_medium_line_x2_t4_g2_g1

0x8824,	// (0x000a4f80) list_medium_line_x2_t4_g2_g2_ParamLimits

0x8824,	// (0x000a4f80) list_medium_line_x2_t4_g2_g2

0x0001,

0xfcf9,	// (0x000ac455) list_medium_line_x2_t4_g2_g_ParamLimits

0xfcf9,	// (0x000ac455) list_medium_line_x2_t4_g2_g

0x8836,	// (0x000a4f92) list_medium_line_x2_t4_g2_t1_ParamLimits

0x8836,	// (0x000a4f92) list_medium_line_x2_t4_g2_t1

0x8850,	// (0x000a4fac) list_medium_line_x2_t4_g2_t2_ParamLimits

0x8850,	// (0x000a4fac) list_medium_line_x2_t4_g2_t2

0x8866,	// (0x000a4fc2) list_medium_line_x2_t4_g2_t3_ParamLimits

0x8866,	// (0x000a4fc2) list_medium_line_x2_t4_g2_t3

0x1f5e,	// (0x0009e6ba) list_medium_line_x2_t4_g2_t4_ParamLimits

0x1f5e,	// (0x0009e6ba) list_medium_line_x2_t4_g2_t4

0x0003,

0xfcfe,	// (0x000ac45a) list_medium_line_x2_t4_g2_t_ParamLimits

0xfcfe,	// (0x000ac45a) list_medium_line_x2_t4_g2_t

0xaf49,	// (0x000a76a5) list_medium_line_t3_right_iconx2_g1

0xaf41,	// (0x000a769d) list_medium_line_t3_right_iconx2_g2

0x887b,	// (0x000a4fd7) list_medium_line_t3_right_iconx2_g3

0x0002,

0xfd07,	// (0x000ac463) list_medium_line_t3_right_iconx2_g

0x8885,	// (0x000a4fe1) list_medium_line_t3_right_iconx2_t1

0x8895,	// (0x000a4ff1) list_medium_line_t3_right_iconx2_t2

0x0001,

0xfd0e,	// (0x000ac46a) list_medium_line_t3_right_iconx2_t

0x1f11,	// (0x0009e66d) list_medium_line_x3_t4_g4_g1_ParamLimits

0x1f11,	// (0x0009e66d) list_medium_line_x3_t4_g4_g1

0x1f1d,	// (0x0009e679) list_medium_line_x3_t4_g4_g2_ParamLimits

0x1f1d,	// (0x0009e679) list_medium_line_x3_t4_g4_g2

0x1fc5,	// (0x0009e721) list_medium_line_x3_t4_g4_g3_ParamLimits

0x1fc5,	// (0x0009e721) list_medium_line_x3_t4_g4_g3

0x88a3,	// (0x000a4fff) list_medium_line_x3_t4_g4_g4_ParamLimits

0x88a3,	// (0x000a4fff) list_medium_line_x3_t4_g4_g4

0x0003,

0xfd13,	// (0x000ac46f) list_medium_line_x3_t4_g4_g_ParamLimits

0xfd13,	// (0x000ac46f) list_medium_line_x3_t4_g4_g

0x88af,	// (0x000a500b) list_medium_line_x3_t4_g4_t1_ParamLimits

0x88af,	// (0x000a500b) list_medium_line_x3_t4_g4_t1

0x88c6,	// (0x000a5022) list_medium_line_x3_t4_g4_t2_ParamLimits

0x88c6,	// (0x000a5022) list_medium_line_x3_t4_g4_t2

0x88db,	// (0x000a5037) list_medium_line_x3_t4_g4_t3_ParamLimits

0x88db,	// (0x000a5037) list_medium_line_x3_t4_g4_t3

0x88f0,	// (0x000a504c) list_medium_line_x3_t4_g4_t4_ParamLimits

0x88f0,	// (0x000a504c) list_medium_line_x3_t4_g4_t4

0x0003,

0xfd1c,	// (0x000ac478) list_medium_line_x3_t4_g4_t_ParamLimits

0xfd1c,	// (0x000ac478) list_medium_line_x3_t4_g4_t

0x890d,	// (0x000a5069) list_single_dyc_row_text_pane_t1_ParamLimits

0x890d,	// (0x000a5069) list_single_dyc_row_text_pane_t1

0x8950,	// (0x000a50ac) list_single_dyc_row_text_pane_t2_ParamLimits

0x8950,	// (0x000a50ac) list_single_dyc_row_text_pane_t2

0xa48e,	// (0x000a6bea) list_single_dyc_row_text_pane_t3_ParamLimits

0xa48e,	// (0x000a6bea) list_single_dyc_row_text_pane_t3

0x0005,

0xfd25,	// (0x000ac481) list_single_dyc_row_text_pane_t_ParamLimits

0xfd25,	// (0x000ac481) list_single_dyc_row_text_pane_t

0xa4b2,	// (0x000a6c0e) list_single_dyc_row_pane_g1_ParamLimits

0xa4b2,	// (0x000a6c0e) list_single_dyc_row_pane_g1

0xa4be,	// (0x000a6c1a) list_single_dyc_row_pane_g2_ParamLimits

0xa4be,	// (0x000a6c1a) list_single_dyc_row_pane_g2

0xa4ca,	// (0x000a6c26) list_single_dyc_row_pane_g3_ParamLimits

0xa4ca,	// (0x000a6c26) list_single_dyc_row_pane_g3

0xa4d6,	// (0x000a6c32) list_single_dyc_row_pane_g4_ParamLimits

0xa4d6,	// (0x000a6c32) list_single_dyc_row_pane_g4

0x0003,

0xfd32,	// (0x000ac48e) list_single_dyc_row_pane_g_ParamLimits

0xfd32,	// (0x000ac48e) list_single_dyc_row_pane_g

0xa4e2,	// (0x000a6c3e) list_single_dyc_row_text_pane_ParamLimits

0xa4e2,	// (0x000a6c3e) list_single_dyc_row_text_pane

0x9c5a,	// (0x000a63b6) bg_sp_fs_scroll_pane

0xe7ec,	// (0x000aaf48) thumb_sp_fs_scroll_pane

0xa318,	// (0x000a6a74) list_medium_line_g1_ParamLimits

0xa318,	// (0x000a6a74) list_medium_line_g1

0xa501,	// (0x000a6c5d) list_medium_line_t1_ParamLimits

0xa501,	// (0x000a6c5d) list_medium_line_t1

0x1f11,	// (0x0009e66d) list_medium_line_x2_g1_ParamLimits

0x1f11,	// (0x0009e66d) list_medium_line_x2_g1

0x1f1d,	// (0x0009e679) list_medium_line_x2_g2_ParamLimits

0x1f1d,	// (0x0009e679) list_medium_line_x2_g2

0x0001,

0xfd3b,	// (0x000ac497) list_medium_line_x2_g_ParamLimits

0xfd3b,	// (0x000ac497) list_medium_line_x2_g

0xa516,	// (0x000a6c72) list_medium_line_x2_t1_ParamLimits

0xa516,	// (0x000a6c72) list_medium_line_x2_t1

0x1f11,	// (0x0009e66d) list_medium_line_x3_g1_ParamLimits

0x1f11,	// (0x0009e66d) list_medium_line_x3_g1

0x1f1d,	// (0x0009e679) list_medium_line_x3_g2_ParamLimits

0x1f1d,	// (0x0009e679) list_medium_line_x3_g2

0x0001,

0xfd3b,	// (0x000ac497) list_medium_line_x3_g_ParamLimits

0xfd3b,	// (0x000ac497) list_medium_line_x3_g

0xa516,	// (0x000a6c72) list_medium_line_x3_t1_ParamLimits

0xa516,	// (0x000a6c72) list_medium_line_x3_t1

0xe7f5,	// (0x000aaf51) thumb_sp_fs_scroll_pane_g1

0xe7fe,	// (0x000aaf5a) thumb_sp_fs_scroll_pane_g2

0xe807,	// (0x000aaf63) thumb_sp_fs_scroll_pane_g3

0x0002,

0xfd40,	// (0x000ac49c) thumb_sp_fs_scroll_pane_g

0xe7f5,	// (0x000aaf51) bg_sp_fs_scroll_pane_g1

0xe7fe,	// (0x000aaf5a) bg_sp_fs_scroll_pane_g2

0xe807,	// (0x000aaf63) bg_sp_fs_scroll_pane_g3

0x0002,

0xfd40,	// (0x000ac49c) bg_sp_fs_scroll_pane_g

0x1f11,	// (0x0009e66d) list_medium_line_x2_t3_g4_g1_ParamLimits

0x1f11,	// (0x0009e66d) list_medium_line_x2_t3_g4_g1

0x1fb9,	// (0x0009e715) list_medium_line_x2_t3_g4_g2_ParamLimits

0x1fb9,	// (0x0009e715) list_medium_line_x2_t3_g4_g2

0x1f1d,	// (0x0009e679) list_medium_line_x2_t3_g4_g3_ParamLimits

0x1f1d,	// (0x0009e679) list_medium_line_x2_t3_g4_g3

0x1f29,	// (0x0009e685) list_medium_line_x2_t3_g4_g4_ParamLimits

0x1f29,	// (0x0009e685) list_medium_line_x2_t3_g4_g4

0x0003,

0xf2c7,	// (0x000aba23) list_medium_line_x2_t3_g4_g_ParamLimits

0xf2c7,	// (0x000aba23) list_medium_line_x2_t3_g4_g

0x8a81,	// (0x000a51dd) list_medium_line_x2_t3_g4_t1_ParamLimits

0x8a81,	// (0x000a51dd) list_medium_line_x2_t3_g4_t1

0x8a97,	// (0x000a51f3) list_medium_line_x2_t3_g4_t2_ParamLimits

0x8a97,	// (0x000a51f3) list_medium_line_x2_t3_g4_t2

0x1f5e,	// (0x0009e6ba) list_medium_line_x2_t3_g4_t3_ParamLimits

0x1f5e,	// (0x0009e6ba) list_medium_line_x2_t3_g4_t3

0x0002,

0xfd47,	// (0x000ac4a3) list_medium_line_x2_t3_g4_t_ParamLimits

0xfd47,	// (0x000ac4a3) list_medium_line_x2_t3_g4_t

0xa318,	// (0x000a6a74) list_medium_line_g2_g1_ParamLimits

0xa318,	// (0x000a6a74) list_medium_line_g2_g1

0xabb5,	// (0x000a7311) list_medium_line_g2_g2_ParamLimits

0xabb5,	// (0x000a7311) list_medium_line_g2_g2

0x0001,

0xfa00,	// (0x000ac15c) list_medium_line_g2_g_ParamLimits

0xfa00,	// (0x000ac15c) list_medium_line_g2_g

0xa52c,	// (0x000a6c88) list_medium_line_g2_t1_ParamLimits

0xa52c,	// (0x000a6c88) list_medium_line_g2_t1

0xa318,	// (0x000a6a74) list_medium_line_t3_g2_g1_ParamLimits

0xa318,	// (0x000a6a74) list_medium_line_t3_g2_g1

0xabb5,	// (0x000a7311) list_medium_line_t3_g2_g2_ParamLimits

0xabb5,	// (0x000a7311) list_medium_line_t3_g2_g2

0x0001,

0xfa00,	// (0x000ac15c) list_medium_line_t3_g2_g_ParamLimits

0xfa00,	// (0x000ac15c) list_medium_line_t3_g2_g

0x8ab0,	// (0x000a520c) list_medium_line_t3_g2_t1_ParamLimits

0x8ab0,	// (0x000a520c) list_medium_line_t3_g2_t1

0x8aca,	// (0x000a5226) list_medium_line_t3_g2_t2_ParamLimits

0x8aca,	// (0x000a5226) list_medium_line_t3_g2_t2

0x8ae0,	// (0x000a523c) list_medium_line_t3_g2_t3_ParamLimits

0x8ae0,	// (0x000a523c) list_medium_line_t3_g2_t3

0x0002,

0xfd4e,	// (0x000ac4aa) list_medium_line_t3_g2_t_ParamLimits

0xfd4e,	// (0x000ac4aa) list_medium_line_t3_g2_t

0xaf41,	// (0x000a769d) list_medium_line_right_icon_g1

0xa541,	// (0x000a6c9d) list_medium_line_right_icon_t1

0xa318,	// (0x000a6a74) list_medium_line_t2_g1_ParamLimits

0xa318,	// (0x000a6a74) list_medium_line_t2_g1

0x8af7,	// (0x000a5253) list_medium_line_t2_t1_ParamLimits

0x8af7,	// (0x000a5253) list_medium_line_t2_t1

0x8b11,	// (0x000a526d) list_medium_line_t2_t2_ParamLimits

0x8b11,	// (0x000a526d) list_medium_line_t2_t2

0x0001,

0xfd55,	// (0x000ac4b1) list_medium_line_t2_t_ParamLimits

0xfd55,	// (0x000ac4b1) list_medium_line_t2_t

0xa318,	// (0x000a6a74) list_medium_line_t3_g1_ParamLimits

0xa318,	// (0x000a6a74) list_medium_line_t3_g1

0x8b26,	// (0x000a5282) list_medium_line_t3_t1_ParamLimits

0x8b26,	// (0x000a5282) list_medium_line_t3_t1

0x8b3d,	// (0x000a5299) list_medium_line_t3_t2_ParamLimits

0x8b3d,	// (0x000a5299) list_medium_line_t3_t2

0x8b52,	// (0x000a52ae) list_medium_line_t3_t3_ParamLimits

0x8b52,	// (0x000a52ae) list_medium_line_t3_t3

0x0002,

0xfd5a,	// (0x000ac4b6) list_medium_line_t3_t_ParamLimits

0xfd5a,	// (0x000ac4b6) list_medium_line_t3_t

0xa318,	// (0x000a6a74) list_medium_line_g3_g1_ParamLimits

0xa318,	// (0x000a6a74) list_medium_line_g3_g1

0xaf51,	// (0x000a76ad) list_medium_line_g3_g2_ParamLimits

0xaf51,	// (0x000a76ad) list_medium_line_g3_g2

0xabb5,	// (0x000a7311) list_medium_line_g3_g3_ParamLimits

0xabb5,	// (0x000a7311) list_medium_line_g3_g3

0x0002,

0xfd61,	// (0x000ac4bd) list_medium_line_g3_g_ParamLimits

0xfd61,	// (0x000ac4bd) list_medium_line_g3_g

0xa54f,	// (0x000a6cab) list_medium_line_g3_t1_ParamLimits

0xa54f,	// (0x000a6cab) list_medium_line_g3_t1

0xa318,	// (0x000a6a74) list_medium_line_t2_g3_g1_ParamLimits

0xa318,	// (0x000a6a74) list_medium_line_t2_g3_g1

0xaf51,	// (0x000a76ad) list_medium_line_t2_g3_g2_ParamLimits

0xaf51,	// (0x000a76ad) list_medium_line_t2_g3_g2

0xabb5,	// (0x000a7311) list_medium_line_t2_g3_g3_ParamLimits

0xabb5,	// (0x000a7311) list_medium_line_t2_g3_g3

0x0002,

0xfd61,	// (0x000ac4bd) list_medium_line_t2_g3_g_ParamLimits

0xfd61,	// (0x000ac4bd) list_medium_line_t2_g3_g

0x8b64,	// (0x000a52c0) list_medium_line_t2_g3_t1_ParamLimits

0x8b64,	// (0x000a52c0) list_medium_line_t2_g3_t1

0x8b7e,	// (0x000a52da) list_medium_line_t2_g3_t2_ParamLimits

0x8b7e,	// (0x000a52da) list_medium_line_t2_g3_t2

0x0001,

0xfd68,	// (0x000ac4c4) list_medium_line_t2_g3_t_ParamLimits

0xfd68,	// (0x000ac4c4) list_medium_line_t2_g3_t

0xa318,	// (0x000a6a74) list_medium_line_t3_g3_g1_ParamLimits

0xa318,	// (0x000a6a74) list_medium_line_t3_g3_g1

0xaf51,	// (0x000a76ad) list_medium_line_t3_g3_g2_ParamLimits

0xaf51,	// (0x000a76ad) list_medium_line_t3_g3_g2

0xabb5,	// (0x000a7311) list_medium_line_t3_g3_g3_ParamLimits

0xabb5,	// (0x000a7311) list_medium_line_t3_g3_g3

0x0002,

0xfd61,	// (0x000ac4bd) list_medium_line_t3_g3_g_ParamLimits

0xfd61,	// (0x000ac4bd) list_medium_line_t3_g3_g

0x8b94,	// (0x000a52f0) list_medium_line_t3_g3_t1_ParamLimits

0x8b94,	// (0x000a52f0) list_medium_line_t3_g3_t1

0x8bad,	// (0x000a5309) list_medium_line_t3_g3_t2_ParamLimits

0x8bad,	// (0x000a5309) list_medium_line_t3_g3_t2

0x8bc3,	// (0x000a531f) list_medium_line_t3_g3_t3_ParamLimits

0x8bc3,	// (0x000a531f) list_medium_line_t3_g3_t3

0x0002,

0xfd6d,	// (0x000ac4c9) list_medium_line_t3_g3_t_ParamLimits

0xfd6d,	// (0x000ac4c9) list_medium_line_t3_g3_t

0xaf49,	// (0x000a76a5) list_medium_line_right_iconx2_g1

0xaf41,	// (0x000a769d) list_medium_line_right_iconx2_g2

0x0001,

0xfd74,	// (0x000ac4d0) list_medium_line_right_iconx2_g

0xaf5d,	// (0x000a76b9) list_medium_line_right_iconx2_t1

0xaf49,	// (0x000a76a5) list_medium_line_t2_right_iconx2_g1

0xaf41,	// (0x000a769d) list_medium_line_t2_right_iconx2_g2

0x0001,

0xfd74,	// (0x000ac4d0) list_medium_line_t2_right_iconx2_g

0x8bdd,	// (0x000a5339) list_medium_line_t2_right_iconx2_t1

0x8bed,	// (0x000a5349) list_medium_line_t2_right_iconx2_t2

0x0001,

0xfd79,	// (0x000ac4d5) list_medium_line_t2_right_iconx2_t

0x8bfb,	// (0x000a5357) list_medium_line_x4_t4_t1

0x8c09,	// (0x000a5365) list_medium_line_x4_t4_t2

0x8c19,	// (0x000a5375) list_medium_line_x4_t4_t3

0x8c29,	// (0x000a5385) list_medium_line_x4_t4_t4

0x0003,

0xfd7e,	// (0x000ac4da) list_medium_line_x4_t4_t

0x8c63,	// (0x000a53bf) tport_appsw_pane_ParamLimits

0x8c63,	// (0x000a53bf) tport_appsw_pane

0x8c71,	// (0x000a53cd) tport_contact_pane_ParamLimits

0x8c71,	// (0x000a53cd) tport_contact_pane

0x8c81,	// (0x000a53dd) tport_listscroll_pane_ParamLimits

0x8c81,	// (0x000a53dd) tport_listscroll_pane

0x8c91,	// (0x000a53ed) cell_tport_appsw_pane_ParamLimits

0x8c91,	// (0x000a53ed) cell_tport_appsw_pane

0xcf4e,	// (0x000a96aa) tport_appsw_pane_g1_ParamLimits

0xcf4e,	// (0x000a96aa) tport_appsw_pane_g1

0xe810,	// (0x000aaf6c) tport_contact_pane_g1

0xe819,	// (0x000aaf75) tport_contact_pane_t1

0xe827,	// (0x000aaf83) tport_contact_pane_t2

0x0001,

0xfd87,	// (0x000ac4e3) tport_contact_pane_t

0xe835,	// (0x000aaf91) list_tport_pane

0xe83e,	// (0x000aaf9a) scroll_pane_cp_030

0x8cc6,	// (0x000a5422) cell_tport_appsw_pane_g1

0x8cd6,	// (0x000a5432) cell_tport_appsw_pane_t1

0x8ce4,	// (0x000a5440) grid_highlight_pane_cp019

0x8cec,	// (0x000a5448) list_tport_double_graphic_pane_ParamLimits

0x8cec,	// (0x000a5448) list_tport_double_graphic_pane

0xa2df,	// (0x000a6a3b) list_highlight_pane_cp023_ParamLimits

0xa2df,	// (0x000a6a3b) list_highlight_pane_cp023

0x8cf9,	// (0x000a5455) list_tport_double_graphic_pane_g1_ParamLimits

0x8cf9,	// (0x000a5455) list_tport_double_graphic_pane_g1

0x8d06,	// (0x000a5462) list_tport_double_graphic_pane_t1_ParamLimits

0x8d06,	// (0x000a5462) list_tport_double_graphic_pane_t1

0x8d1b,	// (0x000a5477) list_tport_double_graphic_pane_t2_ParamLimits

0x8d1b,	// (0x000a5477) list_tport_double_graphic_pane_t2

0x0001,

0xfd93,	// (0x000ac4ef) list_tport_double_graphic_pane_t_ParamLimits

0xfd93,	// (0x000ac4ef) list_tport_double_graphic_pane_t

0x9c5a,	// (0x000a63b6) main_cale_note_pane

0x6812,	// (0x000a2f6e) cell_vitu2_function_top_wide_pane_cp01_ParamLimits

0x6812,	// (0x000a2f6e) cell_vitu2_function_top_wide_pane_cp01

0x82f7,	// (0x000a4a53) wait_bar_pane_cp05_ParamLimits

0xa2df,	// (0x000a6a3b) listscroll_cmail_pane

0xe84f,	// (0x000aafab) list_cmail_pane

0x8d37,	// (0x000a5493) list_cmail_body_pane

0x8d50,	// (0x000a54ac) list_single_cmail_header_caption_pane

0x8d71,	// (0x000a54cd) list_single_cmail_header_detail_pane_ParamLimits

0x8d71,	// (0x000a54cd) list_single_cmail_header_detail_pane

0x8da2,	// (0x000a54fe) list_single_cmail_header_caption_pane_t1

0x8dbd,	// (0x000a5519) list_single_cmail_header_detail_pane_g1_ParamLimits

0x8dbd,	// (0x000a5519) list_single_cmail_header_detail_pane_g1

0xaf6b,	// (0x000a76c7) list_single_cmail_header_detail_pane_g2_ParamLimits

0xaf6b,	// (0x000a76c7) list_single_cmail_header_detail_pane_g2

0x0002,

0xfd98,	// (0x000ac4f4) list_single_cmail_header_detail_pane_g_ParamLimits

0xfd98,	// (0x000ac4f4) list_single_cmail_header_detail_pane_g

0x8dd5,	// (0x000a5531) list_single_cmail_header_detail_pane_t1_ParamLimits

0x8dd5,	// (0x000a5531) list_single_cmail_header_detail_pane_t1

0x8e23,	// (0x000a557f) list_single_cmail_header_editor_pane_bg_ParamLimits

0x8e23,	// (0x000a557f) list_single_cmail_header_editor_pane_bg

0xe318,	// (0x000aaa74) list_cmail_body_pane_g1

0xe873,	// (0x000aafcf) list_cmail_body_pane_t1

0xd6a1,	// (0x000a9dfd) list_single_cmail_header_editor_pane_bg_g1

0xacd2,	// (0x000a742e) list_single_cmail_header_editor_pane_bg_g1_copy1

0xd6b1,	// (0x000a9e0d) list_single_cmail_header_editor_pane_bg_g1_copy2

0xd6a9,	// (0x000a9e05) list_single_cmail_header_editor_pane_bg_g1_copy3

0xd8cb,	// (0x000aa027) list_single_cmail_header_editor_pane_bg_g1_copy4

0xd6d1,	// (0x000a9e2d) list_single_cmail_header_editor_pane_bg_g1_copy4_copy1

0xd6c1,	// (0x000a9e1d) list_single_cmail_header_editor_pane_bg_g1_copy4_copy2

0xd6c9,	// (0x000a9e25) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3

0xacb2,	// (0x000a740e) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3_copy1

0x8e3a,	// (0x000a5596) calenote_gesture_pane_ParamLimits

0x8e3a,	// (0x000a5596) calenote_gesture_pane

0x8e54,	// (0x000a55b0) calenote_window_pane_ParamLimits

0x8e54,	// (0x000a55b0) calenote_window_pane

0xe881,	// (0x000aafdd) popup_note_window_cp01

0x8e6c,	// (0x000a55c8) calenote_swipe_1_pane_ParamLimits

0x8e6c,	// (0x000a55c8) calenote_swipe_1_pane

0x86de,	// (0x000a4e3a) calenote_swipe_2_pane_ParamLimits

0x86de,	// (0x000a4e3a) calenote_swipe_2_pane

0xe68b,	// (0x000aade7) calenote_swipe_1_pane_g1_ParamLimits

0xe68b,	// (0x000aade7) calenote_swipe_1_pane_g1

0xe698,	// (0x000aadf4) calenote_swipe_1_pane_g2_ParamLimits

0xe698,	// (0x000aadf4) calenote_swipe_1_pane_g2

0x0001,

0xfcbc,	// (0x000ac418) calenote_swipe_1_pane_g_ParamLimits

0xfcbc,	// (0x000ac418) calenote_swipe_1_pane_g

0xe893,	// (0x000aafef) calenote_swipe_1_pane_t1_ParamLimits

0xe893,	// (0x000aafef) calenote_swipe_1_pane_t1

0xe68b,	// (0x000aade7) calenote_swipe_2_pane_g1_ParamLimits

0xe68b,	// (0x000aade7) calenote_swipe_2_pane_g1

0xe8b2,	// (0x000ab00e) calenote_swipe_2_pane_g2_ParamLimits

0xe8b2,	// (0x000ab00e) calenote_swipe_2_pane_g2

0x0001,

0xfda4,	// (0x000ac500) calenote_swipe_2_pane_g_ParamLimits

0xfda4,	// (0x000ac500) calenote_swipe_2_pane_g

0xe8be,	// (0x000ab01a) calenote_swipe_2_pane_t1_ParamLimits

0xe8be,	// (0x000ab01a) calenote_swipe_2_pane_t1

0x9c5a,	// (0x000a63b6) main_mup_navstr_pane

0x5515,	// (0x000a1c71) main_mup3_pane_t7_ParamLimits

0x5515,	// (0x000a1c71) main_mup3_pane_t7

0x5f18,	// (0x000a2674) main_mp4_pane_g6_ParamLimits

0x5f18,	// (0x000a2674) main_mp4_pane_g6

0x6296,	// (0x000a29f2) main_image3_pane_t4_ParamLimits

0x6296,	// (0x000a29f2) main_image3_pane_t4

0x8e7f,	// (0x000a55db) popup_navstr_preview_pane_ParamLimits

0x8e7f,	// (0x000a55db) popup_navstr_preview_pane

0x8e8b,	// (0x000a55e7) scroll_navstr_pane_ParamLimits

0x8e8b,	// (0x000a55e7) scroll_navstr_pane

0x9c5a,	// (0x000a63b6) bg_popup_preview_window_pane_cp04

0xe8e5,	// (0x000ab041) popup_navstr_preview_pane_t1

0x8e97,	// (0x000a55f3) scroll_navstr_pane_g1_ParamLimits

0x8e97,	// (0x000a55f3) scroll_navstr_pane_g1

0x8ea4,	// (0x000a5600) scroll_navstr_pane_t1_ParamLimits

0x8ea4,	// (0x000a5600) scroll_navstr_pane_t1

0xe88a,	// (0x000aafe6) bg_button_pane_cp014

0xe88a,	// (0x000aafe6) bg_button_pane_cp030

0x85ca,	// (0x000a4d26) list_double_fisheye_pane_g4_ParamLimits

0x85ca,	// (0x000a4d26) list_double_fisheye_pane_g4

0x85d6,	// (0x000a4d32) list_double_fisheye_pane_g5_ParamLimits

0x85d6,	// (0x000a4d32) list_double_fisheye_pane_g5

0xe857,	// (0x000aafb3) sp_fs_scroll_pane_cp03

0xe763,	// (0x000aaebf) main_sp_fs_ctrlbar_pane_g1_ParamLimits

0xe76f,	// (0x000aaecb) main_sp_fs_ctrlbar_pane_g2_ParamLimits

0xfcd9,	// (0x000ac435) main_sp_fs_ctrlbar_pane_g_ParamLimits

0xe77b,	// (0x000aaed7) main_sp_fs_ctrlbar_pane_t1_ParamLimits

0x8d2d,	// (0x000a5489) sp_fs_scroll_pane_cp02

0xa9a7,	// (0x000a7103) popup_sp_fs_calendar_preview_list_single_pane_ParamLimits

0xa9a7,	// (0x000a7103) popup_sp_fs_calendar_preview_list_single_pane

0x9c5a,	// (0x000a63b6) main_cam6_pano_pane

0xa2df,	// (0x000a6a3b) main_mup3_pane_ParamLimits

0x9c5a,	// (0x000a63b6) main_phacti_pane

0x81ca,	// (0x000a4926) bg_button_pane_cp11

0x81e2,	// (0x000a493e) main_mobtv_info_pane_g2_ParamLimits

0x81e2,	// (0x000a493e) main_mobtv_info_pane_g2

0x0001,

0xfc39,	// (0x000ac395) main_mobtv_info_pane_g_ParamLimits

0xfc39,	// (0x000ac395) main_mobtv_info_pane_g

0x8394,	// (0x000a4af0) sc_clock_pane_t5_ParamLimits

0x8394,	// (0x000a4af0) sc_clock_pane_t5

0x843d,	// (0x000a4b99) main_radioblah_pane_g1_ParamLimits

0xe5d7,	// (0x000aad33) main_radioblah_pane_t3_ParamLimits

0xe5d7,	// (0x000aad33) main_radioblah_pane_t3

0xe5ef,	// (0x000aad4b) main_radioblah_pane_t4_ParamLimits

0xe5ef,	// (0x000aad4b) main_radioblah_pane_t4

0x845b,	// (0x000a4bb7) main_radioblah_text_pane_ParamLimits

0x845b,	// (0x000a4bb7) main_radioblah_text_pane

0x8468,	// (0x000a4bc4) main_radioblah_info_pane_g1_ParamLimits

0x8501,	// (0x000a4c5d) main_radioblah_info_pane_t4_ParamLimits

0x8501,	// (0x000a4c5d) main_radioblah_info_pane_t4

0xa2df,	// (0x000a6a3b) main_sp_fs_calendar_pane

0x8eb6,	// (0x000a5612) main_phacti_pane_g1

0x8ebe,	// (0x000a561a) phacti_note_pane_ParamLimits

0x8ebe,	// (0x000a561a) phacti_note_pane

0xe8fc,	// (0x000ab058) phacti_term_pane_ParamLimits

0xe8fc,	// (0x000ab058) phacti_term_pane

0xe911,	// (0x000ab06d) phacti_note_pane_t1_ParamLimits

0xe911,	// (0x000ab06d) phacti_note_pane_t1

0xa588,	// (0x000a6ce4) phacti_term_pane_g1

0xa590,	// (0x000a6cec) phacti_term_pane_t1_ParamLimits

0xa590,	// (0x000a6cec) phacti_term_pane_t1

0xe928,	// (0x000ab084) popup_sp_fs_calendar_preview_list_single_pane_g1

0xe930,	// (0x000ab08c) popup_sp_fs_calendar_preview_list_single_pane_g2

0x0001,

0xfdae,	// (0x000ac50a) popup_sp_fs_calendar_preview_list_single_pane_g

0xe938,	// (0x000ab094) popup_sp_fs_calendar_preview_list_single_pane_t1_ParamLimits

0xe938,	// (0x000ab094) popup_sp_fs_calendar_preview_list_single_pane_t1

0xe94e,	// (0x000ab0aa) aid_popup_sp_fs_bg_corner_pane

0xccb1,	// (0x000a940d) popup_sp_fs_calendar_preview_bg_pane_g1

0x9c5a,	// (0x000a63b6) popup_sp_fs_calendar_preview_bg_pane

0xe956,	// (0x000ab0b2) popup_sp_fs_calendar_preview_list_pane

0xc860,	// (0x000a8fbc) bg_main_sp_fs_cale_pane_ParamLimits

0xc860,	// (0x000a8fbc) bg_main_sp_fs_cale_pane

0xa5c3,	// (0x000a6d1f) listscroll_cale_mrui_pane_ParamLimits

0xa5c3,	// (0x000a6d1f) listscroll_cale_mrui_pane

0xa5d8,	// (0x000a6d34) listscroll_sp_fs_schedule_track_pane

0xa5e1,	// (0x000a6d3d) main_sp_fs_ctrlbar_pane_cp01_ParamLimits

0xa5e1,	// (0x000a6d3d) main_sp_fs_ctrlbar_pane_cp01

0xe95e,	// (0x000ab0ba) main_sp_fs_ribbon_pane

0xa5f4,	// (0x000a6d50) popup_sp_fs_cale_preview_window

0x8f1d,	// (0x000a5679) list_single_sp_fs_schedule_track_pane_ParamLimits

0x8f1d,	// (0x000a5679) list_single_sp_fs_schedule_track_pane

0x0e60,	// (0x0009d5bc) bg_sp_fs_highlight_list_pane_cp03_ParamLimits

0x0e60,	// (0x0009d5bc) bg_sp_fs_highlight_list_pane_cp03

0x8f32,	// (0x000a568e) list_single_sp_fs_schedule_track_pane_g1_ParamLimits

0x8f32,	// (0x000a568e) list_single_sp_fs_schedule_track_pane_g1

0x8f3e,	// (0x000a569a) list_single_sp_fs_schedule_track_pane_g2_ParamLimits

0x8f3e,	// (0x000a569a) list_single_sp_fs_schedule_track_pane_g2

0x0001,

0xfdb3,	// (0x000ac50f) list_single_sp_fs_schedule_track_pane_g_ParamLimits

0xfdb3,	// (0x000ac50f) list_single_sp_fs_schedule_track_pane_g

0x8f4a,	// (0x000a56a6) list_single_sp_fs_schedule_track_pane_t1_ParamLimits

0x8f4a,	// (0x000a56a6) list_single_sp_fs_schedule_track_pane_t1

0x8f68,	// (0x000a56c4) sp_fs_schedule_track_pane_ParamLimits

0x8f68,	// (0x000a56c4) sp_fs_schedule_track_pane

0xe966,	// (0x000ab0c2) sp_fs_schedule_track_pane_g1

0xe96e,	// (0x000ab0ca) sp_fs_schedule_track_pane_g2

0xe976,	// (0x000ab0d2) sp_fs_schedule_track_pane_g3

0xe97e,	// (0x000ab0da) sp_fs_schedule_track_pane_g4

0xe986,	// (0x000ab0e2) sp_fs_schedule_track_pane_g5

0x0004,

0xfdb8,	// (0x000ac514) sp_fs_schedule_track_pane_g

0xd6a1,	// (0x000a9dfd) bg_sp_fs_schedule_viewer_highlight_g1

0xacd2,	// (0x000a742e) bg_sp_fs_schedule_viewer_highlight_g2

0xd6a9,	// (0x000a9e05) bg_sp_fs_schedule_viewer_highlight_g3

0xd6b1,	// (0x000a9e0d) bg_sp_fs_schedule_viewer_highlight_g4

0xd8cb,	// (0x000aa027) bg_sp_fs_schedule_viewer_highlight_g5

0xd6c1,	// (0x000a9e1d) bg_sp_fs_schedule_viewer_highlight_g6

0xd6c9,	// (0x000a9e25) bg_sp_fs_schedule_viewer_highlight_g7

0xd6d1,	// (0x000a9e2d) bg_sp_fs_schedule_viewer_highlight_g8

0xacb2,	// (0x000a740e) bg_sp_fs_schedule_viewer_highlight_g9

0x0008,

0xfdc3,	// (0x000ac51f) bg_sp_fs_schedule_viewer_highlight_g

0x9c5a,	// (0x000a63b6) bg_main_sp_fs_ribbon_pane

0x8f7a,	// (0x000a56d6) main_sp_fs_ribbon_pane_g1

0xe98e,	// (0x000ab0ea) main_sp_fs_ribbon_pane_t1

0x8f83,	// (0x000a56df) main_sp_fs_ribbon_pane_t2

0xe99d,	// (0x000ab0f9) main_sp_fs_ribbon_pane_t3

0x0002,

0xfdd6,	// (0x000ac532) main_sp_fs_ribbon_pane_t

0xe9ac,	// (0x000ab108) main_sp_fs_ribbon_scheduler_pane

0xe9b4,	// (0x000ab110) bg_main_sp_fs_ribbon_pane_g1

0xe9bd,	// (0x000ab119) bg_main_sp_fs_ribbon_pane_g2

0xe9c6,	// (0x000ab122) bg_main_sp_fs_ribbon_pane_g3

0x0002,

0xfddd,	// (0x000ac539) bg_main_sp_fs_ribbon_pane_g

0xe9ce,	// (0x000ab12a) main_sp_fs_ribbon_scheduler_pane_g1

0xe9d7,	// (0x000ab133) main_sp_fs_ribbon_scheduler_pane_g2

0xe9e0,	// (0x000ab13c) main_sp_fs_ribbon_scheduler_pane_g3

0x0002,

0xfde4,	// (0x000ac540) main_sp_fs_ribbon_scheduler_pane_g

0xe9e9,	// (0x000ab145) list_cale_mrui_pane

0x8f92,	// (0x000a56ee) sp_fs_scroll_pane_cp07_ParamLimits

0x8f92,	// (0x000a56ee) sp_fs_scroll_pane_cp07

0x8fae,	// (0x000a570a) bg_sp_fs_schedule_viewer_highlight_ParamLimits

0x8fae,	// (0x000a570a) bg_sp_fs_schedule_viewer_highlight

0xe9f6,	// (0x000ab152) list_single_sp_fs_schedule_track_pane_cp01

0xe9fe,	// (0x000ab15a) list_sp_fs_schedule_track_pane

0xea06,	// (0x000ab162) sp_fs_scroll_pane_cp06_ParamLimits

0xea06,	// (0x000ab162) sp_fs_scroll_pane_cp06

0xccb1,	// (0x000a940d) bgmain_sp_fs_calendar_pane_g1

0x8fbb,	// (0x000a5717) list_single_cale_mrui_pane_ParamLimits

0x8fbb,	// (0x000a5717) list_single_cale_mrui_pane

0xa606,	// (0x000a6d62) list_single_cale_mrui_row_pane_ParamLimits

0xa606,	// (0x000a6d62) list_single_cale_mrui_row_pane

0xa61c,	// (0x000a6d78) list_single_cale_mrui_row_pane_g1_ParamLimits

0xa61c,	// (0x000a6d78) list_single_cale_mrui_row_pane_g1

0xa648,	// (0x000a6da4) list_single_cale_mrui_row_pane_t1_ParamLimits

0xa648,	// (0x000a6da4) list_single_cale_mrui_row_pane_t1

0x8fd0,	// (0x000a572c) list_single_cale_mrui_row_pane_t2_ParamLimits

0x8fd0,	// (0x000a572c) list_single_cale_mrui_row_pane_t2

0xa65a,	// (0x000a6db6) list_single_cale_mrui_row_pane_t3_ParamLimits

0xa65a,	// (0x000a6db6) list_single_cale_mrui_row_pane_t3

0xa689,	// (0x000a6de5) list_single_cale_mrui_row_pane_t4_ParamLimits

0xa689,	// (0x000a6de5) list_single_cale_mrui_row_pane_t4

0x0003,

0xfdf2,	// (0x000ac54e) list_single_cale_mrui_row_pane_t_ParamLimits

0xfdf2,	// (0x000ac54e) list_single_cale_mrui_row_pane_t

0x9036,	// (0x000a5792) list_single_cmail_header_editor_pane_bg_cp01_ParamLimits

0x9036,	// (0x000a5792) list_single_cmail_header_editor_pane_bg_cp01

0x905a,	// (0x000a57b6) list_single_cmail_header_editor_pane_bg_cp02_ParamLimits

0x905a,	// (0x000a57b6) list_single_cmail_header_editor_pane_bg_cp02

0x9076,	// (0x000a57d2) main_radioblah_text_pane_t1_ParamLimits

0x9076,	// (0x000a57d2) main_radioblah_text_pane_t1

0xea25,	// (0x000ab181) cam6_indi_pane_cp01

0xea2d,	// (0x000ab189) cam6_mode_pane_cp01

0xea35,	// (0x000ab191) cam6_pano_pane

0xea3e,	// (0x000ab19a) cam6_zoom_pane_cp01

0xea48,	// (0x000ab1a4) cam6_pano_image_pane

0xea51,	// (0x000ab1ad) cam6_pano_pane_g1

0xe318,	// (0x000aaa74) cam6_pano_pane_g2

0xea5a,	// (0x000ab1b6) cam6_pano_pane_g3

0xea63,	// (0x000ab1bf) cam6_pano_pane_g4

0xd233,	// (0x000a998f) cam6_pano_pane_g5

0xea6c,	// (0x000ab1c8) cam6_pano_pane_g6

0xea74,	// (0x000ab1d0) cam6_pano_pane_g7

0xea7c,	// (0x000ab1d8) cam6_pano_pane_g8

0xea85,	// (0x000ab1e1) cam6_pano_pane_g9

0x0008,

0xfdfb,	// (0x000ac557) cam6_pano_pane_g

0x9c5a,	// (0x000a63b6) main_browser_tag_pane

0xe8dd,	// (0x000ab039) grid_navstr_albumart_pane

0xea90,	// (0x000ab1ec) cell_navstr_albumart_pane_ParamLimits

0xea90,	// (0x000ab1ec) cell_navstr_albumart_pane

0xeaaf,	// (0x000ab20b) cell_navstr_albumart_pane_g1

0xc66d,	// (0x000a8dc9) cell_navstr_albumart_pane_g2

0xc67d,	// (0x000a8dd9) cell_navstr_albumart_pane_g3

0xc675,	// (0x000a8dd1) cell_navstr_albumart_pane_g4

0x0003,

0xfe0e,	// (0x000ac56a) cell_navstr_albumart_pane_g

0x9090,	// (0x000a57ec) bt_list_pane_ParamLimits

0x9090,	// (0x000a57ec) bt_list_pane

0x90a9,	// (0x000a5805) bt_list_pane_t1

0x90b8,	// (0x000a5814) bt_list_pane_t2

0x0001,

0xfe17,	// (0x000ac573) bt_list_pane_t

0x9c5a,	// (0x000a63b6) main_cale_prevew_pane

0x90c7,	// (0x000a5823) popup_cale_preview_window_ParamLimits

0x90c7,	// (0x000a5823) popup_cale_preview_window

0xa2df,	// (0x000a6a3b) bg_popup_preview_window_pane_cp05_ParamLimits

0xa2df,	// (0x000a6a3b) bg_popup_preview_window_pane_cp05

0xeab7,	// (0x000ab213) list_cale_preview_pane_ParamLimits

0xeab7,	// (0x000ab213) list_cale_preview_pane

0x90e2,	// (0x000a583e) list_double_cale_preview_pane_ParamLimits

0x90e2,	// (0x000a583e) list_double_cale_preview_pane

0x90f6,	// (0x000a5852) list_single_cale_preview_pane_ParamLimits

0x90f6,	// (0x000a5852) list_single_cale_preview_pane

0x910e,	// (0x000a586a) list_single_cale_preview_pane_g1

0x9116,	// (0x000a5872) list_single_cale_preview_pane_t1_ParamLimits

0x9116,	// (0x000a5872) list_single_cale_preview_pane_t1

0x912b,	// (0x000a5887) list_double_cale_preview_pane_g1

0x9133,	// (0x000a588f) list_double_cale_preview_pane_t1_ParamLimits

0x9133,	// (0x000a588f) list_double_cale_preview_pane_t1

0x9148,	// (0x000a58a4) list_double_cale_preview_pane_t2_ParamLimits

0x9148,	// (0x000a58a4) list_double_cale_preview_pane_t2

0x0001,

0xfe1c,	// (0x000ac578) list_double_cale_preview_pane_t_ParamLimits

0xfe1c,	// (0x000ac578) list_double_cale_preview_pane_t

0x9c5a,	// (0x000a63b6) main_ezdial_pane

0xa2df,	// (0x000a6a3b) main_sp_fs_email_pane_ParamLimits

0x8716,	// (0x000a4e72) cmail_ddmenu_btn01_pane_ParamLimits

0x8716,	// (0x000a4e72) cmail_ddmenu_btn01_pane

0x8733,	// (0x000a4e8f) cmail_ddmenu_btn02_pane_ParamLimits

0x8733,	// (0x000a4e8f) cmail_ddmenu_btn02_pane

0x8751,	// (0x000a4ead) cmail_ddmenu_btn03_pane_ParamLimits

0x8751,	// (0x000a4ead) cmail_ddmenu_btn03_pane

0x8781,	// (0x000a4edd) main_sp_fs_ctrlbar_pane_ParamLimits

0x879b,	// (0x000a4ef7) main_sp_fs_listscroll_pane_te_cp01_ParamLimits

0x8d37,	// (0x000a5493) list_cmail_body_pane_ParamLimits

0x8db2,	// (0x000a550e) bg_button_pane_cp12

0xe866,	// (0x000aafc2) list_single_cmail_header_detail_pane_g3_ParamLimits

0xe866,	// (0x000aafc2) list_single_cmail_header_detail_pane_g3

0xa564,	// (0x000a6cc0) list_single_cmail_header_detail_pane_t2_ParamLimits

0xa564,	// (0x000a6cc0) list_single_cmail_header_detail_pane_t2

0x0001,

0xfd9f,	// (0x000ac4fb) list_single_cmail_header_detail_pane_t_ParamLimits

0xfd9f,	// (0x000ac4fb) list_single_cmail_header_detail_pane_t

0xa5a5,	// (0x000a6d01) phacti_term_pane_t2_ParamLimits

0xa5a5,	// (0x000a6d01) phacti_term_pane_t2

0x0001,

0xfda9,	// (0x000ac505) phacti_term_pane_t_ParamLimits

0xfda9,	// (0x000ac505) phacti_term_pane_t

0xeac3,	// (0x000ab21f) aid_size_list_single_double

0x9160,	// (0x000a58bc) popup_ezdial_listscroll_window

0x9182,	// (0x000a58de) popup_number_entry_window_cp01

0xb452,	// (0x000a7bae) bg_popup_call_pane_cp09

0xeacf,	// (0x000ab22b) ezdial_list_pane

0xead7,	// (0x000ab233) scroll_pane_cp23

0xca90,	// (0x000a91ec) bg_button_pane_cp028_ParamLimits

0xca90,	// (0x000a91ec) bg_button_pane_cp028

0x9190,	// (0x000a58ec) cmail_ddmenu_btn01_pane_g1_ParamLimits

0x9190,	// (0x000a58ec) cmail_ddmenu_btn01_pane_g1

0x91a2,	// (0x000a58fe) cmail_ddmenu_btn01_pane_g2_ParamLimits

0x91a2,	// (0x000a58fe) cmail_ddmenu_btn01_pane_g2

0x0001,

0xfe21,	// (0x000ac57d) cmail_ddmenu_btn01_pane_g_ParamLimits

0xfe21,	// (0x000ac57d) cmail_ddmenu_btn01_pane_g

0xeadf,	// (0x000ab23b) cmail_ddmenu_btn01_pane_t1_ParamLimits

0xeadf,	// (0x000ab23b) cmail_ddmenu_btn01_pane_t1

0xc860,	// (0x000a8fbc) bg_button_pane_cp029_ParamLimits

0xc860,	// (0x000a8fbc) bg_button_pane_cp029

0x91ae,	// (0x000a590a) cmail_ddmenu_btn02_pane_g1_ParamLimits

0x91ae,	// (0x000a590a) cmail_ddmenu_btn02_pane_g1

0x91c6,	// (0x000a5922) cmail_ddmenu_btn02_pane_t1_ParamLimits

0x91c6,	// (0x000a5922) cmail_ddmenu_btn02_pane_t1

0x0e60,	// (0x0009d5bc) bg_button_pane_cp031_ParamLimits

0x0e60,	// (0x0009d5bc) bg_button_pane_cp031

0x91ae,	// (0x000a590a) cmail_ddmenu_btn03_pane_g1_ParamLimits

0x91ae,	// (0x000a590a) cmail_ddmenu_btn03_pane_g1

0x91c6,	// (0x000a5922) cmail_ddmenu_btn03_pane_t1_ParamLimits

0x91c6,	// (0x000a5922) cmail_ddmenu_btn03_pane_t1

0x6131,	// (0x000a288d) cell_dialer2_keypad_pane_t1_ParamLimits

0x614b,	// (0x000a28a7) cell_dialer2_keypad_pane_t1_copy1_ParamLimits

0x614b,	// (0x000a28a7) cell_dialer2_keypad_pane_t1_copy1

0x803b,	// (0x000a4797) ncimui_group_button_pane

0xa2df,	// (0x000a6a3b) main_sp_fs_calendar_pane_ParamLimits

0x8d50,	// (0x000a54ac) list_single_cmail_header_caption_pane_ParamLimits

0xa5ba,	// (0x000a6d16) aid_recal_txt_sm_pane

0x9c5a,	// (0x000a63b6) mian_recal_day_pane

0xa5f4,	// (0x000a6d50) popup_sp_fs_cale_preview_window_ParamLimits

0xeaf5,	// (0x000ab251) list_recal_day_pane

0xa6d4,	// (0x000a6e30) list_single_recal_day_pane_ParamLimits

0xa6d4,	// (0x000a6e30) list_single_recal_day_pane

0xeb1c,	// (0x000ab278) list_single_recal_day_pane_g1_ParamLimits

0xeb1c,	// (0x000ab278) list_single_recal_day_pane_g1

0xa6e6,	// (0x000a6e42) list_single_recal_day_pane_g2_ParamLimits

0xa6e6,	// (0x000a6e42) list_single_recal_day_pane_g2

0xa6f2,	// (0x000a6e4e) list_single_recal_day_pane_g3_ParamLimits

0xa6f2,	// (0x000a6e4e) list_single_recal_day_pane_g3

0x91ea,	// (0x000a5946) list_single_recal_day_pane_g4_ParamLimits

0x91ea,	// (0x000a5946) list_single_recal_day_pane_g4

0xa6fe,	// (0x000a6e5a) list_single_recal_day_pane_g5_ParamLimits

0xa6fe,	// (0x000a6e5a) list_single_recal_day_pane_g5

0xa70a,	// (0x000a6e66) list_single_recal_day_pane_g6_ParamLimits

0xa70a,	// (0x000a6e66) list_single_recal_day_pane_g6

0x0004,

0xfe30,	// (0x000ac58c) list_single_recal_day_pane_g_ParamLimits

0xfe30,	// (0x000ac58c) list_single_recal_day_pane_g

0xa71e,	// (0x000a6e7a) list_single_recal_day_pane_t1

0xa730,	// (0x000a6e8c) list_single_recal_day_pane_t2

0x0001,

0xfe3b,	// (0x000ac597) list_single_recal_day_pane_t

0x9202,	// (0x000a595e) ncimui_query_button_pane_ParamLimits

0x9202,	// (0x000a595e) ncimui_query_button_pane

0x9212,	// (0x000a596e) ncimui_query_button_pane_t1_ParamLimits

0x9212,	// (0x000a596e) ncimui_query_button_pane_t1

0xeb28,	// (0x000ab284) ncimui_query_button_pane_t2_ParamLimits

0xeb28,	// (0x000ab284) ncimui_query_button_pane_t2

0x0001,

0xfe40,	// (0x000ac59c) ncimui_query_button_pane_t_ParamLimits

0xfe40,	// (0x000ac59c) ncimui_query_button_pane_t

0x9225,	// (0x000a5981) query_button_pane_ParamLimits

0x9225,	// (0x000a5981) query_button_pane

0x9c5a,	// (0x000a63b6) bg_button_pane_cp0028

0xeb3b,	// (0x000ab297) query_button_pane_t1

0x44fc,	// (0x000a0c58) main_tport_pane_ParamLimits

0x8c39,	// (0x000a5395) bg_popup_window_pane_cp01_ParamLimits

0x8c39,	// (0x000a5395) bg_popup_window_pane_cp01

0x8c47,	// (0x000a53a3) heading_pane_cp08_ParamLimits

0x8c47,	// (0x000a53a3) heading_pane_cp08

0x8c55,	// (0x000a53b1) heading_pane_cp07_ParamLimits

0x8c55,	// (0x000a53b1) heading_pane_cp07

0x8cc6,	// (0x000a5422) cell_tport_appsw_pane_g2

0x0002,

0xfd8c,	// (0x000ac4e8) cell_tport_appsw_pane_g

0xa28f,	// (0x000a69eb) input_candi_list_open_g1

0xae86,	// (0x000a75e2) list_cale_time_pane_g6_ParamLimits

0xae86,	// (0x000a75e2) list_cale_time_pane_g6

0x4f7f,	// (0x000a16db) aid_size_touch_calib_1_ParamLimits

0x4f7f,	// (0x000a16db) aid_size_touch_calib_1

0x4f8b,	// (0x000a16e7) aid_size_touch_calib_2_ParamLimits

0x4f8b,	// (0x000a16e7) aid_size_touch_calib_2

0x4f99,	// (0x000a16f5) aid_size_touch_calib_3_ParamLimits

0x4f99,	// (0x000a16f5) aid_size_touch_calib_3

0x4fa9,	// (0x000a1705) aid_size_touch_calib_4_ParamLimits

0x4fa9,	// (0x000a1705) aid_size_touch_calib_4

0x4fb7,	// (0x000a1713) main_touch_calib_button_group_pane_ParamLimits

0x4fb7,	// (0x000a1713) main_touch_calib_button_group_pane

0x4fc5,	// (0x000a1721) main_touch_calib_pane_g1_ParamLimits

0x4fd1,	// (0x000a172d) main_touch_calib_pane_g2_ParamLimits

0x4fdd,	// (0x000a1739) main_touch_calib_pane_g3_ParamLimits

0x4fe9,	// (0x000a1745) main_touch_calib_pane_g4_ParamLimits

0xf756,	// (0x000abeb2) main_touch_calib_pane_g_ParamLimits

0x4ff5,	// (0x000a1751) main_touch_calib_pane_t1_ParamLimits

0x500c,	// (0x000a1768) main_touch_calib_pane_t2_ParamLimits

0x5025,	// (0x000a1781) main_touch_calib_pane_t3_ParamLimits

0x503b,	// (0x000a1797) main_touch_calib_pane_t4_ParamLimits

0x5051,	// (0x000a17ad) main_touch_calib_pane_t5_ParamLimits

0xf75f,	// (0x000abebb) main_touch_calib_pane_t_ParamLimits

0xcfe9,	// (0x000a9745) list_single_fp_cale_pane_g3_ParamLimits

0xcfe9,	// (0x000a9745) list_single_fp_cale_pane_g3

0x65d6,	// (0x000a2d32) bg_button_pane_cp012_ParamLimits

0x65d6,	// (0x000a2d32) bg_vkb2_func_pane_cp03_ParamLimits

0x6fed,	// (0x000a3749) cell_vitu2_function_top_pane_g1_ParamLimits

0x65d6,	// (0x000a2d32) bg_vkb2_func_pane_cp04_ParamLimits

0x7fc1,	// (0x000a471d) main_ncimui_button_group_pane_ParamLimits

0x7fc1,	// (0x000a471d) main_ncimui_button_group_pane

0x8029,	// (0x000a4785) main_ncimui_pane_t3_ParamLimits

0x8029,	// (0x000a4785) main_ncimui_pane_t3

0xe8f3,	// (0x000ab04f) phacti_button_group_pane

0xeac3,	// (0x000ab21f) aid_size_list_single_double_ParamLimits

0x9160,	// (0x000a58bc) popup_ezdial_listscroll_window_ParamLimits

0x9182,	// (0x000a58de) popup_number_entry_window_cp01_ParamLimits

0x9232,	// (0x000a598e) phacti_button_pane_ParamLimits

0x9232,	// (0x000a598e) phacti_button_pane

0x9c5a,	// (0x000a63b6) bg_button_pane_cp14

0xeb49,	// (0x000ab2a5) phacti_button_pane_t1

0x9243,	// (0x000a599f) main_touch_calib_button_pane_ParamLimits

0x9243,	// (0x000a599f) main_touch_calib_button_pane

0xa891,	// (0x000a6fed) bg_button_pane_cp18_ParamLimits

0xa891,	// (0x000a6fed) bg_button_pane_cp18

0xeb57,	// (0x000ab2b3) main_touch_calib_button_pane_t1_ParamLimits

0xeb57,	// (0x000ab2b3) main_touch_calib_button_pane_t1

0xeb6d,	// (0x000ab2c9) main_touch_calib_button_pane_t2_ParamLimits

0xeb6d,	// (0x000ab2c9) main_touch_calib_button_pane_t2

0x0001,

0xfe45,	// (0x000ac5a1) main_touch_calib_button_pane_t_ParamLimits

0xfe45,	// (0x000ac5a1) main_touch_calib_button_pane_t

0x9c5a,	// (0x000a63b6) cell_ncimui_button_pane

0x9c5a,	// (0x000a63b6) bg_button_pane_cp032

0xeb8b,	// (0x000ab2e7) cell_ncimui_button_pane_t1

0x61a7,	// (0x000a2903) image3_infobar_pane_ParamLimits

0x61a7,	// (0x000a2903) image3_infobar_pane

0x83b6,	// (0x000a4b12) fs_bigclock_status_pane_ParamLimits

0x83b6,	// (0x000a4b12) fs_bigclock_status_pane

0x83c3,	// (0x000a4b1f) main_fs_bigclock_clock_pane_ParamLimits

0x83c3,	// (0x000a4b1f) main_fs_bigclock_clock_pane

0x83d9,	// (0x000a4b35) main_fs_bigclock_indi_pane_ParamLimits

0x83d9,	// (0x000a4b35) main_fs_bigclock_indi_pane

0x840b,	// (0x000a4b67) main_fs_bigclock_swipe_pane_ParamLimits

0x840b,	// (0x000a4b67) main_fs_bigclock_swipe_pane

0x9c5a,	// (0x000a63b6) main_fs_clock_dumped_data

0xe425,	// (0x000aab81) list_single_fs_bigclock_indicator_pane_g1_ParamLimits

0xe425,	// (0x000aab81) list_single_fs_bigclock_indicator_pane_g1

0xe44f,	// (0x000aabab) list_single_fs_bigclock_indicator_pane_g2_ParamLimits

0xe44f,	// (0x000aabab) list_single_fs_bigclock_indicator_pane_g2

0xe469,	// (0x000aabc5) list_single_fs_bigclock_indicator_pane_g3_ParamLimits

0xe469,	// (0x000aabc5) list_single_fs_bigclock_indicator_pane_g3

0xe483,	// (0x000aabdf) list_single_fs_bigclock_indicator_pane_g4_ParamLimits

0xe483,	// (0x000aabdf) list_single_fs_bigclock_indicator_pane_g4

0x0004,

0xfc6d,	// (0x000ac3c9) list_single_fs_bigclock_indicator_pane_g_ParamLimits

0xfc6d,	// (0x000ac3c9) list_single_fs_bigclock_indicator_pane_g

0xe4ae,	// (0x000aac0a) list_single_fs_bigclock_indicator_pane_t1_ParamLimits

0xe4ae,	// (0x000aac0a) list_single_fs_bigclock_indicator_pane_t1

0xe4d6,	// (0x000aac32) list_single_fs_bigclock_indicator_pane_t2_ParamLimits

0xe4d6,	// (0x000aac32) list_single_fs_bigclock_indicator_pane_t2

0xe4fe,	// (0x000aac5a) list_single_fs_bigclock_indicator_pane_t3_ParamLimits

0xe4fe,	// (0x000aac5a) list_single_fs_bigclock_indicator_pane_t3

0xe526,	// (0x000aac82) list_single_fs_bigclock_indicator_pane_t4_ParamLimits

0xe526,	// (0x000aac82) list_single_fs_bigclock_indicator_pane_t4

0x0004,

0xfc78,	// (0x000ac3d4) list_single_fs_bigclock_indicator_pane_t_ParamLimits

0xfc78,	// (0x000ac3d4) list_single_fs_bigclock_indicator_pane_t

0xeb99,	// (0x000ab2f5) image3_infobar_fav_pane_ParamLimits

0xeb99,	// (0x000ab2f5) image3_infobar_fav_pane

0xeba9,	// (0x000ab305) image3_infobar_loc_pane_ParamLimits

0xeba9,	// (0x000ab305) image3_infobar_loc_pane

0xebbf,	// (0x000ab31b) image3_infobar_time_pane_ParamLimits

0xebbf,	// (0x000ab31b) image3_infobar_time_pane

0xccb1,	// (0x000a940d) image3_infobar_time_pane_g1

0xebcf,	// (0x000ab32b) image3_infobar_time_pane_t1

0xccb1,	// (0x000a940d) image3_infobar_loc_pane_g1

0xebdd,	// (0x000ab339) image3_infobar_loc_pane_g2

0x0001,

0xfe4a,	// (0x000ac5a6) image3_infobar_loc_pane_g

0xebe5,	// (0x000ab341) image3_infobar_loc_pane_t1

0xccb1,	// (0x000a940d) image3_infobar_fav_pane_g1

0xebf3,	// (0x000ab34f) image3_infobar_fav_pane_g2

0x0001,

0xfe4f,	// (0x000ac5ab) image3_infobar_fav_pane_g

0xebfb,	// (0x000ab357) fs_bigclock_status_battery_pane

0xec04,	// (0x000ab360) fs_bigclock_status_signal_pane

0xec0d,	// (0x000ab369) fs_bigclock_status_title_pane

0xec16,	// (0x000ab372) fs_bigclock_status_signal_pane_g1

0xec1f,	// (0x000ab37b) fs_bigclock_status_signal_pane_g2

0x0001,

0xfe54,	// (0x000ac5b0) fs_bigclock_status_signal_pane_g

0xec27,	// (0x000ab383) fs_bigclock_status_battery_pane_g1

0xec30,	// (0x000ab38c) fs_bigclock_status_battery_pane_g2

0x0001,

0xfe59,	// (0x000ac5b5) fs_bigclock_status_battery_pane_g

0xec38,	// (0x000ab394) fs_bigclock_status_title_pane_t1

0xccb1,	// (0x000a940d) main_fs_bigclock_clock_pane_g1

0xec46,	// (0x000ab3a2) main_fs_bigclock_clock_pane_g2

0xec46,	// (0x000ab3a2) main_fs_bigclock_clock_pane_g3

0xec46,	// (0x000ab3a2) main_fs_bigclock_clock_pane_g4

0x0003,

0xfe5e,	// (0x000ac5ba) main_fs_bigclock_clock_pane_g

0xec4e,	// (0x000ab3aa) main_fs_bigclock_clock_pane_t1

0xec5c,	// (0x000ab3b8) main_fs_bigclock_clock_pane_t2

0x0001,

0xfe67,	// (0x000ac5c3) main_fs_bigclock_clock_pane_t

0x9253,	// (0x000a59af) list_single_fs_bigclock_indicator_pane_ParamLimits

0x9253,	// (0x000a59af) list_single_fs_bigclock_indicator_pane

0x9264,	// (0x000a59c0) list_single_fs_bigclock_pane_ParamLimits

0x9264,	// (0x000a59c0) list_single_fs_bigclock_pane

0xec74,	// (0x000ab3d0) main_fs_bigclock_indicator_pane_t1

0xec83,	// (0x000ab3df) list_single_fs_bigclock_pane_g1

0xec8b,	// (0x000ab3e7) list_single_fs_bigclock_pane_t1

0xccb1,	// (0x000a940d) main_fs_bigclock_swipe_pane_g1

0xecce,	// (0x000ab42a) main_fs_bigclock_swipe_pane_g2

0x0001,

0xfe78,	// (0x000ac5d4) main_fs_bigclock_swipe_pane_g

0xecd6,	// (0x000ab432) main_fs_bigclock_swipe_pane_t1_ParamLimits

0xecd6,	// (0x000ab432) main_fs_bigclock_swipe_pane_t1

0x3387,	// (0x0009fae3) call_type_pane_ParamLimits

0x9c5a,	// (0x000a63b6) main_btmg_pane

0xaf77,	// (0x000a76d3) list_single_cale_mrui_row_pane_g2_ParamLimits

0xaf77,	// (0x000a76d3) list_single_cale_mrui_row_pane_g2

0x0002,

0xfdeb,	// (0x000ac547) list_single_cale_mrui_row_pane_g_ParamLimits

0xfdeb,	// (0x000ac547) list_single_cale_mrui_row_pane_g

0xa6c2,	// (0x000a6e1e) list_recal_vselct_arw_lo_pane

0xeb14,	// (0x000ab270) list_recal_vselct_arw_up_pane

0xa6ca,	// (0x000a6e26) list_recal_vselct_pane

0x92ba,	// (0x000a5a16) btmg_button_pane

0x92c6,	// (0x000a5a22) main_btmg_pane_g1

0x9c5a,	// (0x000a63b6) bg_button_pane_cp044

0xecf3,	// (0x000ab44f) btmg_button_pane_t1

0xc84c,	// (0x000a8fa8) aid_listscroll_gen

0xa2df,	// (0x000a6a3b) main_cntbar_detail_pane

0xe847,	// (0x000aafa3) list_cmail_folder_pane

0xe857,	// (0x000aafb3) sp_fs_scroll_pane_cp03_ParamLimits

0x92ce,	// (0x000a5a2a) list_single_fs_dyc_pane_cp01_ParamLimits

0x92ce,	// (0x000a5a2a) list_single_fs_dyc_pane_cp01

0xed01,	// (0x000ab45d) aid_size_cmail_indent

0xaf83,	// (0x000a76df) list_single_dyc_row_pane_cp01

0x930b,	// (0x000a5a67) cntbar_detail_list_pane_ParamLimits

0x930b,	// (0x000a5a67) cntbar_detail_list_pane

0x934b,	// (0x000a5aa7) main_cntbar_detail_cont_pane_ParamLimits

0x934b,	// (0x000a5aa7) main_cntbar_detail_cont_pane

0x32aa,	// (0x0009fa06) scroll_pane_cp032_ParamLimits

0x32aa,	// (0x0009fa06) scroll_pane_cp032

0x9357,	// (0x000a5ab3) cntbar_detail_list_event_pane_ParamLimits

0x9357,	// (0x000a5ab3) cntbar_detail_list_event_pane

0x9319,	// (0x000a5a75) cntbar_detail_list_shct_pane

0xad20,	// (0x000a747c) aid_list_gen

0xed0a,	// (0x000ab466) aid_scroll

0xed13,	// (0x000ab46f) aid_size_touch_scroll_bar

0x7738,	// (0x000a3e94) aid_list_double

0xed1c,	// (0x000ab478) aid_list_single

0x7726,	// (0x000a3e82) aid_list_single_lg

0xaf8c,	// (0x000a76e8) aid_list_z_g_a_sm

0xaf94,	// (0x000a76f0) aid_list_z_g_d

0xaf9c,	// (0x000a76f8) aid_txt_z_prm

0x9367,	// (0x000a5ac3) aid_txt_z_prm_cp01

0x9375,	// (0x000a5ad1) aid_txt_z_sec

0x9383,	// (0x000a5adf) main_cntbar_detail_cont_pane_g1_ParamLimits

0x9383,	// (0x000a5adf) main_cntbar_detail_cont_pane_g1

0x9390,	// (0x000a5aec) main_cntbar_detail_cont_pane_g2_ParamLimits

0x9390,	// (0x000a5aec) main_cntbar_detail_cont_pane_g2

0x0001,

0xfe7d,	// (0x000ac5d9) main_cntbar_detail_cont_pane_g_ParamLimits

0xfe7d,	// (0x000ac5d9) main_cntbar_detail_cont_pane_g

0xed25,	// (0x000ab481) main_cntbar_detail_cont_pane_t1

0xed33,	// (0x000ab48f) main_cntbar_detail_cont_pane_t2

0xed41,	// (0x000ab49d) main_cntbar_detail_cont_pane_t3

0x0002,

0xfe82,	// (0x000ac5de) main_cntbar_detail_cont_pane_t

0x939c,	// (0x000a5af8) cell_cntbar_detail_list_shct_pane_ParamLimits

0x939c,	// (0x000a5af8) cell_cntbar_detail_list_shct_pane

0xed4f,	// (0x000ab4ab) cntbar_detail_list_shct_pane_g1

0xed58,	// (0x000ab4b4) cntbar_detail_list_shct_pane_g2

0x0001,

0xfe89,	// (0x000ac5e5) cntbar_detail_list_shct_pane_g

0x93b0,	// (0x000a5b0c) cntbar_detail_list_event_pane_g1_ParamLimits

0x93b0,	// (0x000a5b0c) cntbar_detail_list_event_pane_g1

0x93bc,	// (0x000a5b18) cntbar_detail_list_event_pane_g2_ParamLimits

0x93bc,	// (0x000a5b18) cntbar_detail_list_event_pane_g2

0x0005,

0xfe8e,	// (0x000ac5ea) cntbar_detail_list_event_pane_g_ParamLimits

0xfe8e,	// (0x000ac5ea) cntbar_detail_list_event_pane_g

0x942a,	// (0x000a5b86) cntbar_detail_list_event_pane_t1_ParamLimits

0x942a,	// (0x000a5b86) cntbar_detail_list_event_pane_t1

0x943f,	// (0x000a5b9b) cntbar_detail_list_event_pane_t2_ParamLimits

0x943f,	// (0x000a5b9b) cntbar_detail_list_event_pane_t2

0x0002,

0xfe9b,	// (0x000ac5f7) cntbar_detail_list_event_pane_t_ParamLimits

0xfe9b,	// (0x000ac5f7) cntbar_detail_list_event_pane_t

0xccb1,	// (0x000a940d) cell_cntbar_detail_list_shct_pane_g1

0x375a,	// (0x0009feb6) navi_pane_mv_g3

0xa2df,	// (0x000a6a3b) main_cntbar_detail_pane_ParamLimits

0x9c5a,	// (0x000a63b6) main_notif_wgt_pane

0x5e51,	// (0x000a25ad) aid_tch_main_mp4_pane_g4

0x6090,	// (0x000a27ec) popup_slider_window_cp02

0xa6b8,	// (0x000a6e14) list_recal_day_event_pane

0x92eb,	// (0x000a5a47) cntbar_detail_btn_pane_ParamLimits

0x92eb,	// (0x000a5a47) cntbar_detail_btn_pane

0x92fb,	// (0x000a5a57) cntbar_detail_btn_pane_cp01_ParamLimits

0x92fb,	// (0x000a5a57) cntbar_detail_btn_pane_cp01

0x9319,	// (0x000a5a75) cntbar_detail_list_shct_pane_ParamLimits

0x9325,	// (0x000a5a81) cntbar_detail_pane_g1_ParamLimits

0x9325,	// (0x000a5a81) cntbar_detail_pane_g1

0x9335,	// (0x000a5a91) cntbar_detail_pane_t1_ParamLimits

0x9335,	// (0x000a5a91) cntbar_detail_pane_t1

0x93c8,	// (0x000a5b24) cntbar_detail_list_event_pane_g3_ParamLimits

0x93c8,	// (0x000a5b24) cntbar_detail_list_event_pane_g3

0x93e0,	// (0x000a5b3c) cntbar_detail_list_event_pane_g4_ParamLimits

0x93e0,	// (0x000a5b3c) cntbar_detail_list_event_pane_g4

0x93f8,	// (0x000a5b54) cntbar_detail_list_event_pane_g5_ParamLimits

0x93f8,	// (0x000a5b54) cntbar_detail_list_event_pane_g5

0x9410,	// (0x000a5b6c) cntbar_detail_list_event_pane_g6_ParamLimits

0x9410,	// (0x000a5b6c) cntbar_detail_list_event_pane_g6

0x9454,	// (0x000a5bb0) cntbar_detail_list_event_pane_t3_ParamLimits

0x9454,	// (0x000a5bb0) cntbar_detail_list_event_pane_t3

0x9466,	// (0x000a5bc2) popup_notif_wgt_window_ParamLimits

0x9466,	// (0x000a5bc2) popup_notif_wgt_window

0x9476,	// (0x000a5bd2) popup_submenu_window_cp01_ParamLimits

0x9476,	// (0x000a5bd2) popup_submenu_window_cp01

0xb452,	// (0x000a7bae) bg_popup_window_pane_cp10

0xed61,	// (0x000ab4bd) listscroll_notif_wgt_pane

0xed73,	// (0x000ab4cf) list_notif_wgt_window

0xed7c,	// (0x000ab4d8) scroll_pane_cp033

0x9486,	// (0x000a5be2) list_notif_wgt_row_pane_ParamLimits

0x9486,	// (0x000a5be2) list_notif_wgt_row_pane

0xed85,	// (0x000ab4e1) aid_size_list_notif_wgt_del

0xed92,	// (0x000ab4ee) list_notif_wgt_row_pane_g1

0xed9e,	// (0x000ab4fa) list_notif_wgt_row_pane_g2

0xedaa,	// (0x000ab506) list_notif_wgt_row_pane_g3

0x0002,

0xfea2,	// (0x000ac5fe) list_notif_wgt_row_pane_g

0xedb7,	// (0x000ab513) list_notif_wgt_row_pane_t1

0xedcc,	// (0x000ab528) list_notif_wgt_row_pane_t2

0xedde,	// (0x000ab53a) list_notif_wgt_row_pane_t3

0x0002,

0xfea9,	// (0x000ac605) list_notif_wgt_row_pane_t

0xd8e5,	// (0x000aa041) list_recal_day_event_pane_g1

0xedf0,	// (0x000ab54c) list_recal_day_event_pane_t1

0x9c5a,	// (0x000a63b6) bg_button_pane_cp045

0xedff,	// (0x000ab55b) cntbar_detail_btn_pane_t1

0xc860,	// (0x000a8fbc) main_callh_pane_ParamLimits

0xc860,	// (0x000a8fbc) main_callh_pane

0x9c5a,	// (0x000a63b6) main_coverflow0_pane

0x9c5a,	// (0x000a63b6) main_wgtman_pane

0x8423,	// (0x000a4b7f) main_fs_bigclock_unlock_btn_pane_ParamLimits

0x8423,	// (0x000a4b7f) main_fs_bigclock_unlock_btn_pane

0x8cbe,	// (0x000a541a) bg_button_pane_cp16

0x8cce,	// (0x000a542a) cell_tport_appsw_pane_g3

0x9497,	// (0x000a5bf3) cf0_flow_pane_ParamLimits

0x9497,	// (0x000a5bf3) cf0_flow_pane

0xee0d,	// (0x000ab569) listscroll_cf0_pane

0xee18,	// (0x000ab574) main_cf0_pane_g1

0x94a6,	// (0x000a5c02) main_cf0_pane_t1_ParamLimits

0x94a6,	// (0x000a5c02) main_cf0_pane_t1

0x94ba,	// (0x000a5c16) main_cf0_pane_t2_ParamLimits

0x94ba,	// (0x000a5c16) main_cf0_pane_t2

0x0001,

0xfeb5,	// (0x000ac611) main_cf0_pane_t_ParamLimits

0xfeb5,	// (0x000ac611) main_cf0_pane_t

0xee2a,	// (0x000ab586) scroll_pane_cp11

0x94ce,	// (0x000a5c2a) cf0_flow_pane_g1

0x94d6,	// (0x000a5c32) cf0_flow_pane_g2

0x0001,

0xfeba,	// (0x000ac616) cf0_flow_pane_g

0x94de,	// (0x000a5c3a) cf0_flow_pane_t1

0x9c5a,	// (0x000a63b6) main_call6_pane

0x9c5a,	// (0x000a63b6) main_calllock_pane

0x94ec,	// (0x000a5c48) call6_btn_grp_pane_ParamLimits

0x94ec,	// (0x000a5c48) call6_btn_grp_pane

0x94f9,	// (0x000a5c55) call6_pane_g1_ParamLimits

0x94f9,	// (0x000a5c55) call6_pane_g1

0x9509,	// (0x000a5c65) popup_call6_1st_window_ParamLimits

0x9509,	// (0x000a5c65) popup_call6_1st_window

0x9517,	// (0x000a5c73) popup_call6_2nd_window_ParamLimits

0x9517,	// (0x000a5c73) popup_call6_2nd_window

0x9525,	// (0x000a5c81) cell_call6_btn_pane_ParamLimits

0x9525,	// (0x000a5c81) cell_call6_btn_pane

0xb452,	// (0x000a7bae) bg_popup_call2_in_pane_cp03

0xee35,	// (0x000ab591) popup_call6_1st_window_g1

0xee3d,	// (0x000ab599) popup_call6_1st_window_g2

0xee45,	// (0x000ab5a1) popup_call6_1st_window_g3

0x0002,

0xfebf,	// (0x000ac61b) popup_call6_1st_window_g

0xee4d,	// (0x000ab5a9) popup_call6_1st_window_t1

0xee5c,	// (0x000ab5b8) popup_call6_1st_window_t2

0xee6c,	// (0x000ab5c8) popup_call6_1st_window_t3

0x0002,

0xfec6,	// (0x000ac622) popup_call6_1st_window_t

0xb452,	// (0x000a7bae) bg_popup_call2_in_pane_cp04

0xee35,	// (0x000ab591) popup_call6_2nd_window_g1

0xee3d,	// (0x000ab599) popup_call6_2nd_window_g2

0xee45,	// (0x000ab5a1) popup_call6_2nd_window_g3

0x0002,

0xfebf,	// (0x000ac61b) popup_call6_2nd_window_g

0xee4d,	// (0x000ab5a9) popup_call6_2nd_window_t1

0x9c5a,	// (0x000a63b6) bg_button_pane_cp15

0xee7c,	// (0x000ab5d8) cell_call6_btn_pane_g1

0xee85,	// (0x000ab5e1) cell_call6_btn_pane_t1

0x9534,	// (0x000a5c90) listscroll_wgtman_pane_ParamLimits

0x9534,	// (0x000a5c90) listscroll_wgtman_pane

0x9550,	// (0x000a5cac) wgtman_btn_pane_ParamLimits

0x9550,	// (0x000a5cac) wgtman_btn_pane

0xb2fe,	// (0x000a7a5a) aid_scroll_copy1

0xee94,	// (0x000ab5f0) list_wgtman_pane

0x9585,	// (0x000a5ce1) wgtman_btn_pane_g1_ParamLimits

0x9585,	// (0x000a5ce1) wgtman_btn_pane_g1

0x95ad,	// (0x000a5d09) wgtman_btn_pane_t1_ParamLimits

0x95ad,	// (0x000a5d09) wgtman_btn_pane_t1

0xee9e,	// (0x000ab5fa) wgtman_btn_pane_t2_ParamLimits

0xee9e,	// (0x000ab5fa) wgtman_btn_pane_t2

0x0001,

0xfecd,	// (0x000ac629) wgtman_btn_pane_t_ParamLimits

0xfecd,	// (0x000ac629) wgtman_btn_pane_t

0x95e4,	// (0x000a5d40) listrow_wgtman_pane_ParamLimits

0x95e4,	// (0x000a5d40) listrow_wgtman_pane

0x95f8,	// (0x000a5d54) listrow_wgtman_pane_g1

0x9605,	// (0x000a5d61) listrow_wgtman_pane_g2

0x0001,

0xfed2,	// (0x000ac62e) listrow_wgtman_pane_g

0x9623,	// (0x000a5d7f) listrow_wgtman_pane_t1

0x963b,	// (0x000a5d97) listrow_wgtman_pane_t2

0x0001,

0xfed7,	// (0x000ac633) listrow_wgtman_pane_t

0x9661,	// (0x000a5dbd) wait_bar_pane_cp09

0xeeb5,	// (0x000ab611) main_calllock_btn_pane

0xeebf,	// (0x000ab61b) main_calllock_pane_g1

0x9c5a,	// (0x000a63b6) bg_button_pane_cp17

0xeecb,	// (0x000ab627) main_calllock_btn_pane_g1

0xeed4,	// (0x000ab630) main_calllock_btn_pane_t1

0x9c5a,	// (0x000a63b6) main_dialer3_pane

0x9c5a,	// (0x000a63b6) main_fmrd2_pane

0xccb1,	// (0x000a940d) main_fs_bigclock_unlock_btn_pane_g1

0xeeeb,	// (0x000ab647) main_fs_bigclock_unlock_btn_pane_t1

0x9673,	// (0x000a5dcf) area_fmrd2_info_pane_ParamLimits

0x9673,	// (0x000a5dcf) area_fmrd2_info_pane

0x967f,	// (0x000a5ddb) area_fmrd2_visual_pane_ParamLimits

0x967f,	// (0x000a5ddb) area_fmrd2_visual_pane

0x968d,	// (0x000a5de9) fmrd2_indi_pane_ParamLimits

0x968d,	// (0x000a5de9) fmrd2_indi_pane

0x969a,	// (0x000a5df6) area_fmrd2_visual_pane_g1

0x96a2,	// (0x000a5dfe) area_fmrd2_visual_pane_t1

0x96b2,	// (0x000a5e0e) area_fmrd2_visual_pane_t2

0x96c2,	// (0x000a5e1e) area_fmrd2_visual_pane_t3

0x0002,

0xfee1,	// (0x000ac63d) area_fmrd2_visual_pane_t

0x96d2,	// (0x000a5e2e) area_fmrd2_info_pane_g1

0x96da,	// (0x000a5e36) area_fmrd2_info_pane_t1

0x96ea,	// (0x000a5e46) area_fmrd2_info_pane_t2

0x96fa,	// (0x000a5e56) area_fmrd2_info_pane_t3

0x970a,	// (0x000a5e66) area_fmrd2_info_pane_t4

0x0003,

0xfee8,	// (0x000ac644) area_fmrd2_info_pane_t

0x971a,	// (0x000a5e76) fmrd2_indi_pane_t1

0x972a,	// (0x000a5e86) fmrd2_indi_pane_t2

0x973a,	// (0x000a5e96) fmrd2_indi_pane_t3

0x0002,

0xfef1,	// (0x000ac64d) fmrd2_indi_pane_t

0xe492,	// (0x000aabee) list_single_fs_bigclock_indicator_pane_g5_ParamLimits

0xe492,	// (0x000aabee) list_single_fs_bigclock_indicator_pane_g5

0xe53b,	// (0x000aac97) list_single_fs_bigclock_indicator_pane_t5_ParamLimits

0xe53b,	// (0x000aac97) list_single_fs_bigclock_indicator_pane_t5

0x8ed4,	// (0x000a5630) aid_cell_bcale_month_pane_ParamLimits

0x8ed4,	// (0x000a5630) aid_cell_bcale_month_pane

0x8ef2,	// (0x000a564e) bcale_month_pane_ParamLimits

0x8ef2,	// (0x000a564e) bcale_month_pane

0x8f0e,	// (0x000a566a) bcale_preview_pane_ParamLimits

0x8f0e,	// (0x000a566a) bcale_preview_pane

0xec8b,	// (0x000ab3e7) list_single_fs_bigclock_pane_t1_ParamLimits

0xecaa,	// (0x000ab406) list_single_fs_bigclock_pane_t2_ParamLimits

0xecaa,	// (0x000ab406) list_single_fs_bigclock_pane_t2

0x0001,

0xfe73,	// (0x000ac5cf) list_single_fs_bigclock_pane_t_ParamLimits

0xfe73,	// (0x000ac5cf) list_single_fs_bigclock_pane_t

0xeee3,	// (0x000ab63f) main_fs_bigclock_unlock_btn_pane_g2

0x0001,

0xfedc,	// (0x000ac638) main_fs_bigclock_unlock_btn_pane_g

0x974a,	// (0x000a5ea6) aid_dia3_key_size_ParamLimits

0x974a,	// (0x000a5ea6) aid_dia3_key_size

0x9756,	// (0x000a5eb2) aid_dia3_listrow_size_ParamLimits

0x9756,	// (0x000a5eb2) aid_dia3_listrow_size

0x9766,	// (0x000a5ec2) dia3_keypad_fun_pane_ParamLimits

0x9766,	// (0x000a5ec2) dia3_keypad_fun_pane

0x9776,	// (0x000a5ed2) dia3_keypad_num_pane_ParamLimits

0x9776,	// (0x000a5ed2) dia3_keypad_num_pane

0x9786,	// (0x000a5ee2) dia3_listscroll_pane_ParamLimits

0x9786,	// (0x000a5ee2) dia3_listscroll_pane

0x9794,	// (0x000a5ef0) dia3_numentry_pane_ParamLimits

0x9794,	// (0x000a5ef0) dia3_numentry_pane

0xeef9,	// (0x000ab655) dia3_list_pane

0xef04,	// (0x000ab660) scroll_pane_cp12

0x9c5a,	// (0x000a63b6) bg_dia3_numentry_pane

0x97a2,	// (0x000a5efe) dia3_numentry_pane_t1

0x97b1,	// (0x000a5f0d) cell_dia3_key_num_pane

0x97b9,	// (0x000a5f15) cell_dia3_key0_fun_pane_ParamLimits

0x97b9,	// (0x000a5f15) cell_dia3_key0_fun_pane

0x97c6,	// (0x000a5f22) cell_dia3_key1_fun_pane_ParamLimits

0x97c6,	// (0x000a5f22) cell_dia3_key1_fun_pane

0x97d3,	// (0x000a5f2f) dia3_listrow_pane

0xe190,	// (0x000aa8ec) bg_dia3_numentry_pane_g1

0x9c5a,	// (0x000a63b6) bg_button_pane_cp21

0xef0f,	// (0x000ab66b) cell_dia3_key_num_pane_t1

0xef1d,	// (0x000ab679) cell_dia3_key_num_pane_t2

0xef2c,	// (0x000ab688) cell_dia3_key_num_pane_t3

0xef3b,	// (0x000ab697) cell_dia3_key_num_pane_t4

0x0003,

0xfef8,	// (0x000ac654) cell_dia3_key_num_pane_t

0x9c5a,	// (0x000a63b6) bg_button_pane_cp19

0x97e0,	// (0x000a5f3c) cell_dia3_key0_fun_pane_g1

0x9c5a,	// (0x000a63b6) bg_button_pane_cp20

0x97e8,	// (0x000a5f44) cell_dia3_key1_fun_pane_g1

0x97f0,	// (0x000a5f4c) area_left_week_number_pane

0x9803,	// (0x000a5f5f) area_top_day_name_pane

0x9811,	// (0x000a5f6d) frame_month_view_pane

0xef4a,	// (0x000ab6a6) grid_month_view_pane

0x9826,	// (0x000a5f82) cell_top_day_name_pane_ParamLimits

0x9826,	// (0x000a5f82) cell_top_day_name_pane

0x9842,	// (0x000a5f9e) cell_area_left_week_number_pane_ParamLimits

0x9842,	// (0x000a5f9e) cell_area_left_week_number_pane

0x9863,	// (0x000a5fbf) cell_month_view_pane_ParamLimits

0x9863,	// (0x000a5fbf) cell_month_view_pane

0xef58,	// (0x000ab6b4) frm_month_g1

0x988f,	// (0x000a5feb) frm_month_g2

0x98a0,	// (0x000a5ffc) frm_month_g3

0x98b1,	// (0x000a600d) frm_month_g4

0x98c2,	// (0x000a601e) frm_month_g5

0x98d3,	// (0x000a602f) frm_month_g6

0x98e6,	// (0x000a6042) frm_month_g7

0xef65,	// (0x000ab6c1) frm_month_g8

0x98f9,	// (0x000a6055) frm_month_g9

0x9906,	// (0x000a6062) frm_month_g10

0x9913,	// (0x000a606f) frm_month_g11

0x9920,	// (0x000a607c) frm_month_g12

0x992d,	// (0x000a6089) frm_month_g13

0x993c,	// (0x000a6098) frm_month_g14

0x994b,	// (0x000a60a7) frm_month_g15

0x995a,	// (0x000a60b6) frm_month_g16

0x000f,

0xff01,	// (0x000ac65d) frm_month_g

0xef72,	// (0x000ab6ce) cell_top_day_name_pane_t1

0x9969,	// (0x000a60c5) cell_area_left_week_number_pane_g1

0x9978,	// (0x000a60d4) cell_area_left_week_number_pane_t1

0xcee9,	// (0x000a9645) cell_month_view_pane_g1

0x998e,	// (0x000a60ea) cell_month_view_pane_t1

0x9c5a,	// (0x000a63b6) main_fps_pane

0xe72b,	// (0x000aae87) cmail_ddmenu_btn02_pane_cp1_ParamLimits

0xe72b,	// (0x000aae87) cmail_ddmenu_btn02_pane_cp1

0xe747,	// (0x000aaea3) cmail_ddmenu_btn02_pane_cp2_ParamLimits

0xe747,	// (0x000aaea3) cmail_ddmenu_btn02_pane_cp2

0x91ba,	// (0x000a5916) cmail_ddmenu_btn02_pane_g2_ParamLimits

0x91ba,	// (0x000a5916) cmail_ddmenu_btn02_pane_g2

0x0001,

0xfe26,	// (0x000ac582) cmail_ddmenu_btn02_pane_g_ParamLimits

0xfe26,	// (0x000ac582) cmail_ddmenu_btn02_pane_g

0x91d8,	// (0x000a5934) cmail_ddmenu_btn02_pane_t2_ParamLimits

0x91d8,	// (0x000a5934) cmail_ddmenu_btn02_pane_t2

0x0001,

0xfe2b,	// (0x000ac587) cmail_ddmenu_btn02_pane_t_ParamLimits

0xfe2b,	// (0x000ac587) cmail_ddmenu_btn02_pane_t

0x99a4,	// (0x000a6100) fps_text_pane_ParamLimits

0x99a4,	// (0x000a6100) fps_text_pane

0x99b1,	// (0x000a610d) main_fps_pane_g1_ParamLimits

0x99b1,	// (0x000a610d) main_fps_pane_g1

0x99bd,	// (0x000a6119) wait_bar_pane_cp010_ParamLimits

0x99bd,	// (0x000a6119) wait_bar_pane_cp010

0x99c9,	// (0x000a6125) fps_text_pane_t1_ParamLimits

0x99c9,	// (0x000a6125) fps_text_pane_t1

0x64c4,	// (0x000a2c20) cam4_image_uncrop_pane_g1

0x64cd,	// (0x000a2c29) cam4_image_uncrop_pane_g2

0x64d6,	// (0x000a2c32) cam4_image_uncrop_pane_g3

0x64df,	// (0x000a2c3b) cam4_image_uncrop_pane_g4

0x0003,

0xf8ee,	// (0x000ac04a) cam4_image_uncrop_pane_g

0x97d3,	// (0x000a5f2f) dia3_listrow_pane_ParamLimits

0x9c5a,	// (0x000a63b6) main_phob2_pane

0x8ca0,	// (0x000a53fc) cell_tport_appsw_pane_cp02_ParamLimits

0x8ca0,	// (0x000a53fc) cell_tport_appsw_pane_cp02

0x8caf,	// (0x000a540b) cell_tport_appsw_pane_cp03_ParamLimits

0x8caf,	// (0x000a540b) cell_tport_appsw_pane_cp03

0x9c5a,	// (0x000a63b6) phob2_contact_card_pane

0x9c5a,	// (0x000a63b6) phob2_listscroll_pane

0xef85,	// (0x000ab6e1) phob2_list_pane

0xef8d,	// (0x000ab6e9) scroll_pane_cp034

0x99e2,	// (0x000a613e) phob2_cc_data_pane_ParamLimits

0x99e2,	// (0x000a613e) phob2_cc_data_pane

0x99fe,	// (0x000a615a) phob2_cc_listscroll_pane_ParamLimits

0x99fe,	// (0x000a615a) phob2_cc_listscroll_pane

0x9a1a,	// (0x000a6176) list_double_large_graphic_phob2_pane_ParamLimits

0x9a1a,	// (0x000a6176) list_double_large_graphic_phob2_pane

0x9a32,	// (0x000a618e) list_double_large_graphic_phob2_pane_g1_ParamLimits

0x9a32,	// (0x000a618e) list_double_large_graphic_phob2_pane_g1

0x9a48,	// (0x000a61a4) list_double_large_graphic_phob2_pane_g2_ParamLimits

0x9a48,	// (0x000a61a4) list_double_large_graphic_phob2_pane_g2

0x0001,

0xff22,	// (0x000ac67e) list_double_large_graphic_phob2_pane_g_ParamLimits

0xff22,	// (0x000ac67e) list_double_large_graphic_phob2_pane_g

0x9a54,	// (0x000a61b0) list_double_large_graphic_phob2_pane_t1_ParamLimits

0x9a54,	// (0x000a61b0) list_double_large_graphic_phob2_pane_t1

0x9a69,	// (0x000a61c5) list_double_large_graphic_phob2_pane_t2_ParamLimits

0x9a69,	// (0x000a61c5) list_double_large_graphic_phob2_pane_t2

0x0001,

0xff27,	// (0x000ac683) list_double_large_graphic_phob2_pane_t_ParamLimits

0xff27,	// (0x000ac683) list_double_large_graphic_phob2_pane_t

0x9c5a,	// (0x000a63b6) list_highlight_pane_cp024

0x9a7b,	// (0x000a61d7) phob2_cc_button_pane

0x9a83,	// (0x000a61df) phob2_cc_data_pane_g1_ParamLimits

0x9a83,	// (0x000a61df) phob2_cc_data_pane_g1

0x9a8f,	// (0x000a61eb) phob2_cc_data_pane_g2_ParamLimits

0x9a8f,	// (0x000a61eb) phob2_cc_data_pane_g2

0x0001,

0xff2c,	// (0x000ac688) phob2_cc_data_pane_g_ParamLimits

0xff2c,	// (0x000ac688) phob2_cc_data_pane_g

0x9a9b,	// (0x000a61f7) phob2_cc_data_pane_t1_ParamLimits

0x9a9b,	// (0x000a61f7) phob2_cc_data_pane_t1

0x9aad,	// (0x000a6209) phob2_cc_data_pane_t2_ParamLimits

0x9aad,	// (0x000a6209) phob2_cc_data_pane_t2

0x9abf,	// (0x000a621b) phob2_cc_data_pane_t3_ParamLimits

0x9abf,	// (0x000a621b) phob2_cc_data_pane_t3

0x0002,

0xff31,	// (0x000ac68d) phob2_cc_data_pane_t_ParamLimits

0xff31,	// (0x000ac68d) phob2_cc_data_pane_t

0xef95,	// (0x000ab6f1) phob2_cc_list_pane_ParamLimits

0xef95,	// (0x000ab6f1) phob2_cc_list_pane

0xdd96,	// (0x000aa4f2) scroll_pane_cp035_ParamLimits

0xdd96,	// (0x000aa4f2) scroll_pane_cp035

0xa2df,	// (0x000a6a3b) bg_button_pane_cp033

0xefa1,	// (0x000ab6fd) phob2_cc_button_pane_g1

0xefad,	// (0x000ab709) phob2_cc_button_pane_t1

0xefc2,	// (0x000ab71e) phob2_cc_button_pane_t2

0x0001,

0xff38,	// (0x000ac694) phob2_cc_button_pane_t

0x9ad1,	// (0x000a622d) list_double_large_graphic_phob2_cc_pane_ParamLimits

0x9ad1,	// (0x000a622d) list_double_large_graphic_phob2_cc_pane

0x9aed,	// (0x000a6249) list_double_large_graphic_phob2_cc_pane_g1_ParamLimits

0x9aed,	// (0x000a6249) list_double_large_graphic_phob2_cc_pane_g1

0x9afe,	// (0x000a625a) list_double_large_graphic_phob2_cc_pane_g2_ParamLimits

0x9afe,	// (0x000a625a) list_double_large_graphic_phob2_cc_pane_g2

0x9b0d,	// (0x000a6269) list_double_large_graphic_phob2_cc_pane_g3_ParamLimits

0x9b0d,	// (0x000a6269) list_double_large_graphic_phob2_cc_pane_g3

0x9b1c,	// (0x000a6278) list_double_large_graphic_phob2_cc_pane_g4_ParamLimits

0x9b1c,	// (0x000a6278) list_double_large_graphic_phob2_cc_pane_g4

0x9b2d,	// (0x000a6289) list_double_large_graphic_phob2_cc_pane_g5_ParamLimits

0x9b2d,	// (0x000a6289) list_double_large_graphic_phob2_cc_pane_g5

0x0004,

0xff3d,	// (0x000ac699) list_double_large_graphic_phob2_cc_pane_g_ParamLimits

0xff3d,	// (0x000ac699) list_double_large_graphic_phob2_cc_pane_g

0x9b3c,	// (0x000a6298) list_double_large_graphic_phob2_cc_pane_t1_ParamLimits

0x9b3c,	// (0x000a6298) list_double_large_graphic_phob2_cc_pane_t1

0x9b65,	// (0x000a62c1) list_double_large_graphic_phob2_cc_pane_t2_ParamLimits

0x9b65,	// (0x000a62c1) list_double_large_graphic_phob2_cc_pane_t2

0x0001,

0xff48,	// (0x000ac6a4) list_double_large_graphic_phob2_cc_pane_t_ParamLimits

0xff48,	// (0x000ac6a4) list_double_large_graphic_phob2_cc_pane_t

0xefd4,	// (0x000ab730) list_highlight_pane_cp025_ParamLimits

0xefd4,	// (0x000ab730) list_highlight_pane_cp025

0xa2df,	// (0x000a6a3b) bg_button_pane_cp033_ParamLimits

0xefa1,	// (0x000ab6fd) phob2_cc_button_pane_g1_ParamLimits

0xefad,	// (0x000ab709) phob2_cc_button_pane_t1_ParamLimits

0xefc2,	// (0x000ab71e) phob2_cc_button_pane_t2_ParamLimits

0xff38,	// (0x000ac694) phob2_cc_button_pane_t_ParamLimits

0x0e6e,	// (0x0009d5ca) popup_wgtman_window

0xd7bf,	// (0x000a9f1b) scroll_pane_cp038

0x956d,	// (0x000a5cc9) wgtman_btn_pane_cp_01_ParamLimits

0x956d,	// (0x000a5cc9) wgtman_btn_pane_cp_01

0xefe2,	// (0x000ab73e) wgtman_content_pane

0xefeb,	// (0x000ab747) wgtman_heading_pane

0x9c5a,	// (0x000a63b6) bg_heading_pane_cp02

0xeff4,	// (0x000ab750) wgtman_heading_pane_g1

0xeffc,	// (0x000ab758) wgtman_heading_pane_t1

0xf00a,	// (0x000ab766) scroll_pane_cp036

0xf012,	// (0x000ab76e) wgtman_list_pane

0xf01a,	// (0x000ab776) wgtman_list_pane_t1_ParamLimits

0xf01a,	// (0x000ab776) wgtman_list_pane_t1

0x6421,	// (0x000a2b7d) cam4_grid_pane

0x71e3,	// (0x000a393f) bg_button_pane_cp015_ParamLimits

0x71f5,	// (0x000a3951) bg_button_pane_cp016_ParamLimits

0x7208,	// (0x000a3964) bg_button_pane_cp017_ParamLimits

0x725e,	// (0x000a39ba) popup_vitu2_query_window_g3_ParamLimits

0x725e,	// (0x000a39ba) popup_vitu2_query_window_g3

0x731d,	// (0x000a3a79) popup_vitu2_query_window_t6_ParamLimits

0x731d,	// (0x000a3a79) popup_vitu2_query_window_t6

0x7348,	// (0x000a3aa4) popup_vitu2_query_window_t7_ParamLimits

0x7348,	// (0x000a3aa4) popup_vitu2_query_window_t7

0xd95f,	// (0x000aa0bb) cam4_grid_pane_g1

0xd968,	// (0x000aa0c4) cam4_grid_pane_g2

0xf034,	// (0x000ab790) cam4_grid_pane_g3

0xf03d,	// (0x000ab799) cam4_grid_pane_g4

0x0003,

0xff4d,	// (0x000ac6a9) cam4_grid_pane_g

0x2093,	// (0x0009e7ef) aid_placing_vt_slider_lsc_ParamLimits

0x23c6,	// (0x0009eb22) vidtel_button_pane_ParamLimits

0x23c6,	// (0x0009eb22) vidtel_button_pane

0xf048,	// (0x000ab7a4) bg_button_pane_cp034

0x9b8e,	// (0x000a62ea) vidtel_button_pane_g1

0xf052,	// (0x000ab7ae) vidtel_button_pane_t1

0xd8c3,	// (0x000aa01f) aid_size_vtel_slider_touch

0xdd96,	// (0x000aa4f2) scroll_pane_cp039

0xe1ce,	// (0x000aa92a) ncim_query_button_pane_cp01_ParamLimits

0xe1ed,	// (0x000aa949) ncimui_query_pane_g1_ParamLimits

0xa2df,	// (0x000a6a3b) input_focus_pane_cp012_ParamLimits

0xe212,	// (0x000aa96e) ncim_query_entry_pane_t1_ParamLimits

0xdd96,	// (0x000aa4f2) scroll_pane_cp039_ParamLimits

0x36cc,	// (0x0009fe28) navi_pane_bcale_mc_g1

0x36d4,	// (0x0009fe30) navi_pane_bcale_mc_t1

0xe790,	// (0x000aaeec) main_sp_fs_email_pane_g1

0xe79c,	// (0x000aaef8) main_sp_fs_email_pane_g2

0x0001,

0xfcde,	// (0x000ac43a) main_sp_fs_email_pane_g

0xea18,	// (0x000ab174) list_single_cale_mrui_row_pane_g3_ParamLimits

0xea18,	// (0x000ab174) list_single_cale_mrui_row_pane_g3

0x91f8,	// (0x000a5954) list_single_recal_day_pane_g5_event_pane

0xa716,	// (0x000a6e72) list_single_recal_day_pane_g7

0xf060,	// (0x000ab7bc) list_recal_day_event_pane_cp01

0xf069,	// (0x000ab7c5) list_recal_vselct_arw_lo_pane_cp01

0xf071,	// (0x000ab7cd) list_recal_vselct_arw_up_pane_cp01

0xf079,	// (0x000ab7d5) list_recal_vselct_pane_cp01

0xd8e5,	// (0x000aa041) list_recal_day_event_pane_cp01_g1

0xafaa,	// (0x000a7706) list_recal_day_event_pane_cp01_t1

0xa71e,	// (0x000a6e7a) list_single_recal_day_pane_t1_ParamLimits

0xa730,	// (0x000a6e8c) list_single_recal_day_pane_t2_ParamLimits

0xfe3b,	// (0x000ac597) list_single_recal_day_pane_t_ParamLimits

0xa7cc,	// (0x000a6f28) bg_notes_pane_ParamLimits

0xa86f,	// (0x000a6fcb) list_notes_pane_ParamLimits

0x11bd,	// (0x0009d919) scroll_pane_cp06_ParamLimits

0xa891,	// (0x000a6fed) main_notes_pane_ParamLimits

0x9c5a,	// (0x000a63b6) main_welc_pane

0x9b96,	// (0x000a62f2) main_welc_body_pane_ParamLimits

0x9b96,	// (0x000a62f2) main_welc_body_pane

0x9bb1,	// (0x000a630d) main_welc_opti_pane_ParamLimits

0x9bb1,	// (0x000a630d) main_welc_opti_pane

0x9be6,	// (0x000a6342) main_welc_pane_t1_ParamLimits

0x9be6,	// (0x000a6342) main_welc_pane_t1

0xafb8,	// (0x000a7714) main_welc_body_row_pane_ParamLimits

0xafb8,	// (0x000a7714) main_welc_body_row_pane

0x9c04,	// (0x000a6360) main_welc_opti_row_pane_ParamLimits

0x9c04,	// (0x000a6360) main_welc_opti_row_pane

0xf083,	// (0x000ab7df) main_welc_opti_row_pane_g1

0xf08b,	// (0x000ab7e7) main_welc_opti_row_pane_t1

0xf09a,	// (0x000ab7f6) main_welc_body_row_pane_t1

0xed6b,	// (0x000ab4c7) popup_notif_wgt_heading_pane

0xed85,	// (0x000ab4e1) aid_size_list_notif_wgt_del_ParamLimits

0xed92,	// (0x000ab4ee) list_notif_wgt_row_pane_g1_ParamLimits

0xed9e,	// (0x000ab4fa) list_notif_wgt_row_pane_g2_ParamLimits

0xedaa,	// (0x000ab506) list_notif_wgt_row_pane_g3_ParamLimits

0xfea2,	// (0x000ac5fe) list_notif_wgt_row_pane_g_ParamLimits

0xedb7,	// (0x000ab513) list_notif_wgt_row_pane_t1_ParamLimits

0xedcc,	// (0x000ab528) list_notif_wgt_row_pane_t2_ParamLimits

0xedde,	// (0x000ab53a) list_notif_wgt_row_pane_t3_ParamLimits

0xfea9,	// (0x000ac605) list_notif_wgt_row_pane_t_ParamLimits

0x95f8,	// (0x000a5d54) listrow_wgtman_pane_g1_ParamLimits

0x9605,	// (0x000a5d61) listrow_wgtman_pane_g2_ParamLimits

0xfed2,	// (0x000ac62e) listrow_wgtman_pane_g_ParamLimits

0x9623,	// (0x000a5d7f) listrow_wgtman_pane_t1_ParamLimits

0x963b,	// (0x000a5d97) listrow_wgtman_pane_t2_ParamLimits

0xfed7,	// (0x000ac633) listrow_wgtman_pane_t_ParamLimits

0x9661,	// (0x000a5dbd) wait_bar_pane_cp09_ParamLimits

0x9c5a,	// (0x000a63b6) bg_popup_heading_pane_cp02

0xf0a9,	// (0x000ab805) popup_notif_wgt_heading_pane_g1

0xf0b1,	// (0x000ab80d) popup_notif_wgt_heading_pane_t1

0x9c5a,	// (0x000a63b6) main_vids_pane

0x9c5a,	// (0x000a63b6) vids_listscroll_pane

0x9c15,	// (0x000a6371) scroll_pane_cp040

0x9c5a,	// (0x000a63b6) vids_list_pane

0x9c20,	// (0x000a637c) vids_list_double_pane_ParamLimits

0x9c20,	// (0x000a637c) vids_list_double_pane

0x9c33,	// (0x000a638f) vids_list_double_pane_g1

0x9c3c,	// (0x000a6398) vids_list_double_pane_t1

0x9c4c,	// (0x000a63a8) vids_list_double_pane_t2

0x0001,

0xff5b,	// (0x000ac6b7) vids_list_double_pane_t

0xa2df,	// (0x000a6a3b) main_ncimui_pane_ParamLimits

0x7fd9,	// (0x000a4735) main_ncimui_pane_g1_ParamLimits

0x7fe7,	// (0x000a4743) main_ncimui_pane_g2_ParamLimits

0x7fe7,	// (0x000a4743) main_ncimui_pane_g2

0x0001,

0xfbe3,	// (0x000ac33f) main_ncimui_pane_g_ParamLimits

0xfbe3,	// (0x000ac33f) main_ncimui_pane_g

0x9bcc,	// (0x000a6328) main_welc_pane_g1_ParamLimits

0x9bcc,	// (0x000a6328) main_welc_pane_g1

0x9bd8,	// (0x000a6334) main_welc_pane_g2_ParamLimits

0x9bd8,	// (0x000a6334) main_welc_pane_g2

0x0001,

0xff56,	// (0x000ac6b2) main_welc_pane_g_ParamLimits

0xff56,	// (0x000ac6b2) main_welc_pane_g

0xa7cc,	// (0x000a6f28) listscroll_mce_pane_ParamLimits

0x3796,	// (0x0009fef2) wait_bar_pane_cp10

0xc854,	// (0x000a8fb0) main_cale_day_pane_ParamLimits

0xc854,	// (0x000a8fb0) main_cale_week_pane_ParamLimits

0xa7cc,	// (0x000a6f28) main_messa_pane_ParamLimits

0x581b,	// (0x000a1f77) main_clock2_btn_pane_ParamLimits

0x581b,	// (0x000a1f77) main_clock2_btn_pane

0xd071,	// (0x000a97cd) main_clock2_btn_pane_cp01_ParamLimits

0xd071,	// (0x000a97cd) main_clock2_btn_pane_cp01

0xe9e9,	// (0x000ab145) list_cale_mrui_pane_ParamLimits

0xee22,	// (0x000ab57e) main_cf0_pane_g2

0x0001,

0xfeb0,	// (0x000ac60c) main_cf0_pane_g

0x97f0,	// (0x000a5f4c) area_left_week_number_pane_ParamLimits

0x9803,	// (0x000a5f5f) area_top_day_name_pane_ParamLimits

0x9811,	// (0x000a5f6d) frame_month_view_pane_ParamLimits

0xef4a,	// (0x000ab6a6) grid_month_view_pane_ParamLimits

0xef58,	// (0x000ab6b4) frm_month_g1_ParamLimits

0x988f,	// (0x000a5feb) frm_month_g2_ParamLimits

0x98a0,	// (0x000a5ffc) frm_month_g3_ParamLimits

0x98b1,	// (0x000a600d) frm_month_g4_ParamLimits

0x98c2,	// (0x000a601e) frm_month_g5_ParamLimits

0x98d3,	// (0x000a602f) frm_month_g6_ParamLimits

0x98e6,	// (0x000a6042) frm_month_g7_ParamLimits

0xef65,	// (0x000ab6c1) frm_month_g8_ParamLimits

0x98f9,	// (0x000a6055) frm_month_g9_ParamLimits

0x9906,	// (0x000a6062) frm_month_g10_ParamLimits

0x9913,	// (0x000a606f) frm_month_g11_ParamLimits

0x9920,	// (0x000a607c) frm_month_g12_ParamLimits

0x992d,	// (0x000a6089) frm_month_g13_ParamLimits

0x993c,	// (0x000a6098) frm_month_g14_ParamLimits

0x994b,	// (0x000a60a7) frm_month_g15_ParamLimits

0x995a,	// (0x000a60b6) frm_month_g16_ParamLimits

0xff01,	// (0x000ac65d) frm_month_g_ParamLimits

0xef72,	// (0x000ab6ce) cell_top_day_name_pane_t1_ParamLimits

0x9969,	// (0x000a60c5) cell_area_left_week_number_pane_g1_ParamLimits

0x9978,	// (0x000a60d4) cell_area_left_week_number_pane_t1_ParamLimits

0xcee9,	// (0x000a9645) cell_month_view_pane_g1_ParamLimits

0x998e,	// (0x000a60ea) cell_month_view_pane_t1_ParamLimits

0xa7c4,	// (0x000a6f20) main_clock2_btn_pane_g1

0xf0bf,	// (0x000ab81b) main_clock2_btn_pane_t1

0xa2df,	// (0x000a6a3b) listscroll_cmail_pane_ParamLimits

0xe790,	// (0x000aaeec) main_sp_fs_email_pane_g1_ParamLimits

0xe79c,	// (0x000aaef8) main_sp_fs_email_pane_g2_ParamLimits

0xfcde,	// (0x000ac43a) main_sp_fs_email_pane_g_ParamLimits

0xeaf5,	// (0x000ab251) list_recal_day_pane_ParamLimits

0xeb06,	// (0x000ab262) mian_recal_day_pane_t1

0x89c6,	// (0x000a5122) list_single_dyc_row_text_pane_t4_ParamLimits

0x89c6,	// (0x000a5122) list_single_dyc_row_text_pane_t4

0x8a0b,	// (0x000a5167) list_single_dyc_row_text_pane_t5_ParamLimits

0x8a0b,	// (0x000a5167) list_single_dyc_row_text_pane_t5

0xa4a0,	// (0x000a6bfc) list_single_dyc_row_text_pane_t6_ParamLimits

0xa4a0,	// (0x000a6bfc) list_single_dyc_row_text_pane_t6

0xae65,	// (0x000a75c1) aid_mgn_list_cale_time_pane

0xa2df,	// (0x000a6a3b) main_gallery2_pane_ParamLimits
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

} // end of namespace AknLayoutScalable_Abrw_pvp4_apps_vga4_prt_tch_Large
