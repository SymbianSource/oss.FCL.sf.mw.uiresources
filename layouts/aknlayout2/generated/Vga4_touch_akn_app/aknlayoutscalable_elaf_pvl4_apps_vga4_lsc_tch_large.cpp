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

#include "aknlayoutscalable_elaf_pvl4_apps_vga4_lsc_tch_large.h"
#include "AknLayout2ScalableDecode.h"
namespace AknLayoutScalable_Apps { extern const TUint8 KByteCodedData_AknLayoutScalable_Elaf_pvp4_apps_vga4_prt_tch[]; }

namespace AknLayoutScalable_Elaf_pvl4_apps_vga4_lsc_tch_Large
{

extern const TUint16 KDataLookup[AknLayoutScalable_Apps::E_TApiId_TableSize];
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Apps::KByteCodedData_AknLayoutScalable_Elaf_pvp4_apps_vga4_prt_tch + 0x0008d795 };

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
0x09f0,	// (0x0008e185) Screen

0x09fc,	// (0x0008e191) application_window

0x0a50,	// (0x0008e1e5) area_bottom_pane_ParamLimits

0x0a50,	// (0x0008e1e5) area_bottom_pane

0x0a89,	// (0x0008e21e) area_top_pane_ParamLimits

0x0a89,	// (0x0008e21e) area_top_pane

0x9a42,	// (0x000971d7) call_video_uplink_pane_ParamLimits

0x9a42,	// (0x000971d7) call_video_uplink_pane

0x0b17,	// (0x0008e2ac) main_pane_ParamLimits

0x0b17,	// (0x0008e2ac) main_pane

0xc9da,	// (0x0009a16f) context_pane

0x415e,	// (0x000918f3) navi_pane

0x4192,	// (0x00091927) popup_cale_events_window_ParamLimits

0x4192,	// (0x00091927) popup_cale_events_window

0xc9ed,	// (0x0009a182) popup_mup_playback_window

0x41aa,	// (0x0009193f) signal_pane

0xa1ea,	// (0x0009797f) main_browser_pane

0xa3fe,	// (0x00097b93) main_burst_pane

0x3e76,	// (0x0009160b) main_calc_pane

0xc9c0,	// (0x0009a155) main_cale_day_pane

0x1136,	// (0x0008e8cb) main_cale_month_pane

0xc9c0,	// (0x0009a155) main_cale_week_pane

0xa3fe,	// (0x00097b93) main_call_pane

0x9ea8,	// (0x0009763d) main_call_poc_pane

0xa3fe,	// (0x00097b93) main_camera_pane

0xa3fe,	// (0x00097b93) main_chi_dic_pane

0xb349,	// (0x00098ade) main_clock_pane

0x9ea8,	// (0x0009763d) main_fmradio_pane

0xa3fe,	// (0x00097b93) main_graph_messa_pane

0x9ea8,	// (0x0009763d) main_help_pane

0xa1ea,	// (0x0009797f) main_im_pane

0xa103,	// (0x00097898) main_image_pane_ParamLimits

0xa103,	// (0x00097898) main_image_pane

0x9ea8,	// (0x0009763d) main_location2_pane

0xa3fe,	// (0x00097b93) main_location_pane

0xa103,	// (0x00097898) main_messa_pane

0x9ea8,	// (0x0009763d) main_mp2_pane

0xa3fe,	// (0x00097b93) main_mp_pane

0x9ea8,	// (0x0009763d) main_msg_pane

0x9ea8,	// (0x0009763d) main_mup_eq_pane

0x9ea8,	// (0x0009763d) main_mup_pane

0xa1ea,	// (0x0009797f) main_notes_pane

0x9ea8,	// (0x0009763d) main_pec_pane

0x9ea8,	// (0x0009763d) main_phob_pane

0x9ea8,	// (0x0009763d) main_pinb_pane

0x9ea8,	// (0x0009763d) main_postcard_pane

0x9ea8,	// (0x0009763d) main_qdial_pane

0xa3fe,	// (0x00097b93) main_skin_pane

0x9ea8,	// (0x0009763d) main_smil2_pane

0xa3fe,	// (0x00097b93) main_smil_pane

0xa3fe,	// (0x00097b93) main_video_pane

0xa3fe,	// (0x00097b93) main_video_tele_pane

0xa103,	// (0x00097898) main_viewer_pane_ParamLimits

0xa103,	// (0x00097898) main_viewer_pane

0xa3fe,	// (0x00097b93) main_vorec_pane

0x3ecc,	// (0x00091661) popup_blid_sat_info_window_ParamLimits

0x3ecc,	// (0x00091661) popup_blid_sat_info_window

0x3f30,	// (0x000916c5) popup_dyc_status_message_window_ParamLimits

0x3f30,	// (0x000916c5) popup_dyc_status_message_window

0x3f4a,	// (0x000916df) popup_grid_large_graphic_window_ParamLimits

0x3f4a,	// (0x000916df) popup_grid_large_graphic_window

0x400c,	// (0x000917a1) popup_loc_request_window_ParamLimits

0x400c,	// (0x000917a1) popup_loc_request_window

0x4132,	// (0x000918c7) popup_wml_address_window_ParamLimits

0x4132,	// (0x000918c7) popup_wml_address_window

0x3cb4,	// (0x00091449) call_muted_g1

0x3945,	// (0x000910da) popup_call_audio_conf_window_ParamLimits

0x3945,	// (0x000910da) popup_call_audio_conf_window

0x3cc4,	// (0x00091459) popup_call_audio_first_window_ParamLimits

0x3cc4,	// (0x00091459) popup_call_audio_first_window

0x3d3a,	// (0x000914cf) popup_call_audio_in_window_ParamLimits

0x3d3a,	// (0x000914cf) popup_call_audio_in_window

0x3d76,	// (0x0009150b) popup_call_audio_out_window_ParamLimits

0x3d76,	// (0x0009150b) popup_call_audio_out_window

0x3db0,	// (0x00091545) popup_call_audio_second_window_ParamLimits

0x3db0,	// (0x00091545) popup_call_audio_second_window

0x3e06,	// (0x0009159b) popup_call_audio_wait_window_ParamLimits

0x3e06,	// (0x0009159b) popup_call_audio_wait_window

0x3e3b,	// (0x000915d0) popup_number_entry_window_ParamLimits

0x3e3b,	// (0x000915d0) popup_number_entry_window

0x9a60,	// (0x000971f5) bg_popup_call_pane_cp05_ParamLimits

0x9a60,	// (0x000971f5) bg_popup_call_pane_cp05

0x9a80,	// (0x00097215) popup_number_entry_window_t1

0x9a93,	// (0x00097228) popup_number_entry_window_t2

0x9aa5,	// (0x0009723a) popup_number_entry_window_t3

0x0003,

0xf0c6,	// (0x0009c85b) popup_number_entry_window_t

0x9aec,	// (0x00097281) text_title_cp2

0x9aff,	// (0x00097294) bg_popup_call_pane_cp_ParamLimits

0x9aff,	// (0x00097294) bg_popup_call_pane_cp

0x9b0d,	// (0x000972a2) call_thumbnail_pane

0x9b15,	// (0x000972aa) popup_call_audio_in_window_g1_ParamLimits

0x9b15,	// (0x000972aa) popup_call_audio_in_window_g1

0x9b21,	// (0x000972b6) popup_call_audio_in_window_g2_ParamLimits

0x9b21,	// (0x000972b6) popup_call_audio_in_window_g2

0x9b2d,	// (0x000972c2) popup_call_audio_in_window_g3_ParamLimits

0x9b2d,	// (0x000972c2) popup_call_audio_in_window_g3

0x0002,

0xf0cf,	// (0x0009c864) popup_call_audio_in_window_g_ParamLimits

0xf0cf,	// (0x0009c864) popup_call_audio_in_window_g

0x9b39,	// (0x000972ce) popup_call_audio_in_window_t1_ParamLimits

0x9b39,	// (0x000972ce) popup_call_audio_in_window_t1

0x9b55,	// (0x000972ea) popup_call_audio_in_window_t2_ParamLimits

0x9b55,	// (0x000972ea) popup_call_audio_in_window_t2

0x9b71,	// (0x00097306) popup_call_audio_in_window_t3_ParamLimits

0x9b71,	// (0x00097306) popup_call_audio_in_window_t3

0x0002,

0xf0d6,	// (0x0009c86b) popup_call_audio_in_window_t_ParamLimits

0xf0d6,	// (0x0009c86b) popup_call_audio_in_window_t

0x9aff,	// (0x00097294) bg_popup_call_pane_cp01_ParamLimits

0x9aff,	// (0x00097294) bg_popup_call_pane_cp01

0x9b0d,	// (0x000972a2) call_thumbnail_pane_cp02

0x9b84,	// (0x00097319) call_type_pane_cp022

0x9b8c,	// (0x00097321) popup_call_audio_out_window_g1_ParamLimits

0x9b8c,	// (0x00097321) popup_call_audio_out_window_g1

0x9b9e,	// (0x00097333) popup_call_audio_out_window_g2_ParamLimits

0x9b9e,	// (0x00097333) popup_call_audio_out_window_g2

0x9baa,	// (0x0009733f) popup_call_audio_out_window_g3_ParamLimits

0x9baa,	// (0x0009733f) popup_call_audio_out_window_g3

0x0002,

0xf0dd,	// (0x0009c872) popup_call_audio_out_window_g_ParamLimits

0xf0dd,	// (0x0009c872) popup_call_audio_out_window_g

0x9bbc,	// (0x00097351) popup_call_audio_out_window_t1_ParamLimits

0x9bbc,	// (0x00097351) popup_call_audio_out_window_t1

0x9bd4,	// (0x00097369) popup_call_audio_out_window_t2_ParamLimits

0x9bd4,	// (0x00097369) popup_call_audio_out_window_t2

0x0001,

0xf0e4,	// (0x0009c879) popup_call_audio_out_window_t_ParamLimits

0xf0e4,	// (0x0009c879) popup_call_audio_out_window_t

0x9be9,	// (0x0009737e) bg_popup_call_pane_ParamLimits

0x9be9,	// (0x0009737e) bg_popup_call_pane

0x0ca0,	// (0x0008e435) call_thumbnail_pane_cp_ParamLimits

0x0ca0,	// (0x0008e435) call_thumbnail_pane_cp

0x9c6d,	// (0x00097402) call_type_pane_cp01_ParamLimits

0x9c6d,	// (0x00097402) call_type_pane_cp01

0x9cb1,	// (0x00097446) popup_call_audio_first_window_g1_ParamLimits

0x9cb1,	// (0x00097446) popup_call_audio_first_window_g1

0x9cfd,	// (0x00097492) popup_call_audio_first_window_g2_ParamLimits

0x9cfd,	// (0x00097492) popup_call_audio_first_window_g2

0x0001,

0xf0e9,	// (0x0009c87e) popup_call_audio_first_window_g_ParamLimits

0xf0e9,	// (0x0009c87e) popup_call_audio_first_window_g

0x9d41,	// (0x000974d6) popup_call_audio_first_window_t1_ParamLimits

0x9d41,	// (0x000974d6) popup_call_audio_first_window_t1

0x9ded,	// (0x00097582) popup_call_audio_first_window_t4_ParamLimits

0x9ded,	// (0x00097582) popup_call_audio_first_window_t4

0x9e79,	// (0x0009760e) popup_call_audio_first_window_t5_ParamLimits

0x9e79,	// (0x0009760e) popup_call_audio_first_window_t5

0x0002,

0xf0ee,	// (0x0009c883) popup_call_audio_first_window_t_ParamLimits

0xf0ee,	// (0x0009c883) popup_call_audio_first_window_t

0x9ea8,	// (0x0009763d) bg_popup_call_pane_cp02

0x9eb2,	// (0x00097647) call_type_pane_cp023

0x9eba,	// (0x0009764f) popup_call_audio_wait_window_g1

0x9ec2,	// (0x00097657) popup_call_audio_wait_window_g2

0x0001,

0xf0f5,	// (0x0009c88a) popup_call_audio_wait_window_g

0x9eca,	// (0x0009765f) popup_call_audio_wait_window_t3

0x9ed8,	// (0x0009766d) bg_popup_call_pane_cp03_ParamLimits

0x9ed8,	// (0x0009766d) bg_popup_call_pane_cp03

0x9f38,	// (0x000976cd) call_thumbnail_pane_cp011_ParamLimits

0x9f38,	// (0x000976cd) call_thumbnail_pane_cp011

0x9f44,	// (0x000976d9) call_type_pane_cp034_ParamLimits

0x9f44,	// (0x000976d9) call_type_pane_cp034

0x9f80,	// (0x00097715) popup_call_audio_second_window_g1_ParamLimits

0x9f80,	// (0x00097715) popup_call_audio_second_window_g1

0x9fbc,	// (0x00097751) popup_call_audio_second_window_g2_ParamLimits

0x9fbc,	// (0x00097751) popup_call_audio_second_window_g2

0x0001,

0xf0fa,	// (0x0009c88f) popup_call_audio_second_window_g_ParamLimits

0xf0fa,	// (0x0009c88f) popup_call_audio_second_window_g

0x9ff8,	// (0x0009778d) popup_call_audio_second_window_t1_ParamLimits

0x9ff8,	// (0x0009778d) popup_call_audio_second_window_t1

0xa079,	// (0x0009780e) popup_call_audio_second_window_t2_ParamLimits

0xa079,	// (0x0009780e) popup_call_audio_second_window_t2

0xa0af,	// (0x00097844) popup_call_audio_second_window_t3_ParamLimits

0xa0af,	// (0x00097844) popup_call_audio_second_window_t3

0x0002,

0xf0ff,	// (0x0009c894) popup_call_audio_second_window_t_ParamLimits

0xf0ff,	// (0x0009c894) popup_call_audio_second_window_t

0x9ea8,	// (0x0009763d) bg_popup_call_pane_cp04

0xa0e5,	// (0x0009787a) list_conf_pane

0xa0ed,	// (0x00097882) popup_call_audio_conf_window_t1

0xa0fb,	// (0x00097890) call_thumbnail_pane_g1

0xa103,	// (0x00097898) bg_pinb_pane_ParamLimits

0xa103,	// (0x00097898) bg_pinb_pane

0xa111,	// (0x000978a6) find_pinb_pane

0xa11a,	// (0x000978af) listscroll_pinb_pane_ParamLimits

0xa11a,	// (0x000978af) listscroll_pinb_pane

0xa129,	// (0x000978be) pinb_bg_pane_g1

0x0cc4,	// (0x0008e459) pinb_bg_pane_g2

0x0cd0,	// (0x0008e465) pinb_bg_pane_g3

0x0cdc,	// (0x0008e471) pinb_bg_pane_g4

0x0ce8,	// (0x0008e47d) pinb_bg_pane_g5

0x0cf4,	// (0x0008e489) pinb_bg_pane_g6

0x0cff,	// (0x0008e494) pinb_bg_pane_g7

0x0d0a,	// (0x0008e49f) pinb_bg_pane_g8

0x0d15,	// (0x0008e4aa) pinb_bg_pane_g9

0x0d1f,	// (0x0008e4b4) pinb_bg_pane_g10

0x0009,

0xf106,	// (0x0009c89b) pinb_bg_pane_g

0x0d3c,	// (0x0008e4d1) grid_pinb_pane

0x0d47,	// (0x0008e4dc) list_pinb_pane

0x0d52,	// (0x0008e4e7) scroll_pane_cp01_ParamLimits

0x0d52,	// (0x0008e4e7) scroll_pane_cp01

0xa133,	// (0x000978c8) find_pinb_pane_g1_ParamLimits

0xa133,	// (0x000978c8) find_pinb_pane_g1

0xa14b,	// (0x000978e0) find_pinb_pane_t1

0xa15d,	// (0x000978f2) find_pinb_pane_t2

0x0001,

0xf120,	// (0x0009c8b5) find_pinb_pane_t

0xa172,	// (0x00097907) input_focus_pane_cp01_ParamLimits

0xa172,	// (0x00097907) input_focus_pane_cp01

0x0d64,	// (0x0008e4f9) cell_pinb_pane_ParamLimits

0x0d64,	// (0x0008e4f9) cell_pinb_pane

0x0d86,	// (0x0008e51b) cell_pinb_pane_g1_ParamLimits

0x0d86,	// (0x0008e51b) cell_pinb_pane_g1

0x0d9a,	// (0x0008e52f) cell_pinb_pane_g2_ParamLimits

0x0d9a,	// (0x0008e52f) cell_pinb_pane_g2

0xa17e,	// (0x00097913) cell_pinb_pane_g3_ParamLimits

0xa17e,	// (0x00097913) cell_pinb_pane_g3

0x0002,

0xf125,	// (0x0009c8ba) cell_pinb_pane_g_ParamLimits

0xf125,	// (0x0009c8ba) cell_pinb_pane_g

0x9ea8,	// (0x0009763d) grid_highlight_pane_cp01

0x0da6,	// (0x0008e53b) list_pinb_item_pane_ParamLimits

0x0da6,	// (0x0008e53b) list_pinb_item_pane

0x9ea8,	// (0x0009763d) list_highlight_pane_cp02

0x0db9,	// (0x0008e54e) list_pinb_item_pane_g1_ParamLimits

0x0db9,	// (0x0008e54e) list_pinb_item_pane_g1

0x0dc6,	// (0x0008e55b) list_pinb_item_pane_g2_ParamLimits

0x0dc6,	// (0x0008e55b) list_pinb_item_pane_g2

0x0dd2,	// (0x0008e567) list_pinb_item_pane_g3_ParamLimits

0x0dd2,	// (0x0008e567) list_pinb_item_pane_g3

0x0de3,	// (0x0008e578) list_pinb_item_pane_g4_ParamLimits

0x0de3,	// (0x0008e578) list_pinb_item_pane_g4

0x0003,

0xf12c,	// (0x0009c8c1) list_pinb_item_pane_g_ParamLimits

0xf12c,	// (0x0009c8c1) list_pinb_item_pane_g

0x0def,	// (0x0008e584) list_pinb_item_pane_t1_ParamLimits

0x0def,	// (0x0008e584) list_pinb_item_pane_t1

0x0e26,	// (0x0008e5bb) calc_display_pane

0x0e4b,	// (0x0008e5e0) calc_paper_pane

0x0e6e,	// (0x0008e603) grid_calc_pane

0x9ea8,	// (0x0009763d) bg_list_pane_cp01

0x0e9c,	// (0x0008e631) clock_g1

0x0ea4,	// (0x0008e639) clock_g2

0x0001,

0xf135,	// (0x0009c8ca) clock_g

0x0eac,	// (0x0008e641) clock_t1_ParamLimits

0x0eac,	// (0x0008e641) clock_t1

0x0ec1,	// (0x0008e656) clock_t2_ParamLimits

0x0ec1,	// (0x0008e656) clock_t2

0x0ed3,	// (0x0008e668) clock_t3_ParamLimits

0x0ed3,	// (0x0008e668) clock_t3

0x0ee5,	// (0x0008e67a) clock_t4_ParamLimits

0x0ee5,	// (0x0008e67a) clock_t4

0x0ef7,	// (0x0008e68c) clock_t5_ParamLimits

0x0ef7,	// (0x0008e68c) clock_t5

0x0f0c,	// (0x0008e6a1) clock_t6_ParamLimits

0x0f0c,	// (0x0008e6a1) clock_t6

0x0f1e,	// (0x0008e6b3) clock_t7_ParamLimits

0x0f1e,	// (0x0008e6b3) clock_t7

0x0f30,	// (0x0008e6c5) clock_t8_ParamLimits

0x0f30,	// (0x0008e6c5) clock_t8

0x0f44,	// (0x0008e6d9) clock_t9_ParamLimits

0x0f44,	// (0x0008e6d9) clock_t9

0x0008,

0xf13a,	// (0x0009c8cf) clock_t_ParamLimits

0xf13a,	// (0x0009c8cf) clock_t

0xa192,	// (0x00097927) popup_clock_analogue_window_cp02

0xa192,	// (0x00097927) popup_clock_digital_window_cp01

0xa19a,	// (0x0009792f) listscroll_help_pane

0x9ea8,	// (0x0009763d) phob_pre_status_pane

0xa1a4,	// (0x00097939) grid_qdial_pane

0xa103,	// (0x00097898) listscroll_mce_pane

0xa103,	// (0x00097898) bg_notes_pane

0xa1ae,	// (0x00097943) list_notes_pane

0x0f5a,	// (0x0008e6ef) scroll_pane_cp06

0xa1bc,	// (0x00097951) bg_calc_paper_pane

0xa1d0,	// (0x00097965) list_calc_pane

0xa1ea,	// (0x0009797f) bg_calc_display_pane

0x0f6e,	// (0x0008e703) calc_display_pane_t1

0x0f80,	// (0x0008e715) calc_display_pane_t2

0xa1f6,	// (0x0009798b) calc_display_pane_t3

0x0002,

0xf14d,	// (0x0009c8e2) calc_display_pane_t

0x0f92,	// (0x0008e727) cell_calc_pane_ParamLimits

0x0f92,	// (0x0008e727) cell_calc_pane

0xa208,	// (0x0009799d) bg_calc_paper_pane_g1

0xa214,	// (0x000979a9) bg_calc_paper_pane_g2

0xa220,	// (0x000979b5) bg_calc_paper_pane_g3

0xa22c,	// (0x000979c1) bg_calc_paper_pane_g4

0xa238,	// (0x000979cd) bg_calc_paper_pane_g5

0x0fcd,	// (0x0008e762) bg_calc_paper_pane_g6

0x0fdb,	// (0x0008e770) bg_calc_paper_pane_g7

0x0fe9,	// (0x0008e77e) bg_calc_paper_pane_g8

0x0007,

0xf154,	// (0x0009c8e9) bg_calc_paper_pane_g

0x0ffc,	// (0x0008e791) calc_bg_paper_pane_g9

0x100f,	// (0x0008e7a4) list_calc_item_pane_ParamLimits

0x100f,	// (0x0008e7a4) list_calc_item_pane

0xa244,	// (0x000979d9) list_calc_item_pane_g1

0xa251,	// (0x000979e6) list_calc_item_pane_t1_ParamLimits

0xa251,	// (0x000979e6) list_calc_item_pane_t1

0x1027,	// (0x0008e7bc) list_calc_item_pane_t2_ParamLimits

0x1027,	// (0x0008e7bc) list_calc_item_pane_t2

0x0001,

0xf165,	// (0x0009c8fa) list_calc_item_pane_t_ParamLimits

0xf165,	// (0x0009c8fa) list_calc_item_pane_t

0xa263,	// (0x000979f8) cell_calc_pane_g1

0xa26d,	// (0x00097a02) grid_highlight_pane_cp02

0xac90,	// (0x00098425) bg_calc_display_pane_g1

0x1059,	// (0x0008e7ee) bg_calc_display_pane_g2

0x1063,	// (0x0008e7f8) bg_calc_display_pane_g3

0x0002,

0xf16f,	// (0x0009c904) bg_calc_display_pane_g

0x106c,	// (0x0008e801) cell_qdial_pane_ParamLimits

0x106c,	// (0x0008e801) cell_qdial_pane

0x1080,	// (0x0008e815) cell_qdial_pane_g1_ParamLimits

0x1080,	// (0x0008e815) cell_qdial_pane_g1

0x1096,	// (0x0008e82b) cell_qdial_pane_g2_ParamLimits

0x1096,	// (0x0008e82b) cell_qdial_pane_g2

0xa28f,	// (0x00097a24) cell_qdial_pane_g3_ParamLimits

0xa28f,	// (0x00097a24) cell_qdial_pane_g3

0x0003,

0xf176,	// (0x0009c90b) cell_qdial_pane_g_ParamLimits

0xf176,	// (0x0009c90b) cell_qdial_pane_g

0x10bd,	// (0x0008e852) cell_qdial_pane_t1_ParamLimits

0x10bd,	// (0x0008e852) cell_qdial_pane_t1

0x10d5,	// (0x0008e86a) cell_qdial_pane_t2_ParamLimits

0x10d5,	// (0x0008e86a) cell_qdial_pane_t2

0x10e8,	// (0x0008e87d) cell_qdial_pane_t3_ParamLimits

0x10e8,	// (0x0008e87d) cell_qdial_pane_t3

0x0002,

0xf17f,	// (0x0009c914) cell_qdial_pane_t_ParamLimits

0xf17f,	// (0x0009c914) cell_qdial_pane_t

0x9ea8,	// (0x0009763d) grid_highlight_pane_cp04

0xa29b,	// (0x00097a30) thumbnail_qdial_pane_ParamLimits

0xa29b,	// (0x00097a30) thumbnail_qdial_pane

0xa2f7,	// (0x00097a8c) list_help_pane

0xa300,	// (0x00097a95) scroll_pane_cp02

0x10fb,	// (0x0008e890) help_list_pane_t1_ParamLimits

0x10fb,	// (0x0008e890) help_list_pane_t1

0xa309,	// (0x00097a9e) bg_notes_pane_g2

0xa311,	// (0x00097aa6) bg_notes_pane_g3

0xa319,	// (0x00097aae) notes_bg_pane_g1

0xa321,	// (0x00097ab6) notes_bg_pane_g4

0xa329,	// (0x00097abe) notes_bg_pane_g5

0xa331,	// (0x00097ac6) notes_bg_pane_g6

0xa339,	// (0x00097ace) notes_bg_pane_g7

0xa341,	// (0x00097ad6) notes_bg_pane_g8

0xa349,	// (0x00097ade) notes_bg_pane_g9

0x0006,

0xf19d,	// (0x0009c932) notes_bg_pane_g

0x111f,	// (0x0008e8b4) list_notes_text_pane_ParamLimits

0x111f,	// (0x0008e8b4) list_notes_text_pane

0xa351,	// (0x00097ae6) list_notes_text_pane_g1

0xfb9c,	// (0x0008d331) list_notes_text_pane_t1

0x1136,	// (0x0008e8cb) listscroll_cale_week_pane

0x1160,	// (0x0008e8f5) bg_cale_heading_pane

0x1184,	// (0x0008e919) bg_cale_pane_cp01

0x11a1,	// (0x0008e936) cale_week_corner_pane

0x11c0,	// (0x0008e955) cale_week_day_heading_pane

0x11e9,	// (0x0008e97e) cale_week_scroll_pane_g1

0x1208,	// (0x0008e99d) cale_week_scroll_pane_g2

0x1220,	// (0x0008e9b5) cale_week_scroll_pane_g3

0x1238,	// (0x0008e9cd) cale_week_scroll_pane_g4

0x1250,	// (0x0008e9e5) cale_week_scroll_pane_g5

0x1270,	// (0x0008ea05) cale_week_scroll_pane_g6

0x1290,	// (0x0008ea25) cale_week_scroll_pane_g7

0x12b4,	// (0x0008ea49) cale_week_scroll_pane_g8

0x12d8,	// (0x0008ea6d) cale_week_scroll_pane_g9

0x12f0,	// (0x0008ea85) cale_week_scroll_pane_g10

0x1308,	// (0x0008ea9d) cale_week_scroll_pane_g11

0x1320,	// (0x0008eab5) cale_week_scroll_pane_g12

0x1344,	// (0x0008ead9) cale_week_scroll_pane_g13

0x1344,	// (0x0008ead9) cale_week_scroll_pane_g14

0x1344,	// (0x0008ead9) cale_week_scroll_pane_g15

0x000f,

0xf1ac,	// (0x0009c941) cale_week_scroll_pane_g

0x138c,	// (0x0008eb21) cale_week_time_pane

0x13b0,	// (0x0008eb45) grid_cale_week_pane

0xa386,	// (0x00097b1b) scroll_pane_cp08

0x13e2,	// (0x0008eb77) cell_cale_week_pane_ParamLimits

0x13e2,	// (0x0008eb77) cell_cale_week_pane

0x147e,	// (0x0008ec13) cale_week_day_heading_pane_t1

0x14a8,	// (0x0008ec3d) cale_week_day_heading_pane_t2

0x14d7,	// (0x0008ec6c) cale_week_day_heading_pane_t3

0x1506,	// (0x0008ec9b) cale_week_day_heading_pane_t4

0x1535,	// (0x0008ecca) cale_week_day_heading_pane_t5

0x1568,	// (0x0008ecfd) cale_week_day_heading_pane_t6

0x159f,	// (0x0008ed34) cale_week_day_heading_pane_t7

0x0006,

0xf1cd,	// (0x0009c962) cale_week_day_heading_pane_t

0xa3a3,	// (0x00097b38) bg_cale_side_pane

0x15c9,	// (0x0008ed5e) cale_week_time_pane_t1

0x15e3,	// (0x0008ed78) cale_week_time_pane_t2

0x15fd,	// (0x0008ed92) cale_week_time_pane_t3

0x1617,	// (0x0008edac) cale_week_time_pane_t4

0x1631,	// (0x0008edc6) cale_week_time_pane_t5

0x164b,	// (0x0008ede0) cale_week_time_pane_t6

0x166b,	// (0x0008ee00) cale_week_time_pane_t7

0x1691,	// (0x0008ee26) cale_week_time_pane_t8

0x0007,

0xf1dc,	// (0x0009c971) cale_week_time_pane_t

0x16b7,	// (0x0008ee4c) cell_cale_week_pane_g2

0x16db,	// (0x0008ee70) cell_cale_week_pane_g3_ParamLimits

0x16db,	// (0x0008ee70) cell_cale_week_pane_g3

0xa3b1,	// (0x00097b46) grid_highlight_pane_cp07

0xa3b9,	// (0x00097b4e) listscroll_gms_pane

0xa3c3,	// (0x00097b58) grid_gms_pane

0xa3cc,	// (0x00097b61) listscroll_gms_pane_g1

0xa3d4,	// (0x00097b69) listscroll_gms_pane_g2

0x0001,

0xf1ed,	// (0x0009c982) listscroll_gms_pane_g

0x16f3,	// (0x0008ee88) scroll_pane_cp010

0x16fe,	// (0x0008ee93) cell_gms_pane_ParamLimits

0x16fe,	// (0x0008ee93) cell_gms_pane

0x1715,	// (0x0008eeaa) cell_gms_pane_g1

0xa3dc,	// (0x00097b71) cell_gms_pane_g2

0xa3e4,	// (0x00097b79) cell_gms_pane_g3

0xa3ed,	// (0x00097b82) cell_gms_pane_g4

0x0003,

0xf1f2,	// (0x0009c987) cell_gms_pane_g

0xa3f6,	// (0x00097b8b) grid_highlight_pane_cp09

0x3c5c,	// (0x000913f1) phob_pre_status_pane_g1

0x3c64,	// (0x000913f9) phob_pre_status_pane_g2

0x3c6c,	// (0x00091401) phob_pre_status_pane_g3

0x3c74,	// (0x00091409) phob_pre_status_pane_g4

0x0004,

0xf5e4,	// (0x0009cd79) phob_pre_status_pane_g

0x3c84,	// (0x00091419) phob_pre_status_pane_t1

0x3c94,	// (0x00091429) phob_pre_status_pane_t2

0x3ca4,	// (0x00091439) phob_pre_status_pane_t3

0x0002,

0xf5ef,	// (0x0009cd84) phob_pre_status_pane_t

0xa3fe,	// (0x00097b93) bg_list_pane_cp05

0x1725,	// (0x0008eeba) grid_vorec_pane

0x172f,	// (0x0008eec4) vorec_t1

0x173d,	// (0x0008eed2) vorec_t2

0x174b,	// (0x0008eee0) vorec_t3

0x1759,	// (0x0008eeee) vorec_t4

0x99b2,	// (0x00097147) vorec_t5

0x99c0,	// (0x00097155) vorec_t6

0x0004,

0xf1fb,	// (0x0009c990) vorec_t

0x99ce,	// (0x00097163) wait_bar_pane_cp01

0xac99,	// (0x0009842e) cell_vorec_pane_ParamLimits

0xac99,	// (0x0009842e) cell_vorec_pane

0xa406,	// (0x00097b9b) cell_vorec_pane_g1

0x9ea8,	// (0x0009763d) grid_highlight_pane_cp05

0x178b,	// (0x0008ef20) cams_zoom_pane

0x179a,	// (0x0008ef2f) image_vga_pane

0x17b4,	// (0x0008ef49) main_camera_pane_g1

0x17c6,	// (0x0008ef5b) main_camera_pane_g2

0x17d6,	// (0x0008ef6b) main_camera_pane_g3

0x17ea,	// (0x0008ef7f) main_camera_pane_g4

0x17fe,	// (0x0008ef93) main_camera_pane_g5

0x1812,	// (0x0008efa7) main_camera_pane_g6

0x1826,	// (0x0008efbb) main_camera_pane_g7

0x0007,

0xf206,	// (0x0009c99b) main_camera_pane_g

0x183a,	// (0x0008efcf) main_camera_pane_t1

0x1850,	// (0x0008efe5) main_camera_pane_t2

0x0001,

0xf217,	// (0x0009c9ac) main_camera_pane_t

0x188e,	// (0x0008f023) cams_zoom_pane_cp_ParamLimits

0x188e,	// (0x0008f023) cams_zoom_pane_cp

0x18b6,	// (0x0008f04b) image_cif_pane_ParamLimits

0x18b6,	// (0x0008f04b) image_cif_pane

0x18f1,	// (0x0008f086) image_subqcif_pane

0x18fb,	// (0x0008f090) main_video_pane_g1_ParamLimits

0x18fb,	// (0x0008f090) main_video_pane_g1

0x191f,	// (0x0008f0b4) main_video_pane_g2_ParamLimits

0x191f,	// (0x0008f0b4) main_video_pane_g2

0x1955,	// (0x0008f0ea) main_video_pane_g3_ParamLimits

0x1955,	// (0x0008f0ea) main_video_pane_g3

0x1983,	// (0x0008f118) main_video_pane_g4_ParamLimits

0x1983,	// (0x0008f118) main_video_pane_g4

0x19b1,	// (0x0008f146) main_video_pane_g5_ParamLimits

0x19b1,	// (0x0008f146) main_video_pane_g5

0xa41c,	// (0x00097bb1) main_video_pane_g6_ParamLimits

0xa41c,	// (0x00097bb1) main_video_pane_g6

0x0006,

0xf21c,	// (0x0009c9b1) main_video_pane_g_ParamLimits

0xf21c,	// (0x0009c9b1) main_video_pane_g

0x19da,	// (0x0008f16f) main_video_pane_t1_ParamLimits

0x19da,	// (0x0008f16f) main_video_pane_t1

0xa436,	// (0x00097bcb) cams_zoom_pane_g1

0xa43f,	// (0x00097bd4) cams_zoom_pane_g2

0xa448,	// (0x00097bdd) cams_zoom_pane_g3

0xa451,	// (0x00097be6) cams_zoom_pane_g4

0x0003,

0xf22b,	// (0x0009c9c0) cams_zoom_pane_g

0x1a37,	// (0x0008f1cc) grid_cams_pane

0x1a51,	// (0x0008f1e6) linegrid_cams_pane

0x1a63,	// (0x0008f1f8) cell_cams_pane_ParamLimits

0x1a63,	// (0x0008f1f8) cell_cams_pane

0xa45a,	// (0x00097bef) cams_burst_image_pane

0xa462,	// (0x00097bf7) cell_cams_pane_g1

0x9ea8,	// (0x0009763d) grid_highlight_pane_cp03

0xa263,	// (0x000979f8) mp_bg_pane_g1

0x9ea8,	// (0x0009763d) bg_list_pane_cp03

0xc8e3,	// (0x0009a078) bg_mp_pane

0xc8eb,	// (0x0009a080) grid_mp_pane

0xc8f3,	// (0x0009a088) media_player_g1

0xc8fd,	// (0x0009a092) media_player_t1

0xc90b,	// (0x0009a0a0) media_player_t2

0xc919,	// (0x0009a0ae) media_player_t3

0xc927,	// (0x0009a0bc) media_player_t4

0xc935,	// (0x0009a0ca) media_player_t5

0xc943,	// (0x0009a0d8) media_player_t6

0xc951,	// (0x0009a0e6) media_player_t7

0x0006,

0xf5ce,	// (0x0009cd63) media_player_t

0xc95f,	// (0x0009a0f4) wait_bar_pane_cp02

0xf5b3,	// (0x0009cd48) main_usb_pane_t

0x3c53,	// (0x000913e8) cell_mp_pane

0xa263,	// (0x000979f8) cell_mp_pane_g1

0x9ea8,	// (0x0009763d) grid_highlight_pane_cp06

0xa46a,	// (0x00097bff) grid_skin_colour_pane

0xa472,	// (0x00097c07) list_highlight_pane_cp03

0x1a9d,	// (0x0008f232) skin_g1

0xa47a,	// (0x00097c0f) skin_t1

0xa489,	// (0x00097c1e) skin_t2

0x0001,

0xf260,	// (0x0009c9f5) skin_t

0x1aa7,	// (0x0008f23c) cell_skin_colour_pane_ParamLimits

0x1aa7,	// (0x0008f23c) cell_skin_colour_pane

0xa497,	// (0x00097c2c) cell_skin_colour_pane_g1

0x1b1a,	// (0x0008f2af) call_video_g1_ParamLimits

0x1b1a,	// (0x0008f2af) call_video_g1

0x1b36,	// (0x0008f2cb) call_video_g2_ParamLimits

0x1b36,	// (0x0008f2cb) call_video_g2

0x0001,

0xf265,	// (0x0009c9fa) call_video_g_ParamLimits

0xf265,	// (0x0009c9fa) call_video_g

0x1b7b,	// (0x0008f310) call_video_uplink_pane_cp1_ParamLimits

0x1b7b,	// (0x0008f310) call_video_uplink_pane_cp1

0xa4a9,	// (0x00097c3e) call_video_uplink_pane_cp2

0x1c1c,	// (0x0008f3b1) video_down_crop_pane_ParamLimits

0x1c1c,	// (0x0008f3b1) video_down_crop_pane

0x1d05,	// (0x0008f49a) video_down_pane_ParamLimits

0x1d05,	// (0x0008f49a) video_down_pane

0xa4b1,	// (0x00097c46) video_down_subqcif_pane_ParamLimits

0xa4b1,	// (0x00097c46) video_down_subqcif_pane

0xa4cb,	// (0x00097c60) video_down_subqcif_pane_cp_ParamLimits

0xa4cb,	// (0x00097c60) video_down_subqcif_pane_cp

0xa4f3,	// (0x00097c88) im_reading_pane_ParamLimits

0xa4f3,	// (0x00097c88) im_reading_pane

0x1e10,	// (0x0008f5a5) im_writing_pane_ParamLimits

0x1e10,	// (0x0008f5a5) im_writing_pane

0x1e2e,	// (0x0008f5c3) im_reading_pane_t1

0xa50d,	// (0x00097ca2) list_im_pane

0xa51e,	// (0x00097cb3) scroll_pane_cp07

0x1e6d,	// (0x0008f602) im_writing_pane_t1_ParamLimits

0x1e6d,	// (0x0008f602) im_writing_pane_t1

0xa537,	// (0x00097ccc) im_writing_pane_t2_ParamLimits

0xa537,	// (0x00097ccc) im_writing_pane_t2

0x0001,

0xf26f,	// (0x0009ca04) im_writing_pane_t_ParamLimits

0xf26f,	// (0x0009ca04) im_writing_pane_t

0x9ea8,	// (0x0009763d) input_focus_pane_cp04

0x9ea8,	// (0x0009763d) input_focus_pane_cp05

0x1e82,	// (0x0008f617) list_im_single_pane_ParamLimits

0x1e82,	// (0x0008f617) list_im_single_pane

0x1e9b,	// (0x0008f630) list_single_im_pane_t1

0x3c13,	// (0x000913a8) blid_accuracy_pane

0x3c1b,	// (0x000913b0) blid_compass_pane

0x3c25,	// (0x000913ba) main_location_t1

0x3c35,	// (0x000913ca) main_location_t2

0x3c45,	// (0x000913da) main_location_t3

0x0002,

0xf5dd,	// (0x0009cd72) main_location_t

0x9ea8,	// (0x0009763d) aid_levels_location

0xa263,	// (0x000979f8) blid_accuracy_pane_g1

0xa263,	// (0x000979f8) blid_accuracy_pane_g2

0x0001,

0xf2d8,	// (0x0009ca6d) blid_accuracy_pane_g

0xacd9,	// (0x0009846e) wml_content_pane

0xad17,	// (0x000984ac) wml_button_pane_ParamLimits

0xad17,	// (0x000984ac) wml_button_pane

0x1eaa,	// (0x0008f63f) wml_list_single_large_pane_ParamLimits

0x1eaa,	// (0x0008f63f) wml_list_single_large_pane

0x1ec3,	// (0x0008f658) wml_list_single_medium_pane_ParamLimits

0x1ec3,	// (0x0008f658) wml_list_single_medium_pane

0x1edd,	// (0x0008f672) wml_list_single_small_pane_ParamLimits

0x1edd,	// (0x0008f672) wml_list_single_small_pane

0xad2b,	// (0x000984c0) wml_selection_box_pane_ParamLimits

0xad2b,	// (0x000984c0) wml_selection_box_pane

0xad3e,	// (0x000984d3) wml_list_single_pane_t1

0xad4d,	// (0x000984e2) wml_list_single_medium_pane_t1

0xad5c,	// (0x000984f1) wml_list_single_large_pane_t1

0xad6b,	// (0x00098500) input_focus_pane_cp02_ParamLimits

0xad6b,	// (0x00098500) input_focus_pane_cp02

0xad7e,	// (0x00098513) wml_selection_box_pane_g1

0xad87,	// (0x0009851c) wml_selection_box_pane_t1_ParamLimits

0xad87,	// (0x0009851c) wml_selection_box_pane_t1

0xa103,	// (0x00097898) bg_wml_button_pane_ParamLimits

0xa103,	// (0x00097898) bg_wml_button_pane

0xad9f,	// (0x00098534) wml_button_pane_g1

0xada7,	// (0x0009853c) wml_button_pane_t1

0xad9f,	// (0x00098534) wml_button_bg_pane_g1

0xadb7,	// (0x0009854c) wml_button_bg_pane_g2

0xadbf,	// (0x00098554) wml_button_bg_pane_g3

0xadc7,	// (0x0009855c) wml_button_bg_pane_g4

0xadcf,	// (0x00098564) wml_button_bg_pane_g5

0xadd7,	// (0x0009856c) wml_button_bg_pane_g6

0xaddf,	// (0x00098574) wml_button_bg_pane_g7

0xade7,	// (0x0009857c) wml_button_bg_pane_g8

0xadef,	// (0x00098584) wml_button_bg_pane_g9

0x0008,

0xf274,	// (0x0009ca09) wml_button_bg_pane_g

0x1efc,	// (0x0008f691) bg_list_pane_cp02

0xadf7,	// (0x0009858c) mce_header_pane_ParamLimits

0xadf7,	// (0x0009858c) mce_header_pane

0xae0d,	// (0x000985a2) mce_icon_pane

0xae0d,	// (0x000985a2) mce_image_pane

0xae16,	// (0x000985ab) mce_text_pane_ParamLimits

0xae16,	// (0x000985ab) mce_text_pane

0x1f06,	// (0x0008f69b) scroll_pane_cp03

0xad0f,	// (0x000984a4) scroll_pane_cp04

0xae29,	// (0x000985be) scroll_pane_cp05_ParamLimits

0xae29,	// (0x000985be) scroll_pane_cp05

0x1f10,	// (0x0008f6a5) mce_header_field_pane_ParamLimits

0x1f10,	// (0x0008f6a5) mce_header_field_pane

0x1f29,	// (0x0008f6be) mce_header_field_pane_2_ParamLimits

0x1f29,	// (0x0008f6be) mce_header_field_pane_2

0x1f3f,	// (0x0008f6d4) mce_header_field_pane_3

0x1f47,	// (0x0008f6dc) list_single_mce_message_pane_ParamLimits

0x1f47,	// (0x0008f6dc) list_single_mce_message_pane

0x1f63,	// (0x0008f6f8) list_single_mce_smart_pane_ParamLimits

0x1f63,	// (0x0008f6f8) list_single_mce_smart_pane

0xae35,	// (0x000985ca) input_focus_pane_cp03

0xae3e,	// (0x000985d3) list_header_data_pane

0x1f8a,	// (0x0008f71f) mce_header_field_pane_t1

0x1f9a,	// (0x0008f72f) list_single_mce_header_pane_ParamLimits

0x1f9a,	// (0x0008f72f) list_single_mce_header_pane

0xae46,	// (0x000985db) list_single_mce_header_pane_t1

0xae55,	// (0x000985ea) list_single_mce_message_pane_g1

0xae5d,	// (0x000985f2) list_single_mce_message_pane_t1

0x1fd4,	// (0x0008f769) bg_cale_heading_pane_cp01_ParamLimits

0x1fd4,	// (0x0008f769) bg_cale_heading_pane_cp01

0xae6b,	// (0x00098600) bg_cale_pane_cp02_ParamLimits

0xae6b,	// (0x00098600) bg_cale_pane_cp02

0x2026,	// (0x0008f7bb) cale_month_corner_pane

0x2045,	// (0x0008f7da) cale_month_day_heading_pane_ParamLimits

0x2045,	// (0x0008f7da) cale_month_day_heading_pane

0x20af,	// (0x0008f844) cale_month_pane_g1_ParamLimits

0x20af,	// (0x0008f844) cale_month_pane_g1

0x20f6,	// (0x0008f88b) cale_month_pane_g2_ParamLimits

0x20f6,	// (0x0008f88b) cale_month_pane_g2

0x2132,	// (0x0008f8c7) cale_month_pane_g3_ParamLimits

0x2132,	// (0x0008f8c7) cale_month_pane_g3

0x2186,	// (0x0008f91b) cale_month_pane_g4_ParamLimits

0x2186,	// (0x0008f91b) cale_month_pane_g4

0x21da,	// (0x0008f96f) cale_month_pane_g5_ParamLimits

0x21da,	// (0x0008f96f) cale_month_pane_g5

0x2236,	// (0x0008f9cb) cale_month_pane_g6_ParamLimits

0x2236,	// (0x0008f9cb) cale_month_pane_g6

0x229e,	// (0x0008fa33) cale_month_pane_g7_ParamLimits

0x229e,	// (0x0008fa33) cale_month_pane_g7

0x230a,	// (0x0008fa9f) cale_month_pane_g8_ParamLimits

0x230a,	// (0x0008fa9f) cale_month_pane_g8

0x2376,	// (0x0008fb0b) cale_month_pane_g9_ParamLimits

0x2376,	// (0x0008fb0b) cale_month_pane_g9

0x23da,	// (0x0008fb6f) cale_month_pane_g10_ParamLimits

0x23da,	// (0x0008fb6f) cale_month_pane_g10

0x242c,	// (0x0008fbc1) cale_month_pane_g11_ParamLimits

0x242c,	// (0x0008fbc1) cale_month_pane_g11

0x247e,	// (0x0008fc13) cale_month_pane_g12_ParamLimits

0x247e,	// (0x0008fc13) cale_month_pane_g12

0x24d6,	// (0x0008fc6b) cale_month_pane_g13_ParamLimits

0x24d6,	// (0x0008fc6b) cale_month_pane_g13

0x000c,

0xf287,	// (0x0009ca1c) cale_month_pane_g_ParamLimits

0xf287,	// (0x0009ca1c) cale_month_pane_g

0x252e,	// (0x0008fcc3) cale_month_week_pane

0x2552,	// (0x0008fce7) grid_cale_month_pane_ParamLimits

0x2552,	// (0x0008fce7) grid_cale_month_pane

0x25b3,	// (0x0008fd48) cale_month_day_heading_pane_t1

0x2639,	// (0x0008fdce) cale_month_day_heading_pane_t2

0x26b2,	// (0x0008fe47) cale_month_day_heading_pane_t3

0x272b,	// (0x0008fec0) cale_month_day_heading_pane_t4

0x27ac,	// (0x0008ff41) cale_month_day_heading_pane_t5

0x2835,	// (0x0008ffca) cale_month_day_heading_pane_t6

0x28c6,	// (0x0009005b) cale_month_day_heading_pane_t7

0x0006,

0xf2a2,	// (0x0009ca37) cale_month_day_heading_pane_t

0xa3a3,	// (0x00097b38) bg_cale_side_pane_cp01

0x2957,	// (0x000900ec) cale_month_week_pane_t1

0x2970,	// (0x00090105) cale_month_week_pane_t2

0x2989,	// (0x0009011e) cale_month_week_pane_t3

0x29a2,	// (0x00090137) cale_month_week_pane_t4

0x29bb,	// (0x00090150) cale_month_week_pane_t5

0x29d4,	// (0x00090169) cale_month_week_pane_t6

0x0005,

0xf2b1,	// (0x0009ca46) cale_month_week_pane_t

0x29f9,	// (0x0009018e) cell_cale_month_pane_ParamLimits

0x29f9,	// (0x0009018e) cell_cale_month_pane

0xa554,	// (0x00097ce9) cell_cale_month_pane_g1

0x2b43,	// (0x000902d8) cell_cale_month_pane_t1_ParamLimits

0x2b43,	// (0x000902d8) cell_cale_month_pane_t1

0xa3b1,	// (0x00097b46) grid_highlight_pane_cp08

0xa263,	// (0x000979f8) main_smil_g1

0x2b6f,	// (0x00090304) smil_status_pane

0xaeaa,	// (0x0009863f) smil_text_pane

0xc801,	// (0x00099f96) bg_popup_call3_rect_pane_g8

0xc809,	// (0x00099f9e) bg_popup_call3_rect_pane_g9

0x0008,

0xf571,	// (0x0009cd06) bg_popup_call3_rect_pane_g

0xca67,	// (0x0009a1fc) smil_status_volume_pane_g1

0xaeb4,	// (0x00098649) smil_status_pane_t1

0xa6aa,	// (0x00097e3f) volume_smil_pane

0xaecb,	// (0x00098660) list_smil_text_pane

0x2b84,	// (0x00090319) scroll_pane_cp011

0x2b8f,	// (0x00090324) smil_text_list_pane_t1_ParamLimits

0x2b8f,	// (0x00090324) smil_text_list_pane_t1

0xa560,	// (0x00097cf5) aid_volume_smil_ParamLimits

0xa560,	// (0x00097cf5) aid_volume_smil

0xa263,	// (0x000979f8) smil_volume_pane_g1

0xa263,	// (0x000979f8) smil_volume_pane_g2

0x0001,

0xf2d8,	// (0x0009ca6d) smil_volume_pane_g

0x1136,	// (0x0008e8cb) listscroll_cale_day_pane

0xaed5,	// (0x0009866a) bg_cale_pane

0xaeed,	// (0x00098682) list_cale_pane

0xaf10,	// (0x000986a5) scroll_pane_cp09

0xaf21,	// (0x000986b6) cale_bg_pane_g1

0xaf29,	// (0x000986be) cale_bg_pane_g2

0xaf31,	// (0x000986c6) cale_bg_pane_g3

0xaf39,	// (0x000986ce) cale_bg_pane_g4

0xaf41,	// (0x000986d6) cale_bg_pane_g5

0xaf49,	// (0x000986de) cale_bg_pane_g6

0xaf51,	// (0x000986e6) cale_bg_pane_g7

0xaf59,	// (0x000986ee) cale_bg_pane_g8

0xaf61,	// (0x000986f6) cale_bg_pane_g9

0x0008,

0xf2dd,	// (0x0009ca72) cale_bg_pane_g

0x2be2,	// (0x00090377) list_cale_time_pane_ParamLimits

0x2be2,	// (0x00090377) list_cale_time_pane

0xaf69,	// (0x000986fe) list_cale_time_pane_g1_ParamLimits

0xaf69,	// (0x000986fe) list_cale_time_pane_g1

0xaf75,	// (0x0009870a) list_cale_time_pane_g2_ParamLimits

0xaf75,	// (0x0009870a) list_cale_time_pane_g2

0x2bfc,	// (0x00090391) list_cale_time_pane_g3_ParamLimits

0x2bfc,	// (0x00090391) list_cale_time_pane_g3

0x2c0a,	// (0x0009039f) list_cale_time_pane_g4_ParamLimits

0x2c0a,	// (0x0009039f) list_cale_time_pane_g4

0x2c18,	// (0x000903ad) list_cale_time_pane_g5_ParamLimits

0x2c18,	// (0x000903ad) list_cale_time_pane_g5

0x0005,

0xf2f0,	// (0x0009ca85) list_cale_time_pane_g_ParamLimits

0xf2f0,	// (0x0009ca85) list_cale_time_pane_g

0xaf8f,	// (0x00098724) list_cale_time_pane_t1_ParamLimits

0xaf8f,	// (0x00098724) list_cale_time_pane_t1

0xafb7,	// (0x0009874c) list_cale_time_pane_t2_ParamLimits

0xafb7,	// (0x0009874c) list_cale_time_pane_t2

0x2eee,	// (0x00090683) aid_blid_cardinal_pane

0x2f30,	// (0x000906c5) compass_pane_t4

0xafdf,	// (0x00098774) list_cale_time_pane_t4_ParamLimits

0xafdf,	// (0x00098774) list_cale_time_pane_t4

0x2f3e,	// (0x000906d3) compass_pane_t5

0x2f4e,	// (0x000906e3) compass_pane_t6

0x2f5c,	// (0x000906f1) compass_pane_t7

0xb463,	// (0x00098bf8) navi_pane_cc_t1

0xb642,	// (0x00098dd7) aid_phob_thumbnail_center_pane

0x35d6,	// (0x00090d6b) main_postcard_pane_g4_ParamLimits

0x0002,

0xf2fd,	// (0x0009ca92) list_cale_time_pane_t_ParamLimits

0xf2fd,	// (0x0009ca92) list_cale_time_pane_t

0x9aff,	// (0x00097294) bg_popup_window_pane_cp02_ParamLimits

0x9aff,	// (0x00097294) bg_popup_window_pane_cp02

0xb007,	// (0x0009879c) heading_pane_cp01_ParamLimits

0xb007,	// (0x0009879c) heading_pane_cp01

0xb013,	// (0x000987a8) loc_req_pane_ParamLimits

0xb013,	// (0x000987a8) loc_req_pane

0xb023,	// (0x000987b8) loc_type_pane_ParamLimits

0xb023,	// (0x000987b8) loc_type_pane

0xb035,	// (0x000987ca) loc_type_pane_t1_ParamLimits

0xb035,	// (0x000987ca) loc_type_pane_t1

0xb047,	// (0x000987dc) loc_type_pane_t2_ParamLimits

0xb047,	// (0x000987dc) loc_type_pane_t2

0xb059,	// (0x000987ee) loc_type_pane_t3_ParamLimits

0xb059,	// (0x000987ee) loc_type_pane_t3

0x0002,

0xf304,	// (0x0009ca99) loc_type_pane_t_ParamLimits

0xf304,	// (0x0009ca99) loc_type_pane_t

0xb06b,	// (0x00098800) list_loc_req_pane

0xb075,	// (0x0009880a) scroll_pane_cp012

0x2c26,	// (0x000903bb) list_single_loc_request_popup_menu_pane_ParamLimits

0x2c26,	// (0x000903bb) list_single_loc_request_popup_menu_pane

0xb080,	// (0x00098815) list_single_loc_request_popup_menu_pane_g1_ParamLimits

0xb080,	// (0x00098815) list_single_loc_request_popup_menu_pane_g1

0xb08c,	// (0x00098821) list_single_loc_request_popup_menu_pane_g2_ParamLimits

0xb08c,	// (0x00098821) list_single_loc_request_popup_menu_pane_g2

0x0001,

0xf30b,	// (0x0009caa0) list_single_loc_request_popup_menu_pane_g_ParamLimits

0xf30b,	// (0x0009caa0) list_single_loc_request_popup_menu_pane_g

0xb098,	// (0x0009882d) list_single_loc_request_popup_menu_pane_t1_ParamLimits

0xb098,	// (0x0009882d) list_single_loc_request_popup_menu_pane_t1

0xa103,	// (0x00097898) bg_popup_window_pane_cp03_ParamLimits

0xa103,	// (0x00097898) bg_popup_window_pane_cp03

0xb0ae,	// (0x00098843) heading_loc_req_pane_ParamLimits

0xb0ae,	// (0x00098843) heading_loc_req_pane

0x2c33,	// (0x000903c8) popup_dyc_status_message_window_g1_ParamLimits

0x2c33,	// (0x000903c8) popup_dyc_status_message_window_g1

0x2c47,	// (0x000903dc) popup_dyc_status_message_window_t1_ParamLimits

0x2c47,	// (0x000903dc) popup_dyc_status_message_window_t1

0x2c5c,	// (0x000903f1) popup_dyc_status_message_window_t2_ParamLimits

0x2c5c,	// (0x000903f1) popup_dyc_status_message_window_t2

0x2c71,	// (0x00090406) popup_dyc_status_message_window_t3_ParamLimits

0x2c71,	// (0x00090406) popup_dyc_status_message_window_t3

0x0002,

0xf310,	// (0x0009caa5) popup_dyc_status_message_window_t_ParamLimits

0xf310,	// (0x0009caa5) popup_dyc_status_message_window_t

0x9ea8,	// (0x0009763d) bg_heading_pane_cp01

0xb0ba,	// (0x0009884f) heading_loc_req_pane_g1

0xb0c2,	// (0x00098857) heading_loc_req_pane_g2

0xb0ca,	// (0x0009885f) heading_loc_req_pane_g3

0x0002,

0xf317,	// (0x0009caac) heading_loc_req_pane_g

0xb0d2,	// (0x00098867) heading_loc_req_pane_t1

0xb0e2,	// (0x00098877) bg_popup_sub_pane_cp01_ParamLimits

0xb0e2,	// (0x00098877) bg_popup_sub_pane_cp01

0xb0f0,	// (0x00098885) popup_cale_events_window_g1_ParamLimits

0xb0f0,	// (0x00098885) popup_cale_events_window_g1

0xb110,	// (0x000988a5) popup_cale_events_window_g2_ParamLimits

0xb110,	// (0x000988a5) popup_cale_events_window_g2

0x0001,

0xf34b,	// (0x0009cae0) popup_cale_events_window_g_ParamLimits

0xf34b,	// (0x0009cae0) popup_cale_events_window_g

0xb130,	// (0x000988c5) popup_cale_events_window_t1_ParamLimits

0xb130,	// (0x000988c5) popup_cale_events_window_t1

0xb142,	// (0x000988d7) popup_cale_events_window_t2_ParamLimits

0xb142,	// (0x000988d7) popup_cale_events_window_t2

0xb180,	// (0x00098915) popup_cale_events_window_t3_ParamLimits

0xb180,	// (0x00098915) popup_cale_events_window_t3

0xb1ba,	// (0x0009894f) popup_cale_events_window_t4_ParamLimits

0xb1ba,	// (0x0009894f) popup_cale_events_window_t4

0x0003,

0xf350,	// (0x0009cae5) popup_cale_events_window_t_ParamLimits

0xf350,	// (0x0009cae5) popup_cale_events_window_t

0x2c99,	// (0x0009042e) call_type_pane

0x2ca9,	// (0x0009043e) popup_call_status_window_g1

0x2cbd,	// (0x00090452) popup_call_status_window_g2

0x2cd1,	// (0x00090466) popup_call_status_window_g3

0x0002,

0xf359,	// (0x0009caee) popup_call_status_window_g

0xb1f0,	// (0x00098985) call_type_pane_g1

0xb1f9,	// (0x0009898e) call_type_pane_g2

0x0001,

0xf360,	// (0x0009caf5) call_type_pane_g

0x9ea8,	// (0x0009763d) bg_popup_sub_pane_cp02

0xb202,	// (0x00098997) listscroll_popup_wml_pane

0xb20a,	// (0x0009899f) list_wml_pane

0xb214,	// (0x000989a9) scroll_pane_cp013

0xb21f,	// (0x000989b4) list_single_graphic_popup_wml_pane_ParamLimits

0xb21f,	// (0x000989b4) list_single_graphic_popup_wml_pane

0xa263,	// (0x000979f8) list_single_graphic_popup_wml_pane_g1

0xb233,	// (0x000989c8) list_single_graphic_popup_wml_pane_g2

0x0001,

0xf365,	// (0x0009cafa) list_single_graphic_popup_wml_pane_g

0xb23b,	// (0x000989d0) list_single_graphic_popup_wml_pane_t1

0xb251,	// (0x000989e6) aid_call_pane

0xa0fb,	// (0x00097890) popup_clock_analogue_window_g1

0xa0fb,	// (0x00097890) popup_clock_analogue_window_g2

0xa582,	// (0x00097d17) popup_clock_analogue_window_g3

0xa582,	// (0x00097d17) popup_clock_analogue_window_g4

0xa263,	// (0x000979f8) popup_clock_analogue_window_g5

0x0004,

0xf36a,	// (0x0009caff) popup_clock_analogue_window_g

0xa58a,	// (0x00097d1f) popup_clock_analogue_window_t1

0xa598,	// (0x00097d2d) clock_digital_number_pane_ParamLimits

0xa598,	// (0x00097d2d) clock_digital_number_pane

0xa5a4,	// (0x00097d39) clock_digital_number_pane_cp02_ParamLimits

0xa5a4,	// (0x00097d39) clock_digital_number_pane_cp02

0xa5b0,	// (0x00097d45) clock_digital_number_pane_cp03_ParamLimits

0xa5b0,	// (0x00097d45) clock_digital_number_pane_cp03

0xa5bc,	// (0x00097d51) clock_digital_number_pane_cp04_ParamLimits

0xa5bc,	// (0x00097d51) clock_digital_number_pane_cp04

0xa5c8,	// (0x00097d5d) clock_digital_separator_pane_ParamLimits

0xa5c8,	// (0x00097d5d) clock_digital_separator_pane

0xa5d4,	// (0x00097d69) popup_clock_digital_window_t1

0xa263,	// (0x000979f8) clock_digital_number_pane_g1

0xa263,	// (0x000979f8) clock_digital_number_pane_g2

0x0001,

0xf2d8,	// (0x0009ca6d) clock_digital_number_pane_g

0xa263,	// (0x000979f8) clock_digital_separator_pane_g1

0xa263,	// (0x000979f8) clock_digital_separator_pane_g2

0x0001,

0xf2d8,	// (0x0009ca6d) clock_digital_separator_pane_g

0x9ea8,	// (0x0009763d) bg_popup_window_pane_cp04

0xb259,	// (0x000989ee) heading_pane_cp03

0xb261,	// (0x000989f6) listscroll_popup_gms_pane

0xb269,	// (0x000989fe) grid_large_graphic_popup_pane

0xb273,	// (0x00098a08) listscroll_popup_gms_pane_g1

0xb27b,	// (0x00098a10) listscroll_popup_gms_pane_g2

0x0001,

0xf375,	// (0x0009cb0a) listscroll_popup_gms_pane_g

0xad0f,	// (0x000984a4) scroll_pane_cp014

0x2ce1,	// (0x00090476) cell_large_graphic_popup_pane_ParamLimits

0x2ce1,	// (0x00090476) cell_large_graphic_popup_pane

0x2cf9,	// (0x0009048e) cell_large_graphic_popup_pane_g1_ParamLimits

0x2cf9,	// (0x0009048e) cell_large_graphic_popup_pane_g1

0xb283,	// (0x00098a18) cell_large_graphic_popup_pane_g2_ParamLimits

0xb283,	// (0x00098a18) cell_large_graphic_popup_pane_g2

0xb28f,	// (0x00098a24) cell_large_graphic_popup_pane_g3_ParamLimits

0xb28f,	// (0x00098a24) cell_large_graphic_popup_pane_g3

0xb29c,	// (0x00098a31) cell_large_graphic_popup_pane_g4_ParamLimits

0xb29c,	// (0x00098a31) cell_large_graphic_popup_pane_g4

0x0003,

0xf37a,	// (0x0009cb0f) cell_large_graphic_popup_pane_g_ParamLimits

0xf37a,	// (0x0009cb0f) cell_large_graphic_popup_pane_g

0xb2ac,	// (0x00098a41) grid_highlight_pane_cp010

0xa263,	// (0x000979f8) bg_popup_call_pane_g1

0xb2b6,	// (0x00098a4b) list_single_graphic_popup_conf_pane_ParamLimits

0xb2b6,	// (0x00098a4b) list_single_graphic_popup_conf_pane

0xb2c8,	// (0x00098a5d) list_highlight_pane_cp01

0xb2d1,	// (0x00098a66) list_single_graphic_popup_conf_pane_g1

0xb2d9,	// (0x00098a6e) list_single_graphic_popup_conf_pane_g2

0x0001,

0xf383,	// (0x0009cb18) list_single_graphic_popup_conf_pane_g

0xb2e1,	// (0x00098a76) list_single_graphic_popup_conf_pane_t1

0xb2ef,	// (0x00098a84) linegrid_cams_pane_g1

0x2d05,	// (0x0009049a) linegrid_cams_pane_g2

0xa3e4,	// (0x00097b79) linegrid_cams_pane_g3

0xb2f8,	// (0x00098a8d) linegrid_cams_pane_g4

0x2d0e,	// (0x000904a3) linegrid_cams_pane_g5

0x2d17,	// (0x000904ac) linegrid_cams_pane_g6

0xa3ed,	// (0x00097b82) linegrid_cams_pane_g7

0x0006,

0xf388,	// (0x0009cb1d) linegrid_cams_pane_g

0xb301,	// (0x00098a96) popup_clock_analogue_window

0xb301,	// (0x00098a96) popup_clock_digital_window

0x9ea8,	// (0x0009763d) popup_phob_thumbnail_window

0xa263,	// (0x000979f8) call_video_uplink_pane_g1

0xb30a,	// (0x00098a9f) call_video_uplink_pane_g2

0x0001,

0xf397,	// (0x0009cb2c) call_video_uplink_pane_g

0xb312,	// (0x00098aa7) video_uplink_pane

0xb31a,	// (0x00098aaf) mce_image_pane_g1

0x2d22,	// (0x000904b7) mce_image_pane_g2

0x2d2c,	// (0x000904c1) mce_image_pane_g3

0x2d36,	// (0x000904cb) mce_image_pane_g4

0x2d3e,	// (0x000904d3) mce_image_pane_g5

0x0004,

0xf39c,	// (0x0009cb31) mce_image_pane_g

0xb324,	// (0x00098ab9) control_top_pane_stacon_cp01_ParamLimits

0xb324,	// (0x00098ab9) control_top_pane_stacon_cp01

0xb338,	// (0x00098acd) uni_indicator_pane_stacon_cp01_ParamLimits

0xb338,	// (0x00098acd) uni_indicator_pane_stacon_cp01

0xb349,	// (0x00098ade) bg_popup_sub_pane_cp03

0x2d46,	// (0x000904db) chi_dic_find_pane

0x2d4e,	// (0x000904e3) listscroll_chi_dic_pane

0x2d57,	// (0x000904ec) main_pane_chidic_g1

0x2d6a,	// (0x000904ff) chi_dic_find_pane_t1

0xb353,	// (0x00098ae8) find_chidic_pane

0xb35c,	// (0x00098af1) chi_dic_list_pane_ParamLimits

0xb35c,	// (0x00098af1) chi_dic_list_pane

0xb36d,	// (0x00098b02) scroll_pane_cp020

0x2d78,	// (0x0009050d) find_chidic_pane_t1

0x9ea8,	// (0x0009763d) input_focus_pane_cp06

0x2d87,	// (0x0009051c) list_chi_dic_pane_ParamLimits

0x2d87,	// (0x0009051c) list_chi_dic_pane

0x2d99,	// (0x0009052e) list_chi_dic_pane_t1_ParamLimits

0x2d99,	// (0x0009052e) list_chi_dic_pane_t1

0x9ea8,	// (0x0009763d) list_highlight_pane_cp020

0xb375,	// (0x00098b0a) bg_cale_heading_pane_g1

0x2dac,	// (0x00090541) bg_cale_heading_pane_g2

0x2db4,	// (0x00090549) bg_cale_heading_pane_g3

0x2dbc,	// (0x00090551) bg_cale_heading_pane_g4

0x2dc6,	// (0x0009055b) bg_cale_heading_pane_g5

0x2dd0,	// (0x00090565) bg_cale_heading_pane_g6

0x2dd8,	// (0x0009056d) bg_cale_heading_pane_g7

0x2de0,	// (0x00090575) bg_cale_heading_pane_g8

0x2dea,	// (0x0009057f) bg_cale_heading_pane_g9

0x0008,

0xf3a7,	// (0x0009cb3c) bg_cale_heading_pane_g

0xb375,	// (0x00098b0a) bg_cale_side_pane_g1

0x2df4,	// (0x00090589) bg_cale_side_pane_g2

0x2dfe,	// (0x00090593) bg_cale_side_pane_g3

0x2e08,	// (0x0009059d) bg_cale_side_pane_g4

0x2e12,	// (0x000905a7) bg_cale_side_pane_g5

0x2e1c,	// (0x000905b1) bg_cale_side_pane_g6

0x2e26,	// (0x000905bb) bg_cale_side_pane_g7

0x2e30,	// (0x000905c5) bg_cale_side_pane_g8

0x2e38,	// (0x000905cd) bg_cale_side_pane_g9

0x0008,

0xf3ba,	// (0x0009cb4f) bg_cale_side_pane_g

0x2e40,	// (0x000905d5) popup_call_status_window_ParamLimits

0x2e40,	// (0x000905d5) popup_call_status_window

0xb37d,	// (0x00098b12) stacon_top_pane

0xb385,	// (0x00098b1a) status_pane_ParamLimits

0xb385,	// (0x00098b1a) status_pane

0xb39a,	// (0x00098b2f) status_small_pane

0xb3a2,	// (0x00098b37) control_pane

0x9ea8,	// (0x0009763d) stacon_bottom_pane

0xb3aa,	// (0x00098b3f) list_single_mce_smart_pane_t1_ParamLimits

0xb3aa,	// (0x00098b3f) list_single_mce_smart_pane_t1

0xb3bd,	// (0x00098b52) list_single_mce_smart_pane_t2_ParamLimits

0xb3bd,	// (0x00098b52) list_single_mce_smart_pane_t2

0x0001,

0xf3cd,	// (0x0009cb62) list_single_mce_smart_pane_t_ParamLimits

0xf3cd,	// (0x0009cb62) list_single_mce_smart_pane_t

0x2e8d,	// (0x00090622) compass_pane

0x2e98,	// (0x0009062d) main_location2_pane_t1

0x2eae,	// (0x00090643) main_location2_pane_t2

0x2ec4,	// (0x00090659) main_location2_pane_t3

0x0003,

0xf3d2,	// (0x0009cb67) main_location2_pane_t

0xb3dc,	// (0x00098b71) compass_pane_g1_ParamLimits

0xb3dc,	// (0x00098b71) compass_pane_g1

0x2f12,	// (0x000906a7) compass_pane_t1

0x2f21,	// (0x000906b6) compass_pane_t2

0x0005,

0xf3db,	// (0x0009cb70) compass_pane_t

0x2f6c,	// (0x00090701) text_secondary_cp61

0xb45a,	// (0x00098bef) navi_pane_cams_g5

0xb4d6,	// (0x00098c6b) navi_pane_im_t1

0xb4e4,	// (0x00098c79) navi_pane_mp_g1_ParamLimits

0xb4e4,	// (0x00098c79) navi_pane_mp_g1

0xb4f8,	// (0x00098c8d) navi_pane_mp_g2_ParamLimits

0xb4f8,	// (0x00098c8d) navi_pane_mp_g2

0xb504,	// (0x00098c99) navi_pane_mp_g3_ParamLimits

0xb504,	// (0x00098c99) navi_pane_mp_g3

0x0002,

0xf3ef,	// (0x0009cb84) navi_pane_mp_g_ParamLimits

0xf3ef,	// (0x0009cb84) navi_pane_mp_g

0xb510,	// (0x00098ca5) navi_pane_mp_t1

0xb51e,	// (0x00098cb3) navi_pane_mp_t2

0x0002,

0xf3f6,	// (0x0009cb8b) navi_pane_mp_t

0xb58b,	// (0x00098d20) navi_pane_vt_g1

0xb510,	// (0x00098ca5) navi_pane_vt_t1

0xb593,	// (0x00098d28) navi_slider_pane

0xa3fe,	// (0x00097b93) zooming_pane

0xb5a3,	// (0x00098d38) navi_slider_pane_g1

0xa5f1,	// (0x00097d86) navi_slider_pane_g2

0x0006,

0xf3fd,	// (0x0009cb92) navi_slider_pane_g

0xb5c7,	// (0x00098d5c) aid_levels_zoom

0xb5cf,	// (0x00098d64) zooming_pane_g1

0xb5d7,	// (0x00098d6c) zooming_pane_g2

0xb5d7,	// (0x00098d6c) zooming_pane_g3

0x0002,

0xf40c,	// (0x0009cba1) zooming_pane_g

0xb5df,	// (0x00098d74) level_10_zoom

0xb5e8,	// (0x00098d7d) level_11_zoom

0xb5f1,	// (0x00098d86) level_1_zoom

0xb5fa,	// (0x00098d8f) level_2_zoom

0xb603,	// (0x00098d98) level_3_zoom

0xb60c,	// (0x00098da1) level_4_zoom

0xb615,	// (0x00098daa) level_5_zoom

0xb61e,	// (0x00098db3) level_6_zoom

0xb627,	// (0x00098dbc) level_7_zoom

0xb630,	// (0x00098dc5) level_8_zoom

0xb639,	// (0x00098dce) level_9_zoom

0xb64a,	// (0x00098ddf) popup_phob_thumbnail_window_g1

0xb652,	// (0x00098de7) popup_phob_thumbnail_window_g2

0x0001,

0xf413,	// (0x0009cba8) popup_phob_thumbnail_window_g

0xc967,	// (0x0009a0fc) level_1_location

0xc96f,	// (0x0009a104) level_2_location

0xc977,	// (0x0009a10c) level_3_location

0xc97f,	// (0x0009a114) level_4_location

0xa3fe,	// (0x00097b93) level_5_location

0x2fbd,	// (0x00090752) mce_icon_pane_g1

0x2fc7,	// (0x0009075c) mce_icon_pane_g2

0x0001,

0xf418,	// (0x0009cbad) mce_icon_pane_g

0x2fcf,	// (0x00090764) main_mup_pane_g1_ParamLimits

0x2fcf,	// (0x00090764) main_mup_pane_g1

0x2fe5,	// (0x0009077a) main_mup_pane_g2_ParamLimits

0x2fe5,	// (0x0009077a) main_mup_pane_g2

0x2ffd,	// (0x00090792) main_mup_pane_g3_ParamLimits

0x2ffd,	// (0x00090792) main_mup_pane_g3

0x3015,	// (0x000907aa) main_mup_pane_g4_ParamLimits

0x3015,	// (0x000907aa) main_mup_pane_g4

0x3027,	// (0x000907bc) main_mup_pane_g5_ParamLimits

0x3027,	// (0x000907bc) main_mup_pane_g5

0x3043,	// (0x000907d8) main_mup_pane_g6_ParamLimits

0x3043,	// (0x000907d8) main_mup_pane_g6

0x305d,	// (0x000907f2) main_mup_pane_g7_ParamLimits

0x305d,	// (0x000907f2) main_mup_pane_g7

0x307b,	// (0x00090810) main_mup_pane_g8_ParamLimits

0x307b,	// (0x00090810) main_mup_pane_g8

0x3099,	// (0x0009082e) main_mup_pane_g9_ParamLimits

0x3099,	// (0x0009082e) main_mup_pane_g9

0x30b5,	// (0x0009084a) main_mup_pane_g10_ParamLimits

0x30b5,	// (0x0009084a) main_mup_pane_g10

0x30d3,	// (0x00090868) main_mup_pane_g11_ParamLimits

0x30d3,	// (0x00090868) main_mup_pane_g11

0x30ed,	// (0x00090882) main_mup_pane_g12_ParamLimits

0x30ed,	// (0x00090882) main_mup_pane_g12

0x3103,	// (0x00090898) main_mup_pane_g13_ParamLimits

0x3103,	// (0x00090898) main_mup_pane_g13

0x000c,

0xf41d,	// (0x0009cbb2) main_mup_pane_g_ParamLimits

0xf41d,	// (0x0009cbb2) main_mup_pane_g

0x3117,	// (0x000908ac) main_mup_pane_t1_ParamLimits

0x3117,	// (0x000908ac) main_mup_pane_t1

0x3133,	// (0x000908c8) main_mup_pane_t2_ParamLimits

0x3133,	// (0x000908c8) main_mup_pane_t2

0x314b,	// (0x000908e0) main_mup_pane_t3_ParamLimits

0x314b,	// (0x000908e0) main_mup_pane_t3

0x3163,	// (0x000908f8) main_mup_pane_t4_ParamLimits

0x3163,	// (0x000908f8) main_mup_pane_t4

0x3181,	// (0x00090916) main_mup_pane_t5_ParamLimits

0x3181,	// (0x00090916) main_mup_pane_t5

0x3196,	// (0x0009092b) main_mup_pane_t6_ParamLimits

0x3196,	// (0x0009092b) main_mup_pane_t6

0x0005,

0xf438,	// (0x0009cbcd) main_mup_pane_t_ParamLimits

0xf438,	// (0x0009cbcd) main_mup_pane_t

0x31a8,	// (0x0009093d) mup_progress_pane_ParamLimits

0x31a8,	// (0x0009093d) mup_progress_pane

0x31b4,	// (0x00090949) mup_visualizer_pane_ParamLimits

0x31b4,	// (0x00090949) mup_visualizer_pane

0x31e8,	// (0x0009097d) mup_volume_pane_ParamLimits

0x31e8,	// (0x0009097d) mup_volume_pane

0xb65a,	// (0x00098def) mup_visualizer_pane_g1_ParamLimits

0xb65a,	// (0x00098def) mup_visualizer_pane_g1

0xb65a,	// (0x00098def) mup_visualizer_pane_g2_ParamLimits

0xb65a,	// (0x00098def) mup_visualizer_pane_g2

0xb3dc,	// (0x00098b71) mup_visualizer_pane_g3_ParamLimits

0xb3dc,	// (0x00098b71) mup_visualizer_pane_g3

0x0002,

0xf445,	// (0x0009cbda) mup_visualizer_pane_g_ParamLimits

0xf445,	// (0x0009cbda) mup_visualizer_pane_g

0xa263,	// (0x000979f8) mup_volume_pane_g1

0xb670,	// (0x00098e05) mup_volume_pane_g2

0x0001,

0xf44c,	// (0x0009cbe1) mup_volume_pane_g

0xa263,	// (0x000979f8) mup_progress_pane_g1

0xb679,	// (0x00098e0e) mup_progress_pane_g2

0xb682,	// (0x00098e17) mup_progress_pane_g3

0x0002,

0xf451,	// (0x0009cbe6) mup_progress_pane_g

0x9ea8,	// (0x0009763d) bg_popup_window_pane_cp05

0xb68b,	// (0x00098e20) heading_pane_cp02_ParamLimits

0xb68b,	// (0x00098e20) heading_pane_cp02

0xb6a7,	// (0x00098e3c) list_popup_blid_pane

0xb6af,	// (0x00098e44) list_blid_sat_info_pane_ParamLimits

0xb6af,	// (0x00098e44) list_blid_sat_info_pane

0xb6c2,	// (0x00098e57) list_blid_sat_info_pane_g1

0xb6ca,	// (0x00098e5f) list_blid_sat_info_pane_t1

0x3312,	// (0x00090aa7) mup_equalizer_pane_ParamLimits

0x3312,	// (0x00090aa7) mup_equalizer_pane

0x3333,	// (0x00090ac8) mup_equalizer_pane_cp1_ParamLimits

0x3333,	// (0x00090ac8) mup_equalizer_pane_cp1

0x3354,	// (0x00090ae9) mup_equalizer_pane_cp2_ParamLimits

0x3354,	// (0x00090ae9) mup_equalizer_pane_cp2

0x3379,	// (0x00090b0e) mup_equalizer_pane_cp3_ParamLimits

0x3379,	// (0x00090b0e) mup_equalizer_pane_cp3

0x33a2,	// (0x00090b37) mup_equalizer_pane_cp4_ParamLimits

0x33a2,	// (0x00090b37) mup_equalizer_pane_cp4

0x33cb,	// (0x00090b60) mup_equalizer_pane_cp5

0x33e3,	// (0x00090b78) mup_equalizer_pane_cp6

0x33fb,	// (0x00090b90) mup_equalizer_pane_cp7

0xc881,	// (0x0009a016) bg_popup_call_poc_act_pane_g9

0xc889,	// (0x0009a01e) bg_popup_call_poc_act_pane_g10

0xc891,	// (0x0009a026) bg_popup_call_poc_act_pane_g11

0x000a,

0xa103,	// (0x00097898) mup_scale_pane

0xa263,	// (0x000979f8) mup_scale_pane_g1

0xb6d8,	// (0x00098e6d) mup_scale_pane_g2

0x0006,

0xf46d,	// (0x0009cc02) mup_scale_pane_g

0xb6fc,	// (0x00098e91) msg_data_pane

0xb704,	// (0x00098e99) scroll_pane_cp017

0xfd90,	// (0x0008d525) bg_list_pane_cp04_ParamLimits

0xfd90,	// (0x0008d525) bg_list_pane_cp04

0xb70c,	// (0x00098ea1) msg_data_pane_g1

0x342d,	// (0x00090bc2) msg_data_pane_g2

0x3437,	// (0x00090bcc) msg_data_pane_g3

0x3441,	// (0x00090bd6) msg_data_pane_g4

0x3449,	// (0x00090bde) msg_data_pane_g5

0x3451,	// (0x00090be6) msg_data_pane_g6

0x3459,	// (0x00090bee) msg_data_pane_g7

0x0006,

0xf47c,	// (0x0009cc11) msg_data_pane_g

0xfdb0,	// (0x0008d545) msg_text_pane_ParamLimits

0xfdb0,	// (0x0008d545) msg_text_pane

0x3461,	// (0x00090bf6) qrid_highlight_pane_cp011_ParamLimits

0x3461,	// (0x00090bf6) qrid_highlight_pane_cp011

0x9ea8,	// (0x0009763d) msg_body_pane

0x9ea8,	// (0x0009763d) msg_header_pane

0xb71d,	// (0x00098eb2) input_focus_pane_cp07

0x3477,	// (0x00090c0c) msg_header_pane_t1_ParamLimits

0x3477,	// (0x00090c0c) msg_header_pane_t1

0x3489,	// (0x00090c1e) msg_header_pane_t2_ParamLimits

0x3489,	// (0x00090c1e) msg_header_pane_t2

0x0001,

0xf490,	// (0x0009cc25) msg_header_pane_t_ParamLimits

0xf490,	// (0x0009cc25) msg_header_pane_t

0xb732,	// (0x00098ec7) msg_body_pane_g1

0x349b,	// (0x00090c30) msg_body_pane_t1_ParamLimits

0x349b,	// (0x00090c30) msg_body_pane_t1

0x34cc,	// (0x00090c61) msg_body_pane_t2_ParamLimits

0x34cc,	// (0x00090c61) msg_body_pane_t2

0x34de,	// (0x00090c73) msg_body_pane_t3_ParamLimits

0x34de,	// (0x00090c73) msg_body_pane_t3

0x0002,

0xf495,	// (0x0009cc2a) msg_body_pane_t_ParamLimits

0xf495,	// (0x0009cc2a) msg_body_pane_t

0x352a,	// (0x00090cbf) main_viewer_pane_g1_ParamLimits

0x352a,	// (0x00090cbf) main_viewer_pane_g1

0x3538,	// (0x00090ccd) main_viewer_pane_g2_ParamLimits

0x3538,	// (0x00090ccd) main_viewer_pane_g2

0x3546,	// (0x00090cdb) main_viewer_pane_g3_ParamLimits

0x3546,	// (0x00090cdb) main_viewer_pane_g3

0x3555,	// (0x00090cea) main_viewer_pane_g4_ParamLimits

0x3555,	// (0x00090cea) main_viewer_pane_g4

0xa61b,	// (0x00097db0) main_viewer_pane_g5_ParamLimits

0xa61b,	// (0x00097db0) main_viewer_pane_g5

0xa61b,	// (0x00097db0) main_viewer_pane_g7_ParamLimits

0xa61b,	// (0x00097db0) main_viewer_pane_g7

0xa62d,	// (0x00097dc2) main_viewer_pane_g8_ParamLimits

0xa62d,	// (0x00097dc2) main_viewer_pane_g8

0x0007,

0xf4a5,	// (0x0009cc3a) main_viewer_pane_g_ParamLimits

0xf4a5,	// (0x0009cc3a) main_viewer_pane_g

0xb73a,	// (0x00098ecf) viewer_content_pane_ParamLimits

0xb73a,	// (0x00098ecf) viewer_content_pane

0x3593,	// (0x00090d28) main_postcard_pane_g1_ParamLimits

0x3593,	// (0x00090d28) main_postcard_pane_g1

0x35a9,	// (0x00090d3e) main_postcard_pane_g2_ParamLimits

0x35a9,	// (0x00090d3e) main_postcard_pane_g2

0x35bf,	// (0x00090d54) main_postcard_pane_g3_ParamLimits

0x35bf,	// (0x00090d54) main_postcard_pane_g3

0x0005,

0xf4b6,	// (0x0009cc4b) main_postcard_pane_g_ParamLimits

0xf4b6,	// (0x0009cc4b) main_postcard_pane_g

0x35d6,	// (0x00090d6b) main_postcard_pane_g4

0xca7a,	// (0x0009a20f) smil_status_volume_pane_g2

0x3619,	// (0x00090dae) postcard_pane_ParamLimits

0x3619,	// (0x00090dae) postcard_pane

0xb748,	// (0x00098edd) postcard_pane_g1_ParamLimits

0xb748,	// (0x00098edd) postcard_pane_g1

0x3669,	// (0x00090dfe) postcard_pane_g2_ParamLimits

0x3669,	// (0x00090dfe) postcard_pane_g2

0x3675,	// (0x00090e0a) postcard_pane_g3_ParamLimits

0x3675,	// (0x00090e0a) postcard_pane_g3

0xb756,	// (0x00098eeb) postcard_pane_g4_ParamLimits

0xb756,	// (0x00098eeb) postcard_pane_g4

0x3681,	// (0x00090e16) postcard_pane_g5_ParamLimits

0x3681,	// (0x00090e16) postcard_pane_g5

0x3696,	// (0x00090e2b) postcard_pane_g6_ParamLimits

0x3696,	// (0x00090e2b) postcard_pane_g6

0xb748,	// (0x00098edd) postcard_pane_g7_ParamLimits

0xb748,	// (0x00098edd) postcard_pane_g7

0x0006,

0xf4c3,	// (0x0009cc58) postcard_pane_g_ParamLimits

0xf4c3,	// (0x0009cc58) postcard_pane_g

0x36ae,	// (0x00090e43) main_mp2_pane_g1_ParamLimits

0x36ae,	// (0x00090e43) main_mp2_pane_g1

0x36bc,	// (0x00090e51) main_mp2_pane_g2_ParamLimits

0x36bc,	// (0x00090e51) main_mp2_pane_g2

0x36c8,	// (0x00090e5d) main_mp2_pane_g3_ParamLimits

0x36c8,	// (0x00090e5d) main_mp2_pane_g3

0x0002,

0xf4d2,	// (0x0009cc67) main_mp2_pane_g_ParamLimits

0xf4d2,	// (0x0009cc67) main_mp2_pane_g

0x36d4,	// (0x00090e69) main_mp2_pane_t1_ParamLimits

0x36d4,	// (0x00090e69) main_mp2_pane_t1

0x36eb,	// (0x00090e80) main_mp2_pane_t2_ParamLimits

0x36eb,	// (0x00090e80) main_mp2_pane_t2

0x36ff,	// (0x00090e94) main_mp2_pane_t3_ParamLimits

0x36ff,	// (0x00090e94) main_mp2_pane_t3

0x0002,

0xf4d9,	// (0x0009cc6e) main_mp2_pane_t_ParamLimits

0xf4d9,	// (0x0009cc6e) main_mp2_pane_t

0xb764,	// (0x00098ef9) pec_content_pane_ParamLimits

0xb764,	// (0x00098ef9) pec_content_pane

0xad0f,	// (0x000984a4) scroll_pane_cp015

0xb776,	// (0x00098f0b) pec_attribute_pane_ParamLimits

0xb776,	// (0x00098f0b) pec_attribute_pane

0x3711,	// (0x00090ea6) pec_content_pane_g1_ParamLimits

0x3711,	// (0x00090ea6) pec_content_pane_g1

0xb786,	// (0x00098f1b) pec_content_pane_t1_ParamLimits

0xb786,	// (0x00098f1b) pec_content_pane_t1

0xb798,	// (0x00098f2d) pec_content_pane_t2_ParamLimits

0xb798,	// (0x00098f2d) pec_content_pane_t2

0x0001,

0xf4e0,	// (0x0009cc75) pec_content_pane_t_ParamLimits

0xf4e0,	// (0x0009cc75) pec_content_pane_t

0x371d,	// (0x00090eb2) list_single_graphic_pane_cp01_ParamLimits

0x371d,	// (0x00090eb2) list_single_graphic_pane_cp01

0xa103,	// (0x00097898) bg_popup_sub_pane_cp04

0xb7aa,	// (0x00098f3f) popup_mup_playback_window_g1

0xb7b6,	// (0x00098f4b) popup_mup_playback_window_t1

0xb7cb,	// (0x00098f60) popup_mup_playback_window_t2

0x0001,

0xf4e5,	// (0x0009cc7a) popup_mup_playback_window_t

0xb802,	// (0x00098f97) main_image_pane_g1_ParamLimits

0xb802,	// (0x00098f97) main_image_pane_g1

0xb845,	// (0x00098fda) scroll_pane_cp018_ParamLimits

0xb845,	// (0x00098fda) scroll_pane_cp018

0xb85d,	// (0x00098ff2) scroll_pane_cp016_ParamLimits

0xb85d,	// (0x00098ff2) scroll_pane_cp016

0x37ef,	// (0x00090f84) smil2_image_pane_ParamLimits

0x37ef,	// (0x00090f84) smil2_image_pane

0x3825,	// (0x00090fba) smil2_root_pane_ParamLimits

0x3825,	// (0x00090fba) smil2_root_pane

0x385d,	// (0x00090ff2) smil2_text_pane_ParamLimits

0x385d,	// (0x00090ff2) smil2_text_pane

0x9ea8,	// (0x0009763d) bg_list_pane_cp06

0xb899,	// (0x0009902e) grid_radio_pane

0x9ea8,	// (0x0009763d) bg_popup_window_pane_cp06

0xb8a3,	// (0x00099038) main_fmradio_pane_t1

0xb259,	// (0x000989ee) heading_pane_cp04

0xb8b1,	// (0x00099046) main_fmradio_pane_t2

0xc899,	// (0x0009a02e) popup_cale_lunar_info_window_g1

0xb8bf,	// (0x00099054) main_fmradio_pane_t3

0xc8a1,	// (0x0009a036) popup_cale_lunar_info_window_g2

0xb8cf,	// (0x00099064) main_fmradio_pane_t4

0x0001,

0xb8dd,	// (0x00099072) main_fmradio_pane_t5

0x0004,

0xf5c0,	// (0x0009cd55) popup_cale_lunar_info_window_g

0xf4fa,	// (0x0009cc8f) main_fmradio_pane_t

0xb8eb,	// (0x00099080) wait_bar_pane_cp03

0xb8f3,	// (0x00099088) cell_fmradio_pane_ParamLimits

0xb8f3,	// (0x00099088) cell_fmradio_pane

0xb748,	// (0x00098edd) cell_fmradio_pane_g1_ParamLimits

0xb748,	// (0x00098edd) cell_fmradio_pane_g1

0x9ea8,	// (0x0009763d) grid_highlight_pane_cp011

0xb908,	// (0x0009909d) poc_content_pane_ParamLimits

0xb908,	// (0x0009909d) poc_content_pane

0xb91a,	// (0x000990af) scroll_pane_cp019

0x38ed,	// (0x00091082) popup_call_poc_act_window_ParamLimits

0x38ed,	// (0x00091082) popup_call_poc_act_window

0x3911,	// (0x000910a6) popup_call_poc_inact_window_ParamLimits

0x3911,	// (0x000910a6) popup_call_poc_inact_window

0xf597,	// (0x0009cd2c) bg_popup_call_poc_act_pane_g

0xc811,	// (0x00099fa6) bg_popup_call_poc_inact_pane_g1

0xc819,	// (0x00099fae) bg_popup_call_poc_inact_pane_g2

0xb922,	// (0x000990b7) popup_call_poc_act_window_g2

0xc821,	// (0x00099fb6) bg_popup_call_poc_inact_pane_g3

0xc829,	// (0x00099fbe) bg_popup_call_poc_inact_pane_g4

0xc831,	// (0x00099fc6) bg_popup_call_poc_inact_pane_g5

0xb92a,	// (0x000990bf) popup_call_poc_act_window_t1_ParamLimits

0xb92a,	// (0x000990bf) popup_call_poc_act_window_t1

0xb952,	// (0x000990e7) popup_call_poc_act_window_t2_ParamLimits

0xb952,	// (0x000990e7) popup_call_poc_act_window_t2

0xb97a,	// (0x0009910f) popup_call_poc_act_window_t3_ParamLimits

0xb97a,	// (0x0009910f) popup_call_poc_act_window_t3

0xb9a2,	// (0x00099137) popup_call_poc_act_window_t4_ParamLimits

0xb9a2,	// (0x00099137) popup_call_poc_act_window_t4

0x0003,

0xf505,	// (0x0009cc9a) popup_call_poc_act_window_t_ParamLimits

0xf505,	// (0x0009cc9a) popup_call_poc_act_window_t

0xc839,	// (0x00099fce) bg_popup_call_poc_inact_pane_g6

0xc841,	// (0x00099fd6) bg_popup_call_poc_inact_pane_g7

0xc849,	// (0x00099fde) bg_popup_call_poc_inact_pane_g8

0xb9b4,	// (0x00099149) popup_call_poc_inact_window_g2

0xc851,	// (0x00099fe6) bg_popup_call_poc_inact_pane_g9

0x0008,

0xf584,	// (0x0009cd19) bg_popup_call_poc_inact_pane_g

0xb9bc,	// (0x00099151) popup_call_poc_inact_window_t1_ParamLimits

0xb9bc,	// (0x00099151) popup_call_poc_inact_window_t1

0xb9d1,	// (0x00099166) popup_call_poc_inact_window_t2_ParamLimits

0xb9d1,	// (0x00099166) popup_call_poc_inact_window_t2

0xb9e6,	// (0x0009917b) popup_call_poc_inact_window_t3_ParamLimits

0xb9e6,	// (0x0009917b) popup_call_poc_inact_window_t3

0x0002,

0xf50e,	// (0x0009cca3) popup_call_poc_inact_window_t_ParamLimits

0xf50e,	// (0x0009cca3) popup_call_poc_inact_window_t

0xc9da,	// (0x0009a16f) context_pane_ParamLimits

0x41aa,	// (0x0009193f) signal_pane_ParamLimits

0xa3fe,	// (0x00097b93) main_call2_pane

0xa676,	// (0x00097e0b) popup_phob_thumbnail2_window_ParamLimits

0xa676,	// (0x00097e0b) popup_phob_thumbnail2_window

0xa603,	// (0x00097d98) aid_hotspot_pointer_arrow_pane

0xa60b,	// (0x00097da0) aid_hotspot_pointer_hand_pane

0x3c7c,	// (0x00091411) phob_pre_status_pane_g5

0x178b,	// (0x0008ef20) cams_zoom_pane_ParamLimits

0x179a,	// (0x0008ef2f) image_vga_pane_ParamLimits

0x17b4,	// (0x0008ef49) main_camera_pane_g1_ParamLimits

0x17c6,	// (0x0008ef5b) main_camera_pane_g2_ParamLimits

0x17d6,	// (0x0008ef6b) main_camera_pane_g3_ParamLimits

0x17ea,	// (0x0008ef7f) main_camera_pane_g4_ParamLimits

0x17fe,	// (0x0008ef93) main_camera_pane_g5_ParamLimits

0x1812,	// (0x0008efa7) main_camera_pane_g6_ParamLimits

0x1826,	// (0x0008efbb) main_camera_pane_g7_ParamLimits

0xf206,	// (0x0009c99b) main_camera_pane_g_ParamLimits

0x183a,	// (0x0008efcf) main_camera_pane_t1_ParamLimits

0x1850,	// (0x0008efe5) main_camera_pane_t2_ParamLimits

0xf217,	// (0x0009c9ac) main_camera_pane_t_ParamLimits

0xa103,	// (0x00097898) bg_popup_preview_window_pane_cp01_ParamLimits

0xa103,	// (0x00097898) bg_popup_preview_window_pane_cp01

0xb9fb,	// (0x00099190) popup_phob_thumbnail2_window_g1_ParamLimits

0xb9fb,	// (0x00099190) popup_phob_thumbnail2_window_g1

0x9ea8,	// (0x0009763d) call2_cli_visual_pane

0x3945,	// (0x000910da) popup_call2_audio_conf_window_ParamLimits

0x3945,	// (0x000910da) popup_call2_audio_conf_window

0x396d,	// (0x00091102) popup_call2_audio_first_window_ParamLimits

0x396d,	// (0x00091102) popup_call2_audio_first_window

0x3a03,	// (0x00091198) popup_call2_audio_in_window_ParamLimits

0x3a03,	// (0x00091198) popup_call2_audio_in_window

0x3a4f,	// (0x000911e4) popup_call2_audio_out_window_ParamLimits

0x3a4f,	// (0x000911e4) popup_call2_audio_out_window

0x3ac1,	// (0x00091256) popup_call2_audio_second_window_ParamLimits

0x3ac1,	// (0x00091256) popup_call2_audio_second_window

0x3b27,	// (0x000912bc) popup_call2_audio_wait_window_ParamLimits

0x3b27,	// (0x000912bc) popup_call2_audio_wait_window

0x9ea8,	// (0x0009763d) bg_popup_call2_act_pane_cp03

0xa0e5,	// (0x0009787a) list_conf_pane_cp

0xba07,	// (0x0009919c) popup_call2_audio_conf_window_t1

0xba15,	// (0x000991aa) list_single_graphic_popup_conf2_pane_ParamLimits

0xba15,	// (0x000991aa) list_single_graphic_popup_conf2_pane

0xb2c8,	// (0x00098a5d) list_highlight_pane_cp04

0xba28,	// (0x000991bd) list_single_graphic_popup_conf2_pane_g1

0xb2d9,	// (0x00098a6e) list_single_graphic_popup_conf2_pane_g2

0x0001,

0xf515,	// (0x0009ccaa) list_single_graphic_popup_conf2_pane_g

0xba32,	// (0x000991c7) list_single_graphic_popup_conf2_pane_t1

0xba40,	// (0x000991d5) bg_popup_call2_act_pane_cp01_ParamLimits

0xba40,	// (0x000991d5) bg_popup_call2_act_pane_cp01

0xbaca,	// (0x0009925f) call_type_pane_cp05_ParamLimits

0xbaca,	// (0x0009925f) call_type_pane_cp05

0xbb1e,	// (0x000992b3) popup_call2_audio_second_window_g1_ParamLimits

0xbb1e,	// (0x000992b3) popup_call2_audio_second_window_g1

0xbb72,	// (0x00099307) popup_call2_audio_second_window_g2_ParamLimits

0xbb72,	// (0x00099307) popup_call2_audio_second_window_g2

0x0002,

0xf51a,	// (0x0009ccaf) popup_call2_audio_second_window_g_ParamLimits

0xf51a,	// (0x0009ccaf) popup_call2_audio_second_window_g

0xbbd7,	// (0x0009936c) popup_call2_audio_second_window_t1_ParamLimits

0xbbd7,	// (0x0009936c) popup_call2_audio_second_window_t1

0xbc92,	// (0x00099427) popup_call2_audio_second_window_t2_ParamLimits

0xbc92,	// (0x00099427) popup_call2_audio_second_window_t2

0xbce5,	// (0x0009947a) popup_call2_audio_second_window_t3_ParamLimits

0xbce5,	// (0x0009947a) popup_call2_audio_second_window_t3

0x0003,

0xf521,	// (0x0009ccb6) popup_call2_audio_second_window_t_ParamLimits

0xf521,	// (0x0009ccb6) popup_call2_audio_second_window_t

0x9ea8,	// (0x0009763d) bg_popup_call2_in_pane_cp02

0x9eb2,	// (0x00097647) call_type_pane_cp04

0x9eba,	// (0x0009764f) popup_call2_audio_wait_window_g1

0x9ec2,	// (0x00097657) popup_call2_audio_wait_window_g2

0x0001,

0xf0f5,	// (0x0009c88a) popup_call2_audio_wait_window_g

0x9eca,	// (0x0009765f) popup_call2_audio_wait_window_t3

0xbdd8,	// (0x0009956d) bg_popup_call2_act_pane_ParamLimits

0xbdd8,	// (0x0009956d) bg_popup_call2_act_pane

0xbe98,	// (0x0009962d) call_type_pane_cp03_ParamLimits

0xbe98,	// (0x0009962d) call_type_pane_cp03

0xbf0e,	// (0x000996a3) popup_call2_audio_first_window_g1_ParamLimits

0xbf0e,	// (0x000996a3) popup_call2_audio_first_window_g1

0xbf7e,	// (0x00099713) popup_call2_audio_first_window_g2_ParamLimits

0xbf7e,	// (0x00099713) popup_call2_audio_first_window_g2

0xb65a,	// (0x00098def) popup_call2_audio_first_window_g3_ParamLimits

0xb65a,	// (0x00098def) popup_call2_audio_first_window_g3

0x0004,

0xf52a,	// (0x0009ccbf) popup_call2_audio_first_window_g_ParamLimits

0xf52a,	// (0x0009ccbf) popup_call2_audio_first_window_g

0xc05c,	// (0x000997f1) popup_call2_audio_first_window_t1_ParamLimits

0xc05c,	// (0x000997f1) popup_call2_audio_first_window_t1

0xc15f,	// (0x000998f4) popup_call2_audio_first_window_t4_ParamLimits

0xc15f,	// (0x000998f4) popup_call2_audio_first_window_t4

0xc242,	// (0x000999d7) popup_call2_audio_first_window_t5_ParamLimits

0xc242,	// (0x000999d7) popup_call2_audio_first_window_t5

0x0003,

0xf535,	// (0x0009ccca) popup_call2_audio_first_window_t_ParamLimits

0xf535,	// (0x0009ccca) popup_call2_audio_first_window_t

0xa0fb,	// (0x00097890) bg_popup_call2_act_pane_g1

0xc8ab,	// (0x0009a040) popup_cale_lunar_info_window_t1

0xc8b9,	// (0x0009a04e) popup_cale_lunar_info_window_t2

0xc8c7,	// (0x0009a05c) popup_cale_lunar_info_window_t3

0x9ea8,	// (0x0009763d) bg_popup_call2_bubble_pane

0xc343,	// (0x00099ad8) bg_popup_call2_in_pane_cp01_ParamLimits

0xc343,	// (0x00099ad8) bg_popup_call2_in_pane_cp01

0x9b84,	// (0x00097319) call_type_pane_cp02

0xc38b,	// (0x00099b20) popup_call2_audio_out_window_g1_ParamLimits

0xc38b,	// (0x00099b20) popup_call2_audio_out_window_g1

0xc3b7,	// (0x00099b4c) popup_call2_audio_out_window_g2_ParamLimits

0xc3b7,	// (0x00099b4c) popup_call2_audio_out_window_g2

0xc3df,	// (0x00099b74) popup_call2_audio_out_window_g3_ParamLimits

0xc3df,	// (0x00099b74) popup_call2_audio_out_window_g3

0x0003,

0xf53e,	// (0x0009ccd3) popup_call2_audio_out_window_g_ParamLimits

0xf53e,	// (0x0009ccd3) popup_call2_audio_out_window_g

0xc41a,	// (0x00099baf) popup_call2_audio_out_window_t1_ParamLimits

0xc41a,	// (0x00099baf) popup_call2_audio_out_window_t1

0xc479,	// (0x00099c0e) popup_call2_audio_out_window_t2_ParamLimits

0xc479,	// (0x00099c0e) popup_call2_audio_out_window_t2

0xc4cd,	// (0x00099c62) popup_call2_audio_out_window_t3_ParamLimits

0xc4cd,	// (0x00099c62) popup_call2_audio_out_window_t3

0xc4e3,	// (0x00099c78) popup_call2_audio_out_window_t4_ParamLimits

0xc4e3,	// (0x00099c78) popup_call2_audio_out_window_t4

0xc4f9,	// (0x00099c8e) popup_call2_audio_out_window_t5_ParamLimits

0xc4f9,	// (0x00099c8e) popup_call2_audio_out_window_t5

0x0005,

0xf547,	// (0x0009ccdc) popup_call2_audio_out_window_t_ParamLimits

0xf547,	// (0x0009ccdc) popup_call2_audio_out_window_t

0xc55d,	// (0x00099cf2) bg_popup_call2_in_pane_ParamLimits

0xc55d,	// (0x00099cf2) bg_popup_call2_in_pane

0xc5b9,	// (0x00099d4e) popup_call2_audio_in_window_g1_ParamLimits

0xc5b9,	// (0x00099d4e) popup_call2_audio_in_window_g1

0xc5f1,	// (0x00099d86) popup_call2_audio_in_window_g2_ParamLimits

0xc5f1,	// (0x00099d86) popup_call2_audio_in_window_g2

0xc629,	// (0x00099dbe) popup_call2_audio_in_window_g3_ParamLimits

0xc629,	// (0x00099dbe) popup_call2_audio_in_window_g3

0x0003,

0xf554,	// (0x0009cce9) popup_call2_audio_in_window_g_ParamLimits

0xf554,	// (0x0009cce9) popup_call2_audio_in_window_g

0xc681,	// (0x00099e16) popup_call2_audio_in_window_t1_ParamLimits

0xc681,	// (0x00099e16) popup_call2_audio_in_window_t1

0xc701,	// (0x00099e96) popup_call2_audio_in_window_t2_ParamLimits

0xc701,	// (0x00099e96) popup_call2_audio_in_window_t2

0xc781,	// (0x00099f16) popup_call2_audio_in_window_t3_ParamLimits

0xc781,	// (0x00099f16) popup_call2_audio_in_window_t3

0xc79b,	// (0x00099f30) popup_call2_audio_in_window_t4_ParamLimits

0xc79b,	// (0x00099f30) popup_call2_audio_in_window_t4

0xc7ad,	// (0x00099f42) popup_call2_audio_in_window_t5_ParamLimits

0xc7ad,	// (0x00099f42) popup_call2_audio_in_window_t5

0xc7bf,	// (0x00099f54) popup_call2_audio_in_window_t6_ParamLimits

0xc7bf,	// (0x00099f54) popup_call2_audio_in_window_t6

0x0005,

0xf55d,	// (0x0009ccf2) popup_call2_audio_in_window_t_ParamLimits

0xf55d,	// (0x0009ccf2) popup_call2_audio_in_window_t

0xa0fb,	// (0x00097890) bg_popup_call2_in_pane_g1

0xc8d5,	// (0x0009a06a) popup_cale_lunar_info_window_t4

0x0003,

0xf5c5,	// (0x0009cd5a) popup_cale_lunar_info_window_t

0xa103,	// (0x00097898) bg_popup_call2_rect_pane_ParamLimits

0xa103,	// (0x00097898) bg_popup_call2_rect_pane

0x9ea8,	// (0x0009763d) call2_cli_visual_graphic_pane

0x9ea8,	// (0x0009763d) call2_cli_visual_text_pane

0xa69d,	// (0x00097e32) smil_status_volume_pane_g3

0x0002,

0xa263,	// (0x000979f8) call2_cli_visual_graphic_pane_g1

0xa263,	// (0x000979f8) call2_cli_visual_graphic_pane_g2

0xa263,	// (0x000979f8) call2_cli_visual_graphic_pane_g3

0x0002,

0xf56a,	// (0x0009ccff) call2_cli_visual_graphic_pane_g

0xc7d1,	// (0x00099f66) bg_popup_call2_rect_pane_g1

0xa2ef,	// (0x00097a84) bg_popup_call2_rect_pane_g2

0xc7d9,	// (0x00099f6e) bg_popup_call2_rect_pane_g3

0xc7e1,	// (0x00099f76) bg_popup_call2_rect_pane_g4

0xc7e9,	// (0x00099f7e) bg_popup_call2_rect_pane_g5

0xc7f1,	// (0x00099f86) bg_popup_call2_rect_pane_g6

0xc7f9,	// (0x00099f8e) bg_popup_call2_rect_pane_g7

0xc801,	// (0x00099f96) bg_popup_call2_rect_pane_g8

0xc809,	// (0x00099f9e) bg_popup_call2_rect_pane_g9

0x0008,

0xf571,	// (0x0009cd06) bg_popup_call2_rect_pane_g

0xc811,	// (0x00099fa6) bg_popup_call2_bubble_pane_g1

0xc819,	// (0x00099fae) bg_popup_call2_bubble_pane_g2

0xc821,	// (0x00099fb6) bg_popup_call2_bubble_pane_g3

0xc829,	// (0x00099fbe) bg_popup_call2_bubble_pane_g4

0xc831,	// (0x00099fc6) bg_popup_call2_bubble_pane_g5

0xc839,	// (0x00099fce) bg_popup_call2_bubble_pane_g6

0xc841,	// (0x00099fd6) bg_popup_call2_bubble_pane_g7

0xc849,	// (0x00099fde) bg_popup_call2_bubble_pane_g8

0xc851,	// (0x00099fe6) bg_popup_call2_bubble_pane_g9

0x0008,

0xf584,	// (0x0009cd19) bg_popup_call2_bubble_pane_g

0x1146,	// (0x0008e8db) aid_cale_week_size_cell_pane

0x186a,	// (0x0008efff) aid_cams_cif_uncrop_pane_ParamLimits

0x186a,	// (0x0008efff) aid_cams_cif_uncrop_pane

0x1a23,	// (0x0008f1b8) aid_cams_size_cell_ParamLimits

0x1a23,	// (0x0008f1b8) aid_cams_size_cell

0x1a37,	// (0x0008f1cc) grid_cams_pane_ParamLimits

0x1a51,	// (0x0008f1e6) linegrid_cams_pane_ParamLimits

0x1b47,	// (0x0008f2dc) call_video_pane_t1

0x1b61,	// (0x0008f2f6) call_video_pane_t2

0x0001,

0xf26a,	// (0x0009c9ff) call_video_pane_t

0x1fae,	// (0x0008f743) aid_cale_month_size_cell_pane_ParamLimits

0x1fae,	// (0x0008f743) aid_cale_month_size_cell_pane

0xf60e,	// (0x0009cda3) smil_status_volume_pane_g

0xa6aa,	// (0x00097e3f) volume_smil_pane_ParamLimits

0x9a0d,	// (0x000971a2) aid_popup2_width_pane

0x10a7,	// (0x0008e83c) cell_qdial_pane_g4_ParamLimits

0x10a7,	// (0x0008e83c) cell_qdial_pane_g4

0x2eee,	// (0x00090683) aid_blid_cardinal_pane_ParamLimits

0x2efe,	// (0x00090693) aid_blid_destination_pane_ParamLimits

0x2efe,	// (0x00090693) aid_blid_destination_pane

0xa103,	// (0x00097898) bg_popup_call_poc_act_pane_ParamLimits

0xa103,	// (0x00097898) bg_popup_call_poc_act_pane

0xa103,	// (0x00097898) bg_popup_call_poc_inact_pane_ParamLimits

0xa103,	// (0x00097898) bg_popup_call_poc_inact_pane

0xc859,	// (0x00099fee) bg_popup_call_poc_act_pane_g1

0xc861,	// (0x00099ff6) bg_popup_call_poc_act_pane_g2

0xc869,	// (0x00099ffe) bg_popup_call_poc_act_pane_g3

0xc829,	// (0x00099fbe) bg_popup_call_poc_act_pane_g4

0xc831,	// (0x00099fc6) bg_popup_call_poc_act_pane_g5

0xc871,	// (0x0009a006) bg_popup_call_poc_act_pane_g6

0xc841,	// (0x00099fd6) bg_popup_call_poc_act_pane_g7

0xc879,	// (0x0009a00e) bg_popup_call_poc_act_pane_g8

0x9ea8,	// (0x0009763d) main_usb_pane

0xa64d,	// (0x00097de2) popup_cale_lunar_info_window

0x1e2e,	// (0x0008f5c3) im_reading_pane_t1_ParamLimits

0xa50d,	// (0x00097ca2) list_im_pane_ParamLimits

0xa51e,	// (0x00097cb3) scroll_pane_cp07_ParamLimits

0x9ea8,	// (0x0009763d) grid_highlight_pane_cp012

0xa103,	// (0x00097898) mup_scale_pane_ParamLimits

0xb748,	// (0x00098edd) main_usb_pane_g1_ParamLimits

0xb748,	// (0x00098edd) main_usb_pane_g1

0x3b88,	// (0x0009131d) main_usb_pane_g2_ParamLimits

0x3b88,	// (0x0009131d) main_usb_pane_g2

0x0001,

0xf5ae,	// (0x0009cd43) main_usb_pane_g_ParamLimits

0xf5ae,	// (0x0009cd43) main_usb_pane_g

0x3b9e,	// (0x00091333) main_usb_pane_t1_ParamLimits

0x3b9e,	// (0x00091333) main_usb_pane_t1

0x3bb0,	// (0x00091345) main_usb_pane_t2_ParamLimits

0x3bb0,	// (0x00091345) main_usb_pane_t2

0x3bc2,	// (0x00091357) main_usb_pane_t3_ParamLimits

0x3bc2,	// (0x00091357) main_usb_pane_t3

0x3bd4,	// (0x00091369) main_usb_pane_t4_ParamLimits

0x3bd4,	// (0x00091369) main_usb_pane_t4

0x3be9,	// (0x0009137e) main_usb_pane_t5_ParamLimits

0x3be9,	// (0x0009137e) main_usb_pane_t5

0x3bfe,	// (0x00091393) main_usb_pane_t6_ParamLimits

0x3bfe,	// (0x00091393) main_usb_pane_t6

0x0005,

0xf5b3,	// (0x0009cd48) main_usb_pane_t_ParamLimits

0x2e8d,	// (0x00090622) aid_text_placing

0x2e98,	// (0x0009062d) main_location2_pane_t1_ParamLimits

0x2eae,	// (0x00090643) main_location2_pane_t2_ParamLimits

0x2ec4,	// (0x00090659) main_location2_pane_t3_ParamLimits

0x2eda,	// (0x0009066f) main_location2_pane_t4_ParamLimits

0x2eda,	// (0x0009066f) main_location2_pane_t4

0xf3d2,	// (0x0009cb67) main_location2_pane_t_ParamLimits

0xa13f,	// (0x000978d4) find_pinb_pane_g2_ParamLimits

0xa13f,	// (0x000978d4) find_pinb_pane_g2

0x0001,

0xf11b,	// (0x0009c8b0) find_pinb_pane_g_ParamLimits

0xf11b,	// (0x0009c8b0) find_pinb_pane_g

0xa14b,	// (0x000978e0) find_pinb_pane_t1_ParamLimits

0xa15d,	// (0x000978f2) find_pinb_pane_t2_ParamLimits

0xf120,	// (0x0009c8b5) find_pinb_pane_t_ParamLimits

0x9ea8,	// (0x0009763d) main_call3_pane

0x25b3,	// (0x0008fd48) cale_month_day_heading_pane_t1_ParamLimits

0x2639,	// (0x0008fdce) cale_month_day_heading_pane_t2_ParamLimits

0x26b2,	// (0x0008fe47) cale_month_day_heading_pane_t3_ParamLimits

0x272b,	// (0x0008fec0) cale_month_day_heading_pane_t4_ParamLimits

0x27ac,	// (0x0008ff41) cale_month_day_heading_pane_t5_ParamLimits

0x2835,	// (0x0008ffca) cale_month_day_heading_pane_t6_ParamLimits

0x28c6,	// (0x0009005b) cale_month_day_heading_pane_t7_ParamLimits

0xf2a2,	// (0x0009ca37) cale_month_day_heading_pane_t_ParamLimits

0xaec2,	// (0x00098657) smil_status_volume_pane

0x363d,	// (0x00090dd2) postcard_address_pane_ParamLimits

0x363d,	// (0x00090dd2) postcard_address_pane

0x3653,	// (0x00090de8) postcard_message_pane_ParamLimits

0x3653,	// (0x00090de8) postcard_message_pane

0x3b61,	// (0x000912f6) call2_cli_visual_pane_t1_ParamLimits

0x3b61,	// (0x000912f6) call2_cli_visual_pane_t1

0x43bb,	// (0x00091b50) postcard_message_pane_t1_ParamLimits

0x43bb,	// (0x00091b50) postcard_message_pane_t1

0xca8d,	// (0x0009a222) postcard_address_pane_t1_ParamLimits

0xca8d,	// (0x0009a222) postcard_address_pane_t1

0x43a7,	// (0x00091b3c) popup_call3_audio_in_window_ParamLimits

0x43a7,	// (0x00091b3c) popup_call3_audio_in_window

0x422c,	// (0x000919c1) bg_popup_call3_in_pane_ParamLimits

0x422c,	// (0x000919c1) bg_popup_call3_in_pane

0x42a8,	// (0x00091a3d) popup_call3_audio_in_window_g1_ParamLimits

0x42a8,	// (0x00091a3d) popup_call3_audio_in_window_g1

0x42c8,	// (0x00091a5d) popup_call3_audio_in_window_g2_ParamLimits

0x42c8,	// (0x00091a5d) popup_call3_audio_in_window_g2

0x42e8,	// (0x00091a7d) popup_call3_audio_in_window_g3_ParamLimits

0x42e8,	// (0x00091a7d) popup_call3_audio_in_window_g3

0x0003,

0xf615,	// (0x0009cdaa) popup_call3_audio_in_window_g_ParamLimits

0xf615,	// (0x0009cdaa) popup_call3_audio_in_window_g

0x4319,	// (0x00091aae) popup_call3_audio_in_window_t1_ParamLimits

0x4319,	// (0x00091aae) popup_call3_audio_in_window_t1

0x4357,	// (0x00091aec) popup_call3_audio_in_window_t2_ParamLimits

0x4357,	// (0x00091aec) popup_call3_audio_in_window_t2

0x4395,	// (0x00091b2a) popup_call3_audio_in_window_t3_ParamLimits

0x4395,	// (0x00091b2a) popup_call3_audio_in_window_t3

0x0002,

0xf61e,	// (0x0009cdb3) popup_call3_audio_in_window_t_ParamLimits

0xf61e,	// (0x0009cdb3) popup_call3_audio_in_window_t

0xa3fe,	// (0x00097b93) bg_popup_call3_rect_pane

0xc7d1,	// (0x00099f66) bg_popup_call3_rect_pane_g1

0xa2ef,	// (0x00097a84) bg_popup_call3_rect_pane_g2

0xc7d9,	// (0x00099f6e) bg_popup_call3_rect_pane_g3

0xc7e1,	// (0x00099f76) bg_popup_call3_rect_pane_g4

0xc7e9,	// (0x00099f7e) bg_popup_call3_rect_pane_g5

0xc7f1,	// (0x00099f86) bg_popup_call3_rect_pane_g6

0xc7f9,	// (0x00099f8e) bg_popup_call3_rect_pane_g7

0x31fe,	// (0x00090993) mup_visualizer_osc_pane

0xb668,	// (0x00098dfd) mup_visualizer_spec_pane

0x425c,	// (0x000919f1) call3_video_qcif_pane_ParamLimits

0x425c,	// (0x000919f1) call3_video_qcif_pane

0x426f,	// (0x00091a04) call3_video_qcif_uncrop_pane_ParamLimits

0x426f,	// (0x00091a04) call3_video_qcif_uncrop_pane

0x427f,	// (0x00091a14) call3_video_subqcif_pane_ParamLimits

0x427f,	// (0x00091a14) call3_video_subqcif_pane

0x4295,	// (0x00091a2a) call3_video_subqcif_uncrop_pane_ParamLimits

0x4295,	// (0x00091a2a) call3_video_subqcif_uncrop_pane

0x4308,	// (0x00091a9d) popup_call3_audio_in_window_g4_ParamLimits

0x4308,	// (0x00091a9d) popup_call3_audio_in_window_g4

0x421b,	// (0x000919b0) mup_spec_half_pane

0x4224,	// (0x000919b9) mup_spec_half_pane_cp

0xca4d,	// (0x0009a1e2) mup_osc_middle_pane

0xca56,	// (0x0009a1eb) mup_visualizer_osc_pane_g1

0x41fb,	// (0x00091990) mup_spec_bar_pane_ParamLimits

0x41fb,	// (0x00091990) mup_spec_bar_pane

0xca3a,	// (0x0009a1cf) mup_spec_bar_pane_g1

0xca44,	// (0x0009a1d9) mup_spec_bar_pane_g2

0x0001,

0xf609,	// (0x0009cd9e) mup_spec_bar_pane_g

0x1146,	// (0x0008e8db) aid_cale_week_size_cell_pane_ParamLimits

0x1160,	// (0x0008e8f5) bg_cale_heading_pane_ParamLimits

0x1184,	// (0x0008e919) bg_cale_pane_cp01_ParamLimits

0x11a1,	// (0x0008e936) cale_week_corner_pane_ParamLimits

0x11c0,	// (0x0008e955) cale_week_day_heading_pane_ParamLimits

0x11e9,	// (0x0008e97e) cale_week_scroll_pane_g1_ParamLimits

0x1208,	// (0x0008e99d) cale_week_scroll_pane_g2_ParamLimits

0x1220,	// (0x0008e9b5) cale_week_scroll_pane_g3_ParamLimits

0x1238,	// (0x0008e9cd) cale_week_scroll_pane_g4_ParamLimits

0x1250,	// (0x0008e9e5) cale_week_scroll_pane_g5_ParamLimits

0x1270,	// (0x0008ea05) cale_week_scroll_pane_g6_ParamLimits

0x1290,	// (0x0008ea25) cale_week_scroll_pane_g7_ParamLimits

0x12b4,	// (0x0008ea49) cale_week_scroll_pane_g8_ParamLimits

0x12d8,	// (0x0008ea6d) cale_week_scroll_pane_g9_ParamLimits

0x12f0,	// (0x0008ea85) cale_week_scroll_pane_g10_ParamLimits

0x1308,	// (0x0008ea9d) cale_week_scroll_pane_g11_ParamLimits

0x1320,	// (0x0008eab5) cale_week_scroll_pane_g12_ParamLimits

0x1344,	// (0x0008ead9) cale_week_scroll_pane_g13_ParamLimits

0x1344,	// (0x0008ead9) cale_week_scroll_pane_g14_ParamLimits

0x1344,	// (0x0008ead9) cale_week_scroll_pane_g15_ParamLimits

0xf1ac,	// (0x0009c941) cale_week_scroll_pane_g_ParamLimits

0x138c,	// (0x0008eb21) cale_week_time_pane_ParamLimits

0x13b0,	// (0x0008eb45) grid_cale_week_pane_ParamLimits

0xa374,	// (0x00097b09) listscroll_cale_week_pane_t1

0xa386,	// (0x00097b1b) scroll_pane_cp08_ParamLimits

0x2026,	// (0x0008f7bb) cale_month_corner_pane_ParamLimits

0xae98,	// (0x0009862d) cale_month_pane_t1

0x252e,	// (0x0008fcc3) cale_month_week_pane_ParamLimits

0x2ca9,	// (0x0009043e) popup_call_status_window_g1_ParamLimits

0x2cbd,	// (0x00090452) popup_call_status_window_g2_ParamLimits

0x2cd1,	// (0x00090466) popup_call_status_window_g3_ParamLimits

0xf359,	// (0x0009caee) popup_call_status_window_g_ParamLimits

0xb249,	// (0x000989de) aid_call2_pane

0xfde5,	// (0x0008d57a) msg_header_pane_g1

0x363d,	// (0x00090dd2) postcard_address2_pane_ParamLimits

0x363d,	// (0x00090dd2) postcard_address2_pane

0x3653,	// (0x00090de8) postcard_message2_pane_ParamLimits

0x3653,	// (0x00090de8) postcard_message2_pane

0x41b8,	// (0x0009194d) message2_row_pane_ParamLimits

0x41b8,	// (0x0009194d) message2_row_pane

0xc9f5,	// (0x0009a18a) address2_row_pane_ParamLimits

0xc9f5,	// (0x0009a18a) address2_row_pane

0xca08,	// (0x0009a19d) postcard_message2_row_pane_g1

0xca10,	// (0x0009a1a5) postcard_message2_row_pane_t1

0xca08,	// (0x0009a19d) address2_row_pane_g1

0xca10,	// (0x0009a1a5) address2_row_pane_t1

0x171d,	// (0x0008eeb2) aid_size_cell_vorec

0x9ea8,	// (0x0009763d) main_rss_pane

0x41db,	// (0x00091970) rss_list_single_pane_ParamLimits

0x41db,	// (0x00091970) rss_list_single_pane

0xca1e,	// (0x0009a1b3) rss_list_single_pane_t1

0xca2c,	// (0x0009a1c1) rss_list_single_pane_t2

0x0001,

0xf604,	// (0x0009cd99) rss_list_single_pane_t

0x9ea8,	// (0x0009763d) main_camera2_pane

0x9ea8,	// (0x0009763d) main_video2_pane

0x442a,	// (0x00091bbf) cams_zoom_pane_cp2_ParamLimits

0x442a,	// (0x00091bbf) cams_zoom_pane_cp2

0x4441,	// (0x00091bd6) image2_vga_pane_ParamLimits

0x4441,	// (0x00091bd6) image2_vga_pane

0x4489,	// (0x00091c1e) main_camera2_pane_g1_ParamLimits

0x4489,	// (0x00091c1e) main_camera2_pane_g1

0x44a9,	// (0x00091c3e) main_camera2_pane_g2_ParamLimits

0x44a9,	// (0x00091c3e) main_camera2_pane_g2

0x44c0,	// (0x00091c55) main_camera2_pane_g3_ParamLimits

0x44c0,	// (0x00091c55) main_camera2_pane_g3

0x44d7,	// (0x00091c6c) main_camera2_pane_g4_ParamLimits

0x44d7,	// (0x00091c6c) main_camera2_pane_g4

0x44ee,	// (0x00091c83) main_camera2_pane_g5_ParamLimits

0x44ee,	// (0x00091c83) main_camera2_pane_g5

0x4505,	// (0x00091c9a) main_camera2_pane_g6_ParamLimits

0x4505,	// (0x00091c9a) main_camera2_pane_g6

0x451c,	// (0x00091cb1) main_camera2_pane_g7_ParamLimits

0x451c,	// (0x00091cb1) main_camera2_pane_g7

0x4533,	// (0x00091cc8) main_camera2_pane_g8_ParamLimits

0x4533,	// (0x00091cc8) main_camera2_pane_g8

0x0008,

0xf625,	// (0x0009cdba) main_camera2_pane_g_ParamLimits

0xf625,	// (0x0009cdba) main_camera2_pane_g

0x4561,	// (0x00091cf6) main_camera2_pane_t1_ParamLimits

0x4561,	// (0x00091cf6) main_camera2_pane_t1

0x4596,	// (0x00091d2b) main_camera2_pane_t2_ParamLimits

0x4596,	// (0x00091d2b) main_camera2_pane_t2

0x45b3,	// (0x00091d48) main_camera2_pane_t3_ParamLimits

0x45b3,	// (0x00091d48) main_camera2_pane_t3

0x4611,	// (0x00091da6) main_camera2_pane_t4_ParamLimits

0x4611,	// (0x00091da6) main_camera2_pane_t4

0x0006,

0xf638,	// (0x0009cdcd) main_camera2_pane_t_ParamLimits

0xf638,	// (0x0009cdcd) main_camera2_pane_t

0x469a,	// (0x00091e2f) cams_zoom_pane_cp4_ParamLimits

0x469a,	// (0x00091e2f) cams_zoom_pane_cp4

0x46b0,	// (0x00091e45) image2_cif_pane_ParamLimits

0x46b0,	// (0x00091e45) image2_cif_pane

0x46db,	// (0x00091e70) image2_subqcif_pane_ParamLimits

0x46db,	// (0x00091e70) image2_subqcif_pane

0x46f6,	// (0x00091e8b) main_video2_pane_g1_ParamLimits

0x46f6,	// (0x00091e8b) main_video2_pane_g1

0x4710,	// (0x00091ea5) main_video2_pane_g2_ParamLimits

0x4710,	// (0x00091ea5) main_video2_pane_g2

0x4726,	// (0x00091ebb) main_video2_pane_g3_ParamLimits

0x4726,	// (0x00091ebb) main_video2_pane_g3

0x473c,	// (0x00091ed1) main_video2_pane_g4_ParamLimits

0x473c,	// (0x00091ed1) main_video2_pane_g4

0x4752,	// (0x00091ee7) main_video2_pane_g5_ParamLimits

0x4752,	// (0x00091ee7) main_video2_pane_g5

0x4768,	// (0x00091efd) main_video2_pane_g6_ParamLimits

0x4768,	// (0x00091efd) main_video2_pane_g6

0x0005,

0xf647,	// (0x0009cddc) main_video2_pane_g_ParamLimits

0xf647,	// (0x0009cddc) main_video2_pane_g

0x4782,	// (0x00091f17) main_video2_pane_t1_ParamLimits

0x4782,	// (0x00091f17) main_video2_pane_t1

0x47a6,	// (0x00091f3b) main_video2_pane_t2_ParamLimits

0x47a6,	// (0x00091f3b) main_video2_pane_t2

0x47f6,	// (0x00091f8b) main_video2_pane_t3_ParamLimits

0x47f6,	// (0x00091f8b) main_video2_pane_t3

0x0002,

0xf654,	// (0x0009cde9) main_video2_pane_t_ParamLimits

0xf654,	// (0x0009cde9) main_video2_pane_t

0x3cbc,	// (0x00091451) call_muted_g2

0x0001,

0xf5f6,	// (0x0009cd8b) call_muted_g

0x9ea8,	// (0x0009763d) main_mup2_pane

0x483e,	// (0x00091fd3) main_mup2_pane_g1_ParamLimits

0x483e,	// (0x00091fd3) main_mup2_pane_g1

0x484a,	// (0x00091fdf) main_mup2_pane_g2_ParamLimits

0x484a,	// (0x00091fdf) main_mup2_pane_g2

0xa713,	// (0x00097ea8) main_mup_pane_g13_cp1

0xa71b,	// (0x00097eb0) mup_volume_pane_cp1

0x4868,	// (0x00091ffd) main_mup2_pane_g4_ParamLimits

0x4868,	// (0x00091ffd) main_mup2_pane_g4

0x487a,	// (0x0009200f) main_mup2_pane_g5_ParamLimits

0x487a,	// (0x0009200f) main_mup2_pane_g5

0x488c,	// (0x00092021) main_mup2_pane_g6_ParamLimits

0x488c,	// (0x00092021) main_mup2_pane_g6

0x489e,	// (0x00092033) main_mup2_pane_g7_ParamLimits

0x489e,	// (0x00092033) main_mup2_pane_g7

0x0006,

0xf65b,	// (0x0009cdf0) main_mup2_pane_g_ParamLimits

0xf65b,	// (0x0009cdf0) main_mup2_pane_g

0x48b6,	// (0x0009204b) main_mup2_pane_t1_ParamLimits

0x48b6,	// (0x0009204b) main_mup2_pane_t1

0x48cc,	// (0x00092061) main_mup2_pane_t2_ParamLimits

0x48cc,	// (0x00092061) main_mup2_pane_t2

0x48e2,	// (0x00092077) main_mup2_pane_t3_ParamLimits

0x48e2,	// (0x00092077) main_mup2_pane_t3

0x48f8,	// (0x0009208d) main_mup2_pane_t4_ParamLimits

0x48f8,	// (0x0009208d) main_mup2_pane_t4

0x4910,	// (0x000920a5) main_mup2_pane_t5_ParamLimits

0x4910,	// (0x000920a5) main_mup2_pane_t5

0x4928,	// (0x000920bd) main_mup2_pane_t6_ParamLimits

0x4928,	// (0x000920bd) main_mup2_pane_t6

0x0005,

0xf66a,	// (0x0009cdff) main_mup2_pane_t_ParamLimits

0xf66a,	// (0x0009cdff) main_mup2_pane_t

0x4958,	// (0x000920ed) mup2_visualizer_pane_ParamLimits

0x4958,	// (0x000920ed) mup2_visualizer_pane

0x4986,	// (0x0009211b) mup_progress_pane_cp_ParamLimits

0x4986,	// (0x0009211b) mup_progress_pane_cp

0xa6fe,	// (0x00097e93) mup_volume_pane_cp_ParamLimits

0xa6fe,	// (0x00097e93) mup_volume_pane_cp

0x499c,	// (0x00092131) mup2_visualizer_pane_g1_ParamLimits

0x499c,	// (0x00092131) mup2_visualizer_pane_g1

0xcaa4,	// (0x0009a239) mup2_visualizer_pane_g2_ParamLimits

0xcaa4,	// (0x0009a239) mup2_visualizer_pane_g2

0x49b1,	// (0x00092146) mup2_visualizer_pane_g3_ParamLimits

0x49b1,	// (0x00092146) mup2_visualizer_pane_g3

0x0002,

0xf677,	// (0x0009ce0c) mup2_visualizer_pane_g_ParamLimits

0xf677,	// (0x0009ce0c) mup2_visualizer_pane_g

0xb891,	// (0x00099026) aid_size_cell_fmradio

0x3e6c,	// (0x00091601) aid_height_parent_landcape

0xacf6,	// (0x0009848b) wml_content_pane_cp

0xacfe,	// (0x00098493) wml_tabs_pane

0xad07,	// (0x0009849c) popup_wml_miniature_window

0xad0f,	// (0x000984a4) scroll_pane_cp021

0xad23,	// (0x000984b8) wml_content_pane_comp8

0x9ea8,	// (0x0009763d) bg_popup_sub_pane_cp05

0xcac2,	// (0x0009a257) popup_wml_miniature_window_g1

0xcaca,	// (0x0009a25f) wml_miniature_view_pane

0x49bd,	// (0x00092152) aid_size_wml_view

0x49c5,	// (0x0009215a) wml_miniature_view_pane_g1

0x49ce,	// (0x00092163) wml_miniature_view_pane_g2

0x49d7,	// (0x0009216c) wml_miniature_view_pane_g3

0x49df,	// (0x00092174) wml_miniature_view_pane_g4

0x49e7,	// (0x0009217c) wml_miniature_view_pane_g5

0x49ef,	// (0x00092184) wml_miniature_view_pane_g6

0x49f7,	// (0x0009218c) wml_miniature_view_pane_g7

0x49ff,	// (0x00092194) wml_miniature_view_pane_g8

0x0007,

0xf67e,	// (0x0009ce13) wml_miniature_view_pane_g

0xcad2,	// (0x0009a267) background_graphic_ParamLimits

0xcad2,	// (0x0009a267) background_graphic

0xcade,	// (0x0009a273) wml_tabs_2_pane

0xcae7,	// (0x0009a27c) wml_tabs_3_pane_ParamLimits

0xcae7,	// (0x0009a27c) wml_tabs_3_pane

0xcaf9,	// (0x0009a28e) wml_tabs_4_pane_ParamLimits

0xcaf9,	// (0x0009a28e) wml_tabs_4_pane

0xcb0f,	// (0x0009a2a4) wml_tabs_5_pane_ParamLimits

0xcb0f,	// (0x0009a2a4) wml_tabs_5_pane

0xcb29,	// (0x0009a2be) wml_tabs_pane_g2_ParamLimits

0xcb29,	// (0x0009a2be) wml_tabs_pane_g2

0xcb3d,	// (0x0009a2d2) wml_tabs_pane_g3_ParamLimits

0xcb3d,	// (0x0009a2d2) wml_tabs_pane_g3

0x4a07,	// (0x0009219c) wml_tabs_2_active_pane_ParamLimits

0x4a07,	// (0x0009219c) wml_tabs_2_active_pane

0x4a1b,	// (0x000921b0) wml_tabs_2_passive_pane_ParamLimits

0x4a1b,	// (0x000921b0) wml_tabs_2_passive_pane

0x4a2f,	// (0x000921c4) wml_tabs_3_active_pane_cp_ParamLimits

0x4a2f,	// (0x000921c4) wml_tabs_3_active_pane_cp

0x4a44,	// (0x000921d9) wml_tabs_3_passive_pane_ParamLimits

0x4a44,	// (0x000921d9) wml_tabs_3_passive_pane

0x4a57,	// (0x000921ec) wml_tabs_3_passive_pane_cp_ParamLimits

0x4a57,	// (0x000921ec) wml_tabs_3_passive_pane_cp

0x4a6e,	// (0x00092203) tabs_4_active_pane

0x4a76,	// (0x0009220b) tabs_4_passive_pane

0x4a80,	// (0x00092215) tabs_4_passive_pane_cp

0x4a88,	// (0x0009221d) tabs_4_passive_pane_cp2

0x3b80,	// (0x00091315) aid_height_text

0x31d0,	// (0x00090965) mup_volume_cont_pane_ParamLimits

0x31d0,	// (0x00090965) mup_volume_cont_pane

0x0d2a,	// (0x0008e4bf) aid_size_cell_pinb

0x0d34,	// (0x0008e4c9) aid_size_list_pinb

0x4972,	// (0x00092107) mup2_volume_cont_pane_ParamLimits

0x4972,	// (0x00092107) mup2_volume_cont_pane

0xa6ea,	// (0x00097e7f) mup2_volume_cont_pane_g1_ParamLimits

0xa6ea,	// (0x00097e7f) mup2_volume_cont_pane_g1

0x0a08,	// (0x0008e19d) aid_size_cell_touch_ParamLimits

0x0a08,	// (0x0008e19d) aid_size_cell_touch

0x0c4e,	// (0x0008e3e3) touch_pane_ParamLimits

0x0c4e,	// (0x0008e3e3) touch_pane

0x99fb,	// (0x00097190) main_rss2_pane

0xcb5a,	// (0x0009a2ef) listscroll_rss2_pane

0xcb63,	// (0x0009a2f8) rss2_navigation_pane

0xcb6b,	// (0x0009a300) list_rss2_pane

0xb36d,	// (0x00098b02) scroll_pane_cp22

0xcb73,	// (0x0009a308) rss2_navigation_pane_g1

0xcb7c,	// (0x0009a311) rss2_navigation_pane_g2

0xcb84,	// (0x0009a319) rss2_navigation_pane_g3

0x0002,

0xf68f,	// (0x0009ce24) rss2_navigation_pane_g

0xcb8c,	// (0x0009a321) rss2_navigation_pane_t1

0x4a92,	// (0x00092227) rss2_list_single_pane_ParamLimits

0x4a92,	// (0x00092227) rss2_list_single_pane

0xcb9a,	// (0x0009a32f) rss2_list_single_pane_t2

0xcba8,	// (0x0009a33d) rss2_list_single_pane_t3_ParamLimits

0xcba8,	// (0x0009a33d) rss2_list_single_pane_t3

0xcbc5,	// (0x0009a35a) rss2_list_single_pane_t4

0x2b7a,	// (0x0009030f) smil_status_pane_g1

0xac82,	// (0x00098417) main_image2_pane_ParamLimits

0xac82,	// (0x00098417) main_image2_pane

0x454a,	// (0x00091cdf) main_camera2_pane_g9_ParamLimits

0x454a,	// (0x00091cdf) main_camera2_pane_g9

0x4666,	// (0x00091dfb) main_camera2_pane_t5_ParamLimits

0x4666,	// (0x00091dfb) main_camera2_pane_t5

0xa6bf,	// (0x00097e54) main_camera2_pane_t6_ParamLimits

0xa6bf,	// (0x00097e54) main_camera2_pane_t6

0x4aac,	// (0x00092241) main_image2_pane_g1_ParamLimits

0x4aac,	// (0x00092241) main_image2_pane_g1

0x3897,	// (0x0009102c) smil2_video_pane_ParamLimits

0x3897,	// (0x0009102c) smil2_video_pane

0x0a48,	// (0x0008e1dd) aid_zoom_text_primary_cp

0x9a56,	// (0x000971eb) popup_preview_fixed_window

0xa505,	// (0x00097c9a) im_reading_pane_g1

0x441c,	// (0x00091bb1) cams2_bc_adjust_pane_cp_ParamLimits

0x441c,	// (0x00091bb1) cams2_bc_adjust_pane_cp

0x468c,	// (0x00091e21) cams2_bc_adjust_pane_ParamLimits

0x468c,	// (0x00091e21) cams2_bc_adjust_pane

0xa723,	// (0x00097eb8) cams2_bc_adjust_pane_g1

0xa72b,	// (0x00097ec0) cams2_slider_pane

0xa734,	// (0x00097ec9) cams2_slider_pane_g1

0xa73d,	// (0x00097ed2) cams2_slider_pane_g2

0x0006,

0xf696,	// (0x0009ce2b) cams2_slider_pane_g

0x0e26,	// (0x0008e5bb) calc_display_pane_ParamLimits

0x0e4b,	// (0x0008e5e0) calc_paper_pane_ParamLimits

0x0e6e,	// (0x0008e603) grid_calc_pane_ParamLimits

0xa5d4,	// (0x00097d69) popup_clock_digital_window_t1_ParamLimits

0xb82e,	// (0x00098fc3) main_image_pane_t1

0x0e06,	// (0x0008e59b) aid_size_cell_calc_ParamLimits

0x0e06,	// (0x0008e59b) aid_size_cell_calc

0x3eb2,	// (0x00091647) popup_blid_sat_info2_window_ParamLimits

0x3eb2,	// (0x00091647) popup_blid_sat_info2_window

0xcbdb,	// (0x0009a370) aid_size_cell_blid

0xcbe3,	// (0x0009a378) bg_popup_window_pane_cp07

0xcc06,	// (0x0009a39b) grid_popup_blid_pane

0xcc10,	// (0x0009a3a5) heading_pane_cp05_ParamLimits

0xcc10,	// (0x0009a3a5) heading_pane_cp05

0xccda,	// (0x0009a46f) cell_popup_blid_pane_ParamLimits

0xccda,	// (0x0009a46f) cell_popup_blid_pane

0xcd04,	// (0x0009a499) cell_popup_blid_pane_g1

0xcd0c,	// (0x0009a4a1) cell_popup_blid_pane_t1

0x4942,	// (0x000920d7) mup2_indicator_pane_ParamLimits

0x4942,	// (0x000920d7) mup2_indicator_pane

0xa3fe,	// (0x00097b93) mup2_visualizer_osc_pane

0xcab0,	// (0x0009a245) mup2_visualizer_spec_pane_ParamLimits

0xcab0,	// (0x0009a245) mup2_visualizer_spec_pane

0x4ac2,	// (0x00092257) mup2_spec_half_pane

0x4acb,	// (0x00092260) mup2_spec_half_pane_cp

0x4ad3,	// (0x00092268) mup2_spec_bar_pane_ParamLimits

0x4ad3,	// (0x00092268) mup2_spec_bar_pane

0xca3a,	// (0x0009a1cf) mup2_spec_bar_pane_g1

0xca44,	// (0x0009a1d9) mup2_spec_bar_pane_g2

0x0001,

0xf609,	// (0x0009cd9e) mup2_spec_bar_pane_g

0x4af3,	// (0x00092288) mup2_osc_middle_pane

0xca56,	// (0x0009a1eb) mup2_visualizer_osc_pane_g1

0x9a80,	// (0x00097215) popup_number_entry_window_t1_ParamLimits

0x9a93,	// (0x00097228) popup_number_entry_window_t2_ParamLimits

0x9aa5,	// (0x0009723a) popup_number_entry_window_t3_ParamLimits

0x9ab7,	// (0x0009724c) popup_number_entry_window_t5_ParamLimits

0x9ab7,	// (0x0009724c) popup_number_entry_window_t5

0xf0c6,	// (0x0009c85b) popup_number_entry_window_t_ParamLimits

0x9aec,	// (0x00097281) text_title_cp2_ParamLimits

0xa613,	// (0x00097da8) aid_hotspot_pointer_text2_pane

0xa639,	// (0x00097dce) main_viewer_pane_g9_ParamLimits

0xa639,	// (0x00097dce) main_viewer_pane_g9

0xae98,	// (0x0009862d) cale_month_pane_t1_ParamLimits

0xaed5,	// (0x0009866a) bg_cale_pane_ParamLimits

0xaeed,	// (0x00098682) list_cale_pane_ParamLimits

0xaefe,	// (0x00098693) listscroll_cale_day_pane_t1

0xaf10,	// (0x000986a5) scroll_pane_cp09_ParamLimits

0x3206,	// (0x0009099b) main_mup_eq_pane_t1_ParamLimits

0x3206,	// (0x0009099b) main_mup_eq_pane_t1

0x3222,	// (0x000909b7) main_mup_eq_pane_t2_ParamLimits

0x3222,	// (0x000909b7) main_mup_eq_pane_t2

0x323e,	// (0x000909d3) main_mup_eq_pane_t3_ParamLimits

0x323e,	// (0x000909d3) main_mup_eq_pane_t3

0x325c,	// (0x000909f1) main_mup_eq_pane_t4_ParamLimits

0x325c,	// (0x000909f1) main_mup_eq_pane_t4

0x327a,	// (0x00090a0f) main_mup_eq_pane_t5_ParamLimits

0x327a,	// (0x00090a0f) main_mup_eq_pane_t5

0x3298,	// (0x00090a2d) main_mup_eq_pane_t6_ParamLimits

0x3298,	// (0x00090a2d) main_mup_eq_pane_t6

0x32ae,	// (0x00090a43) main_mup_eq_pane_t7_ParamLimits

0x32ae,	// (0x00090a43) main_mup_eq_pane_t7

0x32c4,	// (0x00090a59) main_mup_eq_pane_t8_ParamLimits

0x32c4,	// (0x00090a59) main_mup_eq_pane_t8

0x32da,	// (0x00090a6f) main_mup_eq_pane_t9_ParamLimits

0x32da,	// (0x00090a6f) main_mup_eq_pane_t9

0x32f6,	// (0x00090a8b) main_mup_eq_pane_t10_ParamLimits

0x32f6,	// (0x00090a8b) main_mup_eq_pane_t10

0x0009,

0xf458,	// (0x0009cbed) main_mup_eq_pane_t_ParamLimits

0xf458,	// (0x0009cbed) main_mup_eq_pane_t

0x33cb,	// (0x00090b60) mup_equalizer_pane_cp5_ParamLimits

0x33e3,	// (0x00090b78) mup_equalizer_pane_cp6_ParamLimits

0x33fb,	// (0x00090b90) mup_equalizer_pane_cp7_ParamLimits

0x99fb,	// (0x00097190) main_gallery_pane

0xca5f,	// (0x0009a1f4) smil2_volume_pane

0xca67,	// (0x0009a1fc) smil_status_volume_pane_g1_ParamLimits

0xca7a,	// (0x0009a20f) smil_status_volume_pane_g2_ParamLimits

0xa69d,	// (0x00097e32) smil_status_volume_pane_g3_ParamLimits

0xf60e,	// (0x0009cda3) smil_status_volume_pane_g_ParamLimits

0xcbe3,	// (0x0009a378) bg_popup_window_pane_cp07_ParamLimits

0xcbf1,	// (0x0009a386) blid_firmament_pane

0x4afc,	// (0x00092291) aid_size_cell_gallery_ParamLimits

0x4afc,	// (0x00092291) aid_size_cell_gallery

0x4b12,	// (0x000922a7) grid_gallery_pane_ParamLimits

0x4b12,	// (0x000922a7) grid_gallery_pane

0x4b2d,	// (0x000922c2) cell_gallery_pane_ParamLimits

0x4b2d,	// (0x000922c2) cell_gallery_pane

0xcd1a,	// (0x0009a4af) bg_cell_gallery_focus_pane_ParamLimits

0xcd1a,	// (0x0009a4af) bg_cell_gallery_focus_pane

0xcd2c,	// (0x0009a4c1) cell_gallery_pane_g1_ParamLimits

0xcd2c,	// (0x0009a4c1) cell_gallery_pane_g1

0x4b7e,	// (0x00092313) cell_gallery_pane_g2_ParamLimits

0x4b7e,	// (0x00092313) cell_gallery_pane_g2

0x4b8b,	// (0x00092320) cell_gallery_pane_g3_ParamLimits

0x4b8b,	// (0x00092320) cell_gallery_pane_g3

0xcd38,	// (0x0009a4cd) cell_gallery_pane_g4_ParamLimits

0xcd38,	// (0x0009a4cd) cell_gallery_pane_g4

0x0003,

0xf6bc,	// (0x0009ce51) cell_gallery_pane_g_ParamLimits

0xf6bc,	// (0x0009ce51) cell_gallery_pane_g

0xcd44,	// (0x0009a4d9) bg_cell_gallery_focus_pane_g1

0xcd4c,	// (0x0009a4e1) bg_cell_gallery_focus_pane_g2

0xcd54,	// (0x0009a4e9) bg_cell_gallery_focus_pane_g3

0xcd5c,	// (0x0009a4f1) bg_cell_gallery_focus_pane_g4

0xcd64,	// (0x0009a4f9) bg_cell_gallery_focus_pane_g5

0xcd6c,	// (0x0009a501) bg_cell_gallery_focus_pane_g6

0xcd74,	// (0x0009a509) bg_cell_gallery_focus_pane_g7

0xcd7c,	// (0x0009a511) bg_cell_gallery_focus_pane_g8

0x0007,

0xf6c5,	// (0x0009ce5a) bg_cell_gallery_focus_pane_g

0xcd84,	// (0x0009a519) aid_firma_cardinal

0xcd98,	// (0x0009a52d) blid_firmament_pane_t1

0xcdaf,	// (0x0009a544) blid_firmament_pane_t2

0xcdc6,	// (0x0009a55b) blid_firmament_pane_t3

0xcddd,	// (0x0009a572) blid_firmament_pane_t4

0x0003,

0xf6d6,	// (0x0009ce6b) blid_firmament_pane_t

0xcdf4,	// (0x0009a589) blid_sat_info_pane

0xce04,	// (0x0009a599) blid_sat_info_pane_g1

0xce04,	// (0x0009a599) blid_sat_info_pane_g2

0x0001,

0xf6df,	// (0x0009ce74) blid_sat_info_pane_g

0xce0e,	// (0x0009a5a3) blid_sat_info_pane_t1

0xce1c,	// (0x0009a5b1) smil2_volume_content_pane

0xce25,	// (0x0009a5ba) smil2_volume_pane_g1

0xac90,	// (0x00098425) smil2_volume_content_pane_g1

0xce2d,	// (0x0009a5c2) smil2_volume_content_pane_g2

0xce36,	// (0x0009a5cb) smil2_volume_content_pane_g3

0xce3f,	// (0x0009a5d4) smil2_volume_content_pane_g4

0xce48,	// (0x0009a5dd) smil2_volume_content_pane_g5

0xce51,	// (0x0009a5e6) smil2_volume_content_pane_g6

0xce5a,	// (0x0009a5ef) smil2_volume_content_pane_g7

0xce63,	// (0x0009a5f8) smil2_volume_content_pane_g8

0xce6c,	// (0x0009a601) smil2_volume_content_pane_g9

0xce75,	// (0x0009a60a) smil2_volume_content_pane_g10

0x0009,

0xf6e4,	// (0x0009ce79) smil2_volume_content_pane_g

0x147e,	// (0x0008ec13) cale_week_day_heading_pane_t1_ParamLimits

0x14a8,	// (0x0008ec3d) cale_week_day_heading_pane_t2_ParamLimits

0x14d7,	// (0x0008ec6c) cale_week_day_heading_pane_t3_ParamLimits

0x1506,	// (0x0008ec9b) cale_week_day_heading_pane_t4_ParamLimits

0x1535,	// (0x0008ecca) cale_week_day_heading_pane_t5_ParamLimits

0x1568,	// (0x0008ecfd) cale_week_day_heading_pane_t6_ParamLimits

0x159f,	// (0x0008ed34) cale_week_day_heading_pane_t7_ParamLimits

0xf1cd,	// (0x0009c962) cale_week_day_heading_pane_t_ParamLimits

0xa3a3,	// (0x00097b38) bg_cale_side_pane_ParamLimits

0x15c9,	// (0x0008ed5e) cale_week_time_pane_t1_ParamLimits

0x15e3,	// (0x0008ed78) cale_week_time_pane_t2_ParamLimits

0x15fd,	// (0x0008ed92) cale_week_time_pane_t3_ParamLimits

0x1617,	// (0x0008edac) cale_week_time_pane_t4_ParamLimits

0x1631,	// (0x0008edc6) cale_week_time_pane_t5_ParamLimits

0x164b,	// (0x0008ede0) cale_week_time_pane_t6_ParamLimits

0x166b,	// (0x0008ee00) cale_week_time_pane_t7_ParamLimits

0x1691,	// (0x0008ee26) cale_week_time_pane_t8_ParamLimits

0xf1dc,	// (0x0009c971) cale_week_time_pane_t_ParamLimits

0x16b7,	// (0x0008ee4c) cell_cale_week_pane_g2_ParamLimits

0xa3a3,	// (0x00097b38) bg_cale_side_pane_cp01_ParamLimits

0x2957,	// (0x000900ec) cale_month_week_pane_t1_ParamLimits

0x2970,	// (0x00090105) cale_month_week_pane_t2_ParamLimits

0x2989,	// (0x0009011e) cale_month_week_pane_t3_ParamLimits

0x29a2,	// (0x00090137) cale_month_week_pane_t4_ParamLimits

0x29bb,	// (0x00090150) cale_month_week_pane_t5_ParamLimits

0x29d4,	// (0x00090169) cale_month_week_pane_t6_ParamLimits

0xf2b1,	// (0x0009ca46) cale_month_week_pane_t_ParamLimits

0xa554,	// (0x00097ce9) cell_cale_month_pane_g1_ParamLimits

0x99fb,	// (0x00097190) main_cale_event_viewer_pane

0x99fb,	// (0x00097190) listscroll_cale_event_viewer_pane

0xce7e,	// (0x0009a613) list_cale_ev_pane

0xce86,	// (0x0009a61b) scroll_pane_cp023

0x4b98,	// (0x0009232d) field_cale_ev_pane_ParamLimits

0x4b98,	// (0x0009232d) field_cale_ev_pane

0xce92,	// (0x0009a627) field_cale_ev_content_pane_ParamLimits

0xce92,	// (0x0009a627) field_cale_ev_content_pane

0xce9e,	// (0x0009a633) field_cale_ev_pane_g1_ParamLimits

0xce9e,	// (0x0009a633) field_cale_ev_pane_g1

0xceaa,	// (0x0009a63f) field_cale_ev_pane_g2_ParamLimits

0xceaa,	// (0x0009a63f) field_cale_ev_pane_g2

0xcec2,	// (0x0009a657) field_cale_ev_pane_g3_ParamLimits

0xcec2,	// (0x0009a657) field_cale_ev_pane_g3

0x0002,

0xf6f9,	// (0x0009ce8e) field_cale_ev_pane_g_ParamLimits

0xf6f9,	// (0x0009ce8e) field_cale_ev_pane_g

0xceda,	// (0x0009a66f) field_cale_ev_pane_t1_ParamLimits

0xceda,	// (0x0009a66f) field_cale_ev_pane_t1

0x4bbc,	// (0x00092351) field_cale_ev_content_pane_t1_ParamLimits

0x4bbc,	// (0x00092351) field_cale_ev_content_pane_t1

0xb714,	// (0x00098ea9) bg_button_pane_cp01

0x1136,	// (0x0008e8cb) listscroll_cale_week_pane_ParamLimits

0xa36b,	// (0x00097b00) popup_toolbar_window_cp01

0xa374,	// (0x00097b09) listscroll_cale_week_pane_t1_ParamLimits

0x1136,	// (0x0008e8cb) listscroll_cale_day_pane_ParamLimits

0xa36b,	// (0x00097b00) popup_toolbar_window_cp02

0xaefe,	// (0x00098693) listscroll_cale_day_pane_t1_ParamLimits

0x1136,	// (0x0008e8cb) main_cale_month_pane_ParamLimits

0xa688,	// (0x00097e1d) popup_toolbar_window_cp03_ParamLimits

0xa688,	// (0x00097e1d) popup_toolbar_window_cp03

0x3755,	// (0x00090eea) main_image_pane_g2_ParamLimits

0x3755,	// (0x00090eea) main_image_pane_g2

0x3766,	// (0x00090efb) main_image_pane_g3_ParamLimits

0x3766,	// (0x00090efb) main_image_pane_g3

0x0002,

0xf4ea,	// (0x0009cc7f) main_image_pane_g_ParamLimits

0xf4ea,	// (0x0009cc7f) main_image_pane_g

0xb82e,	// (0x00098fc3) main_image_pane_t1_ParamLimits

0x3777,	// (0x00090f0c) main_image_pane_t2_ParamLimits

0x3777,	// (0x00090f0c) main_image_pane_t2

0x3789,	// (0x00090f1e) main_image_pane_t3_ParamLimits

0x3789,	// (0x00090f1e) main_image_pane_t3

0x37b1,	// (0x00090f46) main_image_pane_t4_ParamLimits

0x37b1,	// (0x00090f46) main_image_pane_t4

0x0003,

0xf4f1,	// (0x0009cc86) main_image_pane_t_ParamLimits

0xf4f1,	// (0x0009cc86) main_image_pane_t

0x37d1,	// (0x00090f66) popup_image_details_window_cp01

0x37db,	// (0x00090f70) popup_toobar_trans_pane_cp01_ParamLimits

0x37db,	// (0x00090f70) popup_toobar_trans_pane_cp01

0x3fa5,	// (0x0009173a) popup_image_details_window_ParamLimits

0x3fa5,	// (0x0009173a) popup_image_details_window

0xa659,	// (0x00097dee) popup_image_focus_window

0x43d6,	// (0x00091b6b) camera2_autofocus_pane_ParamLimits

0x43d6,	// (0x00091b6b) camera2_autofocus_pane

0x99fb,	// (0x00097190) bg_popup_sub_pane_cp06

0xcef1,	// (0x0009a686) popup_image_focus_window_g1

0xcef9,	// (0x0009a68e) popup_image_focus_window_g2

0xcf01,	// (0x0009a696) popup_image_focus_window_g3

0xcf09,	// (0x0009a69e) popup_image_focus_window_g4

0x0003,

0xf700,	// (0x0009ce95) popup_image_focus_window_g

0xcf11,	// (0x0009a6a6) popup_image_focus_window_t1

0xcf1f,	// (0x0009a6b4) popup_image_focus_window_t2

0xcf2f,	// (0x0009a6c4) popup_image_focus_window_t3

0x0002,

0xf709,	// (0x0009ce9e) popup_image_focus_window_t

0xcf3d,	// (0x0009a6d2) camera2_autofocus_pane_g1

0xac82,	// (0x00098417) bg_tb_trans_pane_cp01

0xcf4b,	// (0x0009a6e0) popup_image_details_window_g1

0xcf5e,	// (0x0009a6f3) popup_image_details_window_g2

0x0002,

0xf71b,	// (0x0009ceb0) popup_image_details_window_g

0xcf87,	// (0x0009a71c) popup_image_details_window_t1

0xcf99,	// (0x0009a72e) popup_image_details_window_t2

0xcfb2,	// (0x0009a747) popup_image_details_window_t3

0xcfc6,	// (0x0009a75b) popup_image_details_window_t4

0xcfe1,	// (0x0009a776) popup_image_details_window_t5

0x0004,

0xf722,	// (0x0009ceb7) popup_image_details_window_t

0xa1bc,	// (0x00097951) bg_calc_paper_pane_ParamLimits

0x99fb,	// (0x00097190) grid_highlight_pane_cp013

0xa1d0,	// (0x00097965) list_calc_pane_ParamLimits

0xa1e2,	// (0x00097977) scroll_pane_cp024

0xa1ea,	// (0x0009797f) bg_calc_display_pane_ParamLimits

0x0f6e,	// (0x0008e703) calc_display_pane_t1_ParamLimits

0x0f80,	// (0x0008e715) calc_display_pane_t2_ParamLimits

0xa1f6,	// (0x0009798b) calc_display_pane_t3_ParamLimits

0xf14d,	// (0x0009c8e2) calc_display_pane_t_ParamLimits

0x1041,	// (0x0008e7d6) cell_calc_pane_g2

0x0001,

0xf16a,	// (0x0009c8ff) cell_calc_pane_g

0x104a,	// (0x0008e7df) cell_calc_pane_t1

0xa26d,	// (0x00097a02) grid_highlight_pane_cp02_ParamLimits

0xa283,	// (0x00097a18) toolbar_button_pane_cp01_ParamLimits

0xa283,	// (0x00097a18) toolbar_button_pane_cp01

0xb873,	// (0x00099008) temp_image_control_pane_ParamLimits

0xb873,	// (0x00099008) temp_image_control_pane

0xac82,	// (0x00098417) main_mp3_pane

0xcffb,	// (0x0009a790) temp_image_control_pane_g1_ParamLimits

0xcffb,	// (0x0009a790) temp_image_control_pane_g1

0xd009,	// (0x0009a79e) temp_image_control_pane_g2_ParamLimits

0xd009,	// (0x0009a79e) temp_image_control_pane_g2

0xd01b,	// (0x0009a7b0) temp_image_control_pane_g3_ParamLimits

0xd01b,	// (0x0009a7b0) temp_image_control_pane_g3

0x4c0d,	// (0x000923a2) temp_image_control_pane_g4_ParamLimits

0x4c0d,	// (0x000923a2) temp_image_control_pane_g4

0x0003,

0xf72d,	// (0x0009cec2) temp_image_control_pane_g_ParamLimits

0xf72d,	// (0x0009cec2) temp_image_control_pane_g

0xcffb,	// (0x0009a790) main_mp3_pane_g1

0x4c20,	// (0x000923b5) main_mp3_pane_g2

0x0007,

0xf736,	// (0x0009cecb) main_mp3_pane_g

0xd05e,	// (0x0009a7f3) main_mp3_pane_t1

0xa410,	// (0x00097ba5) main_camera_pane_g8_ParamLimits

0xa410,	// (0x00097ba5) main_camera_pane_g8

0x19c9,	// (0x0008f15e) main_video_pane_g7_ParamLimits

0x19c9,	// (0x0008f15e) main_video_pane_g7

0xa6d8,	// (0x00097e6d) main_camera2_pane_t7_ParamLimits

0xa6d8,	// (0x00097e6d) main_camera2_pane_t7

0xacb6,	// (0x0009844b) scroll_pane_cp025_ParamLimits

0xacb6,	// (0x0009844b) scroll_pane_cp025

0xacca,	// (0x0009845f) scroll_pane_cp026_ParamLimits

0xacca,	// (0x0009845f) scroll_pane_cp026

0xacd9,	// (0x0009846e) wml_content_pane_ParamLimits

0x99fb,	// (0x00097190) main_touch_calib_pane

0x4cf2,	// (0x00092487) main_touch_calib_pane_g1

0x4d04,	// (0x00092499) main_touch_calib_pane_g2

0x4d16,	// (0x000924ab) main_touch_calib_pane_g3

0x4d28,	// (0x000924bd) main_touch_calib_pane_g4

0x0003,

0xf754,	// (0x0009cee9) main_touch_calib_pane_g

0x4d3a,	// (0x000924cf) main_touch_calib_pane_t1

0x4d54,	// (0x000924e9) main_touch_calib_pane_t2

0x0004,

0xf75d,	// (0x0009cef2) main_touch_calib_pane_t

0xb43c,	// (0x00098bd1) mup_progress_pane_cp02

0xb471,	// (0x00098c06) navi_pane_g1

0xb52c,	// (0x00098cc1) navi_pane_mp_t3

0xac82,	// (0x00098417) main_mp3_pane_ParamLimits

0x415e,	// (0x000918f3) navi_pane_ParamLimits

0xcffb,	// (0x0009a790) main_mp3_pane_g1_ParamLimits

0x4c20,	// (0x000923b5) main_mp3_pane_g2_ParamLimits

0x4c2c,	// (0x000923c1) main_mp3_pane_g3_ParamLimits

0x4c2c,	// (0x000923c1) main_mp3_pane_g3

0x4c3a,	// (0x000923cf) main_mp3_pane_g4_ParamLimits

0x4c3a,	// (0x000923cf) main_mp3_pane_g4

0xd02b,	// (0x0009a7c0) main_mp3_pane_g5_ParamLimits

0xd02b,	// (0x0009a7c0) main_mp3_pane_g5

0xd039,	// (0x0009a7ce) main_mp3_pane_g6_ParamLimits

0xd039,	// (0x0009a7ce) main_mp3_pane_g6

0xd046,	// (0x0009a7db) main_mp3_pane_g7_ParamLimits

0xd046,	// (0x0009a7db) main_mp3_pane_g7

0xd052,	// (0x0009a7e7) main_mp3_pane_g8_ParamLimits

0xd052,	// (0x0009a7e7) main_mp3_pane_g8

0xf736,	// (0x0009cecb) main_mp3_pane_g_ParamLimits

0x4c46,	// (0x000923db) main_mp3_pane_t2

0x4c54,	// (0x000923e9) main_mp3_pane_t3

0xd06c,	// (0x0009a801) main_mp3_pane_t4

0xd07a,	// (0x0009a80f) main_mp3_pane_t5

0x0005,

0xf747,	// (0x0009cedc) main_mp3_pane_t

0xd088,	// (0x0009a81d) mup_progress_pane_cp01

0x0a48,	// (0x0008e1dd) aid_zoom_text_secondary2

0xce7e,	// (0x0009a613) list_cale_ev2_pane

0xce86,	// (0x0009a61b) scroll_pane_cp023_ParamLimits

0x4dae,	// (0x00092543) field_cale_ev2_pane_ParamLimits

0x4dae,	// (0x00092543) field_cale_ev2_pane

0x4dd2,	// (0x00092567) field_cale_ev2_pane_g1_ParamLimits

0x4dd2,	// (0x00092567) field_cale_ev2_pane_g1

0x4dde,	// (0x00092573) field_cale_ev2_pane_g2_ParamLimits

0x4dde,	// (0x00092573) field_cale_ev2_pane_g2

0x4df6,	// (0x0009258b) field_cale_ev2_pane_g3_ParamLimits

0x4df6,	// (0x0009258b) field_cale_ev2_pane_g3

0x0003,

0xf768,	// (0x0009cefd) field_cale_ev2_pane_g_ParamLimits

0xf768,	// (0x0009cefd) field_cale_ev2_pane_g

0xfdf3,	// (0x0008d588) field_cale_ev2_pane_t1_ParamLimits

0xfdf3,	// (0x0008d588) field_cale_ev2_pane_t1

0xfe0a,	// (0x0008d59f) field_cale_ev2_pane_t2_ParamLimits

0xfe0a,	// (0x0008d59f) field_cale_ev2_pane_t2

0x0001,

0xf771,	// (0x0009cf06) field_cale_ev2_pane_t_ParamLimits

0xf771,	// (0x0009cf06) field_cale_ev2_pane_t

0x35ed,	// (0x00090d82) main_postcard_pane_g5_ParamLimits

0x35ed,	// (0x00090d82) main_postcard_pane_g5

0x3603,	// (0x00090d98) main_postcard_pane_g6_ParamLimits

0x3603,	// (0x00090d98) main_postcard_pane_g6

0x1775,	// (0x0008ef0a) camera2_autofocus_pane_cp_ParamLimits

0x1775,	// (0x0008ef0a) camera2_autofocus_pane_cp

0xac82,	// (0x00098417) main_mup3_pane

0x4e58,	// (0x000925ed) main_mup3_pane_g1_ParamLimits

0x4e58,	// (0x000925ed) main_mup3_pane_g1

0x4e7a,	// (0x0009260f) main_mup3_pane_g2_ParamLimits

0x4e7a,	// (0x0009260f) main_mup3_pane_g2

0x4ef5,	// (0x0009268a) main_mup3_pane_g3_ParamLimits

0x4ef5,	// (0x0009268a) main_mup3_pane_g3

0x4f5f,	// (0x000926f4) main_mup3_pane_g4_ParamLimits

0x4f5f,	// (0x000926f4) main_mup3_pane_g4

0x4fc9,	// (0x0009275e) main_mup3_pane_g5_ParamLimits

0x4fc9,	// (0x0009275e) main_mup3_pane_g5

0x5033,	// (0x000927c8) main_mup3_pane_g6_ParamLimits

0x5033,	// (0x000927c8) main_mup3_pane_g6

0xd090,	// (0x0009a825) main_mup3_pane_g7_ParamLimits

0xd090,	// (0x0009a825) main_mup3_pane_g7

0x0007,

0xf781,	// (0x0009cf16) main_mup3_pane_g_ParamLimits

0xf781,	// (0x0009cf16) main_mup3_pane_g

0x50b3,	// (0x00092848) main_mup3_pane_t1_ParamLimits

0x50b3,	// (0x00092848) main_mup3_pane_t1

0x5125,	// (0x000928ba) main_mup3_pane_t2_ParamLimits

0x5125,	// (0x000928ba) main_mup3_pane_t2

0x51f7,	// (0x0009298c) main_mup3_pane_t4_ParamLimits

0x51f7,	// (0x0009298c) main_mup3_pane_t4

0x5255,	// (0x000929ea) main_mup3_pane_t5_ParamLimits

0x5255,	// (0x000929ea) main_mup3_pane_t5

0x5311,	// (0x00092aa6) main_mup3_pane_t6_ParamLimits

0x5311,	// (0x00092aa6) main_mup3_pane_t6

0x0005,

0xf792,	// (0x0009cf27) main_mup3_pane_t_ParamLimits

0xf792,	// (0x0009cf27) main_mup3_pane_t

0x53c9,	// (0x00092b5e) mup3_progress_pane_ParamLimits

0x53c9,	// (0x00092b5e) mup3_progress_pane

0x5461,	// (0x00092bf6) popup_mup3_control_window_ParamLimits

0x5461,	// (0x00092bf6) popup_mup3_control_window

0xd09e,	// (0x0009a833) popup_mup3_text_window

0x5497,	// (0x00092c2c) mup3_progress_pane_t1

0x54b6,	// (0x00092c4b) mup3_progress_pane_t2

0xd0a6,	// (0x0009a83b) mup3_progress_pane_t3

0x0002,

0xf79f,	// (0x0009cf34) mup3_progress_pane_t

0xd0c3,	// (0x0009a858) mup_progress_pane_cp03

0x99fb,	// (0x00097190) bg_tb_trans_pane_cp04

0x54d5,	// (0x00092c6a) mup3_volume_pane

0x54dd,	// (0x00092c72) popup_mup3_control_window_g1

0x54e6,	// (0x00092c7b) mup3_volume_pane_g1

0x54ef,	// (0x00092c84) mup3_volume_pane_g2

0x54f8,	// (0x00092c8d) mup3_volume_pane_g3

0x0002,

0xf7a6,	// (0x0009cf3b) mup3_volume_pane_g

0x99fb,	// (0x00097190) bg_tb_trans_pane_cp03

0xd0d3,	// (0x0009a868) popup_mup3_text_window_g1

0xd0db,	// (0x0009a870) popup_mup3_text_window_t1

0xa244,	// (0x000979d9) list_calc_item_pane_g1_ParamLimits

0xcb51,	// (0x0009a2e6) mup_volume_pane_cp_g1

0x4d6e,	// (0x00092503) main_touch_calib_pane_t3

0x4d82,	// (0x00092517) main_touch_calib_pane_t4

0x4d98,	// (0x0009252d) main_touch_calib_pane_t5

0x9a05,	// (0x0009719a) aid_cell_size_toolbar2

0x9a0d,	// (0x000971a2) aid_popup3_width_pane

0x0a38,	// (0x0008e1cd) aid_zoom_text_msg_primary

0x1767,	// (0x0008eefc) vorec_t7

0xa208,	// (0x0009799d) bg_calc_paper_pane_g1_ParamLimits

0xa214,	// (0x000979a9) bg_calc_paper_pane_g2_ParamLimits

0xa220,	// (0x000979b5) bg_calc_paper_pane_g3_ParamLimits

0xa22c,	// (0x000979c1) bg_calc_paper_pane_g4_ParamLimits

0xa238,	// (0x000979cd) bg_calc_paper_pane_g5_ParamLimits

0x0fcd,	// (0x0008e762) bg_calc_paper_pane_g6_ParamLimits

0x0fdb,	// (0x0008e770) bg_calc_paper_pane_g7_ParamLimits

0x0fe9,	// (0x0008e77e) bg_calc_paper_pane_g8_ParamLimits

0xf154,	// (0x0009c8e9) bg_calc_paper_pane_g_ParamLimits

0x0ffc,	// (0x0008e791) calc_bg_paper_pane_g9_ParamLimits

0x18d7,	// (0x0008f06c) image_qvga_pane_ParamLimits

0x18d7,	// (0x0008f06c) image_qvga_pane

0xa103,	// (0x00097898) bg_popup_sub_pane_cp04_ParamLimits

0xb7aa,	// (0x00098f3f) popup_mup_playback_window_g1_ParamLimits

0xb7b6,	// (0x00098f4b) popup_mup_playback_window_t1_ParamLimits

0xb7cb,	// (0x00098f60) popup_mup_playback_window_t2_ParamLimits

0xf4e5,	// (0x0009cc7a) popup_mup_playback_window_t_ParamLimits

0x485a,	// (0x00091fef) main_mup2_pane_g3_ParamLimits

0x485a,	// (0x00091fef) main_mup2_pane_g3

0x1be0,	// (0x0008f375) popup_toolbar_window_cp04

0xbbc6,	// (0x0009935b) popup_call2_audio_second_window_g3_ParamLimits

0xbbc6,	// (0x0009935b) popup_call2_audio_second_window_g3

0xbfe2,	// (0x00099777) popup_call2_audio_first_window_g4_ParamLimits

0xbfe2,	// (0x00099777) popup_call2_audio_first_window_g4

0xc661,	// (0x00099df6) popup_call2_audio_in_window_g4_ParamLimits

0xc661,	// (0x00099df6) popup_call2_audio_in_window_g4

0x3737,	// (0x00090ecc) aid_area_sk_bg_cut_ParamLimits

0x3737,	// (0x00090ecc) aid_area_sk_bg_cut

0xb7e0,	// (0x00098f75) aid_area_sk_bg_cut_2_ParamLimits

0xb7e0,	// (0x00098f75) aid_area_sk_bg_cut_2

0x4b6e,	// (0x00092303) aid_placing_details_win

0x4b76,	// (0x0009230b) aid_placing_details_win_2

0xcf3d,	// (0x0009a6d2) camera2_autofocus_pane_g1_ParamLimits

0x0be9,	// (0x0008e37e) popup_fixed_preview_cale_window_ParamLimits

0x0be9,	// (0x0008e37e) popup_fixed_preview_cale_window

0xb5ac,	// (0x00098d41) navi_slider_pane_g3

0xb5b5,	// (0x00098d4a) navi_slider_pane_g4

0xb5be,	// (0x00098d53) navi_slider_pane_g5

0xb5ac,	// (0x00098d41) navi_slider_pane_g6

0xa5fa,	// (0x00097d8f) navi_slider_pane_g7

0xb6e1,	// (0x00098e76) mup_scale_pane_g3

0xb6ea,	// (0x00098e7f) mup_scale_pane_g4

0xb6f3,	// (0x00098e88) mup_scale_pane_g5

0x3413,	// (0x00090ba8) mup_scale_pane_g6

0x341c,	// (0x00090bb1) mup_scale_pane_g7

0xb5ac,	// (0x00098d41) cams2_slider_pane_g3

0xcbd3,	// (0x0009a368) cams2_slider_pane_g4

0xa746,	// (0x00097edb) cams2_slider_pane_g5

0xb5ac,	// (0x00098d41) cams2_slider_pane_g6

0xa74e,	// (0x00097ee3) cams2_slider_pane_g7

0xce04,	// (0x0009a599) camera2_autofocus_pane_cp_g1

0xc9c0,	// (0x0009a155) bg_popup_preview_window_pane_cp02_ParamLimits

0xc9c0,	// (0x0009a155) bg_popup_preview_window_pane_cp02

0xd0e9,	// (0x0009a87e) list_fp_cale_pane_ParamLimits

0xd0e9,	// (0x0009a87e) list_fp_cale_pane

0xd0f5,	// (0x0009a88a) popup_fixed_preview_cale_window_t1_ParamLimits

0xd0f5,	// (0x0009a88a) popup_fixed_preview_cale_window_t1

0x5501,	// (0x00092c96) popup_fixed_preview_cale_window_t2_ParamLimits

0x5501,	// (0x00092c96) popup_fixed_preview_cale_window_t2

0x5516,	// (0x00092cab) popup_fixed_preview_cale_window_t3_ParamLimits

0x5516,	// (0x00092cab) popup_fixed_preview_cale_window_t3

0x0002,

0xf7ad,	// (0x0009cf42) popup_fixed_preview_cale_window_t_ParamLimits

0xf7ad,	// (0x0009cf42) popup_fixed_preview_cale_window_t

0x552d,	// (0x00092cc2) list_single_fp_cale_pane_ParamLimits

0x552d,	// (0x00092cc2) list_single_fp_cale_pane

0xd113,	// (0x0009a8a8) list_single_fp_cale_pane_g1_ParamLimits

0xd113,	// (0x0009a8a8) list_single_fp_cale_pane_g1

0xd11f,	// (0x0009a8b4) list_single_fp_cale_pane_g2_ParamLimits

0xd11f,	// (0x0009a8b4) list_single_fp_cale_pane_g2

0x0002,

0xf7b4,	// (0x0009cf49) list_single_fp_cale_pane_g_ParamLimits

0xf7b4,	// (0x0009cf49) list_single_fp_cale_pane_g

0xd138,	// (0x0009a8cd) list_single_fp_cale_pane_t1_ParamLimits

0xd138,	// (0x0009a8cd) list_single_fp_cale_pane_t1

0xd14a,	// (0x0009a8df) list_single_fp_cale_pane_t2_ParamLimits

0xd14a,	// (0x0009a8df) list_single_fp_cale_pane_t2

0x0001,

0xf7bb,	// (0x0009cf50) list_single_fp_cale_pane_t_ParamLimits

0xf7bb,	// (0x0009cf50) list_single_fp_cale_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0x99fb,	// (0x00097190) main_dialer_pane

0x5545,	// (0x00092cda) aid_cell_size_keypad

0x554f,	// (0x00092ce4) dialer_ne_pane

0x5559,	// (0x00092cee) grid_dialer_command_1_pane

0x5561,	// (0x00092cf6) grid_dialer_command_2_pane

0x5569,	// (0x00092cfe) grid_dialer_keypad_pane

0x557d,	// (0x00092d12) bg_popup_call_pane_cp06_ParamLimits

0x557d,	// (0x00092d12) bg_popup_call_pane_cp06

0x5589,	// (0x00092d1e) dialer_ne_clear_pane_ParamLimits

0x5589,	// (0x00092d1e) dialer_ne_clear_pane

0xd191,	// (0x0009a926) dialer_ne_pane_g1

0xd199,	// (0x0009a92e) dialer_ne_pane_t1_ParamLimits

0xd199,	// (0x0009a92e) dialer_ne_pane_t1

0x5595,	// (0x00092d2a) dialer_ne_pane_t2_ParamLimits

0x5595,	// (0x00092d2a) dialer_ne_pane_t2

0x55bf,	// (0x00092d54) dialer_ne_pane_t3_ParamLimits

0x55bf,	// (0x00092d54) dialer_ne_pane_t3

0x0002,

0xf7c0,	// (0x0009cf55) dialer_ne_pane_t_ParamLimits

0xf7c0,	// (0x0009cf55) dialer_ne_pane_t

0x55ef,	// (0x00092d84) dialer_ne_pane_t3_copy1_ParamLimits

0x55ef,	// (0x00092d84) dialer_ne_pane_t3_copy1

0x561e,	// (0x00092db3) cell_dialer_keypad_pane_ParamLimits

0x561e,	// (0x00092db3) cell_dialer_keypad_pane

0x5635,	// (0x00092dca) cell_dialer_command_1_pane_ParamLimits

0x5635,	// (0x00092dca) cell_dialer_command_1_pane

0x564b,	// (0x00092de0) cell_dialer_command_2_pane_ParamLimits

0x564b,	// (0x00092de0) cell_dialer_command_2_pane

0xd1ab,	// (0x0009a940) bg_button_pane_cp02_ParamLimits

0xd1ab,	// (0x0009a940) bg_button_pane_cp02

0x565a,	// (0x00092def) cell_dialer_keypad_pane_g1_ParamLimits

0x565a,	// (0x00092def) cell_dialer_keypad_pane_g1

0xd1ab,	// (0x0009a940) bg_button_pane_cp03_ParamLimits

0xd1ab,	// (0x0009a940) bg_button_pane_cp03

0x566b,	// (0x00092e00) cell_dialer_command_1_pane_g1_ParamLimits

0x566b,	// (0x00092e00) cell_dialer_command_1_pane_g1

0xd1b7,	// (0x0009a94c) bg_button_pane_cp04

0x567f,	// (0x00092e14) cell_dialer_command_2_pane_g1

0xa3fe,	// (0x00097b93) bg_button_pane_cp06

0xd1bf,	// (0x0009a954) dialer_ne_clear_pane_g1

0xb47d,	// (0x00098c12) navi_pane_g2

0xb4ab,	// (0x00098c40) navi_pane_g3

0x0002,

0xf3e8,	// (0x0009cb7d) navi_pane_g

0xb53a,	// (0x00098ccf) navi_pane_mv_g2

0xb563,	// (0x00098cf8) navi_pane_mv_g5

0x2f7b,	// (0x00090710) navi_pane_mv_t1

0xa1ea,	// (0x0009797f) main_clock2_pane

0xac82,	// (0x00098417) main_clock2_list_pane_ParamLimits

0xac82,	// (0x00098417) main_clock2_list_pane

0x56eb,	// (0x00092e80) main_clock2_pane_t1_ParamLimits

0x56eb,	// (0x00092e80) main_clock2_pane_t1

0x5726,	// (0x00092ebb) main_clock2_pane_t2_ParamLimits

0x5726,	// (0x00092ebb) main_clock2_pane_t2

0x0004,

0xf7cc,	// (0x0009cf61) main_clock2_pane_t_ParamLimits

0xf7cc,	// (0x0009cf61) main_clock2_pane_t

0x57c5,	// (0x00092f5a) popup_clock_analogue_window_cp03_ParamLimits

0x57c5,	// (0x00092f5a) popup_clock_analogue_window_cp03

0x57ea,	// (0x00092f7f) popup_clock_digital_window_cp02_ParamLimits

0x57ea,	// (0x00092f7f) popup_clock_digital_window_cp02

0x5863,	// (0x00092ff8) main_clock2_list_single_pane_ParamLimits

0x5863,	// (0x00092ff8) main_clock2_list_single_pane

0xa3fe,	// (0x00097b93) list_highlight_pane_cp05

0xd1f7,	// (0x0009a98c) main_clock2_list_single_pane_t1

0x1be0,	// (0x0008f375) popup_toolbar_window_cp04_ParamLimits

0x4bdd,	// (0x00092372) camera2_autofocus_pane_g2_ParamLimits

0x4bdd,	// (0x00092372) camera2_autofocus_pane_g2

0x4be9,	// (0x0009237e) camera2_autofocus_pane_g3_ParamLimits

0x4be9,	// (0x0009237e) camera2_autofocus_pane_g3

0x4bf5,	// (0x0009238a) camera2_autofocus_pane_g4_ParamLimits

0x4bf5,	// (0x0009238a) camera2_autofocus_pane_g4

0x4c01,	// (0x00092396) camera2_autofocus_pane_g5_ParamLimits

0x4c01,	// (0x00092396) camera2_autofocus_pane_g5

0x0004,

0xf710,	// (0x0009cea5) camera2_autofocus_pane_g_ParamLimits

0xf710,	// (0x0009cea5) camera2_autofocus_pane_g

0x4e0e,	// (0x000925a3) camera2_autofocus_pane_cp_g2

0x4e16,	// (0x000925ab) camera2_autofocus_pane_cp_g3

0x4e1e,	// (0x000925b3) camera2_autofocus_pane_cp_g4

0x4e26,	// (0x000925bb) camera2_autofocus_pane_cp_g5

0x0004,

0xf776,	// (0x0009cf0b) camera2_autofocus_pane_cp_g

0x5575,	// (0x00092d0a) popup_dialer_spcha_window

0x99fb,	// (0x00097190) bg_popup_sub_pane_cp07

0xd205,	// (0x0009a99a) list_spcha_pane

0xd20d,	// (0x0009a9a2) list_single_spcha_pane_ParamLimits

0xd20d,	// (0x0009a9a2) list_single_spcha_pane

0x99fb,	// (0x00097190) list_highlight_pane_cp06

0xd21e,	// (0x0009a9b3) list_single_spcha_pane_t1

0xc40b,	// (0x00099ba0) popup_call2_audio_out_window_g4_ParamLimits

0xc40b,	// (0x00099ba0) popup_call2_audio_out_window_g4

0x99fb,	// (0x00097190) main_imed2_pane

0xa663,	// (0x00097df8) popup_imed_adjust2_window

0x3fbd,	// (0x00091752) popup_imed_trans_window_ParamLimits

0x3fbd,	// (0x00091752) popup_imed_trans_window

0xcc3c,	// (0x0009a3d1) popup_blid_sat_info2_window_t1

0xcc4a,	// (0x0009a3df) popup_blid_sat_info2_window_t2

0x000a,

0xf6a5,	// (0x0009ce3a) popup_blid_sat_info2_window_t

0x591e,	// (0x000930b3) aid_size_cell_colour_35

0x593e,	// (0x000930d3) aid_size_cell_colour_112

0x595e,	// (0x000930f3) aid_size_cell_effect

0xc9cc,	// (0x0009a161) bg_tb_trans_pane_cp02

0xb007,	// (0x0009879c) heading_imed_pane

0x597e,	// (0x00093113) listscroll_imed_pane

0xd22c,	// (0x0009a9c1) heading_imed_pane_g1

0xd234,	// (0x0009a9c9) heading_imed_pane_t1

0xd242,	// (0x0009a9d7) grid_imed_colour_35_pane_ParamLimits

0xd242,	// (0x0009a9d7) grid_imed_colour_35_pane

0x598a,	// (0x0009311f) grid_imed_effect_pane

0xd25e,	// (0x0009a9f3) list_imed_aspect_pane

0x59a1,	// (0x00093136) scroll_pane_cp027_ParamLimits

0x59a1,	// (0x00093136) scroll_pane_cp027

0x59b2,	// (0x00093147) cell_imed_effect_pane_ParamLimits

0x59b2,	// (0x00093147) cell_imed_effect_pane

0xd266,	// (0x0009a9fb) cell_imed_colour_pane_ParamLimits

0xd266,	// (0x0009a9fb) cell_imed_colour_pane

0xd2b0,	// (0x0009aa45) cell_imed_colour_pane_g1_ParamLimits

0xd2b0,	// (0x0009aa45) cell_imed_colour_pane_g1

0xd2c1,	// (0x0009aa56) hgihlgiht_grid_pane_cp016_ParamLimits

0xd2c1,	// (0x0009aa56) hgihlgiht_grid_pane_cp016

0x59dd,	// (0x00093172) cell_imed_effect_pane_g1

0x59e5,	// (0x0009317a) grid_highlight_pane_cp017

0xd2d2,	// (0x0009aa67) list_imed_single_pane_ParamLimits

0xd2d2,	// (0x0009aa67) list_imed_single_pane

0x99fb,	// (0x00097190) list_highlight_pane_cp07

0xd2e6,	// (0x0009aa7b) list_imed_aspect_pane_comp1_t1

0xc9cc,	// (0x0009a161) bg_tb_trans_pane_cp05

0xd308,	// (0x0009aa9d) popup_imed_adjust2_window_g1

0xd32f,	// (0x0009aac4) popup_imed_adjust2_window_t1

0xd347,	// (0x0009aadc) slider_imed_adjust_pane

0xd35b,	// (0x0009aaf0) slider_imed_adjust_pane_g1

0xd36b,	// (0x0009ab00) slider_imed_adjust_pane_g2

0xd37b,	// (0x0009ab10) slider_imed_adjust_pane_g3

0xd38c,	// (0x0009ab21) slider_imed_adjust_pane_g4

0x0003,

0xf7e9,	// (0x0009cf7e) slider_imed_adjust_pane_g

0x59ee,	// (0x00093183) aid_size_cell_clipart2

0xd39d,	// (0x0009ab32) grid_imed_clipart_pane

0xd3a7,	// (0x0009ab3c) scroll_pane_cp031

0x59fa,	// (0x0009318f) cell_imed_clipart_pane_ParamLimits

0x59fa,	// (0x0009318f) cell_imed_clipart_pane

0x5a17,	// (0x000931ac) cell_imed_clipart_pane_g1

0x99fb,	// (0x00097190) grid_highlight_pane_cp014

0x56c9,	// (0x00092e5e) main_clock2_pane_g1_ParamLimits

0x56c9,	// (0x00092e5e) main_clock2_pane_g1

0x580a,	// (0x00092f9f) aid_call2_pane_cp10

0x581c,	// (0x00092fb1) aid_call_pane_cp10

0xb3dc,	// (0x00098b71) popup_clock_analogue_window_cp10_g1

0xb3dc,	// (0x00098b71) popup_clock_analogue_window_cp10_g2

0x582e,	// (0x00092fc3) popup_clock_analogue_window_cp10_g3

0x582e,	// (0x00092fc3) popup_clock_analogue_window_cp10_g4

0xb3dc,	// (0x00098b71) popup_clock_analogue_window_cp10_g5

0x0004,

0xf7d7,	// (0x0009cf6c) popup_clock_analogue_window_cp10_g

0x5844,	// (0x00092fd9) popup_clock_analogue_window_cp10_t1

0x5875,	// (0x0009300a) clock_digital_number_pane_cp10_ParamLimits

0x5875,	// (0x0009300a) clock_digital_number_pane_cp10

0x588f,	// (0x00093024) clock_digital_number_pane_cp11_ParamLimits

0x588f,	// (0x00093024) clock_digital_number_pane_cp11

0x58a9,	// (0x0009303e) clock_digital_number_pane_cp12_ParamLimits

0x58a9,	// (0x0009303e) clock_digital_number_pane_cp12

0x58c5,	// (0x0009305a) clock_digital_number_pane_cp13_ParamLimits

0x58c5,	// (0x0009305a) clock_digital_number_pane_cp13

0x58e1,	// (0x00093076) clock_digital_separator_pane_cp10_ParamLimits

0x58e1,	// (0x00093076) clock_digital_separator_pane_cp10

0x58fd,	// (0x00093092) popup_clock_digital_window_cp02_t1_ParamLimits

0x58fd,	// (0x00093092) popup_clock_digital_window_cp02_t1

0xa0fb,	// (0x00097890) clock_digital_number_pane_cp10_g1

0xa0fb,	// (0x00097890) clock_digital_number_pane_cp10_g2

0x0001,

0xf7f2,	// (0x0009cf87) clock_digital_number_pane_cp10_g

0xa0fb,	// (0x00097890) clock_digital_separator_pane_cp10_g1

0xa0fb,	// (0x00097890) clock_digital_separator_pane_g2_cp10

0xb56b,	// (0x00098d00) navi_pane_vded_g4

0xb574,	// (0x00098d09) navi_pane_vded_g5

0xb57d,	// (0x00098d12) navi_pane_vded_t1

0x99fb,	// (0x00097190) main_vded_pane

0x5a20,	// (0x000931b5) main_vded_pane_g1

0x5a2c,	// (0x000931c1) main_vded_pane_g2

0x5a38,	// (0x000931cd) main_vded_pane_g3

0x0002,

0xf7f7,	// (0x0009cf8c) main_vded_pane_g

0x5a44,	// (0x000931d9) main_vded_pane_t1

0x5a52,	// (0x000931e7) main_vded_pane_t2

0x0001,

0xf7fe,	// (0x0009cf93) main_vded_pane_t

0x5a60,	// (0x000931f5) vded_slider_pane

0x5a6a,	// (0x000931ff) vded_video_pane

0xd3af,	// (0x0009ab44) vded_video_pane_g1

0x5a76,	// (0x0009320b) vded_video_pane_g2

0xce04,	// (0x0009a599) vded_video_pane_g3

0x0002,

0xf803,	// (0x0009cf98) vded_video_pane_g

0xd3b9,	// (0x0009ab4e) vded_slider_pane_g1

0xcb51,	// (0x0009a2e6) vded_slider_pane_g2

0xd3c2,	// (0x0009ab57) vded_slider_pane_g3

0xd3cb,	// (0x0009ab60) vded_slider_pane_g4

0xd3d4,	// (0x0009ab69) vded_slider_pane_g5

0x0004,

0xf80a,	// (0x0009cf9f) vded_slider_pane_g

0x544b,	// (0x00092be0) mup3_rocker_pane_ParamLimits

0x544b,	// (0x00092be0) mup3_rocker_pane

0x5a7f,	// (0x00093214) mup3_control_keys_pane_g1

0x5a87,	// (0x0009321c) mup3_control_keys_pane_g2

0x5a8f,	// (0x00093224) mup3_control_keys_pane_g3

0x5a97,	// (0x0009322c) mup3_control_keys_pane_g4

0x0003,

0xf815,	// (0x0009cfaa) mup3_control_keys_pane_g

0x0c1e,	// (0x0008e3b3) popup_toolbar2_fixed_window_cp01_ParamLimits

0x0c1e,	// (0x0008e3b3) popup_toolbar2_fixed_window_cp01

0x5481,	// (0x00092c16) popup_toolbar2_fixed_window_cp02_ParamLimits

0x5481,	// (0x00092c16) popup_toolbar2_fixed_window_cp02

0xbd38,	// (0x000994cd) popup_call2_audio_second_window_t4_ParamLimits

0xbd38,	// (0x000994cd) popup_call2_audio_second_window_t4

0xc278,	// (0x00099a0d) popup_call2_audio_first_window_t6_ParamLimits

0xc278,	// (0x00099a0d) popup_call2_audio_first_window_t6

0xc50e,	// (0x00099ca3) popup_call2_audio_out_window_t6_ParamLimits

0xc50e,	// (0x00099ca3) popup_call2_audio_out_window_t6

0x99fb,	// (0x00097190) main_vitu_pane

0x5aa7,	// (0x0009323c) aid_size_cell_itu_ParamLimits

0x5aa7,	// (0x0009323c) aid_size_cell_itu

0xac82,	// (0x00098417) bg_popup_window_pane_cp08_ParamLimits

0xac82,	// (0x00098417) bg_popup_window_pane_cp08

0x5abd,	// (0x00093252) field_vitu_entry_pane_ParamLimits

0x5abd,	// (0x00093252) field_vitu_entry_pane

0x5ad4,	// (0x00093269) grid_vitu_function_pane_ParamLimits

0x5ad4,	// (0x00093269) grid_vitu_function_pane

0x5aef,	// (0x00093284) grid_vitu_itu_pane_ParamLimits

0x5aef,	// (0x00093284) grid_vitu_itu_pane

0x5b0d,	// (0x000932a2) cell_vitu_itu_pane_ParamLimits

0x5b0d,	// (0x000932a2) cell_vitu_itu_pane

0x5b33,	// (0x000932c8) cell_vitu_function_pane_ParamLimits

0x5b33,	// (0x000932c8) cell_vitu_function_pane

0xac82,	// (0x00098417) bg_popup_sub_pane_cp08_ParamLimits

0xac82,	// (0x00098417) bg_popup_sub_pane_cp08

0x5b4e,	// (0x000932e3) field_vitu_entry_pane_t1_ParamLimits

0x5b4e,	// (0x000932e3) field_vitu_entry_pane_t1

0xd3f5,	// (0x0009ab8a) field_vitu_entry_pane_t2_ParamLimits

0xd3f5,	// (0x0009ab8a) field_vitu_entry_pane_t2

0x0001,

0xf823,	// (0x0009cfb8) field_vitu_entry_pane_t_ParamLimits

0xf823,	// (0x0009cfb8) field_vitu_entry_pane_t

0xd412,	// (0x0009aba7) bg_button_pane_cp05_ParamLimits

0xd412,	// (0x0009aba7) bg_button_pane_cp05

0x5b6e,	// (0x00093303) cell_vitu_itu_pane_g1

0x5b86,	// (0x0009331b) cell_vitu_itu_pane_t1_ParamLimits

0x5b86,	// (0x0009331b) cell_vitu_itu_pane_t1

0x5b98,	// (0x0009332d) cell_vitu_itu_pane_t2_ParamLimits

0x5b98,	// (0x0009332d) cell_vitu_itu_pane_t2

0x0002,

0xf828,	// (0x0009cfbd) cell_vitu_itu_pane_t_ParamLimits

0xf828,	// (0x0009cfbd) cell_vitu_itu_pane_t

0xd420,	// (0x0009abb5) bg_button_pane_cp07

0x5bcd,	// (0x00093362) cell_vitu_function_pane_g1

0xa18a,	// (0x0009791f) main_calc_pane_g1

0x0a2c,	// (0x0008e1c1) aid_visual_content_pane

0x99fb,	// (0x00097190) main_vradio_pane

0x5bd6,	// (0x0009336b) main_vradio_pane_g1_ParamLimits

0x5bd6,	// (0x0009336b) main_vradio_pane_g1

0xd42a,	// (0x0009abbf) main_vradio_pane_g2_ParamLimits

0xd42a,	// (0x0009abbf) main_vradio_pane_g2

0x0001,

0xf82f,	// (0x0009cfc4) main_vradio_pane_g_ParamLimits

0xf82f,	// (0x0009cfc4) main_vradio_pane_g

0x5bed,	// (0x00093382) main_vradio_pane_t1_ParamLimits

0x5bed,	// (0x00093382) main_vradio_pane_t1

0x5c02,	// (0x00093397) main_vradio_pane_t2_ParamLimits

0x5c02,	// (0x00093397) main_vradio_pane_t2

0xd437,	// (0x0009abcc) main_vradio_pane_t3_ParamLimits

0xd437,	// (0x0009abcc) main_vradio_pane_t3

0x0002,

0xf834,	// (0x0009cfc9) main_vradio_pane_t_ParamLimits

0xf834,	// (0x0009cfc9) main_vradio_pane_t

0x5c17,	// (0x000933ac) vradio_rocker_control_pane_ParamLimits

0x5c17,	// (0x000933ac) vradio_rocker_control_pane

0x5c29,	// (0x000933be) vradio_station_info_pane_ParamLimits

0x5c29,	// (0x000933be) vradio_station_info_pane

0xd44b,	// (0x0009abe0) vradio_frequency_info_pane_ParamLimits

0xd44b,	// (0x0009abe0) vradio_frequency_info_pane

0xce04,	// (0x0009a599) vradio_station_info_pane_g1

0xd45a,	// (0x0009abef) vradio_station_info_pane_t1_ParamLimits

0xd45a,	// (0x0009abef) vradio_station_info_pane_t1

0xd47c,	// (0x0009ac11) vradio_station_info_pane_t2_ParamLimits

0xd47c,	// (0x0009ac11) vradio_station_info_pane_t2

0x0001,

0xf83b,	// (0x0009cfd0) vradio_station_info_pane_t_ParamLimits

0xf83b,	// (0x0009cfd0) vradio_station_info_pane_t

0xd48e,	// (0x0009ac23) vradio_tuning_pane

0xd496,	// (0x0009ac2b) vradio_rocker_control_pane_g1

0xd49e,	// (0x0009ac33) vradio_rocker_control_pane_g2

0xd4a6,	// (0x0009ac3b) vradio_rocker_control_pane_g3

0xd4ae,	// (0x0009ac43) vradio_rocker_control_pane_g4

0xd4b6,	// (0x0009ac4b) vradio_rocker_control_pane_g5

0x0004,

0xf840,	// (0x0009cfd5) vradio_rocker_control_pane_g

0x5c39,	// (0x000933ce) vradio_frequency_info_pane_g1

0xd4be,	// (0x0009ac53) vradio_frequency_info_pane_t1_ParamLimits

0xd4be,	// (0x0009ac53) vradio_frequency_info_pane_t1

0x5c43,	// (0x000933d8) vradio_tuning_pane_g1

0x5c4e,	// (0x000933e3) vradio_tuning_pane_t1

0x9a19,	// (0x000971ae) area_side_right_pane_ParamLimits

0x9a19,	// (0x000971ae) area_side_right_pane

0xc987,	// (0x0009a11c) status_small_pane_g1

0xc98f,	// (0x0009a124) status_small_pane_g2

0xc998,	// (0x0009a12d) status_small_pane_g3

0xc9a1,	// (0x0009a136) status_small_pane_g4

0x0003,

0xf5fb,	// (0x0009cd90) status_small_pane_g

0xc9aa,	// (0x0009a13f) status_small_pane_t1

0x99fb,	// (0x00097190) main_video3_pane

0xd4d2,	// (0x0009ac67) cams_zoom_vslider_pane

0xd4da,	// (0x0009ac6f) image3_wide_pane_ParamLimits

0xd4da,	// (0x0009ac6f) image3_wide_pane

0xd4f4,	// (0x0009ac89) image3_wide_small_pane

0xd500,	// (0x0009ac95) main_video3_pane_g1_ParamLimits

0xd500,	// (0x0009ac95) main_video3_pane_g1

0xd51c,	// (0x0009acb1) main_video3_pane_g2_ParamLimits

0xd51c,	// (0x0009acb1) main_video3_pane_g2

0x0001,

0xf84b,	// (0x0009cfe0) main_video3_pane_g_ParamLimits

0xf84b,	// (0x0009cfe0) main_video3_pane_g

0xd538,	// (0x0009accd) main_video3_pane_t1_ParamLimits

0xd538,	// (0x0009accd) main_video3_pane_t1

0xd563,	// (0x0009acf8) main_video3_pane_t2_ParamLimits

0xd563,	// (0x0009acf8) main_video3_pane_t2

0xd590,	// (0x0009ad25) main_video3_pane_t3_ParamLimits

0xd590,	// (0x0009ad25) main_video3_pane_t3

0x0002,

0xf850,	// (0x0009cfe5) main_video3_pane_t_ParamLimits

0xf850,	// (0x0009cfe5) main_video3_pane_t

0xd5bd,	// (0x0009ad52) cams_zoom_vslider_pane_g1

0xd5c6,	// (0x0009ad5b) cams_zoom_vslider_pane_g2

0x0001,

0xf857,	// (0x0009cfec) cams_zoom_vslider_pane_g

0xd5ce,	// (0x0009ad63) small_slider_vertical_pane

0xce04,	// (0x0009a599) small_slider_vertical_pane_g1

0xce04,	// (0x0009a599) small_slider_vertical_pane_g2

0xd5d6,	// (0x0009ad6b) small_slider_vertical_pane_g3

0x0002,

0xf85c,	// (0x0009cff1) small_slider_vertical_pane_g

0x99fb,	// (0x00097190) main_hwr_training_pane

0xd5df,	// (0x0009ad74) hwr_training_instruct_pane_ParamLimits

0xd5df,	// (0x0009ad74) hwr_training_instruct_pane

0x5c5d,	// (0x000933f2) hwr_training_navi_pane_ParamLimits

0x5c5d,	// (0x000933f2) hwr_training_navi_pane

0x5c7c,	// (0x00093411) hwr_training_write_pane_ParamLimits

0x5c7c,	// (0x00093411) hwr_training_write_pane

0x99fb,	// (0x00097190) bg_frame_shadow_pane

0xd616,	// (0x0009adab) hwr_training_write_pane_g1

0xd61e,	// (0x0009adb3) hwr_training_write_pane_g2

0xd626,	// (0x0009adbb) hwr_training_write_pane_g3

0xd62e,	// (0x0009adc3) hwr_training_write_pane_g4

0xd636,	// (0x0009adcb) hwr_training_write_pane_g5

0xd63e,	// (0x0009add3) hwr_training_write_pane_g6

0xd646,	// (0x0009addb) hwr_training_write_pane_g7

0x0006,

0xf863,	// (0x0009cff8) hwr_training_write_pane_g

0xa763,	// (0x00097ef8) hwr_training_navi_pane_g1_ParamLimits

0xa763,	// (0x00097ef8) hwr_training_navi_pane_g1

0xa775,	// (0x00097f0a) hwr_training_navi_pane_g2_ParamLimits

0xa775,	// (0x00097f0a) hwr_training_navi_pane_g2

0xa787,	// (0x00097f1c) hwr_training_navi_pane_g3_ParamLimits

0xa787,	// (0x00097f1c) hwr_training_navi_pane_g3

0xa797,	// (0x00097f2c) hwr_training_navi_pane_g4_ParamLimits

0xa797,	// (0x00097f2c) hwr_training_navi_pane_g4

0x0004,

0xf872,	// (0x0009d007) hwr_training_navi_pane_g_ParamLimits

0xf872,	// (0x0009d007) hwr_training_navi_pane_g

0xa7a4,	// (0x00097f39) hwr_training_navi_pane_t1

0x5cc4,	// (0x00093459) list_single_hwr_training_instruct_pane_ParamLimits

0x5cc4,	// (0x00093459) list_single_hwr_training_instruct_pane

0xd64e,	// (0x0009ade3) list_single_hwr_training_instruct_pane_t1

0xcd44,	// (0x0009a4d9) bg_frame_shadow_pane_g1

0xd65d,	// (0x0009adf2) bg_frame_shadow_pane_g2

0xd665,	// (0x0009adfa) bg_frame_shadow_pane_g3

0xd66d,	// (0x0009ae02) bg_frame_shadow_pane_g4

0xd675,	// (0x0009ae0a) bg_frame_shadow_pane_g5

0xd67d,	// (0x0009ae12) bg_frame_shadow_pane_g6

0xd685,	// (0x0009ae1a) bg_frame_shadow_pane_g7

0xa2c7,	// (0x00097a5c) bg_frame_shadow_pane_g8

0x0007,

0xf87d,	// (0x0009d012) bg_frame_shadow_pane_g

0x99fb,	// (0x00097190) main_video_tele_dialer_pane

0x5ce0,	// (0x00093475) aid_size_cell_video_keypad_ParamLimits

0x5ce0,	// (0x00093475) aid_size_cell_video_keypad

0x5cfa,	// (0x0009348f) grid_video_dialer_keypad_pane_ParamLimits

0x5cfa,	// (0x0009348f) grid_video_dialer_keypad_pane

0x5d46,	// (0x000934db) video_down_pane_cp_ParamLimits

0x5d46,	// (0x000934db) video_down_pane_cp

0x5d78,	// (0x0009350d) cell_video_dialer_keypad_pane_ParamLimits

0x5d78,	// (0x0009350d) cell_video_dialer_keypad_pane

0xd68d,	// (0x0009ae22) bg_button_pane_cp08_ParamLimits

0xd68d,	// (0x0009ae22) bg_button_pane_cp08

0x5d9e,	// (0x00093533) cell_video_dialer_keypad_pane_g1_ParamLimits

0x5d9e,	// (0x00093533) cell_video_dialer_keypad_pane_g1

0x5435,	// (0x00092bca) mup3_rocker2_pane_ParamLimits

0x5435,	// (0x00092bca) mup3_rocker2_pane

0xce04,	// (0x0009a599) mup3_rocker2_pane_g1

0x3e8a,	// (0x0009161f) main_dialer2_pane

0x99fb,	// (0x00097190) main_mp4_pane

0xa7d0,	// (0x00097f65) main_mp4_pane_g1_ParamLimits

0xa7d0,	// (0x00097f65) main_mp4_pane_g1

0xa7d0,	// (0x00097f65) main_mp4_pane_g2_ParamLimits

0xa7d0,	// (0x00097f65) main_mp4_pane_g2

0x5dd9,	// (0x0009356e) main_mp4_pane_g3_ParamLimits

0x5dd9,	// (0x0009356e) main_mp4_pane_g3

0xa7de,	// (0x00097f73) main_mp4_pane_g4_ParamLimits

0xa7de,	// (0x00097f73) main_mp4_pane_g4

0xa80c,	// (0x00097fa1) main_mp4_pane_g5_ParamLimits

0xa80c,	// (0x00097fa1) main_mp4_pane_g5

0x0007,

0xf89d,	// (0x0009d032) main_mp4_pane_g_ParamLimits

0xf89d,	// (0x0009d032) main_mp4_pane_g

0xa880,	// (0x00098015) main_mp4_pane_t1_ParamLimits

0xa880,	// (0x00098015) main_mp4_pane_t1

0xa8dc,	// (0x00098071) main_mp4_pane_t2_ParamLimits

0xa8dc,	// (0x00098071) main_mp4_pane_t2

0xd699,	// (0x0009ae2e) main_mp4_pane_t3_ParamLimits

0xd699,	// (0x0009ae2e) main_mp4_pane_t3

0xa92e,	// (0x000980c3) main_mp4_pane_t4_ParamLimits

0xa92e,	// (0x000980c3) main_mp4_pane_t4

0x0003,

0xf8ae,	// (0x0009d043) main_mp4_pane_t_ParamLimits

0xf8ae,	// (0x0009d043) main_mp4_pane_t

0xa96e,	// (0x00098103) mp4_progress_pane_ParamLimits

0xa96e,	// (0x00098103) mp4_progress_pane

0xa9b8,	// (0x0009814d) mp4_rocker_pane_ParamLimits

0xa9b8,	// (0x0009814d) mp4_rocker_pane

0xd6c7,	// (0x0009ae5c) mp4_progress_pane_t1

0xd6e0,	// (0x0009ae75) mp4_progress_pane_t2

0x0001,

0xf8b7,	// (0x0009d04c) mp4_progress_pane_t

0xd6f9,	// (0x0009ae8e) mup_progress_pane_cp04

0xce04,	// (0x0009a599) mp4_rocker_pane_g1

0x5e23,	// (0x000935b8) aid_cell_size_keypad2_ParamLimits

0x5e23,	// (0x000935b8) aid_cell_size_keypad2

0x5e39,	// (0x000935ce) dialer2_ne_pane_ParamLimits

0x5e39,	// (0x000935ce) dialer2_ne_pane

0x5e51,	// (0x000935e6) grid_dialer2_keypad_pane_ParamLimits

0x5e51,	// (0x000935e6) grid_dialer2_keypad_pane

0xcbe3,	// (0x0009a378) bg_popup_call_pane_cp07_ParamLimits

0xcbe3,	// (0x0009a378) bg_popup_call_pane_cp07

0x5e6d,	// (0x00093602) dialer2_ne_pane_t1_ParamLimits

0x5e6d,	// (0x00093602) dialer2_ne_pane_t1

0x5ead,	// (0x00093642) cell_dialer2_keypad_pane_ParamLimits

0x5ead,	// (0x00093642) cell_dialer2_keypad_pane

0xd71e,	// (0x0009aeb3) bg_button_pane_pane_cp04_ParamLimits

0xd71e,	// (0x0009aeb3) bg_button_pane_pane_cp04

0x5ed3,	// (0x00093668) cell_dialer2_keypad_pane_g1_ParamLimits

0x5ed3,	// (0x00093668) cell_dialer2_keypad_pane_g1

0x1ac7,	// (0x0008f25c) aid_placing_vt_set_content_ParamLimits

0x1ac7,	// (0x0008f25c) aid_placing_vt_set_content

0x1aeb,	// (0x0008f280) aid_placing_vt_set_title_ParamLimits

0x1aeb,	// (0x0008f280) aid_placing_vt_set_title

0x99fb,	// (0x00097190) main_image3_pane

0x5f99,	// (0x0009372e) area_side_right_pane_cp01_ParamLimits

0x5f99,	// (0x0009372e) area_side_right_pane_cp01

0xa7d0,	// (0x00097f65) main_image3_pane_g1_ParamLimits

0xa7d0,	// (0x00097f65) main_image3_pane_g1

0x5fb2,	// (0x00093747) main_image3_pane_g2_ParamLimits

0x5fb2,	// (0x00093747) main_image3_pane_g2

0x5fda,	// (0x0009376f) main_image3_pane_g3_ParamLimits

0x5fda,	// (0x0009376f) main_image3_pane_g3

0x6004,	// (0x00093799) main_image3_pane_g4_ParamLimits

0x6004,	// (0x00093799) main_image3_pane_g4

0x0003,

0xf8c6,	// (0x0009d05b) main_image3_pane_g_ParamLimits

0xf8c6,	// (0x0009d05b) main_image3_pane_g

0x602e,	// (0x000937c3) main_image3_pane_t1_ParamLimits

0x602e,	// (0x000937c3) main_image3_pane_t1

0x6086,	// (0x0009381b) main_image3_pane_t2_ParamLimits

0x6086,	// (0x0009381b) main_image3_pane_t2

0x60d8,	// (0x0009386d) main_image3_pane_t3_ParamLimits

0x60d8,	// (0x0009386d) main_image3_pane_t3

0x0003,

0xf8cf,	// (0x0009d064) main_image3_pane_t_ParamLimits

0xf8cf,	// (0x0009d064) main_image3_pane_t

0xac82,	// (0x00098417) grid_sctrl_middle_pane_cp01_ParamLimits

0xac82,	// (0x00098417) grid_sctrl_middle_pane_cp01

0x6160,	// (0x000938f5) cell_sctrl_middle_pane_cp01_ParamLimits

0x6160,	// (0x000938f5) cell_sctrl_middle_pane_cp01

0x617d,	// (0x00093912) cell_sctrl_middle_pane_cp01_g1_ParamLimits

0x617d,	// (0x00093912) cell_sctrl_middle_pane_cp01_g1

0x99fb,	// (0x00097190) main_call4_pane

0x6192,	// (0x00093927) aid_size_button_call4_ParamLimits

0x6192,	// (0x00093927) aid_size_button_call4

0x61c5,	// (0x0009395a) call4_windows_pane_ParamLimits

0x61c5,	// (0x0009395a) call4_windows_pane

0x61e4,	// (0x00093979) grid_call4_button_pane_ParamLimits

0x61e4,	// (0x00093979) grid_call4_button_pane

0x621b,	// (0x000939b0) call4_windows_conf_pane

0x6236,	// (0x000939cb) popup_call4_audio_first_window_ParamLimits

0x6236,	// (0x000939cb) popup_call4_audio_first_window

0x6288,	// (0x00093a1d) popup_call4_audio_second_window_ParamLimits

0x6288,	// (0x00093a1d) popup_call4_audio_second_window

0x62a1,	// (0x00093a36) popup_call4_audio_wait_window_ParamLimits

0x62a1,	// (0x00093a36) popup_call4_audio_wait_window

0x62af,	// (0x00093a44) cell_call4_button_pane_ParamLimits

0x62af,	// (0x00093a44) cell_call4_button_pane

0x62d6,	// (0x00093a6b) bg_button_pane_cp09_ParamLimits

0x62d6,	// (0x00093a6b) bg_button_pane_cp09

0x62e2,	// (0x00093a77) cell_call4_button_pane_g1_ParamLimits

0x62e2,	// (0x00093a77) cell_call4_button_pane_g1

0x6308,	// (0x00093a9d) cell_call4_button_pane_t1_ParamLimits

0x6308,	// (0x00093a9d) cell_call4_button_pane_t1

0xd732,	// (0x0009aec7) popup_call4_audio_conf_window_ParamLimits

0xd732,	// (0x0009aec7) popup_call4_audio_conf_window

0x5497,	// (0x00092c2c) mup3_progress_pane_t1_ParamLimits

0x54b6,	// (0x00092c4b) mup3_progress_pane_t2_ParamLimits

0xd0a6,	// (0x0009a83b) mup3_progress_pane_t3_ParamLimits

0xf79f,	// (0x0009cf34) mup3_progress_pane_t_ParamLimits

0xd0c3,	// (0x0009a858) mup_progress_pane_cp03_ParamLimits

0x5a9f,	// (0x00093234) mup3_control_keys_pane_g4_copy1

0xa99c,	// (0x00098131) mp4_rocker2_pane_ParamLimits

0xa99c,	// (0x00098131) mp4_rocker2_pane

0xd74c,	// (0x0009aee1) mp4_rocker2_pane_g1

0xd754,	// (0x0009aee9) mp4_rocker2_pane_g2

0xaa3e,	// (0x000981d3) mp4_rocker2_pane_g3

0xaa46,	// (0x000981db) mp4_rocker2_pane_g4

0xaa4e,	// (0x000981e3) mp4_rocker2_pane_g5

0x0004,

0xf8d8,	// (0x0009d06d) mp4_rocker2_pane_g

0x99fb,	// (0x00097190) main_camera4_pane

0x99fb,	// (0x00097190) main_video4_pane

0x5d14,	// (0x000934a9) main_video_tele_dialer_pane_t1_ParamLimits

0x5d14,	// (0x000934a9) main_video_tele_dialer_pane_t1

0x5d2d,	// (0x000934c2) main_video_tele_dialer_pane_t2_ParamLimits

0x5d2d,	// (0x000934c2) main_video_tele_dialer_pane_t2

0x0001,

0xf88e,	// (0x0009d023) main_video_tele_dialer_pane_t_ParamLimits

0xf88e,	// (0x0009d023) main_video_tele_dialer_pane_t

0x6346,	// (0x00093adb) cam4_autofocus_pane_ParamLimits

0x6346,	// (0x00093adb) cam4_autofocus_pane

0x635c,	// (0x00093af1) cam4_image_uncrop_pane_ParamLimits

0x635c,	// (0x00093af1) cam4_image_uncrop_pane

0x6375,	// (0x00093b0a) cam4_indicators_pane_ParamLimits

0x6375,	// (0x00093b0a) cam4_indicators_pane

0x63a5,	// (0x00093b3a) main_camera4_pane_g1_ParamLimits

0x63a5,	// (0x00093b3a) main_camera4_pane_g1

0x63b7,	// (0x00093b4c) main_camera4_pane_g2_ParamLimits

0x63b7,	// (0x00093b4c) main_camera4_pane_g2

0x63ca,	// (0x00093b5f) main_camera4_pane_g3_ParamLimits

0x63ca,	// (0x00093b5f) main_camera4_pane_g3

0x63dd,	// (0x00093b72) main_camera4_pane_g4_ParamLimits

0x63dd,	// (0x00093b72) main_camera4_pane_g4

0x63f0,	// (0x00093b85) main_camera4_pane_g5_ParamLimits

0x63f0,	// (0x00093b85) main_camera4_pane_g5

0x0005,

0xf8e3,	// (0x0009d078) main_camera4_pane_g_ParamLimits

0xf8e3,	// (0x0009d078) main_camera4_pane_g

0x6414,	// (0x00093ba9) main_camera4_pane_t1_ParamLimits

0x6414,	// (0x00093ba9) main_camera4_pane_t1

0xd02b,	// (0x0009a7c0) bg_tb_trans_pane_cp06

0xaa7c,	// (0x00098211) cam4_indicators_pane_g1

0xaa8d,	// (0x00098222) cam4_indicators_pane_g2

0x0002,

0xf8fe,	// (0x0009d093) cam4_indicators_pane_g

0xaaa5,	// (0x0009823a) cam4_indicators_pane_t1

0x6478,	// (0x00093c0d) main_video4_pane_g1_ParamLimits

0x6478,	// (0x00093c0d) main_video4_pane_g1

0x6487,	// (0x00093c1c) main_video4_pane_g2_ParamLimits

0x6487,	// (0x00093c1c) main_video4_pane_g2

0x6496,	// (0x00093c2b) main_video4_pane_g3_ParamLimits

0x6496,	// (0x00093c2b) main_video4_pane_g3

0x64a5,	// (0x00093c3a) main_video4_pane_g4_ParamLimits

0x64a5,	// (0x00093c3a) main_video4_pane_g4

0x0004,

0xf905,	// (0x0009d09a) main_video4_pane_g_ParamLimits

0xf905,	// (0x0009d09a) main_video4_pane_g

0x64c3,	// (0x00093c58) vid4_indicators_pane_ParamLimits

0x64c3,	// (0x00093c58) vid4_indicators_pane

0x64f1,	// (0x00093c86) video4_image_uncrop_cif_pane_ParamLimits

0x64f1,	// (0x00093c86) video4_image_uncrop_cif_pane

0x650b,	// (0x00093ca0) video4_image_uncrop_nhd_pane_ParamLimits

0x650b,	// (0x00093ca0) video4_image_uncrop_nhd_pane

0x635c,	// (0x00093af1) video4_image_uncrop_vga_pane_ParamLimits

0x635c,	// (0x00093af1) video4_image_uncrop_vga_pane

0xac82,	// (0x00098417) bg_tb_trans_pane_cp07

0xaad3,	// (0x00098268) vid4_indicators_pane_g1

0xaae9,	// (0x0009827e) vid4_indicators_pane_g2

0xaafd,	// (0x00098292) vid4_indicators_pane_g3

0x0004,

0xf910,	// (0x0009d0a5) vid4_indicators_pane_g

0xab2e,	// (0x000982c3) vid4_indicators_pane_t1

0x6521,	// (0x00093cb6) cam4_autofocus_pane_g1

0x6529,	// (0x00093cbe) cam4_autofocus_pane_g2

0x6531,	// (0x00093cc6) cam4_autofocus_pane_g3

0x0002,

0xf91b,	// (0x0009d0b0) cam4_autofocus_pane_g

0x6539,	// (0x00093cce) cam4_autofocus_pane_g3_copy1

0x5d5c,	// (0x000934f1) video_down_pane_cp_t1

0x5d6a,	// (0x000934ff) video_down_pane_cp_t2

0x0001,

0xf893,	// (0x0009d028) video_down_pane_cp_t

0xac82,	// (0x00098417) popup_vitu2_window_ParamLimits

0xac82,	// (0x00098417) popup_vitu2_window

0x6541,	// (0x00093cd6) aid_size_cell2_itu2_ParamLimits

0x6541,	// (0x00093cd6) aid_size_cell2_itu2

0x6567,	// (0x00093cfc) aid_size_cell_itu2_ParamLimits

0x6567,	// (0x00093cfc) aid_size_cell_itu2

0x65c7,	// (0x00093d5c) bg_popup_window_pane_cp09_ParamLimits

0x65c7,	// (0x00093d5c) bg_popup_window_pane_cp09

0x65d5,	// (0x00093d6a) field_vitu2_entry_pane_ParamLimits

0x65d5,	// (0x00093d6a) field_vitu2_entry_pane

0x65fd,	// (0x00093d92) grid_vitu2_function_pane_ParamLimits

0x65fd,	// (0x00093d92) grid_vitu2_function_pane

0x664e,	// (0x00093de3) grid_vitu2_itu_pane_ParamLimits

0x664e,	// (0x00093de3) grid_vitu2_itu_pane

0x66de,	// (0x00093e73) cell_vitu2_itu_pane_ParamLimits

0x66de,	// (0x00093e73) cell_vitu2_itu_pane

0x670b,	// (0x00093ea0) cell_vitu2_function_pane_ParamLimits

0x670b,	// (0x00093ea0) cell_vitu2_function_pane

0xd75c,	// (0x0009aef1) bg_popup_call_pane_cp08_ParamLimits

0xd75c,	// (0x0009aef1) bg_popup_call_pane_cp08

0xd773,	// (0x0009af08) field_vitu2_entry_pane_g1

0xd77f,	// (0x0009af14) field_vitu2_entry_pane_g2

0x0002,

0xf922,	// (0x0009d0b7) field_vitu2_entry_pane_g

0xfe1f,	// (0x0008d5b4) field_vitu2_entry_pane_t1_ParamLimits

0xfe1f,	// (0x0008d5b4) field_vitu2_entry_pane_t1

0x674f,	// (0x00093ee4) field_vitu2_entry_pane_t2_ParamLimits

0x674f,	// (0x00093ee4) field_vitu2_entry_pane_t2

0x0001,

0xf929,	// (0x0009d0be) field_vitu2_entry_pane_t_ParamLimits

0xf929,	// (0x0009d0be) field_vitu2_entry_pane_t

0x676c,	// (0x00093f01) bg_button_pane_cp010_ParamLimits

0x676c,	// (0x00093f01) bg_button_pane_cp010

0xab45,	// (0x000982da) cell_vitu2_itu_pane_g1

0x6788,	// (0x00093f1d) cell_vitu2_itu_pane_t1_ParamLimits

0x6788,	// (0x00093f1d) cell_vitu2_itu_pane_t1

0xfe4d,	// (0x0008d5e2) cell_vitu2_itu_pane_t2_ParamLimits

0xfe4d,	// (0x0008d5e2) cell_vitu2_itu_pane_t2

0x0002,

0xf933,	// (0x0009d0c8) cell_vitu2_itu_pane_t_ParamLimits

0xf933,	// (0x0009d0c8) cell_vitu2_itu_pane_t

0xac82,	// (0x00098417) bg_button_pane_cp011

0x67e6,	// (0x00093f7b) cell_vitu2_function_pane_g1

0x99fb,	// (0x00097190) main_myfav_hc_pane

0x6128,	// (0x000938bd) popup_image3_note_pane_ParamLimits

0x6128,	// (0x000938bd) popup_image3_note_pane

0x6144,	// (0x000938d9) popup_image3_tool_bar_pane_ParamLimits

0x6144,	// (0x000938d9) popup_image3_tool_bar_pane

0xfedb,	// (0x0008d670) cell_vitu2_itu_pane_t3_ParamLimits

0xfedb,	// (0x0008d670) cell_vitu2_itu_pane_t3

0x99fb,	// (0x00097190) bg_popup_trans_pane

0xd7a1,	// (0x0009af36) grid_image3_tool_bar_pane

0xd7ab,	// (0x0009af40) bg_popup_trans_pane_g1

0xadbf,	// (0x00098554) bg_popup_trans_pane_g2

0xd7b3,	// (0x0009af48) bg_popup_trans_pane_g3

0xd7bb,	// (0x0009af50) bg_popup_trans_pane_g4

0xd7c3,	// (0x0009af58) bg_popup_trans_pane_g5

0xd7cb,	// (0x0009af60) bg_popup_trans_pane_g6

0xd7d3,	// (0x0009af68) bg_popup_trans_pane_g7

0xd7db,	// (0x0009af70) bg_popup_trans_pane_g8

0xad9f,	// (0x00098534) bg_popup_trans_pane_g9

0x0008,

0xf93a,	// (0x0009d0cf) bg_popup_trans_pane_g

0xd7e3,	// (0x0009af78) cell_image3_tool_bar_pane_ParamLimits

0xd7e3,	// (0x0009af78) cell_image3_tool_bar_pane

0xce04,	// (0x0009a599) cell_image3_tool_bar_pane_g1

0x99fb,	// (0x00097190) bg_popup_trans_pane_cp1

0xd7f9,	// (0x0009af8e) popup_image3_note_pane_t1

0xd807,	// (0x0009af9c) popup_image3_note_pane_t2

0xd815,	// (0x0009afaa) popup_image3_note_pane_t3

0x0002,

0xf94d,	// (0x0009d0e2) popup_image3_note_pane_t

0xd825,	// (0x0009afba) popup_image3_note_pane_t3_copy1

0x67fa,	// (0x00093f8f) bg_myfav_hc_instruction_pane_ParamLimits

0x67fa,	// (0x00093f8f) bg_myfav_hc_instruction_pane

0x6812,	// (0x00093fa7) cell_myfav_contact_pane_ParamLimits

0x6812,	// (0x00093fa7) cell_myfav_contact_pane

0x682e,	// (0x00093fc3) cell_myfav_contact_pane_cp1_ParamLimits

0x682e,	// (0x00093fc3) cell_myfav_contact_pane_cp1

0x6846,	// (0x00093fdb) cell_myfav_contact_pane_cp2_ParamLimits

0x6846,	// (0x00093fdb) cell_myfav_contact_pane_cp2

0x685e,	// (0x00093ff3) cell_myfav_contact_pane_cp3_ParamLimits

0x685e,	// (0x00093ff3) cell_myfav_contact_pane_cp3

0x6875,	// (0x0009400a) cell_myfav_contact_pane_cp4_ParamLimits

0x6875,	// (0x0009400a) cell_myfav_contact_pane_cp4

0x688d,	// (0x00094022) cell_myfav_contact_pane_cp5_ParamLimits

0x688d,	// (0x00094022) cell_myfav_contact_pane_cp5

0x68a1,	// (0x00094036) cell_myfav_contact_pane_cp6_ParamLimits

0x68a1,	// (0x00094036) cell_myfav_contact_pane_cp6

0x68b7,	// (0x0009404c) cell_myfav_contact_pane_cp7_ParamLimits

0x68b7,	// (0x0009404c) cell_myfav_contact_pane_cp7

0xd833,	// (0x0009afc8) listscroll_gen_pane_cp05

0x68cf,	// (0x00094064) main_myfav_hc_pane_g1_ParamLimits

0x68cf,	// (0x00094064) main_myfav_hc_pane_g1

0x68e9,	// (0x0009407e) main_myfav_hc_pane_g2_ParamLimits

0x68e9,	// (0x0009407e) main_myfav_hc_pane_g2

0x0002,

0xf954,	// (0x0009d0e9) main_myfav_hc_pane_g_ParamLimits

0xf954,	// (0x0009d0e9) main_myfav_hc_pane_g

0x691d,	// (0x000940b2) main_myfav_hc_pane_t1_ParamLimits

0x691d,	// (0x000940b2) main_myfav_hc_pane_t1

0xd83c,	// (0x0009afd1) main_myfav_hc_pane_t2_ParamLimits

0xd83c,	// (0x0009afd1) main_myfav_hc_pane_t2

0xd84e,	// (0x0009afe3) main_myfav_hc_pane_t3_ParamLimits

0xd84e,	// (0x0009afe3) main_myfav_hc_pane_t3

0x6934,	// (0x000940c9) main_myfav_hc_pane_t4_ParamLimits

0x6934,	// (0x000940c9) main_myfav_hc_pane_t4

0x0004,

0xf95b,	// (0x0009d0f0) main_myfav_hc_pane_t_ParamLimits

0xf95b,	// (0x0009d0f0) main_myfav_hc_pane_t

0xce04,	// (0x0009a599) bg_myfav_hc_instruction_pane_g1

0xd860,	// (0x0009aff5) cell_myfav_contact_pane_g1_ParamLimits

0xd860,	// (0x0009aff5) cell_myfav_contact_pane_g1

0xd860,	// (0x0009aff5) cell_myfav_contact_pane_g2_ParamLimits

0xd860,	// (0x0009aff5) cell_myfav_contact_pane_g2

0xd86c,	// (0x0009b001) cell_myfav_contact_pane_g3_ParamLimits

0xd86c,	// (0x0009b001) cell_myfav_contact_pane_g3

0xd090,	// (0x0009a825) cell_myfav_contact_pane_g4_ParamLimits

0xd090,	// (0x0009a825) cell_myfav_contact_pane_g4

0xd879,	// (0x0009b00e) cell_myfav_contact_pane_g5_ParamLimits

0xd879,	// (0x0009b00e) cell_myfav_contact_pane_g5

0x0004,

0xf966,	// (0x0009d0fb) cell_myfav_contact_pane_g_ParamLimits

0xf966,	// (0x0009d0fb) cell_myfav_contact_pane_g

0x6903,	// (0x00094098) main_myfav_hc_pane_g3_ParamLimits

0x6903,	// (0x00094098) main_myfav_hc_pane_g3

0x0b81,	// (0x0008e316) popup_adpt_find_window

0x695e,	// (0x000940f3) afind_page_pane_ParamLimits

0x695e,	// (0x000940f3) afind_page_pane

0x6973,	// (0x00094108) aid_size_cell_afind_ParamLimits

0x6973,	// (0x00094108) aid_size_cell_afind

0x6991,	// (0x00094126) bg_popup_sub_pane_cp09_ParamLimits

0x6991,	// (0x00094126) bg_popup_sub_pane_cp09

0x699e,	// (0x00094133) find_pane_cp01_ParamLimits

0x699e,	// (0x00094133) find_pane_cp01

0xd885,	// (0x0009b01a) grid_afind_control_pane_ParamLimits

0xd885,	// (0x0009b01a) grid_afind_control_pane

0x69ab,	// (0x00094140) grid_afind_pane_ParamLimits

0x69ab,	// (0x00094140) grid_afind_pane

0x69cd,	// (0x00094162) cell_afind_pane_ParamLimits

0x69cd,	// (0x00094162) cell_afind_pane

0xce04,	// (0x0009a599) afind_page_pane_g1

0x6a3a,	// (0x000941cf) afind_page_pane_g2

0x6a43,	// (0x000941d8) afind_page_pane_g3

0x0002,

0xf971,	// (0x0009d106) afind_page_pane_g

0x6a4c,	// (0x000941e1) afind_page_pane_t1

0xd899,	// (0x0009b02e) cell_afind_grid_control_pane_ParamLimits

0xd899,	// (0x0009b02e) cell_afind_grid_control_pane

0xd71e,	// (0x0009aeb3) bg_button_pane_cp69_ParamLimits

0xd71e,	// (0x0009aeb3) bg_button_pane_cp69

0x6a6c,	// (0x00094201) cell_afind_pane_g1_ParamLimits

0x6a6c,	// (0x00094201) cell_afind_pane_g1

0x6a79,	// (0x0009420e) cell_afind_pane_t1_ParamLimits

0x6a79,	// (0x0009420e) cell_afind_pane_t1

0xa45a,	// (0x00097bef) bg_button_pane_cp72

0xd8a8,	// (0x0009b03d) cell_afind_grid_control_pane_g1

0x392a,	// (0x000910bf) aid_image_placing_area_ParamLimits

0x392a,	// (0x000910bf) aid_image_placing_area

0xd3dd,	// (0x0009ab72) field_vitu_entry_pane_g1_ParamLimits

0xd3dd,	// (0x0009ab72) field_vitu_entry_pane_g1

0xd3e9,	// (0x0009ab7e) field_vitu_entry_pane_g2_ParamLimits

0xd3e9,	// (0x0009ab7e) field_vitu_entry_pane_g2

0x0001,

0xf81e,	// (0x0009cfb3) field_vitu_entry_pane_g_ParamLimits

0xf81e,	// (0x0009cfb3) field_vitu_entry_pane_g

0x5b6e,	// (0x00093303) cell_vitu_itu_pane_g1_ParamLimits

0x5bb0,	// (0x00093345) cell_vitu_itu_pane_t3_ParamLimits

0x5bb0,	// (0x00093345) cell_vitu_itu_pane_t3

0xd6c7,	// (0x0009ae5c) mp4_progress_pane_t1_ParamLimits

0xd6e0,	// (0x0009ae75) mp4_progress_pane_t2_ParamLimits

0xf8b7,	// (0x0009d04c) mp4_progress_pane_t_ParamLimits

0xd6f9,	// (0x0009ae8e) mup_progress_pane_cp04_ParamLimits

0x6948,	// (0x000940dd) main_myfav_hc_pane_t5_ParamLimits

0x6948,	// (0x000940dd) main_myfav_hc_pane_t5

0x0a40,	// (0x0008e1d5) aid_zoom_text_primary

0x0b81,	// (0x0008e316) popup_adpt_find_window_ParamLimits

0xac82,	// (0x00098417) main_cam_set_pane

0x638e,	// (0x00093b23) cam4_zoom_pane_ParamLimits

0x638e,	// (0x00093b23) cam4_zoom_pane

0x6a8b,	// (0x00094220) main_cam_set_pane_g1_ParamLimits

0x6a8b,	// (0x00094220) main_cam_set_pane_g1

0x6a99,	// (0x0009422e) main_cam_set_pane_g2_ParamLimits

0x6a99,	// (0x0009422e) main_cam_set_pane_g2

0x0001,

0xf978,	// (0x0009d10d) main_cam_set_pane_g_ParamLimits

0xf978,	// (0x0009d10d) main_cam_set_pane_g

0x6aba,	// (0x0009424f) main_cam_set_pane_t1_ParamLimits

0x6aba,	// (0x0009424f) main_cam_set_pane_t1

0x6ad5,	// (0x0009426a) main_cset_listscroll_pane_ParamLimits

0x6ad5,	// (0x0009426a) main_cset_listscroll_pane

0x6af9,	// (0x0009428e) main_cset_slider_pane_ParamLimits

0x6af9,	// (0x0009428e) main_cset_slider_pane

0xd8b9,	// (0x0009b04e) main_cset_list_pane_ParamLimits

0xd8b9,	// (0x0009b04e) main_cset_list_pane

0xd8c9,	// (0x0009b05e) scroll_pane_cp028

0x6b23,	// (0x000942b8) aid_area_touch_slider

0x6b3f,	// (0x000942d4) cset_slider_pane

0x6b69,	// (0x000942fe) main_cset_slider_pane_g1

0x6b7e,	// (0x00094313) main_cset_slider_pane_g2

0x0011,

0xf97d,	// (0x0009d112) main_cset_slider_pane_g

0xd902,	// (0x0009b097) main_cset_slider_pane_t1

0x6c40,	// (0x000943d5) main_cset_slider_pane_t2

0x6c5a,	// (0x000943ef) main_cset_slider_pane_t3

0x6c74,	// (0x00094409) main_cset_slider_pane_t4

0x6c8e,	// (0x00094423) main_cset_slider_pane_t5

0x6cac,	// (0x00094441) main_cset_slider_pane_t6

0x6cc3,	// (0x00094458) main_cset_slider_pane_t7

0x000e,

0xf9a2,	// (0x0009d137) main_cset_slider_pane_t

0x6dcf,	// (0x00094564) cset_list_set_pane_ParamLimits

0x6dcf,	// (0x00094564) cset_list_set_pane

0x6de3,	// (0x00094578) aid_position_infowindow_above

0x6deb,	// (0x00094580) aid_position_infowindow_below

0x6df3,	// (0x00094588) cset_list_set_pane_g1_ParamLimits

0x6df3,	// (0x00094588) cset_list_set_pane_g1

0xff39,	// (0x0008d6ce) cset_list_set_pane_g3_ParamLimits

0xff39,	// (0x0008d6ce) cset_list_set_pane_g3

0x0001,

0xf9c1,	// (0x0009d156) cset_list_set_pane_g_ParamLimits

0xf9c1,	// (0x0009d156) cset_list_set_pane_g

0xff48,	// (0x0008d6dd) cset_list_set_pane_t1_ParamLimits

0xff48,	// (0x0008d6dd) cset_list_set_pane_t1

0xac82,	// (0x00098417) list_highlight_pane_cp021_ParamLimits

0xac82,	// (0x00098417) list_highlight_pane_cp021

0xb6e1,	// (0x00098e76) cset_slider_pane_g1

0xb6f3,	// (0x00098e88) cset_slider_pane_g2

0xb6ea,	// (0x00098e7f) cset_slider_pane_g3

0x0002,

0xf9c6,	// (0x0009d15b) cset_slider_pane_g

0xd9a2,	// (0x0009b137) aid_area_touch_cam4_zoom

0x6dff,	// (0x00094594) cam4_zoom_cont_pane

0x6e07,	// (0x0009459c) cam4_zoom_pane_g1

0x6e0f,	// (0x000945a4) cam4_zoom_pane_g2

0x6e17,	// (0x000945ac) cam4_zoom_pane_g3

0x0002,

0xf9cd,	// (0x0009d162) cam4_zoom_pane_g

0xab57,	// (0x000982ec) cam4_zoom_cont_pane_g1

0xab60,	// (0x000982f5) cam4_zoom_cont_pane_g2

0xab69,	// (0x000982fe) cam4_zoom_cont_pane_g3

0x0002,

0xf9d4,	// (0x0009d169) cam4_zoom_cont_pane_g

0x61b0,	// (0x00093945) call4_image_pane_ParamLimits

0x61b0,	// (0x00093945) call4_image_pane

0x621b,	// (0x000939b0) call4_windows_conf_pane_ParamLimits

0x6266,	// (0x000939fb) popup_call4_audio_in_window_ParamLimits

0x6266,	// (0x000939fb) popup_call4_audio_in_window

0x99fb,	// (0x00097190) bg_popup_call2_act_pane_cp02

0xd72a,	// (0x0009aebf) call4_list_conf_pane

0xce04,	// (0x0009a599) call4_image_pane_g1

0xce04,	// (0x0009a599) call4_image_pane_g2

0x0001,

0xf6df,	// (0x0009ce74) call4_image_pane_g

0xd9ab,	// (0x0009b140) list_single_graphic_popup_conf4_pane_ParamLimits

0xd9ab,	// (0x0009b140) list_single_graphic_popup_conf4_pane

0x99fb,	// (0x00097190) list_highlight_pane_cp022

0xd9c0,	// (0x0009b155) list_single_graphic_popup_conf4_pane_g1

0xb2d9,	// (0x00098a6e) list_single_graphic_popup_conf4_pane_g2

0x0001,

0xf9db,	// (0x0009d170) list_single_graphic_popup_conf4_pane_g

0xd9c8,	// (0x0009b15d) list_single_graphic_popup_conf4_pane_t1

0x1c02,	// (0x0008f397) popup_vtel_slider_window_ParamLimits

0x1c02,	// (0x0008f397) popup_vtel_slider_window

0xd70c,	// (0x0009aea1) dialer2_ne_pane_t2_ParamLimits

0xd70c,	// (0x0009aea1) dialer2_ne_pane_t2

0x0001,

0xf8bc,	// (0x0009d051) dialer2_ne_pane_t_ParamLimits

0xf8bc,	// (0x0009d051) dialer2_ne_pane_t

0xcbe3,	// (0x0009a378) bg_popup_sub_pane_cp010_ParamLimits

0xcbe3,	// (0x0009a378) bg_popup_sub_pane_cp010

0x6e20,	// (0x000945b5) popup_vtel_slider_window_g1_ParamLimits

0x6e20,	// (0x000945b5) popup_vtel_slider_window_g1

0x6e33,	// (0x000945c8) popup_vtel_slider_window_g2_ParamLimits

0x6e33,	// (0x000945c8) popup_vtel_slider_window_g2

0x0003,

0xf9e0,	// (0x0009d175) popup_vtel_slider_window_g_ParamLimits

0xf9e0,	// (0x0009d175) popup_vtel_slider_window_g

0x6e89,	// (0x0009461e) vtel_slider_pane_ParamLimits

0x6e89,	// (0x0009461e) vtel_slider_pane

0x6eab,	// (0x00094640) vtel_slider_pane_g1_ParamLimits

0x6eab,	// (0x00094640) vtel_slider_pane_g1

0x6ebf,	// (0x00094654) vtel_slider_pane_g2_ParamLimits

0x6ebf,	// (0x00094654) vtel_slider_pane_g2

0x6ed7,	// (0x0009466c) vtel_slider_pane_g3_ParamLimits

0x6ed7,	// (0x0009466c) vtel_slider_pane_g3

0x6eab,	// (0x00094640) vtel_slider_pane_g4_ParamLimits

0x6eab,	// (0x00094640) vtel_slider_pane_g4

0x6eed,	// (0x00094682) vtel_slider_pane_g5_ParamLimits

0x6eed,	// (0x00094682) vtel_slider_pane_g5

0x0004,

0xf9e9,	// (0x0009d17e) vtel_slider_pane_g_ParamLimits

0xf9e9,	// (0x0009d17e) vtel_slider_pane_g

0xac82,	// (0x00098417) main_gallery2_pane

0x6593,	// (0x00093d28) aid_size_row_itut2_dropdow_list_ParamLimits

0x6593,	// (0x00093d28) aid_size_row_itut2_dropdow_list

0x6625,	// (0x00093dba) grid_vitu2_function_top_pane_ParamLimits

0x6625,	// (0x00093dba) grid_vitu2_function_top_pane

0x6689,	// (0x00093e1e) popup_vitu2_dropdown_list_window_ParamLimits

0x6689,	// (0x00093e1e) popup_vitu2_dropdown_list_window

0x66b2,	// (0x00093e47) popup_vitu2_match_list_window

0x6f03,	// (0x00094698) cell_vitu2_function_top_pane_ParamLimits

0x6f03,	// (0x00094698) cell_vitu2_function_top_pane

0x6f25,	// (0x000946ba) cell_vitu2_function_top_pane_cp01_ParamLimits

0x6f25,	// (0x000946ba) cell_vitu2_function_top_pane_cp01

0x6f41,	// (0x000946d6) cell_vitu2_function_top_wide_pane_ParamLimits

0x6f41,	// (0x000946d6) cell_vitu2_function_top_wide_pane

0xac82,	// (0x00098417) bg_button_pane_cp012

0x6f5d,	// (0x000946f2) cell_vitu2_function_top_pane_g1

0xab72,	// (0x00098307) bg_button_pane_cp013_ParamLimits

0xab72,	// (0x00098307) bg_button_pane_cp013

0x6f71,	// (0x00094706) cell_vitu2_function_top_wide_pane_g1_ParamLimits

0x6f71,	// (0x00094706) cell_vitu2_function_top_wide_pane_g1

0xac82,	// (0x00098417) bg_popup_sub_pane_cp20

0x6f89,	// (0x0009471e) list_vitu2_match_list_pane

0xd7ab,	// (0x0009af40) bg_popup_sub_pane_cp20_g1

0xd7b3,	// (0x0009af48) bg_popup_sub_pane_cp20_g2

0xadbf,	// (0x00098554) bg_popup_sub_pane_cp20_g3

0xd7bb,	// (0x0009af50) bg_popup_sub_pane_cp20_g4

0xad9f,	// (0x00098534) bg_popup_sub_pane_cp20_g5

0xd9de,	// (0x0009b173) bg_popup_sub_pane_cp20_g6

0xd7cb,	// (0x0009af60) bg_popup_sub_pane_cp20_g7

0xd7d3,	// (0x0009af68) bg_popup_sub_pane_cp20_g8

0xd7db,	// (0x0009af70) bg_popup_sub_pane_cp20_g9

0x0008,

0xf9f4,	// (0x0009d189) bg_popup_sub_pane_cp20_g

0xab8e,	// (0x00098323) list_vitu2_match_list_item_pane_ParamLimits

0xab8e,	// (0x00098323) list_vitu2_match_list_item_pane

0xaba0,	// (0x00098335) list_vitu2_match_list_item_pane_t1

0x99fb,	// (0x00097190) bg_popup_sub_pane_cp21

0xb202,	// (0x00098997) grid_vitu2_dropdown_list_pane

0x6fb3,	// (0x00094748) cell_vitu2_dropdown_list_char_pane_ParamLimits

0x6fb3,	// (0x00094748) cell_vitu2_dropdown_list_char_pane

0x6fd6,	// (0x0009476b) cell_vitu2_dropdown_list_ctrl_pane_ParamLimits

0x6fd6,	// (0x0009476b) cell_vitu2_dropdown_list_ctrl_pane

0xd9e6,	// (0x0009b17b) cell_vitu2_dropdown_list_char_pane_g1

0xd9ef,	// (0x0009b184) cell_vitu2_dropdown_list_char_pane_g2

0xd9f8,	// (0x0009b18d) cell_vitu2_dropdown_list_char_pane_g3

0x0002,

0xfa11,	// (0x0009d1a6) cell_vitu2_dropdown_list_char_pane_g

0x7004,	// (0x00094799) cell_vitu2_dropdown_list_char_pane_t1

0x7012,	// (0x000947a7) cell_vitu2_dropdown_list_ctrl_pane_g1_ParamLimits

0x7012,	// (0x000947a7) cell_vitu2_dropdown_list_ctrl_pane_g1

0x7022,	// (0x000947b7) cell_vitu2_dropdown_list_ctrl_pane_g2_ParamLimits

0x7022,	// (0x000947b7) cell_vitu2_dropdown_list_ctrl_pane_g2

0x7033,	// (0x000947c8) cell_vitu2_dropdown_list_ctrl_pane_g3_ParamLimits

0x7033,	// (0x000947c8) cell_vitu2_dropdown_list_ctrl_pane_g3

0x7043,	// (0x000947d8) cell_vitu2_dropdown_list_ctrl_pane_g4_ParamLimits

0x7043,	// (0x000947d8) cell_vitu2_dropdown_list_ctrl_pane_g4

0xd02b,	// (0x0009a7c0) cell_vitu2_dropdown_list_ctrl_pane_g5_ParamLimits

0xd02b,	// (0x0009a7c0) cell_vitu2_dropdown_list_ctrl_pane_g5

0x0004,

0xfa18,	// (0x0009d1ad) cell_vitu2_dropdown_list_ctrl_pane_g_ParamLimits

0xfa18,	// (0x0009d1ad) cell_vitu2_dropdown_list_ctrl_pane_g

0x705f,	// (0x000947f4) aid_size_cell_gallery2_ParamLimits

0x705f,	// (0x000947f4) aid_size_cell_gallery2

0x707d,	// (0x00094812) grid_gallery2_pane_ParamLimits

0x707d,	// (0x00094812) grid_gallery2_pane

0x7097,	// (0x0009482c) scroll_pane_cp029_ParamLimits

0x7097,	// (0x0009482c) scroll_pane_cp029

0x70a8,	// (0x0009483d) cell_gallery2_pane_ParamLimits

0x70a8,	// (0x0009483d) cell_gallery2_pane

0xda01,	// (0x0009b196) cell_gallery2_pane_g2

0x710c,	// (0x000948a1) cell_gallery2_pane_g3

0xda09,	// (0x0009b19e) cell_gallery2_pane_g4

0xda11,	// (0x0009b1a6) cell_gallery2_pane_g5

0xa3fe,	// (0x00097b93) grid_highlight_pane_cp10

0x66b2,	// (0x00093e47) popup_vitu2_match_list_window_ParamLimits

0x66c9,	// (0x00093e5e) popup_vitu2_query_window_ParamLimits

0x66c9,	// (0x00093e5e) popup_vitu2_query_window

0x99fb,	// (0x00097190) bg_vitu2_candi_button_pane

0xd9e6,	// (0x0009b17b) cell_vitu2_dropdown_list_char_pane_g1_copy1

0xd9ef,	// (0x0009b184) cell_vitu2_dropdown_list_char_pane_g2_copy1

0xd9f8,	// (0x0009b18d) cell_vitu2_dropdown_list_char_pane_g2_copy2

0xffab,	// (0x0008d740) bg_button_pane_cp015

0x7114,	// (0x000948a9) bg_button_pane_cp016

0x7127,	// (0x000948bc) bg_button_pane_cp017

0xc9cc,	// (0x0009a161) bg_popup_sub_pane_cp22

0xda19,	// (0x0009b1ae) popup_vitu2_query_window_g1

0xffe0,	// (0x0008d775) popup_vitu2_query_window_g2

0x0002,

0xfa23,	// (0x0009d1b8) popup_vitu2_query_window_g

0xffff,	// (0x0008d794) popup_vitu2_query_window_t1_ParamLimits

0xffff,	// (0x0008d794) popup_vitu2_query_window_t1

0x0034,	// (0x0008d7c9) popup_vitu2_query_window_t2_ParamLimits

0x0034,	// (0x0008d7c9) popup_vitu2_query_window_t2

0x0046,	// (0x0008d7db) popup_vitu2_query_window_t3_ParamLimits

0x0046,	// (0x0008d7db) popup_vitu2_query_window_t3

0x714b,	// (0x000948e0) popup_vitu2_query_window_t4_ParamLimits

0x714b,	// (0x000948e0) popup_vitu2_query_window_t4

0x716c,	// (0x00094901) popup_vitu2_query_window_t5_ParamLimits

0x716c,	// (0x00094901) popup_vitu2_query_window_t5

0x0006,

0xfa2a,	// (0x0009d1bf) popup_vitu2_query_window_t_ParamLimits

0xfa2a,	// (0x0009d1bf) popup_vitu2_query_window_t

0xd8b1,	// (0x0009b046) main_cset_text_pane

0x6b23,	// (0x000942b8) aid_area_touch_slider_ParamLimits

0x6b3f,	// (0x000942d4) cset_slider_pane_ParamLimits

0x6b69,	// (0x000942fe) main_cset_slider_pane_g1_ParamLimits

0x6b7e,	// (0x00094313) main_cset_slider_pane_g2_ParamLimits

0xd8d2,	// (0x0009b067) main_cset_slider_pane_g3_ParamLimits

0xd8d2,	// (0x0009b067) main_cset_slider_pane_g3

0x6b93,	// (0x00094328) main_cset_slider_pane_g4_ParamLimits

0x6b93,	// (0x00094328) main_cset_slider_pane_g4

0x6ba2,	// (0x00094337) main_cset_slider_pane_g5_ParamLimits

0x6ba2,	// (0x00094337) main_cset_slider_pane_g5

0x6bb0,	// (0x00094345) main_cset_slider_pane_g6_ParamLimits

0x6bb0,	// (0x00094345) main_cset_slider_pane_g6

0xf97d,	// (0x0009d112) main_cset_slider_pane_g_ParamLimits

0xd902,	// (0x0009b097) main_cset_slider_pane_t1_ParamLimits

0x6c40,	// (0x000943d5) main_cset_slider_pane_t2_ParamLimits

0x6c5a,	// (0x000943ef) main_cset_slider_pane_t3_ParamLimits

0x6c74,	// (0x00094409) main_cset_slider_pane_t4_ParamLimits

0x6c8e,	// (0x00094423) main_cset_slider_pane_t5_ParamLimits

0x6cac,	// (0x00094441) main_cset_slider_pane_t6_ParamLimits

0x6cc3,	// (0x00094458) main_cset_slider_pane_t7_ParamLimits

0x6cf1,	// (0x00094486) main_cset_slider_pane_t8_ParamLimits

0x6cf1,	// (0x00094486) main_cset_slider_pane_t8

0x6d19,	// (0x000944ae) main_cset_slider_pane_t9_ParamLimits

0x6d19,	// (0x000944ae) main_cset_slider_pane_t9

0x6d41,	// (0x000944d6) main_cset_slider_pane_t10_ParamLimits

0x6d41,	// (0x000944d6) main_cset_slider_pane_t10

0x6d69,	// (0x000944fe) main_cset_slider_pane_t11_ParamLimits

0x6d69,	// (0x000944fe) main_cset_slider_pane_t11

0x6d93,	// (0x00094528) main_cset_slider_pane_t12_ParamLimits

0x6d93,	// (0x00094528) main_cset_slider_pane_t12

0x6db0,	// (0x00094545) main_cset_slider_pane_t13_ParamLimits

0x6db0,	// (0x00094545) main_cset_slider_pane_t13

0xf9a2,	// (0x0009d137) main_cset_slider_pane_t_ParamLimits

0x99fb,	// (0x00097190) bg_popup_sub_pane_cp011

0xda25,	// (0x0009b1ba) main_cset_text_pane_g1

0xda2d,	// (0x0009b1c2) main_cset_text_pane_t1

0xda3b,	// (0x0009b1d0) main_cset_text_pane_t2

0xda49,	// (0x0009b1de) main_cset_text_pane_t3

0xda57,	// (0x0009b1ec) main_cset_text_pane_t4

0xda65,	// (0x0009b1fa) main_cset_text_pane_t5

0xda73,	// (0x0009b208) main_cset_text_pane_t6

0xda81,	// (0x0009b216) main_cset_text_pane_t7

0x0006,

0xfa39,	// (0x0009d1ce) main_cset_text_pane_t

0x99fb,	// (0x00097190) main_cam4_burst_pane

0x99fb,	// (0x00097190) main_cam5_pane

0x6a5a,	// (0x000941ef) bg_button_pane_cp019

0x6a63,	// (0x000941f8) bg_button_pane_cp020

0xd8de,	// (0x0009b073) main_cset_slider_pane_g7_ParamLimits

0xd8de,	// (0x0009b073) main_cset_slider_pane_g7

0xd8ea,	// (0x0009b07f) main_cset_slider_pane_g8_ParamLimits

0xd8ea,	// (0x0009b07f) main_cset_slider_pane_g8

0x6bc4,	// (0x00094359) main_cset_slider_pane_g9_ParamLimits

0x6bc4,	// (0x00094359) main_cset_slider_pane_g9

0x6bd0,	// (0x00094365) main_cset_slider_pane_g10_ParamLimits

0x6bd0,	// (0x00094365) main_cset_slider_pane_g10

0x6bdc,	// (0x00094371) main_cset_slider_pane_g11_ParamLimits

0x6bdc,	// (0x00094371) main_cset_slider_pane_g11

0x6be8,	// (0x0009437d) main_cset_slider_pane_g12_ParamLimits

0x6be8,	// (0x0009437d) main_cset_slider_pane_g12

0x6bf4,	// (0x00094389) main_cset_slider_pane_g13_ParamLimits

0x6bf4,	// (0x00094389) main_cset_slider_pane_g13

0x6c00,	// (0x00094395) main_cset_slider_pane_g14_ParamLimits

0x6c00,	// (0x00094395) main_cset_slider_pane_g14

0x6c0c,	// (0x000943a1) main_cset_slider_pane_g15_ParamLimits

0x6c0c,	// (0x000943a1) main_cset_slider_pane_g15

0xd930,	// (0x0009b0c5) main_cset_slider_pane_t14_ParamLimits

0xd930,	// (0x0009b0c5) main_cset_slider_pane_t14

0xd969,	// (0x0009b0fe) main_cset_slider_pane_t15_ParamLimits

0xd969,	// (0x0009b0fe) main_cset_slider_pane_t15

0x718d,	// (0x00094922) aid_cam4_burst_size_cell_ParamLimits

0x718d,	// (0x00094922) aid_cam4_burst_size_cell

0x71ad,	// (0x00094942) grid_cam4_burst_pane_ParamLimits

0x71ad,	// (0x00094942) grid_cam4_burst_pane

0x71e7,	// (0x0009497c) linegrid_cam4_burst_pane_ParamLimits

0x71e7,	// (0x0009497c) linegrid_cam4_burst_pane

0xda8f,	// (0x0009b224) scroll_pane_cp30_ParamLimits

0xda8f,	// (0x0009b224) scroll_pane_cp30

0x7209,	// (0x0009499e) cell_cam4_burst_pane_ParamLimits

0x7209,	// (0x0009499e) cell_cam4_burst_pane

0xda9b,	// (0x0009b230) linegrid_cam4_burst_pane_g1_ParamLimits

0xda9b,	// (0x0009b230) linegrid_cam4_burst_pane_g1

0x725e,	// (0x000949f3) linegrid_cam4_burst_pane_g2_ParamLimits

0x725e,	// (0x000949f3) linegrid_cam4_burst_pane_g2

0xdaa8,	// (0x0009b23d) linegrid_cam4_burst_pane_g3_ParamLimits

0xdaa8,	// (0x0009b23d) linegrid_cam4_burst_pane_g3

0x0002,

0xfa48,	// (0x0009d1dd) linegrid_cam4_burst_pane_g_ParamLimits

0xfa48,	// (0x0009d1dd) linegrid_cam4_burst_pane_g

0x726f,	// (0x00094a04) linegrid_cam4_burst_pane_g3_copy1_ParamLimits

0x726f,	// (0x00094a04) linegrid_cam4_burst_pane_g3_copy1

0xdab5,	// (0x0009b24a) linegrid_cam4_burst_pane_g4_ParamLimits

0xdab5,	// (0x0009b24a) linegrid_cam4_burst_pane_g4

0x728d,	// (0x00094a22) linegrid_cam4_burst_pane_g5_ParamLimits

0x728d,	// (0x00094a22) linegrid_cam4_burst_pane_g5

0x729e,	// (0x00094a33) linegrid_cam4_burst_pane_g6_ParamLimits

0x729e,	// (0x00094a33) linegrid_cam4_burst_pane_g6

0xdac2,	// (0x0009b257) linegrid_cam4_burst_pane_g7_ParamLimits

0xdac2,	// (0x0009b257) linegrid_cam4_burst_pane_g7

0x72b5,	// (0x00094a4a) cell_cam4_burst_pane_g1

0xdadb,	// (0x0009b270) main_cam5_pane_t1_ParamLimits

0xdadb,	// (0x0009b270) main_cam5_pane_t1

0xdaed,	// (0x0009b282) main_cam5_pane_t2_ParamLimits

0xdaed,	// (0x0009b282) main_cam5_pane_t2

0xdaff,	// (0x0009b294) main_cam5_pane_t3_ParamLimits

0xdaff,	// (0x0009b294) main_cam5_pane_t3

0xdb11,	// (0x0009b2a6) main_cam5_pane_t4_ParamLimits

0xdb11,	// (0x0009b2a6) main_cam5_pane_t4

0xdb29,	// (0x0009b2be) main_cam5_pane_t5_ParamLimits

0xdb29,	// (0x0009b2be) main_cam5_pane_t5

0xdb3d,	// (0x0009b2d2) main_cam5_pane_t6_ParamLimits

0xdb3d,	// (0x0009b2d2) main_cam5_pane_t6

0xdb51,	// (0x0009b2e6) main_cam5_pane_t7_ParamLimits

0xdb51,	// (0x0009b2e6) main_cam5_pane_t7

0xdb63,	// (0x0009b2f8) main_cam5_pane_t8_ParamLimits

0xdb63,	// (0x0009b2f8) main_cam5_pane_t8

0xdb81,	// (0x0009b316) main_cam5_pane_t9_ParamLimits

0xdb81,	// (0x0009b316) main_cam5_pane_t9

0xdb93,	// (0x0009b328) main_cam5_pane_t10_ParamLimits

0xdb93,	// (0x0009b328) main_cam5_pane_t10

0xdba5,	// (0x0009b33a) main_cam5_pane_t11_ParamLimits

0xdba5,	// (0x0009b33a) main_cam5_pane_t11

0xdbb9,	// (0x0009b34e) main_cam5_pane_t12_ParamLimits

0xdbb9,	// (0x0009b34e) main_cam5_pane_t12

0xdbd0,	// (0x0009b365) main_cam5_pane_t13_ParamLimits

0xdbd0,	// (0x0009b365) main_cam5_pane_t13

0x000c,

0xfa54,	// (0x0009d1e9) main_cam5_pane_t_ParamLimits

0xfa54,	// (0x0009d1e9) main_cam5_pane_t

0x0c02,	// (0x0008e397) popup_scut_keymap_window_ParamLimits

0x0c02,	// (0x0008e397) popup_scut_keymap_window

0x72c8,	// (0x00094a5d) aid_size_cell_brow_shortcut

0xa3fe,	// (0x00097b93) bg_popup_window_pane_cp010

0x72d4,	// (0x00094a69) grid_scut_pane

0x72e0,	// (0x00094a75) cell_scut_pane_ParamLimits

0x72e0,	// (0x00094a75) cell_scut_pane

0x72f9,	// (0x00094a8e) cell_scut_pane_g1

0xdbf3,	// (0x0009b388) cell_scut_pane_t1

0xdc02,	// (0x0009b397) cell_scut_pane_t2

0x7302,	// (0x00094a97) cell_scut_pane_t3

0x0002,

0xfa6f,	// (0x0009d204) cell_scut_pane_t

0x5046,	// (0x000927db) main_mup3_pane_g8_ParamLimits

0x5046,	// (0x000927db) main_mup3_pane_g8

0x65af,	// (0x00093d44) area_vitu2_query_pane_ParamLimits

0x65af,	// (0x00093d44) area_vitu2_query_pane

0xffbf,	// (0x0008d754) input_focus_pane_cp08

0xdc11,	// (0x0009b3a6) area_vitu2_query_pane_g1

0x00c4,	// (0x0008d859) area_vitu2_query_pane_g2

0x0001,

0xfa76,	// (0x0009d20b) area_vitu2_query_pane_g

0x7310,	// (0x00094aa5) area_vitu2_query_pane_t1_ParamLimits

0x7310,	// (0x00094aa5) area_vitu2_query_pane_t1

0x7324,	// (0x00094ab9) area_vitu2_query_pane_t2_ParamLimits

0x7324,	// (0x00094ab9) area_vitu2_query_pane_t2

0x00d7,	// (0x0008d86c) area_vitu2_query_pane_t3_ParamLimits

0x00d7,	// (0x0008d86c) area_vitu2_query_pane_t3

0x7338,	// (0x00094acd) area_vitu2_query_pane_t4_ParamLimits

0x7338,	// (0x00094acd) area_vitu2_query_pane_t4

0x7360,	// (0x00094af5) area_vitu2_query_pane_t5_ParamLimits

0x7360,	// (0x00094af5) area_vitu2_query_pane_t5

0x7388,	// (0x00094b1d) area_vitu2_query_pane_t6_ParamLimits

0x7388,	// (0x00094b1d) area_vitu2_query_pane_t6

0x0006,

0xfa7b,	// (0x0009d210) area_vitu2_query_pane_t_ParamLimits

0xfa7b,	// (0x0009d210) area_vitu2_query_pane_t

0x73d4,	// (0x00094b69) bg_button_pane_cp018

0x73e2,	// (0x00094b77) bg_button_pane_cp021

0x00ff,	// (0x0008d894) bg_button_pane_cp022

0x0110,	// (0x0008d8a5) input_focus_pane_cp09

0xb3e8,	// (0x00098b7d) aid_size_touch_mv_arrow_left

0xb413,	// (0x00098ba8) aid_size_touch_mv_arrow_right

0x6c24,	// (0x000943b9) main_cset_slider_pane_g16_ParamLimits

0x6c24,	// (0x000943b9) main_cset_slider_pane_g16

0x6c32,	// (0x000943c7) main_cset_slider_pane_g17_ParamLimits

0x6c32,	// (0x000943c7) main_cset_slider_pane_g17

0x72b5,	// (0x00094a4a) cell_cam4_burst_pane_g1_ParamLimits

0x99fb,	// (0x00097190) compa_mode_pane

0x6e43,	// (0x000945d8) popup_vtel_slider_window_g3_ParamLimits

0x6e43,	// (0x000945d8) popup_vtel_slider_window_g3

0x6e5a,	// (0x000945ef) popup_vtel_slider_window_g4_ParamLimits

0x6e5a,	// (0x000945ef) popup_vtel_slider_window_g4

0x6e71,	// (0x00094606) popup_vtel_slider_window_t1_ParamLimits

0x6e71,	// (0x00094606) popup_vtel_slider_window_t1

0x99fb,	// (0x00097190) main_cl_pane

0xa663,	// (0x00097df8) popup_imed_adjust2_window_ParamLimits

0xc9cc,	// (0x0009a161) bg_tb_trans_pane_cp05_ParamLimits

0xd308,	// (0x0009aa9d) popup_imed_adjust2_window_g1_ParamLimits

0xd317,	// (0x0009aaac) popup_imed_adjust2_window_g2_ParamLimits

0xd317,	// (0x0009aaac) popup_imed_adjust2_window_g2

0xd323,	// (0x0009aab8) popup_imed_adjust2_window_g3_ParamLimits

0xd323,	// (0x0009aab8) popup_imed_adjust2_window_g3

0x0002,

0xf7e2,	// (0x0009cf77) popup_imed_adjust2_window_g_ParamLimits

0xf7e2,	// (0x0009cf77) popup_imed_adjust2_window_g

0xd32f,	// (0x0009aac4) popup_imed_adjust2_window_t1_ParamLimits

0xd347,	// (0x0009aadc) slider_imed_adjust_pane_ParamLimits

0xd35b,	// (0x0009aaf0) slider_imed_adjust_pane_g1_ParamLimits

0xd36b,	// (0x0009ab00) slider_imed_adjust_pane_g2_ParamLimits

0xd37b,	// (0x0009ab10) slider_imed_adjust_pane_g3_ParamLimits

0xd38c,	// (0x0009ab21) slider_imed_adjust_pane_g4_ParamLimits

0xf7e9,	// (0x0009cf7e) slider_imed_adjust_pane_g_ParamLimits

0x632e,	// (0x00093ac3) aid_touch_area_cam4_ParamLimits

0x632e,	// (0x00093ac3) aid_touch_area_cam4

0xaa56,	// (0x000981eb) battery_pane_cp01

0x6401,	// (0x00093b96) main_camera4_pane_g6_ParamLimits

0x6401,	// (0x00093b96) main_camera4_pane_g6

0x642b,	// (0x00093bc0) main_camera4_pane_t2_ParamLimits

0x642b,	// (0x00093bc0) main_camera4_pane_t2

0x0001,

0xf8f0,	// (0x0009d085) main_camera4_pane_t_ParamLimits

0xf8f0,	// (0x0009d085) main_camera4_pane_t

0x6460,	// (0x00093bf5) aid_touch_area_vid4_ParamLimits

0x6460,	// (0x00093bf5) aid_touch_area_vid4

0x64b4,	// (0x00093c49) main_video4_pane_g5_ParamLimits

0x64b4,	// (0x00093c49) main_video4_pane_g5

0x64d9,	// (0x00093c6e) vid4_progress_pane_ParamLimits

0x64d9,	// (0x00093c6e) vid4_progress_pane

0xd8f6,	// (0x0009b08b) main_cset_slider_pane_g18_ParamLimits

0xd8f6,	// (0x0009b08b) main_cset_slider_pane_g18

0xdacf,	// (0x0009b264) cell_cam4_burst_pane_g2_ParamLimits

0xdacf,	// (0x0009b264) cell_cam4_burst_pane_g2

0x0001,

0xfa4f,	// (0x0009d1e4) cell_cam4_burst_pane_g_ParamLimits

0xfa4f,	// (0x0009d1e4) cell_cam4_burst_pane_g

0xa1ea,	// (0x0009797f) bg_cl_pane_ParamLimits

0xa1ea,	// (0x0009797f) bg_cl_pane

0x73ee,	// (0x00094b83) cl_header_pane_ParamLimits

0x73ee,	// (0x00094b83) cl_header_pane

0x7402,	// (0x00094b97) cl_listscroll_pane_ParamLimits

0x7402,	// (0x00094b97) cl_listscroll_pane

0xdc1d,	// (0x0009b3b2) bg_cl_pane_g1

0xdc25,	// (0x0009b3ba) bg_cl_pane_g2

0xdc2d,	// (0x0009b3c2) bg_cl_pane_g3

0xdc35,	// (0x0009b3ca) bg_cl_pane_g4

0xdc3d,	// (0x0009b3d2) bg_cl_pane_g5

0xdc45,	// (0x0009b3da) bg_cl_pane_g6

0xdc4d,	// (0x0009b3e2) bg_cl_pane_g7

0xdc55,	// (0x0009b3ea) bg_cl_pane_g8

0xdc5d,	// (0x0009b3f2) bg_cl_pane_g9

0x0008,

0xfa8a,	// (0x0009d21f) bg_cl_pane_g

0x7412,	// (0x00094ba7) aid_height_cl_leading_ParamLimits

0x7412,	// (0x00094ba7) aid_height_cl_leading

0x741e,	// (0x00094bb3) aid_height_cl_text_ParamLimits

0x741e,	// (0x00094bb3) aid_height_cl_text

0xac82,	// (0x00098417) bg_cl_header_pane_ParamLimits

0xac82,	// (0x00098417) bg_cl_header_pane

0x743d,	// (0x00094bd2) cl_header_pane_g1_ParamLimits

0x743d,	// (0x00094bd2) cl_header_pane_g1

0x7453,	// (0x00094be8) cl_header_pane_t1_ParamLimits

0x7453,	// (0x00094be8) cl_header_pane_t1

0xdc65,	// (0x0009b3fa) cl_list_pane

0xd8c9,	// (0x0009b05e) hc_scroll_pane_cp01

0xad9f,	// (0x00098534) bg_cl_header_pane_g1

0xd7ab,	// (0x0009af40) bg_cl_header_pane_g2

0xadbf,	// (0x00098554) bg_cl_header_pane_g3

0xd7bb,	// (0x0009af50) bg_cl_header_pane_g4

0xd7b3,	// (0x0009af48) bg_cl_header_pane_g5

0xd9de,	// (0x0009b173) bg_cl_header_pane_g6

0xd7d3,	// (0x0009af68) bg_cl_header_pane_g7

0xd7db,	// (0x0009af70) bg_cl_header_pane_g8

0xd7cb,	// (0x0009af60) bg_cl_header_pane_g9

0x0008,

0xfa9d,	// (0x0009d232) bg_cl_header_pane_g

0x746c,	// (0x00094c01) hc_cl_list_double_graphic_heading_pane_ParamLimits

0x746c,	// (0x00094c01) hc_cl_list_double_graphic_heading_pane

0x747f,	// (0x00094c14) hc_cl_list_single_graphic_pane_ParamLimits

0x747f,	// (0x00094c14) hc_cl_list_single_graphic_pane

0x7497,	// (0x00094c2c) hc_cl_list_single_graphic_pane_g1_ParamLimits

0x7497,	// (0x00094c2c) hc_cl_list_single_graphic_pane_g1

0x74a3,	// (0x00094c38) hc_cl_list_single_graphic_pane_g2_ParamLimits

0x74a3,	// (0x00094c38) hc_cl_list_single_graphic_pane_g2

0x0001,

0xfab0,	// (0x0009d245) hc_cl_list_single_graphic_pane_g_ParamLimits

0xfab0,	// (0x0009d245) hc_cl_list_single_graphic_pane_g

0x74b7,	// (0x00094c4c) hc_cl_list_single_graphic_pane_t1_ParamLimits

0x74b7,	// (0x00094c4c) hc_cl_list_single_graphic_pane_t1

0x7497,	// (0x00094c2c) hc_cl_list_double_graphic_heading_pane_g1_ParamLimits

0x7497,	// (0x00094c2c) hc_cl_list_double_graphic_heading_pane_g1

0x74cc,	// (0x00094c61) hc_cl_list_double_graphic_heading_pane_g2_ParamLimits

0x74cc,	// (0x00094c61) hc_cl_list_double_graphic_heading_pane_g2

0x74e0,	// (0x00094c75) hc_cl_list_double_graphic_heading_pane_g3_ParamLimits

0x74e0,	// (0x00094c75) hc_cl_list_double_graphic_heading_pane_g3

0x0002,

0xfab5,	// (0x0009d24a) hc_cl_list_double_graphic_heading_pane_g_ParamLimits

0xfab5,	// (0x0009d24a) hc_cl_list_double_graphic_heading_pane_g

0x74f4,	// (0x00094c89) hc_cl_list_double_graphic_heading_pane_t1_ParamLimits

0x74f4,	// (0x00094c89) hc_cl_list_double_graphic_heading_pane_t1

0x7509,	// (0x00094c9e) hc_cl_list_double_graphic_heading_pane_t2_ParamLimits

0x7509,	// (0x00094c9e) hc_cl_list_double_graphic_heading_pane_t2

0x0001,

0xfabc,	// (0x0009d251) hc_cl_list_double_graphic_heading_pane_t_ParamLimits

0xfabc,	// (0x0009d251) hc_cl_list_double_graphic_heading_pane_t

0xabb6,	// (0x0009834b) vid4_progress_pane_g1

0xabc6,	// (0x0009835b) vid4_progress_pane_g2

0x751e,	// (0x00094cb3) vid4_progress_pane_g3

0xaa8d,	// (0x00098222) vid4_progress_pane_g4

0x0004,

0xfac1,	// (0x0009d256) vid4_progress_pane_g

0x7530,	// (0x00094cc5) vid4_progress_pane_t1

0xabd6,	// (0x0009836b) vid4_progress_pane_t2

0x0002,

0xfacc,	// (0x0009d261) vid4_progress_pane_t

0x7548,	// (0x00094cdd) wait_bar_pane_cp07

0xcbf1,	// (0x0009a386) blid_firmament_pane_ParamLimits

0xcc34,	// (0x0009a3c9) popup_blid_sat_info2_window_g1

0xcc58,	// (0x0009a3ed) popup_blid_sat_info2_window_t3

0xcc66,	// (0x0009a3fb) popup_blid_sat_info2_window_t4

0xcc74,	// (0x0009a409) popup_blid_sat_info2_window_t5

0xcc82,	// (0x0009a417) popup_blid_sat_info2_window_t6

0xcc92,	// (0x0009a427) popup_blid_sat_info2_window_t7

0xcca0,	// (0x0009a435) popup_blid_sat_info2_window_t8

0xccae,	// (0x0009a443) popup_blid_sat_info2_window_t9

0xccbc,	// (0x0009a451) popup_blid_sat_info2_window_t10

0xcd84,	// (0x0009a519) aid_firma_cardinal_ParamLimits

0xcd98,	// (0x0009a52d) blid_firmament_pane_t1_ParamLimits

0xcdaf,	// (0x0009a544) blid_firmament_pane_t2_ParamLimits

0xcdc6,	// (0x0009a55b) blid_firmament_pane_t3_ParamLimits

0xcddd,	// (0x0009a572) blid_firmament_pane_t4_ParamLimits

0xf6d6,	// (0x0009ce6b) blid_firmament_pane_t_ParamLimits

0xcdf4,	// (0x0009a589) blid_sat_info_pane_ParamLimits

0xac82,	// (0x00098417) main_cam_set_pane_ParamLimits

0x591e,	// (0x000930b3) aid_size_cell_colour_35_ParamLimits

0x593e,	// (0x000930d3) aid_size_cell_colour_112_ParamLimits

0x595e,	// (0x000930f3) aid_size_cell_effect_ParamLimits

0xc9cc,	// (0x0009a161) bg_tb_trans_pane_cp02_ParamLimits

0xb007,	// (0x0009879c) heading_imed_pane_ParamLimits

0x597e,	// (0x00093113) listscroll_imed_pane_ParamLimits

0xbff4,	// (0x00099789) popup_call2_audio_first_window_g5_ParamLimits

0xbff4,	// (0x00099789) popup_call2_audio_first_window_g5

0x5f3b,	// (0x000936d0) aid_size_touch_image3_arrow_left_ParamLimits

0x5f3b,	// (0x000936d0) aid_size_touch_image3_arrow_left

0x5f67,	// (0x000936fc) aid_size_touch_image3_arrow_right_ParamLimits

0x5f67,	// (0x000936fc) aid_size_touch_image3_arrow_right

0xabeb,	// (0x00098380) vid4_progress_pane_t3

0x5c97,	// (0x0009342c) main_hwr_training_symbol_option_pane_ParamLimits

0x5c97,	// (0x0009342c) main_hwr_training_symbol_option_pane

0xd601,	// (0x0009ad96) popup_hwr_training_preview_window_ParamLimits

0xd601,	// (0x0009ad96) popup_hwr_training_preview_window

0x5cb7,	// (0x0009344c) hwr_training_navi_pane_g5_ParamLimits

0x5cb7,	// (0x0009344c) hwr_training_navi_pane_g5

0xd799,	// (0x0009af2e) popup_char_count_window

0xac82,	// (0x00098417) bg_popup_sub_pane_cp20_ParamLimits

0x6f89,	// (0x0009471e) list_vitu2_match_list_pane_ParamLimits

0x6f98,	// (0x0009472d) vitu2_page_scroll_pane_ParamLimits

0x6f98,	// (0x0009472d) vitu2_page_scroll_pane

0xdc6e,	// (0x0009b403) list_single_hwr_training_symbol_option_pane_ParamLimits

0xdc6e,	// (0x0009b403) list_single_hwr_training_symbol_option_pane

0xdc81,	// (0x0009b416) list_single_hwr_training_symbol_option_pane_g1

0xdc89,	// (0x0009b41e) list_single_hwr_training_symbol_option_pane_t1

0xdc97,	// (0x0009b42c) bg_button_pane_cp023

0xdca0,	// (0x0009b435) bg_button_pane_cp024

0x7587,	// (0x00094d1c) vitu2_page_scroll_pane_g1

0x758f,	// (0x00094d24) vitu2_page_scroll_pane_g2

0x0001,

0xfad3,	// (0x0009d268) vitu2_page_scroll_pane_g

0x7599,	// (0x00094d2e) vitu2_page_scroll_pane_t1

0xdcd3,	// (0x0009b468) popup_char_count_window_g1

0xdcdc,	// (0x0009b471) popup_char_count_window_g2

0xdce5,	// (0x0009b47a) popup_char_count_window_g3

0x0002,

0xfad8,	// (0x0009d26d) popup_char_count_window_g

0xdcee,	// (0x0009b483) popup_char_count_window_t1

0x99fb,	// (0x00097190) main_vded2_pane

0xd2f4,	// (0x0009aa89) aid_size_cell_imed_line

0xd2fe,	// (0x0009aa93) grid_imed_line_width_pane

0xab10,	// (0x000982a5) vid4_indicators_pane_g4

0xdcfc,	// (0x0009b491) cell_imed_line_width_pane_ParamLimits

0xdcfc,	// (0x0009b491) cell_imed_line_width_pane

0xdd12,	// (0x0009b4a7) cell_imed_line_width_pane_g1

0xd17d,	// (0x0009a912) cell_imed_line_width_pane_g2

0x0001,

0xfadf,	// (0x0009d274) cell_imed_line_width_pane_g

0x75a8,	// (0x00094d3d) main_vded2_pane_g1_ParamLimits

0x75a8,	// (0x00094d3d) main_vded2_pane_g1

0x75c3,	// (0x00094d58) main_vded2_pane_g2_ParamLimits

0x75c3,	// (0x00094d58) main_vded2_pane_g2

0x0001,

0xfae4,	// (0x0009d279) main_vded2_pane_g_ParamLimits

0xfae4,	// (0x0009d279) main_vded2_pane_g

0x75d5,	// (0x00094d6a) vded2_slider_pane_ParamLimits

0x75d5,	// (0x00094d6a) vded2_slider_pane

0x75e5,	// (0x00094d7a) aid_size_touch_vded2_end

0x75ef,	// (0x00094d84) aid_size_touch_vded2_playhead

0xdd1b,	// (0x0009b4b0) aid_size_touch_vded2_start

0xdd23,	// (0x0009b4b8) vded2_slider_bg_pane

0xdd2c,	// (0x0009b4c1) vded2_slider_pane_g1

0xdd35,	// (0x0009b4ca) vded2_slider_pane_g2

0x75f9,	// (0x00094d8e) vded2_slider_pane_g3

0x0002,

0xfae9,	// (0x0009d27e) vded2_slider_pane_g

0xdd3d,	// (0x0009b4d2) vded2_slider_bg_pane_g1

0xdd46,	// (0x0009b4db) vded2_slider_bg_pane_g2

0xdd4f,	// (0x0009b4e4) vded2_slider_bg_pane_g3

0x0002,

0xfaf0,	// (0x0009d285) vded2_slider_bg_pane_g

0x3564,	// (0x00090cf9) aid_postcard_touch_down_pane_ParamLimits

0x3564,	// (0x00090cf9) aid_postcard_touch_down_pane

0x357c,	// (0x00090d11) aid_postcard_touch_up_pane_ParamLimits

0x357c,	// (0x00090d11) aid_postcard_touch_up_pane

0x99fb,	// (0x00097190) main_blid2_pane

0xa645,	// (0x00097dda) popup_blid2_search_window

0x99fb,	// (0x00097190) blid2_gps_pane

0x99fb,	// (0x00097190) blid2_navig_pane

0x99fb,	// (0x00097190) blid2_search_pane

0x99fb,	// (0x00097190) blid2_tripm_pane

0x7604,	// (0x00094d99) blid2_search_pane_g1_ParamLimits

0x7604,	// (0x00094d99) blid2_search_pane_g1

0x7617,	// (0x00094dac) blid2_search_pane_t1_ParamLimits

0x7617,	// (0x00094dac) blid2_search_pane_t1

0x7629,	// (0x00094dbe) aid_size_cell_blid2_gps_ParamLimits

0x7629,	// (0x00094dbe) aid_size_cell_blid2_gps

0x7641,	// (0x00094dd6) blid2_gps_pane_g1_ParamLimits

0x7641,	// (0x00094dd6) blid2_gps_pane_g1

0x7655,	// (0x00094dea) grid_blid2_satellite_pane_ParamLimits

0x7655,	// (0x00094dea) grid_blid2_satellite_pane

0x766d,	// (0x00094e02) blid2_navig_pane_g1_ParamLimits

0x766d,	// (0x00094e02) blid2_navig_pane_g1

0x7679,	// (0x00094e0e) blid2_navig_pane_t1_ParamLimits

0x7679,	// (0x00094e0e) blid2_navig_pane_t1

0x7694,	// (0x00094e29) blid2_navig_pane_t2_ParamLimits

0x7694,	// (0x00094e29) blid2_navig_pane_t2

0x0001,

0xfaf7,	// (0x0009d28c) blid2_navig_pane_t_ParamLimits

0xfaf7,	// (0x0009d28c) blid2_navig_pane_t

0x76af,	// (0x00094e44) blid2_navig_ring_pane_ParamLimits

0x76af,	// (0x00094e44) blid2_navig_ring_pane

0x76ca,	// (0x00094e5f) blid2_speed_pane_ParamLimits

0x76ca,	// (0x00094e5f) blid2_speed_pane

0x76d6,	// (0x00094e6b) blid2_tripm_pane_g1_ParamLimits

0x76d6,	// (0x00094e6b) blid2_tripm_pane_g1

0x76f1,	// (0x00094e86) blid2_tripm_pane_g2_ParamLimits

0x76f1,	// (0x00094e86) blid2_tripm_pane_g2

0x7705,	// (0x00094e9a) blid2_tripm_pane_g3_ParamLimits

0x7705,	// (0x00094e9a) blid2_tripm_pane_g3

0x7719,	// (0x00094eae) blid2_tripm_pane_g4_ParamLimits

0x7719,	// (0x00094eae) blid2_tripm_pane_g4

0x772d,	// (0x00094ec2) blid2_tripm_pane_g5_ParamLimits

0x772d,	// (0x00094ec2) blid2_tripm_pane_g5

0x0005,

0xfafc,	// (0x0009d291) blid2_tripm_pane_g_ParamLimits

0xfafc,	// (0x0009d291) blid2_tripm_pane_g

0x7753,	// (0x00094ee8) blid2_tripm_pane_t1_ParamLimits

0x7753,	// (0x00094ee8) blid2_tripm_pane_t1

0x776c,	// (0x00094f01) blid2_tripm_pane_t2_ParamLimits

0x776c,	// (0x00094f01) blid2_tripm_pane_t2

0x7785,	// (0x00094f1a) blid2_tripm_pane_t3_ParamLimits

0x7785,	// (0x00094f1a) blid2_tripm_pane_t3

0x0003,

0xfb09,	// (0x0009d29e) blid2_tripm_pane_t_ParamLimits

0xfb09,	// (0x0009d29e) blid2_tripm_pane_t

0x77cc,	// (0x00094f61) cell_blid2_satellite_pane_ParamLimits

0x77cc,	// (0x00094f61) cell_blid2_satellite_pane

0x77e8,	// (0x00094f7d) cell_blid2_satellite_pane_g1

0xdd58,	// (0x0009b4ed) cell_blid2_satellite_pane_t1

0xce04,	// (0x0009a599) blid2_speed_pane_g1

0xdd66,	// (0x0009b4fb) blid2_speed_pane_t1

0xdd74,	// (0x0009b509) blid2_speed_pane_t2

0x0001,

0xfb12,	// (0x0009d2a7) blid2_speed_pane_t

0xce04,	// (0x0009a599) blid2_navig_ring_pane_g1

0x77f1,	// (0x00094f86) blid2_navig_ring_pane_g2

0x77f9,	// (0x00094f8e) blid2_navig_ring_pane_g3

0x7801,	// (0x00094f96) blid2_navig_ring_pane_g4

0x7809,	// (0x00094f9e) blid2_navig_ring_pane_g5

0x0004,

0xfb17,	// (0x0009d2ac) blid2_navig_ring_pane_g

0x99fb,	// (0x00097190) bg_popup_window_pane_cp011

0xdd82,	// (0x0009b517) popup_blid2_search_window_g1

0xdd8a,	// (0x0009b51f) popup_blid2_search_window_t1

0xdd98,	// (0x0009b52d) popup_blid2_search_window_t2

0x0001,

0xfb22,	// (0x0009d2b7) popup_blid2_search_window_t

0xacae,	// (0x00098443) main_browser_pane_g1

0xa1ea,	// (0x0009797f) main_browser_pane_ParamLimits

0xac82,	// (0x00098417) bg_button_pane_cp011_ParamLimits

0x67e6,	// (0x00093f7b) cell_vitu2_function_pane_g1_ParamLimits

0xc9cc,	// (0x0009a161) bg_popup_sub_pane_cp22_ParamLimits

0xffbf,	// (0x0008d754) input_focus_pane_cp08_ParamLimits

0x713a,	// (0x000948cf) popup_vitu2_query_button_pane_ParamLimits

0x713a,	// (0x000948cf) popup_vitu2_query_button_pane

0xffd6,	// (0x0008d76b) popup_vitu2_query_input_button_pane

0xda19,	// (0x0009b1ae) popup_vitu2_query_window_g1_ParamLimits

0xffe0,	// (0x0008d775) popup_vitu2_query_window_g2_ParamLimits

0xfa23,	// (0x0009d1b8) popup_vitu2_query_window_g_ParamLimits

0x99fb,	// (0x00097190) bg_button_pane_cp026

0x7811,	// (0x00094fa6) popup_vitu2_query_input_button_pane_g1

0x99fb,	// (0x00097190) bg_button_pane_cp025

0xdda6,	// (0x0009b53b) popup_vitu2_query_button_pane_t1

0x4c62,	// (0x000923f7) main_mp3_pane_t6

0x4c70,	// (0x00092405) popup_slider_window_cp01

0xaa74,	// (0x00098209) cam4_battery_pane

0xaac9,	// (0x0009825e) cam4_battery_pane_cp02

0xabae,	// (0x00098343) cam4_battery_pane_cp01

0xabae,	// (0x00098343) cam4_battery_pane_cp03

0xce04,	// (0x0009a599) cam4_battery_pane_g1

0xddb4,	// (0x0009b549) cam4_battery_pane_g2

0x0001,

0xfb27,	// (0x0009d2bc) cam4_battery_pane_g

0xccca,	// (0x0009a45f) popup_blid_sat_info2_window_t11

0xb3e8,	// (0x00098b7d) aid_size_touch_mv_arrow_left_ParamLimits

0xb413,	// (0x00098ba8) aid_size_touch_mv_arrow_right_ParamLimits

0xb471,	// (0x00098c06) navi_pane_g1_ParamLimits

0xb47d,	// (0x00098c12) navi_pane_g2_ParamLimits

0xb4ab,	// (0x00098c40) navi_pane_g3_ParamLimits

0xf3e8,	// (0x0009cb7d) navi_pane_g_ParamLimits

0x2f7b,	// (0x00090710) navi_pane_mv_t1_ParamLimits

0x598a,	// (0x0009311f) grid_imed_effect_pane_ParamLimits

0x1b0a,	// (0x0008f29f) aid_placing_vt_slider_lsc

0xa49f,	// (0x00097c34) aid_placing_vt_slider_prt

0xac82,	// (0x00098417) bg_tb_trans_pane_cp01_ParamLimits

0xcf4b,	// (0x0009a6e0) popup_image_details_window_g1_ParamLimits

0xcf5e,	// (0x0009a6f3) popup_image_details_window_g2_ParamLimits

0xcf73,	// (0x0009a708) popup_image_details_window_g3_ParamLimits

0xcf73,	// (0x0009a708) popup_image_details_window_g3

0xf71b,	// (0x0009ceb0) popup_image_details_window_g_ParamLimits

0xcf87,	// (0x0009a71c) popup_image_details_window_t1_ParamLimits

0xcf99,	// (0x0009a72e) popup_image_details_window_t2_ParamLimits

0xcfb2,	// (0x0009a747) popup_image_details_window_t3_ParamLimits

0xcfc6,	// (0x0009a75b) popup_image_details_window_t4_ParamLimits

0xcfe1,	// (0x0009a776) popup_image_details_window_t5_ParamLimits

0xf722,	// (0x0009ceb7) popup_image_details_window_t_ParamLimits

0x742a,	// (0x00094bbf) cl_header_name_pane_ParamLimits

0x742a,	// (0x00094bbf) cl_header_name_pane

0x7819,	// (0x00094fae) cl_header_name_pane_t1_ParamLimits

0x7819,	// (0x00094fae) cl_header_name_pane_t1

0x783a,	// (0x00094fcf) cl_header_name_pane_t2_ParamLimits

0x783a,	// (0x00094fcf) cl_header_name_pane_t2

0x787c,	// (0x00095011) cl_header_name_pane_t3_ParamLimits

0x787c,	// (0x00095011) cl_header_name_pane_t3

0x0002,

0xfb2c,	// (0x0009d2c1) cl_header_name_pane_t_ParamLimits

0xfb2c,	// (0x0009d2c1) cl_header_name_pane_t

0xb53a,	// (0x00098ccf) navi_pane_mv_g2_ParamLimits

0xd773,	// (0x0009af08) field_vitu2_entry_pane_g1_ParamLimits

0xd77f,	// (0x0009af14) field_vitu2_entry_pane_g2_ParamLimits

0xd78b,	// (0x0009af20) field_vitu2_entry_pane_g3_ParamLimits

0xd78b,	// (0x0009af20) field_vitu2_entry_pane_g3

0xf922,	// (0x0009d0b7) field_vitu2_entry_pane_g_ParamLimits

0xab45,	// (0x000982da) cell_vitu2_itu_pane_g1_ParamLimits

0x677a,	// (0x00093f0f) cell_vitu2_itu_pane_g2_ParamLimits

0x677a,	// (0x00093f0f) cell_vitu2_itu_pane_g2

0x0001,

0xf92e,	// (0x0009d0c3) cell_vitu2_itu_pane_g_ParamLimits

0xf92e,	// (0x0009d0c3) cell_vitu2_itu_pane_g

0xac82,	// (0x00098417) bg_vkb2_func_pane_cp05_ParamLimits

0xac82,	// (0x00098417) bg_vkb2_func_pane_cp05

0xac82,	// (0x00098417) bg_vkb2_func_pane_cp03

0xac82,	// (0x00098417) bg_vkb2_func_pane_cp04

0xac82,	// (0x00098417) bg_vkb2_func_pane_cp10_ParamLimits

0xac82,	// (0x00098417) bg_vkb2_func_pane_cp10

0x00ff,	// (0x0008d894) bg_vkb2_func_pane_cp08

0x73d4,	// (0x00094b69) bg_vkb2_func_pane_cp06

0x73e2,	// (0x00094b77) bg_vkb2_func_pane_cp07

0xdca9,	// (0x0009b43e) bg_vkb2_func_pane_cp11_ParamLimits

0xdca9,	// (0x0009b43e) bg_vkb2_func_pane_cp11

0xdcbe,	// (0x0009b453) bg_vkb2_func_pane_cp12_ParamLimits

0xdcbe,	// (0x0009b453) bg_vkb2_func_pane_cp12

0x99fb,	// (0x00097190) bg_vkb2_func_pane_cp09

0xd7ab,	// (0x0009af40) bg_vkb2_func_pane_g1

0xadbf,	// (0x00098554) bg_vkb2_func_pane_g2

0xd7b3,	// (0x0009af48) bg_vkb2_func_pane_g3

0xd7bb,	// (0x0009af50) bg_vkb2_func_pane_g4

0xd9de,	// (0x0009b173) bg_vkb2_func_pane_g5

0xd7d3,	// (0x0009af68) bg_vkb2_func_pane_g6

0xd7db,	// (0x0009af70) bg_vkb2_func_pane_g7

0xd7cb,	// (0x0009af60) bg_vkb2_func_pane_g8

0xad9f,	// (0x00098534) bg_vkb2_func_pane_g9

0x0008,

0xfb33,	// (0x0009d2c8) bg_vkb2_func_pane_g

0x7741,	// (0x00094ed6) blid2_tripm_pane_g6_ParamLimits

0x7741,	// (0x00094ed6) blid2_tripm_pane_g6

0xd6bf,	// (0x0009ae54) mp4_progress_pane_g1

0x77b8,	// (0x00094f4d) blid2_tripm_values_pane_ParamLimits

0x77b8,	// (0x00094f4d) blid2_tripm_values_pane

0x78ad,	// (0x00095042) blid2_tripm_values_pane_t1

0x78bb,	// (0x00095050) blid2_tripm_values_pane_t2

0x78c9,	// (0x0009505e) blid2_tripm_values_pane_t3

0x78d7,	// (0x0009506c) blid2_tripm_values_pane_t4

0x78e5,	// (0x0009507a) blid2_tripm_values_pane_t5

0x78f3,	// (0x00095088) blid2_tripm_values_pane_t6

0x7901,	// (0x00095096) blid2_tripm_values_pane_t7

0x790f,	// (0x000950a4) blid2_tripm_values_pane_t8

0x791d,	// (0x000950b2) blid2_tripm_values_pane_t9

0x0008,

0xfb46,	// (0x0009d2db) blid2_tripm_values_pane_t

0x1b47,	// (0x0008f2dc) call_video_pane_t1_ParamLimits

0x1b61,	// (0x0008f2f6) call_video_pane_t2_ParamLimits

0xf26a,	// (0x0009c9ff) call_video_pane_t_ParamLimits

0xfde5,	// (0x0008d57a) msg_header_pane_g1_ParamLimits

0xb726,	// (0x00098ebb) msg_header_pane_g2_ParamLimits

0xb726,	// (0x00098ebb) msg_header_pane_g2

0x0001,

0xf48b,	// (0x0009cc20) msg_header_pane_g_ParamLimits

0xf48b,	// (0x0009cc20) msg_header_pane_g

0xa1ea,	// (0x0009797f) main_clock2_pane_ParamLimits

0x5687,	// (0x00092e1c) grid_clock2_toolbar_pane_ParamLimits

0x5687,	// (0x00092e1c) grid_clock2_toolbar_pane

0x5687,	// (0x00092e1c) listscroll_clock2_pane_ParamLimits

0x5687,	// (0x00092e1c) listscroll_clock2_pane

0x5766,	// (0x00092efb) main_clock2_pane_t3_ParamLimits

0x5766,	// (0x00092efb) main_clock2_pane_t3

0x5789,	// (0x00092f1e) main_clock2_pane_t4_ParamLimits

0x5789,	// (0x00092f1e) main_clock2_pane_t4

0xddbe,	// (0x0009b553) cell_clock2_toolbar_pane

0xddc6,	// (0x0009b55b) cell_clock2_toolbar_pane_cp01

0xddc6,	// (0x0009b55b) cell_clock2_toolbar_pane_cp02

0xddce,	// (0x0009b563) cell_clock2_toolbar_pane_cp03

0xddd6,	// (0x0009b56b) list_clock2_pane

0xb36d,	// (0x00098b02) scroll_pane_cp10

0xddde,	// (0x0009b573) list_single_clock2_pane_ParamLimits

0xddde,	// (0x0009b573) list_single_clock2_pane

0xa3fe,	// (0x00097b93) list_highlight_pane_cp08

0xddeb,	// (0x0009b580) list_single_clock2_pane_t1

0xddf9,	// (0x0009b58e) list_single_clock2_pane_t2

0x0001,

0xfb59,	// (0x0009d2ee) list_single_clock2_pane_t

0x99fb,	// (0x00097190) bg_button_pane_cp10

0xde07,	// (0x0009b59c) cell_clock2_toolbar_pane_g1

0x34f0,	// (0x00090c85) aid_main_viewer_pane_g1_ParamLimits

0x34f0,	// (0x00090c85) aid_main_viewer_pane_g1

0x34fe,	// (0x00090c93) aid_main_viewer_pane_g2_ParamLimits

0x34fe,	// (0x00090c93) aid_main_viewer_pane_g2

0x350c,	// (0x00090ca1) aid_main_viewer_pane_g3_ParamLimits

0x350c,	// (0x00090ca1) aid_main_viewer_pane_g3

0x351b,	// (0x00090cb0) aid_main_viewer_pane_g4_ParamLimits

0x351b,	// (0x00090cb0) aid_main_viewer_pane_g4

0x0003,

0xf49c,	// (0x0009cc31) aid_main_viewer_pane_g_ParamLimits

0xf49c,	// (0x0009cc31) aid_main_viewer_pane_g

0x3e76,	// (0x0009160b) main_calc_pane_ParamLimits

0x3e8a,	// (0x0009161f) main_dialer2_pane_ParamLimits

0x99fb,	// (0x00097190) main_cam6_pane

0x99fb,	// (0x00097190) main_vid6_pane

0x5693,	// (0x00092e28) listscroll_gen_pane_cp06_ParamLimits

0x5693,	// (0x00092e28) listscroll_gen_pane_cp06

0x57ac,	// (0x00092f41) main_clock2_pane_t5_ParamLimits

0x57ac,	// (0x00092f41) main_clock2_pane_t5

0x580a,	// (0x00092f9f) aid_call2_pane_cp10_ParamLimits

0x581c,	// (0x00092fb1) aid_call_pane_cp10_ParamLimits

0xb3dc,	// (0x00098b71) popup_clock_analogue_window_cp10_g1_ParamLimits

0xb3dc,	// (0x00098b71) popup_clock_analogue_window_cp10_g2_ParamLimits

0x582e,	// (0x00092fc3) popup_clock_analogue_window_cp10_g3_ParamLimits

0x582e,	// (0x00092fc3) popup_clock_analogue_window_cp10_g4_ParamLimits

0xb3dc,	// (0x00098b71) popup_clock_analogue_window_cp10_g5_ParamLimits

0xf7d7,	// (0x0009cf6c) popup_clock_analogue_window_cp10_g_ParamLimits

0x5844,	// (0x00092fd9) popup_clock_analogue_window_cp10_t1_ParamLimits

0x5ee8,	// (0x0009367d) cell_dialer2_keypad_pane_g2_ParamLimits

0x5ee8,	// (0x0009367d) cell_dialer2_keypad_pane_g2

0x0001,

0xf8c1,	// (0x0009d056) cell_dialer2_keypad_pane_g_ParamLimits

0xf8c1,	// (0x0009d056) cell_dialer2_keypad_pane_g

0x5f04,	// (0x00093699) cell_dialer2_keypad_pane_t1

0x6b15,	// (0x000942aa) main_cset_text2_pane_ParamLimits

0x6b15,	// (0x000942aa) main_cset_text2_pane

0xdc11,	// (0x0009b3a6) area_vitu2_query_pane_g1_ParamLimits

0x00c4,	// (0x0008d859) area_vitu2_query_pane_g2_ParamLimits

0xfa76,	// (0x0009d20b) area_vitu2_query_pane_g_ParamLimits

0x73b0,	// (0x00094b45) area_vitu2_query_pane_t7_ParamLimits

0x73b0,	// (0x00094b45) area_vitu2_query_pane_t7

0x73d4,	// (0x00094b69) bg_button_pane_cp018_ParamLimits

0x73e2,	// (0x00094b77) bg_button_pane_cp021_ParamLimits

0x00ff,	// (0x0008d894) bg_button_pane_cp022_ParamLimits

0x00ff,	// (0x0008d894) bg_vkb2_func_pane_cp08_ParamLimits

0x73d4,	// (0x00094b69) bg_vkb2_func_pane_cp06_ParamLimits

0x73e2,	// (0x00094b77) bg_vkb2_func_pane_cp07_ParamLimits

0x0110,	// (0x0008d8a5) input_focus_pane_cp09_ParamLimits

0xac08,	// (0x0009839d) cam6_autofocus_pane_ParamLimits

0xac08,	// (0x0009839d) cam6_autofocus_pane

0x792b,	// (0x000950c0) cam6_image_uncrop_pane_ParamLimits

0x792b,	// (0x000950c0) cam6_image_uncrop_pane

0x793a,	// (0x000950cf) cam6_indi_pane_ParamLimits

0x793a,	// (0x000950cf) cam6_indi_pane

0x7950,	// (0x000950e5) cam6_mode_pane_ParamLimits

0x7950,	// (0x000950e5) cam6_mode_pane

0x7962,	// (0x000950f7) cam6_timer_pane_ParamLimits

0x7962,	// (0x000950f7) cam6_timer_pane

0x796e,	// (0x00095103) cam6_zoom_pane_ParamLimits

0x796e,	// (0x00095103) cam6_zoom_pane

0x797c,	// (0x00095111) cam6_mode_pane_g1_ParamLimits

0x797c,	// (0x00095111) cam6_mode_pane_g1

0x798c,	// (0x00095121) cam6_mode_pane_g2_ParamLimits

0x798c,	// (0x00095121) cam6_mode_pane_g2

0x799c,	// (0x00095131) cam6_mode_pane_g3_ParamLimits

0x799c,	// (0x00095131) cam6_mode_pane_g3

0x79ac,	// (0x00095141) cam6_mode_pane_g4_ParamLimits

0x79ac,	// (0x00095141) cam6_mode_pane_g4

0x0003,

0xfb5e,	// (0x0009d2f3) cam6_mode_pane_g_ParamLimits

0xfb5e,	// (0x0009d2f3) cam6_mode_pane_g

0xde0f,	// (0x0009b5a4) bg_tb_trans_pane_cp08_ParamLimits

0xde0f,	// (0x0009b5a4) bg_tb_trans_pane_cp08

0xde1d,	// (0x0009b5b2) cam6_battery_pane_ParamLimits

0xde1d,	// (0x0009b5b2) cam6_battery_pane

0xde33,	// (0x0009b5c8) cam6_indi_pane_g1_ParamLimits

0xde33,	// (0x0009b5c8) cam6_indi_pane_g1

0xde45,	// (0x0009b5da) cam6_indi_pane_g2_ParamLimits

0xde45,	// (0x0009b5da) cam6_indi_pane_g2

0xde57,	// (0x0009b5ec) cam6_indi_pane_g3_ParamLimits

0xde57,	// (0x0009b5ec) cam6_indi_pane_g3

0x0002,

0xfb67,	// (0x0009d2fc) cam6_indi_pane_g_ParamLimits

0xfb67,	// (0x0009d2fc) cam6_indi_pane_g

0xde69,	// (0x0009b5fe) cam6_indi_pane_t1_ParamLimits

0xde69,	// (0x0009b5fe) cam6_indi_pane_t1

0x6521,	// (0x00093cb6) cam6_autofocus_pane_g1

0x6529,	// (0x00093cbe) cam6_autofocus_pane_g2

0x6531,	// (0x00093cc6) cam6_autofocus_pane_g3

0x6539,	// (0x00093cce) cam6_autofocus_pane_g4

0x0003,

0xfb6e,	// (0x0009d303) cam6_autofocus_pane_g

0xde8f,	// (0x0009b624) cam6_timer_pane_g1

0xde97,	// (0x0009b62c) cam6_timer_pane_t1

0xdea5,	// (0x0009b63a) cam6_zoom_cont_pane

0xdead,	// (0x0009b642) cam6_zoom_pane_g1

0xdeb5,	// (0x0009b64a) cam6_zoom_pane_g2

0x79bc,	// (0x00095151) cam6_zoom_pane_g3

0x0002,

0xfb77,	// (0x0009d30c) cam6_zoom_pane_g

0xce04,	// (0x0009a599) cam6_battery_pane_g1

0xce04,	// (0x0009a599) cam6_battery_pane_g2

0x0001,

0xf6df,	// (0x0009ce74) cam6_battery_pane_g

0xdebd,	// (0x0009b652) cam6_zoom_cont_pane_g1

0xdec6,	// (0x0009b65b) cam6_zoom_cont_pane_g2

0xdecf,	// (0x0009b664) cam6_zoom_cont_pane_g3

0x0002,

0xfb7e,	// (0x0009d313) cam6_zoom_cont_pane_g

0x79d9,	// (0x0009516e) cam6_mode_pane_cp_ParamLimits

0x79d9,	// (0x0009516e) cam6_mode_pane_cp

0x796e,	// (0x00095103) cam6_zoom_pane_cp_ParamLimits

0x796e,	// (0x00095103) cam6_zoom_pane_cp

0x79eb,	// (0x00095180) vid6_image_uncrop_cif_pane_ParamLimits

0x79eb,	// (0x00095180) vid6_image_uncrop_cif_pane

0x79fb,	// (0x00095190) vid6_image_uncrop_nhd_pane_ParamLimits

0x79fb,	// (0x00095190) vid6_image_uncrop_nhd_pane

0x792b,	// (0x000950c0) vid6_image_uncrop_vga_pane_ParamLimits

0x792b,	// (0x000950c0) vid6_image_uncrop_vga_pane

0x7a0a,	// (0x0009519f) vid6_image_uncrop_wvga_pane_ParamLimits

0x7a0a,	// (0x0009519f) vid6_image_uncrop_wvga_pane

0x7a19,	// (0x000951ae) vid6_indi_pane_ParamLimits

0x7a19,	// (0x000951ae) vid6_indi_pane

0xde0f,	// (0x0009b5a4) bg_tb_trans_pane_cp09_ParamLimits

0xde0f,	// (0x0009b5a4) bg_tb_trans_pane_cp09

0xdee7,	// (0x0009b67c) cam6_battery_pane_cp_ParamLimits

0xdee7,	// (0x0009b67c) cam6_battery_pane_cp

0xdef3,	// (0x0009b688) vid6_indi_pane_g1_ParamLimits

0xdef3,	// (0x0009b688) vid6_indi_pane_g1

0xdf05,	// (0x0009b69a) vid6_indi_pane_g2_ParamLimits

0xdf05,	// (0x0009b69a) vid6_indi_pane_g2

0xdf17,	// (0x0009b6ac) vid6_indi_pane_g3_ParamLimits

0xdf17,	// (0x0009b6ac) vid6_indi_pane_g3

0xdf2e,	// (0x0009b6c3) vid6_indi_pane_g4_ParamLimits

0xdf2e,	// (0x0009b6c3) vid6_indi_pane_g4

0xdf45,	// (0x0009b6da) vid6_indi_pane_g5_ParamLimits

0xdf45,	// (0x0009b6da) vid6_indi_pane_g5

0x0004,

0xfb85,	// (0x0009d31a) vid6_indi_pane_g_ParamLimits

0xfb85,	// (0x0009d31a) vid6_indi_pane_g

0xdf5f,	// (0x0009b6f4) vid6_indi_pane_t1_ParamLimits

0xdf5f,	// (0x0009b6f4) vid6_indi_pane_t1

0xdf75,	// (0x0009b70a) vid6_indi_pane_t2_ParamLimits

0xdf75,	// (0x0009b70a) vid6_indi_pane_t2

0xdf9d,	// (0x0009b732) vid6_indi_pane_t3_ParamLimits

0xdf9d,	// (0x0009b732) vid6_indi_pane_t3

0xdfc5,	// (0x0009b75a) vid6_indi_pane_t4_ParamLimits

0xdfc5,	// (0x0009b75a) vid6_indi_pane_t4

0x0003,

0xfb90,	// (0x0009d325) vid6_indi_pane_t_ParamLimits

0xfb90,	// (0x0009d325) vid6_indi_pane_t

0xdfe9,	// (0x0009b77e) wait_bar_pane_cp08

0x7a31,	// (0x000951c6) main_cset_text2_pane_t1_ParamLimits

0x7a31,	// (0x000951c6) main_cset_text2_pane_t1

0x79c4,	// (0x00095159) listscroll_gen_pane_cp06_t1_ParamLimits

0x79c4,	// (0x00095159) listscroll_gen_pane_cp06_t1

0x99fb,	// (0x00097190) main_cam6_set_pane

0xd02b,	// (0x0009a7c0) bg_tb_trans_pane_cp06_ParamLimits

0xaa7c,	// (0x00098211) cam4_indicators_pane_g1_ParamLimits

0xaa8d,	// (0x00098222) cam4_indicators_pane_g2_ParamLimits

0xf8fe,	// (0x0009d093) cam4_indicators_pane_g_ParamLimits

0xaaa5,	// (0x0009823a) cam4_indicators_pane_t1_ParamLimits

0xac82,	// (0x00098417) bg_tb_trans_pane_cp07_ParamLimits

0xaad3,	// (0x00098268) vid4_indicators_pane_g1_ParamLimits

0xaae9,	// (0x0009827e) vid4_indicators_pane_g2_ParamLimits

0xaafd,	// (0x00098292) vid4_indicators_pane_g3_ParamLimits

0xab10,	// (0x000982a5) vid4_indicators_pane_g4_ParamLimits

0xf910,	// (0x0009d0a5) vid4_indicators_pane_g_ParamLimits

0xab2e,	// (0x000982c3) vid4_indicators_pane_t1_ParamLimits

0xabb6,	// (0x0009834b) vid4_progress_pane_g1_ParamLimits

0xabc6,	// (0x0009835b) vid4_progress_pane_g2_ParamLimits

0x751e,	// (0x00094cb3) vid4_progress_pane_g3_ParamLimits

0xaa8d,	// (0x00098222) vid4_progress_pane_g4_ParamLimits

0xfac1,	// (0x0009d256) vid4_progress_pane_g_ParamLimits

0x7530,	// (0x00094cc5) vid4_progress_pane_t1_ParamLimits

0xabd6,	// (0x0009836b) vid4_progress_pane_t2_ParamLimits

0xabeb,	// (0x00098380) vid4_progress_pane_t3_ParamLimits

0xfacc,	// (0x0009d261) vid4_progress_pane_t_ParamLimits

0x7548,	// (0x00094cdd) wait_bar_pane_cp07_ParamLimits

0x7a52,	// (0x000951e7) main_cam6_set_pane_g2_ParamLimits

0x7a52,	// (0x000951e7) main_cam6_set_pane_g2

0x7a78,	// (0x0009520d) main_cset6_listscroll_pane_ParamLimits

0x7a78,	// (0x0009520d) main_cset6_listscroll_pane

0x7a96,	// (0x0009522b) main_cset6_slider_pane_ParamLimits

0x7a96,	// (0x0009522b) main_cset6_slider_pane

0x7aac,	// (0x00095241) main_cset6_text2_pane_ParamLimits

0x7aac,	// (0x00095241) main_cset6_text2_pane

0xdff8,	// (0x0009b78d) main_cset6_text_pane

0xe000,	// (0x0009b795) main_cset_list_pane_copy1_ParamLimits

0xe000,	// (0x0009b795) main_cset_list_pane_copy1

0xe010,	// (0x0009b7a5) scroll_pane_cp028_copy1

0x7aba,	// (0x0009524f) cset_list_set_pane_copy1

0x7ace,	// (0x00095263) aid_position_infowindow_above_copy1

0x7ad6,	// (0x0009526b) aid_position_infowindow_below_copy1

0x7ade,	// (0x00095273) cset_list_set_pane_g1_copy1

0x0135,	// (0x0008d8ca) cset_list_set_pane_g3_copy1_ParamLimits

0x0135,	// (0x0008d8ca) cset_list_set_pane_g3_copy1

0x0144,	// (0x0008d8d9) cset_list_set_pane_t1_copy1_ParamLimits

0x0144,	// (0x0008d8d9) cset_list_set_pane_t1_copy1

0xac82,	// (0x00098417) list_highlight_pane_cp021_copy1_ParamLimits

0xac82,	// (0x00098417) list_highlight_pane_cp021_copy1

0xe019,	// (0x0009b7ae) cset6_slider_pane_ParamLimits

0xe019,	// (0x0009b7ae) cset6_slider_pane

0xe045,	// (0x0009b7da) main_cset6_slider_pane_g1_ParamLimits

0xe045,	// (0x0009b7da) main_cset6_slider_pane_g1

0x7ae6,	// (0x0009527b) main_cset6_slider_pane_g2_ParamLimits

0x7ae6,	// (0x0009527b) main_cset6_slider_pane_g2

0xe06d,	// (0x0009b802) main_cset6_slider_pane_g3_ParamLimits

0xe06d,	// (0x0009b802) main_cset6_slider_pane_g3

0x7b0e,	// (0x000952a3) main_cset6_slider_pane_g4_ParamLimits

0x7b0e,	// (0x000952a3) main_cset6_slider_pane_g4

0x7b1a,	// (0x000952af) main_cset6_slider_pane_g5_ParamLimits

0x7b1a,	// (0x000952af) main_cset6_slider_pane_g5

0xd8de,	// (0x0009b073) main_cset6_slider_pane_g7_ParamLimits

0xd8de,	// (0x0009b073) main_cset6_slider_pane_g7

0xd8ea,	// (0x0009b07f) main_cset6_slider_pane_g8_ParamLimits

0xd8ea,	// (0x0009b07f) main_cset6_slider_pane_g8

0x6bc4,	// (0x00094359) main_cset6_slider_pane_g9_ParamLimits

0x6bc4,	// (0x00094359) main_cset6_slider_pane_g9

0x6bd0,	// (0x00094365) main_cset6_slider_pane_g10_ParamLimits

0x6bd0,	// (0x00094365) main_cset6_slider_pane_g10

0x6bdc,	// (0x00094371) main_cset6_slider_pane_g11_ParamLimits

0x6bdc,	// (0x00094371) main_cset6_slider_pane_g11

0x6be8,	// (0x0009437d) main_cset6_slider_pane_g12_ParamLimits

0x6be8,	// (0x0009437d) main_cset6_slider_pane_g12

0x6bf4,	// (0x00094389) main_cset6_slider_pane_g13_ParamLimits

0x6bf4,	// (0x00094389) main_cset6_slider_pane_g13

0x6c00,	// (0x00094395) main_cset6_slider_pane_g14_ParamLimits

0x6c00,	// (0x00094395) main_cset6_slider_pane_g14

0x7b28,	// (0x000952bd) main_cset6_slider_pane_g15_ParamLimits

0x7b28,	// (0x000952bd) main_cset6_slider_pane_g15

0x6c24,	// (0x000943b9) main_cset6_slider_pane_g16_ParamLimits

0x6c24,	// (0x000943b9) main_cset6_slider_pane_g16

0x6c32,	// (0x000943c7) main_cset6_slider_pane_g17_ParamLimits

0x6c32,	// (0x000943c7) main_cset6_slider_pane_g17

0x0011,

0xfb99,	// (0x0009d32e) main_cset6_slider_pane_g_ParamLimits

0xfb99,	// (0x0009d32e) main_cset6_slider_pane_g

0xe079,	// (0x0009b80e) main_cset6_slider_pane_t1_ParamLimits

0xe079,	// (0x0009b80e) main_cset6_slider_pane_t1

0x7b58,	// (0x000952ed) main_cset6_slider_pane_t2_ParamLimits

0x7b58,	// (0x000952ed) main_cset6_slider_pane_t2

0x7b83,	// (0x00095318) main_cset6_slider_pane_t3_ParamLimits

0x7b83,	// (0x00095318) main_cset6_slider_pane_t3

0x7bae,	// (0x00095343) main_cset6_slider_pane_t4_ParamLimits

0x7bae,	// (0x00095343) main_cset6_slider_pane_t4

0x7bdb,	// (0x00095370) main_cset6_slider_pane_t5_ParamLimits

0x7bdb,	// (0x00095370) main_cset6_slider_pane_t5

0xe0ba,	// (0x0009b84f) main_cset6_slider_pane_t7_ParamLimits

0xe0ba,	// (0x0009b84f) main_cset6_slider_pane_t7

0x7c08,	// (0x0009539d) main_cset6_slider_pane_t8_ParamLimits

0x7c08,	// (0x0009539d) main_cset6_slider_pane_t8

0x7c2c,	// (0x000953c1) main_cset6_slider_pane_t9_ParamLimits

0x7c2c,	// (0x000953c1) main_cset6_slider_pane_t9

0x7c50,	// (0x000953e5) main_cset6_slider_pane_t10_ParamLimits

0x7c50,	// (0x000953e5) main_cset6_slider_pane_t10

0x7c74,	// (0x00095409) main_cset6_slider_pane_t11_ParamLimits

0x7c74,	// (0x00095409) main_cset6_slider_pane_t11

0xe0f0,	// (0x0009b885) main_cset6_slider_pane_t14_ParamLimits

0xe0f0,	// (0x0009b885) main_cset6_slider_pane_t14

0xe129,	// (0x0009b8be) main_cset6_slider_pane_t15_ParamLimits

0xe129,	// (0x0009b8be) main_cset6_slider_pane_t15

0x000b,

0xfbbe,	// (0x0009d353) main_cset6_slider_pane_t_ParamLimits

0xfbbe,	// (0x0009d353) main_cset6_slider_pane_t

0xe162,	// (0x0009b8f7) cset_slider_pane_g1_copy1

0xe16b,	// (0x0009b900) cset_slider_pane_g2_copy1

0xe174,	// (0x0009b909) cset_slider_pane_g3_copy1

0x99fb,	// (0x00097190) bg_popup_sub_pane_cp011_copy1

0xe17d,	// (0x0009b912) main_cset_text_pane_g1_copy1

0xda2d,	// (0x0009b1c2) main_cset_text_pane_t1_copy1

0xda3b,	// (0x0009b1d0) main_cset_text_pane_t2_copy1

0xda49,	// (0x0009b1de) main_cset_text_pane_t3_copy1

0xda57,	// (0x0009b1ec) main_cset_text_pane_t4_copy1

0xda65,	// (0x0009b1fa) main_cset_text_pane_t5_copy1

0xe185,	// (0x0009b91a) main_cset_text_pane_t6_copy1

0xe193,	// (0x0009b928) main_cset_text_pane_t7_copy1

0x7a31,	// (0x000951c6) main_cset_text2_pane_t1_copy1

0xac82,	// (0x00098417) main_ncimui_pane

0x4118,	// (0x000918ad) popup_query_ncimui_window_ParamLimits

0x4118,	// (0x000918ad) popup_query_ncimui_window

0xa757,	// (0x00097eec) field_cale_ev2_pane_g4_ParamLimits

0xa757,	// (0x00097eec) field_cale_ev2_pane_g4

0x5db3,	// (0x00093548) cell_video_dialer_keypad_pane_g2_ParamLimits

0x5db3,	// (0x00093548) cell_video_dialer_keypad_pane_g2

0x0001,

0xf898,	// (0x0009d02d) cell_video_dialer_keypad_pane_g_ParamLimits

0xf898,	// (0x0009d02d) cell_video_dialer_keypad_pane_g

0x5dcb,	// (0x00093560) cell_video_dialer_keypad_pane_t1

0x99fb,	// (0x00097190) bg_popup_window_pane_cp012

0xb259,	// (0x000989ee) heading_pane_cp06

0xe1bf,	// (0x0009b954) ncim_query_content_pane

0x99fb,	// (0x00097190) bg_popup_heading_pane_cp01

0xe1c7,	// (0x0009b95c) ncim_heading_pane_t1

0xe1d5,	// (0x0009b96a) ncim_indicator_popup_pane

0xe1e7,	// (0x0009b97c) ncim_query_button_pane

0xe1fd,	// (0x0009b992) ncim_query_content_pane_t1

0xe20f,	// (0x0009b9a4) ncim_query_content_pane_t2

0x0005,

0xfc02,	// (0x0009d397) ncim_query_content_pane_t

0xe249,	// (0x0009b9de) ncim_query_list_pane

0xe25b,	// (0x0009b9f0) ncim_query_popup_pane

0xe1d5,	// (0x0009b96a) ncim_indicator_popup_pane_ParamLimits

0x7dde,	// (0x00095573) ncim_query_content_pane_g1_ParamLimits

0x7dde,	// (0x00095573) ncim_query_content_pane_g1

0xe1fd,	// (0x0009b992) ncim_query_content_pane_t1_ParamLimits

0xe20f,	// (0x0009b9a4) ncim_query_content_pane_t2_ParamLimits

0x7dea,	// (0x0009557f) ncim_query_content_pane_t3_ParamLimits

0x7dea,	// (0x0009557f) ncim_query_content_pane_t3

0x7e12,	// (0x000955a7) ncim_query_content_pane_t4_ParamLimits

0x7e12,	// (0x000955a7) ncim_query_content_pane_t4

0x7e3a,	// (0x000955cf) ncim_query_content_pane_t5_ParamLimits

0x7e3a,	// (0x000955cf) ncim_query_content_pane_t5

0xe221,	// (0x0009b9b6) ncim_query_content_pane_t6_ParamLimits

0xe221,	// (0x0009b9b6) ncim_query_content_pane_t6

0xfc02,	// (0x0009d397) ncim_query_content_pane_t_ParamLimits

0xe249,	// (0x0009b9de) ncim_query_list_pane_ParamLimits

0xe25b,	// (0x0009b9f0) ncim_query_popup_pane_ParamLimits

0xe26f,	// (0x0009ba04) wait_bar_pane_cp04

0x99fb,	// (0x00097190) input_focus_pane_cp011

0xe277,	// (0x0009ba0c) ncim_query_popup_pane_t1

0xe285,	// (0x0009ba1a) ncim_list_query_list_pane_ParamLimits

0xe285,	// (0x0009ba1a) ncim_list_query_list_pane

0x99fb,	// (0x00097190) bg_button_pane_cp027

0xe298,	// (0x0009ba2d) ncim_query_button_pane_g1

0x99fb,	// (0x00097190) list_highlight_pane_cp012

0xe2a2,	// (0x0009ba37) ncim_list_query_list_pane_g1

0xe2aa,	// (0x0009ba3f) ncim_list_query_list_pane_t1

0xaa99,	// (0x0009822e) cam4_indicators_pane_g3_ParamLimits

0xaa99,	// (0x0009822e) cam4_indicators_pane_g3

0xab1c,	// (0x000982b1) vid4_indicators_pane_g5_ParamLimits

0xab1c,	// (0x000982b1) vid4_indicators_pane_g5

0xaa99,	// (0x0009822e) vid4_progress_pane_g5_ParamLimits

0xaa99,	// (0x0009822e) vid4_progress_pane_g5

0x7cc9,	// (0x0009545e) main_ncimui_pane_g1

0x7d32,	// (0x000954c7) ncimui_group_query_pane_ParamLimits

0x7d32,	// (0x000954c7) ncimui_group_query_pane

0x7d7a,	// (0x0009550f) ncimui_list_pane_ParamLimits

0x7d7a,	// (0x0009550f) ncimui_list_pane

0x7da1,	// (0x00095536) ncimui_text_pane_ParamLimits

0x7da1,	// (0x00095536) ncimui_text_pane

0x7e62,	// (0x000955f7) ncimui_text_pane_t1_ParamLimits

0x7e62,	// (0x000955f7) ncimui_text_pane_t1

0xe2b8,	// (0x0009ba4d) ncimui_list_single_graphic_pane_ParamLimits

0xe2b8,	// (0x0009ba4d) ncimui_list_single_graphic_pane

0x7e80,	// (0x00095615) ncimui_query_pane_ParamLimits

0x7e80,	// (0x00095615) ncimui_query_pane

0x99fb,	// (0x00097190) list_highlight_pane_cp013

0xe2c8,	// (0x0009ba5d) ncim_list_query_list_pane_t1_copy1

0xe2a2,	// (0x0009ba37) ncim_list_single_graphic_pane_g1

0x7e93,	// (0x00095628) ncim_query_button_pane_cp01

0x7e9f,	// (0x00095634) ncim_query_entry_pane_ParamLimits

0x7e9f,	// (0x00095634) ncim_query_entry_pane

0x7eb2,	// (0x00095647) ncimui_query_pane_g1

0x7ebe,	// (0x00095653) ncimui_query_pane_t1_ParamLimits

0x7ebe,	// (0x00095653) ncimui_query_pane_t1

0xac82,	// (0x00098417) input_focus_pane_cp012

0xe2d6,	// (0x0009ba6b) ncim_query_entry_pane_t1

0xa1ea,	// (0x0009797f) main_im_pane_ParamLimits

0xac82,	// (0x00098417) main_mobtv_pane_ParamLimits

0xac82,	// (0x00098417) main_mobtv_pane

0x7b40,	// (0x000952d5) main_cset6_slider_pane_g18_ParamLimits

0x7b40,	// (0x000952d5) main_cset6_slider_pane_g18

0x7b4c,	// (0x000952e1) main_cset6_slider_pane_g19_ParamLimits

0x7b4c,	// (0x000952e1) main_cset6_slider_pane_g19

0xac16,	// (0x000983ab) bg_main_mobtv_pane_ParamLimits

0xac16,	// (0x000983ab) bg_main_mobtv_pane

0x7ed7,	// (0x0009566c) main_mobtv_info_pane

0x7ee2,	// (0x00095677) main_mobtv_loading_pane_ParamLimits

0x7ee2,	// (0x00095677) main_mobtv_loading_pane

0xe2e8,	// (0x0009ba7d) main_mobtv_pg_channel_list_pane

0xe2f2,	// (0x0009ba87) main_mobtv_pg_hdr_pane

0x7eef,	// (0x00095684) main_mobtv_programe_curr_pane_ParamLimits

0x7eef,	// (0x00095684) main_mobtv_programe_curr_pane

0x7efc,	// (0x00095691) main_mobtv_programe_next_pane_ParamLimits

0x7efc,	// (0x00095691) main_mobtv_programe_next_pane

0xe2fb,	// (0x0009ba90) popup_mobtv_noti_window

0xce04,	// (0x0009a599) main_tv_pg_hdr_pane_g1

0xe305,	// (0x0009ba9a) main_tv_pg_hdr_pane_g2

0xe30d,	// (0x0009baa2) main_tv_pg_hdr_pane_g3

0xe315,	// (0x0009baaa) main_tv_pg_hdr_pane_g4

0xe31d,	// (0x0009bab2) main_tv_pg_hdr_pane_g5

0xe327,	// (0x0009babc) main_tv_pg_hdr_pane_g6

0xe331,	// (0x0009bac6) main_tv_pg_hdr_pane_g7

0xe33b,	// (0x0009bad0) main_tv_pg_hdr_pane_g8

0xe345,	// (0x0009bada) main_tv_pg_hdr_pane_g9

0xe34f,	// (0x0009bae4) main_tv_pg_hdr_pane_g10

0xe359,	// (0x0009baee) main_tv_pg_hdr_pane_g11

0x000a,

0xfc0f,	// (0x0009d3a4) main_tv_pg_hdr_pane_g

0xe363,	// (0x0009baf8) main_tv_pg_hdr_pane_t1

0xe371,	// (0x0009bb06) main_tv_pg_hdr_pane_t2

0xe37f,	// (0x0009bb14) main_tv_pg_hdr_pane_t3

0xe38f,	// (0x0009bb24) main_tv_pg_hdr_pane_t4

0xe39f,	// (0x0009bb34) main_tv_pg_hdr_pane_t5

0x0004,

0xfc26,	// (0x0009d3bb) main_tv_pg_hdr_pane_t

0xe3af,	// (0x0009bb44) single_mobtv_pg_channel_pane_ParamLimits

0xe3af,	// (0x0009bb44) single_mobtv_pg_channel_pane

0xe3c1,	// (0x0009bb56) single_mobtv_pg_channel_table_pane

0xe3ca,	// (0x0009bb5f) single_mobtv_pg_channel_thumb_pane

0xe3d3,	// (0x0009bb68) single_tv_pg_channel_pane_g1

0xe3dc,	// (0x0009bb71) single_tv_pg_channel_pane_g2

0x0001,

0xfc31,	// (0x0009d3c6) single_tv_pg_channel_pane_g

0xd02b,	// (0x0009a7c0) bg_single_mobtv_pg_channel_thumb_pane_ParamLimits

0xd02b,	// (0x0009a7c0) bg_single_mobtv_pg_channel_thumb_pane

0xe3e5,	// (0x0009bb7a) single_mobtv_pg_channel_thumb_pane_g1_ParamLimits

0xe3e5,	// (0x0009bb7a) single_mobtv_pg_channel_thumb_pane_g1

0xe415,	// (0x0009bbaa) single_mobtv_pg_channel_thumb_pane_g2_ParamLimits

0xe415,	// (0x0009bbaa) single_mobtv_pg_channel_thumb_pane_g2

0xe421,	// (0x0009bbb6) single_mobtv_pg_channel_thumb_pane_g3_ParamLimits

0xe421,	// (0x0009bbb6) single_mobtv_pg_channel_thumb_pane_g3

0x0002,

0xfc36,	// (0x0009d3cb) single_mobtv_pg_channel_thumb_pane_g_ParamLimits

0xfc36,	// (0x0009d3cb) single_mobtv_pg_channel_thumb_pane_g

0xe42d,	// (0x0009bbc2) single_mobtv_pg_channel_thumb_pane_t1

0xe43b,	// (0x0009bbd0) single_mobtv_pg_channel_thumb_pane_t2

0x0001,

0xfc3d,	// (0x0009d3d2) single_mobtv_pg_channel_thumb_pane_t

0xce04,	// (0x0009a599) bg_single_mobtv_pg_channel_table_pane_g1

0xce04,	// (0x0009a599) bg_single_mobtv_pg_channel_table_pane_g2

0x0001,

0xf6df,	// (0x0009ce74) bg_single_mobtv_pg_channel_table_pane_g

0xe449,	// (0x0009bbde) single_mobtv_pg_channel_table_pane_t1

0xe457,	// (0x0009bbec) single_mobtv_pg_channel_table_pane_t2

0x0001,

0xfc42,	// (0x0009d3d7) single_mobtv_pg_channel_table_pane_t

0x7f11,	// (0x000956a6) main_mobtv_info_pane_g1_ParamLimits

0x7f11,	// (0x000956a6) main_mobtv_info_pane_g1

0x7f2f,	// (0x000956c4) main_mobtv_info_pane_t1_ParamLimits

0x7f2f,	// (0x000956c4) main_mobtv_info_pane_t1

0x7fa7,	// (0x0009573c) main_mobtv_info_pane_t2_ParamLimits

0x7fa7,	// (0x0009573c) main_mobtv_info_pane_t2

0x0002,

0xfc4c,	// (0x0009d3e1) main_mobtv_info_pane_t_ParamLimits

0xfc4c,	// (0x0009d3e1) main_mobtv_info_pane_t

0x8038,	// (0x000957cd) wait_bar_pane_cp05

0x804a,	// (0x000957df) main_mobtv_loading_pane_g1_ParamLimits

0x804a,	// (0x000957df) main_mobtv_loading_pane_g1

0x805b,	// (0x000957f0) main_mobtv_loading_pane_g2_ParamLimits

0x805b,	// (0x000957f0) main_mobtv_loading_pane_g2

0x8067,	// (0x000957fc) main_mobtv_loading_pane_g3_ParamLimits

0x8067,	// (0x000957fc) main_mobtv_loading_pane_g3

0x0002,

0xfc53,	// (0x0009d3e8) main_mobtv_loading_pane_g_ParamLimits

0xfc53,	// (0x0009d3e8) main_mobtv_loading_pane_g

0xe465,	// (0x0009bbfa) main_mobtv_loading_pane_t1_ParamLimits

0xe465,	// (0x0009bbfa) main_mobtv_loading_pane_t1

0xe47d,	// (0x0009bc12) main_mobtv_loading_pane_t2_ParamLimits

0xe47d,	// (0x0009bc12) main_mobtv_loading_pane_t2

0x0001,

0xfc5a,	// (0x0009d3ef) main_mobtv_loading_pane_t_ParamLimits

0xfc5a,	// (0x0009d3ef) main_mobtv_loading_pane_t

0x807a,	// (0x0009580f) wait_bar_pane_cp06_ParamLimits

0x807a,	// (0x0009580f) wait_bar_pane_cp06

0xe4a1,	// (0x0009bc36) main_mobtv_programe_curr_pane_t1

0xe4af,	// (0x0009bc44) main_mobtv_programe_curr_pane_t2

0x0001,

0xfc5f,	// (0x0009d3f4) main_mobtv_programe_curr_pane_t

0xe4bd,	// (0x0009bc52) main_mobtv_programe_next_pane_t1

0xe4cb,	// (0x0009bc60) main_mobtv_programe_next_pane_t2

0xe4d9,	// (0x0009bc6e) main_mobtv_programe_next_pane_t3

0x0002,

0xfc64,	// (0x0009d3f9) main_mobtv_programe_next_pane_t

0x99fb,	// (0x00097190) bg_popup_mobtv_noti_window_pane

0xe4e7,	// (0x0009bc7c) popup_mobtv_noti_window_g1

0xe4ef,	// (0x0009bc84) popup_mobtv_noti_window_t1

0xe4fd,	// (0x0009bc92) popup_mobtv_noti_window_t2

0x0001,

0xfc6b,	// (0x0009d400) popup_mobtv_noti_window_t

0xce04,	// (0x0009a599) bg_popup_mobtv_noti_window_pane_g1

0x99fb,	// (0x00097190) sc_clock_pane

0x99fb,	// (0x00097190) main_fs_bigclock_pane

0x77a2,	// (0x00094f37) blid2_tripm_pane_t4_ParamLimits

0x77a2,	// (0x00094f37) blid2_tripm_pane_t4

0x8089,	// (0x0009581e) sc_clock_pane_g1_ParamLimits

0x8089,	// (0x0009581e) sc_clock_pane_g1

0x809b,	// (0x00095830) sc_clock_pane_t1_ParamLimits

0x809b,	// (0x00095830) sc_clock_pane_t1

0x80bf,	// (0x00095854) sc_clock_pane_t2_ParamLimits

0x80bf,	// (0x00095854) sc_clock_pane_t2

0x80d7,	// (0x0009586c) sc_clock_pane_t3_ParamLimits

0x80d7,	// (0x0009586c) sc_clock_pane_t3

0x0004,

0xfc70,	// (0x0009d405) sc_clock_pane_t_ParamLimits

0xfc70,	// (0x0009d405) sc_clock_pane_t

0x8f0f,	// (0x000966a4) main_fs_bigclock_indicator_pane_ParamLimits

0x8f0f,	// (0x000966a4) main_fs_bigclock_indicator_pane

0x819d,	// (0x00095932) main_fs_bigclock_pane_g1_ParamLimits

0x819d,	// (0x00095932) main_fs_bigclock_pane_g1

0x8f1b,	// (0x000966b0) main_fs_bigclock_pane_t1_ParamLimits

0x8f1b,	// (0x000966b0) main_fs_bigclock_pane_t1

0x8f2d,	// (0x000966c2) main_fs_bigclock_pane_t2_ParamLimits

0x8f2d,	// (0x000966c2) main_fs_bigclock_pane_t2

0x8f41,	// (0x000966d6) main_fs_bigclock_pane_t3_ParamLimits

0x8f41,	// (0x000966d6) main_fs_bigclock_pane_t3

0x0002,

0xfe7f,	// (0x0009d614) main_fs_bigclock_pane_t_ParamLimits

0xfe7f,	// (0x0009d614) main_fs_bigclock_pane_t

0xec6c,	// (0x0009c401) main_fs_bigclock_indicator_pane_g1

0xe1ef,	// (0x0009b984) ncim_query_content_pane_g2_ParamLimits

0xe1ef,	// (0x0009b984) ncim_query_content_pane_g2

0x0001,

0xfbfd,	// (0x0009d392) ncim_query_content_pane_g_ParamLimits

0xfbfd,	// (0x0009d392) ncim_query_content_pane_g

0x80ee,	// (0x00095883) sc_clock_pane_t4_ParamLimits

0x80ee,	// (0x00095883) sc_clock_pane_t4

0xac82,	// (0x00098417) main_radioblah_pane

0xaa0c,	// (0x000981a1) cell_call4_button_pane_t1_copy1_ParamLimits

0xaa0c,	// (0x000981a1) cell_call4_button_pane_t1_copy1

0x7ce1,	// (0x00095476) main_ncimui_pane_t1_ParamLimits

0x7ce1,	// (0x00095476) main_ncimui_pane_t1

0x7cfb,	// (0x00095490) main_ncimui_pane_t2_ParamLimits

0x7cfb,	// (0x00095490) main_ncimui_pane_t2

0x0002,

0xfbf6,	// (0x0009d38b) main_ncimui_pane_t_ParamLimits

0xfbf6,	// (0x0009d38b) main_ncimui_pane_t

0xe50b,	// (0x0009bca0) main_radioblah_anim_pane_ParamLimits

0xe50b,	// (0x0009bca0) main_radioblah_anim_pane

0xe51c,	// (0x0009bcb1) main_radioblah_info_pane_ParamLimits

0xe51c,	// (0x0009bcb1) main_radioblah_info_pane

0xe530,	// (0x0009bcc5) main_radioblah_pane_t1_ParamLimits

0xe530,	// (0x0009bcc5) main_radioblah_pane_t1

0xe54c,	// (0x0009bce1) main_radioblah_pane_t2_ParamLimits

0xe54c,	// (0x0009bce1) main_radioblah_pane_t2

0x0003,

0xfc91,	// (0x0009d426) main_radioblah_pane_t_ParamLimits

0xfc91,	// (0x0009d426) main_radioblah_pane_t

0x8346,	// (0x00095adb) main_radioblah_rocker_ctrl_pane_ParamLimits

0x8346,	// (0x00095adb) main_radioblah_rocker_ctrl_pane

0xe594,	// (0x0009bd29) main_radioblah_info_pane_t1_ParamLimits

0xe594,	// (0x0009bd29) main_radioblah_info_pane_t1

0x839e,	// (0x00095b33) main_radioblah_info_pane_t2_ParamLimits

0x839e,	// (0x00095b33) main_radioblah_info_pane_t2

0x0003,

0xfc9a,	// (0x0009d42f) main_radioblah_info_pane_t_ParamLimits

0xfc9a,	// (0x0009d42f) main_radioblah_info_pane_t

0xce04,	// (0x0009a599) main_radioblah_rocker_ctrl_pane_g1

0x844e,	// (0x00095be3) main_radioblah_rocker_ctrl_pane_g2

0x8456,	// (0x00095beb) main_radioblah_rocker_ctrl_pane_g3

0x845e,	// (0x00095bf3) main_radioblah_rocker_ctrl_pane_g4

0x8466,	// (0x00095bfb) main_radioblah_rocker_ctrl_pane_g5

0x846e,	// (0x00095c03) main_radioblah_rocker_ctrl_pane_g6

0x0005,

0xfca3,	// (0x0009d438) main_radioblah_rocker_ctrl_pane_g

0x7a31,	// (0x000951c6) main_cset_text2_pane_t1_copy1_ParamLimits

0xaa6a,	// (0x000981ff) cam4_image_uncrop_qvga_pane

0xaabf,	// (0x00098254) vid4_image_uncrop_qcif_pane

0xac08,	// (0x0009839d) cam6_image_uncrop_qvga_pane_ParamLimits

0xac08,	// (0x0009839d) cam6_image_uncrop_qvga_pane

0xded7,	// (0x0009b66c) vid6_image_uncrop_qcif_pane_ParamLimits

0xded7,	// (0x0009b66c) vid6_image_uncrop_qcif_pane

0x99fb,	// (0x00097190) bg_popup_preview_window_pane_cp03

0xe1a1,	// (0x0009b936) list_cset_text2_pane

0xe1a9,	// (0x0009b93e) main_cset6_text2_pane_g1

0xe1b1,	// (0x0009b946) main_cset6_text2_pane_t1

0xe5ce,	// (0x0009bd63) list_cset_text2_pane_t1_ParamLimits

0xe5ce,	// (0x0009bd63) list_cset_text2_pane_t1

0xac82,	// (0x00098417) main_radioblah_pane_ParamLimits

0x8024,	// (0x000957b9) main_mobtv_info_pane_t3_ParamLimits

0x8024,	// (0x000957b9) main_mobtv_info_pane_t3

0x8334,	// (0x00095ac9) main_radioblah_pane_g1

0x836e,	// (0x00095b03) main_radioblah_info_pane_g1

0x83f3,	// (0x00095b88) main_radioblah_info_pane_t3_ParamLimits

0x83f3,	// (0x00095b88) main_radioblah_info_pane_t3

0x2b1d,	// (0x000902b2) highlight_cell_cale_month_pane_ParamLimits

0x2b1d,	// (0x000902b2) highlight_cell_cale_month_pane

0x99fb,	// (0x00097190) main_phob_fisheye_pane

0xd107,	// (0x0009a89c) scroll_pane_cp0031_ParamLimits

0xd107,	// (0x0009a89c) scroll_pane_cp0031

0xdfe9,	// (0x0009b77e) wait_bar_pane_cp08_ParamLimits

0x7aba,	// (0x0009524f) cset_list_set_pane_copy1_ParamLimits

0xe5e8,	// (0x0009bd7d) highlight_cell_cale_month_pane_g1

0x8476,	// (0x00095c0b) highlight_cell_cale_month_pane_t1

0xdc65,	// (0x0009b3fa) list_gen_pane_cp01

0xd8c9,	// (0x0009b05e) scroll_pane_01

0x8484,	// (0x00095c19) list_single_double_fisheye_pane

0x0214,	// (0x0008d9a9) list_double_fisheye_pane_g1_ParamLimits

0x0214,	// (0x0008d9a9) list_double_fisheye_pane_g1

0x0220,	// (0x0008d9b5) list_double_fisheye_pane_g2_ParamLimits

0x0220,	// (0x0008d9b5) list_double_fisheye_pane_g2

0x848d,	// (0x00095c22) list_double_fisheye_pane_g3_ParamLimits

0x848d,	// (0x00095c22) list_double_fisheye_pane_g3

0x0004,

0xfcb0,	// (0x0009d445) list_double_fisheye_pane_g_ParamLimits

0xfcb0,	// (0x0009d445) list_double_fisheye_pane_g

0x0251,	// (0x0008d9e6) list_double_fisheye_pane_t1_ParamLimits

0x0251,	// (0x0008d9e6) list_double_fisheye_pane_t1

0x026c,	// (0x0008da01) list_double_fisheye_pane_t2_ParamLimits

0x026c,	// (0x0008da01) list_double_fisheye_pane_t2

0x0001,

0xfcbb,	// (0x0009d450) list_double_fisheye_pane_t_ParamLimits

0xfcbb,	// (0x0009d450) list_double_fisheye_pane_t

0x99fb,	// (0x00097190) main_call5_pane

0x8119,	// (0x000958ae) sc_swipe_pane_ParamLimits

0x8119,	// (0x000958ae) sc_swipe_pane

0x84ac,	// (0x00095c41) call5_image_pane_ParamLimits

0x84ac,	// (0x00095c41) call5_image_pane

0x84c9,	// (0x00095c5e) call5_swipe_1_pane_ParamLimits

0x84c9,	// (0x00095c5e) call5_swipe_1_pane

0x84dc,	// (0x00095c71) call5_swipe_2_pane_ParamLimits

0x84dc,	// (0x00095c71) call5_swipe_2_pane

0x8507,	// (0x00095c9c) popup_call5_audio_first_window_ParamLimits

0x8507,	// (0x00095c9c) popup_call5_audio_first_window

0xd02b,	// (0x0009a7c0) call5_swipe_1_pane_g1_ParamLimits

0xd02b,	// (0x0009a7c0) call5_swipe_1_pane_g1

0xe5f0,	// (0x0009bd85) call5_swipe_1_pane_g2_ParamLimits

0xe5f0,	// (0x0009bd85) call5_swipe_1_pane_g2

0x0001,

0xfcc0,	// (0x0009d455) call5_swipe_1_pane_g_ParamLimits

0xfcc0,	// (0x0009d455) call5_swipe_1_pane_g

0xe5fc,	// (0x0009bd91) call5_swipe_1_pane_t1_ParamLimits

0xe5fc,	// (0x0009bd91) call5_swipe_1_pane_t1

0xd02b,	// (0x0009a7c0) call5_swipe_2_pane_g1_ParamLimits

0xd02b,	// (0x0009a7c0) call5_swipe_2_pane_g1

0xe611,	// (0x0009bda6) call5_swipe_2_pane_g2_ParamLimits

0xe611,	// (0x0009bda6) call5_swipe_2_pane_g2

0x0001,

0xfcc5,	// (0x0009d45a) call5_swipe_2_pane_g_ParamLimits

0xfcc5,	// (0x0009d45a) call5_swipe_2_pane_g

0xe61d,	// (0x0009bdb2) call5_swipe_2_pane_t1_ParamLimits

0xe61d,	// (0x0009bdb2) call5_swipe_2_pane_t1

0xe632,	// (0x0009bdc7) sc_swipe_pane_g1_ParamLimits

0xe632,	// (0x0009bdc7) sc_swipe_pane_g1

0xe63f,	// (0x0009bdd4) sc_swipe_pane_g2_ParamLimits

0xe63f,	// (0x0009bdd4) sc_swipe_pane_g2

0x0001,

0xfcca,	// (0x0009d45f) sc_swipe_pane_g_ParamLimits

0xfcca,	// (0x0009d45f) sc_swipe_pane_g

0xe64b,	// (0x0009bde0) sc_swipe_pane_t1_ParamLimits

0xe64b,	// (0x0009bde0) sc_swipe_pane_t1

0x99fb,	// (0x00097190) main_cmail_launcher_pane

0x851c,	// (0x00095cb1) aid_size_cell_cmail_l_ParamLimits

0x851c,	// (0x00095cb1) aid_size_cell_cmail_l

0x852a,	// (0x00095cbf) grid_cmail_l_pane_ParamLimits

0x852a,	// (0x00095cbf) grid_cmail_l_pane

0x8543,	// (0x00095cd8) cell_cmail_l_pane_ParamLimits

0x8543,	// (0x00095cd8) cell_cmail_l_pane

0xe660,	// (0x0009bdf5) cell_cmail_l_pane_g1_ParamLimits

0xe660,	// (0x0009bdf5) cell_cmail_l_pane_g1

0xe66c,	// (0x0009be01) cell_cmail_l_pane_t1_ParamLimits

0xe66c,	// (0x0009be01) cell_cmail_l_pane_t1

0xe682,	// (0x0009be17) cell_cmail_l_pane_t2_ParamLimits

0xe682,	// (0x0009be17) cell_cmail_l_pane_t2

0x0001,

0xfccf,	// (0x0009d464) cell_cmail_l_pane_t_ParamLimits

0xfccf,	// (0x0009d464) cell_cmail_l_pane_t

0xac82,	// (0x00098417) grid_highlight_pane_cp018_ParamLimits

0xac82,	// (0x00098417) grid_highlight_pane_cp018

0x0ae6,	// (0x0008e27b) main2_pane_ParamLimits

0x0ae6,	// (0x0008e27b) main2_pane

0xa2a7,	// (0x00097a3c) popup_sp_fs_action_menu_bg_pane_g1

0xa2af,	// (0x00097a44) popup_sp_fs_action_menu_bg_pane_g2

0xa2b7,	// (0x00097a4c) popup_sp_fs_action_menu_bg_pane_g3

0xa2bf,	// (0x00097a54) popup_sp_fs_action_menu_bg_pane_g4

0xa2c7,	// (0x00097a5c) popup_sp_fs_action_menu_bg_pane_g5

0xa2cf,	// (0x00097a64) popup_sp_fs_action_menu_bg_pane_g6

0xa2d7,	// (0x00097a6c) popup_sp_fs_action_menu_bg_pane_g7

0xa2df,	// (0x00097a74) popup_sp_fs_action_menu_bg_pane_g8

0xa2e7,	// (0x00097a7c) popup_sp_fs_action_menu_bg_pane_g9

0xa2ef,	// (0x00097a84) popup_sp_fs_action_menu_bg_pane_g10

0xa2ef,	// (0x00097a84) popup_sp_fs_action_menu_bg_pane_g11

0x000a,

0xf186,	// (0x0009c91b) popup_sp_fs_action_menu_bg_pane_g

0xfbaa,	// (0x0008d33f) list_medium_line_x2_t3_g3_g1_ParamLimits

0xfbaa,	// (0x0008d33f) list_medium_line_x2_t3_g3_g1

0x1a85,	// (0x0008f21a) list_medium_line_x2_t3_g3_g2_ParamLimits

0x1a85,	// (0x0008f21a) list_medium_line_x2_t3_g3_g2

0xfbb6,	// (0x0008d34b) list_medium_line_x2_t3_g3_g3_ParamLimits

0xfbb6,	// (0x0008d34b) list_medium_line_x2_t3_g3_g3

0x0002,

0xf234,	// (0x0009c9c9) list_medium_line_x2_t3_g3_g_ParamLimits

0xf234,	// (0x0009c9c9) list_medium_line_x2_t3_g3_g

0xfbc2,	// (0x0008d357) list_medium_line_x2_t3_g3_t1_ParamLimits

0xfbc2,	// (0x0008d357) list_medium_line_x2_t3_g3_t1

0xfbd7,	// (0x0008d36c) list_medium_line_x2_t3_g3_t2_ParamLimits

0xfbd7,	// (0x0008d36c) list_medium_line_x2_t3_g3_t2

0xfbeb,	// (0x0008d380) list_medium_line_x2_t3_g3_t3_ParamLimits

0xfbeb,	// (0x0008d380) list_medium_line_x2_t3_g3_t3

0x0002,

0xf23b,	// (0x0009c9d0) list_medium_line_x2_t3_g3_t_ParamLimits

0xf23b,	// (0x0009c9d0) list_medium_line_x2_t3_g3_t

0xf03b,	// (0x0009c7d0) list_medium_line_x2_t3_g2_g1_ParamLimits

0xf03b,	// (0x0009c7d0) list_medium_line_x2_t3_g2_g1

0xf047,	// (0x0009c7dc) list_medium_line_x2_t3_g2_g2_ParamLimits

0xf047,	// (0x0009c7dc) list_medium_line_x2_t3_g2_g2

0x0001,

0xf242,	// (0x0009c9d7) list_medium_line_x2_t3_g2_g_ParamLimits

0xf242,	// (0x0009c9d7) list_medium_line_x2_t3_g2_g

0xfc00,	// (0x0008d395) list_medium_line_x2_t3_g2_t1_ParamLimits

0xfc00,	// (0x0008d395) list_medium_line_x2_t3_g2_t1

0xfc16,	// (0x0008d3ab) list_medium_line_x2_t3_g2_t2_ParamLimits

0xfc16,	// (0x0008d3ab) list_medium_line_x2_t3_g2_t2

0xf053,	// (0x0009c7e8) list_medium_line_x2_t3_g2_t3_ParamLimits

0xf053,	// (0x0009c7e8) list_medium_line_x2_t3_g2_t3

0x0002,

0xf247,	// (0x0009c9dc) list_medium_line_x2_t3_g2_t_ParamLimits

0xf247,	// (0x0009c9dc) list_medium_line_x2_t3_g2_t

0xf03b,	// (0x0009c7d0) list_medium_line_x2_t4_g4_g1_ParamLimits

0xf03b,	// (0x0009c7d0) list_medium_line_x2_t4_g4_g1

0x1a91,	// (0x0008f226) list_medium_line_x2_t4_g4_g2_ParamLimits

0x1a91,	// (0x0008f226) list_medium_line_x2_t4_g4_g2

0x1a85,	// (0x0008f21a) list_medium_line_x2_t4_g4_g3_ParamLimits

0x1a85,	// (0x0008f21a) list_medium_line_x2_t4_g4_g3

0xfc28,	// (0x0008d3bd) list_medium_line_x2_t4_g4_g4_ParamLimits

0xfc28,	// (0x0008d3bd) list_medium_line_x2_t4_g4_g4

0x0003,

0xf24e,	// (0x0009c9e3) list_medium_line_x2_t4_g4_g_ParamLimits

0xf24e,	// (0x0009c9e3) list_medium_line_x2_t4_g4_g

0xfc34,	// (0x0008d3c9) list_medium_line_x2_t4_g4_t1_ParamLimits

0xfc34,	// (0x0008d3c9) list_medium_line_x2_t4_g4_t1

0xfc4e,	// (0x0008d3e3) list_medium_line_x2_t4_g4_t2_ParamLimits

0xfc4e,	// (0x0008d3e3) list_medium_line_x2_t4_g4_t2

0xfc64,	// (0x0008d3f9) list_medium_line_x2_t4_g4_t3_ParamLimits

0xfc64,	// (0x0008d3f9) list_medium_line_x2_t4_g4_t3

0xfc79,	// (0x0008d40e) list_medium_line_x2_t4_g4_t4_ParamLimits

0xfc79,	// (0x0008d40e) list_medium_line_x2_t4_g4_t4

0x0003,

0xf257,	// (0x0009c9ec) list_medium_line_x2_t4_g4_t_ParamLimits

0xf257,	// (0x0009c9ec) list_medium_line_x2_t4_g4_t

0xf03b,	// (0x0009c7d0) list_medium_line_x2_t2_g4_g1_ParamLimits

0xf03b,	// (0x0009c7d0) list_medium_line_x2_t2_g4_g1

0x1a91,	// (0x0008f226) list_medium_line_x2_t2_g4_g2_ParamLimits

0x1a91,	// (0x0008f226) list_medium_line_x2_t2_g4_g2

0x1a85,	// (0x0008f21a) list_medium_line_x2_t2_g4_g3_ParamLimits

0x1a85,	// (0x0008f21a) list_medium_line_x2_t2_g4_g3

0xf047,	// (0x0009c7dc) list_medium_line_x2_t2_g4_g4_ParamLimits

0xf047,	// (0x0009c7dc) list_medium_line_x2_t2_g4_g4

0x0003,

0xf2be,	// (0x0009ca53) list_medium_line_x2_t2_g4_g_ParamLimits

0xf2be,	// (0x0009ca53) list_medium_line_x2_t2_g4_g

0xfc8b,	// (0x0008d420) list_medium_line_x2_t2_g4_t1_ParamLimits

0xfc8b,	// (0x0008d420) list_medium_line_x2_t2_g4_t1

0xf053,	// (0x0009c7e8) list_medium_line_x2_t2_g4_t2_ParamLimits

0xf053,	// (0x0009c7e8) list_medium_line_x2_t2_g4_t2

0x0001,

0xf2c7,	// (0x0009ca5c) list_medium_line_x2_t2_g4_t_ParamLimits

0xf2c7,	// (0x0009ca5c) list_medium_line_x2_t2_g4_t

0xf03b,	// (0x0009c7d0) list_medium_line_x2_t2_g3_g1_ParamLimits

0xf03b,	// (0x0009c7d0) list_medium_line_x2_t2_g3_g1

0x1a85,	// (0x0008f21a) list_medium_line_x2_t2_g3_g2_ParamLimits

0x1a85,	// (0x0008f21a) list_medium_line_x2_t2_g3_g2

0xf047,	// (0x0009c7dc) list_medium_line_x2_t2_g3_g3_ParamLimits

0xf047,	// (0x0009c7dc) list_medium_line_x2_t2_g3_g3

0x0002,

0xf2cc,	// (0x0009ca61) list_medium_line_x2_t2_g3_g_ParamLimits

0xf2cc,	// (0x0009ca61) list_medium_line_x2_t2_g3_g

0xfca0,	// (0x0008d435) list_medium_line_x2_t2_g3_t1_ParamLimits

0xfca0,	// (0x0008d435) list_medium_line_x2_t2_g3_t1

0xf053,	// (0x0009c7e8) list_medium_line_x2_t2_g3_t2_ParamLimits

0xf053,	// (0x0009c7e8) list_medium_line_x2_t2_g3_t2

0x0001,

0xf2d3,	// (0x0009ca68) list_medium_line_x2_t2_g3_t_ParamLimits

0xf2d3,	// (0x0009ca68) list_medium_line_x2_t2_g3_t

0x2c8d,	// (0x00090422) main_sp_fs_list_pane_ParamLimits

0x2c8d,	// (0x00090422) main_sp_fs_list_pane

0xd185,	// (0x0009a91a) sp_fs_scroll_pane_ParamLimits

0xd185,	// (0x0009a91a) sp_fs_scroll_pane

0xfcb5,	// (0x0008d44a) list_medium_line_x2_t3_t1

0xfcc5,	// (0x0008d45a) list_medium_line_x2_t3_t2

0xfcd3,	// (0x0008d468) list_medium_line_x2_t3_t3

0x0002,

0xf31e,	// (0x0009cab3) list_medium_line_x2_t3_t

0xfce1,	// (0x0008d476) list_medium_line_x3_t4_t1

0xfcf1,	// (0x0008d486) list_medium_line_x3_t4_t2

0xfcff,	// (0x0008d494) list_medium_line_x3_t4_t3

0xf068,	// (0x0009c7fd) list_medium_line_x3_t4_t4

0x0003,

0xf325,	// (0x0009caba) list_medium_line_x3_t4_t

0xfd0d,	// (0x0008d4a2) list_medium_line_x4_t5_t1

0xfd1d,	// (0x0008d4b2) list_medium_line_x4_t5_t2

0xf076,	// (0x0009c80b) list_medium_line_x4_t5_t3

0xfd2b,	// (0x0008d4c0) list_medium_line_x4_t5_t4

0xf068,	// (0x0009c7fd) list_medium_line_x4_t5_t5

0x0004,

0xf32e,	// (0x0009cac3) list_medium_line_x4_t5_t

0xf03b,	// (0x0009c7d0) list_medium_line_t4_g4_g1_ParamLimits

0xf03b,	// (0x0009c7d0) list_medium_line_t4_g4_g1

0xfd39,	// (0x0008d4ce) list_medium_line_t4_g4_g2_ParamLimits

0xfd39,	// (0x0008d4ce) list_medium_line_t4_g4_g2

0xfd45,	// (0x0008d4da) list_medium_line_t4_g4_g3_ParamLimits

0xfd45,	// (0x0008d4da) list_medium_line_t4_g4_g3

0xf047,	// (0x0009c7dc) list_medium_line_t4_g4_g4_ParamLimits

0xf047,	// (0x0009c7dc) list_medium_line_t4_g4_g4

0x0003,

0xf339,	// (0x0009cace) list_medium_line_t4_g4_g_ParamLimits

0xf339,	// (0x0009cace) list_medium_line_t4_g4_g

0xfd51,	// (0x0008d4e6) list_medium_line_t4_g4_t1_ParamLimits

0xfd51,	// (0x0008d4e6) list_medium_line_t4_g4_t1

0xfd66,	// (0x0008d4fb) list_medium_line_t4_g4_t2_ParamLimits

0xfd66,	// (0x0008d4fb) list_medium_line_t4_g4_t2

0xfd7b,	// (0x0008d510) list_medium_line_t4_g4_t3_ParamLimits

0xfd7b,	// (0x0008d510) list_medium_line_t4_g4_t3

0xf053,	// (0x0009c7e8) list_medium_line_t4_g4_t4_ParamLimits

0xf053,	// (0x0009c7e8) list_medium_line_t4_g4_t4

0x0003,

0xf342,	// (0x0009cad7) list_medium_line_t4_g4_t_ParamLimits

0xf342,	// (0x0009cad7) list_medium_line_t4_g4_t

0x2d5f,	// (0x000904f4) chi_dic_find_pane_g1

0x3e9e,	// (0x00091633) main_tport_pane

0xff5d,	// (0x0008d6f2) list_medium_line_plain_t1

0xff6b,	// (0x0008d700) list_medium_line_t2_g2_g1_ParamLimits

0xff6b,	// (0x0008d700) list_medium_line_t2_g2_g1

0x6fa7,	// (0x0009473c) list_medium_line_t2_g2_g2_ParamLimits

0x6fa7,	// (0x0009473c) list_medium_line_t2_g2_g2

0x0001,

0xfa07,	// (0x0009d19c) list_medium_line_t2_g2_g_ParamLimits

0xfa07,	// (0x0009d19c) list_medium_line_t2_g2_g

0xff77,	// (0x0008d70c) list_medium_line_t2_g2_t1_ParamLimits

0xff77,	// (0x0008d70c) list_medium_line_t2_g2_t1

0xff91,	// (0x0008d726) list_medium_line_t2_g2_t2_ParamLimits

0xff91,	// (0x0008d726) list_medium_line_t2_g2_t2

0x0001,

0xfa0c,	// (0x0009d1a1) list_medium_line_t2_g2_t_ParamLimits

0xfa0c,	// (0x0009d1a1) list_medium_line_t2_g2_t

0x755b,	// (0x00094cf0) aid_sp_fs_list_icon_a_sm

0xac00,	// (0x00098395) aid_sp_fs_list_icon_d

0xbefc,	// (0x00099691) aid_sp_fs_text_primary

0xbf05,	// (0x0009969a) aid_sp_fs_text_secondary

0x7563,	// (0x00094cf8) list_medium_line

0x7563,	// (0x00094cf8) list_medium_line_g2

0x7563,	// (0x00094cf8) list_medium_line_g3

0x7563,	// (0x00094cf8) list_medium_line_plain

0x7563,	// (0x00094cf8) list_medium_line_plain_t2

0x7563,	// (0x00094cf8) list_medium_line_plain_t3

0x7563,	// (0x00094cf8) list_medium_line_right_icon

0x7563,	// (0x00094cf8) list_medium_line_right_iconx2

0x7563,	// (0x00094cf8) list_medium_line_t2

0x7563,	// (0x00094cf8) list_medium_line_t2_g2

0x7563,	// (0x00094cf8) list_medium_line_t2_g3

0x7563,	// (0x00094cf8) list_medium_line_t2_right_icon

0x7563,	// (0x00094cf8) list_medium_line_t2_right_iconx2

0x7563,	// (0x00094cf8) list_medium_line_t3

0x7563,	// (0x00094cf8) list_medium_line_t3_g2

0x7563,	// (0x00094cf8) list_medium_line_t3_g3

0x7563,	// (0x00094cf8) list_medium_line_t3_right_iconx2

0x756c,	// (0x00094d01) list_medium_line_t4_g4

0x7575,	// (0x00094d0a) list_medium_line_x2

0x7575,	// (0x00094d0a) list_medium_line_x2_t2_g2

0x7575,	// (0x00094d0a) list_medium_line_x2_t2_g3

0x7575,	// (0x00094d0a) list_medium_line_x2_t2_g4

0x7575,	// (0x00094d0a) list_medium_line_x2_t3

0x7575,	// (0x00094d0a) list_medium_line_x2_t3_g2

0x7575,	// (0x00094d0a) list_medium_line_x2_t3_g3

0x7575,	// (0x00094d0a) list_medium_line_x2_t3_g4

0x7575,	// (0x00094d0a) list_medium_line_x2_t4_g2

0x7575,	// (0x00094d0a) list_medium_line_x2_t4_g4

0x757e,	// (0x00094d13) list_medium_line_x3

0x757e,	// (0x00094d13) list_medium_line_x3_t4

0x757e,	// (0x00094d13) list_medium_line_x3_t4_g4

0x756c,	// (0x00094d01) list_medium_line_x4_t4

0x756c,	// (0x00094d01) list_medium_line_x4_t4_g7

0x756c,	// (0x00094d01) list_medium_line_x4_t5

0x0121,	// (0x0008d8b6) list_single_fs_dyc_pane_ParamLimits

0x0121,	// (0x0008d8b6) list_single_fs_dyc_pane

0xf03b,	// (0x0009c7d0) list_medium_line_x4_t4_g7_g1_ParamLimits

0xf03b,	// (0x0009c7d0) list_medium_line_x4_t4_g7_g1

0x0159,	// (0x0008d8ee) list_medium_line_x4_t4_g7_g2_ParamLimits

0x0159,	// (0x0008d8ee) list_medium_line_x4_t4_g7_g2

0x7c9a,	// (0x0009542f) list_medium_line_x4_t4_g7_g3_ParamLimits

0x7c9a,	// (0x0009542f) list_medium_line_x4_t4_g7_g3

0x7ca9,	// (0x0009543e) list_medium_line_x4_t4_g7_g4_ParamLimits

0x7ca9,	// (0x0009543e) list_medium_line_x4_t4_g7_g4

0x0165,	// (0x0008d8fa) list_medium_line_x4_t4_g7_g5_ParamLimits

0x0165,	// (0x0008d8fa) list_medium_line_x4_t4_g7_g5

0x0174,	// (0x0008d909) list_medium_line_x4_t4_g7_g6_ParamLimits

0x0174,	// (0x0008d909) list_medium_line_x4_t4_g7_g6

0x0183,	// (0x0008d918) list_medium_line_x4_t4_g7_g7_ParamLimits

0x0183,	// (0x0008d918) list_medium_line_x4_t4_g7_g7

0x0006,

0xfbd7,	// (0x0009d36c) list_medium_line_x4_t4_g7_g_ParamLimits

0xfbd7,	// (0x0009d36c) list_medium_line_x4_t4_g7_g

0x018f,	// (0x0008d924) list_medium_line_x4_t4_g7_t1_ParamLimits

0x018f,	// (0x0008d924) list_medium_line_x4_t4_g7_t1

0x01a4,	// (0x0008d939) list_medium_line_x4_t4_g7_t2_ParamLimits

0x01a4,	// (0x0008d939) list_medium_line_x4_t4_g7_t2

0x01b9,	// (0x0008d94e) list_medium_line_x4_t4_g7_t3_ParamLimits

0x01b9,	// (0x0008d94e) list_medium_line_x4_t4_g7_t3

0x01ce,	// (0x0008d963) list_medium_line_x4_t4_g7_t4_ParamLimits

0x01ce,	// (0x0008d963) list_medium_line_x4_t4_g7_t4

0x01e0,	// (0x0008d975) list_medium_line_x4_t4_g7_t5_ParamLimits

0x01e0,	// (0x0008d975) list_medium_line_x4_t4_g7_t5

0x0004,

0xfbe6,	// (0x0009d37b) list_medium_line_x4_t4_g7_t_ParamLimits

0xfbe6,	// (0x0009d37b) list_medium_line_x4_t4_g7_t

0x01f2,	// (0x0008d987) list_single_dyc_row_pane_ParamLimits

0x01f2,	// (0x0008d987) list_single_dyc_row_pane

0x8499,	// (0x00095c2e) call5_gesture_pane_ParamLimits

0x8499,	// (0x00095c2e) call5_gesture_pane

0x84ef,	// (0x00095c84) call5_windows_pane_ParamLimits

0x84ef,	// (0x00095c84) call5_windows_pane

0x8555,	// (0x00095cea) call5_swipe_1_pane_cp_ParamLimits

0x8555,	// (0x00095cea) call5_swipe_1_pane_cp

0x8561,	// (0x00095cf6) call5_swipe_2_pane_cp_ParamLimits

0x8561,	// (0x00095cf6) call5_swipe_2_pane_cp

0xa3fe,	// (0x00097b93) call5_image_pane_cp

0x856d,	// (0x00095d02) popup_call5_audio_first_window_cp_ParamLimits

0x856d,	// (0x00095d02) popup_call5_audio_first_window_cp

0xe632,	// (0x0009bdc7) call5_swipe_1_pane_g1_cp_ParamLimits

0xe632,	// (0x0009bdc7) call5_swipe_1_pane_g1_cp

0xe69f,	// (0x0009be34) call5_swipe_1_pane_g2_cp

0xe64b,	// (0x0009bde0) call5_swipe_1_pane_t1_cp_ParamLimits

0xe64b,	// (0x0009bde0) call5_swipe_1_pane_t1_cp

0xe632,	// (0x0009bdc7) call5_swipe_2_pane_g1_cp_ParamLimits

0xe632,	// (0x0009bdc7) call5_swipe_2_pane_g1_cp

0xe6a7,	// (0x0009be3c) call5_swipe_2_pane_g2_cp

0xe6af,	// (0x0009be44) call5_swipe_2_pane_t1_cp_ParamLimits

0xe6af,	// (0x0009be44) call5_swipe_2_pane_t1_cp

0xac82,	// (0x00098417) main_sp_fs_email_pane

0xd9a2,	// (0x0009b137) main_sp_fs_listscroll_pane_te

0x857b,	// (0x00095d10) popup_sp_fs_action_menu_pane_ParamLimits

0x857b,	// (0x00095d10) popup_sp_fs_action_menu_pane

0xce04,	// (0x0009a599) bg_sp_fs_ctrlbar_pane_g1

0xe6c4,	// (0x0009be59) bg_sp_fs_ctrlbar_ddmenu_pane_g1

0xe6cd,	// (0x0009be62) bg_sp_fs_ctrlbar_ddmenu_pane_g2

0xe6d6,	// (0x0009be6b) bg_sp_fs_ctrlbar_ddmenu_pane_g3

0xce04,	// (0x0009a599) bg_sp_fs_ctrlbar_ddmenu_pane_g4

0x0003,

0xfcd4,	// (0x0009d469) bg_sp_fs_ctrlbar_ddmenu_pane_g

0xcbe3,	// (0x0009a378) bg_sp_fs_ctrlbar_ddmenu_pane_ParamLimits

0xcbe3,	// (0x0009a378) bg_sp_fs_ctrlbar_ddmenu_pane

0xe6df,	// (0x0009be74) main_sp_fs_ctrlbar_ddmenu_pane_g1_ParamLimits

0xe6df,	// (0x0009be74) main_sp_fs_ctrlbar_ddmenu_pane_g1

0xe6eb,	// (0x0009be80) main_sp_fs_ctrlbar_ddmenu_pane_g2_ParamLimits

0xe6eb,	// (0x0009be80) main_sp_fs_ctrlbar_ddmenu_pane_g2

0x0001,

0xfcdd,	// (0x0009d472) main_sp_fs_ctrlbar_ddmenu_pane_g_ParamLimits

0xfcdd,	// (0x0009d472) main_sp_fs_ctrlbar_ddmenu_pane_g

0xe6f7,	// (0x0009be8c) main_sp_fs_ctrlbar_ddmenu_pane_t1_ParamLimits

0xe6f7,	// (0x0009be8c) main_sp_fs_ctrlbar_ddmenu_pane_t1

0x85c1,	// (0x00095d56) list_medium_line_t2_right_icon_g1

0x028e,	// (0x0008da23) list_medium_line_t2_right_icon_t1

0x029e,	// (0x0008da33) list_medium_line_t2_right_icon_t2

0x0001,

0xfce2,	// (0x0009d477) list_medium_line_t2_right_icon_t

0xc9cc,	// (0x0009a161) bg_sp_fs_ctrlbar_pane_ParamLimits

0xc9cc,	// (0x0009a161) bg_sp_fs_ctrlbar_pane

0x8613,	// (0x00095da8) main_sp_fs_ctrlbar_button_pane_cp01

0x861d,	// (0x00095db2) main_sp_fs_ctrlbar_ddmenu_pane

0xe74b,	// (0x0009bee0) main_sp_fs_ctrlbar_pane_g1

0xe757,	// (0x0009beec) main_sp_fs_ctrlbar_pane_g2

0x0001,

0xfce7,	// (0x0009d47c) main_sp_fs_ctrlbar_pane_g

0xe763,	// (0x0009bef8) main_sp_fs_ctrlbar_pane_t1

0x8627,	// (0x00095dbc) main_sp_fs_ctrlbar_pane

0x864b,	// (0x00095de0) main_sp_fs_listscroll_pane_te_cp01

0x02b0,	// (0x0008da45) popup_sp_fs_action_menu_pane_cp01_ParamLimits

0x02b0,	// (0x0008da45) popup_sp_fs_action_menu_pane_cp01

0xac82,	// (0x00098417) bg_sp_fs_highlight_list_pane_cp01_ParamLimits

0xac82,	// (0x00098417) bg_sp_fs_highlight_list_pane_cp01

0x866b,	// (0x00095e00) sp_fs_action_menu_list_gene_pane_g1_ParamLimits

0x866b,	// (0x00095e00) sp_fs_action_menu_list_gene_pane_g1

0xe793,	// (0x0009bf28) sp_fs_action_menu_list_gene_pane_g2_ParamLimits

0xe793,	// (0x0009bf28) sp_fs_action_menu_list_gene_pane_g2

0x0001,

0xfcf1,	// (0x0009d486) sp_fs_action_menu_list_gene_pane_g_ParamLimits

0xfcf1,	// (0x0009d486) sp_fs_action_menu_list_gene_pane_g

0x867a,	// (0x00095e0f) sp_fs_action_menu_list_gene_pane_t1_ParamLimits

0x867a,	// (0x00095e0f) sp_fs_action_menu_list_gene_pane_t1

0x8692,	// (0x00095e27) sp_fs_action_menu_list_gene_pane_ParamLimits

0x8692,	// (0x00095e27) sp_fs_action_menu_list_gene_pane

0xe7a0,	// (0x0009bf35) popup_sp_fs_action_menu_bg_pane_ParamLimits

0xe7a0,	// (0x0009bf35) popup_sp_fs_action_menu_bg_pane

0x86b5,	// (0x00095e4a) sp_fs_action_menu_list_pane_ParamLimits

0x86b5,	// (0x00095e4a) sp_fs_action_menu_list_pane

0x02e6,	// (0x0008da7b) sp_fs_scroll_pane_cp01_ParamLimits

0x02e6,	// (0x0008da7b) sp_fs_scroll_pane_cp01

0x030c,	// (0x0008daa1) list_medium_line_plain_t2_t1

0x031c,	// (0x0008dab1) list_medium_line_plain_t2_t2

0x0001,

0xfcf6,	// (0x0009d48b) list_medium_line_plain_t2_t

0x032c,	// (0x0008dac1) list_medium_line_plain_t3_t1

0x033c,	// (0x0008dad1) list_medium_line_plain_t3_t2

0x034a,	// (0x0008dadf) list_medium_line_plain_t3_t3

0x0002,

0xfcfb,	// (0x0009d490) list_medium_line_plain_t3_t

0xf03b,	// (0x0009c7d0) list_medium_line_x2_t2_g2_g1_ParamLimits

0xf03b,	// (0x0009c7d0) list_medium_line_x2_t2_g2_g1

0xf047,	// (0x0009c7dc) list_medium_line_x2_t2_g2_g2_ParamLimits

0xf047,	// (0x0009c7dc) list_medium_line_x2_t2_g2_g2

0x0001,

0xf242,	// (0x0009c9d7) list_medium_line_x2_t2_g2_g_ParamLimits

0xf242,	// (0x0009c9d7) list_medium_line_x2_t2_g2_g

0xf084,	// (0x0009c819) list_medium_line_x2_t2_g2_t1_ParamLimits

0xf084,	// (0x0009c819) list_medium_line_x2_t2_g2_t1

0xf053,	// (0x0009c7e8) list_medium_line_x2_t2_g2_t2_ParamLimits

0xf053,	// (0x0009c7e8) list_medium_line_x2_t2_g2_t2

0x0001,

0xfd02,	// (0x0009d497) list_medium_line_x2_t2_g2_t_ParamLimits

0xfd02,	// (0x0009d497) list_medium_line_x2_t2_g2_t

0xf03b,	// (0x0009c7d0) list_medium_line_x2_t4_g2_g1_ParamLimits

0xf03b,	// (0x0009c7d0) list_medium_line_x2_t4_g2_g1

0x0358,	// (0x0008daed) list_medium_line_x2_t4_g2_g2_ParamLimits

0x0358,	// (0x0008daed) list_medium_line_x2_t4_g2_g2

0x0001,

0xfd07,	// (0x0009d49c) list_medium_line_x2_t4_g2_g_ParamLimits

0xfd07,	// (0x0009d49c) list_medium_line_x2_t4_g2_g

0x036a,	// (0x0008daff) list_medium_line_x2_t4_g2_t1_ParamLimits

0x036a,	// (0x0008daff) list_medium_line_x2_t4_g2_t1

0x0384,	// (0x0008db19) list_medium_line_x2_t4_g2_t2_ParamLimits

0x0384,	// (0x0008db19) list_medium_line_x2_t4_g2_t2

0x039a,	// (0x0008db2f) list_medium_line_x2_t4_g2_t3_ParamLimits

0x039a,	// (0x0008db2f) list_medium_line_x2_t4_g2_t3

0xf053,	// (0x0009c7e8) list_medium_line_x2_t4_g2_t4_ParamLimits

0xf053,	// (0x0009c7e8) list_medium_line_x2_t4_g2_t4

0x0003,

0xfd0c,	// (0x0009d4a1) list_medium_line_x2_t4_g2_t_ParamLimits

0xfd0c,	// (0x0009d4a1) list_medium_line_x2_t4_g2_t

0x86d9,	// (0x00095e6e) list_medium_line_t3_right_iconx2_g1

0x85c1,	// (0x00095d56) list_medium_line_t3_right_iconx2_g2

0x03af,	// (0x0008db44) list_medium_line_t3_right_iconx2_g3

0x0002,

0xfd15,	// (0x0009d4aa) list_medium_line_t3_right_iconx2_g

0x03b9,	// (0x0008db4e) list_medium_line_t3_right_iconx2_t1

0x03c9,	// (0x0008db5e) list_medium_line_t3_right_iconx2_t2

0x0001,

0xfd1c,	// (0x0009d4b1) list_medium_line_t3_right_iconx2_t

0xf03b,	// (0x0009c7d0) list_medium_line_x3_t4_g4_g1_ParamLimits

0xf03b,	// (0x0009c7d0) list_medium_line_x3_t4_g4_g1

0x1a85,	// (0x0008f21a) list_medium_line_x3_t4_g4_g2_ParamLimits

0x1a85,	// (0x0008f21a) list_medium_line_x3_t4_g4_g2

0xf099,	// (0x0009c82e) list_medium_line_x3_t4_g4_g3_ParamLimits

0xf099,	// (0x0009c82e) list_medium_line_x3_t4_g4_g3

0x86e1,	// (0x00095e76) list_medium_line_x3_t4_g4_g4_ParamLimits

0x86e1,	// (0x00095e76) list_medium_line_x3_t4_g4_g4

0x0003,

0xfd21,	// (0x0009d4b6) list_medium_line_x3_t4_g4_g_ParamLimits

0xfd21,	// (0x0009d4b6) list_medium_line_x3_t4_g4_g

0x03d7,	// (0x0008db6c) list_medium_line_x3_t4_g4_t1_ParamLimits

0x03d7,	// (0x0008db6c) list_medium_line_x3_t4_g4_t1

0x03ee,	// (0x0008db83) list_medium_line_x3_t4_g4_t2_ParamLimits

0x03ee,	// (0x0008db83) list_medium_line_x3_t4_g4_t2

0xf0a5,	// (0x0009c83a) list_medium_line_x3_t4_g4_t3_ParamLimits

0xf0a5,	// (0x0009c83a) list_medium_line_x3_t4_g4_t3

0x0407,	// (0x0008db9c) list_medium_line_x3_t4_g4_t4_ParamLimits

0x0407,	// (0x0008db9c) list_medium_line_x3_t4_g4_t4

0x0003,

0xfd2a,	// (0x0009d4bf) list_medium_line_x3_t4_g4_t_ParamLimits

0xfd2a,	// (0x0009d4bf) list_medium_line_x3_t4_g4_t

0x0424,	// (0x0008dbb9) list_single_dyc_row_text_pane_t1_ParamLimits

0x0424,	// (0x0008dbb9) list_single_dyc_row_text_pane_t1

0x046d,	// (0x0008dc02) list_single_dyc_row_text_pane_t2_ParamLimits

0x046d,	// (0x0008dc02) list_single_dyc_row_text_pane_t2

0x86ed,	// (0x00095e82) list_single_dyc_row_text_pane_t3_ParamLimits

0x86ed,	// (0x00095e82) list_single_dyc_row_text_pane_t3

0x0005,

0xfd33,	// (0x0009d4c8) list_single_dyc_row_text_pane_t_ParamLimits

0xfd33,	// (0x0009d4c8) list_single_dyc_row_text_pane_t

0x8711,	// (0x00095ea6) list_single_dyc_row_pane_g1_ParamLimits

0x8711,	// (0x00095ea6) list_single_dyc_row_pane_g1

0x871d,	// (0x00095eb2) list_single_dyc_row_pane_g2_ParamLimits

0x871d,	// (0x00095eb2) list_single_dyc_row_pane_g2

0x8729,	// (0x00095ebe) list_single_dyc_row_pane_g3_ParamLimits

0x8729,	// (0x00095ebe) list_single_dyc_row_pane_g3

0x8735,	// (0x00095eca) list_single_dyc_row_pane_g4_ParamLimits

0x8735,	// (0x00095eca) list_single_dyc_row_pane_g4

0x0003,

0xfd40,	// (0x0009d4d5) list_single_dyc_row_pane_g_ParamLimits

0xfd40,	// (0x0009d4d5) list_single_dyc_row_pane_g

0x8741,	// (0x00095ed6) list_single_dyc_row_text_pane_ParamLimits

0x8741,	// (0x00095ed6) list_single_dyc_row_text_pane

0x99fb,	// (0x00097190) bg_sp_fs_scroll_pane

0xe7ae,	// (0x0009bf43) thumb_sp_fs_scroll_pane

0xf0ba,	// (0x0009c84f) list_medium_line_g1_ParamLimits

0xf0ba,	// (0x0009c84f) list_medium_line_g1

0x05a2,	// (0x0008dd37) list_medium_line_t1_ParamLimits

0x05a2,	// (0x0008dd37) list_medium_line_t1

0xf03b,	// (0x0009c7d0) list_medium_line_x2_g1_ParamLimits

0xf03b,	// (0x0009c7d0) list_medium_line_x2_g1

0x1a85,	// (0x0008f21a) list_medium_line_x2_g2_ParamLimits

0x1a85,	// (0x0008f21a) list_medium_line_x2_g2

0x0001,

0xfd49,	// (0x0009d4de) list_medium_line_x2_g_ParamLimits

0xfd49,	// (0x0009d4de) list_medium_line_x2_g

0x8760,	// (0x00095ef5) list_medium_line_x2_t1_ParamLimits

0x8760,	// (0x00095ef5) list_medium_line_x2_t1

0xf03b,	// (0x0009c7d0) list_medium_line_x3_g1_ParamLimits

0xf03b,	// (0x0009c7d0) list_medium_line_x3_g1

0x1a85,	// (0x0008f21a) list_medium_line_x3_g2_ParamLimits

0x1a85,	// (0x0008f21a) list_medium_line_x3_g2

0x0001,

0xfd49,	// (0x0009d4de) list_medium_line_x3_g_ParamLimits

0xfd49,	// (0x0009d4de) list_medium_line_x3_g

0x8760,	// (0x00095ef5) list_medium_line_x3_t1_ParamLimits

0x8760,	// (0x00095ef5) list_medium_line_x3_t1

0xe7b7,	// (0x0009bf4c) thumb_sp_fs_scroll_pane_g1

0xe7c0,	// (0x0009bf55) thumb_sp_fs_scroll_pane_g2

0xe7c9,	// (0x0009bf5e) thumb_sp_fs_scroll_pane_g3

0x0002,

0xfd4e,	// (0x0009d4e3) thumb_sp_fs_scroll_pane_g

0xe7b7,	// (0x0009bf4c) bg_sp_fs_scroll_pane_g1

0xe7c0,	// (0x0009bf55) bg_sp_fs_scroll_pane_g2

0xe7c9,	// (0x0009bf5e) bg_sp_fs_scroll_pane_g3

0x0002,

0xfd4e,	// (0x0009d4e3) bg_sp_fs_scroll_pane_g

0xf03b,	// (0x0009c7d0) list_medium_line_x2_t3_g4_g1_ParamLimits

0xf03b,	// (0x0009c7d0) list_medium_line_x2_t3_g4_g1

0x1a91,	// (0x0008f226) list_medium_line_x2_t3_g4_g2_ParamLimits

0x1a91,	// (0x0008f226) list_medium_line_x2_t3_g4_g2

0x1a85,	// (0x0008f21a) list_medium_line_x2_t3_g4_g3_ParamLimits

0x1a85,	// (0x0008f21a) list_medium_line_x2_t3_g4_g3

0xf047,	// (0x0009c7dc) list_medium_line_x2_t3_g4_g4_ParamLimits

0xf047,	// (0x0009c7dc) list_medium_line_x2_t3_g4_g4

0x0003,

0xf2be,	// (0x0009ca53) list_medium_line_x2_t3_g4_g_ParamLimits

0xf2be,	// (0x0009ca53) list_medium_line_x2_t3_g4_g

0x05b7,	// (0x0008dd4c) list_medium_line_x2_t3_g4_t1_ParamLimits

0x05b7,	// (0x0008dd4c) list_medium_line_x2_t3_g4_t1

0x05cd,	// (0x0008dd62) list_medium_line_x2_t3_g4_t2_ParamLimits

0x05cd,	// (0x0008dd62) list_medium_line_x2_t3_g4_t2

0xf053,	// (0x0009c7e8) list_medium_line_x2_t3_g4_t3_ParamLimits

0xf053,	// (0x0009c7e8) list_medium_line_x2_t3_g4_t3

0x0002,

0xfd55,	// (0x0009d4ea) list_medium_line_x2_t3_g4_t_ParamLimits

0xfd55,	// (0x0009d4ea) list_medium_line_x2_t3_g4_t

0xf0ba,	// (0x0009c84f) list_medium_line_g2_g1_ParamLimits

0xf0ba,	// (0x0009c84f) list_medium_line_g2_g1

0x6fa7,	// (0x0009473c) list_medium_line_g2_g2_ParamLimits

0x6fa7,	// (0x0009473c) list_medium_line_g2_g2

0x0001,

0xfd5c,	// (0x0009d4f1) list_medium_line_g2_g_ParamLimits

0xfd5c,	// (0x0009d4f1) list_medium_line_g2_g

0x05e7,	// (0x0008dd7c) list_medium_line_g2_t1_ParamLimits

0x05e7,	// (0x0008dd7c) list_medium_line_g2_t1

0xf0ba,	// (0x0009c84f) list_medium_line_t3_g2_g1_ParamLimits

0xf0ba,	// (0x0009c84f) list_medium_line_t3_g2_g1

0x6fa7,	// (0x0009473c) list_medium_line_t3_g2_g2_ParamLimits

0x6fa7,	// (0x0009473c) list_medium_line_t3_g2_g2

0x0001,

0xfd5c,	// (0x0009d4f1) list_medium_line_t3_g2_g_ParamLimits

0xfd5c,	// (0x0009d4f1) list_medium_line_t3_g2_g

0x05fc,	// (0x0008dd91) list_medium_line_t3_g2_t1_ParamLimits

0x05fc,	// (0x0008dd91) list_medium_line_t3_g2_t1

0x0616,	// (0x0008ddab) list_medium_line_t3_g2_t2_ParamLimits

0x0616,	// (0x0008ddab) list_medium_line_t3_g2_t2

0x062c,	// (0x0008ddc1) list_medium_line_t3_g2_t3_ParamLimits

0x062c,	// (0x0008ddc1) list_medium_line_t3_g2_t3

0x0002,

0xfd61,	// (0x0009d4f6) list_medium_line_t3_g2_t_ParamLimits

0xfd61,	// (0x0009d4f6) list_medium_line_t3_g2_t

0x85c1,	// (0x00095d56) list_medium_line_right_icon_g1

0x0646,	// (0x0008dddb) list_medium_line_right_icon_t1

0xf0ba,	// (0x0009c84f) list_medium_line_t2_g1_ParamLimits

0xf0ba,	// (0x0009c84f) list_medium_line_t2_g1

0x0654,	// (0x0008dde9) list_medium_line_t2_t1_ParamLimits

0x0654,	// (0x0008dde9) list_medium_line_t2_t1

0x066e,	// (0x0008de03) list_medium_line_t2_t2_ParamLimits

0x066e,	// (0x0008de03) list_medium_line_t2_t2

0x0001,

0xfd68,	// (0x0009d4fd) list_medium_line_t2_t_ParamLimits

0xfd68,	// (0x0009d4fd) list_medium_line_t2_t

0xf0ba,	// (0x0009c84f) list_medium_line_t3_g1_ParamLimits

0xf0ba,	// (0x0009c84f) list_medium_line_t3_g1

0x0687,	// (0x0008de1c) list_medium_line_t3_t1_ParamLimits

0x0687,	// (0x0008de1c) list_medium_line_t3_t1

0x06a1,	// (0x0008de36) list_medium_line_t3_t2_ParamLimits

0x06a1,	// (0x0008de36) list_medium_line_t3_t2

0x06b7,	// (0x0008de4c) list_medium_line_t3_t3_ParamLimits

0x06b7,	// (0x0008de4c) list_medium_line_t3_t3

0x0002,

0xfd6d,	// (0x0009d502) list_medium_line_t3_t_ParamLimits

0xfd6d,	// (0x0009d502) list_medium_line_t3_t

0xf0ba,	// (0x0009c84f) list_medium_line_g3_g1_ParamLimits

0xf0ba,	// (0x0009c84f) list_medium_line_g3_g1

0x8776,	// (0x00095f0b) list_medium_line_g3_g2_ParamLimits

0x8776,	// (0x00095f0b) list_medium_line_g3_g2

0x6fa7,	// (0x0009473c) list_medium_line_g3_g3_ParamLimits

0x6fa7,	// (0x0009473c) list_medium_line_g3_g3

0x0002,

0xfd74,	// (0x0009d509) list_medium_line_g3_g_ParamLimits

0xfd74,	// (0x0009d509) list_medium_line_g3_g

0x06cc,	// (0x0008de61) list_medium_line_g3_t1_ParamLimits

0x06cc,	// (0x0008de61) list_medium_line_g3_t1

0xf0ba,	// (0x0009c84f) list_medium_line_t2_g3_g1_ParamLimits

0xf0ba,	// (0x0009c84f) list_medium_line_t2_g3_g1

0x8776,	// (0x00095f0b) list_medium_line_t2_g3_g2_ParamLimits

0x8776,	// (0x00095f0b) list_medium_line_t2_g3_g2

0x6fa7,	// (0x0009473c) list_medium_line_t2_g3_g3_ParamLimits

0x6fa7,	// (0x0009473c) list_medium_line_t2_g3_g3

0x0002,

0xfd74,	// (0x0009d509) list_medium_line_t2_g3_g_ParamLimits

0xfd74,	// (0x0009d509) list_medium_line_t2_g3_g

0x06e1,	// (0x0008de76) list_medium_line_t2_g3_t1_ParamLimits

0x06e1,	// (0x0008de76) list_medium_line_t2_g3_t1

0x06fb,	// (0x0008de90) list_medium_line_t2_g3_t2_ParamLimits

0x06fb,	// (0x0008de90) list_medium_line_t2_g3_t2

0x0001,

0xfd7b,	// (0x0009d510) list_medium_line_t2_g3_t_ParamLimits

0xfd7b,	// (0x0009d510) list_medium_line_t2_g3_t

0xf0ba,	// (0x0009c84f) list_medium_line_t3_g3_g1_ParamLimits

0xf0ba,	// (0x0009c84f) list_medium_line_t3_g3_g1

0x8776,	// (0x00095f0b) list_medium_line_t3_g3_g2_ParamLimits

0x8776,	// (0x00095f0b) list_medium_line_t3_g3_g2

0x6fa7,	// (0x0009473c) list_medium_line_t3_g3_g3_ParamLimits

0x6fa7,	// (0x0009473c) list_medium_line_t3_g3_g3

0x0002,

0xfd74,	// (0x0009d509) list_medium_line_t3_g3_g_ParamLimits

0xfd74,	// (0x0009d509) list_medium_line_t3_g3_g

0x0715,	// (0x0008deaa) list_medium_line_t3_g3_t1_ParamLimits

0x0715,	// (0x0008deaa) list_medium_line_t3_g3_t1

0x072e,	// (0x0008dec3) list_medium_line_t3_g3_t2_ParamLimits

0x072e,	// (0x0008dec3) list_medium_line_t3_g3_t2

0x0744,	// (0x0008ded9) list_medium_line_t3_g3_t3_ParamLimits

0x0744,	// (0x0008ded9) list_medium_line_t3_g3_t3

0x0002,

0xfd80,	// (0x0009d515) list_medium_line_t3_g3_t_ParamLimits

0xfd80,	// (0x0009d515) list_medium_line_t3_g3_t

0x86d9,	// (0x00095e6e) list_medium_line_right_iconx2_g1

0x85c1,	// (0x00095d56) list_medium_line_right_iconx2_g2

0x0001,

0xfd87,	// (0x0009d51c) list_medium_line_right_iconx2_g

0x8782,	// (0x00095f17) list_medium_line_right_iconx2_t1

0x86d9,	// (0x00095e6e) list_medium_line_t2_right_iconx2_g1

0x85c1,	// (0x00095d56) list_medium_line_t2_right_iconx2_g2

0x0001,

0xfd87,	// (0x0009d51c) list_medium_line_t2_right_iconx2_g

0x075e,	// (0x0008def3) list_medium_line_t2_right_iconx2_t1

0x076e,	// (0x0008df03) list_medium_line_t2_right_iconx2_t2

0x0001,

0xfd8c,	// (0x0009d521) list_medium_line_t2_right_iconx2_t

0x077e,	// (0x0008df13) list_medium_line_x4_t4_t1

0x078c,	// (0x0008df21) list_medium_line_x4_t4_t2

0x079c,	// (0x0008df31) list_medium_line_x4_t4_t3

0x07ac,	// (0x0008df41) list_medium_line_x4_t4_t4

0x0003,

0xfd91,	// (0x0009d526) list_medium_line_x4_t4_t

0x87d1,	// (0x00095f66) tport_appsw_pane_ParamLimits

0x87d1,	// (0x00095f66) tport_appsw_pane

0x87e8,	// (0x00095f7d) tport_contact_pane_ParamLimits

0x87e8,	// (0x00095f7d) tport_contact_pane

0x8800,	// (0x00095f95) tport_listscroll_pane_ParamLimits

0x8800,	// (0x00095f95) tport_listscroll_pane

0x8814,	// (0x00095fa9) cell_tport_appsw_pane_ParamLimits

0x8814,	// (0x00095fa9) cell_tport_appsw_pane

0xd78b,	// (0x0009af20) tport_appsw_pane_g1_ParamLimits

0xd78b,	// (0x0009af20) tport_appsw_pane_g1

0xe7d2,	// (0x0009bf67) tport_contact_pane_g1

0xe7db,	// (0x0009bf70) tport_contact_pane_t1

0xe7e9,	// (0x0009bf7e) tport_contact_pane_t2

0x0001,

0xfd9a,	// (0x0009d52f) tport_contact_pane_t

0xe7f7,	// (0x0009bf8c) list_tport_pane

0xe800,	// (0x0009bf95) scroll_pane_cp_030

0x885e,	// (0x00095ff3) cell_tport_appsw_pane_g1

0x886e,	// (0x00096003) cell_tport_appsw_pane_t1

0x887c,	// (0x00096011) grid_highlight_pane_cp019

0x8884,	// (0x00096019) list_tport_double_graphic_pane_ParamLimits

0x8884,	// (0x00096019) list_tport_double_graphic_pane

0xac82,	// (0x00098417) list_highlight_pane_cp023_ParamLimits

0xac82,	// (0x00098417) list_highlight_pane_cp023

0x889b,	// (0x00096030) list_tport_double_graphic_pane_g1_ParamLimits

0x889b,	// (0x00096030) list_tport_double_graphic_pane_g1

0x88a8,	// (0x0009603d) list_tport_double_graphic_pane_t1_ParamLimits

0x88a8,	// (0x0009603d) list_tport_double_graphic_pane_t1

0x88bd,	// (0x00096052) list_tport_double_graphic_pane_t2_ParamLimits

0x88bd,	// (0x00096052) list_tport_double_graphic_pane_t2

0x0001,

0xfda6,	// (0x0009d53b) list_tport_double_graphic_pane_t_ParamLimits

0xfda6,	// (0x0009d53b) list_tport_double_graphic_pane_t

0x99fb,	// (0x00097190) main_cale_note_pane

0x6734,	// (0x00093ec9) cell_vitu2_function_top_wide_pane_cp01_ParamLimits

0x6734,	// (0x00093ec9) cell_vitu2_function_top_wide_pane_cp01

0x8038,	// (0x000957cd) wait_bar_pane_cp05_ParamLimits

0xac82,	// (0x00098417) listscroll_cmail_pane

0xe809,	// (0x0009bf9e) list_cmail_pane

0x88cf,	// (0x00096064) list_cmail_body_pane

0x88e6,	// (0x0009607b) list_single_cmail_header_caption_pane

0xe819,	// (0x0009bfae) list_single_cmail_header_detail_pane_ParamLimits

0xe819,	// (0x0009bfae) list_single_cmail_header_detail_pane

0xe84b,	// (0x0009bfe0) list_single_cmail_header_caption_pane_t1

0x07bc,	// (0x0008df51) list_single_cmail_header_detail_pane_g1_ParamLimits

0x07bc,	// (0x0008df51) list_single_cmail_header_detail_pane_g1

0xac24,	// (0x000983b9) list_single_cmail_header_detail_pane_g2_ParamLimits

0xac24,	// (0x000983b9) list_single_cmail_header_detail_pane_g2

0x0002,

0xfdab,	// (0x0009d540) list_single_cmail_header_detail_pane_g_ParamLimits

0xfdab,	// (0x0009d540) list_single_cmail_header_detail_pane_g

0x8903,	// (0x00096098) list_single_cmail_header_detail_pane_t1_ParamLimits

0x8903,	// (0x00096098) list_single_cmail_header_detail_pane_t1

0x8963,	// (0x000960f8) list_single_cmail_header_editor_pane_bg_ParamLimits

0x8963,	// (0x000960f8) list_single_cmail_header_editor_pane_bg

0xe3dc,	// (0x0009bb71) list_cmail_body_pane_g1

0xe86f,	// (0x0009c004) list_cmail_body_pane_t1

0xd7ab,	// (0x0009af40) list_single_cmail_header_editor_pane_bg_g1

0xadbf,	// (0x00098554) list_single_cmail_header_editor_pane_bg_g1_copy1

0xd7bb,	// (0x0009af50) list_single_cmail_header_editor_pane_bg_g1_copy2

0xd7b3,	// (0x0009af48) list_single_cmail_header_editor_pane_bg_g1_copy3

0xd9de,	// (0x0009b173) list_single_cmail_header_editor_pane_bg_g1_copy4

0xd7db,	// (0x0009af70) list_single_cmail_header_editor_pane_bg_g1_copy4_copy1

0xd7cb,	// (0x0009af60) list_single_cmail_header_editor_pane_bg_g1_copy4_copy2

0xd7d3,	// (0x0009af68) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3

0xad9f,	// (0x00098534) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3_copy1

0x897a,	// (0x0009610f) calenote_gesture_pane_ParamLimits

0x897a,	// (0x0009610f) calenote_gesture_pane

0x899a,	// (0x0009612f) calenote_window_pane_ParamLimits

0x899a,	// (0x0009612f) calenote_window_pane

0xe87d,	// (0x0009c012) popup_note_window_cp01

0x89b6,	// (0x0009614b) calenote_swipe_1_pane_ParamLimits

0x89b6,	// (0x0009614b) calenote_swipe_1_pane

0x8561,	// (0x00095cf6) calenote_swipe_2_pane_ParamLimits

0x8561,	// (0x00095cf6) calenote_swipe_2_pane

0xe632,	// (0x0009bdc7) calenote_swipe_1_pane_g1_ParamLimits

0xe632,	// (0x0009bdc7) calenote_swipe_1_pane_g1

0xe63f,	// (0x0009bdd4) calenote_swipe_1_pane_g2_ParamLimits

0xe63f,	// (0x0009bdd4) calenote_swipe_1_pane_g2

0x0001,

0xfcca,	// (0x0009d45f) calenote_swipe_1_pane_g_ParamLimits

0xfcca,	// (0x0009d45f) calenote_swipe_1_pane_g

0xe88f,	// (0x0009c024) calenote_swipe_1_pane_t1_ParamLimits

0xe88f,	// (0x0009c024) calenote_swipe_1_pane_t1

0xe632,	// (0x0009bdc7) calenote_swipe_2_pane_g1_ParamLimits

0xe632,	// (0x0009bdc7) calenote_swipe_2_pane_g1

0xe8ae,	// (0x0009c043) calenote_swipe_2_pane_g2_ParamLimits

0xe8ae,	// (0x0009c043) calenote_swipe_2_pane_g2

0x0001,

0xfdb7,	// (0x0009d54c) calenote_swipe_2_pane_g_ParamLimits

0xfdb7,	// (0x0009d54c) calenote_swipe_2_pane_g

0xe8ba,	// (0x0009c04f) calenote_swipe_2_pane_t1_ParamLimits

0xe8ba,	// (0x0009c04f) calenote_swipe_2_pane_t1

0x99fb,	// (0x00097190) main_mup_navstr_pane

0x5323,	// (0x00092ab8) main_mup3_pane_t7_ParamLimits

0x5323,	// (0x00092ab8) main_mup3_pane_t7

0xa83a,	// (0x00097fcf) main_mp4_pane_g6_ParamLimits

0xa83a,	// (0x00097fcf) main_mp4_pane_g6

0xa9fa,	// (0x0009818f) main_image3_pane_t4_ParamLimits

0xa9fa,	// (0x0009818f) main_image3_pane_t4

0x89cb,	// (0x00096160) popup_navstr_preview_pane_ParamLimits

0x89cb,	// (0x00096160) popup_navstr_preview_pane

0x89db,	// (0x00096170) scroll_navstr_pane_ParamLimits

0x89db,	// (0x00096170) scroll_navstr_pane

0x99fb,	// (0x00097190) bg_popup_preview_window_pane_cp04

0xe8e1,	// (0x0009c076) popup_navstr_preview_pane_t1

0x89ef,	// (0x00096184) scroll_navstr_pane_g1_ParamLimits

0x89ef,	// (0x00096184) scroll_navstr_pane_g1

0x8a03,	// (0x00096198) scroll_navstr_pane_t1_ParamLimits

0x8a03,	// (0x00096198) scroll_navstr_pane_t1

0xe886,	// (0x0009c01b) bg_button_pane_cp014

0xe886,	// (0x0009c01b) bg_button_pane_cp030

0x0234,	// (0x0008d9c9) list_double_fisheye_pane_g4_ParamLimits

0x0234,	// (0x0008d9c9) list_double_fisheye_pane_g4

0x0240,	// (0x0008d9d5) list_double_fisheye_pane_g5_ParamLimits

0x0240,	// (0x0008d9d5) list_double_fisheye_pane_g5

0xd185,	// (0x0009a91a) sp_fs_scroll_pane_cp03

0xe74b,	// (0x0009bee0) main_sp_fs_ctrlbar_pane_g1_ParamLimits

0xe757,	// (0x0009beec) main_sp_fs_ctrlbar_pane_g2_ParamLimits

0xfce7,	// (0x0009d47c) main_sp_fs_ctrlbar_pane_g_ParamLimits

0xe763,	// (0x0009bef8) main_sp_fs_ctrlbar_pane_t1_ParamLimits

0xe811,	// (0x0009bfa6) sp_fs_scroll_pane_cp02

0xa35a,	// (0x00097aef) popup_sp_fs_calendar_preview_list_single_pane_ParamLimits

0xa35a,	// (0x00097aef) popup_sp_fs_calendar_preview_list_single_pane

0x99fb,	// (0x00097190) main_cam6_pano_pane

0xac82,	// (0x00098417) main_mup3_pane_ParamLimits

0x99fb,	// (0x00097190) main_phacti_pane

0x7f09,	// (0x0009569e) bg_button_pane_cp11

0x7f23,	// (0x000956b8) main_mobtv_info_pane_g2_ParamLimits

0x7f23,	// (0x000956b8) main_mobtv_info_pane_g2

0x0001,

0xfc47,	// (0x0009d3dc) main_mobtv_info_pane_g_ParamLimits

0xfc47,	// (0x0009d3dc) main_mobtv_info_pane_g

0x8100,	// (0x00095895) sc_clock_pane_t5_ParamLimits

0x8100,	// (0x00095895) sc_clock_pane_t5

0x8334,	// (0x00095ac9) main_radioblah_pane_g1_ParamLimits

0xe564,	// (0x0009bcf9) main_radioblah_pane_t3_ParamLimits

0xe564,	// (0x0009bcf9) main_radioblah_pane_t3

0xe57c,	// (0x0009bd11) main_radioblah_pane_t4_ParamLimits

0xe57c,	// (0x0009bd11) main_radioblah_pane_t4

0x835c,	// (0x00095af1) main_radioblah_text_pane_ParamLimits

0x835c,	// (0x00095af1) main_radioblah_text_pane

0x836e,	// (0x00095b03) main_radioblah_info_pane_g1_ParamLimits

0x8407,	// (0x00095b9c) main_radioblah_info_pane_t4_ParamLimits

0x8407,	// (0x00095b9c) main_radioblah_info_pane_t4

0xac82,	// (0x00098417) main_sp_fs_calendar_pane

0x8a1a,	// (0x000961af) main_phacti_pane_g1

0x8a22,	// (0x000961b7) phacti_note_pane_ParamLimits

0x8a22,	// (0x000961b7) phacti_note_pane

0xe8f8,	// (0x0009c08d) phacti_term_pane_ParamLimits

0xe8f8,	// (0x0009c08d) phacti_term_pane

0xe90d,	// (0x0009c0a2) phacti_note_pane_t1_ParamLimits

0xe90d,	// (0x0009c0a2) phacti_note_pane_t1

0x8a36,	// (0x000961cb) phacti_term_pane_g1

0x8a3e,	// (0x000961d3) phacti_term_pane_t1_ParamLimits

0x8a3e,	// (0x000961d3) phacti_term_pane_t1

0xe924,	// (0x0009c0b9) popup_sp_fs_calendar_preview_list_single_pane_g1

0xe92c,	// (0x0009c0c1) popup_sp_fs_calendar_preview_list_single_pane_g2

0x0001,

0xfdc1,	// (0x0009d556) popup_sp_fs_calendar_preview_list_single_pane_g

0xe934,	// (0x0009c0c9) popup_sp_fs_calendar_preview_list_single_pane_t1_ParamLimits

0xe934,	// (0x0009c0c9) popup_sp_fs_calendar_preview_list_single_pane_t1

0xe94a,	// (0x0009c0df) aid_popup_sp_fs_bg_corner_pane

0xce04,	// (0x0009a599) popup_sp_fs_calendar_preview_bg_pane_g1

0x99fb,	// (0x00097190) popup_sp_fs_calendar_preview_bg_pane

0xe952,	// (0x0009c0e7) popup_sp_fs_calendar_preview_list_pane

0xc9cc,	// (0x0009a161) bg_main_sp_fs_cale_pane_ParamLimits

0xc9cc,	// (0x0009a161) bg_main_sp_fs_cale_pane

0x8ad2,	// (0x00096267) listscroll_cale_mrui_pane_ParamLimits

0x8ad2,	// (0x00096267) listscroll_cale_mrui_pane

0x8ae7,	// (0x0009627c) listscroll_sp_fs_schedule_track_pane

0x8af0,	// (0x00096285) main_sp_fs_ctrlbar_pane_cp01_ParamLimits

0x8af0,	// (0x00096285) main_sp_fs_ctrlbar_pane_cp01

0xe95a,	// (0x0009c0ef) main_sp_fs_ribbon_pane

0x8b03,	// (0x00096298) popup_sp_fs_cale_preview_window

0x8b15,	// (0x000962aa) list_single_sp_fs_schedule_track_pane_ParamLimits

0x8b15,	// (0x000962aa) list_single_sp_fs_schedule_track_pane

0xac82,	// (0x00098417) bg_sp_fs_highlight_list_pane_cp03_ParamLimits

0xac82,	// (0x00098417) bg_sp_fs_highlight_list_pane_cp03

0x8b29,	// (0x000962be) list_single_sp_fs_schedule_track_pane_g1_ParamLimits

0x8b29,	// (0x000962be) list_single_sp_fs_schedule_track_pane_g1

0x8b35,	// (0x000962ca) list_single_sp_fs_schedule_track_pane_g2_ParamLimits

0x8b35,	// (0x000962ca) list_single_sp_fs_schedule_track_pane_g2

0x0001,

0xfdc6,	// (0x0009d55b) list_single_sp_fs_schedule_track_pane_g_ParamLimits

0xfdc6,	// (0x0009d55b) list_single_sp_fs_schedule_track_pane_g

0x8b41,	// (0x000962d6) list_single_sp_fs_schedule_track_pane_t1_ParamLimits

0x8b41,	// (0x000962d6) list_single_sp_fs_schedule_track_pane_t1

0x8b63,	// (0x000962f8) sp_fs_schedule_track_pane_ParamLimits

0x8b63,	// (0x000962f8) sp_fs_schedule_track_pane

0xe962,	// (0x0009c0f7) sp_fs_schedule_track_pane_g1

0xe96a,	// (0x0009c0ff) sp_fs_schedule_track_pane_g2

0xe972,	// (0x0009c107) sp_fs_schedule_track_pane_g3

0xe97a,	// (0x0009c10f) sp_fs_schedule_track_pane_g4

0xe982,	// (0x0009c117) sp_fs_schedule_track_pane_g5

0x0004,

0xfdcb,	// (0x0009d560) sp_fs_schedule_track_pane_g

0xd7ab,	// (0x0009af40) bg_sp_fs_schedule_viewer_highlight_g1

0xadbf,	// (0x00098554) bg_sp_fs_schedule_viewer_highlight_g2

0xd7b3,	// (0x0009af48) bg_sp_fs_schedule_viewer_highlight_g3

0xd7bb,	// (0x0009af50) bg_sp_fs_schedule_viewer_highlight_g4

0xd9de,	// (0x0009b173) bg_sp_fs_schedule_viewer_highlight_g5

0xd7cb,	// (0x0009af60) bg_sp_fs_schedule_viewer_highlight_g6

0xd7d3,	// (0x0009af68) bg_sp_fs_schedule_viewer_highlight_g7

0xd7db,	// (0x0009af70) bg_sp_fs_schedule_viewer_highlight_g8

0xad9f,	// (0x00098534) bg_sp_fs_schedule_viewer_highlight_g9

0x0008,

0xfdd6,	// (0x0009d56b) bg_sp_fs_schedule_viewer_highlight_g

0x99fb,	// (0x00097190) bg_main_sp_fs_ribbon_pane

0x8b78,	// (0x0009630d) main_sp_fs_ribbon_pane_g1

0xe98a,	// (0x0009c11f) main_sp_fs_ribbon_pane_t1

0x8b81,	// (0x00096316) main_sp_fs_ribbon_pane_t2

0xe999,	// (0x0009c12e) main_sp_fs_ribbon_pane_t3

0x0002,

0xfde9,	// (0x0009d57e) main_sp_fs_ribbon_pane_t

0xe9a8,	// (0x0009c13d) main_sp_fs_ribbon_scheduler_pane

0xe9b0,	// (0x0009c145) bg_main_sp_fs_ribbon_pane_g1

0xe9b9,	// (0x0009c14e) bg_main_sp_fs_ribbon_pane_g2

0xe9c2,	// (0x0009c157) bg_main_sp_fs_ribbon_pane_g3

0x0002,

0xfdf0,	// (0x0009d585) bg_main_sp_fs_ribbon_pane_g

0xe9ca,	// (0x0009c15f) main_sp_fs_ribbon_scheduler_pane_g1

0xe9d3,	// (0x0009c168) main_sp_fs_ribbon_scheduler_pane_g2

0xe9dc,	// (0x0009c171) main_sp_fs_ribbon_scheduler_pane_g3

0x0002,

0xfdf7,	// (0x0009d58c) main_sp_fs_ribbon_scheduler_pane_g

0xe9e5,	// (0x0009c17a) list_cale_mrui_pane

0x8b90,	// (0x00096325) sp_fs_scroll_pane_cp07_ParamLimits

0x8b90,	// (0x00096325) sp_fs_scroll_pane_cp07

0x8bac,	// (0x00096341) bg_sp_fs_schedule_viewer_highlight_ParamLimits

0x8bac,	// (0x00096341) bg_sp_fs_schedule_viewer_highlight

0xe9f2,	// (0x0009c187) list_single_sp_fs_schedule_track_pane_cp01

0xe9fa,	// (0x0009c18f) list_sp_fs_schedule_track_pane

0xea02,	// (0x0009c197) sp_fs_scroll_pane_cp06_ParamLimits

0xea02,	// (0x0009c197) sp_fs_scroll_pane_cp06

0xce04,	// (0x0009a599) bgmain_sp_fs_calendar_pane_g1

0x07d4,	// (0x0008df69) list_single_cale_mrui_pane_ParamLimits

0x07d4,	// (0x0008df69) list_single_cale_mrui_pane

0x8bbe,	// (0x00096353) list_single_cale_mrui_row_pane_ParamLimits

0x8bbe,	// (0x00096353) list_single_cale_mrui_row_pane

0x8bcb,	// (0x00096360) list_single_cale_mrui_row_pane_g1_ParamLimits

0x8bcb,	// (0x00096360) list_single_cale_mrui_row_pane_g1

0x8c03,	// (0x00096398) list_single_cale_mrui_row_pane_t1_ParamLimits

0x8c03,	// (0x00096398) list_single_cale_mrui_row_pane_t1

0x07f7,	// (0x0008df8c) list_single_cale_mrui_row_pane_t2_ParamLimits

0x07f7,	// (0x0008df8c) list_single_cale_mrui_row_pane_t2

0x8c15,	// (0x000963aa) list_single_cale_mrui_row_pane_t3_ParamLimits

0x8c15,	// (0x000963aa) list_single_cale_mrui_row_pane_t3

0x8c44,	// (0x000963d9) list_single_cale_mrui_row_pane_t4_ParamLimits

0x8c44,	// (0x000963d9) list_single_cale_mrui_row_pane_t4

0x0003,

0xfe05,	// (0x0009d59a) list_single_cale_mrui_row_pane_t_ParamLimits

0xfe05,	// (0x0009d59a) list_single_cale_mrui_row_pane_t

0x085d,	// (0x0008dff2) list_single_cmail_header_editor_pane_bg_cp01_ParamLimits

0x085d,	// (0x0008dff2) list_single_cmail_header_editor_pane_bg_cp01

0x0881,	// (0x0008e016) list_single_cmail_header_editor_pane_bg_cp02_ParamLimits

0x0881,	// (0x0008e016) list_single_cmail_header_editor_pane_bg_cp02

0x8c75,	// (0x0009640a) main_radioblah_text_pane_t1_ParamLimits

0x8c75,	// (0x0009640a) main_radioblah_text_pane_t1

0xea21,	// (0x0009c1b6) cam6_indi_pane_cp01

0xea29,	// (0x0009c1be) cam6_mode_pane_cp01

0xea31,	// (0x0009c1c6) cam6_pano_pane

0xea3a,	// (0x0009c1cf) cam6_zoom_pane_cp01

0xea44,	// (0x0009c1d9) cam6_pano_image_pane

0xea4d,	// (0x0009c1e2) cam6_pano_pane_g1

0xe3dc,	// (0x0009bb71) cam6_pano_pane_g2

0xea56,	// (0x0009c1eb) cam6_pano_pane_g3

0xea5f,	// (0x0009c1f4) cam6_pano_pane_g4

0xd3af,	// (0x0009ab44) cam6_pano_pane_g5

0xea68,	// (0x0009c1fd) cam6_pano_pane_g6

0xea70,	// (0x0009c205) cam6_pano_pane_g7

0xea78,	// (0x0009c20d) cam6_pano_pane_g8

0xea81,	// (0x0009c216) cam6_pano_pane_g9

0x0008,

0xfe0e,	// (0x0009d5a3) cam6_pano_pane_g

0x99fb,	// (0x00097190) main_browser_tag_pane

0xe8d9,	// (0x0009c06e) grid_navstr_albumart_pane

0xea8c,	// (0x0009c221) cell_navstr_albumart_pane_ParamLimits

0xea8c,	// (0x0009c221) cell_navstr_albumart_pane

0xeaa8,	// (0x0009c23d) cell_navstr_albumart_pane_g1

0xc7d9,	// (0x00099f6e) cell_navstr_albumart_pane_g2

0xc7e9,	// (0x00099f7e) cell_navstr_albumart_pane_g3

0xc7e1,	// (0x00099f76) cell_navstr_albumart_pane_g4

0x0003,

0xfe21,	// (0x0009d5b6) cell_navstr_albumart_pane_g

0x8c90,	// (0x00096425) bt_list_pane_ParamLimits

0x8c90,	// (0x00096425) bt_list_pane

0x8ca6,	// (0x0009643b) bt_list_pane_t1

0x8cb5,	// (0x0009644a) bt_list_pane_t2

0x0001,

0xfe2a,	// (0x0009d5bf) bt_list_pane_t

0x99fb,	// (0x00097190) main_cale_prevew_pane

0x8cc4,	// (0x00096459) popup_cale_preview_window_ParamLimits

0x8cc4,	// (0x00096459) popup_cale_preview_window

0xac82,	// (0x00098417) bg_popup_preview_window_pane_cp05_ParamLimits

0xac82,	// (0x00098417) bg_popup_preview_window_pane_cp05

0xeab0,	// (0x0009c245) list_cale_preview_pane_ParamLimits

0xeab0,	// (0x0009c245) list_cale_preview_pane

0x8ce1,	// (0x00096476) list_double_cale_preview_pane_ParamLimits

0x8ce1,	// (0x00096476) list_double_cale_preview_pane

0x8cf5,	// (0x0009648a) list_single_cale_preview_pane_ParamLimits

0x8cf5,	// (0x0009648a) list_single_cale_preview_pane

0x8d0d,	// (0x000964a2) list_single_cale_preview_pane_g1

0x8d15,	// (0x000964aa) list_single_cale_preview_pane_t1_ParamLimits

0x8d15,	// (0x000964aa) list_single_cale_preview_pane_t1

0x8d2a,	// (0x000964bf) list_double_cale_preview_pane_g1

0x8d32,	// (0x000964c7) list_double_cale_preview_pane_t1_ParamLimits

0x8d32,	// (0x000964c7) list_double_cale_preview_pane_t1

0x8d47,	// (0x000964dc) list_double_cale_preview_pane_t2_ParamLimits

0x8d47,	// (0x000964dc) list_double_cale_preview_pane_t2

0x0001,

0xfe2f,	// (0x0009d5c4) list_double_cale_preview_pane_t_ParamLimits

0xfe2f,	// (0x0009d5c4) list_double_cale_preview_pane_t

0x99fb,	// (0x00097190) main_ezdial_pane

0xac82,	// (0x00098417) main_sp_fs_email_pane_ParamLimits

0x85c9,	// (0x00095d5e) cmail_ddmenu_btn01_pane_ParamLimits

0x85c9,	// (0x00095d5e) cmail_ddmenu_btn01_pane

0x85dc,	// (0x00095d71) cmail_ddmenu_btn02_pane_ParamLimits

0x85dc,	// (0x00095d71) cmail_ddmenu_btn02_pane

0x85ff,	// (0x00095d94) cmail_ddmenu_btn03_pane_ParamLimits

0x85ff,	// (0x00095d94) cmail_ddmenu_btn03_pane

0x8627,	// (0x00095dbc) main_sp_fs_ctrlbar_pane_ParamLimits

0x864b,	// (0x00095de0) main_sp_fs_listscroll_pane_te_cp01_ParamLimits

0x88cf,	// (0x00096064) list_cmail_body_pane_ParamLimits

0xe859,	// (0x0009bfee) bg_button_pane_cp12

0xe862,	// (0x0009bff7) list_single_cmail_header_detail_pane_g3_ParamLimits

0xe862,	// (0x0009bff7) list_single_cmail_header_detail_pane_g3

0x893f,	// (0x000960d4) list_single_cmail_header_detail_pane_t2_ParamLimits

0x893f,	// (0x000960d4) list_single_cmail_header_detail_pane_t2

0x0001,

0xfdb2,	// (0x0009d547) list_single_cmail_header_detail_pane_t_ParamLimits

0xfdb2,	// (0x0009d547) list_single_cmail_header_detail_pane_t

0x8a53,	// (0x000961e8) phacti_term_pane_t2_ParamLimits

0x8a53,	// (0x000961e8) phacti_term_pane_t2

0x0001,

0xfdbc,	// (0x0009d551) phacti_term_pane_t_ParamLimits

0xfdbc,	// (0x0009d551) phacti_term_pane_t

0xeabc,	// (0x0009c251) aid_size_list_single_double

0x8d5f,	// (0x000964f4) popup_ezdial_listscroll_window

0x8d7b,	// (0x00096510) popup_number_entry_window_cp01

0xa3fe,	// (0x00097b93) bg_popup_call_pane_cp09

0xeac8,	// (0x0009c25d) ezdial_list_pane

0xead0,	// (0x0009c265) scroll_pane_cp23

0xc9cc,	// (0x0009a161) bg_button_pane_cp028_ParamLimits

0xc9cc,	// (0x0009a161) bg_button_pane_cp028

0x8d89,	// (0x0009651e) cmail_ddmenu_btn01_pane_g1_ParamLimits

0x8d89,	// (0x0009651e) cmail_ddmenu_btn01_pane_g1

0x8d95,	// (0x0009652a) cmail_ddmenu_btn01_pane_g2_ParamLimits

0x8d95,	// (0x0009652a) cmail_ddmenu_btn01_pane_g2

0x0001,

0xfe34,	// (0x0009d5c9) cmail_ddmenu_btn01_pane_g_ParamLimits

0xfe34,	// (0x0009d5c9) cmail_ddmenu_btn01_pane_g

0xead8,	// (0x0009c26d) cmail_ddmenu_btn01_pane_t1_ParamLimits

0xead8,	// (0x0009c26d) cmail_ddmenu_btn01_pane_t1

0xc9cc,	// (0x0009a161) bg_button_pane_cp029_ParamLimits

0xc9cc,	// (0x0009a161) bg_button_pane_cp029

0x8da1,	// (0x00096536) cmail_ddmenu_btn02_pane_g1_ParamLimits

0x8da1,	// (0x00096536) cmail_ddmenu_btn02_pane_g1

0x8db9,	// (0x0009654e) cmail_ddmenu_btn02_pane_t1_ParamLimits

0x8db9,	// (0x0009654e) cmail_ddmenu_btn02_pane_t1

0xac82,	// (0x00098417) bg_button_pane_cp031_ParamLimits

0xac82,	// (0x00098417) bg_button_pane_cp031

0x8da1,	// (0x00096536) cmail_ddmenu_btn03_pane_g1_ParamLimits

0x8da1,	// (0x00096536) cmail_ddmenu_btn03_pane_g1

0x8db9,	// (0x0009654e) cmail_ddmenu_btn03_pane_t1_ParamLimits

0x8db9,	// (0x0009654e) cmail_ddmenu_btn03_pane_t1

0x5f04,	// (0x00093699) cell_dialer2_keypad_pane_t1_ParamLimits

0x5f1e,	// (0x000936b3) cell_dialer2_keypad_pane_t1_copy1_ParamLimits

0x5f1e,	// (0x000936b3) cell_dialer2_keypad_pane_t1_copy1

0x7d2a,	// (0x000954bf) ncimui_group_button_pane

0xac82,	// (0x00098417) main_sp_fs_calendar_pane_ParamLimits

0x88e6,	// (0x0009607b) list_single_cmail_header_caption_pane_ParamLimits

0x8a86,	// (0x0009621b) aid_recal_txt_sm_pane

0x99fb,	// (0x00097190) mian_recal_day_pane

0x8b03,	// (0x00096298) popup_sp_fs_cale_preview_window_ParamLimits

0xeaed,	// (0x0009c282) list_recal_day_pane

0x8df9,	// (0x0009658e) list_single_recal_day_pane_ParamLimits

0x8df9,	// (0x0009658e) list_single_recal_day_pane

0xeb14,	// (0x0009c2a9) list_single_recal_day_pane_g1_ParamLimits

0xeb14,	// (0x0009c2a9) list_single_recal_day_pane_g1

0x8e0b,	// (0x000965a0) list_single_recal_day_pane_g2_ParamLimits

0x8e0b,	// (0x000965a0) list_single_recal_day_pane_g2

0x8e17,	// (0x000965ac) list_single_recal_day_pane_g3_ParamLimits

0x8e17,	// (0x000965ac) list_single_recal_day_pane_g3

0x08a1,	// (0x0008e036) list_single_recal_day_pane_g4_ParamLimits

0x08a1,	// (0x0008e036) list_single_recal_day_pane_g4

0x8e23,	// (0x000965b8) list_single_recal_day_pane_g5_ParamLimits

0x8e23,	// (0x000965b8) list_single_recal_day_pane_g5

0x8e2f,	// (0x000965c4) list_single_recal_day_pane_g6_ParamLimits

0x8e2f,	// (0x000965c4) list_single_recal_day_pane_g6

0x0004,

0xfe43,	// (0x0009d5d8) list_single_recal_day_pane_g_ParamLimits

0xfe43,	// (0x0009d5d8) list_single_recal_day_pane_g

0x8e43,	// (0x000965d8) list_single_recal_day_pane_t1

0xac30,	// (0x000983c5) list_single_recal_day_pane_t2

0x0001,

0xfe4e,	// (0x0009d5e3) list_single_recal_day_pane_t

0x8e55,	// (0x000965ea) ncimui_query_button_pane_ParamLimits

0x8e55,	// (0x000965ea) ncimui_query_button_pane

0x8e65,	// (0x000965fa) ncimui_query_button_pane_t1_ParamLimits

0x8e65,	// (0x000965fa) ncimui_query_button_pane_t1

0xeb20,	// (0x0009c2b5) ncimui_query_button_pane_t2_ParamLimits

0xeb20,	// (0x0009c2b5) ncimui_query_button_pane_t2

0x0001,

0xfe53,	// (0x0009d5e8) ncimui_query_button_pane_t_ParamLimits

0xfe53,	// (0x0009d5e8) ncimui_query_button_pane_t

0x8e78,	// (0x0009660d) query_button_pane_ParamLimits

0x8e78,	// (0x0009660d) query_button_pane

0x99fb,	// (0x00097190) bg_button_pane_cp0028

0xeb33,	// (0x0009c2c8) query_button_pane_t1

0x3e9e,	// (0x00091633) main_tport_pane_ParamLimits

0x8790,	// (0x00095f25) bg_popup_window_pane_cp01_ParamLimits

0x8790,	// (0x00095f25) bg_popup_window_pane_cp01

0x87a9,	// (0x00095f3e) heading_pane_cp08_ParamLimits

0x87a9,	// (0x00095f3e) heading_pane_cp08

0x87bc,	// (0x00095f51) heading_pane_cp07_ParamLimits

0x87bc,	// (0x00095f51) heading_pane_cp07

0x885e,	// (0x00095ff3) cell_tport_appsw_pane_g2

0x0002,

0xfd9f,	// (0x0009d534) cell_tport_appsw_pane_g

0x3425,	// (0x00090bba) input_candi_list_open_g1

0xaf82,	// (0x00098717) list_cale_time_pane_g6_ParamLimits

0xaf82,	// (0x00098717) list_cale_time_pane_g6

0x4c7a,	// (0x0009240f) aid_size_touch_calib_1_ParamLimits

0x4c7a,	// (0x0009240f) aid_size_touch_calib_1

0x4c8c,	// (0x00092421) aid_size_touch_calib_2_ParamLimits

0x4c8c,	// (0x00092421) aid_size_touch_calib_2

0x4ca4,	// (0x00092439) aid_size_touch_calib_3_ParamLimits

0x4ca4,	// (0x00092439) aid_size_touch_calib_3

0x4cc2,	// (0x00092457) aid_size_touch_calib_4_ParamLimits

0x4cc2,	// (0x00092457) aid_size_touch_calib_4

0x4cda,	// (0x0009246f) main_touch_calib_button_group_pane_ParamLimits

0x4cda,	// (0x0009246f) main_touch_calib_button_group_pane

0x4cf2,	// (0x00092487) main_touch_calib_pane_g1_ParamLimits

0x4d04,	// (0x00092499) main_touch_calib_pane_g2_ParamLimits

0x4d16,	// (0x000924ab) main_touch_calib_pane_g3_ParamLimits

0x4d28,	// (0x000924bd) main_touch_calib_pane_g4_ParamLimits

0xf754,	// (0x0009cee9) main_touch_calib_pane_g_ParamLimits

0x4d3a,	// (0x000924cf) main_touch_calib_pane_t1_ParamLimits

0x4d54,	// (0x000924e9) main_touch_calib_pane_t2_ParamLimits

0x4d6e,	// (0x00092503) main_touch_calib_pane_t3_ParamLimits

0x4d82,	// (0x00092517) main_touch_calib_pane_t4_ParamLimits

0x4d98,	// (0x0009252d) main_touch_calib_pane_t5_ParamLimits

0xf75d,	// (0x0009cef2) main_touch_calib_pane_t_ParamLimits

0xd12b,	// (0x0009a8c0) list_single_fp_cale_pane_g3_ParamLimits

0xd12b,	// (0x0009a8c0) list_single_fp_cale_pane_g3

0xac82,	// (0x00098417) bg_button_pane_cp012_ParamLimits

0xac82,	// (0x00098417) bg_vkb2_func_pane_cp03_ParamLimits

0x6f5d,	// (0x000946f2) cell_vitu2_function_top_pane_g1_ParamLimits

0xac82,	// (0x00098417) bg_vkb2_func_pane_cp04_ParamLimits

0x7cb5,	// (0x0009544a) main_ncimui_button_group_pane_ParamLimits

0x7cb5,	// (0x0009544a) main_ncimui_button_group_pane

0x7d15,	// (0x000954aa) main_ncimui_pane_t3_ParamLimits

0x7d15,	// (0x000954aa) main_ncimui_pane_t3

0xe8ef,	// (0x0009c084) phacti_button_group_pane

0xeabc,	// (0x0009c251) aid_size_list_single_double_ParamLimits

0x8d5f,	// (0x000964f4) popup_ezdial_listscroll_window_ParamLimits

0x8d7b,	// (0x00096510) popup_number_entry_window_cp01_ParamLimits

0x8e8b,	// (0x00096620) phacti_button_pane_ParamLimits

0x8e8b,	// (0x00096620) phacti_button_pane

0x99fb,	// (0x00097190) bg_button_pane_cp14

0xeb41,	// (0x0009c2d6) phacti_button_pane_t1

0x8e9c,	// (0x00096631) main_touch_calib_button_pane_ParamLimits

0x8e9c,	// (0x00096631) main_touch_calib_button_pane

0xa1ea,	// (0x0009797f) bg_button_pane_cp18_ParamLimits

0xa1ea,	// (0x0009797f) bg_button_pane_cp18

0xeb4f,	// (0x0009c2e4) main_touch_calib_button_pane_t1_ParamLimits

0xeb4f,	// (0x0009c2e4) main_touch_calib_button_pane_t1

0xeb65,	// (0x0009c2fa) main_touch_calib_button_pane_t2_ParamLimits

0xeb65,	// (0x0009c2fa) main_touch_calib_button_pane_t2

0x0001,

0xfe58,	// (0x0009d5ed) main_touch_calib_button_pane_t_ParamLimits

0xfe58,	// (0x0009d5ed) main_touch_calib_button_pane_t

0x99fb,	// (0x00097190) cell_ncimui_button_pane

0x99fb,	// (0x00097190) bg_button_pane_cp032

0xeb83,	// (0x0009c318) cell_ncimui_button_pane_t1

0xa9d8,	// (0x0009816d) image3_infobar_pane_ParamLimits

0xa9d8,	// (0x0009816d) image3_infobar_pane

0x812c,	// (0x000958c1) fs_bigclock_status_pane_ParamLimits

0x812c,	// (0x000958c1) fs_bigclock_status_pane

0x8139,	// (0x000958ce) main_fs_bigclock_clock_pane_ParamLimits

0x8139,	// (0x000958ce) main_fs_bigclock_clock_pane

0x816b,	// (0x00095900) main_fs_bigclock_indi_pane_ParamLimits

0x816b,	// (0x00095900) main_fs_bigclock_indi_pane

0x81ab,	// (0x00095940) main_fs_bigclock_swipe_pane_ParamLimits

0x81ab,	// (0x00095940) main_fs_bigclock_swipe_pane

0x99fb,	// (0x00097190) main_fs_clock_dumped_data

0x81f7,	// (0x0009598c) list_single_fs_bigclock_indicator_pane_g1_ParamLimits

0x81f7,	// (0x0009598c) list_single_fs_bigclock_indicator_pane_g1

0x8210,	// (0x000959a5) list_single_fs_bigclock_indicator_pane_g2_ParamLimits

0x8210,	// (0x000959a5) list_single_fs_bigclock_indicator_pane_g2

0x822a,	// (0x000959bf) list_single_fs_bigclock_indicator_pane_g3_ParamLimits

0x822a,	// (0x000959bf) list_single_fs_bigclock_indicator_pane_g3

0x8244,	// (0x000959d9) list_single_fs_bigclock_indicator_pane_g4_ParamLimits

0x8244,	// (0x000959d9) list_single_fs_bigclock_indicator_pane_g4

0x0004,

0xfc7b,	// (0x0009d410) list_single_fs_bigclock_indicator_pane_g_ParamLimits

0xfc7b,	// (0x0009d410) list_single_fs_bigclock_indicator_pane_g

0x8273,	// (0x00095a08) list_single_fs_bigclock_indicator_pane_t1_ParamLimits

0x8273,	// (0x00095a08) list_single_fs_bigclock_indicator_pane_t1

0x829b,	// (0x00095a30) list_single_fs_bigclock_indicator_pane_t2_ParamLimits

0x829b,	// (0x00095a30) list_single_fs_bigclock_indicator_pane_t2

0x82c3,	// (0x00095a58) list_single_fs_bigclock_indicator_pane_t3_ParamLimits

0x82c3,	// (0x00095a58) list_single_fs_bigclock_indicator_pane_t3

0x82eb,	// (0x00095a80) list_single_fs_bigclock_indicator_pane_t4_ParamLimits

0x82eb,	// (0x00095a80) list_single_fs_bigclock_indicator_pane_t4

0x0004,

0xfc86,	// (0x0009d41b) list_single_fs_bigclock_indicator_pane_t_ParamLimits

0xfc86,	// (0x0009d41b) list_single_fs_bigclock_indicator_pane_t

0xeb91,	// (0x0009c326) image3_infobar_fav_pane_ParamLimits

0xeb91,	// (0x0009c326) image3_infobar_fav_pane

0xeba1,	// (0x0009c336) image3_infobar_loc_pane_ParamLimits

0xeba1,	// (0x0009c336) image3_infobar_loc_pane

0xebb7,	// (0x0009c34c) image3_infobar_time_pane_ParamLimits

0xebb7,	// (0x0009c34c) image3_infobar_time_pane

0xce04,	// (0x0009a599) image3_infobar_time_pane_g1

0xebc7,	// (0x0009c35c) image3_infobar_time_pane_t1

0xce04,	// (0x0009a599) image3_infobar_loc_pane_g1

0xebd5,	// (0x0009c36a) image3_infobar_loc_pane_g2

0x0001,

0xfe5d,	// (0x0009d5f2) image3_infobar_loc_pane_g

0xebdd,	// (0x0009c372) image3_infobar_loc_pane_t1

0xce04,	// (0x0009a599) image3_infobar_fav_pane_g1

0xebeb,	// (0x0009c380) image3_infobar_fav_pane_g2

0x0001,

0xfe62,	// (0x0009d5f7) image3_infobar_fav_pane_g

0xebf3,	// (0x0009c388) fs_bigclock_status_battery_pane

0xebfc,	// (0x0009c391) fs_bigclock_status_signal_pane

0xec05,	// (0x0009c39a) fs_bigclock_status_title_pane

0xec0e,	// (0x0009c3a3) fs_bigclock_status_signal_pane_g1

0xec17,	// (0x0009c3ac) fs_bigclock_status_signal_pane_g2

0x0001,

0xfe67,	// (0x0009d5fc) fs_bigclock_status_signal_pane_g

0xec1f,	// (0x0009c3b4) fs_bigclock_status_battery_pane_g1

0xec28,	// (0x0009c3bd) fs_bigclock_status_battery_pane_g2

0x0001,

0xfe6c,	// (0x0009d601) fs_bigclock_status_battery_pane_g

0xec30,	// (0x0009c3c5) fs_bigclock_status_title_pane_t1

0x8eb1,	// (0x00096646) main_fs_bigclock_clock_pane_g1

0x8eb1,	// (0x00096646) main_fs_bigclock_clock_pane_g2

0x8ec4,	// (0x00096659) main_fs_bigclock_clock_pane_g3

0x8ec4,	// (0x00096659) main_fs_bigclock_clock_pane_g4

0x0003,

0xfe71,	// (0x0009d606) main_fs_bigclock_clock_pane_g

0x8edb,	// (0x00096670) main_fs_bigclock_clock_pane_t1

0x8ef1,	// (0x00096686) main_fs_bigclock_clock_pane_t2

0x0001,

0xfe7a,	// (0x0009d60f) main_fs_bigclock_clock_pane_t

0xec3e,	// (0x0009c3d3) list_single_fs_bigclock_indicator_pane_ParamLimits

0xec3e,	// (0x0009c3d3) list_single_fs_bigclock_indicator_pane

0xec4f,	// (0x0009c3e4) list_single_fs_bigclock_pane_ParamLimits

0xec4f,	// (0x0009c3e4) list_single_fs_bigclock_pane

0xec75,	// (0x0009c40a) main_fs_bigclock_indicator_pane_t1

0xec84,	// (0x0009c419) list_single_fs_bigclock_pane_g1

0xec8c,	// (0x0009c421) list_single_fs_bigclock_pane_t1

0xce04,	// (0x0009a599) main_fs_bigclock_swipe_pane_g1

0xeccf,	// (0x0009c464) main_fs_bigclock_swipe_pane_g2

0x0001,

0xfe8b,	// (0x0009d620) main_fs_bigclock_swipe_pane_g

0xecd7,	// (0x0009c46c) main_fs_bigclock_swipe_pane_t1_ParamLimits

0xecd7,	// (0x0009c46c) main_fs_bigclock_swipe_pane_t1

0x2c99,	// (0x0009042e) call_type_pane_ParamLimits

0x99fb,	// (0x00097190) main_btmg_pane

0x8bf7,	// (0x0009638c) list_single_cale_mrui_row_pane_g2_ParamLimits

0x8bf7,	// (0x0009638c) list_single_cale_mrui_row_pane_g2

0x0002,

0xfdfe,	// (0x0009d593) list_single_cale_mrui_row_pane_g_ParamLimits

0xfdfe,	// (0x0009d593) list_single_cale_mrui_row_pane_g

0x8de7,	// (0x0009657c) list_recal_vselct_arw_lo_pane

0xeb0c,	// (0x0009c2a1) list_recal_vselct_arw_up_pane

0x8def,	// (0x00096584) list_recal_vselct_pane

0x8f53,	// (0x000966e8) btmg_button_pane

0x8f5d,	// (0x000966f2) main_btmg_pane_g1

0x99fb,	// (0x00097190) bg_button_pane_cp044

0xecf4,	// (0x0009c489) btmg_button_pane_t1

0xc9b8,	// (0x0009a14d) aid_listscroll_gen

0xac82,	// (0x00098417) main_cntbar_detail_pane

0xe809,	// (0x0009bf9e) list_cmail_folder_pane

0xd185,	// (0x0009a91a) sp_fs_scroll_pane_cp03_ParamLimits

0xac42,	// (0x000983d7) list_single_fs_dyc_pane_cp01_ParamLimits

0xac42,	// (0x000983d7) list_single_fs_dyc_pane_cp01

0xed02,	// (0x0009c497) aid_size_cmail_indent

0xac5c,	// (0x000983f1) list_single_dyc_row_pane_cp01

0x8f9b,	// (0x00096730) cntbar_detail_list_pane_ParamLimits

0x8f9b,	// (0x00096730) cntbar_detail_list_pane

0x8fed,	// (0x00096782) main_cntbar_detail_cont_pane_ParamLimits

0x8fed,	// (0x00096782) main_cntbar_detail_cont_pane

0xd185,	// (0x0009a91a) scroll_pane_cp032_ParamLimits

0xd185,	// (0x0009a91a) scroll_pane_cp032

0x9001,	// (0x00096796) cntbar_detail_list_event_pane_ParamLimits

0x9001,	// (0x00096796) cntbar_detail_list_event_pane

0x8fad,	// (0x00096742) cntbar_detail_list_shct_pane

0xae0d,	// (0x000985a2) aid_list_gen

0xed0b,	// (0x0009c4a0) aid_scroll

0xed14,	// (0x0009c4a9) aid_size_touch_scroll_bar

0x7575,	// (0x00094d0a) aid_list_double

0x7563,	// (0x00094cf8) aid_list_single

0x7563,	// (0x00094cf8) aid_list_single_lg

0x08b9,	// (0x0008e04e) aid_list_z_g_a_sm

0x9011,	// (0x000967a6) aid_list_z_g_d

0x08c1,	// (0x0008e056) aid_txt_z_prm

0x08cf,	// (0x0008e064) aid_txt_z_prm_cp01

0x08dd,	// (0x0008e072) aid_txt_z_sec

0x9019,	// (0x000967ae) main_cntbar_detail_cont_pane_g1_ParamLimits

0x9019,	// (0x000967ae) main_cntbar_detail_cont_pane_g1

0x902d,	// (0x000967c2) main_cntbar_detail_cont_pane_g2_ParamLimits

0x902d,	// (0x000967c2) main_cntbar_detail_cont_pane_g2

0x0001,

0xfe90,	// (0x0009d625) main_cntbar_detail_cont_pane_g_ParamLimits

0xfe90,	// (0x0009d625) main_cntbar_detail_cont_pane_g

0xed1d,	// (0x0009c4b2) main_cntbar_detail_cont_pane_t1

0xed2b,	// (0x0009c4c0) main_cntbar_detail_cont_pane_t2

0xed39,	// (0x0009c4ce) main_cntbar_detail_cont_pane_t3

0x0002,

0xfe95,	// (0x0009d62a) main_cntbar_detail_cont_pane_t

0x903d,	// (0x000967d2) cell_cntbar_detail_list_shct_pane_ParamLimits

0x903d,	// (0x000967d2) cell_cntbar_detail_list_shct_pane

0xed47,	// (0x0009c4dc) cntbar_detail_list_shct_pane_g1

0xed50,	// (0x0009c4e5) cntbar_detail_list_shct_pane_g2

0x0001,

0xfe9c,	// (0x0009d631) cntbar_detail_list_shct_pane_g

0x904f,	// (0x000967e4) cntbar_detail_list_event_pane_g1_ParamLimits

0x904f,	// (0x000967e4) cntbar_detail_list_event_pane_g1

0x905b,	// (0x000967f0) cntbar_detail_list_event_pane_g2_ParamLimits

0x905b,	// (0x000967f0) cntbar_detail_list_event_pane_g2

0x0005,

0xfea1,	// (0x0009d636) cntbar_detail_list_event_pane_g_ParamLimits

0xfea1,	// (0x0009d636) cntbar_detail_list_event_pane_g

0x90c9,	// (0x0009685e) cntbar_detail_list_event_pane_t1_ParamLimits

0x90c9,	// (0x0009685e) cntbar_detail_list_event_pane_t1

0x90de,	// (0x00096873) cntbar_detail_list_event_pane_t2_ParamLimits

0x90de,	// (0x00096873) cntbar_detail_list_event_pane_t2

0x0002,

0xfeae,	// (0x0009d643) cntbar_detail_list_event_pane_t_ParamLimits

0xfeae,	// (0x0009d643) cntbar_detail_list_event_pane_t

0xce04,	// (0x0009a599) cell_cntbar_detail_list_shct_pane_g1

0xb55b,	// (0x00098cf0) navi_pane_mv_g3

0xac82,	// (0x00098417) main_cntbar_detail_pane_ParamLimits

0x99fb,	// (0x00097190) main_notif_wgt_pane

0xa7c8,	// (0x00097f5d) aid_tch_main_mp4_pane_g4

0xa9d0,	// (0x00098165) popup_slider_window_cp02

0x8ddd,	// (0x00096572) list_recal_day_event_pane

0x8f67,	// (0x000966fc) cntbar_detail_btn_pane_ParamLimits

0x8f67,	// (0x000966fc) cntbar_detail_btn_pane

0x8f80,	// (0x00096715) cntbar_detail_btn_pane_cp01_ParamLimits

0x8f80,	// (0x00096715) cntbar_detail_btn_pane_cp01

0x8fad,	// (0x00096742) cntbar_detail_list_shct_pane_ParamLimits

0x8fbd,	// (0x00096752) cntbar_detail_pane_g1_ParamLimits

0x8fbd,	// (0x00096752) cntbar_detail_pane_g1

0x8fd1,	// (0x00096766) cntbar_detail_pane_t1_ParamLimits

0x8fd1,	// (0x00096766) cntbar_detail_pane_t1

0x9067,	// (0x000967fc) cntbar_detail_list_event_pane_g3_ParamLimits

0x9067,	// (0x000967fc) cntbar_detail_list_event_pane_g3

0x907f,	// (0x00096814) cntbar_detail_list_event_pane_g4_ParamLimits

0x907f,	// (0x00096814) cntbar_detail_list_event_pane_g4

0x9097,	// (0x0009682c) cntbar_detail_list_event_pane_g5_ParamLimits

0x9097,	// (0x0009682c) cntbar_detail_list_event_pane_g5

0x90af,	// (0x00096844) cntbar_detail_list_event_pane_g6_ParamLimits

0x90af,	// (0x00096844) cntbar_detail_list_event_pane_g6

0x90f3,	// (0x00096888) cntbar_detail_list_event_pane_t3_ParamLimits

0x90f3,	// (0x00096888) cntbar_detail_list_event_pane_t3

0x9105,	// (0x0009689a) popup_notif_wgt_window_ParamLimits

0x9105,	// (0x0009689a) popup_notif_wgt_window

0x911e,	// (0x000968b3) popup_submenu_window_cp01_ParamLimits

0x911e,	// (0x000968b3) popup_submenu_window_cp01

0xa3fe,	// (0x00097b93) bg_popup_window_pane_cp10

0xed59,	// (0x0009c4ee) listscroll_notif_wgt_pane

0xed6b,	// (0x0009c500) list_notif_wgt_window

0xed74,	// (0x0009c509) scroll_pane_cp033

0x9132,	// (0x000968c7) list_notif_wgt_row_pane_ParamLimits

0x9132,	// (0x000968c7) list_notif_wgt_row_pane

0xed7d,	// (0x0009c512) aid_size_list_notif_wgt_del

0xed8a,	// (0x0009c51f) list_notif_wgt_row_pane_g1

0xed96,	// (0x0009c52b) list_notif_wgt_row_pane_g2

0xeda5,	// (0x0009c53a) list_notif_wgt_row_pane_g3

0x0002,

0xfeb5,	// (0x0009d64a) list_notif_wgt_row_pane_g

0xedb2,	// (0x0009c547) list_notif_wgt_row_pane_t1

0xedc8,	// (0x0009c55d) list_notif_wgt_row_pane_t2

0xedda,	// (0x0009c56f) list_notif_wgt_row_pane_t3

0x0002,

0xfebc,	// (0x0009d651) list_notif_wgt_row_pane_t

0xd9e6,	// (0x0009b17b) list_recal_day_event_pane_g1

0xedec,	// (0x0009c581) list_recal_day_event_pane_t1

0x99fb,	// (0x00097190) bg_button_pane_cp045

0x9142,	// (0x000968d7) cntbar_detail_btn_pane_t1

0xc9cc,	// (0x0009a161) main_callh_pane_ParamLimits

0xc9cc,	// (0x0009a161) main_callh_pane

0x99fb,	// (0x00097190) main_coverflow0_pane

0x99fb,	// (0x00097190) main_wgtman_pane

0x81cc,	// (0x00095961) main_fs_bigclock_unlock_btn_pane_ParamLimits

0x81cc,	// (0x00095961) main_fs_bigclock_unlock_btn_pane

0x8856,	// (0x00095feb) bg_button_pane_cp16

0x8866,	// (0x00095ffb) cell_tport_appsw_pane_g3

0x9150,	// (0x000968e5) cf0_flow_pane_ParamLimits

0x9150,	// (0x000968e5) cf0_flow_pane

0xedfb,	// (0x0009c590) listscroll_cf0_pane

0xee06,	// (0x0009c59b) main_cf0_pane_g1

0x9165,	// (0x000968fa) main_cf0_pane_t1_ParamLimits

0x9165,	// (0x000968fa) main_cf0_pane_t1

0x917c,	// (0x00096911) main_cf0_pane_t2_ParamLimits

0x917c,	// (0x00096911) main_cf0_pane_t2

0x0001,

0xfec8,	// (0x0009d65d) main_cf0_pane_t_ParamLimits

0xfec8,	// (0x0009d65d) main_cf0_pane_t

0xee18,	// (0x0009c5ad) scroll_pane_cp11

0x9193,	// (0x00096928) cf0_flow_pane_g1

0x919f,	// (0x00096934) cf0_flow_pane_g2

0x0001,

0xfecd,	// (0x0009d662) cf0_flow_pane_g

0x91ab,	// (0x00096940) cf0_flow_pane_t1

0x99fb,	// (0x00097190) main_call6_pane

0x99fb,	// (0x00097190) main_calllock_pane

0x91bd,	// (0x00096952) call6_btn_grp_pane_ParamLimits

0x91bd,	// (0x00096952) call6_btn_grp_pane

0x91d7,	// (0x0009696c) call6_pane_g1_ParamLimits

0x91d7,	// (0x0009696c) call6_pane_g1

0x91f0,	// (0x00096985) popup_call6_1st_window_ParamLimits

0x91f0,	// (0x00096985) popup_call6_1st_window

0x9204,	// (0x00096999) popup_call6_2nd_window_ParamLimits

0x9204,	// (0x00096999) popup_call6_2nd_window

0x9218,	// (0x000969ad) cell_call6_btn_pane_ParamLimits

0x9218,	// (0x000969ad) cell_call6_btn_pane

0xa3fe,	// (0x00097b93) bg_popup_call2_in_pane_cp03

0xee23,	// (0x0009c5b8) popup_call6_1st_window_g1

0xee2b,	// (0x0009c5c0) popup_call6_1st_window_g2

0xee33,	// (0x0009c5c8) popup_call6_1st_window_g3

0x0002,

0xfed2,	// (0x0009d667) popup_call6_1st_window_g

0xee3b,	// (0x0009c5d0) popup_call6_1st_window_t1

0xee4a,	// (0x0009c5df) popup_call6_1st_window_t2

0xee5a,	// (0x0009c5ef) popup_call6_1st_window_t3

0x0002,

0xfed9,	// (0x0009d66e) popup_call6_1st_window_t

0xa3fe,	// (0x00097b93) bg_popup_call2_in_pane_cp04

0xee23,	// (0x0009c5b8) popup_call6_2nd_window_g1

0xee2b,	// (0x0009c5c0) popup_call6_2nd_window_g2

0xee33,	// (0x0009c5c8) popup_call6_2nd_window_g3

0x0002,

0xfed2,	// (0x0009d667) popup_call6_2nd_window_g

0xee3b,	// (0x0009c5d0) popup_call6_2nd_window_t1

0x99fb,	// (0x00097190) bg_button_pane_cp15

0xee6a,	// (0x0009c5ff) cell_call6_btn_pane_g1

0xac65,	// (0x000983fa) cell_call6_btn_pane_t1

0x922c,	// (0x000969c1) listscroll_wgtman_pane_ParamLimits

0x922c,	// (0x000969c1) listscroll_wgtman_pane

0x924d,	// (0x000969e2) wgtman_btn_pane_ParamLimits

0x924d,	// (0x000969e2) wgtman_btn_pane

0xb36d,	// (0x00098b02) aid_scroll_copy1

0xee73,	// (0x0009c608) list_wgtman_pane

0x9290,	// (0x00096a25) wgtman_btn_pane_g1_ParamLimits

0x9290,	// (0x00096a25) wgtman_btn_pane_g1

0x92bc,	// (0x00096a51) wgtman_btn_pane_t1_ParamLimits

0x92bc,	// (0x00096a51) wgtman_btn_pane_t1

0xee7d,	// (0x0009c612) wgtman_btn_pane_t2_ParamLimits

0xee7d,	// (0x0009c612) wgtman_btn_pane_t2

0x0001,

0xfee0,	// (0x0009d675) wgtman_btn_pane_t_ParamLimits

0xfee0,	// (0x0009d675) wgtman_btn_pane_t

0x92f9,	// (0x00096a8e) listrow_wgtman_pane_ParamLimits

0x92f9,	// (0x00096a8e) listrow_wgtman_pane

0x930d,	// (0x00096aa2) listrow_wgtman_pane_g1

0x931a,	// (0x00096aaf) listrow_wgtman_pane_g2

0x0001,

0xfee5,	// (0x0009d67a) listrow_wgtman_pane_g

0x08eb,	// (0x0008e080) listrow_wgtman_pane_t1

0x0903,	// (0x0008e098) listrow_wgtman_pane_t2

0x0001,

0xfeea,	// (0x0009d67f) listrow_wgtman_pane_t

0x0929,	// (0x0008e0be) wait_bar_pane_cp09

0xee94,	// (0x0009c629) main_calllock_btn_pane

0xee9e,	// (0x0009c633) main_calllock_pane_g1

0x99fb,	// (0x00097190) bg_button_pane_cp17

0xee6a,	// (0x0009c5ff) main_calllock_btn_pane_g1

0xeeaa,	// (0x0009c63f) main_calllock_btn_pane_t1

0x99fb,	// (0x00097190) main_dialer3_pane

0x99fb,	// (0x00097190) main_fmrd2_pane

0xce04,	// (0x0009a599) main_fs_bigclock_unlock_btn_pane_g1

0x9340,	// (0x00096ad5) main_fs_bigclock_unlock_btn_pane_t1

0x934e,	// (0x00096ae3) area_fmrd2_info_pane_ParamLimits

0x934e,	// (0x00096ae3) area_fmrd2_info_pane

0x935f,	// (0x00096af4) area_fmrd2_visual_pane_ParamLimits

0x935f,	// (0x00096af4) area_fmrd2_visual_pane

0x936d,	// (0x00096b02) fmrd2_indi_pane_ParamLimits

0x936d,	// (0x00096b02) fmrd2_indi_pane

0x937a,	// (0x00096b0f) area_fmrd2_visual_pane_g1

0x9382,	// (0x00096b17) area_fmrd2_visual_pane_t1

0x9392,	// (0x00096b27) area_fmrd2_visual_pane_t2

0x93a2,	// (0x00096b37) area_fmrd2_visual_pane_t3

0x0002,

0xfef4,	// (0x0009d689) area_fmrd2_visual_pane_t

0x93b2,	// (0x00096b47) area_fmrd2_info_pane_g1

0x93ba,	// (0x00096b4f) area_fmrd2_info_pane_t1

0x93ca,	// (0x00096b5f) area_fmrd2_info_pane_t2

0x93da,	// (0x00096b6f) area_fmrd2_info_pane_t3

0x93ea,	// (0x00096b7f) area_fmrd2_info_pane_t4

0x0003,

0xfefb,	// (0x0009d690) area_fmrd2_info_pane_t

0x93fa,	// (0x00096b8f) fmrd2_indi_pane_t1

0x940a,	// (0x00096b9f) fmrd2_indi_pane_t2

0x941a,	// (0x00096baf) fmrd2_indi_pane_t3

0x0002,

0xff04,	// (0x0009d699) fmrd2_indi_pane_t

0x8255,	// (0x000959ea) list_single_fs_bigclock_indicator_pane_g5_ParamLimits

0x8255,	// (0x000959ea) list_single_fs_bigclock_indicator_pane_g5

0x830a,	// (0x00095a9f) list_single_fs_bigclock_indicator_pane_t5_ParamLimits

0x830a,	// (0x00095a9f) list_single_fs_bigclock_indicator_pane_t5

0x8a68,	// (0x000961fd) aid_cell_bcale_month_pane_ParamLimits

0x8a68,	// (0x000961fd) aid_cell_bcale_month_pane

0x8a8f,	// (0x00096224) bcale_month_pane_ParamLimits

0x8a8f,	// (0x00096224) bcale_month_pane

0x8ab3,	// (0x00096248) bcale_preview_pane_ParamLimits

0x8ab3,	// (0x00096248) bcale_preview_pane

0xec8c,	// (0x0009c421) list_single_fs_bigclock_pane_t1_ParamLimits

0xecab,	// (0x0009c440) list_single_fs_bigclock_pane_t2_ParamLimits

0xecab,	// (0x0009c440) list_single_fs_bigclock_pane_t2

0x0001,

0xfe86,	// (0x0009d61b) list_single_fs_bigclock_pane_t_ParamLimits

0xfe86,	// (0x0009d61b) list_single_fs_bigclock_pane_t

0x9338,	// (0x00096acd) main_fs_bigclock_unlock_btn_pane_g2

0x0001,

0xfeef,	// (0x0009d684) main_fs_bigclock_unlock_btn_pane_g

0x942a,	// (0x00096bbf) aid_dia3_key_size_ParamLimits

0x942a,	// (0x00096bbf) aid_dia3_key_size

0x943e,	// (0x00096bd3) aid_dia3_listrow_size_ParamLimits

0x943e,	// (0x00096bd3) aid_dia3_listrow_size

0x9458,	// (0x00096bed) dia3_keypad_fun_pane_ParamLimits

0x9458,	// (0x00096bed) dia3_keypad_fun_pane

0x9474,	// (0x00096c09) dia3_keypad_num_pane_ParamLimits

0x9474,	// (0x00096c09) dia3_keypad_num_pane

0x9490,	// (0x00096c25) dia3_listscroll_pane_ParamLimits

0x9490,	// (0x00096c25) dia3_listscroll_pane

0x94a6,	// (0x00096c3b) dia3_numentry_pane_ParamLimits

0x94a6,	// (0x00096c3b) dia3_numentry_pane

0xeeb9,	// (0x0009c64e) dia3_list_pane

0x94bf,	// (0x00096c54) scroll_pane_cp12

0x99fb,	// (0x00097190) bg_dia3_numentry_pane

0x94ca,	// (0x00096c5f) dia3_numentry_pane_t1

0x94d9,	// (0x00096c6e) cell_dia3_key_num_pane

0x94e1,	// (0x00096c76) cell_dia3_key0_fun_pane_ParamLimits

0x94e1,	// (0x00096c76) cell_dia3_key0_fun_pane

0x94f5,	// (0x00096c8a) cell_dia3_key1_fun_pane_ParamLimits

0x94f5,	// (0x00096c8a) cell_dia3_key1_fun_pane

0x950c,	// (0x00096ca1) dia3_listrow_pane

0xe298,	// (0x0009ba2d) bg_dia3_numentry_pane_g1

0x99fb,	// (0x00097190) bg_button_pane_cp21

0x951e,	// (0x00096cb3) cell_dia3_key_num_pane_t1

0x952c,	// (0x00096cc1) cell_dia3_key_num_pane_t2

0x953b,	// (0x00096cd0) cell_dia3_key_num_pane_t3

0x954a,	// (0x00096cdf) cell_dia3_key_num_pane_t4

0x0003,

0xff0b,	// (0x0009d6a0) cell_dia3_key_num_pane_t

0x99fb,	// (0x00097190) bg_button_pane_cp19

0x9559,	// (0x00096cee) cell_dia3_key0_fun_pane_g1

0x99fb,	// (0x00097190) bg_button_pane_cp20

0x9559,	// (0x00096cee) cell_dia3_key1_fun_pane_g1

0x9561,	// (0x00096cf6) area_left_week_number_pane

0x956f,	// (0x00096d04) area_top_day_name_pane

0x9582,	// (0x00096d17) frame_month_view_pane

0xeec4,	// (0x0009c659) grid_month_view_pane

0x9597,	// (0x00096d2c) cell_top_day_name_pane_ParamLimits

0x9597,	// (0x00096d2c) cell_top_day_name_pane

0x95c6,	// (0x00096d5b) cell_area_left_week_number_pane_ParamLimits

0x95c6,	// (0x00096d5b) cell_area_left_week_number_pane

0x95dc,	// (0x00096d71) cell_month_view_pane_ParamLimits

0x95dc,	// (0x00096d71) cell_month_view_pane

0xeed2,	// (0x0009c667) frm_month_g1

0x960d,	// (0x00096da2) frm_month_g2

0x9620,	// (0x00096db5) frm_month_g3

0x9633,	// (0x00096dc8) frm_month_g4

0x9646,	// (0x00096ddb) frm_month_g5

0x9659,	// (0x00096dee) frm_month_g6

0x966e,	// (0x00096e03) frm_month_g7

0xeedf,	// (0x0009c674) frm_month_g8

0x9683,	// (0x00096e18) frm_month_g9

0x9693,	// (0x00096e28) frm_month_g10

0x96a3,	// (0x00096e38) frm_month_g11

0x96b3,	// (0x00096e48) frm_month_g12

0x96c5,	// (0x00096e5a) frm_month_g13

0x96d9,	// (0x00096e6e) frm_month_g14

0x96ed,	// (0x00096e82) frm_month_g15

0x9701,	// (0x00096e96) frm_month_g16

0x000f,

0xff14,	// (0x0009d6a9) frm_month_g

0xeeec,	// (0x0009c681) cell_top_day_name_pane_t1

0x9715,	// (0x00096eaa) cell_area_left_week_number_pane_g1

0x9721,	// (0x00096eb6) cell_area_left_week_number_pane_t1

0xd02b,	// (0x0009a7c0) cell_month_view_pane_g1

0x9734,	// (0x00096ec9) cell_month_view_pane_t1

0x99fb,	// (0x00097190) main_fps_pane

0xe711,	// (0x0009bea6) cmail_ddmenu_btn02_pane_cp1_ParamLimits

0xe711,	// (0x0009bea6) cmail_ddmenu_btn02_pane_cp1

0xe72d,	// (0x0009bec2) cmail_ddmenu_btn02_pane_cp2_ParamLimits

0xe72d,	// (0x0009bec2) cmail_ddmenu_btn02_pane_cp2

0x8dad,	// (0x00096542) cmail_ddmenu_btn02_pane_g2_ParamLimits

0x8dad,	// (0x00096542) cmail_ddmenu_btn02_pane_g2

0x0001,

0xfe39,	// (0x0009d5ce) cmail_ddmenu_btn02_pane_g_ParamLimits

0xfe39,	// (0x0009d5ce) cmail_ddmenu_btn02_pane_g

0x8dcb,	// (0x00096560) cmail_ddmenu_btn02_pane_t2_ParamLimits

0x8dcb,	// (0x00096560) cmail_ddmenu_btn02_pane_t2

0x0001,

0xfe3e,	// (0x0009d5d3) cmail_ddmenu_btn02_pane_t_ParamLimits

0xfe3e,	// (0x0009d5d3) cmail_ddmenu_btn02_pane_t

0x9747,	// (0x00096edc) fps_text_pane_ParamLimits

0x9747,	// (0x00096edc) fps_text_pane

0x975e,	// (0x00096ef3) main_fps_pane_g1_ParamLimits

0x975e,	// (0x00096ef3) main_fps_pane_g1

0x9776,	// (0x00096f0b) wait_bar_pane_cp010_ParamLimits

0x9776,	// (0x00096f0b) wait_bar_pane_cp010

0x9789,	// (0x00096f1e) fps_text_pane_t1_ParamLimits

0x9789,	// (0x00096f1e) fps_text_pane_t1

0xe401,	// (0x0009bb96) cam4_image_uncrop_pane_g1

0xe40a,	// (0x0009bb9f) cam4_image_uncrop_pane_g2

0x644c,	// (0x00093be1) cam4_image_uncrop_pane_g3

0x6455,	// (0x00093bea) cam4_image_uncrop_pane_g4

0x0003,

0xf8f5,	// (0x0009d08a) cam4_image_uncrop_pane_g

0x950c,	// (0x00096ca1) dia3_listrow_pane_ParamLimits

0x99fb,	// (0x00097190) main_phob2_pane

0x8829,	// (0x00095fbe) cell_tport_appsw_pane_cp02_ParamLimits

0x8829,	// (0x00095fbe) cell_tport_appsw_pane_cp02

0x883d,	// (0x00095fd2) cell_tport_appsw_pane_cp03_ParamLimits

0x883d,	// (0x00095fd2) cell_tport_appsw_pane_cp03

0x99fb,	// (0x00097190) phob2_contact_card_pane

0x99fb,	// (0x00097190) phob2_listscroll_pane

0xeeff,	// (0x0009c694) phob2_list_pane

0xef07,	// (0x0009c69c) scroll_pane_cp034

0x97a1,	// (0x00096f36) phob2_cc_data_pane_ParamLimits

0x97a1,	// (0x00096f36) phob2_cc_data_pane

0x97ba,	// (0x00096f4f) phob2_cc_listscroll_pane_ParamLimits

0x97ba,	// (0x00096f4f) phob2_cc_listscroll_pane

0x92f9,	// (0x00096a8e) list_double_large_graphic_phob2_pane_ParamLimits

0x92f9,	// (0x00096a8e) list_double_large_graphic_phob2_pane

0x97dc,	// (0x00096f71) list_double_large_graphic_phob2_pane_g1_ParamLimits

0x97dc,	// (0x00096f71) list_double_large_graphic_phob2_pane_g1

0x093b,	// (0x0008e0d0) list_double_large_graphic_phob2_pane_g2_ParamLimits

0x093b,	// (0x0008e0d0) list_double_large_graphic_phob2_pane_g2

0x0001,

0xff35,	// (0x0009d6ca) list_double_large_graphic_phob2_pane_g_ParamLimits

0xff35,	// (0x0009d6ca) list_double_large_graphic_phob2_pane_g

0x0947,	// (0x0008e0dc) list_double_large_graphic_phob2_pane_t1_ParamLimits

0x0947,	// (0x0008e0dc) list_double_large_graphic_phob2_pane_t1

0x095c,	// (0x0008e0f1) list_double_large_graphic_phob2_pane_t2_ParamLimits

0x095c,	// (0x0008e0f1) list_double_large_graphic_phob2_pane_t2

0x0001,

0xff3a,	// (0x0009d6cf) list_double_large_graphic_phob2_pane_t_ParamLimits

0xff3a,	// (0x0009d6cf) list_double_large_graphic_phob2_pane_t

0x99fb,	// (0x00097190) list_highlight_pane_cp024

0x97f2,	// (0x00096f87) phob2_cc_button_pane

0x97fc,	// (0x00096f91) phob2_cc_data_pane_g1_ParamLimits

0x97fc,	// (0x00096f91) phob2_cc_data_pane_g1

0x9814,	// (0x00096fa9) phob2_cc_data_pane_g2_ParamLimits

0x9814,	// (0x00096fa9) phob2_cc_data_pane_g2

0x0001,

0xff3f,	// (0x0009d6d4) phob2_cc_data_pane_g_ParamLimits

0xff3f,	// (0x0009d6d4) phob2_cc_data_pane_g

0x9824,	// (0x00096fb9) phob2_cc_data_pane_t1_ParamLimits

0x9824,	// (0x00096fb9) phob2_cc_data_pane_t1

0x9846,	// (0x00096fdb) phob2_cc_data_pane_t2_ParamLimits

0x9846,	// (0x00096fdb) phob2_cc_data_pane_t2

0x9868,	// (0x00096ffd) phob2_cc_data_pane_t3_ParamLimits

0x9868,	// (0x00096ffd) phob2_cc_data_pane_t3

0x0002,

0xff44,	// (0x0009d6d9) phob2_cc_data_pane_t_ParamLimits

0xff44,	// (0x0009d6d9) phob2_cc_data_pane_t

0xef0f,	// (0x0009c6a4) phob2_cc_list_pane_ParamLimits

0xef0f,	// (0x0009c6a4) phob2_cc_list_pane

0xda8f,	// (0x0009b224) scroll_pane_cp035_ParamLimits

0xda8f,	// (0x0009b224) scroll_pane_cp035

0xac82,	// (0x00098417) bg_button_pane_cp033

0xef1b,	// (0x0009c6b0) phob2_cc_button_pane_g1

0xef27,	// (0x0009c6bc) phob2_cc_button_pane_t1

0xef3c,	// (0x0009c6d1) phob2_cc_button_pane_t2

0x0001,

0xff4b,	// (0x0009d6e0) phob2_cc_button_pane_t

0x988a,	// (0x0009701f) list_double_large_graphic_phob2_cc_pane_ParamLimits

0x988a,	// (0x0009701f) list_double_large_graphic_phob2_cc_pane

0x98c8,	// (0x0009705d) list_double_large_graphic_phob2_cc_pane_g1_ParamLimits

0x98c8,	// (0x0009705d) list_double_large_graphic_phob2_cc_pane_g1

0x096e,	// (0x0008e103) list_double_large_graphic_phob2_cc_pane_g2_ParamLimits

0x096e,	// (0x0008e103) list_double_large_graphic_phob2_cc_pane_g2

0x097a,	// (0x0008e10f) list_double_large_graphic_phob2_cc_pane_g3_ParamLimits

0x097a,	// (0x0008e10f) list_double_large_graphic_phob2_cc_pane_g3

0x0986,	// (0x0008e11b) list_double_large_graphic_phob2_cc_pane_g4_ParamLimits

0x0986,	// (0x0008e11b) list_double_large_graphic_phob2_cc_pane_g4

0x0992,	// (0x0008e127) list_double_large_graphic_phob2_cc_pane_g5_ParamLimits

0x0992,	// (0x0008e127) list_double_large_graphic_phob2_cc_pane_g5

0x0004,

0xff50,	// (0x0009d6e5) list_double_large_graphic_phob2_cc_pane_g_ParamLimits

0xff50,	// (0x0009d6e5) list_double_large_graphic_phob2_cc_pane_g

0x099e,	// (0x0008e133) list_double_large_graphic_phob2_cc_pane_t1_ParamLimits

0x099e,	// (0x0008e133) list_double_large_graphic_phob2_cc_pane_t1

0x09c7,	// (0x0008e15c) list_double_large_graphic_phob2_cc_pane_t2_ParamLimits

0x09c7,	// (0x0008e15c) list_double_large_graphic_phob2_cc_pane_t2

0x0001,

0xff5b,	// (0x0009d6f0) list_double_large_graphic_phob2_cc_pane_t_ParamLimits

0xff5b,	// (0x0009d6f0) list_double_large_graphic_phob2_cc_pane_t

0xef4e,	// (0x0009c6e3) list_highlight_pane_cp025_ParamLimits

0xef4e,	// (0x0009c6e3) list_highlight_pane_cp025

0xac82,	// (0x00098417) bg_button_pane_cp033_ParamLimits

0xef1b,	// (0x0009c6b0) phob2_cc_button_pane_g1_ParamLimits

0xef27,	// (0x0009c6bc) phob2_cc_button_pane_t1_ParamLimits

0xef3c,	// (0x0009c6d1) phob2_cc_button_pane_t2_ParamLimits

0xff4b,	// (0x0009d6e0) phob2_cc_button_pane_t_ParamLimits

0x0c42,	// (0x0008e3d7) popup_wgtman_window

0xd8c9,	// (0x0009b05e) scroll_pane_cp038

0x9272,	// (0x00096a07) wgtman_btn_pane_cp_01_ParamLimits

0x9272,	// (0x00096a07) wgtman_btn_pane_cp_01

0xef5c,	// (0x0009c6f1) wgtman_content_pane

0xef65,	// (0x0009c6fa) wgtman_heading_pane

0x99fb,	// (0x00097190) bg_heading_pane_cp02

0xef6e,	// (0x0009c703) wgtman_heading_pane_g1

0xef76,	// (0x0009c70b) wgtman_heading_pane_t1

0xef84,	// (0x0009c719) scroll_pane_cp036

0xef8c,	// (0x0009c721) wgtman_list_pane

0xe5ce,	// (0x0009bd63) wgtman_list_pane_t1_ParamLimits

0xe5ce,	// (0x0009bd63) wgtman_list_pane_t1

0xaa5e,	// (0x000981f3) cam4_grid_pane

0xffab,	// (0x0008d740) bg_button_pane_cp015_ParamLimits

0x7114,	// (0x000948a9) bg_button_pane_cp016_ParamLimits

0x7127,	// (0x000948bc) bg_button_pane_cp017_ParamLimits

0xfff3,	// (0x0008d788) popup_vitu2_query_window_g3_ParamLimits

0xfff3,	// (0x0008d788) popup_vitu2_query_window_g3

0x006e,	// (0x0008d803) popup_vitu2_query_window_t6_ParamLimits

0x006e,	// (0x0008d803) popup_vitu2_query_window_t6

0x0099,	// (0x0008d82e) popup_vitu2_query_window_t7_ParamLimits

0x0099,	// (0x0008d82e) popup_vitu2_query_window_t7

0xe401,	// (0x0009bb96) cam4_grid_pane_g1

0xe40a,	// (0x0009bb9f) cam4_grid_pane_g2

0xef94,	// (0x0009c729) cam4_grid_pane_g3

0xef9d,	// (0x0009c732) cam4_grid_pane_g4

0x0003,

0xff60,	// (0x0009d6f5) cam4_grid_pane_g

0x1b0a,	// (0x0008f29f) aid_placing_vt_slider_lsc_ParamLimits

0x1df7,	// (0x0008f58c) vidtel_button_pane_ParamLimits

0x1df7,	// (0x0008f58c) vidtel_button_pane

0x99fb,	// (0x00097190) bg_button_pane_cp034

0xefa8,	// (0x0009c73d) vidtel_button_pane_g1

0xefb0,	// (0x0009c745) vidtel_button_pane_t1

0xd9d6,	// (0x0009b16b) aid_size_vtel_slider_touch

0xda8f,	// (0x0009b224) scroll_pane_cp039

0x7e93,	// (0x00095628) ncim_query_button_pane_cp01_ParamLimits

0x7eb2,	// (0x00095647) ncimui_query_pane_g1_ParamLimits

0xac82,	// (0x00098417) input_focus_pane_cp012_ParamLimits

0xe2d6,	// (0x0009ba6b) ncim_query_entry_pane_t1_ParamLimits

0xda8f,	// (0x0009b224) scroll_pane_cp039_ParamLimits

0xb444,	// (0x00098bd9) navi_pane_bcale_mc_g1

0xb44c,	// (0x00098be1) navi_pane_bcale_mc_t1

0xe778,	// (0x0009bf0d) main_sp_fs_email_pane_g1

0xe784,	// (0x0009bf19) main_sp_fs_email_pane_g2

0x0001,

0xfcec,	// (0x0009d481) main_sp_fs_email_pane_g

0xea14,	// (0x0009c1a9) list_single_cale_mrui_row_pane_g3_ParamLimits

0xea14,	// (0x0009c1a9) list_single_cale_mrui_row_pane_g3

0x08af,	// (0x0008e044) list_single_recal_day_pane_g5_event_pane

0x8e3b,	// (0x000965d0) list_single_recal_day_pane_g7

0xefc6,	// (0x0009c75b) list_recal_day_event_pane_cp01

0xefcf,	// (0x0009c764) list_recal_vselct_arw_lo_pane_cp01

0xefd7,	// (0x0009c76c) list_recal_vselct_arw_up_pane_cp01

0xefdf,	// (0x0009c774) list_recal_vselct_pane_cp01

0xd9e6,	// (0x0009b17b) list_recal_day_event_pane_cp01_g1

0xac74,	// (0x00098409) list_recal_day_event_pane_cp01_t1

0x8e43,	// (0x000965d8) list_single_recal_day_pane_t1_ParamLimits

0xac30,	// (0x000983c5) list_single_recal_day_pane_t2_ParamLimits

0xfe4e,	// (0x0009d5e3) list_single_recal_day_pane_t_ParamLimits

0xa103,	// (0x00097898) bg_notes_pane_ParamLimits

0xa1ae,	// (0x00097943) list_notes_pane_ParamLimits

0x0f5a,	// (0x0008e6ef) scroll_pane_cp06_ParamLimits

0xa1ea,	// (0x0009797f) main_notes_pane_ParamLimits

0x99fb,	// (0x00097190) main_welc_pane

0x98d4,	// (0x00097069) main_welc_body_pane_ParamLimits

0x98d4,	// (0x00097069) main_welc_body_pane

0x98f3,	// (0x00097088) main_welc_opti_pane_ParamLimits

0x98f3,	// (0x00097088) main_welc_opti_pane

0x993c,	// (0x000970d1) main_welc_pane_t1_ParamLimits

0x993c,	// (0x000970d1) main_welc_pane_t1

0xefe9,	// (0x0009c77e) main_welc_body_row_pane_ParamLimits

0xefe9,	// (0x0009c77e) main_welc_body_row_pane

0xe3f3,	// (0x0009bb88) main_welc_opti_row_pane_ParamLimits

0xe3f3,	// (0x0009bb88) main_welc_opti_row_pane

0xf000,	// (0x0009c795) main_welc_opti_row_pane_g1

0x995e,	// (0x000970f3) main_welc_opti_row_pane_t1

0xf008,	// (0x0009c79d) main_welc_body_row_pane_t1

0xed63,	// (0x0009c4f8) popup_notif_wgt_heading_pane

0xed7d,	// (0x0009c512) aid_size_list_notif_wgt_del_ParamLimits

0xed8a,	// (0x0009c51f) list_notif_wgt_row_pane_g1_ParamLimits

0xed96,	// (0x0009c52b) list_notif_wgt_row_pane_g2_ParamLimits

0xeda5,	// (0x0009c53a) list_notif_wgt_row_pane_g3_ParamLimits

0xfeb5,	// (0x0009d64a) list_notif_wgt_row_pane_g_ParamLimits

0xedb2,	// (0x0009c547) list_notif_wgt_row_pane_t1_ParamLimits

0xedc8,	// (0x0009c55d) list_notif_wgt_row_pane_t2_ParamLimits

0xedda,	// (0x0009c56f) list_notif_wgt_row_pane_t3_ParamLimits

0xfebc,	// (0x0009d651) list_notif_wgt_row_pane_t_ParamLimits

0x930d,	// (0x00096aa2) listrow_wgtman_pane_g1_ParamLimits

0x931a,	// (0x00096aaf) listrow_wgtman_pane_g2_ParamLimits

0xfee5,	// (0x0009d67a) listrow_wgtman_pane_g_ParamLimits

0x08eb,	// (0x0008e080) listrow_wgtman_pane_t1_ParamLimits

0x0903,	// (0x0008e098) listrow_wgtman_pane_t2_ParamLimits

0xfeea,	// (0x0009d67f) listrow_wgtman_pane_t_ParamLimits

0x0929,	// (0x0008e0be) wait_bar_pane_cp09_ParamLimits

0x99fb,	// (0x00097190) bg_popup_heading_pane_cp02

0xf017,	// (0x0009c7ac) popup_notif_wgt_heading_pane_g1

0xf01f,	// (0x0009c7b4) popup_notif_wgt_heading_pane_t1

0x99fb,	// (0x00097190) main_vids_pane

0x99fb,	// (0x00097190) vids_listscroll_pane

0x996d,	// (0x00097102) scroll_pane_cp040

0x99fb,	// (0x00097190) vids_list_pane

0x9978,	// (0x0009710d) vids_list_double_pane_ParamLimits

0x9978,	// (0x0009710d) vids_list_double_pane

0x9989,	// (0x0009711e) vids_list_double_pane_g1

0x9992,	// (0x00097127) vids_list_double_pane_t1

0x99a2,	// (0x00097137) vids_list_double_pane_t2

0x0001,

0xff6e,	// (0x0009d703) vids_list_double_pane_t

0xac82,	// (0x00098417) main_ncimui_pane_ParamLimits

0x7cc9,	// (0x0009545e) main_ncimui_pane_g1_ParamLimits

0x7cd5,	// (0x0009546a) main_ncimui_pane_g2_ParamLimits

0x7cd5,	// (0x0009546a) main_ncimui_pane_g2

0x0001,

0xfbf1,	// (0x0009d386) main_ncimui_pane_g_ParamLimits

0xfbf1,	// (0x0009d386) main_ncimui_pane_g

0x9912,	// (0x000970a7) main_welc_pane_g1_ParamLimits

0x9912,	// (0x000970a7) main_welc_pane_g1

0x9927,	// (0x000970bc) main_welc_pane_g2_ParamLimits

0x9927,	// (0x000970bc) main_welc_pane_g2

0x0001,

0xff69,	// (0x0009d6fe) main_welc_pane_g_ParamLimits

0xff69,	// (0x0009d6fe) main_welc_pane_g

0xa103,	// (0x00097898) listscroll_mce_pane_ParamLimits

0xb59b,	// (0x00098d30) wait_bar_pane_cp10

0xc9c0,	// (0x0009a155) main_cale_day_pane_ParamLimits

0xc9c0,	// (0x0009a155) main_cale_week_pane_ParamLimits

0xa103,	// (0x00097898) main_messa_pane_ParamLimits

0x56b7,	// (0x00092e4c) main_clock2_btn_pane_ParamLimits

0x56b7,	// (0x00092e4c) main_clock2_btn_pane

0xd1c7,	// (0x0009a95c) main_clock2_btn_pane_cp01_ParamLimits

0xd1c7,	// (0x0009a95c) main_clock2_btn_pane_cp01

0xe9e5,	// (0x0009c17a) list_cale_mrui_pane_ParamLimits

0xee10,	// (0x0009c5a5) main_cf0_pane_g2

0x0001,

0xfec3,	// (0x0009d658) main_cf0_pane_g

0x9561,	// (0x00096cf6) area_left_week_number_pane_ParamLimits

0x956f,	// (0x00096d04) area_top_day_name_pane_ParamLimits

0x9582,	// (0x00096d17) frame_month_view_pane_ParamLimits

0xeec4,	// (0x0009c659) grid_month_view_pane_ParamLimits

0xeed2,	// (0x0009c667) frm_month_g1_ParamLimits

0x960d,	// (0x00096da2) frm_month_g2_ParamLimits

0x9620,	// (0x00096db5) frm_month_g3_ParamLimits

0x9633,	// (0x00096dc8) frm_month_g4_ParamLimits

0x9646,	// (0x00096ddb) frm_month_g5_ParamLimits

0x9659,	// (0x00096dee) frm_month_g6_ParamLimits

0x966e,	// (0x00096e03) frm_month_g7_ParamLimits

0xeedf,	// (0x0009c674) frm_month_g8_ParamLimits

0x9683,	// (0x00096e18) frm_month_g9_ParamLimits

0x9693,	// (0x00096e28) frm_month_g10_ParamLimits

0x96a3,	// (0x00096e38) frm_month_g11_ParamLimits

0x96b3,	// (0x00096e48) frm_month_g12_ParamLimits

0x96c5,	// (0x00096e5a) frm_month_g13_ParamLimits

0x96d9,	// (0x00096e6e) frm_month_g14_ParamLimits

0x96ed,	// (0x00096e82) frm_month_g15_ParamLimits

0x9701,	// (0x00096e96) frm_month_g16_ParamLimits

0xff14,	// (0x0009d6a9) frm_month_g_ParamLimits

0xeeec,	// (0x0009c681) cell_top_day_name_pane_t1_ParamLimits

0x9715,	// (0x00096eaa) cell_area_left_week_number_pane_g1_ParamLimits

0x9721,	// (0x00096eb6) cell_area_left_week_number_pane_t1_ParamLimits

0xd02b,	// (0x0009a7c0) cell_month_view_pane_g1_ParamLimits

0x9734,	// (0x00096ec9) cell_month_view_pane_t1_ParamLimits

0xa0fb,	// (0x00097890) main_clock2_btn_pane_g1

0xf02d,	// (0x0009c7c2) main_clock2_btn_pane_t1

0xac82,	// (0x00098417) listscroll_cmail_pane_ParamLimits

0xe778,	// (0x0009bf0d) main_sp_fs_email_pane_g1_ParamLimits

0xe784,	// (0x0009bf19) main_sp_fs_email_pane_g2_ParamLimits

0xfcec,	// (0x0009d481) main_sp_fs_email_pane_g_ParamLimits

0xeaed,	// (0x0009c282) list_recal_day_pane_ParamLimits

0xeafe,	// (0x0009c293) mian_recal_day_pane_t1

0x04e3,	// (0x0008dc78) list_single_dyc_row_text_pane_t4_ParamLimits

0x04e3,	// (0x0008dc78) list_single_dyc_row_text_pane_t4

0x052c,	// (0x0008dcc1) list_single_dyc_row_text_pane_t5_ParamLimits

0x052c,	// (0x0008dcc1) list_single_dyc_row_text_pane_t5

0x86ff,	// (0x00095e94) list_single_dyc_row_text_pane_t6_ParamLimits

0x86ff,	// (0x00095e94) list_single_dyc_row_text_pane_t6

0x2bda,	// (0x0009036f) aid_mgn_list_cale_time_pane

0xac82,	// (0x00098417) main_gallery2_pane_ParamLimits

0xd1db,	// (0x0009a970) main_clock2_pane_cp01_t1

0xd1e9,	// (0x0009a97e) main_clock2_pane_cp01_t3

0x0001,

0xf7c7,	// (0x0009cf5c) main_clock2_pane_cp01_t

0x1368,	// (0x0008eafd) cale_week_scroll_pane_g16_ParamLimits

0x1368,	// (0x0008eafd) cale_week_scroll_pane_g16

0xa3fe,	// (0x00097b93) vorec_slider_pane

0xefb0,	// (0x0009c745) vidtel_button_pane_t1_ParamLimits

0x8eb1,	// (0x00096646) main_fs_bigclock_clock_pane_g1_ParamLimits

0x8eb1,	// (0x00096646) main_fs_bigclock_clock_pane_g2_ParamLimits

0x8ec4,	// (0x00096659) main_fs_bigclock_clock_pane_g3_ParamLimits

0x8ec4,	// (0x00096659) main_fs_bigclock_clock_pane_g4_ParamLimits

0xfe71,	// (0x0009d606) main_fs_bigclock_clock_pane_g_ParamLimits

0x8edb,	// (0x00096670) main_fs_bigclock_clock_pane_t1_ParamLimits

0x8ef1,	// (0x00096686) main_fs_bigclock_clock_pane_t2_ParamLimits

0xfe7a,	// (0x0009d60f) main_fs_bigclock_clock_pane_t_ParamLimits

0x4e2e,	// (0x000925c3) main_mup3_lyrics_pane_ParamLimits

0x4e2e,	// (0x000925c3) main_mup3_lyrics_pane

0x99d8,	// (0x0009716d) main_mup3_lyrics_pane_t1_ParamLimits

0x99d8,	// (0x0009716d) main_mup3_lyrics_pane_t1

0xa7b2,	// (0x00097f47) aid_main_mp4_pane_t1_area

0xa7bc,	// (0x00097f51) aid_main_mp4_pane_t2_area

0xa868,	// (0x00097ffd) main_mp4_pane_g7_ParamLimits

0xa868,	// (0x00097ffd) main_mp4_pane_g7

0xa874,	// (0x00098009) main_mp4_pane_g8_ParamLimits

0xa874,	// (0x00098009) main_mp4_pane_g8

0x620f,	// (0x000939a4) aid_call6_pane_g1_size

0x98b8,	// (0x0009704d) list_double_large_graphic_phob2_other_pane_ParamLimits

0x98b8,	// (0x0009704d) list_double_large_graphic_phob2_other_pane

0x99f3,	// (0x00097188) list_double_large_graphic_phob2_other_pane_g1

0x99fb,	// (0x00097190) list_highlight_pane_cp026
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

} // end of namespace AknLayoutScalable_Elaf_pvl4_apps_vga4_lsc_tch_Large
