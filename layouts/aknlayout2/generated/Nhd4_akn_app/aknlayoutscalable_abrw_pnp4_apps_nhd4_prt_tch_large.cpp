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

#include "aknlayoutscalable_abrw_pnp4_apps_nhd4_prt_tch_large.h"
#include "AknLayout2ScalableDecode.h"
namespace AknLayoutScalable_Apps { extern const TUint8 KByteCodedData_AknLayoutScalable_Elaf_pnp4_apps_nhd4_prt_tch[]; }

namespace AknLayoutScalable_Abrw_pnp4_apps_nhd4_prt_tch_Large
{

extern const TUint16 KDataLookup[AknLayoutScalable_Apps::E_TApiId_TableSize];
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Apps::KByteCodedData_AknLayoutScalable_Elaf_pnp4_apps_nhd4_prt_tch + 0x0009a506 };

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
0x0d4e,	// (0x0009b254) Screen

0x0d5a,	// (0x0009b260) application_window

0x0db6,	// (0x0009b2bc) area_bottom_pane_ParamLimits

0x0db6,	// (0x0009b2bc) area_bottom_pane

0x0e0f,	// (0x0009b315) area_top_pane_ParamLimits

0x0e0f,	// (0x0009b315) area_top_pane

0x0e73,	// (0x0009b379) call_video_uplink_pane_ParamLimits

0x0e73,	// (0x0009b379) call_video_uplink_pane

0x0eb2,	// (0x0009b3b8) main_pane_ParamLimits

0x0eb2,	// (0x0009b3b8) main_pane

0xc82c,	// (0x000a6d32) context_pane

0x453c,	// (0x0009ea42) navi_pane

0x4562,	// (0x0009ea68) popup_cale_events_window_ParamLimits

0x4562,	// (0x0009ea68) popup_cale_events_window

0xc83f,	// (0x000a6d45) popup_mup_playback_window

0x457a,	// (0x0009ea80) signal_pane

0xa774,	// (0x000a4c7a) main_browser_pane

0xb410,	// (0x000a5916) main_burst_pane

0x43c4,	// (0x0009e8ca) main_calc_pane

0xc812,	// (0x000a6d18) main_cale_day_pane

0x15fd,	// (0x0009bb03) main_cale_month_pane

0xc812,	// (0x000a6d18) main_cale_week_pane

0xb410,	// (0x000a5916) main_call_pane

0x9f69,	// (0x000a446f) main_call_poc_pane

0xb410,	// (0x000a5916) main_camera_pane

0xb410,	// (0x000a5916) main_chi_dic_pane

0xb136,	// (0x000a563c) main_clock_pane

0x9f69,	// (0x000a446f) main_fmradio_pane

0xb410,	// (0x000a5916) main_graph_messa_pane

0x9f69,	// (0x000a446f) main_help_pane

0xa774,	// (0x000a4c7a) main_im_pane

0xa690,	// (0x000a4b96) main_image_pane_ParamLimits

0xa690,	// (0x000a4b96) main_image_pane

0x9f69,	// (0x000a446f) main_location2_pane

0xb410,	// (0x000a5916) main_location_pane

0xa690,	// (0x000a4b96) main_messa_pane

0x9f69,	// (0x000a446f) main_mp2_pane

0xb410,	// (0x000a5916) main_mp_pane

0x9f69,	// (0x000a446f) main_msg_pane

0x9f69,	// (0x000a446f) main_mup_eq_pane

0x9f69,	// (0x000a446f) main_mup_pane

0xa774,	// (0x000a4c7a) main_notes_pane

0x9f69,	// (0x000a446f) main_pec_pane

0x9f69,	// (0x000a446f) main_phob_pane

0x9f69,	// (0x000a446f) main_pinb_pane

0x9f69,	// (0x000a446f) main_postcard_pane

0x9f69,	// (0x000a446f) main_qdial_pane

0xb410,	// (0x000a5916) main_skin_pane

0x9f69,	// (0x000a446f) main_smil2_pane

0xb410,	// (0x000a5916) main_smil_pane

0xb410,	// (0x000a5916) main_video_pane

0xb410,	// (0x000a5916) main_video_tele_pane

0xa690,	// (0x000a4b96) main_viewer_pane_ParamLimits

0xa690,	// (0x000a4b96) main_viewer_pane

0xb410,	// (0x000a5916) main_vorec_pane

0x4410,	// (0x0009e916) popup_blid_sat_info_window_ParamLimits

0x4410,	// (0x0009e916) popup_blid_sat_info_window

0x4430,	// (0x0009e936) popup_dyc_status_message_window_ParamLimits

0x4430,	// (0x0009e936) popup_dyc_status_message_window

0x443e,	// (0x0009e944) popup_grid_large_graphic_window_ParamLimits

0x443e,	// (0x0009e944) popup_grid_large_graphic_window

0x44cd,	// (0x0009e9d3) popup_loc_request_window_ParamLimits

0x44cd,	// (0x0009e9d3) popup_loc_request_window

0x4514,	// (0x0009ea1a) popup_wml_address_window_ParamLimits

0x4514,	// (0x0009ea1a) popup_wml_address_window

0x429c,	// (0x0009e7a2) call_muted_g1

0x3f5a,	// (0x0009e460) popup_call_audio_conf_window_ParamLimits

0x3f5a,	// (0x0009e460) popup_call_audio_conf_window

0x42ac,	// (0x0009e7b2) popup_call_audio_first_window_ParamLimits

0x42ac,	// (0x0009e7b2) popup_call_audio_first_window

0x42ec,	// (0x0009e7f2) popup_call_audio_in_window_ParamLimits

0x42ec,	// (0x0009e7f2) popup_call_audio_in_window

0x4310,	// (0x0009e816) popup_call_audio_out_window_ParamLimits

0x4310,	// (0x0009e816) popup_call_audio_out_window

0x4332,	// (0x0009e838) popup_call_audio_second_window_ParamLimits

0x4332,	// (0x0009e838) popup_call_audio_second_window

0x4362,	// (0x0009e868) popup_call_audio_wait_window_ParamLimits

0x4362,	// (0x0009e868) popup_call_audio_wait_window

0x4383,	// (0x0009e889) popup_number_entry_window_ParamLimits

0x4383,	// (0x0009e889) popup_number_entry_window

0x9b56,	// (0x000a405c) bg_popup_call_pane_cp05_ParamLimits

0x9b56,	// (0x000a405c) bg_popup_call_pane_cp05

0x9b76,	// (0x000a407c) popup_number_entry_window_t1

0x9b89,	// (0x000a408f) popup_number_entry_window_t2

0x9b9b,	// (0x000a40a1) popup_number_entry_window_t3

0x0003,

0xf0cd,	// (0x000a95d3) popup_number_entry_window_t

0x9bad,	// (0x000a40b3) text_title_cp2

0x9bc0,	// (0x000a40c6) bg_popup_call_pane_cp_ParamLimits

0x9bc0,	// (0x000a40c6) bg_popup_call_pane_cp

0x9bce,	// (0x000a40d4) call_thumbnail_pane

0x9bd6,	// (0x000a40dc) popup_call_audio_in_window_g1_ParamLimits

0x9bd6,	// (0x000a40dc) popup_call_audio_in_window_g1

0x9be2,	// (0x000a40e8) popup_call_audio_in_window_g2_ParamLimits

0x9be2,	// (0x000a40e8) popup_call_audio_in_window_g2

0x9bee,	// (0x000a40f4) popup_call_audio_in_window_g3_ParamLimits

0x9bee,	// (0x000a40f4) popup_call_audio_in_window_g3

0x0002,

0xf0d6,	// (0x000a95dc) popup_call_audio_in_window_g_ParamLimits

0xf0d6,	// (0x000a95dc) popup_call_audio_in_window_g

0x9bfa,	// (0x000a4100) popup_call_audio_in_window_t1_ParamLimits

0x9bfa,	// (0x000a4100) popup_call_audio_in_window_t1

0x9c16,	// (0x000a411c) popup_call_audio_in_window_t2_ParamLimits

0x9c16,	// (0x000a411c) popup_call_audio_in_window_t2

0x9c32,	// (0x000a4138) popup_call_audio_in_window_t3_ParamLimits

0x9c32,	// (0x000a4138) popup_call_audio_in_window_t3

0x0002,

0xf0dd,	// (0x000a95e3) popup_call_audio_in_window_t_ParamLimits

0xf0dd,	// (0x000a95e3) popup_call_audio_in_window_t

0x9bc0,	// (0x000a40c6) bg_popup_call_pane_cp01_ParamLimits

0x9bc0,	// (0x000a40c6) bg_popup_call_pane_cp01

0x9bce,	// (0x000a40d4) call_thumbnail_pane_cp02

0x9c45,	// (0x000a414b) call_type_pane_cp022

0x9c4d,	// (0x000a4153) popup_call_audio_out_window_g1_ParamLimits

0x9c4d,	// (0x000a4153) popup_call_audio_out_window_g1

0x9c5f,	// (0x000a4165) popup_call_audio_out_window_g2_ParamLimits

0x9c5f,	// (0x000a4165) popup_call_audio_out_window_g2

0x9c6b,	// (0x000a4171) popup_call_audio_out_window_g3_ParamLimits

0x9c6b,	// (0x000a4171) popup_call_audio_out_window_g3

0x0002,

0xf0e4,	// (0x000a95ea) popup_call_audio_out_window_g_ParamLimits

0xf0e4,	// (0x000a95ea) popup_call_audio_out_window_g

0x9c7d,	// (0x000a4183) popup_call_audio_out_window_t1_ParamLimits

0x9c7d,	// (0x000a4183) popup_call_audio_out_window_t1

0x9c95,	// (0x000a419b) popup_call_audio_out_window_t2_ParamLimits

0x9c95,	// (0x000a419b) popup_call_audio_out_window_t2

0x0001,

0xf0eb,	// (0x000a95f1) popup_call_audio_out_window_t_ParamLimits

0xf0eb,	// (0x000a95f1) popup_call_audio_out_window_t

0x9caa,	// (0x000a41b0) bg_popup_call_pane_ParamLimits

0x9caa,	// (0x000a41b0) bg_popup_call_pane

0x10ce,	// (0x0009b5d4) call_thumbnail_pane_cp_ParamLimits

0x10ce,	// (0x0009b5d4) call_thumbnail_pane_cp

0x9d2e,	// (0x000a4234) call_type_pane_cp01_ParamLimits

0x9d2e,	// (0x000a4234) call_type_pane_cp01

0x9d72,	// (0x000a4278) popup_call_audio_first_window_g1_ParamLimits

0x9d72,	// (0x000a4278) popup_call_audio_first_window_g1

0x9dbe,	// (0x000a42c4) popup_call_audio_first_window_g2_ParamLimits

0x9dbe,	// (0x000a42c4) popup_call_audio_first_window_g2

0x0001,

0xf0f0,	// (0x000a95f6) popup_call_audio_first_window_g_ParamLimits

0xf0f0,	// (0x000a95f6) popup_call_audio_first_window_g

0x9e02,	// (0x000a4308) popup_call_audio_first_window_t1_ParamLimits

0x9e02,	// (0x000a4308) popup_call_audio_first_window_t1

0x9eae,	// (0x000a43b4) popup_call_audio_first_window_t4_ParamLimits

0x9eae,	// (0x000a43b4) popup_call_audio_first_window_t4

0x9f3a,	// (0x000a4440) popup_call_audio_first_window_t5_ParamLimits

0x9f3a,	// (0x000a4440) popup_call_audio_first_window_t5

0x0002,

0xf0f5,	// (0x000a95fb) popup_call_audio_first_window_t_ParamLimits

0xf0f5,	// (0x000a95fb) popup_call_audio_first_window_t

0x9f69,	// (0x000a446f) bg_popup_call_pane_cp02

0x9f73,	// (0x000a4479) call_type_pane_cp023

0x9f7b,	// (0x000a4481) popup_call_audio_wait_window_g1

0x9f83,	// (0x000a4489) popup_call_audio_wait_window_g2

0x0001,

0xf0fc,	// (0x000a9602) popup_call_audio_wait_window_g

0x9f8b,	// (0x000a4491) popup_call_audio_wait_window_t3

0x9f99,	// (0x000a449f) bg_popup_call_pane_cp03_ParamLimits

0x9f99,	// (0x000a449f) bg_popup_call_pane_cp03

0xa35d,	// (0x000a4863) call_thumbnail_pane_cp011_ParamLimits

0xa35d,	// (0x000a4863) call_thumbnail_pane_cp011

0xa369,	// (0x000a486f) call_type_pane_cp034_ParamLimits

0xa369,	// (0x000a486f) call_type_pane_cp034

0xa3a5,	// (0x000a48ab) popup_call_audio_second_window_g1_ParamLimits

0xa3a5,	// (0x000a48ab) popup_call_audio_second_window_g1

0xa3e1,	// (0x000a48e7) popup_call_audio_second_window_g2_ParamLimits

0xa3e1,	// (0x000a48e7) popup_call_audio_second_window_g2

0x0001,

0xf101,	// (0x000a9607) popup_call_audio_second_window_g_ParamLimits

0xf101,	// (0x000a9607) popup_call_audio_second_window_g

0xa41d,	// (0x000a4923) popup_call_audio_second_window_t1_ParamLimits

0xa41d,	// (0x000a4923) popup_call_audio_second_window_t1

0xa606,	// (0x000a4b0c) popup_call_audio_second_window_t2_ParamLimits

0xa606,	// (0x000a4b0c) popup_call_audio_second_window_t2

0xa63c,	// (0x000a4b42) popup_call_audio_second_window_t3_ParamLimits

0xa63c,	// (0x000a4b42) popup_call_audio_second_window_t3

0x0002,

0xf106,	// (0x000a960c) popup_call_audio_second_window_t_ParamLimits

0xf106,	// (0x000a960c) popup_call_audio_second_window_t

0x9f69,	// (0x000a446f) bg_popup_call_pane_cp04

0xa672,	// (0x000a4b78) list_conf_pane

0xa67a,	// (0x000a4b80) popup_call_audio_conf_window_t1

0xa688,	// (0x000a4b8e) call_thumbnail_pane_g1

0xa690,	// (0x000a4b96) bg_pinb_pane_ParamLimits

0xa690,	// (0x000a4b96) bg_pinb_pane

0xa69e,	// (0x000a4ba4) find_pinb_pane

0xa6a7,	// (0x000a4bad) listscroll_pinb_pane_ParamLimits

0xa6a7,	// (0x000a4bad) listscroll_pinb_pane

0xa6b6,	// (0x000a4bbc) pinb_bg_pane_g1

0x10f2,	// (0x0009b5f8) pinb_bg_pane_g2

0x10fe,	// (0x0009b604) pinb_bg_pane_g3

0x110a,	// (0x0009b610) pinb_bg_pane_g4

0x1116,	// (0x0009b61c) pinb_bg_pane_g5

0x1122,	// (0x0009b628) pinb_bg_pane_g6

0x112d,	// (0x0009b633) pinb_bg_pane_g7

0x1138,	// (0x0009b63e) pinb_bg_pane_g8

0x1143,	// (0x0009b649) pinb_bg_pane_g9

0x114d,	// (0x0009b653) pinb_bg_pane_g10

0x0009,

0xf10d,	// (0x000a9613) pinb_bg_pane_g

0x116a,	// (0x0009b670) grid_pinb_pane

0x1175,	// (0x0009b67b) list_pinb_pane

0x1180,	// (0x0009b686) scroll_pane_cp01_ParamLimits

0x1180,	// (0x0009b686) scroll_pane_cp01

0xa6c0,	// (0x000a4bc6) find_pinb_pane_g1_ParamLimits

0xa6c0,	// (0x000a4bc6) find_pinb_pane_g1

0xa6d8,	// (0x000a4bde) find_pinb_pane_t1

0xa6ea,	// (0x000a4bf0) find_pinb_pane_t2

0x0001,

0xf127,	// (0x000a962d) find_pinb_pane_t

0xa6ff,	// (0x000a4c05) input_focus_pane_cp01_ParamLimits

0xa6ff,	// (0x000a4c05) input_focus_pane_cp01

0x1192,	// (0x0009b698) cell_pinb_pane_ParamLimits

0x1192,	// (0x0009b698) cell_pinb_pane

0xa70b,	// (0x000a4c11) cell_pinb_pane_g1_ParamLimits

0xa70b,	// (0x000a4c11) cell_pinb_pane_g1

0xa71e,	// (0x000a4c24) cell_pinb_pane_g2_ParamLimits

0xa71e,	// (0x000a4c24) cell_pinb_pane_g2

0xa72a,	// (0x000a4c30) cell_pinb_pane_g3_ParamLimits

0xa72a,	// (0x000a4c30) cell_pinb_pane_g3

0x0002,

0xf12c,	// (0x000a9632) cell_pinb_pane_g_ParamLimits

0xf12c,	// (0x000a9632) cell_pinb_pane_g

0x9f69,	// (0x000a446f) grid_highlight_pane_cp01

0x11c1,	// (0x0009b6c7) list_pinb_item_pane_ParamLimits

0x11c1,	// (0x0009b6c7) list_pinb_item_pane

0x9f69,	// (0x000a446f) list_highlight_pane_cp02

0x11eb,	// (0x0009b6f1) list_pinb_item_pane_g1_ParamLimits

0x11eb,	// (0x0009b6f1) list_pinb_item_pane_g1

0x11f8,	// (0x0009b6fe) list_pinb_item_pane_g2_ParamLimits

0x11f8,	// (0x0009b6fe) list_pinb_item_pane_g2

0x1204,	// (0x0009b70a) list_pinb_item_pane_g3_ParamLimits

0x1204,	// (0x0009b70a) list_pinb_item_pane_g3

0x1215,	// (0x0009b71b) list_pinb_item_pane_g4_ParamLimits

0x1215,	// (0x0009b71b) list_pinb_item_pane_g4

0x0003,

0xf133,	// (0x000a9639) list_pinb_item_pane_g_ParamLimits

0xf133,	// (0x000a9639) list_pinb_item_pane_g

0x1221,	// (0x0009b727) list_pinb_item_pane_t1_ParamLimits

0x1221,	// (0x0009b727) list_pinb_item_pane_t1

0x1252,	// (0x0009b758) calc_display_pane

0x1270,	// (0x0009b776) calc_paper_pane

0x128c,	// (0x0009b792) grid_calc_pane

0x9f69,	// (0x000a446f) bg_list_pane_cp01

0x12b8,	// (0x0009b7be) clock_g1

0x12c0,	// (0x0009b7c6) clock_g2

0x0001,

0xf13c,	// (0x000a9642) clock_g

0x12ca,	// (0x0009b7d0) clock_t1_ParamLimits

0x12ca,	// (0x0009b7d0) clock_t1

0x12df,	// (0x0009b7e5) clock_t2_ParamLimits

0x12df,	// (0x0009b7e5) clock_t2

0x12f1,	// (0x0009b7f7) clock_t3_ParamLimits

0x12f1,	// (0x0009b7f7) clock_t3

0x1303,	// (0x0009b809) clock_t4_ParamLimits

0x1303,	// (0x0009b809) clock_t4

0x1315,	// (0x0009b81b) clock_t5_ParamLimits

0x1315,	// (0x0009b81b) clock_t5

0x132a,	// (0x0009b830) clock_t6_ParamLimits

0x132a,	// (0x0009b830) clock_t6

0x133c,	// (0x0009b842) clock_t7_ParamLimits

0x133c,	// (0x0009b842) clock_t7

0x134e,	// (0x0009b854) clock_t8_ParamLimits

0x134e,	// (0x0009b854) clock_t8

0x1364,	// (0x0009b86a) clock_t9_ParamLimits

0x1364,	// (0x0009b86a) clock_t9

0x0008,

0xf141,	// (0x000a9647) clock_t_ParamLimits

0xf141,	// (0x000a9647) clock_t

0xa736,	// (0x000a4c3c) popup_clock_analogue_window_cp02

0xa736,	// (0x000a4c3c) popup_clock_digital_window_cp01

0xa73e,	// (0x000a4c44) listscroll_help_pane

0x9f69,	// (0x000a446f) phob_pre_status_pane

0xa748,	// (0x000a4c4e) grid_qdial_pane

0xa690,	// (0x000a4b96) listscroll_mce_pane

0xa690,	// (0x000a4b96) bg_notes_pane

0xa752,	// (0x000a4c58) list_notes_pane

0x137a,	// (0x0009b880) scroll_pane_cp06

0xa760,	// (0x000a4c66) bg_calc_paper_pane

0x1389,	// (0x0009b88f) list_calc_pane

0xa774,	// (0x000a4c7a) bg_calc_display_pane

0x13a3,	// (0x0009b8a9) calc_display_pane_t1

0x13b8,	// (0x0009b8be) calc_display_pane_t2

0x13cd,	// (0x0009b8d3) calc_display_pane_t3

0x0002,

0xf154,	// (0x000a965a) calc_display_pane_t

0x13df,	// (0x0009b8e5) cell_calc_pane_ParamLimits

0x13df,	// (0x0009b8e5) cell_calc_pane

0xa780,	// (0x000a4c86) bg_calc_paper_pane_g1

0xa78c,	// (0x000a4c92) bg_calc_paper_pane_g2

0xa798,	// (0x000a4c9e) bg_calc_paper_pane_g3

0xa7a4,	// (0x000a4caa) bg_calc_paper_pane_g4

0xa7b0,	// (0x000a4cb6) bg_calc_paper_pane_g5

0x140c,	// (0x0009b912) bg_calc_paper_pane_g6

0x141d,	// (0x0009b923) bg_calc_paper_pane_g7

0x142e,	// (0x0009b934) bg_calc_paper_pane_g8

0x0007,

0xf15b,	// (0x000a9661) bg_calc_paper_pane_g

0x143f,	// (0x0009b945) calc_bg_paper_pane_g9

0x1450,	// (0x0009b956) list_calc_item_pane_ParamLimits

0x1450,	// (0x0009b956) list_calc_item_pane

0xa7bc,	// (0x000a4cc2) list_calc_item_pane_g1

0x1484,	// (0x0009b98a) list_calc_item_pane_t1_ParamLimits

0x1484,	// (0x0009b98a) list_calc_item_pane_t1

0x1496,	// (0x0009b99c) list_calc_item_pane_t2_ParamLimits

0x1496,	// (0x0009b99c) list_calc_item_pane_t2

0x0001,

0xf16c,	// (0x000a9672) list_calc_item_pane_t_ParamLimits

0xf16c,	// (0x000a9672) list_calc_item_pane_t

0xa7c9,	// (0x000a4ccf) cell_calc_pane_g1

0xa7d3,	// (0x000a4cd9) grid_highlight_pane_cp02

0xa7f5,	// (0x000a4cfb) bg_calc_display_pane_g1

0x14c6,	// (0x0009b9cc) bg_calc_display_pane_g2

0xa7fe,	// (0x000a4d04) bg_calc_display_pane_g3

0x0002,

0xf176,	// (0x000a967c) bg_calc_display_pane_g

0x14d0,	// (0x0009b9d6) cell_qdial_pane_ParamLimits

0x14d0,	// (0x0009b9d6) cell_qdial_pane

0x14e4,	// (0x0009b9ea) cell_qdial_pane_g1_ParamLimits

0x14e4,	// (0x0009b9ea) cell_qdial_pane_g1

0x14f1,	// (0x0009b9f7) cell_qdial_pane_g2_ParamLimits

0x14f1,	// (0x0009b9f7) cell_qdial_pane_g2

0xa807,	// (0x000a4d0d) cell_qdial_pane_g3_ParamLimits

0xa807,	// (0x000a4d0d) cell_qdial_pane_g3

0x0003,

0xf17d,	// (0x000a9683) cell_qdial_pane_g_ParamLimits

0xf17d,	// (0x000a9683) cell_qdial_pane_g

0x150e,	// (0x0009ba14) cell_qdial_pane_t1_ParamLimits

0x150e,	// (0x0009ba14) cell_qdial_pane_t1

0x1526,	// (0x0009ba2c) cell_qdial_pane_t2_ParamLimits

0x1526,	// (0x0009ba2c) cell_qdial_pane_t2

0x1539,	// (0x0009ba3f) cell_qdial_pane_t3_ParamLimits

0x1539,	// (0x0009ba3f) cell_qdial_pane_t3

0x0002,

0xf186,	// (0x000a968c) cell_qdial_pane_t_ParamLimits

0xf186,	// (0x000a968c) cell_qdial_pane_t

0x9f69,	// (0x000a446f) grid_highlight_pane_cp04

0xa813,	// (0x000a4d19) thumbnail_qdial_pane_ParamLimits

0xa813,	// (0x000a4d19) thumbnail_qdial_pane

0xa86f,	// (0x000a4d75) list_help_pane

0xa878,	// (0x000a4d7e) scroll_pane_cp02

0x154c,	// (0x0009ba52) help_list_pane_t1_ParamLimits

0x154c,	// (0x0009ba52) help_list_pane_t1

0x1586,	// (0x0009ba8c) bg_notes_pane_g2

0x158e,	// (0x0009ba94) bg_notes_pane_g3

0x1596,	// (0x0009ba9c) notes_bg_pane_g1

0x159e,	// (0x0009baa4) notes_bg_pane_g4

0x15a6,	// (0x0009baac) notes_bg_pane_g5

0x15ae,	// (0x0009bab4) notes_bg_pane_g6

0x15b6,	// (0x0009babc) notes_bg_pane_g7

0x15be,	// (0x0009bac4) notes_bg_pane_g8

0x15c6,	// (0x0009bacc) notes_bg_pane_g9

0x0006,

0xf1a4,	// (0x000a96aa) notes_bg_pane_g

0x15ce,	// (0x0009bad4) list_notes_text_pane_ParamLimits

0x15ce,	// (0x0009bad4) list_notes_text_pane

0xa881,	// (0x000a4d87) list_notes_text_pane_g1

0x9ff9,	// (0x000a44ff) list_notes_text_pane_t1

0x15fd,	// (0x0009bb03) listscroll_cale_week_pane

0x1622,	// (0x0009bb28) bg_cale_heading_pane

0xa8a4,	// (0x000a4daa) bg_cale_pane_cp01

0x1644,	// (0x0009bb4a) cale_week_corner_pane

0x165e,	// (0x0009bb64) cale_week_day_heading_pane

0x1680,	// (0x0009bb86) cale_week_scroll_pane_g1

0x169d,	// (0x0009bba3) cale_week_scroll_pane_g2

0x16b0,	// (0x0009bbb6) cale_week_scroll_pane_g3

0x16c3,	// (0x0009bbc9) cale_week_scroll_pane_g4

0x16d6,	// (0x0009bbdc) cale_week_scroll_pane_g5

0x16e9,	// (0x0009bbef) cale_week_scroll_pane_g6

0x16fc,	// (0x0009bc02) cale_week_scroll_pane_g7

0x170f,	// (0x0009bc15) cale_week_scroll_pane_g8

0x1724,	// (0x0009bc2a) cale_week_scroll_pane_g9

0x1737,	// (0x0009bc3d) cale_week_scroll_pane_g10

0x174a,	// (0x0009bc50) cale_week_scroll_pane_g11

0x175d,	// (0x0009bc63) cale_week_scroll_pane_g12

0x1774,	// (0x0009bc7a) cale_week_scroll_pane_g13

0x178f,	// (0x0009bc95) cale_week_scroll_pane_g14

0x17aa,	// (0x0009bcb0) cale_week_scroll_pane_g15

0x000e,

0xf1b3,	// (0x000a96b9) cale_week_scroll_pane_g

0x17c5,	// (0x0009bccb) cale_week_time_pane

0x17da,	// (0x0009bce0) grid_cale_week_pane

0xa8d4,	// (0x000a4dda) scroll_pane_cp08

0x17fb,	// (0x0009bd01) cell_cale_week_pane_ParamLimits

0x17fb,	// (0x0009bd01) cell_cale_week_pane

0x185f,	// (0x0009bd65) cale_week_day_heading_pane_t1

0x189a,	// (0x0009bda0) cale_week_day_heading_pane_t2

0x18d5,	// (0x0009bddb) cale_week_day_heading_pane_t3

0x1910,	// (0x0009be16) cale_week_day_heading_pane_t4

0x194b,	// (0x0009be51) cale_week_day_heading_pane_t5

0x1986,	// (0x0009be8c) cale_week_day_heading_pane_t6

0x19c1,	// (0x0009bec7) cale_week_day_heading_pane_t7

0x0006,

0xf1d2,	// (0x000a96d8) cale_week_day_heading_pane_t

0xa8f1,	// (0x000a4df7) bg_cale_side_pane

0x19fc,	// (0x0009bf02) cale_week_time_pane_t1

0x1a16,	// (0x0009bf1c) cale_week_time_pane_t2

0x1a30,	// (0x0009bf36) cale_week_time_pane_t3

0x1a4a,	// (0x0009bf50) cale_week_time_pane_t4

0x1a64,	// (0x0009bf6a) cale_week_time_pane_t5

0x1a80,	// (0x0009bf86) cale_week_time_pane_t6

0x1aa2,	// (0x0009bfa8) cale_week_time_pane_t7

0x1ac6,	// (0x0009bfcc) cale_week_time_pane_t8

0x0007,

0xf1e1,	// (0x000a96e7) cale_week_time_pane_t

0x1aec,	// (0x0009bff2) cell_cale_week_pane_g2

0x1aff,	// (0x0009c005) cell_cale_week_pane_g3_ParamLimits

0x1aff,	// (0x0009c005) cell_cale_week_pane_g3

0xa8ff,	// (0x000a4e05) grid_highlight_pane_cp07

0xa907,	// (0x000a4e0d) listscroll_gms_pane

0xa911,	// (0x000a4e17) grid_gms_pane

0xa91a,	// (0x000a4e20) listscroll_gms_pane_g1

0xa922,	// (0x000a4e28) listscroll_gms_pane_g2

0x0001,

0xf1f2,	// (0x000a96f8) listscroll_gms_pane_g

0x1b17,	// (0x0009c01d) scroll_pane_cp010

0x1b22,	// (0x0009c028) cell_gms_pane_ParamLimits

0x1b22,	// (0x0009c028) cell_gms_pane

0x1b32,	// (0x0009c038) cell_gms_pane_g1

0xa92a,	// (0x000a4e30) cell_gms_pane_g2

0xa881,	// (0x000a4d87) cell_gms_pane_g3

0xa932,	// (0x000a4e38) cell_gms_pane_g4

0x0003,

0xf1f7,	// (0x000a96fd) cell_gms_pane_g

0xa93b,	// (0x000a4e41) grid_highlight_pane_cp09

0x4244,	// (0x0009e74a) phob_pre_status_pane_g1

0x424c,	// (0x0009e752) phob_pre_status_pane_g2

0x4254,	// (0x0009e75a) phob_pre_status_pane_g3

0x425c,	// (0x0009e762) phob_pre_status_pane_g4

0x0004,

0xf53e,	// (0x000a9a44) phob_pre_status_pane_g

0x426c,	// (0x0009e772) phob_pre_status_pane_t1

0x427c,	// (0x0009e782) phob_pre_status_pane_t2

0x428c,	// (0x0009e792) phob_pre_status_pane_t3

0x0002,

0xf549,	// (0x000a9a4f) phob_pre_status_pane_t

0x9f69,	// (0x000a446f) bg_list_pane_cp05

0x1b42,	// (0x0009c048) grid_vorec_pane

0x1b4c,	// (0x0009c052) vorec_t1

0x1b5a,	// (0x0009c060) vorec_t2

0x1b68,	// (0x0009c06e) vorec_t3

0x1b76,	// (0x0009c07c) vorec_t4

0x1b84,	// (0x0009c08a) vorec_t5

0x1b92,	// (0x0009c098) vorec_t6

0x0006,

0xf200,	// (0x000a9706) vorec_t

0x1bae,	// (0x0009c0b4) wait_bar_pane_cp01

0x1bb6,	// (0x0009c0bc) cell_vorec_pane_ParamLimits

0x1bb6,	// (0x0009c0bc) cell_vorec_pane

0x1bc9,	// (0x0009c0cf) cell_vorec_pane_g1

0x9f69,	// (0x000a446f) grid_highlight_pane_cp05

0x1be3,	// (0x0009c0e9) cams_zoom_pane

0x1bef,	// (0x0009c0f5) image_vga_pane

0x1bfe,	// (0x0009c104) main_camera_pane_g1

0x1c0c,	// (0x0009c112) main_camera_pane_g2

0x1c18,	// (0x0009c11e) main_camera_pane_g3

0x1c24,	// (0x0009c12a) main_camera_pane_g4

0x1c30,	// (0x0009c136) main_camera_pane_g5

0x1c3c,	// (0x0009c142) main_camera_pane_g6

0x1c48,	// (0x0009c14e) main_camera_pane_g7

0x0007,

0xf20f,	// (0x000a9715) main_camera_pane_g

0x1c54,	// (0x0009c15a) main_camera_pane_t1

0x1c66,	// (0x0009c16c) main_camera_pane_t2

0x0001,

0xf220,	// (0x000a9726) main_camera_pane_t

0x1c87,	// (0x0009c18d) cams_zoom_pane_cp_ParamLimits

0x1c87,	// (0x0009c18d) cams_zoom_pane_cp

0x1cab,	// (0x0009c1b1) image_cif_pane_ParamLimits

0x1cab,	// (0x0009c1b1) image_cif_pane

0x1cc9,	// (0x0009c1cf) image_subqcif_pane

0x1cd1,	// (0x0009c1d7) main_video_pane_g1_ParamLimits

0x1cd1,	// (0x0009c1d7) main_video_pane_g1

0x1cf1,	// (0x0009c1f7) main_video_pane_g2_ParamLimits

0x1cf1,	// (0x0009c1f7) main_video_pane_g2

0x1d21,	// (0x0009c227) main_video_pane_g3_ParamLimits

0x1d21,	// (0x0009c227) main_video_pane_g3

0x1d4a,	// (0x0009c250) main_video_pane_g4_ParamLimits

0x1d4a,	// (0x0009c250) main_video_pane_g4

0x1d73,	// (0x0009c279) main_video_pane_g5_ParamLimits

0x1d73,	// (0x0009c279) main_video_pane_g5

0xa94f,	// (0x000a4e55) main_video_pane_g6_ParamLimits

0xa94f,	// (0x000a4e55) main_video_pane_g6

0x0006,

0xf225,	// (0x000a972b) main_video_pane_g_ParamLimits

0xf225,	// (0x000a972b) main_video_pane_g

0x1d95,	// (0x0009c29b) main_video_pane_t1_ParamLimits

0x1d95,	// (0x0009c29b) main_video_pane_t1

0xa969,	// (0x000a4e6f) cams_zoom_pane_g1

0xa972,	// (0x000a4e78) cams_zoom_pane_g2

0xa97b,	// (0x000a4e81) cams_zoom_pane_g3

0xa984,	// (0x000a4e8a) cams_zoom_pane_g4

0x0003,

0xf234,	// (0x000a973a) cams_zoom_pane_g

0x1ddf,	// (0x0009c2e5) grid_cams_pane

0x1ded,	// (0x0009c2f3) linegrid_cams_pane

0x1dfb,	// (0x0009c301) cell_cams_pane_ParamLimits

0x1dfb,	// (0x0009c301) cell_cams_pane

0xa98d,	// (0x000a4e93) cams_burst_image_pane

0xa995,	// (0x000a4e9b) cell_cams_pane_g1

0x9f69,	// (0x000a446f) grid_highlight_pane_cp03

0xa7c9,	// (0x000a4ccf) mp_bg_pane_g1

0x9f69,	// (0x000a446f) bg_list_pane_cp03

0xc737,	// (0x000a6c3d) bg_mp_pane

0xc73f,	// (0x000a6c45) grid_mp_pane

0xc747,	// (0x000a6c4d) media_player_g1

0xc74f,	// (0x000a6c55) media_player_t1

0xc75d,	// (0x000a6c63) media_player_t2

0xc76b,	// (0x000a6c71) media_player_t3

0xc779,	// (0x000a6c7f) media_player_t4

0xc787,	// (0x000a6c8d) media_player_t5

0xc795,	// (0x000a6c9b) media_player_t6

0xc7a3,	// (0x000a6ca9) media_player_t7

0x0006,

0x02e4,	// (0x0009a7ea) media_player_t

0xc7b1,	// (0x000a6cb7) wait_bar_pane_cp02

0xf52a,	// (0x000a9a30) main_usb_pane_t

0x423b,	// (0x0009e741) cell_mp_pane

0xa7c9,	// (0x000a4ccf) cell_mp_pane_g1

0x9f69,	// (0x000a446f) grid_highlight_pane_cp06

0xa99d,	// (0x000a4ea3) grid_skin_colour_pane

0xa9a5,	// (0x000a4eab) list_highlight_pane_cp03

0x1f1c,	// (0x0009c422) skin_g1

0xa9ad,	// (0x000a4eb3) skin_t1

0xa9bc,	// (0x000a4ec2) skin_t2

0x0001,

0xf269,	// (0x000a976f) skin_t

0x1f26,	// (0x0009c42c) cell_skin_colour_pane_ParamLimits

0x1f26,	// (0x0009c42c) cell_skin_colour_pane

0xa9ca,	// (0x000a4ed0) cell_skin_colour_pane_g1

0x1faa,	// (0x0009c4b0) call_video_g1_ParamLimits

0x1faa,	// (0x0009c4b0) call_video_g1

0x1fba,	// (0x0009c4c0) call_video_g2_ParamLimits

0x1fba,	// (0x0009c4c0) call_video_g2

0x0001,

0xf26e,	// (0x000a9774) call_video_g_ParamLimits

0xf26e,	// (0x000a9774) call_video_g

0x2014,	// (0x0009c51a) call_video_uplink_pane_cp1_ParamLimits

0x2014,	// (0x0009c51a) call_video_uplink_pane_cp1

0xa9dc,	// (0x000a4ee2) call_video_uplink_pane_cp2

0x20e0,	// (0x0009c5e6) video_down_crop_pane_ParamLimits

0x20e0,	// (0x0009c5e6) video_down_crop_pane

0x21d2,	// (0x0009c6d8) video_down_pane_ParamLimits

0x21d2,	// (0x0009c6d8) video_down_pane

0xa9e4,	// (0x000a4eea) video_down_subqcif_pane_ParamLimits

0xa9e4,	// (0x000a4eea) video_down_subqcif_pane

0xa9fc,	// (0x000a4f02) video_down_subqcif_pane_cp_ParamLimits

0xa9fc,	// (0x000a4f02) video_down_subqcif_pane_cp

0xaa22,	// (0x000a4f28) im_reading_pane_ParamLimits

0xaa22,	// (0x000a4f28) im_reading_pane

0x22f4,	// (0x0009c7fa) im_writing_pane_ParamLimits

0x22f4,	// (0x0009c7fa) im_writing_pane

0x2312,	// (0x0009c818) im_reading_pane_t1

0xaa3c,	// (0x000a4f42) list_im_pane

0xaa4d,	// (0x000a4f53) scroll_pane_cp07

0x236d,	// (0x0009c873) im_writing_pane_t1_ParamLimits

0x236d,	// (0x0009c873) im_writing_pane_t1

0xaa66,	// (0x000a4f6c) im_writing_pane_t2_ParamLimits

0xaa66,	// (0x000a4f6c) im_writing_pane_t2

0x0001,

0xf278,	// (0x000a977e) im_writing_pane_t_ParamLimits

0xf278,	// (0x000a977e) im_writing_pane_t

0x9f69,	// (0x000a446f) input_focus_pane_cp04

0x9f69,	// (0x000a446f) input_focus_pane_cp05

0x237f,	// (0x0009c885) list_im_single_pane_ParamLimits

0x237f,	// (0x0009c885) list_im_single_pane

0x23a7,	// (0x0009c8ad) list_single_im_pane_t1

0x41ff,	// (0x0009e705) blid_accuracy_pane

0x4207,	// (0x0009e70d) blid_compass_pane

0x4211,	// (0x0009e717) main_location_t1

0x421f,	// (0x0009e725) main_location_t2

0x422d,	// (0x0009e733) main_location_t3

0x0002,

0xf537,	// (0x000a9a3d) main_location_t

0x9f69,	// (0x000a446f) aid_levels_location

0xa7c9,	// (0x000a4ccf) blid_accuracy_pane_g1

0xa7c9,	// (0x000a4ccf) blid_accuracy_pane_g2

0x0001,

0xf2da,	// (0x000a97e0) blid_accuracy_pane_g

0xaaae,	// (0x000a4fb4) wml_content_pane

0xaaec,	// (0x000a4ff2) wml_button_pane_ParamLimits

0xaaec,	// (0x000a4ff2) wml_button_pane

0x23b6,	// (0x0009c8bc) wml_list_single_large_pane_ParamLimits

0x23b6,	// (0x0009c8bc) wml_list_single_large_pane

0x23e7,	// (0x0009c8ed) wml_list_single_medium_pane_ParamLimits

0x23e7,	// (0x0009c8ed) wml_list_single_medium_pane

0x241f,	// (0x0009c925) wml_list_single_small_pane_ParamLimits

0x241f,	// (0x0009c925) wml_list_single_small_pane

0xab00,	// (0x000a5006) wml_selection_box_pane_ParamLimits

0xab00,	// (0x000a5006) wml_selection_box_pane

0xab13,	// (0x000a5019) wml_list_single_pane_t1

0xab22,	// (0x000a5028) wml_list_single_medium_pane_t1

0xab31,	// (0x000a5037) wml_list_single_large_pane_t1

0xab40,	// (0x000a5046) input_focus_pane_cp02_ParamLimits

0xab40,	// (0x000a5046) input_focus_pane_cp02

0xab53,	// (0x000a5059) wml_selection_box_pane_g1

0xab5c,	// (0x000a5062) wml_selection_box_pane_t1_ParamLimits

0xab5c,	// (0x000a5062) wml_selection_box_pane_t1

0xa690,	// (0x000a4b96) bg_wml_button_pane_ParamLimits

0xa690,	// (0x000a4b96) bg_wml_button_pane

0xab74,	// (0x000a507a) wml_button_pane_g1

0xab7c,	// (0x000a5082) wml_button_pane_t1

0xab74,	// (0x000a507a) wml_button_bg_pane_g1

0xab8c,	// (0x000a5092) wml_button_bg_pane_g2

0xab94,	// (0x000a509a) wml_button_bg_pane_g3

0xab9c,	// (0x000a50a2) wml_button_bg_pane_g4

0xaba4,	// (0x000a50aa) wml_button_bg_pane_g5

0xabac,	// (0x000a50b2) wml_button_bg_pane_g6

0xabb4,	// (0x000a50ba) wml_button_bg_pane_g7

0xabbc,	// (0x000a50c2) wml_button_bg_pane_g8

0xabc4,	// (0x000a50ca) wml_button_bg_pane_g9

0x0008,

0xf27d,	// (0x000a9783) wml_button_bg_pane_g

0x2460,	// (0x0009c966) bg_list_pane_cp02

0xabcc,	// (0x000a50d2) mce_header_pane_ParamLimits

0xabcc,	// (0x000a50d2) mce_header_pane

0xabe2,	// (0x000a50e8) mce_icon_pane

0xabe2,	// (0x000a50e8) mce_image_pane

0xabeb,	// (0x000a50f1) mce_text_pane_ParamLimits

0xabeb,	// (0x000a50f1) mce_text_pane

0x246a,	// (0x0009c970) scroll_pane_cp03

0xaae4,	// (0x000a4fea) scroll_pane_cp04

0xabfe,	// (0x000a5104) scroll_pane_cp05_ParamLimits

0xabfe,	// (0x000a5104) scroll_pane_cp05

0x2474,	// (0x0009c97a) mce_header_field_pane_ParamLimits

0x2474,	// (0x0009c97a) mce_header_field_pane

0x2494,	// (0x0009c99a) mce_header_field_pane_2_ParamLimits

0x2494,	// (0x0009c99a) mce_header_field_pane_2

0x24aa,	// (0x0009c9b0) mce_header_field_pane_3

0x24b2,	// (0x0009c9b8) list_single_mce_message_pane_ParamLimits

0x24b2,	// (0x0009c9b8) list_single_mce_message_pane

0x24e4,	// (0x0009c9ea) list_single_mce_smart_pane_ParamLimits

0x24e4,	// (0x0009c9ea) list_single_mce_smart_pane

0xac0a,	// (0x000a5110) input_focus_pane_cp03

0xac13,	// (0x000a5119) list_header_data_pane

0x2521,	// (0x0009ca27) mce_header_field_pane_t1

0x2531,	// (0x0009ca37) list_single_mce_header_pane_ParamLimits

0x2531,	// (0x0009ca37) list_single_mce_header_pane

0xac1b,	// (0x000a5121) list_single_mce_header_pane_t1

0xac2a,	// (0x000a5130) list_single_mce_message_pane_g1

0xac32,	// (0x000a5138) list_single_mce_message_pane_t1

0x2588,	// (0x0009ca8e) bg_cale_heading_pane_cp01_ParamLimits

0x2588,	// (0x0009ca8e) bg_cale_heading_pane_cp01

0xac40,	// (0x000a5146) bg_cale_pane_cp02_ParamLimits

0xac40,	// (0x000a5146) bg_cale_pane_cp02

0x25cb,	// (0x0009cad1) cale_month_corner_pane

0x25e5,	// (0x0009caeb) cale_month_day_heading_pane_ParamLimits

0x25e5,	// (0x0009caeb) cale_month_day_heading_pane

0x2640,	// (0x0009cb46) cale_month_pane_g1_ParamLimits

0x2640,	// (0x0009cb46) cale_month_pane_g1

0x2678,	// (0x0009cb7e) cale_month_pane_g2_ParamLimits

0x2678,	// (0x0009cb7e) cale_month_pane_g2

0x26a3,	// (0x0009cba9) cale_month_pane_g3_ParamLimits

0x26a3,	// (0x0009cba9) cale_month_pane_g3

0x26f3,	// (0x0009cbf9) cale_month_pane_g4_ParamLimits

0x26f3,	// (0x0009cbf9) cale_month_pane_g4

0x2743,	// (0x0009cc49) cale_month_pane_g5_ParamLimits

0x2743,	// (0x0009cc49) cale_month_pane_g5

0x2793,	// (0x0009cc99) cale_month_pane_g6_ParamLimits

0x2793,	// (0x0009cc99) cale_month_pane_g6

0x27e3,	// (0x0009cce9) cale_month_pane_g7_ParamLimits

0x27e3,	// (0x0009cce9) cale_month_pane_g7

0x284b,	// (0x0009cd51) cale_month_pane_g8_ParamLimits

0x284b,	// (0x0009cd51) cale_month_pane_g8

0x28b3,	// (0x0009cdb9) cale_month_pane_g9_ParamLimits

0x28b3,	// (0x0009cdb9) cale_month_pane_g9

0x2911,	// (0x0009ce17) cale_month_pane_g10_ParamLimits

0x2911,	// (0x0009ce17) cale_month_pane_g10

0x296f,	// (0x0009ce75) cale_month_pane_g11_ParamLimits

0x296f,	// (0x0009ce75) cale_month_pane_g11

0x29c3,	// (0x0009cec9) cale_month_pane_g12_ParamLimits

0x29c3,	// (0x0009cec9) cale_month_pane_g12

0x2a19,	// (0x0009cf1f) cale_month_pane_g13_ParamLimits

0x2a19,	// (0x0009cf1f) cale_month_pane_g13

0x000c,

0xf290,	// (0x000a9796) cale_month_pane_g_ParamLimits

0xf290,	// (0x000a9796) cale_month_pane_g

0x2a6f,	// (0x0009cf75) cale_month_week_pane

0x2a84,	// (0x0009cf8a) grid_cale_month_pane_ParamLimits

0x2a84,	// (0x0009cf8a) grid_cale_month_pane

0x2ad6,	// (0x0009cfdc) cale_month_day_heading_pane_t1

0x2b5c,	// (0x0009d062) cale_month_day_heading_pane_t2

0x2bed,	// (0x0009d0f3) cale_month_day_heading_pane_t3

0x2c7e,	// (0x0009d184) cale_month_day_heading_pane_t4

0x2d0f,	// (0x0009d215) cale_month_day_heading_pane_t5

0x2da0,	// (0x0009d2a6) cale_month_day_heading_pane_t6

0x2e3d,	// (0x0009d343) cale_month_day_heading_pane_t7

0x0006,

0xf2ab,	// (0x000a97b1) cale_month_day_heading_pane_t

0xa8f1,	// (0x000a4df7) bg_cale_side_pane_cp01

0x2ee6,	// (0x0009d3ec) cale_month_week_pane_t1

0x2eff,	// (0x0009d405) cale_month_week_pane_t2

0x2f18,	// (0x0009d41e) cale_month_week_pane_t3

0x2f31,	// (0x0009d437) cale_month_week_pane_t4

0x2f4e,	// (0x0009d454) cale_month_week_pane_t5

0x2f6f,	// (0x0009d475) cale_month_week_pane_t6

0x0005,

0xf2ba,	// (0x000a97c0) cale_month_week_pane_t

0x2f90,	// (0x0009d496) cell_cale_month_pane_ParamLimits

0x2f90,	// (0x0009d496) cell_cale_month_pane

0x30e0,	// (0x0009d5e6) cell_cale_month_pane_g1

0x30ec,	// (0x0009d5f2) cell_cale_month_pane_t1_ParamLimits

0x30ec,	// (0x0009d5f2) cell_cale_month_pane_t1

0xa8ff,	// (0x000a4e05) grid_highlight_pane_cp08

0xa7c9,	// (0x000a4ccf) main_smil_g1

0x310c,	// (0x0009d612) smil_status_pane

0xac7f,	// (0x000a5185) smil_text_pane

0xc657,	// (0x000a6b5d) bg_popup_call3_rect_pane_g8

0xc65f,	// (0x000a6b65) bg_popup_call3_rect_pane_g9

0x0008,

0xf512,	// (0x000a9a18) bg_popup_call3_rect_pane_g

0xc8a6,	// (0x000a6dac) smil_status_volume_pane_g1

0xac89,	// (0x000a518f) smil_status_pane_t1

0x4635,	// (0x0009eb3b) volume_smil_pane

0xaca0,	// (0x000a51a6) list_smil_text_pane

0x311f,	// (0x0009d625) scroll_pane_cp011

0x312a,	// (0x0009d630) smil_text_list_pane_t1_ParamLimits

0x312a,	// (0x0009d630) smil_text_list_pane_t1

0x31be,	// (0x0009d6c4) aid_volume_smil_ParamLimits

0x31be,	// (0x0009d6c4) aid_volume_smil

0xa7c9,	// (0x000a4ccf) smil_volume_pane_g1

0xa7c9,	// (0x000a4ccf) smil_volume_pane_g2

0x0001,

0xf2da,	// (0x000a97e0) smil_volume_pane_g

0x15fd,	// (0x0009bb03) listscroll_cale_day_pane

0xacaa,	// (0x000a51b0) bg_cale_pane

0xacc2,	// (0x000a51c8) list_cale_pane

0xace5,	// (0x000a51eb) scroll_pane_cp09

0xacf6,	// (0x000a51fc) cale_bg_pane_g1

0xacfe,	// (0x000a5204) cale_bg_pane_g2

0xad06,	// (0x000a520c) cale_bg_pane_g3

0xad0e,	// (0x000a5214) cale_bg_pane_g4

0xad16,	// (0x000a521c) cale_bg_pane_g5

0xad1e,	// (0x000a5224) cale_bg_pane_g6

0xad26,	// (0x000a522c) cale_bg_pane_g7

0xad2e,	// (0x000a5234) cale_bg_pane_g8

0xad36,	// (0x000a523c) cale_bg_pane_g9

0x0008,

0xf2df,	// (0x000a97e5) cale_bg_pane_g

0x31e0,	// (0x0009d6e6) list_cale_time_pane_ParamLimits

0x31e0,	// (0x0009d6e6) list_cale_time_pane

0xad46,	// (0x000a524c) list_cale_time_pane_g1_ParamLimits

0xad46,	// (0x000a524c) list_cale_time_pane_g1

0xad52,	// (0x000a5258) list_cale_time_pane_g2_ParamLimits

0xad52,	// (0x000a5258) list_cale_time_pane_g2

0x320c,	// (0x0009d712) list_cale_time_pane_g3_ParamLimits

0x320c,	// (0x0009d712) list_cale_time_pane_g3

0x321a,	// (0x0009d720) list_cale_time_pane_g4_ParamLimits

0x321a,	// (0x0009d720) list_cale_time_pane_g4

0x3228,	// (0x0009d72e) list_cale_time_pane_g5_ParamLimits

0x3228,	// (0x0009d72e) list_cale_time_pane_g5

0x0005,

0xf2f2,	// (0x000a97f8) list_cale_time_pane_g_ParamLimits

0xf2f2,	// (0x000a97f8) list_cale_time_pane_g

0xad6c,	// (0x000a5272) list_cale_time_pane_t1_ParamLimits

0xad6c,	// (0x000a5272) list_cale_time_pane_t1

0xad94,	// (0x000a529a) list_cale_time_pane_t2_ParamLimits

0xad94,	// (0x000a529a) list_cale_time_pane_t2

0x35b5,	// (0x0009dabb) aid_blid_cardinal_pane

0x35f7,	// (0x0009dafd) compass_pane_t4

0xadbc,	// (0x000a52c2) list_cale_time_pane_t4_ParamLimits

0xadbc,	// (0x000a52c2) list_cale_time_pane_t4

0x3605,	// (0x0009db0b) compass_pane_t5

0x3615,	// (0x0009db1b) compass_pane_t6

0x3623,	// (0x0009db29) compass_pane_t7

0xb26d,	// (0x000a5773) navi_pane_cc_t1

0xb4b7,	// (0x000a59bd) aid_phob_thumbnail_center_pane

0x3cf8,	// (0x0009e1fe) main_postcard_pane_g4_ParamLimits

0x0002,

0xf2ff,	// (0x000a9805) list_cale_time_pane_t_ParamLimits

0xf2ff,	// (0x000a9805) list_cale_time_pane_t

0x9bc0,	// (0x000a40c6) bg_popup_window_pane_cp02_ParamLimits

0x9bc0,	// (0x000a40c6) bg_popup_window_pane_cp02

0xade4,	// (0x000a52ea) heading_pane_cp01_ParamLimits

0xade4,	// (0x000a52ea) heading_pane_cp01

0xadf0,	// (0x000a52f6) loc_req_pane_ParamLimits

0xadf0,	// (0x000a52f6) loc_req_pane

0xae00,	// (0x000a5306) loc_type_pane_ParamLimits

0xae00,	// (0x000a5306) loc_type_pane

0xae12,	// (0x000a5318) loc_type_pane_t1_ParamLimits

0xae12,	// (0x000a5318) loc_type_pane_t1

0xae24,	// (0x000a532a) loc_type_pane_t2_ParamLimits

0xae24,	// (0x000a532a) loc_type_pane_t2

0xae36,	// (0x000a533c) loc_type_pane_t3_ParamLimits

0xae36,	// (0x000a533c) loc_type_pane_t3

0x0002,

0xf306,	// (0x000a980c) loc_type_pane_t_ParamLimits

0xf306,	// (0x000a980c) loc_type_pane_t

0xae48,	// (0x000a534e) list_loc_req_pane

0xae52,	// (0x000a5358) scroll_pane_cp012

0x3236,	// (0x0009d73c) list_single_loc_request_popup_menu_pane_ParamLimits

0x3236,	// (0x0009d73c) list_single_loc_request_popup_menu_pane

0xae5d,	// (0x000a5363) list_single_loc_request_popup_menu_pane_g1_ParamLimits

0xae5d,	// (0x000a5363) list_single_loc_request_popup_menu_pane_g1

0xae69,	// (0x000a536f) list_single_loc_request_popup_menu_pane_g2_ParamLimits

0xae69,	// (0x000a536f) list_single_loc_request_popup_menu_pane_g2

0x0001,

0xf30d,	// (0x000a9813) list_single_loc_request_popup_menu_pane_g_ParamLimits

0xf30d,	// (0x000a9813) list_single_loc_request_popup_menu_pane_g

0xae75,	// (0x000a537b) list_single_loc_request_popup_menu_pane_t1_ParamLimits

0xae75,	// (0x000a537b) list_single_loc_request_popup_menu_pane_t1

0x3250,	// (0x0009d756) bg_popup_window_pane_cp03_ParamLimits

0x3250,	// (0x0009d756) bg_popup_window_pane_cp03

0x325e,	// (0x0009d764) heading_loc_req_pane_ParamLimits

0x325e,	// (0x0009d764) heading_loc_req_pane

0x326a,	// (0x0009d770) popup_dyc_status_message_window_g1_ParamLimits

0x326a,	// (0x0009d770) popup_dyc_status_message_window_g1

0x3276,	// (0x0009d77c) popup_dyc_status_message_window_t1_ParamLimits

0x3276,	// (0x0009d77c) popup_dyc_status_message_window_t1

0x3288,	// (0x0009d78e) popup_dyc_status_message_window_t2_ParamLimits

0x3288,	// (0x0009d78e) popup_dyc_status_message_window_t2

0x329a,	// (0x0009d7a0) popup_dyc_status_message_window_t3_ParamLimits

0x329a,	// (0x0009d7a0) popup_dyc_status_message_window_t3

0x0002,

0xf312,	// (0x000a9818) popup_dyc_status_message_window_t_ParamLimits

0xf312,	// (0x000a9818) popup_dyc_status_message_window_t

0x9f69,	// (0x000a446f) bg_heading_pane_cp01

0xae8b,	// (0x000a5391) heading_loc_req_pane_g1

0xae93,	// (0x000a5399) heading_loc_req_pane_g2

0xae9b,	// (0x000a53a1) heading_loc_req_pane_g3

0x0002,

0xf319,	// (0x000a981f) heading_loc_req_pane_g

0xaea3,	// (0x000a53a9) heading_loc_req_pane_t1

0xaeb2,	// (0x000a53b8) bg_popup_sub_pane_cp01_ParamLimits

0xaeb2,	// (0x000a53b8) bg_popup_sub_pane_cp01

0xaec0,	// (0x000a53c6) popup_cale_events_window_g1_ParamLimits

0xaec0,	// (0x000a53c6) popup_cale_events_window_g1

0xaee0,	// (0x000a53e6) popup_cale_events_window_g2_ParamLimits

0xaee0,	// (0x000a53e6) popup_cale_events_window_g2

0x0001,

0xf34d,	// (0x000a9853) popup_cale_events_window_g_ParamLimits

0xf34d,	// (0x000a9853) popup_cale_events_window_g

0xaf00,	// (0x000a5406) popup_cale_events_window_t1_ParamLimits

0xaf00,	// (0x000a5406) popup_cale_events_window_t1

0xaf12,	// (0x000a5418) popup_cale_events_window_t2_ParamLimits

0xaf12,	// (0x000a5418) popup_cale_events_window_t2

0xaf50,	// (0x000a5456) popup_cale_events_window_t3_ParamLimits

0xaf50,	// (0x000a5456) popup_cale_events_window_t3

0xaf8a,	// (0x000a5490) popup_cale_events_window_t4_ParamLimits

0xaf8a,	// (0x000a5490) popup_cale_events_window_t4

0x0003,

0xf352,	// (0x000a9858) popup_cale_events_window_t_ParamLimits

0xf352,	// (0x000a9858) popup_cale_events_window_t

0x3395,	// (0x0009d89b) call_type_pane

0xb337,	// (0x000a583d) popup_call_status_window_g1

0x33a1,	// (0x0009d8a7) popup_call_status_window_g2

0x33ad,	// (0x0009d8b3) popup_call_status_window_g3

0x0002,

0xf35b,	// (0x000a9861) popup_call_status_window_g

0xafc0,	// (0x000a54c6) call_type_pane_g1

0xafc9,	// (0x000a54cf) call_type_pane_g2

0x0001,

0xf362,	// (0x000a9868) call_type_pane_g

0x9f69,	// (0x000a446f) bg_popup_sub_pane_cp02

0xafd2,	// (0x000a54d8) listscroll_popup_wml_pane

0xafda,	// (0x000a54e0) list_wml_pane

0xafe4,	// (0x000a54ea) scroll_pane_cp013

0xafef,	// (0x000a54f5) list_single_graphic_popup_wml_pane_ParamLimits

0xafef,	// (0x000a54f5) list_single_graphic_popup_wml_pane

0xa7c9,	// (0x000a4ccf) list_single_graphic_popup_wml_pane_g1

0xb003,	// (0x000a5509) list_single_graphic_popup_wml_pane_g2

0x0001,

0xf367,	// (0x000a986d) list_single_graphic_popup_wml_pane_g

0xb00b,	// (0x000a5511) list_single_graphic_popup_wml_pane_t1

0xb021,	// (0x000a5527) aid_call_pane

0xa688,	// (0x000a4b8e) popup_clock_analogue_window_g1

0xa688,	// (0x000a4b8e) popup_clock_analogue_window_g2

0x33b9,	// (0x0009d8bf) popup_clock_analogue_window_g3

0x33b9,	// (0x0009d8bf) popup_clock_analogue_window_g4

0xa7c9,	// (0x000a4ccf) popup_clock_analogue_window_g5

0x0004,

0xf36c,	// (0x000a9872) popup_clock_analogue_window_g

0x33c1,	// (0x0009d8c7) popup_clock_analogue_window_t1

0x33cf,	// (0x0009d8d5) clock_digital_number_pane_ParamLimits

0x33cf,	// (0x0009d8d5) clock_digital_number_pane

0x33db,	// (0x0009d8e1) clock_digital_number_pane_cp02_ParamLimits

0x33db,	// (0x0009d8e1) clock_digital_number_pane_cp02

0x33e7,	// (0x0009d8ed) clock_digital_number_pane_cp03_ParamLimits

0x33e7,	// (0x0009d8ed) clock_digital_number_pane_cp03

0x33f3,	// (0x0009d8f9) clock_digital_number_pane_cp04_ParamLimits

0x33f3,	// (0x0009d8f9) clock_digital_number_pane_cp04

0x3403,	// (0x0009d909) clock_digital_separator_pane_ParamLimits

0x3403,	// (0x0009d909) clock_digital_separator_pane

0x340f,	// (0x0009d915) popup_clock_digital_window_t1

0xa7c9,	// (0x000a4ccf) clock_digital_number_pane_g1

0xa7c9,	// (0x000a4ccf) clock_digital_number_pane_g2

0x0001,

0xf2da,	// (0x000a97e0) clock_digital_number_pane_g

0xa7c9,	// (0x000a4ccf) clock_digital_separator_pane_g1

0xa7c9,	// (0x000a4ccf) clock_digital_separator_pane_g2

0x0001,

0xf2da,	// (0x000a97e0) clock_digital_separator_pane_g

0x9f69,	// (0x000a446f) bg_popup_window_pane_cp04

0xb029,	// (0x000a552f) heading_pane_cp03

0xb031,	// (0x000a5537) listscroll_popup_gms_pane

0xb039,	// (0x000a553f) grid_large_graphic_popup_pane

0xb043,	// (0x000a5549) listscroll_popup_gms_pane_g1

0xb04b,	// (0x000a5551) listscroll_popup_gms_pane_g2

0x0001,

0xf377,	// (0x000a987d) listscroll_popup_gms_pane_g

0xaae4,	// (0x000a4fea) scroll_pane_cp014

0xb053,	// (0x000a5559) cell_large_graphic_popup_pane_ParamLimits

0xb053,	// (0x000a5559) cell_large_graphic_popup_pane

0xb06b,	// (0x000a5571) cell_large_graphic_popup_pane_g1_ParamLimits

0xb06b,	// (0x000a5571) cell_large_graphic_popup_pane_g1

0xb077,	// (0x000a557d) cell_large_graphic_popup_pane_g2_ParamLimits

0xb077,	// (0x000a557d) cell_large_graphic_popup_pane_g2

0xb083,	// (0x000a5589) cell_large_graphic_popup_pane_g3_ParamLimits

0xb083,	// (0x000a5589) cell_large_graphic_popup_pane_g3

0xb090,	// (0x000a5596) cell_large_graphic_popup_pane_g4_ParamLimits

0xb090,	// (0x000a5596) cell_large_graphic_popup_pane_g4

0x0003,

0xf37c,	// (0x000a9882) cell_large_graphic_popup_pane_g_ParamLimits

0xf37c,	// (0x000a9882) cell_large_graphic_popup_pane_g

0xb0a0,	// (0x000a55a6) grid_highlight_pane_cp010

0xa7c9,	// (0x000a4ccf) bg_popup_call_pane_g1

0xb0aa,	// (0x000a55b0) list_single_graphic_popup_conf_pane_ParamLimits

0xb0aa,	// (0x000a55b0) list_single_graphic_popup_conf_pane

0xb0bd,	// (0x000a55c3) list_highlight_pane_cp01

0xb0c6,	// (0x000a55cc) list_single_graphic_popup_conf_pane_g1

0xb0ce,	// (0x000a55d4) list_single_graphic_popup_conf_pane_g2

0x0001,

0xf385,	// (0x000a988b) list_single_graphic_popup_conf_pane_g

0xb0d6,	// (0x000a55dc) list_single_graphic_popup_conf_pane_t1

0xb0e4,	// (0x000a55ea) linegrid_cams_pane_g1

0x342c,	// (0x0009d932) linegrid_cams_pane_g2

0xa881,	// (0x000a4d87) linegrid_cams_pane_g3

0xb0ed,	// (0x000a55f3) linegrid_cams_pane_g4

0x3435,	// (0x0009d93b) linegrid_cams_pane_g5

0x343e,	// (0x0009d944) linegrid_cams_pane_g6

0xa932,	// (0x000a4e38) linegrid_cams_pane_g7

0x0006,

0xf38a,	// (0x000a9890) linegrid_cams_pane_g

0xb0f6,	// (0x000a55fc) popup_clock_analogue_window

0xb0f6,	// (0x000a55fc) popup_clock_digital_window

0x9f69,	// (0x000a446f) popup_phob_thumbnail_window

0xa7c9,	// (0x000a4ccf) call_video_uplink_pane_g1

0xb0ff,	// (0x000a5605) call_video_uplink_pane_g2

0x0001,

0xf399,	// (0x000a989f) call_video_uplink_pane_g

0xa8ff,	// (0x000a4e05) video_uplink_pane

0xb107,	// (0x000a560d) mce_image_pane_g1

0x3447,	// (0x0009d94d) mce_image_pane_g2

0x344f,	// (0x0009d955) mce_image_pane_g3

0x3457,	// (0x0009d95d) mce_image_pane_g4

0x345f,	// (0x0009d965) mce_image_pane_g5

0x0004,

0xf39e,	// (0x000a98a4) mce_image_pane_g

0xb111,	// (0x000a5617) control_top_pane_stacon_cp01_ParamLimits

0xb111,	// (0x000a5617) control_top_pane_stacon_cp01

0xb125,	// (0x000a562b) uni_indicator_pane_stacon_cp01_ParamLimits

0xb125,	// (0x000a562b) uni_indicator_pane_stacon_cp01

0xb136,	// (0x000a563c) bg_popup_sub_pane_cp03

0x3467,	// (0x0009d96d) chi_dic_find_pane

0x346f,	// (0x0009d975) listscroll_chi_dic_pane

0x3478,	// (0x0009d97e) main_pane_chidic_g1

0xb140,	// (0x000a5646) chi_dic_find_pane_t1

0xb14e,	// (0x000a5654) find_chidic_pane

0xb157,	// (0x000a565d) chi_dic_list_pane_ParamLimits

0xb157,	// (0x000a565d) chi_dic_list_pane

0xb168,	// (0x000a566e) scroll_pane_cp020

0xb170,	// (0x000a5676) find_chidic_pane_t1

0x9f69,	// (0x000a446f) input_focus_pane_cp06

0x348b,	// (0x0009d991) list_chi_dic_pane_ParamLimits

0x348b,	// (0x0009d991) list_chi_dic_pane

0x34a8,	// (0x0009d9ae) list_chi_dic_pane_t1_ParamLimits

0x34a8,	// (0x0009d9ae) list_chi_dic_pane_t1

0x9f69,	// (0x000a446f) list_highlight_pane_cp020

0xb17f,	// (0x000a5685) bg_cale_heading_pane_g1

0x34bb,	// (0x0009d9c1) bg_cale_heading_pane_g2

0x34c3,	// (0x0009d9c9) bg_cale_heading_pane_g3

0x34cb,	// (0x0009d9d1) bg_cale_heading_pane_g4

0x34d5,	// (0x0009d9db) bg_cale_heading_pane_g5

0x34df,	// (0x0009d9e5) bg_cale_heading_pane_g6

0x34e7,	// (0x0009d9ed) bg_cale_heading_pane_g7

0x34ef,	// (0x0009d9f5) bg_cale_heading_pane_g8

0x34f9,	// (0x0009d9ff) bg_cale_heading_pane_g9

0x0008,

0xf3a9,	// (0x000a98af) bg_cale_heading_pane_g

0xb17f,	// (0x000a5685) bg_cale_side_pane_g1

0x3503,	// (0x0009da09) bg_cale_side_pane_g2

0x350d,	// (0x0009da13) bg_cale_side_pane_g3

0x3517,	// (0x0009da1d) bg_cale_side_pane_g4

0x3521,	// (0x0009da27) bg_cale_side_pane_g5

0x352b,	// (0x0009da31) bg_cale_side_pane_g6

0x3535,	// (0x0009da3b) bg_cale_side_pane_g7

0x353f,	// (0x0009da45) bg_cale_side_pane_g8

0x3547,	// (0x0009da4d) bg_cale_side_pane_g9

0x0008,

0xf3bc,	// (0x000a98c2) bg_cale_side_pane_g

0x354f,	// (0x0009da55) popup_call_status_window_ParamLimits

0x354f,	// (0x0009da55) popup_call_status_window

0xb187,	// (0x000a568d) stacon_top_pane

0xb18f,	// (0x000a5695) status_pane_ParamLimits

0xb18f,	// (0x000a5695) status_pane

0xb1a4,	// (0x000a56aa) status_small_pane

0xb1ac,	// (0x000a56b2) control_pane

0x9f69,	// (0x000a446f) stacon_bottom_pane

0xb1b4,	// (0x000a56ba) list_single_mce_smart_pane_t1_ParamLimits

0xb1b4,	// (0x000a56ba) list_single_mce_smart_pane_t1

0xb1c7,	// (0x000a56cd) list_single_mce_smart_pane_t2_ParamLimits

0xb1c7,	// (0x000a56cd) list_single_mce_smart_pane_t2

0x0001,

0xf3cf,	// (0x000a98d5) list_single_mce_smart_pane_t_ParamLimits

0xf3cf,	// (0x000a98d5) list_single_mce_smart_pane_t

0x355b,	// (0x0009da61) compass_pane

0x3567,	// (0x0009da6d) main_location2_pane_t1

0x357b,	// (0x0009da81) main_location2_pane_t2

0x358f,	// (0x0009da95) main_location2_pane_t3

0x0003,

0xf3d4,	// (0x000a98da) main_location2_pane_t

0xb1e6,	// (0x000a56ec) compass_pane_g1_ParamLimits

0xb1e6,	// (0x000a56ec) compass_pane_g1

0x35d9,	// (0x0009dadf) compass_pane_t1

0x35e8,	// (0x0009daee) compass_pane_t2

0x0005,

0xf3dd,	// (0x000a98e3) compass_pane_t

0x3633,	// (0x0009db39) text_secondary_cp61

0xb264,	// (0x000a576a) navi_pane_cams_g5

0xb345,	// (0x000a584b) navi_pane_im_t1

0xb353,	// (0x000a5859) navi_pane_mp_g1_ParamLimits

0xb353,	// (0x000a5859) navi_pane_mp_g1

0xb367,	// (0x000a586d) navi_pane_mp_g2_ParamLimits

0xb367,	// (0x000a586d) navi_pane_mp_g2

0xb373,	// (0x000a5879) navi_pane_mp_g3_ParamLimits

0xb373,	// (0x000a5879) navi_pane_mp_g3

0x0002,

0xf3f1,	// (0x000a98f7) navi_pane_mp_g_ParamLimits

0xf3f1,	// (0x000a98f7) navi_pane_mp_g

0xb37f,	// (0x000a5885) navi_pane_mp_t1

0xb38d,	// (0x000a5893) navi_pane_mp_t2

0x0002,

0xf3f8,	// (0x000a98fe) navi_pane_mp_t

0xb3f8,	// (0x000a58fe) navi_pane_vt_g1

0xb37f,	// (0x000a5885) navi_pane_vt_t1

0xb400,	// (0x000a5906) navi_slider_pane

0xb410,	// (0x000a5916) zooming_pane

0xb418,	// (0x000a591e) navi_slider_pane_g1

0x366e,	// (0x0009db74) navi_slider_pane_g2

0x0006,

0xf3ff,	// (0x000a9905) navi_slider_pane_g

0xb43c,	// (0x000a5942) aid_levels_zoom

0xb444,	// (0x000a594a) zooming_pane_g1

0xb44c,	// (0x000a5952) zooming_pane_g2

0xb44c,	// (0x000a5952) zooming_pane_g3

0x0002,

0xf40e,	// (0x000a9914) zooming_pane_g

0xb454,	// (0x000a595a) level_10_zoom

0xb45d,	// (0x000a5963) level_11_zoom

0xb466,	// (0x000a596c) level_1_zoom

0xb46f,	// (0x000a5975) level_2_zoom

0xb478,	// (0x000a597e) level_3_zoom

0xb481,	// (0x000a5987) level_4_zoom

0xb48a,	// (0x000a5990) level_5_zoom

0xb493,	// (0x000a5999) level_6_zoom

0xb49c,	// (0x000a59a2) level_7_zoom

0xb4a5,	// (0x000a59ab) level_8_zoom

0xb4ae,	// (0x000a59b4) level_9_zoom

0xb4bf,	// (0x000a59c5) popup_phob_thumbnail_window_g1

0xb4c7,	// (0x000a59cd) popup_phob_thumbnail_window_g2

0x0001,

0xf415,	// (0x000a991b) popup_phob_thumbnail_window_g

0xc7b9,	// (0x000a6cbf) level_1_location

0xc7c1,	// (0x000a6cc7) level_2_location

0xc7c9,	// (0x000a6ccf) level_3_location

0xc7d1,	// (0x000a6cd7) level_4_location

0xb410,	// (0x000a5916) level_5_location

0x3680,	// (0x0009db86) mce_icon_pane_g1

0x3688,	// (0x0009db8e) mce_icon_pane_g2

0x0001,

0xf41a,	// (0x000a9920) mce_icon_pane_g

0x3690,	// (0x0009db96) main_mup_pane_g1_ParamLimits

0x3690,	// (0x0009db96) main_mup_pane_g1

0x36a8,	// (0x0009dbae) main_mup_pane_g2_ParamLimits

0x36a8,	// (0x0009dbae) main_mup_pane_g2

0x36c4,	// (0x0009dbca) main_mup_pane_g3_ParamLimits

0x36c4,	// (0x0009dbca) main_mup_pane_g3

0x36e0,	// (0x0009dbe6) main_mup_pane_g4_ParamLimits

0x36e0,	// (0x0009dbe6) main_mup_pane_g4

0x36fc,	// (0x0009dc02) main_mup_pane_g5_ParamLimits

0x36fc,	// (0x0009dc02) main_mup_pane_g5

0x371d,	// (0x0009dc23) main_mup_pane_g6_ParamLimits

0x371d,	// (0x0009dc23) main_mup_pane_g6

0x3739,	// (0x0009dc3f) main_mup_pane_g7_ParamLimits

0x3739,	// (0x0009dc3f) main_mup_pane_g7

0x3755,	// (0x0009dc5b) main_mup_pane_g8_ParamLimits

0x3755,	// (0x0009dc5b) main_mup_pane_g8

0x3771,	// (0x0009dc77) main_mup_pane_g9_ParamLimits

0x3771,	// (0x0009dc77) main_mup_pane_g9

0x3790,	// (0x0009dc96) main_mup_pane_g10_ParamLimits

0x3790,	// (0x0009dc96) main_mup_pane_g10

0x37af,	// (0x0009dcb5) main_mup_pane_g11_ParamLimits

0x37af,	// (0x0009dcb5) main_mup_pane_g11

0x37c7,	// (0x0009dccd) main_mup_pane_g12_ParamLimits

0x37c7,	// (0x0009dccd) main_mup_pane_g12

0x37d5,	// (0x0009dcdb) main_mup_pane_g13_ParamLimits

0x37d5,	// (0x0009dcdb) main_mup_pane_g13

0x000c,

0xf41f,	// (0x000a9925) main_mup_pane_g_ParamLimits

0xf41f,	// (0x000a9925) main_mup_pane_g

0x37eb,	// (0x0009dcf1) main_mup_pane_t1_ParamLimits

0x37eb,	// (0x0009dcf1) main_mup_pane_t1

0x3808,	// (0x0009dd0e) main_mup_pane_t2_ParamLimits

0x3808,	// (0x0009dd0e) main_mup_pane_t2

0x3822,	// (0x0009dd28) main_mup_pane_t3_ParamLimits

0x3822,	// (0x0009dd28) main_mup_pane_t3

0x383c,	// (0x0009dd42) main_mup_pane_t4_ParamLimits

0x383c,	// (0x0009dd42) main_mup_pane_t4

0x384e,	// (0x0009dd54) main_mup_pane_t5_ParamLimits

0x384e,	// (0x0009dd54) main_mup_pane_t5

0x3860,	// (0x0009dd66) main_mup_pane_t6_ParamLimits

0x3860,	// (0x0009dd66) main_mup_pane_t6

0x0005,

0xf43a,	// (0x000a9940) main_mup_pane_t_ParamLimits

0xf43a,	// (0x000a9940) main_mup_pane_t

0x3876,	// (0x0009dd7c) mup_progress_pane_ParamLimits

0x3876,	// (0x0009dd7c) mup_progress_pane

0x3882,	// (0x0009dd88) mup_visualizer_pane_ParamLimits

0x3882,	// (0x0009dd88) mup_visualizer_pane

0x38c0,	// (0x0009ddc6) mup_volume_pane_ParamLimits

0x38c0,	// (0x0009ddc6) mup_volume_pane

0xb337,	// (0x000a583d) mup_visualizer_pane_g1_ParamLimits

0xb337,	// (0x000a583d) mup_visualizer_pane_g1

0xb337,	// (0x000a583d) mup_visualizer_pane_g2_ParamLimits

0xb337,	// (0x000a583d) mup_visualizer_pane_g2

0xb1e6,	// (0x000a56ec) mup_visualizer_pane_g3_ParamLimits

0xb1e6,	// (0x000a56ec) mup_visualizer_pane_g3

0x0002,

0xf447,	// (0x000a994d) mup_visualizer_pane_g_ParamLimits

0xf447,	// (0x000a994d) mup_visualizer_pane_g

0xa7c9,	// (0x000a4ccf) mup_volume_pane_g1

0xb4d7,	// (0x000a59dd) mup_volume_pane_g2

0x0001,

0xf44e,	// (0x000a9954) mup_volume_pane_g

0xa7c9,	// (0x000a4ccf) mup_progress_pane_g1

0xb4e0,	// (0x000a59e6) mup_progress_pane_g2

0xb4e9,	// (0x000a59ef) mup_progress_pane_g3

0x0002,

0xf453,	// (0x000a9959) mup_progress_pane_g

0x9f69,	// (0x000a446f) bg_popup_window_pane_cp05

0xb4f2,	// (0x000a59f8) heading_pane_cp02_ParamLimits

0xb4f2,	// (0x000a59f8) heading_pane_cp02

0xb50c,	// (0x000a5a12) list_popup_blid_pane

0xb514,	// (0x000a5a1a) list_blid_sat_info_pane_ParamLimits

0xb514,	// (0x000a5a1a) list_blid_sat_info_pane

0xb527,	// (0x000a5a2d) list_blid_sat_info_pane_g1

0xb52f,	// (0x000a5a35) list_blid_sat_info_pane_t1

0x39cb,	// (0x0009ded1) mup_equalizer_pane_ParamLimits

0x39cb,	// (0x0009ded1) mup_equalizer_pane

0x39ec,	// (0x0009def2) mup_equalizer_pane_cp1_ParamLimits

0x39ec,	// (0x0009def2) mup_equalizer_pane_cp1

0x3a0d,	// (0x0009df13) mup_equalizer_pane_cp2_ParamLimits

0x3a0d,	// (0x0009df13) mup_equalizer_pane_cp2

0x3a2e,	// (0x0009df34) mup_equalizer_pane_cp3_ParamLimits

0x3a2e,	// (0x0009df34) mup_equalizer_pane_cp3

0x3a4f,	// (0x0009df55) mup_equalizer_pane_cp4_ParamLimits

0x3a4f,	// (0x0009df55) mup_equalizer_pane_cp4

0x3a70,	// (0x0009df76) mup_equalizer_pane_cp5

0x3a86,	// (0x0009df8c) mup_equalizer_pane_cp6

0x3a9e,	// (0x0009dfa4) mup_equalizer_pane_cp7

0xc6d7,	// (0x000a6bdd) bg_popup_call_poc_act_pane_g9

0xc6df,	// (0x000a6be5) bg_popup_call_poc_act_pane_g10

0xc6e7,	// (0x000a6bed) bg_popup_call_poc_act_pane_g11

0x000a,

0xa690,	// (0x000a4b96) mup_scale_pane

0xa7c9,	// (0x000a4ccf) mup_scale_pane_g1

0xb53d,	// (0x000a5a43) mup_scale_pane_g2

0x0006,

0xf46f,	// (0x000a9975) mup_scale_pane_g

0xb561,	// (0x000a5a67) msg_data_pane

0xb569,	// (0x000a5a6f) scroll_pane_cp017

0x3ac8,	// (0x0009dfce) bg_list_pane_cp04_ParamLimits

0x3ac8,	// (0x0009dfce) bg_list_pane_cp04

0xb571,	// (0x000a5a77) msg_data_pane_g1

0x3aec,	// (0x0009dff2) msg_data_pane_g2

0x344f,	// (0x0009d955) msg_data_pane_g3

0x3af4,	// (0x0009dffa) msg_data_pane_g4

0x3afc,	// (0x0009e002) msg_data_pane_g5

0x3b04,	// (0x0009e00a) msg_data_pane_g6

0x3b0c,	// (0x0009e012) msg_data_pane_g7

0x0006,

0xf47e,	// (0x000a9984) msg_data_pane_g

0x3b14,	// (0x0009e01a) msg_text_pane_ParamLimits

0x3b14,	// (0x0009e01a) msg_text_pane

0x3b56,	// (0x0009e05c) qrid_highlight_pane_cp011_ParamLimits

0x3b56,	// (0x0009e05c) qrid_highlight_pane_cp011

0x9f69,	// (0x000a446f) msg_body_pane

0x9f69,	// (0x000a446f) msg_header_pane

0xb579,	// (0x000a5a7f) input_focus_pane_cp07

0x3b89,	// (0x0009e08f) msg_header_pane_t1_ParamLimits

0x3b89,	// (0x0009e08f) msg_header_pane_t1

0x3b9b,	// (0x0009e0a1) msg_header_pane_t2_ParamLimits

0x3b9b,	// (0x0009e0a1) msg_header_pane_t2

0x0001,

0xf492,	// (0x000a9998) msg_header_pane_t_ParamLimits

0xf492,	// (0x000a9998) msg_header_pane_t

0xb58e,	// (0x000a5a94) msg_body_pane_g1

0x3bad,	// (0x0009e0b3) msg_body_pane_t1_ParamLimits

0x3bad,	// (0x0009e0b3) msg_body_pane_t1

0x3bde,	// (0x0009e0e4) msg_body_pane_t2_ParamLimits

0x3bde,	// (0x0009e0e4) msg_body_pane_t2

0x3bf0,	// (0x0009e0f6) msg_body_pane_t3_ParamLimits

0x3bf0,	// (0x0009e0f6) msg_body_pane_t3

0x0002,

0xf497,	// (0x000a999d) msg_body_pane_t_ParamLimits

0xf497,	// (0x000a999d) msg_body_pane_t

0x3c54,	// (0x0009e15a) main_viewer_pane_g1_ParamLimits

0x3c54,	// (0x0009e15a) main_viewer_pane_g1

0x3c60,	// (0x0009e166) main_viewer_pane_g2_ParamLimits

0x3c60,	// (0x0009e166) main_viewer_pane_g2

0x3c6c,	// (0x0009e172) main_viewer_pane_g3_ParamLimits

0x3c6c,	// (0x0009e172) main_viewer_pane_g3

0x3c7d,	// (0x0009e183) main_viewer_pane_g4_ParamLimits

0x3c7d,	// (0x0009e183) main_viewer_pane_g4

0x3c8e,	// (0x0009e194) main_viewer_pane_g5_ParamLimits

0x3c8e,	// (0x0009e194) main_viewer_pane_g5

0x3c8e,	// (0x0009e194) main_viewer_pane_g7_ParamLimits

0x3c8e,	// (0x0009e194) main_viewer_pane_g7

0xae5d,	// (0x000a5363) main_viewer_pane_g8_ParamLimits

0xae5d,	// (0x000a5363) main_viewer_pane_g8

0x0007,

0xf4a7,	// (0x000a99ad) main_viewer_pane_g_ParamLimits

0xf4a7,	// (0x000a99ad) main_viewer_pane_g

0xb596,	// (0x000a5a9c) viewer_content_pane_ParamLimits

0xb596,	// (0x000a5a9c) viewer_content_pane

0x3ccc,	// (0x0009e1d2) main_postcard_pane_g1_ParamLimits

0x3ccc,	// (0x0009e1d2) main_postcard_pane_g1

0x3cda,	// (0x0009e1e0) main_postcard_pane_g2_ParamLimits

0x3cda,	// (0x0009e1e0) main_postcard_pane_g2

0x3ce8,	// (0x0009e1ee) main_postcard_pane_g3_ParamLimits

0x3ce8,	// (0x0009e1ee) main_postcard_pane_g3

0x0005,

0xf4b8,	// (0x000a99be) main_postcard_pane_g_ParamLimits

0xf4b8,	// (0x000a99be) main_postcard_pane_g

0x3cf8,	// (0x0009e1fe) main_postcard_pane_g4

0xc8b9,	// (0x000a6dbf) smil_status_volume_pane_g2

0x3d24,	// (0x0009e22a) postcard_pane_ParamLimits

0x3d24,	// (0x0009e22a) postcard_pane

0xb337,	// (0x000a583d) postcard_pane_g1_ParamLimits

0xb337,	// (0x000a583d) postcard_pane_g1

0x3d56,	// (0x0009e25c) postcard_pane_g2_ParamLimits

0x3d56,	// (0x0009e25c) postcard_pane_g2

0x3d62,	// (0x0009e268) postcard_pane_g3_ParamLimits

0x3d62,	// (0x0009e268) postcard_pane_g3

0xb5a4,	// (0x000a5aaa) postcard_pane_g4_ParamLimits

0xb5a4,	// (0x000a5aaa) postcard_pane_g4

0x3d6e,	// (0x0009e274) postcard_pane_g5_ParamLimits

0x3d6e,	// (0x0009e274) postcard_pane_g5

0x3d7a,	// (0x0009e280) postcard_pane_g6_ParamLimits

0x3d7a,	// (0x0009e280) postcard_pane_g6

0xb5b2,	// (0x000a5ab8) postcard_pane_g7_ParamLimits

0xb5b2,	// (0x000a5ab8) postcard_pane_g7

0x0006,

0xf4c5,	// (0x000a99cb) postcard_pane_g_ParamLimits

0xf4c5,	// (0x000a99cb) postcard_pane_g

0x3d86,	// (0x0009e28c) main_mp2_pane_g1_ParamLimits

0x3d86,	// (0x0009e28c) main_mp2_pane_g1

0x3d92,	// (0x0009e298) main_mp2_pane_g2_ParamLimits

0x3d92,	// (0x0009e298) main_mp2_pane_g2

0x3d9e,	// (0x0009e2a4) main_mp2_pane_g3_ParamLimits

0x3d9e,	// (0x0009e2a4) main_mp2_pane_g3

0x0002,

0xf4d4,	// (0x000a99da) main_mp2_pane_g_ParamLimits

0xf4d4,	// (0x000a99da) main_mp2_pane_g

0x3daa,	// (0x0009e2b0) main_mp2_pane_t1_ParamLimits

0x3daa,	// (0x0009e2b0) main_mp2_pane_t1

0x3dc1,	// (0x0009e2c7) main_mp2_pane_t2_ParamLimits

0x3dc1,	// (0x0009e2c7) main_mp2_pane_t2

0x3dd3,	// (0x0009e2d9) main_mp2_pane_t3_ParamLimits

0x3dd3,	// (0x0009e2d9) main_mp2_pane_t3

0x0002,

0xf4db,	// (0x000a99e1) main_mp2_pane_t_ParamLimits

0xf4db,	// (0x000a99e1) main_mp2_pane_t

0xb5c0,	// (0x000a5ac6) pec_content_pane_ParamLimits

0xb5c0,	// (0x000a5ac6) pec_content_pane

0xaae4,	// (0x000a4fea) scroll_pane_cp015

0xb5d2,	// (0x000a5ad8) pec_attribute_pane_ParamLimits

0xb5d2,	// (0x000a5ad8) pec_attribute_pane

0x3de5,	// (0x0009e2eb) pec_content_pane_g1_ParamLimits

0x3de5,	// (0x0009e2eb) pec_content_pane_g1

0xb5e2,	// (0x000a5ae8) pec_content_pane_t1_ParamLimits

0xb5e2,	// (0x000a5ae8) pec_content_pane_t1

0xb5f4,	// (0x000a5afa) pec_content_pane_t2_ParamLimits

0xb5f4,	// (0x000a5afa) pec_content_pane_t2

0x0001,

0x01f6,	// (0x0009a6fc) pec_content_pane_t_ParamLimits

0x01f6,	// (0x0009a6fc) pec_content_pane_t

0x3df1,	// (0x0009e2f7) list_single_graphic_pane_cp01_ParamLimits

0x3df1,	// (0x0009e2f7) list_single_graphic_pane_cp01

0xa690,	// (0x000a4b96) bg_popup_sub_pane_cp04

0xb606,	// (0x000a5b0c) popup_mup_playback_window_g1

0xb612,	// (0x000a5b18) popup_mup_playback_window_t1

0xb627,	// (0x000a5b2d) popup_mup_playback_window_t2

0x0001,

0x01fb,	// (0x0009a701) popup_mup_playback_window_t

0xb65e,	// (0x000a5b64) main_image_pane_g1_ParamLimits

0xb65e,	// (0x000a5b64) main_image_pane_g1

0xb6a1,	// (0x000a5ba7) scroll_pane_cp018_ParamLimits

0xb6a1,	// (0x000a5ba7) scroll_pane_cp018

0xb6b9,	// (0x000a5bbf) scroll_pane_cp016_ParamLimits

0xb6b9,	// (0x000a5bbf) scroll_pane_cp016

0x3e91,	// (0x0009e397) smil2_image_pane_ParamLimits

0x3e91,	// (0x0009e397) smil2_image_pane

0x3ec5,	// (0x0009e3cb) smil2_root_pane_ParamLimits

0x3ec5,	// (0x0009e3cb) smil2_root_pane

0x3ef1,	// (0x0009e3f7) smil2_text_pane_ParamLimits

0x3ef1,	// (0x0009e3f7) smil2_text_pane

0x9f69,	// (0x000a446f) bg_list_pane_cp06

0xb6f5,	// (0x000a5bfb) grid_radio_pane

0x9f69,	// (0x000a446f) bg_popup_window_pane_cp06

0xb6fd,	// (0x000a5c03) main_fmradio_pane_t1

0xb029,	// (0x000a552f) heading_pane_cp04

0xb70b,	// (0x000a5c11) main_fmradio_pane_t2

0xc6ef,	// (0x000a6bf5) popup_cale_lunar_info_window_g1

0xb719,	// (0x000a5c1f) main_fmradio_pane_t3

0xc6f7,	// (0x000a6bfd) popup_cale_lunar_info_window_g2

0xb727,	// (0x000a5c2d) main_fmradio_pane_t4

0x0001,

0xb735,	// (0x000a5c3b) main_fmradio_pane_t5

0x0004,

0x02d6,	// (0x0009a7dc) popup_cale_lunar_info_window_g

0x0210,	// (0x0009a716) main_fmradio_pane_t

0xb743,	// (0x000a5c49) wait_bar_pane_cp03

0xb74b,	// (0x000a5c51) cell_fmradio_pane_ParamLimits

0xb74b,	// (0x000a5c51) cell_fmradio_pane

0xb5b2,	// (0x000a5ab8) cell_fmradio_pane_g1_ParamLimits

0xb5b2,	// (0x000a5ab8) cell_fmradio_pane_g1

0x9f69,	// (0x000a446f) grid_highlight_pane_cp011

0xb75e,	// (0x000a5c64) poc_content_pane_ParamLimits

0xb75e,	// (0x000a5c64) poc_content_pane

0xb770,	// (0x000a5c76) scroll_pane_cp019

0x3f31,	// (0x0009e437) popup_call_poc_act_window_ParamLimits

0x3f31,	// (0x0009e437) popup_call_poc_act_window

0x3f3e,	// (0x0009e444) popup_call_poc_inact_window_ParamLimits

0x3f3e,	// (0x0009e444) popup_call_poc_inact_window

0x02ad,	// (0x0009a7b3) bg_popup_call_poc_act_pane_g

0xc667,	// (0x000a6b6d) bg_popup_call_poc_inact_pane_g1

0xc66f,	// (0x000a6b75) bg_popup_call_poc_inact_pane_g2

0xb778,	// (0x000a5c7e) popup_call_poc_act_window_g2

0xc677,	// (0x000a6b7d) bg_popup_call_poc_inact_pane_g3

0xc67f,	// (0x000a6b85) bg_popup_call_poc_inact_pane_g4

0xc687,	// (0x000a6b8d) bg_popup_call_poc_inact_pane_g5

0xb780,	// (0x000a5c86) popup_call_poc_act_window_t1_ParamLimits

0xb780,	// (0x000a5c86) popup_call_poc_act_window_t1

0xb7a8,	// (0x000a5cae) popup_call_poc_act_window_t2_ParamLimits

0xb7a8,	// (0x000a5cae) popup_call_poc_act_window_t2

0xb7d0,	// (0x000a5cd6) popup_call_poc_act_window_t3_ParamLimits

0xb7d0,	// (0x000a5cd6) popup_call_poc_act_window_t3

0xb7f8,	// (0x000a5cfe) popup_call_poc_act_window_t4_ParamLimits

0xb7f8,	// (0x000a5cfe) popup_call_poc_act_window_t4

0x0003,

0x021b,	// (0x0009a721) popup_call_poc_act_window_t_ParamLimits

0x021b,	// (0x0009a721) popup_call_poc_act_window_t

0xc68f,	// (0x000a6b95) bg_popup_call_poc_inact_pane_g6

0xc697,	// (0x000a6b9d) bg_popup_call_poc_inact_pane_g7

0xc69f,	// (0x000a6ba5) bg_popup_call_poc_inact_pane_g8

0xb80a,	// (0x000a5d10) popup_call_poc_inact_window_g2

0xc6a7,	// (0x000a6bad) bg_popup_call_poc_inact_pane_g9

0x0008,

0x029a,	// (0x0009a7a0) bg_popup_call_poc_inact_pane_g

0xb812,	// (0x000a5d18) popup_call_poc_inact_window_t1_ParamLimits

0xb812,	// (0x000a5d18) popup_call_poc_inact_window_t1

0xb827,	// (0x000a5d2d) popup_call_poc_inact_window_t2_ParamLimits

0xb827,	// (0x000a5d2d) popup_call_poc_inact_window_t2

0xb83c,	// (0x000a5d42) popup_call_poc_inact_window_t3_ParamLimits

0xb83c,	// (0x000a5d42) popup_call_poc_inact_window_t3

0x0002,

0x0224,	// (0x0009a72a) popup_call_poc_inact_window_t_ParamLimits

0x0224,	// (0x0009a72a) popup_call_poc_inact_window_t

0xc82c,	// (0x000a6d32) context_pane_ParamLimits

0x457a,	// (0x0009ea80) signal_pane_ParamLimits

0xb410,	// (0x000a5916) main_call2_pane

0x44ed,	// (0x0009e9f3) popup_phob_thumbnail2_window_ParamLimits

0x44ed,	// (0x0009e9f3) popup_phob_thumbnail2_window

0x3c02,	// (0x0009e108) aid_hotspot_pointer_arrow_pane

0x3c0a,	// (0x0009e110) aid_hotspot_pointer_hand_pane

0x4264,	// (0x0009e76a) phob_pre_status_pane_g5

0x1be3,	// (0x0009c0e9) cams_zoom_pane_ParamLimits

0x1bef,	// (0x0009c0f5) image_vga_pane_ParamLimits

0x1bfe,	// (0x0009c104) main_camera_pane_g1_ParamLimits

0x1c0c,	// (0x0009c112) main_camera_pane_g2_ParamLimits

0x1c18,	// (0x0009c11e) main_camera_pane_g3_ParamLimits

0x1c24,	// (0x0009c12a) main_camera_pane_g4_ParamLimits

0x1c30,	// (0x0009c136) main_camera_pane_g5_ParamLimits

0x1c3c,	// (0x0009c142) main_camera_pane_g6_ParamLimits

0x1c48,	// (0x0009c14e) main_camera_pane_g7_ParamLimits

0xf20f,	// (0x000a9715) main_camera_pane_g_ParamLimits

0x1c54,	// (0x0009c15a) main_camera_pane_t1_ParamLimits

0x1c66,	// (0x0009c16c) main_camera_pane_t2_ParamLimits

0xf220,	// (0x000a9726) main_camera_pane_t_ParamLimits

0xa690,	// (0x000a4b96) bg_popup_preview_window_pane_cp01_ParamLimits

0xa690,	// (0x000a4b96) bg_popup_preview_window_pane_cp01

0xb851,	// (0x000a5d57) popup_phob_thumbnail2_window_g1_ParamLimits

0xb851,	// (0x000a5d57) popup_phob_thumbnail2_window_g1

0x9f69,	// (0x000a446f) call2_cli_visual_pane

0x3f5a,	// (0x0009e460) popup_call2_audio_conf_window_ParamLimits

0x3f5a,	// (0x0009e460) popup_call2_audio_conf_window

0x3f6f,	// (0x0009e475) popup_call2_audio_first_window_ParamLimits

0x3f6f,	// (0x0009e475) popup_call2_audio_first_window

0x400d,	// (0x0009e513) popup_call2_audio_in_window_ParamLimits

0x400d,	// (0x0009e513) popup_call2_audio_in_window

0x404f,	// (0x0009e555) popup_call2_audio_out_window_ParamLimits

0x404f,	// (0x0009e555) popup_call2_audio_out_window

0x40b1,	// (0x0009e5b7) popup_call2_audio_second_window_ParamLimits

0x40b1,	// (0x0009e5b7) popup_call2_audio_second_window

0x410f,	// (0x0009e615) popup_call2_audio_wait_window_ParamLimits

0x410f,	// (0x0009e615) popup_call2_audio_wait_window

0x9f69,	// (0x000a446f) bg_popup_call2_act_pane_cp03

0xa672,	// (0x000a4b78) list_conf_pane_cp

0xb85d,	// (0x000a5d63) popup_call2_audio_conf_window_t1

0xb86b,	// (0x000a5d71) list_single_graphic_popup_conf2_pane_ParamLimits

0xb86b,	// (0x000a5d71) list_single_graphic_popup_conf2_pane

0xb0bd,	// (0x000a55c3) list_highlight_pane_cp04

0xb87e,	// (0x000a5d84) list_single_graphic_popup_conf2_pane_g1

0xb0ce,	// (0x000a55d4) list_single_graphic_popup_conf2_pane_g2

0x0001,

0xf4f2,	// (0x000a99f8) list_single_graphic_popup_conf2_pane_g

0xb888,	// (0x000a5d8e) list_single_graphic_popup_conf2_pane_t1

0xb896,	// (0x000a5d9c) bg_popup_call2_act_pane_cp01_ParamLimits

0xb896,	// (0x000a5d9c) bg_popup_call2_act_pane_cp01

0xb920,	// (0x000a5e26) call_type_pane_cp05_ParamLimits

0xb920,	// (0x000a5e26) call_type_pane_cp05

0xb974,	// (0x000a5e7a) popup_call2_audio_second_window_g1_ParamLimits

0xb974,	// (0x000a5e7a) popup_call2_audio_second_window_g1

0xb9c8,	// (0x000a5ece) popup_call2_audio_second_window_g2_ParamLimits

0xb9c8,	// (0x000a5ece) popup_call2_audio_second_window_g2

0x0002,

0x0230,	// (0x0009a736) popup_call2_audio_second_window_g_ParamLimits

0x0230,	// (0x0009a736) popup_call2_audio_second_window_g

0xba2d,	// (0x000a5f33) popup_call2_audio_second_window_t1_ParamLimits

0xba2d,	// (0x000a5f33) popup_call2_audio_second_window_t1

0xbae8,	// (0x000a5fee) popup_call2_audio_second_window_t2_ParamLimits

0xbae8,	// (0x000a5fee) popup_call2_audio_second_window_t2

0xbb3b,	// (0x000a6041) popup_call2_audio_second_window_t3_ParamLimits

0xbb3b,	// (0x000a6041) popup_call2_audio_second_window_t3

0x0003,

0x0237,	// (0x0009a73d) popup_call2_audio_second_window_t_ParamLimits

0x0237,	// (0x0009a73d) popup_call2_audio_second_window_t

0x9f69,	// (0x000a446f) bg_popup_call2_in_pane_cp02

0x9f73,	// (0x000a4479) call_type_pane_cp04

0x9f7b,	// (0x000a4481) popup_call2_audio_wait_window_g1

0x9f83,	// (0x000a4489) popup_call2_audio_wait_window_g2

0x0001,

0xf0fc,	// (0x000a9602) popup_call2_audio_wait_window_g

0x9f8b,	// (0x000a4491) popup_call2_audio_wait_window_t3

0xbc2e,	// (0x000a6134) bg_popup_call2_act_pane_ParamLimits

0xbc2e,	// (0x000a6134) bg_popup_call2_act_pane

0xbcee,	// (0x000a61f4) call_type_pane_cp03_ParamLimits

0xbcee,	// (0x000a61f4) call_type_pane_cp03

0xbd52,	// (0x000a6258) popup_call2_audio_first_window_g1_ParamLimits

0xbd52,	// (0x000a6258) popup_call2_audio_first_window_g1

0xbdc2,	// (0x000a62c8) popup_call2_audio_first_window_g2_ParamLimits

0xbdc2,	// (0x000a62c8) popup_call2_audio_first_window_g2

0xb337,	// (0x000a583d) popup_call2_audio_first_window_g3_ParamLimits

0xb337,	// (0x000a583d) popup_call2_audio_first_window_g3

0x0004,

0xf4f7,	// (0x000a99fd) popup_call2_audio_first_window_g_ParamLimits

0xf4f7,	// (0x000a99fd) popup_call2_audio_first_window_g

0xbea0,	// (0x000a63a6) popup_call2_audio_first_window_t1_ParamLimits

0xbea0,	// (0x000a63a6) popup_call2_audio_first_window_t1

0xbfa3,	// (0x000a64a9) popup_call2_audio_first_window_t4_ParamLimits

0xbfa3,	// (0x000a64a9) popup_call2_audio_first_window_t4

0xc086,	// (0x000a658c) popup_call2_audio_first_window_t5_ParamLimits

0xc086,	// (0x000a658c) popup_call2_audio_first_window_t5

0x0003,

0xf502,	// (0x000a9a08) popup_call2_audio_first_window_t_ParamLimits

0xf502,	// (0x000a9a08) popup_call2_audio_first_window_t

0xa688,	// (0x000a4b8e) bg_popup_call2_act_pane_g1

0xc6ff,	// (0x000a6c05) popup_cale_lunar_info_window_t1

0xc70d,	// (0x000a6c13) popup_cale_lunar_info_window_t2

0xc71b,	// (0x000a6c21) popup_cale_lunar_info_window_t3

0x9f69,	// (0x000a446f) bg_popup_call2_bubble_pane

0xc193,	// (0x000a6699) bg_popup_call2_in_pane_cp01_ParamLimits

0xc193,	// (0x000a6699) bg_popup_call2_in_pane_cp01

0x9c45,	// (0x000a414b) call_type_pane_cp02

0xc1db,	// (0x000a66e1) popup_call2_audio_out_window_g1_ParamLimits

0xc1db,	// (0x000a66e1) popup_call2_audio_out_window_g1

0xc207,	// (0x000a670d) popup_call2_audio_out_window_g2_ParamLimits

0xc207,	// (0x000a670d) popup_call2_audio_out_window_g2

0xc22f,	// (0x000a6735) popup_call2_audio_out_window_g3_ParamLimits

0xc22f,	// (0x000a6735) popup_call2_audio_out_window_g3

0x0003,

0x0254,	// (0x0009a75a) popup_call2_audio_out_window_g_ParamLimits

0x0254,	// (0x0009a75a) popup_call2_audio_out_window_g

0xc26a,	// (0x000a6770) popup_call2_audio_out_window_t1_ParamLimits

0xc26a,	// (0x000a6770) popup_call2_audio_out_window_t1

0xc2c9,	// (0x000a67cf) popup_call2_audio_out_window_t2_ParamLimits

0xc2c9,	// (0x000a67cf) popup_call2_audio_out_window_t2

0xc31d,	// (0x000a6823) popup_call2_audio_out_window_t3_ParamLimits

0xc31d,	// (0x000a6823) popup_call2_audio_out_window_t3

0xc333,	// (0x000a6839) popup_call2_audio_out_window_t4_ParamLimits

0xc333,	// (0x000a6839) popup_call2_audio_out_window_t4

0xc349,	// (0x000a684f) popup_call2_audio_out_window_t5_ParamLimits

0xc349,	// (0x000a684f) popup_call2_audio_out_window_t5

0x0005,

0x025d,	// (0x0009a763) popup_call2_audio_out_window_t_ParamLimits

0x025d,	// (0x0009a763) popup_call2_audio_out_window_t

0xc3ad,	// (0x000a68b3) bg_popup_call2_in_pane_ParamLimits

0xc3ad,	// (0x000a68b3) bg_popup_call2_in_pane

0xc409,	// (0x000a690f) popup_call2_audio_in_window_g1_ParamLimits

0xc409,	// (0x000a690f) popup_call2_audio_in_window_g1

0xc441,	// (0x000a6947) popup_call2_audio_in_window_g2_ParamLimits

0xc441,	// (0x000a6947) popup_call2_audio_in_window_g2

0xc479,	// (0x000a697f) popup_call2_audio_in_window_g3_ParamLimits

0xc479,	// (0x000a697f) popup_call2_audio_in_window_g3

0x0003,

0x026a,	// (0x0009a770) popup_call2_audio_in_window_g_ParamLimits

0x026a,	// (0x0009a770) popup_call2_audio_in_window_g

0xc4d1,	// (0x000a69d7) popup_call2_audio_in_window_t1_ParamLimits

0xc4d1,	// (0x000a69d7) popup_call2_audio_in_window_t1

0xc551,	// (0x000a6a57) popup_call2_audio_in_window_t2_ParamLimits

0xc551,	// (0x000a6a57) popup_call2_audio_in_window_t2

0xc5d1,	// (0x000a6ad7) popup_call2_audio_in_window_t3_ParamLimits

0xc5d1,	// (0x000a6ad7) popup_call2_audio_in_window_t3

0xc5eb,	// (0x000a6af1) popup_call2_audio_in_window_t4_ParamLimits

0xc5eb,	// (0x000a6af1) popup_call2_audio_in_window_t4

0xc5fd,	// (0x000a6b03) popup_call2_audio_in_window_t5_ParamLimits

0xc5fd,	// (0x000a6b03) popup_call2_audio_in_window_t5

0xc612,	// (0x000a6b18) popup_call2_audio_in_window_t6_ParamLimits

0xc612,	// (0x000a6b18) popup_call2_audio_in_window_t6

0x0005,

0x0273,	// (0x0009a779) popup_call2_audio_in_window_t_ParamLimits

0x0273,	// (0x0009a779) popup_call2_audio_in_window_t

0xa688,	// (0x000a4b8e) bg_popup_call2_in_pane_g1

0xc729,	// (0x000a6c2f) popup_cale_lunar_info_window_t4

0x0003,

0x02db,	// (0x0009a7e1) popup_cale_lunar_info_window_t

0xa690,	// (0x000a4b96) bg_popup_call2_rect_pane_ParamLimits

0xa690,	// (0x000a4b96) bg_popup_call2_rect_pane

0x9f69,	// (0x000a446f) call2_cli_visual_graphic_pane

0x9f69,	// (0x000a446f) call2_cli_visual_text_pane

0x4628,	// (0x0009eb2e) smil_status_volume_pane_g3

0x0002,

0xa7c9,	// (0x000a4ccf) call2_cli_visual_graphic_pane_g1

0xa7c9,	// (0x000a4ccf) call2_cli_visual_graphic_pane_g2

0xa7c9,	// (0x000a4ccf) call2_cli_visual_graphic_pane_g3

0x0002,

0xf50b,	// (0x000a9a11) call2_cli_visual_graphic_pane_g

0xc627,	// (0x000a6b2d) bg_popup_call2_rect_pane_g1

0xa867,	// (0x000a4d6d) bg_popup_call2_rect_pane_g2

0xc62f,	// (0x000a6b35) bg_popup_call2_rect_pane_g3

0xc637,	// (0x000a6b3d) bg_popup_call2_rect_pane_g4

0xc63f,	// (0x000a6b45) bg_popup_call2_rect_pane_g5

0xc647,	// (0x000a6b4d) bg_popup_call2_rect_pane_g6

0xc64f,	// (0x000a6b55) bg_popup_call2_rect_pane_g7

0xc657,	// (0x000a6b5d) bg_popup_call2_rect_pane_g8

0xc65f,	// (0x000a6b65) bg_popup_call2_rect_pane_g9

0x0008,

0xf512,	// (0x000a9a18) bg_popup_call2_rect_pane_g

0xc667,	// (0x000a6b6d) bg_popup_call2_bubble_pane_g1

0xc66f,	// (0x000a6b75) bg_popup_call2_bubble_pane_g2

0xc677,	// (0x000a6b7d) bg_popup_call2_bubble_pane_g3

0xc67f,	// (0x000a6b85) bg_popup_call2_bubble_pane_g4

0xc687,	// (0x000a6b8d) bg_popup_call2_bubble_pane_g5

0xc68f,	// (0x000a6b95) bg_popup_call2_bubble_pane_g6

0xc697,	// (0x000a6b9d) bg_popup_call2_bubble_pane_g7

0xc69f,	// (0x000a6ba5) bg_popup_call2_bubble_pane_g8

0xc6a7,	// (0x000a6bad) bg_popup_call2_bubble_pane_g9

0x0008,

0x029a,	// (0x0009a7a0) bg_popup_call2_bubble_pane_g

0x160d,	// (0x0009bb13) aid_cale_week_size_cell_pane

0x1c78,	// (0x0009c17e) aid_cams_cif_uncrop_pane_ParamLimits

0x1c78,	// (0x0009c17e) aid_cams_cif_uncrop_pane

0x1dd3,	// (0x0009c2d9) aid_cams_size_cell_ParamLimits

0x1dd3,	// (0x0009c2d9) aid_cams_size_cell

0x1ddf,	// (0x0009c2e5) grid_cams_pane_ParamLimits

0x1ded,	// (0x0009c2f3) linegrid_cams_pane_ParamLimits

0x1fd2,	// (0x0009c4d8) call_video_pane_t1

0x1ff3,	// (0x0009c4f9) call_video_pane_t2

0x0001,

0xf273,	// (0x000a9779) call_video_pane_t

0x2562,	// (0x0009ca68) aid_cale_month_size_cell_pane_ParamLimits

0x2562,	// (0x0009ca68) aid_cale_month_size_cell_pane

0xf555,	// (0x000a9a5b) smil_status_volume_pane_g

0x4635,	// (0x0009eb3b) volume_smil_pane_ParamLimits

0x0d6e,	// (0x0009b274) aid_popup2_width_pane

0x1501,	// (0x0009ba07) cell_qdial_pane_g4_ParamLimits

0x1501,	// (0x0009ba07) cell_qdial_pane_g4

0x35b5,	// (0x0009dabb) aid_blid_cardinal_pane_ParamLimits

0x35c5,	// (0x0009dacb) aid_blid_destination_pane_ParamLimits

0x35c5,	// (0x0009dacb) aid_blid_destination_pane

0xa690,	// (0x000a4b96) bg_popup_call_poc_act_pane_ParamLimits

0xa690,	// (0x000a4b96) bg_popup_call_poc_act_pane

0xa690,	// (0x000a4b96) bg_popup_call_poc_inact_pane_ParamLimits

0xa690,	// (0x000a4b96) bg_popup_call_poc_inact_pane

0xc6af,	// (0x000a6bb5) bg_popup_call_poc_act_pane_g1

0xc6b7,	// (0x000a6bbd) bg_popup_call_poc_act_pane_g2

0xc6bf,	// (0x000a6bc5) bg_popup_call_poc_act_pane_g3

0xc67f,	// (0x000a6b85) bg_popup_call_poc_act_pane_g4

0xc687,	// (0x000a6b8d) bg_popup_call_poc_act_pane_g5

0xc6c7,	// (0x000a6bcd) bg_popup_call_poc_act_pane_g6

0xc697,	// (0x000a6b9d) bg_popup_call_poc_act_pane_g7

0xc6cf,	// (0x000a6bd5) bg_popup_call_poc_act_pane_g8

0x9f69,	// (0x000a446f) main_usb_pane

0x4426,	// (0x0009e92c) popup_cale_lunar_info_window

0x2312,	// (0x0009c818) im_reading_pane_t1_ParamLimits

0xaa3c,	// (0x000a4f42) list_im_pane_ParamLimits

0xaa4d,	// (0x000a4f53) scroll_pane_cp07_ParamLimits

0x9f69,	// (0x000a446f) grid_highlight_pane_cp012

0xa690,	// (0x000a4b96) mup_scale_pane_ParamLimits

0xb337,	// (0x000a583d) main_usb_pane_g1_ParamLimits

0xb337,	// (0x000a583d) main_usb_pane_g1

0x4187,	// (0x0009e68d) main_usb_pane_g2_ParamLimits

0x4187,	// (0x0009e68d) main_usb_pane_g2

0x0001,

0xf525,	// (0x000a9a2b) main_usb_pane_g_ParamLimits

0xf525,	// (0x000a9a2b) main_usb_pane_g

0x4193,	// (0x0009e699) main_usb_pane_t1_ParamLimits

0x4193,	// (0x0009e699) main_usb_pane_t1

0x41a5,	// (0x0009e6ab) main_usb_pane_t2_ParamLimits

0x41a5,	// (0x0009e6ab) main_usb_pane_t2

0x41b7,	// (0x0009e6bd) main_usb_pane_t3_ParamLimits

0x41b7,	// (0x0009e6bd) main_usb_pane_t3

0x41c9,	// (0x0009e6cf) main_usb_pane_t4_ParamLimits

0x41c9,	// (0x0009e6cf) main_usb_pane_t4

0x41db,	// (0x0009e6e1) main_usb_pane_t5_ParamLimits

0x41db,	// (0x0009e6e1) main_usb_pane_t5

0x41ed,	// (0x0009e6f3) main_usb_pane_t6_ParamLimits

0x41ed,	// (0x0009e6f3) main_usb_pane_t6

0x0005,

0xf52a,	// (0x000a9a30) main_usb_pane_t_ParamLimits

0x355b,	// (0x0009da61) aid_text_placing

0x3567,	// (0x0009da6d) main_location2_pane_t1_ParamLimits

0x357b,	// (0x0009da81) main_location2_pane_t2_ParamLimits

0x358f,	// (0x0009da95) main_location2_pane_t3_ParamLimits

0x35a3,	// (0x0009daa9) main_location2_pane_t4_ParamLimits

0x35a3,	// (0x0009daa9) main_location2_pane_t4

0xf3d4,	// (0x000a98da) main_location2_pane_t_ParamLimits

0xa6cc,	// (0x000a4bd2) find_pinb_pane_g2_ParamLimits

0xa6cc,	// (0x000a4bd2) find_pinb_pane_g2

0x0001,

0xf122,	// (0x000a9628) find_pinb_pane_g_ParamLimits

0xf122,	// (0x000a9628) find_pinb_pane_g

0xa6d8,	// (0x000a4bde) find_pinb_pane_t1_ParamLimits

0xa6ea,	// (0x000a4bf0) find_pinb_pane_t2_ParamLimits

0xf127,	// (0x000a962d) find_pinb_pane_t_ParamLimits

0x9f69,	// (0x000a446f) main_call3_pane

0x2ad6,	// (0x0009cfdc) cale_month_day_heading_pane_t1_ParamLimits

0x2b5c,	// (0x0009d062) cale_month_day_heading_pane_t2_ParamLimits

0x2bed,	// (0x0009d0f3) cale_month_day_heading_pane_t3_ParamLimits

0x2c7e,	// (0x0009d184) cale_month_day_heading_pane_t4_ParamLimits

0x2d0f,	// (0x0009d215) cale_month_day_heading_pane_t5_ParamLimits

0x2da0,	// (0x0009d2a6) cale_month_day_heading_pane_t6_ParamLimits

0x2e3d,	// (0x0009d343) cale_month_day_heading_pane_t7_ParamLimits

0xf2ab,	// (0x000a97b1) cale_month_day_heading_pane_t_ParamLimits

0xac97,	// (0x000a519d) smil_status_volume_pane

0x3d3e,	// (0x0009e244) postcard_address_pane_ParamLimits

0x3d3e,	// (0x0009e244) postcard_address_pane

0x3d4a,	// (0x0009e250) postcard_message_pane_ParamLimits

0x3d4a,	// (0x0009e250) postcard_message_pane

0x414e,	// (0x0009e654) call2_cli_visual_pane_t1_ParamLimits

0x414e,	// (0x0009e654) call2_cli_visual_pane_t1

0x478a,	// (0x0009ec90) postcard_message_pane_t1_ParamLimits

0x478a,	// (0x0009ec90) postcard_message_pane_t1

0x4773,	// (0x0009ec79) postcard_address_pane_t1_ParamLimits

0x4773,	// (0x0009ec79) postcard_address_pane_t1

0x4764,	// (0x0009ec6a) popup_call3_audio_in_window_ParamLimits

0x4764,	// (0x0009ec6a) popup_call3_audio_in_window

0x464a,	// (0x0009eb50) bg_popup_call3_in_pane_ParamLimits

0x464a,	// (0x0009eb50) bg_popup_call3_in_pane

0x46aa,	// (0x0009ebb0) popup_call3_audio_in_window_g1_ParamLimits

0x46aa,	// (0x0009ebb0) popup_call3_audio_in_window_g1

0x46c2,	// (0x0009ebc8) popup_call3_audio_in_window_g2_ParamLimits

0x46c2,	// (0x0009ebc8) popup_call3_audio_in_window_g2

0x46da,	// (0x0009ebe0) popup_call3_audio_in_window_g3_ParamLimits

0x46da,	// (0x0009ebe0) popup_call3_audio_in_window_g3

0x0003,

0xf55c,	// (0x000a9a62) popup_call3_audio_in_window_g_ParamLimits

0xf55c,	// (0x000a9a62) popup_call3_audio_in_window_g

0x4702,	// (0x0009ec08) popup_call3_audio_in_window_t1_ParamLimits

0x4702,	// (0x0009ec08) popup_call3_audio_in_window_t1

0x472a,	// (0x0009ec30) popup_call3_audio_in_window_t2_ParamLimits

0x472a,	// (0x0009ec30) popup_call3_audio_in_window_t2

0x4752,	// (0x0009ec58) popup_call3_audio_in_window_t3_ParamLimits

0x4752,	// (0x0009ec58) popup_call3_audio_in_window_t3

0x0002,

0xf565,	// (0x000a9a6b) popup_call3_audio_in_window_t_ParamLimits

0xf565,	// (0x000a9a6b) popup_call3_audio_in_window_t

0xb410,	// (0x000a5916) bg_popup_call3_rect_pane

0xc627,	// (0x000a6b2d) bg_popup_call3_rect_pane_g1

0xa867,	// (0x000a4d6d) bg_popup_call3_rect_pane_g2

0xc62f,	// (0x000a6b35) bg_popup_call3_rect_pane_g3

0xc637,	// (0x000a6b3d) bg_popup_call3_rect_pane_g4

0xc63f,	// (0x000a6b45) bg_popup_call3_rect_pane_g5

0xc647,	// (0x000a6b4d) bg_popup_call3_rect_pane_g6

0xc64f,	// (0x000a6b55) bg_popup_call3_rect_pane_g7

0x38db,	// (0x0009dde1) mup_visualizer_osc_pane

0xb4cf,	// (0x000a59d5) mup_visualizer_spec_pane

0x466a,	// (0x0009eb70) call3_video_qcif_pane_ParamLimits

0x466a,	// (0x0009eb70) call3_video_qcif_pane

0x467a,	// (0x0009eb80) call3_video_qcif_uncrop_pane_ParamLimits

0x467a,	// (0x0009eb80) call3_video_qcif_uncrop_pane

0x4688,	// (0x0009eb8e) call3_video_subqcif_pane_ParamLimits

0x4688,	// (0x0009eb8e) call3_video_subqcif_pane

0x469a,	// (0x0009eba0) call3_video_subqcif_uncrop_pane_ParamLimits

0x469a,	// (0x0009eba0) call3_video_subqcif_uncrop_pane

0x46f2,	// (0x0009ebf8) popup_call3_audio_in_window_g4_ParamLimits

0x46f2,	// (0x0009ebf8) popup_call3_audio_in_window_g4

0x4615,	// (0x0009eb1b) mup_spec_half_pane

0x461e,	// (0x0009eb24) mup_spec_half_pane_cp

0xc88c,	// (0x000a6d92) mup_osc_middle_pane

0xc895,	// (0x000a6d9b) mup_visualizer_osc_pane_g1

0x45f6,	// (0x0009eafc) mup_spec_bar_pane_ParamLimits

0x45f6,	// (0x0009eafc) mup_spec_bar_pane

0xc879,	// (0x000a6d7f) mup_spec_bar_pane_g1

0xc883,	// (0x000a6d89) mup_spec_bar_pane_g2

0x0001,

0x031f,	// (0x0009a825) mup_spec_bar_pane_g

0x160d,	// (0x0009bb13) aid_cale_week_size_cell_pane_ParamLimits

0x1622,	// (0x0009bb28) bg_cale_heading_pane_ParamLimits

0xa8a4,	// (0x000a4daa) bg_cale_pane_cp01_ParamLimits

0x1644,	// (0x0009bb4a) cale_week_corner_pane_ParamLimits

0x165e,	// (0x0009bb64) cale_week_day_heading_pane_ParamLimits

0x1680,	// (0x0009bb86) cale_week_scroll_pane_g1_ParamLimits

0x169d,	// (0x0009bba3) cale_week_scroll_pane_g2_ParamLimits

0x16b0,	// (0x0009bbb6) cale_week_scroll_pane_g3_ParamLimits

0x16c3,	// (0x0009bbc9) cale_week_scroll_pane_g4_ParamLimits

0x16d6,	// (0x0009bbdc) cale_week_scroll_pane_g5_ParamLimits

0x16e9,	// (0x0009bbef) cale_week_scroll_pane_g6_ParamLimits

0x16fc,	// (0x0009bc02) cale_week_scroll_pane_g7_ParamLimits

0x170f,	// (0x0009bc15) cale_week_scroll_pane_g8_ParamLimits

0x1724,	// (0x0009bc2a) cale_week_scroll_pane_g9_ParamLimits

0x1737,	// (0x0009bc3d) cale_week_scroll_pane_g10_ParamLimits

0x174a,	// (0x0009bc50) cale_week_scroll_pane_g11_ParamLimits

0x175d,	// (0x0009bc63) cale_week_scroll_pane_g12_ParamLimits

0x1774,	// (0x0009bc7a) cale_week_scroll_pane_g13_ParamLimits

0x178f,	// (0x0009bc95) cale_week_scroll_pane_g14_ParamLimits

0x17aa,	// (0x0009bcb0) cale_week_scroll_pane_g15_ParamLimits

0xf1b3,	// (0x000a96b9) cale_week_scroll_pane_g_ParamLimits

0x17c5,	// (0x0009bccb) cale_week_time_pane_ParamLimits

0x17da,	// (0x0009bce0) grid_cale_week_pane_ParamLimits

0xa8c2,	// (0x000a4dc8) listscroll_cale_week_pane_t1

0xa8d4,	// (0x000a4dda) scroll_pane_cp08_ParamLimits

0x25cb,	// (0x0009cad1) cale_month_corner_pane_ParamLimits

0xac6d,	// (0x000a5173) cale_month_pane_t1

0x2a6f,	// (0x0009cf75) cale_month_week_pane_ParamLimits

0xb337,	// (0x000a583d) popup_call_status_window_g1_ParamLimits

0x33a1,	// (0x0009d8a7) popup_call_status_window_g2_ParamLimits

0x33ad,	// (0x0009d8b3) popup_call_status_window_g3_ParamLimits

0xf35b,	// (0x000a9861) popup_call_status_window_g_ParamLimits

0xb019,	// (0x000a551f) aid_call2_pane

0x3b7b,	// (0x0009e081) msg_header_pane_g1

0x3d3e,	// (0x0009e244) postcard_address2_pane_ParamLimits

0x3d3e,	// (0x0009e244) postcard_address2_pane

0x3d4a,	// (0x0009e250) postcard_message2_pane_ParamLimits

0x3d4a,	// (0x0009e250) postcard_message2_pane

0x4588,	// (0x0009ea8e) message2_row_pane_ParamLimits

0x4588,	// (0x0009ea8e) message2_row_pane

0x45a5,	// (0x0009eaab) address2_row_pane_ParamLimits

0x45a5,	// (0x0009eaab) address2_row_pane

0xc847,	// (0x000a6d4d) postcard_message2_row_pane_g1

0xc84f,	// (0x000a6d55) postcard_message2_row_pane_t1

0xc847,	// (0x000a6d4d) address2_row_pane_g1

0xc84f,	// (0x000a6d55) address2_row_pane_t1

0x1b3a,	// (0x0009c040) aid_size_cell_vorec

0x9f69,	// (0x000a446f) main_rss_pane

0x45b8,	// (0x0009eabe) rss_list_single_pane_ParamLimits

0x45b8,	// (0x0009eabe) rss_list_single_pane

0xc85d,	// (0x000a6d63) rss_list_single_pane_t1

0xc86b,	// (0x000a6d71) rss_list_single_pane_t2

0x0001,

0x031a,	// (0x0009a820) rss_list_single_pane_t

0x9f69,	// (0x000a446f) main_camera2_pane

0x9f69,	// (0x000a446f) main_video2_pane

0x47ee,	// (0x0009ecf4) cams_zoom_pane_cp2_ParamLimits

0x47ee,	// (0x0009ecf4) cams_zoom_pane_cp2

0x47fa,	// (0x0009ed00) image2_vga_pane_ParamLimits

0x47fa,	// (0x0009ed00) image2_vga_pane

0x4809,	// (0x0009ed0f) main_camera2_pane_g1_ParamLimits

0x4809,	// (0x0009ed0f) main_camera2_pane_g1

0x4815,	// (0x0009ed1b) main_camera2_pane_g2_ParamLimits

0x4815,	// (0x0009ed1b) main_camera2_pane_g2

0x4821,	// (0x0009ed27) main_camera2_pane_g3_ParamLimits

0x4821,	// (0x0009ed27) main_camera2_pane_g3

0x482d,	// (0x0009ed33) main_camera2_pane_g4_ParamLimits

0x482d,	// (0x0009ed33) main_camera2_pane_g4

0x4839,	// (0x0009ed3f) main_camera2_pane_g5_ParamLimits

0x4839,	// (0x0009ed3f) main_camera2_pane_g5

0x4845,	// (0x0009ed4b) main_camera2_pane_g6_ParamLimits

0x4845,	// (0x0009ed4b) main_camera2_pane_g6

0x4851,	// (0x0009ed57) main_camera2_pane_g7_ParamLimits

0x4851,	// (0x0009ed57) main_camera2_pane_g7

0x485d,	// (0x0009ed63) main_camera2_pane_g8_ParamLimits

0x485d,	// (0x0009ed63) main_camera2_pane_g8

0x0008,

0xf56c,	// (0x000a9a72) main_camera2_pane_g_ParamLimits

0xf56c,	// (0x000a9a72) main_camera2_pane_g

0x4875,	// (0x0009ed7b) main_camera2_pane_t1_ParamLimits

0x4875,	// (0x0009ed7b) main_camera2_pane_t1

0x4887,	// (0x0009ed8d) main_camera2_pane_t2_ParamLimits

0x4887,	// (0x0009ed8d) main_camera2_pane_t2

0x4899,	// (0x0009ed9f) main_camera2_pane_t3_ParamLimits

0x4899,	// (0x0009ed9f) main_camera2_pane_t3

0x48ab,	// (0x0009edb1) main_camera2_pane_t4_ParamLimits

0x48ab,	// (0x0009edb1) main_camera2_pane_t4

0x0006,

0xf57f,	// (0x000a9a85) main_camera2_pane_t_ParamLimits

0xf57f,	// (0x000a9a85) main_camera2_pane_t

0x490d,	// (0x0009ee13) cams_zoom_pane_cp4_ParamLimits

0x490d,	// (0x0009ee13) cams_zoom_pane_cp4

0x491d,	// (0x0009ee23) image2_cif_pane_ParamLimits

0x491d,	// (0x0009ee23) image2_cif_pane

0x4932,	// (0x0009ee38) image2_subqcif_pane_ParamLimits

0x4932,	// (0x0009ee38) image2_subqcif_pane

0x4941,	// (0x0009ee47) main_video2_pane_g1_ParamLimits

0x4941,	// (0x0009ee47) main_video2_pane_g1

0x4953,	// (0x0009ee59) main_video2_pane_g2_ParamLimits

0x4953,	// (0x0009ee59) main_video2_pane_g2

0x4963,	// (0x0009ee69) main_video2_pane_g3_ParamLimits

0x4963,	// (0x0009ee69) main_video2_pane_g3

0x4973,	// (0x0009ee79) main_video2_pane_g4_ParamLimits

0x4973,	// (0x0009ee79) main_video2_pane_g4

0x4983,	// (0x0009ee89) main_video2_pane_g5_ParamLimits

0x4983,	// (0x0009ee89) main_video2_pane_g5

0x4993,	// (0x0009ee99) main_video2_pane_g6_ParamLimits

0x4993,	// (0x0009ee99) main_video2_pane_g6

0x0005,

0xf58e,	// (0x000a9a94) main_video2_pane_g_ParamLimits

0xf58e,	// (0x000a9a94) main_video2_pane_g

0x49a5,	// (0x0009eeab) main_video2_pane_t1_ParamLimits

0x49a5,	// (0x0009eeab) main_video2_pane_t1

0x49bf,	// (0x0009eec5) main_video2_pane_t2_ParamLimits

0x49bf,	// (0x0009eec5) main_video2_pane_t2

0x49e5,	// (0x0009eeeb) main_video2_pane_t3_ParamLimits

0x49e5,	// (0x0009eeeb) main_video2_pane_t3

0x0002,

0xf59b,	// (0x000a9aa1) main_video2_pane_t_ParamLimits

0xf59b,	// (0x000a9aa1) main_video2_pane_t

0x42a4,	// (0x0009e7aa) call_muted_g2

0x0001,

0xf550,	// (0x000a9a56) call_muted_g

0x9f69,	// (0x000a446f) main_mup2_pane

0xc8cc,	// (0x000a6dd2) main_mup2_pane_g1_ParamLimits

0xc8cc,	// (0x000a6dd2) main_mup2_pane_g1

0x4a0b,	// (0x0009ef11) main_mup2_pane_g2_ParamLimits

0x4a0b,	// (0x0009ef11) main_mup2_pane_g2

0x4c8d,	// (0x0009f193) main_mup_pane_g13_cp1

0x4c95,	// (0x0009f19b) mup_volume_pane_cp1

0x4a2b,	// (0x0009ef31) main_mup2_pane_g4_ParamLimits

0x4a2b,	// (0x0009ef31) main_mup2_pane_g4

0x4a40,	// (0x0009ef46) main_mup2_pane_g5_ParamLimits

0x4a40,	// (0x0009ef46) main_mup2_pane_g5

0x4a55,	// (0x0009ef5b) main_mup2_pane_g6_ParamLimits

0x4a55,	// (0x0009ef5b) main_mup2_pane_g6

0x4a6a,	// (0x0009ef70) main_mup2_pane_g7_ParamLimits

0x4a6a,	// (0x0009ef70) main_mup2_pane_g7

0x0006,

0xf5a2,	// (0x000a9aa8) main_mup2_pane_g_ParamLimits

0xf5a2,	// (0x000a9aa8) main_mup2_pane_g

0x4a86,	// (0x0009ef8c) main_mup2_pane_t1_ParamLimits

0x4a86,	// (0x0009ef8c) main_mup2_pane_t1

0x4a9d,	// (0x0009efa3) main_mup2_pane_t2_ParamLimits

0x4a9d,	// (0x0009efa3) main_mup2_pane_t2

0x4ab4,	// (0x0009efba) main_mup2_pane_t3_ParamLimits

0x4ab4,	// (0x0009efba) main_mup2_pane_t3

0x4acb,	// (0x0009efd1) main_mup2_pane_t4_ParamLimits

0x4acb,	// (0x0009efd1) main_mup2_pane_t4

0x4ae5,	// (0x0009efeb) main_mup2_pane_t5_ParamLimits

0x4ae5,	// (0x0009efeb) main_mup2_pane_t5

0x4aff,	// (0x0009f005) main_mup2_pane_t6_ParamLimits

0x4aff,	// (0x0009f005) main_mup2_pane_t6

0x0005,

0xf5b1,	// (0x000a9ab7) main_mup2_pane_t_ParamLimits

0xf5b1,	// (0x000a9ab7) main_mup2_pane_t

0x4b37,	// (0x0009f03d) mup2_visualizer_pane_ParamLimits

0x4b37,	// (0x0009f03d) mup2_visualizer_pane

0x4b6d,	// (0x0009f073) mup_progress_pane_cp_ParamLimits

0x4b6d,	// (0x0009f073) mup_progress_pane_cp

0x4c78,	// (0x0009f17e) mup_volume_pane_cp_ParamLimits

0x4c78,	// (0x0009f17e) mup_volume_pane_cp

0x4b84,	// (0x0009f08a) mup2_visualizer_pane_g1_ParamLimits

0x4b84,	// (0x0009f08a) mup2_visualizer_pane_g1

0xc8d8,	// (0x000a6dde) mup2_visualizer_pane_g2_ParamLimits

0xc8d8,	// (0x000a6dde) mup2_visualizer_pane_g2

0x4b99,	// (0x0009f09f) mup2_visualizer_pane_g3_ParamLimits

0x4b99,	// (0x0009f09f) mup2_visualizer_pane_g3

0x0002,

0xf5be,	// (0x000a9ac4) mup2_visualizer_pane_g_ParamLimits

0xf5be,	// (0x000a9ac4) mup2_visualizer_pane_g

0xb6ed,	// (0x000a5bf3) aid_size_cell_fmradio

0x43ba,	// (0x0009e8c0) aid_height_parent_landcape

0xaacb,	// (0x000a4fd1) wml_content_pane_cp

0xaad3,	// (0x000a4fd9) wml_tabs_pane

0xaadc,	// (0x000a4fe2) popup_wml_miniature_window

0xaae4,	// (0x000a4fea) scroll_pane_cp021

0xaaf8,	// (0x000a4ffe) wml_content_pane_comp8

0x9f69,	// (0x000a446f) bg_popup_sub_pane_cp05

0xc8f6,	// (0x000a6dfc) popup_wml_miniature_window_g1

0xc8fe,	// (0x000a6e04) wml_miniature_view_pane

0x4ba7,	// (0x0009f0ad) aid_size_wml_view

0x4baf,	// (0x0009f0b5) wml_miniature_view_pane_g1

0x4bb8,	// (0x0009f0be) wml_miniature_view_pane_g2

0x4bc1,	// (0x0009f0c7) wml_miniature_view_pane_g3

0x4bc9,	// (0x0009f0cf) wml_miniature_view_pane_g4

0x4bd1,	// (0x0009f0d7) wml_miniature_view_pane_g5

0x4bd9,	// (0x0009f0df) wml_miniature_view_pane_g6

0x4be1,	// (0x0009f0e7) wml_miniature_view_pane_g7

0x4be9,	// (0x0009f0ef) wml_miniature_view_pane_g8

0x0007,

0xf5c5,	// (0x000a9acb) wml_miniature_view_pane_g

0xc8cc,	// (0x000a6dd2) background_graphic_ParamLimits

0xc8cc,	// (0x000a6dd2) background_graphic

0xc906,	// (0x000a6e0c) wml_tabs_2_pane

0xc90f,	// (0x000a6e15) wml_tabs_3_pane_ParamLimits

0xc90f,	// (0x000a6e15) wml_tabs_3_pane

0xc921,	// (0x000a6e27) wml_tabs_4_pane_ParamLimits

0xc921,	// (0x000a6e27) wml_tabs_4_pane

0xc937,	// (0x000a6e3d) wml_tabs_5_pane_ParamLimits

0xc937,	// (0x000a6e3d) wml_tabs_5_pane

0xc951,	// (0x000a6e57) wml_tabs_pane_g2_ParamLimits

0xc951,	// (0x000a6e57) wml_tabs_pane_g2

0xc965,	// (0x000a6e6b) wml_tabs_pane_g3_ParamLimits

0xc965,	// (0x000a6e6b) wml_tabs_pane_g3

0x4bf1,	// (0x0009f0f7) wml_tabs_2_active_pane_ParamLimits

0x4bf1,	// (0x0009f0f7) wml_tabs_2_active_pane

0x4c01,	// (0x0009f107) wml_tabs_2_passive_pane_ParamLimits

0x4c01,	// (0x0009f107) wml_tabs_2_passive_pane

0x4c11,	// (0x0009f117) wml_tabs_3_active_pane_cp_ParamLimits

0x4c11,	// (0x0009f117) wml_tabs_3_active_pane_cp

0x4c22,	// (0x0009f128) wml_tabs_3_passive_pane_ParamLimits

0x4c22,	// (0x0009f128) wml_tabs_3_passive_pane

0x4c33,	// (0x0009f139) wml_tabs_3_passive_pane_cp_ParamLimits

0x4c33,	// (0x0009f139) wml_tabs_3_passive_pane_cp

0x4c44,	// (0x0009f14a) tabs_4_active_pane

0x4c4c,	// (0x0009f152) tabs_4_passive_pane

0x4c54,	// (0x0009f15a) tabs_4_passive_pane_cp

0x4c5c,	// (0x0009f162) tabs_4_passive_pane_cp2

0x417f,	// (0x0009e685) aid_height_text

0x38a4,	// (0x0009ddaa) mup_volume_cont_pane_ParamLimits

0x38a4,	// (0x0009ddaa) mup_volume_cont_pane

0x1158,	// (0x0009b65e) aid_size_cell_pinb

0x1162,	// (0x0009b668) aid_size_list_pinb

0x4b56,	// (0x0009f05c) mup2_volume_cont_pane_ParamLimits

0x4b56,	// (0x0009f05c) mup2_volume_cont_pane

0x4c64,	// (0x0009f16a) mup2_volume_cont_pane_g1_ParamLimits

0x4c64,	// (0x0009f16a) mup2_volume_cont_pane_g1

0x0d7a,	// (0x0009b280) aid_size_cell_touch_ParamLimits

0x0d7a,	// (0x0009b280) aid_size_cell_touch

0x103b,	// (0x0009b541) touch_pane_ParamLimits

0x103b,	// (0x0009b541) touch_pane

0x1031,	// (0x0009b537) main_rss2_pane

0xc982,	// (0x000a6e88) listscroll_rss2_pane

0xc98b,	// (0x000a6e91) rss2_navigation_pane

0xc993,	// (0x000a6e99) list_rss2_pane

0xb168,	// (0x000a566e) scroll_pane_cp22

0xc99b,	// (0x000a6ea1) rss2_navigation_pane_g1

0xc9a4,	// (0x000a6eaa) rss2_navigation_pane_g2

0xc9ac,	// (0x000a6eb2) rss2_navigation_pane_g3

0x0002,

0x03a5,	// (0x0009a8ab) rss2_navigation_pane_g

0xc9b4,	// (0x000a6eba) rss2_navigation_pane_t1

0x4c9d,	// (0x0009f1a3) rss2_list_single_pane_ParamLimits

0x4c9d,	// (0x0009f1a3) rss2_list_single_pane

0xc9c2,	// (0x000a6ec8) rss2_list_single_pane_t2

0xc9d0,	// (0x000a6ed6) rss2_list_single_pane_t3_ParamLimits

0xc9d0,	// (0x000a6ed6) rss2_list_single_pane_t3

0xc9ed,	// (0x000a6ef3) rss2_list_single_pane_t4

0x3117,	// (0x0009d61d) smil_status_pane_g1

0x43d1,	// (0x0009e8d7) main_image2_pane_ParamLimits

0x43d1,	// (0x0009e8d7) main_image2_pane

0x4869,	// (0x0009ed6f) main_camera2_pane_g9_ParamLimits

0x4869,	// (0x0009ed6f) main_camera2_pane_g9

0x48bd,	// (0x0009edc3) main_camera2_pane_t5_ParamLimits

0x48bd,	// (0x0009edc3) main_camera2_pane_t5

0x48cf,	// (0x0009edd5) main_camera2_pane_t6_ParamLimits

0x48cf,	// (0x0009edd5) main_camera2_pane_t6

0x4cd5,	// (0x0009f1db) main_image2_pane_g1_ParamLimits

0x4cd5,	// (0x0009f1db) main_image2_pane_g1

0x3f1b,	// (0x0009e421) smil2_video_pane_ParamLimits

0x3f1b,	// (0x0009e421) smil2_video_pane

0x0c83,	// (0x0009b189) aid_zoom_text_primary_cp

0x0fcc,	// (0x0009b4d2) popup_preview_fixed_window

0xaa34,	// (0x000a4f3a) im_reading_pane_g1

0x47b3,	// (0x0009ecb9) cams2_bc_adjust_pane_cp_ParamLimits

0x47b3,	// (0x0009ecb9) cams2_bc_adjust_pane_cp

0x48ff,	// (0x0009ee05) cams2_bc_adjust_pane_ParamLimits

0x48ff,	// (0x0009ee05) cams2_bc_adjust_pane

0xd89f,	// (0x000a7da5) cams2_bc_adjust_pane_g1

0x4ce1,	// (0x0009f1e7) cams2_slider_pane

0x4cea,	// (0x0009f1f0) cams2_slider_pane_g1

0x4cf3,	// (0x0009f1f9) cams2_slider_pane_g2

0x0006,

0xf5d6,	// (0x000a9adc) cams2_slider_pane_g

0x1252,	// (0x0009b758) calc_display_pane_ParamLimits

0x1270,	// (0x0009b776) calc_paper_pane_ParamLimits

0x128c,	// (0x0009b792) grid_calc_pane_ParamLimits

0x340f,	// (0x0009d915) popup_clock_digital_window_t1_ParamLimits

0xb68a,	// (0x000a5b90) main_image_pane_t1

0x1238,	// (0x0009b73e) aid_size_cell_calc_ParamLimits

0x1238,	// (0x0009b73e) aid_size_cell_calc

0x4402,	// (0x0009e908) popup_blid_sat_info2_window_ParamLimits

0x4402,	// (0x0009e908) popup_blid_sat_info2_window

0xca03,	// (0x000a6f09) aid_size_cell_blid

0xca0b,	// (0x000a6f11) bg_popup_window_pane_cp07

0xca2e,	// (0x000a6f34) grid_popup_blid_pane

0xca38,	// (0x000a6f3e) heading_pane_cp05_ParamLimits

0xca38,	// (0x000a6f3e) heading_pane_cp05

0xcb02,	// (0x000a7008) cell_popup_blid_pane_ParamLimits

0xcb02,	// (0x000a7008) cell_popup_blid_pane

0xcb28,	// (0x000a702e) cell_popup_blid_pane_g1

0xcb30,	// (0x000a7036) cell_popup_blid_pane_t1

0x4b1c,	// (0x0009f022) mup2_indicator_pane_ParamLimits

0x4b1c,	// (0x0009f022) mup2_indicator_pane

0xb410,	// (0x000a5916) mup2_visualizer_osc_pane

0xc8e4,	// (0x000a6dea) mup2_visualizer_spec_pane_ParamLimits

0xc8e4,	// (0x000a6dea) mup2_visualizer_spec_pane

0x4d0d,	// (0x0009f213) mup2_spec_half_pane

0x4d16,	// (0x0009f21c) mup2_spec_half_pane_cp

0x4d20,	// (0x0009f226) mup2_spec_bar_pane_ParamLimits

0x4d20,	// (0x0009f226) mup2_spec_bar_pane

0xc879,	// (0x000a6d7f) mup2_spec_bar_pane_g1

0xc883,	// (0x000a6d89) mup2_spec_bar_pane_g2

0x0001,

0x031f,	// (0x0009a825) mup2_spec_bar_pane_g

0x4d3f,	// (0x0009f245) mup2_osc_middle_pane

0xc895,	// (0x000a6d9b) mup2_visualizer_osc_pane_g1

0x9b76,	// (0x000a407c) popup_number_entry_window_t1_ParamLimits

0x9b89,	// (0x000a408f) popup_number_entry_window_t2_ParamLimits

0x9b9b,	// (0x000a40a1) popup_number_entry_window_t3_ParamLimits

0x1092,	// (0x0009b598) popup_number_entry_window_t5_ParamLimits

0x1092,	// (0x0009b598) popup_number_entry_window_t5

0xf0cd,	// (0x000a95d3) popup_number_entry_window_t_ParamLimits

0x9bad,	// (0x000a40b3) text_title_cp2_ParamLimits

0x3c12,	// (0x0009e118) aid_hotspot_pointer_text2_pane

0x3ca0,	// (0x0009e1a6) main_viewer_pane_g9_ParamLimits

0x3ca0,	// (0x0009e1a6) main_viewer_pane_g9

0xac6d,	// (0x000a5173) cale_month_pane_t1_ParamLimits

0xacaa,	// (0x000a51b0) bg_cale_pane_ParamLimits

0xacc2,	// (0x000a51c8) list_cale_pane_ParamLimits

0xacd3,	// (0x000a51d9) listscroll_cale_day_pane_t1

0xace5,	// (0x000a51eb) scroll_pane_cp09_ParamLimits

0x38e3,	// (0x0009dde9) main_mup_eq_pane_t1_ParamLimits

0x38e3,	// (0x0009dde9) main_mup_eq_pane_t1

0x38fd,	// (0x0009de03) main_mup_eq_pane_t2_ParamLimits

0x38fd,	// (0x0009de03) main_mup_eq_pane_t2

0x3915,	// (0x0009de1b) main_mup_eq_pane_t3_ParamLimits

0x3915,	// (0x0009de1b) main_mup_eq_pane_t3

0x392d,	// (0x0009de33) main_mup_eq_pane_t4_ParamLimits

0x392d,	// (0x0009de33) main_mup_eq_pane_t4

0x3945,	// (0x0009de4b) main_mup_eq_pane_t5_ParamLimits

0x3945,	// (0x0009de4b) main_mup_eq_pane_t5

0x395d,	// (0x0009de63) main_mup_eq_pane_t6_ParamLimits

0x395d,	// (0x0009de63) main_mup_eq_pane_t6

0x3971,	// (0x0009de77) main_mup_eq_pane_t7_ParamLimits

0x3971,	// (0x0009de77) main_mup_eq_pane_t7

0x3985,	// (0x0009de8b) main_mup_eq_pane_t8_ParamLimits

0x3985,	// (0x0009de8b) main_mup_eq_pane_t8

0x399b,	// (0x0009dea1) main_mup_eq_pane_t9_ParamLimits

0x399b,	// (0x0009dea1) main_mup_eq_pane_t9

0x39b3,	// (0x0009deb9) main_mup_eq_pane_t10_ParamLimits

0x39b3,	// (0x0009deb9) main_mup_eq_pane_t10

0x0009,

0xf45a,	// (0x000a9960) main_mup_eq_pane_t_ParamLimits

0xf45a,	// (0x000a9960) main_mup_eq_pane_t

0x3a70,	// (0x0009df76) mup_equalizer_pane_cp5_ParamLimits

0x3a86,	// (0x0009df8c) mup_equalizer_pane_cp6_ParamLimits

0x3a9e,	// (0x0009dfa4) mup_equalizer_pane_cp7_ParamLimits

0x1031,	// (0x0009b537) main_gallery_pane

0xc89e,	// (0x000a6da4) smil2_volume_pane

0xc8a6,	// (0x000a6dac) smil_status_volume_pane_g1_ParamLimits

0xc8b9,	// (0x000a6dbf) smil_status_volume_pane_g2_ParamLimits

0x4628,	// (0x0009eb2e) smil_status_volume_pane_g3_ParamLimits

0xf555,	// (0x000a9a5b) smil_status_volume_pane_g_ParamLimits

0xca0b,	// (0x000a6f11) bg_popup_window_pane_cp07_ParamLimits

0xca19,	// (0x000a6f1f) blid_firmament_pane

0x4d48,	// (0x0009f24e) aid_size_cell_gallery_ParamLimits

0x4d48,	// (0x0009f24e) aid_size_cell_gallery

0x4d56,	// (0x0009f25c) grid_gallery_pane_ParamLimits

0x4d56,	// (0x0009f25c) grid_gallery_pane

0x4d66,	// (0x0009f26c) cell_gallery_pane_ParamLimits

0x4d66,	// (0x0009f26c) cell_gallery_pane

0xcb3e,	// (0x000a7044) bg_cell_gallery_focus_pane_ParamLimits

0xcb3e,	// (0x000a7044) bg_cell_gallery_focus_pane

0xcb50,	// (0x000a7056) cell_gallery_pane_g1_ParamLimits

0xcb50,	// (0x000a7056) cell_gallery_pane_g1

0x4db4,	// (0x0009f2ba) cell_gallery_pane_g2_ParamLimits

0x4db4,	// (0x0009f2ba) cell_gallery_pane_g2

0x4dc1,	// (0x0009f2c7) cell_gallery_pane_g3_ParamLimits

0x4dc1,	// (0x0009f2c7) cell_gallery_pane_g3

0xcb5c,	// (0x000a7062) cell_gallery_pane_g4_ParamLimits

0xcb5c,	// (0x000a7062) cell_gallery_pane_g4

0x0003,

0xf5e5,	// (0x000a9aeb) cell_gallery_pane_g_ParamLimits

0xf5e5,	// (0x000a9aeb) cell_gallery_pane_g

0xcb68,	// (0x000a706e) bg_cell_gallery_focus_pane_g1

0xcb70,	// (0x000a7076) bg_cell_gallery_focus_pane_g2

0xcb78,	// (0x000a707e) bg_cell_gallery_focus_pane_g3

0xcb80,	// (0x000a7086) bg_cell_gallery_focus_pane_g4

0xcb88,	// (0x000a708e) bg_cell_gallery_focus_pane_g5

0xcb90,	// (0x000a7096) bg_cell_gallery_focus_pane_g6

0xcb98,	// (0x000a709e) bg_cell_gallery_focus_pane_g7

0xcba0,	// (0x000a70a6) bg_cell_gallery_focus_pane_g8

0x0007,

0x03db,	// (0x0009a8e1) bg_cell_gallery_focus_pane_g

0xcba8,	// (0x000a70ae) aid_firma_cardinal

0xcbbc,	// (0x000a70c2) blid_firmament_pane_t1

0xcbd3,	// (0x000a70d9) blid_firmament_pane_t2

0xcbea,	// (0x000a70f0) blid_firmament_pane_t3

0xcc01,	// (0x000a7107) blid_firmament_pane_t4

0x0003,

0x03ec,	// (0x0009a8f2) blid_firmament_pane_t

0xcc18,	// (0x000a711e) blid_sat_info_pane

0xcc28,	// (0x000a712e) blid_sat_info_pane_g1

0xcc28,	// (0x000a712e) blid_sat_info_pane_g2

0x0001,

0x03f5,	// (0x0009a8fb) blid_sat_info_pane_g

0xcc32,	// (0x000a7138) blid_sat_info_pane_t1

0xcc40,	// (0x000a7146) smil2_volume_content_pane

0xcc49,	// (0x000a714f) smil2_volume_pane_g1

0xa7fe,	// (0x000a4d04) smil2_volume_content_pane_g1

0xcc51,	// (0x000a7157) smil2_volume_content_pane_g2

0xcc5a,	// (0x000a7160) smil2_volume_content_pane_g3

0xcc63,	// (0x000a7169) smil2_volume_content_pane_g4

0xcc6c,	// (0x000a7172) smil2_volume_content_pane_g5

0xcc75,	// (0x000a717b) smil2_volume_content_pane_g6

0xcc7e,	// (0x000a7184) smil2_volume_content_pane_g7

0xcc87,	// (0x000a718d) smil2_volume_content_pane_g8

0xcc90,	// (0x000a7196) smil2_volume_content_pane_g9

0xcc99,	// (0x000a719f) smil2_volume_content_pane_g10

0x0009,

0xf5ee,	// (0x000a9af4) smil2_volume_content_pane_g

0x185f,	// (0x0009bd65) cale_week_day_heading_pane_t1_ParamLimits

0x189a,	// (0x0009bda0) cale_week_day_heading_pane_t2_ParamLimits

0x18d5,	// (0x0009bddb) cale_week_day_heading_pane_t3_ParamLimits

0x1910,	// (0x0009be16) cale_week_day_heading_pane_t4_ParamLimits

0x194b,	// (0x0009be51) cale_week_day_heading_pane_t5_ParamLimits

0x1986,	// (0x0009be8c) cale_week_day_heading_pane_t6_ParamLimits

0x19c1,	// (0x0009bec7) cale_week_day_heading_pane_t7_ParamLimits

0xf1d2,	// (0x000a96d8) cale_week_day_heading_pane_t_ParamLimits

0xa8f1,	// (0x000a4df7) bg_cale_side_pane_ParamLimits

0x19fc,	// (0x0009bf02) cale_week_time_pane_t1_ParamLimits

0x1a16,	// (0x0009bf1c) cale_week_time_pane_t2_ParamLimits

0x1a30,	// (0x0009bf36) cale_week_time_pane_t3_ParamLimits

0x1a4a,	// (0x0009bf50) cale_week_time_pane_t4_ParamLimits

0x1a64,	// (0x0009bf6a) cale_week_time_pane_t5_ParamLimits

0x1a80,	// (0x0009bf86) cale_week_time_pane_t6_ParamLimits

0x1aa2,	// (0x0009bfa8) cale_week_time_pane_t7_ParamLimits

0x1ac6,	// (0x0009bfcc) cale_week_time_pane_t8_ParamLimits

0xf1e1,	// (0x000a96e7) cale_week_time_pane_t_ParamLimits

0x1aec,	// (0x0009bff2) cell_cale_week_pane_g2_ParamLimits

0xa8f1,	// (0x000a4df7) bg_cale_side_pane_cp01_ParamLimits

0x2ee6,	// (0x0009d3ec) cale_month_week_pane_t1_ParamLimits

0x2eff,	// (0x0009d405) cale_month_week_pane_t2_ParamLimits

0x2f18,	// (0x0009d41e) cale_month_week_pane_t3_ParamLimits

0x2f31,	// (0x0009d437) cale_month_week_pane_t4_ParamLimits

0x2f4e,	// (0x0009d454) cale_month_week_pane_t5_ParamLimits

0x2f6f,	// (0x0009d475) cale_month_week_pane_t6_ParamLimits

0xf2ba,	// (0x000a97c0) cale_month_week_pane_t_ParamLimits

0x30e0,	// (0x0009d5e6) cell_cale_month_pane_g1_ParamLimits

0x1031,	// (0x0009b537) main_cale_event_viewer_pane

0x9b4c,	// (0x000a4052) listscroll_cale_event_viewer_pane

0xcca2,	// (0x000a71a8) list_cale_ev_pane

0xccaa,	// (0x000a71b0) scroll_pane_cp023

0xccb6,	// (0x000a71bc) field_cale_ev_pane_ParamLimits

0xccb6,	// (0x000a71bc) field_cale_ev_pane

0xccd2,	// (0x000a71d8) field_cale_ev_content_pane_ParamLimits

0xccd2,	// (0x000a71d8) field_cale_ev_content_pane

0xccde,	// (0x000a71e4) field_cale_ev_pane_g1_ParamLimits

0xccde,	// (0x000a71e4) field_cale_ev_pane_g1

0xccea,	// (0x000a71f0) field_cale_ev_pane_g2_ParamLimits

0xccea,	// (0x000a71f0) field_cale_ev_pane_g2

0xcd02,	// (0x000a7208) field_cale_ev_pane_g3_ParamLimits

0xcd02,	// (0x000a7208) field_cale_ev_pane_g3

0x0002,

0x040f,	// (0x0009a915) field_cale_ev_pane_g_ParamLimits

0x040f,	// (0x0009a915) field_cale_ev_pane_g

0xcd1a,	// (0x000a7220) field_cale_ev_pane_t1_ParamLimits

0xcd1a,	// (0x000a7220) field_cale_ev_pane_t1

0xcd31,	// (0x000a7237) field_cale_ev_content_pane_t1_ParamLimits

0xcd31,	// (0x000a7237) field_cale_ev_content_pane_t1

0x3b72,	// (0x0009e078) bg_button_pane_cp01

0x15fd,	// (0x0009bb03) listscroll_cale_week_pane_ParamLimits

0xa89b,	// (0x000a4da1) popup_toolbar_window_cp01

0xa8c2,	// (0x000a4dc8) listscroll_cale_week_pane_t1_ParamLimits

0x15fd,	// (0x0009bb03) listscroll_cale_day_pane_ParamLimits

0xa89b,	// (0x000a4da1) popup_toolbar_window_cp02

0xacd3,	// (0x000a51d9) listscroll_cale_day_pane_t1_ParamLimits

0x15fd,	// (0x0009bb03) main_cale_month_pane_ParamLimits

0x44ff,	// (0x0009ea05) popup_toolbar_window_cp03_ParamLimits

0x44ff,	// (0x0009ea05) popup_toolbar_window_cp03

0x3e2d,	// (0x0009e333) main_image_pane_g2_ParamLimits

0x3e2d,	// (0x0009e333) main_image_pane_g2

0x3e39,	// (0x0009e33f) main_image_pane_g3_ParamLimits

0x3e39,	// (0x0009e33f) main_image_pane_g3

0x0002,

0xf4e2,	// (0x000a99e8) main_image_pane_g_ParamLimits

0xf4e2,	// (0x000a99e8) main_image_pane_g

0xb68a,	// (0x000a5b90) main_image_pane_t1_ParamLimits

0x3e45,	// (0x0009e34b) main_image_pane_t2_ParamLimits

0x3e45,	// (0x0009e34b) main_image_pane_t2

0x3e57,	// (0x0009e35d) main_image_pane_t3_ParamLimits

0x3e57,	// (0x0009e35d) main_image_pane_t3

0x3e69,	// (0x0009e36f) main_image_pane_t4_ParamLimits

0x3e69,	// (0x0009e36f) main_image_pane_t4

0x0003,

0xf4e9,	// (0x000a99ef) main_image_pane_t_ParamLimits

0xf4e9,	// (0x000a99ef) main_image_pane_t

0x3e7b,	// (0x0009e381) popup_image_details_window_cp01

0x3e85,	// (0x0009e38b) popup_toobar_trans_pane_cp01_ParamLimits

0x3e85,	// (0x0009e38b) popup_toobar_trans_pane_cp01

0x4455,	// (0x0009e95b) popup_image_details_window_ParamLimits

0x4455,	// (0x0009e95b) popup_image_details_window

0x4463,	// (0x0009e969) popup_image_focus_window

0x47a5,	// (0x0009ecab) camera2_autofocus_pane_ParamLimits

0x47a5,	// (0x0009ecab) camera2_autofocus_pane

0x9b4c,	// (0x000a4052) bg_popup_sub_pane_cp06

0xcd4e,	// (0x000a7254) popup_image_focus_window_g1

0xcd56,	// (0x000a725c) popup_image_focus_window_g2

0xcd5e,	// (0x000a7264) popup_image_focus_window_g3

0xcd66,	// (0x000a726c) popup_image_focus_window_g4

0x0003,

0x0416,	// (0x0009a91c) popup_image_focus_window_g

0xcd6e,	// (0x000a7274) popup_image_focus_window_t1

0xcd7c,	// (0x000a7282) popup_image_focus_window_t2

0xcd8c,	// (0x000a7292) popup_image_focus_window_t3

0x0002,

0x041f,	// (0x0009a925) popup_image_focus_window_t

0xcd9a,	// (0x000a72a0) camera2_autofocus_pane_g1

0xa49e,	// (0x000a49a4) bg_tb_trans_pane_cp01

0xcda8,	// (0x000a72ae) popup_image_details_window_g1

0xcdbb,	// (0x000a72c1) popup_image_details_window_g2

0x0002,

0x0431,	// (0x0009a937) popup_image_details_window_g

0xcde4,	// (0x000a72ea) popup_image_details_window_t1

0xcdf6,	// (0x000a72fc) popup_image_details_window_t2

0xce0f,	// (0x000a7315) popup_image_details_window_t3

0xce23,	// (0x000a7329) popup_image_details_window_t4

0xce3e,	// (0x000a7344) popup_image_details_window_t5

0x0004,

0x0438,	// (0x0009a93e) popup_image_details_window_t

0xa760,	// (0x000a4c66) bg_calc_paper_pane_ParamLimits

0x1031,	// (0x0009b537) grid_highlight_pane_cp013

0x1389,	// (0x0009b88f) list_calc_pane_ParamLimits

0x139b,	// (0x0009b8a1) scroll_pane_cp024

0xa774,	// (0x000a4c7a) bg_calc_display_pane_ParamLimits

0x13a3,	// (0x0009b8a9) calc_display_pane_t1_ParamLimits

0x13b8,	// (0x0009b8be) calc_display_pane_t2_ParamLimits

0x13cd,	// (0x0009b8d3) calc_display_pane_t3_ParamLimits

0xf154,	// (0x000a965a) calc_display_pane_t_ParamLimits

0x14ae,	// (0x0009b9b4) cell_calc_pane_g2

0x0001,

0xf171,	// (0x000a9677) cell_calc_pane_g

0x14b7,	// (0x0009b9bd) cell_calc_pane_t1

0xa7d3,	// (0x000a4cd9) grid_highlight_pane_cp02_ParamLimits

0xa7e9,	// (0x000a4cef) toolbar_button_pane_cp01_ParamLimits

0xa7e9,	// (0x000a4cef) toolbar_button_pane_cp01

0xb6cf,	// (0x000a5bd5) temp_image_control_pane_ParamLimits

0xb6cf,	// (0x000a5bd5) temp_image_control_pane

0x43d1,	// (0x0009e8d7) main_mp3_pane

0xce58,	// (0x000a735e) temp_image_control_pane_g1_ParamLimits

0xce58,	// (0x000a735e) temp_image_control_pane_g1

0xce66,	// (0x000a736c) temp_image_control_pane_g2_ParamLimits

0xce66,	// (0x000a736c) temp_image_control_pane_g2

0xce78,	// (0x000a737e) temp_image_control_pane_g3_ParamLimits

0xce78,	// (0x000a737e) temp_image_control_pane_g3

0x4dfe,	// (0x0009f304) temp_image_control_pane_g4_ParamLimits

0x4dfe,	// (0x0009f304) temp_image_control_pane_g4

0x0003,

0xf60e,	// (0x000a9b14) temp_image_control_pane_g_ParamLimits

0xf60e,	// (0x000a9b14) temp_image_control_pane_g

0xce58,	// (0x000a735e) main_mp3_pane_g1

0x4e0f,	// (0x0009f315) main_mp3_pane_g2

0x0007,

0xf617,	// (0x000a9b1d) main_mp3_pane_g

0xcebb,	// (0x000a73c1) main_mp3_pane_t1

0xa943,	// (0x000a4e49) main_camera_pane_g8_ParamLimits

0xa943,	// (0x000a4e49) main_camera_pane_g8

0x1d89,	// (0x0009c28f) main_video_pane_g7_ParamLimits

0x1d89,	// (0x0009c28f) main_video_pane_g7

0x48ed,	// (0x0009edf3) main_camera2_pane_t7_ParamLimits

0x48ed,	// (0x0009edf3) main_camera2_pane_t7

0xaa8b,	// (0x000a4f91) scroll_pane_cp025_ParamLimits

0xaa8b,	// (0x000a4f91) scroll_pane_cp025

0xaa9f,	// (0x000a4fa5) scroll_pane_cp026_ParamLimits

0xaa9f,	// (0x000a4fa5) scroll_pane_cp026

0xaaae,	// (0x000a4fb4) wml_content_pane_ParamLimits

0x1031,	// (0x0009b537) main_touch_calib_pane

0x4eb3,	// (0x0009f3b9) main_touch_calib_pane_g1

0x4ebf,	// (0x0009f3c5) main_touch_calib_pane_g2

0x4ecb,	// (0x0009f3d1) main_touch_calib_pane_g3

0x4ed7,	// (0x0009f3dd) main_touch_calib_pane_g4

0x0003,

0xf635,	// (0x000a9b3b) main_touch_calib_pane_g

0x4ee3,	// (0x0009f3e9) main_touch_calib_pane_t1

0x4efc,	// (0x0009f402) main_touch_calib_pane_t2

0x0004,

0xf63e,	// (0x000a9b44) main_touch_calib_pane_t

0xb246,	// (0x000a574c) mup_progress_pane_cp02

0xb27b,	// (0x000a5781) navi_pane_g1

0xb39b,	// (0x000a58a1) navi_pane_mp_t3

0x43d1,	// (0x0009e8d7) main_mp3_pane_ParamLimits

0x453c,	// (0x0009ea42) navi_pane_ParamLimits

0xce58,	// (0x000a735e) main_mp3_pane_g1_ParamLimits

0x4e0f,	// (0x0009f315) main_mp3_pane_g2_ParamLimits

0x4e1b,	// (0x0009f321) main_mp3_pane_g3_ParamLimits

0x4e1b,	// (0x0009f321) main_mp3_pane_g3

0x4e27,	// (0x0009f32d) main_mp3_pane_g4_ParamLimits

0x4e27,	// (0x0009f32d) main_mp3_pane_g4

0xce88,	// (0x000a738e) main_mp3_pane_g5_ParamLimits

0xce88,	// (0x000a738e) main_mp3_pane_g5

0xce96,	// (0x000a739c) main_mp3_pane_g6_ParamLimits

0xce96,	// (0x000a739c) main_mp3_pane_g6

0xcea3,	// (0x000a73a9) main_mp3_pane_g7_ParamLimits

0xcea3,	// (0x000a73a9) main_mp3_pane_g7

0xceaf,	// (0x000a73b5) main_mp3_pane_g8_ParamLimits

0xceaf,	// (0x000a73b5) main_mp3_pane_g8

0xf617,	// (0x000a9b1d) main_mp3_pane_g_ParamLimits

0x4e33,	// (0x0009f339) main_mp3_pane_t2

0x4e43,	// (0x0009f349) main_mp3_pane_t3

0xcec9,	// (0x000a73cf) main_mp3_pane_t4

0xced7,	// (0x000a73dd) main_mp3_pane_t5

0x0005,

0xf628,	// (0x000a9b2e) main_mp3_pane_t

0xcee5,	// (0x000a73eb) mup_progress_pane_cp01

0x0c83,	// (0x0009b189) aid_zoom_text_secondary2

0xcca2,	// (0x000a71a8) list_cale_ev2_pane

0xccaa,	// (0x000a71b0) scroll_pane_cp023_ParamLimits

0x4f57,	// (0x0009f45d) field_cale_ev2_pane_ParamLimits

0x4f57,	// (0x0009f45d) field_cale_ev2_pane

0xa4ac,	// (0x000a49b2) field_cale_ev2_pane_g1_ParamLimits

0xa4ac,	// (0x000a49b2) field_cale_ev2_pane_g1

0xa4b8,	// (0x000a49be) field_cale_ev2_pane_g2_ParamLimits

0xa4b8,	// (0x000a49be) field_cale_ev2_pane_g2

0xa4d0,	// (0x000a49d6) field_cale_ev2_pane_g3_ParamLimits

0xa4d0,	// (0x000a49d6) field_cale_ev2_pane_g3

0x0003,

0xf649,	// (0x000a9b4f) field_cale_ev2_pane_g_ParamLimits

0xf649,	// (0x000a9b4f) field_cale_ev2_pane_g

0xa007,	// (0x000a450d) field_cale_ev2_pane_t1_ParamLimits

0xa007,	// (0x000a450d) field_cale_ev2_pane_t1

0xa01e,	// (0x000a4524) field_cale_ev2_pane_t2_ParamLimits

0xa01e,	// (0x000a4524) field_cale_ev2_pane_t2

0x0001,

0xf652,	// (0x000a9b58) field_cale_ev2_pane_t_ParamLimits

0xf652,	// (0x000a9b58) field_cale_ev2_pane_t

0x3d08,	// (0x0009e20e) main_postcard_pane_g5_ParamLimits

0x3d08,	// (0x0009e20e) main_postcard_pane_g5

0x3d16,	// (0x0009e21c) main_postcard_pane_g6_ParamLimits

0x3d16,	// (0x0009e21c) main_postcard_pane_g6

0x1bd3,	// (0x0009c0d9) camera2_autofocus_pane_cp_ParamLimits

0x1bd3,	// (0x0009c0d9) camera2_autofocus_pane_cp

0x43d1,	// (0x0009e8d7) main_mup3_pane

0x4fa5,	// (0x0009f4ab) main_mup3_pane_g1_ParamLimits

0x4fa5,	// (0x0009f4ab) main_mup3_pane_g1

0x4fc6,	// (0x0009f4cc) main_mup3_pane_g2_ParamLimits

0x4fc6,	// (0x0009f4cc) main_mup3_pane_g2

0x5042,	// (0x0009f548) main_mup3_pane_g3_ParamLimits

0x5042,	// (0x0009f548) main_mup3_pane_g3

0x5085,	// (0x0009f58b) main_mup3_pane_g4_ParamLimits

0x5085,	// (0x0009f58b) main_mup3_pane_g4

0x50c8,	// (0x0009f5ce) main_mup3_pane_g5_ParamLimits

0x50c8,	// (0x0009f5ce) main_mup3_pane_g5

0x510d,	// (0x0009f613) main_mup3_pane_g6_ParamLimits

0x510d,	// (0x0009f613) main_mup3_pane_g6

0xceed,	// (0x000a73f3) main_mup3_pane_g7_ParamLimits

0xceed,	// (0x000a73f3) main_mup3_pane_g7

0x0007,

0xf662,	// (0x000a9b68) main_mup3_pane_g_ParamLimits

0xf662,	// (0x000a9b68) main_mup3_pane_g

0x5183,	// (0x0009f689) main_mup3_pane_t1_ParamLimits

0x5183,	// (0x0009f689) main_mup3_pane_t1

0x51f2,	// (0x0009f6f8) main_mup3_pane_t2_ParamLimits

0x51f2,	// (0x0009f6f8) main_mup3_pane_t2

0x52bb,	// (0x0009f7c1) main_mup3_pane_t4_ParamLimits

0x52bb,	// (0x0009f7c1) main_mup3_pane_t4

0x5309,	// (0x0009f80f) main_mup3_pane_t5_ParamLimits

0x5309,	// (0x0009f80f) main_mup3_pane_t5

0x53b9,	// (0x0009f8bf) main_mup3_pane_t6_ParamLimits

0x53b9,	// (0x0009f8bf) main_mup3_pane_t6

0x0005,

0xf673,	// (0x000a9b79) main_mup3_pane_t_ParamLimits

0xf673,	// (0x000a9b79) main_mup3_pane_t

0x5465,	// (0x0009f96b) mup3_progress_pane_ParamLimits

0x5465,	// (0x0009f96b) mup3_progress_pane

0x54d9,	// (0x0009f9df) popup_mup3_control_window_ParamLimits

0x54d9,	// (0x0009f9df) popup_mup3_control_window

0xcefb,	// (0x000a7401) popup_mup3_text_window

0x54f2,	// (0x0009f9f8) mup3_progress_pane_t1

0x5511,	// (0x0009fa17) mup3_progress_pane_t2

0xcf03,	// (0x000a7409) mup3_progress_pane_t3

0x0002,

0xf680,	// (0x000a9b86) mup3_progress_pane_t

0xcf20,	// (0x000a7426) mup_progress_pane_cp03

0x9b4c,	// (0x000a4052) bg_tb_trans_pane_cp04

0x5530,	// (0x0009fa36) mup3_volume_pane

0x5538,	// (0x0009fa3e) popup_mup3_control_window_g1

0x5541,	// (0x0009fa47) mup3_volume_pane_g1

0x554a,	// (0x0009fa50) mup3_volume_pane_g2

0x5553,	// (0x0009fa59) mup3_volume_pane_g3

0x0002,

0xf687,	// (0x000a9b8d) mup3_volume_pane_g

0x9b4c,	// (0x000a4052) bg_tb_trans_pane_cp03

0xcf30,	// (0x000a7436) popup_mup3_text_window_g1

0xcf38,	// (0x000a743e) popup_mup3_text_window_t1

0xa7bc,	// (0x000a4cc2) list_calc_item_pane_g1_ParamLimits

0xc979,	// (0x000a6e7f) mup_volume_pane_cp_g1

0x4f15,	// (0x0009f41b) main_touch_calib_pane_t3

0x4f2b,	// (0x0009f431) main_touch_calib_pane_t4

0x4f41,	// (0x0009f447) main_touch_calib_pane_t5

0x0d66,	// (0x0009b26c) aid_cell_size_toolbar2

0x0d6e,	// (0x0009b274) aid_popup3_width_pane

0x0dae,	// (0x0009b2b4) aid_zoom_text_msg_primary

0x1ba0,	// (0x0009c0a6) vorec_t7

0xa780,	// (0x000a4c86) bg_calc_paper_pane_g1_ParamLimits

0xa78c,	// (0x000a4c92) bg_calc_paper_pane_g2_ParamLimits

0xa798,	// (0x000a4c9e) bg_calc_paper_pane_g3_ParamLimits

0xa7a4,	// (0x000a4caa) bg_calc_paper_pane_g4_ParamLimits

0xa7b0,	// (0x000a4cb6) bg_calc_paper_pane_g5_ParamLimits

0x140c,	// (0x0009b912) bg_calc_paper_pane_g6_ParamLimits

0x141d,	// (0x0009b923) bg_calc_paper_pane_g7_ParamLimits

0x142e,	// (0x0009b934) bg_calc_paper_pane_g8_ParamLimits

0xf15b,	// (0x000a9661) bg_calc_paper_pane_g_ParamLimits

0x143f,	// (0x0009b945) calc_bg_paper_pane_g9_ParamLimits

0x1cba,	// (0x0009c1c0) image_qvga_pane_ParamLimits

0x1cba,	// (0x0009c1c0) image_qvga_pane

0xa690,	// (0x000a4b96) bg_popup_sub_pane_cp04_ParamLimits

0xb606,	// (0x000a5b0c) popup_mup_playback_window_g1_ParamLimits

0xb612,	// (0x000a5b18) popup_mup_playback_window_t1_ParamLimits

0xb627,	// (0x000a5b2d) popup_mup_playback_window_t2_ParamLimits

0x01fb,	// (0x0009a701) popup_mup_playback_window_t_ParamLimits

0x4a1c,	// (0x0009ef22) main_mup2_pane_g3_ParamLimits

0x4a1c,	// (0x0009ef22) main_mup2_pane_g3

0x2080,	// (0x0009c586) popup_toolbar_window_cp04

0xba1c,	// (0x000a5f22) popup_call2_audio_second_window_g3_ParamLimits

0xba1c,	// (0x000a5f22) popup_call2_audio_second_window_g3

0xbe26,	// (0x000a632c) popup_call2_audio_first_window_g4_ParamLimits

0xbe26,	// (0x000a632c) popup_call2_audio_first_window_g4

0xc4b1,	// (0x000a69b7) popup_call2_audio_in_window_g4_ParamLimits

0xc4b1,	// (0x000a69b7) popup_call2_audio_in_window_g4

0x3e20,	// (0x0009e326) aid_area_sk_bg_cut_ParamLimits

0x3e20,	// (0x0009e326) aid_area_sk_bg_cut

0xb63c,	// (0x000a5b42) aid_area_sk_bg_cut_2_ParamLimits

0xb63c,	// (0x000a5b42) aid_area_sk_bg_cut_2

0x4da4,	// (0x0009f2aa) aid_placing_details_win

0x4dac,	// (0x0009f2b2) aid_placing_details_win_2

0xcd9a,	// (0x000a72a0) camera2_autofocus_pane_g1_ParamLimits

0x0fbd,	// (0x0009b4c3) popup_fixed_preview_cale_window_ParamLimits

0x0fbd,	// (0x0009b4c3) popup_fixed_preview_cale_window

0xb421,	// (0x000a5927) navi_slider_pane_g3

0xb42a,	// (0x000a5930) navi_slider_pane_g4

0xb433,	// (0x000a5939) navi_slider_pane_g5

0xb421,	// (0x000a5927) navi_slider_pane_g6

0x3677,	// (0x0009db7d) navi_slider_pane_g7

0xb546,	// (0x000a5a4c) mup_scale_pane_g3

0xb54f,	// (0x000a5a55) mup_scale_pane_g4

0xb558,	// (0x000a5a5e) mup_scale_pane_g5

0x3ab6,	// (0x0009dfbc) mup_scale_pane_g6

0x3abf,	// (0x0009dfc5) mup_scale_pane_g7

0xb421,	// (0x000a5927) cams2_slider_pane_g3

0xc9fb,	// (0x000a6f01) cams2_slider_pane_g4

0x4cfc,	// (0x0009f202) cams2_slider_pane_g5

0xb421,	// (0x000a5927) cams2_slider_pane_g6

0x4d04,	// (0x0009f20a) cams2_slider_pane_g7

0xcc28,	// (0x000a712e) camera2_autofocus_pane_cp_g1

0xc812,	// (0x000a6d18) bg_popup_preview_window_pane_cp02_ParamLimits

0xc812,	// (0x000a6d18) bg_popup_preview_window_pane_cp02

0xcf46,	// (0x000a744c) list_fp_cale_pane_ParamLimits

0xcf46,	// (0x000a744c) list_fp_cale_pane

0xcf52,	// (0x000a7458) popup_fixed_preview_cale_window_t1_ParamLimits

0xcf52,	// (0x000a7458) popup_fixed_preview_cale_window_t1

0x555c,	// (0x0009fa62) popup_fixed_preview_cale_window_t2_ParamLimits

0x555c,	// (0x0009fa62) popup_fixed_preview_cale_window_t2

0x5571,	// (0x0009fa77) popup_fixed_preview_cale_window_t3_ParamLimits

0x5571,	// (0x0009fa77) popup_fixed_preview_cale_window_t3

0x0002,

0xf68e,	// (0x000a9b94) popup_fixed_preview_cale_window_t_ParamLimits

0xf68e,	// (0x000a9b94) popup_fixed_preview_cale_window_t

0x5586,	// (0x0009fa8c) list_single_fp_cale_pane_ParamLimits

0x5586,	// (0x0009fa8c) list_single_fp_cale_pane

0xcf70,	// (0x000a7476) list_single_fp_cale_pane_g1_ParamLimits

0xcf70,	// (0x000a7476) list_single_fp_cale_pane_g1

0xcf7c,	// (0x000a7482) list_single_fp_cale_pane_g2_ParamLimits

0xcf7c,	// (0x000a7482) list_single_fp_cale_pane_g2

0x0002,

0x04ca,	// (0x0009a9d0) list_single_fp_cale_pane_g_ParamLimits

0x04ca,	// (0x0009a9d0) list_single_fp_cale_pane_g

0xcf95,	// (0x000a749b) list_single_fp_cale_pane_t1_ParamLimits

0xcf95,	// (0x000a749b) list_single_fp_cale_pane_t1

0xcfa7,	// (0x000a74ad) list_single_fp_cale_pane_t2_ParamLimits

0xcfa7,	// (0x000a74ad) list_single_fp_cale_pane_t2

0x0001,

0x04d1,	// (0x0009a9d7) list_single_fp_cale_pane_t_ParamLimits

0x04d1,	// (0x0009a9d7) list_single_fp_cale_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0x1031,	// (0x0009b537) main_dialer_pane

0x559a,	// (0x0009faa0) aid_cell_size_keypad

0x55a4,	// (0x0009faaa) dialer_ne_pane

0x55ae,	// (0x0009fab4) grid_dialer_command_1_pane

0x55b6,	// (0x0009fabc) grid_dialer_command_2_pane

0x55be,	// (0x0009fac4) grid_dialer_keypad_pane

0x55d2,	// (0x0009fad8) bg_popup_call_pane_cp06_ParamLimits

0x55d2,	// (0x0009fad8) bg_popup_call_pane_cp06

0x55de,	// (0x0009fae4) dialer_ne_clear_pane_ParamLimits

0x55de,	// (0x0009fae4) dialer_ne_clear_pane

0xcfda,	// (0x000a74e0) dialer_ne_pane_g1

0xcfe2,	// (0x000a74e8) dialer_ne_pane_t1_ParamLimits

0xcfe2,	// (0x000a74e8) dialer_ne_pane_t1

0x55ea,	// (0x0009faf0) dialer_ne_pane_t2_ParamLimits

0x55ea,	// (0x0009faf0) dialer_ne_pane_t2

0x5607,	// (0x0009fb0d) dialer_ne_pane_t3_ParamLimits

0x5607,	// (0x0009fb0d) dialer_ne_pane_t3

0x0002,

0xf695,	// (0x000a9b9b) dialer_ne_pane_t_ParamLimits

0xf695,	// (0x000a9b9b) dialer_ne_pane_t

0x562b,	// (0x0009fb31) dialer_ne_pane_t3_copy1_ParamLimits

0x562b,	// (0x0009fb31) dialer_ne_pane_t3_copy1

0x564f,	// (0x0009fb55) cell_dialer_keypad_pane_ParamLimits

0x564f,	// (0x0009fb55) cell_dialer_keypad_pane

0x5666,	// (0x0009fb6c) cell_dialer_command_1_pane_ParamLimits

0x5666,	// (0x0009fb6c) cell_dialer_command_1_pane

0x567c,	// (0x0009fb82) cell_dialer_command_2_pane_ParamLimits

0x567c,	// (0x0009fb82) cell_dialer_command_2_pane

0xcff4,	// (0x000a74fa) bg_button_pane_cp02_ParamLimits

0xcff4,	// (0x000a74fa) bg_button_pane_cp02

0x568b,	// (0x0009fb91) cell_dialer_keypad_pane_g1_ParamLimits

0x568b,	// (0x0009fb91) cell_dialer_keypad_pane_g1

0xcff4,	// (0x000a74fa) bg_button_pane_cp03_ParamLimits

0xcff4,	// (0x000a74fa) bg_button_pane_cp03

0x56a0,	// (0x0009fba6) cell_dialer_command_1_pane_g1_ParamLimits

0x56a0,	// (0x0009fba6) cell_dialer_command_1_pane_g1

0xd000,	// (0x000a7506) bg_button_pane_cp04

0x56b4,	// (0x0009fbba) cell_dialer_command_2_pane_g1

0xb410,	// (0x000a5916) bg_button_pane_cp06

0xd008,	// (0x000a750e) dialer_ne_clear_pane_g1

0xb287,	// (0x000a578d) navi_pane_g2

0xb2b5,	// (0x000a57bb) navi_pane_g3

0x0002,

0xf3ea,	// (0x000a98f0) navi_pane_g

0xb3a9,	// (0x000a58af) navi_pane_mv_g2

0xb3d0,	// (0x000a58d6) navi_pane_mv_g5

0x3642,	// (0x0009db48) navi_pane_mv_t1

0xa774,	// (0x000a4c7a) main_clock2_pane

0x56f4,	// (0x0009fbfa) main_clock2_list_pane_ParamLimits

0x56f4,	// (0x0009fbfa) main_clock2_list_pane

0x571e,	// (0x0009fc24) main_clock2_pane_t1_ParamLimits

0x571e,	// (0x0009fc24) main_clock2_pane_t1

0x5742,	// (0x0009fc48) main_clock2_pane_t2_ParamLimits

0x5742,	// (0x0009fc48) main_clock2_pane_t2

0x0004,

0xf69c,	// (0x000a9ba2) main_clock2_pane_t_ParamLimits

0xf69c,	// (0x000a9ba2) main_clock2_pane_t

0x579d,	// (0x0009fca3) popup_clock_analogue_window_cp03_ParamLimits

0x579d,	// (0x0009fca3) popup_clock_analogue_window_cp03

0x57bb,	// (0x0009fcc1) popup_clock_digital_window_cp02_ParamLimits

0x57bb,	// (0x0009fcc1) popup_clock_digital_window_cp02

0x582a,	// (0x0009fd30) main_clock2_list_single_pane_ParamLimits

0x582a,	// (0x0009fd30) main_clock2_list_single_pane

0xb410,	// (0x000a5916) list_highlight_pane_cp05

0xd026,	// (0x000a752c) main_clock2_list_single_pane_t1

0x2080,	// (0x0009c586) popup_toolbar_window_cp04_ParamLimits

0x4dce,	// (0x0009f2d4) camera2_autofocus_pane_g2_ParamLimits

0x4dce,	// (0x0009f2d4) camera2_autofocus_pane_g2

0x4dda,	// (0x0009f2e0) camera2_autofocus_pane_g3_ParamLimits

0x4dda,	// (0x0009f2e0) camera2_autofocus_pane_g3

0x4de6,	// (0x0009f2ec) camera2_autofocus_pane_g4_ParamLimits

0x4de6,	// (0x0009f2ec) camera2_autofocus_pane_g4

0x4df2,	// (0x0009f2f8) camera2_autofocus_pane_g5_ParamLimits

0x4df2,	// (0x0009f2f8) camera2_autofocus_pane_g5

0x0004,

0xf603,	// (0x000a9b09) camera2_autofocus_pane_g_ParamLimits

0xf603,	// (0x000a9b09) camera2_autofocus_pane_g

0x4f85,	// (0x0009f48b) camera2_autofocus_pane_cp_g2

0x4f8d,	// (0x0009f493) camera2_autofocus_pane_cp_g3

0x4f95,	// (0x0009f49b) camera2_autofocus_pane_cp_g4

0x4f9d,	// (0x0009f4a3) camera2_autofocus_pane_cp_g5

0x0004,

0xf657,	// (0x000a9b5d) camera2_autofocus_pane_cp_g

0x55ca,	// (0x0009fad0) popup_dialer_spcha_window

0x9b4c,	// (0x000a4052) bg_popup_sub_pane_cp07

0xd034,	// (0x000a753a) list_spcha_pane

0xd03c,	// (0x000a7542) list_single_spcha_pane_ParamLimits

0xd03c,	// (0x000a7542) list_single_spcha_pane

0x9b4c,	// (0x000a4052) list_highlight_pane_cp06

0xd04d,	// (0x000a7553) list_single_spcha_pane_t1

0xc25b,	// (0x000a6761) popup_call2_audio_out_window_g4_ParamLimits

0xc25b,	// (0x000a6761) popup_call2_audio_out_window_g4

0x1031,	// (0x0009b537) main_imed2_pane

0x446b,	// (0x0009e971) popup_imed_adjust2_window

0x447e,	// (0x0009e984) popup_imed_trans_window_ParamLimits

0x447e,	// (0x0009e984) popup_imed_trans_window

0xca64,	// (0x000a6f6a) popup_blid_sat_info2_window_t1

0xca72,	// (0x000a6f78) popup_blid_sat_info2_window_t2

0x000a,

0x03bb,	// (0x0009a8c1) popup_blid_sat_info2_window_t

0x58d4,	// (0x0009fdda) aid_size_cell_colour_35

0x58ee,	// (0x0009fdf4) aid_size_cell_colour_112

0x5905,	// (0x0009fe0b) aid_size_cell_effect

0xa49e,	// (0x000a49a4) bg_tb_trans_pane_cp02

0xb2e0,	// (0x000a57e6) heading_imed_pane

0x591f,	// (0x0009fe25) listscroll_imed_pane

0xd05b,	// (0x000a7561) heading_imed_pane_g1

0xd063,	// (0x000a7569) heading_imed_pane_t1

0xd071,	// (0x000a7577) grid_imed_colour_35_pane_ParamLimits

0xd071,	// (0x000a7577) grid_imed_colour_35_pane

0x592b,	// (0x0009fe31) grid_imed_effect_pane

0xd089,	// (0x000a758f) list_imed_aspect_pane

0x593b,	// (0x0009fe41) scroll_pane_cp027_ParamLimits

0x593b,	// (0x0009fe41) scroll_pane_cp027

0x5947,	// (0x0009fe4d) cell_imed_effect_pane_ParamLimits

0x5947,	// (0x0009fe4d) cell_imed_effect_pane

0xd091,	// (0x000a7597) cell_imed_colour_pane_ParamLimits

0xd091,	// (0x000a7597) cell_imed_colour_pane

0xd0d3,	// (0x000a75d9) cell_imed_colour_pane_g1_ParamLimits

0xd0d3,	// (0x000a75d9) cell_imed_colour_pane_g1

0xd0e4,	// (0x000a75ea) hgihlgiht_grid_pane_cp016_ParamLimits

0xd0e4,	// (0x000a75ea) hgihlgiht_grid_pane_cp016

0x595f,	// (0x0009fe65) cell_imed_effect_pane_g1

0x5967,	// (0x0009fe6d) grid_highlight_pane_cp017

0xd0f5,	// (0x000a75fb) list_imed_single_pane_ParamLimits

0xd0f5,	// (0x000a75fb) list_imed_single_pane

0x9b4c,	// (0x000a4052) list_highlight_pane_cp07

0xd10b,	// (0x000a7611) list_imed_aspect_pane_comp1_t1

0xc81e,	// (0x000a6d24) bg_tb_trans_pane_cp05

0xd12d,	// (0x000a7633) popup_imed_adjust2_window_g1

0xd154,	// (0x000a765a) popup_imed_adjust2_window_t1

0xd16c,	// (0x000a7672) slider_imed_adjust_pane

0xd180,	// (0x000a7686) slider_imed_adjust_pane_g1

0xd190,	// (0x000a7696) slider_imed_adjust_pane_g2

0xd1a0,	// (0x000a76a6) slider_imed_adjust_pane_g3

0xd1b1,	// (0x000a76b7) slider_imed_adjust_pane_g4

0x0003,

0x04fa,	// (0x0009aa00) slider_imed_adjust_pane_g

0x5970,	// (0x0009fe76) aid_size_cell_clipart2

0x597c,	// (0x0009fe82) grid_imed_clipart_pane

0xd1c2,	// (0x000a76c8) scroll_pane_cp031

0x5986,	// (0x0009fe8c) cell_imed_clipart_pane_ParamLimits

0x5986,	// (0x0009fe8c) cell_imed_clipart_pane

0x59ad,	// (0x0009feb3) cell_imed_clipart_pane_g1

0x9b4c,	// (0x000a4052) grid_highlight_pane_cp014

0x5700,	// (0x0009fc06) main_clock2_pane_g1_ParamLimits

0x5700,	// (0x0009fc06) main_clock2_pane_g1

0x57d5,	// (0x0009fcdb) aid_call2_pane_cp10

0x57e7,	// (0x0009fced) aid_call_pane_cp10

0xb1e6,	// (0x000a56ec) popup_clock_analogue_window_cp10_g1

0xb1e6,	// (0x000a56ec) popup_clock_analogue_window_cp10_g2

0x57f9,	// (0x0009fcff) popup_clock_analogue_window_cp10_g3

0x57f9,	// (0x0009fcff) popup_clock_analogue_window_cp10_g4

0xb1e6,	// (0x000a56ec) popup_clock_analogue_window_cp10_g5

0x0004,

0xf6a7,	// (0x000a9bad) popup_clock_analogue_window_cp10_g

0x580b,	// (0x0009fd11) popup_clock_analogue_window_cp10_t1

0x583c,	// (0x0009fd42) clock_digital_number_pane_cp10_ParamLimits

0x583c,	// (0x0009fd42) clock_digital_number_pane_cp10

0x5854,	// (0x0009fd5a) clock_digital_number_pane_cp11_ParamLimits

0x5854,	// (0x0009fd5a) clock_digital_number_pane_cp11

0x586c,	// (0x0009fd72) clock_digital_number_pane_cp12_ParamLimits

0x586c,	// (0x0009fd72) clock_digital_number_pane_cp12

0x5884,	// (0x0009fd8a) clock_digital_number_pane_cp13_ParamLimits

0x5884,	// (0x0009fd8a) clock_digital_number_pane_cp13

0x589c,	// (0x0009fda2) clock_digital_separator_pane_cp10_ParamLimits

0x589c,	// (0x0009fda2) clock_digital_separator_pane_cp10

0x58b4,	// (0x0009fdba) popup_clock_digital_window_cp02_t1_ParamLimits

0x58b4,	// (0x0009fdba) popup_clock_digital_window_cp02_t1

0xa688,	// (0x000a4b8e) clock_digital_number_pane_cp10_g1

0xa688,	// (0x000a4b8e) clock_digital_number_pane_cp10_g2

0x0001,

0xf6b2,	// (0x000a9bb8) clock_digital_number_pane_cp10_g

0xa688,	// (0x000a4b8e) clock_digital_separator_pane_cp10_g1

0xa688,	// (0x000a4b8e) clock_digital_separator_pane_g2_cp10

0xb3d8,	// (0x000a58de) navi_pane_vded_g4

0xb3e1,	// (0x000a58e7) navi_pane_vded_g5

0xb3ea,	// (0x000a58f0) navi_pane_vded_t1

0x1031,	// (0x0009b537) main_vded_pane

0x59b6,	// (0x0009febc) main_vded_pane_g1

0x59c2,	// (0x0009fec8) main_vded_pane_g2

0x59cc,	// (0x0009fed2) main_vded_pane_g3

0x0002,

0xf6b7,	// (0x000a9bbd) main_vded_pane_g

0x59d6,	// (0x0009fedc) main_vded_pane_t1

0x59e4,	// (0x0009feea) main_vded_pane_t2

0x0001,

0xf6be,	// (0x000a9bc4) main_vded_pane_t

0x59f2,	// (0x0009fef8) vded_slider_pane

0x59fc,	// (0x0009ff02) vded_video_pane

0xd1ca,	// (0x000a76d0) vded_video_pane_g1

0x5a06,	// (0x0009ff0c) vded_video_pane_g2

0xcc28,	// (0x000a712e) vded_video_pane_g3

0x0002,

0xf6c3,	// (0x000a9bc9) vded_video_pane_g

0xd1d4,	// (0x000a76da) vded_slider_pane_g1

0xd1dd,	// (0x000a76e3) vded_slider_pane_g2

0xd1e6,	// (0x000a76ec) vded_slider_pane_g3

0xd1ef,	// (0x000a76f5) vded_slider_pane_g4

0xd1f8,	// (0x000a76fe) vded_slider_pane_g5

0x0004,

0x051b,	// (0x0009aa21) vded_slider_pane_g

0x54cb,	// (0x0009f9d1) mup3_rocker_pane_ParamLimits

0x54cb,	// (0x0009f9d1) mup3_rocker_pane

0x5a0f,	// (0x0009ff15) mup3_control_keys_pane_g1

0x5a17,	// (0x0009ff1d) mup3_control_keys_pane_g2

0x5a1f,	// (0x0009ff25) mup3_control_keys_pane_g3

0x5a27,	// (0x0009ff2d) mup3_control_keys_pane_g4

0x0003,

0xf6ca,	// (0x000a9bd0) mup3_control_keys_pane_g

0x0fe5,	// (0x0009b4eb) popup_toolbar2_fixed_window_cp01_ParamLimits

0x0fe5,	// (0x0009b4eb) popup_toolbar2_fixed_window_cp01

0x54e5,	// (0x0009f9eb) popup_toolbar2_fixed_window_cp02_ParamLimits

0x54e5,	// (0x0009f9eb) popup_toolbar2_fixed_window_cp02

0xbb8e,	// (0x000a6094) popup_call2_audio_second_window_t4_ParamLimits

0xbb8e,	// (0x000a6094) popup_call2_audio_second_window_t4

0xc0c8,	// (0x000a65ce) popup_call2_audio_first_window_t6_ParamLimits

0xc0c8,	// (0x000a65ce) popup_call2_audio_first_window_t6

0xc35e,	// (0x000a6864) popup_call2_audio_out_window_t6_ParamLimits

0xc35e,	// (0x000a6864) popup_call2_audio_out_window_t6

0x1031,	// (0x0009b537) main_vitu_pane

0x5a37,	// (0x0009ff3d) aid_size_cell_itu_ParamLimits

0x5a37,	// (0x0009ff3d) aid_size_cell_itu

0xf051,	// (0x000a9557) bg_popup_window_pane_cp08_ParamLimits

0xf051,	// (0x000a9557) bg_popup_window_pane_cp08

0x5a45,	// (0x0009ff4b) field_vitu_entry_pane_ParamLimits

0x5a45,	// (0x0009ff4b) field_vitu_entry_pane

0x5a54,	// (0x0009ff5a) grid_vitu_function_pane_ParamLimits

0x5a54,	// (0x0009ff5a) grid_vitu_function_pane

0x5a64,	// (0x0009ff6a) grid_vitu_itu_pane_ParamLimits

0x5a64,	// (0x0009ff6a) grid_vitu_itu_pane

0x5a74,	// (0x0009ff7a) cell_vitu_itu_pane_ParamLimits

0x5a74,	// (0x0009ff7a) cell_vitu_itu_pane

0x5a89,	// (0x0009ff8f) cell_vitu_function_pane_ParamLimits

0x5a89,	// (0x0009ff8f) cell_vitu_function_pane

0xa49e,	// (0x000a49a4) bg_popup_sub_pane_cp08_ParamLimits

0xa49e,	// (0x000a49a4) bg_popup_sub_pane_cp08

0x5a9d,	// (0x0009ffa3) field_vitu_entry_pane_t1_ParamLimits

0x5a9d,	// (0x0009ffa3) field_vitu_entry_pane_t1

0xd219,	// (0x000a771f) field_vitu_entry_pane_t2_ParamLimits

0xd219,	// (0x000a771f) field_vitu_entry_pane_t2

0x0001,

0xf6d3,	// (0x000a9bd9) field_vitu_entry_pane_t_ParamLimits

0xf6d3,	// (0x000a9bd9) field_vitu_entry_pane_t

0xd236,	// (0x000a773c) bg_button_pane_cp05_ParamLimits

0xd236,	// (0x000a773c) bg_button_pane_cp05

0x5aba,	// (0x0009ffc0) cell_vitu_itu_pane_g1

0x5ad2,	// (0x0009ffd8) cell_vitu_itu_pane_t1_ParamLimits

0x5ad2,	// (0x0009ffd8) cell_vitu_itu_pane_t1

0x5ae4,	// (0x0009ffea) cell_vitu_itu_pane_t2_ParamLimits

0x5ae4,	// (0x0009ffea) cell_vitu_itu_pane_t2

0x0002,

0xf6d8,	// (0x000a9bde) cell_vitu_itu_pane_t_ParamLimits

0xf6d8,	// (0x000a9bde) cell_vitu_itu_pane_t

0xd244,	// (0x000a774a) bg_button_pane_cp07

0x5b27,	// (0x000a002d) cell_vitu_function_pane_g1

0x12b0,	// (0x0009b7b6) main_calc_pane_g1

0x0da2,	// (0x0009b2a8) aid_visual_content_pane

0x1031,	// (0x0009b537) main_vradio_pane

0x5b30,	// (0x000a0036) main_vradio_pane_g1_ParamLimits

0x5b30,	// (0x000a0036) main_vradio_pane_g1

0xd24e,	// (0x000a7754) main_vradio_pane_g2_ParamLimits

0xd24e,	// (0x000a7754) main_vradio_pane_g2

0x0001,

0xf6df,	// (0x000a9be5) main_vradio_pane_g_ParamLimits

0xf6df,	// (0x000a9be5) main_vradio_pane_g

0x5b40,	// (0x000a0046) main_vradio_pane_t1_ParamLimits

0x5b40,	// (0x000a0046) main_vradio_pane_t1

0x5b52,	// (0x000a0058) main_vradio_pane_t2_ParamLimits

0x5b52,	// (0x000a0058) main_vradio_pane_t2

0xd25b,	// (0x000a7761) main_vradio_pane_t3_ParamLimits

0xd25b,	// (0x000a7761) main_vradio_pane_t3

0x0002,

0xf6e4,	// (0x000a9bea) main_vradio_pane_t_ParamLimits

0xf6e4,	// (0x000a9bea) main_vradio_pane_t

0x5b64,	// (0x000a006a) vradio_rocker_control_pane_ParamLimits

0x5b64,	// (0x000a006a) vradio_rocker_control_pane

0x5b70,	// (0x000a0076) vradio_station_info_pane_ParamLimits

0x5b70,	// (0x000a0076) vradio_station_info_pane

0xd26f,	// (0x000a7775) vradio_frequency_info_pane_ParamLimits

0xd26f,	// (0x000a7775) vradio_frequency_info_pane

0xcc28,	// (0x000a712e) vradio_station_info_pane_g1

0xd27e,	// (0x000a7784) vradio_station_info_pane_t1_ParamLimits

0xd27e,	// (0x000a7784) vradio_station_info_pane_t1

0xd2a0,	// (0x000a77a6) vradio_station_info_pane_t2_ParamLimits

0xd2a0,	// (0x000a77a6) vradio_station_info_pane_t2

0x0001,

0x054c,	// (0x0009aa52) vradio_station_info_pane_t_ParamLimits

0x054c,	// (0x0009aa52) vradio_station_info_pane_t

0xd2b2,	// (0x000a77b8) vradio_tuning_pane

0xd2ba,	// (0x000a77c0) vradio_rocker_control_pane_g1

0xd2c2,	// (0x000a77c8) vradio_rocker_control_pane_g2

0xd2ca,	// (0x000a77d0) vradio_rocker_control_pane_g3

0xd2d2,	// (0x000a77d8) vradio_rocker_control_pane_g4

0xd2da,	// (0x000a77e0) vradio_rocker_control_pane_g5

0x0004,

0x0551,	// (0x0009aa57) vradio_rocker_control_pane_g

0x5b7f,	// (0x000a0085) vradio_frequency_info_pane_g1

0xd2e2,	// (0x000a77e8) vradio_frequency_info_pane_t1_ParamLimits

0xd2e2,	// (0x000a77e8) vradio_frequency_info_pane_t1

0x5b89,	// (0x000a008f) vradio_tuning_pane_g1

0x5b92,	// (0x000a0098) vradio_tuning_pane_t1

0x0deb,	// (0x0009b2f1) area_side_right_pane_ParamLimits

0x0deb,	// (0x0009b2f1) area_side_right_pane

0xc7d9,	// (0x000a6cdf) status_small_pane_g1

0xc7e1,	// (0x000a6ce7) status_small_pane_g2

0xc7ea,	// (0x000a6cf0) status_small_pane_g3

0xc7f3,	// (0x000a6cf9) status_small_pane_g4

0x0003,

0x0311,	// (0x0009a817) status_small_pane_g

0xc7fc,	// (0x000a6d02) status_small_pane_t1

0x1031,	// (0x0009b537) main_video3_pane

0xd2f6,	// (0x000a77fc) cams_zoom_vslider_pane

0xd2fe,	// (0x000a7804) image3_wide_pane_ParamLimits

0xd2fe,	// (0x000a7804) image3_wide_pane

0xd318,	// (0x000a781e) image3_wide_small_pane

0xd324,	// (0x000a782a) main_video3_pane_g1_ParamLimits

0xd324,	// (0x000a782a) main_video3_pane_g1

0xd340,	// (0x000a7846) main_video3_pane_g2_ParamLimits

0xd340,	// (0x000a7846) main_video3_pane_g2

0x0001,

0x055c,	// (0x0009aa62) main_video3_pane_g_ParamLimits

0x055c,	// (0x0009aa62) main_video3_pane_g

0xd35c,	// (0x000a7862) main_video3_pane_t1_ParamLimits

0xd35c,	// (0x000a7862) main_video3_pane_t1

0xd387,	// (0x000a788d) main_video3_pane_t2_ParamLimits

0xd387,	// (0x000a788d) main_video3_pane_t2

0xd3b2,	// (0x000a78b8) main_video3_pane_t3_ParamLimits

0xd3b2,	// (0x000a78b8) main_video3_pane_t3

0x0002,

0x0561,	// (0x0009aa67) main_video3_pane_t_ParamLimits

0x0561,	// (0x0009aa67) main_video3_pane_t

0xd3df,	// (0x000a78e5) cams_zoom_vslider_pane_g1

0xd3e8,	// (0x000a78ee) cams_zoom_vslider_pane_g2

0x0001,

0x0568,	// (0x0009aa6e) cams_zoom_vslider_pane_g

0xd3f0,	// (0x000a78f6) small_slider_vertical_pane

0xcc28,	// (0x000a712e) small_slider_vertical_pane_g1

0xcc28,	// (0x000a712e) small_slider_vertical_pane_g2

0xd3f8,	// (0x000a78fe) small_slider_vertical_pane_g3

0x0002,

0x056d,	// (0x0009aa73) small_slider_vertical_pane_g

0x1031,	// (0x0009b537) main_hwr_training_pane

0xd401,	// (0x000a7907) hwr_training_instruct_pane_ParamLimits

0xd401,	// (0x000a7907) hwr_training_instruct_pane

0x5ba1,	// (0x000a00a7) hwr_training_navi_pane_ParamLimits

0x5ba1,	// (0x000a00a7) hwr_training_navi_pane

0x5bbb,	// (0x000a00c1) hwr_training_write_pane_ParamLimits

0x5bbb,	// (0x000a00c1) hwr_training_write_pane

0x9b4c,	// (0x000a4052) bg_frame_shadow_pane

0xd438,	// (0x000a793e) hwr_training_write_pane_g1

0xd440,	// (0x000a7946) hwr_training_write_pane_g2

0xd448,	// (0x000a794e) hwr_training_write_pane_g3

0xd450,	// (0x000a7956) hwr_training_write_pane_g4

0xd458,	// (0x000a795e) hwr_training_write_pane_g5

0xd460,	// (0x000a7966) hwr_training_write_pane_g6

0xd468,	// (0x000a796e) hwr_training_write_pane_g7

0x0006,

0x0574,	// (0x0009aa7a) hwr_training_write_pane_g

0x5bf3,	// (0x000a00f9) hwr_training_navi_pane_g1_ParamLimits

0x5bf3,	// (0x000a00f9) hwr_training_navi_pane_g1

0x5c05,	// (0x000a010b) hwr_training_navi_pane_g2_ParamLimits

0x5c05,	// (0x000a010b) hwr_training_navi_pane_g2

0x5c17,	// (0x000a011d) hwr_training_navi_pane_g3_ParamLimits

0x5c17,	// (0x000a011d) hwr_training_navi_pane_g3

0x5c27,	// (0x000a012d) hwr_training_navi_pane_g4_ParamLimits

0x5c27,	// (0x000a012d) hwr_training_navi_pane_g4

0x0004,

0xf6eb,	// (0x000a9bf1) hwr_training_navi_pane_g_ParamLimits

0xf6eb,	// (0x000a9bf1) hwr_training_navi_pane_g

0x5c41,	// (0x000a0147) hwr_training_navi_pane_t1

0x5c4f,	// (0x000a0155) list_single_hwr_training_instruct_pane_ParamLimits

0x5c4f,	// (0x000a0155) list_single_hwr_training_instruct_pane

0xd470,	// (0x000a7976) list_single_hwr_training_instruct_pane_t1

0xcb68,	// (0x000a706e) bg_frame_shadow_pane_g1

0xd47f,	// (0x000a7985) bg_frame_shadow_pane_g2

0xd487,	// (0x000a798d) bg_frame_shadow_pane_g3

0xd48f,	// (0x000a7995) bg_frame_shadow_pane_g4

0xd497,	// (0x000a799d) bg_frame_shadow_pane_g5

0xd49f,	// (0x000a79a5) bg_frame_shadow_pane_g6

0xd4a7,	// (0x000a79ad) bg_frame_shadow_pane_g7

0xa83f,	// (0x000a4d45) bg_frame_shadow_pane_g8

0x0007,

0xf6f6,	// (0x000a9bfc) bg_frame_shadow_pane_g

0x1031,	// (0x0009b537) main_video_tele_dialer_pane

0x5c7e,	// (0x000a0184) aid_size_cell_video_keypad_ParamLimits

0x5c7e,	// (0x000a0184) aid_size_cell_video_keypad

0x5c8e,	// (0x000a0194) grid_video_dialer_keypad_pane_ParamLimits

0x5c8e,	// (0x000a0194) grid_video_dialer_keypad_pane

0x5cc2,	// (0x000a01c8) video_down_pane_cp_ParamLimits

0x5cc2,	// (0x000a01c8) video_down_pane_cp

0x5cec,	// (0x000a01f2) cell_video_dialer_keypad_pane_ParamLimits

0x5cec,	// (0x000a01f2) cell_video_dialer_keypad_pane

0xd4af,	// (0x000a79b5) bg_button_pane_cp08_ParamLimits

0xd4af,	// (0x000a79b5) bg_button_pane_cp08

0x5d01,	// (0x000a0207) cell_video_dialer_keypad_pane_g1_ParamLimits

0x5d01,	// (0x000a0207) cell_video_dialer_keypad_pane_g1

0x54bf,	// (0x0009f9c5) mup3_rocker2_pane_ParamLimits

0x54bf,	// (0x0009f9c5) mup3_rocker2_pane

0xcc28,	// (0x000a712e) mup3_rocker2_pane_g1

0x43df,	// (0x0009e8e5) main_dialer2_pane

0x1031,	// (0x0009b537) main_mp4_pane

0x5d44,	// (0x000a024a) main_mp4_pane_g1_ParamLimits

0x5d44,	// (0x000a024a) main_mp4_pane_g1

0x5d52,	// (0x000a0258) main_mp4_pane_g2_ParamLimits

0x5d52,	// (0x000a0258) main_mp4_pane_g2

0x5d60,	// (0x000a0266) main_mp4_pane_g3_ParamLimits

0x5d60,	// (0x000a0266) main_mp4_pane_g3

0x5da5,	// (0x000a02ab) main_mp4_pane_g4_ParamLimits

0x5da5,	// (0x000a02ab) main_mp4_pane_g4

0x5dcd,	// (0x000a02d3) main_mp4_pane_g5_ParamLimits

0x5dcd,	// (0x000a02d3) main_mp4_pane_g5

0x0005,

0xf716,	// (0x000a9c1c) main_mp4_pane_g_ParamLimits

0xf716,	// (0x000a9c1c) main_mp4_pane_g

0x5e1d,	// (0x000a0323) main_mp4_pane_t1_ParamLimits

0x5e1d,	// (0x000a0323) main_mp4_pane_t1

0x5e79,	// (0x000a037f) main_mp4_pane_t2_ParamLimits

0x5e79,	// (0x000a037f) main_mp4_pane_t2

0xd4bb,	// (0x000a79c1) main_mp4_pane_t3_ParamLimits

0xd4bb,	// (0x000a79c1) main_mp4_pane_t3

0x5ecb,	// (0x000a03d1) main_mp4_pane_t4_ParamLimits

0x5ecb,	// (0x000a03d1) main_mp4_pane_t4

0x0003,

0xf723,	// (0x000a9c29) main_mp4_pane_t_ParamLimits

0xf723,	// (0x000a9c29) main_mp4_pane_t

0x5f0f,	// (0x000a0415) mp4_progress_pane_ParamLimits

0x5f0f,	// (0x000a0415) mp4_progress_pane

0x5f59,	// (0x000a045f) mp4_rocker_pane_ParamLimits

0x5f59,	// (0x000a045f) mp4_rocker_pane

0xd4e3,	// (0x000a79e9) mp4_progress_pane_t1

0xd4fc,	// (0x000a7a02) mp4_progress_pane_t2

0x0001,

0x05c4,	// (0x0009aaca) mp4_progress_pane_t

0xd515,	// (0x000a7a1b) mup_progress_pane_cp04

0xd8a7,	// (0x000a7dad) mp4_rocker_pane_g1

0x5f79,	// (0x000a047f) aid_cell_size_keypad2_ParamLimits

0x5f79,	// (0x000a047f) aid_cell_size_keypad2

0x5f89,	// (0x000a048f) dialer2_ne_pane_ParamLimits

0x5f89,	// (0x000a048f) dialer2_ne_pane

0x5f97,	// (0x000a049d) grid_dialer2_keypad_pane_ParamLimits

0x5f97,	// (0x000a049d) grid_dialer2_keypad_pane

0xdce4,	// (0x000a81ea) bg_popup_call_pane_cp07_ParamLimits

0xdce4,	// (0x000a81ea) bg_popup_call_pane_cp07

0x5fa7,	// (0x000a04ad) dialer2_ne_pane_t1_ParamLimits

0x5fa7,	// (0x000a04ad) dialer2_ne_pane_t1

0x5fcc,	// (0x000a04d2) cell_dialer2_keypad_pane_ParamLimits

0x5fcc,	// (0x000a04d2) cell_dialer2_keypad_pane

0xd533,	// (0x000a7a39) bg_button_pane_pane_cp04_ParamLimits

0xd533,	// (0x000a7a39) bg_button_pane_pane_cp04

0x5fe1,	// (0x000a04e7) cell_dialer2_keypad_pane_g1_ParamLimits

0x5fe1,	// (0x000a04e7) cell_dialer2_keypad_pane_g1

0x1f42,	// (0x0009c448) aid_placing_vt_set_content_ParamLimits

0x1f42,	// (0x0009c448) aid_placing_vt_set_content

0x1f6e,	// (0x0009c474) aid_placing_vt_set_title_ParamLimits

0x1f6e,	// (0x0009c474) aid_placing_vt_set_title

0x1031,	// (0x0009b537) main_image3_pane

0x607b,	// (0x000a0581) area_side_right_pane_cp01_ParamLimits

0x607b,	// (0x000a0581) area_side_right_pane_cp01

0x60a8,	// (0x000a05ae) main_image3_pane_g1_ParamLimits

0x60a8,	// (0x000a05ae) main_image3_pane_g1

0x60b6,	// (0x000a05bc) main_image3_pane_g2_ParamLimits

0x60b6,	// (0x000a05bc) main_image3_pane_g2

0x60cf,	// (0x000a05d5) main_image3_pane_g3_ParamLimits

0x60cf,	// (0x000a05d5) main_image3_pane_g3

0x60e8,	// (0x000a05ee) main_image3_pane_g4_ParamLimits

0x60e8,	// (0x000a05ee) main_image3_pane_g4

0x0003,

0xf736,	// (0x000a9c3c) main_image3_pane_g_ParamLimits

0xf736,	// (0x000a9c3c) main_image3_pane_g

0x6101,	// (0x000a0607) main_image3_pane_t1_ParamLimits

0x6101,	// (0x000a0607) main_image3_pane_t1

0x6126,	// (0x000a062c) main_image3_pane_t2_ParamLimits

0x6126,	// (0x000a062c) main_image3_pane_t2

0x6145,	// (0x000a064b) main_image3_pane_t3_ParamLimits

0x6145,	// (0x000a064b) main_image3_pane_t3

0x0003,

0xf73f,	// (0x000a9c45) main_image3_pane_t_ParamLimits

0xf73f,	// (0x000a9c45) main_image3_pane_t

0xf051,	// (0x000a9557) grid_sctrl_middle_pane_cp01_ParamLimits

0xf051,	// (0x000a9557) grid_sctrl_middle_pane_cp01

0x61a6,	// (0x000a06ac) cell_sctrl_middle_pane_cp01_ParamLimits

0x61a6,	// (0x000a06ac) cell_sctrl_middle_pane_cp01

0x61b7,	// (0x000a06bd) cell_sctrl_middle_pane_cp01_g1_ParamLimits

0x61b7,	// (0x000a06bd) cell_sctrl_middle_pane_cp01_g1

0x1031,	// (0x0009b537) main_call4_pane

0x61c4,	// (0x000a06ca) aid_size_button_call4_ParamLimits

0x61c4,	// (0x000a06ca) aid_size_button_call4

0x61f4,	// (0x000a06fa) call4_windows_pane_ParamLimits

0x61f4,	// (0x000a06fa) call4_windows_pane

0x620e,	// (0x000a0714) grid_call4_button_pane_ParamLimits

0x620e,	// (0x000a0714) grid_call4_button_pane

0xd53f,	// (0x000a7a45) call4_windows_conf_pane

0xd554,	// (0x000a7a5a) popup_call4_audio_first_window_ParamLimits

0xd554,	// (0x000a7a5a) popup_call4_audio_first_window

0xd5a0,	// (0x000a7aa6) popup_call4_audio_second_window_ParamLimits

0xd5a0,	// (0x000a7aa6) popup_call4_audio_second_window

0xd5b4,	// (0x000a7aba) popup_call4_audio_wait_window_ParamLimits

0xd5b4,	// (0x000a7aba) popup_call4_audio_wait_window

0x6232,	// (0x000a0738) cell_call4_button_pane_ParamLimits

0x6232,	// (0x000a0738) cell_call4_button_pane

0x6257,	// (0x000a075d) bg_button_pane_cp09_ParamLimits

0x6257,	// (0x000a075d) bg_button_pane_cp09

0x6263,	// (0x000a0769) cell_call4_button_pane_g1_ParamLimits

0x6263,	// (0x000a0769) cell_call4_button_pane_g1

0x6270,	// (0x000a0776) cell_call4_button_pane_t1_ParamLimits

0x6270,	// (0x000a0776) cell_call4_button_pane_t1

0xd5fc,	// (0x000a7b02) popup_call4_audio_conf_window_ParamLimits

0xd5fc,	// (0x000a7b02) popup_call4_audio_conf_window

0x54f2,	// (0x0009f9f8) mup3_progress_pane_t1_ParamLimits

0x5511,	// (0x0009fa17) mup3_progress_pane_t2_ParamLimits

0xcf03,	// (0x000a7409) mup3_progress_pane_t3_ParamLimits

0xf680,	// (0x000a9b86) mup3_progress_pane_t_ParamLimits

0xcf20,	// (0x000a7426) mup_progress_pane_cp03_ParamLimits

0x5a2f,	// (0x0009ff35) mup3_control_keys_pane_g4_copy1

0x5f3d,	// (0x000a0443) mp4_rocker2_pane_ParamLimits

0x5f3d,	// (0x000a0443) mp4_rocker2_pane

0xd610,	// (0x000a7b16) mp4_rocker2_pane_g1

0xd618,	// (0x000a7b1e) mp4_rocker2_pane_g2

0x6282,	// (0x000a0788) mp4_rocker2_pane_g3

0x628a,	// (0x000a0790) mp4_rocker2_pane_g4

0x6292,	// (0x000a0798) mp4_rocker2_pane_g5

0x0004,

0xf748,	// (0x000a9c4e) mp4_rocker2_pane_g

0x1031,	// (0x0009b537) main_camera4_pane

0x1031,	// (0x0009b537) main_video4_pane

0x5c9e,	// (0x000a01a4) main_video_tele_dialer_pane_t1_ParamLimits

0x5c9e,	// (0x000a01a4) main_video_tele_dialer_pane_t1

0x5cb0,	// (0x000a01b6) main_video_tele_dialer_pane_t2_ParamLimits

0x5cb0,	// (0x000a01b6) main_video_tele_dialer_pane_t2

0x0001,

0xf707,	// (0x000a9c0d) main_video_tele_dialer_pane_t_ParamLimits

0xf707,	// (0x000a9c0d) main_video_tele_dialer_pane_t

0x62b2,	// (0x000a07b8) cam4_autofocus_pane_ParamLimits

0x62b2,	// (0x000a07b8) cam4_autofocus_pane

0x62cc,	// (0x000a07d2) cam4_image_uncrop_pane_ParamLimits

0x62cc,	// (0x000a07d2) cam4_image_uncrop_pane

0x62e3,	// (0x000a07e9) cam4_indicators_pane_ParamLimits

0x62e3,	// (0x000a07e9) cam4_indicators_pane

0x62ff,	// (0x000a0805) main_camera4_pane_g1_ParamLimits

0x62ff,	// (0x000a0805) main_camera4_pane_g1

0x630b,	// (0x000a0811) main_camera4_pane_g2_ParamLimits

0x630b,	// (0x000a0811) main_camera4_pane_g2

0x630b,	// (0x000a0811) main_camera4_pane_g3_ParamLimits

0x630b,	// (0x000a0811) main_camera4_pane_g3

0x6317,	// (0x000a081d) main_camera4_pane_g4_ParamLimits

0x6317,	// (0x000a081d) main_camera4_pane_g4

0x6323,	// (0x000a0829) main_camera4_pane_g5_ParamLimits

0x6323,	// (0x000a0829) main_camera4_pane_g5

0x0005,

0xf753,	// (0x000a9c59) main_camera4_pane_g_ParamLimits

0xf753,	// (0x000a9c59) main_camera4_pane_g

0x633d,	// (0x000a0843) main_camera4_pane_t1_ParamLimits

0x633d,	// (0x000a0843) main_camera4_pane_t1

0x6385,	// (0x000a088b) bg_tb_trans_pane_cp06

0x639b,	// (0x000a08a1) cam4_indicators_pane_g1

0x63ac,	// (0x000a08b2) cam4_indicators_pane_g2

0x0002,

0xf76e,	// (0x000a9c74) cam4_indicators_pane_g

0x63ca,	// (0x000a08d0) cam4_indicators_pane_t1

0x63f4,	// (0x000a08fa) main_video4_pane_g1_ParamLimits

0x63f4,	// (0x000a08fa) main_video4_pane_g1

0x6400,	// (0x000a0906) main_video4_pane_g2_ParamLimits

0x6400,	// (0x000a0906) main_video4_pane_g2

0x640c,	// (0x000a0912) main_video4_pane_g3_ParamLimits

0x640c,	// (0x000a0912) main_video4_pane_g3

0x6418,	// (0x000a091e) main_video4_pane_g4_ParamLimits

0x6418,	// (0x000a091e) main_video4_pane_g4

0x0004,

0xf775,	// (0x000a9c7b) main_video4_pane_g_ParamLimits

0xf775,	// (0x000a9c7b) main_video4_pane_g

0x6438,	// (0x000a093e) vid4_indicators_pane_ParamLimits

0x6438,	// (0x000a093e) vid4_indicators_pane

0x6457,	// (0x000a095d) video4_image_uncrop_cif_pane_ParamLimits

0x6457,	// (0x000a095d) video4_image_uncrop_cif_pane

0x6466,	// (0x000a096c) video4_image_uncrop_nhd_pane_ParamLimits

0x6466,	// (0x000a096c) video4_image_uncrop_nhd_pane

0x62cc,	// (0x000a07d2) video4_image_uncrop_vga_pane_ParamLimits

0x62cc,	// (0x000a07d2) video4_image_uncrop_vga_pane

0x43d1,	// (0x0009e8d7) bg_tb_trans_pane_cp07

0x647b,	// (0x000a0981) vid4_indicators_pane_g1

0x648f,	// (0x000a0995) vid4_indicators_pane_g2

0x64a3,	// (0x000a09a9) vid4_indicators_pane_g3

0x0004,

0xf780,	// (0x000a9c86) vid4_indicators_pane_g

0x64d0,	// (0x000a09d6) vid4_indicators_pane_t1

0x64e7,	// (0x000a09ed) cam4_autofocus_pane_g1

0x64ef,	// (0x000a09f5) cam4_autofocus_pane_g2

0x64f7,	// (0x000a09fd) cam4_autofocus_pane_g3

0x0002,

0xf78b,	// (0x000a9c91) cam4_autofocus_pane_g

0x64ff,	// (0x000a0a05) cam4_autofocus_pane_g3_copy1

0x5cd0,	// (0x000a01d6) video_down_pane_cp_t1

0x5cde,	// (0x000a01e4) video_down_pane_cp_t2

0x0001,

0xf70c,	// (0x000a9c12) video_down_pane_cp_t

0x1017,	// (0x0009b51d) popup_vitu2_window_ParamLimits

0x1017,	// (0x0009b51d) popup_vitu2_window

0x6507,	// (0x000a0a0d) aid_size_cell2_itu2_ParamLimits

0x6507,	// (0x000a0a0d) aid_size_cell2_itu2

0x6529,	// (0x000a0a2f) aid_size_cell_itu2_ParamLimits

0x6529,	// (0x000a0a2f) aid_size_cell_itu2

0x656d,	// (0x000a0a73) bg_popup_window_pane_cp09_ParamLimits

0x656d,	// (0x000a0a73) bg_popup_window_pane_cp09

0x657b,	// (0x000a0a81) field_vitu2_entry_pane_ParamLimits

0x657b,	// (0x000a0a81) field_vitu2_entry_pane

0x659b,	// (0x000a0aa1) grid_vitu2_function_pane_ParamLimits

0x659b,	// (0x000a0aa1) grid_vitu2_function_pane

0x65df,	// (0x000a0ae5) grid_vitu2_itu_pane_ParamLimits

0x65df,	// (0x000a0ae5) grid_vitu2_itu_pane

0x6655,	// (0x000a0b5b) cell_vitu2_itu_pane_ParamLimits

0x6655,	// (0x000a0b5b) cell_vitu2_itu_pane

0x666a,	// (0x000a0b70) cell_vitu2_function_pane_ParamLimits

0x666a,	// (0x000a0b70) cell_vitu2_function_pane

0xd620,	// (0x000a7b26) bg_popup_call_pane_cp08_ParamLimits

0xd620,	// (0x000a7b26) bg_popup_call_pane_cp08

0xd639,	// (0x000a7b3f) field_vitu2_entry_pane_g1

0xd645,	// (0x000a7b4b) field_vitu2_entry_pane_g2

0x0002,

0xf792,	// (0x000a9c98) field_vitu2_entry_pane_g

0x66ab,	// (0x000a0bb1) field_vitu2_entry_pane_t1_ParamLimits

0x66ab,	// (0x000a0bb1) field_vitu2_entry_pane_t1

0xa033,	// (0x000a4539) field_vitu2_entry_pane_t2_ParamLimits

0xa033,	// (0x000a4539) field_vitu2_entry_pane_t2

0x0001,

0xf799,	// (0x000a9c9f) field_vitu2_entry_pane_t_ParamLimits

0xf799,	// (0x000a9c9f) field_vitu2_entry_pane_t

0x66dc,	// (0x000a0be2) bg_button_pane_cp010_ParamLimits

0x66dc,	// (0x000a0be2) bg_button_pane_cp010

0x66ea,	// (0x000a0bf0) cell_vitu2_itu_pane_g1

0x6713,	// (0x000a0c19) cell_vitu2_itu_pane_t1_ParamLimits

0x6713,	// (0x000a0c19) cell_vitu2_itu_pane_t1

0x0c8b,	// (0x0009b191) cell_vitu2_itu_pane_t2_ParamLimits

0x0c8b,	// (0x0009b191) cell_vitu2_itu_pane_t2

0x0002,

0xf7a3,	// (0x000a9ca9) cell_vitu2_itu_pane_t_ParamLimits

0xf7a3,	// (0x000a9ca9) cell_vitu2_itu_pane_t

0x43d1,	// (0x0009e8d7) bg_button_pane_cp011

0x675f,	// (0x000a0c65) cell_vitu2_function_pane_g1

0x1031,	// (0x0009b537) main_myfav_hc_pane

0x6187,	// (0x000a068d) popup_image3_note_pane_ParamLimits

0x6187,	// (0x000a068d) popup_image3_note_pane

0x6195,	// (0x000a069b) popup_image3_tool_bar_pane_ParamLimits

0x6195,	// (0x000a069b) popup_image3_tool_bar_pane

0x0d01,	// (0x0009b207) cell_vitu2_itu_pane_t3_ParamLimits

0x0d01,	// (0x0009b207) cell_vitu2_itu_pane_t3

0x9b4c,	// (0x000a4052) bg_popup_trans_pane

0xd679,	// (0x000a7b7f) grid_image3_tool_bar_pane

0xd683,	// (0x000a7b89) bg_popup_trans_pane_g1

0xab94,	// (0x000a509a) bg_popup_trans_pane_g2

0xd68b,	// (0x000a7b91) bg_popup_trans_pane_g3

0xd693,	// (0x000a7b99) bg_popup_trans_pane_g4

0xd69b,	// (0x000a7ba1) bg_popup_trans_pane_g5

0xd6a3,	// (0x000a7ba9) bg_popup_trans_pane_g6

0xd6ab,	// (0x000a7bb1) bg_popup_trans_pane_g7

0xd6b3,	// (0x000a7bb9) bg_popup_trans_pane_g8

0xab74,	// (0x000a507a) bg_popup_trans_pane_g9

0x0008,

0xf7aa,	// (0x000a9cb0) bg_popup_trans_pane_g

0xd6bb,	// (0x000a7bc1) cell_image3_tool_bar_pane_ParamLimits

0xd6bb,	// (0x000a7bc1) cell_image3_tool_bar_pane

0xcc28,	// (0x000a712e) cell_image3_tool_bar_pane_g1

0x9b4c,	// (0x000a4052) bg_popup_trans_pane_cp1

0xd6cf,	// (0x000a7bd5) popup_image3_note_pane_t1

0xd6dd,	// (0x000a7be3) popup_image3_note_pane_t2

0xd6eb,	// (0x000a7bf1) popup_image3_note_pane_t3

0x0002,

0x065a,	// (0x0009ab60) popup_image3_note_pane_t

0xd6f9,	// (0x000a7bff) popup_image3_note_pane_t3_copy1

0x6773,	// (0x000a0c79) bg_myfav_hc_instruction_pane_ParamLimits

0x6773,	// (0x000a0c79) bg_myfav_hc_instruction_pane

0x678b,	// (0x000a0c91) cell_myfav_contact_pane_ParamLimits

0x678b,	// (0x000a0c91) cell_myfav_contact_pane

0x67a5,	// (0x000a0cab) cell_myfav_contact_pane_cp1_ParamLimits

0x67a5,	// (0x000a0cab) cell_myfav_contact_pane_cp1

0x67bd,	// (0x000a0cc3) cell_myfav_contact_pane_cp2_ParamLimits

0x67bd,	// (0x000a0cc3) cell_myfav_contact_pane_cp2

0x67d5,	// (0x000a0cdb) cell_myfav_contact_pane_cp3_ParamLimits

0x67d5,	// (0x000a0cdb) cell_myfav_contact_pane_cp3

0x67ec,	// (0x000a0cf2) cell_myfav_contact_pane_cp4_ParamLimits

0x67ec,	// (0x000a0cf2) cell_myfav_contact_pane_cp4

0x6802,	// (0x000a0d08) cell_myfav_contact_pane_cp5_ParamLimits

0x6802,	// (0x000a0d08) cell_myfav_contact_pane_cp5

0x6816,	// (0x000a0d1c) cell_myfav_contact_pane_cp6_ParamLimits

0x6816,	// (0x000a0d1c) cell_myfav_contact_pane_cp6

0x682a,	// (0x000a0d30) cell_myfav_contact_pane_cp7_ParamLimits

0x682a,	// (0x000a0d30) cell_myfav_contact_pane_cp7

0xd707,	// (0x000a7c0d) listscroll_gen_pane_cp05

0x6842,	// (0x000a0d48) main_myfav_hc_pane_g1_ParamLimits

0x6842,	// (0x000a0d48) main_myfav_hc_pane_g1

0x685a,	// (0x000a0d60) main_myfav_hc_pane_g2_ParamLimits

0x685a,	// (0x000a0d60) main_myfav_hc_pane_g2

0x0002,

0xf7bd,	// (0x000a9cc3) main_myfav_hc_pane_g_ParamLimits

0xf7bd,	// (0x000a9cc3) main_myfav_hc_pane_g

0x688a,	// (0x000a0d90) main_myfav_hc_pane_t1_ParamLimits

0x688a,	// (0x000a0d90) main_myfav_hc_pane_t1

0xd710,	// (0x000a7c16) main_myfav_hc_pane_t2_ParamLimits

0xd710,	// (0x000a7c16) main_myfav_hc_pane_t2

0xd722,	// (0x000a7c28) main_myfav_hc_pane_t3_ParamLimits

0xd722,	// (0x000a7c28) main_myfav_hc_pane_t3

0x68a1,	// (0x000a0da7) main_myfav_hc_pane_t4_ParamLimits

0x68a1,	// (0x000a0da7) main_myfav_hc_pane_t4

0x0004,

0xf7c4,	// (0x000a9cca) main_myfav_hc_pane_t_ParamLimits

0xf7c4,	// (0x000a9cca) main_myfav_hc_pane_t

0xcc28,	// (0x000a712e) bg_myfav_hc_instruction_pane_g1

0xd734,	// (0x000a7c3a) cell_myfav_contact_pane_g1_ParamLimits

0xd734,	// (0x000a7c3a) cell_myfav_contact_pane_g1

0xd734,	// (0x000a7c3a) cell_myfav_contact_pane_g2_ParamLimits

0xd734,	// (0x000a7c3a) cell_myfav_contact_pane_g2

0xd740,	// (0x000a7c46) cell_myfav_contact_pane_g3_ParamLimits

0xd740,	// (0x000a7c46) cell_myfav_contact_pane_g3

0xceed,	// (0x000a73f3) cell_myfav_contact_pane_g4_ParamLimits

0xceed,	// (0x000a73f3) cell_myfav_contact_pane_g4

0xd74d,	// (0x000a7c53) cell_myfav_contact_pane_g5_ParamLimits

0xd74d,	// (0x000a7c53) cell_myfav_contact_pane_g5

0x0004,

0x0673,	// (0x0009ab79) cell_myfav_contact_pane_g_ParamLimits

0x0673,	// (0x0009ab79) cell_myfav_contact_pane_g

0x6872,	// (0x000a0d78) main_myfav_hc_pane_g3_ParamLimits

0x6872,	// (0x000a0d78) main_myfav_hc_pane_g3

0x0f20,	// (0x0009b426) popup_adpt_find_window

0x68cb,	// (0x000a0dd1) afind_page_pane_ParamLimits

0x68cb,	// (0x000a0dd1) afind_page_pane

0x68d8,	// (0x000a0dde) aid_size_cell_afind_ParamLimits

0x68d8,	// (0x000a0dde) aid_size_cell_afind

0x68f2,	// (0x000a0df8) bg_popup_sub_pane_cp09_ParamLimits

0x68f2,	// (0x000a0df8) bg_popup_sub_pane_cp09

0x68ff,	// (0x000a0e05) find_pane_cp01_ParamLimits

0x68ff,	// (0x000a0e05) find_pane_cp01

0xd759,	// (0x000a7c5f) grid_afind_control_pane_ParamLimits

0xd759,	// (0x000a7c5f) grid_afind_control_pane

0x690c,	// (0x000a0e12) grid_afind_pane_ParamLimits

0x690c,	// (0x000a0e12) grid_afind_pane

0x6926,	// (0x000a0e2c) cell_afind_pane_ParamLimits

0x6926,	// (0x000a0e2c) cell_afind_pane

0xcc28,	// (0x000a712e) afind_page_pane_g1

0x696e,	// (0x000a0e74) afind_page_pane_g2

0x6977,	// (0x000a0e7d) afind_page_pane_g3

0x0002,

0xf7cf,	// (0x000a9cd5) afind_page_pane_g

0x6980,	// (0x000a0e86) afind_page_pane_t1

0xd76d,	// (0x000a7c73) cell_afind_grid_control_pane_ParamLimits

0xd76d,	// (0x000a7c73) cell_afind_grid_control_pane

0xd533,	// (0x000a7a39) bg_button_pane_cp69_ParamLimits

0xd533,	// (0x000a7a39) bg_button_pane_cp69

0x69a0,	// (0x000a0ea6) cell_afind_pane_g1_ParamLimits

0x69a0,	// (0x000a0ea6) cell_afind_pane_g1

0x69ad,	// (0x000a0eb3) cell_afind_pane_t1_ParamLimits

0x69ad,	// (0x000a0eb3) cell_afind_pane_t1

0xa98d,	// (0x000a4e93) bg_button_pane_cp72

0xd77c,	// (0x000a7c82) cell_afind_grid_control_pane_g1

0x3f4b,	// (0x0009e451) aid_image_placing_area_ParamLimits

0x3f4b,	// (0x0009e451) aid_image_placing_area

0xd201,	// (0x000a7707) field_vitu_entry_pane_g1_ParamLimits

0xd201,	// (0x000a7707) field_vitu_entry_pane_g1

0xd20d,	// (0x000a7713) field_vitu_entry_pane_g2_ParamLimits

0xd20d,	// (0x000a7713) field_vitu_entry_pane_g2

0x0001,

0x052f,	// (0x0009aa35) field_vitu_entry_pane_g_ParamLimits

0x052f,	// (0x0009aa35) field_vitu_entry_pane_g

0x5aba,	// (0x0009ffc0) cell_vitu_itu_pane_g1_ParamLimits

0x5b0a,	// (0x000a0010) cell_vitu_itu_pane_t3_ParamLimits

0x5b0a,	// (0x000a0010) cell_vitu_itu_pane_t3

0xd4e3,	// (0x000a79e9) mp4_progress_pane_t1_ParamLimits

0xd4fc,	// (0x000a7a02) mp4_progress_pane_t2_ParamLimits

0x05c4,	// (0x0009aaca) mp4_progress_pane_t_ParamLimits

0xd515,	// (0x000a7a1b) mup_progress_pane_cp04_ParamLimits

0x68b5,	// (0x000a0dbb) main_myfav_hc_pane_t5_ParamLimits

0x68b5,	// (0x000a0dbb) main_myfav_hc_pane_t5

0x0c7b,	// (0x0009b181) aid_zoom_text_primary

0x0f20,	// (0x0009b426) popup_adpt_find_window_ParamLimits

0x43d1,	// (0x0009e8d7) main_cam_set_pane

0x62f1,	// (0x000a07f7) cam4_zoom_pane_ParamLimits

0x62f1,	// (0x000a07f7) cam4_zoom_pane

0x69bf,	// (0x000a0ec5) main_cam_set_pane_g1_ParamLimits

0x69bf,	// (0x000a0ec5) main_cam_set_pane_g1

0x69cd,	// (0x000a0ed3) main_cam_set_pane_g2_ParamLimits

0x69cd,	// (0x000a0ed3) main_cam_set_pane_g2

0x0001,

0xf7d6,	// (0x000a9cdc) main_cam_set_pane_g_ParamLimits

0xf7d6,	// (0x000a9cdc) main_cam_set_pane_g

0x69d9,	// (0x000a0edf) main_cam_set_pane_t1_ParamLimits

0x69d9,	// (0x000a0edf) main_cam_set_pane_t1

0x69f5,	// (0x000a0efb) main_cset_listscroll_pane_ParamLimits

0x69f5,	// (0x000a0efb) main_cset_listscroll_pane

0x6a20,	// (0x000a0f26) main_cset_slider_pane_ParamLimits

0x6a20,	// (0x000a0f26) main_cset_slider_pane

0xd78d,	// (0x000a7c93) main_cset_list_pane_ParamLimits

0xd78d,	// (0x000a7c93) main_cset_list_pane

0xd79d,	// (0x000a7ca3) scroll_pane_cp028

0x6a3f,	// (0x000a0f45) aid_area_touch_slider

0x6a5b,	// (0x000a0f61) cset_slider_pane

0x6a85,	// (0x000a0f8b) main_cset_slider_pane_g1

0x6a9a,	// (0x000a0fa0) main_cset_slider_pane_g2

0x0011,

0xf7db,	// (0x000a9ce1) main_cset_slider_pane_g

0xd7d6,	// (0x000a7cdc) main_cset_slider_pane_t1

0x6b60,	// (0x000a1066) main_cset_slider_pane_t2

0x6b7a,	// (0x000a1080) main_cset_slider_pane_t3

0x6b94,	// (0x000a109a) main_cset_slider_pane_t4

0x6bb2,	// (0x000a10b8) main_cset_slider_pane_t5

0x6bd0,	// (0x000a10d6) main_cset_slider_pane_t6

0x6be7,	// (0x000a10ed) main_cset_slider_pane_t7

0x000e,

0xf800,	// (0x000a9d06) main_cset_slider_pane_t

0x6cf5,	// (0x000a11fb) cset_list_set_pane_ParamLimits

0x6cf5,	// (0x000a11fb) cset_list_set_pane

0x6d11,	// (0x000a1217) aid_position_infowindow_above

0x6d19,	// (0x000a121f) aid_position_infowindow_below

0x6d21,	// (0x000a1227) cset_list_set_pane_g1_ParamLimits

0x6d21,	// (0x000a1227) cset_list_set_pane_g1

0xa050,	// (0x000a4556) cset_list_set_pane_g3_ParamLimits

0xa050,	// (0x000a4556) cset_list_set_pane_g3

0x0001,

0xf81f,	// (0x000a9d25) cset_list_set_pane_g_ParamLimits

0xf81f,	// (0x000a9d25) cset_list_set_pane_g

0xa05f,	// (0x000a4565) cset_list_set_pane_t1_ParamLimits

0xa05f,	// (0x000a4565) cset_list_set_pane_t1

0xa49e,	// (0x000a49a4) list_highlight_pane_cp021_ParamLimits

0xa49e,	// (0x000a49a4) list_highlight_pane_cp021

0xb546,	// (0x000a5a4c) cset_slider_pane_g1

0xb558,	// (0x000a5a5e) cset_slider_pane_g2

0xb54f,	// (0x000a5a55) cset_slider_pane_g3

0x0002,

0x06d3,	// (0x0009abd9) cset_slider_pane_g

0x6d2d,	// (0x000a1233) aid_area_touch_cam4_zoom

0x6d35,	// (0x000a123b) cam4_zoom_cont_pane

0x6d3d,	// (0x000a1243) cam4_zoom_pane_g1

0x6d45,	// (0x000a124b) cam4_zoom_pane_g2

0x6d4d,	// (0x000a1253) cam4_zoom_pane_g3

0x0002,

0xf824,	// (0x000a9d2a) cam4_zoom_pane_g

0x6d55,	// (0x000a125b) cam4_zoom_cont_pane_g1

0x6d5e,	// (0x000a1264) cam4_zoom_cont_pane_g2

0x6d67,	// (0x000a126d) cam4_zoom_cont_pane_g3

0x0002,

0xf82b,	// (0x000a9d31) cam4_zoom_cont_pane_g

0x61de,	// (0x000a06e4) call4_image_pane_ParamLimits

0x61de,	// (0x000a06e4) call4_image_pane

0xd53f,	// (0x000a7a45) call4_windows_conf_pane_ParamLimits

0xd57e,	// (0x000a7a84) popup_call4_audio_in_window_ParamLimits

0xd57e,	// (0x000a7a84) popup_call4_audio_in_window

0x9b4c,	// (0x000a4052) bg_popup_call2_act_pane_cp02

0xd5f4,	// (0x000a7afa) call4_list_conf_pane

0xcc28,	// (0x000a712e) call4_image_pane_g1

0xcc28,	// (0x000a712e) call4_image_pane_g2

0x0001,

0x03f5,	// (0x0009a8fb) call4_image_pane_g

0xd876,	// (0x000a7d7c) list_single_graphic_popup_conf4_pane_ParamLimits

0xd876,	// (0x000a7d7c) list_single_graphic_popup_conf4_pane

0x9b4c,	// (0x000a4052) list_highlight_pane_cp022

0xd889,	// (0x000a7d8f) list_single_graphic_popup_conf4_pane_g1

0xb0ce,	// (0x000a55d4) list_single_graphic_popup_conf4_pane_g2

0x0001,

0xf832,	// (0x000a9d38) list_single_graphic_popup_conf4_pane_g

0xd891,	// (0x000a7d97) list_single_graphic_popup_conf4_pane_t1

0x20d2,	// (0x0009c5d8) popup_vtel_slider_window_ParamLimits

0x20d2,	// (0x0009c5d8) popup_vtel_slider_window

0xd521,	// (0x000a7a27) dialer2_ne_pane_t2_ParamLimits

0xd521,	// (0x000a7a27) dialer2_ne_pane_t2

0x0001,

0xf72c,	// (0x000a9c32) dialer2_ne_pane_t_ParamLimits

0xf72c,	// (0x000a9c32) dialer2_ne_pane_t

0xa49e,	// (0x000a49a4) bg_popup_sub_pane_cp010_ParamLimits

0xa49e,	// (0x000a49a4) bg_popup_sub_pane_cp010

0x6d70,	// (0x000a1276) popup_vtel_slider_window_g1_ParamLimits

0x6d70,	// (0x000a1276) popup_vtel_slider_window_g1

0x6d7c,	// (0x000a1282) popup_vtel_slider_window_g2_ParamLimits

0x6d7c,	// (0x000a1282) popup_vtel_slider_window_g2

0x0003,

0xf837,	// (0x000a9d3d) popup_vtel_slider_window_g_ParamLimits

0xf837,	// (0x000a9d3d) popup_vtel_slider_window_g

0x6dc4,	// (0x000a12ca) vtel_slider_pane_ParamLimits

0x6dc4,	// (0x000a12ca) vtel_slider_pane

0x6dd3,	// (0x000a12d9) vtel_slider_pane_g1_ParamLimits

0x6dd3,	// (0x000a12d9) vtel_slider_pane_g1

0x6de0,	// (0x000a12e6) vtel_slider_pane_g2_ParamLimits

0x6de0,	// (0x000a12e6) vtel_slider_pane_g2

0x6ded,	// (0x000a12f3) vtel_slider_pane_g3_ParamLimits

0x6ded,	// (0x000a12f3) vtel_slider_pane_g3

0x6dd3,	// (0x000a12d9) vtel_slider_pane_g4_ParamLimits

0x6dd3,	// (0x000a12d9) vtel_slider_pane_g4

0x6dfa,	// (0x000a1300) vtel_slider_pane_g5_ParamLimits

0x6dfa,	// (0x000a1300) vtel_slider_pane_g5

0x0004,

0xf840,	// (0x000a9d46) vtel_slider_pane_g_ParamLimits

0xf840,	// (0x000a9d46) vtel_slider_pane_g

0x43d1,	// (0x0009e8d7) main_gallery2_pane

0x654f,	// (0x000a0a55) aid_size_row_itut2_dropdow_list_ParamLimits

0x654f,	// (0x000a0a55) aid_size_row_itut2_dropdow_list

0x65bd,	// (0x000a0ac3) grid_vitu2_function_top_pane_ParamLimits

0x65bd,	// (0x000a0ac3) grid_vitu2_function_top_pane

0x6613,	// (0x000a0b19) popup_vitu2_dropdown_list_window_ParamLimits

0x6613,	// (0x000a0b19) popup_vitu2_dropdown_list_window

0x6633,	// (0x000a0b39) popup_vitu2_match_list_window

0x6e15,	// (0x000a131b) cell_vitu2_function_top_pane_ParamLimits

0x6e15,	// (0x000a131b) cell_vitu2_function_top_pane

0x6e35,	// (0x000a133b) cell_vitu2_function_top_pane_cp01_ParamLimits

0x6e35,	// (0x000a133b) cell_vitu2_function_top_pane_cp01

0x6e53,	// (0x000a1359) cell_vitu2_function_top_wide_pane_ParamLimits

0x6e53,	// (0x000a1359) cell_vitu2_function_top_wide_pane

0x43d1,	// (0x0009e8d7) bg_button_pane_cp012

0x6e71,	// (0x000a1377) cell_vitu2_function_top_pane_g1

0x6e85,	// (0x000a138b) bg_button_pane_cp013_ParamLimits

0x6e85,	// (0x000a138b) bg_button_pane_cp013

0x6ea1,	// (0x000a13a7) cell_vitu2_function_top_wide_pane_g1_ParamLimits

0x6ea1,	// (0x000a13a7) cell_vitu2_function_top_wide_pane_g1

0x1017,	// (0x0009b51d) bg_popup_sub_pane_cp20

0x6eb9,	// (0x000a13bf) list_vitu2_match_list_pane

0xd683,	// (0x000a7b89) bg_popup_sub_pane_cp20_g1

0xd68b,	// (0x000a7b91) bg_popup_sub_pane_cp20_g2

0xab94,	// (0x000a509a) bg_popup_sub_pane_cp20_g3

0xd693,	// (0x000a7b99) bg_popup_sub_pane_cp20_g4

0xab74,	// (0x000a507a) bg_popup_sub_pane_cp20_g5

0xd8b9,	// (0x000a7dbf) bg_popup_sub_pane_cp20_g6

0xd6a3,	// (0x000a7ba9) bg_popup_sub_pane_cp20_g7

0xd6ab,	// (0x000a7bb1) bg_popup_sub_pane_cp20_g8

0xd6b3,	// (0x000a7bb9) bg_popup_sub_pane_cp20_g9

0x0008,

0xf84b,	// (0x000a9d51) bg_popup_sub_pane_cp20_g

0x6ed1,	// (0x000a13d7) list_vitu2_match_list_item_pane_ParamLimits

0x6ed1,	// (0x000a13d7) list_vitu2_match_list_item_pane

0x6ee3,	// (0x000a13e9) list_vitu2_match_list_item_pane_t1

0x1031,	// (0x0009b537) bg_popup_sub_pane_cp21

0x6f35,	// (0x000a143b) grid_vitu2_dropdown_list_pane

0x6f3d,	// (0x000a1443) cell_vitu2_dropdown_list_char_pane_ParamLimits

0x6f3d,	// (0x000a1443) cell_vitu2_dropdown_list_char_pane

0x6f5e,	// (0x000a1464) cell_vitu2_dropdown_list_ctrl_pane_ParamLimits

0x6f5e,	// (0x000a1464) cell_vitu2_dropdown_list_ctrl_pane

0xd8c1,	// (0x000a7dc7) cell_vitu2_dropdown_list_char_pane_g1

0xd8ca,	// (0x000a7dd0) cell_vitu2_dropdown_list_char_pane_g2

0xd8d3,	// (0x000a7dd9) cell_vitu2_dropdown_list_char_pane_g3

0x0002,

0xf868,	// (0x000a9d6e) cell_vitu2_dropdown_list_char_pane_g

0x6f8a,	// (0x000a1490) cell_vitu2_dropdown_list_char_pane_t1

0x6f98,	// (0x000a149e) cell_vitu2_dropdown_list_ctrl_pane_g1_ParamLimits

0x6f98,	// (0x000a149e) cell_vitu2_dropdown_list_ctrl_pane_g1

0x6fa8,	// (0x000a14ae) cell_vitu2_dropdown_list_ctrl_pane_g2_ParamLimits

0x6fa8,	// (0x000a14ae) cell_vitu2_dropdown_list_ctrl_pane_g2

0x6fb9,	// (0x000a14bf) cell_vitu2_dropdown_list_ctrl_pane_g3_ParamLimits

0x6fb9,	// (0x000a14bf) cell_vitu2_dropdown_list_ctrl_pane_g3

0x6fc9,	// (0x000a14cf) cell_vitu2_dropdown_list_ctrl_pane_g4_ParamLimits

0x6fc9,	// (0x000a14cf) cell_vitu2_dropdown_list_ctrl_pane_g4

0x6385,	// (0x000a088b) cell_vitu2_dropdown_list_ctrl_pane_g5_ParamLimits

0x6385,	// (0x000a088b) cell_vitu2_dropdown_list_ctrl_pane_g5

0x0004,

0xf86f,	// (0x000a9d75) cell_vitu2_dropdown_list_ctrl_pane_g_ParamLimits

0xf86f,	// (0x000a9d75) cell_vitu2_dropdown_list_ctrl_pane_g

0x6fe5,	// (0x000a14eb) aid_size_cell_gallery2_ParamLimits

0x6fe5,	// (0x000a14eb) aid_size_cell_gallery2

0x6fff,	// (0x000a1505) grid_gallery2_pane_ParamLimits

0x6fff,	// (0x000a1505) grid_gallery2_pane

0x593b,	// (0x0009fe41) scroll_pane_cp029_ParamLimits

0x593b,	// (0x0009fe41) scroll_pane_cp029

0x7016,	// (0x000a151c) cell_gallery2_pane_ParamLimits

0x7016,	// (0x000a151c) cell_gallery2_pane

0xd8dc,	// (0x000a7de2) cell_gallery2_pane_g2

0x706b,	// (0x000a1571) cell_gallery2_pane_g3

0xd8e4,	// (0x000a7dea) cell_gallery2_pane_g4

0xd8ec,	// (0x000a7df2) cell_gallery2_pane_g5

0xb410,	// (0x000a5916) grid_highlight_pane_cp10

0x6633,	// (0x000a0b39) popup_vitu2_match_list_window_ParamLimits

0x6645,	// (0x000a0b4b) popup_vitu2_query_window_ParamLimits

0x6645,	// (0x000a0b4b) popup_vitu2_query_window

0x1031,	// (0x0009b537) bg_vitu2_candi_button_pane

0xd8c1,	// (0x000a7dc7) cell_vitu2_dropdown_list_char_pane_g1_copy1

0xd8ca,	// (0x000a7dd0) cell_vitu2_dropdown_list_char_pane_g2_copy1

0xd8d3,	// (0x000a7dd9) cell_vitu2_dropdown_list_char_pane_g2_copy2

0x7073,	// (0x000a1579) bg_button_pane_cp015

0x7085,	// (0x000a158b) bg_button_pane_cp016

0x7098,	// (0x000a159e) bg_button_pane_cp017

0xc81e,	// (0x000a6d24) bg_popup_sub_pane_cp22

0xd8f4,	// (0x000a7dfa) popup_vitu2_query_window_g1

0x70dd,	// (0x000a15e3) popup_vitu2_query_window_g2

0x0002,

0xf87a,	// (0x000a9d80) popup_vitu2_query_window_g

0x70fa,	// (0x000a1600) popup_vitu2_query_window_t1_ParamLimits

0x70fa,	// (0x000a1600) popup_vitu2_query_window_t1

0x712d,	// (0x000a1633) popup_vitu2_query_window_t2_ParamLimits

0x712d,	// (0x000a1633) popup_vitu2_query_window_t2

0x713f,	// (0x000a1645) popup_vitu2_query_window_t3_ParamLimits

0x713f,	// (0x000a1645) popup_vitu2_query_window_t3

0x7167,	// (0x000a166d) popup_vitu2_query_window_t4_ParamLimits

0x7167,	// (0x000a166d) popup_vitu2_query_window_t4

0x7188,	// (0x000a168e) popup_vitu2_query_window_t5_ParamLimits

0x7188,	// (0x000a168e) popup_vitu2_query_window_t5

0x0006,

0xf881,	// (0x000a9d87) popup_vitu2_query_window_t_ParamLimits

0xf881,	// (0x000a9d87) popup_vitu2_query_window_t

0xd785,	// (0x000a7c8b) main_cset_text_pane

0x6a3f,	// (0x000a0f45) aid_area_touch_slider_ParamLimits

0x6a5b,	// (0x000a0f61) cset_slider_pane_ParamLimits

0x6a85,	// (0x000a0f8b) main_cset_slider_pane_g1_ParamLimits

0x6a9a,	// (0x000a0fa0) main_cset_slider_pane_g2_ParamLimits

0xd7a6,	// (0x000a7cac) main_cset_slider_pane_g3_ParamLimits

0xd7a6,	// (0x000a7cac) main_cset_slider_pane_g3

0x6aaf,	// (0x000a0fb5) main_cset_slider_pane_g4_ParamLimits

0x6aaf,	// (0x000a0fb5) main_cset_slider_pane_g4

0x6abe,	// (0x000a0fc4) main_cset_slider_pane_g5_ParamLimits

0x6abe,	// (0x000a0fc4) main_cset_slider_pane_g5

0x6acc,	// (0x000a0fd2) main_cset_slider_pane_g6_ParamLimits

0x6acc,	// (0x000a0fd2) main_cset_slider_pane_g6

0xf7db,	// (0x000a9ce1) main_cset_slider_pane_g_ParamLimits

0xd7d6,	// (0x000a7cdc) main_cset_slider_pane_t1_ParamLimits

0x6b60,	// (0x000a1066) main_cset_slider_pane_t2_ParamLimits

0x6b7a,	// (0x000a1080) main_cset_slider_pane_t3_ParamLimits

0x6b94,	// (0x000a109a) main_cset_slider_pane_t4_ParamLimits

0x6bb2,	// (0x000a10b8) main_cset_slider_pane_t5_ParamLimits

0x6bd0,	// (0x000a10d6) main_cset_slider_pane_t6_ParamLimits

0x6be7,	// (0x000a10ed) main_cset_slider_pane_t7_ParamLimits

0x6c15,	// (0x000a111b) main_cset_slider_pane_t8_ParamLimits

0x6c15,	// (0x000a111b) main_cset_slider_pane_t8

0x6c3d,	// (0x000a1143) main_cset_slider_pane_t9_ParamLimits

0x6c3d,	// (0x000a1143) main_cset_slider_pane_t9

0x6c65,	// (0x000a116b) main_cset_slider_pane_t10_ParamLimits

0x6c65,	// (0x000a116b) main_cset_slider_pane_t10

0x6c8d,	// (0x000a1193) main_cset_slider_pane_t11_ParamLimits

0x6c8d,	// (0x000a1193) main_cset_slider_pane_t11

0x6cb7,	// (0x000a11bd) main_cset_slider_pane_t12_ParamLimits

0x6cb7,	// (0x000a11bd) main_cset_slider_pane_t12

0x6cd6,	// (0x000a11dc) main_cset_slider_pane_t13_ParamLimits

0x6cd6,	// (0x000a11dc) main_cset_slider_pane_t13

0xf800,	// (0x000a9d06) main_cset_slider_pane_t_ParamLimits

0x9b4c,	// (0x000a4052) bg_popup_sub_pane_cp011

0xd900,	// (0x000a7e06) main_cset_text_pane_g1

0xd908,	// (0x000a7e0e) main_cset_text_pane_t1

0xd916,	// (0x000a7e1c) main_cset_text_pane_t2

0xd924,	// (0x000a7e2a) main_cset_text_pane_t3

0xd932,	// (0x000a7e38) main_cset_text_pane_t4

0xd940,	// (0x000a7e46) main_cset_text_pane_t5

0xd94e,	// (0x000a7e54) main_cset_text_pane_t6

0xd95c,	// (0x000a7e62) main_cset_text_pane_t7

0x0006,

0xf890,	// (0x000a9d96) main_cset_text_pane_t

0x1031,	// (0x0009b537) main_cam4_burst_pane

0x1031,	// (0x0009b537) main_cam5_pane

0x698e,	// (0x000a0e94) bg_button_pane_cp019

0x6997,	// (0x000a0e9d) bg_button_pane_cp020

0xd7b2,	// (0x000a7cb8) main_cset_slider_pane_g7_ParamLimits

0xd7b2,	// (0x000a7cb8) main_cset_slider_pane_g7

0xd7be,	// (0x000a7cc4) main_cset_slider_pane_g8_ParamLimits

0xd7be,	// (0x000a7cc4) main_cset_slider_pane_g8

0x6ae0,	// (0x000a0fe6) main_cset_slider_pane_g9_ParamLimits

0x6ae0,	// (0x000a0fe6) main_cset_slider_pane_g9

0x6aec,	// (0x000a0ff2) main_cset_slider_pane_g10_ParamLimits

0x6aec,	// (0x000a0ff2) main_cset_slider_pane_g10

0x6af8,	// (0x000a0ffe) main_cset_slider_pane_g11_ParamLimits

0x6af8,	// (0x000a0ffe) main_cset_slider_pane_g11

0x6b04,	// (0x000a100a) main_cset_slider_pane_g12_ParamLimits

0x6b04,	// (0x000a100a) main_cset_slider_pane_g12

0x6b10,	// (0x000a1016) main_cset_slider_pane_g13_ParamLimits

0x6b10,	// (0x000a1016) main_cset_slider_pane_g13

0x6b1e,	// (0x000a1024) main_cset_slider_pane_g14_ParamLimits

0x6b1e,	// (0x000a1024) main_cset_slider_pane_g14

0x6b2c,	// (0x000a1032) main_cset_slider_pane_g15_ParamLimits

0x6b2c,	// (0x000a1032) main_cset_slider_pane_g15

0xd804,	// (0x000a7d0a) main_cset_slider_pane_t14_ParamLimits

0xd804,	// (0x000a7d0a) main_cset_slider_pane_t14

0xd83d,	// (0x000a7d43) main_cset_slider_pane_t15_ParamLimits

0xd83d,	// (0x000a7d43) main_cset_slider_pane_t15

0x71ff,	// (0x000a1705) aid_cam4_burst_size_cell_ParamLimits

0x71ff,	// (0x000a1705) aid_cam4_burst_size_cell

0x721b,	// (0x000a1721) grid_cam4_burst_pane_ParamLimits

0x721b,	// (0x000a1721) grid_cam4_burst_pane

0x724b,	// (0x000a1751) linegrid_cam4_burst_pane_ParamLimits

0x724b,	// (0x000a1751) linegrid_cam4_burst_pane

0x726d,	// (0x000a1773) scroll_pane_cp30_ParamLimits

0x726d,	// (0x000a1773) scroll_pane_cp30

0x7279,	// (0x000a177f) cell_cam4_burst_pane_ParamLimits

0x7279,	// (0x000a177f) cell_cam4_burst_pane

0xd96a,	// (0x000a7e70) linegrid_cam4_burst_pane_g1_ParamLimits

0xd96a,	// (0x000a7e70) linegrid_cam4_burst_pane_g1

0x72b5,	// (0x000a17bb) linegrid_cam4_burst_pane_g2_ParamLimits

0x72b5,	// (0x000a17bb) linegrid_cam4_burst_pane_g2

0xd977,	// (0x000a7e7d) linegrid_cam4_burst_pane_g3_ParamLimits

0xd977,	// (0x000a7e7d) linegrid_cam4_burst_pane_g3

0x0002,

0xf89f,	// (0x000a9da5) linegrid_cam4_burst_pane_g_ParamLimits

0xf89f,	// (0x000a9da5) linegrid_cam4_burst_pane_g

0x72c6,	// (0x000a17cc) linegrid_cam4_burst_pane_g3_copy1_ParamLimits

0x72c6,	// (0x000a17cc) linegrid_cam4_burst_pane_g3_copy1

0xd984,	// (0x000a7e8a) linegrid_cam4_burst_pane_g4_ParamLimits

0xd984,	// (0x000a7e8a) linegrid_cam4_burst_pane_g4

0x72e0,	// (0x000a17e6) linegrid_cam4_burst_pane_g5_ParamLimits

0x72e0,	// (0x000a17e6) linegrid_cam4_burst_pane_g5

0x72f1,	// (0x000a17f7) linegrid_cam4_burst_pane_g6_ParamLimits

0x72f1,	// (0x000a17f7) linegrid_cam4_burst_pane_g6

0xd991,	// (0x000a7e97) linegrid_cam4_burst_pane_g7_ParamLimits

0xd991,	// (0x000a7e97) linegrid_cam4_burst_pane_g7

0x7302,	// (0x000a1808) cell_cam4_burst_pane_g1

0xd9aa,	// (0x000a7eb0) main_cam5_pane_t1_ParamLimits

0xd9aa,	// (0x000a7eb0) main_cam5_pane_t1

0xd9bc,	// (0x000a7ec2) main_cam5_pane_t2_ParamLimits

0xd9bc,	// (0x000a7ec2) main_cam5_pane_t2

0xd9ce,	// (0x000a7ed4) main_cam5_pane_t3_ParamLimits

0xd9ce,	// (0x000a7ed4) main_cam5_pane_t3

0xd9e0,	// (0x000a7ee6) main_cam5_pane_t4_ParamLimits

0xd9e0,	// (0x000a7ee6) main_cam5_pane_t4

0xd9f8,	// (0x000a7efe) main_cam5_pane_t5_ParamLimits

0xd9f8,	// (0x000a7efe) main_cam5_pane_t5

0xda0c,	// (0x000a7f12) main_cam5_pane_t6_ParamLimits

0xda0c,	// (0x000a7f12) main_cam5_pane_t6

0xda20,	// (0x000a7f26) main_cam5_pane_t7_ParamLimits

0xda20,	// (0x000a7f26) main_cam5_pane_t7

0xda32,	// (0x000a7f38) main_cam5_pane_t8_ParamLimits

0xda32,	// (0x000a7f38) main_cam5_pane_t8

0xda4e,	// (0x000a7f54) main_cam5_pane_t9_ParamLimits

0xda4e,	// (0x000a7f54) main_cam5_pane_t9

0xda60,	// (0x000a7f66) main_cam5_pane_t10_ParamLimits

0xda60,	// (0x000a7f66) main_cam5_pane_t10

0xda72,	// (0x000a7f78) main_cam5_pane_t11_ParamLimits

0xda72,	// (0x000a7f78) main_cam5_pane_t11

0xda84,	// (0x000a7f8a) main_cam5_pane_t12_ParamLimits

0xda84,	// (0x000a7f8a) main_cam5_pane_t12

0xdac0,	// (0x000a7fc6) main_cam5_pane_t13_ParamLimits

0xdac0,	// (0x000a7fc6) main_cam5_pane_t13

0x000c,

0xf8ab,	// (0x000a9db1) main_cam5_pane_t_ParamLimits

0xf8ab,	// (0x000a9db1) main_cam5_pane_t

0x0fd6,	// (0x0009b4dc) popup_scut_keymap_window_ParamLimits

0x0fd6,	// (0x0009b4dc) popup_scut_keymap_window

0x7317,	// (0x000a181d) aid_size_cell_brow_shortcut

0xb410,	// (0x000a5916) bg_popup_window_pane_cp010

0x7323,	// (0x000a1829) grid_scut_pane

0x732f,	// (0x000a1835) cell_scut_pane_ParamLimits

0x732f,	// (0x000a1835) cell_scut_pane

0x7346,	// (0x000a184c) cell_scut_pane_g1

0xdadd,	// (0x000a7fe3) cell_scut_pane_t1

0xdaec,	// (0x000a7ff2) cell_scut_pane_t2

0x734f,	// (0x000a1855) cell_scut_pane_t3

0x0002,

0xf8c6,	// (0x000a9dcc) cell_scut_pane_t

0x511b,	// (0x0009f621) main_mup3_pane_g8_ParamLimits

0x511b,	// (0x0009f621) main_mup3_pane_g8

0x655d,	// (0x000a0a63) area_vitu2_query_pane_ParamLimits

0x655d,	// (0x000a0a63) area_vitu2_query_pane

0x70ab,	// (0x000a15b1) input_focus_pane_cp08

0xdafb,	// (0x000a8001) area_vitu2_query_pane_g1

0x735d,	// (0x000a1863) area_vitu2_query_pane_g2

0x0001,

0xf8cd,	// (0x000a9dd3) area_vitu2_query_pane_g

0x736e,	// (0x000a1874) area_vitu2_query_pane_t1_ParamLimits

0x736e,	// (0x000a1874) area_vitu2_query_pane_t1

0x7382,	// (0x000a1888) area_vitu2_query_pane_t2_ParamLimits

0x7382,	// (0x000a1888) area_vitu2_query_pane_t2

0x7396,	// (0x000a189c) area_vitu2_query_pane_t3_ParamLimits

0x7396,	// (0x000a189c) area_vitu2_query_pane_t3

0xa074,	// (0x000a457a) area_vitu2_query_pane_t4_ParamLimits

0xa074,	// (0x000a457a) area_vitu2_query_pane_t4

0xa09c,	// (0x000a45a2) area_vitu2_query_pane_t5_ParamLimits

0xa09c,	// (0x000a45a2) area_vitu2_query_pane_t5

0xa0c4,	// (0x000a45ca) area_vitu2_query_pane_t6_ParamLimits

0xa0c4,	// (0x000a45ca) area_vitu2_query_pane_t6

0x0006,

0xf8d2,	// (0x000a9dd8) area_vitu2_query_pane_t_ParamLimits

0xf8d2,	// (0x000a9dd8) area_vitu2_query_pane_t

0x73be,	// (0x000a18c4) bg_button_pane_cp018

0x73cc,	// (0x000a18d2) bg_button_pane_cp021

0x73d8,	// (0x000a18de) bg_button_pane_cp022

0x73e9,	// (0x000a18ef) input_focus_pane_cp09

0xb1f2,	// (0x000a56f8) aid_size_touch_mv_arrow_left

0xb21d,	// (0x000a5723) aid_size_touch_mv_arrow_right

0x6b44,	// (0x000a104a) main_cset_slider_pane_g16_ParamLimits

0x6b44,	// (0x000a104a) main_cset_slider_pane_g16

0x6b52,	// (0x000a1058) main_cset_slider_pane_g17_ParamLimits

0x6b52,	// (0x000a1058) main_cset_slider_pane_g17

0x7302,	// (0x000a1808) cell_cam4_burst_pane_g1_ParamLimits

0x9b4c,	// (0x000a4052) compa_mode_pane

0x6d88,	// (0x000a128e) popup_vtel_slider_window_g3_ParamLimits

0x6d88,	// (0x000a128e) popup_vtel_slider_window_g3

0x6d9c,	// (0x000a12a2) popup_vtel_slider_window_g4_ParamLimits

0x6d9c,	// (0x000a12a2) popup_vtel_slider_window_g4

0x6db0,	// (0x000a12b6) popup_vtel_slider_window_t1_ParamLimits

0x6db0,	// (0x000a12b6) popup_vtel_slider_window_t1

0x1031,	// (0x0009b537) main_cl_pane

0x446b,	// (0x0009e971) popup_imed_adjust2_window_ParamLimits

0xc81e,	// (0x000a6d24) bg_tb_trans_pane_cp05_ParamLimits

0xd12d,	// (0x000a7633) popup_imed_adjust2_window_g1_ParamLimits

0xd13c,	// (0x000a7642) popup_imed_adjust2_window_g2_ParamLimits

0xd13c,	// (0x000a7642) popup_imed_adjust2_window_g2

0xd148,	// (0x000a764e) popup_imed_adjust2_window_g3_ParamLimits

0xd148,	// (0x000a764e) popup_imed_adjust2_window_g3

0x0002,

0x04f3,	// (0x0009a9f9) popup_imed_adjust2_window_g_ParamLimits

0x04f3,	// (0x0009a9f9) popup_imed_adjust2_window_g

0xd154,	// (0x000a765a) popup_imed_adjust2_window_t1_ParamLimits

0xd16c,	// (0x000a7672) slider_imed_adjust_pane_ParamLimits

0xd180,	// (0x000a7686) slider_imed_adjust_pane_g1_ParamLimits

0xd190,	// (0x000a7696) slider_imed_adjust_pane_g2_ParamLimits

0xd1a0,	// (0x000a76a6) slider_imed_adjust_pane_g3_ParamLimits

0xd1b1,	// (0x000a76b7) slider_imed_adjust_pane_g4_ParamLimits

0x04fa,	// (0x0009aa00) slider_imed_adjust_pane_g_ParamLimits

0x629a,	// (0x000a07a0) aid_touch_area_cam4_ParamLimits

0x629a,	// (0x000a07a0) aid_touch_area_cam4

0x62aa,	// (0x000a07b0) battery_pane_cp01

0x6331,	// (0x000a0837) main_camera4_pane_g6_ParamLimits

0x6331,	// (0x000a0837) main_camera4_pane_g6

0x634f,	// (0x000a0855) main_camera4_pane_t2_ParamLimits

0x634f,	// (0x000a0855) main_camera4_pane_t2

0x0001,

0xf760,	// (0x000a9c66) main_camera4_pane_t_ParamLimits

0xf760,	// (0x000a9c66) main_camera4_pane_t

0x63e4,	// (0x000a08ea) aid_touch_area_vid4_ParamLimits

0x63e4,	// (0x000a08ea) aid_touch_area_vid4

0x6424,	// (0x000a092a) main_video4_pane_g5_ParamLimits

0x6424,	// (0x000a092a) main_video4_pane_g5

0x6448,	// (0x000a094e) vid4_progress_pane_ParamLimits

0x6448,	// (0x000a094e) vid4_progress_pane

0xd7ca,	// (0x000a7cd0) main_cset_slider_pane_g18_ParamLimits

0xd7ca,	// (0x000a7cd0) main_cset_slider_pane_g18

0xd99e,	// (0x000a7ea4) cell_cam4_burst_pane_g2_ParamLimits

0xd99e,	// (0x000a7ea4) cell_cam4_burst_pane_g2

0x0001,

0xf8a6,	// (0x000a9dac) cell_cam4_burst_pane_g_ParamLimits

0xf8a6,	// (0x000a9dac) cell_cam4_burst_pane_g

0x73fa,	// (0x000a1900) bg_cl_pane_ParamLimits

0x73fa,	// (0x000a1900) bg_cl_pane

0x7406,	// (0x000a190c) cl_header_pane_ParamLimits

0x7406,	// (0x000a190c) cl_header_pane

0x7412,	// (0x000a1918) cl_listscroll_pane_ParamLimits

0x7412,	// (0x000a1918) cl_listscroll_pane

0xdb07,	// (0x000a800d) bg_cl_pane_g1

0xdb0f,	// (0x000a8015) bg_cl_pane_g2

0xdb17,	// (0x000a801d) bg_cl_pane_g3

0xdb1f,	// (0x000a8025) bg_cl_pane_g4

0xdb27,	// (0x000a802d) bg_cl_pane_g5

0xdb2f,	// (0x000a8035) bg_cl_pane_g6

0xdb37,	// (0x000a803d) bg_cl_pane_g7

0xdb3f,	// (0x000a8045) bg_cl_pane_g8

0xdb47,	// (0x000a804d) bg_cl_pane_g9

0x0008,

0x0797,	// (0x0009ac9d) bg_cl_pane_g

0x741e,	// (0x000a1924) aid_height_cl_leading_ParamLimits

0x741e,	// (0x000a1924) aid_height_cl_leading

0x742a,	// (0x000a1930) aid_height_cl_text_ParamLimits

0x742a,	// (0x000a1930) aid_height_cl_text

0xf051,	// (0x000a9557) bg_cl_header_pane_ParamLimits

0xf051,	// (0x000a9557) bg_cl_header_pane

0x7442,	// (0x000a1948) cl_header_pane_g1_ParamLimits

0x7442,	// (0x000a1948) cl_header_pane_g1

0x744f,	// (0x000a1955) cl_header_pane_t1_ParamLimits

0x744f,	// (0x000a1955) cl_header_pane_t1

0xdb4f,	// (0x000a8055) cl_list_pane

0xd79d,	// (0x000a7ca3) hc_scroll_pane_cp01

0xab74,	// (0x000a507a) bg_cl_header_pane_g1

0xd683,	// (0x000a7b89) bg_cl_header_pane_g2

0xab94,	// (0x000a509a) bg_cl_header_pane_g3

0xd693,	// (0x000a7b99) bg_cl_header_pane_g4

0xd68b,	// (0x000a7b91) bg_cl_header_pane_g5

0xd8b9,	// (0x000a7dbf) bg_cl_header_pane_g6

0xd6ab,	// (0x000a7bb1) bg_cl_header_pane_g7

0xd6b3,	// (0x000a7bb9) bg_cl_header_pane_g8

0xd6a3,	// (0x000a7ba9) bg_cl_header_pane_g9

0x0008,

0xf8e1,	// (0x000a9de7) bg_cl_header_pane_g

0x7461,	// (0x000a1967) hc_cl_list_double_graphic_heading_pane_ParamLimits

0x7461,	// (0x000a1967) hc_cl_list_double_graphic_heading_pane

0x7475,	// (0x000a197b) hc_cl_list_single_graphic_pane_ParamLimits

0x7475,	// (0x000a197b) hc_cl_list_single_graphic_pane

0x748f,	// (0x000a1995) hc_cl_list_single_graphic_pane_g1_ParamLimits

0x748f,	// (0x000a1995) hc_cl_list_single_graphic_pane_g1

0x749b,	// (0x000a19a1) hc_cl_list_single_graphic_pane_g2_ParamLimits

0x749b,	// (0x000a19a1) hc_cl_list_single_graphic_pane_g2

0x0001,

0xf8f4,	// (0x000a9dfa) hc_cl_list_single_graphic_pane_g_ParamLimits

0xf8f4,	// (0x000a9dfa) hc_cl_list_single_graphic_pane_g

0x74af,	// (0x000a19b5) hc_cl_list_single_graphic_pane_t1_ParamLimits

0x74af,	// (0x000a19b5) hc_cl_list_single_graphic_pane_t1

0x748f,	// (0x000a1995) hc_cl_list_double_graphic_heading_pane_g1_ParamLimits

0x748f,	// (0x000a1995) hc_cl_list_double_graphic_heading_pane_g1

0x74c4,	// (0x000a19ca) hc_cl_list_double_graphic_heading_pane_g2_ParamLimits

0x74c4,	// (0x000a19ca) hc_cl_list_double_graphic_heading_pane_g2

0x74d8,	// (0x000a19de) hc_cl_list_double_graphic_heading_pane_g3_ParamLimits

0x74d8,	// (0x000a19de) hc_cl_list_double_graphic_heading_pane_g3

0x0002,

0xf8f9,	// (0x000a9dff) hc_cl_list_double_graphic_heading_pane_g_ParamLimits

0xf8f9,	// (0x000a9dff) hc_cl_list_double_graphic_heading_pane_g

0x74ec,	// (0x000a19f2) hc_cl_list_double_graphic_heading_pane_t1_ParamLimits

0x74ec,	// (0x000a19f2) hc_cl_list_double_graphic_heading_pane_t1

0x7501,	// (0x000a1a07) hc_cl_list_double_graphic_heading_pane_t2_ParamLimits

0x7501,	// (0x000a1a07) hc_cl_list_double_graphic_heading_pane_t2

0x0001,

0xf900,	// (0x000a9e06) hc_cl_list_double_graphic_heading_pane_t_ParamLimits

0xf900,	// (0x000a9e06) hc_cl_list_double_graphic_heading_pane_t

0x751e,	// (0x000a1a24) vid4_progress_pane_g1

0x7530,	// (0x000a1a36) vid4_progress_pane_g2

0xae5d,	// (0x000a5363) vid4_progress_pane_g3

0x7540,	// (0x000a1a46) vid4_progress_pane_g4

0x0004,

0xf905,	// (0x000a9e0b) vid4_progress_pane_g

0x755e,	// (0x000a1a64) vid4_progress_pane_t1

0x7573,	// (0x000a1a79) vid4_progress_pane_t2

0x0002,

0xf910,	// (0x000a9e16) vid4_progress_pane_t

0x759f,	// (0x000a1aa5) wait_bar_pane_cp07

0xca19,	// (0x000a6f1f) blid_firmament_pane_ParamLimits

0xca5c,	// (0x000a6f62) popup_blid_sat_info2_window_g1

0xca80,	// (0x000a6f86) popup_blid_sat_info2_window_t3

0xca8e,	// (0x000a6f94) popup_blid_sat_info2_window_t4

0xca9c,	// (0x000a6fa2) popup_blid_sat_info2_window_t5

0xcaaa,	// (0x000a6fb0) popup_blid_sat_info2_window_t6

0xcaba,	// (0x000a6fc0) popup_blid_sat_info2_window_t7

0xcac8,	// (0x000a6fce) popup_blid_sat_info2_window_t8

0xcad6,	// (0x000a6fdc) popup_blid_sat_info2_window_t9

0xcae4,	// (0x000a6fea) popup_blid_sat_info2_window_t10

0xcba8,	// (0x000a70ae) aid_firma_cardinal_ParamLimits

0xcbbc,	// (0x000a70c2) blid_firmament_pane_t1_ParamLimits

0xcbd3,	// (0x000a70d9) blid_firmament_pane_t2_ParamLimits

0xcbea,	// (0x000a70f0) blid_firmament_pane_t3_ParamLimits

0xcc01,	// (0x000a7107) blid_firmament_pane_t4_ParamLimits

0x03ec,	// (0x0009a8f2) blid_firmament_pane_t_ParamLimits

0xcc18,	// (0x000a711e) blid_sat_info_pane_ParamLimits

0x43d1,	// (0x0009e8d7) main_cam_set_pane_ParamLimits

0x58d4,	// (0x0009fdda) aid_size_cell_colour_35_ParamLimits

0x58ee,	// (0x0009fdf4) aid_size_cell_colour_112_ParamLimits

0x5905,	// (0x0009fe0b) aid_size_cell_effect_ParamLimits

0xa49e,	// (0x000a49a4) bg_tb_trans_pane_cp02_ParamLimits

0xb2e0,	// (0x000a57e6) heading_imed_pane_ParamLimits

0x591f,	// (0x0009fe25) listscroll_imed_pane_ParamLimits

0xbe38,	// (0x000a633e) popup_call2_audio_first_window_g5_ParamLimits

0xbe38,	// (0x000a633e) popup_call2_audio_first_window_g5

0x6049,	// (0x000a054f) aid_size_touch_image3_arrow_left_ParamLimits

0x6049,	// (0x000a054f) aid_size_touch_image3_arrow_left

0x605f,	// (0x000a0565) aid_size_touch_image3_arrow_right_ParamLimits

0x605f,	// (0x000a0565) aid_size_touch_image3_arrow_right

0x7589,	// (0x000a1a8f) vid4_progress_pane_t3

0x5bd3,	// (0x000a00d9) main_hwr_training_symbol_option_pane_ParamLimits

0x5bd3,	// (0x000a00d9) main_hwr_training_symbol_option_pane

0xd423,	// (0x000a7929) popup_hwr_training_preview_window_ParamLimits

0xd423,	// (0x000a7929) popup_hwr_training_preview_window

0x5c34,	// (0x000a013a) hwr_training_navi_pane_g5_ParamLimits

0x5c34,	// (0x000a013a) hwr_training_navi_pane_g5

0xd65f,	// (0x000a7b65) popup_char_count_window

0x1017,	// (0x0009b51d) bg_popup_sub_pane_cp20_ParamLimits

0x6eb9,	// (0x000a13bf) list_vitu2_match_list_pane_ParamLimits

0x6ec5,	// (0x000a13cb) vitu2_page_scroll_pane_ParamLimits

0x6ec5,	// (0x000a13cb) vitu2_page_scroll_pane

0xdb58,	// (0x000a805e) list_single_hwr_training_symbol_option_pane_ParamLimits

0xdb58,	// (0x000a805e) list_single_hwr_training_symbol_option_pane

0xdb6b,	// (0x000a8071) list_single_hwr_training_symbol_option_pane_g1

0xdb73,	// (0x000a8079) list_single_hwr_training_symbol_option_pane_t1

0xdb81,	// (0x000a8087) bg_button_pane_cp023

0xdb8a,	// (0x000a8090) bg_button_pane_cp024

0x75e7,	// (0x000a1aed) vitu2_page_scroll_pane_g1

0x75ef,	// (0x000a1af5) vitu2_page_scroll_pane_g2

0x0001,

0xf917,	// (0x000a9e1d) vitu2_page_scroll_pane_g

0x75f7,	// (0x000a1afd) vitu2_page_scroll_pane_t1

0xd1dd,	// (0x000a76e3) popup_char_count_window_g1

0xdbbd,	// (0x000a80c3) popup_char_count_window_g2

0xdbc6,	// (0x000a80cc) popup_char_count_window_g3

0x0002,

0x07e5,	// (0x0009aceb) popup_char_count_window_g

0xdbcf,	// (0x000a80d5) popup_char_count_window_t1

0x1031,	// (0x0009b537) main_vded2_pane

0xd119,	// (0x000a761f) aid_size_cell_imed_line

0xd123,	// (0x000a7629) grid_imed_line_width_pane

0x64b4,	// (0x000a09ba) vid4_indicators_pane_g4

0xdbdd,	// (0x000a80e3) cell_imed_line_width_pane_ParamLimits

0xdbdd,	// (0x000a80e3) cell_imed_line_width_pane

0xdbf1,	// (0x000a80f7) cell_imed_line_width_pane_g1

0xd89f,	// (0x000a7da5) cell_imed_line_width_pane_g2

0x0001,

0xf91c,	// (0x000a9e22) cell_imed_line_width_pane_g

0x7606,	// (0x000a1b0c) main_vded2_pane_g1_ParamLimits

0x7606,	// (0x000a1b0c) main_vded2_pane_g1

0x7613,	// (0x000a1b19) main_vded2_pane_g2_ParamLimits

0x7613,	// (0x000a1b19) main_vded2_pane_g2

0x0001,

0xf921,	// (0x000a9e27) main_vded2_pane_g_ParamLimits

0xf921,	// (0x000a9e27) main_vded2_pane_g

0x7621,	// (0x000a1b27) vded2_slider_pane_ParamLimits

0x7621,	// (0x000a1b27) vded2_slider_pane

0x762e,	// (0x000a1b34) aid_size_touch_vded2_end

0x7638,	// (0x000a1b3e) aid_size_touch_vded2_playhead

0xdbfa,	// (0x000a8100) aid_size_touch_vded2_start

0xdc02,	// (0x000a8108) vded2_slider_bg_pane

0xdc0b,	// (0x000a8111) vded2_slider_pane_g1

0xdc14,	// (0x000a811a) vded2_slider_pane_g2

0x7640,	// (0x000a1b46) vded2_slider_pane_g3

0x0002,

0xf926,	// (0x000a9e2c) vded2_slider_pane_g

0xdc1c,	// (0x000a8122) vded2_slider_bg_pane_g1

0xdc25,	// (0x000a812b) vded2_slider_bg_pane_g2

0xdc2e,	// (0x000a8134) vded2_slider_bg_pane_g3

0x0002,

0x07fd,	// (0x0009ad03) vded2_slider_bg_pane_g

0x3cac,	// (0x0009e1b2) aid_postcard_touch_down_pane_ParamLimits

0x3cac,	// (0x0009e1b2) aid_postcard_touch_down_pane

0x3cbc,	// (0x0009e1c2) aid_postcard_touch_up_pane_ParamLimits

0x3cbc,	// (0x0009e1c2) aid_postcard_touch_up_pane

0x1031,	// (0x0009b537) main_blid2_pane

0x43fa,	// (0x0009e900) popup_blid2_search_window

0x9b4c,	// (0x000a4052) blid2_gps_pane

0x9b4c,	// (0x000a4052) blid2_navig_pane

0x9b4c,	// (0x000a4052) blid2_search_pane

0x9b4c,	// (0x000a4052) blid2_tripm_pane

0x7649,	// (0x000a1b4f) blid2_search_pane_g1_ParamLimits

0x7649,	// (0x000a1b4f) blid2_search_pane_g1

0x7659,	// (0x000a1b5f) blid2_search_pane_t1_ParamLimits

0x7659,	// (0x000a1b5f) blid2_search_pane_t1

0x766b,	// (0x000a1b71) aid_size_cell_blid2_gps_ParamLimits

0x766b,	// (0x000a1b71) aid_size_cell_blid2_gps

0x767b,	// (0x000a1b81) blid2_gps_pane_g1_ParamLimits

0x767b,	// (0x000a1b81) blid2_gps_pane_g1

0x7687,	// (0x000a1b8d) grid_blid2_satellite_pane_ParamLimits

0x7687,	// (0x000a1b8d) grid_blid2_satellite_pane

0x7697,	// (0x000a1b9d) blid2_navig_pane_g1_ParamLimits

0x7697,	// (0x000a1b9d) blid2_navig_pane_g1

0x76a3,	// (0x000a1ba9) blid2_navig_pane_t1_ParamLimits

0x76a3,	// (0x000a1ba9) blid2_navig_pane_t1

0x76b5,	// (0x000a1bbb) blid2_navig_pane_t2_ParamLimits

0x76b5,	// (0x000a1bbb) blid2_navig_pane_t2

0x0001,

0xf92d,	// (0x000a9e33) blid2_navig_pane_t_ParamLimits

0xf92d,	// (0x000a9e33) blid2_navig_pane_t

0x76c7,	// (0x000a1bcd) blid2_navig_ring_pane_ParamLimits

0x76c7,	// (0x000a1bcd) blid2_navig_ring_pane

0x76d7,	// (0x000a1bdd) blid2_speed_pane_ParamLimits

0x76d7,	// (0x000a1bdd) blid2_speed_pane

0x76e3,	// (0x000a1be9) blid2_tripm_pane_g1_ParamLimits

0x76e3,	// (0x000a1be9) blid2_tripm_pane_g1

0x76f3,	// (0x000a1bf9) blid2_tripm_pane_g2_ParamLimits

0x76f3,	// (0x000a1bf9) blid2_tripm_pane_g2

0x76ff,	// (0x000a1c05) blid2_tripm_pane_g3_ParamLimits

0x76ff,	// (0x000a1c05) blid2_tripm_pane_g3

0x770b,	// (0x000a1c11) blid2_tripm_pane_g4_ParamLimits

0x770b,	// (0x000a1c11) blid2_tripm_pane_g4

0x7717,	// (0x000a1c1d) blid2_tripm_pane_g5_ParamLimits

0x7717,	// (0x000a1c1d) blid2_tripm_pane_g5

0x0005,

0xf932,	// (0x000a9e38) blid2_tripm_pane_g_ParamLimits

0xf932,	// (0x000a9e38) blid2_tripm_pane_g

0x7733,	// (0x000a1c39) blid2_tripm_pane_t1_ParamLimits

0x7733,	// (0x000a1c39) blid2_tripm_pane_t1

0x7747,	// (0x000a1c4d) blid2_tripm_pane_t2_ParamLimits

0x7747,	// (0x000a1c4d) blid2_tripm_pane_t2

0x7759,	// (0x000a1c5f) blid2_tripm_pane_t3_ParamLimits

0x7759,	// (0x000a1c5f) blid2_tripm_pane_t3

0x0003,

0xf93f,	// (0x000a9e45) blid2_tripm_pane_t_ParamLimits

0xf93f,	// (0x000a9e45) blid2_tripm_pane_t

0x778b,	// (0x000a1c91) cell_blid2_satellite_pane_ParamLimits

0x778b,	// (0x000a1c91) cell_blid2_satellite_pane

0x77a5,	// (0x000a1cab) cell_blid2_satellite_pane_g1

0xdc37,	// (0x000a813d) cell_blid2_satellite_pane_t1

0xcc28,	// (0x000a712e) blid2_speed_pane_g1

0xdc45,	// (0x000a814b) blid2_speed_pane_t1

0xdc53,	// (0x000a8159) blid2_speed_pane_t2

0x0001,

0x081f,	// (0x0009ad25) blid2_speed_pane_t

0xcc28,	// (0x000a712e) blid2_navig_ring_pane_g1

0x77ae,	// (0x000a1cb4) blid2_navig_ring_pane_g2

0x77b6,	// (0x000a1cbc) blid2_navig_ring_pane_g3

0x77be,	// (0x000a1cc4) blid2_navig_ring_pane_g4

0x77c6,	// (0x000a1ccc) blid2_navig_ring_pane_g5

0x0004,

0xf948,	// (0x000a9e4e) blid2_navig_ring_pane_g

0x9b4c,	// (0x000a4052) bg_popup_window_pane_cp011

0xdc61,	// (0x000a8167) popup_blid2_search_window_g1

0xdc69,	// (0x000a816f) popup_blid2_search_window_t1

0xdc77,	// (0x000a817d) popup_blid2_search_window_t2

0x0001,

0x082f,	// (0x0009ad35) popup_blid2_search_window_t

0xaa83,	// (0x000a4f89) main_browser_pane_g1

0xa774,	// (0x000a4c7a) main_browser_pane_ParamLimits

0x43d1,	// (0x0009e8d7) bg_button_pane_cp011_ParamLimits

0x675f,	// (0x000a0c65) cell_vitu2_function_pane_g1_ParamLimits

0xc81e,	// (0x000a6d24) bg_popup_sub_pane_cp22_ParamLimits

0x70ab,	// (0x000a15b1) input_focus_pane_cp08_ParamLimits

0x70c2,	// (0x000a15c8) popup_vitu2_query_button_pane_ParamLimits

0x70c2,	// (0x000a15c8) popup_vitu2_query_button_pane

0x70d3,	// (0x000a15d9) popup_vitu2_query_input_button_pane

0xd8f4,	// (0x000a7dfa) popup_vitu2_query_window_g1_ParamLimits

0x70dd,	// (0x000a15e3) popup_vitu2_query_window_g2_ParamLimits

0xf87a,	// (0x000a9d80) popup_vitu2_query_window_g_ParamLimits

0x9b4c,	// (0x000a4052) bg_button_pane_cp026

0x77ce,	// (0x000a1cd4) popup_vitu2_query_input_button_pane_g1

0x9b4c,	// (0x000a4052) bg_button_pane_cp025

0xdc85,	// (0x000a818b) popup_vitu2_query_button_pane_t1

0x4e53,	// (0x0009f359) main_mp3_pane_t6

0x4e63,	// (0x0009f369) popup_slider_window_cp01

0x6393,	// (0x000a0899) cam4_battery_pane

0x6473,	// (0x000a0979) cam4_battery_pane_cp02

0x7516,	// (0x000a1a1c) cam4_battery_pane_cp01

0x7516,	// (0x000a1a1c) cam4_battery_pane_cp03

0xd8a7,	// (0x000a7dad) cam4_battery_pane_g1

0xcc28,	// (0x000a712e) cam4_battery_pane_g2

0x0001,

0xf953,	// (0x000a9e59) cam4_battery_pane_g

0xcaf2,	// (0x000a6ff8) popup_blid_sat_info2_window_t11

0xb1f2,	// (0x000a56f8) aid_size_touch_mv_arrow_left_ParamLimits

0xb21d,	// (0x000a5723) aid_size_touch_mv_arrow_right_ParamLimits

0xb27b,	// (0x000a5781) navi_pane_g1_ParamLimits

0xb287,	// (0x000a578d) navi_pane_g2_ParamLimits

0xb2b5,	// (0x000a57bb) navi_pane_g3_ParamLimits

0xf3ea,	// (0x000a98f0) navi_pane_g_ParamLimits

0x3642,	// (0x0009db48) navi_pane_mv_t1_ParamLimits

0x592b,	// (0x0009fe31) grid_imed_effect_pane_ParamLimits

0x1f92,	// (0x0009c498) aid_placing_vt_slider_lsc

0xa9d2,	// (0x000a4ed8) aid_placing_vt_slider_prt

0xa49e,	// (0x000a49a4) bg_tb_trans_pane_cp01_ParamLimits

0xcda8,	// (0x000a72ae) popup_image_details_window_g1_ParamLimits

0xcdbb,	// (0x000a72c1) popup_image_details_window_g2_ParamLimits

0xcdd0,	// (0x000a72d6) popup_image_details_window_g3_ParamLimits

0xcdd0,	// (0x000a72d6) popup_image_details_window_g3

0x0431,	// (0x0009a937) popup_image_details_window_g_ParamLimits

0xcde4,	// (0x000a72ea) popup_image_details_window_t1_ParamLimits

0xcdf6,	// (0x000a72fc) popup_image_details_window_t2_ParamLimits

0xce0f,	// (0x000a7315) popup_image_details_window_t3_ParamLimits

0xce23,	// (0x000a7329) popup_image_details_window_t4_ParamLimits

0xce3e,	// (0x000a7344) popup_image_details_window_t5_ParamLimits

0x0438,	// (0x0009a93e) popup_image_details_window_t_ParamLimits

0x7436,	// (0x000a193c) cl_header_name_pane_ParamLimits

0x7436,	// (0x000a193c) cl_header_name_pane

0x77d6,	// (0x000a1cdc) cl_header_name_pane_t1_ParamLimits

0x77d6,	// (0x000a1cdc) cl_header_name_pane_t1

0x77ed,	// (0x000a1cf3) cl_header_name_pane_t2_ParamLimits

0x77ed,	// (0x000a1cf3) cl_header_name_pane_t2

0x7817,	// (0x000a1d1d) cl_header_name_pane_t3_ParamLimits

0x7817,	// (0x000a1d1d) cl_header_name_pane_t3

0x0002,

0xf958,	// (0x000a9e5e) cl_header_name_pane_t_ParamLimits

0xf958,	// (0x000a9e5e) cl_header_name_pane_t

0xb3a9,	// (0x000a58af) navi_pane_mv_g2_ParamLimits

0xd639,	// (0x000a7b3f) field_vitu2_entry_pane_g1_ParamLimits

0xd645,	// (0x000a7b4b) field_vitu2_entry_pane_g2_ParamLimits

0xd651,	// (0x000a7b57) field_vitu2_entry_pane_g3_ParamLimits

0xd651,	// (0x000a7b57) field_vitu2_entry_pane_g3

0xf792,	// (0x000a9c98) field_vitu2_entry_pane_g_ParamLimits

0x66ea,	// (0x000a0bf0) cell_vitu2_itu_pane_g1_ParamLimits

0x66fa,	// (0x000a0c00) cell_vitu2_itu_pane_g2_ParamLimits

0x66fa,	// (0x000a0c00) cell_vitu2_itu_pane_g2

0x0001,

0xf79e,	// (0x000a9ca4) cell_vitu2_itu_pane_g_ParamLimits

0xf79e,	// (0x000a9ca4) cell_vitu2_itu_pane_g

0x43d1,	// (0x0009e8d7) bg_vkb2_func_pane_cp05_ParamLimits

0x43d1,	// (0x0009e8d7) bg_vkb2_func_pane_cp05

0x43d1,	// (0x0009e8d7) bg_vkb2_func_pane_cp03

0x43d1,	// (0x0009e8d7) bg_vkb2_func_pane_cp04

0x43d1,	// (0x0009e8d7) bg_vkb2_func_pane_cp10_ParamLimits

0x43d1,	// (0x0009e8d7) bg_vkb2_func_pane_cp10

0x73d8,	// (0x000a18de) bg_vkb2_func_pane_cp08

0x73be,	// (0x000a18c4) bg_vkb2_func_pane_cp06

0x73cc,	// (0x000a18d2) bg_vkb2_func_pane_cp07

0xdb93,	// (0x000a8099) bg_vkb2_func_pane_cp11_ParamLimits

0xdb93,	// (0x000a8099) bg_vkb2_func_pane_cp11

0xdba8,	// (0x000a80ae) bg_vkb2_func_pane_cp12_ParamLimits

0xdba8,	// (0x000a80ae) bg_vkb2_func_pane_cp12

0x9b4c,	// (0x000a4052) bg_vkb2_func_pane_cp09

0xd683,	// (0x000a7b89) bg_vkb2_func_pane_g1

0xab94,	// (0x000a509a) bg_vkb2_func_pane_g2

0xd68b,	// (0x000a7b91) bg_vkb2_func_pane_g3

0xd693,	// (0x000a7b99) bg_vkb2_func_pane_g4

0xd8b9,	// (0x000a7dbf) bg_vkb2_func_pane_g5

0xd6ab,	// (0x000a7bb1) bg_vkb2_func_pane_g6

0xd6b3,	// (0x000a7bb9) bg_vkb2_func_pane_g7

0xd6a3,	// (0x000a7ba9) bg_vkb2_func_pane_g8

0xab74,	// (0x000a507a) bg_vkb2_func_pane_g9

0x0008,

0xf95f,	// (0x000a9e65) bg_vkb2_func_pane_g

0x7725,	// (0x000a1c2b) blid2_tripm_pane_g6_ParamLimits

0x7725,	// (0x000a1c2b) blid2_tripm_pane_g6

0xd4db,	// (0x000a79e1) mp4_progress_pane_g1

0x777f,	// (0x000a1c85) blid2_tripm_values_pane_ParamLimits

0x777f,	// (0x000a1c85) blid2_tripm_values_pane

0x783c,	// (0x000a1d42) blid2_tripm_values_pane_t1

0x784a,	// (0x000a1d50) blid2_tripm_values_pane_t2

0x7858,	// (0x000a1d5e) blid2_tripm_values_pane_t3

0x7866,	// (0x000a1d6c) blid2_tripm_values_pane_t4

0x7874,	// (0x000a1d7a) blid2_tripm_values_pane_t5

0x7882,	// (0x000a1d88) blid2_tripm_values_pane_t6

0x7890,	// (0x000a1d96) blid2_tripm_values_pane_t7

0x789e,	// (0x000a1da4) blid2_tripm_values_pane_t8

0x78ac,	// (0x000a1db2) blid2_tripm_values_pane_t9

0x0008,

0xf972,	// (0x000a9e78) blid2_tripm_values_pane_t

0x1fd2,	// (0x0009c4d8) call_video_pane_t1_ParamLimits

0x1ff3,	// (0x0009c4f9) call_video_pane_t2_ParamLimits

0xf273,	// (0x000a9779) call_video_pane_t_ParamLimits

0x3b7b,	// (0x0009e081) msg_header_pane_g1_ParamLimits

0xb582,	// (0x000a5a88) msg_header_pane_g2_ParamLimits

0xb582,	// (0x000a5a88) msg_header_pane_g2

0x0001,

0xf48d,	// (0x000a9993) msg_header_pane_g_ParamLimits

0xf48d,	// (0x000a9993) msg_header_pane_g

0xa774,	// (0x000a4c7a) main_clock2_pane_ParamLimits

0x56bc,	// (0x0009fbc2) grid_clock2_toolbar_pane_ParamLimits

0x56bc,	// (0x0009fbc2) grid_clock2_toolbar_pane

0x56bc,	// (0x0009fbc2) listscroll_clock2_pane_ParamLimits

0x56bc,	// (0x0009fbc2) listscroll_clock2_pane

0x5766,	// (0x0009fc6c) main_clock2_pane_t3_ParamLimits

0x5766,	// (0x0009fc6c) main_clock2_pane_t3

0x5778,	// (0x0009fc7e) main_clock2_pane_t4_ParamLimits

0x5778,	// (0x0009fc7e) main_clock2_pane_t4

0xdc93,	// (0x000a8199) cell_clock2_toolbar_pane

0xdc9b,	// (0x000a81a1) cell_clock2_toolbar_pane_cp01

0xdc9b,	// (0x000a81a1) cell_clock2_toolbar_pane_cp02

0xdca3,	// (0x000a81a9) cell_clock2_toolbar_pane_cp03

0xdcab,	// (0x000a81b1) list_clock2_pane

0xb168,	// (0x000a566e) scroll_pane_cp10

0xdcb3,	// (0x000a81b9) list_single_clock2_pane_ParamLimits

0xdcb3,	// (0x000a81b9) list_single_clock2_pane

0xb410,	// (0x000a5916) list_highlight_pane_cp08

0xdcc0,	// (0x000a81c6) list_single_clock2_pane_t1

0xdcce,	// (0x000a81d4) list_single_clock2_pane_t2

0x0001,

0x0866,	// (0x0009ad6c) list_single_clock2_pane_t

0x9b4c,	// (0x000a4052) bg_button_pane_cp10

0xdcdc,	// (0x000a81e2) cell_clock2_toolbar_pane_g1

0x3c1a,	// (0x0009e120) aid_main_viewer_pane_g1_ParamLimits

0x3c1a,	// (0x0009e120) aid_main_viewer_pane_g1

0x3c26,	// (0x0009e12c) aid_main_viewer_pane_g2_ParamLimits

0x3c26,	// (0x0009e12c) aid_main_viewer_pane_g2

0x3c32,	// (0x0009e138) aid_main_viewer_pane_g3_ParamLimits

0x3c32,	// (0x0009e138) aid_main_viewer_pane_g3

0x3c43,	// (0x0009e149) aid_main_viewer_pane_g4_ParamLimits

0x3c43,	// (0x0009e149) aid_main_viewer_pane_g4

0x0003,

0xf49e,	// (0x000a99a4) aid_main_viewer_pane_g_ParamLimits

0xf49e,	// (0x000a99a4) aid_main_viewer_pane_g

0x43c4,	// (0x0009e8ca) main_calc_pane_ParamLimits

0x43df,	// (0x0009e8e5) main_dialer2_pane_ParamLimits

0x1031,	// (0x0009b537) main_cam6_pane

0x1031,	// (0x0009b537) main_vid6_pane

0x56c8,	// (0x0009fbce) listscroll_gen_pane_cp06_ParamLimits

0x56c8,	// (0x0009fbce) listscroll_gen_pane_cp06

0x578a,	// (0x0009fc90) main_clock2_pane_t5_ParamLimits

0x578a,	// (0x0009fc90) main_clock2_pane_t5

0x57d5,	// (0x0009fcdb) aid_call2_pane_cp10_ParamLimits

0x57e7,	// (0x0009fced) aid_call_pane_cp10_ParamLimits

0xb1e6,	// (0x000a56ec) popup_clock_analogue_window_cp10_g1_ParamLimits

0xb1e6,	// (0x000a56ec) popup_clock_analogue_window_cp10_g2_ParamLimits

0x57f9,	// (0x0009fcff) popup_clock_analogue_window_cp10_g3_ParamLimits

0x57f9,	// (0x0009fcff) popup_clock_analogue_window_cp10_g4_ParamLimits

0xb1e6,	// (0x000a56ec) popup_clock_analogue_window_cp10_g5_ParamLimits

0xf6a7,	// (0x000a9bad) popup_clock_analogue_window_cp10_g_ParamLimits

0x580b,	// (0x0009fd11) popup_clock_analogue_window_cp10_t1_ParamLimits

0x5ff6,	// (0x000a04fc) cell_dialer2_keypad_pane_g2_ParamLimits

0x5ff6,	// (0x000a04fc) cell_dialer2_keypad_pane_g2

0x0001,

0xf731,	// (0x000a9c37) cell_dialer2_keypad_pane_g_ParamLimits

0xf731,	// (0x000a9c37) cell_dialer2_keypad_pane_g

0x6012,	// (0x000a0518) cell_dialer2_keypad_pane_t1

0x6a2c,	// (0x000a0f32) main_cset_text2_pane_ParamLimits

0x6a2c,	// (0x000a0f32) main_cset_text2_pane

0xdafb,	// (0x000a8001) area_vitu2_query_pane_g1_ParamLimits

0x735d,	// (0x000a1863) area_vitu2_query_pane_g2_ParamLimits

0xf8cd,	// (0x000a9dd3) area_vitu2_query_pane_g_ParamLimits

0xa0ec,	// (0x000a45f2) area_vitu2_query_pane_t7_ParamLimits

0xa0ec,	// (0x000a45f2) area_vitu2_query_pane_t7

0x73be,	// (0x000a18c4) bg_button_pane_cp018_ParamLimits

0x73cc,	// (0x000a18d2) bg_button_pane_cp021_ParamLimits

0x73d8,	// (0x000a18de) bg_button_pane_cp022_ParamLimits

0x73d8,	// (0x000a18de) bg_vkb2_func_pane_cp08_ParamLimits

0x73be,	// (0x000a18c4) bg_vkb2_func_pane_cp06_ParamLimits

0x73cc,	// (0x000a18d2) bg_vkb2_func_pane_cp07_ParamLimits

0x73e9,	// (0x000a18ef) input_focus_pane_cp09_ParamLimits

0x78ba,	// (0x000a1dc0) cam6_autofocus_pane_ParamLimits

0x78ba,	// (0x000a1dc0) cam6_autofocus_pane

0x78dc,	// (0x000a1de2) cam6_image_uncrop_pane_ParamLimits

0x78dc,	// (0x000a1de2) cam6_image_uncrop_pane

0x7909,	// (0x000a1e0f) cam6_indi_pane_ParamLimits

0x7909,	// (0x000a1e0f) cam6_indi_pane

0x7923,	// (0x000a1e29) cam6_mode_pane_ParamLimits

0x7923,	// (0x000a1e29) cam6_mode_pane

0x7937,	// (0x000a1e3d) cam6_timer_pane_ParamLimits

0x7937,	// (0x000a1e3d) cam6_timer_pane

0x7943,	// (0x000a1e49) cam6_zoom_pane_ParamLimits

0x7943,	// (0x000a1e49) cam6_zoom_pane

0x795b,	// (0x000a1e61) cam6_mode_pane_g1_ParamLimits

0x795b,	// (0x000a1e61) cam6_mode_pane_g1

0x7967,	// (0x000a1e6d) cam6_mode_pane_g2_ParamLimits

0x7967,	// (0x000a1e6d) cam6_mode_pane_g2

0x7973,	// (0x000a1e79) cam6_mode_pane_g3_ParamLimits

0x7973,	// (0x000a1e79) cam6_mode_pane_g3

0x797f,	// (0x000a1e85) cam6_mode_pane_g4_ParamLimits

0x797f,	// (0x000a1e85) cam6_mode_pane_g4

0x0003,

0xf985,	// (0x000a9e8b) cam6_mode_pane_g_ParamLimits

0xf985,	// (0x000a9e8b) cam6_mode_pane_g

0xdce4,	// (0x000a81ea) bg_tb_trans_pane_cp08_ParamLimits

0xdce4,	// (0x000a81ea) bg_tb_trans_pane_cp08

0xdcf2,	// (0x000a81f8) cam6_battery_pane_ParamLimits

0xdcf2,	// (0x000a81f8) cam6_battery_pane

0xdd08,	// (0x000a820e) cam6_indi_pane_g1_ParamLimits

0xdd08,	// (0x000a820e) cam6_indi_pane_g1

0xdd1a,	// (0x000a8220) cam6_indi_pane_g2_ParamLimits

0xdd1a,	// (0x000a8220) cam6_indi_pane_g2

0xdd2c,	// (0x000a8232) cam6_indi_pane_g3_ParamLimits

0xdd2c,	// (0x000a8232) cam6_indi_pane_g3

0x0002,

0x0874,	// (0x0009ad7a) cam6_indi_pane_g_ParamLimits

0x0874,	// (0x0009ad7a) cam6_indi_pane_g

0xdd3e,	// (0x000a8244) cam6_indi_pane_t1_ParamLimits

0xdd3e,	// (0x000a8244) cam6_indi_pane_t1

0x64ef,	// (0x000a09f5) cam6_autofocus_pane_g1

0x64e7,	// (0x000a09ed) cam6_autofocus_pane_g2

0x64ff,	// (0x000a0a05) cam6_autofocus_pane_g3

0x64f7,	// (0x000a09fd) cam6_autofocus_pane_g4

0x0003,

0xf98e,	// (0x000a9e94) cam6_autofocus_pane_g

0xdd64,	// (0x000a826a) cam6_timer_pane_g1

0xdd6c,	// (0x000a8272) cam6_timer_pane_t1

0xdd7a,	// (0x000a8280) cam6_zoom_cont_pane

0xdd82,	// (0x000a8288) cam6_zoom_pane_g1

0xdd8a,	// (0x000a8290) cam6_zoom_pane_g2

0x798b,	// (0x000a1e91) cam6_zoom_pane_g3

0x0002,

0xf997,	// (0x000a9e9d) cam6_zoom_pane_g

0xcc28,	// (0x000a712e) cam6_battery_pane_g1

0xcc28,	// (0x000a712e) cam6_battery_pane_g2

0x0001,

0x03f5,	// (0x0009a8fb) cam6_battery_pane_g

0xdd92,	// (0x000a8298) cam6_zoom_cont_pane_g1

0xdd9b,	// (0x000a82a1) cam6_zoom_cont_pane_g2

0xdda4,	// (0x000a82aa) cam6_zoom_cont_pane_g3

0x0002,

0x088b,	// (0x0009ad91) cam6_zoom_cont_pane_g

0x79a8,	// (0x000a1eae) cam6_mode_pane_cp_ParamLimits

0x79a8,	// (0x000a1eae) cam6_mode_pane_cp

0x79bc,	// (0x000a1ec2) cam6_zoom_pane_cp_ParamLimits

0x79bc,	// (0x000a1ec2) cam6_zoom_pane_cp

0x79d4,	// (0x000a1eda) vid6_image_uncrop_cif_pane_ParamLimits

0x79d4,	// (0x000a1eda) vid6_image_uncrop_cif_pane

0x7a00,	// (0x000a1f06) vid6_image_uncrop_nhd_pane_ParamLimits

0x7a00,	// (0x000a1f06) vid6_image_uncrop_nhd_pane

0x7a1d,	// (0x000a1f23) vid6_image_uncrop_vga_pane_ParamLimits

0x7a1d,	// (0x000a1f23) vid6_image_uncrop_vga_pane

0x7a3c,	// (0x000a1f42) vid6_image_uncrop_wvga_pane_ParamLimits

0x7a3c,	// (0x000a1f42) vid6_image_uncrop_wvga_pane

0x7a59,	// (0x000a1f5f) vid6_indi_pane_ParamLimits

0x7a59,	// (0x000a1f5f) vid6_indi_pane

0xdce4,	// (0x000a81ea) bg_tb_trans_pane_cp09_ParamLimits

0xdce4,	// (0x000a81ea) bg_tb_trans_pane_cp09

0xddbc,	// (0x000a82c2) cam6_battery_pane_cp_ParamLimits

0xddbc,	// (0x000a82c2) cam6_battery_pane_cp

0xddc8,	// (0x000a82ce) vid6_indi_pane_g1_ParamLimits

0xddc8,	// (0x000a82ce) vid6_indi_pane_g1

0xddda,	// (0x000a82e0) vid6_indi_pane_g2_ParamLimits

0xddda,	// (0x000a82e0) vid6_indi_pane_g2

0xddec,	// (0x000a82f2) vid6_indi_pane_g3_ParamLimits

0xddec,	// (0x000a82f2) vid6_indi_pane_g3

0xde01,	// (0x000a8307) vid6_indi_pane_g4_ParamLimits

0xde01,	// (0x000a8307) vid6_indi_pane_g4

0xde16,	// (0x000a831c) vid6_indi_pane_g5_ParamLimits

0xde16,	// (0x000a831c) vid6_indi_pane_g5

0x0004,

0x0892,	// (0x0009ad98) vid6_indi_pane_g_ParamLimits

0x0892,	// (0x0009ad98) vid6_indi_pane_g

0xde30,	// (0x000a8336) vid6_indi_pane_t1_ParamLimits

0xde30,	// (0x000a8336) vid6_indi_pane_t1

0xde46,	// (0x000a834c) vid6_indi_pane_t2_ParamLimits

0xde46,	// (0x000a834c) vid6_indi_pane_t2

0xde6e,	// (0x000a8374) vid6_indi_pane_t3_ParamLimits

0xde6e,	// (0x000a8374) vid6_indi_pane_t3

0xde96,	// (0x000a839c) vid6_indi_pane_t4_ParamLimits

0xde96,	// (0x000a839c) vid6_indi_pane_t4

0x0003,

0x089d,	// (0x0009ada3) vid6_indi_pane_t_ParamLimits

0x089d,	// (0x0009ada3) vid6_indi_pane_t

0xdeba,	// (0x000a83c0) wait_bar_pane_cp08

0x7a7c,	// (0x000a1f82) main_cset_text2_pane_t1_ParamLimits

0x7a7c,	// (0x000a1f82) main_cset_text2_pane_t1

0x7993,	// (0x000a1e99) listscroll_gen_pane_cp06_t1_ParamLimits

0x7993,	// (0x000a1e99) listscroll_gen_pane_cp06_t1

0x1031,	// (0x0009b537) main_cam6_set_pane

0x6385,	// (0x000a088b) bg_tb_trans_pane_cp06_ParamLimits

0x639b,	// (0x000a08a1) cam4_indicators_pane_g1_ParamLimits

0x63ac,	// (0x000a08b2) cam4_indicators_pane_g2_ParamLimits

0xf76e,	// (0x000a9c74) cam4_indicators_pane_g_ParamLimits

0x63ca,	// (0x000a08d0) cam4_indicators_pane_t1_ParamLimits

0x43d1,	// (0x0009e8d7) bg_tb_trans_pane_cp07_ParamLimits

0x647b,	// (0x000a0981) vid4_indicators_pane_g1_ParamLimits

0x648f,	// (0x000a0995) vid4_indicators_pane_g2_ParamLimits

0x64a3,	// (0x000a09a9) vid4_indicators_pane_g3_ParamLimits

0x64b4,	// (0x000a09ba) vid4_indicators_pane_g4_ParamLimits

0xf780,	// (0x000a9c86) vid4_indicators_pane_g_ParamLimits

0x64d0,	// (0x000a09d6) vid4_indicators_pane_t1_ParamLimits

0x751e,	// (0x000a1a24) vid4_progress_pane_g1_ParamLimits

0x7530,	// (0x000a1a36) vid4_progress_pane_g2_ParamLimits

0xae5d,	// (0x000a5363) vid4_progress_pane_g3_ParamLimits

0x7540,	// (0x000a1a46) vid4_progress_pane_g4_ParamLimits

0xf905,	// (0x000a9e0b) vid4_progress_pane_g_ParamLimits

0x755e,	// (0x000a1a64) vid4_progress_pane_t1_ParamLimits

0x7573,	// (0x000a1a79) vid4_progress_pane_t2_ParamLimits

0x7589,	// (0x000a1a8f) vid4_progress_pane_t3_ParamLimits

0xf910,	// (0x000a9e16) vid4_progress_pane_t_ParamLimits

0x759f,	// (0x000a1aa5) wait_bar_pane_cp07_ParamLimits

0x7ab6,	// (0x000a1fbc) main_cam6_set_pane_g2_ParamLimits

0x7ab6,	// (0x000a1fbc) main_cam6_set_pane_g2

0x7ac2,	// (0x000a1fc8) main_cset6_listscroll_pane_ParamLimits

0x7ac2,	// (0x000a1fc8) main_cset6_listscroll_pane

0x7aed,	// (0x000a1ff3) main_cset6_slider_pane_ParamLimits

0x7aed,	// (0x000a1ff3) main_cset6_slider_pane

0x7af9,	// (0x000a1fff) main_cset6_text2_pane_ParamLimits

0x7af9,	// (0x000a1fff) main_cset6_text2_pane

0xdec9,	// (0x000a83cf) main_cset6_text_pane

0xded1,	// (0x000a83d7) main_cset_list_pane_copy1_ParamLimits

0xded1,	// (0x000a83d7) main_cset_list_pane_copy1

0xdee1,	// (0x000a83e7) scroll_pane_cp028_copy1

0x7b0c,	// (0x000a2012) cset_list_set_pane_copy1

0x7b25,	// (0x000a202b) aid_position_infowindow_above_copy1

0x7b2d,	// (0x000a2033) aid_position_infowindow_below_copy1

0x7b35,	// (0x000a203b) cset_list_set_pane_g1_copy1

0xa050,	// (0x000a4556) cset_list_set_pane_g3_copy1_ParamLimits

0xa050,	// (0x000a4556) cset_list_set_pane_g3_copy1

0xa05f,	// (0x000a4565) cset_list_set_pane_t1_copy1_ParamLimits

0xa05f,	// (0x000a4565) cset_list_set_pane_t1_copy1

0xa49e,	// (0x000a49a4) list_highlight_pane_cp021_copy1_ParamLimits

0xa49e,	// (0x000a49a4) list_highlight_pane_cp021_copy1

0xdeea,	// (0x000a83f0) cset6_slider_pane_ParamLimits

0xdeea,	// (0x000a83f0) cset6_slider_pane

0xdf16,	// (0x000a841c) main_cset6_slider_pane_g1_ParamLimits

0xdf16,	// (0x000a841c) main_cset6_slider_pane_g1

0x7b3d,	// (0x000a2043) main_cset6_slider_pane_g2_ParamLimits

0x7b3d,	// (0x000a2043) main_cset6_slider_pane_g2

0xdf3e,	// (0x000a8444) main_cset6_slider_pane_g3_ParamLimits

0xdf3e,	// (0x000a8444) main_cset6_slider_pane_g3

0x7b65,	// (0x000a206b) main_cset6_slider_pane_g4_ParamLimits

0x7b65,	// (0x000a206b) main_cset6_slider_pane_g4

0x7b71,	// (0x000a2077) main_cset6_slider_pane_g5_ParamLimits

0x7b71,	// (0x000a2077) main_cset6_slider_pane_g5

0xd7b2,	// (0x000a7cb8) main_cset6_slider_pane_g7_ParamLimits

0xd7b2,	// (0x000a7cb8) main_cset6_slider_pane_g7

0xd7be,	// (0x000a7cc4) main_cset6_slider_pane_g8_ParamLimits

0xd7be,	// (0x000a7cc4) main_cset6_slider_pane_g8

0x7b7f,	// (0x000a2085) main_cset6_slider_pane_g9_ParamLimits

0x7b7f,	// (0x000a2085) main_cset6_slider_pane_g9

0x7b8b,	// (0x000a2091) main_cset6_slider_pane_g10_ParamLimits

0x7b8b,	// (0x000a2091) main_cset6_slider_pane_g10

0x7b97,	// (0x000a209d) main_cset6_slider_pane_g11_ParamLimits

0x7b97,	// (0x000a209d) main_cset6_slider_pane_g11

0x7ba3,	// (0x000a20a9) main_cset6_slider_pane_g12_ParamLimits

0x7ba3,	// (0x000a20a9) main_cset6_slider_pane_g12

0x7baf,	// (0x000a20b5) main_cset6_slider_pane_g13_ParamLimits

0x7baf,	// (0x000a20b5) main_cset6_slider_pane_g13

0x7bbb,	// (0x000a20c1) main_cset6_slider_pane_g14_ParamLimits

0x7bbb,	// (0x000a20c1) main_cset6_slider_pane_g14

0x7bc7,	// (0x000a20cd) main_cset6_slider_pane_g15_ParamLimits

0x7bc7,	// (0x000a20cd) main_cset6_slider_pane_g15

0x7bdf,	// (0x000a20e5) main_cset6_slider_pane_g16_ParamLimits

0x7bdf,	// (0x000a20e5) main_cset6_slider_pane_g16

0x7bed,	// (0x000a20f3) main_cset6_slider_pane_g17_ParamLimits

0x7bed,	// (0x000a20f3) main_cset6_slider_pane_g17

0x0011,

0xf99e,	// (0x000a9ea4) main_cset6_slider_pane_g_ParamLimits

0xf99e,	// (0x000a9ea4) main_cset6_slider_pane_g

0xdf4a,	// (0x000a8450) main_cset6_slider_pane_t1_ParamLimits

0xdf4a,	// (0x000a8450) main_cset6_slider_pane_t1

0x7c13,	// (0x000a2119) main_cset6_slider_pane_t2_ParamLimits

0x7c13,	// (0x000a2119) main_cset6_slider_pane_t2

0x7c3e,	// (0x000a2144) main_cset6_slider_pane_t3_ParamLimits

0x7c3e,	// (0x000a2144) main_cset6_slider_pane_t3

0x7c69,	// (0x000a216f) main_cset6_slider_pane_t4_ParamLimits

0x7c69,	// (0x000a216f) main_cset6_slider_pane_t4

0x7c94,	// (0x000a219a) main_cset6_slider_pane_t5_ParamLimits

0x7c94,	// (0x000a219a) main_cset6_slider_pane_t5

0xdf8b,	// (0x000a8491) main_cset6_slider_pane_t7_ParamLimits

0xdf8b,	// (0x000a8491) main_cset6_slider_pane_t7

0x7cc1,	// (0x000a21c7) main_cset6_slider_pane_t8_ParamLimits

0x7cc1,	// (0x000a21c7) main_cset6_slider_pane_t8

0x7ce5,	// (0x000a21eb) main_cset6_slider_pane_t9_ParamLimits

0x7ce5,	// (0x000a21eb) main_cset6_slider_pane_t9

0x7d09,	// (0x000a220f) main_cset6_slider_pane_t10_ParamLimits

0x7d09,	// (0x000a220f) main_cset6_slider_pane_t10

0x7d2d,	// (0x000a2233) main_cset6_slider_pane_t11_ParamLimits

0x7d2d,	// (0x000a2233) main_cset6_slider_pane_t11

0xdfc1,	// (0x000a84c7) main_cset6_slider_pane_t14_ParamLimits

0xdfc1,	// (0x000a84c7) main_cset6_slider_pane_t14

0xdffa,	// (0x000a8500) main_cset6_slider_pane_t15_ParamLimits

0xdffa,	// (0x000a8500) main_cset6_slider_pane_t15

0x000b,

0xf9c3,	// (0x000a9ec9) main_cset6_slider_pane_t_ParamLimits

0xf9c3,	// (0x000a9ec9) main_cset6_slider_pane_t

0xda99,	// (0x000a7f9f) cset_slider_pane_g1_copy1

0xdaa2,	// (0x000a7fa8) cset_slider_pane_g2_copy1

0xdaab,	// (0x000a7fb1) cset_slider_pane_g3_copy1

0x9b4c,	// (0x000a4052) bg_popup_sub_pane_cp011_copy1

0xe033,	// (0x000a8539) main_cset_text_pane_g1_copy1

0xd908,	// (0x000a7e0e) main_cset_text_pane_t1_copy1

0xd916,	// (0x000a7e1c) main_cset_text_pane_t2_copy1

0xd924,	// (0x000a7e2a) main_cset_text_pane_t3_copy1

0xd932,	// (0x000a7e38) main_cset_text_pane_t4_copy1

0xd940,	// (0x000a7e46) main_cset_text_pane_t5_copy1

0xe03b,	// (0x000a8541) main_cset_text_pane_t6_copy1

0xe049,	// (0x000a854f) main_cset_text_pane_t7_copy1

0x7e22,	// (0x000a2328) main_cset_text2_pane_t1_copy1

0x43d1,	// (0x0009e8d7) main_ncimui_pane

0x4430,	// (0x0009e936) popup_query_ncimui_window_ParamLimits

0x4430,	// (0x0009e936) popup_query_ncimui_window

0xa4e8,	// (0x000a49ee) field_cale_ev2_pane_g4_ParamLimits

0xa4e8,	// (0x000a49ee) field_cale_ev2_pane_g4

0x5d16,	// (0x000a021c) cell_video_dialer_keypad_pane_g2_ParamLimits

0x5d16,	// (0x000a021c) cell_video_dialer_keypad_pane_g2

0x0001,

0xf711,	// (0x000a9c17) cell_video_dialer_keypad_pane_g_ParamLimits

0xf711,	// (0x000a9c17) cell_video_dialer_keypad_pane_g

0x5d2e,	// (0x000a0234) cell_video_dialer_keypad_pane_t1

0x9b4c,	// (0x000a4052) bg_popup_window_pane_cp012

0xb029,	// (0x000a552f) heading_pane_cp06

0xe075,	// (0x000a857b) ncim_query_content_pane

0x9b4c,	// (0x000a4052) bg_popup_heading_pane_cp01

0xe07d,	// (0x000a8583) ncim_heading_pane_t1

0xe08b,	// (0x000a8591) ncim_indicator_popup_pane

0xe09d,	// (0x000a85a3) ncim_query_button_pane

0xe0b1,	// (0x000a85b7) ncim_query_content_pane_t1

0xe0c3,	// (0x000a85c9) ncim_query_content_pane_t2

0x0005,

0xfa07,	// (0x000a9f0d) ncim_query_content_pane_t

0xe0fd,	// (0x000a8603) ncim_query_list_pane

0xe10f,	// (0x000a8615) ncim_query_popup_pane

0xe08b,	// (0x000a8591) ncim_indicator_popup_pane_ParamLimits

0x7f7c,	// (0x000a2482) ncim_query_content_pane_g1_ParamLimits

0x7f7c,	// (0x000a2482) ncim_query_content_pane_g1

0xe0b1,	// (0x000a85b7) ncim_query_content_pane_t1_ParamLimits

0xe0c3,	// (0x000a85c9) ncim_query_content_pane_t2_ParamLimits

0x7f88,	// (0x000a248e) ncim_query_content_pane_t3_ParamLimits

0x7f88,	// (0x000a248e) ncim_query_content_pane_t3

0x7fa5,	// (0x000a24ab) ncim_query_content_pane_t4_ParamLimits

0x7fa5,	// (0x000a24ab) ncim_query_content_pane_t4

0x7fc2,	// (0x000a24c8) ncim_query_content_pane_t5_ParamLimits

0x7fc2,	// (0x000a24c8) ncim_query_content_pane_t5

0xe0d5,	// (0x000a85db) ncim_query_content_pane_t6_ParamLimits

0xe0d5,	// (0x000a85db) ncim_query_content_pane_t6

0xfa07,	// (0x000a9f0d) ncim_query_content_pane_t_ParamLimits

0xe0fd,	// (0x000a8603) ncim_query_list_pane_ParamLimits

0xe10f,	// (0x000a8615) ncim_query_popup_pane_ParamLimits

0xe123,	// (0x000a8629) wait_bar_pane_cp04

0x9b4c,	// (0x000a4052) input_focus_pane_cp011

0xe12b,	// (0x000a8631) ncim_query_popup_pane_t1

0xe139,	// (0x000a863f) ncim_list_query_list_pane_ParamLimits

0xe139,	// (0x000a863f) ncim_list_query_list_pane

0x9b4c,	// (0x000a4052) bg_button_pane_cp027

0xe14c,	// (0x000a8652) ncim_query_button_pane_g1

0x9b4c,	// (0x000a4052) list_highlight_pane_cp012

0xe156,	// (0x000a865c) ncim_list_query_list_pane_g1

0xe15e,	// (0x000a8664) ncim_list_query_list_pane_t1

0x63bb,	// (0x000a08c1) cam4_indicators_pane_g3_ParamLimits

0x63bb,	// (0x000a08c1) cam4_indicators_pane_g3

0x64c0,	// (0x000a09c6) vid4_indicators_pane_g5_ParamLimits

0x64c0,	// (0x000a09c6) vid4_indicators_pane_g5

0x754f,	// (0x000a1a55) vid4_progress_pane_g5_ParamLimits

0x754f,	// (0x000a1a55) vid4_progress_pane_g5

0x7e68,	// (0x000a236e) main_ncimui_pane_g1

0x7ed0,	// (0x000a23d6) ncimui_group_query_pane_ParamLimits

0x7ed0,	// (0x000a23d6) ncimui_group_query_pane

0x7f18,	// (0x000a241e) ncimui_list_pane_ParamLimits

0x7f18,	// (0x000a241e) ncimui_list_pane

0x7f3f,	// (0x000a2445) ncimui_text_pane_ParamLimits

0x7f3f,	// (0x000a2445) ncimui_text_pane

0x7fdf,	// (0x000a24e5) ncimui_text_pane_t1_ParamLimits

0x7fdf,	// (0x000a24e5) ncimui_text_pane_t1

0xe16c,	// (0x000a8672) ncimui_list_single_graphic_pane_ParamLimits

0xe16c,	// (0x000a8672) ncimui_list_single_graphic_pane

0x7ffe,	// (0x000a2504) ncimui_query_pane_ParamLimits

0x7ffe,	// (0x000a2504) ncimui_query_pane

0x9b4c,	// (0x000a4052) list_highlight_pane_cp013

0xe17c,	// (0x000a8682) ncim_list_query_list_pane_t1_copy1

0xe156,	// (0x000a865c) ncim_list_single_graphic_pane_g1

0xe18a,	// (0x000a8690) ncim_query_button_pane_cp01

0xe196,	// (0x000a869c) ncim_query_entry_pane_ParamLimits

0xe196,	// (0x000a869c) ncim_query_entry_pane

0xe1a9,	// (0x000a86af) ncimui_query_pane_g1

0xe1b5,	// (0x000a86bb) ncimui_query_pane_t1_ParamLimits

0xe1b5,	// (0x000a86bb) ncimui_query_pane_t1

0xa49e,	// (0x000a49a4) input_focus_pane_cp012

0xe1ce,	// (0x000a86d4) ncim_query_entry_pane_t1

0xa774,	// (0x000a4c7a) main_im_pane_ParamLimits

0x43d1,	// (0x0009e8d7) main_mobtv_pane_ParamLimits

0x43d1,	// (0x0009e8d7) main_mobtv_pane

0x7bfb,	// (0x000a2101) main_cset6_slider_pane_g18_ParamLimits

0x7bfb,	// (0x000a2101) main_cset6_slider_pane_g18

0x7c07,	// (0x000a210d) main_cset6_slider_pane_g19_ParamLimits

0x7c07,	// (0x000a210d) main_cset6_slider_pane_g19

0xd651,	// (0x000a7b57) bg_main_mobtv_pane_ParamLimits

0xd651,	// (0x000a7b57) bg_main_mobtv_pane

0x8011,	// (0x000a2517) main_mobtv_info_pane

0x801c,	// (0x000a2522) main_mobtv_loading_pane_ParamLimits

0x801c,	// (0x000a2522) main_mobtv_loading_pane

0xe1e0,	// (0x000a86e6) main_mobtv_pg_channel_list_pane

0xe1ea,	// (0x000a86f0) main_mobtv_pg_hdr_pane

0x8029,	// (0x000a252f) main_mobtv_programe_curr_pane_ParamLimits

0x8029,	// (0x000a252f) main_mobtv_programe_curr_pane

0x8036,	// (0x000a253c) main_mobtv_programe_next_pane_ParamLimits

0x8036,	// (0x000a253c) main_mobtv_programe_next_pane

0xe1f3,	// (0x000a86f9) popup_mobtv_noti_window

0xcc28,	// (0x000a712e) main_tv_pg_hdr_pane_g1

0xe1fb,	// (0x000a8701) main_tv_pg_hdr_pane_g2

0xe203,	// (0x000a8709) main_tv_pg_hdr_pane_g3

0xe20b,	// (0x000a8711) main_tv_pg_hdr_pane_g4

0xe213,	// (0x000a8719) main_tv_pg_hdr_pane_g5

0xe21d,	// (0x000a8723) main_tv_pg_hdr_pane_g6

0xe227,	// (0x000a872d) main_tv_pg_hdr_pane_g7

0xe231,	// (0x000a8737) main_tv_pg_hdr_pane_g8

0xe23b,	// (0x000a8741) main_tv_pg_hdr_pane_g9

0xe245,	// (0x000a874b) main_tv_pg_hdr_pane_g10

0xe24f,	// (0x000a8755) main_tv_pg_hdr_pane_g11

0x000a,

0x091c,	// (0x0009ae22) main_tv_pg_hdr_pane_g

0xe259,	// (0x000a875f) main_tv_pg_hdr_pane_t1

0xe267,	// (0x000a876d) main_tv_pg_hdr_pane_t2

0xe275,	// (0x000a877b) main_tv_pg_hdr_pane_t3

0xe285,	// (0x000a878b) main_tv_pg_hdr_pane_t4

0xe295,	// (0x000a879b) main_tv_pg_hdr_pane_t5

0x0004,

0x0933,	// (0x0009ae39) main_tv_pg_hdr_pane_t

0xe2a5,	// (0x000a87ab) single_mobtv_pg_channel_pane_ParamLimits

0xe2a5,	// (0x000a87ab) single_mobtv_pg_channel_pane

0xe2b7,	// (0x000a87bd) single_mobtv_pg_channel_table_pane

0xe2c0,	// (0x000a87c6) single_mobtv_pg_channel_thumb_pane

0xe2c9,	// (0x000a87cf) single_tv_pg_channel_pane_g1

0xe2d2,	// (0x000a87d8) single_tv_pg_channel_pane_g2

0x0001,

0x093e,	// (0x0009ae44) single_tv_pg_channel_pane_g

0xce88,	// (0x000a738e) bg_single_mobtv_pg_channel_thumb_pane_ParamLimits

0xce88,	// (0x000a738e) bg_single_mobtv_pg_channel_thumb_pane

0xe2db,	// (0x000a87e1) single_mobtv_pg_channel_thumb_pane_g1_ParamLimits

0xe2db,	// (0x000a87e1) single_mobtv_pg_channel_thumb_pane_g1

0xe2e9,	// (0x000a87ef) single_mobtv_pg_channel_thumb_pane_g2_ParamLimits

0xe2e9,	// (0x000a87ef) single_mobtv_pg_channel_thumb_pane_g2

0xe2f5,	// (0x000a87fb) single_mobtv_pg_channel_thumb_pane_g3_ParamLimits

0xe2f5,	// (0x000a87fb) single_mobtv_pg_channel_thumb_pane_g3

0x0002,

0x0943,	// (0x0009ae49) single_mobtv_pg_channel_thumb_pane_g_ParamLimits

0x0943,	// (0x0009ae49) single_mobtv_pg_channel_thumb_pane_g

0xe301,	// (0x000a8807) single_mobtv_pg_channel_thumb_pane_t1

0xe30f,	// (0x000a8815) single_mobtv_pg_channel_thumb_pane_t2

0x0001,

0x094a,	// (0x0009ae50) single_mobtv_pg_channel_thumb_pane_t

0xcc28,	// (0x000a712e) bg_single_mobtv_pg_channel_table_pane_g1

0xcc28,	// (0x000a712e) bg_single_mobtv_pg_channel_table_pane_g2

0x0001,

0x03f5,	// (0x0009a8fb) bg_single_mobtv_pg_channel_table_pane_g

0xe31d,	// (0x000a8823) single_mobtv_pg_channel_table_pane_t1

0xe32b,	// (0x000a8831) single_mobtv_pg_channel_table_pane_t2

0x0001,

0x094f,	// (0x0009ae55) single_mobtv_pg_channel_table_pane_t

0x804b,	// (0x000a2551) main_mobtv_info_pane_g1_ParamLimits

0x804b,	// (0x000a2551) main_mobtv_info_pane_g1

0x8067,	// (0x000a256d) main_mobtv_info_pane_t1_ParamLimits

0x8067,	// (0x000a256d) main_mobtv_info_pane_t1

0x80df,	// (0x000a25e5) main_mobtv_info_pane_t2_ParamLimits

0x80df,	// (0x000a25e5) main_mobtv_info_pane_t2

0x0002,

0xfa19,	// (0x000a9f1f) main_mobtv_info_pane_t_ParamLimits

0xfa19,	// (0x000a9f1f) main_mobtv_info_pane_t

0x816e,	// (0x000a2674) wait_bar_pane_cp05

0x8180,	// (0x000a2686) main_mobtv_loading_pane_g1_ParamLimits

0x8180,	// (0x000a2686) main_mobtv_loading_pane_g1

0x818e,	// (0x000a2694) main_mobtv_loading_pane_g2_ParamLimits

0x818e,	// (0x000a2694) main_mobtv_loading_pane_g2

0x819a,	// (0x000a26a0) main_mobtv_loading_pane_g3_ParamLimits

0x819a,	// (0x000a26a0) main_mobtv_loading_pane_g3

0x0002,

0xfa20,	// (0x000a9f26) main_mobtv_loading_pane_g_ParamLimits

0xfa20,	// (0x000a9f26) main_mobtv_loading_pane_g

0xe339,	// (0x000a883f) main_mobtv_loading_pane_t1_ParamLimits

0xe339,	// (0x000a883f) main_mobtv_loading_pane_t1

0xe351,	// (0x000a8857) main_mobtv_loading_pane_t2_ParamLimits

0xe351,	// (0x000a8857) main_mobtv_loading_pane_t2

0x0001,

0x0967,	// (0x0009ae6d) main_mobtv_loading_pane_t_ParamLimits

0x0967,	// (0x0009ae6d) main_mobtv_loading_pane_t

0x81a8,	// (0x000a26ae) wait_bar_pane_cp06_ParamLimits

0x81a8,	// (0x000a26ae) wait_bar_pane_cp06

0xe375,	// (0x000a887b) main_mobtv_programe_curr_pane_t1

0xe383,	// (0x000a8889) main_mobtv_programe_curr_pane_t2

0x0001,

0x096c,	// (0x0009ae72) main_mobtv_programe_curr_pane_t

0xe391,	// (0x000a8897) main_mobtv_programe_next_pane_t1

0xe39f,	// (0x000a88a5) main_mobtv_programe_next_pane_t2

0xe3ad,	// (0x000a88b3) main_mobtv_programe_next_pane_t3

0x0002,

0x0971,	// (0x0009ae77) main_mobtv_programe_next_pane_t

0x9b4c,	// (0x000a4052) bg_popup_mobtv_noti_window_pane

0xe3bb,	// (0x000a88c1) popup_mobtv_noti_window_g1

0xe3c3,	// (0x000a88c9) popup_mobtv_noti_window_t1

0xe3d1,	// (0x000a88d7) popup_mobtv_noti_window_t2

0x0001,

0x0978,	// (0x0009ae7e) popup_mobtv_noti_window_t

0xcc28,	// (0x000a712e) bg_popup_mobtv_noti_window_pane_g1

0x1031,	// (0x0009b537) sc_clock_pane

0x1031,	// (0x0009b537) main_fs_bigclock_pane

0x776d,	// (0x000a1c73) blid2_tripm_pane_t4_ParamLimits

0x776d,	// (0x000a1c73) blid2_tripm_pane_t4

0x81b4,	// (0x000a26ba) sc_clock_pane_g1_ParamLimits

0x81b4,	// (0x000a26ba) sc_clock_pane_g1

0x81c2,	// (0x000a26c8) sc_clock_pane_t1_ParamLimits

0x81c2,	// (0x000a26c8) sc_clock_pane_t1

0x81d5,	// (0x000a26db) sc_clock_pane_t2_ParamLimits

0x81d5,	// (0x000a26db) sc_clock_pane_t2

0x81e7,	// (0x000a26ed) sc_clock_pane_t3_ParamLimits

0x81e7,	// (0x000a26ed) sc_clock_pane_t3

0x0004,

0xfa27,	// (0x000a9f2d) sc_clock_pane_t_ParamLimits

0xfa27,	// (0x000a9f2d) sc_clock_pane_t

0x9114,	// (0x000a361a) main_fs_bigclock_indicator_pane_ParamLimits

0x9114,	// (0x000a361a) main_fs_bigclock_indicator_pane

0x8282,	// (0x000a2788) main_fs_bigclock_pane_g1_ParamLimits

0x8282,	// (0x000a2788) main_fs_bigclock_pane_g1

0x9120,	// (0x000a3626) main_fs_bigclock_pane_t1_ParamLimits

0x9120,	// (0x000a3626) main_fs_bigclock_pane_t1

0x9132,	// (0x000a3638) main_fs_bigclock_pane_t2_ParamLimits

0x9132,	// (0x000a3638) main_fs_bigclock_pane_t2

0x9144,	// (0x000a364a) main_fs_bigclock_pane_t3_ParamLimits

0x9144,	// (0x000a364a) main_fs_bigclock_pane_t3

0x0002,

0xfb82,	// (0x000aa088) main_fs_bigclock_pane_t_ParamLimits

0xfb82,	// (0x000aa088) main_fs_bigclock_pane_t

0xec65,	// (0x000a916b) main_fs_bigclock_indicator_pane_g1

0xe0a5,	// (0x000a85ab) ncim_query_content_pane_g2_ParamLimits

0xe0a5,	// (0x000a85ab) ncim_query_content_pane_g2

0x0001,

0xfa02,	// (0x000a9f08) ncim_query_content_pane_g_ParamLimits

0xfa02,	// (0x000a9f08) ncim_query_content_pane_g

0x81fb,	// (0x000a2701) sc_clock_pane_t4_ParamLimits

0x81fb,	// (0x000a2701) sc_clock_pane_t4

0x43d1,	// (0x0009e8d7) main_radioblah_pane

0xd5c2,	// (0x000a7ac8) cell_call4_button_pane_t1_copy1_ParamLimits

0xd5c2,	// (0x000a7ac8) cell_call4_button_pane_t1_copy1

0x7e82,	// (0x000a2388) main_ncimui_pane_t1_ParamLimits

0x7e82,	// (0x000a2388) main_ncimui_pane_t1

0x7e9c,	// (0x000a23a2) main_ncimui_pane_t2_ParamLimits

0x7e9c,	// (0x000a23a2) main_ncimui_pane_t2

0x0002,

0xf9fb,	// (0x000a9f01) main_ncimui_pane_t_ParamLimits

0xf9fb,	// (0x000a9f01) main_ncimui_pane_t

0xe50c,	// (0x000a8a12) main_radioblah_anim_pane_ParamLimits

0xe50c,	// (0x000a8a12) main_radioblah_anim_pane

0xe51d,	// (0x000a8a23) main_radioblah_info_pane_ParamLimits

0xe51d,	// (0x000a8a23) main_radioblah_info_pane

0xe531,	// (0x000a8a37) main_radioblah_pane_t1_ParamLimits

0xe531,	// (0x000a8a37) main_radioblah_pane_t1

0xe54d,	// (0x000a8a53) main_radioblah_pane_t2_ParamLimits

0xe54d,	// (0x000a8a53) main_radioblah_pane_t2

0x0003,

0x099e,	// (0x0009aea4) main_radioblah_pane_t_ParamLimits

0x099e,	// (0x0009aea4) main_radioblah_pane_t

0x82d4,	// (0x000a27da) main_radioblah_rocker_ctrl_pane_ParamLimits

0x82d4,	// (0x000a27da) main_radioblah_rocker_ctrl_pane

0xe595,	// (0x000a8a9b) main_radioblah_info_pane_t1_ParamLimits

0xe595,	// (0x000a8a9b) main_radioblah_info_pane_t1

0x8319,	// (0x000a281f) main_radioblah_info_pane_t2_ParamLimits

0x8319,	// (0x000a281f) main_radioblah_info_pane_t2

0x0003,

0xfa32,	// (0x000a9f38) main_radioblah_info_pane_t_ParamLimits

0xfa32,	// (0x000a9f38) main_radioblah_info_pane_t

0xcc28,	// (0x000a712e) main_radioblah_rocker_ctrl_pane_g1

0x83c9,	// (0x000a28cf) main_radioblah_rocker_ctrl_pane_g2

0x83d1,	// (0x000a28d7) main_radioblah_rocker_ctrl_pane_g3

0x83d9,	// (0x000a28df) main_radioblah_rocker_ctrl_pane_g4

0x83e1,	// (0x000a28e7) main_radioblah_rocker_ctrl_pane_g5

0x83e9,	// (0x000a28ef) main_radioblah_rocker_ctrl_pane_g6

0x0005,

0xfa3b,	// (0x000a9f41) main_radioblah_rocker_ctrl_pane_g

0x7e22,	// (0x000a2328) main_cset_text2_pane_t1_copy1_ParamLimits

0x62db,	// (0x000a07e1) cam4_image_uncrop_qvga_pane

0x6430,	// (0x000a0936) vid4_image_uncrop_qcif_pane

0x78fb,	// (0x000a1e01) cam6_image_uncrop_qvga_pane_ParamLimits

0x78fb,	// (0x000a1e01) cam6_image_uncrop_qvga_pane

0xddac,	// (0x000a82b2) vid6_image_uncrop_qcif_pane_ParamLimits

0xddac,	// (0x000a82b2) vid6_image_uncrop_qcif_pane

0x9b4c,	// (0x000a4052) bg_popup_preview_window_pane_cp03

0xe057,	// (0x000a855d) list_cset_text2_pane

0xe05f,	// (0x000a8565) main_cset6_text2_pane_g1

0xe067,	// (0x000a856d) main_cset6_text2_pane_t1

0x83f1,	// (0x000a28f7) list_cset_text2_pane_t1_ParamLimits

0x83f1,	// (0x000a28f7) list_cset_text2_pane_t1

0x43d1,	// (0x0009e8d7) main_radioblah_pane_ParamLimits

0x815a,	// (0x000a2660) main_mobtv_info_pane_t3_ParamLimits

0x815a,	// (0x000a2660) main_mobtv_info_pane_t3

0x82c2,	// (0x000a27c8) main_radioblah_pane_g1

0x82ed,	// (0x000a27f3) main_radioblah_info_pane_g1

0x836e,	// (0x000a2874) main_radioblah_info_pane_t3_ParamLimits

0x836e,	// (0x000a2874) main_radioblah_info_pane_t3

0x3090,	// (0x0009d596) highlight_cell_cale_month_pane_ParamLimits

0x3090,	// (0x0009d596) highlight_cell_cale_month_pane

0x1031,	// (0x0009b537) main_phob_fisheye_pane

0xcf64,	// (0x000a746a) scroll_pane_cp0031_ParamLimits

0xcf64,	// (0x000a746a) scroll_pane_cp0031

0xdeba,	// (0x000a83c0) wait_bar_pane_cp08_ParamLimits

0x7b0c,	// (0x000a2012) cset_list_set_pane_copy1_ParamLimits

0xe5cf,	// (0x000a8ad5) highlight_cell_cale_month_pane_g1

0x8418,	// (0x000a291e) highlight_cell_cale_month_pane_t1

0xdb4f,	// (0x000a8055) list_gen_pane_cp01

0xd79d,	// (0x000a7ca3) scroll_pane_01

0x8426,	// (0x000a292c) list_single_double_fisheye_pane

0x842f,	// (0x000a2935) list_double_fisheye_pane_g1_ParamLimits

0x842f,	// (0x000a2935) list_double_fisheye_pane_g1

0x843b,	// (0x000a2941) list_double_fisheye_pane_g2_ParamLimits

0x843b,	// (0x000a2941) list_double_fisheye_pane_g2

0x844f,	// (0x000a2955) list_double_fisheye_pane_g3_ParamLimits

0x844f,	// (0x000a2955) list_double_fisheye_pane_g3

0x0004,

0xfa48,	// (0x000a9f4e) list_double_fisheye_pane_g_ParamLimits

0xfa48,	// (0x000a9f4e) list_double_fisheye_pane_g

0x8478,	// (0x000a297e) list_double_fisheye_pane_t1_ParamLimits

0x8478,	// (0x000a297e) list_double_fisheye_pane_t1

0x8493,	// (0x000a2999) list_double_fisheye_pane_t2_ParamLimits

0x8493,	// (0x000a2999) list_double_fisheye_pane_t2

0x0001,

0xfa53,	// (0x000a9f59) list_double_fisheye_pane_t_ParamLimits

0xfa53,	// (0x000a9f59) list_double_fisheye_pane_t

0x1031,	// (0x0009b537) main_call5_pane

0x8221,	// (0x000a2727) sc_swipe_pane_ParamLimits

0x8221,	// (0x000a2727) sc_swipe_pane

0x84c1,	// (0x000a29c7) call5_image_pane_ParamLimits

0x84c1,	// (0x000a29c7) call5_image_pane

0x84d1,	// (0x000a29d7) call5_swipe_1_pane_ParamLimits

0x84d1,	// (0x000a29d7) call5_swipe_1_pane

0x84dd,	// (0x000a29e3) call5_swipe_2_pane_ParamLimits

0x84dd,	// (0x000a29e3) call5_swipe_2_pane

0x84f7,	// (0x000a29fd) popup_call5_audio_first_window_ParamLimits

0x84f7,	// (0x000a29fd) popup_call5_audio_first_window

0xce88,	// (0x000a738e) call5_swipe_1_pane_g1_ParamLimits

0xce88,	// (0x000a738e) call5_swipe_1_pane_g1

0xe5d7,	// (0x000a8add) call5_swipe_1_pane_g2_ParamLimits

0xe5d7,	// (0x000a8add) call5_swipe_1_pane_g2

0x0001,

0x09cd,	// (0x0009aed3) call5_swipe_1_pane_g_ParamLimits

0x09cd,	// (0x0009aed3) call5_swipe_1_pane_g

0xe5e3,	// (0x000a8ae9) call5_swipe_1_pane_t1_ParamLimits

0xe5e3,	// (0x000a8ae9) call5_swipe_1_pane_t1

0xce88,	// (0x000a738e) call5_swipe_2_pane_g1_ParamLimits

0xce88,	// (0x000a738e) call5_swipe_2_pane_g1

0xe5f8,	// (0x000a8afe) call5_swipe_2_pane_g2_ParamLimits

0xe5f8,	// (0x000a8afe) call5_swipe_2_pane_g2

0x0001,

0x09d2,	// (0x0009aed8) call5_swipe_2_pane_g_ParamLimits

0x09d2,	// (0x0009aed8) call5_swipe_2_pane_g

0xe604,	// (0x000a8b0a) call5_swipe_2_pane_t1_ParamLimits

0xe604,	// (0x000a8b0a) call5_swipe_2_pane_t1

0xe619,	// (0x000a8b1f) sc_swipe_pane_g1_ParamLimits

0xe619,	// (0x000a8b1f) sc_swipe_pane_g1

0xe626,	// (0x000a8b2c) sc_swipe_pane_g2_ParamLimits

0xe626,	// (0x000a8b2c) sc_swipe_pane_g2

0x0001,

0x09d7,	// (0x0009aedd) sc_swipe_pane_g_ParamLimits

0x09d7,	// (0x0009aedd) sc_swipe_pane_g

0xe632,	// (0x000a8b38) sc_swipe_pane_t1_ParamLimits

0xe632,	// (0x000a8b38) sc_swipe_pane_t1

0x1031,	// (0x0009b537) main_cmail_launcher_pane

0x8505,	// (0x000a2a0b) aid_size_cell_cmail_l_ParamLimits

0x8505,	// (0x000a2a0b) aid_size_cell_cmail_l

0x8515,	// (0x000a2a1b) grid_cmail_l_pane_ParamLimits

0x8515,	// (0x000a2a1b) grid_cmail_l_pane

0x8525,	// (0x000a2a2b) cell_cmail_l_pane_ParamLimits

0x8525,	// (0x000a2a2b) cell_cmail_l_pane

0x8539,	// (0x000a2a3f) cell_cmail_l_pane_g1_ParamLimits

0x8539,	// (0x000a2a3f) cell_cmail_l_pane_g1

0x854a,	// (0x000a2a50) cell_cmail_l_pane_t1_ParamLimits

0x854a,	// (0x000a2a50) cell_cmail_l_pane_t1

0xe647,	// (0x000a8b4d) cell_cmail_l_pane_t2_ParamLimits

0xe647,	// (0x000a8b4d) cell_cmail_l_pane_t2

0x0001,

0xfa58,	// (0x000a9f5e) cell_cmail_l_pane_t_ParamLimits

0xfa58,	// (0x000a9f5e) cell_cmail_l_pane_t

0xa49e,	// (0x000a49a4) grid_highlight_pane_cp018_ParamLimits

0xa49e,	// (0x000a49a4) grid_highlight_pane_cp018

0x0e87,	// (0x0009b38d) main2_pane_ParamLimits

0x0e87,	// (0x0009b38d) main2_pane

0xa81f,	// (0x000a4d25) popup_sp_fs_action_menu_bg_pane_g1

0xa827,	// (0x000a4d2d) popup_sp_fs_action_menu_bg_pane_g2

0xa82f,	// (0x000a4d35) popup_sp_fs_action_menu_bg_pane_g3

0xa837,	// (0x000a4d3d) popup_sp_fs_action_menu_bg_pane_g4

0xa83f,	// (0x000a4d45) popup_sp_fs_action_menu_bg_pane_g5

0xa847,	// (0x000a4d4d) popup_sp_fs_action_menu_bg_pane_g6

0xa84f,	// (0x000a4d55) popup_sp_fs_action_menu_bg_pane_g7

0xa857,	// (0x000a4d5d) popup_sp_fs_action_menu_bg_pane_g8

0xa85f,	// (0x000a4d65) popup_sp_fs_action_menu_bg_pane_g9

0xa867,	// (0x000a4d6d) popup_sp_fs_action_menu_bg_pane_g10

0xa867,	// (0x000a4d6d) popup_sp_fs_action_menu_bg_pane_g11

0x000a,

0xf18d,	// (0x000a9693) popup_sp_fs_action_menu_bg_pane_g

0x1e0e,	// (0x0009c314) list_medium_line_x2_t3_g3_g1_ParamLimits

0x1e0e,	// (0x0009c314) list_medium_line_x2_t3_g3_g1

0x1e1a,	// (0x0009c320) list_medium_line_x2_t3_g3_g2_ParamLimits

0x1e1a,	// (0x0009c320) list_medium_line_x2_t3_g3_g2

0x1e26,	// (0x0009c32c) list_medium_line_x2_t3_g3_g3_ParamLimits

0x1e26,	// (0x0009c32c) list_medium_line_x2_t3_g3_g3

0x0002,

0xf23d,	// (0x000a9743) list_medium_line_x2_t3_g3_g_ParamLimits

0xf23d,	// (0x000a9743) list_medium_line_x2_t3_g3_g

0x1e32,	// (0x0009c338) list_medium_line_x2_t3_g3_t1_ParamLimits

0x1e32,	// (0x0009c338) list_medium_line_x2_t3_g3_t1

0x1e47,	// (0x0009c34d) list_medium_line_x2_t3_g3_t2_ParamLimits

0x1e47,	// (0x0009c34d) list_medium_line_x2_t3_g3_t2

0x1e59,	// (0x0009c35f) list_medium_line_x2_t3_g3_t3_ParamLimits

0x1e59,	// (0x0009c35f) list_medium_line_x2_t3_g3_t3

0x0002,

0xf244,	// (0x000a974a) list_medium_line_x2_t3_g3_t_ParamLimits

0xf244,	// (0x000a974a) list_medium_line_x2_t3_g3_t

0x1e0e,	// (0x0009c314) list_medium_line_x2_t3_g2_g1_ParamLimits

0x1e0e,	// (0x0009c314) list_medium_line_x2_t3_g2_g1

0x1e26,	// (0x0009c32c) list_medium_line_x2_t3_g2_g2_ParamLimits

0x1e26,	// (0x0009c32c) list_medium_line_x2_t3_g2_g2

0x0001,

0xf24b,	// (0x000a9751) list_medium_line_x2_t3_g2_g_ParamLimits

0xf24b,	// (0x000a9751) list_medium_line_x2_t3_g2_g

0x1e6e,	// (0x0009c374) list_medium_line_x2_t3_g2_t1_ParamLimits

0x1e6e,	// (0x0009c374) list_medium_line_x2_t3_g2_t1

0x1e84,	// (0x0009c38a) list_medium_line_x2_t3_g2_t2_ParamLimits

0x1e84,	// (0x0009c38a) list_medium_line_x2_t3_g2_t2

0x1e96,	// (0x0009c39c) list_medium_line_x2_t3_g2_t3_ParamLimits

0x1e96,	// (0x0009c39c) list_medium_line_x2_t3_g2_t3

0x0002,

0xf250,	// (0x000a9756) list_medium_line_x2_t3_g2_t_ParamLimits

0xf250,	// (0x000a9756) list_medium_line_x2_t3_g2_t

0x1e0e,	// (0x0009c314) list_medium_line_x2_t4_g4_g1_ParamLimits

0x1e0e,	// (0x0009c314) list_medium_line_x2_t4_g4_g1

0x1eb4,	// (0x0009c3ba) list_medium_line_x2_t4_g4_g2_ParamLimits

0x1eb4,	// (0x0009c3ba) list_medium_line_x2_t4_g4_g2

0x1e1a,	// (0x0009c320) list_medium_line_x2_t4_g4_g3_ParamLimits

0x1e1a,	// (0x0009c320) list_medium_line_x2_t4_g4_g3

0x1ec0,	// (0x0009c3c6) list_medium_line_x2_t4_g4_g4_ParamLimits

0x1ec0,	// (0x0009c3c6) list_medium_line_x2_t4_g4_g4

0x0003,

0xf257,	// (0x000a975d) list_medium_line_x2_t4_g4_g_ParamLimits

0xf257,	// (0x000a975d) list_medium_line_x2_t4_g4_g

0x1ecc,	// (0x0009c3d2) list_medium_line_x2_t4_g4_t1_ParamLimits

0x1ecc,	// (0x0009c3d2) list_medium_line_x2_t4_g4_t1

0x1ee3,	// (0x0009c3e9) list_medium_line_x2_t4_g4_t2_ParamLimits

0x1ee3,	// (0x0009c3e9) list_medium_line_x2_t4_g4_t2

0x1ef8,	// (0x0009c3fe) list_medium_line_x2_t4_g4_t3_ParamLimits

0x1ef8,	// (0x0009c3fe) list_medium_line_x2_t4_g4_t3

0x1f0a,	// (0x0009c410) list_medium_line_x2_t4_g4_t4_ParamLimits

0x1f0a,	// (0x0009c410) list_medium_line_x2_t4_g4_t4

0x0003,

0xf260,	// (0x000a9766) list_medium_line_x2_t4_g4_t_ParamLimits

0xf260,	// (0x000a9766) list_medium_line_x2_t4_g4_t

0x1e0e,	// (0x0009c314) list_medium_line_x2_t2_g4_g1_ParamLimits

0x1e0e,	// (0x0009c314) list_medium_line_x2_t2_g4_g1

0x1eb4,	// (0x0009c3ba) list_medium_line_x2_t2_g4_g2_ParamLimits

0x1eb4,	// (0x0009c3ba) list_medium_line_x2_t2_g4_g2

0x1e1a,	// (0x0009c320) list_medium_line_x2_t2_g4_g3_ParamLimits

0x1e1a,	// (0x0009c320) list_medium_line_x2_t2_g4_g3

0x1e26,	// (0x0009c32c) list_medium_line_x2_t2_g4_g4_ParamLimits

0x1e26,	// (0x0009c32c) list_medium_line_x2_t2_g4_g4

0x0003,

0xf2c7,	// (0x000a97cd) list_medium_line_x2_t2_g4_g_ParamLimits

0xf2c7,	// (0x000a97cd) list_medium_line_x2_t2_g4_g

0x30b6,	// (0x0009d5bc) list_medium_line_x2_t2_g4_t1_ParamLimits

0x30b6,	// (0x0009d5bc) list_medium_line_x2_t2_g4_t1

0x1e59,	// (0x0009c35f) list_medium_line_x2_t2_g4_t2_ParamLimits

0x1e59,	// (0x0009c35f) list_medium_line_x2_t2_g4_t2

0x0001,

0xf2d0,	// (0x000a97d6) list_medium_line_x2_t2_g4_t_ParamLimits

0xf2d0,	// (0x000a97d6) list_medium_line_x2_t2_g4_t

0x1e0e,	// (0x0009c314) list_medium_line_x2_t2_g3_g1_ParamLimits

0x1e0e,	// (0x0009c314) list_medium_line_x2_t2_g3_g1

0x1e1a,	// (0x0009c320) list_medium_line_x2_t2_g3_g2_ParamLimits

0x1e1a,	// (0x0009c320) list_medium_line_x2_t2_g3_g2

0x1e26,	// (0x0009c32c) list_medium_line_x2_t2_g3_g3_ParamLimits

0x1e26,	// (0x0009c32c) list_medium_line_x2_t2_g3_g3

0x0002,

0xf23d,	// (0x000a9743) list_medium_line_x2_t2_g3_g_ParamLimits

0xf23d,	// (0x000a9743) list_medium_line_x2_t2_g3_g

0x30cb,	// (0x0009d5d1) list_medium_line_x2_t2_g3_t1_ParamLimits

0x30cb,	// (0x0009d5d1) list_medium_line_x2_t2_g3_t1

0x1e59,	// (0x0009c35f) list_medium_line_x2_t2_g3_t2_ParamLimits

0x1e59,	// (0x0009c35f) list_medium_line_x2_t2_g3_t2

0x0001,

0xf2d5,	// (0x000a97db) list_medium_line_x2_t2_g3_t_ParamLimits

0xf2d5,	// (0x000a97db) list_medium_line_x2_t2_g3_t

0x32ac,	// (0x0009d7b2) main_sp_fs_list_pane_ParamLimits

0x32ac,	// (0x0009d7b2) main_sp_fs_list_pane

0x32b8,	// (0x0009d7be) sp_fs_scroll_pane_ParamLimits

0x32b8,	// (0x0009d7be) sp_fs_scroll_pane

0x32c4,	// (0x0009d7ca) list_medium_line_x2_t3_t1

0x32d4,	// (0x0009d7da) list_medium_line_x2_t3_t2

0x32e2,	// (0x0009d7e8) list_medium_line_x2_t3_t3

0x0002,

0xf320,	// (0x000a9826) list_medium_line_x2_t3_t

0x32f0,	// (0x0009d7f6) list_medium_line_x3_t4_t1

0x3300,	// (0x0009d806) list_medium_line_x3_t4_t2

0x330e,	// (0x0009d814) list_medium_line_x3_t4_t3

0x32e2,	// (0x0009d7e8) list_medium_line_x3_t4_t4

0x0003,

0xf327,	// (0x000a982d) list_medium_line_x3_t4_t

0x331c,	// (0x0009d822) list_medium_line_x4_t5_t1

0x332c,	// (0x0009d832) list_medium_line_x4_t5_t2

0x330e,	// (0x0009d814) list_medium_line_x4_t5_t3

0x333a,	// (0x0009d840) list_medium_line_x4_t5_t4

0x32e2,	// (0x0009d7e8) list_medium_line_x4_t5_t5

0x0004,

0xf330,	// (0x000a9836) list_medium_line_x4_t5_t

0x1e0e,	// (0x0009c314) list_medium_line_t4_g4_g1_ParamLimits

0x1e0e,	// (0x0009c314) list_medium_line_t4_g4_g1

0x1ec0,	// (0x0009c3c6) list_medium_line_t4_g4_g2_ParamLimits

0x1ec0,	// (0x0009c3c6) list_medium_line_t4_g4_g2

0x3348,	// (0x0009d84e) list_medium_line_t4_g4_g3_ParamLimits

0x3348,	// (0x0009d84e) list_medium_line_t4_g4_g3

0x1e26,	// (0x0009c32c) list_medium_line_t4_g4_g4_ParamLimits

0x1e26,	// (0x0009c32c) list_medium_line_t4_g4_g4

0x0003,

0xf33b,	// (0x000a9841) list_medium_line_t4_g4_g_ParamLimits

0xf33b,	// (0x000a9841) list_medium_line_t4_g4_g

0x3354,	// (0x0009d85a) list_medium_line_t4_g4_t1_ParamLimits

0x3354,	// (0x0009d85a) list_medium_line_t4_g4_t1

0x3369,	// (0x0009d86f) list_medium_line_t4_g4_t2_ParamLimits

0x3369,	// (0x0009d86f) list_medium_line_t4_g4_t2

0x337f,	// (0x0009d885) list_medium_line_t4_g4_t3_ParamLimits

0x337f,	// (0x0009d885) list_medium_line_t4_g4_t3

0x1e59,	// (0x0009c35f) list_medium_line_t4_g4_t4_ParamLimits

0x1e59,	// (0x0009c35f) list_medium_line_t4_g4_t4

0x0003,

0xf344,	// (0x000a984a) list_medium_line_t4_g4_t_ParamLimits

0xf344,	// (0x000a984a) list_medium_line_t4_g4_t

0x3480,	// (0x0009d986) chi_dic_find_pane_g1

0x43ed,	// (0x0009e8f3) main_tport_pane

0x6e07,	// (0x000a130d) list_medium_line_plain_t1

0x6ef1,	// (0x000a13f7) list_medium_line_t2_g2_g1_ParamLimits

0x6ef1,	// (0x000a13f7) list_medium_line_t2_g2_g1

0x6efd,	// (0x000a1403) list_medium_line_t2_g2_g2_ParamLimits

0x6efd,	// (0x000a1403) list_medium_line_t2_g2_g2

0x0001,

0xf85e,	// (0x000a9d64) list_medium_line_t2_g2_g_ParamLimits

0xf85e,	// (0x000a9d64) list_medium_line_t2_g2_g

0x6f09,	// (0x000a140f) list_medium_line_t2_g2_t1_ParamLimits

0x6f09,	// (0x000a140f) list_medium_line_t2_g2_t1

0x6f20,	// (0x000a1426) list_medium_line_t2_g2_t2_ParamLimits

0x6f20,	// (0x000a1426) list_medium_line_t2_g2_t2

0x0001,

0xf863,	// (0x000a9d69) list_medium_line_t2_g2_t_ParamLimits

0xf863,	// (0x000a9d69) list_medium_line_t2_g2_t

0xa110,	// (0x000a4616) aid_sp_fs_list_icon_a_sm

0xa4f4,	// (0x000a49fa) aid_sp_fs_list_icon_d

0xb2ec,	// (0x000a57f2) aid_sp_fs_text_primary

0xa4fc,	// (0x000a4a02) aid_sp_fs_text_secondary

0x75af,	// (0x000a1ab5) list_medium_line

0x75af,	// (0x000a1ab5) list_medium_line_g2

0x75af,	// (0x000a1ab5) list_medium_line_g3

0x75af,	// (0x000a1ab5) list_medium_line_plain

0x75af,	// (0x000a1ab5) list_medium_line_plain_t2

0x75af,	// (0x000a1ab5) list_medium_line_plain_t3

0x75af,	// (0x000a1ab5) list_medium_line_right_icon

0x75af,	// (0x000a1ab5) list_medium_line_right_iconx2

0x75af,	// (0x000a1ab5) list_medium_line_t2

0x75af,	// (0x000a1ab5) list_medium_line_t2_g2

0x75af,	// (0x000a1ab5) list_medium_line_t2_g3

0x75af,	// (0x000a1ab5) list_medium_line_t2_right_icon

0x75af,	// (0x000a1ab5) list_medium_line_t2_right_iconx2

0x75af,	// (0x000a1ab5) list_medium_line_t3

0x75af,	// (0x000a1ab5) list_medium_line_t3_g2

0x75af,	// (0x000a1ab5) list_medium_line_t3_g3

0x75af,	// (0x000a1ab5) list_medium_line_t3_right_iconx2

0x75b8,	// (0x000a1abe) list_medium_line_t4_g4

0x75c1,	// (0x000a1ac7) list_medium_line_x2

0x75c1,	// (0x000a1ac7) list_medium_line_x2_t2_g2

0x75c1,	// (0x000a1ac7) list_medium_line_x2_t2_g3

0x75c1,	// (0x000a1ac7) list_medium_line_x2_t2_g4

0x75c1,	// (0x000a1ac7) list_medium_line_x2_t3

0x75c1,	// (0x000a1ac7) list_medium_line_x2_t3_g2

0x75c1,	// (0x000a1ac7) list_medium_line_x2_t3_g3

0x75c1,	// (0x000a1ac7) list_medium_line_x2_t3_g4

0x75c1,	// (0x000a1ac7) list_medium_line_x2_t4_g2

0x75c1,	// (0x000a1ac7) list_medium_line_x2_t4_g4

0x75ca,	// (0x000a1ad0) list_medium_line_x3

0x75ca,	// (0x000a1ad0) list_medium_line_x3_t4

0x75ca,	// (0x000a1ad0) list_medium_line_x3_t4_g4

0x75b8,	// (0x000a1abe) list_medium_line_x4_t4

0x75b8,	// (0x000a1abe) list_medium_line_x4_t4_g7

0x75b8,	// (0x000a1abe) list_medium_line_x4_t5

0x75d3,	// (0x000a1ad9) list_single_fs_dyc_pane_ParamLimits

0x75d3,	// (0x000a1ad9) list_single_fs_dyc_pane

0x1e0e,	// (0x0009c314) list_medium_line_x4_t4_g7_g1_ParamLimits

0x1e0e,	// (0x0009c314) list_medium_line_x4_t4_g7_g1

0x7d53,	// (0x000a2259) list_medium_line_x4_t4_g7_g2_ParamLimits

0x7d53,	// (0x000a2259) list_medium_line_x4_t4_g7_g2

0x7d5f,	// (0x000a2265) list_medium_line_x4_t4_g7_g3_ParamLimits

0x7d5f,	// (0x000a2265) list_medium_line_x4_t4_g7_g3

0x7d6e,	// (0x000a2274) list_medium_line_x4_t4_g7_g4_ParamLimits

0x7d6e,	// (0x000a2274) list_medium_line_x4_t4_g7_g4

0x7d7a,	// (0x000a2280) list_medium_line_x4_t4_g7_g5_ParamLimits

0x7d7a,	// (0x000a2280) list_medium_line_x4_t4_g7_g5

0x7d89,	// (0x000a228f) list_medium_line_x4_t4_g7_g6_ParamLimits

0x7d89,	// (0x000a228f) list_medium_line_x4_t4_g7_g6

0x7d98,	// (0x000a229e) list_medium_line_x4_t4_g7_g7_ParamLimits

0x7d98,	// (0x000a229e) list_medium_line_x4_t4_g7_g7

0x0006,

0xf9dc,	// (0x000a9ee2) list_medium_line_x4_t4_g7_g_ParamLimits

0xf9dc,	// (0x000a9ee2) list_medium_line_x4_t4_g7_g

0x7da4,	// (0x000a22aa) list_medium_line_x4_t4_g7_t1_ParamLimits

0x7da4,	// (0x000a22aa) list_medium_line_x4_t4_g7_t1

0x7db9,	// (0x000a22bf) list_medium_line_x4_t4_g7_t2_ParamLimits

0x7db9,	// (0x000a22bf) list_medium_line_x4_t4_g7_t2

0x7dce,	// (0x000a22d4) list_medium_line_x4_t4_g7_t3_ParamLimits

0x7dce,	// (0x000a22d4) list_medium_line_x4_t4_g7_t3

0x7de3,	// (0x000a22e9) list_medium_line_x4_t4_g7_t4_ParamLimits

0x7de3,	// (0x000a22e9) list_medium_line_x4_t4_g7_t4

0x7df5,	// (0x000a22fb) list_medium_line_x4_t4_g7_t5_ParamLimits

0x7df5,	// (0x000a22fb) list_medium_line_x4_t4_g7_t5

0x0004,

0xf9eb,	// (0x000a9ef1) list_medium_line_x4_t4_g7_t_ParamLimits

0xf9eb,	// (0x000a9ef1) list_medium_line_x4_t4_g7_t

0x7e07,	// (0x000a230d) list_single_dyc_row_pane_ParamLimits

0x7e07,	// (0x000a230d) list_single_dyc_row_pane

0x84b5,	// (0x000a29bb) call5_gesture_pane_ParamLimits

0x84b5,	// (0x000a29bb) call5_gesture_pane

0x84e9,	// (0x000a29ef) call5_windows_pane_ParamLimits

0x84e9,	// (0x000a29ef) call5_windows_pane

0x8560,	// (0x000a2a66) call5_swipe_1_pane_cp_ParamLimits

0x8560,	// (0x000a2a66) call5_swipe_1_pane_cp

0x856c,	// (0x000a2a72) call5_swipe_2_pane_cp_ParamLimits

0x856c,	// (0x000a2a72) call5_swipe_2_pane_cp

0xb410,	// (0x000a5916) call5_image_pane_cp

0x8578,	// (0x000a2a7e) popup_call5_audio_first_window_cp_ParamLimits

0x8578,	// (0x000a2a7e) popup_call5_audio_first_window_cp

0xe619,	// (0x000a8b1f) call5_swipe_1_pane_g1_cp_ParamLimits

0xe619,	// (0x000a8b1f) call5_swipe_1_pane_g1_cp

0xe659,	// (0x000a8b5f) call5_swipe_1_pane_g2_cp

0xe632,	// (0x000a8b38) call5_swipe_1_pane_t1_cp_ParamLimits

0xe632,	// (0x000a8b38) call5_swipe_1_pane_t1_cp

0xe619,	// (0x000a8b1f) call5_swipe_2_pane_g1_cp_ParamLimits

0xe619,	// (0x000a8b1f) call5_swipe_2_pane_g1_cp

0xe661,	// (0x000a8b67) call5_swipe_2_pane_g2_cp

0xe669,	// (0x000a8b6f) call5_swipe_2_pane_t1_cp_ParamLimits

0xe669,	// (0x000a8b6f) call5_swipe_2_pane_t1_cp

0xa49e,	// (0x000a49a4) main_sp_fs_email_pane

0xe67e,	// (0x000a8b84) main_sp_fs_listscroll_pane_te

0xb2f5,	// (0x000a57fb) popup_sp_fs_action_menu_pane_ParamLimits

0xb2f5,	// (0x000a57fb) popup_sp_fs_action_menu_pane

0xcc28,	// (0x000a712e) bg_sp_fs_ctrlbar_pane_g1

0xe687,	// (0x000a8b8d) bg_sp_fs_ctrlbar_ddmenu_pane_g1

0xe690,	// (0x000a8b96) bg_sp_fs_ctrlbar_ddmenu_pane_g2

0xe699,	// (0x000a8b9f) bg_sp_fs_ctrlbar_ddmenu_pane_g3

0xcc28,	// (0x000a712e) bg_sp_fs_ctrlbar_ddmenu_pane_g4

0x0003,

0x09e1,	// (0x0009aee7) bg_sp_fs_ctrlbar_ddmenu_pane_g

0xca0b,	// (0x000a6f11) bg_sp_fs_ctrlbar_ddmenu_pane_ParamLimits

0xca0b,	// (0x000a6f11) bg_sp_fs_ctrlbar_ddmenu_pane

0xe6a2,	// (0x000a8ba8) main_sp_fs_ctrlbar_ddmenu_pane_g1_ParamLimits

0xe6a2,	// (0x000a8ba8) main_sp_fs_ctrlbar_ddmenu_pane_g1

0xe6ae,	// (0x000a8bb4) main_sp_fs_ctrlbar_ddmenu_pane_g2_ParamLimits

0xe6ae,	// (0x000a8bb4) main_sp_fs_ctrlbar_ddmenu_pane_g2

0x0001,

0x09ea,	// (0x0009aef0) main_sp_fs_ctrlbar_ddmenu_pane_g_ParamLimits

0x09ea,	// (0x0009aef0) main_sp_fs_ctrlbar_ddmenu_pane_g

0xe6ba,	// (0x000a8bc0) main_sp_fs_ctrlbar_ddmenu_pane_t1_ParamLimits

0xe6ba,	// (0x000a8bc0) main_sp_fs_ctrlbar_ddmenu_pane_t1

0x8586,	// (0x000a2a8c) list_medium_line_t2_right_icon_g1

0x858e,	// (0x000a2a94) list_medium_line_t2_right_icon_t1

0x859e,	// (0x000a2aa4) list_medium_line_t2_right_icon_t2

0x0001,

0xfa5d,	// (0x000a9f63) list_medium_line_t2_right_icon_t

0xc81e,	// (0x000a6d24) bg_sp_fs_ctrlbar_pane_ParamLimits

0xc81e,	// (0x000a6d24) bg_sp_fs_ctrlbar_pane

0x8603,	// (0x000a2b09) main_sp_fs_ctrlbar_button_pane_cp01

0x860b,	// (0x000a2b11) main_sp_fs_ctrlbar_ddmenu_pane

0xe70c,	// (0x000a8c12) main_sp_fs_ctrlbar_pane_g1

0xe718,	// (0x000a8c1e) main_sp_fs_ctrlbar_pane_g2

0x0001,

0x09f4,	// (0x0009aefa) main_sp_fs_ctrlbar_pane_g

0xe724,	// (0x000a8c2a) main_sp_fs_ctrlbar_pane_t1

0x8615,	// (0x000a2b1b) main_sp_fs_ctrlbar_pane

0x862b,	// (0x000a2b31) main_sp_fs_listscroll_pane_te_cp01

0x863c,	// (0x000a2b42) popup_sp_fs_action_menu_pane_cp01_ParamLimits

0x863c,	// (0x000a2b42) popup_sp_fs_action_menu_pane_cp01

0xa49e,	// (0x000a49a4) bg_sp_fs_highlight_list_pane_cp01_ParamLimits

0xa49e,	// (0x000a49a4) bg_sp_fs_highlight_list_pane_cp01

0xa118,	// (0x000a461e) sp_fs_action_menu_list_gene_pane_g1_ParamLimits

0xa118,	// (0x000a461e) sp_fs_action_menu_list_gene_pane_g1

0xe754,	// (0x000a8c5a) sp_fs_action_menu_list_gene_pane_g2_ParamLimits

0xe754,	// (0x000a8c5a) sp_fs_action_menu_list_gene_pane_g2

0x0001,

0xfa62,	// (0x000a9f68) sp_fs_action_menu_list_gene_pane_g_ParamLimits

0xfa62,	// (0x000a9f68) sp_fs_action_menu_list_gene_pane_g

0xa127,	// (0x000a462d) sp_fs_action_menu_list_gene_pane_t1_ParamLimits

0xa127,	// (0x000a462d) sp_fs_action_menu_list_gene_pane_t1

0xa13f,	// (0x000a4645) sp_fs_action_menu_list_gene_pane_ParamLimits

0xa13f,	// (0x000a4645) sp_fs_action_menu_list_gene_pane

0xe761,	// (0x000a8c67) popup_sp_fs_action_menu_bg_pane_ParamLimits

0xe761,	// (0x000a8c67) popup_sp_fs_action_menu_bg_pane

0xa15e,	// (0x000a4664) sp_fs_action_menu_list_pane_ParamLimits

0xa15e,	// (0x000a4664) sp_fs_action_menu_list_pane

0xa505,	// (0x000a4a0b) sp_fs_scroll_pane_cp01_ParamLimits

0xa505,	// (0x000a4a0b) sp_fs_scroll_pane_cp01

0x8666,	// (0x000a2b6c) list_medium_line_plain_t2_t1

0x8676,	// (0x000a2b7c) list_medium_line_plain_t2_t2

0x0001,

0xfa67,	// (0x000a9f6d) list_medium_line_plain_t2_t

0x8684,	// (0x000a2b8a) list_medium_line_plain_t3_t1

0x8694,	// (0x000a2b9a) list_medium_line_plain_t3_t2

0x86a2,	// (0x000a2ba8) list_medium_line_plain_t3_t3

0x0002,

0xfa6c,	// (0x000a9f72) list_medium_line_plain_t3_t

0x1e0e,	// (0x0009c314) list_medium_line_x2_t2_g2_g1_ParamLimits

0x1e0e,	// (0x0009c314) list_medium_line_x2_t2_g2_g1

0x1e26,	// (0x0009c32c) list_medium_line_x2_t2_g2_g2_ParamLimits

0x1e26,	// (0x0009c32c) list_medium_line_x2_t2_g2_g2

0x0001,

0xf24b,	// (0x000a9751) list_medium_line_x2_t2_g2_g_ParamLimits

0xf24b,	// (0x000a9751) list_medium_line_x2_t2_g2_g

0x3354,	// (0x0009d85a) list_medium_line_x2_t2_g2_t1_ParamLimits

0x3354,	// (0x0009d85a) list_medium_line_x2_t2_g2_t1

0x1e59,	// (0x0009c35f) list_medium_line_x2_t2_g2_t2_ParamLimits

0x1e59,	// (0x0009c35f) list_medium_line_x2_t2_g2_t2

0x0001,

0xfa73,	// (0x000a9f79) list_medium_line_x2_t2_g2_t_ParamLimits

0xfa73,	// (0x000a9f79) list_medium_line_x2_t2_g2_t

0x1e0e,	// (0x0009c314) list_medium_line_x2_t4_g2_g1_ParamLimits

0x1e0e,	// (0x0009c314) list_medium_line_x2_t4_g2_g1

0x86b0,	// (0x000a2bb6) list_medium_line_x2_t4_g2_g2_ParamLimits

0x86b0,	// (0x000a2bb6) list_medium_line_x2_t4_g2_g2

0x0001,

0xfa78,	// (0x000a9f7e) list_medium_line_x2_t4_g2_g_ParamLimits

0xfa78,	// (0x000a9f7e) list_medium_line_x2_t4_g2_g

0x86c2,	// (0x000a2bc8) list_medium_line_x2_t4_g2_t1_ParamLimits

0x86c2,	// (0x000a2bc8) list_medium_line_x2_t4_g2_t1

0x86dc,	// (0x000a2be2) list_medium_line_x2_t4_g2_t2_ParamLimits

0x86dc,	// (0x000a2be2) list_medium_line_x2_t4_g2_t2

0x86f1,	// (0x000a2bf7) list_medium_line_x2_t4_g2_t3_ParamLimits

0x86f1,	// (0x000a2bf7) list_medium_line_x2_t4_g2_t3

0x1e59,	// (0x0009c35f) list_medium_line_x2_t4_g2_t4_ParamLimits

0x1e59,	// (0x0009c35f) list_medium_line_x2_t4_g2_t4

0x0003,

0xfa7d,	// (0x000a9f83) list_medium_line_x2_t4_g2_t_ParamLimits

0xfa7d,	// (0x000a9f83) list_medium_line_x2_t4_g2_t

0x8706,	// (0x000a2c0c) list_medium_line_t3_right_iconx2_g1

0x8586,	// (0x000a2a8c) list_medium_line_t3_right_iconx2_g2

0x870e,	// (0x000a2c14) list_medium_line_t3_right_iconx2_g3

0x0002,

0xfa86,	// (0x000a9f8c) list_medium_line_t3_right_iconx2_g

0x8716,	// (0x000a2c1c) list_medium_line_t3_right_iconx2_t1

0x8726,	// (0x000a2c2c) list_medium_line_t3_right_iconx2_t2

0x0001,

0xfa8d,	// (0x000a9f93) list_medium_line_t3_right_iconx2_t

0x1e0e,	// (0x0009c314) list_medium_line_x3_t4_g4_g1_ParamLimits

0x1e0e,	// (0x0009c314) list_medium_line_x3_t4_g4_g1

0x1e1a,	// (0x0009c320) list_medium_line_x3_t4_g4_g2_ParamLimits

0x1e1a,	// (0x0009c320) list_medium_line_x3_t4_g4_g2

0x1ec0,	// (0x0009c3c6) list_medium_line_x3_t4_g4_g3_ParamLimits

0x1ec0,	// (0x0009c3c6) list_medium_line_x3_t4_g4_g3

0x8734,	// (0x000a2c3a) list_medium_line_x3_t4_g4_g4_ParamLimits

0x8734,	// (0x000a2c3a) list_medium_line_x3_t4_g4_g4

0x0003,

0xfa92,	// (0x000a9f98) list_medium_line_x3_t4_g4_g_ParamLimits

0xfa92,	// (0x000a9f98) list_medium_line_x3_t4_g4_g

0x8740,	// (0x000a2c46) list_medium_line_x3_t4_g4_t1_ParamLimits

0x8740,	// (0x000a2c46) list_medium_line_x3_t4_g4_t1

0x8757,	// (0x000a2c5d) list_medium_line_x3_t4_g4_t2_ParamLimits

0x8757,	// (0x000a2c5d) list_medium_line_x3_t4_g4_t2

0x876c,	// (0x000a2c72) list_medium_line_x3_t4_g4_t3_ParamLimits

0x876c,	// (0x000a2c72) list_medium_line_x3_t4_g4_t3

0x8781,	// (0x000a2c87) list_medium_line_x3_t4_g4_t4_ParamLimits

0x8781,	// (0x000a2c87) list_medium_line_x3_t4_g4_t4

0x0003,

0xfa9b,	// (0x000a9fa1) list_medium_line_x3_t4_g4_t_ParamLimits

0xfa9b,	// (0x000a9fa1) list_medium_line_x3_t4_g4_t

0x879e,	// (0x000a2ca4) list_single_dyc_row_text_pane_t1_ParamLimits

0x879e,	// (0x000a2ca4) list_single_dyc_row_text_pane_t1

0x87d5,	// (0x000a2cdb) list_single_dyc_row_text_pane_t2_ParamLimits

0x87d5,	// (0x000a2cdb) list_single_dyc_row_text_pane_t2

0xa17e,	// (0x000a4684) list_single_dyc_row_text_pane_t3_ParamLimits

0xa17e,	// (0x000a4684) list_single_dyc_row_text_pane_t3

0x0005,

0xfaa4,	// (0x000a9faa) list_single_dyc_row_text_pane_t_ParamLimits

0xfaa4,	// (0x000a9faa) list_single_dyc_row_text_pane_t

0xa1a2,	// (0x000a46a8) list_single_dyc_row_pane_g1_ParamLimits

0xa1a2,	// (0x000a46a8) list_single_dyc_row_pane_g1

0xa1ae,	// (0x000a46b4) list_single_dyc_row_pane_g2_ParamLimits

0xa1ae,	// (0x000a46b4) list_single_dyc_row_pane_g2

0xa1ba,	// (0x000a46c0) list_single_dyc_row_pane_g3_ParamLimits

0xa1ba,	// (0x000a46c0) list_single_dyc_row_pane_g3

0xa1c6,	// (0x000a46cc) list_single_dyc_row_pane_g4_ParamLimits

0xa1c6,	// (0x000a46cc) list_single_dyc_row_pane_g4

0x0003,

0xfab1,	// (0x000a9fb7) list_single_dyc_row_pane_g_ParamLimits

0xfab1,	// (0x000a9fb7) list_single_dyc_row_pane_g

0xa1d2,	// (0x000a46d8) list_single_dyc_row_text_pane_ParamLimits

0xa1d2,	// (0x000a46d8) list_single_dyc_row_text_pane

0x9b4c,	// (0x000a4052) bg_sp_fs_scroll_pane

0xe76f,	// (0x000a8c75) thumb_sp_fs_scroll_pane

0x6ef1,	// (0x000a13f7) list_medium_line_g1_ParamLimits

0x6ef1,	// (0x000a13f7) list_medium_line_g1

0x88f8,	// (0x000a2dfe) list_medium_line_t1_ParamLimits

0x88f8,	// (0x000a2dfe) list_medium_line_t1

0x1e0e,	// (0x0009c314) list_medium_line_x2_g1_ParamLimits

0x1e0e,	// (0x0009c314) list_medium_line_x2_g1

0x1e1a,	// (0x0009c320) list_medium_line_x2_g2_ParamLimits

0x1e1a,	// (0x0009c320) list_medium_line_x2_g2

0x0001,

0xfaba,	// (0x000a9fc0) list_medium_line_x2_g_ParamLimits

0xfaba,	// (0x000a9fc0) list_medium_line_x2_g

0xa1f1,	// (0x000a46f7) list_medium_line_x2_t1_ParamLimits

0xa1f1,	// (0x000a46f7) list_medium_line_x2_t1

0x1e0e,	// (0x0009c314) list_medium_line_x3_g1_ParamLimits

0x1e0e,	// (0x0009c314) list_medium_line_x3_g1

0x1e1a,	// (0x0009c320) list_medium_line_x3_g2_ParamLimits

0x1e1a,	// (0x0009c320) list_medium_line_x3_g2

0x0001,

0xfaba,	// (0x000a9fc0) list_medium_line_x3_g_ParamLimits

0xfaba,	// (0x000a9fc0) list_medium_line_x3_g

0xa1f1,	// (0x000a46f7) list_medium_line_x3_t1_ParamLimits

0xa1f1,	// (0x000a46f7) list_medium_line_x3_t1

0xe778,	// (0x000a8c7e) thumb_sp_fs_scroll_pane_g1

0xe781,	// (0x000a8c87) thumb_sp_fs_scroll_pane_g2

0xe78a,	// (0x000a8c90) thumb_sp_fs_scroll_pane_g3

0x0002,

0x0a5b,	// (0x0009af61) thumb_sp_fs_scroll_pane_g

0xe778,	// (0x000a8c7e) bg_sp_fs_scroll_pane_g1

0xe781,	// (0x000a8c87) bg_sp_fs_scroll_pane_g2

0xe78a,	// (0x000a8c90) bg_sp_fs_scroll_pane_g3

0x0002,

0x0a5b,	// (0x0009af61) bg_sp_fs_scroll_pane_g

0x1e0e,	// (0x0009c314) list_medium_line_x2_t3_g4_g1_ParamLimits

0x1e0e,	// (0x0009c314) list_medium_line_x2_t3_g4_g1

0x1eb4,	// (0x0009c3ba) list_medium_line_x2_t3_g4_g2_ParamLimits

0x1eb4,	// (0x0009c3ba) list_medium_line_x2_t3_g4_g2

0x1e1a,	// (0x0009c320) list_medium_line_x2_t3_g4_g3_ParamLimits

0x1e1a,	// (0x0009c320) list_medium_line_x2_t3_g4_g3

0x1e26,	// (0x0009c32c) list_medium_line_x2_t3_g4_g4_ParamLimits

0x1e26,	// (0x0009c32c) list_medium_line_x2_t3_g4_g4

0x0003,

0xf2c7,	// (0x000a97cd) list_medium_line_x2_t3_g4_g_ParamLimits

0xf2c7,	// (0x000a97cd) list_medium_line_x2_t3_g4_g

0x890d,	// (0x000a2e13) list_medium_line_x2_t3_g4_t1_ParamLimits

0x890d,	// (0x000a2e13) list_medium_line_x2_t3_g4_t1

0x8923,	// (0x000a2e29) list_medium_line_x2_t3_g4_t2_ParamLimits

0x8923,	// (0x000a2e29) list_medium_line_x2_t3_g4_t2

0x1e59,	// (0x0009c35f) list_medium_line_x2_t3_g4_t3_ParamLimits

0x1e59,	// (0x0009c35f) list_medium_line_x2_t3_g4_t3

0x0002,

0xfabf,	// (0x000a9fc5) list_medium_line_x2_t3_g4_t_ParamLimits

0xfabf,	// (0x000a9fc5) list_medium_line_x2_t3_g4_t

0x6ef1,	// (0x000a13f7) list_medium_line_g2_g1_ParamLimits

0x6ef1,	// (0x000a13f7) list_medium_line_g2_g1

0x6efd,	// (0x000a1403) list_medium_line_g2_g2_ParamLimits

0x6efd,	// (0x000a1403) list_medium_line_g2_g2

0x0001,

0xf85e,	// (0x000a9d64) list_medium_line_g2_g_ParamLimits

0xf85e,	// (0x000a9d64) list_medium_line_g2_g

0x893c,	// (0x000a2e42) list_medium_line_g2_t1_ParamLimits

0x893c,	// (0x000a2e42) list_medium_line_g2_t1

0x6ef1,	// (0x000a13f7) list_medium_line_t3_g2_g1_ParamLimits

0x6ef1,	// (0x000a13f7) list_medium_line_t3_g2_g1

0x6efd,	// (0x000a1403) list_medium_line_t3_g2_g2_ParamLimits

0x6efd,	// (0x000a1403) list_medium_line_t3_g2_g2

0x0001,

0xf85e,	// (0x000a9d64) list_medium_line_t3_g2_g_ParamLimits

0xf85e,	// (0x000a9d64) list_medium_line_t3_g2_g

0x8951,	// (0x000a2e57) list_medium_line_t3_g2_t1_ParamLimits

0x8951,	// (0x000a2e57) list_medium_line_t3_g2_t1

0x8968,	// (0x000a2e6e) list_medium_line_t3_g2_t2_ParamLimits

0x8968,	// (0x000a2e6e) list_medium_line_t3_g2_t2

0x897d,	// (0x000a2e83) list_medium_line_t3_g2_t3_ParamLimits

0x897d,	// (0x000a2e83) list_medium_line_t3_g2_t3

0x0002,

0xfac6,	// (0x000a9fcc) list_medium_line_t3_g2_t_ParamLimits

0xfac6,	// (0x000a9fcc) list_medium_line_t3_g2_t

0x8586,	// (0x000a2a8c) list_medium_line_right_icon_g1

0x8992,	// (0x000a2e98) list_medium_line_right_icon_t1

0x6ef1,	// (0x000a13f7) list_medium_line_t2_g1_ParamLimits

0x6ef1,	// (0x000a13f7) list_medium_line_t2_g1

0x89a0,	// (0x000a2ea6) list_medium_line_t2_t1_ParamLimits

0x89a0,	// (0x000a2ea6) list_medium_line_t2_t1

0x89ba,	// (0x000a2ec0) list_medium_line_t2_t2_ParamLimits

0x89ba,	// (0x000a2ec0) list_medium_line_t2_t2

0x0001,

0xfacd,	// (0x000a9fd3) list_medium_line_t2_t_ParamLimits

0xfacd,	// (0x000a9fd3) list_medium_line_t2_t

0x6ef1,	// (0x000a13f7) list_medium_line_t3_g1_ParamLimits

0x6ef1,	// (0x000a13f7) list_medium_line_t3_g1

0x89cf,	// (0x000a2ed5) list_medium_line_t3_t1_ParamLimits

0x89cf,	// (0x000a2ed5) list_medium_line_t3_t1

0x89e9,	// (0x000a2eef) list_medium_line_t3_t2_ParamLimits

0x89e9,	// (0x000a2eef) list_medium_line_t3_t2

0x89fe,	// (0x000a2f04) list_medium_line_t3_t3_ParamLimits

0x89fe,	// (0x000a2f04) list_medium_line_t3_t3

0x0002,

0xfad2,	// (0x000a9fd8) list_medium_line_t3_t_ParamLimits

0xfad2,	// (0x000a9fd8) list_medium_line_t3_t

0x6ef1,	// (0x000a13f7) list_medium_line_g3_g1_ParamLimits

0x6ef1,	// (0x000a13f7) list_medium_line_g3_g1

0x8a13,	// (0x000a2f19) list_medium_line_g3_g2_ParamLimits

0x8a13,	// (0x000a2f19) list_medium_line_g3_g2

0x6efd,	// (0x000a1403) list_medium_line_g3_g3_ParamLimits

0x6efd,	// (0x000a1403) list_medium_line_g3_g3

0x0002,

0xfad9,	// (0x000a9fdf) list_medium_line_g3_g_ParamLimits

0xfad9,	// (0x000a9fdf) list_medium_line_g3_g

0x8a1f,	// (0x000a2f25) list_medium_line_g3_t1_ParamLimits

0x8a1f,	// (0x000a2f25) list_medium_line_g3_t1

0x6ef1,	// (0x000a13f7) list_medium_line_t2_g3_g1_ParamLimits

0x6ef1,	// (0x000a13f7) list_medium_line_t2_g3_g1

0x8a13,	// (0x000a2f19) list_medium_line_t2_g3_g2_ParamLimits

0x8a13,	// (0x000a2f19) list_medium_line_t2_g3_g2

0x6efd,	// (0x000a1403) list_medium_line_t2_g3_g3_ParamLimits

0x6efd,	// (0x000a1403) list_medium_line_t2_g3_g3

0x0002,

0xfad9,	// (0x000a9fdf) list_medium_line_t2_g3_g_ParamLimits

0xfad9,	// (0x000a9fdf) list_medium_line_t2_g3_g

0x8a34,	// (0x000a2f3a) list_medium_line_t2_g3_t1_ParamLimits

0x8a34,	// (0x000a2f3a) list_medium_line_t2_g3_t1

0x8a4e,	// (0x000a2f54) list_medium_line_t2_g3_t2_ParamLimits

0x8a4e,	// (0x000a2f54) list_medium_line_t2_g3_t2

0x0001,

0xfae0,	// (0x000a9fe6) list_medium_line_t2_g3_t_ParamLimits

0xfae0,	// (0x000a9fe6) list_medium_line_t2_g3_t

0x6ef1,	// (0x000a13f7) list_medium_line_t3_g3_g1_ParamLimits

0x6ef1,	// (0x000a13f7) list_medium_line_t3_g3_g1

0x8a13,	// (0x000a2f19) list_medium_line_t3_g3_g2_ParamLimits

0x8a13,	// (0x000a2f19) list_medium_line_t3_g3_g2

0x6efd,	// (0x000a1403) list_medium_line_t3_g3_g3_ParamLimits

0x6efd,	// (0x000a1403) list_medium_line_t3_g3_g3

0x0002,

0xfad9,	// (0x000a9fdf) list_medium_line_t3_g3_g_ParamLimits

0xfad9,	// (0x000a9fdf) list_medium_line_t3_g3_g

0x8a63,	// (0x000a2f69) list_medium_line_t3_g3_t1_ParamLimits

0x8a63,	// (0x000a2f69) list_medium_line_t3_g3_t1

0x8a7c,	// (0x000a2f82) list_medium_line_t3_g3_t2_ParamLimits

0x8a7c,	// (0x000a2f82) list_medium_line_t3_g3_t2

0x8a92,	// (0x000a2f98) list_medium_line_t3_g3_t3_ParamLimits

0x8a92,	// (0x000a2f98) list_medium_line_t3_g3_t3

0x0002,

0xfae5,	// (0x000a9feb) list_medium_line_t3_g3_t_ParamLimits

0xfae5,	// (0x000a9feb) list_medium_line_t3_g3_t

0x8706,	// (0x000a2c0c) list_medium_line_right_iconx2_g1

0x8586,	// (0x000a2a8c) list_medium_line_right_iconx2_g2

0x0001,

0xfaec,	// (0x000a9ff2) list_medium_line_right_iconx2_g

0x8aa8,	// (0x000a2fae) list_medium_line_right_iconx2_t1

0x8706,	// (0x000a2c0c) list_medium_line_t2_right_iconx2_g1

0x8586,	// (0x000a2a8c) list_medium_line_t2_right_iconx2_g2

0x0001,

0xfaec,	// (0x000a9ff2) list_medium_line_t2_right_iconx2_g

0x8ab6,	// (0x000a2fbc) list_medium_line_t2_right_iconx2_t1

0x8ac6,	// (0x000a2fcc) list_medium_line_t2_right_iconx2_t2

0x0001,

0xfaf1,	// (0x000a9ff7) list_medium_line_t2_right_iconx2_t

0x8ad4,	// (0x000a2fda) list_medium_line_x4_t4_t1

0x8ae2,	// (0x000a2fe8) list_medium_line_x4_t4_t2

0x8af2,	// (0x000a2ff8) list_medium_line_x4_t4_t3

0x8b02,	// (0x000a3008) list_medium_line_x4_t4_t4

0x0003,

0xfaf6,	// (0x000a9ffc) list_medium_line_x4_t4_t

0x8b3c,	// (0x000a3042) tport_appsw_pane_ParamLimits

0x8b3c,	// (0x000a3042) tport_appsw_pane

0x8b4a,	// (0x000a3050) tport_contact_pane_ParamLimits

0x8b4a,	// (0x000a3050) tport_contact_pane

0x8b5a,	// (0x000a3060) tport_listscroll_pane_ParamLimits

0x8b5a,	// (0x000a3060) tport_listscroll_pane

0x8b6a,	// (0x000a3070) cell_tport_appsw_pane_ParamLimits

0x8b6a,	// (0x000a3070) cell_tport_appsw_pane

0xceed,	// (0x000a73f3) tport_appsw_pane_g1_ParamLimits

0xceed,	// (0x000a73f3) tport_appsw_pane_g1

0xe793,	// (0x000a8c99) tport_contact_pane_g1

0xe12b,	// (0x000a8631) tport_contact_pane_t1

0xe79c,	// (0x000a8ca2) tport_contact_pane_t2

0x0001,

0xfaff,	// (0x000aa005) tport_contact_pane_t

0xe7aa,	// (0x000a8cb0) list_tport_pane

0xe7bc,	// (0x000a8cc2) scroll_pane_cp_030

0x8b9d,	// (0x000a30a3) cell_tport_appsw_pane_g1

0x8bad,	// (0x000a30b3) cell_tport_appsw_pane_t1

0x8bbb,	// (0x000a30c1) grid_highlight_pane_cp019

0x8bc3,	// (0x000a30c9) list_tport_double_graphic_pane_ParamLimits

0x8bc3,	// (0x000a30c9) list_tport_double_graphic_pane

0xa49e,	// (0x000a49a4) list_highlight_pane_cp023_ParamLimits

0xa49e,	// (0x000a49a4) list_highlight_pane_cp023

0x8bd5,	// (0x000a30db) list_tport_double_graphic_pane_g1_ParamLimits

0x8bd5,	// (0x000a30db) list_tport_double_graphic_pane_g1

0x8be2,	// (0x000a30e8) list_tport_double_graphic_pane_t1_ParamLimits

0x8be2,	// (0x000a30e8) list_tport_double_graphic_pane_t1

0x8bf7,	// (0x000a30fd) list_tport_double_graphic_pane_t2_ParamLimits

0x8bf7,	// (0x000a30fd) list_tport_double_graphic_pane_t2

0x0001,

0xfb0b,	// (0x000aa011) list_tport_double_graphic_pane_t_ParamLimits

0xfb0b,	// (0x000aa011) list_tport_double_graphic_pane_t

0x9b4c,	// (0x000a4052) main_cale_note_pane

0x6691,	// (0x000a0b97) cell_vitu2_function_top_wide_pane_cp01_ParamLimits

0x6691,	// (0x000a0b97) cell_vitu2_function_top_wide_pane_cp01

0x816e,	// (0x000a2674) wait_bar_pane_cp05_ParamLimits

0xa49e,	// (0x000a49a4) listscroll_cmail_pane

0xe7c5,	// (0x000a8ccb) list_cmail_pane

0x8c09,	// (0x000a310f) list_cmail_body_pane

0x8c30,	// (0x000a3136) list_single_cmail_header_caption_pane

0x8c64,	// (0x000a316a) list_single_cmail_header_detail_pane_ParamLimits

0x8c64,	// (0x000a316a) list_single_cmail_header_detail_pane

0xe7d5,	// (0x000a8cdb) list_single_cmail_header_caption_pane_t1

0x8ca8,	// (0x000a31ae) list_single_cmail_header_detail_pane_g1_ParamLimits

0x8ca8,	// (0x000a31ae) list_single_cmail_header_detail_pane_g1

0xa52b,	// (0x000a4a31) list_single_cmail_header_detail_pane_g2_ParamLimits

0xa52b,	// (0x000a4a31) list_single_cmail_header_detail_pane_g2

0x0002,

0xfb10,	// (0x000aa016) list_single_cmail_header_detail_pane_g_ParamLimits

0xfb10,	// (0x000aa016) list_single_cmail_header_detail_pane_g

0x8cbe,	// (0x000a31c4) list_single_cmail_header_detail_pane_t1_ParamLimits

0x8cbe,	// (0x000a31c4) list_single_cmail_header_detail_pane_t1

0x8cfa,	// (0x000a3200) list_single_cmail_header_editor_pane_bg_ParamLimits

0x8cfa,	// (0x000a3200) list_single_cmail_header_editor_pane_bg

0xe7f0,	// (0x000a8cf6) list_cmail_body_pane_g1

0xe7f9,	// (0x000a8cff) list_cmail_body_pane_t1

0xd683,	// (0x000a7b89) list_single_cmail_header_editor_pane_bg_g1

0xab94,	// (0x000a509a) list_single_cmail_header_editor_pane_bg_g1_copy1

0xd693,	// (0x000a7b99) list_single_cmail_header_editor_pane_bg_g1_copy2

0xd68b,	// (0x000a7b91) list_single_cmail_header_editor_pane_bg_g1_copy3

0xd8b9,	// (0x000a7dbf) list_single_cmail_header_editor_pane_bg_g1_copy4

0xd6b3,	// (0x000a7bb9) list_single_cmail_header_editor_pane_bg_g1_copy4_copy1

0xd6a3,	// (0x000a7ba9) list_single_cmail_header_editor_pane_bg_g1_copy4_copy2

0xd6ab,	// (0x000a7bb1) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3

0xab74,	// (0x000a507a) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3_copy1

0x8d11,	// (0x000a3217) calenote_gesture_pane_ParamLimits

0x8d11,	// (0x000a3217) calenote_gesture_pane

0x8d2b,	// (0x000a3231) calenote_window_pane_ParamLimits

0x8d2b,	// (0x000a3231) calenote_window_pane

0xe807,	// (0x000a8d0d) popup_note_window_cp01

0x8d43,	// (0x000a3249) calenote_swipe_1_pane_ParamLimits

0x8d43,	// (0x000a3249) calenote_swipe_1_pane

0x856c,	// (0x000a2a72) calenote_swipe_2_pane_ParamLimits

0x856c,	// (0x000a2a72) calenote_swipe_2_pane

0xe619,	// (0x000a8b1f) calenote_swipe_1_pane_g1_ParamLimits

0xe619,	// (0x000a8b1f) calenote_swipe_1_pane_g1

0xe626,	// (0x000a8b2c) calenote_swipe_1_pane_g2_ParamLimits

0xe626,	// (0x000a8b2c) calenote_swipe_1_pane_g2

0x0001,

0x09d7,	// (0x0009aedd) calenote_swipe_1_pane_g_ParamLimits

0x09d7,	// (0x0009aedd) calenote_swipe_1_pane_g

0xe819,	// (0x000a8d1f) calenote_swipe_1_pane_t1_ParamLimits

0xe819,	// (0x000a8d1f) calenote_swipe_1_pane_t1

0xe619,	// (0x000a8b1f) calenote_swipe_2_pane_g1_ParamLimits

0xe619,	// (0x000a8b1f) calenote_swipe_2_pane_g1

0xe838,	// (0x000a8d3e) calenote_swipe_2_pane_g2_ParamLimits

0xe838,	// (0x000a8d3e) calenote_swipe_2_pane_g2

0x0001,

0x0abf,	// (0x0009afc5) calenote_swipe_2_pane_g_ParamLimits

0x0abf,	// (0x0009afc5) calenote_swipe_2_pane_g

0xe844,	// (0x000a8d4a) calenote_swipe_2_pane_t1_ParamLimits

0xe844,	// (0x000a8d4a) calenote_swipe_2_pane_t1

0x9b4c,	// (0x000a4052) main_mup_navstr_pane

0x53cb,	// (0x0009f8d1) main_mup3_pane_t7_ParamLimits

0x53cb,	// (0x0009f8d1) main_mup3_pane_t7

0x5df5,	// (0x000a02fb) main_mp4_pane_g6_ParamLimits

0x5df5,	// (0x000a02fb) main_mp4_pane_g6

0x6175,	// (0x000a067b) main_image3_pane_t4_ParamLimits

0x6175,	// (0x000a067b) main_image3_pane_t4

0x8d56,	// (0x000a325c) popup_navstr_preview_pane_ParamLimits

0x8d56,	// (0x000a325c) popup_navstr_preview_pane

0x8d62,	// (0x000a3268) scroll_navstr_pane_ParamLimits

0x8d62,	// (0x000a3268) scroll_navstr_pane

0x9b4c,	// (0x000a4052) bg_popup_preview_window_pane_cp04

0xe86b,	// (0x000a8d71) popup_navstr_preview_pane_t1

0x8d6e,	// (0x000a3274) scroll_navstr_pane_g1_ParamLimits

0x8d6e,	// (0x000a3274) scroll_navstr_pane_g1

0x8d7b,	// (0x000a3281) scroll_navstr_pane_t1_ParamLimits

0x8d7b,	// (0x000a3281) scroll_navstr_pane_t1

0xe810,	// (0x000a8d16) bg_button_pane_cp014

0xe810,	// (0x000a8d16) bg_button_pane_cp030

0x845b,	// (0x000a2961) list_double_fisheye_pane_g4_ParamLimits

0x845b,	// (0x000a2961) list_double_fisheye_pane_g4

0x8467,	// (0x000a296d) list_double_fisheye_pane_g5_ParamLimits

0x8467,	// (0x000a296d) list_double_fisheye_pane_g5

0xc0bc,	// (0x000a65c2) sp_fs_scroll_pane_cp03

0xe70c,	// (0x000a8c12) main_sp_fs_ctrlbar_pane_g1_ParamLimits

0xe718,	// (0x000a8c1e) main_sp_fs_ctrlbar_pane_g2_ParamLimits

0x09f4,	// (0x0009aefa) main_sp_fs_ctrlbar_pane_g_ParamLimits

0xe724,	// (0x000a8c2a) main_sp_fs_ctrlbar_pane_t1_ParamLimits

0xe7cd,	// (0x000a8cd3) sp_fs_scroll_pane_cp02

0xa88a,	// (0x000a4d90) popup_sp_fs_calendar_preview_list_single_pane_ParamLimits

0xa88a,	// (0x000a4d90) popup_sp_fs_calendar_preview_list_single_pane

0x9b4c,	// (0x000a4052) main_cam6_pano_pane

0x43d1,	// (0x0009e8d7) main_mup3_pane_ParamLimits

0x9b4c,	// (0x000a4052) main_phacti_pane

0x8043,	// (0x000a2549) bg_button_pane_cp11

0x805b,	// (0x000a2561) main_mobtv_info_pane_g2_ParamLimits

0x805b,	// (0x000a2561) main_mobtv_info_pane_g2

0x0001,

0xfa14,	// (0x000a9f1a) main_mobtv_info_pane_g_ParamLimits

0xfa14,	// (0x000a9f1a) main_mobtv_info_pane_g

0x820d,	// (0x000a2713) sc_clock_pane_t5_ParamLimits

0x820d,	// (0x000a2713) sc_clock_pane_t5

0x82c2,	// (0x000a27c8) main_radioblah_pane_g1_ParamLimits

0xe565,	// (0x000a8a6b) main_radioblah_pane_t3_ParamLimits

0xe565,	// (0x000a8a6b) main_radioblah_pane_t3

0xe57d,	// (0x000a8a83) main_radioblah_pane_t4_ParamLimits

0xe57d,	// (0x000a8a83) main_radioblah_pane_t4

0x82e0,	// (0x000a27e6) main_radioblah_text_pane_ParamLimits

0x82e0,	// (0x000a27e6) main_radioblah_text_pane

0x82ed,	// (0x000a27f3) main_radioblah_info_pane_g1_ParamLimits

0x8382,	// (0x000a2888) main_radioblah_info_pane_t4_ParamLimits

0x8382,	// (0x000a2888) main_radioblah_info_pane_t4

0xa49e,	// (0x000a49a4) main_sp_fs_calendar_pane

0x8d8d,	// (0x000a3293) main_phacti_pane_g1

0x8d95,	// (0x000a329b) phacti_note_pane_ParamLimits

0x8d95,	// (0x000a329b) phacti_note_pane

0xe882,	// (0x000a8d88) phacti_term_pane_ParamLimits

0xe882,	// (0x000a8d88) phacti_term_pane

0xe897,	// (0x000a8d9d) phacti_note_pane_t1_ParamLimits

0xe897,	// (0x000a8d9d) phacti_note_pane_t1

0xa22b,	// (0x000a4731) phacti_term_pane_g1

0xa233,	// (0x000a4739) phacti_term_pane_t1_ParamLimits

0xa233,	// (0x000a4739) phacti_term_pane_t1

0xe8ae,	// (0x000a8db4) popup_sp_fs_calendar_preview_list_single_pane_g1

0xe8b6,	// (0x000a8dbc) popup_sp_fs_calendar_preview_list_single_pane_g2

0x0001,

0x0ac9,	// (0x0009afcf) popup_sp_fs_calendar_preview_list_single_pane_g

0xe8be,	// (0x000a8dc4) popup_sp_fs_calendar_preview_list_single_pane_t1_ParamLimits

0xe8be,	// (0x000a8dc4) popup_sp_fs_calendar_preview_list_single_pane_t1

0xe8d4,	// (0x000a8dda) aid_popup_sp_fs_bg_corner_pane

0xcc28,	// (0x000a712e) popup_sp_fs_calendar_preview_bg_pane_g1

0x9b4c,	// (0x000a4052) popup_sp_fs_calendar_preview_bg_pane

0xa25d,	// (0x000a4763) popup_sp_fs_calendar_preview_list_pane

0xc81e,	// (0x000a6d24) bg_main_sp_fs_cale_pane_ParamLimits

0xc81e,	// (0x000a6d24) bg_main_sp_fs_cale_pane

0xa265,	// (0x000a476b) listscroll_cale_mrui_pane_ParamLimits

0xa265,	// (0x000a476b) listscroll_cale_mrui_pane

0xa27a,	// (0x000a4780) listscroll_sp_fs_schedule_track_pane

0xa283,	// (0x000a4789) main_sp_fs_ctrlbar_pane_cp01_ParamLimits

0xa283,	// (0x000a4789) main_sp_fs_ctrlbar_pane_cp01

0xe8dc,	// (0x000a8de2) main_sp_fs_ribbon_pane

0xa296,	// (0x000a479c) popup_sp_fs_cale_preview_window

0x8df8,	// (0x000a32fe) list_single_sp_fs_schedule_track_pane_ParamLimits

0x8df8,	// (0x000a32fe) list_single_sp_fs_schedule_track_pane

0xf051,	// (0x000a9557) bg_sp_fs_highlight_list_pane_cp03_ParamLimits

0xf051,	// (0x000a9557) bg_sp_fs_highlight_list_pane_cp03

0x8e26,	// (0x000a332c) list_single_sp_fs_schedule_track_pane_g1_ParamLimits

0x8e26,	// (0x000a332c) list_single_sp_fs_schedule_track_pane_g1

0x8e32,	// (0x000a3338) list_single_sp_fs_schedule_track_pane_g2_ParamLimits

0x8e32,	// (0x000a3338) list_single_sp_fs_schedule_track_pane_g2

0x0001,

0xfb21,	// (0x000aa027) list_single_sp_fs_schedule_track_pane_g_ParamLimits

0xfb21,	// (0x000aa027) list_single_sp_fs_schedule_track_pane_g

0x8e3e,	// (0x000a3344) list_single_sp_fs_schedule_track_pane_t1_ParamLimits

0x8e3e,	// (0x000a3344) list_single_sp_fs_schedule_track_pane_t1

0x8e56,	// (0x000a335c) sp_fs_schedule_track_pane_ParamLimits

0x8e56,	// (0x000a335c) sp_fs_schedule_track_pane

0xe8e4,	// (0x000a8dea) sp_fs_schedule_track_pane_g1

0xe8ec,	// (0x000a8df2) sp_fs_schedule_track_pane_g2

0xe8f4,	// (0x000a8dfa) sp_fs_schedule_track_pane_g3

0xe8fc,	// (0x000a8e02) sp_fs_schedule_track_pane_g4

0xe904,	// (0x000a8e0a) sp_fs_schedule_track_pane_g5

0x0004,

0x0ad3,	// (0x0009afd9) sp_fs_schedule_track_pane_g

0xd683,	// (0x000a7b89) bg_sp_fs_schedule_viewer_highlight_g1

0xab94,	// (0x000a509a) bg_sp_fs_schedule_viewer_highlight_g2

0xd68b,	// (0x000a7b91) bg_sp_fs_schedule_viewer_highlight_g3

0xd693,	// (0x000a7b99) bg_sp_fs_schedule_viewer_highlight_g4

0xd8b9,	// (0x000a7dbf) bg_sp_fs_schedule_viewer_highlight_g5

0xd6a3,	// (0x000a7ba9) bg_sp_fs_schedule_viewer_highlight_g6

0xd6ab,	// (0x000a7bb1) bg_sp_fs_schedule_viewer_highlight_g7

0xd6b3,	// (0x000a7bb9) bg_sp_fs_schedule_viewer_highlight_g8

0xab74,	// (0x000a507a) bg_sp_fs_schedule_viewer_highlight_g9

0x0008,

0xfb26,	// (0x000aa02c) bg_sp_fs_schedule_viewer_highlight_g

0x9b4c,	// (0x000a4052) bg_main_sp_fs_ribbon_pane

0x8e66,	// (0x000a336c) main_sp_fs_ribbon_pane_g1

0xe90c,	// (0x000a8e12) main_sp_fs_ribbon_pane_t1

0x8e6f,	// (0x000a3375) main_sp_fs_ribbon_pane_t2

0xe91b,	// (0x000a8e21) main_sp_fs_ribbon_pane_t3

0x0002,

0xfb39,	// (0x000aa03f) main_sp_fs_ribbon_pane_t

0xe92a,	// (0x000a8e30) main_sp_fs_ribbon_scheduler_pane

0xe932,	// (0x000a8e38) bg_main_sp_fs_ribbon_pane_g1

0xe93b,	// (0x000a8e41) bg_main_sp_fs_ribbon_pane_g2

0xe944,	// (0x000a8e4a) bg_main_sp_fs_ribbon_pane_g3

0x0002,

0x0af8,	// (0x0009affe) bg_main_sp_fs_ribbon_pane_g

0xe94c,	// (0x000a8e52) main_sp_fs_ribbon_scheduler_pane_g1

0xe955,	// (0x000a8e5b) main_sp_fs_ribbon_scheduler_pane_g2

0xe95e,	// (0x000a8e64) main_sp_fs_ribbon_scheduler_pane_g3

0x0002,

0x0aff,	// (0x0009b005) main_sp_fs_ribbon_scheduler_pane_g

0xe967,	// (0x000a8e6d) list_cale_mrui_pane

0x8e80,	// (0x000a3386) sp_fs_scroll_pane_cp07_ParamLimits

0x8e80,	// (0x000a3386) sp_fs_scroll_pane_cp07

0x8e9c,	// (0x000a33a2) bg_sp_fs_schedule_viewer_highlight_ParamLimits

0x8e9c,	// (0x000a33a2) bg_sp_fs_schedule_viewer_highlight

0xe974,	// (0x000a8e7a) list_single_sp_fs_schedule_track_pane_cp01

0xe97c,	// (0x000a8e82) list_sp_fs_schedule_track_pane

0xe984,	// (0x000a8e8a) sp_fs_scroll_pane_cp06_ParamLimits

0xe984,	// (0x000a8e8a) sp_fs_scroll_pane_cp06

0xcc28,	// (0x000a712e) bgmain_sp_fs_calendar_pane_g1

0x8ea9,	// (0x000a33af) list_single_cale_mrui_pane_ParamLimits

0x8ea9,	// (0x000a33af) list_single_cale_mrui_pane

0xa2a8,	// (0x000a47ae) list_single_cale_mrui_row_pane_ParamLimits

0xa2a8,	// (0x000a47ae) list_single_cale_mrui_row_pane

0xa2b5,	// (0x000a47bb) list_single_cale_mrui_row_pane_g1_ParamLimits

0xa2b5,	// (0x000a47bb) list_single_cale_mrui_row_pane_g1

0xa2ed,	// (0x000a47f3) list_single_cale_mrui_row_pane_t1_ParamLimits

0xa2ed,	// (0x000a47f3) list_single_cale_mrui_row_pane_t1

0x8eda,	// (0x000a33e0) list_single_cale_mrui_row_pane_t2_ParamLimits

0x8eda,	// (0x000a33e0) list_single_cale_mrui_row_pane_t2

0xa2ff,	// (0x000a4805) list_single_cale_mrui_row_pane_t3_ParamLimits

0xa2ff,	// (0x000a4805) list_single_cale_mrui_row_pane_t3

0xa32e,	// (0x000a4834) list_single_cale_mrui_row_pane_t4_ParamLimits

0xa32e,	// (0x000a4834) list_single_cale_mrui_row_pane_t4

0x0003,

0xfb47,	// (0x000aa04d) list_single_cale_mrui_row_pane_t_ParamLimits

0xfb47,	// (0x000aa04d) list_single_cale_mrui_row_pane_t

0x8f40,	// (0x000a3446) list_single_cmail_header_editor_pane_bg_cp01_ParamLimits

0x8f40,	// (0x000a3446) list_single_cmail_header_editor_pane_bg_cp01

0x8f62,	// (0x000a3468) list_single_cmail_header_editor_pane_bg_cp02_ParamLimits

0x8f62,	// (0x000a3468) list_single_cmail_header_editor_pane_bg_cp02

0x8f7e,	// (0x000a3484) main_radioblah_text_pane_t1_ParamLimits

0x8f7e,	// (0x000a3484) main_radioblah_text_pane_t1

0xe9a3,	// (0x000a8ea9) cam6_indi_pane_cp01

0xe9ab,	// (0x000a8eb1) cam6_mode_pane_cp01

0xe9b3,	// (0x000a8eb9) cam6_pano_pane

0xe9bc,	// (0x000a8ec2) cam6_zoom_pane_cp01

0xe9c4,	// (0x000a8eca) cam6_pano_image_pane

0xe9cf,	// (0x000a8ed5) cam6_pano_pane_g1

0xe2d2,	// (0x000a87d8) cam6_pano_pane_g2

0xe9d8,	// (0x000a8ede) cam6_pano_pane_g3

0xe9e1,	// (0x000a8ee7) cam6_pano_pane_g4

0xd1ca,	// (0x000a76d0) cam6_pano_pane_g5

0xe9ea,	// (0x000a8ef0) cam6_pano_pane_g6

0xe9f4,	// (0x000a8efa) cam6_pano_pane_g7

0xe9fc,	// (0x000a8f02) cam6_pano_pane_g8

0xea05,	// (0x000a8f0b) cam6_pano_pane_g9

0x0008,

0x0b16,	// (0x0009b01c) cam6_pano_pane_g

0x9b4c,	// (0x000a4052) main_browser_tag_pane

0xe863,	// (0x000a8d69) grid_navstr_albumart_pane

0xea10,	// (0x000a8f16) cell_navstr_albumart_pane_ParamLimits

0xea10,	// (0x000a8f16) cell_navstr_albumart_pane

0xb571,	// (0x000a5a77) cell_navstr_albumart_pane_g1

0xc62f,	// (0x000a6b35) cell_navstr_albumart_pane_g2

0xc63f,	// (0x000a6b45) cell_navstr_albumart_pane_g3

0xc637,	// (0x000a6b3d) cell_navstr_albumart_pane_g4

0x0003,

0x0b29,	// (0x0009b02f) cell_navstr_albumart_pane_g

0x8f99,	// (0x000a349f) bt_list_pane_ParamLimits

0x8f99,	// (0x000a349f) bt_list_pane

0xea32,	// (0x000a8f38) bt_list_pane_t1

0xea41,	// (0x000a8f47) bt_list_pane_t2

0x0001,

0x0b32,	// (0x0009b038) bt_list_pane_t

0x9b4c,	// (0x000a4052) main_cale_prevew_pane

0x8fbd,	// (0x000a34c3) popup_cale_preview_window_ParamLimits

0x8fbd,	// (0x000a34c3) popup_cale_preview_window

0xa49e,	// (0x000a49a4) bg_popup_preview_window_pane_cp05_ParamLimits

0xa49e,	// (0x000a49a4) bg_popup_preview_window_pane_cp05

0xea50,	// (0x000a8f56) list_cale_preview_pane_ParamLimits

0xea50,	// (0x000a8f56) list_cale_preview_pane

0xea5c,	// (0x000a8f62) list_double_cale_preview_pane_ParamLimits

0xea5c,	// (0x000a8f62) list_double_cale_preview_pane

0xea6e,	// (0x000a8f74) list_single_cale_preview_pane_ParamLimits

0xea6e,	// (0x000a8f74) list_single_cale_preview_pane

0xea82,	// (0x000a8f88) list_single_cale_preview_pane_g1

0xea8a,	// (0x000a8f90) list_single_cale_preview_pane_t1_ParamLimits

0xea8a,	// (0x000a8f90) list_single_cale_preview_pane_t1

0xea9f,	// (0x000a8fa5) list_double_cale_preview_pane_g1

0xeaa7,	// (0x000a8fad) list_double_cale_preview_pane_t1_ParamLimits

0xeaa7,	// (0x000a8fad) list_double_cale_preview_pane_t1

0xeabc,	// (0x000a8fc2) list_double_cale_preview_pane_t2_ParamLimits

0xeabc,	// (0x000a8fc2) list_double_cale_preview_pane_t2

0x0001,

0x0b37,	// (0x0009b03d) list_double_cale_preview_pane_t_ParamLimits

0x0b37,	// (0x0009b03d) list_double_cale_preview_pane_t

0x9b4c,	// (0x000a4052) main_ezdial_pane

0xa49e,	// (0x000a49a4) main_sp_fs_email_pane_ParamLimits

0x85ac,	// (0x000a2ab2) cmail_ddmenu_btn01_pane_ParamLimits

0x85ac,	// (0x000a2ab2) cmail_ddmenu_btn01_pane

0x85c9,	// (0x000a2acf) cmail_ddmenu_btn02_pane_ParamLimits

0x85c9,	// (0x000a2acf) cmail_ddmenu_btn02_pane

0x85e7,	// (0x000a2aed) cmail_ddmenu_btn03_pane_ParamLimits

0x85e7,	// (0x000a2aed) cmail_ddmenu_btn03_pane

0x8615,	// (0x000a2b1b) main_sp_fs_ctrlbar_pane_ParamLimits

0x862b,	// (0x000a2b31) main_sp_fs_listscroll_pane_te_cp01_ParamLimits

0x8c09,	// (0x000a310f) list_cmail_body_pane_ParamLimits

0x8c9f,	// (0x000a31a5) bg_button_pane_cp12

0xe7e3,	// (0x000a8ce9) list_single_cmail_header_detail_pane_g3_ParamLimits

0xe7e3,	// (0x000a8ce9) list_single_cmail_header_detail_pane_g3

0xa207,	// (0x000a470d) list_single_cmail_header_detail_pane_t2_ParamLimits

0xa207,	// (0x000a470d) list_single_cmail_header_detail_pane_t2

0x0001,

0xfb17,	// (0x000aa01d) list_single_cmail_header_detail_pane_t_ParamLimits

0xfb17,	// (0x000aa01d) list_single_cmail_header_detail_pane_t

0xa248,	// (0x000a474e) phacti_term_pane_t2_ParamLimits

0xa248,	// (0x000a474e) phacti_term_pane_t2

0x0001,

0xfb1c,	// (0x000aa022) phacti_term_pane_t_ParamLimits

0xfb1c,	// (0x000aa022) phacti_term_pane_t

0xead4,	// (0x000a8fda) aid_size_list_single_double

0x8fd4,	// (0x000a34da) popup_ezdial_listscroll_window

0x8ff7,	// (0x000a34fd) popup_number_entry_window_cp01

0xb410,	// (0x000a5916) bg_popup_call_pane_cp09

0xeae0,	// (0x000a8fe6) ezdial_list_pane

0xeae8,	// (0x000a8fee) scroll_pane_cp23

0xca0b,	// (0x000a6f11) bg_button_pane_cp028_ParamLimits

0xca0b,	// (0x000a6f11) bg_button_pane_cp028

0x9005,	// (0x000a350b) cmail_ddmenu_btn01_pane_g1_ParamLimits

0x9005,	// (0x000a350b) cmail_ddmenu_btn01_pane_g1

0x9017,	// (0x000a351d) cmail_ddmenu_btn01_pane_g2_ParamLimits

0x9017,	// (0x000a351d) cmail_ddmenu_btn01_pane_g2

0x0001,

0xfb50,	// (0x000aa056) cmail_ddmenu_btn01_pane_g_ParamLimits

0xfb50,	// (0x000aa056) cmail_ddmenu_btn01_pane_g

0xeaf0,	// (0x000a8ff6) cmail_ddmenu_btn01_pane_t1_ParamLimits

0xeaf0,	// (0x000a8ff6) cmail_ddmenu_btn01_pane_t1

0xc81e,	// (0x000a6d24) bg_button_pane_cp029_ParamLimits

0xc81e,	// (0x000a6d24) bg_button_pane_cp029

0x9023,	// (0x000a3529) cmail_ddmenu_btn02_pane_g1_ParamLimits

0x9023,	// (0x000a3529) cmail_ddmenu_btn02_pane_g1

0x903b,	// (0x000a3541) cmail_ddmenu_btn02_pane_t1_ParamLimits

0x903b,	// (0x000a3541) cmail_ddmenu_btn02_pane_t1

0xf051,	// (0x000a9557) bg_button_pane_cp031_ParamLimits

0xf051,	// (0x000a9557) bg_button_pane_cp031

0x9023,	// (0x000a3529) cmail_ddmenu_btn03_pane_g1_ParamLimits

0x9023,	// (0x000a3529) cmail_ddmenu_btn03_pane_g1

0x903b,	// (0x000a3541) cmail_ddmenu_btn03_pane_t1_ParamLimits

0x903b,	// (0x000a3541) cmail_ddmenu_btn03_pane_t1

0x6012,	// (0x000a0518) cell_dialer2_keypad_pane_t1_ParamLimits

0x602c,	// (0x000a0532) cell_dialer2_keypad_pane_t1_copy1_ParamLimits

0x602c,	// (0x000a0532) cell_dialer2_keypad_pane_t1_copy1

0x7ec8,	// (0x000a23ce) ncimui_group_button_pane

0xa49e,	// (0x000a49a4) main_sp_fs_calendar_pane_ParamLimits

0x8c30,	// (0x000a3136) list_single_cmail_header_caption_pane_ParamLimits

0xa537,	// (0x000a4a3d) aid_recal_txt_sm_pane

0x9b4c,	// (0x000a4052) mian_recal_day_pane

0xa296,	// (0x000a479c) popup_sp_fs_cale_preview_window_ParamLimits

0xeb05,	// (0x000a900b) list_recal_day_pane

0xa55b,	// (0x000a4a61) list_single_recal_day_pane_ParamLimits

0xa55b,	// (0x000a4a61) list_single_recal_day_pane

0xeb2c,	// (0x000a9032) list_single_recal_day_pane_g1_ParamLimits

0xeb2c,	// (0x000a9032) list_single_recal_day_pane_g1

0xa56d,	// (0x000a4a73) list_single_recal_day_pane_g2_ParamLimits

0xa56d,	// (0x000a4a73) list_single_recal_day_pane_g2

0xa57d,	// (0x000a4a83) list_single_recal_day_pane_g3_ParamLimits

0xa57d,	// (0x000a4a83) list_single_recal_day_pane_g3

0x905f,	// (0x000a3565) list_single_recal_day_pane_g4_ParamLimits

0x905f,	// (0x000a3565) list_single_recal_day_pane_g4

0xa589,	// (0x000a4a8f) list_single_recal_day_pane_g5_ParamLimits

0xa589,	// (0x000a4a8f) list_single_recal_day_pane_g5

0xa599,	// (0x000a4a9f) list_single_recal_day_pane_g6_ParamLimits

0xa599,	// (0x000a4a9f) list_single_recal_day_pane_g6

0x0004,

0xfb5f,	// (0x000aa065) list_single_recal_day_pane_g_ParamLimits

0xfb5f,	// (0x000aa065) list_single_recal_day_pane_g

0xa5ad,	// (0x000a4ab3) list_single_recal_day_pane_t1

0xa5bf,	// (0x000a4ac5) list_single_recal_day_pane_t2

0x0001,

0xfb6a,	// (0x000aa070) list_single_recal_day_pane_t

0x907f,	// (0x000a3585) ncimui_query_button_pane_ParamLimits

0x907f,	// (0x000a3585) ncimui_query_button_pane

0x908f,	// (0x000a3595) ncimui_query_button_pane_t1_ParamLimits

0x908f,	// (0x000a3595) ncimui_query_button_pane_t1

0xeb38,	// (0x000a903e) ncimui_query_button_pane_t2_ParamLimits

0xeb38,	// (0x000a903e) ncimui_query_button_pane_t2

0x0001,

0xfb6f,	// (0x000aa075) ncimui_query_button_pane_t_ParamLimits

0xfb6f,	// (0x000aa075) ncimui_query_button_pane_t

0x90a2,	// (0x000a35a8) query_button_pane_ParamLimits

0x90a2,	// (0x000a35a8) query_button_pane

0x9b4c,	// (0x000a4052) bg_button_pane_cp0028

0xeb4b,	// (0x000a9051) query_button_pane_t1

0x43ed,	// (0x0009e8f3) main_tport_pane_ParamLimits

0x8b12,	// (0x000a3018) bg_popup_window_pane_cp01_ParamLimits

0x8b12,	// (0x000a3018) bg_popup_window_pane_cp01

0x8b20,	// (0x000a3026) heading_pane_cp08_ParamLimits

0x8b20,	// (0x000a3026) heading_pane_cp08

0x8b2e,	// (0x000a3034) heading_pane_cp07_ParamLimits

0x8b2e,	// (0x000a3034) heading_pane_cp07

0x8b9d,	// (0x000a30a3) cell_tport_appsw_pane_g2

0x0002,

0xfb04,	// (0x000aa00a) cell_tport_appsw_pane_g

0x3ae4,	// (0x0009dfea) input_candi_list_open_g1

0xad5f,	// (0x000a5265) list_cale_time_pane_g6_ParamLimits

0xad5f,	// (0x000a5265) list_cale_time_pane_g6

0x4e6d,	// (0x0009f373) aid_size_touch_calib_1_ParamLimits

0x4e6d,	// (0x0009f373) aid_size_touch_calib_1

0x4e79,	// (0x0009f37f) aid_size_touch_calib_2_ParamLimits

0x4e79,	// (0x0009f37f) aid_size_touch_calib_2

0x4e87,	// (0x0009f38d) aid_size_touch_calib_3_ParamLimits

0x4e87,	// (0x0009f38d) aid_size_touch_calib_3

0x4e97,	// (0x0009f39d) aid_size_touch_calib_4_ParamLimits

0x4e97,	// (0x0009f39d) aid_size_touch_calib_4

0x4ea5,	// (0x0009f3ab) main_touch_calib_button_group_pane_ParamLimits

0x4ea5,	// (0x0009f3ab) main_touch_calib_button_group_pane

0x4eb3,	// (0x0009f3b9) main_touch_calib_pane_g1_ParamLimits

0x4ebf,	// (0x0009f3c5) main_touch_calib_pane_g2_ParamLimits

0x4ecb,	// (0x0009f3d1) main_touch_calib_pane_g3_ParamLimits

0x4ed7,	// (0x0009f3dd) main_touch_calib_pane_g4_ParamLimits

0xf635,	// (0x000a9b3b) main_touch_calib_pane_g_ParamLimits

0x4ee3,	// (0x0009f3e9) main_touch_calib_pane_t1_ParamLimits

0x4efc,	// (0x0009f402) main_touch_calib_pane_t2_ParamLimits

0x4f15,	// (0x0009f41b) main_touch_calib_pane_t3_ParamLimits

0x4f2b,	// (0x0009f431) main_touch_calib_pane_t4_ParamLimits

0x4f41,	// (0x0009f447) main_touch_calib_pane_t5_ParamLimits

0xf63e,	// (0x000a9b44) main_touch_calib_pane_t_ParamLimits

0xcf88,	// (0x000a748e) list_single_fp_cale_pane_g3_ParamLimits

0xcf88,	// (0x000a748e) list_single_fp_cale_pane_g3

0x43d1,	// (0x0009e8d7) bg_button_pane_cp012_ParamLimits

0x43d1,	// (0x0009e8d7) bg_vkb2_func_pane_cp03_ParamLimits

0x6e71,	// (0x000a1377) cell_vitu2_function_top_pane_g1_ParamLimits

0x43d1,	// (0x0009e8d7) bg_vkb2_func_pane_cp04_ParamLimits

0x7e50,	// (0x000a2356) main_ncimui_button_group_pane_ParamLimits

0x7e50,	// (0x000a2356) main_ncimui_button_group_pane

0x7eb6,	// (0x000a23bc) main_ncimui_pane_t3_ParamLimits

0x7eb6,	// (0x000a23bc) main_ncimui_pane_t3

0xe879,	// (0x000a8d7f) phacti_button_group_pane

0xead4,	// (0x000a8fda) aid_size_list_single_double_ParamLimits

0x8fd4,	// (0x000a34da) popup_ezdial_listscroll_window_ParamLimits

0x8ff7,	// (0x000a34fd) popup_number_entry_window_cp01_ParamLimits

0x90af,	// (0x000a35b5) phacti_button_pane_ParamLimits

0x90af,	// (0x000a35b5) phacti_button_pane

0x9b4c,	// (0x000a4052) bg_button_pane_cp14

0xeb59,	// (0x000a905f) phacti_button_pane_t1

0x90c0,	// (0x000a35c6) main_touch_calib_button_pane_ParamLimits

0x90c0,	// (0x000a35c6) main_touch_calib_button_pane

0xa774,	// (0x000a4c7a) bg_button_pane_cp18_ParamLimits

0xa774,	// (0x000a4c7a) bg_button_pane_cp18

0xeb67,	// (0x000a906d) main_touch_calib_button_pane_t1_ParamLimits

0xeb67,	// (0x000a906d) main_touch_calib_button_pane_t1

0xeb7d,	// (0x000a9083) main_touch_calib_button_pane_t2_ParamLimits

0xeb7d,	// (0x000a9083) main_touch_calib_button_pane_t2

0x0001,

0x0b60,	// (0x0009b066) main_touch_calib_button_pane_t_ParamLimits

0x0b60,	// (0x0009b066) main_touch_calib_button_pane_t

0x9b4c,	// (0x000a4052) cell_ncimui_button_pane

0x9b4c,	// (0x000a4052) bg_button_pane_cp032

0xeb9b,	// (0x000a90a1) cell_ncimui_button_pane_t1

0x6088,	// (0x000a058e) image3_infobar_pane_ParamLimits

0x6088,	// (0x000a058e) image3_infobar_pane

0x822f,	// (0x000a2735) fs_bigclock_status_pane_ParamLimits

0x822f,	// (0x000a2735) fs_bigclock_status_pane

0x823c,	// (0x000a2742) main_fs_bigclock_clock_pane_ParamLimits

0x823c,	// (0x000a2742) main_fs_bigclock_clock_pane

0x8260,	// (0x000a2766) main_fs_bigclock_indi_pane_ParamLimits

0x8260,	// (0x000a2766) main_fs_bigclock_indi_pane

0x8290,	// (0x000a2796) main_fs_bigclock_swipe_pane_ParamLimits

0x8290,	// (0x000a2796) main_fs_bigclock_swipe_pane

0x9b4c,	// (0x000a4052) main_fs_clock_dumped_data

0xe3df,	// (0x000a88e5) list_single_fs_bigclock_indicator_pane_g1_ParamLimits

0xe3df,	// (0x000a88e5) list_single_fs_bigclock_indicator_pane_g1

0xe3fa,	// (0x000a8900) list_single_fs_bigclock_indicator_pane_g2_ParamLimits

0xe3fa,	// (0x000a8900) list_single_fs_bigclock_indicator_pane_g2

0xe414,	// (0x000a891a) list_single_fs_bigclock_indicator_pane_g3_ParamLimits

0xe414,	// (0x000a891a) list_single_fs_bigclock_indicator_pane_g3

0xe42e,	// (0x000a8934) list_single_fs_bigclock_indicator_pane_g4_ParamLimits

0xe42e,	// (0x000a8934) list_single_fs_bigclock_indicator_pane_g4

0x0004,

0x0988,	// (0x0009ae8e) list_single_fs_bigclock_indicator_pane_g_ParamLimits

0x0988,	// (0x0009ae8e) list_single_fs_bigclock_indicator_pane_g

0xe457,	// (0x000a895d) list_single_fs_bigclock_indicator_pane_t1_ParamLimits

0xe457,	// (0x000a895d) list_single_fs_bigclock_indicator_pane_t1

0xe47f,	// (0x000a8985) list_single_fs_bigclock_indicator_pane_t2_ParamLimits

0xe47f,	// (0x000a8985) list_single_fs_bigclock_indicator_pane_t2

0xe4a7,	// (0x000a89ad) list_single_fs_bigclock_indicator_pane_t3_ParamLimits

0xe4a7,	// (0x000a89ad) list_single_fs_bigclock_indicator_pane_t3

0xe4cf,	// (0x000a89d5) list_single_fs_bigclock_indicator_pane_t4_ParamLimits

0xe4cf,	// (0x000a89d5) list_single_fs_bigclock_indicator_pane_t4

0x0004,

0x0993,	// (0x0009ae99) list_single_fs_bigclock_indicator_pane_t_ParamLimits

0x0993,	// (0x0009ae99) list_single_fs_bigclock_indicator_pane_t

0xeba9,	// (0x000a90af) image3_infobar_fav_pane_ParamLimits

0xeba9,	// (0x000a90af) image3_infobar_fav_pane

0xebb9,	// (0x000a90bf) image3_infobar_loc_pane_ParamLimits

0xebb9,	// (0x000a90bf) image3_infobar_loc_pane

0xebcd,	// (0x000a90d3) image3_infobar_time_pane_ParamLimits

0xebcd,	// (0x000a90d3) image3_infobar_time_pane

0xcc28,	// (0x000a712e) image3_infobar_time_pane_g1

0xebdd,	// (0x000a90e3) image3_infobar_time_pane_t1

0xcc28,	// (0x000a712e) image3_infobar_loc_pane_g1

0xebeb,	// (0x000a90f1) image3_infobar_loc_pane_g2

0x0001,

0x0b65,	// (0x0009b06b) image3_infobar_loc_pane_g

0xebf3,	// (0x000a90f9) image3_infobar_loc_pane_t1

0xcc28,	// (0x000a712e) image3_infobar_fav_pane_g1

0xec01,	// (0x000a9107) image3_infobar_fav_pane_g2

0x0001,

0x0b6a,	// (0x0009b070) image3_infobar_fav_pane_g

0xec09,	// (0x000a910f) fs_bigclock_status_battery_pane

0xec12,	// (0x000a9118) fs_bigclock_status_signal_pane

0xec1b,	// (0x000a9121) fs_bigclock_status_title_pane

0xec24,	// (0x000a912a) fs_bigclock_status_signal_pane_g1

0xec2d,	// (0x000a9133) fs_bigclock_status_signal_pane_g2

0x0001,

0x0b6f,	// (0x0009b075) fs_bigclock_status_signal_pane_g

0xec35,	// (0x000a913b) fs_bigclock_status_battery_pane_g1

0xec3e,	// (0x000a9144) fs_bigclock_status_battery_pane_g2

0x0001,

0x0b74,	// (0x0009b07a) fs_bigclock_status_battery_pane_g

0xec46,	// (0x000a914c) fs_bigclock_status_title_pane_t1

0xcc28,	// (0x000a712e) main_fs_bigclock_clock_pane_g1

0x90d0,	// (0x000a35d6) main_fs_bigclock_clock_pane_g2

0x90d0,	// (0x000a35d6) main_fs_bigclock_clock_pane_g3

0x90d0,	// (0x000a35d6) main_fs_bigclock_clock_pane_g4

0x0003,

0xfb74,	// (0x000aa07a) main_fs_bigclock_clock_pane_g

0x90d8,	// (0x000a35de) main_fs_bigclock_clock_pane_t1

0x90e6,	// (0x000a35ec) main_fs_bigclock_clock_pane_t2

0x0001,

0xfb7d,	// (0x000aa083) main_fs_bigclock_clock_pane_t

0xec54,	// (0x000a915a) list_single_fs_bigclock_indicator_pane_ParamLimits

0xec54,	// (0x000a915a) list_single_fs_bigclock_indicator_pane

0x90f5,	// (0x000a35fb) list_single_fs_bigclock_pane_ParamLimits

0x90f5,	// (0x000a35fb) list_single_fs_bigclock_pane

0xec6e,	// (0x000a9174) main_fs_bigclock_indicator_pane_t1

0xec7d,	// (0x000a9183) list_single_fs_bigclock_pane_g1

0xec85,	// (0x000a918b) list_single_fs_bigclock_pane_t1

0xcc28,	// (0x000a712e) main_fs_bigclock_swipe_pane_g1

0xecc8,	// (0x000a91ce) main_fs_bigclock_swipe_pane_g2

0x0001,

0x0b93,	// (0x0009b099) main_fs_bigclock_swipe_pane_g

0xecd0,	// (0x000a91d6) main_fs_bigclock_swipe_pane_t1_ParamLimits

0xecd0,	// (0x000a91d6) main_fs_bigclock_swipe_pane_t1

0x3395,	// (0x0009d89b) call_type_pane_ParamLimits

0x9b4c,	// (0x000a4052) main_btmg_pane

0xa2e1,	// (0x000a47e7) list_single_cale_mrui_row_pane_g2_ParamLimits

0xa2e1,	// (0x000a47e7) list_single_cale_mrui_row_pane_g2

0x0002,

0xfb40,	// (0x000aa046) list_single_cale_mrui_row_pane_g_ParamLimits

0xfb40,	// (0x000aa046) list_single_cale_mrui_row_pane_g

0xa54a,	// (0x000a4a50) list_recal_vselct_arw_lo_pane

0xeb24,	// (0x000a902a) list_recal_vselct_arw_up_pane

0xa552,	// (0x000a4a58) list_recal_vselct_pane

0x9156,	// (0x000a365c) btmg_button_pane

0x9162,	// (0x000a3668) main_btmg_pane_g1

0x9b4c,	// (0x000a4052) bg_button_pane_cp044

0xeced,	// (0x000a91f3) btmg_button_pane_t1

0xc80a,	// (0x000a6d10) aid_listscroll_gen

0xa49e,	// (0x000a49a4) main_cntbar_detail_pane

0xe7c5,	// (0x000a8ccb) list_cmail_folder_pane

0xc0bc,	// (0x000a65c2) sp_fs_scroll_pane_cp03_ParamLimits

0x916a,	// (0x000a3670) list_single_fs_dyc_pane_cp01_ParamLimits

0x916a,	// (0x000a3670) list_single_fs_dyc_pane_cp01

0xecfb,	// (0x000a9201) aid_size_cmail_indent

0xa5d1,	// (0x000a4ad7) list_single_dyc_row_pane_cp01

0x91ba,	// (0x000a36c0) cntbar_detail_list_pane_ParamLimits

0x91ba,	// (0x000a36c0) cntbar_detail_list_pane

0x91f4,	// (0x000a36fa) main_cntbar_detail_cont_pane_ParamLimits

0x91f4,	// (0x000a36fa) main_cntbar_detail_cont_pane

0x32b8,	// (0x0009d7be) scroll_pane_cp032_ParamLimits

0x32b8,	// (0x0009d7be) scroll_pane_cp032

0x9200,	// (0x000a3706) cntbar_detail_list_event_pane_ParamLimits

0x9200,	// (0x000a3706) cntbar_detail_list_event_pane

0x91c6,	// (0x000a36cc) cntbar_detail_list_shct_pane

0xabe2,	// (0x000a50e8) aid_list_gen

0xed04,	// (0x000a920a) aid_scroll

0xed0d,	// (0x000a9213) aid_size_touch_scroll_bar

0x75c1,	// (0x000a1ac7) aid_list_double

0xe7b3,	// (0x000a8cb9) aid_list_single

0x75af,	// (0x000a1ab5) aid_list_single_lg

0xa5da,	// (0x000a4ae0) aid_list_z_g_a_sm

0xa5e2,	// (0x000a4ae8) aid_list_z_g_d

0xa5ea,	// (0x000a4af0) aid_txt_z_prm

0x9214,	// (0x000a371a) aid_txt_z_prm_cp01

0x9222,	// (0x000a3728) aid_txt_z_sec

0x9230,	// (0x000a3736) main_cntbar_detail_cont_pane_g1_ParamLimits

0x9230,	// (0x000a3736) main_cntbar_detail_cont_pane_g1

0x923d,	// (0x000a3743) main_cntbar_detail_cont_pane_g2_ParamLimits

0x923d,	// (0x000a3743) main_cntbar_detail_cont_pane_g2

0x0001,

0xfb89,	// (0x000aa08f) main_cntbar_detail_cont_pane_g_ParamLimits

0xfb89,	// (0x000aa08f) main_cntbar_detail_cont_pane_g

0xed16,	// (0x000a921c) main_cntbar_detail_cont_pane_t1

0xed24,	// (0x000a922a) main_cntbar_detail_cont_pane_t2

0xed32,	// (0x000a9238) main_cntbar_detail_cont_pane_t3

0x0002,

0x0b9d,	// (0x0009b0a3) main_cntbar_detail_cont_pane_t

0x9249,	// (0x000a374f) cell_cntbar_detail_list_shct_pane_ParamLimits

0x9249,	// (0x000a374f) cell_cntbar_detail_list_shct_pane

0xed40,	// (0x000a9246) cntbar_detail_list_shct_pane_g1

0xed49,	// (0x000a924f) cntbar_detail_list_shct_pane_g2

0x0001,

0x0ba4,	// (0x0009b0aa) cntbar_detail_list_shct_pane_g

0x925d,	// (0x000a3763) cntbar_detail_list_event_pane_g1_ParamLimits

0x925d,	// (0x000a3763) cntbar_detail_list_event_pane_g1

0x9269,	// (0x000a376f) cntbar_detail_list_event_pane_g2_ParamLimits

0x9269,	// (0x000a376f) cntbar_detail_list_event_pane_g2

0x0005,

0xfb8e,	// (0x000aa094) cntbar_detail_list_event_pane_g_ParamLimits

0xfb8e,	// (0x000aa094) cntbar_detail_list_event_pane_g

0x92d5,	// (0x000a37db) cntbar_detail_list_event_pane_t1_ParamLimits

0x92d5,	// (0x000a37db) cntbar_detail_list_event_pane_t1

0x92ea,	// (0x000a37f0) cntbar_detail_list_event_pane_t2_ParamLimits

0x92ea,	// (0x000a37f0) cntbar_detail_list_event_pane_t2

0x0002,

0xfb9b,	// (0x000aa0a1) cntbar_detail_list_event_pane_t_ParamLimits

0xfb9b,	// (0x000aa0a1) cntbar_detail_list_event_pane_t

0xcc28,	// (0x000a712e) cell_cntbar_detail_list_shct_pane_g1

0xb3c8,	// (0x000a58ce) navi_pane_mv_g3

0xa49e,	// (0x000a49a4) main_cntbar_detail_pane_ParamLimits

0x9b4c,	// (0x000a4052) main_notif_wgt_pane

0x5d3c,	// (0x000a0242) aid_tch_main_mp4_pane_g4

0x5f71,	// (0x000a0477) popup_slider_window_cp02

0xa540,	// (0x000a4a46) list_recal_day_event_pane

0x919a,	// (0x000a36a0) cntbar_detail_btn_pane_ParamLimits

0x919a,	// (0x000a36a0) cntbar_detail_btn_pane

0x91aa,	// (0x000a36b0) cntbar_detail_btn_pane_cp01_ParamLimits

0x91aa,	// (0x000a36b0) cntbar_detail_btn_pane_cp01

0x91c6,	// (0x000a36cc) cntbar_detail_list_shct_pane_ParamLimits

0x91d2,	// (0x000a36d8) cntbar_detail_pane_g1_ParamLimits

0x91d2,	// (0x000a36d8) cntbar_detail_pane_g1

0x91de,	// (0x000a36e4) cntbar_detail_pane_t1_ParamLimits

0x91de,	// (0x000a36e4) cntbar_detail_pane_t1

0x9275,	// (0x000a377b) cntbar_detail_list_event_pane_g3_ParamLimits

0x9275,	// (0x000a377b) cntbar_detail_list_event_pane_g3

0x928d,	// (0x000a3793) cntbar_detail_list_event_pane_g4_ParamLimits

0x928d,	// (0x000a3793) cntbar_detail_list_event_pane_g4

0x92a5,	// (0x000a37ab) cntbar_detail_list_event_pane_g5_ParamLimits

0x92a5,	// (0x000a37ab) cntbar_detail_list_event_pane_g5

0x92bd,	// (0x000a37c3) cntbar_detail_list_event_pane_g6_ParamLimits

0x92bd,	// (0x000a37c3) cntbar_detail_list_event_pane_g6

0x92ff,	// (0x000a3805) cntbar_detail_list_event_pane_t3_ParamLimits

0x92ff,	// (0x000a3805) cntbar_detail_list_event_pane_t3

0x9311,	// (0x000a3817) popup_notif_wgt_window_ParamLimits

0x9311,	// (0x000a3817) popup_notif_wgt_window

0x9321,	// (0x000a3827) popup_submenu_window_cp01_ParamLimits

0x9321,	// (0x000a3827) popup_submenu_window_cp01

0xb410,	// (0x000a5916) bg_popup_window_pane_cp10

0xed52,	// (0x000a9258) listscroll_notif_wgt_pane

0xed63,	// (0x000a9269) list_notif_wgt_window

0xed6c,	// (0x000a9272) scroll_pane_cp033

0x932f,	// (0x000a3835) list_notif_wgt_row_pane_ParamLimits

0x932f,	// (0x000a3835) list_notif_wgt_row_pane

0xed75,	// (0x000a927b) aid_size_list_notif_wgt_del

0xed82,	// (0x000a9288) list_notif_wgt_row_pane_g1

0xed8e,	// (0x000a9294) list_notif_wgt_row_pane_g2

0xed9a,	// (0x000a92a0) list_notif_wgt_row_pane_g3

0x0002,

0x0bbd,	// (0x0009b0c3) list_notif_wgt_row_pane_g

0xeda7,	// (0x000a92ad) list_notif_wgt_row_pane_t1

0xedbc,	// (0x000a92c2) list_notif_wgt_row_pane_t2

0xedce,	// (0x000a92d4) list_notif_wgt_row_pane_t3

0x0002,

0x0bc4,	// (0x0009b0ca) list_notif_wgt_row_pane_t

0xd8d3,	// (0x000a7dd9) list_recal_day_event_pane_g1

0xede0,	// (0x000a92e6) list_recal_day_event_pane_t1

0x9b4c,	// (0x000a4052) bg_button_pane_cp045

0xedef,	// (0x000a92f5) cntbar_detail_btn_pane_t1

0xc81e,	// (0x000a6d24) main_callh_pane_ParamLimits

0xc81e,	// (0x000a6d24) main_callh_pane

0x9b4c,	// (0x000a4052) main_coverflow0_pane

0x9b4c,	// (0x000a4052) main_wgtman_pane

0x82a8,	// (0x000a27ae) main_fs_bigclock_unlock_btn_pane_ParamLimits

0x82a8,	// (0x000a27ae) main_fs_bigclock_unlock_btn_pane

0x8b95,	// (0x000a309b) bg_button_pane_cp16

0x8ba5,	// (0x000a30ab) cell_tport_appsw_pane_g3

0x9341,	// (0x000a3847) cf0_flow_pane_ParamLimits

0x9341,	// (0x000a3847) cf0_flow_pane

0xedfd,	// (0x000a9303) listscroll_cf0_pane

0xee08,	// (0x000a930e) main_cf0_pane_g1

0x9350,	// (0x000a3856) main_cf0_pane_t1_ParamLimits

0x9350,	// (0x000a3856) main_cf0_pane_t1

0x9364,	// (0x000a386a) main_cf0_pane_t2_ParamLimits

0x9364,	// (0x000a386a) main_cf0_pane_t2

0x0001,

0xfba2,	// (0x000aa0a8) main_cf0_pane_t_ParamLimits

0xfba2,	// (0x000aa0a8) main_cf0_pane_t

0xee1a,	// (0x000a9320) scroll_pane_cp11

0x9378,	// (0x000a387e) cf0_flow_pane_g1

0x9380,	// (0x000a3886) cf0_flow_pane_g2

0x0001,

0xfba7,	// (0x000aa0ad) cf0_flow_pane_g

0x9388,	// (0x000a388e) cf0_flow_pane_t1

0x9b4c,	// (0x000a4052) main_call6_pane

0x9b4c,	// (0x000a4052) main_calllock_pane

0x9396,	// (0x000a389c) call6_btn_grp_pane_ParamLimits

0x9396,	// (0x000a389c) call6_btn_grp_pane

0x93a5,	// (0x000a38ab) call6_pane_g1_ParamLimits

0x93a5,	// (0x000a38ab) call6_pane_g1

0x93b4,	// (0x000a38ba) popup_call6_1st_window_ParamLimits

0x93b4,	// (0x000a38ba) popup_call6_1st_window

0x93c2,	// (0x000a38c8) popup_call6_2nd_window_ParamLimits

0x93c2,	// (0x000a38c8) popup_call6_2nd_window

0x93d0,	// (0x000a38d6) cell_call6_btn_pane_ParamLimits

0x93d0,	// (0x000a38d6) cell_call6_btn_pane

0xb410,	// (0x000a5916) bg_popup_call2_in_pane_cp03

0xee25,	// (0x000a932b) popup_call6_1st_window_g1

0xee2d,	// (0x000a9333) popup_call6_1st_window_g2

0xee35,	// (0x000a933b) popup_call6_1st_window_g3

0x0002,

0x0bda,	// (0x0009b0e0) popup_call6_1st_window_g

0xee3d,	// (0x000a9343) popup_call6_1st_window_t1

0xee4c,	// (0x000a9352) popup_call6_1st_window_t2

0xee5c,	// (0x000a9362) popup_call6_1st_window_t3

0x0002,

0x0be1,	// (0x0009b0e7) popup_call6_1st_window_t

0xb410,	// (0x000a5916) bg_popup_call2_in_pane_cp04

0xee25,	// (0x000a932b) popup_call6_2nd_window_g1

0xee2d,	// (0x000a9333) popup_call6_2nd_window_g2

0xee35,	// (0x000a933b) popup_call6_2nd_window_g3

0x0002,

0x0bda,	// (0x0009b0e0) popup_call6_2nd_window_g

0xee3d,	// (0x000a9343) popup_call6_2nd_window_t1

0x9b4c,	// (0x000a4052) bg_button_pane_cp15

0xee6c,	// (0x000a9372) cell_call6_btn_pane_g1

0xee75,	// (0x000a937b) cell_call6_btn_pane_t1

0x93df,	// (0x000a38e5) listscroll_wgtman_pane_ParamLimits

0x93df,	// (0x000a38e5) listscroll_wgtman_pane

0x93fb,	// (0x000a3901) wgtman_btn_pane_ParamLimits

0x93fb,	// (0x000a3901) wgtman_btn_pane

0xb168,	// (0x000a566e) aid_scroll_copy1

0xee84,	// (0x000a938a) list_wgtman_pane

0x9430,	// (0x000a3936) wgtman_btn_pane_g1_ParamLimits

0x9430,	// (0x000a3936) wgtman_btn_pane_g1

0x9458,	// (0x000a395e) wgtman_btn_pane_t1_ParamLimits

0x9458,	// (0x000a395e) wgtman_btn_pane_t1

0xee8e,	// (0x000a9394) wgtman_btn_pane_t2_ParamLimits

0xee8e,	// (0x000a9394) wgtman_btn_pane_t2

0x0001,

0xfbac,	// (0x000aa0b2) wgtman_btn_pane_t_ParamLimits

0xfbac,	// (0x000aa0b2) wgtman_btn_pane_t

0x948f,	// (0x000a3995) listrow_wgtman_pane_ParamLimits

0x948f,	// (0x000a3995) listrow_wgtman_pane

0x94ab,	// (0x000a39b1) listrow_wgtman_pane_g1

0x94b8,	// (0x000a39be) listrow_wgtman_pane_g2

0x0001,

0xfbb1,	// (0x000aa0b7) listrow_wgtman_pane_g

0x94d6,	// (0x000a39dc) listrow_wgtman_pane_t1

0x94ee,	// (0x000a39f4) listrow_wgtman_pane_t2

0x0001,

0xfbb6,	// (0x000aa0bc) listrow_wgtman_pane_t

0x9514,	// (0x000a3a1a) wait_bar_pane_cp09

0xeea5,	// (0x000a93ab) main_calllock_btn_pane

0xeeaf,	// (0x000a93b5) main_calllock_pane_g1

0x9b4c,	// (0x000a4052) bg_button_pane_cp17

0xeeba,	// (0x000a93c0) main_calllock_btn_pane_g1

0xeec3,	// (0x000a93c9) main_calllock_btn_pane_t1

0x9b4c,	// (0x000a4052) main_dialer3_pane

0x9b4c,	// (0x000a4052) main_fmrd2_pane

0xcc28,	// (0x000a712e) main_fs_bigclock_unlock_btn_pane_g1

0xeeda,	// (0x000a93e0) main_fs_bigclock_unlock_btn_pane_t1

0x9526,	// (0x000a3a2c) area_fmrd2_info_pane_ParamLimits

0x9526,	// (0x000a3a2c) area_fmrd2_info_pane

0x9534,	// (0x000a3a3a) area_fmrd2_visual_pane_ParamLimits

0x9534,	// (0x000a3a3a) area_fmrd2_visual_pane

0x9542,	// (0x000a3a48) fmrd2_indi_pane_ParamLimits

0x9542,	// (0x000a3a48) fmrd2_indi_pane

0x954f,	// (0x000a3a55) area_fmrd2_visual_pane_g1

0x9557,	// (0x000a3a5d) area_fmrd2_visual_pane_t1

0x9567,	// (0x000a3a6d) area_fmrd2_visual_pane_t2

0x9577,	// (0x000a3a7d) area_fmrd2_visual_pane_t3

0x0002,

0xfbbb,	// (0x000aa0c1) area_fmrd2_visual_pane_t

0x9587,	// (0x000a3a8d) area_fmrd2_info_pane_g1

0x958f,	// (0x000a3a95) area_fmrd2_info_pane_t1

0x959f,	// (0x000a3aa5) area_fmrd2_info_pane_t2

0x95af,	// (0x000a3ab5) area_fmrd2_info_pane_t3

0x95bf,	// (0x000a3ac5) area_fmrd2_info_pane_t4

0x0003,

0xfbc2,	// (0x000aa0c8) area_fmrd2_info_pane_t

0x95cd,	// (0x000a3ad3) fmrd2_indi_pane_t1

0x95dd,	// (0x000a3ae3) fmrd2_indi_pane_t2

0x95ed,	// (0x000a3af3) fmrd2_indi_pane_t3

0x0002,

0xfbcb,	// (0x000aa0d1) fmrd2_indi_pane_t

0xe43d,	// (0x000a8943) list_single_fs_bigclock_indicator_pane_g5_ParamLimits

0xe43d,	// (0x000a8943) list_single_fs_bigclock_indicator_pane_g5

0xe4e4,	// (0x000a89ea) list_single_fs_bigclock_indicator_pane_t5_ParamLimits

0xe4e4,	// (0x000a89ea) list_single_fs_bigclock_indicator_pane_t5

0x8dab,	// (0x000a32b1) aid_cell_bcale_month_pane_ParamLimits

0x8dab,	// (0x000a32b1) aid_cell_bcale_month_pane

0x8dc9,	// (0x000a32cf) bcale_month_pane_ParamLimits

0x8dc9,	// (0x000a32cf) bcale_month_pane

0x8de7,	// (0x000a32ed) bcale_preview_pane_ParamLimits

0x8de7,	// (0x000a32ed) bcale_preview_pane

0xec85,	// (0x000a918b) list_single_fs_bigclock_pane_t1_ParamLimits

0xeca4,	// (0x000a91aa) list_single_fs_bigclock_pane_t2_ParamLimits

0xeca4,	// (0x000a91aa) list_single_fs_bigclock_pane_t2

0x0001,

0x0b8e,	// (0x0009b094) list_single_fs_bigclock_pane_t_ParamLimits

0x0b8e,	// (0x0009b094) list_single_fs_bigclock_pane_t

0xeed2,	// (0x000a93d8) main_fs_bigclock_unlock_btn_pane_g2

0x0001,

0x0bf7,	// (0x0009b0fd) main_fs_bigclock_unlock_btn_pane_g

0x95fb,	// (0x000a3b01) aid_dia3_key_size_ParamLimits

0x95fb,	// (0x000a3b01) aid_dia3_key_size

0x9607,	// (0x000a3b0d) aid_dia3_listrow_size_ParamLimits

0x9607,	// (0x000a3b0d) aid_dia3_listrow_size

0x9617,	// (0x000a3b1d) dia3_keypad_fun_pane_ParamLimits

0x9617,	// (0x000a3b1d) dia3_keypad_fun_pane

0x9629,	// (0x000a3b2f) dia3_keypad_num_pane_ParamLimits

0x9629,	// (0x000a3b2f) dia3_keypad_num_pane

0x963b,	// (0x000a3b41) dia3_listscroll_pane_ParamLimits

0x963b,	// (0x000a3b41) dia3_listscroll_pane

0x9649,	// (0x000a3b4f) dia3_numentry_pane_ParamLimits

0x9649,	// (0x000a3b4f) dia3_numentry_pane

0xeee8,	// (0x000a93ee) dia3_list_pane

0xeef3,	// (0x000a93f9) scroll_pane_cp12

0x9b4c,	// (0x000a4052) bg_dia3_numentry_pane

0x9657,	// (0x000a3b5d) dia3_numentry_pane_t1

0x9666,	// (0x000a3b6c) cell_dia3_key_num_pane

0x966e,	// (0x000a3b74) cell_dia3_key0_fun_pane_ParamLimits

0x966e,	// (0x000a3b74) cell_dia3_key0_fun_pane

0x967b,	// (0x000a3b81) cell_dia3_key1_fun_pane_ParamLimits

0x967b,	// (0x000a3b81) cell_dia3_key1_fun_pane

0x9688,	// (0x000a3b8e) dia3_listrow_pane

0xe14c,	// (0x000a8652) bg_dia3_numentry_pane_g1

0x9b4c,	// (0x000a4052) bg_button_pane_cp21

0xeefe,	// (0x000a9404) cell_dia3_key_num_pane_t1

0xef0c,	// (0x000a9412) cell_dia3_key_num_pane_t2

0xef1b,	// (0x000a9421) cell_dia3_key_num_pane_t3

0xef2a,	// (0x000a9430) cell_dia3_key_num_pane_t4

0x0003,

0x0c13,	// (0x0009b119) cell_dia3_key_num_pane_t

0x9b4c,	// (0x000a4052) bg_button_pane_cp19

0x9695,	// (0x000a3b9b) cell_dia3_key0_fun_pane_g1

0x9b4c,	// (0x000a4052) bg_button_pane_cp20

0x969d,	// (0x000a3ba3) cell_dia3_key1_fun_pane_g1

0x96a5,	// (0x000a3bab) area_left_week_number_pane

0x96b8,	// (0x000a3bbe) area_top_day_name_pane

0x96c6,	// (0x000a3bcc) frame_month_view_pane

0xef39,	// (0x000a943f) grid_month_view_pane

0x96db,	// (0x000a3be1) cell_top_day_name_pane_ParamLimits

0x96db,	// (0x000a3be1) cell_top_day_name_pane

0x96f5,	// (0x000a3bfb) cell_area_left_week_number_pane_ParamLimits

0x96f5,	// (0x000a3bfb) cell_area_left_week_number_pane

0x9718,	// (0x000a3c1e) cell_month_view_pane_ParamLimits

0x9718,	// (0x000a3c1e) cell_month_view_pane

0xef47,	// (0x000a944d) frm_month_g1

0x9744,	// (0x000a3c4a) frm_month_g2

0x9755,	// (0x000a3c5b) frm_month_g3

0x9766,	// (0x000a3c6c) frm_month_g4

0x9777,	// (0x000a3c7d) frm_month_g5

0x978a,	// (0x000a3c90) frm_month_g6

0x979d,	// (0x000a3ca3) frm_month_g7

0xef54,	// (0x000a945a) frm_month_g8

0x97b0,	// (0x000a3cb6) frm_month_g9

0x97bd,	// (0x000a3cc3) frm_month_g10

0x97ca,	// (0x000a3cd0) frm_month_g11

0x97d7,	// (0x000a3cdd) frm_month_g12

0x97e4,	// (0x000a3cea) frm_month_g13

0x97f1,	// (0x000a3cf7) frm_month_g14

0x9800,	// (0x000a3d06) frm_month_g15

0x980f,	// (0x000a3d15) frm_month_g16

0x000f,

0xfbd2,	// (0x000aa0d8) frm_month_g

0xef61,	// (0x000a9467) cell_top_day_name_pane_t1

0x981e,	// (0x000a3d24) cell_area_left_week_number_pane_g1

0x982d,	// (0x000a3d33) cell_area_left_week_number_pane_t1

0xce88,	// (0x000a738e) cell_month_view_pane_g1

0x9843,	// (0x000a3d49) cell_month_view_pane_t1

0x9b4c,	// (0x000a4052) main_fps_pane

0xe6d4,	// (0x000a8bda) cmail_ddmenu_btn02_pane_cp1_ParamLimits

0xe6d4,	// (0x000a8bda) cmail_ddmenu_btn02_pane_cp1

0xe6f0,	// (0x000a8bf6) cmail_ddmenu_btn02_pane_cp2_ParamLimits

0xe6f0,	// (0x000a8bf6) cmail_ddmenu_btn02_pane_cp2

0x902f,	// (0x000a3535) cmail_ddmenu_btn02_pane_g2_ParamLimits

0x902f,	// (0x000a3535) cmail_ddmenu_btn02_pane_g2

0x0001,

0xfb55,	// (0x000aa05b) cmail_ddmenu_btn02_pane_g_ParamLimits

0xfb55,	// (0x000aa05b) cmail_ddmenu_btn02_pane_g

0x904d,	// (0x000a3553) cmail_ddmenu_btn02_pane_t2_ParamLimits

0x904d,	// (0x000a3553) cmail_ddmenu_btn02_pane_t2

0x0001,

0xfb5a,	// (0x000aa060) cmail_ddmenu_btn02_pane_t_ParamLimits

0xfb5a,	// (0x000aa060) cmail_ddmenu_btn02_pane_t

0x9859,	// (0x000a3d5f) fps_text_pane_ParamLimits

0x9859,	// (0x000a3d5f) fps_text_pane

0x9866,	// (0x000a3d6c) main_fps_pane_g1_ParamLimits

0x9866,	// (0x000a3d6c) main_fps_pane_g1

0x9874,	// (0x000a3d7a) wait_bar_pane_cp010_ParamLimits

0x9874,	// (0x000a3d7a) wait_bar_pane_cp010

0x9880,	// (0x000a3d86) fps_text_pane_t1_ParamLimits

0x9880,	// (0x000a3d86) fps_text_pane_t1

0x6361,	// (0x000a0867) cam4_image_uncrop_pane_g1

0x636a,	// (0x000a0870) cam4_image_uncrop_pane_g2

0x6373,	// (0x000a0879) cam4_image_uncrop_pane_g3

0x637c,	// (0x000a0882) cam4_image_uncrop_pane_g4

0x0003,

0xf765,	// (0x000a9c6b) cam4_image_uncrop_pane_g

0x9688,	// (0x000a3b8e) dia3_listrow_pane_ParamLimits

0x9b4c,	// (0x000a4052) main_phob2_pane

0x8b77,	// (0x000a307d) cell_tport_appsw_pane_cp02_ParamLimits

0x8b77,	// (0x000a307d) cell_tport_appsw_pane_cp02

0x8b86,	// (0x000a308c) cell_tport_appsw_pane_cp03_ParamLimits

0x8b86,	// (0x000a308c) cell_tport_appsw_pane_cp03

0x9b4c,	// (0x000a4052) phob2_contact_card_pane

0x9b4c,	// (0x000a4052) phob2_listscroll_pane

0xef74,	// (0x000a947a) phob2_list_pane

0xef7c,	// (0x000a9482) scroll_pane_cp034

0x9899,	// (0x000a3d9f) phob2_cc_data_pane_ParamLimits

0x9899,	// (0x000a3d9f) phob2_cc_data_pane

0x98b3,	// (0x000a3db9) phob2_cc_listscroll_pane_ParamLimits

0x98b3,	// (0x000a3db9) phob2_cc_listscroll_pane

0x98cd,	// (0x000a3dd3) list_double_large_graphic_phob2_pane_ParamLimits

0x98cd,	// (0x000a3dd3) list_double_large_graphic_phob2_pane

0x98ef,	// (0x000a3df5) list_double_large_graphic_phob2_pane_g1_ParamLimits

0x98ef,	// (0x000a3df5) list_double_large_graphic_phob2_pane_g1

0x9905,	// (0x000a3e0b) list_double_large_graphic_phob2_pane_g2_ParamLimits

0x9905,	// (0x000a3e0b) list_double_large_graphic_phob2_pane_g2

0x0001,

0xfbf3,	// (0x000aa0f9) list_double_large_graphic_phob2_pane_g_ParamLimits

0xfbf3,	// (0x000aa0f9) list_double_large_graphic_phob2_pane_g

0x9911,	// (0x000a3e17) list_double_large_graphic_phob2_pane_t1_ParamLimits

0x9911,	// (0x000a3e17) list_double_large_graphic_phob2_pane_t1

0x9927,	// (0x000a3e2d) list_double_large_graphic_phob2_pane_t2_ParamLimits

0x9927,	// (0x000a3e2d) list_double_large_graphic_phob2_pane_t2

0x0001,

0xfbf8,	// (0x000aa0fe) list_double_large_graphic_phob2_pane_t_ParamLimits

0xfbf8,	// (0x000aa0fe) list_double_large_graphic_phob2_pane_t

0x9b4c,	// (0x000a4052) list_highlight_pane_cp024

0x993c,	// (0x000a3e42) phob2_cc_button_pane

0x9944,	// (0x000a3e4a) phob2_cc_data_pane_g1_ParamLimits

0x9944,	// (0x000a3e4a) phob2_cc_data_pane_g1

0x9950,	// (0x000a3e56) phob2_cc_data_pane_g2_ParamLimits

0x9950,	// (0x000a3e56) phob2_cc_data_pane_g2

0x0001,

0xfbfd,	// (0x000aa103) phob2_cc_data_pane_g_ParamLimits

0xfbfd,	// (0x000aa103) phob2_cc_data_pane_g

0x995c,	// (0x000a3e62) phob2_cc_data_pane_t1_ParamLimits

0x995c,	// (0x000a3e62) phob2_cc_data_pane_t1

0x996e,	// (0x000a3e74) phob2_cc_data_pane_t2_ParamLimits

0x996e,	// (0x000a3e74) phob2_cc_data_pane_t2

0x9980,	// (0x000a3e86) phob2_cc_data_pane_t3_ParamLimits

0x9980,	// (0x000a3e86) phob2_cc_data_pane_t3

0x0002,

0xfc02,	// (0x000aa108) phob2_cc_data_pane_t_ParamLimits

0xfc02,	// (0x000aa108) phob2_cc_data_pane_t

0xef84,	// (0x000a948a) phob2_cc_list_pane_ParamLimits

0xef84,	// (0x000a948a) phob2_cc_list_pane

0xdab4,	// (0x000a7fba) scroll_pane_cp035_ParamLimits

0xdab4,	// (0x000a7fba) scroll_pane_cp035

0xa49e,	// (0x000a49a4) bg_button_pane_cp033

0xef90,	// (0x000a9496) phob2_cc_button_pane_g1

0xef9c,	// (0x000a94a2) phob2_cc_button_pane_t1

0xefb1,	// (0x000a94b7) phob2_cc_button_pane_t2

0x0001,

0x0c53,	// (0x0009b159) phob2_cc_button_pane_t

0x9992,	// (0x000a3e98) list_double_large_graphic_phob2_cc_pane_ParamLimits

0x9992,	// (0x000a3e98) list_double_large_graphic_phob2_cc_pane

0x99c1,	// (0x000a3ec7) list_double_large_graphic_phob2_cc_pane_g1_ParamLimits

0x99c1,	// (0x000a3ec7) list_double_large_graphic_phob2_cc_pane_g1

0x99d2,	// (0x000a3ed8) list_double_large_graphic_phob2_cc_pane_g2_ParamLimits

0x99d2,	// (0x000a3ed8) list_double_large_graphic_phob2_cc_pane_g2

0x99e1,	// (0x000a3ee7) list_double_large_graphic_phob2_cc_pane_g3_ParamLimits

0x99e1,	// (0x000a3ee7) list_double_large_graphic_phob2_cc_pane_g3

0x99f0,	// (0x000a3ef6) list_double_large_graphic_phob2_cc_pane_g4_ParamLimits

0x99f0,	// (0x000a3ef6) list_double_large_graphic_phob2_cc_pane_g4

0x9a01,	// (0x000a3f07) list_double_large_graphic_phob2_cc_pane_g5_ParamLimits

0x9a01,	// (0x000a3f07) list_double_large_graphic_phob2_cc_pane_g5

0x0004,

0xfc09,	// (0x000aa10f) list_double_large_graphic_phob2_cc_pane_g_ParamLimits

0xfc09,	// (0x000aa10f) list_double_large_graphic_phob2_cc_pane_g

0x9a10,	// (0x000a3f16) list_double_large_graphic_phob2_cc_pane_t1_ParamLimits

0x9a10,	// (0x000a3f16) list_double_large_graphic_phob2_cc_pane_t1

0x9a39,	// (0x000a3f3f) list_double_large_graphic_phob2_cc_pane_t2_ParamLimits

0x9a39,	// (0x000a3f3f) list_double_large_graphic_phob2_cc_pane_t2

0x0001,

0xfc14,	// (0x000aa11a) list_double_large_graphic_phob2_cc_pane_t_ParamLimits

0xfc14,	// (0x000aa11a) list_double_large_graphic_phob2_cc_pane_t

0xefc3,	// (0x000a94c9) list_highlight_pane_cp025_ParamLimits

0xefc3,	// (0x000a94c9) list_highlight_pane_cp025

0xa49e,	// (0x000a49a4) bg_button_pane_cp033_ParamLimits

0xef90,	// (0x000a9496) phob2_cc_button_pane_g1_ParamLimits

0xef9c,	// (0x000a94a2) phob2_cc_button_pane_t1_ParamLimits

0xefb1,	// (0x000a94b7) phob2_cc_button_pane_t2_ParamLimits

0x0c53,	// (0x0009b159) phob2_cc_button_pane_t_ParamLimits

0x1025,	// (0x0009b52b) popup_wgtman_window

0xd79d,	// (0x000a7ca3) scroll_pane_cp038

0x9418,	// (0x000a391e) wgtman_btn_pane_cp_01_ParamLimits

0x9418,	// (0x000a391e) wgtman_btn_pane_cp_01

0xefd1,	// (0x000a94d7) wgtman_content_pane

0xefda,	// (0x000a94e0) wgtman_heading_pane

0x9b4c,	// (0x000a4052) bg_heading_pane_cp02

0xefe3,	// (0x000a94e9) wgtman_heading_pane_g1

0xefeb,	// (0x000a94f1) wgtman_heading_pane_t1

0xeff9,	// (0x000a94ff) scroll_pane_cp036

0xf001,	// (0x000a9507) wgtman_list_pane

0xf009,	// (0x000a950f) wgtman_list_pane_t1_ParamLimits

0xf009,	// (0x000a950f) wgtman_list_pane_t1

0x62c0,	// (0x000a07c6) cam4_grid_pane

0x7073,	// (0x000a1579) bg_button_pane_cp015_ParamLimits

0x7085,	// (0x000a158b) bg_button_pane_cp016_ParamLimits

0x7098,	// (0x000a159e) bg_button_pane_cp017_ParamLimits

0x70ee,	// (0x000a15f4) popup_vitu2_query_window_g3_ParamLimits

0x70ee,	// (0x000a15f4) popup_vitu2_query_window_g3

0x71a9,	// (0x000a16af) popup_vitu2_query_window_t6_ParamLimits

0x71a9,	// (0x000a16af) popup_vitu2_query_window_t6

0x71d4,	// (0x000a16da) popup_vitu2_query_window_t7_ParamLimits

0x71d4,	// (0x000a16da) popup_vitu2_query_window_t7

0xd667,	// (0x000a7b6d) cam4_grid_pane_g1

0xd670,	// (0x000a7b76) cam4_grid_pane_g2

0xf025,	// (0x000a952b) cam4_grid_pane_g3

0xf02e,	// (0x000a9534) cam4_grid_pane_g4

0x0003,

0xfc19,	// (0x000aa11f) cam4_grid_pane_g

0x1f92,	// (0x0009c498) aid_placing_vt_slider_lsc_ParamLimits

0x22d2,	// (0x0009c7d8) vidtel_button_pane_ParamLimits

0x22d2,	// (0x0009c7d8) vidtel_button_pane

0xf039,	// (0x000a953f) bg_button_pane_cp034

0x9a62,	// (0x000a3f68) vidtel_button_pane_g1

0xf043,	// (0x000a9549) vidtel_button_pane_t1

0xd8b1,	// (0x000a7db7) aid_size_vtel_slider_touch

0xdab4,	// (0x000a7fba) scroll_pane_cp039

0xe18a,	// (0x000a8690) ncim_query_button_pane_cp01_ParamLimits

0xe1a9,	// (0x000a86af) ncimui_query_pane_g1_ParamLimits

0xa49e,	// (0x000a49a4) input_focus_pane_cp012_ParamLimits

0xe1ce,	// (0x000a86d4) ncim_query_entry_pane_t1_ParamLimits

0xdab4,	// (0x000a7fba) scroll_pane_cp039_ParamLimits

0xb24e,	// (0x000a5754) navi_pane_bcale_mc_g1

0xb256,	// (0x000a575c) navi_pane_bcale_mc_t1

0xe739,	// (0x000a8c3f) main_sp_fs_email_pane_g1

0xe745,	// (0x000a8c4b) main_sp_fs_email_pane_g2

0x0001,

0x09f9,	// (0x0009aeff) main_sp_fs_email_pane_g

0xe996,	// (0x000a8e9c) list_single_cale_mrui_row_pane_g3_ParamLimits

0xe996,	// (0x000a8e9c) list_single_cale_mrui_row_pane_g3

0x9075,	// (0x000a357b) list_single_recal_day_pane_g5_event_pane

0xa5a5,	// (0x000a4aab) list_single_recal_day_pane_g7

0xf05f,	// (0x000a9565) list_recal_day_event_pane_cp01

0xf068,	// (0x000a956e) list_recal_vselct_arw_lo_pane_cp01

0xf070,	// (0x000a9576) list_recal_vselct_arw_up_pane_cp01

0xf078,	// (0x000a957e) list_recal_vselct_pane_cp01

0xd8d3,	// (0x000a7dd9) list_recal_day_event_pane_cp01_g1

0xa5f8,	// (0x000a4afe) list_recal_day_event_pane_cp01_t1

0xa5ad,	// (0x000a4ab3) list_single_recal_day_pane_t1_ParamLimits

0xa5bf,	// (0x000a4ac5) list_single_recal_day_pane_t2_ParamLimits

0xfb6a,	// (0x000aa070) list_single_recal_day_pane_t_ParamLimits

0xa690,	// (0x000a4b96) bg_notes_pane_ParamLimits

0xa752,	// (0x000a4c58) list_notes_pane_ParamLimits

0x137a,	// (0x0009b880) scroll_pane_cp06_ParamLimits

0xa774,	// (0x000a4c7a) main_notes_pane_ParamLimits

0x9b4c,	// (0x000a4052) main_welc_pane

0x9a6a,	// (0x000a3f70) main_welc_body_pane_ParamLimits

0x9a6a,	// (0x000a3f70) main_welc_body_pane

0x9a83,	// (0x000a3f89) main_welc_opti_pane_ParamLimits

0x9a83,	// (0x000a3f89) main_welc_opti_pane

0x9ab8,	// (0x000a3fbe) main_welc_pane_t1_ParamLimits

0x9ab8,	// (0x000a3fbe) main_welc_pane_t1

0x9ad6,	// (0x000a3fdc) main_welc_body_row_pane_ParamLimits

0x9ad6,	// (0x000a3fdc) main_welc_body_row_pane

0xf051,	// (0x000a9557) main_welc_opti_row_pane_ParamLimits

0xf051,	// (0x000a9557) main_welc_opti_row_pane

0xf082,	// (0x000a9588) main_welc_opti_row_pane_g1

0xf08a,	// (0x000a9590) main_welc_opti_row_pane_t1

0xf09a,	// (0x000a95a0) main_welc_body_row_pane_t1

0xed5b,	// (0x000a9261) popup_notif_wgt_heading_pane

0xed75,	// (0x000a927b) aid_size_list_notif_wgt_del_ParamLimits

0xed82,	// (0x000a9288) list_notif_wgt_row_pane_g1_ParamLimits

0xed8e,	// (0x000a9294) list_notif_wgt_row_pane_g2_ParamLimits

0xed9a,	// (0x000a92a0) list_notif_wgt_row_pane_g3_ParamLimits

0x0bbd,	// (0x0009b0c3) list_notif_wgt_row_pane_g_ParamLimits

0xeda7,	// (0x000a92ad) list_notif_wgt_row_pane_t1_ParamLimits

0xedbc,	// (0x000a92c2) list_notif_wgt_row_pane_t2_ParamLimits

0xedce,	// (0x000a92d4) list_notif_wgt_row_pane_t3_ParamLimits

0x0bc4,	// (0x0009b0ca) list_notif_wgt_row_pane_t_ParamLimits

0x94ab,	// (0x000a39b1) listrow_wgtman_pane_g1_ParamLimits

0x94b8,	// (0x000a39be) listrow_wgtman_pane_g2_ParamLimits

0xfbb1,	// (0x000aa0b7) listrow_wgtman_pane_g_ParamLimits

0x94d6,	// (0x000a39dc) listrow_wgtman_pane_t1_ParamLimits

0x94ee,	// (0x000a39f4) listrow_wgtman_pane_t2_ParamLimits

0xfbb6,	// (0x000aa0bc) listrow_wgtman_pane_t_ParamLimits

0x9514,	// (0x000a3a1a) wait_bar_pane_cp09_ParamLimits

0x9b4c,	// (0x000a4052) bg_popup_heading_pane_cp02

0xf0a9,	// (0x000a95af) popup_notif_wgt_heading_pane_g1

0xf0b1,	// (0x000a95b7) popup_notif_wgt_heading_pane_t1

0x9b4c,	// (0x000a4052) main_vids_pane

0x9b4c,	// (0x000a4052) vids_listscroll_pane

0x9b02,	// (0x000a4008) scroll_pane_cp040

0x9b4c,	// (0x000a4052) vids_list_pane

0x9b0d,	// (0x000a4013) vids_list_double_pane_ParamLimits

0x9b0d,	// (0x000a4013) vids_list_double_pane

0x9b25,	// (0x000a402b) vids_list_double_pane_g1

0x9b2e,	// (0x000a4034) vids_list_double_pane_t1

0x9b3e,	// (0x000a4044) vids_list_double_pane_t2

0x0001,

0xfc27,	// (0x000aa12d) vids_list_double_pane_t

0x43d1,	// (0x0009e8d7) main_ncimui_pane_ParamLimits

0x7e68,	// (0x000a236e) main_ncimui_pane_g1_ParamLimits

0x7e74,	// (0x000a237a) main_ncimui_pane_g2_ParamLimits

0x7e74,	// (0x000a237a) main_ncimui_pane_g2

0x0001,

0xf9f6,	// (0x000a9efc) main_ncimui_pane_g_ParamLimits

0xf9f6,	// (0x000a9efc) main_ncimui_pane_g

0x9a9e,	// (0x000a3fa4) main_welc_pane_g1_ParamLimits

0x9a9e,	// (0x000a3fa4) main_welc_pane_g1

0x9aaa,	// (0x000a3fb0) main_welc_pane_g2_ParamLimits

0x9aaa,	// (0x000a3fb0) main_welc_pane_g2

0x0001,

0xfc22,	// (0x000aa128) main_welc_pane_g_ParamLimits

0xfc22,	// (0x000aa128) main_welc_pane_g

0xa690,	// (0x000a4b96) listscroll_mce_pane_ParamLimits

0xb408,	// (0x000a590e) wait_bar_pane_cp10

0xc812,	// (0x000a6d18) main_cale_day_pane_ParamLimits

0xc812,	// (0x000a6d18) main_cale_week_pane_ParamLimits

0xa690,	// (0x000a4b96) main_messa_pane_ParamLimits

0x56e6,	// (0x0009fbec) main_clock2_btn_pane_ParamLimits

0x56e6,	// (0x0009fbec) main_clock2_btn_pane

0xd010,	// (0x000a7516) main_clock2_btn_pane_cp01_ParamLimits

0xd010,	// (0x000a7516) main_clock2_btn_pane_cp01

0xe967,	// (0x000a8e6d) list_cale_mrui_pane_ParamLimits

0xee12,	// (0x000a9318) main_cf0_pane_g2

0x0001,

0x0bcb,	// (0x0009b0d1) main_cf0_pane_g

0x96a5,	// (0x000a3bab) area_left_week_number_pane_ParamLimits

0x96b8,	// (0x000a3bbe) area_top_day_name_pane_ParamLimits

0x96c6,	// (0x000a3bcc) frame_month_view_pane_ParamLimits

0xef39,	// (0x000a943f) grid_month_view_pane_ParamLimits

0xef47,	// (0x000a944d) frm_month_g1_ParamLimits

0x9744,	// (0x000a3c4a) frm_month_g2_ParamLimits

0x9755,	// (0x000a3c5b) frm_month_g3_ParamLimits

0x9766,	// (0x000a3c6c) frm_month_g4_ParamLimits

0x9777,	// (0x000a3c7d) frm_month_g5_ParamLimits

0x978a,	// (0x000a3c90) frm_month_g6_ParamLimits

0x979d,	// (0x000a3ca3) frm_month_g7_ParamLimits

0xef54,	// (0x000a945a) frm_month_g8_ParamLimits

0x97b0,	// (0x000a3cb6) frm_month_g9_ParamLimits

0x97bd,	// (0x000a3cc3) frm_month_g10_ParamLimits

0x97ca,	// (0x000a3cd0) frm_month_g11_ParamLimits

0x97d7,	// (0x000a3cdd) frm_month_g12_ParamLimits

0x97e4,	// (0x000a3cea) frm_month_g13_ParamLimits

0x97f1,	// (0x000a3cf7) frm_month_g14_ParamLimits

0x9800,	// (0x000a3d06) frm_month_g15_ParamLimits

0x980f,	// (0x000a3d15) frm_month_g16_ParamLimits

0xfbd2,	// (0x000aa0d8) frm_month_g_ParamLimits

0xef61,	// (0x000a9467) cell_top_day_name_pane_t1_ParamLimits

0x981e,	// (0x000a3d24) cell_area_left_week_number_pane_g1_ParamLimits

0x982d,	// (0x000a3d33) cell_area_left_week_number_pane_t1_ParamLimits

0xce88,	// (0x000a738e) cell_month_view_pane_g1_ParamLimits

0x9843,	// (0x000a3d49) cell_month_view_pane_t1_ParamLimits

0xa688,	// (0x000a4b8e) main_clock2_btn_pane_g1

0xf0bf,	// (0x000a95c5) main_clock2_btn_pane_t1

0xa49e,	// (0x000a49a4) listscroll_cmail_pane_ParamLimits

0xe739,	// (0x000a8c3f) main_sp_fs_email_pane_g1_ParamLimits

0xe745,	// (0x000a8c4b) main_sp_fs_email_pane_g2_ParamLimits

0x09f9,	// (0x0009aeff) main_sp_fs_email_pane_g_ParamLimits

0xeb05,	// (0x000a900b) list_recal_day_pane_ParamLimits

0xeb16,	// (0x000a901c) mian_recal_day_pane_t1

0x884b,	// (0x000a2d51) list_single_dyc_row_text_pane_t4_ParamLimits

0x884b,	// (0x000a2d51) list_single_dyc_row_text_pane_t4

0x8882,	// (0x000a2d88) list_single_dyc_row_text_pane_t5_ParamLimits

0x8882,	// (0x000a2d88) list_single_dyc_row_text_pane_t5

0xa190,	// (0x000a4696) list_single_dyc_row_text_pane_t6_ParamLimits

0xa190,	// (0x000a4696) list_single_dyc_row_text_pane_t6

0xad3e,	// (0x000a5244) aid_mgn_list_cale_time_pane

0x43d1,	// (0x0009e8d7) main_gallery2_pane_ParamLimits
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

} // end of namespace AknLayoutScalable_Abrw_pnp4_apps_nhd4_prt_tch_Large
