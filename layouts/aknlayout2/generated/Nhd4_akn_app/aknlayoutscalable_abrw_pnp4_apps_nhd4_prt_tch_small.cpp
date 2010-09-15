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
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Apps::KByteCodedData_AknLayoutScalable_Elaf_pnp4_apps_nhd4_prt_tch + 0x0005a3c7 };

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
0x0f44,	// (0x0005b30b) Screen

0x0f50,	// (0x0005b317) application_window

0x0fac,	// (0x0005b373) area_bottom_pane_ParamLimits

0x0fac,	// (0x0005b373) area_bottom_pane

0x1004,	// (0x0005b3cb) area_top_pane_ParamLimits

0x1004,	// (0x0005b3cb) area_top_pane

0x1068,	// (0x0005b42f) call_video_uplink_pane_ParamLimits

0x1068,	// (0x0005b42f) call_video_uplink_pane

0x10a7,	// (0x0005b46e) main_pane_ParamLimits

0x10a7,	// (0x0005b46e) main_pane

0xcecd,	// (0x00067294) context_pane

0x3ed2,	// (0x0005e299) navi_pane

0x3ef8,	// (0x0005e2bf) popup_cale_events_window_ParamLimits

0x3ef8,	// (0x0005e2bf) popup_cale_events_window

0xcee0,	// (0x000672a7) popup_mup_playback_window

0x3f10,	// (0x0005e2d7) signal_pane

0xaf37,	// (0x000652fe) main_browser_pane

0xb0fb,	// (0x000654c2) main_burst_pane

0x3d54,	// (0x0005e11b) main_calc_pane

0xcec1,	// (0x00067288) main_cale_day_pane

0x1625,	// (0x0005b9ec) main_cale_month_pane

0xcec1,	// (0x00067288) main_cale_week_pane

0xb0fb,	// (0x000654c2) main_call_pane

0xabef,	// (0x00064fb6) main_call_poc_pane

0xb0fb,	// (0x000654c2) main_camera_pane

0xb0fb,	// (0x000654c2) main_chi_dic_pane

0xb8e4,	// (0x00065cab) main_clock_pane

0xabef,	// (0x00064fb6) main_fmradio_pane

0xb0fb,	// (0x000654c2) main_graph_messa_pane

0xabef,	// (0x00064fb6) main_help_pane

0xaf37,	// (0x000652fe) main_im_pane

0xae4a,	// (0x00065211) main_image_pane_ParamLimits

0xae4a,	// (0x00065211) main_image_pane

0xabef,	// (0x00064fb6) main_location2_pane

0xb0fb,	// (0x000654c2) main_location_pane

0xae4a,	// (0x00065211) main_messa_pane

0xabef,	// (0x00064fb6) main_mp2_pane

0xb0fb,	// (0x000654c2) main_mp_pane

0xabef,	// (0x00064fb6) main_msg_pane

0xabef,	// (0x00064fb6) main_mup_eq_pane

0xabef,	// (0x00064fb6) main_mup_pane

0xaf37,	// (0x000652fe) main_notes_pane

0xabef,	// (0x00064fb6) main_pec_pane

0xabef,	// (0x00064fb6) main_phob_pane

0xabef,	// (0x00064fb6) main_pinb_pane

0xabef,	// (0x00064fb6) main_postcard_pane

0xabef,	// (0x00064fb6) main_qdial_pane

0xb0fb,	// (0x000654c2) main_skin_pane

0xabef,	// (0x00064fb6) main_smil2_pane

0xb0fb,	// (0x000654c2) main_smil_pane

0xb0fb,	// (0x000654c2) main_video_pane

0xb0fb,	// (0x000654c2) main_video_tele_pane

0xae4a,	// (0x00065211) main_viewer_pane_ParamLimits

0xae4a,	// (0x00065211) main_viewer_pane

0xb0fb,	// (0x000654c2) main_vorec_pane

0x3da0,	// (0x0005e167) popup_blid_sat_info_window_ParamLimits

0x3da0,	// (0x0005e167) popup_blid_sat_info_window

0x3dc0,	// (0x0005e187) popup_dyc_status_message_window_ParamLimits

0x3dc0,	// (0x0005e187) popup_dyc_status_message_window

0x3dce,	// (0x0005e195) popup_grid_large_graphic_window_ParamLimits

0x3dce,	// (0x0005e195) popup_grid_large_graphic_window

0x3e5d,	// (0x0005e224) popup_loc_request_window_ParamLimits

0x3e5d,	// (0x0005e224) popup_loc_request_window

0x3eaa,	// (0x0005e271) popup_wml_address_window_ParamLimits

0x3eaa,	// (0x0005e271) popup_wml_address_window

0x3c2c,	// (0x0005dff3) call_muted_g1

0x38a1,	// (0x0005dc68) popup_call_audio_conf_window_ParamLimits

0x38a1,	// (0x0005dc68) popup_call_audio_conf_window

0x3c3c,	// (0x0005e003) popup_call_audio_first_window_ParamLimits

0x3c3c,	// (0x0005e003) popup_call_audio_first_window

0x3c7c,	// (0x0005e043) popup_call_audio_in_window_ParamLimits

0x3c7c,	// (0x0005e043) popup_call_audio_in_window

0x3ca0,	// (0x0005e067) popup_call_audio_out_window_ParamLimits

0x3ca0,	// (0x0005e067) popup_call_audio_out_window

0x3cc2,	// (0x0005e089) popup_call_audio_second_window_ParamLimits

0x3cc2,	// (0x0005e089) popup_call_audio_second_window

0x3cf2,	// (0x0005e0b9) popup_call_audio_wait_window_ParamLimits

0x3cf2,	// (0x0005e0b9) popup_call_audio_wait_window

0x3d13,	// (0x0005e0da) popup_number_entry_window_ParamLimits

0x3d13,	// (0x0005e0da) popup_number_entry_window

0xa7b2,	// (0x00064b79) bg_popup_call_pane_cp05_ParamLimits

0xa7b2,	// (0x00064b79) bg_popup_call_pane_cp05

0xa7d2,	// (0x00064b99) popup_number_entry_window_t1

0xa80f,	// (0x00064bd6) popup_number_entry_window_t2

0xa821,	// (0x00064be8) popup_number_entry_window_t3

0x0003,

0xf045,	// (0x0006940c) popup_number_entry_window_t

0xa833,	// (0x00064bfa) text_title_cp2

0xa846,	// (0x00064c0d) bg_popup_call_pane_cp_ParamLimits

0xa846,	// (0x00064c0d) bg_popup_call_pane_cp

0xa854,	// (0x00064c1b) call_thumbnail_pane

0xa85c,	// (0x00064c23) popup_call_audio_in_window_g1_ParamLimits

0xa85c,	// (0x00064c23) popup_call_audio_in_window_g1

0xa868,	// (0x00064c2f) popup_call_audio_in_window_g2_ParamLimits

0xa868,	// (0x00064c2f) popup_call_audio_in_window_g2

0xa874,	// (0x00064c3b) popup_call_audio_in_window_g3_ParamLimits

0xa874,	// (0x00064c3b) popup_call_audio_in_window_g3

0x0002,

0xf04e,	// (0x00069415) popup_call_audio_in_window_g_ParamLimits

0xf04e,	// (0x00069415) popup_call_audio_in_window_g

0xa880,	// (0x00064c47) popup_call_audio_in_window_t1_ParamLimits

0xa880,	// (0x00064c47) popup_call_audio_in_window_t1

0xa89c,	// (0x00064c63) popup_call_audio_in_window_t2_ParamLimits

0xa89c,	// (0x00064c63) popup_call_audio_in_window_t2

0xa8b8,	// (0x00064c7f) popup_call_audio_in_window_t3_ParamLimits

0xa8b8,	// (0x00064c7f) popup_call_audio_in_window_t3

0x0002,

0xf055,	// (0x0006941c) popup_call_audio_in_window_t_ParamLimits

0xf055,	// (0x0006941c) popup_call_audio_in_window_t

0xa846,	// (0x00064c0d) bg_popup_call_pane_cp01_ParamLimits

0xa846,	// (0x00064c0d) bg_popup_call_pane_cp01

0xa854,	// (0x00064c1b) call_thumbnail_pane_cp02

0xa8cb,	// (0x00064c92) call_type_pane_cp022

0xa8d3,	// (0x00064c9a) popup_call_audio_out_window_g1_ParamLimits

0xa8d3,	// (0x00064c9a) popup_call_audio_out_window_g1

0xa8e5,	// (0x00064cac) popup_call_audio_out_window_g2_ParamLimits

0xa8e5,	// (0x00064cac) popup_call_audio_out_window_g2

0xa8f1,	// (0x00064cb8) popup_call_audio_out_window_g3_ParamLimits

0xa8f1,	// (0x00064cb8) popup_call_audio_out_window_g3

0x0002,

0xf05c,	// (0x00069423) popup_call_audio_out_window_g_ParamLimits

0xf05c,	// (0x00069423) popup_call_audio_out_window_g

0xa903,	// (0x00064cca) popup_call_audio_out_window_t1_ParamLimits

0xa903,	// (0x00064cca) popup_call_audio_out_window_t1

0xa91b,	// (0x00064ce2) popup_call_audio_out_window_t2_ParamLimits

0xa91b,	// (0x00064ce2) popup_call_audio_out_window_t2

0x0001,

0xf063,	// (0x0006942a) popup_call_audio_out_window_t_ParamLimits

0xf063,	// (0x0006942a) popup_call_audio_out_window_t

0xa930,	// (0x00064cf7) bg_popup_call_pane_ParamLimits

0xa930,	// (0x00064cf7) bg_popup_call_pane

0x1226,	// (0x0005b5ed) call_thumbnail_pane_cp_ParamLimits

0x1226,	// (0x0005b5ed) call_thumbnail_pane_cp

0xa9b4,	// (0x00064d7b) call_type_pane_cp01_ParamLimits

0xa9b4,	// (0x00064d7b) call_type_pane_cp01

0xa9f8,	// (0x00064dbf) popup_call_audio_first_window_g1_ParamLimits

0xa9f8,	// (0x00064dbf) popup_call_audio_first_window_g1

0xaa44,	// (0x00064e0b) popup_call_audio_first_window_g2_ParamLimits

0xaa44,	// (0x00064e0b) popup_call_audio_first_window_g2

0x0001,

0xf068,	// (0x0006942f) popup_call_audio_first_window_g_ParamLimits

0xf068,	// (0x0006942f) popup_call_audio_first_window_g

0xaa88,	// (0x00064e4f) popup_call_audio_first_window_t1_ParamLimits

0xaa88,	// (0x00064e4f) popup_call_audio_first_window_t1

0xab34,	// (0x00064efb) popup_call_audio_first_window_t4_ParamLimits

0xab34,	// (0x00064efb) popup_call_audio_first_window_t4

0xabc0,	// (0x00064f87) popup_call_audio_first_window_t5_ParamLimits

0xabc0,	// (0x00064f87) popup_call_audio_first_window_t5

0x0002,

0xf06d,	// (0x00069434) popup_call_audio_first_window_t_ParamLimits

0xf06d,	// (0x00069434) popup_call_audio_first_window_t

0xabef,	// (0x00064fb6) bg_popup_call_pane_cp02

0xabf9,	// (0x00064fc0) call_type_pane_cp023

0xac01,	// (0x00064fc8) popup_call_audio_wait_window_g1

0xac09,	// (0x00064fd0) popup_call_audio_wait_window_g2

0x0001,

0xf074,	// (0x0006943b) popup_call_audio_wait_window_g

0xac11,	// (0x00064fd8) popup_call_audio_wait_window_t3

0xac1f,	// (0x00064fe6) bg_popup_call_pane_cp03_ParamLimits

0xac1f,	// (0x00064fe6) bg_popup_call_pane_cp03

0xac7f,	// (0x00065046) call_thumbnail_pane_cp011_ParamLimits

0xac7f,	// (0x00065046) call_thumbnail_pane_cp011

0xac8b,	// (0x00065052) call_type_pane_cp034_ParamLimits

0xac8b,	// (0x00065052) call_type_pane_cp034

0xacc7,	// (0x0006508e) popup_call_audio_second_window_g1_ParamLimits

0xacc7,	// (0x0006508e) popup_call_audio_second_window_g1

0xad03,	// (0x000650ca) popup_call_audio_second_window_g2_ParamLimits

0xad03,	// (0x000650ca) popup_call_audio_second_window_g2

0x0001,

0xf079,	// (0x00069440) popup_call_audio_second_window_g_ParamLimits

0xf079,	// (0x00069440) popup_call_audio_second_window_g

0xad3f,	// (0x00065106) popup_call_audio_second_window_t1_ParamLimits

0xad3f,	// (0x00065106) popup_call_audio_second_window_t1

0xadc0,	// (0x00065187) popup_call_audio_second_window_t2_ParamLimits

0xadc0,	// (0x00065187) popup_call_audio_second_window_t2

0xadf6,	// (0x000651bd) popup_call_audio_second_window_t3_ParamLimits

0xadf6,	// (0x000651bd) popup_call_audio_second_window_t3

0x0002,

0xf07e,	// (0x00069445) popup_call_audio_second_window_t_ParamLimits

0xf07e,	// (0x00069445) popup_call_audio_second_window_t

0xabef,	// (0x00064fb6) bg_popup_call_pane_cp04

0xae2c,	// (0x000651f3) list_conf_pane

0xae34,	// (0x000651fb) popup_call_audio_conf_window_t1

0xae42,	// (0x00065209) call_thumbnail_pane_g1

0xae4a,	// (0x00065211) bg_pinb_pane_ParamLimits

0xae4a,	// (0x00065211) bg_pinb_pane

0xae58,	// (0x0006521f) find_pinb_pane

0xae4a,	// (0x00065211) listscroll_pinb_pane_ParamLimits

0xae4a,	// (0x00065211) listscroll_pinb_pane

0xae62,	// (0x00065229) pinb_bg_pane_g1

0xae62,	// (0x00065229) pinb_bg_pane_g2

0xae62,	// (0x00065229) pinb_bg_pane_g3

0xae62,	// (0x00065229) pinb_bg_pane_g4

0xae62,	// (0x00065229) pinb_bg_pane_g5

0xae62,	// (0x00065229) pinb_bg_pane_g6

0xae62,	// (0x00065229) pinb_bg_pane_g7

0xae62,	// (0x00065229) pinb_bg_pane_g8

0xae62,	// (0x00065229) pinb_bg_pane_g9

0xae62,	// (0x00065229) pinb_bg_pane_g10

0x0009,

0xf085,	// (0x0006944c) pinb_bg_pane_g

0xa7a8,	// (0x00064b6f) grid_pinb_pane

0xa7a8,	// (0x00064b6f) list_pinb_pane

0xa7e5,	// (0x00064bac) scroll_pane_cp01_ParamLimits

0xa7e5,	// (0x00064bac) scroll_pane_cp01

0xae6c,	// (0x00065233) find_pinb_pane_g1_ParamLimits

0xae6c,	// (0x00065233) find_pinb_pane_g1

0xae84,	// (0x0006524b) find_pinb_pane_t1

0xae96,	// (0x0006525d) find_pinb_pane_t2

0x0001,

0xf09f,	// (0x00069466) find_pinb_pane_t

0xaeab,	// (0x00065272) input_focus_pane_cp01_ParamLimits

0xaeab,	// (0x00065272) input_focus_pane_cp01

0xaeb7,	// (0x0006527e) cell_pinb_pane_ParamLimits

0xaeb7,	// (0x0006527e) cell_pinb_pane

0xaec5,	// (0x0006528c) cell_pinb_pane_g1_ParamLimits

0xaec5,	// (0x0006528c) cell_pinb_pane_g1

0xaed3,	// (0x0006529a) cell_pinb_pane_g2_ParamLimits

0xaed3,	// (0x0006529a) cell_pinb_pane_g2

0xaed3,	// (0x0006529a) cell_pinb_pane_g3_ParamLimits

0xaed3,	// (0x0006529a) cell_pinb_pane_g3

0x0002,

0xf0a4,	// (0x0006946b) cell_pinb_pane_g_ParamLimits

0xf0a4,	// (0x0006946b) cell_pinb_pane_g

0xabef,	// (0x00064fb6) grid_highlight_pane_cp01

0xaeb7,	// (0x0006527e) list_pinb_item_pane_ParamLimits

0xaeb7,	// (0x0006527e) list_pinb_item_pane

0xa7a8,	// (0x00064b6f) list_highlight_pane_cp02

0xaee1,	// (0x000652a8) list_pinb_item_pane_g1_ParamLimits

0xaee1,	// (0x000652a8) list_pinb_item_pane_g1

0xaed3,	// (0x0006529a) list_pinb_item_pane_g2_ParamLimits

0xaed3,	// (0x0006529a) list_pinb_item_pane_g2

0xaec5,	// (0x0006528c) list_pinb_item_pane_g3_ParamLimits

0xaec5,	// (0x0006528c) list_pinb_item_pane_g3

0xaed3,	// (0x0006529a) list_pinb_item_pane_g4_ParamLimits

0xaed3,	// (0x0006529a) list_pinb_item_pane_g4

0x0003,

0x0005,	// (0x0005a3cc) list_pinb_item_pane_g_ParamLimits

0x0005,	// (0x0005a3cc) list_pinb_item_pane_g

0xaeef,	// (0x000652b6) list_pinb_item_pane_t1_ParamLimits

0xaeef,	// (0x000652b6) list_pinb_item_pane_t1

0x1264,	// (0x0005b62b) calc_display_pane

0x1282,	// (0x0005b649) calc_paper_pane

0x129e,	// (0x0005b665) grid_calc_pane

0xabef,	// (0x00064fb6) bg_list_pane_cp01

0x12ca,	// (0x0005b691) clock_g1

0x12d2,	// (0x0005b699) clock_g2

0x0001,

0xf0ab,	// (0x00069472) clock_g

0x12dc,	// (0x0005b6a3) clock_t1_ParamLimits

0x12dc,	// (0x0005b6a3) clock_t1

0x12f1,	// (0x0005b6b8) clock_t2_ParamLimits

0x12f1,	// (0x0005b6b8) clock_t2

0x1303,	// (0x0005b6ca) clock_t3_ParamLimits

0x1303,	// (0x0005b6ca) clock_t3

0x1315,	// (0x0005b6dc) clock_t4_ParamLimits

0x1315,	// (0x0005b6dc) clock_t4

0x1327,	// (0x0005b6ee) clock_t5_ParamLimits

0x1327,	// (0x0005b6ee) clock_t5

0x133c,	// (0x0005b703) clock_t6_ParamLimits

0x133c,	// (0x0005b703) clock_t6

0x134e,	// (0x0005b715) clock_t7_ParamLimits

0x134e,	// (0x0005b715) clock_t7

0x1360,	// (0x0005b727) clock_t8_ParamLimits

0x1360,	// (0x0005b727) clock_t8

0x1376,	// (0x0005b73d) clock_t9_ParamLimits

0x1376,	// (0x0005b73d) clock_t9

0x0008,

0xf0b0,	// (0x00069477) clock_t_ParamLimits

0xf0b0,	// (0x00069477) clock_t

0xaf03,	// (0x000652ca) popup_clock_analogue_window_cp02

0xaf03,	// (0x000652ca) popup_clock_digital_window_cp01

0xabef,	// (0x00064fb6) listscroll_help_pane

0xabef,	// (0x00064fb6) phob_pre_status_pane

0xaf0b,	// (0x000652d2) grid_qdial_pane

0xae4a,	// (0x00065211) listscroll_mce_pane

0xae4a,	// (0x00065211) bg_notes_pane

0xaf15,	// (0x000652dc) list_notes_pane

0x138c,	// (0x0005b753) scroll_pane_cp06

0xaf23,	// (0x000652ea) bg_calc_paper_pane

0x139b,	// (0x0005b762) list_calc_pane

0xaf37,	// (0x000652fe) bg_calc_display_pane

0x13b5,	// (0x0005b77c) calc_display_pane_t1

0x13ca,	// (0x0005b791) calc_display_pane_t2

0x13df,	// (0x0005b7a6) calc_display_pane_t3

0x0002,

0xf0c3,	// (0x0006948a) calc_display_pane_t

0x13f1,	// (0x0005b7b8) cell_calc_pane_ParamLimits

0x13f1,	// (0x0005b7b8) cell_calc_pane

0xaf43,	// (0x0006530a) bg_calc_paper_pane_g1

0xaf4f,	// (0x00065316) bg_calc_paper_pane_g2

0xaf5b,	// (0x00065322) bg_calc_paper_pane_g3

0xaf67,	// (0x0006532e) bg_calc_paper_pane_g4

0xaf73,	// (0x0006533a) bg_calc_paper_pane_g5

0x141e,	// (0x0005b7e5) bg_calc_paper_pane_g6

0x142f,	// (0x0005b7f6) bg_calc_paper_pane_g7

0x1440,	// (0x0005b807) bg_calc_paper_pane_g8

0x0007,

0xf0ca,	// (0x00069491) bg_calc_paper_pane_g

0x1451,	// (0x0005b818) calc_bg_paper_pane_g9

0x1462,	// (0x0005b829) list_calc_item_pane_ParamLimits

0x1462,	// (0x0005b829) list_calc_item_pane

0xaf7f,	// (0x00065346) list_calc_item_pane_g1

0x148f,	// (0x0005b856) list_calc_item_pane_t1_ParamLimits

0x148f,	// (0x0005b856) list_calc_item_pane_t1

0x14a1,	// (0x0005b868) list_calc_item_pane_t2_ParamLimits

0x14a1,	// (0x0005b868) list_calc_item_pane_t2

0x0001,

0xf0db,	// (0x000694a2) list_calc_item_pane_t_ParamLimits

0xf0db,	// (0x000694a2) list_calc_item_pane_t

0xae62,	// (0x00065229) cell_calc_pane_g1

0xaf8c,	// (0x00065353) grid_highlight_pane_cp02

0x14d1,	// (0x0005b898) bg_calc_display_pane_g1

0x14da,	// (0x0005b8a1) bg_calc_display_pane_g2

0x14e4,	// (0x0005b8ab) bg_calc_display_pane_g3

0x0002,

0xf0e5,	// (0x000694ac) bg_calc_display_pane_g

0x14ed,	// (0x0005b8b4) cell_qdial_pane_ParamLimits

0x14ed,	// (0x0005b8b4) cell_qdial_pane

0x1501,	// (0x0005b8c8) cell_qdial_pane_g1_ParamLimits

0x1501,	// (0x0005b8c8) cell_qdial_pane_g1

0x150e,	// (0x0005b8d5) cell_qdial_pane_g2_ParamLimits

0x150e,	// (0x0005b8d5) cell_qdial_pane_g2

0xafae,	// (0x00065375) cell_qdial_pane_g3_ParamLimits

0xafae,	// (0x00065375) cell_qdial_pane_g3

0x0003,

0xf0ec,	// (0x000694b3) cell_qdial_pane_g_ParamLimits

0xf0ec,	// (0x000694b3) cell_qdial_pane_g

0x152b,	// (0x0005b8f2) cell_qdial_pane_t1_ParamLimits

0x152b,	// (0x0005b8f2) cell_qdial_pane_t1

0x1543,	// (0x0005b90a) cell_qdial_pane_t2_ParamLimits

0x1543,	// (0x0005b90a) cell_qdial_pane_t2

0x1556,	// (0x0005b91d) cell_qdial_pane_t3_ParamLimits

0x1556,	// (0x0005b91d) cell_qdial_pane_t3

0x0002,

0xf0f5,	// (0x000694bc) cell_qdial_pane_t_ParamLimits

0xf0f5,	// (0x000694bc) cell_qdial_pane_t

0xabef,	// (0x00064fb6) grid_highlight_pane_cp04

0xafba,	// (0x00065381) thumbnail_qdial_pane_ParamLimits

0xafba,	// (0x00065381) thumbnail_qdial_pane

0xb016,	// (0x000653dd) list_help_pane

0xb01f,	// (0x000653e6) scroll_pane_cp02

0x1569,	// (0x0005b930) help_list_pane_t1_ParamLimits

0x1569,	// (0x0005b930) help_list_pane_t1

0x15a3,	// (0x0005b96a) bg_notes_pane_g2

0x15ab,	// (0x0005b972) bg_notes_pane_g3

0x15b3,	// (0x0005b97a) notes_bg_pane_g1

0x15bb,	// (0x0005b982) notes_bg_pane_g4

0x15c3,	// (0x0005b98a) notes_bg_pane_g5

0x15cb,	// (0x0005b992) notes_bg_pane_g6

0x15d3,	// (0x0005b99a) notes_bg_pane_g7

0x15db,	// (0x0005b9a2) notes_bg_pane_g8

0x15e3,	// (0x0005b9aa) notes_bg_pane_g9

0x0006,

0xf0fc,	// (0x000694c3) notes_bg_pane_g

0x15eb,	// (0x0005b9b2) list_notes_text_pane_ParamLimits

0x15eb,	// (0x0005b9b2) list_notes_text_pane

0xb028,	// (0x000653ef) list_notes_text_pane_g1

0x1617,	// (0x0005b9de) list_notes_text_pane_t1

0x1625,	// (0x0005b9ec) listscroll_cale_week_pane

0x164a,	// (0x0005ba11) bg_cale_heading_pane

0xb04b,	// (0x00065412) bg_cale_pane_cp01

0x166c,	// (0x0005ba33) cale_week_corner_pane

0x1686,	// (0x0005ba4d) cale_week_day_heading_pane

0x16a8,	// (0x0005ba6f) cale_week_scroll_pane_g1

0x16c5,	// (0x0005ba8c) cale_week_scroll_pane_g2

0x16d8,	// (0x0005ba9f) cale_week_scroll_pane_g3

0x16eb,	// (0x0005bab2) cale_week_scroll_pane_g4

0x16fe,	// (0x0005bac5) cale_week_scroll_pane_g5

0x1711,	// (0x0005bad8) cale_week_scroll_pane_g6

0x1724,	// (0x0005baeb) cale_week_scroll_pane_g7

0x1739,	// (0x0005bb00) cale_week_scroll_pane_g8

0x174e,	// (0x0005bb15) cale_week_scroll_pane_g9

0x1761,	// (0x0005bb28) cale_week_scroll_pane_g10

0x1774,	// (0x0005bb3b) cale_week_scroll_pane_g11

0x1787,	// (0x0005bb4e) cale_week_scroll_pane_g12

0x179e,	// (0x0005bb65) cale_week_scroll_pane_g13

0x17b9,	// (0x0005bb80) cale_week_scroll_pane_g14

0x17d4,	// (0x0005bb9b) cale_week_scroll_pane_g15

0x000f,

0xf10b,	// (0x000694d2) cale_week_scroll_pane_g

0x1804,	// (0x0005bbcb) cale_week_time_pane

0x1819,	// (0x0005bbe0) grid_cale_week_pane

0xb07a,	// (0x00065441) scroll_pane_cp08

0x1838,	// (0x0005bbff) cell_cale_week_pane_ParamLimits

0x1838,	// (0x0005bbff) cell_cale_week_pane

0x189a,	// (0x0005bc61) cale_week_day_heading_pane_t1

0x18b5,	// (0x0005bc7c) cale_week_day_heading_pane_t2

0x18d0,	// (0x0005bc97) cale_week_day_heading_pane_t3

0x18eb,	// (0x0005bcb2) cale_week_day_heading_pane_t4

0x1906,	// (0x0005bccd) cale_week_day_heading_pane_t5

0x1921,	// (0x0005bce8) cale_week_day_heading_pane_t6

0x193c,	// (0x0005bd03) cale_week_day_heading_pane_t7

0x0006,

0xf12c,	// (0x000694f3) cale_week_day_heading_pane_t

0xb0a9,	// (0x00065470) bg_cale_side_pane

0x1957,	// (0x0005bd1e) cale_week_time_pane_t1

0x1971,	// (0x0005bd38) cale_week_time_pane_t2

0x198b,	// (0x0005bd52) cale_week_time_pane_t3

0x19a5,	// (0x0005bd6c) cale_week_time_pane_t4

0x19bf,	// (0x0005bd86) cale_week_time_pane_t5

0x19d9,	// (0x0005bda0) cale_week_time_pane_t6

0x19f9,	// (0x0005bdc0) cale_week_time_pane_t7

0x1a1b,	// (0x0005bde2) cale_week_time_pane_t8

0x0007,

0xf13b,	// (0x00069502) cale_week_time_pane_t

0x1a3f,	// (0x0005be06) cell_cale_week_pane_g2

0x1a63,	// (0x0005be2a) cell_cale_week_pane_g3_ParamLimits

0x1a63,	// (0x0005be2a) cell_cale_week_pane_g3

0xb0b7,	// (0x0006547e) grid_highlight_pane_cp07

0xb0bf,	// (0x00065486) listscroll_gms_pane

0xb0c9,	// (0x00065490) grid_gms_pane

0xb0d2,	// (0x00065499) listscroll_gms_pane_g1

0xb0da,	// (0x000654a1) listscroll_gms_pane_g2

0x0001,

0x00c6,	// (0x0005a48d) listscroll_gms_pane_g

0x1a7b,	// (0x0005be42) scroll_pane_cp010

0x1a86,	// (0x0005be4d) cell_gms_pane_ParamLimits

0x1a86,	// (0x0005be4d) cell_gms_pane

0x1a96,	// (0x0005be5d) cell_gms_pane_g1

0xb0e2,	// (0x000654a9) cell_gms_pane_g2

0xb028,	// (0x000653ef) cell_gms_pane_g3

0xb0ea,	// (0x000654b1) cell_gms_pane_g4

0x0003,

0xf14c,	// (0x00069513) cell_gms_pane_g

0xb0f3,	// (0x000654ba) grid_highlight_pane_cp09

0x3bb0,	// (0x0005df77) phob_pre_status_pane_g1

0x3bb8,	// (0x0005df7f) phob_pre_status_pane_g2

0x3bc0,	// (0x0005df87) phob_pre_status_pane_g3

0x3bc8,	// (0x0005df8f) phob_pre_status_pane_g4

0x0004,

0xf378,	// (0x0006973f) phob_pre_status_pane_g

0x3bd8,	// (0x0005df9f) phob_pre_status_pane_t1

0x3be8,	// (0x0005dfaf) phob_pre_status_pane_t2

0x3bf8,	// (0x0005dfbf) phob_pre_status_pane_t3

0x0002,

0xf383,	// (0x0006974a) phob_pre_status_pane_t

0xb0fb,	// (0x000654c2) bg_list_pane_cp05

0x1aa6,	// (0x0005be6d) grid_vorec_pane

0x1ab0,	// (0x0005be77) vorec_t1

0x1abe,	// (0x0005be85) vorec_t2

0x1acc,	// (0x0005be93) vorec_t3

0x1ada,	// (0x0005bea1) vorec_t4

0x8c5b,	// (0x00063022) vorec_t5

0x8c69,	// (0x00063030) vorec_t6

0x0004,

0xf155,	// (0x0006951c) vorec_t

0x8c77,	// (0x0006303e) wait_bar_pane_cp01

0x1af6,	// (0x0005bebd) cell_vorec_pane_ParamLimits

0x1af6,	// (0x0005bebd) cell_vorec_pane

0x1b09,	// (0x0005bed0) cell_vorec_pane_g1

0xabef,	// (0x00064fb6) grid_highlight_pane_cp05

0xaeb7,	// (0x0006527e) cams_zoom_pane

0xaeb7,	// (0x0006527e) image_vga_pane

0xaed3,	// (0x0006529a) main_camera_pane_g1

0xaed3,	// (0x0006529a) main_camera_pane_g2

0xaed3,	// (0x0006529a) main_camera_pane_g3

0xaed3,	// (0x0006529a) main_camera_pane_g4

0xaed3,	// (0x0006529a) main_camera_pane_g5

0xaed3,	// (0x0006529a) main_camera_pane_g6

0xaed3,	// (0x0006529a) main_camera_pane_g7

0x0007,

0xf160,	// (0x00069527) main_camera_pane_g

0xb8bf,	// (0x00065c86) main_camera_pane_t1

0xb8bf,	// (0x00065c86) main_camera_pane_t2

0x0001,

0xf171,	// (0x00069538) main_camera_pane_t

0x1b13,	// (0x0005beda) cams_zoom_pane_cp_ParamLimits

0x1b13,	// (0x0005beda) cams_zoom_pane_cp

0x1b41,	// (0x0005bf08) image_cif_pane_ParamLimits

0x1b41,	// (0x0005bf08) image_cif_pane

0xa7a8,	// (0x00064b6f) image_subqcif_pane

0x1b4f,	// (0x0005bf16) main_video_pane_g1_ParamLimits

0x1b4f,	// (0x0005bf16) main_video_pane_g1

0x1b77,	// (0x0005bf3e) main_video_pane_g2_ParamLimits

0x1b77,	// (0x0005bf3e) main_video_pane_g2

0x1baa,	// (0x0005bf71) main_video_pane_g3_ParamLimits

0x1baa,	// (0x0005bf71) main_video_pane_g3

0x1baa,	// (0x0005bf71) main_video_pane_g4_ParamLimits

0x1baa,	// (0x0005bf71) main_video_pane_g4

0x1bd8,	// (0x0005bf9f) main_video_pane_g5_ParamLimits

0x1bd8,	// (0x0005bf9f) main_video_pane_g5

0xb117,	// (0x000654de) main_video_pane_g6_ParamLimits

0xb117,	// (0x000654de) main_video_pane_g6

0x0006,

0xf176,	// (0x0006953d) main_video_pane_g_ParamLimits

0xf176,	// (0x0006953d) main_video_pane_g

0x1bf4,	// (0x0005bfbb) main_video_pane_t1_ParamLimits

0x1bf4,	// (0x0005bfbb) main_video_pane_t1

0xb131,	// (0x000654f8) cams_zoom_pane_g1

0xb131,	// (0x000654f8) cams_zoom_pane_g2

0xb131,	// (0x000654f8) cams_zoom_pane_g3

0xb131,	// (0x000654f8) cams_zoom_pane_g4

0x0003,

0x0104,	// (0x0005a4cb) cams_zoom_pane_g

0x1c3a,	// (0x0005c001) grid_cams_pane

0x1c48,	// (0x0005c00f) linegrid_cams_pane

0x1c56,	// (0x0005c01d) cell_cams_pane_ParamLimits

0x1c56,	// (0x0005c01d) cell_cams_pane

0xb13b,	// (0x00065502) cams_burst_image_pane

0xb143,	// (0x0006550a) cell_cams_pane_g1

0xabef,	// (0x00064fb6) grid_highlight_pane_cp03

0xae62,	// (0x00065229) mp_bg_pane_g1

0xa7a8,	// (0x00064b6f) bg_list_pane_cp03

0xa7a8,	// (0x00064b6f) bg_mp_pane

0xa7a8,	// (0x00064b6f) grid_mp_pane

0xb131,	// (0x000654f8) media_player_g1

0xb658,	// (0x00065a1f) media_player_t1

0xb658,	// (0x00065a1f) media_player_t2

0xb658,	// (0x00065a1f) media_player_t3

0xb658,	// (0x00065a1f) media_player_t4

0xb658,	// (0x00065a1f) media_player_t5

0xb658,	// (0x00065a1f) media_player_t6

0xb658,	// (0x00065a1f) media_player_t7

0x0006,

0xf369,	// (0x00069730) media_player_t

0xa7a8,	// (0x00064b6f) wait_bar_pane_cp02

0xf35c,	// (0x00069723) main_usb_pane_t

0xb8e4,	// (0x00065cab) cell_mp_pane

0xae62,	// (0x00065229) cell_mp_pane_g1

0xabef,	// (0x00064fb6) grid_highlight_pane_cp06

0xb14b,	// (0x00065512) grid_skin_colour_pane

0xb153,	// (0x0006551a) list_highlight_pane_cp03

0x1c69,	// (0x0005c030) skin_g1

0xb15b,	// (0x00065522) skin_t1

0xb16a,	// (0x00065531) skin_t2

0x0001,

0x0132,	// (0x0005a4f9) skin_t

0x1c73,	// (0x0005c03a) cell_skin_colour_pane_ParamLimits

0x1c73,	// (0x0005c03a) cell_skin_colour_pane

0xb178,	// (0x0006553f) cell_skin_colour_pane_g1

0x1cf7,	// (0x0005c0be) call_video_g1_ParamLimits

0x1cf7,	// (0x0005c0be) call_video_g1

0x1d07,	// (0x0005c0ce) call_video_g2_ParamLimits

0x1d07,	// (0x0005c0ce) call_video_g2

0x0001,

0xf185,	// (0x0006954c) call_video_g_ParamLimits

0xf185,	// (0x0006954c) call_video_g

0x1d61,	// (0x0005c128) call_video_uplink_pane_cp1_ParamLimits

0x1d61,	// (0x0005c128) call_video_uplink_pane_cp1

0xb18a,	// (0x00065551) call_video_uplink_pane_cp2

0x1e2d,	// (0x0005c1f4) video_down_crop_pane_ParamLimits

0x1e2d,	// (0x0005c1f4) video_down_crop_pane

0x1f1f,	// (0x0005c2e6) video_down_pane_ParamLimits

0x1f1f,	// (0x0005c2e6) video_down_pane

0xb192,	// (0x00065559) video_down_subqcif_pane_ParamLimits

0xb192,	// (0x00065559) video_down_subqcif_pane

0xb1aa,	// (0x00065571) video_down_subqcif_pane_cp_ParamLimits

0xb1aa,	// (0x00065571) video_down_subqcif_pane_cp

0xb1d0,	// (0x00065597) im_reading_pane_ParamLimits

0xb1d0,	// (0x00065597) im_reading_pane

0x203f,	// (0x0005c406) im_writing_pane_ParamLimits

0x203f,	// (0x0005c406) im_writing_pane

0x205d,	// (0x0005c424) im_reading_pane_t1

0xb1ea,	// (0x000655b1) list_im_pane

0xb1fb,	// (0x000655c2) scroll_pane_cp07

0x20b5,	// (0x0005c47c) im_writing_pane_t1_ParamLimits

0x20b5,	// (0x0005c47c) im_writing_pane_t1

0xb214,	// (0x000655db) im_writing_pane_t2_ParamLimits

0xb214,	// (0x000655db) im_writing_pane_t2

0x0001,

0xf18f,	// (0x00069556) im_writing_pane_t_ParamLimits

0xf18f,	// (0x00069556) im_writing_pane_t

0xabef,	// (0x00064fb6) input_focus_pane_cp04

0xabef,	// (0x00064fb6) input_focus_pane_cp05

0x20c7,	// (0x0005c48e) list_im_single_pane_ParamLimits

0x20c7,	// (0x0005c48e) list_im_single_pane

0x20ee,	// (0x0005c4b5) list_single_im_pane_t1

0xb0fb,	// (0x000654c2) blid_accuracy_pane

0xb0fb,	// (0x000654c2) blid_compass_pane

0xce79,	// (0x00067240) main_location_t1

0xce79,	// (0x00067240) main_location_t2

0xce79,	// (0x00067240) main_location_t3

0x0002,

0x049b,	// (0x0005a862) main_location_t

0xabef,	// (0x00064fb6) aid_levels_location

0xae62,	// (0x00065229) blid_accuracy_pane_g1

0xae62,	// (0x00065229) blid_accuracy_pane_g2

0x0001,

0x0190,	// (0x0005a557) blid_accuracy_pane_g

0xb25c,	// (0x00065623) wml_content_pane

0xb29a,	// (0x00065661) wml_button_pane_ParamLimits

0xb29a,	// (0x00065661) wml_button_pane

0x20fd,	// (0x0005c4c4) wml_list_single_large_pane_ParamLimits

0x20fd,	// (0x0005c4c4) wml_list_single_large_pane

0x2128,	// (0x0005c4ef) wml_list_single_medium_pane_ParamLimits

0x2128,	// (0x0005c4ef) wml_list_single_medium_pane

0x215a,	// (0x0005c521) wml_list_single_small_pane_ParamLimits

0x215a,	// (0x0005c521) wml_list_single_small_pane

0xb2ae,	// (0x00065675) wml_selection_box_pane_ParamLimits

0xb2ae,	// (0x00065675) wml_selection_box_pane

0xb2c1,	// (0x00065688) wml_list_single_pane_t1

0xb2d0,	// (0x00065697) wml_list_single_medium_pane_t1

0xb2df,	// (0x000656a6) wml_list_single_large_pane_t1

0xb2ee,	// (0x000656b5) input_focus_pane_cp02_ParamLimits

0xb2ee,	// (0x000656b5) input_focus_pane_cp02

0xb301,	// (0x000656c8) wml_selection_box_pane_g1

0xb30a,	// (0x000656d1) wml_selection_box_pane_t1_ParamLimits

0xb30a,	// (0x000656d1) wml_selection_box_pane_t1

0xae4a,	// (0x00065211) bg_wml_button_pane_ParamLimits

0xae4a,	// (0x00065211) bg_wml_button_pane

0xb322,	// (0x000656e9) wml_button_pane_g1

0xb32a,	// (0x000656f1) wml_button_pane_t1

0xb322,	// (0x000656e9) wml_button_bg_pane_g1

0xb33a,	// (0x00065701) wml_button_bg_pane_g2

0xb342,	// (0x00065709) wml_button_bg_pane_g3

0xb34a,	// (0x00065711) wml_button_bg_pane_g4

0xb352,	// (0x00065719) wml_button_bg_pane_g5

0xb35a,	// (0x00065721) wml_button_bg_pane_g6

0xb362,	// (0x00065729) wml_button_bg_pane_g7

0xb36a,	// (0x00065731) wml_button_bg_pane_g8

0xb372,	// (0x00065739) wml_button_bg_pane_g9

0x0008,

0x0146,	// (0x0005a50d) wml_button_bg_pane_g

0x2197,	// (0x0005c55e) bg_list_pane_cp02

0xb37a,	// (0x00065741) mce_header_pane_ParamLimits

0xb37a,	// (0x00065741) mce_header_pane

0xb390,	// (0x00065757) mce_icon_pane

0xb390,	// (0x00065757) mce_image_pane

0xb399,	// (0x00065760) mce_text_pane_ParamLimits

0xb399,	// (0x00065760) mce_text_pane

0x21a1,	// (0x0005c568) scroll_pane_cp03

0xb292,	// (0x00065659) scroll_pane_cp04

0xb3ac,	// (0x00065773) scroll_pane_cp05_ParamLimits

0xb3ac,	// (0x00065773) scroll_pane_cp05

0x21ab,	// (0x0005c572) mce_header_field_pane_ParamLimits

0x21ab,	// (0x0005c572) mce_header_field_pane

0x21cb,	// (0x0005c592) mce_header_field_pane_2_ParamLimits

0x21cb,	// (0x0005c592) mce_header_field_pane_2

0x21e1,	// (0x0005c5a8) mce_header_field_pane_3

0x21e9,	// (0x0005c5b0) list_single_mce_message_pane_ParamLimits

0x21e9,	// (0x0005c5b0) list_single_mce_message_pane

0x2217,	// (0x0005c5de) list_single_mce_smart_pane_ParamLimits

0x2217,	// (0x0005c5de) list_single_mce_smart_pane

0xb3b8,	// (0x0006577f) input_focus_pane_cp03

0xb3c1,	// (0x00065788) list_header_data_pane

0x2250,	// (0x0005c617) mce_header_field_pane_t1

0x225e,	// (0x0005c625) list_single_mce_header_pane_ParamLimits

0x225e,	// (0x0005c625) list_single_mce_header_pane

0xb3c9,	// (0x00065790) list_single_mce_header_pane_t1

0xb3d8,	// (0x0006579f) list_single_mce_message_pane_g1

0xb3e0,	// (0x000657a7) list_single_mce_message_pane_t1

0x22b4,	// (0x0005c67b) bg_cale_heading_pane_cp01_ParamLimits

0x22b4,	// (0x0005c67b) bg_cale_heading_pane_cp01

0xb3ee,	// (0x000657b5) bg_cale_pane_cp02_ParamLimits

0xb3ee,	// (0x000657b5) bg_cale_pane_cp02

0x2302,	// (0x0005c6c9) cale_month_corner_pane

0x2321,	// (0x0005c6e8) cale_month_day_heading_pane_ParamLimits

0x2321,	// (0x0005c6e8) cale_month_day_heading_pane

0x2387,	// (0x0005c74e) cale_month_pane_g1_ParamLimits

0x2387,	// (0x0005c74e) cale_month_pane_g1

0x23ca,	// (0x0005c791) cale_month_pane_g2_ParamLimits

0x23ca,	// (0x0005c791) cale_month_pane_g2

0x2404,	// (0x0005c7cb) cale_month_pane_g3_ParamLimits

0x2404,	// (0x0005c7cb) cale_month_pane_g3

0x2454,	// (0x0005c81b) cale_month_pane_g4_ParamLimits

0x2454,	// (0x0005c81b) cale_month_pane_g4

0x24a4,	// (0x0005c86b) cale_month_pane_g5_ParamLimits

0x24a4,	// (0x0005c86b) cale_month_pane_g5

0x24f4,	// (0x0005c8bb) cale_month_pane_g6_ParamLimits

0x24f4,	// (0x0005c8bb) cale_month_pane_g6

0x2544,	// (0x0005c90b) cale_month_pane_g7_ParamLimits

0x2544,	// (0x0005c90b) cale_month_pane_g7

0x25ac,	// (0x0005c973) cale_month_pane_g8_ParamLimits

0x25ac,	// (0x0005c973) cale_month_pane_g8

0x2614,	// (0x0005c9db) cale_month_pane_g9_ParamLimits

0x2614,	// (0x0005c9db) cale_month_pane_g9

0x2672,	// (0x0005ca39) cale_month_pane_g10_ParamLimits

0x2672,	// (0x0005ca39) cale_month_pane_g10

0x26d0,	// (0x0005ca97) cale_month_pane_g11_ParamLimits

0x26d0,	// (0x0005ca97) cale_month_pane_g11

0x2724,	// (0x0005caeb) cale_month_pane_g12_ParamLimits

0x2724,	// (0x0005caeb) cale_month_pane_g12

0x277a,	// (0x0005cb41) cale_month_pane_g13_ParamLimits

0x277a,	// (0x0005cb41) cale_month_pane_g13

0x000c,

0xf194,	// (0x0006955b) cale_month_pane_g_ParamLimits

0xf194,	// (0x0006955b) cale_month_pane_g

0x27d0,	// (0x0005cb97) cale_month_week_pane

0x27f4,	// (0x0005cbbb) grid_cale_month_pane_ParamLimits

0x27f4,	// (0x0005cbbb) grid_cale_month_pane

0x2851,	// (0x0005cc18) cale_month_day_heading_pane_t1

0x28d7,	// (0x0005cc9e) cale_month_day_heading_pane_t2

0x2950,	// (0x0005cd17) cale_month_day_heading_pane_t3

0x29c9,	// (0x0005cd90) cale_month_day_heading_pane_t4

0x2a42,	// (0x0005ce09) cale_month_day_heading_pane_t5

0x2abb,	// (0x0005ce82) cale_month_day_heading_pane_t6

0x2b34,	// (0x0005cefb) cale_month_day_heading_pane_t7

0x0006,

0xf1af,	// (0x00069576) cale_month_day_heading_pane_t

0xb0a9,	// (0x00065470) bg_cale_side_pane_cp01

0x2bc5,	// (0x0005cf8c) cale_month_week_pane_t1

0x2bde,	// (0x0005cfa5) cale_month_week_pane_t2

0x2bf7,	// (0x0005cfbe) cale_month_week_pane_t3

0x2c10,	// (0x0005cfd7) cale_month_week_pane_t4

0x2c2b,	// (0x0005cff2) cale_month_week_pane_t5

0x2c4c,	// (0x0005d013) cale_month_week_pane_t6

0x0005,

0xf1be,	// (0x00069585) cale_month_week_pane_t

0x2c6d,	// (0x0005d034) cell_cale_month_pane_ParamLimits

0x2c6d,	// (0x0005d034) cell_cale_month_pane

0x2d93,	// (0x0005d15a) cell_cale_month_pane_g1

0x2d9f,	// (0x0005d166) cell_cale_month_pane_t1_ParamLimits

0x2d9f,	// (0x0005d166) cell_cale_month_pane_t1

0xb0b7,	// (0x0006547e) grid_highlight_pane_cp08

0xae62,	// (0x00065229) main_smil_g1

0x2dcb,	// (0x0005d192) smil_status_pane

0xb42d,	// (0x000657f4) smil_text_pane

0xcd51,	// (0x00067118) bg_popup_call3_rect_pane_g8

0xcd59,	// (0x00067120) bg_popup_call3_rect_pane_g9

0x0008,

0x041c,	// (0x0005a7e3) bg_popup_call3_rect_pane_g

0xcf42,	// (0x00067309) smil_status_volume_pane_g1

0xb437,	// (0x000657fe) smil_status_pane_t1

0x3f59,	// (0x0005e320) volume_smil_pane

0xb44e,	// (0x00065815) list_smil_text_pane

0x2dde,	// (0x0005d1a5) scroll_pane_cp011

0x2de9,	// (0x0005d1b0) smil_text_list_pane_t1_ParamLimits

0x2de9,	// (0x0005d1b0) smil_text_list_pane_t1

0x2e76,	// (0x0005d23d) aid_volume_smil_ParamLimits

0x2e76,	// (0x0005d23d) aid_volume_smil

0xae62,	// (0x00065229) smil_volume_pane_g1

0xae62,	// (0x00065229) smil_volume_pane_g2

0x0001,

0x0190,	// (0x0005a557) smil_volume_pane_g

0x1625,	// (0x0005b9ec) listscroll_cale_day_pane

0xb458,	// (0x0006581f) bg_cale_pane

0xb470,	// (0x00065837) list_cale_pane

0xb493,	// (0x0006585a) scroll_pane_cp09

0xb4a4,	// (0x0006586b) cale_bg_pane_g1

0xb4ac,	// (0x00065873) cale_bg_pane_g2

0xb4b4,	// (0x0006587b) cale_bg_pane_g3

0xb4bc,	// (0x00065883) cale_bg_pane_g4

0xb4c4,	// (0x0006588b) cale_bg_pane_g5

0xb4cc,	// (0x00065893) cale_bg_pane_g6

0xb4d4,	// (0x0006589b) cale_bg_pane_g7

0xb4dc,	// (0x000658a3) cale_bg_pane_g8

0xb4e4,	// (0x000658ab) cale_bg_pane_g9

0x0008,

0x0195,	// (0x0005a55c) cale_bg_pane_g

0x2ea0,	// (0x0005d267) list_cale_time_pane_ParamLimits

0x2ea0,	// (0x0005d267) list_cale_time_pane

0xb4ec,	// (0x000658b3) list_cale_time_pane_g1_ParamLimits

0xb4ec,	// (0x000658b3) list_cale_time_pane_g1

0xb4f8,	// (0x000658bf) list_cale_time_pane_g2_ParamLimits

0xb4f8,	// (0x000658bf) list_cale_time_pane_g2

0x2ec8,	// (0x0005d28f) list_cale_time_pane_g3_ParamLimits

0x2ec8,	// (0x0005d28f) list_cale_time_pane_g3

0x2ed6,	// (0x0005d29d) list_cale_time_pane_g4_ParamLimits

0x2ed6,	// (0x0005d29d) list_cale_time_pane_g4

0x2ee4,	// (0x0005d2ab) list_cale_time_pane_g5_ParamLimits

0x2ee4,	// (0x0005d2ab) list_cale_time_pane_g5

0x0005,

0xf1cb,	// (0x00069592) list_cale_time_pane_g_ParamLimits

0xf1cb,	// (0x00069592) list_cale_time_pane_g

0xb512,	// (0x000658d9) list_cale_time_pane_t1_ParamLimits

0xb512,	// (0x000658d9) list_cale_time_pane_t1

0xb53a,	// (0x00065901) list_cale_time_pane_t2_ParamLimits

0xb53a,	// (0x00065901) list_cale_time_pane_t2

0x31b8,	// (0x0005d57f) aid_blid_cardinal_pane

0x31fa,	// (0x0005d5c1) compass_pane_t4

0xb562,	// (0x00065929) list_cale_time_pane_t4_ParamLimits

0xb562,	// (0x00065929) list_cale_time_pane_t4

0x3208,	// (0x0005d5cf) compass_pane_t5

0x3218,	// (0x0005d5df) compass_pane_t6

0x3226,	// (0x0005d5ed) compass_pane_t7

0xb9fe,	// (0x00065dc5) navi_pane_cc_t1

0xbbdb,	// (0x00065fa2) aid_phob_thumbnail_center_pane

0x3649,	// (0x0005da10) main_postcard_pane_g4_ParamLimits

0x0002,

0x01b5,	// (0x0005a57c) list_cale_time_pane_t_ParamLimits

0x01b5,	// (0x0005a57c) list_cale_time_pane_t

0xa846,	// (0x00064c0d) bg_popup_window_pane_cp02_ParamLimits

0xa846,	// (0x00064c0d) bg_popup_window_pane_cp02

0xb58a,	// (0x00065951) heading_pane_cp01_ParamLimits

0xb58a,	// (0x00065951) heading_pane_cp01

0xb596,	// (0x0006595d) loc_req_pane_ParamLimits

0xb596,	// (0x0006595d) loc_req_pane

0xb5a6,	// (0x0006596d) loc_type_pane_ParamLimits

0xb5a6,	// (0x0006596d) loc_type_pane

0xb5b8,	// (0x0006597f) loc_type_pane_t1_ParamLimits

0xb5b8,	// (0x0006597f) loc_type_pane_t1

0xb5ca,	// (0x00065991) loc_type_pane_t2_ParamLimits

0xb5ca,	// (0x00065991) loc_type_pane_t2

0xb5dc,	// (0x000659a3) loc_type_pane_t3_ParamLimits

0xb5dc,	// (0x000659a3) loc_type_pane_t3

0x0002,

0x01bc,	// (0x0005a583) loc_type_pane_t_ParamLimits

0x01bc,	// (0x0005a583) loc_type_pane_t

0xb5ee,	// (0x000659b5) list_loc_req_pane

0xb5f8,	// (0x000659bf) scroll_pane_cp012

0x2ef2,	// (0x0005d2b9) list_single_loc_request_popup_menu_pane_ParamLimits

0x2ef2,	// (0x0005d2b9) list_single_loc_request_popup_menu_pane

0xb603,	// (0x000659ca) list_single_loc_request_popup_menu_pane_g1_ParamLimits

0xb603,	// (0x000659ca) list_single_loc_request_popup_menu_pane_g1

0xb60f,	// (0x000659d6) list_single_loc_request_popup_menu_pane_g2_ParamLimits

0xb60f,	// (0x000659d6) list_single_loc_request_popup_menu_pane_g2

0x0001,

0x01c3,	// (0x0005a58a) list_single_loc_request_popup_menu_pane_g_ParamLimits

0x01c3,	// (0x0005a58a) list_single_loc_request_popup_menu_pane_g

0xb61b,	// (0x000659e2) list_single_loc_request_popup_menu_pane_t1_ParamLimits

0xb61b,	// (0x000659e2) list_single_loc_request_popup_menu_pane_t1

0x2f0b,	// (0x0005d2d2) bg_popup_window_pane_cp03_ParamLimits

0x2f0b,	// (0x0005d2d2) bg_popup_window_pane_cp03

0x2f19,	// (0x0005d2e0) heading_loc_req_pane_ParamLimits

0x2f19,	// (0x0005d2e0) heading_loc_req_pane

0x2f25,	// (0x0005d2ec) popup_dyc_status_message_window_g1_ParamLimits

0x2f25,	// (0x0005d2ec) popup_dyc_status_message_window_g1

0x2f31,	// (0x0005d2f8) popup_dyc_status_message_window_t1_ParamLimits

0x2f31,	// (0x0005d2f8) popup_dyc_status_message_window_t1

0x2f43,	// (0x0005d30a) popup_dyc_status_message_window_t2_ParamLimits

0x2f43,	// (0x0005d30a) popup_dyc_status_message_window_t2

0x2f55,	// (0x0005d31c) popup_dyc_status_message_window_t3_ParamLimits

0x2f55,	// (0x0005d31c) popup_dyc_status_message_window_t3

0x0002,

0xf1d8,	// (0x0006959f) popup_dyc_status_message_window_t_ParamLimits

0xf1d8,	// (0x0006959f) popup_dyc_status_message_window_t

0xabef,	// (0x00064fb6) bg_heading_pane_cp01

0xb631,	// (0x000659f8) heading_loc_req_pane_g1

0xb639,	// (0x00065a00) heading_loc_req_pane_g2

0xb641,	// (0x00065a08) heading_loc_req_pane_g3

0x0002,

0xf1df,	// (0x000695a6) heading_loc_req_pane_g

0xb649,	// (0x00065a10) heading_loc_req_pane_t1

0xb668,	// (0x00065a2f) bg_popup_sub_pane_cp01_ParamLimits

0xb668,	// (0x00065a2f) bg_popup_sub_pane_cp01

0xb676,	// (0x00065a3d) popup_cale_events_window_g1_ParamLimits

0xb676,	// (0x00065a3d) popup_cale_events_window_g1

0xb6a2,	// (0x00065a69) popup_cale_events_window_g2_ParamLimits

0xb6a2,	// (0x00065a69) popup_cale_events_window_g2

0x0001,

0xf201,	// (0x000695c8) popup_cale_events_window_g_ParamLimits

0xf201,	// (0x000695c8) popup_cale_events_window_g

0xb6c2,	// (0x00065a89) popup_cale_events_window_t1_ParamLimits

0xb6c2,	// (0x00065a89) popup_cale_events_window_t1

0xb6d4,	// (0x00065a9b) popup_cale_events_window_t2_ParamLimits

0xb6d4,	// (0x00065a9b) popup_cale_events_window_t2

0xb712,	// (0x00065ad9) popup_cale_events_window_t3_ParamLimits

0xb712,	// (0x00065ad9) popup_cale_events_window_t3

0xb74c,	// (0x00065b13) popup_cale_events_window_t4_ParamLimits

0xb74c,	// (0x00065b13) popup_cale_events_window_t4

0x0003,

0x01f6,	// (0x0005a5bd) popup_cale_events_window_t_ParamLimits

0x01f6,	// (0x0005a5bd) popup_cale_events_window_t

0x2f7f,	// (0x0005d346) call_type_pane

0xc56e,	// (0x00066935) popup_call_status_window_g1

0x2f8b,	// (0x0005d352) popup_call_status_window_g2

0x2f97,	// (0x0005d35e) popup_call_status_window_g3

0x0002,

0xf206,	// (0x000695cd) popup_call_status_window_g

0xb782,	// (0x00065b49) call_type_pane_g1

0xb78b,	// (0x00065b52) call_type_pane_g2

0x0001,

0x0206,	// (0x0005a5cd) call_type_pane_g

0xabef,	// (0x00064fb6) bg_popup_sub_pane_cp02

0xb794,	// (0x00065b5b) listscroll_popup_wml_pane

0xb79c,	// (0x00065b63) list_wml_pane

0xb7a6,	// (0x00065b6d) scroll_pane_cp013

0xb7b1,	// (0x00065b78) list_single_graphic_popup_wml_pane_ParamLimits

0xb7b1,	// (0x00065b78) list_single_graphic_popup_wml_pane

0xae62,	// (0x00065229) list_single_graphic_popup_wml_pane_g1

0xb7c5,	// (0x00065b8c) list_single_graphic_popup_wml_pane_g2

0x0001,

0x020b,	// (0x0005a5d2) list_single_graphic_popup_wml_pane_g

0xb7cd,	// (0x00065b94) list_single_graphic_popup_wml_pane_t1

0xb7db,	// (0x00065ba2) aid_call_pane

0xae42,	// (0x00065209) popup_clock_analogue_window_g1

0xae42,	// (0x00065209) popup_clock_analogue_window_g2

0x2fa3,	// (0x0005d36a) popup_clock_analogue_window_g3

0x2fa3,	// (0x0005d36a) popup_clock_analogue_window_g4

0xae62,	// (0x00065229) popup_clock_analogue_window_g5

0x0004,

0xf20d,	// (0x000695d4) popup_clock_analogue_window_g

0x2fab,	// (0x0005d372) popup_clock_analogue_window_t1

0x2fb9,	// (0x0005d380) clock_digital_number_pane_ParamLimits

0x2fb9,	// (0x0005d380) clock_digital_number_pane

0x2fc5,	// (0x0005d38c) clock_digital_number_pane_cp02_ParamLimits

0x2fc5,	// (0x0005d38c) clock_digital_number_pane_cp02

0x2fd1,	// (0x0005d398) clock_digital_number_pane_cp03_ParamLimits

0x2fd1,	// (0x0005d398) clock_digital_number_pane_cp03

0x2fdd,	// (0x0005d3a4) clock_digital_number_pane_cp04_ParamLimits

0x2fdd,	// (0x0005d3a4) clock_digital_number_pane_cp04

0x2fe9,	// (0x0005d3b0) clock_digital_separator_pane_ParamLimits

0x2fe9,	// (0x0005d3b0) clock_digital_separator_pane

0x2ff5,	// (0x0005d3bc) popup_clock_digital_window_t1

0xae62,	// (0x00065229) clock_digital_number_pane_g1

0xae62,	// (0x00065229) clock_digital_number_pane_g2

0x0001,

0x0190,	// (0x0005a557) clock_digital_number_pane_g

0xae62,	// (0x00065229) clock_digital_separator_pane_g1

0xae62,	// (0x00065229) clock_digital_separator_pane_g2

0x0001,

0x0190,	// (0x0005a557) clock_digital_separator_pane_g

0xabef,	// (0x00064fb6) bg_popup_window_pane_cp04

0xb7eb,	// (0x00065bb2) heading_pane_cp03

0xb0fb,	// (0x000654c2) listscroll_popup_gms_pane

0xabef,	// (0x00064fb6) grid_large_graphic_popup_pane

0xb7f4,	// (0x00065bbb) listscroll_popup_gms_pane_g1

0xb7fd,	// (0x00065bc4) listscroll_popup_gms_pane_g2

0x0001,

0x021b,	// (0x0005a5e2) listscroll_popup_gms_pane_g

0xb806,	// (0x00065bcd) scroll_pane_cp014

0xaeb7,	// (0x0006527e) cell_large_graphic_popup_pane_ParamLimits

0xaeb7,	// (0x0006527e) cell_large_graphic_popup_pane

0xaec5,	// (0x0006528c) cell_large_graphic_popup_pane_g1_ParamLimits

0xaec5,	// (0x0006528c) cell_large_graphic_popup_pane_g1

0xb80f,	// (0x00065bd6) cell_large_graphic_popup_pane_g2_ParamLimits

0xb80f,	// (0x00065bd6) cell_large_graphic_popup_pane_g2

0xb81d,	// (0x00065be4) cell_large_graphic_popup_pane_g3_ParamLimits

0xb81d,	// (0x00065be4) cell_large_graphic_popup_pane_g3

0xb82b,	// (0x00065bf2) cell_large_graphic_popup_pane_g4_ParamLimits

0xb82b,	// (0x00065bf2) cell_large_graphic_popup_pane_g4

0x0003,

0x0220,	// (0x0005a5e7) cell_large_graphic_popup_pane_g_ParamLimits

0x0220,	// (0x0005a5e7) cell_large_graphic_popup_pane_g

0xabef,	// (0x00064fb6) grid_highlight_pane_cp010

0xae62,	// (0x00065229) bg_popup_call_pane_g1

0xb83c,	// (0x00065c03) list_single_graphic_popup_conf_pane_ParamLimits

0xb83c,	// (0x00065c03) list_single_graphic_popup_conf_pane

0xb84f,	// (0x00065c16) list_highlight_pane_cp01

0xb858,	// (0x00065c1f) list_single_graphic_popup_conf_pane_g1

0xb860,	// (0x00065c27) list_single_graphic_popup_conf_pane_g2

0x0001,

0x0229,	// (0x0005a5f0) list_single_graphic_popup_conf_pane_g

0xb868,	// (0x00065c2f) list_single_graphic_popup_conf_pane_t1

0xb876,	// (0x00065c3d) linegrid_cams_pane_g1

0x3012,	// (0x0005d3d9) linegrid_cams_pane_g2

0xb028,	// (0x000653ef) linegrid_cams_pane_g3

0xb87f,	// (0x00065c46) linegrid_cams_pane_g4

0x301b,	// (0x0005d3e2) linegrid_cams_pane_g5

0x3024,	// (0x0005d3eb) linegrid_cams_pane_g6

0xb0ea,	// (0x000654b1) linegrid_cams_pane_g7

0x0006,

0xf218,	// (0x000695df) linegrid_cams_pane_g

0xb888,	// (0x00065c4f) popup_clock_analogue_window

0xb888,	// (0x00065c4f) popup_clock_digital_window

0xabef,	// (0x00064fb6) popup_phob_thumbnail_window

0xae62,	// (0x00065229) call_video_uplink_pane_g1

0xb891,	// (0x00065c58) call_video_uplink_pane_g2

0x0001,

0x023d,	// (0x0005a604) call_video_uplink_pane_g

0xb899,	// (0x00065c60) video_uplink_pane

0xb8a1,	// (0x00065c68) mce_image_pane_g1

0x302d,	// (0x0005d3f4) mce_image_pane_g2

0x3035,	// (0x0005d3fc) mce_image_pane_g3

0x303d,	// (0x0005d404) mce_image_pane_g4

0x3045,	// (0x0005d40c) mce_image_pane_g5

0x0004,

0xf227,	// (0x000695ee) mce_image_pane_g

0xb8ab,	// (0x00065c72) control_top_pane_stacon_cp01_ParamLimits

0xb8ab,	// (0x00065c72) control_top_pane_stacon_cp01

0xb8d3,	// (0x00065c9a) uni_indicator_pane_stacon_cp01_ParamLimits

0xb8d3,	// (0x00065c9a) uni_indicator_pane_stacon_cp01

0xb8e4,	// (0x00065cab) bg_popup_sub_pane_cp03

0x304d,	// (0x0005d414) chi_dic_find_pane

0x3055,	// (0x0005d41c) listscroll_chi_dic_pane

0x305e,	// (0x0005d425) main_pane_chidic_g1

0x3071,	// (0x0005d438) chi_dic_find_pane_t1

0xb8ee,	// (0x00065cb5) find_chidic_pane

0xb8f7,	// (0x00065cbe) chi_dic_list_pane_ParamLimits

0xb8f7,	// (0x00065cbe) chi_dic_list_pane

0xb908,	// (0x00065ccf) scroll_pane_cp020

0x307f,	// (0x0005d446) find_chidic_pane_t1

0xabef,	// (0x00064fb6) input_focus_pane_cp06

0x308e,	// (0x0005d455) list_chi_dic_pane_ParamLimits

0x308e,	// (0x0005d455) list_chi_dic_pane

0x30ab,	// (0x0005d472) list_chi_dic_pane_t1_ParamLimits

0x30ab,	// (0x0005d472) list_chi_dic_pane_t1

0xabef,	// (0x00064fb6) list_highlight_pane_cp020

0xb910,	// (0x00065cd7) bg_cale_heading_pane_g1

0x30be,	// (0x0005d485) bg_cale_heading_pane_g2

0x30c6,	// (0x0005d48d) bg_cale_heading_pane_g3

0x30ce,	// (0x0005d495) bg_cale_heading_pane_g4

0x30d8,	// (0x0005d49f) bg_cale_heading_pane_g5

0x30e2,	// (0x0005d4a9) bg_cale_heading_pane_g6

0x30ea,	// (0x0005d4b1) bg_cale_heading_pane_g7

0x30f2,	// (0x0005d4b9) bg_cale_heading_pane_g8

0x30fc,	// (0x0005d4c3) bg_cale_heading_pane_g9

0x0008,

0xf232,	// (0x000695f9) bg_cale_heading_pane_g

0xb910,	// (0x00065cd7) bg_cale_side_pane_g1

0x3106,	// (0x0005d4cd) bg_cale_side_pane_g2

0x3110,	// (0x0005d4d7) bg_cale_side_pane_g3

0x311a,	// (0x0005d4e1) bg_cale_side_pane_g4

0x3124,	// (0x0005d4eb) bg_cale_side_pane_g5

0x312e,	// (0x0005d4f5) bg_cale_side_pane_g6

0x3138,	// (0x0005d4ff) bg_cale_side_pane_g7

0x3142,	// (0x0005d509) bg_cale_side_pane_g8

0x314a,	// (0x0005d511) bg_cale_side_pane_g9

0x0008,

0xf245,	// (0x0006960c) bg_cale_side_pane_g

0x3152,	// (0x0005d519) popup_call_status_window_ParamLimits

0x3152,	// (0x0005d519) popup_call_status_window

0xb918,	// (0x00065cdf) stacon_top_pane

0xb920,	// (0x00065ce7) status_pane_ParamLimits

0xb920,	// (0x00065ce7) status_pane

0xb935,	// (0x00065cfc) status_small_pane

0xb93d,	// (0x00065d04) control_pane

0xabef,	// (0x00064fb6) stacon_bottom_pane

0xb945,	// (0x00065d0c) list_single_mce_smart_pane_t1_ParamLimits

0xb945,	// (0x00065d0c) list_single_mce_smart_pane_t1

0xb958,	// (0x00065d1f) list_single_mce_smart_pane_t2_ParamLimits

0xb958,	// (0x00065d1f) list_single_mce_smart_pane_t2

0x0001,

0x0273,	// (0x0005a63a) list_single_mce_smart_pane_t_ParamLimits

0x0273,	// (0x0005a63a) list_single_mce_smart_pane_t

0x315e,	// (0x0005d525) compass_pane

0x316a,	// (0x0005d531) main_location2_pane_t1

0x317e,	// (0x0005d545) main_location2_pane_t2

0x3192,	// (0x0005d559) main_location2_pane_t3

0x0003,

0xf258,	// (0x0006961f) main_location2_pane_t

0xb977,	// (0x00065d3e) compass_pane_g1_ParamLimits

0xb977,	// (0x00065d3e) compass_pane_g1

0x31dc,	// (0x0005d5a3) compass_pane_t1

0x31eb,	// (0x0005d5b2) compass_pane_t2

0x0005,

0xf261,	// (0x00069628) compass_pane_t

0x3236,	// (0x0005d5fd) text_secondary_cp61

0xb9f5,	// (0x00065dbc) navi_pane_cams_g5

0xba71,	// (0x00065e38) navi_pane_im_t1

0xba7f,	// (0x00065e46) navi_pane_mp_g1_ParamLimits

0xba7f,	// (0x00065e46) navi_pane_mp_g1

0xba93,	// (0x00065e5a) navi_pane_mp_g2_ParamLimits

0xba93,	// (0x00065e5a) navi_pane_mp_g2

0xba9f,	// (0x00065e66) navi_pane_mp_g3_ParamLimits

0xba9f,	// (0x00065e66) navi_pane_mp_g3

0x0002,

0x0295,	// (0x0005a65c) navi_pane_mp_g_ParamLimits

0x0295,	// (0x0005a65c) navi_pane_mp_g

0xbaab,	// (0x00065e72) navi_pane_mp_t1

0xbab9,	// (0x00065e80) navi_pane_mp_t2

0x0002,

0x029c,	// (0x0005a663) navi_pane_mp_t

0xbb24,	// (0x00065eeb) navi_pane_vt_g1

0xbaab,	// (0x00065e72) navi_pane_vt_t1

0xbb2c,	// (0x00065ef3) navi_slider_pane

0xb0fb,	// (0x000654c2) zooming_pane

0xbb3c,	// (0x00065f03) navi_slider_pane_g1

0x3271,	// (0x0005d638) navi_slider_pane_g2

0x0006,

0xf26e,	// (0x00069635) navi_slider_pane_g

0xbb60,	// (0x00065f27) aid_levels_zoom

0xbb68,	// (0x00065f2f) zooming_pane_g1

0xbb70,	// (0x00065f37) zooming_pane_g2

0xbb70,	// (0x00065f37) zooming_pane_g3

0x0002,

0x02b2,	// (0x0005a679) zooming_pane_g

0xbb78,	// (0x00065f3f) level_10_zoom

0xbb81,	// (0x00065f48) level_11_zoom

0xbb8a,	// (0x00065f51) level_1_zoom

0xbb93,	// (0x00065f5a) level_2_zoom

0xbb9c,	// (0x00065f63) level_3_zoom

0xbba5,	// (0x00065f6c) level_4_zoom

0xbbae,	// (0x00065f75) level_5_zoom

0xbbb7,	// (0x00065f7e) level_6_zoom

0xbbc0,	// (0x00065f87) level_7_zoom

0xbbc9,	// (0x00065f90) level_8_zoom

0xbbd2,	// (0x00065f99) level_9_zoom

0xbbe3,	// (0x00065faa) popup_phob_thumbnail_window_g1

0xbbeb,	// (0x00065fb2) popup_phob_thumbnail_window_g2

0x0001,

0x02b9,	// (0x0005a680) popup_phob_thumbnail_window_g

0x3c08,	// (0x0005dfcf) level_1_location

0x3c10,	// (0x0005dfd7) level_2_location

0x3c18,	// (0x0005dfdf) level_3_location

0x3c22,	// (0x0005dfe9) level_4_location

0xb0fb,	// (0x000654c2) level_5_location

0x3283,	// (0x0005d64a) mce_icon_pane_g1

0x328b,	// (0x0005d652) mce_icon_pane_g2

0x0001,

0xf27d,	// (0x00069644) mce_icon_pane_g

0x3293,	// (0x0005d65a) main_mup_pane_g1_ParamLimits

0x3293,	// (0x0005d65a) main_mup_pane_g1

0xaee1,	// (0x000652a8) main_mup_pane_g2_ParamLimits

0xaee1,	// (0x000652a8) main_mup_pane_g2

0xaee1,	// (0x000652a8) main_mup_pane_g3_ParamLimits

0xaee1,	// (0x000652a8) main_mup_pane_g3

0xaee1,	// (0x000652a8) main_mup_pane_g4_ParamLimits

0xaee1,	// (0x000652a8) main_mup_pane_g4

0xaee1,	// (0x000652a8) main_mup_pane_g5_ParamLimits

0xaee1,	// (0x000652a8) main_mup_pane_g5

0xaee1,	// (0x000652a8) main_mup_pane_g6_ParamLimits

0xaee1,	// (0x000652a8) main_mup_pane_g6

0xaee1,	// (0x000652a8) main_mup_pane_g7_ParamLimits

0xaee1,	// (0x000652a8) main_mup_pane_g7

0xaee1,	// (0x000652a8) main_mup_pane_g8_ParamLimits

0xaee1,	// (0x000652a8) main_mup_pane_g8

0xaee1,	// (0x000652a8) main_mup_pane_g9_ParamLimits

0xaee1,	// (0x000652a8) main_mup_pane_g9

0xaee1,	// (0x000652a8) main_mup_pane_g10_ParamLimits

0xaee1,	// (0x000652a8) main_mup_pane_g10

0xaee1,	// (0x000652a8) main_mup_pane_g11_ParamLimits

0xaee1,	// (0x000652a8) main_mup_pane_g11

0xaed3,	// (0x0006529a) main_mup_pane_g12_ParamLimits

0xaed3,	// (0x0006529a) main_mup_pane_g12

0xaee1,	// (0x000652a8) main_mup_pane_g13_ParamLimits

0xaee1,	// (0x000652a8) main_mup_pane_g13

0x000c,

0xf282,	// (0x00069649) main_mup_pane_g_ParamLimits

0xf282,	// (0x00069649) main_mup_pane_g

0xaeef,	// (0x000652b6) main_mup_pane_t1_ParamLimits

0xaeef,	// (0x000652b6) main_mup_pane_t1

0xaeef,	// (0x000652b6) main_mup_pane_t2_ParamLimits

0xaeef,	// (0x000652b6) main_mup_pane_t2

0xaeef,	// (0x000652b6) main_mup_pane_t3_ParamLimits

0xaeef,	// (0x000652b6) main_mup_pane_t3

0xb8bf,	// (0x00065c86) main_mup_pane_t4_ParamLimits

0xb8bf,	// (0x00065c86) main_mup_pane_t4

0xb8bf,	// (0x00065c86) main_mup_pane_t5_ParamLimits

0xb8bf,	// (0x00065c86) main_mup_pane_t5

0xb103,	// (0x000654ca) main_mup_pane_t6_ParamLimits

0xb103,	// (0x000654ca) main_mup_pane_t6

0x0005,

0xf29d,	// (0x00069664) main_mup_pane_t_ParamLimits

0xf29d,	// (0x00069664) main_mup_pane_t

0xa7e5,	// (0x00064bac) mup_progress_pane_ParamLimits

0xa7e5,	// (0x00064bac) mup_progress_pane

0xca9f,	// (0x00066e66) mup_visualizer_pane_ParamLimits

0xca9f,	// (0x00066e66) mup_visualizer_pane

0xca9f,	// (0x00066e66) mup_volume_pane_ParamLimits

0xca9f,	// (0x00066e66) mup_volume_pane

0xaed3,	// (0x0006529a) mup_visualizer_pane_g1_ParamLimits

0xaed3,	// (0x0006529a) mup_visualizer_pane_g1

0xbc15,	// (0x00065fdc) mup_visualizer_pane_g2_ParamLimits

0xbc15,	// (0x00065fdc) mup_visualizer_pane_g2

0xaec5,	// (0x0006528c) mup_visualizer_pane_g3_ParamLimits

0xaec5,	// (0x0006528c) mup_visualizer_pane_g3

0x0002,

0xf2aa,	// (0x00069671) mup_visualizer_pane_g_ParamLimits

0xf2aa,	// (0x00069671) mup_visualizer_pane_g

0xb131,	// (0x000654f8) mup_volume_pane_g1

0xb131,	// (0x000654f8) mup_volume_pane_g2

0x0001,

0x02f2,	// (0x0005a6b9) mup_volume_pane_g

0xb131,	// (0x000654f8) mup_progress_pane_g1

0xb131,	// (0x000654f8) mup_progress_pane_g2

0xb131,	// (0x000654f8) mup_progress_pane_g3

0x0002,

0x02f7,	// (0x0005a6be) mup_progress_pane_g

0xabef,	// (0x00064fb6) bg_popup_window_pane_cp05

0xbc23,	// (0x00065fea) heading_pane_cp02_ParamLimits

0xbc23,	// (0x00065fea) heading_pane_cp02

0xbc3d,	// (0x00066004) list_popup_blid_pane

0xbc45,	// (0x0006600c) list_blid_sat_info_pane_ParamLimits

0xbc45,	// (0x0006600c) list_blid_sat_info_pane

0xbc58,	// (0x0006601f) list_blid_sat_info_pane_g1

0xbc60,	// (0x00066027) list_blid_sat_info_pane_t1

0x338e,	// (0x0005d755) mup_equalizer_pane_ParamLimits

0x338e,	// (0x0005d755) mup_equalizer_pane

0x33af,	// (0x0005d776) mup_equalizer_pane_cp1_ParamLimits

0x33af,	// (0x0005d776) mup_equalizer_pane_cp1

0x33d0,	// (0x0005d797) mup_equalizer_pane_cp2_ParamLimits

0x33d0,	// (0x0005d797) mup_equalizer_pane_cp2

0x33f1,	// (0x0005d7b8) mup_equalizer_pane_cp3_ParamLimits

0x33f1,	// (0x0005d7b8) mup_equalizer_pane_cp3

0x3412,	// (0x0005d7d9) mup_equalizer_pane_cp4_ParamLimits

0x3412,	// (0x0005d7d9) mup_equalizer_pane_cp4

0x3433,	// (0x0005d7fa) mup_equalizer_pane_cp5

0x3449,	// (0x0005d810) mup_equalizer_pane_cp6

0x3461,	// (0x0005d828) mup_equalizer_pane_cp7

0xcdd1,	// (0x00067198) bg_popup_call_poc_act_pane_g9

0xcdd9,	// (0x000671a0) bg_popup_call_poc_act_pane_g10

0xcde1,	// (0x000671a8) bg_popup_call_poc_act_pane_g11

0x000a,

0xae4a,	// (0x00065211) mup_scale_pane

0xae62,	// (0x00065229) mup_scale_pane_g1

0xbc7c,	// (0x00066043) mup_scale_pane_g2

0x0006,

0xf2c6,	// (0x0006968d) mup_scale_pane_g

0xbca0,	// (0x00066067) msg_data_pane

0xbca8,	// (0x0006606f) scroll_pane_cp017

0x348b,	// (0x0005d852) bg_list_pane_cp04_ParamLimits

0x348b,	// (0x0005d852) bg_list_pane_cp04

0xbcb0,	// (0x00066077) msg_data_pane_g1

0x34a3,	// (0x0005d86a) msg_data_pane_g2

0x34ab,	// (0x0005d872) msg_data_pane_g3

0x34b3,	// (0x0005d87a) msg_data_pane_g4

0x34bb,	// (0x0005d882) msg_data_pane_g5

0x34c3,	// (0x0005d88a) msg_data_pane_g6

0x34cb,	// (0x0005d892) msg_data_pane_g7

0x0006,

0xf2d5,	// (0x0006969c) msg_data_pane_g

0x34d3,	// (0x0005d89a) msg_text_pane_ParamLimits

0x34d3,	// (0x0005d89a) msg_text_pane

0x352b,	// (0x0005d8f2) qrid_highlight_pane_cp011_ParamLimits

0x352b,	// (0x0005d8f2) qrid_highlight_pane_cp011

0xabef,	// (0x00064fb6) msg_body_pane

0xabef,	// (0x00064fb6) msg_header_pane

0xbcc1,	// (0x00066088) input_focus_pane_cp07

0xa19c,	// (0x00064563) msg_header_pane_t1_ParamLimits

0xa19c,	// (0x00064563) msg_header_pane_t1

0xa1b2,	// (0x00064579) msg_header_pane_t2_ParamLimits

0xa1b2,	// (0x00064579) msg_header_pane_t2

0x0001,

0xf2e9,	// (0x000696b0) msg_header_pane_t_ParamLimits

0xf2e9,	// (0x000696b0) msg_header_pane_t

0xbcd6,	// (0x0006609d) msg_body_pane_g1

0xa1c9,	// (0x00064590) msg_body_pane_t1_ParamLimits

0xa1c9,	// (0x00064590) msg_body_pane_t1

0xa1fa,	// (0x000645c1) msg_body_pane_t2_ParamLimits

0xa1fa,	// (0x000645c1) msg_body_pane_t2

0xa20c,	// (0x000645d3) msg_body_pane_t3_ParamLimits

0xa20c,	// (0x000645d3) msg_body_pane_t3

0x0002,

0xf2ee,	// (0x000696b5) msg_body_pane_t_ParamLimits

0xf2ee,	// (0x000696b5) msg_body_pane_t

0x35a5,	// (0x0005d96c) main_viewer_pane_g1_ParamLimits

0x35a5,	// (0x0005d96c) main_viewer_pane_g1

0x35b1,	// (0x0005d978) main_viewer_pane_g2_ParamLimits

0x35b1,	// (0x0005d978) main_viewer_pane_g2

0x35bd,	// (0x0005d984) main_viewer_pane_g3_ParamLimits

0x35bd,	// (0x0005d984) main_viewer_pane_g3

0x35ce,	// (0x0005d995) main_viewer_pane_g4_ParamLimits

0x35ce,	// (0x0005d995) main_viewer_pane_g4

0x35df,	// (0x0005d9a6) main_viewer_pane_g5_ParamLimits

0x35df,	// (0x0005d9a6) main_viewer_pane_g5

0x35df,	// (0x0005d9a6) main_viewer_pane_g7_ParamLimits

0x35df,	// (0x0005d9a6) main_viewer_pane_g7

0xb603,	// (0x000659ca) main_viewer_pane_g8_ParamLimits

0xb603,	// (0x000659ca) main_viewer_pane_g8

0x0007,

0xf2fe,	// (0x000696c5) main_viewer_pane_g_ParamLimits

0xf2fe,	// (0x000696c5) main_viewer_pane_g

0xbcde,	// (0x000660a5) viewer_content_pane_ParamLimits

0xbcde,	// (0x000660a5) viewer_content_pane

0x361d,	// (0x0005d9e4) main_postcard_pane_g1_ParamLimits

0x361d,	// (0x0005d9e4) main_postcard_pane_g1

0x362b,	// (0x0005d9f2) main_postcard_pane_g2_ParamLimits

0x362b,	// (0x0005d9f2) main_postcard_pane_g2

0x3639,	// (0x0005da00) main_postcard_pane_g3_ParamLimits

0x3639,	// (0x0005da00) main_postcard_pane_g3

0x0005,

0xf30f,	// (0x000696d6) main_postcard_pane_g_ParamLimits

0xf30f,	// (0x000696d6) main_postcard_pane_g

0x3649,	// (0x0005da10) main_postcard_pane_g4

0xcf55,	// (0x0006731c) smil_status_volume_pane_g2

0x3675,	// (0x0005da3c) postcard_pane_ParamLimits

0x3675,	// (0x0005da3c) postcard_pane

0xc56e,	// (0x00066935) postcard_pane_g1_ParamLimits

0xc56e,	// (0x00066935) postcard_pane_g1

0x36a7,	// (0x0005da6e) postcard_pane_g2_ParamLimits

0x36a7,	// (0x0005da6e) postcard_pane_g2

0x36b3,	// (0x0005da7a) postcard_pane_g3_ParamLimits

0x36b3,	// (0x0005da7a) postcard_pane_g3

0xbcec,	// (0x000660b3) postcard_pane_g4_ParamLimits

0xbcec,	// (0x000660b3) postcard_pane_g4

0x36bf,	// (0x0005da86) postcard_pane_g5_ParamLimits

0x36bf,	// (0x0005da86) postcard_pane_g5

0x36cb,	// (0x0005da92) postcard_pane_g6_ParamLimits

0x36cb,	// (0x0005da92) postcard_pane_g6

0xbcfa,	// (0x000660c1) postcard_pane_g7_ParamLimits

0xbcfa,	// (0x000660c1) postcard_pane_g7

0x0006,

0xf31c,	// (0x000696e3) postcard_pane_g_ParamLimits

0xf31c,	// (0x000696e3) postcard_pane_g

0x36d7,	// (0x0005da9e) main_mp2_pane_g1_ParamLimits

0x36d7,	// (0x0005da9e) main_mp2_pane_g1

0x36e3,	// (0x0005daaa) main_mp2_pane_g2_ParamLimits

0x36e3,	// (0x0005daaa) main_mp2_pane_g2

0x36ef,	// (0x0005dab6) main_mp2_pane_g3_ParamLimits

0x36ef,	// (0x0005dab6) main_mp2_pane_g3

0x0002,

0xf32b,	// (0x000696f2) main_mp2_pane_g_ParamLimits

0xf32b,	// (0x000696f2) main_mp2_pane_g

0x36fb,	// (0x0005dac2) main_mp2_pane_t1_ParamLimits

0x36fb,	// (0x0005dac2) main_mp2_pane_t1

0x3712,	// (0x0005dad9) main_mp2_pane_t2_ParamLimits

0x3712,	// (0x0005dad9) main_mp2_pane_t2

0x3724,	// (0x0005daeb) main_mp2_pane_t3_ParamLimits

0x3724,	// (0x0005daeb) main_mp2_pane_t3

0x0002,

0xf332,	// (0x000696f9) main_mp2_pane_t_ParamLimits

0xf332,	// (0x000696f9) main_mp2_pane_t

0xbd08,	// (0x000660cf) pec_content_pane_ParamLimits

0xbd08,	// (0x000660cf) pec_content_pane

0xb292,	// (0x00065659) scroll_pane_cp015

0xbd1a,	// (0x000660e1) pec_attribute_pane_ParamLimits

0xbd1a,	// (0x000660e1) pec_attribute_pane

0x3736,	// (0x0005dafd) pec_content_pane_g1_ParamLimits

0x3736,	// (0x0005dafd) pec_content_pane_g1

0xbd2a,	// (0x000660f1) pec_content_pane_t1_ParamLimits

0xbd2a,	// (0x000660f1) pec_content_pane_t1

0xbd3c,	// (0x00066103) pec_content_pane_t2_ParamLimits

0xbd3c,	// (0x00066103) pec_content_pane_t2

0x0001,

0x0386,	// (0x0005a74d) pec_content_pane_t_ParamLimits

0x0386,	// (0x0005a74d) pec_content_pane_t

0x3742,	// (0x0005db09) list_single_graphic_pane_cp01_ParamLimits

0x3742,	// (0x0005db09) list_single_graphic_pane_cp01

0xae4a,	// (0x00065211) bg_popup_sub_pane_cp04

0xbd4e,	// (0x00066115) popup_mup_playback_window_g1

0xbd5a,	// (0x00066121) popup_mup_playback_window_t1

0xbd6f,	// (0x00066136) popup_mup_playback_window_t2

0x0001,

0x038b,	// (0x0005a752) popup_mup_playback_window_t

0xbda6,	// (0x0006616d) main_image_pane_g1_ParamLimits

0xbda6,	// (0x0006616d) main_image_pane_g1

0xbde9,	// (0x000661b0) scroll_pane_cp018_ParamLimits

0xbde9,	// (0x000661b0) scroll_pane_cp018

0xbe01,	// (0x000661c8) scroll_pane_cp016_ParamLimits

0xbe01,	// (0x000661c8) scroll_pane_cp016

0x37dc,	// (0x0005dba3) smil2_image_pane_ParamLimits

0x37dc,	// (0x0005dba3) smil2_image_pane

0x380c,	// (0x0005dbd3) smil2_root_pane_ParamLimits

0x380c,	// (0x0005dbd3) smil2_root_pane

0x3838,	// (0x0005dbff) smil2_text_pane_ParamLimits

0x3838,	// (0x0005dbff) smil2_text_pane

0xabef,	// (0x00064fb6) bg_list_pane_cp06

0xbe3d,	// (0x00066204) grid_radio_pane

0xabef,	// (0x00064fb6) bg_popup_window_pane_cp06

0xbe45,	// (0x0006620c) main_fmradio_pane_t1

0xce29,	// (0x000671f0) heading_pane_cp04

0xbe53,	// (0x0006621a) main_fmradio_pane_t2

0xce31,	// (0x000671f8) popup_cale_lunar_info_window_g1

0xbe61,	// (0x00066228) main_fmradio_pane_t3

0xce39,	// (0x00067200) popup_cale_lunar_info_window_g2

0xbe6f,	// (0x00066236) main_fmradio_pane_t4

0x0001,

0xbe7d,	// (0x00066244) main_fmradio_pane_t5

0x0004,

0x047e,	// (0x0005a845) popup_cale_lunar_info_window_g

0x03a0,	// (0x0005a767) main_fmradio_pane_t

0xbe8b,	// (0x00066252) wait_bar_pane_cp03

0xbe93,	// (0x0006625a) cell_fmradio_pane_ParamLimits

0xbe93,	// (0x0006625a) cell_fmradio_pane

0xbcfa,	// (0x000660c1) cell_fmradio_pane_g1_ParamLimits

0xbcfa,	// (0x000660c1) cell_fmradio_pane_g1

0xabef,	// (0x00064fb6) grid_highlight_pane_cp011

0xbea6,	// (0x0006626d) poc_content_pane_ParamLimits

0xbea6,	// (0x0006626d) poc_content_pane

0xbeb8,	// (0x0006627f) scroll_pane_cp019

0x3878,	// (0x0005dc3f) popup_call_poc_act_window_ParamLimits

0x3878,	// (0x0005dc3f) popup_call_poc_act_window

0x3885,	// (0x0005dc4c) popup_call_poc_inact_window_ParamLimits

0x3885,	// (0x0005dc4c) popup_call_poc_inact_window

0x0442,	// (0x0005a809) bg_popup_call_poc_act_pane_g

0xcde9,	// (0x000671b0) bg_popup_call_poc_inact_pane_g1

0xcdf1,	// (0x000671b8) bg_popup_call_poc_inact_pane_g2

0xbec0,	// (0x00066287) popup_call_poc_act_window_g2

0xcdf9,	// (0x000671c0) bg_popup_call_poc_inact_pane_g3

0xcd79,	// (0x00067140) bg_popup_call_poc_inact_pane_g4

0xce01,	// (0x000671c8) bg_popup_call_poc_inact_pane_g5

0xbec8,	// (0x0006628f) popup_call_poc_act_window_t1_ParamLimits

0xbec8,	// (0x0006628f) popup_call_poc_act_window_t1

0xbef0,	// (0x000662b7) popup_call_poc_act_window_t2_ParamLimits

0xbef0,	// (0x000662b7) popup_call_poc_act_window_t2

0xbf18,	// (0x000662df) popup_call_poc_act_window_t3_ParamLimits

0xbf18,	// (0x000662df) popup_call_poc_act_window_t3

0xbf40,	// (0x00066307) popup_call_poc_act_window_t4_ParamLimits

0xbf40,	// (0x00066307) popup_call_poc_act_window_t4

0x0003,

0x03ab,	// (0x0005a772) popup_call_poc_act_window_t_ParamLimits

0x03ab,	// (0x0005a772) popup_call_poc_act_window_t

0xce09,	// (0x000671d0) bg_popup_call_poc_inact_pane_g6

0xce11,	// (0x000671d8) bg_popup_call_poc_inact_pane_g7

0xce19,	// (0x000671e0) bg_popup_call_poc_inact_pane_g8

0xbf52,	// (0x00066319) popup_call_poc_inact_window_g2

0xce21,	// (0x000671e8) bg_popup_call_poc_inact_pane_g9

0x0008,

0x0459,	// (0x0005a820) bg_popup_call_poc_inact_pane_g

0xbf5a,	// (0x00066321) popup_call_poc_inact_window_t1_ParamLimits

0xbf5a,	// (0x00066321) popup_call_poc_inact_window_t1

0xbf6f,	// (0x00066336) popup_call_poc_inact_window_t2_ParamLimits

0xbf6f,	// (0x00066336) popup_call_poc_inact_window_t2

0xbf84,	// (0x0006634b) popup_call_poc_inact_window_t3_ParamLimits

0xbf84,	// (0x0006634b) popup_call_poc_inact_window_t3

0x0002,

0x03b4,	// (0x0005a77b) popup_call_poc_inact_window_t_ParamLimits

0x03b4,	// (0x0005a77b) popup_call_poc_inact_window_t

0xcecd,	// (0x00067294) context_pane_ParamLimits

0x3f10,	// (0x0005e2d7) signal_pane_ParamLimits

0xb0fb,	// (0x000654c2) main_call2_pane

0x3e83,	// (0x0005e24a) popup_phob_thumbnail2_window_ParamLimits

0x3e83,	// (0x0005e24a) popup_phob_thumbnail2_window

0x3553,	// (0x0005d91a) aid_hotspot_pointer_arrow_pane

0x355b,	// (0x0005d922) aid_hotspot_pointer_hand_pane

0x3bd0,	// (0x0005df97) phob_pre_status_pane_g5

0xaeb7,	// (0x0006527e) cams_zoom_pane_ParamLimits

0xaeb7,	// (0x0006527e) image_vga_pane_ParamLimits

0xaed3,	// (0x0006529a) main_camera_pane_g1_ParamLimits

0xaed3,	// (0x0006529a) main_camera_pane_g2_ParamLimits

0xaed3,	// (0x0006529a) main_camera_pane_g3_ParamLimits

0xaed3,	// (0x0006529a) main_camera_pane_g4_ParamLimits

0xaed3,	// (0x0006529a) main_camera_pane_g5_ParamLimits

0xaed3,	// (0x0006529a) main_camera_pane_g6_ParamLimits

0xaed3,	// (0x0006529a) main_camera_pane_g7_ParamLimits

0xf160,	// (0x00069527) main_camera_pane_g_ParamLimits

0xb8bf,	// (0x00065c86) main_camera_pane_t1_ParamLimits

0xb8bf,	// (0x00065c86) main_camera_pane_t2_ParamLimits

0xf171,	// (0x00069538) main_camera_pane_t_ParamLimits

0xae4a,	// (0x00065211) bg_popup_preview_window_pane_cp01_ParamLimits

0xae4a,	// (0x00065211) bg_popup_preview_window_pane_cp01

0xbf99,	// (0x00066360) popup_phob_thumbnail2_window_g1_ParamLimits

0xbf99,	// (0x00066360) popup_phob_thumbnail2_window_g1

0xabef,	// (0x00064fb6) call2_cli_visual_pane

0x38a1,	// (0x0005dc68) popup_call2_audio_conf_window_ParamLimits

0x38a1,	// (0x0005dc68) popup_call2_audio_conf_window

0x38b6,	// (0x0005dc7d) popup_call2_audio_first_window_ParamLimits

0x38b6,	// (0x0005dc7d) popup_call2_audio_first_window

0x3954,	// (0x0005dd1b) popup_call2_audio_in_window_ParamLimits

0x3954,	// (0x0005dd1b) popup_call2_audio_in_window

0x3996,	// (0x0005dd5d) popup_call2_audio_out_window_ParamLimits

0x3996,	// (0x0005dd5d) popup_call2_audio_out_window

0x39f8,	// (0x0005ddbf) popup_call2_audio_second_window_ParamLimits

0x39f8,	// (0x0005ddbf) popup_call2_audio_second_window

0x3a56,	// (0x0005de1d) popup_call2_audio_wait_window_ParamLimits

0x3a56,	// (0x0005de1d) popup_call2_audio_wait_window

0xabef,	// (0x00064fb6) bg_popup_call2_act_pane_cp03

0xae2c,	// (0x000651f3) list_conf_pane_cp

0xbfa5,	// (0x0006636c) popup_call2_audio_conf_window_t1

0xbfb3,	// (0x0006637a) list_single_graphic_popup_conf2_pane_ParamLimits

0xbfb3,	// (0x0006637a) list_single_graphic_popup_conf2_pane

0xb84f,	// (0x00065c16) list_highlight_pane_cp04

0xbfc6,	// (0x0006638d) list_single_graphic_popup_conf2_pane_g1

0xb860,	// (0x00065c27) list_single_graphic_popup_conf2_pane_g2

0x0001,

0x03bb,	// (0x0005a782) list_single_graphic_popup_conf2_pane_g

0xbfd0,	// (0x00066397) list_single_graphic_popup_conf2_pane_t1

0xbfde,	// (0x000663a5) bg_popup_call2_act_pane_cp01_ParamLimits

0xbfde,	// (0x000663a5) bg_popup_call2_act_pane_cp01

0xc068,	// (0x0006642f) call_type_pane_cp05_ParamLimits

0xc068,	// (0x0006642f) call_type_pane_cp05

0xc0bc,	// (0x00066483) popup_call2_audio_second_window_g1_ParamLimits

0xc0bc,	// (0x00066483) popup_call2_audio_second_window_g1

0xc110,	// (0x000664d7) popup_call2_audio_second_window_g2_ParamLimits

0xc110,	// (0x000664d7) popup_call2_audio_second_window_g2

0x0002,

0x03c0,	// (0x0005a787) popup_call2_audio_second_window_g_ParamLimits

0x03c0,	// (0x0005a787) popup_call2_audio_second_window_g

0xc175,	// (0x0006653c) popup_call2_audio_second_window_t1_ParamLimits

0xc175,	// (0x0006653c) popup_call2_audio_second_window_t1

0xc230,	// (0x000665f7) popup_call2_audio_second_window_t2_ParamLimits

0xc230,	// (0x000665f7) popup_call2_audio_second_window_t2

0xc283,	// (0x0006664a) popup_call2_audio_second_window_t3_ParamLimits

0xc283,	// (0x0006664a) popup_call2_audio_second_window_t3

0x0003,

0x03c7,	// (0x0005a78e) popup_call2_audio_second_window_t_ParamLimits

0x03c7,	// (0x0005a78e) popup_call2_audio_second_window_t

0xabef,	// (0x00064fb6) bg_popup_call2_in_pane_cp02

0xabf9,	// (0x00064fc0) call_type_pane_cp04

0x3a95,	// (0x0005de5c) popup_call2_audio_wait_window_g1

0x3a9d,	// (0x0005de64) popup_call2_audio_wait_window_g2

0x0001,

0xf349,	// (0x00069710) popup_call2_audio_wait_window_g

0xac11,	// (0x00064fd8) popup_call2_audio_wait_window_t3

0xc376,	// (0x0006673d) bg_popup_call2_act_pane_ParamLimits

0xc376,	// (0x0006673d) bg_popup_call2_act_pane

0xc436,	// (0x000667fd) call_type_pane_cp03_ParamLimits

0xc436,	// (0x000667fd) call_type_pane_cp03

0xc49a,	// (0x00066861) popup_call2_audio_first_window_g1_ParamLimits

0xc49a,	// (0x00066861) popup_call2_audio_first_window_g1

0xc50a,	// (0x000668d1) popup_call2_audio_first_window_g2_ParamLimits

0xc50a,	// (0x000668d1) popup_call2_audio_first_window_g2

0xc56e,	// (0x00066935) popup_call2_audio_first_window_g3_ParamLimits

0xc56e,	// (0x00066935) popup_call2_audio_first_window_g3

0x0004,

0x03d5,	// (0x0005a79c) popup_call2_audio_first_window_g_ParamLimits

0x03d5,	// (0x0005a79c) popup_call2_audio_first_window_g

0xc5f6,	// (0x000669bd) popup_call2_audio_first_window_t1_ParamLimits

0xc5f6,	// (0x000669bd) popup_call2_audio_first_window_t1

0xc6f9,	// (0x00066ac0) popup_call2_audio_first_window_t4_ParamLimits

0xc6f9,	// (0x00066ac0) popup_call2_audio_first_window_t4

0xc7dc,	// (0x00066ba3) popup_call2_audio_first_window_t5_ParamLimits

0xc7dc,	// (0x00066ba3) popup_call2_audio_first_window_t5

0x0003,

0x03e0,	// (0x0005a7a7) popup_call2_audio_first_window_t_ParamLimits

0x03e0,	// (0x0005a7a7) popup_call2_audio_first_window_t

0xae42,	// (0x00065209) bg_popup_call2_act_pane_g1

0xce41,	// (0x00067208) popup_cale_lunar_info_window_t1

0xce4f,	// (0x00067216) popup_cale_lunar_info_window_t2

0xce5d,	// (0x00067224) popup_cale_lunar_info_window_t3

0xabef,	// (0x00064fb6) bg_popup_call2_bubble_pane

0xc8dd,	// (0x00066ca4) bg_popup_call2_in_pane_cp01_ParamLimits

0xc8dd,	// (0x00066ca4) bg_popup_call2_in_pane_cp01

0xa8cb,	// (0x00064c92) call_type_pane_cp02

0x3aa5,	// (0x0005de6c) popup_call2_audio_out_window_g1_ParamLimits

0x3aa5,	// (0x0005de6c) popup_call2_audio_out_window_g1

0xc925,	// (0x00066cec) popup_call2_audio_out_window_g2_ParamLimits

0xc925,	// (0x00066cec) popup_call2_audio_out_window_g2

0x3ad1,	// (0x0005de98) popup_call2_audio_out_window_g3_ParamLimits

0x3ad1,	// (0x0005de98) popup_call2_audio_out_window_g3

0x0003,

0xf34e,	// (0x00069715) popup_call2_audio_out_window_g_ParamLimits

0xf34e,	// (0x00069715) popup_call2_audio_out_window_g

0xc95c,	// (0x00066d23) popup_call2_audio_out_window_t1_ParamLimits

0xc95c,	// (0x00066d23) popup_call2_audio_out_window_t1

0xc9bb,	// (0x00066d82) popup_call2_audio_out_window_t2_ParamLimits

0xc9bb,	// (0x00066d82) popup_call2_audio_out_window_t2

0xca0f,	// (0x00066dd6) popup_call2_audio_out_window_t3_ParamLimits

0xca0f,	// (0x00066dd6) popup_call2_audio_out_window_t3

0xca25,	// (0x00066dec) popup_call2_audio_out_window_t4_ParamLimits

0xca25,	// (0x00066dec) popup_call2_audio_out_window_t4

0xca3b,	// (0x00066e02) popup_call2_audio_out_window_t5_ParamLimits

0xca3b,	// (0x00066e02) popup_call2_audio_out_window_t5

0x0005,

0x03f2,	// (0x0005a7b9) popup_call2_audio_out_window_t_ParamLimits

0x03f2,	// (0x0005a7b9) popup_call2_audio_out_window_t

0xcaad,	// (0x00066e74) bg_popup_call2_in_pane_ParamLimits

0xcaad,	// (0x00066e74) bg_popup_call2_in_pane

0xcb09,	// (0x00066ed0) popup_call2_audio_in_window_g1_ParamLimits

0xcb09,	// (0x00066ed0) popup_call2_audio_in_window_g1

0xcb41,	// (0x00066f08) popup_call2_audio_in_window_g2_ParamLimits

0xcb41,	// (0x00066f08) popup_call2_audio_in_window_g2

0xcb79,	// (0x00066f40) popup_call2_audio_in_window_g3_ParamLimits

0xcb79,	// (0x00066f40) popup_call2_audio_in_window_g3

0x0003,

0x03ff,	// (0x0005a7c6) popup_call2_audio_in_window_g_ParamLimits

0x03ff,	// (0x0005a7c6) popup_call2_audio_in_window_g

0xcbd1,	// (0x00066f98) popup_call2_audio_in_window_t1_ParamLimits

0xcbd1,	// (0x00066f98) popup_call2_audio_in_window_t1

0xcc51,	// (0x00067018) popup_call2_audio_in_window_t2_ParamLimits

0xcc51,	// (0x00067018) popup_call2_audio_in_window_t2

0xccd1,	// (0x00067098) popup_call2_audio_in_window_t3_ParamLimits

0xccd1,	// (0x00067098) popup_call2_audio_in_window_t3

0xcceb,	// (0x000670b2) popup_call2_audio_in_window_t4_ParamLimits

0xcceb,	// (0x000670b2) popup_call2_audio_in_window_t4

0xccfd,	// (0x000670c4) popup_call2_audio_in_window_t5_ParamLimits

0xccfd,	// (0x000670c4) popup_call2_audio_in_window_t5

0xcd0f,	// (0x000670d6) popup_call2_audio_in_window_t6_ParamLimits

0xcd0f,	// (0x000670d6) popup_call2_audio_in_window_t6

0x0005,

0x0408,	// (0x0005a7cf) popup_call2_audio_in_window_t_ParamLimits

0x0408,	// (0x0005a7cf) popup_call2_audio_in_window_t

0xae42,	// (0x00065209) bg_popup_call2_in_pane_g1

0xce6b,	// (0x00067232) popup_cale_lunar_info_window_t4

0x0003,

0x0483,	// (0x0005a84a) popup_cale_lunar_info_window_t

0xae4a,	// (0x00065211) bg_popup_call2_rect_pane_ParamLimits

0xae4a,	// (0x00065211) bg_popup_call2_rect_pane

0xabef,	// (0x00064fb6) call2_cli_visual_graphic_pane

0xabef,	// (0x00064fb6) call2_cli_visual_text_pane

0x3f4c,	// (0x0005e313) smil_status_volume_pane_g3

0x0002,

0xae62,	// (0x00065229) call2_cli_visual_graphic_pane_g1

0xae62,	// (0x00065229) call2_cli_visual_graphic_pane_g2

0xae62,	// (0x00065229) call2_cli_visual_graphic_pane_g3

0x0002,

0x0415,	// (0x0005a7dc) call2_cli_visual_graphic_pane_g

0xcd21,	// (0x000670e8) bg_popup_call2_rect_pane_g1

0xb00e,	// (0x000653d5) bg_popup_call2_rect_pane_g2

0xcd29,	// (0x000670f0) bg_popup_call2_rect_pane_g3

0xcd31,	// (0x000670f8) bg_popup_call2_rect_pane_g4

0xcd39,	// (0x00067100) bg_popup_call2_rect_pane_g5

0xcd41,	// (0x00067108) bg_popup_call2_rect_pane_g6

0xcd49,	// (0x00067110) bg_popup_call2_rect_pane_g7

0xcd51,	// (0x00067118) bg_popup_call2_rect_pane_g8

0xcd59,	// (0x00067120) bg_popup_call2_rect_pane_g9

0x0008,

0x041c,	// (0x0005a7e3) bg_popup_call2_rect_pane_g

0xcd61,	// (0x00067128) bg_popup_call2_bubble_pane_g1

0xcd69,	// (0x00067130) bg_popup_call2_bubble_pane_g2

0xcd71,	// (0x00067138) bg_popup_call2_bubble_pane_g3

0xcd79,	// (0x00067140) bg_popup_call2_bubble_pane_g4

0xcd81,	// (0x00067148) bg_popup_call2_bubble_pane_g5

0xcd89,	// (0x00067150) bg_popup_call2_bubble_pane_g6

0xcd91,	// (0x00067158) bg_popup_call2_bubble_pane_g7

0xcd99,	// (0x00067160) bg_popup_call2_bubble_pane_g8

0xcda1,	// (0x00067168) bg_popup_call2_bubble_pane_g9

0x0008,

0x042f,	// (0x0005a7f6) bg_popup_call2_bubble_pane_g

0x1635,	// (0x0005b9fc) aid_cale_week_size_cell_pane

0xae4a,	// (0x00065211) aid_cams_cif_uncrop_pane_ParamLimits

0xae4a,	// (0x00065211) aid_cams_cif_uncrop_pane

0x1c2e,	// (0x0005bff5) aid_cams_size_cell_ParamLimits

0x1c2e,	// (0x0005bff5) aid_cams_size_cell

0x1c3a,	// (0x0005c001) grid_cams_pane_ParamLimits

0x1c48,	// (0x0005c00f) linegrid_cams_pane_ParamLimits

0x1d1f,	// (0x0005c0e6) call_video_pane_t1

0x1d40,	// (0x0005c107) call_video_pane_t2

0x0001,

0xf18a,	// (0x00069551) call_video_pane_t

0x228e,	// (0x0005c655) aid_cale_month_size_cell_pane_ParamLimits

0x228e,	// (0x0005c655) aid_cale_month_size_cell_pane

0xf38f,	// (0x00069756) smil_status_volume_pane_g

0x3f59,	// (0x0005e320) volume_smil_pane_ParamLimits

0x0f64,	// (0x0005b32b) aid_popup2_width_pane

0x151e,	// (0x0005b8e5) cell_qdial_pane_g4_ParamLimits

0x151e,	// (0x0005b8e5) cell_qdial_pane_g4

0x31b8,	// (0x0005d57f) aid_blid_cardinal_pane_ParamLimits

0x31c8,	// (0x0005d58f) aid_blid_destination_pane_ParamLimits

0x31c8,	// (0x0005d58f) aid_blid_destination_pane

0xae4a,	// (0x00065211) bg_popup_call_poc_act_pane_ParamLimits

0xae4a,	// (0x00065211) bg_popup_call_poc_act_pane

0xae4a,	// (0x00065211) bg_popup_call_poc_inact_pane_ParamLimits

0xae4a,	// (0x00065211) bg_popup_call_poc_inact_pane

0xcda9,	// (0x00067170) bg_popup_call_poc_act_pane_g1

0xcdb1,	// (0x00067178) bg_popup_call_poc_act_pane_g2

0xcdb9,	// (0x00067180) bg_popup_call_poc_act_pane_g3

0xcd79,	// (0x00067140) bg_popup_call_poc_act_pane_g4

0xcd81,	// (0x00067148) bg_popup_call_poc_act_pane_g5

0xcdc1,	// (0x00067188) bg_popup_call_poc_act_pane_g6

0xcd91,	// (0x00067158) bg_popup_call_poc_act_pane_g7

0xcdc9,	// (0x00067190) bg_popup_call_poc_act_pane_g8

0xabef,	// (0x00064fb6) main_usb_pane

0x3db6,	// (0x0005e17d) popup_cale_lunar_info_window

0x205d,	// (0x0005c424) im_reading_pane_t1_ParamLimits

0xb1ea,	// (0x000655b1) list_im_pane_ParamLimits

0xb1fb,	// (0x000655c2) scroll_pane_cp07_ParamLimits

0xabef,	// (0x00064fb6) grid_highlight_pane_cp012

0xae4a,	// (0x00065211) mup_scale_pane_ParamLimits

0xc56e,	// (0x00066935) main_usb_pane_g1_ParamLimits

0xc56e,	// (0x00066935) main_usb_pane_g1

0x3b38,	// (0x0005deff) main_usb_pane_g2_ParamLimits

0x3b38,	// (0x0005deff) main_usb_pane_g2

0x0001,

0xf357,	// (0x0006971e) main_usb_pane_g_ParamLimits

0xf357,	// (0x0006971e) main_usb_pane_g

0x3b44,	// (0x0005df0b) main_usb_pane_t1_ParamLimits

0x3b44,	// (0x0005df0b) main_usb_pane_t1

0x3b56,	// (0x0005df1d) main_usb_pane_t2_ParamLimits

0x3b56,	// (0x0005df1d) main_usb_pane_t2

0x3b68,	// (0x0005df2f) main_usb_pane_t3_ParamLimits

0x3b68,	// (0x0005df2f) main_usb_pane_t3

0x3b7a,	// (0x0005df41) main_usb_pane_t4_ParamLimits

0x3b7a,	// (0x0005df41) main_usb_pane_t4

0x3b8c,	// (0x0005df53) main_usb_pane_t5_ParamLimits

0x3b8c,	// (0x0005df53) main_usb_pane_t5

0x3b9e,	// (0x0005df65) main_usb_pane_t6_ParamLimits

0x3b9e,	// (0x0005df65) main_usb_pane_t6

0x0005,

0xf35c,	// (0x00069723) main_usb_pane_t_ParamLimits

0x315e,	// (0x0005d525) aid_text_placing

0x316a,	// (0x0005d531) main_location2_pane_t1_ParamLimits

0x317e,	// (0x0005d545) main_location2_pane_t2_ParamLimits

0x3192,	// (0x0005d559) main_location2_pane_t3_ParamLimits

0x31a6,	// (0x0005d56d) main_location2_pane_t4_ParamLimits

0x31a6,	// (0x0005d56d) main_location2_pane_t4

0xf258,	// (0x0006961f) main_location2_pane_t_ParamLimits

0xae78,	// (0x0006523f) find_pinb_pane_g2_ParamLimits

0xae78,	// (0x0006523f) find_pinb_pane_g2

0x0001,

0xf09a,	// (0x00069461) find_pinb_pane_g_ParamLimits

0xf09a,	// (0x00069461) find_pinb_pane_g

0xae84,	// (0x0006524b) find_pinb_pane_t1_ParamLimits

0xae96,	// (0x0006525d) find_pinb_pane_t2_ParamLimits

0xf09f,	// (0x00069466) find_pinb_pane_t_ParamLimits

0xabef,	// (0x00064fb6) main_call3_pane

0x2851,	// (0x0005cc18) cale_month_day_heading_pane_t1_ParamLimits

0x28d7,	// (0x0005cc9e) cale_month_day_heading_pane_t2_ParamLimits

0x2950,	// (0x0005cd17) cale_month_day_heading_pane_t3_ParamLimits

0x29c9,	// (0x0005cd90) cale_month_day_heading_pane_t4_ParamLimits

0x2a42,	// (0x0005ce09) cale_month_day_heading_pane_t5_ParamLimits

0x2abb,	// (0x0005ce82) cale_month_day_heading_pane_t6_ParamLimits

0x2b34,	// (0x0005cefb) cale_month_day_heading_pane_t7_ParamLimits

0xf1af,	// (0x00069576) cale_month_day_heading_pane_t_ParamLimits

0xb445,	// (0x0006580c) smil_status_volume_pane

0x368f,	// (0x0005da56) postcard_address_pane_ParamLimits

0x368f,	// (0x0005da56) postcard_address_pane

0x369b,	// (0x0005da62) postcard_message_pane_ParamLimits

0x369b,	// (0x0005da62) postcard_message_pane

0x3afd,	// (0x0005dec4) call2_cli_visual_pane_t1_ParamLimits

0x3afd,	// (0x0005dec4) call2_cli_visual_pane_t1

0xcf80,	// (0x00067347) postcard_message_pane_t1_ParamLimits

0xcf80,	// (0x00067347) postcard_message_pane_t1

0xcf68,	// (0x0006732f) postcard_address_pane_t1_ParamLimits

0xcf68,	// (0x0006732f) postcard_address_pane_t1

0x408a,	// (0x0005e451) popup_call3_audio_in_window_ParamLimits

0x408a,	// (0x0005e451) popup_call3_audio_in_window

0x3f6e,	// (0x0005e335) bg_popup_call3_in_pane_ParamLimits

0x3f6e,	// (0x0005e335) bg_popup_call3_in_pane

0x3fd0,	// (0x0005e397) popup_call3_audio_in_window_g1_ParamLimits

0x3fd0,	// (0x0005e397) popup_call3_audio_in_window_g1

0x3fe8,	// (0x0005e3af) popup_call3_audio_in_window_g2_ParamLimits

0x3fe8,	// (0x0005e3af) popup_call3_audio_in_window_g2

0x4000,	// (0x0005e3c7) popup_call3_audio_in_window_g3_ParamLimits

0x4000,	// (0x0005e3c7) popup_call3_audio_in_window_g3

0x0003,

0xf396,	// (0x0006975d) popup_call3_audio_in_window_g_ParamLimits

0xf396,	// (0x0006975d) popup_call3_audio_in_window_g

0x4028,	// (0x0005e3ef) popup_call3_audio_in_window_t1_ParamLimits

0x4028,	// (0x0005e3ef) popup_call3_audio_in_window_t1

0x4050,	// (0x0005e417) popup_call3_audio_in_window_t2_ParamLimits

0x4050,	// (0x0005e417) popup_call3_audio_in_window_t2

0x4078,	// (0x0005e43f) popup_call3_audio_in_window_t3_ParamLimits

0x4078,	// (0x0005e43f) popup_call3_audio_in_window_t3

0x0002,

0xf39f,	// (0x00069766) popup_call3_audio_in_window_t_ParamLimits

0xf39f,	// (0x00069766) popup_call3_audio_in_window_t

0xb0fb,	// (0x000654c2) bg_popup_call3_rect_pane

0xcd21,	// (0x000670e8) bg_popup_call3_rect_pane_g1

0xb00e,	// (0x000653d5) bg_popup_call3_rect_pane_g2

0xcd29,	// (0x000670f0) bg_popup_call3_rect_pane_g3

0xcd31,	// (0x000670f8) bg_popup_call3_rect_pane_g4

0xcd39,	// (0x00067100) bg_popup_call3_rect_pane_g5

0xcd41,	// (0x00067108) bg_popup_call3_rect_pane_g6

0xcd49,	// (0x00067110) bg_popup_call3_rect_pane_g7

0xa7a8,	// (0x00064b6f) mup_visualizer_osc_pane

0xa7a8,	// (0x00064b6f) mup_visualizer_spec_pane

0x3f8e,	// (0x0005e355) call3_video_qcif_pane_ParamLimits

0x3f8e,	// (0x0005e355) call3_video_qcif_pane

0x3fa0,	// (0x0005e367) call3_video_qcif_uncrop_pane_ParamLimits

0x3fa0,	// (0x0005e367) call3_video_qcif_uncrop_pane

0x3fae,	// (0x0005e375) call3_video_subqcif_pane_ParamLimits

0x3fae,	// (0x0005e375) call3_video_subqcif_pane

0x3fc0,	// (0x0005e387) call3_video_subqcif_uncrop_pane_ParamLimits

0x3fc0,	// (0x0005e387) call3_video_subqcif_uncrop_pane

0x4018,	// (0x0005e3df) popup_call3_audio_in_window_g4_ParamLimits

0x4018,	// (0x0005e3df) popup_call3_audio_in_window_g4

0xa7a8,	// (0x00064b6f) mup_spec_half_pane

0xa7a8,	// (0x00064b6f) mup_spec_half_pane_cp

0xa7a8,	// (0x00064b6f) mup_osc_middle_pane

0xb131,	// (0x000654f8) mup_visualizer_osc_pane_g1

0xcf1b,	// (0x000672e2) mup_spec_bar_pane_ParamLimits

0xcf1b,	// (0x000672e2) mup_spec_bar_pane

0xb131,	// (0x000654f8) mup_spec_bar_pane_g1

0xb131,	// (0x000654f8) mup_spec_bar_pane_g2

0x0001,

0x02f2,	// (0x0005a6b9) mup_spec_bar_pane_g

0x1635,	// (0x0005b9fc) aid_cale_week_size_cell_pane_ParamLimits

0x164a,	// (0x0005ba11) bg_cale_heading_pane_ParamLimits

0xb04b,	// (0x00065412) bg_cale_pane_cp01_ParamLimits

0x166c,	// (0x0005ba33) cale_week_corner_pane_ParamLimits

0x1686,	// (0x0005ba4d) cale_week_day_heading_pane_ParamLimits

0x16a8,	// (0x0005ba6f) cale_week_scroll_pane_g1_ParamLimits

0x16c5,	// (0x0005ba8c) cale_week_scroll_pane_g2_ParamLimits

0x16d8,	// (0x0005ba9f) cale_week_scroll_pane_g3_ParamLimits

0x16eb,	// (0x0005bab2) cale_week_scroll_pane_g4_ParamLimits

0x16fe,	// (0x0005bac5) cale_week_scroll_pane_g5_ParamLimits

0x1711,	// (0x0005bad8) cale_week_scroll_pane_g6_ParamLimits

0x1724,	// (0x0005baeb) cale_week_scroll_pane_g7_ParamLimits

0x1739,	// (0x0005bb00) cale_week_scroll_pane_g8_ParamLimits

0x174e,	// (0x0005bb15) cale_week_scroll_pane_g9_ParamLimits

0x1761,	// (0x0005bb28) cale_week_scroll_pane_g10_ParamLimits

0x1774,	// (0x0005bb3b) cale_week_scroll_pane_g11_ParamLimits

0x1787,	// (0x0005bb4e) cale_week_scroll_pane_g12_ParamLimits

0x179e,	// (0x0005bb65) cale_week_scroll_pane_g13_ParamLimits

0x17b9,	// (0x0005bb80) cale_week_scroll_pane_g14_ParamLimits

0x17d4,	// (0x0005bb9b) cale_week_scroll_pane_g15_ParamLimits

0xf10b,	// (0x000694d2) cale_week_scroll_pane_g_ParamLimits

0x1804,	// (0x0005bbcb) cale_week_time_pane_ParamLimits

0x1819,	// (0x0005bbe0) grid_cale_week_pane_ParamLimits

0xb068,	// (0x0006542f) listscroll_cale_week_pane_t1

0xb07a,	// (0x00065441) scroll_pane_cp08_ParamLimits

0x2302,	// (0x0005c6c9) cale_month_corner_pane_ParamLimits

0xb41b,	// (0x000657e2) cale_month_pane_t1

0x27d0,	// (0x0005cb97) cale_month_week_pane_ParamLimits

0xc56e,	// (0x00066935) popup_call_status_window_g1_ParamLimits

0x2f8b,	// (0x0005d352) popup_call_status_window_g2_ParamLimits

0x2f97,	// (0x0005d35e) popup_call_status_window_g3_ParamLimits

0xf206,	// (0x000695cd) popup_call_status_window_g_ParamLimits

0xb7e3,	// (0x00065baa) aid_call2_pane

0x3547,	// (0x0005d90e) msg_header_pane_g1

0x368f,	// (0x0005da56) postcard_address2_pane_ParamLimits

0x368f,	// (0x0005da56) postcard_address2_pane

0x369b,	// (0x0005da62) postcard_message2_pane_ParamLimits

0x369b,	// (0x0005da62) postcard_message2_pane

0x3f1e,	// (0x0005e2e5) message2_row_pane_ParamLimits

0x3f1e,	// (0x0005e2e5) message2_row_pane

0x3f39,	// (0x0005e300) address2_row_pane_ParamLimits

0x3f39,	// (0x0005e300) address2_row_pane

0xcee8,	// (0x000672af) postcard_message2_row_pane_g1

0xcef0,	// (0x000672b7) postcard_message2_row_pane_t1

0xcee8,	// (0x000672af) address2_row_pane_g1

0xcef0,	// (0x000672b7) address2_row_pane_t1

0x1a9e,	// (0x0005be65) aid_size_cell_vorec

0xabef,	// (0x00064fb6) main_rss_pane

0xcefe,	// (0x000672c5) rss_list_single_pane_ParamLimits

0xcefe,	// (0x000672c5) rss_list_single_pane

0xcf0c,	// (0x000672d3) rss_list_single_pane_t1

0xcf0c,	// (0x000672d3) rss_list_single_pane_t2

0x0001,

0x04c2,	// (0x0005a889) rss_list_single_pane_t

0xabef,	// (0x00064fb6) main_camera2_pane

0xabef,	// (0x00064fb6) main_video2_pane

0x116f,	// (0x0005b536) cams_zoom_pane_cp2_ParamLimits

0x116f,	// (0x0005b536) cams_zoom_pane_cp2

0x116f,	// (0x0005b536) image2_vga_pane_ParamLimits

0x116f,	// (0x0005b536) image2_vga_pane

0xb80f,	// (0x00065bd6) main_camera2_pane_g1_ParamLimits

0xb80f,	// (0x00065bd6) main_camera2_pane_g1

0xb80f,	// (0x00065bd6) main_camera2_pane_g2_ParamLimits

0xb80f,	// (0x00065bd6) main_camera2_pane_g2

0xb80f,	// (0x00065bd6) main_camera2_pane_g3_ParamLimits

0xb80f,	// (0x00065bd6) main_camera2_pane_g3

0xb80f,	// (0x00065bd6) main_camera2_pane_g4_ParamLimits

0xb80f,	// (0x00065bd6) main_camera2_pane_g4

0xb80f,	// (0x00065bd6) main_camera2_pane_g5_ParamLimits

0xb80f,	// (0x00065bd6) main_camera2_pane_g5

0xb80f,	// (0x00065bd6) main_camera2_pane_g6_ParamLimits

0xb80f,	// (0x00065bd6) main_camera2_pane_g6

0xb80f,	// (0x00065bd6) main_camera2_pane_g7_ParamLimits

0xb80f,	// (0x00065bd6) main_camera2_pane_g7

0xb80f,	// (0x00065bd6) main_camera2_pane_g8_ParamLimits

0xb80f,	// (0x00065bd6) main_camera2_pane_g8

0x0008,

0xf3a6,	// (0x0006976d) main_camera2_pane_g_ParamLimits

0xf3a6,	// (0x0006976d) main_camera2_pane_g

0x40a7,	// (0x0005e46e) main_camera2_pane_t1_ParamLimits

0x40a7,	// (0x0005e46e) main_camera2_pane_t1

0x40a7,	// (0x0005e46e) main_camera2_pane_t2_ParamLimits

0x40a7,	// (0x0005e46e) main_camera2_pane_t2

0x40a7,	// (0x0005e46e) main_camera2_pane_t3_ParamLimits

0x40a7,	// (0x0005e46e) main_camera2_pane_t3

0x40a7,	// (0x0005e46e) main_camera2_pane_t4_ParamLimits

0x40a7,	// (0x0005e46e) main_camera2_pane_t4

0x0006,

0xf3b9,	// (0x00069780) main_camera2_pane_t_ParamLimits

0xf3b9,	// (0x00069780) main_camera2_pane_t

0x40cf,	// (0x0005e496) cams_zoom_pane_cp4_ParamLimits

0x40cf,	// (0x0005e496) cams_zoom_pane_cp4

0x3d61,	// (0x0005e128) image2_cif_pane_ParamLimits

0x3d61,	// (0x0005e128) image2_cif_pane

0x116f,	// (0x0005b536) image2_subqcif_pane_ParamLimits

0x116f,	// (0x0005b536) image2_subqcif_pane

0x40dd,	// (0x0005e4a4) main_video2_pane_g1_ParamLimits

0x40dd,	// (0x0005e4a4) main_video2_pane_g1

0x40dd,	// (0x0005e4a4) main_video2_pane_g2_ParamLimits

0x40dd,	// (0x0005e4a4) main_video2_pane_g2

0x40dd,	// (0x0005e4a4) main_video2_pane_g3_ParamLimits

0x40dd,	// (0x0005e4a4) main_video2_pane_g3

0x40dd,	// (0x0005e4a4) main_video2_pane_g4_ParamLimits

0x40dd,	// (0x0005e4a4) main_video2_pane_g4

0x40dd,	// (0x0005e4a4) main_video2_pane_g5_ParamLimits

0x40dd,	// (0x0005e4a4) main_video2_pane_g5

0x40dd,	// (0x0005e4a4) main_video2_pane_g6_ParamLimits

0x40dd,	// (0x0005e4a4) main_video2_pane_g6

0x0005,

0xf3c8,	// (0x0006978f) main_video2_pane_g_ParamLimits

0xf3c8,	// (0x0006978f) main_video2_pane_g

0x40eb,	// (0x0005e4b2) main_video2_pane_t1_ParamLimits

0x40eb,	// (0x0005e4b2) main_video2_pane_t1

0x40eb,	// (0x0005e4b2) main_video2_pane_t2_ParamLimits

0x40eb,	// (0x0005e4b2) main_video2_pane_t2

0x40eb,	// (0x0005e4b2) main_video2_pane_t3_ParamLimits

0x40eb,	// (0x0005e4b2) main_video2_pane_t3

0x0002,

0xf3d5,	// (0x0006979c) main_video2_pane_t_ParamLimits

0xf3d5,	// (0x0006979c) main_video2_pane_t

0x3c34,	// (0x0005dffb) call_muted_g2

0x0001,

0xf38a,	// (0x00069751) call_muted_g

0xabef,	// (0x00064fb6) main_mup2_pane

0xaee1,	// (0x000652a8) main_mup2_pane_g1_ParamLimits

0xaee1,	// (0x000652a8) main_mup2_pane_g1

0xaee1,	// (0x000652a8) main_mup2_pane_g2_ParamLimits

0xaee1,	// (0x000652a8) main_mup2_pane_g2

0xe17e,	// (0x00068545) main_mup_pane_g13_cp1

0x1189,	// (0x0005b550) mup_volume_pane_cp1

0xaee1,	// (0x000652a8) main_mup2_pane_g4_ParamLimits

0xaee1,	// (0x000652a8) main_mup2_pane_g4

0xaee1,	// (0x000652a8) main_mup2_pane_g5_ParamLimits

0xaee1,	// (0x000652a8) main_mup2_pane_g5

0xaee1,	// (0x000652a8) main_mup2_pane_g6_ParamLimits

0xaee1,	// (0x000652a8) main_mup2_pane_g6

0xaee1,	// (0x000652a8) main_mup2_pane_g7_ParamLimits

0xaee1,	// (0x000652a8) main_mup2_pane_g7

0x0006,

0xf3dc,	// (0x000697a3) main_mup2_pane_g_ParamLimits

0xf3dc,	// (0x000697a3) main_mup2_pane_g

0xaeef,	// (0x000652b6) main_mup2_pane_t1_ParamLimits

0xaeef,	// (0x000652b6) main_mup2_pane_t1

0xaeef,	// (0x000652b6) main_mup2_pane_t2_ParamLimits

0xaeef,	// (0x000652b6) main_mup2_pane_t2

0xaeef,	// (0x000652b6) main_mup2_pane_t3_ParamLimits

0xaeef,	// (0x000652b6) main_mup2_pane_t3

0xaeef,	// (0x000652b6) main_mup2_pane_t4_ParamLimits

0xaeef,	// (0x000652b6) main_mup2_pane_t4

0xaeef,	// (0x000652b6) main_mup2_pane_t5_ParamLimits

0xaeef,	// (0x000652b6) main_mup2_pane_t5

0xaeef,	// (0x000652b6) main_mup2_pane_t6_ParamLimits

0xaeef,	// (0x000652b6) main_mup2_pane_t6

0x0005,

0xf3eb,	// (0x000697b2) main_mup2_pane_t_ParamLimits

0xf3eb,	// (0x000697b2) main_mup2_pane_t

0xca9f,	// (0x00066e66) mup2_visualizer_pane_ParamLimits

0xca9f,	// (0x00066e66) mup2_visualizer_pane

0xca9f,	// (0x00066e66) mup_progress_pane_cp_ParamLimits

0xca9f,	// (0x00066e66) mup_progress_pane_cp

0x41b2,	// (0x0005e579) mup_volume_pane_cp_ParamLimits

0x41b2,	// (0x0005e579) mup_volume_pane_cp

0xaec5,	// (0x0006528c) mup2_visualizer_pane_g1_ParamLimits

0xaec5,	// (0x0006528c) mup2_visualizer_pane_g1

0xaed3,	// (0x0006529a) mup2_visualizer_pane_g2_ParamLimits

0xaed3,	// (0x0006529a) mup2_visualizer_pane_g2

0xaed3,	// (0x0006529a) mup2_visualizer_pane_g3_ParamLimits

0xaed3,	// (0x0006529a) mup2_visualizer_pane_g3

0x0002,

0xf0a4,	// (0x0006946b) mup2_visualizer_pane_g_ParamLimits

0xf0a4,	// (0x0006946b) mup2_visualizer_pane_g

0xbe35,	// (0x000661fc) aid_size_cell_fmradio

0x3d4a,	// (0x0005e111) aid_height_parent_landcape

0xb279,	// (0x00065640) wml_content_pane_cp

0xb281,	// (0x00065648) wml_tabs_pane

0xb28a,	// (0x00065651) popup_wml_miniature_window

0xb292,	// (0x00065659) scroll_pane_cp021

0xb2a6,	// (0x0006566d) wml_content_pane_comp8

0xabef,	// (0x00064fb6) bg_popup_sub_pane_cp05

0xcfb2,	// (0x00067379) popup_wml_miniature_window_g1

0xcfba,	// (0x00067381) wml_miniature_view_pane

0x40ff,	// (0x0005e4c6) aid_size_wml_view

0x4107,	// (0x0005e4ce) wml_miniature_view_pane_g1

0x4110,	// (0x0005e4d7) wml_miniature_view_pane_g2

0x4119,	// (0x0005e4e0) wml_miniature_view_pane_g3

0x4121,	// (0x0005e4e8) wml_miniature_view_pane_g4

0x4129,	// (0x0005e4f0) wml_miniature_view_pane_g5

0x4131,	// (0x0005e4f8) wml_miniature_view_pane_g6

0x4139,	// (0x0005e500) wml_miniature_view_pane_g7

0x4141,	// (0x0005e508) wml_miniature_view_pane_g8

0x0007,

0xf3f8,	// (0x000697bf) wml_miniature_view_pane_g

0xcfc2,	// (0x00067389) background_graphic_ParamLimits

0xcfc2,	// (0x00067389) background_graphic

0xcfce,	// (0x00067395) wml_tabs_2_pane

0xcfd7,	// (0x0006739e) wml_tabs_3_pane_ParamLimits

0xcfd7,	// (0x0006739e) wml_tabs_3_pane

0xcfe9,	// (0x000673b0) wml_tabs_4_pane_ParamLimits

0xcfe9,	// (0x000673b0) wml_tabs_4_pane

0xcfff,	// (0x000673c6) wml_tabs_5_pane_ParamLimits

0xcfff,	// (0x000673c6) wml_tabs_5_pane

0xd019,	// (0x000673e0) wml_tabs_pane_g2_ParamLimits

0xd019,	// (0x000673e0) wml_tabs_pane_g2

0xd02e,	// (0x000673f5) wml_tabs_pane_g3_ParamLimits

0xd02e,	// (0x000673f5) wml_tabs_pane_g3

0xd043,	// (0x0006740a) wml_tabs_2_active_pane_ParamLimits

0xd043,	// (0x0006740a) wml_tabs_2_active_pane

0xd043,	// (0x0006740a) wml_tabs_2_passive_pane_ParamLimits

0xd043,	// (0x0006740a) wml_tabs_2_passive_pane

0x4149,	// (0x0005e510) wml_tabs_3_active_pane_cp_ParamLimits

0x4149,	// (0x0005e510) wml_tabs_3_active_pane_cp

0x415a,	// (0x0005e521) wml_tabs_3_passive_pane_ParamLimits

0x415a,	// (0x0005e521) wml_tabs_3_passive_pane

0x416b,	// (0x0005e532) wml_tabs_3_passive_pane_cp_ParamLimits

0x416b,	// (0x0005e532) wml_tabs_3_passive_pane_cp

0x417c,	// (0x0005e543) tabs_4_active_pane

0x4184,	// (0x0005e54b) tabs_4_passive_pane

0x418c,	// (0x0005e553) tabs_4_passive_pane_cp

0x4194,	// (0x0005e55b) tabs_4_passive_pane_cp2

0x3b30,	// (0x0005def7) aid_height_text

0xca9f,	// (0x00066e66) mup_volume_cont_pane_ParamLimits

0xca9f,	// (0x00066e66) mup_volume_cont_pane

0xa7a8,	// (0x00064b6f) aid_size_cell_pinb

0xa7a8,	// (0x00064b6f) aid_size_list_pinb

0xca9f,	// (0x00066e66) mup2_volume_cont_pane_ParamLimits

0xca9f,	// (0x00066e66) mup2_volume_cont_pane

0x419c,	// (0x0005e563) mup2_volume_cont_pane_g1_ParamLimits

0x419c,	// (0x0005e563) mup2_volume_cont_pane_g1

0x0f70,	// (0x0005b337) aid_size_cell_touch_ParamLimits

0x0f70,	// (0x0005b337) aid_size_cell_touch

0x1193,	// (0x0005b55a) touch_pane_ParamLimits

0x1193,	// (0x0005b55a) touch_pane

0x1189,	// (0x0005b550) main_rss2_pane

0xd05a,	// (0x00067421) listscroll_rss2_pane

0xd063,	// (0x0006742a) rss2_navigation_pane

0xd06b,	// (0x00067432) list_rss2_pane

0xb908,	// (0x00065ccf) scroll_pane_cp22

0xd073,	// (0x0006743a) rss2_navigation_pane_g1

0xd07c,	// (0x00067443) rss2_navigation_pane_g2

0xd084,	// (0x0006744b) rss2_navigation_pane_g3

0x0002,

0x0541,	// (0x0005a908) rss2_navigation_pane_g

0xd08c,	// (0x00067453) rss2_navigation_pane_t1

0x41c8,	// (0x0005e58f) rss2_list_single_pane_ParamLimits

0x41c8,	// (0x0005e58f) rss2_list_single_pane

0xd09a,	// (0x00067461) rss2_list_single_pane_t2

0xd0a8,	// (0x0006746f) rss2_list_single_pane_t3_ParamLimits

0xd0a8,	// (0x0006746f) rss2_list_single_pane_t3

0xd0c5,	// (0x0006748c) rss2_list_single_pane_t4

0x2dd6,	// (0x0005d19d) smil_status_pane_g1

0x3d61,	// (0x0005e128) main_image2_pane_ParamLimits

0x3d61,	// (0x0005e128) main_image2_pane

0xb80f,	// (0x00065bd6) main_camera2_pane_g9_ParamLimits

0xb80f,	// (0x00065bd6) main_camera2_pane_g9

0x40a7,	// (0x0005e46e) main_camera2_pane_t5_ParamLimits

0x40a7,	// (0x0005e46e) main_camera2_pane_t5

0x40bb,	// (0x0005e482) main_camera2_pane_t6_ParamLimits

0x40bb,	// (0x0005e482) main_camera2_pane_t6

0x41fc,	// (0x0005e5c3) main_image2_pane_g1_ParamLimits

0x41fc,	// (0x0005e5c3) main_image2_pane_g1

0x3862,	// (0x0005dc29) smil2_video_pane_ParamLimits

0x3862,	// (0x0005dc29) smil2_video_pane

0x0dd8,	// (0x0005b19f) aid_zoom_text_primary_cp

0x1124,	// (0x0005b4eb) popup_preview_fixed_window

0xb1e2,	// (0x000655a9) im_reading_pane_g1

0x4099,	// (0x0005e460) cams2_bc_adjust_pane_cp_ParamLimits

0x4099,	// (0x0005e460) cams2_bc_adjust_pane_cp

0x116f,	// (0x0005b536) cams2_bc_adjust_pane_ParamLimits

0x116f,	// (0x0005b536) cams2_bc_adjust_pane

0xe17e,	// (0x00068545) cams2_bc_adjust_pane_g1

0x1189,	// (0x0005b550) cams2_slider_pane

0xe17e,	// (0x00068545) cams2_slider_pane_g1

0xe17e,	// (0x00068545) cams2_slider_pane_g2

0x0006,

0xf409,	// (0x000697d0) cams2_slider_pane_g

0x1264,	// (0x0005b62b) calc_display_pane_ParamLimits

0x1282,	// (0x0005b649) calc_paper_pane_ParamLimits

0x129e,	// (0x0005b665) grid_calc_pane_ParamLimits

0x2ff5,	// (0x0005d3bc) popup_clock_digital_window_t1_ParamLimits

0xbdd2,	// (0x00066199) main_image_pane_t1

0x124a,	// (0x0005b611) aid_size_cell_calc_ParamLimits

0x124a,	// (0x0005b611) aid_size_cell_calc

0x3d92,	// (0x0005e159) popup_blid_sat_info2_window_ParamLimits

0x3d92,	// (0x0005e159) popup_blid_sat_info2_window

0xd0d3,	// (0x0006749a) aid_size_cell_blid

0xca9f,	// (0x00066e66) bg_popup_window_pane_cp07

0xd0f0,	// (0x000674b7) grid_popup_blid_pane

0xd0fa,	// (0x000674c1) heading_pane_cp05_ParamLimits

0xd0fa,	// (0x000674c1) heading_pane_cp05

0xd1c4,	// (0x0006758b) cell_popup_blid_pane_ParamLimits

0xd1c4,	// (0x0006758b) cell_popup_blid_pane

0xd1e8,	// (0x000675af) cell_popup_blid_pane_g1

0xd1f0,	// (0x000675b7) cell_popup_blid_pane_t1

0xca9f,	// (0x00066e66) mup2_indicator_pane_ParamLimits

0xca9f,	// (0x00066e66) mup2_indicator_pane

0xa7a8,	// (0x00064b6f) mup2_visualizer_osc_pane

0xcf9c,	// (0x00067363) mup2_visualizer_spec_pane_ParamLimits

0xcf9c,	// (0x00067363) mup2_visualizer_spec_pane

0xa7a8,	// (0x00064b6f) mup2_spec_half_pane

0xa7a8,	// (0x00064b6f) mup2_spec_half_pane_cp

0xd1fe,	// (0x000675c5) mup2_spec_bar_pane_ParamLimits

0xd1fe,	// (0x000675c5) mup2_spec_bar_pane

0xb131,	// (0x000654f8) mup2_spec_bar_pane_g1

0xd21d,	// (0x000675e4) mup2_spec_bar_pane_g2

0x0001,

0x056e,	// (0x0005a935) mup2_spec_bar_pane_g

0xa7a8,	// (0x00064b6f) mup2_osc_middle_pane

0xb131,	// (0x000654f8) mup2_visualizer_osc_pane_g1

0xa7d2,	// (0x00064b99) popup_number_entry_window_t1_ParamLimits

0xa80f,	// (0x00064bd6) popup_number_entry_window_t2_ParamLimits

0xa821,	// (0x00064be8) popup_number_entry_window_t3_ParamLimits

0x11ea,	// (0x0005b5b1) popup_number_entry_window_t5_ParamLimits

0x11ea,	// (0x0005b5b1) popup_number_entry_window_t5

0xf045,	// (0x0006940c) popup_number_entry_window_t_ParamLimits

0xa833,	// (0x00064bfa) text_title_cp2_ParamLimits

0x3563,	// (0x0005d92a) aid_hotspot_pointer_text2_pane

0x35f1,	// (0x0005d9b8) main_viewer_pane_g9_ParamLimits

0x35f1,	// (0x0005d9b8) main_viewer_pane_g9

0xb41b,	// (0x000657e2) cale_month_pane_t1_ParamLimits

0xb458,	// (0x0006581f) bg_cale_pane_ParamLimits

0xb470,	// (0x00065837) list_cale_pane_ParamLimits

0xb481,	// (0x00065848) listscroll_cale_day_pane_t1

0xb493,	// (0x0006585a) scroll_pane_cp09_ParamLimits

0x32a6,	// (0x0005d66d) main_mup_eq_pane_t1_ParamLimits

0x32a6,	// (0x0005d66d) main_mup_eq_pane_t1

0x32c0,	// (0x0005d687) main_mup_eq_pane_t2_ParamLimits

0x32c0,	// (0x0005d687) main_mup_eq_pane_t2

0x32d8,	// (0x0005d69f) main_mup_eq_pane_t3_ParamLimits

0x32d8,	// (0x0005d69f) main_mup_eq_pane_t3

0x32f0,	// (0x0005d6b7) main_mup_eq_pane_t4_ParamLimits

0x32f0,	// (0x0005d6b7) main_mup_eq_pane_t4

0x3308,	// (0x0005d6cf) main_mup_eq_pane_t5_ParamLimits

0x3308,	// (0x0005d6cf) main_mup_eq_pane_t5

0x3320,	// (0x0005d6e7) main_mup_eq_pane_t6_ParamLimits

0x3320,	// (0x0005d6e7) main_mup_eq_pane_t6

0x3334,	// (0x0005d6fb) main_mup_eq_pane_t7_ParamLimits

0x3334,	// (0x0005d6fb) main_mup_eq_pane_t7

0x3348,	// (0x0005d70f) main_mup_eq_pane_t8_ParamLimits

0x3348,	// (0x0005d70f) main_mup_eq_pane_t8

0x335e,	// (0x0005d725) main_mup_eq_pane_t9_ParamLimits

0x335e,	// (0x0005d725) main_mup_eq_pane_t9

0x3376,	// (0x0005d73d) main_mup_eq_pane_t10_ParamLimits

0x3376,	// (0x0005d73d) main_mup_eq_pane_t10

0x0009,

0xf2b1,	// (0x00069678) main_mup_eq_pane_t_ParamLimits

0xf2b1,	// (0x00069678) main_mup_eq_pane_t

0x3433,	// (0x0005d7fa) mup_equalizer_pane_cp5_ParamLimits

0x3449,	// (0x0005d810) mup_equalizer_pane_cp6_ParamLimits

0x3461,	// (0x0005d828) mup_equalizer_pane_cp7_ParamLimits

0x1189,	// (0x0005b550) main_gallery_pane

0xcf3a,	// (0x00067301) smil2_volume_pane

0xcf42,	// (0x00067309) smil_status_volume_pane_g1_ParamLimits

0xcf55,	// (0x0006731c) smil_status_volume_pane_g2_ParamLimits

0x3f4c,	// (0x0005e313) smil_status_volume_pane_g3_ParamLimits

0xf38f,	// (0x00069756) smil_status_volume_pane_g_ParamLimits

0xca9f,	// (0x00066e66) bg_popup_window_pane_cp07_ParamLimits

0xd0db,	// (0x000674a2) blid_firmament_pane

0xaeb7,	// (0x0006527e) aid_size_cell_gallery_ParamLimits

0xaeb7,	// (0x0006527e) aid_size_cell_gallery

0xaeb7,	// (0x0006527e) grid_gallery_pane_ParamLimits

0xaeb7,	// (0x0006527e) grid_gallery_pane

0xbc6e,	// (0x00066035) cell_gallery_pane_ParamLimits

0xbc6e,	// (0x00066035) cell_gallery_pane

0xa7e5,	// (0x00064bac) bg_cell_gallery_focus_pane_ParamLimits

0xa7e5,	// (0x00064bac) bg_cell_gallery_focus_pane

0xaec5,	// (0x0006528c) cell_gallery_pane_g1_ParamLimits

0xaec5,	// (0x0006528c) cell_gallery_pane_g1

0xaec5,	// (0x0006528c) cell_gallery_pane_g2_ParamLimits

0xaec5,	// (0x0006528c) cell_gallery_pane_g2

0xaec5,	// (0x0006528c) cell_gallery_pane_g3_ParamLimits

0xaec5,	// (0x0006528c) cell_gallery_pane_g3

0xaed3,	// (0x0006529a) cell_gallery_pane_g4_ParamLimits

0xaed3,	// (0x0006529a) cell_gallery_pane_g4

0x0003,

0x0573,	// (0x0005a93a) cell_gallery_pane_g_ParamLimits

0x0573,	// (0x0005a93a) cell_gallery_pane_g

0xd227,	// (0x000675ee) bg_cell_gallery_focus_pane_g1

0xd22f,	// (0x000675f6) bg_cell_gallery_focus_pane_g2

0xd237,	// (0x000675fe) bg_cell_gallery_focus_pane_g3

0xd23f,	// (0x00067606) bg_cell_gallery_focus_pane_g4

0xd247,	// (0x0006760e) bg_cell_gallery_focus_pane_g5

0xd24f,	// (0x00067616) bg_cell_gallery_focus_pane_g6

0xd257,	// (0x0006761e) bg_cell_gallery_focus_pane_g7

0xd25f,	// (0x00067626) bg_cell_gallery_focus_pane_g8

0x0007,

0x057c,	// (0x0005a943) bg_cell_gallery_focus_pane_g

0xd267,	// (0x0006762e) aid_firma_cardinal

0xd27b,	// (0x00067642) blid_firmament_pane_t1

0xd292,	// (0x00067659) blid_firmament_pane_t2

0xd2a9,	// (0x00067670) blid_firmament_pane_t3

0xd2c0,	// (0x00067687) blid_firmament_pane_t4

0x0003,

0x058d,	// (0x0005a954) blid_firmament_pane_t

0xd2d7,	// (0x0006769e) blid_sat_info_pane

0xb131,	// (0x000654f8) blid_sat_info_pane_g1

0xb131,	// (0x000654f8) blid_sat_info_pane_g2

0x0001,

0x02f2,	// (0x0005a6b9) blid_sat_info_pane_g

0xd2e7,	// (0x000676ae) blid_sat_info_pane_t1

0xd2f5,	// (0x000676bc) smil2_volume_content_pane

0xd2fe,	// (0x000676c5) smil2_volume_pane_g1

0xb097,	// (0x0006545e) smil2_volume_content_pane_g1

0xd306,	// (0x000676cd) smil2_volume_content_pane_g2

0xd30f,	// (0x000676d6) smil2_volume_content_pane_g3

0xd318,	// (0x000676df) smil2_volume_content_pane_g4

0xd321,	// (0x000676e8) smil2_volume_content_pane_g5

0xd32a,	// (0x000676f1) smil2_volume_content_pane_g6

0xd333,	// (0x000676fa) smil2_volume_content_pane_g7

0xd33c,	// (0x00067703) smil2_volume_content_pane_g8

0xd345,	// (0x0006770c) smil2_volume_content_pane_g9

0xd34e,	// (0x00067715) smil2_volume_content_pane_g10

0x0009,

0xf418,	// (0x000697df) smil2_volume_content_pane_g

0x189a,	// (0x0005bc61) cale_week_day_heading_pane_t1_ParamLimits

0x18b5,	// (0x0005bc7c) cale_week_day_heading_pane_t2_ParamLimits

0x18d0,	// (0x0005bc97) cale_week_day_heading_pane_t3_ParamLimits

0x18eb,	// (0x0005bcb2) cale_week_day_heading_pane_t4_ParamLimits

0x1906,	// (0x0005bccd) cale_week_day_heading_pane_t5_ParamLimits

0x1921,	// (0x0005bce8) cale_week_day_heading_pane_t6_ParamLimits

0x193c,	// (0x0005bd03) cale_week_day_heading_pane_t7_ParamLimits

0xf12c,	// (0x000694f3) cale_week_day_heading_pane_t_ParamLimits

0xb0a9,	// (0x00065470) bg_cale_side_pane_ParamLimits

0x1957,	// (0x0005bd1e) cale_week_time_pane_t1_ParamLimits

0x1971,	// (0x0005bd38) cale_week_time_pane_t2_ParamLimits

0x198b,	// (0x0005bd52) cale_week_time_pane_t3_ParamLimits

0x19a5,	// (0x0005bd6c) cale_week_time_pane_t4_ParamLimits

0x19bf,	// (0x0005bd86) cale_week_time_pane_t5_ParamLimits

0x19d9,	// (0x0005bda0) cale_week_time_pane_t6_ParamLimits

0x19f9,	// (0x0005bdc0) cale_week_time_pane_t7_ParamLimits

0x1a1b,	// (0x0005bde2) cale_week_time_pane_t8_ParamLimits

0xf13b,	// (0x00069502) cale_week_time_pane_t_ParamLimits

0x1a3f,	// (0x0005be06) cell_cale_week_pane_g2_ParamLimits

0xb0a9,	// (0x00065470) bg_cale_side_pane_cp01_ParamLimits

0x2bc5,	// (0x0005cf8c) cale_month_week_pane_t1_ParamLimits

0x2bde,	// (0x0005cfa5) cale_month_week_pane_t2_ParamLimits

0x2bf7,	// (0x0005cfbe) cale_month_week_pane_t3_ParamLimits

0x2c10,	// (0x0005cfd7) cale_month_week_pane_t4_ParamLimits

0x2c2b,	// (0x0005cff2) cale_month_week_pane_t5_ParamLimits

0x2c4c,	// (0x0005d013) cale_month_week_pane_t6_ParamLimits

0xf1be,	// (0x00069585) cale_month_week_pane_t_ParamLimits

0x2d93,	// (0x0005d15a) cell_cale_month_pane_g1_ParamLimits

0x1189,	// (0x0005b550) main_cale_event_viewer_pane

0xa7a8,	// (0x00064b6f) listscroll_cale_event_viewer_pane

0xd357,	// (0x0006771e) list_cale_ev_pane

0xd35f,	// (0x00067726) scroll_pane_cp023

0xd36b,	// (0x00067732) field_cale_ev_pane_ParamLimits

0xd36b,	// (0x00067732) field_cale_ev_pane

0xd389,	// (0x00067750) field_cale_ev_content_pane_ParamLimits

0xd389,	// (0x00067750) field_cale_ev_content_pane

0xd395,	// (0x0006775c) field_cale_ev_pane_g1_ParamLimits

0xd395,	// (0x0006775c) field_cale_ev_pane_g1

0xd3a1,	// (0x00067768) field_cale_ev_pane_g2_ParamLimits

0xd3a1,	// (0x00067768) field_cale_ev_pane_g2

0xd3b9,	// (0x00067780) field_cale_ev_pane_g3_ParamLimits

0xd3b9,	// (0x00067780) field_cale_ev_pane_g3

0x0002,

0xf42d,	// (0x000697f4) field_cale_ev_pane_g_ParamLimits

0xf42d,	// (0x000697f4) field_cale_ev_pane_g

0xd3d1,	// (0x00067798) field_cale_ev_pane_t1_ParamLimits

0xd3d1,	// (0x00067798) field_cale_ev_pane_t1

0xd3f6,	// (0x000677bd) field_cale_ev_content_pane_t1_ParamLimits

0xd3f6,	// (0x000677bd) field_cale_ev_content_pane_t1

0xbcb8,	// (0x0006607f) bg_button_pane_cp01

0x1625,	// (0x0005b9ec) listscroll_cale_week_pane_ParamLimits

0xb042,	// (0x00065409) popup_toolbar_window_cp01

0xb068,	// (0x0006542f) listscroll_cale_week_pane_t1_ParamLimits

0x1625,	// (0x0005b9ec) listscroll_cale_day_pane_ParamLimits

0xb042,	// (0x00065409) popup_toolbar_window_cp02

0xb481,	// (0x00065848) listscroll_cale_day_pane_t1_ParamLimits

0x1625,	// (0x0005b9ec) main_cale_month_pane_ParamLimits

0x3e95,	// (0x0005e25c) popup_toolbar_window_cp03_ParamLimits

0x3e95,	// (0x0005e25c) popup_toolbar_window_cp03

0x3778,	// (0x0005db3f) main_image_pane_g2_ParamLimits

0x3778,	// (0x0005db3f) main_image_pane_g2

0x3784,	// (0x0005db4b) main_image_pane_g3_ParamLimits

0x3784,	// (0x0005db4b) main_image_pane_g3

0x0002,

0xf339,	// (0x00069700) main_image_pane_g_ParamLimits

0xf339,	// (0x00069700) main_image_pane_g

0xbdd2,	// (0x00066199) main_image_pane_t1_ParamLimits

0x3790,	// (0x0005db57) main_image_pane_t2_ParamLimits

0x3790,	// (0x0005db57) main_image_pane_t2

0x37a2,	// (0x0005db69) main_image_pane_t3_ParamLimits

0x37a2,	// (0x0005db69) main_image_pane_t3

0x37b4,	// (0x0005db7b) main_image_pane_t4_ParamLimits

0x37b4,	// (0x0005db7b) main_image_pane_t4

0x0003,

0xf340,	// (0x00069707) main_image_pane_t_ParamLimits

0xf340,	// (0x00069707) main_image_pane_t

0x37c6,	// (0x0005db8d) popup_image_details_window_cp01

0x37d0,	// (0x0005db97) popup_toobar_trans_pane_cp01_ParamLimits

0x37d0,	// (0x0005db97) popup_toobar_trans_pane_cp01

0x3de5,	// (0x0005e1ac) popup_image_details_window_ParamLimits

0x3de5,	// (0x0005e1ac) popup_image_details_window

0x3df3,	// (0x0005e1ba) popup_image_focus_window

0x116f,	// (0x0005b536) camera2_autofocus_pane_ParamLimits

0x116f,	// (0x0005b536) camera2_autofocus_pane

0xa7a8,	// (0x00064b6f) bg_popup_sub_pane_cp06

0xd414,	// (0x000677db) popup_image_focus_window_g1

0xd41c,	// (0x000677e3) popup_image_focus_window_g2

0xd424,	// (0x000677eb) popup_image_focus_window_g3

0xd42c,	// (0x000677f3) popup_image_focus_window_g4

0x0003,

0x05b2,	// (0x0005a979) popup_image_focus_window_g

0xd434,	// (0x000677fb) popup_image_focus_window_t1

0xd442,	// (0x00067809) popup_image_focus_window_t2

0xd452,	// (0x00067819) popup_image_focus_window_t3

0x0002,

0x05bb,	// (0x0005a982) popup_image_focus_window_t

0xaec5,	// (0x0006528c) camera2_autofocus_pane_g1

0xa7e5,	// (0x00064bac) bg_tb_trans_pane_cp01

0xd460,	// (0x00067827) popup_image_details_window_g1

0xd473,	// (0x0006783a) popup_image_details_window_g2

0x0002,

0x05cd,	// (0x0005a994) popup_image_details_window_g

0xd49c,	// (0x00067863) popup_image_details_window_t1

0xd4ae,	// (0x00067875) popup_image_details_window_t2

0xd4c7,	// (0x0006788e) popup_image_details_window_t3

0xd4db,	// (0x000678a2) popup_image_details_window_t4

0xd4f6,	// (0x000678bd) popup_image_details_window_t5

0x0004,

0x05d4,	// (0x0005a99b) popup_image_details_window_t

0xaf23,	// (0x000652ea) bg_calc_paper_pane_ParamLimits

0x1189,	// (0x0005b550) grid_highlight_pane_cp013

0x139b,	// (0x0005b762) list_calc_pane_ParamLimits

0x13ad,	// (0x0005b774) scroll_pane_cp024

0xaf37,	// (0x000652fe) bg_calc_display_pane_ParamLimits

0x13b5,	// (0x0005b77c) calc_display_pane_t1_ParamLimits

0x13ca,	// (0x0005b791) calc_display_pane_t2_ParamLimits

0x13df,	// (0x0005b7a6) calc_display_pane_t3_ParamLimits

0xf0c3,	// (0x0006948a) calc_display_pane_t_ParamLimits

0x14b9,	// (0x0005b880) cell_calc_pane_g2

0x0001,

0xf0e0,	// (0x000694a7) cell_calc_pane_g

0x14c2,	// (0x0005b889) cell_calc_pane_t1

0xaf8c,	// (0x00065353) grid_highlight_pane_cp02_ParamLimits

0xafa2,	// (0x00065369) toolbar_button_pane_cp01_ParamLimits

0xafa2,	// (0x00065369) toolbar_button_pane_cp01

0xbe17,	// (0x000661de) temp_image_control_pane_ParamLimits

0xbe17,	// (0x000661de) temp_image_control_pane

0x3d61,	// (0x0005e128) main_mp3_pane

0xd510,	// (0x000678d7) temp_image_control_pane_g1_ParamLimits

0xd510,	// (0x000678d7) temp_image_control_pane_g1

0xd51e,	// (0x000678e5) temp_image_control_pane_g2_ParamLimits

0xd51e,	// (0x000678e5) temp_image_control_pane_g2

0xd530,	// (0x000678f7) temp_image_control_pane_g3_ParamLimits

0xd530,	// (0x000678f7) temp_image_control_pane_g3

0x4208,	// (0x0005e5cf) temp_image_control_pane_g4_ParamLimits

0x4208,	// (0x0005e5cf) temp_image_control_pane_g4

0x0003,

0xf434,	// (0x000697fb) temp_image_control_pane_g_ParamLimits

0xf434,	// (0x000697fb) temp_image_control_pane_g

0xd510,	// (0x000678d7) main_mp3_pane_g1

0x4219,	// (0x0005e5e0) main_mp3_pane_g2

0x0007,

0xf43d,	// (0x00069804) main_mp3_pane_g

0xd565,	// (0x0006792c) main_mp3_pane_t1

0xaed3,	// (0x0006529a) main_camera_pane_g8_ParamLimits

0xaed3,	// (0x0006529a) main_camera_pane_g8

0x1be6,	// (0x0005bfad) main_video_pane_g7_ParamLimits

0x1be6,	// (0x0005bfad) main_video_pane_g7

0x40a7,	// (0x0005e46e) main_camera2_pane_t7_ParamLimits

0x40a7,	// (0x0005e46e) main_camera2_pane_t7

0xb239,	// (0x00065600) scroll_pane_cp025_ParamLimits

0xb239,	// (0x00065600) scroll_pane_cp025

0xb24d,	// (0x00065614) scroll_pane_cp026_ParamLimits

0xb24d,	// (0x00065614) scroll_pane_cp026

0xb25c,	// (0x00065623) wml_content_pane_ParamLimits

0x1189,	// (0x0005b550) main_touch_calib_pane

0x42bd,	// (0x0005e684) main_touch_calib_pane_g1

0x42c9,	// (0x0005e690) main_touch_calib_pane_g2

0x42d5,	// (0x0005e69c) main_touch_calib_pane_g3

0x42e1,	// (0x0005e6a8) main_touch_calib_pane_g4

0x0003,

0xf45b,	// (0x00069822) main_touch_calib_pane_g

0x42ed,	// (0x0005e6b4) main_touch_calib_pane_t1

0x4306,	// (0x0005e6cd) main_touch_calib_pane_t2

0x0004,

0xf464,	// (0x0006982b) main_touch_calib_pane_t

0xb9d7,	// (0x00065d9e) mup_progress_pane_cp02

0xba0c,	// (0x00065dd3) navi_pane_g1

0xbac7,	// (0x00065e8e) navi_pane_mp_t3

0x3d61,	// (0x0005e128) main_mp3_pane_ParamLimits

0x3ed2,	// (0x0005e299) navi_pane_ParamLimits

0xd510,	// (0x000678d7) main_mp3_pane_g1_ParamLimits

0x4219,	// (0x0005e5e0) main_mp3_pane_g2_ParamLimits

0x4225,	// (0x0005e5ec) main_mp3_pane_g3_ParamLimits

0x4225,	// (0x0005e5ec) main_mp3_pane_g3

0x4231,	// (0x0005e5f8) main_mp3_pane_g4_ParamLimits

0x4231,	// (0x0005e5f8) main_mp3_pane_g4

0xaec5,	// (0x0006528c) main_mp3_pane_g5_ParamLimits

0xaec5,	// (0x0006528c) main_mp3_pane_g5

0xd540,	// (0x00067907) main_mp3_pane_g6_ParamLimits

0xd540,	// (0x00067907) main_mp3_pane_g6

0xd54d,	// (0x00067914) main_mp3_pane_g7_ParamLimits

0xd54d,	// (0x00067914) main_mp3_pane_g7

0xd559,	// (0x00067920) main_mp3_pane_g8_ParamLimits

0xd559,	// (0x00067920) main_mp3_pane_g8

0xf43d,	// (0x00069804) main_mp3_pane_g_ParamLimits

0x423d,	// (0x0005e604) main_mp3_pane_t2

0x424d,	// (0x0005e614) main_mp3_pane_t3

0xd573,	// (0x0006793a) main_mp3_pane_t4

0xd581,	// (0x00067948) main_mp3_pane_t5

0x0005,

0xf44e,	// (0x00069815) main_mp3_pane_t

0xd58f,	// (0x00067956) mup_progress_pane_cp01

0x0dd8,	// (0x0005b19f) aid_zoom_text_secondary2

0xd357,	// (0x0006771e) list_cale_ev2_pane

0xd35f,	// (0x00067726) scroll_pane_cp023_ParamLimits

0x4361,	// (0x0005e728) field_cale_ev2_pane_ParamLimits

0x4361,	// (0x0005e728) field_cale_ev2_pane

0xa21e,	// (0x000645e5) field_cale_ev2_pane_g1_ParamLimits

0xa21e,	// (0x000645e5) field_cale_ev2_pane_g1

0xa22a,	// (0x000645f1) field_cale_ev2_pane_g2_ParamLimits

0xa22a,	// (0x000645f1) field_cale_ev2_pane_g2

0xa242,	// (0x00064609) field_cale_ev2_pane_g3_ParamLimits

0xa242,	// (0x00064609) field_cale_ev2_pane_g3

0x0003,

0xf46f,	// (0x00069836) field_cale_ev2_pane_g_ParamLimits

0xf46f,	// (0x00069836) field_cale_ev2_pane_g

0xa266,	// (0x0006462d) field_cale_ev2_pane_t1_ParamLimits

0xa266,	// (0x0006462d) field_cale_ev2_pane_t1

0xa27d,	// (0x00064644) field_cale_ev2_pane_t2_ParamLimits

0xa27d,	// (0x00064644) field_cale_ev2_pane_t2

0x0001,

0xf478,	// (0x0006983f) field_cale_ev2_pane_t_ParamLimits

0xf478,	// (0x0006983f) field_cale_ev2_pane_t

0x3659,	// (0x0005da20) main_postcard_pane_g5_ParamLimits

0x3659,	// (0x0005da20) main_postcard_pane_g5

0x3667,	// (0x0005da2e) main_postcard_pane_g6_ParamLimits

0x3667,	// (0x0005da2e) main_postcard_pane_g6

0xaeb7,	// (0x0006527e) camera2_autofocus_pane_cp_ParamLimits

0xaeb7,	// (0x0006527e) camera2_autofocus_pane_cp

0x3d61,	// (0x0005e128) main_mup3_pane

0x43ca,	// (0x0005e791) main_mup3_pane_g1_ParamLimits

0x43ca,	// (0x0005e791) main_mup3_pane_g1

0x43eb,	// (0x0005e7b2) main_mup3_pane_g2_ParamLimits

0x43eb,	// (0x0005e7b2) main_mup3_pane_g2

0x4465,	// (0x0005e82c) main_mup3_pane_g3_ParamLimits

0x4465,	// (0x0005e82c) main_mup3_pane_g3

0x44a8,	// (0x0005e86f) main_mup3_pane_g4_ParamLimits

0x44a8,	// (0x0005e86f) main_mup3_pane_g4

0x44eb,	// (0x0005e8b2) main_mup3_pane_g5_ParamLimits

0x44eb,	// (0x0005e8b2) main_mup3_pane_g5

0x452e,	// (0x0005e8f5) main_mup3_pane_g6_ParamLimits

0x452e,	// (0x0005e8f5) main_mup3_pane_g6

0xaed3,	// (0x0006529a) main_mup3_pane_g7_ParamLimits

0xaed3,	// (0x0006529a) main_mup3_pane_g7

0x0007,

0xf488,	// (0x0006984f) main_mup3_pane_g_ParamLimits

0xf488,	// (0x0006984f) main_mup3_pane_g

0x45a4,	// (0x0005e96b) main_mup3_pane_t1_ParamLimits

0x45a4,	// (0x0005e96b) main_mup3_pane_t1

0x4613,	// (0x0005e9da) main_mup3_pane_t2_ParamLimits

0x4613,	// (0x0005e9da) main_mup3_pane_t2

0x46dc,	// (0x0005eaa3) main_mup3_pane_t4_ParamLimits

0x46dc,	// (0x0005eaa3) main_mup3_pane_t4

0x472a,	// (0x0005eaf1) main_mup3_pane_t5_ParamLimits

0x472a,	// (0x0005eaf1) main_mup3_pane_t5

0x47da,	// (0x0005eba1) main_mup3_pane_t6_ParamLimits

0x47da,	// (0x0005eba1) main_mup3_pane_t6

0x0005,

0xf499,	// (0x00069860) main_mup3_pane_t_ParamLimits

0xf499,	// (0x00069860) main_mup3_pane_t

0x4886,	// (0x0005ec4d) mup3_progress_pane_ParamLimits

0x4886,	// (0x0005ec4d) mup3_progress_pane

0x48fa,	// (0x0005ecc1) popup_mup3_control_window_ParamLimits

0x48fa,	// (0x0005ecc1) popup_mup3_control_window

0xd597,	// (0x0006795e) popup_mup3_text_window

0x4913,	// (0x0005ecda) mup3_progress_pane_t1

0x4932,	// (0x0005ecf9) mup3_progress_pane_t2

0xd59f,	// (0x00067966) mup3_progress_pane_t3

0x0002,

0xf4a6,	// (0x0006986d) mup3_progress_pane_t

0xd5bc,	// (0x00067983) mup_progress_pane_cp03

0xa7a8,	// (0x00064b6f) bg_tb_trans_pane_cp04

0x4951,	// (0x0005ed18) mup3_volume_pane

0x4959,	// (0x0005ed20) popup_mup3_control_window_g1

0x4962,	// (0x0005ed29) mup3_volume_pane_g1

0x496b,	// (0x0005ed32) mup3_volume_pane_g2

0x4974,	// (0x0005ed3b) mup3_volume_pane_g3

0x0002,

0xf4ad,	// (0x00069874) mup3_volume_pane_g

0xa7a8,	// (0x00064b6f) bg_tb_trans_pane_cp03

0xd5cc,	// (0x00067993) popup_mup3_text_window_g1

0xd5d4,	// (0x0006799b) popup_mup3_text_window_t1

0xaf7f,	// (0x00065346) list_calc_item_pane_g1_ParamLimits

0xd051,	// (0x00067418) mup_volume_pane_cp_g1

0x431f,	// (0x0005e6e6) main_touch_calib_pane_t3

0x4335,	// (0x0005e6fc) main_touch_calib_pane_t4

0x434b,	// (0x0005e712) main_touch_calib_pane_t5

0x0f5c,	// (0x0005b323) aid_cell_size_toolbar2

0x0f64,	// (0x0005b32b) aid_popup3_width_pane

0x0dd0,	// (0x0005b197) aid_zoom_text_msg_primary

0x1ae8,	// (0x0005beaf) vorec_t7

0xaf43,	// (0x0006530a) bg_calc_paper_pane_g1_ParamLimits

0xaf4f,	// (0x00065316) bg_calc_paper_pane_g2_ParamLimits

0xaf5b,	// (0x00065322) bg_calc_paper_pane_g3_ParamLimits

0xaf67,	// (0x0006532e) bg_calc_paper_pane_g4_ParamLimits

0xaf73,	// (0x0006533a) bg_calc_paper_pane_g5_ParamLimits

0x141e,	// (0x0005b7e5) bg_calc_paper_pane_g6_ParamLimits

0x142f,	// (0x0005b7f6) bg_calc_paper_pane_g7_ParamLimits

0x1440,	// (0x0005b807) bg_calc_paper_pane_g8_ParamLimits

0xf0ca,	// (0x00069491) bg_calc_paper_pane_g_ParamLimits

0x1451,	// (0x0005b818) calc_bg_paper_pane_g9_ParamLimits

0xaeb7,	// (0x0006527e) image_qvga_pane_ParamLimits

0xaeb7,	// (0x0006527e) image_qvga_pane

0xae4a,	// (0x00065211) bg_popup_sub_pane_cp04_ParamLimits

0xbd4e,	// (0x00066115) popup_mup_playback_window_g1_ParamLimits

0xbd5a,	// (0x00066121) popup_mup_playback_window_t1_ParamLimits

0xbd6f,	// (0x00066136) popup_mup_playback_window_t2_ParamLimits

0x038b,	// (0x0005a752) popup_mup_playback_window_t_ParamLimits

0xaec5,	// (0x0006528c) main_mup2_pane_g3_ParamLimits

0xaec5,	// (0x0006528c) main_mup2_pane_g3

0x1dcd,	// (0x0005c194) popup_toolbar_window_cp04

0xc164,	// (0x0006652b) popup_call2_audio_second_window_g3_ParamLimits

0xc164,	// (0x0006652b) popup_call2_audio_second_window_g3

0xc57c,	// (0x00066943) popup_call2_audio_first_window_g4_ParamLimits

0xc57c,	// (0x00066943) popup_call2_audio_first_window_g4

0xcbb1,	// (0x00066f78) popup_call2_audio_in_window_g4_ParamLimits

0xcbb1,	// (0x00066f78) popup_call2_audio_in_window_g4

0x376b,	// (0x0005db32) aid_area_sk_bg_cut_ParamLimits

0x376b,	// (0x0005db32) aid_area_sk_bg_cut

0xbd84,	// (0x0006614b) aid_area_sk_bg_cut_2_ParamLimits

0xbd84,	// (0x0006614b) aid_area_sk_bg_cut_2

0xa7a8,	// (0x00064b6f) aid_placing_details_win

0xa7a8,	// (0x00064b6f) aid_placing_details_win_2

0xaec5,	// (0x0006528c) camera2_autofocus_pane_g1_ParamLimits

0x1115,	// (0x0005b4dc) popup_fixed_preview_cale_window_ParamLimits

0x1115,	// (0x0005b4dc) popup_fixed_preview_cale_window

0xbb45,	// (0x00065f0c) navi_slider_pane_g3

0xbb4e,	// (0x00065f15) navi_slider_pane_g4

0xbb57,	// (0x00065f1e) navi_slider_pane_g5

0xbb45,	// (0x00065f0c) navi_slider_pane_g6

0x327a,	// (0x0005d641) navi_slider_pane_g7

0xbc85,	// (0x0006604c) mup_scale_pane_g3

0xbc8e,	// (0x00066055) mup_scale_pane_g4

0xbc97,	// (0x0006605e) mup_scale_pane_g5

0x3479,	// (0x0005d840) mup_scale_pane_g6

0x3482,	// (0x0005d849) mup_scale_pane_g7

0xe17e,	// (0x00068545) cams2_slider_pane_g3

0xe17e,	// (0x00068545) cams2_slider_pane_g4

0xe17e,	// (0x00068545) cams2_slider_pane_g5

0xe17e,	// (0x00068545) cams2_slider_pane_g6

0xe17e,	// (0x00068545) cams2_slider_pane_g7

0xb131,	// (0x000654f8) camera2_autofocus_pane_cp_g1

0xcec1,	// (0x00067288) bg_popup_preview_window_pane_cp02_ParamLimits

0xcec1,	// (0x00067288) bg_popup_preview_window_pane_cp02

0xd5e2,	// (0x000679a9) list_fp_cale_pane_ParamLimits

0xd5e2,	// (0x000679a9) list_fp_cale_pane

0xd5ee,	// (0x000679b5) popup_fixed_preview_cale_window_t1_ParamLimits

0xd5ee,	// (0x000679b5) popup_fixed_preview_cale_window_t1

0x497d,	// (0x0005ed44) popup_fixed_preview_cale_window_t2_ParamLimits

0x497d,	// (0x0005ed44) popup_fixed_preview_cale_window_t2

0x4992,	// (0x0005ed59) popup_fixed_preview_cale_window_t3_ParamLimits

0x4992,	// (0x0005ed59) popup_fixed_preview_cale_window_t3

0x0002,

0xf4b4,	// (0x0006987b) popup_fixed_preview_cale_window_t_ParamLimits

0xf4b4,	// (0x0006987b) popup_fixed_preview_cale_window_t

0x49a7,	// (0x0005ed6e) list_single_fp_cale_pane_ParamLimits

0x49a7,	// (0x0005ed6e) list_single_fp_cale_pane

0xd60c,	// (0x000679d3) list_single_fp_cale_pane_g1_ParamLimits

0xd60c,	// (0x000679d3) list_single_fp_cale_pane_g1

0xd618,	// (0x000679df) list_single_fp_cale_pane_g2_ParamLimits

0xd618,	// (0x000679df) list_single_fp_cale_pane_g2

0x0002,

0x0666,	// (0x0005aa2d) list_single_fp_cale_pane_g_ParamLimits

0x0666,	// (0x0005aa2d) list_single_fp_cale_pane_g

0xd631,	// (0x000679f8) list_single_fp_cale_pane_t1_ParamLimits

0xd631,	// (0x000679f8) list_single_fp_cale_pane_t1

0xd643,	// (0x00067a0a) list_single_fp_cale_pane_t2_ParamLimits

0xd643,	// (0x00067a0a) list_single_fp_cale_pane_t2

0x0001,

0x066d,	// (0x0005aa34) list_single_fp_cale_pane_t_ParamLimits

0x066d,	// (0x0005aa34) list_single_fp_cale_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0x1189,	// (0x0005b550) main_dialer_pane

0xa7a8,	// (0x00064b6f) aid_cell_size_keypad

0xa7a8,	// (0x00064b6f) dialer_ne_pane

0xa7a8,	// (0x00064b6f) grid_dialer_command_1_pane

0xa7a8,	// (0x00064b6f) grid_dialer_command_2_pane

0xa7a8,	// (0x00064b6f) grid_dialer_keypad_pane

0xca9f,	// (0x00066e66) bg_popup_call_pane_cp06_ParamLimits

0xca9f,	// (0x00066e66) bg_popup_call_pane_cp06

0xca9f,	// (0x00066e66) dialer_ne_clear_pane_ParamLimits

0xca9f,	// (0x00066e66) dialer_ne_clear_pane

0xb131,	// (0x000654f8) dialer_ne_pane_g1

0xb8bf,	// (0x00065c86) dialer_ne_pane_t1_ParamLimits

0xb8bf,	// (0x00065c86) dialer_ne_pane_t1

0xd834,	// (0x00067bfb) dialer_ne_pane_t2_ParamLimits

0xd834,	// (0x00067bfb) dialer_ne_pane_t2

0x49ba,	// (0x0005ed81) dialer_ne_pane_t3_ParamLimits

0x49ba,	// (0x0005ed81) dialer_ne_pane_t3

0x0002,

0xf4bb,	// (0x00069882) dialer_ne_pane_t_ParamLimits

0xf4bb,	// (0x00069882) dialer_ne_pane_t

0x49ba,	// (0x0005ed81) dialer_ne_pane_t3_copy1_ParamLimits

0x49ba,	// (0x0005ed81) dialer_ne_pane_t3_copy1

0xd676,	// (0x00067a3d) cell_dialer_keypad_pane_ParamLimits

0xd676,	// (0x00067a3d) cell_dialer_keypad_pane

0xa7e5,	// (0x00064bac) cell_dialer_command_1_pane_ParamLimits

0xa7e5,	// (0x00064bac) cell_dialer_command_1_pane

0xd68d,	// (0x00067a54) cell_dialer_command_2_pane_ParamLimits

0xd68d,	// (0x00067a54) cell_dialer_command_2_pane

0xa7e5,	// (0x00064bac) bg_button_pane_cp02_ParamLimits

0xa7e5,	// (0x00064bac) bg_button_pane_cp02

0xaec5,	// (0x0006528c) cell_dialer_keypad_pane_g1_ParamLimits

0xaec5,	// (0x0006528c) cell_dialer_keypad_pane_g1

0xa7e5,	// (0x00064bac) bg_button_pane_cp03_ParamLimits

0xa7e5,	// (0x00064bac) bg_button_pane_cp03

0xaec5,	// (0x0006528c) cell_dialer_command_1_pane_g1_ParamLimits

0xaec5,	// (0x0006528c) cell_dialer_command_1_pane_g1

0xa7a8,	// (0x00064b6f) bg_button_pane_cp04

0xb131,	// (0x000654f8) cell_dialer_command_2_pane_g1

0xa7a8,	// (0x00064b6f) bg_button_pane_cp06

0xb131,	// (0x000654f8) dialer_ne_clear_pane_g1

0xba18,	// (0x00065ddf) navi_pane_g2

0xba46,	// (0x00065e0d) navi_pane_g3

0x0002,

0x028e,	// (0x0005a655) navi_pane_g

0xbad5,	// (0x00065e9c) navi_pane_mv_g2

0xbafc,	// (0x00065ec3) navi_pane_mv_g5

0x3245,	// (0x0005d60c) navi_pane_mv_t1

0xaf37,	// (0x000652fe) main_clock2_pane

0xaeb7,	// (0x0006527e) main_clock2_list_pane_ParamLimits

0xaeb7,	// (0x0006527e) main_clock2_list_pane

0x4a30,	// (0x0005edf7) main_clock2_pane_t1_ParamLimits

0x4a30,	// (0x0005edf7) main_clock2_pane_t1

0x4a5e,	// (0x0005ee25) main_clock2_pane_t2_ParamLimits

0x4a5e,	// (0x0005ee25) main_clock2_pane_t2

0x0004,

0xf4c2,	// (0x00069889) main_clock2_pane_t_ParamLimits

0xf4c2,	// (0x00069889) main_clock2_pane_t

0x4ac3,	// (0x0005ee8a) popup_clock_analogue_window_cp03_ParamLimits

0x4ac3,	// (0x0005ee8a) popup_clock_analogue_window_cp03

0x4ae1,	// (0x0005eea8) popup_clock_digital_window_cp02_ParamLimits

0x4ae1,	// (0x0005eea8) popup_clock_digital_window_cp02

0x4b56,	// (0x0005ef1d) main_clock2_list_single_pane_ParamLimits

0x4b56,	// (0x0005ef1d) main_clock2_list_single_pane

0xb0fb,	// (0x000654c2) list_highlight_pane_cp05

0xd6d0,	// (0x00067a97) main_clock2_list_single_pane_t1

0x1dcd,	// (0x0005c194) popup_toolbar_window_cp04_ParamLimits

0xaed3,	// (0x0006529a) camera2_autofocus_pane_g2_ParamLimits

0xaed3,	// (0x0006529a) camera2_autofocus_pane_g2

0xaed3,	// (0x0006529a) camera2_autofocus_pane_g3_ParamLimits

0xaed3,	// (0x0006529a) camera2_autofocus_pane_g3

0xaed3,	// (0x0006529a) camera2_autofocus_pane_g4_ParamLimits

0xaed3,	// (0x0006529a) camera2_autofocus_pane_g4

0xaed3,	// (0x0006529a) camera2_autofocus_pane_g5_ParamLimits

0xaed3,	// (0x0006529a) camera2_autofocus_pane_g5

0x0004,

0x05c2,	// (0x0005a989) camera2_autofocus_pane_g_ParamLimits

0x05c2,	// (0x0005a989) camera2_autofocus_pane_g

0x438b,	// (0x0005e752) camera2_autofocus_pane_cp_g2

0x4393,	// (0x0005e75a) camera2_autofocus_pane_cp_g3

0x439b,	// (0x0005e762) camera2_autofocus_pane_cp_g4

0x43a3,	// (0x0005e76a) camera2_autofocus_pane_cp_g5

0x0004,

0xf47d,	// (0x00069844) camera2_autofocus_pane_cp_g

0xa7a8,	// (0x00064b6f) popup_dialer_spcha_window

0xa7a8,	// (0x00064b6f) bg_popup_sub_pane_cp07

0xa7a8,	// (0x00064b6f) list_spcha_pane

0xd6de,	// (0x00067aa5) list_single_spcha_pane_ParamLimits

0xd6de,	// (0x00067aa5) list_single_spcha_pane

0xa7a8,	// (0x00064b6f) list_highlight_pane_cp06

0xb658,	// (0x00065a1f) list_single_spcha_pane_t1

0xc94d,	// (0x00066d14) popup_call2_audio_out_window_g4_ParamLimits

0xc94d,	// (0x00066d14) popup_call2_audio_out_window_g4

0x1189,	// (0x0005b550) main_imed2_pane

0x3dfb,	// (0x0005e1c2) popup_imed_adjust2_window

0x3e0e,	// (0x0005e1d5) popup_imed_trans_window_ParamLimits

0x3e0e,	// (0x0005e1d5) popup_imed_trans_window

0xd126,	// (0x000674ed) popup_blid_sat_info2_window_t1

0xd134,	// (0x000674fb) popup_blid_sat_info2_window_t2

0x000a,

0x0557,	// (0x0005a91e) popup_blid_sat_info2_window_t

0x4c0b,	// (0x0005efd2) aid_size_cell_colour_35

0x4c25,	// (0x0005efec) aid_size_cell_colour_112

0x4c3c,	// (0x0005f003) aid_size_cell_effect

0xa7e5,	// (0x00064bac) bg_tb_trans_pane_cp02

0xb696,	// (0x00065a5d) heading_imed_pane

0x4c56,	// (0x0005f01d) listscroll_imed_pane

0xd6f0,	// (0x00067ab7) heading_imed_pane_g1

0xd6f8,	// (0x00067abf) heading_imed_pane_t1

0xd706,	// (0x00067acd) grid_imed_colour_35_pane_ParamLimits

0xd706,	// (0x00067acd) grid_imed_colour_35_pane

0x4c62,	// (0x0005f029) grid_imed_effect_pane

0xd71e,	// (0x00067ae5) list_imed_aspect_pane

0x4c72,	// (0x0005f039) scroll_pane_cp027_ParamLimits

0x4c72,	// (0x0005f039) scroll_pane_cp027

0x4c7e,	// (0x0005f045) cell_imed_effect_pane_ParamLimits

0x4c7e,	// (0x0005f045) cell_imed_effect_pane

0xd726,	// (0x00067aed) cell_imed_colour_pane_ParamLimits

0xd726,	// (0x00067aed) cell_imed_colour_pane

0xd768,	// (0x00067b2f) cell_imed_colour_pane_g1_ParamLimits

0xd768,	// (0x00067b2f) cell_imed_colour_pane_g1

0xd779,	// (0x00067b40) hgihlgiht_grid_pane_cp016_ParamLimits

0xd779,	// (0x00067b40) hgihlgiht_grid_pane_cp016

0x4c96,	// (0x0005f05d) cell_imed_effect_pane_g1

0x4c9e,	// (0x0005f065) grid_highlight_pane_cp017

0xd78a,	// (0x00067b51) list_imed_single_pane_ParamLimits

0xd78a,	// (0x00067b51) list_imed_single_pane

0xa7a8,	// (0x00064b6f) list_highlight_pane_cp07

0xd79f,	// (0x00067b66) list_imed_aspect_pane_comp1_t1

0xbc6e,	// (0x00066035) bg_tb_trans_pane_cp05

0xd7c1,	// (0x00067b88) popup_imed_adjust2_window_g1

0xd7e8,	// (0x00067baf) popup_imed_adjust2_window_t1

0xd800,	// (0x00067bc7) slider_imed_adjust_pane

0xd814,	// (0x00067bdb) slider_imed_adjust_pane_g1

0xd824,	// (0x00067beb) slider_imed_adjust_pane_g2

0xd851,	// (0x00067c18) slider_imed_adjust_pane_g3

0xd862,	// (0x00067c29) slider_imed_adjust_pane_g4

0x0003,

0xf4d8,	// (0x0006989f) slider_imed_adjust_pane_g

0x4ca7,	// (0x0005f06e) aid_size_cell_clipart2

0x4cb3,	// (0x0005f07a) grid_imed_clipart_pane

0xd873,	// (0x00067c3a) scroll_pane_cp031

0x4cbd,	// (0x0005f084) cell_imed_clipart_pane_ParamLimits

0x4cbd,	// (0x0005f084) cell_imed_clipart_pane

0x4ce0,	// (0x0005f0a7) cell_imed_clipart_pane_g1

0xa7a8,	// (0x00064b6f) grid_highlight_pane_cp014

0x4a12,	// (0x0005edd9) main_clock2_pane_g1_ParamLimits

0x4a12,	// (0x0005edd9) main_clock2_pane_g1

0x4afd,	// (0x0005eec4) aid_call2_pane_cp10

0x4b0f,	// (0x0005eed6) aid_call_pane_cp10

0xb977,	// (0x00065d3e) popup_clock_analogue_window_cp10_g1

0xb977,	// (0x00065d3e) popup_clock_analogue_window_cp10_g2

0x4b21,	// (0x0005eee8) popup_clock_analogue_window_cp10_g3

0x4b21,	// (0x0005eee8) popup_clock_analogue_window_cp10_g4

0xb977,	// (0x00065d3e) popup_clock_analogue_window_cp10_g5

0x0004,

0xf4cd,	// (0x00069894) popup_clock_analogue_window_cp10_g

0x4b37,	// (0x0005eefe) popup_clock_analogue_window_cp10_t1

0x4b68,	// (0x0005ef2f) clock_digital_number_pane_cp10_ParamLimits

0x4b68,	// (0x0005ef2f) clock_digital_number_pane_cp10

0x4b82,	// (0x0005ef49) clock_digital_number_pane_cp11_ParamLimits

0x4b82,	// (0x0005ef49) clock_digital_number_pane_cp11

0x4b9c,	// (0x0005ef63) clock_digital_number_pane_cp12_ParamLimits

0x4b9c,	// (0x0005ef63) clock_digital_number_pane_cp12

0x4bb6,	// (0x0005ef7d) clock_digital_number_pane_cp13_ParamLimits

0x4bb6,	// (0x0005ef7d) clock_digital_number_pane_cp13

0x4bd0,	// (0x0005ef97) clock_digital_separator_pane_cp10_ParamLimits

0x4bd0,	// (0x0005ef97) clock_digital_separator_pane_cp10

0x4bea,	// (0x0005efb1) popup_clock_digital_window_cp02_t1_ParamLimits

0x4bea,	// (0x0005efb1) popup_clock_digital_window_cp02_t1

0xae42,	// (0x00065209) clock_digital_number_pane_cp10_g1

0xae42,	// (0x00065209) clock_digital_number_pane_cp10_g2

0x0001,

0x06a4,	// (0x0005aa6b) clock_digital_number_pane_cp10_g

0xae42,	// (0x00065209) clock_digital_separator_pane_cp10_g1

0xae42,	// (0x00065209) clock_digital_separator_pane_g2_cp10

0xbb04,	// (0x00065ecb) navi_pane_vded_g4

0xbb0d,	// (0x00065ed4) navi_pane_vded_g5

0xbb16,	// (0x00065edd) navi_pane_vded_t1

0x1189,	// (0x0005b550) main_vded_pane

0x4ce9,	// (0x0005f0b0) main_vded_pane_g1

0x4cf5,	// (0x0005f0bc) main_vded_pane_g2

0x4cff,	// (0x0005f0c6) main_vded_pane_g3

0x0002,

0xf4e1,	// (0x000698a8) main_vded_pane_g

0x4d09,	// (0x0005f0d0) main_vded_pane_t1

0x4d17,	// (0x0005f0de) main_vded_pane_t2

0x0001,

0xf4e8,	// (0x000698af) main_vded_pane_t

0x4d25,	// (0x0005f0ec) vded_slider_pane

0x4d2f,	// (0x0005f0f6) vded_video_pane

0xd87b,	// (0x00067c42) vded_video_pane_g1

0x4d39,	// (0x0005f100) vded_video_pane_g2

0xb131,	// (0x000654f8) vded_video_pane_g3

0x0002,

0xf4ed,	// (0x000698b4) vded_video_pane_g

0xd885,	// (0x00067c4c) vded_slider_pane_g1

0xd051,	// (0x00067418) vded_slider_pane_g2

0xd88e,	// (0x00067c55) vded_slider_pane_g3

0xd897,	// (0x00067c5e) vded_slider_pane_g4

0xd8a0,	// (0x00067c67) vded_slider_pane_g5

0x0004,

0xf4f4,	// (0x000698bb) vded_slider_pane_g

0x48ec,	// (0x0005ecb3) mup3_rocker_pane_ParamLimits

0x48ec,	// (0x0005ecb3) mup3_rocker_pane

0x4d42,	// (0x0005f109) mup3_control_keys_pane_g1

0x4d4a,	// (0x0005f111) mup3_control_keys_pane_g2

0x4d52,	// (0x0005f119) mup3_control_keys_pane_g3

0x4d5a,	// (0x0005f121) mup3_control_keys_pane_g4

0x0003,

0xf4ff,	// (0x000698c6) mup3_control_keys_pane_g

0x113d,	// (0x0005b504) popup_toolbar2_fixed_window_cp01_ParamLimits

0x113d,	// (0x0005b504) popup_toolbar2_fixed_window_cp01

0x4906,	// (0x0005eccd) popup_toolbar2_fixed_window_cp02_ParamLimits

0x4906,	// (0x0005eccd) popup_toolbar2_fixed_window_cp02

0xc2d6,	// (0x0006669d) popup_call2_audio_second_window_t4_ParamLimits

0xc2d6,	// (0x0006669d) popup_call2_audio_second_window_t4

0xc812,	// (0x00066bd9) popup_call2_audio_first_window_t6_ParamLimits

0xc812,	// (0x00066bd9) popup_call2_audio_first_window_t6

0xca50,	// (0x00066e17) popup_call2_audio_out_window_t6_ParamLimits

0xca50,	// (0x00066e17) popup_call2_audio_out_window_t6

0x1189,	// (0x0005b550) main_vitu_pane

0xaeb7,	// (0x0006527e) aid_size_cell_itu_ParamLimits

0xaeb7,	// (0x0006527e) aid_size_cell_itu

0xaeb7,	// (0x0006527e) bg_popup_window_pane_cp08_ParamLimits

0xaeb7,	// (0x0006527e) bg_popup_window_pane_cp08

0xaeb7,	// (0x0006527e) field_vitu_entry_pane_ParamLimits

0xaeb7,	// (0x0006527e) field_vitu_entry_pane

0xaeb7,	// (0x0006527e) grid_vitu_function_pane_ParamLimits

0xaeb7,	// (0x0006527e) grid_vitu_function_pane

0xaeb7,	// (0x0006527e) grid_vitu_itu_pane_ParamLimits

0xaeb7,	// (0x0006527e) grid_vitu_itu_pane

0xaeb7,	// (0x0006527e) cell_vitu_itu_pane_ParamLimits

0xaeb7,	// (0x0006527e) cell_vitu_itu_pane

0xaeb7,	// (0x0006527e) cell_vitu_function_pane_ParamLimits

0xaeb7,	// (0x0006527e) cell_vitu_function_pane

0xa7e5,	// (0x00064bac) bg_popup_sub_pane_cp08_ParamLimits

0xa7e5,	// (0x00064bac) bg_popup_sub_pane_cp08

0xb103,	// (0x000654ca) field_vitu_entry_pane_t1_ParamLimits

0xb103,	// (0x000654ca) field_vitu_entry_pane_t1

0xd834,	// (0x00067bfb) field_vitu_entry_pane_t2_ParamLimits

0xd834,	// (0x00067bfb) field_vitu_entry_pane_t2

0x0001,

0xf508,	// (0x000698cf) field_vitu_entry_pane_t_ParamLimits

0xf508,	// (0x000698cf) field_vitu_entry_pane_t

0xca9f,	// (0x00066e66) bg_button_pane_cp05_ParamLimits

0xca9f,	// (0x00066e66) bg_button_pane_cp05

0xd8a9,	// (0x00067c70) cell_vitu_itu_pane_g1

0xbbf3,	// (0x00065fba) cell_vitu_itu_pane_t1_ParamLimits

0xbbf3,	// (0x00065fba) cell_vitu_itu_pane_t1

0xbbf3,	// (0x00065fba) cell_vitu_itu_pane_t2_ParamLimits

0xbbf3,	// (0x00065fba) cell_vitu_itu_pane_t2

0x0002,

0xf50d,	// (0x000698d4) cell_vitu_itu_pane_t_ParamLimits

0xf50d,	// (0x000698d4) cell_vitu_itu_pane_t

0xa7a8,	// (0x00064b6f) bg_button_pane_cp07

0xb131,	// (0x000654f8) cell_vitu_function_pane_g1

0x12c2,	// (0x0005b689) main_calc_pane_g1

0x0f98,	// (0x0005b35f) aid_visual_content_pane

0x1189,	// (0x0005b550) main_vradio_pane

0xaed3,	// (0x0006529a) main_vradio_pane_g1_ParamLimits

0xaed3,	// (0x0006529a) main_vradio_pane_g1

0xaed3,	// (0x0006529a) main_vradio_pane_g2_ParamLimits

0xaed3,	// (0x0006529a) main_vradio_pane_g2

0x0001,

0xf514,	// (0x000698db) main_vradio_pane_g_ParamLimits

0xf514,	// (0x000698db) main_vradio_pane_g

0xb8bf,	// (0x00065c86) main_vradio_pane_t1_ParamLimits

0xb8bf,	// (0x00065c86) main_vradio_pane_t1

0xb8bf,	// (0x00065c86) main_vradio_pane_t2_ParamLimits

0xb8bf,	// (0x00065c86) main_vradio_pane_t2

0xb8bf,	// (0x00065c86) main_vradio_pane_t3_ParamLimits

0xb8bf,	// (0x00065c86) main_vradio_pane_t3

0x0002,

0xf519,	// (0x000698e0) main_vradio_pane_t_ParamLimits

0xf519,	// (0x000698e0) main_vradio_pane_t

0xaeb7,	// (0x0006527e) vradio_rocker_control_pane_ParamLimits

0xaeb7,	// (0x0006527e) vradio_rocker_control_pane

0xaeb7,	// (0x0006527e) vradio_station_info_pane_ParamLimits

0xaeb7,	// (0x0006527e) vradio_station_info_pane

0xa7e5,	// (0x00064bac) vradio_frequency_info_pane_ParamLimits

0xa7e5,	// (0x00064bac) vradio_frequency_info_pane

0xb131,	// (0x000654f8) vradio_station_info_pane_g1

0xbbf3,	// (0x00065fba) vradio_station_info_pane_t1_ParamLimits

0xbbf3,	// (0x00065fba) vradio_station_info_pane_t1

0xb8bf,	// (0x00065c86) vradio_station_info_pane_t2_ParamLimits

0xb8bf,	// (0x00065c86) vradio_station_info_pane_t2

0x0001,

0xf520,	// (0x000698e7) vradio_station_info_pane_t_ParamLimits

0xf520,	// (0x000698e7) vradio_station_info_pane_t

0xa7a8,	// (0x00064b6f) vradio_tuning_pane

0x4d6a,	// (0x0005f131) vradio_rocker_control_pane_g1

0xd8c5,	// (0x00067c8c) vradio_rocker_control_pane_g2

0x4d72,	// (0x0005f139) vradio_rocker_control_pane_g3

0x4d7a,	// (0x0005f141) vradio_rocker_control_pane_g4

0x4d82,	// (0x0005f149) vradio_rocker_control_pane_g5

0x0004,

0xf525,	// (0x000698ec) vradio_rocker_control_pane_g

0xb131,	// (0x000654f8) vradio_frequency_info_pane_g1

0xb103,	// (0x000654ca) vradio_frequency_info_pane_t1_ParamLimits

0xb103,	// (0x000654ca) vradio_frequency_info_pane_t1

0x4d8a,	// (0x0005f151) vradio_tuning_pane_g1

0x4d97,	// (0x0005f15e) vradio_tuning_pane_t1

0x0fe1,	// (0x0005b3a8) area_side_right_pane_ParamLimits

0x0fe1,	// (0x0005b3a8) area_side_right_pane

0xce88,	// (0x0006724f) status_small_pane_g1

0xce90,	// (0x00067257) status_small_pane_g2

0xce99,	// (0x00067260) status_small_pane_g3

0xcea2,	// (0x00067269) status_small_pane_g4

0x0003,

0x04b9,	// (0x0005a880) status_small_pane_g

0xceab,	// (0x00067272) status_small_pane_t1

0x1189,	// (0x0005b550) main_video3_pane

0xd8cd,	// (0x00067c94) cams_zoom_vslider_pane

0xd8d5,	// (0x00067c9c) image3_wide_pane_ParamLimits

0xd8d5,	// (0x00067c9c) image3_wide_pane

0xd8ef,	// (0x00067cb6) image3_wide_small_pane

0xd8fb,	// (0x00067cc2) main_video3_pane_g1_ParamLimits

0xd8fb,	// (0x00067cc2) main_video3_pane_g1

0xd917,	// (0x00067cde) main_video3_pane_g2_ParamLimits

0xd917,	// (0x00067cde) main_video3_pane_g2

0x0001,

0x06f8,	// (0x0005aabf) main_video3_pane_g_ParamLimits

0x06f8,	// (0x0005aabf) main_video3_pane_g

0xd933,	// (0x00067cfa) main_video3_pane_t1_ParamLimits

0xd933,	// (0x00067cfa) main_video3_pane_t1

0xd95e,	// (0x00067d25) main_video3_pane_t2_ParamLimits

0xd95e,	// (0x00067d25) main_video3_pane_t2

0xd989,	// (0x00067d50) main_video3_pane_t3_ParamLimits

0xd989,	// (0x00067d50) main_video3_pane_t3

0x0002,

0x06fd,	// (0x0005aac4) main_video3_pane_t_ParamLimits

0x06fd,	// (0x0005aac4) main_video3_pane_t

0xd9b6,	// (0x00067d7d) cams_zoom_vslider_pane_g1

0xd9bf,	// (0x00067d86) cams_zoom_vslider_pane_g2

0x0001,

0x0704,	// (0x0005aacb) cams_zoom_vslider_pane_g

0xd9c7,	// (0x00067d8e) small_slider_vertical_pane

0xb131,	// (0x000654f8) small_slider_vertical_pane_g1

0xb131,	// (0x000654f8) small_slider_vertical_pane_g2

0xd9cf,	// (0x00067d96) small_slider_vertical_pane_g3

0x0002,

0x0709,	// (0x0005aad0) small_slider_vertical_pane_g

0x1189,	// (0x0005b550) main_hwr_training_pane

0xd9d8,	// (0x00067d9f) hwr_training_instruct_pane_ParamLimits

0xd9d8,	// (0x00067d9f) hwr_training_instruct_pane

0x4da6,	// (0x0005f16d) hwr_training_navi_pane_ParamLimits

0x4da6,	// (0x0005f16d) hwr_training_navi_pane

0x4dc0,	// (0x0005f187) hwr_training_write_pane_ParamLimits

0x4dc0,	// (0x0005f187) hwr_training_write_pane

0xa7a8,	// (0x00064b6f) bg_frame_shadow_pane

0xda0f,	// (0x00067dd6) hwr_training_write_pane_g1

0xda17,	// (0x00067dde) hwr_training_write_pane_g2

0xda1f,	// (0x00067de6) hwr_training_write_pane_g3

0xda27,	// (0x00067dee) hwr_training_write_pane_g4

0xda2f,	// (0x00067df6) hwr_training_write_pane_g5

0xda37,	// (0x00067dfe) hwr_training_write_pane_g6

0xda3f,	// (0x00067e06) hwr_training_write_pane_g7

0x0006,

0x0710,	// (0x0005aad7) hwr_training_write_pane_g

0x4df8,	// (0x0005f1bf) hwr_training_navi_pane_g1_ParamLimits

0x4df8,	// (0x0005f1bf) hwr_training_navi_pane_g1

0x4e0a,	// (0x0005f1d1) hwr_training_navi_pane_g2_ParamLimits

0x4e0a,	// (0x0005f1d1) hwr_training_navi_pane_g2

0x4e1c,	// (0x0005f1e3) hwr_training_navi_pane_g3_ParamLimits

0x4e1c,	// (0x0005f1e3) hwr_training_navi_pane_g3

0x4e2c,	// (0x0005f1f3) hwr_training_navi_pane_g4_ParamLimits

0x4e2c,	// (0x0005f1f3) hwr_training_navi_pane_g4

0x0004,

0xf530,	// (0x000698f7) hwr_training_navi_pane_g_ParamLimits

0xf530,	// (0x000698f7) hwr_training_navi_pane_g

0x4e46,	// (0x0005f20d) hwr_training_navi_pane_t1

0x4e54,	// (0x0005f21b) list_single_hwr_training_instruct_pane_ParamLimits

0x4e54,	// (0x0005f21b) list_single_hwr_training_instruct_pane

0xda47,	// (0x00067e0e) list_single_hwr_training_instruct_pane_t1

0xd227,	// (0x000675ee) bg_frame_shadow_pane_g1

0xda56,	// (0x00067e1d) bg_frame_shadow_pane_g2

0xda5e,	// (0x00067e25) bg_frame_shadow_pane_g3

0xda66,	// (0x00067e2d) bg_frame_shadow_pane_g4

0xda6e,	// (0x00067e35) bg_frame_shadow_pane_g5

0xda76,	// (0x00067e3d) bg_frame_shadow_pane_g6

0xda7e,	// (0x00067e45) bg_frame_shadow_pane_g7

0xafe6,	// (0x000653ad) bg_frame_shadow_pane_g8

0x0007,

0x072a,	// (0x0005aaf1) bg_frame_shadow_pane_g

0x1189,	// (0x0005b550) main_video_tele_dialer_pane

0x4e7d,	// (0x0005f244) aid_size_cell_video_keypad_ParamLimits

0x4e7d,	// (0x0005f244) aid_size_cell_video_keypad

0x4e8d,	// (0x0005f254) grid_video_dialer_keypad_pane_ParamLimits

0x4e8d,	// (0x0005f254) grid_video_dialer_keypad_pane

0x4ec1,	// (0x0005f288) video_down_pane_cp_ParamLimits

0x4ec1,	// (0x0005f288) video_down_pane_cp

0x4eeb,	// (0x0005f2b2) cell_video_dialer_keypad_pane_ParamLimits

0x4eeb,	// (0x0005f2b2) cell_video_dialer_keypad_pane

0xda86,	// (0x00067e4d) bg_button_pane_cp08_ParamLimits

0xda86,	// (0x00067e4d) bg_button_pane_cp08

0x4f00,	// (0x0005f2c7) cell_video_dialer_keypad_pane_g1_ParamLimits

0x4f00,	// (0x0005f2c7) cell_video_dialer_keypad_pane_g1

0x48e0,	// (0x0005eca7) mup3_rocker2_pane_ParamLimits

0x48e0,	// (0x0005eca7) mup3_rocker2_pane

0xb131,	// (0x000654f8) mup3_rocker2_pane_g1

0x3d6f,	// (0x0005e136) main_dialer2_pane

0x1189,	// (0x0005b550) main_mp4_pane

0x4f58,	// (0x0005f31f) main_mp4_pane_g1_ParamLimits

0x4f58,	// (0x0005f31f) main_mp4_pane_g1

0x4f66,	// (0x0005f32d) main_mp4_pane_g2_ParamLimits

0x4f66,	// (0x0005f32d) main_mp4_pane_g2

0x4f74,	// (0x0005f33b) main_mp4_pane_g3_ParamLimits

0x4f74,	// (0x0005f33b) main_mp4_pane_g3

0x4fb9,	// (0x0005f380) main_mp4_pane_g4_ParamLimits

0x4fb9,	// (0x0005f380) main_mp4_pane_g4

0x4fe7,	// (0x0005f3ae) main_mp4_pane_g5_ParamLimits

0x4fe7,	// (0x0005f3ae) main_mp4_pane_g5

0x0007,

0xf54a,	// (0x00069911) main_mp4_pane_g_ParamLimits

0xf54a,	// (0x00069911) main_mp4_pane_g

0x505b,	// (0x0005f422) main_mp4_pane_t1_ParamLimits

0x505b,	// (0x0005f422) main_mp4_pane_t1

0x50b7,	// (0x0005f47e) main_mp4_pane_t2_ParamLimits

0x50b7,	// (0x0005f47e) main_mp4_pane_t2

0xda92,	// (0x00067e59) main_mp4_pane_t3_ParamLimits

0xda92,	// (0x00067e59) main_mp4_pane_t3

0x5109,	// (0x0005f4d0) main_mp4_pane_t4_ParamLimits

0x5109,	// (0x0005f4d0) main_mp4_pane_t4

0x0003,

0xf55b,	// (0x00069922) main_mp4_pane_t_ParamLimits

0xf55b,	// (0x00069922) main_mp4_pane_t

0x514d,	// (0x0005f514) mp4_progress_pane_ParamLimits

0x514d,	// (0x0005f514) mp4_progress_pane

0x5197,	// (0x0005f55e) mp4_rocker_pane_ParamLimits

0x5197,	// (0x0005f55e) mp4_rocker_pane

0xdac0,	// (0x00067e87) mp4_progress_pane_t1

0xdad9,	// (0x00067ea0) mp4_progress_pane_t2

0x0001,

0x0764,	// (0x0005ab2b) mp4_progress_pane_t

0xdaf2,	// (0x00067eb9) mup_progress_pane_cp04

0xe17e,	// (0x00068545) mp4_rocker_pane_g1

0x51b7,	// (0x0005f57e) aid_cell_size_keypad2_ParamLimits

0x51b7,	// (0x0005f57e) aid_cell_size_keypad2

0x51c7,	// (0x0005f58e) dialer2_ne_pane_ParamLimits

0x51c7,	// (0x0005f58e) dialer2_ne_pane

0x51d5,	// (0x0005f59c) grid_dialer2_keypad_pane_ParamLimits

0x51d5,	// (0x0005f59c) grid_dialer2_keypad_pane

0xd3e8,	// (0x000677af) bg_popup_call_pane_cp07_ParamLimits

0xd3e8,	// (0x000677af) bg_popup_call_pane_cp07

0x51e5,	// (0x0005f5ac) dialer2_ne_pane_t1_ParamLimits

0x51e5,	// (0x0005f5ac) dialer2_ne_pane_t1

0x520a,	// (0x0005f5d1) cell_dialer2_keypad_pane_ParamLimits

0x520a,	// (0x0005f5d1) cell_dialer2_keypad_pane

0xdb17,	// (0x00067ede) bg_button_pane_pane_cp04_ParamLimits

0xdb17,	// (0x00067ede) bg_button_pane_pane_cp04

0x521f,	// (0x0005f5e6) cell_dialer2_keypad_pane_g1_ParamLimits

0x521f,	// (0x0005f5e6) cell_dialer2_keypad_pane_g1

0x1c8f,	// (0x0005c056) aid_placing_vt_set_content_ParamLimits

0x1c8f,	// (0x0005c056) aid_placing_vt_set_content

0x1cbb,	// (0x0005c082) aid_placing_vt_set_title_ParamLimits

0x1cbb,	// (0x0005c082) aid_placing_vt_set_title

0x1189,	// (0x0005b550) main_image3_pane

0x52b9,	// (0x0005f680) area_side_right_pane_cp01_ParamLimits

0x52b9,	// (0x0005f680) area_side_right_pane_cp01

0x52e6,	// (0x0005f6ad) main_image3_pane_g1_ParamLimits

0x52e6,	// (0x0005f6ad) main_image3_pane_g1

0x52f4,	// (0x0005f6bb) main_image3_pane_g2_ParamLimits

0x52f4,	// (0x0005f6bb) main_image3_pane_g2

0x530d,	// (0x0005f6d4) main_image3_pane_g3_ParamLimits

0x530d,	// (0x0005f6d4) main_image3_pane_g3

0x5326,	// (0x0005f6ed) main_image3_pane_g4_ParamLimits

0x5326,	// (0x0005f6ed) main_image3_pane_g4

0x0003,

0xf56e,	// (0x00069935) main_image3_pane_g_ParamLimits

0xf56e,	// (0x00069935) main_image3_pane_g

0x533f,	// (0x0005f706) main_image3_pane_t1_ParamLimits

0x533f,	// (0x0005f706) main_image3_pane_t1

0x5364,	// (0x0005f72b) main_image3_pane_t2_ParamLimits

0x5364,	// (0x0005f72b) main_image3_pane_t2

0x5383,	// (0x0005f74a) main_image3_pane_t3_ParamLimits

0x5383,	// (0x0005f74a) main_image3_pane_t3

0x0003,

0xf577,	// (0x0006993e) main_image3_pane_t_ParamLimits

0xf577,	// (0x0006993e) main_image3_pane_t

0xaeb7,	// (0x0006527e) grid_sctrl_middle_pane_cp01_ParamLimits

0xaeb7,	// (0x0006527e) grid_sctrl_middle_pane_cp01

0x53e4,	// (0x0005f7ab) cell_sctrl_middle_pane_cp01_ParamLimits

0x53e4,	// (0x0005f7ab) cell_sctrl_middle_pane_cp01

0x53f5,	// (0x0005f7bc) cell_sctrl_middle_pane_cp01_g1_ParamLimits

0x53f5,	// (0x0005f7bc) cell_sctrl_middle_pane_cp01_g1

0x1189,	// (0x0005b550) main_call4_pane

0x5402,	// (0x0005f7c9) aid_size_button_call4_ParamLimits

0x5402,	// (0x0005f7c9) aid_size_button_call4

0x5438,	// (0x0005f7ff) call4_windows_pane_ParamLimits

0x5438,	// (0x0005f7ff) call4_windows_pane

0x544d,	// (0x0005f814) grid_call4_button_pane_ParamLimits

0x544d,	// (0x0005f814) grid_call4_button_pane

0x547b,	// (0x0005f842) call4_windows_conf_pane

0x5490,	// (0x0005f857) popup_call4_audio_first_window_ParamLimits

0x5490,	// (0x0005f857) popup_call4_audio_first_window

0x54e0,	// (0x0005f8a7) popup_call4_audio_second_window_ParamLimits

0x54e0,	// (0x0005f8a7) popup_call4_audio_second_window

0x54f9,	// (0x0005f8c0) popup_call4_audio_wait_window_ParamLimits

0x54f9,	// (0x0005f8c0) popup_call4_audio_wait_window

0x5507,	// (0x0005f8ce) cell_call4_button_pane_ParamLimits

0x5507,	// (0x0005f8ce) cell_call4_button_pane

0x552a,	// (0x0005f8f1) bg_button_pane_cp09_ParamLimits

0x552a,	// (0x0005f8f1) bg_button_pane_cp09

0x5536,	// (0x0005f8fd) cell_call4_button_pane_g1_ParamLimits

0x5536,	// (0x0005f8fd) cell_call4_button_pane_g1

0x5543,	// (0x0005f90a) cell_call4_button_pane_t1_ParamLimits

0x5543,	// (0x0005f90a) cell_call4_button_pane_t1

0xdb2b,	// (0x00067ef2) popup_call4_audio_conf_window_ParamLimits

0xdb2b,	// (0x00067ef2) popup_call4_audio_conf_window

0x4913,	// (0x0005ecda) mup3_progress_pane_t1_ParamLimits

0x4932,	// (0x0005ecf9) mup3_progress_pane_t2_ParamLimits

0xd59f,	// (0x00067966) mup3_progress_pane_t3_ParamLimits

0xf4a6,	// (0x0006986d) mup3_progress_pane_t_ParamLimits

0xd5bc,	// (0x00067983) mup_progress_pane_cp03_ParamLimits

0x4d62,	// (0x0005f129) mup3_control_keys_pane_g4_copy1

0x517b,	// (0x0005f542) mp4_rocker2_pane_ParamLimits

0x517b,	// (0x0005f542) mp4_rocker2_pane

0xdb3f,	// (0x00067f06) mp4_rocker2_pane_g1

0xdb47,	// (0x00067f0e) mp4_rocker2_pane_g2

0x5587,	// (0x0005f94e) mp4_rocker2_pane_g3

0x558f,	// (0x0005f956) mp4_rocker2_pane_g4

0x5597,	// (0x0005f95e) mp4_rocker2_pane_g5

0x0004,

0xf580,	// (0x00069947) mp4_rocker2_pane_g

0x1189,	// (0x0005b550) main_camera4_pane

0x1189,	// (0x0005b550) main_video4_pane

0x4e9d,	// (0x0005f264) main_video_tele_dialer_pane_t1_ParamLimits

0x4e9d,	// (0x0005f264) main_video_tele_dialer_pane_t1

0x4eaf,	// (0x0005f276) main_video_tele_dialer_pane_t2_ParamLimits

0x4eaf,	// (0x0005f276) main_video_tele_dialer_pane_t2

0x0001,

0xf53b,	// (0x00069902) main_video_tele_dialer_pane_t_ParamLimits

0xf53b,	// (0x00069902) main_video_tele_dialer_pane_t

0x55b7,	// (0x0005f97e) cam4_autofocus_pane_ParamLimits

0x55b7,	// (0x0005f97e) cam4_autofocus_pane

0x55d1,	// (0x0005f998) cam4_image_uncrop_pane_ParamLimits

0x55d1,	// (0x0005f998) cam4_image_uncrop_pane

0x55e8,	// (0x0005f9af) cam4_indicators_pane_ParamLimits

0x55e8,	// (0x0005f9af) cam4_indicators_pane

0x5604,	// (0x0005f9cb) main_camera4_pane_g1_ParamLimits

0x5604,	// (0x0005f9cb) main_camera4_pane_g1

0x5610,	// (0x0005f9d7) main_camera4_pane_g2_ParamLimits

0x5610,	// (0x0005f9d7) main_camera4_pane_g2

0x5610,	// (0x0005f9d7) main_camera4_pane_g3_ParamLimits

0x5610,	// (0x0005f9d7) main_camera4_pane_g3

0x561c,	// (0x0005f9e3) main_camera4_pane_g4_ParamLimits

0x561c,	// (0x0005f9e3) main_camera4_pane_g4

0x5628,	// (0x0005f9ef) main_camera4_pane_g5_ParamLimits

0x5628,	// (0x0005f9ef) main_camera4_pane_g5

0x0005,

0xf58b,	// (0x00069952) main_camera4_pane_g_ParamLimits

0xf58b,	// (0x00069952) main_camera4_pane_g

0x5642,	// (0x0005fa09) main_camera4_pane_t1_ParamLimits

0x5642,	// (0x0005fa09) main_camera4_pane_t1

0xec98,	// (0x0006905f) bg_tb_trans_pane_cp06

0x5692,	// (0x0005fa59) cam4_indicators_pane_g1

0x56a3,	// (0x0005fa6a) cam4_indicators_pane_g2

0x0002,

0xf5a6,	// (0x0006996d) cam4_indicators_pane_g

0x56bb,	// (0x0005fa82) cam4_indicators_pane_t1

0x56e5,	// (0x0005faac) main_video4_pane_g1_ParamLimits

0x56e5,	// (0x0005faac) main_video4_pane_g1

0x56f1,	// (0x0005fab8) main_video4_pane_g2_ParamLimits

0x56f1,	// (0x0005fab8) main_video4_pane_g2

0x56fd,	// (0x0005fac4) main_video4_pane_g3_ParamLimits

0x56fd,	// (0x0005fac4) main_video4_pane_g3

0x5709,	// (0x0005fad0) main_video4_pane_g4_ParamLimits

0x5709,	// (0x0005fad0) main_video4_pane_g4

0x0004,

0xf5ad,	// (0x00069974) main_video4_pane_g_ParamLimits

0xf5ad,	// (0x00069974) main_video4_pane_g

0x5729,	// (0x0005faf0) vid4_indicators_pane_ParamLimits

0x5729,	// (0x0005faf0) vid4_indicators_pane

0x5748,	// (0x0005fb0f) video4_image_uncrop_cif_pane_ParamLimits

0x5748,	// (0x0005fb0f) video4_image_uncrop_cif_pane

0x5757,	// (0x0005fb1e) video4_image_uncrop_nhd_pane_ParamLimits

0x5757,	// (0x0005fb1e) video4_image_uncrop_nhd_pane

0x55d1,	// (0x0005f998) video4_image_uncrop_vga_pane_ParamLimits

0x55d1,	// (0x0005f998) video4_image_uncrop_vga_pane

0x3d61,	// (0x0005e128) bg_tb_trans_pane_cp07

0x576c,	// (0x0005fb33) vid4_indicators_pane_g1

0x5780,	// (0x0005fb47) vid4_indicators_pane_g2

0x5794,	// (0x0005fb5b) vid4_indicators_pane_g3

0x0004,

0xf5b8,	// (0x0006997f) vid4_indicators_pane_g

0x57c1,	// (0x0005fb88) vid4_indicators_pane_t1

0x57d8,	// (0x0005fb9f) cam4_autofocus_pane_g1

0x57e0,	// (0x0005fba7) cam4_autofocus_pane_g2

0x57e8,	// (0x0005fbaf) cam4_autofocus_pane_g3

0x0002,

0xf5c3,	// (0x0006998a) cam4_autofocus_pane_g

0x57f0,	// (0x0005fbb7) cam4_autofocus_pane_g3_copy1

0x4ecf,	// (0x0005f296) video_down_pane_cp_t1

0x4edd,	// (0x0005f2a4) video_down_pane_cp_t2

0x0001,

0xf540,	// (0x00069907) video_down_pane_cp_t

0x116f,	// (0x0005b536) popup_vitu2_window_ParamLimits

0x116f,	// (0x0005b536) popup_vitu2_window

0x57f8,	// (0x0005fbbf) aid_size_cell2_itu2_ParamLimits

0x57f8,	// (0x0005fbbf) aid_size_cell2_itu2

0x581a,	// (0x0005fbe1) aid_size_cell_itu2_ParamLimits

0x581a,	// (0x0005fbe1) aid_size_cell_itu2

0x585e,	// (0x0005fc25) bg_popup_window_pane_cp09_ParamLimits

0x585e,	// (0x0005fc25) bg_popup_window_pane_cp09

0x586c,	// (0x0005fc33) field_vitu2_entry_pane_ParamLimits

0x586c,	// (0x0005fc33) field_vitu2_entry_pane

0x588c,	// (0x0005fc53) grid_vitu2_function_pane_ParamLimits

0x588c,	// (0x0005fc53) grid_vitu2_function_pane

0x58d0,	// (0x0005fc97) grid_vitu2_itu_pane_ParamLimits

0x58d0,	// (0x0005fc97) grid_vitu2_itu_pane

0x5948,	// (0x0005fd0f) cell_vitu2_itu_pane_ParamLimits

0x5948,	// (0x0005fd0f) cell_vitu2_itu_pane

0x5961,	// (0x0005fd28) cell_vitu2_function_pane_ParamLimits

0x5961,	// (0x0005fd28) cell_vitu2_function_pane

0xdb4f,	// (0x00067f16) bg_popup_call_pane_cp08_ParamLimits

0xdb4f,	// (0x00067f16) bg_popup_call_pane_cp08

0xdb66,	// (0x00067f2d) field_vitu2_entry_pane_g1

0xdb72,	// (0x00067f39) field_vitu2_entry_pane_g2

0x0002,

0xf5ca,	// (0x00069991) field_vitu2_entry_pane_g

0x59a2,	// (0x0005fd69) field_vitu2_entry_pane_t1_ParamLimits

0x59a2,	// (0x0005fd69) field_vitu2_entry_pane_t1

0xa3c0,	// (0x00064787) field_vitu2_entry_pane_t2_ParamLimits

0xa3c0,	// (0x00064787) field_vitu2_entry_pane_t2

0x0001,

0xf5d1,	// (0x00069998) field_vitu2_entry_pane_t_ParamLimits

0xf5d1,	// (0x00069998) field_vitu2_entry_pane_t

0x4099,	// (0x0005e460) bg_button_pane_cp010_ParamLimits

0x4099,	// (0x0005e460) bg_button_pane_cp010

0x59d7,	// (0x0005fd9e) cell_vitu2_itu_pane_g1

0x59fd,	// (0x0005fdc4) cell_vitu2_itu_pane_t1_ParamLimits

0x59fd,	// (0x0005fdc4) cell_vitu2_itu_pane_t1

0x0e7c,	// (0x0005b243) cell_vitu2_itu_pane_t2_ParamLimits

0x0e7c,	// (0x0005b243) cell_vitu2_itu_pane_t2

0x0002,

0xf5db,	// (0x000699a2) cell_vitu2_itu_pane_t_ParamLimits

0xf5db,	// (0x000699a2) cell_vitu2_itu_pane_t

0x3d61,	// (0x0005e128) bg_button_pane_cp011

0x5a49,	// (0x0005fe10) cell_vitu2_function_pane_g1

0x1189,	// (0x0005b550) main_myfav_hc_pane

0x53c5,	// (0x0005f78c) popup_image3_note_pane_ParamLimits

0x53c5,	// (0x0005f78c) popup_image3_note_pane

0x53d3,	// (0x0005f79a) popup_image3_tool_bar_pane_ParamLimits

0x53d3,	// (0x0005f79a) popup_image3_tool_bar_pane

0x0ef2,	// (0x0005b2b9) cell_vitu2_itu_pane_t3_ParamLimits

0x0ef2,	// (0x0005b2b9) cell_vitu2_itu_pane_t3

0xa7a8,	// (0x00064b6f) bg_popup_trans_pane

0xdb86,	// (0x00067f4d) grid_image3_tool_bar_pane

0xdb90,	// (0x00067f57) bg_popup_trans_pane_g1

0xb342,	// (0x00065709) bg_popup_trans_pane_g2

0xdb98,	// (0x00067f5f) bg_popup_trans_pane_g3

0xdba0,	// (0x00067f67) bg_popup_trans_pane_g4

0xdba8,	// (0x00067f6f) bg_popup_trans_pane_g5

0xdbb0,	// (0x00067f77) bg_popup_trans_pane_g6

0xdbb8,	// (0x00067f7f) bg_popup_trans_pane_g7

0xdbc0,	// (0x00067f87) bg_popup_trans_pane_g8

0xb322,	// (0x000656e9) bg_popup_trans_pane_g9

0x0008,

0x07e7,	// (0x0005abae) bg_popup_trans_pane_g

0xdbc8,	// (0x00067f8f) cell_image3_tool_bar_pane_ParamLimits

0xdbc8,	// (0x00067f8f) cell_image3_tool_bar_pane

0xb131,	// (0x000654f8) cell_image3_tool_bar_pane_g1

0xa7a8,	// (0x00064b6f) bg_popup_trans_pane_cp1

0xdbdc,	// (0x00067fa3) popup_image3_note_pane_t1

0xdbea,	// (0x00067fb1) popup_image3_note_pane_t2

0xdbf8,	// (0x00067fbf) popup_image3_note_pane_t3

0x0002,

0x07fa,	// (0x0005abc1) popup_image3_note_pane_t

0xdc06,	// (0x00067fcd) popup_image3_note_pane_t3_copy1

0x5a5d,	// (0x0005fe24) bg_myfav_hc_instruction_pane_ParamLimits

0x5a5d,	// (0x0005fe24) bg_myfav_hc_instruction_pane

0x5a75,	// (0x0005fe3c) cell_myfav_contact_pane_ParamLimits

0x5a75,	// (0x0005fe3c) cell_myfav_contact_pane

0x5a8f,	// (0x0005fe56) cell_myfav_contact_pane_cp1_ParamLimits

0x5a8f,	// (0x0005fe56) cell_myfav_contact_pane_cp1

0x5aa7,	// (0x0005fe6e) cell_myfav_contact_pane_cp2_ParamLimits

0x5aa7,	// (0x0005fe6e) cell_myfav_contact_pane_cp2

0x5abf,	// (0x0005fe86) cell_myfav_contact_pane_cp3_ParamLimits

0x5abf,	// (0x0005fe86) cell_myfav_contact_pane_cp3

0x5ad6,	// (0x0005fe9d) cell_myfav_contact_pane_cp4_ParamLimits

0x5ad6,	// (0x0005fe9d) cell_myfav_contact_pane_cp4

0x5aec,	// (0x0005feb3) cell_myfav_contact_pane_cp5_ParamLimits

0x5aec,	// (0x0005feb3) cell_myfav_contact_pane_cp5

0x5b00,	// (0x0005fec7) cell_myfav_contact_pane_cp6_ParamLimits

0x5b00,	// (0x0005fec7) cell_myfav_contact_pane_cp6

0x5b14,	// (0x0005fedb) cell_myfav_contact_pane_cp7_ParamLimits

0x5b14,	// (0x0005fedb) cell_myfav_contact_pane_cp7

0xdc14,	// (0x00067fdb) listscroll_gen_pane_cp05

0x5b2c,	// (0x0005fef3) main_myfav_hc_pane_g1_ParamLimits

0x5b2c,	// (0x0005fef3) main_myfav_hc_pane_g1

0x5b42,	// (0x0005ff09) main_myfav_hc_pane_g2_ParamLimits

0x5b42,	// (0x0005ff09) main_myfav_hc_pane_g2

0x0002,

0xf5e2,	// (0x000699a9) main_myfav_hc_pane_g_ParamLimits

0xf5e2,	// (0x000699a9) main_myfav_hc_pane_g

0x5b72,	// (0x0005ff39) main_myfav_hc_pane_t1_ParamLimits

0x5b72,	// (0x0005ff39) main_myfav_hc_pane_t1

0xdc1d,	// (0x00067fe4) main_myfav_hc_pane_t2_ParamLimits

0xdc1d,	// (0x00067fe4) main_myfav_hc_pane_t2

0xdc2f,	// (0x00067ff6) main_myfav_hc_pane_t3_ParamLimits

0xdc2f,	// (0x00067ff6) main_myfav_hc_pane_t3

0x5b89,	// (0x0005ff50) main_myfav_hc_pane_t4_ParamLimits

0x5b89,	// (0x0005ff50) main_myfav_hc_pane_t4

0x0004,

0xf5e9,	// (0x000699b0) main_myfav_hc_pane_t_ParamLimits

0xf5e9,	// (0x000699b0) main_myfav_hc_pane_t

0xb131,	// (0x000654f8) bg_myfav_hc_instruction_pane_g1

0xdc41,	// (0x00068008) cell_myfav_contact_pane_g1_ParamLimits

0xdc41,	// (0x00068008) cell_myfav_contact_pane_g1

0xdc41,	// (0x00068008) cell_myfav_contact_pane_g2_ParamLimits

0xdc41,	// (0x00068008) cell_myfav_contact_pane_g2

0xdc4d,	// (0x00068014) cell_myfav_contact_pane_g3_ParamLimits

0xdc4d,	// (0x00068014) cell_myfav_contact_pane_g3

0xaed3,	// (0x0006529a) cell_myfav_contact_pane_g4_ParamLimits

0xaed3,	// (0x0006529a) cell_myfav_contact_pane_g4

0xdc5a,	// (0x00068021) cell_myfav_contact_pane_g5_ParamLimits

0xdc5a,	// (0x00068021) cell_myfav_contact_pane_g5

0x0004,

0x0813,	// (0x0005abda) cell_myfav_contact_pane_g_ParamLimits

0x0813,	// (0x0005abda) cell_myfav_contact_pane_g

0x5b5a,	// (0x0005ff21) main_myfav_hc_pane_g3_ParamLimits

0x5b5a,	// (0x0005ff21) main_myfav_hc_pane_g3

0x0de0,	// (0x0005b1a7) popup_adpt_find_window

0x5bb3,	// (0x0005ff7a) afind_page_pane_ParamLimits

0x5bb3,	// (0x0005ff7a) afind_page_pane

0x5bc0,	// (0x0005ff87) aid_size_cell_afind_ParamLimits

0x5bc0,	// (0x0005ff87) aid_size_cell_afind

0x5bda,	// (0x0005ffa1) bg_popup_sub_pane_cp09_ParamLimits

0x5bda,	// (0x0005ffa1) bg_popup_sub_pane_cp09

0x5beb,	// (0x0005ffb2) find_pane_cp01_ParamLimits

0x5beb,	// (0x0005ffb2) find_pane_cp01

0xdc66,	// (0x0006802d) grid_afind_control_pane_ParamLimits

0xdc66,	// (0x0006802d) grid_afind_control_pane

0x5bfe,	// (0x0005ffc5) grid_afind_pane_ParamLimits

0x5bfe,	// (0x0005ffc5) grid_afind_pane

0x5c1a,	// (0x0005ffe1) cell_afind_pane_ParamLimits

0x5c1a,	// (0x0005ffe1) cell_afind_pane

0xb131,	// (0x000654f8) afind_page_pane_g1

0x5c62,	// (0x00060029) afind_page_pane_g2

0x5c6a,	// (0x00060031) afind_page_pane_g3

0x0002,

0xf5f4,	// (0x000699bb) afind_page_pane_g

0x5c72,	// (0x00060039) afind_page_pane_t1

0xdc8c,	// (0x00068053) cell_afind_grid_control_pane_ParamLimits

0xdc8c,	// (0x00068053) cell_afind_grid_control_pane

0xdb17,	// (0x00067ede) bg_button_pane_cp69_ParamLimits

0xdb17,	// (0x00067ede) bg_button_pane_cp69

0x5c80,	// (0x00060047) cell_afind_pane_g1_ParamLimits

0x5c80,	// (0x00060047) cell_afind_pane_g1

0x5c8d,	// (0x00060054) cell_afind_pane_t1_ParamLimits

0x5c8d,	// (0x00060054) cell_afind_pane_t1

0xb13b,	// (0x00065502) bg_button_pane_cp72

0xdcb0,	// (0x00068077) cell_afind_grid_control_pane_g1

0x3892,	// (0x0005dc59) aid_image_placing_area_ParamLimits

0x3892,	// (0x0005dc59) aid_image_placing_area

0xaec5,	// (0x0006528c) field_vitu_entry_pane_g1_ParamLimits

0xaec5,	// (0x0006528c) field_vitu_entry_pane_g1

0xaec5,	// (0x0006528c) field_vitu_entry_pane_g2_ParamLimits

0xaec5,	// (0x0006528c) field_vitu_entry_pane_g2

0x0001,

0x011b,	// (0x0005a4e2) field_vitu_entry_pane_g_ParamLimits

0x011b,	// (0x0005a4e2) field_vitu_entry_pane_g

0xd8a9,	// (0x00067c70) cell_vitu_itu_pane_g1_ParamLimits

0xd834,	// (0x00067bfb) cell_vitu_itu_pane_t3_ParamLimits

0xd834,	// (0x00067bfb) cell_vitu_itu_pane_t3

0xdac0,	// (0x00067e87) mp4_progress_pane_t1_ParamLimits

0xdad9,	// (0x00067ea0) mp4_progress_pane_t2_ParamLimits

0x0764,	// (0x0005ab2b) mp4_progress_pane_t_ParamLimits

0xdaf2,	// (0x00067eb9) mup_progress_pane_cp04_ParamLimits

0x5b9d,	// (0x0005ff64) main_myfav_hc_pane_t5_ParamLimits

0x5b9d,	// (0x0005ff64) main_myfav_hc_pane_t5

0x0fa4,	// (0x0005b36b) aid_zoom_text_primary

0x0de0,	// (0x0005b1a7) popup_adpt_find_window_ParamLimits

0x3d61,	// (0x0005e128) main_cam_set_pane

0x55f6,	// (0x0005f9bd) cam4_zoom_pane_ParamLimits

0x55f6,	// (0x0005f9bd) cam4_zoom_pane

0x5c9f,	// (0x00060066) main_cam_set_pane_g1_ParamLimits

0x5c9f,	// (0x00060066) main_cam_set_pane_g1

0x5cad,	// (0x00060074) main_cam_set_pane_g2_ParamLimits

0x5cad,	// (0x00060074) main_cam_set_pane_g2

0x0001,

0xf5fb,	// (0x000699c2) main_cam_set_pane_g_ParamLimits

0xf5fb,	// (0x000699c2) main_cam_set_pane_g

0x5cb9,	// (0x00060080) main_cam_set_pane_t1_ParamLimits

0x5cb9,	// (0x00060080) main_cam_set_pane_t1

0x5cd5,	// (0x0006009c) main_cset_listscroll_pane_ParamLimits

0x5cd5,	// (0x0006009c) main_cset_listscroll_pane

0x5d07,	// (0x000600ce) main_cset_slider_pane_ParamLimits

0x5d07,	// (0x000600ce) main_cset_slider_pane

0xdcc1,	// (0x00068088) main_cset_list_pane_ParamLimits

0xdcc1,	// (0x00068088) main_cset_list_pane

0xdcd1,	// (0x00068098) scroll_pane_cp028

0x5d26,	// (0x000600ed) aid_area_touch_slider

0x5d42,	// (0x00060109) cset_slider_pane

0x5d65,	// (0x0006012c) main_cset_slider_pane_g1

0x5d7a,	// (0x00060141) main_cset_slider_pane_g2

0x0011,

0xf600,	// (0x000699c7) main_cset_slider_pane_g

0xdd22,	// (0x000680e9) main_cset_slider_pane_t1

0x5e40,	// (0x00060207) main_cset_slider_pane_t2

0x5e5a,	// (0x00060221) main_cset_slider_pane_t3

0x5e74,	// (0x0006023b) main_cset_slider_pane_t4

0x5e92,	// (0x00060259) main_cset_slider_pane_t5

0x5eb0,	// (0x00060277) main_cset_slider_pane_t6

0x5ec7,	// (0x0006028e) main_cset_slider_pane_t7

0x000e,

0xf625,	// (0x000699ec) main_cset_slider_pane_t

0x5fd5,	// (0x0006039c) cset_list_set_pane_ParamLimits

0x5fd5,	// (0x0006039c) cset_list_set_pane

0xddbc,	// (0x00068183) aid_position_infowindow_above

0xddc4,	// (0x0006818b) aid_position_infowindow_below

0x5fee,	// (0x000603b5) cset_list_set_pane_g1_ParamLimits

0x5fee,	// (0x000603b5) cset_list_set_pane_g1

0x5ffa,	// (0x000603c1) cset_list_set_pane_g3_ParamLimits

0x5ffa,	// (0x000603c1) cset_list_set_pane_g3

0x0001,

0xf644,	// (0x00069a0b) cset_list_set_pane_g_ParamLimits

0xf644,	// (0x00069a0b) cset_list_set_pane_g

0x6009,	// (0x000603d0) cset_list_set_pane_t1_ParamLimits

0x6009,	// (0x000603d0) cset_list_set_pane_t1

0xa7e5,	// (0x00064bac) list_highlight_pane_cp021_ParamLimits

0xa7e5,	// (0x00064bac) list_highlight_pane_cp021

0xbc85,	// (0x0006604c) cset_slider_pane_g1

0xbc97,	// (0x0006605e) cset_slider_pane_g2

0xbc8e,	// (0x00066055) cset_slider_pane_g3

0x0002,

0x0873,	// (0x0005ac3a) cset_slider_pane_g

0x601e,	// (0x000603e5) aid_area_touch_cam4_zoom

0x6026,	// (0x000603ed) cam4_zoom_cont_pane

0x602e,	// (0x000603f5) cam4_zoom_pane_g1

0x6036,	// (0x000603fd) cam4_zoom_pane_g2

0x603e,	// (0x00060405) cam4_zoom_pane_g3

0x0002,

0xf649,	// (0x00069a10) cam4_zoom_pane_g

0x6046,	// (0x0006040d) cam4_zoom_cont_pane_g1

0x604f,	// (0x00060416) cam4_zoom_cont_pane_g2

0x6058,	// (0x0006041f) cam4_zoom_cont_pane_g3

0x0002,

0xf650,	// (0x00069a17) cam4_zoom_cont_pane_g

0x541c,	// (0x0005f7e3) call4_image_pane_ParamLimits

0x541c,	// (0x0005f7e3) call4_image_pane

0x547b,	// (0x0005f842) call4_windows_conf_pane_ParamLimits

0x54be,	// (0x0005f885) popup_call4_audio_in_window_ParamLimits

0x54be,	// (0x0005f885) popup_call4_audio_in_window

0xa7a8,	// (0x00064b6f) bg_popup_call2_act_pane_cp02

0xdb23,	// (0x00067eea) call4_list_conf_pane

0xb131,	// (0x000654f8) call4_image_pane_g1

0xb131,	// (0x000654f8) call4_image_pane_g2

0x0001,

0x02f2,	// (0x0005a6b9) call4_image_pane_g

0xddcc,	// (0x00068193) list_single_graphic_popup_conf4_pane_ParamLimits

0xddcc,	// (0x00068193) list_single_graphic_popup_conf4_pane

0xa7a8,	// (0x00064b6f) list_highlight_pane_cp022

0xdddf,	// (0x000681a6) list_single_graphic_popup_conf4_pane_g1

0xb860,	// (0x00065c27) list_single_graphic_popup_conf4_pane_g2

0x0001,

0x0888,	// (0x0005ac4f) list_single_graphic_popup_conf4_pane_g

0xdde7,	// (0x000681ae) list_single_graphic_popup_conf4_pane_t1

0x1e1f,	// (0x0005c1e6) popup_vtel_slider_window_ParamLimits

0x1e1f,	// (0x0005c1e6) popup_vtel_slider_window

0xdb05,	// (0x00067ecc) dialer2_ne_pane_t2_ParamLimits

0xdb05,	// (0x00067ecc) dialer2_ne_pane_t2

0x0001,

0xf564,	// (0x0006992b) dialer2_ne_pane_t_ParamLimits

0xf564,	// (0x0006992b) dialer2_ne_pane_t

0xa7e5,	// (0x00064bac) bg_popup_sub_pane_cp010_ParamLimits

0xa7e5,	// (0x00064bac) bg_popup_sub_pane_cp010

0x6061,	// (0x00060428) popup_vtel_slider_window_g1_ParamLimits

0x6061,	// (0x00060428) popup_vtel_slider_window_g1

0x606d,	// (0x00060434) popup_vtel_slider_window_g2_ParamLimits

0x606d,	// (0x00060434) popup_vtel_slider_window_g2

0x0003,

0xf657,	// (0x00069a1e) popup_vtel_slider_window_g_ParamLimits

0xf657,	// (0x00069a1e) popup_vtel_slider_window_g

0x60b5,	// (0x0006047c) vtel_slider_pane_ParamLimits

0x60b5,	// (0x0006047c) vtel_slider_pane

0x60c4,	// (0x0006048b) vtel_slider_pane_g1_ParamLimits

0x60c4,	// (0x0006048b) vtel_slider_pane_g1

0x60d1,	// (0x00060498) vtel_slider_pane_g2_ParamLimits

0x60d1,	// (0x00060498) vtel_slider_pane_g2

0x60de,	// (0x000604a5) vtel_slider_pane_g3_ParamLimits

0x60de,	// (0x000604a5) vtel_slider_pane_g3

0x60c4,	// (0x0006048b) vtel_slider_pane_g4_ParamLimits

0x60c4,	// (0x0006048b) vtel_slider_pane_g4

0x60eb,	// (0x000604b2) vtel_slider_pane_g5_ParamLimits

0x60eb,	// (0x000604b2) vtel_slider_pane_g5

0x0004,

0xf660,	// (0x00069a27) vtel_slider_pane_g_ParamLimits

0xf660,	// (0x00069a27) vtel_slider_pane_g

0x3d61,	// (0x0005e128) main_gallery2_pane

0x5840,	// (0x0005fc07) aid_size_row_itut2_dropdow_list_ParamLimits

0x5840,	// (0x0005fc07) aid_size_row_itut2_dropdow_list

0x58ae,	// (0x0005fc75) grid_vitu2_function_top_pane_ParamLimits

0x58ae,	// (0x0005fc75) grid_vitu2_function_top_pane

0x5908,	// (0x0005fccf) popup_vitu2_dropdown_list_window_ParamLimits

0x5908,	// (0x0005fccf) popup_vitu2_dropdown_list_window

0x5926,	// (0x0005fced) popup_vitu2_match_list_window

0x60f8,	// (0x000604bf) cell_vitu2_function_top_pane_ParamLimits

0x60f8,	// (0x000604bf) cell_vitu2_function_top_pane

0x6112,	// (0x000604d9) cell_vitu2_function_top_pane_cp01_ParamLimits

0x6112,	// (0x000604d9) cell_vitu2_function_top_pane_cp01

0x612e,	// (0x000604f5) cell_vitu2_function_top_wide_pane_ParamLimits

0x612e,	// (0x000604f5) cell_vitu2_function_top_wide_pane

0x3d61,	// (0x0005e128) bg_button_pane_cp012

0x614c,	// (0x00060513) cell_vitu2_function_top_pane_g1

0x6160,	// (0x00060527) bg_button_pane_cp013_ParamLimits

0x6160,	// (0x00060527) bg_button_pane_cp013

0x617c,	// (0x00060543) cell_vitu2_function_top_wide_pane_g1_ParamLimits

0x617c,	// (0x00060543) cell_vitu2_function_top_wide_pane_g1

0x116f,	// (0x0005b536) bg_popup_sub_pane_cp20

0x6194,	// (0x0006055b) list_vitu2_match_list_pane

0xdb90,	// (0x00067f57) bg_popup_sub_pane_cp20_g1

0xdb98,	// (0x00067f5f) bg_popup_sub_pane_cp20_g2

0xb342,	// (0x00065709) bg_popup_sub_pane_cp20_g3

0xdba0,	// (0x00067f67) bg_popup_sub_pane_cp20_g4

0xb322,	// (0x000656e9) bg_popup_sub_pane_cp20_g5

0xddfd,	// (0x000681c4) bg_popup_sub_pane_cp20_g6

0xdbb0,	// (0x00067f77) bg_popup_sub_pane_cp20_g7

0xdbb8,	// (0x00067f7f) bg_popup_sub_pane_cp20_g8

0xdbc0,	// (0x00067f87) bg_popup_sub_pane_cp20_g9

0x0008,

0x08a1,	// (0x0005ac68) bg_popup_sub_pane_cp20_g

0x61ac,	// (0x00060573) list_vitu2_match_list_item_pane_ParamLimits

0x61ac,	// (0x00060573) list_vitu2_match_list_item_pane

0x61be,	// (0x00060585) list_vitu2_match_list_item_pane_t1

0x1189,	// (0x0005b550) bg_popup_sub_pane_cp21

0xb0fb,	// (0x000654c2) grid_vitu2_dropdown_list_pane

0x61cc,	// (0x00060593) cell_vitu2_dropdown_list_char_pane_ParamLimits

0x61cc,	// (0x00060593) cell_vitu2_dropdown_list_char_pane

0x61ee,	// (0x000605b5) cell_vitu2_dropdown_list_ctrl_pane_ParamLimits

0x61ee,	// (0x000605b5) cell_vitu2_dropdown_list_ctrl_pane

0xde05,	// (0x000681cc) cell_vitu2_dropdown_list_char_pane_g1

0xde0e,	// (0x000681d5) cell_vitu2_dropdown_list_char_pane_g2

0xde17,	// (0x000681de) cell_vitu2_dropdown_list_char_pane_g3

0x0002,

0x08b4,	// (0x0005ac7b) cell_vitu2_dropdown_list_char_pane_g

0x6216,	// (0x000605dd) cell_vitu2_dropdown_list_char_pane_t1

0x6224,	// (0x000605eb) cell_vitu2_dropdown_list_ctrl_pane_g1_ParamLimits

0x6224,	// (0x000605eb) cell_vitu2_dropdown_list_ctrl_pane_g1

0x6231,	// (0x000605f8) cell_vitu2_dropdown_list_ctrl_pane_g2_ParamLimits

0x6231,	// (0x000605f8) cell_vitu2_dropdown_list_ctrl_pane_g2

0x623e,	// (0x00060605) cell_vitu2_dropdown_list_ctrl_pane_g3_ParamLimits

0x623e,	// (0x00060605) cell_vitu2_dropdown_list_ctrl_pane_g3

0x624b,	// (0x00060612) cell_vitu2_dropdown_list_ctrl_pane_g4_ParamLimits

0x624b,	// (0x00060612) cell_vitu2_dropdown_list_ctrl_pane_g4

0xec98,	// (0x0006905f) cell_vitu2_dropdown_list_ctrl_pane_g5_ParamLimits

0xec98,	// (0x0006905f) cell_vitu2_dropdown_list_ctrl_pane_g5

0x0004,

0xf66b,	// (0x00069a32) cell_vitu2_dropdown_list_ctrl_pane_g_ParamLimits

0xf66b,	// (0x00069a32) cell_vitu2_dropdown_list_ctrl_pane_g

0x6267,	// (0x0006062e) aid_size_cell_gallery2_ParamLimits

0x6267,	// (0x0006062e) aid_size_cell_gallery2

0x6281,	// (0x00060648) grid_gallery2_pane_ParamLimits

0x6281,	// (0x00060648) grid_gallery2_pane

0x6298,	// (0x0006065f) scroll_pane_cp029_ParamLimits

0x6298,	// (0x0006065f) scroll_pane_cp029

0x62a8,	// (0x0006066f) cell_gallery2_pane_ParamLimits

0x62a8,	// (0x0006066f) cell_gallery2_pane

0xde20,	// (0x000681e7) cell_gallery2_pane_g2

0x62fd,	// (0x000606c4) cell_gallery2_pane_g3

0xde28,	// (0x000681ef) cell_gallery2_pane_g4

0xde30,	// (0x000681f7) cell_gallery2_pane_g5

0xb0fb,	// (0x000654c2) grid_highlight_pane_cp10

0x5926,	// (0x0005fced) popup_vitu2_match_list_window_ParamLimits

0x5938,	// (0x0005fcff) popup_vitu2_query_window_ParamLimits

0x5938,	// (0x0005fcff) popup_vitu2_query_window

0x1189,	// (0x0005b550) bg_vitu2_candi_button_pane

0xde05,	// (0x000681cc) cell_vitu2_dropdown_list_char_pane_g1_copy1

0xde0e,	// (0x000681d5) cell_vitu2_dropdown_list_char_pane_g2_copy1

0xde17,	// (0x000681de) cell_vitu2_dropdown_list_char_pane_g2_copy2

0x6305,	// (0x000606cc) bg_button_pane_cp015

0x631a,	// (0x000606e1) bg_button_pane_cp016

0x6326,	// (0x000606ed) bg_button_pane_cp017

0xbc6e,	// (0x00066035) bg_popup_sub_pane_cp22

0xde38,	// (0x000681ff) popup_vitu2_query_window_g1

0x6366,	// (0x0006072d) popup_vitu2_query_window_g2

0x0002,

0xf676,	// (0x00069a3d) popup_vitu2_query_window_g

0x638a,	// (0x00060751) popup_vitu2_query_window_t1_ParamLimits

0x638a,	// (0x00060751) popup_vitu2_query_window_t1

0x63bd,	// (0x00060784) popup_vitu2_query_window_t2_ParamLimits

0x63bd,	// (0x00060784) popup_vitu2_query_window_t2

0x63cf,	// (0x00060796) popup_vitu2_query_window_t3_ParamLimits

0x63cf,	// (0x00060796) popup_vitu2_query_window_t3

0x63f7,	// (0x000607be) popup_vitu2_query_window_t4_ParamLimits

0x63f7,	// (0x000607be) popup_vitu2_query_window_t4

0x640b,	// (0x000607d2) popup_vitu2_query_window_t5_ParamLimits

0x640b,	// (0x000607d2) popup_vitu2_query_window_t5

0x0006,

0xf67d,	// (0x00069a44) popup_vitu2_query_window_t_ParamLimits

0xf67d,	// (0x00069a44) popup_vitu2_query_window_t

0xdcb9,	// (0x00068080) main_cset_text_pane

0x5d26,	// (0x000600ed) aid_area_touch_slider_ParamLimits

0x5d42,	// (0x00060109) cset_slider_pane_ParamLimits

0x5d65,	// (0x0006012c) main_cset_slider_pane_g1_ParamLimits

0x5d7a,	// (0x00060141) main_cset_slider_pane_g2_ParamLimits

0xdcda,	// (0x000680a1) main_cset_slider_pane_g3_ParamLimits

0xdcda,	// (0x000680a1) main_cset_slider_pane_g3

0x5d8f,	// (0x00060156) main_cset_slider_pane_g4_ParamLimits

0x5d8f,	// (0x00060156) main_cset_slider_pane_g4

0x5d9e,	// (0x00060165) main_cset_slider_pane_g5_ParamLimits

0x5d9e,	// (0x00060165) main_cset_slider_pane_g5

0x5dac,	// (0x00060173) main_cset_slider_pane_g6_ParamLimits

0x5dac,	// (0x00060173) main_cset_slider_pane_g6

0xf600,	// (0x000699c7) main_cset_slider_pane_g_ParamLimits

0xdd22,	// (0x000680e9) main_cset_slider_pane_t1_ParamLimits

0x5e40,	// (0x00060207) main_cset_slider_pane_t2_ParamLimits

0x5e5a,	// (0x00060221) main_cset_slider_pane_t3_ParamLimits

0x5e74,	// (0x0006023b) main_cset_slider_pane_t4_ParamLimits

0x5e92,	// (0x00060259) main_cset_slider_pane_t5_ParamLimits

0x5eb0,	// (0x00060277) main_cset_slider_pane_t6_ParamLimits

0x5ec7,	// (0x0006028e) main_cset_slider_pane_t7_ParamLimits

0x5ef5,	// (0x000602bc) main_cset_slider_pane_t8_ParamLimits

0x5ef5,	// (0x000602bc) main_cset_slider_pane_t8

0x5f1d,	// (0x000602e4) main_cset_slider_pane_t9_ParamLimits

0x5f1d,	// (0x000602e4) main_cset_slider_pane_t9

0x5f45,	// (0x0006030c) main_cset_slider_pane_t10_ParamLimits

0x5f45,	// (0x0006030c) main_cset_slider_pane_t10

0x5f6d,	// (0x00060334) main_cset_slider_pane_t11_ParamLimits

0x5f6d,	// (0x00060334) main_cset_slider_pane_t11

0x5f97,	// (0x0006035e) main_cset_slider_pane_t12_ParamLimits

0x5f97,	// (0x0006035e) main_cset_slider_pane_t12

0x5fb6,	// (0x0006037d) main_cset_slider_pane_t13_ParamLimits

0x5fb6,	// (0x0006037d) main_cset_slider_pane_t13

0xf625,	// (0x000699ec) main_cset_slider_pane_t_ParamLimits

0xa7a8,	// (0x00064b6f) bg_popup_sub_pane_cp011

0xde44,	// (0x0006820b) main_cset_text_pane_g1

0xde4c,	// (0x00068213) main_cset_text_pane_t1

0xde5a,	// (0x00068221) main_cset_text_pane_t2

0xde68,	// (0x0006822f) main_cset_text_pane_t3

0xde76,	// (0x0006823d) main_cset_text_pane_t4

0xde84,	// (0x0006824b) main_cset_text_pane_t5

0xde92,	// (0x00068259) main_cset_text_pane_t6

0xdea0,	// (0x00068267) main_cset_text_pane_t7

0x0006,

0x08dc,	// (0x0005aca3) main_cset_text_pane_t

0x1189,	// (0x0005b550) main_cam4_burst_pane

0x1189,	// (0x0005b550) main_cam5_pane

0xdc7a,	// (0x00068041) bg_button_pane_cp019

0xdc83,	// (0x0006804a) bg_button_pane_cp020

0xdce6,	// (0x000680ad) main_cset_slider_pane_g7_ParamLimits

0xdce6,	// (0x000680ad) main_cset_slider_pane_g7

0xdcf2,	// (0x000680b9) main_cset_slider_pane_g8_ParamLimits

0xdcf2,	// (0x000680b9) main_cset_slider_pane_g8

0x5dc0,	// (0x00060187) main_cset_slider_pane_g9_ParamLimits

0x5dc0,	// (0x00060187) main_cset_slider_pane_g9

0x5dcc,	// (0x00060193) main_cset_slider_pane_g10_ParamLimits

0x5dcc,	// (0x00060193) main_cset_slider_pane_g10

0x5dd8,	// (0x0006019f) main_cset_slider_pane_g11_ParamLimits

0x5dd8,	// (0x0006019f) main_cset_slider_pane_g11

0x5de4,	// (0x000601ab) main_cset_slider_pane_g12_ParamLimits

0x5de4,	// (0x000601ab) main_cset_slider_pane_g12

0x5df0,	// (0x000601b7) main_cset_slider_pane_g13_ParamLimits

0x5df0,	// (0x000601b7) main_cset_slider_pane_g13

0x5dfe,	// (0x000601c5) main_cset_slider_pane_g14_ParamLimits

0x5dfe,	// (0x000601c5) main_cset_slider_pane_g14

0x5e0c,	// (0x000601d3) main_cset_slider_pane_g15_ParamLimits

0x5e0c,	// (0x000601d3) main_cset_slider_pane_g15

0xdd4a,	// (0x00068111) main_cset_slider_pane_t14_ParamLimits

0xdd4a,	// (0x00068111) main_cset_slider_pane_t14

0xdd83,	// (0x0006814a) main_cset_slider_pane_t15_ParamLimits

0xdd83,	// (0x0006814a) main_cset_slider_pane_t15

0x6475,	// (0x0006083c) aid_cam4_burst_size_cell_ParamLimits

0x6475,	// (0x0006083c) aid_cam4_burst_size_cell

0x6491,	// (0x00060858) grid_cam4_burst_pane_ParamLimits

0x6491,	// (0x00060858) grid_cam4_burst_pane

0x64c1,	// (0x00060888) linegrid_cam4_burst_pane_ParamLimits

0x64c1,	// (0x00060888) linegrid_cam4_burst_pane

0x64e1,	// (0x000608a8) scroll_pane_cp30_ParamLimits

0x64e1,	// (0x000608a8) scroll_pane_cp30

0x64ed,	// (0x000608b4) cell_cam4_burst_pane_ParamLimits

0x64ed,	// (0x000608b4) cell_cam4_burst_pane

0xdeae,	// (0x00068275) linegrid_cam4_burst_pane_g1_ParamLimits

0xdeae,	// (0x00068275) linegrid_cam4_burst_pane_g1

0x6529,	// (0x000608f0) linegrid_cam4_burst_pane_g2_ParamLimits

0x6529,	// (0x000608f0) linegrid_cam4_burst_pane_g2

0xdebb,	// (0x00068282) linegrid_cam4_burst_pane_g3_ParamLimits

0xdebb,	// (0x00068282) linegrid_cam4_burst_pane_g3

0x0002,

0xf68c,	// (0x00069a53) linegrid_cam4_burst_pane_g_ParamLimits

0xf68c,	// (0x00069a53) linegrid_cam4_burst_pane_g

0x653a,	// (0x00060901) linegrid_cam4_burst_pane_g3_copy1_ParamLimits

0x653a,	// (0x00060901) linegrid_cam4_burst_pane_g3_copy1

0xdec8,	// (0x0006828f) linegrid_cam4_burst_pane_g4_ParamLimits

0xdec8,	// (0x0006828f) linegrid_cam4_burst_pane_g4

0x6554,	// (0x0006091b) linegrid_cam4_burst_pane_g5_ParamLimits

0x6554,	// (0x0006091b) linegrid_cam4_burst_pane_g5

0x6565,	// (0x0006092c) linegrid_cam4_burst_pane_g6_ParamLimits

0x6565,	// (0x0006092c) linegrid_cam4_burst_pane_g6

0xded5,	// (0x0006829c) linegrid_cam4_burst_pane_g7_ParamLimits

0xded5,	// (0x0006829c) linegrid_cam4_burst_pane_g7

0x6576,	// (0x0006093d) cell_cam4_burst_pane_g1

0xdeee,	// (0x000682b5) main_cam5_pane_t1_ParamLimits

0xdeee,	// (0x000682b5) main_cam5_pane_t1

0xdf00,	// (0x000682c7) main_cam5_pane_t2_ParamLimits

0xdf00,	// (0x000682c7) main_cam5_pane_t2

0xdf1e,	// (0x000682e5) main_cam5_pane_t3_ParamLimits

0xdf1e,	// (0x000682e5) main_cam5_pane_t3

0xdf30,	// (0x000682f7) main_cam5_pane_t4_ParamLimits

0xdf30,	// (0x000682f7) main_cam5_pane_t4

0xdf48,	// (0x0006830f) main_cam5_pane_t5_ParamLimits

0xdf48,	// (0x0006830f) main_cam5_pane_t5

0xdf5c,	// (0x00068323) main_cam5_pane_t6_ParamLimits

0xdf5c,	// (0x00068323) main_cam5_pane_t6

0xdf70,	// (0x00068337) main_cam5_pane_t7_ParamLimits

0xdf70,	// (0x00068337) main_cam5_pane_t7

0xdf82,	// (0x00068349) main_cam5_pane_t8_ParamLimits

0xdf82,	// (0x00068349) main_cam5_pane_t8

0xdf9e,	// (0x00068365) main_cam5_pane_t9_ParamLimits

0xdf9e,	// (0x00068365) main_cam5_pane_t9

0xdfb0,	// (0x00068377) main_cam5_pane_t10_ParamLimits

0xdfb0,	// (0x00068377) main_cam5_pane_t10

0xdfc2,	// (0x00068389) main_cam5_pane_t11_ParamLimits

0xdfc2,	// (0x00068389) main_cam5_pane_t11

0xdfd4,	// (0x0006839b) main_cam5_pane_t12_ParamLimits

0xdfd4,	// (0x0006839b) main_cam5_pane_t12

0xdfe9,	// (0x000683b0) main_cam5_pane_t13_ParamLimits

0xdfe9,	// (0x000683b0) main_cam5_pane_t13

0x000c,

0xf698,	// (0x00069a5f) main_cam5_pane_t_ParamLimits

0xf698,	// (0x00069a5f) main_cam5_pane_t

0x112e,	// (0x0005b4f5) popup_scut_keymap_window_ParamLimits

0x112e,	// (0x0005b4f5) popup_scut_keymap_window

0x6589,	// (0x00060950) aid_size_cell_brow_shortcut

0xb0fb,	// (0x000654c2) bg_popup_window_pane_cp010

0x6595,	// (0x0006095c) grid_scut_pane

0x65a1,	// (0x00060968) cell_scut_pane_ParamLimits

0x65a1,	// (0x00060968) cell_scut_pane

0x65b8,	// (0x0006097f) cell_scut_pane_g1

0xe006,	// (0x000683cd) cell_scut_pane_t1

0xe015,	// (0x000683dc) cell_scut_pane_t2

0x65c1,	// (0x00060988) cell_scut_pane_t3

0x0002,

0xf6b3,	// (0x00069a7a) cell_scut_pane_t

0x453c,	// (0x0005e903) main_mup3_pane_g8_ParamLimits

0x453c,	// (0x0005e903) main_mup3_pane_g8

0x584e,	// (0x0005fc15) area_vitu2_query_pane_ParamLimits

0x584e,	// (0x0005fc15) area_vitu2_query_pane

0x6332,	// (0x000606f9) input_focus_pane_cp08

0xe024,	// (0x000683eb) area_vitu2_query_pane_g1

0x65cf,	// (0x00060996) area_vitu2_query_pane_g2

0x0001,

0xf6ba,	// (0x00069a81) area_vitu2_query_pane_g

0x65e0,	// (0x000609a7) area_vitu2_query_pane_t1_ParamLimits

0x65e0,	// (0x000609a7) area_vitu2_query_pane_t1

0x65f4,	// (0x000609bb) area_vitu2_query_pane_t2_ParamLimits

0x65f4,	// (0x000609bb) area_vitu2_query_pane_t2

0x6608,	// (0x000609cf) area_vitu2_query_pane_t3_ParamLimits

0x6608,	// (0x000609cf) area_vitu2_query_pane_t3

0xa3dd,	// (0x000647a4) area_vitu2_query_pane_t4_ParamLimits

0xa3dd,	// (0x000647a4) area_vitu2_query_pane_t4

0xa405,	// (0x000647cc) area_vitu2_query_pane_t5_ParamLimits

0xa405,	// (0x000647cc) area_vitu2_query_pane_t5

0xa42d,	// (0x000647f4) area_vitu2_query_pane_t6_ParamLimits

0xa42d,	// (0x000647f4) area_vitu2_query_pane_t6

0x0006,

0xf6bf,	// (0x00069a86) area_vitu2_query_pane_t_ParamLimits

0xf6bf,	// (0x00069a86) area_vitu2_query_pane_t

0x631a,	// (0x000606e1) bg_button_pane_cp018

0x6630,	// (0x000609f7) bg_button_pane_cp021

0x663c,	// (0x00060a03) bg_button_pane_cp022

0x665f,	// (0x00060a26) input_focus_pane_cp09

0xb983,	// (0x00065d4a) aid_size_touch_mv_arrow_left

0xb9ae,	// (0x00065d75) aid_size_touch_mv_arrow_right

0x5e24,	// (0x000601eb) main_cset_slider_pane_g16_ParamLimits

0x5e24,	// (0x000601eb) main_cset_slider_pane_g16

0x5e32,	// (0x000601f9) main_cset_slider_pane_g17_ParamLimits

0x5e32,	// (0x000601f9) main_cset_slider_pane_g17

0x6576,	// (0x0006093d) cell_cam4_burst_pane_g1_ParamLimits

0xa7a8,	// (0x00064b6f) compa_mode_pane

0x6079,	// (0x00060440) popup_vtel_slider_window_g3_ParamLimits

0x6079,	// (0x00060440) popup_vtel_slider_window_g3

0x608d,	// (0x00060454) popup_vtel_slider_window_g4_ParamLimits

0x608d,	// (0x00060454) popup_vtel_slider_window_g4

0x60a1,	// (0x00060468) popup_vtel_slider_window_t1_ParamLimits

0x60a1,	// (0x00060468) popup_vtel_slider_window_t1

0x1189,	// (0x0005b550) main_cl_pane

0x3dfb,	// (0x0005e1c2) popup_imed_adjust2_window_ParamLimits

0xbc6e,	// (0x00066035) bg_tb_trans_pane_cp05_ParamLimits

0xd7c1,	// (0x00067b88) popup_imed_adjust2_window_g1_ParamLimits

0xd7d0,	// (0x00067b97) popup_imed_adjust2_window_g2_ParamLimits

0xd7d0,	// (0x00067b97) popup_imed_adjust2_window_g2

0xd7dc,	// (0x00067ba3) popup_imed_adjust2_window_g3_ParamLimits

0xd7dc,	// (0x00067ba3) popup_imed_adjust2_window_g3

0x0002,

0x0694,	// (0x0005aa5b) popup_imed_adjust2_window_g_ParamLimits

0x0694,	// (0x0005aa5b) popup_imed_adjust2_window_g

0xd7e8,	// (0x00067baf) popup_imed_adjust2_window_t1_ParamLimits

0xd800,	// (0x00067bc7) slider_imed_adjust_pane_ParamLimits

0xd814,	// (0x00067bdb) slider_imed_adjust_pane_g1_ParamLimits

0xd824,	// (0x00067beb) slider_imed_adjust_pane_g2_ParamLimits

0xd851,	// (0x00067c18) slider_imed_adjust_pane_g3_ParamLimits

0xd862,	// (0x00067c29) slider_imed_adjust_pane_g4_ParamLimits

0xf4d8,	// (0x0006989f) slider_imed_adjust_pane_g_ParamLimits

0x559f,	// (0x0005f966) aid_touch_area_cam4_ParamLimits

0x559f,	// (0x0005f966) aid_touch_area_cam4

0x55af,	// (0x0005f976) battery_pane_cp01

0x5636,	// (0x0005f9fd) main_camera4_pane_g6_ParamLimits

0x5636,	// (0x0005f9fd) main_camera4_pane_g6

0x5654,	// (0x0005fa1b) main_camera4_pane_t2_ParamLimits

0x5654,	// (0x0005fa1b) main_camera4_pane_t2

0x0001,

0xf598,	// (0x0006995f) main_camera4_pane_t_ParamLimits

0xf598,	// (0x0006995f) main_camera4_pane_t

0x56d5,	// (0x0005fa9c) aid_touch_area_vid4_ParamLimits

0x56d5,	// (0x0005fa9c) aid_touch_area_vid4

0x5715,	// (0x0005fadc) main_video4_pane_g5_ParamLimits

0x5715,	// (0x0005fadc) main_video4_pane_g5

0x5739,	// (0x0005fb00) vid4_progress_pane_ParamLimits

0x5739,	// (0x0005fb00) vid4_progress_pane

0xdd16,	// (0x000680dd) main_cset_slider_pane_g18_ParamLimits

0xdd16,	// (0x000680dd) main_cset_slider_pane_g18

0xdee2,	// (0x000682a9) cell_cam4_burst_pane_g2_ParamLimits

0xdee2,	// (0x000682a9) cell_cam4_burst_pane_g2

0x0001,

0xf693,	// (0x00069a5a) cell_cam4_burst_pane_g_ParamLimits

0xf693,	// (0x00069a5a) cell_cam4_burst_pane_g

0x666f,	// (0x00060a36) bg_cl_pane_ParamLimits

0x666f,	// (0x00060a36) bg_cl_pane

0x667b,	// (0x00060a42) cl_header_pane_ParamLimits

0x667b,	// (0x00060a42) cl_header_pane

0x6687,	// (0x00060a4e) cl_listscroll_pane_ParamLimits

0x6687,	// (0x00060a4e) cl_listscroll_pane

0xe030,	// (0x000683f7) bg_cl_pane_g1

0xe038,	// (0x000683ff) bg_cl_pane_g2

0xe040,	// (0x00068407) bg_cl_pane_g3

0xe048,	// (0x0006840f) bg_cl_pane_g4

0xe050,	// (0x00068417) bg_cl_pane_g5

0xe058,	// (0x0006841f) bg_cl_pane_g6

0xe060,	// (0x00068427) bg_cl_pane_g7

0xe068,	// (0x0006842f) bg_cl_pane_g8

0xe070,	// (0x00068437) bg_cl_pane_g9

0x0008,

0x092d,	// (0x0005acf4) bg_cl_pane_g

0x6693,	// (0x00060a5a) aid_height_cl_leading_ParamLimits

0x6693,	// (0x00060a5a) aid_height_cl_leading

0x669f,	// (0x00060a66) aid_height_cl_text_ParamLimits

0x669f,	// (0x00060a66) aid_height_cl_text

0xaeb7,	// (0x0006527e) bg_cl_header_pane_ParamLimits

0xaeb7,	// (0x0006527e) bg_cl_header_pane

0x66b7,	// (0x00060a7e) cl_header_pane_g1_ParamLimits

0x66b7,	// (0x00060a7e) cl_header_pane_g1

0x66c4,	// (0x00060a8b) cl_header_pane_t1_ParamLimits

0x66c4,	// (0x00060a8b) cl_header_pane_t1

0xe078,	// (0x0006843f) cl_list_pane

0xdcd1,	// (0x00068098) hc_scroll_pane_cp01

0xb322,	// (0x000656e9) bg_cl_header_pane_g1

0xdb90,	// (0x00067f57) bg_cl_header_pane_g2

0xb342,	// (0x00065709) bg_cl_header_pane_g3

0xdba0,	// (0x00067f67) bg_cl_header_pane_g4

0xdb98,	// (0x00067f5f) bg_cl_header_pane_g5

0xddfd,	// (0x000681c4) bg_cl_header_pane_g6

0xdbb8,	// (0x00067f7f) bg_cl_header_pane_g7

0xdbc0,	// (0x00067f87) bg_cl_header_pane_g8

0xdbb0,	// (0x00067f77) bg_cl_header_pane_g9

0x0008,

0x0940,	// (0x0005ad07) bg_cl_header_pane_g

0x66d6,	// (0x00060a9d) hc_cl_list_double_graphic_heading_pane_ParamLimits

0x66d6,	// (0x00060a9d) hc_cl_list_double_graphic_heading_pane

0x66ea,	// (0x00060ab1) hc_cl_list_single_graphic_pane_ParamLimits

0x66ea,	// (0x00060ab1) hc_cl_list_single_graphic_pane

0x6704,	// (0x00060acb) hc_cl_list_single_graphic_pane_g1_ParamLimits

0x6704,	// (0x00060acb) hc_cl_list_single_graphic_pane_g1

0x6710,	// (0x00060ad7) hc_cl_list_single_graphic_pane_g2_ParamLimits

0x6710,	// (0x00060ad7) hc_cl_list_single_graphic_pane_g2

0x0001,

0xf6ce,	// (0x00069a95) hc_cl_list_single_graphic_pane_g_ParamLimits

0xf6ce,	// (0x00069a95) hc_cl_list_single_graphic_pane_g

0x6724,	// (0x00060aeb) hc_cl_list_single_graphic_pane_t1_ParamLimits

0x6724,	// (0x00060aeb) hc_cl_list_single_graphic_pane_t1

0x6704,	// (0x00060acb) hc_cl_list_double_graphic_heading_pane_g1_ParamLimits

0x6704,	// (0x00060acb) hc_cl_list_double_graphic_heading_pane_g1

0x6739,	// (0x00060b00) hc_cl_list_double_graphic_heading_pane_g2_ParamLimits

0x6739,	// (0x00060b00) hc_cl_list_double_graphic_heading_pane_g2

0x674d,	// (0x00060b14) hc_cl_list_double_graphic_heading_pane_g3_ParamLimits

0x674d,	// (0x00060b14) hc_cl_list_double_graphic_heading_pane_g3

0x0002,

0xf6d3,	// (0x00069a9a) hc_cl_list_double_graphic_heading_pane_g_ParamLimits

0xf6d3,	// (0x00069a9a) hc_cl_list_double_graphic_heading_pane_g

0x6761,	// (0x00060b28) hc_cl_list_double_graphic_heading_pane_t1_ParamLimits

0x6761,	// (0x00060b28) hc_cl_list_double_graphic_heading_pane_t1

0x6776,	// (0x00060b3d) hc_cl_list_double_graphic_heading_pane_t2_ParamLimits

0x6776,	// (0x00060b3d) hc_cl_list_double_graphic_heading_pane_t2

0x0001,

0xf6da,	// (0x00069aa1) hc_cl_list_double_graphic_heading_pane_t_ParamLimits

0xf6da,	// (0x00069aa1) hc_cl_list_double_graphic_heading_pane_t

0x6793,	// (0x00060b5a) vid4_progress_pane_g1

0x67a3,	// (0x00060b6a) vid4_progress_pane_g2

0x67b3,	// (0x00060b7a) vid4_progress_pane_g3

0x67c5,	// (0x00060b8c) vid4_progress_pane_g4

0x0004,

0xf6df,	// (0x00069aa6) vid4_progress_pane_g

0x67dd,	// (0x00060ba4) vid4_progress_pane_t1

0x67f3,	// (0x00060bba) vid4_progress_pane_t2

0x0002,

0xf6ea,	// (0x00069ab1) vid4_progress_pane_t

0x681e,	// (0x00060be5) wait_bar_pane_cp07

0xd0db,	// (0x000674a2) blid_firmament_pane_ParamLimits

0xd11e,	// (0x000674e5) popup_blid_sat_info2_window_g1

0xd142,	// (0x00067509) popup_blid_sat_info2_window_t3

0xd150,	// (0x00067517) popup_blid_sat_info2_window_t4

0xd15e,	// (0x00067525) popup_blid_sat_info2_window_t5

0xd16c,	// (0x00067533) popup_blid_sat_info2_window_t6

0xd17c,	// (0x00067543) popup_blid_sat_info2_window_t7

0xd18a,	// (0x00067551) popup_blid_sat_info2_window_t8

0xd198,	// (0x0006755f) popup_blid_sat_info2_window_t9

0xd1a6,	// (0x0006756d) popup_blid_sat_info2_window_t10

0xd267,	// (0x0006762e) aid_firma_cardinal_ParamLimits

0xd27b,	// (0x00067642) blid_firmament_pane_t1_ParamLimits

0xd292,	// (0x00067659) blid_firmament_pane_t2_ParamLimits

0xd2a9,	// (0x00067670) blid_firmament_pane_t3_ParamLimits

0xd2c0,	// (0x00067687) blid_firmament_pane_t4_ParamLimits

0x058d,	// (0x0005a954) blid_firmament_pane_t_ParamLimits

0xd2d7,	// (0x0006769e) blid_sat_info_pane_ParamLimits

0x3d61,	// (0x0005e128) main_cam_set_pane_ParamLimits

0x4c0b,	// (0x0005efd2) aid_size_cell_colour_35_ParamLimits

0x4c25,	// (0x0005efec) aid_size_cell_colour_112_ParamLimits

0x4c3c,	// (0x0005f003) aid_size_cell_effect_ParamLimits

0xa7e5,	// (0x00064bac) bg_tb_trans_pane_cp02_ParamLimits

0xb696,	// (0x00065a5d) heading_imed_pane_ParamLimits

0x4c56,	// (0x0005f01d) listscroll_imed_pane_ParamLimits

0xc58e,	// (0x00066955) popup_call2_audio_first_window_g5_ParamLimits

0xc58e,	// (0x00066955) popup_call2_audio_first_window_g5

0x5287,	// (0x0005f64e) aid_size_touch_image3_arrow_left_ParamLimits

0x5287,	// (0x0005f64e) aid_size_touch_image3_arrow_left

0x529d,	// (0x0005f664) aid_size_touch_image3_arrow_right_ParamLimits

0x529d,	// (0x0005f664) aid_size_touch_image3_arrow_right

0x6808,	// (0x00060bcf) vid4_progress_pane_t3

0x4dd8,	// (0x0005f19f) main_hwr_training_symbol_option_pane_ParamLimits

0x4dd8,	// (0x0005f19f) main_hwr_training_symbol_option_pane

0xd9fa,	// (0x00067dc1) popup_hwr_training_preview_window_ParamLimits

0xd9fa,	// (0x00067dc1) popup_hwr_training_preview_window

0x4e39,	// (0x0005f200) hwr_training_navi_pane_g5_ParamLimits

0x4e39,	// (0x0005f200) hwr_training_navi_pane_g5

0xdb7e,	// (0x00067f45) popup_char_count_window

0x116f,	// (0x0005b536) bg_popup_sub_pane_cp20_ParamLimits

0x6194,	// (0x0006055b) list_vitu2_match_list_pane_ParamLimits

0x61a0,	// (0x00060567) vitu2_page_scroll_pane_ParamLimits

0x61a0,	// (0x00060567) vitu2_page_scroll_pane

0xe081,	// (0x00068448) list_single_hwr_training_symbol_option_pane_ParamLimits

0xe081,	// (0x00068448) list_single_hwr_training_symbol_option_pane

0xe094,	// (0x0006845b) list_single_hwr_training_symbol_option_pane_g1

0xe09c,	// (0x00068463) list_single_hwr_training_symbol_option_pane_t1

0xe0aa,	// (0x00068471) bg_button_pane_cp023

0xe0b3,	// (0x0006847a) bg_button_pane_cp024

0xe0e6,	// (0x000684ad) vitu2_page_scroll_pane_g1

0xe0ee,	// (0x000684b5) vitu2_page_scroll_pane_g2

0x0001,

0x0976,	// (0x0005ad3d) vitu2_page_scroll_pane_g

0xe0f6,	// (0x000684bd) vitu2_page_scroll_pane_t1

0xb097,	// (0x0006545e) popup_char_count_window_g1

0xe105,	// (0x000684cc) popup_char_count_window_g2

0xdc9b,	// (0x00068062) popup_char_count_window_g3

0x0002,

0xf6f1,	// (0x00069ab8) popup_char_count_window_g

0xe10e,	// (0x000684d5) popup_char_count_window_t1

0x1189,	// (0x0005b550) main_vded2_pane

0xd7ad,	// (0x00067b74) aid_size_cell_imed_line

0xd7b7,	// (0x00067b7e) grid_imed_line_width_pane

0x57a5,	// (0x0005fb6c) vid4_indicators_pane_g4

0xe11c,	// (0x000684e3) cell_imed_line_width_pane_ParamLimits

0xe11c,	// (0x000684e3) cell_imed_line_width_pane

0xe130,	// (0x000684f7) cell_imed_line_width_pane_g1

0xe139,	// (0x00068500) cell_imed_line_width_pane_g2

0x0001,

0x0982,	// (0x0005ad49) cell_imed_line_width_pane_g

0x6843,	// (0x00060c0a) main_vded2_pane_g1_ParamLimits

0x6843,	// (0x00060c0a) main_vded2_pane_g1

0x6850,	// (0x00060c17) main_vded2_pane_g2_ParamLimits

0x6850,	// (0x00060c17) main_vded2_pane_g2

0x0001,

0xf6f8,	// (0x00069abf) main_vded2_pane_g_ParamLimits

0xf6f8,	// (0x00069abf) main_vded2_pane_g

0x685e,	// (0x00060c25) vded2_slider_pane_ParamLimits

0x685e,	// (0x00060c25) vded2_slider_pane

0x686b,	// (0x00060c32) aid_size_touch_vded2_end

0x6875,	// (0x00060c3c) aid_size_touch_vded2_playhead

0xe141,	// (0x00068508) aid_size_touch_vded2_start

0xe149,	// (0x00068510) vded2_slider_bg_pane

0xe152,	// (0x00068519) vded2_slider_pane_g1

0xe15b,	// (0x00068522) vded2_slider_pane_g2

0x687d,	// (0x00060c44) vded2_slider_pane_g3

0x0002,

0xf6fd,	// (0x00069ac4) vded2_slider_pane_g

0xe163,	// (0x0006852a) vded2_slider_bg_pane_g1

0xe16c,	// (0x00068533) vded2_slider_bg_pane_g2

0xe175,	// (0x0006853c) vded2_slider_bg_pane_g3

0x0002,

0x0993,	// (0x0005ad5a) vded2_slider_bg_pane_g

0x35fd,	// (0x0005d9c4) aid_postcard_touch_down_pane_ParamLimits

0x35fd,	// (0x0005d9c4) aid_postcard_touch_down_pane

0x360d,	// (0x0005d9d4) aid_postcard_touch_up_pane_ParamLimits

0x360d,	// (0x0005d9d4) aid_postcard_touch_up_pane

0x1189,	// (0x0005b550) main_blid2_pane

0x3d8a,	// (0x0005e151) popup_blid2_search_window

0xa7a8,	// (0x00064b6f) blid2_gps_pane

0xa7a8,	// (0x00064b6f) blid2_navig_pane

0xa7a8,	// (0x00064b6f) blid2_search_pane

0xa7a8,	// (0x00064b6f) blid2_tripm_pane

0x6886,	// (0x00060c4d) blid2_search_pane_g1_ParamLimits

0x6886,	// (0x00060c4d) blid2_search_pane_g1

0x6896,	// (0x00060c5d) blid2_search_pane_t1_ParamLimits

0x6896,	// (0x00060c5d) blid2_search_pane_t1

0x68a8,	// (0x00060c6f) aid_size_cell_blid2_gps_ParamLimits

0x68a8,	// (0x00060c6f) aid_size_cell_blid2_gps

0x68b8,	// (0x00060c7f) blid2_gps_pane_g1_ParamLimits

0x68b8,	// (0x00060c7f) blid2_gps_pane_g1

0x68c4,	// (0x00060c8b) grid_blid2_satellite_pane_ParamLimits

0x68c4,	// (0x00060c8b) grid_blid2_satellite_pane

0x68d4,	// (0x00060c9b) blid2_navig_pane_g1_ParamLimits

0x68d4,	// (0x00060c9b) blid2_navig_pane_g1

0x68e0,	// (0x00060ca7) blid2_navig_pane_t1_ParamLimits

0x68e0,	// (0x00060ca7) blid2_navig_pane_t1

0x68f2,	// (0x00060cb9) blid2_navig_pane_t2_ParamLimits

0x68f2,	// (0x00060cb9) blid2_navig_pane_t2

0x0001,

0xf704,	// (0x00069acb) blid2_navig_pane_t_ParamLimits

0xf704,	// (0x00069acb) blid2_navig_pane_t

0x6904,	// (0x00060ccb) blid2_navig_ring_pane_ParamLimits

0x6904,	// (0x00060ccb) blid2_navig_ring_pane

0x6914,	// (0x00060cdb) blid2_speed_pane_ParamLimits

0x6914,	// (0x00060cdb) blid2_speed_pane

0x6920,	// (0x00060ce7) blid2_tripm_pane_g1_ParamLimits

0x6920,	// (0x00060ce7) blid2_tripm_pane_g1

0x6930,	// (0x00060cf7) blid2_tripm_pane_g2_ParamLimits

0x6930,	// (0x00060cf7) blid2_tripm_pane_g2

0x693c,	// (0x00060d03) blid2_tripm_pane_g3_ParamLimits

0x693c,	// (0x00060d03) blid2_tripm_pane_g3

0x6948,	// (0x00060d0f) blid2_tripm_pane_g4_ParamLimits

0x6948,	// (0x00060d0f) blid2_tripm_pane_g4

0x6954,	// (0x00060d1b) blid2_tripm_pane_g5_ParamLimits

0x6954,	// (0x00060d1b) blid2_tripm_pane_g5

0x0005,

0xf709,	// (0x00069ad0) blid2_tripm_pane_g_ParamLimits

0xf709,	// (0x00069ad0) blid2_tripm_pane_g

0x6970,	// (0x00060d37) blid2_tripm_pane_t1_ParamLimits

0x6970,	// (0x00060d37) blid2_tripm_pane_t1

0x6984,	// (0x00060d4b) blid2_tripm_pane_t2_ParamLimits

0x6984,	// (0x00060d4b) blid2_tripm_pane_t2

0x6996,	// (0x00060d5d) blid2_tripm_pane_t3_ParamLimits

0x6996,	// (0x00060d5d) blid2_tripm_pane_t3

0x0003,

0xf716,	// (0x00069add) blid2_tripm_pane_t_ParamLimits

0xf716,	// (0x00069add) blid2_tripm_pane_t

0x69c8,	// (0x00060d8f) cell_blid2_satellite_pane_ParamLimits

0x69c8,	// (0x00060d8f) cell_blid2_satellite_pane

0x69e2,	// (0x00060da9) cell_blid2_satellite_pane_g1

0xe188,	// (0x0006854f) cell_blid2_satellite_pane_t1

0xb131,	// (0x000654f8) blid2_speed_pane_g1

0xe196,	// (0x0006855d) blid2_speed_pane_t1

0xe1a4,	// (0x0006856b) blid2_speed_pane_t2

0x0001,

0xf71f,	// (0x00069ae6) blid2_speed_pane_t

0xb131,	// (0x000654f8) blid2_navig_ring_pane_g1

0x69eb,	// (0x00060db2) blid2_navig_ring_pane_g2

0x69f3,	// (0x00060dba) blid2_navig_ring_pane_g3

0x69fb,	// (0x00060dc2) blid2_navig_ring_pane_g4

0x6a03,	// (0x00060dca) blid2_navig_ring_pane_g5

0x0004,

0xf724,	// (0x00069aeb) blid2_navig_ring_pane_g

0xa7a8,	// (0x00064b6f) bg_popup_window_pane_cp011

0xe1b2,	// (0x00068579) popup_blid2_search_window_g1

0xe1ba,	// (0x00068581) popup_blid2_search_window_t1

0xe1c8,	// (0x0006858f) popup_blid2_search_window_t2

0x0001,

0xf72f,	// (0x00069af6) popup_blid2_search_window_t

0xb231,	// (0x000655f8) main_browser_pane_g1

0xaf37,	// (0x000652fe) main_browser_pane_ParamLimits

0x3d61,	// (0x0005e128) bg_button_pane_cp011_ParamLimits

0x5a49,	// (0x0005fe10) cell_vitu2_function_pane_g1_ParamLimits

0xbc6e,	// (0x00066035) bg_popup_sub_pane_cp22_ParamLimits

0x6332,	// (0x000606f9) input_focus_pane_cp08_ParamLimits

0x634d,	// (0x00060714) popup_vitu2_query_button_pane_ParamLimits

0x634d,	// (0x00060714) popup_vitu2_query_button_pane

0x635c,	// (0x00060723) popup_vitu2_query_input_button_pane

0xde38,	// (0x000681ff) popup_vitu2_query_window_g1_ParamLimits

0x6366,	// (0x0006072d) popup_vitu2_query_window_g2_ParamLimits

0xf676,	// (0x00069a3d) popup_vitu2_query_window_g_ParamLimits

0xa7a8,	// (0x00064b6f) bg_button_pane_cp026

0x6a0b,	// (0x00060dd2) popup_vitu2_query_input_button_pane_g1

0xa7a8,	// (0x00064b6f) bg_button_pane_cp025

0xe1d6,	// (0x0006859d) popup_vitu2_query_button_pane_t1

0x425d,	// (0x0005e624) main_mp3_pane_t6

0x426d,	// (0x0005e634) popup_slider_window_cp01

0x568a,	// (0x0005fa51) cam4_battery_pane

0x5764,	// (0x0005fb2b) cam4_battery_pane_cp02

0x678b,	// (0x00060b52) cam4_battery_pane_cp01

0x678b,	// (0x00060b52) cam4_battery_pane_cp03

0xe17e,	// (0x00068545) cam4_battery_pane_g1

0xb131,	// (0x000654f8) cam4_battery_pane_g2

0x0001,

0xf734,	// (0x00069afb) cam4_battery_pane_g

0xd1b4,	// (0x0006757b) popup_blid_sat_info2_window_t11

0xb983,	// (0x00065d4a) aid_size_touch_mv_arrow_left_ParamLimits

0xb9ae,	// (0x00065d75) aid_size_touch_mv_arrow_right_ParamLimits

0xba0c,	// (0x00065dd3) navi_pane_g1_ParamLimits

0xba18,	// (0x00065ddf) navi_pane_g2_ParamLimits

0xba46,	// (0x00065e0d) navi_pane_g3_ParamLimits

0x028e,	// (0x0005a655) navi_pane_g_ParamLimits

0x3245,	// (0x0005d60c) navi_pane_mv_t1_ParamLimits

0x4c62,	// (0x0005f029) grid_imed_effect_pane_ParamLimits

0x1cdf,	// (0x0005c0a6) aid_placing_vt_slider_lsc

0xb180,	// (0x00065547) aid_placing_vt_slider_prt

0xa7e5,	// (0x00064bac) bg_tb_trans_pane_cp01_ParamLimits

0xd460,	// (0x00067827) popup_image_details_window_g1_ParamLimits

0xd473,	// (0x0006783a) popup_image_details_window_g2_ParamLimits

0xd488,	// (0x0006784f) popup_image_details_window_g3_ParamLimits

0xd488,	// (0x0006784f) popup_image_details_window_g3

0x05cd,	// (0x0005a994) popup_image_details_window_g_ParamLimits

0xd49c,	// (0x00067863) popup_image_details_window_t1_ParamLimits

0xd4ae,	// (0x00067875) popup_image_details_window_t2_ParamLimits

0xd4c7,	// (0x0006788e) popup_image_details_window_t3_ParamLimits

0xd4db,	// (0x000678a2) popup_image_details_window_t4_ParamLimits

0xd4f6,	// (0x000678bd) popup_image_details_window_t5_ParamLimits

0x05d4,	// (0x0005a99b) popup_image_details_window_t_ParamLimits

0x66ab,	// (0x00060a72) cl_header_name_pane_ParamLimits

0x66ab,	// (0x00060a72) cl_header_name_pane

0x6a13,	// (0x00060dda) cl_header_name_pane_t1_ParamLimits

0x6a13,	// (0x00060dda) cl_header_name_pane_t1

0x6a2a,	// (0x00060df1) cl_header_name_pane_t2_ParamLimits

0x6a2a,	// (0x00060df1) cl_header_name_pane_t2

0x6a54,	// (0x00060e1b) cl_header_name_pane_t3_ParamLimits

0x6a54,	// (0x00060e1b) cl_header_name_pane_t3

0x0002,

0xf739,	// (0x00069b00) cl_header_name_pane_t_ParamLimits

0xf739,	// (0x00069b00) cl_header_name_pane_t

0xbad5,	// (0x00065e9c) navi_pane_mv_g2_ParamLimits

0xdb66,	// (0x00067f2d) field_vitu2_entry_pane_g1_ParamLimits

0xdb72,	// (0x00067f39) field_vitu2_entry_pane_g2_ParamLimits

0xbc07,	// (0x00065fce) field_vitu2_entry_pane_g3_ParamLimits

0xbc07,	// (0x00065fce) field_vitu2_entry_pane_g3

0xf5ca,	// (0x00069991) field_vitu2_entry_pane_g_ParamLimits

0x59d7,	// (0x0005fd9e) cell_vitu2_itu_pane_g1_ParamLimits

0x59ef,	// (0x0005fdb6) cell_vitu2_itu_pane_g2_ParamLimits

0x59ef,	// (0x0005fdb6) cell_vitu2_itu_pane_g2

0x0001,

0xf5d6,	// (0x0006999d) cell_vitu2_itu_pane_g_ParamLimits

0xf5d6,	// (0x0006999d) cell_vitu2_itu_pane_g

0x3d61,	// (0x0005e128) bg_vkb2_func_pane_cp05_ParamLimits

0x3d61,	// (0x0005e128) bg_vkb2_func_pane_cp05

0x3d61,	// (0x0005e128) bg_vkb2_func_pane_cp03

0x3d61,	// (0x0005e128) bg_vkb2_func_pane_cp04

0x3d61,	// (0x0005e128) bg_vkb2_func_pane_cp10_ParamLimits

0x3d61,	// (0x0005e128) bg_vkb2_func_pane_cp10

0x664d,	// (0x00060a14) bg_vkb2_func_pane_cp08

0x631a,	// (0x000606e1) bg_vkb2_func_pane_cp06

0x6630,	// (0x000609f7) bg_vkb2_func_pane_cp07

0xe0bc,	// (0x00068483) bg_vkb2_func_pane_cp11_ParamLimits

0xe0bc,	// (0x00068483) bg_vkb2_func_pane_cp11

0xe0d1,	// (0x00068498) bg_vkb2_func_pane_cp12_ParamLimits

0xe0d1,	// (0x00068498) bg_vkb2_func_pane_cp12

0xa7a8,	// (0x00064b6f) bg_vkb2_func_pane_cp09

0xdb90,	// (0x00067f57) bg_vkb2_func_pane_g1

0xb342,	// (0x00065709) bg_vkb2_func_pane_g2

0xdb98,	// (0x00067f5f) bg_vkb2_func_pane_g3

0xdba0,	// (0x00067f67) bg_vkb2_func_pane_g4

0xddfd,	// (0x000681c4) bg_vkb2_func_pane_g5

0xdbb8,	// (0x00067f7f) bg_vkb2_func_pane_g6

0xdbc0,	// (0x00067f87) bg_vkb2_func_pane_g7

0xdbb0,	// (0x00067f77) bg_vkb2_func_pane_g8

0xb322,	// (0x000656e9) bg_vkb2_func_pane_g9

0x0008,

0x09d6,	// (0x0005ad9d) bg_vkb2_func_pane_g

0x6962,	// (0x00060d29) blid2_tripm_pane_g6_ParamLimits

0x6962,	// (0x00060d29) blid2_tripm_pane_g6

0xdab8,	// (0x00067e7f) mp4_progress_pane_g1

0x69bc,	// (0x00060d83) blid2_tripm_values_pane_ParamLimits

0x69bc,	// (0x00060d83) blid2_tripm_values_pane

0x6a79,	// (0x00060e40) blid2_tripm_values_pane_t1

0x6a87,	// (0x00060e4e) blid2_tripm_values_pane_t2

0x6a95,	// (0x00060e5c) blid2_tripm_values_pane_t3

0x6aa3,	// (0x00060e6a) blid2_tripm_values_pane_t4

0x6ab1,	// (0x00060e78) blid2_tripm_values_pane_t5

0x6abf,	// (0x00060e86) blid2_tripm_values_pane_t6

0x6acd,	// (0x00060e94) blid2_tripm_values_pane_t7

0x6adb,	// (0x00060ea2) blid2_tripm_values_pane_t8

0x6ae9,	// (0x00060eb0) blid2_tripm_values_pane_t9

0x0008,

0xf740,	// (0x00069b07) blid2_tripm_values_pane_t

0x1d1f,	// (0x0005c0e6) call_video_pane_t1_ParamLimits

0x1d40,	// (0x0005c107) call_video_pane_t2_ParamLimits

0xf18a,	// (0x00069551) call_video_pane_t_ParamLimits

0x3547,	// (0x0005d90e) msg_header_pane_g1_ParamLimits

0xbcca,	// (0x00066091) msg_header_pane_g2_ParamLimits

0xbcca,	// (0x00066091) msg_header_pane_g2

0x0001,

0xf2e4,	// (0x000696ab) msg_header_pane_g_ParamLimits

0xf2e4,	// (0x000696ab) msg_header_pane_g

0xaf37,	// (0x000652fe) main_clock2_pane_ParamLimits

0x49dc,	// (0x0005eda3) grid_clock2_toolbar_pane_ParamLimits

0x49dc,	// (0x0005eda3) grid_clock2_toolbar_pane

0x49dc,	// (0x0005eda3) listscroll_clock2_pane_ParamLimits

0x49dc,	// (0x0005eda3) listscroll_clock2_pane

0x4a8c,	// (0x0005ee53) main_clock2_pane_t3_ParamLimits

0x4a8c,	// (0x0005ee53) main_clock2_pane_t3

0x4a9e,	// (0x0005ee65) main_clock2_pane_t4_ParamLimits

0x4a9e,	// (0x0005ee65) main_clock2_pane_t4

0xe1e4,	// (0x000685ab) cell_clock2_toolbar_pane

0xe1ec,	// (0x000685b3) cell_clock2_toolbar_pane_cp01

0xe1ec,	// (0x000685b3) cell_clock2_toolbar_pane_cp02

0xe1f4,	// (0x000685bb) cell_clock2_toolbar_pane_cp03

0xe1fc,	// (0x000685c3) list_clock2_pane

0xb908,	// (0x00065ccf) scroll_pane_cp10

0xe204,	// (0x000685cb) list_single_clock2_pane_ParamLimits

0xe204,	// (0x000685cb) list_single_clock2_pane

0xb0fb,	// (0x000654c2) list_highlight_pane_cp08

0xe211,	// (0x000685d8) list_single_clock2_pane_t1

0xe21f,	// (0x000685e6) list_single_clock2_pane_t2

0x0001,

0xf753,	// (0x00069b1a) list_single_clock2_pane_t

0xa7a8,	// (0x00064b6f) bg_button_pane_cp10

0xe22d,	// (0x000685f4) cell_clock2_toolbar_pane_g1

0x356b,	// (0x0005d932) aid_main_viewer_pane_g1_ParamLimits

0x356b,	// (0x0005d932) aid_main_viewer_pane_g1

0x3577,	// (0x0005d93e) aid_main_viewer_pane_g2_ParamLimits

0x3577,	// (0x0005d93e) aid_main_viewer_pane_g2

0x3583,	// (0x0005d94a) aid_main_viewer_pane_g3_ParamLimits

0x3583,	// (0x0005d94a) aid_main_viewer_pane_g3

0x3594,	// (0x0005d95b) aid_main_viewer_pane_g4_ParamLimits

0x3594,	// (0x0005d95b) aid_main_viewer_pane_g4

0x0003,

0xf2f5,	// (0x000696bc) aid_main_viewer_pane_g_ParamLimits

0xf2f5,	// (0x000696bc) aid_main_viewer_pane_g

0x3d54,	// (0x0005e11b) main_calc_pane_ParamLimits

0x3d6f,	// (0x0005e136) main_dialer2_pane_ParamLimits

0x1189,	// (0x0005b550) main_cam6_pane

0x1189,	// (0x0005b550) main_vid6_pane

0x49e8,	// (0x0005edaf) listscroll_gen_pane_cp06_ParamLimits

0x49e8,	// (0x0005edaf) listscroll_gen_pane_cp06

0x4ab0,	// (0x0005ee77) main_clock2_pane_t5_ParamLimits

0x4ab0,	// (0x0005ee77) main_clock2_pane_t5

0x4afd,	// (0x0005eec4) aid_call2_pane_cp10_ParamLimits

0x4b0f,	// (0x0005eed6) aid_call_pane_cp10_ParamLimits

0xb977,	// (0x00065d3e) popup_clock_analogue_window_cp10_g1_ParamLimits

0xb977,	// (0x00065d3e) popup_clock_analogue_window_cp10_g2_ParamLimits

0x4b21,	// (0x0005eee8) popup_clock_analogue_window_cp10_g3_ParamLimits

0x4b21,	// (0x0005eee8) popup_clock_analogue_window_cp10_g4_ParamLimits

0xb977,	// (0x00065d3e) popup_clock_analogue_window_cp10_g5_ParamLimits

0xf4cd,	// (0x00069894) popup_clock_analogue_window_cp10_g_ParamLimits

0x4b37,	// (0x0005eefe) popup_clock_analogue_window_cp10_t1_ParamLimits

0x5234,	// (0x0005f5fb) cell_dialer2_keypad_pane_g2_ParamLimits

0x5234,	// (0x0005f5fb) cell_dialer2_keypad_pane_g2

0x0001,

0xf569,	// (0x00069930) cell_dialer2_keypad_pane_g_ParamLimits

0xf569,	// (0x00069930) cell_dialer2_keypad_pane_g

0x5250,	// (0x0005f617) cell_dialer2_keypad_pane_t1

0x5d13,	// (0x000600da) main_cset_text2_pane_ParamLimits

0x5d13,	// (0x000600da) main_cset_text2_pane

0xe024,	// (0x000683eb) area_vitu2_query_pane_g1_ParamLimits

0x65cf,	// (0x00060996) area_vitu2_query_pane_g2_ParamLimits

0xf6ba,	// (0x00069a81) area_vitu2_query_pane_g_ParamLimits

0xa455,	// (0x0006481c) area_vitu2_query_pane_t7_ParamLimits

0xa455,	// (0x0006481c) area_vitu2_query_pane_t7

0x631a,	// (0x000606e1) bg_button_pane_cp018_ParamLimits

0x6630,	// (0x000609f7) bg_button_pane_cp021_ParamLimits

0x663c,	// (0x00060a03) bg_button_pane_cp022_ParamLimits

0x664d,	// (0x00060a14) bg_vkb2_func_pane_cp08_ParamLimits

0x631a,	// (0x000606e1) bg_vkb2_func_pane_cp06_ParamLimits

0x6630,	// (0x000609f7) bg_vkb2_func_pane_cp07_ParamLimits

0x665f,	// (0x00060a26) input_focus_pane_cp09_ParamLimits

0x6af7,	// (0x00060ebe) cam6_autofocus_pane_ParamLimits

0x6af7,	// (0x00060ebe) cam6_autofocus_pane

0x6b13,	// (0x00060eda) cam6_image_uncrop_pane_ParamLimits

0x6b13,	// (0x00060eda) cam6_image_uncrop_pane

0x6b4c,	// (0x00060f13) cam6_indi_pane_ParamLimits

0x6b4c,	// (0x00060f13) cam6_indi_pane

0x6b66,	// (0x00060f2d) cam6_mode_pane_ParamLimits

0x6b66,	// (0x00060f2d) cam6_mode_pane

0x6b7a,	// (0x00060f41) cam6_timer_pane_ParamLimits

0x6b7a,	// (0x00060f41) cam6_timer_pane

0x6b8e,	// (0x00060f55) cam6_zoom_pane_ParamLimits

0x6b8e,	// (0x00060f55) cam6_zoom_pane

0x6ba9,	// (0x00060f70) cam6_mode_pane_g1_ParamLimits

0x6ba9,	// (0x00060f70) cam6_mode_pane_g1

0x6bb5,	// (0x00060f7c) cam6_mode_pane_g2_ParamLimits

0x6bb5,	// (0x00060f7c) cam6_mode_pane_g2

0x6bc1,	// (0x00060f88) cam6_mode_pane_g3_ParamLimits

0x6bc1,	// (0x00060f88) cam6_mode_pane_g3

0x6bcd,	// (0x00060f94) cam6_mode_pane_g4_ParamLimits

0x6bcd,	// (0x00060f94) cam6_mode_pane_g4

0x0003,

0xf758,	// (0x00069b1f) cam6_mode_pane_g_ParamLimits

0xf758,	// (0x00069b1f) cam6_mode_pane_g

0xd3e8,	// (0x000677af) bg_tb_trans_pane_cp08_ParamLimits

0xd3e8,	// (0x000677af) bg_tb_trans_pane_cp08

0xe235,	// (0x000685fc) cam6_battery_pane_ParamLimits

0xe235,	// (0x000685fc) cam6_battery_pane

0xe24b,	// (0x00068612) cam6_indi_pane_g1_ParamLimits

0xe24b,	// (0x00068612) cam6_indi_pane_g1

0xe25d,	// (0x00068624) cam6_indi_pane_g2_ParamLimits

0xe25d,	// (0x00068624) cam6_indi_pane_g2

0xe26f,	// (0x00068636) cam6_indi_pane_g3_ParamLimits

0xe26f,	// (0x00068636) cam6_indi_pane_g3

0x0002,

0xf761,	// (0x00069b28) cam6_indi_pane_g_ParamLimits

0xf761,	// (0x00069b28) cam6_indi_pane_g

0xe281,	// (0x00068648) cam6_indi_pane_t1_ParamLimits

0xe281,	// (0x00068648) cam6_indi_pane_t1

0x57e0,	// (0x0005fba7) cam6_autofocus_pane_g1

0x57d8,	// (0x0005fb9f) cam6_autofocus_pane_g2

0x57f0,	// (0x0005fbb7) cam6_autofocus_pane_g3

0x57e8,	// (0x0005fbaf) cam6_autofocus_pane_g4

0x0003,

0xf768,	// (0x00069b2f) cam6_autofocus_pane_g

0xe2a7,	// (0x0006866e) cam6_timer_pane_g1

0xe2af,	// (0x00068676) cam6_timer_pane_t1

0xe2bd,	// (0x00068684) cam6_zoom_cont_pane

0xe2c5,	// (0x0006868c) cam6_zoom_pane_g1

0xe2ce,	// (0x00068695) cam6_zoom_pane_g2

0x6bd9,	// (0x00060fa0) cam6_zoom_pane_g3

0x0002,

0xf771,	// (0x00069b38) cam6_zoom_pane_g

0xb131,	// (0x000654f8) cam6_battery_pane_g1

0xb131,	// (0x000654f8) cam6_battery_pane_g2

0x0001,

0x02f2,	// (0x0005a6b9) cam6_battery_pane_g

0xe2c5,	// (0x0006868c) cam6_zoom_cont_pane_g1

0xe2ce,	// (0x00068695) cam6_zoom_cont_pane_g2

0xe2d7,	// (0x0006869e) cam6_zoom_cont_pane_g3

0x0002,

0xf778,	// (0x00069b3f) cam6_zoom_cont_pane_g

0x6bf7,	// (0x00060fbe) cam6_mode_pane_cp_ParamLimits

0x6bf7,	// (0x00060fbe) cam6_mode_pane_cp

0x6c0b,	// (0x00060fd2) cam6_zoom_pane_cp_ParamLimits

0x6c0b,	// (0x00060fd2) cam6_zoom_pane_cp

0x6c23,	// (0x00060fea) vid6_image_uncrop_cif_pane_ParamLimits

0x6c23,	// (0x00060fea) vid6_image_uncrop_cif_pane

0x6c4f,	// (0x00061016) vid6_image_uncrop_nhd_pane_ParamLimits

0x6c4f,	// (0x00061016) vid6_image_uncrop_nhd_pane

0x6c6c,	// (0x00061033) vid6_image_uncrop_vga_pane_ParamLimits

0x6c6c,	// (0x00061033) vid6_image_uncrop_vga_pane

0x6c8b,	// (0x00061052) vid6_image_uncrop_wvga_pane_ParamLimits

0x6c8b,	// (0x00061052) vid6_image_uncrop_wvga_pane

0x6ca8,	// (0x0006106f) vid6_indi_pane_ParamLimits

0x6ca8,	// (0x0006106f) vid6_indi_pane

0xd3e8,	// (0x000677af) bg_tb_trans_pane_cp09_ParamLimits

0xd3e8,	// (0x000677af) bg_tb_trans_pane_cp09

0xe2ef,	// (0x000686b6) cam6_battery_pane_cp_ParamLimits

0xe2ef,	// (0x000686b6) cam6_battery_pane_cp

0xe2fb,	// (0x000686c2) vid6_indi_pane_g1_ParamLimits

0xe2fb,	// (0x000686c2) vid6_indi_pane_g1

0xe30d,	// (0x000686d4) vid6_indi_pane_g2_ParamLimits

0xe30d,	// (0x000686d4) vid6_indi_pane_g2

0xe31f,	// (0x000686e6) vid6_indi_pane_g3_ParamLimits

0xe31f,	// (0x000686e6) vid6_indi_pane_g3

0xe334,	// (0x000686fb) vid6_indi_pane_g4_ParamLimits

0xe334,	// (0x000686fb) vid6_indi_pane_g4

0xe349,	// (0x00068710) vid6_indi_pane_g5_ParamLimits

0xe349,	// (0x00068710) vid6_indi_pane_g5

0x0004,

0xf77f,	// (0x00069b46) vid6_indi_pane_g_ParamLimits

0xf77f,	// (0x00069b46) vid6_indi_pane_g

0xe363,	// (0x0006872a) vid6_indi_pane_t1_ParamLimits

0xe363,	// (0x0006872a) vid6_indi_pane_t1

0xe379,	// (0x00068740) vid6_indi_pane_t2_ParamLimits

0xe379,	// (0x00068740) vid6_indi_pane_t2

0xe3a1,	// (0x00068768) vid6_indi_pane_t3_ParamLimits

0xe3a1,	// (0x00068768) vid6_indi_pane_t3

0xe3c9,	// (0x00068790) vid6_indi_pane_t4_ParamLimits

0xe3c9,	// (0x00068790) vid6_indi_pane_t4

0x0003,

0xf78a,	// (0x00069b51) vid6_indi_pane_t_ParamLimits

0xf78a,	// (0x00069b51) vid6_indi_pane_t

0xe3ed,	// (0x000687b4) wait_bar_pane_cp08

0x6ccb,	// (0x00061092) main_cset_text2_pane_t1_ParamLimits

0x6ccb,	// (0x00061092) main_cset_text2_pane_t1

0x6be2,	// (0x00060fa9) listscroll_gen_pane_cp06_t1_ParamLimits

0x6be2,	// (0x00060fa9) listscroll_gen_pane_cp06_t1

0x1189,	// (0x0005b550) main_cam6_set_pane

0xec98,	// (0x0006905f) bg_tb_trans_pane_cp06_ParamLimits

0x5692,	// (0x0005fa59) cam4_indicators_pane_g1_ParamLimits

0x56a3,	// (0x0005fa6a) cam4_indicators_pane_g2_ParamLimits

0xf5a6,	// (0x0006996d) cam4_indicators_pane_g_ParamLimits

0x56bb,	// (0x0005fa82) cam4_indicators_pane_t1_ParamLimits

0x3d61,	// (0x0005e128) bg_tb_trans_pane_cp07_ParamLimits

0x576c,	// (0x0005fb33) vid4_indicators_pane_g1_ParamLimits

0x5780,	// (0x0005fb47) vid4_indicators_pane_g2_ParamLimits

0x5794,	// (0x0005fb5b) vid4_indicators_pane_g3_ParamLimits

0x57a5,	// (0x0005fb6c) vid4_indicators_pane_g4_ParamLimits

0xf5b8,	// (0x0006997f) vid4_indicators_pane_g_ParamLimits

0x57c1,	// (0x0005fb88) vid4_indicators_pane_t1_ParamLimits

0x6793,	// (0x00060b5a) vid4_progress_pane_g1_ParamLimits

0x67a3,	// (0x00060b6a) vid4_progress_pane_g2_ParamLimits

0x67b3,	// (0x00060b7a) vid4_progress_pane_g3_ParamLimits

0x67c5,	// (0x00060b8c) vid4_progress_pane_g4_ParamLimits

0xf6df,	// (0x00069aa6) vid4_progress_pane_g_ParamLimits

0x67dd,	// (0x00060ba4) vid4_progress_pane_t1_ParamLimits

0x67f3,	// (0x00060bba) vid4_progress_pane_t2_ParamLimits

0x6808,	// (0x00060bcf) vid4_progress_pane_t3_ParamLimits

0xf6ea,	// (0x00069ab1) vid4_progress_pane_t_ParamLimits

0x681e,	// (0x00060be5) wait_bar_pane_cp07_ParamLimits

0x6d02,	// (0x000610c9) main_cam6_set_pane_g2_ParamLimits

0x6d02,	// (0x000610c9) main_cam6_set_pane_g2

0x6d0e,	// (0x000610d5) main_cset6_listscroll_pane_ParamLimits

0x6d0e,	// (0x000610d5) main_cset6_listscroll_pane

0x6d39,	// (0x00061100) main_cset6_slider_pane_ParamLimits

0x6d39,	// (0x00061100) main_cset6_slider_pane

0x6d45,	// (0x0006110c) main_cset6_text2_pane_ParamLimits

0x6d45,	// (0x0006110c) main_cset6_text2_pane

0xe3fc,	// (0x000687c3) main_cset6_text_pane

0xe404,	// (0x000687cb) main_cset_list_pane_copy1_ParamLimits

0xe404,	// (0x000687cb) main_cset_list_pane_copy1

0xe414,	// (0x000687db) scroll_pane_cp028_copy1

0x6d58,	// (0x0006111f) cset_list_set_pane_copy1

0x6d6e,	// (0x00061135) aid_position_infowindow_above_copy1

0x6d76,	// (0x0006113d) aid_position_infowindow_below_copy1

0x6d7e,	// (0x00061145) cset_list_set_pane_g1_copy1

0x5ffa,	// (0x000603c1) cset_list_set_pane_g3_copy1_ParamLimits

0x5ffa,	// (0x000603c1) cset_list_set_pane_g3_copy1

0x6009,	// (0x000603d0) cset_list_set_pane_t1_copy1_ParamLimits

0x6009,	// (0x000603d0) cset_list_set_pane_t1_copy1

0xa7e5,	// (0x00064bac) list_highlight_pane_cp021_copy1_ParamLimits

0xa7e5,	// (0x00064bac) list_highlight_pane_cp021_copy1

0xe41d,	// (0x000687e4) cset6_slider_pane_ParamLimits

0xe41d,	// (0x000687e4) cset6_slider_pane

0xe449,	// (0x00068810) main_cset6_slider_pane_g1_ParamLimits

0xe449,	// (0x00068810) main_cset6_slider_pane_g1

0x6d86,	// (0x0006114d) main_cset6_slider_pane_g2_ParamLimits

0x6d86,	// (0x0006114d) main_cset6_slider_pane_g2

0xe471,	// (0x00068838) main_cset6_slider_pane_g3_ParamLimits

0xe471,	// (0x00068838) main_cset6_slider_pane_g3

0x6dae,	// (0x00061175) main_cset6_slider_pane_g4_ParamLimits

0x6dae,	// (0x00061175) main_cset6_slider_pane_g4

0x6dba,	// (0x00061181) main_cset6_slider_pane_g5_ParamLimits

0x6dba,	// (0x00061181) main_cset6_slider_pane_g5

0xdce6,	// (0x000680ad) main_cset6_slider_pane_g7_ParamLimits

0xdce6,	// (0x000680ad) main_cset6_slider_pane_g7

0xdcf2,	// (0x000680b9) main_cset6_slider_pane_g8_ParamLimits

0xdcf2,	// (0x000680b9) main_cset6_slider_pane_g8

0x6dc8,	// (0x0006118f) main_cset6_slider_pane_g9_ParamLimits

0x6dc8,	// (0x0006118f) main_cset6_slider_pane_g9

0x6dd4,	// (0x0006119b) main_cset6_slider_pane_g10_ParamLimits

0x6dd4,	// (0x0006119b) main_cset6_slider_pane_g10

0x6de0,	// (0x000611a7) main_cset6_slider_pane_g11_ParamLimits

0x6de0,	// (0x000611a7) main_cset6_slider_pane_g11

0x6dec,	// (0x000611b3) main_cset6_slider_pane_g12_ParamLimits

0x6dec,	// (0x000611b3) main_cset6_slider_pane_g12

0xdcfe,	// (0x000680c5) main_cset6_slider_pane_g13_ParamLimits

0xdcfe,	// (0x000680c5) main_cset6_slider_pane_g13

0xdd0a,	// (0x000680d1) main_cset6_slider_pane_g14_ParamLimits

0xdd0a,	// (0x000680d1) main_cset6_slider_pane_g14

0x6df8,	// (0x000611bf) main_cset6_slider_pane_g15_ParamLimits

0x6df8,	// (0x000611bf) main_cset6_slider_pane_g15

0x6e10,	// (0x000611d7) main_cset6_slider_pane_g16_ParamLimits

0x6e10,	// (0x000611d7) main_cset6_slider_pane_g16

0x6e1e,	// (0x000611e5) main_cset6_slider_pane_g17_ParamLimits

0x6e1e,	// (0x000611e5) main_cset6_slider_pane_g17

0x0011,

0xf793,	// (0x00069b5a) main_cset6_slider_pane_g_ParamLimits

0xf793,	// (0x00069b5a) main_cset6_slider_pane_g

0xe489,	// (0x00068850) main_cset6_slider_pane_t1_ParamLimits

0xe489,	// (0x00068850) main_cset6_slider_pane_t1

0x6e38,	// (0x000611ff) main_cset6_slider_pane_t2_ParamLimits

0x6e38,	// (0x000611ff) main_cset6_slider_pane_t2

0x6e63,	// (0x0006122a) main_cset6_slider_pane_t3_ParamLimits

0x6e63,	// (0x0006122a) main_cset6_slider_pane_t3

0x6e8e,	// (0x00061255) main_cset6_slider_pane_t4_ParamLimits

0x6e8e,	// (0x00061255) main_cset6_slider_pane_t4

0x6eb9,	// (0x00061280) main_cset6_slider_pane_t5_ParamLimits

0x6eb9,	// (0x00061280) main_cset6_slider_pane_t5

0xe4ca,	// (0x00068891) main_cset6_slider_pane_t7_ParamLimits

0xe4ca,	// (0x00068891) main_cset6_slider_pane_t7

0x6ee6,	// (0x000612ad) main_cset6_slider_pane_t8_ParamLimits

0x6ee6,	// (0x000612ad) main_cset6_slider_pane_t8

0x6f0a,	// (0x000612d1) main_cset6_slider_pane_t9_ParamLimits

0x6f0a,	// (0x000612d1) main_cset6_slider_pane_t9

0x6f2e,	// (0x000612f5) main_cset6_slider_pane_t10_ParamLimits

0x6f2e,	// (0x000612f5) main_cset6_slider_pane_t10

0x6f52,	// (0x00061319) main_cset6_slider_pane_t11_ParamLimits

0x6f52,	// (0x00061319) main_cset6_slider_pane_t11

0xe500,	// (0x000688c7) main_cset6_slider_pane_t14_ParamLimits

0xe500,	// (0x000688c7) main_cset6_slider_pane_t14

0xe539,	// (0x00068900) main_cset6_slider_pane_t15_ParamLimits

0xe539,	// (0x00068900) main_cset6_slider_pane_t15

0x000b,

0xf7b8,	// (0x00069b7f) main_cset6_slider_pane_t_ParamLimits

0xf7b8,	// (0x00069b7f) main_cset6_slider_pane_t

0xd9cf,	// (0x00067d96) cset_slider_pane_g1_copy1

0xe572,	// (0x00068939) cset_slider_pane_g2_copy1

0xe57b,	// (0x00068942) cset_slider_pane_g3_copy1

0xa7a8,	// (0x00064b6f) bg_popup_sub_pane_cp011_copy1

0xe58d,	// (0x00068954) main_cset_text_pane_g1_copy1

0xde4c,	// (0x00068213) main_cset_text_pane_t1_copy1

0xde5a,	// (0x00068221) main_cset_text_pane_t2_copy1

0xde68,	// (0x0006822f) main_cset_text_pane_t3_copy1

0xde76,	// (0x0006823d) main_cset_text_pane_t4_copy1

0xde84,	// (0x0006824b) main_cset_text_pane_t5_copy1

0xe595,	// (0x0006895c) main_cset_text_pane_t6_copy1

0xe5a3,	// (0x0006896a) main_cset_text_pane_t7_copy1

0x6f95,	// (0x0006135c) main_cset_text2_pane_t1_copy1

0x3d61,	// (0x0005e128) main_ncimui_pane

0x3dc0,	// (0x0005e187) popup_query_ncimui_window_ParamLimits

0x3dc0,	// (0x0005e187) popup_query_ncimui_window

0xa25a,	// (0x00064621) field_cale_ev2_pane_g4_ParamLimits

0xa25a,	// (0x00064621) field_cale_ev2_pane_g4

0x4f14,	// (0x0005f2db) cell_video_dialer_keypad_pane_g2_ParamLimits

0x4f14,	// (0x0005f2db) cell_video_dialer_keypad_pane_g2

0x0001,

0xf545,	// (0x0006990c) cell_video_dialer_keypad_pane_g_ParamLimits

0xf545,	// (0x0006990c) cell_video_dialer_keypad_pane_g

0x4f2c,	// (0x0005f2f3) cell_video_dialer_keypad_pane_t1

0xa7a8,	// (0x00064b6f) bg_popup_window_pane_cp012

0xce29,	// (0x000671f0) heading_pane_cp06

0xe5cf,	// (0x00068996) ncim_query_content_pane

0xa7a8,	// (0x00064b6f) bg_popup_heading_pane_cp01

0xe5d7,	// (0x0006899e) ncim_heading_pane_t1

0xe5e5,	// (0x000689ac) ncim_indicator_popup_pane

0xe5f7,	// (0x000689be) ncim_query_button_pane

0xe60b,	// (0x000689d2) ncim_query_content_pane_t1

0xe61d,	// (0x000689e4) ncim_query_content_pane_t2

0x0005,

0xf7ed,	// (0x00069bb4) ncim_query_content_pane_t

0xe657,	// (0x00068a1e) ncim_query_list_pane

0xe669,	// (0x00068a30) ncim_query_popup_pane

0xe5e5,	// (0x000689ac) ncim_indicator_popup_pane_ParamLimits

0x70e9,	// (0x000614b0) ncim_query_content_pane_g1_ParamLimits

0x70e9,	// (0x000614b0) ncim_query_content_pane_g1

0xe60b,	// (0x000689d2) ncim_query_content_pane_t1_ParamLimits

0xe61d,	// (0x000689e4) ncim_query_content_pane_t2_ParamLimits

0x70f5,	// (0x000614bc) ncim_query_content_pane_t3_ParamLimits

0x70f5,	// (0x000614bc) ncim_query_content_pane_t3

0x7112,	// (0x000614d9) ncim_query_content_pane_t4_ParamLimits

0x7112,	// (0x000614d9) ncim_query_content_pane_t4

0x712f,	// (0x000614f6) ncim_query_content_pane_t5_ParamLimits

0x712f,	// (0x000614f6) ncim_query_content_pane_t5

0xe62f,	// (0x000689f6) ncim_query_content_pane_t6_ParamLimits

0xe62f,	// (0x000689f6) ncim_query_content_pane_t6

0xf7ed,	// (0x00069bb4) ncim_query_content_pane_t_ParamLimits

0xe657,	// (0x00068a1e) ncim_query_list_pane_ParamLimits

0xe669,	// (0x00068a30) ncim_query_popup_pane_ParamLimits

0xe67d,	// (0x00068a44) wait_bar_pane_cp04

0xa7a8,	// (0x00064b6f) input_focus_pane_cp011

0xe685,	// (0x00068a4c) ncim_query_popup_pane_t1

0xe693,	// (0x00068a5a) ncim_list_query_list_pane_ParamLimits

0xe693,	// (0x00068a5a) ncim_list_query_list_pane

0xa7a8,	// (0x00064b6f) bg_button_pane_cp027

0xe6a0,	// (0x00068a67) ncim_query_button_pane_g1

0xa7a8,	// (0x00064b6f) list_highlight_pane_cp012

0xe6aa,	// (0x00068a71) ncim_list_query_list_pane_g1

0xe6b2,	// (0x00068a79) ncim_list_query_list_pane_t1

0x56af,	// (0x0005fa76) cam4_indicators_pane_g3_ParamLimits

0x56af,	// (0x0005fa76) cam4_indicators_pane_g3

0x57b1,	// (0x0005fb78) vid4_indicators_pane_g5_ParamLimits

0x57b1,	// (0x0005fb78) vid4_indicators_pane_g5

0x67d1,	// (0x00060b98) vid4_progress_pane_g5_ParamLimits

0x67d1,	// (0x00060b98) vid4_progress_pane_g5

0x6fd5,	// (0x0006139c) main_ncimui_pane_g1

0x703d,	// (0x00061404) ncimui_group_query_pane_ParamLimits

0x703d,	// (0x00061404) ncimui_group_query_pane

0x7085,	// (0x0006144c) ncimui_list_pane_ParamLimits

0x7085,	// (0x0006144c) ncimui_list_pane

0x70ac,	// (0x00061473) ncimui_text_pane_ParamLimits

0x70ac,	// (0x00061473) ncimui_text_pane

0x714c,	// (0x00061513) ncimui_text_pane_t1_ParamLimits

0x714c,	// (0x00061513) ncimui_text_pane_t1

0xe6c0,	// (0x00068a87) ncimui_list_single_graphic_pane_ParamLimits

0xe6c0,	// (0x00068a87) ncimui_list_single_graphic_pane

0x716b,	// (0x00061532) ncimui_query_pane_ParamLimits

0x716b,	// (0x00061532) ncimui_query_pane

0xa7a8,	// (0x00064b6f) list_highlight_pane_cp013

0xe6d0,	// (0x00068a97) ncim_list_query_list_pane_t1_copy1

0xe6de,	// (0x00068aa5) ncim_list_single_graphic_pane_g1

0x717e,	// (0x00061545) ncim_query_button_pane_cp01

0x718a,	// (0x00061551) ncim_query_entry_pane_ParamLimits

0x718a,	// (0x00061551) ncim_query_entry_pane

0x719d,	// (0x00061564) ncimui_query_pane_g1

0x71a9,	// (0x00061570) ncimui_query_pane_t1_ParamLimits

0x71a9,	// (0x00061570) ncimui_query_pane_t1

0xa7e5,	// (0x00064bac) input_focus_pane_cp012

0xe6e6,	// (0x00068aad) ncim_query_entry_pane_t1

0xaf37,	// (0x000652fe) main_im_pane_ParamLimits

0x3d61,	// (0x0005e128) main_mobtv_pane_ParamLimits

0x3d61,	// (0x0005e128) main_mobtv_pane

0x6e2c,	// (0x000611f3) main_cset6_slider_pane_g18_ParamLimits

0x6e2c,	// (0x000611f3) main_cset6_slider_pane_g18

0xe47d,	// (0x00068844) main_cset6_slider_pane_g19_ParamLimits

0xe47d,	// (0x00068844) main_cset6_slider_pane_g19

0xbc07,	// (0x00065fce) bg_main_mobtv_pane_ParamLimits

0xbc07,	// (0x00065fce) bg_main_mobtv_pane

0x71c2,	// (0x00061589) main_mobtv_info_pane

0x71cd,	// (0x00061594) main_mobtv_loading_pane_ParamLimits

0x71cd,	// (0x00061594) main_mobtv_loading_pane

0xe6f8,	// (0x00068abf) main_mobtv_pg_channel_list_pane

0xe702,	// (0x00068ac9) main_mobtv_pg_hdr_pane

0x71da,	// (0x000615a1) main_mobtv_programe_curr_pane_ParamLimits

0x71da,	// (0x000615a1) main_mobtv_programe_curr_pane

0x71e7,	// (0x000615ae) main_mobtv_programe_next_pane_ParamLimits

0x71e7,	// (0x000615ae) main_mobtv_programe_next_pane

0xe70b,	// (0x00068ad2) popup_mobtv_noti_window

0xb131,	// (0x000654f8) main_tv_pg_hdr_pane_g1

0xe713,	// (0x00068ada) main_tv_pg_hdr_pane_g2

0xe71b,	// (0x00068ae2) main_tv_pg_hdr_pane_g3

0xe723,	// (0x00068aea) main_tv_pg_hdr_pane_g4

0xe72b,	// (0x00068af2) main_tv_pg_hdr_pane_g5

0xe735,	// (0x00068afc) main_tv_pg_hdr_pane_g6

0xe73f,	// (0x00068b06) main_tv_pg_hdr_pane_g7

0xe749,	// (0x00068b10) main_tv_pg_hdr_pane_g8

0xe753,	// (0x00068b1a) main_tv_pg_hdr_pane_g9

0xe75d,	// (0x00068b24) main_tv_pg_hdr_pane_g10

0xe767,	// (0x00068b2e) main_tv_pg_hdr_pane_g11

0x000a,

0x0a8b,	// (0x0005ae52) main_tv_pg_hdr_pane_g

0xe771,	// (0x00068b38) main_tv_pg_hdr_pane_t1

0xe77f,	// (0x00068b46) main_tv_pg_hdr_pane_t2

0xe78d,	// (0x00068b54) main_tv_pg_hdr_pane_t3

0xe79d,	// (0x00068b64) main_tv_pg_hdr_pane_t4

0xe7ad,	// (0x00068b74) main_tv_pg_hdr_pane_t5

0x0004,

0xf7fa,	// (0x00069bc1) main_tv_pg_hdr_pane_t

0xe7bd,	// (0x00068b84) single_mobtv_pg_channel_pane_ParamLimits

0xe7bd,	// (0x00068b84) single_mobtv_pg_channel_pane

0xe7cf,	// (0x00068b96) single_mobtv_pg_channel_table_pane

0xb445,	// (0x0006580c) single_mobtv_pg_channel_thumb_pane

0xe7d8,	// (0x00068b9f) single_tv_pg_channel_pane_g1

0xe7e1,	// (0x00068ba8) single_tv_pg_channel_pane_g2

0x0001,

0xf805,	// (0x00069bcc) single_tv_pg_channel_pane_g

0xaec5,	// (0x0006528c) bg_single_mobtv_pg_channel_thumb_pane_ParamLimits

0xaec5,	// (0x0006528c) bg_single_mobtv_pg_channel_thumb_pane

0xe7ea,	// (0x00068bb1) single_mobtv_pg_channel_thumb_pane_g1_ParamLimits

0xe7ea,	// (0x00068bb1) single_mobtv_pg_channel_thumb_pane_g1

0xe7f8,	// (0x00068bbf) single_mobtv_pg_channel_thumb_pane_g2_ParamLimits

0xe7f8,	// (0x00068bbf) single_mobtv_pg_channel_thumb_pane_g2

0xe804,	// (0x00068bcb) single_mobtv_pg_channel_thumb_pane_g3_ParamLimits

0xe804,	// (0x00068bcb) single_mobtv_pg_channel_thumb_pane_g3

0x0002,

0x0aa2,	// (0x0005ae69) single_mobtv_pg_channel_thumb_pane_g_ParamLimits

0x0aa2,	// (0x0005ae69) single_mobtv_pg_channel_thumb_pane_g

0xe810,	// (0x00068bd7) single_mobtv_pg_channel_thumb_pane_t1

0xe81e,	// (0x00068be5) single_mobtv_pg_channel_thumb_pane_t2

0x0001,

0x0aa9,	// (0x0005ae70) single_mobtv_pg_channel_thumb_pane_t

0xb131,	// (0x000654f8) bg_single_mobtv_pg_channel_table_pane_g1

0xb131,	// (0x000654f8) bg_single_mobtv_pg_channel_table_pane_g2

0x0001,

0x02f2,	// (0x0005a6b9) bg_single_mobtv_pg_channel_table_pane_g

0xe82c,	// (0x00068bf3) single_mobtv_pg_channel_table_pane_t1

0xe83a,	// (0x00068c01) single_mobtv_pg_channel_table_pane_t2

0x0001,

0x0aae,	// (0x0005ae75) single_mobtv_pg_channel_table_pane_t

0x71fc,	// (0x000615c3) main_mobtv_info_pane_g1_ParamLimits

0x71fc,	// (0x000615c3) main_mobtv_info_pane_g1

0x7218,	// (0x000615df) main_mobtv_info_pane_t1_ParamLimits

0x7218,	// (0x000615df) main_mobtv_info_pane_t1

0x7290,	// (0x00061657) main_mobtv_info_pane_t2_ParamLimits

0x7290,	// (0x00061657) main_mobtv_info_pane_t2

0x0002,

0xf80f,	// (0x00069bd6) main_mobtv_info_pane_t_ParamLimits

0xf80f,	// (0x00069bd6) main_mobtv_info_pane_t

0x731f,	// (0x000616e6) wait_bar_pane_cp05

0x7331,	// (0x000616f8) main_mobtv_loading_pane_g1_ParamLimits

0x7331,	// (0x000616f8) main_mobtv_loading_pane_g1

0x733f,	// (0x00061706) main_mobtv_loading_pane_g2_ParamLimits

0x733f,	// (0x00061706) main_mobtv_loading_pane_g2

0x734b,	// (0x00061712) main_mobtv_loading_pane_g3_ParamLimits

0x734b,	// (0x00061712) main_mobtv_loading_pane_g3

0x0002,

0xf816,	// (0x00069bdd) main_mobtv_loading_pane_g_ParamLimits

0xf816,	// (0x00069bdd) main_mobtv_loading_pane_g

0xe848,	// (0x00068c0f) main_mobtv_loading_pane_t1_ParamLimits

0xe848,	// (0x00068c0f) main_mobtv_loading_pane_t1

0xe860,	// (0x00068c27) main_mobtv_loading_pane_t2_ParamLimits

0xe860,	// (0x00068c27) main_mobtv_loading_pane_t2

0x0001,

0x0ac6,	// (0x0005ae8d) main_mobtv_loading_pane_t_ParamLimits

0x0ac6,	// (0x0005ae8d) main_mobtv_loading_pane_t

0x7359,	// (0x00061720) wait_bar_pane_cp06_ParamLimits

0x7359,	// (0x00061720) wait_bar_pane_cp06

0xe884,	// (0x00068c4b) main_mobtv_programe_curr_pane_t1

0xe892,	// (0x00068c59) main_mobtv_programe_curr_pane_t2

0x0001,

0x0acb,	// (0x0005ae92) main_mobtv_programe_curr_pane_t

0xe8a0,	// (0x00068c67) main_mobtv_programe_next_pane_t1

0xe8ae,	// (0x00068c75) main_mobtv_programe_next_pane_t2

0xe8bc,	// (0x00068c83) main_mobtv_programe_next_pane_t3

0x0002,

0x0ad0,	// (0x0005ae97) main_mobtv_programe_next_pane_t

0xa7a8,	// (0x00064b6f) bg_popup_mobtv_noti_window_pane

0xe8ca,	// (0x00068c91) popup_mobtv_noti_window_g1

0xe8d2,	// (0x00068c99) popup_mobtv_noti_window_t1

0xe8e0,	// (0x00068ca7) popup_mobtv_noti_window_t2

0x0001,

0x0ad7,	// (0x0005ae9e) popup_mobtv_noti_window_t

0xb131,	// (0x000654f8) bg_popup_mobtv_noti_window_pane_g1

0x1189,	// (0x0005b550) sc_clock_pane

0x1189,	// (0x0005b550) main_fs_bigclock_pane

0x69aa,	// (0x00060d71) blid2_tripm_pane_t4_ParamLimits

0x69aa,	// (0x00060d71) blid2_tripm_pane_t4

0x7365,	// (0x0006172c) sc_clock_pane_g1_ParamLimits

0x7365,	// (0x0006172c) sc_clock_pane_g1

0x7373,	// (0x0006173a) sc_clock_pane_t1_ParamLimits

0x7373,	// (0x0006173a) sc_clock_pane_t1

0x7386,	// (0x0006174d) sc_clock_pane_t2_ParamLimits

0x7386,	// (0x0006174d) sc_clock_pane_t2

0x7398,	// (0x0006175f) sc_clock_pane_t3_ParamLimits

0x7398,	// (0x0006175f) sc_clock_pane_t3

0x0004,

0xf81d,	// (0x00069be4) sc_clock_pane_t_ParamLimits

0xf81d,	// (0x00069be4) sc_clock_pane_t

0x802e,	// (0x000623f5) main_fs_bigclock_indicator_pane_ParamLimits

0x802e,	// (0x000623f5) main_fs_bigclock_indicator_pane

0x741b,	// (0x000617e2) main_fs_bigclock_pane_g1_ParamLimits

0x741b,	// (0x000617e2) main_fs_bigclock_pane_g1

0x803a,	// (0x00062401) main_fs_bigclock_pane_t1_ParamLimits

0x803a,	// (0x00062401) main_fs_bigclock_pane_t1

0x804c,	// (0x00062413) main_fs_bigclock_pane_t2_ParamLimits

0x804c,	// (0x00062413) main_fs_bigclock_pane_t2

0x8060,	// (0x00062427) main_fs_bigclock_pane_t3_ParamLimits

0x8060,	// (0x00062427) main_fs_bigclock_pane_t3

0x0002,

0xf932,	// (0x00069cf9) main_fs_bigclock_pane_t_ParamLimits

0xf932,	// (0x00069cf9) main_fs_bigclock_pane_t

0x9954,	// (0x00063d1b) main_fs_bigclock_indicator_pane_g1

0xe5ff,	// (0x000689c6) ncim_query_content_pane_g2_ParamLimits

0xe5ff,	// (0x000689c6) ncim_query_content_pane_g2

0x0001,

0xf7e8,	// (0x00069baf) ncim_query_content_pane_g_ParamLimits

0xf7e8,	// (0x00069baf) ncim_query_content_pane_g

0x73ac,	// (0x00061773) sc_clock_pane_t4_ParamLimits

0x73ac,	// (0x00061773) sc_clock_pane_t4

0x3d61,	// (0x0005e128) main_radioblah_pane

0x5555,	// (0x0005f91c) cell_call4_button_pane_t1_copy1_ParamLimits

0x5555,	// (0x0005f91c) cell_call4_button_pane_t1_copy1

0x6fef,	// (0x000613b6) main_ncimui_pane_t1_ParamLimits

0x6fef,	// (0x000613b6) main_ncimui_pane_t1

0x7009,	// (0x000613d0) main_ncimui_pane_t2_ParamLimits

0x7009,	// (0x000613d0) main_ncimui_pane_t2

0x0002,

0xf7e1,	// (0x00069ba8) main_ncimui_pane_t_ParamLimits

0xf7e1,	// (0x00069ba8) main_ncimui_pane_t

0xea26,	// (0x00068ded) main_radioblah_anim_pane_ParamLimits

0xea26,	// (0x00068ded) main_radioblah_anim_pane

0xea37,	// (0x00068dfe) main_radioblah_info_pane_ParamLimits

0xea37,	// (0x00068dfe) main_radioblah_info_pane

0xea4b,	// (0x00068e12) main_radioblah_pane_t1_ParamLimits

0xea4b,	// (0x00068e12) main_radioblah_pane_t1

0xea67,	// (0x00068e2e) main_radioblah_pane_t2_ParamLimits

0xea67,	// (0x00068e2e) main_radioblah_pane_t2

0x0003,

0x0afd,	// (0x0005aec4) main_radioblah_pane_t_ParamLimits

0x0afd,	// (0x0005aec4) main_radioblah_pane_t

0x7471,	// (0x00061838) main_radioblah_rocker_ctrl_pane_ParamLimits

0x7471,	// (0x00061838) main_radioblah_rocker_ctrl_pane

0xeaaf,	// (0x00068e76) main_radioblah_info_pane_t1_ParamLimits

0xeaaf,	// (0x00068e76) main_radioblah_info_pane_t1

0x74b6,	// (0x0006187d) main_radioblah_info_pane_t2_ParamLimits

0x74b6,	// (0x0006187d) main_radioblah_info_pane_t2

0x0003,

0xf828,	// (0x00069bef) main_radioblah_info_pane_t_ParamLimits

0xf828,	// (0x00069bef) main_radioblah_info_pane_t

0xb131,	// (0x000654f8) main_radioblah_rocker_ctrl_pane_g1

0x7566,	// (0x0006192d) main_radioblah_rocker_ctrl_pane_g2

0x756e,	// (0x00061935) main_radioblah_rocker_ctrl_pane_g3

0x7576,	// (0x0006193d) main_radioblah_rocker_ctrl_pane_g4

0x757e,	// (0x00061945) main_radioblah_rocker_ctrl_pane_g5

0x7586,	// (0x0006194d) main_radioblah_rocker_ctrl_pane_g6

0x0005,

0xf831,	// (0x00069bf8) main_radioblah_rocker_ctrl_pane_g

0x6f95,	// (0x0006135c) main_cset_text2_pane_t1_copy1_ParamLimits

0x55e0,	// (0x0005f9a7) cam4_image_uncrop_qvga_pane

0x5721,	// (0x0005fae8) vid4_image_uncrop_qcif_pane

0x6b3e,	// (0x00060f05) cam6_image_uncrop_qvga_pane_ParamLimits

0x6b3e,	// (0x00060f05) cam6_image_uncrop_qvga_pane

0xe2df,	// (0x000686a6) vid6_image_uncrop_qcif_pane_ParamLimits

0xe2df,	// (0x000686a6) vid6_image_uncrop_qcif_pane

0xa7a8,	// (0x00064b6f) bg_popup_preview_window_pane_cp03

0xe5b1,	// (0x00068978) list_cset_text2_pane

0xe5b9,	// (0x00068980) main_cset6_text2_pane_g1

0xe5c1,	// (0x00068988) main_cset6_text2_pane_t1

0x758e,	// (0x00061955) list_cset_text2_pane_t1_ParamLimits

0x758e,	// (0x00061955) list_cset_text2_pane_t1

0x3d61,	// (0x0005e128) main_radioblah_pane_ParamLimits

0x730b,	// (0x000616d2) main_mobtv_info_pane_t3_ParamLimits

0x730b,	// (0x000616d2) main_mobtv_info_pane_t3

0x745f,	// (0x00061826) main_radioblah_pane_g1

0x748a,	// (0x00061851) main_radioblah_info_pane_g1

0x750b,	// (0x000618d2) main_radioblah_info_pane_t3_ParamLimits

0x750b,	// (0x000618d2) main_radioblah_info_pane_t3

0x2d6d,	// (0x0005d134) highlight_cell_cale_month_pane_ParamLimits

0x2d6d,	// (0x0005d134) highlight_cell_cale_month_pane

0x1189,	// (0x0005b550) main_phob_fisheye_pane

0xd600,	// (0x000679c7) scroll_pane_cp0031_ParamLimits

0xd600,	// (0x000679c7) scroll_pane_cp0031

0xe3ed,	// (0x000687b4) wait_bar_pane_cp08_ParamLimits

0x6d58,	// (0x0006111f) cset_list_set_pane_copy1_ParamLimits

0xeae9,	// (0x00068eb0) highlight_cell_cale_month_pane_g1

0x75af,	// (0x00061976) highlight_cell_cale_month_pane_t1

0xe078,	// (0x0006843f) list_gen_pane_cp01

0xdcd1,	// (0x00068098) scroll_pane_01

0x75bd,	// (0x00061984) list_single_double_fisheye_pane

0x75c6,	// (0x0006198d) list_double_fisheye_pane_g1_ParamLimits

0x75c6,	// (0x0006198d) list_double_fisheye_pane_g1

0x75d2,	// (0x00061999) list_double_fisheye_pane_g2_ParamLimits

0x75d2,	// (0x00061999) list_double_fisheye_pane_g2

0x75e6,	// (0x000619ad) list_double_fisheye_pane_g3_ParamLimits

0x75e6,	// (0x000619ad) list_double_fisheye_pane_g3

0x0004,

0xf83e,	// (0x00069c05) list_double_fisheye_pane_g_ParamLimits

0xf83e,	// (0x00069c05) list_double_fisheye_pane_g

0x760f,	// (0x000619d6) list_double_fisheye_pane_t1_ParamLimits

0x760f,	// (0x000619d6) list_double_fisheye_pane_t1

0x762a,	// (0x000619f1) list_double_fisheye_pane_t2_ParamLimits

0x762a,	// (0x000619f1) list_double_fisheye_pane_t2

0x0001,

0xf849,	// (0x00069c10) list_double_fisheye_pane_t_ParamLimits

0xf849,	// (0x00069c10) list_double_fisheye_pane_t

0x1189,	// (0x0005b550) main_call5_pane

0x73d2,	// (0x00061799) sc_swipe_pane_ParamLimits

0x73d2,	// (0x00061799) sc_swipe_pane

0x7658,	// (0x00061a1f) call5_image_pane_ParamLimits

0x7658,	// (0x00061a1f) call5_image_pane

0x7668,	// (0x00061a2f) call5_swipe_1_pane_ParamLimits

0x7668,	// (0x00061a2f) call5_swipe_1_pane

0x7674,	// (0x00061a3b) call5_swipe_2_pane_ParamLimits

0x7674,	// (0x00061a3b) call5_swipe_2_pane

0x768e,	// (0x00061a55) popup_call5_audio_first_window_ParamLimits

0x768e,	// (0x00061a55) popup_call5_audio_first_window

0xaec5,	// (0x0006528c) call5_swipe_1_pane_g1_ParamLimits

0xaec5,	// (0x0006528c) call5_swipe_1_pane_g1

0xeaf1,	// (0x00068eb8) call5_swipe_1_pane_g2_ParamLimits

0xeaf1,	// (0x00068eb8) call5_swipe_1_pane_g2

0x0001,

0x0b2c,	// (0x0005aef3) call5_swipe_1_pane_g_ParamLimits

0x0b2c,	// (0x0005aef3) call5_swipe_1_pane_g

0xeafd,	// (0x00068ec4) call5_swipe_1_pane_t1_ParamLimits

0xeafd,	// (0x00068ec4) call5_swipe_1_pane_t1

0xaec5,	// (0x0006528c) call5_swipe_2_pane_g1_ParamLimits

0xaec5,	// (0x0006528c) call5_swipe_2_pane_g1

0xeb12,	// (0x00068ed9) call5_swipe_2_pane_g2_ParamLimits

0xeb12,	// (0x00068ed9) call5_swipe_2_pane_g2

0x0001,

0x0b31,	// (0x0005aef8) call5_swipe_2_pane_g_ParamLimits

0x0b31,	// (0x0005aef8) call5_swipe_2_pane_g

0xeb1e,	// (0x00068ee5) call5_swipe_2_pane_t1_ParamLimits

0xeb1e,	// (0x00068ee5) call5_swipe_2_pane_t1

0xeb33,	// (0x00068efa) sc_swipe_pane_g1_ParamLimits

0xeb33,	// (0x00068efa) sc_swipe_pane_g1

0xeb40,	// (0x00068f07) sc_swipe_pane_g2_ParamLimits

0xeb40,	// (0x00068f07) sc_swipe_pane_g2

0x0001,

0x0b36,	// (0x0005aefd) sc_swipe_pane_g_ParamLimits

0x0b36,	// (0x0005aefd) sc_swipe_pane_g

0xeb4c,	// (0x00068f13) sc_swipe_pane_t1_ParamLimits

0xeb4c,	// (0x00068f13) sc_swipe_pane_t1

0x1189,	// (0x0005b550) main_cmail_launcher_pane

0x769c,	// (0x00061a63) aid_size_cell_cmail_l_ParamLimits

0x769c,	// (0x00061a63) aid_size_cell_cmail_l

0x76aa,	// (0x00061a71) grid_cmail_l_pane_ParamLimits

0x76aa,	// (0x00061a71) grid_cmail_l_pane

0x76ba,	// (0x00061a81) cell_cmail_l_pane_ParamLimits

0x76ba,	// (0x00061a81) cell_cmail_l_pane

0xeb61,	// (0x00068f28) cell_cmail_l_pane_g1_ParamLimits

0xeb61,	// (0x00068f28) cell_cmail_l_pane_g1

0xeb6d,	// (0x00068f34) cell_cmail_l_pane_t1_ParamLimits

0xeb6d,	// (0x00068f34) cell_cmail_l_pane_t1

0xeb83,	// (0x00068f4a) cell_cmail_l_pane_t2_ParamLimits

0xeb83,	// (0x00068f4a) cell_cmail_l_pane_t2

0x0001,

0x0b3b,	// (0x0005af02) cell_cmail_l_pane_t_ParamLimits

0x0b3b,	// (0x0005af02) cell_cmail_l_pane_t

0xa7e5,	// (0x00064bac) grid_highlight_pane_cp018_ParamLimits

0xa7e5,	// (0x00064bac) grid_highlight_pane_cp018

0x107c,	// (0x0005b443) main2_pane_ParamLimits

0x107c,	// (0x0005b443) main2_pane

0xafc6,	// (0x0006538d) popup_sp_fs_action_menu_bg_pane_g1

0xafce,	// (0x00065395) popup_sp_fs_action_menu_bg_pane_g2

0xafd6,	// (0x0006539d) popup_sp_fs_action_menu_bg_pane_g3

0xafde,	// (0x000653a5) popup_sp_fs_action_menu_bg_pane_g4

0xafe6,	// (0x000653ad) popup_sp_fs_action_menu_bg_pane_g5

0xafee,	// (0x000653b5) popup_sp_fs_action_menu_bg_pane_g6

0xaff6,	// (0x000653bd) popup_sp_fs_action_menu_bg_pane_g7

0xaffe,	// (0x000653c5) popup_sp_fs_action_menu_bg_pane_g8

0xb006,	// (0x000653cd) popup_sp_fs_action_menu_bg_pane_g9

0xb00e,	// (0x000653d5) popup_sp_fs_action_menu_bg_pane_g10

0xb00e,	// (0x000653d5) popup_sp_fs_action_menu_bg_pane_g11

0x000a,

0x005f,	// (0x0005a426) popup_sp_fs_action_menu_bg_pane_g

0xaec5,	// (0x0006528c) list_medium_line_x2_t3_g3_g1_ParamLimits

0xaec5,	// (0x0006528c) list_medium_line_x2_t3_g3_g1

0xaec5,	// (0x0006528c) list_medium_line_x2_t3_g3_g2_ParamLimits

0xaec5,	// (0x0006528c) list_medium_line_x2_t3_g3_g2

0xaec5,	// (0x0006528c) list_medium_line_x2_t3_g3_g3_ParamLimits

0xaec5,	// (0x0006528c) list_medium_line_x2_t3_g3_g3

0x0002,

0x010d,	// (0x0005a4d4) list_medium_line_x2_t3_g3_g_ParamLimits

0x010d,	// (0x0005a4d4) list_medium_line_x2_t3_g3_g

0xb103,	// (0x000654ca) list_medium_line_x2_t3_g3_t1_ParamLimits

0xb103,	// (0x000654ca) list_medium_line_x2_t3_g3_t1

0xb103,	// (0x000654ca) list_medium_line_x2_t3_g3_t2_ParamLimits

0xb103,	// (0x000654ca) list_medium_line_x2_t3_g3_t2

0xb103,	// (0x000654ca) list_medium_line_x2_t3_g3_t3_ParamLimits

0xb103,	// (0x000654ca) list_medium_line_x2_t3_g3_t3

0x0002,

0x0114,	// (0x0005a4db) list_medium_line_x2_t3_g3_t_ParamLimits

0x0114,	// (0x0005a4db) list_medium_line_x2_t3_g3_t

0xaec5,	// (0x0006528c) list_medium_line_x2_t3_g2_g1_ParamLimits

0xaec5,	// (0x0006528c) list_medium_line_x2_t3_g2_g1

0xaec5,	// (0x0006528c) list_medium_line_x2_t3_g2_g2_ParamLimits

0xaec5,	// (0x0006528c) list_medium_line_x2_t3_g2_g2

0x0001,

0x011b,	// (0x0005a4e2) list_medium_line_x2_t3_g2_g_ParamLimits

0x011b,	// (0x0005a4e2) list_medium_line_x2_t3_g2_g

0xb103,	// (0x000654ca) list_medium_line_x2_t3_g2_t1_ParamLimits

0xb103,	// (0x000654ca) list_medium_line_x2_t3_g2_t1

0xb103,	// (0x000654ca) list_medium_line_x2_t3_g2_t2_ParamLimits

0xb103,	// (0x000654ca) list_medium_line_x2_t3_g2_t2

0xb103,	// (0x000654ca) list_medium_line_x2_t3_g2_t3_ParamLimits

0xb103,	// (0x000654ca) list_medium_line_x2_t3_g2_t3

0x0002,

0x0114,	// (0x0005a4db) list_medium_line_x2_t3_g2_t_ParamLimits

0x0114,	// (0x0005a4db) list_medium_line_x2_t3_g2_t

0xaec5,	// (0x0006528c) list_medium_line_x2_t4_g4_g1_ParamLimits

0xaec5,	// (0x0006528c) list_medium_line_x2_t4_g4_g1

0xaec5,	// (0x0006528c) list_medium_line_x2_t4_g4_g2_ParamLimits

0xaec5,	// (0x0006528c) list_medium_line_x2_t4_g4_g2

0xaec5,	// (0x0006528c) list_medium_line_x2_t4_g4_g3_ParamLimits

0xaec5,	// (0x0006528c) list_medium_line_x2_t4_g4_g3

0xaec5,	// (0x0006528c) list_medium_line_x2_t4_g4_g4_ParamLimits

0xaec5,	// (0x0006528c) list_medium_line_x2_t4_g4_g4

0x0003,

0x0120,	// (0x0005a4e7) list_medium_line_x2_t4_g4_g_ParamLimits

0x0120,	// (0x0005a4e7) list_medium_line_x2_t4_g4_g

0xb103,	// (0x000654ca) list_medium_line_x2_t4_g4_t1_ParamLimits

0xb103,	// (0x000654ca) list_medium_line_x2_t4_g4_t1

0xb103,	// (0x000654ca) list_medium_line_x2_t4_g4_t2_ParamLimits

0xb103,	// (0x000654ca) list_medium_line_x2_t4_g4_t2

0xb103,	// (0x000654ca) list_medium_line_x2_t4_g4_t3_ParamLimits

0xb103,	// (0x000654ca) list_medium_line_x2_t4_g4_t3

0xb103,	// (0x000654ca) list_medium_line_x2_t4_g4_t4_ParamLimits

0xb103,	// (0x000654ca) list_medium_line_x2_t4_g4_t4

0x0003,

0x0129,	// (0x0005a4f0) list_medium_line_x2_t4_g4_t_ParamLimits

0x0129,	// (0x0005a4f0) list_medium_line_x2_t4_g4_t

0xaec5,	// (0x0006528c) list_medium_line_x2_t2_g4_g1_ParamLimits

0xaec5,	// (0x0006528c) list_medium_line_x2_t2_g4_g1

0xaec5,	// (0x0006528c) list_medium_line_x2_t2_g4_g2_ParamLimits

0xaec5,	// (0x0006528c) list_medium_line_x2_t2_g4_g2

0xaec5,	// (0x0006528c) list_medium_line_x2_t2_g4_g3_ParamLimits

0xaec5,	// (0x0006528c) list_medium_line_x2_t2_g4_g3

0xaec5,	// (0x0006528c) list_medium_line_x2_t2_g4_g4_ParamLimits

0xaec5,	// (0x0006528c) list_medium_line_x2_t2_g4_g4

0x0003,

0x0120,	// (0x0005a4e7) list_medium_line_x2_t2_g4_g_ParamLimits

0x0120,	// (0x0005a4e7) list_medium_line_x2_t2_g4_g

0xb103,	// (0x000654ca) list_medium_line_x2_t2_g4_t1_ParamLimits

0xb103,	// (0x000654ca) list_medium_line_x2_t2_g4_t1

0xb103,	// (0x000654ca) list_medium_line_x2_t2_g4_t2_ParamLimits

0xb103,	// (0x000654ca) list_medium_line_x2_t2_g4_t2

0x0001,

0x00f0,	// (0x0005a4b7) list_medium_line_x2_t2_g4_t_ParamLimits

0x00f0,	// (0x0005a4b7) list_medium_line_x2_t2_g4_t

0xaec5,	// (0x0006528c) list_medium_line_x2_t2_g3_g1_ParamLimits

0xaec5,	// (0x0006528c) list_medium_line_x2_t2_g3_g1

0xaec5,	// (0x0006528c) list_medium_line_x2_t2_g3_g2_ParamLimits

0xaec5,	// (0x0006528c) list_medium_line_x2_t2_g3_g2

0xaec5,	// (0x0006528c) list_medium_line_x2_t2_g3_g3_ParamLimits

0xaec5,	// (0x0006528c) list_medium_line_x2_t2_g3_g3

0x0002,

0x010d,	// (0x0005a4d4) list_medium_line_x2_t2_g3_g_ParamLimits

0x010d,	// (0x0005a4d4) list_medium_line_x2_t2_g3_g

0xb103,	// (0x000654ca) list_medium_line_x2_t2_g3_t1_ParamLimits

0xb103,	// (0x000654ca) list_medium_line_x2_t2_g3_t1

0xb103,	// (0x000654ca) list_medium_line_x2_t2_g3_t2_ParamLimits

0xb103,	// (0x000654ca) list_medium_line_x2_t2_g3_t2

0x0001,

0x00f0,	// (0x0005a4b7) list_medium_line_x2_t2_g3_t_ParamLimits

0x00f0,	// (0x0005a4b7) list_medium_line_x2_t2_g3_t

0x2f67,	// (0x0005d32e) main_sp_fs_list_pane_ParamLimits

0x2f67,	// (0x0005d32e) main_sp_fs_list_pane

0x2f73,	// (0x0005d33a) sp_fs_scroll_pane_ParamLimits

0x2f73,	// (0x0005d33a) sp_fs_scroll_pane

0xb658,	// (0x00065a1f) list_medium_line_x2_t3_t1

0xb658,	// (0x00065a1f) list_medium_line_x2_t3_t2

0xb658,	// (0x00065a1f) list_medium_line_x2_t3_t3

0x0002,

0xf1e6,	// (0x000695ad) list_medium_line_x2_t3_t

0xb658,	// (0x00065a1f) list_medium_line_x3_t4_t1

0xb658,	// (0x00065a1f) list_medium_line_x3_t4_t2

0xb658,	// (0x00065a1f) list_medium_line_x3_t4_t3

0xb658,	// (0x00065a1f) list_medium_line_x3_t4_t4

0x0003,

0xf1ed,	// (0x000695b4) list_medium_line_x3_t4_t

0xb658,	// (0x00065a1f) list_medium_line_x4_t5_t1

0xb658,	// (0x00065a1f) list_medium_line_x4_t5_t2

0xb658,	// (0x00065a1f) list_medium_line_x4_t5_t3

0xb658,	// (0x00065a1f) list_medium_line_x4_t5_t4

0xb658,	// (0x00065a1f) list_medium_line_x4_t5_t5

0x0004,

0xf1f6,	// (0x000695bd) list_medium_line_x4_t5_t

0xaec5,	// (0x0006528c) list_medium_line_t4_g4_g1_ParamLimits

0xaec5,	// (0x0006528c) list_medium_line_t4_g4_g1

0xaec5,	// (0x0006528c) list_medium_line_t4_g4_g2_ParamLimits

0xaec5,	// (0x0006528c) list_medium_line_t4_g4_g2

0xaec5,	// (0x0006528c) list_medium_line_t4_g4_g3_ParamLimits

0xaec5,	// (0x0006528c) list_medium_line_t4_g4_g3

0xaec5,	// (0x0006528c) list_medium_line_t4_g4_g4_ParamLimits

0xaec5,	// (0x0006528c) list_medium_line_t4_g4_g4

0x0003,

0x0120,	// (0x0005a4e7) list_medium_line_t4_g4_g_ParamLimits

0x0120,	// (0x0005a4e7) list_medium_line_t4_g4_g

0xb103,	// (0x000654ca) list_medium_line_t4_g4_t1_ParamLimits

0xb103,	// (0x000654ca) list_medium_line_t4_g4_t1

0xb103,	// (0x000654ca) list_medium_line_t4_g4_t2_ParamLimits

0xb103,	// (0x000654ca) list_medium_line_t4_g4_t2

0xb103,	// (0x000654ca) list_medium_line_t4_g4_t3_ParamLimits

0xb103,	// (0x000654ca) list_medium_line_t4_g4_t3

0xb103,	// (0x000654ca) list_medium_line_t4_g4_t4_ParamLimits

0xb103,	// (0x000654ca) list_medium_line_t4_g4_t4

0x0003,

0x0129,	// (0x0005a4f0) list_medium_line_t4_g4_t_ParamLimits

0x0129,	// (0x0005a4f0) list_medium_line_t4_g4_t

0x3066,	// (0x0005d42d) chi_dic_find_pane_g1

0x3d7d,	// (0x0005e144) main_tport_pane

0xb658,	// (0x00065a1f) list_medium_line_plain_t1

0xaec5,	// (0x0006528c) list_medium_line_t2_g2_g1_ParamLimits

0xaec5,	// (0x0006528c) list_medium_line_t2_g2_g1

0xaec5,	// (0x0006528c) list_medium_line_t2_g2_g2_ParamLimits

0xaec5,	// (0x0006528c) list_medium_line_t2_g2_g2

0x0001,

0x011b,	// (0x0005a4e2) list_medium_line_t2_g2_g_ParamLimits

0x011b,	// (0x0005a4e2) list_medium_line_t2_g2_g

0xb103,	// (0x000654ca) list_medium_line_t2_g2_t1_ParamLimits

0xb103,	// (0x000654ca) list_medium_line_t2_g2_t1

0xb103,	// (0x000654ca) list_medium_line_t2_g2_t2_ParamLimits

0xb103,	// (0x000654ca) list_medium_line_t2_g2_t2

0x0001,

0x00f0,	// (0x0005a4b7) list_medium_line_t2_g2_t_ParamLimits

0x00f0,	// (0x0005a4b7) list_medium_line_t2_g2_t

0xa479,	// (0x00064840) aid_sp_fs_list_icon_a_sm

0xa481,	// (0x00064848) aid_sp_fs_list_icon_d

0xa489,	// (0x00064850) aid_sp_fs_text_primary

0xedca,	// (0x00069191) aid_sp_fs_text_secondary

0xa7a8,	// (0x00064b6f) list_medium_line

0xa7a8,	// (0x00064b6f) list_medium_line_g2

0xa7a8,	// (0x00064b6f) list_medium_line_g3

0xa7a8,	// (0x00064b6f) list_medium_line_plain

0xa7a8,	// (0x00064b6f) list_medium_line_plain_t2

0xa7a8,	// (0x00064b6f) list_medium_line_plain_t3

0xa7a8,	// (0x00064b6f) list_medium_line_right_icon

0xa7a8,	// (0x00064b6f) list_medium_line_right_iconx2

0xa7a8,	// (0x00064b6f) list_medium_line_t2

0xa7a8,	// (0x00064b6f) list_medium_line_t2_g2

0xa7a8,	// (0x00064b6f) list_medium_line_t2_g3

0xa7a8,	// (0x00064b6f) list_medium_line_t2_right_icon

0xa7a8,	// (0x00064b6f) list_medium_line_t2_right_iconx2

0xa7a8,	// (0x00064b6f) list_medium_line_t3

0xa7a8,	// (0x00064b6f) list_medium_line_t3_g2

0xa7a8,	// (0x00064b6f) list_medium_line_t3_g3

0xa7a8,	// (0x00064b6f) list_medium_line_t3_right_iconx2

0xa7a8,	// (0x00064b6f) list_medium_line_t4_g4

0xa7a8,	// (0x00064b6f) list_medium_line_x2

0xa7a8,	// (0x00064b6f) list_medium_line_x2_t2_g2

0xa7a8,	// (0x00064b6f) list_medium_line_x2_t2_g3

0xa7a8,	// (0x00064b6f) list_medium_line_x2_t2_g4

0xa7a8,	// (0x00064b6f) list_medium_line_x2_t3

0xa7a8,	// (0x00064b6f) list_medium_line_x2_t3_g2

0xa7a8,	// (0x00064b6f) list_medium_line_x2_t3_g3

0xa7a8,	// (0x00064b6f) list_medium_line_x2_t3_g4

0xa7a8,	// (0x00064b6f) list_medium_line_x2_t4_g2

0xa7a8,	// (0x00064b6f) list_medium_line_x2_t4_g4

0xa7a8,	// (0x00064b6f) list_medium_line_x3

0xa7a8,	// (0x00064b6f) list_medium_line_x3_t4

0xa7a8,	// (0x00064b6f) list_medium_line_x3_t4_g4

0xa7a8,	// (0x00064b6f) list_medium_line_x4_t4

0xa7a8,	// (0x00064b6f) list_medium_line_x4_t4_g7

0xa7a8,	// (0x00064b6f) list_medium_line_x4_t5

0x682f,	// (0x00060bf6) list_single_fs_dyc_pane_ParamLimits

0x682f,	// (0x00060bf6) list_single_fs_dyc_pane

0xaec5,	// (0x0006528c) list_medium_line_x4_t4_g7_g1_ParamLimits

0xaec5,	// (0x0006528c) list_medium_line_x4_t4_g7_g1

0xaec5,	// (0x0006528c) list_medium_line_x4_t4_g7_g2_ParamLimits

0xaec5,	// (0x0006528c) list_medium_line_x4_t4_g7_g2

0xaec5,	// (0x0006528c) list_medium_line_x4_t4_g7_g3_ParamLimits

0xaec5,	// (0x0006528c) list_medium_line_x4_t4_g7_g3

0xaec5,	// (0x0006528c) list_medium_line_x4_t4_g7_g4_ParamLimits

0xaec5,	// (0x0006528c) list_medium_line_x4_t4_g7_g4

0xaec5,	// (0x0006528c) list_medium_line_x4_t4_g7_g5_ParamLimits

0xaec5,	// (0x0006528c) list_medium_line_x4_t4_g7_g5

0xaec5,	// (0x0006528c) list_medium_line_x4_t4_g7_g6_ParamLimits

0xaec5,	// (0x0006528c) list_medium_line_x4_t4_g7_g6

0xaed3,	// (0x0006529a) list_medium_line_x4_t4_g7_g7_ParamLimits

0xaed3,	// (0x0006529a) list_medium_line_x4_t4_g7_g7

0x0006,

0x0a53,	// (0x0005ae1a) list_medium_line_x4_t4_g7_g_ParamLimits

0x0a53,	// (0x0005ae1a) list_medium_line_x4_t4_g7_g

0xb103,	// (0x000654ca) list_medium_line_x4_t4_g7_t1_ParamLimits

0xb103,	// (0x000654ca) list_medium_line_x4_t4_g7_t1

0xb103,	// (0x000654ca) list_medium_line_x4_t4_g7_t2_ParamLimits

0xb103,	// (0x000654ca) list_medium_line_x4_t4_g7_t2

0xb103,	// (0x000654ca) list_medium_line_x4_t4_g7_t3_ParamLimits

0xb103,	// (0x000654ca) list_medium_line_x4_t4_g7_t3

0xb8bf,	// (0x00065c86) list_medium_line_x4_t4_g7_t4_ParamLimits

0xb8bf,	// (0x00065c86) list_medium_line_x4_t4_g7_t4

0xb8bf,	// (0x00065c86) list_medium_line_x4_t4_g7_t5_ParamLimits

0xb8bf,	// (0x00065c86) list_medium_line_x4_t4_g7_t5

0x0004,

0xf7d1,	// (0x00069b98) list_medium_line_x4_t4_g7_t_ParamLimits

0xf7d1,	// (0x00069b98) list_medium_line_x4_t4_g7_t

0x6f78,	// (0x0006133f) list_single_dyc_row_pane_ParamLimits

0x6f78,	// (0x0006133f) list_single_dyc_row_pane

0x764c,	// (0x00061a13) call5_gesture_pane_ParamLimits

0x764c,	// (0x00061a13) call5_gesture_pane

0x7680,	// (0x00061a47) call5_windows_pane_ParamLimits

0x7680,	// (0x00061a47) call5_windows_pane

0x76d3,	// (0x00061a9a) call5_swipe_1_pane_cp_ParamLimits

0x76d3,	// (0x00061a9a) call5_swipe_1_pane_cp

0x76df,	// (0x00061aa6) call5_swipe_2_pane_cp_ParamLimits

0x76df,	// (0x00061aa6) call5_swipe_2_pane_cp

0xb0fb,	// (0x000654c2) call5_image_pane_cp

0x76eb,	// (0x00061ab2) popup_call5_audio_first_window_cp_ParamLimits

0x76eb,	// (0x00061ab2) popup_call5_audio_first_window_cp

0xeb33,	// (0x00068efa) call5_swipe_1_pane_g1_cp_ParamLimits

0xeb33,	// (0x00068efa) call5_swipe_1_pane_g1_cp

0xeba0,	// (0x00068f67) call5_swipe_1_pane_g2_cp

0xeb4c,	// (0x00068f13) call5_swipe_1_pane_t1_cp_ParamLimits

0xeb4c,	// (0x00068f13) call5_swipe_1_pane_t1_cp

0xeb33,	// (0x00068efa) call5_swipe_2_pane_g1_cp_ParamLimits

0xeb33,	// (0x00068efa) call5_swipe_2_pane_g1_cp

0xeba8,	// (0x00068f6f) call5_swipe_2_pane_g2_cp

0xebb0,	// (0x00068f77) call5_swipe_2_pane_t1_cp_ParamLimits

0xebb0,	// (0x00068f77) call5_swipe_2_pane_t1_cp

0xa7e5,	// (0x00064bac) main_sp_fs_email_pane

0xebc5,	// (0x00068f8c) main_sp_fs_listscroll_pane_te

0x76f9,	// (0x00061ac0) popup_sp_fs_action_menu_pane_ParamLimits

0x76f9,	// (0x00061ac0) popup_sp_fs_action_menu_pane

0xb131,	// (0x000654f8) bg_sp_fs_ctrlbar_pane_g1

0xebce,	// (0x00068f95) bg_sp_fs_ctrlbar_ddmenu_pane_g1

0xebd7,	// (0x00068f9e) bg_sp_fs_ctrlbar_ddmenu_pane_g2

0xcea2,	// (0x00067269) bg_sp_fs_ctrlbar_ddmenu_pane_g3

0xb131,	// (0x000654f8) bg_sp_fs_ctrlbar_ddmenu_pane_g4

0x0003,

0x0b40,	// (0x0005af07) bg_sp_fs_ctrlbar_ddmenu_pane_g

0xca9f,	// (0x00066e66) bg_sp_fs_ctrlbar_ddmenu_pane_ParamLimits

0xca9f,	// (0x00066e66) bg_sp_fs_ctrlbar_ddmenu_pane

0xebe0,	// (0x00068fa7) main_sp_fs_ctrlbar_ddmenu_pane_g1_ParamLimits

0xebe0,	// (0x00068fa7) main_sp_fs_ctrlbar_ddmenu_pane_g1

0xebec,	// (0x00068fb3) main_sp_fs_ctrlbar_ddmenu_pane_g2_ParamLimits

0xebec,	// (0x00068fb3) main_sp_fs_ctrlbar_ddmenu_pane_g2

0x0001,

0x0b49,	// (0x0005af10) main_sp_fs_ctrlbar_ddmenu_pane_g_ParamLimits

0x0b49,	// (0x0005af10) main_sp_fs_ctrlbar_ddmenu_pane_g

0xebf8,	// (0x00068fbf) main_sp_fs_ctrlbar_ddmenu_pane_t1_ParamLimits

0xebf8,	// (0x00068fbf) main_sp_fs_ctrlbar_ddmenu_pane_t1

0xb131,	// (0x000654f8) list_medium_line_t2_right_icon_g1

0xb658,	// (0x00065a1f) list_medium_line_t2_right_icon_t1

0xb658,	// (0x00065a1f) list_medium_line_t2_right_icon_t2

0x0001,

0xf84e,	// (0x00069c15) list_medium_line_t2_right_icon_t

0xbc6e,	// (0x00066035) bg_sp_fs_ctrlbar_pane_ParamLimits

0xbc6e,	// (0x00066035) bg_sp_fs_ctrlbar_pane

0x777e,	// (0x00061b45) main_sp_fs_ctrlbar_button_pane_cp01

0x7786,	// (0x00061b4d) main_sp_fs_ctrlbar_ddmenu_pane

0xec4a,	// (0x00069011) main_sp_fs_ctrlbar_pane_g1

0xec56,	// (0x0006901d) main_sp_fs_ctrlbar_pane_g2

0x0003,

0xf853,	// (0x00069c1a) main_sp_fs_ctrlbar_pane_g

0x77c2,	// (0x00061b89) main_sp_fs_ctrlbar_pane_t1

0x77fd,	// (0x00061bc4) main_sp_fs_ctrlbar_pane

0x7813,	// (0x00061bda) main_sp_fs_listscroll_pane_te_cp01

0x7824,	// (0x00061beb) popup_sp_fs_action_menu_pane_cp01_ParamLimits

0x7824,	// (0x00061beb) popup_sp_fs_action_menu_pane_cp01

0xa7e5,	// (0x00064bac) bg_sp_fs_highlight_list_pane_cp01_ParamLimits

0xa7e5,	// (0x00064bac) bg_sp_fs_highlight_list_pane_cp01

0xa492,	// (0x00064859) sp_fs_action_menu_list_gene_pane_g1_ParamLimits

0xa492,	// (0x00064859) sp_fs_action_menu_list_gene_pane_g1

0xec7d,	// (0x00069044) sp_fs_action_menu_list_gene_pane_g2_ParamLimits

0xec7d,	// (0x00069044) sp_fs_action_menu_list_gene_pane_g2

0x0001,

0xf85c,	// (0x00069c23) sp_fs_action_menu_list_gene_pane_g_ParamLimits

0xf85c,	// (0x00069c23) sp_fs_action_menu_list_gene_pane_g

0xa4a1,	// (0x00064868) sp_fs_action_menu_list_gene_pane_t1_ParamLimits

0xa4a1,	// (0x00064868) sp_fs_action_menu_list_gene_pane_t1

0xa4b9,	// (0x00064880) sp_fs_action_menu_list_gene_pane_ParamLimits

0xa4b9,	// (0x00064880) sp_fs_action_menu_list_gene_pane

0xec8a,	// (0x00069051) popup_sp_fs_action_menu_bg_pane_ParamLimits

0xec8a,	// (0x00069051) popup_sp_fs_action_menu_bg_pane

0xa4d8,	// (0x0006489f) sp_fs_action_menu_list_pane_ParamLimits

0xa4d8,	// (0x0006489f) sp_fs_action_menu_list_pane

0x7844,	// (0x00061c0b) sp_fs_scroll_pane_cp01_ParamLimits

0x7844,	// (0x00061c0b) sp_fs_scroll_pane_cp01

0xb658,	// (0x00065a1f) list_medium_line_plain_t2_t1

0xb658,	// (0x00065a1f) list_medium_line_plain_t2_t2

0x0001,

0xf84e,	// (0x00069c15) list_medium_line_plain_t2_t

0xb658,	// (0x00065a1f) list_medium_line_plain_t3_t1

0xb658,	// (0x00065a1f) list_medium_line_plain_t3_t2

0xb658,	// (0x00065a1f) list_medium_line_plain_t3_t3

0x0002,

0xf1e6,	// (0x000695ad) list_medium_line_plain_t3_t

0xaec5,	// (0x0006528c) list_medium_line_x2_t2_g2_g1_ParamLimits

0xaec5,	// (0x0006528c) list_medium_line_x2_t2_g2_g1

0xaec5,	// (0x0006528c) list_medium_line_x2_t2_g2_g2_ParamLimits

0xaec5,	// (0x0006528c) list_medium_line_x2_t2_g2_g2

0x0001,

0x011b,	// (0x0005a4e2) list_medium_line_x2_t2_g2_g_ParamLimits

0x011b,	// (0x0005a4e2) list_medium_line_x2_t2_g2_g

0xb103,	// (0x000654ca) list_medium_line_x2_t2_g2_t1_ParamLimits

0xb103,	// (0x000654ca) list_medium_line_x2_t2_g2_t1

0xb103,	// (0x000654ca) list_medium_line_x2_t2_g2_t2_ParamLimits

0xb103,	// (0x000654ca) list_medium_line_x2_t2_g2_t2

0x0001,

0x00f0,	// (0x0005a4b7) list_medium_line_x2_t2_g2_t_ParamLimits

0x00f0,	// (0x0005a4b7) list_medium_line_x2_t2_g2_t

0xaec5,	// (0x0006528c) list_medium_line_x2_t4_g2_g1_ParamLimits

0xaec5,	// (0x0006528c) list_medium_line_x2_t4_g2_g1

0xaec5,	// (0x0006528c) list_medium_line_x2_t4_g2_g2_ParamLimits

0xaec5,	// (0x0006528c) list_medium_line_x2_t4_g2_g2

0x0001,

0x011b,	// (0x0005a4e2) list_medium_line_x2_t4_g2_g_ParamLimits

0x011b,	// (0x0005a4e2) list_medium_line_x2_t4_g2_g

0xb103,	// (0x000654ca) list_medium_line_x2_t4_g2_t1_ParamLimits

0xb103,	// (0x000654ca) list_medium_line_x2_t4_g2_t1

0xb103,	// (0x000654ca) list_medium_line_x2_t4_g2_t2_ParamLimits

0xb103,	// (0x000654ca) list_medium_line_x2_t4_g2_t2

0xb103,	// (0x000654ca) list_medium_line_x2_t4_g2_t3_ParamLimits

0xb103,	// (0x000654ca) list_medium_line_x2_t4_g2_t3

0xb103,	// (0x000654ca) list_medium_line_x2_t4_g2_t4_ParamLimits

0xb103,	// (0x000654ca) list_medium_line_x2_t4_g2_t4

0x0003,

0x0129,	// (0x0005a4f0) list_medium_line_x2_t4_g2_t_ParamLimits

0x0129,	// (0x0005a4f0) list_medium_line_x2_t4_g2_t

0xb131,	// (0x000654f8) list_medium_line_t3_right_iconx2_g1

0xb131,	// (0x000654f8) list_medium_line_t3_right_iconx2_g2

0xb131,	// (0x000654f8) list_medium_line_t3_right_iconx2_g3

0x0002,

0x02f7,	// (0x0005a6be) list_medium_line_t3_right_iconx2_g

0xb658,	// (0x00065a1f) list_medium_line_t3_right_iconx2_t1

0xb658,	// (0x00065a1f) list_medium_line_t3_right_iconx2_t2

0x0001,

0xf84e,	// (0x00069c15) list_medium_line_t3_right_iconx2_t

0xaec5,	// (0x0006528c) list_medium_line_x3_t4_g4_g1_ParamLimits

0xaec5,	// (0x0006528c) list_medium_line_x3_t4_g4_g1

0xaec5,	// (0x0006528c) list_medium_line_x3_t4_g4_g2_ParamLimits

0xaec5,	// (0x0006528c) list_medium_line_x3_t4_g4_g2

0xaec5,	// (0x0006528c) list_medium_line_x3_t4_g4_g3_ParamLimits

0xaec5,	// (0x0006528c) list_medium_line_x3_t4_g4_g3

0xaec5,	// (0x0006528c) list_medium_line_x3_t4_g4_g4_ParamLimits

0xaec5,	// (0x0006528c) list_medium_line_x3_t4_g4_g4

0x0003,

0x0120,	// (0x0005a4e7) list_medium_line_x3_t4_g4_g_ParamLimits

0x0120,	// (0x0005a4e7) list_medium_line_x3_t4_g4_g

0xb103,	// (0x000654ca) list_medium_line_x3_t4_g4_t1_ParamLimits

0xb103,	// (0x000654ca) list_medium_line_x3_t4_g4_t1

0xb103,	// (0x000654ca) list_medium_line_x3_t4_g4_t2_ParamLimits

0xb103,	// (0x000654ca) list_medium_line_x3_t4_g4_t2

0xb103,	// (0x000654ca) list_medium_line_x3_t4_g4_t3_ParamLimits

0xb103,	// (0x000654ca) list_medium_line_x3_t4_g4_t3

0xb103,	// (0x000654ca) list_medium_line_x3_t4_g4_t4_ParamLimits

0xb103,	// (0x000654ca) list_medium_line_x3_t4_g4_t4

0x0003,

0x0129,	// (0x0005a4f0) list_medium_line_x3_t4_g4_t_ParamLimits

0x0129,	// (0x0005a4f0) list_medium_line_x3_t4_g4_t

0x786a,	// (0x00061c31) list_single_dyc_row_text_pane_t1_ParamLimits

0x786a,	// (0x00061c31) list_single_dyc_row_text_pane_t1

0x78a1,	// (0x00061c68) list_single_dyc_row_text_pane_t2_ParamLimits

0x78a1,	// (0x00061c68) list_single_dyc_row_text_pane_t2

0xa4f8,	// (0x000648bf) list_single_dyc_row_text_pane_t3_ParamLimits

0xa4f8,	// (0x000648bf) list_single_dyc_row_text_pane_t3

0x0005,

0xf861,	// (0x00069c28) list_single_dyc_row_text_pane_t_ParamLimits

0xf861,	// (0x00069c28) list_single_dyc_row_text_pane_t

0xa51c,	// (0x000648e3) list_single_dyc_row_pane_g1_ParamLimits

0xa51c,	// (0x000648e3) list_single_dyc_row_pane_g1

0xa528,	// (0x000648ef) list_single_dyc_row_pane_g2_ParamLimits

0xa528,	// (0x000648ef) list_single_dyc_row_pane_g2

0xa534,	// (0x000648fb) list_single_dyc_row_pane_g3_ParamLimits

0xa534,	// (0x000648fb) list_single_dyc_row_pane_g3

0xa540,	// (0x00064907) list_single_dyc_row_pane_g4_ParamLimits

0xa540,	// (0x00064907) list_single_dyc_row_pane_g4

0x0003,

0xf86e,	// (0x00069c35) list_single_dyc_row_pane_g_ParamLimits

0xf86e,	// (0x00069c35) list_single_dyc_row_pane_g

0xa54c,	// (0x00064913) list_single_dyc_row_text_pane_ParamLimits

0xa54c,	// (0x00064913) list_single_dyc_row_text_pane

0xa7a8,	// (0x00064b6f) bg_sp_fs_scroll_pane

0xeca6,	// (0x0006906d) thumb_sp_fs_scroll_pane

0xaec5,	// (0x0006528c) list_medium_line_g1_ParamLimits

0xaec5,	// (0x0006528c) list_medium_line_g1

0xb103,	// (0x000654ca) list_medium_line_t1_ParamLimits

0xb103,	// (0x000654ca) list_medium_line_t1

0xaec5,	// (0x0006528c) list_medium_line_x2_g1_ParamLimits

0xaec5,	// (0x0006528c) list_medium_line_x2_g1

0xaec5,	// (0x0006528c) list_medium_line_x2_g2_ParamLimits

0xaec5,	// (0x0006528c) list_medium_line_x2_g2

0x0001,

0x011b,	// (0x0005a4e2) list_medium_line_x2_g_ParamLimits

0x011b,	// (0x0005a4e2) list_medium_line_x2_g

0xb103,	// (0x000654ca) list_medium_line_x2_t1_ParamLimits

0xb103,	// (0x000654ca) list_medium_line_x2_t1

0xaec5,	// (0x0006528c) list_medium_line_x3_g1_ParamLimits

0xaec5,	// (0x0006528c) list_medium_line_x3_g1

0xec98,	// (0x0006905f) list_medium_line_x3_g2_ParamLimits

0xec98,	// (0x0006905f) list_medium_line_x3_g2

0x0001,

0xf877,	// (0x00069c3e) list_medium_line_x3_g_ParamLimits

0xf877,	// (0x00069c3e) list_medium_line_x3_g

0xecaf,	// (0x00069076) list_medium_line_x3_t1_ParamLimits

0xecaf,	// (0x00069076) list_medium_line_x3_t1

0xecc3,	// (0x0006908a) thumb_sp_fs_scroll_pane_g1

0xeccc,	// (0x00069093) thumb_sp_fs_scroll_pane_g2

0xecd5,	// (0x0006909c) thumb_sp_fs_scroll_pane_g3

0x0002,

0xf87c,	// (0x00069c43) thumb_sp_fs_scroll_pane_g

0xecc3,	// (0x0006908a) bg_sp_fs_scroll_pane_g1

0xeccc,	// (0x00069093) bg_sp_fs_scroll_pane_g2

0xecd5,	// (0x0006909c) bg_sp_fs_scroll_pane_g3

0x0002,

0xf87c,	// (0x00069c43) bg_sp_fs_scroll_pane_g

0xaec5,	// (0x0006528c) list_medium_line_x2_t3_g4_g1_ParamLimits

0xaec5,	// (0x0006528c) list_medium_line_x2_t3_g4_g1

0xaec5,	// (0x0006528c) list_medium_line_x2_t3_g4_g2_ParamLimits

0xaec5,	// (0x0006528c) list_medium_line_x2_t3_g4_g2

0xaec5,	// (0x0006528c) list_medium_line_x2_t3_g4_g3_ParamLimits

0xaec5,	// (0x0006528c) list_medium_line_x2_t3_g4_g3

0xaec5,	// (0x0006528c) list_medium_line_x2_t3_g4_g4_ParamLimits

0xaec5,	// (0x0006528c) list_medium_line_x2_t3_g4_g4

0x0003,

0x0120,	// (0x0005a4e7) list_medium_line_x2_t3_g4_g_ParamLimits

0x0120,	// (0x0005a4e7) list_medium_line_x2_t3_g4_g

0xb103,	// (0x000654ca) list_medium_line_x2_t3_g4_t1_ParamLimits

0xb103,	// (0x000654ca) list_medium_line_x2_t3_g4_t1

0xb103,	// (0x000654ca) list_medium_line_x2_t3_g4_t2_ParamLimits

0xb103,	// (0x000654ca) list_medium_line_x2_t3_g4_t2

0xb103,	// (0x000654ca) list_medium_line_x2_t3_g4_t3_ParamLimits

0xb103,	// (0x000654ca) list_medium_line_x2_t3_g4_t3

0x0002,

0x0114,	// (0x0005a4db) list_medium_line_x2_t3_g4_t_ParamLimits

0x0114,	// (0x0005a4db) list_medium_line_x2_t3_g4_t

0xaec5,	// (0x0006528c) list_medium_line_g2_g1_ParamLimits

0xaec5,	// (0x0006528c) list_medium_line_g2_g1

0xaec5,	// (0x0006528c) list_medium_line_g2_g2_ParamLimits

0xaec5,	// (0x0006528c) list_medium_line_g2_g2

0x0001,

0x011b,	// (0x0005a4e2) list_medium_line_g2_g_ParamLimits

0x011b,	// (0x0005a4e2) list_medium_line_g2_g

0xb103,	// (0x000654ca) list_medium_line_g2_t1_ParamLimits

0xb103,	// (0x000654ca) list_medium_line_g2_t1

0xaec5,	// (0x0006528c) list_medium_line_t3_g2_g1_ParamLimits

0xaec5,	// (0x0006528c) list_medium_line_t3_g2_g1

0xaec5,	// (0x0006528c) list_medium_line_t3_g2_g2_ParamLimits

0xaec5,	// (0x0006528c) list_medium_line_t3_g2_g2

0x0001,

0x011b,	// (0x0005a4e2) list_medium_line_t3_g2_g_ParamLimits

0x011b,	// (0x0005a4e2) list_medium_line_t3_g2_g

0xb103,	// (0x000654ca) list_medium_line_t3_g2_t1_ParamLimits

0xb103,	// (0x000654ca) list_medium_line_t3_g2_t1

0xb103,	// (0x000654ca) list_medium_line_t3_g2_t2_ParamLimits

0xb103,	// (0x000654ca) list_medium_line_t3_g2_t2

0xb103,	// (0x000654ca) list_medium_line_t3_g2_t3_ParamLimits

0xb103,	// (0x000654ca) list_medium_line_t3_g2_t3

0x0002,

0x0114,	// (0x0005a4db) list_medium_line_t3_g2_t_ParamLimits

0x0114,	// (0x0005a4db) list_medium_line_t3_g2_t

0xb131,	// (0x000654f8) list_medium_line_right_icon_g1

0xb658,	// (0x00065a1f) list_medium_line_right_icon_t1

0xaec5,	// (0x0006528c) list_medium_line_t2_g1_ParamLimits

0xaec5,	// (0x0006528c) list_medium_line_t2_g1

0xb103,	// (0x000654ca) list_medium_line_t2_t1_ParamLimits

0xb103,	// (0x000654ca) list_medium_line_t2_t1

0xb103,	// (0x000654ca) list_medium_line_t2_t2_ParamLimits

0xb103,	// (0x000654ca) list_medium_line_t2_t2

0x0001,

0x00f0,	// (0x0005a4b7) list_medium_line_t2_t_ParamLimits

0x00f0,	// (0x0005a4b7) list_medium_line_t2_t

0xaec5,	// (0x0006528c) list_medium_line_t3_g1_ParamLimits

0xaec5,	// (0x0006528c) list_medium_line_t3_g1

0xb103,	// (0x000654ca) list_medium_line_t3_t1_ParamLimits

0xb103,	// (0x000654ca) list_medium_line_t3_t1

0xb103,	// (0x000654ca) list_medium_line_t3_t2_ParamLimits

0xb103,	// (0x000654ca) list_medium_line_t3_t2

0xb103,	// (0x000654ca) list_medium_line_t3_t3_ParamLimits

0xb103,	// (0x000654ca) list_medium_line_t3_t3

0x0002,

0x0114,	// (0x0005a4db) list_medium_line_t3_t_ParamLimits

0x0114,	// (0x0005a4db) list_medium_line_t3_t

0xaec5,	// (0x0006528c) list_medium_line_g3_g1_ParamLimits

0xaec5,	// (0x0006528c) list_medium_line_g3_g1

0xaec5,	// (0x0006528c) list_medium_line_g3_g2_ParamLimits

0xaec5,	// (0x0006528c) list_medium_line_g3_g2

0xaec5,	// (0x0006528c) list_medium_line_g3_g3_ParamLimits

0xaec5,	// (0x0006528c) list_medium_line_g3_g3

0x0002,

0x010d,	// (0x0005a4d4) list_medium_line_g3_g_ParamLimits

0x010d,	// (0x0005a4d4) list_medium_line_g3_g

0xb103,	// (0x000654ca) list_medium_line_g3_t1_ParamLimits

0xb103,	// (0x000654ca) list_medium_line_g3_t1

0xaec5,	// (0x0006528c) list_medium_line_t2_g3_g1_ParamLimits

0xaec5,	// (0x0006528c) list_medium_line_t2_g3_g1

0xaec5,	// (0x0006528c) list_medium_line_t2_g3_g2_ParamLimits

0xaec5,	// (0x0006528c) list_medium_line_t2_g3_g2

0xaec5,	// (0x0006528c) list_medium_line_t2_g3_g3_ParamLimits

0xaec5,	// (0x0006528c) list_medium_line_t2_g3_g3

0x0002,

0x010d,	// (0x0005a4d4) list_medium_line_t2_g3_g_ParamLimits

0x010d,	// (0x0005a4d4) list_medium_line_t2_g3_g

0xb103,	// (0x000654ca) list_medium_line_t2_g3_t1_ParamLimits

0xb103,	// (0x000654ca) list_medium_line_t2_g3_t1

0xb103,	// (0x000654ca) list_medium_line_t2_g3_t2_ParamLimits

0xb103,	// (0x000654ca) list_medium_line_t2_g3_t2

0x0001,

0x00f0,	// (0x0005a4b7) list_medium_line_t2_g3_t_ParamLimits

0x00f0,	// (0x0005a4b7) list_medium_line_t2_g3_t

0xaec5,	// (0x0006528c) list_medium_line_t3_g3_g1_ParamLimits

0xaec5,	// (0x0006528c) list_medium_line_t3_g3_g1

0xaec5,	// (0x0006528c) list_medium_line_t3_g3_g2_ParamLimits

0xaec5,	// (0x0006528c) list_medium_line_t3_g3_g2

0xaec5,	// (0x0006528c) list_medium_line_t3_g3_g3_ParamLimits

0xaec5,	// (0x0006528c) list_medium_line_t3_g3_g3

0x0002,

0x010d,	// (0x0005a4d4) list_medium_line_t3_g3_g_ParamLimits

0x010d,	// (0x0005a4d4) list_medium_line_t3_g3_g

0xb103,	// (0x000654ca) list_medium_line_t3_g3_t1_ParamLimits

0xb103,	// (0x000654ca) list_medium_line_t3_g3_t1

0xb103,	// (0x000654ca) list_medium_line_t3_g3_t2_ParamLimits

0xb103,	// (0x000654ca) list_medium_line_t3_g3_t2

0xb103,	// (0x000654ca) list_medium_line_t3_g3_t3_ParamLimits

0xb103,	// (0x000654ca) list_medium_line_t3_g3_t3

0x0002,

0x0114,	// (0x0005a4db) list_medium_line_t3_g3_t_ParamLimits

0x0114,	// (0x0005a4db) list_medium_line_t3_g3_t

0xb131,	// (0x000654f8) list_medium_line_right_iconx2_g1

0xb131,	// (0x000654f8) list_medium_line_right_iconx2_g2

0x0001,

0x02f2,	// (0x0005a6b9) list_medium_line_right_iconx2_g

0xb658,	// (0x00065a1f) list_medium_line_right_iconx2_t1

0xb131,	// (0x000654f8) list_medium_line_t2_right_iconx2_g1

0xb131,	// (0x000654f8) list_medium_line_t2_right_iconx2_g2

0x0001,

0x02f2,	// (0x0005a6b9) list_medium_line_t2_right_iconx2_g

0xb658,	// (0x00065a1f) list_medium_line_t2_right_iconx2_t1

0xb658,	// (0x00065a1f) list_medium_line_t2_right_iconx2_t2

0x0001,

0xf84e,	// (0x00069c15) list_medium_line_t2_right_iconx2_t

0xb658,	// (0x00065a1f) list_medium_line_x4_t4_t1

0xb658,	// (0x00065a1f) list_medium_line_x4_t4_t2

0xb658,	// (0x00065a1f) list_medium_line_x4_t4_t3

0xb658,	// (0x00065a1f) list_medium_line_x4_t4_t4

0x0003,

0xf1ed,	// (0x000695b4) list_medium_line_x4_t4_t

0x79ee,	// (0x00061db5) tport_appsw_pane_ParamLimits

0x79ee,	// (0x00061db5) tport_appsw_pane

0x79fc,	// (0x00061dc3) tport_contact_pane_ParamLimits

0x79fc,	// (0x00061dc3) tport_contact_pane

0x7a0c,	// (0x00061dd3) tport_listscroll_pane_ParamLimits

0x7a0c,	// (0x00061dd3) tport_listscroll_pane

0x7a1c,	// (0x00061de3) cell_tport_appsw_pane_ParamLimits

0x7a1c,	// (0x00061de3) cell_tport_appsw_pane

0xaed3,	// (0x0006529a) tport_appsw_pane_g1_ParamLimits

0xaed3,	// (0x0006529a) tport_appsw_pane_g1

0xecde,	// (0x000690a5) tport_contact_pane_g1

0xece7,	// (0x000690ae) tport_contact_pane_t1

0xecf5,	// (0x000690bc) tport_contact_pane_t2

0x0001,

0xf883,	// (0x00069c4a) tport_contact_pane_t

0xed03,	// (0x000690ca) list_tport_pane

0xed0c,	// (0x000690d3) scroll_pane_cp_030

0x7a4f,	// (0x00061e16) cell_tport_appsw_pane_g1

0x7a5f,	// (0x00061e26) cell_tport_appsw_pane_t1

0x7a6d,	// (0x00061e34) grid_highlight_pane_cp019

0x7a75,	// (0x00061e3c) list_tport_double_graphic_pane_ParamLimits

0x7a75,	// (0x00061e3c) list_tport_double_graphic_pane

0xa7e5,	// (0x00064bac) list_highlight_pane_cp023_ParamLimits

0xa7e5,	// (0x00064bac) list_highlight_pane_cp023

0x7a86,	// (0x00061e4d) list_tport_double_graphic_pane_g1_ParamLimits

0x7a86,	// (0x00061e4d) list_tport_double_graphic_pane_g1

0x7a93,	// (0x00061e5a) list_tport_double_graphic_pane_t1_ParamLimits

0x7a93,	// (0x00061e5a) list_tport_double_graphic_pane_t1

0x7aa8,	// (0x00061e6f) list_tport_double_graphic_pane_t2_ParamLimits

0x7aa8,	// (0x00061e6f) list_tport_double_graphic_pane_t2

0x0001,

0xf88f,	// (0x00069c56) list_tport_double_graphic_pane_t_ParamLimits

0xf88f,	// (0x00069c56) list_tport_double_graphic_pane_t

0xa7a8,	// (0x00064b6f) main_cale_note_pane

0x5988,	// (0x0005fd4f) cell_vitu2_function_top_wide_pane_cp01_ParamLimits

0x5988,	// (0x0005fd4f) cell_vitu2_function_top_wide_pane_cp01

0x731f,	// (0x000616e6) wait_bar_pane_cp05_ParamLimits

0xa7e5,	// (0x00064bac) listscroll_cmail_pane

0xed1d,	// (0x000690e4) list_cmail_pane

0x7aba,	// (0x00061e81) list_cmail_body_pane

0x7ae2,	// (0x00061ea9) list_single_cmail_header_caption_pane

0x7b11,	// (0x00061ed8) list_single_cmail_header_detail_pane_ParamLimits

0x7b11,	// (0x00061ed8) list_single_cmail_header_detail_pane

0xed34,	// (0x000690fb) list_single_cmail_header_caption_pane_t1

0x7b4e,	// (0x00061f15) list_single_cmail_header_detail_pane_g1_ParamLimits

0x7b4e,	// (0x00061f15) list_single_cmail_header_detail_pane_g1

0xa56b,	// (0x00064932) list_single_cmail_header_detail_pane_g2_ParamLimits

0xa56b,	// (0x00064932) list_single_cmail_header_detail_pane_g2

0x0002,

0xf894,	// (0x00069c5b) list_single_cmail_header_detail_pane_g_ParamLimits

0xf894,	// (0x00069c5b) list_single_cmail_header_detail_pane_g

0x7b64,	// (0x00061f2b) list_single_cmail_header_detail_pane_t1_ParamLimits

0x7b64,	// (0x00061f2b) list_single_cmail_header_detail_pane_t1

0x7ba0,	// (0x00061f67) list_single_cmail_header_editor_pane_bg_ParamLimits

0x7ba0,	// (0x00061f67) list_single_cmail_header_editor_pane_bg

0xe7e1,	// (0x00068ba8) list_cmail_body_pane_g1

0xed58,	// (0x0006911f) list_cmail_body_pane_t1

0xdb90,	// (0x00067f57) list_single_cmail_header_editor_pane_bg_g1

0xb342,	// (0x00065709) list_single_cmail_header_editor_pane_bg_g1_copy1

0xdba0,	// (0x00067f67) list_single_cmail_header_editor_pane_bg_g1_copy2

0xdb98,	// (0x00067f5f) list_single_cmail_header_editor_pane_bg_g1_copy3

0xddfd,	// (0x000681c4) list_single_cmail_header_editor_pane_bg_g1_copy4

0xdbc0,	// (0x00067f87) list_single_cmail_header_editor_pane_bg_g1_copy4_copy1

0xdbb0,	// (0x00067f77) list_single_cmail_header_editor_pane_bg_g1_copy4_copy2

0xdbb8,	// (0x00067f7f) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3

0xb322,	// (0x000656e9) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3_copy1

0x7bb7,	// (0x00061f7e) calenote_gesture_pane_ParamLimits

0x7bb7,	// (0x00061f7e) calenote_gesture_pane

0x7bd1,	// (0x00061f98) calenote_window_pane_ParamLimits

0x7bd1,	// (0x00061f98) calenote_window_pane

0xed66,	// (0x0006912d) popup_note_window_cp01

0x7be9,	// (0x00061fb0) calenote_swipe_1_pane_ParamLimits

0x7be9,	// (0x00061fb0) calenote_swipe_1_pane

0x76df,	// (0x00061aa6) calenote_swipe_2_pane_ParamLimits

0x76df,	// (0x00061aa6) calenote_swipe_2_pane

0xeb33,	// (0x00068efa) calenote_swipe_1_pane_g1_ParamLimits

0xeb33,	// (0x00068efa) calenote_swipe_1_pane_g1

0xeb40,	// (0x00068f07) calenote_swipe_1_pane_g2_ParamLimits

0xeb40,	// (0x00068f07) calenote_swipe_1_pane_g2

0x0001,

0x0b36,	// (0x0005aefd) calenote_swipe_1_pane_g_ParamLimits

0x0b36,	// (0x0005aefd) calenote_swipe_1_pane_g

0xed78,	// (0x0006913f) calenote_swipe_1_pane_t1_ParamLimits

0xed78,	// (0x0006913f) calenote_swipe_1_pane_t1

0xeb33,	// (0x00068efa) calenote_swipe_2_pane_g1_ParamLimits

0xeb33,	// (0x00068efa) calenote_swipe_2_pane_g1

0xed97,	// (0x0006915e) calenote_swipe_2_pane_g2_ParamLimits

0xed97,	// (0x0006915e) calenote_swipe_2_pane_g2

0x0001,

0x0b99,	// (0x0005af60) calenote_swipe_2_pane_g_ParamLimits

0x0b99,	// (0x0005af60) calenote_swipe_2_pane_g

0xeda3,	// (0x0006916a) calenote_swipe_2_pane_t1_ParamLimits

0xeda3,	// (0x0006916a) calenote_swipe_2_pane_t1

0xa7a8,	// (0x00064b6f) main_mup_navstr_pane

0x47ec,	// (0x0005ebb3) main_mup3_pane_t7_ParamLimits

0x47ec,	// (0x0005ebb3) main_mup3_pane_t7

0x5015,	// (0x0005f3dc) main_mp4_pane_g6_ParamLimits

0x5015,	// (0x0005f3dc) main_mp4_pane_g6

0x53b3,	// (0x0005f77a) main_image3_pane_t4_ParamLimits

0x53b3,	// (0x0005f77a) main_image3_pane_t4

0x7bfc,	// (0x00061fc3) popup_navstr_preview_pane_ParamLimits

0x7bfc,	// (0x00061fc3) popup_navstr_preview_pane

0x7c08,	// (0x00061fcf) scroll_navstr_pane_ParamLimits

0x7c08,	// (0x00061fcf) scroll_navstr_pane

0xa7a8,	// (0x00064b6f) bg_popup_preview_window_pane_cp04

0xedd3,	// (0x0006919a) popup_navstr_preview_pane_t1

0x7c14,	// (0x00061fdb) scroll_navstr_pane_g1_ParamLimits

0x7c14,	// (0x00061fdb) scroll_navstr_pane_g1

0x7c21,	// (0x00061fe8) scroll_navstr_pane_t1_ParamLimits

0x7c21,	// (0x00061fe8) scroll_navstr_pane_t1

0xed6f,	// (0x00069136) bg_button_pane_cp014

0xed6f,	// (0x00069136) bg_button_pane_cp030

0x75f2,	// (0x000619b9) list_double_fisheye_pane_g4_ParamLimits

0x75f2,	// (0x000619b9) list_double_fisheye_pane_g4

0x75fe,	// (0x000619c5) list_double_fisheye_pane_g5_ParamLimits

0x75fe,	// (0x000619c5) list_double_fisheye_pane_g5

0xdca4,	// (0x0006806b) sp_fs_scroll_pane_cp03

0xec4a,	// (0x00069011) main_sp_fs_ctrlbar_pane_g1_ParamLimits

0xec56,	// (0x0006901d) main_sp_fs_ctrlbar_pane_g2_ParamLimits

0xf853,	// (0x00069c1a) main_sp_fs_ctrlbar_pane_g_ParamLimits

0x77c2,	// (0x00061b89) main_sp_fs_ctrlbar_pane_t1_ParamLimits

0xed2c,	// (0x000690f3) sp_fs_scroll_pane_cp02

0xb031,	// (0x000653f8) popup_sp_fs_calendar_preview_list_single_pane_ParamLimits

0xb031,	// (0x000653f8) popup_sp_fs_calendar_preview_list_single_pane

0xa7a8,	// (0x00064b6f) main_cam6_pano_pane

0x3d61,	// (0x0005e128) main_mup3_pane_ParamLimits

0xa7a8,	// (0x00064b6f) main_phacti_pane

0x71f4,	// (0x000615bb) bg_button_pane_cp11

0x720c,	// (0x000615d3) main_mobtv_info_pane_g2_ParamLimits

0x720c,	// (0x000615d3) main_mobtv_info_pane_g2

0x0001,

0xf80a,	// (0x00069bd1) main_mobtv_info_pane_g_ParamLimits

0xf80a,	// (0x00069bd1) main_mobtv_info_pane_g

0x73be,	// (0x00061785) sc_clock_pane_t5_ParamLimits

0x73be,	// (0x00061785) sc_clock_pane_t5

0x745f,	// (0x00061826) main_radioblah_pane_g1_ParamLimits

0xea7f,	// (0x00068e46) main_radioblah_pane_t3_ParamLimits

0xea7f,	// (0x00068e46) main_radioblah_pane_t3

0xea97,	// (0x00068e5e) main_radioblah_pane_t4_ParamLimits

0xea97,	// (0x00068e5e) main_radioblah_pane_t4

0x747d,	// (0x00061844) main_radioblah_text_pane_ParamLimits

0x747d,	// (0x00061844) main_radioblah_text_pane

0x748a,	// (0x00061851) main_radioblah_info_pane_g1_ParamLimits

0x751f,	// (0x000618e6) main_radioblah_info_pane_t4_ParamLimits

0x751f,	// (0x000618e6) main_radioblah_info_pane_t4

0xa7e5,	// (0x00064bac) main_sp_fs_calendar_pane

0x7c33,	// (0x00061ffa) main_phacti_pane_g1

0x7c3b,	// (0x00062002) phacti_note_pane_ParamLimits

0x7c3b,	// (0x00062002) phacti_note_pane

0xedea,	// (0x000691b1) phacti_term_pane_ParamLimits

0xedea,	// (0x000691b1) phacti_term_pane

0xee2c,	// (0x000691f3) phacti_note_pane_t1_ParamLimits

0xee2c,	// (0x000691f3) phacti_note_pane_t1

0xa59b,	// (0x00064962) phacti_term_pane_g1

0xa5a3,	// (0x0006496a) phacti_term_pane_t1_ParamLimits

0xa5a3,	// (0x0006496a) phacti_term_pane_t1

0xee43,	// (0x0006920a) popup_sp_fs_calendar_preview_list_single_pane_g1

0xee4b,	// (0x00069212) popup_sp_fs_calendar_preview_list_single_pane_g2

0x0001,

0x0ba3,	// (0x0005af6a) popup_sp_fs_calendar_preview_list_single_pane_g

0xee53,	// (0x0006921a) popup_sp_fs_calendar_preview_list_single_pane_t1_ParamLimits

0xee53,	// (0x0006921a) popup_sp_fs_calendar_preview_list_single_pane_t1

0xee69,	// (0x00069230) aid_popup_sp_fs_bg_corner_pane

0xb131,	// (0x000654f8) popup_sp_fs_calendar_preview_bg_pane_g1

0xa7a8,	// (0x00064b6f) popup_sp_fs_calendar_preview_bg_pane

0xee71,	// (0x00069238) popup_sp_fs_calendar_preview_list_pane

0xbc6e,	// (0x00066035) bg_main_sp_fs_cale_pane_ParamLimits

0xbc6e,	// (0x00066035) bg_main_sp_fs_cale_pane

0xa5d6,	// (0x0006499d) listscroll_cale_mrui_pane_ParamLimits

0xa5d6,	// (0x0006499d) listscroll_cale_mrui_pane

0xa5eb,	// (0x000649b2) listscroll_sp_fs_schedule_track_pane

0xa5f4,	// (0x000649bb) main_sp_fs_ctrlbar_pane_cp01_ParamLimits

0xa5f4,	// (0x000649bb) main_sp_fs_ctrlbar_pane_cp01

0xee79,	// (0x00069240) main_sp_fs_ribbon_pane

0xa607,	// (0x000649ce) popup_sp_fs_cale_preview_window

0x7c9e,	// (0x00062065) list_single_sp_fs_schedule_track_pane_ParamLimits

0x7c9e,	// (0x00062065) list_single_sp_fs_schedule_track_pane

0xaeb7,	// (0x0006527e) bg_sp_fs_highlight_list_pane_cp03_ParamLimits

0xaeb7,	// (0x0006527e) bg_sp_fs_highlight_list_pane_cp03

0x7cc4,	// (0x0006208b) list_single_sp_fs_schedule_track_pane_g1_ParamLimits

0x7cc4,	// (0x0006208b) list_single_sp_fs_schedule_track_pane_g1

0x7cd0,	// (0x00062097) list_single_sp_fs_schedule_track_pane_g2_ParamLimits

0x7cd0,	// (0x00062097) list_single_sp_fs_schedule_track_pane_g2

0x0001,

0xf8a5,	// (0x00069c6c) list_single_sp_fs_schedule_track_pane_g_ParamLimits

0xf8a5,	// (0x00069c6c) list_single_sp_fs_schedule_track_pane_g

0x7cdc,	// (0x000620a3) list_single_sp_fs_schedule_track_pane_t1_ParamLimits

0x7cdc,	// (0x000620a3) list_single_sp_fs_schedule_track_pane_t1

0x7cf4,	// (0x000620bb) sp_fs_schedule_track_pane_ParamLimits

0x7cf4,	// (0x000620bb) sp_fs_schedule_track_pane

0xee81,	// (0x00069248) sp_fs_schedule_track_pane_g1

0xee89,	// (0x00069250) sp_fs_schedule_track_pane_g2

0xee91,	// (0x00069258) sp_fs_schedule_track_pane_g3

0xee99,	// (0x00069260) sp_fs_schedule_track_pane_g4

0xeea1,	// (0x00069268) sp_fs_schedule_track_pane_g5

0x0004,

0x0bad,	// (0x0005af74) sp_fs_schedule_track_pane_g

0xdb90,	// (0x00067f57) bg_sp_fs_schedule_viewer_highlight_g1

0xb342,	// (0x00065709) bg_sp_fs_schedule_viewer_highlight_g2

0xdb98,	// (0x00067f5f) bg_sp_fs_schedule_viewer_highlight_g3

0xdba0,	// (0x00067f67) bg_sp_fs_schedule_viewer_highlight_g4

0xddfd,	// (0x000681c4) bg_sp_fs_schedule_viewer_highlight_g5

0xdbb0,	// (0x00067f77) bg_sp_fs_schedule_viewer_highlight_g6

0xdbb8,	// (0x00067f7f) bg_sp_fs_schedule_viewer_highlight_g7

0xdbc0,	// (0x00067f87) bg_sp_fs_schedule_viewer_highlight_g8

0xb322,	// (0x000656e9) bg_sp_fs_schedule_viewer_highlight_g9

0x0008,

0x0bb8,	// (0x0005af7f) bg_sp_fs_schedule_viewer_highlight_g

0xa7a8,	// (0x00064b6f) bg_main_sp_fs_ribbon_pane

0x7d04,	// (0x000620cb) main_sp_fs_ribbon_pane_g1

0xeea9,	// (0x00069270) main_sp_fs_ribbon_pane_t1

0x7d0d,	// (0x000620d4) main_sp_fs_ribbon_pane_t2

0xeeb8,	// (0x0006927f) main_sp_fs_ribbon_pane_t3

0x0002,

0xf8aa,	// (0x00069c71) main_sp_fs_ribbon_pane_t

0xeec7,	// (0x0006928e) main_sp_fs_ribbon_scheduler_pane

0xeecf,	// (0x00069296) bg_main_sp_fs_ribbon_pane_g1

0xeed8,	// (0x0006929f) bg_main_sp_fs_ribbon_pane_g2

0xeee1,	// (0x000692a8) bg_main_sp_fs_ribbon_pane_g3

0x0002,

0x0bd2,	// (0x0005af99) bg_main_sp_fs_ribbon_pane_g

0xeee9,	// (0x000692b0) main_sp_fs_ribbon_scheduler_pane_g1

0xeef2,	// (0x000692b9) main_sp_fs_ribbon_scheduler_pane_g2

0xeefb,	// (0x000692c2) main_sp_fs_ribbon_scheduler_pane_g3

0x0002,

0x0bd9,	// (0x0005afa0) main_sp_fs_ribbon_scheduler_pane_g

0xef04,	// (0x000692cb) list_cale_mrui_pane

0x7d1c,	// (0x000620e3) sp_fs_scroll_pane_cp07_ParamLimits

0x7d1c,	// (0x000620e3) sp_fs_scroll_pane_cp07

0x7d38,	// (0x000620ff) bg_sp_fs_schedule_viewer_highlight_ParamLimits

0x7d38,	// (0x000620ff) bg_sp_fs_schedule_viewer_highlight

0xef11,	// (0x000692d8) list_single_sp_fs_schedule_track_pane_cp01

0xef19,	// (0x000692e0) list_sp_fs_schedule_track_pane

0xef21,	// (0x000692e8) sp_fs_scroll_pane_cp06_ParamLimits

0xef21,	// (0x000692e8) sp_fs_scroll_pane_cp06

0xb131,	// (0x000654f8) bgmain_sp_fs_calendar_pane_g1

0x7d45,	// (0x0006210c) list_single_cale_mrui_pane_ParamLimits

0x7d45,	// (0x0006210c) list_single_cale_mrui_pane

0xa619,	// (0x000649e0) list_single_cale_mrui_row_pane_ParamLimits

0xa619,	// (0x000649e0) list_single_cale_mrui_row_pane

0xa626,	// (0x000649ed) list_single_cale_mrui_row_pane_g1_ParamLimits

0xa626,	// (0x000649ed) list_single_cale_mrui_row_pane_g1

0xa65e,	// (0x00064a25) list_single_cale_mrui_row_pane_t1_ParamLimits

0xa65e,	// (0x00064a25) list_single_cale_mrui_row_pane_t1

0x7d73,	// (0x0006213a) list_single_cale_mrui_row_pane_t2_ParamLimits

0x7d73,	// (0x0006213a) list_single_cale_mrui_row_pane_t2

0xa670,	// (0x00064a37) list_single_cale_mrui_row_pane_t3_ParamLimits

0xa670,	// (0x00064a37) list_single_cale_mrui_row_pane_t3

0xa69f,	// (0x00064a66) list_single_cale_mrui_row_pane_t4_ParamLimits

0xa69f,	// (0x00064a66) list_single_cale_mrui_row_pane_t4

0x0003,

0xf8b8,	// (0x00069c7f) list_single_cale_mrui_row_pane_t_ParamLimits

0xf8b8,	// (0x00069c7f) list_single_cale_mrui_row_pane_t

0x7dd9,	// (0x000621a0) list_single_cmail_header_editor_pane_bg_cp01_ParamLimits

0x7dd9,	// (0x000621a0) list_single_cmail_header_editor_pane_bg_cp01

0x7e01,	// (0x000621c8) list_single_cmail_header_editor_pane_bg_cp02_ParamLimits

0x7e01,	// (0x000621c8) list_single_cmail_header_editor_pane_bg_cp02

0x7e1d,	// (0x000621e4) main_radioblah_text_pane_t1_ParamLimits

0x7e1d,	// (0x000621e4) main_radioblah_text_pane_t1

0xef40,	// (0x00069307) cam6_indi_pane_cp01

0xef48,	// (0x0006930f) cam6_mode_pane_cp01

0xef50,	// (0x00069317) cam6_pano_pane

0xef59,	// (0x00069320) cam6_zoom_pane_cp01

0xef61,	// (0x00069328) cam6_pano_image_pane

0xef6c,	// (0x00069333) cam6_pano_pane_g1

0xe7e1,	// (0x00068ba8) cam6_pano_pane_g2

0xef75,	// (0x0006933c) cam6_pano_pane_g3

0xef7e,	// (0x00069345) cam6_pano_pane_g4

0xd87b,	// (0x00067c42) cam6_pano_pane_g5

0xef87,	// (0x0006934e) cam6_pano_pane_g6

0xef91,	// (0x00069358) cam6_pano_pane_g7

0xef99,	// (0x00069360) cam6_pano_pane_g8

0xefa2,	// (0x00069369) cam6_pano_pane_g9

0x0008,

0xf8c1,	// (0x00069c88) cam6_pano_pane_g

0xa7a8,	// (0x00064b6f) main_browser_tag_pane

0xedc2,	// (0x00069189) grid_navstr_albumart_pane

0xefad,	// (0x00069374) cell_navstr_albumart_pane_ParamLimits

0xefad,	// (0x00069374) cell_navstr_albumart_pane

0xefcd,	// (0x00069394) cell_navstr_albumart_pane_g1

0xcd29,	// (0x000670f0) cell_navstr_albumart_pane_g2

0xcd39,	// (0x00067100) cell_navstr_albumart_pane_g3

0xcd31,	// (0x000670f8) cell_navstr_albumart_pane_g4

0x0003,

0xf8d4,	// (0x00069c9b) cell_navstr_albumart_pane_g

0x7e38,	// (0x000621ff) bt_list_pane_ParamLimits

0x7e38,	// (0x000621ff) bt_list_pane

0x7e59,	// (0x00062220) bt_list_pane_t1

0x7e68,	// (0x0006222f) bt_list_pane_t2

0x0001,

0xf8dd,	// (0x00069ca4) bt_list_pane_t

0xa7a8,	// (0x00064b6f) main_cale_prevew_pane

0x7e77,	// (0x0006223e) popup_cale_preview_window_ParamLimits

0x7e77,	// (0x0006223e) popup_cale_preview_window

0xa7e5,	// (0x00064bac) bg_popup_preview_window_pane_cp05_ParamLimits

0xa7e5,	// (0x00064bac) bg_popup_preview_window_pane_cp05

0xefd5,	// (0x0006939c) list_cale_preview_pane_ParamLimits

0xefd5,	// (0x0006939c) list_cale_preview_pane

0x7e90,	// (0x00062257) list_double_cale_preview_pane_ParamLimits

0x7e90,	// (0x00062257) list_double_cale_preview_pane

0x7ea2,	// (0x00062269) list_single_cale_preview_pane_ParamLimits

0x7ea2,	// (0x00062269) list_single_cale_preview_pane

0x7eb6,	// (0x0006227d) list_single_cale_preview_pane_g1

0x7ebe,	// (0x00062285) list_single_cale_preview_pane_t1_ParamLimits

0x7ebe,	// (0x00062285) list_single_cale_preview_pane_t1

0x7ed3,	// (0x0006229a) list_double_cale_preview_pane_g1

0x7edb,	// (0x000622a2) list_double_cale_preview_pane_t1_ParamLimits

0x7edb,	// (0x000622a2) list_double_cale_preview_pane_t1

0x7ef0,	// (0x000622b7) list_double_cale_preview_pane_t2_ParamLimits

0x7ef0,	// (0x000622b7) list_double_cale_preview_pane_t2

0x0001,

0xf8e2,	// (0x00069ca9) list_double_cale_preview_pane_t_ParamLimits

0xf8e2,	// (0x00069ca9) list_double_cale_preview_pane_t

0xa7a8,	// (0x00064b6f) main_ezdial_pane

0xa7e5,	// (0x00064bac) main_sp_fs_email_pane_ParamLimits

0x773b,	// (0x00061b02) cmail_ddmenu_btn01_pane_ParamLimits

0x773b,	// (0x00061b02) cmail_ddmenu_btn01_pane

0x7750,	// (0x00061b17) cmail_ddmenu_btn02_pane_ParamLimits

0x7750,	// (0x00061b17) cmail_ddmenu_btn02_pane

0x7768,	// (0x00061b2f) cmail_ddmenu_btn03_pane_ParamLimits

0x7768,	// (0x00061b2f) cmail_ddmenu_btn03_pane

0x77fd,	// (0x00061bc4) main_sp_fs_ctrlbar_pane_ParamLimits

0x7813,	// (0x00061bda) main_sp_fs_listscroll_pane_te_cp01_ParamLimits

0x7aba,	// (0x00061e81) list_cmail_body_pane_ParamLimits

0xed42,	// (0x00069109) bg_button_pane_cp12

0xed4b,	// (0x00069112) list_single_cmail_header_detail_pane_g3_ParamLimits

0xed4b,	// (0x00069112) list_single_cmail_header_detail_pane_g3

0xa577,	// (0x0006493e) list_single_cmail_header_detail_pane_t2_ParamLimits

0xa577,	// (0x0006493e) list_single_cmail_header_detail_pane_t2

0x0001,

0xf89b,	// (0x00069c62) list_single_cmail_header_detail_pane_t_ParamLimits

0xf89b,	// (0x00069c62) list_single_cmail_header_detail_pane_t

0xa5b8,	// (0x0006497f) phacti_term_pane_t2_ParamLimits

0xa5b8,	// (0x0006497f) phacti_term_pane_t2

0x0001,

0xf8a0,	// (0x00069c67) phacti_term_pane_t_ParamLimits

0xf8a0,	// (0x00069c67) phacti_term_pane_t

0xefe1,	// (0x000693a8) aid_size_list_single_double

0x7f08,	// (0x000622cf) popup_ezdial_listscroll_window

0x7f2c,	// (0x000622f3) popup_number_entry_window_cp01

0xb0fb,	// (0x000654c2) bg_popup_call_pane_cp09

0xefed,	// (0x000693b4) ezdial_list_pane

0xeff5,	// (0x000693bc) scroll_pane_cp23

0xca9f,	// (0x00066e66) bg_button_pane_cp028_ParamLimits

0xca9f,	// (0x00066e66) bg_button_pane_cp028

0x7f3a,	// (0x00062301) cmail_ddmenu_btn01_pane_g1_ParamLimits

0x7f3a,	// (0x00062301) cmail_ddmenu_btn01_pane_g1

0x7f4a,	// (0x00062311) cmail_ddmenu_btn01_pane_g2_ParamLimits

0x7f4a,	// (0x00062311) cmail_ddmenu_btn01_pane_g2

0x0001,

0xf8e7,	// (0x00069cae) cmail_ddmenu_btn01_pane_g_ParamLimits

0xf8e7,	// (0x00069cae) cmail_ddmenu_btn01_pane_g

0xeffd,	// (0x000693c4) cmail_ddmenu_btn01_pane_t1_ParamLimits

0xeffd,	// (0x000693c4) cmail_ddmenu_btn01_pane_t1

0xbc6e,	// (0x00066035) bg_button_pane_cp029_ParamLimits

0xbc6e,	// (0x00066035) bg_button_pane_cp029

0x7f4a,	// (0x00062311) cmail_ddmenu_btn02_pane_g1_ParamLimits

0x7f4a,	// (0x00062311) cmail_ddmenu_btn02_pane_g1

0x7f62,	// (0x00062329) cmail_ddmenu_btn02_pane_t1_ParamLimits

0x7f62,	// (0x00062329) cmail_ddmenu_btn02_pane_t1

0xaeb7,	// (0x0006527e) bg_button_pane_cp031_ParamLimits

0xaeb7,	// (0x0006527e) bg_button_pane_cp031

0x7f4a,	// (0x00062311) cmail_ddmenu_btn03_pane_g1_ParamLimits

0x7f4a,	// (0x00062311) cmail_ddmenu_btn03_pane_g1

0x7f62,	// (0x00062329) cmail_ddmenu_btn03_pane_t1_ParamLimits

0x7f62,	// (0x00062329) cmail_ddmenu_btn03_pane_t1

0x5250,	// (0x0005f617) cell_dialer2_keypad_pane_t1_ParamLimits

0x526a,	// (0x0005f631) cell_dialer2_keypad_pane_t1_copy1_ParamLimits

0x526a,	// (0x0005f631) cell_dialer2_keypad_pane_t1_copy1

0x7035,	// (0x000613fc) ncimui_group_button_pane

0xa7e5,	// (0x00064bac) main_sp_fs_calendar_pane_ParamLimits

0x7ae2,	// (0x00061ea9) list_single_cmail_header_caption_pane_ParamLimits

0xa5cd,	// (0x00064994) aid_recal_txt_sm_pane

0xa7a8,	// (0x00064b6f) mian_recal_day_pane

0xa607,	// (0x000649ce) popup_sp_fs_cale_preview_window_ParamLimits

0xf012,	// (0x000693d9) list_recal_day_pane

0xa6e9,	// (0x00064ab0) list_single_recal_day_pane_ParamLimits

0xa6e9,	// (0x00064ab0) list_single_recal_day_pane

0xf039,	// (0x00069400) list_single_recal_day_pane_g1_ParamLimits

0xf039,	// (0x00069400) list_single_recal_day_pane_g1

0xa6fb,	// (0x00064ac2) list_single_recal_day_pane_g2_ParamLimits

0xa6fb,	// (0x00064ac2) list_single_recal_day_pane_g2

0xa707,	// (0x00064ace) list_single_recal_day_pane_g3_ParamLimits

0xa707,	// (0x00064ace) list_single_recal_day_pane_g3

0x7f86,	// (0x0006234d) list_single_recal_day_pane_g4_ParamLimits

0x7f86,	// (0x0006234d) list_single_recal_day_pane_g4

0xa713,	// (0x00064ada) list_single_recal_day_pane_g5_ParamLimits

0xa713,	// (0x00064ada) list_single_recal_day_pane_g5

0xa71f,	// (0x00064ae6) list_single_recal_day_pane_g6_ParamLimits

0xa71f,	// (0x00064ae6) list_single_recal_day_pane_g6

0x0004,

0xf8f6,	// (0x00069cbd) list_single_recal_day_pane_g_ParamLimits

0xf8f6,	// (0x00069cbd) list_single_recal_day_pane_g

0xa733,	// (0x00064afa) list_single_recal_day_pane_t1

0xa745,	// (0x00064b0c) list_single_recal_day_pane_t2

0x0001,

0xf901,	// (0x00069cc8) list_single_recal_day_pane_t

0x7f9e,	// (0x00062365) ncimui_query_button_pane_ParamLimits

0x7f9e,	// (0x00062365) ncimui_query_button_pane

0x7fae,	// (0x00062375) ncimui_query_button_pane_t1_ParamLimits

0x7fae,	// (0x00062375) ncimui_query_button_pane_t1

0x980a,	// (0x00063bd1) ncimui_query_button_pane_t2_ParamLimits

0x980a,	// (0x00063bd1) ncimui_query_button_pane_t2

0x0001,

0xf906,	// (0x00069ccd) ncimui_query_button_pane_t_ParamLimits

0xf906,	// (0x00069ccd) ncimui_query_button_pane_t

0x7fc1,	// (0x00062388) query_button_pane_ParamLimits

0x7fc1,	// (0x00062388) query_button_pane

0xa7a8,	// (0x00064b6f) bg_button_pane_cp0028

0x981d,	// (0x00063be4) query_button_pane_t1

0x3d7d,	// (0x0005e144) main_tport_pane_ParamLimits

0x79c4,	// (0x00061d8b) bg_popup_window_pane_cp01_ParamLimits

0x79c4,	// (0x00061d8b) bg_popup_window_pane_cp01

0x79d2,	// (0x00061d99) heading_pane_cp08_ParamLimits

0x79d2,	// (0x00061d99) heading_pane_cp08

0x79e0,	// (0x00061da7) heading_pane_cp07_ParamLimits

0x79e0,	// (0x00061da7) heading_pane_cp07

0x7a4f,	// (0x00061e16) cell_tport_appsw_pane_g2

0x0002,

0xf888,	// (0x00069c4f) cell_tport_appsw_pane_g

0xa194,	// (0x0006455b) input_candi_list_open_g1

0xb505,	// (0x000658cc) list_cale_time_pane_g6_ParamLimits

0xb505,	// (0x000658cc) list_cale_time_pane_g6

0x4277,	// (0x0005e63e) aid_size_touch_calib_1_ParamLimits

0x4277,	// (0x0005e63e) aid_size_touch_calib_1

0x4283,	// (0x0005e64a) aid_size_touch_calib_2_ParamLimits

0x4283,	// (0x0005e64a) aid_size_touch_calib_2

0x4291,	// (0x0005e658) aid_size_touch_calib_3_ParamLimits

0x4291,	// (0x0005e658) aid_size_touch_calib_3

0x42a1,	// (0x0005e668) aid_size_touch_calib_4_ParamLimits

0x42a1,	// (0x0005e668) aid_size_touch_calib_4

0x42af,	// (0x0005e676) main_touch_calib_button_group_pane_ParamLimits

0x42af,	// (0x0005e676) main_touch_calib_button_group_pane

0x42bd,	// (0x0005e684) main_touch_calib_pane_g1_ParamLimits

0x42c9,	// (0x0005e690) main_touch_calib_pane_g2_ParamLimits

0x42d5,	// (0x0005e69c) main_touch_calib_pane_g3_ParamLimits

0x42e1,	// (0x0005e6a8) main_touch_calib_pane_g4_ParamLimits

0xf45b,	// (0x00069822) main_touch_calib_pane_g_ParamLimits

0x42ed,	// (0x0005e6b4) main_touch_calib_pane_t1_ParamLimits

0x4306,	// (0x0005e6cd) main_touch_calib_pane_t2_ParamLimits

0x431f,	// (0x0005e6e6) main_touch_calib_pane_t3_ParamLimits

0x4335,	// (0x0005e6fc) main_touch_calib_pane_t4_ParamLimits

0x434b,	// (0x0005e712) main_touch_calib_pane_t5_ParamLimits

0xf464,	// (0x0006982b) main_touch_calib_pane_t_ParamLimits

0xd624,	// (0x000679eb) list_single_fp_cale_pane_g3_ParamLimits

0xd624,	// (0x000679eb) list_single_fp_cale_pane_g3

0x3d61,	// (0x0005e128) bg_button_pane_cp012_ParamLimits

0x3d61,	// (0x0005e128) bg_vkb2_func_pane_cp03_ParamLimits

0x614c,	// (0x00060513) cell_vitu2_function_top_pane_g1_ParamLimits

0x3d61,	// (0x0005e128) bg_vkb2_func_pane_cp04_ParamLimits

0x6fbd,	// (0x00061384) main_ncimui_button_group_pane_ParamLimits

0x6fbd,	// (0x00061384) main_ncimui_button_group_pane

0x7023,	// (0x000613ea) main_ncimui_pane_t3_ParamLimits

0x7023,	// (0x000613ea) main_ncimui_pane_t3

0xede1,	// (0x000691a8) phacti_button_group_pane

0xefe1,	// (0x000693a8) aid_size_list_single_double_ParamLimits

0x7f08,	// (0x000622cf) popup_ezdial_listscroll_window_ParamLimits

0x7f2c,	// (0x000622f3) popup_number_entry_window_cp01_ParamLimits

0x7fce,	// (0x00062395) phacti_button_pane_ParamLimits

0x7fce,	// (0x00062395) phacti_button_pane

0xa7a8,	// (0x00064b6f) bg_button_pane_cp14

0x982b,	// (0x00063bf2) phacti_button_pane_t1

0x7fdf,	// (0x000623a6) main_touch_calib_button_pane_ParamLimits

0x7fdf,	// (0x000623a6) main_touch_calib_button_pane

0xaf37,	// (0x000652fe) bg_button_pane_cp18_ParamLimits

0xaf37,	// (0x000652fe) bg_button_pane_cp18

0x9839,	// (0x00063c00) main_touch_calib_button_pane_t1_ParamLimits

0x9839,	// (0x00063c00) main_touch_calib_button_pane_t1

0x984f,	// (0x00063c16) main_touch_calib_button_pane_t2_ParamLimits

0x984f,	// (0x00063c16) main_touch_calib_button_pane_t2

0x0001,

0xf90b,	// (0x00069cd2) main_touch_calib_button_pane_t_ParamLimits

0xf90b,	// (0x00069cd2) main_touch_calib_button_pane_t

0xa7a8,	// (0x00064b6f) cell_ncimui_button_pane

0xa7a8,	// (0x00064b6f) bg_button_pane_cp032

0x986d,	// (0x00063c34) cell_ncimui_button_pane_t1

0x52c6,	// (0x0005f68d) image3_infobar_pane_ParamLimits

0x52c6,	// (0x0005f68d) image3_infobar_pane

0x73e0,	// (0x000617a7) fs_bigclock_status_pane_ParamLimits

0x73e0,	// (0x000617a7) fs_bigclock_status_pane

0x73ed,	// (0x000617b4) main_fs_bigclock_clock_pane_ParamLimits

0x73ed,	// (0x000617b4) main_fs_bigclock_clock_pane

0x7401,	// (0x000617c8) main_fs_bigclock_indi_pane_ParamLimits

0x7401,	// (0x000617c8) main_fs_bigclock_indi_pane

0x7429,	// (0x000617f0) main_fs_bigclock_swipe_pane_ParamLimits

0x7429,	// (0x000617f0) main_fs_bigclock_swipe_pane

0xa7a8,	// (0x00064b6f) main_fs_clock_dumped_data

0xe8ee,	// (0x00068cb5) list_single_fs_bigclock_indicator_pane_g1_ParamLimits

0xe8ee,	// (0x00068cb5) list_single_fs_bigclock_indicator_pane_g1

0xe90a,	// (0x00068cd1) list_single_fs_bigclock_indicator_pane_g2_ParamLimits

0xe90a,	// (0x00068cd1) list_single_fs_bigclock_indicator_pane_g2

0xe924,	// (0x00068ceb) list_single_fs_bigclock_indicator_pane_g3_ParamLimits

0xe924,	// (0x00068ceb) list_single_fs_bigclock_indicator_pane_g3

0xe93e,	// (0x00068d05) list_single_fs_bigclock_indicator_pane_g4_ParamLimits

0xe93e,	// (0x00068d05) list_single_fs_bigclock_indicator_pane_g4

0x0004,

0x0ae7,	// (0x0005aeae) list_single_fs_bigclock_indicator_pane_g_ParamLimits

0x0ae7,	// (0x0005aeae) list_single_fs_bigclock_indicator_pane_g

0xe969,	// (0x00068d30) list_single_fs_bigclock_indicator_pane_t1_ParamLimits

0xe969,	// (0x00068d30) list_single_fs_bigclock_indicator_pane_t1

0xe991,	// (0x00068d58) list_single_fs_bigclock_indicator_pane_t2_ParamLimits

0xe991,	// (0x00068d58) list_single_fs_bigclock_indicator_pane_t2

0xe9b9,	// (0x00068d80) list_single_fs_bigclock_indicator_pane_t3_ParamLimits

0xe9b9,	// (0x00068d80) list_single_fs_bigclock_indicator_pane_t3

0xe9e1,	// (0x00068da8) list_single_fs_bigclock_indicator_pane_t4_ParamLimits

0xe9e1,	// (0x00068da8) list_single_fs_bigclock_indicator_pane_t4

0x0004,

0x0af2,	// (0x0005aeb9) list_single_fs_bigclock_indicator_pane_t_ParamLimits

0x0af2,	// (0x0005aeb9) list_single_fs_bigclock_indicator_pane_t

0x987b,	// (0x00063c42) image3_infobar_fav_pane_ParamLimits

0x987b,	// (0x00063c42) image3_infobar_fav_pane

0x988b,	// (0x00063c52) image3_infobar_loc_pane_ParamLimits

0x988b,	// (0x00063c52) image3_infobar_loc_pane

0x989f,	// (0x00063c66) image3_infobar_time_pane_ParamLimits

0x989f,	// (0x00063c66) image3_infobar_time_pane

0xb131,	// (0x000654f8) image3_infobar_time_pane_g1

0x98af,	// (0x00063c76) image3_infobar_time_pane_t1

0xb131,	// (0x000654f8) image3_infobar_loc_pane_g1

0x98bd,	// (0x00063c84) image3_infobar_loc_pane_g2

0x0001,

0xf910,	// (0x00069cd7) image3_infobar_loc_pane_g

0x98c5,	// (0x00063c8c) image3_infobar_loc_pane_t1

0xb131,	// (0x000654f8) image3_infobar_fav_pane_g1

0x98d3,	// (0x00063c9a) image3_infobar_fav_pane_g2

0x0001,

0xf915,	// (0x00069cdc) image3_infobar_fav_pane_g

0x98db,	// (0x00063ca2) fs_bigclock_status_battery_pane

0x98e4,	// (0x00063cab) fs_bigclock_status_signal_pane

0x98ed,	// (0x00063cb4) fs_bigclock_status_title_pane

0x98f6,	// (0x00063cbd) fs_bigclock_status_signal_pane_g1

0x98ff,	// (0x00063cc6) fs_bigclock_status_signal_pane_g2

0x0001,

0xf91a,	// (0x00069ce1) fs_bigclock_status_signal_pane_g

0x9907,	// (0x00063cce) fs_bigclock_status_battery_pane_g1

0x9910,	// (0x00063cd7) fs_bigclock_status_battery_pane_g2

0x0001,

0xf91f,	// (0x00069ce6) fs_bigclock_status_battery_pane_g

0x9918,	// (0x00063cdf) fs_bigclock_status_title_pane_t1

0x7fef,	// (0x000623b6) main_fs_bigclock_clock_pane_g1

0x7fef,	// (0x000623b6) main_fs_bigclock_clock_pane_g2

0x7ffc,	// (0x000623c3) main_fs_bigclock_clock_pane_g3

0x7ffc,	// (0x000623c3) main_fs_bigclock_clock_pane_g4

0x0003,

0xf924,	// (0x00069ceb) main_fs_bigclock_clock_pane_g

0x8008,	// (0x000623cf) main_fs_bigclock_clock_pane_t1

0x801b,	// (0x000623e2) main_fs_bigclock_clock_pane_t2

0x0001,

0xf92d,	// (0x00069cf4) main_fs_bigclock_clock_pane_t

0x9926,	// (0x00063ced) list_single_fs_bigclock_indicator_pane_ParamLimits

0x9926,	// (0x00063ced) list_single_fs_bigclock_indicator_pane

0x9937,	// (0x00063cfe) list_single_fs_bigclock_pane_ParamLimits

0x9937,	// (0x00063cfe) list_single_fs_bigclock_pane

0x995d,	// (0x00063d24) main_fs_bigclock_indicator_pane_t1

0x996c,	// (0x00063d33) list_single_fs_bigclock_pane_g1

0x9974,	// (0x00063d3b) list_single_fs_bigclock_pane_t1

0xb131,	// (0x000654f8) main_fs_bigclock_swipe_pane_g1

0x99b7,	// (0x00063d7e) main_fs_bigclock_swipe_pane_g2

0x0001,

0xf93e,	// (0x00069d05) main_fs_bigclock_swipe_pane_g

0x99bf,	// (0x00063d86) main_fs_bigclock_swipe_pane_t1_ParamLimits

0x99bf,	// (0x00063d86) main_fs_bigclock_swipe_pane_t1

0x2f7f,	// (0x0005d346) call_type_pane_ParamLimits

0xa7a8,	// (0x00064b6f) main_btmg_pane

0xa652,	// (0x00064a19) list_single_cale_mrui_row_pane_g2_ParamLimits

0xa652,	// (0x00064a19) list_single_cale_mrui_row_pane_g2

0x0002,

0xf8b1,	// (0x00069c78) list_single_cale_mrui_row_pane_g_ParamLimits

0xf8b1,	// (0x00069c78) list_single_cale_mrui_row_pane_g

0xa6d8,	// (0x00064a9f) list_recal_vselct_arw_lo_pane

0xf031,	// (0x000693f8) list_recal_vselct_arw_up_pane

0xa6e0,	// (0x00064aa7) list_recal_vselct_pane

0x8072,	// (0x00062439) btmg_button_pane

0x807e,	// (0x00062445) main_btmg_pane_g1

0xa7a8,	// (0x00064b6f) bg_button_pane_cp044

0x99dc,	// (0x00063da3) btmg_button_pane_t1

0xceb9,	// (0x00067280) aid_listscroll_gen

0xa7e5,	// (0x00064bac) main_cntbar_detail_pane

0xed15,	// (0x000690dc) list_cmail_folder_pane

0xdca4,	// (0x0006806b) sp_fs_scroll_pane_cp03_ParamLimits

0x7ae2,	// (0x00061ea9) list_single_fs_dyc_pane_cp01_ParamLimits

0x7ae2,	// (0x00061ea9) list_single_fs_dyc_pane_cp01

0x99ea,	// (0x00063db1) aid_size_cmail_indent

0xa757,	// (0x00064b1e) list_single_dyc_row_pane_cp01

0x80a6,	// (0x0006246d) cntbar_detail_list_pane_ParamLimits

0x80a6,	// (0x0006246d) cntbar_detail_list_pane

0x80e0,	// (0x000624a7) main_cntbar_detail_cont_pane_ParamLimits

0x80e0,	// (0x000624a7) main_cntbar_detail_cont_pane

0x2f73,	// (0x0005d33a) scroll_pane_cp032_ParamLimits

0x2f73,	// (0x0005d33a) scroll_pane_cp032

0x80ec,	// (0x000624b3) cntbar_detail_list_event_pane_ParamLimits

0x80ec,	// (0x000624b3) cntbar_detail_list_event_pane

0x80b2,	// (0x00062479) cntbar_detail_list_shct_pane

0xb390,	// (0x00065757) aid_list_gen

0x99f3,	// (0x00063dba) aid_scroll

0x99fc,	// (0x00063dc3) aid_size_touch_scroll_bar

0xb0a0,	// (0x00065467) aid_list_double

0x8100,	// (0x000624c7) aid_list_single

0x8109,	// (0x000624d0) aid_list_single_lg

0xa760,	// (0x00064b27) aid_list_z_g_a_sm

0xa768,	// (0x00064b2f) aid_list_z_g_d

0xa770,	// (0x00064b37) aid_txt_z_prm

0xa77e,	// (0x00064b45) aid_txt_z_prm_cp01

0xa78c,	// (0x00064b53) aid_txt_z_sec

0x8112,	// (0x000624d9) main_cntbar_detail_cont_pane_g1_ParamLimits

0x8112,	// (0x000624d9) main_cntbar_detail_cont_pane_g1

0x811f,	// (0x000624e6) main_cntbar_detail_cont_pane_g2_ParamLimits

0x811f,	// (0x000624e6) main_cntbar_detail_cont_pane_g2

0x0001,

0xf943,	// (0x00069d0a) main_cntbar_detail_cont_pane_g_ParamLimits

0xf943,	// (0x00069d0a) main_cntbar_detail_cont_pane_g

0x9a05,	// (0x00063dcc) main_cntbar_detail_cont_pane_t1

0x9a13,	// (0x00063dda) main_cntbar_detail_cont_pane_t2

0x9a21,	// (0x00063de8) main_cntbar_detail_cont_pane_t3

0x0002,

0xf948,	// (0x00069d0f) main_cntbar_detail_cont_pane_t

0x812b,	// (0x000624f2) cell_cntbar_detail_list_shct_pane_ParamLimits

0x812b,	// (0x000624f2) cell_cntbar_detail_list_shct_pane

0x9a2f,	// (0x00063df6) cntbar_detail_list_shct_pane_g1

0x9a38,	// (0x00063dff) cntbar_detail_list_shct_pane_g2

0x0001,

0xf94f,	// (0x00069d16) cntbar_detail_list_shct_pane_g

0x813f,	// (0x00062506) cntbar_detail_list_event_pane_g1_ParamLimits

0x813f,	// (0x00062506) cntbar_detail_list_event_pane_g1

0x814b,	// (0x00062512) cntbar_detail_list_event_pane_g2_ParamLimits

0x814b,	// (0x00062512) cntbar_detail_list_event_pane_g2

0x0005,

0xf954,	// (0x00069d1b) cntbar_detail_list_event_pane_g_ParamLimits

0xf954,	// (0x00069d1b) cntbar_detail_list_event_pane_g

0x81b7,	// (0x0006257e) cntbar_detail_list_event_pane_t1_ParamLimits

0x81b7,	// (0x0006257e) cntbar_detail_list_event_pane_t1

0x81cc,	// (0x00062593) cntbar_detail_list_event_pane_t2_ParamLimits

0x81cc,	// (0x00062593) cntbar_detail_list_event_pane_t2

0x0002,

0xf961,	// (0x00069d28) cntbar_detail_list_event_pane_t_ParamLimits

0xf961,	// (0x00069d28) cntbar_detail_list_event_pane_t

0xb131,	// (0x000654f8) cell_cntbar_detail_list_shct_pane_g1

0xbaf4,	// (0x00065ebb) navi_pane_mv_g3

0xa7e5,	// (0x00064bac) main_cntbar_detail_pane_ParamLimits

0xa7a8,	// (0x00064b6f) main_notif_wgt_pane

0x4f50,	// (0x0005f317) aid_tch_main_mp4_pane_g4

0x51af,	// (0x0005f576) popup_slider_window_cp02

0xa6ce,	// (0x00064a95) list_recal_day_event_pane

0x8086,	// (0x0006244d) cntbar_detail_btn_pane_ParamLimits

0x8086,	// (0x0006244d) cntbar_detail_btn_pane

0x8096,	// (0x0006245d) cntbar_detail_btn_pane_cp01_ParamLimits

0x8096,	// (0x0006245d) cntbar_detail_btn_pane_cp01

0x80b2,	// (0x00062479) cntbar_detail_list_shct_pane_ParamLimits

0x80be,	// (0x00062485) cntbar_detail_pane_g1_ParamLimits

0x80be,	// (0x00062485) cntbar_detail_pane_g1

0x80ca,	// (0x00062491) cntbar_detail_pane_t1_ParamLimits

0x80ca,	// (0x00062491) cntbar_detail_pane_t1

0x8157,	// (0x0006251e) cntbar_detail_list_event_pane_g3_ParamLimits

0x8157,	// (0x0006251e) cntbar_detail_list_event_pane_g3

0x816f,	// (0x00062536) cntbar_detail_list_event_pane_g4_ParamLimits

0x816f,	// (0x00062536) cntbar_detail_list_event_pane_g4

0x8187,	// (0x0006254e) cntbar_detail_list_event_pane_g5_ParamLimits

0x8187,	// (0x0006254e) cntbar_detail_list_event_pane_g5

0x819f,	// (0x00062566) cntbar_detail_list_event_pane_g6_ParamLimits

0x819f,	// (0x00062566) cntbar_detail_list_event_pane_g6

0x81e1,	// (0x000625a8) cntbar_detail_list_event_pane_t3_ParamLimits

0x81e1,	// (0x000625a8) cntbar_detail_list_event_pane_t3

0x81f3,	// (0x000625ba) popup_notif_wgt_window_ParamLimits

0x81f3,	// (0x000625ba) popup_notif_wgt_window

0x8203,	// (0x000625ca) popup_submenu_window_cp01_ParamLimits

0x8203,	// (0x000625ca) popup_submenu_window_cp01

0xb0fb,	// (0x000654c2) bg_popup_window_pane_cp10

0x9a41,	// (0x00063e08) listscroll_notif_wgt_pane

0x9a53,	// (0x00063e1a) list_notif_wgt_window

0x9a5c,	// (0x00063e23) scroll_pane_cp033

0x8211,	// (0x000625d8) list_notif_wgt_row_pane_ParamLimits

0x8211,	// (0x000625d8) list_notif_wgt_row_pane

0x9a65,	// (0x00063e2c) aid_size_list_notif_wgt_del

0x9a72,	// (0x00063e39) list_notif_wgt_row_pane_g1

0x9a7e,	// (0x00063e45) list_notif_wgt_row_pane_g2

0x9a8d,	// (0x00063e54) list_notif_wgt_row_pane_g3

0x0002,

0xf968,	// (0x00069d2f) list_notif_wgt_row_pane_g

0x9a9a,	// (0x00063e61) list_notif_wgt_row_pane_t1

0x9ab0,	// (0x00063e77) list_notif_wgt_row_pane_t2

0x9ac2,	// (0x00063e89) list_notif_wgt_row_pane_t3

0x0002,

0xf96f,	// (0x00069d36) list_notif_wgt_row_pane_t

0xde17,	// (0x000681de) list_recal_day_event_pane_g1

0x9ad4,	// (0x00063e9b) list_recal_day_event_pane_t1

0xa7a8,	// (0x00064b6f) bg_button_pane_cp045

0x8223,	// (0x000625ea) cntbar_detail_btn_pane_t1

0xbc6e,	// (0x00066035) main_callh_pane_ParamLimits

0xbc6e,	// (0x00066035) main_callh_pane

0xa7a8,	// (0x00064b6f) main_coverflow0_pane

0xa7a8,	// (0x00064b6f) main_wgtman_pane

0x7441,	// (0x00061808) main_fs_bigclock_unlock_btn_pane_ParamLimits

0x7441,	// (0x00061808) main_fs_bigclock_unlock_btn_pane

0x7a47,	// (0x00061e0e) bg_button_pane_cp16

0x7a57,	// (0x00061e1e) cell_tport_appsw_pane_g3

0x8231,	// (0x000625f8) cf0_flow_pane_ParamLimits

0x8231,	// (0x000625f8) cf0_flow_pane

0x9ae3,	// (0x00063eaa) listscroll_cf0_pane

0x9aee,	// (0x00063eb5) main_cf0_pane_g1

0x8240,	// (0x00062607) main_cf0_pane_t1_ParamLimits

0x8240,	// (0x00062607) main_cf0_pane_t1

0x8254,	// (0x0006261b) main_cf0_pane_t2_ParamLimits

0x8254,	// (0x0006261b) main_cf0_pane_t2

0x0001,

0xf97b,	// (0x00069d42) main_cf0_pane_t_ParamLimits

0xf97b,	// (0x00069d42) main_cf0_pane_t

0x9b00,	// (0x00063ec7) scroll_pane_cp11

0x8268,	// (0x0006262f) cf0_flow_pane_g1

0x8270,	// (0x00062637) cf0_flow_pane_g2

0x0001,

0xf980,	// (0x00069d47) cf0_flow_pane_g

0x8278,	// (0x0006263f) cf0_flow_pane_t1

0xa7a8,	// (0x00064b6f) main_call6_pane

0xa7a8,	// (0x00064b6f) main_calllock_pane

0x8286,	// (0x0006264d) call6_btn_grp_pane_ParamLimits

0x8286,	// (0x0006264d) call6_btn_grp_pane

0x8295,	// (0x0006265c) call6_pane_g1_ParamLimits

0x8295,	// (0x0006265c) call6_pane_g1

0x82a5,	// (0x0006266c) popup_call6_1st_window_ParamLimits

0x82a5,	// (0x0006266c) popup_call6_1st_window

0x82b3,	// (0x0006267a) popup_call6_2nd_window_ParamLimits

0x82b3,	// (0x0006267a) popup_call6_2nd_window

0x82c1,	// (0x00062688) cell_call6_btn_pane_ParamLimits

0x82c1,	// (0x00062688) cell_call6_btn_pane

0xb0fb,	// (0x000654c2) bg_popup_call2_in_pane_cp03

0x9b0b,	// (0x00063ed2) popup_call6_1st_window_g1

0x9b13,	// (0x00063eda) popup_call6_1st_window_g2

0x9b1b,	// (0x00063ee2) popup_call6_1st_window_g3

0x0002,

0xf985,	// (0x00069d4c) popup_call6_1st_window_g

0x9b23,	// (0x00063eea) popup_call6_1st_window_t1

0x9b32,	// (0x00063ef9) popup_call6_1st_window_t2

0x9b40,	// (0x00063f07) popup_call6_1st_window_t3

0x0002,

0xf98c,	// (0x00069d53) popup_call6_1st_window_t

0xb0fb,	// (0x000654c2) bg_popup_call2_in_pane_cp04

0x9b4e,	// (0x00063f15) popup_call6_2nd_window_g1

0x9b56,	// (0x00063f1d) popup_call6_2nd_window_g2

0x9b5e,	// (0x00063f25) popup_call6_2nd_window_g3

0x0002,

0xf993,	// (0x00069d5a) popup_call6_2nd_window_g

0x9b66,	// (0x00063f2d) popup_call6_2nd_window_t1

0x1189,	// (0x0005b550) bg_button_pane_cp15

0x82d0,	// (0x00062697) cell_call6_btn_pane_g1

0x82d9,	// (0x000626a0) cell_call6_btn_pane_t1

0x82e8,	// (0x000626af) listscroll_wgtman_pane_ParamLimits

0x82e8,	// (0x000626af) listscroll_wgtman_pane

0x8304,	// (0x000626cb) wgtman_btn_pane_ParamLimits

0x8304,	// (0x000626cb) wgtman_btn_pane

0xb908,	// (0x00065ccf) aid_scroll_copy1

0x9b75,	// (0x00063f3c) list_wgtman_pane

0x8339,	// (0x00062700) wgtman_btn_pane_g1_ParamLimits

0x8339,	// (0x00062700) wgtman_btn_pane_g1

0x8361,	// (0x00062728) wgtman_btn_pane_t1_ParamLimits

0x8361,	// (0x00062728) wgtman_btn_pane_t1

0x9b7f,	// (0x00063f46) wgtman_btn_pane_t2_ParamLimits

0x9b7f,	// (0x00063f46) wgtman_btn_pane_t2

0x0001,

0xf99a,	// (0x00069d61) wgtman_btn_pane_t_ParamLimits

0xf99a,	// (0x00069d61) wgtman_btn_pane_t

0x8398,	// (0x0006275f) listrow_wgtman_pane_ParamLimits

0x8398,	// (0x0006275f) listrow_wgtman_pane

0x83b4,	// (0x0006277b) listrow_wgtman_pane_g1

0x83c1,	// (0x00062788) listrow_wgtman_pane_g2

0x0001,

0xf99f,	// (0x00069d66) listrow_wgtman_pane_g

0x83df,	// (0x000627a6) listrow_wgtman_pane_t1

0x83f7,	// (0x000627be) listrow_wgtman_pane_t2

0x0001,

0xf9a4,	// (0x00069d6b) listrow_wgtman_pane_t

0x841d,	// (0x000627e4) wait_bar_pane_cp09

0x9b96,	// (0x00063f5d) main_calllock_btn_pane

0x9ba0,	// (0x00063f67) main_calllock_pane_g1

0xa7a8,	// (0x00064b6f) bg_button_pane_cp17

0x9ba8,	// (0x00063f6f) main_calllock_btn_pane_g1

0x9bb1,	// (0x00063f78) main_calllock_btn_pane_t1

0xa7a8,	// (0x00064b6f) main_dialer3_pane

0xa7a8,	// (0x00064b6f) main_fmrd2_pane

0xb131,	// (0x000654f8) main_fs_bigclock_unlock_btn_pane_g1

0x8437,	// (0x000627fe) main_fs_bigclock_unlock_btn_pane_t1

0x8445,	// (0x0006280c) area_fmrd2_info_pane_ParamLimits

0x8445,	// (0x0006280c) area_fmrd2_info_pane

0x8453,	// (0x0006281a) area_fmrd2_visual_pane_ParamLimits

0x8453,	// (0x0006281a) area_fmrd2_visual_pane

0x8461,	// (0x00062828) fmrd2_indi_pane_ParamLimits

0x8461,	// (0x00062828) fmrd2_indi_pane

0x846e,	// (0x00062835) area_fmrd2_visual_pane_g1

0x8476,	// (0x0006283d) area_fmrd2_visual_pane_t1

0x8486,	// (0x0006284d) area_fmrd2_visual_pane_t2

0x8496,	// (0x0006285d) area_fmrd2_visual_pane_t3

0x0002,

0xf9ae,	// (0x00069d75) area_fmrd2_visual_pane_t

0x84a6,	// (0x0006286d) area_fmrd2_info_pane_g1

0x84ae,	// (0x00062875) area_fmrd2_info_pane_t1

0x84be,	// (0x00062885) area_fmrd2_info_pane_t2

0x84ce,	// (0x00062895) area_fmrd2_info_pane_t3

0x84de,	// (0x000628a5) area_fmrd2_info_pane_t4

0x0003,

0xf9b5,	// (0x00069d7c) area_fmrd2_info_pane_t

0x84ec,	// (0x000628b3) fmrd2_indi_pane_t1

0x84fc,	// (0x000628c3) fmrd2_indi_pane_t2

0x850c,	// (0x000628d3) fmrd2_indi_pane_t3

0x0002,

0xf9be,	// (0x00069d85) fmrd2_indi_pane_t

0xe94d,	// (0x00068d14) list_single_fs_bigclock_indicator_pane_g5_ParamLimits

0xe94d,	// (0x00068d14) list_single_fs_bigclock_indicator_pane_g5

0xe9fe,	// (0x00068dc5) list_single_fs_bigclock_indicator_pane_t5_ParamLimits

0xe9fe,	// (0x00068dc5) list_single_fs_bigclock_indicator_pane_t5

0x7c51,	// (0x00062018) aid_cell_bcale_month_pane_ParamLimits

0x7c51,	// (0x00062018) aid_cell_bcale_month_pane

0x7c6f,	// (0x00062036) bcale_month_pane_ParamLimits

0x7c6f,	// (0x00062036) bcale_month_pane

0x7c8d,	// (0x00062054) bcale_preview_pane_ParamLimits

0x7c8d,	// (0x00062054) bcale_preview_pane

0x9974,	// (0x00063d3b) list_single_fs_bigclock_pane_t1_ParamLimits

0x9993,	// (0x00063d5a) list_single_fs_bigclock_pane_t2_ParamLimits

0x9993,	// (0x00063d5a) list_single_fs_bigclock_pane_t2

0x0001,

0xf939,	// (0x00069d00) list_single_fs_bigclock_pane_t_ParamLimits

0xf939,	// (0x00069d00) list_single_fs_bigclock_pane_t

0x842f,	// (0x000627f6) main_fs_bigclock_unlock_btn_pane_g2

0x0001,

0xf9a9,	// (0x00069d70) main_fs_bigclock_unlock_btn_pane_g

0x851a,	// (0x000628e1) aid_dia3_key_size_ParamLimits

0x851a,	// (0x000628e1) aid_dia3_key_size

0x8526,	// (0x000628ed) aid_dia3_listrow_size_ParamLimits

0x8526,	// (0x000628ed) aid_dia3_listrow_size

0x8536,	// (0x000628fd) dia3_keypad_fun_pane_ParamLimits

0x8536,	// (0x000628fd) dia3_keypad_fun_pane

0x8548,	// (0x0006290f) dia3_keypad_num_pane_ParamLimits

0x8548,	// (0x0006290f) dia3_keypad_num_pane

0x855a,	// (0x00062921) dia3_listscroll_pane_ParamLimits

0x855a,	// (0x00062921) dia3_listscroll_pane

0x8568,	// (0x0006292f) dia3_numentry_pane_ParamLimits

0x8568,	// (0x0006292f) dia3_numentry_pane

0x9bc0,	// (0x00063f87) dia3_list_pane

0x9bcb,	// (0x00063f92) scroll_pane_cp12

0xa7a8,	// (0x00064b6f) bg_dia3_numentry_pane

0x8576,	// (0x0006293d) dia3_numentry_pane_t1

0x8585,	// (0x0006294c) cell_dia3_key_num_pane

0x858d,	// (0x00062954) cell_dia3_key0_fun_pane_ParamLimits

0x858d,	// (0x00062954) cell_dia3_key0_fun_pane

0x859a,	// (0x00062961) cell_dia3_key1_fun_pane_ParamLimits

0x859a,	// (0x00062961) cell_dia3_key1_fun_pane

0x85a7,	// (0x0006296e) dia3_listrow_pane

0xe6a0,	// (0x00068a67) bg_dia3_numentry_pane_g1

0xa7a8,	// (0x00064b6f) bg_button_pane_cp21

0x9bd6,	// (0x00063f9d) cell_dia3_key_num_pane_t1

0x9be4,	// (0x00063fab) cell_dia3_key_num_pane_t2

0x9bf3,	// (0x00063fba) cell_dia3_key_num_pane_t3

0x9c02,	// (0x00063fc9) cell_dia3_key_num_pane_t4

0x0003,

0xf9c5,	// (0x00069d8c) cell_dia3_key_num_pane_t

0xa7a8,	// (0x00064b6f) bg_button_pane_cp19

0x85b4,	// (0x0006297b) cell_dia3_key0_fun_pane_g1

0xa7a8,	// (0x00064b6f) bg_button_pane_cp20

0x85bc,	// (0x00062983) cell_dia3_key1_fun_pane_g1

0x85c4,	// (0x0006298b) area_left_week_number_pane

0x85d7,	// (0x0006299e) area_top_day_name_pane

0x85e5,	// (0x000629ac) frame_month_view_pane

0x9c11,	// (0x00063fd8) grid_month_view_pane

0x85fa,	// (0x000629c1) cell_top_day_name_pane_ParamLimits

0x85fa,	// (0x000629c1) cell_top_day_name_pane

0x8614,	// (0x000629db) cell_area_left_week_number_pane_ParamLimits

0x8614,	// (0x000629db) cell_area_left_week_number_pane

0x8637,	// (0x000629fe) cell_month_view_pane_ParamLimits

0x8637,	// (0x000629fe) cell_month_view_pane

0x9c1f,	// (0x00063fe6) frm_month_g1

0x8663,	// (0x00062a2a) frm_month_g2

0x8674,	// (0x00062a3b) frm_month_g3

0x8685,	// (0x00062a4c) frm_month_g4

0x8696,	// (0x00062a5d) frm_month_g5

0x86a9,	// (0x00062a70) frm_month_g6

0x86bc,	// (0x00062a83) frm_month_g7

0x9c2c,	// (0x00063ff3) frm_month_g8

0x86cf,	// (0x00062a96) frm_month_g9

0x86dc,	// (0x00062aa3) frm_month_g10

0x86e9,	// (0x00062ab0) frm_month_g11

0x86f6,	// (0x00062abd) frm_month_g12

0x8703,	// (0x00062aca) frm_month_g13

0x8710,	// (0x00062ad7) frm_month_g14

0x871f,	// (0x00062ae6) frm_month_g15

0x872e,	// (0x00062af5) frm_month_g16

0x000f,

0xf9ce,	// (0x00069d95) frm_month_g

0x9c39,	// (0x00064000) cell_top_day_name_pane_t1

0x873d,	// (0x00062b04) cell_area_left_week_number_pane_g1

0x874c,	// (0x00062b13) cell_area_left_week_number_pane_t1

0xaec5,	// (0x0006528c) cell_month_view_pane_g1

0x8762,	// (0x00062b29) cell_month_view_pane_t1

0xa7a8,	// (0x00064b6f) main_fps_pane

0xec12,	// (0x00068fd9) cmail_ddmenu_btn02_pane_cp1_ParamLimits

0xec12,	// (0x00068fd9) cmail_ddmenu_btn02_pane_cp1

0xec2e,	// (0x00068ff5) cmail_ddmenu_btn02_pane_cp2_ParamLimits

0xec2e,	// (0x00068ff5) cmail_ddmenu_btn02_pane_cp2

0x7f56,	// (0x0006231d) cmail_ddmenu_btn02_pane_g2_ParamLimits

0x7f56,	// (0x0006231d) cmail_ddmenu_btn02_pane_g2

0x0001,

0xf8ec,	// (0x00069cb3) cmail_ddmenu_btn02_pane_g_ParamLimits

0xf8ec,	// (0x00069cb3) cmail_ddmenu_btn02_pane_g

0x7f74,	// (0x0006233b) cmail_ddmenu_btn02_pane_t2_ParamLimits

0x7f74,	// (0x0006233b) cmail_ddmenu_btn02_pane_t2

0x0001,

0xf8f1,	// (0x00069cb8) cmail_ddmenu_btn02_pane_t_ParamLimits

0xf8f1,	// (0x00069cb8) cmail_ddmenu_btn02_pane_t

0x8778,	// (0x00062b3f) fps_text_pane_ParamLimits

0x8778,	// (0x00062b3f) fps_text_pane

0x8785,	// (0x00062b4c) main_fps_pane_g1_ParamLimits

0x8785,	// (0x00062b4c) main_fps_pane_g1

0x8793,	// (0x00062b5a) wait_bar_pane_cp010_ParamLimits

0x8793,	// (0x00062b5a) wait_bar_pane_cp010

0x879f,	// (0x00062b66) fps_text_pane_t1_ParamLimits

0x879f,	// (0x00062b66) fps_text_pane_t1

0x5666,	// (0x0005fa2d) cam4_image_uncrop_pane_g1

0x566f,	// (0x0005fa36) cam4_image_uncrop_pane_g2

0x5678,	// (0x0005fa3f) cam4_image_uncrop_pane_g3

0x5681,	// (0x0005fa48) cam4_image_uncrop_pane_g4

0x0003,

0xf59d,	// (0x00069964) cam4_image_uncrop_pane_g

0x85a7,	// (0x0006296e) dia3_listrow_pane_ParamLimits

0xa7a8,	// (0x00064b6f) main_phob2_pane

0x7a29,	// (0x00061df0) cell_tport_appsw_pane_cp02_ParamLimits

0x7a29,	// (0x00061df0) cell_tport_appsw_pane_cp02

0x7a38,	// (0x00061dff) cell_tport_appsw_pane_cp03_ParamLimits

0x7a38,	// (0x00061dff) cell_tport_appsw_pane_cp03

0xa7a8,	// (0x00064b6f) phob2_contact_card_pane

0xa7a8,	// (0x00064b6f) phob2_listscroll_pane

0x9c4c,	// (0x00064013) phob2_list_pane

0x9c54,	// (0x0006401b) scroll_pane_cp034

0x87b8,	// (0x00062b7f) phob2_cc_data_pane_ParamLimits

0x87b8,	// (0x00062b7f) phob2_cc_data_pane

0x87d2,	// (0x00062b99) phob2_cc_listscroll_pane_ParamLimits

0x87d2,	// (0x00062b99) phob2_cc_listscroll_pane

0x8398,	// (0x0006275f) list_double_large_graphic_phob2_pane_ParamLimits

0x8398,	// (0x0006275f) list_double_large_graphic_phob2_pane

0x87ec,	// (0x00062bb3) list_double_large_graphic_phob2_pane_g1_ParamLimits

0x87ec,	// (0x00062bb3) list_double_large_graphic_phob2_pane_g1

0x87f9,	// (0x00062bc0) list_double_large_graphic_phob2_pane_g2_ParamLimits

0x87f9,	// (0x00062bc0) list_double_large_graphic_phob2_pane_g2

0x0003,

0xf9ef,	// (0x00069db6) list_double_large_graphic_phob2_pane_g_ParamLimits

0xf9ef,	// (0x00069db6) list_double_large_graphic_phob2_pane_g

0x881f,	// (0x00062be6) list_double_large_graphic_phob2_pane_t1_ParamLimits

0x881f,	// (0x00062be6) list_double_large_graphic_phob2_pane_t1

0x8834,	// (0x00062bfb) list_double_large_graphic_phob2_pane_t2_ParamLimits

0x8834,	// (0x00062bfb) list_double_large_graphic_phob2_pane_t2

0x0001,

0xf9f8,	// (0x00069dbf) list_double_large_graphic_phob2_pane_t_ParamLimits

0xf9f8,	// (0x00069dbf) list_double_large_graphic_phob2_pane_t

0xa7a8,	// (0x00064b6f) list_highlight_pane_cp024

0x9c5c,	// (0x00064023) phob2_cc_button_pane

0x8849,	// (0x00062c10) phob2_cc_data_pane_g1_ParamLimits

0x8849,	// (0x00062c10) phob2_cc_data_pane_g1

0x8858,	// (0x00062c1f) phob2_cc_data_pane_g2_ParamLimits

0x8858,	// (0x00062c1f) phob2_cc_data_pane_g2

0x0001,

0xf9fd,	// (0x00069dc4) phob2_cc_data_pane_g_ParamLimits

0xf9fd,	// (0x00069dc4) phob2_cc_data_pane_g

0x8867,	// (0x00062c2e) phob2_cc_data_pane_t1_ParamLimits

0x8867,	// (0x00062c2e) phob2_cc_data_pane_t1

0x887c,	// (0x00062c43) phob2_cc_data_pane_t2_ParamLimits

0x887c,	// (0x00062c43) phob2_cc_data_pane_t2

0x8891,	// (0x00062c58) phob2_cc_data_pane_t3_ParamLimits

0x8891,	// (0x00062c58) phob2_cc_data_pane_t3

0x0002,

0xfa02,	// (0x00069dc9) phob2_cc_data_pane_t_ParamLimits

0xfa02,	// (0x00069dc9) phob2_cc_data_pane_t

0x9c64,	// (0x0006402b) phob2_cc_list_pane_ParamLimits

0x9c64,	// (0x0006402b) phob2_cc_list_pane

0xdf12,	// (0x000682d9) scroll_pane_cp035_ParamLimits

0xdf12,	// (0x000682d9) scroll_pane_cp035

0xa7e5,	// (0x00064bac) bg_button_pane_cp033

0x9c70,	// (0x00064037) phob2_cc_button_pane_g1

0x9c7c,	// (0x00064043) phob2_cc_button_pane_t1

0x9c91,	// (0x00064058) phob2_cc_button_pane_t2

0x0001,

0xfa09,	// (0x00069dd0) phob2_cc_button_pane_t

0x88a6,	// (0x00062c6d) list_double_large_graphic_phob2_cc_pane_ParamLimits

0x88a6,	// (0x00062c6d) list_double_large_graphic_phob2_cc_pane

0x891a,	// (0x00062ce1) list_double_large_graphic_phob2_cc_pane_g1_ParamLimits

0x891a,	// (0x00062ce1) list_double_large_graphic_phob2_cc_pane_g1

0x892b,	// (0x00062cf2) list_double_large_graphic_phob2_cc_pane_g2_ParamLimits

0x892b,	// (0x00062cf2) list_double_large_graphic_phob2_cc_pane_g2

0x8937,	// (0x00062cfe) list_double_large_graphic_phob2_cc_pane_g3_ParamLimits

0x8937,	// (0x00062cfe) list_double_large_graphic_phob2_cc_pane_g3

0x8943,	// (0x00062d0a) list_double_large_graphic_phob2_cc_pane_g4_ParamLimits

0x8943,	// (0x00062d0a) list_double_large_graphic_phob2_cc_pane_g4

0x894f,	// (0x00062d16) list_double_large_graphic_phob2_cc_pane_g5_ParamLimits

0x894f,	// (0x00062d16) list_double_large_graphic_phob2_cc_pane_g5

0x0004,

0xfa0e,	// (0x00069dd5) list_double_large_graphic_phob2_cc_pane_g_ParamLimits

0xfa0e,	// (0x00069dd5) list_double_large_graphic_phob2_cc_pane_g

0x895b,	// (0x00062d22) list_double_large_graphic_phob2_cc_pane_t1_ParamLimits

0x895b,	// (0x00062d22) list_double_large_graphic_phob2_cc_pane_t1

0x8984,	// (0x00062d4b) list_double_large_graphic_phob2_cc_pane_t2_ParamLimits

0x8984,	// (0x00062d4b) list_double_large_graphic_phob2_cc_pane_t2

0x0001,

0xfa19,	// (0x00069de0) list_double_large_graphic_phob2_cc_pane_t_ParamLimits

0xfa19,	// (0x00069de0) list_double_large_graphic_phob2_cc_pane_t

0x9ca3,	// (0x0006406a) list_highlight_pane_cp025_ParamLimits

0x9ca3,	// (0x0006406a) list_highlight_pane_cp025

0xa7e5,	// (0x00064bac) bg_button_pane_cp033_ParamLimits

0x9c70,	// (0x00064037) phob2_cc_button_pane_g1_ParamLimits

0x9c7c,	// (0x00064043) phob2_cc_button_pane_t1_ParamLimits

0x9c91,	// (0x00064058) phob2_cc_button_pane_t2_ParamLimits

0xfa09,	// (0x00069dd0) phob2_cc_button_pane_t_ParamLimits

0x117d,	// (0x0005b544) popup_wgtman_window

0xdcd1,	// (0x00068098) scroll_pane_cp038

0x8321,	// (0x000626e8) wgtman_btn_pane_cp_01_ParamLimits

0x8321,	// (0x000626e8) wgtman_btn_pane_cp_01

0x9cb1,	// (0x00064078) wgtman_content_pane

0x9cba,	// (0x00064081) wgtman_heading_pane

0xa7a8,	// (0x00064b6f) bg_heading_pane_cp02

0x9cc3,	// (0x0006408a) wgtman_heading_pane_g1

0x9ccb,	// (0x00064092) wgtman_heading_pane_t1

0x9cd9,	// (0x000640a0) scroll_pane_cp036

0x9ce1,	// (0x000640a8) wgtman_list_pane

0xedff,	// (0x000691c6) wgtman_list_pane_t1_ParamLimits

0xedff,	// (0x000691c6) wgtman_list_pane_t1

0x55c5,	// (0x0005f98c) cam4_grid_pane

0x6305,	// (0x000606cc) bg_button_pane_cp015_ParamLimits

0x631a,	// (0x000606e1) bg_button_pane_cp016_ParamLimits

0x6326,	// (0x000606ed) bg_button_pane_cp017_ParamLimits

0x637e,	// (0x00060745) popup_vitu2_query_window_g3_ParamLimits

0x637e,	// (0x00060745) popup_vitu2_query_window_g3

0x641f,	// (0x000607e6) popup_vitu2_query_window_t6_ParamLimits

0x641f,	// (0x000607e6) popup_vitu2_query_window_t6

0x644a,	// (0x00060811) popup_vitu2_query_window_t7_ParamLimits

0x644a,	// (0x00060811) popup_vitu2_query_window_t7

0xee1a,	// (0x000691e1) cam4_grid_pane_g1

0xee23,	// (0x000691ea) cam4_grid_pane_g2

0x9ce9,	// (0x000640b0) cam4_grid_pane_g3

0x9cf2,	// (0x000640b9) cam4_grid_pane_g4

0x0003,

0xfa1e,	// (0x00069de5) cam4_grid_pane_g

0x1cdf,	// (0x0005c0a6) aid_placing_vt_slider_lsc_ParamLimits

0x201f,	// (0x0005c3e6) vidtel_button_pane_ParamLimits

0x201f,	// (0x0005c3e6) vidtel_button_pane

0xa7a8,	// (0x00064b6f) bg_button_pane_cp034

0x9cfd,	// (0x000640c4) vidtel_button_pane_g1

0x9d05,	// (0x000640cc) vidtel_button_pane_t1

0xddf5,	// (0x000681bc) aid_size_vtel_slider_touch

0xdf12,	// (0x000682d9) scroll_pane_cp039

0x717e,	// (0x00061545) ncim_query_button_pane_cp01_ParamLimits

0x719d,	// (0x00061564) ncimui_query_pane_g1_ParamLimits

0xa7e5,	// (0x00064bac) input_focus_pane_cp012_ParamLimits

0xe6e6,	// (0x00068aad) ncim_query_entry_pane_t1_ParamLimits

0xdf12,	// (0x000682d9) scroll_pane_cp039_ParamLimits

0xb9df,	// (0x00065da6) navi_pane_bcale_mc_g1

0xb9e7,	// (0x00065dae) navi_pane_bcale_mc_t1

0xec62,	// (0x00069029) main_sp_fs_email_pane_g1

0xec6e,	// (0x00069035) main_sp_fs_email_pane_g2

0x0001,

0x0b5c,	// (0x0005af23) main_sp_fs_email_pane_g

0xef33,	// (0x000692fa) list_single_cale_mrui_row_pane_g3_ParamLimits

0xef33,	// (0x000692fa) list_single_cale_mrui_row_pane_g3

0x7f94,	// (0x0006235b) list_single_recal_day_pane_g5_event_pane

0xa72b,	// (0x00064af2) list_single_recal_day_pane_g7

0x9d1b,	// (0x000640e2) list_recal_day_event_pane_cp01

0x9d24,	// (0x000640eb) list_recal_vselct_arw_lo_pane_cp01

0x9d2c,	// (0x000640f3) list_recal_vselct_arw_up_pane_cp01

0x9d34,	// (0x000640fb) list_recal_vselct_pane_cp01

0xde17,	// (0x000681de) list_recal_day_event_pane_cp01_g1

0xa79a,	// (0x00064b61) list_recal_day_event_pane_cp01_t1

0xa733,	// (0x00064afa) list_single_recal_day_pane_t1_ParamLimits

0xa745,	// (0x00064b0c) list_single_recal_day_pane_t2_ParamLimits

0xf901,	// (0x00069cc8) list_single_recal_day_pane_t_ParamLimits

0xae4a,	// (0x00065211) bg_notes_pane_ParamLimits

0xaf15,	// (0x000652dc) list_notes_pane_ParamLimits

0x138c,	// (0x0005b753) scroll_pane_cp06_ParamLimits

0xaf37,	// (0x000652fe) main_notes_pane_ParamLimits

0xa7e5,	// (0x00064bac) main_welc_pane

0x89cf,	// (0x00062d96) main_welc_body_pane_ParamLimits

0x89cf,	// (0x00062d96) main_welc_body_pane

0x89e8,	// (0x00062daf) main_welc_opti_pane_ParamLimits

0x89e8,	// (0x00062daf) main_welc_opti_pane

0x8a43,	// (0x00062e0a) main_welc_pane_t1_ParamLimits

0x8a43,	// (0x00062e0a) main_welc_pane_t1

0x8bd9,	// (0x00062fa0) main_welc_body_row_pane_ParamLimits

0x8bd9,	// (0x00062fa0) main_welc_body_row_pane

0xaeb7,	// (0x0006527e) main_welc_opti_row_pane_ParamLimits

0xaeb7,	// (0x0006527e) main_welc_opti_row_pane

0x9d4e,	// (0x00064115) main_welc_opti_row_pane_g1

0x8c02,	// (0x00062fc9) main_welc_opti_row_pane_t1

0x9d56,	// (0x0006411d) main_welc_body_row_pane_t1

0x9a4b,	// (0x00063e12) popup_notif_wgt_heading_pane

0x9a65,	// (0x00063e2c) aid_size_list_notif_wgt_del_ParamLimits

0x9a72,	// (0x00063e39) list_notif_wgt_row_pane_g1_ParamLimits

0x9a7e,	// (0x00063e45) list_notif_wgt_row_pane_g2_ParamLimits

0x9a8d,	// (0x00063e54) list_notif_wgt_row_pane_g3_ParamLimits

0xf968,	// (0x00069d2f) list_notif_wgt_row_pane_g_ParamLimits

0x9a9a,	// (0x00063e61) list_notif_wgt_row_pane_t1_ParamLimits

0x9ab0,	// (0x00063e77) list_notif_wgt_row_pane_t2_ParamLimits

0x9ac2,	// (0x00063e89) list_notif_wgt_row_pane_t3_ParamLimits

0xf96f,	// (0x00069d36) list_notif_wgt_row_pane_t_ParamLimits

0x83b4,	// (0x0006277b) listrow_wgtman_pane_g1_ParamLimits

0x83c1,	// (0x00062788) listrow_wgtman_pane_g2_ParamLimits

0xf99f,	// (0x00069d66) listrow_wgtman_pane_g_ParamLimits

0x83df,	// (0x000627a6) listrow_wgtman_pane_t1_ParamLimits

0x83f7,	// (0x000627be) listrow_wgtman_pane_t2_ParamLimits

0xf9a4,	// (0x00069d6b) listrow_wgtman_pane_t_ParamLimits

0x841d,	// (0x000627e4) wait_bar_pane_cp09_ParamLimits

0xa7a8,	// (0x00064b6f) bg_popup_heading_pane_cp02

0x9d65,	// (0x0006412c) popup_notif_wgt_heading_pane_g1

0x9d6d,	// (0x00064134) popup_notif_wgt_heading_pane_t1

0xa7a8,	// (0x00064b6f) main_vids_pane

0xa7a8,	// (0x00064b6f) vids_listscroll_pane

0x8c11,	// (0x00062fd8) scroll_pane_cp040

0xa7a8,	// (0x00064b6f) vids_list_pane

0x8c1c,	// (0x00062fe3) vids_list_double_pane_ParamLimits

0x8c1c,	// (0x00062fe3) vids_list_double_pane

0x8c34,	// (0x00062ffb) vids_list_double_pane_g1

0x8c3d,	// (0x00063004) vids_list_double_pane_t1

0x8c4d,	// (0x00063014) vids_list_double_pane_t2

0x0001,

0xfa3d,	// (0x00069e04) vids_list_double_pane_t

0x3d61,	// (0x0005e128) main_ncimui_pane_ParamLimits

0x6fd5,	// (0x0006139c) main_ncimui_pane_g1_ParamLimits

0x6fe1,	// (0x000613a8) main_ncimui_pane_g2_ParamLimits

0x6fe1,	// (0x000613a8) main_ncimui_pane_g2

0x0001,

0xf7dc,	// (0x00069ba3) main_ncimui_pane_g_ParamLimits

0xf7dc,	// (0x00069ba3) main_ncimui_pane_g

0x8a01,	// (0x00062dc8) main_welc_pane_g1_ParamLimits

0x8a01,	// (0x00062dc8) main_welc_pane_g1

0x8a0d,	// (0x00062dd4) main_welc_pane_g2_ParamLimits

0x8a0d,	// (0x00062dd4) main_welc_pane_g2

0x0003,

0xfa27,	// (0x00069dee) main_welc_pane_g_ParamLimits

0xfa27,	// (0x00069dee) main_welc_pane_g

0xae4a,	// (0x00065211) listscroll_mce_pane_ParamLimits

0xbb34,	// (0x00065efb) wait_bar_pane_cp10

0xcec1,	// (0x00067288) main_cale_day_pane_ParamLimits

0xcec1,	// (0x00067288) main_cale_week_pane_ParamLimits

0xae4a,	// (0x00065211) main_messa_pane_ParamLimits

0x4a06,	// (0x0005edcd) main_clock2_btn_pane_ParamLimits

0x4a06,	// (0x0005edcd) main_clock2_btn_pane

0xd69e,	// (0x00067a65) main_clock2_btn_pane_cp01_ParamLimits

0xd69e,	// (0x00067a65) main_clock2_btn_pane_cp01

0xef04,	// (0x000692cb) list_cale_mrui_pane_ParamLimits

0x9af8,	// (0x00063ebf) main_cf0_pane_g2

0x0001,

0xf976,	// (0x00069d3d) main_cf0_pane_g

0x85c4,	// (0x0006298b) area_left_week_number_pane_ParamLimits

0x85d7,	// (0x0006299e) area_top_day_name_pane_ParamLimits

0x85e5,	// (0x000629ac) frame_month_view_pane_ParamLimits

0x9c11,	// (0x00063fd8) grid_month_view_pane_ParamLimits

0x9c1f,	// (0x00063fe6) frm_month_g1_ParamLimits

0x8663,	// (0x00062a2a) frm_month_g2_ParamLimits

0x8674,	// (0x00062a3b) frm_month_g3_ParamLimits

0x8685,	// (0x00062a4c) frm_month_g4_ParamLimits

0x8696,	// (0x00062a5d) frm_month_g5_ParamLimits

0x86a9,	// (0x00062a70) frm_month_g6_ParamLimits

0x86bc,	// (0x00062a83) frm_month_g7_ParamLimits

0x9c2c,	// (0x00063ff3) frm_month_g8_ParamLimits

0x86cf,	// (0x00062a96) frm_month_g9_ParamLimits

0x86dc,	// (0x00062aa3) frm_month_g10_ParamLimits

0x86e9,	// (0x00062ab0) frm_month_g11_ParamLimits

0x86f6,	// (0x00062abd) frm_month_g12_ParamLimits

0x8703,	// (0x00062aca) frm_month_g13_ParamLimits

0x8710,	// (0x00062ad7) frm_month_g14_ParamLimits

0x871f,	// (0x00062ae6) frm_month_g15_ParamLimits

0x872e,	// (0x00062af5) frm_month_g16_ParamLimits

0xf9ce,	// (0x00069d95) frm_month_g_ParamLimits

0x9c39,	// (0x00064000) cell_top_day_name_pane_t1_ParamLimits

0x873d,	// (0x00062b04) cell_area_left_week_number_pane_g1_ParamLimits

0x874c,	// (0x00062b13) cell_area_left_week_number_pane_t1_ParamLimits

0xaec5,	// (0x0006528c) cell_month_view_pane_g1_ParamLimits

0x8762,	// (0x00062b29) cell_month_view_pane_t1_ParamLimits

0xae42,	// (0x00065209) main_clock2_btn_pane_g1

0x9d7b,	// (0x00064142) main_clock2_btn_pane_t1

0xa7e5,	// (0x00064bac) listscroll_cmail_pane_ParamLimits

0xec62,	// (0x00069029) main_sp_fs_email_pane_g1_ParamLimits

0xec6e,	// (0x00069035) main_sp_fs_email_pane_g2_ParamLimits

0x0b5c,	// (0x0005af23) main_sp_fs_email_pane_g_ParamLimits

0xf012,	// (0x000693d9) list_recal_day_pane_ParamLimits

0xf023,	// (0x000693ea) mian_recal_day_pane_t1

0x7917,	// (0x00061cde) list_single_dyc_row_text_pane_t4_ParamLimits

0x7917,	// (0x00061cde) list_single_dyc_row_text_pane_t4

0x794e,	// (0x00061d15) list_single_dyc_row_text_pane_t5_ParamLimits

0x794e,	// (0x00061d15) list_single_dyc_row_text_pane_t5

0xa50a,	// (0x000648d1) list_single_dyc_row_text_pane_t6_ParamLimits

0xa50a,	// (0x000648d1) list_single_dyc_row_text_pane_t6

0x2e98,	// (0x0005d25f) aid_mgn_list_cale_time_pane

0x3d61,	// (0x0005e128) main_gallery2_pane_ParamLimits

0xd6b4,	// (0x00067a7b) main_clock2_pane_cp01_t1

0xd6c2,	// (0x00067a89) main_clock2_pane_cp01_t3

0x0001,

0x0679,	// (0x0005aa40) main_clock2_pane_cp01_t

0x17ef,	// (0x0005bbb6) cale_week_scroll_pane_g16_ParamLimits

0x17ef,	// (0x0005bbb6) cale_week_scroll_pane_g16

0xb0fb,	// (0x000654c2) vorec_slider_pane

0x9d05,	// (0x000640cc) vidtel_button_pane_t1_ParamLimits

0x7fef,	// (0x000623b6) main_fs_bigclock_clock_pane_g1_ParamLimits

0x7fef,	// (0x000623b6) main_fs_bigclock_clock_pane_g2_ParamLimits

0x7ffc,	// (0x000623c3) main_fs_bigclock_clock_pane_g3_ParamLimits

0x7ffc,	// (0x000623c3) main_fs_bigclock_clock_pane_g4_ParamLimits

0xf924,	// (0x00069ceb) main_fs_bigclock_clock_pane_g_ParamLimits

0x8008,	// (0x000623cf) main_fs_bigclock_clock_pane_t1_ParamLimits

0x801b,	// (0x000623e2) main_fs_bigclock_clock_pane_t2_ParamLimits

0xf92d,	// (0x00069cf4) main_fs_bigclock_clock_pane_t_ParamLimits

0x43ab,	// (0x0005e772) main_mup3_lyrics_pane_ParamLimits

0x43ab,	// (0x0005e772) main_mup3_lyrics_pane

0x8c80,	// (0x00063047) main_mup3_lyrics_pane_t1_ParamLimits

0x8c80,	// (0x00063047) main_mup3_lyrics_pane_t1

0x4f3a,	// (0x0005f301) aid_main_mp4_pane_t1_area

0x4f44,	// (0x0005f30b) aid_main_mp4_pane_t2_area

0x5043,	// (0x0005f40a) main_mp4_pane_g7_ParamLimits

0x5043,	// (0x0005f40a) main_mp4_pane_g7

0x504f,	// (0x0005f416) main_mp4_pane_g8_ParamLimits

0x504f,	// (0x0005f416) main_mp4_pane_g8

0x546f,	// (0x0005f836) aid_call6_pane_g1_size

0x88ec,	// (0x00062cb3) list_double_large_graphic_phob2_other_pane_ParamLimits

0x88ec,	// (0x00062cb3) list_double_large_graphic_phob2_other_pane

0xb4a4,	// (0x0006586b) list_double_large_graphic_phob2_other_pane_g1

0xa7a8,	// (0x00064b6f) list_highlight_pane_cp026

0xa7e5,	// (0x00064bac) main_welc_pane_ParamLimits

0x7790,	// (0x00061b57) main_sp_fs_ctrlbar_pane_g3_ParamLimits

0x7790,	// (0x00061b57) main_sp_fs_ctrlbar_pane_g3

0x77a8,	// (0x00061b6f) main_sp_fs_ctrlbar_pane_g4_ParamLimits

0x77a8,	// (0x00061b6f) main_sp_fs_ctrlbar_pane_g4

0x77da,	// (0x00061ba1) toolbar2_fixed_button_pane_cp01

0x77e5,	// (0x00061bac) toolbar2_fixed_button_pane_cp02

0x77f0,	// (0x00061bb7) toolbar2_fixed_button_pane_cp03

0x89bf,	// (0x00062d86) list_welc_entry_pane_ParamLimits

0x89bf,	// (0x00062d86) list_welc_entry_pane

0x8a1b,	// (0x00062de2) main_welc_pane_g3_ParamLimits

0x8a1b,	// (0x00062de2) main_welc_pane_g3

0x8a5d,	// (0x00062e24) main_welc_pane_t2_ParamLimits

0x8a5d,	// (0x00062e24) main_welc_pane_t2

0x8a71,	// (0x00062e38) main_welc_pane_t3_ParamLimits

0x8a71,	// (0x00062e38) main_welc_pane_t3

0x0005,

0xfa30,	// (0x00069df7) main_welc_pane_t_ParamLimits

0xfa30,	// (0x00069df7) main_welc_pane_t

0x8b6d,	// (0x00062f34) welc_button_pane_ParamLimits

0x8b6d,	// (0x00062f34) welc_button_pane

0x8bcb,	// (0x00062f92) welc_service_logo_pane_ParamLimits

0x8bcb,	// (0x00062f92) welc_service_logo_pane

0x8cb6,	// (0x0006307d) list_single_welc_entry_pane_ParamLimits

0x8cb6,	// (0x0006307d) list_single_welc_entry_pane

0x8cc7,	// (0x0006308e) list_single_welc_entry_pane_g1

0x8ccf,	// (0x00063096) list_single_welc_entry_pane_t1

0x8cdd,	// (0x000630a4) list_single_welc_entry_pane_t2

0x0001,

0xfa42,	// (0x00069e09) list_single_welc_entry_pane_t

0xa7a8,	// (0x00064b6f) bg_button_pane_cp035

0x8ceb,	// (0x000630b2) welc_button_pane_t1

0x9d89,	// (0x00064150) welc_service_logo_pane_g1

0x9d92,	// (0x00064159) welc_service_logo_pane_g2

0x0001,

0xfa47,	// (0x00069e0e) welc_service_logo_pane_g

0x1189,	// (0x0005b550) main_int_radio_pane

0xe584,	// (0x0006894b) list_single_fs_dyc_pane_g1

0x8805,	// (0x00062bcc) list_double_large_graphic_phob2_pane_g3_ParamLimits

0x8805,	// (0x00062bcc) list_double_large_graphic_phob2_pane_g3

0x8811,	// (0x00062bd8) list_double_large_graphic_phob2_pane_g4_ParamLimits

0x8811,	// (0x00062bd8) list_double_large_graphic_phob2_pane_g4

0x8cf9,	// (0x000630c0) main_int_radio1_pane_ParamLimits

0x8cf9,	// (0x000630c0) main_int_radio1_pane

0x9d9b,	// (0x00064162) find_pane_cp02

0x8d0b,	// (0x000630d2) input_focus_pane_cp12_ParamLimits

0x8d0b,	// (0x000630d2) input_focus_pane_cp12

0x8d17,	// (0x000630de) input_focus_pane_cp13_ParamLimits

0x8d17,	// (0x000630de) input_focus_pane_cp13

0x8d2f,	// (0x000630f6) input_focus_pane_cp14_ParamLimits

0x8d2f,	// (0x000630f6) input_focus_pane_cp14

0x9da4,	// (0x0006416b) int_radio1_listscroll_pane

0x8d47,	// (0x0006310e) main_int_radio1_pane_g1_ParamLimits

0x8d47,	// (0x0006310e) main_int_radio1_pane_g1

0x8d57,	// (0x0006311e) main_int_radio1_pane_t1_ParamLimits

0x8d57,	// (0x0006311e) main_int_radio1_pane_t1

0x8d6b,	// (0x00063132) main_int_radio1_pane_t2_ParamLimits

0x8d6b,	// (0x00063132) main_int_radio1_pane_t2

0x8d7f,	// (0x00063146) main_int_radio1_pane_t3_ParamLimits

0x8d7f,	// (0x00063146) main_int_radio1_pane_t3

0x8d93,	// (0x0006315a) main_int_radio1_pane_t4_ParamLimits

0x8d93,	// (0x0006315a) main_int_radio1_pane_t4

0x9dae,	// (0x00064175) main_int_radio1_pane_t5_ParamLimits

0x9dae,	// (0x00064175) main_int_radio1_pane_t5

0x8daa,	// (0x00063171) main_int_radio1_pane_t6_ParamLimits

0x8daa,	// (0x00063171) main_int_radio1_pane_t6

0x8dbc,	// (0x00063183) main_int_radio1_pane_t7_ParamLimits

0x8dbc,	// (0x00063183) main_int_radio1_pane_t7

0x8dce,	// (0x00063195) main_int_radio1_pane_t8_ParamLimits

0x8dce,	// (0x00063195) main_int_radio1_pane_t8

0x8de2,	// (0x000631a9) main_int_radio1_pane_t9_ParamLimits

0x8de2,	// (0x000631a9) main_int_radio1_pane_t9

0x8df4,	// (0x000631bb) main_int_radio1_pane_t10_ParamLimits

0x8df4,	// (0x000631bb) main_int_radio1_pane_t10

0x8e25,	// (0x000631ec) main_int_radio1_pane_t11_ParamLimits

0x8e25,	// (0x000631ec) main_int_radio1_pane_t11

0x8e56,	// (0x0006321d) main_int_radio1_pane_t12_ParamLimits

0x8e56,	// (0x0006321d) main_int_radio1_pane_t12

0x000b,

0xfa4c,	// (0x00069e13) main_int_radio1_pane_t_ParamLimits

0xfa4c,	// (0x00069e13) main_int_radio1_pane_t

0x9dc0,	// (0x00064187) int_radio_list_pane

0x9c54,	// (0x0006401b) scroll_pane_cp037

0x9dc8,	// (0x0006418f) list_double_large_graphic_int_radio_pane_ParamLimits

0x9dc8,	// (0x0006418f) list_double_large_graphic_int_radio_pane

0x9de1,	// (0x000641a8) list_double_large_graphic_int_radio_pane_g1

0xa7f3,	// (0x00064bba) list_double_large_graphic_int_radio_pane_t1

0xa801,	// (0x00064bc8) list_double_large_graphic_int_radio_pane_t2

0x0001,

0xfa65,	// (0x00069e2c) list_double_large_graphic_int_radio_pane_t

0xa7a8,	// (0x00064b6f) list_highlight_pane_cp027

0x9d3e,	// (0x00064105) main_button_pane_4

0x8a27,	// (0x00062dee) main_welc_pane_g4_ParamLimits

0x8a27,	// (0x00062dee) main_welc_pane_g4

0x8a83,	// (0x00062e4a) main_welc_pane_t4_ParamLimits

0x8a83,	// (0x00062e4a) main_welc_pane_t4

0x8a95,	// (0x00062e5c) main_welc_pane_t5_ParamLimits

0x8a95,	// (0x00062e5c) main_welc_pane_t5

0x8ac5,	// (0x00062e8c) main_welc_pane_t6_ParamLimits

0x8ac5,	// (0x00062e8c) main_welc_pane_t6

0x8b7b,	// (0x00062f42) welc_button_pane_2_ParamLimits

0x8b7b,	// (0x00062f42) welc_button_pane_2

0x8b93,	// (0x00062f5a) welc_button_pane_3_ParamLimits

0x8b93,	// (0x00062f5a) welc_button_pane_3

0x9d46,	// (0x0006410d) welc_button_pane_4

0x8bad,	// (0x00062f74) welc_button_pane_5_ParamLimits

0x8bad,	// (0x00062f74) welc_button_pane_5

0x0f98,	// (0x0005b35f) main_popup_welc_pane

0x9df9,	// (0x000641c0) main_welc_sk_g3

0x9e03,	// (0x000641ca) main_welc_sk_g4

0x9e0d,	// (0x000641d4) main_welc_sk_t3

0x9e1d,	// (0x000641e4) main_welc_sk_t4

0x9e2d,	// (0x000641f4) popup_welc_pane_t4

0x9e3b,	// (0x00064202) popup_welc_pane_t5

0x9e49,	// (0x00064210) popup_welc_pane_t6

0x1189,	// (0x0005b550) main_acti_pane

0xa7a8,	// (0x00064b6f) main_sso_pane

0x8e6d,	// (0x00063234) sso_body_pane_ParamLimits

0x8e6d,	// (0x00063234) sso_body_pane

0x8e7b,	// (0x00063242) sso_logo_pane_ParamLimits

0x8e7b,	// (0x00063242) sso_logo_pane

0x8ea4,	// (0x0006326b) sso_sk_pane_ParamLimits

0x8ea4,	// (0x0006326b) sso_sk_pane

0xb131,	// (0x000654f8) main_sso_logo_pane_g1

0x8eb1,	// (0x00063278) sso_sk_pane_t1_ParamLimits

0x8eb1,	// (0x00063278) sso_sk_pane_t1

0x8ec5,	// (0x0006328c) sso_sk_pane_t2_ParamLimits

0x8ec5,	// (0x0006328c) sso_sk_pane_t2

0x0001,

0xfa6a,	// (0x00069e31) sso_sk_pane_t_ParamLimits

0xfa6a,	// (0x00069e31) sso_sk_pane_t

0x9e87,	// (0x0006424e) aid_sso_gap

0x9e90,	// (0x00064257) aid_sso_txt1

0x9e9a,	// (0x00064261) aid_sso_txt2

0x9ea4,	// (0x0006426b) aid_sso_txt3

0x0002,

0xfa6f,	// (0x00069e36) aid_sso_txt

0x9eae,	// (0x00064275) aid_sso_widget

0x8f24,	// (0x000632eb) sso_btn_pane_ParamLimits

0x8f24,	// (0x000632eb) sso_btn_pane

0x8f9d,	// (0x00063364) sso_option_pane_ParamLimits

0x8f9d,	// (0x00063364) sso_option_pane

0x9017,	// (0x000633de) sso_query_pane_ParamLimits

0x9017,	// (0x000633de) sso_query_pane

0x9067,	// (0x0006342e) sso_query_pane_cp01_ParamLimits

0x9067,	// (0x0006342e) sso_query_pane_cp01

0x90b7,	// (0x0006347e) sso_t_hdr_pane_ParamLimits

0x90b7,	// (0x0006347e) sso_t_hdr_pane

0x90db,	// (0x000634a2) sso_t_nml_pane_ParamLimits

0x90db,	// (0x000634a2) sso_t_nml_pane

0x9eb8,	// (0x0006427f) sso_t_sub_pane

0x8e88,	// (0x0006324f) sso_popup_window_ParamLimits

0x8e88,	// (0x0006324f) sso_popup_window

0x8ed7,	// (0x0006329e) sso_apps_pane_ParamLimits

0x8ed7,	// (0x0006329e) sso_apps_pane

0x8efa,	// (0x000632c1) sso_body_pane_g1

0x8f04,	// (0x000632cb) sso_body_pane_t1

0x8f14,	// (0x000632db) sso_body_pane_t2

0x0001,

0xfa76,	// (0x00069e3d) sso_body_pane_t

0x8f6f,	// (0x00063336) sso_btn_pane_cp01_ParamLimits

0x8f6f,	// (0x00063336) sso_btn_pane_cp01

0x8fe9,	// (0x000633b0) sso_prog_pane_ParamLimits

0x8fe9,	// (0x000633b0) sso_prog_pane

0x9ecd,	// (0x00064294) sso_t_hdr_pane_t1_ParamLimits

0x9ecd,	// (0x00064294) sso_t_hdr_pane_t1

0x9ee6,	// (0x000642ad) input_focus_pane_cp10_ParamLimits

0x9ee6,	// (0x000642ad) input_focus_pane_cp10

0x9f00,	// (0x000642c7) sso_query_pane_t1_ParamLimits

0x9f00,	// (0x000642c7) sso_query_pane_t1

0x9f13,	// (0x000642da) sso_query_pane_t2_ParamLimits

0x9f13,	// (0x000642da) sso_query_pane_t2

0x9f2e,	// (0x000642f5) sso_query_pane_t3_ParamLimits

0x9f2e,	// (0x000642f5) sso_query_pane_t3

0x9f58,	// (0x0006431f) sso_query_pane_t4_ParamLimits

0x9f58,	// (0x0006431f) sso_query_pane_t4

0x0003,

0xfa7b,	// (0x00069e42) sso_query_pane_t_ParamLimits

0xfa7b,	// (0x00069e42) sso_query_pane_t

0xa7a8,	// (0x00064b6f) bg_button_pane_cp22

0x9dea,	// (0x000641b1) sso_btn_pane_t1

0x912b,	// (0x000634f2) sso_t_nml_pane_t1_ParamLimits

0x912b,	// (0x000634f2) sso_t_nml_pane_t1

0x9f7c,	// (0x00064343) sso_option_row_pane_ParamLimits

0x9f7c,	// (0x00064343) sso_option_row_pane

0x9f8f,	// (0x00064356) sso_t_sub_pane_t1_ParamLimits

0x9f8f,	// (0x00064356) sso_t_sub_pane_t1

0xa7e5,	// (0x00064bac) bg_popup_window_pane_cp11_ParamLimits

0xa7e5,	// (0x00064bac) bg_popup_window_pane_cp11

0x9fac,	// (0x00064373) popup_sk_window_cp01_ParamLimits

0x9fac,	// (0x00064373) popup_sk_window_cp01

0x9fb9,	// (0x00064380) sso_popup_body_pane_ParamLimits

0x9fb9,	// (0x00064380) sso_popup_body_pane

0x9fc6,	// (0x0006438d) scroll_pane_cp21_ParamLimits

0x9fc6,	// (0x0006438d) scroll_pane_cp21

0x9fd3,	// (0x0006439a) sso_popup_body_t_pane_ParamLimits

0x9fd3,	// (0x0006439a) sso_popup_body_t_pane

0x9fe0,	// (0x000643a7) sso_popup_body_t_hdr_pane_ParamLimits

0x9fe0,	// (0x000643a7) sso_popup_body_t_hdr_pane

0x9ff3,	// (0x000643ba) sso_popup_body_t_nml_pane_ParamLimits

0x9ff3,	// (0x000643ba) sso_popup_body_t_nml_pane

0xa011,	// (0x000643d8) sso_popup_body_t_sub_pane_ParamLimits

0xa011,	// (0x000643d8) sso_popup_body_t_sub_pane

0xa034,	// (0x000643fb) sso_popup_body_t_hdr_pane_t1

0x9148,	// (0x0006350f) sso_popup_body_t_nml_pane_t1_ParamLimits

0x9148,	// (0x0006350f) sso_popup_body_t_nml_pane_t1

0xa044,	// (0x0006440b) sso_popup_body_t_sub_pane_t1_ParamLimits

0xa044,	// (0x0006440b) sso_popup_body_t_sub_pane_t1

0xb131,	// (0x000654f8) sso_prog_pane_g1

0x918c,	// (0x00063553) sso_apps_pane_comp1_ParamLimits

0x918c,	// (0x00063553) sso_apps_pane_comp1

0xa069,	// (0x00064430) sso_apps_pane_comp1_g1

0xa071,	// (0x00064438) sso_apps_pane_comp1_t1

0xa08d,	// (0x00064454) sso_option_row_pane_g1

0xa095,	// (0x0006445c) sso_option_row_pane_t1

0x89ad,	// (0x00062d74) bg_welc_area_ParamLimits

0x89ad,	// (0x00062d74) bg_welc_area

0x8afb,	// (0x00062ec2) sso_t_hdr_pane_a_t1_ParamLimits

0x8afb,	// (0x00062ec2) sso_t_hdr_pane_a_t1

0x8b0f,	// (0x00062ed6) sso_t_nml_pane_a_t1_ParamLimits

0x8b0f,	// (0x00062ed6) sso_t_nml_pane_a_t1

0x8b39,	// (0x00062f00) sso_t_sub_pane_a_t1_ParamLimits

0x8b39,	// (0x00062f00) sso_t_sub_pane_a_t1

0x9dea,	// (0x000641b1) sso_btn_pane_t1_copy1

0xa7a8,	// (0x00064b6f) welc_button_pane_2_comp1

0x9e57,	// (0x0006421e) sso_t_hdr_pane_p_t1

0x9e67,	// (0x0006422e) sso_t_nml_pane_p_t1

0x9e77,	// (0x0006423e) sso_t_sub_pane_p_t1

0xed1d,	// (0x000690e4) list_cmail_pane_ParamLimits

0x8bbd,	// (0x00062f84) welc_button_pane_cp01_ParamLimits

0x8bbd,	// (0x00062f84) welc_button_pane_cp01

0xa7a8,	// (0x00064b6f) main_att_pane

0xa07f,	// (0x00064446) input_focus_pane_cp10_t1

0xa095,	// (0x0006445c) sso_option_row_pane_t1_ParamLimits

0x91a6,	// (0x0006356d) main_att_body_pane_ParamLimits

0x91a6,	// (0x0006356d) main_att_body_pane

0x91d2,	// (0x00063599) att_btn_pane_ParamLimits

0x91d2,	// (0x00063599) att_btn_pane

0x91f4,	// (0x000635bb) att_btn_pane_cp01_ParamLimits

0x91f4,	// (0x000635bb) att_btn_pane_cp01

0x920e,	// (0x000635d5) att_li_srv_pane_ParamLimits

0x920e,	// (0x000635d5) att_li_srv_pane

0x9220,	// (0x000635e7) att_opt_pane_ParamLimits

0x9220,	// (0x000635e7) att_opt_pane

0x9264,	// (0x0006362b) att_query_pane_ParamLimits

0x9264,	// (0x0006362b) att_query_pane

0x92a8,	// (0x0006366f) att_query_pane_cp01_ParamLimits

0x92a8,	// (0x0006366f) att_query_pane_cp01

0x92ec,	// (0x000636b3) att_t_hdr_pane_ParamLimits

0x92ec,	// (0x000636b3) att_t_hdr_pane

0x933e,	// (0x00063705) att_t_nml_pane_ParamLimits

0x933e,	// (0x00063705) att_t_nml_pane

0x9372,	// (0x00063739) att_t_nml_pane_cp01_ParamLimits

0x9372,	// (0x00063739) att_t_nml_pane_cp01

0x9396,	// (0x0006375d) att_t_nmlb_pane_ParamLimits

0x9396,	// (0x0006375d) att_t_nmlb_pane

0x93b0,	// (0x00063777) att_term_pane_ParamLimits

0x93b0,	// (0x00063777) att_term_pane

0x93f4,	// (0x000637bb) main_att_body_pane_g1_ParamLimits

0x93f4,	// (0x000637bb) main_att_body_pane_g1

0x9ecd,	// (0x00064294) att_t_hdr_pane_t1_ParamLimits

0x9ecd,	// (0x00064294) att_t_hdr_pane_t1

0xa0ab,	// (0x00064472) att_t_nml_pane_t1_ParamLimits

0xa0ab,	// (0x00064472) att_t_nml_pane_t1

0xa0d0,	// (0x00064497) att_btn_pane_t1

0xa7a8,	// (0x00064b6f) bg_button_pane_cp23

0xa0e0,	// (0x000644a7) att_li_srv_row_pane_ParamLimits

0xa0e0,	// (0x000644a7) att_li_srv_row_pane

0xa0f0,	// (0x000644b7) att_t_nmlb_pane_t1_ParamLimits

0xa0f0,	// (0x000644b7) att_t_nmlb_pane_t1

0xa109,	// (0x000644d0) att_query_pane_t1

0xa118,	// (0x000644df) att_query_pane_t2

0xa127,	// (0x000644ee) att_query_pane_t3

0x0002,

0xfa84,	// (0x00069e4b) att_query_pane_t

0xa136,	// (0x000644fd) input_focus_pane_cp11

0xa13f,	// (0x00064506) att_term_pane_t1_ParamLimits

0xa13f,	// (0x00064506) att_term_pane_t1

0xa7a8,	// (0x00064b6f) att_opt_row_pane

0xa15c,	// (0x00064523) att_opt_row_pane_g1

0xa164,	// (0x0006452b) att_opt_row_pane_t1_ParamLimits

0xa164,	// (0x0006452b) att_opt_row_pane_t1

0x9428,	// (0x000637ef) att_li_srv_row_pane_g1

0x9430,	// (0x000637f7) att_li_srv_row_pane_t1

0x9445,	// (0x0006380c) att_li_srv_row_pane_t2

0x0001,

0xfa8b,	// (0x00069e52) att_li_srv_row_pane_t

0xa7a8,	// (0x00064b6f) main_call7_pane

0xa7a8,	// (0x00064b6f) main_vod_pane

0x9eb8,	// (0x0006427f) sso_t_sub_pane_ParamLimits

0x91ba,	// (0x00063581) att_btn_emg_pane_ParamLimits

0x91ba,	// (0x00063581) att_btn_emg_pane

0x9430,	// (0x000637f7) att_li_srv_row_pane_t1_ParamLimits

0x9445,	// (0x0006380c) att_li_srv_row_pane_t2_ParamLimits

0xfa8b,	// (0x00069e52) att_li_srv_row_pane_t_ParamLimits

0xa17d,	// (0x00064544) att_btn_close_pane_g1

0xa7a8,	// (0x00064b6f) bg_button_pane_cp24

0x945a,	// (0x00063821) main_vod_body_pane_ParamLimits

0x945a,	// (0x00063821) main_vod_body_pane

0x9468,	// (0x0006382f) main_vod_body_pane_g1_ParamLimits

0x9468,	// (0x0006382f) main_vod_body_pane_g1

0x9498,	// (0x0006385f) scroll_pane_cp24_ParamLimits

0x9498,	// (0x0006385f) scroll_pane_cp24

0x94e0,	// (0x000638a7) vod_btn_pane_ParamLimits

0x94e0,	// (0x000638a7) vod_btn_pane

0x9520,	// (0x000638e7) vod_det_pane_ParamLimits

0x9520,	// (0x000638e7) vod_det_pane

0x954a,	// (0x00063911) vod_logo_g1_ParamLimits

0x954a,	// (0x00063911) vod_logo_g1

0x9584,	// (0x0006394b) vod_opt_pane_ParamLimits

0x9584,	// (0x0006394b) vod_opt_pane

0x95b4,	// (0x0006397b) vod_opt_pane_cp01_ParamLimits

0x95b4,	// (0x0006397b) vod_opt_pane_cp01

0x95dc,	// (0x000639a3) vod_query_pane_ParamLimits

0x95dc,	// (0x000639a3) vod_query_pane

0x9606,	// (0x000639cd) vod_query_pane_cp01_ParamLimits

0x9606,	// (0x000639cd) vod_query_pane_cp01

0x9612,	// (0x000639d9) vod_t_nml_pane_ParamLimits

0x9612,	// (0x000639d9) vod_t_nml_pane

0x96b4,	// (0x00063a7b) vod_t_nml_pane_cp01_ParamLimits

0x96b4,	// (0x00063a7b) vod_t_nml_pane_cp01

0x96ec,	// (0x00063ab3) vod_t_sub_pane_ParamLimits

0x96ec,	// (0x00063ab3) vod_t_sub_pane

0x971a,	// (0x00063ae1) vod_t_sub_pane_cp01_ParamLimits

0x971a,	// (0x00063ae1) vod_t_sub_pane_cp01

0xa136,	// (0x000644fd) vod_query_field_pane

0xa109,	// (0x000644d0) vod_query_pane_t1

0xa7a8,	// (0x00064b6f) bg_button_pane_cp25

0xa292,	// (0x00064659) sso_btn_pane_t1_copy2

0x9742,	// (0x00063b09) vod_t_nml_pane_t1_ParamLimits

0x9742,	// (0x00063b09) vod_t_nml_pane_t1

0xa2a2,	// (0x00064669) vod_opt_row_pane_ParamLimits

0xa2a2,	// (0x00064669) vod_opt_row_pane

0xa2b4,	// (0x0006467b) vod_t_sub_pane_t1_ParamLimits

0xa2b4,	// (0x0006467b) vod_t_sub_pane_t1

0x9777,	// (0x00063b3e) vod_det_cell_pane_ParamLimits

0x9777,	// (0x00063b3e) vod_det_cell_pane

0xa7a8,	// (0x00064b6f) input_focus_pane_cp15

0xa2cd,	// (0x00064694) vod_query_field_pane_t1

0xa2db,	// (0x000646a2) vod_opt_row_pane_g1_ParamLimits

0xa2db,	// (0x000646a2) vod_opt_row_pane_g1

0xa2e7,	// (0x000646ae) vod_opt_row_pane_t1_ParamLimits

0xa2e7,	// (0x000646ae) vod_opt_row_pane_t1

0xa30c,	// (0x000646d3) vod_det_cell_field_pane

0xa315,	// (0x000646dc) vod_det_cell_pane_g1

0xa109,	// (0x000644d0) vod_det_cell_pane_t1

0xa7a8,	// (0x00064b6f) input_focus_pane_cp16

0xa2cd,	// (0x00064694) vod_det_cell_field_pane_t1

0x9789,	// (0x00063b50) call7_btn_grp_pane_ParamLimits

0x9789,	// (0x00063b50) call7_btn_grp_pane

0x9798,	// (0x00063b5f) call7_bubble_pane_ParamLimits

0x9798,	// (0x00063b5f) call7_bubble_pane

0x97a6,	// (0x00063b6d) cell_call7_btn_pane_ParamLimits

0x97a6,	// (0x00063b6d) cell_call7_btn_pane

0x97b5,	// (0x00063b7c) call7_pane_g1_ParamLimits

0x97b5,	// (0x00063b7c) call7_pane_g1

0x97c4,	// (0x00063b8b) call7_windows_conf_pane_ParamLimits

0x97c4,	// (0x00063b8b) call7_windows_conf_pane

0x97e0,	// (0x00063ba7) popup_call7_1st_window_ParamLimits

0x97e0,	// (0x00063ba7) popup_call7_1st_window

0x97ee,	// (0x00063bb5) popup_call7_2nd_window_ParamLimits

0x97ee,	// (0x00063bb5) popup_call7_2nd_window

0x97fc,	// (0x00063bc3) popup_call7_3rd_window_ParamLimits

0x97fc,	// (0x00063bc3) popup_call7_3rd_window

0xa7a8,	// (0x00064b6f) bg_button_pane_cp26

0x9ba8,	// (0x00063f6f) cell_call7_btn_pane_g1

0xa185,	// (0x0006454c) cell_call7_btn_pane_t1

0xa7a8,	// (0x00064b6f) bg_popup_window_pane_cp12

0xa31d,	// (0x000646e4) popup_call7_1st_window_g1

0xa325,	// (0x000646ec) popup_call7_1st_window_g2

0xa32d,	// (0x000646f4) popup_call7_1st_window_g3

0x0002,

0xfa90,	// (0x00069e57) popup_call7_1st_window_g

0xa335,	// (0x000646fc) popup_call7_1st_window_t1

0xa344,	// (0x0006470b) popup_call7_1st_window_t2

0xa352,	// (0x00064719) popup_call7_1st_window_t3

0x0002,

0xfa97,	// (0x00069e5e) popup_call7_1st_window_t

0xa7a8,	// (0x00064b6f) bg_popup_window_pane_cp13

0xa360,	// (0x00064727) popup_call7_2nd_window_g1

0xa368,	// (0x0006472f) popup_call7_2nd_window_g2

0xa370,	// (0x00064737) popup_call7_2nd_window_g3

0x0002,

0xfa9e,	// (0x00069e65) popup_call7_2nd_window_g

0xa378,	// (0x0006473f) popup_call7_2nd_window_t1

0xa7a8,	// (0x00064b6f) bg_popup_window_pane_cp14

0xa387,	// (0x0006474e) call7_list_conf_pane

0xa38f,	// (0x00064756) call7_list_conf_row_pane_ParamLimits

0xa38f,	// (0x00064756) call7_list_conf_row_pane

0xa3a2,	// (0x00064769) call7_list_conf_row_pane_g1

0xa3aa,	// (0x00064771) call7_list_conf_row_pane_g2

0x0001,

0xfaa5,	// (0x00069e6c) call7_list_conf_row_pane_g

0xa3b2,	// (0x00064779) call7_list_conf_row_pane_t1

0xa7a8,	// (0x00064b6f) list_highlight_pane_cp22
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
	&WindowLineVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&WindowLineVCR,
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
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
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
	&WindowLineVCR,
	&TextLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&TextLineVCR,
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
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
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
	&ParameterLimitsV,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&Limits,
	&WindowTableLVCR,
	&TextLineVCR,
	&WindowLineVCR,
	};

} // end of namespace AknLayoutScalable_Abrw_pnp4_apps_nhd4_prt_tch_Small
