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

#include "aknlayoutscalable_abrw_pnp4_apps_nhd4_prt_tch_small.h"
#include "AknLayout2ScalableDecode.h"
namespace AknLayoutScalable_Apps { extern const TUint8 KByteCodedData_AknLayoutScalable_Elaf_pnp4_apps_nhd4_prt_tch[]; }

namespace AknLayoutScalable_Abrw_pnp4_apps_nhd4_prt_tch_Small
{

extern const TUint16 KDataLookup[AknLayoutScalable_Apps::E_TApiId_TableSize];
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Apps::KByteCodedData_AknLayoutScalable_Elaf_pnp4_apps_nhd4_prt_tch + 0x0004763f };

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
0x45d4,	// (0x0004bc13) Screen

0x45e0,	// (0x0004bc1f) application_window

0x4646,	// (0x0004bc85) area_bottom_pane_ParamLimits

0x4646,	// (0x0004bc85) area_bottom_pane

0x469e,	// (0x0004bcdd) area_top_pane_ParamLimits

0x469e,	// (0x0004bcdd) area_top_pane

0x4702,	// (0x0004bd41) call_video_uplink_pane_ParamLimits

0x4702,	// (0x0004bd41) call_video_uplink_pane

0x4741,	// (0x0004bd80) main_pane_ParamLimits

0x4741,	// (0x0004bd80) main_pane

0xed7d,	// (0x000563bc) context_pane

0x7b86,	// (0x0004f1c5) navi_pane

0x7bac,	// (0x0004f1eb) popup_cale_events_window_ParamLimits

0x7bac,	// (0x0004f1eb) popup_cale_events_window

0xed90,	// (0x000563cf) popup_mup_playback_window

0x7bc4,	// (0x0004f203) signal_pane

0xce27,	// (0x00054466) main_browser_pane

0xcfd9,	// (0x00054618) main_burst_pane

0x79fc,	// (0x0004f03b) main_calc_pane

0xed63,	// (0x000563a2) main_cale_day_pane

0x52cd,	// (0x0004c90c) main_cale_month_pane

0xed63,	// (0x000563a2) main_cale_week_pane

0xcfd9,	// (0x00054618) main_call_pane

0x4d94,	// (0x0004c3d3) main_call_poc_pane

0xcfd9,	// (0x00054618) main_camera_pane

0xcfd9,	// (0x00054618) main_chi_dic_pane

0xd7c4,	// (0x00054e03) main_clock_pane

0x4d94,	// (0x0004c3d3) main_fmradio_pane

0xcfd9,	// (0x00054618) main_graph_messa_pane

0x4d94,	// (0x0004c3d3) main_help_pane

0xce27,	// (0x00054466) main_im_pane

0xcd3a,	// (0x00054379) main_image_pane_ParamLimits

0xcd3a,	// (0x00054379) main_image_pane

0x4d94,	// (0x0004c3d3) main_location2_pane

0xcfd9,	// (0x00054618) main_location_pane

0xcd3a,	// (0x00054379) main_messa_pane

0x4d94,	// (0x0004c3d3) main_mp2_pane

0xcfd9,	// (0x00054618) main_mp_pane

0x4d94,	// (0x0004c3d3) main_msg_pane

0x4d94,	// (0x0004c3d3) main_mup_eq_pane

0x4d94,	// (0x0004c3d3) main_mup_pane

0xce27,	// (0x00054466) main_notes_pane

0x4d94,	// (0x0004c3d3) main_pec_pane

0x4d94,	// (0x0004c3d3) main_phob_pane

0x4d94,	// (0x0004c3d3) main_pinb_pane

0x4d94,	// (0x0004c3d3) main_postcard_pane

0x4d94,	// (0x0004c3d3) main_qdial_pane

0xcfd9,	// (0x00054618) main_skin_pane

0x4d94,	// (0x0004c3d3) main_smil2_pane

0xcfd9,	// (0x00054618) main_smil_pane

0xcfd9,	// (0x00054618) main_video_pane

0xcfd9,	// (0x00054618) main_video_tele_pane

0xcd3a,	// (0x00054379) main_viewer_pane_ParamLimits

0xcd3a,	// (0x00054379) main_viewer_pane

0xcfd9,	// (0x00054618) main_vorec_pane

0x7a54,	// (0x0004f093) popup_blid_sat_info_window_ParamLimits

0x7a54,	// (0x0004f093) popup_blid_sat_info_window

0x7a74,	// (0x0004f0b3) popup_dyc_status_message_window_ParamLimits

0x7a74,	// (0x0004f0b3) popup_dyc_status_message_window

0x7a82,	// (0x0004f0c1) popup_grid_large_graphic_window_ParamLimits

0x7a82,	// (0x0004f0c1) popup_grid_large_graphic_window

0x7b11,	// (0x0004f150) popup_loc_request_window_ParamLimits

0x7b11,	// (0x0004f150) popup_loc_request_window

0x7b5e,	// (0x0004f19d) popup_wml_address_window_ParamLimits

0x7b5e,	// (0x0004f19d) popup_wml_address_window

0x78d4,	// (0x0004ef13) call_muted_g1

0x7549,	// (0x0004eb88) popup_call_audio_conf_window_ParamLimits

0x7549,	// (0x0004eb88) popup_call_audio_conf_window

0x78e4,	// (0x0004ef23) popup_call_audio_first_window_ParamLimits

0x78e4,	// (0x0004ef23) popup_call_audio_first_window

0x7924,	// (0x0004ef63) popup_call_audio_in_window_ParamLimits

0x7924,	// (0x0004ef63) popup_call_audio_in_window

0x7948,	// (0x0004ef87) popup_call_audio_out_window_ParamLimits

0x7948,	// (0x0004ef87) popup_call_audio_out_window

0x796a,	// (0x0004efa9) popup_call_audio_second_window_ParamLimits

0x796a,	// (0x0004efa9) popup_call_audio_second_window

0x799a,	// (0x0004efd9) popup_call_audio_wait_window_ParamLimits

0x799a,	// (0x0004efd9) popup_call_audio_wait_window

0x79bb,	// (0x0004effa) popup_number_entry_window_ParamLimits

0x79bb,	// (0x0004effa) popup_number_entry_window

0x4921,	// (0x0004bf60) bg_popup_call_pane_cp05_ParamLimits

0x4921,	// (0x0004bf60) bg_popup_call_pane_cp05

0x4941,	// (0x0004bf80) popup_number_entry_window_t1

0x4954,	// (0x0004bf93) popup_number_entry_window_t2

0x4966,	// (0x0004bfa5) popup_number_entry_window_t3

0x0003,

0xf085,	// (0x000566c4) popup_number_entry_window_t

0x49b4,	// (0x0004bff3) text_title_cp2

0x49c7,	// (0x0004c006) bg_popup_call_pane_cp_ParamLimits

0x49c7,	// (0x0004c006) bg_popup_call_pane_cp

0x49d5,	// (0x0004c014) call_thumbnail_pane

0x49dd,	// (0x0004c01c) popup_call_audio_in_window_g1_ParamLimits

0x49dd,	// (0x0004c01c) popup_call_audio_in_window_g1

0x49e9,	// (0x0004c028) popup_call_audio_in_window_g2_ParamLimits

0x49e9,	// (0x0004c028) popup_call_audio_in_window_g2

0x49f5,	// (0x0004c034) popup_call_audio_in_window_g3_ParamLimits

0x49f5,	// (0x0004c034) popup_call_audio_in_window_g3

0x0002,

0xf08e,	// (0x000566cd) popup_call_audio_in_window_g_ParamLimits

0xf08e,	// (0x000566cd) popup_call_audio_in_window_g

0x4a01,	// (0x0004c040) popup_call_audio_in_window_t1_ParamLimits

0x4a01,	// (0x0004c040) popup_call_audio_in_window_t1

0x4a1d,	// (0x0004c05c) popup_call_audio_in_window_t2_ParamLimits

0x4a1d,	// (0x0004c05c) popup_call_audio_in_window_t2

0x4a39,	// (0x0004c078) popup_call_audio_in_window_t3_ParamLimits

0x4a39,	// (0x0004c078) popup_call_audio_in_window_t3

0x0002,

0xf095,	// (0x000566d4) popup_call_audio_in_window_t_ParamLimits

0xf095,	// (0x000566d4) popup_call_audio_in_window_t

0x49c7,	// (0x0004c006) bg_popup_call_pane_cp01_ParamLimits

0x49c7,	// (0x0004c006) bg_popup_call_pane_cp01

0x49d5,	// (0x0004c014) call_thumbnail_pane_cp02

0x4a4c,	// (0x0004c08b) call_type_pane_cp022

0x4a54,	// (0x0004c093) popup_call_audio_out_window_g1_ParamLimits

0x4a54,	// (0x0004c093) popup_call_audio_out_window_g1

0x4a66,	// (0x0004c0a5) popup_call_audio_out_window_g2_ParamLimits

0x4a66,	// (0x0004c0a5) popup_call_audio_out_window_g2

0x4a72,	// (0x0004c0b1) popup_call_audio_out_window_g3_ParamLimits

0x4a72,	// (0x0004c0b1) popup_call_audio_out_window_g3

0x0002,

0xf09c,	// (0x000566db) popup_call_audio_out_window_g_ParamLimits

0xf09c,	// (0x000566db) popup_call_audio_out_window_g

0x4a84,	// (0x0004c0c3) popup_call_audio_out_window_t1_ParamLimits

0x4a84,	// (0x0004c0c3) popup_call_audio_out_window_t1

0x4a9c,	// (0x0004c0db) popup_call_audio_out_window_t2_ParamLimits

0x4a9c,	// (0x0004c0db) popup_call_audio_out_window_t2

0x0001,

0xf0a3,	// (0x000566e2) popup_call_audio_out_window_t_ParamLimits

0xf0a3,	// (0x000566e2) popup_call_audio_out_window_t

0x4ab1,	// (0x0004c0f0) bg_popup_call_pane_ParamLimits

0x4ab1,	// (0x0004c0f0) bg_popup_call_pane

0x4b35,	// (0x0004c174) call_thumbnail_pane_cp_ParamLimits

0x4b35,	// (0x0004c174) call_thumbnail_pane_cp

0x4b59,	// (0x0004c198) call_type_pane_cp01_ParamLimits

0x4b59,	// (0x0004c198) call_type_pane_cp01

0x4b9d,	// (0x0004c1dc) popup_call_audio_first_window_g1_ParamLimits

0x4b9d,	// (0x0004c1dc) popup_call_audio_first_window_g1

0x4be9,	// (0x0004c228) popup_call_audio_first_window_g2_ParamLimits

0x4be9,	// (0x0004c228) popup_call_audio_first_window_g2

0x0001,

0xf0a8,	// (0x000566e7) popup_call_audio_first_window_g_ParamLimits

0xf0a8,	// (0x000566e7) popup_call_audio_first_window_g

0x4c2d,	// (0x0004c26c) popup_call_audio_first_window_t1_ParamLimits

0x4c2d,	// (0x0004c26c) popup_call_audio_first_window_t1

0x4cd9,	// (0x0004c318) popup_call_audio_first_window_t4_ParamLimits

0x4cd9,	// (0x0004c318) popup_call_audio_first_window_t4

0x4d65,	// (0x0004c3a4) popup_call_audio_first_window_t5_ParamLimits

0x4d65,	// (0x0004c3a4) popup_call_audio_first_window_t5

0x0002,

0xf0ad,	// (0x000566ec) popup_call_audio_first_window_t_ParamLimits

0xf0ad,	// (0x000566ec) popup_call_audio_first_window_t

0x4d94,	// (0x0004c3d3) bg_popup_call_pane_cp02

0x4d9e,	// (0x0004c3dd) call_type_pane_cp023

0x4da6,	// (0x0004c3e5) popup_call_audio_wait_window_g1

0x4dae,	// (0x0004c3ed) popup_call_audio_wait_window_g2

0x0001,

0xf0b4,	// (0x000566f3) popup_call_audio_wait_window_g

0x4db6,	// (0x0004c3f5) popup_call_audio_wait_window_t3

0x4dc4,	// (0x0004c403) bg_popup_call_pane_cp03_ParamLimits

0x4dc4,	// (0x0004c403) bg_popup_call_pane_cp03

0x4e24,	// (0x0004c463) call_thumbnail_pane_cp011_ParamLimits

0x4e24,	// (0x0004c463) call_thumbnail_pane_cp011

0x4e30,	// (0x0004c46f) call_type_pane_cp034_ParamLimits

0x4e30,	// (0x0004c46f) call_type_pane_cp034

0x4e6c,	// (0x0004c4ab) popup_call_audio_second_window_g1_ParamLimits

0x4e6c,	// (0x0004c4ab) popup_call_audio_second_window_g1

0x4ea8,	// (0x0004c4e7) popup_call_audio_second_window_g2_ParamLimits

0x4ea8,	// (0x0004c4e7) popup_call_audio_second_window_g2

0x0001,

0xf0b9,	// (0x000566f8) popup_call_audio_second_window_g_ParamLimits

0xf0b9,	// (0x000566f8) popup_call_audio_second_window_g

0xcc2f,	// (0x0005426e) popup_call_audio_second_window_t1_ParamLimits

0xcc2f,	// (0x0005426e) popup_call_audio_second_window_t1

0xccb0,	// (0x000542ef) popup_call_audio_second_window_t2_ParamLimits

0xccb0,	// (0x000542ef) popup_call_audio_second_window_t2

0xcce6,	// (0x00054325) popup_call_audio_second_window_t3_ParamLimits

0xcce6,	// (0x00054325) popup_call_audio_second_window_t3

0x0002,

0xf0be,	// (0x000566fd) popup_call_audio_second_window_t_ParamLimits

0xf0be,	// (0x000566fd) popup_call_audio_second_window_t

0x4d94,	// (0x0004c3d3) bg_popup_call_pane_cp04

0xcd1c,	// (0x0005435b) list_conf_pane

0xcd24,	// (0x00054363) popup_call_audio_conf_window_t1

0xcd32,	// (0x00054371) call_thumbnail_pane_g1

0xcd3a,	// (0x00054379) bg_pinb_pane_ParamLimits

0xcd3a,	// (0x00054379) bg_pinb_pane

0xcd48,	// (0x00054387) find_pinb_pane

0xcd3a,	// (0x00054379) listscroll_pinb_pane_ParamLimits

0xcd3a,	// (0x00054379) listscroll_pinb_pane

0xcd52,	// (0x00054391) pinb_bg_pane_g1

0xcd52,	// (0x00054391) pinb_bg_pane_g2

0xcd52,	// (0x00054391) pinb_bg_pane_g3

0xcd52,	// (0x00054391) pinb_bg_pane_g4

0xcd52,	// (0x00054391) pinb_bg_pane_g5

0xcd52,	// (0x00054391) pinb_bg_pane_g6

0xcd52,	// (0x00054391) pinb_bg_pane_g7

0xcd52,	// (0x00054391) pinb_bg_pane_g8

0xcd52,	// (0x00054391) pinb_bg_pane_g9

0xcd52,	// (0x00054391) pinb_bg_pane_g10

0x0009,

0xf0c5,	// (0x00056704) pinb_bg_pane_g

0x45ec,	// (0x0004bc2b) grid_pinb_pane

0x45ec,	// (0x0004bc2b) list_pinb_pane

0xcd5c,	// (0x0005439b) scroll_pane_cp01_ParamLimits

0xcd5c,	// (0x0005439b) scroll_pane_cp01

0xcd6a,	// (0x000543a9) find_pinb_pane_g1_ParamLimits

0xcd6a,	// (0x000543a9) find_pinb_pane_g1

0xcd82,	// (0x000543c1) find_pinb_pane_t1

0xcd94,	// (0x000543d3) find_pinb_pane_t2

0x0001,

0xf0df,	// (0x0005671e) find_pinb_pane_t

0xcda9,	// (0x000543e8) input_focus_pane_cp01_ParamLimits

0xcda9,	// (0x000543e8) input_focus_pane_cp01

0x4ee4,	// (0x0004c523) cell_pinb_pane_ParamLimits

0x4ee4,	// (0x0004c523) cell_pinb_pane

0xcdb5,	// (0x000543f4) cell_pinb_pane_g1_ParamLimits

0xcdb5,	// (0x000543f4) cell_pinb_pane_g1

0xcdc3,	// (0x00054402) cell_pinb_pane_g2_ParamLimits

0xcdc3,	// (0x00054402) cell_pinb_pane_g2

0xcdc3,	// (0x00054402) cell_pinb_pane_g3_ParamLimits

0xcdc3,	// (0x00054402) cell_pinb_pane_g3

0x0002,

0xf0e4,	// (0x00056723) cell_pinb_pane_g_ParamLimits

0xf0e4,	// (0x00056723) cell_pinb_pane_g

0x4d94,	// (0x0004c3d3) grid_highlight_pane_cp01

0x4ee4,	// (0x0004c523) list_pinb_item_pane_ParamLimits

0x4ee4,	// (0x0004c523) list_pinb_item_pane

0x45ec,	// (0x0004bc2b) list_highlight_pane_cp02

0xcdd1,	// (0x00054410) list_pinb_item_pane_g1_ParamLimits

0xcdd1,	// (0x00054410) list_pinb_item_pane_g1

0xcdc3,	// (0x00054402) list_pinb_item_pane_g2_ParamLimits

0xcdc3,	// (0x00054402) list_pinb_item_pane_g2

0xcdb5,	// (0x000543f4) list_pinb_item_pane_g3_ParamLimits

0xcdb5,	// (0x000543f4) list_pinb_item_pane_g3

0xcdc3,	// (0x00054402) list_pinb_item_pane_g4_ParamLimits

0xcdc3,	// (0x00054402) list_pinb_item_pane_g4

0x0003,

0xf0eb,	// (0x0005672a) list_pinb_item_pane_g_ParamLimits

0xf0eb,	// (0x0005672a) list_pinb_item_pane_g

0xcddf,	// (0x0005441e) list_pinb_item_pane_t1_ParamLimits

0xcddf,	// (0x0005441e) list_pinb_item_pane_t1

0x4f0c,	// (0x0004c54b) calc_display_pane

0x4f2a,	// (0x0004c569) calc_paper_pane

0x4f46,	// (0x0004c585) grid_calc_pane

0x4d94,	// (0x0004c3d3) bg_list_pane_cp01

0x4f72,	// (0x0004c5b1) clock_g1

0x4f7a,	// (0x0004c5b9) clock_g2

0x0001,

0xf0f4,	// (0x00056733) clock_g

0x4f84,	// (0x0004c5c3) clock_t1_ParamLimits

0x4f84,	// (0x0004c5c3) clock_t1

0x4f99,	// (0x0004c5d8) clock_t2_ParamLimits

0x4f99,	// (0x0004c5d8) clock_t2

0x4fab,	// (0x0004c5ea) clock_t3_ParamLimits

0x4fab,	// (0x0004c5ea) clock_t3

0x4fbd,	// (0x0004c5fc) clock_t4_ParamLimits

0x4fbd,	// (0x0004c5fc) clock_t4

0x4fcf,	// (0x0004c60e) clock_t5_ParamLimits

0x4fcf,	// (0x0004c60e) clock_t5

0x4fe4,	// (0x0004c623) clock_t6_ParamLimits

0x4fe4,	// (0x0004c623) clock_t6

0x4ff6,	// (0x0004c635) clock_t7_ParamLimits

0x4ff6,	// (0x0004c635) clock_t7

0x5008,	// (0x0004c647) clock_t8_ParamLimits

0x5008,	// (0x0004c647) clock_t8

0x501e,	// (0x0004c65d) clock_t9_ParamLimits

0x501e,	// (0x0004c65d) clock_t9

0x0008,

0xf0f9,	// (0x00056738) clock_t_ParamLimits

0xf0f9,	// (0x00056738) clock_t

0xcdf3,	// (0x00054432) popup_clock_analogue_window_cp02

0xcdf3,	// (0x00054432) popup_clock_digital_window_cp01

0x4d94,	// (0x0004c3d3) listscroll_help_pane

0x4d94,	// (0x0004c3d3) phob_pre_status_pane

0xcdfb,	// (0x0005443a) grid_qdial_pane

0xcd3a,	// (0x00054379) listscroll_mce_pane

0xcd3a,	// (0x00054379) bg_notes_pane

0xce05,	// (0x00054444) list_notes_pane

0x5034,	// (0x0004c673) scroll_pane_cp06

0xce13,	// (0x00054452) bg_calc_paper_pane

0x5043,	// (0x0004c682) list_calc_pane

0xce27,	// (0x00054466) bg_calc_display_pane

0x505d,	// (0x0004c69c) calc_display_pane_t1

0x5072,	// (0x0004c6b1) calc_display_pane_t2

0x5087,	// (0x0004c6c6) calc_display_pane_t3

0x0002,

0xf10c,	// (0x0005674b) calc_display_pane_t

0x5099,	// (0x0004c6d8) cell_calc_pane_ParamLimits

0x5099,	// (0x0004c6d8) cell_calc_pane

0xce33,	// (0x00054472) bg_calc_paper_pane_g1

0xce3f,	// (0x0005447e) bg_calc_paper_pane_g2

0xce4b,	// (0x0005448a) bg_calc_paper_pane_g3

0xce57,	// (0x00054496) bg_calc_paper_pane_g4

0xce63,	// (0x000544a2) bg_calc_paper_pane_g5

0x50c6,	// (0x0004c705) bg_calc_paper_pane_g6

0x50d7,	// (0x0004c716) bg_calc_paper_pane_g7

0x50e8,	// (0x0004c727) bg_calc_paper_pane_g8

0x0007,

0xf113,	// (0x00056752) bg_calc_paper_pane_g

0x50f9,	// (0x0004c738) calc_bg_paper_pane_g9

0x510a,	// (0x0004c749) list_calc_item_pane_ParamLimits

0x510a,	// (0x0004c749) list_calc_item_pane

0xce6f,	// (0x000544ae) list_calc_item_pane_g1

0x5137,	// (0x0004c776) list_calc_item_pane_t1_ParamLimits

0x5137,	// (0x0004c776) list_calc_item_pane_t1

0x5149,	// (0x0004c788) list_calc_item_pane_t2_ParamLimits

0x5149,	// (0x0004c788) list_calc_item_pane_t2

0x0001,

0xf124,	// (0x00056763) list_calc_item_pane_t_ParamLimits

0xf124,	// (0x00056763) list_calc_item_pane_t

0xcd52,	// (0x00054391) cell_calc_pane_g1

0xce7c,	// (0x000544bb) grid_highlight_pane_cp02

0x5179,	// (0x0004c7b8) bg_calc_display_pane_g1

0x5182,	// (0x0004c7c1) bg_calc_display_pane_g2

0x518c,	// (0x0004c7cb) bg_calc_display_pane_g3

0x0002,

0xf12e,	// (0x0005676d) bg_calc_display_pane_g

0x5195,	// (0x0004c7d4) cell_qdial_pane_ParamLimits

0x5195,	// (0x0004c7d4) cell_qdial_pane

0x51a9,	// (0x0004c7e8) cell_qdial_pane_g1_ParamLimits

0x51a9,	// (0x0004c7e8) cell_qdial_pane_g1

0x51b6,	// (0x0004c7f5) cell_qdial_pane_g2_ParamLimits

0x51b6,	// (0x0004c7f5) cell_qdial_pane_g2

0xce9e,	// (0x000544dd) cell_qdial_pane_g3_ParamLimits

0xce9e,	// (0x000544dd) cell_qdial_pane_g3

0x0003,

0xf135,	// (0x00056774) cell_qdial_pane_g_ParamLimits

0xf135,	// (0x00056774) cell_qdial_pane_g

0x51d3,	// (0x0004c812) cell_qdial_pane_t1_ParamLimits

0x51d3,	// (0x0004c812) cell_qdial_pane_t1

0x51eb,	// (0x0004c82a) cell_qdial_pane_t2_ParamLimits

0x51eb,	// (0x0004c82a) cell_qdial_pane_t2

0x51fe,	// (0x0004c83d) cell_qdial_pane_t3_ParamLimits

0x51fe,	// (0x0004c83d) cell_qdial_pane_t3

0x0002,

0xf13e,	// (0x0005677d) cell_qdial_pane_t_ParamLimits

0xf13e,	// (0x0005677d) cell_qdial_pane_t

0x4d94,	// (0x0004c3d3) grid_highlight_pane_cp04

0xceaa,	// (0x000544e9) thumbnail_qdial_pane_ParamLimits

0xceaa,	// (0x000544e9) thumbnail_qdial_pane

0xcf06,	// (0x00054545) list_help_pane

0xcf0f,	// (0x0005454e) scroll_pane_cp02

0x5211,	// (0x0004c850) help_list_pane_t1_ParamLimits

0x5211,	// (0x0004c850) help_list_pane_t1

0x524b,	// (0x0004c88a) bg_notes_pane_g2

0x5253,	// (0x0004c892) bg_notes_pane_g3

0x525b,	// (0x0004c89a) notes_bg_pane_g1

0x5263,	// (0x0004c8a2) notes_bg_pane_g4

0x526b,	// (0x0004c8aa) notes_bg_pane_g5

0x5273,	// (0x0004c8b2) notes_bg_pane_g6

0x527b,	// (0x0004c8ba) notes_bg_pane_g7

0x5283,	// (0x0004c8c2) notes_bg_pane_g8

0x528b,	// (0x0004c8ca) notes_bg_pane_g9

0x0006,

0xf15c,	// (0x0005679b) notes_bg_pane_g

0x5293,	// (0x0004c8d2) list_notes_text_pane_ParamLimits

0x5293,	// (0x0004c8d2) list_notes_text_pane

0xcf18,	// (0x00054557) list_notes_text_pane_g1

0x52bf,	// (0x0004c8fe) list_notes_text_pane_t1

0x52cd,	// (0x0004c90c) listscroll_cale_week_pane

0x52f2,	// (0x0004c931) bg_cale_heading_pane

0xcf3b,	// (0x0005457a) bg_cale_pane_cp01

0x5314,	// (0x0004c953) cale_week_corner_pane

0x532e,	// (0x0004c96d) cale_week_day_heading_pane

0x5350,	// (0x0004c98f) cale_week_scroll_pane_g1

0x536d,	// (0x0004c9ac) cale_week_scroll_pane_g2

0x5380,	// (0x0004c9bf) cale_week_scroll_pane_g3

0x5393,	// (0x0004c9d2) cale_week_scroll_pane_g4

0x53a6,	// (0x0004c9e5) cale_week_scroll_pane_g5

0x53b9,	// (0x0004c9f8) cale_week_scroll_pane_g6

0x53cc,	// (0x0004ca0b) cale_week_scroll_pane_g7

0x53e1,	// (0x0004ca20) cale_week_scroll_pane_g8

0x53f6,	// (0x0004ca35) cale_week_scroll_pane_g9

0x5409,	// (0x0004ca48) cale_week_scroll_pane_g10

0x541c,	// (0x0004ca5b) cale_week_scroll_pane_g11

0x542f,	// (0x0004ca6e) cale_week_scroll_pane_g12

0x5446,	// (0x0004ca85) cale_week_scroll_pane_g13

0x5461,	// (0x0004caa0) cale_week_scroll_pane_g14

0x547c,	// (0x0004cabb) cale_week_scroll_pane_g15

0x000f,

0xf16b,	// (0x000567aa) cale_week_scroll_pane_g

0x54ac,	// (0x0004caeb) cale_week_time_pane

0x54c1,	// (0x0004cb00) grid_cale_week_pane

0xcf6a,	// (0x000545a9) scroll_pane_cp08

0x54e0,	// (0x0004cb1f) cell_cale_week_pane_ParamLimits

0x54e0,	// (0x0004cb1f) cell_cale_week_pane

0x5542,	// (0x0004cb81) cale_week_day_heading_pane_t1

0x555d,	// (0x0004cb9c) cale_week_day_heading_pane_t2

0x5578,	// (0x0004cbb7) cale_week_day_heading_pane_t3

0x5593,	// (0x0004cbd2) cale_week_day_heading_pane_t4

0x55ae,	// (0x0004cbed) cale_week_day_heading_pane_t5

0x55c9,	// (0x0004cc08) cale_week_day_heading_pane_t6

0x55e4,	// (0x0004cc23) cale_week_day_heading_pane_t7

0x0006,

0xf18c,	// (0x000567cb) cale_week_day_heading_pane_t

0xcf87,	// (0x000545c6) bg_cale_side_pane

0x55ff,	// (0x0004cc3e) cale_week_time_pane_t1

0x5619,	// (0x0004cc58) cale_week_time_pane_t2

0x5633,	// (0x0004cc72) cale_week_time_pane_t3

0x564d,	// (0x0004cc8c) cale_week_time_pane_t4

0x5667,	// (0x0004cca6) cale_week_time_pane_t5

0x5681,	// (0x0004ccc0) cale_week_time_pane_t6

0x56a1,	// (0x0004cce0) cale_week_time_pane_t7

0x56c3,	// (0x0004cd02) cale_week_time_pane_t8

0x0007,

0xf19b,	// (0x000567da) cale_week_time_pane_t

0x56e7,	// (0x0004cd26) cell_cale_week_pane_g2

0x570b,	// (0x0004cd4a) cell_cale_week_pane_g3_ParamLimits

0x570b,	// (0x0004cd4a) cell_cale_week_pane_g3

0xcf95,	// (0x000545d4) grid_highlight_pane_cp07

0xcf9d,	// (0x000545dc) listscroll_gms_pane

0xcfa7,	// (0x000545e6) grid_gms_pane

0xcfb0,	// (0x000545ef) listscroll_gms_pane_g1

0xcfb8,	// (0x000545f7) listscroll_gms_pane_g2

0x0001,

0xf1ac,	// (0x000567eb) listscroll_gms_pane_g

0x5723,	// (0x0004cd62) scroll_pane_cp010

0x572e,	// (0x0004cd6d) cell_gms_pane_ParamLimits

0x572e,	// (0x0004cd6d) cell_gms_pane

0x573e,	// (0x0004cd7d) cell_gms_pane_g1

0xcfc0,	// (0x000545ff) cell_gms_pane_g2

0xcf18,	// (0x00054557) cell_gms_pane_g3

0xcfc8,	// (0x00054607) cell_gms_pane_g4

0x0003,

0xf1b1,	// (0x000567f0) cell_gms_pane_g

0xcfd1,	// (0x00054610) grid_highlight_pane_cp09

0x7858,	// (0x0004ee97) phob_pre_status_pane_g1

0x7860,	// (0x0004ee9f) phob_pre_status_pane_g2

0x7868,	// (0x0004eea7) phob_pre_status_pane_g3

0x7870,	// (0x0004eeaf) phob_pre_status_pane_g4

0x0004,

0xf58d,	// (0x00056bcc) phob_pre_status_pane_g

0x7880,	// (0x0004eebf) phob_pre_status_pane_t1

0x7890,	// (0x0004eecf) phob_pre_status_pane_t2

0x78a0,	// (0x0004eedf) phob_pre_status_pane_t3

0x0002,

0xf598,	// (0x00056bd7) phob_pre_status_pane_t

0xcfd9,	// (0x00054618) bg_list_pane_cp05

0x574e,	// (0x0004cd8d) grid_vorec_pane

0x5758,	// (0x0004cd97) vorec_t1

0x5766,	// (0x0004cda5) vorec_t2

0x5774,	// (0x0004cdb3) vorec_t3

0x5782,	// (0x0004cdc1) vorec_t4

0xc95d,	// (0x00053f9c) vorec_t5

0xc96b,	// (0x00053faa) vorec_t6

0x0004,

0xf1ba,	// (0x000567f9) vorec_t

0xc979,	// (0x00053fb8) wait_bar_pane_cp01

0x579e,	// (0x0004cddd) cell_vorec_pane_ParamLimits

0x579e,	// (0x0004cddd) cell_vorec_pane

0x57b1,	// (0x0004cdf0) cell_vorec_pane_g1

0x4d94,	// (0x0004c3d3) grid_highlight_pane_cp05

0x4ee4,	// (0x0004c523) cams_zoom_pane

0x4ee4,	// (0x0004c523) image_vga_pane

0xcdc3,	// (0x00054402) main_camera_pane_g1

0xcdc3,	// (0x00054402) main_camera_pane_g2

0xcdc3,	// (0x00054402) main_camera_pane_g3

0xcdc3,	// (0x00054402) main_camera_pane_g4

0xcdc3,	// (0x00054402) main_camera_pane_g5

0xcdc3,	// (0x00054402) main_camera_pane_g6

0xcdc3,	// (0x00054402) main_camera_pane_g7

0x0007,

0xf1c5,	// (0x00056804) main_camera_pane_g

0xcfe1,	// (0x00054620) main_camera_pane_t1

0xcfe1,	// (0x00054620) main_camera_pane_t2

0x0001,

0xf1d6,	// (0x00056815) main_camera_pane_t

0x57bb,	// (0x0004cdfa) cams_zoom_pane_cp_ParamLimits

0x57bb,	// (0x0004cdfa) cams_zoom_pane_cp

0x57e9,	// (0x0004ce28) image_cif_pane_ParamLimits

0x57e9,	// (0x0004ce28) image_cif_pane

0x45ec,	// (0x0004bc2b) image_subqcif_pane

0x57f7,	// (0x0004ce36) main_video_pane_g1_ParamLimits

0x57f7,	// (0x0004ce36) main_video_pane_g1

0x581f,	// (0x0004ce5e) main_video_pane_g2_ParamLimits

0x581f,	// (0x0004ce5e) main_video_pane_g2

0x5852,	// (0x0004ce91) main_video_pane_g3_ParamLimits

0x5852,	// (0x0004ce91) main_video_pane_g3

0x5852,	// (0x0004ce91) main_video_pane_g4_ParamLimits

0x5852,	// (0x0004ce91) main_video_pane_g4

0x5880,	// (0x0004cebf) main_video_pane_g5_ParamLimits

0x5880,	// (0x0004cebf) main_video_pane_g5

0xcff5,	// (0x00054634) main_video_pane_g6_ParamLimits

0xcff5,	// (0x00054634) main_video_pane_g6

0x0006,

0xf1db,	// (0x0005681a) main_video_pane_g_ParamLimits

0xf1db,	// (0x0005681a) main_video_pane_g

0x589c,	// (0x0004cedb) main_video_pane_t1_ParamLimits

0x589c,	// (0x0004cedb) main_video_pane_t1

0xd00f,	// (0x0005464e) cams_zoom_pane_g1

0xd00f,	// (0x0005464e) cams_zoom_pane_g2

0xd00f,	// (0x0005464e) cams_zoom_pane_g3

0xd00f,	// (0x0005464e) cams_zoom_pane_g4

0x0003,

0xf1ea,	// (0x00056829) cams_zoom_pane_g

0x58e2,	// (0x0004cf21) grid_cams_pane

0x58f0,	// (0x0004cf2f) linegrid_cams_pane

0x58fe,	// (0x0004cf3d) cell_cams_pane_ParamLimits

0x58fe,	// (0x0004cf3d) cell_cams_pane

0xd019,	// (0x00054658) cams_burst_image_pane

0xd021,	// (0x00054660) cell_cams_pane_g1

0x4d94,	// (0x0004c3d3) grid_highlight_pane_cp03

0xcd52,	// (0x00054391) mp_bg_pane_g1

0x45ec,	// (0x0004bc2b) bg_list_pane_cp03

0x45ec,	// (0x0004bc2b) bg_mp_pane

0x45ec,	// (0x0004bc2b) grid_mp_pane

0xd00f,	// (0x0005464e) media_player_g1

0xd54a,	// (0x00054b89) media_player_t1

0xd54a,	// (0x00054b89) media_player_t2

0xd54a,	// (0x00054b89) media_player_t3

0xd54a,	// (0x00054b89) media_player_t4

0xd54a,	// (0x00054b89) media_player_t5

0xd54a,	// (0x00054b89) media_player_t6

0xd54a,	// (0x00054b89) media_player_t7

0x0006,

0xf577,	// (0x00056bb6) media_player_t

0x45ec,	// (0x0004bc2b) wait_bar_pane_cp02

0xf55c,	// (0x00056b9b) main_usb_pane_t

0xd7c4,	// (0x00054e03) cell_mp_pane

0xcd52,	// (0x00054391) cell_mp_pane_g1

0x4d94,	// (0x0004c3d3) grid_highlight_pane_cp06

0xd03d,	// (0x0005467c) grid_skin_colour_pane

0xd045,	// (0x00054684) list_highlight_pane_cp03

0x5911,	// (0x0004cf50) skin_g1

0xd04d,	// (0x0005468c) skin_t1

0xd05c,	// (0x0005469b) skin_t2

0x0001,

0xf218,	// (0x00056857) skin_t

0x591b,	// (0x0004cf5a) cell_skin_colour_pane_ParamLimits

0x591b,	// (0x0004cf5a) cell_skin_colour_pane

0xd06a,	// (0x000546a9) cell_skin_colour_pane_g1

0x599f,	// (0x0004cfde) call_video_g1_ParamLimits

0x599f,	// (0x0004cfde) call_video_g1

0x59af,	// (0x0004cfee) call_video_g2_ParamLimits

0x59af,	// (0x0004cfee) call_video_g2

0x0001,

0xf21d,	// (0x0005685c) call_video_g_ParamLimits

0xf21d,	// (0x0005685c) call_video_g

0x5a09,	// (0x0004d048) call_video_uplink_pane_cp1_ParamLimits

0x5a09,	// (0x0004d048) call_video_uplink_pane_cp1

0xd07c,	// (0x000546bb) call_video_uplink_pane_cp2

0x5ad5,	// (0x0004d114) video_down_crop_pane_ParamLimits

0x5ad5,	// (0x0004d114) video_down_crop_pane

0x5bc7,	// (0x0004d206) video_down_pane_ParamLimits

0x5bc7,	// (0x0004d206) video_down_pane

0xd084,	// (0x000546c3) video_down_subqcif_pane_ParamLimits

0xd084,	// (0x000546c3) video_down_subqcif_pane

0xd09c,	// (0x000546db) video_down_subqcif_pane_cp_ParamLimits

0xd09c,	// (0x000546db) video_down_subqcif_pane_cp

0xd0c2,	// (0x00054701) im_reading_pane_ParamLimits

0xd0c2,	// (0x00054701) im_reading_pane

0x5ce7,	// (0x0004d326) im_writing_pane_ParamLimits

0x5ce7,	// (0x0004d326) im_writing_pane

0x5d05,	// (0x0004d344) im_reading_pane_t1

0xd0dc,	// (0x0005471b) list_im_pane

0xd0ed,	// (0x0005472c) scroll_pane_cp07

0x5d5d,	// (0x0004d39c) im_writing_pane_t1_ParamLimits

0x5d5d,	// (0x0004d39c) im_writing_pane_t1

0xd106,	// (0x00054745) im_writing_pane_t2_ParamLimits

0xd106,	// (0x00054745) im_writing_pane_t2

0x0001,

0xf227,	// (0x00056866) im_writing_pane_t_ParamLimits

0xf227,	// (0x00056866) im_writing_pane_t

0x4d94,	// (0x0004c3d3) input_focus_pane_cp04

0x4d94,	// (0x0004c3d3) input_focus_pane_cp05

0x5d6f,	// (0x0004d3ae) list_im_single_pane_ParamLimits

0x5d6f,	// (0x0004d3ae) list_im_single_pane

0x5d96,	// (0x0004d3d5) list_single_im_pane_t1

0xcfd9,	// (0x00054618) blid_accuracy_pane

0xcfd9,	// (0x00054618) blid_compass_pane

0xed1b,	// (0x0005635a) main_location_t1

0xed1b,	// (0x0005635a) main_location_t2

0xed1b,	// (0x0005635a) main_location_t3

0x0002,

0xf586,	// (0x00056bc5) main_location_t

0x4d94,	// (0x0004c3d3) aid_levels_location

0xcd52,	// (0x00054391) blid_accuracy_pane_g1

0xcd52,	// (0x00054391) blid_accuracy_pane_g2

0x0001,

0xf27b,	// (0x000568ba) blid_accuracy_pane_g

0xd14e,	// (0x0005478d) wml_content_pane

0xd18c,	// (0x000547cb) wml_button_pane_ParamLimits

0xd18c,	// (0x000547cb) wml_button_pane

0x5da5,	// (0x0004d3e4) wml_list_single_large_pane_ParamLimits

0x5da5,	// (0x0004d3e4) wml_list_single_large_pane

0x5dd0,	// (0x0004d40f) wml_list_single_medium_pane_ParamLimits

0x5dd0,	// (0x0004d40f) wml_list_single_medium_pane

0x5e02,	// (0x0004d441) wml_list_single_small_pane_ParamLimits

0x5e02,	// (0x0004d441) wml_list_single_small_pane

0xd1a0,	// (0x000547df) wml_selection_box_pane_ParamLimits

0xd1a0,	// (0x000547df) wml_selection_box_pane

0xd1b3,	// (0x000547f2) wml_list_single_pane_t1

0xd1c2,	// (0x00054801) wml_list_single_medium_pane_t1

0xd1d1,	// (0x00054810) wml_list_single_large_pane_t1

0xd1e0,	// (0x0005481f) input_focus_pane_cp02_ParamLimits

0xd1e0,	// (0x0005481f) input_focus_pane_cp02

0xd1f3,	// (0x00054832) wml_selection_box_pane_g1

0xd1fc,	// (0x0005483b) wml_selection_box_pane_t1_ParamLimits

0xd1fc,	// (0x0005483b) wml_selection_box_pane_t1

0xcd3a,	// (0x00054379) bg_wml_button_pane_ParamLimits

0xcd3a,	// (0x00054379) bg_wml_button_pane

0xd214,	// (0x00054853) wml_button_pane_g1

0xd21c,	// (0x0005485b) wml_button_pane_t1

0xd214,	// (0x00054853) wml_button_bg_pane_g1

0xd22c,	// (0x0005486b) wml_button_bg_pane_g2

0xd234,	// (0x00054873) wml_button_bg_pane_g3

0xd23c,	// (0x0005487b) wml_button_bg_pane_g4

0xd244,	// (0x00054883) wml_button_bg_pane_g5

0xd24c,	// (0x0005488b) wml_button_bg_pane_g6

0xd254,	// (0x00054893) wml_button_bg_pane_g7

0xd25c,	// (0x0005489b) wml_button_bg_pane_g8

0xd264,	// (0x000548a3) wml_button_bg_pane_g9

0x0008,

0xf22c,	// (0x0005686b) wml_button_bg_pane_g

0x5e3f,	// (0x0004d47e) bg_list_pane_cp02

0xd26c,	// (0x000548ab) mce_header_pane_ParamLimits

0xd26c,	// (0x000548ab) mce_header_pane

0xd282,	// (0x000548c1) mce_icon_pane

0xd282,	// (0x000548c1) mce_image_pane

0xd28b,	// (0x000548ca) mce_text_pane_ParamLimits

0xd28b,	// (0x000548ca) mce_text_pane

0x5e49,	// (0x0004d488) scroll_pane_cp03

0xd184,	// (0x000547c3) scroll_pane_cp04

0xd29e,	// (0x000548dd) scroll_pane_cp05_ParamLimits

0xd29e,	// (0x000548dd) scroll_pane_cp05

0x5e53,	// (0x0004d492) mce_header_field_pane_ParamLimits

0x5e53,	// (0x0004d492) mce_header_field_pane

0x5e73,	// (0x0004d4b2) mce_header_field_pane_2_ParamLimits

0x5e73,	// (0x0004d4b2) mce_header_field_pane_2

0x5e89,	// (0x0004d4c8) mce_header_field_pane_3

0x5e91,	// (0x0004d4d0) list_single_mce_message_pane_ParamLimits

0x5e91,	// (0x0004d4d0) list_single_mce_message_pane

0x5ebf,	// (0x0004d4fe) list_single_mce_smart_pane_ParamLimits

0x5ebf,	// (0x0004d4fe) list_single_mce_smart_pane

0xd2aa,	// (0x000548e9) input_focus_pane_cp03

0xd2b3,	// (0x000548f2) list_header_data_pane

0x5ef8,	// (0x0004d537) mce_header_field_pane_t1

0x5f06,	// (0x0004d545) list_single_mce_header_pane_ParamLimits

0x5f06,	// (0x0004d545) list_single_mce_header_pane

0xd2bb,	// (0x000548fa) list_single_mce_header_pane_t1

0xd2ca,	// (0x00054909) list_single_mce_message_pane_g1

0xd2d2,	// (0x00054911) list_single_mce_message_pane_t1

0x5f5c,	// (0x0004d59b) bg_cale_heading_pane_cp01_ParamLimits

0x5f5c,	// (0x0004d59b) bg_cale_heading_pane_cp01

0xd2e0,	// (0x0005491f) bg_cale_pane_cp02_ParamLimits

0xd2e0,	// (0x0005491f) bg_cale_pane_cp02

0x5faa,	// (0x0004d5e9) cale_month_corner_pane

0x5fc9,	// (0x0004d608) cale_month_day_heading_pane_ParamLimits

0x5fc9,	// (0x0004d608) cale_month_day_heading_pane

0x602f,	// (0x0004d66e) cale_month_pane_g1_ParamLimits

0x602f,	// (0x0004d66e) cale_month_pane_g1

0x6072,	// (0x0004d6b1) cale_month_pane_g2_ParamLimits

0x6072,	// (0x0004d6b1) cale_month_pane_g2

0x60ac,	// (0x0004d6eb) cale_month_pane_g3_ParamLimits

0x60ac,	// (0x0004d6eb) cale_month_pane_g3

0x60fc,	// (0x0004d73b) cale_month_pane_g4_ParamLimits

0x60fc,	// (0x0004d73b) cale_month_pane_g4

0x614c,	// (0x0004d78b) cale_month_pane_g5_ParamLimits

0x614c,	// (0x0004d78b) cale_month_pane_g5

0x619c,	// (0x0004d7db) cale_month_pane_g6_ParamLimits

0x619c,	// (0x0004d7db) cale_month_pane_g6

0x61ec,	// (0x0004d82b) cale_month_pane_g7_ParamLimits

0x61ec,	// (0x0004d82b) cale_month_pane_g7

0x6254,	// (0x0004d893) cale_month_pane_g8_ParamLimits

0x6254,	// (0x0004d893) cale_month_pane_g8

0x62bc,	// (0x0004d8fb) cale_month_pane_g9_ParamLimits

0x62bc,	// (0x0004d8fb) cale_month_pane_g9

0x631a,	// (0x0004d959) cale_month_pane_g10_ParamLimits

0x631a,	// (0x0004d959) cale_month_pane_g10

0x6378,	// (0x0004d9b7) cale_month_pane_g11_ParamLimits

0x6378,	// (0x0004d9b7) cale_month_pane_g11

0x63cc,	// (0x0004da0b) cale_month_pane_g12_ParamLimits

0x63cc,	// (0x0004da0b) cale_month_pane_g12

0x6422,	// (0x0004da61) cale_month_pane_g13_ParamLimits

0x6422,	// (0x0004da61) cale_month_pane_g13

0x000c,

0xf23f,	// (0x0005687e) cale_month_pane_g_ParamLimits

0xf23f,	// (0x0005687e) cale_month_pane_g

0x6478,	// (0x0004dab7) cale_month_week_pane

0x649c,	// (0x0004dadb) grid_cale_month_pane_ParamLimits

0x649c,	// (0x0004dadb) grid_cale_month_pane

0x64f9,	// (0x0004db38) cale_month_day_heading_pane_t1

0x657f,	// (0x0004dbbe) cale_month_day_heading_pane_t2

0x65f8,	// (0x0004dc37) cale_month_day_heading_pane_t3

0x6671,	// (0x0004dcb0) cale_month_day_heading_pane_t4

0x66ea,	// (0x0004dd29) cale_month_day_heading_pane_t5

0x6763,	// (0x0004dda2) cale_month_day_heading_pane_t6

0x67dc,	// (0x0004de1b) cale_month_day_heading_pane_t7

0x0006,

0xf25a,	// (0x00056899) cale_month_day_heading_pane_t

0xcf87,	// (0x000545c6) bg_cale_side_pane_cp01

0x686d,	// (0x0004deac) cale_month_week_pane_t1

0x6886,	// (0x0004dec5) cale_month_week_pane_t2

0x689f,	// (0x0004dede) cale_month_week_pane_t3

0x68b8,	// (0x0004def7) cale_month_week_pane_t4

0x68d3,	// (0x0004df12) cale_month_week_pane_t5

0x68f4,	// (0x0004df33) cale_month_week_pane_t6

0x0005,

0xf269,	// (0x000568a8) cale_month_week_pane_t

0x6915,	// (0x0004df54) cell_cale_month_pane_ParamLimits

0x6915,	// (0x0004df54) cell_cale_month_pane

0x6a3b,	// (0x0004e07a) cell_cale_month_pane_g1

0x6a47,	// (0x0004e086) cell_cale_month_pane_t1_ParamLimits

0x6a47,	// (0x0004e086) cell_cale_month_pane_t1

0xcf95,	// (0x000545d4) grid_highlight_pane_cp08

0xcd52,	// (0x00054391) main_smil_g1

0x6a73,	// (0x0004e0b2) smil_status_pane

0xd31f,	// (0x0005495e) smil_text_pane

0xebf3,	// (0x00056232) bg_popup_call3_rect_pane_g8

0xebfb,	// (0x0005623a) bg_popup_call3_rect_pane_g9

0x0008,

0xf507,	// (0x00056b46) bg_popup_call3_rect_pane_g

0xedf2,	// (0x00056431) smil_status_volume_pane_g1

0xd329,	// (0x00054968) smil_status_pane_t1

0x7c0d,	// (0x0004f24c) volume_smil_pane

0xd340,	// (0x0005497f) list_smil_text_pane

0x6a86,	// (0x0004e0c5) scroll_pane_cp011

0x6a91,	// (0x0004e0d0) smil_text_list_pane_t1_ParamLimits

0x6a91,	// (0x0004e0d0) smil_text_list_pane_t1

0x6b1e,	// (0x0004e15d) aid_volume_smil_ParamLimits

0x6b1e,	// (0x0004e15d) aid_volume_smil

0xcd52,	// (0x00054391) smil_volume_pane_g1

0xcd52,	// (0x00054391) smil_volume_pane_g2

0x0001,

0xf27b,	// (0x000568ba) smil_volume_pane_g

0x52cd,	// (0x0004c90c) listscroll_cale_day_pane

0xd34a,	// (0x00054989) bg_cale_pane

0xd362,	// (0x000549a1) list_cale_pane

0xd385,	// (0x000549c4) scroll_pane_cp09

0xd396,	// (0x000549d5) cale_bg_pane_g1

0xd39e,	// (0x000549dd) cale_bg_pane_g2

0xd3a6,	// (0x000549e5) cale_bg_pane_g3

0xd3ae,	// (0x000549ed) cale_bg_pane_g4

0xd3b6,	// (0x000549f5) cale_bg_pane_g5

0xd3be,	// (0x000549fd) cale_bg_pane_g6

0xd3c6,	// (0x00054a05) cale_bg_pane_g7

0xd3ce,	// (0x00054a0d) cale_bg_pane_g8

0xd3d6,	// (0x00054a15) cale_bg_pane_g9

0x0008,

0xf280,	// (0x000568bf) cale_bg_pane_g

0x6b48,	// (0x0004e187) list_cale_time_pane_ParamLimits

0x6b48,	// (0x0004e187) list_cale_time_pane

0xd3de,	// (0x00054a1d) list_cale_time_pane_g1_ParamLimits

0xd3de,	// (0x00054a1d) list_cale_time_pane_g1

0xd3ea,	// (0x00054a29) list_cale_time_pane_g2_ParamLimits

0xd3ea,	// (0x00054a29) list_cale_time_pane_g2

0x6b70,	// (0x0004e1af) list_cale_time_pane_g3_ParamLimits

0x6b70,	// (0x0004e1af) list_cale_time_pane_g3

0x6b7e,	// (0x0004e1bd) list_cale_time_pane_g4_ParamLimits

0x6b7e,	// (0x0004e1bd) list_cale_time_pane_g4

0x6b8c,	// (0x0004e1cb) list_cale_time_pane_g5_ParamLimits

0x6b8c,	// (0x0004e1cb) list_cale_time_pane_g5

0x0005,

0xf293,	// (0x000568d2) list_cale_time_pane_g_ParamLimits

0xf293,	// (0x000568d2) list_cale_time_pane_g

0xd404,	// (0x00054a43) list_cale_time_pane_t1_ParamLimits

0xd404,	// (0x00054a43) list_cale_time_pane_t1

0xd42c,	// (0x00054a6b) list_cale_time_pane_t2_ParamLimits

0xd42c,	// (0x00054a6b) list_cale_time_pane_t2

0x6e60,	// (0x0004e49f) aid_blid_cardinal_pane

0x6ea2,	// (0x0004e4e1) compass_pane_t4

0xd454,	// (0x00054a93) list_cale_time_pane_t4_ParamLimits

0xd454,	// (0x00054a93) list_cale_time_pane_t4

0x6eb0,	// (0x0004e4ef) compass_pane_t5

0x6ec0,	// (0x0004e4ff) compass_pane_t6

0x6ece,	// (0x0004e50d) compass_pane_t7

0xd8de,	// (0x00054f1d) navi_pane_cc_t1

0xdabb,	// (0x000550fa) aid_phob_thumbnail_center_pane

0x72f1,	// (0x0004e930) main_postcard_pane_g4_ParamLimits

0x0002,

0xf2a0,	// (0x000568df) list_cale_time_pane_t_ParamLimits

0xf2a0,	// (0x000568df) list_cale_time_pane_t

0x49c7,	// (0x0004c006) bg_popup_window_pane_cp02_ParamLimits

0x49c7,	// (0x0004c006) bg_popup_window_pane_cp02

0xd47c,	// (0x00054abb) heading_pane_cp01_ParamLimits

0xd47c,	// (0x00054abb) heading_pane_cp01

0xd488,	// (0x00054ac7) loc_req_pane_ParamLimits

0xd488,	// (0x00054ac7) loc_req_pane

0xd498,	// (0x00054ad7) loc_type_pane_ParamLimits

0xd498,	// (0x00054ad7) loc_type_pane

0xd4aa,	// (0x00054ae9) loc_type_pane_t1_ParamLimits

0xd4aa,	// (0x00054ae9) loc_type_pane_t1

0xd4bc,	// (0x00054afb) loc_type_pane_t2_ParamLimits

0xd4bc,	// (0x00054afb) loc_type_pane_t2

0xd4ce,	// (0x00054b0d) loc_type_pane_t3_ParamLimits

0xd4ce,	// (0x00054b0d) loc_type_pane_t3

0x0002,

0xf2a7,	// (0x000568e6) loc_type_pane_t_ParamLimits

0xf2a7,	// (0x000568e6) loc_type_pane_t

0xd4e0,	// (0x00054b1f) list_loc_req_pane

0xd4ea,	// (0x00054b29) scroll_pane_cp012

0x6b9a,	// (0x0004e1d9) list_single_loc_request_popup_menu_pane_ParamLimits

0x6b9a,	// (0x0004e1d9) list_single_loc_request_popup_menu_pane

0xd4f5,	// (0x00054b34) list_single_loc_request_popup_menu_pane_g1_ParamLimits

0xd4f5,	// (0x00054b34) list_single_loc_request_popup_menu_pane_g1

0xd501,	// (0x00054b40) list_single_loc_request_popup_menu_pane_g2_ParamLimits

0xd501,	// (0x00054b40) list_single_loc_request_popup_menu_pane_g2

0x0001,

0xf2ae,	// (0x000568ed) list_single_loc_request_popup_menu_pane_g_ParamLimits

0xf2ae,	// (0x000568ed) list_single_loc_request_popup_menu_pane_g

0xd50d,	// (0x00054b4c) list_single_loc_request_popup_menu_pane_t1_ParamLimits

0xd50d,	// (0x00054b4c) list_single_loc_request_popup_menu_pane_t1

0x6bb3,	// (0x0004e1f2) bg_popup_window_pane_cp03_ParamLimits

0x6bb3,	// (0x0004e1f2) bg_popup_window_pane_cp03

0x6bc1,	// (0x0004e200) heading_loc_req_pane_ParamLimits

0x6bc1,	// (0x0004e200) heading_loc_req_pane

0x6bcd,	// (0x0004e20c) popup_dyc_status_message_window_g1_ParamLimits

0x6bcd,	// (0x0004e20c) popup_dyc_status_message_window_g1

0x6bd9,	// (0x0004e218) popup_dyc_status_message_window_t1_ParamLimits

0x6bd9,	// (0x0004e218) popup_dyc_status_message_window_t1

0x6beb,	// (0x0004e22a) popup_dyc_status_message_window_t2_ParamLimits

0x6beb,	// (0x0004e22a) popup_dyc_status_message_window_t2

0x6bfd,	// (0x0004e23c) popup_dyc_status_message_window_t3_ParamLimits

0x6bfd,	// (0x0004e23c) popup_dyc_status_message_window_t3

0x0002,

0xf2b3,	// (0x000568f2) popup_dyc_status_message_window_t_ParamLimits

0xf2b3,	// (0x000568f2) popup_dyc_status_message_window_t

0x4d94,	// (0x0004c3d3) bg_heading_pane_cp01

0xd523,	// (0x00054b62) heading_loc_req_pane_g1

0xd52b,	// (0x00054b6a) heading_loc_req_pane_g2

0xd533,	// (0x00054b72) heading_loc_req_pane_g3

0x0002,

0xf2ba,	// (0x000568f9) heading_loc_req_pane_g

0xd53b,	// (0x00054b7a) heading_loc_req_pane_t1

0xd55a,	// (0x00054b99) bg_popup_sub_pane_cp01_ParamLimits

0xd55a,	// (0x00054b99) bg_popup_sub_pane_cp01

0xd568,	// (0x00054ba7) popup_cale_events_window_g1_ParamLimits

0xd568,	// (0x00054ba7) popup_cale_events_window_g1

0xd588,	// (0x00054bc7) popup_cale_events_window_g2_ParamLimits

0xd588,	// (0x00054bc7) popup_cale_events_window_g2

0x0001,

0xf2dc,	// (0x0005691b) popup_cale_events_window_g_ParamLimits

0xf2dc,	// (0x0005691b) popup_cale_events_window_g

0xd5a8,	// (0x00054be7) popup_cale_events_window_t1_ParamLimits

0xd5a8,	// (0x00054be7) popup_cale_events_window_t1

0xd5ba,	// (0x00054bf9) popup_cale_events_window_t2_ParamLimits

0xd5ba,	// (0x00054bf9) popup_cale_events_window_t2

0xd5f8,	// (0x00054c37) popup_cale_events_window_t3_ParamLimits

0xd5f8,	// (0x00054c37) popup_cale_events_window_t3

0xd632,	// (0x00054c71) popup_cale_events_window_t4_ParamLimits

0xd632,	// (0x00054c71) popup_cale_events_window_t4

0x0003,

0xf2e1,	// (0x00056920) popup_cale_events_window_t_ParamLimits

0xf2e1,	// (0x00056920) popup_cale_events_window_t

0x6c27,	// (0x0004e266) call_type_pane

0xd668,	// (0x00054ca7) popup_call_status_window_g1

0x6c33,	// (0x0004e272) popup_call_status_window_g2

0x6c3f,	// (0x0004e27e) popup_call_status_window_g3

0x0002,

0xf2ea,	// (0x00056929) popup_call_status_window_g

0xd676,	// (0x00054cb5) call_type_pane_g1

0xd67f,	// (0x00054cbe) call_type_pane_g2

0x0001,

0xf2f1,	// (0x00056930) call_type_pane_g

0x4d94,	// (0x0004c3d3) bg_popup_sub_pane_cp02

0xd688,	// (0x00054cc7) listscroll_popup_wml_pane

0xd690,	// (0x00054ccf) list_wml_pane

0xd69a,	// (0x00054cd9) scroll_pane_cp013

0xd6a5,	// (0x00054ce4) list_single_graphic_popup_wml_pane_ParamLimits

0xd6a5,	// (0x00054ce4) list_single_graphic_popup_wml_pane

0xcd52,	// (0x00054391) list_single_graphic_popup_wml_pane_g1

0xd6b9,	// (0x00054cf8) list_single_graphic_popup_wml_pane_g2

0x0001,

0xf2f6,	// (0x00056935) list_single_graphic_popup_wml_pane_g

0xd6c1,	// (0x00054d00) list_single_graphic_popup_wml_pane_t1

0xd6d7,	// (0x00054d16) aid_call_pane

0xcd32,	// (0x00054371) popup_clock_analogue_window_g1

0xcd32,	// (0x00054371) popup_clock_analogue_window_g2

0x6c4b,	// (0x0004e28a) popup_clock_analogue_window_g3

0x6c4b,	// (0x0004e28a) popup_clock_analogue_window_g4

0xcd52,	// (0x00054391) popup_clock_analogue_window_g5

0x0004,

0xf2fb,	// (0x0005693a) popup_clock_analogue_window_g

0x6c53,	// (0x0004e292) popup_clock_analogue_window_t1

0x6c61,	// (0x0004e2a0) clock_digital_number_pane_ParamLimits

0x6c61,	// (0x0004e2a0) clock_digital_number_pane

0x6c6d,	// (0x0004e2ac) clock_digital_number_pane_cp02_ParamLimits

0x6c6d,	// (0x0004e2ac) clock_digital_number_pane_cp02

0x6c79,	// (0x0004e2b8) clock_digital_number_pane_cp03_ParamLimits

0x6c79,	// (0x0004e2b8) clock_digital_number_pane_cp03

0x6c85,	// (0x0004e2c4) clock_digital_number_pane_cp04_ParamLimits

0x6c85,	// (0x0004e2c4) clock_digital_number_pane_cp04

0x6c91,	// (0x0004e2d0) clock_digital_separator_pane_ParamLimits

0x6c91,	// (0x0004e2d0) clock_digital_separator_pane

0x6c9d,	// (0x0004e2dc) popup_clock_digital_window_t1

0xcd52,	// (0x00054391) clock_digital_number_pane_g1

0xcd52,	// (0x00054391) clock_digital_number_pane_g2

0x0001,

0xf27b,	// (0x000568ba) clock_digital_number_pane_g

0xcd52,	// (0x00054391) clock_digital_separator_pane_g1

0xcd52,	// (0x00054391) clock_digital_separator_pane_g2

0x0001,

0xf27b,	// (0x000568ba) clock_digital_separator_pane_g

0x4d94,	// (0x0004c3d3) bg_popup_window_pane_cp04

0xd6df,	// (0x00054d1e) heading_pane_cp03

0xcfd9,	// (0x00054618) listscroll_popup_gms_pane

0x4d94,	// (0x0004c3d3) grid_large_graphic_popup_pane

0xd6e8,	// (0x00054d27) listscroll_popup_gms_pane_g1

0xd6f1,	// (0x00054d30) listscroll_popup_gms_pane_g2

0x0001,

0xf306,	// (0x00056945) listscroll_popup_gms_pane_g

0xd6fa,	// (0x00054d39) scroll_pane_cp014

0x4ee4,	// (0x0004c523) cell_large_graphic_popup_pane_ParamLimits

0x4ee4,	// (0x0004c523) cell_large_graphic_popup_pane

0xcdb5,	// (0x000543f4) cell_large_graphic_popup_pane_g1_ParamLimits

0xcdb5,	// (0x000543f4) cell_large_graphic_popup_pane_g1

0xd703,	// (0x00054d42) cell_large_graphic_popup_pane_g2_ParamLimits

0xd703,	// (0x00054d42) cell_large_graphic_popup_pane_g2

0xd711,	// (0x00054d50) cell_large_graphic_popup_pane_g3_ParamLimits

0xd711,	// (0x00054d50) cell_large_graphic_popup_pane_g3

0xd71f,	// (0x00054d5e) cell_large_graphic_popup_pane_g4_ParamLimits

0xd71f,	// (0x00054d5e) cell_large_graphic_popup_pane_g4

0x0003,

0xf30b,	// (0x0005694a) cell_large_graphic_popup_pane_g_ParamLimits

0xf30b,	// (0x0005694a) cell_large_graphic_popup_pane_g

0x4d94,	// (0x0004c3d3) grid_highlight_pane_cp010

0xcd52,	// (0x00054391) bg_popup_call_pane_g1

0xd730,	// (0x00054d6f) list_single_graphic_popup_conf_pane_ParamLimits

0xd730,	// (0x00054d6f) list_single_graphic_popup_conf_pane

0xd743,	// (0x00054d82) list_highlight_pane_cp01

0xd74c,	// (0x00054d8b) list_single_graphic_popup_conf_pane_g1

0xd754,	// (0x00054d93) list_single_graphic_popup_conf_pane_g2

0x0001,

0xf314,	// (0x00056953) list_single_graphic_popup_conf_pane_g

0xd75c,	// (0x00054d9b) list_single_graphic_popup_conf_pane_t1

0xd76a,	// (0x00054da9) linegrid_cams_pane_g1

0x6cba,	// (0x0004e2f9) linegrid_cams_pane_g2

0xcf18,	// (0x00054557) linegrid_cams_pane_g3

0xd773,	// (0x00054db2) linegrid_cams_pane_g4

0x6cc3,	// (0x0004e302) linegrid_cams_pane_g5

0x6ccc,	// (0x0004e30b) linegrid_cams_pane_g6

0xcfc8,	// (0x00054607) linegrid_cams_pane_g7

0x0006,

0xf319,	// (0x00056958) linegrid_cams_pane_g

0xd77c,	// (0x00054dbb) popup_clock_analogue_window

0xd77c,	// (0x00054dbb) popup_clock_digital_window

0x4d94,	// (0x0004c3d3) popup_phob_thumbnail_window

0xcd52,	// (0x00054391) call_video_uplink_pane_g1

0xd785,	// (0x00054dc4) call_video_uplink_pane_g2

0x0001,

0xf328,	// (0x00056967) call_video_uplink_pane_g

0xd78d,	// (0x00054dcc) video_uplink_pane

0xd795,	// (0x00054dd4) mce_image_pane_g1

0x6cd5,	// (0x0004e314) mce_image_pane_g2

0x6cdd,	// (0x0004e31c) mce_image_pane_g3

0x6ce5,	// (0x0004e324) mce_image_pane_g4

0x6ced,	// (0x0004e32c) mce_image_pane_g5

0x0004,

0xf32d,	// (0x0005696c) mce_image_pane_g

0xd79f,	// (0x00054dde) control_top_pane_stacon_cp01_ParamLimits

0xd79f,	// (0x00054dde) control_top_pane_stacon_cp01

0xd7b3,	// (0x00054df2) uni_indicator_pane_stacon_cp01_ParamLimits

0xd7b3,	// (0x00054df2) uni_indicator_pane_stacon_cp01

0xd7c4,	// (0x00054e03) bg_popup_sub_pane_cp03

0x6cf5,	// (0x0004e334) chi_dic_find_pane

0x6cfd,	// (0x0004e33c) listscroll_chi_dic_pane

0x6d06,	// (0x0004e345) main_pane_chidic_g1

0x6d19,	// (0x0004e358) chi_dic_find_pane_t1

0xd7ce,	// (0x00054e0d) find_chidic_pane

0xd7d7,	// (0x00054e16) chi_dic_list_pane_ParamLimits

0xd7d7,	// (0x00054e16) chi_dic_list_pane

0xd7e8,	// (0x00054e27) scroll_pane_cp020

0x6d27,	// (0x0004e366) find_chidic_pane_t1

0x4d94,	// (0x0004c3d3) input_focus_pane_cp06

0x6d36,	// (0x0004e375) list_chi_dic_pane_ParamLimits

0x6d36,	// (0x0004e375) list_chi_dic_pane

0x6d53,	// (0x0004e392) list_chi_dic_pane_t1_ParamLimits

0x6d53,	// (0x0004e392) list_chi_dic_pane_t1

0x4d94,	// (0x0004c3d3) list_highlight_pane_cp020

0xd7f0,	// (0x00054e2f) bg_cale_heading_pane_g1

0x6d66,	// (0x0004e3a5) bg_cale_heading_pane_g2

0x6d6e,	// (0x0004e3ad) bg_cale_heading_pane_g3

0x6d76,	// (0x0004e3b5) bg_cale_heading_pane_g4

0x6d80,	// (0x0004e3bf) bg_cale_heading_pane_g5

0x6d8a,	// (0x0004e3c9) bg_cale_heading_pane_g6

0x6d92,	// (0x0004e3d1) bg_cale_heading_pane_g7

0x6d9a,	// (0x0004e3d9) bg_cale_heading_pane_g8

0x6da4,	// (0x0004e3e3) bg_cale_heading_pane_g9

0x0008,

0xf338,	// (0x00056977) bg_cale_heading_pane_g

0xd7f0,	// (0x00054e2f) bg_cale_side_pane_g1

0x6dae,	// (0x0004e3ed) bg_cale_side_pane_g2

0x6db8,	// (0x0004e3f7) bg_cale_side_pane_g3

0x6dc2,	// (0x0004e401) bg_cale_side_pane_g4

0x6dcc,	// (0x0004e40b) bg_cale_side_pane_g5

0x6dd6,	// (0x0004e415) bg_cale_side_pane_g6

0x6de0,	// (0x0004e41f) bg_cale_side_pane_g7

0x6dea,	// (0x0004e429) bg_cale_side_pane_g8

0x6df2,	// (0x0004e431) bg_cale_side_pane_g9

0x0008,

0xf34b,	// (0x0005698a) bg_cale_side_pane_g

0x6dfa,	// (0x0004e439) popup_call_status_window_ParamLimits

0x6dfa,	// (0x0004e439) popup_call_status_window

0xd7f8,	// (0x00054e37) stacon_top_pane

0xd800,	// (0x00054e3f) status_pane_ParamLimits

0xd800,	// (0x00054e3f) status_pane

0xd815,	// (0x00054e54) status_small_pane

0xd81d,	// (0x00054e5c) control_pane

0x4d94,	// (0x0004c3d3) stacon_bottom_pane

0xd825,	// (0x00054e64) list_single_mce_smart_pane_t1_ParamLimits

0xd825,	// (0x00054e64) list_single_mce_smart_pane_t1

0xd838,	// (0x00054e77) list_single_mce_smart_pane_t2_ParamLimits

0xd838,	// (0x00054e77) list_single_mce_smart_pane_t2

0x0001,

0xf35e,	// (0x0005699d) list_single_mce_smart_pane_t_ParamLimits

0xf35e,	// (0x0005699d) list_single_mce_smart_pane_t

0x6e06,	// (0x0004e445) compass_pane

0x6e12,	// (0x0004e451) main_location2_pane_t1

0x6e26,	// (0x0004e465) main_location2_pane_t2

0x6e3a,	// (0x0004e479) main_location2_pane_t3

0x0003,

0xf363,	// (0x000569a2) main_location2_pane_t

0xd857,	// (0x00054e96) compass_pane_g1_ParamLimits

0xd857,	// (0x00054e96) compass_pane_g1

0x6e84,	// (0x0004e4c3) compass_pane_t1

0x6e93,	// (0x0004e4d2) compass_pane_t2

0x0005,

0xf36c,	// (0x000569ab) compass_pane_t

0x6ede,	// (0x0004e51d) text_secondary_cp61

0xd8d5,	// (0x00054f14) navi_pane_cams_g5

0xd951,	// (0x00054f90) navi_pane_im_t1

0xd95f,	// (0x00054f9e) navi_pane_mp_g1_ParamLimits

0xd95f,	// (0x00054f9e) navi_pane_mp_g1

0xd973,	// (0x00054fb2) navi_pane_mp_g2_ParamLimits

0xd973,	// (0x00054fb2) navi_pane_mp_g2

0xd97f,	// (0x00054fbe) navi_pane_mp_g3_ParamLimits

0xd97f,	// (0x00054fbe) navi_pane_mp_g3

0x0002,

0xf380,	// (0x000569bf) navi_pane_mp_g_ParamLimits

0xf380,	// (0x000569bf) navi_pane_mp_g

0xd98b,	// (0x00054fca) navi_pane_mp_t1

0xd999,	// (0x00054fd8) navi_pane_mp_t2

0x0002,

0xf387,	// (0x000569c6) navi_pane_mp_t

0xda04,	// (0x00055043) navi_pane_vt_g1

0xd98b,	// (0x00054fca) navi_pane_vt_t1

0xda0c,	// (0x0005504b) navi_slider_pane

0xcfd9,	// (0x00054618) zooming_pane

0xda1c,	// (0x0005505b) navi_slider_pane_g1

0x6f19,	// (0x0004e558) navi_slider_pane_g2

0x0006,

0xf38e,	// (0x000569cd) navi_slider_pane_g

0xda40,	// (0x0005507f) aid_levels_zoom

0xda48,	// (0x00055087) zooming_pane_g1

0xda50,	// (0x0005508f) zooming_pane_g2

0xda50,	// (0x0005508f) zooming_pane_g3

0x0002,

0xf39d,	// (0x000569dc) zooming_pane_g

0xda58,	// (0x00055097) level_10_zoom

0xda61,	// (0x000550a0) level_11_zoom

0xda6a,	// (0x000550a9) level_1_zoom

0xda73,	// (0x000550b2) level_2_zoom

0xda7c,	// (0x000550bb) level_3_zoom

0xda85,	// (0x000550c4) level_4_zoom

0xda8e,	// (0x000550cd) level_5_zoom

0xda97,	// (0x000550d6) level_6_zoom

0xdaa0,	// (0x000550df) level_7_zoom

0xdaa9,	// (0x000550e8) level_8_zoom

0xdab2,	// (0x000550f1) level_9_zoom

0xdac3,	// (0x00055102) popup_phob_thumbnail_window_g1

0xdacb,	// (0x0005510a) popup_phob_thumbnail_window_g2

0x0001,

0xf3a4,	// (0x000569e3) popup_phob_thumbnail_window_g

0x78b0,	// (0x0004eeef) level_1_location

0x78b8,	// (0x0004eef7) level_2_location

0x78c0,	// (0x0004eeff) level_3_location

0x78ca,	// (0x0004ef09) level_4_location

0xcfd9,	// (0x00054618) level_5_location

0x6f2b,	// (0x0004e56a) mce_icon_pane_g1

0x6f33,	// (0x0004e572) mce_icon_pane_g2

0x0001,

0xf3a9,	// (0x000569e8) mce_icon_pane_g

0x6f3b,	// (0x0004e57a) main_mup_pane_g1_ParamLimits

0x6f3b,	// (0x0004e57a) main_mup_pane_g1

0xcdd1,	// (0x00054410) main_mup_pane_g2_ParamLimits

0xcdd1,	// (0x00054410) main_mup_pane_g2

0xcdd1,	// (0x00054410) main_mup_pane_g3_ParamLimits

0xcdd1,	// (0x00054410) main_mup_pane_g3

0xcdd1,	// (0x00054410) main_mup_pane_g4_ParamLimits

0xcdd1,	// (0x00054410) main_mup_pane_g4

0xcdd1,	// (0x00054410) main_mup_pane_g5_ParamLimits

0xcdd1,	// (0x00054410) main_mup_pane_g5

0xcdd1,	// (0x00054410) main_mup_pane_g6_ParamLimits

0xcdd1,	// (0x00054410) main_mup_pane_g6

0xcdd1,	// (0x00054410) main_mup_pane_g7_ParamLimits

0xcdd1,	// (0x00054410) main_mup_pane_g7

0xcdd1,	// (0x00054410) main_mup_pane_g8_ParamLimits

0xcdd1,	// (0x00054410) main_mup_pane_g8

0xcdd1,	// (0x00054410) main_mup_pane_g9_ParamLimits

0xcdd1,	// (0x00054410) main_mup_pane_g9

0xcdd1,	// (0x00054410) main_mup_pane_g10_ParamLimits

0xcdd1,	// (0x00054410) main_mup_pane_g10

0xcdd1,	// (0x00054410) main_mup_pane_g11_ParamLimits

0xcdd1,	// (0x00054410) main_mup_pane_g11

0xcdc3,	// (0x00054402) main_mup_pane_g12_ParamLimits

0xcdc3,	// (0x00054402) main_mup_pane_g12

0xcdd1,	// (0x00054410) main_mup_pane_g13_ParamLimits

0xcdd1,	// (0x00054410) main_mup_pane_g13

0x000c,

0xf3ae,	// (0x000569ed) main_mup_pane_g_ParamLimits

0xf3ae,	// (0x000569ed) main_mup_pane_g

0xcddf,	// (0x0005441e) main_mup_pane_t1_ParamLimits

0xcddf,	// (0x0005441e) main_mup_pane_t1

0xcddf,	// (0x0005441e) main_mup_pane_t2_ParamLimits

0xcddf,	// (0x0005441e) main_mup_pane_t2

0xcddf,	// (0x0005441e) main_mup_pane_t3_ParamLimits

0xcddf,	// (0x0005441e) main_mup_pane_t3

0xcfe1,	// (0x00054620) main_mup_pane_t4_ParamLimits

0xcfe1,	// (0x00054620) main_mup_pane_t4

0xcfe1,	// (0x00054620) main_mup_pane_t5_ParamLimits

0xcfe1,	// (0x00054620) main_mup_pane_t5

0xd029,	// (0x00054668) main_mup_pane_t6_ParamLimits

0xd029,	// (0x00054668) main_mup_pane_t6

0x0005,

0xf3c9,	// (0x00056a08) main_mup_pane_t_ParamLimits

0xf3c9,	// (0x00056a08) main_mup_pane_t

0xcd5c,	// (0x0005439b) mup_progress_pane_ParamLimits

0xcd5c,	// (0x0005439b) mup_progress_pane

0xdad3,	// (0x00055112) mup_visualizer_pane_ParamLimits

0xdad3,	// (0x00055112) mup_visualizer_pane

0xdad3,	// (0x00055112) mup_volume_pane_ParamLimits

0xdad3,	// (0x00055112) mup_volume_pane

0xcdc3,	// (0x00054402) mup_visualizer_pane_g1_ParamLimits

0xcdc3,	// (0x00054402) mup_visualizer_pane_g1

0xdae1,	// (0x00055120) mup_visualizer_pane_g2_ParamLimits

0xdae1,	// (0x00055120) mup_visualizer_pane_g2

0xcdb5,	// (0x000543f4) mup_visualizer_pane_g3_ParamLimits

0xcdb5,	// (0x000543f4) mup_visualizer_pane_g3

0x0002,

0xf3d6,	// (0x00056a15) mup_visualizer_pane_g_ParamLimits

0xf3d6,	// (0x00056a15) mup_visualizer_pane_g

0xd00f,	// (0x0005464e) mup_volume_pane_g1

0xd00f,	// (0x0005464e) mup_volume_pane_g2

0x0001,

0xf3dd,	// (0x00056a1c) mup_volume_pane_g

0xd00f,	// (0x0005464e) mup_progress_pane_g1

0xd00f,	// (0x0005464e) mup_progress_pane_g2

0xd00f,	// (0x0005464e) mup_progress_pane_g3

0x0002,

0xf3e2,	// (0x00056a21) mup_progress_pane_g

0x4d94,	// (0x0004c3d3) bg_popup_window_pane_cp05

0xdaef,	// (0x0005512e) heading_pane_cp02_ParamLimits

0xdaef,	// (0x0005512e) heading_pane_cp02

0xdb09,	// (0x00055148) list_popup_blid_pane

0xdb11,	// (0x00055150) list_blid_sat_info_pane_ParamLimits

0xdb11,	// (0x00055150) list_blid_sat_info_pane

0xdb24,	// (0x00055163) list_blid_sat_info_pane_g1

0xdb2c,	// (0x0005516b) list_blid_sat_info_pane_t1

0x7036,	// (0x0004e675) mup_equalizer_pane_ParamLimits

0x7036,	// (0x0004e675) mup_equalizer_pane

0x7057,	// (0x0004e696) mup_equalizer_pane_cp1_ParamLimits

0x7057,	// (0x0004e696) mup_equalizer_pane_cp1

0x7078,	// (0x0004e6b7) mup_equalizer_pane_cp2_ParamLimits

0x7078,	// (0x0004e6b7) mup_equalizer_pane_cp2

0x7099,	// (0x0004e6d8) mup_equalizer_pane_cp3_ParamLimits

0x7099,	// (0x0004e6d8) mup_equalizer_pane_cp3

0x70ba,	// (0x0004e6f9) mup_equalizer_pane_cp4_ParamLimits

0x70ba,	// (0x0004e6f9) mup_equalizer_pane_cp4

0x70db,	// (0x0004e71a) mup_equalizer_pane_cp5

0x70f1,	// (0x0004e730) mup_equalizer_pane_cp6

0x7109,	// (0x0004e748) mup_equalizer_pane_cp7

0xec73,	// (0x000562b2) bg_popup_call_poc_act_pane_g9

0xec7b,	// (0x000562ba) bg_popup_call_poc_act_pane_g10

0xec83,	// (0x000562c2) bg_popup_call_poc_act_pane_g11

0x000a,

0xcd3a,	// (0x00054379) mup_scale_pane

0xcd52,	// (0x00054391) mup_scale_pane_g1

0xdb3a,	// (0x00055179) mup_scale_pane_g2

0x0006,

0xf3fe,	// (0x00056a3d) mup_scale_pane_g

0xdb5e,	// (0x0005519d) msg_data_pane

0xdb66,	// (0x000551a5) scroll_pane_cp017

0x7133,	// (0x0004e772) bg_list_pane_cp04_ParamLimits

0x7133,	// (0x0004e772) bg_list_pane_cp04

0xdb6e,	// (0x000551ad) msg_data_pane_g1

0x714b,	// (0x0004e78a) msg_data_pane_g2

0x7153,	// (0x0004e792) msg_data_pane_g3

0x715b,	// (0x0004e79a) msg_data_pane_g4

0x7163,	// (0x0004e7a2) msg_data_pane_g5

0x716b,	// (0x0004e7aa) msg_data_pane_g6

0x7173,	// (0x0004e7b2) msg_data_pane_g7

0x0006,

0xf40d,	// (0x00056a4c) msg_data_pane_g

0x717b,	// (0x0004e7ba) msg_text_pane_ParamLimits

0x717b,	// (0x0004e7ba) msg_text_pane

0x71d3,	// (0x0004e812) qrid_highlight_pane_cp011_ParamLimits

0x71d3,	// (0x0004e812) qrid_highlight_pane_cp011

0x4d94,	// (0x0004c3d3) msg_body_pane

0x4d94,	// (0x0004c3d3) msg_header_pane

0xdb7f,	// (0x000551be) input_focus_pane_cp07

0x08f1,	// (0x00047f30) msg_header_pane_t1_ParamLimits

0x08f1,	// (0x00047f30) msg_header_pane_t1

0x0907,	// (0x00047f46) msg_header_pane_t2_ParamLimits

0x0907,	// (0x00047f46) msg_header_pane_t2

0x0001,

0xf421,	// (0x00056a60) msg_header_pane_t_ParamLimits

0xf421,	// (0x00056a60) msg_header_pane_t

0xdb94,	// (0x000551d3) msg_body_pane_g1

0x091e,	// (0x00047f5d) msg_body_pane_t1_ParamLimits

0x091e,	// (0x00047f5d) msg_body_pane_t1

0x094f,	// (0x00047f8e) msg_body_pane_t2_ParamLimits

0x094f,	// (0x00047f8e) msg_body_pane_t2

0x0961,	// (0x00047fa0) msg_body_pane_t3_ParamLimits

0x0961,	// (0x00047fa0) msg_body_pane_t3

0x0002,

0xf426,	// (0x00056a65) msg_body_pane_t_ParamLimits

0xf426,	// (0x00056a65) msg_body_pane_t

0x724d,	// (0x0004e88c) main_viewer_pane_g1_ParamLimits

0x724d,	// (0x0004e88c) main_viewer_pane_g1

0x7259,	// (0x0004e898) main_viewer_pane_g2_ParamLimits

0x7259,	// (0x0004e898) main_viewer_pane_g2

0x7265,	// (0x0004e8a4) main_viewer_pane_g3_ParamLimits

0x7265,	// (0x0004e8a4) main_viewer_pane_g3

0x7276,	// (0x0004e8b5) main_viewer_pane_g4_ParamLimits

0x7276,	// (0x0004e8b5) main_viewer_pane_g4

0x7287,	// (0x0004e8c6) main_viewer_pane_g5_ParamLimits

0x7287,	// (0x0004e8c6) main_viewer_pane_g5

0x7287,	// (0x0004e8c6) main_viewer_pane_g7_ParamLimits

0x7287,	// (0x0004e8c6) main_viewer_pane_g7

0xd4f5,	// (0x00054b34) main_viewer_pane_g8_ParamLimits

0xd4f5,	// (0x00054b34) main_viewer_pane_g8

0x0007,

0xf436,	// (0x00056a75) main_viewer_pane_g_ParamLimits

0xf436,	// (0x00056a75) main_viewer_pane_g

0xdb9c,	// (0x000551db) viewer_content_pane_ParamLimits

0xdb9c,	// (0x000551db) viewer_content_pane

0x72c5,	// (0x0004e904) main_postcard_pane_g1_ParamLimits

0x72c5,	// (0x0004e904) main_postcard_pane_g1

0x72d3,	// (0x0004e912) main_postcard_pane_g2_ParamLimits

0x72d3,	// (0x0004e912) main_postcard_pane_g2

0x72e1,	// (0x0004e920) main_postcard_pane_g3_ParamLimits

0x72e1,	// (0x0004e920) main_postcard_pane_g3

0x0005,

0xf447,	// (0x00056a86) main_postcard_pane_g_ParamLimits

0xf447,	// (0x00056a86) main_postcard_pane_g

0x72f1,	// (0x0004e930) main_postcard_pane_g4

0xee05,	// (0x00056444) smil_status_volume_pane_g2

0x731d,	// (0x0004e95c) postcard_pane_ParamLimits

0x731d,	// (0x0004e95c) postcard_pane

0xd668,	// (0x00054ca7) postcard_pane_g1_ParamLimits

0xd668,	// (0x00054ca7) postcard_pane_g1

0x734f,	// (0x0004e98e) postcard_pane_g2_ParamLimits

0x734f,	// (0x0004e98e) postcard_pane_g2

0x735b,	// (0x0004e99a) postcard_pane_g3_ParamLimits

0x735b,	// (0x0004e99a) postcard_pane_g3

0xdbaa,	// (0x000551e9) postcard_pane_g4_ParamLimits

0xdbaa,	// (0x000551e9) postcard_pane_g4

0x7367,	// (0x0004e9a6) postcard_pane_g5_ParamLimits

0x7367,	// (0x0004e9a6) postcard_pane_g5

0x7373,	// (0x0004e9b2) postcard_pane_g6_ParamLimits

0x7373,	// (0x0004e9b2) postcard_pane_g6

0xdbb8,	// (0x000551f7) postcard_pane_g7_ParamLimits

0xdbb8,	// (0x000551f7) postcard_pane_g7

0x0006,

0xf454,	// (0x00056a93) postcard_pane_g_ParamLimits

0xf454,	// (0x00056a93) postcard_pane_g

0x737f,	// (0x0004e9be) main_mp2_pane_g1_ParamLimits

0x737f,	// (0x0004e9be) main_mp2_pane_g1

0x738b,	// (0x0004e9ca) main_mp2_pane_g2_ParamLimits

0x738b,	// (0x0004e9ca) main_mp2_pane_g2

0x7397,	// (0x0004e9d6) main_mp2_pane_g3_ParamLimits

0x7397,	// (0x0004e9d6) main_mp2_pane_g3

0x0002,

0xf463,	// (0x00056aa2) main_mp2_pane_g_ParamLimits

0xf463,	// (0x00056aa2) main_mp2_pane_g

0x73a3,	// (0x0004e9e2) main_mp2_pane_t1_ParamLimits

0x73a3,	// (0x0004e9e2) main_mp2_pane_t1

0x73ba,	// (0x0004e9f9) main_mp2_pane_t2_ParamLimits

0x73ba,	// (0x0004e9f9) main_mp2_pane_t2

0x73cc,	// (0x0004ea0b) main_mp2_pane_t3_ParamLimits

0x73cc,	// (0x0004ea0b) main_mp2_pane_t3

0x0002,

0xf46a,	// (0x00056aa9) main_mp2_pane_t_ParamLimits

0xf46a,	// (0x00056aa9) main_mp2_pane_t

0xdbc6,	// (0x00055205) pec_content_pane_ParamLimits

0xdbc6,	// (0x00055205) pec_content_pane

0xd184,	// (0x000547c3) scroll_pane_cp015

0xdbd8,	// (0x00055217) pec_attribute_pane_ParamLimits

0xdbd8,	// (0x00055217) pec_attribute_pane

0x73de,	// (0x0004ea1d) pec_content_pane_g1_ParamLimits

0x73de,	// (0x0004ea1d) pec_content_pane_g1

0xdbe8,	// (0x00055227) pec_content_pane_t1_ParamLimits

0xdbe8,	// (0x00055227) pec_content_pane_t1

0xdbfa,	// (0x00055239) pec_content_pane_t2_ParamLimits

0xdbfa,	// (0x00055239) pec_content_pane_t2

0x0001,

0xf471,	// (0x00056ab0) pec_content_pane_t_ParamLimits

0xf471,	// (0x00056ab0) pec_content_pane_t

0x73ea,	// (0x0004ea29) list_single_graphic_pane_cp01_ParamLimits

0x73ea,	// (0x0004ea29) list_single_graphic_pane_cp01

0xcd3a,	// (0x00054379) bg_popup_sub_pane_cp04

0xdc0c,	// (0x0005524b) popup_mup_playback_window_g1

0xdc18,	// (0x00055257) popup_mup_playback_window_t1

0xdc2d,	// (0x0005526c) popup_mup_playback_window_t2

0x0001,

0xf476,	// (0x00056ab5) popup_mup_playback_window_t

0xdc64,	// (0x000552a3) main_image_pane_g1_ParamLimits

0xdc64,	// (0x000552a3) main_image_pane_g1

0xdca7,	// (0x000552e6) scroll_pane_cp018_ParamLimits

0xdca7,	// (0x000552e6) scroll_pane_cp018

0xdcbf,	// (0x000552fe) scroll_pane_cp016_ParamLimits

0xdcbf,	// (0x000552fe) scroll_pane_cp016

0x7484,	// (0x0004eac3) smil2_image_pane_ParamLimits

0x7484,	// (0x0004eac3) smil2_image_pane

0x74b4,	// (0x0004eaf3) smil2_root_pane_ParamLimits

0x74b4,	// (0x0004eaf3) smil2_root_pane

0x74e0,	// (0x0004eb1f) smil2_text_pane_ParamLimits

0x74e0,	// (0x0004eb1f) smil2_text_pane

0x4d94,	// (0x0004c3d3) bg_list_pane_cp06

0xdcfb,	// (0x0005533a) grid_radio_pane

0x4d94,	// (0x0004c3d3) bg_popup_window_pane_cp06

0xdd03,	// (0x00055342) main_fmradio_pane_t1

0xeccb,	// (0x0005630a) heading_pane_cp04

0xdd11,	// (0x00055350) main_fmradio_pane_t2

0xecd3,	// (0x00056312) popup_cale_lunar_info_window_g1

0xdd1f,	// (0x0005535e) main_fmradio_pane_t3

0xecdb,	// (0x0005631a) popup_cale_lunar_info_window_g2

0xdd2d,	// (0x0005536c) main_fmradio_pane_t4

0x0001,

0xdd3b,	// (0x0005537a) main_fmradio_pane_t5

0x0004,

0xf569,	// (0x00056ba8) popup_cale_lunar_info_window_g

0xf48b,	// (0x00056aca) main_fmradio_pane_t

0xdd49,	// (0x00055388) wait_bar_pane_cp03

0xdd51,	// (0x00055390) cell_fmradio_pane_ParamLimits

0xdd51,	// (0x00055390) cell_fmradio_pane

0xdbb8,	// (0x000551f7) cell_fmradio_pane_g1_ParamLimits

0xdbb8,	// (0x000551f7) cell_fmradio_pane_g1

0x4d94,	// (0x0004c3d3) grid_highlight_pane_cp011

0xdd64,	// (0x000553a3) poc_content_pane_ParamLimits

0xdd64,	// (0x000553a3) poc_content_pane

0xdd76,	// (0x000553b5) scroll_pane_cp019

0x7520,	// (0x0004eb5f) popup_call_poc_act_window_ParamLimits

0x7520,	// (0x0004eb5f) popup_call_poc_act_window

0x752d,	// (0x0004eb6c) popup_call_poc_inact_window_ParamLimits

0x752d,	// (0x0004eb6c) popup_call_poc_inact_window

0xf52d,	// (0x00056b6c) bg_popup_call_poc_act_pane_g

0xec8b,	// (0x000562ca) bg_popup_call_poc_inact_pane_g1

0xec93,	// (0x000562d2) bg_popup_call_poc_inact_pane_g2

0xdd7e,	// (0x000553bd) popup_call_poc_act_window_g2

0xec9b,	// (0x000562da) bg_popup_call_poc_inact_pane_g3

0xec1b,	// (0x0005625a) bg_popup_call_poc_inact_pane_g4

0xeca3,	// (0x000562e2) bg_popup_call_poc_inact_pane_g5

0xdd86,	// (0x000553c5) popup_call_poc_act_window_t1_ParamLimits

0xdd86,	// (0x000553c5) popup_call_poc_act_window_t1

0xddae,	// (0x000553ed) popup_call_poc_act_window_t2_ParamLimits

0xddae,	// (0x000553ed) popup_call_poc_act_window_t2

0xddd6,	// (0x00055415) popup_call_poc_act_window_t3_ParamLimits

0xddd6,	// (0x00055415) popup_call_poc_act_window_t3

0xddfe,	// (0x0005543d) popup_call_poc_act_window_t4_ParamLimits

0xddfe,	// (0x0005543d) popup_call_poc_act_window_t4

0x0003,

0xf496,	// (0x00056ad5) popup_call_poc_act_window_t_ParamLimits

0xf496,	// (0x00056ad5) popup_call_poc_act_window_t

0xecab,	// (0x000562ea) bg_popup_call_poc_inact_pane_g6

0xecb3,	// (0x000562f2) bg_popup_call_poc_inact_pane_g7

0xecbb,	// (0x000562fa) bg_popup_call_poc_inact_pane_g8

0xde10,	// (0x0005544f) popup_call_poc_inact_window_g2

0xecc3,	// (0x00056302) bg_popup_call_poc_inact_pane_g9

0x0008,

0xf544,	// (0x00056b83) bg_popup_call_poc_inact_pane_g

0xde18,	// (0x00055457) popup_call_poc_inact_window_t1_ParamLimits

0xde18,	// (0x00055457) popup_call_poc_inact_window_t1

0xde2d,	// (0x0005546c) popup_call_poc_inact_window_t2_ParamLimits

0xde2d,	// (0x0005546c) popup_call_poc_inact_window_t2

0xde42,	// (0x00055481) popup_call_poc_inact_window_t3_ParamLimits

0xde42,	// (0x00055481) popup_call_poc_inact_window_t3

0x0002,

0xf49f,	// (0x00056ade) popup_call_poc_inact_window_t_ParamLimits

0xf49f,	// (0x00056ade) popup_call_poc_inact_window_t

0xed7d,	// (0x000563bc) context_pane_ParamLimits

0x7bc4,	// (0x0004f203) signal_pane_ParamLimits

0xcfd9,	// (0x00054618) main_call2_pane

0x7b37,	// (0x0004f176) popup_phob_thumbnail2_window_ParamLimits

0x7b37,	// (0x0004f176) popup_phob_thumbnail2_window

0x71fb,	// (0x0004e83a) aid_hotspot_pointer_arrow_pane

0x7203,	// (0x0004e842) aid_hotspot_pointer_hand_pane

0x7878,	// (0x0004eeb7) phob_pre_status_pane_g5

0x4ee4,	// (0x0004c523) cams_zoom_pane_ParamLimits

0x4ee4,	// (0x0004c523) image_vga_pane_ParamLimits

0xcdc3,	// (0x00054402) main_camera_pane_g1_ParamLimits

0xcdc3,	// (0x00054402) main_camera_pane_g2_ParamLimits

0xcdc3,	// (0x00054402) main_camera_pane_g3_ParamLimits

0xcdc3,	// (0x00054402) main_camera_pane_g4_ParamLimits

0xcdc3,	// (0x00054402) main_camera_pane_g5_ParamLimits

0xcdc3,	// (0x00054402) main_camera_pane_g6_ParamLimits

0xcdc3,	// (0x00054402) main_camera_pane_g7_ParamLimits

0xf1c5,	// (0x00056804) main_camera_pane_g_ParamLimits

0xcfe1,	// (0x00054620) main_camera_pane_t1_ParamLimits

0xcfe1,	// (0x00054620) main_camera_pane_t2_ParamLimits

0xf1d6,	// (0x00056815) main_camera_pane_t_ParamLimits

0xcd3a,	// (0x00054379) bg_popup_preview_window_pane_cp01_ParamLimits

0xcd3a,	// (0x00054379) bg_popup_preview_window_pane_cp01

0xde57,	// (0x00055496) popup_phob_thumbnail2_window_g1_ParamLimits

0xde57,	// (0x00055496) popup_phob_thumbnail2_window_g1

0x4d94,	// (0x0004c3d3) call2_cli_visual_pane

0x7549,	// (0x0004eb88) popup_call2_audio_conf_window_ParamLimits

0x7549,	// (0x0004eb88) popup_call2_audio_conf_window

0x755e,	// (0x0004eb9d) popup_call2_audio_first_window_ParamLimits

0x755e,	// (0x0004eb9d) popup_call2_audio_first_window

0x75fc,	// (0x0004ec3b) popup_call2_audio_in_window_ParamLimits

0x75fc,	// (0x0004ec3b) popup_call2_audio_in_window

0x763e,	// (0x0004ec7d) popup_call2_audio_out_window_ParamLimits

0x763e,	// (0x0004ec7d) popup_call2_audio_out_window

0x76a0,	// (0x0004ecdf) popup_call2_audio_second_window_ParamLimits

0x76a0,	// (0x0004ecdf) popup_call2_audio_second_window

0x76fe,	// (0x0004ed3d) popup_call2_audio_wait_window_ParamLimits

0x76fe,	// (0x0004ed3d) popup_call2_audio_wait_window

0x4d94,	// (0x0004c3d3) bg_popup_call2_act_pane_cp03

0xcd1c,	// (0x0005435b) list_conf_pane_cp

0xde63,	// (0x000554a2) popup_call2_audio_conf_window_t1

0xde71,	// (0x000554b0) list_single_graphic_popup_conf2_pane_ParamLimits

0xde71,	// (0x000554b0) list_single_graphic_popup_conf2_pane

0xd743,	// (0x00054d82) list_highlight_pane_cp04

0xde84,	// (0x000554c3) list_single_graphic_popup_conf2_pane_g1

0xd754,	// (0x00054d93) list_single_graphic_popup_conf2_pane_g2

0x0001,

0xf4a6,	// (0x00056ae5) list_single_graphic_popup_conf2_pane_g

0xde8e,	// (0x000554cd) list_single_graphic_popup_conf2_pane_t1

0xde9c,	// (0x000554db) bg_popup_call2_act_pane_cp01_ParamLimits

0xde9c,	// (0x000554db) bg_popup_call2_act_pane_cp01

0xdf26,	// (0x00055565) call_type_pane_cp05_ParamLimits

0xdf26,	// (0x00055565) call_type_pane_cp05

0xdf7a,	// (0x000555b9) popup_call2_audio_second_window_g1_ParamLimits

0xdf7a,	// (0x000555b9) popup_call2_audio_second_window_g1

0xdfce,	// (0x0005560d) popup_call2_audio_second_window_g2_ParamLimits

0xdfce,	// (0x0005560d) popup_call2_audio_second_window_g2

0x0002,

0xf4ab,	// (0x00056aea) popup_call2_audio_second_window_g_ParamLimits

0xf4ab,	// (0x00056aea) popup_call2_audio_second_window_g

0xe033,	// (0x00055672) popup_call2_audio_second_window_t1_ParamLimits

0xe033,	// (0x00055672) popup_call2_audio_second_window_t1

0xe0ee,	// (0x0005572d) popup_call2_audio_second_window_t2_ParamLimits

0xe0ee,	// (0x0005572d) popup_call2_audio_second_window_t2

0xe141,	// (0x00055780) popup_call2_audio_second_window_t3_ParamLimits

0xe141,	// (0x00055780) popup_call2_audio_second_window_t3

0x0003,

0xf4b2,	// (0x00056af1) popup_call2_audio_second_window_t_ParamLimits

0xf4b2,	// (0x00056af1) popup_call2_audio_second_window_t

0x4d94,	// (0x0004c3d3) bg_popup_call2_in_pane_cp02

0x4d9e,	// (0x0004c3dd) call_type_pane_cp04

0x773d,	// (0x0004ed7c) popup_call2_audio_wait_window_g1

0x7745,	// (0x0004ed84) popup_call2_audio_wait_window_g2

0x0001,

0xf4bb,	// (0x00056afa) popup_call2_audio_wait_window_g

0x4db6,	// (0x0004c3f5) popup_call2_audio_wait_window_t3

0xe234,	// (0x00055873) bg_popup_call2_act_pane_ParamLimits

0xe234,	// (0x00055873) bg_popup_call2_act_pane

0xe2f4,	// (0x00055933) call_type_pane_cp03_ParamLimits

0xe2f4,	// (0x00055933) call_type_pane_cp03

0xe358,	// (0x00055997) popup_call2_audio_first_window_g1_ParamLimits

0xe358,	// (0x00055997) popup_call2_audio_first_window_g1

0xe3c8,	// (0x00055a07) popup_call2_audio_first_window_g2_ParamLimits

0xe3c8,	// (0x00055a07) popup_call2_audio_first_window_g2

0xd668,	// (0x00054ca7) popup_call2_audio_first_window_g3_ParamLimits

0xd668,	// (0x00054ca7) popup_call2_audio_first_window_g3

0x0004,

0xf4c0,	// (0x00056aff) popup_call2_audio_first_window_g_ParamLimits

0xf4c0,	// (0x00056aff) popup_call2_audio_first_window_g

0xe4a6,	// (0x00055ae5) popup_call2_audio_first_window_t1_ParamLimits

0xe4a6,	// (0x00055ae5) popup_call2_audio_first_window_t1

0xe5a9,	// (0x00055be8) popup_call2_audio_first_window_t4_ParamLimits

0xe5a9,	// (0x00055be8) popup_call2_audio_first_window_t4

0xe68c,	// (0x00055ccb) popup_call2_audio_first_window_t5_ParamLimits

0xe68c,	// (0x00055ccb) popup_call2_audio_first_window_t5

0x0003,

0xf4cb,	// (0x00056b0a) popup_call2_audio_first_window_t_ParamLimits

0xf4cb,	// (0x00056b0a) popup_call2_audio_first_window_t

0xcd32,	// (0x00054371) bg_popup_call2_act_pane_g1

0xece3,	// (0x00056322) popup_cale_lunar_info_window_t1

0xecf1,	// (0x00056330) popup_cale_lunar_info_window_t2

0xecff,	// (0x0005633e) popup_cale_lunar_info_window_t3

0x4d94,	// (0x0004c3d3) bg_popup_call2_bubble_pane

0xe78d,	// (0x00055dcc) bg_popup_call2_in_pane_cp01_ParamLimits

0xe78d,	// (0x00055dcc) bg_popup_call2_in_pane_cp01

0x4a4c,	// (0x0004c08b) call_type_pane_cp02

0x774d,	// (0x0004ed8c) popup_call2_audio_out_window_g1_ParamLimits

0x774d,	// (0x0004ed8c) popup_call2_audio_out_window_g1

0xe7d5,	// (0x00055e14) popup_call2_audio_out_window_g2_ParamLimits

0xe7d5,	// (0x00055e14) popup_call2_audio_out_window_g2

0x7779,	// (0x0004edb8) popup_call2_audio_out_window_g3_ParamLimits

0x7779,	// (0x0004edb8) popup_call2_audio_out_window_g3

0x0003,

0xf4d4,	// (0x00056b13) popup_call2_audio_out_window_g_ParamLimits

0xf4d4,	// (0x00056b13) popup_call2_audio_out_window_g

0xe80c,	// (0x00055e4b) popup_call2_audio_out_window_t1_ParamLimits

0xe80c,	// (0x00055e4b) popup_call2_audio_out_window_t1

0xe86b,	// (0x00055eaa) popup_call2_audio_out_window_t2_ParamLimits

0xe86b,	// (0x00055eaa) popup_call2_audio_out_window_t2

0xe8bf,	// (0x00055efe) popup_call2_audio_out_window_t3_ParamLimits

0xe8bf,	// (0x00055efe) popup_call2_audio_out_window_t3

0xe8d5,	// (0x00055f14) popup_call2_audio_out_window_t4_ParamLimits

0xe8d5,	// (0x00055f14) popup_call2_audio_out_window_t4

0xe8eb,	// (0x00055f2a) popup_call2_audio_out_window_t5_ParamLimits

0xe8eb,	// (0x00055f2a) popup_call2_audio_out_window_t5

0x0005,

0xf4dd,	// (0x00056b1c) popup_call2_audio_out_window_t_ParamLimits

0xf4dd,	// (0x00056b1c) popup_call2_audio_out_window_t

0xe94f,	// (0x00055f8e) bg_popup_call2_in_pane_ParamLimits

0xe94f,	// (0x00055f8e) bg_popup_call2_in_pane

0xe9ab,	// (0x00055fea) popup_call2_audio_in_window_g1_ParamLimits

0xe9ab,	// (0x00055fea) popup_call2_audio_in_window_g1

0xe9e3,	// (0x00056022) popup_call2_audio_in_window_g2_ParamLimits

0xe9e3,	// (0x00056022) popup_call2_audio_in_window_g2

0xea1b,	// (0x0005605a) popup_call2_audio_in_window_g3_ParamLimits

0xea1b,	// (0x0005605a) popup_call2_audio_in_window_g3

0x0003,

0xf4ea,	// (0x00056b29) popup_call2_audio_in_window_g_ParamLimits

0xf4ea,	// (0x00056b29) popup_call2_audio_in_window_g

0xea73,	// (0x000560b2) popup_call2_audio_in_window_t1_ParamLimits

0xea73,	// (0x000560b2) popup_call2_audio_in_window_t1

0xeaf3,	// (0x00056132) popup_call2_audio_in_window_t2_ParamLimits

0xeaf3,	// (0x00056132) popup_call2_audio_in_window_t2

0xeb73,	// (0x000561b2) popup_call2_audio_in_window_t3_ParamLimits

0xeb73,	// (0x000561b2) popup_call2_audio_in_window_t3

0xeb8d,	// (0x000561cc) popup_call2_audio_in_window_t4_ParamLimits

0xeb8d,	// (0x000561cc) popup_call2_audio_in_window_t4

0xeb9f,	// (0x000561de) popup_call2_audio_in_window_t5_ParamLimits

0xeb9f,	// (0x000561de) popup_call2_audio_in_window_t5

0xebb1,	// (0x000561f0) popup_call2_audio_in_window_t6_ParamLimits

0xebb1,	// (0x000561f0) popup_call2_audio_in_window_t6

0x0005,

0xf4f3,	// (0x00056b32) popup_call2_audio_in_window_t_ParamLimits

0xf4f3,	// (0x00056b32) popup_call2_audio_in_window_t

0xcd32,	// (0x00054371) bg_popup_call2_in_pane_g1

0xed0d,	// (0x0005634c) popup_cale_lunar_info_window_t4

0x0003,

0xf56e,	// (0x00056bad) popup_cale_lunar_info_window_t

0xcd3a,	// (0x00054379) bg_popup_call2_rect_pane_ParamLimits

0xcd3a,	// (0x00054379) bg_popup_call2_rect_pane

0x4d94,	// (0x0004c3d3) call2_cli_visual_graphic_pane

0x4d94,	// (0x0004c3d3) call2_cli_visual_text_pane

0x7c00,	// (0x0004f23f) smil_status_volume_pane_g3

0x0002,

0xcd52,	// (0x00054391) call2_cli_visual_graphic_pane_g1

0xcd52,	// (0x00054391) call2_cli_visual_graphic_pane_g2

0xcd52,	// (0x00054391) call2_cli_visual_graphic_pane_g3

0x0002,

0xf500,	// (0x00056b3f) call2_cli_visual_graphic_pane_g

0xebc3,	// (0x00056202) bg_popup_call2_rect_pane_g1

0xcefe,	// (0x0005453d) bg_popup_call2_rect_pane_g2

0xebcb,	// (0x0005620a) bg_popup_call2_rect_pane_g3

0xebd3,	// (0x00056212) bg_popup_call2_rect_pane_g4

0xebdb,	// (0x0005621a) bg_popup_call2_rect_pane_g5

0xebe3,	// (0x00056222) bg_popup_call2_rect_pane_g6

0xebeb,	// (0x0005622a) bg_popup_call2_rect_pane_g7

0xebf3,	// (0x00056232) bg_popup_call2_rect_pane_g8

0xebfb,	// (0x0005623a) bg_popup_call2_rect_pane_g9

0x0008,

0xf507,	// (0x00056b46) bg_popup_call2_rect_pane_g

0xec03,	// (0x00056242) bg_popup_call2_bubble_pane_g1

0xec0b,	// (0x0005624a) bg_popup_call2_bubble_pane_g2

0xec13,	// (0x00056252) bg_popup_call2_bubble_pane_g3

0xec1b,	// (0x0005625a) bg_popup_call2_bubble_pane_g4

0xec23,	// (0x00056262) bg_popup_call2_bubble_pane_g5

0xec2b,	// (0x0005626a) bg_popup_call2_bubble_pane_g6

0xec33,	// (0x00056272) bg_popup_call2_bubble_pane_g7

0xec3b,	// (0x0005627a) bg_popup_call2_bubble_pane_g8

0xec43,	// (0x00056282) bg_popup_call2_bubble_pane_g9

0x0008,

0xf51a,	// (0x00056b59) bg_popup_call2_bubble_pane_g

0x52dd,	// (0x0004c91c) aid_cale_week_size_cell_pane

0xcd3a,	// (0x00054379) aid_cams_cif_uncrop_pane_ParamLimits

0xcd3a,	// (0x00054379) aid_cams_cif_uncrop_pane

0x58d6,	// (0x0004cf15) aid_cams_size_cell_ParamLimits

0x58d6,	// (0x0004cf15) aid_cams_size_cell

0x58e2,	// (0x0004cf21) grid_cams_pane_ParamLimits

0x58f0,	// (0x0004cf2f) linegrid_cams_pane_ParamLimits

0x59c7,	// (0x0004d006) call_video_pane_t1

0x59e8,	// (0x0004d027) call_video_pane_t2

0x0001,

0xf222,	// (0x00056861) call_video_pane_t

0x5f36,	// (0x0004d575) aid_cale_month_size_cell_pane_ParamLimits

0x5f36,	// (0x0004d575) aid_cale_month_size_cell_pane

0xf5b2,	// (0x00056bf1) smil_status_volume_pane_g

0x7c0d,	// (0x0004f24c) volume_smil_pane_ParamLimits

0x45fe,	// (0x0004bc3d) aid_popup2_width_pane

0x51c6,	// (0x0004c805) cell_qdial_pane_g4_ParamLimits

0x51c6,	// (0x0004c805) cell_qdial_pane_g4

0x6e60,	// (0x0004e49f) aid_blid_cardinal_pane_ParamLimits

0x6e70,	// (0x0004e4af) aid_blid_destination_pane_ParamLimits

0x6e70,	// (0x0004e4af) aid_blid_destination_pane

0xcd3a,	// (0x00054379) bg_popup_call_poc_act_pane_ParamLimits

0xcd3a,	// (0x00054379) bg_popup_call_poc_act_pane

0xcd3a,	// (0x00054379) bg_popup_call_poc_inact_pane_ParamLimits

0xcd3a,	// (0x00054379) bg_popup_call_poc_inact_pane

0xec4b,	// (0x0005628a) bg_popup_call_poc_act_pane_g1

0xec53,	// (0x00056292) bg_popup_call_poc_act_pane_g2

0xec5b,	// (0x0005629a) bg_popup_call_poc_act_pane_g3

0xec1b,	// (0x0005625a) bg_popup_call_poc_act_pane_g4

0xec23,	// (0x00056262) bg_popup_call_poc_act_pane_g5

0xec63,	// (0x000562a2) bg_popup_call_poc_act_pane_g6

0xec33,	// (0x00056272) bg_popup_call_poc_act_pane_g7

0xec6b,	// (0x000562aa) bg_popup_call_poc_act_pane_g8

0x4d94,	// (0x0004c3d3) main_usb_pane

0x7a6a,	// (0x0004f0a9) popup_cale_lunar_info_window

0x5d05,	// (0x0004d344) im_reading_pane_t1_ParamLimits

0xd0dc,	// (0x0005471b) list_im_pane_ParamLimits

0xd0ed,	// (0x0005472c) scroll_pane_cp07_ParamLimits

0x4d94,	// (0x0004c3d3) grid_highlight_pane_cp012

0xcd3a,	// (0x00054379) mup_scale_pane_ParamLimits

0xd668,	// (0x00054ca7) main_usb_pane_g1_ParamLimits

0xd668,	// (0x00054ca7) main_usb_pane_g1

0x77e0,	// (0x0004ee1f) main_usb_pane_g2_ParamLimits

0x77e0,	// (0x0004ee1f) main_usb_pane_g2

0x0001,

0xf557,	// (0x00056b96) main_usb_pane_g_ParamLimits

0xf557,	// (0x00056b96) main_usb_pane_g

0x77ec,	// (0x0004ee2b) main_usb_pane_t1_ParamLimits

0x77ec,	// (0x0004ee2b) main_usb_pane_t1

0x77fe,	// (0x0004ee3d) main_usb_pane_t2_ParamLimits

0x77fe,	// (0x0004ee3d) main_usb_pane_t2

0x7810,	// (0x0004ee4f) main_usb_pane_t3_ParamLimits

0x7810,	// (0x0004ee4f) main_usb_pane_t3

0x7822,	// (0x0004ee61) main_usb_pane_t4_ParamLimits

0x7822,	// (0x0004ee61) main_usb_pane_t4

0x7834,	// (0x0004ee73) main_usb_pane_t5_ParamLimits

0x7834,	// (0x0004ee73) main_usb_pane_t5

0x7846,	// (0x0004ee85) main_usb_pane_t6_ParamLimits

0x7846,	// (0x0004ee85) main_usb_pane_t6

0x0005,

0xf55c,	// (0x00056b9b) main_usb_pane_t_ParamLimits

0x6e06,	// (0x0004e445) aid_text_placing

0x6e12,	// (0x0004e451) main_location2_pane_t1_ParamLimits

0x6e26,	// (0x0004e465) main_location2_pane_t2_ParamLimits

0x6e3a,	// (0x0004e479) main_location2_pane_t3_ParamLimits

0x6e4e,	// (0x0004e48d) main_location2_pane_t4_ParamLimits

0x6e4e,	// (0x0004e48d) main_location2_pane_t4

0xf363,	// (0x000569a2) main_location2_pane_t_ParamLimits

0xcd76,	// (0x000543b5) find_pinb_pane_g2_ParamLimits

0xcd76,	// (0x000543b5) find_pinb_pane_g2

0x0001,

0xf0da,	// (0x00056719) find_pinb_pane_g_ParamLimits

0xf0da,	// (0x00056719) find_pinb_pane_g

0xcd82,	// (0x000543c1) find_pinb_pane_t1_ParamLimits

0xcd94,	// (0x000543d3) find_pinb_pane_t2_ParamLimits

0xf0df,	// (0x0005671e) find_pinb_pane_t_ParamLimits

0x4d94,	// (0x0004c3d3) main_call3_pane

0x64f9,	// (0x0004db38) cale_month_day_heading_pane_t1_ParamLimits

0x657f,	// (0x0004dbbe) cale_month_day_heading_pane_t2_ParamLimits

0x65f8,	// (0x0004dc37) cale_month_day_heading_pane_t3_ParamLimits

0x6671,	// (0x0004dcb0) cale_month_day_heading_pane_t4_ParamLimits

0x66ea,	// (0x0004dd29) cale_month_day_heading_pane_t5_ParamLimits

0x6763,	// (0x0004dda2) cale_month_day_heading_pane_t6_ParamLimits

0x67dc,	// (0x0004de1b) cale_month_day_heading_pane_t7_ParamLimits

0xf25a,	// (0x00056899) cale_month_day_heading_pane_t_ParamLimits

0xd337,	// (0x00054976) smil_status_volume_pane

0x7337,	// (0x0004e976) postcard_address_pane_ParamLimits

0x7337,	// (0x0004e976) postcard_address_pane

0x7343,	// (0x0004e982) postcard_message_pane_ParamLimits

0x7343,	// (0x0004e982) postcard_message_pane

0x77a5,	// (0x0004ede4) call2_cli_visual_pane_t1_ParamLimits

0x77a5,	// (0x0004ede4) call2_cli_visual_pane_t1

0xee30,	// (0x0005646f) postcard_message_pane_t1_ParamLimits

0xee30,	// (0x0005646f) postcard_message_pane_t1

0xee18,	// (0x00056457) postcard_address_pane_t1_ParamLimits

0xee18,	// (0x00056457) postcard_address_pane_t1

0x7d3e,	// (0x0004f37d) popup_call3_audio_in_window_ParamLimits

0x7d3e,	// (0x0004f37d) popup_call3_audio_in_window

0x7c22,	// (0x0004f261) bg_popup_call3_in_pane_ParamLimits

0x7c22,	// (0x0004f261) bg_popup_call3_in_pane

0x7c84,	// (0x0004f2c3) popup_call3_audio_in_window_g1_ParamLimits

0x7c84,	// (0x0004f2c3) popup_call3_audio_in_window_g1

0x7c9c,	// (0x0004f2db) popup_call3_audio_in_window_g2_ParamLimits

0x7c9c,	// (0x0004f2db) popup_call3_audio_in_window_g2

0x7cb4,	// (0x0004f2f3) popup_call3_audio_in_window_g3_ParamLimits

0x7cb4,	// (0x0004f2f3) popup_call3_audio_in_window_g3

0x0003,

0xf5b9,	// (0x00056bf8) popup_call3_audio_in_window_g_ParamLimits

0xf5b9,	// (0x00056bf8) popup_call3_audio_in_window_g

0x7cdc,	// (0x0004f31b) popup_call3_audio_in_window_t1_ParamLimits

0x7cdc,	// (0x0004f31b) popup_call3_audio_in_window_t1

0x7d04,	// (0x0004f343) popup_call3_audio_in_window_t2_ParamLimits

0x7d04,	// (0x0004f343) popup_call3_audio_in_window_t2

0x7d2c,	// (0x0004f36b) popup_call3_audio_in_window_t3_ParamLimits

0x7d2c,	// (0x0004f36b) popup_call3_audio_in_window_t3

0x0002,

0xf5c2,	// (0x00056c01) popup_call3_audio_in_window_t_ParamLimits

0xf5c2,	// (0x00056c01) popup_call3_audio_in_window_t

0xcfd9,	// (0x00054618) bg_popup_call3_rect_pane

0xebc3,	// (0x00056202) bg_popup_call3_rect_pane_g1

0xcefe,	// (0x0005453d) bg_popup_call3_rect_pane_g2

0xebcb,	// (0x0005620a) bg_popup_call3_rect_pane_g3

0xebd3,	// (0x00056212) bg_popup_call3_rect_pane_g4

0xebdb,	// (0x0005621a) bg_popup_call3_rect_pane_g5

0xebe3,	// (0x00056222) bg_popup_call3_rect_pane_g6

0xebeb,	// (0x0005622a) bg_popup_call3_rect_pane_g7

0x45ec,	// (0x0004bc2b) mup_visualizer_osc_pane

0x45ec,	// (0x0004bc2b) mup_visualizer_spec_pane

0x7c42,	// (0x0004f281) call3_video_qcif_pane_ParamLimits

0x7c42,	// (0x0004f281) call3_video_qcif_pane

0x7c54,	// (0x0004f293) call3_video_qcif_uncrop_pane_ParamLimits

0x7c54,	// (0x0004f293) call3_video_qcif_uncrop_pane

0x7c62,	// (0x0004f2a1) call3_video_subqcif_pane_ParamLimits

0x7c62,	// (0x0004f2a1) call3_video_subqcif_pane

0x7c74,	// (0x0004f2b3) call3_video_subqcif_uncrop_pane_ParamLimits

0x7c74,	// (0x0004f2b3) call3_video_subqcif_uncrop_pane

0x7ccc,	// (0x0004f30b) popup_call3_audio_in_window_g4_ParamLimits

0x7ccc,	// (0x0004f30b) popup_call3_audio_in_window_g4

0x45ec,	// (0x0004bc2b) mup_spec_half_pane

0x45ec,	// (0x0004bc2b) mup_spec_half_pane_cp

0x45ec,	// (0x0004bc2b) mup_osc_middle_pane

0xd00f,	// (0x0005464e) mup_visualizer_osc_pane_g1

0xedcb,	// (0x0005640a) mup_spec_bar_pane_ParamLimits

0xedcb,	// (0x0005640a) mup_spec_bar_pane

0xd00f,	// (0x0005464e) mup_spec_bar_pane_g1

0xd00f,	// (0x0005464e) mup_spec_bar_pane_g2

0x0001,

0xf3dd,	// (0x00056a1c) mup_spec_bar_pane_g

0x52dd,	// (0x0004c91c) aid_cale_week_size_cell_pane_ParamLimits

0x52f2,	// (0x0004c931) bg_cale_heading_pane_ParamLimits

0xcf3b,	// (0x0005457a) bg_cale_pane_cp01_ParamLimits

0x5314,	// (0x0004c953) cale_week_corner_pane_ParamLimits

0x532e,	// (0x0004c96d) cale_week_day_heading_pane_ParamLimits

0x5350,	// (0x0004c98f) cale_week_scroll_pane_g1_ParamLimits

0x536d,	// (0x0004c9ac) cale_week_scroll_pane_g2_ParamLimits

0x5380,	// (0x0004c9bf) cale_week_scroll_pane_g3_ParamLimits

0x5393,	// (0x0004c9d2) cale_week_scroll_pane_g4_ParamLimits

0x53a6,	// (0x0004c9e5) cale_week_scroll_pane_g5_ParamLimits

0x53b9,	// (0x0004c9f8) cale_week_scroll_pane_g6_ParamLimits

0x53cc,	// (0x0004ca0b) cale_week_scroll_pane_g7_ParamLimits

0x53e1,	// (0x0004ca20) cale_week_scroll_pane_g8_ParamLimits

0x53f6,	// (0x0004ca35) cale_week_scroll_pane_g9_ParamLimits

0x5409,	// (0x0004ca48) cale_week_scroll_pane_g10_ParamLimits

0x541c,	// (0x0004ca5b) cale_week_scroll_pane_g11_ParamLimits

0x542f,	// (0x0004ca6e) cale_week_scroll_pane_g12_ParamLimits

0x5446,	// (0x0004ca85) cale_week_scroll_pane_g13_ParamLimits

0x5461,	// (0x0004caa0) cale_week_scroll_pane_g14_ParamLimits

0x547c,	// (0x0004cabb) cale_week_scroll_pane_g15_ParamLimits

0xf16b,	// (0x000567aa) cale_week_scroll_pane_g_ParamLimits

0x54ac,	// (0x0004caeb) cale_week_time_pane_ParamLimits

0x54c1,	// (0x0004cb00) grid_cale_week_pane_ParamLimits

0xcf58,	// (0x00054597) listscroll_cale_week_pane_t1

0xcf6a,	// (0x000545a9) scroll_pane_cp08_ParamLimits

0x5faa,	// (0x0004d5e9) cale_month_corner_pane_ParamLimits

0xd30d,	// (0x0005494c) cale_month_pane_t1

0x6478,	// (0x0004dab7) cale_month_week_pane_ParamLimits

0xd668,	// (0x00054ca7) popup_call_status_window_g1_ParamLimits

0x6c33,	// (0x0004e272) popup_call_status_window_g2_ParamLimits

0x6c3f,	// (0x0004e27e) popup_call_status_window_g3_ParamLimits

0xf2ea,	// (0x00056929) popup_call_status_window_g_ParamLimits

0xd6cf,	// (0x00054d0e) aid_call2_pane

0x71ef,	// (0x0004e82e) msg_header_pane_g1

0x7337,	// (0x0004e976) postcard_address2_pane_ParamLimits

0x7337,	// (0x0004e976) postcard_address2_pane

0x7343,	// (0x0004e982) postcard_message2_pane_ParamLimits

0x7343,	// (0x0004e982) postcard_message2_pane

0x7bd2,	// (0x0004f211) message2_row_pane_ParamLimits

0x7bd2,	// (0x0004f211) message2_row_pane

0x7bed,	// (0x0004f22c) address2_row_pane_ParamLimits

0x7bed,	// (0x0004f22c) address2_row_pane

0xed98,	// (0x000563d7) postcard_message2_row_pane_g1

0xeda0,	// (0x000563df) postcard_message2_row_pane_t1

0xed98,	// (0x000563d7) address2_row_pane_g1

0xeda0,	// (0x000563df) address2_row_pane_t1

0x5746,	// (0x0004cd85) aid_size_cell_vorec

0x4d94,	// (0x0004c3d3) main_rss_pane

0xedae,	// (0x000563ed) rss_list_single_pane_ParamLimits

0xedae,	// (0x000563ed) rss_list_single_pane

0xedbc,	// (0x000563fb) rss_list_single_pane_t1

0xedbc,	// (0x000563fb) rss_list_single_pane_t2

0x0001,

0xf5ad,	// (0x00056bec) rss_list_single_pane_t

0x4d94,	// (0x0004c3d3) main_camera2_pane

0x4d94,	// (0x0004c3d3) main_video2_pane

0x48a6,	// (0x0004bee5) cams_zoom_pane_cp2_ParamLimits

0x48a6,	// (0x0004bee5) cams_zoom_pane_cp2

0x48a6,	// (0x0004bee5) image2_vga_pane_ParamLimits

0x48a6,	// (0x0004bee5) image2_vga_pane

0xd703,	// (0x00054d42) main_camera2_pane_g1_ParamLimits

0xd703,	// (0x00054d42) main_camera2_pane_g1

0xd703,	// (0x00054d42) main_camera2_pane_g2_ParamLimits

0xd703,	// (0x00054d42) main_camera2_pane_g2

0xd703,	// (0x00054d42) main_camera2_pane_g3_ParamLimits

0xd703,	// (0x00054d42) main_camera2_pane_g3

0xd703,	// (0x00054d42) main_camera2_pane_g4_ParamLimits

0xd703,	// (0x00054d42) main_camera2_pane_g4

0xd703,	// (0x00054d42) main_camera2_pane_g5_ParamLimits

0xd703,	// (0x00054d42) main_camera2_pane_g5

0xd703,	// (0x00054d42) main_camera2_pane_g6_ParamLimits

0xd703,	// (0x00054d42) main_camera2_pane_g6

0xd703,	// (0x00054d42) main_camera2_pane_g7_ParamLimits

0xd703,	// (0x00054d42) main_camera2_pane_g7

0xd703,	// (0x00054d42) main_camera2_pane_g8_ParamLimits

0xd703,	// (0x00054d42) main_camera2_pane_g8

0x0008,

0xf5c9,	// (0x00056c08) main_camera2_pane_g_ParamLimits

0xf5c9,	// (0x00056c08) main_camera2_pane_g

0x7d5b,	// (0x0004f39a) main_camera2_pane_t1_ParamLimits

0x7d5b,	// (0x0004f39a) main_camera2_pane_t1

0x7d5b,	// (0x0004f39a) main_camera2_pane_t2_ParamLimits

0x7d5b,	// (0x0004f39a) main_camera2_pane_t2

0x7d5b,	// (0x0004f39a) main_camera2_pane_t3_ParamLimits

0x7d5b,	// (0x0004f39a) main_camera2_pane_t3

0x7d5b,	// (0x0004f39a) main_camera2_pane_t4_ParamLimits

0x7d5b,	// (0x0004f39a) main_camera2_pane_t4

0x0006,

0xf5dc,	// (0x00056c1b) main_camera2_pane_t_ParamLimits

0xf5dc,	// (0x00056c1b) main_camera2_pane_t

0x7d83,	// (0x0004f3c2) cams_zoom_pane_cp4_ParamLimits

0x7d83,	// (0x0004f3c2) cams_zoom_pane_cp4

0x7a09,	// (0x0004f048) image2_cif_pane_ParamLimits

0x7a09,	// (0x0004f048) image2_cif_pane

0x48a6,	// (0x0004bee5) image2_subqcif_pane_ParamLimits

0x48a6,	// (0x0004bee5) image2_subqcif_pane

0x7d91,	// (0x0004f3d0) main_video2_pane_g1_ParamLimits

0x7d91,	// (0x0004f3d0) main_video2_pane_g1

0x7d91,	// (0x0004f3d0) main_video2_pane_g2_ParamLimits

0x7d91,	// (0x0004f3d0) main_video2_pane_g2

0x7d91,	// (0x0004f3d0) main_video2_pane_g3_ParamLimits

0x7d91,	// (0x0004f3d0) main_video2_pane_g3

0x7d91,	// (0x0004f3d0) main_video2_pane_g4_ParamLimits

0x7d91,	// (0x0004f3d0) main_video2_pane_g4

0x7d91,	// (0x0004f3d0) main_video2_pane_g5_ParamLimits

0x7d91,	// (0x0004f3d0) main_video2_pane_g5

0x7d91,	// (0x0004f3d0) main_video2_pane_g6_ParamLimits

0x7d91,	// (0x0004f3d0) main_video2_pane_g6

0x0005,

0xf5eb,	// (0x00056c2a) main_video2_pane_g_ParamLimits

0xf5eb,	// (0x00056c2a) main_video2_pane_g

0x7d9f,	// (0x0004f3de) main_video2_pane_t1_ParamLimits

0x7d9f,	// (0x0004f3de) main_video2_pane_t1

0x7d9f,	// (0x0004f3de) main_video2_pane_t2_ParamLimits

0x7d9f,	// (0x0004f3de) main_video2_pane_t2

0x7d9f,	// (0x0004f3de) main_video2_pane_t3_ParamLimits

0x7d9f,	// (0x0004f3de) main_video2_pane_t3

0x0002,

0xf5f8,	// (0x00056c37) main_video2_pane_t_ParamLimits

0xf5f8,	// (0x00056c37) main_video2_pane_t

0x78dc,	// (0x0004ef1b) call_muted_g2

0x0001,

0xf59f,	// (0x00056bde) call_muted_g

0x4d94,	// (0x0004c3d3) main_mup2_pane

0xcdd1,	// (0x00054410) main_mup2_pane_g1_ParamLimits

0xcdd1,	// (0x00054410) main_mup2_pane_g1

0xcdd1,	// (0x00054410) main_mup2_pane_g2_ParamLimits

0xcdd1,	// (0x00054410) main_mup2_pane_g2

0xf07b,	// (0x000566ba) main_mup_pane_g13_cp1

0x48c0,	// (0x0004beff) mup_volume_pane_cp1

0xcdd1,	// (0x00054410) main_mup2_pane_g4_ParamLimits

0xcdd1,	// (0x00054410) main_mup2_pane_g4

0xcdd1,	// (0x00054410) main_mup2_pane_g5_ParamLimits

0xcdd1,	// (0x00054410) main_mup2_pane_g5

0xcdd1,	// (0x00054410) main_mup2_pane_g6_ParamLimits

0xcdd1,	// (0x00054410) main_mup2_pane_g6

0xcdd1,	// (0x00054410) main_mup2_pane_g7_ParamLimits

0xcdd1,	// (0x00054410) main_mup2_pane_g7

0x0006,

0xf5ff,	// (0x00056c3e) main_mup2_pane_g_ParamLimits

0xf5ff,	// (0x00056c3e) main_mup2_pane_g

0xcddf,	// (0x0005441e) main_mup2_pane_t1_ParamLimits

0xcddf,	// (0x0005441e) main_mup2_pane_t1

0xcddf,	// (0x0005441e) main_mup2_pane_t2_ParamLimits

0xcddf,	// (0x0005441e) main_mup2_pane_t2

0xcddf,	// (0x0005441e) main_mup2_pane_t3_ParamLimits

0xcddf,	// (0x0005441e) main_mup2_pane_t3

0xcddf,	// (0x0005441e) main_mup2_pane_t4_ParamLimits

0xcddf,	// (0x0005441e) main_mup2_pane_t4

0xcddf,	// (0x0005441e) main_mup2_pane_t5_ParamLimits

0xcddf,	// (0x0005441e) main_mup2_pane_t5

0xcddf,	// (0x0005441e) main_mup2_pane_t6_ParamLimits

0xcddf,	// (0x0005441e) main_mup2_pane_t6

0x0005,

0xf60e,	// (0x00056c4d) main_mup2_pane_t_ParamLimits

0xf60e,	// (0x00056c4d) main_mup2_pane_t

0xdad3,	// (0x00055112) mup2_visualizer_pane_ParamLimits

0xdad3,	// (0x00055112) mup2_visualizer_pane

0xdad3,	// (0x00055112) mup_progress_pane_cp_ParamLimits

0xdad3,	// (0x00055112) mup_progress_pane_cp

0x7e66,	// (0x0004f4a5) mup_volume_pane_cp_ParamLimits

0x7e66,	// (0x0004f4a5) mup_volume_pane_cp

0xcdb5,	// (0x000543f4) mup2_visualizer_pane_g1_ParamLimits

0xcdb5,	// (0x000543f4) mup2_visualizer_pane_g1

0xcdc3,	// (0x00054402) mup2_visualizer_pane_g2_ParamLimits

0xcdc3,	// (0x00054402) mup2_visualizer_pane_g2

0xcdc3,	// (0x00054402) mup2_visualizer_pane_g3_ParamLimits

0xcdc3,	// (0x00054402) mup2_visualizer_pane_g3

0x0002,

0xf0e4,	// (0x00056723) mup2_visualizer_pane_g_ParamLimits

0xf0e4,	// (0x00056723) mup2_visualizer_pane_g

0xdcf3,	// (0x00055332) aid_size_cell_fmradio

0x79f2,	// (0x0004f031) aid_height_parent_landcape

0xd16b,	// (0x000547aa) wml_content_pane_cp

0xd173,	// (0x000547b2) wml_tabs_pane

0xd17c,	// (0x000547bb) popup_wml_miniature_window

0xd184,	// (0x000547c3) scroll_pane_cp021

0xd198,	// (0x000547d7) wml_content_pane_comp8

0x4d94,	// (0x0004c3d3) bg_popup_sub_pane_cp05

0xee62,	// (0x000564a1) popup_wml_miniature_window_g1

0xee6a,	// (0x000564a9) wml_miniature_view_pane

0x7db3,	// (0x0004f3f2) aid_size_wml_view

0x7dbb,	// (0x0004f3fa) wml_miniature_view_pane_g1

0x7dc4,	// (0x0004f403) wml_miniature_view_pane_g2

0x7dcd,	// (0x0004f40c) wml_miniature_view_pane_g3

0x7dd5,	// (0x0004f414) wml_miniature_view_pane_g4

0x7ddd,	// (0x0004f41c) wml_miniature_view_pane_g5

0x7de5,	// (0x0004f424) wml_miniature_view_pane_g6

0x7ded,	// (0x0004f42c) wml_miniature_view_pane_g7

0x7df5,	// (0x0004f434) wml_miniature_view_pane_g8

0x0007,

0xf61b,	// (0x00056c5a) wml_miniature_view_pane_g

0xee72,	// (0x000564b1) background_graphic_ParamLimits

0xee72,	// (0x000564b1) background_graphic

0xee7e,	// (0x000564bd) wml_tabs_2_pane

0xee87,	// (0x000564c6) wml_tabs_3_pane_ParamLimits

0xee87,	// (0x000564c6) wml_tabs_3_pane

0xee99,	// (0x000564d8) wml_tabs_4_pane_ParamLimits

0xee99,	// (0x000564d8) wml_tabs_4_pane

0xeeaf,	// (0x000564ee) wml_tabs_5_pane_ParamLimits

0xeeaf,	// (0x000564ee) wml_tabs_5_pane

0xeec9,	// (0x00056508) wml_tabs_pane_g2_ParamLimits

0xeec9,	// (0x00056508) wml_tabs_pane_g2

0xeede,	// (0x0005651d) wml_tabs_pane_g3_ParamLimits

0xeede,	// (0x0005651d) wml_tabs_pane_g3

0xeef3,	// (0x00056532) wml_tabs_2_active_pane_ParamLimits

0xeef3,	// (0x00056532) wml_tabs_2_active_pane

0xeef3,	// (0x00056532) wml_tabs_2_passive_pane_ParamLimits

0xeef3,	// (0x00056532) wml_tabs_2_passive_pane

0x7dfd,	// (0x0004f43c) wml_tabs_3_active_pane_cp_ParamLimits

0x7dfd,	// (0x0004f43c) wml_tabs_3_active_pane_cp

0x7e0e,	// (0x0004f44d) wml_tabs_3_passive_pane_ParamLimits

0x7e0e,	// (0x0004f44d) wml_tabs_3_passive_pane

0x7e1f,	// (0x0004f45e) wml_tabs_3_passive_pane_cp_ParamLimits

0x7e1f,	// (0x0004f45e) wml_tabs_3_passive_pane_cp

0x7e30,	// (0x0004f46f) tabs_4_active_pane

0x7e38,	// (0x0004f477) tabs_4_passive_pane

0x7e40,	// (0x0004f47f) tabs_4_passive_pane_cp

0x7e48,	// (0x0004f487) tabs_4_passive_pane_cp2

0x77d8,	// (0x0004ee17) aid_height_text

0xdad3,	// (0x00055112) mup_volume_cont_pane_ParamLimits

0xdad3,	// (0x00055112) mup_volume_cont_pane

0x45ec,	// (0x0004bc2b) aid_size_cell_pinb

0x45ec,	// (0x0004bc2b) aid_size_list_pinb

0xdad3,	// (0x00055112) mup2_volume_cont_pane_ParamLimits

0xdad3,	// (0x00055112) mup2_volume_cont_pane

0x7e50,	// (0x0004f48f) mup2_volume_cont_pane_g1_ParamLimits

0x7e50,	// (0x0004f48f) mup2_volume_cont_pane_g1

0x460a,	// (0x0004bc49) aid_size_cell_touch_ParamLimits

0x460a,	// (0x0004bc49) aid_size_cell_touch

0x48ca,	// (0x0004bf09) touch_pane_ParamLimits

0x48ca,	// (0x0004bf09) touch_pane

0x48c0,	// (0x0004beff) main_rss2_pane

0xef0a,	// (0x00056549) listscroll_rss2_pane

0xef13,	// (0x00056552) rss2_navigation_pane

0xef1b,	// (0x0005655a) list_rss2_pane

0xd7e8,	// (0x00054e27) scroll_pane_cp22

0xef23,	// (0x00056562) rss2_navigation_pane_g1

0xef2c,	// (0x0005656b) rss2_navigation_pane_g2

0xef34,	// (0x00056573) rss2_navigation_pane_g3

0x0002,

0xf62c,	// (0x00056c6b) rss2_navigation_pane_g

0xef3c,	// (0x0005657b) rss2_navigation_pane_t1

0x7e7c,	// (0x0004f4bb) rss2_list_single_pane_ParamLimits

0x7e7c,	// (0x0004f4bb) rss2_list_single_pane

0xef4a,	// (0x00056589) rss2_list_single_pane_t2

0xef58,	// (0x00056597) rss2_list_single_pane_t3_ParamLimits

0xef58,	// (0x00056597) rss2_list_single_pane_t3

0xef75,	// (0x000565b4) rss2_list_single_pane_t4

0x6a7e,	// (0x0004e0bd) smil_status_pane_g1

0x7a09,	// (0x0004f048) main_image2_pane_ParamLimits

0x7a09,	// (0x0004f048) main_image2_pane

0xd703,	// (0x00054d42) main_camera2_pane_g9_ParamLimits

0xd703,	// (0x00054d42) main_camera2_pane_g9

0x7d5b,	// (0x0004f39a) main_camera2_pane_t5_ParamLimits

0x7d5b,	// (0x0004f39a) main_camera2_pane_t5

0x7d6f,	// (0x0004f3ae) main_camera2_pane_t6_ParamLimits

0x7d6f,	// (0x0004f3ae) main_camera2_pane_t6

0x7eb0,	// (0x0004f4ef) main_image2_pane_g1_ParamLimits

0x7eb0,	// (0x0004f4ef) main_image2_pane_g1

0x750a,	// (0x0004eb49) smil2_video_pane_ParamLimits

0x750a,	// (0x0004eb49) smil2_video_pane

0x4504,	// (0x0004bb43) aid_zoom_text_primary_cp

0x485b,	// (0x0004be9a) popup_preview_fixed_window

0xd0d4,	// (0x00054713) im_reading_pane_g1

0x7d4d,	// (0x0004f38c) cams2_bc_adjust_pane_cp_ParamLimits

0x7d4d,	// (0x0004f38c) cams2_bc_adjust_pane_cp

0x48a6,	// (0x0004bee5) cams2_bc_adjust_pane_ParamLimits

0x48a6,	// (0x0004bee5) cams2_bc_adjust_pane

0xf07b,	// (0x000566ba) cams2_bc_adjust_pane_g1

0x48c0,	// (0x0004beff) cams2_slider_pane

0xf07b,	// (0x000566ba) cams2_slider_pane_g1

0xf07b,	// (0x000566ba) cams2_slider_pane_g2

0x0006,

0xf633,	// (0x00056c72) cams2_slider_pane_g

0x4f0c,	// (0x0004c54b) calc_display_pane_ParamLimits

0x4f2a,	// (0x0004c569) calc_paper_pane_ParamLimits

0x4f46,	// (0x0004c585) grid_calc_pane_ParamLimits

0x6c9d,	// (0x0004e2dc) popup_clock_digital_window_t1_ParamLimits

0xdc90,	// (0x000552cf) main_image_pane_t1

0x4ef2,	// (0x0004c531) aid_size_cell_calc_ParamLimits

0x4ef2,	// (0x0004c531) aid_size_cell_calc

0x7a46,	// (0x0004f085) popup_blid_sat_info2_window_ParamLimits

0x7a46,	// (0x0004f085) popup_blid_sat_info2_window

0xef83,	// (0x000565c2) aid_size_cell_blid

0xdad3,	// (0x00055112) bg_popup_window_pane_cp07

0xefa0,	// (0x000565df) grid_popup_blid_pane

0xefaa,	// (0x000565e9) heading_pane_cp05_ParamLimits

0xefaa,	// (0x000565e9) heading_pane_cp05

0x0ae5,	// (0x00048124) cell_popup_blid_pane_ParamLimits

0x0ae5,	// (0x00048124) cell_popup_blid_pane

0x0b09,	// (0x00048148) cell_popup_blid_pane_g1

0x0b11,	// (0x00048150) cell_popup_blid_pane_t1

0xdad3,	// (0x00055112) mup2_indicator_pane_ParamLimits

0xdad3,	// (0x00055112) mup2_indicator_pane

0x45ec,	// (0x0004bc2b) mup2_visualizer_osc_pane

0xee4c,	// (0x0005648b) mup2_visualizer_spec_pane_ParamLimits

0xee4c,	// (0x0005648b) mup2_visualizer_spec_pane

0x45ec,	// (0x0004bc2b) mup2_spec_half_pane

0x45ec,	// (0x0004bc2b) mup2_spec_half_pane_cp

0x0b1f,	// (0x0004815e) mup2_spec_bar_pane_ParamLimits

0x0b1f,	// (0x0004815e) mup2_spec_bar_pane

0xd00f,	// (0x0005464e) mup2_spec_bar_pane_g1

0x0b3e,	// (0x0004817d) mup2_spec_bar_pane_g2

0x0001,

0xf659,	// (0x00056c98) mup2_spec_bar_pane_g

0x45ec,	// (0x0004bc2b) mup2_osc_middle_pane

0xd00f,	// (0x0005464e) mup2_visualizer_osc_pane_g1

0x4941,	// (0x0004bf80) popup_number_entry_window_t1_ParamLimits

0x4954,	// (0x0004bf93) popup_number_entry_window_t2_ParamLimits

0x4966,	// (0x0004bfa5) popup_number_entry_window_t3_ParamLimits

0x4978,	// (0x0004bfb7) popup_number_entry_window_t5_ParamLimits

0x4978,	// (0x0004bfb7) popup_number_entry_window_t5

0xf085,	// (0x000566c4) popup_number_entry_window_t_ParamLimits

0x49b4,	// (0x0004bff3) text_title_cp2_ParamLimits

0x720b,	// (0x0004e84a) aid_hotspot_pointer_text2_pane

0x7299,	// (0x0004e8d8) main_viewer_pane_g9_ParamLimits

0x7299,	// (0x0004e8d8) main_viewer_pane_g9

0xd30d,	// (0x0005494c) cale_month_pane_t1_ParamLimits

0xd34a,	// (0x00054989) bg_cale_pane_ParamLimits

0xd362,	// (0x000549a1) list_cale_pane_ParamLimits

0xd373,	// (0x000549b2) listscroll_cale_day_pane_t1

0xd385,	// (0x000549c4) scroll_pane_cp09_ParamLimits

0x6f4e,	// (0x0004e58d) main_mup_eq_pane_t1_ParamLimits

0x6f4e,	// (0x0004e58d) main_mup_eq_pane_t1

0x6f68,	// (0x0004e5a7) main_mup_eq_pane_t2_ParamLimits

0x6f68,	// (0x0004e5a7) main_mup_eq_pane_t2

0x6f80,	// (0x0004e5bf) main_mup_eq_pane_t3_ParamLimits

0x6f80,	// (0x0004e5bf) main_mup_eq_pane_t3

0x6f98,	// (0x0004e5d7) main_mup_eq_pane_t4_ParamLimits

0x6f98,	// (0x0004e5d7) main_mup_eq_pane_t4

0x6fb0,	// (0x0004e5ef) main_mup_eq_pane_t5_ParamLimits

0x6fb0,	// (0x0004e5ef) main_mup_eq_pane_t5

0x6fc8,	// (0x0004e607) main_mup_eq_pane_t6_ParamLimits

0x6fc8,	// (0x0004e607) main_mup_eq_pane_t6

0x6fdc,	// (0x0004e61b) main_mup_eq_pane_t7_ParamLimits

0x6fdc,	// (0x0004e61b) main_mup_eq_pane_t7

0x6ff0,	// (0x0004e62f) main_mup_eq_pane_t8_ParamLimits

0x6ff0,	// (0x0004e62f) main_mup_eq_pane_t8

0x7006,	// (0x0004e645) main_mup_eq_pane_t9_ParamLimits

0x7006,	// (0x0004e645) main_mup_eq_pane_t9

0x701e,	// (0x0004e65d) main_mup_eq_pane_t10_ParamLimits

0x701e,	// (0x0004e65d) main_mup_eq_pane_t10

0x0009,

0xf3e9,	// (0x00056a28) main_mup_eq_pane_t_ParamLimits

0xf3e9,	// (0x00056a28) main_mup_eq_pane_t

0x70db,	// (0x0004e71a) mup_equalizer_pane_cp5_ParamLimits

0x70f1,	// (0x0004e730) mup_equalizer_pane_cp6_ParamLimits

0x7109,	// (0x0004e748) mup_equalizer_pane_cp7_ParamLimits

0x48c0,	// (0x0004beff) main_gallery_pane

0xedea,	// (0x00056429) smil2_volume_pane

0xedf2,	// (0x00056431) smil_status_volume_pane_g1_ParamLimits

0xee05,	// (0x00056444) smil_status_volume_pane_g2_ParamLimits

0x7c00,	// (0x0004f23f) smil_status_volume_pane_g3_ParamLimits

0xf5b2,	// (0x00056bf1) smil_status_volume_pane_g_ParamLimits

0xdad3,	// (0x00055112) bg_popup_window_pane_cp07_ParamLimits

0xef8b,	// (0x000565ca) blid_firmament_pane

0x4ee4,	// (0x0004c523) aid_size_cell_gallery_ParamLimits

0x4ee4,	// (0x0004c523) aid_size_cell_gallery

0x4ee4,	// (0x0004c523) grid_gallery_pane_ParamLimits

0x4ee4,	// (0x0004c523) grid_gallery_pane

0xed6f,	// (0x000563ae) cell_gallery_pane_ParamLimits

0xed6f,	// (0x000563ae) cell_gallery_pane

0xcd5c,	// (0x0005439b) bg_cell_gallery_focus_pane_ParamLimits

0xcd5c,	// (0x0005439b) bg_cell_gallery_focus_pane

0xcdb5,	// (0x000543f4) cell_gallery_pane_g1_ParamLimits

0xcdb5,	// (0x000543f4) cell_gallery_pane_g1

0xcdb5,	// (0x000543f4) cell_gallery_pane_g2_ParamLimits

0xcdb5,	// (0x000543f4) cell_gallery_pane_g2

0xcdb5,	// (0x000543f4) cell_gallery_pane_g3_ParamLimits

0xcdb5,	// (0x000543f4) cell_gallery_pane_g3

0xcdc3,	// (0x00054402) cell_gallery_pane_g4_ParamLimits

0xcdc3,	// (0x00054402) cell_gallery_pane_g4

0x0003,

0xf65e,	// (0x00056c9d) cell_gallery_pane_g_ParamLimits

0xf65e,	// (0x00056c9d) cell_gallery_pane_g

0x0b48,	// (0x00048187) bg_cell_gallery_focus_pane_g1

0x0b50,	// (0x0004818f) bg_cell_gallery_focus_pane_g2

0x0b58,	// (0x00048197) bg_cell_gallery_focus_pane_g3

0x0b60,	// (0x0004819f) bg_cell_gallery_focus_pane_g4

0x0b68,	// (0x000481a7) bg_cell_gallery_focus_pane_g5

0x0b70,	// (0x000481af) bg_cell_gallery_focus_pane_g6

0x0b78,	// (0x000481b7) bg_cell_gallery_focus_pane_g7

0x0b80,	// (0x000481bf) bg_cell_gallery_focus_pane_g8

0x0007,

0xf667,	// (0x00056ca6) bg_cell_gallery_focus_pane_g

0x0b88,	// (0x000481c7) aid_firma_cardinal

0x0b9c,	// (0x000481db) blid_firmament_pane_t1

0x0bb3,	// (0x000481f2) blid_firmament_pane_t2

0x0bca,	// (0x00048209) blid_firmament_pane_t3

0x0be1,	// (0x00048220) blid_firmament_pane_t4

0x0003,

0xf678,	// (0x00056cb7) blid_firmament_pane_t

0x0bf8,	// (0x00048237) blid_sat_info_pane

0xd00f,	// (0x0005464e) blid_sat_info_pane_g1

0xd00f,	// (0x0005464e) blid_sat_info_pane_g2

0x0001,

0xf3dd,	// (0x00056a1c) blid_sat_info_pane_g

0x0c08,	// (0x00048247) blid_sat_info_pane_t1

0x0c16,	// (0x00048255) smil2_volume_content_pane

0x0c1f,	// (0x0004825e) smil2_volume_pane_g1

0xf000,	// (0x0005663f) smil2_volume_content_pane_g1

0x0c27,	// (0x00048266) smil2_volume_content_pane_g2

0x0c30,	// (0x0004826f) smil2_volume_content_pane_g3

0x0c39,	// (0x00048278) smil2_volume_content_pane_g4

0x0c42,	// (0x00048281) smil2_volume_content_pane_g5

0x0c4b,	// (0x0004828a) smil2_volume_content_pane_g6

0x0c54,	// (0x00048293) smil2_volume_content_pane_g7

0x0c5d,	// (0x0004829c) smil2_volume_content_pane_g8

0x0c66,	// (0x000482a5) smil2_volume_content_pane_g9

0x0c6f,	// (0x000482ae) smil2_volume_content_pane_g10

0x0009,

0xf681,	// (0x00056cc0) smil2_volume_content_pane_g

0x5542,	// (0x0004cb81) cale_week_day_heading_pane_t1_ParamLimits

0x555d,	// (0x0004cb9c) cale_week_day_heading_pane_t2_ParamLimits

0x5578,	// (0x0004cbb7) cale_week_day_heading_pane_t3_ParamLimits

0x5593,	// (0x0004cbd2) cale_week_day_heading_pane_t4_ParamLimits

0x55ae,	// (0x0004cbed) cale_week_day_heading_pane_t5_ParamLimits

0x55c9,	// (0x0004cc08) cale_week_day_heading_pane_t6_ParamLimits

0x55e4,	// (0x0004cc23) cale_week_day_heading_pane_t7_ParamLimits

0xf18c,	// (0x000567cb) cale_week_day_heading_pane_t_ParamLimits

0xcf87,	// (0x000545c6) bg_cale_side_pane_ParamLimits

0x55ff,	// (0x0004cc3e) cale_week_time_pane_t1_ParamLimits

0x5619,	// (0x0004cc58) cale_week_time_pane_t2_ParamLimits

0x5633,	// (0x0004cc72) cale_week_time_pane_t3_ParamLimits

0x564d,	// (0x0004cc8c) cale_week_time_pane_t4_ParamLimits

0x5667,	// (0x0004cca6) cale_week_time_pane_t5_ParamLimits

0x5681,	// (0x0004ccc0) cale_week_time_pane_t6_ParamLimits

0x56a1,	// (0x0004cce0) cale_week_time_pane_t7_ParamLimits

0x56c3,	// (0x0004cd02) cale_week_time_pane_t8_ParamLimits

0xf19b,	// (0x000567da) cale_week_time_pane_t_ParamLimits

0x56e7,	// (0x0004cd26) cell_cale_week_pane_g2_ParamLimits

0xcf87,	// (0x000545c6) bg_cale_side_pane_cp01_ParamLimits

0x686d,	// (0x0004deac) cale_month_week_pane_t1_ParamLimits

0x6886,	// (0x0004dec5) cale_month_week_pane_t2_ParamLimits

0x689f,	// (0x0004dede) cale_month_week_pane_t3_ParamLimits

0x68b8,	// (0x0004def7) cale_month_week_pane_t4_ParamLimits

0x68d3,	// (0x0004df12) cale_month_week_pane_t5_ParamLimits

0x68f4,	// (0x0004df33) cale_month_week_pane_t6_ParamLimits

0xf269,	// (0x000568a8) cale_month_week_pane_t_ParamLimits

0x6a3b,	// (0x0004e07a) cell_cale_month_pane_g1_ParamLimits

0x48c0,	// (0x0004beff) main_cale_event_viewer_pane

0x45ec,	// (0x0004bc2b) listscroll_cale_event_viewer_pane

0x0c78,	// (0x000482b7) list_cale_ev_pane

0x0c80,	// (0x000482bf) scroll_pane_cp023

0x0c8c,	// (0x000482cb) field_cale_ev_pane_ParamLimits

0x0c8c,	// (0x000482cb) field_cale_ev_pane

0x0caa,	// (0x000482e9) field_cale_ev_content_pane_ParamLimits

0x0caa,	// (0x000482e9) field_cale_ev_content_pane

0x0cb6,	// (0x000482f5) field_cale_ev_pane_g1_ParamLimits

0x0cb6,	// (0x000482f5) field_cale_ev_pane_g1

0x0cc2,	// (0x00048301) field_cale_ev_pane_g2_ParamLimits

0x0cc2,	// (0x00048301) field_cale_ev_pane_g2

0x0cda,	// (0x00048319) field_cale_ev_pane_g3_ParamLimits

0x0cda,	// (0x00048319) field_cale_ev_pane_g3

0x0002,

0xf696,	// (0x00056cd5) field_cale_ev_pane_g_ParamLimits

0xf696,	// (0x00056cd5) field_cale_ev_pane_g

0x0cf2,	// (0x00048331) field_cale_ev_pane_t1_ParamLimits

0x0cf2,	// (0x00048331) field_cale_ev_pane_t1

0x0d09,	// (0x00048348) field_cale_ev_content_pane_t1_ParamLimits

0x0d09,	// (0x00048348) field_cale_ev_content_pane_t1

0xdb76,	// (0x000551b5) bg_button_pane_cp01

0x52cd,	// (0x0004c90c) listscroll_cale_week_pane_ParamLimits

0xcf32,	// (0x00054571) popup_toolbar_window_cp01

0xcf58,	// (0x00054597) listscroll_cale_week_pane_t1_ParamLimits

0x52cd,	// (0x0004c90c) listscroll_cale_day_pane_ParamLimits

0xcf32,	// (0x00054571) popup_toolbar_window_cp02

0xd373,	// (0x000549b2) listscroll_cale_day_pane_t1_ParamLimits

0x52cd,	// (0x0004c90c) main_cale_month_pane_ParamLimits

0x7b49,	// (0x0004f188) popup_toolbar_window_cp03_ParamLimits

0x7b49,	// (0x0004f188) popup_toolbar_window_cp03

0x7420,	// (0x0004ea5f) main_image_pane_g2_ParamLimits

0x7420,	// (0x0004ea5f) main_image_pane_g2

0x742c,	// (0x0004ea6b) main_image_pane_g3_ParamLimits

0x742c,	// (0x0004ea6b) main_image_pane_g3

0x0002,

0xf47b,	// (0x00056aba) main_image_pane_g_ParamLimits

0xf47b,	// (0x00056aba) main_image_pane_g

0xdc90,	// (0x000552cf) main_image_pane_t1_ParamLimits

0x7438,	// (0x0004ea77) main_image_pane_t2_ParamLimits

0x7438,	// (0x0004ea77) main_image_pane_t2

0x744a,	// (0x0004ea89) main_image_pane_t3_ParamLimits

0x744a,	// (0x0004ea89) main_image_pane_t3

0x745c,	// (0x0004ea9b) main_image_pane_t4_ParamLimits

0x745c,	// (0x0004ea9b) main_image_pane_t4

0x0003,

0xf482,	// (0x00056ac1) main_image_pane_t_ParamLimits

0xf482,	// (0x00056ac1) main_image_pane_t

0x746e,	// (0x0004eaad) popup_image_details_window_cp01

0x7478,	// (0x0004eab7) popup_toobar_trans_pane_cp01_ParamLimits

0x7478,	// (0x0004eab7) popup_toobar_trans_pane_cp01

0x7a99,	// (0x0004f0d8) popup_image_details_window_ParamLimits

0x7a99,	// (0x0004f0d8) popup_image_details_window

0x7aa7,	// (0x0004f0e6) popup_image_focus_window

0x48a6,	// (0x0004bee5) camera2_autofocus_pane_ParamLimits

0x48a6,	// (0x0004bee5) camera2_autofocus_pane

0x45ec,	// (0x0004bc2b) bg_popup_sub_pane_cp06

0x0d27,	// (0x00048366) popup_image_focus_window_g1

0x0d2f,	// (0x0004836e) popup_image_focus_window_g2

0x0d37,	// (0x00048376) popup_image_focus_window_g3

0x0d3f,	// (0x0004837e) popup_image_focus_window_g4

0x0003,

0xf69d,	// (0x00056cdc) popup_image_focus_window_g

0x0d47,	// (0x00048386) popup_image_focus_window_t1

0x0d55,	// (0x00048394) popup_image_focus_window_t2

0x0d65,	// (0x000483a4) popup_image_focus_window_t3

0x0002,

0xf6a6,	// (0x00056ce5) popup_image_focus_window_t

0xcdb5,	// (0x000543f4) camera2_autofocus_pane_g1

0xcd5c,	// (0x0005439b) bg_tb_trans_pane_cp01

0x0d73,	// (0x000483b2) popup_image_details_window_g1

0x0d86,	// (0x000483c5) popup_image_details_window_g2

0x0002,

0xf6b8,	// (0x00056cf7) popup_image_details_window_g

0x0daf,	// (0x000483ee) popup_image_details_window_t1

0x0dc1,	// (0x00048400) popup_image_details_window_t2

0x0dda,	// (0x00048419) popup_image_details_window_t3

0x0dee,	// (0x0004842d) popup_image_details_window_t4

0x0e09,	// (0x00048448) popup_image_details_window_t5

0x0004,

0xf6bf,	// (0x00056cfe) popup_image_details_window_t

0xce13,	// (0x00054452) bg_calc_paper_pane_ParamLimits

0x48c0,	// (0x0004beff) grid_highlight_pane_cp013

0x5043,	// (0x0004c682) list_calc_pane_ParamLimits

0x5055,	// (0x0004c694) scroll_pane_cp024

0xce27,	// (0x00054466) bg_calc_display_pane_ParamLimits

0x505d,	// (0x0004c69c) calc_display_pane_t1_ParamLimits

0x5072,	// (0x0004c6b1) calc_display_pane_t2_ParamLimits

0x5087,	// (0x0004c6c6) calc_display_pane_t3_ParamLimits

0xf10c,	// (0x0005674b) calc_display_pane_t_ParamLimits

0x5161,	// (0x0004c7a0) cell_calc_pane_g2

0x0001,

0xf129,	// (0x00056768) cell_calc_pane_g

0x516a,	// (0x0004c7a9) cell_calc_pane_t1

0xce7c,	// (0x000544bb) grid_highlight_pane_cp02_ParamLimits

0xce92,	// (0x000544d1) toolbar_button_pane_cp01_ParamLimits

0xce92,	// (0x000544d1) toolbar_button_pane_cp01

0xdcd5,	// (0x00055314) temp_image_control_pane_ParamLimits

0xdcd5,	// (0x00055314) temp_image_control_pane

0x7a09,	// (0x0004f048) main_mp3_pane

0x0e23,	// (0x00048462) temp_image_control_pane_g1_ParamLimits

0x0e23,	// (0x00048462) temp_image_control_pane_g1

0x0e31,	// (0x00048470) temp_image_control_pane_g2_ParamLimits

0x0e31,	// (0x00048470) temp_image_control_pane_g2

0x0e43,	// (0x00048482) temp_image_control_pane_g3_ParamLimits

0x0e43,	// (0x00048482) temp_image_control_pane_g3

0x7ebc,	// (0x0004f4fb) temp_image_control_pane_g4_ParamLimits

0x7ebc,	// (0x0004f4fb) temp_image_control_pane_g4

0x0003,

0xf6ca,	// (0x00056d09) temp_image_control_pane_g_ParamLimits

0xf6ca,	// (0x00056d09) temp_image_control_pane_g

0x0e23,	// (0x00048462) main_mp3_pane_g1

0x7ecd,	// (0x0004f50c) main_mp3_pane_g2

0x0007,

0xf6d3,	// (0x00056d12) main_mp3_pane_g

0x0e78,	// (0x000484b7) main_mp3_pane_t1

0xcdc3,	// (0x00054402) main_camera_pane_g8_ParamLimits

0xcdc3,	// (0x00054402) main_camera_pane_g8

0x588e,	// (0x0004cecd) main_video_pane_g7_ParamLimits

0x588e,	// (0x0004cecd) main_video_pane_g7

0x7d5b,	// (0x0004f39a) main_camera2_pane_t7_ParamLimits

0x7d5b,	// (0x0004f39a) main_camera2_pane_t7

0xd12b,	// (0x0005476a) scroll_pane_cp025_ParamLimits

0xd12b,	// (0x0005476a) scroll_pane_cp025

0xd13f,	// (0x0005477e) scroll_pane_cp026_ParamLimits

0xd13f,	// (0x0005477e) scroll_pane_cp026

0xd14e,	// (0x0005478d) wml_content_pane_ParamLimits

0x48c0,	// (0x0004beff) main_touch_calib_pane

0x7f71,	// (0x0004f5b0) main_touch_calib_pane_g1

0x7f7d,	// (0x0004f5bc) main_touch_calib_pane_g2

0x7f89,	// (0x0004f5c8) main_touch_calib_pane_g3

0x7f95,	// (0x0004f5d4) main_touch_calib_pane_g4

0x0003,

0xf6f1,	// (0x00056d30) main_touch_calib_pane_g

0x7fa1,	// (0x0004f5e0) main_touch_calib_pane_t1

0x7fba,	// (0x0004f5f9) main_touch_calib_pane_t2

0x0004,

0xf6fa,	// (0x00056d39) main_touch_calib_pane_t

0xd8b7,	// (0x00054ef6) mup_progress_pane_cp02

0xd8ec,	// (0x00054f2b) navi_pane_g1

0xd9a7,	// (0x00054fe6) navi_pane_mp_t3

0x7a09,	// (0x0004f048) main_mp3_pane_ParamLimits

0x7b86,	// (0x0004f1c5) navi_pane_ParamLimits

0x0e23,	// (0x00048462) main_mp3_pane_g1_ParamLimits

0x7ecd,	// (0x0004f50c) main_mp3_pane_g2_ParamLimits

0x7ed9,	// (0x0004f518) main_mp3_pane_g3_ParamLimits

0x7ed9,	// (0x0004f518) main_mp3_pane_g3

0x7ee5,	// (0x0004f524) main_mp3_pane_g4_ParamLimits

0x7ee5,	// (0x0004f524) main_mp3_pane_g4

0xcdb5,	// (0x000543f4) main_mp3_pane_g5_ParamLimits

0xcdb5,	// (0x000543f4) main_mp3_pane_g5

0x0e53,	// (0x00048492) main_mp3_pane_g6_ParamLimits

0x0e53,	// (0x00048492) main_mp3_pane_g6

0x0e60,	// (0x0004849f) main_mp3_pane_g7_ParamLimits

0x0e60,	// (0x0004849f) main_mp3_pane_g7

0x0e6c,	// (0x000484ab) main_mp3_pane_g8_ParamLimits

0x0e6c,	// (0x000484ab) main_mp3_pane_g8

0xf6d3,	// (0x00056d12) main_mp3_pane_g_ParamLimits

0x7ef1,	// (0x0004f530) main_mp3_pane_t2

0x7f01,	// (0x0004f540) main_mp3_pane_t3

0x0e86,	// (0x000484c5) main_mp3_pane_t4

0x0e94,	// (0x000484d3) main_mp3_pane_t5

0x0005,

0xf6e4,	// (0x00056d23) main_mp3_pane_t

0x0ea2,	// (0x000484e1) mup_progress_pane_cp01

0x4504,	// (0x0004bb43) aid_zoom_text_secondary2

0x0c78,	// (0x000482b7) list_cale_ev2_pane

0x0c80,	// (0x000482bf) scroll_pane_cp023_ParamLimits

0x8015,	// (0x0004f654) field_cale_ev2_pane_ParamLimits

0x8015,	// (0x0004f654) field_cale_ev2_pane

0x0eaa,	// (0x000484e9) field_cale_ev2_pane_g1_ParamLimits

0x0eaa,	// (0x000484e9) field_cale_ev2_pane_g1

0x0eb6,	// (0x000484f5) field_cale_ev2_pane_g2_ParamLimits

0x0eb6,	// (0x000484f5) field_cale_ev2_pane_g2

0x0ece,	// (0x0004850d) field_cale_ev2_pane_g3_ParamLimits

0x0ece,	// (0x0004850d) field_cale_ev2_pane_g3

0x0003,

0xf705,	// (0x00056d44) field_cale_ev2_pane_g_ParamLimits

0xf705,	// (0x00056d44) field_cale_ev2_pane_g

0x0ef2,	// (0x00048531) field_cale_ev2_pane_t1_ParamLimits

0x0ef2,	// (0x00048531) field_cale_ev2_pane_t1

0x0f09,	// (0x00048548) field_cale_ev2_pane_t2_ParamLimits

0x0f09,	// (0x00048548) field_cale_ev2_pane_t2

0x0001,

0xf70e,	// (0x00056d4d) field_cale_ev2_pane_t_ParamLimits

0xf70e,	// (0x00056d4d) field_cale_ev2_pane_t

0x7301,	// (0x0004e940) main_postcard_pane_g5_ParamLimits

0x7301,	// (0x0004e940) main_postcard_pane_g5

0x730f,	// (0x0004e94e) main_postcard_pane_g6_ParamLimits

0x730f,	// (0x0004e94e) main_postcard_pane_g6

0x4ee4,	// (0x0004c523) camera2_autofocus_pane_cp_ParamLimits

0x4ee4,	// (0x0004c523) camera2_autofocus_pane_cp

0x7a09,	// (0x0004f048) main_mup3_pane

0x807e,	// (0x0004f6bd) main_mup3_pane_g1_ParamLimits

0x807e,	// (0x0004f6bd) main_mup3_pane_g1

0x809f,	// (0x0004f6de) main_mup3_pane_g2_ParamLimits

0x809f,	// (0x0004f6de) main_mup3_pane_g2

0x8119,	// (0x0004f758) main_mup3_pane_g3_ParamLimits

0x8119,	// (0x0004f758) main_mup3_pane_g3

0x815c,	// (0x0004f79b) main_mup3_pane_g4_ParamLimits

0x815c,	// (0x0004f79b) main_mup3_pane_g4

0x819f,	// (0x0004f7de) main_mup3_pane_g5_ParamLimits

0x819f,	// (0x0004f7de) main_mup3_pane_g5

0x81e2,	// (0x0004f821) main_mup3_pane_g6_ParamLimits

0x81e2,	// (0x0004f821) main_mup3_pane_g6

0xcdc3,	// (0x00054402) main_mup3_pane_g7_ParamLimits

0xcdc3,	// (0x00054402) main_mup3_pane_g7

0x0007,

0xf71e,	// (0x00056d5d) main_mup3_pane_g_ParamLimits

0xf71e,	// (0x00056d5d) main_mup3_pane_g

0x8258,	// (0x0004f897) main_mup3_pane_t1_ParamLimits

0x8258,	// (0x0004f897) main_mup3_pane_t1

0x82c7,	// (0x0004f906) main_mup3_pane_t2_ParamLimits

0x82c7,	// (0x0004f906) main_mup3_pane_t2

0x8390,	// (0x0004f9cf) main_mup3_pane_t4_ParamLimits

0x8390,	// (0x0004f9cf) main_mup3_pane_t4

0x83de,	// (0x0004fa1d) main_mup3_pane_t5_ParamLimits

0x83de,	// (0x0004fa1d) main_mup3_pane_t5

0x848e,	// (0x0004facd) main_mup3_pane_t6_ParamLimits

0x848e,	// (0x0004facd) main_mup3_pane_t6

0x0005,

0xf72f,	// (0x00056d6e) main_mup3_pane_t_ParamLimits

0xf72f,	// (0x00056d6e) main_mup3_pane_t

0x853a,	// (0x0004fb79) mup3_progress_pane_ParamLimits

0x853a,	// (0x0004fb79) mup3_progress_pane

0x85ae,	// (0x0004fbed) popup_mup3_control_window_ParamLimits

0x85ae,	// (0x0004fbed) popup_mup3_control_window

0x0f1e,	// (0x0004855d) popup_mup3_text_window

0x85c7,	// (0x0004fc06) mup3_progress_pane_t1

0x85e6,	// (0x0004fc25) mup3_progress_pane_t2

0x0f26,	// (0x00048565) mup3_progress_pane_t3

0x0002,

0xf73c,	// (0x00056d7b) mup3_progress_pane_t

0x0f43,	// (0x00048582) mup_progress_pane_cp03

0x45ec,	// (0x0004bc2b) bg_tb_trans_pane_cp04

0x8605,	// (0x0004fc44) mup3_volume_pane

0x860d,	// (0x0004fc4c) popup_mup3_control_window_g1

0x8616,	// (0x0004fc55) mup3_volume_pane_g1

0x861f,	// (0x0004fc5e) mup3_volume_pane_g2

0x8628,	// (0x0004fc67) mup3_volume_pane_g3

0x0002,

0xf743,	// (0x00056d82) mup3_volume_pane_g

0x45ec,	// (0x0004bc2b) bg_tb_trans_pane_cp03

0x0f53,	// (0x00048592) popup_mup3_text_window_g1

0x0f5b,	// (0x0004859a) popup_mup3_text_window_t1

0xce6f,	// (0x000544ae) list_calc_item_pane_g1_ParamLimits

0xef01,	// (0x00056540) mup_volume_pane_cp_g1

0x7fd3,	// (0x0004f612) main_touch_calib_pane_t3

0x7fe9,	// (0x0004f628) main_touch_calib_pane_t4

0x7fff,	// (0x0004f63e) main_touch_calib_pane_t5

0x45f6,	// (0x0004bc35) aid_cell_size_toolbar2

0x45fe,	// (0x0004bc3d) aid_popup3_width_pane

0x44fc,	// (0x0004bb3b) aid_zoom_text_msg_primary

0x5790,	// (0x0004cdcf) vorec_t7

0xce33,	// (0x00054472) bg_calc_paper_pane_g1_ParamLimits

0xce3f,	// (0x0005447e) bg_calc_paper_pane_g2_ParamLimits

0xce4b,	// (0x0005448a) bg_calc_paper_pane_g3_ParamLimits

0xce57,	// (0x00054496) bg_calc_paper_pane_g4_ParamLimits

0xce63,	// (0x000544a2) bg_calc_paper_pane_g5_ParamLimits

0x50c6,	// (0x0004c705) bg_calc_paper_pane_g6_ParamLimits

0x50d7,	// (0x0004c716) bg_calc_paper_pane_g7_ParamLimits

0x50e8,	// (0x0004c727) bg_calc_paper_pane_g8_ParamLimits

0xf113,	// (0x00056752) bg_calc_paper_pane_g_ParamLimits

0x50f9,	// (0x0004c738) calc_bg_paper_pane_g9_ParamLimits

0x4ee4,	// (0x0004c523) image_qvga_pane_ParamLimits

0x4ee4,	// (0x0004c523) image_qvga_pane

0xcd3a,	// (0x00054379) bg_popup_sub_pane_cp04_ParamLimits

0xdc0c,	// (0x0005524b) popup_mup_playback_window_g1_ParamLimits

0xdc18,	// (0x00055257) popup_mup_playback_window_t1_ParamLimits

0xdc2d,	// (0x0005526c) popup_mup_playback_window_t2_ParamLimits

0xf476,	// (0x00056ab5) popup_mup_playback_window_t_ParamLimits

0xcdb5,	// (0x000543f4) main_mup2_pane_g3_ParamLimits

0xcdb5,	// (0x000543f4) main_mup2_pane_g3

0x5a75,	// (0x0004d0b4) popup_toolbar_window_cp04

0xe022,	// (0x00055661) popup_call2_audio_second_window_g3_ParamLimits

0xe022,	// (0x00055661) popup_call2_audio_second_window_g3

0xe42c,	// (0x00055a6b) popup_call2_audio_first_window_g4_ParamLimits

0xe42c,	// (0x00055a6b) popup_call2_audio_first_window_g4

0xea53,	// (0x00056092) popup_call2_audio_in_window_g4_ParamLimits

0xea53,	// (0x00056092) popup_call2_audio_in_window_g4

0x7413,	// (0x0004ea52) aid_area_sk_bg_cut_ParamLimits

0x7413,	// (0x0004ea52) aid_area_sk_bg_cut

0xdc42,	// (0x00055281) aid_area_sk_bg_cut_2_ParamLimits

0xdc42,	// (0x00055281) aid_area_sk_bg_cut_2

0x45ec,	// (0x0004bc2b) aid_placing_details_win

0x45ec,	// (0x0004bc2b) aid_placing_details_win_2

0xcdb5,	// (0x000543f4) camera2_autofocus_pane_g1_ParamLimits

0x484c,	// (0x0004be8b) popup_fixed_preview_cale_window_ParamLimits

0x484c,	// (0x0004be8b) popup_fixed_preview_cale_window

0xda25,	// (0x00055064) navi_slider_pane_g3

0xda2e,	// (0x0005506d) navi_slider_pane_g4

0xda37,	// (0x00055076) navi_slider_pane_g5

0xda25,	// (0x00055064) navi_slider_pane_g6

0x6f22,	// (0x0004e561) navi_slider_pane_g7

0xdb43,	// (0x00055182) mup_scale_pane_g3

0xdb4c,	// (0x0005518b) mup_scale_pane_g4

0xdb55,	// (0x00055194) mup_scale_pane_g5

0x7121,	// (0x0004e760) mup_scale_pane_g6

0x712a,	// (0x0004e769) mup_scale_pane_g7

0xf07b,	// (0x000566ba) cams2_slider_pane_g3

0xf07b,	// (0x000566ba) cams2_slider_pane_g4

0xf07b,	// (0x000566ba) cams2_slider_pane_g5

0xf07b,	// (0x000566ba) cams2_slider_pane_g6

0xf07b,	// (0x000566ba) cams2_slider_pane_g7

0xd00f,	// (0x0005464e) camera2_autofocus_pane_cp_g1

0xed63,	// (0x000563a2) bg_popup_preview_window_pane_cp02_ParamLimits

0xed63,	// (0x000563a2) bg_popup_preview_window_pane_cp02

0x0f69,	// (0x000485a8) list_fp_cale_pane_ParamLimits

0x0f69,	// (0x000485a8) list_fp_cale_pane

0x0f75,	// (0x000485b4) popup_fixed_preview_cale_window_t1_ParamLimits

0x0f75,	// (0x000485b4) popup_fixed_preview_cale_window_t1

0x8631,	// (0x0004fc70) popup_fixed_preview_cale_window_t2_ParamLimits

0x8631,	// (0x0004fc70) popup_fixed_preview_cale_window_t2

0x8646,	// (0x0004fc85) popup_fixed_preview_cale_window_t3_ParamLimits

0x8646,	// (0x0004fc85) popup_fixed_preview_cale_window_t3

0x0002,

0xf74a,	// (0x00056d89) popup_fixed_preview_cale_window_t_ParamLimits

0xf74a,	// (0x00056d89) popup_fixed_preview_cale_window_t

0x865b,	// (0x0004fc9a) list_single_fp_cale_pane_ParamLimits

0x865b,	// (0x0004fc9a) list_single_fp_cale_pane

0x0f93,	// (0x000485d2) list_single_fp_cale_pane_g1_ParamLimits

0x0f93,	// (0x000485d2) list_single_fp_cale_pane_g1

0x0f9f,	// (0x000485de) list_single_fp_cale_pane_g2_ParamLimits

0x0f9f,	// (0x000485de) list_single_fp_cale_pane_g2

0x0002,

0xf751,	// (0x00056d90) list_single_fp_cale_pane_g_ParamLimits

0xf751,	// (0x00056d90) list_single_fp_cale_pane_g

0x0fb8,	// (0x000485f7) list_single_fp_cale_pane_t1_ParamLimits

0x0fb8,	// (0x000485f7) list_single_fp_cale_pane_t1

0x0fca,	// (0x00048609) list_single_fp_cale_pane_t2_ParamLimits

0x0fca,	// (0x00048609) list_single_fp_cale_pane_t2

0x0001,

0xf758,	// (0x00056d97) list_single_fp_cale_pane_t_ParamLimits

0xf758,	// (0x00056d97) list_single_fp_cale_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0x48c0,	// (0x0004beff) main_dialer_pane

0x45ec,	// (0x0004bc2b) aid_cell_size_keypad

0x45ec,	// (0x0004bc2b) dialer_ne_pane

0x45ec,	// (0x0004bc2b) grid_dialer_command_1_pane

0x45ec,	// (0x0004bc2b) grid_dialer_command_2_pane

0x45ec,	// (0x0004bc2b) grid_dialer_keypad_pane

0xdad3,	// (0x00055112) bg_popup_call_pane_cp06_ParamLimits

0xdad3,	// (0x00055112) bg_popup_call_pane_cp06

0xdad3,	// (0x00055112) dialer_ne_clear_pane_ParamLimits

0xdad3,	// (0x00055112) dialer_ne_clear_pane

0xd00f,	// (0x0005464e) dialer_ne_pane_g1

0xcfe1,	// (0x00054620) dialer_ne_pane_t1_ParamLimits

0xcfe1,	// (0x00054620) dialer_ne_pane_t1

0x1213,	// (0x00048852) dialer_ne_pane_t2_ParamLimits

0x1213,	// (0x00048852) dialer_ne_pane_t2

0x866e,	// (0x0004fcad) dialer_ne_pane_t3_ParamLimits

0x866e,	// (0x0004fcad) dialer_ne_pane_t3

0x0002,

0xf75d,	// (0x00056d9c) dialer_ne_pane_t_ParamLimits

0xf75d,	// (0x00056d9c) dialer_ne_pane_t

0x866e,	// (0x0004fcad) dialer_ne_pane_t3_copy1_ParamLimits

0x866e,	// (0x0004fcad) dialer_ne_pane_t3_copy1

0x0ffd,	// (0x0004863c) cell_dialer_keypad_pane_ParamLimits

0x0ffd,	// (0x0004863c) cell_dialer_keypad_pane

0xcd5c,	// (0x0005439b) cell_dialer_command_1_pane_ParamLimits

0xcd5c,	// (0x0005439b) cell_dialer_command_1_pane

0x1014,	// (0x00048653) cell_dialer_command_2_pane_ParamLimits

0x1014,	// (0x00048653) cell_dialer_command_2_pane

0xcd5c,	// (0x0005439b) bg_button_pane_cp02_ParamLimits

0xcd5c,	// (0x0005439b) bg_button_pane_cp02

0xcdb5,	// (0x000543f4) cell_dialer_keypad_pane_g1_ParamLimits

0xcdb5,	// (0x000543f4) cell_dialer_keypad_pane_g1

0xcd5c,	// (0x0005439b) bg_button_pane_cp03_ParamLimits

0xcd5c,	// (0x0005439b) bg_button_pane_cp03

0xcdb5,	// (0x000543f4) cell_dialer_command_1_pane_g1_ParamLimits

0xcdb5,	// (0x000543f4) cell_dialer_command_1_pane_g1

0x45ec,	// (0x0004bc2b) bg_button_pane_cp04

0xd00f,	// (0x0005464e) cell_dialer_command_2_pane_g1

0x45ec,	// (0x0004bc2b) bg_button_pane_cp06

0xd00f,	// (0x0005464e) dialer_ne_clear_pane_g1

0xd8f8,	// (0x00054f37) navi_pane_g2

0xd926,	// (0x00054f65) navi_pane_g3

0x0002,

0xf379,	// (0x000569b8) navi_pane_g

0xd9b5,	// (0x00054ff4) navi_pane_mv_g2

0xd9dc,	// (0x0005501b) navi_pane_mv_g5

0x6eed,	// (0x0004e52c) navi_pane_mv_t1

0xce27,	// (0x00054466) main_clock2_pane

0x4ee4,	// (0x0004c523) main_clock2_list_pane_ParamLimits

0x4ee4,	// (0x0004c523) main_clock2_list_pane

0x86e4,	// (0x0004fd23) main_clock2_pane_t1_ParamLimits

0x86e4,	// (0x0004fd23) main_clock2_pane_t1

0x8712,	// (0x0004fd51) main_clock2_pane_t2_ParamLimits

0x8712,	// (0x0004fd51) main_clock2_pane_t2

0x0004,

0xf769,	// (0x00056da8) main_clock2_pane_t_ParamLimits

0xf769,	// (0x00056da8) main_clock2_pane_t

0x8777,	// (0x0004fdb6) popup_clock_analogue_window_cp03_ParamLimits

0x8777,	// (0x0004fdb6) popup_clock_analogue_window_cp03

0x8795,	// (0x0004fdd4) popup_clock_digital_window_cp02_ParamLimits

0x8795,	// (0x0004fdd4) popup_clock_digital_window_cp02

0x880a,	// (0x0004fe49) main_clock2_list_single_pane_ParamLimits

0x880a,	// (0x0004fe49) main_clock2_list_single_pane

0xcfd9,	// (0x00054618) list_highlight_pane_cp05

0x1057,	// (0x00048696) main_clock2_list_single_pane_t1

0x5a75,	// (0x0004d0b4) popup_toolbar_window_cp04_ParamLimits

0xcdc3,	// (0x00054402) camera2_autofocus_pane_g2_ParamLimits

0xcdc3,	// (0x00054402) camera2_autofocus_pane_g2

0xcdc3,	// (0x00054402) camera2_autofocus_pane_g3_ParamLimits

0xcdc3,	// (0x00054402) camera2_autofocus_pane_g3

0xcdc3,	// (0x00054402) camera2_autofocus_pane_g4_ParamLimits

0xcdc3,	// (0x00054402) camera2_autofocus_pane_g4

0xcdc3,	// (0x00054402) camera2_autofocus_pane_g5_ParamLimits

0xcdc3,	// (0x00054402) camera2_autofocus_pane_g5

0x0004,

0xf6ad,	// (0x00056cec) camera2_autofocus_pane_g_ParamLimits

0xf6ad,	// (0x00056cec) camera2_autofocus_pane_g

0x803f,	// (0x0004f67e) camera2_autofocus_pane_cp_g2

0x8047,	// (0x0004f686) camera2_autofocus_pane_cp_g3

0x804f,	// (0x0004f68e) camera2_autofocus_pane_cp_g4

0x8057,	// (0x0004f696) camera2_autofocus_pane_cp_g5

0x0004,

0xf713,	// (0x00056d52) camera2_autofocus_pane_cp_g

0x45ec,	// (0x0004bc2b) popup_dialer_spcha_window

0x45ec,	// (0x0004bc2b) bg_popup_sub_pane_cp07

0x45ec,	// (0x0004bc2b) list_spcha_pane

0x1065,	// (0x000486a4) list_single_spcha_pane_ParamLimits

0x1065,	// (0x000486a4) list_single_spcha_pane

0x45ec,	// (0x0004bc2b) list_highlight_pane_cp06

0xd54a,	// (0x00054b89) list_single_spcha_pane_t1

0xe7fd,	// (0x00055e3c) popup_call2_audio_out_window_g4_ParamLimits

0xe7fd,	// (0x00055e3c) popup_call2_audio_out_window_g4

0x48c0,	// (0x0004beff) main_imed2_pane

0x7aaf,	// (0x0004f0ee) popup_imed_adjust2_window

0x7ac2,	// (0x0004f101) popup_imed_trans_window_ParamLimits

0x7ac2,	// (0x0004f101) popup_imed_trans_window

0xefd6,	// (0x00056615) popup_blid_sat_info2_window_t1

0xefe4,	// (0x00056623) popup_blid_sat_info2_window_t2

0x000a,

0xf642,	// (0x00056c81) popup_blid_sat_info2_window_t

0x88bf,	// (0x0004fefe) aid_size_cell_colour_35

0x88d9,	// (0x0004ff18) aid_size_cell_colour_112

0x88f0,	// (0x0004ff2f) aid_size_cell_effect

0xcd5c,	// (0x0005439b) bg_tb_trans_pane_cp02

0xf009,	// (0x00056648) heading_imed_pane

0x890a,	// (0x0004ff49) listscroll_imed_pane

0x1077,	// (0x000486b6) heading_imed_pane_g1

0x107f,	// (0x000486be) heading_imed_pane_t1

0x108d,	// (0x000486cc) grid_imed_colour_35_pane_ParamLimits

0x108d,	// (0x000486cc) grid_imed_colour_35_pane

0x8916,	// (0x0004ff55) grid_imed_effect_pane

0x10a5,	// (0x000486e4) list_imed_aspect_pane

0x8926,	// (0x0004ff65) scroll_pane_cp027_ParamLimits

0x8926,	// (0x0004ff65) scroll_pane_cp027

0x8932,	// (0x0004ff71) cell_imed_effect_pane_ParamLimits

0x8932,	// (0x0004ff71) cell_imed_effect_pane

0x10ad,	// (0x000486ec) cell_imed_colour_pane_ParamLimits

0x10ad,	// (0x000486ec) cell_imed_colour_pane

0x10ef,	// (0x0004872e) cell_imed_colour_pane_g1_ParamLimits

0x10ef,	// (0x0004872e) cell_imed_colour_pane_g1

0x1100,	// (0x0004873f) hgihlgiht_grid_pane_cp016_ParamLimits

0x1100,	// (0x0004873f) hgihlgiht_grid_pane_cp016

0x894a,	// (0x0004ff89) cell_imed_effect_pane_g1

0x8952,	// (0x0004ff91) grid_highlight_pane_cp017

0x1111,	// (0x00048750) list_imed_single_pane_ParamLimits

0x1111,	// (0x00048750) list_imed_single_pane

0x45ec,	// (0x0004bc2b) list_highlight_pane_cp07

0x1126,	// (0x00048765) list_imed_aspect_pane_comp1_t1

0xed6f,	// (0x000563ae) bg_tb_trans_pane_cp05

0x1148,	// (0x00048787) popup_imed_adjust2_window_g1

0x116f,	// (0x000487ae) popup_imed_adjust2_window_t1

0x1187,	// (0x000487c6) slider_imed_adjust_pane

0x119b,	// (0x000487da) slider_imed_adjust_pane_g1

0x11ab,	// (0x000487ea) slider_imed_adjust_pane_g2

0x11bb,	// (0x000487fa) slider_imed_adjust_pane_g3

0x11cc,	// (0x0004880b) slider_imed_adjust_pane_g4

0x0003,

0xf786,	// (0x00056dc5) slider_imed_adjust_pane_g

0x895b,	// (0x0004ff9a) aid_size_cell_clipart2

0x8967,	// (0x0004ffa6) grid_imed_clipart_pane

0x11dd,	// (0x0004881c) scroll_pane_cp031

0x8971,	// (0x0004ffb0) cell_imed_clipart_pane_ParamLimits

0x8971,	// (0x0004ffb0) cell_imed_clipart_pane

0x8994,	// (0x0004ffd3) cell_imed_clipart_pane_g1

0x45ec,	// (0x0004bc2b) grid_highlight_pane_cp014

0x86c6,	// (0x0004fd05) main_clock2_pane_g1_ParamLimits

0x86c6,	// (0x0004fd05) main_clock2_pane_g1

0x87b1,	// (0x0004fdf0) aid_call2_pane_cp10

0x87c3,	// (0x0004fe02) aid_call_pane_cp10

0xd857,	// (0x00054e96) popup_clock_analogue_window_cp10_g1

0xd857,	// (0x00054e96) popup_clock_analogue_window_cp10_g2

0x87d5,	// (0x0004fe14) popup_clock_analogue_window_cp10_g3

0x87d5,	// (0x0004fe14) popup_clock_analogue_window_cp10_g4

0xd857,	// (0x00054e96) popup_clock_analogue_window_cp10_g5

0x0004,

0xf774,	// (0x00056db3) popup_clock_analogue_window_cp10_g

0x87eb,	// (0x0004fe2a) popup_clock_analogue_window_cp10_t1

0x881c,	// (0x0004fe5b) clock_digital_number_pane_cp10_ParamLimits

0x881c,	// (0x0004fe5b) clock_digital_number_pane_cp10

0x8836,	// (0x0004fe75) clock_digital_number_pane_cp11_ParamLimits

0x8836,	// (0x0004fe75) clock_digital_number_pane_cp11

0x8850,	// (0x0004fe8f) clock_digital_number_pane_cp12_ParamLimits

0x8850,	// (0x0004fe8f) clock_digital_number_pane_cp12

0x886a,	// (0x0004fea9) clock_digital_number_pane_cp13_ParamLimits

0x886a,	// (0x0004fea9) clock_digital_number_pane_cp13

0x8884,	// (0x0004fec3) clock_digital_separator_pane_cp10_ParamLimits

0x8884,	// (0x0004fec3) clock_digital_separator_pane_cp10

0x889e,	// (0x0004fedd) popup_clock_digital_window_cp02_t1_ParamLimits

0x889e,	// (0x0004fedd) popup_clock_digital_window_cp02_t1

0xcd32,	// (0x00054371) clock_digital_number_pane_cp10_g1

0xcd32,	// (0x00054371) clock_digital_number_pane_cp10_g2

0x0001,

0xf78f,	// (0x00056dce) clock_digital_number_pane_cp10_g

0xcd32,	// (0x00054371) clock_digital_separator_pane_cp10_g1

0xcd32,	// (0x00054371) clock_digital_separator_pane_g2_cp10

0xd9e4,	// (0x00055023) navi_pane_vded_g4

0xd9ed,	// (0x0005502c) navi_pane_vded_g5

0xd9f6,	// (0x00055035) navi_pane_vded_t1

0x48c0,	// (0x0004beff) main_vded_pane

0x899d,	// (0x0004ffdc) main_vded_pane_g1

0x89a9,	// (0x0004ffe8) main_vded_pane_g2

0x89b3,	// (0x0004fff2) main_vded_pane_g3

0x0002,

0xf794,	// (0x00056dd3) main_vded_pane_g

0x89bd,	// (0x0004fffc) main_vded_pane_t1

0x89cb,	// (0x0005000a) main_vded_pane_t2

0x0001,

0xf79b,	// (0x00056dda) main_vded_pane_t

0x89d9,	// (0x00050018) vded_slider_pane

0x89e3,	// (0x00050022) vded_video_pane

0x11e5,	// (0x00048824) vded_video_pane_g1

0x89ed,	// (0x0005002c) vded_video_pane_g2

0xd00f,	// (0x0005464e) vded_video_pane_g3

0x0002,

0xf7a0,	// (0x00056ddf) vded_video_pane_g

0x11ef,	// (0x0004882e) vded_slider_pane_g1

0xef01,	// (0x00056540) vded_slider_pane_g2

0x11f8,	// (0x00048837) vded_slider_pane_g3

0x1201,	// (0x00048840) vded_slider_pane_g4

0x120a,	// (0x00048849) vded_slider_pane_g5

0x0004,

0xf7a7,	// (0x00056de6) vded_slider_pane_g

0x85a0,	// (0x0004fbdf) mup3_rocker_pane_ParamLimits

0x85a0,	// (0x0004fbdf) mup3_rocker_pane

0x89f6,	// (0x00050035) mup3_control_keys_pane_g1

0x89fe,	// (0x0005003d) mup3_control_keys_pane_g2

0x8a06,	// (0x00050045) mup3_control_keys_pane_g3

0x8a0e,	// (0x0005004d) mup3_control_keys_pane_g4

0x0003,

0xf7b2,	// (0x00056df1) mup3_control_keys_pane_g

0x4874,	// (0x0004beb3) popup_toolbar2_fixed_window_cp01_ParamLimits

0x4874,	// (0x0004beb3) popup_toolbar2_fixed_window_cp01

0x85ba,	// (0x0004fbf9) popup_toolbar2_fixed_window_cp02_ParamLimits

0x85ba,	// (0x0004fbf9) popup_toolbar2_fixed_window_cp02

0xe194,	// (0x000557d3) popup_call2_audio_second_window_t4_ParamLimits

0xe194,	// (0x000557d3) popup_call2_audio_second_window_t4

0xe6c2,	// (0x00055d01) popup_call2_audio_first_window_t6_ParamLimits

0xe6c2,	// (0x00055d01) popup_call2_audio_first_window_t6

0xe900,	// (0x00055f3f) popup_call2_audio_out_window_t6_ParamLimits

0xe900,	// (0x00055f3f) popup_call2_audio_out_window_t6

0x48c0,	// (0x0004beff) main_vitu_pane

0x4ee4,	// (0x0004c523) aid_size_cell_itu_ParamLimits

0x4ee4,	// (0x0004c523) aid_size_cell_itu

0x4ee4,	// (0x0004c523) bg_popup_window_pane_cp08_ParamLimits

0x4ee4,	// (0x0004c523) bg_popup_window_pane_cp08

0x4ee4,	// (0x0004c523) field_vitu_entry_pane_ParamLimits

0x4ee4,	// (0x0004c523) field_vitu_entry_pane

0x4ee4,	// (0x0004c523) grid_vitu_function_pane_ParamLimits

0x4ee4,	// (0x0004c523) grid_vitu_function_pane

0x4ee4,	// (0x0004c523) grid_vitu_itu_pane_ParamLimits

0x4ee4,	// (0x0004c523) grid_vitu_itu_pane

0x4ee4,	// (0x0004c523) cell_vitu_itu_pane_ParamLimits

0x4ee4,	// (0x0004c523) cell_vitu_itu_pane

0x4ee4,	// (0x0004c523) cell_vitu_function_pane_ParamLimits

0x4ee4,	// (0x0004c523) cell_vitu_function_pane

0xcd5c,	// (0x0005439b) bg_popup_sub_pane_cp08_ParamLimits

0xcd5c,	// (0x0005439b) bg_popup_sub_pane_cp08

0xd029,	// (0x00054668) field_vitu_entry_pane_t1_ParamLimits

0xd029,	// (0x00054668) field_vitu_entry_pane_t1

0x1213,	// (0x00048852) field_vitu_entry_pane_t2_ParamLimits

0x1213,	// (0x00048852) field_vitu_entry_pane_t2

0x0001,

0xf7bb,	// (0x00056dfa) field_vitu_entry_pane_t_ParamLimits

0xf7bb,	// (0x00056dfa) field_vitu_entry_pane_t

0xdad3,	// (0x00055112) bg_button_pane_cp05_ParamLimits

0xdad3,	// (0x00055112) bg_button_pane_cp05

0x1230,	// (0x0004886f) cell_vitu_itu_pane_g1

0xf015,	// (0x00056654) cell_vitu_itu_pane_t1_ParamLimits

0xf015,	// (0x00056654) cell_vitu_itu_pane_t1

0xf015,	// (0x00056654) cell_vitu_itu_pane_t2_ParamLimits

0xf015,	// (0x00056654) cell_vitu_itu_pane_t2

0x0002,

0xf7c0,	// (0x00056dff) cell_vitu_itu_pane_t_ParamLimits

0xf7c0,	// (0x00056dff) cell_vitu_itu_pane_t

0x45ec,	// (0x0004bc2b) bg_button_pane_cp07

0xd00f,	// (0x0005464e) cell_vitu_function_pane_g1

0x4f6a,	// (0x0004c5a9) main_calc_pane_g1

0x4632,	// (0x0004bc71) aid_visual_content_pane

0x48c0,	// (0x0004beff) main_vradio_pane

0xcdc3,	// (0x00054402) main_vradio_pane_g1_ParamLimits

0xcdc3,	// (0x00054402) main_vradio_pane_g1

0xcdc3,	// (0x00054402) main_vradio_pane_g2_ParamLimits

0xcdc3,	// (0x00054402) main_vradio_pane_g2

0x0001,

0xf7c7,	// (0x00056e06) main_vradio_pane_g_ParamLimits

0xf7c7,	// (0x00056e06) main_vradio_pane_g

0xcfe1,	// (0x00054620) main_vradio_pane_t1_ParamLimits

0xcfe1,	// (0x00054620) main_vradio_pane_t1

0xcfe1,	// (0x00054620) main_vradio_pane_t2_ParamLimits

0xcfe1,	// (0x00054620) main_vradio_pane_t2

0xcfe1,	// (0x00054620) main_vradio_pane_t3_ParamLimits

0xcfe1,	// (0x00054620) main_vradio_pane_t3

0x0002,

0xf7cc,	// (0x00056e0b) main_vradio_pane_t_ParamLimits

0xf7cc,	// (0x00056e0b) main_vradio_pane_t

0x4ee4,	// (0x0004c523) vradio_rocker_control_pane_ParamLimits

0x4ee4,	// (0x0004c523) vradio_rocker_control_pane

0x4ee4,	// (0x0004c523) vradio_station_info_pane_ParamLimits

0x4ee4,	// (0x0004c523) vradio_station_info_pane

0xcd5c,	// (0x0005439b) vradio_frequency_info_pane_ParamLimits

0xcd5c,	// (0x0005439b) vradio_frequency_info_pane

0xd00f,	// (0x0005464e) vradio_station_info_pane_g1

0xf015,	// (0x00056654) vradio_station_info_pane_t1_ParamLimits

0xf015,	// (0x00056654) vradio_station_info_pane_t1

0xcfe1,	// (0x00054620) vradio_station_info_pane_t2_ParamLimits

0xcfe1,	// (0x00054620) vradio_station_info_pane_t2

0x0001,

0xf7d3,	// (0x00056e12) vradio_station_info_pane_t_ParamLimits

0xf7d3,	// (0x00056e12) vradio_station_info_pane_t

0x45ec,	// (0x0004bc2b) vradio_tuning_pane

0x8a1e,	// (0x0005005d) vradio_rocker_control_pane_g1

0x124c,	// (0x0004888b) vradio_rocker_control_pane_g2

0x8a26,	// (0x00050065) vradio_rocker_control_pane_g3

0x8a2e,	// (0x0005006d) vradio_rocker_control_pane_g4

0x8a36,	// (0x00050075) vradio_rocker_control_pane_g5

0x0004,

0xf7d8,	// (0x00056e17) vradio_rocker_control_pane_g

0xd00f,	// (0x0005464e) vradio_frequency_info_pane_g1

0xd029,	// (0x00054668) vradio_frequency_info_pane_t1_ParamLimits

0xd029,	// (0x00054668) vradio_frequency_info_pane_t1

0x8a3e,	// (0x0005007d) vradio_tuning_pane_g1

0x8a4b,	// (0x0005008a) vradio_tuning_pane_t1

0x467b,	// (0x0004bcba) area_side_right_pane_ParamLimits

0x467b,	// (0x0004bcba) area_side_right_pane

0xed2a,	// (0x00056369) status_small_pane_g1

0xed32,	// (0x00056371) status_small_pane_g2

0xed3b,	// (0x0005637a) status_small_pane_g3

0xed44,	// (0x00056383) status_small_pane_g4

0x0003,

0xf5a4,	// (0x00056be3) status_small_pane_g

0xed4d,	// (0x0005638c) status_small_pane_t1

0x48c0,	// (0x0004beff) main_video3_pane

0x1254,	// (0x00048893) cams_zoom_vslider_pane

0x125c,	// (0x0004889b) image3_wide_pane_ParamLimits

0x125c,	// (0x0004889b) image3_wide_pane

0x1276,	// (0x000488b5) image3_wide_small_pane

0x1282,	// (0x000488c1) main_video3_pane_g1_ParamLimits

0x1282,	// (0x000488c1) main_video3_pane_g1

0x129e,	// (0x000488dd) main_video3_pane_g2_ParamLimits

0x129e,	// (0x000488dd) main_video3_pane_g2

0x0001,

0xf7e3,	// (0x00056e22) main_video3_pane_g_ParamLimits

0xf7e3,	// (0x00056e22) main_video3_pane_g

0x12ba,	// (0x000488f9) main_video3_pane_t1_ParamLimits

0x12ba,	// (0x000488f9) main_video3_pane_t1

0x12e5,	// (0x00048924) main_video3_pane_t2_ParamLimits

0x12e5,	// (0x00048924) main_video3_pane_t2

0x1310,	// (0x0004894f) main_video3_pane_t3_ParamLimits

0x1310,	// (0x0004894f) main_video3_pane_t3

0x0002,

0xf7e8,	// (0x00056e27) main_video3_pane_t_ParamLimits

0xf7e8,	// (0x00056e27) main_video3_pane_t

0x133d,	// (0x0004897c) cams_zoom_vslider_pane_g1

0x1346,	// (0x00048985) cams_zoom_vslider_pane_g2

0x0001,

0xf7ef,	// (0x00056e2e) cams_zoom_vslider_pane_g

0x134e,	// (0x0004898d) small_slider_vertical_pane

0xd00f,	// (0x0005464e) small_slider_vertical_pane_g1

0xd00f,	// (0x0005464e) small_slider_vertical_pane_g2

0x1356,	// (0x00048995) small_slider_vertical_pane_g3

0x0002,

0xf7f4,	// (0x00056e33) small_slider_vertical_pane_g

0x48c0,	// (0x0004beff) main_hwr_training_pane

0x135f,	// (0x0004899e) hwr_training_instruct_pane_ParamLimits

0x135f,	// (0x0004899e) hwr_training_instruct_pane

0x8a5a,	// (0x00050099) hwr_training_navi_pane_ParamLimits

0x8a5a,	// (0x00050099) hwr_training_navi_pane

0x8a74,	// (0x000500b3) hwr_training_write_pane_ParamLimits

0x8a74,	// (0x000500b3) hwr_training_write_pane

0x45ec,	// (0x0004bc2b) bg_frame_shadow_pane

0x1396,	// (0x000489d5) hwr_training_write_pane_g1

0x139e,	// (0x000489dd) hwr_training_write_pane_g2

0x13a6,	// (0x000489e5) hwr_training_write_pane_g3

0x13ae,	// (0x000489ed) hwr_training_write_pane_g4

0x13b6,	// (0x000489f5) hwr_training_write_pane_g5

0x13be,	// (0x000489fd) hwr_training_write_pane_g6

0x13c6,	// (0x00048a05) hwr_training_write_pane_g7

0x0006,

0xf7fb,	// (0x00056e3a) hwr_training_write_pane_g

0x8aac,	// (0x000500eb) hwr_training_navi_pane_g1_ParamLimits

0x8aac,	// (0x000500eb) hwr_training_navi_pane_g1

0x8abe,	// (0x000500fd) hwr_training_navi_pane_g2_ParamLimits

0x8abe,	// (0x000500fd) hwr_training_navi_pane_g2

0x8ad0,	// (0x0005010f) hwr_training_navi_pane_g3_ParamLimits

0x8ad0,	// (0x0005010f) hwr_training_navi_pane_g3

0x8ae0,	// (0x0005011f) hwr_training_navi_pane_g4_ParamLimits

0x8ae0,	// (0x0005011f) hwr_training_navi_pane_g4

0x0004,

0xf80a,	// (0x00056e49) hwr_training_navi_pane_g_ParamLimits

0xf80a,	// (0x00056e49) hwr_training_navi_pane_g

0x8afa,	// (0x00050139) hwr_training_navi_pane_t1

0x8b08,	// (0x00050147) list_single_hwr_training_instruct_pane_ParamLimits

0x8b08,	// (0x00050147) list_single_hwr_training_instruct_pane

0x141d,	// (0x00048a5c) list_single_hwr_training_instruct_pane_t1

0x0b48,	// (0x00048187) bg_frame_shadow_pane_g1

0x142c,	// (0x00048a6b) bg_frame_shadow_pane_g2

0x1434,	// (0x00048a73) bg_frame_shadow_pane_g3

0x143c,	// (0x00048a7b) bg_frame_shadow_pane_g4

0x1444,	// (0x00048a83) bg_frame_shadow_pane_g5

0x144c,	// (0x00048a8b) bg_frame_shadow_pane_g6

0x1454,	// (0x00048a93) bg_frame_shadow_pane_g7

0xced6,	// (0x00054515) bg_frame_shadow_pane_g8

0x0007,

0xf815,	// (0x00056e54) bg_frame_shadow_pane_g

0x48c0,	// (0x0004beff) main_video_tele_dialer_pane

0x8b31,	// (0x00050170) aid_size_cell_video_keypad_ParamLimits

0x8b31,	// (0x00050170) aid_size_cell_video_keypad

0x8b41,	// (0x00050180) grid_video_dialer_keypad_pane_ParamLimits

0x8b41,	// (0x00050180) grid_video_dialer_keypad_pane

0x8b75,	// (0x000501b4) video_down_pane_cp_ParamLimits

0x8b75,	// (0x000501b4) video_down_pane_cp

0x8b9f,	// (0x000501de) cell_video_dialer_keypad_pane_ParamLimits

0x8b9f,	// (0x000501de) cell_video_dialer_keypad_pane

0x145c,	// (0x00048a9b) bg_button_pane_cp08_ParamLimits

0x145c,	// (0x00048a9b) bg_button_pane_cp08

0x8bb4,	// (0x000501f3) cell_video_dialer_keypad_pane_g1_ParamLimits

0x8bb4,	// (0x000501f3) cell_video_dialer_keypad_pane_g1

0x8594,	// (0x0004fbd3) mup3_rocker2_pane_ParamLimits

0x8594,	// (0x0004fbd3) mup3_rocker2_pane

0xd00f,	// (0x0005464e) mup3_rocker2_pane_g1

0x7a17,	// (0x0004f056) main_dialer2_pane

0x48c0,	// (0x0004beff) main_mp4_pane

0x8c0c,	// (0x0005024b) main_mp4_pane_g1_ParamLimits

0x8c0c,	// (0x0005024b) main_mp4_pane_g1

0x8c1a,	// (0x00050259) main_mp4_pane_g2_ParamLimits

0x8c1a,	// (0x00050259) main_mp4_pane_g2

0x8c28,	// (0x00050267) main_mp4_pane_g3_ParamLimits

0x8c28,	// (0x00050267) main_mp4_pane_g3

0x8c6d,	// (0x000502ac) main_mp4_pane_g4_ParamLimits

0x8c6d,	// (0x000502ac) main_mp4_pane_g4

0x8c9b,	// (0x000502da) main_mp4_pane_g5_ParamLimits

0x8c9b,	// (0x000502da) main_mp4_pane_g5

0x0007,

0xf835,	// (0x00056e74) main_mp4_pane_g_ParamLimits

0xf835,	// (0x00056e74) main_mp4_pane_g

0x8d0f,	// (0x0005034e) main_mp4_pane_t1_ParamLimits

0x8d0f,	// (0x0005034e) main_mp4_pane_t1

0x8d6b,	// (0x000503aa) main_mp4_pane_t2_ParamLimits

0x8d6b,	// (0x000503aa) main_mp4_pane_t2

0x1486,	// (0x00048ac5) main_mp4_pane_t3_ParamLimits

0x1486,	// (0x00048ac5) main_mp4_pane_t3

0x8dbd,	// (0x000503fc) main_mp4_pane_t4_ParamLimits

0x8dbd,	// (0x000503fc) main_mp4_pane_t4

0x0003,

0xf846,	// (0x00056e85) main_mp4_pane_t_ParamLimits

0xf846,	// (0x00056e85) main_mp4_pane_t

0x8e01,	// (0x00050440) mp4_progress_pane_ParamLimits

0x8e01,	// (0x00050440) mp4_progress_pane

0x8e4b,	// (0x0005048a) mp4_rocker_pane_ParamLimits

0x8e4b,	// (0x0005048a) mp4_rocker_pane

0x14b4,	// (0x00048af3) mp4_progress_pane_t1

0x14cd,	// (0x00048b0c) mp4_progress_pane_t2

0x0001,

0xf84f,	// (0x00056e8e) mp4_progress_pane_t

0x14e6,	// (0x00048b25) mup_progress_pane_cp04

0xf07b,	// (0x000566ba) mp4_rocker_pane_g1

0x8e6b,	// (0x000504aa) aid_cell_size_keypad2_ParamLimits

0x8e6b,	// (0x000504aa) aid_cell_size_keypad2

0x8e7b,	// (0x000504ba) dialer2_ne_pane_ParamLimits

0x8e7b,	// (0x000504ba) dialer2_ne_pane

0x8e89,	// (0x000504c8) grid_dialer2_keypad_pane_ParamLimits

0x8e89,	// (0x000504c8) grid_dialer2_keypad_pane

0x0a4d,	// (0x0004808c) bg_popup_call_pane_cp07_ParamLimits

0x0a4d,	// (0x0004808c) bg_popup_call_pane_cp07

0x8e99,	// (0x000504d8) dialer2_ne_pane_t1_ParamLimits

0x8e99,	// (0x000504d8) dialer2_ne_pane_t1

0x8ebe,	// (0x000504fd) cell_dialer2_keypad_pane_ParamLimits

0x8ebe,	// (0x000504fd) cell_dialer2_keypad_pane

0x150b,	// (0x00048b4a) bg_button_pane_pane_cp04_ParamLimits

0x150b,	// (0x00048b4a) bg_button_pane_pane_cp04

0x8ed3,	// (0x00050512) cell_dialer2_keypad_pane_g1_ParamLimits

0x8ed3,	// (0x00050512) cell_dialer2_keypad_pane_g1

0x5937,	// (0x0004cf76) aid_placing_vt_set_content_ParamLimits

0x5937,	// (0x0004cf76) aid_placing_vt_set_content

0x5963,	// (0x0004cfa2) aid_placing_vt_set_title_ParamLimits

0x5963,	// (0x0004cfa2) aid_placing_vt_set_title

0x48c0,	// (0x0004beff) main_image3_pane

0x8f6d,	// (0x000505ac) area_side_right_pane_cp01_ParamLimits

0x8f6d,	// (0x000505ac) area_side_right_pane_cp01

0x8f9a,	// (0x000505d9) main_image3_pane_g1_ParamLimits

0x8f9a,	// (0x000505d9) main_image3_pane_g1

0x8fa8,	// (0x000505e7) main_image3_pane_g2_ParamLimits

0x8fa8,	// (0x000505e7) main_image3_pane_g2

0x8fc1,	// (0x00050600) main_image3_pane_g3_ParamLimits

0x8fc1,	// (0x00050600) main_image3_pane_g3

0x8fda,	// (0x00050619) main_image3_pane_g4_ParamLimits

0x8fda,	// (0x00050619) main_image3_pane_g4

0x0003,

0xf85e,	// (0x00056e9d) main_image3_pane_g_ParamLimits

0xf85e,	// (0x00056e9d) main_image3_pane_g

0x8ff3,	// (0x00050632) main_image3_pane_t1_ParamLimits

0x8ff3,	// (0x00050632) main_image3_pane_t1

0x9018,	// (0x00050657) main_image3_pane_t2_ParamLimits

0x9018,	// (0x00050657) main_image3_pane_t2

0x9037,	// (0x00050676) main_image3_pane_t3_ParamLimits

0x9037,	// (0x00050676) main_image3_pane_t3

0x0003,

0xf867,	// (0x00056ea6) main_image3_pane_t_ParamLimits

0xf867,	// (0x00056ea6) main_image3_pane_t

0x4ee4,	// (0x0004c523) grid_sctrl_middle_pane_cp01_ParamLimits

0x4ee4,	// (0x0004c523) grid_sctrl_middle_pane_cp01

0x9098,	// (0x000506d7) cell_sctrl_middle_pane_cp01_ParamLimits

0x9098,	// (0x000506d7) cell_sctrl_middle_pane_cp01

0x90a9,	// (0x000506e8) cell_sctrl_middle_pane_cp01_g1_ParamLimits

0x90a9,	// (0x000506e8) cell_sctrl_middle_pane_cp01_g1

0x48c0,	// (0x0004beff) main_call4_pane

0x90b6,	// (0x000506f5) aid_size_button_call4_ParamLimits

0x90b6,	// (0x000506f5) aid_size_button_call4

0x90ec,	// (0x0005072b) call4_windows_pane_ParamLimits

0x90ec,	// (0x0005072b) call4_windows_pane

0x9101,	// (0x00050740) grid_call4_button_pane_ParamLimits

0x9101,	// (0x00050740) grid_call4_button_pane

0x912f,	// (0x0005076e) call4_windows_conf_pane

0x9144,	// (0x00050783) popup_call4_audio_first_window_ParamLimits

0x9144,	// (0x00050783) popup_call4_audio_first_window

0x9194,	// (0x000507d3) popup_call4_audio_second_window_ParamLimits

0x9194,	// (0x000507d3) popup_call4_audio_second_window

0x91ad,	// (0x000507ec) popup_call4_audio_wait_window_ParamLimits

0x91ad,	// (0x000507ec) popup_call4_audio_wait_window

0x91bb,	// (0x000507fa) cell_call4_button_pane_ParamLimits

0x91bb,	// (0x000507fa) cell_call4_button_pane

0x91de,	// (0x0005081d) bg_button_pane_cp09_ParamLimits

0x91de,	// (0x0005081d) bg_button_pane_cp09

0x91ea,	// (0x00050829) cell_call4_button_pane_g1_ParamLimits

0x91ea,	// (0x00050829) cell_call4_button_pane_g1

0x91f7,	// (0x00050836) cell_call4_button_pane_t1_ParamLimits

0x91f7,	// (0x00050836) cell_call4_button_pane_t1

0x151f,	// (0x00048b5e) popup_call4_audio_conf_window_ParamLimits

0x151f,	// (0x00048b5e) popup_call4_audio_conf_window

0x85c7,	// (0x0004fc06) mup3_progress_pane_t1_ParamLimits

0x85e6,	// (0x0004fc25) mup3_progress_pane_t2_ParamLimits

0x0f26,	// (0x00048565) mup3_progress_pane_t3_ParamLimits

0xf73c,	// (0x00056d7b) mup3_progress_pane_t_ParamLimits

0x0f43,	// (0x00048582) mup_progress_pane_cp03_ParamLimits

0x8a16,	// (0x00050055) mup3_control_keys_pane_g4_copy1

0x8e2f,	// (0x0005046e) mp4_rocker2_pane_ParamLimits

0x8e2f,	// (0x0005046e) mp4_rocker2_pane

0x153b,	// (0x00048b7a) mp4_rocker2_pane_g1

0x1533,	// (0x00048b72) mp4_rocker2_pane_g2

0x923b,	// (0x0005087a) mp4_rocker2_pane_g3

0x9243,	// (0x00050882) mp4_rocker2_pane_g4

0x924b,	// (0x0005088a) mp4_rocker2_pane_g5

0x0004,

0xf870,	// (0x00056eaf) mp4_rocker2_pane_g

0x48c0,	// (0x0004beff) main_camera4_pane

0x48c0,	// (0x0004beff) main_video4_pane

0x8b51,	// (0x00050190) main_video_tele_dialer_pane_t1_ParamLimits

0x8b51,	// (0x00050190) main_video_tele_dialer_pane_t1

0x8b63,	// (0x000501a2) main_video_tele_dialer_pane_t2_ParamLimits

0x8b63,	// (0x000501a2) main_video_tele_dialer_pane_t2

0x0001,

0xf826,	// (0x00056e65) main_video_tele_dialer_pane_t_ParamLimits

0xf826,	// (0x00056e65) main_video_tele_dialer_pane_t

0x926b,	// (0x000508aa) cam4_autofocus_pane_ParamLimits

0x926b,	// (0x000508aa) cam4_autofocus_pane

0x9285,	// (0x000508c4) cam4_image_uncrop_pane_ParamLimits

0x9285,	// (0x000508c4) cam4_image_uncrop_pane

0x929c,	// (0x000508db) cam4_indicators_pane_ParamLimits

0x929c,	// (0x000508db) cam4_indicators_pane

0x92b8,	// (0x000508f7) main_camera4_pane_g1_ParamLimits

0x92b8,	// (0x000508f7) main_camera4_pane_g1

0x92c4,	// (0x00050903) main_camera4_pane_g2_ParamLimits

0x92c4,	// (0x00050903) main_camera4_pane_g2

0x92c4,	// (0x00050903) main_camera4_pane_g3_ParamLimits

0x92c4,	// (0x00050903) main_camera4_pane_g3

0x92d0,	// (0x0005090f) main_camera4_pane_g4_ParamLimits

0x92d0,	// (0x0005090f) main_camera4_pane_g4

0x92dc,	// (0x0005091b) main_camera4_pane_g5_ParamLimits

0x92dc,	// (0x0005091b) main_camera4_pane_g5

0x0005,

0xf87b,	// (0x00056eba) main_camera4_pane_g_ParamLimits

0xf87b,	// (0x00056eba) main_camera4_pane_g

0x92f6,	// (0x00050935) main_camera4_pane_t1_ParamLimits

0x92f6,	// (0x00050935) main_camera4_pane_t1

0x2828,	// (0x00049e67) bg_tb_trans_pane_cp06

0x9346,	// (0x00050985) cam4_indicators_pane_g1

0x9357,	// (0x00050996) cam4_indicators_pane_g2

0x0002,

0xf896,	// (0x00056ed5) cam4_indicators_pane_g

0x936f,	// (0x000509ae) cam4_indicators_pane_t1

0x9399,	// (0x000509d8) main_video4_pane_g1_ParamLimits

0x9399,	// (0x000509d8) main_video4_pane_g1

0x93a5,	// (0x000509e4) main_video4_pane_g2_ParamLimits

0x93a5,	// (0x000509e4) main_video4_pane_g2

0x93b1,	// (0x000509f0) main_video4_pane_g3_ParamLimits

0x93b1,	// (0x000509f0) main_video4_pane_g3

0x93bd,	// (0x000509fc) main_video4_pane_g4_ParamLimits

0x93bd,	// (0x000509fc) main_video4_pane_g4

0x0004,

0xf89d,	// (0x00056edc) main_video4_pane_g_ParamLimits

0xf89d,	// (0x00056edc) main_video4_pane_g

0x93dd,	// (0x00050a1c) vid4_indicators_pane_ParamLimits

0x93dd,	// (0x00050a1c) vid4_indicators_pane

0x93fc,	// (0x00050a3b) video4_image_uncrop_cif_pane_ParamLimits

0x93fc,	// (0x00050a3b) video4_image_uncrop_cif_pane

0x940b,	// (0x00050a4a) video4_image_uncrop_nhd_pane_ParamLimits

0x940b,	// (0x00050a4a) video4_image_uncrop_nhd_pane

0x9285,	// (0x000508c4) video4_image_uncrop_vga_pane_ParamLimits

0x9285,	// (0x000508c4) video4_image_uncrop_vga_pane

0x7a09,	// (0x0004f048) bg_tb_trans_pane_cp07

0x9420,	// (0x00050a5f) vid4_indicators_pane_g1

0x9434,	// (0x00050a73) vid4_indicators_pane_g2

0x9448,	// (0x00050a87) vid4_indicators_pane_g3

0x0004,

0xf8a8,	// (0x00056ee7) vid4_indicators_pane_g

0x9475,	// (0x00050ab4) vid4_indicators_pane_t1

0x948c,	// (0x00050acb) cam4_autofocus_pane_g1

0x9494,	// (0x00050ad3) cam4_autofocus_pane_g2

0x949c,	// (0x00050adb) cam4_autofocus_pane_g3

0x0002,

0xf8b3,	// (0x00056ef2) cam4_autofocus_pane_g

0x94a4,	// (0x00050ae3) cam4_autofocus_pane_g3_copy1

0x8b83,	// (0x000501c2) video_down_pane_cp_t1

0x8b91,	// (0x000501d0) video_down_pane_cp_t2

0x0001,

0xf82b,	// (0x00056e6a) video_down_pane_cp_t

0x48a6,	// (0x0004bee5) popup_vitu2_window_ParamLimits

0x48a6,	// (0x0004bee5) popup_vitu2_window

0x94ac,	// (0x00050aeb) aid_size_cell2_itu2_ParamLimits

0x94ac,	// (0x00050aeb) aid_size_cell2_itu2

0x94c8,	// (0x00050b07) aid_size_cell_itu2_ParamLimits

0x94c8,	// (0x00050b07) aid_size_cell_itu2

0x9502,	// (0x00050b41) bg_popup_window_pane_cp09_ParamLimits

0x9502,	// (0x00050b41) bg_popup_window_pane_cp09

0x9510,	// (0x00050b4f) field_vitu2_entry_pane_ParamLimits

0x9510,	// (0x00050b4f) field_vitu2_entry_pane

0x952e,	// (0x00050b6d) grid_vitu2_function_pane_ParamLimits

0x952e,	// (0x00050b6d) grid_vitu2_function_pane

0x956e,	// (0x00050bad) grid_vitu2_itu_pane_ParamLimits

0x956e,	// (0x00050bad) grid_vitu2_itu_pane

0x95d2,	// (0x00050c11) cell_vitu2_itu_pane_ParamLimits

0x95d2,	// (0x00050c11) cell_vitu2_itu_pane

0x95eb,	// (0x00050c2a) cell_vitu2_function_pane_ParamLimits

0x95eb,	// (0x00050c2a) cell_vitu2_function_pane

0x1543,	// (0x00048b82) bg_popup_call_pane_cp08_ParamLimits

0x1543,	// (0x00048b82) bg_popup_call_pane_cp08

0x155a,	// (0x00048b99) field_vitu2_entry_pane_g1

0x1566,	// (0x00048ba5) field_vitu2_entry_pane_g2

0x0002,

0xf8ba,	// (0x00056ef9) field_vitu2_entry_pane_g

0x962c,	// (0x00050c6b) field_vitu2_entry_pane_t1_ParamLimits

0x962c,	// (0x00050c6b) field_vitu2_entry_pane_t1

0x1572,	// (0x00048bb1) field_vitu2_entry_pane_t2_ParamLimits

0x1572,	// (0x00048bb1) field_vitu2_entry_pane_t2

0x0001,

0xf8c1,	// (0x00056f00) field_vitu2_entry_pane_t_ParamLimits

0xf8c1,	// (0x00056f00) field_vitu2_entry_pane_t

0x7d4d,	// (0x0004f38c) bg_button_pane_cp010_ParamLimits

0x7d4d,	// (0x0004f38c) bg_button_pane_cp010

0x9661,	// (0x00050ca0) cell_vitu2_itu_pane_g1

0x9687,	// (0x00050cc6) cell_vitu2_itu_pane_t1_ParamLimits

0x9687,	// (0x00050cc6) cell_vitu2_itu_pane_t1

0x450c,	// (0x0004bb4b) cell_vitu2_itu_pane_t2_ParamLimits

0x450c,	// (0x0004bb4b) cell_vitu2_itu_pane_t2

0x0002,

0xf8cb,	// (0x00056f0a) cell_vitu2_itu_pane_t_ParamLimits

0xf8cb,	// (0x00056f0a) cell_vitu2_itu_pane_t

0x7a09,	// (0x0004f048) bg_button_pane_cp011

0x96d3,	// (0x00050d12) cell_vitu2_function_pane_g1

0x48c0,	// (0x0004beff) main_myfav_hc_pane

0x9079,	// (0x000506b8) popup_image3_note_pane_ParamLimits

0x9079,	// (0x000506b8) popup_image3_note_pane

0x9087,	// (0x000506c6) popup_image3_tool_bar_pane_ParamLimits

0x9087,	// (0x000506c6) popup_image3_tool_bar_pane

0x4582,	// (0x0004bbc1) cell_vitu2_itu_pane_t3_ParamLimits

0x4582,	// (0x0004bbc1) cell_vitu2_itu_pane_t3

0x45ec,	// (0x0004bc2b) bg_popup_trans_pane

0x1597,	// (0x00048bd6) grid_image3_tool_bar_pane

0x15a1,	// (0x00048be0) bg_popup_trans_pane_g1

0xd234,	// (0x00054873) bg_popup_trans_pane_g2

0x15a9,	// (0x00048be8) bg_popup_trans_pane_g3

0x15b1,	// (0x00048bf0) bg_popup_trans_pane_g4

0x15b9,	// (0x00048bf8) bg_popup_trans_pane_g5

0x15c1,	// (0x00048c00) bg_popup_trans_pane_g6

0x15c9,	// (0x00048c08) bg_popup_trans_pane_g7

0x15d1,	// (0x00048c10) bg_popup_trans_pane_g8

0xd214,	// (0x00054853) bg_popup_trans_pane_g9

0x0008,

0xf8d2,	// (0x00056f11) bg_popup_trans_pane_g

0x15d9,	// (0x00048c18) cell_image3_tool_bar_pane_ParamLimits

0x15d9,	// (0x00048c18) cell_image3_tool_bar_pane

0xd00f,	// (0x0005464e) cell_image3_tool_bar_pane_g1

0x45ec,	// (0x0004bc2b) bg_popup_trans_pane_cp1

0x15ed,	// (0x00048c2c) popup_image3_note_pane_t1

0x15fb,	// (0x00048c3a) popup_image3_note_pane_t2

0x1609,	// (0x00048c48) popup_image3_note_pane_t3

0x0002,

0xf8e5,	// (0x00056f24) popup_image3_note_pane_t

0x1617,	// (0x00048c56) popup_image3_note_pane_t3_copy1

0x96e7,	// (0x00050d26) bg_myfav_hc_instruction_pane_ParamLimits

0x96e7,	// (0x00050d26) bg_myfav_hc_instruction_pane

0x96ff,	// (0x00050d3e) cell_myfav_contact_pane_ParamLimits

0x96ff,	// (0x00050d3e) cell_myfav_contact_pane

0x9719,	// (0x00050d58) cell_myfav_contact_pane_cp1_ParamLimits

0x9719,	// (0x00050d58) cell_myfav_contact_pane_cp1

0x9731,	// (0x00050d70) cell_myfav_contact_pane_cp2_ParamLimits

0x9731,	// (0x00050d70) cell_myfav_contact_pane_cp2

0x9749,	// (0x00050d88) cell_myfav_contact_pane_cp3_ParamLimits

0x9749,	// (0x00050d88) cell_myfav_contact_pane_cp3

0x9760,	// (0x00050d9f) cell_myfav_contact_pane_cp4_ParamLimits

0x9760,	// (0x00050d9f) cell_myfav_contact_pane_cp4

0x9776,	// (0x00050db5) cell_myfav_contact_pane_cp5_ParamLimits

0x9776,	// (0x00050db5) cell_myfav_contact_pane_cp5

0x978a,	// (0x00050dc9) cell_myfav_contact_pane_cp6_ParamLimits

0x978a,	// (0x00050dc9) cell_myfav_contact_pane_cp6

0x979e,	// (0x00050ddd) cell_myfav_contact_pane_cp7_ParamLimits

0x979e,	// (0x00050ddd) cell_myfav_contact_pane_cp7

0x1625,	// (0x00048c64) listscroll_gen_pane_cp05

0x97b6,	// (0x00050df5) main_myfav_hc_pane_g1_ParamLimits

0x97b6,	// (0x00050df5) main_myfav_hc_pane_g1

0x97cc,	// (0x00050e0b) main_myfav_hc_pane_g2_ParamLimits

0x97cc,	// (0x00050e0b) main_myfav_hc_pane_g2

0x0002,

0xf8ec,	// (0x00056f2b) main_myfav_hc_pane_g_ParamLimits

0xf8ec,	// (0x00056f2b) main_myfav_hc_pane_g

0x97fc,	// (0x00050e3b) main_myfav_hc_pane_t1_ParamLimits

0x97fc,	// (0x00050e3b) main_myfav_hc_pane_t1

0x162e,	// (0x00048c6d) main_myfav_hc_pane_t2_ParamLimits

0x162e,	// (0x00048c6d) main_myfav_hc_pane_t2

0x1640,	// (0x00048c7f) main_myfav_hc_pane_t3_ParamLimits

0x1640,	// (0x00048c7f) main_myfav_hc_pane_t3

0x9813,	// (0x00050e52) main_myfav_hc_pane_t4_ParamLimits

0x9813,	// (0x00050e52) main_myfav_hc_pane_t4

0x0004,

0xf8f3,	// (0x00056f32) main_myfav_hc_pane_t_ParamLimits

0xf8f3,	// (0x00056f32) main_myfav_hc_pane_t

0xd00f,	// (0x0005464e) bg_myfav_hc_instruction_pane_g1

0x1652,	// (0x00048c91) cell_myfav_contact_pane_g1_ParamLimits

0x1652,	// (0x00048c91) cell_myfav_contact_pane_g1

0x1652,	// (0x00048c91) cell_myfav_contact_pane_g2_ParamLimits

0x1652,	// (0x00048c91) cell_myfav_contact_pane_g2

0x165e,	// (0x00048c9d) cell_myfav_contact_pane_g3_ParamLimits

0x165e,	// (0x00048c9d) cell_myfav_contact_pane_g3

0xcdc3,	// (0x00054402) cell_myfav_contact_pane_g4_ParamLimits

0xcdc3,	// (0x00054402) cell_myfav_contact_pane_g4

0x166b,	// (0x00048caa) cell_myfav_contact_pane_g5_ParamLimits

0x166b,	// (0x00048caa) cell_myfav_contact_pane_g5

0x0004,

0xf8fe,	// (0x00056f3d) cell_myfav_contact_pane_g_ParamLimits

0xf8fe,	// (0x00056f3d) cell_myfav_contact_pane_g

0x97e4,	// (0x00050e23) main_myfav_hc_pane_g3_ParamLimits

0x97e4,	// (0x00050e23) main_myfav_hc_pane_g3

0x47af,	// (0x0004bdee) popup_adpt_find_window

0x983d,	// (0x00050e7c) afind_page_pane_ParamLimits

0x983d,	// (0x00050e7c) afind_page_pane

0x984a,	// (0x00050e89) aid_size_cell_afind_ParamLimits

0x984a,	// (0x00050e89) aid_size_cell_afind

0x9864,	// (0x00050ea3) bg_popup_sub_pane_cp09_ParamLimits

0x9864,	// (0x00050ea3) bg_popup_sub_pane_cp09

0x9871,	// (0x00050eb0) find_pane_cp01_ParamLimits

0x9871,	// (0x00050eb0) find_pane_cp01

0x1677,	// (0x00048cb6) grid_afind_control_pane_ParamLimits

0x1677,	// (0x00048cb6) grid_afind_control_pane

0x987e,	// (0x00050ebd) grid_afind_pane_ParamLimits

0x987e,	// (0x00050ebd) grid_afind_pane

0x9898,	// (0x00050ed7) cell_afind_pane_ParamLimits

0x9898,	// (0x00050ed7) cell_afind_pane

0xd00f,	// (0x0005464e) afind_page_pane_g1

0x98e0,	// (0x00050f1f) afind_page_pane_g2

0x98e9,	// (0x00050f28) afind_page_pane_g3

0x0002,

0xf909,	// (0x00056f48) afind_page_pane_g

0x98f2,	// (0x00050f31) afind_page_pane_t1

0x168b,	// (0x00048cca) cell_afind_grid_control_pane_ParamLimits

0x168b,	// (0x00048cca) cell_afind_grid_control_pane

0x150b,	// (0x00048b4a) bg_button_pane_cp69_ParamLimits

0x150b,	// (0x00048b4a) bg_button_pane_cp69

0x9912,	// (0x00050f51) cell_afind_pane_g1_ParamLimits

0x9912,	// (0x00050f51) cell_afind_pane_g1

0x991f,	// (0x00050f5e) cell_afind_pane_t1_ParamLimits

0x991f,	// (0x00050f5e) cell_afind_pane_t1

0xd019,	// (0x00054658) bg_button_pane_cp72

0x169a,	// (0x00048cd9) cell_afind_grid_control_pane_g1

0x753a,	// (0x0004eb79) aid_image_placing_area_ParamLimits

0x753a,	// (0x0004eb79) aid_image_placing_area

0xcdb5,	// (0x000543f4) field_vitu_entry_pane_g1_ParamLimits

0xcdb5,	// (0x000543f4) field_vitu_entry_pane_g1

0xcdb5,	// (0x000543f4) field_vitu_entry_pane_g2_ParamLimits

0xcdb5,	// (0x000543f4) field_vitu_entry_pane_g2

0x0001,

0xf201,	// (0x00056840) field_vitu_entry_pane_g_ParamLimits

0xf201,	// (0x00056840) field_vitu_entry_pane_g

0x1230,	// (0x0004886f) cell_vitu_itu_pane_g1_ParamLimits

0x1213,	// (0x00048852) cell_vitu_itu_pane_t3_ParamLimits

0x1213,	// (0x00048852) cell_vitu_itu_pane_t3

0x14b4,	// (0x00048af3) mp4_progress_pane_t1_ParamLimits

0x14cd,	// (0x00048b0c) mp4_progress_pane_t2_ParamLimits

0xf84f,	// (0x00056e8e) mp4_progress_pane_t_ParamLimits

0x14e6,	// (0x00048b25) mup_progress_pane_cp04_ParamLimits

0x9827,	// (0x00050e66) main_myfav_hc_pane_t5_ParamLimits

0x9827,	// (0x00050e66) main_myfav_hc_pane_t5

0x463e,	// (0x0004bc7d) aid_zoom_text_primary

0x47af,	// (0x0004bdee) popup_adpt_find_window_ParamLimits

0x7a09,	// (0x0004f048) main_cam_set_pane

0x92aa,	// (0x000508e9) cam4_zoom_pane_ParamLimits

0x92aa,	// (0x000508e9) cam4_zoom_pane

0x9931,	// (0x00050f70) main_cam_set_pane_g1_ParamLimits

0x9931,	// (0x00050f70) main_cam_set_pane_g1

0x993f,	// (0x00050f7e) main_cam_set_pane_g2_ParamLimits

0x993f,	// (0x00050f7e) main_cam_set_pane_g2

0x0001,

0xf910,	// (0x00056f4f) main_cam_set_pane_g_ParamLimits

0xf910,	// (0x00056f4f) main_cam_set_pane_g

0x994b,	// (0x00050f8a) main_cam_set_pane_t1_ParamLimits

0x994b,	// (0x00050f8a) main_cam_set_pane_t1

0x9967,	// (0x00050fa6) main_cset_listscroll_pane_ParamLimits

0x9967,	// (0x00050fa6) main_cset_listscroll_pane

0x9999,	// (0x00050fd8) main_cset_slider_pane_ParamLimits

0x9999,	// (0x00050fd8) main_cset_slider_pane

0x16ab,	// (0x00048cea) main_cset_list_pane_ParamLimits

0x16ab,	// (0x00048cea) main_cset_list_pane

0x16bb,	// (0x00048cfa) scroll_pane_cp028

0x99b8,	// (0x00050ff7) aid_area_touch_slider

0x99d4,	// (0x00051013) cset_slider_pane

0x99f7,	// (0x00051036) main_cset_slider_pane_g1

0x9a0c,	// (0x0005104b) main_cset_slider_pane_g2

0x0011,

0xf915,	// (0x00056f54) main_cset_slider_pane_g

0x170c,	// (0x00048d4b) main_cset_slider_pane_t1

0x9ad2,	// (0x00051111) main_cset_slider_pane_t2

0x9aec,	// (0x0005112b) main_cset_slider_pane_t3

0x9b06,	// (0x00051145) main_cset_slider_pane_t4

0x9b24,	// (0x00051163) main_cset_slider_pane_t5

0x9b42,	// (0x00051181) main_cset_slider_pane_t6

0x9b59,	// (0x00051198) main_cset_slider_pane_t7

0x000e,

0xf93a,	// (0x00056f79) main_cset_slider_pane_t

0x9c67,	// (0x000512a6) cset_list_set_pane_ParamLimits

0x9c67,	// (0x000512a6) cset_list_set_pane

0x17a6,	// (0x00048de5) aid_position_infowindow_above

0x17ae,	// (0x00048ded) aid_position_infowindow_below

0x9c80,	// (0x000512bf) cset_list_set_pane_g1_ParamLimits

0x9c80,	// (0x000512bf) cset_list_set_pane_g1

0x9c8c,	// (0x000512cb) cset_list_set_pane_g3_ParamLimits

0x9c8c,	// (0x000512cb) cset_list_set_pane_g3

0x0001,

0xf959,	// (0x00056f98) cset_list_set_pane_g_ParamLimits

0xf959,	// (0x00056f98) cset_list_set_pane_g

0x9c9b,	// (0x000512da) cset_list_set_pane_t1_ParamLimits

0x9c9b,	// (0x000512da) cset_list_set_pane_t1

0xcd5c,	// (0x0005439b) list_highlight_pane_cp021_ParamLimits

0xcd5c,	// (0x0005439b) list_highlight_pane_cp021

0xdb43,	// (0x00055182) cset_slider_pane_g1

0xdb55,	// (0x00055194) cset_slider_pane_g2

0xdb4c,	// (0x0005518b) cset_slider_pane_g3

0x0002,

0xf95e,	// (0x00056f9d) cset_slider_pane_g

0x9cb0,	// (0x000512ef) aid_area_touch_cam4_zoom

0x9cb8,	// (0x000512f7) cam4_zoom_cont_pane

0x9cc0,	// (0x000512ff) cam4_zoom_pane_g1

0x9cc8,	// (0x00051307) cam4_zoom_pane_g2

0x9cd0,	// (0x0005130f) cam4_zoom_pane_g3

0x0002,

0xf965,	// (0x00056fa4) cam4_zoom_pane_g

0x9cd8,	// (0x00051317) cam4_zoom_cont_pane_g1

0x9ce1,	// (0x00051320) cam4_zoom_cont_pane_g2

0x9cea,	// (0x00051329) cam4_zoom_cont_pane_g3

0x0002,

0xf96c,	// (0x00056fab) cam4_zoom_cont_pane_g

0x90d0,	// (0x0005070f) call4_image_pane_ParamLimits

0x90d0,	// (0x0005070f) call4_image_pane

0x912f,	// (0x0005076e) call4_windows_conf_pane_ParamLimits

0x9172,	// (0x000507b1) popup_call4_audio_in_window_ParamLimits

0x9172,	// (0x000507b1) popup_call4_audio_in_window

0x45ec,	// (0x0004bc2b) bg_popup_call2_act_pane_cp02

0x1517,	// (0x00048b56) call4_list_conf_pane

0xd00f,	// (0x0005464e) call4_image_pane_g1

0xd00f,	// (0x0005464e) call4_image_pane_g2

0x0001,

0xf3dd,	// (0x00056a1c) call4_image_pane_g

0x17c8,	// (0x00048e07) list_single_graphic_popup_conf4_pane_ParamLimits

0x17c8,	// (0x00048e07) list_single_graphic_popup_conf4_pane

0x45ec,	// (0x0004bc2b) list_highlight_pane_cp022

0x17db,	// (0x00048e1a) list_single_graphic_popup_conf4_pane_g1

0xd754,	// (0x00054d93) list_single_graphic_popup_conf4_pane_g2

0x0001,

0xf973,	// (0x00056fb2) list_single_graphic_popup_conf4_pane_g

0x17e3,	// (0x00048e22) list_single_graphic_popup_conf4_pane_t1

0x5ac7,	// (0x0004d106) popup_vtel_slider_window_ParamLimits

0x5ac7,	// (0x0004d106) popup_vtel_slider_window

0x14f9,	// (0x00048b38) dialer2_ne_pane_t2_ParamLimits

0x14f9,	// (0x00048b38) dialer2_ne_pane_t2

0x0001,

0xf854,	// (0x00056e93) dialer2_ne_pane_t_ParamLimits

0xf854,	// (0x00056e93) dialer2_ne_pane_t

0xcd5c,	// (0x0005439b) bg_popup_sub_pane_cp010_ParamLimits

0xcd5c,	// (0x0005439b) bg_popup_sub_pane_cp010

0x9cf3,	// (0x00051332) popup_vtel_slider_window_g1_ParamLimits

0x9cf3,	// (0x00051332) popup_vtel_slider_window_g1

0x9cff,	// (0x0005133e) popup_vtel_slider_window_g2_ParamLimits

0x9cff,	// (0x0005133e) popup_vtel_slider_window_g2

0x0003,

0xf978,	// (0x00056fb7) popup_vtel_slider_window_g_ParamLimits

0xf978,	// (0x00056fb7) popup_vtel_slider_window_g

0x9d47,	// (0x00051386) vtel_slider_pane_ParamLimits

0x9d47,	// (0x00051386) vtel_slider_pane

0x9d56,	// (0x00051395) vtel_slider_pane_g1_ParamLimits

0x9d56,	// (0x00051395) vtel_slider_pane_g1

0x9d63,	// (0x000513a2) vtel_slider_pane_g2_ParamLimits

0x9d63,	// (0x000513a2) vtel_slider_pane_g2

0x9d70,	// (0x000513af) vtel_slider_pane_g3_ParamLimits

0x9d70,	// (0x000513af) vtel_slider_pane_g3

0x9d56,	// (0x00051395) vtel_slider_pane_g4_ParamLimits

0x9d56,	// (0x00051395) vtel_slider_pane_g4

0x9d7d,	// (0x000513bc) vtel_slider_pane_g5_ParamLimits

0x9d7d,	// (0x000513bc) vtel_slider_pane_g5

0x0004,

0xf981,	// (0x00056fc0) vtel_slider_pane_g_ParamLimits

0xf981,	// (0x00056fc0) vtel_slider_pane_g

0x7a09,	// (0x0004f048) main_gallery2_pane

0x94e4,	// (0x00050b23) aid_size_row_itut2_dropdow_list_ParamLimits

0x94e4,	// (0x00050b23) aid_size_row_itut2_dropdow_list

0x954e,	// (0x00050b8d) grid_vitu2_function_top_pane_ParamLimits

0x954e,	// (0x00050b8d) grid_vitu2_function_top_pane

0x95a2,	// (0x00050be1) popup_vitu2_dropdown_list_window_ParamLimits

0x95a2,	// (0x00050be1) popup_vitu2_dropdown_list_window

0x95c0,	// (0x00050bff) popup_vitu2_match_list_window

0x9d8a,	// (0x000513c9) cell_vitu2_function_top_pane_ParamLimits

0x9d8a,	// (0x000513c9) cell_vitu2_function_top_pane

0x9da4,	// (0x000513e3) cell_vitu2_function_top_pane_cp01_ParamLimits

0x9da4,	// (0x000513e3) cell_vitu2_function_top_pane_cp01

0x9dc0,	// (0x000513ff) cell_vitu2_function_top_wide_pane_ParamLimits

0x9dc0,	// (0x000513ff) cell_vitu2_function_top_wide_pane

0x7a09,	// (0x0004f048) bg_button_pane_cp012

0x9dde,	// (0x0005141d) cell_vitu2_function_top_pane_g1

0x9df2,	// (0x00051431) bg_button_pane_cp013_ParamLimits

0x9df2,	// (0x00051431) bg_button_pane_cp013

0x9e0e,	// (0x0005144d) cell_vitu2_function_top_wide_pane_g1_ParamLimits

0x9e0e,	// (0x0005144d) cell_vitu2_function_top_wide_pane_g1

0x48a6,	// (0x0004bee5) bg_popup_sub_pane_cp20

0x9e26,	// (0x00051465) list_vitu2_match_list_pane

0x15a1,	// (0x00048be0) bg_popup_sub_pane_cp20_g1

0x15a9,	// (0x00048be8) bg_popup_sub_pane_cp20_g2

0xd234,	// (0x00054873) bg_popup_sub_pane_cp20_g3

0x15b1,	// (0x00048bf0) bg_popup_sub_pane_cp20_g4

0xd214,	// (0x00054853) bg_popup_sub_pane_cp20_g5

0x17f9,	// (0x00048e38) bg_popup_sub_pane_cp20_g6

0x15c1,	// (0x00048c00) bg_popup_sub_pane_cp20_g7

0x15c9,	// (0x00048c08) bg_popup_sub_pane_cp20_g8

0x15d1,	// (0x00048c10) bg_popup_sub_pane_cp20_g9

0x0008,

0xf98c,	// (0x00056fcb) bg_popup_sub_pane_cp20_g

0x9e3e,	// (0x0005147d) list_vitu2_match_list_item_pane_ParamLimits

0x9e3e,	// (0x0005147d) list_vitu2_match_list_item_pane

0x9e50,	// (0x0005148f) list_vitu2_match_list_item_pane_t1

0x48c0,	// (0x0004beff) bg_popup_sub_pane_cp21

0xcfd9,	// (0x00054618) grid_vitu2_dropdown_list_pane

0x9e5e,	// (0x0005149d) cell_vitu2_dropdown_list_char_pane_ParamLimits

0x9e5e,	// (0x0005149d) cell_vitu2_dropdown_list_char_pane

0x9e81,	// (0x000514c0) cell_vitu2_dropdown_list_ctrl_pane_ParamLimits

0x9e81,	// (0x000514c0) cell_vitu2_dropdown_list_ctrl_pane

0x1813,	// (0x00048e52) cell_vitu2_dropdown_list_char_pane_g1

0x180a,	// (0x00048e49) cell_vitu2_dropdown_list_char_pane_g2

0x1801,	// (0x00048e40) cell_vitu2_dropdown_list_char_pane_g3

0x0002,

0xf99f,	// (0x00056fde) cell_vitu2_dropdown_list_char_pane_g

0x9eab,	// (0x000514ea) cell_vitu2_dropdown_list_char_pane_t1

0x9eb9,	// (0x000514f8) cell_vitu2_dropdown_list_ctrl_pane_g1_ParamLimits

0x9eb9,	// (0x000514f8) cell_vitu2_dropdown_list_ctrl_pane_g1

0x9ec6,	// (0x00051505) cell_vitu2_dropdown_list_ctrl_pane_g2_ParamLimits

0x9ec6,	// (0x00051505) cell_vitu2_dropdown_list_ctrl_pane_g2

0x9ed3,	// (0x00051512) cell_vitu2_dropdown_list_ctrl_pane_g3_ParamLimits

0x9ed3,	// (0x00051512) cell_vitu2_dropdown_list_ctrl_pane_g3

0x9ee0,	// (0x0005151f) cell_vitu2_dropdown_list_ctrl_pane_g4_ParamLimits

0x9ee0,	// (0x0005151f) cell_vitu2_dropdown_list_ctrl_pane_g4

0x2828,	// (0x00049e67) cell_vitu2_dropdown_list_ctrl_pane_g5_ParamLimits

0x2828,	// (0x00049e67) cell_vitu2_dropdown_list_ctrl_pane_g5

0x0004,

0xf9a6,	// (0x00056fe5) cell_vitu2_dropdown_list_ctrl_pane_g_ParamLimits

0xf9a6,	// (0x00056fe5) cell_vitu2_dropdown_list_ctrl_pane_g

0x9efc,	// (0x0005153b) aid_size_cell_gallery2_ParamLimits

0x9efc,	// (0x0005153b) aid_size_cell_gallery2

0x9f16,	// (0x00051555) grid_gallery2_pane_ParamLimits

0x9f16,	// (0x00051555) grid_gallery2_pane

0x9f2d,	// (0x0005156c) scroll_pane_cp029_ParamLimits

0x9f2d,	// (0x0005156c) scroll_pane_cp029

0x9f3d,	// (0x0005157c) cell_gallery2_pane_ParamLimits

0x9f3d,	// (0x0005157c) cell_gallery2_pane

0x181c,	// (0x00048e5b) cell_gallery2_pane_g2

0x9f92,	// (0x000515d1) cell_gallery2_pane_g3

0x1824,	// (0x00048e63) cell_gallery2_pane_g4

0x182c,	// (0x00048e6b) cell_gallery2_pane_g5

0xcfd9,	// (0x00054618) grid_highlight_pane_cp10

0x95c0,	// (0x00050bff) popup_vitu2_match_list_window_ParamLimits

0x94f2,	// (0x00050b31) popup_vitu2_query_window_ParamLimits

0x94f2,	// (0x00050b31) popup_vitu2_query_window

0x48c0,	// (0x0004beff) bg_vitu2_candi_button_pane

0x1813,	// (0x00048e52) cell_vitu2_dropdown_list_char_pane_g1_copy1

0x180a,	// (0x00048e49) cell_vitu2_dropdown_list_char_pane_g2_copy1

0x1801,	// (0x00048e40) cell_vitu2_dropdown_list_char_pane_g2_copy2

0x9f9a,	// (0x000515d9) bg_button_pane_cp015

0x9fac,	// (0x000515eb) bg_button_pane_cp016

0x9fbf,	// (0x000515fe) bg_button_pane_cp017

0xed6f,	// (0x000563ae) bg_popup_sub_pane_cp22

0x1834,	// (0x00048e73) popup_vitu2_query_window_g1

0xa004,	// (0x00051643) popup_vitu2_query_window_g2

0x0002,

0xf9b1,	// (0x00056ff0) popup_vitu2_query_window_g

0xa023,	// (0x00051662) popup_vitu2_query_window_t1_ParamLimits

0xa023,	// (0x00051662) popup_vitu2_query_window_t1

0xa058,	// (0x00051697) popup_vitu2_query_window_t2_ParamLimits

0xa058,	// (0x00051697) popup_vitu2_query_window_t2

0xa06a,	// (0x000516a9) popup_vitu2_query_window_t3_ParamLimits

0xa06a,	// (0x000516a9) popup_vitu2_query_window_t3

0xa092,	// (0x000516d1) popup_vitu2_query_window_t4_ParamLimits

0xa092,	// (0x000516d1) popup_vitu2_query_window_t4

0xa0b3,	// (0x000516f2) popup_vitu2_query_window_t5_ParamLimits

0xa0b3,	// (0x000516f2) popup_vitu2_query_window_t5

0x0006,

0xf9b8,	// (0x00056ff7) popup_vitu2_query_window_t_ParamLimits

0xf9b8,	// (0x00056ff7) popup_vitu2_query_window_t

0x16a3,	// (0x00048ce2) main_cset_text_pane

0x99b8,	// (0x00050ff7) aid_area_touch_slider_ParamLimits

0x99d4,	// (0x00051013) cset_slider_pane_ParamLimits

0x99f7,	// (0x00051036) main_cset_slider_pane_g1_ParamLimits

0x9a0c,	// (0x0005104b) main_cset_slider_pane_g2_ParamLimits

0x16c4,	// (0x00048d03) main_cset_slider_pane_g3_ParamLimits

0x16c4,	// (0x00048d03) main_cset_slider_pane_g3

0x9a21,	// (0x00051060) main_cset_slider_pane_g4_ParamLimits

0x9a21,	// (0x00051060) main_cset_slider_pane_g4

0x9a30,	// (0x0005106f) main_cset_slider_pane_g5_ParamLimits

0x9a30,	// (0x0005106f) main_cset_slider_pane_g5

0x9a3e,	// (0x0005107d) main_cset_slider_pane_g6_ParamLimits

0x9a3e,	// (0x0005107d) main_cset_slider_pane_g6

0xf915,	// (0x00056f54) main_cset_slider_pane_g_ParamLimits

0x170c,	// (0x00048d4b) main_cset_slider_pane_t1_ParamLimits

0x9ad2,	// (0x00051111) main_cset_slider_pane_t2_ParamLimits

0x9aec,	// (0x0005112b) main_cset_slider_pane_t3_ParamLimits

0x9b06,	// (0x00051145) main_cset_slider_pane_t4_ParamLimits

0x9b24,	// (0x00051163) main_cset_slider_pane_t5_ParamLimits

0x9b42,	// (0x00051181) main_cset_slider_pane_t6_ParamLimits

0x9b59,	// (0x00051198) main_cset_slider_pane_t7_ParamLimits

0x9b87,	// (0x000511c6) main_cset_slider_pane_t8_ParamLimits

0x9b87,	// (0x000511c6) main_cset_slider_pane_t8

0x9baf,	// (0x000511ee) main_cset_slider_pane_t9_ParamLimits

0x9baf,	// (0x000511ee) main_cset_slider_pane_t9

0x9bd7,	// (0x00051216) main_cset_slider_pane_t10_ParamLimits

0x9bd7,	// (0x00051216) main_cset_slider_pane_t10

0x9bff,	// (0x0005123e) main_cset_slider_pane_t11_ParamLimits

0x9bff,	// (0x0005123e) main_cset_slider_pane_t11

0x9c29,	// (0x00051268) main_cset_slider_pane_t12_ParamLimits

0x9c29,	// (0x00051268) main_cset_slider_pane_t12

0x9c48,	// (0x00051287) main_cset_slider_pane_t13_ParamLimits

0x9c48,	// (0x00051287) main_cset_slider_pane_t13

0xf93a,	// (0x00056f79) main_cset_slider_pane_t_ParamLimits

0x45ec,	// (0x0004bc2b) bg_popup_sub_pane_cp011

0x1840,	// (0x00048e7f) main_cset_text_pane_g1

0x1848,	// (0x00048e87) main_cset_text_pane_t1

0x1856,	// (0x00048e95) main_cset_text_pane_t2

0x1864,	// (0x00048ea3) main_cset_text_pane_t3

0x1872,	// (0x00048eb1) main_cset_text_pane_t4

0x1880,	// (0x00048ebf) main_cset_text_pane_t5

0x188e,	// (0x00048ecd) main_cset_text_pane_t6

0x189c,	// (0x00048edb) main_cset_text_pane_t7

0x0006,

0xf9c7,	// (0x00057006) main_cset_text_pane_t

0x48c0,	// (0x0004beff) main_cam4_burst_pane

0x48c0,	// (0x0004beff) main_cam5_pane

0x9900,	// (0x00050f3f) bg_button_pane_cp019

0x9909,	// (0x00050f48) bg_button_pane_cp020

0x16d0,	// (0x00048d0f) main_cset_slider_pane_g7_ParamLimits

0x16d0,	// (0x00048d0f) main_cset_slider_pane_g7

0x16dc,	// (0x00048d1b) main_cset_slider_pane_g8_ParamLimits

0x16dc,	// (0x00048d1b) main_cset_slider_pane_g8

0x9a52,	// (0x00051091) main_cset_slider_pane_g9_ParamLimits

0x9a52,	// (0x00051091) main_cset_slider_pane_g9

0x9a5e,	// (0x0005109d) main_cset_slider_pane_g10_ParamLimits

0x9a5e,	// (0x0005109d) main_cset_slider_pane_g10

0x9a6a,	// (0x000510a9) main_cset_slider_pane_g11_ParamLimits

0x9a6a,	// (0x000510a9) main_cset_slider_pane_g11

0x9a76,	// (0x000510b5) main_cset_slider_pane_g12_ParamLimits

0x9a76,	// (0x000510b5) main_cset_slider_pane_g12

0x9a82,	// (0x000510c1) main_cset_slider_pane_g13_ParamLimits

0x9a82,	// (0x000510c1) main_cset_slider_pane_g13

0x9a90,	// (0x000510cf) main_cset_slider_pane_g14_ParamLimits

0x9a90,	// (0x000510cf) main_cset_slider_pane_g14

0x9a9e,	// (0x000510dd) main_cset_slider_pane_g15_ParamLimits

0x9a9e,	// (0x000510dd) main_cset_slider_pane_g15

0x1734,	// (0x00048d73) main_cset_slider_pane_t14_ParamLimits

0x1734,	// (0x00048d73) main_cset_slider_pane_t14

0x176d,	// (0x00048dac) main_cset_slider_pane_t15_ParamLimits

0x176d,	// (0x00048dac) main_cset_slider_pane_t15

0xa12a,	// (0x00051769) aid_cam4_burst_size_cell_ParamLimits

0xa12a,	// (0x00051769) aid_cam4_burst_size_cell

0xa146,	// (0x00051785) grid_cam4_burst_pane_ParamLimits

0xa146,	// (0x00051785) grid_cam4_burst_pane

0xa176,	// (0x000517b5) linegrid_cam4_burst_pane_ParamLimits

0xa176,	// (0x000517b5) linegrid_cam4_burst_pane

0xa196,	// (0x000517d5) scroll_pane_cp30_ParamLimits

0xa196,	// (0x000517d5) scroll_pane_cp30

0xa1a2,	// (0x000517e1) cell_cam4_burst_pane_ParamLimits

0xa1a2,	// (0x000517e1) cell_cam4_burst_pane

0x18b6,	// (0x00048ef5) linegrid_cam4_burst_pane_g1_ParamLimits

0x18b6,	// (0x00048ef5) linegrid_cam4_burst_pane_g1

0xa1de,	// (0x0005181d) linegrid_cam4_burst_pane_g2_ParamLimits

0xa1de,	// (0x0005181d) linegrid_cam4_burst_pane_g2

0x18c3,	// (0x00048f02) linegrid_cam4_burst_pane_g3_ParamLimits

0x18c3,	// (0x00048f02) linegrid_cam4_burst_pane_g3

0x0002,

0xf9d6,	// (0x00057015) linegrid_cam4_burst_pane_g_ParamLimits

0xf9d6,	// (0x00057015) linegrid_cam4_burst_pane_g

0xa1ef,	// (0x0005182e) linegrid_cam4_burst_pane_g3_copy1_ParamLimits

0xa1ef,	// (0x0005182e) linegrid_cam4_burst_pane_g3_copy1

0x18d0,	// (0x00048f0f) linegrid_cam4_burst_pane_g4_ParamLimits

0x18d0,	// (0x00048f0f) linegrid_cam4_burst_pane_g4

0xa209,	// (0x00051848) linegrid_cam4_burst_pane_g5_ParamLimits

0xa209,	// (0x00051848) linegrid_cam4_burst_pane_g5

0xa21a,	// (0x00051859) linegrid_cam4_burst_pane_g6_ParamLimits

0xa21a,	// (0x00051859) linegrid_cam4_burst_pane_g6

0x18dd,	// (0x00048f1c) linegrid_cam4_burst_pane_g7_ParamLimits

0x18dd,	// (0x00048f1c) linegrid_cam4_burst_pane_g7

0xa22b,	// (0x0005186a) cell_cam4_burst_pane_g1

0x18f6,	// (0x00048f35) main_cam5_pane_t1_ParamLimits

0x18f6,	// (0x00048f35) main_cam5_pane_t1

0x1908,	// (0x00048f47) main_cam5_pane_t2_ParamLimits

0x1908,	// (0x00048f47) main_cam5_pane_t2

0x191a,	// (0x00048f59) main_cam5_pane_t3_ParamLimits

0x191a,	// (0x00048f59) main_cam5_pane_t3

0x192c,	// (0x00048f6b) main_cam5_pane_t4_ParamLimits

0x192c,	// (0x00048f6b) main_cam5_pane_t4

0x1944,	// (0x00048f83) main_cam5_pane_t5_ParamLimits

0x1944,	// (0x00048f83) main_cam5_pane_t5

0x1958,	// (0x00048f97) main_cam5_pane_t6_ParamLimits

0x1958,	// (0x00048f97) main_cam5_pane_t6

0x196c,	// (0x00048fab) main_cam5_pane_t7_ParamLimits

0x196c,	// (0x00048fab) main_cam5_pane_t7

0x197e,	// (0x00048fbd) main_cam5_pane_t8_ParamLimits

0x197e,	// (0x00048fbd) main_cam5_pane_t8

0x199a,	// (0x00048fd9) main_cam5_pane_t9_ParamLimits

0x199a,	// (0x00048fd9) main_cam5_pane_t9

0x19ac,	// (0x00048feb) main_cam5_pane_t10_ParamLimits

0x19ac,	// (0x00048feb) main_cam5_pane_t10

0x19be,	// (0x00048ffd) main_cam5_pane_t11_ParamLimits

0x19be,	// (0x00048ffd) main_cam5_pane_t11

0x19d0,	// (0x0004900f) main_cam5_pane_t12_ParamLimits

0x19d0,	// (0x0004900f) main_cam5_pane_t12

0x19e5,	// (0x00049024) main_cam5_pane_t13_ParamLimits

0x19e5,	// (0x00049024) main_cam5_pane_t13

0x000c,

0xf9e2,	// (0x00057021) main_cam5_pane_t_ParamLimits

0xf9e2,	// (0x00057021) main_cam5_pane_t

0x4865,	// (0x0004bea4) popup_scut_keymap_window_ParamLimits

0x4865,	// (0x0004bea4) popup_scut_keymap_window

0xa23e,	// (0x0005187d) aid_size_cell_brow_shortcut

0xcfd9,	// (0x00054618) bg_popup_window_pane_cp010

0xa24a,	// (0x00051889) grid_scut_pane

0xa256,	// (0x00051895) cell_scut_pane_ParamLimits

0xa256,	// (0x00051895) cell_scut_pane

0xa26d,	// (0x000518ac) cell_scut_pane_g1

0x1a02,	// (0x00049041) cell_scut_pane_t1

0x1a11,	// (0x00049050) cell_scut_pane_t2

0xa276,	// (0x000518b5) cell_scut_pane_t3

0x0002,

0xf9fd,	// (0x0005703c) cell_scut_pane_t

0x81f0,	// (0x0004f82f) main_mup3_pane_g8_ParamLimits

0x81f0,	// (0x0004f82f) main_mup3_pane_g8

0x94f2,	// (0x00050b31) area_vitu2_query_pane_ParamLimits

0x94f2,	// (0x00050b31) area_vitu2_query_pane

0x9fd2,	// (0x00051611) input_focus_pane_cp08

0x1a20,	// (0x0004905f) area_vitu2_query_pane_g1

0xa284,	// (0x000518c3) area_vitu2_query_pane_g2

0x0001,

0xfa04,	// (0x00057043) area_vitu2_query_pane_g

0xa295,	// (0x000518d4) area_vitu2_query_pane_t1_ParamLimits

0xa295,	// (0x000518d4) area_vitu2_query_pane_t1

0xa2a9,	// (0x000518e8) area_vitu2_query_pane_t2_ParamLimits

0xa2a9,	// (0x000518e8) area_vitu2_query_pane_t2

0xa2bd,	// (0x000518fc) area_vitu2_query_pane_t3_ParamLimits

0xa2bd,	// (0x000518fc) area_vitu2_query_pane_t3

0x1a2c,	// (0x0004906b) area_vitu2_query_pane_t4_ParamLimits

0x1a2c,	// (0x0004906b) area_vitu2_query_pane_t4

0x1a54,	// (0x00049093) area_vitu2_query_pane_t5_ParamLimits

0x1a54,	// (0x00049093) area_vitu2_query_pane_t5

0x1a7c,	// (0x000490bb) area_vitu2_query_pane_t6_ParamLimits

0x1a7c,	// (0x000490bb) area_vitu2_query_pane_t6

0x0006,

0xfa09,	// (0x00057048) area_vitu2_query_pane_t_ParamLimits

0xfa09,	// (0x00057048) area_vitu2_query_pane_t

0xa2e5,	// (0x00051924) bg_button_pane_cp018

0xa2f3,	// (0x00051932) bg_button_pane_cp021

0xa2ff,	// (0x0005193e) bg_button_pane_cp022

0xa310,	// (0x0005194f) input_focus_pane_cp09

0xd863,	// (0x00054ea2) aid_size_touch_mv_arrow_left

0xd88e,	// (0x00054ecd) aid_size_touch_mv_arrow_right

0x9ab6,	// (0x000510f5) main_cset_slider_pane_g16_ParamLimits

0x9ab6,	// (0x000510f5) main_cset_slider_pane_g16

0x9ac4,	// (0x00051103) main_cset_slider_pane_g17_ParamLimits

0x9ac4,	// (0x00051103) main_cset_slider_pane_g17

0xa22b,	// (0x0005186a) cell_cam4_burst_pane_g1_ParamLimits

0x45ec,	// (0x0004bc2b) compa_mode_pane

0x9d0b,	// (0x0005134a) popup_vtel_slider_window_g3_ParamLimits

0x9d0b,	// (0x0005134a) popup_vtel_slider_window_g3

0x9d1f,	// (0x0005135e) popup_vtel_slider_window_g4_ParamLimits

0x9d1f,	// (0x0005135e) popup_vtel_slider_window_g4

0x9d33,	// (0x00051372) popup_vtel_slider_window_t1_ParamLimits

0x9d33,	// (0x00051372) popup_vtel_slider_window_t1

0x48c0,	// (0x0004beff) main_cl_pane

0x7aaf,	// (0x0004f0ee) popup_imed_adjust2_window_ParamLimits

0xed6f,	// (0x000563ae) bg_tb_trans_pane_cp05_ParamLimits

0x1148,	// (0x00048787) popup_imed_adjust2_window_g1_ParamLimits

0x1157,	// (0x00048796) popup_imed_adjust2_window_g2_ParamLimits

0x1157,	// (0x00048796) popup_imed_adjust2_window_g2

0x1163,	// (0x000487a2) popup_imed_adjust2_window_g3_ParamLimits

0x1163,	// (0x000487a2) popup_imed_adjust2_window_g3

0x0002,

0xf77f,	// (0x00056dbe) popup_imed_adjust2_window_g_ParamLimits

0xf77f,	// (0x00056dbe) popup_imed_adjust2_window_g

0x116f,	// (0x000487ae) popup_imed_adjust2_window_t1_ParamLimits

0x1187,	// (0x000487c6) slider_imed_adjust_pane_ParamLimits

0x119b,	// (0x000487da) slider_imed_adjust_pane_g1_ParamLimits

0x11ab,	// (0x000487ea) slider_imed_adjust_pane_g2_ParamLimits

0x11bb,	// (0x000487fa) slider_imed_adjust_pane_g3_ParamLimits

0x11cc,	// (0x0004880b) slider_imed_adjust_pane_g4_ParamLimits

0xf786,	// (0x00056dc5) slider_imed_adjust_pane_g_ParamLimits

0x9253,	// (0x00050892) aid_touch_area_cam4_ParamLimits

0x9253,	// (0x00050892) aid_touch_area_cam4

0x9263,	// (0x000508a2) battery_pane_cp01

0x92ea,	// (0x00050929) main_camera4_pane_g6_ParamLimits

0x92ea,	// (0x00050929) main_camera4_pane_g6

0x9308,	// (0x00050947) main_camera4_pane_t2_ParamLimits

0x9308,	// (0x00050947) main_camera4_pane_t2

0x0001,

0xf888,	// (0x00056ec7) main_camera4_pane_t_ParamLimits

0xf888,	// (0x00056ec7) main_camera4_pane_t

0x9389,	// (0x000509c8) aid_touch_area_vid4_ParamLimits

0x9389,	// (0x000509c8) aid_touch_area_vid4

0x93c9,	// (0x00050a08) main_video4_pane_g5_ParamLimits

0x93c9,	// (0x00050a08) main_video4_pane_g5

0x93ed,	// (0x00050a2c) vid4_progress_pane_ParamLimits

0x93ed,	// (0x00050a2c) vid4_progress_pane

0x1700,	// (0x00048d3f) main_cset_slider_pane_g18_ParamLimits

0x1700,	// (0x00048d3f) main_cset_slider_pane_g18

0x18ea,	// (0x00048f29) cell_cam4_burst_pane_g2_ParamLimits

0x18ea,	// (0x00048f29) cell_cam4_burst_pane_g2

0x0001,

0xf9dd,	// (0x0005701c) cell_cam4_burst_pane_g_ParamLimits

0xf9dd,	// (0x0005701c) cell_cam4_burst_pane_g

0xa321,	// (0x00051960) bg_cl_pane_ParamLimits

0xa321,	// (0x00051960) bg_cl_pane

0xa32d,	// (0x0005196c) cl_header_pane_ParamLimits

0xa32d,	// (0x0005196c) cl_header_pane

0xa339,	// (0x00051978) cl_listscroll_pane_ParamLimits

0xa339,	// (0x00051978) cl_listscroll_pane

0x1ac8,	// (0x00049107) bg_cl_pane_g1

0x1ad0,	// (0x0004910f) bg_cl_pane_g2

0x1ad8,	// (0x00049117) bg_cl_pane_g3

0x1ae0,	// (0x0004911f) bg_cl_pane_g4

0x1ae8,	// (0x00049127) bg_cl_pane_g5

0x1af0,	// (0x0004912f) bg_cl_pane_g6

0x1af8,	// (0x00049137) bg_cl_pane_g7

0x1b00,	// (0x0004913f) bg_cl_pane_g8

0x1b08,	// (0x00049147) bg_cl_pane_g9

0x0008,

0xfa18,	// (0x00057057) bg_cl_pane_g

0xa345,	// (0x00051984) aid_height_cl_leading_ParamLimits

0xa345,	// (0x00051984) aid_height_cl_leading

0xa351,	// (0x00051990) aid_height_cl_text_ParamLimits

0xa351,	// (0x00051990) aid_height_cl_text

0x4ee4,	// (0x0004c523) bg_cl_header_pane_ParamLimits

0x4ee4,	// (0x0004c523) bg_cl_header_pane

0xa369,	// (0x000519a8) cl_header_pane_g1_ParamLimits

0xa369,	// (0x000519a8) cl_header_pane_g1

0xa376,	// (0x000519b5) cl_header_pane_t1_ParamLimits

0xa376,	// (0x000519b5) cl_header_pane_t1

0x1b10,	// (0x0004914f) cl_list_pane

0x16bb,	// (0x00048cfa) hc_scroll_pane_cp01

0xd214,	// (0x00054853) bg_cl_header_pane_g1

0x15a1,	// (0x00048be0) bg_cl_header_pane_g2

0xd234,	// (0x00054873) bg_cl_header_pane_g3

0x15b1,	// (0x00048bf0) bg_cl_header_pane_g4

0x15a9,	// (0x00048be8) bg_cl_header_pane_g5

0x17f9,	// (0x00048e38) bg_cl_header_pane_g6

0x15c9,	// (0x00048c08) bg_cl_header_pane_g7

0x15d1,	// (0x00048c10) bg_cl_header_pane_g8

0x15c1,	// (0x00048c00) bg_cl_header_pane_g9

0x0008,

0xfa2b,	// (0x0005706a) bg_cl_header_pane_g

0xa388,	// (0x000519c7) hc_cl_list_double_graphic_heading_pane_ParamLimits

0xa388,	// (0x000519c7) hc_cl_list_double_graphic_heading_pane

0xa39c,	// (0x000519db) hc_cl_list_single_graphic_pane_ParamLimits

0xa39c,	// (0x000519db) hc_cl_list_single_graphic_pane

0xa3b6,	// (0x000519f5) hc_cl_list_single_graphic_pane_g1_ParamLimits

0xa3b6,	// (0x000519f5) hc_cl_list_single_graphic_pane_g1

0xa3c2,	// (0x00051a01) hc_cl_list_single_graphic_pane_g2_ParamLimits

0xa3c2,	// (0x00051a01) hc_cl_list_single_graphic_pane_g2

0x0001,

0xfa3e,	// (0x0005707d) hc_cl_list_single_graphic_pane_g_ParamLimits

0xfa3e,	// (0x0005707d) hc_cl_list_single_graphic_pane_g

0xa3d6,	// (0x00051a15) hc_cl_list_single_graphic_pane_t1_ParamLimits

0xa3d6,	// (0x00051a15) hc_cl_list_single_graphic_pane_t1

0xa3b6,	// (0x000519f5) hc_cl_list_double_graphic_heading_pane_g1_ParamLimits

0xa3b6,	// (0x000519f5) hc_cl_list_double_graphic_heading_pane_g1

0xa3eb,	// (0x00051a2a) hc_cl_list_double_graphic_heading_pane_g2_ParamLimits

0xa3eb,	// (0x00051a2a) hc_cl_list_double_graphic_heading_pane_g2

0xa3ff,	// (0x00051a3e) hc_cl_list_double_graphic_heading_pane_g3_ParamLimits

0xa3ff,	// (0x00051a3e) hc_cl_list_double_graphic_heading_pane_g3

0x0002,

0xfa43,	// (0x00057082) hc_cl_list_double_graphic_heading_pane_g_ParamLimits

0xfa43,	// (0x00057082) hc_cl_list_double_graphic_heading_pane_g

0xa413,	// (0x00051a52) hc_cl_list_double_graphic_heading_pane_t1_ParamLimits

0xa413,	// (0x00051a52) hc_cl_list_double_graphic_heading_pane_t1

0xa428,	// (0x00051a67) hc_cl_list_double_graphic_heading_pane_t2_ParamLimits

0xa428,	// (0x00051a67) hc_cl_list_double_graphic_heading_pane_t2

0x0001,

0xfa4a,	// (0x00057089) hc_cl_list_double_graphic_heading_pane_t_ParamLimits

0xfa4a,	// (0x00057089) hc_cl_list_double_graphic_heading_pane_t

0xa445,	// (0x00051a84) vid4_progress_pane_g1

0xa455,	// (0x00051a94) vid4_progress_pane_g2

0xa465,	// (0x00051aa4) vid4_progress_pane_g3

0xa477,	// (0x00051ab6) vid4_progress_pane_g4

0x0004,

0xfa4f,	// (0x0005708e) vid4_progress_pane_g

0xa48f,	// (0x00051ace) vid4_progress_pane_t1

0xa4a5,	// (0x00051ae4) vid4_progress_pane_t2

0x0002,

0xfa5a,	// (0x00057099) vid4_progress_pane_t

0xa4d0,	// (0x00051b0f) wait_bar_pane_cp07

0xef8b,	// (0x000565ca) blid_firmament_pane_ParamLimits

0xefce,	// (0x0005660d) popup_blid_sat_info2_window_g1

0xeff2,	// (0x00056631) popup_blid_sat_info2_window_t3

0x0a71,	// (0x000480b0) popup_blid_sat_info2_window_t4

0x0a7f,	// (0x000480be) popup_blid_sat_info2_window_t5

0x0a8d,	// (0x000480cc) popup_blid_sat_info2_window_t6

0x0a9d,	// (0x000480dc) popup_blid_sat_info2_window_t7

0x0aab,	// (0x000480ea) popup_blid_sat_info2_window_t8

0x0ab9,	// (0x000480f8) popup_blid_sat_info2_window_t9

0x0ac7,	// (0x00048106) popup_blid_sat_info2_window_t10

0x0b88,	// (0x000481c7) aid_firma_cardinal_ParamLimits

0x0b9c,	// (0x000481db) blid_firmament_pane_t1_ParamLimits

0x0bb3,	// (0x000481f2) blid_firmament_pane_t2_ParamLimits

0x0bca,	// (0x00048209) blid_firmament_pane_t3_ParamLimits

0x0be1,	// (0x00048220) blid_firmament_pane_t4_ParamLimits

0xf678,	// (0x00056cb7) blid_firmament_pane_t_ParamLimits

0x0bf8,	// (0x00048237) blid_sat_info_pane_ParamLimits

0x7a09,	// (0x0004f048) main_cam_set_pane_ParamLimits

0x88bf,	// (0x0004fefe) aid_size_cell_colour_35_ParamLimits

0x88d9,	// (0x0004ff18) aid_size_cell_colour_112_ParamLimits

0x88f0,	// (0x0004ff2f) aid_size_cell_effect_ParamLimits

0xcd5c,	// (0x0005439b) bg_tb_trans_pane_cp02_ParamLimits

0xf009,	// (0x00056648) heading_imed_pane_ParamLimits

0x890a,	// (0x0004ff49) listscroll_imed_pane_ParamLimits

0xe43e,	// (0x00055a7d) popup_call2_audio_first_window_g5_ParamLimits

0xe43e,	// (0x00055a7d) popup_call2_audio_first_window_g5

0x8f3b,	// (0x0005057a) aid_size_touch_image3_arrow_left_ParamLimits

0x8f3b,	// (0x0005057a) aid_size_touch_image3_arrow_left

0x8f51,	// (0x00050590) aid_size_touch_image3_arrow_right_ParamLimits

0x8f51,	// (0x00050590) aid_size_touch_image3_arrow_right

0xa4ba,	// (0x00051af9) vid4_progress_pane_t3

0x8a8c,	// (0x000500cb) main_hwr_training_symbol_option_pane_ParamLimits

0x8a8c,	// (0x000500cb) main_hwr_training_symbol_option_pane

0x1381,	// (0x000489c0) popup_hwr_training_preview_window_ParamLimits

0x1381,	// (0x000489c0) popup_hwr_training_preview_window

0x8aed,	// (0x0005012c) hwr_training_navi_pane_g5_ParamLimits

0x8aed,	// (0x0005012c) hwr_training_navi_pane_g5

0x158f,	// (0x00048bce) popup_char_count_window

0x48a6,	// (0x0004bee5) bg_popup_sub_pane_cp20_ParamLimits

0x9e26,	// (0x00051465) list_vitu2_match_list_pane_ParamLimits

0x9e32,	// (0x00051471) vitu2_page_scroll_pane_ParamLimits

0x9e32,	// (0x00051471) vitu2_page_scroll_pane

0x1b3b,	// (0x0004917a) list_single_hwr_training_symbol_option_pane_ParamLimits

0x1b3b,	// (0x0004917a) list_single_hwr_training_symbol_option_pane

0x1b4e,	// (0x0004918d) list_single_hwr_training_symbol_option_pane_g1

0x1b56,	// (0x00049195) list_single_hwr_training_symbol_option_pane_t1

0x1b64,	// (0x000491a3) bg_button_pane_cp023

0x1b6d,	// (0x000491ac) bg_button_pane_cp024

0x1ba0,	// (0x000491df) vitu2_page_scroll_pane_g1

0x1ba8,	// (0x000491e7) vitu2_page_scroll_pane_g2

0x0001,

0xfa61,	// (0x000570a0) vitu2_page_scroll_pane_g

0x1bb0,	// (0x000491ef) vitu2_page_scroll_pane_t1

0xf000,	// (0x0005663f) popup_char_count_window_g1

0x1bbf,	// (0x000491fe) popup_char_count_window_g2

0xf037,	// (0x00056676) popup_char_count_window_g3

0x0002,

0xfa66,	// (0x000570a5) popup_char_count_window_g

0x1bc8,	// (0x00049207) popup_char_count_window_t1

0x48c0,	// (0x0004beff) main_vded2_pane

0x1134,	// (0x00048773) aid_size_cell_imed_line

0x113e,	// (0x0004877d) grid_imed_line_width_pane

0x9459,	// (0x00050a98) vid4_indicators_pane_g4

0x1bd6,	// (0x00049215) cell_imed_line_width_pane_ParamLimits

0x1bd6,	// (0x00049215) cell_imed_line_width_pane

0x1bea,	// (0x00049229) cell_imed_line_width_pane_g1

0x1bf3,	// (0x00049232) cell_imed_line_width_pane_g2

0x0001,

0xfa6d,	// (0x000570ac) cell_imed_line_width_pane_g

0xa4f5,	// (0x00051b34) main_vded2_pane_g1_ParamLimits

0xa4f5,	// (0x00051b34) main_vded2_pane_g1

0xa502,	// (0x00051b41) main_vded2_pane_g2_ParamLimits

0xa502,	// (0x00051b41) main_vded2_pane_g2

0x0001,

0xfa72,	// (0x000570b1) main_vded2_pane_g_ParamLimits

0xfa72,	// (0x000570b1) main_vded2_pane_g

0xa510,	// (0x00051b4f) vded2_slider_pane_ParamLimits

0xa510,	// (0x00051b4f) vded2_slider_pane

0xa51d,	// (0x00051b5c) aid_size_touch_vded2_end

0xa527,	// (0x00051b66) aid_size_touch_vded2_playhead

0x1bfb,	// (0x0004923a) aid_size_touch_vded2_start

0x1c03,	// (0x00049242) vded2_slider_bg_pane

0x1c0c,	// (0x0004924b) vded2_slider_pane_g1

0x1c15,	// (0x00049254) vded2_slider_pane_g2

0xa52f,	// (0x00051b6e) vded2_slider_pane_g3

0x0002,

0xfa77,	// (0x000570b6) vded2_slider_pane_g

0x1c1d,	// (0x0004925c) vded2_slider_bg_pane_g1

0x1c26,	// (0x00049265) vded2_slider_bg_pane_g2

0x1c2f,	// (0x0004926e) vded2_slider_bg_pane_g3

0x0002,

0xfa7e,	// (0x000570bd) vded2_slider_bg_pane_g

0x72a5,	// (0x0004e8e4) aid_postcard_touch_down_pane_ParamLimits

0x72a5,	// (0x0004e8e4) aid_postcard_touch_down_pane

0x72b5,	// (0x0004e8f4) aid_postcard_touch_up_pane_ParamLimits

0x72b5,	// (0x0004e8f4) aid_postcard_touch_up_pane

0x48c0,	// (0x0004beff) main_blid2_pane

0x7a3e,	// (0x0004f07d) popup_blid2_search_window

0x45ec,	// (0x0004bc2b) blid2_gps_pane

0x45ec,	// (0x0004bc2b) blid2_navig_pane

0x45ec,	// (0x0004bc2b) blid2_search_pane

0x45ec,	// (0x0004bc2b) blid2_tripm_pane

0xa538,	// (0x00051b77) blid2_search_pane_g1_ParamLimits

0xa538,	// (0x00051b77) blid2_search_pane_g1

0xa548,	// (0x00051b87) blid2_search_pane_t1_ParamLimits

0xa548,	// (0x00051b87) blid2_search_pane_t1

0xa55a,	// (0x00051b99) aid_size_cell_blid2_gps_ParamLimits

0xa55a,	// (0x00051b99) aid_size_cell_blid2_gps

0xa56a,	// (0x00051ba9) blid2_gps_pane_g1_ParamLimits

0xa56a,	// (0x00051ba9) blid2_gps_pane_g1

0xa576,	// (0x00051bb5) grid_blid2_satellite_pane_ParamLimits

0xa576,	// (0x00051bb5) grid_blid2_satellite_pane

0xa586,	// (0x00051bc5) blid2_navig_pane_g1_ParamLimits

0xa586,	// (0x00051bc5) blid2_navig_pane_g1

0xa592,	// (0x00051bd1) blid2_navig_pane_t1_ParamLimits

0xa592,	// (0x00051bd1) blid2_navig_pane_t1

0xa5a4,	// (0x00051be3) blid2_navig_pane_t2_ParamLimits

0xa5a4,	// (0x00051be3) blid2_navig_pane_t2

0x0001,

0xfa85,	// (0x000570c4) blid2_navig_pane_t_ParamLimits

0xfa85,	// (0x000570c4) blid2_navig_pane_t

0xa5b6,	// (0x00051bf5) blid2_navig_ring_pane_ParamLimits

0xa5b6,	// (0x00051bf5) blid2_navig_ring_pane

0xa5c6,	// (0x00051c05) blid2_speed_pane_ParamLimits

0xa5c6,	// (0x00051c05) blid2_speed_pane

0xa5d2,	// (0x00051c11) blid2_tripm_pane_g1_ParamLimits

0xa5d2,	// (0x00051c11) blid2_tripm_pane_g1

0xa5e2,	// (0x00051c21) blid2_tripm_pane_g2_ParamLimits

0xa5e2,	// (0x00051c21) blid2_tripm_pane_g2

0xa5ee,	// (0x00051c2d) blid2_tripm_pane_g3_ParamLimits

0xa5ee,	// (0x00051c2d) blid2_tripm_pane_g3

0xa5fa,	// (0x00051c39) blid2_tripm_pane_g4_ParamLimits

0xa5fa,	// (0x00051c39) blid2_tripm_pane_g4

0xa606,	// (0x00051c45) blid2_tripm_pane_g5_ParamLimits

0xa606,	// (0x00051c45) blid2_tripm_pane_g5

0x0005,

0xfa8a,	// (0x000570c9) blid2_tripm_pane_g_ParamLimits

0xfa8a,	// (0x000570c9) blid2_tripm_pane_g

0xa622,	// (0x00051c61) blid2_tripm_pane_t1_ParamLimits

0xa622,	// (0x00051c61) blid2_tripm_pane_t1

0xa636,	// (0x00051c75) blid2_tripm_pane_t2_ParamLimits

0xa636,	// (0x00051c75) blid2_tripm_pane_t2

0xa648,	// (0x00051c87) blid2_tripm_pane_t3_ParamLimits

0xa648,	// (0x00051c87) blid2_tripm_pane_t3

0x0003,

0xfa97,	// (0x000570d6) blid2_tripm_pane_t_ParamLimits

0xfa97,	// (0x000570d6) blid2_tripm_pane_t

0xa67a,	// (0x00051cb9) cell_blid2_satellite_pane_ParamLimits

0xa67a,	// (0x00051cb9) cell_blid2_satellite_pane

0xa694,	// (0x00051cd3) cell_blid2_satellite_pane_g1

0x1c38,	// (0x00049277) cell_blid2_satellite_pane_t1

0xd00f,	// (0x0005464e) blid2_speed_pane_g1

0x1c46,	// (0x00049285) blid2_speed_pane_t1

0x1c54,	// (0x00049293) blid2_speed_pane_t2

0x0001,

0xfaa0,	// (0x000570df) blid2_speed_pane_t

0xd00f,	// (0x0005464e) blid2_navig_ring_pane_g1

0xa69d,	// (0x00051cdc) blid2_navig_ring_pane_g2

0xa6a5,	// (0x00051ce4) blid2_navig_ring_pane_g3

0xa6ad,	// (0x00051cec) blid2_navig_ring_pane_g4

0xa6b5,	// (0x00051cf4) blid2_navig_ring_pane_g5

0x0004,

0xfaa5,	// (0x000570e4) blid2_navig_ring_pane_g

0x45ec,	// (0x0004bc2b) bg_popup_window_pane_cp011

0x1c62,	// (0x000492a1) popup_blid2_search_window_g1

0x1c6a,	// (0x000492a9) popup_blid2_search_window_t1

0x1c78,	// (0x000492b7) popup_blid2_search_window_t2

0x0001,

0xfab0,	// (0x000570ef) popup_blid2_search_window_t

0xd123,	// (0x00054762) main_browser_pane_g1

0xce27,	// (0x00054466) main_browser_pane_ParamLimits

0x7a09,	// (0x0004f048) bg_button_pane_cp011_ParamLimits

0x96d3,	// (0x00050d12) cell_vitu2_function_pane_g1_ParamLimits

0xed6f,	// (0x000563ae) bg_popup_sub_pane_cp22_ParamLimits

0x9fd2,	// (0x00051611) input_focus_pane_cp08_ParamLimits

0x9fe9,	// (0x00051628) popup_vitu2_query_button_pane_ParamLimits

0x9fe9,	// (0x00051628) popup_vitu2_query_button_pane

0x9ffa,	// (0x00051639) popup_vitu2_query_input_button_pane

0x1834,	// (0x00048e73) popup_vitu2_query_window_g1_ParamLimits

0xa004,	// (0x00051643) popup_vitu2_query_window_g2_ParamLimits

0xf9b1,	// (0x00056ff0) popup_vitu2_query_window_g_ParamLimits

0x45ec,	// (0x0004bc2b) bg_button_pane_cp026

0xa6bd,	// (0x00051cfc) popup_vitu2_query_input_button_pane_g1

0x45ec,	// (0x0004bc2b) bg_button_pane_cp025

0x1c86,	// (0x000492c5) popup_vitu2_query_button_pane_t1

0x7f11,	// (0x0004f550) main_mp3_pane_t6

0x7f21,	// (0x0004f560) popup_slider_window_cp01

0x933e,	// (0x0005097d) cam4_battery_pane

0x9418,	// (0x00050a57) cam4_battery_pane_cp02

0xa43d,	// (0x00051a7c) cam4_battery_pane_cp01

0xa43d,	// (0x00051a7c) cam4_battery_pane_cp03

0xf07b,	// (0x000566ba) cam4_battery_pane_g1

0xd00f,	// (0x0005464e) cam4_battery_pane_g2

0x0001,

0xfab5,	// (0x000570f4) cam4_battery_pane_g

0x0ad5,	// (0x00048114) popup_blid_sat_info2_window_t11

0xd863,	// (0x00054ea2) aid_size_touch_mv_arrow_left_ParamLimits

0xd88e,	// (0x00054ecd) aid_size_touch_mv_arrow_right_ParamLimits

0xd8ec,	// (0x00054f2b) navi_pane_g1_ParamLimits

0xd8f8,	// (0x00054f37) navi_pane_g2_ParamLimits

0xd926,	// (0x00054f65) navi_pane_g3_ParamLimits

0xf379,	// (0x000569b8) navi_pane_g_ParamLimits

0x6eed,	// (0x0004e52c) navi_pane_mv_t1_ParamLimits

0x8916,	// (0x0004ff55) grid_imed_effect_pane_ParamLimits

0x5987,	// (0x0004cfc6) aid_placing_vt_slider_lsc

0xd072,	// (0x000546b1) aid_placing_vt_slider_prt

0xcd5c,	// (0x0005439b) bg_tb_trans_pane_cp01_ParamLimits

0x0d73,	// (0x000483b2) popup_image_details_window_g1_ParamLimits

0x0d86,	// (0x000483c5) popup_image_details_window_g2_ParamLimits

0x0d9b,	// (0x000483da) popup_image_details_window_g3_ParamLimits

0x0d9b,	// (0x000483da) popup_image_details_window_g3

0xf6b8,	// (0x00056cf7) popup_image_details_window_g_ParamLimits

0x0daf,	// (0x000483ee) popup_image_details_window_t1_ParamLimits

0x0dc1,	// (0x00048400) popup_image_details_window_t2_ParamLimits

0x0dda,	// (0x00048419) popup_image_details_window_t3_ParamLimits

0x0dee,	// (0x0004842d) popup_image_details_window_t4_ParamLimits

0x0e09,	// (0x00048448) popup_image_details_window_t5_ParamLimits

0xf6bf,	// (0x00056cfe) popup_image_details_window_t_ParamLimits

0xa35d,	// (0x0005199c) cl_header_name_pane_ParamLimits

0xa35d,	// (0x0005199c) cl_header_name_pane

0xa6c5,	// (0x00051d04) cl_header_name_pane_t1_ParamLimits

0xa6c5,	// (0x00051d04) cl_header_name_pane_t1

0xa6dc,	// (0x00051d1b) cl_header_name_pane_t2_ParamLimits

0xa6dc,	// (0x00051d1b) cl_header_name_pane_t2

0xa706,	// (0x00051d45) cl_header_name_pane_t3_ParamLimits

0xa706,	// (0x00051d45) cl_header_name_pane_t3

0x0002,

0xfaba,	// (0x000570f9) cl_header_name_pane_t_ParamLimits

0xfaba,	// (0x000570f9) cl_header_name_pane_t

0xd9b5,	// (0x00054ff4) navi_pane_mv_g2_ParamLimits

0x155a,	// (0x00048b99) field_vitu2_entry_pane_g1_ParamLimits

0x1566,	// (0x00048ba5) field_vitu2_entry_pane_g2_ParamLimits

0xf029,	// (0x00056668) field_vitu2_entry_pane_g3_ParamLimits

0xf029,	// (0x00056668) field_vitu2_entry_pane_g3

0xf8ba,	// (0x00056ef9) field_vitu2_entry_pane_g_ParamLimits

0x9661,	// (0x00050ca0) cell_vitu2_itu_pane_g1_ParamLimits

0x9679,	// (0x00050cb8) cell_vitu2_itu_pane_g2_ParamLimits

0x9679,	// (0x00050cb8) cell_vitu2_itu_pane_g2

0x0001,

0xf8c6,	// (0x00056f05) cell_vitu2_itu_pane_g_ParamLimits

0xf8c6,	// (0x00056f05) cell_vitu2_itu_pane_g

0x7a09,	// (0x0004f048) bg_vkb2_func_pane_cp05_ParamLimits

0x7a09,	// (0x0004f048) bg_vkb2_func_pane_cp05

0x7a09,	// (0x0004f048) bg_vkb2_func_pane_cp03

0x7a09,	// (0x0004f048) bg_vkb2_func_pane_cp04

0x7a09,	// (0x0004f048) bg_vkb2_func_pane_cp10_ParamLimits

0x7a09,	// (0x0004f048) bg_vkb2_func_pane_cp10

0xa2ff,	// (0x0005193e) bg_vkb2_func_pane_cp08

0xa2e5,	// (0x00051924) bg_vkb2_func_pane_cp06

0xa2f3,	// (0x00051932) bg_vkb2_func_pane_cp07

0x1b76,	// (0x000491b5) bg_vkb2_func_pane_cp11_ParamLimits

0x1b76,	// (0x000491b5) bg_vkb2_func_pane_cp11

0x1b8b,	// (0x000491ca) bg_vkb2_func_pane_cp12_ParamLimits

0x1b8b,	// (0x000491ca) bg_vkb2_func_pane_cp12

0x45ec,	// (0x0004bc2b) bg_vkb2_func_pane_cp09

0x15a1,	// (0x00048be0) bg_vkb2_func_pane_g1

0xd234,	// (0x00054873) bg_vkb2_func_pane_g2

0x15a9,	// (0x00048be8) bg_vkb2_func_pane_g3

0x15b1,	// (0x00048bf0) bg_vkb2_func_pane_g4

0x17f9,	// (0x00048e38) bg_vkb2_func_pane_g5

0x15c9,	// (0x00048c08) bg_vkb2_func_pane_g6

0x15d1,	// (0x00048c10) bg_vkb2_func_pane_g7

0x15c1,	// (0x00048c00) bg_vkb2_func_pane_g8

0xd214,	// (0x00054853) bg_vkb2_func_pane_g9

0x0008,

0xfac1,	// (0x00057100) bg_vkb2_func_pane_g

0xa614,	// (0x00051c53) blid2_tripm_pane_g6_ParamLimits

0xa614,	// (0x00051c53) blid2_tripm_pane_g6

0x14ac,	// (0x00048aeb) mp4_progress_pane_g1

0xa66e,	// (0x00051cad) blid2_tripm_values_pane_ParamLimits

0xa66e,	// (0x00051cad) blid2_tripm_values_pane

0xa72b,	// (0x00051d6a) blid2_tripm_values_pane_t1

0xa739,	// (0x00051d78) blid2_tripm_values_pane_t2

0xa747,	// (0x00051d86) blid2_tripm_values_pane_t3

0xa755,	// (0x00051d94) blid2_tripm_values_pane_t4

0xa763,	// (0x00051da2) blid2_tripm_values_pane_t5

0xa771,	// (0x00051db0) blid2_tripm_values_pane_t6

0xa77f,	// (0x00051dbe) blid2_tripm_values_pane_t7

0xa78d,	// (0x00051dcc) blid2_tripm_values_pane_t8

0xa79b,	// (0x00051dda) blid2_tripm_values_pane_t9

0x0008,

0xfad4,	// (0x00057113) blid2_tripm_values_pane_t

0x59c7,	// (0x0004d006) call_video_pane_t1_ParamLimits

0x59e8,	// (0x0004d027) call_video_pane_t2_ParamLimits

0xf222,	// (0x00056861) call_video_pane_t_ParamLimits

0x71ef,	// (0x0004e82e) msg_header_pane_g1_ParamLimits

0xdb88,	// (0x000551c7) msg_header_pane_g2_ParamLimits

0xdb88,	// (0x000551c7) msg_header_pane_g2

0x0001,

0xf41c,	// (0x00056a5b) msg_header_pane_g_ParamLimits

0xf41c,	// (0x00056a5b) msg_header_pane_g

0xce27,	// (0x00054466) main_clock2_pane_ParamLimits

0x8690,	// (0x0004fccf) grid_clock2_toolbar_pane_ParamLimits

0x8690,	// (0x0004fccf) grid_clock2_toolbar_pane

0x8690,	// (0x0004fccf) listscroll_clock2_pane_ParamLimits

0x8690,	// (0x0004fccf) listscroll_clock2_pane

0x8740,	// (0x0004fd7f) main_clock2_pane_t3_ParamLimits

0x8740,	// (0x0004fd7f) main_clock2_pane_t3

0x8752,	// (0x0004fd91) main_clock2_pane_t4_ParamLimits

0x8752,	// (0x0004fd91) main_clock2_pane_t4

0x1c94,	// (0x000492d3) cell_clock2_toolbar_pane

0x1c9c,	// (0x000492db) cell_clock2_toolbar_pane_cp01

0x1c9c,	// (0x000492db) cell_clock2_toolbar_pane_cp02

0x1ca4,	// (0x000492e3) cell_clock2_toolbar_pane_cp03

0x1cac,	// (0x000492eb) list_clock2_pane

0xd7e8,	// (0x00054e27) scroll_pane_cp10

0x1cb4,	// (0x000492f3) list_single_clock2_pane_ParamLimits

0x1cb4,	// (0x000492f3) list_single_clock2_pane

0xcfd9,	// (0x00054618) list_highlight_pane_cp08

0x1cc1,	// (0x00049300) list_single_clock2_pane_t1

0x1ccf,	// (0x0004930e) list_single_clock2_pane_t2

0x0001,

0xfae7,	// (0x00057126) list_single_clock2_pane_t

0x45ec,	// (0x0004bc2b) bg_button_pane_cp10

0x1cdd,	// (0x0004931c) cell_clock2_toolbar_pane_g1

0x7213,	// (0x0004e852) aid_main_viewer_pane_g1_ParamLimits

0x7213,	// (0x0004e852) aid_main_viewer_pane_g1

0x721f,	// (0x0004e85e) aid_main_viewer_pane_g2_ParamLimits

0x721f,	// (0x0004e85e) aid_main_viewer_pane_g2

0x722b,	// (0x0004e86a) aid_main_viewer_pane_g3_ParamLimits

0x722b,	// (0x0004e86a) aid_main_viewer_pane_g3

0x723c,	// (0x0004e87b) aid_main_viewer_pane_g4_ParamLimits

0x723c,	// (0x0004e87b) aid_main_viewer_pane_g4

0x0003,

0xf42d,	// (0x00056a6c) aid_main_viewer_pane_g_ParamLimits

0xf42d,	// (0x00056a6c) aid_main_viewer_pane_g

0x79fc,	// (0x0004f03b) main_calc_pane_ParamLimits

0x7a17,	// (0x0004f056) main_dialer2_pane_ParamLimits

0x48c0,	// (0x0004beff) main_cam6_pane

0x48c0,	// (0x0004beff) main_vid6_pane

0x869c,	// (0x0004fcdb) listscroll_gen_pane_cp06_ParamLimits

0x869c,	// (0x0004fcdb) listscroll_gen_pane_cp06

0x8764,	// (0x0004fda3) main_clock2_pane_t5_ParamLimits

0x8764,	// (0x0004fda3) main_clock2_pane_t5

0x87b1,	// (0x0004fdf0) aid_call2_pane_cp10_ParamLimits

0x87c3,	// (0x0004fe02) aid_call_pane_cp10_ParamLimits

0xd857,	// (0x00054e96) popup_clock_analogue_window_cp10_g1_ParamLimits

0xd857,	// (0x00054e96) popup_clock_analogue_window_cp10_g2_ParamLimits

0x87d5,	// (0x0004fe14) popup_clock_analogue_window_cp10_g3_ParamLimits

0x87d5,	// (0x0004fe14) popup_clock_analogue_window_cp10_g4_ParamLimits

0xd857,	// (0x00054e96) popup_clock_analogue_window_cp10_g5_ParamLimits

0xf774,	// (0x00056db3) popup_clock_analogue_window_cp10_g_ParamLimits

0x87eb,	// (0x0004fe2a) popup_clock_analogue_window_cp10_t1_ParamLimits

0x8ee8,	// (0x00050527) cell_dialer2_keypad_pane_g2_ParamLimits

0x8ee8,	// (0x00050527) cell_dialer2_keypad_pane_g2

0x0001,

0xf859,	// (0x00056e98) cell_dialer2_keypad_pane_g_ParamLimits

0xf859,	// (0x00056e98) cell_dialer2_keypad_pane_g

0x8f04,	// (0x00050543) cell_dialer2_keypad_pane_t1

0x99a5,	// (0x00050fe4) main_cset_text2_pane_ParamLimits

0x99a5,	// (0x00050fe4) main_cset_text2_pane

0x1a20,	// (0x0004905f) area_vitu2_query_pane_g1_ParamLimits

0xa284,	// (0x000518c3) area_vitu2_query_pane_g2_ParamLimits

0xfa04,	// (0x00057043) area_vitu2_query_pane_g_ParamLimits

0x1aa4,	// (0x000490e3) area_vitu2_query_pane_t7_ParamLimits

0x1aa4,	// (0x000490e3) area_vitu2_query_pane_t7

0xa2e5,	// (0x00051924) bg_button_pane_cp018_ParamLimits

0xa2f3,	// (0x00051932) bg_button_pane_cp021_ParamLimits

0xa2ff,	// (0x0005193e) bg_button_pane_cp022_ParamLimits

0xa2ff,	// (0x0005193e) bg_vkb2_func_pane_cp08_ParamLimits

0xa2e5,	// (0x00051924) bg_vkb2_func_pane_cp06_ParamLimits

0xa2f3,	// (0x00051932) bg_vkb2_func_pane_cp07_ParamLimits

0xa310,	// (0x0005194f) input_focus_pane_cp09_ParamLimits

0xa7a9,	// (0x00051de8) cam6_autofocus_pane_ParamLimits

0xa7a9,	// (0x00051de8) cam6_autofocus_pane

0xa7cb,	// (0x00051e0a) cam6_image_uncrop_pane_ParamLimits

0xa7cb,	// (0x00051e0a) cam6_image_uncrop_pane

0xa7f8,	// (0x00051e37) cam6_indi_pane_ParamLimits

0xa7f8,	// (0x00051e37) cam6_indi_pane

0xa812,	// (0x00051e51) cam6_mode_pane_ParamLimits

0xa812,	// (0x00051e51) cam6_mode_pane

0xa826,	// (0x00051e65) cam6_timer_pane_ParamLimits

0xa826,	// (0x00051e65) cam6_timer_pane

0xa837,	// (0x00051e76) cam6_zoom_pane_ParamLimits

0xa837,	// (0x00051e76) cam6_zoom_pane

0xa84f,	// (0x00051e8e) cam6_mode_pane_g1_ParamLimits

0xa84f,	// (0x00051e8e) cam6_mode_pane_g1

0xa85b,	// (0x00051e9a) cam6_mode_pane_g2_ParamLimits

0xa85b,	// (0x00051e9a) cam6_mode_pane_g2

0xa867,	// (0x00051ea6) cam6_mode_pane_g3_ParamLimits

0xa867,	// (0x00051ea6) cam6_mode_pane_g3

0xa873,	// (0x00051eb2) cam6_mode_pane_g4_ParamLimits

0xa873,	// (0x00051eb2) cam6_mode_pane_g4

0x0003,

0xfaec,	// (0x0005712b) cam6_mode_pane_g_ParamLimits

0xfaec,	// (0x0005712b) cam6_mode_pane_g

0x0a4d,	// (0x0004808c) bg_tb_trans_pane_cp08_ParamLimits

0x0a4d,	// (0x0004808c) bg_tb_trans_pane_cp08

0x1ce5,	// (0x00049324) cam6_battery_pane_ParamLimits

0x1ce5,	// (0x00049324) cam6_battery_pane

0x1cfb,	// (0x0004933a) cam6_indi_pane_g1_ParamLimits

0x1cfb,	// (0x0004933a) cam6_indi_pane_g1

0x1d0d,	// (0x0004934c) cam6_indi_pane_g2_ParamLimits

0x1d0d,	// (0x0004934c) cam6_indi_pane_g2

0x1d1f,	// (0x0004935e) cam6_indi_pane_g3_ParamLimits

0x1d1f,	// (0x0004935e) cam6_indi_pane_g3

0x0002,

0xfaf5,	// (0x00057134) cam6_indi_pane_g_ParamLimits

0xfaf5,	// (0x00057134) cam6_indi_pane_g

0x1d31,	// (0x00049370) cam6_indi_pane_t1_ParamLimits

0x1d31,	// (0x00049370) cam6_indi_pane_t1

0x9494,	// (0x00050ad3) cam6_autofocus_pane_g1

0x948c,	// (0x00050acb) cam6_autofocus_pane_g2

0x94a4,	// (0x00050ae3) cam6_autofocus_pane_g3

0x949c,	// (0x00050adb) cam6_autofocus_pane_g4

0x0003,

0xfafc,	// (0x0005713b) cam6_autofocus_pane_g

0x1d57,	// (0x00049396) cam6_timer_pane_g1

0x1d5f,	// (0x0004939e) cam6_timer_pane_t1

0x1d6d,	// (0x000493ac) cam6_zoom_cont_pane

0x1d75,	// (0x000493b4) cam6_zoom_pane_g1

0x1d7d,	// (0x000493bc) cam6_zoom_pane_g2

0xa87f,	// (0x00051ebe) cam6_zoom_pane_g3

0x0002,

0xfb05,	// (0x00057144) cam6_zoom_pane_g

0xd00f,	// (0x0005464e) cam6_battery_pane_g1

0xd00f,	// (0x0005464e) cam6_battery_pane_g2

0x0001,

0xf3dd,	// (0x00056a1c) cam6_battery_pane_g

0x1d85,	// (0x000493c4) cam6_zoom_cont_pane_g1

0x1d8e,	// (0x000493cd) cam6_zoom_cont_pane_g2

0x1d97,	// (0x000493d6) cam6_zoom_cont_pane_g3

0x0002,

0xfb0c,	// (0x0005714b) cam6_zoom_cont_pane_g

0xa89c,	// (0x00051edb) cam6_mode_pane_cp_ParamLimits

0xa89c,	// (0x00051edb) cam6_mode_pane_cp

0xa8b0,	// (0x00051eef) cam6_zoom_pane_cp_ParamLimits

0xa8b0,	// (0x00051eef) cam6_zoom_pane_cp

0xa8c8,	// (0x00051f07) vid6_image_uncrop_cif_pane_ParamLimits

0xa8c8,	// (0x00051f07) vid6_image_uncrop_cif_pane

0xa8f4,	// (0x00051f33) vid6_image_uncrop_nhd_pane_ParamLimits

0xa8f4,	// (0x00051f33) vid6_image_uncrop_nhd_pane

0xa911,	// (0x00051f50) vid6_image_uncrop_vga_pane_ParamLimits

0xa911,	// (0x00051f50) vid6_image_uncrop_vga_pane

0xa930,	// (0x00051f6f) vid6_image_uncrop_wvga_pane_ParamLimits

0xa930,	// (0x00051f6f) vid6_image_uncrop_wvga_pane

0xa94d,	// (0x00051f8c) vid6_indi_pane_ParamLimits

0xa94d,	// (0x00051f8c) vid6_indi_pane

0x0a4d,	// (0x0004808c) bg_tb_trans_pane_cp09_ParamLimits

0x0a4d,	// (0x0004808c) bg_tb_trans_pane_cp09

0x1daf,	// (0x000493ee) cam6_battery_pane_cp_ParamLimits

0x1daf,	// (0x000493ee) cam6_battery_pane_cp

0x1dbb,	// (0x000493fa) vid6_indi_pane_g1_ParamLimits

0x1dbb,	// (0x000493fa) vid6_indi_pane_g1

0x1dcd,	// (0x0004940c) vid6_indi_pane_g2_ParamLimits

0x1dcd,	// (0x0004940c) vid6_indi_pane_g2

0x1ddf,	// (0x0004941e) vid6_indi_pane_g3_ParamLimits

0x1ddf,	// (0x0004941e) vid6_indi_pane_g3

0x1df4,	// (0x00049433) vid6_indi_pane_g4_ParamLimits

0x1df4,	// (0x00049433) vid6_indi_pane_g4

0x1e09,	// (0x00049448) vid6_indi_pane_g5_ParamLimits

0x1e09,	// (0x00049448) vid6_indi_pane_g5

0x0004,

0xfb13,	// (0x00057152) vid6_indi_pane_g_ParamLimits

0xfb13,	// (0x00057152) vid6_indi_pane_g

0x1e23,	// (0x00049462) vid6_indi_pane_t1_ParamLimits

0x1e23,	// (0x00049462) vid6_indi_pane_t1

0x1e39,	// (0x00049478) vid6_indi_pane_t2_ParamLimits

0x1e39,	// (0x00049478) vid6_indi_pane_t2

0x1e61,	// (0x000494a0) vid6_indi_pane_t3_ParamLimits

0x1e61,	// (0x000494a0) vid6_indi_pane_t3

0x1e89,	// (0x000494c8) vid6_indi_pane_t4_ParamLimits

0x1e89,	// (0x000494c8) vid6_indi_pane_t4

0x0003,

0xfb1e,	// (0x0005715d) vid6_indi_pane_t_ParamLimits

0xfb1e,	// (0x0005715d) vid6_indi_pane_t

0x1ead,	// (0x000494ec) wait_bar_pane_cp08

0xa970,	// (0x00051faf) main_cset_text2_pane_t1_ParamLimits

0xa970,	// (0x00051faf) main_cset_text2_pane_t1

0xa887,	// (0x00051ec6) listscroll_gen_pane_cp06_t1_ParamLimits

0xa887,	// (0x00051ec6) listscroll_gen_pane_cp06_t1

0x48c0,	// (0x0004beff) main_cam6_set_pane

0x2828,	// (0x00049e67) bg_tb_trans_pane_cp06_ParamLimits

0x9346,	// (0x00050985) cam4_indicators_pane_g1_ParamLimits

0x9357,	// (0x00050996) cam4_indicators_pane_g2_ParamLimits

0xf896,	// (0x00056ed5) cam4_indicators_pane_g_ParamLimits

0x936f,	// (0x000509ae) cam4_indicators_pane_t1_ParamLimits

0x7a09,	// (0x0004f048) bg_tb_trans_pane_cp07_ParamLimits

0x9420,	// (0x00050a5f) vid4_indicators_pane_g1_ParamLimits

0x9434,	// (0x00050a73) vid4_indicators_pane_g2_ParamLimits

0x9448,	// (0x00050a87) vid4_indicators_pane_g3_ParamLimits

0x9459,	// (0x00050a98) vid4_indicators_pane_g4_ParamLimits

0xf8a8,	// (0x00056ee7) vid4_indicators_pane_g_ParamLimits

0x9475,	// (0x00050ab4) vid4_indicators_pane_t1_ParamLimits

0xa445,	// (0x00051a84) vid4_progress_pane_g1_ParamLimits

0xa455,	// (0x00051a94) vid4_progress_pane_g2_ParamLimits

0xa465,	// (0x00051aa4) vid4_progress_pane_g3_ParamLimits

0xa477,	// (0x00051ab6) vid4_progress_pane_g4_ParamLimits

0xfa4f,	// (0x0005708e) vid4_progress_pane_g_ParamLimits

0xa48f,	// (0x00051ace) vid4_progress_pane_t1_ParamLimits

0xa4a5,	// (0x00051ae4) vid4_progress_pane_t2_ParamLimits

0xa4ba,	// (0x00051af9) vid4_progress_pane_t3_ParamLimits

0xfa5a,	// (0x00057099) vid4_progress_pane_t_ParamLimits

0xa4d0,	// (0x00051b0f) wait_bar_pane_cp07_ParamLimits

0xa9a7,	// (0x00051fe6) main_cam6_set_pane_g2_ParamLimits

0xa9a7,	// (0x00051fe6) main_cam6_set_pane_g2

0xa9b3,	// (0x00051ff2) main_cset6_listscroll_pane_ParamLimits

0xa9b3,	// (0x00051ff2) main_cset6_listscroll_pane

0xa9de,	// (0x0005201d) main_cset6_slider_pane_ParamLimits

0xa9de,	// (0x0005201d) main_cset6_slider_pane

0xa9ea,	// (0x00052029) main_cset6_text2_pane_ParamLimits

0xa9ea,	// (0x00052029) main_cset6_text2_pane

0x1ebc,	// (0x000494fb) main_cset6_text_pane

0x1ec4,	// (0x00049503) main_cset_list_pane_copy1_ParamLimits

0x1ec4,	// (0x00049503) main_cset_list_pane_copy1

0x1ed4,	// (0x00049513) scroll_pane_cp028_copy1

0xa9fd,	// (0x0005203c) cset_list_set_pane_copy1

0xaa13,	// (0x00052052) aid_position_infowindow_above_copy1

0xaa1b,	// (0x0005205a) aid_position_infowindow_below_copy1

0xaa23,	// (0x00052062) cset_list_set_pane_g1_copy1

0x9c8c,	// (0x000512cb) cset_list_set_pane_g3_copy1_ParamLimits

0x9c8c,	// (0x000512cb) cset_list_set_pane_g3_copy1

0x9c9b,	// (0x000512da) cset_list_set_pane_t1_copy1_ParamLimits

0x9c9b,	// (0x000512da) cset_list_set_pane_t1_copy1

0xcd5c,	// (0x0005439b) list_highlight_pane_cp021_copy1_ParamLimits

0xcd5c,	// (0x0005439b) list_highlight_pane_cp021_copy1

0x1edd,	// (0x0004951c) cset6_slider_pane_ParamLimits

0x1edd,	// (0x0004951c) cset6_slider_pane

0x1f09,	// (0x00049548) main_cset6_slider_pane_g1_ParamLimits

0x1f09,	// (0x00049548) main_cset6_slider_pane_g1

0xaa2b,	// (0x0005206a) main_cset6_slider_pane_g2_ParamLimits

0xaa2b,	// (0x0005206a) main_cset6_slider_pane_g2

0x1f31,	// (0x00049570) main_cset6_slider_pane_g3_ParamLimits

0x1f31,	// (0x00049570) main_cset6_slider_pane_g3

0xaa53,	// (0x00052092) main_cset6_slider_pane_g4_ParamLimits

0xaa53,	// (0x00052092) main_cset6_slider_pane_g4

0xaa5f,	// (0x0005209e) main_cset6_slider_pane_g5_ParamLimits

0xaa5f,	// (0x0005209e) main_cset6_slider_pane_g5

0x16d0,	// (0x00048d0f) main_cset6_slider_pane_g7_ParamLimits

0x16d0,	// (0x00048d0f) main_cset6_slider_pane_g7

0x16dc,	// (0x00048d1b) main_cset6_slider_pane_g8_ParamLimits

0x16dc,	// (0x00048d1b) main_cset6_slider_pane_g8

0xaa6d,	// (0x000520ac) main_cset6_slider_pane_g9_ParamLimits

0xaa6d,	// (0x000520ac) main_cset6_slider_pane_g9

0xaa79,	// (0x000520b8) main_cset6_slider_pane_g10_ParamLimits

0xaa79,	// (0x000520b8) main_cset6_slider_pane_g10

0xaa85,	// (0x000520c4) main_cset6_slider_pane_g11_ParamLimits

0xaa85,	// (0x000520c4) main_cset6_slider_pane_g11

0xaa91,	// (0x000520d0) main_cset6_slider_pane_g12_ParamLimits

0xaa91,	// (0x000520d0) main_cset6_slider_pane_g12

0x16e8,	// (0x00048d27) main_cset6_slider_pane_g13_ParamLimits

0x16e8,	// (0x00048d27) main_cset6_slider_pane_g13

0x16f4,	// (0x00048d33) main_cset6_slider_pane_g14_ParamLimits

0x16f4,	// (0x00048d33) main_cset6_slider_pane_g14

0xaa9d,	// (0x000520dc) main_cset6_slider_pane_g15_ParamLimits

0xaa9d,	// (0x000520dc) main_cset6_slider_pane_g15

0xaab5,	// (0x000520f4) main_cset6_slider_pane_g16_ParamLimits

0xaab5,	// (0x000520f4) main_cset6_slider_pane_g16

0xaac3,	// (0x00052102) main_cset6_slider_pane_g17_ParamLimits

0xaac3,	// (0x00052102) main_cset6_slider_pane_g17

0x0011,

0xfb27,	// (0x00057166) main_cset6_slider_pane_g_ParamLimits

0xfb27,	// (0x00057166) main_cset6_slider_pane_g

0x1f49,	// (0x00049588) main_cset6_slider_pane_t1_ParamLimits

0x1f49,	// (0x00049588) main_cset6_slider_pane_t1

0xaadd,	// (0x0005211c) main_cset6_slider_pane_t2_ParamLimits

0xaadd,	// (0x0005211c) main_cset6_slider_pane_t2

0xab08,	// (0x00052147) main_cset6_slider_pane_t3_ParamLimits

0xab08,	// (0x00052147) main_cset6_slider_pane_t3

0xab33,	// (0x00052172) main_cset6_slider_pane_t4_ParamLimits

0xab33,	// (0x00052172) main_cset6_slider_pane_t4

0xab5e,	// (0x0005219d) main_cset6_slider_pane_t5_ParamLimits

0xab5e,	// (0x0005219d) main_cset6_slider_pane_t5

0x1f8a,	// (0x000495c9) main_cset6_slider_pane_t7_ParamLimits

0x1f8a,	// (0x000495c9) main_cset6_slider_pane_t7

0xab8b,	// (0x000521ca) main_cset6_slider_pane_t8_ParamLimits

0xab8b,	// (0x000521ca) main_cset6_slider_pane_t8

0xabaf,	// (0x000521ee) main_cset6_slider_pane_t9_ParamLimits

0xabaf,	// (0x000521ee) main_cset6_slider_pane_t9

0xabd3,	// (0x00052212) main_cset6_slider_pane_t10_ParamLimits

0xabd3,	// (0x00052212) main_cset6_slider_pane_t10

0xabf7,	// (0x00052236) main_cset6_slider_pane_t11_ParamLimits

0xabf7,	// (0x00052236) main_cset6_slider_pane_t11

0x1fc0,	// (0x000495ff) main_cset6_slider_pane_t14_ParamLimits

0x1fc0,	// (0x000495ff) main_cset6_slider_pane_t14

0x1ff9,	// (0x00049638) main_cset6_slider_pane_t15_ParamLimits

0x1ff9,	// (0x00049638) main_cset6_slider_pane_t15

0x000b,

0xfb4c,	// (0x0005718b) main_cset6_slider_pane_t_ParamLimits

0xfb4c,	// (0x0005718b) main_cset6_slider_pane_t

0x1356,	// (0x00048995) cset_slider_pane_g1_copy1

0x17b6,	// (0x00048df5) cset_slider_pane_g2_copy1

0x17bf,	// (0x00048dfe) cset_slider_pane_g3_copy1

0x45ec,	// (0x0004bc2b) bg_popup_sub_pane_cp011_copy1

0x203b,	// (0x0004967a) main_cset_text_pane_g1_copy1

0x1848,	// (0x00048e87) main_cset_text_pane_t1_copy1

0x1856,	// (0x00048e95) main_cset_text_pane_t2_copy1

0x1864,	// (0x00048ea3) main_cset_text_pane_t3_copy1

0x1872,	// (0x00048eb1) main_cset_text_pane_t4_copy1

0x1880,	// (0x00048ebf) main_cset_text_pane_t5_copy1

0x2043,	// (0x00049682) main_cset_text_pane_t6_copy1

0x2051,	// (0x00049690) main_cset_text_pane_t7_copy1

0xac3a,	// (0x00052279) main_cset_text2_pane_t1_copy1

0x7a09,	// (0x0004f048) main_ncimui_pane

0x7a74,	// (0x0004f0b3) popup_query_ncimui_window_ParamLimits

0x7a74,	// (0x0004f0b3) popup_query_ncimui_window

0x0ee6,	// (0x00048525) field_cale_ev2_pane_g4_ParamLimits

0x0ee6,	// (0x00048525) field_cale_ev2_pane_g4

0x8bc8,	// (0x00050207) cell_video_dialer_keypad_pane_g2_ParamLimits

0x8bc8,	// (0x00050207) cell_video_dialer_keypad_pane_g2

0x0001,

0xf830,	// (0x00056e6f) cell_video_dialer_keypad_pane_g_ParamLimits

0xf830,	// (0x00056e6f) cell_video_dialer_keypad_pane_g

0x8be0,	// (0x0005021f) cell_video_dialer_keypad_pane_t1

0x45ec,	// (0x0004bc2b) bg_popup_window_pane_cp012

0xeccb,	// (0x0005630a) heading_pane_cp06

0x207d,	// (0x000496bc) ncim_query_content_pane

0x45ec,	// (0x0004bc2b) bg_popup_heading_pane_cp01

0x2085,	// (0x000496c4) ncim_heading_pane_t1

0x2093,	// (0x000496d2) ncim_indicator_popup_pane

0x20a5,	// (0x000496e4) ncim_query_button_pane

0x20b9,	// (0x000496f8) ncim_query_content_pane_t1

0x20cb,	// (0x0004970a) ncim_query_content_pane_t2

0x0005,

0xfb90,	// (0x000571cf) ncim_query_content_pane_t

0x2105,	// (0x00049744) ncim_query_list_pane

0x2117,	// (0x00049756) ncim_query_popup_pane

0x2093,	// (0x000496d2) ncim_indicator_popup_pane_ParamLimits

0xad8e,	// (0x000523cd) ncim_query_content_pane_g1_ParamLimits

0xad8e,	// (0x000523cd) ncim_query_content_pane_g1

0x20b9,	// (0x000496f8) ncim_query_content_pane_t1_ParamLimits

0x20cb,	// (0x0004970a) ncim_query_content_pane_t2_ParamLimits

0xad9a,	// (0x000523d9) ncim_query_content_pane_t3_ParamLimits

0xad9a,	// (0x000523d9) ncim_query_content_pane_t3

0xadb7,	// (0x000523f6) ncim_query_content_pane_t4_ParamLimits

0xadb7,	// (0x000523f6) ncim_query_content_pane_t4

0xadd4,	// (0x00052413) ncim_query_content_pane_t5_ParamLimits

0xadd4,	// (0x00052413) ncim_query_content_pane_t5

0x20dd,	// (0x0004971c) ncim_query_content_pane_t6_ParamLimits

0x20dd,	// (0x0004971c) ncim_query_content_pane_t6

0xfb90,	// (0x000571cf) ncim_query_content_pane_t_ParamLimits

0x2105,	// (0x00049744) ncim_query_list_pane_ParamLimits

0x2117,	// (0x00049756) ncim_query_popup_pane_ParamLimits

0x212b,	// (0x0004976a) wait_bar_pane_cp04

0x45ec,	// (0x0004bc2b) input_focus_pane_cp011

0x2133,	// (0x00049772) ncim_query_popup_pane_t1

0x2141,	// (0x00049780) ncim_list_query_list_pane_ParamLimits

0x2141,	// (0x00049780) ncim_list_query_list_pane

0x45ec,	// (0x0004bc2b) bg_button_pane_cp027

0x214e,	// (0x0004978d) ncim_query_button_pane_g1

0x45ec,	// (0x0004bc2b) list_highlight_pane_cp012

0x2158,	// (0x00049797) ncim_list_query_list_pane_g1

0x2160,	// (0x0004979f) ncim_list_query_list_pane_t1

0x9363,	// (0x000509a2) cam4_indicators_pane_g3_ParamLimits

0x9363,	// (0x000509a2) cam4_indicators_pane_g3

0x9465,	// (0x00050aa4) vid4_indicators_pane_g5_ParamLimits

0x9465,	// (0x00050aa4) vid4_indicators_pane_g5

0xa483,	// (0x00051ac2) vid4_progress_pane_g5_ParamLimits

0xa483,	// (0x00051ac2) vid4_progress_pane_g5

0xac7a,	// (0x000522b9) main_ncimui_pane_g1

0xace2,	// (0x00052321) ncimui_group_query_pane_ParamLimits

0xace2,	// (0x00052321) ncimui_group_query_pane

0xad2a,	// (0x00052369) ncimui_list_pane_ParamLimits

0xad2a,	// (0x00052369) ncimui_list_pane

0xad51,	// (0x00052390) ncimui_text_pane_ParamLimits

0xad51,	// (0x00052390) ncimui_text_pane

0xadf1,	// (0x00052430) ncimui_text_pane_t1_ParamLimits

0xadf1,	// (0x00052430) ncimui_text_pane_t1

0x216e,	// (0x000497ad) ncimui_list_single_graphic_pane_ParamLimits

0x216e,	// (0x000497ad) ncimui_list_single_graphic_pane

0xae10,	// (0x0005244f) ncimui_query_pane_ParamLimits

0xae10,	// (0x0005244f) ncimui_query_pane

0x45ec,	// (0x0004bc2b) list_highlight_pane_cp013

0x217e,	// (0x000497bd) ncim_list_query_list_pane_t1_copy1

0x218c,	// (0x000497cb) ncim_list_single_graphic_pane_g1

0xae23,	// (0x00052462) ncim_query_button_pane_cp01

0xae2f,	// (0x0005246e) ncim_query_entry_pane_ParamLimits

0xae2f,	// (0x0005246e) ncim_query_entry_pane

0xae42,	// (0x00052481) ncimui_query_pane_g1

0xae4e,	// (0x0005248d) ncimui_query_pane_t1_ParamLimits

0xae4e,	// (0x0005248d) ncimui_query_pane_t1

0xcd5c,	// (0x0005439b) input_focus_pane_cp012

0x2194,	// (0x000497d3) ncim_query_entry_pane_t1

0xce27,	// (0x00054466) main_im_pane_ParamLimits

0x7a09,	// (0x0004f048) main_mobtv_pane_ParamLimits

0x7a09,	// (0x0004f048) main_mobtv_pane

0xaad1,	// (0x00052110) main_cset6_slider_pane_g18_ParamLimits

0xaad1,	// (0x00052110) main_cset6_slider_pane_g18

0x1f3d,	// (0x0004957c) main_cset6_slider_pane_g19_ParamLimits

0x1f3d,	// (0x0004957c) main_cset6_slider_pane_g19

0xf029,	// (0x00056668) bg_main_mobtv_pane_ParamLimits

0xf029,	// (0x00056668) bg_main_mobtv_pane

0xae67,	// (0x000524a6) main_mobtv_info_pane

0xae72,	// (0x000524b1) main_mobtv_loading_pane_ParamLimits

0xae72,	// (0x000524b1) main_mobtv_loading_pane

0x21a6,	// (0x000497e5) main_mobtv_pg_channel_list_pane

0x21b0,	// (0x000497ef) main_mobtv_pg_hdr_pane

0xae7f,	// (0x000524be) main_mobtv_programe_curr_pane_ParamLimits

0xae7f,	// (0x000524be) main_mobtv_programe_curr_pane

0xae8c,	// (0x000524cb) main_mobtv_programe_next_pane_ParamLimits

0xae8c,	// (0x000524cb) main_mobtv_programe_next_pane

0x21b9,	// (0x000497f8) popup_mobtv_noti_window

0xd00f,	// (0x0005464e) main_tv_pg_hdr_pane_g1

0x21c1,	// (0x00049800) main_tv_pg_hdr_pane_g2

0x21c9,	// (0x00049808) main_tv_pg_hdr_pane_g3

0x21d1,	// (0x00049810) main_tv_pg_hdr_pane_g4

0x21d9,	// (0x00049818) main_tv_pg_hdr_pane_g5

0x21e3,	// (0x00049822) main_tv_pg_hdr_pane_g6

0x21ed,	// (0x0004982c) main_tv_pg_hdr_pane_g7

0x21f7,	// (0x00049836) main_tv_pg_hdr_pane_g8

0x2201,	// (0x00049840) main_tv_pg_hdr_pane_g9

0x220b,	// (0x0004984a) main_tv_pg_hdr_pane_g10

0x2215,	// (0x00049854) main_tv_pg_hdr_pane_g11

0x000a,

0xfb9d,	// (0x000571dc) main_tv_pg_hdr_pane_g

0x221f,	// (0x0004985e) main_tv_pg_hdr_pane_t1

0x222d,	// (0x0004986c) main_tv_pg_hdr_pane_t2

0x223b,	// (0x0004987a) main_tv_pg_hdr_pane_t3

0x224b,	// (0x0004988a) main_tv_pg_hdr_pane_t4

0x225b,	// (0x0004989a) main_tv_pg_hdr_pane_t5

0x0004,

0xfbb4,	// (0x000571f3) main_tv_pg_hdr_pane_t

0x226b,	// (0x000498aa) single_mobtv_pg_channel_pane_ParamLimits

0x226b,	// (0x000498aa) single_mobtv_pg_channel_pane

0x227d,	// (0x000498bc) single_mobtv_pg_channel_table_pane

0xd337,	// (0x00054976) single_mobtv_pg_channel_thumb_pane

0x2286,	// (0x000498c5) single_tv_pg_channel_pane_g1

0x228f,	// (0x000498ce) single_tv_pg_channel_pane_g2

0x0001,

0xfbbf,	// (0x000571fe) single_tv_pg_channel_pane_g

0xcdb5,	// (0x000543f4) bg_single_mobtv_pg_channel_thumb_pane_ParamLimits

0xcdb5,	// (0x000543f4) bg_single_mobtv_pg_channel_thumb_pane

0x2298,	// (0x000498d7) single_mobtv_pg_channel_thumb_pane_g1_ParamLimits

0x2298,	// (0x000498d7) single_mobtv_pg_channel_thumb_pane_g1

0x22a6,	// (0x000498e5) single_mobtv_pg_channel_thumb_pane_g2_ParamLimits

0x22a6,	// (0x000498e5) single_mobtv_pg_channel_thumb_pane_g2

0x22b2,	// (0x000498f1) single_mobtv_pg_channel_thumb_pane_g3_ParamLimits

0x22b2,	// (0x000498f1) single_mobtv_pg_channel_thumb_pane_g3

0x0002,

0xfbc4,	// (0x00057203) single_mobtv_pg_channel_thumb_pane_g_ParamLimits

0xfbc4,	// (0x00057203) single_mobtv_pg_channel_thumb_pane_g

0x22be,	// (0x000498fd) single_mobtv_pg_channel_thumb_pane_t1

0x22cc,	// (0x0004990b) single_mobtv_pg_channel_thumb_pane_t2

0x0001,

0xfbcb,	// (0x0005720a) single_mobtv_pg_channel_thumb_pane_t

0xd00f,	// (0x0005464e) bg_single_mobtv_pg_channel_table_pane_g1

0xd00f,	// (0x0005464e) bg_single_mobtv_pg_channel_table_pane_g2

0x0001,

0xf3dd,	// (0x00056a1c) bg_single_mobtv_pg_channel_table_pane_g

0x22da,	// (0x00049919) single_mobtv_pg_channel_table_pane_t1

0x22e8,	// (0x00049927) single_mobtv_pg_channel_table_pane_t2

0x0001,

0xfbd0,	// (0x0005720f) single_mobtv_pg_channel_table_pane_t

0xaea1,	// (0x000524e0) main_mobtv_info_pane_g1_ParamLimits

0xaea1,	// (0x000524e0) main_mobtv_info_pane_g1

0xaebd,	// (0x000524fc) main_mobtv_info_pane_t1_ParamLimits

0xaebd,	// (0x000524fc) main_mobtv_info_pane_t1

0xaf35,	// (0x00052574) main_mobtv_info_pane_t2_ParamLimits

0xaf35,	// (0x00052574) main_mobtv_info_pane_t2

0x0002,

0xfbda,	// (0x00057219) main_mobtv_info_pane_t_ParamLimits

0xfbda,	// (0x00057219) main_mobtv_info_pane_t

0xafc4,	// (0x00052603) wait_bar_pane_cp05

0xafd6,	// (0x00052615) main_mobtv_loading_pane_g1_ParamLimits

0xafd6,	// (0x00052615) main_mobtv_loading_pane_g1

0xafe4,	// (0x00052623) main_mobtv_loading_pane_g2_ParamLimits

0xafe4,	// (0x00052623) main_mobtv_loading_pane_g2

0xaff0,	// (0x0005262f) main_mobtv_loading_pane_g3_ParamLimits

0xaff0,	// (0x0005262f) main_mobtv_loading_pane_g3

0x0002,

0xfbe1,	// (0x00057220) main_mobtv_loading_pane_g_ParamLimits

0xfbe1,	// (0x00057220) main_mobtv_loading_pane_g

0x22f6,	// (0x00049935) main_mobtv_loading_pane_t1_ParamLimits

0x22f6,	// (0x00049935) main_mobtv_loading_pane_t1

0x230e,	// (0x0004994d) main_mobtv_loading_pane_t2_ParamLimits

0x230e,	// (0x0004994d) main_mobtv_loading_pane_t2

0x0001,

0xfbe8,	// (0x00057227) main_mobtv_loading_pane_t_ParamLimits

0xfbe8,	// (0x00057227) main_mobtv_loading_pane_t

0xaffe,	// (0x0005263d) wait_bar_pane_cp06_ParamLimits

0xaffe,	// (0x0005263d) wait_bar_pane_cp06

0x2332,	// (0x00049971) main_mobtv_programe_curr_pane_t1

0x2340,	// (0x0004997f) main_mobtv_programe_curr_pane_t2

0x0001,

0xfbed,	// (0x0005722c) main_mobtv_programe_curr_pane_t

0x234e,	// (0x0004998d) main_mobtv_programe_next_pane_t1

0x235c,	// (0x0004999b) main_mobtv_programe_next_pane_t2

0x236a,	// (0x000499a9) main_mobtv_programe_next_pane_t3

0x0002,

0xfbf2,	// (0x00057231) main_mobtv_programe_next_pane_t

0x45ec,	// (0x0004bc2b) bg_popup_mobtv_noti_window_pane

0x2378,	// (0x000499b7) popup_mobtv_noti_window_g1

0x2380,	// (0x000499bf) popup_mobtv_noti_window_t1

0x238e,	// (0x000499cd) popup_mobtv_noti_window_t2

0x0001,

0xfbf9,	// (0x00057238) popup_mobtv_noti_window_t

0xd00f,	// (0x0005464e) bg_popup_mobtv_noti_window_pane_g1

0x48c0,	// (0x0004beff) sc_clock_pane

0x48c0,	// (0x0004beff) main_fs_bigclock_pane

0xa65c,	// (0x00051c9b) blid2_tripm_pane_t4_ParamLimits

0xa65c,	// (0x00051c9b) blid2_tripm_pane_t4

0xb00a,	// (0x00052649) sc_clock_pane_g1_ParamLimits

0xb00a,	// (0x00052649) sc_clock_pane_g1

0xb018,	// (0x00052657) sc_clock_pane_t1_ParamLimits

0xb018,	// (0x00052657) sc_clock_pane_t1

0xb02b,	// (0x0005266a) sc_clock_pane_t2_ParamLimits

0xb02b,	// (0x0005266a) sc_clock_pane_t2

0xb03d,	// (0x0005267c) sc_clock_pane_t3_ParamLimits

0xb03d,	// (0x0005267c) sc_clock_pane_t3

0x0004,

0xfbfe,	// (0x0005723d) sc_clock_pane_t_ParamLimits

0xfbfe,	// (0x0005723d) sc_clock_pane_t

0xbc4e,	// (0x0005328d) main_fs_bigclock_indicator_pane_ParamLimits

0xbc4e,	// (0x0005328d) main_fs_bigclock_indicator_pane

0xb0c0,	// (0x000526ff) main_fs_bigclock_pane_g1_ParamLimits

0xb0c0,	// (0x000526ff) main_fs_bigclock_pane_g1

0xbc5a,	// (0x00053299) main_fs_bigclock_pane_t1_ParamLimits

0xbc5a,	// (0x00053299) main_fs_bigclock_pane_t1

0xbc6c,	// (0x000532ab) main_fs_bigclock_pane_t2_ParamLimits

0xbc6c,	// (0x000532ab) main_fs_bigclock_pane_t2

0xbc80,	// (0x000532bf) main_fs_bigclock_pane_t3_ParamLimits

0xbc80,	// (0x000532bf) main_fs_bigclock_pane_t3

0x0002,

0xfd8f,	// (0x000573ce) main_fs_bigclock_pane_t_ParamLimits

0xfd8f,	// (0x000573ce) main_fs_bigclock_pane_t

0x2f10,	// (0x0004a54f) main_fs_bigclock_indicator_pane_g1

0x20ad,	// (0x000496ec) ncim_query_content_pane_g2_ParamLimits

0x20ad,	// (0x000496ec) ncim_query_content_pane_g2

0x0001,

0xfb8b,	// (0x000571ca) ncim_query_content_pane_g_ParamLimits

0xfb8b,	// (0x000571ca) ncim_query_content_pane_g

0xb051,	// (0x00052690) sc_clock_pane_t4_ParamLimits

0xb051,	// (0x00052690) sc_clock_pane_t4

0x7a09,	// (0x0004f048) main_radioblah_pane

0x9209,	// (0x00050848) cell_call4_button_pane_t1_copy1_ParamLimits

0x9209,	// (0x00050848) cell_call4_button_pane_t1_copy1

0xac94,	// (0x000522d3) main_ncimui_pane_t1_ParamLimits

0xac94,	// (0x000522d3) main_ncimui_pane_t1

0xacae,	// (0x000522ed) main_ncimui_pane_t2_ParamLimits

0xacae,	// (0x000522ed) main_ncimui_pane_t2

0x0002,

0xfb84,	// (0x000571c3) main_ncimui_pane_t_ParamLimits

0xfb84,	// (0x000571c3) main_ncimui_pane_t

0x24d4,	// (0x00049b13) main_radioblah_anim_pane_ParamLimits

0x24d4,	// (0x00049b13) main_radioblah_anim_pane

0x24e5,	// (0x00049b24) main_radioblah_info_pane_ParamLimits

0x24e5,	// (0x00049b24) main_radioblah_info_pane

0x24f9,	// (0x00049b38) main_radioblah_pane_t1_ParamLimits

0x24f9,	// (0x00049b38) main_radioblah_pane_t1

0x2515,	// (0x00049b54) main_radioblah_pane_t2_ParamLimits

0x2515,	// (0x00049b54) main_radioblah_pane_t2

0x0003,

0xfc1f,	// (0x0005725e) main_radioblah_pane_t_ParamLimits

0xfc1f,	// (0x0005725e) main_radioblah_pane_t

0xb116,	// (0x00052755) main_radioblah_rocker_ctrl_pane_ParamLimits

0xb116,	// (0x00052755) main_radioblah_rocker_ctrl_pane

0x255d,	// (0x00049b9c) main_radioblah_info_pane_t1_ParamLimits

0x255d,	// (0x00049b9c) main_radioblah_info_pane_t1

0xb15b,	// (0x0005279a) main_radioblah_info_pane_t2_ParamLimits

0xb15b,	// (0x0005279a) main_radioblah_info_pane_t2

0x0003,

0xfc28,	// (0x00057267) main_radioblah_info_pane_t_ParamLimits

0xfc28,	// (0x00057267) main_radioblah_info_pane_t

0xd00f,	// (0x0005464e) main_radioblah_rocker_ctrl_pane_g1

0xb20b,	// (0x0005284a) main_radioblah_rocker_ctrl_pane_g2

0xb213,	// (0x00052852) main_radioblah_rocker_ctrl_pane_g3

0xb21b,	// (0x0005285a) main_radioblah_rocker_ctrl_pane_g4

0xb223,	// (0x00052862) main_radioblah_rocker_ctrl_pane_g5

0xb22b,	// (0x0005286a) main_radioblah_rocker_ctrl_pane_g6

0x0005,

0xfc31,	// (0x00057270) main_radioblah_rocker_ctrl_pane_g

0xac3a,	// (0x00052279) main_cset_text2_pane_t1_copy1_ParamLimits

0x9294,	// (0x000508d3) cam4_image_uncrop_qvga_pane

0x93d5,	// (0x00050a14) vid4_image_uncrop_qcif_pane

0xa7ea,	// (0x00051e29) cam6_image_uncrop_qvga_pane_ParamLimits

0xa7ea,	// (0x00051e29) cam6_image_uncrop_qvga_pane

0x1d9f,	// (0x000493de) vid6_image_uncrop_qcif_pane_ParamLimits

0x1d9f,	// (0x000493de) vid6_image_uncrop_qcif_pane

0x45ec,	// (0x0004bc2b) bg_popup_preview_window_pane_cp03

0x205f,	// (0x0004969e) list_cset_text2_pane

0x2067,	// (0x000496a6) main_cset6_text2_pane_g1

0x206f,	// (0x000496ae) main_cset6_text2_pane_t1

0xb233,	// (0x00052872) list_cset_text2_pane_t1_ParamLimits

0xb233,	// (0x00052872) list_cset_text2_pane_t1

0x7a09,	// (0x0004f048) main_radioblah_pane_ParamLimits

0xafb0,	// (0x000525ef) main_mobtv_info_pane_t3_ParamLimits

0xafb0,	// (0x000525ef) main_mobtv_info_pane_t3

0xb104,	// (0x00052743) main_radioblah_pane_g1

0xb12f,	// (0x0005276e) main_radioblah_info_pane_g1

0xb1b0,	// (0x000527ef) main_radioblah_info_pane_t3_ParamLimits

0xb1b0,	// (0x000527ef) main_radioblah_info_pane_t3

0x6a15,	// (0x0004e054) highlight_cell_cale_month_pane_ParamLimits

0x6a15,	// (0x0004e054) highlight_cell_cale_month_pane

0x48c0,	// (0x0004beff) main_phob_fisheye_pane

0x0f87,	// (0x000485c6) scroll_pane_cp0031_ParamLimits

0x0f87,	// (0x000485c6) scroll_pane_cp0031

0x1ead,	// (0x000494ec) wait_bar_pane_cp08_ParamLimits

0xa9fd,	// (0x0005203c) cset_list_set_pane_copy1_ParamLimits

0x2597,	// (0x00049bd6) highlight_cell_cale_month_pane_g1

0xb254,	// (0x00052893) highlight_cell_cale_month_pane_t1

0x1b10,	// (0x0004914f) list_gen_pane_cp01

0x16bb,	// (0x00048cfa) scroll_pane_01

0xb262,	// (0x000528a1) list_single_double_fisheye_pane

0xb26b,	// (0x000528aa) list_double_fisheye_pane_g1_ParamLimits

0xb26b,	// (0x000528aa) list_double_fisheye_pane_g1

0xb277,	// (0x000528b6) list_double_fisheye_pane_g2_ParamLimits

0xb277,	// (0x000528b6) list_double_fisheye_pane_g2

0xb28b,	// (0x000528ca) list_double_fisheye_pane_g3_ParamLimits

0xb28b,	// (0x000528ca) list_double_fisheye_pane_g3

0x0004,

0xfc3e,	// (0x0005727d) list_double_fisheye_pane_g_ParamLimits

0xfc3e,	// (0x0005727d) list_double_fisheye_pane_g

0xb2b4,	// (0x000528f3) list_double_fisheye_pane_t1_ParamLimits

0xb2b4,	// (0x000528f3) list_double_fisheye_pane_t1

0xb2cf,	// (0x0005290e) list_double_fisheye_pane_t2_ParamLimits

0xb2cf,	// (0x0005290e) list_double_fisheye_pane_t2

0x0001,

0xfc49,	// (0x00057288) list_double_fisheye_pane_t_ParamLimits

0xfc49,	// (0x00057288) list_double_fisheye_pane_t

0x48c0,	// (0x0004beff) main_call5_pane

0xb077,	// (0x000526b6) sc_swipe_pane_ParamLimits

0xb077,	// (0x000526b6) sc_swipe_pane

0xb2fd,	// (0x0005293c) call5_image_pane_ParamLimits

0xb2fd,	// (0x0005293c) call5_image_pane

0xb30d,	// (0x0005294c) call5_swipe_1_pane_ParamLimits

0xb30d,	// (0x0005294c) call5_swipe_1_pane

0xb319,	// (0x00052958) call5_swipe_2_pane_ParamLimits

0xb319,	// (0x00052958) call5_swipe_2_pane

0xb333,	// (0x00052972) popup_call5_audio_first_window_ParamLimits

0xb333,	// (0x00052972) popup_call5_audio_first_window

0xcdb5,	// (0x000543f4) call5_swipe_1_pane_g1_ParamLimits

0xcdb5,	// (0x000543f4) call5_swipe_1_pane_g1

0x259f,	// (0x00049bde) call5_swipe_1_pane_g2_ParamLimits

0x259f,	// (0x00049bde) call5_swipe_1_pane_g2

0x0001,

0xfc4e,	// (0x0005728d) call5_swipe_1_pane_g_ParamLimits

0xfc4e,	// (0x0005728d) call5_swipe_1_pane_g

0x25ab,	// (0x00049bea) call5_swipe_1_pane_t1_ParamLimits

0x25ab,	// (0x00049bea) call5_swipe_1_pane_t1

0xcdb5,	// (0x000543f4) call5_swipe_2_pane_g1_ParamLimits

0xcdb5,	// (0x000543f4) call5_swipe_2_pane_g1

0x25c0,	// (0x00049bff) call5_swipe_2_pane_g2_ParamLimits

0x25c0,	// (0x00049bff) call5_swipe_2_pane_g2

0x0001,

0xfc53,	// (0x00057292) call5_swipe_2_pane_g_ParamLimits

0xfc53,	// (0x00057292) call5_swipe_2_pane_g

0x25cc,	// (0x00049c0b) call5_swipe_2_pane_t1_ParamLimits

0x25cc,	// (0x00049c0b) call5_swipe_2_pane_t1

0x25e1,	// (0x00049c20) sc_swipe_pane_g1_ParamLimits

0x25e1,	// (0x00049c20) sc_swipe_pane_g1

0x25ee,	// (0x00049c2d) sc_swipe_pane_g2_ParamLimits

0x25ee,	// (0x00049c2d) sc_swipe_pane_g2

0x0001,

0xfc58,	// (0x00057297) sc_swipe_pane_g_ParamLimits

0xfc58,	// (0x00057297) sc_swipe_pane_g

0x25fa,	// (0x00049c39) sc_swipe_pane_t1_ParamLimits

0x25fa,	// (0x00049c39) sc_swipe_pane_t1

0x48c0,	// (0x0004beff) main_cmail_launcher_pane

0xb341,	// (0x00052980) aid_size_cell_cmail_l_ParamLimits

0xb341,	// (0x00052980) aid_size_cell_cmail_l

0xb34f,	// (0x0005298e) grid_cmail_l_pane_ParamLimits

0xb34f,	// (0x0005298e) grid_cmail_l_pane

0xb35f,	// (0x0005299e) cell_cmail_l_pane_ParamLimits

0xb35f,	// (0x0005299e) cell_cmail_l_pane

0x260f,	// (0x00049c4e) cell_cmail_l_pane_g1_ParamLimits

0x260f,	// (0x00049c4e) cell_cmail_l_pane_g1

0x261b,	// (0x00049c5a) cell_cmail_l_pane_t1_ParamLimits

0x261b,	// (0x00049c5a) cell_cmail_l_pane_t1

0x2631,	// (0x00049c70) cell_cmail_l_pane_t2_ParamLimits

0x2631,	// (0x00049c70) cell_cmail_l_pane_t2

0x0001,

0xfc5d,	// (0x0005729c) cell_cmail_l_pane_t_ParamLimits

0xfc5d,	// (0x0005729c) cell_cmail_l_pane_t

0xcd5c,	// (0x0005439b) grid_highlight_pane_cp018_ParamLimits

0xcd5c,	// (0x0005439b) grid_highlight_pane_cp018

0x4716,	// (0x0004bd55) main2_pane_ParamLimits

0x4716,	// (0x0004bd55) main2_pane

0xceb6,	// (0x000544f5) popup_sp_fs_action_menu_bg_pane_g1

0xcebe,	// (0x000544fd) popup_sp_fs_action_menu_bg_pane_g2

0xcec6,	// (0x00054505) popup_sp_fs_action_menu_bg_pane_g3

0xcece,	// (0x0005450d) popup_sp_fs_action_menu_bg_pane_g4

0xced6,	// (0x00054515) popup_sp_fs_action_menu_bg_pane_g5

0xcede,	// (0x0005451d) popup_sp_fs_action_menu_bg_pane_g6

0xcee6,	// (0x00054525) popup_sp_fs_action_menu_bg_pane_g7

0xceee,	// (0x0005452d) popup_sp_fs_action_menu_bg_pane_g8

0xcef6,	// (0x00054535) popup_sp_fs_action_menu_bg_pane_g9

0xcefe,	// (0x0005453d) popup_sp_fs_action_menu_bg_pane_g10

0xcefe,	// (0x0005453d) popup_sp_fs_action_menu_bg_pane_g11

0x000a,

0xf145,	// (0x00056784) popup_sp_fs_action_menu_bg_pane_g

0xcdb5,	// (0x000543f4) list_medium_line_x2_t3_g3_g1_ParamLimits

0xcdb5,	// (0x000543f4) list_medium_line_x2_t3_g3_g1

0xcdb5,	// (0x000543f4) list_medium_line_x2_t3_g3_g2_ParamLimits

0xcdb5,	// (0x000543f4) list_medium_line_x2_t3_g3_g2

0xcdb5,	// (0x000543f4) list_medium_line_x2_t3_g3_g3_ParamLimits

0xcdb5,	// (0x000543f4) list_medium_line_x2_t3_g3_g3

0x0002,

0xf1f3,	// (0x00056832) list_medium_line_x2_t3_g3_g_ParamLimits

0xf1f3,	// (0x00056832) list_medium_line_x2_t3_g3_g

0xd029,	// (0x00054668) list_medium_line_x2_t3_g3_t1_ParamLimits

0xd029,	// (0x00054668) list_medium_line_x2_t3_g3_t1

0xd029,	// (0x00054668) list_medium_line_x2_t3_g3_t2_ParamLimits

0xd029,	// (0x00054668) list_medium_line_x2_t3_g3_t2

0xd029,	// (0x00054668) list_medium_line_x2_t3_g3_t3_ParamLimits

0xd029,	// (0x00054668) list_medium_line_x2_t3_g3_t3

0x0002,

0xf1fa,	// (0x00056839) list_medium_line_x2_t3_g3_t_ParamLimits

0xf1fa,	// (0x00056839) list_medium_line_x2_t3_g3_t

0xcdb5,	// (0x000543f4) list_medium_line_x2_t3_g2_g1_ParamLimits

0xcdb5,	// (0x000543f4) list_medium_line_x2_t3_g2_g1

0xcdb5,	// (0x000543f4) list_medium_line_x2_t3_g2_g2_ParamLimits

0xcdb5,	// (0x000543f4) list_medium_line_x2_t3_g2_g2

0x0001,

0xf201,	// (0x00056840) list_medium_line_x2_t3_g2_g_ParamLimits

0xf201,	// (0x00056840) list_medium_line_x2_t3_g2_g

0xd029,	// (0x00054668) list_medium_line_x2_t3_g2_t1_ParamLimits

0xd029,	// (0x00054668) list_medium_line_x2_t3_g2_t1

0xd029,	// (0x00054668) list_medium_line_x2_t3_g2_t2_ParamLimits

0xd029,	// (0x00054668) list_medium_line_x2_t3_g2_t2

0xd029,	// (0x00054668) list_medium_line_x2_t3_g2_t3_ParamLimits

0xd029,	// (0x00054668) list_medium_line_x2_t3_g2_t3

0x0002,

0xf1fa,	// (0x00056839) list_medium_line_x2_t3_g2_t_ParamLimits

0xf1fa,	// (0x00056839) list_medium_line_x2_t3_g2_t

0xcdb5,	// (0x000543f4) list_medium_line_x2_t4_g4_g1_ParamLimits

0xcdb5,	// (0x000543f4) list_medium_line_x2_t4_g4_g1

0xcdb5,	// (0x000543f4) list_medium_line_x2_t4_g4_g2_ParamLimits

0xcdb5,	// (0x000543f4) list_medium_line_x2_t4_g4_g2

0xcdb5,	// (0x000543f4) list_medium_line_x2_t4_g4_g3_ParamLimits

0xcdb5,	// (0x000543f4) list_medium_line_x2_t4_g4_g3

0xcdb5,	// (0x000543f4) list_medium_line_x2_t4_g4_g4_ParamLimits

0xcdb5,	// (0x000543f4) list_medium_line_x2_t4_g4_g4

0x0003,

0xf206,	// (0x00056845) list_medium_line_x2_t4_g4_g_ParamLimits

0xf206,	// (0x00056845) list_medium_line_x2_t4_g4_g

0xd029,	// (0x00054668) list_medium_line_x2_t4_g4_t1_ParamLimits

0xd029,	// (0x00054668) list_medium_line_x2_t4_g4_t1

0xd029,	// (0x00054668) list_medium_line_x2_t4_g4_t2_ParamLimits

0xd029,	// (0x00054668) list_medium_line_x2_t4_g4_t2

0xd029,	// (0x00054668) list_medium_line_x2_t4_g4_t3_ParamLimits

0xd029,	// (0x00054668) list_medium_line_x2_t4_g4_t3

0xd029,	// (0x00054668) list_medium_line_x2_t4_g4_t4_ParamLimits

0xd029,	// (0x00054668) list_medium_line_x2_t4_g4_t4

0x0003,

0xf20f,	// (0x0005684e) list_medium_line_x2_t4_g4_t_ParamLimits

0xf20f,	// (0x0005684e) list_medium_line_x2_t4_g4_t

0xcdb5,	// (0x000543f4) list_medium_line_x2_t2_g4_g1_ParamLimits

0xcdb5,	// (0x000543f4) list_medium_line_x2_t2_g4_g1

0xcdb5,	// (0x000543f4) list_medium_line_x2_t2_g4_g2_ParamLimits

0xcdb5,	// (0x000543f4) list_medium_line_x2_t2_g4_g2

0xcdb5,	// (0x000543f4) list_medium_line_x2_t2_g4_g3_ParamLimits

0xcdb5,	// (0x000543f4) list_medium_line_x2_t2_g4_g3

0xcdb5,	// (0x000543f4) list_medium_line_x2_t2_g4_g4_ParamLimits

0xcdb5,	// (0x000543f4) list_medium_line_x2_t2_g4_g4

0x0003,

0xf206,	// (0x00056845) list_medium_line_x2_t2_g4_g_ParamLimits

0xf206,	// (0x00056845) list_medium_line_x2_t2_g4_g

0xd029,	// (0x00054668) list_medium_line_x2_t2_g4_t1_ParamLimits

0xd029,	// (0x00054668) list_medium_line_x2_t2_g4_t1

0xd029,	// (0x00054668) list_medium_line_x2_t2_g4_t2_ParamLimits

0xd029,	// (0x00054668) list_medium_line_x2_t2_g4_t2

0x0001,

0xf276,	// (0x000568b5) list_medium_line_x2_t2_g4_t_ParamLimits

0xf276,	// (0x000568b5) list_medium_line_x2_t2_g4_t

0xcdb5,	// (0x000543f4) list_medium_line_x2_t2_g3_g1_ParamLimits

0xcdb5,	// (0x000543f4) list_medium_line_x2_t2_g3_g1

0xcdb5,	// (0x000543f4) list_medium_line_x2_t2_g3_g2_ParamLimits

0xcdb5,	// (0x000543f4) list_medium_line_x2_t2_g3_g2

0xcdb5,	// (0x000543f4) list_medium_line_x2_t2_g3_g3_ParamLimits

0xcdb5,	// (0x000543f4) list_medium_line_x2_t2_g3_g3

0x0002,

0xf1f3,	// (0x00056832) list_medium_line_x2_t2_g3_g_ParamLimits

0xf1f3,	// (0x00056832) list_medium_line_x2_t2_g3_g

0xd029,	// (0x00054668) list_medium_line_x2_t2_g3_t1_ParamLimits

0xd029,	// (0x00054668) list_medium_line_x2_t2_g3_t1

0xd029,	// (0x00054668) list_medium_line_x2_t2_g3_t2_ParamLimits

0xd029,	// (0x00054668) list_medium_line_x2_t2_g3_t2

0x0001,

0xf276,	// (0x000568b5) list_medium_line_x2_t2_g3_t_ParamLimits

0xf276,	// (0x000568b5) list_medium_line_x2_t2_g3_t

0x6c0f,	// (0x0004e24e) main_sp_fs_list_pane_ParamLimits

0x6c0f,	// (0x0004e24e) main_sp_fs_list_pane

0x6c1b,	// (0x0004e25a) sp_fs_scroll_pane_ParamLimits

0x6c1b,	// (0x0004e25a) sp_fs_scroll_pane

0xd54a,	// (0x00054b89) list_medium_line_x2_t3_t1

0xd54a,	// (0x00054b89) list_medium_line_x2_t3_t2

0xd54a,	// (0x00054b89) list_medium_line_x2_t3_t3

0x0002,

0xf2c1,	// (0x00056900) list_medium_line_x2_t3_t

0xd54a,	// (0x00054b89) list_medium_line_x3_t4_t1

0xd54a,	// (0x00054b89) list_medium_line_x3_t4_t2

0xd54a,	// (0x00054b89) list_medium_line_x3_t4_t3

0xd54a,	// (0x00054b89) list_medium_line_x3_t4_t4

0x0003,

0xf2c8,	// (0x00056907) list_medium_line_x3_t4_t

0xd54a,	// (0x00054b89) list_medium_line_x4_t5_t1

0xd54a,	// (0x00054b89) list_medium_line_x4_t5_t2

0xd54a,	// (0x00054b89) list_medium_line_x4_t5_t3

0xd54a,	// (0x00054b89) list_medium_line_x4_t5_t4

0xd54a,	// (0x00054b89) list_medium_line_x4_t5_t5

0x0004,

0xf2d1,	// (0x00056910) list_medium_line_x4_t5_t

0xcdb5,	// (0x000543f4) list_medium_line_t4_g4_g1_ParamLimits

0xcdb5,	// (0x000543f4) list_medium_line_t4_g4_g1

0xcdb5,	// (0x000543f4) list_medium_line_t4_g4_g2_ParamLimits

0xcdb5,	// (0x000543f4) list_medium_line_t4_g4_g2

0xcdb5,	// (0x000543f4) list_medium_line_t4_g4_g3_ParamLimits

0xcdb5,	// (0x000543f4) list_medium_line_t4_g4_g3

0xcdb5,	// (0x000543f4) list_medium_line_t4_g4_g4_ParamLimits

0xcdb5,	// (0x000543f4) list_medium_line_t4_g4_g4

0x0003,

0xf206,	// (0x00056845) list_medium_line_t4_g4_g_ParamLimits

0xf206,	// (0x00056845) list_medium_line_t4_g4_g

0xd029,	// (0x00054668) list_medium_line_t4_g4_t1_ParamLimits

0xd029,	// (0x00054668) list_medium_line_t4_g4_t1

0xd029,	// (0x00054668) list_medium_line_t4_g4_t2_ParamLimits

0xd029,	// (0x00054668) list_medium_line_t4_g4_t2

0xd029,	// (0x00054668) list_medium_line_t4_g4_t3_ParamLimits

0xd029,	// (0x00054668) list_medium_line_t4_g4_t3

0xd029,	// (0x00054668) list_medium_line_t4_g4_t4_ParamLimits

0xd029,	// (0x00054668) list_medium_line_t4_g4_t4

0x0003,

0xf20f,	// (0x0005684e) list_medium_line_t4_g4_t_ParamLimits

0xf20f,	// (0x0005684e) list_medium_line_t4_g4_t

0x6d0e,	// (0x0004e34d) chi_dic_find_pane_g1

0x7a31,	// (0x0004f070) main_tport_pane

0xd54a,	// (0x00054b89) list_medium_line_plain_t1

0xcdb5,	// (0x000543f4) list_medium_line_t2_g2_g1_ParamLimits

0xcdb5,	// (0x000543f4) list_medium_line_t2_g2_g1

0xcdb5,	// (0x000543f4) list_medium_line_t2_g2_g2_ParamLimits

0xcdb5,	// (0x000543f4) list_medium_line_t2_g2_g2

0x0001,

0xf201,	// (0x00056840) list_medium_line_t2_g2_g_ParamLimits

0xf201,	// (0x00056840) list_medium_line_t2_g2_g

0xd029,	// (0x00054668) list_medium_line_t2_g2_t1_ParamLimits

0xd029,	// (0x00054668) list_medium_line_t2_g2_t1

0xd029,	// (0x00054668) list_medium_line_t2_g2_t2_ParamLimits

0xd029,	// (0x00054668) list_medium_line_t2_g2_t2

0x0001,

0xf276,	// (0x000568b5) list_medium_line_t2_g2_t_ParamLimits

0xf276,	// (0x000568b5) list_medium_line_t2_g2_t

0x1b19,	// (0x00049158) aid_sp_fs_list_icon_a_sm

0x1b21,	// (0x00049160) aid_sp_fs_list_icon_d

0x1b29,	// (0x00049168) aid_sp_fs_text_primary

0x1b32,	// (0x00049171) aid_sp_fs_text_secondary

0x45ec,	// (0x0004bc2b) list_medium_line

0x45ec,	// (0x0004bc2b) list_medium_line_g2

0x45ec,	// (0x0004bc2b) list_medium_line_g3

0x45ec,	// (0x0004bc2b) list_medium_line_plain

0x45ec,	// (0x0004bc2b) list_medium_line_plain_t2

0x45ec,	// (0x0004bc2b) list_medium_line_plain_t3

0x45ec,	// (0x0004bc2b) list_medium_line_right_icon

0x45ec,	// (0x0004bc2b) list_medium_line_right_iconx2

0x45ec,	// (0x0004bc2b) list_medium_line_t2

0x45ec,	// (0x0004bc2b) list_medium_line_t2_g2

0x45ec,	// (0x0004bc2b) list_medium_line_t2_g3

0x45ec,	// (0x0004bc2b) list_medium_line_t2_right_icon

0x45ec,	// (0x0004bc2b) list_medium_line_t2_right_iconx2

0x45ec,	// (0x0004bc2b) list_medium_line_t3

0x45ec,	// (0x0004bc2b) list_medium_line_t3_g2

0x45ec,	// (0x0004bc2b) list_medium_line_t3_g3

0x45ec,	// (0x0004bc2b) list_medium_line_t3_right_iconx2

0x45ec,	// (0x0004bc2b) list_medium_line_t4_g4

0x45ec,	// (0x0004bc2b) list_medium_line_x2

0x45ec,	// (0x0004bc2b) list_medium_line_x2_t2_g2

0x45ec,	// (0x0004bc2b) list_medium_line_x2_t2_g3

0x45ec,	// (0x0004bc2b) list_medium_line_x2_t2_g4

0x45ec,	// (0x0004bc2b) list_medium_line_x2_t3

0x45ec,	// (0x0004bc2b) list_medium_line_x2_t3_g2

0x45ec,	// (0x0004bc2b) list_medium_line_x2_t3_g3

0x45ec,	// (0x0004bc2b) list_medium_line_x2_t3_g4

0x45ec,	// (0x0004bc2b) list_medium_line_x2_t4_g2

0x45ec,	// (0x0004bc2b) list_medium_line_x2_t4_g4

0x45ec,	// (0x0004bc2b) list_medium_line_x3

0x45ec,	// (0x0004bc2b) list_medium_line_x3_t4

0x45ec,	// (0x0004bc2b) list_medium_line_x3_t4_g4

0x45ec,	// (0x0004bc2b) list_medium_line_x4_t4

0x45ec,	// (0x0004bc2b) list_medium_line_x4_t4_g7

0x45ec,	// (0x0004bc2b) list_medium_line_x4_t5

0xa4e1,	// (0x00051b20) list_single_fs_dyc_pane_ParamLimits

0xa4e1,	// (0x00051b20) list_single_fs_dyc_pane

0xcdb5,	// (0x000543f4) list_medium_line_x4_t4_g7_g1_ParamLimits

0xcdb5,	// (0x000543f4) list_medium_line_x4_t4_g7_g1

0xcdb5,	// (0x000543f4) list_medium_line_x4_t4_g7_g2_ParamLimits

0xcdb5,	// (0x000543f4) list_medium_line_x4_t4_g7_g2

0xcdb5,	// (0x000543f4) list_medium_line_x4_t4_g7_g3_ParamLimits

0xcdb5,	// (0x000543f4) list_medium_line_x4_t4_g7_g3

0xcdb5,	// (0x000543f4) list_medium_line_x4_t4_g7_g4_ParamLimits

0xcdb5,	// (0x000543f4) list_medium_line_x4_t4_g7_g4

0xcdb5,	// (0x000543f4) list_medium_line_x4_t4_g7_g5_ParamLimits

0xcdb5,	// (0x000543f4) list_medium_line_x4_t4_g7_g5

0xcdb5,	// (0x000543f4) list_medium_line_x4_t4_g7_g6_ParamLimits

0xcdb5,	// (0x000543f4) list_medium_line_x4_t4_g7_g6

0xcdc3,	// (0x00054402) list_medium_line_x4_t4_g7_g7_ParamLimits

0xcdc3,	// (0x00054402) list_medium_line_x4_t4_g7_g7

0x0006,

0xfb65,	// (0x000571a4) list_medium_line_x4_t4_g7_g_ParamLimits

0xfb65,	// (0x000571a4) list_medium_line_x4_t4_g7_g

0xd029,	// (0x00054668) list_medium_line_x4_t4_g7_t1_ParamLimits

0xd029,	// (0x00054668) list_medium_line_x4_t4_g7_t1

0xd029,	// (0x00054668) list_medium_line_x4_t4_g7_t2_ParamLimits

0xd029,	// (0x00054668) list_medium_line_x4_t4_g7_t2

0xd029,	// (0x00054668) list_medium_line_x4_t4_g7_t3_ParamLimits

0xd029,	// (0x00054668) list_medium_line_x4_t4_g7_t3

0xcfe1,	// (0x00054620) list_medium_line_x4_t4_g7_t4_ParamLimits

0xcfe1,	// (0x00054620) list_medium_line_x4_t4_g7_t4

0xcfe1,	// (0x00054620) list_medium_line_x4_t4_g7_t5_ParamLimits

0xcfe1,	// (0x00054620) list_medium_line_x4_t4_g7_t5

0x0004,

0xfb74,	// (0x000571b3) list_medium_line_x4_t4_g7_t_ParamLimits

0xfb74,	// (0x000571b3) list_medium_line_x4_t4_g7_t

0xac1d,	// (0x0005225c) list_single_dyc_row_pane_ParamLimits

0xac1d,	// (0x0005225c) list_single_dyc_row_pane

0xb2f1,	// (0x00052930) call5_gesture_pane_ParamLimits

0xb2f1,	// (0x00052930) call5_gesture_pane

0xb325,	// (0x00052964) call5_windows_pane_ParamLimits

0xb325,	// (0x00052964) call5_windows_pane

0xb378,	// (0x000529b7) call5_swipe_1_pane_cp_ParamLimits

0xb378,	// (0x000529b7) call5_swipe_1_pane_cp

0xb384,	// (0x000529c3) call5_swipe_2_pane_cp_ParamLimits

0xb384,	// (0x000529c3) call5_swipe_2_pane_cp

0xcfd9,	// (0x00054618) call5_image_pane_cp

0xb390,	// (0x000529cf) popup_call5_audio_first_window_cp_ParamLimits

0xb390,	// (0x000529cf) popup_call5_audio_first_window_cp

0x25e1,	// (0x00049c20) call5_swipe_1_pane_g1_cp_ParamLimits

0x25e1,	// (0x00049c20) call5_swipe_1_pane_g1_cp

0x264e,	// (0x00049c8d) call5_swipe_1_pane_g2_cp

0x25fa,	// (0x00049c39) call5_swipe_1_pane_t1_cp_ParamLimits

0x25fa,	// (0x00049c39) call5_swipe_1_pane_t1_cp

0x25e1,	// (0x00049c20) call5_swipe_2_pane_g1_cp_ParamLimits

0x25e1,	// (0x00049c20) call5_swipe_2_pane_g1_cp

0x2656,	// (0x00049c95) call5_swipe_2_pane_g2_cp

0x265e,	// (0x00049c9d) call5_swipe_2_pane_t1_cp_ParamLimits

0x265e,	// (0x00049c9d) call5_swipe_2_pane_t1_cp

0xcd5c,	// (0x0005439b) main_sp_fs_email_pane

0x2673,	// (0x00049cb2) main_sp_fs_listscroll_pane_te

0xb39e,	// (0x000529dd) popup_sp_fs_action_menu_pane_ParamLimits

0xb39e,	// (0x000529dd) popup_sp_fs_action_menu_pane

0xd00f,	// (0x0005464e) bg_sp_fs_ctrlbar_pane_g1

0x267c,	// (0x00049cbb) bg_sp_fs_ctrlbar_ddmenu_pane_g1

0x2685,	// (0x00049cc4) bg_sp_fs_ctrlbar_ddmenu_pane_g2

0xed44,	// (0x00056383) bg_sp_fs_ctrlbar_ddmenu_pane_g3

0xd00f,	// (0x0005464e) bg_sp_fs_ctrlbar_ddmenu_pane_g4

0x0003,

0xfc62,	// (0x000572a1) bg_sp_fs_ctrlbar_ddmenu_pane_g

0xdad3,	// (0x00055112) bg_sp_fs_ctrlbar_ddmenu_pane_ParamLimits

0xdad3,	// (0x00055112) bg_sp_fs_ctrlbar_ddmenu_pane

0x268e,	// (0x00049ccd) main_sp_fs_ctrlbar_ddmenu_pane_g1_ParamLimits

0x268e,	// (0x00049ccd) main_sp_fs_ctrlbar_ddmenu_pane_g1

0x269a,	// (0x00049cd9) main_sp_fs_ctrlbar_ddmenu_pane_g2_ParamLimits

0x269a,	// (0x00049cd9) main_sp_fs_ctrlbar_ddmenu_pane_g2

0x0001,

0xfc6b,	// (0x000572aa) main_sp_fs_ctrlbar_ddmenu_pane_g_ParamLimits

0xfc6b,	// (0x000572aa) main_sp_fs_ctrlbar_ddmenu_pane_g

0x26a6,	// (0x00049ce5) main_sp_fs_ctrlbar_ddmenu_pane_t1_ParamLimits

0x26a6,	// (0x00049ce5) main_sp_fs_ctrlbar_ddmenu_pane_t1

0xd00f,	// (0x0005464e) list_medium_line_t2_right_icon_g1

0xd54a,	// (0x00054b89) list_medium_line_t2_right_icon_t1

0xd54a,	// (0x00054b89) list_medium_line_t2_right_icon_t2

0x0001,

0xfc70,	// (0x000572af) list_medium_line_t2_right_icon_t

0xed6f,	// (0x000563ae) bg_sp_fs_ctrlbar_pane_ParamLimits

0xed6f,	// (0x000563ae) bg_sp_fs_ctrlbar_pane

0xb423,	// (0x00052a62) main_sp_fs_ctrlbar_button_pane_cp01

0xb42b,	// (0x00052a6a) main_sp_fs_ctrlbar_ddmenu_pane

0x26f8,	// (0x00049d37) main_sp_fs_ctrlbar_pane_g1

0x2704,	// (0x00049d43) main_sp_fs_ctrlbar_pane_g2

0x0003,

0xfc75,	// (0x000572b4) main_sp_fs_ctrlbar_pane_g

0xb467,	// (0x00052aa6) main_sp_fs_ctrlbar_pane_t1

0xb4a2,	// (0x00052ae1) main_sp_fs_ctrlbar_pane

0xb4b8,	// (0x00052af7) main_sp_fs_listscroll_pane_te_cp01

0xb4c9,	// (0x00052b08) popup_sp_fs_action_menu_pane_cp01_ParamLimits

0xb4c9,	// (0x00052b08) popup_sp_fs_action_menu_pane_cp01

0xcd5c,	// (0x0005439b) bg_sp_fs_highlight_list_pane_cp01_ParamLimits

0xcd5c,	// (0x0005439b) bg_sp_fs_highlight_list_pane_cp01

0x272b,	// (0x00049d6a) sp_fs_action_menu_list_gene_pane_g1_ParamLimits

0x272b,	// (0x00049d6a) sp_fs_action_menu_list_gene_pane_g1

0x273a,	// (0x00049d79) sp_fs_action_menu_list_gene_pane_g2_ParamLimits

0x273a,	// (0x00049d79) sp_fs_action_menu_list_gene_pane_g2

0x0001,

0xfc83,	// (0x000572c2) sp_fs_action_menu_list_gene_pane_g_ParamLimits

0xfc83,	// (0x000572c2) sp_fs_action_menu_list_gene_pane_g

0x2747,	// (0x00049d86) sp_fs_action_menu_list_gene_pane_t1_ParamLimits

0x2747,	// (0x00049d86) sp_fs_action_menu_list_gene_pane_t1

0x275f,	// (0x00049d9e) sp_fs_action_menu_list_gene_pane_ParamLimits

0x275f,	// (0x00049d9e) sp_fs_action_menu_list_gene_pane

0x277e,	// (0x00049dbd) popup_sp_fs_action_menu_bg_pane_ParamLimits

0x277e,	// (0x00049dbd) popup_sp_fs_action_menu_bg_pane

0x278c,	// (0x00049dcb) sp_fs_action_menu_list_pane_ParamLimits

0x278c,	// (0x00049dcb) sp_fs_action_menu_list_pane

0xf040,	// (0x0005667f) sp_fs_scroll_pane_cp01_ParamLimits

0xf040,	// (0x0005667f) sp_fs_scroll_pane_cp01

0xd54a,	// (0x00054b89) list_medium_line_plain_t2_t1

0xd54a,	// (0x00054b89) list_medium_line_plain_t2_t2

0x0001,

0xfc70,	// (0x000572af) list_medium_line_plain_t2_t

0xd54a,	// (0x00054b89) list_medium_line_plain_t3_t1

0xd54a,	// (0x00054b89) list_medium_line_plain_t3_t2

0xd54a,	// (0x00054b89) list_medium_line_plain_t3_t3

0x0002,

0xf2c1,	// (0x00056900) list_medium_line_plain_t3_t

0xcdb5,	// (0x000543f4) list_medium_line_x2_t2_g2_g1_ParamLimits

0xcdb5,	// (0x000543f4) list_medium_line_x2_t2_g2_g1

0xcdb5,	// (0x000543f4) list_medium_line_x2_t2_g2_g2_ParamLimits

0xcdb5,	// (0x000543f4) list_medium_line_x2_t2_g2_g2

0x0001,

0xf201,	// (0x00056840) list_medium_line_x2_t2_g2_g_ParamLimits

0xf201,	// (0x00056840) list_medium_line_x2_t2_g2_g

0xd029,	// (0x00054668) list_medium_line_x2_t2_g2_t1_ParamLimits

0xd029,	// (0x00054668) list_medium_line_x2_t2_g2_t1

0xd029,	// (0x00054668) list_medium_line_x2_t2_g2_t2_ParamLimits

0xd029,	// (0x00054668) list_medium_line_x2_t2_g2_t2

0x0001,

0xf276,	// (0x000568b5) list_medium_line_x2_t2_g2_t_ParamLimits

0xf276,	// (0x000568b5) list_medium_line_x2_t2_g2_t

0xcdb5,	// (0x000543f4) list_medium_line_x2_t4_g2_g1_ParamLimits

0xcdb5,	// (0x000543f4) list_medium_line_x2_t4_g2_g1

0xcdb5,	// (0x000543f4) list_medium_line_x2_t4_g2_g2_ParamLimits

0xcdb5,	// (0x000543f4) list_medium_line_x2_t4_g2_g2

0x0001,

0xf201,	// (0x00056840) list_medium_line_x2_t4_g2_g_ParamLimits

0xf201,	// (0x00056840) list_medium_line_x2_t4_g2_g

0xd029,	// (0x00054668) list_medium_line_x2_t4_g2_t1_ParamLimits

0xd029,	// (0x00054668) list_medium_line_x2_t4_g2_t1

0xd029,	// (0x00054668) list_medium_line_x2_t4_g2_t2_ParamLimits

0xd029,	// (0x00054668) list_medium_line_x2_t4_g2_t2

0xd029,	// (0x00054668) list_medium_line_x2_t4_g2_t3_ParamLimits

0xd029,	// (0x00054668) list_medium_line_x2_t4_g2_t3

0xd029,	// (0x00054668) list_medium_line_x2_t4_g2_t4_ParamLimits

0xd029,	// (0x00054668) list_medium_line_x2_t4_g2_t4

0x0003,

0xf20f,	// (0x0005684e) list_medium_line_x2_t4_g2_t_ParamLimits

0xf20f,	// (0x0005684e) list_medium_line_x2_t4_g2_t

0xd00f,	// (0x0005464e) list_medium_line_t3_right_iconx2_g1

0xd00f,	// (0x0005464e) list_medium_line_t3_right_iconx2_g2

0xd00f,	// (0x0005464e) list_medium_line_t3_right_iconx2_g3

0x0002,

0xf3e2,	// (0x00056a21) list_medium_line_t3_right_iconx2_g

0xd54a,	// (0x00054b89) list_medium_line_t3_right_iconx2_t1

0xd54a,	// (0x00054b89) list_medium_line_t3_right_iconx2_t2

0x0001,

0xfc70,	// (0x000572af) list_medium_line_t3_right_iconx2_t

0xcdb5,	// (0x000543f4) list_medium_line_x3_t4_g4_g1_ParamLimits

0xcdb5,	// (0x000543f4) list_medium_line_x3_t4_g4_g1

0xcdb5,	// (0x000543f4) list_medium_line_x3_t4_g4_g2_ParamLimits

0xcdb5,	// (0x000543f4) list_medium_line_x3_t4_g4_g2

0xcdb5,	// (0x000543f4) list_medium_line_x3_t4_g4_g3_ParamLimits

0xcdb5,	// (0x000543f4) list_medium_line_x3_t4_g4_g3

0xcdb5,	// (0x000543f4) list_medium_line_x3_t4_g4_g4_ParamLimits

0xcdb5,	// (0x000543f4) list_medium_line_x3_t4_g4_g4

0x0003,

0xf206,	// (0x00056845) list_medium_line_x3_t4_g4_g_ParamLimits

0xf206,	// (0x00056845) list_medium_line_x3_t4_g4_g

0xd029,	// (0x00054668) list_medium_line_x3_t4_g4_t1_ParamLimits

0xd029,	// (0x00054668) list_medium_line_x3_t4_g4_t1

0xd029,	// (0x00054668) list_medium_line_x3_t4_g4_t2_ParamLimits

0xd029,	// (0x00054668) list_medium_line_x3_t4_g4_t2

0xd029,	// (0x00054668) list_medium_line_x3_t4_g4_t3_ParamLimits

0xd029,	// (0x00054668) list_medium_line_x3_t4_g4_t3

0xd029,	// (0x00054668) list_medium_line_x3_t4_g4_t4_ParamLimits

0xd029,	// (0x00054668) list_medium_line_x3_t4_g4_t4

0x0003,

0xf20f,	// (0x0005684e) list_medium_line_x3_t4_g4_t_ParamLimits

0xf20f,	// (0x0005684e) list_medium_line_x3_t4_g4_t

0xb4e9,	// (0x00052b28) list_single_dyc_row_text_pane_t1_ParamLimits

0xb4e9,	// (0x00052b28) list_single_dyc_row_text_pane_t1

0xb520,	// (0x00052b5f) list_single_dyc_row_text_pane_t2_ParamLimits

0xb520,	// (0x00052b5f) list_single_dyc_row_text_pane_t2

0x27ac,	// (0x00049deb) list_single_dyc_row_text_pane_t3_ParamLimits

0x27ac,	// (0x00049deb) list_single_dyc_row_text_pane_t3

0x0005,

0xfc88,	// (0x000572c7) list_single_dyc_row_text_pane_t_ParamLimits

0xfc88,	// (0x000572c7) list_single_dyc_row_text_pane_t

0x27d0,	// (0x00049e0f) list_single_dyc_row_pane_g1_ParamLimits

0x27d0,	// (0x00049e0f) list_single_dyc_row_pane_g1

0x27dc,	// (0x00049e1b) list_single_dyc_row_pane_g2_ParamLimits

0x27dc,	// (0x00049e1b) list_single_dyc_row_pane_g2

0x27e8,	// (0x00049e27) list_single_dyc_row_pane_g3_ParamLimits

0x27e8,	// (0x00049e27) list_single_dyc_row_pane_g3

0x27f4,	// (0x00049e33) list_single_dyc_row_pane_g4_ParamLimits

0x27f4,	// (0x00049e33) list_single_dyc_row_pane_g4

0x0003,

0xfc95,	// (0x000572d4) list_single_dyc_row_pane_g_ParamLimits

0xfc95,	// (0x000572d4) list_single_dyc_row_pane_g

0x2800,	// (0x00049e3f) list_single_dyc_row_text_pane_ParamLimits

0x2800,	// (0x00049e3f) list_single_dyc_row_text_pane

0x45ec,	// (0x0004bc2b) bg_sp_fs_scroll_pane

0x281f,	// (0x00049e5e) thumb_sp_fs_scroll_pane

0xcdb5,	// (0x000543f4) list_medium_line_g1_ParamLimits

0xcdb5,	// (0x000543f4) list_medium_line_g1

0xd029,	// (0x00054668) list_medium_line_t1_ParamLimits

0xd029,	// (0x00054668) list_medium_line_t1

0xcdb5,	// (0x000543f4) list_medium_line_x2_g1_ParamLimits

0xcdb5,	// (0x000543f4) list_medium_line_x2_g1

0xcdb5,	// (0x000543f4) list_medium_line_x2_g2_ParamLimits

0xcdb5,	// (0x000543f4) list_medium_line_x2_g2

0x0001,

0xf201,	// (0x00056840) list_medium_line_x2_g_ParamLimits

0xf201,	// (0x00056840) list_medium_line_x2_g

0xd029,	// (0x00054668) list_medium_line_x2_t1_ParamLimits

0xd029,	// (0x00054668) list_medium_line_x2_t1

0xcdb5,	// (0x000543f4) list_medium_line_x3_g1_ParamLimits

0xcdb5,	// (0x000543f4) list_medium_line_x3_g1

0x2828,	// (0x00049e67) list_medium_line_x3_g2_ParamLimits

0x2828,	// (0x00049e67) list_medium_line_x3_g2

0x0001,

0xfc9e,	// (0x000572dd) list_medium_line_x3_g_ParamLimits

0xfc9e,	// (0x000572dd) list_medium_line_x3_g

0x2836,	// (0x00049e75) list_medium_line_x3_t1_ParamLimits

0x2836,	// (0x00049e75) list_medium_line_x3_t1

0x284a,	// (0x00049e89) thumb_sp_fs_scroll_pane_g1

0x2853,	// (0x00049e92) thumb_sp_fs_scroll_pane_g2

0x285c,	// (0x00049e9b) thumb_sp_fs_scroll_pane_g3

0x0002,

0xfca3,	// (0x000572e2) thumb_sp_fs_scroll_pane_g

0x284a,	// (0x00049e89) bg_sp_fs_scroll_pane_g1

0x2853,	// (0x00049e92) bg_sp_fs_scroll_pane_g2

0x285c,	// (0x00049e9b) bg_sp_fs_scroll_pane_g3

0x0002,

0xfca3,	// (0x000572e2) bg_sp_fs_scroll_pane_g

0xcdb5,	// (0x000543f4) list_medium_line_x2_t3_g4_g1_ParamLimits

0xcdb5,	// (0x000543f4) list_medium_line_x2_t3_g4_g1

0xcdb5,	// (0x000543f4) list_medium_line_x2_t3_g4_g2_ParamLimits

0xcdb5,	// (0x000543f4) list_medium_line_x2_t3_g4_g2

0xcdb5,	// (0x000543f4) list_medium_line_x2_t3_g4_g3_ParamLimits

0xcdb5,	// (0x000543f4) list_medium_line_x2_t3_g4_g3

0xcdb5,	// (0x000543f4) list_medium_line_x2_t3_g4_g4_ParamLimits

0xcdb5,	// (0x000543f4) list_medium_line_x2_t3_g4_g4

0x0003,

0xf206,	// (0x00056845) list_medium_line_x2_t3_g4_g_ParamLimits

0xf206,	// (0x00056845) list_medium_line_x2_t3_g4_g

0xd029,	// (0x00054668) list_medium_line_x2_t3_g4_t1_ParamLimits

0xd029,	// (0x00054668) list_medium_line_x2_t3_g4_t1

0xd029,	// (0x00054668) list_medium_line_x2_t3_g4_t2_ParamLimits

0xd029,	// (0x00054668) list_medium_line_x2_t3_g4_t2

0xd029,	// (0x00054668) list_medium_line_x2_t3_g4_t3_ParamLimits

0xd029,	// (0x00054668) list_medium_line_x2_t3_g4_t3

0x0002,

0xf1fa,	// (0x00056839) list_medium_line_x2_t3_g4_t_ParamLimits

0xf1fa,	// (0x00056839) list_medium_line_x2_t3_g4_t

0xcdb5,	// (0x000543f4) list_medium_line_g2_g1_ParamLimits

0xcdb5,	// (0x000543f4) list_medium_line_g2_g1

0xcdb5,	// (0x000543f4) list_medium_line_g2_g2_ParamLimits

0xcdb5,	// (0x000543f4) list_medium_line_g2_g2

0x0001,

0xf201,	// (0x00056840) list_medium_line_g2_g_ParamLimits

0xf201,	// (0x00056840) list_medium_line_g2_g

0xd029,	// (0x00054668) list_medium_line_g2_t1_ParamLimits

0xd029,	// (0x00054668) list_medium_line_g2_t1

0xcdb5,	// (0x000543f4) list_medium_line_t3_g2_g1_ParamLimits

0xcdb5,	// (0x000543f4) list_medium_line_t3_g2_g1

0xcdb5,	// (0x000543f4) list_medium_line_t3_g2_g2_ParamLimits

0xcdb5,	// (0x000543f4) list_medium_line_t3_g2_g2

0x0001,

0xf201,	// (0x00056840) list_medium_line_t3_g2_g_ParamLimits

0xf201,	// (0x00056840) list_medium_line_t3_g2_g

0xd029,	// (0x00054668) list_medium_line_t3_g2_t1_ParamLimits

0xd029,	// (0x00054668) list_medium_line_t3_g2_t1

0xd029,	// (0x00054668) list_medium_line_t3_g2_t2_ParamLimits

0xd029,	// (0x00054668) list_medium_line_t3_g2_t2

0xd029,	// (0x00054668) list_medium_line_t3_g2_t3_ParamLimits

0xd029,	// (0x00054668) list_medium_line_t3_g2_t3

0x0002,

0xf1fa,	// (0x00056839) list_medium_line_t3_g2_t_ParamLimits

0xf1fa,	// (0x00056839) list_medium_line_t3_g2_t

0xd00f,	// (0x0005464e) list_medium_line_right_icon_g1

0xd54a,	// (0x00054b89) list_medium_line_right_icon_t1

0xcdb5,	// (0x000543f4) list_medium_line_t2_g1_ParamLimits

0xcdb5,	// (0x000543f4) list_medium_line_t2_g1

0xd029,	// (0x00054668) list_medium_line_t2_t1_ParamLimits

0xd029,	// (0x00054668) list_medium_line_t2_t1

0xd029,	// (0x00054668) list_medium_line_t2_t2_ParamLimits

0xd029,	// (0x00054668) list_medium_line_t2_t2

0x0001,

0xf276,	// (0x000568b5) list_medium_line_t2_t_ParamLimits

0xf276,	// (0x000568b5) list_medium_line_t2_t

0xcdb5,	// (0x000543f4) list_medium_line_t3_g1_ParamLimits

0xcdb5,	// (0x000543f4) list_medium_line_t3_g1

0xd029,	// (0x00054668) list_medium_line_t3_t1_ParamLimits

0xd029,	// (0x00054668) list_medium_line_t3_t1

0xd029,	// (0x00054668) list_medium_line_t3_t2_ParamLimits

0xd029,	// (0x00054668) list_medium_line_t3_t2

0xd029,	// (0x00054668) list_medium_line_t3_t3_ParamLimits

0xd029,	// (0x00054668) list_medium_line_t3_t3

0x0002,

0xf1fa,	// (0x00056839) list_medium_line_t3_t_ParamLimits

0xf1fa,	// (0x00056839) list_medium_line_t3_t

0xcdb5,	// (0x000543f4) list_medium_line_g3_g1_ParamLimits

0xcdb5,	// (0x000543f4) list_medium_line_g3_g1

0xcdb5,	// (0x000543f4) list_medium_line_g3_g2_ParamLimits

0xcdb5,	// (0x000543f4) list_medium_line_g3_g2

0xcdb5,	// (0x000543f4) list_medium_line_g3_g3_ParamLimits

0xcdb5,	// (0x000543f4) list_medium_line_g3_g3

0x0002,

0xf1f3,	// (0x00056832) list_medium_line_g3_g_ParamLimits

0xf1f3,	// (0x00056832) list_medium_line_g3_g

0xd029,	// (0x00054668) list_medium_line_g3_t1_ParamLimits

0xd029,	// (0x00054668) list_medium_line_g3_t1

0xcdb5,	// (0x000543f4) list_medium_line_t2_g3_g1_ParamLimits

0xcdb5,	// (0x000543f4) list_medium_line_t2_g3_g1

0xcdb5,	// (0x000543f4) list_medium_line_t2_g3_g2_ParamLimits

0xcdb5,	// (0x000543f4) list_medium_line_t2_g3_g2

0xcdb5,	// (0x000543f4) list_medium_line_t2_g3_g3_ParamLimits

0xcdb5,	// (0x000543f4) list_medium_line_t2_g3_g3

0x0002,

0xf1f3,	// (0x00056832) list_medium_line_t2_g3_g_ParamLimits

0xf1f3,	// (0x00056832) list_medium_line_t2_g3_g

0xd029,	// (0x00054668) list_medium_line_t2_g3_t1_ParamLimits

0xd029,	// (0x00054668) list_medium_line_t2_g3_t1

0xd029,	// (0x00054668) list_medium_line_t2_g3_t2_ParamLimits

0xd029,	// (0x00054668) list_medium_line_t2_g3_t2

0x0001,

0xf276,	// (0x000568b5) list_medium_line_t2_g3_t_ParamLimits

0xf276,	// (0x000568b5) list_medium_line_t2_g3_t

0xcdb5,	// (0x000543f4) list_medium_line_t3_g3_g1_ParamLimits

0xcdb5,	// (0x000543f4) list_medium_line_t3_g3_g1

0xcdb5,	// (0x000543f4) list_medium_line_t3_g3_g2_ParamLimits

0xcdb5,	// (0x000543f4) list_medium_line_t3_g3_g2

0xcdb5,	// (0x000543f4) list_medium_line_t3_g3_g3_ParamLimits

0xcdb5,	// (0x000543f4) list_medium_line_t3_g3_g3

0x0002,

0xf1f3,	// (0x00056832) list_medium_line_t3_g3_g_ParamLimits

0xf1f3,	// (0x00056832) list_medium_line_t3_g3_g

0xd029,	// (0x00054668) list_medium_line_t3_g3_t1_ParamLimits

0xd029,	// (0x00054668) list_medium_line_t3_g3_t1

0xd029,	// (0x00054668) list_medium_line_t3_g3_t2_ParamLimits

0xd029,	// (0x00054668) list_medium_line_t3_g3_t2

0xd029,	// (0x00054668) list_medium_line_t3_g3_t3_ParamLimits

0xd029,	// (0x00054668) list_medium_line_t3_g3_t3

0x0002,

0xf1fa,	// (0x00056839) list_medium_line_t3_g3_t_ParamLimits

0xf1fa,	// (0x00056839) list_medium_line_t3_g3_t

0xd00f,	// (0x0005464e) list_medium_line_right_iconx2_g1

0xd00f,	// (0x0005464e) list_medium_line_right_iconx2_g2

0x0001,

0xf3dd,	// (0x00056a1c) list_medium_line_right_iconx2_g

0xd54a,	// (0x00054b89) list_medium_line_right_iconx2_t1

0xd00f,	// (0x0005464e) list_medium_line_t2_right_iconx2_g1

0xd00f,	// (0x0005464e) list_medium_line_t2_right_iconx2_g2

0x0001,

0xf3dd,	// (0x00056a1c) list_medium_line_t2_right_iconx2_g

0xd54a,	// (0x00054b89) list_medium_line_t2_right_iconx2_t1

0xd54a,	// (0x00054b89) list_medium_line_t2_right_iconx2_t2

0x0001,

0xfc70,	// (0x000572af) list_medium_line_t2_right_iconx2_t

0xd54a,	// (0x00054b89) list_medium_line_x4_t4_t1

0xd54a,	// (0x00054b89) list_medium_line_x4_t4_t2

0xd54a,	// (0x00054b89) list_medium_line_x4_t4_t3

0xd54a,	// (0x00054b89) list_medium_line_x4_t4_t4

0x0003,

0xf2c8,	// (0x00056907) list_medium_line_x4_t4_t

0xb66d,	// (0x00052cac) tport_appsw_pane_ParamLimits

0xb66d,	// (0x00052cac) tport_appsw_pane

0xb67b,	// (0x00052cba) tport_contact_pane_ParamLimits

0xb67b,	// (0x00052cba) tport_contact_pane

0xb68b,	// (0x00052cca) tport_listscroll_pane_ParamLimits

0xb68b,	// (0x00052cca) tport_listscroll_pane

0xb69b,	// (0x00052cda) cell_tport_appsw_pane_ParamLimits

0xb69b,	// (0x00052cda) cell_tport_appsw_pane

0xcdc3,	// (0x00054402) tport_appsw_pane_g1_ParamLimits

0xcdc3,	// (0x00054402) tport_appsw_pane_g1

0x2865,	// (0x00049ea4) tport_contact_pane_g1

0x286e,	// (0x00049ead) tport_contact_pane_t1

0x287c,	// (0x00049ebb) tport_contact_pane_t2

0x0001,

0xfcaa,	// (0x000572e9) tport_contact_pane_t

0x288a,	// (0x00049ec9) list_tport_pane

0x2893,	// (0x00049ed2) scroll_pane_cp_030

0xb6ce,	// (0x00052d0d) cell_tport_appsw_pane_g1

0xb6de,	// (0x00052d1d) cell_tport_appsw_pane_t1

0xb6ec,	// (0x00052d2b) grid_highlight_pane_cp019

0xb6f4,	// (0x00052d33) list_tport_double_graphic_pane_ParamLimits

0xb6f4,	// (0x00052d33) list_tport_double_graphic_pane

0xcd5c,	// (0x0005439b) list_highlight_pane_cp023_ParamLimits

0xcd5c,	// (0x0005439b) list_highlight_pane_cp023

0xb705,	// (0x00052d44) list_tport_double_graphic_pane_g1_ParamLimits

0xb705,	// (0x00052d44) list_tport_double_graphic_pane_g1

0xb712,	// (0x00052d51) list_tport_double_graphic_pane_t1_ParamLimits

0xb712,	// (0x00052d51) list_tport_double_graphic_pane_t1

0xb727,	// (0x00052d66) list_tport_double_graphic_pane_t2_ParamLimits

0xb727,	// (0x00052d66) list_tport_double_graphic_pane_t2

0x0001,

0xfcb6,	// (0x000572f5) list_tport_double_graphic_pane_t_ParamLimits

0xfcb6,	// (0x000572f5) list_tport_double_graphic_pane_t

0x45ec,	// (0x0004bc2b) main_cale_note_pane

0x9612,	// (0x00050c51) cell_vitu2_function_top_wide_pane_cp01_ParamLimits

0x9612,	// (0x00050c51) cell_vitu2_function_top_wide_pane_cp01

0xafc4,	// (0x00052603) wait_bar_pane_cp05_ParamLimits

0xcd5c,	// (0x0005439b) listscroll_cmail_pane

0x289c,	// (0x00049edb) list_cmail_pane

0xb739,	// (0x00052d78) list_cmail_body_pane

0xb761,	// (0x00052da0) list_single_cmail_header_caption_pane

0xb790,	// (0x00052dcf) list_single_cmail_header_detail_pane_ParamLimits

0xb790,	// (0x00052dcf) list_single_cmail_header_detail_pane

0x28ac,	// (0x00049eeb) list_single_cmail_header_caption_pane_t1

0xb7c9,	// (0x00052e08) list_single_cmail_header_detail_pane_g1_ParamLimits

0xb7c9,	// (0x00052e08) list_single_cmail_header_detail_pane_g1

0x28c3,	// (0x00049f02) list_single_cmail_header_detail_pane_g2_ParamLimits

0x28c3,	// (0x00049f02) list_single_cmail_header_detail_pane_g2

0x0002,

0xfcbb,	// (0x000572fa) list_single_cmail_header_detail_pane_g_ParamLimits

0xfcbb,	// (0x000572fa) list_single_cmail_header_detail_pane_g

0x28dc,	// (0x00049f1b) list_single_cmail_header_detail_pane_t1_ParamLimits

0x28dc,	// (0x00049f1b) list_single_cmail_header_detail_pane_t1

0x293c,	// (0x00049f7b) list_single_cmail_header_editor_pane_bg_ParamLimits

0x293c,	// (0x00049f7b) list_single_cmail_header_editor_pane_bg

0x228f,	// (0x000498ce) list_cmail_body_pane_g1

0x2953,	// (0x00049f92) list_cmail_body_pane_t1

0x15a1,	// (0x00048be0) list_single_cmail_header_editor_pane_bg_g1

0xd234,	// (0x00054873) list_single_cmail_header_editor_pane_bg_g1_copy1

0x15b1,	// (0x00048bf0) list_single_cmail_header_editor_pane_bg_g1_copy2

0x15a9,	// (0x00048be8) list_single_cmail_header_editor_pane_bg_g1_copy3

0x17f9,	// (0x00048e38) list_single_cmail_header_editor_pane_bg_g1_copy4

0x15d1,	// (0x00048c10) list_single_cmail_header_editor_pane_bg_g1_copy4_copy1

0x15c1,	// (0x00048c00) list_single_cmail_header_editor_pane_bg_g1_copy4_copy2

0x15c9,	// (0x00048c08) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3

0xd214,	// (0x00054853) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3_copy1

0xb7df,	// (0x00052e1e) calenote_gesture_pane_ParamLimits

0xb7df,	// (0x00052e1e) calenote_gesture_pane

0xb7f9,	// (0x00052e38) calenote_window_pane_ParamLimits

0xb7f9,	// (0x00052e38) calenote_window_pane

0x2961,	// (0x00049fa0) popup_note_window_cp01

0xb811,	// (0x00052e50) calenote_swipe_1_pane_ParamLimits

0xb811,	// (0x00052e50) calenote_swipe_1_pane

0xb384,	// (0x000529c3) calenote_swipe_2_pane_ParamLimits

0xb384,	// (0x000529c3) calenote_swipe_2_pane

0x25e1,	// (0x00049c20) calenote_swipe_1_pane_g1_ParamLimits

0x25e1,	// (0x00049c20) calenote_swipe_1_pane_g1

0x25ee,	// (0x00049c2d) calenote_swipe_1_pane_g2_ParamLimits

0x25ee,	// (0x00049c2d) calenote_swipe_1_pane_g2

0x0001,

0xfc58,	// (0x00057297) calenote_swipe_1_pane_g_ParamLimits

0xfc58,	// (0x00057297) calenote_swipe_1_pane_g

0x2973,	// (0x00049fb2) calenote_swipe_1_pane_t1_ParamLimits

0x2973,	// (0x00049fb2) calenote_swipe_1_pane_t1

0x25e1,	// (0x00049c20) calenote_swipe_2_pane_g1_ParamLimits

0x25e1,	// (0x00049c20) calenote_swipe_2_pane_g1

0x2992,	// (0x00049fd1) calenote_swipe_2_pane_g2_ParamLimits

0x2992,	// (0x00049fd1) calenote_swipe_2_pane_g2

0x0001,

0xfcc7,	// (0x00057306) calenote_swipe_2_pane_g_ParamLimits

0xfcc7,	// (0x00057306) calenote_swipe_2_pane_g

0x299e,	// (0x00049fdd) calenote_swipe_2_pane_t1_ParamLimits

0x299e,	// (0x00049fdd) calenote_swipe_2_pane_t1

0x45ec,	// (0x0004bc2b) main_mup_navstr_pane

0x84a0,	// (0x0004fadf) main_mup3_pane_t7_ParamLimits

0x84a0,	// (0x0004fadf) main_mup3_pane_t7

0x8cc9,	// (0x00050308) main_mp4_pane_g6_ParamLimits

0x8cc9,	// (0x00050308) main_mp4_pane_g6

0x9067,	// (0x000506a6) main_image3_pane_t4_ParamLimits

0x9067,	// (0x000506a6) main_image3_pane_t4

0xb824,	// (0x00052e63) popup_navstr_preview_pane_ParamLimits

0xb824,	// (0x00052e63) popup_navstr_preview_pane

0xb830,	// (0x00052e6f) scroll_navstr_pane_ParamLimits

0xb830,	// (0x00052e6f) scroll_navstr_pane

0x45ec,	// (0x0004bc2b) bg_popup_preview_window_pane_cp04

0x29c5,	// (0x0004a004) popup_navstr_preview_pane_t1

0xb83c,	// (0x00052e7b) scroll_navstr_pane_g1_ParamLimits

0xb83c,	// (0x00052e7b) scroll_navstr_pane_g1

0xb849,	// (0x00052e88) scroll_navstr_pane_t1_ParamLimits

0xb849,	// (0x00052e88) scroll_navstr_pane_t1

0x296a,	// (0x00049fa9) bg_button_pane_cp014

0x296a,	// (0x00049fa9) bg_button_pane_cp030

0xb297,	// (0x000528d6) list_double_fisheye_pane_g4_ParamLimits

0xb297,	// (0x000528d6) list_double_fisheye_pane_g4

0xb2a3,	// (0x000528e2) list_double_fisheye_pane_g5_ParamLimits

0xb2a3,	// (0x000528e2) list_double_fisheye_pane_g5

0xf066,	// (0x000566a5) sp_fs_scroll_pane_cp03

0x26f8,	// (0x00049d37) main_sp_fs_ctrlbar_pane_g1_ParamLimits

0x2704,	// (0x00049d43) main_sp_fs_ctrlbar_pane_g2_ParamLimits

0xfc75,	// (0x000572b4) main_sp_fs_ctrlbar_pane_g_ParamLimits

0xb467,	// (0x00052aa6) main_sp_fs_ctrlbar_pane_t1_ParamLimits

0x28a4,	// (0x00049ee3) sp_fs_scroll_pane_cp02

0xcf21,	// (0x00054560) popup_sp_fs_calendar_preview_list_single_pane_ParamLimits

0xcf21,	// (0x00054560) popup_sp_fs_calendar_preview_list_single_pane

0x45ec,	// (0x0004bc2b) main_cam6_pano_pane

0x7a09,	// (0x0004f048) main_mup3_pane_ParamLimits

0x45ec,	// (0x0004bc2b) main_phacti_pane

0xae99,	// (0x000524d8) bg_button_pane_cp11

0xaeb1,	// (0x000524f0) main_mobtv_info_pane_g2_ParamLimits

0xaeb1,	// (0x000524f0) main_mobtv_info_pane_g2

0x0001,

0xfbd5,	// (0x00057214) main_mobtv_info_pane_g_ParamLimits

0xfbd5,	// (0x00057214) main_mobtv_info_pane_g

0xb063,	// (0x000526a2) sc_clock_pane_t5_ParamLimits

0xb063,	// (0x000526a2) sc_clock_pane_t5

0xb104,	// (0x00052743) main_radioblah_pane_g1_ParamLimits

0x252d,	// (0x00049b6c) main_radioblah_pane_t3_ParamLimits

0x252d,	// (0x00049b6c) main_radioblah_pane_t3

0x2545,	// (0x00049b84) main_radioblah_pane_t4_ParamLimits

0x2545,	// (0x00049b84) main_radioblah_pane_t4

0xb122,	// (0x00052761) main_radioblah_text_pane_ParamLimits

0xb122,	// (0x00052761) main_radioblah_text_pane

0xb12f,	// (0x0005276e) main_radioblah_info_pane_g1_ParamLimits

0xb1c4,	// (0x00052803) main_radioblah_info_pane_t4_ParamLimits

0xb1c4,	// (0x00052803) main_radioblah_info_pane_t4

0xcd5c,	// (0x0005439b) main_sp_fs_calendar_pane

0xb85b,	// (0x00052e9a) main_phacti_pane_g1

0xb863,	// (0x00052ea2) phacti_note_pane_ParamLimits

0xb863,	// (0x00052ea2) phacti_note_pane

0x29dc,	// (0x0004a01b) phacti_term_pane_ParamLimits

0x29dc,	// (0x0004a01b) phacti_term_pane

0x29f1,	// (0x0004a030) phacti_note_pane_t1_ParamLimits

0x29f1,	// (0x0004a030) phacti_note_pane_t1

0x2a08,	// (0x0004a047) phacti_term_pane_g1

0x2a10,	// (0x0004a04f) phacti_term_pane_t1_ParamLimits

0x2a10,	// (0x0004a04f) phacti_term_pane_t1

0x2a3a,	// (0x0004a079) popup_sp_fs_calendar_preview_list_single_pane_g1

0x2a42,	// (0x0004a081) popup_sp_fs_calendar_preview_list_single_pane_g2

0x0001,

0xfcd1,	// (0x00057310) popup_sp_fs_calendar_preview_list_single_pane_g

0x2a4a,	// (0x0004a089) popup_sp_fs_calendar_preview_list_single_pane_t1_ParamLimits

0x2a4a,	// (0x0004a089) popup_sp_fs_calendar_preview_list_single_pane_t1

0x2a60,	// (0x0004a09f) aid_popup_sp_fs_bg_corner_pane

0xd00f,	// (0x0005464e) popup_sp_fs_calendar_preview_bg_pane_g1

0x45ec,	// (0x0004bc2b) popup_sp_fs_calendar_preview_bg_pane

0x2a68,	// (0x0004a0a7) popup_sp_fs_calendar_preview_list_pane

0xed6f,	// (0x000563ae) bg_main_sp_fs_cale_pane_ParamLimits

0xed6f,	// (0x000563ae) bg_main_sp_fs_cale_pane

0x2a79,	// (0x0004a0b8) listscroll_cale_mrui_pane_ParamLimits

0x2a79,	// (0x0004a0b8) listscroll_cale_mrui_pane

0x2a8e,	// (0x0004a0cd) listscroll_sp_fs_schedule_track_pane

0x2a97,	// (0x0004a0d6) main_sp_fs_ctrlbar_pane_cp01_ParamLimits

0x2a97,	// (0x0004a0d6) main_sp_fs_ctrlbar_pane_cp01

0x2aaa,	// (0x0004a0e9) main_sp_fs_ribbon_pane

0x2ab2,	// (0x0004a0f1) popup_sp_fs_cale_preview_window

0xb8c6,	// (0x00052f05) list_single_sp_fs_schedule_track_pane_ParamLimits

0xb8c6,	// (0x00052f05) list_single_sp_fs_schedule_track_pane

0x4ee4,	// (0x0004c523) bg_sp_fs_highlight_list_pane_cp03_ParamLimits

0x4ee4,	// (0x0004c523) bg_sp_fs_highlight_list_pane_cp03

0xb8ec,	// (0x00052f2b) list_single_sp_fs_schedule_track_pane_g1_ParamLimits

0xb8ec,	// (0x00052f2b) list_single_sp_fs_schedule_track_pane_g1

0xb8f8,	// (0x00052f37) list_single_sp_fs_schedule_track_pane_g2_ParamLimits

0xb8f8,	// (0x00052f37) list_single_sp_fs_schedule_track_pane_g2

0x0001,

0xfcd6,	// (0x00057315) list_single_sp_fs_schedule_track_pane_g_ParamLimits

0xfcd6,	// (0x00057315) list_single_sp_fs_schedule_track_pane_g

0xb904,	// (0x00052f43) list_single_sp_fs_schedule_track_pane_t1_ParamLimits

0xb904,	// (0x00052f43) list_single_sp_fs_schedule_track_pane_t1

0xb91c,	// (0x00052f5b) sp_fs_schedule_track_pane_ParamLimits

0xb91c,	// (0x00052f5b) sp_fs_schedule_track_pane

0x2ac4,	// (0x0004a103) sp_fs_schedule_track_pane_g1

0x2acc,	// (0x0004a10b) sp_fs_schedule_track_pane_g2

0x2ad4,	// (0x0004a113) sp_fs_schedule_track_pane_g3

0x2adc,	// (0x0004a11b) sp_fs_schedule_track_pane_g4

0x2ae4,	// (0x0004a123) sp_fs_schedule_track_pane_g5

0x0004,

0xfcdb,	// (0x0005731a) sp_fs_schedule_track_pane_g

0x15a1,	// (0x00048be0) bg_sp_fs_schedule_viewer_highlight_g1

0xd234,	// (0x00054873) bg_sp_fs_schedule_viewer_highlight_g2

0x15a9,	// (0x00048be8) bg_sp_fs_schedule_viewer_highlight_g3

0x15b1,	// (0x00048bf0) bg_sp_fs_schedule_viewer_highlight_g4

0x17f9,	// (0x00048e38) bg_sp_fs_schedule_viewer_highlight_g5

0x15c1,	// (0x00048c00) bg_sp_fs_schedule_viewer_highlight_g6

0x15c9,	// (0x00048c08) bg_sp_fs_schedule_viewer_highlight_g7

0x15d1,	// (0x00048c10) bg_sp_fs_schedule_viewer_highlight_g8

0xd214,	// (0x00054853) bg_sp_fs_schedule_viewer_highlight_g9

0x0008,

0xfce6,	// (0x00057325) bg_sp_fs_schedule_viewer_highlight_g

0x45ec,	// (0x0004bc2b) bg_main_sp_fs_ribbon_pane

0xb92c,	// (0x00052f6b) main_sp_fs_ribbon_pane_g1

0x2aec,	// (0x0004a12b) main_sp_fs_ribbon_pane_t1

0xb935,	// (0x00052f74) main_sp_fs_ribbon_pane_t2

0x2afb,	// (0x0004a13a) main_sp_fs_ribbon_pane_t3

0x0002,

0xfcf9,	// (0x00057338) main_sp_fs_ribbon_pane_t

0x2b0a,	// (0x0004a149) main_sp_fs_ribbon_scheduler_pane

0x2b12,	// (0x0004a151) bg_main_sp_fs_ribbon_pane_g1

0x2b1b,	// (0x0004a15a) bg_main_sp_fs_ribbon_pane_g2

0x2b24,	// (0x0004a163) bg_main_sp_fs_ribbon_pane_g3

0x0002,

0xfd00,	// (0x0005733f) bg_main_sp_fs_ribbon_pane_g

0x2b2c,	// (0x0004a16b) main_sp_fs_ribbon_scheduler_pane_g1

0x2b35,	// (0x0004a174) main_sp_fs_ribbon_scheduler_pane_g2

0x2b3e,	// (0x0004a17d) main_sp_fs_ribbon_scheduler_pane_g3

0x0002,

0xfd07,	// (0x00057346) main_sp_fs_ribbon_scheduler_pane_g

0x2b47,	// (0x0004a186) list_cale_mrui_pane

0xb944,	// (0x00052f83) sp_fs_scroll_pane_cp07_ParamLimits

0xb944,	// (0x00052f83) sp_fs_scroll_pane_cp07

0xb960,	// (0x00052f9f) bg_sp_fs_schedule_viewer_highlight_ParamLimits

0xb960,	// (0x00052f9f) bg_sp_fs_schedule_viewer_highlight

0x2b54,	// (0x0004a193) list_single_sp_fs_schedule_track_pane_cp01

0x2b5c,	// (0x0004a19b) list_sp_fs_schedule_track_pane

0x2b64,	// (0x0004a1a3) sp_fs_scroll_pane_cp06_ParamLimits

0x2b64,	// (0x0004a1a3) sp_fs_scroll_pane_cp06

0xd00f,	// (0x0005464e) bgmain_sp_fs_calendar_pane_g1

0xb96d,	// (0x00052fac) list_single_cale_mrui_pane_ParamLimits

0xb96d,	// (0x00052fac) list_single_cale_mrui_pane

0x2b76,	// (0x0004a1b5) list_single_cale_mrui_row_pane_ParamLimits

0x2b76,	// (0x0004a1b5) list_single_cale_mrui_row_pane

0x2b83,	// (0x0004a1c2) list_single_cale_mrui_row_pane_g1_ParamLimits

0x2b83,	// (0x0004a1c2) list_single_cale_mrui_row_pane_g1

0x2bc8,	// (0x0004a207) list_single_cale_mrui_row_pane_t1_ParamLimits

0x2bc8,	// (0x0004a207) list_single_cale_mrui_row_pane_t1

0xb99b,	// (0x00052fda) list_single_cale_mrui_row_pane_t2_ParamLimits

0xb99b,	// (0x00052fda) list_single_cale_mrui_row_pane_t2

0x2bda,	// (0x0004a219) list_single_cale_mrui_row_pane_t3_ParamLimits

0x2bda,	// (0x0004a219) list_single_cale_mrui_row_pane_t3

0x2c09,	// (0x0004a248) list_single_cale_mrui_row_pane_t4_ParamLimits

0x2c09,	// (0x0004a248) list_single_cale_mrui_row_pane_t4

0x0003,

0xfd15,	// (0x00057354) list_single_cale_mrui_row_pane_t_ParamLimits

0xfd15,	// (0x00057354) list_single_cale_mrui_row_pane_t

0xba01,	// (0x00053040) list_single_cmail_header_editor_pane_bg_cp01_ParamLimits

0xba01,	// (0x00053040) list_single_cmail_header_editor_pane_bg_cp01

0xba21,	// (0x00053060) list_single_cmail_header_editor_pane_bg_cp02_ParamLimits

0xba21,	// (0x00053060) list_single_cmail_header_editor_pane_bg_cp02

0xba3d,	// (0x0005307c) main_radioblah_text_pane_t1_ParamLimits

0xba3d,	// (0x0005307c) main_radioblah_text_pane_t1

0x2c38,	// (0x0004a277) cam6_indi_pane_cp01

0x2c40,	// (0x0004a27f) cam6_mode_pane_cp01

0x2c48,	// (0x0004a287) cam6_pano_pane

0x2c51,	// (0x0004a290) cam6_zoom_pane_cp01

0x2c59,	// (0x0004a298) cam6_pano_image_pane

0x2c64,	// (0x0004a2a3) cam6_pano_pane_g1

0x228f,	// (0x000498ce) cam6_pano_pane_g2

0x2c6d,	// (0x0004a2ac) cam6_pano_pane_g3

0x2c76,	// (0x0004a2b5) cam6_pano_pane_g4

0x11e5,	// (0x00048824) cam6_pano_pane_g5

0x2c7f,	// (0x0004a2be) cam6_pano_pane_g6

0x2c89,	// (0x0004a2c8) cam6_pano_pane_g7

0x2c91,	// (0x0004a2d0) cam6_pano_pane_g8

0x2c9a,	// (0x0004a2d9) cam6_pano_pane_g9

0x0008,

0xfd1e,	// (0x0005735d) cam6_pano_pane_g

0x45ec,	// (0x0004bc2b) main_browser_tag_pane

0x29bd,	// (0x00049ffc) grid_navstr_albumart_pane

0x2ca5,	// (0x0004a2e4) cell_navstr_albumart_pane_ParamLimits

0x2ca5,	// (0x0004a2e4) cell_navstr_albumart_pane

0x2cc5,	// (0x0004a304) cell_navstr_albumart_pane_g1

0xebcb,	// (0x0005620a) cell_navstr_albumart_pane_g2

0xebdb,	// (0x0005621a) cell_navstr_albumart_pane_g3

0xebd3,	// (0x00056212) cell_navstr_albumart_pane_g4

0x0003,

0xfd31,	// (0x00057370) cell_navstr_albumart_pane_g

0xba58,	// (0x00053097) bt_list_pane_ParamLimits

0xba58,	// (0x00053097) bt_list_pane

0xba79,	// (0x000530b8) bt_list_pane_t1

0xba88,	// (0x000530c7) bt_list_pane_t2

0x0001,

0xfd3a,	// (0x00057379) bt_list_pane_t

0x45ec,	// (0x0004bc2b) main_cale_prevew_pane

0xba97,	// (0x000530d6) popup_cale_preview_window_ParamLimits

0xba97,	// (0x000530d6) popup_cale_preview_window

0xcd5c,	// (0x0005439b) bg_popup_preview_window_pane_cp05_ParamLimits

0xcd5c,	// (0x0005439b) bg_popup_preview_window_pane_cp05

0x2ccd,	// (0x0004a30c) list_cale_preview_pane_ParamLimits

0x2ccd,	// (0x0004a30c) list_cale_preview_pane

0xbab0,	// (0x000530ef) list_double_cale_preview_pane_ParamLimits

0xbab0,	// (0x000530ef) list_double_cale_preview_pane

0xbac2,	// (0x00053101) list_single_cale_preview_pane_ParamLimits

0xbac2,	// (0x00053101) list_single_cale_preview_pane

0xbad6,	// (0x00053115) list_single_cale_preview_pane_g1

0xbade,	// (0x0005311d) list_single_cale_preview_pane_t1_ParamLimits

0xbade,	// (0x0005311d) list_single_cale_preview_pane_t1

0xbaf3,	// (0x00053132) list_double_cale_preview_pane_g1

0xbafb,	// (0x0005313a) list_double_cale_preview_pane_t1_ParamLimits

0xbafb,	// (0x0005313a) list_double_cale_preview_pane_t1

0xbb10,	// (0x0005314f) list_double_cale_preview_pane_t2_ParamLimits

0xbb10,	// (0x0005314f) list_double_cale_preview_pane_t2

0x0001,

0xfd3f,	// (0x0005737e) list_double_cale_preview_pane_t_ParamLimits

0xfd3f,	// (0x0005737e) list_double_cale_preview_pane_t

0x45ec,	// (0x0004bc2b) main_ezdial_pane

0xcd5c,	// (0x0005439b) main_sp_fs_email_pane_ParamLimits

0xb3e0,	// (0x00052a1f) cmail_ddmenu_btn01_pane_ParamLimits

0xb3e0,	// (0x00052a1f) cmail_ddmenu_btn01_pane

0xb3f5,	// (0x00052a34) cmail_ddmenu_btn02_pane_ParamLimits

0xb3f5,	// (0x00052a34) cmail_ddmenu_btn02_pane

0xb40d,	// (0x00052a4c) cmail_ddmenu_btn03_pane_ParamLimits

0xb40d,	// (0x00052a4c) cmail_ddmenu_btn03_pane

0xb4a2,	// (0x00052ae1) main_sp_fs_ctrlbar_pane_ParamLimits

0xb4b8,	// (0x00052af7) main_sp_fs_listscroll_pane_te_cp01_ParamLimits

0xb739,	// (0x00052d78) list_cmail_body_pane_ParamLimits

0x28ba,	// (0x00049ef9) bg_button_pane_cp12

0x28cf,	// (0x00049f0e) list_single_cmail_header_detail_pane_g3_ParamLimits

0x28cf,	// (0x00049f0e) list_single_cmail_header_detail_pane_g3

0x2918,	// (0x00049f57) list_single_cmail_header_detail_pane_t2_ParamLimits

0x2918,	// (0x00049f57) list_single_cmail_header_detail_pane_t2

0x0001,

0xfcc2,	// (0x00057301) list_single_cmail_header_detail_pane_t_ParamLimits

0xfcc2,	// (0x00057301) list_single_cmail_header_detail_pane_t

0x2a25,	// (0x0004a064) phacti_term_pane_t2_ParamLimits

0x2a25,	// (0x0004a064) phacti_term_pane_t2

0x0001,

0xfccc,	// (0x0005730b) phacti_term_pane_t_ParamLimits

0xfccc,	// (0x0005730b) phacti_term_pane_t

0x2cd9,	// (0x0004a318) aid_size_list_single_double

0xbb28,	// (0x00053167) popup_ezdial_listscroll_window

0xbb4c,	// (0x0005318b) popup_number_entry_window_cp01

0xcfd9,	// (0x00054618) bg_popup_call_pane_cp09

0x2ce5,	// (0x0004a324) ezdial_list_pane

0x2ced,	// (0x0004a32c) scroll_pane_cp23

0xdad3,	// (0x00055112) bg_button_pane_cp028_ParamLimits

0xdad3,	// (0x00055112) bg_button_pane_cp028

0xbb5a,	// (0x00053199) cmail_ddmenu_btn01_pane_g1_ParamLimits

0xbb5a,	// (0x00053199) cmail_ddmenu_btn01_pane_g1

0xbb6a,	// (0x000531a9) cmail_ddmenu_btn01_pane_g2_ParamLimits

0xbb6a,	// (0x000531a9) cmail_ddmenu_btn01_pane_g2

0x0001,

0xfd44,	// (0x00057383) cmail_ddmenu_btn01_pane_g_ParamLimits

0xfd44,	// (0x00057383) cmail_ddmenu_btn01_pane_g

0x2cf5,	// (0x0004a334) cmail_ddmenu_btn01_pane_t1_ParamLimits

0x2cf5,	// (0x0004a334) cmail_ddmenu_btn01_pane_t1

0xed6f,	// (0x000563ae) bg_button_pane_cp029_ParamLimits

0xed6f,	// (0x000563ae) bg_button_pane_cp029

0xbb6a,	// (0x000531a9) cmail_ddmenu_btn02_pane_g1_ParamLimits

0xbb6a,	// (0x000531a9) cmail_ddmenu_btn02_pane_g1

0xbb82,	// (0x000531c1) cmail_ddmenu_btn02_pane_t1_ParamLimits

0xbb82,	// (0x000531c1) cmail_ddmenu_btn02_pane_t1

0x4ee4,	// (0x0004c523) bg_button_pane_cp031_ParamLimits

0x4ee4,	// (0x0004c523) bg_button_pane_cp031

0xbb6a,	// (0x000531a9) cmail_ddmenu_btn03_pane_g1_ParamLimits

0xbb6a,	// (0x000531a9) cmail_ddmenu_btn03_pane_g1

0xbb82,	// (0x000531c1) cmail_ddmenu_btn03_pane_t1_ParamLimits

0xbb82,	// (0x000531c1) cmail_ddmenu_btn03_pane_t1

0x8f04,	// (0x00050543) cell_dialer2_keypad_pane_t1_ParamLimits

0x8f1e,	// (0x0005055d) cell_dialer2_keypad_pane_t1_copy1_ParamLimits

0x8f1e,	// (0x0005055d) cell_dialer2_keypad_pane_t1_copy1

0xacda,	// (0x00052319) ncimui_group_button_pane

0xcd5c,	// (0x0005439b) main_sp_fs_calendar_pane_ParamLimits

0xb761,	// (0x00052da0) list_single_cmail_header_caption_pane_ParamLimits

0x2a70,	// (0x0004a0af) aid_recal_txt_sm_pane

0x45ec,	// (0x0004bc2b) mian_recal_day_pane

0x2ab2,	// (0x0004a0f1) popup_sp_fs_cale_preview_window_ParamLimits

0x2d0a,	// (0x0004a349) list_recal_day_pane

0x2d4c,	// (0x0004a38b) list_single_recal_day_pane_ParamLimits

0x2d4c,	// (0x0004a38b) list_single_recal_day_pane

0x2d5e,	// (0x0004a39d) list_single_recal_day_pane_g1_ParamLimits

0x2d5e,	// (0x0004a39d) list_single_recal_day_pane_g1

0x2d6a,	// (0x0004a3a9) list_single_recal_day_pane_g2_ParamLimits

0x2d6a,	// (0x0004a3a9) list_single_recal_day_pane_g2

0x2d76,	// (0x0004a3b5) list_single_recal_day_pane_g3_ParamLimits

0x2d76,	// (0x0004a3b5) list_single_recal_day_pane_g3

0xbba6,	// (0x000531e5) list_single_recal_day_pane_g4_ParamLimits

0xbba6,	// (0x000531e5) list_single_recal_day_pane_g4

0x2d82,	// (0x0004a3c1) list_single_recal_day_pane_g5_ParamLimits

0x2d82,	// (0x0004a3c1) list_single_recal_day_pane_g5

0x2d8e,	// (0x0004a3cd) list_single_recal_day_pane_g6_ParamLimits

0x2d8e,	// (0x0004a3cd) list_single_recal_day_pane_g6

0x0004,

0xfd53,	// (0x00057392) list_single_recal_day_pane_g_ParamLimits

0xfd53,	// (0x00057392) list_single_recal_day_pane_g

0x2da2,	// (0x0004a3e1) list_single_recal_day_pane_t1

0x2db4,	// (0x0004a3f3) list_single_recal_day_pane_t2

0x0001,

0xfd5e,	// (0x0005739d) list_single_recal_day_pane_t

0xbbbe,	// (0x000531fd) ncimui_query_button_pane_ParamLimits

0xbbbe,	// (0x000531fd) ncimui_query_button_pane

0xbbce,	// (0x0005320d) ncimui_query_button_pane_t1_ParamLimits

0xbbce,	// (0x0005320d) ncimui_query_button_pane_t1

0x2dc6,	// (0x0004a405) ncimui_query_button_pane_t2_ParamLimits

0x2dc6,	// (0x0004a405) ncimui_query_button_pane_t2

0x0001,

0xfd63,	// (0x000573a2) ncimui_query_button_pane_t_ParamLimits

0xfd63,	// (0x000573a2) ncimui_query_button_pane_t

0xbbe1,	// (0x00053220) query_button_pane_ParamLimits

0xbbe1,	// (0x00053220) query_button_pane

0x45ec,	// (0x0004bc2b) bg_button_pane_cp0028

0x2dd9,	// (0x0004a418) query_button_pane_t1

0x7a31,	// (0x0004f070) main_tport_pane_ParamLimits

0xb643,	// (0x00052c82) bg_popup_window_pane_cp01_ParamLimits

0xb643,	// (0x00052c82) bg_popup_window_pane_cp01

0xb651,	// (0x00052c90) heading_pane_cp08_ParamLimits

0xb651,	// (0x00052c90) heading_pane_cp08

0xb65f,	// (0x00052c9e) heading_pane_cp07_ParamLimits

0xb65f,	// (0x00052c9e) heading_pane_cp07

0xb6ce,	// (0x00052d0d) cell_tport_appsw_pane_g2

0x0002,

0xfcaf,	// (0x000572ee) cell_tport_appsw_pane_g

0x08e9,	// (0x00047f28) input_candi_list_open_g1

0xd3f7,	// (0x00054a36) list_cale_time_pane_g6_ParamLimits

0xd3f7,	// (0x00054a36) list_cale_time_pane_g6

0x7f2b,	// (0x0004f56a) aid_size_touch_calib_1_ParamLimits

0x7f2b,	// (0x0004f56a) aid_size_touch_calib_1

0x7f37,	// (0x0004f576) aid_size_touch_calib_2_ParamLimits

0x7f37,	// (0x0004f576) aid_size_touch_calib_2

0x7f45,	// (0x0004f584) aid_size_touch_calib_3_ParamLimits

0x7f45,	// (0x0004f584) aid_size_touch_calib_3

0x7f55,	// (0x0004f594) aid_size_touch_calib_4_ParamLimits

0x7f55,	// (0x0004f594) aid_size_touch_calib_4

0x7f63,	// (0x0004f5a2) main_touch_calib_button_group_pane_ParamLimits

0x7f63,	// (0x0004f5a2) main_touch_calib_button_group_pane

0x7f71,	// (0x0004f5b0) main_touch_calib_pane_g1_ParamLimits

0x7f7d,	// (0x0004f5bc) main_touch_calib_pane_g2_ParamLimits

0x7f89,	// (0x0004f5c8) main_touch_calib_pane_g3_ParamLimits

0x7f95,	// (0x0004f5d4) main_touch_calib_pane_g4_ParamLimits

0xf6f1,	// (0x00056d30) main_touch_calib_pane_g_ParamLimits

0x7fa1,	// (0x0004f5e0) main_touch_calib_pane_t1_ParamLimits

0x7fba,	// (0x0004f5f9) main_touch_calib_pane_t2_ParamLimits

0x7fd3,	// (0x0004f612) main_touch_calib_pane_t3_ParamLimits

0x7fe9,	// (0x0004f628) main_touch_calib_pane_t4_ParamLimits

0x7fff,	// (0x0004f63e) main_touch_calib_pane_t5_ParamLimits

0xf6fa,	// (0x00056d39) main_touch_calib_pane_t_ParamLimits

0x0fab,	// (0x000485ea) list_single_fp_cale_pane_g3_ParamLimits

0x0fab,	// (0x000485ea) list_single_fp_cale_pane_g3

0x7a09,	// (0x0004f048) bg_button_pane_cp012_ParamLimits

0x7a09,	// (0x0004f048) bg_vkb2_func_pane_cp03_ParamLimits

0x9dde,	// (0x0005141d) cell_vitu2_function_top_pane_g1_ParamLimits

0x7a09,	// (0x0004f048) bg_vkb2_func_pane_cp04_ParamLimits

0xac62,	// (0x000522a1) main_ncimui_button_group_pane_ParamLimits

0xac62,	// (0x000522a1) main_ncimui_button_group_pane

0xacc8,	// (0x00052307) main_ncimui_pane_t3_ParamLimits

0xacc8,	// (0x00052307) main_ncimui_pane_t3

0x29d3,	// (0x0004a012) phacti_button_group_pane

0x2cd9,	// (0x0004a318) aid_size_list_single_double_ParamLimits

0xbb28,	// (0x00053167) popup_ezdial_listscroll_window_ParamLimits

0xbb4c,	// (0x0005318b) popup_number_entry_window_cp01_ParamLimits

0xbbee,	// (0x0005322d) phacti_button_pane_ParamLimits

0xbbee,	// (0x0005322d) phacti_button_pane

0x45ec,	// (0x0004bc2b) bg_button_pane_cp14

0x2de7,	// (0x0004a426) phacti_button_pane_t1

0xbbff,	// (0x0005323e) main_touch_calib_button_pane_ParamLimits

0xbbff,	// (0x0005323e) main_touch_calib_button_pane

0xce27,	// (0x00054466) bg_button_pane_cp18_ParamLimits

0xce27,	// (0x00054466) bg_button_pane_cp18

0x2df5,	// (0x0004a434) main_touch_calib_button_pane_t1_ParamLimits

0x2df5,	// (0x0004a434) main_touch_calib_button_pane_t1

0x2e0b,	// (0x0004a44a) main_touch_calib_button_pane_t2_ParamLimits

0x2e0b,	// (0x0004a44a) main_touch_calib_button_pane_t2

0x0001,

0xfd68,	// (0x000573a7) main_touch_calib_button_pane_t_ParamLimits

0xfd68,	// (0x000573a7) main_touch_calib_button_pane_t

0x45ec,	// (0x0004bc2b) cell_ncimui_button_pane

0x45ec,	// (0x0004bc2b) bg_button_pane_cp032

0x2e29,	// (0x0004a468) cell_ncimui_button_pane_t1

0x8f7a,	// (0x000505b9) image3_infobar_pane_ParamLimits

0x8f7a,	// (0x000505b9) image3_infobar_pane

0xb085,	// (0x000526c4) fs_bigclock_status_pane_ParamLimits

0xb085,	// (0x000526c4) fs_bigclock_status_pane

0xb092,	// (0x000526d1) main_fs_bigclock_clock_pane_ParamLimits

0xb092,	// (0x000526d1) main_fs_bigclock_clock_pane

0xb0a6,	// (0x000526e5) main_fs_bigclock_indi_pane_ParamLimits

0xb0a6,	// (0x000526e5) main_fs_bigclock_indi_pane

0xb0ce,	// (0x0005270d) main_fs_bigclock_swipe_pane_ParamLimits

0xb0ce,	// (0x0005270d) main_fs_bigclock_swipe_pane

0x45ec,	// (0x0004bc2b) main_fs_clock_dumped_data

0x239c,	// (0x000499db) list_single_fs_bigclock_indicator_pane_g1_ParamLimits

0x239c,	// (0x000499db) list_single_fs_bigclock_indicator_pane_g1

0x23b8,	// (0x000499f7) list_single_fs_bigclock_indicator_pane_g2_ParamLimits

0x23b8,	// (0x000499f7) list_single_fs_bigclock_indicator_pane_g2

0x23d2,	// (0x00049a11) list_single_fs_bigclock_indicator_pane_g3_ParamLimits

0x23d2,	// (0x00049a11) list_single_fs_bigclock_indicator_pane_g3

0x23ec,	// (0x00049a2b) list_single_fs_bigclock_indicator_pane_g4_ParamLimits

0x23ec,	// (0x00049a2b) list_single_fs_bigclock_indicator_pane_g4

0x0004,

0xfc09,	// (0x00057248) list_single_fs_bigclock_indicator_pane_g_ParamLimits

0xfc09,	// (0x00057248) list_single_fs_bigclock_indicator_pane_g

0x2417,	// (0x00049a56) list_single_fs_bigclock_indicator_pane_t1_ParamLimits

0x2417,	// (0x00049a56) list_single_fs_bigclock_indicator_pane_t1

0x243f,	// (0x00049a7e) list_single_fs_bigclock_indicator_pane_t2_ParamLimits

0x243f,	// (0x00049a7e) list_single_fs_bigclock_indicator_pane_t2

0x2467,	// (0x00049aa6) list_single_fs_bigclock_indicator_pane_t3_ParamLimits

0x2467,	// (0x00049aa6) list_single_fs_bigclock_indicator_pane_t3

0x248f,	// (0x00049ace) list_single_fs_bigclock_indicator_pane_t4_ParamLimits

0x248f,	// (0x00049ace) list_single_fs_bigclock_indicator_pane_t4

0x0004,

0xfc14,	// (0x00057253) list_single_fs_bigclock_indicator_pane_t_ParamLimits

0xfc14,	// (0x00057253) list_single_fs_bigclock_indicator_pane_t

0x2e37,	// (0x0004a476) image3_infobar_fav_pane_ParamLimits

0x2e37,	// (0x0004a476) image3_infobar_fav_pane

0x2e47,	// (0x0004a486) image3_infobar_loc_pane_ParamLimits

0x2e47,	// (0x0004a486) image3_infobar_loc_pane

0x2e5b,	// (0x0004a49a) image3_infobar_time_pane_ParamLimits

0x2e5b,	// (0x0004a49a) image3_infobar_time_pane

0xd00f,	// (0x0005464e) image3_infobar_time_pane_g1

0x2e6b,	// (0x0004a4aa) image3_infobar_time_pane_t1

0xd00f,	// (0x0005464e) image3_infobar_loc_pane_g1

0x2e79,	// (0x0004a4b8) image3_infobar_loc_pane_g2

0x0001,

0xfd6d,	// (0x000573ac) image3_infobar_loc_pane_g

0x2e81,	// (0x0004a4c0) image3_infobar_loc_pane_t1

0xd00f,	// (0x0005464e) image3_infobar_fav_pane_g1

0x2e8f,	// (0x0004a4ce) image3_infobar_fav_pane_g2

0x0001,

0xfd72,	// (0x000573b1) image3_infobar_fav_pane_g

0x2e97,	// (0x0004a4d6) fs_bigclock_status_battery_pane

0x2ea0,	// (0x0004a4df) fs_bigclock_status_signal_pane

0x2ea9,	// (0x0004a4e8) fs_bigclock_status_title_pane

0x2eb2,	// (0x0004a4f1) fs_bigclock_status_signal_pane_g1

0x2ebb,	// (0x0004a4fa) fs_bigclock_status_signal_pane_g2

0x0001,

0xfd77,	// (0x000573b6) fs_bigclock_status_signal_pane_g

0x2ec3,	// (0x0004a502) fs_bigclock_status_battery_pane_g1

0x2ecc,	// (0x0004a50b) fs_bigclock_status_battery_pane_g2

0x0001,

0xfd7c,	// (0x000573bb) fs_bigclock_status_battery_pane_g

0x2ed4,	// (0x0004a513) fs_bigclock_status_title_pane_t1

0xbc0f,	// (0x0005324e) main_fs_bigclock_clock_pane_g1

0xbc0f,	// (0x0005324e) main_fs_bigclock_clock_pane_g2

0xbc1c,	// (0x0005325b) main_fs_bigclock_clock_pane_g3

0xbc1c,	// (0x0005325b) main_fs_bigclock_clock_pane_g4

0x0003,

0xfd81,	// (0x000573c0) main_fs_bigclock_clock_pane_g

0xbc28,	// (0x00053267) main_fs_bigclock_clock_pane_t1

0xbc3b,	// (0x0005327a) main_fs_bigclock_clock_pane_t2

0x0001,

0xfd8a,	// (0x000573c9) main_fs_bigclock_clock_pane_t

0x2ee2,	// (0x0004a521) list_single_fs_bigclock_indicator_pane_ParamLimits

0x2ee2,	// (0x0004a521) list_single_fs_bigclock_indicator_pane

0x2ef3,	// (0x0004a532) list_single_fs_bigclock_pane_ParamLimits

0x2ef3,	// (0x0004a532) list_single_fs_bigclock_pane

0x2f19,	// (0x0004a558) main_fs_bigclock_indicator_pane_t1

0x2f28,	// (0x0004a567) list_single_fs_bigclock_pane_g1

0x2f30,	// (0x0004a56f) list_single_fs_bigclock_pane_t1

0xd00f,	// (0x0005464e) main_fs_bigclock_swipe_pane_g1

0x2f73,	// (0x0004a5b2) main_fs_bigclock_swipe_pane_g2

0x0001,

0xfd9b,	// (0x000573da) main_fs_bigclock_swipe_pane_g

0x2f7b,	// (0x0004a5ba) main_fs_bigclock_swipe_pane_t1_ParamLimits

0x2f7b,	// (0x0004a5ba) main_fs_bigclock_swipe_pane_t1

0x6c27,	// (0x0004e266) call_type_pane_ParamLimits

0x45ec,	// (0x0004bc2b) main_btmg_pane

0x2baf,	// (0x0004a1ee) list_single_cale_mrui_row_pane_g2_ParamLimits

0x2baf,	// (0x0004a1ee) list_single_cale_mrui_row_pane_g2

0x0002,

0xfd0e,	// (0x0005734d) list_single_cale_mrui_row_pane_g_ParamLimits

0xfd0e,	// (0x0005734d) list_single_cale_mrui_row_pane_g

0x2d33,	// (0x0004a372) list_recal_vselct_arw_lo_pane

0x2d3b,	// (0x0004a37a) list_recal_vselct_arw_up_pane

0x2d43,	// (0x0004a382) list_recal_vselct_pane

0xbc92,	// (0x000532d1) btmg_button_pane

0xbc9e,	// (0x000532dd) main_btmg_pane_g1

0x45ec,	// (0x0004bc2b) bg_button_pane_cp044

0x2f98,	// (0x0004a5d7) btmg_button_pane_t1

0xed5b,	// (0x0005639a) aid_listscroll_gen

0xcd5c,	// (0x0005439b) main_cntbar_detail_pane

0x289c,	// (0x00049edb) list_cmail_folder_pane

0xf066,	// (0x000566a5) sp_fs_scroll_pane_cp03_ParamLimits

0xb761,	// (0x00052da0) list_single_fs_dyc_pane_cp01_ParamLimits

0xb761,	// (0x00052da0) list_single_fs_dyc_pane_cp01

0x2fa6,	// (0x0004a5e5) aid_size_cmail_indent

0x2faf,	// (0x0004a5ee) list_single_dyc_row_pane_cp01

0xbcc6,	// (0x00053305) cntbar_detail_list_pane_ParamLimits

0xbcc6,	// (0x00053305) cntbar_detail_list_pane

0xbd00,	// (0x0005333f) main_cntbar_detail_cont_pane_ParamLimits

0xbd00,	// (0x0005333f) main_cntbar_detail_cont_pane

0x6c1b,	// (0x0004e25a) scroll_pane_cp032_ParamLimits

0x6c1b,	// (0x0004e25a) scroll_pane_cp032

0xbd0c,	// (0x0005334b) cntbar_detail_list_event_pane_ParamLimits

0xbd0c,	// (0x0005334b) cntbar_detail_list_event_pane

0xbcd2,	// (0x00053311) cntbar_detail_list_shct_pane

0xd282,	// (0x000548c1) aid_list_gen

0x2fb8,	// (0x0004a5f7) aid_scroll

0x2fc1,	// (0x0004a600) aid_size_touch_scroll_bar

0xf072,	// (0x000566b1) aid_list_double

0xbd20,	// (0x0005335f) aid_list_single

0xbd29,	// (0x00053368) aid_list_single_lg

0x2fca,	// (0x0004a609) aid_list_z_g_a_sm

0x2fd2,	// (0x0004a611) aid_list_z_g_d

0x2fda,	// (0x0004a619) aid_txt_z_prm

0x2fe8,	// (0x0004a627) aid_txt_z_prm_cp01

0x2ff6,	// (0x0004a635) aid_txt_z_sec

0xbd32,	// (0x00053371) main_cntbar_detail_cont_pane_g1_ParamLimits

0xbd32,	// (0x00053371) main_cntbar_detail_cont_pane_g1

0xbd3f,	// (0x0005337e) main_cntbar_detail_cont_pane_g2_ParamLimits

0xbd3f,	// (0x0005337e) main_cntbar_detail_cont_pane_g2

0x0001,

0xfda0,	// (0x000573df) main_cntbar_detail_cont_pane_g_ParamLimits

0xfda0,	// (0x000573df) main_cntbar_detail_cont_pane_g

0x3004,	// (0x0004a643) main_cntbar_detail_cont_pane_t1

0x3012,	// (0x0004a651) main_cntbar_detail_cont_pane_t2

0x3020,	// (0x0004a65f) main_cntbar_detail_cont_pane_t3

0x0002,

0xfda5,	// (0x000573e4) main_cntbar_detail_cont_pane_t

0xbd4b,	// (0x0005338a) cell_cntbar_detail_list_shct_pane_ParamLimits

0xbd4b,	// (0x0005338a) cell_cntbar_detail_list_shct_pane

0x302e,	// (0x0004a66d) cntbar_detail_list_shct_pane_g1

0x3037,	// (0x0004a676) cntbar_detail_list_shct_pane_g2

0x0001,

0xfdac,	// (0x000573eb) cntbar_detail_list_shct_pane_g

0xbd5f,	// (0x0005339e) cntbar_detail_list_event_pane_g1_ParamLimits

0xbd5f,	// (0x0005339e) cntbar_detail_list_event_pane_g1

0xbd6b,	// (0x000533aa) cntbar_detail_list_event_pane_g2_ParamLimits

0xbd6b,	// (0x000533aa) cntbar_detail_list_event_pane_g2

0x0005,

0xfdb1,	// (0x000573f0) cntbar_detail_list_event_pane_g_ParamLimits

0xfdb1,	// (0x000573f0) cntbar_detail_list_event_pane_g

0xbdd7,	// (0x00053416) cntbar_detail_list_event_pane_t1_ParamLimits

0xbdd7,	// (0x00053416) cntbar_detail_list_event_pane_t1

0xbdec,	// (0x0005342b) cntbar_detail_list_event_pane_t2_ParamLimits

0xbdec,	// (0x0005342b) cntbar_detail_list_event_pane_t2

0x0002,

0xfdbe,	// (0x000573fd) cntbar_detail_list_event_pane_t_ParamLimits

0xfdbe,	// (0x000573fd) cntbar_detail_list_event_pane_t

0xd00f,	// (0x0005464e) cell_cntbar_detail_list_shct_pane_g1

0xd9d4,	// (0x00055013) navi_pane_mv_g3

0xcd5c,	// (0x0005439b) main_cntbar_detail_pane_ParamLimits

0x45ec,	// (0x0004bc2b) main_notif_wgt_pane

0x8c04,	// (0x00050243) aid_tch_main_mp4_pane_g4

0x8e63,	// (0x000504a2) popup_slider_window_cp02

0x2d29,	// (0x0004a368) list_recal_day_event_pane

0xbca6,	// (0x000532e5) cntbar_detail_btn_pane_ParamLimits

0xbca6,	// (0x000532e5) cntbar_detail_btn_pane

0xbcb6,	// (0x000532f5) cntbar_detail_btn_pane_cp01_ParamLimits

0xbcb6,	// (0x000532f5) cntbar_detail_btn_pane_cp01

0xbcd2,	// (0x00053311) cntbar_detail_list_shct_pane_ParamLimits

0xbcde,	// (0x0005331d) cntbar_detail_pane_g1_ParamLimits

0xbcde,	// (0x0005331d) cntbar_detail_pane_g1

0xbcea,	// (0x00053329) cntbar_detail_pane_t1_ParamLimits

0xbcea,	// (0x00053329) cntbar_detail_pane_t1

0xbd77,	// (0x000533b6) cntbar_detail_list_event_pane_g3_ParamLimits

0xbd77,	// (0x000533b6) cntbar_detail_list_event_pane_g3

0xbd8f,	// (0x000533ce) cntbar_detail_list_event_pane_g4_ParamLimits

0xbd8f,	// (0x000533ce) cntbar_detail_list_event_pane_g4

0xbda7,	// (0x000533e6) cntbar_detail_list_event_pane_g5_ParamLimits

0xbda7,	// (0x000533e6) cntbar_detail_list_event_pane_g5

0xbdbf,	// (0x000533fe) cntbar_detail_list_event_pane_g6_ParamLimits

0xbdbf,	// (0x000533fe) cntbar_detail_list_event_pane_g6

0xbe01,	// (0x00053440) cntbar_detail_list_event_pane_t3_ParamLimits

0xbe01,	// (0x00053440) cntbar_detail_list_event_pane_t3

0xbe13,	// (0x00053452) popup_notif_wgt_window_ParamLimits

0xbe13,	// (0x00053452) popup_notif_wgt_window

0xbe23,	// (0x00053462) popup_submenu_window_cp01_ParamLimits

0xbe23,	// (0x00053462) popup_submenu_window_cp01

0xcfd9,	// (0x00054618) bg_popup_window_pane_cp10

0x3040,	// (0x0004a67f) listscroll_notif_wgt_pane

0x3052,	// (0x0004a691) list_notif_wgt_window

0x305b,	// (0x0004a69a) scroll_pane_cp033

0xbe31,	// (0x00053470) list_notif_wgt_row_pane_ParamLimits

0xbe31,	// (0x00053470) list_notif_wgt_row_pane

0x3064,	// (0x0004a6a3) aid_size_list_notif_wgt_del

0x3071,	// (0x0004a6b0) list_notif_wgt_row_pane_g1

0x307d,	// (0x0004a6bc) list_notif_wgt_row_pane_g2

0x308c,	// (0x0004a6cb) list_notif_wgt_row_pane_g3

0x0002,

0xfdc5,	// (0x00057404) list_notif_wgt_row_pane_g

0x3099,	// (0x0004a6d8) list_notif_wgt_row_pane_t1

0x30af,	// (0x0004a6ee) list_notif_wgt_row_pane_t2

0x30c1,	// (0x0004a700) list_notif_wgt_row_pane_t3

0x0002,

0xfdcc,	// (0x0005740b) list_notif_wgt_row_pane_t

0x1801,	// (0x00048e40) list_recal_day_event_pane_g1

0x30d3,	// (0x0004a712) list_recal_day_event_pane_t1

0x45ec,	// (0x0004bc2b) bg_button_pane_cp045

0xbe43,	// (0x00053482) cntbar_detail_btn_pane_t1

0xed6f,	// (0x000563ae) main_callh_pane_ParamLimits

0xed6f,	// (0x000563ae) main_callh_pane

0x45ec,	// (0x0004bc2b) main_coverflow0_pane

0x45ec,	// (0x0004bc2b) main_wgtman_pane

0xb0e6,	// (0x00052725) main_fs_bigclock_unlock_btn_pane_ParamLimits

0xb0e6,	// (0x00052725) main_fs_bigclock_unlock_btn_pane

0xb6c6,	// (0x00052d05) bg_button_pane_cp16

0xb6d6,	// (0x00052d15) cell_tport_appsw_pane_g3

0xbe51,	// (0x00053490) cf0_flow_pane_ParamLimits

0xbe51,	// (0x00053490) cf0_flow_pane

0x30e2,	// (0x0004a721) listscroll_cf0_pane

0x30ed,	// (0x0004a72c) main_cf0_pane_g1

0xbe60,	// (0x0005349f) main_cf0_pane_t1_ParamLimits

0xbe60,	// (0x0005349f) main_cf0_pane_t1

0xbe74,	// (0x000534b3) main_cf0_pane_t2_ParamLimits

0xbe74,	// (0x000534b3) main_cf0_pane_t2

0x0001,

0xfdd8,	// (0x00057417) main_cf0_pane_t_ParamLimits

0xfdd8,	// (0x00057417) main_cf0_pane_t

0x30ff,	// (0x0004a73e) scroll_pane_cp11

0xbe88,	// (0x000534c7) cf0_flow_pane_g1

0xbe90,	// (0x000534cf) cf0_flow_pane_g2

0x0001,

0xfddd,	// (0x0005741c) cf0_flow_pane_g

0xbe98,	// (0x000534d7) cf0_flow_pane_t1

0x45ec,	// (0x0004bc2b) main_call6_pane

0x45ec,	// (0x0004bc2b) main_calllock_pane

0xbea6,	// (0x000534e5) call6_btn_grp_pane_ParamLimits

0xbea6,	// (0x000534e5) call6_btn_grp_pane

0xbeb5,	// (0x000534f4) call6_pane_g1_ParamLimits

0xbeb5,	// (0x000534f4) call6_pane_g1

0xbec5,	// (0x00053504) popup_call6_1st_window_ParamLimits

0xbec5,	// (0x00053504) popup_call6_1st_window

0xbed3,	// (0x00053512) popup_call6_2nd_window_ParamLimits

0xbed3,	// (0x00053512) popup_call6_2nd_window

0xbee1,	// (0x00053520) cell_call6_btn_pane_ParamLimits

0xbee1,	// (0x00053520) cell_call6_btn_pane

0xcfd9,	// (0x00054618) bg_popup_call2_in_pane_cp03

0x310a,	// (0x0004a749) popup_call6_1st_window_g1

0x3112,	// (0x0004a751) popup_call6_1st_window_g2

0x311a,	// (0x0004a759) popup_call6_1st_window_g3

0x0002,

0xfde2,	// (0x00057421) popup_call6_1st_window_g

0x3122,	// (0x0004a761) popup_call6_1st_window_t1

0x3131,	// (0x0004a770) popup_call6_1st_window_t2

0x313f,	// (0x0004a77e) popup_call6_1st_window_t3

0x0002,

0xfde9,	// (0x00057428) popup_call6_1st_window_t

0xcfd9,	// (0x00054618) bg_popup_call2_in_pane_cp04

0x314d,	// (0x0004a78c) popup_call6_2nd_window_g1

0x3155,	// (0x0004a794) popup_call6_2nd_window_g2

0x315d,	// (0x0004a79c) popup_call6_2nd_window_g3

0x0002,

0xfdf0,	// (0x0005742f) popup_call6_2nd_window_g

0x3165,	// (0x0004a7a4) popup_call6_2nd_window_t1

0x48c0,	// (0x0004beff) bg_button_pane_cp15

0xbef0,	// (0x0005352f) cell_call6_btn_pane_g1

0xbef9,	// (0x00053538) cell_call6_btn_pane_t1

0xbf08,	// (0x00053547) listscroll_wgtman_pane_ParamLimits

0xbf08,	// (0x00053547) listscroll_wgtman_pane

0xbf24,	// (0x00053563) wgtman_btn_pane_ParamLimits

0xbf24,	// (0x00053563) wgtman_btn_pane

0xd7e8,	// (0x00054e27) aid_scroll_copy1

0x317d,	// (0x0004a7bc) list_wgtman_pane

0xbf59,	// (0x00053598) wgtman_btn_pane_g1_ParamLimits

0xbf59,	// (0x00053598) wgtman_btn_pane_g1

0xbf81,	// (0x000535c0) wgtman_btn_pane_t1_ParamLimits

0xbf81,	// (0x000535c0) wgtman_btn_pane_t1

0x3187,	// (0x0004a7c6) wgtman_btn_pane_t2_ParamLimits

0x3187,	// (0x0004a7c6) wgtman_btn_pane_t2

0x0001,

0xfdf7,	// (0x00057436) wgtman_btn_pane_t_ParamLimits

0xfdf7,	// (0x00057436) wgtman_btn_pane_t

0xbfb8,	// (0x000535f7) listrow_wgtman_pane_ParamLimits

0xbfb8,	// (0x000535f7) listrow_wgtman_pane

0xbfd4,	// (0x00053613) listrow_wgtman_pane_g1

0xbfe1,	// (0x00053620) listrow_wgtman_pane_g2

0x0001,

0xfdfc,	// (0x0005743b) listrow_wgtman_pane_g

0xbfff,	// (0x0005363e) listrow_wgtman_pane_t1

0xc017,	// (0x00053656) listrow_wgtman_pane_t2

0x0001,

0xfe01,	// (0x00057440) listrow_wgtman_pane_t

0xc03d,	// (0x0005367c) wait_bar_pane_cp09

0x319e,	// (0x0004a7dd) main_calllock_btn_pane

0x31a8,	// (0x0004a7e7) main_calllock_pane_g1

0x45ec,	// (0x0004bc2b) bg_button_pane_cp17

0x3174,	// (0x0004a7b3) main_calllock_btn_pane_g1

0x31b0,	// (0x0004a7ef) main_calllock_btn_pane_t1

0x45ec,	// (0x0004bc2b) main_dialer3_pane

0x45ec,	// (0x0004bc2b) main_fmrd2_pane

0xd00f,	// (0x0005464e) main_fs_bigclock_unlock_btn_pane_g1

0xc057,	// (0x00053696) main_fs_bigclock_unlock_btn_pane_t1

0xc065,	// (0x000536a4) area_fmrd2_info_pane_ParamLimits

0xc065,	// (0x000536a4) area_fmrd2_info_pane

0xc073,	// (0x000536b2) area_fmrd2_visual_pane_ParamLimits

0xc073,	// (0x000536b2) area_fmrd2_visual_pane

0xc081,	// (0x000536c0) fmrd2_indi_pane_ParamLimits

0xc081,	// (0x000536c0) fmrd2_indi_pane

0xc08e,	// (0x000536cd) area_fmrd2_visual_pane_g1

0xc096,	// (0x000536d5) area_fmrd2_visual_pane_t1

0xc0a6,	// (0x000536e5) area_fmrd2_visual_pane_t2

0xc0b6,	// (0x000536f5) area_fmrd2_visual_pane_t3

0x0002,

0xfe0b,	// (0x0005744a) area_fmrd2_visual_pane_t

0xc0c6,	// (0x00053705) area_fmrd2_info_pane_g1

0xc0ce,	// (0x0005370d) area_fmrd2_info_pane_t1

0xc0de,	// (0x0005371d) area_fmrd2_info_pane_t2

0xc0ee,	// (0x0005372d) area_fmrd2_info_pane_t3

0xc0fe,	// (0x0005373d) area_fmrd2_info_pane_t4

0x0003,

0xfe12,	// (0x00057451) area_fmrd2_info_pane_t

0xc10c,	// (0x0005374b) fmrd2_indi_pane_t1

0xc11c,	// (0x0005375b) fmrd2_indi_pane_t2

0xc12c,	// (0x0005376b) fmrd2_indi_pane_t3

0x0002,

0xfe1b,	// (0x0005745a) fmrd2_indi_pane_t

0x23fb,	// (0x00049a3a) list_single_fs_bigclock_indicator_pane_g5_ParamLimits

0x23fb,	// (0x00049a3a) list_single_fs_bigclock_indicator_pane_g5

0x24ac,	// (0x00049aeb) list_single_fs_bigclock_indicator_pane_t5_ParamLimits

0x24ac,	// (0x00049aeb) list_single_fs_bigclock_indicator_pane_t5

0xb879,	// (0x00052eb8) aid_cell_bcale_month_pane_ParamLimits

0xb879,	// (0x00052eb8) aid_cell_bcale_month_pane

0xb897,	// (0x00052ed6) bcale_month_pane_ParamLimits

0xb897,	// (0x00052ed6) bcale_month_pane

0xb8b5,	// (0x00052ef4) bcale_preview_pane_ParamLimits

0xb8b5,	// (0x00052ef4) bcale_preview_pane

0x2f30,	// (0x0004a56f) list_single_fs_bigclock_pane_t1_ParamLimits

0x2f4f,	// (0x0004a58e) list_single_fs_bigclock_pane_t2_ParamLimits

0x2f4f,	// (0x0004a58e) list_single_fs_bigclock_pane_t2

0x0001,

0xfd96,	// (0x000573d5) list_single_fs_bigclock_pane_t_ParamLimits

0xfd96,	// (0x000573d5) list_single_fs_bigclock_pane_t

0xc04f,	// (0x0005368e) main_fs_bigclock_unlock_btn_pane_g2

0x0001,

0xfe06,	// (0x00057445) main_fs_bigclock_unlock_btn_pane_g

0xc13a,	// (0x00053779) aid_dia3_key_size_ParamLimits

0xc13a,	// (0x00053779) aid_dia3_key_size

0xc146,	// (0x00053785) aid_dia3_listrow_size_ParamLimits

0xc146,	// (0x00053785) aid_dia3_listrow_size

0xc156,	// (0x00053795) dia3_keypad_fun_pane_ParamLimits

0xc156,	// (0x00053795) dia3_keypad_fun_pane

0xc168,	// (0x000537a7) dia3_keypad_num_pane_ParamLimits

0xc168,	// (0x000537a7) dia3_keypad_num_pane

0xc17a,	// (0x000537b9) dia3_listscroll_pane_ParamLimits

0xc17a,	// (0x000537b9) dia3_listscroll_pane

0xc188,	// (0x000537c7) dia3_numentry_pane_ParamLimits

0xc188,	// (0x000537c7) dia3_numentry_pane

0x31bf,	// (0x0004a7fe) dia3_list_pane

0x31ca,	// (0x0004a809) scroll_pane_cp12

0x45ec,	// (0x0004bc2b) bg_dia3_numentry_pane

0xc196,	// (0x000537d5) dia3_numentry_pane_t1

0xc1a5,	// (0x000537e4) cell_dia3_key_num_pane

0xc1ad,	// (0x000537ec) cell_dia3_key0_fun_pane_ParamLimits

0xc1ad,	// (0x000537ec) cell_dia3_key0_fun_pane

0xc1ba,	// (0x000537f9) cell_dia3_key1_fun_pane_ParamLimits

0xc1ba,	// (0x000537f9) cell_dia3_key1_fun_pane

0xc1c7,	// (0x00053806) dia3_listrow_pane

0x214e,	// (0x0004978d) bg_dia3_numentry_pane_g1

0x45ec,	// (0x0004bc2b) bg_button_pane_cp21

0x31d5,	// (0x0004a814) cell_dia3_key_num_pane_t1

0x31e3,	// (0x0004a822) cell_dia3_key_num_pane_t2

0x31f2,	// (0x0004a831) cell_dia3_key_num_pane_t3

0x3201,	// (0x0004a840) cell_dia3_key_num_pane_t4

0x0003,

0xfe22,	// (0x00057461) cell_dia3_key_num_pane_t

0x45ec,	// (0x0004bc2b) bg_button_pane_cp19

0xc1d4,	// (0x00053813) cell_dia3_key0_fun_pane_g1

0x45ec,	// (0x0004bc2b) bg_button_pane_cp20

0xc1dc,	// (0x0005381b) cell_dia3_key1_fun_pane_g1

0xc1e4,	// (0x00053823) area_left_week_number_pane

0xc1f7,	// (0x00053836) area_top_day_name_pane

0xc205,	// (0x00053844) frame_month_view_pane

0x3210,	// (0x0004a84f) grid_month_view_pane

0xc21a,	// (0x00053859) cell_top_day_name_pane_ParamLimits

0xc21a,	// (0x00053859) cell_top_day_name_pane

0xc234,	// (0x00053873) cell_area_left_week_number_pane_ParamLimits

0xc234,	// (0x00053873) cell_area_left_week_number_pane

0xc257,	// (0x00053896) cell_month_view_pane_ParamLimits

0xc257,	// (0x00053896) cell_month_view_pane

0x321e,	// (0x0004a85d) frm_month_g1

0xc283,	// (0x000538c2) frm_month_g2

0xc294,	// (0x000538d3) frm_month_g3

0xc2a5,	// (0x000538e4) frm_month_g4

0xc2b6,	// (0x000538f5) frm_month_g5

0xc2c9,	// (0x00053908) frm_month_g6

0xc2dc,	// (0x0005391b) frm_month_g7

0x322b,	// (0x0004a86a) frm_month_g8

0xc2ef,	// (0x0005392e) frm_month_g9

0xc2fc,	// (0x0005393b) frm_month_g10

0xc309,	// (0x00053948) frm_month_g11

0xc316,	// (0x00053955) frm_month_g12

0xc323,	// (0x00053962) frm_month_g13

0xc330,	// (0x0005396f) frm_month_g14

0xc33f,	// (0x0005397e) frm_month_g15

0xc34e,	// (0x0005398d) frm_month_g16

0x000f,

0xfe2b,	// (0x0005746a) frm_month_g

0xc35d,	// (0x0005399c) cell_top_day_name_pane_t1

0xc370,	// (0x000539af) cell_area_left_week_number_pane_g1

0xc37f,	// (0x000539be) cell_area_left_week_number_pane_t1

0xcdb5,	// (0x000543f4) cell_month_view_pane_g1

0xc395,	// (0x000539d4) cell_month_view_pane_t1

0x45ec,	// (0x0004bc2b) main_fps_pane

0x26c0,	// (0x00049cff) cmail_ddmenu_btn02_pane_cp1_ParamLimits

0x26c0,	// (0x00049cff) cmail_ddmenu_btn02_pane_cp1

0x26dc,	// (0x00049d1b) cmail_ddmenu_btn02_pane_cp2_ParamLimits

0x26dc,	// (0x00049d1b) cmail_ddmenu_btn02_pane_cp2

0xbb76,	// (0x000531b5) cmail_ddmenu_btn02_pane_g2_ParamLimits

0xbb76,	// (0x000531b5) cmail_ddmenu_btn02_pane_g2

0x0001,

0xfd49,	// (0x00057388) cmail_ddmenu_btn02_pane_g_ParamLimits

0xfd49,	// (0x00057388) cmail_ddmenu_btn02_pane_g

0xbb94,	// (0x000531d3) cmail_ddmenu_btn02_pane_t2_ParamLimits

0xbb94,	// (0x000531d3) cmail_ddmenu_btn02_pane_t2

0x0001,

0xfd4e,	// (0x0005738d) cmail_ddmenu_btn02_pane_t_ParamLimits

0xfd4e,	// (0x0005738d) cmail_ddmenu_btn02_pane_t

0xc3ab,	// (0x000539ea) fps_text_pane_ParamLimits

0xc3ab,	// (0x000539ea) fps_text_pane

0xc3b8,	// (0x000539f7) main_fps_pane_g1_ParamLimits

0xc3b8,	// (0x000539f7) main_fps_pane_g1

0xc3c6,	// (0x00053a05) wait_bar_pane_cp010_ParamLimits

0xc3c6,	// (0x00053a05) wait_bar_pane_cp010

0xc3d2,	// (0x00053a11) fps_text_pane_t1_ParamLimits

0xc3d2,	// (0x00053a11) fps_text_pane_t1

0x931a,	// (0x00050959) cam4_image_uncrop_pane_g1

0x9323,	// (0x00050962) cam4_image_uncrop_pane_g2

0x932c,	// (0x0005096b) cam4_image_uncrop_pane_g3

0x9335,	// (0x00050974) cam4_image_uncrop_pane_g4

0x0003,

0xf88d,	// (0x00056ecc) cam4_image_uncrop_pane_g

0xc1c7,	// (0x00053806) dia3_listrow_pane_ParamLimits

0x45ec,	// (0x0004bc2b) main_phob2_pane

0xb6a8,	// (0x00052ce7) cell_tport_appsw_pane_cp02_ParamLimits

0xb6a8,	// (0x00052ce7) cell_tport_appsw_pane_cp02

0xb6b7,	// (0x00052cf6) cell_tport_appsw_pane_cp03_ParamLimits

0xb6b7,	// (0x00052cf6) cell_tport_appsw_pane_cp03

0x45ec,	// (0x0004bc2b) phob2_contact_card_pane

0x45ec,	// (0x0004bc2b) phob2_listscroll_pane

0xc3eb,	// (0x00053a2a) phob2_list_pane

0xc3f3,	// (0x00053a32) scroll_pane_cp034

0xc3fb,	// (0x00053a3a) phob2_cc_data_pane_ParamLimits

0xc3fb,	// (0x00053a3a) phob2_cc_data_pane

0xc415,	// (0x00053a54) phob2_cc_listscroll_pane_ParamLimits

0xc415,	// (0x00053a54) phob2_cc_listscroll_pane

0xbfb8,	// (0x000535f7) list_double_large_graphic_phob2_pane_ParamLimits

0xbfb8,	// (0x000535f7) list_double_large_graphic_phob2_pane

0xc42f,	// (0x00053a6e) list_double_large_graphic_phob2_pane_g1_ParamLimits

0xc42f,	// (0x00053a6e) list_double_large_graphic_phob2_pane_g1

0xc43c,	// (0x00053a7b) list_double_large_graphic_phob2_pane_g2_ParamLimits

0xc43c,	// (0x00053a7b) list_double_large_graphic_phob2_pane_g2

0x0003,

0xfe4c,	// (0x0005748b) list_double_large_graphic_phob2_pane_g_ParamLimits

0xfe4c,	// (0x0005748b) list_double_large_graphic_phob2_pane_g

0xc462,	// (0x00053aa1) list_double_large_graphic_phob2_pane_t1_ParamLimits

0xc462,	// (0x00053aa1) list_double_large_graphic_phob2_pane_t1

0xc477,	// (0x00053ab6) list_double_large_graphic_phob2_pane_t2_ParamLimits

0xc477,	// (0x00053ab6) list_double_large_graphic_phob2_pane_t2

0x0001,

0xfe55,	// (0x00057494) list_double_large_graphic_phob2_pane_t_ParamLimits

0xfe55,	// (0x00057494) list_double_large_graphic_phob2_pane_t

0x45ec,	// (0x0004bc2b) list_highlight_pane_cp024

0xc48c,	// (0x00053acb) phob2_cc_button_pane

0xc494,	// (0x00053ad3) phob2_cc_data_pane_g1_ParamLimits

0xc494,	// (0x00053ad3) phob2_cc_data_pane_g1

0xc4a3,	// (0x00053ae2) phob2_cc_data_pane_g2_ParamLimits

0xc4a3,	// (0x00053ae2) phob2_cc_data_pane_g2

0x0001,

0xfe5a,	// (0x00057499) phob2_cc_data_pane_g_ParamLimits

0xfe5a,	// (0x00057499) phob2_cc_data_pane_g

0xc4b2,	// (0x00053af1) phob2_cc_data_pane_t1_ParamLimits

0xc4b2,	// (0x00053af1) phob2_cc_data_pane_t1

0xc4c7,	// (0x00053b06) phob2_cc_data_pane_t2_ParamLimits

0xc4c7,	// (0x00053b06) phob2_cc_data_pane_t2

0xc4dc,	// (0x00053b1b) phob2_cc_data_pane_t3_ParamLimits

0xc4dc,	// (0x00053b1b) phob2_cc_data_pane_t3

0x0002,

0xfe5f,	// (0x0005749e) phob2_cc_data_pane_t_ParamLimits

0xfe5f,	// (0x0005749e) phob2_cc_data_pane_t

0xc4f1,	// (0x00053b30) phob2_cc_list_pane_ParamLimits

0xc4f1,	// (0x00053b30) phob2_cc_list_pane

0x18aa,	// (0x00048ee9) scroll_pane_cp035_ParamLimits

0x18aa,	// (0x00048ee9) scroll_pane_cp035

0xcd5c,	// (0x0005439b) bg_button_pane_cp033

0xc4fd,	// (0x00053b3c) phob2_cc_button_pane_g1

0xc509,	// (0x00053b48) phob2_cc_button_pane_t1

0xc51e,	// (0x00053b5d) phob2_cc_button_pane_t2

0x0001,

0xfe66,	// (0x000574a5) phob2_cc_button_pane_t

0xc530,	// (0x00053b6f) list_double_large_graphic_phob2_cc_pane_ParamLimits

0xc530,	// (0x00053b6f) list_double_large_graphic_phob2_cc_pane

0xc5a4,	// (0x00053be3) list_double_large_graphic_phob2_cc_pane_g1_ParamLimits

0xc5a4,	// (0x00053be3) list_double_large_graphic_phob2_cc_pane_g1

0xc5b5,	// (0x00053bf4) list_double_large_graphic_phob2_cc_pane_g2_ParamLimits

0xc5b5,	// (0x00053bf4) list_double_large_graphic_phob2_cc_pane_g2

0xc5c1,	// (0x00053c00) list_double_large_graphic_phob2_cc_pane_g3_ParamLimits

0xc5c1,	// (0x00053c00) list_double_large_graphic_phob2_cc_pane_g3

0xc5cd,	// (0x00053c0c) list_double_large_graphic_phob2_cc_pane_g4_ParamLimits

0xc5cd,	// (0x00053c0c) list_double_large_graphic_phob2_cc_pane_g4

0xc5d9,	// (0x00053c18) list_double_large_graphic_phob2_cc_pane_g5_ParamLimits

0xc5d9,	// (0x00053c18) list_double_large_graphic_phob2_cc_pane_g5

0x0004,

0xfe6b,	// (0x000574aa) list_double_large_graphic_phob2_cc_pane_g_ParamLimits

0xfe6b,	// (0x000574aa) list_double_large_graphic_phob2_cc_pane_g

0xc5e5,	// (0x00053c24) list_double_large_graphic_phob2_cc_pane_t1_ParamLimits

0xc5e5,	// (0x00053c24) list_double_large_graphic_phob2_cc_pane_t1

0xc60e,	// (0x00053c4d) list_double_large_graphic_phob2_cc_pane_t2_ParamLimits

0xc60e,	// (0x00053c4d) list_double_large_graphic_phob2_cc_pane_t2

0x0001,

0xfe76,	// (0x000574b5) list_double_large_graphic_phob2_cc_pane_t_ParamLimits

0xfe76,	// (0x000574b5) list_double_large_graphic_phob2_cc_pane_t

0xc637,	// (0x00053c76) list_highlight_pane_cp025_ParamLimits

0xc637,	// (0x00053c76) list_highlight_pane_cp025

0xcd5c,	// (0x0005439b) bg_button_pane_cp033_ParamLimits

0xc4fd,	// (0x00053b3c) phob2_cc_button_pane_g1_ParamLimits

0xc509,	// (0x00053b48) phob2_cc_button_pane_t1_ParamLimits

0xc51e,	// (0x00053b5d) phob2_cc_button_pane_t2_ParamLimits

0xfe66,	// (0x000574a5) phob2_cc_button_pane_t_ParamLimits

0x48b4,	// (0x0004bef3) popup_wgtman_window

0x16bb,	// (0x00048cfa) scroll_pane_cp038

0xbf41,	// (0x00053580) wgtman_btn_pane_cp_01_ParamLimits

0xbf41,	// (0x00053580) wgtman_btn_pane_cp_01

0xc645,	// (0x00053c84) wgtman_content_pane

0xc64e,	// (0x00053c8d) wgtman_heading_pane

0x45ec,	// (0x0004bc2b) bg_heading_pane_cp02

0xc657,	// (0x00053c96) wgtman_heading_pane_g1

0xc65f,	// (0x00053c9e) wgtman_heading_pane_t1

0xc66d,	// (0x00053cac) scroll_pane_cp036

0xc675,	// (0x00053cb4) wgtman_list_pane

0xc67d,	// (0x00053cbc) wgtman_list_pane_t1_ParamLimits

0xc67d,	// (0x00053cbc) wgtman_list_pane_t1

0x9279,	// (0x000508b8) cam4_grid_pane

0x9f9a,	// (0x000515d9) bg_button_pane_cp015_ParamLimits

0x9fac,	// (0x000515eb) bg_button_pane_cp016_ParamLimits

0x9fbf,	// (0x000515fe) bg_button_pane_cp017_ParamLimits

0xa017,	// (0x00051656) popup_vitu2_query_window_g3_ParamLimits

0xa017,	// (0x00051656) popup_vitu2_query_window_g3

0xa0d4,	// (0x00051713) popup_vitu2_query_window_t6_ParamLimits

0xa0d4,	// (0x00051713) popup_vitu2_query_window_t6

0xa0ff,	// (0x0005173e) popup_vitu2_query_window_t7_ParamLimits

0xa0ff,	// (0x0005173e) popup_vitu2_query_window_t7

0xc698,	// (0x00053cd7) cam4_grid_pane_g1

0xc6a1,	// (0x00053ce0) cam4_grid_pane_g2

0xc6aa,	// (0x00053ce9) cam4_grid_pane_g3

0xc6b3,	// (0x00053cf2) cam4_grid_pane_g4

0x0003,

0xfe7b,	// (0x000574ba) cam4_grid_pane_g

0x5987,	// (0x0004cfc6) aid_placing_vt_slider_lsc_ParamLimits

0x5cc7,	// (0x0004d306) vidtel_button_pane_ParamLimits

0x5cc7,	// (0x0004d306) vidtel_button_pane

0x45ec,	// (0x0004bc2b) bg_button_pane_cp034

0xc6be,	// (0x00053cfd) vidtel_button_pane_g1

0xc6c6,	// (0x00053d05) vidtel_button_pane_t1

0x17f1,	// (0x00048e30) aid_size_vtel_slider_touch

0x18aa,	// (0x00048ee9) scroll_pane_cp039

0xae23,	// (0x00052462) ncim_query_button_pane_cp01_ParamLimits

0xae42,	// (0x00052481) ncimui_query_pane_g1_ParamLimits

0xcd5c,	// (0x0005439b) input_focus_pane_cp012_ParamLimits

0x2194,	// (0x000497d3) ncim_query_entry_pane_t1_ParamLimits

0x18aa,	// (0x00048ee9) scroll_pane_cp039_ParamLimits

0xd8bf,	// (0x00054efe) navi_pane_bcale_mc_g1

0xd8c7,	// (0x00054f06) navi_pane_bcale_mc_t1

0x2710,	// (0x00049d4f) main_sp_fs_email_pane_g1

0x271c,	// (0x00049d5b) main_sp_fs_email_pane_g2

0x0001,

0xfc7e,	// (0x000572bd) main_sp_fs_email_pane_g

0x2bbb,	// (0x0004a1fa) list_single_cale_mrui_row_pane_g3_ParamLimits

0x2bbb,	// (0x0004a1fa) list_single_cale_mrui_row_pane_g3

0xbbb4,	// (0x000531f3) list_single_recal_day_pane_g5_event_pane

0x2d9a,	// (0x0004a3d9) list_single_recal_day_pane_g7

0xc6dc,	// (0x00053d1b) list_recal_day_event_pane_cp01

0xc6e5,	// (0x00053d24) list_recal_vselct_arw_lo_pane_cp01

0xc6ed,	// (0x00053d2c) list_recal_vselct_arw_up_pane_cp01

0xc6f5,	// (0x00053d34) list_recal_vselct_pane_cp01

0x1801,	// (0x00048e40) list_recal_day_event_pane_cp01_g1

0x3238,	// (0x0004a877) list_recal_day_event_pane_cp01_t1

0x2da2,	// (0x0004a3e1) list_single_recal_day_pane_t1_ParamLimits

0x2db4,	// (0x0004a3f3) list_single_recal_day_pane_t2_ParamLimits

0xfd5e,	// (0x0005739d) list_single_recal_day_pane_t_ParamLimits

0xcd3a,	// (0x00054379) bg_notes_pane_ParamLimits

0xce05,	// (0x00054444) list_notes_pane_ParamLimits

0x5034,	// (0x0004c673) scroll_pane_cp06_ParamLimits

0xce27,	// (0x00054466) main_notes_pane_ParamLimits

0xcd5c,	// (0x0005439b) main_welc_pane

0xc716,	// (0x00053d55) main_welc_body_pane_ParamLimits

0xc716,	// (0x00053d55) main_welc_body_pane

0xc72f,	// (0x00053d6e) main_welc_opti_pane_ParamLimits

0xc72f,	// (0x00053d6e) main_welc_opti_pane

0xc78a,	// (0x00053dc9) main_welc_pane_t1_ParamLimits

0xc78a,	// (0x00053dc9) main_welc_pane_t1

0xc8a0,	// (0x00053edf) main_welc_body_row_pane_ParamLimits

0xc8a0,	// (0x00053edf) main_welc_body_row_pane

0x4ee4,	// (0x0004c523) main_welc_opti_row_pane_ParamLimits

0x4ee4,	// (0x0004c523) main_welc_opti_row_pane

0xc8c9,	// (0x00053f08) main_welc_opti_row_pane_g1

0xc8d1,	// (0x00053f10) main_welc_opti_row_pane_t1

0xc8e0,	// (0x00053f1f) main_welc_body_row_pane_t1

0x304a,	// (0x0004a689) popup_notif_wgt_heading_pane

0x3064,	// (0x0004a6a3) aid_size_list_notif_wgt_del_ParamLimits

0x3071,	// (0x0004a6b0) list_notif_wgt_row_pane_g1_ParamLimits

0x307d,	// (0x0004a6bc) list_notif_wgt_row_pane_g2_ParamLimits

0x308c,	// (0x0004a6cb) list_notif_wgt_row_pane_g3_ParamLimits

0xfdc5,	// (0x00057404) list_notif_wgt_row_pane_g_ParamLimits

0x3099,	// (0x0004a6d8) list_notif_wgt_row_pane_t1_ParamLimits

0x30af,	// (0x0004a6ee) list_notif_wgt_row_pane_t2_ParamLimits

0x30c1,	// (0x0004a700) list_notif_wgt_row_pane_t3_ParamLimits

0xfdcc,	// (0x0005740b) list_notif_wgt_row_pane_t_ParamLimits

0xbfd4,	// (0x00053613) listrow_wgtman_pane_g1_ParamLimits

0xbfe1,	// (0x00053620) listrow_wgtman_pane_g2_ParamLimits

0xfdfc,	// (0x0005743b) listrow_wgtman_pane_g_ParamLimits

0xbfff,	// (0x0005363e) listrow_wgtman_pane_t1_ParamLimits

0xc017,	// (0x00053656) listrow_wgtman_pane_t2_ParamLimits

0xfe01,	// (0x00057440) listrow_wgtman_pane_t_ParamLimits

0xc03d,	// (0x0005367c) wait_bar_pane_cp09_ParamLimits

0x45ec,	// (0x0004bc2b) bg_popup_heading_pane_cp02

0xc8ef,	// (0x00053f2e) popup_notif_wgt_heading_pane_g1

0xc8f7,	// (0x00053f36) popup_notif_wgt_heading_pane_t1

0x45ec,	// (0x0004bc2b) main_vids_pane

0x45ec,	// (0x0004bc2b) vids_listscroll_pane

0xc905,	// (0x00053f44) scroll_pane_cp040

0x45ec,	// (0x0004bc2b) vids_list_pane

0xc910,	// (0x00053f4f) vids_list_double_pane_ParamLimits

0xc910,	// (0x00053f4f) vids_list_double_pane

0xc928,	// (0x00053f67) vids_list_double_pane_g1

0xc931,	// (0x00053f70) vids_list_double_pane_t1

0xc941,	// (0x00053f80) vids_list_double_pane_t2

0x0001,

0xfe9a,	// (0x000574d9) vids_list_double_pane_t

0x7a09,	// (0x0004f048) main_ncimui_pane_ParamLimits

0xac7a,	// (0x000522b9) main_ncimui_pane_g1_ParamLimits

0xac86,	// (0x000522c5) main_ncimui_pane_g2_ParamLimits

0xac86,	// (0x000522c5) main_ncimui_pane_g2

0x0001,

0xfb7f,	// (0x000571be) main_ncimui_pane_g_ParamLimits

0xfb7f,	// (0x000571be) main_ncimui_pane_g

0xc748,	// (0x00053d87) main_welc_pane_g1_ParamLimits

0xc748,	// (0x00053d87) main_welc_pane_g1

0xc754,	// (0x00053d93) main_welc_pane_g2_ParamLimits

0xc754,	// (0x00053d93) main_welc_pane_g2

0x0003,

0xfe84,	// (0x000574c3) main_welc_pane_g_ParamLimits

0xfe84,	// (0x000574c3) main_welc_pane_g

0xcd3a,	// (0x00054379) listscroll_mce_pane_ParamLimits

0xda14,	// (0x00055053) wait_bar_pane_cp10

0xed63,	// (0x000563a2) main_cale_day_pane_ParamLimits

0xed63,	// (0x000563a2) main_cale_week_pane_ParamLimits

0xcd3a,	// (0x00054379) main_messa_pane_ParamLimits

0x86ba,	// (0x0004fcf9) main_clock2_btn_pane_ParamLimits

0x86ba,	// (0x0004fcf9) main_clock2_btn_pane

0x1025,	// (0x00048664) main_clock2_btn_pane_cp01_ParamLimits

0x1025,	// (0x00048664) main_clock2_btn_pane_cp01

0x2b47,	// (0x0004a186) list_cale_mrui_pane_ParamLimits

0x30f7,	// (0x0004a736) main_cf0_pane_g2

0x0001,

0xfdd3,	// (0x00057412) main_cf0_pane_g

0xc1e4,	// (0x00053823) area_left_week_number_pane_ParamLimits

0xc1f7,	// (0x00053836) area_top_day_name_pane_ParamLimits

0xc205,	// (0x00053844) frame_month_view_pane_ParamLimits

0x3210,	// (0x0004a84f) grid_month_view_pane_ParamLimits

0x321e,	// (0x0004a85d) frm_month_g1_ParamLimits

0xc283,	// (0x000538c2) frm_month_g2_ParamLimits

0xc294,	// (0x000538d3) frm_month_g3_ParamLimits

0xc2a5,	// (0x000538e4) frm_month_g4_ParamLimits

0xc2b6,	// (0x000538f5) frm_month_g5_ParamLimits

0xc2c9,	// (0x00053908) frm_month_g6_ParamLimits

0xc2dc,	// (0x0005391b) frm_month_g7_ParamLimits

0x322b,	// (0x0004a86a) frm_month_g8_ParamLimits

0xc2ef,	// (0x0005392e) frm_month_g9_ParamLimits

0xc2fc,	// (0x0005393b) frm_month_g10_ParamLimits

0xc309,	// (0x00053948) frm_month_g11_ParamLimits

0xc316,	// (0x00053955) frm_month_g12_ParamLimits

0xc323,	// (0x00053962) frm_month_g13_ParamLimits

0xc330,	// (0x0005396f) frm_month_g14_ParamLimits

0xc33f,	// (0x0005397e) frm_month_g15_ParamLimits

0xc34e,	// (0x0005398d) frm_month_g16_ParamLimits

0xfe2b,	// (0x0005746a) frm_month_g_ParamLimits

0xc35d,	// (0x0005399c) cell_top_day_name_pane_t1_ParamLimits

0xc370,	// (0x000539af) cell_area_left_week_number_pane_g1_ParamLimits

0xc37f,	// (0x000539be) cell_area_left_week_number_pane_t1_ParamLimits

0xcdb5,	// (0x000543f4) cell_month_view_pane_g1_ParamLimits

0xc395,	// (0x000539d4) cell_month_view_pane_t1_ParamLimits

0xcd32,	// (0x00054371) main_clock2_btn_pane_g1

0xc94f,	// (0x00053f8e) main_clock2_btn_pane_t1

0xcd5c,	// (0x0005439b) listscroll_cmail_pane_ParamLimits

0x2710,	// (0x00049d4f) main_sp_fs_email_pane_g1_ParamLimits

0x271c,	// (0x00049d5b) main_sp_fs_email_pane_g2_ParamLimits

0xfc7e,	// (0x000572bd) main_sp_fs_email_pane_g_ParamLimits

0x2d0a,	// (0x0004a349) list_recal_day_pane_ParamLimits

0x2d1b,	// (0x0004a35a) mian_recal_day_pane_t1

0xb596,	// (0x00052bd5) list_single_dyc_row_text_pane_t4_ParamLimits

0xb596,	// (0x00052bd5) list_single_dyc_row_text_pane_t4

0xb5cd,	// (0x00052c0c) list_single_dyc_row_text_pane_t5_ParamLimits

0xb5cd,	// (0x00052c0c) list_single_dyc_row_text_pane_t5

0x27be,	// (0x00049dfd) list_single_dyc_row_text_pane_t6_ParamLimits

0x27be,	// (0x00049dfd) list_single_dyc_row_text_pane_t6

0x6b40,	// (0x0004e17f) aid_mgn_list_cale_time_pane

0x7a09,	// (0x0004f048) main_gallery2_pane_ParamLimits

0x103b,	// (0x0004867a) main_clock2_pane_cp01_t1

0x1049,	// (0x00048688) main_clock2_pane_cp01_t3

0x0001,

0xf764,	// (0x00056da3) main_clock2_pane_cp01_t

0x5497,	// (0x0004cad6) cale_week_scroll_pane_g16_ParamLimits

0x5497,	// (0x0004cad6) cale_week_scroll_pane_g16

0xcfd9,	// (0x00054618) vorec_slider_pane

0xc6c6,	// (0x00053d05) vidtel_button_pane_t1_ParamLimits

0xbc0f,	// (0x0005324e) main_fs_bigclock_clock_pane_g1_ParamLimits

0xbc0f,	// (0x0005324e) main_fs_bigclock_clock_pane_g2_ParamLimits

0xbc1c,	// (0x0005325b) main_fs_bigclock_clock_pane_g3_ParamLimits

0xbc1c,	// (0x0005325b) main_fs_bigclock_clock_pane_g4_ParamLimits

0xfd81,	// (0x000573c0) main_fs_bigclock_clock_pane_g_ParamLimits

0xbc28,	// (0x00053267) main_fs_bigclock_clock_pane_t1_ParamLimits

0xbc3b,	// (0x0005327a) main_fs_bigclock_clock_pane_t2_ParamLimits

0xfd8a,	// (0x000573c9) main_fs_bigclock_clock_pane_t_ParamLimits

0x805f,	// (0x0004f69e) main_mup3_lyrics_pane_ParamLimits

0x805f,	// (0x0004f69e) main_mup3_lyrics_pane

0xc983,	// (0x00053fc2) main_mup3_lyrics_pane_t1_ParamLimits

0xc983,	// (0x00053fc2) main_mup3_lyrics_pane_t1

0x8bee,	// (0x0005022d) aid_main_mp4_pane_t1_area

0x8bf8,	// (0x00050237) aid_main_mp4_pane_t2_area

0x8cf7,	// (0x00050336) main_mp4_pane_g7_ParamLimits

0x8cf7,	// (0x00050336) main_mp4_pane_g7

0x8d03,	// (0x00050342) main_mp4_pane_g8_ParamLimits

0x8d03,	// (0x00050342) main_mp4_pane_g8

0x9123,	// (0x00050762) aid_call6_pane_g1_size

0xc576,	// (0x00053bb5) list_double_large_graphic_phob2_other_pane_ParamLimits

0xc576,	// (0x00053bb5) list_double_large_graphic_phob2_other_pane

0xd396,	// (0x000549d5) list_double_large_graphic_phob2_other_pane_g1

0x45ec,	// (0x0004bc2b) list_highlight_pane_cp026

0xcd5c,	// (0x0005439b) main_welc_pane_ParamLimits

0xb435,	// (0x00052a74) main_sp_fs_ctrlbar_pane_g3_ParamLimits

0xb435,	// (0x00052a74) main_sp_fs_ctrlbar_pane_g3

0xb44d,	// (0x00052a8c) main_sp_fs_ctrlbar_pane_g4_ParamLimits

0xb44d,	// (0x00052a8c) main_sp_fs_ctrlbar_pane_g4

0xb47f,	// (0x00052abe) toolbar2_fixed_button_pane_cp01

0xb48a,	// (0x00052ac9) toolbar2_fixed_button_pane_cp02

0xb495,	// (0x00052ad4) toolbar2_fixed_button_pane_cp03

0xc6ff,	// (0x00053d3e) list_welc_entry_pane_ParamLimits

0xc6ff,	// (0x00053d3e) list_welc_entry_pane

0xc762,	// (0x00053da1) main_welc_pane_g3_ParamLimits

0xc762,	// (0x00053da1) main_welc_pane_g3

0xc7a4,	// (0x00053de3) main_welc_pane_t2_ParamLimits

0xc7a4,	// (0x00053de3) main_welc_pane_t2

0xc7b8,	// (0x00053df7) main_welc_pane_t3_ParamLimits

0xc7b8,	// (0x00053df7) main_welc_pane_t3

0x0005,

0xfe8d,	// (0x000574cc) main_welc_pane_t_ParamLimits

0xfe8d,	// (0x000574cc) main_welc_pane_t

0xc842,	// (0x00053e81) welc_button_pane_ParamLimits

0xc842,	// (0x00053e81) welc_button_pane

0xc892,	// (0x00053ed1) welc_service_logo_pane_ParamLimits

0xc892,	// (0x00053ed1) welc_service_logo_pane

0xc9b9,	// (0x00053ff8) list_single_welc_entry_pane_ParamLimits

0xc9b9,	// (0x00053ff8) list_single_welc_entry_pane

0xc9ca,	// (0x00054009) list_single_welc_entry_pane_g1

0xc9d2,	// (0x00054011) list_single_welc_entry_pane_t1

0xc9e0,	// (0x0005401f) list_single_welc_entry_pane_t2

0x0001,

0xfe9f,	// (0x000574de) list_single_welc_entry_pane_t

0x45ec,	// (0x0004bc2b) bg_button_pane_cp035

0xc9ee,	// (0x0005402d) welc_button_pane_t1

0xc9fc,	// (0x0005403b) welc_service_logo_pane_g1

0xca05,	// (0x00054044) welc_service_logo_pane_g2

0x0001,

0xfea4,	// (0x000574e3) welc_service_logo_pane_g

0x48c0,	// (0x0004beff) main_int_radio_pane

0x2032,	// (0x00049671) list_single_fs_dyc_pane_g1

0xc448,	// (0x00053a87) list_double_large_graphic_phob2_pane_g3_ParamLimits

0xc448,	// (0x00053a87) list_double_large_graphic_phob2_pane_g3

0xc454,	// (0x00053a93) list_double_large_graphic_phob2_pane_g4_ParamLimits

0xc454,	// (0x00053a93) list_double_large_graphic_phob2_pane_g4

0xca0e,	// (0x0005404d) main_int_radio1_pane_ParamLimits

0xca0e,	// (0x0005404d) main_int_radio1_pane

0xca20,	// (0x0005405f) find_pane_cp02

0xca29,	// (0x00054068) input_focus_pane_cp12_ParamLimits

0xca29,	// (0x00054068) input_focus_pane_cp12

0xca35,	// (0x00054074) input_focus_pane_cp13_ParamLimits

0xca35,	// (0x00054074) input_focus_pane_cp13

0xca4d,	// (0x0005408c) input_focus_pane_cp14_ParamLimits

0xca4d,	// (0x0005408c) input_focus_pane_cp14

0xca65,	// (0x000540a4) int_radio1_listscroll_pane

0xca6f,	// (0x000540ae) main_int_radio1_pane_g1_ParamLimits

0xca6f,	// (0x000540ae) main_int_radio1_pane_g1

0xca7f,	// (0x000540be) main_int_radio1_pane_t1_ParamLimits

0xca7f,	// (0x000540be) main_int_radio1_pane_t1

0xca93,	// (0x000540d2) main_int_radio1_pane_t2_ParamLimits

0xca93,	// (0x000540d2) main_int_radio1_pane_t2

0xcaa7,	// (0x000540e6) main_int_radio1_pane_t3_ParamLimits

0xcaa7,	// (0x000540e6) main_int_radio1_pane_t3

0xcabb,	// (0x000540fa) main_int_radio1_pane_t4_ParamLimits

0xcabb,	// (0x000540fa) main_int_radio1_pane_t4

0xcad2,	// (0x00054111) main_int_radio1_pane_t5_ParamLimits

0xcad2,	// (0x00054111) main_int_radio1_pane_t5

0xcae4,	// (0x00054123) main_int_radio1_pane_t6_ParamLimits

0xcae4,	// (0x00054123) main_int_radio1_pane_t6

0xcaf6,	// (0x00054135) main_int_radio1_pane_t7_ParamLimits

0xcaf6,	// (0x00054135) main_int_radio1_pane_t7

0xcb08,	// (0x00054147) main_int_radio1_pane_t8_ParamLimits

0xcb08,	// (0x00054147) main_int_radio1_pane_t8

0xcb1c,	// (0x0005415b) main_int_radio1_pane_t9_ParamLimits

0xcb1c,	// (0x0005415b) main_int_radio1_pane_t9

0xcb2e,	// (0x0005416d) main_int_radio1_pane_t10_ParamLimits

0xcb2e,	// (0x0005416d) main_int_radio1_pane_t10

0xcb5f,	// (0x0005419e) main_int_radio1_pane_t11_ParamLimits

0xcb5f,	// (0x0005419e) main_int_radio1_pane_t11

0xcb90,	// (0x000541cf) main_int_radio1_pane_t12_ParamLimits

0xcb90,	// (0x000541cf) main_int_radio1_pane_t12

0x000b,

0xfea9,	// (0x000574e8) main_int_radio1_pane_t_ParamLimits

0xfea9,	// (0x000574e8) main_int_radio1_pane_t

0xcba7,	// (0x000541e6) int_radio_list_pane

0xc3f3,	// (0x00053a32) scroll_pane_cp037

0xcbaf,	// (0x000541ee) list_double_large_graphic_int_radio_pane_ParamLimits

0xcbaf,	// (0x000541ee) list_double_large_graphic_int_radio_pane

0xcbc8,	// (0x00054207) list_double_large_graphic_int_radio_pane_g1

0x3246,	// (0x0004a885) list_double_large_graphic_int_radio_pane_t1

0x3254,	// (0x0004a893) list_double_large_graphic_int_radio_pane_t2

0x0001,

0xfec2,	// (0x00057501) list_double_large_graphic_int_radio_pane_t

0x45ec,	// (0x0004bc2b) list_highlight_pane_cp027

0xc70e,	// (0x00053d4d) main_button_pane_4

0xc76e,	// (0x00053dad) main_welc_pane_g4_ParamLimits

0xc76e,	// (0x00053dad) main_welc_pane_g4

0xc7ca,	// (0x00053e09) main_welc_pane_t4_ParamLimits

0xc7ca,	// (0x00053e09) main_welc_pane_t4

0xc7dc,	// (0x00053e1b) main_welc_pane_t5_ParamLimits

0xc7dc,	// (0x00053e1b) main_welc_pane_t5

0xc80e,	// (0x00053e4d) main_welc_pane_t6_ParamLimits

0xc80e,	// (0x00053e4d) main_welc_pane_t6

0xc850,	// (0x00053e8f) welc_button_pane_2_ParamLimits

0xc850,	// (0x00053e8f) welc_button_pane_2

0xc868,	// (0x00053ea7) welc_button_pane_3_ParamLimits

0xc868,	// (0x00053ea7) welc_button_pane_3

0xc70e,	// (0x00053d4d) welc_button_pane_4

0xc882,	// (0x00053ec1) welc_button_pane_5_ParamLimits

0xc882,	// (0x00053ec1) welc_button_pane_5

0x7a25,	// (0x0004f064) main_popup_welc_pane

0xcbd1,	// (0x00054210) main_welc_sk_g3

0xcbdb,	// (0x0005421a) main_welc_sk_g4

0xcbe5,	// (0x00054224) main_welc_sk_t3

0xcbf5,	// (0x00054234) main_welc_sk_t4

0xcc05,	// (0x00054244) popup_welc_pane_t4

0xcc13,	// (0x00054252) popup_welc_pane_t5

0xcc21,	// (0x00054260) popup_welc_pane_t6
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
	};

} // end of namespace AknLayoutScalable_Abrw_pnp4_apps_nhd4_prt_tch_Small
