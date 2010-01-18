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

#include "aknlayoutscalable_abrw_pnl4_apps_nhd4_lsc_tch_small.h"
#include "AknLayout2ScalableDecode.h"
namespace AknLayoutScalable_Apps { extern const TUint8 KByteCodedData_AknLayoutScalable_Elaf_pnp4_apps_nhd4_prt_tch[]; }

namespace AknLayoutScalable_Abrw_pnl4_apps_nhd4_lsc_tch_Small
{

extern const TUint16 KDataLookup[AknLayoutScalable_Apps::E_TApiId_TableSize];
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Apps::KByteCodedData_AknLayoutScalable_Elaf_pnp4_apps_nhd4_prt_tch + 0x0005af65 };

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
0x0e54,	// (0x0005bdb9) Screen

0x0e60,	// (0x0005bdc5) application_window

0x0ed2,	// (0x0005be37) area_bottom_pane_ParamLimits

0x0ed2,	// (0x0005be37) area_bottom_pane

0x0f2f,	// (0x0005be94) area_top_pane_ParamLimits

0x0f2f,	// (0x0005be94) area_top_pane

0x9862,	// (0x000647c7) call_video_uplink_pane_ParamLimits

0x9862,	// (0x000647c7) call_video_uplink_pane

0x0fa4,	// (0x0005bf09) main_pane_ParamLimits

0x0fa4,	// (0x0005bf09) main_pane

0xc115,	// (0x0006707a) context_pane

0x413c,	// (0x0005f0a1) navi_pane

0x4164,	// (0x0005f0c9) popup_cale_events_window_ParamLimits

0x4164,	// (0x0005f0c9) popup_cale_events_window

0xc128,	// (0x0006708d) popup_mup_playback_window

0x417c,	// (0x0005f0e1) signal_pane

0xa035,	// (0x00064f9a) main_browser_pane

0xac5f,	// (0x00065bc4) main_burst_pane

0x3e9c,	// (0x0005ee01) main_calc_pane

0xac5f,	// (0x00065bc4) main_cale_day_pane

0xa035,	// (0x00064f9a) main_cale_month_pane

0xac5f,	// (0x00065bc4) main_cale_week_pane

0xac5f,	// (0x00065bc4) main_call_pane

0x9c9f,	// (0x00064c04) main_call_poc_pane

0xac5f,	// (0x00065bc4) main_camera_pane

0xac5f,	// (0x00065bc4) main_chi_dic_pane

0xaaee,	// (0x00065a53) main_clock_pane

0x9c9f,	// (0x00064c04) main_fmradio_pane

0xac5f,	// (0x00065bc4) main_graph_messa_pane

0x9c9f,	// (0x00064c04) main_help_pane

0xa035,	// (0x00064f9a) main_im_pane

0x9efa,	// (0x00064e5f) main_image_pane_ParamLimits

0x9efa,	// (0x00064e5f) main_image_pane

0x9c9f,	// (0x00064c04) main_location2_pane

0xac5f,	// (0x00065bc4) main_location_pane

0x9c9f,	// (0x00064c04) main_messa_pane

0x9c9f,	// (0x00064c04) main_mp2_pane

0xac5f,	// (0x00065bc4) main_mp_pane

0x9c9f,	// (0x00064c04) main_msg_pane

0x9c9f,	// (0x00064c04) main_mup_eq_pane

0x9c9f,	// (0x00064c04) main_mup_pane

0xac5f,	// (0x00065bc4) main_notes_pane

0x9c9f,	// (0x00064c04) main_pec_pane

0x9c9f,	// (0x00064c04) main_phob_pane

0x9c9f,	// (0x00064c04) main_pinb_pane

0x9c9f,	// (0x00064c04) main_postcard_pane

0x9c9f,	// (0x00064c04) main_qdial_pane

0xac5f,	// (0x00065bc4) main_skin_pane

0x9c9f,	// (0x00064c04) main_smil2_pane

0xac5f,	// (0x00065bc4) main_smil_pane

0xac5f,	// (0x00065bc4) main_video_pane

0xac5f,	// (0x00065bc4) main_video_tele_pane

0x9efa,	// (0x00064e5f) main_viewer_pane_ParamLimits

0x9efa,	// (0x00064e5f) main_viewer_pane

0xac5f,	// (0x00065bc4) main_vorec_pane

0x3ef0,	// (0x0005ee55) popup_blid_sat_info_window_ParamLimits

0x3ef0,	// (0x0005ee55) popup_blid_sat_info_window

0x3f48,	// (0x0005eead) popup_dyc_status_message_window_ParamLimits

0x3f48,	// (0x0005eead) popup_dyc_status_message_window

0x3f60,	// (0x0005eec5) popup_grid_large_graphic_window_ParamLimits

0x3f60,	// (0x0005eec5) popup_grid_large_graphic_window

0x4016,	// (0x0005ef7b) popup_loc_request_window_ParamLimits

0x4016,	// (0x0005ef7b) popup_loc_request_window

0x4114,	// (0x0005f079) popup_wml_address_window_ParamLimits

0x4114,	// (0x0005f079) popup_wml_address_window

0x3cd6,	// (0x0005ec3b) call_muted_g1

0x398e,	// (0x0005e8f3) popup_call_audio_conf_window_ParamLimits

0x398e,	// (0x0005e8f3) popup_call_audio_conf_window

0x3cea,	// (0x0005ec4f) popup_call_audio_first_window_ParamLimits

0x3cea,	// (0x0005ec4f) popup_call_audio_first_window

0x3d60,	// (0x0005ecc5) popup_call_audio_in_window_ParamLimits

0x3d60,	// (0x0005ecc5) popup_call_audio_in_window

0x3d9c,	// (0x0005ed01) popup_call_audio_out_window_ParamLimits

0x3d9c,	// (0x0005ed01) popup_call_audio_out_window

0x3dd6,	// (0x0005ed3b) popup_call_audio_second_window_ParamLimits

0x3dd6,	// (0x0005ed3b) popup_call_audio_second_window

0x3e2c,	// (0x0005ed91) popup_call_audio_wait_window_ParamLimits

0x3e2c,	// (0x0005ed91) popup_call_audio_wait_window

0x3e61,	// (0x0005edc6) popup_number_entry_window_ParamLimits

0x3e61,	// (0x0005edc6) popup_number_entry_window

0x988e,	// (0x000647f3) bg_popup_call_pane_cp05_ParamLimits

0x988e,	// (0x000647f3) bg_popup_call_pane_cp05

0x98ae,	// (0x00064813) popup_number_entry_window_t1

0x98c1,	// (0x00064826) popup_number_entry_window_t2

0x98d3,	// (0x00064838) popup_number_entry_window_t3

0x0003,

0xf0ec,	// (0x0006a051) popup_number_entry_window_t

0x98e5,	// (0x0006484a) text_title_cp2

0x98f8,	// (0x0006485d) bg_popup_call_pane_cp_ParamLimits

0x98f8,	// (0x0006485d) bg_popup_call_pane_cp

0x9906,	// (0x0006486b) call_thumbnail_pane

0x990e,	// (0x00064873) popup_call_audio_in_window_g1_ParamLimits

0x990e,	// (0x00064873) popup_call_audio_in_window_g1

0x991a,	// (0x0006487f) popup_call_audio_in_window_g2_ParamLimits

0x991a,	// (0x0006487f) popup_call_audio_in_window_g2

0x9926,	// (0x0006488b) popup_call_audio_in_window_g3_ParamLimits

0x9926,	// (0x0006488b) popup_call_audio_in_window_g3

0x0002,

0xf0f5,	// (0x0006a05a) popup_call_audio_in_window_g_ParamLimits

0xf0f5,	// (0x0006a05a) popup_call_audio_in_window_g

0x9932,	// (0x00064897) popup_call_audio_in_window_t1_ParamLimits

0x9932,	// (0x00064897) popup_call_audio_in_window_t1

0x994d,	// (0x000648b2) popup_call_audio_in_window_t2_ParamLimits

0x994d,	// (0x000648b2) popup_call_audio_in_window_t2

0x9968,	// (0x000648cd) popup_call_audio_in_window_t3_ParamLimits

0x9968,	// (0x000648cd) popup_call_audio_in_window_t3

0x0002,

0xf0fc,	// (0x0006a061) popup_call_audio_in_window_t_ParamLimits

0xf0fc,	// (0x0006a061) popup_call_audio_in_window_t

0x98f8,	// (0x0006485d) bg_popup_call_pane_cp01_ParamLimits

0x98f8,	// (0x0006485d) bg_popup_call_pane_cp01

0x9906,	// (0x0006486b) call_thumbnail_pane_cp02

0x997b,	// (0x000648e0) call_type_pane_cp022

0x9983,	// (0x000648e8) popup_call_audio_out_window_g1_ParamLimits

0x9983,	// (0x000648e8) popup_call_audio_out_window_g1

0x9995,	// (0x000648fa) popup_call_audio_out_window_g2_ParamLimits

0x9995,	// (0x000648fa) popup_call_audio_out_window_g2

0x99a1,	// (0x00064906) popup_call_audio_out_window_g3_ParamLimits

0x99a1,	// (0x00064906) popup_call_audio_out_window_g3

0x0002,

0xf103,	// (0x0006a068) popup_call_audio_out_window_g_ParamLimits

0xf103,	// (0x0006a068) popup_call_audio_out_window_g

0x99b3,	// (0x00064918) popup_call_audio_out_window_t1_ParamLimits

0x99b3,	// (0x00064918) popup_call_audio_out_window_t1

0x99cb,	// (0x00064930) popup_call_audio_out_window_t2_ParamLimits

0x99cb,	// (0x00064930) popup_call_audio_out_window_t2

0x0001,

0xf10a,	// (0x0006a06f) popup_call_audio_out_window_t_ParamLimits

0xf10a,	// (0x0006a06f) popup_call_audio_out_window_t

0x99e0,	// (0x00064945) bg_popup_call_pane_ParamLimits

0x99e0,	// (0x00064945) bg_popup_call_pane

0x115b,	// (0x0005c0c0) call_thumbnail_pane_cp_ParamLimits

0x115b,	// (0x0005c0c0) call_thumbnail_pane_cp

0x9a64,	// (0x000649c9) call_type_pane_cp01_ParamLimits

0x9a64,	// (0x000649c9) call_type_pane_cp01

0x9aa8,	// (0x00064a0d) popup_call_audio_first_window_g1_ParamLimits

0x9aa8,	// (0x00064a0d) popup_call_audio_first_window_g1

0x9af4,	// (0x00064a59) popup_call_audio_first_window_g2_ParamLimits

0x9af4,	// (0x00064a59) popup_call_audio_first_window_g2

0x0001,

0xf10f,	// (0x0006a074) popup_call_audio_first_window_g_ParamLimits

0xf10f,	// (0x0006a074) popup_call_audio_first_window_g

0x9b38,	// (0x00064a9d) popup_call_audio_first_window_t1_ParamLimits

0x9b38,	// (0x00064a9d) popup_call_audio_first_window_t1

0x9be4,	// (0x00064b49) popup_call_audio_first_window_t4_ParamLimits

0x9be4,	// (0x00064b49) popup_call_audio_first_window_t4

0x9c70,	// (0x00064bd5) popup_call_audio_first_window_t5_ParamLimits

0x9c70,	// (0x00064bd5) popup_call_audio_first_window_t5

0x0002,

0xf114,	// (0x0006a079) popup_call_audio_first_window_t_ParamLimits

0xf114,	// (0x0006a079) popup_call_audio_first_window_t

0x9c9f,	// (0x00064c04) bg_popup_call_pane_cp02

0x9ca9,	// (0x00064c0e) call_type_pane_cp023

0x9cb1,	// (0x00064c16) popup_call_audio_wait_window_g1

0x9cb9,	// (0x00064c1e) popup_call_audio_wait_window_g2

0x0001,

0xf11b,	// (0x0006a080) popup_call_audio_wait_window_g

0x9cc1,	// (0x00064c26) popup_call_audio_wait_window_t3

0x9ccf,	// (0x00064c34) bg_popup_call_pane_cp03_ParamLimits

0x9ccf,	// (0x00064c34) bg_popup_call_pane_cp03

0x9d2f,	// (0x00064c94) call_thumbnail_pane_cp011_ParamLimits

0x9d2f,	// (0x00064c94) call_thumbnail_pane_cp011

0x9d3b,	// (0x00064ca0) call_type_pane_cp034_ParamLimits

0x9d3b,	// (0x00064ca0) call_type_pane_cp034

0x9d77,	// (0x00064cdc) popup_call_audio_second_window_g1_ParamLimits

0x9d77,	// (0x00064cdc) popup_call_audio_second_window_g1

0x9db3,	// (0x00064d18) popup_call_audio_second_window_g2_ParamLimits

0x9db3,	// (0x00064d18) popup_call_audio_second_window_g2

0x0001,

0xf120,	// (0x0006a085) popup_call_audio_second_window_g_ParamLimits

0xf120,	// (0x0006a085) popup_call_audio_second_window_g

0x9def,	// (0x00064d54) popup_call_audio_second_window_t1_ParamLimits

0x9def,	// (0x00064d54) popup_call_audio_second_window_t1

0x9e70,	// (0x00064dd5) popup_call_audio_second_window_t2_ParamLimits

0x9e70,	// (0x00064dd5) popup_call_audio_second_window_t2

0x9ea6,	// (0x00064e0b) popup_call_audio_second_window_t3_ParamLimits

0x9ea6,	// (0x00064e0b) popup_call_audio_second_window_t3

0x0002,

0xf125,	// (0x0006a08a) popup_call_audio_second_window_t_ParamLimits

0xf125,	// (0x0006a08a) popup_call_audio_second_window_t

0x9c9f,	// (0x00064c04) bg_popup_call_pane_cp04

0x9edc,	// (0x00064e41) list_conf_pane

0x9ee4,	// (0x00064e49) popup_call_audio_conf_window_t1

0x9ef2,	// (0x00064e57) call_thumbnail_pane_g1

0x9efa,	// (0x00064e5f) bg_pinb_pane_ParamLimits

0x9efa,	// (0x00064e5f) bg_pinb_pane

0x9f08,	// (0x00064e6d) find_pinb_pane

0x9f11,	// (0x00064e76) listscroll_pinb_pane_ParamLimits

0x9f11,	// (0x00064e76) listscroll_pinb_pane

0x9f20,	// (0x00064e85) pinb_bg_pane_g1

0x117f,	// (0x0005c0e4) pinb_bg_pane_g2

0x118b,	// (0x0005c0f0) pinb_bg_pane_g3

0x1197,	// (0x0005c0fc) pinb_bg_pane_g4

0x11a3,	// (0x0005c108) pinb_bg_pane_g5

0x11af,	// (0x0005c114) pinb_bg_pane_g6

0x11ba,	// (0x0005c11f) pinb_bg_pane_g7

0x11c5,	// (0x0005c12a) pinb_bg_pane_g8

0x11d0,	// (0x0005c135) pinb_bg_pane_g9

0x11da,	// (0x0005c13f) pinb_bg_pane_g10

0x0009,

0xf12c,	// (0x0006a091) pinb_bg_pane_g

0x11ef,	// (0x0005c154) grid_pinb_pane

0x11f8,	// (0x0005c15d) list_pinb_pane

0x1201,	// (0x0005c166) scroll_pane_cp01_ParamLimits

0x1201,	// (0x0005c166) scroll_pane_cp01

0x9f32,	// (0x00064e97) find_pinb_pane_g1_ParamLimits

0x9f32,	// (0x00064e97) find_pinb_pane_g1

0x9f4a,	// (0x00064eaf) find_pinb_pane_t1

0x9f5c,	// (0x00064ec1) find_pinb_pane_t2

0x0001,

0xf146,	// (0x0006a0ab) find_pinb_pane_t

0x9f71,	// (0x00064ed6) input_focus_pane_cp01_ParamLimits

0x9f71,	// (0x00064ed6) input_focus_pane_cp01

0x1213,	// (0x0005c178) cell_pinb_pane_ParamLimits

0x1213,	// (0x0005c178) cell_pinb_pane

0x1245,	// (0x0005c1aa) cell_pinb_pane_g1_ParamLimits

0x1245,	// (0x0005c1aa) cell_pinb_pane_g1

0x1255,	// (0x0005c1ba) cell_pinb_pane_g2_ParamLimits

0x1255,	// (0x0005c1ba) cell_pinb_pane_g2

0x9f7d,	// (0x00064ee2) cell_pinb_pane_g3_ParamLimits

0x9f7d,	// (0x00064ee2) cell_pinb_pane_g3

0x0002,

0xf14b,	// (0x0006a0b0) cell_pinb_pane_g_ParamLimits

0xf14b,	// (0x0006a0b0) cell_pinb_pane_g

0x9c9f,	// (0x00064c04) grid_highlight_pane_cp01

0x1261,	// (0x0005c1c6) list_pinb_item_pane_ParamLimits

0x1261,	// (0x0005c1c6) list_pinb_item_pane

0x9c9f,	// (0x00064c04) list_highlight_pane_cp02

0x9f89,	// (0x00064eee) list_pinb_item_pane_g1_ParamLimits

0x9f89,	// (0x00064eee) list_pinb_item_pane_g1

0x9f96,	// (0x00064efb) list_pinb_item_pane_g2_ParamLimits

0x9f96,	// (0x00064efb) list_pinb_item_pane_g2

0x1275,	// (0x0005c1da) list_pinb_item_pane_g3_ParamLimits

0x1275,	// (0x0005c1da) list_pinb_item_pane_g3

0x9fa2,	// (0x00064f07) list_pinb_item_pane_g4_ParamLimits

0x9fa2,	// (0x00064f07) list_pinb_item_pane_g4

0x0003,

0xf152,	// (0x0006a0b7) list_pinb_item_pane_g_ParamLimits

0xf152,	// (0x0006a0b7) list_pinb_item_pane_g

0x9fae,	// (0x00064f13) list_pinb_item_pane_t1_ParamLimits

0x9fae,	// (0x00064f13) list_pinb_item_pane_t1

0x12a4,	// (0x0005c209) calc_display_pane

0x12cc,	// (0x0005c231) calc_paper_pane

0x12ef,	// (0x0005c254) grid_calc_pane

0x9c9f,	// (0x00064c04) bg_list_pane_cp01

0x131d,	// (0x0005c282) clock_g1

0x1325,	// (0x0005c28a) clock_g2

0x0001,

0xf15b,	// (0x0006a0c0) clock_g

0x132d,	// (0x0005c292) clock_t1_ParamLimits

0x132d,	// (0x0005c292) clock_t1

0x1342,	// (0x0005c2a7) clock_t2_ParamLimits

0x1342,	// (0x0005c2a7) clock_t2

0x1354,	// (0x0005c2b9) clock_t3_ParamLimits

0x1354,	// (0x0005c2b9) clock_t3

0x1366,	// (0x0005c2cb) clock_t4_ParamLimits

0x1366,	// (0x0005c2cb) clock_t4

0x1378,	// (0x0005c2dd) clock_t5_ParamLimits

0x1378,	// (0x0005c2dd) clock_t5

0x138d,	// (0x0005c2f2) clock_t6_ParamLimits

0x138d,	// (0x0005c2f2) clock_t6

0x139f,	// (0x0005c304) clock_t7_ParamLimits

0x139f,	// (0x0005c304) clock_t7

0x13b1,	// (0x0005c316) clock_t8_ParamLimits

0x13b1,	// (0x0005c316) clock_t8

0x13c5,	// (0x0005c32a) clock_t9_ParamLimits

0x13c5,	// (0x0005c32a) clock_t9

0x0008,

0xf160,	// (0x0006a0c5) clock_t_ParamLimits

0xf160,	// (0x0006a0c5) clock_t

0x9fcd,	// (0x00064f32) popup_clock_analogue_window_cp02

0x9fcd,	// (0x00064f32) popup_clock_digital_window_cp01

0x9fd5,	// (0x00064f3a) listscroll_help_pane

0x9c9f,	// (0x00064c04) phob_pre_status_pane

0x9fdf,	// (0x00064f44) grid_qdial_pane

0x9c9f,	// (0x00064c04) listscroll_mce_pane

0x9fe9,	// (0x00064f4e) bg_notes_pane

0x9ff3,	// (0x00064f58) list_notes_pane

0x13d9,	// (0x0005c33e) scroll_pane_cp06

0x9ffd,	// (0x00064f62) bg_calc_paper_pane

0xa01b,	// (0x00064f80) list_calc_pane

0xa035,	// (0x00064f9a) bg_calc_display_pane

0x13e4,	// (0x0005c349) calc_display_pane_t1

0x13f6,	// (0x0005c35b) calc_display_pane_t2

0xa041,	// (0x00064fa6) calc_display_pane_t3

0x0002,

0xf173,	// (0x0006a0d8) calc_display_pane_t

0x1408,	// (0x0005c36d) cell_calc_pane_ParamLimits

0x1408,	// (0x0005c36d) cell_calc_pane

0xa053,	// (0x00064fb8) bg_calc_paper_pane_g1

0xa05f,	// (0x00064fc4) bg_calc_paper_pane_g2

0xa06b,	// (0x00064fd0) bg_calc_paper_pane_g3

0xa077,	// (0x00064fdc) bg_calc_paper_pane_g4

0xa083,	// (0x00064fe8) bg_calc_paper_pane_g5

0x143d,	// (0x0005c3a2) bg_calc_paper_pane_g6

0x144c,	// (0x0005c3b1) bg_calc_paper_pane_g7

0x145b,	// (0x0005c3c0) bg_calc_paper_pane_g8

0x0007,

0xf17a,	// (0x0006a0df) bg_calc_paper_pane_g

0x146e,	// (0x0005c3d3) calc_bg_paper_pane_g9

0x1481,	// (0x0005c3e6) list_calc_item_pane_ParamLimits

0x1481,	// (0x0005c3e6) list_calc_item_pane

0xa08f,	// (0x00064ff4) list_calc_item_pane_g1

0xa09c,	// (0x00065001) list_calc_item_pane_t1_ParamLimits

0xa09c,	// (0x00065001) list_calc_item_pane_t1

0x1497,	// (0x0005c3fc) list_calc_item_pane_t2_ParamLimits

0x1497,	// (0x0005c3fc) list_calc_item_pane_t2

0x0001,

0xf18b,	// (0x0006a0f0) list_calc_item_pane_t_ParamLimits

0xf18b,	// (0x0006a0f0) list_calc_item_pane_t

0xa0ae,	// (0x00065013) cell_calc_pane_g1

0xa0b8,	// (0x0006501d) grid_highlight_pane_cp02

0xa0da,	// (0x0006503f) bg_calc_display_pane_g1

0xa0e3,	// (0x00065048) bg_calc_display_pane_g2

0xa0ed,	// (0x00065052) bg_calc_display_pane_g3

0x0002,

0xf195,	// (0x0006a0fa) bg_calc_display_pane_g

0x14c9,	// (0x0005c42e) cell_qdial_pane_ParamLimits

0x14c9,	// (0x0005c42e) cell_qdial_pane

0x14dd,	// (0x0005c442) cell_qdial_pane_g1_ParamLimits

0x14dd,	// (0x0005c442) cell_qdial_pane_g1

0x14f3,	// (0x0005c458) cell_qdial_pane_g2_ParamLimits

0x14f3,	// (0x0005c458) cell_qdial_pane_g2

0xa0f6,	// (0x0006505b) cell_qdial_pane_g3_ParamLimits

0xa0f6,	// (0x0006505b) cell_qdial_pane_g3

0x0003,

0xf19c,	// (0x0006a101) cell_qdial_pane_g_ParamLimits

0xf19c,	// (0x0006a101) cell_qdial_pane_g

0x151a,	// (0x0005c47f) cell_qdial_pane_t1_ParamLimits

0x151a,	// (0x0005c47f) cell_qdial_pane_t1

0x1532,	// (0x0005c497) cell_qdial_pane_t2_ParamLimits

0x1532,	// (0x0005c497) cell_qdial_pane_t2

0x1545,	// (0x0005c4aa) cell_qdial_pane_t3_ParamLimits

0x1545,	// (0x0005c4aa) cell_qdial_pane_t3

0x0002,

0xf1a5,	// (0x0006a10a) cell_qdial_pane_t_ParamLimits

0xf1a5,	// (0x0006a10a) cell_qdial_pane_t

0x9c9f,	// (0x00064c04) grid_highlight_pane_cp04

0xa102,	// (0x00065067) thumbnail_qdial_pane_ParamLimits

0xa102,	// (0x00065067) thumbnail_qdial_pane

0xa15e,	// (0x000650c3) list_help_pane

0xa167,	// (0x000650cc) scroll_pane_cp02

0x1558,	// (0x0005c4bd) help_list_pane_t1_ParamLimits

0x1558,	// (0x0005c4bd) help_list_pane_t1

0xa170,	// (0x000650d5) bg_notes_pane_g2

0xa178,	// (0x000650dd) bg_notes_pane_g3

0xa180,	// (0x000650e5) notes_bg_pane_g1

0xa188,	// (0x000650ed) notes_bg_pane_g4

0xa190,	// (0x000650f5) notes_bg_pane_g5

0xa198,	// (0x000650fd) notes_bg_pane_g6

0xa1a0,	// (0x00065105) notes_bg_pane_g7

0xa1a8,	// (0x0006510d) notes_bg_pane_g8

0xa1b0,	// (0x00065115) notes_bg_pane_g9

0x0006,

0xf1c3,	// (0x0006a128) notes_bg_pane_g

0xa1b8,	// (0x0006511d) list_notes_text_pane_ParamLimits

0xa1b8,	// (0x0006511d) list_notes_text_pane

0xa1cf,	// (0x00065134) list_notes_text_pane_g1

0x1578,	// (0x0005c4dd) list_notes_text_pane_t1

0xa035,	// (0x00064f9a) listscroll_cale_week_pane

0x15a3,	// (0x0005c508) bg_cale_heading_pane

0xa1e9,	// (0x0006514e) bg_cale_pane_cp01

0x15bb,	// (0x0005c520) cale_week_corner_pane

0x15cc,	// (0x0005c531) cale_week_day_heading_pane

0x15e4,	// (0x0005c549) cale_week_scroll_pane_g1

0x15f9,	// (0x0005c55e) cale_week_scroll_pane_g2

0x160a,	// (0x0005c56f) cale_week_scroll_pane_g3

0x161b,	// (0x0005c580) cale_week_scroll_pane_g4

0x162c,	// (0x0005c591) cale_week_scroll_pane_g5

0x163f,	// (0x0005c5a4) cale_week_scroll_pane_g6

0x1652,	// (0x0005c5b7) cale_week_scroll_pane_g7

0x1665,	// (0x0005c5ca) cale_week_scroll_pane_g8

0x1678,	// (0x0005c5dd) cale_week_scroll_pane_g9

0x1689,	// (0x0005c5ee) cale_week_scroll_pane_g10

0x169a,	// (0x0005c5ff) cale_week_scroll_pane_g11

0x16ab,	// (0x0005c610) cale_week_scroll_pane_g12

0x16bc,	// (0x0005c621) cale_week_scroll_pane_g13

0x16cd,	// (0x0005c632) cale_week_scroll_pane_g14

0x16de,	// (0x0005c643) cale_week_scroll_pane_g15

0x000e,

0xf1d2,	// (0x0006a137) cale_week_scroll_pane_g

0x16ef,	// (0x0005c654) cale_week_time_pane

0x1702,	// (0x0005c667) grid_cale_week_pane

0x1717,	// (0x0005c67c) scroll_pane_cp08

0x1731,	// (0x0005c696) cell_cale_week_pane_ParamLimits

0x1731,	// (0x0005c696) cell_cale_week_pane

0x1771,	// (0x0005c6d6) cale_week_day_heading_pane_t1

0x1785,	// (0x0005c6ea) cale_week_day_heading_pane_t2

0x1799,	// (0x0005c6fe) cale_week_day_heading_pane_t3

0x17ad,	// (0x0005c712) cale_week_day_heading_pane_t4

0x17c1,	// (0x0005c726) cale_week_day_heading_pane_t5

0x17d5,	// (0x0005c73a) cale_week_day_heading_pane_t6

0x17eb,	// (0x0005c750) cale_week_day_heading_pane_t7

0x0006,

0xf1f1,	// (0x0006a156) cale_week_day_heading_pane_t

0xa214,	// (0x00065179) bg_cale_side_pane

0x17ff,	// (0x0005c764) cale_week_time_pane_t1

0x1817,	// (0x0005c77c) cale_week_time_pane_t2

0x182f,	// (0x0005c794) cale_week_time_pane_t3

0x1847,	// (0x0005c7ac) cale_week_time_pane_t4

0x185f,	// (0x0005c7c4) cale_week_time_pane_t5

0x1877,	// (0x0005c7dc) cale_week_time_pane_t6

0x188f,	// (0x0005c7f4) cale_week_time_pane_t7

0x18a7,	// (0x0005c80c) cale_week_time_pane_t8

0x0007,

0xf200,	// (0x0006a165) cale_week_time_pane_t

0x18bf,	// (0x0005c824) cell_cale_week_pane_g2

0x18d8,	// (0x0005c83d) cell_cale_week_pane_g3_ParamLimits

0x18d8,	// (0x0005c83d) cell_cale_week_pane_g3

0xa222,	// (0x00065187) grid_highlight_pane_cp07

0xa22a,	// (0x0006518f) listscroll_gms_pane

0xa234,	// (0x00065199) grid_gms_pane

0xa23d,	// (0x000651a2) listscroll_gms_pane_g1

0xa245,	// (0x000651aa) listscroll_gms_pane_g2

0x0001,

0xf211,	// (0x0006a176) listscroll_gms_pane_g

0x18f0,	// (0x0005c855) scroll_pane_cp010

0x18fb,	// (0x0005c860) cell_gms_pane_ParamLimits

0x18fb,	// (0x0005c860) cell_gms_pane

0x190e,	// (0x0005c873) cell_gms_pane_g1

0xa24d,	// (0x000651b2) cell_gms_pane_g2

0xa1cf,	// (0x00065134) cell_gms_pane_g3

0xa255,	// (0x000651ba) cell_gms_pane_g4

0x0003,

0xf216,	// (0x0006a17b) cell_gms_pane_g

0xa25e,	// (0x000651c3) grid_highlight_pane_cp09

0x3c7e,	// (0x0005ebe3) phob_pre_status_pane_g1

0x3c86,	// (0x0005ebeb) phob_pre_status_pane_g2

0x3c8e,	// (0x0005ebf3) phob_pre_status_pane_g3

0x3c96,	// (0x0005ebfb) phob_pre_status_pane_g4

0x0004,

0xf605,	// (0x0006a56a) phob_pre_status_pane_g

0x3ca8,	// (0x0005ec0d) phob_pre_status_pane_t1

0x3cb6,	// (0x0005ec1b) phob_pre_status_pane_t2

0x3cc6,	// (0x0005ec2b) phob_pre_status_pane_t3

0x0002,

0xf610,	// (0x0006a575) phob_pre_status_pane_t

0x9c9f,	// (0x00064c04) bg_list_pane_cp05

0xa26e,	// (0x000651d3) grid_vorec_pane

0xa276,	// (0x000651db) vorec_t1

0xa284,	// (0x000651e9) vorec_t2

0xa292,	// (0x000651f7) vorec_t3

0xa2a0,	// (0x00065205) vorec_t4

0xa2ae,	// (0x00065213) vorec_t5

0xa2bc,	// (0x00065221) vorec_t6

0x0006,

0xf21f,	// (0x0006a184) vorec_t

0xa2d8,	// (0x0006523d) wait_bar_pane_cp01

0xa2e0,	// (0x00065245) cell_vorec_pane_ParamLimits

0xa2e0,	// (0x00065245) cell_vorec_pane

0xa2f3,	// (0x00065258) cell_vorec_pane_g1

0x9c9f,	// (0x00064c04) grid_highlight_pane_cp05

0x192e,	// (0x0005c893) cams_zoom_pane

0x193d,	// (0x0005c8a2) image_vga_pane

0x1957,	// (0x0005c8bc) main_camera_pane_g1

0x1969,	// (0x0005c8ce) main_camera_pane_g2

0x197b,	// (0x0005c8e0) main_camera_pane_g3

0x198d,	// (0x0005c8f2) main_camera_pane_g4

0x199f,	// (0x0005c904) main_camera_pane_g5

0x19b1,	// (0x0005c916) main_camera_pane_g6

0x19c3,	// (0x0005c928) main_camera_pane_g7

0x0007,

0xf22e,	// (0x0006a193) main_camera_pane_g

0x19d5,	// (0x0005c93a) main_camera_pane_t1

0x19eb,	// (0x0005c950) main_camera_pane_t2

0x0001,

0xf23f,	// (0x0006a1a4) main_camera_pane_t

0x1a27,	// (0x0005c98c) cams_zoom_pane_cp_ParamLimits

0x1a27,	// (0x0005c98c) cams_zoom_pane_cp

0x1a4f,	// (0x0005c9b4) image_cif_pane_ParamLimits

0x1a4f,	// (0x0005c9b4) image_cif_pane

0x1a8a,	// (0x0005c9ef) image_subqcif_pane

0x1a92,	// (0x0005c9f7) main_video_pane_g1_ParamLimits

0x1a92,	// (0x0005c9f7) main_video_pane_g1

0x1ab6,	// (0x0005ca1b) main_video_pane_g2_ParamLimits

0x1ab6,	// (0x0005ca1b) main_video_pane_g2

0x1aec,	// (0x0005ca51) main_video_pane_g3_ParamLimits

0x1aec,	// (0x0005ca51) main_video_pane_g3

0x1b1c,	// (0x0005ca81) main_video_pane_g4_ParamLimits

0x1b1c,	// (0x0005ca81) main_video_pane_g4

0x1b4c,	// (0x0005cab1) main_video_pane_g5_ParamLimits

0x1b4c,	// (0x0005cab1) main_video_pane_g5

0xa309,	// (0x0006526e) main_video_pane_g6_ParamLimits

0xa309,	// (0x0006526e) main_video_pane_g6

0x0006,

0xf244,	// (0x0006a1a9) main_video_pane_g_ParamLimits

0xf244,	// (0x0006a1a9) main_video_pane_g

0x1b77,	// (0x0005cadc) main_video_pane_t1_ParamLimits

0x1b77,	// (0x0005cadc) main_video_pane_t1

0xa323,	// (0x00065288) cams_zoom_pane_g1

0xa32c,	// (0x00065291) cams_zoom_pane_g2

0xa335,	// (0x0006529a) cams_zoom_pane_g3

0xa33e,	// (0x000652a3) cams_zoom_pane_g4

0x0003,

0xf253,	// (0x0006a1b8) cams_zoom_pane_g

0x1bd4,	// (0x0005cb39) grid_cams_pane

0x1bee,	// (0x0005cb53) linegrid_cams_pane

0x1c01,	// (0x0005cb66) cell_cams_pane_ParamLimits

0x1c01,	// (0x0005cb66) cell_cams_pane

0xa347,	// (0x000652ac) cams_burst_image_pane

0xa34f,	// (0x000652b4) cell_cams_pane_g1

0x9c9f,	// (0x00064c04) grid_highlight_pane_cp03

0xa0ae,	// (0x00065013) mp_bg_pane_g1

0x9c9f,	// (0x00064c04) bg_list_pane_cp03

0xbfed,	// (0x00066f52) bg_mp_pane

0xbff5,	// (0x00066f5a) grid_mp_pane

0xbffd,	// (0x00066f62) media_player_g1

0xc005,	// (0x00066f6a) media_player_t1

0xc013,	// (0x00066f78) media_player_t2

0xc021,	// (0x00066f86) media_player_t3

0xc02f,	// (0x00066f94) media_player_t4

0xc03d,	// (0x00066fa2) media_player_t5

0xc04b,	// (0x00066fb0) media_player_t6

0xc059,	// (0x00066fbe) media_player_t7

0x0006,

0xf5ef,	// (0x0006a554) media_player_t

0xc067,	// (0x00066fcc) wait_bar_pane_cp02

0xf5d4,	// (0x0006a539) main_usb_pane_t

0x3c75,	// (0x0005ebda) cell_mp_pane

0xa0ae,	// (0x00065013) cell_mp_pane_g1

0x9c9f,	// (0x00064c04) grid_highlight_pane_cp06

0xa357,	// (0x000652bc) grid_skin_colour_pane

0xa35f,	// (0x000652c4) list_highlight_pane_cp03

0x1d19,	// (0x0005cc7e) skin_g1

0xa367,	// (0x000652cc) skin_t1

0xa376,	// (0x000652db) skin_t2

0x0001,

0xf288,	// (0x0006a1ed) skin_t

0x1d21,	// (0x0005cc86) cell_skin_colour_pane_ParamLimits

0x1d21,	// (0x0005cc86) cell_skin_colour_pane

0xa384,	// (0x000652e9) cell_skin_colour_pane_g1

0x1d9a,	// (0x0005ccff) call_video_g1_ParamLimits

0x1d9a,	// (0x0005ccff) call_video_g1

0x1db6,	// (0x0005cd1b) call_video_g2_ParamLimits

0x1db6,	// (0x0005cd1b) call_video_g2

0x0001,

0xf28d,	// (0x0006a1f2) call_video_g_ParamLimits

0xf28d,	// (0x0006a1f2) call_video_g

0x1e08,	// (0x0005cd6d) call_video_uplink_pane_cp1_ParamLimits

0x1e08,	// (0x0005cd6d) call_video_uplink_pane_cp1

0xa396,	// (0x000652fb) call_video_uplink_pane_cp2

0x1ea7,	// (0x0005ce0c) video_down_crop_pane_ParamLimits

0x1ea7,	// (0x0005ce0c) video_down_crop_pane

0x1f90,	// (0x0005cef5) video_down_pane_ParamLimits

0x1f90,	// (0x0005cef5) video_down_pane

0xa39e,	// (0x00065303) video_down_subqcif_pane_ParamLimits

0xa39e,	// (0x00065303) video_down_subqcif_pane

0xa3b6,	// (0x0006531b) video_down_subqcif_pane_cp_ParamLimits

0xa3b6,	// (0x0006531b) video_down_subqcif_pane_cp

0xa3da,	// (0x0006533f) im_reading_pane_ParamLimits

0xa3da,	// (0x0006533f) im_reading_pane

0x209e,	// (0x0005d003) im_writing_pane_ParamLimits

0x209e,	// (0x0005d003) im_writing_pane

0x20b4,	// (0x0005d019) im_reading_pane_t1

0xa3f4,	// (0x00065359) list_im_pane

0xa405,	// (0x0006536a) scroll_pane_cp07

0x20f0,	// (0x0005d055) im_writing_pane_t1_ParamLimits

0x20f0,	// (0x0005d055) im_writing_pane_t1

0xa41e,	// (0x00065383) im_writing_pane_t2_ParamLimits

0xa41e,	// (0x00065383) im_writing_pane_t2

0x0001,

0xf297,	// (0x0006a1fc) im_writing_pane_t_ParamLimits

0xf297,	// (0x0006a1fc) im_writing_pane_t

0x9c9f,	// (0x00064c04) input_focus_pane_cp04

0x9c9f,	// (0x00064c04) input_focus_pane_cp05

0x2105,	// (0x0005d06a) list_im_single_pane_ParamLimits

0x2105,	// (0x0005d06a) list_im_single_pane

0x211b,	// (0x0005d080) list_single_im_pane_t1

0x3c35,	// (0x0005eb9a) blid_accuracy_pane

0x3c3d,	// (0x0005eba2) blid_compass_pane

0x3c47,	// (0x0005ebac) main_location_t1

0x3c57,	// (0x0005ebbc) main_location_t2

0x3c67,	// (0x0005ebcc) main_location_t3

0x0002,

0xf5fe,	// (0x0006a563) main_location_t

0x9c9f,	// (0x00064c04) aid_levels_location

0xa0ae,	// (0x00065013) blid_accuracy_pane_g1

0xa0ae,	// (0x00065013) blid_accuracy_pane_g2

0x0001,

0xf2f9,	// (0x0006a25e) blid_accuracy_pane_g

0xa466,	// (0x000653cb) wml_content_pane

0xa4a4,	// (0x00065409) wml_button_pane_ParamLimits

0xa4a4,	// (0x00065409) wml_button_pane

0x212a,	// (0x0005d08f) wml_list_single_large_pane_ParamLimits

0x212a,	// (0x0005d08f) wml_list_single_large_pane

0x2141,	// (0x0005d0a6) wml_list_single_medium_pane_ParamLimits

0x2141,	// (0x0005d0a6) wml_list_single_medium_pane

0x2159,	// (0x0005d0be) wml_list_single_small_pane_ParamLimits

0x2159,	// (0x0005d0be) wml_list_single_small_pane

0xa4b8,	// (0x0006541d) wml_selection_box_pane_ParamLimits

0xa4b8,	// (0x0006541d) wml_selection_box_pane

0xa4cb,	// (0x00065430) wml_list_single_pane_t1

0xa4da,	// (0x0006543f) wml_list_single_medium_pane_t1

0xa4e9,	// (0x0006544e) wml_list_single_large_pane_t1

0xa4f8,	// (0x0006545d) input_focus_pane_cp02_ParamLimits

0xa4f8,	// (0x0006545d) input_focus_pane_cp02

0xa50b,	// (0x00065470) wml_selection_box_pane_g1

0xa514,	// (0x00065479) wml_selection_box_pane_t1_ParamLimits

0xa514,	// (0x00065479) wml_selection_box_pane_t1

0x9efa,	// (0x00064e5f) bg_wml_button_pane_ParamLimits

0x9efa,	// (0x00064e5f) bg_wml_button_pane

0xa52c,	// (0x00065491) wml_button_pane_g1

0xa534,	// (0x00065499) wml_button_pane_t1

0xa52c,	// (0x00065491) wml_button_bg_pane_g1

0xa544,	// (0x000654a9) wml_button_bg_pane_g2

0xa54c,	// (0x000654b1) wml_button_bg_pane_g3

0xa554,	// (0x000654b9) wml_button_bg_pane_g4

0xa55c,	// (0x000654c1) wml_button_bg_pane_g5

0xa564,	// (0x000654c9) wml_button_bg_pane_g6

0xa56c,	// (0x000654d1) wml_button_bg_pane_g7

0xa574,	// (0x000654d9) wml_button_bg_pane_g8

0xa57c,	// (0x000654e1) wml_button_bg_pane_g9

0x0008,

0xf29c,	// (0x0006a201) wml_button_bg_pane_g

0x2177,	// (0x0005d0dc) bg_list_pane_cp02

0xa584,	// (0x000654e9) mce_header_pane_ParamLimits

0xa584,	// (0x000654e9) mce_header_pane

0xa59a,	// (0x000654ff) mce_icon_pane

0xa59a,	// (0x000654ff) mce_image_pane

0xa5a3,	// (0x00065508) mce_text_pane_ParamLimits

0xa5a3,	// (0x00065508) mce_text_pane

0x217f,	// (0x0005d0e4) scroll_pane_cp03

0xa49c,	// (0x00065401) scroll_pane_cp04

0xa5b6,	// (0x0006551b) scroll_pane_cp05_ParamLimits

0xa5b6,	// (0x0006551b) scroll_pane_cp05

0x2189,	// (0x0005d0ee) mce_header_field_pane_ParamLimits

0x2189,	// (0x0005d0ee) mce_header_field_pane

0x21a0,	// (0x0005d105) mce_header_field_pane_2_ParamLimits

0x21a0,	// (0x0005d105) mce_header_field_pane_2

0x21b6,	// (0x0005d11b) mce_header_field_pane_3

0x21be,	// (0x0005d123) list_single_mce_message_pane_ParamLimits

0x21be,	// (0x0005d123) list_single_mce_message_pane

0x21d6,	// (0x0005d13b) list_single_mce_smart_pane_ParamLimits

0x21d6,	// (0x0005d13b) list_single_mce_smart_pane

0xa5c2,	// (0x00065527) input_focus_pane_cp03

0xa5cb,	// (0x00065530) list_header_data_pane

0x21f9,	// (0x0005d15e) mce_header_field_pane_t1

0x2209,	// (0x0005d16e) list_single_mce_header_pane_ParamLimits

0x2209,	// (0x0005d16e) list_single_mce_header_pane

0xa5d3,	// (0x00065538) list_single_mce_header_pane_t1

0xa5e2,	// (0x00065547) list_single_mce_message_pane_g1

0xa5ea,	// (0x0006554f) list_single_mce_message_pane_t1

0x223b,	// (0x0005d1a0) bg_cale_heading_pane_cp01_ParamLimits

0x223b,	// (0x0005d1a0) bg_cale_heading_pane_cp01

0xa5f8,	// (0x0006555d) bg_cale_pane_cp02_ParamLimits

0xa5f8,	// (0x0006555d) bg_cale_pane_cp02

0x225e,	// (0x0005d1c3) cale_month_corner_pane

0x2274,	// (0x0005d1d9) cale_month_day_heading_pane_ParamLimits

0x2274,	// (0x0005d1d9) cale_month_day_heading_pane

0x22a7,	// (0x0005d20c) cale_month_pane_g1_ParamLimits

0x22a7,	// (0x0005d20c) cale_month_pane_g1

0x22c3,	// (0x0005d228) cale_month_pane_g2_ParamLimits

0x22c3,	// (0x0005d228) cale_month_pane_g2

0x22de,	// (0x0005d243) cale_month_pane_g3_ParamLimits

0x22de,	// (0x0005d243) cale_month_pane_g3

0x230a,	// (0x0005d26f) cale_month_pane_g4_ParamLimits

0x230a,	// (0x0005d26f) cale_month_pane_g4

0x2336,	// (0x0005d29b) cale_month_pane_g5_ParamLimits

0x2336,	// (0x0005d29b) cale_month_pane_g5

0x236a,	// (0x0005d2cf) cale_month_pane_g6_ParamLimits

0x236a,	// (0x0005d2cf) cale_month_pane_g6

0x23a6,	// (0x0005d30b) cale_month_pane_g7_ParamLimits

0x23a6,	// (0x0005d30b) cale_month_pane_g7

0x23e2,	// (0x0005d347) cale_month_pane_g8_ParamLimits

0x23e2,	// (0x0005d347) cale_month_pane_g8

0x241e,	// (0x0005d383) cale_month_pane_g9_ParamLimits

0x241e,	// (0x0005d383) cale_month_pane_g9

0x2458,	// (0x0005d3bd) cale_month_pane_g10_ParamLimits

0x2458,	// (0x0005d3bd) cale_month_pane_g10

0x2492,	// (0x0005d3f7) cale_month_pane_g11_ParamLimits

0x2492,	// (0x0005d3f7) cale_month_pane_g11

0x24cc,	// (0x0005d431) cale_month_pane_g12_ParamLimits

0x24cc,	// (0x0005d431) cale_month_pane_g12

0x2506,	// (0x0005d46b) cale_month_pane_g13_ParamLimits

0x2506,	// (0x0005d46b) cale_month_pane_g13

0x000c,

0xf2af,	// (0x0006a214) cale_month_pane_g_ParamLimits

0xf2af,	// (0x0006a214) cale_month_pane_g

0x2540,	// (0x0005d4a5) cale_month_week_pane

0x2553,	// (0x0005d4b8) grid_cale_month_pane_ParamLimits

0x2553,	// (0x0005d4b8) grid_cale_month_pane

0x2581,	// (0x0005d4e6) cale_month_day_heading_pane_t1

0x25df,	// (0x0005d544) cale_month_day_heading_pane_t2

0x2644,	// (0x0005d5a9) cale_month_day_heading_pane_t3

0x26a9,	// (0x0005d60e) cale_month_day_heading_pane_t4

0x270e,	// (0x0005d673) cale_month_day_heading_pane_t5

0x2783,	// (0x0005d6e8) cale_month_day_heading_pane_t6

0x27f8,	// (0x0005d75d) cale_month_day_heading_pane_t7

0x0006,

0xf2ca,	// (0x0006a22f) cale_month_day_heading_pane_t

0xa214,	// (0x00065179) bg_cale_side_pane_cp01

0x286d,	// (0x0005d7d2) cale_month_week_pane_t1

0x2884,	// (0x0005d7e9) cale_month_week_pane_t2

0x289b,	// (0x0005d800) cale_month_week_pane_t3

0x28b2,	// (0x0005d817) cale_month_week_pane_t4

0x28c9,	// (0x0005d82e) cale_month_week_pane_t5

0x28e0,	// (0x0005d845) cale_month_week_pane_t6

0x0005,

0xf2d9,	// (0x0006a23e) cale_month_week_pane_t

0x28f7,	// (0x0005d85c) cell_cale_month_pane_ParamLimits

0x28f7,	// (0x0005d85c) cell_cale_month_pane

0xa62d,	// (0x00065592) cell_cale_month_pane_g1

0x29f7,	// (0x0005d95c) cell_cale_month_pane_t1_ParamLimits

0x29f7,	// (0x0005d95c) cell_cale_month_pane_t1

0xa222,	// (0x00065187) grid_highlight_pane_cp08

0xa0ae,	// (0x00065013) main_smil_g1

0x2a13,	// (0x0005d978) smil_status_pane

0xa639,	// (0x0006559e) smil_text_pane

0xbf05,	// (0x00066e6a) bg_popup_call3_rect_pane_g8

0xbf0d,	// (0x00066e72) bg_popup_call3_rect_pane_g9

0x0008,

0xf592,	// (0x0006a4f7) bg_popup_call3_rect_pane_g

0xc18f,	// (0x000670f4) smil_status_volume_pane_g1

0xa643,	// (0x000655a8) smil_status_pane_t1

0xc1c2,	// (0x00067127) volume_smil_pane

0xa65a,	// (0x000655bf) list_smil_text_pane

0x2a28,	// (0x0005d98d) scroll_pane_cp011

0x2a33,	// (0x0005d998) smil_text_list_pane_t1_ParamLimits

0x2a33,	// (0x0005d998) smil_text_list_pane_t1

0xa664,	// (0x000655c9) aid_volume_smil_ParamLimits

0xa664,	// (0x000655c9) aid_volume_smil

0xa0ae,	// (0x00065013) smil_volume_pane_g1

0xa0ae,	// (0x00065013) smil_volume_pane_g2

0x0001,

0xf2f9,	// (0x0006a25e) smil_volume_pane_g

0xa035,	// (0x00064f9a) listscroll_cale_day_pane

0xa686,	// (0x000655eb) bg_cale_pane

0xa69e,	// (0x00065603) list_cale_pane

0xa6af,	// (0x00065614) scroll_pane_cp09

0xa6c0,	// (0x00065625) cale_bg_pane_g1

0xa6c8,	// (0x0006562d) cale_bg_pane_g2

0xa6d0,	// (0x00065635) cale_bg_pane_g3

0xa6d8,	// (0x0006563d) cale_bg_pane_g4

0xa6e0,	// (0x00065645) cale_bg_pane_g5

0xa6e8,	// (0x0006564d) cale_bg_pane_g6

0xa6f0,	// (0x00065655) cale_bg_pane_g7

0xa6f8,	// (0x0006565d) cale_bg_pane_g8

0xa700,	// (0x00065665) cale_bg_pane_g9

0x0008,

0xf2fe,	// (0x0006a263) cale_bg_pane_g

0x2a87,	// (0x0005d9ec) list_cale_time_pane_ParamLimits

0x2a87,	// (0x0005d9ec) list_cale_time_pane

0x2a9c,	// (0x0005da01) list_cale_time_pane_g1_ParamLimits

0x2a9c,	// (0x0005da01) list_cale_time_pane_g1

0xa708,	// (0x0006566d) list_cale_time_pane_g2_ParamLimits

0xa708,	// (0x0006566d) list_cale_time_pane_g2

0x2aa8,	// (0x0005da0d) list_cale_time_pane_g3_ParamLimits

0x2aa8,	// (0x0005da0d) list_cale_time_pane_g3

0x2ac4,	// (0x0005da29) list_cale_time_pane_g4_ParamLimits

0x2ac4,	// (0x0005da29) list_cale_time_pane_g4

0x2ad2,	// (0x0005da37) list_cale_time_pane_g5_ParamLimits

0x2ad2,	// (0x0005da37) list_cale_time_pane_g5

0x0005,

0xf311,	// (0x0006a276) list_cale_time_pane_g_ParamLimits

0xf311,	// (0x0006a276) list_cale_time_pane_g

0x2ae0,	// (0x0005da45) list_cale_time_pane_t1_ParamLimits

0x2ae0,	// (0x0005da45) list_cale_time_pane_t1

0x2b08,	// (0x0005da6d) list_cale_time_pane_t2_ParamLimits

0x2b08,	// (0x0005da6d) list_cale_time_pane_t2

0x2eaa,	// (0x0005de0f) aid_blid_cardinal_pane

0x2ee8,	// (0x0005de4d) compass_pane_t4

0x2b30,	// (0x0005da95) list_cale_time_pane_t4_ParamLimits

0x2b30,	// (0x0005da95) list_cale_time_pane_t4

0x2ef6,	// (0x0005de5b) compass_pane_t5

0x2f04,	// (0x0005de69) compass_pane_t6

0x2f12,	// (0x0005de77) compass_pane_t7

0xabb1,	// (0x00065b16) navi_pane_cc_t1

0xad18,	// (0x00065c7d) aid_phob_thumbnail_center_pane

0x3649,	// (0x0005e5ae) main_postcard_pane_g4_ParamLimits

0x0002,

0xf31e,	// (0x0006a283) list_cale_time_pane_t_ParamLimits

0xf31e,	// (0x0006a283) list_cale_time_pane_t

0x98f8,	// (0x0006485d) bg_popup_window_pane_cp02_ParamLimits

0x98f8,	// (0x0006485d) bg_popup_window_pane_cp02

0xa722,	// (0x00065687) heading_pane_cp01_ParamLimits

0xa722,	// (0x00065687) heading_pane_cp01

0xa72e,	// (0x00065693) loc_req_pane_ParamLimits

0xa72e,	// (0x00065693) loc_req_pane

0xa73e,	// (0x000656a3) loc_type_pane_ParamLimits

0xa73e,	// (0x000656a3) loc_type_pane

0xa750,	// (0x000656b5) loc_type_pane_t1_ParamLimits

0xa750,	// (0x000656b5) loc_type_pane_t1

0xa762,	// (0x000656c7) loc_type_pane_t2_ParamLimits

0xa762,	// (0x000656c7) loc_type_pane_t2

0xa774,	// (0x000656d9) loc_type_pane_t3_ParamLimits

0xa774,	// (0x000656d9) loc_type_pane_t3

0x0002,

0xf325,	// (0x0006a28a) loc_type_pane_t_ParamLimits

0xf325,	// (0x0006a28a) loc_type_pane_t

0xa786,	// (0x000656eb) list_loc_req_pane

0xa790,	// (0x000656f5) scroll_pane_cp012

0x2b58,	// (0x0005dabd) list_single_loc_request_popup_menu_pane_ParamLimits

0x2b58,	// (0x0005dabd) list_single_loc_request_popup_menu_pane

0xa79b,	// (0x00065700) list_single_loc_request_popup_menu_pane_g1_ParamLimits

0xa79b,	// (0x00065700) list_single_loc_request_popup_menu_pane_g1

0xa7a7,	// (0x0006570c) list_single_loc_request_popup_menu_pane_g2_ParamLimits

0xa7a7,	// (0x0006570c) list_single_loc_request_popup_menu_pane_g2

0x0001,

0xf32c,	// (0x0006a291) list_single_loc_request_popup_menu_pane_g_ParamLimits

0xf32c,	// (0x0006a291) list_single_loc_request_popup_menu_pane_g

0xa7b3,	// (0x00065718) list_single_loc_request_popup_menu_pane_t1_ParamLimits

0xa7b3,	// (0x00065718) list_single_loc_request_popup_menu_pane_t1

0x9efa,	// (0x00064e5f) bg_popup_window_pane_cp03_ParamLimits

0x9efa,	// (0x00064e5f) bg_popup_window_pane_cp03

0xa7c9,	// (0x0006572e) heading_loc_req_pane_ParamLimits

0xa7c9,	// (0x0006572e) heading_loc_req_pane

0x2b65,	// (0x0005daca) popup_dyc_status_message_window_g1_ParamLimits

0x2b65,	// (0x0005daca) popup_dyc_status_message_window_g1

0x2b79,	// (0x0005dade) popup_dyc_status_message_window_t1_ParamLimits

0x2b79,	// (0x0005dade) popup_dyc_status_message_window_t1

0x2b8e,	// (0x0005daf3) popup_dyc_status_message_window_t2_ParamLimits

0x2b8e,	// (0x0005daf3) popup_dyc_status_message_window_t2

0x2ba3,	// (0x0005db08) popup_dyc_status_message_window_t3_ParamLimits

0x2ba3,	// (0x0005db08) popup_dyc_status_message_window_t3

0x0002,

0xf331,	// (0x0006a296) popup_dyc_status_message_window_t_ParamLimits

0xf331,	// (0x0006a296) popup_dyc_status_message_window_t

0x9c9f,	// (0x00064c04) bg_heading_pane_cp01

0xa7d5,	// (0x0006573a) heading_loc_req_pane_g1

0xa7dd,	// (0x00065742) heading_loc_req_pane_g2

0xa7e5,	// (0x0006574a) heading_loc_req_pane_g3

0x0002,

0xf338,	// (0x0006a29d) heading_loc_req_pane_g

0xa7ed,	// (0x00065752) heading_loc_req_pane_t1

0xa7fc,	// (0x00065761) bg_popup_sub_pane_cp01_ParamLimits

0xa7fc,	// (0x00065761) bg_popup_sub_pane_cp01

0xa80a,	// (0x0006576f) popup_cale_events_window_g1_ParamLimits

0xa80a,	// (0x0006576f) popup_cale_events_window_g1

0xa82a,	// (0x0006578f) popup_cale_events_window_g2_ParamLimits

0xa82a,	// (0x0006578f) popup_cale_events_window_g2

0x0001,

0xf36c,	// (0x0006a2d1) popup_cale_events_window_g_ParamLimits

0xf36c,	// (0x0006a2d1) popup_cale_events_window_g

0xa84a,	// (0x000657af) popup_cale_events_window_t1_ParamLimits

0xa84a,	// (0x000657af) popup_cale_events_window_t1

0xa85c,	// (0x000657c1) popup_cale_events_window_t2_ParamLimits

0xa85c,	// (0x000657c1) popup_cale_events_window_t2

0xa89a,	// (0x000657ff) popup_cale_events_window_t3_ParamLimits

0xa89a,	// (0x000657ff) popup_cale_events_window_t3

0xa8d4,	// (0x00065839) popup_cale_events_window_t4_ParamLimits

0xa8d4,	// (0x00065839) popup_cale_events_window_t4

0x0003,

0xf371,	// (0x0006a2d6) popup_cale_events_window_t_ParamLimits

0xf371,	// (0x0006a2d6) popup_cale_events_window_t

0x2ca6,	// (0x0005dc0b) call_type_pane

0x2cb6,	// (0x0005dc1b) popup_call_status_window_g1

0x2cca,	// (0x0005dc2f) popup_call_status_window_g2

0x2cde,	// (0x0005dc43) popup_call_status_window_g3

0x0002,

0xf37a,	// (0x0006a2df) popup_call_status_window_g

0xa90a,	// (0x0006586f) call_type_pane_g1

0xa913,	// (0x00065878) call_type_pane_g2

0x0001,

0xf381,	// (0x0006a2e6) call_type_pane_g

0x9c9f,	// (0x00064c04) bg_popup_sub_pane_cp02

0xa91c,	// (0x00065881) listscroll_popup_wml_pane

0xa924,	// (0x00065889) list_wml_pane

0xa92e,	// (0x00065893) scroll_pane_cp013

0xa939,	// (0x0006589e) list_single_graphic_popup_wml_pane_ParamLimits

0xa939,	// (0x0006589e) list_single_graphic_popup_wml_pane

0xa0ae,	// (0x00065013) list_single_graphic_popup_wml_pane_g1

0xa94d,	// (0x000658b2) list_single_graphic_popup_wml_pane_g2

0x0001,

0xf386,	// (0x0006a2eb) list_single_graphic_popup_wml_pane_g

0xa955,	// (0x000658ba) list_single_graphic_popup_wml_pane_t1

0xa96b,	// (0x000658d0) aid_call_pane

0x9ef2,	// (0x00064e57) popup_clock_analogue_window_g1

0x9ef2,	// (0x00064e57) popup_clock_analogue_window_g2

0xa973,	// (0x000658d8) popup_clock_analogue_window_g3

0xa973,	// (0x000658d8) popup_clock_analogue_window_g4

0xa0ae,	// (0x00065013) popup_clock_analogue_window_g5

0x0004,

0xf38b,	// (0x0006a2f0) popup_clock_analogue_window_g

0xa97b,	// (0x000658e0) popup_clock_analogue_window_t1

0xa989,	// (0x000658ee) clock_digital_number_pane_ParamLimits

0xa989,	// (0x000658ee) clock_digital_number_pane

0xa995,	// (0x000658fa) clock_digital_number_pane_cp02_ParamLimits

0xa995,	// (0x000658fa) clock_digital_number_pane_cp02

0xa9a1,	// (0x00065906) clock_digital_number_pane_cp03_ParamLimits

0xa9a1,	// (0x00065906) clock_digital_number_pane_cp03

0xa9ad,	// (0x00065912) clock_digital_number_pane_cp04_ParamLimits

0xa9ad,	// (0x00065912) clock_digital_number_pane_cp04

0xa9b9,	// (0x0006591e) clock_digital_separator_pane_ParamLimits

0xa9b9,	// (0x0006591e) clock_digital_separator_pane

0xa9c5,	// (0x0006592a) popup_clock_digital_window_t1

0xa0ae,	// (0x00065013) clock_digital_number_pane_g1

0xa0ae,	// (0x00065013) clock_digital_number_pane_g2

0x0001,

0xf2f9,	// (0x0006a25e) clock_digital_number_pane_g

0xa0ae,	// (0x00065013) clock_digital_separator_pane_g1

0xa0ae,	// (0x00065013) clock_digital_separator_pane_g2

0x0001,

0xf2f9,	// (0x0006a25e) clock_digital_separator_pane_g

0x9c9f,	// (0x00064c04) bg_popup_window_pane_cp04

0xa9e2,	// (0x00065947) heading_pane_cp03

0xa9ea,	// (0x0006594f) listscroll_popup_gms_pane

0xa9f2,	// (0x00065957) grid_large_graphic_popup_pane

0xa9fc,	// (0x00065961) listscroll_popup_gms_pane_g1

0xaa04,	// (0x00065969) listscroll_popup_gms_pane_g2

0x0001,

0xf396,	// (0x0006a2fb) listscroll_popup_gms_pane_g

0xa49c,	// (0x00065401) scroll_pane_cp014

0xaa0c,	// (0x00065971) cell_large_graphic_popup_pane_ParamLimits

0xaa0c,	// (0x00065971) cell_large_graphic_popup_pane

0xaa24,	// (0x00065989) cell_large_graphic_popup_pane_g1_ParamLimits

0xaa24,	// (0x00065989) cell_large_graphic_popup_pane_g1

0xaa30,	// (0x00065995) cell_large_graphic_popup_pane_g2_ParamLimits

0xaa30,	// (0x00065995) cell_large_graphic_popup_pane_g2

0xaa3c,	// (0x000659a1) cell_large_graphic_popup_pane_g3_ParamLimits

0xaa3c,	// (0x000659a1) cell_large_graphic_popup_pane_g3

0xaa49,	// (0x000659ae) cell_large_graphic_popup_pane_g4_ParamLimits

0xaa49,	// (0x000659ae) cell_large_graphic_popup_pane_g4

0x0003,

0xf39b,	// (0x0006a300) cell_large_graphic_popup_pane_g_ParamLimits

0xf39b,	// (0x0006a300) cell_large_graphic_popup_pane_g

0xaa59,	// (0x000659be) grid_highlight_pane_cp010

0xa0ae,	// (0x00065013) bg_popup_call_pane_g1

0xaa63,	// (0x000659c8) list_single_graphic_popup_conf_pane_ParamLimits

0xaa63,	// (0x000659c8) list_single_graphic_popup_conf_pane

0xaa75,	// (0x000659da) list_highlight_pane_cp01

0xaa7e,	// (0x000659e3) list_single_graphic_popup_conf_pane_g1

0xaa86,	// (0x000659eb) list_single_graphic_popup_conf_pane_g2

0x0001,

0xf3a4,	// (0x0006a309) list_single_graphic_popup_conf_pane_g

0xaa8e,	// (0x000659f3) list_single_graphic_popup_conf_pane_t1

0xaa9c,	// (0x00065a01) linegrid_cams_pane_g1

0x2cee,	// (0x0005dc53) linegrid_cams_pane_g2

0xa1cf,	// (0x00065134) linegrid_cams_pane_g3

0xaaa5,	// (0x00065a0a) linegrid_cams_pane_g4

0x2cf7,	// (0x0005dc5c) linegrid_cams_pane_g5

0x2d00,	// (0x0005dc65) linegrid_cams_pane_g6

0xa255,	// (0x000651ba) linegrid_cams_pane_g7

0x0006,

0xf3a9,	// (0x0006a30e) linegrid_cams_pane_g

0xaaae,	// (0x00065a13) popup_clock_analogue_window

0xaaae,	// (0x00065a13) popup_clock_digital_window

0x9c9f,	// (0x00064c04) popup_phob_thumbnail_window

0xa0ae,	// (0x00065013) call_video_uplink_pane_g1

0xaab7,	// (0x00065a1c) call_video_uplink_pane_g2

0x0001,

0xf3b8,	// (0x0006a31d) call_video_uplink_pane_g

0xa222,	// (0x00065187) video_uplink_pane

0xaabf,	// (0x00065a24) mce_image_pane_g1

0x2d0b,	// (0x0005dc70) mce_image_pane_g2

0x2d13,	// (0x0005dc78) mce_image_pane_g3

0x2d1b,	// (0x0005dc80) mce_image_pane_g4

0x2d23,	// (0x0005dc88) mce_image_pane_g5

0x0004,

0xf3bd,	// (0x0006a322) mce_image_pane_g

0xaac9,	// (0x00065a2e) control_top_pane_stacon_cp01_ParamLimits

0xaac9,	// (0x00065a2e) control_top_pane_stacon_cp01

0xaadd,	// (0x00065a42) uni_indicator_pane_stacon_cp01_ParamLimits

0xaadd,	// (0x00065a42) uni_indicator_pane_stacon_cp01

0xaaee,	// (0x00065a53) bg_popup_sub_pane_cp03

0x2d2b,	// (0x0005dc90) chi_dic_find_pane

0x2d33,	// (0x0005dc98) listscroll_chi_dic_pane

0x2d3c,	// (0x0005dca1) main_pane_chidic_g1

0x2d4f,	// (0x0005dcb4) chi_dic_find_pane_t1

0xaaf8,	// (0x00065a5d) find_chidic_pane

0xab01,	// (0x00065a66) chi_dic_list_pane_ParamLimits

0xab01,	// (0x00065a66) chi_dic_list_pane

0xab12,	// (0x00065a77) scroll_pane_cp020

0x2d5d,	// (0x0005dcc2) find_chidic_pane_t1

0x9c9f,	// (0x00064c04) input_focus_pane_cp06

0x2d6c,	// (0x0005dcd1) list_chi_dic_pane_ParamLimits

0x2d6c,	// (0x0005dcd1) list_chi_dic_pane

0xab1a,	// (0x00065a7f) list_chi_dic_pane_t1_ParamLimits

0xab1a,	// (0x00065a7f) list_chi_dic_pane_t1

0x9c9f,	// (0x00064c04) list_highlight_pane_cp020

0xab2d,	// (0x00065a92) bg_cale_heading_pane_g1

0x2d80,	// (0x0005dce5) bg_cale_heading_pane_g2

0x2d88,	// (0x0005dced) bg_cale_heading_pane_g3

0x2d90,	// (0x0005dcf5) bg_cale_heading_pane_g4

0x2d9a,	// (0x0005dcff) bg_cale_heading_pane_g5

0x2da4,	// (0x0005dd09) bg_cale_heading_pane_g6

0x2dac,	// (0x0005dd11) bg_cale_heading_pane_g7

0x2db4,	// (0x0005dd19) bg_cale_heading_pane_g8

0x2dbe,	// (0x0005dd23) bg_cale_heading_pane_g9

0x0008,

0xf3c8,	// (0x0006a32d) bg_cale_heading_pane_g

0xab2d,	// (0x00065a92) bg_cale_side_pane_g1

0x2dc8,	// (0x0005dd2d) bg_cale_side_pane_g2

0x2dd0,	// (0x0005dd35) bg_cale_side_pane_g3

0x2dd8,	// (0x0005dd3d) bg_cale_side_pane_g4

0x2de0,	// (0x0005dd45) bg_cale_side_pane_g5

0x2de8,	// (0x0005dd4d) bg_cale_side_pane_g6

0x2df0,	// (0x0005dd55) bg_cale_side_pane_g7

0x2df8,	// (0x0005dd5d) bg_cale_side_pane_g8

0x2e00,	// (0x0005dd65) bg_cale_side_pane_g9

0x0008,

0xf3db,	// (0x0006a340) bg_cale_side_pane_g

0x2e08,	// (0x0005dd6d) popup_call_status_window_ParamLimits

0x2e08,	// (0x0005dd6d) popup_call_status_window

0xab35,	// (0x00065a9a) stacon_top_pane

0xab3d,	// (0x00065aa2) status_pane_ParamLimits

0xab3d,	// (0x00065aa2) status_pane

0xab52,	// (0x00065ab7) status_small_pane

0xab5a,	// (0x00065abf) control_pane

0x9c9f,	// (0x00064c04) stacon_bottom_pane

0xab62,	// (0x00065ac7) list_single_mce_smart_pane_t1_ParamLimits

0xab62,	// (0x00065ac7) list_single_mce_smart_pane_t1

0xab75,	// (0x00065ada) list_single_mce_smart_pane_t2_ParamLimits

0xab75,	// (0x00065ada) list_single_mce_smart_pane_t2

0x0001,

0xf3ee,	// (0x0006a353) list_single_mce_smart_pane_t_ParamLimits

0xf3ee,	// (0x0006a353) list_single_mce_smart_pane_t

0x2e4f,	// (0x0005ddb4) compass_pane

0x2e58,	// (0x0005ddbd) main_location2_pane_t1

0x2e6c,	// (0x0005ddd1) main_location2_pane_t2

0x2e80,	// (0x0005dde5) main_location2_pane_t3

0x0003,

0xf3f3,	// (0x0006a358) main_location2_pane_t

0xab94,	// (0x00065af9) compass_pane_g1_ParamLimits

0xab94,	// (0x00065af9) compass_pane_g1

0x2eca,	// (0x0005de2f) compass_pane_t1

0x2ed9,	// (0x0005de3e) compass_pane_t2

0x0005,

0xf3fc,	// (0x0006a361) compass_pane_t

0x2f20,	// (0x0005de85) text_secondary_cp61

0xaba8,	// (0x00065b0d) navi_pane_cams_g5

0xabcb,	// (0x00065b30) navi_pane_im_t1

0xabd9,	// (0x00065b3e) navi_pane_mp_g1_ParamLimits

0xabd9,	// (0x00065b3e) navi_pane_mp_g1

0xabed,	// (0x00065b52) navi_pane_mp_g2_ParamLimits

0xabed,	// (0x00065b52) navi_pane_mp_g2

0xabf9,	// (0x00065b5e) navi_pane_mp_g3_ParamLimits

0xabf9,	// (0x00065b5e) navi_pane_mp_g3

0x0002,

0xf410,	// (0x0006a375) navi_pane_mp_g_ParamLimits

0xf410,	// (0x0006a375) navi_pane_mp_g

0xac05,	// (0x00065b6a) navi_pane_mp_t1

0xac13,	// (0x00065b78) navi_pane_mp_t2

0x0002,

0xf417,	// (0x0006a37c) navi_pane_mp_t

0xac4f,	// (0x00065bb4) navi_pane_vt_g1

0xac05,	// (0x00065b6a) navi_pane_vt_t1

0xac57,	// (0x00065bbc) navi_slider_pane

0xac5f,	// (0x00065bc4) zooming_pane

0xac67,	// (0x00065bcc) navi_slider_pane_g1

0xac70,	// (0x00065bd5) navi_slider_pane_g2

0x0006,

0xf41e,	// (0x0006a383) navi_slider_pane_g

0xac9d,	// (0x00065c02) aid_levels_zoom

0xaca5,	// (0x00065c0a) zooming_pane_g1

0xacad,	// (0x00065c12) zooming_pane_g2

0xacad,	// (0x00065c12) zooming_pane_g3

0x0002,

0xf42d,	// (0x0006a392) zooming_pane_g

0xacb5,	// (0x00065c1a) level_10_zoom

0xacbe,	// (0x00065c23) level_11_zoom

0xacc7,	// (0x00065c2c) level_1_zoom

0xacd0,	// (0x00065c35) level_2_zoom

0xacd9,	// (0x00065c3e) level_3_zoom

0xace2,	// (0x00065c47) level_4_zoom

0xaceb,	// (0x00065c50) level_5_zoom

0xacf4,	// (0x00065c59) level_6_zoom

0xacfd,	// (0x00065c62) level_7_zoom

0xad06,	// (0x00065c6b) level_8_zoom

0xad0f,	// (0x00065c74) level_9_zoom

0xad20,	// (0x00065c85) popup_phob_thumbnail_window_g1

0xad28,	// (0x00065c8d) popup_phob_thumbnail_window_g2

0x0001,

0xf434,	// (0x0006a399) popup_phob_thumbnail_window_g

0xc06f,	// (0x00066fd4) level_1_location

0xc077,	// (0x00066fdc) level_2_location

0xc07f,	// (0x00066fe4) level_3_location

0xc087,	// (0x00066fec) level_4_location

0xac5f,	// (0x00065bc4) level_5_location

0x3049,	// (0x0005dfae) mce_icon_pane_g1

0x3051,	// (0x0005dfb6) mce_icon_pane_g2

0x0001,

0xf439,	// (0x0006a39e) mce_icon_pane_g

0x3059,	// (0x0005dfbe) main_mup_pane_g1_ParamLimits

0x3059,	// (0x0005dfbe) main_mup_pane_g1

0x306f,	// (0x0005dfd4) main_mup_pane_g2_ParamLimits

0x306f,	// (0x0005dfd4) main_mup_pane_g2

0x3087,	// (0x0005dfec) main_mup_pane_g3_ParamLimits

0x3087,	// (0x0005dfec) main_mup_pane_g3

0x309f,	// (0x0005e004) main_mup_pane_g4_ParamLimits

0x309f,	// (0x0005e004) main_mup_pane_g4

0x30b7,	// (0x0005e01c) main_mup_pane_g5_ParamLimits

0x30b7,	// (0x0005e01c) main_mup_pane_g5

0x30d3,	// (0x0005e038) main_mup_pane_g6_ParamLimits

0x30d3,	// (0x0005e038) main_mup_pane_g6

0x30eb,	// (0x0005e050) main_mup_pane_g7_ParamLimits

0x30eb,	// (0x0005e050) main_mup_pane_g7

0x3103,	// (0x0005e068) main_mup_pane_g8_ParamLimits

0x3103,	// (0x0005e068) main_mup_pane_g8

0x311b,	// (0x0005e080) main_mup_pane_g9_ParamLimits

0x311b,	// (0x0005e080) main_mup_pane_g9

0x3135,	// (0x0005e09a) main_mup_pane_g10_ParamLimits

0x3135,	// (0x0005e09a) main_mup_pane_g10

0x314f,	// (0x0005e0b4) main_mup_pane_g11_ParamLimits

0x314f,	// (0x0005e0b4) main_mup_pane_g11

0x3163,	// (0x0005e0c8) main_mup_pane_g12_ParamLimits

0x3163,	// (0x0005e0c8) main_mup_pane_g12

0x3179,	// (0x0005e0de) main_mup_pane_g13_ParamLimits

0x3179,	// (0x0005e0de) main_mup_pane_g13

0x000c,

0xf43e,	// (0x0006a3a3) main_mup_pane_g_ParamLimits

0xf43e,	// (0x0006a3a3) main_mup_pane_g

0x318d,	// (0x0005e0f2) main_mup_pane_t1_ParamLimits

0x318d,	// (0x0005e0f2) main_mup_pane_t1

0x31a7,	// (0x0005e10c) main_mup_pane_t2_ParamLimits

0x31a7,	// (0x0005e10c) main_mup_pane_t2

0x31bf,	// (0x0005e124) main_mup_pane_t3_ParamLimits

0x31bf,	// (0x0005e124) main_mup_pane_t3

0x31d7,	// (0x0005e13c) main_mup_pane_t4_ParamLimits

0x31d7,	// (0x0005e13c) main_mup_pane_t4

0x31f5,	// (0x0005e15a) main_mup_pane_t5_ParamLimits

0x31f5,	// (0x0005e15a) main_mup_pane_t5

0x320a,	// (0x0005e16f) main_mup_pane_t6_ParamLimits

0x320a,	// (0x0005e16f) main_mup_pane_t6

0x0005,

0xf459,	// (0x0006a3be) main_mup_pane_t_ParamLimits

0xf459,	// (0x0006a3be) main_mup_pane_t

0x321c,	// (0x0005e181) mup_progress_pane_ParamLimits

0x321c,	// (0x0005e181) mup_progress_pane

0x3228,	// (0x0005e18d) mup_visualizer_pane_ParamLimits

0x3228,	// (0x0005e18d) mup_visualizer_pane

0x325c,	// (0x0005e1c1) mup_volume_pane_ParamLimits

0x325c,	// (0x0005e1c1) mup_volume_pane

0xad30,	// (0x00065c95) mup_visualizer_pane_g1_ParamLimits

0xad30,	// (0x00065c95) mup_visualizer_pane_g1

0xad30,	// (0x00065c95) mup_visualizer_pane_g2_ParamLimits

0xad30,	// (0x00065c95) mup_visualizer_pane_g2

0xab94,	// (0x00065af9) mup_visualizer_pane_g3_ParamLimits

0xab94,	// (0x00065af9) mup_visualizer_pane_g3

0x0002,

0xf466,	// (0x0006a3cb) mup_visualizer_pane_g_ParamLimits

0xf466,	// (0x0006a3cb) mup_visualizer_pane_g

0xa0ae,	// (0x00065013) mup_volume_pane_g1

0xad46,	// (0x00065cab) mup_volume_pane_g2

0x0001,

0xf46d,	// (0x0006a3d2) mup_volume_pane_g

0xa0ae,	// (0x00065013) mup_progress_pane_g1

0xad4f,	// (0x00065cb4) mup_progress_pane_g2

0xad58,	// (0x00065cbd) mup_progress_pane_g3

0x0002,

0xf472,	// (0x0006a3d7) mup_progress_pane_g

0x9c9f,	// (0x00064c04) bg_popup_window_pane_cp05

0xad61,	// (0x00065cc6) heading_pane_cp02_ParamLimits

0xad61,	// (0x00065cc6) heading_pane_cp02

0xad7b,	// (0x00065ce0) list_popup_blid_pane

0xad83,	// (0x00065ce8) list_blid_sat_info_pane_ParamLimits

0xad83,	// (0x00065ce8) list_blid_sat_info_pane

0xad96,	// (0x00065cfb) list_blid_sat_info_pane_g1

0xad9e,	// (0x00065d03) list_blid_sat_info_pane_t1

0x3372,	// (0x0005e2d7) mup_equalizer_pane_ParamLimits

0x3372,	// (0x0005e2d7) mup_equalizer_pane

0x338b,	// (0x0005e2f0) mup_equalizer_pane_cp1_ParamLimits

0x338b,	// (0x0005e2f0) mup_equalizer_pane_cp1

0x33a8,	// (0x0005e30d) mup_equalizer_pane_cp2_ParamLimits

0x33a8,	// (0x0005e30d) mup_equalizer_pane_cp2

0x33c5,	// (0x0005e32a) mup_equalizer_pane_cp3_ParamLimits

0x33c5,	// (0x0005e32a) mup_equalizer_pane_cp3

0x33e6,	// (0x0005e34b) mup_equalizer_pane_cp4_ParamLimits

0x33e6,	// (0x0005e34b) mup_equalizer_pane_cp4

0x3407,	// (0x0005e36c) mup_equalizer_pane_cp5

0x341b,	// (0x0005e380) mup_equalizer_pane_cp6

0x342f,	// (0x0005e394) mup_equalizer_pane_cp7

0xbf8d,	// (0x00066ef2) bg_popup_call_poc_act_pane_g9

0xbf95,	// (0x00066efa) bg_popup_call_poc_act_pane_g10

0xbf9d,	// (0x00066f02) bg_popup_call_poc_act_pane_g11

0x000a,

0x9efa,	// (0x00064e5f) mup_scale_pane

0xa0ae,	// (0x00065013) mup_scale_pane_g1

0xadac,	// (0x00065d11) mup_scale_pane_g2

0x0006,

0xf48e,	// (0x0006a3f3) mup_scale_pane_g

0xadd0,	// (0x00065d35) msg_data_pane

0xadd8,	// (0x00065d3d) scroll_pane_cp017

0x3455,	// (0x0005e3ba) bg_list_pane_cp04_ParamLimits

0x3455,	// (0x0005e3ba) bg_list_pane_cp04

0xade0,	// (0x00065d45) msg_data_pane_g1

0x3475,	// (0x0005e3da) msg_data_pane_g2

0x2d13,	// (0x0005dc78) msg_data_pane_g3

0x347d,	// (0x0005e3e2) msg_data_pane_g4

0x3485,	// (0x0005e3ea) msg_data_pane_g5

0x348d,	// (0x0005e3f2) msg_data_pane_g6

0x3495,	// (0x0005e3fa) msg_data_pane_g7

0x0006,

0xf49d,	// (0x0006a402) msg_data_pane_g

0x349d,	// (0x0005e402) msg_text_pane_ParamLimits

0x349d,	// (0x0005e402) msg_text_pane

0x34c6,	// (0x0005e42b) qrid_highlight_pane_cp011_ParamLimits

0x34c6,	// (0x0005e42b) qrid_highlight_pane_cp011

0x9c9f,	// (0x00064c04) msg_body_pane

0x9c9f,	// (0x00064c04) msg_header_pane

0xadf1,	// (0x00065d56) input_focus_pane_cp07

0x34ea,	// (0x0005e44f) msg_header_pane_t1_ParamLimits

0x34ea,	// (0x0005e44f) msg_header_pane_t1

0x34fe,	// (0x0005e463) msg_header_pane_t2_ParamLimits

0x34fe,	// (0x0005e463) msg_header_pane_t2

0x0001,

0xf4b1,	// (0x0006a416) msg_header_pane_t_ParamLimits

0xf4b1,	// (0x0006a416) msg_header_pane_t

0xae06,	// (0x00065d6b) msg_body_pane_g1

0x3510,	// (0x0005e475) msg_body_pane_t1_ParamLimits

0x3510,	// (0x0005e475) msg_body_pane_t1

0x3541,	// (0x0005e4a6) msg_body_pane_t2_ParamLimits

0x3541,	// (0x0005e4a6) msg_body_pane_t2

0x3553,	// (0x0005e4b8) msg_body_pane_t3_ParamLimits

0x3553,	// (0x0005e4b8) msg_body_pane_t3

0x0002,

0xf4b6,	// (0x0006a41b) msg_body_pane_t_ParamLimits

0xf4b6,	// (0x0006a41b) msg_body_pane_t

0x359f,	// (0x0005e504) main_viewer_pane_g1_ParamLimits

0x359f,	// (0x0005e504) main_viewer_pane_g1

0x35ad,	// (0x0005e512) main_viewer_pane_g2_ParamLimits

0x35ad,	// (0x0005e512) main_viewer_pane_g2

0x35bb,	// (0x0005e520) main_viewer_pane_g3_ParamLimits

0x35bb,	// (0x0005e520) main_viewer_pane_g3

0x35ca,	// (0x0005e52f) main_viewer_pane_g4_ParamLimits

0x35ca,	// (0x0005e52f) main_viewer_pane_g4

0xae26,	// (0x00065d8b) main_viewer_pane_g5_ParamLimits

0xae26,	// (0x00065d8b) main_viewer_pane_g5

0xae26,	// (0x00065d8b) main_viewer_pane_g7_ParamLimits

0xae26,	// (0x00065d8b) main_viewer_pane_g7

0xae38,	// (0x00065d9d) main_viewer_pane_g8_ParamLimits

0xae38,	// (0x00065d9d) main_viewer_pane_g8

0x0007,

0xf4c6,	// (0x0006a42b) main_viewer_pane_g_ParamLimits

0xf4c6,	// (0x0006a42b) main_viewer_pane_g

0xae50,	// (0x00065db5) viewer_content_pane_ParamLimits

0xae50,	// (0x00065db5) viewer_content_pane

0x3606,	// (0x0005e56b) main_postcard_pane_g1_ParamLimits

0x3606,	// (0x0005e56b) main_postcard_pane_g1

0x361c,	// (0x0005e581) main_postcard_pane_g2_ParamLimits

0x361c,	// (0x0005e581) main_postcard_pane_g2

0x3632,	// (0x0005e597) main_postcard_pane_g3_ParamLimits

0x3632,	// (0x0005e597) main_postcard_pane_g3

0x0005,

0xf4d7,	// (0x0006a43c) main_postcard_pane_g_ParamLimits

0xf4d7,	// (0x0006a43c) main_postcard_pane_g

0x3649,	// (0x0005e5ae) main_postcard_pane_g4

0xc1a2,	// (0x00067107) smil_status_volume_pane_g2

0x368c,	// (0x0005e5f1) postcard_pane_ParamLimits

0x368c,	// (0x0005e5f1) postcard_pane

0xae5e,	// (0x00065dc3) postcard_pane_g1_ParamLimits

0xae5e,	// (0x00065dc3) postcard_pane_g1

0x36ce,	// (0x0005e633) postcard_pane_g2_ParamLimits

0x36ce,	// (0x0005e633) postcard_pane_g2

0x36da,	// (0x0005e63f) postcard_pane_g3_ParamLimits

0x36da,	// (0x0005e63f) postcard_pane_g3

0xae6c,	// (0x00065dd1) postcard_pane_g4_ParamLimits

0xae6c,	// (0x00065dd1) postcard_pane_g4

0x36e6,	// (0x0005e64b) postcard_pane_g5_ParamLimits

0x36e6,	// (0x0005e64b) postcard_pane_g5

0x36fb,	// (0x0005e660) postcard_pane_g6_ParamLimits

0x36fb,	// (0x0005e660) postcard_pane_g6

0xae5e,	// (0x00065dc3) postcard_pane_g7_ParamLimits

0xae5e,	// (0x00065dc3) postcard_pane_g7

0x0006,

0xf4e4,	// (0x0006a449) postcard_pane_g_ParamLimits

0xf4e4,	// (0x0006a449) postcard_pane_g

0x370f,	// (0x0005e674) main_mp2_pane_g1_ParamLimits

0x370f,	// (0x0005e674) main_mp2_pane_g1

0x371b,	// (0x0005e680) main_mp2_pane_g2_ParamLimits

0x371b,	// (0x0005e680) main_mp2_pane_g2

0x3727,	// (0x0005e68c) main_mp2_pane_g3_ParamLimits

0x3727,	// (0x0005e68c) main_mp2_pane_g3

0x0002,

0xf4f3,	// (0x0006a458) main_mp2_pane_g_ParamLimits

0xf4f3,	// (0x0006a458) main_mp2_pane_g

0x3733,	// (0x0005e698) main_mp2_pane_t1_ParamLimits

0x3733,	// (0x0005e698) main_mp2_pane_t1

0x3748,	// (0x0005e6ad) main_mp2_pane_t2_ParamLimits

0x3748,	// (0x0005e6ad) main_mp2_pane_t2

0x375a,	// (0x0005e6bf) main_mp2_pane_t3_ParamLimits

0x375a,	// (0x0005e6bf) main_mp2_pane_t3

0x0002,

0xf4fa,	// (0x0006a45f) main_mp2_pane_t_ParamLimits

0xf4fa,	// (0x0006a45f) main_mp2_pane_t

0xae7a,	// (0x00065ddf) pec_content_pane_ParamLimits

0xae7a,	// (0x00065ddf) pec_content_pane

0xa49c,	// (0x00065401) scroll_pane_cp015

0xae8c,	// (0x00065df1) pec_attribute_pane_ParamLimits

0xae8c,	// (0x00065df1) pec_attribute_pane

0x376c,	// (0x0005e6d1) pec_content_pane_g1_ParamLimits

0x376c,	// (0x0005e6d1) pec_content_pane_g1

0xae9c,	// (0x00065e01) pec_content_pane_t1_ParamLimits

0xae9c,	// (0x00065e01) pec_content_pane_t1

0xaeae,	// (0x00065e13) pec_content_pane_t2_ParamLimits

0xaeae,	// (0x00065e13) pec_content_pane_t2

0x0001,

0xf501,	// (0x0006a466) pec_content_pane_t_ParamLimits

0xf501,	// (0x0006a466) pec_content_pane_t

0x377a,	// (0x0005e6df) list_single_graphic_pane_cp01_ParamLimits

0x377a,	// (0x0005e6df) list_single_graphic_pane_cp01

0x9efa,	// (0x00064e5f) bg_popup_sub_pane_cp04

0xaec0,	// (0x00065e25) popup_mup_playback_window_g1

0xaecc,	// (0x00065e31) popup_mup_playback_window_t1

0xaee1,	// (0x00065e46) popup_mup_playback_window_t2

0x0001,

0xf506,	// (0x0006a46b) popup_mup_playback_window_t

0xaf18,	// (0x00065e7d) main_image_pane_g1_ParamLimits

0xaf18,	// (0x00065e7d) main_image_pane_g1

0xaf5b,	// (0x00065ec0) scroll_pane_cp018_ParamLimits

0xaf5b,	// (0x00065ec0) scroll_pane_cp018

0xaf73,	// (0x00065ed8) scroll_pane_cp016_ParamLimits

0xaf73,	// (0x00065ed8) scroll_pane_cp016

0x384a,	// (0x0005e7af) smil2_image_pane_ParamLimits

0x384a,	// (0x0005e7af) smil2_image_pane

0x387e,	// (0x0005e7e3) smil2_root_pane_ParamLimits

0x387e,	// (0x0005e7e3) smil2_root_pane

0x38b6,	// (0x0005e81b) smil2_text_pane_ParamLimits

0x38b6,	// (0x0005e81b) smil2_text_pane

0x9c9f,	// (0x00064c04) bg_list_pane_cp06

0xafaf,	// (0x00065f14) grid_radio_pane

0x9c9f,	// (0x00064c04) bg_popup_window_pane_cp06

0xafb7,	// (0x00065f1c) main_fmradio_pane_t1

0xa9e2,	// (0x00065947) heading_pane_cp04

0xafc5,	// (0x00065f2a) main_fmradio_pane_t2

0xbfa5,	// (0x00066f0a) popup_cale_lunar_info_window_g1

0xafd3,	// (0x00065f38) main_fmradio_pane_t3

0xbfad,	// (0x00066f12) popup_cale_lunar_info_window_g2

0xafe1,	// (0x00065f46) main_fmradio_pane_t4

0x0001,

0xafef,	// (0x00065f54) main_fmradio_pane_t5

0x0004,

0xf5e1,	// (0x0006a546) popup_cale_lunar_info_window_g

0xf51b,	// (0x0006a480) main_fmradio_pane_t

0xaffd,	// (0x00065f62) wait_bar_pane_cp03

0xb005,	// (0x00065f6a) cell_fmradio_pane_ParamLimits

0xb005,	// (0x00065f6a) cell_fmradio_pane

0xae5e,	// (0x00065dc3) cell_fmradio_pane_g1_ParamLimits

0xae5e,	// (0x00065dc3) cell_fmradio_pane_g1

0x9c9f,	// (0x00064c04) grid_highlight_pane_cp011

0xb018,	// (0x00065f7d) poc_content_pane_ParamLimits

0xb018,	// (0x00065f7d) poc_content_pane

0xb02a,	// (0x00065f8f) scroll_pane_cp019

0x3936,	// (0x0005e89b) popup_call_poc_act_window_ParamLimits

0x3936,	// (0x0005e89b) popup_call_poc_act_window

0x395a,	// (0x0005e8bf) popup_call_poc_inact_window_ParamLimits

0x395a,	// (0x0005e8bf) popup_call_poc_inact_window

0xf5b8,	// (0x0006a51d) bg_popup_call_poc_act_pane_g

0xbf15,	// (0x00066e7a) bg_popup_call_poc_inact_pane_g1

0xbf1d,	// (0x00066e82) bg_popup_call_poc_inact_pane_g2

0xb032,	// (0x00065f97) popup_call_poc_act_window_g2

0xbf25,	// (0x00066e8a) bg_popup_call_poc_inact_pane_g3

0xbf2d,	// (0x00066e92) bg_popup_call_poc_inact_pane_g4

0xbf35,	// (0x00066e9a) bg_popup_call_poc_inact_pane_g5

0xb03a,	// (0x00065f9f) popup_call_poc_act_window_t1_ParamLimits

0xb03a,	// (0x00065f9f) popup_call_poc_act_window_t1

0xb062,	// (0x00065fc7) popup_call_poc_act_window_t2_ParamLimits

0xb062,	// (0x00065fc7) popup_call_poc_act_window_t2

0xb08a,	// (0x00065fef) popup_call_poc_act_window_t3_ParamLimits

0xb08a,	// (0x00065fef) popup_call_poc_act_window_t3

0xb0b2,	// (0x00066017) popup_call_poc_act_window_t4_ParamLimits

0xb0b2,	// (0x00066017) popup_call_poc_act_window_t4

0x0003,

0xf526,	// (0x0006a48b) popup_call_poc_act_window_t_ParamLimits

0xf526,	// (0x0006a48b) popup_call_poc_act_window_t

0xbf3d,	// (0x00066ea2) bg_popup_call_poc_inact_pane_g6

0xbf45,	// (0x00066eaa) bg_popup_call_poc_inact_pane_g7

0xbf4d,	// (0x00066eb2) bg_popup_call_poc_inact_pane_g8

0xb0c4,	// (0x00066029) popup_call_poc_inact_window_g2

0xbf55,	// (0x00066eba) bg_popup_call_poc_inact_pane_g9

0x0008,

0xf5a5,	// (0x0006a50a) bg_popup_call_poc_inact_pane_g

0xb0cc,	// (0x00066031) popup_call_poc_inact_window_t1_ParamLimits

0xb0cc,	// (0x00066031) popup_call_poc_inact_window_t1

0xb0e1,	// (0x00066046) popup_call_poc_inact_window_t2_ParamLimits

0xb0e1,	// (0x00066046) popup_call_poc_inact_window_t2

0xb0f6,	// (0x0006605b) popup_call_poc_inact_window_t3_ParamLimits

0xb0f6,	// (0x0006605b) popup_call_poc_inact_window_t3

0x0002,

0xf52f,	// (0x0006a494) popup_call_poc_inact_window_t_ParamLimits

0xf52f,	// (0x0006a494) popup_call_poc_inact_window_t

0xc115,	// (0x0006707a) context_pane_ParamLimits

0x417c,	// (0x0005f0e1) signal_pane_ParamLimits

0xac5f,	// (0x00065bc4) main_call2_pane

0xc103,	// (0x00067068) popup_phob_thumbnail2_window_ParamLimits

0xc103,	// (0x00067068) popup_phob_thumbnail2_window

0xae0e,	// (0x00065d73) aid_hotspot_pointer_arrow_pane

0xae16,	// (0x00065d7b) aid_hotspot_pointer_hand_pane

0x3ca0,	// (0x0005ec05) phob_pre_status_pane_g5

0x192e,	// (0x0005c893) cams_zoom_pane_ParamLimits

0x193d,	// (0x0005c8a2) image_vga_pane_ParamLimits

0x1957,	// (0x0005c8bc) main_camera_pane_g1_ParamLimits

0x1969,	// (0x0005c8ce) main_camera_pane_g2_ParamLimits

0x197b,	// (0x0005c8e0) main_camera_pane_g3_ParamLimits

0x198d,	// (0x0005c8f2) main_camera_pane_g4_ParamLimits

0x199f,	// (0x0005c904) main_camera_pane_g5_ParamLimits

0x19b1,	// (0x0005c916) main_camera_pane_g6_ParamLimits

0x19c3,	// (0x0005c928) main_camera_pane_g7_ParamLimits

0xf22e,	// (0x0006a193) main_camera_pane_g_ParamLimits

0x19d5,	// (0x0005c93a) main_camera_pane_t1_ParamLimits

0x19eb,	// (0x0005c950) main_camera_pane_t2_ParamLimits

0xf23f,	// (0x0006a1a4) main_camera_pane_t_ParamLimits

0x9efa,	// (0x00064e5f) bg_popup_preview_window_pane_cp01_ParamLimits

0x9efa,	// (0x00064e5f) bg_popup_preview_window_pane_cp01

0xb10b,	// (0x00066070) popup_phob_thumbnail2_window_g1_ParamLimits

0xb10b,	// (0x00066070) popup_phob_thumbnail2_window_g1

0x9c9f,	// (0x00064c04) call2_cli_visual_pane

0x398e,	// (0x0005e8f3) popup_call2_audio_conf_window_ParamLimits

0x398e,	// (0x0005e8f3) popup_call2_audio_conf_window

0x39ae,	// (0x0005e913) popup_call2_audio_first_window_ParamLimits

0x39ae,	// (0x0005e913) popup_call2_audio_first_window

0x3a44,	// (0x0005e9a9) popup_call2_audio_in_window_ParamLimits

0x3a44,	// (0x0005e9a9) popup_call2_audio_in_window

0x3a8c,	// (0x0005e9f1) popup_call2_audio_out_window_ParamLimits

0x3a8c,	// (0x0005e9f1) popup_call2_audio_out_window

0x3af6,	// (0x0005ea5b) popup_call2_audio_second_window_ParamLimits

0x3af6,	// (0x0005ea5b) popup_call2_audio_second_window

0x3b5c,	// (0x0005eac1) popup_call2_audio_wait_window_ParamLimits

0x3b5c,	// (0x0005eac1) popup_call2_audio_wait_window

0x9c9f,	// (0x00064c04) bg_popup_call2_act_pane_cp03

0x9edc,	// (0x00064e41) list_conf_pane_cp

0xb117,	// (0x0006607c) popup_call2_audio_conf_window_t1

0xb125,	// (0x0006608a) list_single_graphic_popup_conf2_pane_ParamLimits

0xb125,	// (0x0006608a) list_single_graphic_popup_conf2_pane

0xaa75,	// (0x000659da) list_highlight_pane_cp04

0xb138,	// (0x0006609d) list_single_graphic_popup_conf2_pane_g1

0xaa86,	// (0x000659eb) list_single_graphic_popup_conf2_pane_g2

0x0001,

0xf536,	// (0x0006a49b) list_single_graphic_popup_conf2_pane_g

0xb142,	// (0x000660a7) list_single_graphic_popup_conf2_pane_t1

0xb150,	// (0x000660b5) bg_popup_call2_act_pane_cp01_ParamLimits

0xb150,	// (0x000660b5) bg_popup_call2_act_pane_cp01

0xb1da,	// (0x0006613f) call_type_pane_cp05_ParamLimits

0xb1da,	// (0x0006613f) call_type_pane_cp05

0xb22e,	// (0x00066193) popup_call2_audio_second_window_g1_ParamLimits

0xb22e,	// (0x00066193) popup_call2_audio_second_window_g1

0xb282,	// (0x000661e7) popup_call2_audio_second_window_g2_ParamLimits

0xb282,	// (0x000661e7) popup_call2_audio_second_window_g2

0x0002,

0xf53b,	// (0x0006a4a0) popup_call2_audio_second_window_g_ParamLimits

0xf53b,	// (0x0006a4a0) popup_call2_audio_second_window_g

0xb2e7,	// (0x0006624c) popup_call2_audio_second_window_t1_ParamLimits

0xb2e7,	// (0x0006624c) popup_call2_audio_second_window_t1

0xb3a2,	// (0x00066307) popup_call2_audio_second_window_t2_ParamLimits

0xb3a2,	// (0x00066307) popup_call2_audio_second_window_t2

0xb3f5,	// (0x0006635a) popup_call2_audio_second_window_t3_ParamLimits

0xb3f5,	// (0x0006635a) popup_call2_audio_second_window_t3

0x0003,

0xf542,	// (0x0006a4a7) popup_call2_audio_second_window_t_ParamLimits

0xf542,	// (0x0006a4a7) popup_call2_audio_second_window_t

0x9c9f,	// (0x00064c04) bg_popup_call2_in_pane_cp02

0x9ca9,	// (0x00064c0e) call_type_pane_cp04

0x9cb1,	// (0x00064c16) popup_call2_audio_wait_window_g1

0x9cb9,	// (0x00064c1e) popup_call2_audio_wait_window_g2

0x0001,

0xf11b,	// (0x0006a080) popup_call2_audio_wait_window_g

0x9cc1,	// (0x00064c26) popup_call2_audio_wait_window_t3

0xb4e8,	// (0x0006644d) bg_popup_call2_act_pane_ParamLimits

0xb4e8,	// (0x0006644d) bg_popup_call2_act_pane

0xb5a8,	// (0x0006650d) call_type_pane_cp03_ParamLimits

0xb5a8,	// (0x0006650d) call_type_pane_cp03

0xb60c,	// (0x00066571) popup_call2_audio_first_window_g1_ParamLimits

0xb60c,	// (0x00066571) popup_call2_audio_first_window_g1

0xb67c,	// (0x000665e1) popup_call2_audio_first_window_g2_ParamLimits

0xb67c,	// (0x000665e1) popup_call2_audio_first_window_g2

0xad30,	// (0x00065c95) popup_call2_audio_first_window_g3_ParamLimits

0xad30,	// (0x00065c95) popup_call2_audio_first_window_g3

0x0004,

0xf54b,	// (0x0006a4b0) popup_call2_audio_first_window_g_ParamLimits

0xf54b,	// (0x0006a4b0) popup_call2_audio_first_window_g

0xb75a,	// (0x000666bf) popup_call2_audio_first_window_t1_ParamLimits

0xb75a,	// (0x000666bf) popup_call2_audio_first_window_t1

0xb85d,	// (0x000667c2) popup_call2_audio_first_window_t4_ParamLimits

0xb85d,	// (0x000667c2) popup_call2_audio_first_window_t4

0xb940,	// (0x000668a5) popup_call2_audio_first_window_t5_ParamLimits

0xb940,	// (0x000668a5) popup_call2_audio_first_window_t5

0x0003,

0xf556,	// (0x0006a4bb) popup_call2_audio_first_window_t_ParamLimits

0xf556,	// (0x0006a4bb) popup_call2_audio_first_window_t

0x9ef2,	// (0x00064e57) bg_popup_call2_act_pane_g1

0xbfb5,	// (0x00066f1a) popup_cale_lunar_info_window_t1

0xbfc3,	// (0x00066f28) popup_cale_lunar_info_window_t2

0xbfd1,	// (0x00066f36) popup_cale_lunar_info_window_t3

0x9c9f,	// (0x00064c04) bg_popup_call2_bubble_pane

0xba41,	// (0x000669a6) bg_popup_call2_in_pane_cp01_ParamLimits

0xba41,	// (0x000669a6) bg_popup_call2_in_pane_cp01

0x997b,	// (0x000648e0) call_type_pane_cp02

0xba89,	// (0x000669ee) popup_call2_audio_out_window_g1_ParamLimits

0xba89,	// (0x000669ee) popup_call2_audio_out_window_g1

0xbab5,	// (0x00066a1a) popup_call2_audio_out_window_g2_ParamLimits

0xbab5,	// (0x00066a1a) popup_call2_audio_out_window_g2

0xbadd,	// (0x00066a42) popup_call2_audio_out_window_g3_ParamLimits

0xbadd,	// (0x00066a42) popup_call2_audio_out_window_g3

0x0003,

0xf55f,	// (0x0006a4c4) popup_call2_audio_out_window_g_ParamLimits

0xf55f,	// (0x0006a4c4) popup_call2_audio_out_window_g

0xbb18,	// (0x00066a7d) popup_call2_audio_out_window_t1_ParamLimits

0xbb18,	// (0x00066a7d) popup_call2_audio_out_window_t1

0xbb77,	// (0x00066adc) popup_call2_audio_out_window_t2_ParamLimits

0xbb77,	// (0x00066adc) popup_call2_audio_out_window_t2

0xbbcb,	// (0x00066b30) popup_call2_audio_out_window_t3_ParamLimits

0xbbcb,	// (0x00066b30) popup_call2_audio_out_window_t3

0xbbe1,	// (0x00066b46) popup_call2_audio_out_window_t4_ParamLimits

0xbbe1,	// (0x00066b46) popup_call2_audio_out_window_t4

0xbbf7,	// (0x00066b5c) popup_call2_audio_out_window_t5_ParamLimits

0xbbf7,	// (0x00066b5c) popup_call2_audio_out_window_t5

0x0005,

0xf568,	// (0x0006a4cd) popup_call2_audio_out_window_t_ParamLimits

0xf568,	// (0x0006a4cd) popup_call2_audio_out_window_t

0xbc5b,	// (0x00066bc0) bg_popup_call2_in_pane_ParamLimits

0xbc5b,	// (0x00066bc0) bg_popup_call2_in_pane

0xbcb7,	// (0x00066c1c) popup_call2_audio_in_window_g1_ParamLimits

0xbcb7,	// (0x00066c1c) popup_call2_audio_in_window_g1

0xbcef,	// (0x00066c54) popup_call2_audio_in_window_g2_ParamLimits

0xbcef,	// (0x00066c54) popup_call2_audio_in_window_g2

0xbd27,	// (0x00066c8c) popup_call2_audio_in_window_g3_ParamLimits

0xbd27,	// (0x00066c8c) popup_call2_audio_in_window_g3

0x0003,

0xf575,	// (0x0006a4da) popup_call2_audio_in_window_g_ParamLimits

0xf575,	// (0x0006a4da) popup_call2_audio_in_window_g

0xbd7f,	// (0x00066ce4) popup_call2_audio_in_window_t1_ParamLimits

0xbd7f,	// (0x00066ce4) popup_call2_audio_in_window_t1

0xbdff,	// (0x00066d64) popup_call2_audio_in_window_t2_ParamLimits

0xbdff,	// (0x00066d64) popup_call2_audio_in_window_t2

0xbe7f,	// (0x00066de4) popup_call2_audio_in_window_t3_ParamLimits

0xbe7f,	// (0x00066de4) popup_call2_audio_in_window_t3

0xbe99,	// (0x00066dfe) popup_call2_audio_in_window_t4_ParamLimits

0xbe99,	// (0x00066dfe) popup_call2_audio_in_window_t4

0xbeab,	// (0x00066e10) popup_call2_audio_in_window_t5_ParamLimits

0xbeab,	// (0x00066e10) popup_call2_audio_in_window_t5

0xbec0,	// (0x00066e25) popup_call2_audio_in_window_t6_ParamLimits

0xbec0,	// (0x00066e25) popup_call2_audio_in_window_t6

0x0005,

0xf57e,	// (0x0006a4e3) popup_call2_audio_in_window_t_ParamLimits

0xf57e,	// (0x0006a4e3) popup_call2_audio_in_window_t

0x9ef2,	// (0x00064e57) bg_popup_call2_in_pane_g1

0xbfdf,	// (0x00066f44) popup_cale_lunar_info_window_t4

0x0003,

0xf5e6,	// (0x0006a54b) popup_cale_lunar_info_window_t

0x9efa,	// (0x00064e5f) bg_popup_call2_rect_pane_ParamLimits

0x9efa,	// (0x00064e5f) bg_popup_call2_rect_pane

0x9c9f,	// (0x00064c04) call2_cli_visual_graphic_pane

0x9c9f,	// (0x00064c04) call2_cli_visual_text_pane

0xc1b5,	// (0x0006711a) smil_status_volume_pane_g3

0x0002,

0xa0ae,	// (0x00065013) call2_cli_visual_graphic_pane_g1

0xa0ae,	// (0x00065013) call2_cli_visual_graphic_pane_g2

0xa0ae,	// (0x00065013) call2_cli_visual_graphic_pane_g3

0x0002,

0xf58b,	// (0x0006a4f0) call2_cli_visual_graphic_pane_g

0xbed5,	// (0x00066e3a) bg_popup_call2_rect_pane_g1

0xa156,	// (0x000650bb) bg_popup_call2_rect_pane_g2

0xbedd,	// (0x00066e42) bg_popup_call2_rect_pane_g3

0xbee5,	// (0x00066e4a) bg_popup_call2_rect_pane_g4

0xbeed,	// (0x00066e52) bg_popup_call2_rect_pane_g5

0xbef5,	// (0x00066e5a) bg_popup_call2_rect_pane_g6

0xbefd,	// (0x00066e62) bg_popup_call2_rect_pane_g7

0xbf05,	// (0x00066e6a) bg_popup_call2_rect_pane_g8

0xbf0d,	// (0x00066e72) bg_popup_call2_rect_pane_g9

0x0008,

0xf592,	// (0x0006a4f7) bg_popup_call2_rect_pane_g

0xbf15,	// (0x00066e7a) bg_popup_call2_bubble_pane_g1

0xbf1d,	// (0x00066e82) bg_popup_call2_bubble_pane_g2

0xbf25,	// (0x00066e8a) bg_popup_call2_bubble_pane_g3

0xbf2d,	// (0x00066e92) bg_popup_call2_bubble_pane_g4

0xbf35,	// (0x00066e9a) bg_popup_call2_bubble_pane_g5

0xbf3d,	// (0x00066ea2) bg_popup_call2_bubble_pane_g6

0xbf45,	// (0x00066eaa) bg_popup_call2_bubble_pane_g7

0xbf4d,	// (0x00066eb2) bg_popup_call2_bubble_pane_g8

0xbf55,	// (0x00066eba) bg_popup_call2_bubble_pane_g9

0x0008,

0xf5a5,	// (0x0006a50a) bg_popup_call2_bubble_pane_g

0x1590,	// (0x0005c4f5) aid_cale_week_size_cell_pane

0x1a03,	// (0x0005c968) aid_cams_cif_uncrop_pane_ParamLimits

0x1a03,	// (0x0005c968) aid_cams_cif_uncrop_pane

0x1bc0,	// (0x0005cb25) aid_cams_size_cell_ParamLimits

0x1bc0,	// (0x0005cb25) aid_cams_size_cell

0x1bd4,	// (0x0005cb39) grid_cams_pane_ParamLimits

0x1bee,	// (0x0005cb53) linegrid_cams_pane_ParamLimits

0x1dcc,	// (0x0005cd31) call_video_pane_t1

0x1dea,	// (0x0005cd4f) call_video_pane_t2

0x0001,

0xf292,	// (0x0006a1f7) call_video_pane_t

0x221d,	// (0x0005d182) aid_cale_month_size_cell_pane_ParamLimits

0x221d,	// (0x0005d182) aid_cale_month_size_cell_pane

0xf62f,	// (0x0006a594) smil_status_volume_pane_g

0xc1c2,	// (0x00067127) volume_smil_pane_ParamLimits

0x0e7e,	// (0x0005bde3) aid_popup2_width_pane

0x1504,	// (0x0005c469) cell_qdial_pane_g4_ParamLimits

0x1504,	// (0x0005c469) cell_qdial_pane_g4

0x2eaa,	// (0x0005de0f) aid_blid_cardinal_pane_ParamLimits

0x2eb6,	// (0x0005de1b) aid_blid_destination_pane_ParamLimits

0x2eb6,	// (0x0005de1b) aid_blid_destination_pane

0x9efa,	// (0x00064e5f) bg_popup_call_poc_act_pane_ParamLimits

0x9efa,	// (0x00064e5f) bg_popup_call_poc_act_pane

0x9efa,	// (0x00064e5f) bg_popup_call_poc_inact_pane_ParamLimits

0x9efa,	// (0x00064e5f) bg_popup_call_poc_inact_pane

0xbf65,	// (0x00066eca) bg_popup_call_poc_act_pane_g1

0xbf6d,	// (0x00066ed2) bg_popup_call_poc_act_pane_g2

0xbf75,	// (0x00066eda) bg_popup_call_poc_act_pane_g3

0xbf2d,	// (0x00066e92) bg_popup_call_poc_act_pane_g4

0xbf35,	// (0x00066e9a) bg_popup_call_poc_act_pane_g5

0xbf7d,	// (0x00066ee2) bg_popup_call_poc_act_pane_g6

0xbf45,	// (0x00066eaa) bg_popup_call_poc_act_pane_g7

0xbf85,	// (0x00066eea) bg_popup_call_poc_act_pane_g8

0x9c9f,	// (0x00064c04) main_usb_pane

0xc0de,	// (0x00067043) popup_cale_lunar_info_window

0x20b4,	// (0x0005d019) im_reading_pane_t1_ParamLimits

0xa3f4,	// (0x00065359) list_im_pane_ParamLimits

0xa405,	// (0x0006536a) scroll_pane_cp07_ParamLimits

0x9c9f,	// (0x00064c04) grid_highlight_pane_cp012

0x9efa,	// (0x00064e5f) mup_scale_pane_ParamLimits

0xae5e,	// (0x00065dc3) main_usb_pane_g1_ParamLimits

0xae5e,	// (0x00065dc3) main_usb_pane_g1

0x3bb3,	// (0x0005eb18) main_usb_pane_g2_ParamLimits

0x3bb3,	// (0x0005eb18) main_usb_pane_g2

0x0001,

0xf5cf,	// (0x0006a534) main_usb_pane_g_ParamLimits

0xf5cf,	// (0x0006a534) main_usb_pane_g

0x3bc9,	// (0x0005eb2e) main_usb_pane_t1_ParamLimits

0x3bc9,	// (0x0005eb2e) main_usb_pane_t1

0x3bdb,	// (0x0005eb40) main_usb_pane_t2_ParamLimits

0x3bdb,	// (0x0005eb40) main_usb_pane_t2

0x3bed,	// (0x0005eb52) main_usb_pane_t3_ParamLimits

0x3bed,	// (0x0005eb52) main_usb_pane_t3

0x3bff,	// (0x0005eb64) main_usb_pane_t4_ParamLimits

0x3bff,	// (0x0005eb64) main_usb_pane_t4

0x3c11,	// (0x0005eb76) main_usb_pane_t5_ParamLimits

0x3c11,	// (0x0005eb76) main_usb_pane_t5

0x3c23,	// (0x0005eb88) main_usb_pane_t6_ParamLimits

0x3c23,	// (0x0005eb88) main_usb_pane_t6

0x0005,

0xf5d4,	// (0x0006a539) main_usb_pane_t_ParamLimits

0x2e4f,	// (0x0005ddb4) aid_text_placing

0x2e58,	// (0x0005ddbd) main_location2_pane_t1_ParamLimits

0x2e6c,	// (0x0005ddd1) main_location2_pane_t2_ParamLimits

0x2e80,	// (0x0005dde5) main_location2_pane_t3_ParamLimits

0x2e96,	// (0x0005ddfb) main_location2_pane_t4_ParamLimits

0x2e96,	// (0x0005ddfb) main_location2_pane_t4

0xf3f3,	// (0x0006a358) main_location2_pane_t_ParamLimits

0x9f3e,	// (0x00064ea3) find_pinb_pane_g2_ParamLimits

0x9f3e,	// (0x00064ea3) find_pinb_pane_g2

0x0001,

0xf141,	// (0x0006a0a6) find_pinb_pane_g_ParamLimits

0xf141,	// (0x0006a0a6) find_pinb_pane_g

0x9f4a,	// (0x00064eaf) find_pinb_pane_t1_ParamLimits

0x9f5c,	// (0x00064ec1) find_pinb_pane_t2_ParamLimits

0xf146,	// (0x0006a0ab) find_pinb_pane_t_ParamLimits

0x9c9f,	// (0x00064c04) main_call3_pane

0x2581,	// (0x0005d4e6) cale_month_day_heading_pane_t1_ParamLimits

0x25df,	// (0x0005d544) cale_month_day_heading_pane_t2_ParamLimits

0x2644,	// (0x0005d5a9) cale_month_day_heading_pane_t3_ParamLimits

0x26a9,	// (0x0005d60e) cale_month_day_heading_pane_t4_ParamLimits

0x270e,	// (0x0005d673) cale_month_day_heading_pane_t5_ParamLimits

0x2783,	// (0x0005d6e8) cale_month_day_heading_pane_t6_ParamLimits

0x27f8,	// (0x0005d75d) cale_month_day_heading_pane_t7_ParamLimits

0xf2ca,	// (0x0006a22f) cale_month_day_heading_pane_t_ParamLimits

0xa651,	// (0x000655b6) smil_status_volume_pane

0x36aa,	// (0x0005e60f) postcard_address_pane_ParamLimits

0x36aa,	// (0x0005e60f) postcard_address_pane

0x36bc,	// (0x0005e621) postcard_message_pane_ParamLimits

0x36bc,	// (0x0005e621) postcard_message_pane

0x3b96,	// (0x0005eafb) call2_cli_visual_pane_t1_ParamLimits

0x3b96,	// (0x0005eafb) call2_cli_visual_pane_t1

0x43aa,	// (0x0005f30f) postcard_message_pane_t1_ParamLimits

0x43aa,	// (0x0005f30f) postcard_message_pane_t1

0x4393,	// (0x0005f2f8) postcard_address_pane_t1_ParamLimits

0x4393,	// (0x0005f2f8) postcard_address_pane_t1

0x437f,	// (0x0005f2e4) popup_call3_audio_in_window_ParamLimits

0x437f,	// (0x0005f2e4) popup_call3_audio_in_window

0x420e,	// (0x0005f173) bg_popup_call3_in_pane_ParamLimits

0x420e,	// (0x0005f173) bg_popup_call3_in_pane

0x4280,	// (0x0005f1e5) popup_call3_audio_in_window_g1_ParamLimits

0x4280,	// (0x0005f1e5) popup_call3_audio_in_window_g1

0x42a0,	// (0x0005f205) popup_call3_audio_in_window_g2_ParamLimits

0x42a0,	// (0x0005f205) popup_call3_audio_in_window_g2

0x42c0,	// (0x0005f225) popup_call3_audio_in_window_g3_ParamLimits

0x42c0,	// (0x0005f225) popup_call3_audio_in_window_g3

0x0003,

0xf636,	// (0x0006a59b) popup_call3_audio_in_window_g_ParamLimits

0xf636,	// (0x0006a59b) popup_call3_audio_in_window_g

0x42f1,	// (0x0005f256) popup_call3_audio_in_window_t1_ParamLimits

0x42f1,	// (0x0005f256) popup_call3_audio_in_window_t1

0x432f,	// (0x0005f294) popup_call3_audio_in_window_t2_ParamLimits

0x432f,	// (0x0005f294) popup_call3_audio_in_window_t2

0x436d,	// (0x0005f2d2) popup_call3_audio_in_window_t3_ParamLimits

0x436d,	// (0x0005f2d2) popup_call3_audio_in_window_t3

0x0002,

0xf63f,	// (0x0006a5a4) popup_call3_audio_in_window_t_ParamLimits

0xf63f,	// (0x0006a5a4) popup_call3_audio_in_window_t

0xac5f,	// (0x00065bc4) bg_popup_call3_rect_pane

0xbed5,	// (0x00066e3a) bg_popup_call3_rect_pane_g1

0xa156,	// (0x000650bb) bg_popup_call3_rect_pane_g2

0xbedd,	// (0x00066e42) bg_popup_call3_rect_pane_g3

0xbee5,	// (0x00066e4a) bg_popup_call3_rect_pane_g4

0xbeed,	// (0x00066e52) bg_popup_call3_rect_pane_g5

0xbef5,	// (0x00066e5a) bg_popup_call3_rect_pane_g6

0xbefd,	// (0x00066e62) bg_popup_call3_rect_pane_g7

0x3272,	// (0x0005e1d7) mup_visualizer_osc_pane

0xad3e,	// (0x00065ca3) mup_visualizer_spec_pane

0x423e,	// (0x0005f1a3) call3_video_qcif_pane_ParamLimits

0x423e,	// (0x0005f1a3) call3_video_qcif_pane

0x424f,	// (0x0005f1b4) call3_video_qcif_uncrop_pane_ParamLimits

0x424f,	// (0x0005f1b4) call3_video_qcif_uncrop_pane

0x425b,	// (0x0005f1c0) call3_video_subqcif_pane_ParamLimits

0x425b,	// (0x0005f1c0) call3_video_subqcif_pane

0x426f,	// (0x0005f1d4) call3_video_subqcif_uncrop_pane_ParamLimits

0x426f,	// (0x0005f1d4) call3_video_subqcif_uncrop_pane

0x42e0,	// (0x0005f245) popup_call3_audio_in_window_g4_ParamLimits

0x42e0,	// (0x0005f245) popup_call3_audio_in_window_g4

0x41fd,	// (0x0005f162) mup_spec_half_pane

0x4206,	// (0x0005f16b) mup_spec_half_pane_cp

0xc175,	// (0x000670da) mup_osc_middle_pane

0xc17e,	// (0x000670e3) mup_visualizer_osc_pane_g1

0x41dd,	// (0x0005f142) mup_spec_bar_pane_ParamLimits

0x41dd,	// (0x0005f142) mup_spec_bar_pane

0xc162,	// (0x000670c7) mup_spec_bar_pane_g1

0xc16c,	// (0x000670d1) mup_spec_bar_pane_g2

0x0001,

0xf62a,	// (0x0006a58f) mup_spec_bar_pane_g

0x1590,	// (0x0005c4f5) aid_cale_week_size_cell_pane_ParamLimits

0x15a3,	// (0x0005c508) bg_cale_heading_pane_ParamLimits

0xa1e9,	// (0x0006514e) bg_cale_pane_cp01_ParamLimits

0x15bb,	// (0x0005c520) cale_week_corner_pane_ParamLimits

0x15cc,	// (0x0005c531) cale_week_day_heading_pane_ParamLimits

0x15e4,	// (0x0005c549) cale_week_scroll_pane_g1_ParamLimits

0x15f9,	// (0x0005c55e) cale_week_scroll_pane_g2_ParamLimits

0x160a,	// (0x0005c56f) cale_week_scroll_pane_g3_ParamLimits

0x161b,	// (0x0005c580) cale_week_scroll_pane_g4_ParamLimits

0x162c,	// (0x0005c591) cale_week_scroll_pane_g5_ParamLimits

0x163f,	// (0x0005c5a4) cale_week_scroll_pane_g6_ParamLimits

0x1652,	// (0x0005c5b7) cale_week_scroll_pane_g7_ParamLimits

0x1665,	// (0x0005c5ca) cale_week_scroll_pane_g8_ParamLimits

0x1678,	// (0x0005c5dd) cale_week_scroll_pane_g9_ParamLimits

0x1689,	// (0x0005c5ee) cale_week_scroll_pane_g10_ParamLimits

0x169a,	// (0x0005c5ff) cale_week_scroll_pane_g11_ParamLimits

0x16ab,	// (0x0005c610) cale_week_scroll_pane_g12_ParamLimits

0x16bc,	// (0x0005c621) cale_week_scroll_pane_g13_ParamLimits

0x16cd,	// (0x0005c632) cale_week_scroll_pane_g14_ParamLimits

0x16de,	// (0x0005c643) cale_week_scroll_pane_g15_ParamLimits

0xf1d2,	// (0x0006a137) cale_week_scroll_pane_g_ParamLimits

0x16ef,	// (0x0005c654) cale_week_time_pane_ParamLimits

0x1702,	// (0x0005c667) grid_cale_week_pane_ParamLimits

0xa202,	// (0x00065167) listscroll_cale_week_pane_t1

0x1717,	// (0x0005c67c) scroll_pane_cp08_ParamLimits

0x225e,	// (0x0005d1c3) cale_month_corner_pane_ParamLimits

0xa61b,	// (0x00065580) cale_month_pane_t1

0x2540,	// (0x0005d4a5) cale_month_week_pane_ParamLimits

0x2cb6,	// (0x0005dc1b) popup_call_status_window_g1_ParamLimits

0x2cca,	// (0x0005dc2f) popup_call_status_window_g2_ParamLimits

0x2cde,	// (0x0005dc43) popup_call_status_window_g3_ParamLimits

0xf37a,	// (0x0006a2df) popup_call_status_window_g_ParamLimits

0xa963,	// (0x000658c8) aid_call2_pane

0x34dc,	// (0x0005e441) msg_header_pane_g1

0x36aa,	// (0x0005e60f) postcard_address2_pane_ParamLimits

0x36aa,	// (0x0005e60f) postcard_address2_pane

0x36bc,	// (0x0005e621) postcard_message2_pane_ParamLimits

0x36bc,	// (0x0005e621) postcard_message2_pane

0x418a,	// (0x0005f0ef) message2_row_pane_ParamLimits

0x418a,	// (0x0005f0ef) message2_row_pane

0x41a9,	// (0x0005f10e) address2_row_pane_ParamLimits

0x41a9,	// (0x0005f10e) address2_row_pane

0xc130,	// (0x00067095) postcard_message2_row_pane_g1

0xc138,	// (0x0006709d) postcard_message2_row_pane_t1

0xc130,	// (0x00067095) address2_row_pane_g1

0xc138,	// (0x0006709d) address2_row_pane_t1

0xa266,	// (0x000651cb) aid_size_cell_vorec

0x9c9f,	// (0x00064c04) main_rss_pane

0x41bc,	// (0x0005f121) rss_list_single_pane_ParamLimits

0x41bc,	// (0x0005f121) rss_list_single_pane

0xc146,	// (0x000670ab) rss_list_single_pane_t1

0xc154,	// (0x000670b9) rss_list_single_pane_t2

0x0001,

0xf625,	// (0x0006a58a) rss_list_single_pane_t

0x9c9f,	// (0x00064c04) main_camera2_pane

0x9c9f,	// (0x00064c04) main_video2_pane

0x4423,	// (0x0005f388) cams_zoom_pane_cp2_ParamLimits

0x4423,	// (0x0005f388) cams_zoom_pane_cp2

0x4443,	// (0x0005f3a8) image2_vga_pane_ParamLimits

0x4443,	// (0x0005f3a8) image2_vga_pane

0x4494,	// (0x0005f3f9) main_camera2_pane_g1_ParamLimits

0x4494,	// (0x0005f3f9) main_camera2_pane_g1

0x44b4,	// (0x0005f419) main_camera2_pane_g2_ParamLimits

0x44b4,	// (0x0005f419) main_camera2_pane_g2

0x44d4,	// (0x0005f439) main_camera2_pane_g3_ParamLimits

0x44d4,	// (0x0005f439) main_camera2_pane_g3

0x44f4,	// (0x0005f459) main_camera2_pane_g4_ParamLimits

0x44f4,	// (0x0005f459) main_camera2_pane_g4

0x4514,	// (0x0005f479) main_camera2_pane_g5_ParamLimits

0x4514,	// (0x0005f479) main_camera2_pane_g5

0x4534,	// (0x0005f499) main_camera2_pane_g6_ParamLimits

0x4534,	// (0x0005f499) main_camera2_pane_g6

0x4554,	// (0x0005f4b9) main_camera2_pane_g7_ParamLimits

0x4554,	// (0x0005f4b9) main_camera2_pane_g7

0x4574,	// (0x0005f4d9) main_camera2_pane_g8_ParamLimits

0x4574,	// (0x0005f4d9) main_camera2_pane_g8

0x0008,

0xf646,	// (0x0006a5ab) main_camera2_pane_g_ParamLimits

0xf646,	// (0x0006a5ab) main_camera2_pane_g

0x45b4,	// (0x0005f519) main_camera2_pane_t1_ParamLimits

0x45b4,	// (0x0005f519) main_camera2_pane_t1

0x45e9,	// (0x0005f54e) main_camera2_pane_t2_ParamLimits

0x45e9,	// (0x0005f54e) main_camera2_pane_t2

0x460f,	// (0x0005f574) main_camera2_pane_t3_ParamLimits

0x460f,	// (0x0005f574) main_camera2_pane_t3

0x466d,	// (0x0005f5d2) main_camera2_pane_t4_ParamLimits

0x466d,	// (0x0005f5d2) main_camera2_pane_t4

0x0006,

0xf659,	// (0x0006a5be) main_camera2_pane_t_ParamLimits

0xf659,	// (0x0006a5be) main_camera2_pane_t

0x46ff,	// (0x0005f664) cams_zoom_pane_cp4_ParamLimits

0x46ff,	// (0x0005f664) cams_zoom_pane_cp4

0x4715,	// (0x0005f67a) image2_cif_pane_ParamLimits

0x4715,	// (0x0005f67a) image2_cif_pane

0x4740,	// (0x0005f6a5) image2_subqcif_pane_ParamLimits

0x4740,	// (0x0005f6a5) image2_subqcif_pane

0x475a,	// (0x0005f6bf) main_video2_pane_g1_ParamLimits

0x475a,	// (0x0005f6bf) main_video2_pane_g1

0x4774,	// (0x0005f6d9) main_video2_pane_g2_ParamLimits

0x4774,	// (0x0005f6d9) main_video2_pane_g2

0x478a,	// (0x0005f6ef) main_video2_pane_g3_ParamLimits

0x478a,	// (0x0005f6ef) main_video2_pane_g3

0x47a0,	// (0x0005f705) main_video2_pane_g4_ParamLimits

0x47a0,	// (0x0005f705) main_video2_pane_g4

0x47b6,	// (0x0005f71b) main_video2_pane_g5_ParamLimits

0x47b6,	// (0x0005f71b) main_video2_pane_g5

0x47cc,	// (0x0005f731) main_video2_pane_g6_ParamLimits

0x47cc,	// (0x0005f731) main_video2_pane_g6

0x0005,

0xf668,	// (0x0006a5cd) main_video2_pane_g_ParamLimits

0xf668,	// (0x0006a5cd) main_video2_pane_g

0x47e6,	// (0x0005f74b) main_video2_pane_t1_ParamLimits

0x47e6,	// (0x0005f74b) main_video2_pane_t1

0x480a,	// (0x0005f76f) main_video2_pane_t2_ParamLimits

0x480a,	// (0x0005f76f) main_video2_pane_t2

0x4858,	// (0x0005f7bd) main_video2_pane_t3_ParamLimits

0x4858,	// (0x0005f7bd) main_video2_pane_t3

0x0002,

0xf675,	// (0x0006a5da) main_video2_pane_t_ParamLimits

0xf675,	// (0x0006a5da) main_video2_pane_t

0x3ce0,	// (0x0005ec45) call_muted_g2

0x0001,

0xf617,	// (0x0006a57c) call_muted_g

0x9c9f,	// (0x00064c04) main_mup2_pane

0x48a0,	// (0x0005f805) main_mup2_pane_g1_ParamLimits

0x48a0,	// (0x0005f805) main_mup2_pane_g1

0x48ac,	// (0x0005f811) main_mup2_pane_g2_ParamLimits

0x48ac,	// (0x0005f811) main_mup2_pane_g2

0xc2e6,	// (0x0006724b) main_mup_pane_g13_cp1

0xc2ee,	// (0x00067253) mup_volume_pane_cp1

0x48c8,	// (0x0005f82d) main_mup2_pane_g4_ParamLimits

0x48c8,	// (0x0005f82d) main_mup2_pane_g4

0x48da,	// (0x0005f83f) main_mup2_pane_g5_ParamLimits

0x48da,	// (0x0005f83f) main_mup2_pane_g5

0x48ec,	// (0x0005f851) main_mup2_pane_g6_ParamLimits

0x48ec,	// (0x0005f851) main_mup2_pane_g6

0x48fe,	// (0x0005f863) main_mup2_pane_g7_ParamLimits

0x48fe,	// (0x0005f863) main_mup2_pane_g7

0x0006,

0xf67c,	// (0x0006a5e1) main_mup2_pane_g_ParamLimits

0xf67c,	// (0x0006a5e1) main_mup2_pane_g

0x4916,	// (0x0005f87b) main_mup2_pane_t1_ParamLimits

0x4916,	// (0x0005f87b) main_mup2_pane_t1

0x492c,	// (0x0005f891) main_mup2_pane_t2_ParamLimits

0x492c,	// (0x0005f891) main_mup2_pane_t2

0x4942,	// (0x0005f8a7) main_mup2_pane_t3_ParamLimits

0x4942,	// (0x0005f8a7) main_mup2_pane_t3

0x4958,	// (0x0005f8bd) main_mup2_pane_t4_ParamLimits

0x4958,	// (0x0005f8bd) main_mup2_pane_t4

0x4970,	// (0x0005f8d5) main_mup2_pane_t5_ParamLimits

0x4970,	// (0x0005f8d5) main_mup2_pane_t5

0x4988,	// (0x0005f8ed) main_mup2_pane_t6_ParamLimits

0x4988,	// (0x0005f8ed) main_mup2_pane_t6

0x0005,

0xf68b,	// (0x0006a5f0) main_mup2_pane_t_ParamLimits

0xf68b,	// (0x0006a5f0) main_mup2_pane_t

0x49b8,	// (0x0005f91d) mup2_visualizer_pane_ParamLimits

0x49b8,	// (0x0005f91d) mup2_visualizer_pane

0x49e6,	// (0x0005f94b) mup_progress_pane_cp_ParamLimits

0x49e6,	// (0x0005f94b) mup_progress_pane_cp

0xc2c8,	// (0x0006722d) mup_volume_pane_cp_ParamLimits

0xc2c8,	// (0x0006722d) mup_volume_pane_cp

0x49fa,	// (0x0005f95f) mup2_visualizer_pane_g1_ParamLimits

0x49fa,	// (0x0005f95f) mup2_visualizer_pane_g1

0xc207,	// (0x0006716c) mup2_visualizer_pane_g2_ParamLimits

0xc207,	// (0x0006716c) mup2_visualizer_pane_g2

0x4a11,	// (0x0005f976) mup2_visualizer_pane_g3_ParamLimits

0x4a11,	// (0x0005f976) mup2_visualizer_pane_g3

0x0002,

0xf698,	// (0x0006a5fd) mup2_visualizer_pane_g_ParamLimits

0xf698,	// (0x0006a5fd) mup2_visualizer_pane_g

0xafa7,	// (0x00065f0c) aid_size_cell_fmradio

0x3e92,	// (0x0005edf7) aid_height_parent_landcape

0xa483,	// (0x000653e8) wml_content_pane_cp

0xa48b,	// (0x000653f0) wml_tabs_pane

0xa494,	// (0x000653f9) popup_wml_miniature_window

0xa49c,	// (0x00065401) scroll_pane_cp021

0xa4b0,	// (0x00065415) wml_content_pane_comp8

0x9c9f,	// (0x00064c04) bg_popup_sub_pane_cp05

0xc225,	// (0x0006718a) popup_wml_miniature_window_g1

0xc22d,	// (0x00067192) wml_miniature_view_pane

0x4a1d,	// (0x0005f982) aid_size_wml_view

0x4a25,	// (0x0005f98a) wml_miniature_view_pane_g1

0x4a2e,	// (0x0005f993) wml_miniature_view_pane_g2

0x4a37,	// (0x0005f99c) wml_miniature_view_pane_g3

0x4a3f,	// (0x0005f9a4) wml_miniature_view_pane_g4

0x4a47,	// (0x0005f9ac) wml_miniature_view_pane_g5

0x4a4f,	// (0x0005f9b4) wml_miniature_view_pane_g6

0x4a57,	// (0x0005f9bc) wml_miniature_view_pane_g7

0x4a5f,	// (0x0005f9c4) wml_miniature_view_pane_g8

0x0007,

0xf69f,	// (0x0006a604) wml_miniature_view_pane_g

0xc235,	// (0x0006719a) background_graphic_ParamLimits

0xc235,	// (0x0006719a) background_graphic

0xc241,	// (0x000671a6) wml_tabs_2_pane

0xc24a,	// (0x000671af) wml_tabs_3_pane_ParamLimits

0xc24a,	// (0x000671af) wml_tabs_3_pane

0xc25c,	// (0x000671c1) wml_tabs_4_pane_ParamLimits

0xc25c,	// (0x000671c1) wml_tabs_4_pane

0xc272,	// (0x000671d7) wml_tabs_5_pane_ParamLimits

0xc272,	// (0x000671d7) wml_tabs_5_pane

0xc28c,	// (0x000671f1) wml_tabs_pane_g2_ParamLimits

0xc28c,	// (0x000671f1) wml_tabs_pane_g2

0xc2a0,	// (0x00067205) wml_tabs_pane_g3_ParamLimits

0xc2a0,	// (0x00067205) wml_tabs_pane_g3

0x4a67,	// (0x0005f9cc) wml_tabs_2_active_pane_ParamLimits

0x4a67,	// (0x0005f9cc) wml_tabs_2_active_pane

0x4a7b,	// (0x0005f9e0) wml_tabs_2_passive_pane_ParamLimits

0x4a7b,	// (0x0005f9e0) wml_tabs_2_passive_pane

0x4a8f,	// (0x0005f9f4) wml_tabs_3_active_pane_cp_ParamLimits

0x4a8f,	// (0x0005f9f4) wml_tabs_3_active_pane_cp

0x4aa4,	// (0x0005fa09) wml_tabs_3_passive_pane_ParamLimits

0x4aa4,	// (0x0005fa09) wml_tabs_3_passive_pane

0x4ab7,	// (0x0005fa1c) wml_tabs_3_passive_pane_cp_ParamLimits

0x4ab7,	// (0x0005fa1c) wml_tabs_3_passive_pane_cp

0x4ace,	// (0x0005fa33) tabs_4_active_pane

0x4ad6,	// (0x0005fa3b) tabs_4_passive_pane

0x4ae0,	// (0x0005fa45) tabs_4_passive_pane_cp

0x4ae8,	// (0x0005fa4d) tabs_4_passive_pane_cp2

0xbf5d,	// (0x00066ec2) aid_height_text

0x3244,	// (0x0005e1a9) mup_volume_cont_pane_ParamLimits

0x3244,	// (0x0005e1a9) mup_volume_cont_pane

0x11e5,	// (0x0005c14a) aid_size_cell_pinb

0x9f2a,	// (0x00064e8f) aid_size_list_pinb

0x49d2,	// (0x0005f937) mup2_volume_cont_pane_ParamLimits

0x49d2,	// (0x0005f937) mup2_volume_cont_pane

0xc2b4,	// (0x00067219) mup2_volume_cont_pane_g1_ParamLimits

0xc2b4,	// (0x00067219) mup2_volume_cont_pane_g1

0x0e8a,	// (0x0005bdef) aid_size_cell_touch_ParamLimits

0x0e8a,	// (0x0005bdef) aid_size_cell_touch

0x10d4,	// (0x0005c039) touch_pane_ParamLimits

0x10d4,	// (0x0005c039) touch_pane

0x0e6c,	// (0x0005bdd1) main_rss2_pane

0xc2f6,	// (0x0006725b) listscroll_rss2_pane

0xc2ff,	// (0x00067264) rss2_navigation_pane

0xc307,	// (0x0006726c) list_rss2_pane

0xab12,	// (0x00065a77) scroll_pane_cp22

0xc30f,	// (0x00067274) rss2_navigation_pane_g1

0xc318,	// (0x0006727d) rss2_navigation_pane_g2

0xc320,	// (0x00067285) rss2_navigation_pane_g3

0x0002,

0xf6b0,	// (0x0006a615) rss2_navigation_pane_g

0xc328,	// (0x0006728d) rss2_navigation_pane_t1

0x4af2,	// (0x0005fa57) rss2_list_single_pane_ParamLimits

0x4af2,	// (0x0005fa57) rss2_list_single_pane

0xc336,	// (0x0006729b) rss2_list_single_pane_t2

0xc344,	// (0x000672a9) rss2_list_single_pane_t3_ParamLimits

0xc344,	// (0x000672a9) rss2_list_single_pane_t3

0xc361,	// (0x000672c6) rss2_list_single_pane_t4

0x2a1e,	// (0x0005d983) smil_status_pane_g1

0x9880,	// (0x000647e5) main_image2_pane_ParamLimits

0x9880,	// (0x000647e5) main_image2_pane

0x4594,	// (0x0005f4f9) main_camera2_pane_g9_ParamLimits

0x4594,	// (0x0005f4f9) main_camera2_pane_g9

0x46c2,	// (0x0005f627) main_camera2_pane_t5_ParamLimits

0x46c2,	// (0x0005f627) main_camera2_pane_t5

0xc1d7,	// (0x0006713c) main_camera2_pane_t6_ParamLimits

0xc1d7,	// (0x0006713c) main_camera2_pane_t6

0x4b0a,	// (0x0005fa6f) main_image2_pane_g1_ParamLimits

0x4b0a,	// (0x0005fa6f) main_image2_pane_g1

0x38ec,	// (0x0005e851) smil2_video_pane_ParamLimits

0x38ec,	// (0x0005e851) smil2_video_pane

0x0eca,	// (0x0005be2f) aid_zoom_text_primary_cp

0x9876,	// (0x000647db) popup_preview_fixed_window

0xa3ec,	// (0x00065351) im_reading_pane_g1

0x440b,	// (0x0005f370) cams2_bc_adjust_pane_cp_ParamLimits

0x440b,	// (0x0005f370) cams2_bc_adjust_pane_cp

0x46f1,	// (0x0005f656) cams2_bc_adjust_pane_ParamLimits

0x46f1,	// (0x0005f656) cams2_bc_adjust_pane

0xc36f,	// (0x000672d4) cams2_bc_adjust_pane_g1

0xc377,	// (0x000672dc) cams2_slider_pane

0xc380,	// (0x000672e5) cams2_slider_pane_g1

0xc389,	// (0x000672ee) cams2_slider_pane_g2

0x0006,

0xf6b7,	// (0x0006a61c) cams2_slider_pane_g

0x12a4,	// (0x0005c209) calc_display_pane_ParamLimits

0x12cc,	// (0x0005c231) calc_paper_pane_ParamLimits

0x12ef,	// (0x0005c254) grid_calc_pane_ParamLimits

0xa9c5,	// (0x0006592a) popup_clock_digital_window_t1_ParamLimits

0xaf44,	// (0x00065ea9) main_image_pane_t1

0x1286,	// (0x0005c1eb) aid_size_cell_calc_ParamLimits

0x1286,	// (0x0005c1eb) aid_size_cell_calc

0x3ed8,	// (0x0005ee3d) popup_blid_sat_info2_window_ParamLimits

0x3ed8,	// (0x0005ee3d) popup_blid_sat_info2_window

0xc3ab,	// (0x00067310) aid_size_cell_blid

0xc3b3,	// (0x00067318) bg_popup_window_pane_cp07

0xc3d6,	// (0x0006733b) grid_popup_blid_pane

0xc3e0,	// (0x00067345) heading_pane_cp05_ParamLimits

0xc3e0,	// (0x00067345) heading_pane_cp05

0xc4aa,	// (0x0006740f) cell_popup_blid_pane_ParamLimits

0xc4aa,	// (0x0006740f) cell_popup_blid_pane

0xc4d0,	// (0x00067435) cell_popup_blid_pane_g1

0xc4d8,	// (0x0006743d) cell_popup_blid_pane_t1

0x49a2,	// (0x0005f907) mup2_indicator_pane_ParamLimits

0x49a2,	// (0x0005f907) mup2_indicator_pane

0xac5f,	// (0x00065bc4) mup2_visualizer_osc_pane

0xc213,	// (0x00067178) mup2_visualizer_spec_pane_ParamLimits

0xc213,	// (0x00067178) mup2_visualizer_spec_pane

0x4b20,	// (0x0005fa85) mup2_spec_half_pane

0x4b29,	// (0x0005fa8e) mup2_spec_half_pane_cp

0x4b31,	// (0x0005fa96) mup2_spec_bar_pane_ParamLimits

0x4b31,	// (0x0005fa96) mup2_spec_bar_pane

0xc162,	// (0x000670c7) mup2_spec_bar_pane_g1

0xc16c,	// (0x000670d1) mup2_spec_bar_pane_g2

0x0001,

0xf62a,	// (0x0006a58f) mup2_spec_bar_pane_g

0x4b51,	// (0x0005fab6) mup2_osc_middle_pane

0xc17e,	// (0x000670e3) mup2_visualizer_osc_pane_g1

0x98ae,	// (0x00064813) popup_number_entry_window_t1_ParamLimits

0x98c1,	// (0x00064826) popup_number_entry_window_t2_ParamLimits

0x98d3,	// (0x00064838) popup_number_entry_window_t3_ParamLimits

0x1126,	// (0x0005c08b) popup_number_entry_window_t5_ParamLimits

0x1126,	// (0x0005c08b) popup_number_entry_window_t5

0xf0ec,	// (0x0006a051) popup_number_entry_window_t_ParamLimits

0x98e5,	// (0x0006484a) text_title_cp2_ParamLimits

0xae1e,	// (0x00065d83) aid_hotspot_pointer_text2_pane

0xae44,	// (0x00065da9) main_viewer_pane_g9_ParamLimits

0xae44,	// (0x00065da9) main_viewer_pane_g9

0xa61b,	// (0x00065580) cale_month_pane_t1_ParamLimits

0xa686,	// (0x000655eb) bg_cale_pane_ParamLimits

0xa69e,	// (0x00065603) list_cale_pane_ParamLimits

0xa202,	// (0x00065167) listscroll_cale_day_pane_t1

0xa6af,	// (0x00065614) scroll_pane_cp09_ParamLimits

0x327a,	// (0x0005e1df) main_mup_eq_pane_t1_ParamLimits

0x327a,	// (0x0005e1df) main_mup_eq_pane_t1

0x3294,	// (0x0005e1f9) main_mup_eq_pane_t2_ParamLimits

0x3294,	// (0x0005e1f9) main_mup_eq_pane_t2

0x32ae,	// (0x0005e213) main_mup_eq_pane_t3_ParamLimits

0x32ae,	// (0x0005e213) main_mup_eq_pane_t3

0x32ca,	// (0x0005e22f) main_mup_eq_pane_t4_ParamLimits

0x32ca,	// (0x0005e22f) main_mup_eq_pane_t4

0x32e6,	// (0x0005e24b) main_mup_eq_pane_t5_ParamLimits

0x32e6,	// (0x0005e24b) main_mup_eq_pane_t5

0x3302,	// (0x0005e267) main_mup_eq_pane_t6_ParamLimits

0x3302,	// (0x0005e267) main_mup_eq_pane_t6

0x3316,	// (0x0005e27b) main_mup_eq_pane_t7_ParamLimits

0x3316,	// (0x0005e27b) main_mup_eq_pane_t7

0x332a,	// (0x0005e28f) main_mup_eq_pane_t8_ParamLimits

0x332a,	// (0x0005e28f) main_mup_eq_pane_t8

0x333e,	// (0x0005e2a3) main_mup_eq_pane_t9_ParamLimits

0x333e,	// (0x0005e2a3) main_mup_eq_pane_t9

0x3358,	// (0x0005e2bd) main_mup_eq_pane_t10_ParamLimits

0x3358,	// (0x0005e2bd) main_mup_eq_pane_t10

0x0009,

0xf479,	// (0x0006a3de) main_mup_eq_pane_t_ParamLimits

0xf479,	// (0x0006a3de) main_mup_eq_pane_t

0x3407,	// (0x0005e36c) mup_equalizer_pane_cp5_ParamLimits

0x341b,	// (0x0005e380) mup_equalizer_pane_cp6_ParamLimits

0x342f,	// (0x0005e394) mup_equalizer_pane_cp7_ParamLimits

0x0e6c,	// (0x0005bdd1) main_gallery_pane

0xc187,	// (0x000670ec) smil2_volume_pane

0xc18f,	// (0x000670f4) smil_status_volume_pane_g1_ParamLimits

0xc1a2,	// (0x00067107) smil_status_volume_pane_g2_ParamLimits

0xc1b5,	// (0x0006711a) smil_status_volume_pane_g3_ParamLimits

0xf62f,	// (0x0006a594) smil_status_volume_pane_g_ParamLimits

0xc3b3,	// (0x00067318) bg_popup_window_pane_cp07_ParamLimits

0xc3c1,	// (0x00067326) blid_firmament_pane

0x4b5a,	// (0x0005fabf) aid_size_cell_gallery_ParamLimits

0x4b5a,	// (0x0005fabf) aid_size_cell_gallery

0x4b70,	// (0x0005fad5) grid_gallery_pane_ParamLimits

0x4b70,	// (0x0005fad5) grid_gallery_pane

0x4b89,	// (0x0005faee) cell_gallery_pane_ParamLimits

0x4b89,	// (0x0005faee) cell_gallery_pane

0xc4e6,	// (0x0006744b) bg_cell_gallery_focus_pane_ParamLimits

0xc4e6,	// (0x0006744b) bg_cell_gallery_focus_pane

0xc4f8,	// (0x0006745d) cell_gallery_pane_g1_ParamLimits

0xc4f8,	// (0x0006745d) cell_gallery_pane_g1

0x4bd2,	// (0x0005fb37) cell_gallery_pane_g2_ParamLimits

0x4bd2,	// (0x0005fb37) cell_gallery_pane_g2

0x4bdf,	// (0x0005fb44) cell_gallery_pane_g3_ParamLimits

0x4bdf,	// (0x0005fb44) cell_gallery_pane_g3

0xc504,	// (0x00067469) cell_gallery_pane_g4_ParamLimits

0xc504,	// (0x00067469) cell_gallery_pane_g4

0x0003,

0xf6dd,	// (0x0006a642) cell_gallery_pane_g_ParamLimits

0xf6dd,	// (0x0006a642) cell_gallery_pane_g

0xc510,	// (0x00067475) bg_cell_gallery_focus_pane_g1

0xc518,	// (0x0006747d) bg_cell_gallery_focus_pane_g2

0xc520,	// (0x00067485) bg_cell_gallery_focus_pane_g3

0xc528,	// (0x0006748d) bg_cell_gallery_focus_pane_g4

0xc530,	// (0x00067495) bg_cell_gallery_focus_pane_g5

0xc538,	// (0x0006749d) bg_cell_gallery_focus_pane_g6

0xc540,	// (0x000674a5) bg_cell_gallery_focus_pane_g7

0xc548,	// (0x000674ad) bg_cell_gallery_focus_pane_g8

0x0007,

0xf6e6,	// (0x0006a64b) bg_cell_gallery_focus_pane_g

0xc550,	// (0x000674b5) aid_firma_cardinal

0xc564,	// (0x000674c9) blid_firmament_pane_t1

0xc57b,	// (0x000674e0) blid_firmament_pane_t2

0xc592,	// (0x000674f7) blid_firmament_pane_t3

0xc5a9,	// (0x0006750e) blid_firmament_pane_t4

0x0003,

0xf6f7,	// (0x0006a65c) blid_firmament_pane_t

0xc5c0,	// (0x00067525) blid_sat_info_pane

0xc5d0,	// (0x00067535) blid_sat_info_pane_g1

0xc5d0,	// (0x00067535) blid_sat_info_pane_g2

0x0001,

0xf700,	// (0x0006a665) blid_sat_info_pane_g

0xc5da,	// (0x0006753f) blid_sat_info_pane_t1

0xc5e8,	// (0x0006754d) smil2_volume_content_pane

0xc5f1,	// (0x00067556) smil2_volume_pane_g1

0xc5f9,	// (0x0006755e) smil2_volume_content_pane_g1

0xc602,	// (0x00067567) smil2_volume_content_pane_g2

0xc60b,	// (0x00067570) smil2_volume_content_pane_g3

0xc614,	// (0x00067579) smil2_volume_content_pane_g4

0xc61d,	// (0x00067582) smil2_volume_content_pane_g5

0xc626,	// (0x0006758b) smil2_volume_content_pane_g6

0xc62f,	// (0x00067594) smil2_volume_content_pane_g7

0xc638,	// (0x0006759d) smil2_volume_content_pane_g8

0xc641,	// (0x000675a6) smil2_volume_content_pane_g9

0xc64a,	// (0x000675af) smil2_volume_content_pane_g10

0x0009,

0xf705,	// (0x0006a66a) smil2_volume_content_pane_g

0x1771,	// (0x0005c6d6) cale_week_day_heading_pane_t1_ParamLimits

0x1785,	// (0x0005c6ea) cale_week_day_heading_pane_t2_ParamLimits

0x1799,	// (0x0005c6fe) cale_week_day_heading_pane_t3_ParamLimits

0x17ad,	// (0x0005c712) cale_week_day_heading_pane_t4_ParamLimits

0x17c1,	// (0x0005c726) cale_week_day_heading_pane_t5_ParamLimits

0x17d5,	// (0x0005c73a) cale_week_day_heading_pane_t6_ParamLimits

0x17eb,	// (0x0005c750) cale_week_day_heading_pane_t7_ParamLimits

0xf1f1,	// (0x0006a156) cale_week_day_heading_pane_t_ParamLimits

0xa214,	// (0x00065179) bg_cale_side_pane_ParamLimits

0x17ff,	// (0x0005c764) cale_week_time_pane_t1_ParamLimits

0x1817,	// (0x0005c77c) cale_week_time_pane_t2_ParamLimits

0x182f,	// (0x0005c794) cale_week_time_pane_t3_ParamLimits

0x1847,	// (0x0005c7ac) cale_week_time_pane_t4_ParamLimits

0x185f,	// (0x0005c7c4) cale_week_time_pane_t5_ParamLimits

0x1877,	// (0x0005c7dc) cale_week_time_pane_t6_ParamLimits

0x188f,	// (0x0005c7f4) cale_week_time_pane_t7_ParamLimits

0x18a7,	// (0x0005c80c) cale_week_time_pane_t8_ParamLimits

0xf200,	// (0x0006a165) cale_week_time_pane_t_ParamLimits

0x18bf,	// (0x0005c824) cell_cale_week_pane_g2_ParamLimits

0xa214,	// (0x00065179) bg_cale_side_pane_cp01_ParamLimits

0x286d,	// (0x0005d7d2) cale_month_week_pane_t1_ParamLimits

0x2884,	// (0x0005d7e9) cale_month_week_pane_t2_ParamLimits

0x289b,	// (0x0005d800) cale_month_week_pane_t3_ParamLimits

0x28b2,	// (0x0005d817) cale_month_week_pane_t4_ParamLimits

0x28c9,	// (0x0005d82e) cale_month_week_pane_t5_ParamLimits

0x28e0,	// (0x0005d845) cale_month_week_pane_t6_ParamLimits

0xf2d9,	// (0x0006a23e) cale_month_week_pane_t_ParamLimits

0xa62d,	// (0x00065592) cell_cale_month_pane_g1_ParamLimits

0x0e6c,	// (0x0005bdd1) main_cale_event_viewer_pane

0x0e6c,	// (0x0005bdd1) listscroll_cale_event_viewer_pane

0xc653,	// (0x000675b8) list_cale_ev_pane

0xc65b,	// (0x000675c0) scroll_pane_cp023

0xc667,	// (0x000675cc) field_cale_ev_pane_ParamLimits

0xc667,	// (0x000675cc) field_cale_ev_pane

0xc681,	// (0x000675e6) field_cale_ev_content_pane_ParamLimits

0xc681,	// (0x000675e6) field_cale_ev_content_pane

0xc68d,	// (0x000675f2) field_cale_ev_pane_g1_ParamLimits

0xc68d,	// (0x000675f2) field_cale_ev_pane_g1

0xc699,	// (0x000675fe) field_cale_ev_pane_g2_ParamLimits

0xc699,	// (0x000675fe) field_cale_ev_pane_g2

0xc6b1,	// (0x00067616) field_cale_ev_pane_g3_ParamLimits

0xc6b1,	// (0x00067616) field_cale_ev_pane_g3

0x0002,

0xf71a,	// (0x0006a67f) field_cale_ev_pane_g_ParamLimits

0xf71a,	// (0x0006a67f) field_cale_ev_pane_g

0xc6c9,	// (0x0006762e) field_cale_ev_pane_t1_ParamLimits

0xc6c9,	// (0x0006762e) field_cale_ev_pane_t1

0xc6e0,	// (0x00067645) field_cale_ev_content_pane_t1_ParamLimits

0xc6e0,	// (0x00067645) field_cale_ev_content_pane_t1

0xade8,	// (0x00065d4d) bg_button_pane_cp01

0xa035,	// (0x00064f9a) listscroll_cale_week_pane_ParamLimits

0x1586,	// (0x0005c4eb) popup_toolbar_window_cp01

0xa202,	// (0x00065167) listscroll_cale_week_pane_t1_ParamLimits

0xa035,	// (0x00064f9a) listscroll_cale_day_pane_ParamLimits

0x2a7d,	// (0x0005d9e2) popup_toolbar_window_cp02

0xa202,	// (0x00065167) listscroll_cale_day_pane_t1_ParamLimits

0xa035,	// (0x00064f9a) main_cale_month_pane_ParamLimits

0x40fe,	// (0x0005f063) popup_toolbar_window_cp03_ParamLimits

0x40fe,	// (0x0005f063) popup_toolbar_window_cp03

0x37b0,	// (0x0005e715) main_image_pane_g2_ParamLimits

0x37b0,	// (0x0005e715) main_image_pane_g2

0x37c1,	// (0x0005e726) main_image_pane_g3_ParamLimits

0x37c1,	// (0x0005e726) main_image_pane_g3

0x0002,

0xf50b,	// (0x0006a470) main_image_pane_g_ParamLimits

0xf50b,	// (0x0006a470) main_image_pane_g

0xaf44,	// (0x00065ea9) main_image_pane_t1_ParamLimits

0x37d2,	// (0x0005e737) main_image_pane_t2_ParamLimits

0x37d2,	// (0x0005e737) main_image_pane_t2

0x37e4,	// (0x0005e749) main_image_pane_t3_ParamLimits

0x37e4,	// (0x0005e749) main_image_pane_t3

0x380c,	// (0x0005e771) main_image_pane_t4_ParamLimits

0x380c,	// (0x0005e771) main_image_pane_t4

0x0003,

0xf512,	// (0x0006a477) main_image_pane_t_ParamLimits

0xf512,	// (0x0006a477) main_image_pane_t

0x382c,	// (0x0005e791) popup_image_details_window_cp01

0x3836,	// (0x0005e79b) popup_toobar_trans_pane_cp01_ParamLimits

0x3836,	// (0x0005e79b) popup_toobar_trans_pane_cp01

0x3faf,	// (0x0005ef14) popup_image_details_window_ParamLimits

0x3faf,	// (0x0005ef14) popup_image_details_window

0xc0e8,	// (0x0006704d) popup_image_focus_window

0x43c5,	// (0x0005f32a) camera2_autofocus_pane_ParamLimits

0x43c5,	// (0x0005f32a) camera2_autofocus_pane

0x0e6c,	// (0x0005bdd1) bg_popup_sub_pane_cp06

0xc6fd,	// (0x00067662) popup_image_focus_window_g1

0xc705,	// (0x0006766a) popup_image_focus_window_g2

0xc70d,	// (0x00067672) popup_image_focus_window_g3

0xc715,	// (0x0006767a) popup_image_focus_window_g4

0x0003,

0xf721,	// (0x0006a686) popup_image_focus_window_g

0xc71d,	// (0x00067682) popup_image_focus_window_t1

0xc72b,	// (0x00067690) popup_image_focus_window_t2

0xc73b,	// (0x000676a0) popup_image_focus_window_t3

0x0002,

0xf72a,	// (0x0006a68f) popup_image_focus_window_t

0xc749,	// (0x000676ae) camera2_autofocus_pane_g1

0x9880,	// (0x000647e5) bg_tb_trans_pane_cp01

0xc757,	// (0x000676bc) popup_image_details_window_g1

0xc76a,	// (0x000676cf) popup_image_details_window_g2

0x0002,

0xf73c,	// (0x0006a6a1) popup_image_details_window_g

0xc793,	// (0x000676f8) popup_image_details_window_t1

0xc7a5,	// (0x0006770a) popup_image_details_window_t2

0xc7be,	// (0x00067723) popup_image_details_window_t3

0xc7d2,	// (0x00067737) popup_image_details_window_t4

0xc7ed,	// (0x00067752) popup_image_details_window_t5

0x0004,

0xf743,	// (0x0006a6a8) popup_image_details_window_t

0x9ffd,	// (0x00064f62) bg_calc_paper_pane_ParamLimits

0xa011,	// (0x00064f76) grid_highlight_pane_cp013

0xa01b,	// (0x00064f80) list_calc_pane_ParamLimits

0xa02d,	// (0x00064f92) scroll_pane_cp024

0xa035,	// (0x00064f9a) bg_calc_display_pane_ParamLimits

0x13e4,	// (0x0005c349) calc_display_pane_t1_ParamLimits

0x13f6,	// (0x0005c35b) calc_display_pane_t2_ParamLimits

0xa041,	// (0x00064fa6) calc_display_pane_t3_ParamLimits

0xf173,	// (0x0006a0d8) calc_display_pane_t_ParamLimits

0x14b1,	// (0x0005c416) cell_calc_pane_g2

0x0001,

0xf190,	// (0x0006a0f5) cell_calc_pane_g

0x14ba,	// (0x0005c41f) cell_calc_pane_t1

0xa0b8,	// (0x0006501d) grid_highlight_pane_cp02_ParamLimits

0xa0ce,	// (0x00065033) toolbar_button_pane_cp01_ParamLimits

0xa0ce,	// (0x00065033) toolbar_button_pane_cp01

0xaf89,	// (0x00065eee) temp_image_control_pane_ParamLimits

0xaf89,	// (0x00065eee) temp_image_control_pane

0x9880,	// (0x000647e5) main_mp3_pane

0xc807,	// (0x0006776c) temp_image_control_pane_g1_ParamLimits

0xc807,	// (0x0006776c) temp_image_control_pane_g1

0xc815,	// (0x0006777a) temp_image_control_pane_g2_ParamLimits

0xc815,	// (0x0006777a) temp_image_control_pane_g2

0xc827,	// (0x0006778c) temp_image_control_pane_g3_ParamLimits

0xc827,	// (0x0006778c) temp_image_control_pane_g3

0x4c1c,	// (0x0005fb81) temp_image_control_pane_g4_ParamLimits

0x4c1c,	// (0x0005fb81) temp_image_control_pane_g4

0x0003,

0xf74e,	// (0x0006a6b3) temp_image_control_pane_g_ParamLimits

0xf74e,	// (0x0006a6b3) temp_image_control_pane_g

0xc807,	// (0x0006776c) main_mp3_pane_g1

0x4c2f,	// (0x0005fb94) main_mp3_pane_g2

0x0007,

0xf757,	// (0x0006a6bc) main_mp3_pane_g

0xc86a,	// (0x000677cf) main_mp3_pane_t1

0xa2fd,	// (0x00065262) main_camera_pane_g8_ParamLimits

0xa2fd,	// (0x00065262) main_camera_pane_g8

0x1b66,	// (0x0005cacb) main_video_pane_g7_ParamLimits

0x1b66,	// (0x0005cacb) main_video_pane_g7

0xc1f5,	// (0x0006715a) main_camera2_pane_t7_ParamLimits

0xc1f5,	// (0x0006715a) main_camera2_pane_t7

0xa443,	// (0x000653a8) scroll_pane_cp025_ParamLimits

0xa443,	// (0x000653a8) scroll_pane_cp025

0xa457,	// (0x000653bc) scroll_pane_cp026_ParamLimits

0xa457,	// (0x000653bc) scroll_pane_cp026

0xa466,	// (0x000653cb) wml_content_pane_ParamLimits

0x0e6c,	// (0x0005bdd1) main_touch_calib_pane

0x4cfb,	// (0x0005fc60) main_touch_calib_pane_g1

0x4d07,	// (0x0005fc6c) main_touch_calib_pane_g2

0x4d13,	// (0x0005fc78) main_touch_calib_pane_g3

0x4d1f,	// (0x0005fc84) main_touch_calib_pane_g4

0x0003,

0xf775,	// (0x0006a6da) main_touch_calib_pane_g

0x4d2b,	// (0x0005fc90) main_touch_calib_pane_t1

0x4d45,	// (0x0005fcaa) main_touch_calib_pane_t2

0x0004,

0xf77e,	// (0x0006a6e3) main_touch_calib_pane_t

0xaba0,	// (0x00065b05) mup_progress_pane_cp02

0xabbf,	// (0x00065b24) navi_pane_g1

0xac21,	// (0x00065b86) navi_pane_mp_t3

0x9880,	// (0x000647e5) main_mp3_pane_ParamLimits

0x413c,	// (0x0005f0a1) navi_pane_ParamLimits

0xc807,	// (0x0006776c) main_mp3_pane_g1_ParamLimits

0x4c2f,	// (0x0005fb94) main_mp3_pane_g2_ParamLimits

0x4c3d,	// (0x0005fba2) main_mp3_pane_g3_ParamLimits

0x4c3d,	// (0x0005fba2) main_mp3_pane_g3

0x4c4b,	// (0x0005fbb0) main_mp3_pane_g4_ParamLimits

0x4c4b,	// (0x0005fbb0) main_mp3_pane_g4

0xc837,	// (0x0006779c) main_mp3_pane_g5_ParamLimits

0xc837,	// (0x0006779c) main_mp3_pane_g5

0xc845,	// (0x000677aa) main_mp3_pane_g6_ParamLimits

0xc845,	// (0x000677aa) main_mp3_pane_g6

0xc852,	// (0x000677b7) main_mp3_pane_g7_ParamLimits

0xc852,	// (0x000677b7) main_mp3_pane_g7

0xc85e,	// (0x000677c3) main_mp3_pane_g8_ParamLimits

0xc85e,	// (0x000677c3) main_mp3_pane_g8

0xf757,	// (0x0006a6bc) main_mp3_pane_g_ParamLimits

0x4c59,	// (0x0005fbbe) main_mp3_pane_t2

0x4c67,	// (0x0005fbcc) main_mp3_pane_t3

0xc878,	// (0x000677dd) main_mp3_pane_t4

0xc886,	// (0x000677eb) main_mp3_pane_t5

0x0005,

0xf768,	// (0x0006a6cd) main_mp3_pane_t

0xc894,	// (0x000677f9) mup_progress_pane_cp01

0x0eca,	// (0x0005be2f) aid_zoom_text_secondary2

0xc653,	// (0x000675b8) list_cale_ev2_pane

0xc65b,	// (0x000675c0) scroll_pane_cp023_ParamLimits

0x4d9b,	// (0x0005fd00) field_cale_ev2_pane_ParamLimits

0x4d9b,	// (0x0005fd00) field_cale_ev2_pane

0x4dc1,	// (0x0005fd26) field_cale_ev2_pane_g1_ParamLimits

0x4dc1,	// (0x0005fd26) field_cale_ev2_pane_g1

0x4dcd,	// (0x0005fd32) field_cale_ev2_pane_g2_ParamLimits

0x4dcd,	// (0x0005fd32) field_cale_ev2_pane_g2

0x4de5,	// (0x0005fd4a) field_cale_ev2_pane_g3_ParamLimits

0x4de5,	// (0x0005fd4a) field_cale_ev2_pane_g3

0x0003,

0xf789,	// (0x0006a6ee) field_cale_ev2_pane_g_ParamLimits

0xf789,	// (0x0006a6ee) field_cale_ev2_pane_g

0x4e09,	// (0x0005fd6e) field_cale_ev2_pane_t1_ParamLimits

0x4e09,	// (0x0005fd6e) field_cale_ev2_pane_t1

0x4e20,	// (0x0005fd85) field_cale_ev2_pane_t2_ParamLimits

0x4e20,	// (0x0005fd85) field_cale_ev2_pane_t2

0x0001,

0xf792,	// (0x0006a6f7) field_cale_ev2_pane_t_ParamLimits

0xf792,	// (0x0006a6f7) field_cale_ev2_pane_t

0x3660,	// (0x0005e5c5) main_postcard_pane_g5_ParamLimits

0x3660,	// (0x0005e5c5) main_postcard_pane_g5

0x3676,	// (0x0005e5db) main_postcard_pane_g6_ParamLimits

0x3676,	// (0x0005e5db) main_postcard_pane_g6

0x1916,	// (0x0005c87b) camera2_autofocus_pane_cp_ParamLimits

0x1916,	// (0x0005c87b) camera2_autofocus_pane_cp

0x9880,	// (0x000647e5) main_mup3_pane

0x4e55,	// (0x0005fdba) main_mup3_pane_g1_ParamLimits

0x4e55,	// (0x0005fdba) main_mup3_pane_g1

0x4e77,	// (0x0005fddc) main_mup3_pane_g2_ParamLimits

0x4e77,	// (0x0005fddc) main_mup3_pane_g2

0x4ef8,	// (0x0005fe5d) main_mup3_pane_g3_ParamLimits

0x4ef8,	// (0x0005fe5d) main_mup3_pane_g3

0x4f3a,	// (0x0005fe9f) main_mup3_pane_g4_ParamLimits

0x4f3a,	// (0x0005fe9f) main_mup3_pane_g4

0x4f7c,	// (0x0005fee1) main_mup3_pane_g5_ParamLimits

0x4f7c,	// (0x0005fee1) main_mup3_pane_g5

0x4fc0,	// (0x0005ff25) main_mup3_pane_g6_ParamLimits

0x4fc0,	// (0x0005ff25) main_mup3_pane_g6

0xc89c,	// (0x00067801) main_mup3_pane_g7_ParamLimits

0xc89c,	// (0x00067801) main_mup3_pane_g7

0x0007,

0xf7a2,	// (0x0006a707) main_mup3_pane_g_ParamLimits

0xf7a2,	// (0x0006a707) main_mup3_pane_g

0x503c,	// (0x0005ffa1) main_mup3_pane_t1_ParamLimits

0x503c,	// (0x0005ffa1) main_mup3_pane_t1

0x50b0,	// (0x00060015) main_mup3_pane_t2_ParamLimits

0x50b0,	// (0x00060015) main_mup3_pane_t2

0x5184,	// (0x000600e9) main_mup3_pane_t4_ParamLimits

0x5184,	// (0x000600e9) main_mup3_pane_t4

0x51de,	// (0x00060143) main_mup3_pane_t5_ParamLimits

0x51de,	// (0x00060143) main_mup3_pane_t5

0x5292,	// (0x000601f7) main_mup3_pane_t6_ParamLimits

0x5292,	// (0x000601f7) main_mup3_pane_t6

0x0005,

0xf7b3,	// (0x0006a718) main_mup3_pane_t_ParamLimits

0xf7b3,	// (0x0006a718) main_mup3_pane_t

0x5346,	// (0x000602ab) mup3_progress_pane_ParamLimits

0x5346,	// (0x000602ab) mup3_progress_pane

0x53c2,	// (0x00060327) popup_mup3_control_window_ParamLimits

0x53c2,	// (0x00060327) popup_mup3_control_window

0xc8aa,	// (0x0006780f) popup_mup3_text_window

0x53f4,	// (0x00060359) mup3_progress_pane_t1

0x540b,	// (0x00060370) mup3_progress_pane_t2

0xc8b2,	// (0x00067817) mup3_progress_pane_t3

0x0002,

0xf7c0,	// (0x0006a725) mup3_progress_pane_t

0xc8c9,	// (0x0006782e) mup_progress_pane_cp03

0x0e6c,	// (0x0005bdd1) bg_tb_trans_pane_cp04

0x5422,	// (0x00060387) mup3_volume_pane

0x542a,	// (0x0006038f) popup_mup3_control_window_g1

0x5433,	// (0x00060398) mup3_volume_pane_g1

0x543c,	// (0x000603a1) mup3_volume_pane_g2

0x5445,	// (0x000603aa) mup3_volume_pane_g3

0x0002,

0xf7c7,	// (0x0006a72c) mup3_volume_pane_g

0x0e6c,	// (0x0005bdd1) bg_tb_trans_pane_cp03

0xc8d9,	// (0x0006783e) popup_mup3_text_window_g1

0xc8e1,	// (0x00067846) popup_mup3_text_window_t1

0xa08f,	// (0x00064ff4) list_calc_item_pane_g1_ParamLimits

0xc2dd,	// (0x00067242) mup_volume_pane_cp_g1

0x4d5f,	// (0x0005fcc4) main_touch_calib_pane_t3

0x4d73,	// (0x0005fcd8) main_touch_calib_pane_t4

0x4d87,	// (0x0005fcec) main_touch_calib_pane_t5

0x0e76,	// (0x0005bddb) aid_cell_size_toolbar2

0x0e7e,	// (0x0005bde3) aid_popup3_width_pane

0x0eba,	// (0x0005be1f) aid_zoom_text_msg_primary

0xa2ca,	// (0x0006522f) vorec_t7

0xa053,	// (0x00064fb8) bg_calc_paper_pane_g1_ParamLimits

0xa05f,	// (0x00064fc4) bg_calc_paper_pane_g2_ParamLimits

0xa06b,	// (0x00064fd0) bg_calc_paper_pane_g3_ParamLimits

0xa077,	// (0x00064fdc) bg_calc_paper_pane_g4_ParamLimits

0xa083,	// (0x00064fe8) bg_calc_paper_pane_g5_ParamLimits

0x143d,	// (0x0005c3a2) bg_calc_paper_pane_g6_ParamLimits

0x144c,	// (0x0005c3b1) bg_calc_paper_pane_g7_ParamLimits

0x145b,	// (0x0005c3c0) bg_calc_paper_pane_g8_ParamLimits

0xf17a,	// (0x0006a0df) bg_calc_paper_pane_g_ParamLimits

0x146e,	// (0x0005c3d3) calc_bg_paper_pane_g9_ParamLimits

0x1a70,	// (0x0005c9d5) image_qvga_pane_ParamLimits

0x1a70,	// (0x0005c9d5) image_qvga_pane

0x9efa,	// (0x00064e5f) bg_popup_sub_pane_cp04_ParamLimits

0xaec0,	// (0x00065e25) popup_mup_playback_window_g1_ParamLimits

0xaecc,	// (0x00065e31) popup_mup_playback_window_t1_ParamLimits

0xaee1,	// (0x00065e46) popup_mup_playback_window_t2_ParamLimits

0xf506,	// (0x0006a46b) popup_mup_playback_window_t_ParamLimits

0x48bc,	// (0x0005f821) main_mup2_pane_g3_ParamLimits

0x48bc,	// (0x0005f821) main_mup2_pane_g3

0x1e6d,	// (0x0005cdd2) popup_toolbar_window_cp04

0xb2d6,	// (0x0006623b) popup_call2_audio_second_window_g3_ParamLimits

0xb2d6,	// (0x0006623b) popup_call2_audio_second_window_g3

0xb6e0,	// (0x00066645) popup_call2_audio_first_window_g4_ParamLimits

0xb6e0,	// (0x00066645) popup_call2_audio_first_window_g4

0xbd5f,	// (0x00066cc4) popup_call2_audio_in_window_g4_ParamLimits

0xbd5f,	// (0x00066cc4) popup_call2_audio_in_window_g4

0x3792,	// (0x0005e6f7) aid_area_sk_bg_cut_ParamLimits

0x3792,	// (0x0005e6f7) aid_area_sk_bg_cut

0xaef6,	// (0x00065e5b) aid_area_sk_bg_cut_2_ParamLimits

0xaef6,	// (0x00065e5b) aid_area_sk_bg_cut_2

0x4bc2,	// (0x0005fb27) aid_placing_details_win

0x4bca,	// (0x0005fb2f) aid_placing_details_win_2

0xc749,	// (0x000676ae) camera2_autofocus_pane_g1_ParamLimits

0x1073,	// (0x0005bfd8) popup_fixed_preview_cale_window_ParamLimits

0x1073,	// (0x0005bfd8) popup_fixed_preview_cale_window

0xac79,	// (0x00065bde) navi_slider_pane_g3

0xac82,	// (0x00065be7) navi_slider_pane_g4

0xac8b,	// (0x00065bf0) navi_slider_pane_g5

0xac79,	// (0x00065bde) navi_slider_pane_g6

0xac94,	// (0x00065bf9) navi_slider_pane_g7

0xadb5,	// (0x00065d1a) mup_scale_pane_g3

0xadbe,	// (0x00065d23) mup_scale_pane_g4

0xadc7,	// (0x00065d2c) mup_scale_pane_g5

0x3443,	// (0x0005e3a8) mup_scale_pane_g6

0x344c,	// (0x0005e3b1) mup_scale_pane_g7

0xac79,	// (0x00065bde) cams2_slider_pane_g3

0xc392,	// (0x000672f7) cams2_slider_pane_g4

0xc39a,	// (0x000672ff) cams2_slider_pane_g5

0xac79,	// (0x00065bde) cams2_slider_pane_g6

0xc3a2,	// (0x00067307) cams2_slider_pane_g7

0xc5d0,	// (0x00067535) camera2_autofocus_pane_cp_g1

0xc8ef,	// (0x00067854) bg_popup_preview_window_pane_cp02_ParamLimits

0xc8ef,	// (0x00067854) bg_popup_preview_window_pane_cp02

0xc8fb,	// (0x00067860) list_fp_cale_pane_ParamLimits

0xc8fb,	// (0x00067860) list_fp_cale_pane

0xc907,	// (0x0006786c) popup_fixed_preview_cale_window_t1_ParamLimits

0xc907,	// (0x0006786c) popup_fixed_preview_cale_window_t1

0x544e,	// (0x000603b3) popup_fixed_preview_cale_window_t2_ParamLimits

0x544e,	// (0x000603b3) popup_fixed_preview_cale_window_t2

0x5463,	// (0x000603c8) popup_fixed_preview_cale_window_t3_ParamLimits

0x5463,	// (0x000603c8) popup_fixed_preview_cale_window_t3

0x0002,

0xf7ce,	// (0x0006a733) popup_fixed_preview_cale_window_t_ParamLimits

0xf7ce,	// (0x0006a733) popup_fixed_preview_cale_window_t

0x5478,	// (0x000603dd) list_single_fp_cale_pane_ParamLimits

0x5478,	// (0x000603dd) list_single_fp_cale_pane

0xc925,	// (0x0006788a) list_single_fp_cale_pane_g1_ParamLimits

0xc925,	// (0x0006788a) list_single_fp_cale_pane_g1

0xc931,	// (0x00067896) list_single_fp_cale_pane_g2_ParamLimits

0xc931,	// (0x00067896) list_single_fp_cale_pane_g2

0x0002,

0xf7d5,	// (0x0006a73a) list_single_fp_cale_pane_g_ParamLimits

0xf7d5,	// (0x0006a73a) list_single_fp_cale_pane_g

0xc94a,	// (0x000678af) list_single_fp_cale_pane_t1_ParamLimits

0xc94a,	// (0x000678af) list_single_fp_cale_pane_t1

0xc95c,	// (0x000678c1) list_single_fp_cale_pane_t2_ParamLimits

0xc95c,	// (0x000678c1) list_single_fp_cale_pane_t2

0x0001,

0xf7dc,	// (0x0006a741) list_single_fp_cale_pane_t_ParamLimits

0xf7dc,	// (0x0006a741) list_single_fp_cale_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0x0e6c,	// (0x0005bdd1) main_dialer_pane

0x5490,	// (0x000603f5) aid_cell_size_keypad

0x549a,	// (0x000603ff) dialer_ne_pane

0x54a2,	// (0x00060407) grid_dialer_command_1_pane

0x54aa,	// (0x0006040f) grid_dialer_command_2_pane

0x54b2,	// (0x00060417) grid_dialer_keypad_pane

0x54c4,	// (0x00060429) bg_popup_call_pane_cp06_ParamLimits

0x54c4,	// (0x00060429) bg_popup_call_pane_cp06

0x54d0,	// (0x00060435) dialer_ne_clear_pane_ParamLimits

0x54d0,	// (0x00060435) dialer_ne_clear_pane

0xc98f,	// (0x000678f4) dialer_ne_pane_g1

0xc997,	// (0x000678fc) dialer_ne_pane_t1_ParamLimits

0xc997,	// (0x000678fc) dialer_ne_pane_t1

0x54dc,	// (0x00060441) dialer_ne_pane_t2_ParamLimits

0x54dc,	// (0x00060441) dialer_ne_pane_t2

0x5506,	// (0x0006046b) dialer_ne_pane_t3_ParamLimits

0x5506,	// (0x0006046b) dialer_ne_pane_t3

0x0002,

0xf7e1,	// (0x0006a746) dialer_ne_pane_t_ParamLimits

0xf7e1,	// (0x0006a746) dialer_ne_pane_t

0x5536,	// (0x0006049b) dialer_ne_pane_t3_copy1_ParamLimits

0x5536,	// (0x0006049b) dialer_ne_pane_t3_copy1

0x5565,	// (0x000604ca) cell_dialer_keypad_pane_ParamLimits

0x5565,	// (0x000604ca) cell_dialer_keypad_pane

0x557c,	// (0x000604e1) cell_dialer_command_1_pane_ParamLimits

0x557c,	// (0x000604e1) cell_dialer_command_1_pane

0x5592,	// (0x000604f7) cell_dialer_command_2_pane_ParamLimits

0x5592,	// (0x000604f7) cell_dialer_command_2_pane

0xc9a9,	// (0x0006790e) bg_button_pane_cp02_ParamLimits

0xc9a9,	// (0x0006790e) bg_button_pane_cp02

0x55a1,	// (0x00060506) cell_dialer_keypad_pane_g1_ParamLimits

0x55a1,	// (0x00060506) cell_dialer_keypad_pane_g1

0xc9a9,	// (0x0006790e) bg_button_pane_cp03_ParamLimits

0xc9a9,	// (0x0006790e) bg_button_pane_cp03

0x55b6,	// (0x0006051b) cell_dialer_command_1_pane_g1_ParamLimits

0x55b6,	// (0x0006051b) cell_dialer_command_1_pane_g1

0xc9b5,	// (0x0006791a) bg_button_pane_cp04

0x55ca,	// (0x0006052f) cell_dialer_command_2_pane_g1

0xac5f,	// (0x00065bc4) bg_button_pane_cp06

0xc9bd,	// (0x00067922) dialer_ne_clear_pane_g1

0x2f81,	// (0x0005dee6) navi_pane_g2

0x2faf,	// (0x0005df14) navi_pane_g3

0x0002,

0xf409,	// (0x0006a36e) navi_pane_g

0x2fd8,	// (0x0005df3d) navi_pane_mv_g2

0x2fff,	// (0x0005df64) navi_pane_mv_g5

0x3007,	// (0x0005df6c) navi_pane_mv_t1

0xa035,	// (0x00064f9a) main_clock2_pane

0x55fd,	// (0x00060562) main_clock2_list_pane_ParamLimits

0x55fd,	// (0x00060562) main_clock2_list_pane

0x5633,	// (0x00060598) main_clock2_pane_t1_ParamLimits

0x5633,	// (0x00060598) main_clock2_pane_t1

0x5671,	// (0x000605d6) main_clock2_pane_t2_ParamLimits

0x5671,	// (0x000605d6) main_clock2_pane_t2

0x0004,

0xf7e8,	// (0x0006a74d) main_clock2_pane_t_ParamLimits

0xf7e8,	// (0x0006a74d) main_clock2_pane_t

0x56fb,	// (0x00060660) popup_clock_analogue_window_cp03_ParamLimits

0x56fb,	// (0x00060660) popup_clock_analogue_window_cp03

0x5722,	// (0x00060687) popup_clock_digital_window_cp02_ParamLimits

0x5722,	// (0x00060687) popup_clock_digital_window_cp02

0x5797,	// (0x000606fc) main_clock2_list_single_pane_ParamLimits

0x5797,	// (0x000606fc) main_clock2_list_single_pane

0xac5f,	// (0x00065bc4) list_highlight_pane_cp05

0xc9c5,	// (0x0006792a) main_clock2_list_single_pane_t1

0x1e6d,	// (0x0005cdd2) popup_toolbar_window_cp04_ParamLimits

0x4bec,	// (0x0005fb51) camera2_autofocus_pane_g2_ParamLimits

0x4bec,	// (0x0005fb51) camera2_autofocus_pane_g2

0x4bf8,	// (0x0005fb5d) camera2_autofocus_pane_g3_ParamLimits

0x4bf8,	// (0x0005fb5d) camera2_autofocus_pane_g3

0x4c04,	// (0x0005fb69) camera2_autofocus_pane_g4_ParamLimits

0x4c04,	// (0x0005fb69) camera2_autofocus_pane_g4

0x4c10,	// (0x0005fb75) camera2_autofocus_pane_g5_ParamLimits

0x4c10,	// (0x0005fb75) camera2_autofocus_pane_g5

0x0004,

0xf731,	// (0x0006a696) camera2_autofocus_pane_g_ParamLimits

0xf731,	// (0x0006a696) camera2_autofocus_pane_g

0x4e35,	// (0x0005fd9a) camera2_autofocus_pane_cp_g2

0x4e3d,	// (0x0005fda2) camera2_autofocus_pane_cp_g3

0x4e45,	// (0x0005fdaa) camera2_autofocus_pane_cp_g4

0x4e4d,	// (0x0005fdb2) camera2_autofocus_pane_cp_g5

0x0004,

0xf797,	// (0x0006a6fc) camera2_autofocus_pane_cp_g

0x54bc,	// (0x00060421) popup_dialer_spcha_window

0x0e6c,	// (0x0005bdd1) bg_popup_sub_pane_cp07

0xc9d3,	// (0x00067938) list_spcha_pane

0xc9db,	// (0x00067940) list_single_spcha_pane_ParamLimits

0xc9db,	// (0x00067940) list_single_spcha_pane

0x0e6c,	// (0x0005bdd1) list_highlight_pane_cp06

0xc9ec,	// (0x00067951) list_single_spcha_pane_t1

0xbb09,	// (0x00066a6e) popup_call2_audio_out_window_g4_ParamLimits

0xbb09,	// (0x00066a6e) popup_call2_audio_out_window_g4

0x0e6c,	// (0x0005bdd1) main_imed2_pane

0xc0f0,	// (0x00067055) popup_imed_adjust2_window

0x3fc7,	// (0x0005ef2c) popup_imed_trans_window_ParamLimits

0x3fc7,	// (0x0005ef2c) popup_imed_trans_window

0xc40c,	// (0x00067371) popup_blid_sat_info2_window_t1

0xc41a,	// (0x0006737f) popup_blid_sat_info2_window_t2

0x000a,

0xf6c6,	// (0x0006a62b) popup_blid_sat_info2_window_t

0x5841,	// (0x000607a6) aid_size_cell_colour_35

0x5861,	// (0x000607c6) aid_size_cell_colour_112

0x5881,	// (0x000607e6) aid_size_cell_effect

0xc0c8,	// (0x0006702d) bg_tb_trans_pane_cp02

0xa722,	// (0x00065687) heading_imed_pane

0x58a1,	// (0x00060806) listscroll_imed_pane

0xc9fa,	// (0x0006795f) heading_imed_pane_g1

0xca02,	// (0x00067967) heading_imed_pane_t1

0xca10,	// (0x00067975) grid_imed_colour_35_pane_ParamLimits

0xca10,	// (0x00067975) grid_imed_colour_35_pane

0x58ad,	// (0x00060812) grid_imed_effect_pane

0xca2b,	// (0x00067990) list_imed_aspect_pane

0x58c2,	// (0x00060827) scroll_pane_cp027_ParamLimits

0x58c2,	// (0x00060827) scroll_pane_cp027

0x58d3,	// (0x00060838) cell_imed_effect_pane_ParamLimits

0x58d3,	// (0x00060838) cell_imed_effect_pane

0xca33,	// (0x00067998) cell_imed_colour_pane_ParamLimits

0xca33,	// (0x00067998) cell_imed_colour_pane

0xca75,	// (0x000679da) cell_imed_colour_pane_g1_ParamLimits

0xca75,	// (0x000679da) cell_imed_colour_pane_g1

0xca86,	// (0x000679eb) hgihlgiht_grid_pane_cp016_ParamLimits

0xca86,	// (0x000679eb) hgihlgiht_grid_pane_cp016

0x58fa,	// (0x0006085f) cell_imed_effect_pane_g1

0x5902,	// (0x00060867) grid_highlight_pane_cp017

0xa1b8,	// (0x0006511d) list_imed_single_pane_ParamLimits

0xa1b8,	// (0x0006511d) list_imed_single_pane

0x0e6c,	// (0x0005bdd1) list_highlight_pane_cp07

0xca97,	// (0x000679fc) list_imed_aspect_pane_comp1_t1

0xc0c8,	// (0x0006702d) bg_tb_trans_pane_cp05

0xcab9,	// (0x00067a1e) popup_imed_adjust2_window_g1

0xcae0,	// (0x00067a45) popup_imed_adjust2_window_t1

0xcaf8,	// (0x00067a5d) slider_imed_adjust_pane

0xcb0c,	// (0x00067a71) slider_imed_adjust_pane_g1

0xcb1c,	// (0x00067a81) slider_imed_adjust_pane_g2

0xcb2c,	// (0x00067a91) slider_imed_adjust_pane_g3

0xcb3d,	// (0x00067aa2) slider_imed_adjust_pane_g4

0x0003,

0xf805,	// (0x0006a76a) slider_imed_adjust_pane_g

0x590b,	// (0x00060870) aid_size_cell_clipart2

0x5917,	// (0x0006087c) grid_imed_clipart_pane

0xcb4e,	// (0x00067ab3) scroll_pane_cp031

0x5921,	// (0x00060886) cell_imed_clipart_pane_ParamLimits

0x5921,	// (0x00060886) cell_imed_clipart_pane

0x5948,	// (0x000608ad) cell_imed_clipart_pane_g1

0x0e6c,	// (0x0005bdd1) grid_highlight_pane_cp014

0x5612,	// (0x00060577) main_clock2_pane_g1_ParamLimits

0x5612,	// (0x00060577) main_clock2_pane_g1

0x5742,	// (0x000606a7) aid_call2_pane_cp10

0x5754,	// (0x000606b9) aid_call_pane_cp10

0xab94,	// (0x00065af9) popup_clock_analogue_window_cp10_g1

0xab94,	// (0x00065af9) popup_clock_analogue_window_cp10_g2

0x5766,	// (0x000606cb) popup_clock_analogue_window_cp10_g3

0x5766,	// (0x000606cb) popup_clock_analogue_window_cp10_g4

0xab94,	// (0x00065af9) popup_clock_analogue_window_cp10_g5

0x0004,

0xf7f3,	// (0x0006a758) popup_clock_analogue_window_cp10_g

0x5778,	// (0x000606dd) popup_clock_analogue_window_cp10_t1

0x57a9,	// (0x0006070e) clock_digital_number_pane_cp10_ParamLimits

0x57a9,	// (0x0006070e) clock_digital_number_pane_cp10

0x57c1,	// (0x00060726) clock_digital_number_pane_cp11_ParamLimits

0x57c1,	// (0x00060726) clock_digital_number_pane_cp11

0x57d9,	// (0x0006073e) clock_digital_number_pane_cp12_ParamLimits

0x57d9,	// (0x0006073e) clock_digital_number_pane_cp12

0x57f1,	// (0x00060756) clock_digital_number_pane_cp13_ParamLimits

0x57f1,	// (0x00060756) clock_digital_number_pane_cp13

0x5809,	// (0x0006076e) clock_digital_separator_pane_cp10_ParamLimits

0x5809,	// (0x0006076e) clock_digital_separator_pane_cp10

0x5821,	// (0x00060786) popup_clock_digital_window_cp02_t1_ParamLimits

0x5821,	// (0x00060786) popup_clock_digital_window_cp02_t1

0x9ef2,	// (0x00064e57) clock_digital_number_pane_cp10_g1

0x9ef2,	// (0x00064e57) clock_digital_number_pane_cp10_g2

0x0001,

0xf80e,	// (0x0006a773) clock_digital_number_pane_cp10_g

0x9ef2,	// (0x00064e57) clock_digital_separator_pane_cp10_g1

0x9ef2,	// (0x00064e57) clock_digital_separator_pane_g2_cp10

0xac2f,	// (0x00065b94) navi_pane_vded_g4

0xac38,	// (0x00065b9d) navi_pane_vded_g5

0xac41,	// (0x00065ba6) navi_pane_vded_t1

0x0e6c,	// (0x0005bdd1) main_vded_pane

0x5951,	// (0x000608b6) main_vded_pane_g1

0x595d,	// (0x000608c2) main_vded_pane_g2

0x5967,	// (0x000608cc) main_vded_pane_g3

0x0002,

0xf813,	// (0x0006a778) main_vded_pane_g

0x5971,	// (0x000608d6) main_vded_pane_t1

0x597f,	// (0x000608e4) main_vded_pane_t2

0x0001,

0xf81a,	// (0x0006a77f) main_vded_pane_t

0x598d,	// (0x000608f2) vded_slider_pane

0x5997,	// (0x000608fc) vded_video_pane

0xcb56,	// (0x00067abb) vded_video_pane_g1

0x59a1,	// (0x00060906) vded_video_pane_g2

0xc5d0,	// (0x00067535) vded_video_pane_g3

0x0002,

0xf81f,	// (0x0006a784) vded_video_pane_g

0xcb60,	// (0x00067ac5) vded_slider_pane_g1

0xc2dd,	// (0x00067242) vded_slider_pane_g2

0xcb69,	// (0x00067ace) vded_slider_pane_g3

0xcb72,	// (0x00067ad7) vded_slider_pane_g4

0xcb7b,	// (0x00067ae0) vded_slider_pane_g5

0x0004,

0xf826,	// (0x0006a78b) vded_slider_pane_g

0x53aa,	// (0x0006030f) mup3_rocker_pane_ParamLimits

0x53aa,	// (0x0006030f) mup3_rocker_pane

0x59aa,	// (0x0006090f) mup3_control_keys_pane_g1

0x59b2,	// (0x00060917) mup3_control_keys_pane_g2

0x59ba,	// (0x0006091f) mup3_control_keys_pane_g3

0x59c2,	// (0x00060927) mup3_control_keys_pane_g4

0x0003,

0xf831,	// (0x0006a796) mup3_control_keys_pane_g

0x10aa,	// (0x0005c00f) popup_toolbar2_fixed_window_cp01_ParamLimits

0x10aa,	// (0x0005c00f) popup_toolbar2_fixed_window_cp01

0x53de,	// (0x00060343) popup_toolbar2_fixed_window_cp02_ParamLimits

0x53de,	// (0x00060343) popup_toolbar2_fixed_window_cp02

0xb448,	// (0x000663ad) popup_call2_audio_second_window_t4_ParamLimits

0xb448,	// (0x000663ad) popup_call2_audio_second_window_t4

0xb976,	// (0x000668db) popup_call2_audio_first_window_t6_ParamLimits

0xb976,	// (0x000668db) popup_call2_audio_first_window_t6

0xbc0c,	// (0x00066b71) popup_call2_audio_out_window_t6_ParamLimits

0xbc0c,	// (0x00066b71) popup_call2_audio_out_window_t6

0x0e6c,	// (0x0005bdd1) main_vitu_pane

0x59d2,	// (0x00060937) aid_size_cell_itu_ParamLimits

0x59d2,	// (0x00060937) aid_size_cell_itu

0x9880,	// (0x000647e5) bg_popup_window_pane_cp08_ParamLimits

0x9880,	// (0x000647e5) bg_popup_window_pane_cp08

0x59e8,	// (0x0006094d) field_vitu_entry_pane_ParamLimits

0x59e8,	// (0x0006094d) field_vitu_entry_pane

0x59ff,	// (0x00060964) grid_vitu_function_pane_ParamLimits

0x59ff,	// (0x00060964) grid_vitu_function_pane

0x5a1a,	// (0x0006097f) grid_vitu_itu_pane_ParamLimits

0x5a1a,	// (0x0006097f) grid_vitu_itu_pane

0x5a38,	// (0x0006099d) cell_vitu_itu_pane_ParamLimits

0x5a38,	// (0x0006099d) cell_vitu_itu_pane

0x5a5c,	// (0x000609c1) cell_vitu_function_pane_ParamLimits

0x5a5c,	// (0x000609c1) cell_vitu_function_pane

0x9880,	// (0x000647e5) bg_popup_sub_pane_cp08_ParamLimits

0x9880,	// (0x000647e5) bg_popup_sub_pane_cp08

0x5a77,	// (0x000609dc) field_vitu_entry_pane_t1_ParamLimits

0x5a77,	// (0x000609dc) field_vitu_entry_pane_t1

0xcb9c,	// (0x00067b01) field_vitu_entry_pane_t2_ParamLimits

0xcb9c,	// (0x00067b01) field_vitu_entry_pane_t2

0x0001,

0xf83f,	// (0x0006a7a4) field_vitu_entry_pane_t_ParamLimits

0xf83f,	// (0x0006a7a4) field_vitu_entry_pane_t

0xcbb9,	// (0x00067b1e) bg_button_pane_cp05_ParamLimits

0xcbb9,	// (0x00067b1e) bg_button_pane_cp05

0x5a97,	// (0x000609fc) cell_vitu_itu_pane_g1

0x5aaf,	// (0x00060a14) cell_vitu_itu_pane_t1_ParamLimits

0x5aaf,	// (0x00060a14) cell_vitu_itu_pane_t1

0x5ac1,	// (0x00060a26) cell_vitu_itu_pane_t2_ParamLimits

0x5ac1,	// (0x00060a26) cell_vitu_itu_pane_t2

0x0002,

0xf844,	// (0x0006a7a9) cell_vitu_itu_pane_t_ParamLimits

0xf844,	// (0x0006a7a9) cell_vitu_itu_pane_t

0xcbc7,	// (0x00067b2c) bg_button_pane_cp07

0x5af6,	// (0x00060a5b) cell_vitu_function_pane_g1

0x9fc5,	// (0x00064f2a) main_calc_pane_g1

0x0eae,	// (0x0005be13) aid_visual_content_pane

0x0e6c,	// (0x0005bdd1) main_vradio_pane

0x5aff,	// (0x00060a64) main_vradio_pane_g1_ParamLimits

0x5aff,	// (0x00060a64) main_vradio_pane_g1

0xcbd1,	// (0x00067b36) main_vradio_pane_g2_ParamLimits

0xcbd1,	// (0x00067b36) main_vradio_pane_g2

0x0001,

0xf84b,	// (0x0006a7b0) main_vradio_pane_g_ParamLimits

0xf84b,	// (0x0006a7b0) main_vradio_pane_g

0x5b18,	// (0x00060a7d) main_vradio_pane_t1_ParamLimits

0x5b18,	// (0x00060a7d) main_vradio_pane_t1

0x5b2d,	// (0x00060a92) main_vradio_pane_t2_ParamLimits

0x5b2d,	// (0x00060a92) main_vradio_pane_t2

0xcbde,	// (0x00067b43) main_vradio_pane_t3_ParamLimits

0xcbde,	// (0x00067b43) main_vradio_pane_t3

0x0002,

0xf850,	// (0x0006a7b5) main_vradio_pane_t_ParamLimits

0xf850,	// (0x0006a7b5) main_vradio_pane_t

0x5b42,	// (0x00060aa7) vradio_rocker_control_pane_ParamLimits

0x5b42,	// (0x00060aa7) vradio_rocker_control_pane

0x5b54,	// (0x00060ab9) vradio_station_info_pane_ParamLimits

0x5b54,	// (0x00060ab9) vradio_station_info_pane

0xcbf2,	// (0x00067b57) vradio_frequency_info_pane_ParamLimits

0xcbf2,	// (0x00067b57) vradio_frequency_info_pane

0xc5d0,	// (0x00067535) vradio_station_info_pane_g1

0xcc01,	// (0x00067b66) vradio_station_info_pane_t1_ParamLimits

0xcc01,	// (0x00067b66) vradio_station_info_pane_t1

0xcc23,	// (0x00067b88) vradio_station_info_pane_t2_ParamLimits

0xcc23,	// (0x00067b88) vradio_station_info_pane_t2

0x0001,

0xf857,	// (0x0006a7bc) vradio_station_info_pane_t_ParamLimits

0xf857,	// (0x0006a7bc) vradio_station_info_pane_t

0xcc35,	// (0x00067b9a) vradio_tuning_pane

0xcc3d,	// (0x00067ba2) vradio_rocker_control_pane_g1

0xcc45,	// (0x00067baa) vradio_rocker_control_pane_g2

0xcc4d,	// (0x00067bb2) vradio_rocker_control_pane_g3

0xcc55,	// (0x00067bba) vradio_rocker_control_pane_g4

0xcc5d,	// (0x00067bc2) vradio_rocker_control_pane_g5

0x0004,

0xf85c,	// (0x0006a7c1) vradio_rocker_control_pane_g

0x5b66,	// (0x00060acb) vradio_frequency_info_pane_g1

0xcc65,	// (0x00067bca) vradio_frequency_info_pane_t1_ParamLimits

0xcc65,	// (0x00067bca) vradio_frequency_info_pane_t1

0x5b70,	// (0x00060ad5) vradio_tuning_pane_g1

0x5b7b,	// (0x00060ae0) vradio_tuning_pane_t1

0x0f0b,	// (0x0005be70) area_side_right_pane_ParamLimits

0x0f0b,	// (0x0005be70) area_side_right_pane

0xc08f,	// (0x00066ff4) status_small_pane_g1

0xc097,	// (0x00066ffc) status_small_pane_g2

0xc0a0,	// (0x00067005) status_small_pane_g3

0xc0a9,	// (0x0006700e) status_small_pane_g4

0x0003,

0xf61c,	// (0x0006a581) status_small_pane_g

0xc0b2,	// (0x00067017) status_small_pane_t1

0x0e6c,	// (0x0005bdd1) main_video3_pane

0xcc79,	// (0x00067bde) cams_zoom_vslider_pane

0xcc81,	// (0x00067be6) image3_wide_pane_ParamLimits

0xcc81,	// (0x00067be6) image3_wide_pane

0xcc9b,	// (0x00067c00) image3_wide_small_pane

0xcca7,	// (0x00067c0c) main_video3_pane_g1_ParamLimits

0xcca7,	// (0x00067c0c) main_video3_pane_g1

0xccc3,	// (0x00067c28) main_video3_pane_g2_ParamLimits

0xccc3,	// (0x00067c28) main_video3_pane_g2

0x0001,

0xf867,	// (0x0006a7cc) main_video3_pane_g_ParamLimits

0xf867,	// (0x0006a7cc) main_video3_pane_g

0xccdf,	// (0x00067c44) main_video3_pane_t1_ParamLimits

0xccdf,	// (0x00067c44) main_video3_pane_t1

0xcd0a,	// (0x00067c6f) main_video3_pane_t2_ParamLimits

0xcd0a,	// (0x00067c6f) main_video3_pane_t2

0xcd35,	// (0x00067c9a) main_video3_pane_t3_ParamLimits

0xcd35,	// (0x00067c9a) main_video3_pane_t3

0x0002,

0xf86c,	// (0x0006a7d1) main_video3_pane_t_ParamLimits

0xf86c,	// (0x0006a7d1) main_video3_pane_t

0xcd62,	// (0x00067cc7) cams_zoom_vslider_pane_g1

0xcd6b,	// (0x00067cd0) cams_zoom_vslider_pane_g2

0x0001,

0xf873,	// (0x0006a7d8) cams_zoom_vslider_pane_g

0xcd73,	// (0x00067cd8) small_slider_vertical_pane

0xc5d0,	// (0x00067535) small_slider_vertical_pane_g1

0xc5d0,	// (0x00067535) small_slider_vertical_pane_g2

0xcd7b,	// (0x00067ce0) small_slider_vertical_pane_g3

0x0002,

0xf878,	// (0x0006a7dd) small_slider_vertical_pane_g

0x0e6c,	// (0x0005bdd1) main_hwr_training_pane

0xcd84,	// (0x00067ce9) hwr_training_instruct_pane_ParamLimits

0xcd84,	// (0x00067ce9) hwr_training_instruct_pane

0x5b8a,	// (0x00060aef) hwr_training_navi_pane_ParamLimits

0x5b8a,	// (0x00060aef) hwr_training_navi_pane

0x5ba9,	// (0x00060b0e) hwr_training_write_pane_ParamLimits

0x5ba9,	// (0x00060b0e) hwr_training_write_pane

0x0e6c,	// (0x0005bdd1) bg_frame_shadow_pane

0xcdbb,	// (0x00067d20) hwr_training_write_pane_g1

0xcdc3,	// (0x00067d28) hwr_training_write_pane_g2

0xcdcb,	// (0x00067d30) hwr_training_write_pane_g3

0xcdd3,	// (0x00067d38) hwr_training_write_pane_g4

0xcddb,	// (0x00067d40) hwr_training_write_pane_g5

0xcde3,	// (0x00067d48) hwr_training_write_pane_g6

0xcdeb,	// (0x00067d50) hwr_training_write_pane_g7

0x0006,

0xf87f,	// (0x0006a7e4) hwr_training_write_pane_g

0xda4f,	// (0x000689b4) hwr_training_navi_pane_g1_ParamLimits

0xda4f,	// (0x000689b4) hwr_training_navi_pane_g1

0xda61,	// (0x000689c6) hwr_training_navi_pane_g2_ParamLimits

0xda61,	// (0x000689c6) hwr_training_navi_pane_g2

0xda73,	// (0x000689d8) hwr_training_navi_pane_g3_ParamLimits

0xda73,	// (0x000689d8) hwr_training_navi_pane_g3

0xda83,	// (0x000689e8) hwr_training_navi_pane_g4_ParamLimits

0xda83,	// (0x000689e8) hwr_training_navi_pane_g4

0x0004,

0xf88e,	// (0x0006a7f3) hwr_training_navi_pane_g_ParamLimits

0xf88e,	// (0x0006a7f3) hwr_training_navi_pane_g

0xda90,	// (0x000689f5) hwr_training_navi_pane_t1

0x5bf3,	// (0x00060b58) list_single_hwr_training_instruct_pane_ParamLimits

0x5bf3,	// (0x00060b58) list_single_hwr_training_instruct_pane

0xcdf3,	// (0x00067d58) list_single_hwr_training_instruct_pane_t1

0xc510,	// (0x00067475) bg_frame_shadow_pane_g1

0xce02,	// (0x00067d67) bg_frame_shadow_pane_g2

0xce0a,	// (0x00067d6f) bg_frame_shadow_pane_g3

0xce12,	// (0x00067d77) bg_frame_shadow_pane_g4

0xce1a,	// (0x00067d7f) bg_frame_shadow_pane_g5

0xce22,	// (0x00067d87) bg_frame_shadow_pane_g6

0xce2a,	// (0x00067d8f) bg_frame_shadow_pane_g7

0xa12e,	// (0x00065093) bg_frame_shadow_pane_g8

0x0007,

0xf899,	// (0x0006a7fe) bg_frame_shadow_pane_g

0x0e6c,	// (0x0005bdd1) main_video_tele_dialer_pane

0x5c10,	// (0x00060b75) aid_size_cell_video_keypad_ParamLimits

0x5c10,	// (0x00060b75) aid_size_cell_video_keypad

0x5c2a,	// (0x00060b8f) grid_video_dialer_keypad_pane_ParamLimits

0x5c2a,	// (0x00060b8f) grid_video_dialer_keypad_pane

0x5c76,	// (0x00060bdb) video_down_pane_cp_ParamLimits

0x5c76,	// (0x00060bdb) video_down_pane_cp

0x5ca6,	// (0x00060c0b) cell_video_dialer_keypad_pane_ParamLimits

0x5ca6,	// (0x00060c0b) cell_video_dialer_keypad_pane

0xce32,	// (0x00067d97) bg_button_pane_cp08_ParamLimits

0xce32,	// (0x00067d97) bg_button_pane_cp08

0x5cc8,	// (0x00060c2d) cell_video_dialer_keypad_pane_g1_ParamLimits

0x5cc8,	// (0x00060c2d) cell_video_dialer_keypad_pane_g1

0x5394,	// (0x000602f9) mup3_rocker2_pane_ParamLimits

0x5394,	// (0x000602f9) mup3_rocker2_pane

0xc5d0,	// (0x00067535) mup3_rocker2_pane_g1

0x3eb0,	// (0x0005ee15) main_dialer2_pane

0x0e6c,	// (0x0005bdd1) main_mp4_pane

0xdaa6,	// (0x00068a0b) main_mp4_pane_g1_ParamLimits

0xdaa6,	// (0x00068a0b) main_mp4_pane_g1

0xdaa6,	// (0x00068a0b) main_mp4_pane_g2_ParamLimits

0xdaa6,	// (0x00068a0b) main_mp4_pane_g2

0x5d03,	// (0x00060c68) main_mp4_pane_g3_ParamLimits

0x5d03,	// (0x00060c68) main_mp4_pane_g3

0xdab4,	// (0x00068a19) main_mp4_pane_g4_ParamLimits

0xdab4,	// (0x00068a19) main_mp4_pane_g4

0xdadc,	// (0x00068a41) main_mp4_pane_g5_ParamLimits

0xdadc,	// (0x00068a41) main_mp4_pane_g5

0x0005,

0xf8b9,	// (0x0006a81e) main_mp4_pane_g_ParamLimits

0xf8b9,	// (0x0006a81e) main_mp4_pane_g

0xdb2c,	// (0x00068a91) main_mp4_pane_t1_ParamLimits

0xdb2c,	// (0x00068a91) main_mp4_pane_t1

0xdb88,	// (0x00068aed) main_mp4_pane_t2_ParamLimits

0xdb88,	// (0x00068aed) main_mp4_pane_t2

0xde7e,	// (0x00068de3) main_mp4_pane_t3_ParamLimits

0xde7e,	// (0x00068de3) main_mp4_pane_t3

0xdbda,	// (0x00068b3f) main_mp4_pane_t4_ParamLimits

0xdbda,	// (0x00068b3f) main_mp4_pane_t4

0x0003,

0xf8c6,	// (0x0006a82b) main_mp4_pane_t_ParamLimits

0xf8c6,	// (0x0006a82b) main_mp4_pane_t

0xdc1e,	// (0x00068b83) mp4_progress_pane_ParamLimits

0xdc1e,	// (0x00068b83) mp4_progress_pane

0xdc68,	// (0x00068bcd) mp4_rocker_pane_ParamLimits

0xdc68,	// (0x00068bcd) mp4_rocker_pane

0xdea6,	// (0x00068e0b) mp4_progress_pane_t1

0xdebf,	// (0x00068e24) mp4_progress_pane_t2

0x0001,

0x06e0,	// (0x0005b645) mp4_progress_pane_t

0xded8,	// (0x00068e3d) mup_progress_pane_cp04

0xdee4,	// (0x00068e49) mp4_rocker_pane_g1

0x5d3f,	// (0x00060ca4) aid_cell_size_keypad2_ParamLimits

0x5d3f,	// (0x00060ca4) aid_cell_size_keypad2

0x5d55,	// (0x00060cba) dialer2_ne_pane_ParamLimits

0x5d55,	// (0x00060cba) dialer2_ne_pane

0x5d6f,	// (0x00060cd4) grid_dialer2_keypad_pane_ParamLimits

0x5d6f,	// (0x00060cd4) grid_dialer2_keypad_pane

0xc3b3,	// (0x00067318) bg_popup_call_pane_cp07_ParamLimits

0xc3b3,	// (0x00067318) bg_popup_call_pane_cp07

0x5d8d,	// (0x00060cf2) dialer2_ne_pane_t1_ParamLimits

0x5d8d,	// (0x00060cf2) dialer2_ne_pane_t1

0x5dcc,	// (0x00060d31) cell_dialer2_keypad_pane_ParamLimits

0x5dcc,	// (0x00060d31) cell_dialer2_keypad_pane

0xdf00,	// (0x00068e65) bg_button_pane_pane_cp04_ParamLimits

0xdf00,	// (0x00068e65) bg_button_pane_pane_cp04

0x5df0,	// (0x00060d55) cell_dialer2_keypad_pane_g1_ParamLimits

0x5df0,	// (0x00060d55) cell_dialer2_keypad_pane_g1

0x1d41,	// (0x0005cca6) aid_placing_vt_set_content_ParamLimits

0x1d41,	// (0x0005cca6) aid_placing_vt_set_content

0x1d69,	// (0x0005ccce) aid_placing_vt_set_title_ParamLimits

0x1d69,	// (0x0005ccce) aid_placing_vt_set_title

0x0e6c,	// (0x0005bdd1) main_image3_pane

0x5eb6,	// (0x00060e1b) area_side_right_pane_cp01_ParamLimits

0x5eb6,	// (0x00060e1b) area_side_right_pane_cp01

0xdaa6,	// (0x00068a0b) main_image3_pane_g1_ParamLimits

0xdaa6,	// (0x00068a0b) main_image3_pane_g1

0x5ecd,	// (0x00060e32) main_image3_pane_g2_ParamLimits

0x5ecd,	// (0x00060e32) main_image3_pane_g2

0x5ef5,	// (0x00060e5a) main_image3_pane_g3_ParamLimits

0x5ef5,	// (0x00060e5a) main_image3_pane_g3

0x5f1f,	// (0x00060e84) main_image3_pane_g4_ParamLimits

0x5f1f,	// (0x00060e84) main_image3_pane_g4

0x0003,

0xf8d9,	// (0x0006a83e) main_image3_pane_g_ParamLimits

0xf8d9,	// (0x0006a83e) main_image3_pane_g

0x5f49,	// (0x00060eae) main_image3_pane_t1_ParamLimits

0x5f49,	// (0x00060eae) main_image3_pane_t1

0x5fa1,	// (0x00060f06) main_image3_pane_t2_ParamLimits

0x5fa1,	// (0x00060f06) main_image3_pane_t2

0x5ff3,	// (0x00060f58) main_image3_pane_t3_ParamLimits

0x5ff3,	// (0x00060f58) main_image3_pane_t3

0x0003,

0xf8e2,	// (0x0006a847) main_image3_pane_t_ParamLimits

0xf8e2,	// (0x0006a847) main_image3_pane_t

0x9880,	// (0x000647e5) grid_sctrl_middle_pane_cp01_ParamLimits

0x9880,	// (0x000647e5) grid_sctrl_middle_pane_cp01

0x607b,	// (0x00060fe0) cell_sctrl_middle_pane_cp01_ParamLimits

0x607b,	// (0x00060fe0) cell_sctrl_middle_pane_cp01

0x6098,	// (0x00060ffd) cell_sctrl_middle_pane_cp01_g1_ParamLimits

0x6098,	// (0x00060ffd) cell_sctrl_middle_pane_cp01_g1

0x0e6c,	// (0x0005bdd1) main_call4_pane

0x60ae,	// (0x00061013) aid_size_button_call4_ParamLimits

0x60ae,	// (0x00061013) aid_size_button_call4

0x60df,	// (0x00061044) call4_windows_pane_ParamLimits

0x60df,	// (0x00061044) call4_windows_pane

0x60ff,	// (0x00061064) grid_call4_button_pane_ParamLimits

0x60ff,	// (0x00061064) grid_call4_button_pane

0xdf0c,	// (0x00068e71) call4_windows_conf_pane

0xdf21,	// (0x00068e86) popup_call4_audio_first_window_ParamLimits

0xdf21,	// (0x00068e86) popup_call4_audio_first_window

0xdf6d,	// (0x00068ed2) popup_call4_audio_second_window_ParamLimits

0xdf6d,	// (0x00068ed2) popup_call4_audio_second_window

0xdf8f,	// (0x00068ef4) popup_call4_audio_wait_window_ParamLimits

0xdf8f,	// (0x00068ef4) popup_call4_audio_wait_window

0x612c,	// (0x00061091) cell_call4_button_pane_ParamLimits

0x612c,	// (0x00061091) cell_call4_button_pane

0x6155,	// (0x000610ba) bg_button_pane_cp09_ParamLimits

0x6155,	// (0x000610ba) bg_button_pane_cp09

0x6161,	// (0x000610c6) cell_call4_button_pane_g1_ParamLimits

0x6161,	// (0x000610c6) cell_call4_button_pane_g1

0x6187,	// (0x000610ec) cell_call4_button_pane_t1_ParamLimits

0x6187,	// (0x000610ec) cell_call4_button_pane_t1

0xdfd7,	// (0x00068f3c) popup_call4_audio_conf_window_ParamLimits

0xdfd7,	// (0x00068f3c) popup_call4_audio_conf_window

0x53f4,	// (0x00060359) mup3_progress_pane_t1_ParamLimits

0x540b,	// (0x00060370) mup3_progress_pane_t2_ParamLimits

0xc8b2,	// (0x00067817) mup3_progress_pane_t3_ParamLimits

0xf7c0,	// (0x0006a725) mup3_progress_pane_t_ParamLimits

0xc8c9,	// (0x0006782e) mup_progress_pane_cp03_ParamLimits

0x59ca,	// (0x0006092f) mup3_control_keys_pane_g4_copy1

0xdc4c,	// (0x00068bb1) mp4_rocker2_pane_ParamLimits

0xdc4c,	// (0x00068bb1) mp4_rocker2_pane

0xdfeb,	// (0x00068f50) mp4_rocker2_pane_g1

0xdff3,	// (0x00068f58) mp4_rocker2_pane_g2

0xdcba,	// (0x00068c1f) mp4_rocker2_pane_g3

0xdcc2,	// (0x00068c27) mp4_rocker2_pane_g4

0xdcca,	// (0x00068c2f) mp4_rocker2_pane_g5

0x0004,

0xf8eb,	// (0x0006a850) mp4_rocker2_pane_g

0x0e6c,	// (0x0005bdd1) main_camera4_pane

0x0e6c,	// (0x0005bdd1) main_video4_pane

0x5c44,	// (0x00060ba9) main_video_tele_dialer_pane_t1_ParamLimits

0x5c44,	// (0x00060ba9) main_video_tele_dialer_pane_t1

0x5c5d,	// (0x00060bc2) main_video_tele_dialer_pane_t2_ParamLimits

0x5c5d,	// (0x00060bc2) main_video_tele_dialer_pane_t2

0x0001,

0xf8aa,	// (0x0006a80f) main_video_tele_dialer_pane_t_ParamLimits

0xf8aa,	// (0x0006a80f) main_video_tele_dialer_pane_t

0x61c9,	// (0x0006112e) cam4_autofocus_pane_ParamLimits

0x61c9,	// (0x0006112e) cam4_autofocus_pane

0x61df,	// (0x00061144) cam4_image_uncrop_pane_ParamLimits

0x61df,	// (0x00061144) cam4_image_uncrop_pane

0x61f9,	// (0x0006115e) cam4_indicators_pane_ParamLimits

0x61f9,	// (0x0006115e) cam4_indicators_pane

0x6224,	// (0x00061189) main_camera4_pane_g1_ParamLimits

0x6224,	// (0x00061189) main_camera4_pane_g1

0x6237,	// (0x0006119c) main_camera4_pane_g2_ParamLimits

0x6237,	// (0x0006119c) main_camera4_pane_g2

0x624a,	// (0x000611af) main_camera4_pane_g3_ParamLimits

0x624a,	// (0x000611af) main_camera4_pane_g3

0x625d,	// (0x000611c2) main_camera4_pane_g4_ParamLimits

0x625d,	// (0x000611c2) main_camera4_pane_g4

0x6270,	// (0x000611d5) main_camera4_pane_g5_ParamLimits

0x6270,	// (0x000611d5) main_camera4_pane_g5

0x0005,

0xf8f6,	// (0x0006a85b) main_camera4_pane_g_ParamLimits

0xf8f6,	// (0x0006a85b) main_camera4_pane_g

0x6294,	// (0x000611f9) main_camera4_pane_t1_ParamLimits

0x6294,	// (0x000611f9) main_camera4_pane_t1

0xdcee,	// (0x00068c53) bg_tb_trans_pane_cp06

0xdd04,	// (0x00068c69) cam4_indicators_pane_g1

0xdd15,	// (0x00068c7a) cam4_indicators_pane_g2

0x0002,

0xf911,	// (0x0006a876) cam4_indicators_pane_g

0xdd33,	// (0x00068c98) cam4_indicators_pane_t1

0x62f8,	// (0x0006125d) main_video4_pane_g1_ParamLimits

0x62f8,	// (0x0006125d) main_video4_pane_g1

0x630b,	// (0x00061270) main_video4_pane_g2_ParamLimits

0x630b,	// (0x00061270) main_video4_pane_g2

0x631f,	// (0x00061284) main_video4_pane_g3_ParamLimits

0x631f,	// (0x00061284) main_video4_pane_g3

0x6333,	// (0x00061298) main_video4_pane_g4_ParamLimits

0x6333,	// (0x00061298) main_video4_pane_g4

0x0004,

0xf918,	// (0x0006a87d) main_video4_pane_g_ParamLimits

0xf918,	// (0x0006a87d) main_video4_pane_g

0x635b,	// (0x000612c0) vid4_indicators_pane_ParamLimits

0x635b,	// (0x000612c0) vid4_indicators_pane

0x638d,	// (0x000612f2) video4_image_uncrop_cif_pane_ParamLimits

0x638d,	// (0x000612f2) video4_image_uncrop_cif_pane

0x63a7,	// (0x0006130c) video4_image_uncrop_nhd_pane_ParamLimits

0x63a7,	// (0x0006130c) video4_image_uncrop_nhd_pane

0x61df,	// (0x00061144) video4_image_uncrop_vga_pane_ParamLimits

0x61df,	// (0x00061144) video4_image_uncrop_vga_pane

0xdd55,	// (0x00068cba) bg_tb_trans_pane_cp07

0x63bb,	// (0x00061320) vid4_indicators_pane_g1

0x63c8,	// (0x0006132d) vid4_indicators_pane_g2

0x63d5,	// (0x0006133a) vid4_indicators_pane_g3

0x0004,

0xf923,	// (0x0006a888) vid4_indicators_pane_g

0x63fa,	// (0x0006135f) vid4_indicators_pane_t1

0x640c,	// (0x00061371) cam4_autofocus_pane_g1

0x6414,	// (0x00061379) cam4_autofocus_pane_g2

0x641c,	// (0x00061381) cam4_autofocus_pane_g3

0x0002,

0xf92e,	// (0x0006a893) cam4_autofocus_pane_g

0x6424,	// (0x00061389) cam4_autofocus_pane_g3_copy1

0x5c8a,	// (0x00060bef) video_down_pane_cp_t1

0x5c98,	// (0x00060bfd) video_down_pane_cp_t2

0x0001,

0xf8af,	// (0x0006a814) video_down_pane_cp_t

0x9880,	// (0x000647e5) popup_vitu2_window_ParamLimits

0x9880,	// (0x000647e5) popup_vitu2_window

0x642c,	// (0x00061391) aid_size_cell2_itu2_ParamLimits

0x642c,	// (0x00061391) aid_size_cell2_itu2

0x6452,	// (0x000613b7) aid_size_cell_itu2_ParamLimits

0x6452,	// (0x000613b7) aid_size_cell_itu2

0x64ae,	// (0x00061413) bg_popup_window_pane_cp09_ParamLimits

0x64ae,	// (0x00061413) bg_popup_window_pane_cp09

0x64bc,	// (0x00061421) field_vitu2_entry_pane_ParamLimits

0x64bc,	// (0x00061421) field_vitu2_entry_pane

0x64e2,	// (0x00061447) grid_vitu2_function_pane_ParamLimits

0x64e2,	// (0x00061447) grid_vitu2_function_pane

0x6533,	// (0x00061498) grid_vitu2_itu_pane_ParamLimits

0x6533,	// (0x00061498) grid_vitu2_itu_pane

0x65c4,	// (0x00061529) cell_vitu2_itu_pane_ParamLimits

0x65c4,	// (0x00061529) cell_vitu2_itu_pane

0x65e8,	// (0x0006154d) cell_vitu2_function_pane_ParamLimits

0x65e8,	// (0x0006154d) cell_vitu2_function_pane

0xdffb,	// (0x00068f60) bg_popup_call_pane_cp08_ParamLimits

0xdffb,	// (0x00068f60) bg_popup_call_pane_cp08

0xe014,	// (0x00068f79) field_vitu2_entry_pane_g1

0xe020,	// (0x00068f85) field_vitu2_entry_pane_g2

0x0002,

0x074b,	// (0x0005b6b0) field_vitu2_entry_pane_g

0x6627,	// (0x0006158c) field_vitu2_entry_pane_t1_ParamLimits

0x6627,	// (0x0006158c) field_vitu2_entry_pane_t1

0x6659,	// (0x000615be) field_vitu2_entry_pane_t2_ParamLimits

0x6659,	// (0x000615be) field_vitu2_entry_pane_t2

0x0001,

0xf935,	// (0x0006a89a) field_vitu2_entry_pane_t_ParamLimits

0xf935,	// (0x0006a89a) field_vitu2_entry_pane_t

0x6676,	// (0x000615db) bg_button_pane_cp010_ParamLimits

0x6676,	// (0x000615db) bg_button_pane_cp010

0x6684,	// (0x000615e9) cell_vitu2_itu_pane_g1

0x66a2,	// (0x00061607) cell_vitu2_itu_pane_t1_ParamLimits

0x66a2,	// (0x00061607) cell_vitu2_itu_pane_t1

0x0d78,	// (0x0005bcdd) cell_vitu2_itu_pane_t2_ParamLimits

0x0d78,	// (0x0005bcdd) cell_vitu2_itu_pane_t2

0x0002,

0xf93f,	// (0x0006a8a4) cell_vitu2_itu_pane_t_ParamLimits

0xf93f,	// (0x0006a8a4) cell_vitu2_itu_pane_t

0xdd6b,	// (0x00068cd0) bg_button_pane_cp011

0x6708,	// (0x0006166d) cell_vitu2_function_pane_g1

0x0e6c,	// (0x0005bdd1) main_myfav_hc_pane

0x6043,	// (0x00060fa8) popup_image3_note_pane_ParamLimits

0x6043,	// (0x00060fa8) popup_image3_note_pane

0x605f,	// (0x00060fc4) popup_image3_tool_bar_pane_ParamLimits

0x605f,	// (0x00060fc4) popup_image3_tool_bar_pane

0x0dfc,	// (0x0005bd61) cell_vitu2_itu_pane_t3_ParamLimits

0x0dfc,	// (0x0005bd61) cell_vitu2_itu_pane_t3

0x0e6c,	// (0x0005bdd1) bg_popup_trans_pane

0xe042,	// (0x00068fa7) grid_image3_tool_bar_pane

0xe04c,	// (0x00068fb1) bg_popup_trans_pane_g1

0xa54c,	// (0x000654b1) bg_popup_trans_pane_g2

0xe054,	// (0x00068fb9) bg_popup_trans_pane_g3

0xe05c,	// (0x00068fc1) bg_popup_trans_pane_g4

0xe064,	// (0x00068fc9) bg_popup_trans_pane_g5

0xe06c,	// (0x00068fd1) bg_popup_trans_pane_g6

0xe074,	// (0x00068fd9) bg_popup_trans_pane_g7

0xe07c,	// (0x00068fe1) bg_popup_trans_pane_g8

0xa52c,	// (0x00065491) bg_popup_trans_pane_g9

0x0008,

0xf946,	// (0x0006a8ab) bg_popup_trans_pane_g

0xe084,	// (0x00068fe9) cell_image3_tool_bar_pane_ParamLimits

0xe084,	// (0x00068fe9) cell_image3_tool_bar_pane

0xc5d0,	// (0x00067535) cell_image3_tool_bar_pane_g1

0x0e6c,	// (0x0005bdd1) bg_popup_trans_pane_cp1

0xe098,	// (0x00068ffd) popup_image3_note_pane_t1

0xe0a6,	// (0x0006900b) popup_image3_note_pane_t2

0xe0b4,	// (0x00069019) popup_image3_note_pane_t3

0x0002,

0x0776,	// (0x0005b6db) popup_image3_note_pane_t

0xe0c2,	// (0x00069027) popup_image3_note_pane_t3_copy1

0x671c,	// (0x00061681) bg_myfav_hc_instruction_pane_ParamLimits

0x671c,	// (0x00061681) bg_myfav_hc_instruction_pane

0x6732,	// (0x00061697) cell_myfav_contact_pane_ParamLimits

0x6732,	// (0x00061697) cell_myfav_contact_pane

0x674e,	// (0x000616b3) cell_myfav_contact_pane_cp1_ParamLimits

0x674e,	// (0x000616b3) cell_myfav_contact_pane_cp1

0x6766,	// (0x000616cb) cell_myfav_contact_pane_cp2_ParamLimits

0x6766,	// (0x000616cb) cell_myfav_contact_pane_cp2

0x677e,	// (0x000616e3) cell_myfav_contact_pane_cp3_ParamLimits

0x677e,	// (0x000616e3) cell_myfav_contact_pane_cp3

0x6795,	// (0x000616fa) cell_myfav_contact_pane_cp4_ParamLimits

0x6795,	// (0x000616fa) cell_myfav_contact_pane_cp4

0x67ad,	// (0x00061712) cell_myfav_contact_pane_cp5_ParamLimits

0x67ad,	// (0x00061712) cell_myfav_contact_pane_cp5

0x67c1,	// (0x00061726) cell_myfav_contact_pane_cp6_ParamLimits

0x67c1,	// (0x00061726) cell_myfav_contact_pane_cp6

0x67d7,	// (0x0006173c) cell_myfav_contact_pane_cp7_ParamLimits

0x67d7,	// (0x0006173c) cell_myfav_contact_pane_cp7

0xe0d0,	// (0x00069035) listscroll_gen_pane_cp05

0x67f1,	// (0x00061756) main_myfav_hc_pane_g1_ParamLimits

0x67f1,	// (0x00061756) main_myfav_hc_pane_g1

0x680b,	// (0x00061770) main_myfav_hc_pane_g2_ParamLimits

0x680b,	// (0x00061770) main_myfav_hc_pane_g2

0x0002,

0xf959,	// (0x0006a8be) main_myfav_hc_pane_g_ParamLimits

0xf959,	// (0x0006a8be) main_myfav_hc_pane_g

0x683d,	// (0x000617a2) main_myfav_hc_pane_t1_ParamLimits

0x683d,	// (0x000617a2) main_myfav_hc_pane_t1

0xe0d9,	// (0x0006903e) main_myfav_hc_pane_t2_ParamLimits

0xe0d9,	// (0x0006903e) main_myfav_hc_pane_t2

0xe0eb,	// (0x00069050) main_myfav_hc_pane_t3_ParamLimits

0xe0eb,	// (0x00069050) main_myfav_hc_pane_t3

0x6854,	// (0x000617b9) main_myfav_hc_pane_t4_ParamLimits

0x6854,	// (0x000617b9) main_myfav_hc_pane_t4

0x0004,

0xf960,	// (0x0006a8c5) main_myfav_hc_pane_t_ParamLimits

0xf960,	// (0x0006a8c5) main_myfav_hc_pane_t

0xc5d0,	// (0x00067535) bg_myfav_hc_instruction_pane_g1

0xe0fd,	// (0x00069062) cell_myfav_contact_pane_g1_ParamLimits

0xe0fd,	// (0x00069062) cell_myfav_contact_pane_g1

0xe0fd,	// (0x00069062) cell_myfav_contact_pane_g2_ParamLimits

0xe0fd,	// (0x00069062) cell_myfav_contact_pane_g2

0xe109,	// (0x0006906e) cell_myfav_contact_pane_g3_ParamLimits

0xe109,	// (0x0006906e) cell_myfav_contact_pane_g3

0xc89c,	// (0x00067801) cell_myfav_contact_pane_g4_ParamLimits

0xc89c,	// (0x00067801) cell_myfav_contact_pane_g4

0xe116,	// (0x0006907b) cell_myfav_contact_pane_g5_ParamLimits

0xe116,	// (0x0006907b) cell_myfav_contact_pane_g5

0x0004,

0xf96b,	// (0x0006a8d0) cell_myfav_contact_pane_g_ParamLimits

0xf96b,	// (0x0006a8d0) cell_myfav_contact_pane_g

0x6825,	// (0x0006178a) main_myfav_hc_pane_g3_ParamLimits

0x6825,	// (0x0006178a) main_myfav_hc_pane_g3

0x100c,	// (0x0005bf71) popup_adpt_find_window

0x687c,	// (0x000617e1) afind_page_pane_ParamLimits

0x687c,	// (0x000617e1) afind_page_pane

0x6891,	// (0x000617f6) aid_size_cell_afind_ParamLimits

0x6891,	// (0x000617f6) aid_size_cell_afind

0x68af,	// (0x00061814) bg_popup_sub_pane_cp09_ParamLimits

0x68af,	// (0x00061814) bg_popup_sub_pane_cp09

0x68bc,	// (0x00061821) find_pane_cp01_ParamLimits

0x68bc,	// (0x00061821) find_pane_cp01

0xe122,	// (0x00069087) grid_afind_control_pane_ParamLimits

0xe122,	// (0x00069087) grid_afind_control_pane

0x68c9,	// (0x0006182e) grid_afind_pane_ParamLimits

0x68c9,	// (0x0006182e) grid_afind_pane

0x68eb,	// (0x00061850) cell_afind_pane_ParamLimits

0x68eb,	// (0x00061850) cell_afind_pane

0xc5d0,	// (0x00067535) afind_page_pane_g1

0x694c,	// (0x000618b1) afind_page_pane_g2

0x6955,	// (0x000618ba) afind_page_pane_g3

0x0002,

0xf976,	// (0x0006a8db) afind_page_pane_g

0x695e,	// (0x000618c3) afind_page_pane_t1

0xe136,	// (0x0006909b) cell_afind_grid_control_pane_ParamLimits

0xe136,	// (0x0006909b) cell_afind_grid_control_pane

0xdf00,	// (0x00068e65) bg_button_pane_cp69_ParamLimits

0xdf00,	// (0x00068e65) bg_button_pane_cp69

0x697e,	// (0x000618e3) cell_afind_pane_g1_ParamLimits

0x697e,	// (0x000618e3) cell_afind_pane_g1

0x698b,	// (0x000618f0) cell_afind_pane_t1_ParamLimits

0x698b,	// (0x000618f0) cell_afind_pane_t1

0xa347,	// (0x000652ac) bg_button_pane_cp72

0xe145,	// (0x000690aa) cell_afind_grid_control_pane_g1

0x3973,	// (0x0005e8d8) aid_image_placing_area_ParamLimits

0x3973,	// (0x0005e8d8) aid_image_placing_area

0xcb84,	// (0x00067ae9) field_vitu_entry_pane_g1_ParamLimits

0xcb84,	// (0x00067ae9) field_vitu_entry_pane_g1

0xcb90,	// (0x00067af5) field_vitu_entry_pane_g2_ParamLimits

0xcb90,	// (0x00067af5) field_vitu_entry_pane_g2

0x0001,

0xf83a,	// (0x0006a79f) field_vitu_entry_pane_g_ParamLimits

0xf83a,	// (0x0006a79f) field_vitu_entry_pane_g

0x5a97,	// (0x000609fc) cell_vitu_itu_pane_g1_ParamLimits

0x5ad9,	// (0x00060a3e) cell_vitu_itu_pane_t3_ParamLimits

0x5ad9,	// (0x00060a3e) cell_vitu_itu_pane_t3

0xdea6,	// (0x00068e0b) mp4_progress_pane_t1_ParamLimits

0xdebf,	// (0x00068e24) mp4_progress_pane_t2_ParamLimits

0x06e0,	// (0x0005b645) mp4_progress_pane_t_ParamLimits

0xded8,	// (0x00068e3d) mup_progress_pane_cp04_ParamLimits

0x6868,	// (0x000617cd) main_myfav_hc_pane_t5_ParamLimits

0x6868,	// (0x000617cd) main_myfav_hc_pane_t5

0x0ec2,	// (0x0005be27) aid_zoom_text_primary

0x100c,	// (0x0005bf71) popup_adpt_find_window_ParamLimits

0x9880,	// (0x000647e5) main_cam_set_pane

0x6210,	// (0x00061175) cam4_zoom_pane_ParamLimits

0x6210,	// (0x00061175) cam4_zoom_pane

0x699d,	// (0x00061902) main_cam_set_pane_g1_ParamLimits

0x699d,	// (0x00061902) main_cam_set_pane_g1

0x69ab,	// (0x00061910) main_cam_set_pane_g2_ParamLimits

0x69ab,	// (0x00061910) main_cam_set_pane_g2

0x0001,

0xf97d,	// (0x0006a8e2) main_cam_set_pane_g_ParamLimits

0xf97d,	// (0x0006a8e2) main_cam_set_pane_g

0x69cc,	// (0x00061931) main_cam_set_pane_t1_ParamLimits

0x69cc,	// (0x00061931) main_cam_set_pane_t1

0x69e7,	// (0x0006194c) main_cset_listscroll_pane_ParamLimits

0x69e7,	// (0x0006194c) main_cset_listscroll_pane

0x6a07,	// (0x0006196c) main_cset_slider_pane_ParamLimits

0x6a07,	// (0x0006196c) main_cset_slider_pane

0xe156,	// (0x000690bb) main_cset_list_pane_ParamLimits

0xe156,	// (0x000690bb) main_cset_list_pane

0xe166,	// (0x000690cb) scroll_pane_cp028

0x6a2d,	// (0x00061992) aid_area_touch_slider

0x6a49,	// (0x000619ae) cset_slider_pane

0x6a73,	// (0x000619d8) main_cset_slider_pane_g1

0x6a88,	// (0x000619ed) main_cset_slider_pane_g2

0x0011,

0xf982,	// (0x0006a8e7) main_cset_slider_pane_g

0xe19f,	// (0x00069104) main_cset_slider_pane_t1

0x6b44,	// (0x00061aa9) main_cset_slider_pane_t2

0x6b5e,	// (0x00061ac3) main_cset_slider_pane_t3

0x6b78,	// (0x00061add) main_cset_slider_pane_t4

0x6b92,	// (0x00061af7) main_cset_slider_pane_t5

0x6bae,	// (0x00061b13) main_cset_slider_pane_t6

0x6bc3,	// (0x00061b28) main_cset_slider_pane_t7

0x000e,

0xf9a7,	// (0x0006a90c) main_cset_slider_pane_t

0x6cc7,	// (0x00061c2c) cset_list_set_pane_ParamLimits

0x6cc7,	// (0x00061c2c) cset_list_set_pane

0x6cdb,	// (0x00061c40) aid_position_infowindow_above

0x6ce3,	// (0x00061c48) aid_position_infowindow_below

0x6ceb,	// (0x00061c50) cset_list_set_pane_g1_ParamLimits

0x6ceb,	// (0x00061c50) cset_list_set_pane_g1

0x6cf7,	// (0x00061c5c) cset_list_set_pane_g3_ParamLimits

0x6cf7,	// (0x00061c5c) cset_list_set_pane_g3

0x0001,

0xf9c6,	// (0x0006a92b) cset_list_set_pane_g_ParamLimits

0xf9c6,	// (0x0006a92b) cset_list_set_pane_g

0x6d06,	// (0x00061c6b) cset_list_set_pane_t1_ParamLimits

0x6d06,	// (0x00061c6b) cset_list_set_pane_t1

0x9880,	// (0x000647e5) list_highlight_pane_cp021_ParamLimits

0x9880,	// (0x000647e5) list_highlight_pane_cp021

0xadb5,	// (0x00065d1a) cset_slider_pane_g1

0xadc7,	// (0x00065d2c) cset_slider_pane_g2

0xadbe,	// (0x00065d23) cset_slider_pane_g3

0x0002,

0xf9cb,	// (0x0006a930) cset_slider_pane_g

0xdd79,	// (0x00068cde) aid_area_touch_cam4_zoom

0xdd81,	// (0x00068ce6) cam4_zoom_cont_pane

0xdd89,	// (0x00068cee) cam4_zoom_pane_g1

0xdd91,	// (0x00068cf6) cam4_zoom_pane_g2

0x6d1b,	// (0x00061c80) cam4_zoom_pane_g3

0x0002,

0xf9d2,	// (0x0006a937) cam4_zoom_pane_g

0xdd99,	// (0x00068cfe) cam4_zoom_cont_pane_g1

0xdda2,	// (0x00068d07) cam4_zoom_cont_pane_g2

0xddab,	// (0x00068d10) cam4_zoom_cont_pane_g3

0x0002,

0xf9d9,	// (0x0006a93e) cam4_zoom_cont_pane_g

0x60cc,	// (0x00061031) call4_image_pane_ParamLimits

0x60cc,	// (0x00061031) call4_image_pane

0xdf0c,	// (0x00068e71) call4_windows_conf_pane_ParamLimits

0xdf4b,	// (0x00068eb0) popup_call4_audio_in_window_ParamLimits

0xdf4b,	// (0x00068eb0) popup_call4_audio_in_window

0x0e6c,	// (0x0005bdd1) bg_popup_call2_act_pane_cp02

0xdfcf,	// (0x00068f34) call4_list_conf_pane

0xc5d0,	// (0x00067535) call4_image_pane_g1

0xc5d0,	// (0x00067535) call4_image_pane_g2

0x0001,

0xf700,	// (0x0006a665) call4_image_pane_g

0xe23f,	// (0x000691a4) list_single_graphic_popup_conf4_pane_ParamLimits

0xe23f,	// (0x000691a4) list_single_graphic_popup_conf4_pane

0x0e6c,	// (0x0005bdd1) list_highlight_pane_cp022

0xe252,	// (0x000691b7) list_single_graphic_popup_conf4_pane_g1

0xaa86,	// (0x000659eb) list_single_graphic_popup_conf4_pane_g2

0x0001,

0xf9e0,	// (0x0006a945) list_single_graphic_popup_conf4_pane_g

0xe25a,	// (0x000691bf) list_single_graphic_popup_conf4_pane_t1

0x1e8d,	// (0x0005cdf2) popup_vtel_slider_window_ParamLimits

0x1e8d,	// (0x0005cdf2) popup_vtel_slider_window

0xdeee,	// (0x00068e53) dialer2_ne_pane_t2_ParamLimits

0xdeee,	// (0x00068e53) dialer2_ne_pane_t2

0x0001,

0xf8cf,	// (0x0006a834) dialer2_ne_pane_t_ParamLimits

0xf8cf,	// (0x0006a834) dialer2_ne_pane_t

0xc3b3,	// (0x00067318) bg_popup_sub_pane_cp010_ParamLimits

0xc3b3,	// (0x00067318) bg_popup_sub_pane_cp010

0x6d23,	// (0x00061c88) popup_vtel_slider_window_g1_ParamLimits

0x6d23,	// (0x00061c88) popup_vtel_slider_window_g1

0x6d36,	// (0x00061c9b) popup_vtel_slider_window_g2_ParamLimits

0x6d36,	// (0x00061c9b) popup_vtel_slider_window_g2

0x0003,

0xf9e5,	// (0x0006a94a) popup_vtel_slider_window_g_ParamLimits

0xf9e5,	// (0x0006a94a) popup_vtel_slider_window_g

0x6d8c,	// (0x00061cf1) vtel_slider_pane_ParamLimits

0x6d8c,	// (0x00061cf1) vtel_slider_pane

0x6dae,	// (0x00061d13) vtel_slider_pane_g1_ParamLimits

0x6dae,	// (0x00061d13) vtel_slider_pane_g1

0x6dc2,	// (0x00061d27) vtel_slider_pane_g2_ParamLimits

0x6dc2,	// (0x00061d27) vtel_slider_pane_g2

0x6dda,	// (0x00061d3f) vtel_slider_pane_g3_ParamLimits

0x6dda,	// (0x00061d3f) vtel_slider_pane_g3

0x6dae,	// (0x00061d13) vtel_slider_pane_g4_ParamLimits

0x6dae,	// (0x00061d13) vtel_slider_pane_g4

0x6df0,	// (0x00061d55) vtel_slider_pane_g5_ParamLimits

0x6df0,	// (0x00061d55) vtel_slider_pane_g5

0x0004,

0xf9ee,	// (0x0006a953) vtel_slider_pane_g_ParamLimits

0xf9ee,	// (0x0006a953) vtel_slider_pane_g

0x0e6c,	// (0x0005bdd1) main_gallery2_pane

0x647e,	// (0x000613e3) aid_size_row_itut2_dropdow_list_ParamLimits

0x647e,	// (0x000613e3) aid_size_row_itut2_dropdow_list

0x650a,	// (0x0006146f) grid_vitu2_function_top_pane_ParamLimits

0x650a,	// (0x0006146f) grid_vitu2_function_top_pane

0x656f,	// (0x000614d4) popup_vitu2_dropdown_list_window_ParamLimits

0x656f,	// (0x000614d4) popup_vitu2_dropdown_list_window

0x6598,	// (0x000614fd) popup_vitu2_match_list_window

0x6e14,	// (0x00061d79) cell_vitu2_function_top_pane_ParamLimits

0x6e14,	// (0x00061d79) cell_vitu2_function_top_pane

0x6e32,	// (0x00061d97) cell_vitu2_function_top_pane_cp01_ParamLimits

0x6e32,	// (0x00061d97) cell_vitu2_function_top_pane_cp01

0x6e50,	// (0x00061db5) cell_vitu2_function_top_wide_pane_ParamLimits

0x6e50,	// (0x00061db5) cell_vitu2_function_top_wide_pane

0xdd6b,	// (0x00068cd0) bg_button_pane_cp012

0x6e6e,	// (0x00061dd3) cell_vitu2_function_top_pane_g1

0xddb4,	// (0x00068d19) bg_button_pane_cp013_ParamLimits

0xddb4,	// (0x00068d19) bg_button_pane_cp013

0x6e82,	// (0x00061de7) cell_vitu2_function_top_wide_pane_g1_ParamLimits

0x6e82,	// (0x00061de7) cell_vitu2_function_top_wide_pane_g1

0xdd6b,	// (0x00068cd0) bg_popup_sub_pane_cp20

0x6e9a,	// (0x00061dff) list_vitu2_match_list_pane

0xe04c,	// (0x00068fb1) bg_popup_sub_pane_cp20_g1

0xe054,	// (0x00068fb9) bg_popup_sub_pane_cp20_g2

0xa54c,	// (0x000654b1) bg_popup_sub_pane_cp20_g3

0xe05c,	// (0x00068fc1) bg_popup_sub_pane_cp20_g4

0xa52c,	// (0x00065491) bg_popup_sub_pane_cp20_g5

0xe270,	// (0x000691d5) bg_popup_sub_pane_cp20_g6

0xe06c,	// (0x00068fd1) bg_popup_sub_pane_cp20_g7

0xe074,	// (0x00068fd9) bg_popup_sub_pane_cp20_g8

0xe07c,	// (0x00068fe1) bg_popup_sub_pane_cp20_g9

0x0008,

0xf9f9,	// (0x0006a95e) bg_popup_sub_pane_cp20_g

0xddd0,	// (0x00068d35) list_vitu2_match_list_item_pane_ParamLimits

0xddd0,	// (0x00068d35) list_vitu2_match_list_item_pane

0xdde2,	// (0x00068d47) list_vitu2_match_list_item_pane_t1

0xa011,	// (0x00064f76) bg_popup_sub_pane_cp21

0xddf0,	// (0x00068d55) grid_vitu2_dropdown_list_pane

0x6f05,	// (0x00061e6a) cell_vitu2_dropdown_list_char_pane_ParamLimits

0x6f05,	// (0x00061e6a) cell_vitu2_dropdown_list_char_pane

0x6f26,	// (0x00061e8b) cell_vitu2_dropdown_list_ctrl_pane_ParamLimits

0x6f26,	// (0x00061e8b) cell_vitu2_dropdown_list_ctrl_pane

0xe278,	// (0x000691dd) cell_vitu2_dropdown_list_char_pane_g1

0xe281,	// (0x000691e6) cell_vitu2_dropdown_list_char_pane_g2

0xe28a,	// (0x000691ef) cell_vitu2_dropdown_list_char_pane_g3

0x0002,

0x083a,	// (0x0005b79f) cell_vitu2_dropdown_list_char_pane_g

0x6f52,	// (0x00061eb7) cell_vitu2_dropdown_list_char_pane_t1

0x6f60,	// (0x00061ec5) cell_vitu2_dropdown_list_ctrl_pane_g1_ParamLimits

0x6f60,	// (0x00061ec5) cell_vitu2_dropdown_list_ctrl_pane_g1

0x6f70,	// (0x00061ed5) cell_vitu2_dropdown_list_ctrl_pane_g2_ParamLimits

0x6f70,	// (0x00061ed5) cell_vitu2_dropdown_list_ctrl_pane_g2

0x6f81,	// (0x00061ee6) cell_vitu2_dropdown_list_ctrl_pane_g3_ParamLimits

0x6f81,	// (0x00061ee6) cell_vitu2_dropdown_list_ctrl_pane_g3

0x6f91,	// (0x00061ef6) cell_vitu2_dropdown_list_ctrl_pane_g4_ParamLimits

0x6f91,	// (0x00061ef6) cell_vitu2_dropdown_list_ctrl_pane_g4

0xdcee,	// (0x00068c53) cell_vitu2_dropdown_list_ctrl_pane_g5_ParamLimits

0xdcee,	// (0x00068c53) cell_vitu2_dropdown_list_ctrl_pane_g5

0x0004,

0xfa16,	// (0x0006a97b) cell_vitu2_dropdown_list_ctrl_pane_g_ParamLimits

0xfa16,	// (0x0006a97b) cell_vitu2_dropdown_list_ctrl_pane_g

0x6fad,	// (0x00061f12) aid_size_cell_gallery2_ParamLimits

0x6fad,	// (0x00061f12) aid_size_cell_gallery2

0x6fc3,	// (0x00061f28) grid_gallery2_pane_ParamLimits

0x6fc3,	// (0x00061f28) grid_gallery2_pane

0x6fd7,	// (0x00061f3c) scroll_pane_cp029_ParamLimits

0x6fd7,	// (0x00061f3c) scroll_pane_cp029

0x6fe3,	// (0x00061f48) cell_gallery2_pane_ParamLimits

0x6fe3,	// (0x00061f48) cell_gallery2_pane

0xe293,	// (0x000691f8) cell_gallery2_pane_g2

0x7019,	// (0x00061f7e) cell_gallery2_pane_g3

0xe29d,	// (0x00069202) cell_gallery2_pane_g4

0xe2a5,	// (0x0006920a) cell_gallery2_pane_g5

0xac5f,	// (0x00065bc4) grid_highlight_pane_cp10

0x6598,	// (0x000614fd) popup_vitu2_match_list_window_ParamLimits

0x65ad,	// (0x00061512) popup_vitu2_query_window_ParamLimits

0x65ad,	// (0x00061512) popup_vitu2_query_window

0xa011,	// (0x00064f76) bg_vitu2_candi_button_pane

0xe278,	// (0x000691dd) cell_vitu2_dropdown_list_char_pane_g1_copy1

0xe281,	// (0x000691e6) cell_vitu2_dropdown_list_char_pane_g2_copy1

0xe28a,	// (0x000691ef) cell_vitu2_dropdown_list_char_pane_g2_copy2

0x7021,	// (0x00061f86) bg_button_pane_cp015

0x7035,	// (0x00061f9a) bg_button_pane_cp016

0x7048,	// (0x00061fad) bg_button_pane_cp017

0xc0c8,	// (0x0006702d) bg_popup_sub_pane_cp22

0xe2ad,	// (0x00069212) popup_vitu2_query_window_g1

0x708d,	// (0x00061ff2) popup_vitu2_query_window_g2

0x0002,

0xfa21,	// (0x0006a986) popup_vitu2_query_window_g

0x70ac,	// (0x00062011) popup_vitu2_query_window_t1_ParamLimits

0x70ac,	// (0x00062011) popup_vitu2_query_window_t1

0x70e1,	// (0x00062046) popup_vitu2_query_window_t2_ParamLimits

0x70e1,	// (0x00062046) popup_vitu2_query_window_t2

0x70f3,	// (0x00062058) popup_vitu2_query_window_t3_ParamLimits

0x70f3,	// (0x00062058) popup_vitu2_query_window_t3

0x711b,	// (0x00062080) popup_vitu2_query_window_t4_ParamLimits

0x711b,	// (0x00062080) popup_vitu2_query_window_t4

0x713c,	// (0x000620a1) popup_vitu2_query_window_t5_ParamLimits

0x713c,	// (0x000620a1) popup_vitu2_query_window_t5

0x0006,

0xfa28,	// (0x0006a98d) popup_vitu2_query_window_t_ParamLimits

0xfa28,	// (0x0006a98d) popup_vitu2_query_window_t

0xe14e,	// (0x000690b3) main_cset_text_pane

0x6a2d,	// (0x00061992) aid_area_touch_slider_ParamLimits

0x6a49,	// (0x000619ae) cset_slider_pane_ParamLimits

0x6a73,	// (0x000619d8) main_cset_slider_pane_g1_ParamLimits

0x6a88,	// (0x000619ed) main_cset_slider_pane_g2_ParamLimits

0xe16f,	// (0x000690d4) main_cset_slider_pane_g3_ParamLimits

0xe16f,	// (0x000690d4) main_cset_slider_pane_g3

0x6a9d,	// (0x00061a02) main_cset_slider_pane_g4_ParamLimits

0x6a9d,	// (0x00061a02) main_cset_slider_pane_g4

0x6aac,	// (0x00061a11) main_cset_slider_pane_g5_ParamLimits

0x6aac,	// (0x00061a11) main_cset_slider_pane_g5

0x6ab8,	// (0x00061a1d) main_cset_slider_pane_g6_ParamLimits

0x6ab8,	// (0x00061a1d) main_cset_slider_pane_g6

0xf982,	// (0x0006a8e7) main_cset_slider_pane_g_ParamLimits

0xe19f,	// (0x00069104) main_cset_slider_pane_t1_ParamLimits

0x6b44,	// (0x00061aa9) main_cset_slider_pane_t2_ParamLimits

0x6b5e,	// (0x00061ac3) main_cset_slider_pane_t3_ParamLimits

0x6b78,	// (0x00061add) main_cset_slider_pane_t4_ParamLimits

0x6b92,	// (0x00061af7) main_cset_slider_pane_t5_ParamLimits

0x6bae,	// (0x00061b13) main_cset_slider_pane_t6_ParamLimits

0x6bc3,	// (0x00061b28) main_cset_slider_pane_t7_ParamLimits

0x6bed,	// (0x00061b52) main_cset_slider_pane_t8_ParamLimits

0x6bed,	// (0x00061b52) main_cset_slider_pane_t8

0x6c15,	// (0x00061b7a) main_cset_slider_pane_t9_ParamLimits

0x6c15,	// (0x00061b7a) main_cset_slider_pane_t9

0x6c3d,	// (0x00061ba2) main_cset_slider_pane_t10_ParamLimits

0x6c3d,	// (0x00061ba2) main_cset_slider_pane_t10

0x6c65,	// (0x00061bca) main_cset_slider_pane_t11_ParamLimits

0x6c65,	// (0x00061bca) main_cset_slider_pane_t11

0x6c8d,	// (0x00061bf2) main_cset_slider_pane_t12_ParamLimits

0x6c8d,	// (0x00061bf2) main_cset_slider_pane_t12

0x6caa,	// (0x00061c0f) main_cset_slider_pane_t13_ParamLimits

0x6caa,	// (0x00061c0f) main_cset_slider_pane_t13

0xf9a7,	// (0x0006a90c) main_cset_slider_pane_t_ParamLimits

0x0e6c,	// (0x0005bdd1) bg_popup_sub_pane_cp011

0xe2b9,	// (0x0006921e) main_cset_text_pane_g1

0xe2c1,	// (0x00069226) main_cset_text_pane_t1

0xe2cf,	// (0x00069234) main_cset_text_pane_t2

0xe2dd,	// (0x00069242) main_cset_text_pane_t3

0xe2eb,	// (0x00069250) main_cset_text_pane_t4

0xe2f9,	// (0x0006925e) main_cset_text_pane_t5

0xe307,	// (0x0006926c) main_cset_text_pane_t6

0xe315,	// (0x0006927a) main_cset_text_pane_t7

0x0006,

0x0862,	// (0x0005b7c7) main_cset_text_pane_t

0x0e6c,	// (0x0005bdd1) main_cam4_burst_pane

0x0e6c,	// (0x0005bdd1) main_cam5_pane

0x696c,	// (0x000618d1) bg_button_pane_cp019

0x6975,	// (0x000618da) bg_button_pane_cp020

0xe17b,	// (0x000690e0) main_cset_slider_pane_g7_ParamLimits

0xe17b,	// (0x000690e0) main_cset_slider_pane_g7

0xe187,	// (0x000690ec) main_cset_slider_pane_g8_ParamLimits

0xe187,	// (0x000690ec) main_cset_slider_pane_g8

0x6acc,	// (0x00061a31) main_cset_slider_pane_g9_ParamLimits

0x6acc,	// (0x00061a31) main_cset_slider_pane_g9

0x6ad8,	// (0x00061a3d) main_cset_slider_pane_g10_ParamLimits

0x6ad8,	// (0x00061a3d) main_cset_slider_pane_g10

0x6ae4,	// (0x00061a49) main_cset_slider_pane_g11_ParamLimits

0x6ae4,	// (0x00061a49) main_cset_slider_pane_g11

0x6af0,	// (0x00061a55) main_cset_slider_pane_g12_ParamLimits

0x6af0,	// (0x00061a55) main_cset_slider_pane_g12

0x6afc,	// (0x00061a61) main_cset_slider_pane_g13_ParamLimits

0x6afc,	// (0x00061a61) main_cset_slider_pane_g13

0x6b08,	// (0x00061a6d) main_cset_slider_pane_g14_ParamLimits

0x6b08,	// (0x00061a6d) main_cset_slider_pane_g14

0x6b14,	// (0x00061a79) main_cset_slider_pane_g15_ParamLimits

0x6b14,	// (0x00061a79) main_cset_slider_pane_g15

0xe1cd,	// (0x00069132) main_cset_slider_pane_t14_ParamLimits

0xe1cd,	// (0x00069132) main_cset_slider_pane_t14

0xe206,	// (0x0006916b) main_cset_slider_pane_t15_ParamLimits

0xe206,	// (0x0006916b) main_cset_slider_pane_t15

0x71b3,	// (0x00062118) aid_cam4_burst_size_cell_ParamLimits

0x71b3,	// (0x00062118) aid_cam4_burst_size_cell

0x71d3,	// (0x00062138) grid_cam4_burst_pane_ParamLimits

0x71d3,	// (0x00062138) grid_cam4_burst_pane

0x720b,	// (0x00062170) linegrid_cam4_burst_pane_ParamLimits

0x720b,	// (0x00062170) linegrid_cam4_burst_pane

0xe8ff,	// (0x00069864) scroll_pane_cp30_ParamLimits

0xe8ff,	// (0x00069864) scroll_pane_cp30

0x7231,	// (0x00062196) cell_cam4_burst_pane_ParamLimits

0x7231,	// (0x00062196) cell_cam4_burst_pane

0xe323,	// (0x00069288) linegrid_cam4_burst_pane_g1_ParamLimits

0xe323,	// (0x00069288) linegrid_cam4_burst_pane_g1

0x727e,	// (0x000621e3) linegrid_cam4_burst_pane_g2_ParamLimits

0x727e,	// (0x000621e3) linegrid_cam4_burst_pane_g2

0xe330,	// (0x00069295) linegrid_cam4_burst_pane_g3_ParamLimits

0xe330,	// (0x00069295) linegrid_cam4_burst_pane_g3

0x0002,

0xfa37,	// (0x0006a99c) linegrid_cam4_burst_pane_g_ParamLimits

0xfa37,	// (0x0006a99c) linegrid_cam4_burst_pane_g

0x728f,	// (0x000621f4) linegrid_cam4_burst_pane_g3_copy1_ParamLimits

0x728f,	// (0x000621f4) linegrid_cam4_burst_pane_g3_copy1

0xe33d,	// (0x000692a2) linegrid_cam4_burst_pane_g4_ParamLimits

0xe33d,	// (0x000692a2) linegrid_cam4_burst_pane_g4

0x72a9,	// (0x0006220e) linegrid_cam4_burst_pane_g5_ParamLimits

0x72a9,	// (0x0006220e) linegrid_cam4_burst_pane_g5

0x72ba,	// (0x0006221f) linegrid_cam4_burst_pane_g6_ParamLimits

0x72ba,	// (0x0006221f) linegrid_cam4_burst_pane_g6

0xe34a,	// (0x000692af) linegrid_cam4_burst_pane_g7_ParamLimits

0xe34a,	// (0x000692af) linegrid_cam4_burst_pane_g7

0x72d1,	// (0x00062236) cell_cam4_burst_pane_g1

0xe363,	// (0x000692c8) main_cam5_pane_t1_ParamLimits

0xe363,	// (0x000692c8) main_cam5_pane_t1

0xe375,	// (0x000692da) main_cam5_pane_t2_ParamLimits

0xe375,	// (0x000692da) main_cam5_pane_t2

0xe387,	// (0x000692ec) main_cam5_pane_t3_ParamLimits

0xe387,	// (0x000692ec) main_cam5_pane_t3

0xe399,	// (0x000692fe) main_cam5_pane_t4_ParamLimits

0xe399,	// (0x000692fe) main_cam5_pane_t4

0xe3af,	// (0x00069314) main_cam5_pane_t5_ParamLimits

0xe3af,	// (0x00069314) main_cam5_pane_t5

0xe3c1,	// (0x00069326) main_cam5_pane_t6_ParamLimits

0xe3c1,	// (0x00069326) main_cam5_pane_t6

0xe3d5,	// (0x0006933a) main_cam5_pane_t7_ParamLimits

0xe3d5,	// (0x0006933a) main_cam5_pane_t7

0xe3e7,	// (0x0006934c) main_cam5_pane_t8_ParamLimits

0xe3e7,	// (0x0006934c) main_cam5_pane_t8

0xe403,	// (0x00069368) main_cam5_pane_t9_ParamLimits

0xe403,	// (0x00069368) main_cam5_pane_t9

0xe415,	// (0x0006937a) main_cam5_pane_t10_ParamLimits

0xe415,	// (0x0006937a) main_cam5_pane_t10

0xe427,	// (0x0006938c) main_cam5_pane_t11_ParamLimits

0xe427,	// (0x0006938c) main_cam5_pane_t11

0xe439,	// (0x0006939e) main_cam5_pane_t12_ParamLimits

0xe439,	// (0x0006939e) main_cam5_pane_t12

0xe44e,	// (0x000693b3) main_cam5_pane_t13_ParamLimits

0xe44e,	// (0x000693b3) main_cam5_pane_t13

0x000c,

0x087d,	// (0x0005b7e2) main_cam5_pane_t_ParamLimits

0x087d,	// (0x0005b7e2) main_cam5_pane_t

0x108e,	// (0x0005bff3) popup_scut_keymap_window_ParamLimits

0x108e,	// (0x0005bff3) popup_scut_keymap_window

0x72e4,	// (0x00062249) aid_size_cell_brow_shortcut

0xac5f,	// (0x00065bc4) bg_popup_window_pane_cp010

0x72f0,	// (0x00062255) grid_scut_pane

0x72fc,	// (0x00062261) cell_scut_pane_ParamLimits

0x72fc,	// (0x00062261) cell_scut_pane

0x7313,	// (0x00062278) cell_scut_pane_g1

0xe46b,	// (0x000693d0) cell_scut_pane_t1

0xe47a,	// (0x000693df) cell_scut_pane_t2

0x731c,	// (0x00062281) cell_scut_pane_t3

0x0002,

0xfa43,	// (0x0006a9a8) cell_scut_pane_t

0x4fd3,	// (0x0005ff38) main_mup3_pane_g8_ParamLimits

0x4fd3,	// (0x0005ff38) main_mup3_pane_g8

0x6496,	// (0x000613fb) area_vitu2_query_pane_ParamLimits

0x6496,	// (0x000613fb) area_vitu2_query_pane

0x705b,	// (0x00061fc0) input_focus_pane_cp08

0xe489,	// (0x000693ee) area_vitu2_query_pane_g1

0x732a,	// (0x0006228f) area_vitu2_query_pane_g2

0x0001,

0xfa4a,	// (0x0006a9af) area_vitu2_query_pane_g

0x733b,	// (0x000622a0) area_vitu2_query_pane_t1_ParamLimits

0x733b,	// (0x000622a0) area_vitu2_query_pane_t1

0x734f,	// (0x000622b4) area_vitu2_query_pane_t2_ParamLimits

0x734f,	// (0x000622b4) area_vitu2_query_pane_t2

0x7363,	// (0x000622c8) area_vitu2_query_pane_t3_ParamLimits

0x7363,	// (0x000622c8) area_vitu2_query_pane_t3

0x738b,	// (0x000622f0) area_vitu2_query_pane_t4_ParamLimits

0x738b,	// (0x000622f0) area_vitu2_query_pane_t4

0x73b3,	// (0x00062318) area_vitu2_query_pane_t5_ParamLimits

0x73b3,	// (0x00062318) area_vitu2_query_pane_t5

0x73db,	// (0x00062340) area_vitu2_query_pane_t6_ParamLimits

0x73db,	// (0x00062340) area_vitu2_query_pane_t6

0x0006,

0xfa4f,	// (0x0006a9b4) area_vitu2_query_pane_t_ParamLimits

0xfa4f,	// (0x0006a9b4) area_vitu2_query_pane_t

0x7427,	// (0x0006238c) bg_button_pane_cp018

0x7435,	// (0x0006239a) bg_button_pane_cp021

0x7441,	// (0x000623a6) bg_button_pane_cp022

0x7452,	// (0x000623b7) input_focus_pane_cp09

0x2f2f,	// (0x0005de94) aid_size_touch_mv_arrow_left

0x2f58,	// (0x0005debd) aid_size_touch_mv_arrow_right

0x6b2c,	// (0x00061a91) main_cset_slider_pane_g16_ParamLimits

0x6b2c,	// (0x00061a91) main_cset_slider_pane_g16

0x6b38,	// (0x00061a9d) main_cset_slider_pane_g17_ParamLimits

0x6b38,	// (0x00061a9d) main_cset_slider_pane_g17

0x72d1,	// (0x00062236) cell_cam4_burst_pane_g1_ParamLimits

0x0e6c,	// (0x0005bdd1) compa_mode_pane

0x6d46,	// (0x00061cab) popup_vtel_slider_window_g3_ParamLimits

0x6d46,	// (0x00061cab) popup_vtel_slider_window_g3

0x6d5d,	// (0x00061cc2) popup_vtel_slider_window_g4_ParamLimits

0x6d5d,	// (0x00061cc2) popup_vtel_slider_window_g4

0x6d74,	// (0x00061cd9) popup_vtel_slider_window_t1_ParamLimits

0x6d74,	// (0x00061cd9) popup_vtel_slider_window_t1

0x0e6c,	// (0x0005bdd1) main_cl_pane

0xc0f0,	// (0x00067055) popup_imed_adjust2_window_ParamLimits

0xc0c8,	// (0x0006702d) bg_tb_trans_pane_cp05_ParamLimits

0xcab9,	// (0x00067a1e) popup_imed_adjust2_window_g1_ParamLimits

0xcac8,	// (0x00067a2d) popup_imed_adjust2_window_g2_ParamLimits

0xcac8,	// (0x00067a2d) popup_imed_adjust2_window_g2

0xcad4,	// (0x00067a39) popup_imed_adjust2_window_g3_ParamLimits

0xcad4,	// (0x00067a39) popup_imed_adjust2_window_g3

0x0002,

0xf7fe,	// (0x0006a763) popup_imed_adjust2_window_g_ParamLimits

0xf7fe,	// (0x0006a763) popup_imed_adjust2_window_g

0xcae0,	// (0x00067a45) popup_imed_adjust2_window_t1_ParamLimits

0xcaf8,	// (0x00067a5d) slider_imed_adjust_pane_ParamLimits

0xcb0c,	// (0x00067a71) slider_imed_adjust_pane_g1_ParamLimits

0xcb1c,	// (0x00067a81) slider_imed_adjust_pane_g2_ParamLimits

0xcb2c,	// (0x00067a91) slider_imed_adjust_pane_g3_ParamLimits

0xcb3d,	// (0x00067aa2) slider_imed_adjust_pane_g4_ParamLimits

0xf805,	// (0x0006a76a) slider_imed_adjust_pane_g_ParamLimits

0x61b1,	// (0x00061116) aid_touch_area_cam4_ParamLimits

0x61b1,	// (0x00061116) aid_touch_area_cam4

0xdcd2,	// (0x00068c37) battery_pane_cp01

0x6281,	// (0x000611e6) main_camera4_pane_g6_ParamLimits

0x6281,	// (0x000611e6) main_camera4_pane_g6

0x62ab,	// (0x00061210) main_camera4_pane_t2_ParamLimits

0x62ab,	// (0x00061210) main_camera4_pane_t2

0x0001,

0xf903,	// (0x0006a868) main_camera4_pane_t_ParamLimits

0xf903,	// (0x0006a868) main_camera4_pane_t

0x62e0,	// (0x00061245) aid_touch_area_vid4_ParamLimits

0x62e0,	// (0x00061245) aid_touch_area_vid4

0x6347,	// (0x000612ac) main_video4_pane_g5_ParamLimits

0x6347,	// (0x000612ac) main_video4_pane_g5

0x6372,	// (0x000612d7) vid4_progress_pane_ParamLimits

0x6372,	// (0x000612d7) vid4_progress_pane

0xe193,	// (0x000690f8) main_cset_slider_pane_g18_ParamLimits

0xe193,	// (0x000690f8) main_cset_slider_pane_g18

0xe357,	// (0x000692bc) cell_cam4_burst_pane_g2_ParamLimits

0xe357,	// (0x000692bc) cell_cam4_burst_pane_g2

0x0001,

0xfa3e,	// (0x0006a9a3) cell_cam4_burst_pane_g_ParamLimits

0xfa3e,	// (0x0006a9a3) cell_cam4_burst_pane_g

0xa035,	// (0x00064f9a) bg_cl_pane_ParamLimits

0xa035,	// (0x00064f9a) bg_cl_pane

0x7463,	// (0x000623c8) cl_header_pane_ParamLimits

0x7463,	// (0x000623c8) cl_header_pane

0x7477,	// (0x000623dc) cl_listscroll_pane_ParamLimits

0x7477,	// (0x000623dc) cl_listscroll_pane

0xe495,	// (0x000693fa) bg_cl_pane_g1

0xe49d,	// (0x00069402) bg_cl_pane_g2

0xe4a5,	// (0x0006940a) bg_cl_pane_g3

0xe4ad,	// (0x00069412) bg_cl_pane_g4

0xe4b5,	// (0x0006941a) bg_cl_pane_g5

0xe4bd,	// (0x00069422) bg_cl_pane_g6

0xe4c5,	// (0x0006942a) bg_cl_pane_g7

0xe4cd,	// (0x00069432) bg_cl_pane_g8

0xe4d5,	// (0x0006943a) bg_cl_pane_g9

0x0008,

0x08b3,	// (0x0005b818) bg_cl_pane_g

0x7487,	// (0x000623ec) aid_height_cl_leading_ParamLimits

0x7487,	// (0x000623ec) aid_height_cl_leading

0x7493,	// (0x000623f8) aid_height_cl_text_ParamLimits

0x7493,	// (0x000623f8) aid_height_cl_text

0x9880,	// (0x000647e5) bg_cl_header_pane_ParamLimits

0x9880,	// (0x000647e5) bg_cl_header_pane

0x74b2,	// (0x00062417) cl_header_pane_g1_ParamLimits

0x74b2,	// (0x00062417) cl_header_pane_g1

0x74c8,	// (0x0006242d) cl_header_pane_t1_ParamLimits

0x74c8,	// (0x0006242d) cl_header_pane_t1

0xe4dd,	// (0x00069442) cl_list_pane

0xe166,	// (0x000690cb) hc_scroll_pane_cp01

0xa52c,	// (0x00065491) bg_cl_header_pane_g1

0xe04c,	// (0x00068fb1) bg_cl_header_pane_g2

0xa54c,	// (0x000654b1) bg_cl_header_pane_g3

0xe05c,	// (0x00068fc1) bg_cl_header_pane_g4

0xe054,	// (0x00068fb9) bg_cl_header_pane_g5

0xe270,	// (0x000691d5) bg_cl_header_pane_g6

0xe074,	// (0x00068fd9) bg_cl_header_pane_g7

0xe07c,	// (0x00068fe1) bg_cl_header_pane_g8

0xe06c,	// (0x00068fd1) bg_cl_header_pane_g9

0x0008,

0xfa5e,	// (0x0006a9c3) bg_cl_header_pane_g

0x74e1,	// (0x00062446) hc_cl_list_double_graphic_heading_pane_ParamLimits

0x74e1,	// (0x00062446) hc_cl_list_double_graphic_heading_pane

0x74f5,	// (0x0006245a) hc_cl_list_single_graphic_pane_ParamLimits

0x74f5,	// (0x0006245a) hc_cl_list_single_graphic_pane

0x750f,	// (0x00062474) hc_cl_list_single_graphic_pane_g1_ParamLimits

0x750f,	// (0x00062474) hc_cl_list_single_graphic_pane_g1

0x751b,	// (0x00062480) hc_cl_list_single_graphic_pane_g2_ParamLimits

0x751b,	// (0x00062480) hc_cl_list_single_graphic_pane_g2

0x0001,

0xfa71,	// (0x0006a9d6) hc_cl_list_single_graphic_pane_g_ParamLimits

0xfa71,	// (0x0006a9d6) hc_cl_list_single_graphic_pane_g

0x752f,	// (0x00062494) hc_cl_list_single_graphic_pane_t1_ParamLimits

0x752f,	// (0x00062494) hc_cl_list_single_graphic_pane_t1

0x750f,	// (0x00062474) hc_cl_list_double_graphic_heading_pane_g1_ParamLimits

0x750f,	// (0x00062474) hc_cl_list_double_graphic_heading_pane_g1

0x7544,	// (0x000624a9) hc_cl_list_double_graphic_heading_pane_g2_ParamLimits

0x7544,	// (0x000624a9) hc_cl_list_double_graphic_heading_pane_g2

0x7558,	// (0x000624bd) hc_cl_list_double_graphic_heading_pane_g3_ParamLimits

0x7558,	// (0x000624bd) hc_cl_list_double_graphic_heading_pane_g3

0x0002,

0xfa76,	// (0x0006a9db) hc_cl_list_double_graphic_heading_pane_g_ParamLimits

0xfa76,	// (0x0006a9db) hc_cl_list_double_graphic_heading_pane_g

0x756c,	// (0x000624d1) hc_cl_list_double_graphic_heading_pane_t1_ParamLimits

0x756c,	// (0x000624d1) hc_cl_list_double_graphic_heading_pane_t1

0x7581,	// (0x000624e6) hc_cl_list_double_graphic_heading_pane_t2_ParamLimits

0x7581,	// (0x000624e6) hc_cl_list_double_graphic_heading_pane_t2

0x0001,

0xfa7d,	// (0x0006a9e2) hc_cl_list_double_graphic_heading_pane_t_ParamLimits

0xfa7d,	// (0x0006a9e2) hc_cl_list_double_graphic_heading_pane_t

0xde00,	// (0x00068d65) vid4_progress_pane_g1

0xde10,	// (0x00068d75) vid4_progress_pane_g2

0xa79b,	// (0x00065700) vid4_progress_pane_g3

0xdd15,	// (0x00068c7a) vid4_progress_pane_g4

0x0004,

0xfa82,	// (0x0006a9e7) vid4_progress_pane_g

0xde20,	// (0x00068d85) vid4_progress_pane_t1

0xde35,	// (0x00068d9a) vid4_progress_pane_t2

0x0002,

0xfa8d,	// (0x0006a9f2) vid4_progress_pane_t

0xde60,	// (0x00068dc5) wait_bar_pane_cp07

0xc3c1,	// (0x00067326) blid_firmament_pane_ParamLimits

0xc404,	// (0x00067369) popup_blid_sat_info2_window_g1

0xc428,	// (0x0006738d) popup_blid_sat_info2_window_t3

0xc436,	// (0x0006739b) popup_blid_sat_info2_window_t4

0xc444,	// (0x000673a9) popup_blid_sat_info2_window_t5

0xc452,	// (0x000673b7) popup_blid_sat_info2_window_t6

0xc462,	// (0x000673c7) popup_blid_sat_info2_window_t7

0xc470,	// (0x000673d5) popup_blid_sat_info2_window_t8

0xc47e,	// (0x000673e3) popup_blid_sat_info2_window_t9

0xc48c,	// (0x000673f1) popup_blid_sat_info2_window_t10

0xc550,	// (0x000674b5) aid_firma_cardinal_ParamLimits

0xc564,	// (0x000674c9) blid_firmament_pane_t1_ParamLimits

0xc57b,	// (0x000674e0) blid_firmament_pane_t2_ParamLimits

0xc592,	// (0x000674f7) blid_firmament_pane_t3_ParamLimits

0xc5a9,	// (0x0006750e) blid_firmament_pane_t4_ParamLimits

0xf6f7,	// (0x0006a65c) blid_firmament_pane_t_ParamLimits

0xc5c0,	// (0x00067525) blid_sat_info_pane_ParamLimits

0x9880,	// (0x000647e5) main_cam_set_pane_ParamLimits

0x5841,	// (0x000607a6) aid_size_cell_colour_35_ParamLimits

0x5861,	// (0x000607c6) aid_size_cell_colour_112_ParamLimits

0x5881,	// (0x000607e6) aid_size_cell_effect_ParamLimits

0xc0c8,	// (0x0006702d) bg_tb_trans_pane_cp02_ParamLimits

0xa722,	// (0x00065687) heading_imed_pane_ParamLimits

0x58a1,	// (0x00060806) listscroll_imed_pane_ParamLimits

0xb6f2,	// (0x00066657) popup_call2_audio_first_window_g5_ParamLimits

0xb6f2,	// (0x00066657) popup_call2_audio_first_window_g5

0x5e58,	// (0x00060dbd) aid_size_touch_image3_arrow_left_ParamLimits

0x5e58,	// (0x00060dbd) aid_size_touch_image3_arrow_left

0x5e84,	// (0x00060de9) aid_size_touch_image3_arrow_right_ParamLimits

0x5e84,	// (0x00060de9) aid_size_touch_image3_arrow_right

0xde4b,	// (0x00068db0) vid4_progress_pane_t3

0x5bc4,	// (0x00060b29) main_hwr_training_symbol_option_pane_ParamLimits

0x5bc4,	// (0x00060b29) main_hwr_training_symbol_option_pane

0xcda6,	// (0x00067d0b) popup_hwr_training_preview_window_ParamLimits

0xcda6,	// (0x00067d0b) popup_hwr_training_preview_window

0x5be4,	// (0x00060b49) hwr_training_navi_pane_g5_ParamLimits

0x5be4,	// (0x00060b49) hwr_training_navi_pane_g5

0xe03a,	// (0x00068f9f) popup_char_count_window

0xdd6b,	// (0x00068cd0) bg_popup_sub_pane_cp20_ParamLimits

0x6e9a,	// (0x00061dff) list_vitu2_match_list_pane_ParamLimits

0x6ea9,	// (0x00061e0e) vitu2_page_scroll_pane_ParamLimits

0x6ea9,	// (0x00061e0e) vitu2_page_scroll_pane

0xe4e6,	// (0x0006944b) list_single_hwr_training_symbol_option_pane_ParamLimits

0xe4e6,	// (0x0006944b) list_single_hwr_training_symbol_option_pane

0xe4f9,	// (0x0006945e) list_single_hwr_training_symbol_option_pane_g1

0xe501,	// (0x00069466) list_single_hwr_training_symbol_option_pane_t1

0xe50f,	// (0x00069474) bg_button_pane_cp023

0xe518,	// (0x0006947d) bg_button_pane_cp024

0x75e7,	// (0x0006254c) vitu2_page_scroll_pane_g1

0x75ef,	// (0x00062554) vitu2_page_scroll_pane_g2

0x0001,

0xfa94,	// (0x0006a9f9) vitu2_page_scroll_pane_g

0x75f7,	// (0x0006255c) vitu2_page_scroll_pane_t1

0xc2dd,	// (0x00067242) popup_char_count_window_g1

0xe54b,	// (0x000694b0) popup_char_count_window_g2

0xe554,	// (0x000694b9) popup_char_count_window_g3

0x0002,

0xfa99,	// (0x0006a9fe) popup_char_count_window_g

0xe55d,	// (0x000694c2) popup_char_count_window_t1

0x0e6c,	// (0x0005bdd1) main_vded2_pane

0xcaa5,	// (0x00067a0a) aid_size_cell_imed_line

0xcaaf,	// (0x00067a14) grid_imed_line_width_pane

0x63e2,	// (0x00061347) vid4_indicators_pane_g4

0xe56b,	// (0x000694d0) cell_imed_line_width_pane_ParamLimits

0xe56b,	// (0x000694d0) cell_imed_line_width_pane

0xe57f,	// (0x000694e4) cell_imed_line_width_pane_g1

0xc36f,	// (0x000672d4) cell_imed_line_width_pane_g2

0x0001,

0xfaa0,	// (0x0006aa05) cell_imed_line_width_pane_g

0x7606,	// (0x0006256b) main_vded2_pane_g1_ParamLimits

0x7606,	// (0x0006256b) main_vded2_pane_g1

0x761c,	// (0x00062581) main_vded2_pane_g2_ParamLimits

0x761c,	// (0x00062581) main_vded2_pane_g2

0x0001,

0xfaa5,	// (0x0006aa0a) main_vded2_pane_g_ParamLimits

0xfaa5,	// (0x0006aa0a) main_vded2_pane_g

0x762e,	// (0x00062593) vded2_slider_pane_ParamLimits

0x762e,	// (0x00062593) vded2_slider_pane

0x763e,	// (0x000625a3) aid_size_touch_vded2_end

0x7648,	// (0x000625ad) aid_size_touch_vded2_playhead

0xe588,	// (0x000694ed) aid_size_touch_vded2_start

0xe590,	// (0x000694f5) vded2_slider_bg_pane

0xe599,	// (0x000694fe) vded2_slider_pane_g1

0xe5a2,	// (0x00069507) vded2_slider_pane_g2

0x7652,	// (0x000625b7) vded2_slider_pane_g3

0x0002,

0xfaaa,	// (0x0006aa0f) vded2_slider_pane_g

0xe5aa,	// (0x0006950f) vded2_slider_bg_pane_g1

0xe5b3,	// (0x00069518) vded2_slider_bg_pane_g2

0xe5bc,	// (0x00069521) vded2_slider_bg_pane_g3

0x0002,

0x0919,	// (0x0005b87e) vded2_slider_bg_pane_g

0x35d9,	// (0x0005e53e) aid_postcard_touch_down_pane_ParamLimits

0x35d9,	// (0x0005e53e) aid_postcard_touch_down_pane

0x35ef,	// (0x0005e554) aid_postcard_touch_up_pane_ParamLimits

0x35ef,	// (0x0005e554) aid_postcard_touch_up_pane

0x0e6c,	// (0x0005bdd1) main_blid2_pane

0xc0d6,	// (0x0006703b) popup_blid2_search_window

0x0e6c,	// (0x0005bdd1) blid2_gps_pane

0x0e6c,	// (0x0005bdd1) blid2_navig_pane

0x0e6c,	// (0x0005bdd1) blid2_search_pane

0x0e6c,	// (0x0005bdd1) blid2_tripm_pane

0x765d,	// (0x000625c2) blid2_search_pane_g1_ParamLimits

0x765d,	// (0x000625c2) blid2_search_pane_g1

0x7675,	// (0x000625da) blid2_search_pane_t1_ParamLimits

0x7675,	// (0x000625da) blid2_search_pane_t1

0x7687,	// (0x000625ec) aid_size_cell_blid2_gps_ParamLimits

0x7687,	// (0x000625ec) aid_size_cell_blid2_gps

0x769f,	// (0x00062604) blid2_gps_pane_g1_ParamLimits

0x769f,	// (0x00062604) blid2_gps_pane_g1

0x76b3,	// (0x00062618) grid_blid2_satellite_pane_ParamLimits

0x76b3,	// (0x00062618) grid_blid2_satellite_pane

0x76cd,	// (0x00062632) blid2_navig_pane_g1_ParamLimits

0x76cd,	// (0x00062632) blid2_navig_pane_g1

0x76d9,	// (0x0006263e) blid2_navig_pane_t1_ParamLimits

0x76d9,	// (0x0006263e) blid2_navig_pane_t1

0x76f4,	// (0x00062659) blid2_navig_pane_t2_ParamLimits

0x76f4,	// (0x00062659) blid2_navig_pane_t2

0x0001,

0xfab1,	// (0x0006aa16) blid2_navig_pane_t_ParamLimits

0xfab1,	// (0x0006aa16) blid2_navig_pane_t

0x770f,	// (0x00062674) blid2_navig_ring_pane_ParamLimits

0x770f,	// (0x00062674) blid2_navig_ring_pane

0x7728,	// (0x0006268d) blid2_speed_pane_ParamLimits

0x7728,	// (0x0006268d) blid2_speed_pane

0x7734,	// (0x00062699) blid2_tripm_pane_g1_ParamLimits

0x7734,	// (0x00062699) blid2_tripm_pane_g1

0x774f,	// (0x000626b4) blid2_tripm_pane_g2_ParamLimits

0x774f,	// (0x000626b4) blid2_tripm_pane_g2

0x7763,	// (0x000626c8) blid2_tripm_pane_g3_ParamLimits

0x7763,	// (0x000626c8) blid2_tripm_pane_g3

0x7777,	// (0x000626dc) blid2_tripm_pane_g4_ParamLimits

0x7777,	// (0x000626dc) blid2_tripm_pane_g4

0x778b,	// (0x000626f0) blid2_tripm_pane_g5_ParamLimits

0x778b,	// (0x000626f0) blid2_tripm_pane_g5

0x0005,

0xfab6,	// (0x0006aa1b) blid2_tripm_pane_g_ParamLimits

0xfab6,	// (0x0006aa1b) blid2_tripm_pane_g

0x77b1,	// (0x00062716) blid2_tripm_pane_t1_ParamLimits

0x77b1,	// (0x00062716) blid2_tripm_pane_t1

0x77cc,	// (0x00062731) blid2_tripm_pane_t2_ParamLimits

0x77cc,	// (0x00062731) blid2_tripm_pane_t2

0x77e7,	// (0x0006274c) blid2_tripm_pane_t3_ParamLimits

0x77e7,	// (0x0006274c) blid2_tripm_pane_t3

0x0003,

0xfac3,	// (0x0006aa28) blid2_tripm_pane_t_ParamLimits

0xfac3,	// (0x0006aa28) blid2_tripm_pane_t

0x782e,	// (0x00062793) cell_blid2_satellite_pane_ParamLimits

0x782e,	// (0x00062793) cell_blid2_satellite_pane

0x784c,	// (0x000627b1) cell_blid2_satellite_pane_g1

0xe5c5,	// (0x0006952a) cell_blid2_satellite_pane_t1

0xc5d0,	// (0x00067535) blid2_speed_pane_g1

0xe5d3,	// (0x00069538) blid2_speed_pane_t1

0xe5e1,	// (0x00069546) blid2_speed_pane_t2

0x0001,

0x093b,	// (0x0005b8a0) blid2_speed_pane_t

0xc5d0,	// (0x00067535) blid2_navig_ring_pane_g1

0x7855,	// (0x000627ba) blid2_navig_ring_pane_g2

0x785d,	// (0x000627c2) blid2_navig_ring_pane_g3

0x7865,	// (0x000627ca) blid2_navig_ring_pane_g4

0x786d,	// (0x000627d2) blid2_navig_ring_pane_g5

0x0004,

0xfacc,	// (0x0006aa31) blid2_navig_ring_pane_g

0x0e6c,	// (0x0005bdd1) bg_popup_window_pane_cp011

0xe5ef,	// (0x00069554) popup_blid2_search_window_g1

0xe5f7,	// (0x0006955c) popup_blid2_search_window_t1

0xe605,	// (0x0006956a) popup_blid2_search_window_t2

0x0001,

0x094b,	// (0x0005b8b0) popup_blid2_search_window_t

0xa43b,	// (0x000653a0) main_browser_pane_g1

0xa035,	// (0x00064f9a) main_browser_pane_ParamLimits

0xdd6b,	// (0x00068cd0) bg_button_pane_cp011_ParamLimits

0x6708,	// (0x0006166d) cell_vitu2_function_pane_g1_ParamLimits

0xc0c8,	// (0x0006702d) bg_popup_sub_pane_cp22_ParamLimits

0x705b,	// (0x00061fc0) input_focus_pane_cp08_ParamLimits

0x7072,	// (0x00061fd7) popup_vitu2_query_button_pane_ParamLimits

0x7072,	// (0x00061fd7) popup_vitu2_query_button_pane

0x7083,	// (0x00061fe8) popup_vitu2_query_input_button_pane

0xe2ad,	// (0x00069212) popup_vitu2_query_window_g1_ParamLimits

0x708d,	// (0x00061ff2) popup_vitu2_query_window_g2_ParamLimits

0xfa21,	// (0x0006a986) popup_vitu2_query_window_g_ParamLimits

0x0e6c,	// (0x0005bdd1) bg_button_pane_cp026

0x7875,	// (0x000627da) popup_vitu2_query_input_button_pane_g1

0x0e6c,	// (0x0005bdd1) bg_button_pane_cp025

0xe613,	// (0x00069578) popup_vitu2_query_button_pane_t1

0x4c75,	// (0x0005fbda) main_mp3_pane_t6

0x4c83,	// (0x0005fbe8) popup_slider_window_cp01

0xdcfc,	// (0x00068c61) cam4_battery_pane

0xdd63,	// (0x00068cc8) cam4_battery_pane_cp02

0xddf8,	// (0x00068d5d) cam4_battery_pane_cp01

0xddf8,	// (0x00068d5d) cam4_battery_pane_cp03

0xdee4,	// (0x00068e49) cam4_battery_pane_g1

0xc5d0,	// (0x00067535) cam4_battery_pane_g2

0x0001,

0xfad7,	// (0x0006aa3c) cam4_battery_pane_g

0xc49a,	// (0x000673ff) popup_blid_sat_info2_window_t11

0x2f2f,	// (0x0005de94) aid_size_touch_mv_arrow_left_ParamLimits

0x2f58,	// (0x0005debd) aid_size_touch_mv_arrow_right_ParamLimits

0xabbf,	// (0x00065b24) navi_pane_g1_ParamLimits

0x2f81,	// (0x0005dee6) navi_pane_g2_ParamLimits

0x2faf,	// (0x0005df14) navi_pane_g3_ParamLimits

0xf409,	// (0x0006a36e) navi_pane_g_ParamLimits

0x3007,	// (0x0005df6c) navi_pane_mv_t1_ParamLimits

0x58ad,	// (0x00060812) grid_imed_effect_pane_ParamLimits

0x1d8a,	// (0x0005ccef) aid_placing_vt_slider_lsc

0xa38c,	// (0x000652f1) aid_placing_vt_slider_prt

0x9880,	// (0x000647e5) bg_tb_trans_pane_cp01_ParamLimits

0xc757,	// (0x000676bc) popup_image_details_window_g1_ParamLimits

0xc76a,	// (0x000676cf) popup_image_details_window_g2_ParamLimits

0xc77f,	// (0x000676e4) popup_image_details_window_g3_ParamLimits

0xc77f,	// (0x000676e4) popup_image_details_window_g3

0xf73c,	// (0x0006a6a1) popup_image_details_window_g_ParamLimits

0xc793,	// (0x000676f8) popup_image_details_window_t1_ParamLimits

0xc7a5,	// (0x0006770a) popup_image_details_window_t2_ParamLimits

0xc7be,	// (0x00067723) popup_image_details_window_t3_ParamLimits

0xc7d2,	// (0x00067737) popup_image_details_window_t4_ParamLimits

0xc7ed,	// (0x00067752) popup_image_details_window_t5_ParamLimits

0xf743,	// (0x0006a6a8) popup_image_details_window_t_ParamLimits

0x749f,	// (0x00062404) cl_header_name_pane_ParamLimits

0x749f,	// (0x00062404) cl_header_name_pane

0x787d,	// (0x000627e2) cl_header_name_pane_t1_ParamLimits

0x787d,	// (0x000627e2) cl_header_name_pane_t1

0x789e,	// (0x00062803) cl_header_name_pane_t2_ParamLimits

0x789e,	// (0x00062803) cl_header_name_pane_t2

0x78e0,	// (0x00062845) cl_header_name_pane_t3_ParamLimits

0x78e0,	// (0x00062845) cl_header_name_pane_t3

0x0002,

0xfadc,	// (0x0006aa41) cl_header_name_pane_t_ParamLimits

0xfadc,	// (0x0006aa41) cl_header_name_pane_t

0x2fd8,	// (0x0005df3d) navi_pane_mv_g2_ParamLimits

0xe014,	// (0x00068f79) field_vitu2_entry_pane_g1_ParamLimits

0xe020,	// (0x00068f85) field_vitu2_entry_pane_g2_ParamLimits

0xe02c,	// (0x00068f91) field_vitu2_entry_pane_g3_ParamLimits

0xe02c,	// (0x00068f91) field_vitu2_entry_pane_g3

0x074b,	// (0x0005b6b0) field_vitu2_entry_pane_g_ParamLimits

0x6684,	// (0x000615e9) cell_vitu2_itu_pane_g1_ParamLimits

0x6694,	// (0x000615f9) cell_vitu2_itu_pane_g2_ParamLimits

0x6694,	// (0x000615f9) cell_vitu2_itu_pane_g2

0x0001,

0xf93a,	// (0x0006a89f) cell_vitu2_itu_pane_g_ParamLimits

0xf93a,	// (0x0006a89f) cell_vitu2_itu_pane_g

0xdd6b,	// (0x00068cd0) bg_vkb2_func_pane_cp05_ParamLimits

0xdd6b,	// (0x00068cd0) bg_vkb2_func_pane_cp05

0xdd6b,	// (0x00068cd0) bg_vkb2_func_pane_cp03

0xdd6b,	// (0x00068cd0) bg_vkb2_func_pane_cp04

0xdd6b,	// (0x00068cd0) bg_vkb2_func_pane_cp10_ParamLimits

0xdd6b,	// (0x00068cd0) bg_vkb2_func_pane_cp10

0x7441,	// (0x000623a6) bg_vkb2_func_pane_cp08

0x7427,	// (0x0006238c) bg_vkb2_func_pane_cp06

0x7435,	// (0x0006239a) bg_vkb2_func_pane_cp07

0xe521,	// (0x00069486) bg_vkb2_func_pane_cp11_ParamLimits

0xe521,	// (0x00069486) bg_vkb2_func_pane_cp11

0xe536,	// (0x0006949b) bg_vkb2_func_pane_cp12_ParamLimits

0xe536,	// (0x0006949b) bg_vkb2_func_pane_cp12

0x0e6c,	// (0x0005bdd1) bg_vkb2_func_pane_cp09

0xe04c,	// (0x00068fb1) bg_vkb2_func_pane_g1

0xa54c,	// (0x000654b1) bg_vkb2_func_pane_g2

0xe054,	// (0x00068fb9) bg_vkb2_func_pane_g3

0xe05c,	// (0x00068fc1) bg_vkb2_func_pane_g4

0xe270,	// (0x000691d5) bg_vkb2_func_pane_g5

0xe074,	// (0x00068fd9) bg_vkb2_func_pane_g6

0xe07c,	// (0x00068fe1) bg_vkb2_func_pane_g7

0xe06c,	// (0x00068fd1) bg_vkb2_func_pane_g8

0xa52c,	// (0x00065491) bg_vkb2_func_pane_g9

0x0008,

0xfae3,	// (0x0006aa48) bg_vkb2_func_pane_g

0x779f,	// (0x00062704) blid2_tripm_pane_g6_ParamLimits

0x779f,	// (0x00062704) blid2_tripm_pane_g6

0xde9e,	// (0x00068e03) mp4_progress_pane_g1

0x781a,	// (0x0006277f) blid2_tripm_values_pane_ParamLimits

0x781a,	// (0x0006277f) blid2_tripm_values_pane

0x7911,	// (0x00062876) blid2_tripm_values_pane_t1

0x791f,	// (0x00062884) blid2_tripm_values_pane_t2

0x792d,	// (0x00062892) blid2_tripm_values_pane_t3

0x793b,	// (0x000628a0) blid2_tripm_values_pane_t4

0x7949,	// (0x000628ae) blid2_tripm_values_pane_t5

0x7957,	// (0x000628bc) blid2_tripm_values_pane_t6

0x7965,	// (0x000628ca) blid2_tripm_values_pane_t7

0x7973,	// (0x000628d8) blid2_tripm_values_pane_t8

0x7981,	// (0x000628e6) blid2_tripm_values_pane_t9

0x0008,

0xfaf6,	// (0x0006aa5b) blid2_tripm_values_pane_t

0x1dcc,	// (0x0005cd31) call_video_pane_t1_ParamLimits

0x1dea,	// (0x0005cd4f) call_video_pane_t2_ParamLimits

0xf292,	// (0x0006a1f7) call_video_pane_t_ParamLimits

0x34dc,	// (0x0005e441) msg_header_pane_g1_ParamLimits

0xadfa,	// (0x00065d5f) msg_header_pane_g2_ParamLimits

0xadfa,	// (0x00065d5f) msg_header_pane_g2

0x0001,

0xf4ac,	// (0x0006a411) msg_header_pane_g_ParamLimits

0xf4ac,	// (0x0006a411) msg_header_pane_g

0xa035,	// (0x00064f9a) main_clock2_pane_ParamLimits

0x55d2,	// (0x00060537) grid_clock2_toolbar_pane_ParamLimits

0x55d2,	// (0x00060537) grid_clock2_toolbar_pane

0x55d2,	// (0x00060537) listscroll_clock2_pane_ParamLimits

0x55d2,	// (0x00060537) listscroll_clock2_pane

0x56af,	// (0x00060614) main_clock2_pane_t3_ParamLimits

0x56af,	// (0x00060614) main_clock2_pane_t3

0x56ca,	// (0x0006062f) main_clock2_pane_t4_ParamLimits

0x56ca,	// (0x0006062f) main_clock2_pane_t4

0xe621,	// (0x00069586) cell_clock2_toolbar_pane

0xe629,	// (0x0006958e) cell_clock2_toolbar_pane_cp01

0xe629,	// (0x0006958e) cell_clock2_toolbar_pane_cp02

0xe631,	// (0x00069596) cell_clock2_toolbar_pane_cp03

0xe639,	// (0x0006959e) list_clock2_pane

0xab12,	// (0x00065a77) scroll_pane_cp10

0xe641,	// (0x000695a6) list_single_clock2_pane_ParamLimits

0xe641,	// (0x000695a6) list_single_clock2_pane

0xac5f,	// (0x00065bc4) list_highlight_pane_cp08

0xe64e,	// (0x000695b3) list_single_clock2_pane_t1

0xe65c,	// (0x000695c1) list_single_clock2_pane_t2

0x0001,

0x0982,	// (0x0005b8e7) list_single_clock2_pane_t

0x0e6c,	// (0x0005bdd1) bg_button_pane_cp10

0xe66a,	// (0x000695cf) cell_clock2_toolbar_pane_g1

0x3565,	// (0x0005e4ca) aid_main_viewer_pane_g1_ParamLimits

0x3565,	// (0x0005e4ca) aid_main_viewer_pane_g1

0x3573,	// (0x0005e4d8) aid_main_viewer_pane_g2_ParamLimits

0x3573,	// (0x0005e4d8) aid_main_viewer_pane_g2

0x3581,	// (0x0005e4e6) aid_main_viewer_pane_g3_ParamLimits

0x3581,	// (0x0005e4e6) aid_main_viewer_pane_g3

0x3590,	// (0x0005e4f5) aid_main_viewer_pane_g4_ParamLimits

0x3590,	// (0x0005e4f5) aid_main_viewer_pane_g4

0x0003,

0xf4bd,	// (0x0006a422) aid_main_viewer_pane_g_ParamLimits

0xf4bd,	// (0x0006a422) aid_main_viewer_pane_g

0x3e9c,	// (0x0005ee01) main_calc_pane_ParamLimits

0x3eb0,	// (0x0005ee15) main_dialer2_pane_ParamLimits

0x0e6c,	// (0x0005bdd1) main_cam6_pane

0x0e6c,	// (0x0005bdd1) main_vid6_pane

0x55de,	// (0x00060543) listscroll_gen_pane_cp06_ParamLimits

0x55de,	// (0x00060543) listscroll_gen_pane_cp06

0x56e5,	// (0x0006064a) main_clock2_pane_t5_ParamLimits

0x56e5,	// (0x0006064a) main_clock2_pane_t5

0x5742,	// (0x000606a7) aid_call2_pane_cp10_ParamLimits

0x5754,	// (0x000606b9) aid_call_pane_cp10_ParamLimits

0xab94,	// (0x00065af9) popup_clock_analogue_window_cp10_g1_ParamLimits

0xab94,	// (0x00065af9) popup_clock_analogue_window_cp10_g2_ParamLimits

0x5766,	// (0x000606cb) popup_clock_analogue_window_cp10_g3_ParamLimits

0x5766,	// (0x000606cb) popup_clock_analogue_window_cp10_g4_ParamLimits

0xab94,	// (0x00065af9) popup_clock_analogue_window_cp10_g5_ParamLimits

0xf7f3,	// (0x0006a758) popup_clock_analogue_window_cp10_g_ParamLimits

0x5778,	// (0x000606dd) popup_clock_analogue_window_cp10_t1_ParamLimits

0x5e05,	// (0x00060d6a) cell_dialer2_keypad_pane_g2_ParamLimits

0x5e05,	// (0x00060d6a) cell_dialer2_keypad_pane_g2

0x0001,

0xf8d4,	// (0x0006a839) cell_dialer2_keypad_pane_g_ParamLimits

0xf8d4,	// (0x0006a839) cell_dialer2_keypad_pane_g

0x5e21,	// (0x00060d86) cell_dialer2_keypad_pane_t1

0x6a1f,	// (0x00061984) main_cset_text2_pane_ParamLimits

0x6a1f,	// (0x00061984) main_cset_text2_pane

0xe489,	// (0x000693ee) area_vitu2_query_pane_g1_ParamLimits

0x732a,	// (0x0006228f) area_vitu2_query_pane_g2_ParamLimits

0xfa4a,	// (0x0006a9af) area_vitu2_query_pane_g_ParamLimits

0x7403,	// (0x00062368) area_vitu2_query_pane_t7_ParamLimits

0x7403,	// (0x00062368) area_vitu2_query_pane_t7

0x7427,	// (0x0006238c) bg_button_pane_cp018_ParamLimits

0x7435,	// (0x0006239a) bg_button_pane_cp021_ParamLimits

0x7441,	// (0x000623a6) bg_button_pane_cp022_ParamLimits

0x7441,	// (0x000623a6) bg_vkb2_func_pane_cp08_ParamLimits

0x7427,	// (0x0006238c) bg_vkb2_func_pane_cp06_ParamLimits

0x7435,	// (0x0006239a) bg_vkb2_func_pane_cp07_ParamLimits

0x7452,	// (0x000623b7) input_focus_pane_cp09_ParamLimits

0xde70,	// (0x00068dd5) cam6_autofocus_pane_ParamLimits

0xde70,	// (0x00068dd5) cam6_autofocus_pane

0x798f,	// (0x000628f4) cam6_image_uncrop_pane_ParamLimits

0x798f,	// (0x000628f4) cam6_image_uncrop_pane

0x799e,	// (0x00062903) cam6_indi_pane_ParamLimits

0x799e,	// (0x00062903) cam6_indi_pane

0x79b4,	// (0x00062919) cam6_mode_pane_ParamLimits

0x79b4,	// (0x00062919) cam6_mode_pane

0x79c6,	// (0x0006292b) cam6_timer_pane_ParamLimits

0x79c6,	// (0x0006292b) cam6_timer_pane

0x79d2,	// (0x00062937) cam6_zoom_pane_ParamLimits

0x79d2,	// (0x00062937) cam6_zoom_pane

0x79de,	// (0x00062943) cam6_mode_pane_g1_ParamLimits

0x79de,	// (0x00062943) cam6_mode_pane_g1

0x79ee,	// (0x00062953) cam6_mode_pane_g2_ParamLimits

0x79ee,	// (0x00062953) cam6_mode_pane_g2

0x79fe,	// (0x00062963) cam6_mode_pane_g3_ParamLimits

0x79fe,	// (0x00062963) cam6_mode_pane_g3

0x7a0e,	// (0x00062973) cam6_mode_pane_g4_ParamLimits

0x7a0e,	// (0x00062973) cam6_mode_pane_g4

0x0003,

0xfb09,	// (0x0006aa6e) cam6_mode_pane_g_ParamLimits

0xfb09,	// (0x0006aa6e) cam6_mode_pane_g

0xdf81,	// (0x00068ee6) bg_tb_trans_pane_cp08_ParamLimits

0xdf81,	// (0x00068ee6) bg_tb_trans_pane_cp08

0xe672,	// (0x000695d7) cam6_battery_pane_ParamLimits

0xe672,	// (0x000695d7) cam6_battery_pane

0xe688,	// (0x000695ed) cam6_indi_pane_g1_ParamLimits

0xe688,	// (0x000695ed) cam6_indi_pane_g1

0xe69a,	// (0x000695ff) cam6_indi_pane_g2_ParamLimits

0xe69a,	// (0x000695ff) cam6_indi_pane_g2

0xe6ac,	// (0x00069611) cam6_indi_pane_g3_ParamLimits

0xe6ac,	// (0x00069611) cam6_indi_pane_g3

0x0002,

0x0990,	// (0x0005b8f5) cam6_indi_pane_g_ParamLimits

0x0990,	// (0x0005b8f5) cam6_indi_pane_g

0xe6be,	// (0x00069623) cam6_indi_pane_t1_ParamLimits

0xe6be,	// (0x00069623) cam6_indi_pane_t1

0x7a1e,	// (0x00062983) cam6_autofocus_pane_g1

0x7a26,	// (0x0006298b) cam6_autofocus_pane_g2

0x7a2e,	// (0x00062993) cam6_autofocus_pane_g3

0x7a36,	// (0x0006299b) cam6_autofocus_pane_g4

0x0003,

0xfb12,	// (0x0006aa77) cam6_autofocus_pane_g

0xe6e4,	// (0x00069649) cam6_timer_pane_g1

0xe6ec,	// (0x00069651) cam6_timer_pane_t1

0xe6fa,	// (0x0006965f) cam6_zoom_cont_pane

0xe702,	// (0x00069667) cam6_zoom_pane_g1

0xe70a,	// (0x0006966f) cam6_zoom_pane_g2

0x7a3e,	// (0x000629a3) cam6_zoom_pane_g3

0x0002,

0xfb1b,	// (0x0006aa80) cam6_zoom_pane_g

0xc5d0,	// (0x00067535) cam6_battery_pane_g1

0xc5d0,	// (0x00067535) cam6_battery_pane_g2

0x0001,

0xf700,	// (0x0006a665) cam6_battery_pane_g

0xe712,	// (0x00069677) cam6_zoom_cont_pane_g1

0xe71b,	// (0x00069680) cam6_zoom_cont_pane_g2

0xe724,	// (0x00069689) cam6_zoom_cont_pane_g3

0x0002,

0x09a7,	// (0x0005b90c) cam6_zoom_cont_pane_g

0x7a5b,	// (0x000629c0) cam6_mode_pane_cp_ParamLimits

0x7a5b,	// (0x000629c0) cam6_mode_pane_cp

0x7a6d,	// (0x000629d2) cam6_zoom_pane_cp_ParamLimits

0x7a6d,	// (0x000629d2) cam6_zoom_pane_cp

0x7a79,	// (0x000629de) vid6_image_uncrop_cif_pane_ParamLimits

0x7a79,	// (0x000629de) vid6_image_uncrop_cif_pane

0x7a89,	// (0x000629ee) vid6_image_uncrop_nhd_pane_ParamLimits

0x7a89,	// (0x000629ee) vid6_image_uncrop_nhd_pane

0x7a98,	// (0x000629fd) vid6_image_uncrop_vga_pane_ParamLimits

0x7a98,	// (0x000629fd) vid6_image_uncrop_vga_pane

0x7aa7,	// (0x00062a0c) vid6_image_uncrop_wvga_pane_ParamLimits

0x7aa7,	// (0x00062a0c) vid6_image_uncrop_wvga_pane

0x7ab6,	// (0x00062a1b) vid6_indi_pane_ParamLimits

0x7ab6,	// (0x00062a1b) vid6_indi_pane

0xdf81,	// (0x00068ee6) bg_tb_trans_pane_cp09_ParamLimits

0xdf81,	// (0x00068ee6) bg_tb_trans_pane_cp09

0xe73c,	// (0x000696a1) cam6_battery_pane_cp_ParamLimits

0xe73c,	// (0x000696a1) cam6_battery_pane_cp

0xe748,	// (0x000696ad) vid6_indi_pane_g1_ParamLimits

0xe748,	// (0x000696ad) vid6_indi_pane_g1

0xe75a,	// (0x000696bf) vid6_indi_pane_g2_ParamLimits

0xe75a,	// (0x000696bf) vid6_indi_pane_g2

0xe76c,	// (0x000696d1) vid6_indi_pane_g3_ParamLimits

0xe76c,	// (0x000696d1) vid6_indi_pane_g3

0xe781,	// (0x000696e6) vid6_indi_pane_g4_ParamLimits

0xe781,	// (0x000696e6) vid6_indi_pane_g4

0xe796,	// (0x000696fb) vid6_indi_pane_g5_ParamLimits

0xe796,	// (0x000696fb) vid6_indi_pane_g5

0x0004,

0x09ae,	// (0x0005b913) vid6_indi_pane_g_ParamLimits

0x09ae,	// (0x0005b913) vid6_indi_pane_g

0xe7b0,	// (0x00069715) vid6_indi_pane_t1_ParamLimits

0xe7b0,	// (0x00069715) vid6_indi_pane_t1

0xe7c6,	// (0x0006972b) vid6_indi_pane_t2_ParamLimits

0xe7c6,	// (0x0006972b) vid6_indi_pane_t2

0xe7ee,	// (0x00069753) vid6_indi_pane_t3_ParamLimits

0xe7ee,	// (0x00069753) vid6_indi_pane_t3

0xe816,	// (0x0006977b) vid6_indi_pane_t4_ParamLimits

0xe816,	// (0x0006977b) vid6_indi_pane_t4

0x0003,

0x09b9,	// (0x0005b91e) vid6_indi_pane_t_ParamLimits

0x09b9,	// (0x0005b91e) vid6_indi_pane_t

0xe83a,	// (0x0006979f) wait_bar_pane_cp08

0x7ace,	// (0x00062a33) main_cset_text2_pane_t1_ParamLimits

0x7ace,	// (0x00062a33) main_cset_text2_pane_t1

0x7a46,	// (0x000629ab) listscroll_gen_pane_cp06_t1_ParamLimits

0x7a46,	// (0x000629ab) listscroll_gen_pane_cp06_t1

0x0e6c,	// (0x0005bdd1) main_cam6_set_pane

0xdcee,	// (0x00068c53) bg_tb_trans_pane_cp06_ParamLimits

0xdd04,	// (0x00068c69) cam4_indicators_pane_g1_ParamLimits

0xdd15,	// (0x00068c7a) cam4_indicators_pane_g2_ParamLimits

0xf911,	// (0x0006a876) cam4_indicators_pane_g_ParamLimits

0xdd33,	// (0x00068c98) cam4_indicators_pane_t1_ParamLimits

0xdd55,	// (0x00068cba) bg_tb_trans_pane_cp07_ParamLimits

0x63bb,	// (0x00061320) vid4_indicators_pane_g1_ParamLimits

0x63c8,	// (0x0006132d) vid4_indicators_pane_g2_ParamLimits

0x63d5,	// (0x0006133a) vid4_indicators_pane_g3_ParamLimits

0x63e2,	// (0x00061347) vid4_indicators_pane_g4_ParamLimits

0xf923,	// (0x0006a888) vid4_indicators_pane_g_ParamLimits

0x63fa,	// (0x0006135f) vid4_indicators_pane_t1_ParamLimits

0xde00,	// (0x00068d65) vid4_progress_pane_g1_ParamLimits

0xde10,	// (0x00068d75) vid4_progress_pane_g2_ParamLimits

0xa79b,	// (0x00065700) vid4_progress_pane_g3_ParamLimits

0xdd15,	// (0x00068c7a) vid4_progress_pane_g4_ParamLimits

0xfa82,	// (0x0006a9e7) vid4_progress_pane_g_ParamLimits

0xde20,	// (0x00068d85) vid4_progress_pane_t1_ParamLimits

0xde35,	// (0x00068d9a) vid4_progress_pane_t2_ParamLimits

0xde4b,	// (0x00068db0) vid4_progress_pane_t3_ParamLimits

0xfa8d,	// (0x0006a9f2) vid4_progress_pane_t_ParamLimits

0xde60,	// (0x00068dc5) wait_bar_pane_cp07_ParamLimits

0x7aee,	// (0x00062a53) main_cam6_set_pane_g2_ParamLimits

0x7aee,	// (0x00062a53) main_cam6_set_pane_g2

0x7b12,	// (0x00062a77) main_cset6_listscroll_pane_ParamLimits

0x7b12,	// (0x00062a77) main_cset6_listscroll_pane

0x7b2e,	// (0x00062a93) main_cset6_slider_pane_ParamLimits

0x7b2e,	// (0x00062a93) main_cset6_slider_pane

0x7b44,	// (0x00062aa9) main_cset6_text2_pane_ParamLimits

0x7b44,	// (0x00062aa9) main_cset6_text2_pane

0xe849,	// (0x000697ae) main_cset6_text_pane

0xe851,	// (0x000697b6) main_cset_list_pane_copy1_ParamLimits

0xe851,	// (0x000697b6) main_cset_list_pane_copy1

0xe861,	// (0x000697c6) scroll_pane_cp028_copy1

0x7b52,	// (0x00062ab7) cset_list_set_pane_copy1

0x7b65,	// (0x00062aca) aid_position_infowindow_above_copy1

0x7b6d,	// (0x00062ad2) aid_position_infowindow_below_copy1

0x7b75,	// (0x00062ada) cset_list_set_pane_g1_copy1

0x7b7d,	// (0x00062ae2) cset_list_set_pane_g3_copy1_ParamLimits

0x7b7d,	// (0x00062ae2) cset_list_set_pane_g3_copy1

0x6d06,	// (0x00061c6b) cset_list_set_pane_t1_copy1_ParamLimits

0x6d06,	// (0x00061c6b) cset_list_set_pane_t1_copy1

0x9880,	// (0x000647e5) list_highlight_pane_cp021_copy1_ParamLimits

0x9880,	// (0x000647e5) list_highlight_pane_cp021_copy1

0xe86a,	// (0x000697cf) cset6_slider_pane_ParamLimits

0xe86a,	// (0x000697cf) cset6_slider_pane

0xe896,	// (0x000697fb) main_cset6_slider_pane_g1_ParamLimits

0xe896,	// (0x000697fb) main_cset6_slider_pane_g1

0x7b8c,	// (0x00062af1) main_cset6_slider_pane_g2_ParamLimits

0x7b8c,	// (0x00062af1) main_cset6_slider_pane_g2

0xe17b,	// (0x000690e0) main_cset6_slider_pane_g3_ParamLimits

0xe17b,	// (0x000690e0) main_cset6_slider_pane_g3

0x6ae4,	// (0x00061a49) main_cset6_slider_pane_g4_ParamLimits

0x6ae4,	// (0x00061a49) main_cset6_slider_pane_g4

0x6b2c,	// (0x00061a91) main_cset6_slider_pane_g5_ParamLimits

0x6b2c,	// (0x00061a91) main_cset6_slider_pane_g5

0xe17b,	// (0x000690e0) main_cset6_slider_pane_g7_ParamLimits

0xe17b,	// (0x000690e0) main_cset6_slider_pane_g7

0xe187,	// (0x000690ec) main_cset6_slider_pane_g8_ParamLimits

0xe187,	// (0x000690ec) main_cset6_slider_pane_g8

0x6acc,	// (0x00061a31) main_cset6_slider_pane_g9_ParamLimits

0x6acc,	// (0x00061a31) main_cset6_slider_pane_g9

0x6ad8,	// (0x00061a3d) main_cset6_slider_pane_g10_ParamLimits

0x6ad8,	// (0x00061a3d) main_cset6_slider_pane_g10

0x6ae4,	// (0x00061a49) main_cset6_slider_pane_g11_ParamLimits

0x6ae4,	// (0x00061a49) main_cset6_slider_pane_g11

0x6af0,	// (0x00061a55) main_cset6_slider_pane_g12_ParamLimits

0x6af0,	// (0x00061a55) main_cset6_slider_pane_g12

0x6afc,	// (0x00061a61) main_cset6_slider_pane_g13_ParamLimits

0x6afc,	// (0x00061a61) main_cset6_slider_pane_g13

0x6b08,	// (0x00061a6d) main_cset6_slider_pane_g14_ParamLimits

0x6b08,	// (0x00061a6d) main_cset6_slider_pane_g14

0x7bb4,	// (0x00062b19) main_cset6_slider_pane_g15_ParamLimits

0x7bb4,	// (0x00062b19) main_cset6_slider_pane_g15

0x6b2c,	// (0x00061a91) main_cset6_slider_pane_g16_ParamLimits

0x6b2c,	// (0x00061a91) main_cset6_slider_pane_g16

0x6b38,	// (0x00061a9d) main_cset6_slider_pane_g17_ParamLimits

0x6b38,	// (0x00061a9d) main_cset6_slider_pane_g17

0x0011,

0xfb22,	// (0x0006aa87) main_cset6_slider_pane_g_ParamLimits

0xfb22,	// (0x0006aa87) main_cset6_slider_pane_g

0xe8be,	// (0x00069823) main_cset6_slider_pane_t1_ParamLimits

0xe8be,	// (0x00069823) main_cset6_slider_pane_t1

0x7bcc,	// (0x00062b31) main_cset6_slider_pane_t2_ParamLimits

0x7bcc,	// (0x00062b31) main_cset6_slider_pane_t2

0x7bf7,	// (0x00062b5c) main_cset6_slider_pane_t3_ParamLimits

0x7bf7,	// (0x00062b5c) main_cset6_slider_pane_t3

0x7c22,	// (0x00062b87) main_cset6_slider_pane_t4_ParamLimits

0x7c22,	// (0x00062b87) main_cset6_slider_pane_t4

0x7c4d,	// (0x00062bb2) main_cset6_slider_pane_t5_ParamLimits

0x7c4d,	// (0x00062bb2) main_cset6_slider_pane_t5

0xe90b,	// (0x00069870) main_cset6_slider_pane_t7_ParamLimits

0xe90b,	// (0x00069870) main_cset6_slider_pane_t7

0x7c78,	// (0x00062bdd) main_cset6_slider_pane_t8_ParamLimits

0x7c78,	// (0x00062bdd) main_cset6_slider_pane_t8

0x7c9c,	// (0x00062c01) main_cset6_slider_pane_t9_ParamLimits

0x7c9c,	// (0x00062c01) main_cset6_slider_pane_t9

0x7cc0,	// (0x00062c25) main_cset6_slider_pane_t10_ParamLimits

0x7cc0,	// (0x00062c25) main_cset6_slider_pane_t10

0x7ce4,	// (0x00062c49) main_cset6_slider_pane_t11_ParamLimits

0x7ce4,	// (0x00062c49) main_cset6_slider_pane_t11

0xe941,	// (0x000698a6) main_cset6_slider_pane_t14_ParamLimits

0xe941,	// (0x000698a6) main_cset6_slider_pane_t14

0xe97a,	// (0x000698df) main_cset6_slider_pane_t15_ParamLimits

0xe97a,	// (0x000698df) main_cset6_slider_pane_t15

0x000b,

0xfb47,	// (0x0006aaac) main_cset6_slider_pane_t_ParamLimits

0xfb47,	// (0x0006aaac) main_cset6_slider_pane_t

0xe9b3,	// (0x00069918) cset_slider_pane_g1_copy1

0xe9bc,	// (0x00069921) cset_slider_pane_g2_copy1

0xe9c5,	// (0x0006992a) cset_slider_pane_g3_copy1

0x0e6c,	// (0x0005bdd1) bg_popup_sub_pane_cp011_copy1

0xe2b9,	// (0x0006921e) main_cset_text_pane_g1_copy1

0xe2c1,	// (0x00069226) main_cset_text_pane_t1_copy1

0xe2cf,	// (0x00069234) main_cset_text_pane_t2_copy1

0xe2dd,	// (0x00069242) main_cset_text_pane_t3_copy1

0xe2eb,	// (0x00069250) main_cset_text_pane_t4_copy1

0xe2f9,	// (0x0006925e) main_cset_text_pane_t5_copy1

0xe307,	// (0x0006926c) main_cset_text_pane_t6_copy1

0xe315,	// (0x0006927a) main_cset_text_pane_t7_copy1

0x7ace,	// (0x00062a33) main_cset_text2_pane_t1_copy1

0x0e6c,	// (0x0005bdd1) main_ncimui_pane

0x40e6,	// (0x0005f04b) popup_query_ncimui_window_ParamLimits

0x40e6,	// (0x0005f04b) popup_query_ncimui_window

0x4dfd,	// (0x0005fd62) field_cale_ev2_pane_g4_ParamLimits

0x4dfd,	// (0x0005fd62) field_cale_ev2_pane_g4

0x5cdd,	// (0x00060c42) cell_video_dialer_keypad_pane_g2_ParamLimits

0x5cdd,	// (0x00060c42) cell_video_dialer_keypad_pane_g2

0x0001,

0xf8b4,	// (0x0006a819) cell_video_dialer_keypad_pane_g_ParamLimits

0xf8b4,	// (0x0006a819) cell_video_dialer_keypad_pane_g

0x5cf5,	// (0x00060c5a) cell_video_dialer_keypad_pane_t1

0x0e6c,	// (0x0005bdd1) bg_popup_window_pane_cp012

0xa9e2,	// (0x00065947) heading_pane_cp06

0xe9ec,	// (0x00069951) ncim_query_content_pane

0x0e6c,	// (0x0005bdd1) bg_popup_heading_pane_cp01

0xe9f4,	// (0x00069959) ncim_heading_pane_t1

0xea02,	// (0x00069967) ncim_indicator_popup_pane

0xea14,	// (0x00069979) ncim_query_button_pane

0xea28,	// (0x0006998d) ncim_query_content_pane_t1

0xea3a,	// (0x0006999f) ncim_query_content_pane_t2

0x0005,

0xfb86,	// (0x0006aaeb) ncim_query_content_pane_t

0xea74,	// (0x000699d9) ncim_query_list_pane

0xea86,	// (0x000699eb) ncim_query_popup_pane

0xea02,	// (0x00069967) ncim_indicator_popup_pane_ParamLimits

0x7ed2,	// (0x00062e37) ncim_query_content_pane_g1_ParamLimits

0x7ed2,	// (0x00062e37) ncim_query_content_pane_g1

0xea28,	// (0x0006998d) ncim_query_content_pane_t1_ParamLimits

0xea3a,	// (0x0006999f) ncim_query_content_pane_t2_ParamLimits

0x7ede,	// (0x00062e43) ncim_query_content_pane_t3_ParamLimits

0x7ede,	// (0x00062e43) ncim_query_content_pane_t3

0x7f06,	// (0x00062e6b) ncim_query_content_pane_t4_ParamLimits

0x7f06,	// (0x00062e6b) ncim_query_content_pane_t4

0x7f2e,	// (0x00062e93) ncim_query_content_pane_t5_ParamLimits

0x7f2e,	// (0x00062e93) ncim_query_content_pane_t5

0xea4c,	// (0x000699b1) ncim_query_content_pane_t6_ParamLimits

0xea4c,	// (0x000699b1) ncim_query_content_pane_t6

0xfb86,	// (0x0006aaeb) ncim_query_content_pane_t_ParamLimits

0xea74,	// (0x000699d9) ncim_query_list_pane_ParamLimits

0xea86,	// (0x000699eb) ncim_query_popup_pane_ParamLimits

0xea9a,	// (0x000699ff) wait_bar_pane_cp04

0x0e6c,	// (0x0005bdd1) input_focus_pane_cp011

0xeaa2,	// (0x00069a07) ncim_query_popup_pane_t1

0xeab0,	// (0x00069a15) ncim_list_query_list_pane_ParamLimits

0xeab0,	// (0x00069a15) ncim_list_query_list_pane

0x0e6c,	// (0x0005bdd1) bg_button_pane_cp027

0xeac3,	// (0x00069a28) ncim_query_button_pane_g1

0x0e6c,	// (0x0005bdd1) list_highlight_pane_cp012

0xeacd,	// (0x00069a32) ncim_list_query_list_pane_g1

0xead5,	// (0x00069a3a) ncim_list_query_list_pane_t1

0xdd24,	// (0x00068c89) cam4_indicators_pane_g3_ParamLimits

0xdd24,	// (0x00068c89) cam4_indicators_pane_g3

0x63ee,	// (0x00061353) vid4_indicators_pane_g5_ParamLimits

0x63ee,	// (0x00061353) vid4_indicators_pane_g5

0xdd24,	// (0x00068c89) vid4_progress_pane_g5_ParamLimits

0xdd24,	// (0x00068c89) vid4_progress_pane_g5

0x7deb,	// (0x00062d50) main_ncimui_pane_g1

0x7e41,	// (0x00062da6) ncimui_group_query_pane_ParamLimits

0x7e41,	// (0x00062da6) ncimui_group_query_pane

0x7e7d,	// (0x00062de2) ncimui_list_pane_ParamLimits

0x7e7d,	// (0x00062de2) ncimui_list_pane

0x7e9e,	// (0x00062e03) ncimui_text_pane_ParamLimits

0x7e9e,	// (0x00062e03) ncimui_text_pane

0x7f56,	// (0x00062ebb) ncimui_text_pane_t1_ParamLimits

0x7f56,	// (0x00062ebb) ncimui_text_pane_t1

0xeae3,	// (0x00069a48) ncimui_list_single_graphic_pane_ParamLimits

0xeae3,	// (0x00069a48) ncimui_list_single_graphic_pane

0x7f74,	// (0x00062ed9) ncimui_query_pane_ParamLimits

0x7f74,	// (0x00062ed9) ncimui_query_pane

0x0e6c,	// (0x0005bdd1) list_highlight_pane_cp013

0xeaf3,	// (0x00069a58) ncim_list_query_list_pane_t1_copy1

0xeacd,	// (0x00069a32) ncim_list_single_graphic_pane_g1

0xeb01,	// (0x00069a66) ncim_query_button_pane_cp01

0xeb0d,	// (0x00069a72) ncim_query_entry_pane_ParamLimits

0xeb0d,	// (0x00069a72) ncim_query_entry_pane

0xeb20,	// (0x00069a85) ncimui_query_pane_g1

0xeb2c,	// (0x00069a91) ncimui_query_pane_t1_ParamLimits

0xeb2c,	// (0x00069a91) ncimui_query_pane_t1

0x9880,	// (0x000647e5) input_focus_pane_cp012

0xeb45,	// (0x00069aaa) ncim_query_entry_pane_t1

0xa035,	// (0x00064f9a) main_im_pane_ParamLimits

0x9880,	// (0x000647e5) main_mobtv_pane_ParamLimits

0x9880,	// (0x000647e5) main_mobtv_pane

0x6acc,	// (0x00061a31) main_cset6_slider_pane_g18_ParamLimits

0x6acc,	// (0x00061a31) main_cset6_slider_pane_g18

0x6afc,	// (0x00061a61) main_cset6_slider_pane_g19_ParamLimits

0x6afc,	// (0x00061a61) main_cset6_slider_pane_g19

0x7f87,	// (0x00062eec) bg_main_mobtv_pane_ParamLimits

0x7f87,	// (0x00062eec) bg_main_mobtv_pane

0x7f95,	// (0x00062efa) main_mobtv_info_pane

0x7f9e,	// (0x00062f03) main_mobtv_loading_pane_ParamLimits

0x7f9e,	// (0x00062f03) main_mobtv_loading_pane

0xeb57,	// (0x00069abc) main_mobtv_pg_channel_list_pane

0xeb61,	// (0x00069ac6) main_mobtv_pg_hdr_pane

0x7fab,	// (0x00062f10) main_mobtv_programe_curr_pane_ParamLimits

0x7fab,	// (0x00062f10) main_mobtv_programe_curr_pane

0x7fb8,	// (0x00062f1d) main_mobtv_programe_next_pane_ParamLimits

0x7fb8,	// (0x00062f1d) main_mobtv_programe_next_pane

0xeb6a,	// (0x00069acf) popup_mobtv_noti_window

0xc5d0,	// (0x00067535) main_tv_pg_hdr_pane_g1

0xeb72,	// (0x00069ad7) main_tv_pg_hdr_pane_g2

0xeb7a,	// (0x00069adf) main_tv_pg_hdr_pane_g3

0xeb82,	// (0x00069ae7) main_tv_pg_hdr_pane_g4

0xeb8a,	// (0x00069aef) main_tv_pg_hdr_pane_g5

0xeb94,	// (0x00069af9) main_tv_pg_hdr_pane_g6

0xeb9e,	// (0x00069b03) main_tv_pg_hdr_pane_g7

0xeba8,	// (0x00069b0d) main_tv_pg_hdr_pane_g8

0xebb2,	// (0x00069b17) main_tv_pg_hdr_pane_g9

0xebbc,	// (0x00069b21) main_tv_pg_hdr_pane_g10

0xebc6,	// (0x00069b2b) main_tv_pg_hdr_pane_g11

0x000a,

0xfb93,	// (0x0006aaf8) main_tv_pg_hdr_pane_g

0xebd0,	// (0x00069b35) main_tv_pg_hdr_pane_t1

0xebde,	// (0x00069b43) main_tv_pg_hdr_pane_t2

0xebec,	// (0x00069b51) main_tv_pg_hdr_pane_t3

0xebfc,	// (0x00069b61) main_tv_pg_hdr_pane_t4

0xec0c,	// (0x00069b71) main_tv_pg_hdr_pane_t5

0x0004,

0x0a4a,	// (0x0005b9af) main_tv_pg_hdr_pane_t

0xec2e,	// (0x00069b93) single_mobtv_pg_channel_pane_ParamLimits

0xec2e,	// (0x00069b93) single_mobtv_pg_channel_pane

0xec40,	// (0x00069ba5) single_mobtv_pg_channel_table_pane

0xec49,	// (0x00069bae) single_mobtv_pg_channel_thumb_pane

0xec52,	// (0x00069bb7) single_tv_pg_channel_pane_g1

0xec5b,	// (0x00069bc0) single_tv_pg_channel_pane_g2

0x0001,

0x0a55,	// (0x0005b9ba) single_tv_pg_channel_pane_g

0xc837,	// (0x0006779c) bg_single_mobtv_pg_channel_thumb_pane_ParamLimits

0xc837,	// (0x0006779c) bg_single_mobtv_pg_channel_thumb_pane

0xec64,	// (0x00069bc9) single_mobtv_pg_channel_thumb_pane_g1_ParamLimits

0xec64,	// (0x00069bc9) single_mobtv_pg_channel_thumb_pane_g1

0xec72,	// (0x00069bd7) single_mobtv_pg_channel_thumb_pane_g2_ParamLimits

0xec72,	// (0x00069bd7) single_mobtv_pg_channel_thumb_pane_g2

0xec7e,	// (0x00069be3) single_mobtv_pg_channel_thumb_pane_g3_ParamLimits

0xec7e,	// (0x00069be3) single_mobtv_pg_channel_thumb_pane_g3

0x0002,

0x0a5a,	// (0x0005b9bf) single_mobtv_pg_channel_thumb_pane_g_ParamLimits

0x0a5a,	// (0x0005b9bf) single_mobtv_pg_channel_thumb_pane_g

0xec8a,	// (0x00069bef) single_mobtv_pg_channel_thumb_pane_t1

0xec98,	// (0x00069bfd) single_mobtv_pg_channel_thumb_pane_t2

0x0001,

0x0a61,	// (0x0005b9c6) single_mobtv_pg_channel_thumb_pane_t

0xc5d0,	// (0x00067535) bg_single_mobtv_pg_channel_table_pane_g1

0xc5d0,	// (0x00067535) bg_single_mobtv_pg_channel_table_pane_g2

0x0001,

0xf700,	// (0x0006a665) bg_single_mobtv_pg_channel_table_pane_g

0xeca6,	// (0x00069c0b) single_mobtv_pg_channel_table_pane_t1

0xecb4,	// (0x00069c19) single_mobtv_pg_channel_table_pane_t2

0x0001,

0x0a66,	// (0x0005b9cb) single_mobtv_pg_channel_table_pane_t

0x7fcd,	// (0x00062f32) main_mobtv_info_pane_g1_ParamLimits

0x7fcd,	// (0x00062f32) main_mobtv_info_pane_g1

0x7feb,	// (0x00062f50) main_mobtv_info_pane_t1_ParamLimits

0x7feb,	// (0x00062f50) main_mobtv_info_pane_t1

0x8063,	// (0x00062fc8) main_mobtv_info_pane_t2_ParamLimits

0x8063,	// (0x00062fc8) main_mobtv_info_pane_t2

0x0002,

0xfbaf,	// (0x0006ab14) main_mobtv_info_pane_t_ParamLimits

0xfbaf,	// (0x0006ab14) main_mobtv_info_pane_t

0x80f2,	// (0x00063057) wait_bar_pane_cp05

0x8104,	// (0x00063069) main_mobtv_loading_pane_g1_ParamLimits

0x8104,	// (0x00063069) main_mobtv_loading_pane_g1

0x8117,	// (0x0006307c) main_mobtv_loading_pane_g2_ParamLimits

0x8117,	// (0x0006307c) main_mobtv_loading_pane_g2

0x8123,	// (0x00063088) main_mobtv_loading_pane_g3_ParamLimits

0x8123,	// (0x00063088) main_mobtv_loading_pane_g3

0x0002,

0xfbb6,	// (0x0006ab1b) main_mobtv_loading_pane_g_ParamLimits

0xfbb6,	// (0x0006ab1b) main_mobtv_loading_pane_g

0xecc2,	// (0x00069c27) main_mobtv_loading_pane_t1_ParamLimits

0xecc2,	// (0x00069c27) main_mobtv_loading_pane_t1

0xecda,	// (0x00069c3f) main_mobtv_loading_pane_t2_ParamLimits

0xecda,	// (0x00069c3f) main_mobtv_loading_pane_t2

0x0001,

0x0a7e,	// (0x0005b9e3) main_mobtv_loading_pane_t_ParamLimits

0x0a7e,	// (0x0005b9e3) main_mobtv_loading_pane_t

0x8136,	// (0x0006309b) wait_bar_pane_cp06_ParamLimits

0x8136,	// (0x0006309b) wait_bar_pane_cp06

0xecfe,	// (0x00069c63) main_mobtv_programe_curr_pane_t1

0xed0c,	// (0x00069c71) main_mobtv_programe_curr_pane_t2

0x0001,

0x0a83,	// (0x0005b9e8) main_mobtv_programe_curr_pane_t

0xed1a,	// (0x00069c7f) main_mobtv_programe_next_pane_t1

0xed28,	// (0x00069c8d) main_mobtv_programe_next_pane_t2

0xed36,	// (0x00069c9b) main_mobtv_programe_next_pane_t3

0x0002,

0x0a88,	// (0x0005b9ed) main_mobtv_programe_next_pane_t

0x0e6c,	// (0x0005bdd1) bg_popup_mobtv_noti_window_pane

0xed44,	// (0x00069ca9) popup_mobtv_noti_window_g1

0xed4c,	// (0x00069cb1) popup_mobtv_noti_window_t1

0xed5a,	// (0x00069cbf) popup_mobtv_noti_window_t2

0x0001,

0x0a8f,	// (0x0005b9f4) popup_mobtv_noti_window_t

0xc5d0,	// (0x00067535) bg_popup_mobtv_noti_window_pane_g1

0x0e6c,	// (0x0005bdd1) sc_clock_pane

0x0e6c,	// (0x0005bdd1) main_fs_bigclock_pane

0x7804,	// (0x00062769) blid2_tripm_pane_t4_ParamLimits

0x7804,	// (0x00062769) blid2_tripm_pane_t4

0x8145,	// (0x000630aa) sc_clock_pane_g1_ParamLimits

0x8145,	// (0x000630aa) sc_clock_pane_g1

0x8157,	// (0x000630bc) sc_clock_pane_t1_ParamLimits

0x8157,	// (0x000630bc) sc_clock_pane_t1

0x8179,	// (0x000630de) sc_clock_pane_t2_ParamLimits

0x8179,	// (0x000630de) sc_clock_pane_t2

0x8191,	// (0x000630f6) sc_clock_pane_t3_ParamLimits

0x8191,	// (0x000630f6) sc_clock_pane_t3

0x0004,

0xfbbd,	// (0x0006ab22) sc_clock_pane_t_ParamLimits

0xfbbd,	// (0x0006ab22) sc_clock_pane_t

0x8fb2,	// (0x00063f17) main_fs_bigclock_indicator_pane_ParamLimits

0x8fb2,	// (0x00063f17) main_fs_bigclock_indicator_pane

0xc807,	// (0x0006776c) main_fs_bigclock_pane_g1_ParamLimits

0xc807,	// (0x0006776c) main_fs_bigclock_pane_g1

0x8fbe,	// (0x00063f23) main_fs_bigclock_pane_t1_ParamLimits

0x8fbe,	// (0x00063f23) main_fs_bigclock_pane_t1

0x8fd0,	// (0x00063f35) main_fs_bigclock_pane_t2_ParamLimits

0x8fd0,	// (0x00063f35) main_fs_bigclock_pane_t2

0x8fe2,	// (0x00063f47) main_fs_bigclock_pane_t3_ParamLimits

0x8fe2,	// (0x00063f47) main_fs_bigclock_pane_t3

0x0002,

0xfd93,	// (0x0006acf8) main_fs_bigclock_pane_t_ParamLimits

0xfd93,	// (0x0006acf8) main_fs_bigclock_pane_t

0xd66a,	// (0x000685cf) main_fs_bigclock_indicator_pane_g1

0xea1c,	// (0x00069981) ncim_query_content_pane_g2_ParamLimits

0xea1c,	// (0x00069981) ncim_query_content_pane_g2

0x0001,

0xfb81,	// (0x0006aae6) ncim_query_content_pane_g_ParamLimits

0xfb81,	// (0x0006aae6) ncim_query_content_pane_g

0x81a8,	// (0x0006310d) sc_clock_pane_t4_ParamLimits

0x81a8,	// (0x0006310d) sc_clock_pane_t4

0x9880,	// (0x000647e5) main_radioblah_pane

0xdf9d,	// (0x00068f02) cell_call4_button_pane_t1_copy1_ParamLimits

0xdf9d,	// (0x00068f02) cell_call4_button_pane_t1_copy1

0x7df3,	// (0x00062d58) main_ncimui_pane_t1_ParamLimits

0x7df3,	// (0x00062d58) main_ncimui_pane_t1

0x7e0d,	// (0x00062d72) main_ncimui_pane_t2_ParamLimits

0x7e0d,	// (0x00062d72) main_ncimui_pane_t2

0x0002,

0xfb7a,	// (0x0006aadf) main_ncimui_pane_t_ParamLimits

0xfb7a,	// (0x0006aadf) main_ncimui_pane_t

0xee8a,	// (0x00069def) main_radioblah_anim_pane_ParamLimits

0xee8a,	// (0x00069def) main_radioblah_anim_pane

0xee9b,	// (0x00069e00) main_radioblah_info_pane_ParamLimits

0xee9b,	// (0x00069e00) main_radioblah_info_pane

0xeeaf,	// (0x00069e14) main_radioblah_pane_t1_ParamLimits

0xeeaf,	// (0x00069e14) main_radioblah_pane_t1

0xeecb,	// (0x00069e30) main_radioblah_pane_t2_ParamLimits

0xeecb,	// (0x00069e30) main_radioblah_pane_t2

0x0003,

0x0ab5,	// (0x0005ba1a) main_radioblah_pane_t_ParamLimits

0x0ab5,	// (0x0005ba1a) main_radioblah_pane_t

0x8251,	// (0x000631b6) main_radioblah_rocker_ctrl_pane_ParamLimits

0x8251,	// (0x000631b6) main_radioblah_rocker_ctrl_pane

0xef13,	// (0x00069e78) main_radioblah_info_pane_t1_ParamLimits

0xef13,	// (0x00069e78) main_radioblah_info_pane_t1

0x82a9,	// (0x0006320e) main_radioblah_info_pane_t2_ParamLimits

0x82a9,	// (0x0006320e) main_radioblah_info_pane_t2

0x0003,

0xfbc8,	// (0x0006ab2d) main_radioblah_info_pane_t_ParamLimits

0xfbc8,	// (0x0006ab2d) main_radioblah_info_pane_t

0xc5d0,	// (0x00067535) main_radioblah_rocker_ctrl_pane_g1

0x835b,	// (0x000632c0) main_radioblah_rocker_ctrl_pane_g2

0x8363,	// (0x000632c8) main_radioblah_rocker_ctrl_pane_g3

0x836b,	// (0x000632d0) main_radioblah_rocker_ctrl_pane_g4

0x8373,	// (0x000632d8) main_radioblah_rocker_ctrl_pane_g5

0x837b,	// (0x000632e0) main_radioblah_rocker_ctrl_pane_g6

0x0005,

0xfbd1,	// (0x0006ab36) main_radioblah_rocker_ctrl_pane_g

0x7ace,	// (0x00062a33) main_cset_text2_pane_t1_copy1_ParamLimits

0xdce6,	// (0x00068c4b) cam4_image_uncrop_qvga_pane

0xdd4d,	// (0x00068cb2) vid4_image_uncrop_qcif_pane

0xde70,	// (0x00068dd5) cam6_image_uncrop_qvga_pane_ParamLimits

0xde70,	// (0x00068dd5) cam6_image_uncrop_qvga_pane

0xe72c,	// (0x00069691) vid6_image_uncrop_qcif_pane_ParamLimits

0xe72c,	// (0x00069691) vid6_image_uncrop_qcif_pane

0x0e6c,	// (0x0005bdd1) bg_popup_preview_window_pane_cp03

0xe9ce,	// (0x00069933) list_cset_text2_pane

0xe9d6,	// (0x0006993b) main_cset6_text2_pane_g1

0xe9de,	// (0x00069943) main_cset6_text2_pane_t1

0x8383,	// (0x000632e8) list_cset_text2_pane_t1_ParamLimits

0x8383,	// (0x000632e8) list_cset_text2_pane_t1

0x9880,	// (0x000647e5) main_radioblah_pane_ParamLimits

0x80de,	// (0x00063043) main_mobtv_info_pane_t3_ParamLimits

0x80de,	// (0x00063043) main_mobtv_info_pane_t3

0x823f,	// (0x000631a4) main_radioblah_pane_g1

0x8279,	// (0x000631de) main_radioblah_info_pane_g1

0x8300,	// (0x00063265) main_radioblah_info_pane_t3_ParamLimits

0x8300,	// (0x00063265) main_radioblah_info_pane_t3

0x29af,	// (0x0005d914) highlight_cell_cale_month_pane_ParamLimits

0x29af,	// (0x0005d914) highlight_cell_cale_month_pane

0x0e6c,	// (0x0005bdd1) main_phob_fisheye_pane

0xc919,	// (0x0006787e) scroll_pane_cp0031_ParamLimits

0xc919,	// (0x0006787e) scroll_pane_cp0031

0xe83a,	// (0x0006979f) wait_bar_pane_cp08_ParamLimits

0x7b52,	// (0x00062ab7) cset_list_set_pane_copy1_ParamLimits

0xef4d,	// (0x00069eb2) highlight_cell_cale_month_pane_g1

0x83a0,	// (0x00063305) highlight_cell_cale_month_pane_t1

0xe4dd,	// (0x00069442) list_gen_pane_cp01

0xe166,	// (0x000690cb) scroll_pane_01

0x83ae,	// (0x00063313) list_single_double_fisheye_pane

0x83b7,	// (0x0006331c) list_double_fisheye_pane_g1_ParamLimits

0x83b7,	// (0x0006331c) list_double_fisheye_pane_g1

0x83c3,	// (0x00063328) list_double_fisheye_pane_g2_ParamLimits

0x83c3,	// (0x00063328) list_double_fisheye_pane_g2

0x83d7,	// (0x0006333c) list_double_fisheye_pane_g3_ParamLimits

0x83d7,	// (0x0006333c) list_double_fisheye_pane_g3

0x0004,

0xfbde,	// (0x0006ab43) list_double_fisheye_pane_g_ParamLimits

0xfbde,	// (0x0006ab43) list_double_fisheye_pane_g

0x8400,	// (0x00063365) list_double_fisheye_pane_t1_ParamLimits

0x8400,	// (0x00063365) list_double_fisheye_pane_t1

0x841b,	// (0x00063380) list_double_fisheye_pane_t2_ParamLimits

0x841b,	// (0x00063380) list_double_fisheye_pane_t2

0x0001,

0xfbe9,	// (0x0006ab4e) list_double_fisheye_pane_t_ParamLimits

0xfbe9,	// (0x0006ab4e) list_double_fisheye_pane_t

0x0e6c,	// (0x0005bdd1) main_call5_pane

0x81d3,	// (0x00063138) sc_swipe_pane_ParamLimits

0x81d3,	// (0x00063138) sc_swipe_pane

0x8450,	// (0x000633b5) call5_image_pane_ParamLimits

0x8450,	// (0x000633b5) call5_image_pane

0x846d,	// (0x000633d2) call5_swipe_1_pane_ParamLimits

0x846d,	// (0x000633d2) call5_swipe_1_pane

0x8480,	// (0x000633e5) call5_swipe_2_pane_ParamLimits

0x8480,	// (0x000633e5) call5_swipe_2_pane

0x84ab,	// (0x00063410) popup_call5_audio_first_window_ParamLimits

0x84ab,	// (0x00063410) popup_call5_audio_first_window

0xc837,	// (0x0006779c) call5_swipe_1_pane_g1_ParamLimits

0xc837,	// (0x0006779c) call5_swipe_1_pane_g1

0xef55,	// (0x00069eba) call5_swipe_1_pane_g2_ParamLimits

0xef55,	// (0x00069eba) call5_swipe_1_pane_g2

0x0001,

0xfbee,	// (0x0006ab53) call5_swipe_1_pane_g_ParamLimits

0xfbee,	// (0x0006ab53) call5_swipe_1_pane_g

0xef61,	// (0x00069ec6) call5_swipe_1_pane_t1_ParamLimits

0xef61,	// (0x00069ec6) call5_swipe_1_pane_t1

0xc837,	// (0x0006779c) call5_swipe_2_pane_g1_ParamLimits

0xc837,	// (0x0006779c) call5_swipe_2_pane_g1

0xef76,	// (0x00069edb) call5_swipe_2_pane_g2_ParamLimits

0xef76,	// (0x00069edb) call5_swipe_2_pane_g2

0x0001,

0xfbf3,	// (0x0006ab58) call5_swipe_2_pane_g_ParamLimits

0xfbf3,	// (0x0006ab58) call5_swipe_2_pane_g

0xef82,	// (0x00069ee7) call5_swipe_2_pane_t1_ParamLimits

0xef82,	// (0x00069ee7) call5_swipe_2_pane_t1

0xef97,	// (0x00069efc) sc_swipe_pane_g1_ParamLimits

0xef97,	// (0x00069efc) sc_swipe_pane_g1

0xefa4,	// (0x00069f09) sc_swipe_pane_g2_ParamLimits

0xefa4,	// (0x00069f09) sc_swipe_pane_g2

0x0001,

0x0aee,	// (0x0005ba53) sc_swipe_pane_g_ParamLimits

0x0aee,	// (0x0005ba53) sc_swipe_pane_g

0xefb0,	// (0x00069f15) sc_swipe_pane_t1_ParamLimits

0xefb0,	// (0x00069f15) sc_swipe_pane_t1

0x0e6c,	// (0x0005bdd1) main_cmail_launcher_pane

0x84bc,	// (0x00063421) aid_size_cell_cmail_l_ParamLimits

0x84bc,	// (0x00063421) aid_size_cell_cmail_l

0x84d6,	// (0x0006343b) grid_cmail_l_pane_ParamLimits

0x84d6,	// (0x0006343b) grid_cmail_l_pane

0x84f1,	// (0x00063456) cell_cmail_l_pane_ParamLimits

0x84f1,	// (0x00063456) cell_cmail_l_pane

0x8517,	// (0x0006347c) cell_cmail_l_pane_g1_ParamLimits

0x8517,	// (0x0006347c) cell_cmail_l_pane_g1

0x8523,	// (0x00063488) cell_cmail_l_pane_t1_ParamLimits

0x8523,	// (0x00063488) cell_cmail_l_pane_t1

0xefc5,	// (0x00069f2a) cell_cmail_l_pane_t2_ParamLimits

0xefc5,	// (0x00069f2a) cell_cmail_l_pane_t2

0x0001,

0xfbf8,	// (0x0006ab5d) cell_cmail_l_pane_t_ParamLimits

0xfbf8,	// (0x0006ab5d) cell_cmail_l_pane_t

0x9880,	// (0x000647e5) grid_highlight_pane_cp018_ParamLimits

0x9880,	// (0x000647e5) grid_highlight_pane_cp018

0x0f8c,	// (0x0005bef1) main2_pane_ParamLimits

0x0f8c,	// (0x0005bef1) main2_pane

0xa10e,	// (0x00065073) popup_sp_fs_action_menu_bg_pane_g1

0xa116,	// (0x0006507b) popup_sp_fs_action_menu_bg_pane_g2

0xa11e,	// (0x00065083) popup_sp_fs_action_menu_bg_pane_g3

0xa126,	// (0x0006508b) popup_sp_fs_action_menu_bg_pane_g4

0xa12e,	// (0x00065093) popup_sp_fs_action_menu_bg_pane_g5

0xa136,	// (0x0006509b) popup_sp_fs_action_menu_bg_pane_g6

0xa13e,	// (0x000650a3) popup_sp_fs_action_menu_bg_pane_g7

0xa146,	// (0x000650ab) popup_sp_fs_action_menu_bg_pane_g8

0xa14e,	// (0x000650b3) popup_sp_fs_action_menu_bg_pane_g9

0xa156,	// (0x000650bb) popup_sp_fs_action_menu_bg_pane_g10

0xa156,	// (0x000650bb) popup_sp_fs_action_menu_bg_pane_g11

0x000a,

0xf1ac,	// (0x0006a111) popup_sp_fs_action_menu_bg_pane_g

0x1c21,	// (0x0005cb86) list_medium_line_x2_t3_g3_g1_ParamLimits

0x1c21,	// (0x0005cb86) list_medium_line_x2_t3_g3_g1

0x1c2d,	// (0x0005cb92) list_medium_line_x2_t3_g3_g2_ParamLimits

0x1c2d,	// (0x0005cb92) list_medium_line_x2_t3_g3_g2

0x1c39,	// (0x0005cb9e) list_medium_line_x2_t3_g3_g3_ParamLimits

0x1c39,	// (0x0005cb9e) list_medium_line_x2_t3_g3_g3

0x0002,

0xf25c,	// (0x0006a1c1) list_medium_line_x2_t3_g3_g_ParamLimits

0xf25c,	// (0x0006a1c1) list_medium_line_x2_t3_g3_g

0x1c45,	// (0x0005cbaa) list_medium_line_x2_t3_g3_t1_ParamLimits

0x1c45,	// (0x0005cbaa) list_medium_line_x2_t3_g3_t1

0x1c5a,	// (0x0005cbbf) list_medium_line_x2_t3_g3_t2_ParamLimits

0x1c5a,	// (0x0005cbbf) list_medium_line_x2_t3_g3_t2

0x1c6e,	// (0x0005cbd3) list_medium_line_x2_t3_g3_t3_ParamLimits

0x1c6e,	// (0x0005cbd3) list_medium_line_x2_t3_g3_t3

0x0002,

0xf263,	// (0x0006a1c8) list_medium_line_x2_t3_g3_t_ParamLimits

0xf263,	// (0x0006a1c8) list_medium_line_x2_t3_g3_t

0x1c21,	// (0x0005cb86) list_medium_line_x2_t3_g2_g1_ParamLimits

0x1c21,	// (0x0005cb86) list_medium_line_x2_t3_g2_g1

0x1c39,	// (0x0005cb9e) list_medium_line_x2_t3_g2_g2_ParamLimits

0x1c39,	// (0x0005cb9e) list_medium_line_x2_t3_g2_g2

0x0001,

0xf26a,	// (0x0006a1cf) list_medium_line_x2_t3_g2_g_ParamLimits

0xf26a,	// (0x0006a1cf) list_medium_line_x2_t3_g2_g

0x1c83,	// (0x0005cbe8) list_medium_line_x2_t3_g2_t1_ParamLimits

0x1c83,	// (0x0005cbe8) list_medium_line_x2_t3_g2_t1

0x1c99,	// (0x0005cbfe) list_medium_line_x2_t3_g2_t2_ParamLimits

0x1c99,	// (0x0005cbfe) list_medium_line_x2_t3_g2_t2

0x1c6e,	// (0x0005cbd3) list_medium_line_x2_t3_g2_t3_ParamLimits

0x1c6e,	// (0x0005cbd3) list_medium_line_x2_t3_g2_t3

0x0002,

0xf26f,	// (0x0006a1d4) list_medium_line_x2_t3_g2_t_ParamLimits

0xf26f,	// (0x0006a1d4) list_medium_line_x2_t3_g2_t

0x1c21,	// (0x0005cb86) list_medium_line_x2_t4_g4_g1_ParamLimits

0x1c21,	// (0x0005cb86) list_medium_line_x2_t4_g4_g1

0x1cab,	// (0x0005cc10) list_medium_line_x2_t4_g4_g2_ParamLimits

0x1cab,	// (0x0005cc10) list_medium_line_x2_t4_g4_g2

0x1c2d,	// (0x0005cb92) list_medium_line_x2_t4_g4_g3_ParamLimits

0x1c2d,	// (0x0005cb92) list_medium_line_x2_t4_g4_g3

0x1cb7,	// (0x0005cc1c) list_medium_line_x2_t4_g4_g4_ParamLimits

0x1cb7,	// (0x0005cc1c) list_medium_line_x2_t4_g4_g4

0x0003,

0xf276,	// (0x0006a1db) list_medium_line_x2_t4_g4_g_ParamLimits

0xf276,	// (0x0006a1db) list_medium_line_x2_t4_g4_g

0x1cc3,	// (0x0005cc28) list_medium_line_x2_t4_g4_t1_ParamLimits

0x1cc3,	// (0x0005cc28) list_medium_line_x2_t4_g4_t1

0x1cdd,	// (0x0005cc42) list_medium_line_x2_t4_g4_t2_ParamLimits

0x1cdd,	// (0x0005cc42) list_medium_line_x2_t4_g4_t2

0x1cf2,	// (0x0005cc57) list_medium_line_x2_t4_g4_t3_ParamLimits

0x1cf2,	// (0x0005cc57) list_medium_line_x2_t4_g4_t3

0x1d07,	// (0x0005cc6c) list_medium_line_x2_t4_g4_t4_ParamLimits

0x1d07,	// (0x0005cc6c) list_medium_line_x2_t4_g4_t4

0x0003,

0xf27f,	// (0x0006a1e4) list_medium_line_x2_t4_g4_t_ParamLimits

0xf27f,	// (0x0006a1e4) list_medium_line_x2_t4_g4_t

0x1c21,	// (0x0005cb86) list_medium_line_x2_t2_g4_g1_ParamLimits

0x1c21,	// (0x0005cb86) list_medium_line_x2_t2_g4_g1

0x1cab,	// (0x0005cc10) list_medium_line_x2_t2_g4_g2_ParamLimits

0x1cab,	// (0x0005cc10) list_medium_line_x2_t2_g4_g2

0x1c2d,	// (0x0005cb92) list_medium_line_x2_t2_g4_g3_ParamLimits

0x1c2d,	// (0x0005cb92) list_medium_line_x2_t2_g4_g3

0x1c39,	// (0x0005cb9e) list_medium_line_x2_t2_g4_g4_ParamLimits

0x1c39,	// (0x0005cb9e) list_medium_line_x2_t2_g4_g4

0x0003,

0xf2e6,	// (0x0006a24b) list_medium_line_x2_t2_g4_g_ParamLimits

0xf2e6,	// (0x0006a24b) list_medium_line_x2_t2_g4_g

0x29cd,	// (0x0005d932) list_medium_line_x2_t2_g4_t1_ParamLimits

0x29cd,	// (0x0005d932) list_medium_line_x2_t2_g4_t1

0x1c6e,	// (0x0005cbd3) list_medium_line_x2_t2_g4_t2_ParamLimits

0x1c6e,	// (0x0005cbd3) list_medium_line_x2_t2_g4_t2

0x0001,

0xf2ef,	// (0x0006a254) list_medium_line_x2_t2_g4_t_ParamLimits

0xf2ef,	// (0x0006a254) list_medium_line_x2_t2_g4_t

0x1c21,	// (0x0005cb86) list_medium_line_x2_t2_g3_g1_ParamLimits

0x1c21,	// (0x0005cb86) list_medium_line_x2_t2_g3_g1

0x1c2d,	// (0x0005cb92) list_medium_line_x2_t2_g3_g2_ParamLimits

0x1c2d,	// (0x0005cb92) list_medium_line_x2_t2_g3_g2

0x1c39,	// (0x0005cb9e) list_medium_line_x2_t2_g3_g3_ParamLimits

0x1c39,	// (0x0005cb9e) list_medium_line_x2_t2_g3_g3

0x0002,

0xf25c,	// (0x0006a1c1) list_medium_line_x2_t2_g3_g_ParamLimits

0xf25c,	// (0x0006a1c1) list_medium_line_x2_t2_g3_g

0x29e2,	// (0x0005d947) list_medium_line_x2_t2_g3_t1_ParamLimits

0x29e2,	// (0x0005d947) list_medium_line_x2_t2_g3_t1

0x1c6e,	// (0x0005cbd3) list_medium_line_x2_t2_g3_t2_ParamLimits

0x1c6e,	// (0x0005cbd3) list_medium_line_x2_t2_g3_t2

0x0001,

0xf2f4,	// (0x0006a259) list_medium_line_x2_t2_g3_t_ParamLimits

0xf2f4,	// (0x0006a259) list_medium_line_x2_t2_g3_t

0x2bbf,	// (0x0005db24) main_sp_fs_list_pane_ParamLimits

0x2bbf,	// (0x0005db24) main_sp_fs_list_pane

0x2bcb,	// (0x0005db30) sp_fs_scroll_pane_ParamLimits

0x2bcb,	// (0x0005db30) sp_fs_scroll_pane

0x2bd7,	// (0x0005db3c) list_medium_line_x2_t3_t1

0x2be7,	// (0x0005db4c) list_medium_line_x2_t3_t2

0x2bf5,	// (0x0005db5a) list_medium_line_x2_t3_t3

0x0002,

0xf33f,	// (0x0006a2a4) list_medium_line_x2_t3_t

0x2c03,	// (0x0005db68) list_medium_line_x3_t4_t1

0x2c13,	// (0x0005db78) list_medium_line_x3_t4_t2

0x2c21,	// (0x0005db86) list_medium_line_x3_t4_t3

0x2bf5,	// (0x0005db5a) list_medium_line_x3_t4_t4

0x0003,

0xf346,	// (0x0006a2ab) list_medium_line_x3_t4_t

0x2c2f,	// (0x0005db94) list_medium_line_x4_t5_t1

0x2c3f,	// (0x0005dba4) list_medium_line_x4_t5_t2

0x2c21,	// (0x0005db86) list_medium_line_x4_t5_t3

0x2c4d,	// (0x0005dbb2) list_medium_line_x4_t5_t4

0x2bf5,	// (0x0005db5a) list_medium_line_x4_t5_t5

0x0004,

0xf34f,	// (0x0006a2b4) list_medium_line_x4_t5_t

0x1c21,	// (0x0005cb86) list_medium_line_t4_g4_g1_ParamLimits

0x1c21,	// (0x0005cb86) list_medium_line_t4_g4_g1

0x1cb7,	// (0x0005cc1c) list_medium_line_t4_g4_g2_ParamLimits

0x1cb7,	// (0x0005cc1c) list_medium_line_t4_g4_g2

0x2c5b,	// (0x0005dbc0) list_medium_line_t4_g4_g3_ParamLimits

0x2c5b,	// (0x0005dbc0) list_medium_line_t4_g4_g3

0x1c39,	// (0x0005cb9e) list_medium_line_t4_g4_g4_ParamLimits

0x1c39,	// (0x0005cb9e) list_medium_line_t4_g4_g4

0x0003,

0xf35a,	// (0x0006a2bf) list_medium_line_t4_g4_g_ParamLimits

0xf35a,	// (0x0006a2bf) list_medium_line_t4_g4_g

0x2c67,	// (0x0005dbcc) list_medium_line_t4_g4_t1_ParamLimits

0x2c67,	// (0x0005dbcc) list_medium_line_t4_g4_t1

0x2c7c,	// (0x0005dbe1) list_medium_line_t4_g4_t2_ParamLimits

0x2c7c,	// (0x0005dbe1) list_medium_line_t4_g4_t2

0x2c91,	// (0x0005dbf6) list_medium_line_t4_g4_t3_ParamLimits

0x2c91,	// (0x0005dbf6) list_medium_line_t4_g4_t3

0x1c6e,	// (0x0005cbd3) list_medium_line_t4_g4_t4_ParamLimits

0x1c6e,	// (0x0005cbd3) list_medium_line_t4_g4_t4

0x0003,

0xf363,	// (0x0006a2c8) list_medium_line_t4_g4_t_ParamLimits

0xf363,	// (0x0006a2c8) list_medium_line_t4_g4_t

0x2d44,	// (0x0005dca9) chi_dic_find_pane_g1

0x3ec4,	// (0x0005ee29) main_tport_pane

0x6e06,	// (0x00061d6b) list_medium_line_plain_t1

0x6eb8,	// (0x00061e1d) list_medium_line_t2_g2_g1_ParamLimits

0x6eb8,	// (0x00061e1d) list_medium_line_t2_g2_g1

0x6ec4,	// (0x00061e29) list_medium_line_t2_g2_g2_ParamLimits

0x6ec4,	// (0x00061e29) list_medium_line_t2_g2_g2

0x0001,

0xfa0c,	// (0x0006a971) list_medium_line_t2_g2_g_ParamLimits

0xfa0c,	// (0x0006a971) list_medium_line_t2_g2_g

0x6ed0,	// (0x00061e35) list_medium_line_t2_g2_t1_ParamLimits

0x6ed0,	// (0x00061e35) list_medium_line_t2_g2_t1

0x6eea,	// (0x00061e4f) list_medium_line_t2_g2_t2_ParamLimits

0x6eea,	// (0x00061e4f) list_medium_line_t2_g2_t2

0x0001,

0xfa11,	// (0x0006a976) list_medium_line_t2_g2_t_ParamLimits

0xfa11,	// (0x0006a976) list_medium_line_t2_g2_t

0x7596,	// (0x000624fb) aid_sp_fs_list_icon_a_sm

0x759e,	// (0x00062503) aid_sp_fs_list_icon_d

0x75a6,	// (0x0006250b) aid_sp_fs_text_primary

0x75af,	// (0x00062514) aid_sp_fs_text_secondary

0xce3e,	// (0x00067da3) list_medium_line

0xce3e,	// (0x00067da3) list_medium_line_g2

0xce3e,	// (0x00067da3) list_medium_line_g3

0xce3e,	// (0x00067da3) list_medium_line_plain

0xce3e,	// (0x00067da3) list_medium_line_plain_t2

0xce3e,	// (0x00067da3) list_medium_line_plain_t3

0xce3e,	// (0x00067da3) list_medium_line_right_icon

0xce3e,	// (0x00067da3) list_medium_line_right_iconx2

0xce3e,	// (0x00067da3) list_medium_line_t2

0xce3e,	// (0x00067da3) list_medium_line_t2_g2

0xce3e,	// (0x00067da3) list_medium_line_t2_g3

0xce3e,	// (0x00067da3) list_medium_line_t2_right_icon

0xce3e,	// (0x00067da3) list_medium_line_t2_right_iconx2

0xce3e,	// (0x00067da3) list_medium_line_t3

0xce3e,	// (0x00067da3) list_medium_line_t3_g2

0xce3e,	// (0x00067da3) list_medium_line_t3_g3

0xce3e,	// (0x00067da3) list_medium_line_t3_right_iconx2

0x75b8,	// (0x0006251d) list_medium_line_t4_g4

0x75c1,	// (0x00062526) list_medium_line_x2

0x75c1,	// (0x00062526) list_medium_line_x2_t2_g2

0x75c1,	// (0x00062526) list_medium_line_x2_t2_g3

0x75c1,	// (0x00062526) list_medium_line_x2_t2_g4

0x75c1,	// (0x00062526) list_medium_line_x2_t3

0x75c1,	// (0x00062526) list_medium_line_x2_t3_g2

0x75c1,	// (0x00062526) list_medium_line_x2_t3_g3

0x75c1,	// (0x00062526) list_medium_line_x2_t3_g4

0x75c1,	// (0x00062526) list_medium_line_x2_t4_g2

0x75c1,	// (0x00062526) list_medium_line_x2_t4_g4

0x75ca,	// (0x0006252f) list_medium_line_x3

0x75ca,	// (0x0006252f) list_medium_line_x3_t4

0x75ca,	// (0x0006252f) list_medium_line_x3_t4_g4

0x75b8,	// (0x0006251d) list_medium_line_x4_t4

0x75b8,	// (0x0006251d) list_medium_line_x4_t4_g7

0x75b8,	// (0x0006251d) list_medium_line_x4_t5

0x75d3,	// (0x00062538) list_single_fs_dyc_pane_ParamLimits

0x75d3,	// (0x00062538) list_single_fs_dyc_pane

0x1c21,	// (0x0005cb86) list_medium_line_x4_t4_g7_g1_ParamLimits

0x1c21,	// (0x0005cb86) list_medium_line_x4_t4_g7_g1

0x7d08,	// (0x00062c6d) list_medium_line_x4_t4_g7_g2_ParamLimits

0x7d08,	// (0x00062c6d) list_medium_line_x4_t4_g7_g2

0x7d14,	// (0x00062c79) list_medium_line_x4_t4_g7_g3_ParamLimits

0x7d14,	// (0x00062c79) list_medium_line_x4_t4_g7_g3

0x7d23,	// (0x00062c88) list_medium_line_x4_t4_g7_g4_ParamLimits

0x7d23,	// (0x00062c88) list_medium_line_x4_t4_g7_g4

0x7d2f,	// (0x00062c94) list_medium_line_x4_t4_g7_g5_ParamLimits

0x7d2f,	// (0x00062c94) list_medium_line_x4_t4_g7_g5

0x7d3e,	// (0x00062ca3) list_medium_line_x4_t4_g7_g6_ParamLimits

0x7d3e,	// (0x00062ca3) list_medium_line_x4_t4_g7_g6

0x7d4d,	// (0x00062cb2) list_medium_line_x4_t4_g7_g7_ParamLimits

0x7d4d,	// (0x00062cb2) list_medium_line_x4_t4_g7_g7

0x0006,

0xfb60,	// (0x0006aac5) list_medium_line_x4_t4_g7_g_ParamLimits

0xfb60,	// (0x0006aac5) list_medium_line_x4_t4_g7_g

0x7d59,	// (0x00062cbe) list_medium_line_x4_t4_g7_t1_ParamLimits

0x7d59,	// (0x00062cbe) list_medium_line_x4_t4_g7_t1

0x7d6e,	// (0x00062cd3) list_medium_line_x4_t4_g7_t2_ParamLimits

0x7d6e,	// (0x00062cd3) list_medium_line_x4_t4_g7_t2

0x7d83,	// (0x00062ce8) list_medium_line_x4_t4_g7_t3_ParamLimits

0x7d83,	// (0x00062ce8) list_medium_line_x4_t4_g7_t3

0x7d98,	// (0x00062cfd) list_medium_line_x4_t4_g7_t4_ParamLimits

0x7d98,	// (0x00062cfd) list_medium_line_x4_t4_g7_t4

0x7daa,	// (0x00062d0f) list_medium_line_x4_t4_g7_t5_ParamLimits

0x7daa,	// (0x00062d0f) list_medium_line_x4_t4_g7_t5

0x0004,

0xfb6f,	// (0x0006aad4) list_medium_line_x4_t4_g7_t_ParamLimits

0xfb6f,	// (0x0006aad4) list_medium_line_x4_t4_g7_t

0x7dbc,	// (0x00062d21) list_single_dyc_row_pane_ParamLimits

0x7dbc,	// (0x00062d21) list_single_dyc_row_pane

0x843d,	// (0x000633a2) call5_gesture_pane_ParamLimits

0x843d,	// (0x000633a2) call5_gesture_pane

0x8493,	// (0x000633f8) call5_windows_pane_ParamLimits

0x8493,	// (0x000633f8) call5_windows_pane

0x8539,	// (0x0006349e) call5_swipe_1_pane_cp_ParamLimits

0x8539,	// (0x0006349e) call5_swipe_1_pane_cp

0x8545,	// (0x000634aa) call5_swipe_2_pane_cp_ParamLimits

0x8545,	// (0x000634aa) call5_swipe_2_pane_cp

0xac5f,	// (0x00065bc4) call5_image_pane_cp

0x8551,	// (0x000634b6) popup_call5_audio_first_window_cp_ParamLimits

0x8551,	// (0x000634b6) popup_call5_audio_first_window_cp

0xef97,	// (0x00069efc) call5_swipe_1_pane_g1_cp_ParamLimits

0xef97,	// (0x00069efc) call5_swipe_1_pane_g1_cp

0xefd7,	// (0x00069f3c) call5_swipe_1_pane_g2_cp

0xefb0,	// (0x00069f15) call5_swipe_1_pane_t1_cp_ParamLimits

0xefb0,	// (0x00069f15) call5_swipe_1_pane_t1_cp

0xef97,	// (0x00069efc) call5_swipe_2_pane_g1_cp_ParamLimits

0xef97,	// (0x00069efc) call5_swipe_2_pane_g1_cp

0xefdf,	// (0x00069f44) call5_swipe_2_pane_g2_cp

0xefe7,	// (0x00069f4c) call5_swipe_2_pane_t1_cp_ParamLimits

0xefe7,	// (0x00069f4c) call5_swipe_2_pane_t1_cp

0x9880,	// (0x000647e5) main_sp_fs_email_pane

0xeffc,	// (0x00069f61) main_sp_fs_listscroll_pane_te

0x855d,	// (0x000634c2) popup_sp_fs_action_menu_pane_ParamLimits

0x855d,	// (0x000634c2) popup_sp_fs_action_menu_pane

0xc5d0,	// (0x00067535) bg_sp_fs_ctrlbar_pane_g1

0xf005,	// (0x00069f6a) bg_sp_fs_ctrlbar_ddmenu_pane_g1

0xf00e,	// (0x00069f73) bg_sp_fs_ctrlbar_ddmenu_pane_g2

0xf017,	// (0x00069f7c) bg_sp_fs_ctrlbar_ddmenu_pane_g3

0xc5d0,	// (0x00067535) bg_sp_fs_ctrlbar_ddmenu_pane_g4

0x0003,

0xfbfd,	// (0x0006ab62) bg_sp_fs_ctrlbar_ddmenu_pane_g

0xc3b3,	// (0x00067318) bg_sp_fs_ctrlbar_ddmenu_pane_ParamLimits

0xc3b3,	// (0x00067318) bg_sp_fs_ctrlbar_ddmenu_pane

0xf020,	// (0x00069f85) main_sp_fs_ctrlbar_ddmenu_pane_g1_ParamLimits

0xf020,	// (0x00069f85) main_sp_fs_ctrlbar_ddmenu_pane_g1

0xf02c,	// (0x00069f91) main_sp_fs_ctrlbar_ddmenu_pane_g2_ParamLimits

0xf02c,	// (0x00069f91) main_sp_fs_ctrlbar_ddmenu_pane_g2

0x0001,

0x0b01,	// (0x0005ba66) main_sp_fs_ctrlbar_ddmenu_pane_g_ParamLimits

0x0b01,	// (0x0005ba66) main_sp_fs_ctrlbar_ddmenu_pane_g

0xf038,	// (0x00069f9d) main_sp_fs_ctrlbar_ddmenu_pane_t1_ParamLimits

0xf038,	// (0x00069f9d) main_sp_fs_ctrlbar_ddmenu_pane_t1

0xce47,	// (0x00067dac) list_medium_line_t2_right_icon_g1

0x859d,	// (0x00063502) list_medium_line_t2_right_icon_t1

0x85ad,	// (0x00063512) list_medium_line_t2_right_icon_t2

0x0001,

0xfc06,	// (0x0006ab6b) list_medium_line_t2_right_icon_t

0xc0c8,	// (0x0006702d) bg_sp_fs_ctrlbar_pane_ParamLimits

0xc0c8,	// (0x0006702d) bg_sp_fs_ctrlbar_pane

0x8607,	// (0x0006356c) main_sp_fs_ctrlbar_button_pane_cp01

0x8611,	// (0x00063576) main_sp_fs_ctrlbar_ddmenu_pane

0xce4f,	// (0x00067db4) main_sp_fs_ctrlbar_pane_g1

0xf08a,	// (0x00069fef) main_sp_fs_ctrlbar_pane_g2

0x0001,

0xfc0b,	// (0x0006ab70) main_sp_fs_ctrlbar_pane_g

0xf096,	// (0x00069ffb) main_sp_fs_ctrlbar_pane_t1

0x861b,	// (0x00063580) main_sp_fs_ctrlbar_pane

0x863f,	// (0x000635a4) main_sp_fs_listscroll_pane_te_cp01

0x865f,	// (0x000635c4) popup_sp_fs_action_menu_pane_cp01_ParamLimits

0x865f,	// (0x000635c4) popup_sp_fs_action_menu_pane_cp01

0x9880,	// (0x000647e5) bg_sp_fs_highlight_list_pane_cp01_ParamLimits

0x9880,	// (0x000647e5) bg_sp_fs_highlight_list_pane_cp01

0xce5b,	// (0x00067dc0) sp_fs_action_menu_list_gene_pane_g1_ParamLimits

0xce5b,	// (0x00067dc0) sp_fs_action_menu_list_gene_pane_g1

0xf0ab,	// (0x0006a010) sp_fs_action_menu_list_gene_pane_g2_ParamLimits

0xf0ab,	// (0x0006a010) sp_fs_action_menu_list_gene_pane_g2

0x0001,

0xfc10,	// (0x0006ab75) sp_fs_action_menu_list_gene_pane_g_ParamLimits

0xfc10,	// (0x0006ab75) sp_fs_action_menu_list_gene_pane_g

0xce6a,	// (0x00067dcf) sp_fs_action_menu_list_gene_pane_t1_ParamLimits

0xce6a,	// (0x00067dcf) sp_fs_action_menu_list_gene_pane_t1

0xce82,	// (0x00067de7) sp_fs_action_menu_list_gene_pane_ParamLimits

0xce82,	// (0x00067de7) sp_fs_action_menu_list_gene_pane

0xf0b8,	// (0x0006a01d) popup_sp_fs_action_menu_bg_pane_ParamLimits

0xf0b8,	// (0x0006a01d) popup_sp_fs_action_menu_bg_pane

0xce9f,	// (0x00067e04) sp_fs_action_menu_list_pane_ParamLimits

0xce9f,	// (0x00067e04) sp_fs_action_menu_list_pane

0xf0c6,	// (0x0006a02b) sp_fs_scroll_pane_cp01_ParamLimits

0xf0c6,	// (0x0006a02b) sp_fs_scroll_pane_cp01

0x8679,	// (0x000635de) list_medium_line_plain_t2_t1

0x8689,	// (0x000635ee) list_medium_line_plain_t2_t2

0x0001,

0xfc15,	// (0x0006ab7a) list_medium_line_plain_t2_t

0x8699,	// (0x000635fe) list_medium_line_plain_t3_t1

0x86a9,	// (0x0006360e) list_medium_line_plain_t3_t2

0x86b7,	// (0x0006361c) list_medium_line_plain_t3_t3

0x0002,

0xfc1a,	// (0x0006ab7f) list_medium_line_plain_t3_t

0x1c21,	// (0x0005cb86) list_medium_line_x2_t2_g2_g1_ParamLimits

0x1c21,	// (0x0005cb86) list_medium_line_x2_t2_g2_g1

0x1c39,	// (0x0005cb9e) list_medium_line_x2_t2_g2_g2_ParamLimits

0x1c39,	// (0x0005cb9e) list_medium_line_x2_t2_g2_g2

0x0001,

0xf26a,	// (0x0006a1cf) list_medium_line_x2_t2_g2_g_ParamLimits

0xf26a,	// (0x0006a1cf) list_medium_line_x2_t2_g2_g

0x2c67,	// (0x0005dbcc) list_medium_line_x2_t2_g2_t1_ParamLimits

0x2c67,	// (0x0005dbcc) list_medium_line_x2_t2_g2_t1

0x1c6e,	// (0x0005cbd3) list_medium_line_x2_t2_g2_t2_ParamLimits

0x1c6e,	// (0x0005cbd3) list_medium_line_x2_t2_g2_t2

0x0001,

0xfc21,	// (0x0006ab86) list_medium_line_x2_t2_g2_t_ParamLimits

0xfc21,	// (0x0006ab86) list_medium_line_x2_t2_g2_t

0x1c21,	// (0x0005cb86) list_medium_line_x2_t4_g2_g1_ParamLimits

0x1c21,	// (0x0005cb86) list_medium_line_x2_t4_g2_g1

0xcebd,	// (0x00067e22) list_medium_line_x2_t4_g2_g2_ParamLimits

0xcebd,	// (0x00067e22) list_medium_line_x2_t4_g2_g2

0x0001,

0xfc26,	// (0x0006ab8b) list_medium_line_x2_t4_g2_g_ParamLimits

0xfc26,	// (0x0006ab8b) list_medium_line_x2_t4_g2_g

0x86c5,	// (0x0006362a) list_medium_line_x2_t4_g2_t1_ParamLimits

0x86c5,	// (0x0006362a) list_medium_line_x2_t4_g2_t1

0x86dc,	// (0x00063641) list_medium_line_x2_t4_g2_t2_ParamLimits

0x86dc,	// (0x00063641) list_medium_line_x2_t4_g2_t2

0x86f1,	// (0x00063656) list_medium_line_x2_t4_g2_t3_ParamLimits

0x86f1,	// (0x00063656) list_medium_line_x2_t4_g2_t3

0x1c6e,	// (0x0005cbd3) list_medium_line_x2_t4_g2_t4_ParamLimits

0x1c6e,	// (0x0005cbd3) list_medium_line_x2_t4_g2_t4

0x0003,

0xfc2b,	// (0x0006ab90) list_medium_line_x2_t4_g2_t_ParamLimits

0xfc2b,	// (0x0006ab90) list_medium_line_x2_t4_g2_t

0xcecf,	// (0x00067e34) list_medium_line_t3_right_iconx2_g1

0xce47,	// (0x00067dac) list_medium_line_t3_right_iconx2_g2

0x8703,	// (0x00063668) list_medium_line_t3_right_iconx2_g3

0x0002,

0xfc34,	// (0x0006ab99) list_medium_line_t3_right_iconx2_g

0x870d,	// (0x00063672) list_medium_line_t3_right_iconx2_t1

0x871d,	// (0x00063682) list_medium_line_t3_right_iconx2_t2

0x0001,

0xfc3b,	// (0x0006aba0) list_medium_line_t3_right_iconx2_t

0x1c21,	// (0x0005cb86) list_medium_line_x3_t4_g4_g1_ParamLimits

0x1c21,	// (0x0005cb86) list_medium_line_x3_t4_g4_g1

0x1c2d,	// (0x0005cb92) list_medium_line_x3_t4_g4_g2_ParamLimits

0x1c2d,	// (0x0005cb92) list_medium_line_x3_t4_g4_g2

0x1cb7,	// (0x0005cc1c) list_medium_line_x3_t4_g4_g3_ParamLimits

0x1cb7,	// (0x0005cc1c) list_medium_line_x3_t4_g4_g3

0xced7,	// (0x00067e3c) list_medium_line_x3_t4_g4_g4_ParamLimits

0xced7,	// (0x00067e3c) list_medium_line_x3_t4_g4_g4

0x0003,

0xfc40,	// (0x0006aba5) list_medium_line_x3_t4_g4_g_ParamLimits

0xfc40,	// (0x0006aba5) list_medium_line_x3_t4_g4_g

0x872b,	// (0x00063690) list_medium_line_x3_t4_g4_t1_ParamLimits

0x872b,	// (0x00063690) list_medium_line_x3_t4_g4_t1

0x8742,	// (0x000636a7) list_medium_line_x3_t4_g4_t2_ParamLimits

0x8742,	// (0x000636a7) list_medium_line_x3_t4_g4_t2

0x2c7c,	// (0x0005dbe1) list_medium_line_x3_t4_g4_t3_ParamLimits

0x2c7c,	// (0x0005dbe1) list_medium_line_x3_t4_g4_t3

0xcee3,	// (0x00067e48) list_medium_line_x3_t4_g4_t4_ParamLimits

0xcee3,	// (0x00067e48) list_medium_line_x3_t4_g4_t4

0x0003,

0xfc49,	// (0x0006abae) list_medium_line_x3_t4_g4_t_ParamLimits

0xfc49,	// (0x0006abae) list_medium_line_x3_t4_g4_t

0x875d,	// (0x000636c2) list_single_dyc_row_text_pane_t1_ParamLimits

0x875d,	// (0x000636c2) list_single_dyc_row_text_pane_t1

0x87a6,	// (0x0006370b) list_single_dyc_row_text_pane_t2_ParamLimits

0x87a6,	// (0x0006370b) list_single_dyc_row_text_pane_t2

0xcf00,	// (0x00067e65) list_single_dyc_row_text_pane_t3_ParamLimits

0xcf00,	// (0x00067e65) list_single_dyc_row_text_pane_t3

0x0002,

0xfc52,	// (0x0006abb7) list_single_dyc_row_text_pane_t_ParamLimits

0xfc52,	// (0x0006abb7) list_single_dyc_row_text_pane_t

0xcf12,	// (0x00067e77) list_single_dyc_row_pane_g1_ParamLimits

0xcf12,	// (0x00067e77) list_single_dyc_row_pane_g1

0xcf1e,	// (0x00067e83) list_single_dyc_row_pane_g2_ParamLimits

0xcf1e,	// (0x00067e83) list_single_dyc_row_pane_g2

0xcf2a,	// (0x00067e8f) list_single_dyc_row_pane_g3_ParamLimits

0xcf2a,	// (0x00067e8f) list_single_dyc_row_pane_g3

0xcf36,	// (0x00067e9b) list_single_dyc_row_pane_g4_ParamLimits

0xcf36,	// (0x00067e9b) list_single_dyc_row_pane_g4

0x0003,

0xfc59,	// (0x0006abbe) list_single_dyc_row_pane_g_ParamLimits

0xfc59,	// (0x0006abbe) list_single_dyc_row_pane_g

0xcf42,	// (0x00067ea7) list_single_dyc_row_text_pane_ParamLimits

0xcf42,	// (0x00067ea7) list_single_dyc_row_text_pane

0x0e6c,	// (0x0005bdd1) bg_sp_fs_scroll_pane

0xcf61,	// (0x00067ec6) thumb_sp_fs_scroll_pane

0x6eb8,	// (0x00061e1d) list_medium_line_g1_ParamLimits

0x6eb8,	// (0x00061e1d) list_medium_line_g1

0xcf6a,	// (0x00067ecf) list_medium_line_t1_ParamLimits

0xcf6a,	// (0x00067ecf) list_medium_line_t1

0x1c21,	// (0x0005cb86) list_medium_line_x2_g1_ParamLimits

0x1c21,	// (0x0005cb86) list_medium_line_x2_g1

0x1c2d,	// (0x0005cb92) list_medium_line_x2_g2_ParamLimits

0x1c2d,	// (0x0005cb92) list_medium_line_x2_g2

0x0001,

0xfc62,	// (0x0006abc7) list_medium_line_x2_g_ParamLimits

0xfc62,	// (0x0006abc7) list_medium_line_x2_g

0xcf7f,	// (0x00067ee4) list_medium_line_x2_t1_ParamLimits

0xcf7f,	// (0x00067ee4) list_medium_line_x2_t1

0x1c21,	// (0x0005cb86) list_medium_line_x3_g1_ParamLimits

0x1c21,	// (0x0005cb86) list_medium_line_x3_g1

0x1c2d,	// (0x0005cb92) list_medium_line_x3_g2_ParamLimits

0x1c2d,	// (0x0005cb92) list_medium_line_x3_g2

0x0001,

0xfc62,	// (0x0006abc7) list_medium_line_x3_g_ParamLimits

0xfc62,	// (0x0006abc7) list_medium_line_x3_g

0xcf7f,	// (0x00067ee4) list_medium_line_x3_t1_ParamLimits

0xcf7f,	// (0x00067ee4) list_medium_line_x3_t1

0xcf95,	// (0x00067efa) thumb_sp_fs_scroll_pane_g1

0xcf9e,	// (0x00067f03) thumb_sp_fs_scroll_pane_g2

0xcfa7,	// (0x00067f0c) thumb_sp_fs_scroll_pane_g3

0x0002,

0xfc67,	// (0x0006abcc) thumb_sp_fs_scroll_pane_g

0xcf95,	// (0x00067efa) bg_sp_fs_scroll_pane_g1

0xcf9e,	// (0x00067f03) bg_sp_fs_scroll_pane_g2

0xcfa7,	// (0x00067f0c) bg_sp_fs_scroll_pane_g3

0x0002,

0xfc67,	// (0x0006abcc) bg_sp_fs_scroll_pane_g

0x1c21,	// (0x0005cb86) list_medium_line_x2_t3_g4_g1_ParamLimits

0x1c21,	// (0x0005cb86) list_medium_line_x2_t3_g4_g1

0x1cab,	// (0x0005cc10) list_medium_line_x2_t3_g4_g2_ParamLimits

0x1cab,	// (0x0005cc10) list_medium_line_x2_t3_g4_g2

0x1c2d,	// (0x0005cb92) list_medium_line_x2_t3_g4_g3_ParamLimits

0x1c2d,	// (0x0005cb92) list_medium_line_x2_t3_g4_g3

0x1c39,	// (0x0005cb9e) list_medium_line_x2_t3_g4_g4_ParamLimits

0x1c39,	// (0x0005cb9e) list_medium_line_x2_t3_g4_g4

0x0003,

0xf2e6,	// (0x0006a24b) list_medium_line_x2_t3_g4_g_ParamLimits

0xf2e6,	// (0x0006a24b) list_medium_line_x2_t3_g4_g

0x8800,	// (0x00063765) list_medium_line_x2_t3_g4_t1_ParamLimits

0x8800,	// (0x00063765) list_medium_line_x2_t3_g4_t1

0x881a,	// (0x0006377f) list_medium_line_x2_t3_g4_t2_ParamLimits

0x881a,	// (0x0006377f) list_medium_line_x2_t3_g4_t2

0x1c6e,	// (0x0005cbd3) list_medium_line_x2_t3_g4_t3_ParamLimits

0x1c6e,	// (0x0005cbd3) list_medium_line_x2_t3_g4_t3

0x0002,

0xfc6e,	// (0x0006abd3) list_medium_line_x2_t3_g4_t_ParamLimits

0xfc6e,	// (0x0006abd3) list_medium_line_x2_t3_g4_t

0x6eb8,	// (0x00061e1d) list_medium_line_g2_g1_ParamLimits

0x6eb8,	// (0x00061e1d) list_medium_line_g2_g1

0x6ec4,	// (0x00061e29) list_medium_line_g2_g2_ParamLimits

0x6ec4,	// (0x00061e29) list_medium_line_g2_g2

0x0001,

0xfa0c,	// (0x0006a971) list_medium_line_g2_g_ParamLimits

0xfa0c,	// (0x0006a971) list_medium_line_g2_g

0xcfb0,	// (0x00067f15) list_medium_line_g2_t1_ParamLimits

0xcfb0,	// (0x00067f15) list_medium_line_g2_t1

0x6eb8,	// (0x00061e1d) list_medium_line_t3_g2_g1_ParamLimits

0x6eb8,	// (0x00061e1d) list_medium_line_t3_g2_g1

0x6ec4,	// (0x00061e29) list_medium_line_t3_g2_g2_ParamLimits

0x6ec4,	// (0x00061e29) list_medium_line_t3_g2_g2

0x0001,

0xfa0c,	// (0x0006a971) list_medium_line_t3_g2_g_ParamLimits

0xfa0c,	// (0x0006a971) list_medium_line_t3_g2_g

0x8833,	// (0x00063798) list_medium_line_t3_g2_t1_ParamLimits

0x8833,	// (0x00063798) list_medium_line_t3_g2_t1

0x884a,	// (0x000637af) list_medium_line_t3_g2_t2_ParamLimits

0x884a,	// (0x000637af) list_medium_line_t3_g2_t2

0x885f,	// (0x000637c4) list_medium_line_t3_g2_t3_ParamLimits

0x885f,	// (0x000637c4) list_medium_line_t3_g2_t3

0x0002,

0xfc75,	// (0x0006abda) list_medium_line_t3_g2_t_ParamLimits

0xfc75,	// (0x0006abda) list_medium_line_t3_g2_t

0xce47,	// (0x00067dac) list_medium_line_right_icon_g1

0xcfc5,	// (0x00067f2a) list_medium_line_right_icon_t1

0x6eb8,	// (0x00061e1d) list_medium_line_t2_g1_ParamLimits

0x6eb8,	// (0x00061e1d) list_medium_line_t2_g1

0x8878,	// (0x000637dd) list_medium_line_t2_t1_ParamLimits

0x8878,	// (0x000637dd) list_medium_line_t2_t1

0x888f,	// (0x000637f4) list_medium_line_t2_t2_ParamLimits

0x888f,	// (0x000637f4) list_medium_line_t2_t2

0x0001,

0xfc7c,	// (0x0006abe1) list_medium_line_t2_t_ParamLimits

0xfc7c,	// (0x0006abe1) list_medium_line_t2_t

0x6eb8,	// (0x00061e1d) list_medium_line_t3_g1_ParamLimits

0x6eb8,	// (0x00061e1d) list_medium_line_t3_g1

0x88a3,	// (0x00063808) list_medium_line_t3_t1_ParamLimits

0x88a3,	// (0x00063808) list_medium_line_t3_t1

0x88ba,	// (0x0006381f) list_medium_line_t3_t2_ParamLimits

0x88ba,	// (0x0006381f) list_medium_line_t3_t2

0x88cf,	// (0x00063834) list_medium_line_t3_t3_ParamLimits

0x88cf,	// (0x00063834) list_medium_line_t3_t3

0x0002,

0xfc81,	// (0x0006abe6) list_medium_line_t3_t_ParamLimits

0xfc81,	// (0x0006abe6) list_medium_line_t3_t

0x6eb8,	// (0x00061e1d) list_medium_line_g3_g1_ParamLimits

0x6eb8,	// (0x00061e1d) list_medium_line_g3_g1

0xcfd3,	// (0x00067f38) list_medium_line_g3_g2_ParamLimits

0xcfd3,	// (0x00067f38) list_medium_line_g3_g2

0x6ec4,	// (0x00061e29) list_medium_line_g3_g3_ParamLimits

0x6ec4,	// (0x00061e29) list_medium_line_g3_g3

0x0002,

0xfc88,	// (0x0006abed) list_medium_line_g3_g_ParamLimits

0xfc88,	// (0x0006abed) list_medium_line_g3_g

0xcfdf,	// (0x00067f44) list_medium_line_g3_t1_ParamLimits

0xcfdf,	// (0x00067f44) list_medium_line_g3_t1

0x6eb8,	// (0x00061e1d) list_medium_line_t2_g3_g1_ParamLimits

0x6eb8,	// (0x00061e1d) list_medium_line_t2_g3_g1

0xcfd3,	// (0x00067f38) list_medium_line_t2_g3_g2_ParamLimits

0xcfd3,	// (0x00067f38) list_medium_line_t2_g3_g2

0x6ec4,	// (0x00061e29) list_medium_line_t2_g3_g3_ParamLimits

0x6ec4,	// (0x00061e29) list_medium_line_t2_g3_g3

0x0002,

0xfc88,	// (0x0006abed) list_medium_line_t2_g3_g_ParamLimits

0xfc88,	// (0x0006abed) list_medium_line_t2_g3_g

0x88e1,	// (0x00063846) list_medium_line_t2_g3_t1_ParamLimits

0x88e1,	// (0x00063846) list_medium_line_t2_g3_t1

0x88fb,	// (0x00063860) list_medium_line_t2_g3_t2_ParamLimits

0x88fb,	// (0x00063860) list_medium_line_t2_g3_t2

0x0001,

0xfc8f,	// (0x0006abf4) list_medium_line_t2_g3_t_ParamLimits

0xfc8f,	// (0x0006abf4) list_medium_line_t2_g3_t

0x6eb8,	// (0x00061e1d) list_medium_line_t3_g3_g1_ParamLimits

0x6eb8,	// (0x00061e1d) list_medium_line_t3_g3_g1

0xcfd3,	// (0x00067f38) list_medium_line_t3_g3_g2_ParamLimits

0xcfd3,	// (0x00067f38) list_medium_line_t3_g3_g2

0x6ec4,	// (0x00061e29) list_medium_line_t3_g3_g3_ParamLimits

0x6ec4,	// (0x00061e29) list_medium_line_t3_g3_g3

0x0002,

0xfc88,	// (0x0006abed) list_medium_line_t3_g3_g_ParamLimits

0xfc88,	// (0x0006abed) list_medium_line_t3_g3_g

0x8916,	// (0x0006387b) list_medium_line_t3_g3_t1_ParamLimits

0x8916,	// (0x0006387b) list_medium_line_t3_g3_t1

0x892a,	// (0x0006388f) list_medium_line_t3_g3_t2_ParamLimits

0x892a,	// (0x0006388f) list_medium_line_t3_g3_t2

0x893c,	// (0x000638a1) list_medium_line_t3_g3_t3_ParamLimits

0x893c,	// (0x000638a1) list_medium_line_t3_g3_t3

0x0002,

0xfc94,	// (0x0006abf9) list_medium_line_t3_g3_t_ParamLimits

0xfc94,	// (0x0006abf9) list_medium_line_t3_g3_t

0xcecf,	// (0x00067e34) list_medium_line_right_iconx2_g1

0xce47,	// (0x00067dac) list_medium_line_right_iconx2_g2

0x0001,

0xfc9b,	// (0x0006ac00) list_medium_line_right_iconx2_g

0xcff4,	// (0x00067f59) list_medium_line_right_iconx2_t1

0xcecf,	// (0x00067e34) list_medium_line_t2_right_iconx2_g1

0xce47,	// (0x00067dac) list_medium_line_t2_right_iconx2_g2

0x0001,

0xfc9b,	// (0x0006ac00) list_medium_line_t2_right_iconx2_g

0x8950,	// (0x000638b5) list_medium_line_t2_right_iconx2_t1

0x8960,	// (0x000638c5) list_medium_line_t2_right_iconx2_t2

0x0001,

0xfca0,	// (0x0006ac05) list_medium_line_t2_right_iconx2_t

0xd002,	// (0x00067f67) list_medium_line_x4_t4_t1

0x8972,	// (0x000638d7) list_medium_line_x4_t4_t2

0x8982,	// (0x000638e7) list_medium_line_x4_t4_t3

0x8992,	// (0x000638f7) list_medium_line_x4_t4_t4

0x0003,

0xfca5,	// (0x0006ac0a) list_medium_line_x4_t4_t

0x89e5,	// (0x0006394a) tport_appsw_pane_ParamLimits

0x89e5,	// (0x0006394a) tport_appsw_pane

0x89f6,	// (0x0006395b) tport_contact_pane_ParamLimits

0x89f6,	// (0x0006395b) tport_contact_pane

0x8a0f,	// (0x00063974) tport_listscroll_pane_ParamLimits

0x8a0f,	// (0x00063974) tport_listscroll_pane

0x8a2a,	// (0x0006398f) cell_tport_appsw_pane_ParamLimits

0x8a2a,	// (0x0006398f) cell_tport_appsw_pane

0xe02c,	// (0x00068f91) tport_appsw_pane_g1_ParamLimits

0xe02c,	// (0x00068f91) tport_appsw_pane_g1

0xd010,	// (0x00067f75) tport_contact_pane_g1

0xd019,	// (0x00067f7e) tport_contact_pane_t1

0xd027,	// (0x00067f8c) tport_contact_pane_t2

0x0001,

0xfcae,	// (0x0006ac13) tport_contact_pane_t

0xd035,	// (0x00067f9a) list_tport_pane

0xd03e,	// (0x00067fa3) scroll_pane_cp_030

0xd04f,	// (0x00067fb4) cell_tport_appsw_pane_g1

0xd05f,	// (0x00067fc4) cell_tport_appsw_pane_t1

0x0e6c,	// (0x0005bdd1) grid_highlight_pane_cp019

0x8a6a,	// (0x000639cf) list_tport_double_graphic_pane_ParamLimits

0x8a6a,	// (0x000639cf) list_tport_double_graphic_pane

0x9880,	// (0x000647e5) list_highlight_pane_cp023_ParamLimits

0x9880,	// (0x000647e5) list_highlight_pane_cp023

0x8a77,	// (0x000639dc) list_tport_double_graphic_pane_g1_ParamLimits

0x8a77,	// (0x000639dc) list_tport_double_graphic_pane_g1

0x8a84,	// (0x000639e9) list_tport_double_graphic_pane_t1_ParamLimits

0x8a84,	// (0x000639e9) list_tport_double_graphic_pane_t1

0x8a99,	// (0x000639fe) list_tport_double_graphic_pane_t2_ParamLimits

0x8a99,	// (0x000639fe) list_tport_double_graphic_pane_t2

0x0001,

0xfcba,	// (0x0006ac1f) list_tport_double_graphic_pane_t_ParamLimits

0xfcba,	// (0x0006ac1f) list_tport_double_graphic_pane_t

0x0e6c,	// (0x0005bdd1) main_cale_note_pane

0x660d,	// (0x00061572) cell_vitu2_function_top_wide_pane_cp01_ParamLimits

0x660d,	// (0x00061572) cell_vitu2_function_top_wide_pane_cp01

0x80f2,	// (0x00063057) wait_bar_pane_cp05_ParamLimits

0x0e6c,	// (0x0005bdd1) listscroll_cmail_pane

0xd075,	// (0x00067fda) list_cmail_pane

0x8ab5,	// (0x00063a1a) list_cmail_body_pane

0x8aca,	// (0x00063a2f) list_single_cmail_header_caption_pane

0x8ae3,	// (0x00063a48) list_single_cmail_header_detail_pane_ParamLimits

0x8ae3,	// (0x00063a48) list_single_cmail_header_detail_pane

0x8b0c,	// (0x00063a71) list_single_cmail_header_caption_pane_t1

0x8b1c,	// (0x00063a81) list_single_cmail_header_detail_pane_g1_ParamLimits

0x8b1c,	// (0x00063a81) list_single_cmail_header_detail_pane_g1

0xd095,	// (0x00067ffa) list_single_cmail_header_detail_pane_g2_ParamLimits

0xd095,	// (0x00067ffa) list_single_cmail_header_detail_pane_g2

0x0002,

0xfcbf,	// (0x0006ac24) list_single_cmail_header_detail_pane_g_ParamLimits

0xfcbf,	// (0x0006ac24) list_single_cmail_header_detail_pane_g

0xd0ae,	// (0x00068013) list_single_cmail_header_detail_pane_t1_ParamLimits

0xd0ae,	// (0x00068013) list_single_cmail_header_detail_pane_t1

0xd0e0,	// (0x00068045) list_single_cmail_header_editor_pane_bg_ParamLimits

0xd0e0,	// (0x00068045) list_single_cmail_header_editor_pane_bg

0xd0f2,	// (0x00068057) list_cmail_body_pane_g1

0xd0fb,	// (0x00068060) list_cmail_body_pane_t1

0xe04c,	// (0x00068fb1) list_single_cmail_header_editor_pane_bg_g1

0xa54c,	// (0x000654b1) list_single_cmail_header_editor_pane_bg_g1_copy1

0xe05c,	// (0x00068fc1) list_single_cmail_header_editor_pane_bg_g1_copy2

0xe054,	// (0x00068fb9) list_single_cmail_header_editor_pane_bg_g1_copy3

0xe270,	// (0x000691d5) list_single_cmail_header_editor_pane_bg_g1_copy4

0xe07c,	// (0x00068fe1) list_single_cmail_header_editor_pane_bg_g1_copy4_copy1

0xe06c,	// (0x00068fd1) list_single_cmail_header_editor_pane_bg_g1_copy4_copy2

0xe074,	// (0x00068fd9) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3

0xa52c,	// (0x00065491) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3_copy1

0x8b5a,	// (0x00063abf) calenote_gesture_pane_ParamLimits

0x8b5a,	// (0x00063abf) calenote_gesture_pane

0x8b7a,	// (0x00063adf) calenote_window_pane_ParamLimits

0x8b7a,	// (0x00063adf) calenote_window_pane

0xd109,	// (0x0006806e) popup_note_window_cp01

0x8b96,	// (0x00063afb) calenote_swipe_1_pane_ParamLimits

0x8b96,	// (0x00063afb) calenote_swipe_1_pane

0x8545,	// (0x000634aa) calenote_swipe_2_pane_ParamLimits

0x8545,	// (0x000634aa) calenote_swipe_2_pane

0xef97,	// (0x00069efc) calenote_swipe_1_pane_g1_ParamLimits

0xef97,	// (0x00069efc) calenote_swipe_1_pane_g1

0xefa4,	// (0x00069f09) calenote_swipe_1_pane_g2_ParamLimits

0xefa4,	// (0x00069f09) calenote_swipe_1_pane_g2

0x0001,

0x0aee,	// (0x0005ba53) calenote_swipe_1_pane_g_ParamLimits

0x0aee,	// (0x0005ba53) calenote_swipe_1_pane_g

0xd11b,	// (0x00068080) calenote_swipe_1_pane_t1_ParamLimits

0xd11b,	// (0x00068080) calenote_swipe_1_pane_t1

0xef97,	// (0x00069efc) calenote_swipe_2_pane_g1_ParamLimits

0xef97,	// (0x00069efc) calenote_swipe_2_pane_g1

0xd13a,	// (0x0006809f) calenote_swipe_2_pane_g2_ParamLimits

0xd13a,	// (0x0006809f) calenote_swipe_2_pane_g2

0x0001,

0xfccb,	// (0x0006ac30) calenote_swipe_2_pane_g_ParamLimits

0xfccb,	// (0x0006ac30) calenote_swipe_2_pane_g

0xd146,	// (0x000680ab) calenote_swipe_2_pane_t1_ParamLimits

0xd146,	// (0x000680ab) calenote_swipe_2_pane_t1

0x0e6c,	// (0x0005bdd1) main_mup_navstr_pane

0x52a4,	// (0x00060209) main_mup3_pane_t7_ParamLimits

0x52a4,	// (0x00060209) main_mup3_pane_t7

0xdb04,	// (0x00068a69) main_mp4_pane_g6_ParamLimits

0xdb04,	// (0x00068a69) main_mp4_pane_g6

0xdca8,	// (0x00068c0d) main_image3_pane_t4_ParamLimits

0xdca8,	// (0x00068c0d) main_image3_pane_t4

0x8bab,	// (0x00063b10) popup_navstr_preview_pane_ParamLimits

0x8bab,	// (0x00063b10) popup_navstr_preview_pane

0x8bbf,	// (0x00063b24) scroll_navstr_pane_ParamLimits

0x8bbf,	// (0x00063b24) scroll_navstr_pane

0x0e6c,	// (0x0005bdd1) bg_popup_preview_window_pane_cp04

0xd16d,	// (0x000680d2) popup_navstr_preview_pane_t1

0x8bd3,	// (0x00063b38) scroll_navstr_pane_g1_ParamLimits

0x8bd3,	// (0x00063b38) scroll_navstr_pane_g1

0x8be7,	// (0x00063b4c) scroll_navstr_pane_t1_ParamLimits

0x8be7,	// (0x00063b4c) scroll_navstr_pane_t1

0xd112,	// (0x00068077) bg_button_pane_cp014

0xd112,	// (0x00068077) bg_button_pane_cp030

0x83e3,	// (0x00063348) list_double_fisheye_pane_g4_ParamLimits

0x83e3,	// (0x00063348) list_double_fisheye_pane_g4

0x83ef,	// (0x00063354) list_double_fisheye_pane_g5_ParamLimits

0x83ef,	// (0x00063354) list_double_fisheye_pane_g5

0xd07d,	// (0x00067fe2) sp_fs_scroll_pane_cp03

0xce4f,	// (0x00067db4) main_sp_fs_ctrlbar_pane_g1_ParamLimits

0xf08a,	// (0x00069fef) main_sp_fs_ctrlbar_pane_g2_ParamLimits

0xfc0b,	// (0x0006ab70) main_sp_fs_ctrlbar_pane_g_ParamLimits

0xf096,	// (0x00069ffb) main_sp_fs_ctrlbar_pane_t1_ParamLimits

0x8aab,	// (0x00063a10) sp_fs_scroll_pane_cp02

0xa1d8,	// (0x0006513d) popup_sp_fs_calendar_preview_list_single_pane_ParamLimits

0xa1d8,	// (0x0006513d) popup_sp_fs_calendar_preview_list_single_pane

0x0e6c,	// (0x0005bdd1) main_cam6_pano_pane

0x9880,	// (0x000647e5) main_mup3_pane_ParamLimits

0x0e6c,	// (0x0005bdd1) main_phacti_pane

0x7fc5,	// (0x00062f2a) bg_button_pane_cp11

0x7fdf,	// (0x00062f44) main_mobtv_info_pane_g2_ParamLimits

0x7fdf,	// (0x00062f44) main_mobtv_info_pane_g2

0x0001,

0xfbaa,	// (0x0006ab0f) main_mobtv_info_pane_g_ParamLimits

0xfbaa,	// (0x0006ab0f) main_mobtv_info_pane_g

0x81ba,	// (0x0006311f) sc_clock_pane_t5_ParamLimits

0x81ba,	// (0x0006311f) sc_clock_pane_t5

0x823f,	// (0x000631a4) main_radioblah_pane_g1_ParamLimits

0xeee3,	// (0x00069e48) main_radioblah_pane_t3_ParamLimits

0xeee3,	// (0x00069e48) main_radioblah_pane_t3

0xeefb,	// (0x00069e60) main_radioblah_pane_t4_ParamLimits

0xeefb,	// (0x00069e60) main_radioblah_pane_t4

0x8267,	// (0x000631cc) main_radioblah_text_pane_ParamLimits

0x8267,	// (0x000631cc) main_radioblah_text_pane

0x8279,	// (0x000631de) main_radioblah_info_pane_g1_ParamLimits

0x8314,	// (0x00063279) main_radioblah_info_pane_t4_ParamLimits

0x8314,	// (0x00063279) main_radioblah_info_pane_t4

0x9880,	// (0x000647e5) main_sp_fs_calendar_pane

0x8bfd,	// (0x00063b62) main_phacti_pane_g1

0x8c05,	// (0x00063b6a) phacti_note_pane_ParamLimits

0x8c05,	// (0x00063b6a) phacti_note_pane

0xd184,	// (0x000680e9) phacti_term_pane_ParamLimits

0xd184,	// (0x000680e9) phacti_term_pane

0xd199,	// (0x000680fe) phacti_note_pane_t1_ParamLimits

0xd199,	// (0x000680fe) phacti_note_pane_t1

0xd1b0,	// (0x00068115) phacti_term_pane_g1

0xd1b8,	// (0x0006811d) phacti_term_pane_t1_ParamLimits

0xd1b8,	// (0x0006811d) phacti_term_pane_t1

0xd1e2,	// (0x00068147) popup_sp_fs_calendar_preview_list_single_pane_g1

0xd1ea,	// (0x0006814f) popup_sp_fs_calendar_preview_list_single_pane_g2

0x0001,

0xfcd5,	// (0x0006ac3a) popup_sp_fs_calendar_preview_list_single_pane_g

0xd1f2,	// (0x00068157) popup_sp_fs_calendar_preview_list_single_pane_t1_ParamLimits

0xd1f2,	// (0x00068157) popup_sp_fs_calendar_preview_list_single_pane_t1

0xd208,	// (0x0006816d) aid_popup_sp_fs_bg_corner_pane

0xc5d0,	// (0x00067535) popup_sp_fs_calendar_preview_bg_pane_g1

0x0e6c,	// (0x0005bdd1) popup_sp_fs_calendar_preview_bg_pane

0xd210,	// (0x00068175) popup_sp_fs_calendar_preview_list_pane

0x9880,	// (0x000647e5) bg_main_sp_fs_cale_pane_ParamLimits

0x9880,	// (0x000647e5) bg_main_sp_fs_cale_pane

0xd218,	// (0x0006817d) listscroll_cale_mrui_pane_ParamLimits

0xd218,	// (0x0006817d) listscroll_cale_mrui_pane

0xd22c,	// (0x00068191) listscroll_sp_fs_schedule_track_pane

0xd235,	// (0x0006819a) main_sp_fs_ctrlbar_pane_cp01_ParamLimits

0xd235,	// (0x0006819a) main_sp_fs_ctrlbar_pane_cp01

0xd246,	// (0x000681ab) main_sp_fs_ribbon_pane

0xd24e,	// (0x000681b3) popup_sp_fs_cale_preview_window

0x8c60,	// (0x00063bc5) list_single_sp_fs_schedule_track_pane_ParamLimits

0x8c60,	// (0x00063bc5) list_single_sp_fs_schedule_track_pane

0x9880,	// (0x000647e5) bg_sp_fs_highlight_list_pane_cp03_ParamLimits

0x9880,	// (0x000647e5) bg_sp_fs_highlight_list_pane_cp03

0x8c75,	// (0x00063bda) list_single_sp_fs_schedule_track_pane_g1_ParamLimits

0x8c75,	// (0x00063bda) list_single_sp_fs_schedule_track_pane_g1

0x8c81,	// (0x00063be6) list_single_sp_fs_schedule_track_pane_g2_ParamLimits

0x8c81,	// (0x00063be6) list_single_sp_fs_schedule_track_pane_g2

0x0001,

0xfcda,	// (0x0006ac3f) list_single_sp_fs_schedule_track_pane_g_ParamLimits

0xfcda,	// (0x0006ac3f) list_single_sp_fs_schedule_track_pane_g

0x8c8d,	// (0x00063bf2) list_single_sp_fs_schedule_track_pane_t1_ParamLimits

0x8c8d,	// (0x00063bf2) list_single_sp_fs_schedule_track_pane_t1

0x8ca7,	// (0x00063c0c) sp_fs_schedule_track_pane_ParamLimits

0x8ca7,	// (0x00063c0c) sp_fs_schedule_track_pane

0xd260,	// (0x000681c5) sp_fs_schedule_track_pane_g1

0xd268,	// (0x000681cd) sp_fs_schedule_track_pane_g2

0xd270,	// (0x000681d5) sp_fs_schedule_track_pane_g3

0xd278,	// (0x000681dd) sp_fs_schedule_track_pane_g4

0xd280,	// (0x000681e5) sp_fs_schedule_track_pane_g5

0x0004,

0xfcdf,	// (0x0006ac44) sp_fs_schedule_track_pane_g

0xe04c,	// (0x00068fb1) bg_sp_fs_schedule_viewer_highlight_g1

0xa54c,	// (0x000654b1) bg_sp_fs_schedule_viewer_highlight_g2

0xe054,	// (0x00068fb9) bg_sp_fs_schedule_viewer_highlight_g3

0xe05c,	// (0x00068fc1) bg_sp_fs_schedule_viewer_highlight_g4

0xe270,	// (0x000691d5) bg_sp_fs_schedule_viewer_highlight_g5

0xe06c,	// (0x00068fd1) bg_sp_fs_schedule_viewer_highlight_g6

0xe074,	// (0x00068fd9) bg_sp_fs_schedule_viewer_highlight_g7

0xe07c,	// (0x00068fe1) bg_sp_fs_schedule_viewer_highlight_g8

0xa52c,	// (0x00065491) bg_sp_fs_schedule_viewer_highlight_g9

0x0008,

0xfcea,	// (0x0006ac4f) bg_sp_fs_schedule_viewer_highlight_g

0x0e6c,	// (0x0005bdd1) bg_main_sp_fs_ribbon_pane

0x8cb8,	// (0x00063c1d) main_sp_fs_ribbon_pane_g1

0xd288,	// (0x000681ed) main_sp_fs_ribbon_pane_t1

0x8cc1,	// (0x00063c26) main_sp_fs_ribbon_pane_t2

0xd297,	// (0x000681fc) main_sp_fs_ribbon_pane_t3

0x0002,

0xfcfd,	// (0x0006ac62) main_sp_fs_ribbon_pane_t

0xd2a6,	// (0x0006820b) main_sp_fs_ribbon_scheduler_pane

0xd2ae,	// (0x00068213) bg_main_sp_fs_ribbon_pane_g1

0xd2b7,	// (0x0006821c) bg_main_sp_fs_ribbon_pane_g2

0xd2c0,	// (0x00068225) bg_main_sp_fs_ribbon_pane_g3

0x0002,

0xfd04,	// (0x0006ac69) bg_main_sp_fs_ribbon_pane_g

0xd2c8,	// (0x0006822d) main_sp_fs_ribbon_scheduler_pane_g1

0xd2d1,	// (0x00068236) main_sp_fs_ribbon_scheduler_pane_g2

0xd2da,	// (0x0006823f) main_sp_fs_ribbon_scheduler_pane_g3

0x0002,

0xfd0b,	// (0x0006ac70) main_sp_fs_ribbon_scheduler_pane_g

0xd2e3,	// (0x00068248) list_cale_mrui_pane

0x8cd0,	// (0x00063c35) sp_fs_scroll_pane_cp07_ParamLimits

0x8cd0,	// (0x00063c35) sp_fs_scroll_pane_cp07

0x8ce4,	// (0x00063c49) bg_sp_fs_schedule_viewer_highlight_ParamLimits

0x8ce4,	// (0x00063c49) bg_sp_fs_schedule_viewer_highlight

0xd2ec,	// (0x00068251) list_single_sp_fs_schedule_track_pane_cp01

0xd2f4,	// (0x00068259) list_sp_fs_schedule_track_pane

0xd2fc,	// (0x00068261) sp_fs_scroll_pane_cp06_ParamLimits

0xd2fc,	// (0x00068261) sp_fs_scroll_pane_cp06

0xc5d0,	// (0x00067535) bgmain_sp_fs_calendar_pane_g1

0x8cf4,	// (0x00063c59) list_single_cale_mrui_pane_ParamLimits

0x8cf4,	// (0x00063c59) list_single_cale_mrui_pane

0xd30e,	// (0x00068273) list_single_cale_mrui_row_pane_ParamLimits

0xd30e,	// (0x00068273) list_single_cale_mrui_row_pane

0xd31b,	// (0x00068280) list_single_cale_mrui_row_pane_g1_ParamLimits

0xd31b,	// (0x00068280) list_single_cale_mrui_row_pane_g1

0xd353,	// (0x000682b8) list_single_cale_mrui_row_pane_t1_ParamLimits

0xd353,	// (0x000682b8) list_single_cale_mrui_row_pane_t1

0x8d16,	// (0x00063c7b) list_single_cale_mrui_row_pane_t2_ParamLimits

0x8d16,	// (0x00063c7b) list_single_cale_mrui_row_pane_t2

0xd365,	// (0x000682ca) list_single_cale_mrui_row_pane_t3_ParamLimits

0xd365,	// (0x000682ca) list_single_cale_mrui_row_pane_t3

0xd394,	// (0x000682f9) list_single_cale_mrui_row_pane_t4_ParamLimits

0xd394,	// (0x000682f9) list_single_cale_mrui_row_pane_t4

0x0003,

0xfd17,	// (0x0006ac7c) list_single_cale_mrui_row_pane_t_ParamLimits

0xfd17,	// (0x0006ac7c) list_single_cale_mrui_row_pane_t

0x8d7e,	// (0x00063ce3) list_single_cmail_header_editor_pane_bg_cp01_ParamLimits

0x8d7e,	// (0x00063ce3) list_single_cmail_header_editor_pane_bg_cp01

0x8da4,	// (0x00063d09) list_single_cmail_header_editor_pane_bg_cp02_ParamLimits

0x8da4,	// (0x00063d09) list_single_cmail_header_editor_pane_bg_cp02

0x8dc4,	// (0x00063d29) main_radioblah_text_pane_t1_ParamLimits

0x8dc4,	// (0x00063d29) main_radioblah_text_pane_t1

0xd3c3,	// (0x00068328) cam6_indi_pane_cp01

0xd3cb,	// (0x00068330) cam6_mode_pane_cp01

0xd3d3,	// (0x00068338) cam6_pano_pane

0xd3dc,	// (0x00068341) cam6_zoom_pane_cp01

0xd3e4,	// (0x00068349) cam6_pano_image_pane

0xd3ef,	// (0x00068354) cam6_pano_pane_g1

0xec5b,	// (0x00069bc0) cam6_pano_pane_g2

0xd3f8,	// (0x0006835d) cam6_pano_pane_g3

0xd401,	// (0x00068366) cam6_pano_pane_g4

0xcb56,	// (0x00067abb) cam6_pano_pane_g5

0xd40a,	// (0x0006836f) cam6_pano_pane_g6

0xd414,	// (0x00068379) cam6_pano_pane_g7

0xd41c,	// (0x00068381) cam6_pano_pane_g8

0xd425,	// (0x0006838a) cam6_pano_pane_g9

0x0008,

0xfd20,	// (0x0006ac85) cam6_pano_pane_g

0x0e6c,	// (0x0005bdd1) main_browser_tag_pane

0xd165,	// (0x000680ca) grid_navstr_albumart_pane

0xd430,	// (0x00068395) cell_navstr_albumart_pane_ParamLimits

0xd430,	// (0x00068395) cell_navstr_albumart_pane

0xade0,	// (0x00065d45) cell_navstr_albumart_pane_g1

0xbedd,	// (0x00066e42) cell_navstr_albumart_pane_g2

0xbeed,	// (0x00066e52) cell_navstr_albumart_pane_g3

0xbee5,	// (0x00066e4a) cell_navstr_albumart_pane_g4

0x0003,

0xfd33,	// (0x0006ac98) cell_navstr_albumart_pane_g

0x8ddf,	// (0x00063d44) bt_list_pane_ParamLimits

0x8ddf,	// (0x00063d44) bt_list_pane

0x8df4,	// (0x00063d59) bt_list_pane_t1

0x8e03,	// (0x00063d68) bt_list_pane_t2

0x0001,

0xfd3c,	// (0x0006aca1) bt_list_pane_t

0x0e6c,	// (0x0005bdd1) main_cale_prevew_pane

0x8e12,	// (0x00063d77) popup_cale_preview_window_ParamLimits

0x8e12,	// (0x00063d77) popup_cale_preview_window

0x9880,	// (0x000647e5) bg_popup_preview_window_pane_cp05_ParamLimits

0x9880,	// (0x000647e5) bg_popup_preview_window_pane_cp05

0xd452,	// (0x000683b7) list_cale_preview_pane_ParamLimits

0xd452,	// (0x000683b7) list_cale_preview_pane

0x8e29,	// (0x00063d8e) list_double_cale_preview_pane_ParamLimits

0x8e29,	// (0x00063d8e) list_double_cale_preview_pane

0x8e3b,	// (0x00063da0) list_single_cale_preview_pane_ParamLimits

0x8e3b,	// (0x00063da0) list_single_cale_preview_pane

0x8e4f,	// (0x00063db4) list_single_cale_preview_pane_g1

0x8e57,	// (0x00063dbc) list_single_cale_preview_pane_t1_ParamLimits

0x8e57,	// (0x00063dbc) list_single_cale_preview_pane_t1

0x8e6c,	// (0x00063dd1) list_double_cale_preview_pane_g1

0x8e74,	// (0x00063dd9) list_double_cale_preview_pane_t1_ParamLimits

0x8e74,	// (0x00063dd9) list_double_cale_preview_pane_t1

0x8e89,	// (0x00063dee) list_double_cale_preview_pane_t2_ParamLimits

0x8e89,	// (0x00063dee) list_double_cale_preview_pane_t2

0x0001,

0xfd41,	// (0x0006aca6) list_double_cale_preview_pane_t_ParamLimits

0xfd41,	// (0x0006aca6) list_double_cale_preview_pane_t

0x0e6c,	// (0x0005bdd1) main_ezdial_pane

0x9880,	// (0x000647e5) main_sp_fs_email_pane_ParamLimits

0x85bf,	// (0x00063524) cmail_ddmenu_btn01_pane_ParamLimits

0x85bf,	// (0x00063524) cmail_ddmenu_btn01_pane

0x85d2,	// (0x00063537) cmail_ddmenu_btn02_pane_ParamLimits

0x85d2,	// (0x00063537) cmail_ddmenu_btn02_pane

0x85f5,	// (0x0006355a) cmail_ddmenu_btn03_pane_ParamLimits

0x85f5,	// (0x0006355a) cmail_ddmenu_btn03_pane

0x861b,	// (0x00063580) main_sp_fs_ctrlbar_pane_ParamLimits

0x863f,	// (0x000635a4) main_sp_fs_listscroll_pane_te_cp01_ParamLimits

0x8ab5,	// (0x00063a1a) list_cmail_body_pane_ParamLimits

0xd08c,	// (0x00067ff1) bg_button_pane_cp12

0xd0a1,	// (0x00068006) list_single_cmail_header_detail_pane_g3_ParamLimits

0xd0a1,	// (0x00068006) list_single_cmail_header_detail_pane_g3

0x8b34,	// (0x00063a99) list_single_cmail_header_detail_pane_t2_ParamLimits

0x8b34,	// (0x00063a99) list_single_cmail_header_detail_pane_t2

0x0001,

0xfcc6,	// (0x0006ac2b) list_single_cmail_header_detail_pane_t_ParamLimits

0xfcc6,	// (0x0006ac2b) list_single_cmail_header_detail_pane_t

0xd1cd,	// (0x00068132) phacti_term_pane_t2_ParamLimits

0xd1cd,	// (0x00068132) phacti_term_pane_t2

0x0001,

0xfcd0,	// (0x0006ac35) phacti_term_pane_t_ParamLimits

0xfcd0,	// (0x0006ac35) phacti_term_pane_t

0xd45e,	// (0x000683c3) aid_size_list_single_double

0x8ea1,	// (0x00063e06) popup_ezdial_listscroll_window

0x8ebd,	// (0x00063e22) popup_number_entry_window_cp01

0xac5f,	// (0x00065bc4) bg_popup_call_pane_cp09

0xd46a,	// (0x000683cf) ezdial_list_pane

0xd472,	// (0x000683d7) scroll_pane_cp23

0xc0c8,	// (0x0006702d) bg_button_pane_cp028_ParamLimits

0xc0c8,	// (0x0006702d) bg_button_pane_cp028

0x8ecb,	// (0x00063e30) cmail_ddmenu_btn01_pane_g1_ParamLimits

0x8ecb,	// (0x00063e30) cmail_ddmenu_btn01_pane_g1

0x8ed7,	// (0x00063e3c) cmail_ddmenu_btn01_pane_g2_ParamLimits

0x8ed7,	// (0x00063e3c) cmail_ddmenu_btn01_pane_g2

0x0001,

0xfd46,	// (0x0006acab) cmail_ddmenu_btn01_pane_g_ParamLimits

0xfd46,	// (0x0006acab) cmail_ddmenu_btn01_pane_g

0xd47a,	// (0x000683df) cmail_ddmenu_btn01_pane_t1_ParamLimits

0xd47a,	// (0x000683df) cmail_ddmenu_btn01_pane_t1

0xc0c8,	// (0x0006702d) bg_button_pane_cp029_ParamLimits

0xc0c8,	// (0x0006702d) bg_button_pane_cp029

0x8ee3,	// (0x00063e48) cmail_ddmenu_btn02_pane_g1_ParamLimits

0x8ee3,	// (0x00063e48) cmail_ddmenu_btn02_pane_g1

0x8efb,	// (0x00063e60) cmail_ddmenu_btn02_pane_t1_ParamLimits

0x8efb,	// (0x00063e60) cmail_ddmenu_btn02_pane_t1

0x9880,	// (0x000647e5) bg_button_pane_cp031_ParamLimits

0x9880,	// (0x000647e5) bg_button_pane_cp031

0x8ee3,	// (0x00063e48) cmail_ddmenu_btn03_pane_g1_ParamLimits

0x8ee3,	// (0x00063e48) cmail_ddmenu_btn03_pane_g1

0x8efb,	// (0x00063e60) cmail_ddmenu_btn03_pane_t1_ParamLimits

0x8efb,	// (0x00063e60) cmail_ddmenu_btn03_pane_t1

0x5e21,	// (0x00060d86) cell_dialer2_keypad_pane_t1_ParamLimits

0x5e3b,	// (0x00060da0) cell_dialer2_keypad_pane_t1_copy1_ParamLimits

0x5e3b,	// (0x00060da0) cell_dialer2_keypad_pane_t1_copy1

0x7e39,	// (0x00062d9e) ncimui_group_button_pane

0x9880,	// (0x000647e5) main_sp_fs_calendar_pane_ParamLimits

0x8aca,	// (0x00063a2f) list_single_cmail_header_caption_pane_ParamLimits

0x75af,	// (0x00062514) aid_recal_txt_sm_pane

0x0e6c,	// (0x0005bdd1) mian_recal_day_pane

0xd24e,	// (0x000681b3) popup_sp_fs_cale_preview_window_ParamLimits

0x0e6c,	// (0x0005bdd1) list_recal_day_pane

0xd4a8,	// (0x0006840d) list_single_recal_day_pane_ParamLimits

0xd4a8,	// (0x0006840d) list_single_recal_day_pane

0xd4ba,	// (0x0006841f) list_single_recal_day_pane_g1_ParamLimits

0xd4ba,	// (0x0006841f) list_single_recal_day_pane_g1

0xd4c6,	// (0x0006842b) list_single_recal_day_pane_g2_ParamLimits

0xd4c6,	// (0x0006842b) list_single_recal_day_pane_g2

0xd4d5,	// (0x0006843a) list_single_recal_day_pane_g3_ParamLimits

0xd4d5,	// (0x0006843a) list_single_recal_day_pane_g3

0x8f1f,	// (0x00063e84) list_single_recal_day_pane_g4_ParamLimits

0x8f1f,	// (0x00063e84) list_single_recal_day_pane_g4

0xd4e1,	// (0x00068446) list_single_recal_day_pane_g5_ParamLimits

0xd4e1,	// (0x00068446) list_single_recal_day_pane_g5

0xd4f0,	// (0x00068455) list_single_recal_day_pane_g6_ParamLimits

0xd4f0,	// (0x00068455) list_single_recal_day_pane_g6

0x0005,

0xfd55,	// (0x0006acba) list_single_recal_day_pane_g_ParamLimits

0xfd55,	// (0x0006acba) list_single_recal_day_pane_g

0xd4fc,	// (0x00068461) list_single_recal_day_pane_t1

0xd50a,	// (0x0006846f) list_single_recal_day_pane_t2

0x0001,

0xfd62,	// (0x0006acc7) list_single_recal_day_pane_t

0x8f32,	// (0x00063e97) ncimui_query_button_pane_ParamLimits

0x8f32,	// (0x00063e97) ncimui_query_button_pane

0x8f42,	// (0x00063ea7) ncimui_query_button_pane_t1_ParamLimits

0x8f42,	// (0x00063ea7) ncimui_query_button_pane_t1

0xd518,	// (0x0006847d) ncimui_query_button_pane_t2_ParamLimits

0xd518,	// (0x0006847d) ncimui_query_button_pane_t2

0x0001,

0xfd67,	// (0x0006accc) ncimui_query_button_pane_t_ParamLimits

0xfd67,	// (0x0006accc) ncimui_query_button_pane_t

0x8f55,	// (0x00063eba) query_button_pane_ParamLimits

0x8f55,	// (0x00063eba) query_button_pane

0x0e6c,	// (0x0005bdd1) bg_button_pane_cp0028

0xd52b,	// (0x00068490) query_button_pane_t1

0x3ec4,	// (0x0005ee29) main_tport_pane_ParamLimits

0x89a2,	// (0x00063907) bg_popup_window_pane_cp01_ParamLimits

0x89a2,	// (0x00063907) bg_popup_window_pane_cp01

0x89bc,	// (0x00063921) heading_pane_cp08_ParamLimits

0x89bc,	// (0x00063921) heading_pane_cp08

0x89d0,	// (0x00063935) heading_pane_cp07_ParamLimits

0x89d0,	// (0x00063935) heading_pane_cp07

0xd04f,	// (0x00067fb4) cell_tport_appsw_pane_g2

0x0002,

0xfcb3,	// (0x0006ac18) cell_tport_appsw_pane_g

0x346d,	// (0x0005e3d2) input_candi_list_open_g1

0xa715,	// (0x0006567a) list_cale_time_pane_g6_ParamLimits

0xa715,	// (0x0006567a) list_cale_time_pane_g6

0x4c8d,	// (0x0005fbf2) aid_size_touch_calib_1_ParamLimits

0x4c8d,	// (0x0005fbf2) aid_size_touch_calib_1

0x4c99,	// (0x0005fbfe) aid_size_touch_calib_2_ParamLimits

0x4c99,	// (0x0005fbfe) aid_size_touch_calib_2

0x4caf,	// (0x0005fc14) aid_size_touch_calib_3_ParamLimits

0x4caf,	// (0x0005fc14) aid_size_touch_calib_3

0x4ccd,	// (0x0005fc32) aid_size_touch_calib_4_ParamLimits

0x4ccd,	// (0x0005fc32) aid_size_touch_calib_4

0x4ce3,	// (0x0005fc48) main_touch_calib_button_group_pane_ParamLimits

0x4ce3,	// (0x0005fc48) main_touch_calib_button_group_pane

0x4cfb,	// (0x0005fc60) main_touch_calib_pane_g1_ParamLimits

0x4d07,	// (0x0005fc6c) main_touch_calib_pane_g2_ParamLimits

0x4d13,	// (0x0005fc78) main_touch_calib_pane_g3_ParamLimits

0x4d1f,	// (0x0005fc84) main_touch_calib_pane_g4_ParamLimits

0xf775,	// (0x0006a6da) main_touch_calib_pane_g_ParamLimits

0x4d2b,	// (0x0005fc90) main_touch_calib_pane_t1_ParamLimits

0x4d45,	// (0x0005fcaa) main_touch_calib_pane_t2_ParamLimits

0x4d5f,	// (0x0005fcc4) main_touch_calib_pane_t3_ParamLimits

0x4d73,	// (0x0005fcd8) main_touch_calib_pane_t4_ParamLimits

0x4d87,	// (0x0005fcec) main_touch_calib_pane_t5_ParamLimits

0xf77e,	// (0x0006a6e3) main_touch_calib_pane_t_ParamLimits

0xc93d,	// (0x000678a2) list_single_fp_cale_pane_g3_ParamLimits

0xc93d,	// (0x000678a2) list_single_fp_cale_pane_g3

0xdd6b,	// (0x00068cd0) bg_button_pane_cp012_ParamLimits

0xdd6b,	// (0x00068cd0) bg_vkb2_func_pane_cp03_ParamLimits

0x6e6e,	// (0x00061dd3) cell_vitu2_function_top_pane_g1_ParamLimits

0xdd6b,	// (0x00068cd0) bg_vkb2_func_pane_cp04_ParamLimits

0x7dd9,	// (0x00062d3e) main_ncimui_button_group_pane_ParamLimits

0x7dd9,	// (0x00062d3e) main_ncimui_button_group_pane

0x7e27,	// (0x00062d8c) main_ncimui_pane_t3_ParamLimits

0x7e27,	// (0x00062d8c) main_ncimui_pane_t3

0xd17b,	// (0x000680e0) phacti_button_group_pane

0xd45e,	// (0x000683c3) aid_size_list_single_double_ParamLimits

0x8ea1,	// (0x00063e06) popup_ezdial_listscroll_window_ParamLimits

0x8ebd,	// (0x00063e22) popup_number_entry_window_cp01_ParamLimits

0x8f68,	// (0x00063ecd) phacti_button_pane_ParamLimits

0x8f68,	// (0x00063ecd) phacti_button_pane

0x0e6c,	// (0x0005bdd1) bg_button_pane_cp14

0xd539,	// (0x0006849e) phacti_button_pane_t1

0x8f79,	// (0x00063ede) main_touch_calib_button_pane_ParamLimits

0x8f79,	// (0x00063ede) main_touch_calib_button_pane

0xa035,	// (0x00064f9a) bg_button_pane_cp18_ParamLimits

0xa035,	// (0x00064f9a) bg_button_pane_cp18

0xd547,	// (0x000684ac) main_touch_calib_button_pane_t1_ParamLimits

0xd547,	// (0x000684ac) main_touch_calib_button_pane_t1

0xd55d,	// (0x000684c2) main_touch_calib_button_pane_t2_ParamLimits

0xd55d,	// (0x000684c2) main_touch_calib_button_pane_t2

0x0001,

0xfd6c,	// (0x0006acd1) main_touch_calib_button_pane_t_ParamLimits

0xfd6c,	// (0x0006acd1) main_touch_calib_button_pane_t

0x0e6c,	// (0x0005bdd1) cell_ncimui_button_pane

0x0e6c,	// (0x0005bdd1) bg_button_pane_cp032

0xd57b,	// (0x000684e0) cell_ncimui_button_pane_t1

0xdc88,	// (0x00068bed) image3_infobar_pane_ParamLimits

0xdc88,	// (0x00068bed) image3_infobar_pane

0x81e6,	// (0x0006314b) fs_bigclock_status_pane_ParamLimits

0x81e6,	// (0x0006314b) fs_bigclock_status_pane

0x81f3,	// (0x00063158) main_fs_bigclock_clock_pane_ParamLimits

0x81f3,	// (0x00063158) main_fs_bigclock_clock_pane

0x8206,	// (0x0006316b) main_fs_bigclock_indi_pane_ParamLimits

0x8206,	// (0x0006316b) main_fs_bigclock_indi_pane

0x821e,	// (0x00063183) main_fs_bigclock_swipe_pane_ParamLimits

0x821e,	// (0x00063183) main_fs_bigclock_swipe_pane

0x0e6c,	// (0x0005bdd1) main_fs_clock_dumped_data

0xed68,	// (0x00069ccd) list_single_fs_bigclock_indicator_pane_g1_ParamLimits

0xed68,	// (0x00069ccd) list_single_fs_bigclock_indicator_pane_g1

0xed86,	// (0x00069ceb) list_single_fs_bigclock_indicator_pane_g2_ParamLimits

0xed86,	// (0x00069ceb) list_single_fs_bigclock_indicator_pane_g2

0xeda0,	// (0x00069d05) list_single_fs_bigclock_indicator_pane_g3_ParamLimits

0xeda0,	// (0x00069d05) list_single_fs_bigclock_indicator_pane_g3

0xedba,	// (0x00069d1f) list_single_fs_bigclock_indicator_pane_g4_ParamLimits

0xedba,	// (0x00069d1f) list_single_fs_bigclock_indicator_pane_g4

0x0004,

0x0a9f,	// (0x0005ba04) list_single_fs_bigclock_indicator_pane_g_ParamLimits

0x0a9f,	// (0x0005ba04) list_single_fs_bigclock_indicator_pane_g

0xede0,	// (0x00069d45) list_single_fs_bigclock_indicator_pane_t1_ParamLimits

0xede0,	// (0x00069d45) list_single_fs_bigclock_indicator_pane_t1

0xee08,	// (0x00069d6d) list_single_fs_bigclock_indicator_pane_t2_ParamLimits

0xee08,	// (0x00069d6d) list_single_fs_bigclock_indicator_pane_t2

0xee30,	// (0x00069d95) list_single_fs_bigclock_indicator_pane_t3_ParamLimits

0xee30,	// (0x00069d95) list_single_fs_bigclock_indicator_pane_t3

0xee58,	// (0x00069dbd) list_single_fs_bigclock_indicator_pane_t4_ParamLimits

0xee58,	// (0x00069dbd) list_single_fs_bigclock_indicator_pane_t4

0x0004,

0x0aaa,	// (0x0005ba0f) list_single_fs_bigclock_indicator_pane_t_ParamLimits

0x0aaa,	// (0x0005ba0f) list_single_fs_bigclock_indicator_pane_t

0xd589,	// (0x000684ee) image3_infobar_fav_pane_ParamLimits

0xd589,	// (0x000684ee) image3_infobar_fav_pane

0xd599,	// (0x000684fe) image3_infobar_loc_pane_ParamLimits

0xd599,	// (0x000684fe) image3_infobar_loc_pane

0xd5ad,	// (0x00068512) image3_infobar_time_pane_ParamLimits

0xd5ad,	// (0x00068512) image3_infobar_time_pane

0xc5d0,	// (0x00067535) image3_infobar_time_pane_g1

0xd5bd,	// (0x00068522) image3_infobar_time_pane_t1

0xc5d0,	// (0x00067535) image3_infobar_loc_pane_g1

0xd5cb,	// (0x00068530) image3_infobar_loc_pane_g2

0x0001,

0xfd71,	// (0x0006acd6) image3_infobar_loc_pane_g

0xd5d3,	// (0x00068538) image3_infobar_loc_pane_t1

0xc5d0,	// (0x00067535) image3_infobar_fav_pane_g1

0xd5e1,	// (0x00068546) image3_infobar_fav_pane_g2

0x0001,

0xfd76,	// (0x0006acdb) image3_infobar_fav_pane_g

0xd5e9,	// (0x0006854e) fs_bigclock_status_battery_pane

0xd5f2,	// (0x00068557) fs_bigclock_status_signal_pane

0xd5fb,	// (0x00068560) fs_bigclock_status_title_pane

0xd604,	// (0x00068569) fs_bigclock_status_signal_pane_g1

0xd60d,	// (0x00068572) fs_bigclock_status_signal_pane_g2

0x0001,

0xfd7b,	// (0x0006ace0) fs_bigclock_status_signal_pane_g

0xd615,	// (0x0006857a) fs_bigclock_status_battery_pane_g1

0xd61e,	// (0x00068583) fs_bigclock_status_battery_pane_g2

0x0001,

0xfd80,	// (0x0006ace5) fs_bigclock_status_battery_pane_g

0xd626,	// (0x0006858b) fs_bigclock_status_title_pane_t1

0xc5d0,	// (0x00067535) main_fs_bigclock_clock_pane_g1

0xd634,	// (0x00068599) main_fs_bigclock_clock_pane_g2

0xd634,	// (0x00068599) main_fs_bigclock_clock_pane_g3

0xd634,	// (0x00068599) main_fs_bigclock_clock_pane_g4

0x0003,

0xfd85,	// (0x0006acea) main_fs_bigclock_clock_pane_g

0xd63c,	// (0x000685a1) main_fs_bigclock_clock_pane_t1

0xd64a,	// (0x000685af) main_fs_bigclock_clock_pane_t2

0x0001,

0xfd8e,	// (0x0006acf3) main_fs_bigclock_clock_pane_t

0xd659,	// (0x000685be) list_single_fs_bigclock_indicator_pane_ParamLimits

0xd659,	// (0x000685be) list_single_fs_bigclock_indicator_pane

0x8f8e,	// (0x00063ef3) list_single_fs_bigclock_pane_ParamLimits

0x8f8e,	// (0x00063ef3) list_single_fs_bigclock_pane

0xd673,	// (0x000685d8) main_fs_bigclock_indicator_pane_t1

0xd682,	// (0x000685e7) list_single_fs_bigclock_pane_g1

0xd68a,	// (0x000685ef) list_single_fs_bigclock_pane_t1

0xc5d0,	// (0x00067535) main_fs_bigclock_swipe_pane_g1

0xd6c8,	// (0x0006862d) main_fs_bigclock_swipe_pane_g2

0x0001,

0xfd9f,	// (0x0006ad04) main_fs_bigclock_swipe_pane_g

0xd6d0,	// (0x00068635) main_fs_bigclock_swipe_pane_t1_ParamLimits

0xd6d0,	// (0x00068635) main_fs_bigclock_swipe_pane_t1

0x2ca6,	// (0x0005dc0b) call_type_pane_ParamLimits

0x0e6c,	// (0x0005bdd1) main_btmg_pane

0xd347,	// (0x000682ac) list_single_cale_mrui_row_pane_g2_ParamLimits

0xd347,	// (0x000682ac) list_single_cale_mrui_row_pane_g2

0x0001,

0xfd12,	// (0x0006ac77) list_single_cale_mrui_row_pane_g_ParamLimits

0xfd12,	// (0x0006ac77) list_single_cale_mrui_row_pane_g

0xd498,	// (0x000683fd) list_recal_vselct_arw_lo_pane

0xd4a0,	// (0x00068405) list_recal_vselct_arw_up_pane

0x75a6,	// (0x0006250b) list_recal_vselct_pane

0xd6ed,	// (0x00068652) btmg_button_pane

0x8ff4,	// (0x00063f59) main_btmg_pane_g1

0x0e6c,	// (0x0005bdd1) bg_button_pane_cp044

0xd6f7,	// (0x0006865c) btmg_button_pane_t1

0xc0c0,	// (0x00067025) aid_listscroll_gen

0x9880,	// (0x000647e5) main_cntbar_detail_pane

0xd06d,	// (0x00067fd2) list_cmail_folder_pane

0xd07d,	// (0x00067fe2) sp_fs_scroll_pane_cp03_ParamLimits

0x8ffe,	// (0x00063f63) list_single_fs_dyc_pane_cp01_ParamLimits

0x8ffe,	// (0x00063f63) list_single_fs_dyc_pane_cp01

0xd705,	// (0x0006866a) aid_size_cmail_indent

0xd70e,	// (0x00068673) list_single_dyc_row_pane_cp01

0x9043,	// (0x00063fa8) cntbar_detail_list_pane_ParamLimits

0x9043,	// (0x00063fa8) cntbar_detail_list_pane

0x908f,	// (0x00063ff4) main_cntbar_detail_cont_pane_ParamLimits

0x908f,	// (0x00063ff4) main_cntbar_detail_cont_pane

0x2bcb,	// (0x0005db30) scroll_pane_cp032_ParamLimits

0x2bcb,	// (0x0005db30) scroll_pane_cp032

0x90a3,	// (0x00064008) cntbar_detail_list_event_pane_ParamLimits

0x90a3,	// (0x00064008) cntbar_detail_list_event_pane

0x9053,	// (0x00063fb8) cntbar_detail_list_shct_pane

0xa59a,	// (0x000654ff) aid_list_gen

0xd717,	// (0x0006867c) aid_scroll

0xd720,	// (0x00068685) aid_size_touch_scroll_bar

0xd729,	// (0x0006868e) aid_list_double

0xd732,	// (0x00068697) aid_list_single

0xd73b,	// (0x000686a0) aid_list_single_lg

0xd744,	// (0x000686a9) aid_list_z_g_a_sm

0xd74c,	// (0x000686b1) aid_list_z_g_d

0xd754,	// (0x000686b9) aid_txt_z_prm

0x90b3,	// (0x00064018) aid_txt_z_prm_cp01

0x90c1,	// (0x00064026) aid_txt_z_sec

0x90cf,	// (0x00064034) main_cntbar_detail_cont_pane_g1_ParamLimits

0x90cf,	// (0x00064034) main_cntbar_detail_cont_pane_g1

0x90e3,	// (0x00064048) main_cntbar_detail_cont_pane_g2_ParamLimits

0x90e3,	// (0x00064048) main_cntbar_detail_cont_pane_g2

0x0001,

0xfda4,	// (0x0006ad09) main_cntbar_detail_cont_pane_g_ParamLimits

0xfda4,	// (0x0006ad09) main_cntbar_detail_cont_pane_g

0xd762,	// (0x000686c7) main_cntbar_detail_cont_pane_t1

0xd770,	// (0x000686d5) main_cntbar_detail_cont_pane_t2

0xd77e,	// (0x000686e3) main_cntbar_detail_cont_pane_t3

0x0002,

0xfda9,	// (0x0006ad0e) main_cntbar_detail_cont_pane_t

0x90f3,	// (0x00064058) cell_cntbar_detail_list_shct_pane_ParamLimits

0x90f3,	// (0x00064058) cell_cntbar_detail_list_shct_pane

0xd78c,	// (0x000686f1) cntbar_detail_list_shct_pane_g1

0xd795,	// (0x000686fa) cntbar_detail_list_shct_pane_g2

0x0001,

0xfdb0,	// (0x0006ad15) cntbar_detail_list_shct_pane_g

0x9107,	// (0x0006406c) cntbar_detail_list_event_pane_g1_ParamLimits

0x9107,	// (0x0006406c) cntbar_detail_list_event_pane_g1

0x9113,	// (0x00064078) cntbar_detail_list_event_pane_g2_ParamLimits

0x9113,	// (0x00064078) cntbar_detail_list_event_pane_g2

0x0005,

0xfdb5,	// (0x0006ad1a) cntbar_detail_list_event_pane_g_ParamLimits

0xfdb5,	// (0x0006ad1a) cntbar_detail_list_event_pane_g

0x917f,	// (0x000640e4) cntbar_detail_list_event_pane_t1_ParamLimits

0x917f,	// (0x000640e4) cntbar_detail_list_event_pane_t1

0x9194,	// (0x000640f9) cntbar_detail_list_event_pane_t2_ParamLimits

0x9194,	// (0x000640f9) cntbar_detail_list_event_pane_t2

0x0002,

0xfdc2,	// (0x0006ad27) cntbar_detail_list_event_pane_t_ParamLimits

0xfdc2,	// (0x0006ad27) cntbar_detail_list_event_pane_t

0xc5d0,	// (0x00067535) cell_cntbar_detail_list_shct_pane_g1

0x2ff7,	// (0x0005df5c) navi_pane_mv_g3

0x9880,	// (0x000647e5) main_cntbar_detail_pane_ParamLimits

0x0e6c,	// (0x0005bdd1) main_notif_wgt_pane

0xda9e,	// (0x00068a03) aid_tch_main_mp4_pane_g4

0xdc80,	// (0x00068be5) popup_slider_window_cp02

0xd48f,	// (0x000683f4) list_recal_day_event_pane

0x9017,	// (0x00063f7c) cntbar_detail_btn_pane_ParamLimits

0x9017,	// (0x00063f7c) cntbar_detail_btn_pane

0x902d,	// (0x00063f92) cntbar_detail_btn_pane_cp01_ParamLimits

0x902d,	// (0x00063f92) cntbar_detail_btn_pane_cp01

0x9053,	// (0x00063fb8) cntbar_detail_list_shct_pane_ParamLimits

0x9063,	// (0x00063fc8) cntbar_detail_pane_g1_ParamLimits

0x9063,	// (0x00063fc8) cntbar_detail_pane_g1

0x9073,	// (0x00063fd8) cntbar_detail_pane_t1_ParamLimits

0x9073,	// (0x00063fd8) cntbar_detail_pane_t1

0x911f,	// (0x00064084) cntbar_detail_list_event_pane_g3_ParamLimits

0x911f,	// (0x00064084) cntbar_detail_list_event_pane_g3

0x9137,	// (0x0006409c) cntbar_detail_list_event_pane_g4_ParamLimits

0x9137,	// (0x0006409c) cntbar_detail_list_event_pane_g4

0x914f,	// (0x000640b4) cntbar_detail_list_event_pane_g5_ParamLimits

0x914f,	// (0x000640b4) cntbar_detail_list_event_pane_g5

0x9167,	// (0x000640cc) cntbar_detail_list_event_pane_g6_ParamLimits

0x9167,	// (0x000640cc) cntbar_detail_list_event_pane_g6

0x91a9,	// (0x0006410e) cntbar_detail_list_event_pane_t3_ParamLimits

0x91a9,	// (0x0006410e) cntbar_detail_list_event_pane_t3

0x91bb,	// (0x00064120) popup_notif_wgt_window_ParamLimits

0x91bb,	// (0x00064120) popup_notif_wgt_window

0x91d4,	// (0x00064139) popup_submenu_window_cp01_ParamLimits

0x91d4,	// (0x00064139) popup_submenu_window_cp01

0xac5f,	// (0x00065bc4) bg_popup_window_pane_cp10

0xd79e,	// (0x00068703) listscroll_notif_wgt_pane

0xd7a8,	// (0x0006870d) list_notif_wgt_window

0xd7b1,	// (0x00068716) scroll_pane_cp033

0xd7ba,	// (0x0006871f) list_notif_wgt_row_pane_ParamLimits

0xd7ba,	// (0x0006871f) list_notif_wgt_row_pane

0xd7ce,	// (0x00068733) aid_size_list_notif_wgt_del

0xd7d7,	// (0x0006873c) list_notif_wgt_row_pane_g1

0xd7df,	// (0x00068744) list_notif_wgt_row_pane_g2

0xd7e7,	// (0x0006874c) list_notif_wgt_row_pane_g3

0x0002,

0xfdc9,	// (0x0006ad2e) list_notif_wgt_row_pane_g

0xd7f0,	// (0x00068755) list_notif_wgt_row_pane_t1

0xd7fe,	// (0x00068763) list_notif_wgt_row_pane_t2

0xd80c,	// (0x00068771) list_notif_wgt_row_pane_t3

0x0002,

0xfdd0,	// (0x0006ad35) list_notif_wgt_row_pane_t

0xe28a,	// (0x000691ef) list_recal_day_event_pane_g1

0xd81a,	// (0x0006877f) list_recal_day_event_pane_t1

0x0e6c,	// (0x0005bdd1) bg_button_pane_cp045

0xd829,	// (0x0006878e) cntbar_detail_btn_pane_t1

0xc0c8,	// (0x0006702d) main_callh_pane_ParamLimits

0xc0c8,	// (0x0006702d) main_callh_pane

0x0e6c,	// (0x0005bdd1) main_coverflow0_pane

0x0e6c,	// (0x0005bdd1) main_wgtman_pane

0x822c,	// (0x00063191) main_fs_bigclock_unlock_btn_pane_ParamLimits

0x822c,	// (0x00063191) main_fs_bigclock_unlock_btn_pane

0xd047,	// (0x00067fac) bg_button_pane_cp16

0xd057,	// (0x00067fbc) cell_tport_appsw_pane_g3

0x91e6,	// (0x0006414b) cf0_flow_pane_ParamLimits

0x91e6,	// (0x0006414b) cf0_flow_pane

0xd837,	// (0x0006879c) listscroll_cf0_pane

0xd840,	// (0x000687a5) main_cf0_pane_g1

0x91fb,	// (0x00064160) main_cf0_pane_t1_ParamLimits

0x91fb,	// (0x00064160) main_cf0_pane_t1

0x9212,	// (0x00064177) main_cf0_pane_t2_ParamLimits

0x9212,	// (0x00064177) main_cf0_pane_t2

0x0001,

0xfdd7,	// (0x0006ad3c) main_cf0_pane_t_ParamLimits

0xfdd7,	// (0x0006ad3c) main_cf0_pane_t

0xd84a,	// (0x000687af) scroll_pane_cp11

0x9229,	// (0x0006418e) cf0_flow_pane_g1

0x9231,	// (0x00064196) cf0_flow_pane_g2

0x0001,

0xfddc,	// (0x0006ad41) cf0_flow_pane_g

0x9239,	// (0x0006419e) cf0_flow_pane_t1

0x0e6c,	// (0x0005bdd1) main_call6_pane

0x0e6c,	// (0x0005bdd1) main_calllock_pane

0x9247,	// (0x000641ac) call6_btn_grp_pane_ParamLimits

0x9247,	// (0x000641ac) call6_btn_grp_pane

0x9261,	// (0x000641c6) call6_pane_g1_ParamLimits

0x9261,	// (0x000641c6) call6_pane_g1

0x9276,	// (0x000641db) popup_call6_1st_window_ParamLimits

0x9276,	// (0x000641db) popup_call6_1st_window

0x9287,	// (0x000641ec) popup_call6_2nd_window_ParamLimits

0x9287,	// (0x000641ec) popup_call6_2nd_window

0x9298,	// (0x000641fd) cell_call6_btn_pane_ParamLimits

0x9298,	// (0x000641fd) cell_call6_btn_pane

0xac5f,	// (0x00065bc4) bg_popup_call2_in_pane_cp03

0xd855,	// (0x000687ba) popup_call6_1st_window_g1

0xd85d,	// (0x000687c2) popup_call6_1st_window_g2

0xd865,	// (0x000687ca) popup_call6_1st_window_g3

0x0002,

0xfde1,	// (0x0006ad46) popup_call6_1st_window_g

0xd86d,	// (0x000687d2) popup_call6_1st_window_t1

0xd87c,	// (0x000687e1) popup_call6_1st_window_t2

0xd88c,	// (0x000687f1) popup_call6_1st_window_t3

0x0002,

0xfde8,	// (0x0006ad4d) popup_call6_1st_window_t

0xac5f,	// (0x00065bc4) bg_popup_call2_in_pane_cp04

0xd855,	// (0x000687ba) popup_call6_2nd_window_g1

0xd85d,	// (0x000687c2) popup_call6_2nd_window_g2

0xd865,	// (0x000687ca) popup_call6_2nd_window_g3

0x0002,

0xfde1,	// (0x0006ad46) popup_call6_2nd_window_g

0xd86d,	// (0x000687d2) popup_call6_2nd_window_t1

0x0e6c,	// (0x0005bdd1) bg_button_pane_cp15

0xd89c,	// (0x00068801) cell_call6_btn_pane_g1

0xd8a5,	// (0x0006880a) cell_call6_btn_pane_t1

0x92ac,	// (0x00064211) listscroll_wgtman_pane_ParamLimits

0x92ac,	// (0x00064211) listscroll_wgtman_pane

0x92cf,	// (0x00064234) wgtman_btn_pane_ParamLimits

0x92cf,	// (0x00064234) wgtman_btn_pane

0xab12,	// (0x00065a77) aid_scroll_copy1

0xd8b4,	// (0x00068819) list_wgtman_pane

0x9312,	// (0x00064277) wgtman_btn_pane_g1_ParamLimits

0x9312,	// (0x00064277) wgtman_btn_pane_g1

0x933e,	// (0x000642a3) wgtman_btn_pane_t1_ParamLimits

0x933e,	// (0x000642a3) wgtman_btn_pane_t1

0xd8be,	// (0x00068823) wgtman_btn_pane_t2_ParamLimits

0xd8be,	// (0x00068823) wgtman_btn_pane_t2

0x0001,

0xfdef,	// (0x0006ad54) wgtman_btn_pane_t_ParamLimits

0xfdef,	// (0x0006ad54) wgtman_btn_pane_t

0x937b,	// (0x000642e0) listrow_wgtman_pane_ParamLimits

0x937b,	// (0x000642e0) listrow_wgtman_pane

0x938e,	// (0x000642f3) listrow_wgtman_pane_g1

0x9397,	// (0x000642fc) listrow_wgtman_pane_g2

0x0001,

0xfdf4,	// (0x0006ad59) listrow_wgtman_pane_g

0x93a1,	// (0x00064306) listrow_wgtman_pane_t1

0x93af,	// (0x00064314) listrow_wgtman_pane_t2

0x0001,

0xfdf9,	// (0x0006ad5e) listrow_wgtman_pane_t

0x93bd,	// (0x00064322) wait_bar_pane_cp09

0xd8d5,	// (0x0006883a) main_calllock_btn_pane

0xd8df,	// (0x00068844) main_calllock_pane_g1

0x0e6c,	// (0x0005bdd1) bg_button_pane_cp17

0xd8ea,	// (0x0006884f) main_calllock_btn_pane_g1

0xd8f3,	// (0x00068858) main_calllock_btn_pane_t1

0x0e6c,	// (0x0005bdd1) main_dialer3_pane

0x0e6c,	// (0x0005bdd1) main_fmrd2_pane

0xc5d0,	// (0x00067535) main_fs_bigclock_unlock_btn_pane_g1

0xd90a,	// (0x0006886f) main_fs_bigclock_unlock_btn_pane_t1

0x93c5,	// (0x0006432a) area_fmrd2_info_pane_ParamLimits

0x93c5,	// (0x0006432a) area_fmrd2_info_pane

0x93d6,	// (0x0006433b) area_fmrd2_visual_pane_ParamLimits

0x93d6,	// (0x0006433b) area_fmrd2_visual_pane

0x93e4,	// (0x00064349) fmrd2_indi_pane_ParamLimits

0x93e4,	// (0x00064349) fmrd2_indi_pane

0x93f1,	// (0x00064356) area_fmrd2_visual_pane_g1

0x93f9,	// (0x0006435e) area_fmrd2_visual_pane_t1

0x9409,	// (0x0006436e) area_fmrd2_visual_pane_t2

0x9419,	// (0x0006437e) area_fmrd2_visual_pane_t3

0x0002,

0xfe03,	// (0x0006ad68) area_fmrd2_visual_pane_t

0x9429,	// (0x0006438e) area_fmrd2_info_pane_g1

0x9431,	// (0x00064396) area_fmrd2_info_pane_t1

0x9441,	// (0x000643a6) area_fmrd2_info_pane_t2

0x9451,	// (0x000643b6) area_fmrd2_info_pane_t3

0x9461,	// (0x000643c6) area_fmrd2_info_pane_t4

0x0003,

0xfe0a,	// (0x0006ad6f) area_fmrd2_info_pane_t

0x946f,	// (0x000643d4) fmrd2_indi_pane_t1

0x947f,	// (0x000643e4) fmrd2_indi_pane_t2

0x948f,	// (0x000643f4) fmrd2_indi_pane_t3

0x0002,

0xfe13,	// (0x0006ad78) fmrd2_indi_pane_t

0xedc9,	// (0x00069d2e) list_single_fs_bigclock_indicator_pane_g5_ParamLimits

0xedc9,	// (0x00069d2e) list_single_fs_bigclock_indicator_pane_g5

0xee6d,	// (0x00069dd2) list_single_fs_bigclock_indicator_pane_t5_ParamLimits

0xee6d,	// (0x00069dd2) list_single_fs_bigclock_indicator_pane_t5

0x8c19,	// (0x00063b7e) aid_cell_bcale_month_pane_ParamLimits

0x8c19,	// (0x00063b7e) aid_cell_bcale_month_pane

0x8c2b,	// (0x00063b90) bcale_month_pane_ParamLimits

0x8c2b,	// (0x00063b90) bcale_month_pane

0x8c45,	// (0x00063baa) bcale_preview_pane_ParamLimits

0x8c45,	// (0x00063baa) bcale_preview_pane

0xd68a,	// (0x000685ef) list_single_fs_bigclock_pane_t1_ParamLimits

0xd6a4,	// (0x00068609) list_single_fs_bigclock_pane_t2_ParamLimits

0xd6a4,	// (0x00068609) list_single_fs_bigclock_pane_t2

0x0001,

0xfd9a,	// (0x0006acff) list_single_fs_bigclock_pane_t_ParamLimits

0xfd9a,	// (0x0006acff) list_single_fs_bigclock_pane_t

0xd902,	// (0x00068867) main_fs_bigclock_unlock_btn_pane_g2

0x0001,

0xfdfe,	// (0x0006ad63) main_fs_bigclock_unlock_btn_pane_g

0x949f,	// (0x00064404) aid_dia3_key_size_ParamLimits

0x949f,	// (0x00064404) aid_dia3_key_size

0x94ae,	// (0x00064413) aid_dia3_listrow_size_ParamLimits

0x94ae,	// (0x00064413) aid_dia3_listrow_size

0x94c3,	// (0x00064428) dia3_keypad_fun_pane_ParamLimits

0x94c3,	// (0x00064428) dia3_keypad_fun_pane

0x94df,	// (0x00064444) dia3_keypad_num_pane_ParamLimits

0x94df,	// (0x00064444) dia3_keypad_num_pane

0x94fa,	// (0x0006445f) dia3_listscroll_pane_ParamLimits

0x94fa,	// (0x0006445f) dia3_listscroll_pane

0x950d,	// (0x00064472) dia3_numentry_pane_ParamLimits

0x950d,	// (0x00064472) dia3_numentry_pane

0xd918,	// (0x0006887d) dia3_list_pane

0xd923,	// (0x00068888) scroll_pane_cp12

0x0e6c,	// (0x0005bdd1) bg_dia3_numentry_pane

0x9521,	// (0x00064486) dia3_numentry_pane_t1

0x9530,	// (0x00064495) cell_dia3_key_num_pane

0x9538,	// (0x0006449d) cell_dia3_key0_fun_pane_ParamLimits

0x9538,	// (0x0006449d) cell_dia3_key0_fun_pane

0x954c,	// (0x000644b1) cell_dia3_key1_fun_pane_ParamLimits

0x954c,	// (0x000644b1) cell_dia3_key1_fun_pane

0x9564,	// (0x000644c9) dia3_listrow_pane

0xeac3,	// (0x00069a28) bg_dia3_numentry_pane_g1

0x0e6c,	// (0x0005bdd1) bg_button_pane_cp21

0xd92e,	// (0x00068893) cell_dia3_key_num_pane_t1

0xd93c,	// (0x000688a1) cell_dia3_key_num_pane_t2

0xd94b,	// (0x000688b0) cell_dia3_key_num_pane_t3

0xd95a,	// (0x000688bf) cell_dia3_key_num_pane_t4

0x0003,

0xfe1a,	// (0x0006ad7f) cell_dia3_key_num_pane_t

0x0e6c,	// (0x0005bdd1) bg_button_pane_cp19

0x9576,	// (0x000644db) cell_dia3_key0_fun_pane_g1

0x0e6c,	// (0x0005bdd1) bg_button_pane_cp20

0x957e,	// (0x000644e3) cell_dia3_key1_fun_pane_g1

0x9586,	// (0x000644eb) area_left_week_number_pane

0xce3e,	// (0x00067da3) area_top_day_name_pane

0x958f,	// (0x000644f4) frame_month_view_pane

0x9597,	// (0x000644fc) grid_month_view_pane

0x95a1,	// (0x00064506) cell_top_day_name_pane_ParamLimits

0x95a1,	// (0x00064506) cell_top_day_name_pane

0x8e3b,	// (0x00063da0) cell_area_left_week_number_pane_ParamLimits

0x8e3b,	// (0x00063da0) cell_area_left_week_number_pane

0x95b7,	// (0x0006451c) cell_month_view_pane_ParamLimits

0x95b7,	// (0x0006451c) cell_month_view_pane

0xd969,	// (0x000688ce) frm_month_g1

0x95d2,	// (0x00064537) frm_month_g2

0x95da,	// (0x0006453f) frm_month_g3

0x95e2,	// (0x00064547) frm_month_g4

0x95ea,	// (0x0006454f) frm_month_g5

0x95f2,	// (0x00064557) frm_month_g6

0x95fa,	// (0x0006455f) frm_month_g7

0xd972,	// (0x000688d7) frm_month_g8

0x9602,	// (0x00064567) frm_month_g9

0x960b,	// (0x00064570) frm_month_g10

0x9614,	// (0x00064579) frm_month_g11

0x961d,	// (0x00064582) frm_month_g12

0x9626,	// (0x0006458b) frm_month_g13

0x962f,	// (0x00064594) frm_month_g14

0x9638,	// (0x0006459d) frm_month_g15

0x9641,	// (0x000645a6) frm_month_g16

0x000f,

0xfe23,	// (0x0006ad88) frm_month_g

0x964a,	// (0x000645af) cell_top_day_name_pane_t1

0x9659,	// (0x000645be) cell_area_left_week_number_pane_g1

0x964a,	// (0x000645af) cell_area_left_week_number_pane_t1

0xc5d0,	// (0x00067535) cell_month_view_pane_g1

0x9661,	// (0x000645c6) cell_month_view_pane_t1

0x0e6c,	// (0x0005bdd1) main_fps_pane

0xf052,	// (0x00069fb7) cmail_ddmenu_btn02_pane_cp1_ParamLimits

0xf052,	// (0x00069fb7) cmail_ddmenu_btn02_pane_cp1

0xf06e,	// (0x00069fd3) cmail_ddmenu_btn02_pane_cp2_ParamLimits

0xf06e,	// (0x00069fd3) cmail_ddmenu_btn02_pane_cp2

0x8eef,	// (0x00063e54) cmail_ddmenu_btn02_pane_g2_ParamLimits

0x8eef,	// (0x00063e54) cmail_ddmenu_btn02_pane_g2

0x0001,

0xfd4b,	// (0x0006acb0) cmail_ddmenu_btn02_pane_g_ParamLimits

0xfd4b,	// (0x0006acb0) cmail_ddmenu_btn02_pane_g

0x8f0d,	// (0x00063e72) cmail_ddmenu_btn02_pane_t2_ParamLimits

0x8f0d,	// (0x00063e72) cmail_ddmenu_btn02_pane_t2

0x0001,

0xfd50,	// (0x0006acb5) cmail_ddmenu_btn02_pane_t_ParamLimits

0xfd50,	// (0x0006acb5) cmail_ddmenu_btn02_pane_t

0x9670,	// (0x000645d5) fps_text_pane_ParamLimits

0x9670,	// (0x000645d5) fps_text_pane

0x9687,	// (0x000645ec) main_fps_pane_g1_ParamLimits

0x9687,	// (0x000645ec) main_fps_pane_g1

0x96a1,	// (0x00064606) wait_bar_pane_cp010_ParamLimits

0x96a1,	// (0x00064606) wait_bar_pane_cp010

0x96b2,	// (0x00064617) fps_text_pane_t1_ParamLimits

0x96b2,	// (0x00064617) fps_text_pane_t1

0xec1c,	// (0x00069b81) cam4_image_uncrop_pane_g1

0xec25,	// (0x00069b8a) cam4_image_uncrop_pane_g2

0x62cc,	// (0x00061231) cam4_image_uncrop_pane_g3

0x62d5,	// (0x0006123a) cam4_image_uncrop_pane_g4

0x0003,

0xf908,	// (0x0006a86d) cam4_image_uncrop_pane_g

0x9564,	// (0x000644c9) dia3_listrow_pane_ParamLimits

0x0e6c,	// (0x0005bdd1) main_phob2_pane

0x8a3b,	// (0x000639a0) cell_tport_appsw_pane_cp02_ParamLimits

0x8a3b,	// (0x000639a0) cell_tport_appsw_pane_cp02

0x8a4f,	// (0x000639b4) cell_tport_appsw_pane_cp03_ParamLimits

0x8a4f,	// (0x000639b4) cell_tport_appsw_pane_cp03

0x0e6c,	// (0x0005bdd1) phob2_contact_card_pane

0x0e6c,	// (0x0005bdd1) phob2_listscroll_pane

0xd97b,	// (0x000688e0) phob2_list_pane

0xd983,	// (0x000688e8) scroll_pane_cp034

0x96ca,	// (0x0006462f) phob2_cc_data_pane_ParamLimits

0x96ca,	// (0x0006462f) phob2_cc_data_pane

0x96e9,	// (0x0006464e) phob2_cc_listscroll_pane_ParamLimits

0x96e9,	// (0x0006464e) phob2_cc_listscroll_pane

0xe084,	// (0x00068fe9) list_double_large_graphic_phob2_pane_ParamLimits

0xe084,	// (0x00068fe9) list_double_large_graphic_phob2_pane

0x9707,	// (0x0006466c) list_double_large_graphic_phob2_pane_g1_ParamLimits

0x9707,	// (0x0006466c) list_double_large_graphic_phob2_pane_g1

0x9714,	// (0x00064679) list_double_large_graphic_phob2_pane_g2_ParamLimits

0x9714,	// (0x00064679) list_double_large_graphic_phob2_pane_g2

0x0001,

0xfe44,	// (0x0006ada9) list_double_large_graphic_phob2_pane_g_ParamLimits

0xfe44,	// (0x0006ada9) list_double_large_graphic_phob2_pane_g

0x9720,	// (0x00064685) list_double_large_graphic_phob2_pane_t1_ParamLimits

0x9720,	// (0x00064685) list_double_large_graphic_phob2_pane_t1

0x9735,	// (0x0006469a) list_double_large_graphic_phob2_pane_t2_ParamLimits

0x9735,	// (0x0006469a) list_double_large_graphic_phob2_pane_t2

0x0001,

0xfe49,	// (0x0006adae) list_double_large_graphic_phob2_pane_t_ParamLimits

0xfe49,	// (0x0006adae) list_double_large_graphic_phob2_pane_t

0x0e6c,	// (0x0005bdd1) list_highlight_pane_cp024

0xd98b,	// (0x000688f0) phob2_cc_button_pane

0x9747,	// (0x000646ac) phob2_cc_data_pane_g1_ParamLimits

0x9747,	// (0x000646ac) phob2_cc_data_pane_g1

0x975c,	// (0x000646c1) phob2_cc_data_pane_g2_ParamLimits

0x975c,	// (0x000646c1) phob2_cc_data_pane_g2

0x0001,

0xfe4e,	// (0x0006adb3) phob2_cc_data_pane_g_ParamLimits

0xfe4e,	// (0x0006adb3) phob2_cc_data_pane_g

0x976e,	// (0x000646d3) phob2_cc_data_pane_t1_ParamLimits

0x976e,	// (0x000646d3) phob2_cc_data_pane_t1

0x9786,	// (0x000646eb) phob2_cc_data_pane_t2_ParamLimits

0x9786,	// (0x000646eb) phob2_cc_data_pane_t2

0x979e,	// (0x00064703) phob2_cc_data_pane_t3_ParamLimits

0x979e,	// (0x00064703) phob2_cc_data_pane_t3

0x0002,

0xfe53,	// (0x0006adb8) phob2_cc_data_pane_t_ParamLimits

0xfe53,	// (0x0006adb8) phob2_cc_data_pane_t

0xd993,	// (0x000688f8) phob2_cc_list_pane_ParamLimits

0xd993,	// (0x000688f8) phob2_cc_list_pane

0xe8ff,	// (0x00069864) scroll_pane_cp035_ParamLimits

0xe8ff,	// (0x00069864) scroll_pane_cp035

0x9880,	// (0x000647e5) bg_button_pane_cp033

0xd99f,	// (0x00068904) phob2_cc_button_pane_g1

0xd9ab,	// (0x00068910) phob2_cc_button_pane_t1

0xd9c0,	// (0x00068925) phob2_cc_button_pane_t2

0x0001,

0xfe5a,	// (0x0006adbf) phob2_cc_button_pane_t

0x97b8,	// (0x0006471d) list_double_large_graphic_phob2_cc_pane_ParamLimits

0x97b8,	// (0x0006471d) list_double_large_graphic_phob2_cc_pane

0x97cc,	// (0x00064731) list_double_large_graphic_phob2_cc_pane_g1_ParamLimits

0x97cc,	// (0x00064731) list_double_large_graphic_phob2_cc_pane_g1

0x97d8,	// (0x0006473d) list_double_large_graphic_phob2_cc_pane_g2_ParamLimits

0x97d8,	// (0x0006473d) list_double_large_graphic_phob2_cc_pane_g2

0x97e4,	// (0x00064749) list_double_large_graphic_phob2_cc_pane_g3_ParamLimits

0x97e4,	// (0x00064749) list_double_large_graphic_phob2_cc_pane_g3

0x97f0,	// (0x00064755) list_double_large_graphic_phob2_cc_pane_g4_ParamLimits

0x97f0,	// (0x00064755) list_double_large_graphic_phob2_cc_pane_g4

0x97fc,	// (0x00064761) list_double_large_graphic_phob2_cc_pane_g5_ParamLimits

0x97fc,	// (0x00064761) list_double_large_graphic_phob2_cc_pane_g5

0x0004,

0xfe5f,	// (0x0006adc4) list_double_large_graphic_phob2_cc_pane_g_ParamLimits

0xfe5f,	// (0x0006adc4) list_double_large_graphic_phob2_cc_pane_g

0x9808,	// (0x0006476d) list_double_large_graphic_phob2_cc_pane_t1_ParamLimits

0x9808,	// (0x0006476d) list_double_large_graphic_phob2_cc_pane_t1

0x9831,	// (0x00064796) list_double_large_graphic_phob2_cc_pane_t2_ParamLimits

0x9831,	// (0x00064796) list_double_large_graphic_phob2_cc_pane_t2

0x0001,

0xfe6a,	// (0x0006adcf) list_double_large_graphic_phob2_cc_pane_t_ParamLimits

0xfe6a,	// (0x0006adcf) list_double_large_graphic_phob2_cc_pane_t

0xd9d2,	// (0x00068937) list_highlight_pane_cp025_ParamLimits

0xd9d2,	// (0x00068937) list_highlight_pane_cp025

0x9880,	// (0x000647e5) bg_button_pane_cp033_ParamLimits

0xd99f,	// (0x00068904) phob2_cc_button_pane_g1_ParamLimits

0xd9ab,	// (0x00068910) phob2_cc_button_pane_t1_ParamLimits

0xd9c0,	// (0x00068925) phob2_cc_button_pane_t2_ParamLimits

0xfe5a,	// (0x0006adbf) phob2_cc_button_pane_t_ParamLimits

0x10c8,	// (0x0005c02d) popup_wgtman_window

0xe166,	// (0x000690cb) scroll_pane_cp038

0x92f4,	// (0x00064259) wgtman_btn_pane_cp_01_ParamLimits

0x92f4,	// (0x00064259) wgtman_btn_pane_cp_01

0xd9e0,	// (0x00068945) wgtman_content_pane

0xd729,	// (0x0006868e) wgtman_heading_pane

0x0e6c,	// (0x0005bdd1) bg_heading_pane_cp02

0xd9e9,	// (0x0006894e) wgtman_heading_pane_g1

0xd9f1,	// (0x00068956) wgtman_heading_pane_t1

0xd9ff,	// (0x00068964) scroll_pane_cp036

0xda07,	// (0x0006896c) wgtman_list_pane

0xda0f,	// (0x00068974) wgtman_list_pane_t1_ParamLimits

0xda0f,	// (0x00068974) wgtman_list_pane_t1

0xdcda,	// (0x00068c3f) cam4_grid_pane

0x7021,	// (0x00061f86) bg_button_pane_cp015_ParamLimits

0x7035,	// (0x00061f9a) bg_button_pane_cp016_ParamLimits

0x7048,	// (0x00061fad) bg_button_pane_cp017_ParamLimits

0x70a0,	// (0x00062005) popup_vitu2_query_window_g3_ParamLimits

0x70a0,	// (0x00062005) popup_vitu2_query_window_g3

0x715d,	// (0x000620c2) popup_vitu2_query_window_t6_ParamLimits

0x715d,	// (0x000620c2) popup_vitu2_query_window_t6

0x7188,	// (0x000620ed) popup_vitu2_query_window_t7_ParamLimits

0x7188,	// (0x000620ed) popup_vitu2_query_window_t7

0xec1c,	// (0x00069b81) cam4_grid_pane_g1

0xec25,	// (0x00069b8a) cam4_grid_pane_g2

0xda2d,	// (0x00068992) cam4_grid_pane_g3

0xda36,	// (0x0006899b) cam4_grid_pane_g4

0x0003,

0xfe6f,	// (0x0006add4) cam4_grid_pane_g

0x1d8a,	// (0x0005ccef) aid_placing_vt_slider_lsc_ParamLimits

0x2087,	// (0x0005cfec) vidtel_button_pane_ParamLimits

0x2087,	// (0x0005cfec) vidtel_button_pane

0x0e6c,	// (0x0005bdd1) bg_button_pane_cp034

0x985a,	// (0x000647bf) vidtel_button_pane_g1

0xda41,	// (0x000689a6) vidtel_button_pane_t1

0xe268,	// (0x000691cd) aid_size_vtel_slider_touch

0xe8ff,	// (0x00069864) scroll_pane_cp039

0xeb01,	// (0x00069a66) ncim_query_button_pane_cp01_ParamLimits

0xeb20,	// (0x00069a85) ncimui_query_pane_g1_ParamLimits

0x9880,	// (0x000647e5) input_focus_pane_cp012_ParamLimits

0xeb45,	// (0x00069aaa) ncim_query_entry_pane_t1_ParamLimits

0xe8ff,	// (0x00069864) scroll_pane_cp039_ParamLimits
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

} // end of namespace AknLayoutScalable_Abrw_pnl4_apps_nhd4_lsc_tch_Small
