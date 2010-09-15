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

#include "aknlayoutscalable_elaf_pnl4_apps_nhd4_lsc_tch_small.h"
#include "AknLayout2ScalableDecode.h"
namespace AknLayoutScalable_Apps { extern const TUint8 KByteCodedData_AknLayoutScalable_Elaf_pnp4_apps_nhd4_prt_tch[]; }

namespace AknLayoutScalable_Elaf_pnl4_apps_nhd4_lsc_tch_Small
{

extern const TUint16 KDataLookup[AknLayoutScalable_Apps::E_TApiId_TableSize];
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Apps::KByteCodedData_AknLayoutScalable_Elaf_pnp4_apps_nhd4_prt_tch + 0x0004b321 };

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
0x0e85,	// (0x0004c1a6) Screen

0x0e91,	// (0x0004c1b2) application_window

0x0ecd,	// (0x0004c1ee) area_bottom_pane_ParamLimits

0x0ecd,	// (0x0004c1ee) area_bottom_pane

0x0f06,	// (0x0004c227) area_top_pane_ParamLimits

0x0f06,	// (0x0004c227) area_top_pane

0x9ba4,	// (0x00054ec5) call_video_uplink_pane_ParamLimits

0x9ba4,	// (0x00054ec5) call_video_uplink_pane

0x0f94,	// (0x0004c2b5) main_pane_ParamLimits

0x0f94,	// (0x0004c2b5) main_pane

0xcecd,	// (0x000581ee) context_pane

0x3b5b,	// (0x0004ee7c) navi_pane

0x3b8d,	// (0x0004eeae) popup_cale_events_window_ParamLimits

0x3b8d,	// (0x0004eeae) popup_cale_events_window

0xcee0,	// (0x00058201) popup_mup_playback_window

0x3ba5,	// (0x0004eec6) signal_pane

0xaf37,	// (0x00056258) main_browser_pane

0xb0fb,	// (0x0005641c) main_burst_pane

0x38c3,	// (0x0004ebe4) main_calc_pane

0xcec1,	// (0x000581e2) main_cale_day_pane

0x1423,	// (0x0004c744) main_cale_month_pane

0xcec1,	// (0x000581e2) main_cale_week_pane

0xb0fb,	// (0x0005641c) main_call_pane

0xabef,	// (0x00055f10) main_call_poc_pane

0xb0fb,	// (0x0005641c) main_camera_pane

0xb0fb,	// (0x0005641c) main_chi_dic_pane

0xb8d0,	// (0x00056bf1) main_clock_pane

0xabef,	// (0x00055f10) main_fmradio_pane

0xb0fb,	// (0x0005641c) main_graph_messa_pane

0xabef,	// (0x00055f10) main_help_pane

0xaf37,	// (0x00056258) main_im_pane

0xae4a,	// (0x0005616b) main_image_pane_ParamLimits

0xae4a,	// (0x0005616b) main_image_pane

0xabef,	// (0x00055f10) main_location2_pane

0xb0fb,	// (0x0005641c) main_location_pane

0xae4a,	// (0x0005616b) main_messa_pane

0xabef,	// (0x00055f10) main_mp2_pane

0xb0fb,	// (0x0005641c) main_mp_pane

0xabef,	// (0x00055f10) main_msg_pane

0xabef,	// (0x00055f10) main_mup_eq_pane

0xabef,	// (0x00055f10) main_mup_pane

0xaf37,	// (0x00056258) main_notes_pane

0xabef,	// (0x00055f10) main_pec_pane

0xabef,	// (0x00055f10) main_phob_pane

0xabef,	// (0x00055f10) main_pinb_pane

0xabef,	// (0x00055f10) main_postcard_pane

0xabef,	// (0x00055f10) main_qdial_pane

0xb0fb,	// (0x0005641c) main_skin_pane

0xabef,	// (0x00055f10) main_smil2_pane

0xb0fb,	// (0x0005641c) main_smil_pane

0xb0fb,	// (0x0005641c) main_video_pane

0xb0fb,	// (0x0005641c) main_video_tele_pane

0xae4a,	// (0x0005616b) main_viewer_pane_ParamLimits

0xae4a,	// (0x0005616b) main_viewer_pane

0xb0fb,	// (0x0005641c) main_vorec_pane

0x3917,	// (0x0004ec38) popup_blid_sat_info_window_ParamLimits

0x3917,	// (0x0004ec38) popup_blid_sat_info_window

0x396f,	// (0x0004ec90) popup_dyc_status_message_window_ParamLimits

0x396f,	// (0x0004ec90) popup_dyc_status_message_window

0x3987,	// (0x0004eca8) popup_grid_large_graphic_window_ParamLimits

0x3987,	// (0x0004eca8) popup_grid_large_graphic_window

0x3a37,	// (0x0004ed58) popup_loc_request_window_ParamLimits

0x3a37,	// (0x0004ed58) popup_loc_request_window

0x3b33,	// (0x0004ee54) popup_wml_address_window_ParamLimits

0x3b33,	// (0x0004ee54) popup_wml_address_window

0x36fd,	// (0x0004ea1e) call_muted_g1

0x3370,	// (0x0004e691) popup_call_audio_conf_window_ParamLimits

0x3370,	// (0x0004e691) popup_call_audio_conf_window

0x3711,	// (0x0004ea32) popup_call_audio_first_window_ParamLimits

0x3711,	// (0x0004ea32) popup_call_audio_first_window

0x3787,	// (0x0004eaa8) popup_call_audio_in_window_ParamLimits

0x3787,	// (0x0004eaa8) popup_call_audio_in_window

0x37c3,	// (0x0004eae4) popup_call_audio_out_window_ParamLimits

0x37c3,	// (0x0004eae4) popup_call_audio_out_window

0x37fd,	// (0x0004eb1e) popup_call_audio_second_window_ParamLimits

0x37fd,	// (0x0004eb1e) popup_call_audio_second_window

0x3853,	// (0x0004eb74) popup_call_audio_wait_window_ParamLimits

0x3853,	// (0x0004eb74) popup_call_audio_wait_window

0x3888,	// (0x0004eba9) popup_number_entry_window_ParamLimits

0x3888,	// (0x0004eba9) popup_number_entry_window

0xa7dc,	// (0x00055afd) bg_popup_call_pane_cp05_ParamLimits

0xa7dc,	// (0x00055afd) bg_popup_call_pane_cp05

0xa7fc,	// (0x00055b1d) popup_number_entry_window_t1

0xa80f,	// (0x00055b30) popup_number_entry_window_t2

0xa821,	// (0x00055b42) popup_number_entry_window_t3

0x0003,

0xf045,	// (0x0005a366) popup_number_entry_window_t

0xa833,	// (0x00055b54) text_title_cp2

0xa846,	// (0x00055b67) bg_popup_call_pane_cp_ParamLimits

0xa846,	// (0x00055b67) bg_popup_call_pane_cp

0xa854,	// (0x00055b75) call_thumbnail_pane

0xa85c,	// (0x00055b7d) popup_call_audio_in_window_g1_ParamLimits

0xa85c,	// (0x00055b7d) popup_call_audio_in_window_g1

0xa868,	// (0x00055b89) popup_call_audio_in_window_g2_ParamLimits

0xa868,	// (0x00055b89) popup_call_audio_in_window_g2

0xa874,	// (0x00055b95) popup_call_audio_in_window_g3_ParamLimits

0xa874,	// (0x00055b95) popup_call_audio_in_window_g3

0x0002,

0xf04e,	// (0x0005a36f) popup_call_audio_in_window_g_ParamLimits

0xf04e,	// (0x0005a36f) popup_call_audio_in_window_g

0xa880,	// (0x00055ba1) popup_call_audio_in_window_t1_ParamLimits

0xa880,	// (0x00055ba1) popup_call_audio_in_window_t1

0xa89c,	// (0x00055bbd) popup_call_audio_in_window_t2_ParamLimits

0xa89c,	// (0x00055bbd) popup_call_audio_in_window_t2

0xa8b8,	// (0x00055bd9) popup_call_audio_in_window_t3_ParamLimits

0xa8b8,	// (0x00055bd9) popup_call_audio_in_window_t3

0x0002,

0xf055,	// (0x0005a376) popup_call_audio_in_window_t_ParamLimits

0xf055,	// (0x0005a376) popup_call_audio_in_window_t

0xa846,	// (0x00055b67) bg_popup_call_pane_cp01_ParamLimits

0xa846,	// (0x00055b67) bg_popup_call_pane_cp01

0xa854,	// (0x00055b75) call_thumbnail_pane_cp02

0xa8cb,	// (0x00055bec) call_type_pane_cp022

0xa8d3,	// (0x00055bf4) popup_call_audio_out_window_g1_ParamLimits

0xa8d3,	// (0x00055bf4) popup_call_audio_out_window_g1

0xa8e5,	// (0x00055c06) popup_call_audio_out_window_g2_ParamLimits

0xa8e5,	// (0x00055c06) popup_call_audio_out_window_g2

0xa8f1,	// (0x00055c12) popup_call_audio_out_window_g3_ParamLimits

0xa8f1,	// (0x00055c12) popup_call_audio_out_window_g3

0x0002,

0xf05c,	// (0x0005a37d) popup_call_audio_out_window_g_ParamLimits

0xf05c,	// (0x0005a37d) popup_call_audio_out_window_g

0xa903,	// (0x00055c24) popup_call_audio_out_window_t1_ParamLimits

0xa903,	// (0x00055c24) popup_call_audio_out_window_t1

0xa91b,	// (0x00055c3c) popup_call_audio_out_window_t2_ParamLimits

0xa91b,	// (0x00055c3c) popup_call_audio_out_window_t2

0x0001,

0xf063,	// (0x0005a384) popup_call_audio_out_window_t_ParamLimits

0xf063,	// (0x0005a384) popup_call_audio_out_window_t

0xa930,	// (0x00055c51) bg_popup_call_pane_ParamLimits

0xa930,	// (0x00055c51) bg_popup_call_pane

0x10ea,	// (0x0004c40b) call_thumbnail_pane_cp_ParamLimits

0x10ea,	// (0x0004c40b) call_thumbnail_pane_cp

0xa9b4,	// (0x00055cd5) call_type_pane_cp01_ParamLimits

0xa9b4,	// (0x00055cd5) call_type_pane_cp01

0xa9f8,	// (0x00055d19) popup_call_audio_first_window_g1_ParamLimits

0xa9f8,	// (0x00055d19) popup_call_audio_first_window_g1

0xaa44,	// (0x00055d65) popup_call_audio_first_window_g2_ParamLimits

0xaa44,	// (0x00055d65) popup_call_audio_first_window_g2

0x0001,

0xf068,	// (0x0005a389) popup_call_audio_first_window_g_ParamLimits

0xf068,	// (0x0005a389) popup_call_audio_first_window_g

0xaa88,	// (0x00055da9) popup_call_audio_first_window_t1_ParamLimits

0xaa88,	// (0x00055da9) popup_call_audio_first_window_t1

0xab34,	// (0x00055e55) popup_call_audio_first_window_t4_ParamLimits

0xab34,	// (0x00055e55) popup_call_audio_first_window_t4

0xabc0,	// (0x00055ee1) popup_call_audio_first_window_t5_ParamLimits

0xabc0,	// (0x00055ee1) popup_call_audio_first_window_t5

0x0002,

0xf06d,	// (0x0005a38e) popup_call_audio_first_window_t_ParamLimits

0xf06d,	// (0x0005a38e) popup_call_audio_first_window_t

0xabef,	// (0x00055f10) bg_popup_call_pane_cp02

0xabf9,	// (0x00055f1a) call_type_pane_cp023

0xac01,	// (0x00055f22) popup_call_audio_wait_window_g1

0xac09,	// (0x00055f2a) popup_call_audio_wait_window_g2

0x0001,

0xf074,	// (0x0005a395) popup_call_audio_wait_window_g

0xac11,	// (0x00055f32) popup_call_audio_wait_window_t3

0xac1f,	// (0x00055f40) bg_popup_call_pane_cp03_ParamLimits

0xac1f,	// (0x00055f40) bg_popup_call_pane_cp03

0xac7f,	// (0x00055fa0) call_thumbnail_pane_cp011_ParamLimits

0xac7f,	// (0x00055fa0) call_thumbnail_pane_cp011

0xac8b,	// (0x00055fac) call_type_pane_cp034_ParamLimits

0xac8b,	// (0x00055fac) call_type_pane_cp034

0xacc7,	// (0x00055fe8) popup_call_audio_second_window_g1_ParamLimits

0xacc7,	// (0x00055fe8) popup_call_audio_second_window_g1

0xad03,	// (0x00056024) popup_call_audio_second_window_g2_ParamLimits

0xad03,	// (0x00056024) popup_call_audio_second_window_g2

0x0001,

0xf079,	// (0x0005a39a) popup_call_audio_second_window_g_ParamLimits

0xf079,	// (0x0005a39a) popup_call_audio_second_window_g

0xad3f,	// (0x00056060) popup_call_audio_second_window_t1_ParamLimits

0xad3f,	// (0x00056060) popup_call_audio_second_window_t1

0xadc0,	// (0x000560e1) popup_call_audio_second_window_t2_ParamLimits

0xadc0,	// (0x000560e1) popup_call_audio_second_window_t2

0xadf6,	// (0x00056117) popup_call_audio_second_window_t3_ParamLimits

0xadf6,	// (0x00056117) popup_call_audio_second_window_t3

0x0002,

0xf07e,	// (0x0005a39f) popup_call_audio_second_window_t_ParamLimits

0xf07e,	// (0x0005a39f) popup_call_audio_second_window_t

0xabef,	// (0x00055f10) bg_popup_call_pane_cp04

0xae2c,	// (0x0005614d) list_conf_pane

0xae34,	// (0x00056155) popup_call_audio_conf_window_t1

0xae42,	// (0x00056163) call_thumbnail_pane_g1

0xae4a,	// (0x0005616b) bg_pinb_pane_ParamLimits

0xae4a,	// (0x0005616b) bg_pinb_pane

0xae58,	// (0x00056179) find_pinb_pane

0xae4a,	// (0x0005616b) listscroll_pinb_pane_ParamLimits

0xae4a,	// (0x0005616b) listscroll_pinb_pane

0xae62,	// (0x00056183) pinb_bg_pane_g1

0xae62,	// (0x00056183) pinb_bg_pane_g2

0xae62,	// (0x00056183) pinb_bg_pane_g3

0xae62,	// (0x00056183) pinb_bg_pane_g4

0xae62,	// (0x00056183) pinb_bg_pane_g5

0xae62,	// (0x00056183) pinb_bg_pane_g6

0xae62,	// (0x00056183) pinb_bg_pane_g7

0xae62,	// (0x00056183) pinb_bg_pane_g8

0xae62,	// (0x00056183) pinb_bg_pane_g9

0xae62,	// (0x00056183) pinb_bg_pane_g10

0x0009,

0xf085,	// (0x0005a3a6) pinb_bg_pane_g

0xa7c4,	// (0x00055ae5) grid_pinb_pane

0xa7c4,	// (0x00055ae5) list_pinb_pane

0xa7ce,	// (0x00055aef) scroll_pane_cp01_ParamLimits

0xa7ce,	// (0x00055aef) scroll_pane_cp01

0xae6c,	// (0x0005618d) find_pinb_pane_g1_ParamLimits

0xae6c,	// (0x0005618d) find_pinb_pane_g1

0xae84,	// (0x000561a5) find_pinb_pane_t1

0xae96,	// (0x000561b7) find_pinb_pane_t2

0x0001,

0xf09f,	// (0x0005a3c0) find_pinb_pane_t

0xaeab,	// (0x000561cc) input_focus_pane_cp01_ParamLimits

0xaeab,	// (0x000561cc) input_focus_pane_cp01

0xaeb7,	// (0x000561d8) cell_pinb_pane_ParamLimits

0xaeb7,	// (0x000561d8) cell_pinb_pane

0xaec5,	// (0x000561e6) cell_pinb_pane_g1_ParamLimits

0xaec5,	// (0x000561e6) cell_pinb_pane_g1

0xaed3,	// (0x000561f4) cell_pinb_pane_g2_ParamLimits

0xaed3,	// (0x000561f4) cell_pinb_pane_g2

0xaed3,	// (0x000561f4) cell_pinb_pane_g3_ParamLimits

0xaed3,	// (0x000561f4) cell_pinb_pane_g3

0x0002,

0xf0a4,	// (0x0005a3c5) cell_pinb_pane_g_ParamLimits

0xf0a4,	// (0x0005a3c5) cell_pinb_pane_g

0xabef,	// (0x00055f10) grid_highlight_pane_cp01

0xaeb7,	// (0x000561d8) list_pinb_item_pane_ParamLimits

0xaeb7,	// (0x000561d8) list_pinb_item_pane

0xa7c4,	// (0x00055ae5) list_highlight_pane_cp02

0xaee1,	// (0x00056202) list_pinb_item_pane_g1_ParamLimits

0xaee1,	// (0x00056202) list_pinb_item_pane_g1

0xaed3,	// (0x000561f4) list_pinb_item_pane_g2_ParamLimits

0xaed3,	// (0x000561f4) list_pinb_item_pane_g2

0xaec5,	// (0x000561e6) list_pinb_item_pane_g3_ParamLimits

0xaec5,	// (0x000561e6) list_pinb_item_pane_g3

0xaed3,	// (0x000561f4) list_pinb_item_pane_g4_ParamLimits

0xaed3,	// (0x000561f4) list_pinb_item_pane_g4

0x0003,

0xf0ab,	// (0x0005a3cc) list_pinb_item_pane_g_ParamLimits

0xf0ab,	// (0x0005a3cc) list_pinb_item_pane_g

0xaeef,	// (0x00056210) list_pinb_item_pane_t1_ParamLimits

0xaeef,	// (0x00056210) list_pinb_item_pane_t1

0x112c,	// (0x0004c44d) calc_display_pane

0x1151,	// (0x0004c472) calc_paper_pane

0x1174,	// (0x0004c495) grid_calc_pane

0xabef,	// (0x00055f10) bg_list_pane_cp01

0x11a2,	// (0x0004c4c3) clock_g1

0x11aa,	// (0x0004c4cb) clock_g2

0x0001,

0xf0b4,	// (0x0005a3d5) clock_g

0x11b2,	// (0x0004c4d3) clock_t1_ParamLimits

0x11b2,	// (0x0004c4d3) clock_t1

0x11c7,	// (0x0004c4e8) clock_t2_ParamLimits

0x11c7,	// (0x0004c4e8) clock_t2

0x11d9,	// (0x0004c4fa) clock_t3_ParamLimits

0x11d9,	// (0x0004c4fa) clock_t3

0x11eb,	// (0x0004c50c) clock_t4_ParamLimits

0x11eb,	// (0x0004c50c) clock_t4

0x11fd,	// (0x0004c51e) clock_t5_ParamLimits

0x11fd,	// (0x0004c51e) clock_t5

0x1212,	// (0x0004c533) clock_t6_ParamLimits

0x1212,	// (0x0004c533) clock_t6

0x1224,	// (0x0004c545) clock_t7_ParamLimits

0x1224,	// (0x0004c545) clock_t7

0x1236,	// (0x0004c557) clock_t8_ParamLimits

0x1236,	// (0x0004c557) clock_t8

0x124a,	// (0x0004c56b) clock_t9_ParamLimits

0x124a,	// (0x0004c56b) clock_t9

0x0008,

0xf0b9,	// (0x0005a3da) clock_t_ParamLimits

0xf0b9,	// (0x0005a3da) clock_t

0xaf03,	// (0x00056224) popup_clock_analogue_window_cp02

0xaf03,	// (0x00056224) popup_clock_digital_window_cp01

0xabef,	// (0x00055f10) listscroll_help_pane

0xabef,	// (0x00055f10) phob_pre_status_pane

0xaf0b,	// (0x0005622c) grid_qdial_pane

0xae4a,	// (0x0005616b) listscroll_mce_pane

0xae4a,	// (0x0005616b) bg_notes_pane

0xaf15,	// (0x00056236) list_notes_pane

0x125e,	// (0x0004c57f) scroll_pane_cp06

0xaf23,	// (0x00056244) bg_calc_paper_pane

0x9bca,	// (0x00054eeb) list_calc_pane

0xaf37,	// (0x00056258) bg_calc_display_pane

0x1272,	// (0x0004c593) calc_display_pane_t1

0x1284,	// (0x0004c5a5) calc_display_pane_t2

0x9be4,	// (0x00054f05) calc_display_pane_t3

0x0002,

0xf0cc,	// (0x0005a3ed) calc_display_pane_t

0x1296,	// (0x0004c5b7) cell_calc_pane_ParamLimits

0x1296,	// (0x0004c5b7) cell_calc_pane

0xaf43,	// (0x00056264) bg_calc_paper_pane_g1

0xaf4f,	// (0x00056270) bg_calc_paper_pane_g2

0xaf5b,	// (0x0005627c) bg_calc_paper_pane_g3

0xaf67,	// (0x00056288) bg_calc_paper_pane_g4

0xaf73,	// (0x00056294) bg_calc_paper_pane_g5

0x12cb,	// (0x0004c5ec) bg_calc_paper_pane_g6

0x12da,	// (0x0004c5fb) bg_calc_paper_pane_g7

0x12e9,	// (0x0004c60a) bg_calc_paper_pane_g8

0x0007,

0xf0d3,	// (0x0005a3f4) bg_calc_paper_pane_g

0x12fc,	// (0x0004c61d) calc_bg_paper_pane_g9

0x130f,	// (0x0004c630) list_calc_item_pane_ParamLimits

0x130f,	// (0x0004c630) list_calc_item_pane

0xaf7f,	// (0x000562a0) list_calc_item_pane_g1

0x9bf6,	// (0x00054f17) list_calc_item_pane_t1_ParamLimits

0x9bf6,	// (0x00054f17) list_calc_item_pane_t1

0x1324,	// (0x0004c645) list_calc_item_pane_t2_ParamLimits

0x1324,	// (0x0004c645) list_calc_item_pane_t2

0x0001,

0xf0e4,	// (0x0005a405) list_calc_item_pane_t_ParamLimits

0xf0e4,	// (0x0005a405) list_calc_item_pane_t

0xae62,	// (0x00056183) cell_calc_pane_g1

0xaf8c,	// (0x000562ad) grid_highlight_pane_cp02

0xb071,	// (0x00056392) bg_calc_display_pane_g1

0x1356,	// (0x0004c677) bg_calc_display_pane_g2

0xdc66,	// (0x00058f87) bg_calc_display_pane_g3

0x0002,

0xf0ee,	// (0x0005a40f) bg_calc_display_pane_g

0x1360,	// (0x0004c681) cell_qdial_pane_ParamLimits

0x1360,	// (0x0004c681) cell_qdial_pane

0x1374,	// (0x0004c695) cell_qdial_pane_g1_ParamLimits

0x1374,	// (0x0004c695) cell_qdial_pane_g1

0x138a,	// (0x0004c6ab) cell_qdial_pane_g2_ParamLimits

0x138a,	// (0x0004c6ab) cell_qdial_pane_g2

0xafae,	// (0x000562cf) cell_qdial_pane_g3_ParamLimits

0xafae,	// (0x000562cf) cell_qdial_pane_g3

0x0003,

0xf0f5,	// (0x0005a416) cell_qdial_pane_g_ParamLimits

0xf0f5,	// (0x0005a416) cell_qdial_pane_g

0x13b0,	// (0x0004c6d1) cell_qdial_pane_t1_ParamLimits

0x13b0,	// (0x0004c6d1) cell_qdial_pane_t1

0x13c8,	// (0x0004c6e9) cell_qdial_pane_t2_ParamLimits

0x13c8,	// (0x0004c6e9) cell_qdial_pane_t2

0x13db,	// (0x0004c6fc) cell_qdial_pane_t3_ParamLimits

0x13db,	// (0x0004c6fc) cell_qdial_pane_t3

0x0002,

0xf0fe,	// (0x0005a41f) cell_qdial_pane_t_ParamLimits

0xf0fe,	// (0x0005a41f) cell_qdial_pane_t

0xabef,	// (0x00055f10) grid_highlight_pane_cp04

0xafba,	// (0x000562db) thumbnail_qdial_pane_ParamLimits

0xafba,	// (0x000562db) thumbnail_qdial_pane

0xb016,	// (0x00056337) list_help_pane

0xb01f,	// (0x00056340) scroll_pane_cp02

0x13ee,	// (0x0004c70f) help_list_pane_t1_ParamLimits

0x13ee,	// (0x0004c70f) help_list_pane_t1

0x9c08,	// (0x00054f29) bg_notes_pane_g2

0x9c10,	// (0x00054f31) bg_notes_pane_g3

0x9c18,	// (0x00054f39) notes_bg_pane_g1

0x9c20,	// (0x00054f41) notes_bg_pane_g4

0x9c28,	// (0x00054f49) notes_bg_pane_g5

0x9c30,	// (0x00054f51) notes_bg_pane_g6

0x9c38,	// (0x00054f59) notes_bg_pane_g7

0x9c40,	// (0x00054f61) notes_bg_pane_g8

0x9c48,	// (0x00054f69) notes_bg_pane_g9

0x0006,

0xf11c,	// (0x0005a43d) notes_bg_pane_g

0x140d,	// (0x0004c72e) list_notes_text_pane_ParamLimits

0x140d,	// (0x0004c72e) list_notes_text_pane

0xb028,	// (0x00056349) list_notes_text_pane_g1

0x0641,	// (0x0004b962) list_notes_text_pane_t1

0x1423,	// (0x0004c744) listscroll_cale_week_pane

0x144f,	// (0x0004c770) bg_cale_heading_pane

0xb04b,	// (0x0005636c) bg_cale_pane_cp01

0x1467,	// (0x0004c788) cale_week_corner_pane

0x1486,	// (0x0004c7a7) cale_week_day_heading_pane

0x14a3,	// (0x0004c7c4) cale_week_scroll_pane_g1

0x14b6,	// (0x0004c7d7) cale_week_scroll_pane_g2

0x14ce,	// (0x0004c7ef) cale_week_scroll_pane_g3

0x14e6,	// (0x0004c807) cale_week_scroll_pane_g4

0x14fe,	// (0x0004c81f) cale_week_scroll_pane_g5

0x151e,	// (0x0004c83f) cale_week_scroll_pane_g6

0x153e,	// (0x0004c85f) cale_week_scroll_pane_g7

0x155e,	// (0x0004c87f) cale_week_scroll_pane_g8

0x1582,	// (0x0004c8a3) cale_week_scroll_pane_g9

0x159a,	// (0x0004c8bb) cale_week_scroll_pane_g10

0x15b2,	// (0x0004c8d3) cale_week_scroll_pane_g11

0x15ca,	// (0x0004c8eb) cale_week_scroll_pane_g12

0x15e2,	// (0x0004c903) cale_week_scroll_pane_g13

0x15e2,	// (0x0004c903) cale_week_scroll_pane_g14

0x15e2,	// (0x0004c903) cale_week_scroll_pane_g15

0x000f,

0xf12b,	// (0x0005a44c) cale_week_scroll_pane_g

0x161e,	// (0x0004c93f) cale_week_time_pane

0x1642,	// (0x0004c963) grid_cale_week_pane

0xb08c,	// (0x000563ad) scroll_pane_cp08

0x1668,	// (0x0004c989) cell_cale_week_pane_ParamLimits

0x1668,	// (0x0004c989) cell_cale_week_pane

0x16f6,	// (0x0004ca17) cale_week_day_heading_pane_t1

0x1720,	// (0x0004ca41) cale_week_day_heading_pane_t2

0x174f,	// (0x0004ca70) cale_week_day_heading_pane_t3

0x177e,	// (0x0004ca9f) cale_week_day_heading_pane_t4

0x17ad,	// (0x0004cace) cale_week_day_heading_pane_t5

0x17e4,	// (0x0004cb05) cale_week_day_heading_pane_t6

0x181b,	// (0x0004cb3c) cale_week_day_heading_pane_t7

0x0006,

0xf14c,	// (0x0005a46d) cale_week_day_heading_pane_t

0xb0a9,	// (0x000563ca) bg_cale_side_pane

0x1845,	// (0x0004cb66) cale_week_time_pane_t1

0x185f,	// (0x0004cb80) cale_week_time_pane_t2

0x1879,	// (0x0004cb9a) cale_week_time_pane_t3

0x1893,	// (0x0004cbb4) cale_week_time_pane_t4

0x18ad,	// (0x0004cbce) cale_week_time_pane_t5

0x18c7,	// (0x0004cbe8) cale_week_time_pane_t6

0x18e1,	// (0x0004cc02) cale_week_time_pane_t7

0x18fb,	// (0x0004cc1c) cale_week_time_pane_t8

0x0007,

0xf15b,	// (0x0005a47c) cale_week_time_pane_t

0x191b,	// (0x0004cc3c) cell_cale_week_pane_g2

0x193f,	// (0x0004cc60) cell_cale_week_pane_g3_ParamLimits

0x193f,	// (0x0004cc60) cell_cale_week_pane_g3

0xb0b7,	// (0x000563d8) grid_highlight_pane_cp07

0xb0bf,	// (0x000563e0) listscroll_gms_pane

0xb0c9,	// (0x000563ea) grid_gms_pane

0xb0d2,	// (0x000563f3) listscroll_gms_pane_g1

0xb0da,	// (0x000563fb) listscroll_gms_pane_g2

0x0001,

0xf16c,	// (0x0005a48d) listscroll_gms_pane_g

0x1957,	// (0x0004cc78) scroll_pane_cp010

0x1962,	// (0x0004cc83) cell_gms_pane_ParamLimits

0x1962,	// (0x0004cc83) cell_gms_pane

0x1974,	// (0x0004cc95) cell_gms_pane_g1

0xb0e2,	// (0x00056403) cell_gms_pane_g2

0xb028,	// (0x00056349) cell_gms_pane_g3

0xb0ea,	// (0x0005640b) cell_gms_pane_g4

0x0003,

0xf171,	// (0x0005a492) cell_gms_pane_g

0xb0f3,	// (0x00056414) grid_highlight_pane_cp09

0x3685,	// (0x0004e9a6) phob_pre_status_pane_g1

0x368d,	// (0x0004e9ae) phob_pre_status_pane_g2

0x3695,	// (0x0004e9b6) phob_pre_status_pane_g3

0x369d,	// (0x0004e9be) phob_pre_status_pane_g4

0x0004,

0xf548,	// (0x0005a869) phob_pre_status_pane_g

0x36ad,	// (0x0004e9ce) phob_pre_status_pane_t1

0x36bb,	// (0x0004e9dc) phob_pre_status_pane_t2

0x36cb,	// (0x0004e9ec) phob_pre_status_pane_t3

0x0002,

0xf553,	// (0x0005a874) phob_pre_status_pane_t

0xb0fb,	// (0x0005641c) bg_list_pane_cp05

0x1984,	// (0x0004cca5) grid_vorec_pane

0x198c,	// (0x0004ccad) vorec_t1

0x199a,	// (0x0004ccbb) vorec_t2

0x19a8,	// (0x0004ccc9) vorec_t3

0x19b6,	// (0x0004ccd7) vorec_t4

0xa79a,	// (0x00055abb) vorec_t5

0x899f,	// (0x00053cc0) vorec_t6

0x0004,

0xf17a,	// (0x0005a49b) vorec_t

0x89ad,	// (0x00053cce) wait_bar_pane_cp01

0x19d2,	// (0x0004ccf3) cell_vorec_pane_ParamLimits

0x19d2,	// (0x0004ccf3) cell_vorec_pane

0x9c50,	// (0x00054f71) cell_vorec_pane_g1

0xabef,	// (0x00055f10) grid_highlight_pane_cp05

0xa7ce,	// (0x00055aef) cams_zoom_pane

0xa7ce,	// (0x00055aef) image_vga_pane

0xaec5,	// (0x000561e6) main_camera_pane_g1

0xaec5,	// (0x000561e6) main_camera_pane_g2

0xaec5,	// (0x000561e6) main_camera_pane_g3

0xaec5,	// (0x000561e6) main_camera_pane_g4

0xaec5,	// (0x000561e6) main_camera_pane_g5

0xaec5,	// (0x000561e6) main_camera_pane_g6

0xaec5,	// (0x000561e6) main_camera_pane_g7

0x0007,

0xf185,	// (0x0005a4a6) main_camera_pane_g

0xb103,	// (0x00056424) main_camera_pane_t1

0xb103,	// (0x00056424) main_camera_pane_t2

0x0001,

0xf196,	// (0x0005a4b7) main_camera_pane_t

0x19f9,	// (0x0004cd1a) cams_zoom_pane_cp_ParamLimits

0x19f9,	// (0x0004cd1a) cams_zoom_pane_cp

0x1a2d,	// (0x0004cd4e) image_cif_pane_ParamLimits

0x1a2d,	// (0x0004cd4e) image_cif_pane

0xa7c4,	// (0x00055ae5) image_subqcif_pane

0x1a3f,	// (0x0004cd60) main_video_pane_g1_ParamLimits

0x1a3f,	// (0x0004cd60) main_video_pane_g1

0x1a6d,	// (0x0004cd8e) main_video_pane_g2_ParamLimits

0x1a6d,	// (0x0004cd8e) main_video_pane_g2

0x1aa7,	// (0x0004cdc8) main_video_pane_g3_ParamLimits

0x1aa7,	// (0x0004cdc8) main_video_pane_g3

0x1aa7,	// (0x0004cdc8) main_video_pane_g4_ParamLimits

0x1aa7,	// (0x0004cdc8) main_video_pane_g4

0x1adb,	// (0x0004cdfc) main_video_pane_g5_ParamLimits

0x1adb,	// (0x0004cdfc) main_video_pane_g5

0xb117,	// (0x00056438) main_video_pane_g6_ParamLimits

0xb117,	// (0x00056438) main_video_pane_g6

0x0006,

0xf19b,	// (0x0005a4bc) main_video_pane_g_ParamLimits

0xf19b,	// (0x0005a4bc) main_video_pane_g

0x1af7,	// (0x0004ce18) main_video_pane_t1_ParamLimits

0x1af7,	// (0x0004ce18) main_video_pane_t1

0xb131,	// (0x00056452) cams_zoom_pane_g1

0xb131,	// (0x00056452) cams_zoom_pane_g2

0xb131,	// (0x00056452) cams_zoom_pane_g3

0xb131,	// (0x00056452) cams_zoom_pane_g4

0x0003,

0xf1aa,	// (0x0005a4cb) cams_zoom_pane_g

0x1b4f,	// (0x0004ce70) grid_cams_pane

0x1b69,	// (0x0004ce8a) linegrid_cams_pane

0x1b7c,	// (0x0004ce9d) cell_cams_pane_ParamLimits

0x1b7c,	// (0x0004ce9d) cell_cams_pane

0xb13b,	// (0x0005645c) cams_burst_image_pane

0xb143,	// (0x00056464) cell_cams_pane_g1

0xabef,	// (0x00055f10) grid_highlight_pane_cp03

0xae62,	// (0x00056183) mp_bg_pane_g1

0xa7c4,	// (0x00055ae5) bg_list_pane_cp03

0xa7c4,	// (0x00055ae5) bg_mp_pane

0xa7c4,	// (0x00055ae5) grid_mp_pane

0xb131,	// (0x00056452) media_player_g1

0xb664,	// (0x00056985) media_player_t1

0xb664,	// (0x00056985) media_player_t2

0xb664,	// (0x00056985) media_player_t3

0xb664,	// (0x00056985) media_player_t4

0xb664,	// (0x00056985) media_player_t5

0xb664,	// (0x00056985) media_player_t6

0xb664,	// (0x00056985) media_player_t7

0x0006,

0xf532,	// (0x0005a853) media_player_t

0xa7c4,	// (0x00055ae5) wait_bar_pane_cp02

0xf517,	// (0x0005a838) main_usb_pane_t

0xb8d0,	// (0x00056bf1) cell_mp_pane

0xae62,	// (0x00056183) cell_mp_pane_g1

0xabef,	// (0x00055f10) grid_highlight_pane_cp06

0xb14b,	// (0x0005646c) grid_skin_colour_pane

0xb153,	// (0x00056474) list_highlight_pane_cp03

0x1b9c,	// (0x0004cebd) skin_g1

0xb15b,	// (0x0005647c) skin_t1

0xb16a,	// (0x0005648b) skin_t2

0x0001,

0xf1d8,	// (0x0005a4f9) skin_t

0x1ba4,	// (0x0004cec5) cell_skin_colour_pane_ParamLimits

0x1ba4,	// (0x0004cec5) cell_skin_colour_pane

0xb178,	// (0x00056499) cell_skin_colour_pane_g1

0x1c1d,	// (0x0004cf3e) call_video_g1_ParamLimits

0x1c1d,	// (0x0004cf3e) call_video_g1

0x1c39,	// (0x0004cf5a) call_video_g2_ParamLimits

0x1c39,	// (0x0004cf5a) call_video_g2

0x0001,

0xf1dd,	// (0x0005a4fe) call_video_g_ParamLimits

0xf1dd,	// (0x0005a4fe) call_video_g

0x1c8b,	// (0x0004cfac) call_video_uplink_pane_cp1_ParamLimits

0x1c8b,	// (0x0004cfac) call_video_uplink_pane_cp1

0xb18a,	// (0x000564ab) call_video_uplink_pane_cp2

0x1d2a,	// (0x0004d04b) video_down_crop_pane_ParamLimits

0x1d2a,	// (0x0004d04b) video_down_crop_pane

0x1e13,	// (0x0004d134) video_down_pane_ParamLimits

0x1e13,	// (0x0004d134) video_down_pane

0xb192,	// (0x000564b3) video_down_subqcif_pane_ParamLimits

0xb192,	// (0x000564b3) video_down_subqcif_pane

0xb1aa,	// (0x000564cb) video_down_subqcif_pane_cp_ParamLimits

0xb1aa,	// (0x000564cb) video_down_subqcif_pane_cp

0xb1d0,	// (0x000564f1) im_reading_pane_ParamLimits

0xb1d0,	// (0x000564f1) im_reading_pane

0x1f23,	// (0x0004d244) im_writing_pane_ParamLimits

0x1f23,	// (0x0004d244) im_writing_pane

0x1f39,	// (0x0004d25a) im_reading_pane_t1

0xb1ea,	// (0x0005650b) list_im_pane

0xb1fb,	// (0x0005651c) scroll_pane_cp07

0x1f73,	// (0x0004d294) im_writing_pane_t1_ParamLimits

0x1f73,	// (0x0004d294) im_writing_pane_t1

0xb214,	// (0x00056535) im_writing_pane_t2_ParamLimits

0xb214,	// (0x00056535) im_writing_pane_t2

0x0001,

0xf1e7,	// (0x0005a508) im_writing_pane_t_ParamLimits

0xf1e7,	// (0x0005a508) im_writing_pane_t

0xabef,	// (0x00055f10) input_focus_pane_cp04

0xabef,	// (0x00055f10) input_focus_pane_cp05

0x1f88,	// (0x0004d2a9) list_im_single_pane_ParamLimits

0x1f88,	// (0x0004d2a9) list_im_single_pane

0x1f9d,	// (0x0004d2be) list_single_im_pane_t1

0xb0fb,	// (0x0005641c) blid_accuracy_pane

0xb0fb,	// (0x0005641c) blid_compass_pane

0xce79,	// (0x0005819a) main_location_t1

0xce79,	// (0x0005819a) main_location_t2

0xce79,	// (0x0005819a) main_location_t3

0x0002,

0xf541,	// (0x0005a862) main_location_t

0xabef,	// (0x00055f10) aid_levels_location

0xae62,	// (0x00056183) blid_accuracy_pane_g1

0xae62,	// (0x00056183) blid_accuracy_pane_g2

0x0001,

0xf236,	// (0x0005a557) blid_accuracy_pane_g

0xb25c,	// (0x0005657d) wml_content_pane

0xb29a,	// (0x000565bb) wml_button_pane_ParamLimits

0xb29a,	// (0x000565bb) wml_button_pane

0x1fac,	// (0x0004d2cd) wml_list_single_large_pane_ParamLimits

0x1fac,	// (0x0004d2cd) wml_list_single_large_pane

0x1fc1,	// (0x0004d2e2) wml_list_single_medium_pane_ParamLimits

0x1fc1,	// (0x0004d2e2) wml_list_single_medium_pane

0x1fd8,	// (0x0004d2f9) wml_list_single_small_pane_ParamLimits

0x1fd8,	// (0x0004d2f9) wml_list_single_small_pane

0xb2ae,	// (0x000565cf) wml_selection_box_pane_ParamLimits

0xb2ae,	// (0x000565cf) wml_selection_box_pane

0xb2c1,	// (0x000565e2) wml_list_single_pane_t1

0xb2d0,	// (0x000565f1) wml_list_single_medium_pane_t1

0xb2df,	// (0x00056600) wml_list_single_large_pane_t1

0xb2ee,	// (0x0005660f) input_focus_pane_cp02_ParamLimits

0xb2ee,	// (0x0005660f) input_focus_pane_cp02

0xb301,	// (0x00056622) wml_selection_box_pane_g1

0xb30a,	// (0x0005662b) wml_selection_box_pane_t1_ParamLimits

0xb30a,	// (0x0005662b) wml_selection_box_pane_t1

0xae4a,	// (0x0005616b) bg_wml_button_pane_ParamLimits

0xae4a,	// (0x0005616b) bg_wml_button_pane

0xb322,	// (0x00056643) wml_button_pane_g1

0xb32a,	// (0x0005664b) wml_button_pane_t1

0xb322,	// (0x00056643) wml_button_bg_pane_g1

0xb33a,	// (0x0005665b) wml_button_bg_pane_g2

0xb342,	// (0x00056663) wml_button_bg_pane_g3

0xb34a,	// (0x0005666b) wml_button_bg_pane_g4

0xb352,	// (0x00056673) wml_button_bg_pane_g5

0xb35a,	// (0x0005667b) wml_button_bg_pane_g6

0xb362,	// (0x00056683) wml_button_bg_pane_g7

0xb36a,	// (0x0005668b) wml_button_bg_pane_g8

0xb372,	// (0x00056693) wml_button_bg_pane_g9

0x0008,

0xf1ec,	// (0x0005a50d) wml_button_bg_pane_g

0x1ff1,	// (0x0004d312) bg_list_pane_cp02

0xb37a,	// (0x0005669b) mce_header_pane_ParamLimits

0xb37a,	// (0x0005669b) mce_header_pane

0xb390,	// (0x000566b1) mce_icon_pane

0xb390,	// (0x000566b1) mce_image_pane

0xb399,	// (0x000566ba) mce_text_pane_ParamLimits

0xb399,	// (0x000566ba) mce_text_pane

0x1ff9,	// (0x0004d31a) scroll_pane_cp03

0xb292,	// (0x000565b3) scroll_pane_cp04

0xb3ac,	// (0x000566cd) scroll_pane_cp05_ParamLimits

0xb3ac,	// (0x000566cd) scroll_pane_cp05

0x2003,	// (0x0004d324) mce_header_field_pane_ParamLimits

0x2003,	// (0x0004d324) mce_header_field_pane

0x201a,	// (0x0004d33b) mce_header_field_pane_2_ParamLimits

0x201a,	// (0x0004d33b) mce_header_field_pane_2

0x2030,	// (0x0004d351) mce_header_field_pane_3

0x2038,	// (0x0004d359) list_single_mce_message_pane_ParamLimits

0x2038,	// (0x0004d359) list_single_mce_message_pane

0x204e,	// (0x0004d36f) list_single_mce_smart_pane_ParamLimits

0x204e,	// (0x0004d36f) list_single_mce_smart_pane

0xb3b8,	// (0x000566d9) input_focus_pane_cp03

0xb3c1,	// (0x000566e2) list_header_data_pane

0x206f,	// (0x0004d390) mce_header_field_pane_t1

0x207f,	// (0x0004d3a0) list_single_mce_header_pane_ParamLimits

0x207f,	// (0x0004d3a0) list_single_mce_header_pane

0xb3c9,	// (0x000566ea) list_single_mce_header_pane_t1

0xb3d8,	// (0x000566f9) list_single_mce_message_pane_g1

0xb3e0,	// (0x00056701) list_single_mce_message_pane_t1

0x20b9,	// (0x0004d3da) bg_cale_heading_pane_cp01_ParamLimits

0x20b9,	// (0x0004d3da) bg_cale_heading_pane_cp01

0xb3ee,	// (0x0005670f) bg_cale_pane_cp02_ParamLimits

0xb3ee,	// (0x0005670f) bg_cale_pane_cp02

0x20f3,	// (0x0004d414) cale_month_corner_pane

0x2112,	// (0x0004d433) cale_month_day_heading_pane_ParamLimits

0x2112,	// (0x0004d433) cale_month_day_heading_pane

0x2164,	// (0x0004d485) cale_month_pane_g1_ParamLimits

0x2164,	// (0x0004d485) cale_month_pane_g1

0x2193,	// (0x0004d4b4) cale_month_pane_g2_ParamLimits

0x2193,	// (0x0004d4b4) cale_month_pane_g2

0x21c3,	// (0x0004d4e4) cale_month_pane_g3_ParamLimits

0x21c3,	// (0x0004d4e4) cale_month_pane_g3

0x21ff,	// (0x0004d520) cale_month_pane_g4_ParamLimits

0x21ff,	// (0x0004d520) cale_month_pane_g4

0x223b,	// (0x0004d55c) cale_month_pane_g5_ParamLimits

0x223b,	// (0x0004d55c) cale_month_pane_g5

0x2283,	// (0x0004d5a4) cale_month_pane_g6_ParamLimits

0x2283,	// (0x0004d5a4) cale_month_pane_g6

0x22cf,	// (0x0004d5f0) cale_month_pane_g7_ParamLimits

0x22cf,	// (0x0004d5f0) cale_month_pane_g7

0x231f,	// (0x0004d640) cale_month_pane_g8_ParamLimits

0x231f,	// (0x0004d640) cale_month_pane_g8

0x2373,	// (0x0004d694) cale_month_pane_g9_ParamLimits

0x2373,	// (0x0004d694) cale_month_pane_g9

0x23c5,	// (0x0004d6e6) cale_month_pane_g10_ParamLimits

0x23c5,	// (0x0004d6e6) cale_month_pane_g10

0x2417,	// (0x0004d738) cale_month_pane_g11_ParamLimits

0x2417,	// (0x0004d738) cale_month_pane_g11

0x2469,	// (0x0004d78a) cale_month_pane_g12_ParamLimits

0x2469,	// (0x0004d78a) cale_month_pane_g12

0x24bb,	// (0x0004d7dc) cale_month_pane_g13_ParamLimits

0x24bb,	// (0x0004d7dc) cale_month_pane_g13

0x000c,

0xf1ff,	// (0x0005a520) cale_month_pane_g_ParamLimits

0xf1ff,	// (0x0005a520) cale_month_pane_g

0x250d,	// (0x0004d82e) cale_month_week_pane

0x2531,	// (0x0004d852) grid_cale_month_pane_ParamLimits

0x2531,	// (0x0004d852) grid_cale_month_pane

0x257a,	// (0x0004d89b) cale_month_day_heading_pane_t1

0x25bc,	// (0x0004d8dd) cale_month_day_heading_pane_t2

0x25f1,	// (0x0004d912) cale_month_day_heading_pane_t3

0x2626,	// (0x0004d947) cale_month_day_heading_pane_t4

0x2663,	// (0x0004d984) cale_month_day_heading_pane_t5

0x26a8,	// (0x0004d9c9) cale_month_day_heading_pane_t6

0x26ed,	// (0x0004da0e) cale_month_day_heading_pane_t7

0x0006,

0xf21a,	// (0x0005a53b) cale_month_day_heading_pane_t

0xb0a9,	// (0x000563ca) bg_cale_side_pane_cp01

0x273a,	// (0x0004da5b) cale_month_week_pane_t1

0x2753,	// (0x0004da74) cale_month_week_pane_t2

0x276c,	// (0x0004da8d) cale_month_week_pane_t3

0x2785,	// (0x0004daa6) cale_month_week_pane_t4

0x279e,	// (0x0004dabf) cale_month_week_pane_t5

0x27b7,	// (0x0004dad8) cale_month_week_pane_t6

0x0005,

0xf229,	// (0x0005a54a) cale_month_week_pane_t

0x27d0,	// (0x0004daf1) cell_cale_month_pane_ParamLimits

0x27d0,	// (0x0004daf1) cell_cale_month_pane

0x9c5a,	// (0x00054f7b) cell_cale_month_pane_g1

0x28fe,	// (0x0004dc1f) cell_cale_month_pane_t1_ParamLimits

0x28fe,	// (0x0004dc1f) cell_cale_month_pane_t1

0xb0b7,	// (0x000563d8) grid_highlight_pane_cp08

0xae62,	// (0x00056183) main_smil_g1

0x292a,	// (0x0004dc4b) smil_status_pane

0xb42d,	// (0x0005674e) smil_text_pane

0xcd51,	// (0x00058072) bg_popup_call3_rect_pane_g8

0xcd59,	// (0x0005807a) bg_popup_call3_rect_pane_g9

0x0008,

0xf4c2,	// (0x0005a7e3) bg_popup_call3_rect_pane_g

0xcf42,	// (0x00058263) smil_status_volume_pane_g1

0xb437,	// (0x00056758) smil_status_pane_t1

0x9e36,	// (0x00055157) volume_smil_pane

0xb44e,	// (0x0005676f) list_smil_text_pane

0x293f,	// (0x0004dc60) scroll_pane_cp011

0x294a,	// (0x0004dc6b) smil_text_list_pane_t1_ParamLimits

0x294a,	// (0x0004dc6b) smil_text_list_pane_t1

0x9c66,	// (0x00054f87) aid_volume_smil_ParamLimits

0x9c66,	// (0x00054f87) aid_volume_smil

0xae62,	// (0x00056183) smil_volume_pane_g1

0xae62,	// (0x00056183) smil_volume_pane_g2

0x0001,

0xf236,	// (0x0005a557) smil_volume_pane_g

0x1423,	// (0x0004c744) listscroll_cale_day_pane

0xb458,	// (0x00056779) bg_cale_pane

0xb470,	// (0x00056791) list_cale_pane

0xb493,	// (0x000567b4) scroll_pane_cp09

0xb4a4,	// (0x000567c5) cale_bg_pane_g1

0xb4ac,	// (0x000567cd) cale_bg_pane_g2

0xb4b4,	// (0x000567d5) cale_bg_pane_g3

0xb4bc,	// (0x000567dd) cale_bg_pane_g4

0xb4c4,	// (0x000567e5) cale_bg_pane_g5

0xb4cc,	// (0x000567ed) cale_bg_pane_g6

0xb4d4,	// (0x000567f5) cale_bg_pane_g7

0xb4dc,	// (0x000567fd) cale_bg_pane_g8

0xb4e4,	// (0x00056805) cale_bg_pane_g9

0x0008,

0xf23b,	// (0x0005a55c) cale_bg_pane_g

0x2996,	// (0x0004dcb7) list_cale_time_pane_ParamLimits

0x2996,	// (0x0004dcb7) list_cale_time_pane

0xb4ec,	// (0x0005680d) list_cale_time_pane_g1_ParamLimits

0xb4ec,	// (0x0005680d) list_cale_time_pane_g1

0xb4f8,	// (0x00056819) list_cale_time_pane_g2_ParamLimits

0xb4f8,	// (0x00056819) list_cale_time_pane_g2

0x29ac,	// (0x0004dccd) list_cale_time_pane_g3_ParamLimits

0x29ac,	// (0x0004dccd) list_cale_time_pane_g3

0x29ba,	// (0x0004dcdb) list_cale_time_pane_g4_ParamLimits

0x29ba,	// (0x0004dcdb) list_cale_time_pane_g4

0x29c8,	// (0x0004dce9) list_cale_time_pane_g5_ParamLimits

0x29c8,	// (0x0004dce9) list_cale_time_pane_g5

0x0005,

0xf24e,	// (0x0005a56f) list_cale_time_pane_g_ParamLimits

0xf24e,	// (0x0005a56f) list_cale_time_pane_g

0xb512,	// (0x00056833) list_cale_time_pane_t1_ParamLimits

0xb512,	// (0x00056833) list_cale_time_pane_t1

0xb53a,	// (0x0005685b) list_cale_time_pane_t2_ParamLimits

0xb53a,	// (0x0005685b) list_cale_time_pane_t2

0x2c55,	// (0x0004df76) aid_blid_cardinal_pane

0x2c93,	// (0x0004dfb4) compass_pane_t4

0xb562,	// (0x00056883) list_cale_time_pane_t4_ParamLimits

0xb562,	// (0x00056883) list_cale_time_pane_t4

0x2ca1,	// (0x0004dfc2) compass_pane_t5

0x2caf,	// (0x0004dfd0) compass_pane_t6

0x2cbd,	// (0x0004dfde) compass_pane_t7

0xb9fe,	// (0x00056d1f) navi_pane_cc_t1

0xbbdb,	// (0x00056efc) aid_phob_thumbnail_center_pane

0x3033,	// (0x0004e354) main_postcard_pane_g4_ParamLimits

0x0002,

0xf25b,	// (0x0005a57c) list_cale_time_pane_t_ParamLimits

0xf25b,	// (0x0005a57c) list_cale_time_pane_t

0xa846,	// (0x00055b67) bg_popup_window_pane_cp02_ParamLimits

0xa846,	// (0x00055b67) bg_popup_window_pane_cp02

0xb58a,	// (0x000568ab) heading_pane_cp01_ParamLimits

0xb58a,	// (0x000568ab) heading_pane_cp01

0xb596,	// (0x000568b7) loc_req_pane_ParamLimits

0xb596,	// (0x000568b7) loc_req_pane

0xb5a6,	// (0x000568c7) loc_type_pane_ParamLimits

0xb5a6,	// (0x000568c7) loc_type_pane

0xb5b8,	// (0x000568d9) loc_type_pane_t1_ParamLimits

0xb5b8,	// (0x000568d9) loc_type_pane_t1

0xb5ca,	// (0x000568eb) loc_type_pane_t2_ParamLimits

0xb5ca,	// (0x000568eb) loc_type_pane_t2

0xb5dc,	// (0x000568fd) loc_type_pane_t3_ParamLimits

0xb5dc,	// (0x000568fd) loc_type_pane_t3

0x0002,

0xf262,	// (0x0005a583) loc_type_pane_t_ParamLimits

0xf262,	// (0x0005a583) loc_type_pane_t

0xb5ee,	// (0x0005690f) list_loc_req_pane

0xb5f8,	// (0x00056919) scroll_pane_cp012

0x29d6,	// (0x0004dcf7) list_single_loc_request_popup_menu_pane_ParamLimits

0x29d6,	// (0x0004dcf7) list_single_loc_request_popup_menu_pane

0xb603,	// (0x00056924) list_single_loc_request_popup_menu_pane_g1_ParamLimits

0xb603,	// (0x00056924) list_single_loc_request_popup_menu_pane_g1

0xb60f,	// (0x00056930) list_single_loc_request_popup_menu_pane_g2_ParamLimits

0xb60f,	// (0x00056930) list_single_loc_request_popup_menu_pane_g2

0x0001,

0xf269,	// (0x0005a58a) list_single_loc_request_popup_menu_pane_g_ParamLimits

0xf269,	// (0x0005a58a) list_single_loc_request_popup_menu_pane_g

0xb61b,	// (0x0005693c) list_single_loc_request_popup_menu_pane_t1_ParamLimits

0xb61b,	// (0x0005693c) list_single_loc_request_popup_menu_pane_t1

0xae4a,	// (0x0005616b) bg_popup_window_pane_cp03_ParamLimits

0xae4a,	// (0x0005616b) bg_popup_window_pane_cp03

0xb631,	// (0x00056952) heading_loc_req_pane_ParamLimits

0xb631,	// (0x00056952) heading_loc_req_pane

0x29e3,	// (0x0004dd04) popup_dyc_status_message_window_g1_ParamLimits

0x29e3,	// (0x0004dd04) popup_dyc_status_message_window_g1

0x29f7,	// (0x0004dd18) popup_dyc_status_message_window_t1_ParamLimits

0x29f7,	// (0x0004dd18) popup_dyc_status_message_window_t1

0x2a0c,	// (0x0004dd2d) popup_dyc_status_message_window_t2_ParamLimits

0x2a0c,	// (0x0004dd2d) popup_dyc_status_message_window_t2

0x2a21,	// (0x0004dd42) popup_dyc_status_message_window_t3_ParamLimits

0x2a21,	// (0x0004dd42) popup_dyc_status_message_window_t3

0x0002,

0xf26e,	// (0x0005a58f) popup_dyc_status_message_window_t_ParamLimits

0xf26e,	// (0x0005a58f) popup_dyc_status_message_window_t

0xabef,	// (0x00055f10) bg_heading_pane_cp01

0xb63d,	// (0x0005695e) heading_loc_req_pane_g1

0xb645,	// (0x00056966) heading_loc_req_pane_g2

0xb64d,	// (0x0005696e) heading_loc_req_pane_g3

0x0002,

0xf275,	// (0x0005a596) heading_loc_req_pane_g

0xb655,	// (0x00056976) heading_loc_req_pane_t1

0xb674,	// (0x00056995) bg_popup_sub_pane_cp01_ParamLimits

0xb674,	// (0x00056995) bg_popup_sub_pane_cp01

0xb682,	// (0x000569a3) popup_cale_events_window_g1_ParamLimits

0xb682,	// (0x000569a3) popup_cale_events_window_g1

0xb6a2,	// (0x000569c3) popup_cale_events_window_g2_ParamLimits

0xb6a2,	// (0x000569c3) popup_cale_events_window_g2

0x0001,

0xf297,	// (0x0005a5b8) popup_cale_events_window_g_ParamLimits

0xf297,	// (0x0005a5b8) popup_cale_events_window_g

0xb6c2,	// (0x000569e3) popup_cale_events_window_t1_ParamLimits

0xb6c2,	// (0x000569e3) popup_cale_events_window_t1

0xb6d4,	// (0x000569f5) popup_cale_events_window_t2_ParamLimits

0xb6d4,	// (0x000569f5) popup_cale_events_window_t2

0xb712,	// (0x00056a33) popup_cale_events_window_t3_ParamLimits

0xb712,	// (0x00056a33) popup_cale_events_window_t3

0xb74c,	// (0x00056a6d) popup_cale_events_window_t4_ParamLimits

0xb74c,	// (0x00056a6d) popup_cale_events_window_t4

0x0003,

0xf29c,	// (0x0005a5bd) popup_cale_events_window_t_ParamLimits

0xf29c,	// (0x0005a5bd) popup_cale_events_window_t

0x2a49,	// (0x0004dd6a) call_type_pane

0x2a59,	// (0x0004dd7a) popup_call_status_window_g1

0x2a6d,	// (0x0004dd8e) popup_call_status_window_g2

0x2a81,	// (0x0004dda2) popup_call_status_window_g3

0x0002,

0xf2a5,	// (0x0005a5c6) popup_call_status_window_g

0xb782,	// (0x00056aa3) call_type_pane_g1

0xb78b,	// (0x00056aac) call_type_pane_g2

0x0001,

0xf2ac,	// (0x0005a5cd) call_type_pane_g

0xabef,	// (0x00055f10) bg_popup_sub_pane_cp02

0xb794,	// (0x00056ab5) listscroll_popup_wml_pane

0xb79c,	// (0x00056abd) list_wml_pane

0xb7a6,	// (0x00056ac7) scroll_pane_cp013

0xb7b1,	// (0x00056ad2) list_single_graphic_popup_wml_pane_ParamLimits

0xb7b1,	// (0x00056ad2) list_single_graphic_popup_wml_pane

0xae62,	// (0x00056183) list_single_graphic_popup_wml_pane_g1

0xb7c5,	// (0x00056ae6) list_single_graphic_popup_wml_pane_g2

0x0001,

0xf2b1,	// (0x0005a5d2) list_single_graphic_popup_wml_pane_g

0xb7cd,	// (0x00056aee) list_single_graphic_popup_wml_pane_t1

0xb7e3,	// (0x00056b04) aid_call_pane

0xae42,	// (0x00056163) popup_clock_analogue_window_g1

0xae42,	// (0x00056163) popup_clock_analogue_window_g2

0x9c88,	// (0x00054fa9) popup_clock_analogue_window_g3

0x9c88,	// (0x00054fa9) popup_clock_analogue_window_g4

0xae62,	// (0x00056183) popup_clock_analogue_window_g5

0x0004,

0xf2b6,	// (0x0005a5d7) popup_clock_analogue_window_g

0x9c90,	// (0x00054fb1) popup_clock_analogue_window_t1

0x9c9e,	// (0x00054fbf) clock_digital_number_pane_ParamLimits

0x9c9e,	// (0x00054fbf) clock_digital_number_pane

0x9caa,	// (0x00054fcb) clock_digital_number_pane_cp02_ParamLimits

0x9caa,	// (0x00054fcb) clock_digital_number_pane_cp02

0x9cb6,	// (0x00054fd7) clock_digital_number_pane_cp03_ParamLimits

0x9cb6,	// (0x00054fd7) clock_digital_number_pane_cp03

0x9cc2,	// (0x00054fe3) clock_digital_number_pane_cp04_ParamLimits

0x9cc2,	// (0x00054fe3) clock_digital_number_pane_cp04

0x9cce,	// (0x00054fef) clock_digital_separator_pane_ParamLimits

0x9cce,	// (0x00054fef) clock_digital_separator_pane

0x9cda,	// (0x00054ffb) popup_clock_digital_window_t1

0xae62,	// (0x00056183) clock_digital_number_pane_g1

0xae62,	// (0x00056183) clock_digital_number_pane_g2

0x0001,

0xf236,	// (0x0005a557) clock_digital_number_pane_g

0xae62,	// (0x00056183) clock_digital_separator_pane_g1

0xae62,	// (0x00056183) clock_digital_separator_pane_g2

0x0001,

0xf236,	// (0x0005a557) clock_digital_separator_pane_g

0xabef,	// (0x00055f10) bg_popup_window_pane_cp04

0xb7eb,	// (0x00056b0c) heading_pane_cp03

0xb0fb,	// (0x0005641c) listscroll_popup_gms_pane

0xabef,	// (0x00055f10) grid_large_graphic_popup_pane

0xb7f4,	// (0x00056b15) listscroll_popup_gms_pane_g1

0xb7fd,	// (0x00056b1e) listscroll_popup_gms_pane_g2

0x0001,

0xf2c1,	// (0x0005a5e2) listscroll_popup_gms_pane_g

0xb806,	// (0x00056b27) scroll_pane_cp014

0xaeb7,	// (0x000561d8) cell_large_graphic_popup_pane_ParamLimits

0xaeb7,	// (0x000561d8) cell_large_graphic_popup_pane

0xaec5,	// (0x000561e6) cell_large_graphic_popup_pane_g1_ParamLimits

0xaec5,	// (0x000561e6) cell_large_graphic_popup_pane_g1

0xb80f,	// (0x00056b30) cell_large_graphic_popup_pane_g2_ParamLimits

0xb80f,	// (0x00056b30) cell_large_graphic_popup_pane_g2

0xb81d,	// (0x00056b3e) cell_large_graphic_popup_pane_g3_ParamLimits

0xb81d,	// (0x00056b3e) cell_large_graphic_popup_pane_g3

0xb82b,	// (0x00056b4c) cell_large_graphic_popup_pane_g4_ParamLimits

0xb82b,	// (0x00056b4c) cell_large_graphic_popup_pane_g4

0x0003,

0xf2c6,	// (0x0005a5e7) cell_large_graphic_popup_pane_g_ParamLimits

0xf2c6,	// (0x0005a5e7) cell_large_graphic_popup_pane_g

0xabef,	// (0x00055f10) grid_highlight_pane_cp010

0xae62,	// (0x00056183) bg_popup_call_pane_g1

0xb83c,	// (0x00056b5d) list_single_graphic_popup_conf_pane_ParamLimits

0xb83c,	// (0x00056b5d) list_single_graphic_popup_conf_pane

0xb84f,	// (0x00056b70) list_highlight_pane_cp01

0xb858,	// (0x00056b79) list_single_graphic_popup_conf_pane_g1

0xb860,	// (0x00056b81) list_single_graphic_popup_conf_pane_g2

0x0001,

0xf2cf,	// (0x0005a5f0) list_single_graphic_popup_conf_pane_g

0xb868,	// (0x00056b89) list_single_graphic_popup_conf_pane_t1

0xb876,	// (0x00056b97) linegrid_cams_pane_g1

0x2a90,	// (0x0004ddb1) linegrid_cams_pane_g2

0xb028,	// (0x00056349) linegrid_cams_pane_g3

0xb87f,	// (0x00056ba0) linegrid_cams_pane_g4

0x2a99,	// (0x0004ddba) linegrid_cams_pane_g5

0x2aa2,	// (0x0004ddc3) linegrid_cams_pane_g6

0xb0ea,	// (0x0005640b) linegrid_cams_pane_g7

0x0006,

0xf2d4,	// (0x0005a5f5) linegrid_cams_pane_g

0xb888,	// (0x00056ba9) popup_clock_analogue_window

0xb888,	// (0x00056ba9) popup_clock_digital_window

0xabef,	// (0x00055f10) popup_phob_thumbnail_window

0xae62,	// (0x00056183) call_video_uplink_pane_g1

0xb891,	// (0x00056bb2) call_video_uplink_pane_g2

0x0001,

0xf2e3,	// (0x0005a604) call_video_uplink_pane_g

0xb899,	// (0x00056bba) video_uplink_pane

0xb8a1,	// (0x00056bc2) mce_image_pane_g1

0x2aad,	// (0x0004ddce) mce_image_pane_g2

0x2ab5,	// (0x0004ddd6) mce_image_pane_g3

0x2abd,	// (0x0004ddde) mce_image_pane_g4

0x2ac7,	// (0x0004dde8) mce_image_pane_g5

0x0004,

0xf2e8,	// (0x0005a609) mce_image_pane_g

0xb8ab,	// (0x00056bcc) control_top_pane_stacon_cp01_ParamLimits

0xb8ab,	// (0x00056bcc) control_top_pane_stacon_cp01

0xb8bf,	// (0x00056be0) uni_indicator_pane_stacon_cp01_ParamLimits

0xb8bf,	// (0x00056be0) uni_indicator_pane_stacon_cp01

0xb8d0,	// (0x00056bf1) bg_popup_sub_pane_cp03

0x2acf,	// (0x0004ddf0) chi_dic_find_pane

0x2ad7,	// (0x0004ddf8) listscroll_chi_dic_pane

0x2ae0,	// (0x0004de01) main_pane_chidic_g1

0x2af3,	// (0x0004de14) chi_dic_find_pane_t1

0xb8da,	// (0x00056bfb) find_chidic_pane

0xb8e3,	// (0x00056c04) chi_dic_list_pane_ParamLimits

0xb8e3,	// (0x00056c04) chi_dic_list_pane

0xb8f4,	// (0x00056c15) scroll_pane_cp020

0x2b01,	// (0x0004de22) find_chidic_pane_t1

0xabef,	// (0x00055f10) input_focus_pane_cp06

0x2b10,	// (0x0004de31) list_chi_dic_pane_ParamLimits

0x2b10,	// (0x0004de31) list_chi_dic_pane

0x2b22,	// (0x0004de43) list_chi_dic_pane_t1_ParamLimits

0x2b22,	// (0x0004de43) list_chi_dic_pane_t1

0xabef,	// (0x00055f10) list_highlight_pane_cp020

0xb8fc,	// (0x00056c1d) bg_cale_heading_pane_g1

0x2b35,	// (0x0004de56) bg_cale_heading_pane_g2

0x2b3d,	// (0x0004de5e) bg_cale_heading_pane_g3

0x2b45,	// (0x0004de66) bg_cale_heading_pane_g4

0x2b4f,	// (0x0004de70) bg_cale_heading_pane_g5

0x2b59,	// (0x0004de7a) bg_cale_heading_pane_g6

0x2b61,	// (0x0004de82) bg_cale_heading_pane_g7

0x2b69,	// (0x0004de8a) bg_cale_heading_pane_g8

0x2b73,	// (0x0004de94) bg_cale_heading_pane_g9

0x0008,

0xf2f3,	// (0x0005a614) bg_cale_heading_pane_g

0xb8fc,	// (0x00056c1d) bg_cale_side_pane_g1

0x2b7d,	// (0x0004de9e) bg_cale_side_pane_g2

0x2b85,	// (0x0004dea6) bg_cale_side_pane_g3

0x2b8d,	// (0x0004deae) bg_cale_side_pane_g4

0x2b95,	// (0x0004deb6) bg_cale_side_pane_g5

0x2b9d,	// (0x0004debe) bg_cale_side_pane_g6

0x2ba5,	// (0x0004dec6) bg_cale_side_pane_g7

0x2bad,	// (0x0004dece) bg_cale_side_pane_g8

0x2bb5,	// (0x0004ded6) bg_cale_side_pane_g9

0x0008,

0xf306,	// (0x0005a627) bg_cale_side_pane_g

0x2bbd,	// (0x0004dede) popup_call_status_window_ParamLimits

0x2bbd,	// (0x0004dede) popup_call_status_window

0xb918,	// (0x00056c39) stacon_top_pane

0xb920,	// (0x00056c41) status_pane_ParamLimits

0xb920,	// (0x00056c41) status_pane

0xb935,	// (0x00056c56) status_small_pane

0xb93d,	// (0x00056c5e) control_pane

0xabef,	// (0x00055f10) stacon_bottom_pane

0xb945,	// (0x00056c66) list_single_mce_smart_pane_t1_ParamLimits

0xb945,	// (0x00056c66) list_single_mce_smart_pane_t1

0xb958,	// (0x00056c79) list_single_mce_smart_pane_t2_ParamLimits

0xb958,	// (0x00056c79) list_single_mce_smart_pane_t2

0x0001,

0xf319,	// (0x0005a63a) list_single_mce_smart_pane_t_ParamLimits

0xf319,	// (0x0005a63a) list_single_mce_smart_pane_t

0x2c04,	// (0x0004df25) compass_pane

0x2c0d,	// (0x0004df2e) main_location2_pane_t1

0x2c1f,	// (0x0004df40) main_location2_pane_t2

0x2c31,	// (0x0004df52) main_location2_pane_t3

0x0003,

0xf31e,	// (0x0005a63f) main_location2_pane_t

0xb977,	// (0x00056c98) compass_pane_g1_ParamLimits

0xb977,	// (0x00056c98) compass_pane_g1

0x2c75,	// (0x0004df96) compass_pane_t1

0x2c84,	// (0x0004dfa5) compass_pane_t2

0x0005,

0xf327,	// (0x0005a648) compass_pane_t

0x2ccb,	// (0x0004dfec) text_secondary_cp61

0xb9f5,	// (0x00056d16) navi_pane_cams_g5

0xba71,	// (0x00056d92) navi_pane_im_t1

0xba7f,	// (0x00056da0) navi_pane_mp_g1_ParamLimits

0xba7f,	// (0x00056da0) navi_pane_mp_g1

0xba93,	// (0x00056db4) navi_pane_mp_g2_ParamLimits

0xba93,	// (0x00056db4) navi_pane_mp_g2

0xba9f,	// (0x00056dc0) navi_pane_mp_g3_ParamLimits

0xba9f,	// (0x00056dc0) navi_pane_mp_g3

0x0002,

0xf33b,	// (0x0005a65c) navi_pane_mp_g_ParamLimits

0xf33b,	// (0x0005a65c) navi_pane_mp_g

0xbaab,	// (0x00056dcc) navi_pane_mp_t1

0xbab9,	// (0x00056dda) navi_pane_mp_t2

0x0002,

0xf342,	// (0x0005a663) navi_pane_mp_t

0xbb24,	// (0x00056e45) navi_pane_vt_g1

0xbaab,	// (0x00056dcc) navi_pane_vt_t1

0xbb2c,	// (0x00056e4d) navi_slider_pane

0xb0fb,	// (0x0005641c) zooming_pane

0xbb3c,	// (0x00056e5d) navi_slider_pane_g1

0x9cf7,	// (0x00055018) navi_slider_pane_g2

0x0006,

0xf349,	// (0x0005a66a) navi_slider_pane_g

0xbb60,	// (0x00056e81) aid_levels_zoom

0xbb68,	// (0x00056e89) zooming_pane_g1

0xbb70,	// (0x00056e91) zooming_pane_g2

0xbb70,	// (0x00056e91) zooming_pane_g3

0x0002,

0xf358,	// (0x0005a679) zooming_pane_g

0xbb78,	// (0x00056e99) level_10_zoom

0xbb81,	// (0x00056ea2) level_11_zoom

0xbb8a,	// (0x00056eab) level_1_zoom

0xbb93,	// (0x00056eb4) level_2_zoom

0xbb9c,	// (0x00056ebd) level_3_zoom

0xbba5,	// (0x00056ec6) level_4_zoom

0xbbae,	// (0x00056ecf) level_5_zoom

0xbbb7,	// (0x00056ed8) level_6_zoom

0xbbc0,	// (0x00056ee1) level_7_zoom

0xbbc9,	// (0x00056eea) level_8_zoom

0xbbd2,	// (0x00056ef3) level_9_zoom

0xbbe3,	// (0x00056f04) popup_phob_thumbnail_window_g1

0xbbeb,	// (0x00056f0c) popup_phob_thumbnail_window_g2

0x0001,

0xf35f,	// (0x0005a680) popup_phob_thumbnail_window_g

0x36db,	// (0x0004e9fc) level_1_location

0x36e3,	// (0x0004ea04) level_2_location

0x36eb,	// (0x0004ea0c) level_3_location

0x36f3,	// (0x0004ea14) level_4_location

0xb0fb,	// (0x0005641c) level_5_location

0x2d1c,	// (0x0004e03d) mce_icon_pane_g1

0x2d26,	// (0x0004e047) mce_icon_pane_g2

0x0001,

0xf364,	// (0x0005a685) mce_icon_pane_g

0xbbf3,	// (0x00056f14) main_mup_pane_g1_ParamLimits

0xbbf3,	// (0x00056f14) main_mup_pane_g1

0xbbf3,	// (0x00056f14) main_mup_pane_g2_ParamLimits

0xbbf3,	// (0x00056f14) main_mup_pane_g2

0xbbf3,	// (0x00056f14) main_mup_pane_g3_ParamLimits

0xbbf3,	// (0x00056f14) main_mup_pane_g3

0xbbf3,	// (0x00056f14) main_mup_pane_g4_ParamLimits

0xbbf3,	// (0x00056f14) main_mup_pane_g4

0xbbf3,	// (0x00056f14) main_mup_pane_g5_ParamLimits

0xbbf3,	// (0x00056f14) main_mup_pane_g5

0xbbf3,	// (0x00056f14) main_mup_pane_g6_ParamLimits

0xbbf3,	// (0x00056f14) main_mup_pane_g6

0xbbf3,	// (0x00056f14) main_mup_pane_g7_ParamLimits

0xbbf3,	// (0x00056f14) main_mup_pane_g7

0xbbf3,	// (0x00056f14) main_mup_pane_g8_ParamLimits

0xbbf3,	// (0x00056f14) main_mup_pane_g8

0xbbf3,	// (0x00056f14) main_mup_pane_g9_ParamLimits

0xbbf3,	// (0x00056f14) main_mup_pane_g9

0xbbf3,	// (0x00056f14) main_mup_pane_g10_ParamLimits

0xbbf3,	// (0x00056f14) main_mup_pane_g10

0xbbf3,	// (0x00056f14) main_mup_pane_g11_ParamLimits

0xbbf3,	// (0x00056f14) main_mup_pane_g11

0xaec5,	// (0x000561e6) main_mup_pane_g12_ParamLimits

0xaec5,	// (0x000561e6) main_mup_pane_g12

0xbbf3,	// (0x00056f14) main_mup_pane_g13_ParamLimits

0xbbf3,	// (0x00056f14) main_mup_pane_g13

0x000c,

0xf369,	// (0x0005a68a) main_mup_pane_g_ParamLimits

0xf369,	// (0x0005a68a) main_mup_pane_g

0xbc01,	// (0x00056f22) main_mup_pane_t1_ParamLimits

0xbc01,	// (0x00056f22) main_mup_pane_t1

0xbc01,	// (0x00056f22) main_mup_pane_t2_ParamLimits

0xbc01,	// (0x00056f22) main_mup_pane_t2

0xbc01,	// (0x00056f22) main_mup_pane_t3_ParamLimits

0xbc01,	// (0x00056f22) main_mup_pane_t3

0xb103,	// (0x00056424) main_mup_pane_t4_ParamLimits

0xb103,	// (0x00056424) main_mup_pane_t4

0xb103,	// (0x00056424) main_mup_pane_t5_ParamLimits

0xb103,	// (0x00056424) main_mup_pane_t5

0xb904,	// (0x00056c25) main_mup_pane_t6_ParamLimits

0xb904,	// (0x00056c25) main_mup_pane_t6

0x0005,

0xf384,	// (0x0005a6a5) main_mup_pane_t_ParamLimits

0xf384,	// (0x0005a6a5) main_mup_pane_t

0xaeb7,	// (0x000561d8) mup_progress_pane_ParamLimits

0xaeb7,	// (0x000561d8) mup_progress_pane

0xbc15,	// (0x00056f36) mup_visualizer_pane_ParamLimits

0xbc15,	// (0x00056f36) mup_visualizer_pane

0xbc15,	// (0x00056f36) mup_volume_pane_ParamLimits

0xbc15,	// (0x00056f36) mup_volume_pane

0xaed3,	// (0x000561f4) mup_visualizer_pane_g1_ParamLimits

0xaed3,	// (0x000561f4) mup_visualizer_pane_g1

0xbc23,	// (0x00056f44) mup_visualizer_pane_g2_ParamLimits

0xbc23,	// (0x00056f44) mup_visualizer_pane_g2

0xaec5,	// (0x000561e6) mup_visualizer_pane_g3_ParamLimits

0xaec5,	// (0x000561e6) mup_visualizer_pane_g3

0x0002,

0xf391,	// (0x0005a6b2) mup_visualizer_pane_g_ParamLimits

0xf391,	// (0x0005a6b2) mup_visualizer_pane_g

0xb131,	// (0x00056452) mup_volume_pane_g1

0xb131,	// (0x00056452) mup_volume_pane_g2

0x0001,

0xf398,	// (0x0005a6b9) mup_volume_pane_g

0xb131,	// (0x00056452) mup_progress_pane_g1

0xb131,	// (0x00056452) mup_progress_pane_g2

0xb131,	// (0x00056452) mup_progress_pane_g3

0x0002,

0xf39d,	// (0x0005a6be) mup_progress_pane_g

0xabef,	// (0x00055f10) bg_popup_window_pane_cp05

0xbc31,	// (0x00056f52) heading_pane_cp02_ParamLimits

0xbc31,	// (0x00056f52) heading_pane_cp02

0xbc4b,	// (0x00056f6c) list_popup_blid_pane

0xbc53,	// (0x00056f74) list_blid_sat_info_pane_ParamLimits

0xbc53,	// (0x00056f74) list_blid_sat_info_pane

0xbc66,	// (0x00056f87) list_blid_sat_info_pane_g1

0xbc6e,	// (0x00056f8f) list_blid_sat_info_pane_t1

0x2e26,	// (0x0004e147) mup_equalizer_pane_ParamLimits

0x2e26,	// (0x0004e147) mup_equalizer_pane

0x2e3f,	// (0x0004e160) mup_equalizer_pane_cp1_ParamLimits

0x2e3f,	// (0x0004e160) mup_equalizer_pane_cp1

0x2e5c,	// (0x0004e17d) mup_equalizer_pane_cp2_ParamLimits

0x2e5c,	// (0x0004e17d) mup_equalizer_pane_cp2

0x2e79,	// (0x0004e19a) mup_equalizer_pane_cp3_ParamLimits

0x2e79,	// (0x0004e19a) mup_equalizer_pane_cp3

0x2e9a,	// (0x0004e1bb) mup_equalizer_pane_cp4_ParamLimits

0x2e9a,	// (0x0004e1bb) mup_equalizer_pane_cp4

0x2ebb,	// (0x0004e1dc) mup_equalizer_pane_cp5

0x2ecf,	// (0x0004e1f0) mup_equalizer_pane_cp6

0x2ee3,	// (0x0004e204) mup_equalizer_pane_cp7

0xcdd1,	// (0x000580f2) bg_popup_call_poc_act_pane_g9

0xcdd9,	// (0x000580fa) bg_popup_call_poc_act_pane_g10

0xcde1,	// (0x00058102) bg_popup_call_poc_act_pane_g11

0x000a,

0xae4a,	// (0x0005616b) mup_scale_pane

0xae62,	// (0x00056183) mup_scale_pane_g1

0xbc7c,	// (0x00056f9d) mup_scale_pane_g2

0x0006,

0xf3b9,	// (0x0005a6da) mup_scale_pane_g

0xbca0,	// (0x00056fc1) msg_data_pane

0xbca8,	// (0x00056fc9) scroll_pane_cp017

0x064f,	// (0x0004b970) bg_list_pane_cp04_ParamLimits

0x064f,	// (0x0004b970) bg_list_pane_cp04

0xbcb0,	// (0x00056fd1) msg_data_pane_g1

0x2f09,	// (0x0004e22a) msg_data_pane_g2

0x2f11,	// (0x0004e232) msg_data_pane_g3

0x2f19,	// (0x0004e23a) msg_data_pane_g4

0x2f21,	// (0x0004e242) msg_data_pane_g5

0x2f29,	// (0x0004e24a) msg_data_pane_g6

0x2f31,	// (0x0004e252) msg_data_pane_g7

0x0006,

0xf3c8,	// (0x0005a6e9) msg_data_pane_g

0x0667,	// (0x0004b988) msg_text_pane_ParamLimits

0x0667,	// (0x0004b988) msg_text_pane

0x2f39,	// (0x0004e25a) qrid_highlight_pane_cp011_ParamLimits

0x2f39,	// (0x0004e25a) qrid_highlight_pane_cp011

0xabef,	// (0x00055f10) msg_body_pane

0xabef,	// (0x00055f10) msg_header_pane

0xbcc1,	// (0x00056fe2) input_focus_pane_cp07

0x9d11,	// (0x00055032) msg_header_pane_t1_ParamLimits

0x9d11,	// (0x00055032) msg_header_pane_t1

0x9d27,	// (0x00055048) msg_header_pane_t2_ParamLimits

0x9d27,	// (0x00055048) msg_header_pane_t2

0x0001,

0xf3dc,	// (0x0005a6fd) msg_header_pane_t_ParamLimits

0xf3dc,	// (0x0005a6fd) msg_header_pane_t

0xbcd6,	// (0x00056ff7) msg_body_pane_g1

0x9d3e,	// (0x0005505f) msg_body_pane_t1_ParamLimits

0x9d3e,	// (0x0005505f) msg_body_pane_t1

0x9d6f,	// (0x00055090) msg_body_pane_t2_ParamLimits

0x9d6f,	// (0x00055090) msg_body_pane_t2

0x9d81,	// (0x000550a2) msg_body_pane_t3_ParamLimits

0x9d81,	// (0x000550a2) msg_body_pane_t3

0x0002,

0xf3e1,	// (0x0005a702) msg_body_pane_t_ParamLimits

0xf3e1,	// (0x0005a702) msg_body_pane_t

0x2f89,	// (0x0004e2aa) main_viewer_pane_g1_ParamLimits

0x2f89,	// (0x0004e2aa) main_viewer_pane_g1

0x2f97,	// (0x0004e2b8) main_viewer_pane_g2_ParamLimits

0x2f97,	// (0x0004e2b8) main_viewer_pane_g2

0x2fa5,	// (0x0004e2c6) main_viewer_pane_g3_ParamLimits

0x2fa5,	// (0x0004e2c6) main_viewer_pane_g3

0x2fb4,	// (0x0004e2d5) main_viewer_pane_g4_ParamLimits

0x2fb4,	// (0x0004e2d5) main_viewer_pane_g4

0x9dab,	// (0x000550cc) main_viewer_pane_g5_ParamLimits

0x9dab,	// (0x000550cc) main_viewer_pane_g5

0x9dab,	// (0x000550cc) main_viewer_pane_g7_ParamLimits

0x9dab,	// (0x000550cc) main_viewer_pane_g7

0x9dbd,	// (0x000550de) main_viewer_pane_g8_ParamLimits

0x9dbd,	// (0x000550de) main_viewer_pane_g8

0x0007,

0xf3f1,	// (0x0005a712) main_viewer_pane_g_ParamLimits

0xf3f1,	// (0x0005a712) main_viewer_pane_g

0xbcde,	// (0x00056fff) viewer_content_pane_ParamLimits

0xbcde,	// (0x00056fff) viewer_content_pane

0x2ff0,	// (0x0004e311) main_postcard_pane_g1_ParamLimits

0x2ff0,	// (0x0004e311) main_postcard_pane_g1

0x3006,	// (0x0004e327) main_postcard_pane_g2_ParamLimits

0x3006,	// (0x0004e327) main_postcard_pane_g2

0x301c,	// (0x0004e33d) main_postcard_pane_g3_ParamLimits

0x301c,	// (0x0004e33d) main_postcard_pane_g3

0x0005,

0xf402,	// (0x0005a723) main_postcard_pane_g_ParamLimits

0xf402,	// (0x0005a723) main_postcard_pane_g

0x3033,	// (0x0004e354) main_postcard_pane_g4

0xcf55,	// (0x00058276) smil_status_volume_pane_g2

0x3076,	// (0x0004e397) postcard_pane_ParamLimits

0x3076,	// (0x0004e397) postcard_pane

0xbcec,	// (0x0005700d) postcard_pane_g1_ParamLimits

0xbcec,	// (0x0005700d) postcard_pane_g1

0x30b8,	// (0x0004e3d9) postcard_pane_g2_ParamLimits

0x30b8,	// (0x0004e3d9) postcard_pane_g2

0x30c4,	// (0x0004e3e5) postcard_pane_g3_ParamLimits

0x30c4,	// (0x0004e3e5) postcard_pane_g3

0xbcfa,	// (0x0005701b) postcard_pane_g4_ParamLimits

0xbcfa,	// (0x0005701b) postcard_pane_g4

0x30d0,	// (0x0004e3f1) postcard_pane_g5_ParamLimits

0x30d0,	// (0x0004e3f1) postcard_pane_g5

0x30e5,	// (0x0004e406) postcard_pane_g6_ParamLimits

0x30e5,	// (0x0004e406) postcard_pane_g6

0xbcec,	// (0x0005700d) postcard_pane_g7_ParamLimits

0xbcec,	// (0x0005700d) postcard_pane_g7

0x0006,

0xf40f,	// (0x0005a730) postcard_pane_g_ParamLimits

0xf40f,	// (0x0005a730) postcard_pane_g

0x30f9,	// (0x0004e41a) main_mp2_pane_g1_ParamLimits

0x30f9,	// (0x0004e41a) main_mp2_pane_g1

0x3105,	// (0x0004e426) main_mp2_pane_g2_ParamLimits

0x3105,	// (0x0004e426) main_mp2_pane_g2

0x3111,	// (0x0004e432) main_mp2_pane_g3_ParamLimits

0x3111,	// (0x0004e432) main_mp2_pane_g3

0x0002,

0xf41e,	// (0x0005a73f) main_mp2_pane_g_ParamLimits

0xf41e,	// (0x0005a73f) main_mp2_pane_g

0x311d,	// (0x0004e43e) main_mp2_pane_t1_ParamLimits

0x311d,	// (0x0004e43e) main_mp2_pane_t1

0x3132,	// (0x0004e453) main_mp2_pane_t2_ParamLimits

0x3132,	// (0x0004e453) main_mp2_pane_t2

0x3144,	// (0x0004e465) main_mp2_pane_t3_ParamLimits

0x3144,	// (0x0004e465) main_mp2_pane_t3

0x0002,

0xf425,	// (0x0005a746) main_mp2_pane_t_ParamLimits

0xf425,	// (0x0005a746) main_mp2_pane_t

0xbd08,	// (0x00057029) pec_content_pane_ParamLimits

0xbd08,	// (0x00057029) pec_content_pane

0xb292,	// (0x000565b3) scroll_pane_cp015

0xbd1a,	// (0x0005703b) pec_attribute_pane_ParamLimits

0xbd1a,	// (0x0005703b) pec_attribute_pane

0x3156,	// (0x0004e477) pec_content_pane_g1_ParamLimits

0x3156,	// (0x0004e477) pec_content_pane_g1

0xbd2a,	// (0x0005704b) pec_content_pane_t1_ParamLimits

0xbd2a,	// (0x0005704b) pec_content_pane_t1

0xbd3c,	// (0x0005705d) pec_content_pane_t2_ParamLimits

0xbd3c,	// (0x0005705d) pec_content_pane_t2

0x0001,

0xf42c,	// (0x0005a74d) pec_content_pane_t_ParamLimits

0xf42c,	// (0x0005a74d) pec_content_pane_t

0x3162,	// (0x0004e483) list_single_graphic_pane_cp01_ParamLimits

0x3162,	// (0x0004e483) list_single_graphic_pane_cp01

0xae4a,	// (0x0005616b) bg_popup_sub_pane_cp04

0xbd4e,	// (0x0005706f) popup_mup_playback_window_g1

0xbd5a,	// (0x0005707b) popup_mup_playback_window_t1

0xbd6f,	// (0x00057090) popup_mup_playback_window_t2

0x0001,

0xf431,	// (0x0005a752) popup_mup_playback_window_t

0xbda6,	// (0x000570c7) main_image_pane_g1_ParamLimits

0xbda6,	// (0x000570c7) main_image_pane_g1

0xbde9,	// (0x0005710a) scroll_pane_cp018_ParamLimits

0xbde9,	// (0x0005710a) scroll_pane_cp018

0xbe01,	// (0x00057122) scroll_pane_cp016_ParamLimits

0xbe01,	// (0x00057122) scroll_pane_cp016

0x3230,	// (0x0004e551) smil2_image_pane_ParamLimits

0x3230,	// (0x0004e551) smil2_image_pane

0x3260,	// (0x0004e581) smil2_root_pane_ParamLimits

0x3260,	// (0x0004e581) smil2_root_pane

0x3298,	// (0x0004e5b9) smil2_text_pane_ParamLimits

0x3298,	// (0x0004e5b9) smil2_text_pane

0xabef,	// (0x00055f10) bg_list_pane_cp06

0xbe3d,	// (0x0005715e) grid_radio_pane

0xabef,	// (0x00055f10) bg_popup_window_pane_cp06

0xbe45,	// (0x00057166) main_fmradio_pane_t1

0xce29,	// (0x0005814a) heading_pane_cp04

0xbe53,	// (0x00057174) main_fmradio_pane_t2

0xce31,	// (0x00058152) popup_cale_lunar_info_window_g1

0xbe61,	// (0x00057182) main_fmradio_pane_t3

0xce39,	// (0x0005815a) popup_cale_lunar_info_window_g2

0xbe6f,	// (0x00057190) main_fmradio_pane_t4

0x0001,

0xbe7d,	// (0x0005719e) main_fmradio_pane_t5

0x0004,

0xf524,	// (0x0005a845) popup_cale_lunar_info_window_g

0xf446,	// (0x0005a767) main_fmradio_pane_t

0xbe8b,	// (0x000571ac) wait_bar_pane_cp03

0xbe93,	// (0x000571b4) cell_fmradio_pane_ParamLimits

0xbe93,	// (0x000571b4) cell_fmradio_pane

0xbcec,	// (0x0005700d) cell_fmradio_pane_g1_ParamLimits

0xbcec,	// (0x0005700d) cell_fmradio_pane_g1

0xabef,	// (0x00055f10) grid_highlight_pane_cp011

0xbea6,	// (0x000571c7) poc_content_pane_ParamLimits

0xbea6,	// (0x000571c7) poc_content_pane

0xbeb8,	// (0x000571d9) scroll_pane_cp019

0x3318,	// (0x0004e639) popup_call_poc_act_window_ParamLimits

0x3318,	// (0x0004e639) popup_call_poc_act_window

0x333c,	// (0x0004e65d) popup_call_poc_inact_window_ParamLimits

0x333c,	// (0x0004e65d) popup_call_poc_inact_window

0xf4e8,	// (0x0005a809) bg_popup_call_poc_act_pane_g

0xcde9,	// (0x0005810a) bg_popup_call_poc_inact_pane_g1

0xcdf1,	// (0x00058112) bg_popup_call_poc_inact_pane_g2

0xbec0,	// (0x000571e1) popup_call_poc_act_window_g2

0xcdf9,	// (0x0005811a) bg_popup_call_poc_inact_pane_g3

0xcd79,	// (0x0005809a) bg_popup_call_poc_inact_pane_g4

0xce01,	// (0x00058122) bg_popup_call_poc_inact_pane_g5

0xbec8,	// (0x000571e9) popup_call_poc_act_window_t1_ParamLimits

0xbec8,	// (0x000571e9) popup_call_poc_act_window_t1

0xbef0,	// (0x00057211) popup_call_poc_act_window_t2_ParamLimits

0xbef0,	// (0x00057211) popup_call_poc_act_window_t2

0xbf18,	// (0x00057239) popup_call_poc_act_window_t3_ParamLimits

0xbf18,	// (0x00057239) popup_call_poc_act_window_t3

0xbf40,	// (0x00057261) popup_call_poc_act_window_t4_ParamLimits

0xbf40,	// (0x00057261) popup_call_poc_act_window_t4

0x0003,

0xf451,	// (0x0005a772) popup_call_poc_act_window_t_ParamLimits

0xf451,	// (0x0005a772) popup_call_poc_act_window_t

0xce09,	// (0x0005812a) bg_popup_call_poc_inact_pane_g6

0xce11,	// (0x00058132) bg_popup_call_poc_inact_pane_g7

0xce19,	// (0x0005813a) bg_popup_call_poc_inact_pane_g8

0xbf52,	// (0x00057273) popup_call_poc_inact_window_g2

0xce21,	// (0x00058142) bg_popup_call_poc_inact_pane_g9

0x0008,

0xf4ff,	// (0x0005a820) bg_popup_call_poc_inact_pane_g

0xbf5a,	// (0x0005727b) popup_call_poc_inact_window_t1_ParamLimits

0xbf5a,	// (0x0005727b) popup_call_poc_inact_window_t1

0xbf6f,	// (0x00057290) popup_call_poc_inact_window_t2_ParamLimits

0xbf6f,	// (0x00057290) popup_call_poc_inact_window_t2

0xbf84,	// (0x000572a5) popup_call_poc_inact_window_t3_ParamLimits

0xbf84,	// (0x000572a5) popup_call_poc_inact_window_t3

0x0002,

0xf45a,	// (0x0005a77b) popup_call_poc_inact_window_t_ParamLimits

0xf45a,	// (0x0005a77b) popup_call_poc_inact_window_t

0xcecd,	// (0x000581ee) context_pane_ParamLimits

0x3ba5,	// (0x0004eec6) signal_pane_ParamLimits

0xb0fb,	// (0x0005641c) main_call2_pane

0x9e02,	// (0x00055123) popup_phob_thumbnail2_window_ParamLimits

0x9e02,	// (0x00055123) popup_phob_thumbnail2_window

0x9d93,	// (0x000550b4) aid_hotspot_pointer_arrow_pane

0x9d9b,	// (0x000550bc) aid_hotspot_pointer_hand_pane

0x36a5,	// (0x0004e9c6) phob_pre_status_pane_g5

0xa7ce,	// (0x00055aef) cams_zoom_pane_ParamLimits

0xa7ce,	// (0x00055aef) image_vga_pane_ParamLimits

0xaec5,	// (0x000561e6) main_camera_pane_g1_ParamLimits

0xaec5,	// (0x000561e6) main_camera_pane_g2_ParamLimits

0xaec5,	// (0x000561e6) main_camera_pane_g3_ParamLimits

0xaec5,	// (0x000561e6) main_camera_pane_g4_ParamLimits

0xaec5,	// (0x000561e6) main_camera_pane_g5_ParamLimits

0xaec5,	// (0x000561e6) main_camera_pane_g6_ParamLimits

0xaec5,	// (0x000561e6) main_camera_pane_g7_ParamLimits

0xf185,	// (0x0005a4a6) main_camera_pane_g_ParamLimits

0xb103,	// (0x00056424) main_camera_pane_t1_ParamLimits

0xb103,	// (0x00056424) main_camera_pane_t2_ParamLimits

0xf196,	// (0x0005a4b7) main_camera_pane_t_ParamLimits

0xae4a,	// (0x0005616b) bg_popup_preview_window_pane_cp01_ParamLimits

0xae4a,	// (0x0005616b) bg_popup_preview_window_pane_cp01

0xbf99,	// (0x000572ba) popup_phob_thumbnail2_window_g1_ParamLimits

0xbf99,	// (0x000572ba) popup_phob_thumbnail2_window_g1

0xabef,	// (0x00055f10) call2_cli_visual_pane

0x3370,	// (0x0004e691) popup_call2_audio_conf_window_ParamLimits

0x3370,	// (0x0004e691) popup_call2_audio_conf_window

0x3390,	// (0x0004e6b1) popup_call2_audio_first_window_ParamLimits

0x3390,	// (0x0004e6b1) popup_call2_audio_first_window

0x3426,	// (0x0004e747) popup_call2_audio_in_window_ParamLimits

0x3426,	// (0x0004e747) popup_call2_audio_in_window

0x346e,	// (0x0004e78f) popup_call2_audio_out_window_ParamLimits

0x346e,	// (0x0004e78f) popup_call2_audio_out_window

0x34d8,	// (0x0004e7f9) popup_call2_audio_second_window_ParamLimits

0x34d8,	// (0x0004e7f9) popup_call2_audio_second_window

0x353e,	// (0x0004e85f) popup_call2_audio_wait_window_ParamLimits

0x353e,	// (0x0004e85f) popup_call2_audio_wait_window

0xabef,	// (0x00055f10) bg_popup_call2_act_pane_cp03

0xae2c,	// (0x0005614d) list_conf_pane_cp

0xbfa5,	// (0x000572c6) popup_call2_audio_conf_window_t1

0xbfb3,	// (0x000572d4) list_single_graphic_popup_conf2_pane_ParamLimits

0xbfb3,	// (0x000572d4) list_single_graphic_popup_conf2_pane

0xb84f,	// (0x00056b70) list_highlight_pane_cp04

0xbfc6,	// (0x000572e7) list_single_graphic_popup_conf2_pane_g1

0xb860,	// (0x00056b81) list_single_graphic_popup_conf2_pane_g2

0x0001,

0xf461,	// (0x0005a782) list_single_graphic_popup_conf2_pane_g

0xbfd0,	// (0x000572f1) list_single_graphic_popup_conf2_pane_t1

0xbfde,	// (0x000572ff) bg_popup_call2_act_pane_cp01_ParamLimits

0xbfde,	// (0x000572ff) bg_popup_call2_act_pane_cp01

0xc068,	// (0x00057389) call_type_pane_cp05_ParamLimits

0xc068,	// (0x00057389) call_type_pane_cp05

0xc0bc,	// (0x000573dd) popup_call2_audio_second_window_g1_ParamLimits

0xc0bc,	// (0x000573dd) popup_call2_audio_second_window_g1

0xc110,	// (0x00057431) popup_call2_audio_second_window_g2_ParamLimits

0xc110,	// (0x00057431) popup_call2_audio_second_window_g2

0x0002,

0xf466,	// (0x0005a787) popup_call2_audio_second_window_g_ParamLimits

0xf466,	// (0x0005a787) popup_call2_audio_second_window_g

0xc175,	// (0x00057496) popup_call2_audio_second_window_t1_ParamLimits

0xc175,	// (0x00057496) popup_call2_audio_second_window_t1

0xc230,	// (0x00057551) popup_call2_audio_second_window_t2_ParamLimits

0xc230,	// (0x00057551) popup_call2_audio_second_window_t2

0xc283,	// (0x000575a4) popup_call2_audio_second_window_t3_ParamLimits

0xc283,	// (0x000575a4) popup_call2_audio_second_window_t3

0x0003,

0xf46d,	// (0x0005a78e) popup_call2_audio_second_window_t_ParamLimits

0xf46d,	// (0x0005a78e) popup_call2_audio_second_window_t

0xabef,	// (0x00055f10) bg_popup_call2_in_pane_cp02

0xabf9,	// (0x00055f1a) call_type_pane_cp04

0x3578,	// (0x0004e899) popup_call2_audio_wait_window_g1

0x3580,	// (0x0004e8a1) popup_call2_audio_wait_window_g2

0x0001,

0xf476,	// (0x0005a797) popup_call2_audio_wait_window_g

0xac11,	// (0x00055f32) popup_call2_audio_wait_window_t3

0xc376,	// (0x00057697) bg_popup_call2_act_pane_ParamLimits

0xc376,	// (0x00057697) bg_popup_call2_act_pane

0xc436,	// (0x00057757) call_type_pane_cp03_ParamLimits

0xc436,	// (0x00057757) call_type_pane_cp03

0xc49a,	// (0x000577bb) popup_call2_audio_first_window_g1_ParamLimits

0xc49a,	// (0x000577bb) popup_call2_audio_first_window_g1

0xc50a,	// (0x0005782b) popup_call2_audio_first_window_g2_ParamLimits

0xc50a,	// (0x0005782b) popup_call2_audio_first_window_g2

0xc56e,	// (0x0005788f) popup_call2_audio_first_window_g3_ParamLimits

0xc56e,	// (0x0005788f) popup_call2_audio_first_window_g3

0x0004,

0xf47b,	// (0x0005a79c) popup_call2_audio_first_window_g_ParamLimits

0xf47b,	// (0x0005a79c) popup_call2_audio_first_window_g

0xc5f6,	// (0x00057917) popup_call2_audio_first_window_t1_ParamLimits

0xc5f6,	// (0x00057917) popup_call2_audio_first_window_t1

0xc6f9,	// (0x00057a1a) popup_call2_audio_first_window_t4_ParamLimits

0xc6f9,	// (0x00057a1a) popup_call2_audio_first_window_t4

0xc7dc,	// (0x00057afd) popup_call2_audio_first_window_t5_ParamLimits

0xc7dc,	// (0x00057afd) popup_call2_audio_first_window_t5

0x0003,

0xf486,	// (0x0005a7a7) popup_call2_audio_first_window_t_ParamLimits

0xf486,	// (0x0005a7a7) popup_call2_audio_first_window_t

0xae42,	// (0x00056163) bg_popup_call2_act_pane_g1

0xce41,	// (0x00058162) popup_cale_lunar_info_window_t1

0xce4f,	// (0x00058170) popup_cale_lunar_info_window_t2

0xce5d,	// (0x0005817e) popup_cale_lunar_info_window_t3

0xabef,	// (0x00055f10) bg_popup_call2_bubble_pane

0xc8dd,	// (0x00057bfe) bg_popup_call2_in_pane_cp01_ParamLimits

0xc8dd,	// (0x00057bfe) bg_popup_call2_in_pane_cp01

0xa8cb,	// (0x00055bec) call_type_pane_cp02

0x3588,	// (0x0004e8a9) popup_call2_audio_out_window_g1_ParamLimits

0x3588,	// (0x0004e8a9) popup_call2_audio_out_window_g1

0xc925,	// (0x00057c46) popup_call2_audio_out_window_g2_ParamLimits

0xc925,	// (0x00057c46) popup_call2_audio_out_window_g2

0x35b4,	// (0x0004e8d5) popup_call2_audio_out_window_g3_ParamLimits

0x35b4,	// (0x0004e8d5) popup_call2_audio_out_window_g3

0x0003,

0xf48f,	// (0x0005a7b0) popup_call2_audio_out_window_g_ParamLimits

0xf48f,	// (0x0005a7b0) popup_call2_audio_out_window_g

0xc95c,	// (0x00057c7d) popup_call2_audio_out_window_t1_ParamLimits

0xc95c,	// (0x00057c7d) popup_call2_audio_out_window_t1

0xc9bb,	// (0x00057cdc) popup_call2_audio_out_window_t2_ParamLimits

0xc9bb,	// (0x00057cdc) popup_call2_audio_out_window_t2

0xca0f,	// (0x00057d30) popup_call2_audio_out_window_t3_ParamLimits

0xca0f,	// (0x00057d30) popup_call2_audio_out_window_t3

0xca25,	// (0x00057d46) popup_call2_audio_out_window_t4_ParamLimits

0xca25,	// (0x00057d46) popup_call2_audio_out_window_t4

0xca3b,	// (0x00057d5c) popup_call2_audio_out_window_t5_ParamLimits

0xca3b,	// (0x00057d5c) popup_call2_audio_out_window_t5

0x0005,

0xf498,	// (0x0005a7b9) popup_call2_audio_out_window_t_ParamLimits

0xf498,	// (0x0005a7b9) popup_call2_audio_out_window_t

0xca9f,	// (0x00057dc0) bg_popup_call2_in_pane_ParamLimits

0xca9f,	// (0x00057dc0) bg_popup_call2_in_pane

0xcb09,	// (0x00057e2a) popup_call2_audio_in_window_g1_ParamLimits

0xcb09,	// (0x00057e2a) popup_call2_audio_in_window_g1

0xcb41,	// (0x00057e62) popup_call2_audio_in_window_g2_ParamLimits

0xcb41,	// (0x00057e62) popup_call2_audio_in_window_g2

0xcb79,	// (0x00057e9a) popup_call2_audio_in_window_g3_ParamLimits

0xcb79,	// (0x00057e9a) popup_call2_audio_in_window_g3

0x0003,

0xf4a5,	// (0x0005a7c6) popup_call2_audio_in_window_g_ParamLimits

0xf4a5,	// (0x0005a7c6) popup_call2_audio_in_window_g

0xcbd1,	// (0x00057ef2) popup_call2_audio_in_window_t1_ParamLimits

0xcbd1,	// (0x00057ef2) popup_call2_audio_in_window_t1

0xcc51,	// (0x00057f72) popup_call2_audio_in_window_t2_ParamLimits

0xcc51,	// (0x00057f72) popup_call2_audio_in_window_t2

0xccd1,	// (0x00057ff2) popup_call2_audio_in_window_t3_ParamLimits

0xccd1,	// (0x00057ff2) popup_call2_audio_in_window_t3

0xcceb,	// (0x0005800c) popup_call2_audio_in_window_t4_ParamLimits

0xcceb,	// (0x0005800c) popup_call2_audio_in_window_t4

0xccfd,	// (0x0005801e) popup_call2_audio_in_window_t5_ParamLimits

0xccfd,	// (0x0005801e) popup_call2_audio_in_window_t5

0xcd0f,	// (0x00058030) popup_call2_audio_in_window_t6_ParamLimits

0xcd0f,	// (0x00058030) popup_call2_audio_in_window_t6

0x0005,

0xf4ae,	// (0x0005a7cf) popup_call2_audio_in_window_t_ParamLimits

0xf4ae,	// (0x0005a7cf) popup_call2_audio_in_window_t

0xae42,	// (0x00056163) bg_popup_call2_in_pane_g1

0xce6b,	// (0x0005818c) popup_cale_lunar_info_window_t4

0x0003,

0xf529,	// (0x0005a84a) popup_cale_lunar_info_window_t

0xae4a,	// (0x0005616b) bg_popup_call2_rect_pane_ParamLimits

0xae4a,	// (0x0005616b) bg_popup_call2_rect_pane

0xabef,	// (0x00055f10) call2_cli_visual_graphic_pane

0xabef,	// (0x00055f10) call2_cli_visual_text_pane

0x9e29,	// (0x0005514a) smil_status_volume_pane_g3

0x0002,

0xae62,	// (0x00056183) call2_cli_visual_graphic_pane_g1

0xae62,	// (0x00056183) call2_cli_visual_graphic_pane_g2

0xae62,	// (0x00056183) call2_cli_visual_graphic_pane_g3

0x0002,

0xf4bb,	// (0x0005a7dc) call2_cli_visual_graphic_pane_g

0xcd21,	// (0x00058042) bg_popup_call2_rect_pane_g1

0xb00e,	// (0x0005632f) bg_popup_call2_rect_pane_g2

0xcd29,	// (0x0005804a) bg_popup_call2_rect_pane_g3

0xcd31,	// (0x00058052) bg_popup_call2_rect_pane_g4

0xcd39,	// (0x0005805a) bg_popup_call2_rect_pane_g5

0xcd41,	// (0x00058062) bg_popup_call2_rect_pane_g6

0xcd49,	// (0x0005806a) bg_popup_call2_rect_pane_g7

0xcd51,	// (0x00058072) bg_popup_call2_rect_pane_g8

0xcd59,	// (0x0005807a) bg_popup_call2_rect_pane_g9

0x0008,

0xf4c2,	// (0x0005a7e3) bg_popup_call2_rect_pane_g

0xcd61,	// (0x00058082) bg_popup_call2_bubble_pane_g1

0xcd69,	// (0x0005808a) bg_popup_call2_bubble_pane_g2

0xcd71,	// (0x00058092) bg_popup_call2_bubble_pane_g3

0xcd79,	// (0x0005809a) bg_popup_call2_bubble_pane_g4

0xcd81,	// (0x000580a2) bg_popup_call2_bubble_pane_g5

0xcd89,	// (0x000580aa) bg_popup_call2_bubble_pane_g6

0xcd91,	// (0x000580b2) bg_popup_call2_bubble_pane_g7

0xcd99,	// (0x000580ba) bg_popup_call2_bubble_pane_g8

0xcda1,	// (0x000580c2) bg_popup_call2_bubble_pane_g9

0x0008,

0xf4d5,	// (0x0005a7f6) bg_popup_call2_bubble_pane_g

0x1435,	// (0x0004c756) aid_cale_week_size_cell_pane

0x19e5,	// (0x0004cd06) aid_cams_cif_uncrop_pane_ParamLimits

0x19e5,	// (0x0004cd06) aid_cams_cif_uncrop_pane

0x1b3b,	// (0x0004ce5c) aid_cams_size_cell_ParamLimits

0x1b3b,	// (0x0004ce5c) aid_cams_size_cell

0x1b4f,	// (0x0004ce70) grid_cams_pane_ParamLimits

0x1b69,	// (0x0004ce8a) linegrid_cams_pane_ParamLimits

0x1c4f,	// (0x0004cf70) call_video_pane_t1

0x1c6d,	// (0x0004cf8e) call_video_pane_t2

0x0001,

0xf1e2,	// (0x0005a503) call_video_pane_t

0x2093,	// (0x0004d3b4) aid_cale_month_size_cell_pane_ParamLimits

0x2093,	// (0x0004d3b4) aid_cale_month_size_cell_pane

0xf56d,	// (0x0005a88e) smil_status_volume_pane_g

0x9e36,	// (0x00055157) volume_smil_pane_ParamLimits

0x9b5d,	// (0x00054e7e) aid_popup2_width_pane

0x139a,	// (0x0004c6bb) cell_qdial_pane_g4_ParamLimits

0x139a,	// (0x0004c6bb) cell_qdial_pane_g4

0x2c55,	// (0x0004df76) aid_blid_cardinal_pane_ParamLimits

0x2c61,	// (0x0004df82) aid_blid_destination_pane_ParamLimits

0x2c61,	// (0x0004df82) aid_blid_destination_pane

0xae4a,	// (0x0005616b) bg_popup_call_poc_act_pane_ParamLimits

0xae4a,	// (0x0005616b) bg_popup_call_poc_act_pane

0xae4a,	// (0x0005616b) bg_popup_call_poc_inact_pane_ParamLimits

0xae4a,	// (0x0005616b) bg_popup_call_poc_inact_pane

0xcda9,	// (0x000580ca) bg_popup_call_poc_act_pane_g1

0xcdb1,	// (0x000580d2) bg_popup_call_poc_act_pane_g2

0xcdb9,	// (0x000580da) bg_popup_call_poc_act_pane_g3

0xcd79,	// (0x0005809a) bg_popup_call_poc_act_pane_g4

0xcd81,	// (0x000580a2) bg_popup_call_poc_act_pane_g5

0xcdc1,	// (0x000580e2) bg_popup_call_poc_act_pane_g6

0xcd91,	// (0x000580b2) bg_popup_call_poc_act_pane_g7

0xcdc9,	// (0x000580ea) bg_popup_call_poc_act_pane_g8

0xabef,	// (0x00055f10) main_usb_pane

0x9ddd,	// (0x000550fe) popup_cale_lunar_info_window

0x1f39,	// (0x0004d25a) im_reading_pane_t1_ParamLimits

0xb1ea,	// (0x0005650b) list_im_pane_ParamLimits

0xb1fb,	// (0x0005651c) scroll_pane_cp07_ParamLimits

0xabef,	// (0x00055f10) grid_highlight_pane_cp012

0xae4a,	// (0x0005616b) mup_scale_pane_ParamLimits

0xbcec,	// (0x0005700d) main_usb_pane_g1_ParamLimits

0xbcec,	// (0x0005700d) main_usb_pane_g1

0x3603,	// (0x0004e924) main_usb_pane_g2_ParamLimits

0x3603,	// (0x0004e924) main_usb_pane_g2

0x0001,

0xf512,	// (0x0005a833) main_usb_pane_g_ParamLimits

0xf512,	// (0x0005a833) main_usb_pane_g

0x3619,	// (0x0004e93a) main_usb_pane_t1_ParamLimits

0x3619,	// (0x0004e93a) main_usb_pane_t1

0x362b,	// (0x0004e94c) main_usb_pane_t2_ParamLimits

0x362b,	// (0x0004e94c) main_usb_pane_t2

0x363d,	// (0x0004e95e) main_usb_pane_t3_ParamLimits

0x363d,	// (0x0004e95e) main_usb_pane_t3

0x364f,	// (0x0004e970) main_usb_pane_t4_ParamLimits

0x364f,	// (0x0004e970) main_usb_pane_t4

0x3661,	// (0x0004e982) main_usb_pane_t5_ParamLimits

0x3661,	// (0x0004e982) main_usb_pane_t5

0x3673,	// (0x0004e994) main_usb_pane_t6_ParamLimits

0x3673,	// (0x0004e994) main_usb_pane_t6

0x0005,

0xf517,	// (0x0005a838) main_usb_pane_t_ParamLimits

0x2c04,	// (0x0004df25) aid_text_placing

0x2c0d,	// (0x0004df2e) main_location2_pane_t1_ParamLimits

0x2c1f,	// (0x0004df40) main_location2_pane_t2_ParamLimits

0x2c31,	// (0x0004df52) main_location2_pane_t3_ParamLimits

0x2c43,	// (0x0004df64) main_location2_pane_t4_ParamLimits

0x2c43,	// (0x0004df64) main_location2_pane_t4

0xf31e,	// (0x0005a63f) main_location2_pane_t_ParamLimits

0xae78,	// (0x00056199) find_pinb_pane_g2_ParamLimits

0xae78,	// (0x00056199) find_pinb_pane_g2

0x0001,

0xf09a,	// (0x0005a3bb) find_pinb_pane_g_ParamLimits

0xf09a,	// (0x0005a3bb) find_pinb_pane_g

0xae84,	// (0x000561a5) find_pinb_pane_t1_ParamLimits

0xae96,	// (0x000561b7) find_pinb_pane_t2_ParamLimits

0xf09f,	// (0x0005a3c0) find_pinb_pane_t_ParamLimits

0xabef,	// (0x00055f10) main_call3_pane

0x257a,	// (0x0004d89b) cale_month_day_heading_pane_t1_ParamLimits

0x25bc,	// (0x0004d8dd) cale_month_day_heading_pane_t2_ParamLimits

0x25f1,	// (0x0004d912) cale_month_day_heading_pane_t3_ParamLimits

0x2626,	// (0x0004d947) cale_month_day_heading_pane_t4_ParamLimits

0x2663,	// (0x0004d984) cale_month_day_heading_pane_t5_ParamLimits

0x26a8,	// (0x0004d9c9) cale_month_day_heading_pane_t6_ParamLimits

0x26ed,	// (0x0004da0e) cale_month_day_heading_pane_t7_ParamLimits

0xf21a,	// (0x0005a53b) cale_month_day_heading_pane_t_ParamLimits

0xb445,	// (0x00056766) smil_status_volume_pane

0x3094,	// (0x0004e3b5) postcard_address_pane_ParamLimits

0x3094,	// (0x0004e3b5) postcard_address_pane

0x30a6,	// (0x0004e3c7) postcard_message_pane_ParamLimits

0x30a6,	// (0x0004e3c7) postcard_message_pane

0x35e0,	// (0x0004e901) call2_cli_visual_pane_t1_ParamLimits

0x35e0,	// (0x0004e901) call2_cli_visual_pane_t1

0xcf80,	// (0x000582a1) postcard_message_pane_t1_ParamLimits

0xcf80,	// (0x000582a1) postcard_message_pane_t1

0xcf68,	// (0x00058289) postcard_address_pane_t1_ParamLimits

0xcf68,	// (0x00058289) postcard_address_pane_t1

0x3d58,	// (0x0004f079) popup_call3_audio_in_window_ParamLimits

0x3d58,	// (0x0004f079) popup_call3_audio_in_window

0x3be3,	// (0x0004ef04) bg_popup_call3_in_pane_ParamLimits

0x3be3,	// (0x0004ef04) bg_popup_call3_in_pane

0x3c59,	// (0x0004ef7a) popup_call3_audio_in_window_g1_ParamLimits

0x3c59,	// (0x0004ef7a) popup_call3_audio_in_window_g1

0x3c79,	// (0x0004ef9a) popup_call3_audio_in_window_g2_ParamLimits

0x3c79,	// (0x0004ef9a) popup_call3_audio_in_window_g2

0x3c99,	// (0x0004efba) popup_call3_audio_in_window_g3_ParamLimits

0x3c99,	// (0x0004efba) popup_call3_audio_in_window_g3

0x0003,

0xf574,	// (0x0005a895) popup_call3_audio_in_window_g_ParamLimits

0xf574,	// (0x0005a895) popup_call3_audio_in_window_g

0x3cca,	// (0x0004efeb) popup_call3_audio_in_window_t1_ParamLimits

0x3cca,	// (0x0004efeb) popup_call3_audio_in_window_t1

0x3d08,	// (0x0004f029) popup_call3_audio_in_window_t2_ParamLimits

0x3d08,	// (0x0004f029) popup_call3_audio_in_window_t2

0x3d46,	// (0x0004f067) popup_call3_audio_in_window_t3_ParamLimits

0x3d46,	// (0x0004f067) popup_call3_audio_in_window_t3

0x0002,

0xf57d,	// (0x0005a89e) popup_call3_audio_in_window_t_ParamLimits

0xf57d,	// (0x0005a89e) popup_call3_audio_in_window_t

0xb0fb,	// (0x0005641c) bg_popup_call3_rect_pane

0xcd21,	// (0x00058042) bg_popup_call3_rect_pane_g1

0xb00e,	// (0x0005632f) bg_popup_call3_rect_pane_g2

0xcd29,	// (0x0005804a) bg_popup_call3_rect_pane_g3

0xcd31,	// (0x00058052) bg_popup_call3_rect_pane_g4

0xcd39,	// (0x0005805a) bg_popup_call3_rect_pane_g5

0xcd41,	// (0x00058062) bg_popup_call3_rect_pane_g6

0xcd49,	// (0x0005806a) bg_popup_call3_rect_pane_g7

0xa7c4,	// (0x00055ae5) mup_visualizer_osc_pane

0xa7c4,	// (0x00055ae5) mup_visualizer_spec_pane

0x3c13,	// (0x0004ef34) call3_video_qcif_pane_ParamLimits

0x3c13,	// (0x0004ef34) call3_video_qcif_pane

0x3c26,	// (0x0004ef47) call3_video_qcif_uncrop_pane_ParamLimits

0x3c26,	// (0x0004ef47) call3_video_qcif_uncrop_pane

0x3c34,	// (0x0004ef55) call3_video_subqcif_pane_ParamLimits

0x3c34,	// (0x0004ef55) call3_video_subqcif_pane

0x3c48,	// (0x0004ef69) call3_video_subqcif_uncrop_pane_ParamLimits

0x3c48,	// (0x0004ef69) call3_video_subqcif_uncrop_pane

0x3cb9,	// (0x0004efda) popup_call3_audio_in_window_g4_ParamLimits

0x3cb9,	// (0x0004efda) popup_call3_audio_in_window_g4

0xa7c4,	// (0x00055ae5) mup_spec_half_pane

0xa7c4,	// (0x00055ae5) mup_spec_half_pane_cp

0xa7c4,	// (0x00055ae5) mup_osc_middle_pane

0xb131,	// (0x00056452) mup_visualizer_osc_pane_g1

0xcf1b,	// (0x0005823c) mup_spec_bar_pane_ParamLimits

0xcf1b,	// (0x0005823c) mup_spec_bar_pane

0xb131,	// (0x00056452) mup_spec_bar_pane_g1

0xb131,	// (0x00056452) mup_spec_bar_pane_g2

0x0001,

0xf398,	// (0x0005a6b9) mup_spec_bar_pane_g

0x1435,	// (0x0004c756) aid_cale_week_size_cell_pane_ParamLimits

0x144f,	// (0x0004c770) bg_cale_heading_pane_ParamLimits

0xb04b,	// (0x0005636c) bg_cale_pane_cp01_ParamLimits

0x1467,	// (0x0004c788) cale_week_corner_pane_ParamLimits

0x1486,	// (0x0004c7a7) cale_week_day_heading_pane_ParamLimits

0x14a3,	// (0x0004c7c4) cale_week_scroll_pane_g1_ParamLimits

0x14b6,	// (0x0004c7d7) cale_week_scroll_pane_g2_ParamLimits

0x14ce,	// (0x0004c7ef) cale_week_scroll_pane_g3_ParamLimits

0x14e6,	// (0x0004c807) cale_week_scroll_pane_g4_ParamLimits

0x14fe,	// (0x0004c81f) cale_week_scroll_pane_g5_ParamLimits

0x151e,	// (0x0004c83f) cale_week_scroll_pane_g6_ParamLimits

0x153e,	// (0x0004c85f) cale_week_scroll_pane_g7_ParamLimits

0x155e,	// (0x0004c87f) cale_week_scroll_pane_g8_ParamLimits

0x1582,	// (0x0004c8a3) cale_week_scroll_pane_g9_ParamLimits

0x159a,	// (0x0004c8bb) cale_week_scroll_pane_g10_ParamLimits

0x15b2,	// (0x0004c8d3) cale_week_scroll_pane_g11_ParamLimits

0x15ca,	// (0x0004c8eb) cale_week_scroll_pane_g12_ParamLimits

0x15e2,	// (0x0004c903) cale_week_scroll_pane_g13_ParamLimits

0x15e2,	// (0x0004c903) cale_week_scroll_pane_g14_ParamLimits

0x15e2,	// (0x0004c903) cale_week_scroll_pane_g15_ParamLimits

0xf12b,	// (0x0005a44c) cale_week_scroll_pane_g_ParamLimits

0x161e,	// (0x0004c93f) cale_week_time_pane_ParamLimits

0x1642,	// (0x0004c963) grid_cale_week_pane_ParamLimits

0xb07a,	// (0x0005639b) listscroll_cale_week_pane_t1

0xb08c,	// (0x000563ad) scroll_pane_cp08_ParamLimits

0x20f3,	// (0x0004d414) cale_month_corner_pane_ParamLimits

0xb41b,	// (0x0005673c) cale_month_pane_t1

0x250d,	// (0x0004d82e) cale_month_week_pane_ParamLimits

0x2a59,	// (0x0004dd7a) popup_call_status_window_g1_ParamLimits

0x2a6d,	// (0x0004dd8e) popup_call_status_window_g2_ParamLimits

0x2a81,	// (0x0004dda2) popup_call_status_window_g3_ParamLimits

0xf2a5,	// (0x0005a5c6) popup_call_status_window_g_ParamLimits

0xb7db,	// (0x00056afc) aid_call2_pane

0x0696,	// (0x0004b9b7) msg_header_pane_g1

0x3094,	// (0x0004e3b5) postcard_address2_pane_ParamLimits

0x3094,	// (0x0004e3b5) postcard_address2_pane

0x30a6,	// (0x0004e3c7) postcard_message2_pane_ParamLimits

0x30a6,	// (0x0004e3c7) postcard_message2_pane

0x3bb3,	// (0x0004eed4) message2_row_pane_ParamLimits

0x3bb3,	// (0x0004eed4) message2_row_pane

0x3bd0,	// (0x0004eef1) address2_row_pane_ParamLimits

0x3bd0,	// (0x0004eef1) address2_row_pane

0xcee8,	// (0x00058209) postcard_message2_row_pane_g1

0xcef0,	// (0x00058211) postcard_message2_row_pane_t1

0xcee8,	// (0x00058209) address2_row_pane_g1

0xcef0,	// (0x00058211) address2_row_pane_t1

0x197c,	// (0x0004cc9d) aid_size_cell_vorec

0xabef,	// (0x00055f10) main_rss_pane

0xcefe,	// (0x0005821f) rss_list_single_pane_ParamLimits

0xcefe,	// (0x0005821f) rss_list_single_pane

0xcf0c,	// (0x0005822d) rss_list_single_pane_t1

0xcf0c,	// (0x0005822d) rss_list_single_pane_t2

0x0001,

0xf568,	// (0x0005a889) rss_list_single_pane_t

0xabef,	// (0x00055f10) main_camera2_pane

0xabef,	// (0x00055f10) main_video2_pane

0x9e4b,	// (0x0005516c) cams_zoom_pane_cp2_ParamLimits

0x9e4b,	// (0x0005516c) cams_zoom_pane_cp2

0x9e4b,	// (0x0005516c) image2_vga_pane_ParamLimits

0x9e4b,	// (0x0005516c) image2_vga_pane

0x9e59,	// (0x0005517a) main_camera2_pane_g1_ParamLimits

0x9e59,	// (0x0005517a) main_camera2_pane_g1

0x9e59,	// (0x0005517a) main_camera2_pane_g2_ParamLimits

0x9e59,	// (0x0005517a) main_camera2_pane_g2

0x9e59,	// (0x0005517a) main_camera2_pane_g3_ParamLimits

0x9e59,	// (0x0005517a) main_camera2_pane_g3

0x9e59,	// (0x0005517a) main_camera2_pane_g4_ParamLimits

0x9e59,	// (0x0005517a) main_camera2_pane_g4

0x9e59,	// (0x0005517a) main_camera2_pane_g5_ParamLimits

0x9e59,	// (0x0005517a) main_camera2_pane_g5

0x9e59,	// (0x0005517a) main_camera2_pane_g6_ParamLimits

0x9e59,	// (0x0005517a) main_camera2_pane_g6

0x9e59,	// (0x0005517a) main_camera2_pane_g7_ParamLimits

0x9e59,	// (0x0005517a) main_camera2_pane_g7

0x9e59,	// (0x0005517a) main_camera2_pane_g8_ParamLimits

0x9e59,	// (0x0005517a) main_camera2_pane_g8

0x0008,

0xf584,	// (0x0005a8a5) main_camera2_pane_g_ParamLimits

0xf584,	// (0x0005a8a5) main_camera2_pane_g

0x3d7a,	// (0x0004f09b) main_camera2_pane_t1_ParamLimits

0x3d7a,	// (0x0004f09b) main_camera2_pane_t1

0x3d7a,	// (0x0004f09b) main_camera2_pane_t2_ParamLimits

0x3d7a,	// (0x0004f09b) main_camera2_pane_t2

0x3d7a,	// (0x0004f09b) main_camera2_pane_t3_ParamLimits

0x3d7a,	// (0x0004f09b) main_camera2_pane_t3

0x3d7a,	// (0x0004f09b) main_camera2_pane_t4_ParamLimits

0x3d7a,	// (0x0004f09b) main_camera2_pane_t4

0x0006,

0xf597,	// (0x0005a8b8) main_camera2_pane_t_ParamLimits

0xf597,	// (0x0005a8b8) main_camera2_pane_t

0xd3b9,	// (0x000586da) cams_zoom_pane_cp4_ParamLimits

0xd3b9,	// (0x000586da) cams_zoom_pane_cp4

0xcafb,	// (0x00057e1c) image2_cif_pane_ParamLimits

0xcafb,	// (0x00057e1c) image2_cif_pane

0xa7ce,	// (0x00055aef) image2_subqcif_pane_ParamLimits

0xa7ce,	// (0x00055aef) image2_subqcif_pane

0x3d8e,	// (0x0004f0af) main_video2_pane_g1_ParamLimits

0x3d8e,	// (0x0004f0af) main_video2_pane_g1

0x3d8e,	// (0x0004f0af) main_video2_pane_g2_ParamLimits

0x3d8e,	// (0x0004f0af) main_video2_pane_g2

0x3d8e,	// (0x0004f0af) main_video2_pane_g3_ParamLimits

0x3d8e,	// (0x0004f0af) main_video2_pane_g3

0x3d8e,	// (0x0004f0af) main_video2_pane_g4_ParamLimits

0x3d8e,	// (0x0004f0af) main_video2_pane_g4

0x3d8e,	// (0x0004f0af) main_video2_pane_g5_ParamLimits

0x3d8e,	// (0x0004f0af) main_video2_pane_g5

0x3d8e,	// (0x0004f0af) main_video2_pane_g6_ParamLimits

0x3d8e,	// (0x0004f0af) main_video2_pane_g6

0x0005,

0xf5a6,	// (0x0005a8c7) main_video2_pane_g_ParamLimits

0xf5a6,	// (0x0005a8c7) main_video2_pane_g

0x3d9c,	// (0x0004f0bd) main_video2_pane_t1_ParamLimits

0x3d9c,	// (0x0004f0bd) main_video2_pane_t1

0x3d9c,	// (0x0004f0bd) main_video2_pane_t2_ParamLimits

0x3d9c,	// (0x0004f0bd) main_video2_pane_t2

0x3d9c,	// (0x0004f0bd) main_video2_pane_t3_ParamLimits

0x3d9c,	// (0x0004f0bd) main_video2_pane_t3

0x0002,

0xf5b3,	// (0x0005a8d4) main_video2_pane_t_ParamLimits

0xf5b3,	// (0x0005a8d4) main_video2_pane_t

0x3707,	// (0x0004ea28) call_muted_g2

0x0001,

0xf55a,	// (0x0005a87b) call_muted_g

0xabef,	// (0x00055f10) main_mup2_pane

0xbbf3,	// (0x00056f14) main_mup2_pane_g1_ParamLimits

0xbbf3,	// (0x00056f14) main_mup2_pane_g1

0xbbf3,	// (0x00056f14) main_mup2_pane_g2_ParamLimits

0xbbf3,	// (0x00056f14) main_mup2_pane_g2

0xb131,	// (0x00056452) main_mup_pane_g13_cp1

0xa7c4,	// (0x00055ae5) mup_volume_pane_cp1

0xbbf3,	// (0x00056f14) main_mup2_pane_g4_ParamLimits

0xbbf3,	// (0x00056f14) main_mup2_pane_g4

0xbbf3,	// (0x00056f14) main_mup2_pane_g5_ParamLimits

0xbbf3,	// (0x00056f14) main_mup2_pane_g5

0xbbf3,	// (0x00056f14) main_mup2_pane_g6_ParamLimits

0xbbf3,	// (0x00056f14) main_mup2_pane_g6

0xbbf3,	// (0x00056f14) main_mup2_pane_g7_ParamLimits

0xbbf3,	// (0x00056f14) main_mup2_pane_g7

0x0006,

0xf5ba,	// (0x0005a8db) main_mup2_pane_g_ParamLimits

0xf5ba,	// (0x0005a8db) main_mup2_pane_g

0xbc01,	// (0x00056f22) main_mup2_pane_t1_ParamLimits

0xbc01,	// (0x00056f22) main_mup2_pane_t1

0xbc01,	// (0x00056f22) main_mup2_pane_t2_ParamLimits

0xbc01,	// (0x00056f22) main_mup2_pane_t2

0xbc01,	// (0x00056f22) main_mup2_pane_t3_ParamLimits

0xbc01,	// (0x00056f22) main_mup2_pane_t3

0xbc01,	// (0x00056f22) main_mup2_pane_t4_ParamLimits

0xbc01,	// (0x00056f22) main_mup2_pane_t4

0xbc01,	// (0x00056f22) main_mup2_pane_t5_ParamLimits

0xbc01,	// (0x00056f22) main_mup2_pane_t5

0xbc01,	// (0x00056f22) main_mup2_pane_t6_ParamLimits

0xbc01,	// (0x00056f22) main_mup2_pane_t6

0x0005,

0xf5c9,	// (0x0005a8ea) main_mup2_pane_t_ParamLimits

0xf5c9,	// (0x0005a8ea) main_mup2_pane_t

0xbc15,	// (0x00056f36) mup2_visualizer_pane_ParamLimits

0xbc15,	// (0x00056f36) mup2_visualizer_pane

0xbc15,	// (0x00056f36) mup_progress_pane_cp_ParamLimits

0xbc15,	// (0x00056f36) mup_progress_pane_cp

0xcf9c,	// (0x000582bd) mup_volume_pane_cp_ParamLimits

0xcf9c,	// (0x000582bd) mup_volume_pane_cp

0xaec5,	// (0x000561e6) mup2_visualizer_pane_g1_ParamLimits

0xaec5,	// (0x000561e6) mup2_visualizer_pane_g1

0xaed3,	// (0x000561f4) mup2_visualizer_pane_g2_ParamLimits

0xaed3,	// (0x000561f4) mup2_visualizer_pane_g2

0xaed3,	// (0x000561f4) mup2_visualizer_pane_g3_ParamLimits

0xaed3,	// (0x000561f4) mup2_visualizer_pane_g3

0x0002,

0xf0a4,	// (0x0005a3c5) mup2_visualizer_pane_g_ParamLimits

0xf0a4,	// (0x0005a3c5) mup2_visualizer_pane_g

0xbe35,	// (0x00057156) aid_size_cell_fmradio

0x38b9,	// (0x0004ebda) aid_height_parent_landcape

0xb279,	// (0x0005659a) wml_content_pane_cp

0xb281,	// (0x000565a2) wml_tabs_pane

0xb28a,	// (0x000565ab) popup_wml_miniature_window

0xb292,	// (0x000565b3) scroll_pane_cp021

0xb2a6,	// (0x000565c7) wml_content_pane_comp8

0xabef,	// (0x00055f10) bg_popup_sub_pane_cp05

0xcfb2,	// (0x000582d3) popup_wml_miniature_window_g1

0xcfba,	// (0x000582db) wml_miniature_view_pane

0x3db0,	// (0x0004f0d1) aid_size_wml_view

0x3db8,	// (0x0004f0d9) wml_miniature_view_pane_g1

0x3dc1,	// (0x0004f0e2) wml_miniature_view_pane_g2

0x3dca,	// (0x0004f0eb) wml_miniature_view_pane_g3

0x3dd2,	// (0x0004f0f3) wml_miniature_view_pane_g4

0x3dda,	// (0x0004f0fb) wml_miniature_view_pane_g5

0x3de2,	// (0x0004f103) wml_miniature_view_pane_g6

0x3dea,	// (0x0004f10b) wml_miniature_view_pane_g7

0x3df2,	// (0x0004f113) wml_miniature_view_pane_g8

0x0007,

0xf5d6,	// (0x0005a8f7) wml_miniature_view_pane_g

0xcfc2,	// (0x000582e3) background_graphic_ParamLimits

0xcfc2,	// (0x000582e3) background_graphic

0xcfce,	// (0x000582ef) wml_tabs_2_pane

0xcfd7,	// (0x000582f8) wml_tabs_3_pane_ParamLimits

0xcfd7,	// (0x000582f8) wml_tabs_3_pane

0xcfe9,	// (0x0005830a) wml_tabs_4_pane_ParamLimits

0xcfe9,	// (0x0005830a) wml_tabs_4_pane

0xcfff,	// (0x00058320) wml_tabs_5_pane_ParamLimits

0xcfff,	// (0x00058320) wml_tabs_5_pane

0xd019,	// (0x0005833a) wml_tabs_pane_g2_ParamLimits

0xd019,	// (0x0005833a) wml_tabs_pane_g2

0xd02e,	// (0x0005834f) wml_tabs_pane_g3_ParamLimits

0xd02e,	// (0x0005834f) wml_tabs_pane_g3

0xd043,	// (0x00058364) wml_tabs_2_active_pane_ParamLimits

0xd043,	// (0x00058364) wml_tabs_2_active_pane

0xd043,	// (0x00058364) wml_tabs_2_passive_pane_ParamLimits

0xd043,	// (0x00058364) wml_tabs_2_passive_pane

0x3dfa,	// (0x0004f11b) wml_tabs_3_active_pane_cp_ParamLimits

0x3dfa,	// (0x0004f11b) wml_tabs_3_active_pane_cp

0x3e0f,	// (0x0004f130) wml_tabs_3_passive_pane_ParamLimits

0x3e0f,	// (0x0004f130) wml_tabs_3_passive_pane

0x3e22,	// (0x0004f143) wml_tabs_3_passive_pane_cp_ParamLimits

0x3e22,	// (0x0004f143) wml_tabs_3_passive_pane_cp

0x3e39,	// (0x0004f15a) tabs_4_active_pane

0x3e41,	// (0x0004f162) tabs_4_passive_pane

0x3e4b,	// (0x0004f16c) tabs_4_passive_pane_cp

0x3e53,	// (0x0004f174) tabs_4_passive_pane_cp2

0x35fb,	// (0x0004e91c) aid_height_text

0xbc15,	// (0x00056f36) mup_volume_cont_pane_ParamLimits

0xbc15,	// (0x00056f36) mup_volume_cont_pane

0xa7c4,	// (0x00055ae5) aid_size_cell_pinb

0xa7c4,	// (0x00055ae5) aid_size_list_pinb

0xbc15,	// (0x00056f36) mup2_volume_cont_pane_ParamLimits

0xbc15,	// (0x00056f36) mup2_volume_cont_pane

0x9e7b,	// (0x0005519c) mup2_volume_cont_pane_g1_ParamLimits

0x9e7b,	// (0x0005519c) mup2_volume_cont_pane_g1

0x0e9d,	// (0x0004c1be) aid_size_cell_touch_ParamLimits

0x0e9d,	// (0x0004c1be) aid_size_cell_touch

0x1063,	// (0x0004c384) touch_pane_ParamLimits

0x1063,	// (0x0004c384) touch_pane

0xa7c4,	// (0x00055ae5) main_rss2_pane

0xd05a,	// (0x0005837b) listscroll_rss2_pane

0xd063,	// (0x00058384) rss2_navigation_pane

0xd06b,	// (0x0005838c) list_rss2_pane

0xb8f4,	// (0x00056c15) scroll_pane_cp22

0xd073,	// (0x00058394) rss2_navigation_pane_g1

0xd07c,	// (0x0005839d) rss2_navigation_pane_g2

0xd084,	// (0x000583a5) rss2_navigation_pane_g3

0x0002,

0xf5e7,	// (0x0005a908) rss2_navigation_pane_g

0xd08c,	// (0x000583ad) rss2_navigation_pane_t1

0x3e5d,	// (0x0004f17e) rss2_list_single_pane_ParamLimits

0x3e5d,	// (0x0004f17e) rss2_list_single_pane

0xd09a,	// (0x000583bb) rss2_list_single_pane_t2

0xd0a8,	// (0x000583c9) rss2_list_single_pane_t3_ParamLimits

0xd0a8,	// (0x000583c9) rss2_list_single_pane_t3

0xd0c5,	// (0x000583e6) rss2_list_single_pane_t4

0x2935,	// (0x0004dc56) smil_status_pane_g1

0xa7ce,	// (0x00055aef) main_image2_pane_ParamLimits

0xa7ce,	// (0x00055aef) main_image2_pane

0x9e59,	// (0x0005517a) main_camera2_pane_g9_ParamLimits

0x9e59,	// (0x0005517a) main_camera2_pane_g9

0x3d7a,	// (0x0004f09b) main_camera2_pane_t5_ParamLimits

0x3d7a,	// (0x0004f09b) main_camera2_pane_t5

0x9e67,	// (0x00055188) main_camera2_pane_t6_ParamLimits

0x9e67,	// (0x00055188) main_camera2_pane_t6

0x3e73,	// (0x0004f194) main_image2_pane_g1_ParamLimits

0x3e73,	// (0x0004f194) main_image2_pane_g1

0x32ce,	// (0x0004e5ef) smil2_video_pane_ParamLimits

0x32ce,	// (0x0004e5ef) smil2_video_pane

0x9b79,	// (0x00054e9a) aid_zoom_text_primary_cp

0x9bb8,	// (0x00054ed9) popup_preview_fixed_window

0xb1e2,	// (0x00056503) im_reading_pane_g1

0x3d6c,	// (0x0004f08d) cams2_bc_adjust_pane_cp_ParamLimits

0x3d6c,	// (0x0004f08d) cams2_bc_adjust_pane_cp

0xbc15,	// (0x00056f36) cams2_bc_adjust_pane_ParamLimits

0xbc15,	// (0x00056f36) cams2_bc_adjust_pane

0xb131,	// (0x00056452) cams2_bc_adjust_pane_g1

0xa7c4,	// (0x00055ae5) cams2_slider_pane

0xb131,	// (0x00056452) cams2_slider_pane_g1

0xb131,	// (0x00056452) cams2_slider_pane_g2

0x0006,

0xf5ee,	// (0x0005a90f) cams2_slider_pane_g

0x112c,	// (0x0004c44d) calc_display_pane_ParamLimits

0x1151,	// (0x0004c472) calc_paper_pane_ParamLimits

0x1174,	// (0x0004c495) grid_calc_pane_ParamLimits

0x9cda,	// (0x00054ffb) popup_clock_digital_window_t1_ParamLimits

0xbdd2,	// (0x000570f3) main_image_pane_t1

0x110e,	// (0x0004c42f) aid_size_cell_calc_ParamLimits

0x110e,	// (0x0004c42f) aid_size_cell_calc

0x38ff,	// (0x0004ec20) popup_blid_sat_info2_window_ParamLimits

0x38ff,	// (0x0004ec20) popup_blid_sat_info2_window

0xd0d3,	// (0x000583f4) aid_size_cell_blid

0xcafb,	// (0x00057e1c) bg_popup_window_pane_cp07

0xd0f0,	// (0x00058411) grid_popup_blid_pane

0xd0fa,	// (0x0005841b) heading_pane_cp05_ParamLimits

0xd0fa,	// (0x0005841b) heading_pane_cp05

0xd1c4,	// (0x000584e5) cell_popup_blid_pane_ParamLimits

0xd1c4,	// (0x000584e5) cell_popup_blid_pane

0xd1e8,	// (0x00058509) cell_popup_blid_pane_g1

0xd1f0,	// (0x00058511) cell_popup_blid_pane_t1

0xbc15,	// (0x00056f36) mup2_indicator_pane_ParamLimits

0xbc15,	// (0x00056f36) mup2_indicator_pane

0xa7c4,	// (0x00055ae5) mup2_visualizer_osc_pane

0xcf9c,	// (0x000582bd) mup2_visualizer_spec_pane_ParamLimits

0xcf9c,	// (0x000582bd) mup2_visualizer_spec_pane

0xa7c4,	// (0x00055ae5) mup2_spec_half_pane

0xa7c4,	// (0x00055ae5) mup2_spec_half_pane_cp

0xd1fe,	// (0x0005851f) mup2_spec_bar_pane_ParamLimits

0xd1fe,	// (0x0005851f) mup2_spec_bar_pane

0xb131,	// (0x00056452) mup2_spec_bar_pane_g1

0xd21d,	// (0x0005853e) mup2_spec_bar_pane_g2

0x0001,

0xf614,	// (0x0005a935) mup2_spec_bar_pane_g

0xa7c4,	// (0x00055ae5) mup2_osc_middle_pane

0xb131,	// (0x00056452) mup2_visualizer_osc_pane_g1

0xa7fc,	// (0x00055b1d) popup_number_entry_window_t1_ParamLimits

0xa80f,	// (0x00055b30) popup_number_entry_window_t2_ParamLimits

0xa821,	// (0x00055b42) popup_number_entry_window_t3_ParamLimits

0x10b5,	// (0x0004c3d6) popup_number_entry_window_t5_ParamLimits

0x10b5,	// (0x0004c3d6) popup_number_entry_window_t5

0xf045,	// (0x0005a366) popup_number_entry_window_t_ParamLimits

0xa833,	// (0x00055b54) text_title_cp2_ParamLimits

0x9da3,	// (0x000550c4) aid_hotspot_pointer_text2_pane

0x9dc9,	// (0x000550ea) main_viewer_pane_g9_ParamLimits

0x9dc9,	// (0x000550ea) main_viewer_pane_g9

0xb41b,	// (0x0005673c) cale_month_pane_t1_ParamLimits

0xb458,	// (0x00056779) bg_cale_pane_ParamLimits

0xb470,	// (0x00056791) list_cale_pane_ParamLimits

0xb481,	// (0x000567a2) listscroll_cale_day_pane_t1

0xb493,	// (0x000567b4) scroll_pane_cp09_ParamLimits

0x2d2e,	// (0x0004e04f) main_mup_eq_pane_t1_ParamLimits

0x2d2e,	// (0x0004e04f) main_mup_eq_pane_t1

0x2d48,	// (0x0004e069) main_mup_eq_pane_t2_ParamLimits

0x2d48,	// (0x0004e069) main_mup_eq_pane_t2

0x2d62,	// (0x0004e083) main_mup_eq_pane_t3_ParamLimits

0x2d62,	// (0x0004e083) main_mup_eq_pane_t3

0x2d7e,	// (0x0004e09f) main_mup_eq_pane_t4_ParamLimits

0x2d7e,	// (0x0004e09f) main_mup_eq_pane_t4

0x2d9a,	// (0x0004e0bb) main_mup_eq_pane_t5_ParamLimits

0x2d9a,	// (0x0004e0bb) main_mup_eq_pane_t5

0x2db6,	// (0x0004e0d7) main_mup_eq_pane_t6_ParamLimits

0x2db6,	// (0x0004e0d7) main_mup_eq_pane_t6

0x2dca,	// (0x0004e0eb) main_mup_eq_pane_t7_ParamLimits

0x2dca,	// (0x0004e0eb) main_mup_eq_pane_t7

0x2dde,	// (0x0004e0ff) main_mup_eq_pane_t8_ParamLimits

0x2dde,	// (0x0004e0ff) main_mup_eq_pane_t8

0x2df2,	// (0x0004e113) main_mup_eq_pane_t9_ParamLimits

0x2df2,	// (0x0004e113) main_mup_eq_pane_t9

0x2e0c,	// (0x0004e12d) main_mup_eq_pane_t10_ParamLimits

0x2e0c,	// (0x0004e12d) main_mup_eq_pane_t10

0x0009,

0xf3a4,	// (0x0005a6c5) main_mup_eq_pane_t_ParamLimits

0xf3a4,	// (0x0005a6c5) main_mup_eq_pane_t

0x2ebb,	// (0x0004e1dc) mup_equalizer_pane_cp5_ParamLimits

0x2ecf,	// (0x0004e1f0) mup_equalizer_pane_cp6_ParamLimits

0x2ee3,	// (0x0004e204) mup_equalizer_pane_cp7_ParamLimits

0xa7c4,	// (0x00055ae5) main_gallery_pane

0xcf3a,	// (0x0005825b) smil2_volume_pane

0xcf42,	// (0x00058263) smil_status_volume_pane_g1_ParamLimits

0xcf55,	// (0x00058276) smil_status_volume_pane_g2_ParamLimits

0x9e29,	// (0x0005514a) smil_status_volume_pane_g3_ParamLimits

0xf56d,	// (0x0005a88e) smil_status_volume_pane_g_ParamLimits

0xcafb,	// (0x00057e1c) bg_popup_window_pane_cp07_ParamLimits

0xd0db,	// (0x000583fc) blid_firmament_pane

0xa7ce,	// (0x00055aef) aid_size_cell_gallery_ParamLimits

0xa7ce,	// (0x00055aef) aid_size_cell_gallery

0xa7ce,	// (0x00055aef) grid_gallery_pane_ParamLimits

0xa7ce,	// (0x00055aef) grid_gallery_pane

0xcafb,	// (0x00057e1c) cell_gallery_pane_ParamLimits

0xcafb,	// (0x00057e1c) cell_gallery_pane

0xa7ce,	// (0x00055aef) bg_cell_gallery_focus_pane_ParamLimits

0xa7ce,	// (0x00055aef) bg_cell_gallery_focus_pane

0xaec5,	// (0x000561e6) cell_gallery_pane_g1_ParamLimits

0xaec5,	// (0x000561e6) cell_gallery_pane_g1

0xaec5,	// (0x000561e6) cell_gallery_pane_g2_ParamLimits

0xaec5,	// (0x000561e6) cell_gallery_pane_g2

0xaec5,	// (0x000561e6) cell_gallery_pane_g3_ParamLimits

0xaec5,	// (0x000561e6) cell_gallery_pane_g3

0xaed3,	// (0x000561f4) cell_gallery_pane_g4_ParamLimits

0xaed3,	// (0x000561f4) cell_gallery_pane_g4

0x0003,

0xf619,	// (0x0005a93a) cell_gallery_pane_g_ParamLimits

0xf619,	// (0x0005a93a) cell_gallery_pane_g

0xd227,	// (0x00058548) bg_cell_gallery_focus_pane_g1

0xd22f,	// (0x00058550) bg_cell_gallery_focus_pane_g2

0xd237,	// (0x00058558) bg_cell_gallery_focus_pane_g3

0xd23f,	// (0x00058560) bg_cell_gallery_focus_pane_g4

0xd247,	// (0x00058568) bg_cell_gallery_focus_pane_g5

0xd24f,	// (0x00058570) bg_cell_gallery_focus_pane_g6

0xd257,	// (0x00058578) bg_cell_gallery_focus_pane_g7

0xd25f,	// (0x00058580) bg_cell_gallery_focus_pane_g8

0x0007,

0xf622,	// (0x0005a943) bg_cell_gallery_focus_pane_g

0xd267,	// (0x00058588) aid_firma_cardinal

0xd27b,	// (0x0005859c) blid_firmament_pane_t1

0xd292,	// (0x000585b3) blid_firmament_pane_t2

0xd2a9,	// (0x000585ca) blid_firmament_pane_t3

0xd2c0,	// (0x000585e1) blid_firmament_pane_t4

0x0003,

0xf633,	// (0x0005a954) blid_firmament_pane_t

0xd2d7,	// (0x000585f8) blid_sat_info_pane

0xb131,	// (0x00056452) blid_sat_info_pane_g1

0xb131,	// (0x00056452) blid_sat_info_pane_g2

0x0001,

0xf398,	// (0x0005a6b9) blid_sat_info_pane_g

0xd2e7,	// (0x00058608) blid_sat_info_pane_t1

0xd2f5,	// (0x00058616) smil2_volume_content_pane

0xd2fe,	// (0x0005861f) smil2_volume_pane_g1

0xb071,	// (0x00056392) smil2_volume_content_pane_g1

0xd306,	// (0x00058627) smil2_volume_content_pane_g2

0xd30f,	// (0x00058630) smil2_volume_content_pane_g3

0xd318,	// (0x00058639) smil2_volume_content_pane_g4

0xd321,	// (0x00058642) smil2_volume_content_pane_g5

0xd32a,	// (0x0005864b) smil2_volume_content_pane_g6

0xd333,	// (0x00058654) smil2_volume_content_pane_g7

0xd33c,	// (0x0005865d) smil2_volume_content_pane_g8

0xd345,	// (0x00058666) smil2_volume_content_pane_g9

0xd34e,	// (0x0005866f) smil2_volume_content_pane_g10

0x0009,

0xf63c,	// (0x0005a95d) smil2_volume_content_pane_g

0x16f6,	// (0x0004ca17) cale_week_day_heading_pane_t1_ParamLimits

0x1720,	// (0x0004ca41) cale_week_day_heading_pane_t2_ParamLimits

0x174f,	// (0x0004ca70) cale_week_day_heading_pane_t3_ParamLimits

0x177e,	// (0x0004ca9f) cale_week_day_heading_pane_t4_ParamLimits

0x17ad,	// (0x0004cace) cale_week_day_heading_pane_t5_ParamLimits

0x17e4,	// (0x0004cb05) cale_week_day_heading_pane_t6_ParamLimits

0x181b,	// (0x0004cb3c) cale_week_day_heading_pane_t7_ParamLimits

0xf14c,	// (0x0005a46d) cale_week_day_heading_pane_t_ParamLimits

0xb0a9,	// (0x000563ca) bg_cale_side_pane_ParamLimits

0x1845,	// (0x0004cb66) cale_week_time_pane_t1_ParamLimits

0x185f,	// (0x0004cb80) cale_week_time_pane_t2_ParamLimits

0x1879,	// (0x0004cb9a) cale_week_time_pane_t3_ParamLimits

0x1893,	// (0x0004cbb4) cale_week_time_pane_t4_ParamLimits

0x18ad,	// (0x0004cbce) cale_week_time_pane_t5_ParamLimits

0x18c7,	// (0x0004cbe8) cale_week_time_pane_t6_ParamLimits

0x18e1,	// (0x0004cc02) cale_week_time_pane_t7_ParamLimits

0x18fb,	// (0x0004cc1c) cale_week_time_pane_t8_ParamLimits

0xf15b,	// (0x0005a47c) cale_week_time_pane_t_ParamLimits

0x191b,	// (0x0004cc3c) cell_cale_week_pane_g2_ParamLimits

0xb0a9,	// (0x000563ca) bg_cale_side_pane_cp01_ParamLimits

0x273a,	// (0x0004da5b) cale_month_week_pane_t1_ParamLimits

0x2753,	// (0x0004da74) cale_month_week_pane_t2_ParamLimits

0x276c,	// (0x0004da8d) cale_month_week_pane_t3_ParamLimits

0x2785,	// (0x0004daa6) cale_month_week_pane_t4_ParamLimits

0x279e,	// (0x0004dabf) cale_month_week_pane_t5_ParamLimits

0x27b7,	// (0x0004dad8) cale_month_week_pane_t6_ParamLimits

0xf229,	// (0x0005a54a) cale_month_week_pane_t_ParamLimits

0x9c5a,	// (0x00054f7b) cell_cale_month_pane_g1_ParamLimits

0xa7c4,	// (0x00055ae5) main_cale_event_viewer_pane

0xa7c4,	// (0x00055ae5) listscroll_cale_event_viewer_pane

0xd357,	// (0x00058678) list_cale_ev_pane

0xd35f,	// (0x00058680) scroll_pane_cp023

0xd36b,	// (0x0005868c) field_cale_ev_pane_ParamLimits

0xd36b,	// (0x0005868c) field_cale_ev_pane

0xd389,	// (0x000586aa) field_cale_ev_content_pane_ParamLimits

0xd389,	// (0x000586aa) field_cale_ev_content_pane

0xd395,	// (0x000586b6) field_cale_ev_pane_g1_ParamLimits

0xd395,	// (0x000586b6) field_cale_ev_pane_g1

0xd3a1,	// (0x000586c2) field_cale_ev_pane_g2_ParamLimits

0xd3a1,	// (0x000586c2) field_cale_ev_pane_g2

0xd3c7,	// (0x000586e8) field_cale_ev_pane_g3_ParamLimits

0xd3c7,	// (0x000586e8) field_cale_ev_pane_g3

0x0002,

0xf651,	// (0x0005a972) field_cale_ev_pane_g_ParamLimits

0xf651,	// (0x0005a972) field_cale_ev_pane_g

0xd3df,	// (0x00058700) field_cale_ev_pane_t1_ParamLimits

0xd3df,	// (0x00058700) field_cale_ev_pane_t1

0xd3f6,	// (0x00058717) field_cale_ev_content_pane_t1_ParamLimits

0xd3f6,	// (0x00058717) field_cale_ev_content_pane_t1

0xbcb8,	// (0x00056fd9) bg_button_pane_cp01

0x1423,	// (0x0004c744) listscroll_cale_week_pane_ParamLimits

0xb042,	// (0x00056363) popup_toolbar_window_cp01

0xb07a,	// (0x0005639b) listscroll_cale_week_pane_t1_ParamLimits

0x1423,	// (0x0004c744) listscroll_cale_day_pane_ParamLimits

0xb042,	// (0x00056363) popup_toolbar_window_cp02

0xb481,	// (0x000567a2) listscroll_cale_day_pane_t1_ParamLimits

0x1423,	// (0x0004c744) main_cale_month_pane_ParamLimits

0x9e14,	// (0x00055135) popup_toolbar_window_cp03_ParamLimits

0x9e14,	// (0x00055135) popup_toolbar_window_cp03

0x3196,	// (0x0004e4b7) main_image_pane_g2_ParamLimits

0x3196,	// (0x0004e4b7) main_image_pane_g2

0x31a7,	// (0x0004e4c8) main_image_pane_g3_ParamLimits

0x31a7,	// (0x0004e4c8) main_image_pane_g3

0x0002,

0xf436,	// (0x0005a757) main_image_pane_g_ParamLimits

0xf436,	// (0x0005a757) main_image_pane_g

0xbdd2,	// (0x000570f3) main_image_pane_t1_ParamLimits

0x31b8,	// (0x0004e4d9) main_image_pane_t2_ParamLimits

0x31b8,	// (0x0004e4d9) main_image_pane_t2

0x31ca,	// (0x0004e4eb) main_image_pane_t3_ParamLimits

0x31ca,	// (0x0004e4eb) main_image_pane_t3

0x31f2,	// (0x0004e513) main_image_pane_t4_ParamLimits

0x31f2,	// (0x0004e513) main_image_pane_t4

0x0003,

0xf43d,	// (0x0005a75e) main_image_pane_t_ParamLimits

0xf43d,	// (0x0005a75e) main_image_pane_t

0x3212,	// (0x0004e533) popup_image_details_window_cp01

0x321c,	// (0x0004e53d) popup_toobar_trans_pane_cp01_ParamLimits

0x321c,	// (0x0004e53d) popup_toobar_trans_pane_cp01

0x39d0,	// (0x0004ecf1) popup_image_details_window_ParamLimits

0x39d0,	// (0x0004ecf1) popup_image_details_window

0x9de7,	// (0x00055108) popup_image_focus_window

0x9e4b,	// (0x0005516c) camera2_autofocus_pane_ParamLimits

0x9e4b,	// (0x0005516c) camera2_autofocus_pane

0xa7c4,	// (0x00055ae5) bg_popup_sub_pane_cp06

0xd414,	// (0x00058735) popup_image_focus_window_g1

0xd41c,	// (0x0005873d) popup_image_focus_window_g2

0xd424,	// (0x00058745) popup_image_focus_window_g3

0xd42c,	// (0x0005874d) popup_image_focus_window_g4

0x0003,

0xf658,	// (0x0005a979) popup_image_focus_window_g

0xd434,	// (0x00058755) popup_image_focus_window_t1

0xd442,	// (0x00058763) popup_image_focus_window_t2

0xd452,	// (0x00058773) popup_image_focus_window_t3

0x0002,

0xf661,	// (0x0005a982) popup_image_focus_window_t

0xaec5,	// (0x000561e6) camera2_autofocus_pane_g1

0xa7ce,	// (0x00055aef) bg_tb_trans_pane_cp01

0xd460,	// (0x00058781) popup_image_details_window_g1

0xd473,	// (0x00058794) popup_image_details_window_g2

0x0002,

0xf673,	// (0x0005a994) popup_image_details_window_g

0xd49c,	// (0x000587bd) popup_image_details_window_t1

0xd4ae,	// (0x000587cf) popup_image_details_window_t2

0xd4c7,	// (0x000587e8) popup_image_details_window_t3

0xd4db,	// (0x000587fc) popup_image_details_window_t4

0xd4f6,	// (0x00058817) popup_image_details_window_t5

0x0004,

0xf67a,	// (0x0005a99b) popup_image_details_window_t

0xaf23,	// (0x00056244) bg_calc_paper_pane_ParamLimits

0xa7c4,	// (0x00055ae5) grid_highlight_pane_cp013

0x9bca,	// (0x00054eeb) list_calc_pane_ParamLimits

0x9bdc,	// (0x00054efd) scroll_pane_cp024

0xaf37,	// (0x00056258) bg_calc_display_pane_ParamLimits

0x1272,	// (0x0004c593) calc_display_pane_t1_ParamLimits

0x1284,	// (0x0004c5a5) calc_display_pane_t2_ParamLimits

0x9be4,	// (0x00054f05) calc_display_pane_t3_ParamLimits

0xf0cc,	// (0x0005a3ed) calc_display_pane_t_ParamLimits

0x133e,	// (0x0004c65f) cell_calc_pane_g2

0x0001,

0xf0e9,	// (0x0005a40a) cell_calc_pane_g

0x1347,	// (0x0004c668) cell_calc_pane_t1

0xaf8c,	// (0x000562ad) grid_highlight_pane_cp02_ParamLimits

0xafa2,	// (0x000562c3) toolbar_button_pane_cp01_ParamLimits

0xafa2,	// (0x000562c3) toolbar_button_pane_cp01

0xbe17,	// (0x00057138) temp_image_control_pane_ParamLimits

0xbe17,	// (0x00057138) temp_image_control_pane

0xa7ce,	// (0x00055aef) main_mp3_pane

0xd510,	// (0x00058831) temp_image_control_pane_g1_ParamLimits

0xd510,	// (0x00058831) temp_image_control_pane_g1

0xd51e,	// (0x0005883f) temp_image_control_pane_g2_ParamLimits

0xd51e,	// (0x0005883f) temp_image_control_pane_g2

0xd530,	// (0x00058851) temp_image_control_pane_g3_ParamLimits

0xd530,	// (0x00058851) temp_image_control_pane_g3

0x3e89,	// (0x0004f1aa) temp_image_control_pane_g4_ParamLimits

0x3e89,	// (0x0004f1aa) temp_image_control_pane_g4

0x0003,

0xf685,	// (0x0005a9a6) temp_image_control_pane_g_ParamLimits

0xf685,	// (0x0005a9a6) temp_image_control_pane_g

0xd510,	// (0x00058831) main_mp3_pane_g1

0x3e9c,	// (0x0004f1bd) main_mp3_pane_g2

0x0007,

0xf68e,	// (0x0005a9af) main_mp3_pane_g

0xd565,	// (0x00058886) main_mp3_pane_t1

0xaed3,	// (0x000561f4) main_camera_pane_g8_ParamLimits

0xaed3,	// (0x000561f4) main_camera_pane_g8

0x1ae9,	// (0x0004ce0a) main_video_pane_g7_ParamLimits

0x1ae9,	// (0x0004ce0a) main_video_pane_g7

0xb904,	// (0x00056c25) main_camera2_pane_t7_ParamLimits

0xb904,	// (0x00056c25) main_camera2_pane_t7

0xb239,	// (0x0005655a) scroll_pane_cp025_ParamLimits

0xb239,	// (0x0005655a) scroll_pane_cp025

0xb24d,	// (0x0005656e) scroll_pane_cp026_ParamLimits

0xb24d,	// (0x0005656e) scroll_pane_cp026

0xb25c,	// (0x0005657d) wml_content_pane_ParamLimits

0xa7c4,	// (0x00055ae5) main_touch_calib_pane

0x3f70,	// (0x0004f291) main_touch_calib_pane_g1

0x3f82,	// (0x0004f2a3) main_touch_calib_pane_g2

0x3f94,	// (0x0004f2b5) main_touch_calib_pane_g3

0x3fa6,	// (0x0004f2c7) main_touch_calib_pane_g4

0x0003,

0xf6ac,	// (0x0005a9cd) main_touch_calib_pane_g

0x3fb8,	// (0x0004f2d9) main_touch_calib_pane_t1

0x3fd2,	// (0x0004f2f3) main_touch_calib_pane_t2

0x0004,

0xf6b5,	// (0x0005a9d6) main_touch_calib_pane_t

0xb9d7,	// (0x00056cf8) mup_progress_pane_cp02

0xba0c,	// (0x00056d2d) navi_pane_g1

0xbac7,	// (0x00056de8) navi_pane_mp_t3

0xa7ce,	// (0x00055aef) main_mp3_pane_ParamLimits

0x3b5b,	// (0x0004ee7c) navi_pane_ParamLimits

0xd510,	// (0x00058831) main_mp3_pane_g1_ParamLimits

0x3e9c,	// (0x0004f1bd) main_mp3_pane_g2_ParamLimits

0x3eaa,	// (0x0004f1cb) main_mp3_pane_g3_ParamLimits

0x3eaa,	// (0x0004f1cb) main_mp3_pane_g3

0x3eb8,	// (0x0004f1d9) main_mp3_pane_g4_ParamLimits

0x3eb8,	// (0x0004f1d9) main_mp3_pane_g4

0xaec5,	// (0x000561e6) main_mp3_pane_g5_ParamLimits

0xaec5,	// (0x000561e6) main_mp3_pane_g5

0xd540,	// (0x00058861) main_mp3_pane_g6_ParamLimits

0xd540,	// (0x00058861) main_mp3_pane_g6

0xd54d,	// (0x0005886e) main_mp3_pane_g7_ParamLimits

0xd54d,	// (0x0005886e) main_mp3_pane_g7

0xd559,	// (0x0005887a) main_mp3_pane_g8_ParamLimits

0xd559,	// (0x0005887a) main_mp3_pane_g8

0xf68e,	// (0x0005a9af) main_mp3_pane_g_ParamLimits

0x3ec4,	// (0x0004f1e5) main_mp3_pane_t2

0x3ed2,	// (0x0004f1f3) main_mp3_pane_t3

0xd573,	// (0x00058894) main_mp3_pane_t4

0xd581,	// (0x000588a2) main_mp3_pane_t5

0x0005,

0xf69f,	// (0x0005a9c0) main_mp3_pane_t

0xd58f,	// (0x000588b0) mup_progress_pane_cp01

0x9b79,	// (0x00054e9a) aid_zoom_text_secondary2

0xd357,	// (0x00058678) list_cale_ev2_pane

0xd35f,	// (0x00058680) scroll_pane_cp023_ParamLimits

0x4028,	// (0x0004f349) field_cale_ev2_pane_ParamLimits

0x4028,	// (0x0004f349) field_cale_ev2_pane

0x9e91,	// (0x000551b2) field_cale_ev2_pane_g1_ParamLimits

0x9e91,	// (0x000551b2) field_cale_ev2_pane_g1

0x9e9d,	// (0x000551be) field_cale_ev2_pane_g2_ParamLimits

0x9e9d,	// (0x000551be) field_cale_ev2_pane_g2

0x9eb5,	// (0x000551d6) field_cale_ev2_pane_g3_ParamLimits

0x9eb5,	// (0x000551d6) field_cale_ev2_pane_g3

0x0003,

0xf6c0,	// (0x0005a9e1) field_cale_ev2_pane_g_ParamLimits

0xf6c0,	// (0x0005a9e1) field_cale_ev2_pane_g

0x9ed9,	// (0x000551fa) field_cale_ev2_pane_t1_ParamLimits

0x9ed9,	// (0x000551fa) field_cale_ev2_pane_t1

0x9ef0,	// (0x00055211) field_cale_ev2_pane_t2_ParamLimits

0x9ef0,	// (0x00055211) field_cale_ev2_pane_t2

0x0001,

0xf6c9,	// (0x0005a9ea) field_cale_ev2_pane_t_ParamLimits

0xf6c9,	// (0x0005a9ea) field_cale_ev2_pane_t

0x304a,	// (0x0004e36b) main_postcard_pane_g5_ParamLimits

0x304a,	// (0x0004e36b) main_postcard_pane_g5

0x3060,	// (0x0004e381) main_postcard_pane_g6_ParamLimits

0x3060,	// (0x0004e381) main_postcard_pane_g6

0xa7ce,	// (0x00055aef) camera2_autofocus_pane_cp_ParamLimits

0xa7ce,	// (0x00055aef) camera2_autofocus_pane_cp

0xa7ce,	// (0x00055aef) main_mup3_pane

0x408d,	// (0x0004f3ae) main_mup3_pane_g1_ParamLimits

0x408d,	// (0x0004f3ae) main_mup3_pane_g1

0x40af,	// (0x0004f3d0) main_mup3_pane_g2_ParamLimits

0x40af,	// (0x0004f3d0) main_mup3_pane_g2

0x412f,	// (0x0004f450) main_mup3_pane_g3_ParamLimits

0x412f,	// (0x0004f450) main_mup3_pane_g3

0x4175,	// (0x0004f496) main_mup3_pane_g4_ParamLimits

0x4175,	// (0x0004f496) main_mup3_pane_g4

0x41bb,	// (0x0004f4dc) main_mup3_pane_g5_ParamLimits

0x41bb,	// (0x0004f4dc) main_mup3_pane_g5

0x4201,	// (0x0004f522) main_mup3_pane_g6_ParamLimits

0x4201,	// (0x0004f522) main_mup3_pane_g6

0xaed3,	// (0x000561f4) main_mup3_pane_g7_ParamLimits

0xaed3,	// (0x000561f4) main_mup3_pane_g7

0x0007,

0xf6d9,	// (0x0005a9fa) main_mup3_pane_g_ParamLimits

0xf6d9,	// (0x0005a9fa) main_mup3_pane_g

0x427f,	// (0x0004f5a0) main_mup3_pane_t1_ParamLimits

0x427f,	// (0x0004f5a0) main_mup3_pane_t1

0x42f3,	// (0x0004f614) main_mup3_pane_t2_ParamLimits

0x42f3,	// (0x0004f614) main_mup3_pane_t2

0x43c7,	// (0x0004f6e8) main_mup3_pane_t4_ParamLimits

0x43c7,	// (0x0004f6e8) main_mup3_pane_t4

0x441d,	// (0x0004f73e) main_mup3_pane_t5_ParamLimits

0x441d,	// (0x0004f73e) main_mup3_pane_t5

0x44d9,	// (0x0004f7fa) main_mup3_pane_t6_ParamLimits

0x44d9,	// (0x0004f7fa) main_mup3_pane_t6

0x0005,

0xf6ea,	// (0x0005aa0b) main_mup3_pane_t_ParamLimits

0xf6ea,	// (0x0005aa0b) main_mup3_pane_t

0x4591,	// (0x0004f8b2) mup3_progress_pane_ParamLimits

0x4591,	// (0x0004f8b2) mup3_progress_pane

0x461d,	// (0x0004f93e) popup_mup3_control_window_ParamLimits

0x461d,	// (0x0004f93e) popup_mup3_control_window

0xd597,	// (0x000588b8) popup_mup3_text_window

0x464f,	// (0x0004f970) mup3_progress_pane_t1

0x466e,	// (0x0004f98f) mup3_progress_pane_t2

0xd59f,	// (0x000588c0) mup3_progress_pane_t3

0x0002,

0xf6f7,	// (0x0005aa18) mup3_progress_pane_t

0xd5bc,	// (0x000588dd) mup_progress_pane_cp03

0xa7c4,	// (0x00055ae5) bg_tb_trans_pane_cp04

0x468d,	// (0x0004f9ae) mup3_volume_pane

0x4695,	// (0x0004f9b6) popup_mup3_control_window_g1

0x469e,	// (0x0004f9bf) mup3_volume_pane_g1

0x46a7,	// (0x0004f9c8) mup3_volume_pane_g2

0x46b0,	// (0x0004f9d1) mup3_volume_pane_g3

0x0002,

0xf6fe,	// (0x0005aa1f) mup3_volume_pane_g

0xa7c4,	// (0x00055ae5) bg_tb_trans_pane_cp03

0xd5cc,	// (0x000588ed) popup_mup3_text_window_g1

0xd5d4,	// (0x000588f5) popup_mup3_text_window_t1

0xaf7f,	// (0x000562a0) list_calc_item_pane_g1_ParamLimits

0xd051,	// (0x00058372) mup_volume_pane_cp_g1

0x3fec,	// (0x0004f30d) main_touch_calib_pane_t3

0x4000,	// (0x0004f321) main_touch_calib_pane_t4

0x4014,	// (0x0004f335) main_touch_calib_pane_t5

0x9b55,	// (0x00054e76) aid_cell_size_toolbar2

0x9b5d,	// (0x00054e7e) aid_popup3_width_pane

0x9b69,	// (0x00054e8a) aid_zoom_text_msg_primary

0x19c4,	// (0x0004cce5) vorec_t7

0xaf43,	// (0x00056264) bg_calc_paper_pane_g1_ParamLimits

0xaf4f,	// (0x00056270) bg_calc_paper_pane_g2_ParamLimits

0xaf5b,	// (0x0005627c) bg_calc_paper_pane_g3_ParamLimits

0xaf67,	// (0x00056288) bg_calc_paper_pane_g4_ParamLimits

0xaf73,	// (0x00056294) bg_calc_paper_pane_g5_ParamLimits

0x12cb,	// (0x0004c5ec) bg_calc_paper_pane_g6_ParamLimits

0x12da,	// (0x0004c5fb) bg_calc_paper_pane_g7_ParamLimits

0x12e9,	// (0x0004c60a) bg_calc_paper_pane_g8_ParamLimits

0xf0d3,	// (0x0005a3f4) bg_calc_paper_pane_g_ParamLimits

0x12fc,	// (0x0004c61d) calc_bg_paper_pane_g9_ParamLimits

0xa7ce,	// (0x00055aef) image_qvga_pane_ParamLimits

0xa7ce,	// (0x00055aef) image_qvga_pane

0xae4a,	// (0x0005616b) bg_popup_sub_pane_cp04_ParamLimits

0xbd4e,	// (0x0005706f) popup_mup_playback_window_g1_ParamLimits

0xbd5a,	// (0x0005707b) popup_mup_playback_window_t1_ParamLimits

0xbd6f,	// (0x00057090) popup_mup_playback_window_t2_ParamLimits

0xf431,	// (0x0005a752) popup_mup_playback_window_t_ParamLimits

0xaed3,	// (0x000561f4) main_mup2_pane_g3_ParamLimits

0xaed3,	// (0x000561f4) main_mup2_pane_g3

0x1cf0,	// (0x0004d011) popup_toolbar_window_cp04

0xc164,	// (0x00057485) popup_call2_audio_second_window_g3_ParamLimits

0xc164,	// (0x00057485) popup_call2_audio_second_window_g3

0xc57c,	// (0x0005789d) popup_call2_audio_first_window_g4_ParamLimits

0xc57c,	// (0x0005789d) popup_call2_audio_first_window_g4

0xcbb1,	// (0x00057ed2) popup_call2_audio_in_window_g4_ParamLimits

0xcbb1,	// (0x00057ed2) popup_call2_audio_in_window_g4

0x3178,	// (0x0004e499) aid_area_sk_bg_cut_ParamLimits

0x3178,	// (0x0004e499) aid_area_sk_bg_cut

0xbd84,	// (0x000570a5) aid_area_sk_bg_cut_2_ParamLimits

0xbd84,	// (0x000570a5) aid_area_sk_bg_cut_2

0xa7c4,	// (0x00055ae5) aid_placing_details_win

0xa7c4,	// (0x00055ae5) aid_placing_details_win_2

0xaec5,	// (0x000561e6) camera2_autofocus_pane_g1_ParamLimits

0x0ffc,	// (0x0004c31d) popup_fixed_preview_cale_window_ParamLimits

0x0ffc,	// (0x0004c31d) popup_fixed_preview_cale_window

0xbb45,	// (0x00056e66) navi_slider_pane_g3

0xbb4e,	// (0x00056e6f) navi_slider_pane_g4

0xbb57,	// (0x00056e78) navi_slider_pane_g5

0xbb45,	// (0x00056e66) navi_slider_pane_g6

0x9d00,	// (0x00055021) navi_slider_pane_g7

0xbc85,	// (0x00056fa6) mup_scale_pane_g3

0xbc8e,	// (0x00056faf) mup_scale_pane_g4

0xbc97,	// (0x00056fb8) mup_scale_pane_g5

0x2ef7,	// (0x0004e218) mup_scale_pane_g6

0x2f00,	// (0x0004e221) mup_scale_pane_g7

0xb131,	// (0x00056452) cams2_slider_pane_g3

0xb131,	// (0x00056452) cams2_slider_pane_g4

0xb131,	// (0x00056452) cams2_slider_pane_g5

0xb131,	// (0x00056452) cams2_slider_pane_g6

0xb131,	// (0x00056452) cams2_slider_pane_g7

0xb131,	// (0x00056452) camera2_autofocus_pane_cp_g1

0xcec1,	// (0x000581e2) bg_popup_preview_window_pane_cp02_ParamLimits

0xcec1,	// (0x000581e2) bg_popup_preview_window_pane_cp02

0xd5e2,	// (0x00058903) list_fp_cale_pane_ParamLimits

0xd5e2,	// (0x00058903) list_fp_cale_pane

0xd5ee,	// (0x0005890f) popup_fixed_preview_cale_window_t1_ParamLimits

0xd5ee,	// (0x0005890f) popup_fixed_preview_cale_window_t1

0x46b9,	// (0x0004f9da) popup_fixed_preview_cale_window_t2_ParamLimits

0x46b9,	// (0x0004f9da) popup_fixed_preview_cale_window_t2

0x46ce,	// (0x0004f9ef) popup_fixed_preview_cale_window_t3_ParamLimits

0x46ce,	// (0x0004f9ef) popup_fixed_preview_cale_window_t3

0x0002,

0xf705,	// (0x0005aa26) popup_fixed_preview_cale_window_t_ParamLimits

0xf705,	// (0x0005aa26) popup_fixed_preview_cale_window_t

0x46e3,	// (0x0004fa04) list_single_fp_cale_pane_ParamLimits

0x46e3,	// (0x0004fa04) list_single_fp_cale_pane

0xd60c,	// (0x0005892d) list_single_fp_cale_pane_g1_ParamLimits

0xd60c,	// (0x0005892d) list_single_fp_cale_pane_g1

0xd618,	// (0x00058939) list_single_fp_cale_pane_g2_ParamLimits

0xd618,	// (0x00058939) list_single_fp_cale_pane_g2

0x0002,

0xf70c,	// (0x0005aa2d) list_single_fp_cale_pane_g_ParamLimits

0xf70c,	// (0x0005aa2d) list_single_fp_cale_pane_g

0xd631,	// (0x00058952) list_single_fp_cale_pane_t1_ParamLimits

0xd631,	// (0x00058952) list_single_fp_cale_pane_t1

0xd643,	// (0x00058964) list_single_fp_cale_pane_t2_ParamLimits

0xd643,	// (0x00058964) list_single_fp_cale_pane_t2

0x0001,

0xf713,	// (0x0005aa34) list_single_fp_cale_pane_t_ParamLimits

0xf713,	// (0x0005aa34) list_single_fp_cale_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0xa7c4,	// (0x00055ae5) main_dialer_pane

0xa7c4,	// (0x00055ae5) aid_cell_size_keypad

0xa7c4,	// (0x00055ae5) dialer_ne_pane

0xa7c4,	// (0x00055ae5) grid_dialer_command_1_pane

0xa7c4,	// (0x00055ae5) grid_dialer_command_2_pane

0xa7c4,	// (0x00055ae5) grid_dialer_keypad_pane

0x46f9,	// (0x0004fa1a) bg_popup_call_pane_cp06_ParamLimits

0x46f9,	// (0x0004fa1a) bg_popup_call_pane_cp06

0x46f9,	// (0x0004fa1a) dialer_ne_clear_pane_ParamLimits

0x46f9,	// (0x0004fa1a) dialer_ne_clear_pane

0xb131,	// (0x00056452) dialer_ne_pane_g1

0xb904,	// (0x00056c25) dialer_ne_pane_t1_ParamLimits

0xb904,	// (0x00056c25) dialer_ne_pane_t1

0x4707,	// (0x0004fa28) dialer_ne_pane_t2_ParamLimits

0x4707,	// (0x0004fa28) dialer_ne_pane_t2

0x472f,	// (0x0004fa50) dialer_ne_pane_t3_ParamLimits

0x472f,	// (0x0004fa50) dialer_ne_pane_t3

0x0002,

0xf718,	// (0x0005aa39) dialer_ne_pane_t_ParamLimits

0xf718,	// (0x0005aa39) dialer_ne_pane_t

0x472f,	// (0x0004fa50) dialer_ne_pane_t3_copy1_ParamLimits

0x472f,	// (0x0004fa50) dialer_ne_pane_t3_copy1

0xd676,	// (0x00058997) cell_dialer_keypad_pane_ParamLimits

0xd676,	// (0x00058997) cell_dialer_keypad_pane

0xa7ce,	// (0x00055aef) cell_dialer_command_1_pane_ParamLimits

0xa7ce,	// (0x00055aef) cell_dialer_command_1_pane

0xd68d,	// (0x000589ae) cell_dialer_command_2_pane_ParamLimits

0xd68d,	// (0x000589ae) cell_dialer_command_2_pane

0xa7ce,	// (0x00055aef) bg_button_pane_cp02_ParamLimits

0xa7ce,	// (0x00055aef) bg_button_pane_cp02

0xaec5,	// (0x000561e6) cell_dialer_keypad_pane_g1_ParamLimits

0xaec5,	// (0x000561e6) cell_dialer_keypad_pane_g1

0xa7ce,	// (0x00055aef) bg_button_pane_cp03_ParamLimits

0xa7ce,	// (0x00055aef) bg_button_pane_cp03

0xaec5,	// (0x000561e6) cell_dialer_command_1_pane_g1_ParamLimits

0xaec5,	// (0x000561e6) cell_dialer_command_1_pane_g1

0xa7c4,	// (0x00055ae5) bg_button_pane_cp04

0xb131,	// (0x00056452) cell_dialer_command_2_pane_g1

0xa7c4,	// (0x00055ae5) bg_button_pane_cp06

0xb131,	// (0x00056452) dialer_ne_clear_pane_g1

0xba18,	// (0x00056d39) navi_pane_g2

0xba46,	// (0x00056d67) navi_pane_g3

0x0002,

0xf334,	// (0x0005a655) navi_pane_g

0xbad5,	// (0x00056df6) navi_pane_mv_g2

0xbafc,	// (0x00056e1d) navi_pane_mv_g5

0x2cda,	// (0x0004dffb) navi_pane_mv_t1

0xaf37,	// (0x00056258) main_clock2_pane

0xa7ce,	// (0x00055aef) main_clock2_list_pane_ParamLimits

0xa7ce,	// (0x00055aef) main_clock2_list_pane

0x47c5,	// (0x0004fae6) main_clock2_pane_t1_ParamLimits

0x47c5,	// (0x0004fae6) main_clock2_pane_t1

0x4800,	// (0x0004fb21) main_clock2_pane_t2_ParamLimits

0x4800,	// (0x0004fb21) main_clock2_pane_t2

0x0004,

0xf724,	// (0x0005aa45) main_clock2_pane_t_ParamLimits

0xf724,	// (0x0005aa45) main_clock2_pane_t

0x48a0,	// (0x0004fbc1) popup_clock_analogue_window_cp03_ParamLimits

0x48a0,	// (0x0004fbc1) popup_clock_analogue_window_cp03

0x48c5,	// (0x0004fbe6) popup_clock_digital_window_cp02_ParamLimits

0x48c5,	// (0x0004fbe6) popup_clock_digital_window_cp02

0x493e,	// (0x0004fc5f) main_clock2_list_single_pane_ParamLimits

0x493e,	// (0x0004fc5f) main_clock2_list_single_pane

0xb0fb,	// (0x0005641c) list_highlight_pane_cp05

0xd6d0,	// (0x000589f1) main_clock2_list_single_pane_t1

0x1cf0,	// (0x0004d011) popup_toolbar_window_cp04_ParamLimits

0xaed3,	// (0x000561f4) camera2_autofocus_pane_g2_ParamLimits

0xaed3,	// (0x000561f4) camera2_autofocus_pane_g2

0xaed3,	// (0x000561f4) camera2_autofocus_pane_g3_ParamLimits

0xaed3,	// (0x000561f4) camera2_autofocus_pane_g3

0xaed3,	// (0x000561f4) camera2_autofocus_pane_g4_ParamLimits

0xaed3,	// (0x000561f4) camera2_autofocus_pane_g4

0xaed3,	// (0x000561f4) camera2_autofocus_pane_g5_ParamLimits

0xaed3,	// (0x000561f4) camera2_autofocus_pane_g5

0x0004,

0xf668,	// (0x0005a989) camera2_autofocus_pane_g_ParamLimits

0xf668,	// (0x0005a989) camera2_autofocus_pane_g

0x4049,	// (0x0004f36a) camera2_autofocus_pane_cp_g2

0x4051,	// (0x0004f372) camera2_autofocus_pane_cp_g3

0x4059,	// (0x0004f37a) camera2_autofocus_pane_cp_g4

0x4061,	// (0x0004f382) camera2_autofocus_pane_cp_g5

0x0004,

0xf6ce,	// (0x0005a9ef) camera2_autofocus_pane_cp_g

0xa7c4,	// (0x00055ae5) popup_dialer_spcha_window

0xa7c4,	// (0x00055ae5) bg_popup_sub_pane_cp07

0xa7c4,	// (0x00055ae5) list_spcha_pane

0xd6de,	// (0x000589ff) list_single_spcha_pane_ParamLimits

0xd6de,	// (0x000589ff) list_single_spcha_pane

0xa7c4,	// (0x00055ae5) list_highlight_pane_cp06

0xb664,	// (0x00056985) list_single_spcha_pane_t1

0xc94d,	// (0x00057c6e) popup_call2_audio_out_window_g4_ParamLimits

0xc94d,	// (0x00057c6e) popup_call2_audio_out_window_g4

0xa7c4,	// (0x00055ae5) main_imed2_pane

0x9def,	// (0x00055110) popup_imed_adjust2_window

0x39e8,	// (0x0004ed09) popup_imed_trans_window_ParamLimits

0x39e8,	// (0x0004ed09) popup_imed_trans_window

0xd126,	// (0x00058447) popup_blid_sat_info2_window_t1

0xd134,	// (0x00058455) popup_blid_sat_info2_window_t2

0x000a,

0xf5fd,	// (0x0005a91e) popup_blid_sat_info2_window_t

0x49ef,	// (0x0004fd10) aid_size_cell_colour_35

0x4a0f,	// (0x0004fd30) aid_size_cell_colour_112

0x4a2f,	// (0x0004fd50) aid_size_cell_effect

0xbc15,	// (0x00056f36) bg_tb_trans_pane_cp02

0xb58a,	// (0x000568ab) heading_imed_pane

0x4a4f,	// (0x0004fd70) listscroll_imed_pane

0xd6f0,	// (0x00058a11) heading_imed_pane_g1

0xd6f8,	// (0x00058a19) heading_imed_pane_t1

0xd706,	// (0x00058a27) grid_imed_colour_35_pane_ParamLimits

0xd706,	// (0x00058a27) grid_imed_colour_35_pane

0x4a5b,	// (0x0004fd7c) grid_imed_effect_pane

0xd71e,	// (0x00058a3f) list_imed_aspect_pane

0x4a71,	// (0x0004fd92) scroll_pane_cp027_ParamLimits

0x4a71,	// (0x0004fd92) scroll_pane_cp027

0x4a82,	// (0x0004fda3) cell_imed_effect_pane_ParamLimits

0x4a82,	// (0x0004fda3) cell_imed_effect_pane

0xd726,	// (0x00058a47) cell_imed_colour_pane_ParamLimits

0xd726,	// (0x00058a47) cell_imed_colour_pane

0xd768,	// (0x00058a89) cell_imed_colour_pane_g1_ParamLimits

0xd768,	// (0x00058a89) cell_imed_colour_pane_g1

0xd779,	// (0x00058a9a) hgihlgiht_grid_pane_cp016_ParamLimits

0xd779,	// (0x00058a9a) hgihlgiht_grid_pane_cp016

0x4aa9,	// (0x0004fdca) cell_imed_effect_pane_g1

0x4ab1,	// (0x0004fdd2) grid_highlight_pane_cp017

0xd78a,	// (0x00058aab) list_imed_single_pane_ParamLimits

0xd78a,	// (0x00058aab) list_imed_single_pane

0xa7c4,	// (0x00055ae5) list_highlight_pane_cp07

0xd79f,	// (0x00058ac0) list_imed_aspect_pane_comp1_t1

0xbc15,	// (0x00056f36) bg_tb_trans_pane_cp05

0xd7c1,	// (0x00058ae2) popup_imed_adjust2_window_g1

0xd7e8,	// (0x00058b09) popup_imed_adjust2_window_t1

0xd800,	// (0x00058b21) slider_imed_adjust_pane

0xd814,	// (0x00058b35) slider_imed_adjust_pane_g1

0xd824,	// (0x00058b45) slider_imed_adjust_pane_g2

0xd834,	// (0x00058b55) slider_imed_adjust_pane_g3

0xd845,	// (0x00058b66) slider_imed_adjust_pane_g4

0x0003,

0xf741,	// (0x0005aa62) slider_imed_adjust_pane_g

0x4aba,	// (0x0004fddb) aid_size_cell_clipart2

0x4ac6,	// (0x0004fde7) grid_imed_clipart_pane

0xd856,	// (0x00058b77) scroll_pane_cp031

0x4ad0,	// (0x0004fdf1) cell_imed_clipart_pane_ParamLimits

0x4ad0,	// (0x0004fdf1) cell_imed_clipart_pane

0x4af2,	// (0x0004fe13) cell_imed_clipart_pane_g1

0xa7c4,	// (0x00055ae5) grid_highlight_pane_cp014

0x47a1,	// (0x0004fac2) main_clock2_pane_g1_ParamLimits

0x47a1,	// (0x0004fac2) main_clock2_pane_g1

0x48e5,	// (0x0004fc06) aid_call2_pane_cp10

0x48f7,	// (0x0004fc18) aid_call_pane_cp10

0xb977,	// (0x00056c98) popup_clock_analogue_window_cp10_g1

0xb977,	// (0x00056c98) popup_clock_analogue_window_cp10_g2

0x4909,	// (0x0004fc2a) popup_clock_analogue_window_cp10_g3

0x4909,	// (0x0004fc2a) popup_clock_analogue_window_cp10_g4

0xb977,	// (0x00056c98) popup_clock_analogue_window_cp10_g5

0x0004,

0xf72f,	// (0x0005aa50) popup_clock_analogue_window_cp10_g

0x491f,	// (0x0004fc40) popup_clock_analogue_window_cp10_t1

0x4950,	// (0x0004fc71) clock_digital_number_pane_cp10_ParamLimits

0x4950,	// (0x0004fc71) clock_digital_number_pane_cp10

0x4968,	// (0x0004fc89) clock_digital_number_pane_cp11_ParamLimits

0x4968,	// (0x0004fc89) clock_digital_number_pane_cp11

0x4980,	// (0x0004fca1) clock_digital_number_pane_cp12_ParamLimits

0x4980,	// (0x0004fca1) clock_digital_number_pane_cp12

0x499a,	// (0x0004fcbb) clock_digital_number_pane_cp13_ParamLimits

0x499a,	// (0x0004fcbb) clock_digital_number_pane_cp13

0x49b4,	// (0x0004fcd5) clock_digital_separator_pane_cp10_ParamLimits

0x49b4,	// (0x0004fcd5) clock_digital_separator_pane_cp10

0x49ce,	// (0x0004fcef) popup_clock_digital_window_cp02_t1_ParamLimits

0x49ce,	// (0x0004fcef) popup_clock_digital_window_cp02_t1

0xae42,	// (0x00056163) clock_digital_number_pane_cp10_g1

0xae42,	// (0x00056163) clock_digital_number_pane_cp10_g2

0x0001,

0xf74a,	// (0x0005aa6b) clock_digital_number_pane_cp10_g

0xae42,	// (0x00056163) clock_digital_separator_pane_cp10_g1

0xae42,	// (0x00056163) clock_digital_separator_pane_g2_cp10

0xbb04,	// (0x00056e25) navi_pane_vded_g4

0xbb0d,	// (0x00056e2e) navi_pane_vded_g5

0xbb16,	// (0x00056e37) navi_pane_vded_t1

0xa7c4,	// (0x00055ae5) main_vded_pane

0x4afb,	// (0x0004fe1c) main_vded_pane_g1

0x4b05,	// (0x0004fe26) main_vded_pane_g2

0x4b0f,	// (0x0004fe30) main_vded_pane_g3

0x0002,

0xf74f,	// (0x0005aa70) main_vded_pane_g

0x4b19,	// (0x0004fe3a) main_vded_pane_t1

0x4b27,	// (0x0004fe48) main_vded_pane_t2

0x0001,

0xf756,	// (0x0005aa77) main_vded_pane_t

0x4b35,	// (0x0004fe56) vded_slider_pane

0x4b3d,	// (0x0004fe5e) vded_video_pane

0xd85e,	// (0x00058b7f) vded_video_pane_g1

0x4b45,	// (0x0004fe66) vded_video_pane_g2

0xb131,	// (0x00056452) vded_video_pane_g3

0x0002,

0xf75b,	// (0x0005aa7c) vded_video_pane_g

0xd868,	// (0x00058b89) vded_slider_pane_g1

0xd051,	// (0x00058372) vded_slider_pane_g2

0xd871,	// (0x00058b92) vded_slider_pane_g3

0xd87a,	// (0x00058b9b) vded_slider_pane_g4

0xd883,	// (0x00058ba4) vded_slider_pane_g5

0x0004,

0xf762,	// (0x0005aa83) vded_slider_pane_g

0x4605,	// (0x0004f926) mup3_rocker_pane_ParamLimits

0x4605,	// (0x0004f926) mup3_rocker_pane

0x4b4e,	// (0x0004fe6f) mup3_control_keys_pane_g1

0x4b56,	// (0x0004fe77) mup3_control_keys_pane_g2

0x4b5e,	// (0x0004fe7f) mup3_control_keys_pane_g3

0x4b66,	// (0x0004fe87) mup3_control_keys_pane_g4

0x0003,

0xf76d,	// (0x0005aa8e) mup3_control_keys_pane_g

0x1033,	// (0x0004c354) popup_toolbar2_fixed_window_cp01_ParamLimits

0x1033,	// (0x0004c354) popup_toolbar2_fixed_window_cp01

0x4639,	// (0x0004f95a) popup_toolbar2_fixed_window_cp02_ParamLimits

0x4639,	// (0x0004f95a) popup_toolbar2_fixed_window_cp02

0xc2d6,	// (0x000575f7) popup_call2_audio_second_window_t4_ParamLimits

0xc2d6,	// (0x000575f7) popup_call2_audio_second_window_t4

0xc812,	// (0x00057b33) popup_call2_audio_first_window_t6_ParamLimits

0xc812,	// (0x00057b33) popup_call2_audio_first_window_t6

0xca50,	// (0x00057d71) popup_call2_audio_out_window_t6_ParamLimits

0xca50,	// (0x00057d71) popup_call2_audio_out_window_t6

0xa7c4,	// (0x00055ae5) main_vitu_pane

0xa7ce,	// (0x00055aef) aid_size_cell_itu_ParamLimits

0xa7ce,	// (0x00055aef) aid_size_cell_itu

0xa7ce,	// (0x00055aef) bg_popup_window_pane_cp08_ParamLimits

0xa7ce,	// (0x00055aef) bg_popup_window_pane_cp08

0xa7ce,	// (0x00055aef) field_vitu_entry_pane_ParamLimits

0xa7ce,	// (0x00055aef) field_vitu_entry_pane

0xa7ce,	// (0x00055aef) grid_vitu_function_pane_ParamLimits

0xa7ce,	// (0x00055aef) grid_vitu_function_pane

0xa7ce,	// (0x00055aef) grid_vitu_itu_pane_ParamLimits

0xa7ce,	// (0x00055aef) grid_vitu_itu_pane

0xa7ce,	// (0x00055aef) cell_vitu_itu_pane_ParamLimits

0xa7ce,	// (0x00055aef) cell_vitu_itu_pane

0xa7ce,	// (0x00055aef) cell_vitu_function_pane_ParamLimits

0xa7ce,	// (0x00055aef) cell_vitu_function_pane

0xa7ce,	// (0x00055aef) bg_popup_sub_pane_cp08_ParamLimits

0xa7ce,	// (0x00055aef) bg_popup_sub_pane_cp08

0xb103,	// (0x00056424) field_vitu_entry_pane_t1_ParamLimits

0xb103,	// (0x00056424) field_vitu_entry_pane_t1

0xd88c,	// (0x00058bad) field_vitu_entry_pane_t2_ParamLimits

0xd88c,	// (0x00058bad) field_vitu_entry_pane_t2

0x0001,

0xf776,	// (0x0005aa97) field_vitu_entry_pane_t_ParamLimits

0xf776,	// (0x0005aa97) field_vitu_entry_pane_t

0xcafb,	// (0x00057e1c) bg_button_pane_cp05_ParamLimits

0xcafb,	// (0x00057e1c) bg_button_pane_cp05

0xd8a9,	// (0x00058bca) cell_vitu_itu_pane_g1

0xbc01,	// (0x00056f22) cell_vitu_itu_pane_t1_ParamLimits

0xbc01,	// (0x00056f22) cell_vitu_itu_pane_t1

0xbc01,	// (0x00056f22) cell_vitu_itu_pane_t2_ParamLimits

0xbc01,	// (0x00056f22) cell_vitu_itu_pane_t2

0x0002,

0xf77b,	// (0x0005aa9c) cell_vitu_itu_pane_t_ParamLimits

0xf77b,	// (0x0005aa9c) cell_vitu_itu_pane_t

0xa7c4,	// (0x00055ae5) bg_button_pane_cp07

0xb131,	// (0x00056452) cell_vitu_function_pane_g1

0x9bc2,	// (0x00054ee3) main_calc_pane_g1

0x0ec1,	// (0x0004c1e2) aid_visual_content_pane

0xa7c4,	// (0x00055ae5) main_vradio_pane

0xaec5,	// (0x000561e6) main_vradio_pane_g1_ParamLimits

0xaec5,	// (0x000561e6) main_vradio_pane_g1

0xaed3,	// (0x000561f4) main_vradio_pane_g2_ParamLimits

0xaed3,	// (0x000561f4) main_vradio_pane_g2

0x0001,

0xf782,	// (0x0005aaa3) main_vradio_pane_g_ParamLimits

0xf782,	// (0x0005aaa3) main_vradio_pane_g

0xb103,	// (0x00056424) main_vradio_pane_t1_ParamLimits

0xb103,	// (0x00056424) main_vradio_pane_t1

0xb103,	// (0x00056424) main_vradio_pane_t2_ParamLimits

0xb103,	// (0x00056424) main_vradio_pane_t2

0xb904,	// (0x00056c25) main_vradio_pane_t3_ParamLimits

0xb904,	// (0x00056c25) main_vradio_pane_t3

0x0002,

0xf787,	// (0x0005aaa8) main_vradio_pane_t_ParamLimits

0xf787,	// (0x0005aaa8) main_vradio_pane_t

0xa7ce,	// (0x00055aef) vradio_rocker_control_pane_ParamLimits

0xa7ce,	// (0x00055aef) vradio_rocker_control_pane

0xa7ce,	// (0x00055aef) vradio_station_info_pane_ParamLimits

0xa7ce,	// (0x00055aef) vradio_station_info_pane

0xa7ce,	// (0x00055aef) vradio_frequency_info_pane_ParamLimits

0xa7ce,	// (0x00055aef) vradio_frequency_info_pane

0xb131,	// (0x00056452) vradio_station_info_pane_g1

0xbc01,	// (0x00056f22) vradio_station_info_pane_t1_ParamLimits

0xbc01,	// (0x00056f22) vradio_station_info_pane_t1

0xb904,	// (0x00056c25) vradio_station_info_pane_t2_ParamLimits

0xb904,	// (0x00056c25) vradio_station_info_pane_t2

0x0001,

0xf78e,	// (0x0005aaaf) vradio_station_info_pane_t_ParamLimits

0xf78e,	// (0x0005aaaf) vradio_station_info_pane_t

0xa7c4,	// (0x00055ae5) vradio_tuning_pane

0x4b76,	// (0x0004fe97) vradio_rocker_control_pane_g1

0xd8c5,	// (0x00058be6) vradio_rocker_control_pane_g2

0x4b80,	// (0x0004fea1) vradio_rocker_control_pane_g3

0x4b8a,	// (0x0004feab) vradio_rocker_control_pane_g4

0x4b94,	// (0x0004feb5) vradio_rocker_control_pane_g5

0x0004,

0xf793,	// (0x0005aab4) vradio_rocker_control_pane_g

0xb131,	// (0x00056452) vradio_frequency_info_pane_g1

0xb103,	// (0x00056424) vradio_frequency_info_pane_t1_ParamLimits

0xb103,	// (0x00056424) vradio_frequency_info_pane_t1

0x4b9e,	// (0x0004febf) vradio_tuning_pane_g1

0x4ba9,	// (0x0004feca) vradio_tuning_pane_t1

0x9b81,	// (0x00054ea2) area_side_right_pane_ParamLimits

0x9b81,	// (0x00054ea2) area_side_right_pane

0xce88,	// (0x000581a9) status_small_pane_g1

0xce90,	// (0x000581b1) status_small_pane_g2

0xce99,	// (0x000581ba) status_small_pane_g3

0xcea2,	// (0x000581c3) status_small_pane_g4

0x0003,

0xf55f,	// (0x0005a880) status_small_pane_g

0xceab,	// (0x000581cc) status_small_pane_t1

0xa7c4,	// (0x00055ae5) main_video3_pane

0xd8cd,	// (0x00058bee) cams_zoom_vslider_pane

0xd8d5,	// (0x00058bf6) image3_wide_pane_ParamLimits

0xd8d5,	// (0x00058bf6) image3_wide_pane

0xd8ef,	// (0x00058c10) image3_wide_small_pane

0xd8fb,	// (0x00058c1c) main_video3_pane_g1_ParamLimits

0xd8fb,	// (0x00058c1c) main_video3_pane_g1

0xd917,	// (0x00058c38) main_video3_pane_g2_ParamLimits

0xd917,	// (0x00058c38) main_video3_pane_g2

0x0001,

0xf79e,	// (0x0005aabf) main_video3_pane_g_ParamLimits

0xf79e,	// (0x0005aabf) main_video3_pane_g

0xd933,	// (0x00058c54) main_video3_pane_t1_ParamLimits

0xd933,	// (0x00058c54) main_video3_pane_t1

0xd95e,	// (0x00058c7f) main_video3_pane_t2_ParamLimits

0xd95e,	// (0x00058c7f) main_video3_pane_t2

0xd989,	// (0x00058caa) main_video3_pane_t3_ParamLimits

0xd989,	// (0x00058caa) main_video3_pane_t3

0x0002,

0xf7a3,	// (0x0005aac4) main_video3_pane_t_ParamLimits

0xf7a3,	// (0x0005aac4) main_video3_pane_t

0xd9b6,	// (0x00058cd7) cams_zoom_vslider_pane_g1

0xd9bf,	// (0x00058ce0) cams_zoom_vslider_pane_g2

0x0001,

0xf7aa,	// (0x0005aacb) cams_zoom_vslider_pane_g

0xd9c7,	// (0x00058ce8) small_slider_vertical_pane

0xb131,	// (0x00056452) small_slider_vertical_pane_g1

0xb131,	// (0x00056452) small_slider_vertical_pane_g2

0xd9cf,	// (0x00058cf0) small_slider_vertical_pane_g3

0x0002,

0xf7af,	// (0x0005aad0) small_slider_vertical_pane_g

0xa7c4,	// (0x00055ae5) main_hwr_training_pane

0xd9d8,	// (0x00058cf9) hwr_training_instruct_pane_ParamLimits

0xd9d8,	// (0x00058cf9) hwr_training_instruct_pane

0x4bb8,	// (0x0004fed9) hwr_training_navi_pane_ParamLimits

0x4bb8,	// (0x0004fed9) hwr_training_navi_pane

0x4bd7,	// (0x0004fef8) hwr_training_write_pane_ParamLimits

0x4bd7,	// (0x0004fef8) hwr_training_write_pane

0xa7c4,	// (0x00055ae5) bg_frame_shadow_pane

0xda0f,	// (0x00058d30) hwr_training_write_pane_g1

0xda17,	// (0x00058d38) hwr_training_write_pane_g2

0xda1f,	// (0x00058d40) hwr_training_write_pane_g3

0xda27,	// (0x00058d48) hwr_training_write_pane_g4

0xda2f,	// (0x00058d50) hwr_training_write_pane_g5

0xda37,	// (0x00058d58) hwr_training_write_pane_g6

0xda3f,	// (0x00058d60) hwr_training_write_pane_g7

0x0006,

0xf7b6,	// (0x0005aad7) hwr_training_write_pane_g

0x9f05,	// (0x00055226) hwr_training_navi_pane_g1_ParamLimits

0x9f05,	// (0x00055226) hwr_training_navi_pane_g1

0x9f17,	// (0x00055238) hwr_training_navi_pane_g2_ParamLimits

0x9f17,	// (0x00055238) hwr_training_navi_pane_g2

0x9f29,	// (0x0005524a) hwr_training_navi_pane_g3_ParamLimits

0x9f29,	// (0x0005524a) hwr_training_navi_pane_g3

0x9f39,	// (0x0005525a) hwr_training_navi_pane_g4_ParamLimits

0x9f39,	// (0x0005525a) hwr_training_navi_pane_g4

0x0004,

0xf7c5,	// (0x0005aae6) hwr_training_navi_pane_g_ParamLimits

0xf7c5,	// (0x0005aae6) hwr_training_navi_pane_g

0x9f46,	// (0x00055267) hwr_training_navi_pane_t1

0x4c21,	// (0x0004ff42) list_single_hwr_training_instruct_pane_ParamLimits

0x4c21,	// (0x0004ff42) list_single_hwr_training_instruct_pane

0xda47,	// (0x00058d68) list_single_hwr_training_instruct_pane_t1

0xd227,	// (0x00058548) bg_frame_shadow_pane_g1

0xda56,	// (0x00058d77) bg_frame_shadow_pane_g2

0xda5e,	// (0x00058d7f) bg_frame_shadow_pane_g3

0xda66,	// (0x00058d87) bg_frame_shadow_pane_g4

0xda6e,	// (0x00058d8f) bg_frame_shadow_pane_g5

0xda76,	// (0x00058d97) bg_frame_shadow_pane_g6

0xda7e,	// (0x00058d9f) bg_frame_shadow_pane_g7

0xafe6,	// (0x00056307) bg_frame_shadow_pane_g8

0x0007,

0xf7d0,	// (0x0005aaf1) bg_frame_shadow_pane_g

0xa7c4,	// (0x00055ae5) main_video_tele_dialer_pane

0x4c37,	// (0x0004ff58) aid_size_cell_video_keypad_ParamLimits

0x4c37,	// (0x0004ff58) aid_size_cell_video_keypad

0x4c51,	// (0x0004ff72) grid_video_dialer_keypad_pane_ParamLimits

0x4c51,	// (0x0004ff72) grid_video_dialer_keypad_pane

0x4c9f,	// (0x0004ffc0) video_down_pane_cp_ParamLimits

0x4c9f,	// (0x0004ffc0) video_down_pane_cp

0x4cd1,	// (0x0004fff2) cell_video_dialer_keypad_pane_ParamLimits

0x4cd1,	// (0x0004fff2) cell_video_dialer_keypad_pane

0xda86,	// (0x00058da7) bg_button_pane_cp08_ParamLimits

0xda86,	// (0x00058da7) bg_button_pane_cp08

0x4cf3,	// (0x00050014) cell_video_dialer_keypad_pane_g1_ParamLimits

0x4cf3,	// (0x00050014) cell_video_dialer_keypad_pane_g1

0x45ef,	// (0x0004f910) mup3_rocker2_pane_ParamLimits

0x45ef,	// (0x0004f910) mup3_rocker2_pane

0xb131,	// (0x00056452) mup3_rocker2_pane_g1

0x38d7,	// (0x0004ebf8) main_dialer2_pane

0xa7c4,	// (0x00055ae5) main_mp4_pane

0x9f72,	// (0x00055293) main_mp4_pane_g1_ParamLimits

0x9f72,	// (0x00055293) main_mp4_pane_g1

0x9f72,	// (0x00055293) main_mp4_pane_g2_ParamLimits

0x9f72,	// (0x00055293) main_mp4_pane_g2

0x4d2d,	// (0x0005004e) main_mp4_pane_g3_ParamLimits

0x4d2d,	// (0x0005004e) main_mp4_pane_g3

0x9f80,	// (0x000552a1) main_mp4_pane_g4_ParamLimits

0x9f80,	// (0x000552a1) main_mp4_pane_g4

0x9fae,	// (0x000552cf) main_mp4_pane_g5_ParamLimits

0x9fae,	// (0x000552cf) main_mp4_pane_g5

0x0007,

0xf7f0,	// (0x0005ab11) main_mp4_pane_g_ParamLimits

0xf7f0,	// (0x0005ab11) main_mp4_pane_g

0xa022,	// (0x00055343) main_mp4_pane_t1_ParamLimits

0xa022,	// (0x00055343) main_mp4_pane_t1

0xa07e,	// (0x0005539f) main_mp4_pane_t2_ParamLimits

0xa07e,	// (0x0005539f) main_mp4_pane_t2

0xda92,	// (0x00058db3) main_mp4_pane_t3_ParamLimits

0xda92,	// (0x00058db3) main_mp4_pane_t3

0xa0d0,	// (0x000553f1) main_mp4_pane_t4_ParamLimits

0xa0d0,	// (0x000553f1) main_mp4_pane_t4

0x0003,

0xf801,	// (0x0005ab22) main_mp4_pane_t_ParamLimits

0xf801,	// (0x0005ab22) main_mp4_pane_t

0xa114,	// (0x00055435) mp4_progress_pane_ParamLimits

0xa114,	// (0x00055435) mp4_progress_pane

0xa15e,	// (0x0005547f) mp4_rocker_pane_ParamLimits

0xa15e,	// (0x0005547f) mp4_rocker_pane

0xdac0,	// (0x00058de1) mp4_progress_pane_t1

0xdad9,	// (0x00058dfa) mp4_progress_pane_t2

0x0001,

0xf80a,	// (0x0005ab2b) mp4_progress_pane_t

0xdaf2,	// (0x00058e13) mup_progress_pane_cp04

0xb131,	// (0x00056452) mp4_rocker_pane_g1

0x4d69,	// (0x0005008a) aid_cell_size_keypad2_ParamLimits

0x4d69,	// (0x0005008a) aid_cell_size_keypad2

0x4d7f,	// (0x000500a0) dialer2_ne_pane_ParamLimits

0x4d7f,	// (0x000500a0) dialer2_ne_pane

0x4d99,	// (0x000500ba) grid_dialer2_keypad_pane_ParamLimits

0x4d99,	// (0x000500ba) grid_dialer2_keypad_pane

0xcafb,	// (0x00057e1c) bg_popup_call_pane_cp07_ParamLimits

0xcafb,	// (0x00057e1c) bg_popup_call_pane_cp07

0x4db5,	// (0x000500d6) dialer2_ne_pane_t1_ParamLimits

0x4db5,	// (0x000500d6) dialer2_ne_pane_t1

0x4df1,	// (0x00050112) cell_dialer2_keypad_pane_ParamLimits

0x4df1,	// (0x00050112) cell_dialer2_keypad_pane

0xdb17,	// (0x00058e38) bg_button_pane_pane_cp04_ParamLimits

0xdb17,	// (0x00058e38) bg_button_pane_pane_cp04

0x4e13,	// (0x00050134) cell_dialer2_keypad_pane_g1_ParamLimits

0x4e13,	// (0x00050134) cell_dialer2_keypad_pane_g1

0x1bc4,	// (0x0004cee5) aid_placing_vt_set_content_ParamLimits

0x1bc4,	// (0x0004cee5) aid_placing_vt_set_content

0x1bec,	// (0x0004cf0d) aid_placing_vt_set_title_ParamLimits

0x1bec,	// (0x0004cf0d) aid_placing_vt_set_title

0xa7c4,	// (0x00055ae5) main_image3_pane

0x4ed9,	// (0x000501fa) area_side_right_pane_cp01_ParamLimits

0x4ed9,	// (0x000501fa) area_side_right_pane_cp01

0x9f72,	// (0x00055293) main_image3_pane_g1_ParamLimits

0x9f72,	// (0x00055293) main_image3_pane_g1

0x4ef0,	// (0x00050211) main_image3_pane_g2_ParamLimits

0x4ef0,	// (0x00050211) main_image3_pane_g2

0x4f18,	// (0x00050239) main_image3_pane_g3_ParamLimits

0x4f18,	// (0x00050239) main_image3_pane_g3

0x4f42,	// (0x00050263) main_image3_pane_g4_ParamLimits

0x4f42,	// (0x00050263) main_image3_pane_g4

0x0003,

0xf819,	// (0x0005ab3a) main_image3_pane_g_ParamLimits

0xf819,	// (0x0005ab3a) main_image3_pane_g

0x4f6c,	// (0x0005028d) main_image3_pane_t1_ParamLimits

0x4f6c,	// (0x0005028d) main_image3_pane_t1

0x4fc4,	// (0x000502e5) main_image3_pane_t2_ParamLimits

0x4fc4,	// (0x000502e5) main_image3_pane_t2

0x5016,	// (0x00050337) main_image3_pane_t3_ParamLimits

0x5016,	// (0x00050337) main_image3_pane_t3

0x0003,

0xf822,	// (0x0005ab43) main_image3_pane_t_ParamLimits

0xf822,	// (0x0005ab43) main_image3_pane_t

0xa7ce,	// (0x00055aef) grid_sctrl_middle_pane_cp01_ParamLimits

0xa7ce,	// (0x00055aef) grid_sctrl_middle_pane_cp01

0x509e,	// (0x000503bf) cell_sctrl_middle_pane_cp01_ParamLimits

0x509e,	// (0x000503bf) cell_sctrl_middle_pane_cp01

0x50bb,	// (0x000503dc) cell_sctrl_middle_pane_cp01_g1_ParamLimits

0x50bb,	// (0x000503dc) cell_sctrl_middle_pane_cp01_g1

0xa7c4,	// (0x00055ae5) main_call4_pane

0x50d1,	// (0x000503f2) aid_size_button_call4_ParamLimits

0x50d1,	// (0x000503f2) aid_size_button_call4

0x5104,	// (0x00050425) call4_windows_pane_ParamLimits

0x5104,	// (0x00050425) call4_windows_pane

0x5123,	// (0x00050444) grid_call4_button_pane_ParamLimits

0x5123,	// (0x00050444) grid_call4_button_pane

0x5156,	// (0x00050477) call4_windows_conf_pane

0x516b,	// (0x0005048c) popup_call4_audio_first_window_ParamLimits

0x516b,	// (0x0005048c) popup_call4_audio_first_window

0x51bb,	// (0x000504dc) popup_call4_audio_second_window_ParamLimits

0x51bb,	// (0x000504dc) popup_call4_audio_second_window

0x51d2,	// (0x000504f3) popup_call4_audio_wait_window_ParamLimits

0x51d2,	// (0x000504f3) popup_call4_audio_wait_window

0x51e0,	// (0x00050501) cell_call4_button_pane_ParamLimits

0x51e0,	// (0x00050501) cell_call4_button_pane

0x5205,	// (0x00050526) bg_button_pane_cp09_ParamLimits

0x5205,	// (0x00050526) bg_button_pane_cp09

0x5211,	// (0x00050532) cell_call4_button_pane_g1_ParamLimits

0x5211,	// (0x00050532) cell_call4_button_pane_g1

0x5237,	// (0x00050558) cell_call4_button_pane_t1_ParamLimits

0x5237,	// (0x00050558) cell_call4_button_pane_t1

0xdb2b,	// (0x00058e4c) popup_call4_audio_conf_window_ParamLimits

0xdb2b,	// (0x00058e4c) popup_call4_audio_conf_window

0x464f,	// (0x0004f970) mup3_progress_pane_t1_ParamLimits

0x466e,	// (0x0004f98f) mup3_progress_pane_t2_ParamLimits

0xd59f,	// (0x000588c0) mup3_progress_pane_t3_ParamLimits

0xf6f7,	// (0x0005aa18) mup3_progress_pane_t_ParamLimits

0xd5bc,	// (0x000588dd) mup_progress_pane_cp03_ParamLimits

0x4b6e,	// (0x0004fe8f) mup3_control_keys_pane_g4_copy1

0xa142,	// (0x00055463) mp4_rocker2_pane_ParamLimits

0xa142,	// (0x00055463) mp4_rocker2_pane

0xdb3f,	// (0x00058e60) mp4_rocker2_pane_g1

0xdb47,	// (0x00058e68) mp4_rocker2_pane_g2

0xa1e2,	// (0x00055503) mp4_rocker2_pane_g3

0xa1ea,	// (0x0005550b) mp4_rocker2_pane_g4

0xa1f2,	// (0x00055513) mp4_rocker2_pane_g5

0x0004,

0xf82b,	// (0x0005ab4c) mp4_rocker2_pane_g

0xa7c4,	// (0x00055ae5) main_camera4_pane

0xa7c4,	// (0x00055ae5) main_video4_pane

0x4c6d,	// (0x0004ff8e) main_video_tele_dialer_pane_t1_ParamLimits

0x4c6d,	// (0x0004ff8e) main_video_tele_dialer_pane_t1

0x4c86,	// (0x0004ffa7) main_video_tele_dialer_pane_t2_ParamLimits

0x4c86,	// (0x0004ffa7) main_video_tele_dialer_pane_t2

0x0001,

0xf7e1,	// (0x0005ab02) main_video_tele_dialer_pane_t_ParamLimits

0xf7e1,	// (0x0005ab02) main_video_tele_dialer_pane_t

0x5279,	// (0x0005059a) cam4_autofocus_pane_ParamLimits

0x5279,	// (0x0005059a) cam4_autofocus_pane

0x528f,	// (0x000505b0) cam4_image_uncrop_pane_ParamLimits

0x528f,	// (0x000505b0) cam4_image_uncrop_pane

0x52a9,	// (0x000505ca) cam4_indicators_pane_ParamLimits

0x52a9,	// (0x000505ca) cam4_indicators_pane

0x52d4,	// (0x000505f5) main_camera4_pane_g1_ParamLimits

0x52d4,	// (0x000505f5) main_camera4_pane_g1

0x52e6,	// (0x00050607) main_camera4_pane_g2_ParamLimits

0x52e6,	// (0x00050607) main_camera4_pane_g2

0x52f9,	// (0x0005061a) main_camera4_pane_g3_ParamLimits

0x52f9,	// (0x0005061a) main_camera4_pane_g3

0x530c,	// (0x0005062d) main_camera4_pane_g4_ParamLimits

0x530c,	// (0x0005062d) main_camera4_pane_g4

0x531f,	// (0x00050640) main_camera4_pane_g5_ParamLimits

0x531f,	// (0x00050640) main_camera4_pane_g5

0x0005,

0xf836,	// (0x0005ab57) main_camera4_pane_g_ParamLimits

0xf836,	// (0x0005ab57) main_camera4_pane_g

0x5343,	// (0x00050664) main_camera4_pane_t1_ParamLimits

0x5343,	// (0x00050664) main_camera4_pane_t1

0xaec5,	// (0x000561e6) bg_tb_trans_pane_cp06

0xa21e,	// (0x0005553f) cam4_indicators_pane_g1

0xa22f,	// (0x00055550) cam4_indicators_pane_g2

0x0002,

0xf851,	// (0x0005ab72) cam4_indicators_pane_g

0xa247,	// (0x00055568) cam4_indicators_pane_t1

0x53a7,	// (0x000506c8) main_video4_pane_g1_ParamLimits

0x53a7,	// (0x000506c8) main_video4_pane_g1

0x53b6,	// (0x000506d7) main_video4_pane_g2_ParamLimits

0x53b6,	// (0x000506d7) main_video4_pane_g2

0x53c5,	// (0x000506e6) main_video4_pane_g3_ParamLimits

0x53c5,	// (0x000506e6) main_video4_pane_g3

0x53d4,	// (0x000506f5) main_video4_pane_g4_ParamLimits

0x53d4,	// (0x000506f5) main_video4_pane_g4

0x0004,

0xf858,	// (0x0005ab79) main_video4_pane_g_ParamLimits

0xf858,	// (0x0005ab79) main_video4_pane_g

0x53f2,	// (0x00050713) vid4_indicators_pane_ParamLimits

0x53f2,	// (0x00050713) vid4_indicators_pane

0x5420,	// (0x00050741) video4_image_uncrop_cif_pane_ParamLimits

0x5420,	// (0x00050741) video4_image_uncrop_cif_pane

0x543a,	// (0x0005075b) video4_image_uncrop_nhd_pane_ParamLimits

0x543a,	// (0x0005075b) video4_image_uncrop_nhd_pane

0x528f,	// (0x000505b0) video4_image_uncrop_vga_pane_ParamLimits

0x528f,	// (0x000505b0) video4_image_uncrop_vga_pane

0xa7ce,	// (0x00055aef) bg_tb_trans_pane_cp07

0xa271,	// (0x00055592) vid4_indicators_pane_g1

0xa285,	// (0x000555a6) vid4_indicators_pane_g2

0xa299,	// (0x000555ba) vid4_indicators_pane_g3

0x0004,

0xf863,	// (0x0005ab84) vid4_indicators_pane_g

0xa2c6,	// (0x000555e7) vid4_indicators_pane_t1

0x544e,	// (0x0005076f) cam4_autofocus_pane_g1

0x5456,	// (0x00050777) cam4_autofocus_pane_g2

0x545e,	// (0x0005077f) cam4_autofocus_pane_g3

0x0002,

0xf86e,	// (0x0005ab8f) cam4_autofocus_pane_g

0x5466,	// (0x00050787) cam4_autofocus_pane_g3_copy1

0x4cb5,	// (0x0004ffd6) video_down_pane_cp_t1

0x4cc3,	// (0x0004ffe4) video_down_pane_cp_t2

0x0001,

0xf7e6,	// (0x0005ab07) video_down_pane_cp_t

0xa7ce,	// (0x00055aef) popup_vitu2_window_ParamLimits

0xa7ce,	// (0x00055aef) popup_vitu2_window

0x546e,	// (0x0005078f) aid_size_cell2_itu2_ParamLimits

0x546e,	// (0x0005078f) aid_size_cell2_itu2

0x5494,	// (0x000507b5) aid_size_cell_itu2_ParamLimits

0x5494,	// (0x000507b5) aid_size_cell_itu2

0x46f9,	// (0x0004fa1a) bg_popup_window_pane_cp09_ParamLimits

0x46f9,	// (0x0004fa1a) bg_popup_window_pane_cp09

0x54f0,	// (0x00050811) field_vitu2_entry_pane_ParamLimits

0x54f0,	// (0x00050811) field_vitu2_entry_pane

0x5516,	// (0x00050837) grid_vitu2_function_pane_ParamLimits

0x5516,	// (0x00050837) grid_vitu2_function_pane

0x5567,	// (0x00050888) grid_vitu2_itu_pane_ParamLimits

0x5567,	// (0x00050888) grid_vitu2_itu_pane

0x55fd,	// (0x0005091e) cell_vitu2_itu_pane_ParamLimits

0x55fd,	// (0x0005091e) cell_vitu2_itu_pane

0x5629,	// (0x0005094a) cell_vitu2_function_pane_ParamLimits

0x5629,	// (0x0005094a) cell_vitu2_function_pane

0xdb4f,	// (0x00058e70) bg_popup_call_pane_cp08_ParamLimits

0xdb4f,	// (0x00058e70) bg_popup_call_pane_cp08

0xdb66,	// (0x00058e87) field_vitu2_entry_pane_g1

0xdb72,	// (0x00058e93) field_vitu2_entry_pane_g2

0x0002,

0xf875,	// (0x0005ab96) field_vitu2_entry_pane_g

0x06a4,	// (0x0004b9c5) field_vitu2_entry_pane_t1_ParamLimits

0x06a4,	// (0x0004b9c5) field_vitu2_entry_pane_t1

0xa2dd,	// (0x000555fe) field_vitu2_entry_pane_t2_ParamLimits

0xa2dd,	// (0x000555fe) field_vitu2_entry_pane_t2

0x0001,

0xf87c,	// (0x0005ab9d) field_vitu2_entry_pane_t_ParamLimits

0xf87c,	// (0x0005ab9d) field_vitu2_entry_pane_t

0x5668,	// (0x00050989) bg_button_pane_cp010_ParamLimits

0x5668,	// (0x00050989) bg_button_pane_cp010

0x5676,	// (0x00050997) cell_vitu2_itu_pane_g1

0x569c,	// (0x000509bd) cell_vitu2_itu_pane_t1_ParamLimits

0x569c,	// (0x000509bd) cell_vitu2_itu_pane_t1

0x06d6,	// (0x0004b9f7) cell_vitu2_itu_pane_t2_ParamLimits

0x06d6,	// (0x0004b9f7) cell_vitu2_itu_pane_t2

0x0002,

0xf886,	// (0x0005aba7) cell_vitu2_itu_pane_t_ParamLimits

0xf886,	// (0x0005aba7) cell_vitu2_itu_pane_t

0xa7ce,	// (0x00055aef) bg_button_pane_cp011

0x56fa,	// (0x00050a1b) cell_vitu2_function_pane_g1

0xa7c4,	// (0x00055ae5) main_myfav_hc_pane

0x5066,	// (0x00050387) popup_image3_note_pane_ParamLimits

0x5066,	// (0x00050387) popup_image3_note_pane

0x5082,	// (0x000503a3) popup_image3_tool_bar_pane_ParamLimits

0x5082,	// (0x000503a3) popup_image3_tool_bar_pane

0x0764,	// (0x0004ba85) cell_vitu2_itu_pane_t3_ParamLimits

0x0764,	// (0x0004ba85) cell_vitu2_itu_pane_t3

0xa7c4,	// (0x00055ae5) bg_popup_trans_pane

0xdb86,	// (0x00058ea7) grid_image3_tool_bar_pane

0xdb90,	// (0x00058eb1) bg_popup_trans_pane_g1

0xb342,	// (0x00056663) bg_popup_trans_pane_g2

0xdb98,	// (0x00058eb9) bg_popup_trans_pane_g3

0xdba0,	// (0x00058ec1) bg_popup_trans_pane_g4

0xdba8,	// (0x00058ec9) bg_popup_trans_pane_g5

0xdbb0,	// (0x00058ed1) bg_popup_trans_pane_g6

0xdbb8,	// (0x00058ed9) bg_popup_trans_pane_g7

0xdbc0,	// (0x00058ee1) bg_popup_trans_pane_g8

0xb322,	// (0x00056643) bg_popup_trans_pane_g9

0x0008,

0xf88d,	// (0x0005abae) bg_popup_trans_pane_g

0xdbc8,	// (0x00058ee9) cell_image3_tool_bar_pane_ParamLimits

0xdbc8,	// (0x00058ee9) cell_image3_tool_bar_pane

0xb131,	// (0x00056452) cell_image3_tool_bar_pane_g1

0xa7c4,	// (0x00055ae5) bg_popup_trans_pane_cp1

0xdbdc,	// (0x00058efd) popup_image3_note_pane_t1

0xdbea,	// (0x00058f0b) popup_image3_note_pane_t2

0xdbf8,	// (0x00058f19) popup_image3_note_pane_t3

0x0002,

0xf8a0,	// (0x0005abc1) popup_image3_note_pane_t

0xdc06,	// (0x00058f27) popup_image3_note_pane_t3_copy1

0x570d,	// (0x00050a2e) bg_myfav_hc_instruction_pane_ParamLimits

0x570d,	// (0x00050a2e) bg_myfav_hc_instruction_pane

0x5721,	// (0x00050a42) cell_myfav_contact_pane_ParamLimits

0x5721,	// (0x00050a42) cell_myfav_contact_pane

0x573f,	// (0x00050a60) cell_myfav_contact_pane_cp1_ParamLimits

0x573f,	// (0x00050a60) cell_myfav_contact_pane_cp1

0x5757,	// (0x00050a78) cell_myfav_contact_pane_cp2_ParamLimits

0x5757,	// (0x00050a78) cell_myfav_contact_pane_cp2

0x576f,	// (0x00050a90) cell_myfav_contact_pane_cp3_ParamLimits

0x576f,	// (0x00050a90) cell_myfav_contact_pane_cp3

0x5786,	// (0x00050aa7) cell_myfav_contact_pane_cp4_ParamLimits

0x5786,	// (0x00050aa7) cell_myfav_contact_pane_cp4

0x579e,	// (0x00050abf) cell_myfav_contact_pane_cp5_ParamLimits

0x579e,	// (0x00050abf) cell_myfav_contact_pane_cp5

0x57b2,	// (0x00050ad3) cell_myfav_contact_pane_cp6_ParamLimits

0x57b2,	// (0x00050ad3) cell_myfav_contact_pane_cp6

0x57c8,	// (0x00050ae9) cell_myfav_contact_pane_cp7_ParamLimits

0x57c8,	// (0x00050ae9) cell_myfav_contact_pane_cp7

0xdc14,	// (0x00058f35) listscroll_gen_pane_cp05

0x57e2,	// (0x00050b03) main_myfav_hc_pane_g1_ParamLimits

0x57e2,	// (0x00050b03) main_myfav_hc_pane_g1

0x57fc,	// (0x00050b1d) main_myfav_hc_pane_g2_ParamLimits

0x57fc,	// (0x00050b1d) main_myfav_hc_pane_g2

0x0002,

0xf8a7,	// (0x0005abc8) main_myfav_hc_pane_g_ParamLimits

0xf8a7,	// (0x0005abc8) main_myfav_hc_pane_g

0x582e,	// (0x00050b4f) main_myfav_hc_pane_t1_ParamLimits

0x582e,	// (0x00050b4f) main_myfav_hc_pane_t1

0xdc1d,	// (0x00058f3e) main_myfav_hc_pane_t2_ParamLimits

0xdc1d,	// (0x00058f3e) main_myfav_hc_pane_t2

0xdc2f,	// (0x00058f50) main_myfav_hc_pane_t3_ParamLimits

0xdc2f,	// (0x00058f50) main_myfav_hc_pane_t3

0x5845,	// (0x00050b66) main_myfav_hc_pane_t4_ParamLimits

0x5845,	// (0x00050b66) main_myfav_hc_pane_t4

0x0004,

0xf8ae,	// (0x0005abcf) main_myfav_hc_pane_t_ParamLimits

0xf8ae,	// (0x0005abcf) main_myfav_hc_pane_t

0xb131,	// (0x00056452) bg_myfav_hc_instruction_pane_g1

0xdc41,	// (0x00058f62) cell_myfav_contact_pane_g1_ParamLimits

0xdc41,	// (0x00058f62) cell_myfav_contact_pane_g1

0xdc41,	// (0x00058f62) cell_myfav_contact_pane_g2_ParamLimits

0xdc41,	// (0x00058f62) cell_myfav_contact_pane_g2

0xdc4d,	// (0x00058f6e) cell_myfav_contact_pane_g3_ParamLimits

0xdc4d,	// (0x00058f6e) cell_myfav_contact_pane_g3

0xaed3,	// (0x000561f4) cell_myfav_contact_pane_g4_ParamLimits

0xaed3,	// (0x000561f4) cell_myfav_contact_pane_g4

0xdc5a,	// (0x00058f7b) cell_myfav_contact_pane_g5_ParamLimits

0xdc5a,	// (0x00058f7b) cell_myfav_contact_pane_g5

0x0004,

0xf8b9,	// (0x0005abda) cell_myfav_contact_pane_g_ParamLimits

0xf8b9,	// (0x0005abda) cell_myfav_contact_pane_g

0x5816,	// (0x00050b37) main_myfav_hc_pane_g3_ParamLimits

0x5816,	// (0x00050b37) main_myfav_hc_pane_g3

0x05db,	// (0x0004b8fc) popup_adpt_find_window

0x586d,	// (0x00050b8e) afind_page_pane_ParamLimits

0x586d,	// (0x00050b8e) afind_page_pane

0x5883,	// (0x00050ba4) aid_size_cell_afind_ParamLimits

0x5883,	// (0x00050ba4) aid_size_cell_afind

0x58a1,	// (0x00050bc2) bg_popup_sub_pane_cp09_ParamLimits

0x58a1,	// (0x00050bc2) bg_popup_sub_pane_cp09

0x58b3,	// (0x00050bd4) find_pane_cp01_ParamLimits

0x58b3,	// (0x00050bd4) find_pane_cp01

0xdc7b,	// (0x00058f9c) grid_afind_control_pane_ParamLimits

0xdc7b,	// (0x00058f9c) grid_afind_control_pane

0x58c7,	// (0x00050be8) grid_afind_pane_ParamLimits

0x58c7,	// (0x00050be8) grid_afind_pane

0x58e9,	// (0x00050c0a) cell_afind_pane_ParamLimits

0x58e9,	// (0x00050c0a) cell_afind_pane

0xb131,	// (0x00056452) afind_page_pane_g1

0x5950,	// (0x00050c71) afind_page_pane_g2

0x5958,	// (0x00050c79) afind_page_pane_g3

0x0002,

0xf8c4,	// (0x0005abe5) afind_page_pane_g

0x5960,	// (0x00050c81) afind_page_pane_t1

0xdca1,	// (0x00058fc2) cell_afind_grid_control_pane_ParamLimits

0xdca1,	// (0x00058fc2) cell_afind_grid_control_pane

0xdb17,	// (0x00058e38) bg_button_pane_cp69_ParamLimits

0xdb17,	// (0x00058e38) bg_button_pane_cp69

0x596e,	// (0x00050c8f) cell_afind_pane_g1_ParamLimits

0x596e,	// (0x00050c8f) cell_afind_pane_g1

0x597b,	// (0x00050c9c) cell_afind_pane_t1_ParamLimits

0x597b,	// (0x00050c9c) cell_afind_pane_t1

0xb13b,	// (0x0005645c) bg_button_pane_cp72

0xdcb0,	// (0x00058fd1) cell_afind_grid_control_pane_g1

0x3355,	// (0x0004e676) aid_image_placing_area_ParamLimits

0x3355,	// (0x0004e676) aid_image_placing_area

0xaec5,	// (0x000561e6) field_vitu_entry_pane_g1_ParamLimits

0xaec5,	// (0x000561e6) field_vitu_entry_pane_g1

0xaec5,	// (0x000561e6) field_vitu_entry_pane_g2_ParamLimits

0xaec5,	// (0x000561e6) field_vitu_entry_pane_g2

0x0001,

0xf1c1,	// (0x0005a4e2) field_vitu_entry_pane_g_ParamLimits

0xf1c1,	// (0x0005a4e2) field_vitu_entry_pane_g

0xd8a9,	// (0x00058bca) cell_vitu_itu_pane_g1_ParamLimits

0xd88c,	// (0x00058bad) cell_vitu_itu_pane_t3_ParamLimits

0xd88c,	// (0x00058bad) cell_vitu_itu_pane_t3

0xdac0,	// (0x00058de1) mp4_progress_pane_t1_ParamLimits

0xdad9,	// (0x00058dfa) mp4_progress_pane_t2_ParamLimits

0xf80a,	// (0x0005ab2b) mp4_progress_pane_t_ParamLimits

0xdaf2,	// (0x00058e13) mup_progress_pane_cp04_ParamLimits

0x5859,	// (0x00050b7a) main_myfav_hc_pane_t5_ParamLimits

0x5859,	// (0x00050b7a) main_myfav_hc_pane_t5

0x9b71,	// (0x00054e92) aid_zoom_text_primary

0x05db,	// (0x0004b8fc) popup_adpt_find_window_ParamLimits

0xa7ce,	// (0x00055aef) main_cam_set_pane

0x52c0,	// (0x000505e1) cam4_zoom_pane_ParamLimits

0x52c0,	// (0x000505e1) cam4_zoom_pane

0x598d,	// (0x00050cae) main_cam_set_pane_g1_ParamLimits

0x598d,	// (0x00050cae) main_cam_set_pane_g1

0x599b,	// (0x00050cbc) main_cam_set_pane_g2_ParamLimits

0x599b,	// (0x00050cbc) main_cam_set_pane_g2

0x0001,

0xf8cb,	// (0x0005abec) main_cam_set_pane_g_ParamLimits

0xf8cb,	// (0x0005abec) main_cam_set_pane_g

0x59bc,	// (0x00050cdd) main_cam_set_pane_t1_ParamLimits

0x59bc,	// (0x00050cdd) main_cam_set_pane_t1

0x59d7,	// (0x00050cf8) main_cset_listscroll_pane_ParamLimits

0x59d7,	// (0x00050cf8) main_cset_listscroll_pane

0x59fd,	// (0x00050d1e) main_cset_slider_pane_ParamLimits

0x59fd,	// (0x00050d1e) main_cset_slider_pane

0xdcc1,	// (0x00058fe2) main_cset_list_pane_ParamLimits

0xdcc1,	// (0x00058fe2) main_cset_list_pane

0xdcd1,	// (0x00058ff2) scroll_pane_cp028

0x5a23,	// (0x00050d44) aid_area_touch_slider

0x5a3f,	// (0x00050d60) cset_slider_pane

0x5a62,	// (0x00050d83) main_cset_slider_pane_g1

0x5a77,	// (0x00050d98) main_cset_slider_pane_g2

0x0011,

0xf8d0,	// (0x0005abf1) main_cset_slider_pane_g

0xdd22,	// (0x00059043) main_cset_slider_pane_t1

0x5b1b,	// (0x00050e3c) main_cset_slider_pane_t2

0x5b35,	// (0x00050e56) main_cset_slider_pane_t3

0x5b4f,	// (0x00050e70) main_cset_slider_pane_t4

0x5b69,	// (0x00050e8a) main_cset_slider_pane_t5

0x5b83,	// (0x00050ea4) main_cset_slider_pane_t6

0x5b98,	// (0x00050eb9) main_cset_slider_pane_t7

0x000e,

0xf8f5,	// (0x0005ac16) main_cset_slider_pane_t

0x5c9c,	// (0x00050fbd) cset_list_set_pane_ParamLimits

0x5c9c,	// (0x00050fbd) cset_list_set_pane

0xddbc,	// (0x000590dd) aid_position_infowindow_above

0xddc4,	// (0x000590e5) aid_position_infowindow_below

0x07c2,	// (0x0004bae3) cset_list_set_pane_g1_ParamLimits

0x07c2,	// (0x0004bae3) cset_list_set_pane_g1

0x07ce,	// (0x0004baef) cset_list_set_pane_g3_ParamLimits

0x07ce,	// (0x0004baef) cset_list_set_pane_g3

0x0001,

0xf914,	// (0x0005ac35) cset_list_set_pane_g_ParamLimits

0xf914,	// (0x0005ac35) cset_list_set_pane_g

0x07dd,	// (0x0004bafe) cset_list_set_pane_t1_ParamLimits

0x07dd,	// (0x0004bafe) cset_list_set_pane_t1

0xa7ce,	// (0x00055aef) list_highlight_pane_cp021_ParamLimits

0xa7ce,	// (0x00055aef) list_highlight_pane_cp021

0xbc85,	// (0x00056fa6) cset_slider_pane_g1

0xbc97,	// (0x00056fb8) cset_slider_pane_g2

0xbc8e,	// (0x00056faf) cset_slider_pane_g3

0x0002,

0xf919,	// (0x0005ac3a) cset_slider_pane_g

0xa2fa,	// (0x0005561b) aid_area_touch_cam4_zoom

0xa302,	// (0x00055623) cam4_zoom_cont_pane

0xa30a,	// (0x0005562b) cam4_zoom_pane_g1

0xa312,	// (0x00055633) cam4_zoom_pane_g2

0x5cae,	// (0x00050fcf) cam4_zoom_pane_g3

0x0002,

0xf920,	// (0x0005ac41) cam4_zoom_pane_g

0xd9cf,	// (0x00058cf0) cam4_zoom_cont_pane_g1

0xe539,	// (0x0005985a) cam4_zoom_cont_pane_g2

0xe542,	// (0x00059863) cam4_zoom_cont_pane_g3

0x0002,

0xf927,	// (0x0005ac48) cam4_zoom_cont_pane_g

0x50ef,	// (0x00050410) call4_image_pane_ParamLimits

0x50ef,	// (0x00050410) call4_image_pane

0x5156,	// (0x00050477) call4_windows_conf_pane_ParamLimits

0x5199,	// (0x000504ba) popup_call4_audio_in_window_ParamLimits

0x5199,	// (0x000504ba) popup_call4_audio_in_window

0xa7c4,	// (0x00055ae5) bg_popup_call2_act_pane_cp02

0xdb23,	// (0x00058e44) call4_list_conf_pane

0xb131,	// (0x00056452) call4_image_pane_g1

0xb131,	// (0x00056452) call4_image_pane_g2

0x0001,

0xf398,	// (0x0005a6b9) call4_image_pane_g

0xddcc,	// (0x000590ed) list_single_graphic_popup_conf4_pane_ParamLimits

0xddcc,	// (0x000590ed) list_single_graphic_popup_conf4_pane

0xa7c4,	// (0x00055ae5) list_highlight_pane_cp022

0xdddf,	// (0x00059100) list_single_graphic_popup_conf4_pane_g1

0xb860,	// (0x00056b81) list_single_graphic_popup_conf4_pane_g2

0x0001,

0xf92e,	// (0x0005ac4f) list_single_graphic_popup_conf4_pane_g

0xdde7,	// (0x00059108) list_single_graphic_popup_conf4_pane_t1

0x1d10,	// (0x0004d031) popup_vtel_slider_window_ParamLimits

0x1d10,	// (0x0004d031) popup_vtel_slider_window

0xdb05,	// (0x00058e26) dialer2_ne_pane_t2_ParamLimits

0xdb05,	// (0x00058e26) dialer2_ne_pane_t2

0x0001,

0xf80f,	// (0x0005ab30) dialer2_ne_pane_t_ParamLimits

0xf80f,	// (0x0005ab30) dialer2_ne_pane_t

0xcafb,	// (0x00057e1c) bg_popup_sub_pane_cp010_ParamLimits

0xcafb,	// (0x00057e1c) bg_popup_sub_pane_cp010

0x5cb6,	// (0x00050fd7) popup_vtel_slider_window_g1_ParamLimits

0x5cb6,	// (0x00050fd7) popup_vtel_slider_window_g1

0x5cc9,	// (0x00050fea) popup_vtel_slider_window_g2_ParamLimits

0x5cc9,	// (0x00050fea) popup_vtel_slider_window_g2

0x0003,

0xf933,	// (0x0005ac54) popup_vtel_slider_window_g_ParamLimits

0xf933,	// (0x0005ac54) popup_vtel_slider_window_g

0x5d1f,	// (0x00051040) vtel_slider_pane_ParamLimits

0x5d1f,	// (0x00051040) vtel_slider_pane

0x5d41,	// (0x00051062) vtel_slider_pane_g1_ParamLimits

0x5d41,	// (0x00051062) vtel_slider_pane_g1

0x5d55,	// (0x00051076) vtel_slider_pane_g2_ParamLimits

0x5d55,	// (0x00051076) vtel_slider_pane_g2

0x5d6d,	// (0x0005108e) vtel_slider_pane_g3_ParamLimits

0x5d6d,	// (0x0005108e) vtel_slider_pane_g3

0x5d41,	// (0x00051062) vtel_slider_pane_g4_ParamLimits

0x5d41,	// (0x00051062) vtel_slider_pane_g4

0x5d83,	// (0x000510a4) vtel_slider_pane_g5_ParamLimits

0x5d83,	// (0x000510a4) vtel_slider_pane_g5

0x0004,

0xf93c,	// (0x0005ac5d) vtel_slider_pane_g_ParamLimits

0xf93c,	// (0x0005ac5d) vtel_slider_pane_g

0xa7ce,	// (0x00055aef) main_gallery2_pane

0x54c0,	// (0x000507e1) aid_size_row_itut2_dropdow_list_ParamLimits

0x54c0,	// (0x000507e1) aid_size_row_itut2_dropdow_list

0x553e,	// (0x0005085f) grid_vitu2_function_top_pane_ParamLimits

0x553e,	// (0x0005085f) grid_vitu2_function_top_pane

0x55a8,	// (0x000508c9) popup_vitu2_dropdown_list_window_ParamLimits

0x55a8,	// (0x000508c9) popup_vitu2_dropdown_list_window

0x55cf,	// (0x000508f0) popup_vitu2_match_list_window

0x5d99,	// (0x000510ba) cell_vitu2_function_top_pane_ParamLimits

0x5d99,	// (0x000510ba) cell_vitu2_function_top_pane

0x5db1,	// (0x000510d2) cell_vitu2_function_top_pane_cp01_ParamLimits

0x5db1,	// (0x000510d2) cell_vitu2_function_top_pane_cp01

0x5dcd,	// (0x000510ee) cell_vitu2_function_top_wide_pane_ParamLimits

0x5dcd,	// (0x000510ee) cell_vitu2_function_top_wide_pane

0xa7ce,	// (0x00055aef) bg_button_pane_cp012

0x5deb,	// (0x0005110c) cell_vitu2_function_top_pane_g1

0xa31a,	// (0x0005563b) bg_button_pane_cp013_ParamLimits

0xa31a,	// (0x0005563b) bg_button_pane_cp013

0x5dff,	// (0x00051120) cell_vitu2_function_top_wide_pane_g1_ParamLimits

0x5dff,	// (0x00051120) cell_vitu2_function_top_wide_pane_g1

0xa7ce,	// (0x00055aef) bg_popup_sub_pane_cp20

0x5e17,	// (0x00051138) list_vitu2_match_list_pane

0xdb90,	// (0x00058eb1) bg_popup_sub_pane_cp20_g1

0xdb98,	// (0x00058eb9) bg_popup_sub_pane_cp20_g2

0xb342,	// (0x00056663) bg_popup_sub_pane_cp20_g3

0xdba0,	// (0x00058ec1) bg_popup_sub_pane_cp20_g4

0xb322,	// (0x00056643) bg_popup_sub_pane_cp20_g5

0xddfd,	// (0x0005911e) bg_popup_sub_pane_cp20_g6

0xdbb0,	// (0x00058ed1) bg_popup_sub_pane_cp20_g7

0xdbb8,	// (0x00058ed9) bg_popup_sub_pane_cp20_g8

0xdbc0,	// (0x00058ee1) bg_popup_sub_pane_cp20_g9

0x0008,

0xf947,	// (0x0005ac68) bg_popup_sub_pane_cp20_g

0xa336,	// (0x00055657) list_vitu2_match_list_item_pane_ParamLimits

0xa336,	// (0x00055657) list_vitu2_match_list_item_pane

0xa348,	// (0x00055669) list_vitu2_match_list_item_pane_t1

0xa7c4,	// (0x00055ae5) bg_popup_sub_pane_cp21

0xb0fb,	// (0x0005641c) grid_vitu2_dropdown_list_pane

0x5e2f,	// (0x00051150) cell_vitu2_dropdown_list_char_pane_ParamLimits

0x5e2f,	// (0x00051150) cell_vitu2_dropdown_list_char_pane

0x5e4f,	// (0x00051170) cell_vitu2_dropdown_list_ctrl_pane_ParamLimits

0x5e4f,	// (0x00051170) cell_vitu2_dropdown_list_ctrl_pane

0xde05,	// (0x00059126) cell_vitu2_dropdown_list_char_pane_g1

0xde0e,	// (0x0005912f) cell_vitu2_dropdown_list_char_pane_g2

0xde17,	// (0x00059138) cell_vitu2_dropdown_list_char_pane_g3

0x0002,

0xf95a,	// (0x0005ac7b) cell_vitu2_dropdown_list_char_pane_g

0x5e77,	// (0x00051198) cell_vitu2_dropdown_list_char_pane_t1

0x5e85,	// (0x000511a6) cell_vitu2_dropdown_list_ctrl_pane_g1_ParamLimits

0x5e85,	// (0x000511a6) cell_vitu2_dropdown_list_ctrl_pane_g1

0x5e92,	// (0x000511b3) cell_vitu2_dropdown_list_ctrl_pane_g2_ParamLimits

0x5e92,	// (0x000511b3) cell_vitu2_dropdown_list_ctrl_pane_g2

0x5e9f,	// (0x000511c0) cell_vitu2_dropdown_list_ctrl_pane_g3_ParamLimits

0x5e9f,	// (0x000511c0) cell_vitu2_dropdown_list_ctrl_pane_g3

0x5eac,	// (0x000511cd) cell_vitu2_dropdown_list_ctrl_pane_g4_ParamLimits

0x5eac,	// (0x000511cd) cell_vitu2_dropdown_list_ctrl_pane_g4

0xaec5,	// (0x000561e6) cell_vitu2_dropdown_list_ctrl_pane_g5_ParamLimits

0xaec5,	// (0x000561e6) cell_vitu2_dropdown_list_ctrl_pane_g5

0x0004,

0xf961,	// (0x0005ac82) cell_vitu2_dropdown_list_ctrl_pane_g_ParamLimits

0xf961,	// (0x0005ac82) cell_vitu2_dropdown_list_ctrl_pane_g

0x5ec8,	// (0x000511e9) aid_size_cell_gallery2_ParamLimits

0x5ec8,	// (0x000511e9) aid_size_cell_gallery2

0x5ee6,	// (0x00051207) grid_gallery2_pane_ParamLimits

0x5ee6,	// (0x00051207) grid_gallery2_pane

0x5f00,	// (0x00051221) scroll_pane_cp029_ParamLimits

0x5f00,	// (0x00051221) scroll_pane_cp029

0x5f11,	// (0x00051232) cell_gallery2_pane_ParamLimits

0x5f11,	// (0x00051232) cell_gallery2_pane

0xde20,	// (0x00059141) cell_gallery2_pane_g2

0x5f70,	// (0x00051291) cell_gallery2_pane_g3

0xde28,	// (0x00059149) cell_gallery2_pane_g4

0xde30,	// (0x00059151) cell_gallery2_pane_g5

0xb0fb,	// (0x0005641c) grid_highlight_pane_cp10

0x55cf,	// (0x000508f0) popup_vitu2_match_list_window_ParamLimits

0x55e4,	// (0x00050905) popup_vitu2_query_window_ParamLimits

0x55e4,	// (0x00050905) popup_vitu2_query_window

0xa7c4,	// (0x00055ae5) bg_vitu2_candi_button_pane

0xde05,	// (0x00059126) cell_vitu2_dropdown_list_char_pane_g1_copy1

0xde0e,	// (0x0005912f) cell_vitu2_dropdown_list_char_pane_g2_copy1

0xde17,	// (0x00059138) cell_vitu2_dropdown_list_char_pane_g2_copy2

0x07f2,	// (0x0004bb13) bg_button_pane_cp015

0x5f78,	// (0x00051299) bg_button_pane_cp016

0x5f84,	// (0x000512a5) bg_button_pane_cp017

0xbc15,	// (0x00056f36) bg_popup_sub_pane_cp22

0xde38,	// (0x00059159) popup_vitu2_query_window_g1

0x0826,	// (0x0004bb47) popup_vitu2_query_window_g2

0x0002,

0xf96c,	// (0x0005ac8d) popup_vitu2_query_window_g

0x083c,	// (0x0004bb5d) popup_vitu2_query_window_t1_ParamLimits

0x083c,	// (0x0004bb5d) popup_vitu2_query_window_t1

0x086f,	// (0x0004bb90) popup_vitu2_query_window_t2_ParamLimits

0x086f,	// (0x0004bb90) popup_vitu2_query_window_t2

0x0881,	// (0x0004bba2) popup_vitu2_query_window_t3_ParamLimits

0x0881,	// (0x0004bba2) popup_vitu2_query_window_t3

0x5fab,	// (0x000512cc) popup_vitu2_query_window_t4_ParamLimits

0x5fab,	// (0x000512cc) popup_vitu2_query_window_t4

0x5fbf,	// (0x000512e0) popup_vitu2_query_window_t5_ParamLimits

0x5fbf,	// (0x000512e0) popup_vitu2_query_window_t5

0x0006,

0xf973,	// (0x0005ac94) popup_vitu2_query_window_t_ParamLimits

0xf973,	// (0x0005ac94) popup_vitu2_query_window_t

0xdcb9,	// (0x00058fda) main_cset_text_pane

0x5a23,	// (0x00050d44) aid_area_touch_slider_ParamLimits

0x5a3f,	// (0x00050d60) cset_slider_pane_ParamLimits

0x5a62,	// (0x00050d83) main_cset_slider_pane_g1_ParamLimits

0x5a77,	// (0x00050d98) main_cset_slider_pane_g2_ParamLimits

0xdcda,	// (0x00058ffb) main_cset_slider_pane_g3_ParamLimits

0xdcda,	// (0x00058ffb) main_cset_slider_pane_g3

0x5a8c,	// (0x00050dad) main_cset_slider_pane_g4_ParamLimits

0x5a8c,	// (0x00050dad) main_cset_slider_pane_g4

0x5a9b,	// (0x00050dbc) main_cset_slider_pane_g5_ParamLimits

0x5a9b,	// (0x00050dbc) main_cset_slider_pane_g5

0x5aa7,	// (0x00050dc8) main_cset_slider_pane_g6_ParamLimits

0x5aa7,	// (0x00050dc8) main_cset_slider_pane_g6

0xf8d0,	// (0x0005abf1) main_cset_slider_pane_g_ParamLimits

0xdd22,	// (0x00059043) main_cset_slider_pane_t1_ParamLimits

0x5b1b,	// (0x00050e3c) main_cset_slider_pane_t2_ParamLimits

0x5b35,	// (0x00050e56) main_cset_slider_pane_t3_ParamLimits

0x5b4f,	// (0x00050e70) main_cset_slider_pane_t4_ParamLimits

0x5b69,	// (0x00050e8a) main_cset_slider_pane_t5_ParamLimits

0x5b83,	// (0x00050ea4) main_cset_slider_pane_t6_ParamLimits

0x5b98,	// (0x00050eb9) main_cset_slider_pane_t7_ParamLimits

0x5bc2,	// (0x00050ee3) main_cset_slider_pane_t8_ParamLimits

0x5bc2,	// (0x00050ee3) main_cset_slider_pane_t8

0x5bea,	// (0x00050f0b) main_cset_slider_pane_t9_ParamLimits

0x5bea,	// (0x00050f0b) main_cset_slider_pane_t9

0x5c12,	// (0x00050f33) main_cset_slider_pane_t10_ParamLimits

0x5c12,	// (0x00050f33) main_cset_slider_pane_t10

0x5c3a,	// (0x00050f5b) main_cset_slider_pane_t11_ParamLimits

0x5c3a,	// (0x00050f5b) main_cset_slider_pane_t11

0x5c62,	// (0x00050f83) main_cset_slider_pane_t12_ParamLimits

0x5c62,	// (0x00050f83) main_cset_slider_pane_t12

0x5c7f,	// (0x00050fa0) main_cset_slider_pane_t13_ParamLimits

0x5c7f,	// (0x00050fa0) main_cset_slider_pane_t13

0xf8f5,	// (0x0005ac16) main_cset_slider_pane_t_ParamLimits

0xa7c4,	// (0x00055ae5) bg_popup_sub_pane_cp011

0xde44,	// (0x00059165) main_cset_text_pane_g1

0xde4c,	// (0x0005916d) main_cset_text_pane_t1

0xde5a,	// (0x0005917b) main_cset_text_pane_t2

0xde68,	// (0x00059189) main_cset_text_pane_t3

0xde76,	// (0x00059197) main_cset_text_pane_t4

0xde84,	// (0x000591a5) main_cset_text_pane_t5

0xde92,	// (0x000591b3) main_cset_text_pane_t6

0xdea0,	// (0x000591c1) main_cset_text_pane_t7

0x0006,

0xf982,	// (0x0005aca3) main_cset_text_pane_t

0xa7c4,	// (0x00055ae5) main_cam4_burst_pane

0xa7c4,	// (0x00055ae5) main_cam5_pane

0xdc8f,	// (0x00058fb0) bg_button_pane_cp019

0xdc98,	// (0x00058fb9) bg_button_pane_cp020

0xdce6,	// (0x00059007) main_cset_slider_pane_g7_ParamLimits

0xdce6,	// (0x00059007) main_cset_slider_pane_g7

0xdcf2,	// (0x00059013) main_cset_slider_pane_g8_ParamLimits

0xdcf2,	// (0x00059013) main_cset_slider_pane_g8

0x5abb,	// (0x00050ddc) main_cset_slider_pane_g9_ParamLimits

0x5abb,	// (0x00050ddc) main_cset_slider_pane_g9

0x5ac7,	// (0x00050de8) main_cset_slider_pane_g10_ParamLimits

0x5ac7,	// (0x00050de8) main_cset_slider_pane_g10

0x5ad3,	// (0x00050df4) main_cset_slider_pane_g11_ParamLimits

0x5ad3,	// (0x00050df4) main_cset_slider_pane_g11

0x5adf,	// (0x00050e00) main_cset_slider_pane_g12_ParamLimits

0x5adf,	// (0x00050e00) main_cset_slider_pane_g12

0x5aeb,	// (0x00050e0c) main_cset_slider_pane_g13_ParamLimits

0x5aeb,	// (0x00050e0c) main_cset_slider_pane_g13

0x5af7,	// (0x00050e18) main_cset_slider_pane_g14_ParamLimits

0x5af7,	// (0x00050e18) main_cset_slider_pane_g14

0x5b03,	// (0x00050e24) main_cset_slider_pane_g15_ParamLimits

0x5b03,	// (0x00050e24) main_cset_slider_pane_g15

0xdd4a,	// (0x0005906b) main_cset_slider_pane_t14_ParamLimits

0xdd4a,	// (0x0005906b) main_cset_slider_pane_t14

0xdd83,	// (0x000590a4) main_cset_slider_pane_t15_ParamLimits

0xdd83,	// (0x000590a4) main_cset_slider_pane_t15

0x5fd3,	// (0x000512f4) aid_cam4_burst_size_cell_ParamLimits

0x5fd3,	// (0x000512f4) aid_cam4_burst_size_cell

0x5ff3,	// (0x00051314) grid_cam4_burst_pane_ParamLimits

0x5ff3,	// (0x00051314) grid_cam4_burst_pane

0x602b,	// (0x0005134c) linegrid_cam4_burst_pane_ParamLimits

0x602b,	// (0x0005134c) linegrid_cam4_burst_pane

0xdeae,	// (0x000591cf) scroll_pane_cp30_ParamLimits

0xdeae,	// (0x000591cf) scroll_pane_cp30

0x604f,	// (0x00051370) cell_cam4_burst_pane_ParamLimits

0x604f,	// (0x00051370) cell_cam4_burst_pane

0xdeba,	// (0x000591db) linegrid_cam4_burst_pane_g1_ParamLimits

0xdeba,	// (0x000591db) linegrid_cam4_burst_pane_g1

0x609c,	// (0x000513bd) linegrid_cam4_burst_pane_g2_ParamLimits

0x609c,	// (0x000513bd) linegrid_cam4_burst_pane_g2

0xdec7,	// (0x000591e8) linegrid_cam4_burst_pane_g3_ParamLimits

0xdec7,	// (0x000591e8) linegrid_cam4_burst_pane_g3

0x0002,

0xf991,	// (0x0005acb2) linegrid_cam4_burst_pane_g_ParamLimits

0xf991,	// (0x0005acb2) linegrid_cam4_burst_pane_g

0x60ad,	// (0x000513ce) linegrid_cam4_burst_pane_g3_copy1_ParamLimits

0x60ad,	// (0x000513ce) linegrid_cam4_burst_pane_g3_copy1

0xded4,	// (0x000591f5) linegrid_cam4_burst_pane_g4_ParamLimits

0xded4,	// (0x000591f5) linegrid_cam4_burst_pane_g4

0x60c7,	// (0x000513e8) linegrid_cam4_burst_pane_g5_ParamLimits

0x60c7,	// (0x000513e8) linegrid_cam4_burst_pane_g5

0x60d8,	// (0x000513f9) linegrid_cam4_burst_pane_g6_ParamLimits

0x60d8,	// (0x000513f9) linegrid_cam4_burst_pane_g6

0xdee1,	// (0x00059202) linegrid_cam4_burst_pane_g7_ParamLimits

0xdee1,	// (0x00059202) linegrid_cam4_burst_pane_g7

0x60ef,	// (0x00051410) cell_cam4_burst_pane_g1

0xdefa,	// (0x0005921b) main_cam5_pane_t1_ParamLimits

0xdefa,	// (0x0005921b) main_cam5_pane_t1

0xdf0c,	// (0x0005922d) main_cam5_pane_t2_ParamLimits

0xdf0c,	// (0x0005922d) main_cam5_pane_t2

0xdf1e,	// (0x0005923f) main_cam5_pane_t3_ParamLimits

0xdf1e,	// (0x0005923f) main_cam5_pane_t3

0xdf30,	// (0x00059251) main_cam5_pane_t4_ParamLimits

0xdf30,	// (0x00059251) main_cam5_pane_t4

0xdf48,	// (0x00059269) main_cam5_pane_t5_ParamLimits

0xdf48,	// (0x00059269) main_cam5_pane_t5

0xdf5c,	// (0x0005927d) main_cam5_pane_t6_ParamLimits

0xdf5c,	// (0x0005927d) main_cam5_pane_t6

0xdf70,	// (0x00059291) main_cam5_pane_t7_ParamLimits

0xdf70,	// (0x00059291) main_cam5_pane_t7

0xdf82,	// (0x000592a3) main_cam5_pane_t8_ParamLimits

0xdf82,	// (0x000592a3) main_cam5_pane_t8

0xdf9e,	// (0x000592bf) main_cam5_pane_t9_ParamLimits

0xdf9e,	// (0x000592bf) main_cam5_pane_t9

0xdfb0,	// (0x000592d1) main_cam5_pane_t10_ParamLimits

0xdfb0,	// (0x000592d1) main_cam5_pane_t10

0xdfc2,	// (0x000592e3) main_cam5_pane_t11_ParamLimits

0xdfc2,	// (0x000592e3) main_cam5_pane_t11

0xdfd4,	// (0x000592f5) main_cam5_pane_t12_ParamLimits

0xdfd4,	// (0x000592f5) main_cam5_pane_t12

0xdfe9,	// (0x0005930a) main_cam5_pane_t13_ParamLimits

0xdfe9,	// (0x0005930a) main_cam5_pane_t13

0x000c,

0xf99d,	// (0x0005acbe) main_cam5_pane_t_ParamLimits

0xf99d,	// (0x0005acbe) main_cam5_pane_t

0x1017,	// (0x0004c338) popup_scut_keymap_window_ParamLimits

0x1017,	// (0x0004c338) popup_scut_keymap_window

0x6102,	// (0x00051423) aid_size_cell_brow_shortcut

0xb0fb,	// (0x0005641c) bg_popup_window_pane_cp010

0x610e,	// (0x0005142f) grid_scut_pane

0x611a,	// (0x0005143b) cell_scut_pane_ParamLimits

0x611a,	// (0x0005143b) cell_scut_pane

0x6131,	// (0x00051452) cell_scut_pane_g1

0xe006,	// (0x00059327) cell_scut_pane_t1

0xe015,	// (0x00059336) cell_scut_pane_t2

0x613a,	// (0x0005145b) cell_scut_pane_t3

0x0002,

0xf9b8,	// (0x0005acd9) cell_scut_pane_t

0x4212,	// (0x0004f533) main_mup3_pane_g8_ParamLimits

0x4212,	// (0x0004f533) main_mup3_pane_g8

0x54d8,	// (0x000507f9) area_vitu2_query_pane_ParamLimits

0x54d8,	// (0x000507f9) area_vitu2_query_pane

0x0803,	// (0x0004bb24) input_focus_pane_cp08

0xe024,	// (0x00059345) area_vitu2_query_pane_g1

0x08ff,	// (0x0004bc20) area_vitu2_query_pane_g2

0x0001,

0xf9bf,	// (0x0005ace0) area_vitu2_query_pane_g

0x6148,	// (0x00051469) area_vitu2_query_pane_t1_ParamLimits

0x6148,	// (0x00051469) area_vitu2_query_pane_t1

0x615c,	// (0x0005147d) area_vitu2_query_pane_t2_ParamLimits

0x615c,	// (0x0005147d) area_vitu2_query_pane_t2

0x090e,	// (0x0004bc2f) area_vitu2_query_pane_t3_ParamLimits

0x090e,	// (0x0004bc2f) area_vitu2_query_pane_t3

0xa356,	// (0x00055677) area_vitu2_query_pane_t4_ParamLimits

0xa356,	// (0x00055677) area_vitu2_query_pane_t4

0xa37e,	// (0x0005569f) area_vitu2_query_pane_t5_ParamLimits

0xa37e,	// (0x0005569f) area_vitu2_query_pane_t5

0xa3a6,	// (0x000556c7) area_vitu2_query_pane_t6_ParamLimits

0xa3a6,	// (0x000556c7) area_vitu2_query_pane_t6

0x0006,

0xf9c4,	// (0x0005ace5) area_vitu2_query_pane_t_ParamLimits

0xf9c4,	// (0x0005ace5) area_vitu2_query_pane_t

0x6170,	// (0x00051491) bg_button_pane_cp018

0x617c,	// (0x0005149d) bg_button_pane_cp021

0x0936,	// (0x0004bc57) bg_button_pane_cp022

0x0955,	// (0x0004bc76) input_focus_pane_cp09

0xb983,	// (0x00056ca4) aid_size_touch_mv_arrow_left

0xb9ae,	// (0x00056ccf) aid_size_touch_mv_arrow_right

0xdcfe,	// (0x0005901f) main_cset_slider_pane_g16_ParamLimits

0xdcfe,	// (0x0005901f) main_cset_slider_pane_g16

0xdd0a,	// (0x0005902b) main_cset_slider_pane_g17_ParamLimits

0xdd0a,	// (0x0005902b) main_cset_slider_pane_g17

0x60ef,	// (0x00051410) cell_cam4_burst_pane_g1_ParamLimits

0xa7c4,	// (0x00055ae5) compa_mode_pane

0x5cd9,	// (0x00050ffa) popup_vtel_slider_window_g3_ParamLimits

0x5cd9,	// (0x00050ffa) popup_vtel_slider_window_g3

0x5cf0,	// (0x00051011) popup_vtel_slider_window_g4_ParamLimits

0x5cf0,	// (0x00051011) popup_vtel_slider_window_g4

0x5d07,	// (0x00051028) popup_vtel_slider_window_t1_ParamLimits

0x5d07,	// (0x00051028) popup_vtel_slider_window_t1

0xa7c4,	// (0x00055ae5) main_cl_pane

0x9def,	// (0x00055110) popup_imed_adjust2_window_ParamLimits

0xbc15,	// (0x00056f36) bg_tb_trans_pane_cp05_ParamLimits

0xd7c1,	// (0x00058ae2) popup_imed_adjust2_window_g1_ParamLimits

0xd7d0,	// (0x00058af1) popup_imed_adjust2_window_g2_ParamLimits

0xd7d0,	// (0x00058af1) popup_imed_adjust2_window_g2

0xd7dc,	// (0x00058afd) popup_imed_adjust2_window_g3_ParamLimits

0xd7dc,	// (0x00058afd) popup_imed_adjust2_window_g3

0x0002,

0xf73a,	// (0x0005aa5b) popup_imed_adjust2_window_g_ParamLimits

0xf73a,	// (0x0005aa5b) popup_imed_adjust2_window_g

0xd7e8,	// (0x00058b09) popup_imed_adjust2_window_t1_ParamLimits

0xd800,	// (0x00058b21) slider_imed_adjust_pane_ParamLimits

0xd814,	// (0x00058b35) slider_imed_adjust_pane_g1_ParamLimits

0xd824,	// (0x00058b45) slider_imed_adjust_pane_g2_ParamLimits

0xd834,	// (0x00058b55) slider_imed_adjust_pane_g3_ParamLimits

0xd845,	// (0x00058b66) slider_imed_adjust_pane_g4_ParamLimits

0xf741,	// (0x0005aa62) slider_imed_adjust_pane_g_ParamLimits

0x5261,	// (0x00050582) aid_touch_area_cam4_ParamLimits

0x5261,	// (0x00050582) aid_touch_area_cam4

0xa1fa,	// (0x0005551b) battery_pane_cp01

0x5330,	// (0x00050651) main_camera4_pane_g6_ParamLimits

0x5330,	// (0x00050651) main_camera4_pane_g6

0x535a,	// (0x0005067b) main_camera4_pane_t2_ParamLimits

0x535a,	// (0x0005067b) main_camera4_pane_t2

0x0001,

0xf843,	// (0x0005ab64) main_camera4_pane_t_ParamLimits

0xf843,	// (0x0005ab64) main_camera4_pane_t

0x538f,	// (0x000506b0) aid_touch_area_vid4_ParamLimits

0x538f,	// (0x000506b0) aid_touch_area_vid4

0x53e3,	// (0x00050704) main_video4_pane_g5_ParamLimits

0x53e3,	// (0x00050704) main_video4_pane_g5

0x5408,	// (0x00050729) vid4_progress_pane_ParamLimits

0x5408,	// (0x00050729) vid4_progress_pane

0xdd16,	// (0x00059037) main_cset_slider_pane_g18_ParamLimits

0xdd16,	// (0x00059037) main_cset_slider_pane_g18

0xdeee,	// (0x0005920f) cell_cam4_burst_pane_g2_ParamLimits

0xdeee,	// (0x0005920f) cell_cam4_burst_pane_g2

0x0001,

0xf998,	// (0x0005acb9) cell_cam4_burst_pane_g_ParamLimits

0xf998,	// (0x0005acb9) cell_cam4_burst_pane_g

0xaf37,	// (0x00056258) bg_cl_pane_ParamLimits

0xaf37,	// (0x00056258) bg_cl_pane

0x6188,	// (0x000514a9) cl_header_pane_ParamLimits

0x6188,	// (0x000514a9) cl_header_pane

0x619c,	// (0x000514bd) cl_listscroll_pane_ParamLimits

0x619c,	// (0x000514bd) cl_listscroll_pane

0xe030,	// (0x00059351) bg_cl_pane_g1

0xe038,	// (0x00059359) bg_cl_pane_g2

0xe040,	// (0x00059361) bg_cl_pane_g3

0xe048,	// (0x00059369) bg_cl_pane_g4

0xe050,	// (0x00059371) bg_cl_pane_g5

0xe058,	// (0x00059379) bg_cl_pane_g6

0xe060,	// (0x00059381) bg_cl_pane_g7

0xe068,	// (0x00059389) bg_cl_pane_g8

0xe070,	// (0x00059391) bg_cl_pane_g9

0x0008,

0xf9d3,	// (0x0005acf4) bg_cl_pane_g

0x61ac,	// (0x000514cd) aid_height_cl_leading_ParamLimits

0x61ac,	// (0x000514cd) aid_height_cl_leading

0x61b8,	// (0x000514d9) aid_height_cl_text_ParamLimits

0x61b8,	// (0x000514d9) aid_height_cl_text

0xa7ce,	// (0x00055aef) bg_cl_header_pane_ParamLimits

0xa7ce,	// (0x00055aef) bg_cl_header_pane

0x61d7,	// (0x000514f8) cl_header_pane_g1_ParamLimits

0x61d7,	// (0x000514f8) cl_header_pane_g1

0x61ed,	// (0x0005150e) cl_header_pane_t1_ParamLimits

0x61ed,	// (0x0005150e) cl_header_pane_t1

0xe078,	// (0x00059399) cl_list_pane

0xdcd1,	// (0x00058ff2) hc_scroll_pane_cp01

0xb322,	// (0x00056643) bg_cl_header_pane_g1

0xdb90,	// (0x00058eb1) bg_cl_header_pane_g2

0xb342,	// (0x00056663) bg_cl_header_pane_g3

0xdba0,	// (0x00058ec1) bg_cl_header_pane_g4

0xdb98,	// (0x00058eb9) bg_cl_header_pane_g5

0xddfd,	// (0x0005911e) bg_cl_header_pane_g6

0xdbb8,	// (0x00058ed9) bg_cl_header_pane_g7

0xdbc0,	// (0x00058ee1) bg_cl_header_pane_g8

0xdbb0,	// (0x00058ed1) bg_cl_header_pane_g9

0x0008,

0xf9e6,	// (0x0005ad07) bg_cl_header_pane_g

0x6206,	// (0x00051527) hc_cl_list_double_graphic_heading_pane_ParamLimits

0x6206,	// (0x00051527) hc_cl_list_double_graphic_heading_pane

0x6217,	// (0x00051538) hc_cl_list_single_graphic_pane_ParamLimits

0x6217,	// (0x00051538) hc_cl_list_single_graphic_pane

0x6230,	// (0x00051551) hc_cl_list_single_graphic_pane_g1_ParamLimits

0x6230,	// (0x00051551) hc_cl_list_single_graphic_pane_g1

0x623c,	// (0x0005155d) hc_cl_list_single_graphic_pane_g2_ParamLimits

0x623c,	// (0x0005155d) hc_cl_list_single_graphic_pane_g2

0x0001,

0xf9f9,	// (0x0005ad1a) hc_cl_list_single_graphic_pane_g_ParamLimits

0xf9f9,	// (0x0005ad1a) hc_cl_list_single_graphic_pane_g

0x6250,	// (0x00051571) hc_cl_list_single_graphic_pane_t1_ParamLimits

0x6250,	// (0x00051571) hc_cl_list_single_graphic_pane_t1

0x6230,	// (0x00051551) hc_cl_list_double_graphic_heading_pane_g1_ParamLimits

0x6230,	// (0x00051551) hc_cl_list_double_graphic_heading_pane_g1

0x6265,	// (0x00051586) hc_cl_list_double_graphic_heading_pane_g2_ParamLimits

0x6265,	// (0x00051586) hc_cl_list_double_graphic_heading_pane_g2

0x6279,	// (0x0005159a) hc_cl_list_double_graphic_heading_pane_g3_ParamLimits

0x6279,	// (0x0005159a) hc_cl_list_double_graphic_heading_pane_g3

0x0002,

0xf9fe,	// (0x0005ad1f) hc_cl_list_double_graphic_heading_pane_g_ParamLimits

0xf9fe,	// (0x0005ad1f) hc_cl_list_double_graphic_heading_pane_g

0x628d,	// (0x000515ae) hc_cl_list_double_graphic_heading_pane_t1_ParamLimits

0x628d,	// (0x000515ae) hc_cl_list_double_graphic_heading_pane_t1

0x62a2,	// (0x000515c3) hc_cl_list_double_graphic_heading_pane_t2_ParamLimits

0x62a2,	// (0x000515c3) hc_cl_list_double_graphic_heading_pane_t2

0x0001,

0xfa05,	// (0x0005ad26) hc_cl_list_double_graphic_heading_pane_t_ParamLimits

0xfa05,	// (0x0005ad26) hc_cl_list_double_graphic_heading_pane_t

0xa3fa,	// (0x0005571b) vid4_progress_pane_g1

0xa40a,	// (0x0005572b) vid4_progress_pane_g2

0x62b7,	// (0x000515d8) vid4_progress_pane_g3

0xa41a,	// (0x0005573b) vid4_progress_pane_g4

0x0004,

0xfa0a,	// (0x0005ad2b) vid4_progress_pane_g

0x62c9,	// (0x000515ea) vid4_progress_pane_t1

0xa432,	// (0x00055753) vid4_progress_pane_t2

0x0002,

0xfa15,	// (0x0005ad36) vid4_progress_pane_t

0x62df,	// (0x00051600) wait_bar_pane_cp07

0xd0db,	// (0x000583fc) blid_firmament_pane_ParamLimits

0xd11e,	// (0x0005843f) popup_blid_sat_info2_window_g1

0xd142,	// (0x00058463) popup_blid_sat_info2_window_t3

0xd150,	// (0x00058471) popup_blid_sat_info2_window_t4

0xd15e,	// (0x0005847f) popup_blid_sat_info2_window_t5

0xd16c,	// (0x0005848d) popup_blid_sat_info2_window_t6

0xd17c,	// (0x0005849d) popup_blid_sat_info2_window_t7

0xd18a,	// (0x000584ab) popup_blid_sat_info2_window_t8

0xd198,	// (0x000584b9) popup_blid_sat_info2_window_t9

0xd1a6,	// (0x000584c7) popup_blid_sat_info2_window_t10

0xd267,	// (0x00058588) aid_firma_cardinal_ParamLimits

0xd27b,	// (0x0005859c) blid_firmament_pane_t1_ParamLimits

0xd292,	// (0x000585b3) blid_firmament_pane_t2_ParamLimits

0xd2a9,	// (0x000585ca) blid_firmament_pane_t3_ParamLimits

0xd2c0,	// (0x000585e1) blid_firmament_pane_t4_ParamLimits

0xf633,	// (0x0005a954) blid_firmament_pane_t_ParamLimits

0xd2d7,	// (0x000585f8) blid_sat_info_pane_ParamLimits

0xa7ce,	// (0x00055aef) main_cam_set_pane_ParamLimits

0x49ef,	// (0x0004fd10) aid_size_cell_colour_35_ParamLimits

0x4a0f,	// (0x0004fd30) aid_size_cell_colour_112_ParamLimits

0x4a2f,	// (0x0004fd50) aid_size_cell_effect_ParamLimits

0xbc15,	// (0x00056f36) bg_tb_trans_pane_cp02_ParamLimits

0xb58a,	// (0x000568ab) heading_imed_pane_ParamLimits

0x4a4f,	// (0x0004fd70) listscroll_imed_pane_ParamLimits

0xc58e,	// (0x000578af) popup_call2_audio_first_window_g5_ParamLimits

0xc58e,	// (0x000578af) popup_call2_audio_first_window_g5

0x4e7b,	// (0x0005019c) aid_size_touch_image3_arrow_left_ParamLimits

0x4e7b,	// (0x0005019c) aid_size_touch_image3_arrow_left

0x4ea7,	// (0x000501c8) aid_size_touch_image3_arrow_right_ParamLimits

0x4ea7,	// (0x000501c8) aid_size_touch_image3_arrow_right

0xa447,	// (0x00055768) vid4_progress_pane_t3

0x4bf2,	// (0x0004ff13) main_hwr_training_symbol_option_pane_ParamLimits

0x4bf2,	// (0x0004ff13) main_hwr_training_symbol_option_pane

0xd9fa,	// (0x00058d1b) popup_hwr_training_preview_window_ParamLimits

0xd9fa,	// (0x00058d1b) popup_hwr_training_preview_window

0x4c12,	// (0x0004ff33) hwr_training_navi_pane_g5_ParamLimits

0x4c12,	// (0x0004ff33) hwr_training_navi_pane_g5

0xdb7e,	// (0x00058e9f) popup_char_count_window

0xa7ce,	// (0x00055aef) bg_popup_sub_pane_cp20_ParamLimits

0x5e17,	// (0x00051138) list_vitu2_match_list_pane_ParamLimits

0x5e23,	// (0x00051144) vitu2_page_scroll_pane_ParamLimits

0x5e23,	// (0x00051144) vitu2_page_scroll_pane

0xe081,	// (0x000593a2) list_single_hwr_training_symbol_option_pane_ParamLimits

0xe081,	// (0x000593a2) list_single_hwr_training_symbol_option_pane

0xe094,	// (0x000593b5) list_single_hwr_training_symbol_option_pane_g1

0xe09c,	// (0x000593bd) list_single_hwr_training_symbol_option_pane_t1

0xe0aa,	// (0x000593cb) bg_button_pane_cp023

0xe0b3,	// (0x000593d4) bg_button_pane_cp024

0xe0e6,	// (0x00059407) vitu2_page_scroll_pane_g1

0xe0ee,	// (0x0005940f) vitu2_page_scroll_pane_g2

0x0001,

0xfa1c,	// (0x0005ad3d) vitu2_page_scroll_pane_g

0xe0f6,	// (0x00059417) vitu2_page_scroll_pane_t1

0xb071,	// (0x00056392) popup_char_count_window_g1

0xe105,	// (0x00059426) popup_char_count_window_g2

0xdc66,	// (0x00058f87) popup_char_count_window_g3

0x0002,

0xfa21,	// (0x0005ad42) popup_char_count_window_g

0xe10e,	// (0x0005942f) popup_char_count_window_t1

0xa7c4,	// (0x00055ae5) main_vded2_pane

0xd7ad,	// (0x00058ace) aid_size_cell_imed_line

0xd7b7,	// (0x00058ad8) grid_imed_line_width_pane

0xa2aa,	// (0x000555cb) vid4_indicators_pane_g4

0xe11c,	// (0x0005943d) cell_imed_line_width_pane_ParamLimits

0xe11c,	// (0x0005943d) cell_imed_line_width_pane

0xe130,	// (0x00059451) cell_imed_line_width_pane_g1

0xe139,	// (0x0005945a) cell_imed_line_width_pane_g2

0x0001,

0xfa28,	// (0x0005ad49) cell_imed_line_width_pane_g

0x62f0,	// (0x00051611) main_vded2_pane_g1_ParamLimits

0x62f0,	// (0x00051611) main_vded2_pane_g1

0x6306,	// (0x00051627) main_vded2_pane_g2_ParamLimits

0x6306,	// (0x00051627) main_vded2_pane_g2

0x0001,

0xfa2d,	// (0x0005ad4e) main_vded2_pane_g_ParamLimits

0xfa2d,	// (0x0005ad4e) main_vded2_pane_g

0x6318,	// (0x00051639) vded2_slider_pane_ParamLimits

0x6318,	// (0x00051639) vded2_slider_pane

0x6328,	// (0x00051649) aid_size_touch_vded2_end

0x6332,	// (0x00051653) aid_size_touch_vded2_playhead

0xe141,	// (0x00059462) aid_size_touch_vded2_start

0xe149,	// (0x0005946a) vded2_slider_bg_pane

0xe152,	// (0x00059473) vded2_slider_pane_g1

0xe15b,	// (0x0005947c) vded2_slider_pane_g2

0x633c,	// (0x0005165d) vded2_slider_pane_g3

0x0002,

0xfa32,	// (0x0005ad53) vded2_slider_pane_g

0xe163,	// (0x00059484) vded2_slider_bg_pane_g1

0xe16c,	// (0x0005948d) vded2_slider_bg_pane_g2

0xe175,	// (0x00059496) vded2_slider_bg_pane_g3

0x0002,

0xfa39,	// (0x0005ad5a) vded2_slider_bg_pane_g

0x2fc3,	// (0x0004e2e4) aid_postcard_touch_down_pane_ParamLimits

0x2fc3,	// (0x0004e2e4) aid_postcard_touch_down_pane

0x2fd9,	// (0x0004e2fa) aid_postcard_touch_up_pane_ParamLimits

0x2fd9,	// (0x0004e2fa) aid_postcard_touch_up_pane

0xa7c4,	// (0x00055ae5) main_blid2_pane

0x9dd5,	// (0x000550f6) popup_blid2_search_window

0xa7c4,	// (0x00055ae5) blid2_gps_pane

0xa7c4,	// (0x00055ae5) blid2_navig_pane

0xa7c4,	// (0x00055ae5) blid2_search_pane

0xa7c4,	// (0x00055ae5) blid2_tripm_pane

0x6347,	// (0x00051668) blid2_search_pane_g1_ParamLimits

0x6347,	// (0x00051668) blid2_search_pane_g1

0x635f,	// (0x00051680) blid2_search_pane_t1_ParamLimits

0x635f,	// (0x00051680) blid2_search_pane_t1

0x6371,	// (0x00051692) aid_size_cell_blid2_gps_ParamLimits

0x6371,	// (0x00051692) aid_size_cell_blid2_gps

0x6389,	// (0x000516aa) blid2_gps_pane_g1_ParamLimits

0x6389,	// (0x000516aa) blid2_gps_pane_g1

0x639d,	// (0x000516be) grid_blid2_satellite_pane_ParamLimits

0x639d,	// (0x000516be) grid_blid2_satellite_pane

0x63b7,	// (0x000516d8) blid2_navig_pane_g1_ParamLimits

0x63b7,	// (0x000516d8) blid2_navig_pane_g1

0x63c3,	// (0x000516e4) blid2_navig_pane_t1_ParamLimits

0x63c3,	// (0x000516e4) blid2_navig_pane_t1

0x63de,	// (0x000516ff) blid2_navig_pane_t2_ParamLimits

0x63de,	// (0x000516ff) blid2_navig_pane_t2

0x0001,

0xfa40,	// (0x0005ad61) blid2_navig_pane_t_ParamLimits

0xfa40,	// (0x0005ad61) blid2_navig_pane_t

0x63f9,	// (0x0005171a) blid2_navig_ring_pane_ParamLimits

0x63f9,	// (0x0005171a) blid2_navig_ring_pane

0x6412,	// (0x00051733) blid2_speed_pane_ParamLimits

0x6412,	// (0x00051733) blid2_speed_pane

0x641e,	// (0x0005173f) blid2_tripm_pane_g1_ParamLimits

0x641e,	// (0x0005173f) blid2_tripm_pane_g1

0x6439,	// (0x0005175a) blid2_tripm_pane_g2_ParamLimits

0x6439,	// (0x0005175a) blid2_tripm_pane_g2

0x644d,	// (0x0005176e) blid2_tripm_pane_g3_ParamLimits

0x644d,	// (0x0005176e) blid2_tripm_pane_g3

0x6461,	// (0x00051782) blid2_tripm_pane_g4_ParamLimits

0x6461,	// (0x00051782) blid2_tripm_pane_g4

0x6475,	// (0x00051796) blid2_tripm_pane_g5_ParamLimits

0x6475,	// (0x00051796) blid2_tripm_pane_g5

0x0005,

0xfa45,	// (0x0005ad66) blid2_tripm_pane_g_ParamLimits

0xfa45,	// (0x0005ad66) blid2_tripm_pane_g

0x649b,	// (0x000517bc) blid2_tripm_pane_t1_ParamLimits

0x649b,	// (0x000517bc) blid2_tripm_pane_t1

0x64b6,	// (0x000517d7) blid2_tripm_pane_t2_ParamLimits

0x64b6,	// (0x000517d7) blid2_tripm_pane_t2

0x64cf,	// (0x000517f0) blid2_tripm_pane_t3_ParamLimits

0x64cf,	// (0x000517f0) blid2_tripm_pane_t3

0x0003,

0xfa52,	// (0x0005ad73) blid2_tripm_pane_t_ParamLimits

0xfa52,	// (0x0005ad73) blid2_tripm_pane_t

0x6516,	// (0x00051837) cell_blid2_satellite_pane_ParamLimits

0x6516,	// (0x00051837) cell_blid2_satellite_pane

0x6534,	// (0x00051855) cell_blid2_satellite_pane_g1

0xe17e,	// (0x0005949f) cell_blid2_satellite_pane_t1

0xb131,	// (0x00056452) blid2_speed_pane_g1

0xe18c,	// (0x000594ad) blid2_speed_pane_t1

0xe19a,	// (0x000594bb) blid2_speed_pane_t2

0x0001,

0xfa5b,	// (0x0005ad7c) blid2_speed_pane_t

0xb131,	// (0x00056452) blid2_navig_ring_pane_g1

0x653d,	// (0x0005185e) blid2_navig_ring_pane_g2

0x6545,	// (0x00051866) blid2_navig_ring_pane_g3

0x654d,	// (0x0005186e) blid2_navig_ring_pane_g4

0x6555,	// (0x00051876) blid2_navig_ring_pane_g5

0x0004,

0xfa60,	// (0x0005ad81) blid2_navig_ring_pane_g

0xa7c4,	// (0x00055ae5) bg_popup_window_pane_cp011

0xe1a8,	// (0x000594c9) popup_blid2_search_window_g1

0xe1b0,	// (0x000594d1) popup_blid2_search_window_t1

0xe1be,	// (0x000594df) popup_blid2_search_window_t2

0x0001,

0xfa6b,	// (0x0005ad8c) popup_blid2_search_window_t

0xb231,	// (0x00056552) main_browser_pane_g1

0xaf37,	// (0x00056258) main_browser_pane_ParamLimits

0xa7ce,	// (0x00055aef) bg_button_pane_cp011_ParamLimits

0x56fa,	// (0x00050a1b) cell_vitu2_function_pane_g1_ParamLimits

0xbc15,	// (0x00056f36) bg_popup_sub_pane_cp22_ParamLimits

0x0803,	// (0x0004bb24) input_focus_pane_cp08_ParamLimits

0x5f90,	// (0x000512b1) popup_vitu2_query_button_pane_ParamLimits

0x5f90,	// (0x000512b1) popup_vitu2_query_button_pane

0x081e,	// (0x0004bb3f) popup_vitu2_query_input_button_pane

0xde38,	// (0x00059159) popup_vitu2_query_window_g1_ParamLimits

0x0826,	// (0x0004bb47) popup_vitu2_query_window_g2_ParamLimits

0xf96c,	// (0x0005ac8d) popup_vitu2_query_window_g_ParamLimits

0xa7c4,	// (0x00055ae5) bg_button_pane_cp026

0x655d,	// (0x0005187e) popup_vitu2_query_input_button_pane_g1

0xa7c4,	// (0x00055ae5) bg_button_pane_cp025

0xe1cc,	// (0x000594ed) popup_vitu2_query_button_pane_t1

0x3ee0,	// (0x0004f201) main_mp3_pane_t6

0x3eee,	// (0x0004f20f) popup_slider_window_cp01

0xa216,	// (0x00055537) cam4_battery_pane

0xa269,	// (0x0005558a) cam4_battery_pane_cp02

0xa3f2,	// (0x00055713) cam4_battery_pane_cp01

0xa3f2,	// (0x00055713) cam4_battery_pane_cp03

0xb131,	// (0x00056452) cam4_battery_pane_g1

0xe1da,	// (0x000594fb) cam4_battery_pane_g2

0x0001,

0xfa70,	// (0x0005ad91) cam4_battery_pane_g

0xd1b4,	// (0x000584d5) popup_blid_sat_info2_window_t11

0xb983,	// (0x00056ca4) aid_size_touch_mv_arrow_left_ParamLimits

0xb9ae,	// (0x00056ccf) aid_size_touch_mv_arrow_right_ParamLimits

0xba0c,	// (0x00056d2d) navi_pane_g1_ParamLimits

0xba18,	// (0x00056d39) navi_pane_g2_ParamLimits

0xba46,	// (0x00056d67) navi_pane_g3_ParamLimits

0xf334,	// (0x0005a655) navi_pane_g_ParamLimits

0x2cda,	// (0x0004dffb) navi_pane_mv_t1_ParamLimits

0x4a5b,	// (0x0004fd7c) grid_imed_effect_pane_ParamLimits

0x1c0d,	// (0x0004cf2e) aid_placing_vt_slider_lsc

0xb180,	// (0x000564a1) aid_placing_vt_slider_prt

0xa7ce,	// (0x00055aef) bg_tb_trans_pane_cp01_ParamLimits

0xd460,	// (0x00058781) popup_image_details_window_g1_ParamLimits

0xd473,	// (0x00058794) popup_image_details_window_g2_ParamLimits

0xd488,	// (0x000587a9) popup_image_details_window_g3_ParamLimits

0xd488,	// (0x000587a9) popup_image_details_window_g3

0xf673,	// (0x0005a994) popup_image_details_window_g_ParamLimits

0xd49c,	// (0x000587bd) popup_image_details_window_t1_ParamLimits

0xd4ae,	// (0x000587cf) popup_image_details_window_t2_ParamLimits

0xd4c7,	// (0x000587e8) popup_image_details_window_t3_ParamLimits

0xd4db,	// (0x000587fc) popup_image_details_window_t4_ParamLimits

0xd4f6,	// (0x00058817) popup_image_details_window_t5_ParamLimits

0xf67a,	// (0x0005a99b) popup_image_details_window_t_ParamLimits

0x61c4,	// (0x000514e5) cl_header_name_pane_ParamLimits

0x61c4,	// (0x000514e5) cl_header_name_pane

0x6565,	// (0x00051886) cl_header_name_pane_t1_ParamLimits

0x6565,	// (0x00051886) cl_header_name_pane_t1

0x6586,	// (0x000518a7) cl_header_name_pane_t2_ParamLimits

0x6586,	// (0x000518a7) cl_header_name_pane_t2

0x65c8,	// (0x000518e9) cl_header_name_pane_t3_ParamLimits

0x65c8,	// (0x000518e9) cl_header_name_pane_t3

0x0002,

0xfa75,	// (0x0005ad96) cl_header_name_pane_t_ParamLimits

0xfa75,	// (0x0005ad96) cl_header_name_pane_t

0xbad5,	// (0x00056df6) navi_pane_mv_g2_ParamLimits

0xdb66,	// (0x00058e87) field_vitu2_entry_pane_g1_ParamLimits

0xdb72,	// (0x00058e93) field_vitu2_entry_pane_g2_ParamLimits

0xbbf3,	// (0x00056f14) field_vitu2_entry_pane_g3_ParamLimits

0xbbf3,	// (0x00056f14) field_vitu2_entry_pane_g3

0xf875,	// (0x0005ab96) field_vitu2_entry_pane_g_ParamLimits

0x5676,	// (0x00050997) cell_vitu2_itu_pane_g1_ParamLimits

0x568e,	// (0x000509af) cell_vitu2_itu_pane_g2_ParamLimits

0x568e,	// (0x000509af) cell_vitu2_itu_pane_g2

0x0001,

0xf881,	// (0x0005aba2) cell_vitu2_itu_pane_g_ParamLimits

0xf881,	// (0x0005aba2) cell_vitu2_itu_pane_g

0xa7ce,	// (0x00055aef) bg_vkb2_func_pane_cp05_ParamLimits

0xa7ce,	// (0x00055aef) bg_vkb2_func_pane_cp05

0xa7ce,	// (0x00055aef) bg_vkb2_func_pane_cp03

0xa7ce,	// (0x00055aef) bg_vkb2_func_pane_cp04

0xa7ce,	// (0x00055aef) bg_vkb2_func_pane_cp10_ParamLimits

0xa7ce,	// (0x00055aef) bg_vkb2_func_pane_cp10

0x0945,	// (0x0004bc66) bg_vkb2_func_pane_cp08

0x6170,	// (0x00051491) bg_vkb2_func_pane_cp06

0x617c,	// (0x0005149d) bg_vkb2_func_pane_cp07

0xe0bc,	// (0x000593dd) bg_vkb2_func_pane_cp11_ParamLimits

0xe0bc,	// (0x000593dd) bg_vkb2_func_pane_cp11

0xe0d1,	// (0x000593f2) bg_vkb2_func_pane_cp12_ParamLimits

0xe0d1,	// (0x000593f2) bg_vkb2_func_pane_cp12

0xa7c4,	// (0x00055ae5) bg_vkb2_func_pane_cp09

0xdb90,	// (0x00058eb1) bg_vkb2_func_pane_g1

0xb342,	// (0x00056663) bg_vkb2_func_pane_g2

0xdb98,	// (0x00058eb9) bg_vkb2_func_pane_g3

0xdba0,	// (0x00058ec1) bg_vkb2_func_pane_g4

0xddfd,	// (0x0005911e) bg_vkb2_func_pane_g5

0xdbb8,	// (0x00058ed9) bg_vkb2_func_pane_g6

0xdbc0,	// (0x00058ee1) bg_vkb2_func_pane_g7

0xdbb0,	// (0x00058ed1) bg_vkb2_func_pane_g8

0xb322,	// (0x00056643) bg_vkb2_func_pane_g9

0x0008,

0xfa7c,	// (0x0005ad9d) bg_vkb2_func_pane_g

0x6489,	// (0x000517aa) blid2_tripm_pane_g6_ParamLimits

0x6489,	// (0x000517aa) blid2_tripm_pane_g6

0xdab8,	// (0x00058dd9) mp4_progress_pane_g1

0x6502,	// (0x00051823) blid2_tripm_values_pane_ParamLimits

0x6502,	// (0x00051823) blid2_tripm_values_pane

0x65f9,	// (0x0005191a) blid2_tripm_values_pane_t1

0x6607,	// (0x00051928) blid2_tripm_values_pane_t2

0x6615,	// (0x00051936) blid2_tripm_values_pane_t3

0x6623,	// (0x00051944) blid2_tripm_values_pane_t4

0x6631,	// (0x00051952) blid2_tripm_values_pane_t5

0x663f,	// (0x00051960) blid2_tripm_values_pane_t6

0x664d,	// (0x0005196e) blid2_tripm_values_pane_t7

0x665b,	// (0x0005197c) blid2_tripm_values_pane_t8

0x6669,	// (0x0005198a) blid2_tripm_values_pane_t9

0x0008,

0xfa8f,	// (0x0005adb0) blid2_tripm_values_pane_t

0x1c4f,	// (0x0004cf70) call_video_pane_t1_ParamLimits

0x1c6d,	// (0x0004cf8e) call_video_pane_t2_ParamLimits

0xf1e2,	// (0x0005a503) call_video_pane_t_ParamLimits

0x0696,	// (0x0004b9b7) msg_header_pane_g1_ParamLimits

0xbcca,	// (0x00056feb) msg_header_pane_g2_ParamLimits

0xbcca,	// (0x00056feb) msg_header_pane_g2

0x0001,

0xf3d7,	// (0x0005a6f8) msg_header_pane_g_ParamLimits

0xf3d7,	// (0x0005a6f8) msg_header_pane_g

0xaf37,	// (0x00056258) main_clock2_pane_ParamLimits

0x475c,	// (0x0004fa7d) grid_clock2_toolbar_pane_ParamLimits

0x475c,	// (0x0004fa7d) grid_clock2_toolbar_pane

0x475c,	// (0x0004fa7d) listscroll_clock2_pane_ParamLimits

0x475c,	// (0x0004fa7d) listscroll_clock2_pane

0x4840,	// (0x0004fb61) main_clock2_pane_t3_ParamLimits

0x4840,	// (0x0004fb61) main_clock2_pane_t3

0x4864,	// (0x0004fb85) main_clock2_pane_t4_ParamLimits

0x4864,	// (0x0004fb85) main_clock2_pane_t4

0xe1e4,	// (0x00059505) cell_clock2_toolbar_pane

0xe1ec,	// (0x0005950d) cell_clock2_toolbar_pane_cp01

0xe1ec,	// (0x0005950d) cell_clock2_toolbar_pane_cp02

0xe1f4,	// (0x00059515) cell_clock2_toolbar_pane_cp03

0xe1fc,	// (0x0005951d) list_clock2_pane

0xb8f4,	// (0x00056c15) scroll_pane_cp10

0xe204,	// (0x00059525) list_single_clock2_pane_ParamLimits

0xe204,	// (0x00059525) list_single_clock2_pane

0xb0fb,	// (0x0005641c) list_highlight_pane_cp08

0xe211,	// (0x00059532) list_single_clock2_pane_t1

0xe21f,	// (0x00059540) list_single_clock2_pane_t2

0x0001,

0x01bb,	// (0x0004b4dc) list_single_clock2_pane_t

0xa7c4,	// (0x00055ae5) bg_button_pane_cp10

0xe22d,	// (0x0005954e) cell_clock2_toolbar_pane_g1

0x2f4f,	// (0x0004e270) aid_main_viewer_pane_g1_ParamLimits

0x2f4f,	// (0x0004e270) aid_main_viewer_pane_g1

0x2f5d,	// (0x0004e27e) aid_main_viewer_pane_g2_ParamLimits

0x2f5d,	// (0x0004e27e) aid_main_viewer_pane_g2

0x2f6b,	// (0x0004e28c) aid_main_viewer_pane_g3_ParamLimits

0x2f6b,	// (0x0004e28c) aid_main_viewer_pane_g3

0x2f7a,	// (0x0004e29b) aid_main_viewer_pane_g4_ParamLimits

0x2f7a,	// (0x0004e29b) aid_main_viewer_pane_g4

0x0003,

0xf3e8,	// (0x0005a709) aid_main_viewer_pane_g_ParamLimits

0xf3e8,	// (0x0005a709) aid_main_viewer_pane_g

0x38c3,	// (0x0004ebe4) main_calc_pane_ParamLimits

0x38d7,	// (0x0004ebf8) main_dialer2_pane_ParamLimits

0xa7c4,	// (0x00055ae5) main_cam6_pane

0xa7c4,	// (0x00055ae5) main_vid6_pane

0x4768,	// (0x0004fa89) listscroll_gen_pane_cp06_ParamLimits

0x4768,	// (0x0004fa89) listscroll_gen_pane_cp06

0x4887,	// (0x0004fba8) main_clock2_pane_t5_ParamLimits

0x4887,	// (0x0004fba8) main_clock2_pane_t5

0x48e5,	// (0x0004fc06) aid_call2_pane_cp10_ParamLimits

0x48f7,	// (0x0004fc18) aid_call_pane_cp10_ParamLimits

0xb977,	// (0x00056c98) popup_clock_analogue_window_cp10_g1_ParamLimits

0xb977,	// (0x00056c98) popup_clock_analogue_window_cp10_g2_ParamLimits

0x4909,	// (0x0004fc2a) popup_clock_analogue_window_cp10_g3_ParamLimits

0x4909,	// (0x0004fc2a) popup_clock_analogue_window_cp10_g4_ParamLimits

0xb977,	// (0x00056c98) popup_clock_analogue_window_cp10_g5_ParamLimits

0xf72f,	// (0x0005aa50) popup_clock_analogue_window_cp10_g_ParamLimits

0x491f,	// (0x0004fc40) popup_clock_analogue_window_cp10_t1_ParamLimits

0x4e28,	// (0x00050149) cell_dialer2_keypad_pane_g2_ParamLimits

0x4e28,	// (0x00050149) cell_dialer2_keypad_pane_g2

0x0001,

0xf814,	// (0x0005ab35) cell_dialer2_keypad_pane_g_ParamLimits

0xf814,	// (0x0005ab35) cell_dialer2_keypad_pane_g

0x4e44,	// (0x00050165) cell_dialer2_keypad_pane_t1

0x5a15,	// (0x00050d36) main_cset_text2_pane_ParamLimits

0x5a15,	// (0x00050d36) main_cset_text2_pane

0xe024,	// (0x00059345) area_vitu2_query_pane_g1_ParamLimits

0x08ff,	// (0x0004bc20) area_vitu2_query_pane_g2_ParamLimits

0xf9bf,	// (0x0005ace0) area_vitu2_query_pane_g_ParamLimits

0xa3ce,	// (0x000556ef) area_vitu2_query_pane_t7_ParamLimits

0xa3ce,	// (0x000556ef) area_vitu2_query_pane_t7

0x6170,	// (0x00051491) bg_button_pane_cp018_ParamLimits

0x617c,	// (0x0005149d) bg_button_pane_cp021_ParamLimits

0x0936,	// (0x0004bc57) bg_button_pane_cp022_ParamLimits

0x0945,	// (0x0004bc66) bg_vkb2_func_pane_cp08_ParamLimits

0x6170,	// (0x00051491) bg_vkb2_func_pane_cp06_ParamLimits

0x617c,	// (0x0005149d) bg_vkb2_func_pane_cp07_ParamLimits

0x0955,	// (0x0004bc76) input_focus_pane_cp09_ParamLimits

0x6677,	// (0x00051998) cam6_autofocus_pane_ParamLimits

0x6677,	// (0x00051998) cam6_autofocus_pane

0x6683,	// (0x000519a4) cam6_image_uncrop_pane_ParamLimits

0x6683,	// (0x000519a4) cam6_image_uncrop_pane

0x6693,	// (0x000519b4) cam6_indi_pane_ParamLimits

0x6693,	// (0x000519b4) cam6_indi_pane

0x66a9,	// (0x000519ca) cam6_mode_pane_ParamLimits

0x66a9,	// (0x000519ca) cam6_mode_pane

0x66bb,	// (0x000519dc) cam6_timer_pane_ParamLimits

0x66bb,	// (0x000519dc) cam6_timer_pane

0x66c7,	// (0x000519e8) cam6_zoom_pane_ParamLimits

0x66c7,	// (0x000519e8) cam6_zoom_pane

0x66d4,	// (0x000519f5) cam6_mode_pane_g1_ParamLimits

0x66d4,	// (0x000519f5) cam6_mode_pane_g1

0x66e4,	// (0x00051a05) cam6_mode_pane_g2_ParamLimits

0x66e4,	// (0x00051a05) cam6_mode_pane_g2

0x66f4,	// (0x00051a15) cam6_mode_pane_g3_ParamLimits

0x66f4,	// (0x00051a15) cam6_mode_pane_g3

0x6704,	// (0x00051a25) cam6_mode_pane_g4_ParamLimits

0x6704,	// (0x00051a25) cam6_mode_pane_g4

0x0003,

0xfaa2,	// (0x0005adc3) cam6_mode_pane_g_ParamLimits

0xfaa2,	// (0x0005adc3) cam6_mode_pane_g

0xd3b9,	// (0x000586da) bg_tb_trans_pane_cp08_ParamLimits

0xd3b9,	// (0x000586da) bg_tb_trans_pane_cp08

0xe235,	// (0x00059556) cam6_battery_pane_ParamLimits

0xe235,	// (0x00059556) cam6_battery_pane

0xe24b,	// (0x0005956c) cam6_indi_pane_g1_ParamLimits

0xe24b,	// (0x0005956c) cam6_indi_pane_g1

0xe25d,	// (0x0005957e) cam6_indi_pane_g2_ParamLimits

0xe25d,	// (0x0005957e) cam6_indi_pane_g2

0xe26f,	// (0x00059590) cam6_indi_pane_g3_ParamLimits

0xe26f,	// (0x00059590) cam6_indi_pane_g3

0x0002,

0x01c9,	// (0x0004b4ea) cam6_indi_pane_g_ParamLimits

0x01c9,	// (0x0004b4ea) cam6_indi_pane_g

0xe281,	// (0x000595a2) cam6_indi_pane_t1_ParamLimits

0xe281,	// (0x000595a2) cam6_indi_pane_t1

0x544e,	// (0x0005076f) cam6_autofocus_pane_g1

0x5456,	// (0x00050777) cam6_autofocus_pane_g2

0x545e,	// (0x0005077f) cam6_autofocus_pane_g3

0x5466,	// (0x00050787) cam6_autofocus_pane_g4

0x0003,

0xfaab,	// (0x0005adcc) cam6_autofocus_pane_g

0xe2a7,	// (0x000595c8) cam6_timer_pane_g1

0xe2af,	// (0x000595d0) cam6_timer_pane_t1

0xe2bd,	// (0x000595de) cam6_zoom_cont_pane

0xe2c5,	// (0x000595e6) cam6_zoom_pane_g1

0xe2ce,	// (0x000595ef) cam6_zoom_pane_g2

0x6714,	// (0x00051a35) cam6_zoom_pane_g3

0x0002,

0xfab4,	// (0x0005add5) cam6_zoom_pane_g

0xb131,	// (0x00056452) cam6_battery_pane_g1

0xb131,	// (0x00056452) cam6_battery_pane_g2

0x0001,

0xf398,	// (0x0005a6b9) cam6_battery_pane_g

0xe2c5,	// (0x000595e6) cam6_zoom_cont_pane_g1

0xe2ce,	// (0x000595ef) cam6_zoom_cont_pane_g2

0xe2d7,	// (0x000595f8) cam6_zoom_cont_pane_g3

0x0002,

0x01e0,	// (0x0004b501) cam6_zoom_cont_pane_g

0x6732,	// (0x00051a53) cam6_mode_pane_cp_ParamLimits

0x6732,	// (0x00051a53) cam6_mode_pane_cp

0x6744,	// (0x00051a65) cam6_zoom_pane_cp_ParamLimits

0x6744,	// (0x00051a65) cam6_zoom_pane_cp

0x6750,	// (0x00051a71) vid6_image_uncrop_cif_pane_ParamLimits

0x6750,	// (0x00051a71) vid6_image_uncrop_cif_pane

0x6760,	// (0x00051a81) vid6_image_uncrop_nhd_pane_ParamLimits

0x6760,	// (0x00051a81) vid6_image_uncrop_nhd_pane

0x676f,	// (0x00051a90) vid6_image_uncrop_vga_pane_ParamLimits

0x676f,	// (0x00051a90) vid6_image_uncrop_vga_pane

0x677e,	// (0x00051a9f) vid6_image_uncrop_wvga_pane_ParamLimits

0x677e,	// (0x00051a9f) vid6_image_uncrop_wvga_pane

0x678d,	// (0x00051aae) vid6_indi_pane_ParamLimits

0x678d,	// (0x00051aae) vid6_indi_pane

0xd3b9,	// (0x000586da) bg_tb_trans_pane_cp09_ParamLimits

0xd3b9,	// (0x000586da) bg_tb_trans_pane_cp09

0xe2ef,	// (0x00059610) cam6_battery_pane_cp_ParamLimits

0xe2ef,	// (0x00059610) cam6_battery_pane_cp

0xe2fb,	// (0x0005961c) vid6_indi_pane_g1_ParamLimits

0xe2fb,	// (0x0005961c) vid6_indi_pane_g1

0xe30d,	// (0x0005962e) vid6_indi_pane_g2_ParamLimits

0xe30d,	// (0x0005962e) vid6_indi_pane_g2

0xe31f,	// (0x00059640) vid6_indi_pane_g3_ParamLimits

0xe31f,	// (0x00059640) vid6_indi_pane_g3

0xe334,	// (0x00059655) vid6_indi_pane_g4_ParamLimits

0xe334,	// (0x00059655) vid6_indi_pane_g4

0xe349,	// (0x0005966a) vid6_indi_pane_g5_ParamLimits

0xe349,	// (0x0005966a) vid6_indi_pane_g5

0x0004,

0x01e7,	// (0x0004b508) vid6_indi_pane_g_ParamLimits

0x01e7,	// (0x0004b508) vid6_indi_pane_g

0xe363,	// (0x00059684) vid6_indi_pane_t1_ParamLimits

0xe363,	// (0x00059684) vid6_indi_pane_t1

0xe379,	// (0x0005969a) vid6_indi_pane_t2_ParamLimits

0xe379,	// (0x0005969a) vid6_indi_pane_t2

0xe3a1,	// (0x000596c2) vid6_indi_pane_t3_ParamLimits

0xe3a1,	// (0x000596c2) vid6_indi_pane_t3

0xe3c9,	// (0x000596ea) vid6_indi_pane_t4_ParamLimits

0xe3c9,	// (0x000596ea) vid6_indi_pane_t4

0x0003,

0x01f2,	// (0x0004b513) vid6_indi_pane_t_ParamLimits

0x01f2,	// (0x0004b513) vid6_indi_pane_t

0xe3ed,	// (0x0005970e) wait_bar_pane_cp08

0x67a5,	// (0x00051ac6) main_cset_text2_pane_t1_ParamLimits

0x67a5,	// (0x00051ac6) main_cset_text2_pane_t1

0x671d,	// (0x00051a3e) listscroll_gen_pane_cp06_t1_ParamLimits

0x671d,	// (0x00051a3e) listscroll_gen_pane_cp06_t1

0xa7c4,	// (0x00055ae5) main_cam6_set_pane

0xaec5,	// (0x000561e6) bg_tb_trans_pane_cp06_ParamLimits

0xa21e,	// (0x0005553f) cam4_indicators_pane_g1_ParamLimits

0xa22f,	// (0x00055550) cam4_indicators_pane_g2_ParamLimits

0xf851,	// (0x0005ab72) cam4_indicators_pane_g_ParamLimits

0xa247,	// (0x00055568) cam4_indicators_pane_t1_ParamLimits

0xa7ce,	// (0x00055aef) bg_tb_trans_pane_cp07_ParamLimits

0xa271,	// (0x00055592) vid4_indicators_pane_g1_ParamLimits

0xa285,	// (0x000555a6) vid4_indicators_pane_g2_ParamLimits

0xa299,	// (0x000555ba) vid4_indicators_pane_g3_ParamLimits

0xa2aa,	// (0x000555cb) vid4_indicators_pane_g4_ParamLimits

0xf863,	// (0x0005ab84) vid4_indicators_pane_g_ParamLimits

0xa2c6,	// (0x000555e7) vid4_indicators_pane_t1_ParamLimits

0xa3fa,	// (0x0005571b) vid4_progress_pane_g1_ParamLimits

0xa40a,	// (0x0005572b) vid4_progress_pane_g2_ParamLimits

0x62b7,	// (0x000515d8) vid4_progress_pane_g3_ParamLimits

0xa41a,	// (0x0005573b) vid4_progress_pane_g4_ParamLimits

0xfa0a,	// (0x0005ad2b) vid4_progress_pane_g_ParamLimits

0x62c9,	// (0x000515ea) vid4_progress_pane_t1_ParamLimits

0xa432,	// (0x00055753) vid4_progress_pane_t2_ParamLimits

0xa447,	// (0x00055768) vid4_progress_pane_t3_ParamLimits

0xfa15,	// (0x0005ad36) vid4_progress_pane_t_ParamLimits

0x62df,	// (0x00051600) wait_bar_pane_cp07_ParamLimits

0x67c3,	// (0x00051ae4) main_cam6_set_pane_g2_ParamLimits

0x67c3,	// (0x00051ae4) main_cam6_set_pane_g2

0x67e7,	// (0x00051b08) main_cset6_listscroll_pane_ParamLimits

0x67e7,	// (0x00051b08) main_cset6_listscroll_pane

0x6803,	// (0x00051b24) main_cset6_slider_pane_ParamLimits

0x6803,	// (0x00051b24) main_cset6_slider_pane

0x6819,	// (0x00051b3a) main_cset6_text2_pane_ParamLimits

0x6819,	// (0x00051b3a) main_cset6_text2_pane

0xe3fc,	// (0x0005971d) main_cset6_text_pane

0xe404,	// (0x00059725) main_cset_list_pane_copy1_ParamLimits

0xe404,	// (0x00059725) main_cset_list_pane_copy1

0xe414,	// (0x00059735) scroll_pane_cp028_copy1

0x6827,	// (0x00051b48) cset_list_set_pane_copy1

0x6839,	// (0x00051b5a) aid_position_infowindow_above_copy1

0x6841,	// (0x00051b62) aid_position_infowindow_below_copy1

0x0979,	// (0x0004bc9a) cset_list_set_pane_g1_copy1

0x0981,	// (0x0004bca2) cset_list_set_pane_g3_copy1_ParamLimits

0x0981,	// (0x0004bca2) cset_list_set_pane_g3_copy1

0x0990,	// (0x0004bcb1) cset_list_set_pane_t1_copy1_ParamLimits

0x0990,	// (0x0004bcb1) cset_list_set_pane_t1_copy1

0xa7ce,	// (0x00055aef) list_highlight_pane_cp021_copy1_ParamLimits

0xa7ce,	// (0x00055aef) list_highlight_pane_cp021_copy1

0xe41d,	// (0x0005973e) cset6_slider_pane_ParamLimits

0xe41d,	// (0x0005973e) cset6_slider_pane

0xe449,	// (0x0005976a) main_cset6_slider_pane_g1_ParamLimits

0xe449,	// (0x0005976a) main_cset6_slider_pane_g1

0x6849,	// (0x00051b6a) main_cset6_slider_pane_g2_ParamLimits

0x6849,	// (0x00051b6a) main_cset6_slider_pane_g2

0xe471,	// (0x00059792) main_cset6_slider_pane_g3_ParamLimits

0xe471,	// (0x00059792) main_cset6_slider_pane_g3

0x6871,	// (0x00051b92) main_cset6_slider_pane_g4_ParamLimits

0x6871,	// (0x00051b92) main_cset6_slider_pane_g4

0xe47d,	// (0x0005979e) main_cset6_slider_pane_g5_ParamLimits

0xe47d,	// (0x0005979e) main_cset6_slider_pane_g5

0xdce6,	// (0x00059007) main_cset6_slider_pane_g7_ParamLimits

0xdce6,	// (0x00059007) main_cset6_slider_pane_g7

0xdcf2,	// (0x00059013) main_cset6_slider_pane_g8_ParamLimits

0xdcf2,	// (0x00059013) main_cset6_slider_pane_g8

0x5abb,	// (0x00050ddc) main_cset6_slider_pane_g9_ParamLimits

0x5abb,	// (0x00050ddc) main_cset6_slider_pane_g9

0x5ac7,	// (0x00050de8) main_cset6_slider_pane_g10_ParamLimits

0x5ac7,	// (0x00050de8) main_cset6_slider_pane_g10

0x5ad3,	// (0x00050df4) main_cset6_slider_pane_g11_ParamLimits

0x5ad3,	// (0x00050df4) main_cset6_slider_pane_g11

0x5adf,	// (0x00050e00) main_cset6_slider_pane_g12_ParamLimits

0x5adf,	// (0x00050e00) main_cset6_slider_pane_g12

0x5aeb,	// (0x00050e0c) main_cset6_slider_pane_g13_ParamLimits

0x5aeb,	// (0x00050e0c) main_cset6_slider_pane_g13

0x5af7,	// (0x00050e18) main_cset6_slider_pane_g14_ParamLimits

0x5af7,	// (0x00050e18) main_cset6_slider_pane_g14

0x687d,	// (0x00051b9e) main_cset6_slider_pane_g15_ParamLimits

0x687d,	// (0x00051b9e) main_cset6_slider_pane_g15

0xdcfe,	// (0x0005901f) main_cset6_slider_pane_g16_ParamLimits

0xdcfe,	// (0x0005901f) main_cset6_slider_pane_g16

0xdd0a,	// (0x0005902b) main_cset6_slider_pane_g17_ParamLimits

0xdd0a,	// (0x0005902b) main_cset6_slider_pane_g17

0x0011,

0xfabb,	// (0x0005addc) main_cset6_slider_pane_g_ParamLimits

0xfabb,	// (0x0005addc) main_cset6_slider_pane_g

0xe489,	// (0x000597aa) main_cset6_slider_pane_t1_ParamLimits

0xe489,	// (0x000597aa) main_cset6_slider_pane_t1

0x68ad,	// (0x00051bce) main_cset6_slider_pane_t2_ParamLimits

0x68ad,	// (0x00051bce) main_cset6_slider_pane_t2

0x68d8,	// (0x00051bf9) main_cset6_slider_pane_t3_ParamLimits

0x68d8,	// (0x00051bf9) main_cset6_slider_pane_t3

0x6903,	// (0x00051c24) main_cset6_slider_pane_t4_ParamLimits

0x6903,	// (0x00051c24) main_cset6_slider_pane_t4

0x692e,	// (0x00051c4f) main_cset6_slider_pane_t5_ParamLimits

0x692e,	// (0x00051c4f) main_cset6_slider_pane_t5

0xe4ca,	// (0x000597eb) main_cset6_slider_pane_t7_ParamLimits

0xe4ca,	// (0x000597eb) main_cset6_slider_pane_t7

0x6959,	// (0x00051c7a) main_cset6_slider_pane_t8_ParamLimits

0x6959,	// (0x00051c7a) main_cset6_slider_pane_t8

0x697d,	// (0x00051c9e) main_cset6_slider_pane_t9_ParamLimits

0x697d,	// (0x00051c9e) main_cset6_slider_pane_t9

0x69a1,	// (0x00051cc2) main_cset6_slider_pane_t10_ParamLimits

0x69a1,	// (0x00051cc2) main_cset6_slider_pane_t10

0x69c5,	// (0x00051ce6) main_cset6_slider_pane_t11_ParamLimits

0x69c5,	// (0x00051ce6) main_cset6_slider_pane_t11

0xe500,	// (0x00059821) main_cset6_slider_pane_t14_ParamLimits

0xe500,	// (0x00059821) main_cset6_slider_pane_t14

0xe54b,	// (0x0005986c) main_cset6_slider_pane_t15_ParamLimits

0xe54b,	// (0x0005986c) main_cset6_slider_pane_t15

0x000b,

0xfae0,	// (0x0005ae01) main_cset6_slider_pane_t_ParamLimits

0xfae0,	// (0x0005ae01) main_cset6_slider_pane_t

0xd9cf,	// (0x00058cf0) cset_slider_pane_g1_copy1

0xe539,	// (0x0005985a) cset_slider_pane_g2_copy1

0xe542,	// (0x00059863) cset_slider_pane_g3_copy1

0xa7c4,	// (0x00055ae5) bg_popup_sub_pane_cp011_copy1

0xe58d,	// (0x000598ae) main_cset_text_pane_g1_copy1

0xde4c,	// (0x0005916d) main_cset_text_pane_t1_copy1

0xde5a,	// (0x0005917b) main_cset_text_pane_t2_copy1

0xde68,	// (0x00059189) main_cset_text_pane_t3_copy1

0xde76,	// (0x00059197) main_cset_text_pane_t4_copy1

0xde84,	// (0x000591a5) main_cset_text_pane_t5_copy1

0xe595,	// (0x000598b6) main_cset_text_pane_t6_copy1

0xe5a3,	// (0x000598c4) main_cset_text_pane_t7_copy1

0x67a5,	// (0x00051ac6) main_cset_text2_pane_t1_copy1

0xa7ce,	// (0x00055aef) main_ncimui_pane

0x3b1b,	// (0x0004ee3c) popup_query_ncimui_window_ParamLimits

0x3b1b,	// (0x0004ee3c) popup_query_ncimui_window

0x9ecd,	// (0x000551ee) field_cale_ev2_pane_g4_ParamLimits

0x9ecd,	// (0x000551ee) field_cale_ev2_pane_g4

0x4d07,	// (0x00050028) cell_video_dialer_keypad_pane_g2_ParamLimits

0x4d07,	// (0x00050028) cell_video_dialer_keypad_pane_g2

0x0001,

0xf7eb,	// (0x0005ab0c) cell_video_dialer_keypad_pane_g_ParamLimits

0xf7eb,	// (0x0005ab0c) cell_video_dialer_keypad_pane_g

0x4d1f,	// (0x00050040) cell_video_dialer_keypad_pane_t1

0xa7c4,	// (0x00055ae5) bg_popup_window_pane_cp012

0xce29,	// (0x0005814a) heading_pane_cp06

0xe5cf,	// (0x000598f0) ncim_query_content_pane

0xa7c4,	// (0x00055ae5) bg_popup_heading_pane_cp01

0xe5d7,	// (0x000598f8) ncim_heading_pane_t1

0xe5e5,	// (0x00059906) ncim_indicator_popup_pane

0xe5f7,	// (0x00059918) ncim_query_button_pane

0xe60b,	// (0x0005992c) ncim_query_content_pane_t1

0xe61d,	// (0x0005993e) ncim_query_content_pane_t2

0x0005,

0xfb24,	// (0x0005ae45) ncim_query_content_pane_t

0xe657,	// (0x00059978) ncim_query_list_pane

0xe669,	// (0x0005998a) ncim_query_popup_pane

0xe5e5,	// (0x00059906) ncim_indicator_popup_pane_ParamLimits

0x6b12,	// (0x00051e33) ncim_query_content_pane_g1_ParamLimits

0x6b12,	// (0x00051e33) ncim_query_content_pane_g1

0xe60b,	// (0x0005992c) ncim_query_content_pane_t1_ParamLimits

0xe61d,	// (0x0005993e) ncim_query_content_pane_t2_ParamLimits

0x6b1e,	// (0x00051e3f) ncim_query_content_pane_t3_ParamLimits

0x6b1e,	// (0x00051e3f) ncim_query_content_pane_t3

0x6b46,	// (0x00051e67) ncim_query_content_pane_t4_ParamLimits

0x6b46,	// (0x00051e67) ncim_query_content_pane_t4

0x6b6e,	// (0x00051e8f) ncim_query_content_pane_t5_ParamLimits

0x6b6e,	// (0x00051e8f) ncim_query_content_pane_t5

0xe62f,	// (0x00059950) ncim_query_content_pane_t6_ParamLimits

0xe62f,	// (0x00059950) ncim_query_content_pane_t6

0xfb24,	// (0x0005ae45) ncim_query_content_pane_t_ParamLimits

0xe657,	// (0x00059978) ncim_query_list_pane_ParamLimits

0xe669,	// (0x0005998a) ncim_query_popup_pane_ParamLimits

0xe67d,	// (0x0005999e) wait_bar_pane_cp04

0xa7c4,	// (0x00055ae5) input_focus_pane_cp011

0xe685,	// (0x000599a6) ncim_query_popup_pane_t1

0xe693,	// (0x000599b4) ncim_list_query_list_pane_ParamLimits

0xe693,	// (0x000599b4) ncim_list_query_list_pane

0xa7c4,	// (0x00055ae5) bg_button_pane_cp027

0xe6a0,	// (0x000599c1) ncim_query_button_pane_g1

0xa7c4,	// (0x00055ae5) list_highlight_pane_cp012

0xe6aa,	// (0x000599cb) ncim_list_query_list_pane_g1

0xe6b2,	// (0x000599d3) ncim_list_query_list_pane_t1

0xa23b,	// (0x0005555c) cam4_indicators_pane_g3_ParamLimits

0xa23b,	// (0x0005555c) cam4_indicators_pane_g3

0xa2b6,	// (0x000555d7) vid4_indicators_pane_g5_ParamLimits

0xa2b6,	// (0x000555d7) vid4_indicators_pane_g5

0xa426,	// (0x00055747) vid4_progress_pane_g5_ParamLimits

0xa426,	// (0x00055747) vid4_progress_pane_g5

0x69fd,	// (0x00051d1e) main_ncimui_pane_g1

0x6a66,	// (0x00051d87) ncimui_group_query_pane_ParamLimits

0x6a66,	// (0x00051d87) ncimui_group_query_pane

0x6aae,	// (0x00051dcf) ncimui_list_pane_ParamLimits

0x6aae,	// (0x00051dcf) ncimui_list_pane

0x6ad5,	// (0x00051df6) ncimui_text_pane_ParamLimits

0x6ad5,	// (0x00051df6) ncimui_text_pane

0x6b96,	// (0x00051eb7) ncimui_text_pane_t1_ParamLimits

0x6b96,	// (0x00051eb7) ncimui_text_pane_t1

0xe6c0,	// (0x000599e1) ncimui_list_single_graphic_pane_ParamLimits

0xe6c0,	// (0x000599e1) ncimui_list_single_graphic_pane

0x6bb4,	// (0x00051ed5) ncimui_query_pane_ParamLimits

0x6bb4,	// (0x00051ed5) ncimui_query_pane

0xa7c4,	// (0x00055ae5) list_highlight_pane_cp013

0xe6d0,	// (0x000599f1) ncim_list_query_list_pane_t1_copy1

0xe6de,	// (0x000599ff) ncim_list_single_graphic_pane_g1

0x6bc7,	// (0x00051ee8) ncim_query_button_pane_cp01

0x6bd3,	// (0x00051ef4) ncim_query_entry_pane_ParamLimits

0x6bd3,	// (0x00051ef4) ncim_query_entry_pane

0x6be6,	// (0x00051f07) ncimui_query_pane_g1

0x6bf2,	// (0x00051f13) ncimui_query_pane_t1_ParamLimits

0x6bf2,	// (0x00051f13) ncimui_query_pane_t1

0xa7ce,	// (0x00055aef) input_focus_pane_cp012

0xe6e6,	// (0x00059a07) ncim_query_entry_pane_t1

0xaf37,	// (0x00056258) main_im_pane_ParamLimits

0xa7ce,	// (0x00055aef) main_mobtv_pane_ParamLimits

0xa7ce,	// (0x00055aef) main_mobtv_pane

0x6895,	// (0x00051bb6) main_cset6_slider_pane_g18_ParamLimits

0x6895,	// (0x00051bb6) main_cset6_slider_pane_g18

0x68a1,	// (0x00051bc2) main_cset6_slider_pane_g19_ParamLimits

0x68a1,	// (0x00051bc2) main_cset6_slider_pane_g19

0xaee1,	// (0x00056202) bg_main_mobtv_pane_ParamLimits

0xaee1,	// (0x00056202) bg_main_mobtv_pane

0x6c0b,	// (0x00051f2c) main_mobtv_info_pane

0x6c14,	// (0x00051f35) main_mobtv_loading_pane_ParamLimits

0x6c14,	// (0x00051f35) main_mobtv_loading_pane

0xe6f8,	// (0x00059a19) main_mobtv_pg_channel_list_pane

0xe702,	// (0x00059a23) main_mobtv_pg_hdr_pane

0x6c21,	// (0x00051f42) main_mobtv_programe_curr_pane_ParamLimits

0x6c21,	// (0x00051f42) main_mobtv_programe_curr_pane

0x6c2e,	// (0x00051f4f) main_mobtv_programe_next_pane_ParamLimits

0x6c2e,	// (0x00051f4f) main_mobtv_programe_next_pane

0xe70b,	// (0x00059a2c) popup_mobtv_noti_window

0xb131,	// (0x00056452) main_tv_pg_hdr_pane_g1

0xe713,	// (0x00059a34) main_tv_pg_hdr_pane_g2

0xe71b,	// (0x00059a3c) main_tv_pg_hdr_pane_g3

0xe723,	// (0x00059a44) main_tv_pg_hdr_pane_g4

0xe72b,	// (0x00059a4c) main_tv_pg_hdr_pane_g5

0xe735,	// (0x00059a56) main_tv_pg_hdr_pane_g6

0xe73f,	// (0x00059a60) main_tv_pg_hdr_pane_g7

0xe749,	// (0x00059a6a) main_tv_pg_hdr_pane_g8

0xe753,	// (0x00059a74) main_tv_pg_hdr_pane_g9

0xe75d,	// (0x00059a7e) main_tv_pg_hdr_pane_g10

0xe767,	// (0x00059a88) main_tv_pg_hdr_pane_g11

0x000a,

0xfb31,	// (0x0005ae52) main_tv_pg_hdr_pane_g

0xe771,	// (0x00059a92) main_tv_pg_hdr_pane_t1

0xe77f,	// (0x00059aa0) main_tv_pg_hdr_pane_t2

0xe78d,	// (0x00059aae) main_tv_pg_hdr_pane_t3

0xe79d,	// (0x00059abe) main_tv_pg_hdr_pane_t4

0xe7ad,	// (0x00059ace) main_tv_pg_hdr_pane_t5

0x0004,

0x0288,	// (0x0004b5a9) main_tv_pg_hdr_pane_t

0xe7bd,	// (0x00059ade) single_mobtv_pg_channel_pane_ParamLimits

0xe7bd,	// (0x00059ade) single_mobtv_pg_channel_pane

0xe7cf,	// (0x00059af0) single_mobtv_pg_channel_table_pane

0xb445,	// (0x00056766) single_mobtv_pg_channel_thumb_pane

0xe7d8,	// (0x00059af9) single_tv_pg_channel_pane_g1

0xe7e1,	// (0x00059b02) single_tv_pg_channel_pane_g2

0x0001,

0x0293,	// (0x0004b5b4) single_tv_pg_channel_pane_g

0xaec5,	// (0x000561e6) bg_single_mobtv_pg_channel_thumb_pane_ParamLimits

0xaec5,	// (0x000561e6) bg_single_mobtv_pg_channel_thumb_pane

0xe7ea,	// (0x00059b0b) single_mobtv_pg_channel_thumb_pane_g1_ParamLimits

0xe7ea,	// (0x00059b0b) single_mobtv_pg_channel_thumb_pane_g1

0xe7f8,	// (0x00059b19) single_mobtv_pg_channel_thumb_pane_g2_ParamLimits

0xe7f8,	// (0x00059b19) single_mobtv_pg_channel_thumb_pane_g2

0xe804,	// (0x00059b25) single_mobtv_pg_channel_thumb_pane_g3_ParamLimits

0xe804,	// (0x00059b25) single_mobtv_pg_channel_thumb_pane_g3

0x0002,

0xfb48,	// (0x0005ae69) single_mobtv_pg_channel_thumb_pane_g_ParamLimits

0xfb48,	// (0x0005ae69) single_mobtv_pg_channel_thumb_pane_g

0xe810,	// (0x00059b31) single_mobtv_pg_channel_thumb_pane_t1

0xe81e,	// (0x00059b3f) single_mobtv_pg_channel_thumb_pane_t2

0x0001,

0xfb4f,	// (0x0005ae70) single_mobtv_pg_channel_thumb_pane_t

0xb131,	// (0x00056452) bg_single_mobtv_pg_channel_table_pane_g1

0xb131,	// (0x00056452) bg_single_mobtv_pg_channel_table_pane_g2

0x0001,

0xf398,	// (0x0005a6b9) bg_single_mobtv_pg_channel_table_pane_g

0xe82c,	// (0x00059b4d) single_mobtv_pg_channel_table_pane_t1

0xe83a,	// (0x00059b5b) single_mobtv_pg_channel_table_pane_t2

0x0001,

0xfb54,	// (0x0005ae75) single_mobtv_pg_channel_table_pane_t

0x6c43,	// (0x00051f64) main_mobtv_info_pane_g1_ParamLimits

0x6c43,	// (0x00051f64) main_mobtv_info_pane_g1

0x6c61,	// (0x00051f82) main_mobtv_info_pane_t1_ParamLimits

0x6c61,	// (0x00051f82) main_mobtv_info_pane_t1

0x6cd9,	// (0x00051ffa) main_mobtv_info_pane_t2_ParamLimits

0x6cd9,	// (0x00051ffa) main_mobtv_info_pane_t2

0x0002,

0xfb5e,	// (0x0005ae7f) main_mobtv_info_pane_t_ParamLimits

0xfb5e,	// (0x0005ae7f) main_mobtv_info_pane_t

0x6d68,	// (0x00052089) wait_bar_pane_cp05

0x6d7a,	// (0x0005209b) main_mobtv_loading_pane_g1_ParamLimits

0x6d7a,	// (0x0005209b) main_mobtv_loading_pane_g1

0x6d8d,	// (0x000520ae) main_mobtv_loading_pane_g2_ParamLimits

0x6d8d,	// (0x000520ae) main_mobtv_loading_pane_g2

0x6d99,	// (0x000520ba) main_mobtv_loading_pane_g3_ParamLimits

0x6d99,	// (0x000520ba) main_mobtv_loading_pane_g3

0x0002,

0xfb65,	// (0x0005ae86) main_mobtv_loading_pane_g_ParamLimits

0xfb65,	// (0x0005ae86) main_mobtv_loading_pane_g

0xe848,	// (0x00059b69) main_mobtv_loading_pane_t1_ParamLimits

0xe848,	// (0x00059b69) main_mobtv_loading_pane_t1

0xe860,	// (0x00059b81) main_mobtv_loading_pane_t2_ParamLimits

0xe860,	// (0x00059b81) main_mobtv_loading_pane_t2

0x0001,

0xfb6c,	// (0x0005ae8d) main_mobtv_loading_pane_t_ParamLimits

0xfb6c,	// (0x0005ae8d) main_mobtv_loading_pane_t

0x6dac,	// (0x000520cd) wait_bar_pane_cp06_ParamLimits

0x6dac,	// (0x000520cd) wait_bar_pane_cp06

0xe884,	// (0x00059ba5) main_mobtv_programe_curr_pane_t1

0xe892,	// (0x00059bb3) main_mobtv_programe_curr_pane_t2

0x0001,

0xfb71,	// (0x0005ae92) main_mobtv_programe_curr_pane_t

0xe8a0,	// (0x00059bc1) main_mobtv_programe_next_pane_t1

0xe8ae,	// (0x00059bcf) main_mobtv_programe_next_pane_t2

0xe8bc,	// (0x00059bdd) main_mobtv_programe_next_pane_t3

0x0002,

0xfb76,	// (0x0005ae97) main_mobtv_programe_next_pane_t

0xa7c4,	// (0x00055ae5) bg_popup_mobtv_noti_window_pane

0xe8ca,	// (0x00059beb) popup_mobtv_noti_window_g1

0xe8d2,	// (0x00059bf3) popup_mobtv_noti_window_t1

0xe8e0,	// (0x00059c01) popup_mobtv_noti_window_t2

0x0001,

0xfb7d,	// (0x0005ae9e) popup_mobtv_noti_window_t

0xb131,	// (0x00056452) bg_popup_mobtv_noti_window_pane_g1

0xa7c4,	// (0x00055ae5) sc_clock_pane

0xa7c4,	// (0x00055ae5) main_fs_bigclock_pane

0x64ec,	// (0x0005180d) blid2_tripm_pane_t4_ParamLimits

0x64ec,	// (0x0005180d) blid2_tripm_pane_t4

0x6dbb,	// (0x000520dc) sc_clock_pane_g1_ParamLimits

0x6dbb,	// (0x000520dc) sc_clock_pane_g1

0x6dcd,	// (0x000520ee) sc_clock_pane_t1_ParamLimits

0x6dcd,	// (0x000520ee) sc_clock_pane_t1

0x6def,	// (0x00052110) sc_clock_pane_t2_ParamLimits

0x6def,	// (0x00052110) sc_clock_pane_t2

0x6e07,	// (0x00052128) sc_clock_pane_t3_ParamLimits

0x6e07,	// (0x00052128) sc_clock_pane_t3

0x0004,

0xfb82,	// (0x0005aea3) sc_clock_pane_t_ParamLimits

0xfb82,	// (0x0005aea3) sc_clock_pane_t

0x792c,	// (0x00052c4d) main_fs_bigclock_indicator_pane_ParamLimits

0x792c,	// (0x00052c4d) main_fs_bigclock_indicator_pane

0x6ead,	// (0x000521ce) main_fs_bigclock_pane_g1_ParamLimits

0x6ead,	// (0x000521ce) main_fs_bigclock_pane_g1

0x7938,	// (0x00052c59) main_fs_bigclock_pane_t1_ParamLimits

0x7938,	// (0x00052c59) main_fs_bigclock_pane_t1

0x794a,	// (0x00052c6b) main_fs_bigclock_pane_t2_ParamLimits

0x794a,	// (0x00052c6b) main_fs_bigclock_pane_t2

0x795e,	// (0x00052c7f) main_fs_bigclock_pane_t3_ParamLimits

0x795e,	// (0x00052c7f) main_fs_bigclock_pane_t3

0x0002,

0xfcfe,	// (0x0005b01f) main_fs_bigclock_pane_t_ParamLimits

0xfcfe,	// (0x0005b01f) main_fs_bigclock_pane_t

0x7970,	// (0x00052c91) main_fs_bigclock_indicator_pane_g1

0xe5ff,	// (0x00059920) ncim_query_content_pane_g2_ParamLimits

0xe5ff,	// (0x00059920) ncim_query_content_pane_g2

0x0001,

0xfb1f,	// (0x0005ae40) ncim_query_content_pane_g_ParamLimits

0xfb1f,	// (0x0005ae40) ncim_query_content_pane_g

0x6e20,	// (0x00052141) sc_clock_pane_t4_ParamLimits

0x6e20,	// (0x00052141) sc_clock_pane_t4

0xa7ce,	// (0x00055aef) main_radioblah_pane

0xa1b0,	// (0x000554d1) cell_call4_button_pane_t1_copy1_ParamLimits

0xa1b0,	// (0x000554d1) cell_call4_button_pane_t1_copy1

0x6a15,	// (0x00051d36) main_ncimui_pane_t1_ParamLimits

0x6a15,	// (0x00051d36) main_ncimui_pane_t1

0x6a2f,	// (0x00051d50) main_ncimui_pane_t2_ParamLimits

0x6a2f,	// (0x00051d50) main_ncimui_pane_t2

0x0002,

0xfb18,	// (0x0005ae39) main_ncimui_pane_t_ParamLimits

0xfb18,	// (0x0005ae39) main_ncimui_pane_t

0xea26,	// (0x00059d47) main_radioblah_anim_pane_ParamLimits

0xea26,	// (0x00059d47) main_radioblah_anim_pane

0xea37,	// (0x00059d58) main_radioblah_info_pane_ParamLimits

0xea37,	// (0x00059d58) main_radioblah_info_pane

0xea4b,	// (0x00059d6c) main_radioblah_pane_t1_ParamLimits

0xea4b,	// (0x00059d6c) main_radioblah_pane_t1

0xea67,	// (0x00059d88) main_radioblah_pane_t2_ParamLimits

0xea67,	// (0x00059d88) main_radioblah_pane_t2

0x0003,

0xfba3,	// (0x0005aec4) main_radioblah_pane_t_ParamLimits

0xfba3,	// (0x0005aec4) main_radioblah_pane_t

0x6f0c,	// (0x0005222d) main_radioblah_rocker_ctrl_pane_ParamLimits

0x6f0c,	// (0x0005222d) main_radioblah_rocker_ctrl_pane

0xeaaf,	// (0x00059dd0) main_radioblah_info_pane_t1_ParamLimits

0xeaaf,	// (0x00059dd0) main_radioblah_info_pane_t1

0x6f64,	// (0x00052285) main_radioblah_info_pane_t2_ParamLimits

0x6f64,	// (0x00052285) main_radioblah_info_pane_t2

0x0003,

0xfbac,	// (0x0005aecd) main_radioblah_info_pane_t_ParamLimits

0xfbac,	// (0x0005aecd) main_radioblah_info_pane_t

0xb131,	// (0x00056452) main_radioblah_rocker_ctrl_pane_g1

0x7014,	// (0x00052335) main_radioblah_rocker_ctrl_pane_g2

0x701c,	// (0x0005233d) main_radioblah_rocker_ctrl_pane_g3

0x7024,	// (0x00052345) main_radioblah_rocker_ctrl_pane_g4

0x702c,	// (0x0005234d) main_radioblah_rocker_ctrl_pane_g5

0x7034,	// (0x00052355) main_radioblah_rocker_ctrl_pane_g6

0x0005,

0xfbb5,	// (0x0005aed6) main_radioblah_rocker_ctrl_pane_g

0x67a5,	// (0x00051ac6) main_cset_text2_pane_t1_copy1_ParamLimits

0xa20e,	// (0x0005552f) cam4_image_uncrop_qvga_pane

0xa261,	// (0x00055582) vid4_image_uncrop_qcif_pane

0xa476,	// (0x00055797) cam6_image_uncrop_qvga_pane_ParamLimits

0xa476,	// (0x00055797) cam6_image_uncrop_qvga_pane

0xe2df,	// (0x00059600) vid6_image_uncrop_qcif_pane_ParamLimits

0xe2df,	// (0x00059600) vid6_image_uncrop_qcif_pane

0xa7c4,	// (0x00055ae5) bg_popup_preview_window_pane_cp03

0xe5b1,	// (0x000598d2) list_cset_text2_pane

0xe5b9,	// (0x000598da) main_cset6_text2_pane_g1

0xe5c1,	// (0x000598e2) main_cset6_text2_pane_t1

0xedfc,	// (0x0005a11d) list_cset_text2_pane_t1_ParamLimits

0xedfc,	// (0x0005a11d) list_cset_text2_pane_t1

0xa7ce,	// (0x00055aef) main_radioblah_pane_ParamLimits

0x6d54,	// (0x00052075) main_mobtv_info_pane_t3_ParamLimits

0x6d54,	// (0x00052075) main_mobtv_info_pane_t3

0x6efa,	// (0x0005221b) main_radioblah_pane_g1

0x6f34,	// (0x00052255) main_radioblah_info_pane_g1

0x6fb9,	// (0x000522da) main_radioblah_info_pane_t3_ParamLimits

0x6fb9,	// (0x000522da) main_radioblah_info_pane_t3

0x28d8,	// (0x0004dbf9) highlight_cell_cale_month_pane_ParamLimits

0x28d8,	// (0x0004dbf9) highlight_cell_cale_month_pane

0xa7c4,	// (0x00055ae5) main_phob_fisheye_pane

0xd600,	// (0x00058921) scroll_pane_cp0031_ParamLimits

0xd600,	// (0x00058921) scroll_pane_cp0031

0xe3ed,	// (0x0005970e) wait_bar_pane_cp08_ParamLimits

0x6827,	// (0x00051b48) cset_list_set_pane_copy1_ParamLimits

0xeae9,	// (0x00059e0a) highlight_cell_cale_month_pane_g1

0x703c,	// (0x0005235d) highlight_cell_cale_month_pane_t1

0xe078,	// (0x00059399) list_gen_pane_cp01

0xdcd1,	// (0x00058ff2) scroll_pane_01

0x704a,	// (0x0005236b) list_single_double_fisheye_pane

0x09c2,	// (0x0004bce3) list_double_fisheye_pane_g1_ParamLimits

0x09c2,	// (0x0004bce3) list_double_fisheye_pane_g1

0x09ce,	// (0x0004bcef) list_double_fisheye_pane_g2_ParamLimits

0x09ce,	// (0x0004bcef) list_double_fisheye_pane_g2

0x7053,	// (0x00052374) list_double_fisheye_pane_g3_ParamLimits

0x7053,	// (0x00052374) list_double_fisheye_pane_g3

0x0004,

0xfbc2,	// (0x0005aee3) list_double_fisheye_pane_g_ParamLimits

0xfbc2,	// (0x0005aee3) list_double_fisheye_pane_g

0x09ff,	// (0x0004bd20) list_double_fisheye_pane_t1_ParamLimits

0x09ff,	// (0x0004bd20) list_double_fisheye_pane_t1

0x0a1a,	// (0x0004bd3b) list_double_fisheye_pane_t2_ParamLimits

0x0a1a,	// (0x0004bd3b) list_double_fisheye_pane_t2

0x0001,

0xfbcd,	// (0x0005aeee) list_double_fisheye_pane_t_ParamLimits

0xfbcd,	// (0x0005aeee) list_double_fisheye_pane_t

0xa7c4,	// (0x00055ae5) main_call5_pane

0x6e4b,	// (0x0005216c) sc_swipe_pane_ParamLimits

0x6e4b,	// (0x0005216c) sc_swipe_pane

0x7072,	// (0x00052393) call5_image_pane_ParamLimits

0x7072,	// (0x00052393) call5_image_pane

0x708f,	// (0x000523b0) call5_swipe_1_pane_ParamLimits

0x708f,	// (0x000523b0) call5_swipe_1_pane

0x70a2,	// (0x000523c3) call5_swipe_2_pane_ParamLimits

0x70a2,	// (0x000523c3) call5_swipe_2_pane

0x70cd,	// (0x000523ee) popup_call5_audio_first_window_ParamLimits

0x70cd,	// (0x000523ee) popup_call5_audio_first_window

0xaec5,	// (0x000561e6) call5_swipe_1_pane_g1_ParamLimits

0xaec5,	// (0x000561e6) call5_swipe_1_pane_g1

0xeaf1,	// (0x00059e12) call5_swipe_1_pane_g2_ParamLimits

0xeaf1,	// (0x00059e12) call5_swipe_1_pane_g2

0x0001,

0xfbd2,	// (0x0005aef3) call5_swipe_1_pane_g_ParamLimits

0xfbd2,	// (0x0005aef3) call5_swipe_1_pane_g

0xeafd,	// (0x00059e1e) call5_swipe_1_pane_t1_ParamLimits

0xeafd,	// (0x00059e1e) call5_swipe_1_pane_t1

0xaec5,	// (0x000561e6) call5_swipe_2_pane_g1_ParamLimits

0xaec5,	// (0x000561e6) call5_swipe_2_pane_g1

0xeb12,	// (0x00059e33) call5_swipe_2_pane_g2_ParamLimits

0xeb12,	// (0x00059e33) call5_swipe_2_pane_g2

0x0001,

0xfbd7,	// (0x0005aef8) call5_swipe_2_pane_g_ParamLimits

0xfbd7,	// (0x0005aef8) call5_swipe_2_pane_g

0xeb1e,	// (0x00059e3f) call5_swipe_2_pane_t1_ParamLimits

0xeb1e,	// (0x00059e3f) call5_swipe_2_pane_t1

0xeb33,	// (0x00059e54) sc_swipe_pane_g1_ParamLimits

0xeb33,	// (0x00059e54) sc_swipe_pane_g1

0xeb40,	// (0x00059e61) sc_swipe_pane_g2_ParamLimits

0xeb40,	// (0x00059e61) sc_swipe_pane_g2

0x0001,

0xfbdc,	// (0x0005aefd) sc_swipe_pane_g_ParamLimits

0xfbdc,	// (0x0005aefd) sc_swipe_pane_g

0xeb4c,	// (0x00059e6d) sc_swipe_pane_t1_ParamLimits

0xeb4c,	// (0x00059e6d) sc_swipe_pane_t1

0xa7c4,	// (0x00055ae5) main_cmail_launcher_pane

0x70de,	// (0x000523ff) aid_size_cell_cmail_l_ParamLimits

0x70de,	// (0x000523ff) aid_size_cell_cmail_l

0x70ec,	// (0x0005240d) grid_cmail_l_pane_ParamLimits

0x70ec,	// (0x0005240d) grid_cmail_l_pane

0x7106,	// (0x00052427) cell_cmail_l_pane_ParamLimits

0x7106,	// (0x00052427) cell_cmail_l_pane

0xeb61,	// (0x00059e82) cell_cmail_l_pane_g1_ParamLimits

0xeb61,	// (0x00059e82) cell_cmail_l_pane_g1

0xeb6d,	// (0x00059e8e) cell_cmail_l_pane_t1_ParamLimits

0xeb6d,	// (0x00059e8e) cell_cmail_l_pane_t1

0xeb83,	// (0x00059ea4) cell_cmail_l_pane_t2_ParamLimits

0xeb83,	// (0x00059ea4) cell_cmail_l_pane_t2

0x0001,

0xfbe1,	// (0x0005af02) cell_cmail_l_pane_t_ParamLimits

0xfbe1,	// (0x0005af02) cell_cmail_l_pane_t

0xa7ce,	// (0x00055aef) grid_highlight_pane_cp018_ParamLimits

0xa7ce,	// (0x00055aef) grid_highlight_pane_cp018

0x0f63,	// (0x0004c284) main2_pane_ParamLimits

0x0f63,	// (0x0004c284) main2_pane

0xafc6,	// (0x000562e7) popup_sp_fs_action_menu_bg_pane_g1

0xafce,	// (0x000562ef) popup_sp_fs_action_menu_bg_pane_g2

0xafd6,	// (0x000562f7) popup_sp_fs_action_menu_bg_pane_g3

0xafde,	// (0x000562ff) popup_sp_fs_action_menu_bg_pane_g4

0xafe6,	// (0x00056307) popup_sp_fs_action_menu_bg_pane_g5

0xafee,	// (0x0005630f) popup_sp_fs_action_menu_bg_pane_g6

0xaff6,	// (0x00056317) popup_sp_fs_action_menu_bg_pane_g7

0xaffe,	// (0x0005631f) popup_sp_fs_action_menu_bg_pane_g8

0xb006,	// (0x00056327) popup_sp_fs_action_menu_bg_pane_g9

0xb00e,	// (0x0005632f) popup_sp_fs_action_menu_bg_pane_g10

0xb00e,	// (0x0005632f) popup_sp_fs_action_menu_bg_pane_g11

0x000a,

0xf105,	// (0x0005a426) popup_sp_fs_action_menu_bg_pane_g

0xaec5,	// (0x000561e6) list_medium_line_x2_t3_g3_g1_ParamLimits

0xaec5,	// (0x000561e6) list_medium_line_x2_t3_g3_g1

0xaec5,	// (0x000561e6) list_medium_line_x2_t3_g3_g2_ParamLimits

0xaec5,	// (0x000561e6) list_medium_line_x2_t3_g3_g2

0xaec5,	// (0x000561e6) list_medium_line_x2_t3_g3_g3_ParamLimits

0xaec5,	// (0x000561e6) list_medium_line_x2_t3_g3_g3

0x0002,

0xf1b3,	// (0x0005a4d4) list_medium_line_x2_t3_g3_g_ParamLimits

0xf1b3,	// (0x0005a4d4) list_medium_line_x2_t3_g3_g

0xb103,	// (0x00056424) list_medium_line_x2_t3_g3_t1_ParamLimits

0xb103,	// (0x00056424) list_medium_line_x2_t3_g3_t1

0xb103,	// (0x00056424) list_medium_line_x2_t3_g3_t2_ParamLimits

0xb103,	// (0x00056424) list_medium_line_x2_t3_g3_t2

0xb103,	// (0x00056424) list_medium_line_x2_t3_g3_t3_ParamLimits

0xb103,	// (0x00056424) list_medium_line_x2_t3_g3_t3

0x0002,

0xf1ba,	// (0x0005a4db) list_medium_line_x2_t3_g3_t_ParamLimits

0xf1ba,	// (0x0005a4db) list_medium_line_x2_t3_g3_t

0xaec5,	// (0x000561e6) list_medium_line_x2_t3_g2_g1_ParamLimits

0xaec5,	// (0x000561e6) list_medium_line_x2_t3_g2_g1

0xaec5,	// (0x000561e6) list_medium_line_x2_t3_g2_g2_ParamLimits

0xaec5,	// (0x000561e6) list_medium_line_x2_t3_g2_g2

0x0001,

0xf1c1,	// (0x0005a4e2) list_medium_line_x2_t3_g2_g_ParamLimits

0xf1c1,	// (0x0005a4e2) list_medium_line_x2_t3_g2_g

0xb103,	// (0x00056424) list_medium_line_x2_t3_g2_t1_ParamLimits

0xb103,	// (0x00056424) list_medium_line_x2_t3_g2_t1

0xb103,	// (0x00056424) list_medium_line_x2_t3_g2_t2_ParamLimits

0xb103,	// (0x00056424) list_medium_line_x2_t3_g2_t2

0xb103,	// (0x00056424) list_medium_line_x2_t3_g2_t3_ParamLimits

0xb103,	// (0x00056424) list_medium_line_x2_t3_g2_t3

0x0002,

0xf1ba,	// (0x0005a4db) list_medium_line_x2_t3_g2_t_ParamLimits

0xf1ba,	// (0x0005a4db) list_medium_line_x2_t3_g2_t

0xaec5,	// (0x000561e6) list_medium_line_x2_t4_g4_g1_ParamLimits

0xaec5,	// (0x000561e6) list_medium_line_x2_t4_g4_g1

0xaec5,	// (0x000561e6) list_medium_line_x2_t4_g4_g2_ParamLimits

0xaec5,	// (0x000561e6) list_medium_line_x2_t4_g4_g2

0xaec5,	// (0x000561e6) list_medium_line_x2_t4_g4_g3_ParamLimits

0xaec5,	// (0x000561e6) list_medium_line_x2_t4_g4_g3

0xaec5,	// (0x000561e6) list_medium_line_x2_t4_g4_g4_ParamLimits

0xaec5,	// (0x000561e6) list_medium_line_x2_t4_g4_g4

0x0003,

0xf1c6,	// (0x0005a4e7) list_medium_line_x2_t4_g4_g_ParamLimits

0xf1c6,	// (0x0005a4e7) list_medium_line_x2_t4_g4_g

0xb103,	// (0x00056424) list_medium_line_x2_t4_g4_t1_ParamLimits

0xb103,	// (0x00056424) list_medium_line_x2_t4_g4_t1

0xb103,	// (0x00056424) list_medium_line_x2_t4_g4_t2_ParamLimits

0xb103,	// (0x00056424) list_medium_line_x2_t4_g4_t2

0xb103,	// (0x00056424) list_medium_line_x2_t4_g4_t3_ParamLimits

0xb103,	// (0x00056424) list_medium_line_x2_t4_g4_t3

0xb103,	// (0x00056424) list_medium_line_x2_t4_g4_t4_ParamLimits

0xb103,	// (0x00056424) list_medium_line_x2_t4_g4_t4

0x0003,

0xf1cf,	// (0x0005a4f0) list_medium_line_x2_t4_g4_t_ParamLimits

0xf1cf,	// (0x0005a4f0) list_medium_line_x2_t4_g4_t

0xaec5,	// (0x000561e6) list_medium_line_x2_t2_g4_g1_ParamLimits

0xaec5,	// (0x000561e6) list_medium_line_x2_t2_g4_g1

0xaec5,	// (0x000561e6) list_medium_line_x2_t2_g4_g2_ParamLimits

0xaec5,	// (0x000561e6) list_medium_line_x2_t2_g4_g2

0xaec5,	// (0x000561e6) list_medium_line_x2_t2_g4_g3_ParamLimits

0xaec5,	// (0x000561e6) list_medium_line_x2_t2_g4_g3

0xaec5,	// (0x000561e6) list_medium_line_x2_t2_g4_g4_ParamLimits

0xaec5,	// (0x000561e6) list_medium_line_x2_t2_g4_g4

0x0003,

0xf1c6,	// (0x0005a4e7) list_medium_line_x2_t2_g4_g_ParamLimits

0xf1c6,	// (0x0005a4e7) list_medium_line_x2_t2_g4_g

0xb103,	// (0x00056424) list_medium_line_x2_t2_g4_t1_ParamLimits

0xb103,	// (0x00056424) list_medium_line_x2_t2_g4_t1

0xb103,	// (0x00056424) list_medium_line_x2_t2_g4_t2_ParamLimits

0xb103,	// (0x00056424) list_medium_line_x2_t2_g4_t2

0x0001,

0xf196,	// (0x0005a4b7) list_medium_line_x2_t2_g4_t_ParamLimits

0xf196,	// (0x0005a4b7) list_medium_line_x2_t2_g4_t

0xaec5,	// (0x000561e6) list_medium_line_x2_t2_g3_g1_ParamLimits

0xaec5,	// (0x000561e6) list_medium_line_x2_t2_g3_g1

0xaec5,	// (0x000561e6) list_medium_line_x2_t2_g3_g2_ParamLimits

0xaec5,	// (0x000561e6) list_medium_line_x2_t2_g3_g2

0xaec5,	// (0x000561e6) list_medium_line_x2_t2_g3_g3_ParamLimits

0xaec5,	// (0x000561e6) list_medium_line_x2_t2_g3_g3

0x0002,

0xf1b3,	// (0x0005a4d4) list_medium_line_x2_t2_g3_g_ParamLimits

0xf1b3,	// (0x0005a4d4) list_medium_line_x2_t2_g3_g

0xb103,	// (0x00056424) list_medium_line_x2_t2_g3_t1_ParamLimits

0xb103,	// (0x00056424) list_medium_line_x2_t2_g3_t1

0xb103,	// (0x00056424) list_medium_line_x2_t2_g3_t2_ParamLimits

0xb103,	// (0x00056424) list_medium_line_x2_t2_g3_t2

0x0001,

0xf196,	// (0x0005a4b7) list_medium_line_x2_t2_g3_t_ParamLimits

0xf196,	// (0x0005a4b7) list_medium_line_x2_t2_g3_t

0x2a3d,	// (0x0004dd5e) main_sp_fs_list_pane_ParamLimits

0x2a3d,	// (0x0004dd5e) main_sp_fs_list_pane

0xdc6f,	// (0x00058f90) sp_fs_scroll_pane_ParamLimits

0xdc6f,	// (0x00058f90) sp_fs_scroll_pane

0xb664,	// (0x00056985) list_medium_line_x2_t3_t1

0xb664,	// (0x00056985) list_medium_line_x2_t3_t2

0xb664,	// (0x00056985) list_medium_line_x2_t3_t3

0x0002,

0xf27c,	// (0x0005a59d) list_medium_line_x2_t3_t

0xb664,	// (0x00056985) list_medium_line_x3_t4_t1

0xb664,	// (0x00056985) list_medium_line_x3_t4_t2

0xb664,	// (0x00056985) list_medium_line_x3_t4_t3

0xb664,	// (0x00056985) list_medium_line_x3_t4_t4

0x0003,

0xf283,	// (0x0005a5a4) list_medium_line_x3_t4_t

0xb664,	// (0x00056985) list_medium_line_x4_t5_t1

0xb664,	// (0x00056985) list_medium_line_x4_t5_t2

0xb664,	// (0x00056985) list_medium_line_x4_t5_t3

0xb664,	// (0x00056985) list_medium_line_x4_t5_t4

0xb664,	// (0x00056985) list_medium_line_x4_t5_t5

0x0004,

0xf28c,	// (0x0005a5ad) list_medium_line_x4_t5_t

0xaec5,	// (0x000561e6) list_medium_line_t4_g4_g1_ParamLimits

0xaec5,	// (0x000561e6) list_medium_line_t4_g4_g1

0xaec5,	// (0x000561e6) list_medium_line_t4_g4_g2_ParamLimits

0xaec5,	// (0x000561e6) list_medium_line_t4_g4_g2

0xaec5,	// (0x000561e6) list_medium_line_t4_g4_g3_ParamLimits

0xaec5,	// (0x000561e6) list_medium_line_t4_g4_g3

0xaec5,	// (0x000561e6) list_medium_line_t4_g4_g4_ParamLimits

0xaec5,	// (0x000561e6) list_medium_line_t4_g4_g4

0x0003,

0xf1c6,	// (0x0005a4e7) list_medium_line_t4_g4_g_ParamLimits

0xf1c6,	// (0x0005a4e7) list_medium_line_t4_g4_g

0xb103,	// (0x00056424) list_medium_line_t4_g4_t1_ParamLimits

0xb103,	// (0x00056424) list_medium_line_t4_g4_t1

0xb103,	// (0x00056424) list_medium_line_t4_g4_t2_ParamLimits

0xb103,	// (0x00056424) list_medium_line_t4_g4_t2

0xb103,	// (0x00056424) list_medium_line_t4_g4_t3_ParamLimits

0xb103,	// (0x00056424) list_medium_line_t4_g4_t3

0xb103,	// (0x00056424) list_medium_line_t4_g4_t4_ParamLimits

0xb103,	// (0x00056424) list_medium_line_t4_g4_t4

0x0003,

0xf1cf,	// (0x0005a4f0) list_medium_line_t4_g4_t_ParamLimits

0xf1cf,	// (0x0005a4f0) list_medium_line_t4_g4_t

0x2ae8,	// (0x0004de09) chi_dic_find_pane_g1

0x38eb,	// (0x0004ec0c) main_tport_pane

0xb664,	// (0x00056985) list_medium_line_plain_t1

0xaec5,	// (0x000561e6) list_medium_line_t2_g2_g1_ParamLimits

0xaec5,	// (0x000561e6) list_medium_line_t2_g2_g1

0xaec5,	// (0x000561e6) list_medium_line_t2_g2_g2_ParamLimits

0xaec5,	// (0x000561e6) list_medium_line_t2_g2_g2

0x0001,

0xf1c1,	// (0x0005a4e2) list_medium_line_t2_g2_g_ParamLimits

0xf1c1,	// (0x0005a4e2) list_medium_line_t2_g2_g

0xb103,	// (0x00056424) list_medium_line_t2_g2_t1_ParamLimits

0xb103,	// (0x00056424) list_medium_line_t2_g2_t1

0xb103,	// (0x00056424) list_medium_line_t2_g2_t2_ParamLimits

0xb103,	// (0x00056424) list_medium_line_t2_g2_t2

0x0001,

0xf196,	// (0x0005a4b7) list_medium_line_t2_g2_t_ParamLimits

0xf196,	// (0x0005a4b7) list_medium_line_t2_g2_t

0xa45d,	// (0x0005577e) aid_sp_fs_list_icon_a_sm

0xa465,	// (0x00055786) aid_sp_fs_list_icon_d

0xa46d,	// (0x0005578e) aid_sp_fs_text_primary

0xedf3,	// (0x0005a114) aid_sp_fs_text_secondary

0xa7c4,	// (0x00055ae5) list_medium_line

0xa7c4,	// (0x00055ae5) list_medium_line_g2

0xa7c4,	// (0x00055ae5) list_medium_line_g3

0xa7c4,	// (0x00055ae5) list_medium_line_plain

0xa7c4,	// (0x00055ae5) list_medium_line_plain_t2

0xa7c4,	// (0x00055ae5) list_medium_line_plain_t3

0xa7c4,	// (0x00055ae5) list_medium_line_right_icon

0xa7c4,	// (0x00055ae5) list_medium_line_right_iconx2

0xa7c4,	// (0x00055ae5) list_medium_line_t2

0xa7c4,	// (0x00055ae5) list_medium_line_t2_g2

0xa7c4,	// (0x00055ae5) list_medium_line_t2_g3

0xa7c4,	// (0x00055ae5) list_medium_line_t2_right_icon

0xa7c4,	// (0x00055ae5) list_medium_line_t2_right_iconx2

0xa7c4,	// (0x00055ae5) list_medium_line_t3

0xa7c4,	// (0x00055ae5) list_medium_line_t3_g2

0xa7c4,	// (0x00055ae5) list_medium_line_t3_g3

0xa7c4,	// (0x00055ae5) list_medium_line_t3_right_iconx2

0xa7c4,	// (0x00055ae5) list_medium_line_t4_g4

0xa7c4,	// (0x00055ae5) list_medium_line_x2

0xa7c4,	// (0x00055ae5) list_medium_line_x2_t2_g2

0xa7c4,	// (0x00055ae5) list_medium_line_x2_t2_g3

0xa7c4,	// (0x00055ae5) list_medium_line_x2_t2_g4

0xa7c4,	// (0x00055ae5) list_medium_line_x2_t3

0xa7c4,	// (0x00055ae5) list_medium_line_x2_t3_g2

0xa7c4,	// (0x00055ae5) list_medium_line_x2_t3_g3

0xa7c4,	// (0x00055ae5) list_medium_line_x2_t3_g4

0xa7c4,	// (0x00055ae5) list_medium_line_x2_t4_g2

0xa7c4,	// (0x00055ae5) list_medium_line_x2_t4_g4

0xa7c4,	// (0x00055ae5) list_medium_line_x3

0xa7c4,	// (0x00055ae5) list_medium_line_x3_t4

0xa7c4,	// (0x00055ae5) list_medium_line_x3_t4_g4

0xa7c4,	// (0x00055ae5) list_medium_line_x4_t4

0xa7c4,	// (0x00055ae5) list_medium_line_x4_t4_g7

0xa7c4,	// (0x00055ae5) list_medium_line_x4_t5

0x0965,	// (0x0004bc86) list_single_fs_dyc_pane_ParamLimits

0x0965,	// (0x0004bc86) list_single_fs_dyc_pane

0xaec5,	// (0x000561e6) list_medium_line_x4_t4_g7_g1_ParamLimits

0xaec5,	// (0x000561e6) list_medium_line_x4_t4_g7_g1

0xaec5,	// (0x000561e6) list_medium_line_x4_t4_g7_g2_ParamLimits

0xaec5,	// (0x000561e6) list_medium_line_x4_t4_g7_g2

0xaec5,	// (0x000561e6) list_medium_line_x4_t4_g7_g3_ParamLimits

0xaec5,	// (0x000561e6) list_medium_line_x4_t4_g7_g3

0xaec5,	// (0x000561e6) list_medium_line_x4_t4_g7_g4_ParamLimits

0xaec5,	// (0x000561e6) list_medium_line_x4_t4_g7_g4

0xaec5,	// (0x000561e6) list_medium_line_x4_t4_g7_g5_ParamLimits

0xaec5,	// (0x000561e6) list_medium_line_x4_t4_g7_g5

0xaec5,	// (0x000561e6) list_medium_line_x4_t4_g7_g6_ParamLimits

0xaec5,	// (0x000561e6) list_medium_line_x4_t4_g7_g6

0xaed3,	// (0x000561f4) list_medium_line_x4_t4_g7_g7_ParamLimits

0xaed3,	// (0x000561f4) list_medium_line_x4_t4_g7_g7

0x0006,

0xfaf9,	// (0x0005ae1a) list_medium_line_x4_t4_g7_g_ParamLimits

0xfaf9,	// (0x0005ae1a) list_medium_line_x4_t4_g7_g

0xb103,	// (0x00056424) list_medium_line_x4_t4_g7_t1_ParamLimits

0xb103,	// (0x00056424) list_medium_line_x4_t4_g7_t1

0xb103,	// (0x00056424) list_medium_line_x4_t4_g7_t2_ParamLimits

0xb103,	// (0x00056424) list_medium_line_x4_t4_g7_t2

0xb103,	// (0x00056424) list_medium_line_x4_t4_g7_t3_ParamLimits

0xb103,	// (0x00056424) list_medium_line_x4_t4_g7_t3

0xb904,	// (0x00056c25) list_medium_line_x4_t4_g7_t4_ParamLimits

0xb904,	// (0x00056c25) list_medium_line_x4_t4_g7_t4

0xb904,	// (0x00056c25) list_medium_line_x4_t4_g7_t5_ParamLimits

0xb904,	// (0x00056c25) list_medium_line_x4_t4_g7_t5

0x0004,

0xfb08,	// (0x0005ae29) list_medium_line_x4_t4_g7_t_ParamLimits

0xfb08,	// (0x0005ae29) list_medium_line_x4_t4_g7_t

0x09a5,	// (0x0004bcc6) list_single_dyc_row_pane_ParamLimits

0x09a5,	// (0x0004bcc6) list_single_dyc_row_pane

0x705f,	// (0x00052380) call5_gesture_pane_ParamLimits

0x705f,	// (0x00052380) call5_gesture_pane

0x70b5,	// (0x000523d6) call5_windows_pane_ParamLimits

0x70b5,	// (0x000523d6) call5_windows_pane

0x7120,	// (0x00052441) call5_swipe_1_pane_cp_ParamLimits

0x7120,	// (0x00052441) call5_swipe_1_pane_cp

0x712c,	// (0x0005244d) call5_swipe_2_pane_cp_ParamLimits

0x712c,	// (0x0005244d) call5_swipe_2_pane_cp

0xb0fb,	// (0x0005641c) call5_image_pane_cp

0x7138,	// (0x00052459) popup_call5_audio_first_window_cp_ParamLimits

0x7138,	// (0x00052459) popup_call5_audio_first_window_cp

0xeb33,	// (0x00059e54) call5_swipe_1_pane_g1_cp_ParamLimits

0xeb33,	// (0x00059e54) call5_swipe_1_pane_g1_cp

0xeba0,	// (0x00059ec1) call5_swipe_1_pane_g2_cp

0xeb4c,	// (0x00059e6d) call5_swipe_1_pane_t1_cp_ParamLimits

0xeb4c,	// (0x00059e6d) call5_swipe_1_pane_t1_cp

0xeb33,	// (0x00059e54) call5_swipe_2_pane_g1_cp_ParamLimits

0xeb33,	// (0x00059e54) call5_swipe_2_pane_g1_cp

0xeba8,	// (0x00059ec9) call5_swipe_2_pane_g2_cp

0xebb0,	// (0x00059ed1) call5_swipe_2_pane_t1_cp_ParamLimits

0xebb0,	// (0x00059ed1) call5_swipe_2_pane_t1_cp

0xa7ce,	// (0x00055aef) main_sp_fs_email_pane

0xebc5,	// (0x00059ee6) main_sp_fs_listscroll_pane_te

0x7146,	// (0x00052467) popup_sp_fs_action_menu_pane_ParamLimits

0x7146,	// (0x00052467) popup_sp_fs_action_menu_pane

0xb131,	// (0x00056452) bg_sp_fs_ctrlbar_pane_g1

0xebce,	// (0x00059eef) bg_sp_fs_ctrlbar_ddmenu_pane_g1

0xebd7,	// (0x00059ef8) bg_sp_fs_ctrlbar_ddmenu_pane_g2

0xcea2,	// (0x000581c3) bg_sp_fs_ctrlbar_ddmenu_pane_g3

0xb131,	// (0x00056452) bg_sp_fs_ctrlbar_ddmenu_pane_g4

0x0003,

0xfbe6,	// (0x0005af07) bg_sp_fs_ctrlbar_ddmenu_pane_g

0xcafb,	// (0x00057e1c) bg_sp_fs_ctrlbar_ddmenu_pane_ParamLimits

0xcafb,	// (0x00057e1c) bg_sp_fs_ctrlbar_ddmenu_pane

0xebe0,	// (0x00059f01) main_sp_fs_ctrlbar_ddmenu_pane_g1_ParamLimits

0xebe0,	// (0x00059f01) main_sp_fs_ctrlbar_ddmenu_pane_g1

0xebec,	// (0x00059f0d) main_sp_fs_ctrlbar_ddmenu_pane_g2_ParamLimits

0xebec,	// (0x00059f0d) main_sp_fs_ctrlbar_ddmenu_pane_g2

0x0001,

0xfbef,	// (0x0005af10) main_sp_fs_ctrlbar_ddmenu_pane_g_ParamLimits

0xfbef,	// (0x0005af10) main_sp_fs_ctrlbar_ddmenu_pane_g

0xebf8,	// (0x00059f19) main_sp_fs_ctrlbar_ddmenu_pane_t1_ParamLimits

0xebf8,	// (0x00059f19) main_sp_fs_ctrlbar_ddmenu_pane_t1

0xb131,	// (0x00056452) list_medium_line_t2_right_icon_g1

0xb664,	// (0x00056985) list_medium_line_t2_right_icon_t1

0xb664,	// (0x00056985) list_medium_line_t2_right_icon_t2

0x0001,

0xfbf4,	// (0x0005af15) list_medium_line_t2_right_icon_t

0xbc15,	// (0x00056f36) bg_sp_fs_ctrlbar_pane_ParamLimits

0xbc15,	// (0x00056f36) bg_sp_fs_ctrlbar_pane

0x71d0,	// (0x000524f1) main_sp_fs_ctrlbar_button_pane_cp01

0x71da,	// (0x000524fb) main_sp_fs_ctrlbar_ddmenu_pane

0xec4a,	// (0x00059f6b) main_sp_fs_ctrlbar_pane_g1

0xec56,	// (0x00059f77) main_sp_fs_ctrlbar_pane_g2

0x0003,

0xfbf9,	// (0x0005af1a) main_sp_fs_ctrlbar_pane_g

0x7218,	// (0x00052539) main_sp_fs_ctrlbar_pane_t1

0x7257,	// (0x00052578) main_sp_fs_ctrlbar_pane

0x727b,	// (0x0005259c) main_sp_fs_listscroll_pane_te_cp01

0x0a3c,	// (0x0004bd5d) popup_sp_fs_action_menu_pane_cp01_ParamLimits

0x0a3c,	// (0x0004bd5d) popup_sp_fs_action_menu_pane_cp01

0xa7ce,	// (0x00055aef) bg_sp_fs_highlight_list_pane_cp01_ParamLimits

0xa7ce,	// (0x00055aef) bg_sp_fs_highlight_list_pane_cp01

0xa484,	// (0x000557a5) sp_fs_action_menu_list_gene_pane_g1_ParamLimits

0xa484,	// (0x000557a5) sp_fs_action_menu_list_gene_pane_g1

0xec7d,	// (0x00059f9e) sp_fs_action_menu_list_gene_pane_g2_ParamLimits

0xec7d,	// (0x00059f9e) sp_fs_action_menu_list_gene_pane_g2

0x0001,

0xfc07,	// (0x0005af28) sp_fs_action_menu_list_gene_pane_g_ParamLimits

0xfc07,	// (0x0005af28) sp_fs_action_menu_list_gene_pane_g

0xa493,	// (0x000557b4) sp_fs_action_menu_list_gene_pane_t1_ParamLimits

0xa493,	// (0x000557b4) sp_fs_action_menu_list_gene_pane_t1

0xa4ab,	// (0x000557cc) sp_fs_action_menu_list_gene_pane_ParamLimits

0xa4ab,	// (0x000557cc) sp_fs_action_menu_list_gene_pane

0xec8a,	// (0x00059fab) popup_sp_fs_action_menu_bg_pane_ParamLimits

0xec8a,	// (0x00059fab) popup_sp_fs_action_menu_bg_pane

0xa4ca,	// (0x000557eb) sp_fs_action_menu_list_pane_ParamLimits

0xa4ca,	// (0x000557eb) sp_fs_action_menu_list_pane

0x0a61,	// (0x0004bd82) sp_fs_scroll_pane_cp01_ParamLimits

0x0a61,	// (0x0004bd82) sp_fs_scroll_pane_cp01

0xb664,	// (0x00056985) list_medium_line_plain_t2_t1

0xb664,	// (0x00056985) list_medium_line_plain_t2_t2

0x0001,

0xfbf4,	// (0x0005af15) list_medium_line_plain_t2_t

0xb664,	// (0x00056985) list_medium_line_plain_t3_t1

0xb664,	// (0x00056985) list_medium_line_plain_t3_t2

0xb664,	// (0x00056985) list_medium_line_plain_t3_t3

0x0002,

0xf27c,	// (0x0005a59d) list_medium_line_plain_t3_t

0xaec5,	// (0x000561e6) list_medium_line_x2_t2_g2_g1_ParamLimits

0xaec5,	// (0x000561e6) list_medium_line_x2_t2_g2_g1

0xaec5,	// (0x000561e6) list_medium_line_x2_t2_g2_g2_ParamLimits

0xaec5,	// (0x000561e6) list_medium_line_x2_t2_g2_g2

0x0001,

0xf1c1,	// (0x0005a4e2) list_medium_line_x2_t2_g2_g_ParamLimits

0xf1c1,	// (0x0005a4e2) list_medium_line_x2_t2_g2_g

0xb103,	// (0x00056424) list_medium_line_x2_t2_g2_t1_ParamLimits

0xb103,	// (0x00056424) list_medium_line_x2_t2_g2_t1

0xb103,	// (0x00056424) list_medium_line_x2_t2_g2_t2_ParamLimits

0xb103,	// (0x00056424) list_medium_line_x2_t2_g2_t2

0x0001,

0xf196,	// (0x0005a4b7) list_medium_line_x2_t2_g2_t_ParamLimits

0xf196,	// (0x0005a4b7) list_medium_line_x2_t2_g2_t

0xaec5,	// (0x000561e6) list_medium_line_x2_t4_g2_g1_ParamLimits

0xaec5,	// (0x000561e6) list_medium_line_x2_t4_g2_g1

0xaec5,	// (0x000561e6) list_medium_line_x2_t4_g2_g2_ParamLimits

0xaec5,	// (0x000561e6) list_medium_line_x2_t4_g2_g2

0x0001,

0xf1c1,	// (0x0005a4e2) list_medium_line_x2_t4_g2_g_ParamLimits

0xf1c1,	// (0x0005a4e2) list_medium_line_x2_t4_g2_g

0xb103,	// (0x00056424) list_medium_line_x2_t4_g2_t1_ParamLimits

0xb103,	// (0x00056424) list_medium_line_x2_t4_g2_t1

0xb103,	// (0x00056424) list_medium_line_x2_t4_g2_t2_ParamLimits

0xb103,	// (0x00056424) list_medium_line_x2_t4_g2_t2

0xb103,	// (0x00056424) list_medium_line_x2_t4_g2_t3_ParamLimits

0xb103,	// (0x00056424) list_medium_line_x2_t4_g2_t3

0xb103,	// (0x00056424) list_medium_line_x2_t4_g2_t4_ParamLimits

0xb103,	// (0x00056424) list_medium_line_x2_t4_g2_t4

0x0003,

0xf1cf,	// (0x0005a4f0) list_medium_line_x2_t4_g2_t_ParamLimits

0xf1cf,	// (0x0005a4f0) list_medium_line_x2_t4_g2_t

0xb131,	// (0x00056452) list_medium_line_t3_right_iconx2_g1

0xb131,	// (0x00056452) list_medium_line_t3_right_iconx2_g2

0xb131,	// (0x00056452) list_medium_line_t3_right_iconx2_g3

0x0002,

0xf39d,	// (0x0005a6be) list_medium_line_t3_right_iconx2_g

0xb664,	// (0x00056985) list_medium_line_t3_right_iconx2_t1

0xb664,	// (0x00056985) list_medium_line_t3_right_iconx2_t2

0x0001,

0xfbf4,	// (0x0005af15) list_medium_line_t3_right_iconx2_t

0xaec5,	// (0x000561e6) list_medium_line_x3_t4_g4_g1_ParamLimits

0xaec5,	// (0x000561e6) list_medium_line_x3_t4_g4_g1

0xaec5,	// (0x000561e6) list_medium_line_x3_t4_g4_g2_ParamLimits

0xaec5,	// (0x000561e6) list_medium_line_x3_t4_g4_g2

0xaec5,	// (0x000561e6) list_medium_line_x3_t4_g4_g3_ParamLimits

0xaec5,	// (0x000561e6) list_medium_line_x3_t4_g4_g3

0xaec5,	// (0x000561e6) list_medium_line_x3_t4_g4_g4_ParamLimits

0xaec5,	// (0x000561e6) list_medium_line_x3_t4_g4_g4

0x0003,

0xf1c6,	// (0x0005a4e7) list_medium_line_x3_t4_g4_g_ParamLimits

0xf1c6,	// (0x0005a4e7) list_medium_line_x3_t4_g4_g

0xb103,	// (0x00056424) list_medium_line_x3_t4_g4_t1_ParamLimits

0xb103,	// (0x00056424) list_medium_line_x3_t4_g4_t1

0xb103,	// (0x00056424) list_medium_line_x3_t4_g4_t2_ParamLimits

0xb103,	// (0x00056424) list_medium_line_x3_t4_g4_t2

0xb103,	// (0x00056424) list_medium_line_x3_t4_g4_t3_ParamLimits

0xb103,	// (0x00056424) list_medium_line_x3_t4_g4_t3

0xb103,	// (0x00056424) list_medium_line_x3_t4_g4_t4_ParamLimits

0xb103,	// (0x00056424) list_medium_line_x3_t4_g4_t4

0x0003,

0xf1cf,	// (0x0005a4f0) list_medium_line_x3_t4_g4_t_ParamLimits

0xf1cf,	// (0x0005a4f0) list_medium_line_x3_t4_g4_t

0x0a87,	// (0x0004bda8) list_single_dyc_row_text_pane_t1_ParamLimits

0x0a87,	// (0x0004bda8) list_single_dyc_row_text_pane_t1

0x0ad0,	// (0x0004bdf1) list_single_dyc_row_text_pane_t2_ParamLimits

0x0ad0,	// (0x0004bdf1) list_single_dyc_row_text_pane_t2

0xa4ea,	// (0x0005580b) list_single_dyc_row_text_pane_t3_ParamLimits

0xa4ea,	// (0x0005580b) list_single_dyc_row_text_pane_t3

0x0005,

0xfc0c,	// (0x0005af2d) list_single_dyc_row_text_pane_t_ParamLimits

0xfc0c,	// (0x0005af2d) list_single_dyc_row_text_pane_t

0xa50e,	// (0x0005582f) list_single_dyc_row_pane_g1_ParamLimits

0xa50e,	// (0x0005582f) list_single_dyc_row_pane_g1

0xa51a,	// (0x0005583b) list_single_dyc_row_pane_g2_ParamLimits

0xa51a,	// (0x0005583b) list_single_dyc_row_pane_g2

0xa526,	// (0x00055847) list_single_dyc_row_pane_g3_ParamLimits

0xa526,	// (0x00055847) list_single_dyc_row_pane_g3

0xa532,	// (0x00055853) list_single_dyc_row_pane_g4_ParamLimits

0xa532,	// (0x00055853) list_single_dyc_row_pane_g4

0x0003,

0xfc19,	// (0x0005af3a) list_single_dyc_row_pane_g_ParamLimits

0xfc19,	// (0x0005af3a) list_single_dyc_row_pane_g

0xa53e,	// (0x0005585f) list_single_dyc_row_text_pane_ParamLimits

0xa53e,	// (0x0005585f) list_single_dyc_row_text_pane

0xa7c4,	// (0x00055ae5) bg_sp_fs_scroll_pane

0xec98,	// (0x00059fb9) thumb_sp_fs_scroll_pane

0xaec5,	// (0x000561e6) list_medium_line_g1_ParamLimits

0xaec5,	// (0x000561e6) list_medium_line_g1

0xb103,	// (0x00056424) list_medium_line_t1_ParamLimits

0xb103,	// (0x00056424) list_medium_line_t1

0xaec5,	// (0x000561e6) list_medium_line_x2_g1_ParamLimits

0xaec5,	// (0x000561e6) list_medium_line_x2_g1

0xaec5,	// (0x000561e6) list_medium_line_x2_g2_ParamLimits

0xaec5,	// (0x000561e6) list_medium_line_x2_g2

0x0001,

0xf1c1,	// (0x0005a4e2) list_medium_line_x2_g_ParamLimits

0xf1c1,	// (0x0005a4e2) list_medium_line_x2_g

0xb103,	// (0x00056424) list_medium_line_x2_t1_ParamLimits

0xb103,	// (0x00056424) list_medium_line_x2_t1

0xaec5,	// (0x000561e6) list_medium_line_x3_g1_ParamLimits

0xaec5,	// (0x000561e6) list_medium_line_x3_g1

0xeca1,	// (0x00059fc2) list_medium_line_x3_g2_ParamLimits

0xeca1,	// (0x00059fc2) list_medium_line_x3_g2

0x0001,

0xfc22,	// (0x0005af43) list_medium_line_x3_g_ParamLimits

0xfc22,	// (0x0005af43) list_medium_line_x3_g

0xecaf,	// (0x00059fd0) list_medium_line_x3_t1_ParamLimits

0xecaf,	// (0x00059fd0) list_medium_line_x3_t1

0xecc3,	// (0x00059fe4) thumb_sp_fs_scroll_pane_g1

0xeccc,	// (0x00059fed) thumb_sp_fs_scroll_pane_g2

0xecd5,	// (0x00059ff6) thumb_sp_fs_scroll_pane_g3

0x0002,

0x0377,	// (0x0004b698) thumb_sp_fs_scroll_pane_g

0xecc3,	// (0x00059fe4) bg_sp_fs_scroll_pane_g1

0xeccc,	// (0x00059fed) bg_sp_fs_scroll_pane_g2

0xecd5,	// (0x00059ff6) bg_sp_fs_scroll_pane_g3

0x0002,

0x0377,	// (0x0004b698) bg_sp_fs_scroll_pane_g

0xaec5,	// (0x000561e6) list_medium_line_x2_t3_g4_g1_ParamLimits

0xaec5,	// (0x000561e6) list_medium_line_x2_t3_g4_g1

0xaec5,	// (0x000561e6) list_medium_line_x2_t3_g4_g2_ParamLimits

0xaec5,	// (0x000561e6) list_medium_line_x2_t3_g4_g2

0xaec5,	// (0x000561e6) list_medium_line_x2_t3_g4_g3_ParamLimits

0xaec5,	// (0x000561e6) list_medium_line_x2_t3_g4_g3

0xaec5,	// (0x000561e6) list_medium_line_x2_t3_g4_g4_ParamLimits

0xaec5,	// (0x000561e6) list_medium_line_x2_t3_g4_g4

0x0003,

0xf1c6,	// (0x0005a4e7) list_medium_line_x2_t3_g4_g_ParamLimits

0xf1c6,	// (0x0005a4e7) list_medium_line_x2_t3_g4_g

0xb103,	// (0x00056424) list_medium_line_x2_t3_g4_t1_ParamLimits

0xb103,	// (0x00056424) list_medium_line_x2_t3_g4_t1

0xb103,	// (0x00056424) list_medium_line_x2_t3_g4_t2_ParamLimits

0xb103,	// (0x00056424) list_medium_line_x2_t3_g4_t2

0xb103,	// (0x00056424) list_medium_line_x2_t3_g4_t3_ParamLimits

0xb103,	// (0x00056424) list_medium_line_x2_t3_g4_t3

0x0002,

0xf1ba,	// (0x0005a4db) list_medium_line_x2_t3_g4_t_ParamLimits

0xf1ba,	// (0x0005a4db) list_medium_line_x2_t3_g4_t

0xaec5,	// (0x000561e6) list_medium_line_g2_g1_ParamLimits

0xaec5,	// (0x000561e6) list_medium_line_g2_g1

0xaec5,	// (0x000561e6) list_medium_line_g2_g2_ParamLimits

0xaec5,	// (0x000561e6) list_medium_line_g2_g2

0x0001,

0xf1c1,	// (0x0005a4e2) list_medium_line_g2_g_ParamLimits

0xf1c1,	// (0x0005a4e2) list_medium_line_g2_g

0xb103,	// (0x00056424) list_medium_line_g2_t1_ParamLimits

0xb103,	// (0x00056424) list_medium_line_g2_t1

0xaec5,	// (0x000561e6) list_medium_line_t3_g2_g1_ParamLimits

0xaec5,	// (0x000561e6) list_medium_line_t3_g2_g1

0xaec5,	// (0x000561e6) list_medium_line_t3_g2_g2_ParamLimits

0xaec5,	// (0x000561e6) list_medium_line_t3_g2_g2

0x0001,

0xf1c1,	// (0x0005a4e2) list_medium_line_t3_g2_g_ParamLimits

0xf1c1,	// (0x0005a4e2) list_medium_line_t3_g2_g

0xb103,	// (0x00056424) list_medium_line_t3_g2_t1_ParamLimits

0xb103,	// (0x00056424) list_medium_line_t3_g2_t1

0xb103,	// (0x00056424) list_medium_line_t3_g2_t2_ParamLimits

0xb103,	// (0x00056424) list_medium_line_t3_g2_t2

0xb103,	// (0x00056424) list_medium_line_t3_g2_t3_ParamLimits

0xb103,	// (0x00056424) list_medium_line_t3_g2_t3

0x0002,

0xf1ba,	// (0x0005a4db) list_medium_line_t3_g2_t_ParamLimits

0xf1ba,	// (0x0005a4db) list_medium_line_t3_g2_t

0xb131,	// (0x00056452) list_medium_line_right_icon_g1

0xb664,	// (0x00056985) list_medium_line_right_icon_t1

0xaec5,	// (0x000561e6) list_medium_line_t2_g1_ParamLimits

0xaec5,	// (0x000561e6) list_medium_line_t2_g1

0xb103,	// (0x00056424) list_medium_line_t2_t1_ParamLimits

0xb103,	// (0x00056424) list_medium_line_t2_t1

0xb103,	// (0x00056424) list_medium_line_t2_t2_ParamLimits

0xb103,	// (0x00056424) list_medium_line_t2_t2

0x0001,

0xf196,	// (0x0005a4b7) list_medium_line_t2_t_ParamLimits

0xf196,	// (0x0005a4b7) list_medium_line_t2_t

0xaec5,	// (0x000561e6) list_medium_line_t3_g1_ParamLimits

0xaec5,	// (0x000561e6) list_medium_line_t3_g1

0xb103,	// (0x00056424) list_medium_line_t3_t1_ParamLimits

0xb103,	// (0x00056424) list_medium_line_t3_t1

0xb103,	// (0x00056424) list_medium_line_t3_t2_ParamLimits

0xb103,	// (0x00056424) list_medium_line_t3_t2

0xb103,	// (0x00056424) list_medium_line_t3_t3_ParamLimits

0xb103,	// (0x00056424) list_medium_line_t3_t3

0x0002,

0xf1ba,	// (0x0005a4db) list_medium_line_t3_t_ParamLimits

0xf1ba,	// (0x0005a4db) list_medium_line_t3_t

0xaec5,	// (0x000561e6) list_medium_line_g3_g1_ParamLimits

0xaec5,	// (0x000561e6) list_medium_line_g3_g1

0xaec5,	// (0x000561e6) list_medium_line_g3_g2_ParamLimits

0xaec5,	// (0x000561e6) list_medium_line_g3_g2

0xaec5,	// (0x000561e6) list_medium_line_g3_g3_ParamLimits

0xaec5,	// (0x000561e6) list_medium_line_g3_g3

0x0002,

0xf1b3,	// (0x0005a4d4) list_medium_line_g3_g_ParamLimits

0xf1b3,	// (0x0005a4d4) list_medium_line_g3_g

0xb103,	// (0x00056424) list_medium_line_g3_t1_ParamLimits

0xb103,	// (0x00056424) list_medium_line_g3_t1

0xaec5,	// (0x000561e6) list_medium_line_t2_g3_g1_ParamLimits

0xaec5,	// (0x000561e6) list_medium_line_t2_g3_g1

0xaec5,	// (0x000561e6) list_medium_line_t2_g3_g2_ParamLimits

0xaec5,	// (0x000561e6) list_medium_line_t2_g3_g2

0xaec5,	// (0x000561e6) list_medium_line_t2_g3_g3_ParamLimits

0xaec5,	// (0x000561e6) list_medium_line_t2_g3_g3

0x0002,

0xf1b3,	// (0x0005a4d4) list_medium_line_t2_g3_g_ParamLimits

0xf1b3,	// (0x0005a4d4) list_medium_line_t2_g3_g

0xb103,	// (0x00056424) list_medium_line_t2_g3_t1_ParamLimits

0xb103,	// (0x00056424) list_medium_line_t2_g3_t1

0xb103,	// (0x00056424) list_medium_line_t2_g3_t2_ParamLimits

0xb103,	// (0x00056424) list_medium_line_t2_g3_t2

0x0001,

0xf196,	// (0x0005a4b7) list_medium_line_t2_g3_t_ParamLimits

0xf196,	// (0x0005a4b7) list_medium_line_t2_g3_t

0xaec5,	// (0x000561e6) list_medium_line_t3_g3_g1_ParamLimits

0xaec5,	// (0x000561e6) list_medium_line_t3_g3_g1

0xaec5,	// (0x000561e6) list_medium_line_t3_g3_g2_ParamLimits

0xaec5,	// (0x000561e6) list_medium_line_t3_g3_g2

0xaec5,	// (0x000561e6) list_medium_line_t3_g3_g3_ParamLimits

0xaec5,	// (0x000561e6) list_medium_line_t3_g3_g3

0x0002,

0xf1b3,	// (0x0005a4d4) list_medium_line_t3_g3_g_ParamLimits

0xf1b3,	// (0x0005a4d4) list_medium_line_t3_g3_g

0xb103,	// (0x00056424) list_medium_line_t3_g3_t1_ParamLimits

0xb103,	// (0x00056424) list_medium_line_t3_g3_t1

0xb103,	// (0x00056424) list_medium_line_t3_g3_t2_ParamLimits

0xb103,	// (0x00056424) list_medium_line_t3_g3_t2

0xb103,	// (0x00056424) list_medium_line_t3_g3_t3_ParamLimits

0xb103,	// (0x00056424) list_medium_line_t3_g3_t3

0x0002,

0xf1ba,	// (0x0005a4db) list_medium_line_t3_g3_t_ParamLimits

0xf1ba,	// (0x0005a4db) list_medium_line_t3_g3_t

0xb131,	// (0x00056452) list_medium_line_right_iconx2_g1

0xb131,	// (0x00056452) list_medium_line_right_iconx2_g2

0x0001,

0xf398,	// (0x0005a6b9) list_medium_line_right_iconx2_g

0xb664,	// (0x00056985) list_medium_line_right_iconx2_t1

0xb131,	// (0x00056452) list_medium_line_t2_right_iconx2_g1

0xb131,	// (0x00056452) list_medium_line_t2_right_iconx2_g2

0x0001,

0xf398,	// (0x0005a6b9) list_medium_line_t2_right_iconx2_g

0xb664,	// (0x00056985) list_medium_line_t2_right_iconx2_t1

0xb664,	// (0x00056985) list_medium_line_t2_right_iconx2_t2

0x0001,

0xfbf4,	// (0x0005af15) list_medium_line_t2_right_iconx2_t

0xb664,	// (0x00056985) list_medium_line_x4_t4_t1

0xb664,	// (0x00056985) list_medium_line_x4_t4_t2

0xb664,	// (0x00056985) list_medium_line_x4_t4_t3

0xb664,	// (0x00056985) list_medium_line_x4_t4_t4

0x0003,

0xf283,	// (0x0005a5a4) list_medium_line_x4_t4_t

0x72de,	// (0x000525ff) tport_appsw_pane_ParamLimits

0x72de,	// (0x000525ff) tport_appsw_pane

0x72f6,	// (0x00052617) tport_contact_pane_ParamLimits

0x72f6,	// (0x00052617) tport_contact_pane

0x730e,	// (0x0005262f) tport_listscroll_pane_ParamLimits

0x730e,	// (0x0005262f) tport_listscroll_pane

0x7328,	// (0x00052649) cell_tport_appsw_pane_ParamLimits

0x7328,	// (0x00052649) cell_tport_appsw_pane

0xbbf3,	// (0x00056f14) tport_appsw_pane_g1_ParamLimits

0xbbf3,	// (0x00056f14) tport_appsw_pane_g1

0xecde,	// (0x00059fff) tport_contact_pane_g1

0xece7,	// (0x0005a008) tport_contact_pane_t1

0xecf5,	// (0x0005a016) tport_contact_pane_t2

0x0001,

0x037e,	// (0x0004b69f) tport_contact_pane_t

0xed03,	// (0x0005a024) list_tport_pane

0xed0c,	// (0x0005a02d) scroll_pane_cp_030

0x7370,	// (0x00052691) cell_tport_appsw_pane_g1

0x7380,	// (0x000526a1) cell_tport_appsw_pane_t1

0x738e,	// (0x000526af) grid_highlight_pane_cp019

0x7396,	// (0x000526b7) list_tport_double_graphic_pane_ParamLimits

0x7396,	// (0x000526b7) list_tport_double_graphic_pane

0xa7ce,	// (0x00055aef) list_highlight_pane_cp023_ParamLimits

0xa7ce,	// (0x00055aef) list_highlight_pane_cp023

0x73a3,	// (0x000526c4) list_tport_double_graphic_pane_g1_ParamLimits

0x73a3,	// (0x000526c4) list_tport_double_graphic_pane_g1

0x73b0,	// (0x000526d1) list_tport_double_graphic_pane_t1_ParamLimits

0x73b0,	// (0x000526d1) list_tport_double_graphic_pane_t1

0x73c5,	// (0x000526e6) list_tport_double_graphic_pane_t2_ParamLimits

0x73c5,	// (0x000526e6) list_tport_double_graphic_pane_t2

0x0001,

0xfc2e,	// (0x0005af4f) list_tport_double_graphic_pane_t_ParamLimits

0xfc2e,	// (0x0005af4f) list_tport_double_graphic_pane_t

0xa7c4,	// (0x00055ae5) main_cale_note_pane

0x564e,	// (0x0005096f) cell_vitu2_function_top_wide_pane_cp01_ParamLimits

0x564e,	// (0x0005096f) cell_vitu2_function_top_wide_pane_cp01

0x6d68,	// (0x00052089) wait_bar_pane_cp05_ParamLimits

0xa7ce,	// (0x00055aef) listscroll_cmail_pane

0xed1d,	// (0x0005a03e) list_cmail_pane

0x73d7,	// (0x000526f8) list_cmail_body_pane

0x73ed,	// (0x0005270e) list_single_cmail_header_caption_pane

0x7404,	// (0x00052725) list_single_cmail_header_detail_pane_ParamLimits

0x7404,	// (0x00052725) list_single_cmail_header_detail_pane

0xed34,	// (0x0005a055) list_single_cmail_header_caption_pane_t1

0x0c05,	// (0x0004bf26) list_single_cmail_header_detail_pane_g1_ParamLimits

0x0c05,	// (0x0004bf26) list_single_cmail_header_detail_pane_g1

0xa55d,	// (0x0005587e) list_single_cmail_header_detail_pane_g2_ParamLimits

0xa55d,	// (0x0005587e) list_single_cmail_header_detail_pane_g2

0x0002,

0xfc33,	// (0x0005af54) list_single_cmail_header_detail_pane_g_ParamLimits

0xfc33,	// (0x0005af54) list_single_cmail_header_detail_pane_g

0x0c1d,	// (0x0004bf3e) list_single_cmail_header_detail_pane_t1_ParamLimits

0x0c1d,	// (0x0004bf3e) list_single_cmail_header_detail_pane_t1

0x0c5b,	// (0x0004bf7c) list_single_cmail_header_editor_pane_bg_ParamLimits

0x0c5b,	// (0x0004bf7c) list_single_cmail_header_editor_pane_bg

0xe7e1,	// (0x00059b02) list_cmail_body_pane_g1

0xed58,	// (0x0005a079) list_cmail_body_pane_t1

0xdb90,	// (0x00058eb1) list_single_cmail_header_editor_pane_bg_g1

0xb342,	// (0x00056663) list_single_cmail_header_editor_pane_bg_g1_copy1

0xdba0,	// (0x00058ec1) list_single_cmail_header_editor_pane_bg_g1_copy2

0xdb98,	// (0x00058eb9) list_single_cmail_header_editor_pane_bg_g1_copy3

0xddfd,	// (0x0005911e) list_single_cmail_header_editor_pane_bg_g1_copy4

0xdbc0,	// (0x00058ee1) list_single_cmail_header_editor_pane_bg_g1_copy4_copy1

0xdbb0,	// (0x00058ed1) list_single_cmail_header_editor_pane_bg_g1_copy4_copy2

0xdbb8,	// (0x00058ed9) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3

0xb322,	// (0x00056643) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3_copy1

0x7432,	// (0x00052753) calenote_gesture_pane_ParamLimits

0x7432,	// (0x00052753) calenote_gesture_pane

0x7452,	// (0x00052773) calenote_window_pane_ParamLimits

0x7452,	// (0x00052773) calenote_window_pane

0xed66,	// (0x0005a087) popup_note_window_cp01

0x746e,	// (0x0005278f) calenote_swipe_1_pane_ParamLimits

0x746e,	// (0x0005278f) calenote_swipe_1_pane

0x712c,	// (0x0005244d) calenote_swipe_2_pane_ParamLimits

0x712c,	// (0x0005244d) calenote_swipe_2_pane

0xeb33,	// (0x00059e54) calenote_swipe_1_pane_g1_ParamLimits

0xeb33,	// (0x00059e54) calenote_swipe_1_pane_g1

0xeb40,	// (0x00059e61) calenote_swipe_1_pane_g2_ParamLimits

0xeb40,	// (0x00059e61) calenote_swipe_1_pane_g2

0x0001,

0xfbdc,	// (0x0005aefd) calenote_swipe_1_pane_g_ParamLimits

0xfbdc,	// (0x0005aefd) calenote_swipe_1_pane_g

0xed78,	// (0x0005a099) calenote_swipe_1_pane_t1_ParamLimits

0xed78,	// (0x0005a099) calenote_swipe_1_pane_t1

0xeb33,	// (0x00059e54) calenote_swipe_2_pane_g1_ParamLimits

0xeb33,	// (0x00059e54) calenote_swipe_2_pane_g1

0xed97,	// (0x0005a0b8) calenote_swipe_2_pane_g2_ParamLimits

0xed97,	// (0x0005a0b8) calenote_swipe_2_pane_g2

0x0001,

0xfc3f,	// (0x0005af60) calenote_swipe_2_pane_g_ParamLimits

0xfc3f,	// (0x0005af60) calenote_swipe_2_pane_g

0xeda3,	// (0x0005a0c4) calenote_swipe_2_pane_t1_ParamLimits

0xeda3,	// (0x0005a0c4) calenote_swipe_2_pane_t1

0xa7c4,	// (0x00055ae5) main_mup_navstr_pane

0x44eb,	// (0x0004f80c) main_mup3_pane_t7_ParamLimits

0x44eb,	// (0x0004f80c) main_mup3_pane_t7

0x9fdc,	// (0x000552fd) main_mp4_pane_g6_ParamLimits

0x9fdc,	// (0x000552fd) main_mp4_pane_g6

0xa19e,	// (0x000554bf) main_image3_pane_t4_ParamLimits

0xa19e,	// (0x000554bf) main_image3_pane_t4

0x7483,	// (0x000527a4) popup_navstr_preview_pane_ParamLimits

0x7483,	// (0x000527a4) popup_navstr_preview_pane

0x7497,	// (0x000527b8) scroll_navstr_pane_ParamLimits

0x7497,	// (0x000527b8) scroll_navstr_pane

0xa7c4,	// (0x00055ae5) bg_popup_preview_window_pane_cp04

0xedca,	// (0x0005a0eb) popup_navstr_preview_pane_t1

0x74ab,	// (0x000527cc) scroll_navstr_pane_g1_ParamLimits

0x74ab,	// (0x000527cc) scroll_navstr_pane_g1

0x74bf,	// (0x000527e0) scroll_navstr_pane_t1_ParamLimits

0x74bf,	// (0x000527e0) scroll_navstr_pane_t1

0xed6f,	// (0x0005a090) bg_button_pane_cp014

0xed6f,	// (0x0005a090) bg_button_pane_cp030

0x09e2,	// (0x0004bd03) list_double_fisheye_pane_g4_ParamLimits

0x09e2,	// (0x0004bd03) list_double_fisheye_pane_g4

0x09ee,	// (0x0004bd0f) list_double_fisheye_pane_g5_ParamLimits

0x09ee,	// (0x0004bd0f) list_double_fisheye_pane_g5

0xdc6f,	// (0x00058f90) sp_fs_scroll_pane_cp03

0xec4a,	// (0x00059f6b) main_sp_fs_ctrlbar_pane_g1_ParamLimits

0xec56,	// (0x00059f77) main_sp_fs_ctrlbar_pane_g2_ParamLimits

0xfbf9,	// (0x0005af1a) main_sp_fs_ctrlbar_pane_g_ParamLimits

0x7218,	// (0x00052539) main_sp_fs_ctrlbar_pane_t1_ParamLimits

0xed2c,	// (0x0005a04d) sp_fs_scroll_pane_cp02

0xb031,	// (0x00056352) popup_sp_fs_calendar_preview_list_single_pane_ParamLimits

0xb031,	// (0x00056352) popup_sp_fs_calendar_preview_list_single_pane

0xa7c4,	// (0x00055ae5) main_cam6_pano_pane

0xa7ce,	// (0x00055aef) main_mup3_pane_ParamLimits

0xa7c4,	// (0x00055ae5) main_phacti_pane

0x6c3b,	// (0x00051f5c) bg_button_pane_cp11

0x6c55,	// (0x00051f76) main_mobtv_info_pane_g2_ParamLimits

0x6c55,	// (0x00051f76) main_mobtv_info_pane_g2

0x0001,

0xfb59,	// (0x0005ae7a) main_mobtv_info_pane_g_ParamLimits

0xfb59,	// (0x0005ae7a) main_mobtv_info_pane_g

0x6e32,	// (0x00052153) sc_clock_pane_t5_ParamLimits

0x6e32,	// (0x00052153) sc_clock_pane_t5

0x6efa,	// (0x0005221b) main_radioblah_pane_g1_ParamLimits

0xea7f,	// (0x00059da0) main_radioblah_pane_t3_ParamLimits

0xea7f,	// (0x00059da0) main_radioblah_pane_t3

0xea97,	// (0x00059db8) main_radioblah_pane_t4_ParamLimits

0xea97,	// (0x00059db8) main_radioblah_pane_t4

0x6f22,	// (0x00052243) main_radioblah_text_pane_ParamLimits

0x6f22,	// (0x00052243) main_radioblah_text_pane

0x6f34,	// (0x00052255) main_radioblah_info_pane_g1_ParamLimits

0x6fcd,	// (0x000522ee) main_radioblah_info_pane_t4_ParamLimits

0x6fcd,	// (0x000522ee) main_radioblah_info_pane_t4

0xa7ce,	// (0x00055aef) main_sp_fs_calendar_pane

0x74d6,	// (0x000527f7) main_phacti_pane_g1

0x74de,	// (0x000527ff) phacti_note_pane_ParamLimits

0x74de,	// (0x000527ff) phacti_note_pane

0xee17,	// (0x0005a138) phacti_term_pane_ParamLimits

0xee17,	// (0x0005a138) phacti_term_pane

0xee2c,	// (0x0005a14d) phacti_note_pane_t1_ParamLimits

0xee2c,	// (0x0005a14d) phacti_note_pane_t1

0xa58d,	// (0x000558ae) phacti_term_pane_g1

0xa595,	// (0x000558b6) phacti_term_pane_t1_ParamLimits

0xa595,	// (0x000558b6) phacti_term_pane_t1

0xee43,	// (0x0005a164) popup_sp_fs_calendar_preview_list_single_pane_g1

0xee4b,	// (0x0005a16c) popup_sp_fs_calendar_preview_list_single_pane_g2

0x0001,

0xfc49,	// (0x0005af6a) popup_sp_fs_calendar_preview_list_single_pane_g

0xee53,	// (0x0005a174) popup_sp_fs_calendar_preview_list_single_pane_t1_ParamLimits

0xee53,	// (0x0005a174) popup_sp_fs_calendar_preview_list_single_pane_t1

0xee69,	// (0x0005a18a) aid_popup_sp_fs_bg_corner_pane

0xb131,	// (0x00056452) popup_sp_fs_calendar_preview_bg_pane_g1

0xa7c4,	// (0x00055ae5) popup_sp_fs_calendar_preview_bg_pane

0xee71,	// (0x0005a192) popup_sp_fs_calendar_preview_list_pane

0xbc15,	// (0x00056f36) bg_main_sp_fs_cale_pane_ParamLimits

0xbc15,	// (0x00056f36) bg_main_sp_fs_cale_pane

0xa5c8,	// (0x000558e9) listscroll_cale_mrui_pane_ParamLimits

0xa5c8,	// (0x000558e9) listscroll_cale_mrui_pane

0xa5dd,	// (0x000558fe) listscroll_sp_fs_schedule_track_pane

0xa5e6,	// (0x00055907) main_sp_fs_ctrlbar_pane_cp01_ParamLimits

0xa5e6,	// (0x00055907) main_sp_fs_ctrlbar_pane_cp01

0xee79,	// (0x0005a19a) main_sp_fs_ribbon_pane

0xa5f9,	// (0x0005591a) popup_sp_fs_cale_preview_window

0x7553,	// (0x00052874) list_single_sp_fs_schedule_track_pane_ParamLimits

0x7553,	// (0x00052874) list_single_sp_fs_schedule_track_pane

0xa7ce,	// (0x00055aef) bg_sp_fs_highlight_list_pane_cp03_ParamLimits

0xa7ce,	// (0x00055aef) bg_sp_fs_highlight_list_pane_cp03

0x7567,	// (0x00052888) list_single_sp_fs_schedule_track_pane_g1_ParamLimits

0x7567,	// (0x00052888) list_single_sp_fs_schedule_track_pane_g1

0x7573,	// (0x00052894) list_single_sp_fs_schedule_track_pane_g2_ParamLimits

0x7573,	// (0x00052894) list_single_sp_fs_schedule_track_pane_g2

0x0001,

0xfc4e,	// (0x0005af6f) list_single_sp_fs_schedule_track_pane_g_ParamLimits

0xfc4e,	// (0x0005af6f) list_single_sp_fs_schedule_track_pane_g

0x757f,	// (0x000528a0) list_single_sp_fs_schedule_track_pane_t1_ParamLimits

0x757f,	// (0x000528a0) list_single_sp_fs_schedule_track_pane_t1

0x7599,	// (0x000528ba) sp_fs_schedule_track_pane_ParamLimits

0x7599,	// (0x000528ba) sp_fs_schedule_track_pane

0xee81,	// (0x0005a1a2) sp_fs_schedule_track_pane_g1

0xee89,	// (0x0005a1aa) sp_fs_schedule_track_pane_g2

0xee91,	// (0x0005a1b2) sp_fs_schedule_track_pane_g3

0xee99,	// (0x0005a1ba) sp_fs_schedule_track_pane_g4

0xeea1,	// (0x0005a1c2) sp_fs_schedule_track_pane_g5

0x0004,

0xfc53,	// (0x0005af74) sp_fs_schedule_track_pane_g

0xdb90,	// (0x00058eb1) bg_sp_fs_schedule_viewer_highlight_g1

0xb342,	// (0x00056663) bg_sp_fs_schedule_viewer_highlight_g2

0xdb98,	// (0x00058eb9) bg_sp_fs_schedule_viewer_highlight_g3

0xdba0,	// (0x00058ec1) bg_sp_fs_schedule_viewer_highlight_g4

0xddfd,	// (0x0005911e) bg_sp_fs_schedule_viewer_highlight_g5

0xdbb0,	// (0x00058ed1) bg_sp_fs_schedule_viewer_highlight_g6

0xdbb8,	// (0x00058ed9) bg_sp_fs_schedule_viewer_highlight_g7

0xdbc0,	// (0x00058ee1) bg_sp_fs_schedule_viewer_highlight_g8

0xb322,	// (0x00056643) bg_sp_fs_schedule_viewer_highlight_g9

0x0008,

0xfc5e,	// (0x0005af7f) bg_sp_fs_schedule_viewer_highlight_g

0xa7c4,	// (0x00055ae5) bg_main_sp_fs_ribbon_pane

0x75aa,	// (0x000528cb) main_sp_fs_ribbon_pane_g1

0xeea9,	// (0x0005a1ca) main_sp_fs_ribbon_pane_t1

0x75b3,	// (0x000528d4) main_sp_fs_ribbon_pane_t2

0xeeb8,	// (0x0005a1d9) main_sp_fs_ribbon_pane_t3

0x0002,

0xfc71,	// (0x0005af92) main_sp_fs_ribbon_pane_t

0xeec7,	// (0x0005a1e8) main_sp_fs_ribbon_scheduler_pane

0xeecf,	// (0x0005a1f0) bg_main_sp_fs_ribbon_pane_g1

0xeed8,	// (0x0005a1f9) bg_main_sp_fs_ribbon_pane_g2

0xeee1,	// (0x0005a202) bg_main_sp_fs_ribbon_pane_g3

0x0002,

0xfc78,	// (0x0005af99) bg_main_sp_fs_ribbon_pane_g

0xeee9,	// (0x0005a20a) main_sp_fs_ribbon_scheduler_pane_g1

0xeef2,	// (0x0005a213) main_sp_fs_ribbon_scheduler_pane_g2

0xeefb,	// (0x0005a21c) main_sp_fs_ribbon_scheduler_pane_g3

0x0002,

0xfc7f,	// (0x0005afa0) main_sp_fs_ribbon_scheduler_pane_g

0xef04,	// (0x0005a225) list_cale_mrui_pane

0x75c2,	// (0x000528e3) sp_fs_scroll_pane_cp07_ParamLimits

0x75c2,	// (0x000528e3) sp_fs_scroll_pane_cp07

0x75de,	// (0x000528ff) bg_sp_fs_schedule_viewer_highlight_ParamLimits

0x75de,	// (0x000528ff) bg_sp_fs_schedule_viewer_highlight

0xef11,	// (0x0005a232) list_single_sp_fs_schedule_track_pane_cp01

0xef19,	// (0x0005a23a) list_sp_fs_schedule_track_pane

0xef21,	// (0x0005a242) sp_fs_scroll_pane_cp06_ParamLimits

0xef21,	// (0x0005a242) sp_fs_scroll_pane_cp06

0xb131,	// (0x00056452) bgmain_sp_fs_calendar_pane_g1

0x0c74,	// (0x0004bf95) list_single_cale_mrui_pane_ParamLimits

0x0c74,	// (0x0004bf95) list_single_cale_mrui_pane

0xa60b,	// (0x0005592c) list_single_cale_mrui_row_pane_ParamLimits

0xa60b,	// (0x0005592c) list_single_cale_mrui_row_pane

0xa618,	// (0x00055939) list_single_cale_mrui_row_pane_g1_ParamLimits

0xa618,	// (0x00055939) list_single_cale_mrui_row_pane_g1

0xa650,	// (0x00055971) list_single_cale_mrui_row_pane_t1_ParamLimits

0xa650,	// (0x00055971) list_single_cale_mrui_row_pane_t1

0x0c95,	// (0x0004bfb6) list_single_cale_mrui_row_pane_t2_ParamLimits

0x0c95,	// (0x0004bfb6) list_single_cale_mrui_row_pane_t2

0xa662,	// (0x00055983) list_single_cale_mrui_row_pane_t3_ParamLimits

0xa662,	// (0x00055983) list_single_cale_mrui_row_pane_t3

0xa691,	// (0x000559b2) list_single_cale_mrui_row_pane_t4_ParamLimits

0xa691,	// (0x000559b2) list_single_cale_mrui_row_pane_t4

0x0003,

0xfc8d,	// (0x0005afae) list_single_cale_mrui_row_pane_t_ParamLimits

0xfc8d,	// (0x0005afae) list_single_cale_mrui_row_pane_t

0x0cfd,	// (0x0004c01e) list_single_cmail_header_editor_pane_bg_cp01_ParamLimits

0x0cfd,	// (0x0004c01e) list_single_cmail_header_editor_pane_bg_cp01

0x0d2b,	// (0x0004c04c) list_single_cmail_header_editor_pane_bg_cp02_ParamLimits

0x0d2b,	// (0x0004c04c) list_single_cmail_header_editor_pane_bg_cp02

0x75ee,	// (0x0005290f) main_radioblah_text_pane_t1_ParamLimits

0x75ee,	// (0x0005290f) main_radioblah_text_pane_t1

0xef40,	// (0x0005a261) cam6_indi_pane_cp01

0xef48,	// (0x0005a269) cam6_mode_pane_cp01

0xef50,	// (0x0005a271) cam6_pano_pane

0xef59,	// (0x0005a27a) cam6_zoom_pane_cp01

0xef61,	// (0x0005a282) cam6_pano_image_pane

0xef6c,	// (0x0005a28d) cam6_pano_pane_g1

0xe7e1,	// (0x00059b02) cam6_pano_pane_g2

0xef75,	// (0x0005a296) cam6_pano_pane_g3

0xef7e,	// (0x0005a29f) cam6_pano_pane_g4

0xd85e,	// (0x00058b7f) cam6_pano_pane_g5

0xef87,	// (0x0005a2a8) cam6_pano_pane_g6

0xef91,	// (0x0005a2b2) cam6_pano_pane_g7

0xef99,	// (0x0005a2ba) cam6_pano_pane_g8

0xefa2,	// (0x0005a2c3) cam6_pano_pane_g9

0x0008,

0xfc96,	// (0x0005afb7) cam6_pano_pane_g

0xa7c4,	// (0x00055ae5) main_browser_tag_pane

0xedc2,	// (0x0005a0e3) grid_navstr_albumart_pane

0xefad,	// (0x0005a2ce) cell_navstr_albumart_pane_ParamLimits

0xefad,	// (0x0005a2ce) cell_navstr_albumart_pane

0xefcd,	// (0x0005a2ee) cell_navstr_albumart_pane_g1

0xcd29,	// (0x0005804a) cell_navstr_albumart_pane_g2

0xcd39,	// (0x0005805a) cell_navstr_albumart_pane_g3

0xcd31,	// (0x00058052) cell_navstr_albumart_pane_g4

0x0003,

0x0405,	// (0x0004b726) cell_navstr_albumart_pane_g

0x7609,	// (0x0005292a) bt_list_pane_ParamLimits

0x7609,	// (0x0005292a) bt_list_pane

0x761d,	// (0x0005293e) bt_list_pane_t1

0x762c,	// (0x0005294d) bt_list_pane_t2

0x0001,

0xfca9,	// (0x0005afca) bt_list_pane_t

0xa7c4,	// (0x00055ae5) main_cale_prevew_pane

0x763b,	// (0x0005295c) popup_cale_preview_window_ParamLimits

0x763b,	// (0x0005295c) popup_cale_preview_window

0xa7ce,	// (0x00055aef) bg_popup_preview_window_pane_cp05_ParamLimits

0xa7ce,	// (0x00055aef) bg_popup_preview_window_pane_cp05

0xefd5,	// (0x0005a2f6) list_cale_preview_pane_ParamLimits

0xefd5,	// (0x0005a2f6) list_cale_preview_pane

0x7654,	// (0x00052975) list_double_cale_preview_pane_ParamLimits

0x7654,	// (0x00052975) list_double_cale_preview_pane

0xdbc8,	// (0x00058ee9) list_single_cale_preview_pane_ParamLimits

0xdbc8,	// (0x00058ee9) list_single_cale_preview_pane

0x7666,	// (0x00052987) list_single_cale_preview_pane_g1

0x766e,	// (0x0005298f) list_single_cale_preview_pane_t1_ParamLimits

0x766e,	// (0x0005298f) list_single_cale_preview_pane_t1

0x7683,	// (0x000529a4) list_double_cale_preview_pane_g1

0x768b,	// (0x000529ac) list_double_cale_preview_pane_t1_ParamLimits

0x768b,	// (0x000529ac) list_double_cale_preview_pane_t1

0x76a0,	// (0x000529c1) list_double_cale_preview_pane_t2_ParamLimits

0x76a0,	// (0x000529c1) list_double_cale_preview_pane_t2

0x0001,

0xfcae,	// (0x0005afcf) list_double_cale_preview_pane_t_ParamLimits

0xfcae,	// (0x0005afcf) list_double_cale_preview_pane_t

0xa7c4,	// (0x00055ae5) main_ezdial_pane

0xa7ce,	// (0x00055aef) main_sp_fs_email_pane_ParamLimits

0x7188,	// (0x000524a9) cmail_ddmenu_btn01_pane_ParamLimits

0x7188,	// (0x000524a9) cmail_ddmenu_btn01_pane

0x719b,	// (0x000524bc) cmail_ddmenu_btn02_pane_ParamLimits

0x719b,	// (0x000524bc) cmail_ddmenu_btn02_pane

0x71be,	// (0x000524df) cmail_ddmenu_btn03_pane_ParamLimits

0x71be,	// (0x000524df) cmail_ddmenu_btn03_pane

0x7257,	// (0x00052578) main_sp_fs_ctrlbar_pane_ParamLimits

0x727b,	// (0x0005259c) main_sp_fs_listscroll_pane_te_cp01_ParamLimits

0x73d7,	// (0x000526f8) list_cmail_body_pane_ParamLimits

0xed42,	// (0x0005a063) bg_button_pane_cp12

0xed4b,	// (0x0005a06c) list_single_cmail_header_detail_pane_g3_ParamLimits

0xed4b,	// (0x0005a06c) list_single_cmail_header_detail_pane_g3

0xa569,	// (0x0005588a) list_single_cmail_header_detail_pane_t2_ParamLimits

0xa569,	// (0x0005588a) list_single_cmail_header_detail_pane_t2

0x0001,

0xfc3a,	// (0x0005af5b) list_single_cmail_header_detail_pane_t_ParamLimits

0xfc3a,	// (0x0005af5b) list_single_cmail_header_detail_pane_t

0xa5aa,	// (0x000558cb) phacti_term_pane_t2_ParamLimits

0xa5aa,	// (0x000558cb) phacti_term_pane_t2

0x0001,

0xfc44,	// (0x0005af65) phacti_term_pane_t_ParamLimits

0xfc44,	// (0x0005af65) phacti_term_pane_t

0xefe1,	// (0x0005a302) aid_size_list_single_double

0x76b8,	// (0x000529d9) popup_ezdial_listscroll_window

0x76d4,	// (0x000529f5) popup_number_entry_window_cp01

0xb0fb,	// (0x0005641c) bg_popup_call_pane_cp09

0xefed,	// (0x0005a30e) ezdial_list_pane

0xeff5,	// (0x0005a316) scroll_pane_cp23

0xbc15,	// (0x00056f36) bg_button_pane_cp028_ParamLimits

0xbc15,	// (0x00056f36) bg_button_pane_cp028

0x76e2,	// (0x00052a03) cmail_ddmenu_btn01_pane_g1_ParamLimits

0x76e2,	// (0x00052a03) cmail_ddmenu_btn01_pane_g1

0x76ee,	// (0x00052a0f) cmail_ddmenu_btn01_pane_g2_ParamLimits

0x76ee,	// (0x00052a0f) cmail_ddmenu_btn01_pane_g2

0x0001,

0xfcb3,	// (0x0005afd4) cmail_ddmenu_btn01_pane_g_ParamLimits

0xfcb3,	// (0x0005afd4) cmail_ddmenu_btn01_pane_g

0xeffd,	// (0x0005a31e) cmail_ddmenu_btn01_pane_t1_ParamLimits

0xeffd,	// (0x0005a31e) cmail_ddmenu_btn01_pane_t1

0xbc15,	// (0x00056f36) bg_button_pane_cp029_ParamLimits

0xbc15,	// (0x00056f36) bg_button_pane_cp029

0x76fa,	// (0x00052a1b) cmail_ddmenu_btn02_pane_g1_ParamLimits

0x76fa,	// (0x00052a1b) cmail_ddmenu_btn02_pane_g1

0x7712,	// (0x00052a33) cmail_ddmenu_btn02_pane_t1_ParamLimits

0x7712,	// (0x00052a33) cmail_ddmenu_btn02_pane_t1

0xa7ce,	// (0x00055aef) bg_button_pane_cp031_ParamLimits

0xa7ce,	// (0x00055aef) bg_button_pane_cp031

0x76fa,	// (0x00052a1b) cmail_ddmenu_btn03_pane_g1_ParamLimits

0x76fa,	// (0x00052a1b) cmail_ddmenu_btn03_pane_g1

0x7712,	// (0x00052a33) cmail_ddmenu_btn03_pane_t1_ParamLimits

0x7712,	// (0x00052a33) cmail_ddmenu_btn03_pane_t1

0x4e44,	// (0x00050165) cell_dialer2_keypad_pane_t1_ParamLimits

0x4e5e,	// (0x0005017f) cell_dialer2_keypad_pane_t1_copy1_ParamLimits

0x4e5e,	// (0x0005017f) cell_dialer2_keypad_pane_t1_copy1

0x6a5e,	// (0x00051d7f) ncimui_group_button_pane

0xa7ce,	// (0x00055aef) main_sp_fs_calendar_pane_ParamLimits

0x73ed,	// (0x0005270e) list_single_cmail_header_caption_pane_ParamLimits

0xa5bf,	// (0x000558e0) aid_recal_txt_sm_pane

0xa7c4,	// (0x00055ae5) mian_recal_day_pane

0xa5f9,	// (0x0005591a) popup_sp_fs_cale_preview_window_ParamLimits

0xf012,	// (0x0005a333) list_recal_day_pane

0xa6db,	// (0x000559fc) list_single_recal_day_pane_ParamLimits

0xa6db,	// (0x000559fc) list_single_recal_day_pane

0xf039,	// (0x0005a35a) list_single_recal_day_pane_g1_ParamLimits

0xf039,	// (0x0005a35a) list_single_recal_day_pane_g1

0xa6ed,	// (0x00055a0e) list_single_recal_day_pane_g2_ParamLimits

0xa6ed,	// (0x00055a0e) list_single_recal_day_pane_g2

0xa6f9,	// (0x00055a1a) list_single_recal_day_pane_g3_ParamLimits

0xa6f9,	// (0x00055a1a) list_single_recal_day_pane_g3

0x0d4b,	// (0x0004c06c) list_single_recal_day_pane_g4_ParamLimits

0x0d4b,	// (0x0004c06c) list_single_recal_day_pane_g4

0xa705,	// (0x00055a26) list_single_recal_day_pane_g5_ParamLimits

0xa705,	// (0x00055a26) list_single_recal_day_pane_g5

0xa711,	// (0x00055a32) list_single_recal_day_pane_g6_ParamLimits

0xa711,	// (0x00055a32) list_single_recal_day_pane_g6

0x0004,

0xfcc2,	// (0x0005afe3) list_single_recal_day_pane_g_ParamLimits

0xfcc2,	// (0x0005afe3) list_single_recal_day_pane_g

0xa725,	// (0x00055a46) list_single_recal_day_pane_t1

0xa737,	// (0x00055a58) list_single_recal_day_pane_t2

0x0001,

0xfccd,	// (0x0005afee) list_single_recal_day_pane_t

0x7736,	// (0x00052a57) ncimui_query_button_pane_ParamLimits

0x7736,	// (0x00052a57) ncimui_query_button_pane

0x7746,	// (0x00052a67) ncimui_query_button_pane_t1_ParamLimits

0x7746,	// (0x00052a67) ncimui_query_button_pane_t1

0x7759,	// (0x00052a7a) ncimui_query_button_pane_t2_ParamLimits

0x7759,	// (0x00052a7a) ncimui_query_button_pane_t2

0x0001,

0xfcd2,	// (0x0005aff3) ncimui_query_button_pane_t_ParamLimits

0xfcd2,	// (0x0005aff3) ncimui_query_button_pane_t

0x776c,	// (0x00052a8d) query_button_pane_ParamLimits

0x776c,	// (0x00052a8d) query_button_pane

0xa7c4,	// (0x00055ae5) bg_button_pane_cp0028

0x777f,	// (0x00052aa0) query_button_pane_t1

0x38eb,	// (0x0004ec0c) main_tport_pane_ParamLimits

0x729b,	// (0x000525bc) bg_popup_window_pane_cp01_ParamLimits

0x729b,	// (0x000525bc) bg_popup_window_pane_cp01

0x72b6,	// (0x000525d7) heading_pane_cp08_ParamLimits

0x72b6,	// (0x000525d7) heading_pane_cp08

0x72c9,	// (0x000525ea) heading_pane_cp07_ParamLimits

0x72c9,	// (0x000525ea) heading_pane_cp07

0x7370,	// (0x00052691) cell_tport_appsw_pane_g2

0x0002,

0xfc27,	// (0x0005af48) cell_tport_appsw_pane_g

0x9d09,	// (0x0005502a) input_candi_list_open_g1

0xb505,	// (0x00056826) list_cale_time_pane_g6_ParamLimits

0xb505,	// (0x00056826) list_cale_time_pane_g6

0x3ef8,	// (0x0004f219) aid_size_touch_calib_1_ParamLimits

0x3ef8,	// (0x0004f219) aid_size_touch_calib_1

0x3f0a,	// (0x0004f22b) aid_size_touch_calib_2_ParamLimits

0x3f0a,	// (0x0004f22b) aid_size_touch_calib_2

0x3f22,	// (0x0004f243) aid_size_touch_calib_3_ParamLimits

0x3f22,	// (0x0004f243) aid_size_touch_calib_3

0x3f40,	// (0x0004f261) aid_size_touch_calib_4_ParamLimits

0x3f40,	// (0x0004f261) aid_size_touch_calib_4

0x3f58,	// (0x0004f279) main_touch_calib_button_group_pane_ParamLimits

0x3f58,	// (0x0004f279) main_touch_calib_button_group_pane

0x3f70,	// (0x0004f291) main_touch_calib_pane_g1_ParamLimits

0x3f82,	// (0x0004f2a3) main_touch_calib_pane_g2_ParamLimits

0x3f94,	// (0x0004f2b5) main_touch_calib_pane_g3_ParamLimits

0x3fa6,	// (0x0004f2c7) main_touch_calib_pane_g4_ParamLimits

0xf6ac,	// (0x0005a9cd) main_touch_calib_pane_g_ParamLimits

0x3fb8,	// (0x0004f2d9) main_touch_calib_pane_t1_ParamLimits

0x3fd2,	// (0x0004f2f3) main_touch_calib_pane_t2_ParamLimits

0x3fec,	// (0x0004f30d) main_touch_calib_pane_t3_ParamLimits

0x4000,	// (0x0004f321) main_touch_calib_pane_t4_ParamLimits

0x4014,	// (0x0004f335) main_touch_calib_pane_t5_ParamLimits

0xf6b5,	// (0x0005a9d6) main_touch_calib_pane_t_ParamLimits

0xd624,	// (0x00058945) list_single_fp_cale_pane_g3_ParamLimits

0xd624,	// (0x00058945) list_single_fp_cale_pane_g3

0xa7ce,	// (0x00055aef) bg_button_pane_cp012_ParamLimits

0xa7ce,	// (0x00055aef) bg_vkb2_func_pane_cp03_ParamLimits

0x5deb,	// (0x0005110c) cell_vitu2_function_top_pane_g1_ParamLimits

0xa7ce,	// (0x00055aef) bg_vkb2_func_pane_cp04_ParamLimits

0x69e9,	// (0x00051d0a) main_ncimui_button_group_pane_ParamLimits

0x69e9,	// (0x00051d0a) main_ncimui_button_group_pane

0x6a49,	// (0x00051d6a) main_ncimui_pane_t3_ParamLimits

0x6a49,	// (0x00051d6a) main_ncimui_pane_t3

0xedd8,	// (0x0005a0f9) phacti_button_group_pane

0xefe1,	// (0x0005a302) aid_size_list_single_double_ParamLimits

0x76b8,	// (0x000529d9) popup_ezdial_listscroll_window_ParamLimits

0x76d4,	// (0x000529f5) popup_number_entry_window_cp01_ParamLimits

0x778d,	// (0x00052aae) phacti_button_pane_ParamLimits

0x778d,	// (0x00052aae) phacti_button_pane

0xa7c4,	// (0x00055ae5) bg_button_pane_cp14

0x779e,	// (0x00052abf) phacti_button_pane_t1

0x77ac,	// (0x00052acd) main_touch_calib_button_pane_ParamLimits

0x77ac,	// (0x00052acd) main_touch_calib_button_pane

0xaf37,	// (0x00056258) bg_button_pane_cp18_ParamLimits

0xaf37,	// (0x00056258) bg_button_pane_cp18

0x77c1,	// (0x00052ae2) main_touch_calib_button_pane_t1_ParamLimits

0x77c1,	// (0x00052ae2) main_touch_calib_button_pane_t1

0x77d7,	// (0x00052af8) main_touch_calib_button_pane_t2_ParamLimits

0x77d7,	// (0x00052af8) main_touch_calib_button_pane_t2

0x0001,

0xfcd7,	// (0x0005aff8) main_touch_calib_button_pane_t_ParamLimits

0xfcd7,	// (0x0005aff8) main_touch_calib_button_pane_t

0xa7c4,	// (0x00055ae5) cell_ncimui_button_pane

0xa7c4,	// (0x00055ae5) bg_button_pane_cp032

0x77f5,	// (0x00052b16) cell_ncimui_button_pane_t1

0xa17e,	// (0x0005549f) image3_infobar_pane_ParamLimits

0xa17e,	// (0x0005549f) image3_infobar_pane

0x6e5e,	// (0x0005217f) fs_bigclock_status_pane_ParamLimits

0x6e5e,	// (0x0005217f) fs_bigclock_status_pane

0x6e6b,	// (0x0005218c) main_fs_bigclock_clock_pane_ParamLimits

0x6e6b,	// (0x0005218c) main_fs_bigclock_clock_pane

0x6e89,	// (0x000521aa) main_fs_bigclock_indi_pane_ParamLimits

0x6e89,	// (0x000521aa) main_fs_bigclock_indi_pane

0x6ebb,	// (0x000521dc) main_fs_bigclock_swipe_pane_ParamLimits

0x6ebb,	// (0x000521dc) main_fs_bigclock_swipe_pane

0xa7c4,	// (0x00055ae5) main_fs_clock_dumped_data

0xe8ee,	// (0x00059c0f) list_single_fs_bigclock_indicator_pane_g1_ParamLimits

0xe8ee,	// (0x00059c0f) list_single_fs_bigclock_indicator_pane_g1

0xe90a,	// (0x00059c2b) list_single_fs_bigclock_indicator_pane_g2_ParamLimits

0xe90a,	// (0x00059c2b) list_single_fs_bigclock_indicator_pane_g2

0xe924,	// (0x00059c45) list_single_fs_bigclock_indicator_pane_g3_ParamLimits

0xe924,	// (0x00059c45) list_single_fs_bigclock_indicator_pane_g3

0xe93e,	// (0x00059c5f) list_single_fs_bigclock_indicator_pane_g4_ParamLimits

0xe93e,	// (0x00059c5f) list_single_fs_bigclock_indicator_pane_g4

0x0004,

0xfb8d,	// (0x0005aeae) list_single_fs_bigclock_indicator_pane_g_ParamLimits

0xfb8d,	// (0x0005aeae) list_single_fs_bigclock_indicator_pane_g

0xe969,	// (0x00059c8a) list_single_fs_bigclock_indicator_pane_t1_ParamLimits

0xe969,	// (0x00059c8a) list_single_fs_bigclock_indicator_pane_t1

0xe991,	// (0x00059cb2) list_single_fs_bigclock_indicator_pane_t2_ParamLimits

0xe991,	// (0x00059cb2) list_single_fs_bigclock_indicator_pane_t2

0xe9b9,	// (0x00059cda) list_single_fs_bigclock_indicator_pane_t3_ParamLimits

0xe9b9,	// (0x00059cda) list_single_fs_bigclock_indicator_pane_t3

0xe9e1,	// (0x00059d02) list_single_fs_bigclock_indicator_pane_t4_ParamLimits

0xe9e1,	// (0x00059d02) list_single_fs_bigclock_indicator_pane_t4

0x0004,

0xfb98,	// (0x0005aeb9) list_single_fs_bigclock_indicator_pane_t_ParamLimits

0xfb98,	// (0x0005aeb9) list_single_fs_bigclock_indicator_pane_t

0x7803,	// (0x00052b24) image3_infobar_fav_pane_ParamLimits

0x7803,	// (0x00052b24) image3_infobar_fav_pane

0x7813,	// (0x00052b34) image3_infobar_loc_pane_ParamLimits

0x7813,	// (0x00052b34) image3_infobar_loc_pane

0x7827,	// (0x00052b48) image3_infobar_time_pane_ParamLimits

0x7827,	// (0x00052b48) image3_infobar_time_pane

0xb131,	// (0x00056452) image3_infobar_time_pane_g1

0x7837,	// (0x00052b58) image3_infobar_time_pane_t1

0xb131,	// (0x00056452) image3_infobar_loc_pane_g1

0x7845,	// (0x00052b66) image3_infobar_loc_pane_g2

0x0001,

0xfcdc,	// (0x0005affd) image3_infobar_loc_pane_g

0x784d,	// (0x00052b6e) image3_infobar_loc_pane_t1

0xb131,	// (0x00056452) image3_infobar_fav_pane_g1

0x785b,	// (0x00052b7c) image3_infobar_fav_pane_g2

0x0001,

0xfce1,	// (0x0005b002) image3_infobar_fav_pane_g

0x7863,	// (0x00052b84) fs_bigclock_status_battery_pane

0x786c,	// (0x00052b8d) fs_bigclock_status_signal_pane

0x7875,	// (0x00052b96) fs_bigclock_status_title_pane

0x787e,	// (0x00052b9f) fs_bigclock_status_signal_pane_g1

0x7887,	// (0x00052ba8) fs_bigclock_status_signal_pane_g2

0x0001,

0xfce6,	// (0x0005b007) fs_bigclock_status_signal_pane_g

0x788f,	// (0x00052bb0) fs_bigclock_status_battery_pane_g1

0x7898,	// (0x00052bb9) fs_bigclock_status_battery_pane_g2

0x0001,

0xfceb,	// (0x0005b00c) fs_bigclock_status_battery_pane_g

0x78a0,	// (0x00052bc1) fs_bigclock_status_title_pane_t1

0x78ae,	// (0x00052bcf) main_fs_bigclock_clock_pane_g1

0x78ae,	// (0x00052bcf) main_fs_bigclock_clock_pane_g2

0x78bf,	// (0x00052be0) main_fs_bigclock_clock_pane_g3

0x78bf,	// (0x00052be0) main_fs_bigclock_clock_pane_g4

0x0003,

0xfcf0,	// (0x0005b011) main_fs_bigclock_clock_pane_g

0x78d2,	// (0x00052bf3) main_fs_bigclock_clock_pane_t1

0x78e8,	// (0x00052c09) main_fs_bigclock_clock_pane_t2

0x0001,

0xfcf9,	// (0x0005b01a) main_fs_bigclock_clock_pane_t

0x78fe,	// (0x00052c1f) list_single_fs_bigclock_indicator_pane_ParamLimits

0x78fe,	// (0x00052c1f) list_single_fs_bigclock_indicator_pane

0x790f,	// (0x00052c30) list_single_fs_bigclock_pane_ParamLimits

0x790f,	// (0x00052c30) list_single_fs_bigclock_pane

0x7979,	// (0x00052c9a) main_fs_bigclock_indicator_pane_t1

0x7988,	// (0x00052ca9) list_single_fs_bigclock_pane_g1

0x7990,	// (0x00052cb1) list_single_fs_bigclock_pane_t1

0xb131,	// (0x00056452) main_fs_bigclock_swipe_pane_g1

0x79d3,	// (0x00052cf4) main_fs_bigclock_swipe_pane_g2

0x0001,

0xfd0a,	// (0x0005b02b) main_fs_bigclock_swipe_pane_g

0x79db,	// (0x00052cfc) main_fs_bigclock_swipe_pane_t1_ParamLimits

0x79db,	// (0x00052cfc) main_fs_bigclock_swipe_pane_t1

0x2a49,	// (0x0004dd6a) call_type_pane_ParamLimits

0xa7c4,	// (0x00055ae5) main_btmg_pane

0xa644,	// (0x00055965) list_single_cale_mrui_row_pane_g2_ParamLimits

0xa644,	// (0x00055965) list_single_cale_mrui_row_pane_g2

0x0002,

0xfc86,	// (0x0005afa7) list_single_cale_mrui_row_pane_g_ParamLimits

0xfc86,	// (0x0005afa7) list_single_cale_mrui_row_pane_g

0xa6ca,	// (0x000559eb) list_recal_vselct_arw_lo_pane

0xf031,	// (0x0005a352) list_recal_vselct_arw_up_pane

0xa6d2,	// (0x000559f3) list_recal_vselct_pane

0x79f8,	// (0x00052d19) btmg_button_pane

0x7a02,	// (0x00052d23) main_btmg_pane_g1

0xa7c4,	// (0x00055ae5) bg_button_pane_cp044

0x7a0c,	// (0x00052d2d) btmg_button_pane_t1

0xceb9,	// (0x000581da) aid_listscroll_gen

0xa7ce,	// (0x00055aef) main_cntbar_detail_pane

0xed15,	// (0x0005a036) list_cmail_folder_pane

0xdc6f,	// (0x00058f90) sp_fs_scroll_pane_cp03_ParamLimits

0x73ed,	// (0x0005270e) list_single_fs_dyc_pane_cp01_ParamLimits

0x73ed,	// (0x0005270e) list_single_fs_dyc_pane_cp01

0x7a1a,	// (0x00052d3b) aid_size_cmail_indent

0xa749,	// (0x00055a6a) list_single_dyc_row_pane_cp01

0x7a55,	// (0x00052d76) cntbar_detail_list_pane_ParamLimits

0x7a55,	// (0x00052d76) cntbar_detail_list_pane

0x7aa1,	// (0x00052dc2) main_cntbar_detail_cont_pane_ParamLimits

0x7aa1,	// (0x00052dc2) main_cntbar_detail_cont_pane

0xdc6f,	// (0x00058f90) scroll_pane_cp032_ParamLimits

0xdc6f,	// (0x00058f90) scroll_pane_cp032

0x7ab5,	// (0x00052dd6) cntbar_detail_list_event_pane_ParamLimits

0x7ab5,	// (0x00052dd6) cntbar_detail_list_event_pane

0x7a65,	// (0x00052d86) cntbar_detail_list_shct_pane

0xb390,	// (0x000566b1) aid_list_gen

0x7ac5,	// (0x00052de6) aid_scroll

0x7ace,	// (0x00052def) aid_size_touch_scroll_bar

0xb068,	// (0x00056389) aid_list_double

0x7ad7,	// (0x00052df8) aid_list_single

0x7ad7,	// (0x00052df8) aid_list_single_lg

0xa752,	// (0x00055a73) aid_list_z_g_a_sm

0xa75a,	// (0x00055a7b) aid_list_z_g_d

0xa762,	// (0x00055a83) aid_txt_z_prm

0xa770,	// (0x00055a91) aid_txt_z_prm_cp01

0xa77e,	// (0x00055a9f) aid_txt_z_sec

0x7ae0,	// (0x00052e01) main_cntbar_detail_cont_pane_g1_ParamLimits

0x7ae0,	// (0x00052e01) main_cntbar_detail_cont_pane_g1

0x7af4,	// (0x00052e15) main_cntbar_detail_cont_pane_g2_ParamLimits

0x7af4,	// (0x00052e15) main_cntbar_detail_cont_pane_g2

0x0001,

0xfd0f,	// (0x0005b030) main_cntbar_detail_cont_pane_g_ParamLimits

0xfd0f,	// (0x0005b030) main_cntbar_detail_cont_pane_g

0x7b04,	// (0x00052e25) main_cntbar_detail_cont_pane_t1

0x7b12,	// (0x00052e33) main_cntbar_detail_cont_pane_t2

0x7b20,	// (0x00052e41) main_cntbar_detail_cont_pane_t3

0x0002,

0xfd14,	// (0x0005b035) main_cntbar_detail_cont_pane_t

0x7b2e,	// (0x00052e4f) cell_cntbar_detail_list_shct_pane_ParamLimits

0x7b2e,	// (0x00052e4f) cell_cntbar_detail_list_shct_pane

0x7b42,	// (0x00052e63) cntbar_detail_list_shct_pane_g1

0x7b4b,	// (0x00052e6c) cntbar_detail_list_shct_pane_g2

0x0001,

0xfd1b,	// (0x0005b03c) cntbar_detail_list_shct_pane_g

0x7b54,	// (0x00052e75) cntbar_detail_list_event_pane_g1_ParamLimits

0x7b54,	// (0x00052e75) cntbar_detail_list_event_pane_g1

0x7b60,	// (0x00052e81) cntbar_detail_list_event_pane_g2_ParamLimits

0x7b60,	// (0x00052e81) cntbar_detail_list_event_pane_g2

0x0005,

0xfd20,	// (0x0005b041) cntbar_detail_list_event_pane_g_ParamLimits

0xfd20,	// (0x0005b041) cntbar_detail_list_event_pane_g

0x7bcc,	// (0x00052eed) cntbar_detail_list_event_pane_t1_ParamLimits

0x7bcc,	// (0x00052eed) cntbar_detail_list_event_pane_t1

0x7be1,	// (0x00052f02) cntbar_detail_list_event_pane_t2_ParamLimits

0x7be1,	// (0x00052f02) cntbar_detail_list_event_pane_t2

0x0002,

0xfd2d,	// (0x0005b04e) cntbar_detail_list_event_pane_t_ParamLimits

0xfd2d,	// (0x0005b04e) cntbar_detail_list_event_pane_t

0xb131,	// (0x00056452) cell_cntbar_detail_list_shct_pane_g1

0xbaf4,	// (0x00056e15) navi_pane_mv_g3

0xa7ce,	// (0x00055aef) main_cntbar_detail_pane_ParamLimits

0xa7c4,	// (0x00055ae5) main_notif_wgt_pane

0x9f6a,	// (0x0005528b) aid_tch_main_mp4_pane_g4

0xa176,	// (0x00055497) popup_slider_window_cp02

0xa6c0,	// (0x000559e1) list_recal_day_event_pane

0x7a23,	// (0x00052d44) cntbar_detail_btn_pane_ParamLimits

0x7a23,	// (0x00052d44) cntbar_detail_btn_pane

0x7a3c,	// (0x00052d5d) cntbar_detail_btn_pane_cp01_ParamLimits

0x7a3c,	// (0x00052d5d) cntbar_detail_btn_pane_cp01

0x7a65,	// (0x00052d86) cntbar_detail_list_shct_pane_ParamLimits

0x7a75,	// (0x00052d96) cntbar_detail_pane_g1_ParamLimits

0x7a75,	// (0x00052d96) cntbar_detail_pane_g1

0x7a85,	// (0x00052da6) cntbar_detail_pane_t1_ParamLimits

0x7a85,	// (0x00052da6) cntbar_detail_pane_t1

0x7b6c,	// (0x00052e8d) cntbar_detail_list_event_pane_g3_ParamLimits

0x7b6c,	// (0x00052e8d) cntbar_detail_list_event_pane_g3

0x7b84,	// (0x00052ea5) cntbar_detail_list_event_pane_g4_ParamLimits

0x7b84,	// (0x00052ea5) cntbar_detail_list_event_pane_g4

0x7b9c,	// (0x00052ebd) cntbar_detail_list_event_pane_g5_ParamLimits

0x7b9c,	// (0x00052ebd) cntbar_detail_list_event_pane_g5

0x7bb4,	// (0x00052ed5) cntbar_detail_list_event_pane_g6_ParamLimits

0x7bb4,	// (0x00052ed5) cntbar_detail_list_event_pane_g6

0x7bf6,	// (0x00052f17) cntbar_detail_list_event_pane_t3_ParamLimits

0x7bf6,	// (0x00052f17) cntbar_detail_list_event_pane_t3

0x7c08,	// (0x00052f29) popup_notif_wgt_window_ParamLimits

0x7c08,	// (0x00052f29) popup_notif_wgt_window

0x7c21,	// (0x00052f42) popup_submenu_window_cp01_ParamLimits

0x7c21,	// (0x00052f42) popup_submenu_window_cp01

0xb0fb,	// (0x0005641c) bg_popup_window_pane_cp10

0x7c33,	// (0x00052f54) listscroll_notif_wgt_pane

0x7c45,	// (0x00052f66) list_notif_wgt_window

0x7c4e,	// (0x00052f6f) scroll_pane_cp033

0x7c57,	// (0x00052f78) list_notif_wgt_row_pane_ParamLimits

0x7c57,	// (0x00052f78) list_notif_wgt_row_pane

0x7c67,	// (0x00052f88) aid_size_list_notif_wgt_del

0x7c74,	// (0x00052f95) list_notif_wgt_row_pane_g1

0x7c80,	// (0x00052fa1) list_notif_wgt_row_pane_g2

0x7c8f,	// (0x00052fb0) list_notif_wgt_row_pane_g3

0x0002,

0xfd34,	// (0x0005b055) list_notif_wgt_row_pane_g

0x7c9c,	// (0x00052fbd) list_notif_wgt_row_pane_t1

0x7cb2,	// (0x00052fd3) list_notif_wgt_row_pane_t2

0x7cc4,	// (0x00052fe5) list_notif_wgt_row_pane_t3

0x0002,

0xfd3b,	// (0x0005b05c) list_notif_wgt_row_pane_t

0xde05,	// (0x00059126) list_recal_day_event_pane_g1

0x7cd6,	// (0x00052ff7) list_recal_day_event_pane_t1

0xa7c4,	// (0x00055ae5) bg_button_pane_cp045

0x7ce5,	// (0x00053006) cntbar_detail_btn_pane_t1

0xbc15,	// (0x00056f36) main_callh_pane_ParamLimits

0xbc15,	// (0x00056f36) main_callh_pane

0xa7c4,	// (0x00055ae5) main_coverflow0_pane

0xa7c4,	// (0x00055ae5) main_wgtman_pane

0x6ed3,	// (0x000521f4) main_fs_bigclock_unlock_btn_pane_ParamLimits

0x6ed3,	// (0x000521f4) main_fs_bigclock_unlock_btn_pane

0x7368,	// (0x00052689) bg_button_pane_cp16

0x7378,	// (0x00052699) cell_tport_appsw_pane_g3

0x7cf3,	// (0x00053014) cf0_flow_pane_ParamLimits

0x7cf3,	// (0x00053014) cf0_flow_pane

0x7d08,	// (0x00053029) listscroll_cf0_pane

0x7d13,	// (0x00053034) main_cf0_pane_g1

0x7d25,	// (0x00053046) main_cf0_pane_t1_ParamLimits

0x7d25,	// (0x00053046) main_cf0_pane_t1

0x7d3c,	// (0x0005305d) main_cf0_pane_t2_ParamLimits

0x7d3c,	// (0x0005305d) main_cf0_pane_t2

0x0001,

0xfd47,	// (0x0005b068) main_cf0_pane_t_ParamLimits

0xfd47,	// (0x0005b068) main_cf0_pane_t

0x7d53,	// (0x00053074) scroll_pane_cp11

0x7d5e,	// (0x0005307f) cf0_flow_pane_g1

0x7d66,	// (0x00053087) cf0_flow_pane_g2

0x0001,

0xfd4c,	// (0x0005b06d) cf0_flow_pane_g

0x7d6e,	// (0x0005308f) cf0_flow_pane_t1

0xa7c4,	// (0x00055ae5) main_call6_pane

0xa7c4,	// (0x00055ae5) main_calllock_pane

0x7d7c,	// (0x0005309d) call6_btn_grp_pane_ParamLimits

0x7d7c,	// (0x0005309d) call6_btn_grp_pane

0x7d96,	// (0x000530b7) call6_pane_g1_ParamLimits

0x7d96,	// (0x000530b7) call6_pane_g1

0x7dac,	// (0x000530cd) popup_call6_1st_window_ParamLimits

0x7dac,	// (0x000530cd) popup_call6_1st_window

0x7dbd,	// (0x000530de) popup_call6_2nd_window_ParamLimits

0x7dbd,	// (0x000530de) popup_call6_2nd_window

0x7dce,	// (0x000530ef) cell_call6_btn_pane_ParamLimits

0x7dce,	// (0x000530ef) cell_call6_btn_pane

0xb0fb,	// (0x0005641c) bg_popup_call2_in_pane_cp03

0x7de2,	// (0x00053103) popup_call6_1st_window_g1

0x7dea,	// (0x0005310b) popup_call6_1st_window_g2

0x7df2,	// (0x00053113) popup_call6_1st_window_g3

0x0002,

0xfd51,	// (0x0005b072) popup_call6_1st_window_g

0x7dfa,	// (0x0005311b) popup_call6_1st_window_t1

0x7e09,	// (0x0005312a) popup_call6_1st_window_t2

0x7e17,	// (0x00053138) popup_call6_1st_window_t3

0x0002,

0xfd58,	// (0x0005b079) popup_call6_1st_window_t

0xb0fb,	// (0x0005641c) bg_popup_call2_in_pane_cp04

0x7e25,	// (0x00053146) popup_call6_2nd_window_g1

0x7e2d,	// (0x0005314e) popup_call6_2nd_window_g2

0x7e35,	// (0x00053156) popup_call6_2nd_window_g3

0x0002,

0xfd5f,	// (0x0005b080) popup_call6_2nd_window_g

0x7e3d,	// (0x0005315e) popup_call6_2nd_window_t1

0xa7c4,	// (0x00055ae5) bg_button_pane_cp15

0x7e4c,	// (0x0005316d) cell_call6_btn_pane_g1

0x7e55,	// (0x00053176) cell_call6_btn_pane_t1

0x7e64,	// (0x00053185) listscroll_wgtman_pane_ParamLimits

0x7e64,	// (0x00053185) listscroll_wgtman_pane

0x7e85,	// (0x000531a6) wgtman_btn_pane_ParamLimits

0x7e85,	// (0x000531a6) wgtman_btn_pane

0xb8f4,	// (0x00056c15) aid_scroll_copy1

0x7ec8,	// (0x000531e9) list_wgtman_pane

0x7ed2,	// (0x000531f3) wgtman_btn_pane_g1_ParamLimits

0x7ed2,	// (0x000531f3) wgtman_btn_pane_g1

0x7efe,	// (0x0005321f) wgtman_btn_pane_t1_ParamLimits

0x7efe,	// (0x0005321f) wgtman_btn_pane_t1

0x7f3b,	// (0x0005325c) wgtman_btn_pane_t2_ParamLimits

0x7f3b,	// (0x0005325c) wgtman_btn_pane_t2

0x0001,

0xfd66,	// (0x0005b087) wgtman_btn_pane_t_ParamLimits

0xfd66,	// (0x0005b087) wgtman_btn_pane_t

0x7f52,	// (0x00053273) listrow_wgtman_pane_ParamLimits

0x7f52,	// (0x00053273) listrow_wgtman_pane

0x7f65,	// (0x00053286) listrow_wgtman_pane_g1

0x7f72,	// (0x00053293) listrow_wgtman_pane_g2

0x0001,

0xfd6b,	// (0x0005b08c) listrow_wgtman_pane_g

0x0d63,	// (0x0004c084) listrow_wgtman_pane_t1

0x0d7b,	// (0x0004c09c) listrow_wgtman_pane_t2

0x0001,

0xfd70,	// (0x0005b091) listrow_wgtman_pane_t

0x0da1,	// (0x0004c0c2) wait_bar_pane_cp09

0x7f90,	// (0x000532b1) main_calllock_btn_pane

0x7f9a,	// (0x000532bb) main_calllock_pane_g1

0xa7c4,	// (0x00055ae5) bg_button_pane_cp17

0x7e4c,	// (0x0005316d) main_calllock_btn_pane_g1

0x7fa2,	// (0x000532c3) main_calllock_btn_pane_t1

0xa7c4,	// (0x00055ae5) main_dialer3_pane

0xa7c4,	// (0x00055ae5) main_fmrd2_pane

0xb131,	// (0x00056452) main_fs_bigclock_unlock_btn_pane_g1

0x7fb9,	// (0x000532da) main_fs_bigclock_unlock_btn_pane_t1

0x7fc7,	// (0x000532e8) area_fmrd2_info_pane_ParamLimits

0x7fc7,	// (0x000532e8) area_fmrd2_info_pane

0x7fd8,	// (0x000532f9) area_fmrd2_visual_pane_ParamLimits

0x7fd8,	// (0x000532f9) area_fmrd2_visual_pane

0x7fe6,	// (0x00053307) fmrd2_indi_pane_ParamLimits

0x7fe6,	// (0x00053307) fmrd2_indi_pane

0x7ff3,	// (0x00053314) area_fmrd2_visual_pane_g1

0x7ffb,	// (0x0005331c) area_fmrd2_visual_pane_t1

0x800b,	// (0x0005332c) area_fmrd2_visual_pane_t2

0x801b,	// (0x0005333c) area_fmrd2_visual_pane_t3

0x0002,

0xfd7a,	// (0x0005b09b) area_fmrd2_visual_pane_t

0x802b,	// (0x0005334c) area_fmrd2_info_pane_g1

0x8033,	// (0x00053354) area_fmrd2_info_pane_t1

0x8043,	// (0x00053364) area_fmrd2_info_pane_t2

0x8053,	// (0x00053374) area_fmrd2_info_pane_t3

0x8063,	// (0x00053384) area_fmrd2_info_pane_t4

0x0003,

0xfd81,	// (0x0005b0a2) area_fmrd2_info_pane_t

0x8071,	// (0x00053392) fmrd2_indi_pane_t1

0x8081,	// (0x000533a2) fmrd2_indi_pane_t2

0x8091,	// (0x000533b2) fmrd2_indi_pane_t3

0x0002,

0xfd8a,	// (0x0005b0ab) fmrd2_indi_pane_t

0xe94d,	// (0x00059c6e) list_single_fs_bigclock_indicator_pane_g5_ParamLimits

0xe94d,	// (0x00059c6e) list_single_fs_bigclock_indicator_pane_g5

0xe9fe,	// (0x00059d1f) list_single_fs_bigclock_indicator_pane_t5_ParamLimits

0xe9fe,	// (0x00059d1f) list_single_fs_bigclock_indicator_pane_t5

0x74f2,	// (0x00052813) aid_cell_bcale_month_pane_ParamLimits

0x74f2,	// (0x00052813) aid_cell_bcale_month_pane

0x7510,	// (0x00052831) bcale_month_pane_ParamLimits

0x7510,	// (0x00052831) bcale_month_pane

0x7534,	// (0x00052855) bcale_preview_pane_ParamLimits

0x7534,	// (0x00052855) bcale_preview_pane

0x7990,	// (0x00052cb1) list_single_fs_bigclock_pane_t1_ParamLimits

0x79af,	// (0x00052cd0) list_single_fs_bigclock_pane_t2_ParamLimits

0x79af,	// (0x00052cd0) list_single_fs_bigclock_pane_t2

0x0001,

0xfd05,	// (0x0005b026) list_single_fs_bigclock_pane_t_ParamLimits

0xfd05,	// (0x0005b026) list_single_fs_bigclock_pane_t

0x7fb1,	// (0x000532d2) main_fs_bigclock_unlock_btn_pane_g2

0x0001,

0xfd75,	// (0x0005b096) main_fs_bigclock_unlock_btn_pane_g

0x80a1,	// (0x000533c2) aid_dia3_key_size_ParamLimits

0x80a1,	// (0x000533c2) aid_dia3_key_size

0x80b0,	// (0x000533d1) aid_dia3_listrow_size_ParamLimits

0x80b0,	// (0x000533d1) aid_dia3_listrow_size

0x80c5,	// (0x000533e6) dia3_keypad_fun_pane_ParamLimits

0x80c5,	// (0x000533e6) dia3_keypad_fun_pane

0x80e1,	// (0x00053402) dia3_keypad_num_pane_ParamLimits

0x80e1,	// (0x00053402) dia3_keypad_num_pane

0x80fc,	// (0x0005341d) dia3_listscroll_pane_ParamLimits

0x80fc,	// (0x0005341d) dia3_listscroll_pane

0x810f,	// (0x00053430) dia3_numentry_pane_ParamLimits

0x810f,	// (0x00053430) dia3_numentry_pane

0x8127,	// (0x00053448) dia3_list_pane

0x8132,	// (0x00053453) scroll_pane_cp12

0xa7c4,	// (0x00055ae5) bg_dia3_numentry_pane

0x813d,	// (0x0005345e) dia3_numentry_pane_t1

0x814c,	// (0x0005346d) cell_dia3_key_num_pane

0x8154,	// (0x00053475) cell_dia3_key0_fun_pane_ParamLimits

0x8154,	// (0x00053475) cell_dia3_key0_fun_pane

0x8168,	// (0x00053489) cell_dia3_key1_fun_pane_ParamLimits

0x8168,	// (0x00053489) cell_dia3_key1_fun_pane

0x8180,	// (0x000534a1) dia3_listrow_pane

0xe6a0,	// (0x000599c1) bg_dia3_numentry_pane_g1

0xa7c4,	// (0x00055ae5) bg_button_pane_cp21

0x8192,	// (0x000534b3) cell_dia3_key_num_pane_t1

0x81a0,	// (0x000534c1) cell_dia3_key_num_pane_t2

0x81af,	// (0x000534d0) cell_dia3_key_num_pane_t3

0x81be,	// (0x000534df) cell_dia3_key_num_pane_t4

0x0003,

0xfd91,	// (0x0005b0b2) cell_dia3_key_num_pane_t

0xa7c4,	// (0x00055ae5) bg_button_pane_cp19

0x81cd,	// (0x000534ee) cell_dia3_key0_fun_pane_g1

0xa7c4,	// (0x00055ae5) bg_button_pane_cp20

0x81d5,	// (0x000534f6) cell_dia3_key1_fun_pane_g1

0x81dd,	// (0x000534fe) area_left_week_number_pane

0x81e9,	// (0x0005350a) area_top_day_name_pane

0x81fc,	// (0x0005351d) frame_month_view_pane

0x820f,	// (0x00053530) grid_month_view_pane

0x821d,	// (0x0005353e) cell_top_day_name_pane_ParamLimits

0x821d,	// (0x0005353e) cell_top_day_name_pane

0x824a,	// (0x0005356b) cell_area_left_week_number_pane_ParamLimits

0x824a,	// (0x0005356b) cell_area_left_week_number_pane

0x825e,	// (0x0005357f) cell_month_view_pane_ParamLimits

0x825e,	// (0x0005357f) cell_month_view_pane

0x828b,	// (0x000535ac) frm_month_g1

0x8298,	// (0x000535b9) frm_month_g2

0x82ab,	// (0x000535cc) frm_month_g3

0x82be,	// (0x000535df) frm_month_g4

0x82d1,	// (0x000535f2) frm_month_g5

0x82e4,	// (0x00053605) frm_month_g6

0x82f7,	// (0x00053618) frm_month_g7

0x830a,	// (0x0005362b) frm_month_g8

0x8317,	// (0x00053638) frm_month_g9

0x8327,	// (0x00053648) frm_month_g10

0x8337,	// (0x00053658) frm_month_g11

0x8347,	// (0x00053668) frm_month_g12

0x8359,	// (0x0005367a) frm_month_g13

0x836b,	// (0x0005368c) frm_month_g14

0x837f,	// (0x000536a0) frm_month_g15

0x8393,	// (0x000536b4) frm_month_g16

0x000f,

0xfd9a,	// (0x0005b0bb) frm_month_g

0x83a7,	// (0x000536c8) cell_top_day_name_pane_t1

0x83ba,	// (0x000536db) cell_area_left_week_number_pane_g1

0x83c6,	// (0x000536e7) cell_area_left_week_number_pane_t1

0xaec5,	// (0x000561e6) cell_month_view_pane_g1

0x83d9,	// (0x000536fa) cell_month_view_pane_t1

0xa7c4,	// (0x00055ae5) main_fps_pane

0xec12,	// (0x00059f33) cmail_ddmenu_btn02_pane_cp1_ParamLimits

0xec12,	// (0x00059f33) cmail_ddmenu_btn02_pane_cp1

0xec2e,	// (0x00059f4f) cmail_ddmenu_btn02_pane_cp2_ParamLimits

0xec2e,	// (0x00059f4f) cmail_ddmenu_btn02_pane_cp2

0x7706,	// (0x00052a27) cmail_ddmenu_btn02_pane_g2_ParamLimits

0x7706,	// (0x00052a27) cmail_ddmenu_btn02_pane_g2

0x0001,

0xfcb8,	// (0x0005afd9) cmail_ddmenu_btn02_pane_g_ParamLimits

0xfcb8,	// (0x0005afd9) cmail_ddmenu_btn02_pane_g

0x7724,	// (0x00052a45) cmail_ddmenu_btn02_pane_t2_ParamLimits

0x7724,	// (0x00052a45) cmail_ddmenu_btn02_pane_t2

0x0001,

0xfcbd,	// (0x0005afde) cmail_ddmenu_btn02_pane_t_ParamLimits

0xfcbd,	// (0x0005afde) cmail_ddmenu_btn02_pane_t

0x83ec,	// (0x0005370d) fps_text_pane_ParamLimits

0x83ec,	// (0x0005370d) fps_text_pane

0x8403,	// (0x00053724) main_fps_pane_g1_ParamLimits

0x8403,	// (0x00053724) main_fps_pane_g1

0x841d,	// (0x0005373e) wait_bar_pane_cp010_ParamLimits

0x841d,	// (0x0005373e) wait_bar_pane_cp010

0x842e,	// (0x0005374f) fps_text_pane_t1_ParamLimits

0x842e,	// (0x0005374f) fps_text_pane_t1

0xede1,	// (0x0005a102) cam4_image_uncrop_pane_g1

0xedea,	// (0x0005a10b) cam4_image_uncrop_pane_g2

0x537b,	// (0x0005069c) cam4_image_uncrop_pane_g3

0x5384,	// (0x000506a5) cam4_image_uncrop_pane_g4

0x0003,

0xf848,	// (0x0005ab69) cam4_image_uncrop_pane_g

0x8180,	// (0x000534a1) dia3_listrow_pane_ParamLimits

0xa7c4,	// (0x00055ae5) main_phob2_pane

0x7339,	// (0x0005265a) cell_tport_appsw_pane_cp02_ParamLimits

0x7339,	// (0x0005265a) cell_tport_appsw_pane_cp02

0x734d,	// (0x0005266e) cell_tport_appsw_pane_cp03_ParamLimits

0x734d,	// (0x0005266e) cell_tport_appsw_pane_cp03

0xa7c4,	// (0x00055ae5) phob2_contact_card_pane

0xa7c4,	// (0x00055ae5) phob2_listscroll_pane

0x8446,	// (0x00053767) phob2_list_pane

0x844e,	// (0x0005376f) scroll_pane_cp034

0x8456,	// (0x00053777) phob2_cc_data_pane_ParamLimits

0x8456,	// (0x00053777) phob2_cc_data_pane

0x8475,	// (0x00053796) phob2_cc_listscroll_pane_ParamLimits

0x8475,	// (0x00053796) phob2_cc_listscroll_pane

0x7f52,	// (0x00053273) list_double_large_graphic_phob2_pane_ParamLimits

0x7f52,	// (0x00053273) list_double_large_graphic_phob2_pane

0x8493,	// (0x000537b4) list_double_large_graphic_phob2_pane_g1_ParamLimits

0x8493,	// (0x000537b4) list_double_large_graphic_phob2_pane_g1

0x0db3,	// (0x0004c0d4) list_double_large_graphic_phob2_pane_g2_ParamLimits

0x0db3,	// (0x0004c0d4) list_double_large_graphic_phob2_pane_g2

0x0003,

0xfdbb,	// (0x0005b0dc) list_double_large_graphic_phob2_pane_g_ParamLimits

0xfdbb,	// (0x0005b0dc) list_double_large_graphic_phob2_pane_g

0x0dd9,	// (0x0004c0fa) list_double_large_graphic_phob2_pane_t1_ParamLimits

0x0dd9,	// (0x0004c0fa) list_double_large_graphic_phob2_pane_t1

0x0dee,	// (0x0004c10f) list_double_large_graphic_phob2_pane_t2_ParamLimits

0x0dee,	// (0x0004c10f) list_double_large_graphic_phob2_pane_t2

0x0001,

0xfdc4,	// (0x0005b0e5) list_double_large_graphic_phob2_pane_t_ParamLimits

0xfdc4,	// (0x0005b0e5) list_double_large_graphic_phob2_pane_t

0xa7c4,	// (0x00055ae5) list_highlight_pane_cp024

0x84a0,	// (0x000537c1) phob2_cc_button_pane

0x84a8,	// (0x000537c9) phob2_cc_data_pane_g1_ParamLimits

0x84a8,	// (0x000537c9) phob2_cc_data_pane_g1

0x84bf,	// (0x000537e0) phob2_cc_data_pane_g2_ParamLimits

0x84bf,	// (0x000537e0) phob2_cc_data_pane_g2

0x0001,

0xfdc9,	// (0x0005b0ea) phob2_cc_data_pane_g_ParamLimits

0xfdc9,	// (0x0005b0ea) phob2_cc_data_pane_g

0x84d1,	// (0x000537f2) phob2_cc_data_pane_t1_ParamLimits

0x84d1,	// (0x000537f2) phob2_cc_data_pane_t1

0x84e9,	// (0x0005380a) phob2_cc_data_pane_t2_ParamLimits

0x84e9,	// (0x0005380a) phob2_cc_data_pane_t2

0x8501,	// (0x00053822) phob2_cc_data_pane_t3_ParamLimits

0x8501,	// (0x00053822) phob2_cc_data_pane_t3

0x0002,

0xfdce,	// (0x0005b0ef) phob2_cc_data_pane_t_ParamLimits

0xfdce,	// (0x0005b0ef) phob2_cc_data_pane_t

0x8519,	// (0x0005383a) phob2_cc_list_pane_ParamLimits

0x8519,	// (0x0005383a) phob2_cc_list_pane

0xdeae,	// (0x000591cf) scroll_pane_cp035_ParamLimits

0xdeae,	// (0x000591cf) scroll_pane_cp035

0xa7ce,	// (0x00055aef) bg_button_pane_cp033

0x8525,	// (0x00053846) phob2_cc_button_pane_g1

0x8531,	// (0x00053852) phob2_cc_button_pane_t1

0x8546,	// (0x00053867) phob2_cc_button_pane_t2

0x0001,

0xfdd5,	// (0x0005b0f6) phob2_cc_button_pane_t

0x8558,	// (0x00053879) list_double_large_graphic_phob2_cc_pane_ParamLimits

0x8558,	// (0x00053879) list_double_large_graphic_phob2_cc_pane

0x858a,	// (0x000538ab) list_double_large_graphic_phob2_cc_pane_g1_ParamLimits

0x858a,	// (0x000538ab) list_double_large_graphic_phob2_cc_pane_g1

0x0e03,	// (0x0004c124) list_double_large_graphic_phob2_cc_pane_g2_ParamLimits

0x0e03,	// (0x0004c124) list_double_large_graphic_phob2_cc_pane_g2

0x0e0f,	// (0x0004c130) list_double_large_graphic_phob2_cc_pane_g3_ParamLimits

0x0e0f,	// (0x0004c130) list_double_large_graphic_phob2_cc_pane_g3

0x0e1b,	// (0x0004c13c) list_double_large_graphic_phob2_cc_pane_g4_ParamLimits

0x0e1b,	// (0x0004c13c) list_double_large_graphic_phob2_cc_pane_g4

0x0e27,	// (0x0004c148) list_double_large_graphic_phob2_cc_pane_g5_ParamLimits

0x0e27,	// (0x0004c148) list_double_large_graphic_phob2_cc_pane_g5

0x0004,

0xfdda,	// (0x0005b0fb) list_double_large_graphic_phob2_cc_pane_g_ParamLimits

0xfdda,	// (0x0005b0fb) list_double_large_graphic_phob2_cc_pane_g

0x0e33,	// (0x0004c154) list_double_large_graphic_phob2_cc_pane_t1_ParamLimits

0x0e33,	// (0x0004c154) list_double_large_graphic_phob2_cc_pane_t1

0x0e5c,	// (0x0004c17d) list_double_large_graphic_phob2_cc_pane_t2_ParamLimits

0x0e5c,	// (0x0004c17d) list_double_large_graphic_phob2_cc_pane_t2

0x0001,

0xfde5,	// (0x0005b106) list_double_large_graphic_phob2_cc_pane_t_ParamLimits

0xfde5,	// (0x0005b106) list_double_large_graphic_phob2_cc_pane_t

0x8596,	// (0x000538b7) list_highlight_pane_cp025_ParamLimits

0x8596,	// (0x000538b7) list_highlight_pane_cp025

0xa7ce,	// (0x00055aef) bg_button_pane_cp033_ParamLimits

0x8525,	// (0x00053846) phob2_cc_button_pane_g1_ParamLimits

0x8531,	// (0x00053852) phob2_cc_button_pane_t1_ParamLimits

0x8546,	// (0x00053867) phob2_cc_button_pane_t2_ParamLimits

0xfdd5,	// (0x0005b0f6) phob2_cc_button_pane_t_ParamLimits

0x1057,	// (0x0004c378) popup_wgtman_window

0xdcd1,	// (0x00058ff2) scroll_pane_cp038

0x7eaa,	// (0x000531cb) wgtman_btn_pane_cp_01_ParamLimits

0x7eaa,	// (0x000531cb) wgtman_btn_pane_cp_01

0x85a4,	// (0x000538c5) wgtman_content_pane

0x85ad,	// (0x000538ce) wgtman_heading_pane

0xa7c4,	// (0x00055ae5) bg_heading_pane_cp02

0x85b6,	// (0x000538d7) wgtman_heading_pane_g1

0x85be,	// (0x000538df) wgtman_heading_pane_t1

0x85cc,	// (0x000538ed) scroll_pane_cp036

0x85d4,	// (0x000538f5) wgtman_list_pane

0xedfc,	// (0x0005a11d) wgtman_list_pane_t1_ParamLimits

0xedfc,	// (0x0005a11d) wgtman_list_pane_t1

0xa202,	// (0x00055523) cam4_grid_pane

0x07f2,	// (0x0004bb13) bg_button_pane_cp015_ParamLimits

0x5f78,	// (0x00051299) bg_button_pane_cp016_ParamLimits

0x5f84,	// (0x000512a5) bg_button_pane_cp017_ParamLimits

0x5f9f,	// (0x000512c0) popup_vitu2_query_window_g3_ParamLimits

0x5f9f,	// (0x000512c0) popup_vitu2_query_window_g3

0x08a9,	// (0x0004bbca) popup_vitu2_query_window_t6_ParamLimits

0x08a9,	// (0x0004bbca) popup_vitu2_query_window_t6

0x08d4,	// (0x0004bbf5) popup_vitu2_query_window_t7_ParamLimits

0x08d4,	// (0x0004bbf5) popup_vitu2_query_window_t7

0xede1,	// (0x0005a102) cam4_grid_pane_g1

0xedea,	// (0x0005a10b) cam4_grid_pane_g2

0x85dc,	// (0x000538fd) cam4_grid_pane_g3

0x85e5,	// (0x00053906) cam4_grid_pane_g4

0x0003,

0xfdea,	// (0x0005b10b) cam4_grid_pane_g

0x1c0d,	// (0x0004cf2e) aid_placing_vt_slider_lsc_ParamLimits

0x1f0a,	// (0x0004d22b) vidtel_button_pane_ParamLimits

0x1f0a,	// (0x0004d22b) vidtel_button_pane

0xa7c4,	// (0x00055ae5) bg_button_pane_cp034

0x85f0,	// (0x00053911) vidtel_button_pane_g1

0x85f8,	// (0x00053919) vidtel_button_pane_t1

0xddf5,	// (0x00059116) aid_size_vtel_slider_touch

0xdeae,	// (0x000591cf) scroll_pane_cp039

0x6bc7,	// (0x00051ee8) ncim_query_button_pane_cp01_ParamLimits

0x6be6,	// (0x00051f07) ncimui_query_pane_g1_ParamLimits

0xa7ce,	// (0x00055aef) input_focus_pane_cp012_ParamLimits

0xe6e6,	// (0x00059a07) ncim_query_entry_pane_t1_ParamLimits

0xdeae,	// (0x000591cf) scroll_pane_cp039_ParamLimits

0xb9df,	// (0x00056d00) navi_pane_bcale_mc_g1

0xb9e7,	// (0x00056d08) navi_pane_bcale_mc_t1

0xec62,	// (0x00059f83) main_sp_fs_email_pane_g1

0xec6e,	// (0x00059f8f) main_sp_fs_email_pane_g2

0x0001,

0xfc02,	// (0x0005af23) main_sp_fs_email_pane_g

0xef33,	// (0x0005a254) list_single_cale_mrui_row_pane_g3_ParamLimits

0xef33,	// (0x0005a254) list_single_cale_mrui_row_pane_g3

0x0d59,	// (0x0004c07a) list_single_recal_day_pane_g5_event_pane

0xa71d,	// (0x00055a3e) list_single_recal_day_pane_g7

0x860e,	// (0x0005392f) list_recal_day_event_pane_cp01

0x8617,	// (0x00053938) list_recal_vselct_arw_lo_pane_cp01

0x861f,	// (0x00053940) list_recal_vselct_arw_up_pane_cp01

0x8627,	// (0x00053948) list_recal_vselct_pane_cp01

0xde05,	// (0x00059126) list_recal_day_event_pane_cp01_g1

0xa78c,	// (0x00055aad) list_recal_day_event_pane_cp01_t1

0xa725,	// (0x00055a46) list_single_recal_day_pane_t1_ParamLimits

0xa737,	// (0x00055a58) list_single_recal_day_pane_t2_ParamLimits

0xfccd,	// (0x0005afee) list_single_recal_day_pane_t_ParamLimits

0xae4a,	// (0x0005616b) bg_notes_pane_ParamLimits

0xaf15,	// (0x00056236) list_notes_pane_ParamLimits

0x125e,	// (0x0004c57f) scroll_pane_cp06_ParamLimits

0xaf37,	// (0x00056258) main_notes_pane_ParamLimits

0xa7ce,	// (0x00055aef) main_welc_pane

0x8666,	// (0x00053987) main_welc_body_pane_ParamLimits

0x8666,	// (0x00053987) main_welc_body_pane

0x8683,	// (0x000539a4) main_welc_opti_pane_ParamLimits

0x8683,	// (0x000539a4) main_welc_opti_pane

0x86fc,	// (0x00053a1d) main_welc_pane_t1_ParamLimits

0x86fc,	// (0x00053a1d) main_welc_pane_t1

0x88fc,	// (0x00053c1d) main_welc_body_row_pane_ParamLimits

0x88fc,	// (0x00053c1d) main_welc_body_row_pane

0xaeb7,	// (0x000561d8) main_welc_opti_row_pane_ParamLimits

0xaeb7,	// (0x000561d8) main_welc_opti_row_pane

0x8911,	// (0x00053c32) main_welc_opti_row_pane_g1

0x8919,	// (0x00053c3a) main_welc_opti_row_pane_t1

0x8928,	// (0x00053c49) main_welc_body_row_pane_t1

0x7c3d,	// (0x00052f5e) popup_notif_wgt_heading_pane

0x7c67,	// (0x00052f88) aid_size_list_notif_wgt_del_ParamLimits

0x7c74,	// (0x00052f95) list_notif_wgt_row_pane_g1_ParamLimits

0x7c80,	// (0x00052fa1) list_notif_wgt_row_pane_g2_ParamLimits

0x7c8f,	// (0x00052fb0) list_notif_wgt_row_pane_g3_ParamLimits

0xfd34,	// (0x0005b055) list_notif_wgt_row_pane_g_ParamLimits

0x7c9c,	// (0x00052fbd) list_notif_wgt_row_pane_t1_ParamLimits

0x7cb2,	// (0x00052fd3) list_notif_wgt_row_pane_t2_ParamLimits

0x7cc4,	// (0x00052fe5) list_notif_wgt_row_pane_t3_ParamLimits

0xfd3b,	// (0x0005b05c) list_notif_wgt_row_pane_t_ParamLimits

0x7f65,	// (0x00053286) listrow_wgtman_pane_g1_ParamLimits

0x7f72,	// (0x00053293) listrow_wgtman_pane_g2_ParamLimits

0xfd6b,	// (0x0005b08c) listrow_wgtman_pane_g_ParamLimits

0x0d63,	// (0x0004c084) listrow_wgtman_pane_t1_ParamLimits

0x0d7b,	// (0x0004c09c) listrow_wgtman_pane_t2_ParamLimits

0xfd70,	// (0x0005b091) listrow_wgtman_pane_t_ParamLimits

0x0da1,	// (0x0004c0c2) wait_bar_pane_cp09_ParamLimits

0xa7c4,	// (0x00055ae5) bg_popup_heading_pane_cp02

0x8937,	// (0x00053c58) popup_notif_wgt_heading_pane_g1

0x893f,	// (0x00053c60) popup_notif_wgt_heading_pane_t1

0xa7c4,	// (0x00055ae5) main_vids_pane

0xa7c4,	// (0x00055ae5) vids_listscroll_pane

0x894d,	// (0x00053c6e) scroll_pane_cp040

0xa7c4,	// (0x00055ae5) vids_list_pane

0x8958,	// (0x00053c79) vids_list_double_pane_ParamLimits

0x8958,	// (0x00053c79) vids_list_double_pane

0x8969,	// (0x00053c8a) vids_list_double_pane_g1

0x8972,	// (0x00053c93) vids_list_double_pane_t1

0x8981,	// (0x00053ca2) vids_list_double_pane_t2

0x0001,

0xfe09,	// (0x0005b12a) vids_list_double_pane_t

0xa7ce,	// (0x00055aef) main_ncimui_pane_ParamLimits

0x69fd,	// (0x00051d1e) main_ncimui_pane_g1_ParamLimits

0x6a09,	// (0x00051d2a) main_ncimui_pane_g2_ParamLimits

0x6a09,	// (0x00051d2a) main_ncimui_pane_g2

0x0001,

0xfb13,	// (0x0005ae34) main_ncimui_pane_g_ParamLimits

0xfb13,	// (0x0005ae34) main_ncimui_pane_g

0x869e,	// (0x000539bf) main_welc_pane_g1_ParamLimits

0x869e,	// (0x000539bf) main_welc_pane_g1

0x86b3,	// (0x000539d4) main_welc_pane_g2_ParamLimits

0x86b3,	// (0x000539d4) main_welc_pane_g2

0x0003,

0xfdf3,	// (0x0005b114) main_welc_pane_g_ParamLimits

0xfdf3,	// (0x0005b114) main_welc_pane_g

0xae4a,	// (0x0005616b) listscroll_mce_pane_ParamLimits

0xbb34,	// (0x00056e55) wait_bar_pane_cp10

0xcec1,	// (0x000581e2) main_cale_day_pane_ParamLimits

0xcec1,	// (0x000581e2) main_cale_week_pane_ParamLimits

0xae4a,	// (0x0005616b) main_messa_pane_ParamLimits

0x478d,	// (0x0004faae) main_clock2_btn_pane_ParamLimits

0x478d,	// (0x0004faae) main_clock2_btn_pane

0xd69e,	// (0x000589bf) main_clock2_btn_pane_cp01_ParamLimits

0xd69e,	// (0x000589bf) main_clock2_btn_pane_cp01

0xef04,	// (0x0005a225) list_cale_mrui_pane_ParamLimits

0x7d1d,	// (0x0005303e) main_cf0_pane_g2

0x0001,

0xfd42,	// (0x0005b063) main_cf0_pane_g

0x81dd,	// (0x000534fe) area_left_week_number_pane_ParamLimits

0x81e9,	// (0x0005350a) area_top_day_name_pane_ParamLimits

0x81fc,	// (0x0005351d) frame_month_view_pane_ParamLimits

0x820f,	// (0x00053530) grid_month_view_pane_ParamLimits

0x828b,	// (0x000535ac) frm_month_g1_ParamLimits

0x8298,	// (0x000535b9) frm_month_g2_ParamLimits

0x82ab,	// (0x000535cc) frm_month_g3_ParamLimits

0x82be,	// (0x000535df) frm_month_g4_ParamLimits

0x82d1,	// (0x000535f2) frm_month_g5_ParamLimits

0x82e4,	// (0x00053605) frm_month_g6_ParamLimits

0x82f7,	// (0x00053618) frm_month_g7_ParamLimits

0x830a,	// (0x0005362b) frm_month_g8_ParamLimits

0x8317,	// (0x00053638) frm_month_g9_ParamLimits

0x8327,	// (0x00053648) frm_month_g10_ParamLimits

0x8337,	// (0x00053658) frm_month_g11_ParamLimits

0x8347,	// (0x00053668) frm_month_g12_ParamLimits

0x8359,	// (0x0005367a) frm_month_g13_ParamLimits

0x836b,	// (0x0005368c) frm_month_g14_ParamLimits

0x837f,	// (0x000536a0) frm_month_g15_ParamLimits

0x8393,	// (0x000536b4) frm_month_g16_ParamLimits

0xfd9a,	// (0x0005b0bb) frm_month_g_ParamLimits

0x83a7,	// (0x000536c8) cell_top_day_name_pane_t1_ParamLimits

0x83ba,	// (0x000536db) cell_area_left_week_number_pane_g1_ParamLimits

0x83c6,	// (0x000536e7) cell_area_left_week_number_pane_t1_ParamLimits

0xaec5,	// (0x000561e6) cell_month_view_pane_g1_ParamLimits

0x83d9,	// (0x000536fa) cell_month_view_pane_t1_ParamLimits

0xae42,	// (0x00056163) main_clock2_btn_pane_g1

0x8991,	// (0x00053cb2) main_clock2_btn_pane_t1

0xa7ce,	// (0x00055aef) listscroll_cmail_pane_ParamLimits

0xec62,	// (0x00059f83) main_sp_fs_email_pane_g1_ParamLimits

0xec6e,	// (0x00059f8f) main_sp_fs_email_pane_g2_ParamLimits

0xfc02,	// (0x0005af23) main_sp_fs_email_pane_g_ParamLimits

0xf012,	// (0x0005a333) list_recal_day_pane_ParamLimits

0xf023,	// (0x0005a344) mian_recal_day_pane_t1

0x0b46,	// (0x0004be67) list_single_dyc_row_text_pane_t4_ParamLimits

0x0b46,	// (0x0004be67) list_single_dyc_row_text_pane_t4

0x0b8f,	// (0x0004beb0) list_single_dyc_row_text_pane_t5_ParamLimits

0x0b8f,	// (0x0004beb0) list_single_dyc_row_text_pane_t5

0xa4fc,	// (0x0005581d) list_single_dyc_row_text_pane_t6_ParamLimits

0xa4fc,	// (0x0005581d) list_single_dyc_row_text_pane_t6

0x298e,	// (0x0004dcaf) aid_mgn_list_cale_time_pane

0xa7ce,	// (0x00055aef) main_gallery2_pane_ParamLimits

0xd6b4,	// (0x000589d5) main_clock2_pane_cp01_t1

0xd6c2,	// (0x000589e3) main_clock2_pane_cp01_t3

0x0001,

0xf71f,	// (0x0005aa40) main_clock2_pane_cp01_t

0x15fa,	// (0x0004c91b) cale_week_scroll_pane_g16_ParamLimits

0x15fa,	// (0x0004c91b) cale_week_scroll_pane_g16

0xb0fb,	// (0x0005641c) vorec_slider_pane

0x85f8,	// (0x00053919) vidtel_button_pane_t1_ParamLimits

0x78ae,	// (0x00052bcf) main_fs_bigclock_clock_pane_g1_ParamLimits

0x78ae,	// (0x00052bcf) main_fs_bigclock_clock_pane_g2_ParamLimits

0x78bf,	// (0x00052be0) main_fs_bigclock_clock_pane_g3_ParamLimits

0x78bf,	// (0x00052be0) main_fs_bigclock_clock_pane_g4_ParamLimits

0xfcf0,	// (0x0005b011) main_fs_bigclock_clock_pane_g_ParamLimits

0x78d2,	// (0x00052bf3) main_fs_bigclock_clock_pane_t1_ParamLimits

0x78e8,	// (0x00052c09) main_fs_bigclock_clock_pane_t2_ParamLimits

0xfcf9,	// (0x0005b01a) main_fs_bigclock_clock_pane_t_ParamLimits

0x4069,	// (0x0004f38a) main_mup3_lyrics_pane_ParamLimits

0x4069,	// (0x0004f38a) main_mup3_lyrics_pane

0x89b7,	// (0x00053cd8) main_mup3_lyrics_pane_t1_ParamLimits

0x89b7,	// (0x00053cd8) main_mup3_lyrics_pane_t1

0x9f54,	// (0x00055275) aid_main_mp4_pane_t1_area

0x9f5e,	// (0x0005527f) aid_main_mp4_pane_t2_area

0xa00a,	// (0x0005532b) main_mp4_pane_g7_ParamLimits

0xa00a,	// (0x0005532b) main_mp4_pane_g7

0xa016,	// (0x00055337) main_mp4_pane_g8_ParamLimits

0xa016,	// (0x00055337) main_mp4_pane_g8

0x514c,	// (0x0005046d) aid_call6_pane_g1_size

0x8573,	// (0x00053894) list_double_large_graphic_phob2_other_pane_ParamLimits

0x8573,	// (0x00053894) list_double_large_graphic_phob2_other_pane

0xb8fc,	// (0x00056c1d) list_double_large_graphic_phob2_other_pane_g1

0xa7c4,	// (0x00055ae5) list_highlight_pane_cp026

0xa7ce,	// (0x00055aef) main_welc_pane_ParamLimits

0x71e4,	// (0x00052505) main_sp_fs_ctrlbar_pane_g3_ParamLimits

0x71e4,	// (0x00052505) main_sp_fs_ctrlbar_pane_g3

0x71fe,	// (0x0005251f) main_sp_fs_ctrlbar_pane_g4_ParamLimits

0x71fe,	// (0x0005251f) main_sp_fs_ctrlbar_pane_g4

0x7232,	// (0x00052553) toolbar2_fixed_button_pane_cp01

0x723d,	// (0x0005255e) toolbar2_fixed_button_pane_cp02

0x724a,	// (0x0005256b) toolbar2_fixed_button_pane_cp03

0x8644,	// (0x00053965) list_welc_entry_pane_ParamLimits

0x8644,	// (0x00053965) list_welc_entry_pane

0x86c8,	// (0x000539e9) main_welc_pane_g3_ParamLimits

0x86c8,	// (0x000539e9) main_welc_pane_g3

0x871a,	// (0x00053a3b) main_welc_pane_t2_ParamLimits

0x871a,	// (0x00053a3b) main_welc_pane_t2

0x8735,	// (0x00053a56) main_welc_pane_t3_ParamLimits

0x8735,	// (0x00053a56) main_welc_pane_t3

0x0005,

0xfdfc,	// (0x0005b11d) main_welc_pane_t_ParamLimits

0xfdfc,	// (0x0005b11d) main_welc_pane_t

0x8865,	// (0x00053b86) welc_button_pane_ParamLimits

0x8865,	// (0x00053b86) welc_button_pane

0x88e7,	// (0x00053c08) welc_service_logo_pane_ParamLimits

0x88e7,	// (0x00053c08) welc_service_logo_pane

0x89d3,	// (0x00053cf4) list_single_welc_entry_pane_ParamLimits

0x89d3,	// (0x00053cf4) list_single_welc_entry_pane

0x89e4,	// (0x00053d05) list_single_welc_entry_pane_g1

0x89ec,	// (0x00053d0d) list_single_welc_entry_pane_t1

0x89fa,	// (0x00053d1b) list_single_welc_entry_pane_t2

0x0001,

0xfe0e,	// (0x0005b12f) list_single_welc_entry_pane_t

0xa7c4,	// (0x00055ae5) bg_button_pane_cp035

0x8a08,	// (0x00053d29) welc_button_pane_t1

0x8a16,	// (0x00053d37) welc_service_logo_pane_g1

0x8a1f,	// (0x00053d40) welc_service_logo_pane_g2

0x0001,

0xfe13,	// (0x0005b134) welc_service_logo_pane_g

0xa7c4,	// (0x00055ae5) main_int_radio_pane

0xe584,	// (0x000598a5) list_single_fs_dyc_pane_g1

0x0dbf,	// (0x0004c0e0) list_double_large_graphic_phob2_pane_g3_ParamLimits

0x0dbf,	// (0x0004c0e0) list_double_large_graphic_phob2_pane_g3

0x0dcb,	// (0x0004c0ec) list_double_large_graphic_phob2_pane_g4_ParamLimits

0x0dcb,	// (0x0004c0ec) list_double_large_graphic_phob2_pane_g4

0x8a28,	// (0x00053d49) main_int_radio1_pane_ParamLimits

0x8a28,	// (0x00053d49) main_int_radio1_pane

0x8a45,	// (0x00053d66) find_pane_cp02

0x8a4e,	// (0x00053d6f) input_focus_pane_cp12_ParamLimits

0x8a4e,	// (0x00053d6f) input_focus_pane_cp12

0x8a5e,	// (0x00053d7f) input_focus_pane_cp13_ParamLimits

0x8a5e,	// (0x00053d7f) input_focus_pane_cp13

0x8a72,	// (0x00053d93) input_focus_pane_cp14_ParamLimits

0x8a72,	// (0x00053d93) input_focus_pane_cp14

0x8a86,	// (0x00053da7) int_radio1_listscroll_pane

0x8a90,	// (0x00053db1) main_int_radio1_pane_g1_ParamLimits

0x8a90,	// (0x00053db1) main_int_radio1_pane_g1

0x8aa8,	// (0x00053dc9) main_int_radio1_pane_t1_ParamLimits

0x8aa8,	// (0x00053dc9) main_int_radio1_pane_t1

0x8ac3,	// (0x00053de4) main_int_radio1_pane_t2_ParamLimits

0x8ac3,	// (0x00053de4) main_int_radio1_pane_t2

0x8ade,	// (0x00053dff) main_int_radio1_pane_t3_ParamLimits

0x8ade,	// (0x00053dff) main_int_radio1_pane_t3

0x8af9,	// (0x00053e1a) main_int_radio1_pane_t4_ParamLimits

0x8af9,	// (0x00053e1a) main_int_radio1_pane_t4

0x8b0b,	// (0x00053e2c) main_int_radio1_pane_t5_ParamLimits

0x8b0b,	// (0x00053e2c) main_int_radio1_pane_t5

0x8b1d,	// (0x00053e3e) main_int_radio1_pane_t6_ParamLimits

0x8b1d,	// (0x00053e3e) main_int_radio1_pane_t6

0x8b32,	// (0x00053e53) main_int_radio1_pane_t7_ParamLimits

0x8b32,	// (0x00053e53) main_int_radio1_pane_t7

0x8b47,	// (0x00053e68) main_int_radio1_pane_t8_ParamLimits

0x8b47,	// (0x00053e68) main_int_radio1_pane_t8

0x8b66,	// (0x00053e87) main_int_radio1_pane_t9_ParamLimits

0x8b66,	// (0x00053e87) main_int_radio1_pane_t9

0x8b78,	// (0x00053e99) main_int_radio1_pane_t10_ParamLimits

0x8b78,	// (0x00053e99) main_int_radio1_pane_t10

0x8b9e,	// (0x00053ebf) main_int_radio1_pane_t11_ParamLimits

0x8b9e,	// (0x00053ebf) main_int_radio1_pane_t11

0x8bc4,	// (0x00053ee5) main_int_radio1_pane_t12_ParamLimits

0x8bc4,	// (0x00053ee5) main_int_radio1_pane_t12

0x000b,

0xfe18,	// (0x0005b139) main_int_radio1_pane_t_ParamLimits

0xfe18,	// (0x0005b139) main_int_radio1_pane_t

0x8bd6,	// (0x00053ef7) int_radio_list_pane

0x844e,	// (0x0005376f) scroll_pane_cp037

0x8bde,	// (0x00053eff) list_double_large_graphic_int_radio_pane_ParamLimits

0x8bde,	// (0x00053eff) list_double_large_graphic_int_radio_pane

0x8bf7,	// (0x00053f18) list_double_large_graphic_int_radio_pane_g1

0xa7a8,	// (0x00055ac9) list_double_large_graphic_int_radio_pane_t1

0xa7b6,	// (0x00055ad7) list_double_large_graphic_int_radio_pane_t2

0x0001,

0xfe31,	// (0x0005b152) list_double_large_graphic_int_radio_pane_t

0xa7c4,	// (0x00055ae5) list_highlight_pane_cp027

0x865e,	// (0x0005397f) main_button_pane_4

0x86db,	// (0x000539fc) main_welc_pane_g4_ParamLimits

0x86db,	// (0x000539fc) main_welc_pane_g4

0x874e,	// (0x00053a6f) main_welc_pane_t4_ParamLimits

0x874e,	// (0x00053a6f) main_welc_pane_t4

0x8765,	// (0x00053a86) main_welc_pane_t5_ParamLimits

0x8765,	// (0x00053a86) main_welc_pane_t5

0x87a2,	// (0x00053ac3) main_welc_pane_t6_ParamLimits

0x87a2,	// (0x00053ac3) main_welc_pane_t6

0x887c,	// (0x00053b9d) welc_button_pane_2_ParamLimits

0x887c,	// (0x00053b9d) welc_button_pane_2

0x8898,	// (0x00053bb9) welc_button_pane_3_ParamLimits

0x8898,	// (0x00053bb9) welc_button_pane_3

0x88b7,	// (0x00053bd8) welc_button_pane_4

0x88bf,	// (0x00053be0) welc_button_pane_5_ParamLimits

0x88bf,	// (0x00053be0) welc_button_pane_5

0x0ec1,	// (0x0004c1e2) main_popup_welc_pane

0x8c0f,	// (0x00053f30) main_welc_sk_g3

0x8c19,	// (0x00053f3a) main_welc_sk_g4

0x8c23,	// (0x00053f44) main_welc_sk_t3

0x8c33,	// (0x00053f54) main_welc_sk_t4

0x8c43,	// (0x00053f64) popup_welc_pane_t4

0x8c51,	// (0x00053f72) popup_welc_pane_t5

0x8c5f,	// (0x00053f80) popup_welc_pane_t6

0xa7c4,	// (0x00055ae5) main_acti_pane

0xa7c4,	// (0x00055ae5) main_sso_pane

0x8c9d,	// (0x00053fbe) sso_body_pane_ParamLimits

0x8c9d,	// (0x00053fbe) sso_body_pane

0x8cb1,	// (0x00053fd2) sso_logo_pane_ParamLimits

0x8cb1,	// (0x00053fd2) sso_logo_pane

0x8ce1,	// (0x00054002) sso_sk_pane_ParamLimits

0x8ce1,	// (0x00054002) sso_sk_pane

0xb131,	// (0x00056452) main_sso_logo_pane_g1

0x8cf3,	// (0x00054014) sso_sk_pane_t1_ParamLimits

0x8cf3,	// (0x00054014) sso_sk_pane_t1

0x8d0d,	// (0x0005402e) sso_sk_pane_t2_ParamLimits

0x8d0d,	// (0x0005402e) sso_sk_pane_t2

0x0001,

0xfe36,	// (0x0005b157) sso_sk_pane_t_ParamLimits

0xfe36,	// (0x0005b157) sso_sk_pane_t

0x8d23,	// (0x00054044) aid_sso_gap

0x8d2c,	// (0x0005404d) aid_sso_txt1

0x8d36,	// (0x00054057) aid_sso_txt2

0x8d40,	// (0x00054061) aid_sso_txt3

0x0002,

0xfe3b,	// (0x0005b15c) aid_sso_txt

0x8d4a,	// (0x0005406b) aid_sso_widget

0x8da8,	// (0x000540c9) sso_btn_pane_ParamLimits

0x8da8,	// (0x000540c9) sso_btn_pane

0x8e30,	// (0x00054151) sso_option_pane_ParamLimits

0x8e30,	// (0x00054151) sso_option_pane

0x8eb0,	// (0x000541d1) sso_query_pane_ParamLimits

0x8eb0,	// (0x000541d1) sso_query_pane

0x8f06,	// (0x00054227) sso_query_pane_cp01_ParamLimits

0x8f06,	// (0x00054227) sso_query_pane_cp01

0x8f5e,	// (0x0005427f) sso_t_hdr_pane_ParamLimits

0x8f5e,	// (0x0005427f) sso_t_hdr_pane

0x8f88,	// (0x000542a9) sso_t_nml_pane_ParamLimits

0x8f88,	// (0x000542a9) sso_t_nml_pane

0x8fde,	// (0x000542ff) sso_t_sub_pane

0x8cbe,	// (0x00053fdf) sso_popup_window_ParamLimits

0x8cbe,	// (0x00053fdf) sso_popup_window

0x8d54,	// (0x00054075) sso_apps_pane_ParamLimits

0x8d54,	// (0x00054075) sso_apps_pane

0x8d7e,	// (0x0005409f) sso_body_pane_g1

0x8d88,	// (0x000540a9) sso_body_pane_t1

0x8d98,	// (0x000540b9) sso_body_pane_t2

0x0001,

0xfe42,	// (0x0005b163) sso_body_pane_t

0x8dfa,	// (0x0005411b) sso_btn_pane_cp01_ParamLimits

0x8dfa,	// (0x0005411b) sso_btn_pane_cp01

0x8e84,	// (0x000541a5) sso_prog_pane_ParamLimits

0x8e84,	// (0x000541a5) sso_prog_pane

0x8ff3,	// (0x00054314) sso_t_hdr_pane_t1_ParamLimits

0x8ff3,	// (0x00054314) sso_t_hdr_pane_t1

0x9006,	// (0x00054327) input_focus_pane_cp10_ParamLimits

0x9006,	// (0x00054327) input_focus_pane_cp10

0x9020,	// (0x00054341) sso_query_pane_t1_ParamLimits

0x9020,	// (0x00054341) sso_query_pane_t1

0x9033,	// (0x00054354) sso_query_pane_t2_ParamLimits

0x9033,	// (0x00054354) sso_query_pane_t2

0x904e,	// (0x0005436f) sso_query_pane_t3_ParamLimits

0x904e,	// (0x0005436f) sso_query_pane_t3

0x9078,	// (0x00054399) sso_query_pane_t4_ParamLimits

0x9078,	// (0x00054399) sso_query_pane_t4

0x0003,

0xfe47,	// (0x0005b168) sso_query_pane_t_ParamLimits

0xfe47,	// (0x0005b168) sso_query_pane_t

0xa7c4,	// (0x00055ae5) bg_button_pane_cp22

0x8c00,	// (0x00053f21) sso_btn_pane_t1

0x909c,	// (0x000543bd) sso_t_nml_pane_t1_ParamLimits

0x909c,	// (0x000543bd) sso_t_nml_pane_t1

0x90b7,	// (0x000543d8) sso_option_row_pane_ParamLimits

0x90b7,	// (0x000543d8) sso_option_row_pane

0x90ca,	// (0x000543eb) sso_t_sub_pane_t1_ParamLimits

0x90ca,	// (0x000543eb) sso_t_sub_pane_t1

0xa7ce,	// (0x00055aef) bg_popup_window_pane_cp11_ParamLimits

0xa7ce,	// (0x00055aef) bg_popup_window_pane_cp11

0x90e7,	// (0x00054408) popup_sk_window_cp01_ParamLimits

0x90e7,	// (0x00054408) popup_sk_window_cp01

0x90f4,	// (0x00054415) sso_popup_body_pane_ParamLimits

0x90f4,	// (0x00054415) sso_popup_body_pane

0x9101,	// (0x00054422) scroll_pane_cp21_ParamLimits

0x9101,	// (0x00054422) scroll_pane_cp21

0x910e,	// (0x0005442f) sso_popup_body_t_pane_ParamLimits

0x910e,	// (0x0005442f) sso_popup_body_t_pane

0x911b,	// (0x0005443c) sso_popup_body_t_hdr_pane_ParamLimits

0x911b,	// (0x0005443c) sso_popup_body_t_hdr_pane

0x912e,	// (0x0005444f) sso_popup_body_t_nml_pane_ParamLimits

0x912e,	// (0x0005444f) sso_popup_body_t_nml_pane

0x914c,	// (0x0005446d) sso_popup_body_t_sub_pane_ParamLimits

0x914c,	// (0x0005446d) sso_popup_body_t_sub_pane

0x916f,	// (0x00054490) sso_popup_body_t_hdr_pane_t1

0x917f,	// (0x000544a0) sso_popup_body_t_nml_pane_t1_ParamLimits

0x917f,	// (0x000544a0) sso_popup_body_t_nml_pane_t1

0x91b9,	// (0x000544da) sso_popup_body_t_sub_pane_t1_ParamLimits

0x91b9,	// (0x000544da) sso_popup_body_t_sub_pane_t1

0xb131,	// (0x00056452) sso_prog_pane_g1

0x91de,	// (0x000544ff) sso_apps_pane_comp1_ParamLimits

0x91de,	// (0x000544ff) sso_apps_pane_comp1

0x91f8,	// (0x00054519) sso_apps_pane_comp1_g1

0x9200,	// (0x00054521) sso_apps_pane_comp1_t1

0x921c,	// (0x0005453d) sso_option_row_pane_g1

0x9224,	// (0x00054545) sso_option_row_pane_t1

0x8631,	// (0x00053952) bg_welc_area_ParamLimits

0x8631,	// (0x00053952) bg_welc_area

0x87e0,	// (0x00053b01) sso_t_hdr_pane_a_t1_ParamLimits

0x87e0,	// (0x00053b01) sso_t_hdr_pane_a_t1

0x87fb,	// (0x00053b1c) sso_t_nml_pane_a_t1_ParamLimits

0x87fb,	// (0x00053b1c) sso_t_nml_pane_a_t1

0x882a,	// (0x00053b4b) sso_t_sub_pane_a_t1_ParamLimits

0x882a,	// (0x00053b4b) sso_t_sub_pane_a_t1

0x8c00,	// (0x00053f21) sso_btn_pane_t1_copy1

0xa7c4,	// (0x00055ae5) welc_button_pane_2_comp1

0x8c6d,	// (0x00053f8e) sso_t_hdr_pane_p_t1

0x8c7d,	// (0x00053f9e) sso_t_nml_pane_p_t1

0x8c8d,	// (0x00053fae) sso_t_sub_pane_p_t1

0xed1d,	// (0x0005a03e) list_cmail_pane_ParamLimits

0x88d5,	// (0x00053bf6) welc_button_pane_cp01_ParamLimits

0x88d5,	// (0x00053bf6) welc_button_pane_cp01

0xa7c4,	// (0x00055ae5) main_att_pane

0x920e,	// (0x0005452f) input_focus_pane_cp10_t1

0x9224,	// (0x00054545) sso_option_row_pane_t1_ParamLimits

0x923a,	// (0x0005455b) main_att_body_pane_ParamLimits

0x923a,	// (0x0005455b) main_att_body_pane

0x926f,	// (0x00054590) att_btn_pane_ParamLimits

0x926f,	// (0x00054590) att_btn_pane

0x9294,	// (0x000545b5) att_btn_pane_cp01_ParamLimits

0x9294,	// (0x000545b5) att_btn_pane_cp01

0x92b4,	// (0x000545d5) att_li_srv_pane_ParamLimits

0x92b4,	// (0x000545d5) att_li_srv_pane

0x92d1,	// (0x000545f2) att_opt_pane_ParamLimits

0x92d1,	// (0x000545f2) att_opt_pane

0x931d,	// (0x0005463e) att_query_pane_ParamLimits

0x931d,	// (0x0005463e) att_query_pane

0x9369,	// (0x0005468a) att_query_pane_cp01_ParamLimits

0x9369,	// (0x0005468a) att_query_pane_cp01

0x93b5,	// (0x000546d6) att_t_hdr_pane_ParamLimits

0x93b5,	// (0x000546d6) att_t_hdr_pane

0x940d,	// (0x0005472e) att_t_nml_pane_ParamLimits

0x940d,	// (0x0005472e) att_t_nml_pane

0x9446,	// (0x00054767) att_t_nml_pane_cp01_ParamLimits

0x9446,	// (0x00054767) att_t_nml_pane_cp01

0x9472,	// (0x00054793) att_t_nmlb_pane_ParamLimits

0x9472,	// (0x00054793) att_t_nmlb_pane

0x948f,	// (0x000547b0) att_term_pane_ParamLimits

0x948f,	// (0x000547b0) att_term_pane

0x94db,	// (0x000547fc) main_att_body_pane_g1_ParamLimits

0x94db,	// (0x000547fc) main_att_body_pane_g1

0x9512,	// (0x00054833) att_t_hdr_pane_t1_ParamLimits

0x9512,	// (0x00054833) att_t_hdr_pane_t1

0x952b,	// (0x0005484c) att_t_nml_pane_t1_ParamLimits

0x952b,	// (0x0005484c) att_t_nml_pane_t1

0x9550,	// (0x00054871) att_btn_pane_t1

0xa7c4,	// (0x00055ae5) bg_button_pane_cp23

0x9560,	// (0x00054881) att_li_srv_row_pane_ParamLimits

0x9560,	// (0x00054881) att_li_srv_row_pane

0x9570,	// (0x00054891) att_t_nmlb_pane_t1_ParamLimits

0x9570,	// (0x00054891) att_t_nmlb_pane_t1

0x9589,	// (0x000548aa) att_query_pane_t1

0x9598,	// (0x000548b9) att_query_pane_t2

0x95a7,	// (0x000548c8) att_query_pane_t3

0x0002,

0xfe50,	// (0x0005b171) att_query_pane_t

0x95b6,	// (0x000548d7) input_focus_pane_cp11

0x95bf,	// (0x000548e0) att_term_pane_t1_ParamLimits

0x95bf,	// (0x000548e0) att_term_pane_t1

0xa7c4,	// (0x00055ae5) att_opt_row_pane

0x95dc,	// (0x000548fd) att_opt_row_pane_g1

0x95e4,	// (0x00054905) att_opt_row_pane_t1_ParamLimits

0x95e4,	// (0x00054905) att_opt_row_pane_t1

0x95fd,	// (0x0005491e) att_li_srv_row_pane_g1

0x9605,	// (0x00054926) att_li_srv_row_pane_t1

0x961a,	// (0x0005493b) att_li_srv_row_pane_t2

0x0001,

0xfe57,	// (0x0005b178) att_li_srv_row_pane_t

0xa7c4,	// (0x00055ae5) main_call7_pane

0xa7c4,	// (0x00055ae5) main_vod_pane

0x8fde,	// (0x000542ff) sso_t_sub_pane_ParamLimits

0x9250,	// (0x00054571) att_btn_emg_pane_ParamLimits

0x9250,	// (0x00054571) att_btn_emg_pane

0x9605,	// (0x00054926) att_li_srv_row_pane_t1_ParamLimits

0x961a,	// (0x0005493b) att_li_srv_row_pane_t2_ParamLimits

0xfe57,	// (0x0005b178) att_li_srv_row_pane_t_ParamLimits

0x962f,	// (0x00054950) att_btn_close_pane_g1

0xa7c4,	// (0x00055ae5) bg_button_pane_cp24

0x9637,	// (0x00054958) main_vod_body_pane_ParamLimits

0x9637,	// (0x00054958) main_vod_body_pane

0x964b,	// (0x0005496c) main_vod_body_pane_g1_ParamLimits

0x964b,	// (0x0005496c) main_vod_body_pane_g1

0x967f,	// (0x000549a0) scroll_pane_cp24_ParamLimits

0x967f,	// (0x000549a0) scroll_pane_cp24

0x96cd,	// (0x000549ee) vod_btn_pane_ParamLimits

0x96cd,	// (0x000549ee) vod_btn_pane

0x9711,	// (0x00054a32) vod_det_pane_ParamLimits

0x9711,	// (0x00054a32) vod_det_pane

0x9741,	// (0x00054a62) vod_logo_g1_ParamLimits

0x9741,	// (0x00054a62) vod_logo_g1

0x977f,	// (0x00054aa0) vod_opt_pane_ParamLimits

0x977f,	// (0x00054aa0) vod_opt_pane

0x97b2,	// (0x00054ad3) vod_opt_pane_cp01_ParamLimits

0x97b2,	// (0x00054ad3) vod_opt_pane_cp01

0x97de,	// (0x00054aff) vod_query_pane_ParamLimits

0x97de,	// (0x00054aff) vod_query_pane

0x980b,	// (0x00054b2c) vod_query_pane_cp01_ParamLimits

0x980b,	// (0x00054b2c) vod_query_pane_cp01

0x9817,	// (0x00054b38) vod_t_nml_pane_ParamLimits

0x9817,	// (0x00054b38) vod_t_nml_pane

0x98c0,	// (0x00054be1) vod_t_nml_pane_cp01_ParamLimits

0x98c0,	// (0x00054be1) vod_t_nml_pane_cp01

0x98fc,	// (0x00054c1d) vod_t_sub_pane_ParamLimits

0x98fc,	// (0x00054c1d) vod_t_sub_pane

0x9931,	// (0x00054c52) vod_t_sub_pane_cp01_ParamLimits

0x9931,	// (0x00054c52) vod_t_sub_pane_cp01

0x95b6,	// (0x000548d7) vod_query_field_pane

0x9589,	// (0x000548aa) vod_query_pane_t1

0xa7c4,	// (0x00055ae5) bg_button_pane_cp25

0x995d,	// (0x00054c7e) sso_btn_pane_t1_copy2

0x996d,	// (0x00054c8e) vod_t_nml_pane_t1_ParamLimits

0x996d,	// (0x00054c8e) vod_t_nml_pane_t1

0x999c,	// (0x00054cbd) vod_opt_row_pane_ParamLimits

0x999c,	// (0x00054cbd) vod_opt_row_pane

0x99ae,	// (0x00054ccf) vod_t_sub_pane_t1_ParamLimits

0x99ae,	// (0x00054ccf) vod_t_sub_pane_t1

0x99c7,	// (0x00054ce8) vod_det_cell_pane_ParamLimits

0x99c7,	// (0x00054ce8) vod_det_cell_pane

0xa7c4,	// (0x00055ae5) input_focus_pane_cp15

0x99db,	// (0x00054cfc) vod_query_field_pane_t1

0x99e9,	// (0x00054d0a) vod_opt_row_pane_g1_ParamLimits

0x99e9,	// (0x00054d0a) vod_opt_row_pane_g1

0x99f5,	// (0x00054d16) vod_opt_row_pane_t1_ParamLimits

0x99f5,	// (0x00054d16) vod_opt_row_pane_t1

0x9a1a,	// (0x00054d3b) vod_det_cell_field_pane

0x9a23,	// (0x00054d44) vod_det_cell_pane_g1

0x9589,	// (0x000548aa) vod_det_cell_pane_t1

0xa7c4,	// (0x00055ae5) input_focus_pane_cp16

0x99db,	// (0x00054cfc) vod_det_cell_field_pane_t1

0x7d7c,	// (0x0005309d) call7_btn_grp_pane_ParamLimits

0x7d7c,	// (0x0005309d) call7_btn_grp_pane

0x9a2b,	// (0x00054d4c) call7_bubble_pane_ParamLimits

0x9a2b,	// (0x00054d4c) call7_bubble_pane

0x9a42,	// (0x00054d63) cell_call7_btn_pane_ParamLimits

0x9a42,	// (0x00054d63) cell_call7_btn_pane

0x9a56,	// (0x00054d77) call7_pane_g1_ParamLimits

0x9a56,	// (0x00054d77) call7_pane_g1

0x9a65,	// (0x00054d86) call7_windows_conf_pane_ParamLimits

0x9a65,	// (0x00054d86) call7_windows_conf_pane

0x9a7f,	// (0x00054da0) popup_call7_1st_window_ParamLimits

0x9a7f,	// (0x00054da0) popup_call7_1st_window

0x9a90,	// (0x00054db1) popup_call7_2nd_window_ParamLimits

0x9a90,	// (0x00054db1) popup_call7_2nd_window

0x9aa1,	// (0x00054dc2) popup_call7_3rd_window_ParamLimits

0x9aa1,	// (0x00054dc2) popup_call7_3rd_window

0xa7c4,	// (0x00055ae5) bg_button_pane_cp26

0x7e4c,	// (0x0005316d) cell_call7_btn_pane_g1

0x7e55,	// (0x00053176) cell_call7_btn_pane_t1

0xa7c4,	// (0x00055ae5) bg_popup_window_pane_cp12

0x9ab2,	// (0x00054dd3) popup_call7_1st_window_g1

0x9aba,	// (0x00054ddb) popup_call7_1st_window_g2

0x9ac2,	// (0x00054de3) popup_call7_1st_window_g3

0x0002,

0xfe5c,	// (0x0005b17d) popup_call7_1st_window_g

0x9aca,	// (0x00054deb) popup_call7_1st_window_t1

0x9ad9,	// (0x00054dfa) popup_call7_1st_window_t2

0x9ae7,	// (0x00054e08) popup_call7_1st_window_t3

0x0002,

0xfe63,	// (0x0005b184) popup_call7_1st_window_t

0xa7c4,	// (0x00055ae5) bg_popup_window_pane_cp13

0x9af5,	// (0x00054e16) popup_call7_2nd_window_g1

0x9afd,	// (0x00054e1e) popup_call7_2nd_window_g2

0x9b05,	// (0x00054e26) popup_call7_2nd_window_g3

0x0002,

0xfe6a,	// (0x0005b18b) popup_call7_2nd_window_g

0x9b0d,	// (0x00054e2e) popup_call7_2nd_window_t1

0xa7c4,	// (0x00055ae5) bg_popup_window_pane_cp14

0x9b1c,	// (0x00054e3d) call7_list_conf_pane

0x9b24,	// (0x00054e45) call7_list_conf_row_pane_ParamLimits

0x9b24,	// (0x00054e45) call7_list_conf_row_pane

0x9b37,	// (0x00054e58) call7_list_conf_row_pane_g1

0x9b3f,	// (0x00054e60) call7_list_conf_row_pane_g2

0x0001,

0xfe71,	// (0x0005b192) call7_list_conf_row_pane_g

0x9b47,	// (0x00054e68) call7_list_conf_row_pane_t1

0xa7c4,	// (0x00055ae5) list_highlight_pane_cp22
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

} // end of namespace AknLayoutScalable_Elaf_pnl4_apps_nhd4_lsc_tch_Small
