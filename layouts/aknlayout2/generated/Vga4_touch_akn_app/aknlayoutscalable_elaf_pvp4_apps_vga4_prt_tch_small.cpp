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

#include "aknlayoutscalable_elaf_pvp4_apps_vga4_prt_tch_small.h"
#include "AknLayout2ScalableDecode.h"
namespace AknLayoutScalable_Apps { extern const TUint8 KByteCodedData_AknLayoutScalable_Elaf_pvp4_apps_vga4_prt_tch[]; }

namespace AknLayoutScalable_Elaf_pvp4_apps_vga4_prt_tch_Small
{

extern const TUint16 KDataLookup[AknLayoutScalable_Apps::E_TApiId_TableSize];
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Apps::KByteCodedData_AknLayoutScalable_Elaf_pvp4_apps_vga4_prt_tch + 0x0003e4d2 };

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
0x1f1f,	// (0x000403f1) Screen

0x1f2b,	// (0x000403fd) application_window

0x1f6b,	// (0x0004043d) area_bottom_pane_ParamLimits

0x1f6b,	// (0x0004043d) area_bottom_pane

0x1fa0,	// (0x00040472) area_top_pane_ParamLimits

0x1fa0,	// (0x00040472) area_top_pane

0xa183,	// (0x00048655) call_video_uplink_pane_ParamLimits

0xa183,	// (0x00048655) call_video_uplink_pane

0x202f,	// (0x00040501) main_pane_ParamLimits

0x202f,	// (0x00040501) main_pane

0xc86e,	// (0x0004ad40) context_pane

0x5719,	// (0x00043beb) navi_pane

0x573d,	// (0x00043c0f) popup_cale_events_window_ParamLimits

0x573d,	// (0x00043c0f) popup_cale_events_window

0xc881,	// (0x0004ad53) popup_mup_playback_window

0x5755,	// (0x00043c27) signal_pane

0xa8d4,	// (0x00048da6) main_browser_pane

0xaab8,	// (0x00048f8a) main_burst_pane

0x55cb,	// (0x00043a9d) main_calc_pane

0xc811,	// (0x0004ace3) main_cale_day_pane

0x2749,	// (0x00040c1b) main_cale_month_pane

0xc811,	// (0x0004ace3) main_cale_week_pane

0xaab8,	// (0x00048f8a) main_call_pane

0xa5b4,	// (0x00048a86) main_call_poc_pane

0xaab8,	// (0x00048f8a) main_camera_pane

0xaab8,	// (0x00048f8a) main_chi_dic_pane

0xb284,	// (0x00049756) main_clock_pane

0xa5b4,	// (0x00048a86) main_fmradio_pane

0xaab8,	// (0x00048f8a) main_graph_messa_pane

0xa5b4,	// (0x00048a86) main_help_pane

0xa8d4,	// (0x00048da6) main_im_pane

0xa80f,	// (0x00048ce1) main_image_pane_ParamLimits

0xa80f,	// (0x00048ce1) main_image_pane

0xa5b4,	// (0x00048a86) main_location2_pane

0xaab8,	// (0x00048f8a) main_location_pane

0xa80f,	// (0x00048ce1) main_messa_pane

0xa5b4,	// (0x00048a86) main_mp2_pane

0xaab8,	// (0x00048f8a) main_mp_pane

0xa5b4,	// (0x00048a86) main_msg_pane

0xa5b4,	// (0x00048a86) main_mup_eq_pane

0xa5b4,	// (0x00048a86) main_mup_pane

0xa8d4,	// (0x00048da6) main_notes_pane

0xa5b4,	// (0x00048a86) main_pec_pane

0xa5b4,	// (0x00048a86) main_phob_pane

0xa5b4,	// (0x00048a86) main_pinb_pane

0xa5b4,	// (0x00048a86) main_postcard_pane

0xa5b4,	// (0x00048a86) main_qdial_pane

0xaab8,	// (0x00048f8a) main_skin_pane

0xa5b4,	// (0x00048a86) main_smil2_pane

0xaab8,	// (0x00048f8a) main_smil_pane

0xaab8,	// (0x00048f8a) main_video_pane

0xaab8,	// (0x00048f8a) main_video_tele_pane

0xa80f,	// (0x00048ce1) main_viewer_pane_ParamLimits

0xa80f,	// (0x00048ce1) main_viewer_pane

0xaab8,	// (0x00048f8a) main_vorec_pane

0x5603,	// (0x00043ad5) popup_blid_sat_info_window_ParamLimits

0x5603,	// (0x00043ad5) popup_blid_sat_info_window

0x561d,	// (0x00043aef) popup_dyc_status_message_window_ParamLimits

0x561d,	// (0x00043aef) popup_dyc_status_message_window

0x562d,	// (0x00043aff) popup_grid_large_graphic_window_ParamLimits

0x562d,	// (0x00043aff) popup_grid_large_graphic_window

0x56a5,	// (0x00043b77) popup_loc_request_window_ParamLimits

0x56a5,	// (0x00043b77) popup_loc_request_window

0x56ed,	// (0x00043bbf) popup_wml_address_window_ParamLimits

0x56ed,	// (0x00043bbf) popup_wml_address_window

0x54a3,	// (0x00043975) call_muted_g1

0x5162,	// (0x00043634) popup_call_audio_conf_window_ParamLimits

0x5162,	// (0x00043634) popup_call_audio_conf_window

0x54b3,	// (0x00043985) popup_call_audio_first_window_ParamLimits

0x54b3,	// (0x00043985) popup_call_audio_first_window

0x54f3,	// (0x000439c5) popup_call_audio_in_window_ParamLimits

0x54f3,	// (0x000439c5) popup_call_audio_in_window

0x5517,	// (0x000439e9) popup_call_audio_out_window_ParamLimits

0x5517,	// (0x000439e9) popup_call_audio_out_window

0x5539,	// (0x00043a0b) popup_call_audio_second_window_ParamLimits

0x5539,	// (0x00043a0b) popup_call_audio_second_window

0x5569,	// (0x00043a3b) popup_call_audio_wait_window_ParamLimits

0x5569,	// (0x00043a3b) popup_call_audio_wait_window

0x558a,	// (0x00043a5c) popup_number_entry_window_ParamLimits

0x558a,	// (0x00043a5c) popup_number_entry_window

0xa1a1,	// (0x00048673) bg_popup_call_pane_cp05_ParamLimits

0xa1a1,	// (0x00048673) bg_popup_call_pane_cp05

0xa1c1,	// (0x00048693) popup_number_entry_window_t1

0xa1d4,	// (0x000486a6) popup_number_entry_window_t2

0xa1e6,	// (0x000486b8) popup_number_entry_window_t3

0x0003,

0xf0ca,	// (0x0004d59c) popup_number_entry_window_t

0xa1f8,	// (0x000486ca) text_title_cp2

0xa20b,	// (0x000486dd) bg_popup_call_pane_cp_ParamLimits

0xa20b,	// (0x000486dd) bg_popup_call_pane_cp

0xa219,	// (0x000486eb) call_thumbnail_pane

0xa221,	// (0x000486f3) popup_call_audio_in_window_g1_ParamLimits

0xa221,	// (0x000486f3) popup_call_audio_in_window_g1

0xa22d,	// (0x000486ff) popup_call_audio_in_window_g2_ParamLimits

0xa22d,	// (0x000486ff) popup_call_audio_in_window_g2

0xa239,	// (0x0004870b) popup_call_audio_in_window_g3_ParamLimits

0xa239,	// (0x0004870b) popup_call_audio_in_window_g3

0x0002,

0xf0d3,	// (0x0004d5a5) popup_call_audio_in_window_g_ParamLimits

0xf0d3,	// (0x0004d5a5) popup_call_audio_in_window_g

0xa245,	// (0x00048717) popup_call_audio_in_window_t1_ParamLimits

0xa245,	// (0x00048717) popup_call_audio_in_window_t1

0xa261,	// (0x00048733) popup_call_audio_in_window_t2_ParamLimits

0xa261,	// (0x00048733) popup_call_audio_in_window_t2

0xa27d,	// (0x0004874f) popup_call_audio_in_window_t3_ParamLimits

0xa27d,	// (0x0004874f) popup_call_audio_in_window_t3

0x0002,

0xf0da,	// (0x0004d5ac) popup_call_audio_in_window_t_ParamLimits

0xf0da,	// (0x0004d5ac) popup_call_audio_in_window_t

0xa20b,	// (0x000486dd) bg_popup_call_pane_cp01_ParamLimits

0xa20b,	// (0x000486dd) bg_popup_call_pane_cp01

0xa219,	// (0x000486eb) call_thumbnail_pane_cp02

0xa290,	// (0x00048762) call_type_pane_cp022

0xa298,	// (0x0004876a) popup_call_audio_out_window_g1_ParamLimits

0xa298,	// (0x0004876a) popup_call_audio_out_window_g1

0xa2aa,	// (0x0004877c) popup_call_audio_out_window_g2_ParamLimits

0xa2aa,	// (0x0004877c) popup_call_audio_out_window_g2

0xa2b6,	// (0x00048788) popup_call_audio_out_window_g3_ParamLimits

0xa2b6,	// (0x00048788) popup_call_audio_out_window_g3

0x0002,

0xf0e1,	// (0x0004d5b3) popup_call_audio_out_window_g_ParamLimits

0xf0e1,	// (0x0004d5b3) popup_call_audio_out_window_g

0xa2c8,	// (0x0004879a) popup_call_audio_out_window_t1_ParamLimits

0xa2c8,	// (0x0004879a) popup_call_audio_out_window_t1

0xa2e0,	// (0x000487b2) popup_call_audio_out_window_t2_ParamLimits

0xa2e0,	// (0x000487b2) popup_call_audio_out_window_t2

0x0001,

0xf0e8,	// (0x0004d5ba) popup_call_audio_out_window_t_ParamLimits

0xf0e8,	// (0x0004d5ba) popup_call_audio_out_window_t

0xa2f5,	// (0x000487c7) bg_popup_call_pane_ParamLimits

0xa2f5,	// (0x000487c7) bg_popup_call_pane

0x2233,	// (0x00040705) call_thumbnail_pane_cp_ParamLimits

0x2233,	// (0x00040705) call_thumbnail_pane_cp

0xa379,	// (0x0004884b) call_type_pane_cp01_ParamLimits

0xa379,	// (0x0004884b) call_type_pane_cp01

0xa3bd,	// (0x0004888f) popup_call_audio_first_window_g1_ParamLimits

0xa3bd,	// (0x0004888f) popup_call_audio_first_window_g1

0xa409,	// (0x000488db) popup_call_audio_first_window_g2_ParamLimits

0xa409,	// (0x000488db) popup_call_audio_first_window_g2

0x0001,

0xf0ed,	// (0x0004d5bf) popup_call_audio_first_window_g_ParamLimits

0xf0ed,	// (0x0004d5bf) popup_call_audio_first_window_g

0xa44d,	// (0x0004891f) popup_call_audio_first_window_t1_ParamLimits

0xa44d,	// (0x0004891f) popup_call_audio_first_window_t1

0xa4f9,	// (0x000489cb) popup_call_audio_first_window_t4_ParamLimits

0xa4f9,	// (0x000489cb) popup_call_audio_first_window_t4

0xa585,	// (0x00048a57) popup_call_audio_first_window_t5_ParamLimits

0xa585,	// (0x00048a57) popup_call_audio_first_window_t5

0x0002,

0xf0f2,	// (0x0004d5c4) popup_call_audio_first_window_t_ParamLimits

0xf0f2,	// (0x0004d5c4) popup_call_audio_first_window_t

0xa5b4,	// (0x00048a86) bg_popup_call_pane_cp02

0xa5be,	// (0x00048a90) call_type_pane_cp023

0xa5c6,	// (0x00048a98) popup_call_audio_wait_window_g1

0xa5ce,	// (0x00048aa0) popup_call_audio_wait_window_g2

0x0001,

0xf0f9,	// (0x0004d5cb) popup_call_audio_wait_window_g

0xa5d6,	// (0x00048aa8) popup_call_audio_wait_window_t3

0xa5e4,	// (0x00048ab6) bg_popup_call_pane_cp03_ParamLimits

0xa5e4,	// (0x00048ab6) bg_popup_call_pane_cp03

0xa644,	// (0x00048b16) call_thumbnail_pane_cp011_ParamLimits

0xa644,	// (0x00048b16) call_thumbnail_pane_cp011

0xa650,	// (0x00048b22) call_type_pane_cp034_ParamLimits

0xa650,	// (0x00048b22) call_type_pane_cp034

0xa68c,	// (0x00048b5e) popup_call_audio_second_window_g1_ParamLimits

0xa68c,	// (0x00048b5e) popup_call_audio_second_window_g1

0xa6c8,	// (0x00048b9a) popup_call_audio_second_window_g2_ParamLimits

0xa6c8,	// (0x00048b9a) popup_call_audio_second_window_g2

0x0001,

0xf0fe,	// (0x0004d5d0) popup_call_audio_second_window_g_ParamLimits

0xf0fe,	// (0x0004d5d0) popup_call_audio_second_window_g

0xa704,	// (0x00048bd6) popup_call_audio_second_window_t1_ParamLimits

0xa704,	// (0x00048bd6) popup_call_audio_second_window_t1

0xa785,	// (0x00048c57) popup_call_audio_second_window_t2_ParamLimits

0xa785,	// (0x00048c57) popup_call_audio_second_window_t2

0xa7bb,	// (0x00048c8d) popup_call_audio_second_window_t3_ParamLimits

0xa7bb,	// (0x00048c8d) popup_call_audio_second_window_t3

0x0002,

0xf103,	// (0x0004d5d5) popup_call_audio_second_window_t_ParamLimits

0xf103,	// (0x0004d5d5) popup_call_audio_second_window_t

0xa5b4,	// (0x00048a86) bg_popup_call_pane_cp04

0xa7f1,	// (0x00048cc3) list_conf_pane

0xa7f9,	// (0x00048ccb) popup_call_audio_conf_window_t1

0xa807,	// (0x00048cd9) call_thumbnail_pane_g1

0xa80f,	// (0x00048ce1) bg_pinb_pane_ParamLimits

0xa80f,	// (0x00048ce1) bg_pinb_pane

0xa81d,	// (0x00048cef) find_pinb_pane

0xa826,	// (0x00048cf8) listscroll_pinb_pane_ParamLimits

0xa826,	// (0x00048cf8) listscroll_pinb_pane

0xa835,	// (0x00048d07) pinb_bg_pane_g1

0x2257,	// (0x00040729) pinb_bg_pane_g2

0x2263,	// (0x00040735) pinb_bg_pane_g3

0x226f,	// (0x00040741) pinb_bg_pane_g4

0x227b,	// (0x0004074d) pinb_bg_pane_g5

0x2287,	// (0x00040759) pinb_bg_pane_g6

0x2292,	// (0x00040764) pinb_bg_pane_g7

0x229d,	// (0x0004076f) pinb_bg_pane_g8

0x22a8,	// (0x0004077a) pinb_bg_pane_g9

0x22b2,	// (0x00040784) pinb_bg_pane_g10

0x0009,

0xf10a,	// (0x0004d5dc) pinb_bg_pane_g

0x22cf,	// (0x000407a1) grid_pinb_pane

0x22da,	// (0x000407ac) list_pinb_pane

0x22e5,	// (0x000407b7) scroll_pane_cp01_ParamLimits

0x22e5,	// (0x000407b7) scroll_pane_cp01

0xa83f,	// (0x00048d11) find_pinb_pane_g1_ParamLimits

0xa83f,	// (0x00048d11) find_pinb_pane_g1

0xa857,	// (0x00048d29) find_pinb_pane_t1

0xa869,	// (0x00048d3b) find_pinb_pane_t2

0x0001,

0xf124,	// (0x0004d5f6) find_pinb_pane_t

0xa87e,	// (0x00048d50) input_focus_pane_cp01_ParamLimits

0xa87e,	// (0x00048d50) input_focus_pane_cp01

0x22f7,	// (0x000407c9) cell_pinb_pane_ParamLimits

0x22f7,	// (0x000407c9) cell_pinb_pane

0x231c,	// (0x000407ee) cell_pinb_pane_g1_ParamLimits

0x231c,	// (0x000407ee) cell_pinb_pane_g1

0x2331,	// (0x00040803) cell_pinb_pane_g2_ParamLimits

0x2331,	// (0x00040803) cell_pinb_pane_g2

0xa88a,	// (0x00048d5c) cell_pinb_pane_g3_ParamLimits

0xa88a,	// (0x00048d5c) cell_pinb_pane_g3

0x0002,

0xf129,	// (0x0004d5fb) cell_pinb_pane_g_ParamLimits

0xf129,	// (0x0004d5fb) cell_pinb_pane_g

0xa5b4,	// (0x00048a86) grid_highlight_pane_cp01

0x233d,	// (0x0004080f) list_pinb_item_pane_ParamLimits

0x233d,	// (0x0004080f) list_pinb_item_pane

0xa5b4,	// (0x00048a86) list_highlight_pane_cp02

0x235b,	// (0x0004082d) list_pinb_item_pane_g1_ParamLimits

0x235b,	// (0x0004082d) list_pinb_item_pane_g1

0x2368,	// (0x0004083a) list_pinb_item_pane_g2_ParamLimits

0x2368,	// (0x0004083a) list_pinb_item_pane_g2

0x2374,	// (0x00040846) list_pinb_item_pane_g3_ParamLimits

0x2374,	// (0x00040846) list_pinb_item_pane_g3

0x2385,	// (0x00040857) list_pinb_item_pane_g4_ParamLimits

0x2385,	// (0x00040857) list_pinb_item_pane_g4

0x0003,

0xf130,	// (0x0004d602) list_pinb_item_pane_g_ParamLimits

0xf130,	// (0x0004d602) list_pinb_item_pane_g

0x2391,	// (0x00040863) list_pinb_item_pane_t1_ParamLimits

0x2391,	// (0x00040863) list_pinb_item_pane_t1

0x23c2,	// (0x00040894) calc_display_pane

0x23e0,	// (0x000408b2) calc_paper_pane

0x23fc,	// (0x000408ce) grid_calc_pane

0xa5b4,	// (0x00048a86) bg_list_pane_cp01

0x2428,	// (0x000408fa) clock_g1

0x2430,	// (0x00040902) clock_g2

0x0001,

0xf139,	// (0x0004d60b) clock_g

0x243a,	// (0x0004090c) clock_t1_ParamLimits

0x243a,	// (0x0004090c) clock_t1

0x244f,	// (0x00040921) clock_t2_ParamLimits

0x244f,	// (0x00040921) clock_t2

0x2461,	// (0x00040933) clock_t3_ParamLimits

0x2461,	// (0x00040933) clock_t3

0x2473,	// (0x00040945) clock_t4_ParamLimits

0x2473,	// (0x00040945) clock_t4

0x2485,	// (0x00040957) clock_t5_ParamLimits

0x2485,	// (0x00040957) clock_t5

0x249a,	// (0x0004096c) clock_t6_ParamLimits

0x249a,	// (0x0004096c) clock_t6

0x24ac,	// (0x0004097e) clock_t7_ParamLimits

0x24ac,	// (0x0004097e) clock_t7

0x24be,	// (0x00040990) clock_t8_ParamLimits

0x24be,	// (0x00040990) clock_t8

0x24d4,	// (0x000409a6) clock_t9_ParamLimits

0x24d4,	// (0x000409a6) clock_t9

0x0008,

0xf13e,	// (0x0004d610) clock_t_ParamLimits

0xf13e,	// (0x0004d610) clock_t

0xa896,	// (0x00048d68) popup_clock_analogue_window_cp02

0xa896,	// (0x00048d68) popup_clock_digital_window_cp01

0xa89e,	// (0x00048d70) listscroll_help_pane

0xa5b4,	// (0x00048a86) phob_pre_status_pane

0xa8a8,	// (0x00048d7a) grid_qdial_pane

0xa80f,	// (0x00048ce1) listscroll_mce_pane

0xa80f,	// (0x00048ce1) bg_notes_pane

0xa8b2,	// (0x00048d84) list_notes_pane

0x24ea,	// (0x000409bc) scroll_pane_cp06

0xa8c0,	// (0x00048d92) bg_calc_paper_pane

0x24f9,	// (0x000409cb) list_calc_pane

0xa8d4,	// (0x00048da6) bg_calc_display_pane

0x2513,	// (0x000409e5) calc_display_pane_t1

0x2528,	// (0x000409fa) calc_display_pane_t2

0x253d,	// (0x00040a0f) calc_display_pane_t3

0x0002,

0xf151,	// (0x0004d623) calc_display_pane_t

0x254f,	// (0x00040a21) cell_calc_pane_ParamLimits

0x254f,	// (0x00040a21) cell_calc_pane

0xa8e0,	// (0x00048db2) bg_calc_paper_pane_g1

0xa8ec,	// (0x00048dbe) bg_calc_paper_pane_g2

0xa8f8,	// (0x00048dca) bg_calc_paper_pane_g3

0xa904,	// (0x00048dd6) bg_calc_paper_pane_g4

0xa910,	// (0x00048de2) bg_calc_paper_pane_g5

0x257e,	// (0x00040a50) bg_calc_paper_pane_g6

0x258f,	// (0x00040a61) bg_calc_paper_pane_g7

0x25a0,	// (0x00040a72) bg_calc_paper_pane_g8

0x0007,

0xf158,	// (0x0004d62a) bg_calc_paper_pane_g

0x25b3,	// (0x00040a85) calc_bg_paper_pane_g9

0x25c6,	// (0x00040a98) list_calc_item_pane_ParamLimits

0x25c6,	// (0x00040a98) list_calc_item_pane

0xa91c,	// (0x00048dee) list_calc_item_pane_g1

0x25e7,	// (0x00040ab9) list_calc_item_pane_t1_ParamLimits

0x25e7,	// (0x00040ab9) list_calc_item_pane_t1

0x25f9,	// (0x00040acb) list_calc_item_pane_t2_ParamLimits

0x25f9,	// (0x00040acb) list_calc_item_pane_t2

0x0001,

0xf169,	// (0x0004d63b) list_calc_item_pane_t_ParamLimits

0xf169,	// (0x0004d63b) list_calc_item_pane_t

0xa929,	// (0x00048dfb) cell_calc_pane_g1

0xa933,	// (0x00048e05) grid_highlight_pane_cp02

0xa955,	// (0x00048e27) bg_calc_display_pane_g1

0x2629,	// (0x00040afb) bg_calc_display_pane_g2

0xa95e,	// (0x00048e30) bg_calc_display_pane_g3

0x0002,

0xf173,	// (0x0004d645) bg_calc_display_pane_g

0x2633,	// (0x00040b05) cell_qdial_pane_ParamLimits

0x2633,	// (0x00040b05) cell_qdial_pane

0x2649,	// (0x00040b1b) cell_qdial_pane_g1_ParamLimits

0x2649,	// (0x00040b1b) cell_qdial_pane_g1

0x2656,	// (0x00040b28) cell_qdial_pane_g2_ParamLimits

0x2656,	// (0x00040b28) cell_qdial_pane_g2

0xa967,	// (0x00048e39) cell_qdial_pane_g3_ParamLimits

0xa967,	// (0x00048e39) cell_qdial_pane_g3

0x0003,

0xf17a,	// (0x0004d64c) cell_qdial_pane_g_ParamLimits

0xf17a,	// (0x0004d64c) cell_qdial_pane_g

0x2674,	// (0x00040b46) cell_qdial_pane_t1_ParamLimits

0x2674,	// (0x00040b46) cell_qdial_pane_t1

0x268c,	// (0x00040b5e) cell_qdial_pane_t2_ParamLimits

0x268c,	// (0x00040b5e) cell_qdial_pane_t2

0x269f,	// (0x00040b71) cell_qdial_pane_t3_ParamLimits

0x269f,	// (0x00040b71) cell_qdial_pane_t3

0x0002,

0xf183,	// (0x0004d655) cell_qdial_pane_t_ParamLimits

0xf183,	// (0x0004d655) cell_qdial_pane_t

0xa5b4,	// (0x00048a86) grid_highlight_pane_cp04

0xa973,	// (0x00048e45) thumbnail_qdial_pane_ParamLimits

0xa973,	// (0x00048e45) thumbnail_qdial_pane

0xa9cf,	// (0x00048ea1) list_help_pane

0xa9d8,	// (0x00048eaa) scroll_pane_cp02

0x26b2,	// (0x00040b84) help_list_pane_t1_ParamLimits

0x26b2,	// (0x00040b84) help_list_pane_t1

0x26d9,	// (0x00040bab) bg_notes_pane_g2

0x26e1,	// (0x00040bb3) bg_notes_pane_g3

0x26e9,	// (0x00040bbb) notes_bg_pane_g1

0x26f1,	// (0x00040bc3) notes_bg_pane_g4

0x26f9,	// (0x00040bcb) notes_bg_pane_g5

0x2701,	// (0x00040bd3) notes_bg_pane_g6

0x2709,	// (0x00040bdb) notes_bg_pane_g7

0x2711,	// (0x00040be3) notes_bg_pane_g8

0x2719,	// (0x00040beb) notes_bg_pane_g9

0x0006,

0xf1a1,	// (0x0004d673) notes_bg_pane_g

0x2721,	// (0x00040bf3) list_notes_text_pane_ParamLimits

0x2721,	// (0x00040bf3) list_notes_text_pane

0xaa0f,	// (0x00048ee1) list_notes_text_pane_g1

0x0b5c,	// (0x0003f02e) list_notes_text_pane_t1

0x2749,	// (0x00040c1b) listscroll_cale_week_pane

0x277f,	// (0x00040c51) bg_cale_heading_pane

0x27a8,	// (0x00040c7a) bg_cale_pane_cp01

0x27ca,	// (0x00040c9c) cale_week_corner_pane

0x27e9,	// (0x00040cbb) cale_week_day_heading_pane

0x2817,	// (0x00040ce9) cale_week_scroll_pane_g1

0x283b,	// (0x00040d0d) cale_week_scroll_pane_g2

0x2853,	// (0x00040d25) cale_week_scroll_pane_g3

0x286b,	// (0x00040d3d) cale_week_scroll_pane_g4

0x2883,	// (0x00040d55) cale_week_scroll_pane_g5

0x289b,	// (0x00040d6d) cale_week_scroll_pane_g6

0x28bb,	// (0x00040d8d) cale_week_scroll_pane_g7

0x28db,	// (0x00040dad) cale_week_scroll_pane_g8

0x28fb,	// (0x00040dcd) cale_week_scroll_pane_g9

0x2918,	// (0x00040dea) cale_week_scroll_pane_g10

0x2935,	// (0x00040e07) cale_week_scroll_pane_g11

0x2952,	// (0x00040e24) cale_week_scroll_pane_g12

0x296f,	// (0x00040e41) cale_week_scroll_pane_g13

0x2994,	// (0x00040e66) cale_week_scroll_pane_g14

0x29bd,	// (0x00040e8f) cale_week_scroll_pane_g15

0x000f,

0xf1b0,	// (0x0004d682) cale_week_scroll_pane_g

0x2a06,	// (0x00040ed8) cale_week_time_pane

0x2a26,	// (0x00040ef8) grid_cale_week_pane

0xaa3b,	// (0x00048f0d) scroll_pane_cp08

0x2a59,	// (0x00040f2b) cell_cale_week_pane_ParamLimits

0x2a59,	// (0x00040f2b) cell_cale_week_pane

0x2ae9,	// (0x00040fbb) cale_week_day_heading_pane_t1

0x2b31,	// (0x00041003) cale_week_day_heading_pane_t2

0x2b7e,	// (0x00041050) cale_week_day_heading_pane_t3

0x2bcb,	// (0x0004109d) cale_week_day_heading_pane_t4

0x2c18,	// (0x000410ea) cale_week_day_heading_pane_t5

0x2c65,	// (0x00041137) cale_week_day_heading_pane_t6

0x2cb2,	// (0x00041184) cale_week_day_heading_pane_t7

0x0006,

0xf1d1,	// (0x0004d6a3) cale_week_day_heading_pane_t

0xaa5d,	// (0x00048f2f) bg_cale_side_pane

0x2cfa,	// (0x000411cc) cale_week_time_pane_t1

0x2d3e,	// (0x00041210) cale_week_time_pane_t2

0x2d82,	// (0x00041254) cale_week_time_pane_t3

0x2dc6,	// (0x00041298) cale_week_time_pane_t4

0x2e0a,	// (0x000412dc) cale_week_time_pane_t5

0x2e4e,	// (0x00041320) cale_week_time_pane_t6

0x2e92,	// (0x00041364) cale_week_time_pane_t7

0x2ede,	// (0x000413b0) cale_week_time_pane_t8

0x0007,

0xf1e0,	// (0x0004d6b2) cale_week_time_pane_t

0x2f2c,	// (0x000413fe) cell_cale_week_pane_g2

0x2f50,	// (0x00041422) cell_cale_week_pane_g3_ParamLimits

0x2f50,	// (0x00041422) cell_cale_week_pane_g3

0xaa6b,	// (0x00048f3d) grid_highlight_pane_cp07

0xaa73,	// (0x00048f45) listscroll_gms_pane

0xaa7d,	// (0x00048f4f) grid_gms_pane

0xaa86,	// (0x00048f58) listscroll_gms_pane_g1

0xaa8e,	// (0x00048f60) listscroll_gms_pane_g2

0x0001,

0xf1f1,	// (0x0004d6c3) listscroll_gms_pane_g

0x2f68,	// (0x0004143a) scroll_pane_cp010

0x2f73,	// (0x00041445) cell_gms_pane_ParamLimits

0x2f73,	// (0x00041445) cell_gms_pane

0x2f86,	// (0x00041458) cell_gms_pane_g1

0xaa96,	// (0x00048f68) cell_gms_pane_g2

0xaa9e,	// (0x00048f70) cell_gms_pane_g3

0xaaa7,	// (0x00048f79) cell_gms_pane_g4

0x0003,

0xf1f6,	// (0x0004d6c8) cell_gms_pane_g

0xaab0,	// (0x00048f82) grid_highlight_pane_cp09

0x544b,	// (0x0004391d) phob_pre_status_pane_g1

0x5453,	// (0x00043925) phob_pre_status_pane_g2

0x545b,	// (0x0004392d) phob_pre_status_pane_g3

0x5463,	// (0x00043935) phob_pre_status_pane_g4

0x0004,

0xf5e1,	// (0x0004dab3) phob_pre_status_pane_g

0x5473,	// (0x00043945) phob_pre_status_pane_t1

0x5483,	// (0x00043955) phob_pre_status_pane_t2

0x5493,	// (0x00043965) phob_pre_status_pane_t3

0x0002,

0xf5ec,	// (0x0004dabe) phob_pre_status_pane_t

0xaab8,	// (0x00048f8a) bg_list_pane_cp05

0x2f96,	// (0x00041468) grid_vorec_pane

0x2fa2,	// (0x00041474) vorec_t1

0x2fb0,	// (0x00041482) vorec_t2

0x2fbe,	// (0x00041490) vorec_t3

0x2fcc,	// (0x0004149e) vorec_t4

0xa122,	// (0x000485f4) vorec_t5

0xa130,	// (0x00048602) vorec_t6

0x0004,

0xf1ff,	// (0x0004d6d1) vorec_t

0xa13e,	// (0x00048610) wait_bar_pane_cp01

0x2fe8,	// (0x000414ba) cell_vorec_pane_ParamLimits

0x2fe8,	// (0x000414ba) cell_vorec_pane

0x2ffd,	// (0x000414cf) cell_vorec_pane_g1

0xa5b4,	// (0x00048a86) grid_highlight_pane_cp05

0x3015,	// (0x000414e7) cams_zoom_pane

0x3021,	// (0x000414f3) image_vga_pane

0x3030,	// (0x00041502) main_camera_pane_g1

0x303e,	// (0x00041510) main_camera_pane_g2

0x304a,	// (0x0004151c) main_camera_pane_g3

0x3058,	// (0x0004152a) main_camera_pane_g4

0x3066,	// (0x00041538) main_camera_pane_g5

0x3074,	// (0x00041546) main_camera_pane_g6

0x3082,	// (0x00041554) main_camera_pane_g7

0x0007,

0xf20a,	// (0x0004d6dc) main_camera_pane_g

0x3090,	// (0x00041562) main_camera_pane_t1

0x30a2,	// (0x00041574) main_camera_pane_t2

0x0001,

0xf21b,	// (0x0004d6ed) main_camera_pane_t

0x30c5,	// (0x00041597) cams_zoom_pane_cp_ParamLimits

0x30c5,	// (0x00041597) cams_zoom_pane_cp

0x30e9,	// (0x000415bb) image_cif_pane_ParamLimits

0x30e9,	// (0x000415bb) image_cif_pane

0x3107,	// (0x000415d9) image_subqcif_pane

0x3111,	// (0x000415e3) main_video_pane_g1_ParamLimits

0x3111,	// (0x000415e3) main_video_pane_g1

0x3131,	// (0x00041603) main_video_pane_g2_ParamLimits

0x3131,	// (0x00041603) main_video_pane_g2

0x3161,	// (0x00041633) main_video_pane_g3_ParamLimits

0x3161,	// (0x00041633) main_video_pane_g3

0x318a,	// (0x0004165c) main_video_pane_g4_ParamLimits

0x318a,	// (0x0004165c) main_video_pane_g4

0x31b3,	// (0x00041685) main_video_pane_g5_ParamLimits

0x31b3,	// (0x00041685) main_video_pane_g5

0xaacc,	// (0x00048f9e) main_video_pane_g6_ParamLimits

0xaacc,	// (0x00048f9e) main_video_pane_g6

0x0006,

0xf220,	// (0x0004d6f2) main_video_pane_g_ParamLimits

0xf220,	// (0x0004d6f2) main_video_pane_g

0x31d5,	// (0x000416a7) main_video_pane_t1_ParamLimits

0x31d5,	// (0x000416a7) main_video_pane_t1

0xaae6,	// (0x00048fb8) cams_zoom_pane_g1

0xaaef,	// (0x00048fc1) cams_zoom_pane_g2

0xaaf8,	// (0x00048fca) cams_zoom_pane_g3

0xab01,	// (0x00048fd3) cams_zoom_pane_g4

0x0003,

0xf22f,	// (0x0004d701) cams_zoom_pane_g

0x321f,	// (0x000416f1) grid_cams_pane

0x322d,	// (0x000416ff) linegrid_cams_pane

0x3239,	// (0x0004170b) cell_cams_pane_ParamLimits

0x3239,	// (0x0004170b) cell_cams_pane

0xab0a,	// (0x00048fdc) cams_burst_image_pane

0xab12,	// (0x00048fe4) cell_cams_pane_g1

0xa5b4,	// (0x00048a86) grid_highlight_pane_cp03

0xa929,	// (0x00048dfb) mp_bg_pane_g1

0xa5b4,	// (0x00048a86) bg_list_pane_cp03

0xc734,	// (0x0004ac06) bg_mp_pane

0xc73c,	// (0x0004ac0e) grid_mp_pane

0xc744,	// (0x0004ac16) media_player_g1

0xc74e,	// (0x0004ac20) media_player_t1

0xc75c,	// (0x0004ac2e) media_player_t2

0xc76a,	// (0x0004ac3c) media_player_t3

0xc778,	// (0x0004ac4a) media_player_t4

0xc786,	// (0x0004ac58) media_player_t5

0xc794,	// (0x0004ac66) media_player_t6

0xc7a2,	// (0x0004ac74) media_player_t7

0x0006,

0xf5cb,	// (0x0004da9d) media_player_t

0xc7b0,	// (0x0004ac82) wait_bar_pane_cp02

0xf5b0,	// (0x0004da82) main_usb_pane_t

0x5442,	// (0x00043914) cell_mp_pane

0xa929,	// (0x00048dfb) cell_mp_pane_g1

0xa5b4,	// (0x00048a86) grid_highlight_pane_cp06

0xab1a,	// (0x00048fec) grid_skin_colour_pane

0xab22,	// (0x00048ff4) list_highlight_pane_cp03

0x324e,	// (0x00041720) skin_g1

0xab2a,	// (0x00048ffc) skin_t1

0xab39,	// (0x0004900b) skin_t2

0x0001,

0xf264,	// (0x0004d736) skin_t

0x3258,	// (0x0004172a) cell_skin_colour_pane_ParamLimits

0x3258,	// (0x0004172a) cell_skin_colour_pane

0xab47,	// (0x00049019) cell_skin_colour_pane_g1

0x32d8,	// (0x000417aa) call_video_g1_ParamLimits

0x32d8,	// (0x000417aa) call_video_g1

0x32e8,	// (0x000417ba) call_video_g2_ParamLimits

0x32e8,	// (0x000417ba) call_video_g2

0x0001,

0xf269,	// (0x0004d73b) call_video_g_ParamLimits

0xf269,	// (0x0004d73b) call_video_g

0x3338,	// (0x0004180a) call_video_uplink_pane_cp1_ParamLimits

0x3338,	// (0x0004180a) call_video_uplink_pane_cp1

0xab59,	// (0x0004902b) call_video_uplink_pane_cp2

0x3406,	// (0x000418d8) video_down_crop_pane_ParamLimits

0x3406,	// (0x000418d8) video_down_crop_pane

0x34f8,	// (0x000419ca) video_down_pane_ParamLimits

0x34f8,	// (0x000419ca) video_down_pane

0xab61,	// (0x00049033) video_down_subqcif_pane_ParamLimits

0xab61,	// (0x00049033) video_down_subqcif_pane

0xab7b,	// (0x0004904d) video_down_subqcif_pane_cp_ParamLimits

0xab7b,	// (0x0004904d) video_down_subqcif_pane_cp

0xaba3,	// (0x00049075) im_reading_pane_ParamLimits

0xaba3,	// (0x00049075) im_reading_pane

0x3615,	// (0x00041ae7) im_writing_pane_ParamLimits

0x3615,	// (0x00041ae7) im_writing_pane

0x3633,	// (0x00041b05) im_reading_pane_t1

0xabbd,	// (0x0004908f) list_im_pane

0xabce,	// (0x000490a0) scroll_pane_cp07

0x3675,	// (0x00041b47) im_writing_pane_t1_ParamLimits

0x3675,	// (0x00041b47) im_writing_pane_t1

0xabe7,	// (0x000490b9) im_writing_pane_t2_ParamLimits

0xabe7,	// (0x000490b9) im_writing_pane_t2

0x0001,

0xf273,	// (0x0004d745) im_writing_pane_t_ParamLimits

0xf273,	// (0x0004d745) im_writing_pane_t

0xa5b4,	// (0x00048a86) input_focus_pane_cp04

0xa5b4,	// (0x00048a86) input_focus_pane_cp05

0x3687,	// (0x00041b59) list_im_single_pane_ParamLimits

0x3687,	// (0x00041b59) list_im_single_pane

0x36a0,	// (0x00041b72) list_single_im_pane_t1

0x5406,	// (0x000438d8) blid_accuracy_pane

0x540e,	// (0x000438e0) blid_compass_pane

0x5418,	// (0x000438ea) main_location_t1

0x5426,	// (0x000438f8) main_location_t2

0x5434,	// (0x00043906) main_location_t3

0x0002,

0xf5da,	// (0x0004daac) main_location_t

0xa5b4,	// (0x00048a86) aid_levels_location

0xa929,	// (0x00048dfb) blid_accuracy_pane_g1

0xa929,	// (0x00048dfb) blid_accuracy_pane_g2

0x0001,

0xf2d5,	// (0x0004d7a7) blid_accuracy_pane_g

0xac2f,	// (0x00049101) wml_content_pane

0xac6d,	// (0x0004913f) wml_button_pane_ParamLimits

0xac6d,	// (0x0004913f) wml_button_pane

0x36af,	// (0x00041b81) wml_list_single_large_pane_ParamLimits

0x36af,	// (0x00041b81) wml_list_single_large_pane

0x36d1,	// (0x00041ba3) wml_list_single_medium_pane_ParamLimits

0x36d1,	// (0x00041ba3) wml_list_single_medium_pane

0x36f4,	// (0x00041bc6) wml_list_single_small_pane_ParamLimits

0x36f4,	// (0x00041bc6) wml_list_single_small_pane

0xac81,	// (0x00049153) wml_selection_box_pane_ParamLimits

0xac81,	// (0x00049153) wml_selection_box_pane

0xac94,	// (0x00049166) wml_list_single_pane_t1

0xaca3,	// (0x00049175) wml_list_single_medium_pane_t1

0xacb2,	// (0x00049184) wml_list_single_large_pane_t1

0xacc1,	// (0x00049193) input_focus_pane_cp02_ParamLimits

0xacc1,	// (0x00049193) input_focus_pane_cp02

0xacd4,	// (0x000491a6) wml_selection_box_pane_g1

0xacdd,	// (0x000491af) wml_selection_box_pane_t1_ParamLimits

0xacdd,	// (0x000491af) wml_selection_box_pane_t1

0xa80f,	// (0x00048ce1) bg_wml_button_pane_ParamLimits

0xa80f,	// (0x00048ce1) bg_wml_button_pane

0xacf5,	// (0x000491c7) wml_button_pane_g1

0xacfd,	// (0x000491cf) wml_button_pane_t1

0xacf5,	// (0x000491c7) wml_button_bg_pane_g1

0xad0d,	// (0x000491df) wml_button_bg_pane_g2

0xad15,	// (0x000491e7) wml_button_bg_pane_g3

0xad1d,	// (0x000491ef) wml_button_bg_pane_g4

0xad25,	// (0x000491f7) wml_button_bg_pane_g5

0xad2d,	// (0x000491ff) wml_button_bg_pane_g6

0xad35,	// (0x00049207) wml_button_bg_pane_g7

0xad3d,	// (0x0004920f) wml_button_bg_pane_g8

0xad45,	// (0x00049217) wml_button_bg_pane_g9

0x0008,

0xf278,	// (0x0004d74a) wml_button_bg_pane_g

0x371c,	// (0x00041bee) bg_list_pane_cp02

0xad4d,	// (0x0004921f) mce_header_pane_ParamLimits

0xad4d,	// (0x0004921f) mce_header_pane

0xad63,	// (0x00049235) mce_icon_pane

0xad63,	// (0x00049235) mce_image_pane

0xad6c,	// (0x0004923e) mce_text_pane_ParamLimits

0xad6c,	// (0x0004923e) mce_text_pane

0x3726,	// (0x00041bf8) scroll_pane_cp03

0xac65,	// (0x00049137) scroll_pane_cp04

0xad7f,	// (0x00049251) scroll_pane_cp05_ParamLimits

0xad7f,	// (0x00049251) scroll_pane_cp05

0x3730,	// (0x00041c02) mce_header_field_pane_ParamLimits

0x3730,	// (0x00041c02) mce_header_field_pane

0x3752,	// (0x00041c24) mce_header_field_pane_2_ParamLimits

0x3752,	// (0x00041c24) mce_header_field_pane_2

0x3768,	// (0x00041c3a) mce_header_field_pane_3

0x3770,	// (0x00041c42) list_single_mce_message_pane_ParamLimits

0x3770,	// (0x00041c42) list_single_mce_message_pane

0x378f,	// (0x00041c61) list_single_mce_smart_pane_ParamLimits

0x378f,	// (0x00041c61) list_single_mce_smart_pane

0xad8b,	// (0x0004925d) input_focus_pane_cp03

0xad94,	// (0x00049266) list_header_data_pane

0x37b9,	// (0x00041c8b) mce_header_field_pane_t1

0x37c9,	// (0x00041c9b) list_single_mce_header_pane_ParamLimits

0x37c9,	// (0x00041c9b) list_single_mce_header_pane

0xad9c,	// (0x0004926e) list_single_mce_header_pane_t1

0xadab,	// (0x0004927d) list_single_mce_message_pane_g1

0xadb3,	// (0x00049285) list_single_mce_message_pane_t1

0x380d,	// (0x00041cdf) bg_cale_heading_pane_cp01_ParamLimits

0x380d,	// (0x00041cdf) bg_cale_heading_pane_cp01

0xadc1,	// (0x00049293) bg_cale_pane_cp02_ParamLimits

0xadc1,	// (0x00049293) bg_cale_pane_cp02

0x3854,	// (0x00041d26) cale_month_corner_pane

0x3873,	// (0x00041d45) cale_month_day_heading_pane_ParamLimits

0x3873,	// (0x00041d45) cale_month_day_heading_pane

0x38ca,	// (0x00041d9c) cale_month_pane_g1_ParamLimits

0x38ca,	// (0x00041d9c) cale_month_pane_g1

0x3906,	// (0x00041dd8) cale_month_pane_g2_ParamLimits

0x3906,	// (0x00041dd8) cale_month_pane_g2

0x393e,	// (0x00041e10) cale_month_pane_g3_ParamLimits

0x393e,	// (0x00041e10) cale_month_pane_g3

0x3992,	// (0x00041e64) cale_month_pane_g4_ParamLimits

0x3992,	// (0x00041e64) cale_month_pane_g4

0x39e6,	// (0x00041eb8) cale_month_pane_g5_ParamLimits

0x39e6,	// (0x00041eb8) cale_month_pane_g5

0x3a3a,	// (0x00041f0c) cale_month_pane_g6_ParamLimits

0x3a3a,	// (0x00041f0c) cale_month_pane_g6

0x3a9e,	// (0x00041f70) cale_month_pane_g7_ParamLimits

0x3a9e,	// (0x00041f70) cale_month_pane_g7

0x3b02,	// (0x00041fd4) cale_month_pane_g8_ParamLimits

0x3b02,	// (0x00041fd4) cale_month_pane_g8

0x3b66,	// (0x00042038) cale_month_pane_g9_ParamLimits

0x3b66,	// (0x00042038) cale_month_pane_g9

0x3bbe,	// (0x00042090) cale_month_pane_g10_ParamLimits

0x3bbe,	// (0x00042090) cale_month_pane_g10

0x3c0c,	// (0x000420de) cale_month_pane_g11_ParamLimits

0x3c0c,	// (0x000420de) cale_month_pane_g11

0x3c58,	// (0x0004212a) cale_month_pane_g12_ParamLimits

0x3c58,	// (0x0004212a) cale_month_pane_g12

0x3ca8,	// (0x0004217a) cale_month_pane_g13_ParamLimits

0x3ca8,	// (0x0004217a) cale_month_pane_g13

0x000c,

0xf28b,	// (0x0004d75d) cale_month_pane_g_ParamLimits

0xf28b,	// (0x0004d75d) cale_month_pane_g

0x3cf8,	// (0x000421ca) cale_month_week_pane

0x3d18,	// (0x000421ea) grid_cale_month_pane_ParamLimits

0x3d18,	// (0x000421ea) grid_cale_month_pane

0x3d66,	// (0x00042238) cale_month_day_heading_pane_t1

0x3de8,	// (0x000422ba) cale_month_day_heading_pane_t2

0x3e75,	// (0x00042347) cale_month_day_heading_pane_t3

0x3f02,	// (0x000423d4) cale_month_day_heading_pane_t4

0x3f8f,	// (0x00042461) cale_month_day_heading_pane_t5

0x4024,	// (0x000424f6) cale_month_day_heading_pane_t6

0x40c1,	// (0x00042593) cale_month_day_heading_pane_t7

0x0006,

0xf2a6,	// (0x0004d778) cale_month_day_heading_pane_t

0xaa5d,	// (0x00048f2f) bg_cale_side_pane_cp01

0x415e,	// (0x00042630) cale_month_week_pane_t1

0x4177,	// (0x00042649) cale_month_week_pane_t2

0x4190,	// (0x00042662) cale_month_week_pane_t3

0x41a9,	// (0x0004267b) cale_month_week_pane_t4

0x41c2,	// (0x00042694) cale_month_week_pane_t5

0x41dd,	// (0x000426af) cale_month_week_pane_t6

0x0005,

0xf2b5,	// (0x0004d787) cale_month_week_pane_t

0x41fe,	// (0x000426d0) cell_cale_month_pane_ParamLimits

0x41fe,	// (0x000426d0) cell_cale_month_pane

0x4320,	// (0x000427f2) cell_cale_month_pane_g1

0x432c,	// (0x000427fe) cell_cale_month_pane_t1_ParamLimits

0x432c,	// (0x000427fe) cell_cale_month_pane_t1

0xaa6b,	// (0x00048f3d) grid_highlight_pane_cp08

0xa929,	// (0x00048dfb) main_smil_g1

0x434c,	// (0x0004281e) smil_status_pane

0xae00,	// (0x000492d2) smil_text_pane

0xc652,	// (0x0004ab24) bg_popup_call3_rect_pane_g8

0xc65a,	// (0x0004ab2c) bg_popup_call3_rect_pane_g9

0x0008,

0xf56e,	// (0x0004da40) bg_popup_call3_rect_pane_g

0xc8e8,	// (0x0004adba) smil_status_volume_pane_g1

0x435f,	// (0x00042831) smil_status_pane_t1

0x57fa,	// (0x00043ccc) volume_smil_pane

0xae0a,	// (0x000492dc) list_smil_text_pane

0x4376,	// (0x00042848) scroll_pane_cp011

0x4381,	// (0x00042853) smil_text_list_pane_t1_ParamLimits

0x4381,	// (0x00042853) smil_text_list_pane_t1

0x43d3,	// (0x000428a5) aid_volume_smil_ParamLimits

0x43d3,	// (0x000428a5) aid_volume_smil

0xa929,	// (0x00048dfb) smil_volume_pane_g1

0xa929,	// (0x00048dfb) smil_volume_pane_g2

0x0001,

0xf2d5,	// (0x0004d7a7) smil_volume_pane_g

0x2749,	// (0x00040c1b) listscroll_cale_day_pane

0xae14,	// (0x000492e6) bg_cale_pane

0xae2c,	// (0x000492fe) list_cale_pane

0xae4f,	// (0x00049321) scroll_pane_cp09

0xae60,	// (0x00049332) cale_bg_pane_g1

0xae68,	// (0x0004933a) cale_bg_pane_g2

0xae70,	// (0x00049342) cale_bg_pane_g3

0xae78,	// (0x0004934a) cale_bg_pane_g4

0xae80,	// (0x00049352) cale_bg_pane_g5

0xae88,	// (0x0004935a) cale_bg_pane_g6

0xae90,	// (0x00049362) cale_bg_pane_g7

0xae98,	// (0x0004936a) cale_bg_pane_g8

0xaea0,	// (0x00049372) cale_bg_pane_g9

0x0008,

0xf2da,	// (0x0004d7ac) cale_bg_pane_g

0x43f5,	// (0x000428c7) list_cale_time_pane_ParamLimits

0x43f5,	// (0x000428c7) list_cale_time_pane

0xaeb0,	// (0x00049382) list_cale_time_pane_g1_ParamLimits

0xaeb0,	// (0x00049382) list_cale_time_pane_g1

0xaebc,	// (0x0004938e) list_cale_time_pane_g2_ParamLimits

0xaebc,	// (0x0004938e) list_cale_time_pane_g2

0x4409,	// (0x000428db) list_cale_time_pane_g3_ParamLimits

0x4409,	// (0x000428db) list_cale_time_pane_g3

0x4417,	// (0x000428e9) list_cale_time_pane_g4_ParamLimits

0x4417,	// (0x000428e9) list_cale_time_pane_g4

0x4425,	// (0x000428f7) list_cale_time_pane_g5_ParamLimits

0x4425,	// (0x000428f7) list_cale_time_pane_g5

0x0005,

0xf2ed,	// (0x0004d7bf) list_cale_time_pane_g_ParamLimits

0xf2ed,	// (0x0004d7bf) list_cale_time_pane_g

0xaed6,	// (0x000493a8) list_cale_time_pane_t1_ParamLimits

0xaed6,	// (0x000493a8) list_cale_time_pane_t1

0xaefe,	// (0x000493d0) list_cale_time_pane_t2_ParamLimits

0xaefe,	// (0x000493d0) list_cale_time_pane_t2

0x471d,	// (0x00042bef) aid_blid_cardinal_pane

0x475f,	// (0x00042c31) compass_pane_t4

0xaf26,	// (0x000493f8) list_cale_time_pane_t4_ParamLimits

0xaf26,	// (0x000493f8) list_cale_time_pane_t4

0x476d,	// (0x00042c3f) compass_pane_t5

0x477d,	// (0x00042c4f) compass_pane_t6

0x478b,	// (0x00042c5d) compass_pane_t7

0xb342,	// (0x00049814) navi_pane_cc_t1

0xb48f,	// (0x00049961) aid_phob_thumbnail_center_pane

0x4f02,	// (0x000433d4) main_postcard_pane_g4_ParamLimits

0x0002,

0xf2fa,	// (0x0004d7cc) list_cale_time_pane_t_ParamLimits

0xf2fa,	// (0x0004d7cc) list_cale_time_pane_t

0xa20b,	// (0x000486dd) bg_popup_window_pane_cp02_ParamLimits

0xa20b,	// (0x000486dd) bg_popup_window_pane_cp02

0xaf4e,	// (0x00049420) heading_pane_cp01_ParamLimits

0xaf4e,	// (0x00049420) heading_pane_cp01

0xaf5a,	// (0x0004942c) loc_req_pane_ParamLimits

0xaf5a,	// (0x0004942c) loc_req_pane

0xaf6a,	// (0x0004943c) loc_type_pane_ParamLimits

0xaf6a,	// (0x0004943c) loc_type_pane

0xaf7c,	// (0x0004944e) loc_type_pane_t1_ParamLimits

0xaf7c,	// (0x0004944e) loc_type_pane_t1

0xaf8e,	// (0x00049460) loc_type_pane_t2_ParamLimits

0xaf8e,	// (0x00049460) loc_type_pane_t2

0xafa0,	// (0x00049472) loc_type_pane_t3_ParamLimits

0xafa0,	// (0x00049472) loc_type_pane_t3

0x0002,

0xf301,	// (0x0004d7d3) loc_type_pane_t_ParamLimits

0xf301,	// (0x0004d7d3) loc_type_pane_t

0xafb2,	// (0x00049484) list_loc_req_pane

0xafbc,	// (0x0004948e) scroll_pane_cp012

0x4433,	// (0x00042905) list_single_loc_request_popup_menu_pane_ParamLimits

0x4433,	// (0x00042905) list_single_loc_request_popup_menu_pane

0xafc7,	// (0x00049499) list_single_loc_request_popup_menu_pane_g1_ParamLimits

0xafc7,	// (0x00049499) list_single_loc_request_popup_menu_pane_g1

0xafd3,	// (0x000494a5) list_single_loc_request_popup_menu_pane_g2_ParamLimits

0xafd3,	// (0x000494a5) list_single_loc_request_popup_menu_pane_g2

0x0001,

0xf308,	// (0x0004d7da) list_single_loc_request_popup_menu_pane_g_ParamLimits

0xf308,	// (0x0004d7da) list_single_loc_request_popup_menu_pane_g

0xafdf,	// (0x000494b1) list_single_loc_request_popup_menu_pane_t1_ParamLimits

0xafdf,	// (0x000494b1) list_single_loc_request_popup_menu_pane_t1

0x4445,	// (0x00042917) bg_popup_window_pane_cp03_ParamLimits

0x4445,	// (0x00042917) bg_popup_window_pane_cp03

0x4453,	// (0x00042925) heading_loc_req_pane_ParamLimits

0x4453,	// (0x00042925) heading_loc_req_pane

0x445f,	// (0x00042931) popup_dyc_status_message_window_g1_ParamLimits

0x445f,	// (0x00042931) popup_dyc_status_message_window_g1

0x446b,	// (0x0004293d) popup_dyc_status_message_window_t1_ParamLimits

0x446b,	// (0x0004293d) popup_dyc_status_message_window_t1

0x447d,	// (0x0004294f) popup_dyc_status_message_window_t2_ParamLimits

0x447d,	// (0x0004294f) popup_dyc_status_message_window_t2

0x448f,	// (0x00042961) popup_dyc_status_message_window_t3_ParamLimits

0x448f,	// (0x00042961) popup_dyc_status_message_window_t3

0x0002,

0xf30d,	// (0x0004d7df) popup_dyc_status_message_window_t_ParamLimits

0xf30d,	// (0x0004d7df) popup_dyc_status_message_window_t

0xa5b4,	// (0x00048a86) bg_heading_pane_cp01

0xaff5,	// (0x000494c7) heading_loc_req_pane_g1

0xaffd,	// (0x000494cf) heading_loc_req_pane_g2

0xb005,	// (0x000494d7) heading_loc_req_pane_g3

0x0002,

0xf314,	// (0x0004d7e6) heading_loc_req_pane_g

0xb00d,	// (0x000494df) heading_loc_req_pane_t1

0xb01d,	// (0x000494ef) bg_popup_sub_pane_cp01_ParamLimits

0xb01d,	// (0x000494ef) bg_popup_sub_pane_cp01

0xb02b,	// (0x000494fd) popup_cale_events_window_g1_ParamLimits

0xb02b,	// (0x000494fd) popup_cale_events_window_g1

0xb04b,	// (0x0004951d) popup_cale_events_window_g2_ParamLimits

0xb04b,	// (0x0004951d) popup_cale_events_window_g2

0x0001,

0xf348,	// (0x0004d81a) popup_cale_events_window_g_ParamLimits

0xf348,	// (0x0004d81a) popup_cale_events_window_g

0xb06b,	// (0x0004953d) popup_cale_events_window_t1_ParamLimits

0xb06b,	// (0x0004953d) popup_cale_events_window_t1

0xb07d,	// (0x0004954f) popup_cale_events_window_t2_ParamLimits

0xb07d,	// (0x0004954f) popup_cale_events_window_t2

0xb0bb,	// (0x0004958d) popup_cale_events_window_t3_ParamLimits

0xb0bb,	// (0x0004958d) popup_cale_events_window_t3

0xb0f5,	// (0x000495c7) popup_cale_events_window_t4_ParamLimits

0xb0f5,	// (0x000495c7) popup_cale_events_window_t4

0x0003,

0xf34d,	// (0x0004d81f) popup_cale_events_window_t_ParamLimits

0xf34d,	// (0x0004d81f) popup_cale_events_window_t

0x44b9,	// (0x0004298b) call_type_pane

0xb2d5,	// (0x000497a7) popup_call_status_window_g1

0x44c5,	// (0x00042997) popup_call_status_window_g2

0x44d1,	// (0x000429a3) popup_call_status_window_g3

0x0002,

0xf356,	// (0x0004d828) popup_call_status_window_g

0xb12b,	// (0x000495fd) call_type_pane_g1

0xb134,	// (0x00049606) call_type_pane_g2

0x0001,

0xf35d,	// (0x0004d82f) call_type_pane_g

0xa5b4,	// (0x00048a86) bg_popup_sub_pane_cp02

0xb13d,	// (0x0004960f) listscroll_popup_wml_pane

0xb145,	// (0x00049617) list_wml_pane

0xb14f,	// (0x00049621) scroll_pane_cp013

0xb15a,	// (0x0004962c) list_single_graphic_popup_wml_pane_ParamLimits

0xb15a,	// (0x0004962c) list_single_graphic_popup_wml_pane

0xa929,	// (0x00048dfb) list_single_graphic_popup_wml_pane_g1

0xb16e,	// (0x00049640) list_single_graphic_popup_wml_pane_g2

0x0001,

0xf362,	// (0x0004d834) list_single_graphic_popup_wml_pane_g

0xb176,	// (0x00049648) list_single_graphic_popup_wml_pane_t1

0xb18c,	// (0x0004965e) aid_call_pane

0xa807,	// (0x00048cd9) popup_clock_analogue_window_g1

0xa807,	// (0x00048cd9) popup_clock_analogue_window_g2

0x44dd,	// (0x000429af) popup_clock_analogue_window_g3

0x44dd,	// (0x000429af) popup_clock_analogue_window_g4

0xa929,	// (0x00048dfb) popup_clock_analogue_window_g5

0x0004,

0xf367,	// (0x0004d839) popup_clock_analogue_window_g

0x44e5,	// (0x000429b7) popup_clock_analogue_window_t1

0x44f3,	// (0x000429c5) clock_digital_number_pane_ParamLimits

0x44f3,	// (0x000429c5) clock_digital_number_pane

0x44ff,	// (0x000429d1) clock_digital_number_pane_cp02_ParamLimits

0x44ff,	// (0x000429d1) clock_digital_number_pane_cp02

0x450b,	// (0x000429dd) clock_digital_number_pane_cp03_ParamLimits

0x450b,	// (0x000429dd) clock_digital_number_pane_cp03

0x4517,	// (0x000429e9) clock_digital_number_pane_cp04_ParamLimits

0x4517,	// (0x000429e9) clock_digital_number_pane_cp04

0x4523,	// (0x000429f5) clock_digital_separator_pane_ParamLimits

0x4523,	// (0x000429f5) clock_digital_separator_pane

0x452f,	// (0x00042a01) popup_clock_digital_window_t1

0xa929,	// (0x00048dfb) clock_digital_number_pane_g1

0xa929,	// (0x00048dfb) clock_digital_number_pane_g2

0x0001,

0xf2d5,	// (0x0004d7a7) clock_digital_number_pane_g

0xa929,	// (0x00048dfb) clock_digital_separator_pane_g1

0xa929,	// (0x00048dfb) clock_digital_separator_pane_g2

0x0001,

0xf2d5,	// (0x0004d7a7) clock_digital_separator_pane_g

0xa5b4,	// (0x00048a86) bg_popup_window_pane_cp04

0xb194,	// (0x00049666) heading_pane_cp03

0xb19c,	// (0x0004966e) listscroll_popup_gms_pane

0xb1a4,	// (0x00049676) grid_large_graphic_popup_pane

0xb1ae,	// (0x00049680) listscroll_popup_gms_pane_g1

0xb1b6,	// (0x00049688) listscroll_popup_gms_pane_g2

0x0001,

0xf372,	// (0x0004d844) listscroll_popup_gms_pane_g

0xac65,	// (0x00049137) scroll_pane_cp014

0x454c,	// (0x00042a1e) cell_large_graphic_popup_pane_ParamLimits

0x454c,	// (0x00042a1e) cell_large_graphic_popup_pane

0x4566,	// (0x00042a38) cell_large_graphic_popup_pane_g1_ParamLimits

0x4566,	// (0x00042a38) cell_large_graphic_popup_pane_g1

0xb1be,	// (0x00049690) cell_large_graphic_popup_pane_g2_ParamLimits

0xb1be,	// (0x00049690) cell_large_graphic_popup_pane_g2

0xb1ca,	// (0x0004969c) cell_large_graphic_popup_pane_g3_ParamLimits

0xb1ca,	// (0x0004969c) cell_large_graphic_popup_pane_g3

0xb1d7,	// (0x000496a9) cell_large_graphic_popup_pane_g4_ParamLimits

0xb1d7,	// (0x000496a9) cell_large_graphic_popup_pane_g4

0x0003,

0xf377,	// (0x0004d849) cell_large_graphic_popup_pane_g_ParamLimits

0xf377,	// (0x0004d849) cell_large_graphic_popup_pane_g

0xb1e7,	// (0x000496b9) grid_highlight_pane_cp010

0xa929,	// (0x00048dfb) bg_popup_call_pane_g1

0xb1f1,	// (0x000496c3) list_single_graphic_popup_conf_pane_ParamLimits

0xb1f1,	// (0x000496c3) list_single_graphic_popup_conf_pane

0xb203,	// (0x000496d5) list_highlight_pane_cp01

0xb20c,	// (0x000496de) list_single_graphic_popup_conf_pane_g1

0xb214,	// (0x000496e6) list_single_graphic_popup_conf_pane_g2

0x0001,

0xf380,	// (0x0004d852) list_single_graphic_popup_conf_pane_g

0xb21c,	// (0x000496ee) list_single_graphic_popup_conf_pane_t1

0xb22a,	// (0x000496fc) linegrid_cams_pane_g1

0x4572,	// (0x00042a44) linegrid_cams_pane_g2

0xaa9e,	// (0x00048f70) linegrid_cams_pane_g3

0xb233,	// (0x00049705) linegrid_cams_pane_g4

0x457b,	// (0x00042a4d) linegrid_cams_pane_g5

0x4584,	// (0x00042a56) linegrid_cams_pane_g6

0xaaa7,	// (0x00048f79) linegrid_cams_pane_g7

0x0006,

0xf385,	// (0x0004d857) linegrid_cams_pane_g

0xb23c,	// (0x0004970e) popup_clock_analogue_window

0xb23c,	// (0x0004970e) popup_clock_digital_window

0xa5b4,	// (0x00048a86) popup_phob_thumbnail_window

0xa929,	// (0x00048dfb) call_video_uplink_pane_g1

0xb245,	// (0x00049717) call_video_uplink_pane_g2

0x0001,

0xf394,	// (0x0004d866) call_video_uplink_pane_g

0xb24d,	// (0x0004971f) video_uplink_pane

0xb255,	// (0x00049727) mce_image_pane_g1

0x458f,	// (0x00042a61) mce_image_pane_g2

0x4599,	// (0x00042a6b) mce_image_pane_g3

0x45a3,	// (0x00042a75) mce_image_pane_g4

0x45ab,	// (0x00042a7d) mce_image_pane_g5

0x0004,

0xf399,	// (0x0004d86b) mce_image_pane_g

0xb25f,	// (0x00049731) control_top_pane_stacon_cp01_ParamLimits

0xb25f,	// (0x00049731) control_top_pane_stacon_cp01

0xb273,	// (0x00049745) uni_indicator_pane_stacon_cp01_ParamLimits

0xb273,	// (0x00049745) uni_indicator_pane_stacon_cp01

0xb284,	// (0x00049756) bg_popup_sub_pane_cp03

0x45b3,	// (0x00042a85) chi_dic_find_pane

0x45bb,	// (0x00042a8d) listscroll_chi_dic_pane

0x45c4,	// (0x00042a96) main_pane_chidic_g1

0x45d7,	// (0x00042aa9) chi_dic_find_pane_t1

0xb28e,	// (0x00049760) find_chidic_pane

0xb297,	// (0x00049769) chi_dic_list_pane_ParamLimits

0xb297,	// (0x00049769) chi_dic_list_pane

0xb2a8,	// (0x0004977a) scroll_pane_cp020

0x45e5,	// (0x00042ab7) find_chidic_pane_t1

0xa5b4,	// (0x00048a86) input_focus_pane_cp06

0x45f4,	// (0x00042ac6) list_chi_dic_pane_ParamLimits

0x45f4,	// (0x00042ac6) list_chi_dic_pane

0x4609,	// (0x00042adb) list_chi_dic_pane_t1_ParamLimits

0x4609,	// (0x00042adb) list_chi_dic_pane_t1

0xa5b4,	// (0x00048a86) list_highlight_pane_cp020

0xb2b0,	// (0x00049782) bg_cale_heading_pane_g1

0x461c,	// (0x00042aee) bg_cale_heading_pane_g2

0x4624,	// (0x00042af6) bg_cale_heading_pane_g3

0x462c,	// (0x00042afe) bg_cale_heading_pane_g4

0x4636,	// (0x00042b08) bg_cale_heading_pane_g5

0x4640,	// (0x00042b12) bg_cale_heading_pane_g6

0x4648,	// (0x00042b1a) bg_cale_heading_pane_g7

0x4650,	// (0x00042b22) bg_cale_heading_pane_g8

0x465a,	// (0x00042b2c) bg_cale_heading_pane_g9

0x0008,

0xf3a4,	// (0x0004d876) bg_cale_heading_pane_g

0xb2b0,	// (0x00049782) bg_cale_side_pane_g1

0x4664,	// (0x00042b36) bg_cale_side_pane_g2

0x466e,	// (0x00042b40) bg_cale_side_pane_g3

0x4678,	// (0x00042b4a) bg_cale_side_pane_g4

0x4682,	// (0x00042b54) bg_cale_side_pane_g5

0x468c,	// (0x00042b5e) bg_cale_side_pane_g6

0x4696,	// (0x00042b68) bg_cale_side_pane_g7

0x46a0,	// (0x00042b72) bg_cale_side_pane_g8

0x46a8,	// (0x00042b7a) bg_cale_side_pane_g9

0x0008,

0xf3b7,	// (0x0004d889) bg_cale_side_pane_g

0x46b0,	// (0x00042b82) popup_call_status_window_ParamLimits

0x46b0,	// (0x00042b82) popup_call_status_window

0xb2b8,	// (0x0004978a) stacon_top_pane

0xb2c0,	// (0x00049792) status_pane_ParamLimits

0xb2c0,	// (0x00049792) status_pane

0xb2e3,	// (0x000497b5) status_small_pane

0xb2eb,	// (0x000497bd) control_pane

0xa5b4,	// (0x00048a86) stacon_bottom_pane

0xb2f3,	// (0x000497c5) list_single_mce_smart_pane_t1_ParamLimits

0xb2f3,	// (0x000497c5) list_single_mce_smart_pane_t1

0xb306,	// (0x000497d8) list_single_mce_smart_pane_t2_ParamLimits

0xb306,	// (0x000497d8) list_single_mce_smart_pane_t2

0x0001,

0xf3ca,	// (0x0004d89c) list_single_mce_smart_pane_t_ParamLimits

0xf3ca,	// (0x0004d89c) list_single_mce_smart_pane_t

0x46bc,	// (0x00042b8e) compass_pane

0x46c7,	// (0x00042b99) main_location2_pane_t1

0x46dd,	// (0x00042baf) main_location2_pane_t2

0x46f3,	// (0x00042bc5) main_location2_pane_t3

0x0003,

0xf3cf,	// (0x0004d8a1) main_location2_pane_t

0xb325,	// (0x000497f7) compass_pane_g1_ParamLimits

0xb325,	// (0x000497f7) compass_pane_g1

0x4741,	// (0x00042c13) compass_pane_t1

0x4750,	// (0x00042c22) compass_pane_t2

0x0005,

0xf3d8,	// (0x0004d8aa) compass_pane_t

0x479b,	// (0x00042c6d) text_secondary_cp61

0xb339,	// (0x0004980b) navi_pane_cams_g5

0xb35c,	// (0x0004982e) navi_pane_im_t1

0xb36a,	// (0x0004983c) navi_pane_mp_g1_ParamLimits

0xb36a,	// (0x0004983c) navi_pane_mp_g1

0xb37e,	// (0x00049850) navi_pane_mp_g2_ParamLimits

0xb37e,	// (0x00049850) navi_pane_mp_g2

0xb38a,	// (0x0004985c) navi_pane_mp_g3_ParamLimits

0xb38a,	// (0x0004985c) navi_pane_mp_g3

0x0002,

0xf3ec,	// (0x0004d8be) navi_pane_mp_g_ParamLimits

0xf3ec,	// (0x0004d8be) navi_pane_mp_g

0xb396,	// (0x00049868) navi_pane_mp_t1

0xb3a4,	// (0x00049876) navi_pane_mp_t2

0x0002,

0xf3f3,	// (0x0004d8c5) navi_pane_mp_t

0xb3e0,	// (0x000498b2) navi_pane_vt_g1

0xb396,	// (0x00049868) navi_pane_vt_t1

0xb3e8,	// (0x000498ba) navi_slider_pane

0xaab8,	// (0x00048f8a) zooming_pane

0xb3f0,	// (0x000498c2) navi_slider_pane_g1

0x48d0,	// (0x00042da2) navi_slider_pane_g2

0x0006,

0xf3fa,	// (0x0004d8cc) navi_slider_pane_g

0xb414,	// (0x000498e6) aid_levels_zoom

0xb41c,	// (0x000498ee) zooming_pane_g1

0xb424,	// (0x000498f6) zooming_pane_g2

0xb424,	// (0x000498f6) zooming_pane_g3

0x0002,

0xf409,	// (0x0004d8db) zooming_pane_g

0xb42c,	// (0x000498fe) level_10_zoom

0xb435,	// (0x00049907) level_11_zoom

0xb43e,	// (0x00049910) level_1_zoom

0xb447,	// (0x00049919) level_2_zoom

0xb450,	// (0x00049922) level_3_zoom

0xb459,	// (0x0004992b) level_4_zoom

0xb462,	// (0x00049934) level_5_zoom

0xb46b,	// (0x0004993d) level_6_zoom

0xb474,	// (0x00049946) level_7_zoom

0xb47d,	// (0x0004994f) level_8_zoom

0xb486,	// (0x00049958) level_9_zoom

0xb497,	// (0x00049969) popup_phob_thumbnail_window_g1

0xb49f,	// (0x00049971) popup_phob_thumbnail_window_g2

0x0001,

0xf410,	// (0x0004d8e2) popup_phob_thumbnail_window_g

0xc7b8,	// (0x0004ac8a) level_1_location

0xc7c0,	// (0x0004ac92) level_2_location

0xc7c8,	// (0x0004ac9a) level_3_location

0xc7d0,	// (0x0004aca2) level_4_location

0xaab8,	// (0x00048f8a) level_5_location

0x48e2,	// (0x00042db4) mce_icon_pane_g1

0x48ea,	// (0x00042dbc) mce_icon_pane_g2

0x0001,

0xf415,	// (0x0004d8e7) mce_icon_pane_g

0x48f2,	// (0x00042dc4) main_mup_pane_g1_ParamLimits

0x48f2,	// (0x00042dc4) main_mup_pane_g1

0x490a,	// (0x00042ddc) main_mup_pane_g2_ParamLimits

0x490a,	// (0x00042ddc) main_mup_pane_g2

0x4926,	// (0x00042df8) main_mup_pane_g3_ParamLimits

0x4926,	// (0x00042df8) main_mup_pane_g3

0x4942,	// (0x00042e14) main_mup_pane_g4_ParamLimits

0x4942,	// (0x00042e14) main_mup_pane_g4

0x495e,	// (0x00042e30) main_mup_pane_g5_ParamLimits

0x495e,	// (0x00042e30) main_mup_pane_g5

0x497f,	// (0x00042e51) main_mup_pane_g6_ParamLimits

0x497f,	// (0x00042e51) main_mup_pane_g6

0x499f,	// (0x00042e71) main_mup_pane_g7_ParamLimits

0x499f,	// (0x00042e71) main_mup_pane_g7

0x49c3,	// (0x00042e95) main_mup_pane_g8_ParamLimits

0x49c3,	// (0x00042e95) main_mup_pane_g8

0x49e7,	// (0x00042eb9) main_mup_pane_g9_ParamLimits

0x49e7,	// (0x00042eb9) main_mup_pane_g9

0x4a0a,	// (0x00042edc) main_mup_pane_g10_ParamLimits

0x4a0a,	// (0x00042edc) main_mup_pane_g10

0x4a2d,	// (0x00042eff) main_mup_pane_g11_ParamLimits

0x4a2d,	// (0x00042eff) main_mup_pane_g11

0x4a4d,	// (0x00042f1f) main_mup_pane_g12_ParamLimits

0x4a4d,	// (0x00042f1f) main_mup_pane_g12

0x4a5b,	// (0x00042f2d) main_mup_pane_g13_ParamLimits

0x4a5b,	// (0x00042f2d) main_mup_pane_g13

0x000c,

0xf41a,	// (0x0004d8ec) main_mup_pane_g_ParamLimits

0xf41a,	// (0x0004d8ec) main_mup_pane_g

0x4a71,	// (0x00042f43) main_mup_pane_t1_ParamLimits

0x4a71,	// (0x00042f43) main_mup_pane_t1

0x4a90,	// (0x00042f62) main_mup_pane_t2_ParamLimits

0x4a90,	// (0x00042f62) main_mup_pane_t2

0x4aaa,	// (0x00042f7c) main_mup_pane_t3_ParamLimits

0x4aaa,	// (0x00042f7c) main_mup_pane_t3

0x4ac4,	// (0x00042f96) main_mup_pane_t4_ParamLimits

0x4ac4,	// (0x00042f96) main_mup_pane_t4

0x4ad6,	// (0x00042fa8) main_mup_pane_t5_ParamLimits

0x4ad6,	// (0x00042fa8) main_mup_pane_t5

0x4ae8,	// (0x00042fba) main_mup_pane_t6_ParamLimits

0x4ae8,	// (0x00042fba) main_mup_pane_t6

0x0005,

0xf435,	// (0x0004d907) main_mup_pane_t_ParamLimits

0xf435,	// (0x0004d907) main_mup_pane_t

0x4afe,	// (0x00042fd0) mup_progress_pane_ParamLimits

0x4afe,	// (0x00042fd0) mup_progress_pane

0x4b0a,	// (0x00042fdc) mup_visualizer_pane_ParamLimits

0x4b0a,	// (0x00042fdc) mup_visualizer_pane

0x4b48,	// (0x0004301a) mup_volume_pane_ParamLimits

0x4b48,	// (0x0004301a) mup_volume_pane

0xb2d5,	// (0x000497a7) mup_visualizer_pane_g1_ParamLimits

0xb2d5,	// (0x000497a7) mup_visualizer_pane_g1

0xb2d5,	// (0x000497a7) mup_visualizer_pane_g2_ParamLimits

0xb2d5,	// (0x000497a7) mup_visualizer_pane_g2

0xb325,	// (0x000497f7) mup_visualizer_pane_g3_ParamLimits

0xb325,	// (0x000497f7) mup_visualizer_pane_g3

0x0002,

0xf442,	// (0x0004d914) mup_visualizer_pane_g_ParamLimits

0xf442,	// (0x0004d914) mup_visualizer_pane_g

0xa929,	// (0x00048dfb) mup_volume_pane_g1

0xb4af,	// (0x00049981) mup_volume_pane_g2

0x0001,

0xf449,	// (0x0004d91b) mup_volume_pane_g

0xa929,	// (0x00048dfb) mup_progress_pane_g1

0xb4b8,	// (0x0004998a) mup_progress_pane_g2

0xb4c1,	// (0x00049993) mup_progress_pane_g3

0x0002,

0xf44e,	// (0x0004d920) mup_progress_pane_g

0xa5b4,	// (0x00048a86) bg_popup_window_pane_cp05

0xb4ca,	// (0x0004999c) heading_pane_cp02_ParamLimits

0xb4ca,	// (0x0004999c) heading_pane_cp02

0xb4e6,	// (0x000499b8) list_popup_blid_pane

0xb4ee,	// (0x000499c0) list_blid_sat_info_pane_ParamLimits

0xb4ee,	// (0x000499c0) list_blid_sat_info_pane

0xb501,	// (0x000499d3) list_blid_sat_info_pane_g1

0xb509,	// (0x000499db) list_blid_sat_info_pane_t1

0x4c67,	// (0x00043139) mup_equalizer_pane_ParamLimits

0x4c67,	// (0x00043139) mup_equalizer_pane

0x4c88,	// (0x0004315a) mup_equalizer_pane_cp1_ParamLimits

0x4c88,	// (0x0004315a) mup_equalizer_pane_cp1

0x4ca9,	// (0x0004317b) mup_equalizer_pane_cp2_ParamLimits

0x4ca9,	// (0x0004317b) mup_equalizer_pane_cp2

0x4cca,	// (0x0004319c) mup_equalizer_pane_cp3_ParamLimits

0x4cca,	// (0x0004319c) mup_equalizer_pane_cp3

0x4cef,	// (0x000431c1) mup_equalizer_pane_cp4_ParamLimits

0x4cef,	// (0x000431c1) mup_equalizer_pane_cp4

0x4d14,	// (0x000431e6) mup_equalizer_pane_cp5

0x4d2c,	// (0x000431fe) mup_equalizer_pane_cp6

0x4d44,	// (0x00043216) mup_equalizer_pane_cp7

0xc6d2,	// (0x0004aba4) bg_popup_call_poc_act_pane_g9

0xc6da,	// (0x0004abac) bg_popup_call_poc_act_pane_g10

0xc6e2,	// (0x0004abb4) bg_popup_call_poc_act_pane_g11

0x000a,

0xa80f,	// (0x00048ce1) mup_scale_pane

0xa929,	// (0x00048dfb) mup_scale_pane_g1

0xb517,	// (0x000499e9) mup_scale_pane_g2

0x0006,

0xf46a,	// (0x0004d93c) mup_scale_pane_g

0xb53b,	// (0x00049a0d) msg_data_pane

0xb543,	// (0x00049a15) scroll_pane_cp017

0x4d6e,	// (0x00043240) bg_list_pane_cp04_ParamLimits

0x4d6e,	// (0x00043240) bg_list_pane_cp04

0xb54b,	// (0x00049a1d) msg_data_pane_g1

0x4d8e,	// (0x00043260) msg_data_pane_g2

0x4d98,	// (0x0004326a) msg_data_pane_g3

0x4da2,	// (0x00043274) msg_data_pane_g4

0x4daa,	// (0x0004327c) msg_data_pane_g5

0x4db2,	// (0x00043284) msg_data_pane_g6

0x4dba,	// (0x0004328c) msg_data_pane_g7

0x0006,

0xf479,	// (0x0004d94b) msg_data_pane_g

0x4dc2,	// (0x00043294) msg_text_pane_ParamLimits

0x4dc2,	// (0x00043294) msg_text_pane

0x4dea,	// (0x000432bc) qrid_highlight_pane_cp011_ParamLimits

0x4dea,	// (0x000432bc) qrid_highlight_pane_cp011

0xa5b4,	// (0x00048a86) msg_body_pane

0xa5b4,	// (0x00048a86) msg_header_pane

0xb55c,	// (0x00049a2e) input_focus_pane_cp07

0xb571,	// (0x00049a43) msg_header_pane_t1_ParamLimits

0xb571,	// (0x00049a43) msg_header_pane_t1

0x0d9e,	// (0x0003f270) msg_header_pane_t2_ParamLimits

0x0d9e,	// (0x0003f270) msg_header_pane_t2

0x0001,

0xf48d,	// (0x0004d95f) msg_header_pane_t_ParamLimits

0xf48d,	// (0x0004d95f) msg_header_pane_t

0xb583,	// (0x00049a55) msg_body_pane_g1

0x0db0,	// (0x0003f282) msg_body_pane_t1_ParamLimits

0x0db0,	// (0x0003f282) msg_body_pane_t1

0x0de1,	// (0x0003f2b3) msg_body_pane_t2_ParamLimits

0x0de1,	// (0x0003f2b3) msg_body_pane_t2

0x0df3,	// (0x0003f2c5) msg_body_pane_t3_ParamLimits

0x0df3,	// (0x0003f2c5) msg_body_pane_t3

0x0002,

0xf492,	// (0x0004d964) msg_body_pane_t_ParamLimits

0xf492,	// (0x0004d964) msg_body_pane_t

0x4e52,	// (0x00043324) main_viewer_pane_g1_ParamLimits

0x4e52,	// (0x00043324) main_viewer_pane_g1

0x4e5e,	// (0x00043330) main_viewer_pane_g2_ParamLimits

0x4e5e,	// (0x00043330) main_viewer_pane_g2

0x4e6a,	// (0x0004333c) main_viewer_pane_g3_ParamLimits

0x4e6a,	// (0x0004333c) main_viewer_pane_g3

0x4e7b,	// (0x0004334d) main_viewer_pane_g4_ParamLimits

0x4e7b,	// (0x0004334d) main_viewer_pane_g4

0x4e8c,	// (0x0004335e) main_viewer_pane_g5_ParamLimits

0x4e8c,	// (0x0004335e) main_viewer_pane_g5

0x4e8c,	// (0x0004335e) main_viewer_pane_g7_ParamLimits

0x4e8c,	// (0x0004335e) main_viewer_pane_g7

0x4e9e,	// (0x00043370) main_viewer_pane_g8_ParamLimits

0x4e9e,	// (0x00043370) main_viewer_pane_g8

0x0007,

0xf4a2,	// (0x0004d974) main_viewer_pane_g_ParamLimits

0xf4a2,	// (0x0004d974) main_viewer_pane_g

0xb58b,	// (0x00049a5d) viewer_content_pane_ParamLimits

0xb58b,	// (0x00049a5d) viewer_content_pane

0x4ed6,	// (0x000433a8) main_postcard_pane_g1_ParamLimits

0x4ed6,	// (0x000433a8) main_postcard_pane_g1

0x4ee4,	// (0x000433b6) main_postcard_pane_g2_ParamLimits

0x4ee4,	// (0x000433b6) main_postcard_pane_g2

0x4ef2,	// (0x000433c4) main_postcard_pane_g3_ParamLimits

0x4ef2,	// (0x000433c4) main_postcard_pane_g3

0x0005,

0xf4b3,	// (0x0004d985) main_postcard_pane_g_ParamLimits

0xf4b3,	// (0x0004d985) main_postcard_pane_g

0x4f02,	// (0x000433d4) main_postcard_pane_g4

0xc8fb,	// (0x0004adcd) smil_status_volume_pane_g2

0x4f2e,	// (0x00043400) postcard_pane_ParamLimits

0x4f2e,	// (0x00043400) postcard_pane

0xb2d5,	// (0x000497a7) postcard_pane_g1_ParamLimits

0xb2d5,	// (0x000497a7) postcard_pane_g1

0x4f68,	// (0x0004343a) postcard_pane_g2_ParamLimits

0x4f68,	// (0x0004343a) postcard_pane_g2

0x4f74,	// (0x00043446) postcard_pane_g3_ParamLimits

0x4f74,	// (0x00043446) postcard_pane_g3

0xb599,	// (0x00049a6b) postcard_pane_g4_ParamLimits

0xb599,	// (0x00049a6b) postcard_pane_g4

0x4f80,	// (0x00043452) postcard_pane_g5_ParamLimits

0x4f80,	// (0x00043452) postcard_pane_g5

0x4f8c,	// (0x0004345e) postcard_pane_g6_ParamLimits

0x4f8c,	// (0x0004345e) postcard_pane_g6

0xb5a7,	// (0x00049a79) postcard_pane_g7_ParamLimits

0xb5a7,	// (0x00049a79) postcard_pane_g7

0x0006,

0xf4c0,	// (0x0004d992) postcard_pane_g_ParamLimits

0xf4c0,	// (0x0004d992) postcard_pane_g

0x4f9a,	// (0x0004346c) main_mp2_pane_g1_ParamLimits

0x4f9a,	// (0x0004346c) main_mp2_pane_g1

0x4fa8,	// (0x0004347a) main_mp2_pane_g2_ParamLimits

0x4fa8,	// (0x0004347a) main_mp2_pane_g2

0x4fb4,	// (0x00043486) main_mp2_pane_g3_ParamLimits

0x4fb4,	// (0x00043486) main_mp2_pane_g3

0x0002,

0xf4cf,	// (0x0004d9a1) main_mp2_pane_g_ParamLimits

0xf4cf,	// (0x0004d9a1) main_mp2_pane_g

0x4fc0,	// (0x00043492) main_mp2_pane_t1_ParamLimits

0x4fc0,	// (0x00043492) main_mp2_pane_t1

0x4fd7,	// (0x000434a9) main_mp2_pane_t2_ParamLimits

0x4fd7,	// (0x000434a9) main_mp2_pane_t2

0x4feb,	// (0x000434bd) main_mp2_pane_t3_ParamLimits

0x4feb,	// (0x000434bd) main_mp2_pane_t3

0x0002,

0xf4d6,	// (0x0004d9a8) main_mp2_pane_t_ParamLimits

0xf4d6,	// (0x0004d9a8) main_mp2_pane_t

0xb5b5,	// (0x00049a87) pec_content_pane_ParamLimits

0xb5b5,	// (0x00049a87) pec_content_pane

0xac65,	// (0x00049137) scroll_pane_cp015

0xb5c7,	// (0x00049a99) pec_attribute_pane_ParamLimits

0xb5c7,	// (0x00049a99) pec_attribute_pane

0x4ffd,	// (0x000434cf) pec_content_pane_g1_ParamLimits

0x4ffd,	// (0x000434cf) pec_content_pane_g1

0xb5d7,	// (0x00049aa9) pec_content_pane_t1_ParamLimits

0xb5d7,	// (0x00049aa9) pec_content_pane_t1

0xb5e9,	// (0x00049abb) pec_content_pane_t2_ParamLimits

0xb5e9,	// (0x00049abb) pec_content_pane_t2

0x0001,

0xf4dd,	// (0x0004d9af) pec_content_pane_t_ParamLimits

0xf4dd,	// (0x0004d9af) pec_content_pane_t

0x5009,	// (0x000434db) list_single_graphic_pane_cp01_ParamLimits

0x5009,	// (0x000434db) list_single_graphic_pane_cp01

0xa80f,	// (0x00048ce1) bg_popup_sub_pane_cp04

0xb5fb,	// (0x00049acd) popup_mup_playback_window_g1

0xb607,	// (0x00049ad9) popup_mup_playback_window_t1

0xb61c,	// (0x00049aee) popup_mup_playback_window_t2

0x0001,

0xf4e2,	// (0x0004d9b4) popup_mup_playback_window_t

0xb653,	// (0x00049b25) main_image_pane_g1_ParamLimits

0xb653,	// (0x00049b25) main_image_pane_g1

0xb696,	// (0x00049b68) scroll_pane_cp018_ParamLimits

0xb696,	// (0x00049b68) scroll_pane_cp018

0xb6ae,	// (0x00049b80) scroll_pane_cp016_ParamLimits

0xb6ae,	// (0x00049b80) scroll_pane_cp016

0x5097,	// (0x00043569) smil2_image_pane_ParamLimits

0x5097,	// (0x00043569) smil2_image_pane

0x50cd,	// (0x0004359f) smil2_root_pane_ParamLimits

0x50cd,	// (0x0004359f) smil2_root_pane

0x50f9,	// (0x000435cb) smil2_text_pane_ParamLimits

0x50f9,	// (0x000435cb) smil2_text_pane

0xa5b4,	// (0x00048a86) bg_list_pane_cp06

0xb6ea,	// (0x00049bbc) grid_radio_pane

0xa5b4,	// (0x00048a86) bg_popup_window_pane_cp06

0xb6f4,	// (0x00049bc6) main_fmradio_pane_t1

0xb194,	// (0x00049666) heading_pane_cp04

0xb702,	// (0x00049bd4) main_fmradio_pane_t2

0xc6ea,	// (0x0004abbc) popup_cale_lunar_info_window_g1

0xb710,	// (0x00049be2) main_fmradio_pane_t3

0xc6f2,	// (0x0004abc4) popup_cale_lunar_info_window_g2

0xb720,	// (0x00049bf2) main_fmradio_pane_t4

0x0001,

0xb72e,	// (0x00049c00) main_fmradio_pane_t5

0x0004,

0xf5bd,	// (0x0004da8f) popup_cale_lunar_info_window_g

0xf4f7,	// (0x0004d9c9) main_fmradio_pane_t

0xb73c,	// (0x00049c0e) wait_bar_pane_cp03

0xb744,	// (0x00049c16) cell_fmradio_pane_ParamLimits

0xb744,	// (0x00049c16) cell_fmradio_pane

0xb5a7,	// (0x00049a79) cell_fmradio_pane_g1_ParamLimits

0xb5a7,	// (0x00049a79) cell_fmradio_pane_g1

0xa5b4,	// (0x00048a86) grid_highlight_pane_cp011

0xb759,	// (0x00049c2b) poc_content_pane_ParamLimits

0xb759,	// (0x00049c2b) poc_content_pane

0xb76b,	// (0x00049c3d) scroll_pane_cp019

0x5139,	// (0x0004360b) popup_call_poc_act_window_ParamLimits

0x5139,	// (0x0004360b) popup_call_poc_act_window

0x5146,	// (0x00043618) popup_call_poc_inact_window_ParamLimits

0x5146,	// (0x00043618) popup_call_poc_inact_window

0xf594,	// (0x0004da66) bg_popup_call_poc_act_pane_g

0xc662,	// (0x0004ab34) bg_popup_call_poc_inact_pane_g1

0xc66a,	// (0x0004ab3c) bg_popup_call_poc_inact_pane_g2

0xb773,	// (0x00049c45) popup_call_poc_act_window_g2

0xc672,	// (0x0004ab44) bg_popup_call_poc_inact_pane_g3

0xc67a,	// (0x0004ab4c) bg_popup_call_poc_inact_pane_g4

0xc682,	// (0x0004ab54) bg_popup_call_poc_inact_pane_g5

0xb77b,	// (0x00049c4d) popup_call_poc_act_window_t1_ParamLimits

0xb77b,	// (0x00049c4d) popup_call_poc_act_window_t1

0xb7a3,	// (0x00049c75) popup_call_poc_act_window_t2_ParamLimits

0xb7a3,	// (0x00049c75) popup_call_poc_act_window_t2

0xb7cb,	// (0x00049c9d) popup_call_poc_act_window_t3_ParamLimits

0xb7cb,	// (0x00049c9d) popup_call_poc_act_window_t3

0xb7f3,	// (0x00049cc5) popup_call_poc_act_window_t4_ParamLimits

0xb7f3,	// (0x00049cc5) popup_call_poc_act_window_t4

0x0003,

0xf502,	// (0x0004d9d4) popup_call_poc_act_window_t_ParamLimits

0xf502,	// (0x0004d9d4) popup_call_poc_act_window_t

0xc68a,	// (0x0004ab5c) bg_popup_call_poc_inact_pane_g6

0xc692,	// (0x0004ab64) bg_popup_call_poc_inact_pane_g7

0xc69a,	// (0x0004ab6c) bg_popup_call_poc_inact_pane_g8

0xb805,	// (0x00049cd7) popup_call_poc_inact_window_g2

0xc6a2,	// (0x0004ab74) bg_popup_call_poc_inact_pane_g9

0x0008,

0xf581,	// (0x0004da53) bg_popup_call_poc_inact_pane_g

0xb80d,	// (0x00049cdf) popup_call_poc_inact_window_t1_ParamLimits

0xb80d,	// (0x00049cdf) popup_call_poc_inact_window_t1

0xb822,	// (0x00049cf4) popup_call_poc_inact_window_t2_ParamLimits

0xb822,	// (0x00049cf4) popup_call_poc_inact_window_t2

0xb837,	// (0x00049d09) popup_call_poc_inact_window_t3_ParamLimits

0xb837,	// (0x00049d09) popup_call_poc_inact_window_t3

0x0002,

0xf50b,	// (0x0004d9dd) popup_call_poc_inact_window_t_ParamLimits

0xf50b,	// (0x0004d9dd) popup_call_poc_inact_window_t

0xc86e,	// (0x0004ad40) context_pane_ParamLimits

0x5755,	// (0x00043c27) signal_pane_ParamLimits

0xaab8,	// (0x00048f8a) main_call2_pane

0xc85c,	// (0x0004ad2e) popup_phob_thumbnail2_window_ParamLimits

0xc85c,	// (0x0004ad2e) popup_phob_thumbnail2_window

0x4e00,	// (0x000432d2) aid_hotspot_pointer_arrow_pane

0x4e08,	// (0x000432da) aid_hotspot_pointer_hand_pane

0x546b,	// (0x0004393d) phob_pre_status_pane_g5

0x3015,	// (0x000414e7) cams_zoom_pane_ParamLimits

0x3021,	// (0x000414f3) image_vga_pane_ParamLimits

0x3030,	// (0x00041502) main_camera_pane_g1_ParamLimits

0x303e,	// (0x00041510) main_camera_pane_g2_ParamLimits

0x304a,	// (0x0004151c) main_camera_pane_g3_ParamLimits

0x3058,	// (0x0004152a) main_camera_pane_g4_ParamLimits

0x3066,	// (0x00041538) main_camera_pane_g5_ParamLimits

0x3074,	// (0x00041546) main_camera_pane_g6_ParamLimits

0x3082,	// (0x00041554) main_camera_pane_g7_ParamLimits

0xf20a,	// (0x0004d6dc) main_camera_pane_g_ParamLimits

0x3090,	// (0x00041562) main_camera_pane_t1_ParamLimits

0x30a2,	// (0x00041574) main_camera_pane_t2_ParamLimits

0xf21b,	// (0x0004d6ed) main_camera_pane_t_ParamLimits

0xa80f,	// (0x00048ce1) bg_popup_preview_window_pane_cp01_ParamLimits

0xa80f,	// (0x00048ce1) bg_popup_preview_window_pane_cp01

0xb84c,	// (0x00049d1e) popup_phob_thumbnail2_window_g1_ParamLimits

0xb84c,	// (0x00049d1e) popup_phob_thumbnail2_window_g1

0xa5b4,	// (0x00048a86) call2_cli_visual_pane

0x5162,	// (0x00043634) popup_call2_audio_conf_window_ParamLimits

0x5162,	// (0x00043634) popup_call2_audio_conf_window

0x517b,	// (0x0004364d) popup_call2_audio_first_window_ParamLimits

0x517b,	// (0x0004364d) popup_call2_audio_first_window

0x5219,	// (0x000436eb) popup_call2_audio_in_window_ParamLimits

0x5219,	// (0x000436eb) popup_call2_audio_in_window

0x525d,	// (0x0004372f) popup_call2_audio_out_window_ParamLimits

0x525d,	// (0x0004372f) popup_call2_audio_out_window

0x52c7,	// (0x00043799) popup_call2_audio_second_window_ParamLimits

0x52c7,	// (0x00043799) popup_call2_audio_second_window

0x5325,	// (0x000437f7) popup_call2_audio_wait_window_ParamLimits

0x5325,	// (0x000437f7) popup_call2_audio_wait_window

0xa5b4,	// (0x00048a86) bg_popup_call2_act_pane_cp03

0xa7f1,	// (0x00048cc3) list_conf_pane_cp

0xb858,	// (0x00049d2a) popup_call2_audio_conf_window_t1

0xb866,	// (0x00049d38) list_single_graphic_popup_conf2_pane_ParamLimits

0xb866,	// (0x00049d38) list_single_graphic_popup_conf2_pane

0xb203,	// (0x000496d5) list_highlight_pane_cp04

0xb879,	// (0x00049d4b) list_single_graphic_popup_conf2_pane_g1

0xb214,	// (0x000496e6) list_single_graphic_popup_conf2_pane_g2

0x0001,

0xf512,	// (0x0004d9e4) list_single_graphic_popup_conf2_pane_g

0xb883,	// (0x00049d55) list_single_graphic_popup_conf2_pane_t1

0xb891,	// (0x00049d63) bg_popup_call2_act_pane_cp01_ParamLimits

0xb891,	// (0x00049d63) bg_popup_call2_act_pane_cp01

0xb91b,	// (0x00049ded) call_type_pane_cp05_ParamLimits

0xb91b,	// (0x00049ded) call_type_pane_cp05

0xb96f,	// (0x00049e41) popup_call2_audio_second_window_g1_ParamLimits

0xb96f,	// (0x00049e41) popup_call2_audio_second_window_g1

0xb9c3,	// (0x00049e95) popup_call2_audio_second_window_g2_ParamLimits

0xb9c3,	// (0x00049e95) popup_call2_audio_second_window_g2

0x0002,

0xf517,	// (0x0004d9e9) popup_call2_audio_second_window_g_ParamLimits

0xf517,	// (0x0004d9e9) popup_call2_audio_second_window_g

0xba28,	// (0x00049efa) popup_call2_audio_second_window_t1_ParamLimits

0xba28,	// (0x00049efa) popup_call2_audio_second_window_t1

0xbae3,	// (0x00049fb5) popup_call2_audio_second_window_t2_ParamLimits

0xbae3,	// (0x00049fb5) popup_call2_audio_second_window_t2

0xbb36,	// (0x0004a008) popup_call2_audio_second_window_t3_ParamLimits

0xbb36,	// (0x0004a008) popup_call2_audio_second_window_t3

0x0003,

0xf51e,	// (0x0004d9f0) popup_call2_audio_second_window_t_ParamLimits

0xf51e,	// (0x0004d9f0) popup_call2_audio_second_window_t

0xa5b4,	// (0x00048a86) bg_popup_call2_in_pane_cp02

0xa5be,	// (0x00048a90) call_type_pane_cp04

0xa5c6,	// (0x00048a98) popup_call2_audio_wait_window_g1

0xa5ce,	// (0x00048aa0) popup_call2_audio_wait_window_g2

0x0001,

0xf0f9,	// (0x0004d5cb) popup_call2_audio_wait_window_g

0xa5d6,	// (0x00048aa8) popup_call2_audio_wait_window_t3

0xbc35,	// (0x0004a107) bg_popup_call2_act_pane_ParamLimits

0xbc35,	// (0x0004a107) bg_popup_call2_act_pane

0xbcf5,	// (0x0004a1c7) call_type_pane_cp03_ParamLimits

0xbcf5,	// (0x0004a1c7) call_type_pane_cp03

0xbd59,	// (0x0004a22b) popup_call2_audio_first_window_g1_ParamLimits

0xbd59,	// (0x0004a22b) popup_call2_audio_first_window_g1

0xbdc9,	// (0x0004a29b) popup_call2_audio_first_window_g2_ParamLimits

0xbdc9,	// (0x0004a29b) popup_call2_audio_first_window_g2

0xb2d5,	// (0x000497a7) popup_call2_audio_first_window_g3_ParamLimits

0xb2d5,	// (0x000497a7) popup_call2_audio_first_window_g3

0x0004,

0xf527,	// (0x0004d9f9) popup_call2_audio_first_window_g_ParamLimits

0xf527,	// (0x0004d9f9) popup_call2_audio_first_window_g

0xbea7,	// (0x0004a379) popup_call2_audio_first_window_t1_ParamLimits

0xbea7,	// (0x0004a379) popup_call2_audio_first_window_t1

0xbfaa,	// (0x0004a47c) popup_call2_audio_first_window_t4_ParamLimits

0xbfaa,	// (0x0004a47c) popup_call2_audio_first_window_t4

0xc08d,	// (0x0004a55f) popup_call2_audio_first_window_t5_ParamLimits

0xc08d,	// (0x0004a55f) popup_call2_audio_first_window_t5

0x0003,

0xf532,	// (0x0004da04) popup_call2_audio_first_window_t_ParamLimits

0xf532,	// (0x0004da04) popup_call2_audio_first_window_t

0xa807,	// (0x00048cd9) bg_popup_call2_act_pane_g1

0xc6fc,	// (0x0004abce) popup_cale_lunar_info_window_t1

0xc70a,	// (0x0004abdc) popup_cale_lunar_info_window_t2

0xc718,	// (0x0004abea) popup_cale_lunar_info_window_t3

0xa5b4,	// (0x00048a86) bg_popup_call2_bubble_pane

0xc18e,	// (0x0004a660) bg_popup_call2_in_pane_cp01_ParamLimits

0xc18e,	// (0x0004a660) bg_popup_call2_in_pane_cp01

0xa290,	// (0x00048762) call_type_pane_cp02

0xc1d6,	// (0x0004a6a8) popup_call2_audio_out_window_g1_ParamLimits

0xc1d6,	// (0x0004a6a8) popup_call2_audio_out_window_g1

0xc202,	// (0x0004a6d4) popup_call2_audio_out_window_g2_ParamLimits

0xc202,	// (0x0004a6d4) popup_call2_audio_out_window_g2

0xc22a,	// (0x0004a6fc) popup_call2_audio_out_window_g3_ParamLimits

0xc22a,	// (0x0004a6fc) popup_call2_audio_out_window_g3

0x0003,

0xf53b,	// (0x0004da0d) popup_call2_audio_out_window_g_ParamLimits

0xf53b,	// (0x0004da0d) popup_call2_audio_out_window_g

0xc265,	// (0x0004a737) popup_call2_audio_out_window_t1_ParamLimits

0xc265,	// (0x0004a737) popup_call2_audio_out_window_t1

0xc2c4,	// (0x0004a796) popup_call2_audio_out_window_t2_ParamLimits

0xc2c4,	// (0x0004a796) popup_call2_audio_out_window_t2

0xc318,	// (0x0004a7ea) popup_call2_audio_out_window_t3_ParamLimits

0xc318,	// (0x0004a7ea) popup_call2_audio_out_window_t3

0xc32e,	// (0x0004a800) popup_call2_audio_out_window_t4_ParamLimits

0xc32e,	// (0x0004a800) popup_call2_audio_out_window_t4

0xc344,	// (0x0004a816) popup_call2_audio_out_window_t5_ParamLimits

0xc344,	// (0x0004a816) popup_call2_audio_out_window_t5

0x0005,

0xf544,	// (0x0004da16) popup_call2_audio_out_window_t_ParamLimits

0xf544,	// (0x0004da16) popup_call2_audio_out_window_t

0xc3a8,	// (0x0004a87a) bg_popup_call2_in_pane_ParamLimits

0xc3a8,	// (0x0004a87a) bg_popup_call2_in_pane

0xc404,	// (0x0004a8d6) popup_call2_audio_in_window_g1_ParamLimits

0xc404,	// (0x0004a8d6) popup_call2_audio_in_window_g1

0xc43c,	// (0x0004a90e) popup_call2_audio_in_window_g2_ParamLimits

0xc43c,	// (0x0004a90e) popup_call2_audio_in_window_g2

0xc474,	// (0x0004a946) popup_call2_audio_in_window_g3_ParamLimits

0xc474,	// (0x0004a946) popup_call2_audio_in_window_g3

0x0003,

0xf551,	// (0x0004da23) popup_call2_audio_in_window_g_ParamLimits

0xf551,	// (0x0004da23) popup_call2_audio_in_window_g

0xc4cc,	// (0x0004a99e) popup_call2_audio_in_window_t1_ParamLimits

0xc4cc,	// (0x0004a99e) popup_call2_audio_in_window_t1

0xc54c,	// (0x0004aa1e) popup_call2_audio_in_window_t2_ParamLimits

0xc54c,	// (0x0004aa1e) popup_call2_audio_in_window_t2

0xc5cc,	// (0x0004aa9e) popup_call2_audio_in_window_t3_ParamLimits

0xc5cc,	// (0x0004aa9e) popup_call2_audio_in_window_t3

0xc5e6,	// (0x0004aab8) popup_call2_audio_in_window_t4_ParamLimits

0xc5e6,	// (0x0004aab8) popup_call2_audio_in_window_t4

0xc5f8,	// (0x0004aaca) popup_call2_audio_in_window_t5_ParamLimits

0xc5f8,	// (0x0004aaca) popup_call2_audio_in_window_t5

0xc60d,	// (0x0004aadf) popup_call2_audio_in_window_t6_ParamLimits

0xc60d,	// (0x0004aadf) popup_call2_audio_in_window_t6

0x0005,

0xf55a,	// (0x0004da2c) popup_call2_audio_in_window_t_ParamLimits

0xf55a,	// (0x0004da2c) popup_call2_audio_in_window_t

0xa807,	// (0x00048cd9) bg_popup_call2_in_pane_g1

0xc726,	// (0x0004abf8) popup_cale_lunar_info_window_t4

0x0003,

0xf5c2,	// (0x0004da94) popup_cale_lunar_info_window_t

0xa80f,	// (0x00048ce1) bg_popup_call2_rect_pane_ParamLimits

0xa80f,	// (0x00048ce1) bg_popup_call2_rect_pane

0xa5b4,	// (0x00048a86) call2_cli_visual_graphic_pane

0xa5b4,	// (0x00048a86) call2_cli_visual_text_pane

0x57ed,	// (0x00043cbf) smil_status_volume_pane_g3

0x0002,

0xa929,	// (0x00048dfb) call2_cli_visual_graphic_pane_g1

0xa929,	// (0x00048dfb) call2_cli_visual_graphic_pane_g2

0xa929,	// (0x00048dfb) call2_cli_visual_graphic_pane_g3

0x0002,

0xf567,	// (0x0004da39) call2_cli_visual_graphic_pane_g

0xc622,	// (0x0004aaf4) bg_popup_call2_rect_pane_g1

0xa9c7,	// (0x00048e99) bg_popup_call2_rect_pane_g2

0xc62a,	// (0x0004aafc) bg_popup_call2_rect_pane_g3

0xc632,	// (0x0004ab04) bg_popup_call2_rect_pane_g4

0xc63a,	// (0x0004ab0c) bg_popup_call2_rect_pane_g5

0xc642,	// (0x0004ab14) bg_popup_call2_rect_pane_g6

0xc64a,	// (0x0004ab1c) bg_popup_call2_rect_pane_g7

0xc652,	// (0x0004ab24) bg_popup_call2_rect_pane_g8

0xc65a,	// (0x0004ab2c) bg_popup_call2_rect_pane_g9

0x0008,

0xf56e,	// (0x0004da40) bg_popup_call2_rect_pane_g

0xc662,	// (0x0004ab34) bg_popup_call2_bubble_pane_g1

0xc66a,	// (0x0004ab3c) bg_popup_call2_bubble_pane_g2

0xc672,	// (0x0004ab44) bg_popup_call2_bubble_pane_g3

0xc67a,	// (0x0004ab4c) bg_popup_call2_bubble_pane_g4

0xc682,	// (0x0004ab54) bg_popup_call2_bubble_pane_g5

0xc68a,	// (0x0004ab5c) bg_popup_call2_bubble_pane_g6

0xc692,	// (0x0004ab64) bg_popup_call2_bubble_pane_g7

0xc69a,	// (0x0004ab6c) bg_popup_call2_bubble_pane_g8

0xc6a2,	// (0x0004ab74) bg_popup_call2_bubble_pane_g9

0x0008,

0xf581,	// (0x0004da53) bg_popup_call2_bubble_pane_g

0x2765,	// (0x00040c37) aid_cale_week_size_cell_pane

0x30b6,	// (0x00041588) aid_cams_cif_uncrop_pane_ParamLimits

0x30b6,	// (0x00041588) aid_cams_cif_uncrop_pane

0x3213,	// (0x000416e5) aid_cams_size_cell_ParamLimits

0x3213,	// (0x000416e5) aid_cams_size_cell

0x321f,	// (0x000416f1) grid_cams_pane_ParamLimits

0x322d,	// (0x000416ff) linegrid_cams_pane_ParamLimits

0x32fe,	// (0x000417d0) call_video_pane_t1

0x331b,	// (0x000417ed) call_video_pane_t2

0x0001,

0xf26e,	// (0x0004d740) call_video_pane_t

0x37e7,	// (0x00041cb9) aid_cale_month_size_cell_pane_ParamLimits

0x37e7,	// (0x00041cb9) aid_cale_month_size_cell_pane

0xf60b,	// (0x0004dadd) smil_status_volume_pane_g

0x57fa,	// (0x00043ccc) volume_smil_pane_ParamLimits

0xa15a,	// (0x0004862c) aid_popup2_width_pane

0x2667,	// (0x00040b39) cell_qdial_pane_g4_ParamLimits

0x2667,	// (0x00040b39) cell_qdial_pane_g4

0x471d,	// (0x00042bef) aid_blid_cardinal_pane_ParamLimits

0x472d,	// (0x00042bff) aid_blid_destination_pane_ParamLimits

0x472d,	// (0x00042bff) aid_blid_destination_pane

0xa80f,	// (0x00048ce1) bg_popup_call_poc_act_pane_ParamLimits

0xa80f,	// (0x00048ce1) bg_popup_call_poc_act_pane

0xa80f,	// (0x00048ce1) bg_popup_call_poc_inact_pane_ParamLimits

0xa80f,	// (0x00048ce1) bg_popup_call_poc_inact_pane

0xc6aa,	// (0x0004ab7c) bg_popup_call_poc_act_pane_g1

0xc6b2,	// (0x0004ab84) bg_popup_call_poc_act_pane_g2

0xc6ba,	// (0x0004ab8c) bg_popup_call_poc_act_pane_g3

0xc67a,	// (0x0004ab4c) bg_popup_call_poc_act_pane_g4

0xc682,	// (0x0004ab54) bg_popup_call_poc_act_pane_g5

0xc6c2,	// (0x0004ab94) bg_popup_call_poc_act_pane_g6

0xc692,	// (0x0004ab64) bg_popup_call_poc_act_pane_g7

0xc6ca,	// (0x0004ab9c) bg_popup_call_poc_act_pane_g8

0xa5b4,	// (0x00048a86) main_usb_pane

0xc833,	// (0x0004ad05) popup_cale_lunar_info_window

0x3633,	// (0x00041b05) im_reading_pane_t1_ParamLimits

0xabbd,	// (0x0004908f) list_im_pane_ParamLimits

0xabce,	// (0x000490a0) scroll_pane_cp07_ParamLimits

0xa5b4,	// (0x00048a86) grid_highlight_pane_cp012

0xa80f,	// (0x00048ce1) mup_scale_pane_ParamLimits

0xb2d5,	// (0x000497a7) main_usb_pane_g1_ParamLimits

0xb2d5,	// (0x000497a7) main_usb_pane_g1

0x538e,	// (0x00043860) main_usb_pane_g2_ParamLimits

0x538e,	// (0x00043860) main_usb_pane_g2

0x0001,

0xf5ab,	// (0x0004da7d) main_usb_pane_g_ParamLimits

0xf5ab,	// (0x0004da7d) main_usb_pane_g

0x539a,	// (0x0004386c) main_usb_pane_t1_ParamLimits

0x539a,	// (0x0004386c) main_usb_pane_t1

0x53ac,	// (0x0004387e) main_usb_pane_t2_ParamLimits

0x53ac,	// (0x0004387e) main_usb_pane_t2

0x53be,	// (0x00043890) main_usb_pane_t3_ParamLimits

0x53be,	// (0x00043890) main_usb_pane_t3

0x53d0,	// (0x000438a2) main_usb_pane_t4_ParamLimits

0x53d0,	// (0x000438a2) main_usb_pane_t4

0x53e2,	// (0x000438b4) main_usb_pane_t5_ParamLimits

0x53e2,	// (0x000438b4) main_usb_pane_t5

0x53f4,	// (0x000438c6) main_usb_pane_t6_ParamLimits

0x53f4,	// (0x000438c6) main_usb_pane_t6

0x0005,

0xf5b0,	// (0x0004da82) main_usb_pane_t_ParamLimits

0x46bc,	// (0x00042b8e) aid_text_placing

0x46c7,	// (0x00042b99) main_location2_pane_t1_ParamLimits

0x46dd,	// (0x00042baf) main_location2_pane_t2_ParamLimits

0x46f3,	// (0x00042bc5) main_location2_pane_t3_ParamLimits

0x4709,	// (0x00042bdb) main_location2_pane_t4_ParamLimits

0x4709,	// (0x00042bdb) main_location2_pane_t4

0xf3cf,	// (0x0004d8a1) main_location2_pane_t_ParamLimits

0xa84b,	// (0x00048d1d) find_pinb_pane_g2_ParamLimits

0xa84b,	// (0x00048d1d) find_pinb_pane_g2

0x0001,

0xf11f,	// (0x0004d5f1) find_pinb_pane_g_ParamLimits

0xf11f,	// (0x0004d5f1) find_pinb_pane_g

0xa857,	// (0x00048d29) find_pinb_pane_t1_ParamLimits

0xa869,	// (0x00048d3b) find_pinb_pane_t2_ParamLimits

0xf124,	// (0x0004d5f6) find_pinb_pane_t_ParamLimits

0xa5b4,	// (0x00048a86) main_call3_pane

0x3d66,	// (0x00042238) cale_month_day_heading_pane_t1_ParamLimits

0x3de8,	// (0x000422ba) cale_month_day_heading_pane_t2_ParamLimits

0x3e75,	// (0x00042347) cale_month_day_heading_pane_t3_ParamLimits

0x3f02,	// (0x000423d4) cale_month_day_heading_pane_t4_ParamLimits

0x3f8f,	// (0x00042461) cale_month_day_heading_pane_t5_ParamLimits

0x4024,	// (0x000424f6) cale_month_day_heading_pane_t6_ParamLimits

0x40c1,	// (0x00042593) cale_month_day_heading_pane_t7_ParamLimits

0xf2a6,	// (0x0004d778) cale_month_day_heading_pane_t_ParamLimits

0x436d,	// (0x0004283f) smil_status_volume_pane

0x4f4c,	// (0x0004341e) postcard_address_pane_ParamLimits

0x4f4c,	// (0x0004341e) postcard_address_pane

0x4f5a,	// (0x0004342c) postcard_message_pane_ParamLimits

0x4f5a,	// (0x0004342c) postcard_message_pane

0x5364,	// (0x00043836) call2_cli_visual_pane_t1_ParamLimits

0x5364,	// (0x00043836) call2_cli_visual_pane_t1

0x5959,	// (0x00043e2b) postcard_message_pane_t1_ParamLimits

0x5959,	// (0x00043e2b) postcard_message_pane_t1

0x5942,	// (0x00043e14) postcard_address_pane_t1_ParamLimits

0x5942,	// (0x00043e14) postcard_address_pane_t1

0x5933,	// (0x00043e05) popup_call3_audio_in_window_ParamLimits

0x5933,	// (0x00043e05) popup_call3_audio_in_window

0x5811,	// (0x00043ce3) bg_popup_call3_in_pane_ParamLimits

0x5811,	// (0x00043ce3) bg_popup_call3_in_pane

0x5879,	// (0x00043d4b) popup_call3_audio_in_window_g1_ParamLimits

0x5879,	// (0x00043d4b) popup_call3_audio_in_window_g1

0x5891,	// (0x00043d63) popup_call3_audio_in_window_g2_ParamLimits

0x5891,	// (0x00043d63) popup_call3_audio_in_window_g2

0x58a9,	// (0x00043d7b) popup_call3_audio_in_window_g3_ParamLimits

0x58a9,	// (0x00043d7b) popup_call3_audio_in_window_g3

0x0003,

0xf612,	// (0x0004dae4) popup_call3_audio_in_window_g_ParamLimits

0xf612,	// (0x0004dae4) popup_call3_audio_in_window_g

0x58d1,	// (0x00043da3) popup_call3_audio_in_window_t1_ParamLimits

0x58d1,	// (0x00043da3) popup_call3_audio_in_window_t1

0x58f9,	// (0x00043dcb) popup_call3_audio_in_window_t2_ParamLimits

0x58f9,	// (0x00043dcb) popup_call3_audio_in_window_t2

0x5921,	// (0x00043df3) popup_call3_audio_in_window_t3_ParamLimits

0x5921,	// (0x00043df3) popup_call3_audio_in_window_t3

0x0002,

0xf61b,	// (0x0004daed) popup_call3_audio_in_window_t_ParamLimits

0xf61b,	// (0x0004daed) popup_call3_audio_in_window_t

0xaab8,	// (0x00048f8a) bg_popup_call3_rect_pane

0xc622,	// (0x0004aaf4) bg_popup_call3_rect_pane_g1

0xa9c7,	// (0x00048e99) bg_popup_call3_rect_pane_g2

0xc62a,	// (0x0004aafc) bg_popup_call3_rect_pane_g3

0xc632,	// (0x0004ab04) bg_popup_call3_rect_pane_g4

0xc63a,	// (0x0004ab0c) bg_popup_call3_rect_pane_g5

0xc642,	// (0x0004ab14) bg_popup_call3_rect_pane_g6

0xc64a,	// (0x0004ab1c) bg_popup_call3_rect_pane_g7

0x4b63,	// (0x00043035) mup_visualizer_osc_pane

0xb4a7,	// (0x00049979) mup_visualizer_spec_pane

0x5831,	// (0x00043d03) call3_video_qcif_pane_ParamLimits

0x5831,	// (0x00043d03) call3_video_qcif_pane

0x5843,	// (0x00043d15) call3_video_qcif_uncrop_pane_ParamLimits

0x5843,	// (0x00043d15) call3_video_qcif_uncrop_pane

0x5853,	// (0x00043d25) call3_video_subqcif_pane_ParamLimits

0x5853,	// (0x00043d25) call3_video_subqcif_pane

0x5867,	// (0x00043d39) call3_video_subqcif_uncrop_pane_ParamLimits

0x5867,	// (0x00043d39) call3_video_subqcif_uncrop_pane

0x58c1,	// (0x00043d93) popup_call3_audio_in_window_g4_ParamLimits

0x58c1,	// (0x00043d93) popup_call3_audio_in_window_g4

0x57dc,	// (0x00043cae) mup_spec_half_pane

0x57e5,	// (0x00043cb7) mup_spec_half_pane_cp

0xc8ce,	// (0x0004ada0) mup_osc_middle_pane

0xc8d7,	// (0x0004ada9) mup_visualizer_osc_pane_g1

0x57bc,	// (0x00043c8e) mup_spec_bar_pane_ParamLimits

0x57bc,	// (0x00043c8e) mup_spec_bar_pane

0xc8bb,	// (0x0004ad8d) mup_spec_bar_pane_g1

0xc8c5,	// (0x0004ad97) mup_spec_bar_pane_g2

0x0001,

0xf606,	// (0x0004dad8) mup_spec_bar_pane_g

0x2765,	// (0x00040c37) aid_cale_week_size_cell_pane_ParamLimits

0x277f,	// (0x00040c51) bg_cale_heading_pane_ParamLimits

0x27a8,	// (0x00040c7a) bg_cale_pane_cp01_ParamLimits

0x27ca,	// (0x00040c9c) cale_week_corner_pane_ParamLimits

0x27e9,	// (0x00040cbb) cale_week_day_heading_pane_ParamLimits

0x2817,	// (0x00040ce9) cale_week_scroll_pane_g1_ParamLimits

0x283b,	// (0x00040d0d) cale_week_scroll_pane_g2_ParamLimits

0x2853,	// (0x00040d25) cale_week_scroll_pane_g3_ParamLimits

0x286b,	// (0x00040d3d) cale_week_scroll_pane_g4_ParamLimits

0x2883,	// (0x00040d55) cale_week_scroll_pane_g5_ParamLimits

0x289b,	// (0x00040d6d) cale_week_scroll_pane_g6_ParamLimits

0x28bb,	// (0x00040d8d) cale_week_scroll_pane_g7_ParamLimits

0x28db,	// (0x00040dad) cale_week_scroll_pane_g8_ParamLimits

0x28fb,	// (0x00040dcd) cale_week_scroll_pane_g9_ParamLimits

0x2918,	// (0x00040dea) cale_week_scroll_pane_g10_ParamLimits

0x2935,	// (0x00040e07) cale_week_scroll_pane_g11_ParamLimits

0x2952,	// (0x00040e24) cale_week_scroll_pane_g12_ParamLimits

0x296f,	// (0x00040e41) cale_week_scroll_pane_g13_ParamLimits

0x2994,	// (0x00040e66) cale_week_scroll_pane_g14_ParamLimits

0x29bd,	// (0x00040e8f) cale_week_scroll_pane_g15_ParamLimits

0xf1b0,	// (0x0004d682) cale_week_scroll_pane_g_ParamLimits

0x2a06,	// (0x00040ed8) cale_week_time_pane_ParamLimits

0x2a26,	// (0x00040ef8) grid_cale_week_pane_ParamLimits

0xaa29,	// (0x00048efb) listscroll_cale_week_pane_t1

0xaa3b,	// (0x00048f0d) scroll_pane_cp08_ParamLimits

0x3854,	// (0x00041d26) cale_month_corner_pane_ParamLimits

0xadee,	// (0x000492c0) cale_month_pane_t1

0x3cf8,	// (0x000421ca) cale_month_week_pane_ParamLimits

0xb2d5,	// (0x000497a7) popup_call_status_window_g1_ParamLimits

0x44c5,	// (0x00042997) popup_call_status_window_g2_ParamLimits

0x44d1,	// (0x000429a3) popup_call_status_window_g3_ParamLimits

0xf356,	// (0x0004d828) popup_call_status_window_g_ParamLimits

0xb184,	// (0x00049656) aid_call2_pane

0x0d90,	// (0x0003f262) msg_header_pane_g1

0x4f4c,	// (0x0004341e) postcard_address2_pane_ParamLimits

0x4f4c,	// (0x0004341e) postcard_address2_pane

0x4f5a,	// (0x0004342c) postcard_message2_pane_ParamLimits

0x4f5a,	// (0x0004342c) postcard_message2_pane

0x5763,	// (0x00043c35) message2_row_pane_ParamLimits

0x5763,	// (0x00043c35) message2_row_pane

0x577d,	// (0x00043c4f) address2_row_pane_ParamLimits

0x577d,	// (0x00043c4f) address2_row_pane

0xc889,	// (0x0004ad5b) postcard_message2_row_pane_g1

0xc891,	// (0x0004ad63) postcard_message2_row_pane_t1

0xc889,	// (0x0004ad5b) address2_row_pane_g1

0xc891,	// (0x0004ad63) address2_row_pane_t1

0x2f8e,	// (0x00041460) aid_size_cell_vorec

0xa5b4,	// (0x00048a86) main_rss_pane

0x5790,	// (0x00043c62) rss_list_single_pane_ParamLimits

0x5790,	// (0x00043c62) rss_list_single_pane

0xc89f,	// (0x0004ad71) rss_list_single_pane_t1

0xc8ad,	// (0x0004ad7f) rss_list_single_pane_t2

0x0001,

0xf601,	// (0x0004dad3) rss_list_single_pane_t

0xa5b4,	// (0x00048a86) main_camera2_pane

0xa5b4,	// (0x00048a86) main_video2_pane

0x59bd,	// (0x00043e8f) cams_zoom_pane_cp2_ParamLimits

0x59bd,	// (0x00043e8f) cams_zoom_pane_cp2

0x59c9,	// (0x00043e9b) image2_vga_pane_ParamLimits

0x59c9,	// (0x00043e9b) image2_vga_pane

0x59d8,	// (0x00043eaa) main_camera2_pane_g1_ParamLimits

0x59d8,	// (0x00043eaa) main_camera2_pane_g1

0x59e4,	// (0x00043eb6) main_camera2_pane_g2_ParamLimits

0x59e4,	// (0x00043eb6) main_camera2_pane_g2

0x59f0,	// (0x00043ec2) main_camera2_pane_g3_ParamLimits

0x59f0,	// (0x00043ec2) main_camera2_pane_g3

0x59fc,	// (0x00043ece) main_camera2_pane_g4_ParamLimits

0x59fc,	// (0x00043ece) main_camera2_pane_g4

0x5a08,	// (0x00043eda) main_camera2_pane_g5_ParamLimits

0x5a08,	// (0x00043eda) main_camera2_pane_g5

0x5a14,	// (0x00043ee6) main_camera2_pane_g6_ParamLimits

0x5a14,	// (0x00043ee6) main_camera2_pane_g6

0x5a20,	// (0x00043ef2) main_camera2_pane_g7_ParamLimits

0x5a20,	// (0x00043ef2) main_camera2_pane_g7

0x5a2c,	// (0x00043efe) main_camera2_pane_g8_ParamLimits

0x5a2c,	// (0x00043efe) main_camera2_pane_g8

0x0008,

0xf622,	// (0x0004daf4) main_camera2_pane_g_ParamLimits

0xf622,	// (0x0004daf4) main_camera2_pane_g

0x5a44,	// (0x00043f16) main_camera2_pane_t1_ParamLimits

0x5a44,	// (0x00043f16) main_camera2_pane_t1

0x5a56,	// (0x00043f28) main_camera2_pane_t2_ParamLimits

0x5a56,	// (0x00043f28) main_camera2_pane_t2

0x5a68,	// (0x00043f3a) main_camera2_pane_t3_ParamLimits

0x5a68,	// (0x00043f3a) main_camera2_pane_t3

0x5a7a,	// (0x00043f4c) main_camera2_pane_t4_ParamLimits

0x5a7a,	// (0x00043f4c) main_camera2_pane_t4

0x0006,

0xf635,	// (0x0004db07) main_camera2_pane_t_ParamLimits

0xf635,	// (0x0004db07) main_camera2_pane_t

0x5ad7,	// (0x00043fa9) cams_zoom_pane_cp4_ParamLimits

0x5ad7,	// (0x00043fa9) cams_zoom_pane_cp4

0x5ae7,	// (0x00043fb9) image2_cif_pane_ParamLimits

0x5ae7,	// (0x00043fb9) image2_cif_pane

0x5afc,	// (0x00043fce) image2_subqcif_pane_ParamLimits

0x5afc,	// (0x00043fce) image2_subqcif_pane

0x5b0b,	// (0x00043fdd) main_video2_pane_g1_ParamLimits

0x5b0b,	// (0x00043fdd) main_video2_pane_g1

0x5b1d,	// (0x00043fef) main_video2_pane_g2_ParamLimits

0x5b1d,	// (0x00043fef) main_video2_pane_g2

0x5b2d,	// (0x00043fff) main_video2_pane_g3_ParamLimits

0x5b2d,	// (0x00043fff) main_video2_pane_g3

0x5b3d,	// (0x0004400f) main_video2_pane_g4_ParamLimits

0x5b3d,	// (0x0004400f) main_video2_pane_g4

0x5b4d,	// (0x0004401f) main_video2_pane_g5_ParamLimits

0x5b4d,	// (0x0004401f) main_video2_pane_g5

0x5b5d,	// (0x0004402f) main_video2_pane_g6_ParamLimits

0x5b5d,	// (0x0004402f) main_video2_pane_g6

0x0005,

0xf644,	// (0x0004db16) main_video2_pane_g_ParamLimits

0xf644,	// (0x0004db16) main_video2_pane_g

0x5b6f,	// (0x00044041) main_video2_pane_t1_ParamLimits

0x5b6f,	// (0x00044041) main_video2_pane_t1

0x5b89,	// (0x0004405b) main_video2_pane_t2_ParamLimits

0x5b89,	// (0x0004405b) main_video2_pane_t2

0x5baf,	// (0x00044081) main_video2_pane_t3_ParamLimits

0x5baf,	// (0x00044081) main_video2_pane_t3

0x0002,

0xf651,	// (0x0004db23) main_video2_pane_t_ParamLimits

0xf651,	// (0x0004db23) main_video2_pane_t

0x54ab,	// (0x0004397d) call_muted_g2

0x0001,

0xf5f3,	// (0x0004dac5) call_muted_g

0xa5b4,	// (0x00048a86) main_mup2_pane

0xc90e,	// (0x0004ade0) main_mup2_pane_g1_ParamLimits

0xc90e,	// (0x0004ade0) main_mup2_pane_g1

0x5bd5,	// (0x000440a7) main_mup2_pane_g2_ParamLimits

0x5bd5,	// (0x000440a7) main_mup2_pane_g2

0x5e67,	// (0x00044339) main_mup_pane_g13_cp1

0x5e6f,	// (0x00044341) mup_volume_pane_cp1

0x5bf7,	// (0x000440c9) main_mup2_pane_g4_ParamLimits

0x5bf7,	// (0x000440c9) main_mup2_pane_g4

0x5c0c,	// (0x000440de) main_mup2_pane_g5_ParamLimits

0x5c0c,	// (0x000440de) main_mup2_pane_g5

0x5c21,	// (0x000440f3) main_mup2_pane_g6_ParamLimits

0x5c21,	// (0x000440f3) main_mup2_pane_g6

0x5c36,	// (0x00044108) main_mup2_pane_g7_ParamLimits

0x5c36,	// (0x00044108) main_mup2_pane_g7

0x0006,

0xf658,	// (0x0004db2a) main_mup2_pane_g_ParamLimits

0xf658,	// (0x0004db2a) main_mup2_pane_g

0x5c52,	// (0x00044124) main_mup2_pane_t1_ParamLimits

0x5c52,	// (0x00044124) main_mup2_pane_t1

0x5c69,	// (0x0004413b) main_mup2_pane_t2_ParamLimits

0x5c69,	// (0x0004413b) main_mup2_pane_t2

0x5c80,	// (0x00044152) main_mup2_pane_t3_ParamLimits

0x5c80,	// (0x00044152) main_mup2_pane_t3

0x5c97,	// (0x00044169) main_mup2_pane_t4_ParamLimits

0x5c97,	// (0x00044169) main_mup2_pane_t4

0x5cb1,	// (0x00044183) main_mup2_pane_t5_ParamLimits

0x5cb1,	// (0x00044183) main_mup2_pane_t5

0x5ccb,	// (0x0004419d) main_mup2_pane_t6_ParamLimits

0x5ccb,	// (0x0004419d) main_mup2_pane_t6

0x0005,

0xf667,	// (0x0004db39) main_mup2_pane_t_ParamLimits

0xf667,	// (0x0004db39) main_mup2_pane_t

0x5d03,	// (0x000441d5) mup2_visualizer_pane_ParamLimits

0x5d03,	// (0x000441d5) mup2_visualizer_pane

0x5d39,	// (0x0004420b) mup_progress_pane_cp_ParamLimits

0x5d39,	// (0x0004420b) mup_progress_pane_cp

0x5e52,	// (0x00044324) mup_volume_pane_cp_ParamLimits

0x5e52,	// (0x00044324) mup_volume_pane_cp

0x5d52,	// (0x00044224) mup2_visualizer_pane_g1_ParamLimits

0x5d52,	// (0x00044224) mup2_visualizer_pane_g1

0xc91a,	// (0x0004adec) mup2_visualizer_pane_g2_ParamLimits

0xc91a,	// (0x0004adec) mup2_visualizer_pane_g2

0x5d67,	// (0x00044239) mup2_visualizer_pane_g3_ParamLimits

0x5d67,	// (0x00044239) mup2_visualizer_pane_g3

0x0002,

0xf674,	// (0x0004db46) mup2_visualizer_pane_g_ParamLimits

0xf674,	// (0x0004db46) mup2_visualizer_pane_g

0xb6e2,	// (0x00049bb4) aid_size_cell_fmradio

0x55c1,	// (0x00043a93) aid_height_parent_landcape

0xac4c,	// (0x0004911e) wml_content_pane_cp

0xac54,	// (0x00049126) wml_tabs_pane

0xac5d,	// (0x0004912f) popup_wml_miniature_window

0xac65,	// (0x00049137) scroll_pane_cp021

0xac79,	// (0x0004914b) wml_content_pane_comp8

0xa5b4,	// (0x00048a86) bg_popup_sub_pane_cp05

0xc938,	// (0x0004ae0a) popup_wml_miniature_window_g1

0xc940,	// (0x0004ae12) wml_miniature_view_pane

0x5d75,	// (0x00044247) aid_size_wml_view

0x5d7d,	// (0x0004424f) wml_miniature_view_pane_g1

0x5d86,	// (0x00044258) wml_miniature_view_pane_g2

0x5d8f,	// (0x00044261) wml_miniature_view_pane_g3

0x5d97,	// (0x00044269) wml_miniature_view_pane_g4

0x5d9f,	// (0x00044271) wml_miniature_view_pane_g5

0x5da7,	// (0x00044279) wml_miniature_view_pane_g6

0x5daf,	// (0x00044281) wml_miniature_view_pane_g7

0x5db7,	// (0x00044289) wml_miniature_view_pane_g8

0x0007,

0xf67b,	// (0x0004db4d) wml_miniature_view_pane_g

0xc90e,	// (0x0004ade0) background_graphic_ParamLimits

0xc90e,	// (0x0004ade0) background_graphic

0xc948,	// (0x0004ae1a) wml_tabs_2_pane

0xc951,	// (0x0004ae23) wml_tabs_3_pane_ParamLimits

0xc951,	// (0x0004ae23) wml_tabs_3_pane

0xc963,	// (0x0004ae35) wml_tabs_4_pane_ParamLimits

0xc963,	// (0x0004ae35) wml_tabs_4_pane

0xc979,	// (0x0004ae4b) wml_tabs_5_pane_ParamLimits

0xc979,	// (0x0004ae4b) wml_tabs_5_pane

0xc993,	// (0x0004ae65) wml_tabs_pane_g2_ParamLimits

0xc993,	// (0x0004ae65) wml_tabs_pane_g2

0xc9a7,	// (0x0004ae79) wml_tabs_pane_g3_ParamLimits

0xc9a7,	// (0x0004ae79) wml_tabs_pane_g3

0x5dbf,	// (0x00044291) wml_tabs_2_active_pane_ParamLimits

0x5dbf,	// (0x00044291) wml_tabs_2_active_pane

0x5dd1,	// (0x000442a3) wml_tabs_2_passive_pane_ParamLimits

0x5dd1,	// (0x000442a3) wml_tabs_2_passive_pane

0x5de3,	// (0x000442b5) wml_tabs_3_active_pane_cp_ParamLimits

0x5de3,	// (0x000442b5) wml_tabs_3_active_pane_cp

0x5df6,	// (0x000442c8) wml_tabs_3_passive_pane_ParamLimits

0x5df6,	// (0x000442c8) wml_tabs_3_passive_pane

0x5e07,	// (0x000442d9) wml_tabs_3_passive_pane_cp_ParamLimits

0x5e07,	// (0x000442d9) wml_tabs_3_passive_pane_cp

0x5e1c,	// (0x000442ee) tabs_4_active_pane

0x5e24,	// (0x000442f6) tabs_4_passive_pane

0x5e2c,	// (0x000442fe) tabs_4_passive_pane_cp

0x5e34,	// (0x00044306) tabs_4_passive_pane_cp2

0x5386,	// (0x00043858) aid_height_text

0x4b2c,	// (0x00042ffe) mup_volume_cont_pane_ParamLimits

0x4b2c,	// (0x00042ffe) mup_volume_cont_pane

0x22bd,	// (0x0004078f) aid_size_cell_pinb

0x22c7,	// (0x00040799) aid_size_list_pinb

0x5d22,	// (0x000441f4) mup2_volume_cont_pane_ParamLimits

0x5d22,	// (0x000441f4) mup2_volume_cont_pane

0x5e3e,	// (0x00044310) mup2_volume_cont_pane_g1_ParamLimits

0x5e3e,	// (0x00044310) mup2_volume_cont_pane_g1

0x1f37,	// (0x00040409) aid_size_cell_touch_ParamLimits

0x1f37,	// (0x00040409) aid_size_cell_touch

0x21a7,	// (0x00040679) touch_pane_ParamLimits

0x21a7,	// (0x00040679) touch_pane

0xa148,	// (0x0004861a) main_rss2_pane

0xc9c4,	// (0x0004ae96) listscroll_rss2_pane

0xc9cd,	// (0x0004ae9f) rss2_navigation_pane

0xc9d5,	// (0x0004aea7) list_rss2_pane

0xb2a8,	// (0x0004977a) scroll_pane_cp22

0xc9dd,	// (0x0004aeaf) rss2_navigation_pane_g1

0xc9e6,	// (0x0004aeb8) rss2_navigation_pane_g2

0xc9ee,	// (0x0004aec0) rss2_navigation_pane_g3

0x0002,

0xf68c,	// (0x0004db5e) rss2_navigation_pane_g

0xc9f6,	// (0x0004aec8) rss2_navigation_pane_t1

0x5e77,	// (0x00044349) rss2_list_single_pane_ParamLimits

0x5e77,	// (0x00044349) rss2_list_single_pane

0xca04,	// (0x0004aed6) rss2_list_single_pane_t2

0xca12,	// (0x0004aee4) rss2_list_single_pane_t3_ParamLimits

0xca12,	// (0x0004aee4) rss2_list_single_pane_t3

0xca2f,	// (0x0004af01) rss2_list_single_pane_t4

0x4357,	// (0x00042829) smil_status_pane_g1

0xa9e1,	// (0x00048eb3) main_image2_pane_ParamLimits

0xa9e1,	// (0x00048eb3) main_image2_pane

0x5a38,	// (0x00043f0a) main_camera2_pane_g9_ParamLimits

0x5a38,	// (0x00043f0a) main_camera2_pane_g9

0x5a8c,	// (0x00043f5e) main_camera2_pane_t5_ParamLimits

0x5a8c,	// (0x00043f5e) main_camera2_pane_t5

0x5a9e,	// (0x00043f70) main_camera2_pane_t6_ParamLimits

0x5a9e,	// (0x00043f70) main_camera2_pane_t6

0x5e9a,	// (0x0004436c) main_image2_pane_g1_ParamLimits

0x5e9a,	// (0x0004436c) main_image2_pane_g1

0x5123,	// (0x000435f5) smil2_video_pane_ParamLimits

0x5123,	// (0x000435f5) smil2_video_pane

0x0b54,	// (0x0003f026) aid_zoom_text_primary_cp

0xa197,	// (0x00048669) popup_preview_fixed_window

0xabb5,	// (0x00049087) im_reading_pane_g1

0x5982,	// (0x00043e54) cams2_bc_adjust_pane_cp_ParamLimits

0x5982,	// (0x00043e54) cams2_bc_adjust_pane_cp

0x5ac9,	// (0x00043f9b) cams2_bc_adjust_pane_ParamLimits

0x5ac9,	// (0x00043f9b) cams2_bc_adjust_pane

0x5ea6,	// (0x00044378) cams2_bc_adjust_pane_g1

0x5eae,	// (0x00044380) cams2_slider_pane

0x5eb7,	// (0x00044389) cams2_slider_pane_g1

0x5ec0,	// (0x00044392) cams2_slider_pane_g2

0x0006,

0xf693,	// (0x0004db65) cams2_slider_pane_g

0x23c2,	// (0x00040894) calc_display_pane_ParamLimits

0x23e0,	// (0x000408b2) calc_paper_pane_ParamLimits

0x23fc,	// (0x000408ce) grid_calc_pane_ParamLimits

0x452f,	// (0x00042a01) popup_clock_digital_window_t1_ParamLimits

0xb67f,	// (0x00049b51) main_image_pane_t1

0x23a8,	// (0x0004087a) aid_size_cell_calc_ParamLimits

0x23a8,	// (0x0004087a) aid_size_cell_calc

0x55f3,	// (0x00043ac5) popup_blid_sat_info2_window_ParamLimits

0x55f3,	// (0x00043ac5) popup_blid_sat_info2_window

0xca45,	// (0x0004af17) aid_size_cell_blid

0xca4d,	// (0x0004af1f) bg_popup_window_pane_cp07

0xca70,	// (0x0004af42) grid_popup_blid_pane

0xca7a,	// (0x0004af4c) heading_pane_cp05_ParamLimits

0xca7a,	// (0x0004af4c) heading_pane_cp05

0xcb44,	// (0x0004b016) cell_popup_blid_pane_ParamLimits

0xcb44,	// (0x0004b016) cell_popup_blid_pane

0xcb6e,	// (0x0004b040) cell_popup_blid_pane_g1

0xcb76,	// (0x0004b048) cell_popup_blid_pane_t1

0x5ce8,	// (0x000441ba) mup2_indicator_pane_ParamLimits

0x5ce8,	// (0x000441ba) mup2_indicator_pane

0xaab8,	// (0x00048f8a) mup2_visualizer_osc_pane

0xc926,	// (0x0004adf8) mup2_visualizer_spec_pane_ParamLimits

0xc926,	// (0x0004adf8) mup2_visualizer_spec_pane

0x5eda,	// (0x000443ac) mup2_spec_half_pane

0x5ee3,	// (0x000443b5) mup2_spec_half_pane_cp

0x5eed,	// (0x000443bf) mup2_spec_bar_pane_ParamLimits

0x5eed,	// (0x000443bf) mup2_spec_bar_pane

0xc8bb,	// (0x0004ad8d) mup2_spec_bar_pane_g1

0xc8c5,	// (0x0004ad97) mup2_spec_bar_pane_g2

0x0001,

0xf606,	// (0x0004dad8) mup2_spec_bar_pane_g

0x5f0c,	// (0x000443de) mup2_osc_middle_pane

0xc8d7,	// (0x0004ada9) mup2_visualizer_osc_pane_g1

0xa1c1,	// (0x00048693) popup_number_entry_window_t1_ParamLimits

0xa1d4,	// (0x000486a6) popup_number_entry_window_t2_ParamLimits

0xa1e6,	// (0x000486b8) popup_number_entry_window_t3_ParamLimits

0x21fe,	// (0x000406d0) popup_number_entry_window_t5_ParamLimits

0x21fe,	// (0x000406d0) popup_number_entry_window_t5

0xf0ca,	// (0x0004d59c) popup_number_entry_window_t_ParamLimits

0xa1f8,	// (0x000486ca) text_title_cp2_ParamLimits

0x4e10,	// (0x000432e2) aid_hotspot_pointer_text2_pane

0x4eaa,	// (0x0004337c) main_viewer_pane_g9_ParamLimits

0x4eaa,	// (0x0004337c) main_viewer_pane_g9

0xadee,	// (0x000492c0) cale_month_pane_t1_ParamLimits

0xae14,	// (0x000492e6) bg_cale_pane_ParamLimits

0xae2c,	// (0x000492fe) list_cale_pane_ParamLimits

0xae3d,	// (0x0004930f) listscroll_cale_day_pane_t1

0xae4f,	// (0x00049321) scroll_pane_cp09_ParamLimits

0x4b6b,	// (0x0004303d) main_mup_eq_pane_t1_ParamLimits

0x4b6b,	// (0x0004303d) main_mup_eq_pane_t1

0x4b87,	// (0x00043059) main_mup_eq_pane_t2_ParamLimits

0x4b87,	// (0x00043059) main_mup_eq_pane_t2

0x4ba3,	// (0x00043075) main_mup_eq_pane_t3_ParamLimits

0x4ba3,	// (0x00043075) main_mup_eq_pane_t3

0x4bbd,	// (0x0004308f) main_mup_eq_pane_t4_ParamLimits

0x4bbd,	// (0x0004308f) main_mup_eq_pane_t4

0x4bd7,	// (0x000430a9) main_mup_eq_pane_t5_ParamLimits

0x4bd7,	// (0x000430a9) main_mup_eq_pane_t5

0x4bf1,	// (0x000430c3) main_mup_eq_pane_t6_ParamLimits

0x4bf1,	// (0x000430c3) main_mup_eq_pane_t6

0x4c07,	// (0x000430d9) main_mup_eq_pane_t7_ParamLimits

0x4c07,	// (0x000430d9) main_mup_eq_pane_t7

0x4c1d,	// (0x000430ef) main_mup_eq_pane_t8_ParamLimits

0x4c1d,	// (0x000430ef) main_mup_eq_pane_t8

0x4c33,	// (0x00043105) main_mup_eq_pane_t9_ParamLimits

0x4c33,	// (0x00043105) main_mup_eq_pane_t9

0x4c4f,	// (0x00043121) main_mup_eq_pane_t10_ParamLimits

0x4c4f,	// (0x00043121) main_mup_eq_pane_t10

0x0009,

0xf455,	// (0x0004d927) main_mup_eq_pane_t_ParamLimits

0xf455,	// (0x0004d927) main_mup_eq_pane_t

0x4d14,	// (0x000431e6) mup_equalizer_pane_cp5_ParamLimits

0x4d2c,	// (0x000431fe) mup_equalizer_pane_cp6_ParamLimits

0x4d44,	// (0x00043216) mup_equalizer_pane_cp7_ParamLimits

0xa148,	// (0x0004861a) main_gallery_pane

0xc8e0,	// (0x0004adb2) smil2_volume_pane

0xc8e8,	// (0x0004adba) smil_status_volume_pane_g1_ParamLimits

0xc8fb,	// (0x0004adcd) smil_status_volume_pane_g2_ParamLimits

0x57ed,	// (0x00043cbf) smil_status_volume_pane_g3_ParamLimits

0xf60b,	// (0x0004dadd) smil_status_volume_pane_g_ParamLimits

0xca4d,	// (0x0004af1f) bg_popup_window_pane_cp07_ParamLimits

0xca5b,	// (0x0004af2d) blid_firmament_pane

0x5f15,	// (0x000443e7) aid_size_cell_gallery_ParamLimits

0x5f15,	// (0x000443e7) aid_size_cell_gallery

0x5f23,	// (0x000443f5) grid_gallery_pane_ParamLimits

0x5f23,	// (0x000443f5) grid_gallery_pane

0x5f33,	// (0x00044405) cell_gallery_pane_ParamLimits

0x5f33,	// (0x00044405) cell_gallery_pane

0xcb84,	// (0x0004b056) bg_cell_gallery_focus_pane_ParamLimits

0xcb84,	// (0x0004b056) bg_cell_gallery_focus_pane

0xcb96,	// (0x0004b068) cell_gallery_pane_g1_ParamLimits

0xcb96,	// (0x0004b068) cell_gallery_pane_g1

0x5f79,	// (0x0004444b) cell_gallery_pane_g2_ParamLimits

0x5f79,	// (0x0004444b) cell_gallery_pane_g2

0x5f86,	// (0x00044458) cell_gallery_pane_g3_ParamLimits

0x5f86,	// (0x00044458) cell_gallery_pane_g3

0xcba2,	// (0x0004b074) cell_gallery_pane_g4_ParamLimits

0xcba2,	// (0x0004b074) cell_gallery_pane_g4

0x0003,

0xf6b9,	// (0x0004db8b) cell_gallery_pane_g_ParamLimits

0xf6b9,	// (0x0004db8b) cell_gallery_pane_g

0xcbae,	// (0x0004b080) bg_cell_gallery_focus_pane_g1

0xcbb6,	// (0x0004b088) bg_cell_gallery_focus_pane_g2

0xcbbe,	// (0x0004b090) bg_cell_gallery_focus_pane_g3

0xcbc6,	// (0x0004b098) bg_cell_gallery_focus_pane_g4

0xcbce,	// (0x0004b0a0) bg_cell_gallery_focus_pane_g5

0xcbd6,	// (0x0004b0a8) bg_cell_gallery_focus_pane_g6

0xcbde,	// (0x0004b0b0) bg_cell_gallery_focus_pane_g7

0xcbe6,	// (0x0004b0b8) bg_cell_gallery_focus_pane_g8

0x0007,

0xf6c2,	// (0x0004db94) bg_cell_gallery_focus_pane_g

0xcbee,	// (0x0004b0c0) aid_firma_cardinal

0xcc02,	// (0x0004b0d4) blid_firmament_pane_t1

0xcc19,	// (0x0004b0eb) blid_firmament_pane_t2

0xcc30,	// (0x0004b102) blid_firmament_pane_t3

0xcc47,	// (0x0004b119) blid_firmament_pane_t4

0x0003,

0xf6d3,	// (0x0004dba5) blid_firmament_pane_t

0xcc5e,	// (0x0004b130) blid_sat_info_pane

0xcc6e,	// (0x0004b140) blid_sat_info_pane_g1

0xcc6e,	// (0x0004b140) blid_sat_info_pane_g2

0x0001,

0xf6dc,	// (0x0004dbae) blid_sat_info_pane_g

0xcc78,	// (0x0004b14a) blid_sat_info_pane_t1

0xcc86,	// (0x0004b158) smil2_volume_content_pane

0xcc8f,	// (0x0004b161) smil2_volume_pane_g1

0xcc97,	// (0x0004b169) smil2_volume_content_pane_g1

0xcca0,	// (0x0004b172) smil2_volume_content_pane_g2

0xcca9,	// (0x0004b17b) smil2_volume_content_pane_g3

0xccc6,	// (0x0004b198) smil2_volume_content_pane_g4

0xcccf,	// (0x0004b1a1) smil2_volume_content_pane_g5

0xccd8,	// (0x0004b1aa) smil2_volume_content_pane_g6

0xcce1,	// (0x0004b1b3) smil2_volume_content_pane_g7

0xccea,	// (0x0004b1bc) smil2_volume_content_pane_g8

0xccf3,	// (0x0004b1c5) smil2_volume_content_pane_g9

0xccfc,	// (0x0004b1ce) smil2_volume_content_pane_g10

0x0009,

0xf6e1,	// (0x0004dbb3) smil2_volume_content_pane_g

0x2ae9,	// (0x00040fbb) cale_week_day_heading_pane_t1_ParamLimits

0x2b31,	// (0x00041003) cale_week_day_heading_pane_t2_ParamLimits

0x2b7e,	// (0x00041050) cale_week_day_heading_pane_t3_ParamLimits

0x2bcb,	// (0x0004109d) cale_week_day_heading_pane_t4_ParamLimits

0x2c18,	// (0x000410ea) cale_week_day_heading_pane_t5_ParamLimits

0x2c65,	// (0x00041137) cale_week_day_heading_pane_t6_ParamLimits

0x2cb2,	// (0x00041184) cale_week_day_heading_pane_t7_ParamLimits

0xf1d1,	// (0x0004d6a3) cale_week_day_heading_pane_t_ParamLimits

0xaa5d,	// (0x00048f2f) bg_cale_side_pane_ParamLimits

0x2cfa,	// (0x000411cc) cale_week_time_pane_t1_ParamLimits

0x2d3e,	// (0x00041210) cale_week_time_pane_t2_ParamLimits

0x2d82,	// (0x00041254) cale_week_time_pane_t3_ParamLimits

0x2dc6,	// (0x00041298) cale_week_time_pane_t4_ParamLimits

0x2e0a,	// (0x000412dc) cale_week_time_pane_t5_ParamLimits

0x2e4e,	// (0x00041320) cale_week_time_pane_t6_ParamLimits

0x2e92,	// (0x00041364) cale_week_time_pane_t7_ParamLimits

0x2ede,	// (0x000413b0) cale_week_time_pane_t8_ParamLimits

0xf1e0,	// (0x0004d6b2) cale_week_time_pane_t_ParamLimits

0x2f2c,	// (0x000413fe) cell_cale_week_pane_g2_ParamLimits

0xaa5d,	// (0x00048f2f) bg_cale_side_pane_cp01_ParamLimits

0x415e,	// (0x00042630) cale_month_week_pane_t1_ParamLimits

0x4177,	// (0x00042649) cale_month_week_pane_t2_ParamLimits

0x4190,	// (0x00042662) cale_month_week_pane_t3_ParamLimits

0x41a9,	// (0x0004267b) cale_month_week_pane_t4_ParamLimits

0x41c2,	// (0x00042694) cale_month_week_pane_t5_ParamLimits

0x41dd,	// (0x000426af) cale_month_week_pane_t6_ParamLimits

0xf2b5,	// (0x0004d787) cale_month_week_pane_t_ParamLimits

0x4320,	// (0x000427f2) cell_cale_month_pane_g1_ParamLimits

0xa148,	// (0x0004861a) main_cale_event_viewer_pane

0xa148,	// (0x0004861a) listscroll_cale_event_viewer_pane

0xcd05,	// (0x0004b1d7) list_cale_ev_pane

0xcd0d,	// (0x0004b1df) scroll_pane_cp023

0x5f93,	// (0x00044465) field_cale_ev_pane_ParamLimits

0x5f93,	// (0x00044465) field_cale_ev_pane

0xcd19,	// (0x0004b1eb) field_cale_ev_content_pane_ParamLimits

0xcd19,	// (0x0004b1eb) field_cale_ev_content_pane

0xcd25,	// (0x0004b1f7) field_cale_ev_pane_g1_ParamLimits

0xcd25,	// (0x0004b1f7) field_cale_ev_pane_g1

0xcd31,	// (0x0004b203) field_cale_ev_pane_g2_ParamLimits

0xcd31,	// (0x0004b203) field_cale_ev_pane_g2

0xcd49,	// (0x0004b21b) field_cale_ev_pane_g3_ParamLimits

0xcd49,	// (0x0004b21b) field_cale_ev_pane_g3

0x0002,

0xf6f6,	// (0x0004dbc8) field_cale_ev_pane_g_ParamLimits

0xf6f6,	// (0x0004dbc8) field_cale_ev_pane_g

0xcd61,	// (0x0004b233) field_cale_ev_pane_t1_ParamLimits

0xcd61,	// (0x0004b233) field_cale_ev_pane_t1

0x5fb7,	// (0x00044489) field_cale_ev_content_pane_t1_ParamLimits

0x5fb7,	// (0x00044489) field_cale_ev_content_pane_t1

0xb553,	// (0x00049a25) bg_button_pane_cp01

0x2749,	// (0x00040c1b) listscroll_cale_week_pane_ParamLimits

0x275b,	// (0x00040c2d) popup_toolbar_window_cp01

0xaa29,	// (0x00048efb) listscroll_cale_week_pane_t1_ParamLimits

0x2749,	// (0x00040c1b) listscroll_cale_day_pane_ParamLimits

0x275b,	// (0x00040c2d) popup_toolbar_window_cp02

0xae3d,	// (0x0004930f) listscroll_cale_day_pane_t1_ParamLimits

0x2749,	// (0x00040c1b) main_cale_month_pane_ParamLimits

0x56d7,	// (0x00043ba9) popup_toolbar_window_cp03_ParamLimits

0x56d7,	// (0x00043ba9) popup_toolbar_window_cp03

0x5033,	// (0x00043505) main_image_pane_g2_ParamLimits

0x5033,	// (0x00043505) main_image_pane_g2

0x503f,	// (0x00043511) main_image_pane_g3_ParamLimits

0x503f,	// (0x00043511) main_image_pane_g3

0x0002,

0xf4e7,	// (0x0004d9b9) main_image_pane_g_ParamLimits

0xf4e7,	// (0x0004d9b9) main_image_pane_g

0xb67f,	// (0x00049b51) main_image_pane_t1_ParamLimits

0x504b,	// (0x0004351d) main_image_pane_t2_ParamLimits

0x504b,	// (0x0004351d) main_image_pane_t2

0x505d,	// (0x0004352f) main_image_pane_t3_ParamLimits

0x505d,	// (0x0004352f) main_image_pane_t3

0x506f,	// (0x00043541) main_image_pane_t4_ParamLimits

0x506f,	// (0x00043541) main_image_pane_t4

0x0003,

0xf4ee,	// (0x0004d9c0) main_image_pane_t_ParamLimits

0xf4ee,	// (0x0004d9c0) main_image_pane_t

0x5081,	// (0x00043553) popup_image_details_window_cp01

0x508b,	// (0x0004355d) popup_toobar_trans_pane_cp01_ParamLimits

0x508b,	// (0x0004355d) popup_toobar_trans_pane_cp01

0x5648,	// (0x00043b1a) popup_image_details_window_ParamLimits

0x5648,	// (0x00043b1a) popup_image_details_window

0xc83f,	// (0x0004ad11) popup_image_focus_window

0x5974,	// (0x00043e46) camera2_autofocus_pane_ParamLimits

0x5974,	// (0x00043e46) camera2_autofocus_pane

0xa148,	// (0x0004861a) bg_popup_sub_pane_cp06

0xcd78,	// (0x0004b24a) popup_image_focus_window_g1

0xcd80,	// (0x0004b252) popup_image_focus_window_g2

0xcd88,	// (0x0004b25a) popup_image_focus_window_g3

0xcd90,	// (0x0004b262) popup_image_focus_window_g4

0x0003,

0xf6fd,	// (0x0004dbcf) popup_image_focus_window_g

0xcd98,	// (0x0004b26a) popup_image_focus_window_t1

0xcda6,	// (0x0004b278) popup_image_focus_window_t2

0xcdb6,	// (0x0004b288) popup_image_focus_window_t3

0x0002,

0xf706,	// (0x0004dbd8) popup_image_focus_window_t

0xcdc4,	// (0x0004b296) camera2_autofocus_pane_g1

0xa9e1,	// (0x00048eb3) bg_tb_trans_pane_cp01

0xcdd2,	// (0x0004b2a4) popup_image_details_window_g1

0xcde5,	// (0x0004b2b7) popup_image_details_window_g2

0x0002,

0xf718,	// (0x0004dbea) popup_image_details_window_g

0xce0e,	// (0x0004b2e0) popup_image_details_window_t1

0xce20,	// (0x0004b2f2) popup_image_details_window_t2

0xce39,	// (0x0004b30b) popup_image_details_window_t3

0xce4d,	// (0x0004b31f) popup_image_details_window_t4

0xce68,	// (0x0004b33a) popup_image_details_window_t5

0x0004,

0xf71f,	// (0x0004dbf1) popup_image_details_window_t

0xa8c0,	// (0x00048d92) bg_calc_paper_pane_ParamLimits

0xa148,	// (0x0004861a) grid_highlight_pane_cp013

0x24f9,	// (0x000409cb) list_calc_pane_ParamLimits

0x250b,	// (0x000409dd) scroll_pane_cp024

0xa8d4,	// (0x00048da6) bg_calc_display_pane_ParamLimits

0x2513,	// (0x000409e5) calc_display_pane_t1_ParamLimits

0x2528,	// (0x000409fa) calc_display_pane_t2_ParamLimits

0x253d,	// (0x00040a0f) calc_display_pane_t3_ParamLimits

0xf151,	// (0x0004d623) calc_display_pane_t_ParamLimits

0x2611,	// (0x00040ae3) cell_calc_pane_g2

0x0001,

0xf16e,	// (0x0004d640) cell_calc_pane_g

0x261a,	// (0x00040aec) cell_calc_pane_t1

0xa933,	// (0x00048e05) grid_highlight_pane_cp02_ParamLimits

0xa949,	// (0x00048e1b) toolbar_button_pane_cp01_ParamLimits

0xa949,	// (0x00048e1b) toolbar_button_pane_cp01

0xb6c4,	// (0x00049b96) temp_image_control_pane_ParamLimits

0xb6c4,	// (0x00049b96) temp_image_control_pane

0xa9e1,	// (0x00048eb3) main_mp3_pane

0xce82,	// (0x0004b354) temp_image_control_pane_g1_ParamLimits

0xce82,	// (0x0004b354) temp_image_control_pane_g1

0xce90,	// (0x0004b362) temp_image_control_pane_g2_ParamLimits

0xce90,	// (0x0004b362) temp_image_control_pane_g2

0xcea2,	// (0x0004b374) temp_image_control_pane_g3_ParamLimits

0xcea2,	// (0x0004b374) temp_image_control_pane_g3

0x6002,	// (0x000444d4) temp_image_control_pane_g4_ParamLimits

0x6002,	// (0x000444d4) temp_image_control_pane_g4

0x0003,

0xf72a,	// (0x0004dbfc) temp_image_control_pane_g_ParamLimits

0xf72a,	// (0x0004dbfc) temp_image_control_pane_g

0xce82,	// (0x0004b354) main_mp3_pane_g1

0x6013,	// (0x000444e5) main_mp3_pane_g2

0x0007,

0xf733,	// (0x0004dc05) main_mp3_pane_g

0xcee5,	// (0x0004b3b7) main_mp3_pane_t1

0xaac0,	// (0x00048f92) main_camera_pane_g8_ParamLimits

0xaac0,	// (0x00048f92) main_camera_pane_g8

0x31c9,	// (0x0004169b) main_video_pane_g7_ParamLimits

0x31c9,	// (0x0004169b) main_video_pane_g7

0x5ab7,	// (0x00043f89) main_camera2_pane_t7_ParamLimits

0x5ab7,	// (0x00043f89) main_camera2_pane_t7

0xac0c,	// (0x000490de) scroll_pane_cp025_ParamLimits

0xac0c,	// (0x000490de) scroll_pane_cp025

0xac20,	// (0x000490f2) scroll_pane_cp026_ParamLimits

0xac20,	// (0x000490f2) scroll_pane_cp026

0xac2f,	// (0x00049101) wml_content_pane_ParamLimits

0xa148,	// (0x0004861a) main_touch_calib_pane

0x60b7,	// (0x00044589) main_touch_calib_pane_g1

0x60c3,	// (0x00044595) main_touch_calib_pane_g2

0x60cf,	// (0x000445a1) main_touch_calib_pane_g3

0x60db,	// (0x000445ad) main_touch_calib_pane_g4

0x0003,

0xf751,	// (0x0004dc23) main_touch_calib_pane_g

0x60e7,	// (0x000445b9) main_touch_calib_pane_t1

0x60fe,	// (0x000445d0) main_touch_calib_pane_t2

0x0004,

0xf75a,	// (0x0004dc2c) main_touch_calib_pane_t

0xb331,	// (0x00049803) mup_progress_pane_cp02

0xb350,	// (0x00049822) navi_pane_g1

0xb3b2,	// (0x00049884) navi_pane_mp_t3

0xa9e1,	// (0x00048eb3) main_mp3_pane_ParamLimits

0x5719,	// (0x00043beb) navi_pane_ParamLimits

0xce82,	// (0x0004b354) main_mp3_pane_g1_ParamLimits

0x6013,	// (0x000444e5) main_mp3_pane_g2_ParamLimits

0x601f,	// (0x000444f1) main_mp3_pane_g3_ParamLimits

0x601f,	// (0x000444f1) main_mp3_pane_g3

0x602b,	// (0x000444fd) main_mp3_pane_g4_ParamLimits

0x602b,	// (0x000444fd) main_mp3_pane_g4

0xceb2,	// (0x0004b384) main_mp3_pane_g5_ParamLimits

0xceb2,	// (0x0004b384) main_mp3_pane_g5

0xcec0,	// (0x0004b392) main_mp3_pane_g6_ParamLimits

0xcec0,	// (0x0004b392) main_mp3_pane_g6

0xcecd,	// (0x0004b39f) main_mp3_pane_g7_ParamLimits

0xcecd,	// (0x0004b39f) main_mp3_pane_g7

0xced9,	// (0x0004b3ab) main_mp3_pane_g8_ParamLimits

0xced9,	// (0x0004b3ab) main_mp3_pane_g8

0xf733,	// (0x0004dc05) main_mp3_pane_g_ParamLimits

0x6037,	// (0x00044509) main_mp3_pane_t2

0x6047,	// (0x00044519) main_mp3_pane_t3

0xcef3,	// (0x0004b3c5) main_mp3_pane_t4

0xcf01,	// (0x0004b3d3) main_mp3_pane_t5

0x0005,

0xf744,	// (0x0004dc16) main_mp3_pane_t

0xcf0f,	// (0x0004b3e1) mup_progress_pane_cp01

0x0b54,	// (0x0003f026) aid_zoom_text_secondary2

0xcd05,	// (0x0004b1d7) list_cale_ev2_pane

0xcd0d,	// (0x0004b1df) scroll_pane_cp023_ParamLimits

0xd547,	// (0x0004ba19) field_cale_ev2_pane_ParamLimits

0xd547,	// (0x0004ba19) field_cale_ev2_pane

0x0e05,	// (0x0003f2d7) field_cale_ev2_pane_g1_ParamLimits

0x0e05,	// (0x0003f2d7) field_cale_ev2_pane_g1

0x0e11,	// (0x0003f2e3) field_cale_ev2_pane_g2_ParamLimits

0x0e11,	// (0x0003f2e3) field_cale_ev2_pane_g2

0x0e29,	// (0x0003f2fb) field_cale_ev2_pane_g3_ParamLimits

0x0e29,	// (0x0003f2fb) field_cale_ev2_pane_g3

0x0003,

0xf765,	// (0x0004dc37) field_cale_ev2_pane_g_ParamLimits

0xf765,	// (0x0004dc37) field_cale_ev2_pane_g

0x0e4d,	// (0x0003f31f) field_cale_ev2_pane_t1_ParamLimits

0x0e4d,	// (0x0003f31f) field_cale_ev2_pane_t1

0x0e64,	// (0x0003f336) field_cale_ev2_pane_t2_ParamLimits

0x0e64,	// (0x0003f336) field_cale_ev2_pane_t2

0x0001,

0xf76e,	// (0x0004dc40) field_cale_ev2_pane_t_ParamLimits

0xf76e,	// (0x0004dc40) field_cale_ev2_pane_t

0x4f12,	// (0x000433e4) main_postcard_pane_g5_ParamLimits

0x4f12,	// (0x000433e4) main_postcard_pane_g5

0x4f20,	// (0x000433f2) main_postcard_pane_g6_ParamLimits

0x4f20,	// (0x000433f2) main_postcard_pane_g6

0x3007,	// (0x000414d9) camera2_autofocus_pane_cp_ParamLimits

0x3007,	// (0x000414d9) camera2_autofocus_pane_cp

0xa9e1,	// (0x00048eb3) main_mup3_pane

0x6179,	// (0x0004464b) main_mup3_pane_g1_ParamLimits

0x6179,	// (0x0004464b) main_mup3_pane_g1

0x619a,	// (0x0004466c) main_mup3_pane_g2_ParamLimits

0x619a,	// (0x0004466c) main_mup3_pane_g2

0x6216,	// (0x000446e8) main_mup3_pane_g3_ParamLimits

0x6216,	// (0x000446e8) main_mup3_pane_g3

0x625b,	// (0x0004472d) main_mup3_pane_g4_ParamLimits

0x625b,	// (0x0004472d) main_mup3_pane_g4

0x629e,	// (0x00044770) main_mup3_pane_g5_ParamLimits

0x629e,	// (0x00044770) main_mup3_pane_g5

0x62e3,	// (0x000447b5) main_mup3_pane_g6_ParamLimits

0x62e3,	// (0x000447b5) main_mup3_pane_g6

0xcf17,	// (0x0004b3e9) main_mup3_pane_g7_ParamLimits

0xcf17,	// (0x0004b3e9) main_mup3_pane_g7

0x0007,

0xf77e,	// (0x0004dc50) main_mup3_pane_g_ParamLimits

0xf77e,	// (0x0004dc50) main_mup3_pane_g

0x6359,	// (0x0004482b) main_mup3_pane_t1_ParamLimits

0x6359,	// (0x0004482b) main_mup3_pane_t1

0x63c2,	// (0x00044894) main_mup3_pane_t2_ParamLimits

0x63c2,	// (0x00044894) main_mup3_pane_t2

0x648b,	// (0x0004495d) main_mup3_pane_t4_ParamLimits

0x648b,	// (0x0004495d) main_mup3_pane_t4

0x64df,	// (0x000449b1) main_mup3_pane_t5_ParamLimits

0x64df,	// (0x000449b1) main_mup3_pane_t5

0x658d,	// (0x00044a5f) main_mup3_pane_t6_ParamLimits

0x658d,	// (0x00044a5f) main_mup3_pane_t6

0x0005,

0xf78f,	// (0x0004dc61) main_mup3_pane_t_ParamLimits

0xf78f,	// (0x0004dc61) main_mup3_pane_t

0x6639,	// (0x00044b0b) mup3_progress_pane_ParamLimits

0x6639,	// (0x00044b0b) mup3_progress_pane

0x66b3,	// (0x00044b85) popup_mup3_control_window_ParamLimits

0x66b3,	// (0x00044b85) popup_mup3_control_window

0xcf25,	// (0x0004b3f7) popup_mup3_text_window

0x66d0,	// (0x00044ba2) mup3_progress_pane_t1

0x66ef,	// (0x00044bc1) mup3_progress_pane_t2

0xcf2d,	// (0x0004b3ff) mup3_progress_pane_t3

0x0002,

0xf79c,	// (0x0004dc6e) mup3_progress_pane_t

0xcf4a,	// (0x0004b41c) mup_progress_pane_cp03

0xa148,	// (0x0004861a) bg_tb_trans_pane_cp04

0x670e,	// (0x00044be0) mup3_volume_pane

0x6716,	// (0x00044be8) popup_mup3_control_window_g1

0xd562,	// (0x0004ba34) mup3_volume_pane_g1

0xd56b,	// (0x0004ba3d) mup3_volume_pane_g2

0xd574,	// (0x0004ba46) mup3_volume_pane_g3

0x0002,

0xf7a3,	// (0x0004dc75) mup3_volume_pane_g

0xa148,	// (0x0004861a) bg_tb_trans_pane_cp03

0xcf5a,	// (0x0004b42c) popup_mup3_text_window_g1

0xcf62,	// (0x0004b434) popup_mup3_text_window_t1

0xa91c,	// (0x00048dee) list_calc_item_pane_g1_ParamLimits

0xc9bb,	// (0x0004ae8d) mup_volume_pane_cp_g1

0x6117,	// (0x000445e9) main_touch_calib_pane_t3

0x612d,	// (0x000445ff) main_touch_calib_pane_t4

0x6143,	// (0x00044615) main_touch_calib_pane_t5

0xa152,	// (0x00048624) aid_cell_size_toolbar2

0xa15a,	// (0x0004862c) aid_popup3_width_pane

0x0b4c,	// (0x0003f01e) aid_zoom_text_msg_primary

0x2fda,	// (0x000414ac) vorec_t7

0xa8e0,	// (0x00048db2) bg_calc_paper_pane_g1_ParamLimits

0xa8ec,	// (0x00048dbe) bg_calc_paper_pane_g2_ParamLimits

0xa8f8,	// (0x00048dca) bg_calc_paper_pane_g3_ParamLimits

0xa904,	// (0x00048dd6) bg_calc_paper_pane_g4_ParamLimits

0xa910,	// (0x00048de2) bg_calc_paper_pane_g5_ParamLimits

0x257e,	// (0x00040a50) bg_calc_paper_pane_g6_ParamLimits

0x258f,	// (0x00040a61) bg_calc_paper_pane_g7_ParamLimits

0x25a0,	// (0x00040a72) bg_calc_paper_pane_g8_ParamLimits

0xf158,	// (0x0004d62a) bg_calc_paper_pane_g_ParamLimits

0x25b3,	// (0x00040a85) calc_bg_paper_pane_g9_ParamLimits

0x30f8,	// (0x000415ca) image_qvga_pane_ParamLimits

0x30f8,	// (0x000415ca) image_qvga_pane

0xa80f,	// (0x00048ce1) bg_popup_sub_pane_cp04_ParamLimits

0xb5fb,	// (0x00049acd) popup_mup_playback_window_g1_ParamLimits

0xb607,	// (0x00049ad9) popup_mup_playback_window_t1_ParamLimits

0xb61c,	// (0x00049aee) popup_mup_playback_window_t2_ParamLimits

0xf4e2,	// (0x0004d9b4) popup_mup_playback_window_t_ParamLimits

0x5be6,	// (0x000440b8) main_mup2_pane_g3_ParamLimits

0x5be6,	// (0x000440b8) main_mup2_pane_g3

0x33a4,	// (0x00041876) popup_toolbar_window_cp04

0xba17,	// (0x00049ee9) popup_call2_audio_second_window_g3_ParamLimits

0xba17,	// (0x00049ee9) popup_call2_audio_second_window_g3

0xbe2d,	// (0x0004a2ff) popup_call2_audio_first_window_g4_ParamLimits

0xbe2d,	// (0x0004a2ff) popup_call2_audio_first_window_g4

0xc4ac,	// (0x0004a97e) popup_call2_audio_in_window_g4_ParamLimits

0xc4ac,	// (0x0004a97e) popup_call2_audio_in_window_g4

0x5026,	// (0x000434f8) aid_area_sk_bg_cut_ParamLimits

0x5026,	// (0x000434f8) aid_area_sk_bg_cut

0xb631,	// (0x00049b03) aid_area_sk_bg_cut_2_ParamLimits

0xb631,	// (0x00049b03) aid_area_sk_bg_cut_2

0x5f69,	// (0x0004443b) aid_placing_details_win

0x5f71,	// (0x00044443) aid_placing_details_win_2

0xcdc4,	// (0x0004b296) camera2_autofocus_pane_g1_ParamLimits

0x213d,	// (0x0004060f) popup_fixed_preview_cale_window_ParamLimits

0x213d,	// (0x0004060f) popup_fixed_preview_cale_window

0xb3f9,	// (0x000498cb) navi_slider_pane_g3

0xb402,	// (0x000498d4) navi_slider_pane_g4

0xb40b,	// (0x000498dd) navi_slider_pane_g5

0xb3f9,	// (0x000498cb) navi_slider_pane_g6

0x48d9,	// (0x00042dab) navi_slider_pane_g7

0xb520,	// (0x000499f2) mup_scale_pane_g3

0xb529,	// (0x000499fb) mup_scale_pane_g4

0xb532,	// (0x00049a04) mup_scale_pane_g5

0x4d5c,	// (0x0004322e) mup_scale_pane_g6

0x4d65,	// (0x00043237) mup_scale_pane_g7

0xb3f9,	// (0x000498cb) cams2_slider_pane_g3

0xca3d,	// (0x0004af0f) cams2_slider_pane_g4

0x5ec9,	// (0x0004439b) cams2_slider_pane_g5

0xb3f9,	// (0x000498cb) cams2_slider_pane_g6

0x5ed1,	// (0x000443a3) cams2_slider_pane_g7

0xcc6e,	// (0x0004b140) camera2_autofocus_pane_cp_g1

0xc811,	// (0x0004ace3) bg_popup_preview_window_pane_cp02_ParamLimits

0xc811,	// (0x0004ace3) bg_popup_preview_window_pane_cp02

0xcf70,	// (0x0004b442) list_fp_cale_pane_ParamLimits

0xcf70,	// (0x0004b442) list_fp_cale_pane

0xcf7c,	// (0x0004b44e) popup_fixed_preview_cale_window_t1_ParamLimits

0xcf7c,	// (0x0004b44e) popup_fixed_preview_cale_window_t1

0x671f,	// (0x00044bf1) popup_fixed_preview_cale_window_t2_ParamLimits

0x671f,	// (0x00044bf1) popup_fixed_preview_cale_window_t2

0x6734,	// (0x00044c06) popup_fixed_preview_cale_window_t3_ParamLimits

0x6734,	// (0x00044c06) popup_fixed_preview_cale_window_t3

0x0002,

0xf7aa,	// (0x0004dc7c) popup_fixed_preview_cale_window_t_ParamLimits

0xf7aa,	// (0x0004dc7c) popup_fixed_preview_cale_window_t

0x6749,	// (0x00044c1b) list_single_fp_cale_pane_ParamLimits

0x6749,	// (0x00044c1b) list_single_fp_cale_pane

0xcf9a,	// (0x0004b46c) list_single_fp_cale_pane_g1_ParamLimits

0xcf9a,	// (0x0004b46c) list_single_fp_cale_pane_g1

0xcfa6,	// (0x0004b478) list_single_fp_cale_pane_g2_ParamLimits

0xcfa6,	// (0x0004b478) list_single_fp_cale_pane_g2

0x0002,

0xf7b1,	// (0x0004dc83) list_single_fp_cale_pane_g_ParamLimits

0xf7b1,	// (0x0004dc83) list_single_fp_cale_pane_g

0xcfbf,	// (0x0004b491) list_single_fp_cale_pane_t1_ParamLimits

0xcfbf,	// (0x0004b491) list_single_fp_cale_pane_t1

0xcfd1,	// (0x0004b4a3) list_single_fp_cale_pane_t2_ParamLimits

0xcfd1,	// (0x0004b4a3) list_single_fp_cale_pane_t2

0x0001,

0xf7b8,	// (0x0004dc8a) list_single_fp_cale_pane_t_ParamLimits

0xf7b8,	// (0x0004dc8a) list_single_fp_cale_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0xa148,	// (0x0004861a) main_dialer_pane

0x6759,	// (0x00044c2b) aid_cell_size_keypad

0x6763,	// (0x00044c35) dialer_ne_pane

0x676d,	// (0x00044c3f) grid_dialer_command_1_pane

0x6775,	// (0x00044c47) grid_dialer_command_2_pane

0x677d,	// (0x00044c4f) grid_dialer_keypad_pane

0x6791,	// (0x00044c63) bg_popup_call_pane_cp06_ParamLimits

0x6791,	// (0x00044c63) bg_popup_call_pane_cp06

0x679d,	// (0x00044c6f) dialer_ne_clear_pane_ParamLimits

0x679d,	// (0x00044c6f) dialer_ne_clear_pane

0xd004,	// (0x0004b4d6) dialer_ne_pane_g1

0xd00c,	// (0x0004b4de) dialer_ne_pane_t1_ParamLimits

0xd00c,	// (0x0004b4de) dialer_ne_pane_t1

0x67a9,	// (0x00044c7b) dialer_ne_pane_t2_ParamLimits

0x67a9,	// (0x00044c7b) dialer_ne_pane_t2

0x67c6,	// (0x00044c98) dialer_ne_pane_t3_ParamLimits

0x67c6,	// (0x00044c98) dialer_ne_pane_t3

0x0002,

0xf7bd,	// (0x0004dc8f) dialer_ne_pane_t_ParamLimits

0xf7bd,	// (0x0004dc8f) dialer_ne_pane_t

0x67ea,	// (0x00044cbc) dialer_ne_pane_t3_copy1_ParamLimits

0x67ea,	// (0x00044cbc) dialer_ne_pane_t3_copy1

0x680e,	// (0x00044ce0) cell_dialer_keypad_pane_ParamLimits

0x680e,	// (0x00044ce0) cell_dialer_keypad_pane

0x6825,	// (0x00044cf7) cell_dialer_command_1_pane_ParamLimits

0x6825,	// (0x00044cf7) cell_dialer_command_1_pane

0x683b,	// (0x00044d0d) cell_dialer_command_2_pane_ParamLimits

0x683b,	// (0x00044d0d) cell_dialer_command_2_pane

0xd01e,	// (0x0004b4f0) bg_button_pane_cp02_ParamLimits

0xd01e,	// (0x0004b4f0) bg_button_pane_cp02

0x684a,	// (0x00044d1c) cell_dialer_keypad_pane_g1_ParamLimits

0x684a,	// (0x00044d1c) cell_dialer_keypad_pane_g1

0xd01e,	// (0x0004b4f0) bg_button_pane_cp03_ParamLimits

0xd01e,	// (0x0004b4f0) bg_button_pane_cp03

0x685f,	// (0x00044d31) cell_dialer_command_1_pane_g1_ParamLimits

0x685f,	// (0x00044d31) cell_dialer_command_1_pane_g1

0xd02a,	// (0x0004b4fc) bg_button_pane_cp04

0x6873,	// (0x00044d45) cell_dialer_command_2_pane_g1

0xaab8,	// (0x00048f8a) bg_button_pane_cp06

0xd032,	// (0x0004b504) dialer_ne_clear_pane_g1

0x4814,	// (0x00042ce6) navi_pane_g2

0x4842,	// (0x00042d14) navi_pane_g3

0x0002,

0xf3e5,	// (0x0004d8b7) navi_pane_g

0x486d,	// (0x00042d3f) navi_pane_mv_g2

0x4894,	// (0x00042d66) navi_pane_mv_g5

0x489c,	// (0x00042d6e) navi_pane_mv_t1

0xa8d4,	// (0x00048da6) main_clock2_pane

0x68b1,	// (0x00044d83) main_clock2_list_pane_ParamLimits

0x68b1,	// (0x00044d83) main_clock2_list_pane

0x68db,	// (0x00044dad) main_clock2_pane_t1_ParamLimits

0x68db,	// (0x00044dad) main_clock2_pane_t1

0x68fd,	// (0x00044dcf) main_clock2_pane_t2_ParamLimits

0x68fd,	// (0x00044dcf) main_clock2_pane_t2

0x0004,

0xf7c9,	// (0x0004dc9b) main_clock2_pane_t_ParamLimits

0xf7c9,	// (0x0004dc9b) main_clock2_pane_t

0x695a,	// (0x00044e2c) popup_clock_analogue_window_cp03_ParamLimits

0x695a,	// (0x00044e2c) popup_clock_analogue_window_cp03

0x697a,	// (0x00044e4c) popup_clock_digital_window_cp02_ParamLimits

0x697a,	// (0x00044e4c) popup_clock_digital_window_cp02

0x69eb,	// (0x00044ebd) main_clock2_list_single_pane_ParamLimits

0x69eb,	// (0x00044ebd) main_clock2_list_single_pane

0xaab8,	// (0x00048f8a) list_highlight_pane_cp05

0xd06e,	// (0x0004b540) main_clock2_list_single_pane_t1

0x33a4,	// (0x00041876) popup_toolbar_window_cp04_ParamLimits

0x5fd2,	// (0x000444a4) camera2_autofocus_pane_g2_ParamLimits

0x5fd2,	// (0x000444a4) camera2_autofocus_pane_g2

0x5fde,	// (0x000444b0) camera2_autofocus_pane_g3_ParamLimits

0x5fde,	// (0x000444b0) camera2_autofocus_pane_g3

0x5fea,	// (0x000444bc) camera2_autofocus_pane_g4_ParamLimits

0x5fea,	// (0x000444bc) camera2_autofocus_pane_g4

0x5ff6,	// (0x000444c8) camera2_autofocus_pane_g5_ParamLimits

0x5ff6,	// (0x000444c8) camera2_autofocus_pane_g5

0x0004,

0xf70d,	// (0x0004dbdf) camera2_autofocus_pane_g_ParamLimits

0xf70d,	// (0x0004dbdf) camera2_autofocus_pane_g

0x6159,	// (0x0004462b) camera2_autofocus_pane_cp_g2

0x6161,	// (0x00044633) camera2_autofocus_pane_cp_g3

0x6169,	// (0x0004463b) camera2_autofocus_pane_cp_g4

0x6171,	// (0x00044643) camera2_autofocus_pane_cp_g5

0x0004,

0xf773,	// (0x0004dc45) camera2_autofocus_pane_cp_g

0x6789,	// (0x00044c5b) popup_dialer_spcha_window

0xa148,	// (0x0004861a) bg_popup_sub_pane_cp07

0xd07c,	// (0x0004b54e) list_spcha_pane

0xd084,	// (0x0004b556) list_single_spcha_pane_ParamLimits

0xd084,	// (0x0004b556) list_single_spcha_pane

0xa148,	// (0x0004861a) list_highlight_pane_cp06

0xd095,	// (0x0004b567) list_single_spcha_pane_t1

0xc256,	// (0x0004a728) popup_call2_audio_out_window_g4_ParamLimits

0xc256,	// (0x0004a728) popup_call2_audio_out_window_g4

0xa148,	// (0x0004861a) main_imed2_pane

0xc849,	// (0x0004ad1b) popup_imed_adjust2_window

0x5656,	// (0x00043b28) popup_imed_trans_window_ParamLimits

0x5656,	// (0x00043b28) popup_imed_trans_window

0xcaa6,	// (0x0004af78) popup_blid_sat_info2_window_t1

0xcab4,	// (0x0004af86) popup_blid_sat_info2_window_t2

0x000a,

0xf6a2,	// (0x0004db74) popup_blid_sat_info2_window_t

0x6a95,	// (0x00044f67) aid_size_cell_colour_35

0x6aaf,	// (0x00044f81) aid_size_cell_colour_112

0x6ac6,	// (0x00044f98) aid_size_cell_effect

0xa9e1,	// (0x00048eb3) bg_tb_trans_pane_cp02

0xbb89,	// (0x0004a05b) heading_imed_pane

0x6ae0,	// (0x00044fb2) listscroll_imed_pane

0xd0a3,	// (0x0004b575) heading_imed_pane_g1

0xd0ab,	// (0x0004b57d) heading_imed_pane_t1

0xd0b9,	// (0x0004b58b) grid_imed_colour_35_pane_ParamLimits

0xd0b9,	// (0x0004b58b) grid_imed_colour_35_pane

0x6aec,	// (0x00044fbe) grid_imed_effect_pane

0xd0d5,	// (0x0004b5a7) list_imed_aspect_pane

0x6afc,	// (0x00044fce) scroll_pane_cp027_ParamLimits

0x6afc,	// (0x00044fce) scroll_pane_cp027

0x6b08,	// (0x00044fda) cell_imed_effect_pane_ParamLimits

0x6b08,	// (0x00044fda) cell_imed_effect_pane

0xd0dd,	// (0x0004b5af) cell_imed_colour_pane_ParamLimits

0xd0dd,	// (0x0004b5af) cell_imed_colour_pane

0xd127,	// (0x0004b5f9) cell_imed_colour_pane_g1_ParamLimits

0xd127,	// (0x0004b5f9) cell_imed_colour_pane_g1

0xd138,	// (0x0004b60a) hgihlgiht_grid_pane_cp016_ParamLimits

0xd138,	// (0x0004b60a) hgihlgiht_grid_pane_cp016

0x6b24,	// (0x00044ff6) cell_imed_effect_pane_g1

0x6b2c,	// (0x00044ffe) grid_highlight_pane_cp017

0xd149,	// (0x0004b61b) list_imed_single_pane_ParamLimits

0xd149,	// (0x0004b61b) list_imed_single_pane

0xa148,	// (0x0004861a) list_highlight_pane_cp07

0xd15d,	// (0x0004b62f) list_imed_aspect_pane_comp1_t1

0xc81d,	// (0x0004acef) bg_tb_trans_pane_cp05

0xd17f,	// (0x0004b651) popup_imed_adjust2_window_g1

0xd1a6,	// (0x0004b678) popup_imed_adjust2_window_t1

0xd1be,	// (0x0004b690) slider_imed_adjust_pane

0xd1d2,	// (0x0004b6a4) slider_imed_adjust_pane_g1

0xd1e2,	// (0x0004b6b4) slider_imed_adjust_pane_g2

0xd1f2,	// (0x0004b6c4) slider_imed_adjust_pane_g3

0xd203,	// (0x0004b6d5) slider_imed_adjust_pane_g4

0x0003,

0xf7e6,	// (0x0004dcb8) slider_imed_adjust_pane_g

0x6b35,	// (0x00045007) aid_size_cell_clipart2

0x6b41,	// (0x00045013) grid_imed_clipart_pane

0xd214,	// (0x0004b6e6) scroll_pane_cp031

0x6b4b,	// (0x0004501d) cell_imed_clipart_pane_ParamLimits

0x6b4b,	// (0x0004501d) cell_imed_clipart_pane

0x6b69,	// (0x0004503b) cell_imed_clipart_pane_g1

0xa148,	// (0x0004861a) grid_highlight_pane_cp014

0x68bd,	// (0x00044d8f) main_clock2_pane_g1_ParamLimits

0x68bd,	// (0x00044d8f) main_clock2_pane_g1

0x6996,	// (0x00044e68) aid_call2_pane_cp10

0x69a8,	// (0x00044e7a) aid_call_pane_cp10

0xb325,	// (0x000497f7) popup_clock_analogue_window_cp10_g1

0xb325,	// (0x000497f7) popup_clock_analogue_window_cp10_g2

0x69ba,	// (0x00044e8c) popup_clock_analogue_window_cp10_g3

0x69ba,	// (0x00044e8c) popup_clock_analogue_window_cp10_g4

0xb325,	// (0x000497f7) popup_clock_analogue_window_cp10_g5

0x0004,

0xf7d4,	// (0x0004dca6) popup_clock_analogue_window_cp10_g

0x69cc,	// (0x00044e9e) popup_clock_analogue_window_cp10_t1

0x69fd,	// (0x00044ecf) clock_digital_number_pane_cp10_ParamLimits

0x69fd,	// (0x00044ecf) clock_digital_number_pane_cp10

0x6a15,	// (0x00044ee7) clock_digital_number_pane_cp11_ParamLimits

0x6a15,	// (0x00044ee7) clock_digital_number_pane_cp11

0x6a2d,	// (0x00044eff) clock_digital_number_pane_cp12_ParamLimits

0x6a2d,	// (0x00044eff) clock_digital_number_pane_cp12

0x6a45,	// (0x00044f17) clock_digital_number_pane_cp13_ParamLimits

0x6a45,	// (0x00044f17) clock_digital_number_pane_cp13

0x6a5d,	// (0x00044f2f) clock_digital_separator_pane_cp10_ParamLimits

0x6a5d,	// (0x00044f2f) clock_digital_separator_pane_cp10

0x6a75,	// (0x00044f47) popup_clock_digital_window_cp02_t1_ParamLimits

0x6a75,	// (0x00044f47) popup_clock_digital_window_cp02_t1

0xa807,	// (0x00048cd9) clock_digital_number_pane_cp10_g1

0xa807,	// (0x00048cd9) clock_digital_number_pane_cp10_g2

0x0001,

0xf7ef,	// (0x0004dcc1) clock_digital_number_pane_cp10_g

0xa807,	// (0x00048cd9) clock_digital_separator_pane_cp10_g1

0xa807,	// (0x00048cd9) clock_digital_separator_pane_g2_cp10

0xb3c0,	// (0x00049892) navi_pane_vded_g4

0xb3c9,	// (0x0004989b) navi_pane_vded_g5

0xb3d2,	// (0x000498a4) navi_pane_vded_t1

0xa148,	// (0x0004861a) main_vded_pane

0x6b72,	// (0x00045044) main_vded_pane_g1

0x6b7e,	// (0x00045050) main_vded_pane_g2

0x6b88,	// (0x0004505a) main_vded_pane_g3

0x0002,

0xf7f4,	// (0x0004dcc6) main_vded_pane_g

0x6b92,	// (0x00045064) main_vded_pane_t1

0x6ba0,	// (0x00045072) main_vded_pane_t2

0x0001,

0xf7fb,	// (0x0004dccd) main_vded_pane_t

0x6bae,	// (0x00045080) vded_slider_pane

0x6bb8,	// (0x0004508a) vded_video_pane

0xd21c,	// (0x0004b6ee) vded_video_pane_g1

0x6bc4,	// (0x00045096) vded_video_pane_g2

0xcc6e,	// (0x0004b140) vded_video_pane_g3

0x0002,

0xf800,	// (0x0004dcd2) vded_video_pane_g

0xd226,	// (0x0004b6f8) vded_slider_pane_g1

0xc9bb,	// (0x0004ae8d) vded_slider_pane_g2

0xd22f,	// (0x0004b701) vded_slider_pane_g3

0xd238,	// (0x0004b70a) vded_slider_pane_g4

0xd241,	// (0x0004b713) vded_slider_pane_g5

0x0004,

0xf807,	// (0x0004dcd9) vded_slider_pane_g

0x66a7,	// (0x00044b79) mup3_rocker_pane_ParamLimits

0x66a7,	// (0x00044b79) mup3_rocker_pane

0x6bcd,	// (0x0004509f) mup3_control_keys_pane_g1

0x6bd5,	// (0x000450a7) mup3_control_keys_pane_g2

0x6bdd,	// (0x000450af) mup3_control_keys_pane_g3

0x6be5,	// (0x000450b7) mup3_control_keys_pane_g4

0x0003,

0xf812,	// (0x0004dce4) mup3_control_keys_pane_g

0x215b,	// (0x0004062d) popup_toolbar2_fixed_window_cp01_ParamLimits

0x215b,	// (0x0004062d) popup_toolbar2_fixed_window_cp01

0x66c3,	// (0x00044b95) popup_toolbar2_fixed_window_cp02_ParamLimits

0x66c3,	// (0x00044b95) popup_toolbar2_fixed_window_cp02

0xbb95,	// (0x0004a067) popup_call2_audio_second_window_t4_ParamLimits

0xbb95,	// (0x0004a067) popup_call2_audio_second_window_t4

0xc0c3,	// (0x0004a595) popup_call2_audio_first_window_t6_ParamLimits

0xc0c3,	// (0x0004a595) popup_call2_audio_first_window_t6

0xc359,	// (0x0004a82b) popup_call2_audio_out_window_t6_ParamLimits

0xc359,	// (0x0004a82b) popup_call2_audio_out_window_t6

0xa148,	// (0x0004861a) main_vitu_pane

0x6bf5,	// (0x000450c7) aid_size_cell_itu_ParamLimits

0x6bf5,	// (0x000450c7) aid_size_cell_itu

0x218d,	// (0x0004065f) bg_popup_window_pane_cp08_ParamLimits

0x218d,	// (0x0004065f) bg_popup_window_pane_cp08

0x6c03,	// (0x000450d5) field_vitu_entry_pane_ParamLimits

0x6c03,	// (0x000450d5) field_vitu_entry_pane

0x6c12,	// (0x000450e4) grid_vitu_function_pane_ParamLimits

0x6c12,	// (0x000450e4) grid_vitu_function_pane

0x6c22,	// (0x000450f4) grid_vitu_itu_pane_ParamLimits

0x6c22,	// (0x000450f4) grid_vitu_itu_pane

0x6c32,	// (0x00045104) cell_vitu_itu_pane_ParamLimits

0x6c32,	// (0x00045104) cell_vitu_itu_pane

0x6c49,	// (0x0004511b) cell_vitu_function_pane_ParamLimits

0x6c49,	// (0x0004511b) cell_vitu_function_pane

0xa9e1,	// (0x00048eb3) bg_popup_sub_pane_cp08_ParamLimits

0xa9e1,	// (0x00048eb3) bg_popup_sub_pane_cp08

0x6c5d,	// (0x0004512f) field_vitu_entry_pane_t1_ParamLimits

0x6c5d,	// (0x0004512f) field_vitu_entry_pane_t1

0xd262,	// (0x0004b734) field_vitu_entry_pane_t2_ParamLimits

0xd262,	// (0x0004b734) field_vitu_entry_pane_t2

0x0001,

0xf820,	// (0x0004dcf2) field_vitu_entry_pane_t_ParamLimits

0xf820,	// (0x0004dcf2) field_vitu_entry_pane_t

0xd27f,	// (0x0004b751) bg_button_pane_cp05_ParamLimits

0xd27f,	// (0x0004b751) bg_button_pane_cp05

0x6c77,	// (0x00045149) cell_vitu_itu_pane_g1

0x6c8f,	// (0x00045161) cell_vitu_itu_pane_t1_ParamLimits

0x6c8f,	// (0x00045161) cell_vitu_itu_pane_t1

0x6ca1,	// (0x00045173) cell_vitu_itu_pane_t2_ParamLimits

0x6ca1,	// (0x00045173) cell_vitu_itu_pane_t2

0x0002,

0xf825,	// (0x0004dcf7) cell_vitu_itu_pane_t_ParamLimits

0xf825,	// (0x0004dcf7) cell_vitu_itu_pane_t

0xd28d,	// (0x0004b75f) bg_button_pane_cp07

0x6ce4,	// (0x000451b6) cell_vitu_function_pane_g1

0x2420,	// (0x000408f2) main_calc_pane_g1

0x1f5f,	// (0x00040431) aid_visual_content_pane

0xa148,	// (0x0004861a) main_vradio_pane

0x6ced,	// (0x000451bf) main_vradio_pane_g1_ParamLimits

0x6ced,	// (0x000451bf) main_vradio_pane_g1

0xd297,	// (0x0004b769) main_vradio_pane_g2_ParamLimits

0xd297,	// (0x0004b769) main_vradio_pane_g2

0x0001,

0xf82c,	// (0x0004dcfe) main_vradio_pane_g_ParamLimits

0xf82c,	// (0x0004dcfe) main_vradio_pane_g

0x6cfb,	// (0x000451cd) main_vradio_pane_t1_ParamLimits

0x6cfb,	// (0x000451cd) main_vradio_pane_t1

0x6d0d,	// (0x000451df) main_vradio_pane_t2_ParamLimits

0x6d0d,	// (0x000451df) main_vradio_pane_t2

0xd2a4,	// (0x0004b776) main_vradio_pane_t3_ParamLimits

0xd2a4,	// (0x0004b776) main_vradio_pane_t3

0x0002,

0xf831,	// (0x0004dd03) main_vradio_pane_t_ParamLimits

0xf831,	// (0x0004dd03) main_vradio_pane_t

0x6d1f,	// (0x000451f1) vradio_rocker_control_pane_ParamLimits

0x6d1f,	// (0x000451f1) vradio_rocker_control_pane

0x6d2b,	// (0x000451fd) vradio_station_info_pane_ParamLimits

0x6d2b,	// (0x000451fd) vradio_station_info_pane

0xd2b8,	// (0x0004b78a) vradio_frequency_info_pane_ParamLimits

0xd2b8,	// (0x0004b78a) vradio_frequency_info_pane

0xcc6e,	// (0x0004b140) vradio_station_info_pane_g1

0xd2c7,	// (0x0004b799) vradio_station_info_pane_t1_ParamLimits

0xd2c7,	// (0x0004b799) vradio_station_info_pane_t1

0xd2e9,	// (0x0004b7bb) vradio_station_info_pane_t2_ParamLimits

0xd2e9,	// (0x0004b7bb) vradio_station_info_pane_t2

0x0001,

0xf838,	// (0x0004dd0a) vradio_station_info_pane_t_ParamLimits

0xf838,	// (0x0004dd0a) vradio_station_info_pane_t

0xd2fb,	// (0x0004b7cd) vradio_tuning_pane

0xd303,	// (0x0004b7d5) vradio_rocker_control_pane_g1

0xd30b,	// (0x0004b7dd) vradio_rocker_control_pane_g2

0xd313,	// (0x0004b7e5) vradio_rocker_control_pane_g3

0xd31b,	// (0x0004b7ed) vradio_rocker_control_pane_g4

0xd323,	// (0x0004b7f5) vradio_rocker_control_pane_g5

0x0004,

0xf83d,	// (0x0004dd0f) vradio_rocker_control_pane_g

0x6d38,	// (0x0004520a) vradio_frequency_info_pane_g1

0xd32b,	// (0x0004b7fd) vradio_frequency_info_pane_t1_ParamLimits

0xd32b,	// (0x0004b7fd) vradio_frequency_info_pane_t1

0x6d42,	// (0x00045214) vradio_tuning_pane_g1

0x6d4d,	// (0x0004521f) vradio_tuning_pane_t1

0xa16e,	// (0x00048640) area_side_right_pane_ParamLimits

0xa16e,	// (0x00048640) area_side_right_pane

0xc7d8,	// (0x0004acaa) status_small_pane_g1

0xc7e0,	// (0x0004acb2) status_small_pane_g2

0xc7e9,	// (0x0004acbb) status_small_pane_g3

0xc7f2,	// (0x0004acc4) status_small_pane_g4

0x0003,

0xf5f8,	// (0x0004daca) status_small_pane_g

0xc7fb,	// (0x0004accd) status_small_pane_t1

0xa148,	// (0x0004861a) main_video3_pane

0xd33f,	// (0x0004b811) cams_zoom_vslider_pane

0xd347,	// (0x0004b819) image3_wide_pane_ParamLimits

0xd347,	// (0x0004b819) image3_wide_pane

0xd361,	// (0x0004b833) image3_wide_small_pane

0xd36d,	// (0x0004b83f) main_video3_pane_g1_ParamLimits

0xd36d,	// (0x0004b83f) main_video3_pane_g1

0xd389,	// (0x0004b85b) main_video3_pane_g2_ParamLimits

0xd389,	// (0x0004b85b) main_video3_pane_g2

0x0001,

0xf848,	// (0x0004dd1a) main_video3_pane_g_ParamLimits

0xf848,	// (0x0004dd1a) main_video3_pane_g

0xd3a5,	// (0x0004b877) main_video3_pane_t1_ParamLimits

0xd3a5,	// (0x0004b877) main_video3_pane_t1

0xd3d0,	// (0x0004b8a2) main_video3_pane_t2_ParamLimits

0xd3d0,	// (0x0004b8a2) main_video3_pane_t2

0xd3fd,	// (0x0004b8cf) main_video3_pane_t3_ParamLimits

0xd3fd,	// (0x0004b8cf) main_video3_pane_t3

0x0002,

0xf84d,	// (0x0004dd1f) main_video3_pane_t_ParamLimits

0xf84d,	// (0x0004dd1f) main_video3_pane_t

0xd42a,	// (0x0004b8fc) cams_zoom_vslider_pane_g1

0xd433,	// (0x0004b905) cams_zoom_vslider_pane_g2

0x0001,

0xf854,	// (0x0004dd26) cams_zoom_vslider_pane_g

0xd43b,	// (0x0004b90d) small_slider_vertical_pane

0xcc6e,	// (0x0004b140) small_slider_vertical_pane_g1

0xcc6e,	// (0x0004b140) small_slider_vertical_pane_g2

0xd443,	// (0x0004b915) small_slider_vertical_pane_g3

0x0002,

0xf859,	// (0x0004dd2b) small_slider_vertical_pane_g

0xa148,	// (0x0004861a) main_hwr_training_pane

0xd44c,	// (0x0004b91e) hwr_training_instruct_pane_ParamLimits

0xd44c,	// (0x0004b91e) hwr_training_instruct_pane

0x6d5c,	// (0x0004522e) hwr_training_navi_pane_ParamLimits

0x6d5c,	// (0x0004522e) hwr_training_navi_pane

0x6d76,	// (0x00045248) hwr_training_write_pane_ParamLimits

0x6d76,	// (0x00045248) hwr_training_write_pane

0xa148,	// (0x0004861a) bg_frame_shadow_pane

0xd483,	// (0x0004b955) hwr_training_write_pane_g1

0xd48b,	// (0x0004b95d) hwr_training_write_pane_g2

0xd493,	// (0x0004b965) hwr_training_write_pane_g3

0xd49b,	// (0x0004b96d) hwr_training_write_pane_g4

0xd4a3,	// (0x0004b975) hwr_training_write_pane_g5

0xd4ab,	// (0x0004b97d) hwr_training_write_pane_g6

0xd4b3,	// (0x0004b985) hwr_training_write_pane_g7

0x0006,

0xf860,	// (0x0004dd32) hwr_training_write_pane_g

0x6dae,	// (0x00045280) hwr_training_navi_pane_g1_ParamLimits

0x6dae,	// (0x00045280) hwr_training_navi_pane_g1

0x6dc0,	// (0x00045292) hwr_training_navi_pane_g2_ParamLimits

0x6dc0,	// (0x00045292) hwr_training_navi_pane_g2

0x6dd2,	// (0x000452a4) hwr_training_navi_pane_g3_ParamLimits

0x6dd2,	// (0x000452a4) hwr_training_navi_pane_g3

0x6de2,	// (0x000452b4) hwr_training_navi_pane_g4_ParamLimits

0x6de2,	// (0x000452b4) hwr_training_navi_pane_g4

0x0004,

0xf86f,	// (0x0004dd41) hwr_training_navi_pane_g_ParamLimits

0xf86f,	// (0x0004dd41) hwr_training_navi_pane_g

0x6dfc,	// (0x000452ce) hwr_training_navi_pane_t1

0x6e0a,	// (0x000452dc) list_single_hwr_training_instruct_pane_ParamLimits

0x6e0a,	// (0x000452dc) list_single_hwr_training_instruct_pane

0xd4bb,	// (0x0004b98d) list_single_hwr_training_instruct_pane_t1

0xcbae,	// (0x0004b080) bg_frame_shadow_pane_g1

0xd4ca,	// (0x0004b99c) bg_frame_shadow_pane_g2

0xd4d2,	// (0x0004b9a4) bg_frame_shadow_pane_g3

0xd4da,	// (0x0004b9ac) bg_frame_shadow_pane_g4

0xd4e2,	// (0x0004b9b4) bg_frame_shadow_pane_g5

0xd4ea,	// (0x0004b9bc) bg_frame_shadow_pane_g6

0xd4f2,	// (0x0004b9c4) bg_frame_shadow_pane_g7

0xa99f,	// (0x00048e71) bg_frame_shadow_pane_g8

0x0007,

0xf87a,	// (0x0004dd4c) bg_frame_shadow_pane_g

0xa148,	// (0x0004861a) main_video_tele_dialer_pane

0x6e23,	// (0x000452f5) aid_size_cell_video_keypad_ParamLimits

0x6e23,	// (0x000452f5) aid_size_cell_video_keypad

0x6e33,	// (0x00045305) grid_video_dialer_keypad_pane_ParamLimits

0x6e33,	// (0x00045305) grid_video_dialer_keypad_pane

0x6e65,	// (0x00045337) video_down_pane_cp_ParamLimits

0x6e65,	// (0x00045337) video_down_pane_cp

0x6e8d,	// (0x0004535f) cell_video_dialer_keypad_pane_ParamLimits

0x6e8d,	// (0x0004535f) cell_video_dialer_keypad_pane

0xd4fa,	// (0x0004b9cc) bg_button_pane_cp08_ParamLimits

0xd4fa,	// (0x0004b9cc) bg_button_pane_cp08

0x6ea4,	// (0x00045376) cell_video_dialer_keypad_pane_g1_ParamLimits

0x6ea4,	// (0x00045376) cell_video_dialer_keypad_pane_g1

0x669b,	// (0x00044b6d) mup3_rocker2_pane_ParamLimits

0x669b,	// (0x00044b6d) mup3_rocker2_pane

0xcc6e,	// (0x0004b140) mup3_rocker2_pane_g1

0x55d8,	// (0x00043aaa) main_dialer2_pane

0xa148,	// (0x0004861a) main_mp4_pane

0x6ee3,	// (0x000453b5) main_mp4_pane_g1_ParamLimits

0x6ee3,	// (0x000453b5) main_mp4_pane_g1

0x6ef1,	// (0x000453c3) main_mp4_pane_g2_ParamLimits

0x6ef1,	// (0x000453c3) main_mp4_pane_g2

0x6eff,	// (0x000453d1) main_mp4_pane_g3_ParamLimits

0x6eff,	// (0x000453d1) main_mp4_pane_g3

0x6f52,	// (0x00045424) main_mp4_pane_g4_ParamLimits

0x6f52,	// (0x00045424) main_mp4_pane_g4

0x6f7a,	// (0x0004544c) main_mp4_pane_g5_ParamLimits

0x6f7a,	// (0x0004544c) main_mp4_pane_g5

0x0005,

0xf89a,	// (0x0004dd6c) main_mp4_pane_g_ParamLimits

0xf89a,	// (0x0004dd6c) main_mp4_pane_g

0x6fca,	// (0x0004549c) main_mp4_pane_t1_ParamLimits

0x6fca,	// (0x0004549c) main_mp4_pane_t1

0x7026,	// (0x000454f8) main_mp4_pane_t2_ParamLimits

0x7026,	// (0x000454f8) main_mp4_pane_t2

0xd506,	// (0x0004b9d8) main_mp4_pane_t3_ParamLimits

0xd506,	// (0x0004b9d8) main_mp4_pane_t3

0x7078,	// (0x0004554a) main_mp4_pane_t4_ParamLimits

0x7078,	// (0x0004554a) main_mp4_pane_t4

0x0003,

0xf8a7,	// (0x0004dd79) main_mp4_pane_t_ParamLimits

0xf8a7,	// (0x0004dd79) main_mp4_pane_t

0x70b8,	// (0x0004558a) mp4_progress_pane_ParamLimits

0x70b8,	// (0x0004558a) mp4_progress_pane

0x7102,	// (0x000455d4) mp4_rocker_pane_ParamLimits

0x7102,	// (0x000455d4) mp4_rocker_pane

0xd52e,	// (0x0004ba00) mp4_progress_pane_t1

0xd57d,	// (0x0004ba4f) mp4_progress_pane_t2

0x0001,

0xf8b0,	// (0x0004dd82) mp4_progress_pane_t

0xd596,	// (0x0004ba68) mup_progress_pane_cp04

0xcc6e,	// (0x0004b140) mp4_rocker_pane_g1

0x7124,	// (0x000455f6) aid_cell_size_keypad2_ParamLimits

0x7124,	// (0x000455f6) aid_cell_size_keypad2

0x7134,	// (0x00045606) dialer2_ne_pane_ParamLimits

0x7134,	// (0x00045606) dialer2_ne_pane

0x7140,	// (0x00045612) grid_dialer2_keypad_pane_ParamLimits

0x7140,	// (0x00045612) grid_dialer2_keypad_pane

0xd5a2,	// (0x0004ba74) bg_popup_call_pane_cp07_ParamLimits

0xd5a2,	// (0x0004ba74) bg_popup_call_pane_cp07

0x714e,	// (0x00045620) dialer2_ne_pane_t1_ParamLimits

0x714e,	// (0x00045620) dialer2_ne_pane_t1

0x7173,	// (0x00045645) cell_dialer2_keypad_pane_ParamLimits

0x7173,	// (0x00045645) cell_dialer2_keypad_pane

0xd5c2,	// (0x0004ba94) bg_button_pane_pane_cp04_ParamLimits

0xd5c2,	// (0x0004ba94) bg_button_pane_pane_cp04

0x718a,	// (0x0004565c) cell_dialer2_keypad_pane_g1_ParamLimits

0x718a,	// (0x0004565c) cell_dialer2_keypad_pane_g1

0x3276,	// (0x00041748) aid_placing_vt_set_content_ParamLimits

0x3276,	// (0x00041748) aid_placing_vt_set_content

0x329e,	// (0x00041770) aid_placing_vt_set_title_ParamLimits

0x329e,	// (0x00041770) aid_placing_vt_set_title

0xa148,	// (0x0004861a) main_image3_pane

0x7224,	// (0x000456f6) area_side_right_pane_cp01_ParamLimits

0x7224,	// (0x000456f6) area_side_right_pane_cp01

0xa9ef,	// (0x00048ec1) main_image3_pane_g1_ParamLimits

0xa9ef,	// (0x00048ec1) main_image3_pane_g1

0x7253,	// (0x00045725) main_image3_pane_g2_ParamLimits

0x7253,	// (0x00045725) main_image3_pane_g2

0x726c,	// (0x0004573e) main_image3_pane_g3_ParamLimits

0x726c,	// (0x0004573e) main_image3_pane_g3

0x7285,	// (0x00045757) main_image3_pane_g4_ParamLimits

0x7285,	// (0x00045757) main_image3_pane_g4

0x0003,

0xf8bf,	// (0x0004dd91) main_image3_pane_g_ParamLimits

0xf8bf,	// (0x0004dd91) main_image3_pane_g

0x729e,	// (0x00045770) main_image3_pane_t1_ParamLimits

0x729e,	// (0x00045770) main_image3_pane_t1

0x72c3,	// (0x00045795) main_image3_pane_t2_ParamLimits

0x72c3,	// (0x00045795) main_image3_pane_t2

0x72e2,	// (0x000457b4) main_image3_pane_t3_ParamLimits

0x72e2,	// (0x000457b4) main_image3_pane_t3

0x0003,

0xf8c8,	// (0x0004dd9a) main_image3_pane_t_ParamLimits

0xf8c8,	// (0x0004dd9a) main_image3_pane_t

0x218d,	// (0x0004065f) grid_sctrl_middle_pane_cp01_ParamLimits

0x218d,	// (0x0004065f) grid_sctrl_middle_pane_cp01

0x7343,	// (0x00045815) cell_sctrl_middle_pane_cp01_ParamLimits

0x7343,	// (0x00045815) cell_sctrl_middle_pane_cp01

0x7354,	// (0x00045826) cell_sctrl_middle_pane_cp01_g1_ParamLimits

0x7354,	// (0x00045826) cell_sctrl_middle_pane_cp01_g1

0xa148,	// (0x0004861a) main_call4_pane

0x7361,	// (0x00045833) aid_size_button_call4_ParamLimits

0x7361,	// (0x00045833) aid_size_button_call4

0x7393,	// (0x00045865) call4_windows_pane_ParamLimits

0x7393,	// (0x00045865) call4_windows_pane

0x73af,	// (0x00045881) grid_call4_button_pane_ParamLimits

0x73af,	// (0x00045881) grid_call4_button_pane

0xd5ce,	// (0x0004baa0) call4_windows_conf_pane

0x73d3,	// (0x000458a5) popup_call4_audio_first_window_ParamLimits

0x73d3,	// (0x000458a5) popup_call4_audio_first_window

0x73ff,	// (0x000458d1) popup_call4_audio_second_window_ParamLimits

0x73ff,	// (0x000458d1) popup_call4_audio_second_window

0xd60b,	// (0x0004badd) popup_call4_audio_wait_window_ParamLimits

0xd60b,	// (0x0004badd) popup_call4_audio_wait_window

0x7413,	// (0x000458e5) cell_call4_button_pane_ParamLimits

0x7413,	// (0x000458e5) cell_call4_button_pane

0x7436,	// (0x00045908) bg_button_pane_cp09_ParamLimits

0x7436,	// (0x00045908) bg_button_pane_cp09

0x7442,	// (0x00045914) cell_call4_button_pane_g1_ParamLimits

0x7442,	// (0x00045914) cell_call4_button_pane_g1

0x744f,	// (0x00045921) cell_call4_button_pane_t1_ParamLimits

0x744f,	// (0x00045921) cell_call4_button_pane_t1

0xd653,	// (0x0004bb25) popup_call4_audio_conf_window_ParamLimits

0xd653,	// (0x0004bb25) popup_call4_audio_conf_window

0x66d0,	// (0x00044ba2) mup3_progress_pane_t1_ParamLimits

0x66ef,	// (0x00044bc1) mup3_progress_pane_t2_ParamLimits

0xcf2d,	// (0x0004b3ff) mup3_progress_pane_t3_ParamLimits

0xf79c,	// (0x0004dc6e) mup3_progress_pane_t_ParamLimits

0xcf4a,	// (0x0004b41c) mup_progress_pane_cp03_ParamLimits

0x6bed,	// (0x000450bf) mup3_control_keys_pane_g4_copy1

0x70e6,	// (0x000455b8) mp4_rocker2_pane_ParamLimits

0x70e6,	// (0x000455b8) mp4_rocker2_pane

0xd66d,	// (0x0004bb3f) mp4_rocker2_pane_g1

0xd675,	// (0x0004bb47) mp4_rocker2_pane_g2

0x7461,	// (0x00045933) mp4_rocker2_pane_g3

0x7469,	// (0x0004593b) mp4_rocker2_pane_g4

0x7471,	// (0x00045943) mp4_rocker2_pane_g5

0x0004,

0xf8d1,	// (0x0004dda3) mp4_rocker2_pane_g

0xa148,	// (0x0004861a) main_camera4_pane

0xa148,	// (0x0004861a) main_video4_pane

0x6e41,	// (0x00045313) main_video_tele_dialer_pane_t1_ParamLimits

0x6e41,	// (0x00045313) main_video_tele_dialer_pane_t1

0x6e53,	// (0x00045325) main_video_tele_dialer_pane_t2_ParamLimits

0x6e53,	// (0x00045325) main_video_tele_dialer_pane_t2

0x0001,

0xf88b,	// (0x0004dd5d) main_video_tele_dialer_pane_t_ParamLimits

0xf88b,	// (0x0004dd5d) main_video_tele_dialer_pane_t

0x7491,	// (0x00045963) cam4_autofocus_pane_ParamLimits

0x7491,	// (0x00045963) cam4_autofocus_pane

0x74a9,	// (0x0004597b) cam4_image_uncrop_pane_ParamLimits

0x74a9,	// (0x0004597b) cam4_image_uncrop_pane

0x74c2,	// (0x00045994) cam4_indicators_pane_ParamLimits

0x74c2,	// (0x00045994) cam4_indicators_pane

0x74de,	// (0x000459b0) main_camera4_pane_g1_ParamLimits

0x74de,	// (0x000459b0) main_camera4_pane_g1

0x74ea,	// (0x000459bc) main_camera4_pane_g2_ParamLimits

0x74ea,	// (0x000459bc) main_camera4_pane_g2

0x74ea,	// (0x000459bc) main_camera4_pane_g3_ParamLimits

0x74ea,	// (0x000459bc) main_camera4_pane_g3

0x74f6,	// (0x000459c8) main_camera4_pane_g4_ParamLimits

0x74f6,	// (0x000459c8) main_camera4_pane_g4

0x7502,	// (0x000459d4) main_camera4_pane_g5_ParamLimits

0x7502,	// (0x000459d4) main_camera4_pane_g5

0x0005,

0xf8dc,	// (0x0004ddae) main_camera4_pane_g_ParamLimits

0xf8dc,	// (0x0004ddae) main_camera4_pane_g

0x751c,	// (0x000459ee) main_camera4_pane_t1_ParamLimits

0x751c,	// (0x000459ee) main_camera4_pane_t1

0xceb2,	// (0x0004b384) bg_tb_trans_pane_cp06

0x756e,	// (0x00045a40) cam4_indicators_pane_g1

0x757f,	// (0x00045a51) cam4_indicators_pane_g2

0x0002,

0xf8f7,	// (0x0004ddc9) cam4_indicators_pane_g

0x7597,	// (0x00045a69) cam4_indicators_pane_t1

0x75c1,	// (0x00045a93) main_video4_pane_g1_ParamLimits

0x75c1,	// (0x00045a93) main_video4_pane_g1

0x75cd,	// (0x00045a9f) main_video4_pane_g2_ParamLimits

0x75cd,	// (0x00045a9f) main_video4_pane_g2

0x75d9,	// (0x00045aab) main_video4_pane_g3_ParamLimits

0x75d9,	// (0x00045aab) main_video4_pane_g3

0x75e5,	// (0x00045ab7) main_video4_pane_g4_ParamLimits

0x75e5,	// (0x00045ab7) main_video4_pane_g4

0x0004,

0xf8fe,	// (0x0004ddd0) main_video4_pane_g_ParamLimits

0xf8fe,	// (0x0004ddd0) main_video4_pane_g

0x7607,	// (0x00045ad9) vid4_indicators_pane_ParamLimits

0x7607,	// (0x00045ad9) vid4_indicators_pane

0x7626,	// (0x00045af8) video4_image_uncrop_cif_pane_ParamLimits

0x7626,	// (0x00045af8) video4_image_uncrop_cif_pane

0x7635,	// (0x00045b07) video4_image_uncrop_nhd_pane_ParamLimits

0x7635,	// (0x00045b07) video4_image_uncrop_nhd_pane

0x74a9,	// (0x0004597b) video4_image_uncrop_vga_pane_ParamLimits

0x74a9,	// (0x0004597b) video4_image_uncrop_vga_pane

0xa9e1,	// (0x00048eb3) bg_tb_trans_pane_cp07

0x764e,	// (0x00045b20) vid4_indicators_pane_g1

0x7664,	// (0x00045b36) vid4_indicators_pane_g2

0x7678,	// (0x00045b4a) vid4_indicators_pane_g3

0x0004,

0xf909,	// (0x0004dddb) vid4_indicators_pane_g

0x76a9,	// (0x00045b7b) vid4_indicators_pane_t1

0x76c0,	// (0x00045b92) cam4_autofocus_pane_g1

0x76c8,	// (0x00045b9a) cam4_autofocus_pane_g2

0x76d0,	// (0x00045ba2) cam4_autofocus_pane_g3

0x0002,

0xf914,	// (0x0004dde6) cam4_autofocus_pane_g

0x76d8,	// (0x00045baa) cam4_autofocus_pane_g3_copy1

0x6e71,	// (0x00045343) video_down_pane_cp_t1

0x6e7f,	// (0x00045351) video_down_pane_cp_t2

0x0001,

0xf890,	// (0x0004dd62) video_down_pane_cp_t

0x218d,	// (0x0004065f) popup_vitu2_window_ParamLimits

0x218d,	// (0x0004065f) popup_vitu2_window

0x76e0,	// (0x00045bb2) aid_size_cell2_itu2_ParamLimits

0x76e0,	// (0x00045bb2) aid_size_cell2_itu2

0x7702,	// (0x00045bd4) aid_size_cell_itu2_ParamLimits

0x7702,	// (0x00045bd4) aid_size_cell_itu2

0xd5a2,	// (0x0004ba74) bg_popup_window_pane_cp09_ParamLimits

0xd5a2,	// (0x0004ba74) bg_popup_window_pane_cp09

0x7748,	// (0x00045c1a) field_vitu2_entry_pane_ParamLimits

0x7748,	// (0x00045c1a) field_vitu2_entry_pane

0x7768,	// (0x00045c3a) grid_vitu2_function_pane_ParamLimits

0x7768,	// (0x00045c3a) grid_vitu2_function_pane

0x77ac,	// (0x00045c7e) grid_vitu2_itu_pane_ParamLimits

0x77ac,	// (0x00045c7e) grid_vitu2_itu_pane

0x7828,	// (0x00045cfa) cell_vitu2_itu_pane_ParamLimits

0x7828,	// (0x00045cfa) cell_vitu2_itu_pane

0x783f,	// (0x00045d11) cell_vitu2_function_pane_ParamLimits

0x783f,	// (0x00045d11) cell_vitu2_function_pane

0xd67d,	// (0x0004bb4f) bg_popup_call_pane_cp08_ParamLimits

0xd67d,	// (0x0004bb4f) bg_popup_call_pane_cp08

0xd694,	// (0x0004bb66) field_vitu2_entry_pane_g1

0xd6a0,	// (0x0004bb72) field_vitu2_entry_pane_g2

0x0002,

0xf91b,	// (0x0004dded) field_vitu2_entry_pane_g

0x0e79,	// (0x0003f34b) field_vitu2_entry_pane_t1_ParamLimits

0x0e79,	// (0x0003f34b) field_vitu2_entry_pane_t1

0x0ea9,	// (0x0003f37b) field_vitu2_entry_pane_t2_ParamLimits

0x0ea9,	// (0x0003f37b) field_vitu2_entry_pane_t2

0x0001,

0xf922,	// (0x0004ddf4) field_vitu2_entry_pane_t_ParamLimits

0xf922,	// (0x0004ddf4) field_vitu2_entry_pane_t

0x7883,	// (0x00045d55) bg_button_pane_cp010_ParamLimits

0x7883,	// (0x00045d55) bg_button_pane_cp010

0x7891,	// (0x00045d63) cell_vitu2_itu_pane_g1

0x78b1,	// (0x00045d83) cell_vitu2_itu_pane_t1_ParamLimits

0x78b1,	// (0x00045d83) cell_vitu2_itu_pane_t1

0x0ec6,	// (0x0003f398) cell_vitu2_itu_pane_t2_ParamLimits

0x0ec6,	// (0x0003f398) cell_vitu2_itu_pane_t2

0x0002,

0xf92c,	// (0x0004ddfe) cell_vitu2_itu_pane_t_ParamLimits

0xf92c,	// (0x0004ddfe) cell_vitu2_itu_pane_t

0xa9e1,	// (0x00048eb3) bg_button_pane_cp011

0x78fd,	// (0x00045dcf) cell_vitu2_function_pane_g1

0xa148,	// (0x0004861a) main_myfav_hc_pane

0x7324,	// (0x000457f6) popup_image3_note_pane_ParamLimits

0x7324,	// (0x000457f6) popup_image3_note_pane

0x7332,	// (0x00045804) popup_image3_tool_bar_pane_ParamLimits

0x7332,	// (0x00045804) popup_image3_tool_bar_pane

0x0f3c,	// (0x0003f40e) cell_vitu2_itu_pane_t3_ParamLimits

0x0f3c,	// (0x0003f40e) cell_vitu2_itu_pane_t3

0xa148,	// (0x0004861a) bg_popup_trans_pane

0xd6c2,	// (0x0004bb94) grid_image3_tool_bar_pane

0xd6cc,	// (0x0004bb9e) bg_popup_trans_pane_g1

0xad15,	// (0x000491e7) bg_popup_trans_pane_g2

0xd6d4,	// (0x0004bba6) bg_popup_trans_pane_g3

0xd6dc,	// (0x0004bbae) bg_popup_trans_pane_g4

0xd6e4,	// (0x0004bbb6) bg_popup_trans_pane_g5

0xd6ec,	// (0x0004bbbe) bg_popup_trans_pane_g6

0xd6f4,	// (0x0004bbc6) bg_popup_trans_pane_g7

0xd6fc,	// (0x0004bbce) bg_popup_trans_pane_g8

0xacf5,	// (0x000491c7) bg_popup_trans_pane_g9

0x0008,

0xf933,	// (0x0004de05) bg_popup_trans_pane_g

0xd704,	// (0x0004bbd6) cell_image3_tool_bar_pane_ParamLimits

0xd704,	// (0x0004bbd6) cell_image3_tool_bar_pane

0xcc6e,	// (0x0004b140) cell_image3_tool_bar_pane_g1

0xa148,	// (0x0004861a) bg_popup_trans_pane_cp1

0xd71a,	// (0x0004bbec) popup_image3_note_pane_t1

0xd728,	// (0x0004bbfa) popup_image3_note_pane_t2

0xd736,	// (0x0004bc08) popup_image3_note_pane_t3

0x0002,

0xf946,	// (0x0004de18) popup_image3_note_pane_t

0xd746,	// (0x0004bc18) popup_image3_note_pane_t3_copy1

0x7911,	// (0x00045de3) bg_myfav_hc_instruction_pane_ParamLimits

0x7911,	// (0x00045de3) bg_myfav_hc_instruction_pane

0x7929,	// (0x00045dfb) cell_myfav_contact_pane_ParamLimits

0x7929,	// (0x00045dfb) cell_myfav_contact_pane

0x7943,	// (0x00045e15) cell_myfav_contact_pane_cp1_ParamLimits

0x7943,	// (0x00045e15) cell_myfav_contact_pane_cp1

0x795b,	// (0x00045e2d) cell_myfav_contact_pane_cp2_ParamLimits

0x795b,	// (0x00045e2d) cell_myfav_contact_pane_cp2

0x7973,	// (0x00045e45) cell_myfav_contact_pane_cp3_ParamLimits

0x7973,	// (0x00045e45) cell_myfav_contact_pane_cp3

0x798a,	// (0x00045e5c) cell_myfav_contact_pane_cp4_ParamLimits

0x798a,	// (0x00045e5c) cell_myfav_contact_pane_cp4

0x79a0,	// (0x00045e72) cell_myfav_contact_pane_cp5_ParamLimits

0x79a0,	// (0x00045e72) cell_myfav_contact_pane_cp5

0x79b4,	// (0x00045e86) cell_myfav_contact_pane_cp6_ParamLimits

0x79b4,	// (0x00045e86) cell_myfav_contact_pane_cp6

0x79c8,	// (0x00045e9a) cell_myfav_contact_pane_cp7_ParamLimits

0x79c8,	// (0x00045e9a) cell_myfav_contact_pane_cp7

0xd754,	// (0x0004bc26) listscroll_gen_pane_cp05

0x79e0,	// (0x00045eb2) main_myfav_hc_pane_g1_ParamLimits

0x79e0,	// (0x00045eb2) main_myfav_hc_pane_g1

0x79fa,	// (0x00045ecc) main_myfav_hc_pane_g2_ParamLimits

0x79fa,	// (0x00045ecc) main_myfav_hc_pane_g2

0x0002,

0xf94d,	// (0x0004de1f) main_myfav_hc_pane_g_ParamLimits

0xf94d,	// (0x0004de1f) main_myfav_hc_pane_g

0x7a2c,	// (0x00045efe) main_myfav_hc_pane_t1_ParamLimits

0x7a2c,	// (0x00045efe) main_myfav_hc_pane_t1

0xd75d,	// (0x0004bc2f) main_myfav_hc_pane_t2_ParamLimits

0xd75d,	// (0x0004bc2f) main_myfav_hc_pane_t2

0xd76f,	// (0x0004bc41) main_myfav_hc_pane_t3_ParamLimits

0xd76f,	// (0x0004bc41) main_myfav_hc_pane_t3

0x7a43,	// (0x00045f15) main_myfav_hc_pane_t4_ParamLimits

0x7a43,	// (0x00045f15) main_myfav_hc_pane_t4

0x0004,

0xf954,	// (0x0004de26) main_myfav_hc_pane_t_ParamLimits

0xf954,	// (0x0004de26) main_myfav_hc_pane_t

0xcc6e,	// (0x0004b140) bg_myfav_hc_instruction_pane_g1

0xd781,	// (0x0004bc53) cell_myfav_contact_pane_g1_ParamLimits

0xd781,	// (0x0004bc53) cell_myfav_contact_pane_g1

0xd781,	// (0x0004bc53) cell_myfav_contact_pane_g2_ParamLimits

0xd781,	// (0x0004bc53) cell_myfav_contact_pane_g2

0xd78d,	// (0x0004bc5f) cell_myfav_contact_pane_g3_ParamLimits

0xd78d,	// (0x0004bc5f) cell_myfav_contact_pane_g3

0xcf17,	// (0x0004b3e9) cell_myfav_contact_pane_g4_ParamLimits

0xcf17,	// (0x0004b3e9) cell_myfav_contact_pane_g4

0xd79a,	// (0x0004bc6c) cell_myfav_contact_pane_g5_ParamLimits

0xd79a,	// (0x0004bc6c) cell_myfav_contact_pane_g5

0x0004,

0xf95f,	// (0x0004de31) cell_myfav_contact_pane_g_ParamLimits

0xf95f,	// (0x0004de31) cell_myfav_contact_pane_g

0x7a14,	// (0x00045ee6) main_myfav_hc_pane_g3_ParamLimits

0x7a14,	// (0x00045ee6) main_myfav_hc_pane_g3

0x209f,	// (0x00040571) popup_adpt_find_window

0x7a6d,	// (0x00045f3f) afind_page_pane_ParamLimits

0x7a6d,	// (0x00045f3f) afind_page_pane

0x7a7a,	// (0x00045f4c) aid_size_cell_afind_ParamLimits

0x7a7a,	// (0x00045f4c) aid_size_cell_afind

0x7a94,	// (0x00045f66) bg_popup_sub_pane_cp09_ParamLimits

0x7a94,	// (0x00045f66) bg_popup_sub_pane_cp09

0x7aa1,	// (0x00045f73) find_pane_cp01_ParamLimits

0x7aa1,	// (0x00045f73) find_pane_cp01

0xd7a6,	// (0x0004bc78) grid_afind_control_pane_ParamLimits

0xd7a6,	// (0x0004bc78) grid_afind_control_pane

0x7aae,	// (0x00045f80) grid_afind_pane_ParamLimits

0x7aae,	// (0x00045f80) grid_afind_pane

0x7aca,	// (0x00045f9c) cell_afind_pane_ParamLimits

0x7aca,	// (0x00045f9c) cell_afind_pane

0xcc6e,	// (0x0004b140) afind_page_pane_g1

0x7b14,	// (0x00045fe6) afind_page_pane_g2

0x7b1d,	// (0x00045fef) afind_page_pane_g3

0x0002,

0xf96a,	// (0x0004de3c) afind_page_pane_g

0x7b26,	// (0x00045ff8) afind_page_pane_t1

0xd7ba,	// (0x0004bc8c) cell_afind_grid_control_pane_ParamLimits

0xd7ba,	// (0x0004bc8c) cell_afind_grid_control_pane

0xd5c2,	// (0x0004ba94) bg_button_pane_cp69_ParamLimits

0xd5c2,	// (0x0004ba94) bg_button_pane_cp69

0x7b46,	// (0x00046018) cell_afind_pane_g1_ParamLimits

0x7b46,	// (0x00046018) cell_afind_pane_g1

0x7b53,	// (0x00046025) cell_afind_pane_t1_ParamLimits

0x7b53,	// (0x00046025) cell_afind_pane_t1

0xab0a,	// (0x00048fdc) bg_button_pane_cp72

0xd7c9,	// (0x0004bc9b) cell_afind_grid_control_pane_g1

0x5153,	// (0x00043625) aid_image_placing_area_ParamLimits

0x5153,	// (0x00043625) aid_image_placing_area

0xd24a,	// (0x0004b71c) field_vitu_entry_pane_g1_ParamLimits

0xd24a,	// (0x0004b71c) field_vitu_entry_pane_g1

0xd256,	// (0x0004b728) field_vitu_entry_pane_g2_ParamLimits

0xd256,	// (0x0004b728) field_vitu_entry_pane_g2

0x0001,

0xf81b,	// (0x0004dced) field_vitu_entry_pane_g_ParamLimits

0xf81b,	// (0x0004dced) field_vitu_entry_pane_g

0x6c77,	// (0x00045149) cell_vitu_itu_pane_g1_ParamLimits

0x6cc7,	// (0x00045199) cell_vitu_itu_pane_t3_ParamLimits

0x6cc7,	// (0x00045199) cell_vitu_itu_pane_t3

0xd52e,	// (0x0004ba00) mp4_progress_pane_t1_ParamLimits

0xd57d,	// (0x0004ba4f) mp4_progress_pane_t2_ParamLimits

0xf8b0,	// (0x0004dd82) mp4_progress_pane_t_ParamLimits

0xd596,	// (0x0004ba68) mup_progress_pane_cp04_ParamLimits

0x7a57,	// (0x00045f29) main_myfav_hc_pane_t5_ParamLimits

0x7a57,	// (0x00045f29) main_myfav_hc_pane_t5

0xa166,	// (0x00048638) aid_zoom_text_primary

0x209f,	// (0x00040571) popup_adpt_find_window_ParamLimits

0xa9e1,	// (0x00048eb3) main_cam_set_pane

0x74d0,	// (0x000459a2) cam4_zoom_pane_ParamLimits

0x74d0,	// (0x000459a2) cam4_zoom_pane

0x7b65,	// (0x00046037) main_cam_set_pane_g1_ParamLimits

0x7b65,	// (0x00046037) main_cam_set_pane_g1

0x7b73,	// (0x00046045) main_cam_set_pane_g2_ParamLimits

0x7b73,	// (0x00046045) main_cam_set_pane_g2

0x0001,

0xf971,	// (0x0004de43) main_cam_set_pane_g_ParamLimits

0xf971,	// (0x0004de43) main_cam_set_pane_g

0x7b7f,	// (0x00046051) main_cam_set_pane_t1_ParamLimits

0x7b7f,	// (0x00046051) main_cam_set_pane_t1

0x7b9b,	// (0x0004606d) main_cset_listscroll_pane_ParamLimits

0x7b9b,	// (0x0004606d) main_cset_listscroll_pane

0x7bca,	// (0x0004609c) main_cset_slider_pane_ParamLimits

0x7bca,	// (0x0004609c) main_cset_slider_pane

0xd7da,	// (0x0004bcac) main_cset_list_pane_ParamLimits

0xd7da,	// (0x0004bcac) main_cset_list_pane

0xd7ea,	// (0x0004bcbc) scroll_pane_cp028

0x7beb,	// (0x000460bd) aid_area_touch_slider

0x7c07,	// (0x000460d9) cset_slider_pane

0x7c31,	// (0x00046103) main_cset_slider_pane_g1

0x7c46,	// (0x00046118) main_cset_slider_pane_g2

0x0011,

0xf976,	// (0x0004de48) main_cset_slider_pane_g

0xd823,	// (0x0004bcf5) main_cset_slider_pane_t1

0x7d02,	// (0x000461d4) main_cset_slider_pane_t2

0x7d1c,	// (0x000461ee) main_cset_slider_pane_t3

0x7d36,	// (0x00046208) main_cset_slider_pane_t4

0x7d50,	// (0x00046222) main_cset_slider_pane_t5

0x7d6a,	// (0x0004623c) main_cset_slider_pane_t6

0x7d7f,	// (0x00046251) main_cset_slider_pane_t7

0x000e,

0xf99b,	// (0x0004de6d) main_cset_slider_pane_t

0x7e83,	// (0x00046355) cset_list_set_pane_ParamLimits

0x7e83,	// (0x00046355) cset_list_set_pane

0x7e94,	// (0x00046366) aid_position_infowindow_above

0x7e9c,	// (0x0004636e) aid_position_infowindow_below

0x0f8e,	// (0x0003f460) cset_list_set_pane_g1_ParamLimits

0x0f8e,	// (0x0003f460) cset_list_set_pane_g1

0x0f9a,	// (0x0003f46c) cset_list_set_pane_g3_ParamLimits

0x0f9a,	// (0x0003f46c) cset_list_set_pane_g3

0x0001,

0xf9ba,	// (0x0004de8c) cset_list_set_pane_g_ParamLimits

0xf9ba,	// (0x0004de8c) cset_list_set_pane_g

0x0fa9,	// (0x0003f47b) cset_list_set_pane_t1_ParamLimits

0x0fa9,	// (0x0003f47b) cset_list_set_pane_t1

0xa9e1,	// (0x00048eb3) list_highlight_pane_cp021_ParamLimits

0xa9e1,	// (0x00048eb3) list_highlight_pane_cp021

0xb520,	// (0x000499f2) cset_slider_pane_g1

0xb532,	// (0x00049a04) cset_slider_pane_g2

0xb529,	// (0x000499fb) cset_slider_pane_g3

0x0002,

0xf9bf,	// (0x0004de91) cset_slider_pane_g

0x7ea4,	// (0x00046376) aid_area_touch_cam4_zoom

0x7eac,	// (0x0004637e) cam4_zoom_cont_pane

0x7eb4,	// (0x00046386) cam4_zoom_pane_g1

0x7ebc,	// (0x0004638e) cam4_zoom_pane_g2

0x7ec4,	// (0x00046396) cam4_zoom_pane_g3

0x0002,

0xf9c6,	// (0x0004de98) cam4_zoom_pane_g

0xd8c3,	// (0x0004bd95) cam4_zoom_cont_pane_g1

0xd8cc,	// (0x0004bd9e) cam4_zoom_cont_pane_g2

0xd8d5,	// (0x0004bda7) cam4_zoom_cont_pane_g3

0x0002,

0xf9cd,	// (0x0004de9f) cam4_zoom_cont_pane_g

0x737b,	// (0x0004584d) call4_image_pane_ParamLimits

0x737b,	// (0x0004584d) call4_image_pane

0xd5ce,	// (0x0004baa0) call4_windows_conf_pane_ParamLimits

0xd5e9,	// (0x0004babb) popup_call4_audio_in_window_ParamLimits

0xd5e9,	// (0x0004babb) popup_call4_audio_in_window

0xa148,	// (0x0004861a) bg_popup_call2_act_pane_cp02

0xd64b,	// (0x0004bb1d) call4_list_conf_pane

0xcc6e,	// (0x0004b140) call4_image_pane_g1

0xcc6e,	// (0x0004b140) call4_image_pane_g2

0x0001,

0xf6dc,	// (0x0004dbae) call4_image_pane_g

0xd8de,	// (0x0004bdb0) list_single_graphic_popup_conf4_pane_ParamLimits

0xd8de,	// (0x0004bdb0) list_single_graphic_popup_conf4_pane

0xa148,	// (0x0004861a) list_highlight_pane_cp022

0xd8f3,	// (0x0004bdc5) list_single_graphic_popup_conf4_pane_g1

0xb214,	// (0x000496e6) list_single_graphic_popup_conf4_pane_g2

0x0001,

0xf9d4,	// (0x0004dea6) list_single_graphic_popup_conf4_pane_g

0xd8fb,	// (0x0004bdcd) list_single_graphic_popup_conf4_pane_t1

0x33f8,	// (0x000418ca) popup_vtel_slider_window_ParamLimits

0x33f8,	// (0x000418ca) popup_vtel_slider_window

0xd5b0,	// (0x0004ba82) dialer2_ne_pane_t2_ParamLimits

0xd5b0,	// (0x0004ba82) dialer2_ne_pane_t2

0x0001,

0xf8b5,	// (0x0004dd87) dialer2_ne_pane_t_ParamLimits

0xf8b5,	// (0x0004dd87) dialer2_ne_pane_t

0xa9e1,	// (0x00048eb3) bg_popup_sub_pane_cp010_ParamLimits

0xa9e1,	// (0x00048eb3) bg_popup_sub_pane_cp010

0x7ecc,	// (0x0004639e) popup_vtel_slider_window_g1_ParamLimits

0x7ecc,	// (0x0004639e) popup_vtel_slider_window_g1

0x7ed8,	// (0x000463aa) popup_vtel_slider_window_g2_ParamLimits

0x7ed8,	// (0x000463aa) popup_vtel_slider_window_g2

0x0003,

0xf9d9,	// (0x0004deab) popup_vtel_slider_window_g_ParamLimits

0xf9d9,	// (0x0004deab) popup_vtel_slider_window_g

0x7f20,	// (0x000463f2) vtel_slider_pane_ParamLimits

0x7f20,	// (0x000463f2) vtel_slider_pane

0x7f2f,	// (0x00046401) vtel_slider_pane_g1_ParamLimits

0x7f2f,	// (0x00046401) vtel_slider_pane_g1

0x7f3c,	// (0x0004640e) vtel_slider_pane_g2_ParamLimits

0x7f3c,	// (0x0004640e) vtel_slider_pane_g2

0x7f49,	// (0x0004641b) vtel_slider_pane_g3_ParamLimits

0x7f49,	// (0x0004641b) vtel_slider_pane_g3

0x7f2f,	// (0x00046401) vtel_slider_pane_g4_ParamLimits

0x7f2f,	// (0x00046401) vtel_slider_pane_g4

0x7f56,	// (0x00046428) vtel_slider_pane_g5_ParamLimits

0x7f56,	// (0x00046428) vtel_slider_pane_g5

0x0004,

0xf9e2,	// (0x0004deb4) vtel_slider_pane_g_ParamLimits

0xf9e2,	// (0x0004deb4) vtel_slider_pane_g

0xa9e1,	// (0x00048eb3) main_gallery2_pane

0x7728,	// (0x00045bfa) aid_size_row_itut2_dropdow_list_ParamLimits

0x7728,	// (0x00045bfa) aid_size_row_itut2_dropdow_list

0x778a,	// (0x00045c5c) grid_vitu2_function_top_pane_ParamLimits

0x778a,	// (0x00045c5c) grid_vitu2_function_top_pane

0x77e0,	// (0x00045cb2) popup_vitu2_dropdown_list_window_ParamLimits

0x77e0,	// (0x00045cb2) popup_vitu2_dropdown_list_window

0x7804,	// (0x00045cd6) popup_vitu2_match_list_window

0x7f63,	// (0x00046435) cell_vitu2_function_top_pane_ParamLimits

0x7f63,	// (0x00046435) cell_vitu2_function_top_pane

0x7f85,	// (0x00046457) cell_vitu2_function_top_pane_cp01_ParamLimits

0x7f85,	// (0x00046457) cell_vitu2_function_top_pane_cp01

0x7fa1,	// (0x00046473) cell_vitu2_function_top_wide_pane_ParamLimits

0x7fa1,	// (0x00046473) cell_vitu2_function_top_wide_pane

0xa9e1,	// (0x00048eb3) bg_button_pane_cp012

0x7fbd,	// (0x0004648f) cell_vitu2_function_top_pane_g1

0x7fd1,	// (0x000464a3) bg_button_pane_cp013_ParamLimits

0x7fd1,	// (0x000464a3) bg_button_pane_cp013

0x7fed,	// (0x000464bf) cell_vitu2_function_top_wide_pane_g1_ParamLimits

0x7fed,	// (0x000464bf) cell_vitu2_function_top_wide_pane_g1

0x218d,	// (0x0004065f) bg_popup_sub_pane_cp20

0x8005,	// (0x000464d7) list_vitu2_match_list_pane

0xd6cc,	// (0x0004bb9e) bg_popup_sub_pane_cp20_g1

0xd6d4,	// (0x0004bba6) bg_popup_sub_pane_cp20_g2

0xad15,	// (0x000491e7) bg_popup_sub_pane_cp20_g3

0xd6dc,	// (0x0004bbae) bg_popup_sub_pane_cp20_g4

0xacf5,	// (0x000491c7) bg_popup_sub_pane_cp20_g5

0xd911,	// (0x0004bde3) bg_popup_sub_pane_cp20_g6

0xd6ec,	// (0x0004bbbe) bg_popup_sub_pane_cp20_g7

0xd6f4,	// (0x0004bbc6) bg_popup_sub_pane_cp20_g8

0xd6fc,	// (0x0004bbce) bg_popup_sub_pane_cp20_g9

0x0008,

0xf9ed,	// (0x0004debf) bg_popup_sub_pane_cp20_g

0xa9fd,	// (0x00048ecf) list_vitu2_match_list_item_pane_ParamLimits

0xa9fd,	// (0x00048ecf) list_vitu2_match_list_item_pane

0x801d,	// (0x000464ef) list_vitu2_match_list_item_pane_t1

0xa148,	// (0x0004861a) bg_popup_sub_pane_cp21

0xb13d,	// (0x0004960f) grid_vitu2_dropdown_list_pane

0x802b,	// (0x000464fd) cell_vitu2_dropdown_list_char_pane_ParamLimits

0x802b,	// (0x000464fd) cell_vitu2_dropdown_list_char_pane

0x8050,	// (0x00046522) cell_vitu2_dropdown_list_ctrl_pane_ParamLimits

0x8050,	// (0x00046522) cell_vitu2_dropdown_list_ctrl_pane

0xd919,	// (0x0004bdeb) cell_vitu2_dropdown_list_char_pane_g1

0xd922,	// (0x0004bdf4) cell_vitu2_dropdown_list_char_pane_g2

0xd92b,	// (0x0004bdfd) cell_vitu2_dropdown_list_char_pane_g3

0x0002,

0xfa0a,	// (0x0004dedc) cell_vitu2_dropdown_list_char_pane_g

0x807e,	// (0x00046550) cell_vitu2_dropdown_list_char_pane_t1

0x808c,	// (0x0004655e) cell_vitu2_dropdown_list_ctrl_pane_g1_ParamLimits

0x808c,	// (0x0004655e) cell_vitu2_dropdown_list_ctrl_pane_g1

0x809c,	// (0x0004656e) cell_vitu2_dropdown_list_ctrl_pane_g2_ParamLimits

0x809c,	// (0x0004656e) cell_vitu2_dropdown_list_ctrl_pane_g2

0x80ad,	// (0x0004657f) cell_vitu2_dropdown_list_ctrl_pane_g3_ParamLimits

0x80ad,	// (0x0004657f) cell_vitu2_dropdown_list_ctrl_pane_g3

0x80bd,	// (0x0004658f) cell_vitu2_dropdown_list_ctrl_pane_g4_ParamLimits

0x80bd,	// (0x0004658f) cell_vitu2_dropdown_list_ctrl_pane_g4

0xceb2,	// (0x0004b384) cell_vitu2_dropdown_list_ctrl_pane_g5_ParamLimits

0xceb2,	// (0x0004b384) cell_vitu2_dropdown_list_ctrl_pane_g5

0x0004,

0xfa11,	// (0x0004dee3) cell_vitu2_dropdown_list_ctrl_pane_g_ParamLimits

0xfa11,	// (0x0004dee3) cell_vitu2_dropdown_list_ctrl_pane_g

0x80d6,	// (0x000465a8) aid_size_cell_gallery2_ParamLimits

0x80d6,	// (0x000465a8) aid_size_cell_gallery2

0x80f0,	// (0x000465c2) grid_gallery2_pane_ParamLimits

0x80f0,	// (0x000465c2) grid_gallery2_pane

0x6afc,	// (0x00044fce) scroll_pane_cp029_ParamLimits

0x6afc,	// (0x00044fce) scroll_pane_cp029

0x8107,	// (0x000465d9) cell_gallery2_pane_ParamLimits

0x8107,	// (0x000465d9) cell_gallery2_pane

0xd934,	// (0x0004be06) cell_gallery2_pane_g2

0x8153,	// (0x00046625) cell_gallery2_pane_g3

0xd93c,	// (0x0004be0e) cell_gallery2_pane_g4

0xd944,	// (0x0004be16) cell_gallery2_pane_g5

0xaab8,	// (0x00048f8a) grid_highlight_pane_cp10

0x7804,	// (0x00045cd6) popup_vitu2_match_list_window_ParamLimits

0x7818,	// (0x00045cea) popup_vitu2_query_window_ParamLimits

0x7818,	// (0x00045cea) popup_vitu2_query_window

0xa148,	// (0x0004861a) bg_vitu2_candi_button_pane

0xd919,	// (0x0004bdeb) cell_vitu2_dropdown_list_char_pane_g1_copy1

0xd922,	// (0x0004bdf4) cell_vitu2_dropdown_list_char_pane_g2_copy1

0xd92b,	// (0x0004bdfd) cell_vitu2_dropdown_list_char_pane_g2_copy2

0x1010,	// (0x0003f4e2) bg_button_pane_cp015

0x815b,	// (0x0004662d) bg_button_pane_cp016

0x816e,	// (0x00046640) bg_button_pane_cp017

0xc81d,	// (0x0004acef) bg_popup_sub_pane_cp22

0xd94c,	// (0x0004be1e) popup_vitu2_query_window_g1

0x1043,	// (0x0003f515) popup_vitu2_query_window_g2

0x0002,

0xfa1c,	// (0x0004deee) popup_vitu2_query_window_g

0x1060,	// (0x0003f532) popup_vitu2_query_window_t1_ParamLimits

0x1060,	// (0x0003f532) popup_vitu2_query_window_t1

0x1093,	// (0x0003f565) popup_vitu2_query_window_t2_ParamLimits

0x1093,	// (0x0003f565) popup_vitu2_query_window_t2

0x10a5,	// (0x0003f577) popup_vitu2_query_window_t3_ParamLimits

0x10a5,	// (0x0003f577) popup_vitu2_query_window_t3

0x8192,	// (0x00046664) popup_vitu2_query_window_t4_ParamLimits

0x8192,	// (0x00046664) popup_vitu2_query_window_t4

0x81b5,	// (0x00046687) popup_vitu2_query_window_t5_ParamLimits

0x81b5,	// (0x00046687) popup_vitu2_query_window_t5

0x0006,

0xfa23,	// (0x0004def5) popup_vitu2_query_window_t_ParamLimits

0xfa23,	// (0x0004def5) popup_vitu2_query_window_t

0xd7d2,	// (0x0004bca4) main_cset_text_pane

0x7beb,	// (0x000460bd) aid_area_touch_slider_ParamLimits

0x7c07,	// (0x000460d9) cset_slider_pane_ParamLimits

0x7c31,	// (0x00046103) main_cset_slider_pane_g1_ParamLimits

0x7c46,	// (0x00046118) main_cset_slider_pane_g2_ParamLimits

0xd7f3,	// (0x0004bcc5) main_cset_slider_pane_g3_ParamLimits

0xd7f3,	// (0x0004bcc5) main_cset_slider_pane_g3

0x7c5b,	// (0x0004612d) main_cset_slider_pane_g4_ParamLimits

0x7c5b,	// (0x0004612d) main_cset_slider_pane_g4

0x7c6a,	// (0x0004613c) main_cset_slider_pane_g5_ParamLimits

0x7c6a,	// (0x0004613c) main_cset_slider_pane_g5

0x7c76,	// (0x00046148) main_cset_slider_pane_g6_ParamLimits

0x7c76,	// (0x00046148) main_cset_slider_pane_g6

0xf976,	// (0x0004de48) main_cset_slider_pane_g_ParamLimits

0xd823,	// (0x0004bcf5) main_cset_slider_pane_t1_ParamLimits

0x7d02,	// (0x000461d4) main_cset_slider_pane_t2_ParamLimits

0x7d1c,	// (0x000461ee) main_cset_slider_pane_t3_ParamLimits

0x7d36,	// (0x00046208) main_cset_slider_pane_t4_ParamLimits

0x7d50,	// (0x00046222) main_cset_slider_pane_t5_ParamLimits

0x7d6a,	// (0x0004623c) main_cset_slider_pane_t6_ParamLimits

0x7d7f,	// (0x00046251) main_cset_slider_pane_t7_ParamLimits

0x7da9,	// (0x0004627b) main_cset_slider_pane_t8_ParamLimits

0x7da9,	// (0x0004627b) main_cset_slider_pane_t8

0x7dd1,	// (0x000462a3) main_cset_slider_pane_t9_ParamLimits

0x7dd1,	// (0x000462a3) main_cset_slider_pane_t9

0x7df9,	// (0x000462cb) main_cset_slider_pane_t10_ParamLimits

0x7df9,	// (0x000462cb) main_cset_slider_pane_t10

0x7e21,	// (0x000462f3) main_cset_slider_pane_t11_ParamLimits

0x7e21,	// (0x000462f3) main_cset_slider_pane_t11

0x7e49,	// (0x0004631b) main_cset_slider_pane_t12_ParamLimits

0x7e49,	// (0x0004631b) main_cset_slider_pane_t12

0x7e66,	// (0x00046338) main_cset_slider_pane_t13_ParamLimits

0x7e66,	// (0x00046338) main_cset_slider_pane_t13

0xf99b,	// (0x0004de6d) main_cset_slider_pane_t_ParamLimits

0xa148,	// (0x0004861a) bg_popup_sub_pane_cp011

0xd958,	// (0x0004be2a) main_cset_text_pane_g1

0xd960,	// (0x0004be32) main_cset_text_pane_t1

0xd96e,	// (0x0004be40) main_cset_text_pane_t2

0xd97c,	// (0x0004be4e) main_cset_text_pane_t3

0xd98a,	// (0x0004be5c) main_cset_text_pane_t4

0xd998,	// (0x0004be6a) main_cset_text_pane_t5

0xd9a6,	// (0x0004be78) main_cset_text_pane_t6

0xd9b4,	// (0x0004be86) main_cset_text_pane_t7

0x0006,

0xfa32,	// (0x0004df04) main_cset_text_pane_t

0xa148,	// (0x0004861a) main_cam4_burst_pane

0xa148,	// (0x0004861a) main_cam5_pane

0x7b34,	// (0x00046006) bg_button_pane_cp019

0x7b3d,	// (0x0004600f) bg_button_pane_cp020

0xd7ff,	// (0x0004bcd1) main_cset_slider_pane_g7_ParamLimits

0xd7ff,	// (0x0004bcd1) main_cset_slider_pane_g7

0xd80b,	// (0x0004bcdd) main_cset_slider_pane_g8_ParamLimits

0xd80b,	// (0x0004bcdd) main_cset_slider_pane_g8

0x7c8a,	// (0x0004615c) main_cset_slider_pane_g9_ParamLimits

0x7c8a,	// (0x0004615c) main_cset_slider_pane_g9

0x7c96,	// (0x00046168) main_cset_slider_pane_g10_ParamLimits

0x7c96,	// (0x00046168) main_cset_slider_pane_g10

0x7ca2,	// (0x00046174) main_cset_slider_pane_g11_ParamLimits

0x7ca2,	// (0x00046174) main_cset_slider_pane_g11

0x7cae,	// (0x00046180) main_cset_slider_pane_g12_ParamLimits

0x7cae,	// (0x00046180) main_cset_slider_pane_g12

0x7cba,	// (0x0004618c) main_cset_slider_pane_g13_ParamLimits

0x7cba,	// (0x0004618c) main_cset_slider_pane_g13

0x7cc6,	// (0x00046198) main_cset_slider_pane_g14_ParamLimits

0x7cc6,	// (0x00046198) main_cset_slider_pane_g14

0x7cd2,	// (0x000461a4) main_cset_slider_pane_g15_ParamLimits

0x7cd2,	// (0x000461a4) main_cset_slider_pane_g15

0xd851,	// (0x0004bd23) main_cset_slider_pane_t14_ParamLimits

0xd851,	// (0x0004bd23) main_cset_slider_pane_t14

0xd88a,	// (0x0004bd5c) main_cset_slider_pane_t15_ParamLimits

0xd88a,	// (0x0004bd5c) main_cset_slider_pane_t15

0x81d8,	// (0x000466aa) aid_cam4_burst_size_cell_ParamLimits

0x81d8,	// (0x000466aa) aid_cam4_burst_size_cell

0x81f4,	// (0x000466c6) grid_cam4_burst_pane_ParamLimits

0x81f4,	// (0x000466c6) grid_cam4_burst_pane

0x8226,	// (0x000466f8) linegrid_cam4_burst_pane_ParamLimits

0x8226,	// (0x000466f8) linegrid_cam4_burst_pane

0x8244,	// (0x00046716) scroll_pane_cp30_ParamLimits

0x8244,	// (0x00046716) scroll_pane_cp30

0x8250,	// (0x00046722) cell_cam4_burst_pane_ParamLimits

0x8250,	// (0x00046722) cell_cam4_burst_pane

0xd9c2,	// (0x0004be94) linegrid_cam4_burst_pane_g1_ParamLimits

0xd9c2,	// (0x0004be94) linegrid_cam4_burst_pane_g1

0x8290,	// (0x00046762) linegrid_cam4_burst_pane_g2_ParamLimits

0x8290,	// (0x00046762) linegrid_cam4_burst_pane_g2

0xd9cf,	// (0x0004bea1) linegrid_cam4_burst_pane_g3_ParamLimits

0xd9cf,	// (0x0004bea1) linegrid_cam4_burst_pane_g3

0x0002,

0xfa41,	// (0x0004df13) linegrid_cam4_burst_pane_g_ParamLimits

0xfa41,	// (0x0004df13) linegrid_cam4_burst_pane_g

0x82a1,	// (0x00046773) linegrid_cam4_burst_pane_g3_copy1_ParamLimits

0x82a1,	// (0x00046773) linegrid_cam4_burst_pane_g3_copy1

0xd9dc,	// (0x0004beae) linegrid_cam4_burst_pane_g4_ParamLimits

0xd9dc,	// (0x0004beae) linegrid_cam4_burst_pane_g4

0x82bb,	// (0x0004678d) linegrid_cam4_burst_pane_g5_ParamLimits

0x82bb,	// (0x0004678d) linegrid_cam4_burst_pane_g5

0x82cc,	// (0x0004679e) linegrid_cam4_burst_pane_g6_ParamLimits

0x82cc,	// (0x0004679e) linegrid_cam4_burst_pane_g6

0xd9e9,	// (0x0004bebb) linegrid_cam4_burst_pane_g7_ParamLimits

0xd9e9,	// (0x0004bebb) linegrid_cam4_burst_pane_g7

0x82e3,	// (0x000467b5) cell_cam4_burst_pane_g1

0xda02,	// (0x0004bed4) main_cam5_pane_t1_ParamLimits

0xda02,	// (0x0004bed4) main_cam5_pane_t1

0xda14,	// (0x0004bee6) main_cam5_pane_t2_ParamLimits

0xda14,	// (0x0004bee6) main_cam5_pane_t2

0xda26,	// (0x0004bef8) main_cam5_pane_t3_ParamLimits

0xda26,	// (0x0004bef8) main_cam5_pane_t3

0xda38,	// (0x0004bf0a) main_cam5_pane_t4_ParamLimits

0xda38,	// (0x0004bf0a) main_cam5_pane_t4

0xda50,	// (0x0004bf22) main_cam5_pane_t5_ParamLimits

0xda50,	// (0x0004bf22) main_cam5_pane_t5

0xda64,	// (0x0004bf36) main_cam5_pane_t6_ParamLimits

0xda64,	// (0x0004bf36) main_cam5_pane_t6

0xda78,	// (0x0004bf4a) main_cam5_pane_t7_ParamLimits

0xda78,	// (0x0004bf4a) main_cam5_pane_t7

0xda8a,	// (0x0004bf5c) main_cam5_pane_t8_ParamLimits

0xda8a,	// (0x0004bf5c) main_cam5_pane_t8

0xdaa8,	// (0x0004bf7a) main_cam5_pane_t9_ParamLimits

0xdaa8,	// (0x0004bf7a) main_cam5_pane_t9

0xdaba,	// (0x0004bf8c) main_cam5_pane_t10_ParamLimits

0xdaba,	// (0x0004bf8c) main_cam5_pane_t10

0xdacc,	// (0x0004bf9e) main_cam5_pane_t11_ParamLimits

0xdacc,	// (0x0004bf9e) main_cam5_pane_t11

0xdae0,	// (0x0004bfb2) main_cam5_pane_t12_ParamLimits

0xdae0,	// (0x0004bfb2) main_cam5_pane_t12

0xdaf7,	// (0x0004bfc9) main_cam5_pane_t13_ParamLimits

0xdaf7,	// (0x0004bfc9) main_cam5_pane_t13

0x000c,

0xfa4d,	// (0x0004df1f) main_cam5_pane_t_ParamLimits

0xfa4d,	// (0x0004df1f) main_cam5_pane_t

0x214c,	// (0x0004061e) popup_scut_keymap_window_ParamLimits

0x214c,	// (0x0004061e) popup_scut_keymap_window

0x82f6,	// (0x000467c8) aid_size_cell_brow_shortcut

0xaab8,	// (0x00048f8a) bg_popup_window_pane_cp010

0x8302,	// (0x000467d4) grid_scut_pane

0x830e,	// (0x000467e0) cell_scut_pane_ParamLimits

0x830e,	// (0x000467e0) cell_scut_pane

0x8329,	// (0x000467fb) cell_scut_pane_g1

0xdb1a,	// (0x0004bfec) cell_scut_pane_t1

0xdb29,	// (0x0004bffb) cell_scut_pane_t2

0x8332,	// (0x00046804) cell_scut_pane_t3

0x0002,

0xfa68,	// (0x0004df3a) cell_scut_pane_t

0x62f1,	// (0x000447c3) main_mup3_pane_g8_ParamLimits

0x62f1,	// (0x000447c3) main_mup3_pane_g8

0x7738,	// (0x00045c0a) area_vitu2_query_pane_ParamLimits

0x7738,	// (0x00045c0a) area_vitu2_query_pane

0x1022,	// (0x0003f4f4) input_focus_pane_cp08

0xdb38,	// (0x0004c00a) area_vitu2_query_pane_g1

0x1123,	// (0x0003f5f5) area_vitu2_query_pane_g2

0x0001,

0xfa6f,	// (0x0004df41) area_vitu2_query_pane_g

0x8340,	// (0x00046812) area_vitu2_query_pane_t1_ParamLimits

0x8340,	// (0x00046812) area_vitu2_query_pane_t1

0x8354,	// (0x00046826) area_vitu2_query_pane_t2_ParamLimits

0x8354,	// (0x00046826) area_vitu2_query_pane_t2

0x1134,	// (0x0003f606) area_vitu2_query_pane_t3_ParamLimits

0x1134,	// (0x0003f606) area_vitu2_query_pane_t3

0x115c,	// (0x0003f62e) area_vitu2_query_pane_t4_ParamLimits

0x115c,	// (0x0003f62e) area_vitu2_query_pane_t4

0x1184,	// (0x0003f656) area_vitu2_query_pane_t5_ParamLimits

0x1184,	// (0x0003f656) area_vitu2_query_pane_t5

0x11ac,	// (0x0003f67e) area_vitu2_query_pane_t6_ParamLimits

0x11ac,	// (0x0003f67e) area_vitu2_query_pane_t6

0x0006,

0xfa74,	// (0x0004df46) area_vitu2_query_pane_t_ParamLimits

0xfa74,	// (0x0004df46) area_vitu2_query_pane_t

0x8368,	// (0x0004683a) bg_button_pane_cp018

0x8376,	// (0x00046848) bg_button_pane_cp021

0x11f8,	// (0x0003f6ca) bg_button_pane_cp022

0x1209,	// (0x0003f6db) input_focus_pane_cp09

0x47aa,	// (0x00042c7c) aid_size_touch_mv_arrow_left

0x47d5,	// (0x00042ca7) aid_size_touch_mv_arrow_right

0x7cea,	// (0x000461bc) main_cset_slider_pane_g16_ParamLimits

0x7cea,	// (0x000461bc) main_cset_slider_pane_g16

0x7cf6,	// (0x000461c8) main_cset_slider_pane_g17_ParamLimits

0x7cf6,	// (0x000461c8) main_cset_slider_pane_g17

0x82e3,	// (0x000467b5) cell_cam4_burst_pane_g1_ParamLimits

0xa148,	// (0x0004861a) compa_mode_pane

0x7ee4,	// (0x000463b6) popup_vtel_slider_window_g3_ParamLimits

0x7ee4,	// (0x000463b6) popup_vtel_slider_window_g3

0x7ef8,	// (0x000463ca) popup_vtel_slider_window_g4_ParamLimits

0x7ef8,	// (0x000463ca) popup_vtel_slider_window_g4

0x7f0c,	// (0x000463de) popup_vtel_slider_window_t1_ParamLimits

0x7f0c,	// (0x000463de) popup_vtel_slider_window_t1

0xa148,	// (0x0004861a) main_cl_pane

0xc849,	// (0x0004ad1b) popup_imed_adjust2_window_ParamLimits

0xc81d,	// (0x0004acef) bg_tb_trans_pane_cp05_ParamLimits

0xd17f,	// (0x0004b651) popup_imed_adjust2_window_g1_ParamLimits

0xd18e,	// (0x0004b660) popup_imed_adjust2_window_g2_ParamLimits

0xd18e,	// (0x0004b660) popup_imed_adjust2_window_g2

0xd19a,	// (0x0004b66c) popup_imed_adjust2_window_g3_ParamLimits

0xd19a,	// (0x0004b66c) popup_imed_adjust2_window_g3

0x0002,

0xf7df,	// (0x0004dcb1) popup_imed_adjust2_window_g_ParamLimits

0xf7df,	// (0x0004dcb1) popup_imed_adjust2_window_g

0xd1a6,	// (0x0004b678) popup_imed_adjust2_window_t1_ParamLimits

0xd1be,	// (0x0004b690) slider_imed_adjust_pane_ParamLimits

0xd1d2,	// (0x0004b6a4) slider_imed_adjust_pane_g1_ParamLimits

0xd1e2,	// (0x0004b6b4) slider_imed_adjust_pane_g2_ParamLimits

0xd1f2,	// (0x0004b6c4) slider_imed_adjust_pane_g3_ParamLimits

0xd203,	// (0x0004b6d5) slider_imed_adjust_pane_g4_ParamLimits

0xf7e6,	// (0x0004dcb8) slider_imed_adjust_pane_g_ParamLimits

0x7479,	// (0x0004594b) aid_touch_area_cam4_ParamLimits

0x7479,	// (0x0004594b) aid_touch_area_cam4

0x7489,	// (0x0004595b) battery_pane_cp01

0x7510,	// (0x000459e2) main_camera4_pane_g6_ParamLimits

0x7510,	// (0x000459e2) main_camera4_pane_g6

0x752e,	// (0x00045a00) main_camera4_pane_t2_ParamLimits

0x752e,	// (0x00045a00) main_camera4_pane_t2

0x0001,

0xf8e9,	// (0x0004ddbb) main_camera4_pane_t_ParamLimits

0xf8e9,	// (0x0004ddbb) main_camera4_pane_t

0x75b1,	// (0x00045a83) aid_touch_area_vid4_ParamLimits

0x75b1,	// (0x00045a83) aid_touch_area_vid4

0x75f1,	// (0x00045ac3) main_video4_pane_g5_ParamLimits

0x75f1,	// (0x00045ac3) main_video4_pane_g5

0x7617,	// (0x00045ae9) vid4_progress_pane_ParamLimits

0x7617,	// (0x00045ae9) vid4_progress_pane

0xd817,	// (0x0004bce9) main_cset_slider_pane_g18_ParamLimits

0xd817,	// (0x0004bce9) main_cset_slider_pane_g18

0xd9f6,	// (0x0004bec8) cell_cam4_burst_pane_g2_ParamLimits

0xd9f6,	// (0x0004bec8) cell_cam4_burst_pane_g2

0x0001,

0xfa48,	// (0x0004df1a) cell_cam4_burst_pane_g_ParamLimits

0xfa48,	// (0x0004df1a) cell_cam4_burst_pane_g

0x8382,	// (0x00046854) bg_cl_pane_ParamLimits

0x8382,	// (0x00046854) bg_cl_pane

0x838e,	// (0x00046860) cl_header_pane_ParamLimits

0x838e,	// (0x00046860) cl_header_pane

0x839a,	// (0x0004686c) cl_listscroll_pane_ParamLimits

0x839a,	// (0x0004686c) cl_listscroll_pane

0xdb44,	// (0x0004c016) bg_cl_pane_g1

0xdb4c,	// (0x0004c01e) bg_cl_pane_g2

0xdb54,	// (0x0004c026) bg_cl_pane_g3

0xdb5c,	// (0x0004c02e) bg_cl_pane_g4

0xdb64,	// (0x0004c036) bg_cl_pane_g5

0xdb6c,	// (0x0004c03e) bg_cl_pane_g6

0xdb74,	// (0x0004c046) bg_cl_pane_g7

0xdb7c,	// (0x0004c04e) bg_cl_pane_g8

0xdb84,	// (0x0004c056) bg_cl_pane_g9

0x0008,

0xfa83,	// (0x0004df55) bg_cl_pane_g

0x83a6,	// (0x00046878) aid_height_cl_leading_ParamLimits

0x83a6,	// (0x00046878) aid_height_cl_leading

0x83b2,	// (0x00046884) aid_height_cl_text_ParamLimits

0x83b2,	// (0x00046884) aid_height_cl_text

0x218d,	// (0x0004065f) bg_cl_header_pane_ParamLimits

0x218d,	// (0x0004065f) bg_cl_header_pane

0x83ca,	// (0x0004689c) cl_header_pane_g1_ParamLimits

0x83ca,	// (0x0004689c) cl_header_pane_g1

0x83d7,	// (0x000468a9) cl_header_pane_t1_ParamLimits

0x83d7,	// (0x000468a9) cl_header_pane_t1

0xdb8c,	// (0x0004c05e) cl_list_pane

0xd7ea,	// (0x0004bcbc) hc_scroll_pane_cp01

0xacf5,	// (0x000491c7) bg_cl_header_pane_g1

0xd6cc,	// (0x0004bb9e) bg_cl_header_pane_g2

0xad15,	// (0x000491e7) bg_cl_header_pane_g3

0xd6dc,	// (0x0004bbae) bg_cl_header_pane_g4

0xd6d4,	// (0x0004bba6) bg_cl_header_pane_g5

0xd911,	// (0x0004bde3) bg_cl_header_pane_g6

0xd6f4,	// (0x0004bbc6) bg_cl_header_pane_g7

0xd6fc,	// (0x0004bbce) bg_cl_header_pane_g8

0xd6ec,	// (0x0004bbbe) bg_cl_header_pane_g9

0x0008,

0xfa96,	// (0x0004df68) bg_cl_header_pane_g

0x83e9,	// (0x000468bb) hc_cl_list_double_graphic_heading_pane_ParamLimits

0x83e9,	// (0x000468bb) hc_cl_list_double_graphic_heading_pane

0x83f9,	// (0x000468cb) hc_cl_list_single_graphic_pane_ParamLimits

0x83f9,	// (0x000468cb) hc_cl_list_single_graphic_pane

0x840b,	// (0x000468dd) hc_cl_list_single_graphic_pane_g1_ParamLimits

0x840b,	// (0x000468dd) hc_cl_list_single_graphic_pane_g1

0x8417,	// (0x000468e9) hc_cl_list_single_graphic_pane_g2_ParamLimits

0x8417,	// (0x000468e9) hc_cl_list_single_graphic_pane_g2

0x0001,

0xfaa9,	// (0x0004df7b) hc_cl_list_single_graphic_pane_g_ParamLimits

0xfaa9,	// (0x0004df7b) hc_cl_list_single_graphic_pane_g

0x842b,	// (0x000468fd) hc_cl_list_single_graphic_pane_t1_ParamLimits

0x842b,	// (0x000468fd) hc_cl_list_single_graphic_pane_t1

0x840b,	// (0x000468dd) hc_cl_list_double_graphic_heading_pane_g1_ParamLimits

0x840b,	// (0x000468dd) hc_cl_list_double_graphic_heading_pane_g1

0x8440,	// (0x00046912) hc_cl_list_double_graphic_heading_pane_g2_ParamLimits

0x8440,	// (0x00046912) hc_cl_list_double_graphic_heading_pane_g2

0x8454,	// (0x00046926) hc_cl_list_double_graphic_heading_pane_g3_ParamLimits

0x8454,	// (0x00046926) hc_cl_list_double_graphic_heading_pane_g3

0x0002,

0xfaae,	// (0x0004df80) hc_cl_list_double_graphic_heading_pane_g_ParamLimits

0xfaae,	// (0x0004df80) hc_cl_list_double_graphic_heading_pane_g

0x8468,	// (0x0004693a) hc_cl_list_double_graphic_heading_pane_t1_ParamLimits

0x8468,	// (0x0004693a) hc_cl_list_double_graphic_heading_pane_t1

0x847d,	// (0x0004694f) hc_cl_list_double_graphic_heading_pane_t2_ParamLimits

0x847d,	// (0x0004694f) hc_cl_list_double_graphic_heading_pane_t2

0x0001,

0xfab5,	// (0x0004df87) hc_cl_list_double_graphic_heading_pane_t_ParamLimits

0xfab5,	// (0x0004df87) hc_cl_list_double_graphic_heading_pane_t

0x849a,	// (0x0004696c) vid4_progress_pane_g1

0x84ac,	// (0x0004697e) vid4_progress_pane_g2

0x4e9e,	// (0x00043370) vid4_progress_pane_g3

0x84be,	// (0x00046990) vid4_progress_pane_g4

0x0004,

0xfaba,	// (0x0004df8c) vid4_progress_pane_g

0x84dc,	// (0x000469ae) vid4_progress_pane_t1

0x84f1,	// (0x000469c3) vid4_progress_pane_t2

0x0002,

0xfac5,	// (0x0004df97) vid4_progress_pane_t

0x851c,	// (0x000469ee) wait_bar_pane_cp07

0xca5b,	// (0x0004af2d) blid_firmament_pane_ParamLimits

0xca9e,	// (0x0004af70) popup_blid_sat_info2_window_g1

0xcac2,	// (0x0004af94) popup_blid_sat_info2_window_t3

0xcad0,	// (0x0004afa2) popup_blid_sat_info2_window_t4

0xcade,	// (0x0004afb0) popup_blid_sat_info2_window_t5

0xcaec,	// (0x0004afbe) popup_blid_sat_info2_window_t6

0xcafc,	// (0x0004afce) popup_blid_sat_info2_window_t7

0xcb0a,	// (0x0004afdc) popup_blid_sat_info2_window_t8

0xcb18,	// (0x0004afea) popup_blid_sat_info2_window_t9

0xcb26,	// (0x0004aff8) popup_blid_sat_info2_window_t10

0xcbee,	// (0x0004b0c0) aid_firma_cardinal_ParamLimits

0xcc02,	// (0x0004b0d4) blid_firmament_pane_t1_ParamLimits

0xcc19,	// (0x0004b0eb) blid_firmament_pane_t2_ParamLimits

0xcc30,	// (0x0004b102) blid_firmament_pane_t3_ParamLimits

0xcc47,	// (0x0004b119) blid_firmament_pane_t4_ParamLimits

0xf6d3,	// (0x0004dba5) blid_firmament_pane_t_ParamLimits

0xcc5e,	// (0x0004b130) blid_sat_info_pane_ParamLimits

0xa9e1,	// (0x00048eb3) main_cam_set_pane_ParamLimits

0x6a95,	// (0x00044f67) aid_size_cell_colour_35_ParamLimits

0x6aaf,	// (0x00044f81) aid_size_cell_colour_112_ParamLimits

0x6ac6,	// (0x00044f98) aid_size_cell_effect_ParamLimits

0xa9e1,	// (0x00048eb3) bg_tb_trans_pane_cp02_ParamLimits

0xbb89,	// (0x0004a05b) heading_imed_pane_ParamLimits

0x6ae0,	// (0x00044fb2) listscroll_imed_pane_ParamLimits

0xbe3f,	// (0x0004a311) popup_call2_audio_first_window_g5_ParamLimits

0xbe3f,	// (0x0004a311) popup_call2_audio_first_window_g5

0x71f2,	// (0x000456c4) aid_size_touch_image3_arrow_left_ParamLimits

0x71f2,	// (0x000456c4) aid_size_touch_image3_arrow_left

0x7208,	// (0x000456da) aid_size_touch_image3_arrow_right_ParamLimits

0x7208,	// (0x000456da) aid_size_touch_image3_arrow_right

0x8507,	// (0x000469d9) vid4_progress_pane_t3

0x6d8e,	// (0x00045260) main_hwr_training_symbol_option_pane_ParamLimits

0x6d8e,	// (0x00045260) main_hwr_training_symbol_option_pane

0xd46e,	// (0x0004b940) popup_hwr_training_preview_window_ParamLimits

0xd46e,	// (0x0004b940) popup_hwr_training_preview_window

0x6def,	// (0x000452c1) hwr_training_navi_pane_g5_ParamLimits

0x6def,	// (0x000452c1) hwr_training_navi_pane_g5

0xd6ba,	// (0x0004bb8c) popup_char_count_window

0x218d,	// (0x0004065f) bg_popup_sub_pane_cp20_ParamLimits

0x8005,	// (0x000464d7) list_vitu2_match_list_pane_ParamLimits

0x8011,	// (0x000464e3) vitu2_page_scroll_pane_ParamLimits

0x8011,	// (0x000464e3) vitu2_page_scroll_pane

0xdb95,	// (0x0004c067) list_single_hwr_training_symbol_option_pane_ParamLimits

0xdb95,	// (0x0004c067) list_single_hwr_training_symbol_option_pane

0xdba8,	// (0x0004c07a) list_single_hwr_training_symbol_option_pane_g1

0xdbb0,	// (0x0004c082) list_single_hwr_training_symbol_option_pane_t1

0xdbbe,	// (0x0004c090) bg_button_pane_cp023

0xdbc7,	// (0x0004c099) bg_button_pane_cp024

0x8539,	// (0x00046a0b) vitu2_page_scroll_pane_g1

0x8541,	// (0x00046a13) vitu2_page_scroll_pane_g2

0x0001,

0xfacc,	// (0x0004df9e) vitu2_page_scroll_pane_g

0x854b,	// (0x00046a1d) vitu2_page_scroll_pane_t1

0xdbfa,	// (0x0004c0cc) popup_char_count_window_g1

0xdc03,	// (0x0004c0d5) popup_char_count_window_g2

0xdc0c,	// (0x0004c0de) popup_char_count_window_g3

0x0002,

0xfad1,	// (0x0004dfa3) popup_char_count_window_g

0xdc15,	// (0x0004c0e7) popup_char_count_window_t1

0xa148,	// (0x0004861a) main_vded2_pane

0xd16b,	// (0x0004b63d) aid_size_cell_imed_line

0xd175,	// (0x0004b647) grid_imed_line_width_pane

0x768b,	// (0x00045b5d) vid4_indicators_pane_g4

0xdc23,	// (0x0004c0f5) cell_imed_line_width_pane_ParamLimits

0xdc23,	// (0x0004c0f5) cell_imed_line_width_pane

0xdc39,	// (0x0004c10b) cell_imed_line_width_pane_g1

0xccb2,	// (0x0004b184) cell_imed_line_width_pane_g2

0x0001,

0xfad8,	// (0x0004dfaa) cell_imed_line_width_pane_g

0x855a,	// (0x00046a2c) main_vded2_pane_g1_ParamLimits

0x855a,	// (0x00046a2c) main_vded2_pane_g1

0x8569,	// (0x00046a3b) main_vded2_pane_g2_ParamLimits

0x8569,	// (0x00046a3b) main_vded2_pane_g2

0x0001,

0xfadd,	// (0x0004dfaf) main_vded2_pane_g_ParamLimits

0xfadd,	// (0x0004dfaf) main_vded2_pane_g

0x8577,	// (0x00046a49) vded2_slider_pane_ParamLimits

0x8577,	// (0x00046a49) vded2_slider_pane

0x8584,	// (0x00046a56) aid_size_touch_vded2_end

0x858e,	// (0x00046a60) aid_size_touch_vded2_playhead

0xdc42,	// (0x0004c114) aid_size_touch_vded2_start

0xdc4a,	// (0x0004c11c) vded2_slider_bg_pane

0xdc53,	// (0x0004c125) vded2_slider_pane_g1

0xdc5c,	// (0x0004c12e) vded2_slider_pane_g2

0x8596,	// (0x00046a68) vded2_slider_pane_g3

0x0002,

0xfae2,	// (0x0004dfb4) vded2_slider_pane_g

0xd562,	// (0x0004ba34) vded2_slider_bg_pane_g1

0xd56b,	// (0x0004ba3d) vded2_slider_bg_pane_g2

0xd574,	// (0x0004ba46) vded2_slider_bg_pane_g3

0x0002,

0xf7a3,	// (0x0004dc75) vded2_slider_bg_pane_g

0x4eb6,	// (0x00043388) aid_postcard_touch_down_pane_ParamLimits

0x4eb6,	// (0x00043388) aid_postcard_touch_down_pane

0x4ec6,	// (0x00043398) aid_postcard_touch_up_pane_ParamLimits

0x4ec6,	// (0x00043398) aid_postcard_touch_up_pane

0xa148,	// (0x0004861a) main_blid2_pane

0xc82b,	// (0x0004acfd) popup_blid2_search_window

0xa148,	// (0x0004861a) blid2_gps_pane

0xa148,	// (0x0004861a) blid2_navig_pane

0xa148,	// (0x0004861a) blid2_search_pane

0xa148,	// (0x0004861a) blid2_tripm_pane

0x859f,	// (0x00046a71) blid2_search_pane_g1_ParamLimits

0x859f,	// (0x00046a71) blid2_search_pane_g1

0x85ab,	// (0x00046a7d) blid2_search_pane_t1_ParamLimits

0x85ab,	// (0x00046a7d) blid2_search_pane_t1

0x85bd,	// (0x00046a8f) aid_size_cell_blid2_gps_ParamLimits

0x85bd,	// (0x00046a8f) aid_size_cell_blid2_gps

0x85cd,	// (0x00046a9f) blid2_gps_pane_g1_ParamLimits

0x85cd,	// (0x00046a9f) blid2_gps_pane_g1

0x85d9,	// (0x00046aab) grid_blid2_satellite_pane_ParamLimits

0x85d9,	// (0x00046aab) grid_blid2_satellite_pane

0x85e7,	// (0x00046ab9) blid2_navig_pane_g1_ParamLimits

0x85e7,	// (0x00046ab9) blid2_navig_pane_g1

0x85f3,	// (0x00046ac5) blid2_navig_pane_t1_ParamLimits

0x85f3,	// (0x00046ac5) blid2_navig_pane_t1

0x8605,	// (0x00046ad7) blid2_navig_pane_t2_ParamLimits

0x8605,	// (0x00046ad7) blid2_navig_pane_t2

0x0001,

0xfae9,	// (0x0004dfbb) blid2_navig_pane_t_ParamLimits

0xfae9,	// (0x0004dfbb) blid2_navig_pane_t

0x8617,	// (0x00046ae9) blid2_navig_ring_pane_ParamLimits

0x8617,	// (0x00046ae9) blid2_navig_ring_pane

0x8627,	// (0x00046af9) blid2_speed_pane_ParamLimits

0x8627,	// (0x00046af9) blid2_speed_pane

0x8633,	// (0x00046b05) blid2_tripm_pane_g1_ParamLimits

0x8633,	// (0x00046b05) blid2_tripm_pane_g1

0x8643,	// (0x00046b15) blid2_tripm_pane_g2_ParamLimits

0x8643,	// (0x00046b15) blid2_tripm_pane_g2

0x864f,	// (0x00046b21) blid2_tripm_pane_g3_ParamLimits

0x864f,	// (0x00046b21) blid2_tripm_pane_g3

0x865b,	// (0x00046b2d) blid2_tripm_pane_g4_ParamLimits

0x865b,	// (0x00046b2d) blid2_tripm_pane_g4

0x8667,	// (0x00046b39) blid2_tripm_pane_g5_ParamLimits

0x8667,	// (0x00046b39) blid2_tripm_pane_g5

0x0005,

0xfaee,	// (0x0004dfc0) blid2_tripm_pane_g_ParamLimits

0xfaee,	// (0x0004dfc0) blid2_tripm_pane_g

0x8683,	// (0x00046b55) blid2_tripm_pane_t1_ParamLimits

0x8683,	// (0x00046b55) blid2_tripm_pane_t1

0x8695,	// (0x00046b67) blid2_tripm_pane_t2_ParamLimits

0x8695,	// (0x00046b67) blid2_tripm_pane_t2

0x86a7,	// (0x00046b79) blid2_tripm_pane_t3_ParamLimits

0x86a7,	// (0x00046b79) blid2_tripm_pane_t3

0x0003,

0xfafb,	// (0x0004dfcd) blid2_tripm_pane_t_ParamLimits

0xfafb,	// (0x0004dfcd) blid2_tripm_pane_t

0x86d9,	// (0x00046bab) cell_blid2_satellite_pane_ParamLimits

0x86d9,	// (0x00046bab) cell_blid2_satellite_pane

0x86f7,	// (0x00046bc9) cell_blid2_satellite_pane_g1

0xdc64,	// (0x0004c136) cell_blid2_satellite_pane_t1

0xcc6e,	// (0x0004b140) blid2_speed_pane_g1

0xdc72,	// (0x0004c144) blid2_speed_pane_t1

0xdc80,	// (0x0004c152) blid2_speed_pane_t2

0x0001,

0xfb04,	// (0x0004dfd6) blid2_speed_pane_t

0xcc6e,	// (0x0004b140) blid2_navig_ring_pane_g1

0x8700,	// (0x00046bd2) blid2_navig_ring_pane_g2

0x8708,	// (0x00046bda) blid2_navig_ring_pane_g3

0x8710,	// (0x00046be2) blid2_navig_ring_pane_g4

0x8718,	// (0x00046bea) blid2_navig_ring_pane_g5

0x0004,

0xfb09,	// (0x0004dfdb) blid2_navig_ring_pane_g

0xa148,	// (0x0004861a) bg_popup_window_pane_cp011

0xdc8e,	// (0x0004c160) popup_blid2_search_window_g1

0xdc96,	// (0x0004c168) popup_blid2_search_window_t1

0xdca4,	// (0x0004c176) popup_blid2_search_window_t2

0x0001,

0xfb14,	// (0x0004dfe6) popup_blid2_search_window_t

0xac04,	// (0x000490d6) main_browser_pane_g1

0xa8d4,	// (0x00048da6) main_browser_pane_ParamLimits

0xa9e1,	// (0x00048eb3) bg_button_pane_cp011_ParamLimits

0x78fd,	// (0x00045dcf) cell_vitu2_function_pane_g1_ParamLimits

0xc81d,	// (0x0004acef) bg_popup_sub_pane_cp22_ParamLimits

0x1022,	// (0x0003f4f4) input_focus_pane_cp08_ParamLimits

0x8181,	// (0x00046653) popup_vitu2_query_button_pane_ParamLimits

0x8181,	// (0x00046653) popup_vitu2_query_button_pane

0x1039,	// (0x0003f50b) popup_vitu2_query_input_button_pane

0xd94c,	// (0x0004be1e) popup_vitu2_query_window_g1_ParamLimits

0x1043,	// (0x0003f515) popup_vitu2_query_window_g2_ParamLimits

0xfa1c,	// (0x0004deee) popup_vitu2_query_window_g_ParamLimits

0xa148,	// (0x0004861a) bg_button_pane_cp026

0x8720,	// (0x00046bf2) popup_vitu2_query_input_button_pane_g1

0xa148,	// (0x0004861a) bg_button_pane_cp025

0xdcb2,	// (0x0004c184) popup_vitu2_query_button_pane_t1

0x6057,	// (0x00044529) main_mp3_pane_t6

0x6067,	// (0x00044539) popup_slider_window_cp01

0x7566,	// (0x00045a38) cam4_battery_pane

0x7644,	// (0x00045b16) cam4_battery_pane_cp02

0x8492,	// (0x00046964) cam4_battery_pane_cp01

0x8492,	// (0x00046964) cam4_battery_pane_cp03

0xcc6e,	// (0x0004b140) cam4_battery_pane_g1

0xdcc0,	// (0x0004c192) cam4_battery_pane_g2

0x0001,

0xfb19,	// (0x0004dfeb) cam4_battery_pane_g

0xcb34,	// (0x0004b006) popup_blid_sat_info2_window_t11

0x47aa,	// (0x00042c7c) aid_size_touch_mv_arrow_left_ParamLimits

0x47d5,	// (0x00042ca7) aid_size_touch_mv_arrow_right_ParamLimits

0xb350,	// (0x00049822) navi_pane_g1_ParamLimits

0x4814,	// (0x00042ce6) navi_pane_g2_ParamLimits

0x4842,	// (0x00042d14) navi_pane_g3_ParamLimits

0xf3e5,	// (0x0004d8b7) navi_pane_g_ParamLimits

0x489c,	// (0x00042d6e) navi_pane_mv_t1_ParamLimits

0x6aec,	// (0x00044fbe) grid_imed_effect_pane_ParamLimits

0x32c0,	// (0x00041792) aid_placing_vt_slider_lsc

0xab4f,	// (0x00049021) aid_placing_vt_slider_prt

0xa9e1,	// (0x00048eb3) bg_tb_trans_pane_cp01_ParamLimits

0xcdd2,	// (0x0004b2a4) popup_image_details_window_g1_ParamLimits

0xcde5,	// (0x0004b2b7) popup_image_details_window_g2_ParamLimits

0xcdfa,	// (0x0004b2cc) popup_image_details_window_g3_ParamLimits

0xcdfa,	// (0x0004b2cc) popup_image_details_window_g3

0xf718,	// (0x0004dbea) popup_image_details_window_g_ParamLimits

0xce0e,	// (0x0004b2e0) popup_image_details_window_t1_ParamLimits

0xce20,	// (0x0004b2f2) popup_image_details_window_t2_ParamLimits

0xce39,	// (0x0004b30b) popup_image_details_window_t3_ParamLimits

0xce4d,	// (0x0004b31f) popup_image_details_window_t4_ParamLimits

0xce68,	// (0x0004b33a) popup_image_details_window_t5_ParamLimits

0xf71f,	// (0x0004dbf1) popup_image_details_window_t_ParamLimits

0x83be,	// (0x00046890) cl_header_name_pane_ParamLimits

0x83be,	// (0x00046890) cl_header_name_pane

0x8728,	// (0x00046bfa) cl_header_name_pane_t1_ParamLimits

0x8728,	// (0x00046bfa) cl_header_name_pane_t1

0x873f,	// (0x00046c11) cl_header_name_pane_t2_ParamLimits

0x873f,	// (0x00046c11) cl_header_name_pane_t2

0x8769,	// (0x00046c3b) cl_header_name_pane_t3_ParamLimits

0x8769,	// (0x00046c3b) cl_header_name_pane_t3

0x0002,

0xfb1e,	// (0x0004dff0) cl_header_name_pane_t_ParamLimits

0xfb1e,	// (0x0004dff0) cl_header_name_pane_t

0x486d,	// (0x00042d3f) navi_pane_mv_g2_ParamLimits

0xd694,	// (0x0004bb66) field_vitu2_entry_pane_g1_ParamLimits

0xd6a0,	// (0x0004bb72) field_vitu2_entry_pane_g2_ParamLimits

0xd6ac,	// (0x0004bb7e) field_vitu2_entry_pane_g3_ParamLimits

0xd6ac,	// (0x0004bb7e) field_vitu2_entry_pane_g3

0xf91b,	// (0x0004dded) field_vitu2_entry_pane_g_ParamLimits

0x7891,	// (0x00045d63) cell_vitu2_itu_pane_g1_ParamLimits

0x78a3,	// (0x00045d75) cell_vitu2_itu_pane_g2_ParamLimits

0x78a3,	// (0x00045d75) cell_vitu2_itu_pane_g2

0x0001,

0xf927,	// (0x0004ddf9) cell_vitu2_itu_pane_g_ParamLimits

0xf927,	// (0x0004ddf9) cell_vitu2_itu_pane_g

0xa9e1,	// (0x00048eb3) bg_vkb2_func_pane_cp05_ParamLimits

0xa9e1,	// (0x00048eb3) bg_vkb2_func_pane_cp05

0xa9e1,	// (0x00048eb3) bg_vkb2_func_pane_cp03

0xa9e1,	// (0x00048eb3) bg_vkb2_func_pane_cp04

0xa9e1,	// (0x00048eb3) bg_vkb2_func_pane_cp10_ParamLimits

0xa9e1,	// (0x00048eb3) bg_vkb2_func_pane_cp10

0x11f8,	// (0x0003f6ca) bg_vkb2_func_pane_cp08

0x8368,	// (0x0004683a) bg_vkb2_func_pane_cp06

0x8376,	// (0x00046848) bg_vkb2_func_pane_cp07

0xdbd0,	// (0x0004c0a2) bg_vkb2_func_pane_cp11_ParamLimits

0xdbd0,	// (0x0004c0a2) bg_vkb2_func_pane_cp11

0xdbe5,	// (0x0004c0b7) bg_vkb2_func_pane_cp12_ParamLimits

0xdbe5,	// (0x0004c0b7) bg_vkb2_func_pane_cp12

0xa148,	// (0x0004861a) bg_vkb2_func_pane_cp09

0xd6cc,	// (0x0004bb9e) bg_vkb2_func_pane_g1

0xad15,	// (0x000491e7) bg_vkb2_func_pane_g2

0xd6d4,	// (0x0004bba6) bg_vkb2_func_pane_g3

0xd6dc,	// (0x0004bbae) bg_vkb2_func_pane_g4

0xd911,	// (0x0004bde3) bg_vkb2_func_pane_g5

0xd6f4,	// (0x0004bbc6) bg_vkb2_func_pane_g6

0xd6fc,	// (0x0004bbce) bg_vkb2_func_pane_g7

0xd6ec,	// (0x0004bbbe) bg_vkb2_func_pane_g8

0xacf5,	// (0x000491c7) bg_vkb2_func_pane_g9

0x0008,

0xfb25,	// (0x0004dff7) bg_vkb2_func_pane_g

0x8675,	// (0x00046b47) blid2_tripm_pane_g6_ParamLimits

0x8675,	// (0x00046b47) blid2_tripm_pane_g6

0xd526,	// (0x0004b9f8) mp4_progress_pane_g1

0x86cd,	// (0x00046b9f) blid2_tripm_values_pane_ParamLimits

0x86cd,	// (0x00046b9f) blid2_tripm_values_pane

0x878e,	// (0x00046c60) blid2_tripm_values_pane_t1

0x879c,	// (0x00046c6e) blid2_tripm_values_pane_t2

0x87aa,	// (0x00046c7c) blid2_tripm_values_pane_t3

0x87b8,	// (0x00046c8a) blid2_tripm_values_pane_t4

0x87c6,	// (0x00046c98) blid2_tripm_values_pane_t5

0x87d4,	// (0x00046ca6) blid2_tripm_values_pane_t6

0x87e2,	// (0x00046cb4) blid2_tripm_values_pane_t7

0x87f0,	// (0x00046cc2) blid2_tripm_values_pane_t8

0x87fe,	// (0x00046cd0) blid2_tripm_values_pane_t9

0x0008,

0xfb38,	// (0x0004e00a) blid2_tripm_values_pane_t

0x32fe,	// (0x000417d0) call_video_pane_t1_ParamLimits

0x331b,	// (0x000417ed) call_video_pane_t2_ParamLimits

0xf26e,	// (0x0004d740) call_video_pane_t_ParamLimits

0x0d90,	// (0x0003f262) msg_header_pane_g1_ParamLimits

0xb565,	// (0x00049a37) msg_header_pane_g2_ParamLimits

0xb565,	// (0x00049a37) msg_header_pane_g2

0x0001,

0xf488,	// (0x0004d95a) msg_header_pane_g_ParamLimits

0xf488,	// (0x0004d95a) msg_header_pane_g

0xa8d4,	// (0x00048da6) main_clock2_pane_ParamLimits

0x687b,	// (0x00044d4d) grid_clock2_toolbar_pane_ParamLimits

0x687b,	// (0x00044d4d) grid_clock2_toolbar_pane

0x687b,	// (0x00044d4d) listscroll_clock2_pane_ParamLimits

0x687b,	// (0x00044d4d) listscroll_clock2_pane

0x6923,	// (0x00044df5) main_clock2_pane_t3_ParamLimits

0x6923,	// (0x00044df5) main_clock2_pane_t3

0x6935,	// (0x00044e07) main_clock2_pane_t4_ParamLimits

0x6935,	// (0x00044e07) main_clock2_pane_t4

0xdcd6,	// (0x0004c1a8) cell_clock2_toolbar_pane

0xdcde,	// (0x0004c1b0) cell_clock2_toolbar_pane_cp01

0xdcde,	// (0x0004c1b0) cell_clock2_toolbar_pane_cp02

0xdce6,	// (0x0004c1b8) cell_clock2_toolbar_pane_cp03

0xdcee,	// (0x0004c1c0) list_clock2_pane

0xb2a8,	// (0x0004977a) scroll_pane_cp10

0xdcf6,	// (0x0004c1c8) list_single_clock2_pane_ParamLimits

0xdcf6,	// (0x0004c1c8) list_single_clock2_pane

0xaab8,	// (0x00048f8a) list_highlight_pane_cp08

0xdd03,	// (0x0004c1d5) list_single_clock2_pane_t1

0xdd11,	// (0x0004c1e3) list_single_clock2_pane_t2

0x0001,

0xfb4b,	// (0x0004e01d) list_single_clock2_pane_t

0xa148,	// (0x0004861a) bg_button_pane_cp10

0xdd1f,	// (0x0004c1f1) cell_clock2_toolbar_pane_g1

0x4e18,	// (0x000432ea) aid_main_viewer_pane_g1_ParamLimits

0x4e18,	// (0x000432ea) aid_main_viewer_pane_g1

0x4e24,	// (0x000432f6) aid_main_viewer_pane_g2_ParamLimits

0x4e24,	// (0x000432f6) aid_main_viewer_pane_g2

0x4e30,	// (0x00043302) aid_main_viewer_pane_g3_ParamLimits

0x4e30,	// (0x00043302) aid_main_viewer_pane_g3

0x4e41,	// (0x00043313) aid_main_viewer_pane_g4_ParamLimits

0x4e41,	// (0x00043313) aid_main_viewer_pane_g4

0x0003,

0xf499,	// (0x0004d96b) aid_main_viewer_pane_g_ParamLimits

0xf499,	// (0x0004d96b) aid_main_viewer_pane_g

0x55cb,	// (0x00043a9d) main_calc_pane_ParamLimits

0x55d8,	// (0x00043aaa) main_dialer2_pane_ParamLimits

0xa148,	// (0x0004861a) main_cam6_pane

0xa148,	// (0x0004861a) main_vid6_pane

0x6887,	// (0x00044d59) listscroll_gen_pane_cp06_ParamLimits

0x6887,	// (0x00044d59) listscroll_gen_pane_cp06

0x6947,	// (0x00044e19) main_clock2_pane_t5_ParamLimits

0x6947,	// (0x00044e19) main_clock2_pane_t5

0x6996,	// (0x00044e68) aid_call2_pane_cp10_ParamLimits

0x69a8,	// (0x00044e7a) aid_call_pane_cp10_ParamLimits

0xb325,	// (0x000497f7) popup_clock_analogue_window_cp10_g1_ParamLimits

0xb325,	// (0x000497f7) popup_clock_analogue_window_cp10_g2_ParamLimits

0x69ba,	// (0x00044e8c) popup_clock_analogue_window_cp10_g3_ParamLimits

0x69ba,	// (0x00044e8c) popup_clock_analogue_window_cp10_g4_ParamLimits

0xb325,	// (0x000497f7) popup_clock_analogue_window_cp10_g5_ParamLimits

0xf7d4,	// (0x0004dca6) popup_clock_analogue_window_cp10_g_ParamLimits

0x69cc,	// (0x00044e9e) popup_clock_analogue_window_cp10_t1_ParamLimits

0x719f,	// (0x00045671) cell_dialer2_keypad_pane_g2_ParamLimits

0x719f,	// (0x00045671) cell_dialer2_keypad_pane_g2

0x0001,

0xf8ba,	// (0x0004dd8c) cell_dialer2_keypad_pane_g_ParamLimits

0xf8ba,	// (0x0004dd8c) cell_dialer2_keypad_pane_g

0x71bb,	// (0x0004568d) cell_dialer2_keypad_pane_t1

0x7bd8,	// (0x000460aa) main_cset_text2_pane_ParamLimits

0x7bd8,	// (0x000460aa) main_cset_text2_pane

0xdb38,	// (0x0004c00a) area_vitu2_query_pane_g1_ParamLimits

0x1123,	// (0x0003f5f5) area_vitu2_query_pane_g2_ParamLimits

0xfa6f,	// (0x0004df41) area_vitu2_query_pane_g_ParamLimits

0x11d4,	// (0x0003f6a6) area_vitu2_query_pane_t7_ParamLimits

0x11d4,	// (0x0003f6a6) area_vitu2_query_pane_t7

0x8368,	// (0x0004683a) bg_button_pane_cp018_ParamLimits

0x8376,	// (0x00046848) bg_button_pane_cp021_ParamLimits

0x11f8,	// (0x0003f6ca) bg_button_pane_cp022_ParamLimits

0x11f8,	// (0x0003f6ca) bg_vkb2_func_pane_cp08_ParamLimits

0x8368,	// (0x0004683a) bg_vkb2_func_pane_cp06_ParamLimits

0x8376,	// (0x00046848) bg_vkb2_func_pane_cp07_ParamLimits

0x1209,	// (0x0003f6db) input_focus_pane_cp09_ParamLimits

0x880c,	// (0x00046cde) cam6_autofocus_pane_ParamLimits

0x880c,	// (0x00046cde) cam6_autofocus_pane

0x882e,	// (0x00046d00) cam6_image_uncrop_pane_ParamLimits

0x882e,	// (0x00046d00) cam6_image_uncrop_pane

0x885b,	// (0x00046d2d) cam6_indi_pane_ParamLimits

0x885b,	// (0x00046d2d) cam6_indi_pane

0x8875,	// (0x00046d47) cam6_mode_pane_ParamLimits

0x8875,	// (0x00046d47) cam6_mode_pane

0x8889,	// (0x00046d5b) cam6_timer_pane_ParamLimits

0x8889,	// (0x00046d5b) cam6_timer_pane

0x8895,	// (0x00046d67) cam6_zoom_pane_ParamLimits

0x8895,	// (0x00046d67) cam6_zoom_pane

0x88b1,	// (0x00046d83) cam6_mode_pane_g1_ParamLimits

0x88b1,	// (0x00046d83) cam6_mode_pane_g1

0x88bd,	// (0x00046d8f) cam6_mode_pane_g2_ParamLimits

0x88bd,	// (0x00046d8f) cam6_mode_pane_g2

0x88c9,	// (0x00046d9b) cam6_mode_pane_g3_ParamLimits

0x88c9,	// (0x00046d9b) cam6_mode_pane_g3

0x88d5,	// (0x00046da7) cam6_mode_pane_g4_ParamLimits

0x88d5,	// (0x00046da7) cam6_mode_pane_g4

0x0003,

0xfb50,	// (0x0004e022) cam6_mode_pane_g_ParamLimits

0xfb50,	// (0x0004e022) cam6_mode_pane_g

0xd5a2,	// (0x0004ba74) bg_tb_trans_pane_cp08_ParamLimits

0xd5a2,	// (0x0004ba74) bg_tb_trans_pane_cp08

0xdd27,	// (0x0004c1f9) cam6_battery_pane_ParamLimits

0xdd27,	// (0x0004c1f9) cam6_battery_pane

0xdd3d,	// (0x0004c20f) cam6_indi_pane_g1_ParamLimits

0xdd3d,	// (0x0004c20f) cam6_indi_pane_g1

0xdd4f,	// (0x0004c221) cam6_indi_pane_g2_ParamLimits

0xdd4f,	// (0x0004c221) cam6_indi_pane_g2

0xdd61,	// (0x0004c233) cam6_indi_pane_g3_ParamLimits

0xdd61,	// (0x0004c233) cam6_indi_pane_g3

0x0002,

0xfb59,	// (0x0004e02b) cam6_indi_pane_g_ParamLimits

0xfb59,	// (0x0004e02b) cam6_indi_pane_g

0xdd73,	// (0x0004c245) cam6_indi_pane_t1_ParamLimits

0xdd73,	// (0x0004c245) cam6_indi_pane_t1

0x76c0,	// (0x00045b92) cam6_autofocus_pane_g1

0x76c8,	// (0x00045b9a) cam6_autofocus_pane_g2

0x76d0,	// (0x00045ba2) cam6_autofocus_pane_g3

0x76d8,	// (0x00045baa) cam6_autofocus_pane_g4

0x0003,

0xfb60,	// (0x0004e032) cam6_autofocus_pane_g

0xdd99,	// (0x0004c26b) cam6_timer_pane_g1

0xdda1,	// (0x0004c273) cam6_timer_pane_t1

0xddaf,	// (0x0004c281) cam6_zoom_cont_pane

0xddb7,	// (0x0004c289) cam6_zoom_pane_g1

0xddbf,	// (0x0004c291) cam6_zoom_pane_g2

0x88e1,	// (0x00046db3) cam6_zoom_pane_g3

0x0002,

0xfb69,	// (0x0004e03b) cam6_zoom_pane_g

0xcc6e,	// (0x0004b140) cam6_battery_pane_g1

0xcc6e,	// (0x0004b140) cam6_battery_pane_g2

0x0001,

0xf6dc,	// (0x0004dbae) cam6_battery_pane_g

0xddc7,	// (0x0004c299) cam6_zoom_cont_pane_g1

0xddd0,	// (0x0004c2a2) cam6_zoom_cont_pane_g2

0xddd9,	// (0x0004c2ab) cam6_zoom_cont_pane_g3

0x0002,

0xfb70,	// (0x0004e042) cam6_zoom_cont_pane_g

0x88fe,	// (0x00046dd0) cam6_mode_pane_cp_ParamLimits

0x88fe,	// (0x00046dd0) cam6_mode_pane_cp

0x8895,	// (0x00046d67) cam6_zoom_pane_cp_ParamLimits

0x8895,	// (0x00046d67) cam6_zoom_pane_cp

0x8912,	// (0x00046de4) vid6_image_uncrop_cif_pane_ParamLimits

0x8912,	// (0x00046de4) vid6_image_uncrop_cif_pane

0x893e,	// (0x00046e10) vid6_image_uncrop_nhd_pane_ParamLimits

0x893e,	// (0x00046e10) vid6_image_uncrop_nhd_pane

0x882e,	// (0x00046d00) vid6_image_uncrop_vga_pane_ParamLimits

0x882e,	// (0x00046d00) vid6_image_uncrop_vga_pane

0x895d,	// (0x00046e2f) vid6_image_uncrop_wvga_pane_ParamLimits

0x895d,	// (0x00046e2f) vid6_image_uncrop_wvga_pane

0x897c,	// (0x00046e4e) vid6_indi_pane_ParamLimits

0x897c,	// (0x00046e4e) vid6_indi_pane

0xd5a2,	// (0x0004ba74) bg_tb_trans_pane_cp09_ParamLimits

0xd5a2,	// (0x0004ba74) bg_tb_trans_pane_cp09

0xddf1,	// (0x0004c2c3) cam6_battery_pane_cp_ParamLimits

0xddf1,	// (0x0004c2c3) cam6_battery_pane_cp

0xddfd,	// (0x0004c2cf) vid6_indi_pane_g1_ParamLimits

0xddfd,	// (0x0004c2cf) vid6_indi_pane_g1

0xde0f,	// (0x0004c2e1) vid6_indi_pane_g2_ParamLimits

0xde0f,	// (0x0004c2e1) vid6_indi_pane_g2

0xde21,	// (0x0004c2f3) vid6_indi_pane_g3_ParamLimits

0xde21,	// (0x0004c2f3) vid6_indi_pane_g3

0xde38,	// (0x0004c30a) vid6_indi_pane_g4_ParamLimits

0xde38,	// (0x0004c30a) vid6_indi_pane_g4

0xde4f,	// (0x0004c321) vid6_indi_pane_g5_ParamLimits

0xde4f,	// (0x0004c321) vid6_indi_pane_g5

0x0004,

0xfb77,	// (0x0004e049) vid6_indi_pane_g_ParamLimits

0xfb77,	// (0x0004e049) vid6_indi_pane_g

0xde69,	// (0x0004c33b) vid6_indi_pane_t1_ParamLimits

0xde69,	// (0x0004c33b) vid6_indi_pane_t1

0xde7f,	// (0x0004c351) vid6_indi_pane_t2_ParamLimits

0xde7f,	// (0x0004c351) vid6_indi_pane_t2

0xdea7,	// (0x0004c379) vid6_indi_pane_t3_ParamLimits

0xdea7,	// (0x0004c379) vid6_indi_pane_t3

0xdecf,	// (0x0004c3a1) vid6_indi_pane_t4_ParamLimits

0xdecf,	// (0x0004c3a1) vid6_indi_pane_t4

0x0003,

0xfb82,	// (0x0004e054) vid6_indi_pane_t_ParamLimits

0xfb82,	// (0x0004e054) vid6_indi_pane_t

0xdef3,	// (0x0004c3c5) wait_bar_pane_cp08

0x89a1,	// (0x00046e73) main_cset_text2_pane_t1_ParamLimits

0x89a1,	// (0x00046e73) main_cset_text2_pane_t1

0x88e9,	// (0x00046dbb) listscroll_gen_pane_cp06_t1_ParamLimits

0x88e9,	// (0x00046dbb) listscroll_gen_pane_cp06_t1

0xa148,	// (0x0004861a) main_cam6_set_pane

0xceb2,	// (0x0004b384) bg_tb_trans_pane_cp06_ParamLimits

0x756e,	// (0x00045a40) cam4_indicators_pane_g1_ParamLimits

0x757f,	// (0x00045a51) cam4_indicators_pane_g2_ParamLimits

0xf8f7,	// (0x0004ddc9) cam4_indicators_pane_g_ParamLimits

0x7597,	// (0x00045a69) cam4_indicators_pane_t1_ParamLimits

0xa9e1,	// (0x00048eb3) bg_tb_trans_pane_cp07_ParamLimits

0x764e,	// (0x00045b20) vid4_indicators_pane_g1_ParamLimits

0x7664,	// (0x00045b36) vid4_indicators_pane_g2_ParamLimits

0x7678,	// (0x00045b4a) vid4_indicators_pane_g3_ParamLimits

0x768b,	// (0x00045b5d) vid4_indicators_pane_g4_ParamLimits

0xf909,	// (0x0004dddb) vid4_indicators_pane_g_ParamLimits

0x76a9,	// (0x00045b7b) vid4_indicators_pane_t1_ParamLimits

0x849a,	// (0x0004696c) vid4_progress_pane_g1_ParamLimits

0x84ac,	// (0x0004697e) vid4_progress_pane_g2_ParamLimits

0x4e9e,	// (0x00043370) vid4_progress_pane_g3_ParamLimits

0x84be,	// (0x00046990) vid4_progress_pane_g4_ParamLimits

0xfaba,	// (0x0004df8c) vid4_progress_pane_g_ParamLimits

0x84dc,	// (0x000469ae) vid4_progress_pane_t1_ParamLimits

0x84f1,	// (0x000469c3) vid4_progress_pane_t2_ParamLimits

0x8507,	// (0x000469d9) vid4_progress_pane_t3_ParamLimits

0xfac5,	// (0x0004df97) vid4_progress_pane_t_ParamLimits

0x851c,	// (0x000469ee) wait_bar_pane_cp07_ParamLimits

0x89c8,	// (0x00046e9a) main_cam6_set_pane_g2_ParamLimits

0x89c8,	// (0x00046e9a) main_cam6_set_pane_g2

0x89d4,	// (0x00046ea6) main_cset6_listscroll_pane_ParamLimits

0x89d4,	// (0x00046ea6) main_cset6_listscroll_pane

0x8a01,	// (0x00046ed3) main_cset6_slider_pane_ParamLimits

0x8a01,	// (0x00046ed3) main_cset6_slider_pane

0x8a0d,	// (0x00046edf) main_cset6_text2_pane_ParamLimits

0x8a0d,	// (0x00046edf) main_cset6_text2_pane

0xdf02,	// (0x0004c3d4) main_cset6_text_pane

0xdf0a,	// (0x0004c3dc) main_cset_list_pane_copy1_ParamLimits

0xdf0a,	// (0x0004c3dc) main_cset_list_pane_copy1

0xdf1a,	// (0x0004c3ec) scroll_pane_cp028_copy1

0x8a20,	// (0x00046ef2) cset_list_set_pane_copy1

0x8a30,	// (0x00046f02) aid_position_infowindow_above_copy1

0x8a38,	// (0x00046f0a) aid_position_infowindow_below_copy1

0x126b,	// (0x0003f73d) cset_list_set_pane_g1_copy1

0x1273,	// (0x0003f745) cset_list_set_pane_g3_copy1_ParamLimits

0x1273,	// (0x0003f745) cset_list_set_pane_g3_copy1

0x1282,	// (0x0003f754) cset_list_set_pane_t1_copy1_ParamLimits

0x1282,	// (0x0003f754) cset_list_set_pane_t1_copy1

0xa9e1,	// (0x00048eb3) list_highlight_pane_cp021_copy1_ParamLimits

0xa9e1,	// (0x00048eb3) list_highlight_pane_cp021_copy1

0xdf23,	// (0x0004c3f5) cset6_slider_pane_ParamLimits

0xdf23,	// (0x0004c3f5) cset6_slider_pane

0xdf4f,	// (0x0004c421) main_cset6_slider_pane_g1_ParamLimits

0xdf4f,	// (0x0004c421) main_cset6_slider_pane_g1

0x8a40,	// (0x00046f12) main_cset6_slider_pane_g2_ParamLimits

0x8a40,	// (0x00046f12) main_cset6_slider_pane_g2

0xdf77,	// (0x0004c449) main_cset6_slider_pane_g3_ParamLimits

0xdf77,	// (0x0004c449) main_cset6_slider_pane_g3

0x8a68,	// (0x00046f3a) main_cset6_slider_pane_g4_ParamLimits

0x8a68,	// (0x00046f3a) main_cset6_slider_pane_g4

0x8a74,	// (0x00046f46) main_cset6_slider_pane_g5_ParamLimits

0x8a74,	// (0x00046f46) main_cset6_slider_pane_g5

0xd7ff,	// (0x0004bcd1) main_cset6_slider_pane_g7_ParamLimits

0xd7ff,	// (0x0004bcd1) main_cset6_slider_pane_g7

0xd80b,	// (0x0004bcdd) main_cset6_slider_pane_g8_ParamLimits

0xd80b,	// (0x0004bcdd) main_cset6_slider_pane_g8

0x8a80,	// (0x00046f52) main_cset6_slider_pane_g9_ParamLimits

0x8a80,	// (0x00046f52) main_cset6_slider_pane_g9

0x8a8c,	// (0x00046f5e) main_cset6_slider_pane_g10_ParamLimits

0x8a8c,	// (0x00046f5e) main_cset6_slider_pane_g10

0x8a98,	// (0x00046f6a) main_cset6_slider_pane_g11_ParamLimits

0x8a98,	// (0x00046f6a) main_cset6_slider_pane_g11

0x8aa4,	// (0x00046f76) main_cset6_slider_pane_g12_ParamLimits

0x8aa4,	// (0x00046f76) main_cset6_slider_pane_g12

0x8ab0,	// (0x00046f82) main_cset6_slider_pane_g13_ParamLimits

0x8ab0,	// (0x00046f82) main_cset6_slider_pane_g13

0x8abc,	// (0x00046f8e) main_cset6_slider_pane_g14_ParamLimits

0x8abc,	// (0x00046f8e) main_cset6_slider_pane_g14

0x8ac8,	// (0x00046f9a) main_cset6_slider_pane_g15_ParamLimits

0x8ac8,	// (0x00046f9a) main_cset6_slider_pane_g15

0x8ae0,	// (0x00046fb2) main_cset6_slider_pane_g16_ParamLimits

0x8ae0,	// (0x00046fb2) main_cset6_slider_pane_g16

0x8aec,	// (0x00046fbe) main_cset6_slider_pane_g17_ParamLimits

0x8aec,	// (0x00046fbe) main_cset6_slider_pane_g17

0x0011,

0xfb8b,	// (0x0004e05d) main_cset6_slider_pane_g_ParamLimits

0xfb8b,	// (0x0004e05d) main_cset6_slider_pane_g

0xdf83,	// (0x0004c455) main_cset6_slider_pane_t1_ParamLimits

0xdf83,	// (0x0004c455) main_cset6_slider_pane_t1

0x8b10,	// (0x00046fe2) main_cset6_slider_pane_t2_ParamLimits

0x8b10,	// (0x00046fe2) main_cset6_slider_pane_t2

0x8b3b,	// (0x0004700d) main_cset6_slider_pane_t3_ParamLimits

0x8b3b,	// (0x0004700d) main_cset6_slider_pane_t3

0x8b66,	// (0x00047038) main_cset6_slider_pane_t4_ParamLimits

0x8b66,	// (0x00047038) main_cset6_slider_pane_t4

0x8b91,	// (0x00047063) main_cset6_slider_pane_t5_ParamLimits

0x8b91,	// (0x00047063) main_cset6_slider_pane_t5

0xdfc4,	// (0x0004c496) main_cset6_slider_pane_t7_ParamLimits

0xdfc4,	// (0x0004c496) main_cset6_slider_pane_t7

0x8bbc,	// (0x0004708e) main_cset6_slider_pane_t8_ParamLimits

0x8bbc,	// (0x0004708e) main_cset6_slider_pane_t8

0x8be0,	// (0x000470b2) main_cset6_slider_pane_t9_ParamLimits

0x8be0,	// (0x000470b2) main_cset6_slider_pane_t9

0x8c04,	// (0x000470d6) main_cset6_slider_pane_t10_ParamLimits

0x8c04,	// (0x000470d6) main_cset6_slider_pane_t10

0x8c28,	// (0x000470fa) main_cset6_slider_pane_t11_ParamLimits

0x8c28,	// (0x000470fa) main_cset6_slider_pane_t11

0xdffa,	// (0x0004c4cc) main_cset6_slider_pane_t14_ParamLimits

0xdffa,	// (0x0004c4cc) main_cset6_slider_pane_t14

0xe033,	// (0x0004c505) main_cset6_slider_pane_t15_ParamLimits

0xe033,	// (0x0004c505) main_cset6_slider_pane_t15

0x000b,

0xfbb0,	// (0x0004e082) main_cset6_slider_pane_t_ParamLimits

0xfbb0,	// (0x0004e082) main_cset6_slider_pane_t

0xd8c3,	// (0x0004bd95) cset_slider_pane_g1_copy1

0xd8cc,	// (0x0004bd9e) cset_slider_pane_g2_copy1

0xd8d5,	// (0x0004bda7) cset_slider_pane_g3_copy1

0xa148,	// (0x0004861a) bg_popup_sub_pane_cp011_copy1

0xe06c,	// (0x0004c53e) main_cset_text_pane_g1_copy1

0xd960,	// (0x0004be32) main_cset_text_pane_t1_copy1

0xd96e,	// (0x0004be40) main_cset_text_pane_t2_copy1

0xd97c,	// (0x0004be4e) main_cset_text_pane_t3_copy1

0xd98a,	// (0x0004be5c) main_cset_text_pane_t4_copy1

0xd998,	// (0x0004be6a) main_cset_text_pane_t5_copy1

0xe074,	// (0x0004c546) main_cset_text_pane_t6_copy1

0xe082,	// (0x0004c554) main_cset_text_pane_t7_copy1

0x8c4c,	// (0x0004711e) main_cset_text2_pane_t1_copy1

0xa9e1,	// (0x00048eb3) main_ncimui_pane

0x561d,	// (0x00043aef) popup_query_ncimui_window_ParamLimits

0x561d,	// (0x00043aef) popup_query_ncimui_window

0x0e41,	// (0x0003f313) field_cale_ev2_pane_g4_ParamLimits

0x0e41,	// (0x0003f313) field_cale_ev2_pane_g4

0x6eb5,	// (0x00045387) cell_video_dialer_keypad_pane_g2_ParamLimits

0x6eb5,	// (0x00045387) cell_video_dialer_keypad_pane_g2

0x0001,

0xf895,	// (0x0004dd67) cell_video_dialer_keypad_pane_g_ParamLimits

0xf895,	// (0x0004dd67) cell_video_dialer_keypad_pane_g

0x6ecd,	// (0x0004539f) cell_video_dialer_keypad_pane_t1

0xa148,	// (0x0004861a) bg_popup_window_pane_cp012

0xb194,	// (0x00049666) heading_pane_cp06

0xe0ae,	// (0x0004c580) ncim_query_content_pane

0xa148,	// (0x0004861a) bg_popup_heading_pane_cp01

0xe0b6,	// (0x0004c588) ncim_heading_pane_t1

0xe0c4,	// (0x0004c596) ncim_indicator_popup_pane

0xe0d6,	// (0x0004c5a8) ncim_query_button_pane

0xe0ec,	// (0x0004c5be) ncim_query_content_pane_t1

0xe0fe,	// (0x0004c5d0) ncim_query_content_pane_t2

0x0005,

0xfbf4,	// (0x0004e0c6) ncim_query_content_pane_t

0xe138,	// (0x0004c60a) ncim_query_list_pane

0xe14a,	// (0x0004c61c) ncim_query_popup_pane

0xe0c4,	// (0x0004c596) ncim_indicator_popup_pane_ParamLimits

0x8da8,	// (0x0004727a) ncim_query_content_pane_g1_ParamLimits

0x8da8,	// (0x0004727a) ncim_query_content_pane_g1

0xe0ec,	// (0x0004c5be) ncim_query_content_pane_t1_ParamLimits

0xe0fe,	// (0x0004c5d0) ncim_query_content_pane_t2_ParamLimits

0x8db4,	// (0x00047286) ncim_query_content_pane_t3_ParamLimits

0x8db4,	// (0x00047286) ncim_query_content_pane_t3

0x8dd1,	// (0x000472a3) ncim_query_content_pane_t4_ParamLimits

0x8dd1,	// (0x000472a3) ncim_query_content_pane_t4

0x8dee,	// (0x000472c0) ncim_query_content_pane_t5_ParamLimits

0x8dee,	// (0x000472c0) ncim_query_content_pane_t5

0xe110,	// (0x0004c5e2) ncim_query_content_pane_t6_ParamLimits

0xe110,	// (0x0004c5e2) ncim_query_content_pane_t6

0xfbf4,	// (0x0004e0c6) ncim_query_content_pane_t_ParamLimits

0xe138,	// (0x0004c60a) ncim_query_list_pane_ParamLimits

0xe14a,	// (0x0004c61c) ncim_query_popup_pane_ParamLimits

0xe15e,	// (0x0004c630) wait_bar_pane_cp04

0xa148,	// (0x0004861a) input_focus_pane_cp011

0xe166,	// (0x0004c638) ncim_query_popup_pane_t1

0xe174,	// (0x0004c646) ncim_list_query_list_pane_ParamLimits

0xe174,	// (0x0004c646) ncim_list_query_list_pane

0xa148,	// (0x0004861a) bg_button_pane_cp027

0xe187,	// (0x0004c659) ncim_query_button_pane_g1

0xa148,	// (0x0004861a) list_highlight_pane_cp012

0xe191,	// (0x0004c663) ncim_list_query_list_pane_g1

0xe199,	// (0x0004c66b) ncim_list_query_list_pane_t1

0x758b,	// (0x00045a5d) cam4_indicators_pane_g3_ParamLimits

0x758b,	// (0x00045a5d) cam4_indicators_pane_g3

0x7697,	// (0x00045b69) vid4_indicators_pane_g5_ParamLimits

0x7697,	// (0x00045b69) vid4_indicators_pane_g5

0x84cd,	// (0x0004699f) vid4_progress_pane_g5_ParamLimits

0x84cd,	// (0x0004699f) vid4_progress_pane_g5

0x8c7e,	// (0x00047150) main_ncimui_pane_g1

0x8cea,	// (0x000471bc) ncimui_group_query_pane_ParamLimits

0x8cea,	// (0x000471bc) ncimui_group_query_pane

0x8d44,	// (0x00047216) ncimui_list_pane_ParamLimits

0x8d44,	// (0x00047216) ncimui_list_pane

0x8d6b,	// (0x0004723d) ncimui_text_pane_ParamLimits

0x8d6b,	// (0x0004723d) ncimui_text_pane

0x8e0b,	// (0x000472dd) ncimui_text_pane_t1_ParamLimits

0x8e0b,	// (0x000472dd) ncimui_text_pane_t1

0xe1a7,	// (0x0004c679) ncimui_list_single_graphic_pane_ParamLimits

0xe1a7,	// (0x0004c679) ncimui_list_single_graphic_pane

0x8e2a,	// (0x000472fc) ncimui_query_pane_ParamLimits

0x8e2a,	// (0x000472fc) ncimui_query_pane

0xa148,	// (0x0004861a) list_highlight_pane_cp013

0xe1b7,	// (0x0004c689) ncim_list_query_list_pane_t1_copy1

0xe191,	// (0x0004c663) ncim_list_single_graphic_pane_g1

0xe1c5,	// (0x0004c697) ncim_query_button_pane_cp01

0xe1d1,	// (0x0004c6a3) ncim_query_entry_pane_ParamLimits

0xe1d1,	// (0x0004c6a3) ncim_query_entry_pane

0xe1e4,	// (0x0004c6b6) ncimui_query_pane_g1

0xe1f0,	// (0x0004c6c2) ncimui_query_pane_t1_ParamLimits

0xe1f0,	// (0x0004c6c2) ncimui_query_pane_t1

0xa9e1,	// (0x00048eb3) input_focus_pane_cp012

0xe209,	// (0x0004c6db) ncim_query_entry_pane_t1

0xa8d4,	// (0x00048da6) main_im_pane_ParamLimits

0xa9e1,	// (0x00048eb3) main_mobtv_pane_ParamLimits

0xa9e1,	// (0x00048eb3) main_mobtv_pane

0x8af8,	// (0x00046fca) main_cset6_slider_pane_g18_ParamLimits

0x8af8,	// (0x00046fca) main_cset6_slider_pane_g18

0x8b04,	// (0x00046fd6) main_cset6_slider_pane_g19_ParamLimits

0x8b04,	// (0x00046fd6) main_cset6_slider_pane_g19

0xd6ac,	// (0x0004bb7e) bg_main_mobtv_pane_ParamLimits

0xd6ac,	// (0x0004bb7e) bg_main_mobtv_pane

0x8e3d,	// (0x0004730f) main_mobtv_info_pane

0x8e48,	// (0x0004731a) main_mobtv_loading_pane_ParamLimits

0x8e48,	// (0x0004731a) main_mobtv_loading_pane

0xe21b,	// (0x0004c6ed) main_mobtv_pg_channel_list_pane

0xe225,	// (0x0004c6f7) main_mobtv_pg_hdr_pane

0x8e55,	// (0x00047327) main_mobtv_programe_curr_pane_ParamLimits

0x8e55,	// (0x00047327) main_mobtv_programe_curr_pane

0x8e62,	// (0x00047334) main_mobtv_programe_next_pane_ParamLimits

0x8e62,	// (0x00047334) main_mobtv_programe_next_pane

0xe22e,	// (0x0004c700) popup_mobtv_noti_window

0xcc6e,	// (0x0004b140) main_tv_pg_hdr_pane_g1

0xe238,	// (0x0004c70a) main_tv_pg_hdr_pane_g2

0xe240,	// (0x0004c712) main_tv_pg_hdr_pane_g3

0xe248,	// (0x0004c71a) main_tv_pg_hdr_pane_g4

0xe250,	// (0x0004c722) main_tv_pg_hdr_pane_g5

0xe25a,	// (0x0004c72c) main_tv_pg_hdr_pane_g6

0xe264,	// (0x0004c736) main_tv_pg_hdr_pane_g7

0xe26e,	// (0x0004c740) main_tv_pg_hdr_pane_g8

0xe278,	// (0x0004c74a) main_tv_pg_hdr_pane_g9

0xe282,	// (0x0004c754) main_tv_pg_hdr_pane_g10

0xe28c,	// (0x0004c75e) main_tv_pg_hdr_pane_g11

0x000a,

0xfc01,	// (0x0004e0d3) main_tv_pg_hdr_pane_g

0xe296,	// (0x0004c768) main_tv_pg_hdr_pane_t1

0xe2a4,	// (0x0004c776) main_tv_pg_hdr_pane_t2

0xe2b2,	// (0x0004c784) main_tv_pg_hdr_pane_t3

0xe2c2,	// (0x0004c794) main_tv_pg_hdr_pane_t4

0xe2d2,	// (0x0004c7a4) main_tv_pg_hdr_pane_t5

0x0004,

0xfc18,	// (0x0004e0ea) main_tv_pg_hdr_pane_t

0xe2e2,	// (0x0004c7b4) single_mobtv_pg_channel_pane_ParamLimits

0xe2e2,	// (0x0004c7b4) single_mobtv_pg_channel_pane

0xe2f4,	// (0x0004c7c6) single_mobtv_pg_channel_table_pane

0xe2fd,	// (0x0004c7cf) single_mobtv_pg_channel_thumb_pane

0xe306,	// (0x0004c7d8) single_tv_pg_channel_pane_g1

0xe30f,	// (0x0004c7e1) single_tv_pg_channel_pane_g2

0x0001,

0xfc23,	// (0x0004e0f5) single_tv_pg_channel_pane_g

0xceb2,	// (0x0004b384) bg_single_mobtv_pg_channel_thumb_pane_ParamLimits

0xceb2,	// (0x0004b384) bg_single_mobtv_pg_channel_thumb_pane

0xe318,	// (0x0004c7ea) single_mobtv_pg_channel_thumb_pane_g1_ParamLimits

0xe318,	// (0x0004c7ea) single_mobtv_pg_channel_thumb_pane_g1

0xe326,	// (0x0004c7f8) single_mobtv_pg_channel_thumb_pane_g2_ParamLimits

0xe326,	// (0x0004c7f8) single_mobtv_pg_channel_thumb_pane_g2

0xe332,	// (0x0004c804) single_mobtv_pg_channel_thumb_pane_g3_ParamLimits

0xe332,	// (0x0004c804) single_mobtv_pg_channel_thumb_pane_g3

0x0002,

0xfc28,	// (0x0004e0fa) single_mobtv_pg_channel_thumb_pane_g_ParamLimits

0xfc28,	// (0x0004e0fa) single_mobtv_pg_channel_thumb_pane_g

0xe33e,	// (0x0004c810) single_mobtv_pg_channel_thumb_pane_t1

0xe34c,	// (0x0004c81e) single_mobtv_pg_channel_thumb_pane_t2

0x0001,

0xfc2f,	// (0x0004e101) single_mobtv_pg_channel_thumb_pane_t

0xcc6e,	// (0x0004b140) bg_single_mobtv_pg_channel_table_pane_g1

0xcc6e,	// (0x0004b140) bg_single_mobtv_pg_channel_table_pane_g2

0x0001,

0xf6dc,	// (0x0004dbae) bg_single_mobtv_pg_channel_table_pane_g

0xe35a,	// (0x0004c82c) single_mobtv_pg_channel_table_pane_t1

0xe368,	// (0x0004c83a) single_mobtv_pg_channel_table_pane_t2

0x0001,

0xfc34,	// (0x0004e106) single_mobtv_pg_channel_table_pane_t

0x8e77,	// (0x00047349) main_mobtv_info_pane_g1_ParamLimits

0x8e77,	// (0x00047349) main_mobtv_info_pane_g1

0x8e93,	// (0x00047365) main_mobtv_info_pane_t1_ParamLimits

0x8e93,	// (0x00047365) main_mobtv_info_pane_t1

0x8f0b,	// (0x000473dd) main_mobtv_info_pane_t2_ParamLimits

0x8f0b,	// (0x000473dd) main_mobtv_info_pane_t2

0x0002,

0xfc3e,	// (0x0004e110) main_mobtv_info_pane_t_ParamLimits

0xfc3e,	// (0x0004e110) main_mobtv_info_pane_t

0x8f9c,	// (0x0004746e) wait_bar_pane_cp05

0x8fae,	// (0x00047480) main_mobtv_loading_pane_g1_ParamLimits

0x8fae,	// (0x00047480) main_mobtv_loading_pane_g1

0x8fba,	// (0x0004748c) main_mobtv_loading_pane_g2_ParamLimits

0x8fba,	// (0x0004748c) main_mobtv_loading_pane_g2

0x8fc6,	// (0x00047498) main_mobtv_loading_pane_g3_ParamLimits

0x8fc6,	// (0x00047498) main_mobtv_loading_pane_g3

0x0002,

0xfc45,	// (0x0004e117) main_mobtv_loading_pane_g_ParamLimits

0xfc45,	// (0x0004e117) main_mobtv_loading_pane_g

0xe376,	// (0x0004c848) main_mobtv_loading_pane_t1_ParamLimits

0xe376,	// (0x0004c848) main_mobtv_loading_pane_t1

0xe38e,	// (0x0004c860) main_mobtv_loading_pane_t2_ParamLimits

0xe38e,	// (0x0004c860) main_mobtv_loading_pane_t2

0x0001,

0xfc4c,	// (0x0004e11e) main_mobtv_loading_pane_t_ParamLimits

0xfc4c,	// (0x0004e11e) main_mobtv_loading_pane_t

0x8fd4,	// (0x000474a6) wait_bar_pane_cp06_ParamLimits

0x8fd4,	// (0x000474a6) wait_bar_pane_cp06

0xe3b2,	// (0x0004c884) main_mobtv_programe_curr_pane_t1

0xe3c0,	// (0x0004c892) main_mobtv_programe_curr_pane_t2

0x0001,

0xfc51,	// (0x0004e123) main_mobtv_programe_curr_pane_t

0xe3ce,	// (0x0004c8a0) main_mobtv_programe_next_pane_t1

0xe3dc,	// (0x0004c8ae) main_mobtv_programe_next_pane_t2

0xe3ea,	// (0x0004c8bc) main_mobtv_programe_next_pane_t3

0x0002,

0xfc56,	// (0x0004e128) main_mobtv_programe_next_pane_t

0xa148,	// (0x0004861a) bg_popup_mobtv_noti_window_pane

0xe3f8,	// (0x0004c8ca) popup_mobtv_noti_window_g1

0xe400,	// (0x0004c8d2) popup_mobtv_noti_window_t1

0xe40e,	// (0x0004c8e0) popup_mobtv_noti_window_t2

0x0001,

0xfc5d,	// (0x0004e12f) popup_mobtv_noti_window_t

0xcc6e,	// (0x0004b140) bg_popup_mobtv_noti_window_pane_g1

0xa148,	// (0x0004861a) sc_clock_pane

0xa148,	// (0x0004861a) main_fs_bigclock_pane

0x86bb,	// (0x00046b8d) blid2_tripm_pane_t4_ParamLimits

0x86bb,	// (0x00046b8d) blid2_tripm_pane_t4

0x8fe0,	// (0x000474b2) sc_clock_pane_g1_ParamLimits

0x8fe0,	// (0x000474b2) sc_clock_pane_g1

0x8fee,	// (0x000474c0) sc_clock_pane_t1_ParamLimits

0x8fee,	// (0x000474c0) sc_clock_pane_t1

0x9003,	// (0x000474d5) sc_clock_pane_t2_ParamLimits

0x9003,	// (0x000474d5) sc_clock_pane_t2

0x9015,	// (0x000474e7) sc_clock_pane_t3_ParamLimits

0x9015,	// (0x000474e7) sc_clock_pane_t3

0x0004,

0xfc62,	// (0x0004e134) sc_clock_pane_t_ParamLimits

0xfc62,	// (0x0004e134) sc_clock_pane_t

0x9870,	// (0x00047d42) main_fs_bigclock_indicator_pane_ParamLimits

0x9870,	// (0x00047d42) main_fs_bigclock_indicator_pane

0x90a8,	// (0x0004757a) main_fs_bigclock_pane_g1_ParamLimits

0x90a8,	// (0x0004757a) main_fs_bigclock_pane_g1

0x987c,	// (0x00047d4e) main_fs_bigclock_pane_t1_ParamLimits

0x987c,	// (0x00047d4e) main_fs_bigclock_pane_t1

0x988e,	// (0x00047d60) main_fs_bigclock_pane_t2_ParamLimits

0x988e,	// (0x00047d60) main_fs_bigclock_pane_t2

0x98a2,	// (0x00047d74) main_fs_bigclock_pane_t3_ParamLimits

0x98a2,	// (0x00047d74) main_fs_bigclock_pane_t3

0x0002,

0xfe6c,	// (0x0004e33e) main_fs_bigclock_pane_t_ParamLimits

0xfe6c,	// (0x0004e33e) main_fs_bigclock_pane_t

0xec4b,	// (0x0004d11d) main_fs_bigclock_indicator_pane_g1

0xe0de,	// (0x0004c5b0) ncim_query_content_pane_g2_ParamLimits

0xe0de,	// (0x0004c5b0) ncim_query_content_pane_g2

0x0001,

0xfbef,	// (0x0004e0c1) ncim_query_content_pane_g_ParamLimits

0xfbef,	// (0x0004e0c1) ncim_query_content_pane_g

0x9027,	// (0x000474f9) sc_clock_pane_t4_ParamLimits

0x9027,	// (0x000474f9) sc_clock_pane_t4

0xa9e1,	// (0x00048eb3) main_radioblah_pane

0xd619,	// (0x0004baeb) cell_call4_button_pane_t1_copy1_ParamLimits

0xd619,	// (0x0004baeb) cell_call4_button_pane_t1_copy1

0x8c9a,	// (0x0004716c) main_ncimui_pane_t1_ParamLimits

0x8c9a,	// (0x0004716c) main_ncimui_pane_t1

0x8cb4,	// (0x00047186) main_ncimui_pane_t2_ParamLimits

0x8cb4,	// (0x00047186) main_ncimui_pane_t2

0x0002,

0xfbe8,	// (0x0004e0ba) main_ncimui_pane_t_ParamLimits

0xfbe8,	// (0x0004e0ba) main_ncimui_pane_t

0xe561,	// (0x0004ca33) main_radioblah_anim_pane_ParamLimits

0xe561,	// (0x0004ca33) main_radioblah_anim_pane

0xe572,	// (0x0004ca44) main_radioblah_info_pane_ParamLimits

0xe572,	// (0x0004ca44) main_radioblah_info_pane

0xe586,	// (0x0004ca58) main_radioblah_pane_t1_ParamLimits

0xe586,	// (0x0004ca58) main_radioblah_pane_t1

0xe5a2,	// (0x0004ca74) main_radioblah_pane_t2_ParamLimits

0xe5a2,	// (0x0004ca74) main_radioblah_pane_t2

0x0003,

0xfc83,	// (0x0004e155) main_radioblah_pane_t_ParamLimits

0xfc83,	// (0x0004e155) main_radioblah_pane_t

0x90fa,	// (0x000475cc) main_radioblah_rocker_ctrl_pane_ParamLimits

0x90fa,	// (0x000475cc) main_radioblah_rocker_ctrl_pane

0xe5ea,	// (0x0004cabc) main_radioblah_info_pane_t1_ParamLimits

0xe5ea,	// (0x0004cabc) main_radioblah_info_pane_t1

0x9143,	// (0x00047615) main_radioblah_info_pane_t2_ParamLimits

0x9143,	// (0x00047615) main_radioblah_info_pane_t2

0x0003,

0xfc8c,	// (0x0004e15e) main_radioblah_info_pane_t_ParamLimits

0xfc8c,	// (0x0004e15e) main_radioblah_info_pane_t

0xcc6e,	// (0x0004b140) main_radioblah_rocker_ctrl_pane_g1

0x91f3,	// (0x000476c5) main_radioblah_rocker_ctrl_pane_g2

0x91fb,	// (0x000476cd) main_radioblah_rocker_ctrl_pane_g3

0x9203,	// (0x000476d5) main_radioblah_rocker_ctrl_pane_g4

0x920b,	// (0x000476dd) main_radioblah_rocker_ctrl_pane_g5

0x9213,	// (0x000476e5) main_radioblah_rocker_ctrl_pane_g6

0x0005,

0xfc95,	// (0x0004e167) main_radioblah_rocker_ctrl_pane_g

0x8c4c,	// (0x0004711e) main_cset_text2_pane_t1_copy1_ParamLimits

0x74b8,	// (0x0004598a) cam4_image_uncrop_qvga_pane

0x75fd,	// (0x00045acf) vid4_image_uncrop_qcif_pane

0x884d,	// (0x00046d1f) cam6_image_uncrop_qvga_pane_ParamLimits

0x884d,	// (0x00046d1f) cam6_image_uncrop_qvga_pane

0xdde1,	// (0x0004c2b3) vid6_image_uncrop_qcif_pane_ParamLimits

0xdde1,	// (0x0004c2b3) vid6_image_uncrop_qcif_pane

0xa148,	// (0x0004861a) bg_popup_preview_window_pane_cp03

0xe090,	// (0x0004c562) list_cset_text2_pane

0xe098,	// (0x0004c56a) main_cset6_text2_pane_g1

0xe0a0,	// (0x0004c572) main_cset6_text2_pane_t1

0x921b,	// (0x000476ed) list_cset_text2_pane_t1_ParamLimits

0x921b,	// (0x000476ed) list_cset_text2_pane_t1

0xa9e1,	// (0x00048eb3) main_radioblah_pane_ParamLimits

0x8f88,	// (0x0004745a) main_mobtv_info_pane_t3_ParamLimits

0x8f88,	// (0x0004745a) main_mobtv_info_pane_t3

0x90e8,	// (0x000475ba) main_radioblah_pane_g1

0x9113,	// (0x000475e5) main_radioblah_info_pane_g1

0x9198,	// (0x0004766a) main_radioblah_info_pane_t3_ParamLimits

0x9198,	// (0x0004766a) main_radioblah_info_pane_t3

0x42fa,	// (0x000427cc) highlight_cell_cale_month_pane_ParamLimits

0x42fa,	// (0x000427cc) highlight_cell_cale_month_pane

0xa148,	// (0x0004861a) main_phob_fisheye_pane

0xcf8e,	// (0x0004b460) scroll_pane_cp0031_ParamLimits

0xcf8e,	// (0x0004b460) scroll_pane_cp0031

0xdef3,	// (0x0004c3c5) wait_bar_pane_cp08_ParamLimits

0x8a20,	// (0x00046ef2) cset_list_set_pane_copy1_ParamLimits

0xe624,	// (0x0004caf6) highlight_cell_cale_month_pane_g1

0x9232,	// (0x00047704) highlight_cell_cale_month_pane_t1

0xdb8c,	// (0x0004c05e) list_gen_pane_cp01

0xd7ea,	// (0x0004bcbc) scroll_pane_01

0x1366,	// (0x0003f838) list_single_double_fisheye_pane

0x136f,	// (0x0003f841) list_double_fisheye_pane_g1_ParamLimits

0x136f,	// (0x0003f841) list_double_fisheye_pane_g1

0x137b,	// (0x0003f84d) list_double_fisheye_pane_g2_ParamLimits

0x137b,	// (0x0003f84d) list_double_fisheye_pane_g2

0x138f,	// (0x0003f861) list_double_fisheye_pane_g3_ParamLimits

0x138f,	// (0x0003f861) list_double_fisheye_pane_g3

0x0004,

0xfca2,	// (0x0004e174) list_double_fisheye_pane_g_ParamLimits

0xfca2,	// (0x0004e174) list_double_fisheye_pane_g

0x13b8,	// (0x0003f88a) list_double_fisheye_pane_t1_ParamLimits

0x13b8,	// (0x0003f88a) list_double_fisheye_pane_t1

0x13d3,	// (0x0003f8a5) list_double_fisheye_pane_t2_ParamLimits

0x13d3,	// (0x0003f8a5) list_double_fisheye_pane_t2

0x0001,

0xfcad,	// (0x0004e17f) list_double_fisheye_pane_t_ParamLimits

0xfcad,	// (0x0004e17f) list_double_fisheye_pane_t

0xa148,	// (0x0004861a) main_call5_pane

0x904d,	// (0x0004751f) sc_swipe_pane_ParamLimits

0x904d,	// (0x0004751f) sc_swipe_pane

0x924c,	// (0x0004771e) call5_image_pane_ParamLimits

0x924c,	// (0x0004771e) call5_image_pane

0x925e,	// (0x00047730) call5_swipe_1_pane_ParamLimits

0x925e,	// (0x00047730) call5_swipe_1_pane

0x926a,	// (0x0004773c) call5_swipe_2_pane_ParamLimits

0x926a,	// (0x0004773c) call5_swipe_2_pane

0x9286,	// (0x00047758) popup_call5_audio_first_window_ParamLimits

0x9286,	// (0x00047758) popup_call5_audio_first_window

0xceb2,	// (0x0004b384) call5_swipe_1_pane_g1_ParamLimits

0xceb2,	// (0x0004b384) call5_swipe_1_pane_g1

0xe62c,	// (0x0004cafe) call5_swipe_1_pane_g2_ParamLimits

0xe62c,	// (0x0004cafe) call5_swipe_1_pane_g2

0x0001,

0xfcb2,	// (0x0004e184) call5_swipe_1_pane_g_ParamLimits

0xfcb2,	// (0x0004e184) call5_swipe_1_pane_g

0xe638,	// (0x0004cb0a) call5_swipe_1_pane_t1_ParamLimits

0xe638,	// (0x0004cb0a) call5_swipe_1_pane_t1

0xceb2,	// (0x0004b384) call5_swipe_2_pane_g1_ParamLimits

0xceb2,	// (0x0004b384) call5_swipe_2_pane_g1

0xe64d,	// (0x0004cb1f) call5_swipe_2_pane_g2_ParamLimits

0xe64d,	// (0x0004cb1f) call5_swipe_2_pane_g2

0x0001,

0xfcb7,	// (0x0004e189) call5_swipe_2_pane_g_ParamLimits

0xfcb7,	// (0x0004e189) call5_swipe_2_pane_g

0xe659,	// (0x0004cb2b) call5_swipe_2_pane_t1_ParamLimits

0xe659,	// (0x0004cb2b) call5_swipe_2_pane_t1

0xe66e,	// (0x0004cb40) sc_swipe_pane_g1_ParamLimits

0xe66e,	// (0x0004cb40) sc_swipe_pane_g1

0xe67b,	// (0x0004cb4d) sc_swipe_pane_g2_ParamLimits

0xe67b,	// (0x0004cb4d) sc_swipe_pane_g2

0x0001,

0xfcbc,	// (0x0004e18e) sc_swipe_pane_g_ParamLimits

0xfcbc,	// (0x0004e18e) sc_swipe_pane_g

0xe687,	// (0x0004cb59) sc_swipe_pane_t1_ParamLimits

0xe687,	// (0x0004cb59) sc_swipe_pane_t1

0xa148,	// (0x0004861a) main_cmail_launcher_pane

0x9296,	// (0x00047768) aid_size_cell_cmail_l_ParamLimits

0x9296,	// (0x00047768) aid_size_cell_cmail_l

0x92a6,	// (0x00047778) grid_cmail_l_pane_ParamLimits

0x92a6,	// (0x00047778) grid_cmail_l_pane

0x92b6,	// (0x00047788) cell_cmail_l_pane_ParamLimits

0x92b6,	// (0x00047788) cell_cmail_l_pane

0x92cc,	// (0x0004779e) cell_cmail_l_pane_g1_ParamLimits

0x92cc,	// (0x0004779e) cell_cmail_l_pane_g1

0x92d8,	// (0x000477aa) cell_cmail_l_pane_t1_ParamLimits

0x92d8,	// (0x000477aa) cell_cmail_l_pane_t1

0xe69c,	// (0x0004cb6e) cell_cmail_l_pane_t2_ParamLimits

0xe69c,	// (0x0004cb6e) cell_cmail_l_pane_t2

0x0001,

0xfcc1,	// (0x0004e193) cell_cmail_l_pane_t_ParamLimits

0xfcc1,	// (0x0004e193) cell_cmail_l_pane_t

0xa9e1,	// (0x00048eb3) grid_highlight_pane_cp018_ParamLimits

0xa9e1,	// (0x00048eb3) grid_highlight_pane_cp018

0x2004,	// (0x000404d6) main2_pane_ParamLimits

0x2004,	// (0x000404d6) main2_pane

0xa97f,	// (0x00048e51) popup_sp_fs_action_menu_bg_pane_g1

0xa987,	// (0x00048e59) popup_sp_fs_action_menu_bg_pane_g2

0xa98f,	// (0x00048e61) popup_sp_fs_action_menu_bg_pane_g3

0xa997,	// (0x00048e69) popup_sp_fs_action_menu_bg_pane_g4

0xa99f,	// (0x00048e71) popup_sp_fs_action_menu_bg_pane_g5

0xa9a7,	// (0x00048e79) popup_sp_fs_action_menu_bg_pane_g6

0xa9af,	// (0x00048e81) popup_sp_fs_action_menu_bg_pane_g7

0xa9b7,	// (0x00048e89) popup_sp_fs_action_menu_bg_pane_g8

0xa9bf,	// (0x00048e91) popup_sp_fs_action_menu_bg_pane_g9

0xa9c7,	// (0x00048e99) popup_sp_fs_action_menu_bg_pane_g10

0xa9c7,	// (0x00048e99) popup_sp_fs_action_menu_bg_pane_g11

0x000a,

0xf18a,	// (0x0004d65c) popup_sp_fs_action_menu_bg_pane_g

0x0b6a,	// (0x0003f03c) list_medium_line_x2_t3_g3_g1_ParamLimits

0x0b6a,	// (0x0003f03c) list_medium_line_x2_t3_g3_g1

0x0b76,	// (0x0003f048) list_medium_line_x2_t3_g3_g2_ParamLimits

0x0b76,	// (0x0003f048) list_medium_line_x2_t3_g3_g2

0x0b82,	// (0x0003f054) list_medium_line_x2_t3_g3_g3_ParamLimits

0x0b82,	// (0x0003f054) list_medium_line_x2_t3_g3_g3

0x0002,

0xf238,	// (0x0004d70a) list_medium_line_x2_t3_g3_g_ParamLimits

0xf238,	// (0x0004d70a) list_medium_line_x2_t3_g3_g

0x0b8e,	// (0x0003f060) list_medium_line_x2_t3_g3_t1_ParamLimits

0x0b8e,	// (0x0003f060) list_medium_line_x2_t3_g3_t1

0x0ba3,	// (0x0003f075) list_medium_line_x2_t3_g3_t2_ParamLimits

0x0ba3,	// (0x0003f075) list_medium_line_x2_t3_g3_t2

0x0bb7,	// (0x0003f089) list_medium_line_x2_t3_g3_t3_ParamLimits

0x0bb7,	// (0x0003f089) list_medium_line_x2_t3_g3_t3

0x0002,

0xf23f,	// (0x0004d711) list_medium_line_x2_t3_g3_t_ParamLimits

0xf23f,	// (0x0004d711) list_medium_line_x2_t3_g3_t

0x0b6a,	// (0x0003f03c) list_medium_line_x2_t3_g2_g1_ParamLimits

0x0b6a,	// (0x0003f03c) list_medium_line_x2_t3_g2_g1

0x0b82,	// (0x0003f054) list_medium_line_x2_t3_g2_g2_ParamLimits

0x0b82,	// (0x0003f054) list_medium_line_x2_t3_g2_g2

0x0001,

0xf246,	// (0x0004d718) list_medium_line_x2_t3_g2_g_ParamLimits

0xf246,	// (0x0004d718) list_medium_line_x2_t3_g2_g

0x0bcc,	// (0x0003f09e) list_medium_line_x2_t3_g2_t1_ParamLimits

0x0bcc,	// (0x0003f09e) list_medium_line_x2_t3_g2_t1

0x0be2,	// (0x0003f0b4) list_medium_line_x2_t3_g2_t2_ParamLimits

0x0be2,	// (0x0003f0b4) list_medium_line_x2_t3_g2_t2

0x0bf4,	// (0x0003f0c6) list_medium_line_x2_t3_g2_t3_ParamLimits

0x0bf4,	// (0x0003f0c6) list_medium_line_x2_t3_g2_t3

0x0002,

0xf24b,	// (0x0004d71d) list_medium_line_x2_t3_g2_t_ParamLimits

0xf24b,	// (0x0004d71d) list_medium_line_x2_t3_g2_t

0x0b6a,	// (0x0003f03c) list_medium_line_x2_t4_g4_g1_ParamLimits

0x0b6a,	// (0x0003f03c) list_medium_line_x2_t4_g4_g1

0x0c12,	// (0x0003f0e4) list_medium_line_x2_t4_g4_g2_ParamLimits

0x0c12,	// (0x0003f0e4) list_medium_line_x2_t4_g4_g2

0x0b76,	// (0x0003f048) list_medium_line_x2_t4_g4_g3_ParamLimits

0x0b76,	// (0x0003f048) list_medium_line_x2_t4_g4_g3

0x0c1e,	// (0x0003f0f0) list_medium_line_x2_t4_g4_g4_ParamLimits

0x0c1e,	// (0x0003f0f0) list_medium_line_x2_t4_g4_g4

0x0003,

0xf252,	// (0x0004d724) list_medium_line_x2_t4_g4_g_ParamLimits

0xf252,	// (0x0004d724) list_medium_line_x2_t4_g4_g

0x0c2a,	// (0x0003f0fc) list_medium_line_x2_t4_g4_t1_ParamLimits

0x0c2a,	// (0x0003f0fc) list_medium_line_x2_t4_g4_t1

0x0c44,	// (0x0003f116) list_medium_line_x2_t4_g4_t2_ParamLimits

0x0c44,	// (0x0003f116) list_medium_line_x2_t4_g4_t2

0x0c5a,	// (0x0003f12c) list_medium_line_x2_t4_g4_t3_ParamLimits

0x0c5a,	// (0x0003f12c) list_medium_line_x2_t4_g4_t3

0x0c6f,	// (0x0003f141) list_medium_line_x2_t4_g4_t4_ParamLimits

0x0c6f,	// (0x0003f141) list_medium_line_x2_t4_g4_t4

0x0003,

0xf25b,	// (0x0004d72d) list_medium_line_x2_t4_g4_t_ParamLimits

0xf25b,	// (0x0004d72d) list_medium_line_x2_t4_g4_t

0x0b6a,	// (0x0003f03c) list_medium_line_x2_t2_g4_g1_ParamLimits

0x0b6a,	// (0x0003f03c) list_medium_line_x2_t2_g4_g1

0x0c12,	// (0x0003f0e4) list_medium_line_x2_t2_g4_g2_ParamLimits

0x0c12,	// (0x0003f0e4) list_medium_line_x2_t2_g4_g2

0x0b76,	// (0x0003f048) list_medium_line_x2_t2_g4_g3_ParamLimits

0x0b76,	// (0x0003f048) list_medium_line_x2_t2_g4_g3

0x0b82,	// (0x0003f054) list_medium_line_x2_t2_g4_g4_ParamLimits

0x0b82,	// (0x0003f054) list_medium_line_x2_t2_g4_g4

0x0003,

0xf2c2,	// (0x0004d794) list_medium_line_x2_t2_g4_g_ParamLimits

0xf2c2,	// (0x0004d794) list_medium_line_x2_t2_g4_g

0x0c81,	// (0x0003f153) list_medium_line_x2_t2_g4_t1_ParamLimits

0x0c81,	// (0x0003f153) list_medium_line_x2_t2_g4_t1

0x0bb7,	// (0x0003f089) list_medium_line_x2_t2_g4_t2_ParamLimits

0x0bb7,	// (0x0003f089) list_medium_line_x2_t2_g4_t2

0x0001,

0xf2cb,	// (0x0004d79d) list_medium_line_x2_t2_g4_t_ParamLimits

0xf2cb,	// (0x0004d79d) list_medium_line_x2_t2_g4_t

0x0b6a,	// (0x0003f03c) list_medium_line_x2_t2_g3_g1_ParamLimits

0x0b6a,	// (0x0003f03c) list_medium_line_x2_t2_g3_g1

0x0b76,	// (0x0003f048) list_medium_line_x2_t2_g3_g2_ParamLimits

0x0b76,	// (0x0003f048) list_medium_line_x2_t2_g3_g2

0x0b82,	// (0x0003f054) list_medium_line_x2_t2_g3_g3_ParamLimits

0x0b82,	// (0x0003f054) list_medium_line_x2_t2_g3_g3

0x0002,

0xf238,	// (0x0004d70a) list_medium_line_x2_t2_g3_g_ParamLimits

0xf238,	// (0x0004d70a) list_medium_line_x2_t2_g3_g

0x0c96,	// (0x0003f168) list_medium_line_x2_t2_g3_t1_ParamLimits

0x0c96,	// (0x0003f168) list_medium_line_x2_t2_g3_t1

0x0bb7,	// (0x0003f089) list_medium_line_x2_t2_g3_t2_ParamLimits

0x0bb7,	// (0x0003f089) list_medium_line_x2_t2_g3_t2

0x0001,

0xf2d0,	// (0x0004d7a2) list_medium_line_x2_t2_g3_t_ParamLimits

0xf2d0,	// (0x0004d7a2) list_medium_line_x2_t2_g3_t

0x44a1,	// (0x00042973) main_sp_fs_list_pane_ParamLimits

0x44a1,	// (0x00042973) main_sp_fs_list_pane

0x44ad,	// (0x0004297f) sp_fs_scroll_pane_ParamLimits

0x44ad,	// (0x0004297f) sp_fs_scroll_pane

0x0cab,	// (0x0003f17d) list_medium_line_x2_t3_t1

0x0cbb,	// (0x0003f18d) list_medium_line_x2_t3_t2

0x0cc9,	// (0x0003f19b) list_medium_line_x2_t3_t3

0x0002,

0xf31b,	// (0x0004d7ed) list_medium_line_x2_t3_t

0x0cd7,	// (0x0003f1a9) list_medium_line_x3_t4_t1

0x0ce7,	// (0x0003f1b9) list_medium_line_x3_t4_t2

0x0cf5,	// (0x0003f1c7) list_medium_line_x3_t4_t3

0x0cc9,	// (0x0003f19b) list_medium_line_x3_t4_t4

0x0003,

0xf322,	// (0x0004d7f4) list_medium_line_x3_t4_t

0x0d03,	// (0x0003f1d5) list_medium_line_x4_t5_t1

0x0d13,	// (0x0003f1e5) list_medium_line_x4_t5_t2

0x0cf5,	// (0x0003f1c7) list_medium_line_x4_t5_t3

0x0d21,	// (0x0003f1f3) list_medium_line_x4_t5_t4

0x0cc9,	// (0x0003f19b) list_medium_line_x4_t5_t5

0x0004,

0xf32b,	// (0x0004d7fd) list_medium_line_x4_t5_t

0x0b6a,	// (0x0003f03c) list_medium_line_t4_g4_g1_ParamLimits

0x0b6a,	// (0x0003f03c) list_medium_line_t4_g4_g1

0x0d2f,	// (0x0003f201) list_medium_line_t4_g4_g2_ParamLimits

0x0d2f,	// (0x0003f201) list_medium_line_t4_g4_g2

0x0d3b,	// (0x0003f20d) list_medium_line_t4_g4_g3_ParamLimits

0x0d3b,	// (0x0003f20d) list_medium_line_t4_g4_g3

0x0b82,	// (0x0003f054) list_medium_line_t4_g4_g4_ParamLimits

0x0b82,	// (0x0003f054) list_medium_line_t4_g4_g4

0x0003,

0xf336,	// (0x0004d808) list_medium_line_t4_g4_g_ParamLimits

0xf336,	// (0x0004d808) list_medium_line_t4_g4_g

0x0d47,	// (0x0003f219) list_medium_line_t4_g4_t1_ParamLimits

0x0d47,	// (0x0003f219) list_medium_line_t4_g4_t1

0x0d5c,	// (0x0003f22e) list_medium_line_t4_g4_t2_ParamLimits

0x0d5c,	// (0x0003f22e) list_medium_line_t4_g4_t2

0x0d72,	// (0x0003f244) list_medium_line_t4_g4_t3_ParamLimits

0x0d72,	// (0x0003f244) list_medium_line_t4_g4_t3

0x0bb7,	// (0x0003f089) list_medium_line_t4_g4_t4_ParamLimits

0x0bb7,	// (0x0003f089) list_medium_line_t4_g4_t4

0x0003,

0xf33f,	// (0x0004d811) list_medium_line_t4_g4_t_ParamLimits

0xf33f,	// (0x0004d811) list_medium_line_t4_g4_t

0x45cc,	// (0x00042a9e) chi_dic_find_pane_g1

0x55e6,	// (0x00043ab8) main_tport_pane

0x0fbe,	// (0x0003f490) list_medium_line_plain_t1

0x0fcc,	// (0x0003f49e) list_medium_line_t2_g2_g1_ParamLimits

0x0fcc,	// (0x0003f49e) list_medium_line_t2_g2_g1

0x0fd8,	// (0x0003f4aa) list_medium_line_t2_g2_g2_ParamLimits

0x0fd8,	// (0x0003f4aa) list_medium_line_t2_g2_g2

0x0001,

0xfa00,	// (0x0004ded2) list_medium_line_t2_g2_g_ParamLimits

0xfa00,	// (0x0004ded2) list_medium_line_t2_g2_g

0x0fe4,	// (0x0003f4b6) list_medium_line_t2_g2_t1_ParamLimits

0x0fe4,	// (0x0003f4b6) list_medium_line_t2_g2_t1

0x0ffb,	// (0x0003f4cd) list_medium_line_t2_g2_t2_ParamLimits

0x0ffb,	// (0x0003f4cd) list_medium_line_t2_g2_t2

0x0001,

0xfa05,	// (0x0004ded7) list_medium_line_t2_g2_t_ParamLimits

0xfa05,	// (0x0004ded7) list_medium_line_t2_g2_t

0x121a,	// (0x0003f6ec) aid_sp_fs_list_icon_a_sm

0x1222,	// (0x0003f6f4) aid_sp_fs_list_icon_d

0x122a,	// (0x0003f6fc) aid_sp_fs_text_primary

0x1233,	// (0x0003f705) aid_sp_fs_text_secondary

0x123c,	// (0x0003f70e) list_medium_line

0x123c,	// (0x0003f70e) list_medium_line_g2

0x123c,	// (0x0003f70e) list_medium_line_g3

0x123c,	// (0x0003f70e) list_medium_line_plain

0x123c,	// (0x0003f70e) list_medium_line_plain_t2

0x123c,	// (0x0003f70e) list_medium_line_plain_t3

0x123c,	// (0x0003f70e) list_medium_line_right_icon

0x123c,	// (0x0003f70e) list_medium_line_right_iconx2

0x123c,	// (0x0003f70e) list_medium_line_t2

0x123c,	// (0x0003f70e) list_medium_line_t2_g2

0x123c,	// (0x0003f70e) list_medium_line_t2_g3

0x123c,	// (0x0003f70e) list_medium_line_t2_right_icon

0x123c,	// (0x0003f70e) list_medium_line_t2_right_iconx2

0x123c,	// (0x0003f70e) list_medium_line_t3

0x123c,	// (0x0003f70e) list_medium_line_t3_g2

0x123c,	// (0x0003f70e) list_medium_line_t3_g3

0x123c,	// (0x0003f70e) list_medium_line_t3_right_iconx2

0x1245,	// (0x0003f717) list_medium_line_t4_g4

0x8530,	// (0x00046a02) list_medium_line_x2

0x8530,	// (0x00046a02) list_medium_line_x2_t2_g2

0x8530,	// (0x00046a02) list_medium_line_x2_t2_g3

0x8530,	// (0x00046a02) list_medium_line_x2_t2_g4

0x8530,	// (0x00046a02) list_medium_line_x2_t3

0x8530,	// (0x00046a02) list_medium_line_x2_t3_g2

0x8530,	// (0x00046a02) list_medium_line_x2_t3_g3

0x8530,	// (0x00046a02) list_medium_line_x2_t3_g4

0x8530,	// (0x00046a02) list_medium_line_x2_t4_g2

0x8530,	// (0x00046a02) list_medium_line_x2_t4_g4

0x124e,	// (0x0003f720) list_medium_line_x3

0x124e,	// (0x0003f720) list_medium_line_x3_t4

0x124e,	// (0x0003f720) list_medium_line_x3_t4_g4

0x1245,	// (0x0003f717) list_medium_line_x4_t4

0x1245,	// (0x0003f717) list_medium_line_x4_t4_g7

0x1245,	// (0x0003f717) list_medium_line_x4_t5

0x1257,	// (0x0003f729) list_single_fs_dyc_pane_ParamLimits

0x1257,	// (0x0003f729) list_single_fs_dyc_pane

0x0b6a,	// (0x0003f03c) list_medium_line_x4_t4_g7_g1_ParamLimits

0x0b6a,	// (0x0003f03c) list_medium_line_x4_t4_g7_g1

0x1297,	// (0x0003f769) list_medium_line_x4_t4_g7_g2_ParamLimits

0x1297,	// (0x0003f769) list_medium_line_x4_t4_g7_g2

0x12a3,	// (0x0003f775) list_medium_line_x4_t4_g7_g3_ParamLimits

0x12a3,	// (0x0003f775) list_medium_line_x4_t4_g7_g3

0x12b2,	// (0x0003f784) list_medium_line_x4_t4_g7_g4_ParamLimits

0x12b2,	// (0x0003f784) list_medium_line_x4_t4_g7_g4

0x12be,	// (0x0003f790) list_medium_line_x4_t4_g7_g5_ParamLimits

0x12be,	// (0x0003f790) list_medium_line_x4_t4_g7_g5

0x12cd,	// (0x0003f79f) list_medium_line_x4_t4_g7_g6_ParamLimits

0x12cd,	// (0x0003f79f) list_medium_line_x4_t4_g7_g6

0x12dc,	// (0x0003f7ae) list_medium_line_x4_t4_g7_g7_ParamLimits

0x12dc,	// (0x0003f7ae) list_medium_line_x4_t4_g7_g7

0x0006,

0xfbc9,	// (0x0004e09b) list_medium_line_x4_t4_g7_g_ParamLimits

0xfbc9,	// (0x0004e09b) list_medium_line_x4_t4_g7_g

0x12e8,	// (0x0003f7ba) list_medium_line_x4_t4_g7_t1_ParamLimits

0x12e8,	// (0x0003f7ba) list_medium_line_x4_t4_g7_t1

0x12fd,	// (0x0003f7cf) list_medium_line_x4_t4_g7_t2_ParamLimits

0x12fd,	// (0x0003f7cf) list_medium_line_x4_t4_g7_t2

0x1312,	// (0x0003f7e4) list_medium_line_x4_t4_g7_t3_ParamLimits

0x1312,	// (0x0003f7e4) list_medium_line_x4_t4_g7_t3

0x1327,	// (0x0003f7f9) list_medium_line_x4_t4_g7_t4_ParamLimits

0x1327,	// (0x0003f7f9) list_medium_line_x4_t4_g7_t4

0x1339,	// (0x0003f80b) list_medium_line_x4_t4_g7_t5_ParamLimits

0x1339,	// (0x0003f80b) list_medium_line_x4_t4_g7_t5

0x0004,

0xfbd8,	// (0x0004e0aa) list_medium_line_x4_t4_g7_t_ParamLimits

0xfbd8,	// (0x0004e0aa) list_medium_line_x4_t4_g7_t

0x134b,	// (0x0003f81d) list_single_dyc_row_pane_ParamLimits

0x134b,	// (0x0003f81d) list_single_dyc_row_pane

0x9240,	// (0x00047712) call5_gesture_pane_ParamLimits

0x9240,	// (0x00047712) call5_gesture_pane

0x9276,	// (0x00047748) call5_windows_pane_ParamLimits

0x9276,	// (0x00047748) call5_windows_pane

0x92ee,	// (0x000477c0) call5_swipe_1_pane_cp_ParamLimits

0x92ee,	// (0x000477c0) call5_swipe_1_pane_cp

0x92fa,	// (0x000477cc) call5_swipe_2_pane_cp_ParamLimits

0x92fa,	// (0x000477cc) call5_swipe_2_pane_cp

0xaab8,	// (0x00048f8a) call5_image_pane_cp

0x9306,	// (0x000477d8) popup_call5_audio_first_window_cp_ParamLimits

0x9306,	// (0x000477d8) popup_call5_audio_first_window_cp

0xe66e,	// (0x0004cb40) call5_swipe_1_pane_g1_cp_ParamLimits

0xe66e,	// (0x0004cb40) call5_swipe_1_pane_g1_cp

0xe6ae,	// (0x0004cb80) call5_swipe_1_pane_g2_cp

0xe687,	// (0x0004cb59) call5_swipe_1_pane_t1_cp_ParamLimits

0xe687,	// (0x0004cb59) call5_swipe_1_pane_t1_cp

0xe66e,	// (0x0004cb40) call5_swipe_2_pane_g1_cp_ParamLimits

0xe66e,	// (0x0004cb40) call5_swipe_2_pane_g1_cp

0xe6b6,	// (0x0004cb88) call5_swipe_2_pane_g2_cp

0xe6be,	// (0x0004cb90) call5_swipe_2_pane_t1_cp_ParamLimits

0xe6be,	// (0x0004cb90) call5_swipe_2_pane_t1_cp

0xa9e1,	// (0x00048eb3) main_sp_fs_email_pane

0xe6d3,	// (0x0004cba5) main_sp_fs_listscroll_pane_te

0x13f5,	// (0x0003f8c7) popup_sp_fs_action_menu_pane_ParamLimits

0x13f5,	// (0x0003f8c7) popup_sp_fs_action_menu_pane

0xcc6e,	// (0x0004b140) bg_sp_fs_ctrlbar_pane_g1

0xd22f,	// (0x0004b701) bg_sp_fs_ctrlbar_ddmenu_pane_g1

0xd241,	// (0x0004b713) bg_sp_fs_ctrlbar_ddmenu_pane_g2

0xd238,	// (0x0004b70a) bg_sp_fs_ctrlbar_ddmenu_pane_g3

0xcc6e,	// (0x0004b140) bg_sp_fs_ctrlbar_ddmenu_pane_g4

0x0003,

0xfcc6,	// (0x0004e198) bg_sp_fs_ctrlbar_ddmenu_pane_g

0xca4d,	// (0x0004af1f) bg_sp_fs_ctrlbar_ddmenu_pane_ParamLimits

0xca4d,	// (0x0004af1f) bg_sp_fs_ctrlbar_ddmenu_pane

0xe6dc,	// (0x0004cbae) main_sp_fs_ctrlbar_ddmenu_pane_g1_ParamLimits

0xe6dc,	// (0x0004cbae) main_sp_fs_ctrlbar_ddmenu_pane_g1

0xe6e8,	// (0x0004cbba) main_sp_fs_ctrlbar_ddmenu_pane_g2_ParamLimits

0xe6e8,	// (0x0004cbba) main_sp_fs_ctrlbar_ddmenu_pane_g2

0x0001,

0xfccf,	// (0x0004e1a1) main_sp_fs_ctrlbar_ddmenu_pane_g_ParamLimits

0xfccf,	// (0x0004e1a1) main_sp_fs_ctrlbar_ddmenu_pane_g

0xe6f4,	// (0x0004cbc6) main_sp_fs_ctrlbar_ddmenu_pane_t1_ParamLimits

0xe6f4,	// (0x0004cbc6) main_sp_fs_ctrlbar_ddmenu_pane_t1

0x143b,	// (0x0003f90d) list_medium_line_t2_right_icon_g1

0x1443,	// (0x0003f915) list_medium_line_t2_right_icon_t1

0x1453,	// (0x0003f925) list_medium_line_t2_right_icon_t2

0x0001,

0xfcd4,	// (0x0004e1a6) list_medium_line_t2_right_icon_t

0xc81d,	// (0x0004acef) bg_sp_fs_ctrlbar_pane_ParamLimits

0xc81d,	// (0x0004acef) bg_sp_fs_ctrlbar_pane

0x936d,	// (0x0004783f) main_sp_fs_ctrlbar_button_pane_cp01

0x9375,	// (0x00047847) main_sp_fs_ctrlbar_ddmenu_pane

0xccba,	// (0x0004b18c) main_sp_fs_ctrlbar_pane_g1

0xe746,	// (0x0004cc18) main_sp_fs_ctrlbar_pane_g2

0x0001,

0xfcd9,	// (0x0004e1ab) main_sp_fs_ctrlbar_pane_g

0xe752,	// (0x0004cc24) main_sp_fs_ctrlbar_pane_t1

0x1461,	// (0x0003f933) main_sp_fs_ctrlbar_pane

0x147b,	// (0x0003f94d) main_sp_fs_listscroll_pane_te_cp01

0x148c,	// (0x0003f95e) popup_sp_fs_action_menu_pane_cp01_ParamLimits

0x148c,	// (0x0003f95e) popup_sp_fs_action_menu_pane_cp01

0xa9e1,	// (0x00048eb3) bg_sp_fs_highlight_list_pane_cp01_ParamLimits

0xa9e1,	// (0x00048eb3) bg_sp_fs_highlight_list_pane_cp01

0x14b6,	// (0x0003f988) sp_fs_action_menu_list_gene_pane_g1_ParamLimits

0x14b6,	// (0x0003f988) sp_fs_action_menu_list_gene_pane_g1

0xe782,	// (0x0004cc54) sp_fs_action_menu_list_gene_pane_g2_ParamLimits

0xe782,	// (0x0004cc54) sp_fs_action_menu_list_gene_pane_g2

0x0001,

0xfce3,	// (0x0004e1b5) sp_fs_action_menu_list_gene_pane_g_ParamLimits

0xfce3,	// (0x0004e1b5) sp_fs_action_menu_list_gene_pane_g

0x14c5,	// (0x0003f997) sp_fs_action_menu_list_gene_pane_t1_ParamLimits

0x14c5,	// (0x0003f997) sp_fs_action_menu_list_gene_pane_t1

0x14dd,	// (0x0003f9af) sp_fs_action_menu_list_gene_pane_ParamLimits

0x14dd,	// (0x0003f9af) sp_fs_action_menu_list_gene_pane

0xe78f,	// (0x0004cc61) popup_sp_fs_action_menu_bg_pane_ParamLimits

0xe78f,	// (0x0004cc61) popup_sp_fs_action_menu_bg_pane

0x1500,	// (0x0003f9d2) sp_fs_action_menu_list_pane_ParamLimits

0x1500,	// (0x0003f9d2) sp_fs_action_menu_list_pane

0xe79d,	// (0x0004cc6f) sp_fs_scroll_pane_cp01_ParamLimits

0xe79d,	// (0x0004cc6f) sp_fs_scroll_pane_cp01

0x1524,	// (0x0003f9f6) list_medium_line_plain_t2_t1

0x1534,	// (0x0003fa06) list_medium_line_plain_t2_t2

0x0001,

0xfce8,	// (0x0004e1ba) list_medium_line_plain_t2_t

0x1542,	// (0x0003fa14) list_medium_line_plain_t3_t1

0x1552,	// (0x0003fa24) list_medium_line_plain_t3_t2

0x1560,	// (0x0003fa32) list_medium_line_plain_t3_t3

0x0002,

0xfced,	// (0x0004e1bf) list_medium_line_plain_t3_t

0x0b6a,	// (0x0003f03c) list_medium_line_x2_t2_g2_g1_ParamLimits

0x0b6a,	// (0x0003f03c) list_medium_line_x2_t2_g2_g1

0x0b82,	// (0x0003f054) list_medium_line_x2_t2_g2_g2_ParamLimits

0x0b82,	// (0x0003f054) list_medium_line_x2_t2_g2_g2

0x0001,

0xf246,	// (0x0004d718) list_medium_line_x2_t2_g2_g_ParamLimits

0xf246,	// (0x0004d718) list_medium_line_x2_t2_g2_g

0x0d47,	// (0x0003f219) list_medium_line_x2_t2_g2_t1_ParamLimits

0x0d47,	// (0x0003f219) list_medium_line_x2_t2_g2_t1

0x0bb7,	// (0x0003f089) list_medium_line_x2_t2_g2_t2_ParamLimits

0x0bb7,	// (0x0003f089) list_medium_line_x2_t2_g2_t2

0x0001,

0xfcf4,	// (0x0004e1c6) list_medium_line_x2_t2_g2_t_ParamLimits

0xfcf4,	// (0x0004e1c6) list_medium_line_x2_t2_g2_t

0x0b6a,	// (0x0003f03c) list_medium_line_x2_t4_g2_g1_ParamLimits

0x0b6a,	// (0x0003f03c) list_medium_line_x2_t4_g2_g1

0x156e,	// (0x0003fa40) list_medium_line_x2_t4_g2_g2_ParamLimits

0x156e,	// (0x0003fa40) list_medium_line_x2_t4_g2_g2

0x0001,

0xfcf9,	// (0x0004e1cb) list_medium_line_x2_t4_g2_g_ParamLimits

0xfcf9,	// (0x0004e1cb) list_medium_line_x2_t4_g2_g

0x1580,	// (0x0003fa52) list_medium_line_x2_t4_g2_t1_ParamLimits

0x1580,	// (0x0003fa52) list_medium_line_x2_t4_g2_t1

0x159a,	// (0x0003fa6c) list_medium_line_x2_t4_g2_t2_ParamLimits

0x159a,	// (0x0003fa6c) list_medium_line_x2_t4_g2_t2

0x15b0,	// (0x0003fa82) list_medium_line_x2_t4_g2_t3_ParamLimits

0x15b0,	// (0x0003fa82) list_medium_line_x2_t4_g2_t3

0x0bb7,	// (0x0003f089) list_medium_line_x2_t4_g2_t4_ParamLimits

0x0bb7,	// (0x0003f089) list_medium_line_x2_t4_g2_t4

0x0003,

0xfcfe,	// (0x0004e1d0) list_medium_line_x2_t4_g2_t_ParamLimits

0xfcfe,	// (0x0004e1d0) list_medium_line_x2_t4_g2_t

0x15c5,	// (0x0003fa97) list_medium_line_t3_right_iconx2_g1

0x143b,	// (0x0003f90d) list_medium_line_t3_right_iconx2_g2

0x15cd,	// (0x0003fa9f) list_medium_line_t3_right_iconx2_g3

0x0002,

0xfd07,	// (0x0004e1d9) list_medium_line_t3_right_iconx2_g

0x15d7,	// (0x0003faa9) list_medium_line_t3_right_iconx2_t1

0x15e7,	// (0x0003fab9) list_medium_line_t3_right_iconx2_t2

0x0001,

0xfd0e,	// (0x0004e1e0) list_medium_line_t3_right_iconx2_t

0x0b6a,	// (0x0003f03c) list_medium_line_x3_t4_g4_g1_ParamLimits

0x0b6a,	// (0x0003f03c) list_medium_line_x3_t4_g4_g1

0x0b76,	// (0x0003f048) list_medium_line_x3_t4_g4_g2_ParamLimits

0x0b76,	// (0x0003f048) list_medium_line_x3_t4_g4_g2

0x0d2f,	// (0x0003f201) list_medium_line_x3_t4_g4_g3_ParamLimits

0x0d2f,	// (0x0003f201) list_medium_line_x3_t4_g4_g3

0x15f5,	// (0x0003fac7) list_medium_line_x3_t4_g4_g4_ParamLimits

0x15f5,	// (0x0003fac7) list_medium_line_x3_t4_g4_g4

0x0003,

0xfd13,	// (0x0004e1e5) list_medium_line_x3_t4_g4_g_ParamLimits

0xfd13,	// (0x0004e1e5) list_medium_line_x3_t4_g4_g

0x1601,	// (0x0003fad3) list_medium_line_x3_t4_g4_t1_ParamLimits

0x1601,	// (0x0003fad3) list_medium_line_x3_t4_g4_t1

0x1618,	// (0x0003faea) list_medium_line_x3_t4_g4_t2_ParamLimits

0x1618,	// (0x0003faea) list_medium_line_x3_t4_g4_t2

0x162d,	// (0x0003faff) list_medium_line_x3_t4_g4_t3_ParamLimits

0x162d,	// (0x0003faff) list_medium_line_x3_t4_g4_t3

0x1642,	// (0x0003fb14) list_medium_line_x3_t4_g4_t4_ParamLimits

0x1642,	// (0x0003fb14) list_medium_line_x3_t4_g4_t4

0x0003,

0xfd1c,	// (0x0004e1ee) list_medium_line_x3_t4_g4_t_ParamLimits

0xfd1c,	// (0x0004e1ee) list_medium_line_x3_t4_g4_t

0x165f,	// (0x0003fb31) list_single_dyc_row_text_pane_t1_ParamLimits

0x165f,	// (0x0003fb31) list_single_dyc_row_text_pane_t1

0x169c,	// (0x0003fb6e) list_single_dyc_row_text_pane_t2_ParamLimits

0x169c,	// (0x0003fb6e) list_single_dyc_row_text_pane_t2

0x1712,	// (0x0003fbe4) list_single_dyc_row_text_pane_t3_ParamLimits

0x1712,	// (0x0003fbe4) list_single_dyc_row_text_pane_t3

0x0005,

0xfd25,	// (0x0004e1f7) list_single_dyc_row_text_pane_t_ParamLimits

0xfd25,	// (0x0004e1f7) list_single_dyc_row_text_pane_t

0x17e9,	// (0x0003fcbb) list_single_dyc_row_pane_g1_ParamLimits

0x17e9,	// (0x0003fcbb) list_single_dyc_row_pane_g1

0x17f5,	// (0x0003fcc7) list_single_dyc_row_pane_g2_ParamLimits

0x17f5,	// (0x0003fcc7) list_single_dyc_row_pane_g2

0x1801,	// (0x0003fcd3) list_single_dyc_row_pane_g3_ParamLimits

0x1801,	// (0x0003fcd3) list_single_dyc_row_pane_g3

0x180d,	// (0x0003fcdf) list_single_dyc_row_pane_g4_ParamLimits

0x180d,	// (0x0003fcdf) list_single_dyc_row_pane_g4

0x0003,

0xfd32,	// (0x0004e204) list_single_dyc_row_pane_g_ParamLimits

0xfd32,	// (0x0004e204) list_single_dyc_row_pane_g

0x1819,	// (0x0003fceb) list_single_dyc_row_text_pane_ParamLimits

0x1819,	// (0x0003fceb) list_single_dyc_row_text_pane

0xa148,	// (0x0004861a) bg_sp_fs_scroll_pane

0xe7c3,	// (0x0004cc95) thumb_sp_fs_scroll_pane

0x0fcc,	// (0x0003f49e) list_medium_line_g1_ParamLimits

0x0fcc,	// (0x0003f49e) list_medium_line_g1

0x1838,	// (0x0003fd0a) list_medium_line_t1_ParamLimits

0x1838,	// (0x0003fd0a) list_medium_line_t1

0x0b6a,	// (0x0003f03c) list_medium_line_x2_g1_ParamLimits

0x0b6a,	// (0x0003f03c) list_medium_line_x2_g1

0x0b76,	// (0x0003f048) list_medium_line_x2_g2_ParamLimits

0x0b76,	// (0x0003f048) list_medium_line_x2_g2

0x0001,

0xfd3b,	// (0x0004e20d) list_medium_line_x2_g_ParamLimits

0xfd3b,	// (0x0004e20d) list_medium_line_x2_g

0x184d,	// (0x0003fd1f) list_medium_line_x2_t1_ParamLimits

0x184d,	// (0x0003fd1f) list_medium_line_x2_t1

0x0b6a,	// (0x0003f03c) list_medium_line_x3_g1_ParamLimits

0x0b6a,	// (0x0003f03c) list_medium_line_x3_g1

0x0b76,	// (0x0003f048) list_medium_line_x3_g2_ParamLimits

0x0b76,	// (0x0003f048) list_medium_line_x3_g2

0x0001,

0xfd3b,	// (0x0004e20d) list_medium_line_x3_g_ParamLimits

0xfd3b,	// (0x0004e20d) list_medium_line_x3_g

0x184d,	// (0x0003fd1f) list_medium_line_x3_t1_ParamLimits

0x184d,	// (0x0003fd1f) list_medium_line_x3_t1

0xe7cc,	// (0x0004cc9e) thumb_sp_fs_scroll_pane_g1

0xe7d5,	// (0x0004cca7) thumb_sp_fs_scroll_pane_g2

0xe7de,	// (0x0004ccb0) thumb_sp_fs_scroll_pane_g3

0x0002,

0xfd40,	// (0x0004e212) thumb_sp_fs_scroll_pane_g

0xe7cc,	// (0x0004cc9e) bg_sp_fs_scroll_pane_g1

0xe7d5,	// (0x0004cca7) bg_sp_fs_scroll_pane_g2

0xe7de,	// (0x0004ccb0) bg_sp_fs_scroll_pane_g3

0x0002,

0xfd40,	// (0x0004e212) bg_sp_fs_scroll_pane_g

0x0b6a,	// (0x0003f03c) list_medium_line_x2_t3_g4_g1_ParamLimits

0x0b6a,	// (0x0003f03c) list_medium_line_x2_t3_g4_g1

0x0c12,	// (0x0003f0e4) list_medium_line_x2_t3_g4_g2_ParamLimits

0x0c12,	// (0x0003f0e4) list_medium_line_x2_t3_g4_g2

0x0b76,	// (0x0003f048) list_medium_line_x2_t3_g4_g3_ParamLimits

0x0b76,	// (0x0003f048) list_medium_line_x2_t3_g4_g3

0x0b82,	// (0x0003f054) list_medium_line_x2_t3_g4_g4_ParamLimits

0x0b82,	// (0x0003f054) list_medium_line_x2_t3_g4_g4

0x0003,

0xf2c2,	// (0x0004d794) list_medium_line_x2_t3_g4_g_ParamLimits

0xf2c2,	// (0x0004d794) list_medium_line_x2_t3_g4_g

0x1863,	// (0x0003fd35) list_medium_line_x2_t3_g4_t1_ParamLimits

0x1863,	// (0x0003fd35) list_medium_line_x2_t3_g4_t1

0x1879,	// (0x0003fd4b) list_medium_line_x2_t3_g4_t2_ParamLimits

0x1879,	// (0x0003fd4b) list_medium_line_x2_t3_g4_t2

0x0bb7,	// (0x0003f089) list_medium_line_x2_t3_g4_t3_ParamLimits

0x0bb7,	// (0x0003f089) list_medium_line_x2_t3_g4_t3

0x0002,

0xfd47,	// (0x0004e219) list_medium_line_x2_t3_g4_t_ParamLimits

0xfd47,	// (0x0004e219) list_medium_line_x2_t3_g4_t

0x0fcc,	// (0x0003f49e) list_medium_line_g2_g1_ParamLimits

0x0fcc,	// (0x0003f49e) list_medium_line_g2_g1

0x0fd8,	// (0x0003f4aa) list_medium_line_g2_g2_ParamLimits

0x0fd8,	// (0x0003f4aa) list_medium_line_g2_g2

0x0001,

0xfa00,	// (0x0004ded2) list_medium_line_g2_g_ParamLimits

0xfa00,	// (0x0004ded2) list_medium_line_g2_g

0x1892,	// (0x0003fd64) list_medium_line_g2_t1_ParamLimits

0x1892,	// (0x0003fd64) list_medium_line_g2_t1

0x0fcc,	// (0x0003f49e) list_medium_line_t3_g2_g1_ParamLimits

0x0fcc,	// (0x0003f49e) list_medium_line_t3_g2_g1

0x0fd8,	// (0x0003f4aa) list_medium_line_t3_g2_g2_ParamLimits

0x0fd8,	// (0x0003f4aa) list_medium_line_t3_g2_g2

0x0001,

0xfa00,	// (0x0004ded2) list_medium_line_t3_g2_g_ParamLimits

0xfa00,	// (0x0004ded2) list_medium_line_t3_g2_g

0x18a7,	// (0x0003fd79) list_medium_line_t3_g2_t1_ParamLimits

0x18a7,	// (0x0003fd79) list_medium_line_t3_g2_t1

0x18c1,	// (0x0003fd93) list_medium_line_t3_g2_t2_ParamLimits

0x18c1,	// (0x0003fd93) list_medium_line_t3_g2_t2

0x18d7,	// (0x0003fda9) list_medium_line_t3_g2_t3_ParamLimits

0x18d7,	// (0x0003fda9) list_medium_line_t3_g2_t3

0x0002,

0xfd4e,	// (0x0004e220) list_medium_line_t3_g2_t_ParamLimits

0xfd4e,	// (0x0004e220) list_medium_line_t3_g2_t

0x143b,	// (0x0003f90d) list_medium_line_right_icon_g1

0x18ee,	// (0x0003fdc0) list_medium_line_right_icon_t1

0x0fcc,	// (0x0003f49e) list_medium_line_t2_g1_ParamLimits

0x0fcc,	// (0x0003f49e) list_medium_line_t2_g1

0x18fc,	// (0x0003fdce) list_medium_line_t2_t1_ParamLimits

0x18fc,	// (0x0003fdce) list_medium_line_t2_t1

0x1916,	// (0x0003fde8) list_medium_line_t2_t2_ParamLimits

0x1916,	// (0x0003fde8) list_medium_line_t2_t2

0x0001,

0xfd55,	// (0x0004e227) list_medium_line_t2_t_ParamLimits

0xfd55,	// (0x0004e227) list_medium_line_t2_t

0x0fcc,	// (0x0003f49e) list_medium_line_t3_g1_ParamLimits

0x0fcc,	// (0x0003f49e) list_medium_line_t3_g1

0x192b,	// (0x0003fdfd) list_medium_line_t3_t1_ParamLimits

0x192b,	// (0x0003fdfd) list_medium_line_t3_t1

0x1942,	// (0x0003fe14) list_medium_line_t3_t2_ParamLimits

0x1942,	// (0x0003fe14) list_medium_line_t3_t2

0x1957,	// (0x0003fe29) list_medium_line_t3_t3_ParamLimits

0x1957,	// (0x0003fe29) list_medium_line_t3_t3

0x0002,

0xfd5a,	// (0x0004e22c) list_medium_line_t3_t_ParamLimits

0xfd5a,	// (0x0004e22c) list_medium_line_t3_t

0x0fcc,	// (0x0003f49e) list_medium_line_g3_g1_ParamLimits

0x0fcc,	// (0x0003f49e) list_medium_line_g3_g1

0x1969,	// (0x0003fe3b) list_medium_line_g3_g2_ParamLimits

0x1969,	// (0x0003fe3b) list_medium_line_g3_g2

0x0fd8,	// (0x0003f4aa) list_medium_line_g3_g3_ParamLimits

0x0fd8,	// (0x0003f4aa) list_medium_line_g3_g3

0x0002,

0xfd61,	// (0x0004e233) list_medium_line_g3_g_ParamLimits

0xfd61,	// (0x0004e233) list_medium_line_g3_g

0x1975,	// (0x0003fe47) list_medium_line_g3_t1_ParamLimits

0x1975,	// (0x0003fe47) list_medium_line_g3_t1

0x0fcc,	// (0x0003f49e) list_medium_line_t2_g3_g1_ParamLimits

0x0fcc,	// (0x0003f49e) list_medium_line_t2_g3_g1

0x1969,	// (0x0003fe3b) list_medium_line_t2_g3_g2_ParamLimits

0x1969,	// (0x0003fe3b) list_medium_line_t2_g3_g2

0x0fd8,	// (0x0003f4aa) list_medium_line_t2_g3_g3_ParamLimits

0x0fd8,	// (0x0003f4aa) list_medium_line_t2_g3_g3

0x0002,

0xfd61,	// (0x0004e233) list_medium_line_t2_g3_g_ParamLimits

0xfd61,	// (0x0004e233) list_medium_line_t2_g3_g

0x198a,	// (0x0003fe5c) list_medium_line_t2_g3_t1_ParamLimits

0x198a,	// (0x0003fe5c) list_medium_line_t2_g3_t1

0x19a1,	// (0x0003fe73) list_medium_line_t2_g3_t2_ParamLimits

0x19a1,	// (0x0003fe73) list_medium_line_t2_g3_t2

0x0001,

0xfd68,	// (0x0004e23a) list_medium_line_t2_g3_t_ParamLimits

0xfd68,	// (0x0004e23a) list_medium_line_t2_g3_t

0x0fcc,	// (0x0003f49e) list_medium_line_t3_g3_g1_ParamLimits

0x0fcc,	// (0x0003f49e) list_medium_line_t3_g3_g1

0x1969,	// (0x0003fe3b) list_medium_line_t3_g3_g2_ParamLimits

0x1969,	// (0x0003fe3b) list_medium_line_t3_g3_g2

0x0fd8,	// (0x0003f4aa) list_medium_line_t3_g3_g3_ParamLimits

0x0fd8,	// (0x0003f4aa) list_medium_line_t3_g3_g3

0x0002,

0xfd61,	// (0x0004e233) list_medium_line_t3_g3_g_ParamLimits

0xfd61,	// (0x0004e233) list_medium_line_t3_g3_g

0x19b6,	// (0x0003fe88) list_medium_line_t3_g3_t1_ParamLimits

0x19b6,	// (0x0003fe88) list_medium_line_t3_g3_t1

0x19ca,	// (0x0003fe9c) list_medium_line_t3_g3_t2_ParamLimits

0x19ca,	// (0x0003fe9c) list_medium_line_t3_g3_t2

0x19dc,	// (0x0003feae) list_medium_line_t3_g3_t3_ParamLimits

0x19dc,	// (0x0003feae) list_medium_line_t3_g3_t3

0x0002,

0xfd6d,	// (0x0004e23f) list_medium_line_t3_g3_t_ParamLimits

0xfd6d,	// (0x0004e23f) list_medium_line_t3_g3_t

0x15c5,	// (0x0003fa97) list_medium_line_right_iconx2_g1

0x143b,	// (0x0003f90d) list_medium_line_right_iconx2_g2

0x0001,

0xfd74,	// (0x0004e246) list_medium_line_right_iconx2_g

0x19f0,	// (0x0003fec2) list_medium_line_right_iconx2_t1

0x15c5,	// (0x0003fa97) list_medium_line_t2_right_iconx2_g1

0x143b,	// (0x0003f90d) list_medium_line_t2_right_iconx2_g2

0x0001,

0xfd74,	// (0x0004e246) list_medium_line_t2_right_iconx2_g

0x19fe,	// (0x0003fed0) list_medium_line_t2_right_iconx2_t1

0x1a0e,	// (0x0003fee0) list_medium_line_t2_right_iconx2_t2

0x0001,

0xfd79,	// (0x0004e24b) list_medium_line_t2_right_iconx2_t

0x1a1c,	// (0x0003feee) list_medium_line_x4_t4_t1

0x1a2a,	// (0x0003fefc) list_medium_line_x4_t4_t2

0x1a3a,	// (0x0003ff0c) list_medium_line_x4_t4_t3

0x1a4a,	// (0x0003ff1c) list_medium_line_x4_t4_t4

0x0003,

0xfd7e,	// (0x0004e250) list_medium_line_x4_t4_t

0x93a9,	// (0x0004787b) tport_appsw_pane_ParamLimits

0x93a9,	// (0x0004787b) tport_appsw_pane

0x93b7,	// (0x00047889) tport_contact_pane_ParamLimits

0x93b7,	// (0x00047889) tport_contact_pane

0x93c7,	// (0x00047899) tport_listscroll_pane_ParamLimits

0x93c7,	// (0x00047899) tport_listscroll_pane

0x93d7,	// (0x000478a9) cell_tport_appsw_pane_ParamLimits

0x93d7,	// (0x000478a9) cell_tport_appsw_pane

0xcf17,	// (0x0004b3e9) tport_appsw_pane_g1_ParamLimits

0xcf17,	// (0x0004b3e9) tport_appsw_pane_g1

0xe7e7,	// (0x0004ccb9) tport_contact_pane_g1

0xe7f0,	// (0x0004ccc2) tport_contact_pane_t1

0xe7fe,	// (0x0004ccd0) tport_contact_pane_t2

0x0001,

0xfd87,	// (0x0004e259) tport_contact_pane_t

0xe80c,	// (0x0004ccde) list_tport_pane

0xe815,	// (0x0004cce7) scroll_pane_cp_030

0x940c,	// (0x000478de) cell_tport_appsw_pane_g1

0x941c,	// (0x000478ee) cell_tport_appsw_pane_t1

0x942a,	// (0x000478fc) grid_highlight_pane_cp019

0x9432,	// (0x00047904) list_tport_double_graphic_pane_ParamLimits

0x9432,	// (0x00047904) list_tport_double_graphic_pane

0xa9e1,	// (0x00048eb3) list_highlight_pane_cp023_ParamLimits

0xa9e1,	// (0x00048eb3) list_highlight_pane_cp023

0x943f,	// (0x00047911) list_tport_double_graphic_pane_g1_ParamLimits

0x943f,	// (0x00047911) list_tport_double_graphic_pane_g1

0x944c,	// (0x0004791e) list_tport_double_graphic_pane_t1_ParamLimits

0x944c,	// (0x0004791e) list_tport_double_graphic_pane_t1

0x9461,	// (0x00047933) list_tport_double_graphic_pane_t2_ParamLimits

0x9461,	// (0x00047933) list_tport_double_graphic_pane_t2

0x0001,

0xfd93,	// (0x0004e265) list_tport_double_graphic_pane_t_ParamLimits

0xfd93,	// (0x0004e265) list_tport_double_graphic_pane_t

0xa148,	// (0x0004861a) main_cale_note_pane

0x7868,	// (0x00045d3a) cell_vitu2_function_top_wide_pane_cp01_ParamLimits

0x7868,	// (0x00045d3a) cell_vitu2_function_top_wide_pane_cp01

0x8f9c,	// (0x0004746e) wait_bar_pane_cp05_ParamLimits

0xa9e1,	// (0x00048eb3) listscroll_cmail_pane

0xe826,	// (0x0004ccf8) list_cmail_pane

0x947d,	// (0x0004794f) list_cmail_body_pane

0x9496,	// (0x00047968) list_single_cmail_header_caption_pane

0x94b7,	// (0x00047989) list_single_cmail_header_detail_pane_ParamLimits

0x94b7,	// (0x00047989) list_single_cmail_header_detail_pane

0x94e8,	// (0x000479ba) list_single_cmail_header_caption_pane_t1

0x1a5a,	// (0x0003ff2c) list_single_cmail_header_detail_pane_g1_ParamLimits

0x1a5a,	// (0x0003ff2c) list_single_cmail_header_detail_pane_g1

0x1a72,	// (0x0003ff44) list_single_cmail_header_detail_pane_g2_ParamLimits

0x1a72,	// (0x0003ff44) list_single_cmail_header_detail_pane_g2

0x0002,

0xfd98,	// (0x0004e26a) list_single_cmail_header_detail_pane_g_ParamLimits

0xfd98,	// (0x0004e26a) list_single_cmail_header_detail_pane_g

0x1a7e,	// (0x0003ff50) list_single_cmail_header_detail_pane_t1_ParamLimits

0x1a7e,	// (0x0003ff50) list_single_cmail_header_detail_pane_t1

0x1aea,	// (0x0003ffbc) list_single_cmail_header_editor_pane_bg_ParamLimits

0x1aea,	// (0x0003ffbc) list_single_cmail_header_editor_pane_bg

0xe30f,	// (0x0004c7e1) list_cmail_body_pane_g1

0xe853,	// (0x0004cd25) list_cmail_body_pane_t1

0xd6cc,	// (0x0004bb9e) list_single_cmail_header_editor_pane_bg_g1

0xad15,	// (0x000491e7) list_single_cmail_header_editor_pane_bg_g1_copy1

0xd6dc,	// (0x0004bbae) list_single_cmail_header_editor_pane_bg_g1_copy2

0xd6d4,	// (0x0004bba6) list_single_cmail_header_editor_pane_bg_g1_copy3

0xd911,	// (0x0004bde3) list_single_cmail_header_editor_pane_bg_g1_copy4

0xd6fc,	// (0x0004bbce) list_single_cmail_header_editor_pane_bg_g1_copy4_copy1

0xd6ec,	// (0x0004bbbe) list_single_cmail_header_editor_pane_bg_g1_copy4_copy2

0xd6f4,	// (0x0004bbc6) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3

0xacf5,	// (0x000491c7) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3_copy1

0x94f8,	// (0x000479ca) calenote_gesture_pane_ParamLimits

0x94f8,	// (0x000479ca) calenote_gesture_pane

0x9512,	// (0x000479e4) calenote_window_pane_ParamLimits

0x9512,	// (0x000479e4) calenote_window_pane

0xe861,	// (0x0004cd33) popup_note_window_cp01

0x952a,	// (0x000479fc) calenote_swipe_1_pane_ParamLimits

0x952a,	// (0x000479fc) calenote_swipe_1_pane

0x92fa,	// (0x000477cc) calenote_swipe_2_pane_ParamLimits

0x92fa,	// (0x000477cc) calenote_swipe_2_pane

0xe66e,	// (0x0004cb40) calenote_swipe_1_pane_g1_ParamLimits

0xe66e,	// (0x0004cb40) calenote_swipe_1_pane_g1

0xe67b,	// (0x0004cb4d) calenote_swipe_1_pane_g2_ParamLimits

0xe67b,	// (0x0004cb4d) calenote_swipe_1_pane_g2

0x0001,

0xfcbc,	// (0x0004e18e) calenote_swipe_1_pane_g_ParamLimits

0xfcbc,	// (0x0004e18e) calenote_swipe_1_pane_g

0xe873,	// (0x0004cd45) calenote_swipe_1_pane_t1_ParamLimits

0xe873,	// (0x0004cd45) calenote_swipe_1_pane_t1

0xe66e,	// (0x0004cb40) calenote_swipe_2_pane_g1_ParamLimits

0xe66e,	// (0x0004cb40) calenote_swipe_2_pane_g1

0xe892,	// (0x0004cd64) calenote_swipe_2_pane_g2_ParamLimits

0xe892,	// (0x0004cd64) calenote_swipe_2_pane_g2

0x0001,

0xfda4,	// (0x0004e276) calenote_swipe_2_pane_g_ParamLimits

0xfda4,	// (0x0004e276) calenote_swipe_2_pane_g

0xe89e,	// (0x0004cd70) calenote_swipe_2_pane_t1_ParamLimits

0xe89e,	// (0x0004cd70) calenote_swipe_2_pane_t1

0xa148,	// (0x0004861a) main_mup_navstr_pane

0x659f,	// (0x00044a71) main_mup3_pane_t7_ParamLimits

0x659f,	// (0x00044a71) main_mup3_pane_t7

0x6fa2,	// (0x00045474) main_mp4_pane_g6_ParamLimits

0x6fa2,	// (0x00045474) main_mp4_pane_g6

0x7312,	// (0x000457e4) main_image3_pane_t4_ParamLimits

0x7312,	// (0x000457e4) main_image3_pane_t4

0x953d,	// (0x00047a0f) popup_navstr_preview_pane_ParamLimits

0x953d,	// (0x00047a0f) popup_navstr_preview_pane

0x9549,	// (0x00047a1b) scroll_navstr_pane_ParamLimits

0x9549,	// (0x00047a1b) scroll_navstr_pane

0xa148,	// (0x0004861a) bg_popup_preview_window_pane_cp04

0xe8c5,	// (0x0004cd97) popup_navstr_preview_pane_t1

0x9555,	// (0x00047a27) scroll_navstr_pane_g1_ParamLimits

0x9555,	// (0x00047a27) scroll_navstr_pane_g1

0x9562,	// (0x00047a34) scroll_navstr_pane_t1_ParamLimits

0x9562,	// (0x00047a34) scroll_navstr_pane_t1

0xe86a,	// (0x0004cd3c) bg_button_pane_cp014

0xe86a,	// (0x0004cd3c) bg_button_pane_cp030

0x139b,	// (0x0003f86d) list_double_fisheye_pane_g4_ParamLimits

0x139b,	// (0x0003f86d) list_double_fisheye_pane_g4

0x13a7,	// (0x0003f879) list_double_fisheye_pane_g5_ParamLimits

0x13a7,	// (0x0003f879) list_double_fisheye_pane_g5

0xe82e,	// (0x0004cd00) sp_fs_scroll_pane_cp03

0xccba,	// (0x0004b18c) main_sp_fs_ctrlbar_pane_g1_ParamLimits

0xe746,	// (0x0004cc18) main_sp_fs_ctrlbar_pane_g2_ParamLimits

0xfcd9,	// (0x0004e1ab) main_sp_fs_ctrlbar_pane_g_ParamLimits

0xe752,	// (0x0004cc24) main_sp_fs_ctrlbar_pane_t1_ParamLimits

0x9473,	// (0x00047945) sp_fs_scroll_pane_cp02

0xaa18,	// (0x00048eea) popup_sp_fs_calendar_preview_list_single_pane_ParamLimits

0xaa18,	// (0x00048eea) popup_sp_fs_calendar_preview_list_single_pane

0xa148,	// (0x0004861a) main_cam6_pano_pane

0xa9e1,	// (0x00048eb3) main_mup3_pane_ParamLimits

0xa148,	// (0x0004861a) main_phacti_pane

0x8e6f,	// (0x00047341) bg_button_pane_cp11

0x8e87,	// (0x00047359) main_mobtv_info_pane_g2_ParamLimits

0x8e87,	// (0x00047359) main_mobtv_info_pane_g2

0x0001,

0xfc39,	// (0x0004e10b) main_mobtv_info_pane_g_ParamLimits

0xfc39,	// (0x0004e10b) main_mobtv_info_pane_g

0x9039,	// (0x0004750b) sc_clock_pane_t5_ParamLimits

0x9039,	// (0x0004750b) sc_clock_pane_t5

0x90e8,	// (0x000475ba) main_radioblah_pane_g1_ParamLimits

0xe5ba,	// (0x0004ca8c) main_radioblah_pane_t3_ParamLimits

0xe5ba,	// (0x0004ca8c) main_radioblah_pane_t3

0xe5d2,	// (0x0004caa4) main_radioblah_pane_t4_ParamLimits

0xe5d2,	// (0x0004caa4) main_radioblah_pane_t4

0x9106,	// (0x000475d8) main_radioblah_text_pane_ParamLimits

0x9106,	// (0x000475d8) main_radioblah_text_pane

0x9113,	// (0x000475e5) main_radioblah_info_pane_g1_ParamLimits

0x91ac,	// (0x0004767e) main_radioblah_info_pane_t4_ParamLimits

0x91ac,	// (0x0004767e) main_radioblah_info_pane_t4

0xa9e1,	// (0x00048eb3) main_sp_fs_calendar_pane

0x9574,	// (0x00047a46) main_phacti_pane_g1

0x957c,	// (0x00047a4e) phacti_note_pane_ParamLimits

0x957c,	// (0x00047a4e) phacti_note_pane

0xe8dc,	// (0x0004cdae) phacti_term_pane_ParamLimits

0xe8dc,	// (0x0004cdae) phacti_term_pane

0xe8f1,	// (0x0004cdc3) phacti_note_pane_t1_ParamLimits

0xe8f1,	// (0x0004cdc3) phacti_note_pane_t1

0x1b01,	// (0x0003ffd3) phacti_term_pane_g1

0x1b09,	// (0x0003ffdb) phacti_term_pane_t1_ParamLimits

0x1b09,	// (0x0003ffdb) phacti_term_pane_t1

0xe908,	// (0x0004cdda) popup_sp_fs_calendar_preview_list_single_pane_g1

0xe910,	// (0x0004cde2) popup_sp_fs_calendar_preview_list_single_pane_g2

0x0001,

0xfdae,	// (0x0004e280) popup_sp_fs_calendar_preview_list_single_pane_g

0xe918,	// (0x0004cdea) popup_sp_fs_calendar_preview_list_single_pane_t1_ParamLimits

0xe918,	// (0x0004cdea) popup_sp_fs_calendar_preview_list_single_pane_t1

0xe92e,	// (0x0004ce00) aid_popup_sp_fs_bg_corner_pane

0xcc6e,	// (0x0004b140) popup_sp_fs_calendar_preview_bg_pane_g1

0xa148,	// (0x0004861a) popup_sp_fs_calendar_preview_bg_pane

0xe936,	// (0x0004ce08) popup_sp_fs_calendar_preview_list_pane

0xc81d,	// (0x0004acef) bg_main_sp_fs_cale_pane_ParamLimits

0xc81d,	// (0x0004acef) bg_main_sp_fs_cale_pane

0x1b3c,	// (0x0004000e) listscroll_cale_mrui_pane_ParamLimits

0x1b3c,	// (0x0004000e) listscroll_cale_mrui_pane

0x1b51,	// (0x00040023) listscroll_sp_fs_schedule_track_pane

0x1b5a,	// (0x0004002c) main_sp_fs_ctrlbar_pane_cp01_ParamLimits

0x1b5a,	// (0x0004002c) main_sp_fs_ctrlbar_pane_cp01

0xe93e,	// (0x0004ce10) main_sp_fs_ribbon_pane

0x1b6d,	// (0x0004003f) popup_sp_fs_cale_preview_window

0x95db,	// (0x00047aad) list_single_sp_fs_schedule_track_pane_ParamLimits

0x95db,	// (0x00047aad) list_single_sp_fs_schedule_track_pane

0x218d,	// (0x0004065f) bg_sp_fs_highlight_list_pane_cp03_ParamLimits

0x218d,	// (0x0004065f) bg_sp_fs_highlight_list_pane_cp03

0x95f0,	// (0x00047ac2) list_single_sp_fs_schedule_track_pane_g1_ParamLimits

0x95f0,	// (0x00047ac2) list_single_sp_fs_schedule_track_pane_g1

0x95fc,	// (0x00047ace) list_single_sp_fs_schedule_track_pane_g2_ParamLimits

0x95fc,	// (0x00047ace) list_single_sp_fs_schedule_track_pane_g2

0x0001,

0xfdb3,	// (0x0004e285) list_single_sp_fs_schedule_track_pane_g_ParamLimits

0xfdb3,	// (0x0004e285) list_single_sp_fs_schedule_track_pane_g

0x9608,	// (0x00047ada) list_single_sp_fs_schedule_track_pane_t1_ParamLimits

0x9608,	// (0x00047ada) list_single_sp_fs_schedule_track_pane_t1

0x9626,	// (0x00047af8) sp_fs_schedule_track_pane_ParamLimits

0x9626,	// (0x00047af8) sp_fs_schedule_track_pane

0xe946,	// (0x0004ce18) sp_fs_schedule_track_pane_g1

0xe94e,	// (0x0004ce20) sp_fs_schedule_track_pane_g2

0xe956,	// (0x0004ce28) sp_fs_schedule_track_pane_g3

0xe95e,	// (0x0004ce30) sp_fs_schedule_track_pane_g4

0xe966,	// (0x0004ce38) sp_fs_schedule_track_pane_g5

0x0004,

0xfdb8,	// (0x0004e28a) sp_fs_schedule_track_pane_g

0xd6cc,	// (0x0004bb9e) bg_sp_fs_schedule_viewer_highlight_g1

0xad15,	// (0x000491e7) bg_sp_fs_schedule_viewer_highlight_g2

0xd6d4,	// (0x0004bba6) bg_sp_fs_schedule_viewer_highlight_g3

0xd6dc,	// (0x0004bbae) bg_sp_fs_schedule_viewer_highlight_g4

0xd911,	// (0x0004bde3) bg_sp_fs_schedule_viewer_highlight_g5

0xd6ec,	// (0x0004bbbe) bg_sp_fs_schedule_viewer_highlight_g6

0xd6f4,	// (0x0004bbc6) bg_sp_fs_schedule_viewer_highlight_g7

0xd6fc,	// (0x0004bbce) bg_sp_fs_schedule_viewer_highlight_g8

0xacf5,	// (0x000491c7) bg_sp_fs_schedule_viewer_highlight_g9

0x0008,

0xfdc3,	// (0x0004e295) bg_sp_fs_schedule_viewer_highlight_g

0xa148,	// (0x0004861a) bg_main_sp_fs_ribbon_pane

0x9638,	// (0x00047b0a) main_sp_fs_ribbon_pane_g1

0xe96e,	// (0x0004ce40) main_sp_fs_ribbon_pane_t1

0x9641,	// (0x00047b13) main_sp_fs_ribbon_pane_t2

0xe97d,	// (0x0004ce4f) main_sp_fs_ribbon_pane_t3

0x0002,

0xfdd6,	// (0x0004e2a8) main_sp_fs_ribbon_pane_t

0xe98c,	// (0x0004ce5e) main_sp_fs_ribbon_scheduler_pane

0xe994,	// (0x0004ce66) bg_main_sp_fs_ribbon_pane_g1

0xe99d,	// (0x0004ce6f) bg_main_sp_fs_ribbon_pane_g2

0xe9a6,	// (0x0004ce78) bg_main_sp_fs_ribbon_pane_g3

0x0002,

0xfddd,	// (0x0004e2af) bg_main_sp_fs_ribbon_pane_g

0xe9ae,	// (0x0004ce80) main_sp_fs_ribbon_scheduler_pane_g1

0xe9b7,	// (0x0004ce89) main_sp_fs_ribbon_scheduler_pane_g2

0xe9c0,	// (0x0004ce92) main_sp_fs_ribbon_scheduler_pane_g3

0x0002,

0xfde4,	// (0x0004e2b6) main_sp_fs_ribbon_scheduler_pane_g

0xe9c9,	// (0x0004ce9b) list_cale_mrui_pane

0x9650,	// (0x00047b22) sp_fs_scroll_pane_cp07_ParamLimits

0x9650,	// (0x00047b22) sp_fs_scroll_pane_cp07

0x966c,	// (0x00047b3e) bg_sp_fs_schedule_viewer_highlight_ParamLimits

0x966c,	// (0x00047b3e) bg_sp_fs_schedule_viewer_highlight

0xe9d6,	// (0x0004cea8) list_single_sp_fs_schedule_track_pane_cp01

0xe9de,	// (0x0004ceb0) list_sp_fs_schedule_track_pane

0xe9e6,	// (0x0004ceb8) sp_fs_scroll_pane_cp06_ParamLimits

0xe9e6,	// (0x0004ceb8) sp_fs_scroll_pane_cp06

0xcc6e,	// (0x0004b140) bgmain_sp_fs_calendar_pane_g1

0x1b7f,	// (0x00040051) list_single_cale_mrui_pane_ParamLimits

0x1b7f,	// (0x00040051) list_single_cale_mrui_pane

0x1b94,	// (0x00040066) list_single_cale_mrui_row_pane_ParamLimits

0x1b94,	// (0x00040066) list_single_cale_mrui_row_pane

0x1baa,	// (0x0004007c) list_single_cale_mrui_row_pane_g1_ParamLimits

0x1baa,	// (0x0004007c) list_single_cale_mrui_row_pane_g1

0x1be2,	// (0x000400b4) list_single_cale_mrui_row_pane_t1_ParamLimits

0x1be2,	// (0x000400b4) list_single_cale_mrui_row_pane_t1

0x1bf4,	// (0x000400c6) list_single_cale_mrui_row_pane_t2_ParamLimits

0x1bf4,	// (0x000400c6) list_single_cale_mrui_row_pane_t2

0x1c5a,	// (0x0004012c) list_single_cale_mrui_row_pane_t3_ParamLimits

0x1c5a,	// (0x0004012c) list_single_cale_mrui_row_pane_t3

0x1c89,	// (0x0004015b) list_single_cale_mrui_row_pane_t4_ParamLimits

0x1c89,	// (0x0004015b) list_single_cale_mrui_row_pane_t4

0x0003,

0xfdf2,	// (0x0004e2c4) list_single_cale_mrui_row_pane_t_ParamLimits

0xfdf2,	// (0x0004e2c4) list_single_cale_mrui_row_pane_t

0x1cb8,	// (0x0004018a) list_single_cmail_header_editor_pane_bg_cp01_ParamLimits

0x1cb8,	// (0x0004018a) list_single_cmail_header_editor_pane_bg_cp01

0x1cdc,	// (0x000401ae) list_single_cmail_header_editor_pane_bg_cp02_ParamLimits

0x1cdc,	// (0x000401ae) list_single_cmail_header_editor_pane_bg_cp02

0x9679,	// (0x00047b4b) main_radioblah_text_pane_t1_ParamLimits

0x9679,	// (0x00047b4b) main_radioblah_text_pane_t1

0xea05,	// (0x0004ced7) cam6_indi_pane_cp01

0xea0d,	// (0x0004cedf) cam6_mode_pane_cp01

0xea15,	// (0x0004cee7) cam6_pano_pane

0xea1e,	// (0x0004cef0) cam6_zoom_pane_cp01

0xea28,	// (0x0004cefa) cam6_pano_image_pane

0xea31,	// (0x0004cf03) cam6_pano_pane_g1

0xe30f,	// (0x0004c7e1) cam6_pano_pane_g2

0xea3a,	// (0x0004cf0c) cam6_pano_pane_g3

0xea43,	// (0x0004cf15) cam6_pano_pane_g4

0xd21c,	// (0x0004b6ee) cam6_pano_pane_g5

0xea4c,	// (0x0004cf1e) cam6_pano_pane_g6

0xea54,	// (0x0004cf26) cam6_pano_pane_g7

0xea5c,	// (0x0004cf2e) cam6_pano_pane_g8

0xea65,	// (0x0004cf37) cam6_pano_pane_g9

0x0008,

0xfdfb,	// (0x0004e2cd) cam6_pano_pane_g

0xa148,	// (0x0004861a) main_browser_tag_pane

0xe8bd,	// (0x0004cd8f) grid_navstr_albumart_pane

0xea70,	// (0x0004cf42) cell_navstr_albumart_pane_ParamLimits

0xea70,	// (0x0004cf42) cell_navstr_albumart_pane

0xea8f,	// (0x0004cf61) cell_navstr_albumart_pane_g1

0xc62a,	// (0x0004aafc) cell_navstr_albumart_pane_g2

0xc63a,	// (0x0004ab0c) cell_navstr_albumart_pane_g3

0xc632,	// (0x0004ab04) cell_navstr_albumart_pane_g4

0x0003,

0xfe0e,	// (0x0004e2e0) cell_navstr_albumart_pane_g

0x9693,	// (0x00047b65) bt_list_pane_ParamLimits

0x9693,	// (0x00047b65) bt_list_pane

0x96ac,	// (0x00047b7e) bt_list_pane_t1

0x96bb,	// (0x00047b8d) bt_list_pane_t2

0x0001,

0xfe17,	// (0x0004e2e9) bt_list_pane_t

0xa148,	// (0x0004861a) main_cale_prevew_pane

0x96ca,	// (0x00047b9c) popup_cale_preview_window_ParamLimits

0x96ca,	// (0x00047b9c) popup_cale_preview_window

0xa9e1,	// (0x00048eb3) bg_popup_preview_window_pane_cp05_ParamLimits

0xa9e1,	// (0x00048eb3) bg_popup_preview_window_pane_cp05

0xea97,	// (0x0004cf69) list_cale_preview_pane_ParamLimits

0xea97,	// (0x0004cf69) list_cale_preview_pane

0x96e5,	// (0x00047bb7) list_double_cale_preview_pane_ParamLimits

0x96e5,	// (0x00047bb7) list_double_cale_preview_pane

0x96f9,	// (0x00047bcb) list_single_cale_preview_pane_ParamLimits

0x96f9,	// (0x00047bcb) list_single_cale_preview_pane

0x9711,	// (0x00047be3) list_single_cale_preview_pane_g1

0x9719,	// (0x00047beb) list_single_cale_preview_pane_t1_ParamLimits

0x9719,	// (0x00047beb) list_single_cale_preview_pane_t1

0x972e,	// (0x00047c00) list_double_cale_preview_pane_g1

0x9736,	// (0x00047c08) list_double_cale_preview_pane_t1_ParamLimits

0x9736,	// (0x00047c08) list_double_cale_preview_pane_t1

0x974b,	// (0x00047c1d) list_double_cale_preview_pane_t2_ParamLimits

0x974b,	// (0x00047c1d) list_double_cale_preview_pane_t2

0x0001,

0xfe1c,	// (0x0004e2ee) list_double_cale_preview_pane_t_ParamLimits

0xfe1c,	// (0x0004e2ee) list_double_cale_preview_pane_t

0xa148,	// (0x0004861a) main_ezdial_pane

0xa9e1,	// (0x00048eb3) main_sp_fs_email_pane_ParamLimits

0x9314,	// (0x000477e6) cmail_ddmenu_btn01_pane_ParamLimits

0x9314,	// (0x000477e6) cmail_ddmenu_btn01_pane

0x9331,	// (0x00047803) cmail_ddmenu_btn02_pane_ParamLimits

0x9331,	// (0x00047803) cmail_ddmenu_btn02_pane

0x934f,	// (0x00047821) cmail_ddmenu_btn03_pane_ParamLimits

0x934f,	// (0x00047821) cmail_ddmenu_btn03_pane

0x1461,	// (0x0003f933) main_sp_fs_ctrlbar_pane_ParamLimits

0x147b,	// (0x0003f94d) main_sp_fs_listscroll_pane_te_cp01_ParamLimits

0x947d,	// (0x0004794f) list_cmail_body_pane_ParamLimits

0xe83d,	// (0x0004cd0f) bg_button_pane_cp12

0xe846,	// (0x0004cd18) list_single_cmail_header_detail_pane_g3_ParamLimits

0xe846,	// (0x0004cd18) list_single_cmail_header_detail_pane_g3

0x1ac6,	// (0x0003ff98) list_single_cmail_header_detail_pane_t2_ParamLimits

0x1ac6,	// (0x0003ff98) list_single_cmail_header_detail_pane_t2

0x0001,

0xfd9f,	// (0x0004e271) list_single_cmail_header_detail_pane_t_ParamLimits

0xfd9f,	// (0x0004e271) list_single_cmail_header_detail_pane_t

0x1b1e,	// (0x0003fff0) phacti_term_pane_t2_ParamLimits

0x1b1e,	// (0x0003fff0) phacti_term_pane_t2

0x0001,

0xfda9,	// (0x0004e27b) phacti_term_pane_t_ParamLimits

0xfda9,	// (0x0004e27b) phacti_term_pane_t

0xeaa3,	// (0x0004cf75) aid_size_list_single_double

0x9763,	// (0x00047c35) popup_ezdial_listscroll_window

0x9785,	// (0x00047c57) popup_number_entry_window_cp01

0xaab8,	// (0x00048f8a) bg_popup_call_pane_cp09

0xeaaf,	// (0x0004cf81) ezdial_list_pane

0xeab7,	// (0x0004cf89) scroll_pane_cp23

0xca4d,	// (0x0004af1f) bg_button_pane_cp028_ParamLimits

0xca4d,	// (0x0004af1f) bg_button_pane_cp028

0x9793,	// (0x00047c65) cmail_ddmenu_btn01_pane_g1_ParamLimits

0x9793,	// (0x00047c65) cmail_ddmenu_btn01_pane_g1

0x97a5,	// (0x00047c77) cmail_ddmenu_btn01_pane_g2_ParamLimits

0x97a5,	// (0x00047c77) cmail_ddmenu_btn01_pane_g2

0x0001,

0xfe21,	// (0x0004e2f3) cmail_ddmenu_btn01_pane_g_ParamLimits

0xfe21,	// (0x0004e2f3) cmail_ddmenu_btn01_pane_g

0xeabf,	// (0x0004cf91) cmail_ddmenu_btn01_pane_t1_ParamLimits

0xeabf,	// (0x0004cf91) cmail_ddmenu_btn01_pane_t1

0xc81d,	// (0x0004acef) bg_button_pane_cp029_ParamLimits

0xc81d,	// (0x0004acef) bg_button_pane_cp029

0x97b1,	// (0x00047c83) cmail_ddmenu_btn02_pane_g1_ParamLimits

0x97b1,	// (0x00047c83) cmail_ddmenu_btn02_pane_g1

0x97c9,	// (0x00047c9b) cmail_ddmenu_btn02_pane_t1_ParamLimits

0x97c9,	// (0x00047c9b) cmail_ddmenu_btn02_pane_t1

0x218d,	// (0x0004065f) bg_button_pane_cp031_ParamLimits

0x218d,	// (0x0004065f) bg_button_pane_cp031

0x97b1,	// (0x00047c83) cmail_ddmenu_btn03_pane_g1_ParamLimits

0x97b1,	// (0x00047c83) cmail_ddmenu_btn03_pane_g1

0x97c9,	// (0x00047c9b) cmail_ddmenu_btn03_pane_t1_ParamLimits

0x97c9,	// (0x00047c9b) cmail_ddmenu_btn03_pane_t1

0x71bb,	// (0x0004568d) cell_dialer2_keypad_pane_t1_ParamLimits

0x71d5,	// (0x000456a7) cell_dialer2_keypad_pane_t1_copy1_ParamLimits

0x71d5,	// (0x000456a7) cell_dialer2_keypad_pane_t1_copy1

0x8ce0,	// (0x000471b2) ncimui_group_button_pane

0xa9e1,	// (0x00048eb3) main_sp_fs_calendar_pane_ParamLimits

0x9496,	// (0x00047968) list_single_cmail_header_caption_pane_ParamLimits

0x1b33,	// (0x00040005) aid_recal_txt_sm_pane

0xa148,	// (0x0004861a) mian_recal_day_pane

0x1b6d,	// (0x0004003f) popup_sp_fs_cale_preview_window_ParamLimits

0xead5,	// (0x0004cfa7) list_recal_day_pane

0x1d14,	// (0x000401e6) list_single_recal_day_pane_ParamLimits

0x1d14,	// (0x000401e6) list_single_recal_day_pane

0xeafc,	// (0x0004cfce) list_single_recal_day_pane_g1_ParamLimits

0xeafc,	// (0x0004cfce) list_single_recal_day_pane_g1

0x1d26,	// (0x000401f8) list_single_recal_day_pane_g2_ParamLimits

0x1d26,	// (0x000401f8) list_single_recal_day_pane_g2

0x1d32,	// (0x00040204) list_single_recal_day_pane_g3_ParamLimits

0x1d32,	// (0x00040204) list_single_recal_day_pane_g3

0x1d3e,	// (0x00040210) list_single_recal_day_pane_g4_ParamLimits

0x1d3e,	// (0x00040210) list_single_recal_day_pane_g4

0x1d4c,	// (0x0004021e) list_single_recal_day_pane_g5_ParamLimits

0x1d4c,	// (0x0004021e) list_single_recal_day_pane_g5

0x1d62,	// (0x00040234) list_single_recal_day_pane_g6_ParamLimits

0x1d62,	// (0x00040234) list_single_recal_day_pane_g6

0x0004,

0xfe30,	// (0x0004e302) list_single_recal_day_pane_g_ParamLimits

0xfe30,	// (0x0004e302) list_single_recal_day_pane_g

0x1d76,	// (0x00040248) list_single_recal_day_pane_t1

0x1d88,	// (0x0004025a) list_single_recal_day_pane_t2

0x0001,

0xfe3b,	// (0x0004e30d) list_single_recal_day_pane_t

0x97ed,	// (0x00047cbf) ncimui_query_button_pane_ParamLimits

0x97ed,	// (0x00047cbf) ncimui_query_button_pane

0x97fd,	// (0x00047ccf) ncimui_query_button_pane_t1_ParamLimits

0x97fd,	// (0x00047ccf) ncimui_query_button_pane_t1

0xeb08,	// (0x0004cfda) ncimui_query_button_pane_t2_ParamLimits

0xeb08,	// (0x0004cfda) ncimui_query_button_pane_t2

0x0001,

0xfe40,	// (0x0004e312) ncimui_query_button_pane_t_ParamLimits

0xfe40,	// (0x0004e312) ncimui_query_button_pane_t

0x9810,	// (0x00047ce2) query_button_pane_ParamLimits

0x9810,	// (0x00047ce2) query_button_pane

0xa148,	// (0x0004861a) bg_button_pane_cp0028

0xeb1b,	// (0x0004cfed) query_button_pane_t1

0x55e6,	// (0x00043ab8) main_tport_pane_ParamLimits

0x937f,	// (0x00047851) bg_popup_window_pane_cp01_ParamLimits

0x937f,	// (0x00047851) bg_popup_window_pane_cp01

0x938d,	// (0x0004785f) heading_pane_cp08_ParamLimits

0x938d,	// (0x0004785f) heading_pane_cp08

0x939b,	// (0x0004786d) heading_pane_cp07_ParamLimits

0x939b,	// (0x0004786d) heading_pane_cp07

0x940c,	// (0x000478de) cell_tport_appsw_pane_g2

0x0002,

0xfd8c,	// (0x0004e25e) cell_tport_appsw_pane_g

0x0d88,	// (0x0003f25a) input_candi_list_open_g1

0xaec9,	// (0x0004939b) list_cale_time_pane_g6_ParamLimits

0xaec9,	// (0x0004939b) list_cale_time_pane_g6

0x6071,	// (0x00044543) aid_size_touch_calib_1_ParamLimits

0x6071,	// (0x00044543) aid_size_touch_calib_1

0x607d,	// (0x0004454f) aid_size_touch_calib_2_ParamLimits

0x607d,	// (0x0004454f) aid_size_touch_calib_2

0x608b,	// (0x0004455d) aid_size_touch_calib_3_ParamLimits

0x608b,	// (0x0004455d) aid_size_touch_calib_3

0x609b,	// (0x0004456d) aid_size_touch_calib_4_ParamLimits

0x609b,	// (0x0004456d) aid_size_touch_calib_4

0x60a9,	// (0x0004457b) main_touch_calib_button_group_pane_ParamLimits

0x60a9,	// (0x0004457b) main_touch_calib_button_group_pane

0x60b7,	// (0x00044589) main_touch_calib_pane_g1_ParamLimits

0x60c3,	// (0x00044595) main_touch_calib_pane_g2_ParamLimits

0x60cf,	// (0x000445a1) main_touch_calib_pane_g3_ParamLimits

0x60db,	// (0x000445ad) main_touch_calib_pane_g4_ParamLimits

0xf751,	// (0x0004dc23) main_touch_calib_pane_g_ParamLimits

0x60e7,	// (0x000445b9) main_touch_calib_pane_t1_ParamLimits

0x60fe,	// (0x000445d0) main_touch_calib_pane_t2_ParamLimits

0x6117,	// (0x000445e9) main_touch_calib_pane_t3_ParamLimits

0x612d,	// (0x000445ff) main_touch_calib_pane_t4_ParamLimits

0x6143,	// (0x00044615) main_touch_calib_pane_t5_ParamLimits

0xf75a,	// (0x0004dc2c) main_touch_calib_pane_t_ParamLimits

0xcfb2,	// (0x0004b484) list_single_fp_cale_pane_g3_ParamLimits

0xcfb2,	// (0x0004b484) list_single_fp_cale_pane_g3

0xa9e1,	// (0x00048eb3) bg_button_pane_cp012_ParamLimits

0xa9e1,	// (0x00048eb3) bg_vkb2_func_pane_cp03_ParamLimits

0x7fbd,	// (0x0004648f) cell_vitu2_function_top_pane_g1_ParamLimits

0xa9e1,	// (0x00048eb3) bg_vkb2_func_pane_cp04_ParamLimits

0x8c66,	// (0x00047138) main_ncimui_button_group_pane_ParamLimits

0x8c66,	// (0x00047138) main_ncimui_button_group_pane

0x8cce,	// (0x000471a0) main_ncimui_pane_t3_ParamLimits

0x8cce,	// (0x000471a0) main_ncimui_pane_t3

0xe8d3,	// (0x0004cda5) phacti_button_group_pane

0xeaa3,	// (0x0004cf75) aid_size_list_single_double_ParamLimits

0x9763,	// (0x00047c35) popup_ezdial_listscroll_window_ParamLimits

0x9785,	// (0x00047c57) popup_number_entry_window_cp01_ParamLimits

0x981d,	// (0x00047cef) phacti_button_pane_ParamLimits

0x981d,	// (0x00047cef) phacti_button_pane

0xa148,	// (0x0004861a) bg_button_pane_cp14

0xeb29,	// (0x0004cffb) phacti_button_pane_t1

0x982e,	// (0x00047d00) main_touch_calib_button_pane_ParamLimits

0x982e,	// (0x00047d00) main_touch_calib_button_pane

0xa8d4,	// (0x00048da6) bg_button_pane_cp18_ParamLimits

0xa8d4,	// (0x00048da6) bg_button_pane_cp18

0xeb37,	// (0x0004d009) main_touch_calib_button_pane_t1_ParamLimits

0xeb37,	// (0x0004d009) main_touch_calib_button_pane_t1

0xeb4d,	// (0x0004d01f) main_touch_calib_button_pane_t2_ParamLimits

0xeb4d,	// (0x0004d01f) main_touch_calib_button_pane_t2

0x0001,

0xfe45,	// (0x0004e317) main_touch_calib_button_pane_t_ParamLimits

0xfe45,	// (0x0004e317) main_touch_calib_button_pane_t

0xa148,	// (0x0004861a) cell_ncimui_button_pane

0xa148,	// (0x0004861a) bg_button_pane_cp032

0xeb6b,	// (0x0004d03d) cell_ncimui_button_pane_t1

0x7231,	// (0x00045703) image3_infobar_pane_ParamLimits

0x7231,	// (0x00045703) image3_infobar_pane

0x905b,	// (0x0004752d) fs_bigclock_status_pane_ParamLimits

0x905b,	// (0x0004752d) fs_bigclock_status_pane

0x9068,	// (0x0004753a) main_fs_bigclock_clock_pane_ParamLimits

0x9068,	// (0x0004753a) main_fs_bigclock_clock_pane

0x9084,	// (0x00047556) main_fs_bigclock_indi_pane_ParamLimits

0x9084,	// (0x00047556) main_fs_bigclock_indi_pane

0x90b6,	// (0x00047588) main_fs_bigclock_swipe_pane_ParamLimits

0x90b6,	// (0x00047588) main_fs_bigclock_swipe_pane

0xa148,	// (0x0004861a) main_fs_clock_dumped_data

0xe41c,	// (0x0004c8ee) list_single_fs_bigclock_indicator_pane_g1_ParamLimits

0xe41c,	// (0x0004c8ee) list_single_fs_bigclock_indicator_pane_g1

0xe446,	// (0x0004c918) list_single_fs_bigclock_indicator_pane_g2_ParamLimits

0xe446,	// (0x0004c918) list_single_fs_bigclock_indicator_pane_g2

0xe460,	// (0x0004c932) list_single_fs_bigclock_indicator_pane_g3_ParamLimits

0xe460,	// (0x0004c932) list_single_fs_bigclock_indicator_pane_g3

0xe47a,	// (0x0004c94c) list_single_fs_bigclock_indicator_pane_g4_ParamLimits

0xe47a,	// (0x0004c94c) list_single_fs_bigclock_indicator_pane_g4

0x0004,

0xfc6d,	// (0x0004e13f) list_single_fs_bigclock_indicator_pane_g_ParamLimits

0xfc6d,	// (0x0004e13f) list_single_fs_bigclock_indicator_pane_g

0xe4a5,	// (0x0004c977) list_single_fs_bigclock_indicator_pane_t1_ParamLimits

0xe4a5,	// (0x0004c977) list_single_fs_bigclock_indicator_pane_t1

0xe4cd,	// (0x0004c99f) list_single_fs_bigclock_indicator_pane_t2_ParamLimits

0xe4cd,	// (0x0004c99f) list_single_fs_bigclock_indicator_pane_t2

0xe4f5,	// (0x0004c9c7) list_single_fs_bigclock_indicator_pane_t3_ParamLimits

0xe4f5,	// (0x0004c9c7) list_single_fs_bigclock_indicator_pane_t3

0xe51d,	// (0x0004c9ef) list_single_fs_bigclock_indicator_pane_t4_ParamLimits

0xe51d,	// (0x0004c9ef) list_single_fs_bigclock_indicator_pane_t4

0x0004,

0xfc78,	// (0x0004e14a) list_single_fs_bigclock_indicator_pane_t_ParamLimits

0xfc78,	// (0x0004e14a) list_single_fs_bigclock_indicator_pane_t

0xeb79,	// (0x0004d04b) image3_infobar_fav_pane_ParamLimits

0xeb79,	// (0x0004d04b) image3_infobar_fav_pane

0xeb89,	// (0x0004d05b) image3_infobar_loc_pane_ParamLimits

0xeb89,	// (0x0004d05b) image3_infobar_loc_pane

0xeb9f,	// (0x0004d071) image3_infobar_time_pane_ParamLimits

0xeb9f,	// (0x0004d071) image3_infobar_time_pane

0xcc6e,	// (0x0004b140) image3_infobar_time_pane_g1

0xebaf,	// (0x0004d081) image3_infobar_time_pane_t1

0xcc6e,	// (0x0004b140) image3_infobar_loc_pane_g1

0xebbd,	// (0x0004d08f) image3_infobar_loc_pane_g2

0x0001,

0xfe4a,	// (0x0004e31c) image3_infobar_loc_pane_g

0xebc5,	// (0x0004d097) image3_infobar_loc_pane_t1

0xcc6e,	// (0x0004b140) image3_infobar_fav_pane_g1

0xebd3,	// (0x0004d0a5) image3_infobar_fav_pane_g2

0x0001,

0xfe4f,	// (0x0004e321) image3_infobar_fav_pane_g

0xebdb,	// (0x0004d0ad) fs_bigclock_status_battery_pane

0xebe4,	// (0x0004d0b6) fs_bigclock_status_signal_pane

0xebed,	// (0x0004d0bf) fs_bigclock_status_title_pane

0xebf6,	// (0x0004d0c8) fs_bigclock_status_signal_pane_g1

0xebff,	// (0x0004d0d1) fs_bigclock_status_signal_pane_g2

0x0001,

0xfe54,	// (0x0004e326) fs_bigclock_status_signal_pane_g

0xec07,	// (0x0004d0d9) fs_bigclock_status_battery_pane_g1

0xec10,	// (0x0004d0e2) fs_bigclock_status_battery_pane_g2

0x0001,

0xfe59,	// (0x0004e32b) fs_bigclock_status_battery_pane_g

0xec18,	// (0x0004d0ea) fs_bigclock_status_title_pane_t1

0xcc6e,	// (0x0004b140) main_fs_bigclock_clock_pane_g1

0xec26,	// (0x0004d0f8) main_fs_bigclock_clock_pane_g2

0xec31,	// (0x0004d103) main_fs_bigclock_clock_pane_g3

0xec31,	// (0x0004d103) main_fs_bigclock_clock_pane_g4

0x0003,

0xfe5e,	// (0x0004e330) main_fs_bigclock_clock_pane_g

0xec3d,	// (0x0004d10f) main_fs_bigclock_clock_pane_t1

0x983e,	// (0x00047d10) main_fs_bigclock_clock_pane_t2

0x0001,

0xfe67,	// (0x0004e339) main_fs_bigclock_clock_pane_t

0x984d,	// (0x00047d1f) list_single_fs_bigclock_indicator_pane_ParamLimits

0x984d,	// (0x00047d1f) list_single_fs_bigclock_indicator_pane

0x985e,	// (0x00047d30) list_single_fs_bigclock_pane_ParamLimits

0x985e,	// (0x00047d30) list_single_fs_bigclock_pane

0xec54,	// (0x0004d126) main_fs_bigclock_indicator_pane_t1

0xec63,	// (0x0004d135) list_single_fs_bigclock_pane_g1

0xec6b,	// (0x0004d13d) list_single_fs_bigclock_pane_t1

0xcc6e,	// (0x0004b140) main_fs_bigclock_swipe_pane_g1

0xecc2,	// (0x0004d194) main_fs_bigclock_swipe_pane_g2

0x0001,

0xfe78,	// (0x0004e34a) main_fs_bigclock_swipe_pane_g

0xecca,	// (0x0004d19c) main_fs_bigclock_swipe_pane_t1_ParamLimits

0xecca,	// (0x0004d19c) main_fs_bigclock_swipe_pane_t1

0x44b9,	// (0x0004298b) call_type_pane_ParamLimits

0xa148,	// (0x0004861a) main_btmg_pane

0x1bd6,	// (0x000400a8) list_single_cale_mrui_row_pane_g2_ParamLimits

0x1bd6,	// (0x000400a8) list_single_cale_mrui_row_pane_g2

0x0002,

0xfdeb,	// (0x0004e2bd) list_single_cale_mrui_row_pane_g_ParamLimits

0xfdeb,	// (0x0004e2bd) list_single_cale_mrui_row_pane_g

0x1d02,	// (0x000401d4) list_recal_vselct_arw_lo_pane

0xeaf4,	// (0x0004cfc6) list_recal_vselct_arw_up_pane

0x1d0a,	// (0x000401dc) list_recal_vselct_pane

0x98b4,	// (0x00047d86) btmg_button_pane

0x98c0,	// (0x00047d92) main_btmg_pane_g1

0xa148,	// (0x0004861a) bg_button_pane_cp044

0xece7,	// (0x0004d1b9) btmg_button_pane_t1

0xc809,	// (0x0004acdb) aid_listscroll_gen

0xa9e1,	// (0x00048eb3) main_cntbar_detail_pane

0xe81e,	// (0x0004ccf0) list_cmail_folder_pane

0xe82e,	// (0x0004cd00) sp_fs_scroll_pane_cp03_ParamLimits

0x1d9a,	// (0x0004026c) list_single_fs_dyc_pane_cp01_ParamLimits

0x1d9a,	// (0x0004026c) list_single_fs_dyc_pane_cp01

0xecf5,	// (0x0004d1c7) aid_size_cmail_indent

0x1dbb,	// (0x0004028d) list_single_dyc_row_pane_cp01

0x98e8,	// (0x00047dba) cntbar_detail_list_pane_ParamLimits

0x98e8,	// (0x00047dba) cntbar_detail_list_pane

0x9928,	// (0x00047dfa) main_cntbar_detail_cont_pane_ParamLimits

0x9928,	// (0x00047dfa) main_cntbar_detail_cont_pane

0x44ad,	// (0x0004297f) scroll_pane_cp032_ParamLimits

0x44ad,	// (0x0004297f) scroll_pane_cp032

0x9934,	// (0x00047e06) cntbar_detail_list_event_pane_ParamLimits

0x9934,	// (0x00047e06) cntbar_detail_list_event_pane

0x98f6,	// (0x00047dc8) cntbar_detail_list_shct_pane

0xad63,	// (0x00049235) aid_list_gen

0xecfe,	// (0x0004d1d0) aid_scroll

0xed07,	// (0x0004d1d9) aid_size_touch_scroll_bar

0x8530,	// (0x00046a02) aid_list_double

0xed10,	// (0x0004d1e2) aid_list_single

0x123c,	// (0x0003f70e) aid_list_single_lg

0x1dc4,	// (0x00040296) aid_list_z_g_a_sm

0x1dcc,	// (0x0004029e) aid_list_z_g_d

0x1dd4,	// (0x000402a6) aid_txt_z_prm

0x1de2,	// (0x000402b4) aid_txt_z_prm_cp01

0x1df0,	// (0x000402c2) aid_txt_z_sec

0x9944,	// (0x00047e16) main_cntbar_detail_cont_pane_g1_ParamLimits

0x9944,	// (0x00047e16) main_cntbar_detail_cont_pane_g1

0x9951,	// (0x00047e23) main_cntbar_detail_cont_pane_g2_ParamLimits

0x9951,	// (0x00047e23) main_cntbar_detail_cont_pane_g2

0x0001,

0xfe7d,	// (0x0004e34f) main_cntbar_detail_cont_pane_g_ParamLimits

0xfe7d,	// (0x0004e34f) main_cntbar_detail_cont_pane_g

0xed19,	// (0x0004d1eb) main_cntbar_detail_cont_pane_t1

0xed27,	// (0x0004d1f9) main_cntbar_detail_cont_pane_t2

0xed35,	// (0x0004d207) main_cntbar_detail_cont_pane_t3

0x0002,

0xfe82,	// (0x0004e354) main_cntbar_detail_cont_pane_t

0x995d,	// (0x00047e2f) cell_cntbar_detail_list_shct_pane_ParamLimits

0x995d,	// (0x00047e2f) cell_cntbar_detail_list_shct_pane

0xed43,	// (0x0004d215) cntbar_detail_list_shct_pane_g1

0xed4c,	// (0x0004d21e) cntbar_detail_list_shct_pane_g2

0x0001,

0xfe89,	// (0x0004e35b) cntbar_detail_list_shct_pane_g

0x9971,	// (0x00047e43) cntbar_detail_list_event_pane_g1_ParamLimits

0x9971,	// (0x00047e43) cntbar_detail_list_event_pane_g1

0x997d,	// (0x00047e4f) cntbar_detail_list_event_pane_g2_ParamLimits

0x997d,	// (0x00047e4f) cntbar_detail_list_event_pane_g2

0x0005,

0xfe8e,	// (0x0004e360) cntbar_detail_list_event_pane_g_ParamLimits

0xfe8e,	// (0x0004e360) cntbar_detail_list_event_pane_g

0x99eb,	// (0x00047ebd) cntbar_detail_list_event_pane_t1_ParamLimits

0x99eb,	// (0x00047ebd) cntbar_detail_list_event_pane_t1

0x9a00,	// (0x00047ed2) cntbar_detail_list_event_pane_t2_ParamLimits

0x9a00,	// (0x00047ed2) cntbar_detail_list_event_pane_t2

0x0002,

0xfe9b,	// (0x0004e36d) cntbar_detail_list_event_pane_t_ParamLimits

0xfe9b,	// (0x0004e36d) cntbar_detail_list_event_pane_t

0xcc6e,	// (0x0004b140) cell_cntbar_detail_list_shct_pane_g1

0x488c,	// (0x00042d5e) navi_pane_mv_g3

0xa9e1,	// (0x00048eb3) main_cntbar_detail_pane_ParamLimits

0xa148,	// (0x0004861a) main_notif_wgt_pane

0x6edb,	// (0x000453ad) aid_tch_main_mp4_pane_g4

0x711a,	// (0x000455ec) popup_slider_window_cp02

0x1cf8,	// (0x000401ca) list_recal_day_event_pane

0x98c8,	// (0x00047d9a) cntbar_detail_btn_pane_ParamLimits

0x98c8,	// (0x00047d9a) cntbar_detail_btn_pane

0x98d8,	// (0x00047daa) cntbar_detail_btn_pane_cp01_ParamLimits

0x98d8,	// (0x00047daa) cntbar_detail_btn_pane_cp01

0x98f6,	// (0x00047dc8) cntbar_detail_list_shct_pane_ParamLimits

0x9902,	// (0x00047dd4) cntbar_detail_pane_g1_ParamLimits

0x9902,	// (0x00047dd4) cntbar_detail_pane_g1

0x9912,	// (0x00047de4) cntbar_detail_pane_t1_ParamLimits

0x9912,	// (0x00047de4) cntbar_detail_pane_t1

0x9989,	// (0x00047e5b) cntbar_detail_list_event_pane_g3_ParamLimits

0x9989,	// (0x00047e5b) cntbar_detail_list_event_pane_g3

0x99a1,	// (0x00047e73) cntbar_detail_list_event_pane_g4_ParamLimits

0x99a1,	// (0x00047e73) cntbar_detail_list_event_pane_g4

0x99b9,	// (0x00047e8b) cntbar_detail_list_event_pane_g5_ParamLimits

0x99b9,	// (0x00047e8b) cntbar_detail_list_event_pane_g5

0x99d1,	// (0x00047ea3) cntbar_detail_list_event_pane_g6_ParamLimits

0x99d1,	// (0x00047ea3) cntbar_detail_list_event_pane_g6

0x9a15,	// (0x00047ee7) cntbar_detail_list_event_pane_t3_ParamLimits

0x9a15,	// (0x00047ee7) cntbar_detail_list_event_pane_t3

0x9a27,	// (0x00047ef9) popup_notif_wgt_window_ParamLimits

0x9a27,	// (0x00047ef9) popup_notif_wgt_window

0x9a37,	// (0x00047f09) popup_submenu_window_cp01_ParamLimits

0x9a37,	// (0x00047f09) popup_submenu_window_cp01

0xaab8,	// (0x00048f8a) bg_popup_window_pane_cp10

0xed55,	// (0x0004d227) listscroll_notif_wgt_pane

0xed67,	// (0x0004d239) list_notif_wgt_window

0xed70,	// (0x0004d242) scroll_pane_cp033

0x9a47,	// (0x00047f19) list_notif_wgt_row_pane_ParamLimits

0x9a47,	// (0x00047f19) list_notif_wgt_row_pane

0xed79,	// (0x0004d24b) aid_size_list_notif_wgt_del

0xed86,	// (0x0004d258) list_notif_wgt_row_pane_g1

0xed92,	// (0x0004d264) list_notif_wgt_row_pane_g2

0xeda6,	// (0x0004d278) list_notif_wgt_row_pane_g3

0x0002,

0xfea2,	// (0x0004e374) list_notif_wgt_row_pane_g

0xedb3,	// (0x0004d285) list_notif_wgt_row_pane_t1

0xedc9,	// (0x0004d29b) list_notif_wgt_row_pane_t2

0xeddb,	// (0x0004d2ad) list_notif_wgt_row_pane_t3

0x0002,

0xfea9,	// (0x0004e37b) list_notif_wgt_row_pane_t

0xd919,	// (0x0004bdeb) list_recal_day_event_pane_g1

0xeded,	// (0x0004d2bf) list_recal_day_event_pane_t1

0xa148,	// (0x0004861a) bg_button_pane_cp045

0xedfc,	// (0x0004d2ce) cntbar_detail_btn_pane_t1

0xc81d,	// (0x0004acef) main_callh_pane_ParamLimits

0xc81d,	// (0x0004acef) main_callh_pane

0xa148,	// (0x0004861a) main_coverflow0_pane

0xa148,	// (0x0004861a) main_wgtman_pane

0x90ce,	// (0x000475a0) main_fs_bigclock_unlock_btn_pane_ParamLimits

0x90ce,	// (0x000475a0) main_fs_bigclock_unlock_btn_pane

0x9404,	// (0x000478d6) bg_button_pane_cp16

0x9414,	// (0x000478e6) cell_tport_appsw_pane_g3

0x9a58,	// (0x00047f2a) cf0_flow_pane_ParamLimits

0x9a58,	// (0x00047f2a) cf0_flow_pane

0xee0a,	// (0x0004d2dc) listscroll_cf0_pane

0xee15,	// (0x0004d2e7) main_cf0_pane_g1

0x9a67,	// (0x00047f39) main_cf0_pane_t1_ParamLimits

0x9a67,	// (0x00047f39) main_cf0_pane_t1

0x9a7b,	// (0x00047f4d) main_cf0_pane_t2_ParamLimits

0x9a7b,	// (0x00047f4d) main_cf0_pane_t2

0x0001,

0xfeb5,	// (0x0004e387) main_cf0_pane_t_ParamLimits

0xfeb5,	// (0x0004e387) main_cf0_pane_t

0xee27,	// (0x0004d2f9) scroll_pane_cp11

0x9a8f,	// (0x00047f61) cf0_flow_pane_g1

0x9a97,	// (0x00047f69) cf0_flow_pane_g2

0x0001,

0xfeba,	// (0x0004e38c) cf0_flow_pane_g

0x9a9f,	// (0x00047f71) cf0_flow_pane_t1

0xa148,	// (0x0004861a) main_call6_pane

0xa148,	// (0x0004861a) main_calllock_pane

0x9aad,	// (0x00047f7f) call6_btn_grp_pane_ParamLimits

0x9aad,	// (0x00047f7f) call6_btn_grp_pane

0x9aba,	// (0x00047f8c) call6_pane_g1_ParamLimits

0x9aba,	// (0x00047f8c) call6_pane_g1

0x9aca,	// (0x00047f9c) popup_call6_1st_window_ParamLimits

0x9aca,	// (0x00047f9c) popup_call6_1st_window

0x9ad8,	// (0x00047faa) popup_call6_2nd_window_ParamLimits

0x9ad8,	// (0x00047faa) popup_call6_2nd_window

0x9ae6,	// (0x00047fb8) cell_call6_btn_pane_ParamLimits

0x9ae6,	// (0x00047fb8) cell_call6_btn_pane

0xaab8,	// (0x00048f8a) bg_popup_call2_in_pane_cp03

0xee32,	// (0x0004d304) popup_call6_1st_window_g1

0xee3a,	// (0x0004d30c) popup_call6_1st_window_g2

0xee42,	// (0x0004d314) popup_call6_1st_window_g3

0x0002,

0xfebf,	// (0x0004e391) popup_call6_1st_window_g

0xee4a,	// (0x0004d31c) popup_call6_1st_window_t1

0xee59,	// (0x0004d32b) popup_call6_1st_window_t2

0xee69,	// (0x0004d33b) popup_call6_1st_window_t3

0x0002,

0xfec6,	// (0x0004e398) popup_call6_1st_window_t

0xaab8,	// (0x00048f8a) bg_popup_call2_in_pane_cp04

0xee32,	// (0x0004d304) popup_call6_2nd_window_g1

0xee3a,	// (0x0004d30c) popup_call6_2nd_window_g2

0xee42,	// (0x0004d314) popup_call6_2nd_window_g3

0x0002,

0xfebf,	// (0x0004e391) popup_call6_2nd_window_g

0xee4a,	// (0x0004d31c) popup_call6_2nd_window_t1

0xa148,	// (0x0004861a) bg_button_pane_cp15

0xee79,	// (0x0004d34b) cell_call6_btn_pane_g1

0xee82,	// (0x0004d354) cell_call6_btn_pane_t1

0x9af5,	// (0x00047fc7) listscroll_wgtman_pane_ParamLimits

0x9af5,	// (0x00047fc7) listscroll_wgtman_pane

0x9b11,	// (0x00047fe3) wgtman_btn_pane_ParamLimits

0x9b11,	// (0x00047fe3) wgtman_btn_pane

0xb2a8,	// (0x0004977a) aid_scroll_copy1

0xee91,	// (0x0004d363) list_wgtman_pane

0x9b46,	// (0x00048018) wgtman_btn_pane_g1_ParamLimits

0x9b46,	// (0x00048018) wgtman_btn_pane_g1

0x9b6e,	// (0x00048040) wgtman_btn_pane_t1_ParamLimits

0x9b6e,	// (0x00048040) wgtman_btn_pane_t1

0xee9b,	// (0x0004d36d) wgtman_btn_pane_t2_ParamLimits

0xee9b,	// (0x0004d36d) wgtman_btn_pane_t2

0x0001,

0xfecd,	// (0x0004e39f) wgtman_btn_pane_t_ParamLimits

0xfecd,	// (0x0004e39f) wgtman_btn_pane_t

0x9ba5,	// (0x00048077) listrow_wgtman_pane_ParamLimits

0x9ba5,	// (0x00048077) listrow_wgtman_pane

0x9bb9,	// (0x0004808b) listrow_wgtman_pane_g1

0x9bc6,	// (0x00048098) listrow_wgtman_pane_g2

0x0001,

0xfed2,	// (0x0004e3a4) listrow_wgtman_pane_g

0x1dfe,	// (0x000402d0) listrow_wgtman_pane_t1

0x1e16,	// (0x000402e8) listrow_wgtman_pane_t2

0x0001,

0xfed7,	// (0x0004e3a9) listrow_wgtman_pane_t

0x1e3c,	// (0x0004030e) wait_bar_pane_cp09

0xeeb2,	// (0x0004d384) main_calllock_btn_pane

0xeebc,	// (0x0004d38e) main_calllock_pane_g1

0xa148,	// (0x0004861a) bg_button_pane_cp17

0xeec8,	// (0x0004d39a) main_calllock_btn_pane_g1

0xeed1,	// (0x0004d3a3) main_calllock_btn_pane_t1

0xa148,	// (0x0004861a) main_dialer3_pane

0xa148,	// (0x0004861a) main_fmrd2_pane

0xcc6e,	// (0x0004b140) main_fs_bigclock_unlock_btn_pane_g1

0xeee8,	// (0x0004d3ba) main_fs_bigclock_unlock_btn_pane_t1

0x9be4,	// (0x000480b6) area_fmrd2_info_pane_ParamLimits

0x9be4,	// (0x000480b6) area_fmrd2_info_pane

0x9bf0,	// (0x000480c2) area_fmrd2_visual_pane_ParamLimits

0x9bf0,	// (0x000480c2) area_fmrd2_visual_pane

0x9bfe,	// (0x000480d0) fmrd2_indi_pane_ParamLimits

0x9bfe,	// (0x000480d0) fmrd2_indi_pane

0x9c0b,	// (0x000480dd) area_fmrd2_visual_pane_g1

0x9c13,	// (0x000480e5) area_fmrd2_visual_pane_t1

0x9c23,	// (0x000480f5) area_fmrd2_visual_pane_t2

0x9c33,	// (0x00048105) area_fmrd2_visual_pane_t3

0x0002,

0xfee1,	// (0x0004e3b3) area_fmrd2_visual_pane_t

0x9c43,	// (0x00048115) area_fmrd2_info_pane_g1

0x9c4b,	// (0x0004811d) area_fmrd2_info_pane_t1

0x9c5b,	// (0x0004812d) area_fmrd2_info_pane_t2

0x9c6b,	// (0x0004813d) area_fmrd2_info_pane_t3

0x9c7b,	// (0x0004814d) area_fmrd2_info_pane_t4

0x0003,

0xfee8,	// (0x0004e3ba) area_fmrd2_info_pane_t

0x9c8b,	// (0x0004815d) fmrd2_indi_pane_t1

0x9c9b,	// (0x0004816d) fmrd2_indi_pane_t2

0x9cab,	// (0x0004817d) fmrd2_indi_pane_t3

0x0002,

0xfef1,	// (0x0004e3c3) fmrd2_indi_pane_t

0xe489,	// (0x0004c95b) list_single_fs_bigclock_indicator_pane_g5_ParamLimits

0xe489,	// (0x0004c95b) list_single_fs_bigclock_indicator_pane_g5

0xe539,	// (0x0004ca0b) list_single_fs_bigclock_indicator_pane_t5_ParamLimits

0xe539,	// (0x0004ca0b) list_single_fs_bigclock_indicator_pane_t5

0x9592,	// (0x00047a64) aid_cell_bcale_month_pane_ParamLimits

0x9592,	// (0x00047a64) aid_cell_bcale_month_pane

0x95b0,	// (0x00047a82) bcale_month_pane_ParamLimits

0x95b0,	// (0x00047a82) bcale_month_pane

0x95cc,	// (0x00047a9e) bcale_preview_pane_ParamLimits

0x95cc,	// (0x00047a9e) bcale_preview_pane

0xec6b,	// (0x0004d13d) list_single_fs_bigclock_pane_t1_ParamLimits

0xec8a,	// (0x0004d15c) list_single_fs_bigclock_pane_t2_ParamLimits

0xec8a,	// (0x0004d15c) list_single_fs_bigclock_pane_t2

0x0001,

0xfe73,	// (0x0004e345) list_single_fs_bigclock_pane_t_ParamLimits

0xfe73,	// (0x0004e345) list_single_fs_bigclock_pane_t

0xeee0,	// (0x0004d3b2) main_fs_bigclock_unlock_btn_pane_g2

0x0001,

0xfedc,	// (0x0004e3ae) main_fs_bigclock_unlock_btn_pane_g

0x9cbb,	// (0x0004818d) aid_dia3_key_size_ParamLimits

0x9cbb,	// (0x0004818d) aid_dia3_key_size

0x9cc7,	// (0x00048199) aid_dia3_listrow_size_ParamLimits

0x9cc7,	// (0x00048199) aid_dia3_listrow_size

0x9cd7,	// (0x000481a9) dia3_keypad_fun_pane_ParamLimits

0x9cd7,	// (0x000481a9) dia3_keypad_fun_pane

0x9ce7,	// (0x000481b9) dia3_keypad_num_pane_ParamLimits

0x9ce7,	// (0x000481b9) dia3_keypad_num_pane

0x9cf7,	// (0x000481c9) dia3_listscroll_pane_ParamLimits

0x9cf7,	// (0x000481c9) dia3_listscroll_pane

0x9d05,	// (0x000481d7) dia3_numentry_pane_ParamLimits

0x9d05,	// (0x000481d7) dia3_numentry_pane

0xeef6,	// (0x0004d3c8) dia3_list_pane

0xef01,	// (0x0004d3d3) scroll_pane_cp12

0xa148,	// (0x0004861a) bg_dia3_numentry_pane

0x9d13,	// (0x000481e5) dia3_numentry_pane_t1

0x9d22,	// (0x000481f4) cell_dia3_key_num_pane

0x9d2a,	// (0x000481fc) cell_dia3_key0_fun_pane_ParamLimits

0x9d2a,	// (0x000481fc) cell_dia3_key0_fun_pane

0x9d37,	// (0x00048209) cell_dia3_key1_fun_pane_ParamLimits

0x9d37,	// (0x00048209) cell_dia3_key1_fun_pane

0x9d44,	// (0x00048216) dia3_listrow_pane

0xe187,	// (0x0004c659) bg_dia3_numentry_pane_g1

0xa148,	// (0x0004861a) bg_button_pane_cp21

0xef0c,	// (0x0004d3de) cell_dia3_key_num_pane_t1

0xef1a,	// (0x0004d3ec) cell_dia3_key_num_pane_t2

0xef29,	// (0x0004d3fb) cell_dia3_key_num_pane_t3

0xef38,	// (0x0004d40a) cell_dia3_key_num_pane_t4

0x0003,

0xfef8,	// (0x0004e3ca) cell_dia3_key_num_pane_t

0xa148,	// (0x0004861a) bg_button_pane_cp19

0x9d51,	// (0x00048223) cell_dia3_key0_fun_pane_g1

0xa148,	// (0x0004861a) bg_button_pane_cp20

0x9d59,	// (0x0004822b) cell_dia3_key1_fun_pane_g1

0x9d61,	// (0x00048233) area_left_week_number_pane

0x9d74,	// (0x00048246) area_top_day_name_pane

0x9d82,	// (0x00048254) frame_month_view_pane

0xef47,	// (0x0004d419) grid_month_view_pane

0x9d97,	// (0x00048269) cell_top_day_name_pane_ParamLimits

0x9d97,	// (0x00048269) cell_top_day_name_pane

0x9db3,	// (0x00048285) cell_area_left_week_number_pane_ParamLimits

0x9db3,	// (0x00048285) cell_area_left_week_number_pane

0x9dd4,	// (0x000482a6) cell_month_view_pane_ParamLimits

0x9dd4,	// (0x000482a6) cell_month_view_pane

0xef55,	// (0x0004d427) frm_month_g1

0x9e00,	// (0x000482d2) frm_month_g2

0x9e11,	// (0x000482e3) frm_month_g3

0x9e22,	// (0x000482f4) frm_month_g4

0x9e33,	// (0x00048305) frm_month_g5

0x9e44,	// (0x00048316) frm_month_g6

0x9e57,	// (0x00048329) frm_month_g7

0xef62,	// (0x0004d434) frm_month_g8

0x9e6a,	// (0x0004833c) frm_month_g9

0x9e77,	// (0x00048349) frm_month_g10

0x9e84,	// (0x00048356) frm_month_g11

0x9e91,	// (0x00048363) frm_month_g12

0x9e9e,	// (0x00048370) frm_month_g13

0x9ead,	// (0x0004837f) frm_month_g14

0x9ebc,	// (0x0004838e) frm_month_g15

0x9ecb,	// (0x0004839d) frm_month_g16

0x000f,

0xff01,	// (0x0004e3d3) frm_month_g

0xef6f,	// (0x0004d441) cell_top_day_name_pane_t1

0x9eda,	// (0x000483ac) cell_area_left_week_number_pane_g1

0x9ee9,	// (0x000483bb) cell_area_left_week_number_pane_t1

0xceb2,	// (0x0004b384) cell_month_view_pane_g1

0x9eff,	// (0x000483d1) cell_month_view_pane_t1

0xa148,	// (0x0004861a) main_fps_pane

0xe70e,	// (0x0004cbe0) cmail_ddmenu_btn02_pane_cp1_ParamLimits

0xe70e,	// (0x0004cbe0) cmail_ddmenu_btn02_pane_cp1

0xe72a,	// (0x0004cbfc) cmail_ddmenu_btn02_pane_cp2_ParamLimits

0xe72a,	// (0x0004cbfc) cmail_ddmenu_btn02_pane_cp2

0x97bd,	// (0x00047c8f) cmail_ddmenu_btn02_pane_g2_ParamLimits

0x97bd,	// (0x00047c8f) cmail_ddmenu_btn02_pane_g2

0x0001,

0xfe26,	// (0x0004e2f8) cmail_ddmenu_btn02_pane_g_ParamLimits

0xfe26,	// (0x0004e2f8) cmail_ddmenu_btn02_pane_g

0x97db,	// (0x00047cad) cmail_ddmenu_btn02_pane_t2_ParamLimits

0x97db,	// (0x00047cad) cmail_ddmenu_btn02_pane_t2

0x0001,

0xfe2b,	// (0x0004e2fd) cmail_ddmenu_btn02_pane_t_ParamLimits

0xfe2b,	// (0x0004e2fd) cmail_ddmenu_btn02_pane_t

0x9f15,	// (0x000483e7) fps_text_pane_ParamLimits

0x9f15,	// (0x000483e7) fps_text_pane

0x9f22,	// (0x000483f4) main_fps_pane_g1_ParamLimits

0x9f22,	// (0x000483f4) main_fps_pane_g1

0x9f2e,	// (0x00048400) wait_bar_pane_cp010_ParamLimits

0x9f2e,	// (0x00048400) wait_bar_pane_cp010

0x9f3a,	// (0x0004840c) fps_text_pane_t1_ParamLimits

0x9f3a,	// (0x0004840c) fps_text_pane_t1

0x7540,	// (0x00045a12) cam4_image_uncrop_pane_g1

0x7549,	// (0x00045a1b) cam4_image_uncrop_pane_g2

0x7552,	// (0x00045a24) cam4_image_uncrop_pane_g3

0x755b,	// (0x00045a2d) cam4_image_uncrop_pane_g4

0x0003,

0xf8ee,	// (0x0004ddc0) cam4_image_uncrop_pane_g

0x9d44,	// (0x00048216) dia3_listrow_pane_ParamLimits

0xa148,	// (0x0004861a) main_phob2_pane

0x93e6,	// (0x000478b8) cell_tport_appsw_pane_cp02_ParamLimits

0x93e6,	// (0x000478b8) cell_tport_appsw_pane_cp02

0x93f5,	// (0x000478c7) cell_tport_appsw_pane_cp03_ParamLimits

0x93f5,	// (0x000478c7) cell_tport_appsw_pane_cp03

0xa148,	// (0x0004861a) phob2_contact_card_pane

0xa148,	// (0x0004861a) phob2_listscroll_pane

0xef82,	// (0x0004d454) phob2_list_pane

0xef8a,	// (0x0004d45c) scroll_pane_cp034

0x9f53,	// (0x00048425) phob2_cc_data_pane_ParamLimits

0x9f53,	// (0x00048425) phob2_cc_data_pane

0x9f6f,	// (0x00048441) phob2_cc_listscroll_pane_ParamLimits

0x9f6f,	// (0x00048441) phob2_cc_listscroll_pane

0x9f8b,	// (0x0004845d) list_double_large_graphic_phob2_pane_ParamLimits

0x9f8b,	// (0x0004845d) list_double_large_graphic_phob2_pane

0x9fa3,	// (0x00048475) list_double_large_graphic_phob2_pane_g1_ParamLimits

0x9fa3,	// (0x00048475) list_double_large_graphic_phob2_pane_g1

0x1e4e,	// (0x00040320) list_double_large_graphic_phob2_pane_g2_ParamLimits

0x1e4e,	// (0x00040320) list_double_large_graphic_phob2_pane_g2

0x0001,

0xff22,	// (0x0004e3f4) list_double_large_graphic_phob2_pane_g_ParamLimits

0xff22,	// (0x0004e3f4) list_double_large_graphic_phob2_pane_g

0x1e5a,	// (0x0004032c) list_double_large_graphic_phob2_pane_t1_ParamLimits

0x1e5a,	// (0x0004032c) list_double_large_graphic_phob2_pane_t1

0x1e6f,	// (0x00040341) list_double_large_graphic_phob2_pane_t2_ParamLimits

0x1e6f,	// (0x00040341) list_double_large_graphic_phob2_pane_t2

0x0001,

0xff27,	// (0x0004e3f9) list_double_large_graphic_phob2_pane_t_ParamLimits

0xff27,	// (0x0004e3f9) list_double_large_graphic_phob2_pane_t

0xa148,	// (0x0004861a) list_highlight_pane_cp024

0x9fb9,	// (0x0004848b) phob2_cc_button_pane

0x9fc1,	// (0x00048493) phob2_cc_data_pane_g1_ParamLimits

0x9fc1,	// (0x00048493) phob2_cc_data_pane_g1

0x9fcd,	// (0x0004849f) phob2_cc_data_pane_g2_ParamLimits

0x9fcd,	// (0x0004849f) phob2_cc_data_pane_g2

0x0001,

0xff2c,	// (0x0004e3fe) phob2_cc_data_pane_g_ParamLimits

0xff2c,	// (0x0004e3fe) phob2_cc_data_pane_g

0x9fd9,	// (0x000484ab) phob2_cc_data_pane_t1_ParamLimits

0x9fd9,	// (0x000484ab) phob2_cc_data_pane_t1

0x9feb,	// (0x000484bd) phob2_cc_data_pane_t2_ParamLimits

0x9feb,	// (0x000484bd) phob2_cc_data_pane_t2

0x9ffd,	// (0x000484cf) phob2_cc_data_pane_t3_ParamLimits

0x9ffd,	// (0x000484cf) phob2_cc_data_pane_t3

0x0002,

0xff31,	// (0x0004e403) phob2_cc_data_pane_t_ParamLimits

0xff31,	// (0x0004e403) phob2_cc_data_pane_t

0xef92,	// (0x0004d464) phob2_cc_list_pane_ParamLimits

0xef92,	// (0x0004d464) phob2_cc_list_pane

0xdcca,	// (0x0004c19c) scroll_pane_cp035_ParamLimits

0xdcca,	// (0x0004c19c) scroll_pane_cp035

0xa9e1,	// (0x00048eb3) bg_button_pane_cp033

0xef9e,	// (0x0004d470) phob2_cc_button_pane_g1

0xefaa,	// (0x0004d47c) phob2_cc_button_pane_t1

0xefbf,	// (0x0004d491) phob2_cc_button_pane_t2

0x0001,

0xff38,	// (0x0004e40a) phob2_cc_button_pane_t

0xa00f,	// (0x000484e1) list_double_large_graphic_phob2_cc_pane_ParamLimits

0xa00f,	// (0x000484e1) list_double_large_graphic_phob2_cc_pane

0xa02b,	// (0x000484fd) list_double_large_graphic_phob2_cc_pane_g1_ParamLimits

0xa02b,	// (0x000484fd) list_double_large_graphic_phob2_cc_pane_g1

0x1e81,	// (0x00040353) list_double_large_graphic_phob2_cc_pane_g2_ParamLimits

0x1e81,	// (0x00040353) list_double_large_graphic_phob2_cc_pane_g2

0x1e90,	// (0x00040362) list_double_large_graphic_phob2_cc_pane_g3_ParamLimits

0x1e90,	// (0x00040362) list_double_large_graphic_phob2_cc_pane_g3

0x1e9f,	// (0x00040371) list_double_large_graphic_phob2_cc_pane_g4_ParamLimits

0x1e9f,	// (0x00040371) list_double_large_graphic_phob2_cc_pane_g4

0x1eb0,	// (0x00040382) list_double_large_graphic_phob2_cc_pane_g5_ParamLimits

0x1eb0,	// (0x00040382) list_double_large_graphic_phob2_cc_pane_g5

0x0004,

0xff3d,	// (0x0004e40f) list_double_large_graphic_phob2_cc_pane_g_ParamLimits

0xff3d,	// (0x0004e40f) list_double_large_graphic_phob2_cc_pane_g

0x1ebf,	// (0x00040391) list_double_large_graphic_phob2_cc_pane_t1_ParamLimits

0x1ebf,	// (0x00040391) list_double_large_graphic_phob2_cc_pane_t1

0x1ee8,	// (0x000403ba) list_double_large_graphic_phob2_cc_pane_t2_ParamLimits

0x1ee8,	// (0x000403ba) list_double_large_graphic_phob2_cc_pane_t2

0x0001,

0xff48,	// (0x0004e41a) list_double_large_graphic_phob2_cc_pane_t_ParamLimits

0xff48,	// (0x0004e41a) list_double_large_graphic_phob2_cc_pane_t

0xefd1,	// (0x0004d4a3) list_highlight_pane_cp025_ParamLimits

0xefd1,	// (0x0004d4a3) list_highlight_pane_cp025

0xa9e1,	// (0x00048eb3) bg_button_pane_cp033_ParamLimits

0xef9e,	// (0x0004d470) phob2_cc_button_pane_g1_ParamLimits

0xefaa,	// (0x0004d47c) phob2_cc_button_pane_t1_ParamLimits

0xefbf,	// (0x0004d491) phob2_cc_button_pane_t2_ParamLimits

0xff38,	// (0x0004e40a) phob2_cc_button_pane_t_ParamLimits

0x219b,	// (0x0004066d) popup_wgtman_window

0xd7ea,	// (0x0004bcbc) scroll_pane_cp038

0x9b2e,	// (0x00048000) wgtman_btn_pane_cp_01_ParamLimits

0x9b2e,	// (0x00048000) wgtman_btn_pane_cp_01

0xefdf,	// (0x0004d4b1) wgtman_content_pane

0xefe8,	// (0x0004d4ba) wgtman_heading_pane

0xa148,	// (0x0004861a) bg_heading_pane_cp02

0xeff1,	// (0x0004d4c3) wgtman_heading_pane_g1

0xeff9,	// (0x0004d4cb) wgtman_heading_pane_t1

0xf007,	// (0x0004d4d9) scroll_pane_cp036

0xf00f,	// (0x0004d4e1) wgtman_list_pane

0xf017,	// (0x0004d4e9) wgtman_list_pane_t1_ParamLimits

0xf017,	// (0x0004d4e9) wgtman_list_pane_t1

0x749d,	// (0x0004596f) cam4_grid_pane

0x1010,	// (0x0003f4e2) bg_button_pane_cp015_ParamLimits

0x815b,	// (0x0004662d) bg_button_pane_cp016_ParamLimits

0x816e,	// (0x00046640) bg_button_pane_cp017_ParamLimits

0x1054,	// (0x0003f526) popup_vitu2_query_window_g3_ParamLimits

0x1054,	// (0x0003f526) popup_vitu2_query_window_g3

0x10cd,	// (0x0003f59f) popup_vitu2_query_window_t6_ParamLimits

0x10cd,	// (0x0003f59f) popup_vitu2_query_window_t6

0x10f8,	// (0x0003f5ca) popup_vitu2_query_window_t7_ParamLimits

0x10f8,	// (0x0003f5ca) popup_vitu2_query_window_t7

0xecae,	// (0x0004d180) cam4_grid_pane_g1

0xecb7,	// (0x0004d189) cam4_grid_pane_g2

0xf031,	// (0x0004d503) cam4_grid_pane_g3

0xf03a,	// (0x0004d50c) cam4_grid_pane_g4

0x0003,

0xff4d,	// (0x0004e41f) cam4_grid_pane_g

0x32c0,	// (0x00041792) aid_placing_vt_slider_lsc_ParamLimits

0x35f3,	// (0x00041ac5) vidtel_button_pane_ParamLimits

0x35f3,	// (0x00041ac5) vidtel_button_pane

0xf045,	// (0x0004d517) bg_button_pane_cp034

0xa03c,	// (0x0004850e) vidtel_button_pane_g1

0xf04f,	// (0x0004d521) vidtel_button_pane_t1

0xd909,	// (0x0004bddb) aid_size_vtel_slider_touch

0xdcca,	// (0x0004c19c) scroll_pane_cp039

0xe1c5,	// (0x0004c697) ncim_query_button_pane_cp01_ParamLimits

0xe1e4,	// (0x0004c6b6) ncimui_query_pane_g1_ParamLimits

0xa9e1,	// (0x00048eb3) input_focus_pane_cp012_ParamLimits

0xe209,	// (0x0004c6db) ncim_query_entry_pane_t1_ParamLimits

0xdcca,	// (0x0004c19c) scroll_pane_cp039_ParamLimits

0x47fe,	// (0x00042cd0) navi_pane_bcale_mc_g1

0x4806,	// (0x00042cd8) navi_pane_bcale_mc_t1

0xe767,	// (0x0004cc39) main_sp_fs_email_pane_g1

0xe773,	// (0x0004cc45) main_sp_fs_email_pane_g2

0x0001,

0xfcde,	// (0x0004e1b0) main_sp_fs_email_pane_g

0xe9f8,	// (0x0004ceca) list_single_cale_mrui_row_pane_g3_ParamLimits

0xe9f8,	// (0x0004ceca) list_single_cale_mrui_row_pane_g3

0x1d58,	// (0x0004022a) list_single_recal_day_pane_g5_event_pane

0x1d6e,	// (0x00040240) list_single_recal_day_pane_g7

0xf05d,	// (0x0004d52f) list_recal_day_event_pane_cp01

0xf066,	// (0x0004d538) list_recal_vselct_arw_lo_pane_cp01

0xf06e,	// (0x0004d540) list_recal_vselct_arw_up_pane_cp01

0xf076,	// (0x0004d548) list_recal_vselct_pane_cp01

0xd919,	// (0x0004bdeb) list_recal_day_event_pane_cp01_g1

0x1f11,	// (0x000403e3) list_recal_day_event_pane_cp01_t1

0x1d76,	// (0x00040248) list_single_recal_day_pane_t1_ParamLimits

0x1d88,	// (0x0004025a) list_single_recal_day_pane_t2_ParamLimits

0xfe3b,	// (0x0004e30d) list_single_recal_day_pane_t_ParamLimits

0xa80f,	// (0x00048ce1) bg_notes_pane_ParamLimits

0xa8b2,	// (0x00048d84) list_notes_pane_ParamLimits

0x24ea,	// (0x000409bc) scroll_pane_cp06_ParamLimits

0xa8d4,	// (0x00048da6) main_notes_pane_ParamLimits

0xa148,	// (0x0004861a) main_welc_pane

0xa044,	// (0x00048516) main_welc_body_pane_ParamLimits

0xa044,	// (0x00048516) main_welc_body_pane

0xa05f,	// (0x00048531) main_welc_opti_pane_ParamLimits

0xa05f,	// (0x00048531) main_welc_opti_pane

0xa094,	// (0x00048566) main_welc_pane_t1_ParamLimits

0xa094,	// (0x00048566) main_welc_pane_t1

0xa0b2,	// (0x00048584) main_welc_body_row_pane_ParamLimits

0xa0b2,	// (0x00048584) main_welc_body_row_pane

0xa0cc,	// (0x0004859e) main_welc_opti_row_pane_ParamLimits

0xa0cc,	// (0x0004859e) main_welc_opti_row_pane

0xf080,	// (0x0004d552) main_welc_opti_row_pane_g1

0xf088,	// (0x0004d55a) main_welc_opti_row_pane_t1

0xf097,	// (0x0004d569) main_welc_body_row_pane_t1

0xed5f,	// (0x0004d231) popup_notif_wgt_heading_pane

0xed79,	// (0x0004d24b) aid_size_list_notif_wgt_del_ParamLimits

0xed86,	// (0x0004d258) list_notif_wgt_row_pane_g1_ParamLimits

0xed92,	// (0x0004d264) list_notif_wgt_row_pane_g2_ParamLimits

0xeda6,	// (0x0004d278) list_notif_wgt_row_pane_g3_ParamLimits

0xfea2,	// (0x0004e374) list_notif_wgt_row_pane_g_ParamLimits

0xedb3,	// (0x0004d285) list_notif_wgt_row_pane_t1_ParamLimits

0xedc9,	// (0x0004d29b) list_notif_wgt_row_pane_t2_ParamLimits

0xeddb,	// (0x0004d2ad) list_notif_wgt_row_pane_t3_ParamLimits

0xfea9,	// (0x0004e37b) list_notif_wgt_row_pane_t_ParamLimits

0x9bb9,	// (0x0004808b) listrow_wgtman_pane_g1_ParamLimits

0x9bc6,	// (0x00048098) listrow_wgtman_pane_g2_ParamLimits

0xfed2,	// (0x0004e3a4) listrow_wgtman_pane_g_ParamLimits

0x1dfe,	// (0x000402d0) listrow_wgtman_pane_t1_ParamLimits

0x1e16,	// (0x000402e8) listrow_wgtman_pane_t2_ParamLimits

0xfed7,	// (0x0004e3a9) listrow_wgtman_pane_t_ParamLimits

0x1e3c,	// (0x0004030e) wait_bar_pane_cp09_ParamLimits

0xa148,	// (0x0004861a) bg_popup_heading_pane_cp02

0xf0a6,	// (0x0004d578) popup_notif_wgt_heading_pane_g1

0xf0ae,	// (0x0004d580) popup_notif_wgt_heading_pane_t1

0xa148,	// (0x0004861a) main_vids_pane

0xa148,	// (0x0004861a) vids_listscroll_pane

0xa0dd,	// (0x000485af) scroll_pane_cp040

0xa148,	// (0x0004861a) vids_list_pane

0xa0e8,	// (0x000485ba) vids_list_double_pane_ParamLimits

0xa0e8,	// (0x000485ba) vids_list_double_pane

0xa0fb,	// (0x000485cd) vids_list_double_pane_g1

0xa104,	// (0x000485d6) vids_list_double_pane_t1

0xa114,	// (0x000485e6) vids_list_double_pane_t2

0x0001,

0xff5b,	// (0x0004e42d) vids_list_double_pane_t

0xa9e1,	// (0x00048eb3) main_ncimui_pane_ParamLimits

0x8c7e,	// (0x00047150) main_ncimui_pane_g1_ParamLimits

0x8c8c,	// (0x0004715e) main_ncimui_pane_g2_ParamLimits

0x8c8c,	// (0x0004715e) main_ncimui_pane_g2

0x0001,

0xfbe3,	// (0x0004e0b5) main_ncimui_pane_g_ParamLimits

0xfbe3,	// (0x0004e0b5) main_ncimui_pane_g

0xa07a,	// (0x0004854c) main_welc_pane_g1_ParamLimits

0xa07a,	// (0x0004854c) main_welc_pane_g1

0xa086,	// (0x00048558) main_welc_pane_g2_ParamLimits

0xa086,	// (0x00048558) main_welc_pane_g2

0x0001,

0xff56,	// (0x0004e428) main_welc_pane_g_ParamLimits

0xff56,	// (0x0004e428) main_welc_pane_g

0xa80f,	// (0x00048ce1) listscroll_mce_pane_ParamLimits

0x48c8,	// (0x00042d9a) wait_bar_pane_cp10

0xc811,	// (0x0004ace3) main_cale_day_pane_ParamLimits

0xc811,	// (0x0004ace3) main_cale_week_pane_ParamLimits

0xa80f,	// (0x00048ce1) main_messa_pane_ParamLimits

0x68a5,	// (0x00044d77) main_clock2_btn_pane_ParamLimits

0x68a5,	// (0x00044d77) main_clock2_btn_pane

0xd03a,	// (0x0004b50c) main_clock2_btn_pane_cp01_ParamLimits

0xd03a,	// (0x0004b50c) main_clock2_btn_pane_cp01

0xe9c9,	// (0x0004ce9b) list_cale_mrui_pane_ParamLimits

0xee1f,	// (0x0004d2f1) main_cf0_pane_g2

0x0001,

0xfeb0,	// (0x0004e382) main_cf0_pane_g

0x9d61,	// (0x00048233) area_left_week_number_pane_ParamLimits

0x9d74,	// (0x00048246) area_top_day_name_pane_ParamLimits

0x9d82,	// (0x00048254) frame_month_view_pane_ParamLimits

0xef47,	// (0x0004d419) grid_month_view_pane_ParamLimits

0xef55,	// (0x0004d427) frm_month_g1_ParamLimits

0x9e00,	// (0x000482d2) frm_month_g2_ParamLimits

0x9e11,	// (0x000482e3) frm_month_g3_ParamLimits

0x9e22,	// (0x000482f4) frm_month_g4_ParamLimits

0x9e33,	// (0x00048305) frm_month_g5_ParamLimits

0x9e44,	// (0x00048316) frm_month_g6_ParamLimits

0x9e57,	// (0x00048329) frm_month_g7_ParamLimits

0xef62,	// (0x0004d434) frm_month_g8_ParamLimits

0x9e6a,	// (0x0004833c) frm_month_g9_ParamLimits

0x9e77,	// (0x00048349) frm_month_g10_ParamLimits

0x9e84,	// (0x00048356) frm_month_g11_ParamLimits

0x9e91,	// (0x00048363) frm_month_g12_ParamLimits

0x9e9e,	// (0x00048370) frm_month_g13_ParamLimits

0x9ead,	// (0x0004837f) frm_month_g14_ParamLimits

0x9ebc,	// (0x0004838e) frm_month_g15_ParamLimits

0x9ecb,	// (0x0004839d) frm_month_g16_ParamLimits

0xff01,	// (0x0004e3d3) frm_month_g_ParamLimits

0xef6f,	// (0x0004d441) cell_top_day_name_pane_t1_ParamLimits

0x9eda,	// (0x000483ac) cell_area_left_week_number_pane_g1_ParamLimits

0x9ee9,	// (0x000483bb) cell_area_left_week_number_pane_t1_ParamLimits

0xceb2,	// (0x0004b384) cell_month_view_pane_g1_ParamLimits

0x9eff,	// (0x000483d1) cell_month_view_pane_t1_ParamLimits

0xa807,	// (0x00048cd9) main_clock2_btn_pane_g1

0xf0bc,	// (0x0004d58e) main_clock2_btn_pane_t1

0xa9e1,	// (0x00048eb3) listscroll_cmail_pane_ParamLimits

0xe767,	// (0x0004cc39) main_sp_fs_email_pane_g1_ParamLimits

0xe773,	// (0x0004cc45) main_sp_fs_email_pane_g2_ParamLimits

0xfcde,	// (0x0004e1b0) main_sp_fs_email_pane_g_ParamLimits

0xead5,	// (0x0004cfa7) list_recal_day_pane_ParamLimits

0xeae6,	// (0x0004cfb8) mian_recal_day_pane_t1

0x1724,	// (0x0003fbf6) list_single_dyc_row_text_pane_t4_ParamLimits

0x1724,	// (0x0003fbf6) list_single_dyc_row_text_pane_t4

0x1761,	// (0x0003fc33) list_single_dyc_row_text_pane_t5_ParamLimits

0x1761,	// (0x0003fc33) list_single_dyc_row_text_pane_t5

0x17d7,	// (0x0003fca9) list_single_dyc_row_text_pane_t6_ParamLimits

0x17d7,	// (0x0003fca9) list_single_dyc_row_text_pane_t6

0xaea8,	// (0x0004937a) aid_mgn_list_cale_time_pane

0xa9e1,	// (0x00048eb3) main_gallery2_pane_ParamLimits

0xd04e,	// (0x0004b520) main_clock2_pane_cp01_t1

0xd05e,	// (0x0004b530) main_clock2_pane_cp01_t3

0x0001,

0xf7c4,	// (0x0004dc96) main_clock2_pane_cp01_t

0x29e6,	// (0x00040eb8) cale_week_scroll_pane_g16_ParamLimits

0x29e6,	// (0x00040eb8) cale_week_scroll_pane_g16

0xaab8,	// (0x00048f8a) vorec_slider_pane
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
	};

} // end of namespace AknLayoutScalable_Elaf_pvp4_apps_vga4_prt_tch_Small
