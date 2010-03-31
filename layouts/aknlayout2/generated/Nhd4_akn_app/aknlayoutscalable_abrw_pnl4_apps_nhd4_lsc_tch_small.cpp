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
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Apps::KByteCodedData_AknLayoutScalable_Elaf_pnp4_apps_nhd4_prt_tch + 0x0006c1a2 };

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
0x012c,	// (0x0006c2ce) Screen

0x0138,	// (0x0006c2da) application_window

0x0184,	// (0x0006c326) area_bottom_pane_ParamLimits

0x0184,	// (0x0006c326) area_bottom_pane

0x01bd,	// (0x0006c35f) area_top_pane_ParamLimits

0x01bd,	// (0x0006c35f) area_top_pane

0x913a,	// (0x000752dc) call_video_uplink_pane_ParamLimits

0x913a,	// (0x000752dc) call_video_uplink_pane

0x024b,	// (0x0006c3ed) main_pane_ParamLimits

0x024b,	// (0x0006c3ed) main_pane

0xc817,	// (0x000789b9) context_pane

0x374a,	// (0x0006f8ec) navi_pane

0x377c,	// (0x0006f91e) popup_cale_events_window_ParamLimits

0x377c,	// (0x0006f91e) popup_cale_events_window

0xc82a,	// (0x000789cc) popup_mup_playback_window

0x3794,	// (0x0006f936) signal_pane

0x9fe4,	// (0x00076186) main_browser_pane

0xb3f2,	// (0x00077594) main_burst_pane

0x34a8,	// (0x0006f64a) main_calc_pane

0xc7fd,	// (0x0007899f) main_cale_day_pane

0x34bc,	// (0x0006f65e) main_cale_month_pane

0xc7fd,	// (0x0007899f) main_cale_week_pane

0xb3f2,	// (0x00077594) main_call_pane

0x9ca5,	// (0x00075e47) main_call_poc_pane

0xb3f2,	// (0x00077594) main_camera_pane

0xb3f2,	// (0x00077594) main_chi_dic_pane

0xb163,	// (0x00077305) main_clock_pane

0x9ca5,	// (0x00075e47) main_fmradio_pane

0xb3f2,	// (0x00077594) main_graph_messa_pane

0x9ca5,	// (0x00075e47) main_help_pane

0x9fe4,	// (0x00076186) main_im_pane

0x9f00,	// (0x000760a2) main_image_pane_ParamLimits

0x9f00,	// (0x000760a2) main_image_pane

0x9ca5,	// (0x00075e47) main_location2_pane

0xb3f2,	// (0x00077594) main_location_pane

0x9f00,	// (0x000760a2) main_messa_pane

0x9ca5,	// (0x00075e47) main_mp2_pane

0xb3f2,	// (0x00077594) main_mp_pane

0x9ca5,	// (0x00075e47) main_msg_pane

0x9ca5,	// (0x00075e47) main_mup_eq_pane

0x9ca5,	// (0x00075e47) main_mup_pane

0x9fe4,	// (0x00076186) main_notes_pane

0x9ca5,	// (0x00075e47) main_pec_pane

0x9ca5,	// (0x00075e47) main_phob_pane

0x9ca5,	// (0x00075e47) main_pinb_pane

0x9ca5,	// (0x00075e47) main_postcard_pane

0x9ca5,	// (0x00075e47) main_qdial_pane

0xb3f2,	// (0x00077594) main_skin_pane

0x9ca5,	// (0x00075e47) main_smil2_pane

0xb3f2,	// (0x00077594) main_smil_pane

0xb3f2,	// (0x00077594) main_video_pane

0xb3f2,	// (0x00077594) main_video_tele_pane

0x9f00,	// (0x000760a2) main_viewer_pane_ParamLimits

0x9f00,	// (0x000760a2) main_viewer_pane

0xb3f2,	// (0x00077594) main_vorec_pane

0x350e,	// (0x0006f6b0) popup_blid_sat_info_window_ParamLimits

0x350e,	// (0x0006f6b0) popup_blid_sat_info_window

0x3566,	// (0x0006f708) popup_dyc_status_message_window_ParamLimits

0x3566,	// (0x0006f708) popup_dyc_status_message_window

0x357e,	// (0x0006f720) popup_grid_large_graphic_window_ParamLimits

0x357e,	// (0x0006f720) popup_grid_large_graphic_window

0x3634,	// (0x0006f7d6) popup_loc_request_window_ParamLimits

0x3634,	// (0x0006f7d6) popup_loc_request_window

0x3722,	// (0x0006f8c4) popup_wml_address_window_ParamLimits

0x3722,	// (0x0006f8c4) popup_wml_address_window

0x32e2,	// (0x0006f484) call_muted_g1

0x2f95,	// (0x0006f137) popup_call_audio_conf_window_ParamLimits

0x2f95,	// (0x0006f137) popup_call_audio_conf_window

0x32f6,	// (0x0006f498) popup_call_audio_first_window_ParamLimits

0x32f6,	// (0x0006f498) popup_call_audio_first_window

0x336c,	// (0x0006f50e) popup_call_audio_in_window_ParamLimits

0x336c,	// (0x0006f50e) popup_call_audio_in_window

0x33a8,	// (0x0006f54a) popup_call_audio_out_window_ParamLimits

0x33a8,	// (0x0006f54a) popup_call_audio_out_window

0x33e2,	// (0x0006f584) popup_call_audio_second_window_ParamLimits

0x33e2,	// (0x0006f584) popup_call_audio_second_window

0x3438,	// (0x0006f5da) popup_call_audio_wait_window_ParamLimits

0x3438,	// (0x0006f5da) popup_call_audio_wait_window

0x346d,	// (0x0006f60f) popup_number_entry_window_ParamLimits

0x346d,	// (0x0006f60f) popup_number_entry_window

0x9170,	// (0x00075312) bg_popup_call_pane_cp05_ParamLimits

0x9170,	// (0x00075312) bg_popup_call_pane_cp05

0x9190,	// (0x00075332) popup_number_entry_window_t1

0x91a3,	// (0x00075345) popup_number_entry_window_t2

0x91b5,	// (0x00075357) popup_number_entry_window_t3

0x0003,

0xf0cd,	// (0x0007b26f) popup_number_entry_window_t

0x91c7,	// (0x00075369) text_title_cp2

0x91da,	// (0x0007537c) bg_popup_call_pane_cp_ParamLimits

0x91da,	// (0x0007537c) bg_popup_call_pane_cp

0x91e8,	// (0x0007538a) call_thumbnail_pane

0x91f0,	// (0x00075392) popup_call_audio_in_window_g1_ParamLimits

0x91f0,	// (0x00075392) popup_call_audio_in_window_g1

0x91fc,	// (0x0007539e) popup_call_audio_in_window_g2_ParamLimits

0x91fc,	// (0x0007539e) popup_call_audio_in_window_g2

0x9208,	// (0x000753aa) popup_call_audio_in_window_g3_ParamLimits

0x9208,	// (0x000753aa) popup_call_audio_in_window_g3

0x0002,

0xf0d6,	// (0x0007b278) popup_call_audio_in_window_g_ParamLimits

0xf0d6,	// (0x0007b278) popup_call_audio_in_window_g

0x9214,	// (0x000753b6) popup_call_audio_in_window_t1_ParamLimits

0x9214,	// (0x000753b6) popup_call_audio_in_window_t1

0x9230,	// (0x000753d2) popup_call_audio_in_window_t2_ParamLimits

0x9230,	// (0x000753d2) popup_call_audio_in_window_t2

0x924c,	// (0x000753ee) popup_call_audio_in_window_t3_ParamLimits

0x924c,	// (0x000753ee) popup_call_audio_in_window_t3

0x0002,

0xf0dd,	// (0x0007b27f) popup_call_audio_in_window_t_ParamLimits

0xf0dd,	// (0x0007b27f) popup_call_audio_in_window_t

0x91da,	// (0x0007537c) bg_popup_call_pane_cp01_ParamLimits

0x91da,	// (0x0007537c) bg_popup_call_pane_cp01

0x91e8,	// (0x0007538a) call_thumbnail_pane_cp02

0x925f,	// (0x00075401) call_type_pane_cp022

0x9267,	// (0x00075409) popup_call_audio_out_window_g1_ParamLimits

0x9267,	// (0x00075409) popup_call_audio_out_window_g1

0x9279,	// (0x0007541b) popup_call_audio_out_window_g2_ParamLimits

0x9279,	// (0x0007541b) popup_call_audio_out_window_g2

0x9285,	// (0x00075427) popup_call_audio_out_window_g3_ParamLimits

0x9285,	// (0x00075427) popup_call_audio_out_window_g3

0x0002,

0xf0e4,	// (0x0007b286) popup_call_audio_out_window_g_ParamLimits

0xf0e4,	// (0x0007b286) popup_call_audio_out_window_g

0x9297,	// (0x00075439) popup_call_audio_out_window_t1_ParamLimits

0x9297,	// (0x00075439) popup_call_audio_out_window_t1

0x92af,	// (0x00075451) popup_call_audio_out_window_t2_ParamLimits

0x92af,	// (0x00075451) popup_call_audio_out_window_t2

0x0001,

0xf0eb,	// (0x0007b28d) popup_call_audio_out_window_t_ParamLimits

0xf0eb,	// (0x0007b28d) popup_call_audio_out_window_t

0x92c4,	// (0x00075466) bg_popup_call_pane_ParamLimits

0x92c4,	// (0x00075466) bg_popup_call_pane

0x0408,	// (0x0006c5aa) call_thumbnail_pane_cp_ParamLimits

0x0408,	// (0x0006c5aa) call_thumbnail_pane_cp

0x9348,	// (0x000754ea) call_type_pane_cp01_ParamLimits

0x9348,	// (0x000754ea) call_type_pane_cp01

0x938c,	// (0x0007552e) popup_call_audio_first_window_g1_ParamLimits

0x938c,	// (0x0007552e) popup_call_audio_first_window_g1

0x93d8,	// (0x0007557a) popup_call_audio_first_window_g2_ParamLimits

0x93d8,	// (0x0007557a) popup_call_audio_first_window_g2

0x0001,

0xf0f0,	// (0x0007b292) popup_call_audio_first_window_g_ParamLimits

0xf0f0,	// (0x0007b292) popup_call_audio_first_window_g

0x941c,	// (0x000755be) popup_call_audio_first_window_t1_ParamLimits

0x941c,	// (0x000755be) popup_call_audio_first_window_t1

0x94c8,	// (0x0007566a) popup_call_audio_first_window_t4_ParamLimits

0x94c8,	// (0x0007566a) popup_call_audio_first_window_t4

0x9c76,	// (0x00075e18) popup_call_audio_first_window_t5_ParamLimits

0x9c76,	// (0x00075e18) popup_call_audio_first_window_t5

0x0002,

0xf0f5,	// (0x0007b297) popup_call_audio_first_window_t_ParamLimits

0xf0f5,	// (0x0007b297) popup_call_audio_first_window_t

0x9ca5,	// (0x00075e47) bg_popup_call_pane_cp02

0x9caf,	// (0x00075e51) call_type_pane_cp023

0x9cb7,	// (0x00075e59) popup_call_audio_wait_window_g1

0x9cbf,	// (0x00075e61) popup_call_audio_wait_window_g2

0x0001,

0xf0fc,	// (0x0007b29e) popup_call_audio_wait_window_g

0x9cc7,	// (0x00075e69) popup_call_audio_wait_window_t3

0x9cd5,	// (0x00075e77) bg_popup_call_pane_cp03_ParamLimits

0x9cd5,	// (0x00075e77) bg_popup_call_pane_cp03

0x9d35,	// (0x00075ed7) call_thumbnail_pane_cp011_ParamLimits

0x9d35,	// (0x00075ed7) call_thumbnail_pane_cp011

0x9d41,	// (0x00075ee3) call_type_pane_cp034_ParamLimits

0x9d41,	// (0x00075ee3) call_type_pane_cp034

0x9d7d,	// (0x00075f1f) popup_call_audio_second_window_g1_ParamLimits

0x9d7d,	// (0x00075f1f) popup_call_audio_second_window_g1

0x9db9,	// (0x00075f5b) popup_call_audio_second_window_g2_ParamLimits

0x9db9,	// (0x00075f5b) popup_call_audio_second_window_g2

0x0001,

0xf101,	// (0x0007b2a3) popup_call_audio_second_window_g_ParamLimits

0xf101,	// (0x0007b2a3) popup_call_audio_second_window_g

0x9df5,	// (0x00075f97) popup_call_audio_second_window_t1_ParamLimits

0x9df5,	// (0x00075f97) popup_call_audio_second_window_t1

0x9e76,	// (0x00076018) popup_call_audio_second_window_t2_ParamLimits

0x9e76,	// (0x00076018) popup_call_audio_second_window_t2

0x9eac,	// (0x0007604e) popup_call_audio_second_window_t3_ParamLimits

0x9eac,	// (0x0007604e) popup_call_audio_second_window_t3

0x0002,

0xf106,	// (0x0007b2a8) popup_call_audio_second_window_t_ParamLimits

0xf106,	// (0x0007b2a8) popup_call_audio_second_window_t

0x9ca5,	// (0x00075e47) bg_popup_call_pane_cp04

0x9ee2,	// (0x00076084) list_conf_pane

0x9eea,	// (0x0007608c) popup_call_audio_conf_window_t1

0x9ef8,	// (0x0007609a) call_thumbnail_pane_g1

0x9f00,	// (0x000760a2) bg_pinb_pane_ParamLimits

0x9f00,	// (0x000760a2) bg_pinb_pane

0x9f0e,	// (0x000760b0) find_pinb_pane

0x9f17,	// (0x000760b9) listscroll_pinb_pane_ParamLimits

0x9f17,	// (0x000760b9) listscroll_pinb_pane

0x9f26,	// (0x000760c8) pinb_bg_pane_g1

0x042c,	// (0x0006c5ce) pinb_bg_pane_g2

0x0438,	// (0x0006c5da) pinb_bg_pane_g3

0x0444,	// (0x0006c5e6) pinb_bg_pane_g4

0x0450,	// (0x0006c5f2) pinb_bg_pane_g5

0x045c,	// (0x0006c5fe) pinb_bg_pane_g6

0x0467,	// (0x0006c609) pinb_bg_pane_g7

0x0472,	// (0x0006c614) pinb_bg_pane_g8

0x047d,	// (0x0006c61f) pinb_bg_pane_g9

0x0487,	// (0x0006c629) pinb_bg_pane_g10

0x0009,

0xf10d,	// (0x0007b2af) pinb_bg_pane_g

0x04a4,	// (0x0006c646) grid_pinb_pane

0x04ad,	// (0x0006c64f) list_pinb_pane

0x04b6,	// (0x0006c658) scroll_pane_cp01_ParamLimits

0x04b6,	// (0x0006c658) scroll_pane_cp01

0x9f30,	// (0x000760d2) find_pinb_pane_g1_ParamLimits

0x9f30,	// (0x000760d2) find_pinb_pane_g1

0x9f48,	// (0x000760ea) find_pinb_pane_t1

0x9f5a,	// (0x000760fc) find_pinb_pane_t2

0x0001,

0xf127,	// (0x0007b2c9) find_pinb_pane_t

0x9f6f,	// (0x00076111) input_focus_pane_cp01_ParamLimits

0x9f6f,	// (0x00076111) input_focus_pane_cp01

0x04c8,	// (0x0006c66a) cell_pinb_pane_ParamLimits

0x04c8,	// (0x0006c66a) cell_pinb_pane

0x9f7b,	// (0x0007611d) cell_pinb_pane_g1_ParamLimits

0x9f7b,	// (0x0007611d) cell_pinb_pane_g1

0x9f8e,	// (0x00076130) cell_pinb_pane_g2_ParamLimits

0x9f8e,	// (0x00076130) cell_pinb_pane_g2

0x9f9a,	// (0x0007613c) cell_pinb_pane_g3_ParamLimits

0x9f9a,	// (0x0007613c) cell_pinb_pane_g3

0x0002,

0xf12c,	// (0x0007b2ce) cell_pinb_pane_g_ParamLimits

0xf12c,	// (0x0007b2ce) cell_pinb_pane_g

0x9ca5,	// (0x00075e47) grid_highlight_pane_cp01

0x04f6,	// (0x0006c698) list_pinb_item_pane_ParamLimits

0x04f6,	// (0x0006c698) list_pinb_item_pane

0x9ca5,	// (0x00075e47) list_highlight_pane_cp02

0x0509,	// (0x0006c6ab) list_pinb_item_pane_g1_ParamLimits

0x0509,	// (0x0006c6ab) list_pinb_item_pane_g1

0x0516,	// (0x0006c6b8) list_pinb_item_pane_g2_ParamLimits

0x0516,	// (0x0006c6b8) list_pinb_item_pane_g2

0x0522,	// (0x0006c6c4) list_pinb_item_pane_g3_ParamLimits

0x0522,	// (0x0006c6c4) list_pinb_item_pane_g3

0x0533,	// (0x0006c6d5) list_pinb_item_pane_g4_ParamLimits

0x0533,	// (0x0006c6d5) list_pinb_item_pane_g4

0x0003,

0xf133,	// (0x0007b2d5) list_pinb_item_pane_g_ParamLimits

0xf133,	// (0x0007b2d5) list_pinb_item_pane_g

0x053f,	// (0x0006c6e1) list_pinb_item_pane_t1_ParamLimits

0x053f,	// (0x0006c6e1) list_pinb_item_pane_t1

0x0574,	// (0x0006c716) calc_display_pane

0x059c,	// (0x0006c73e) calc_paper_pane

0x05bf,	// (0x0006c761) grid_calc_pane

0x9ca5,	// (0x00075e47) bg_list_pane_cp01

0x05ed,	// (0x0006c78f) clock_g1

0x05f5,	// (0x0006c797) clock_g2

0x0001,

0xf13c,	// (0x0007b2de) clock_g

0x05fd,	// (0x0006c79f) clock_t1_ParamLimits

0x05fd,	// (0x0006c79f) clock_t1

0x0612,	// (0x0006c7b4) clock_t2_ParamLimits

0x0612,	// (0x0006c7b4) clock_t2

0x0624,	// (0x0006c7c6) clock_t3_ParamLimits

0x0624,	// (0x0006c7c6) clock_t3

0x0636,	// (0x0006c7d8) clock_t4_ParamLimits

0x0636,	// (0x0006c7d8) clock_t4

0x0648,	// (0x0006c7ea) clock_t5_ParamLimits

0x0648,	// (0x0006c7ea) clock_t5

0x065d,	// (0x0006c7ff) clock_t6_ParamLimits

0x065d,	// (0x0006c7ff) clock_t6

0x066f,	// (0x0006c811) clock_t7_ParamLimits

0x066f,	// (0x0006c811) clock_t7

0x0681,	// (0x0006c823) clock_t8_ParamLimits

0x0681,	// (0x0006c823) clock_t8

0x0695,	// (0x0006c837) clock_t9_ParamLimits

0x0695,	// (0x0006c837) clock_t9

0x0008,

0xf141,	// (0x0007b2e3) clock_t_ParamLimits

0xf141,	// (0x0007b2e3) clock_t

0x9fa6,	// (0x00076148) popup_clock_analogue_window_cp02

0x9fa6,	// (0x00076148) popup_clock_digital_window_cp01

0x9fae,	// (0x00076150) listscroll_help_pane

0x9ca5,	// (0x00075e47) phob_pre_status_pane

0x9fb8,	// (0x0007615a) grid_qdial_pane

0x9f00,	// (0x000760a2) listscroll_mce_pane

0x9f00,	// (0x000760a2) bg_notes_pane

0x9fc2,	// (0x00076164) list_notes_pane

0x06a9,	// (0x0006c84b) scroll_pane_cp06

0x9fd0,	// (0x00076172) bg_calc_paper_pane

0x955c,	// (0x000756fe) list_calc_pane

0x9fe4,	// (0x00076186) bg_calc_display_pane

0x06bd,	// (0x0006c85f) calc_display_pane_t1

0x06cf,	// (0x0006c871) calc_display_pane_t2

0x9576,	// (0x00075718) calc_display_pane_t3

0x0002,

0xf154,	// (0x0007b2f6) calc_display_pane_t

0x06e1,	// (0x0006c883) cell_calc_pane_ParamLimits

0x06e1,	// (0x0006c883) cell_calc_pane

0x9ff0,	// (0x00076192) bg_calc_paper_pane_g1

0x9ffc,	// (0x0007619e) bg_calc_paper_pane_g2

0xa008,	// (0x000761aa) bg_calc_paper_pane_g3

0xa014,	// (0x000761b6) bg_calc_paper_pane_g4

0xa020,	// (0x000761c2) bg_calc_paper_pane_g5

0x0718,	// (0x0006c8ba) bg_calc_paper_pane_g6

0x0729,	// (0x0006c8cb) bg_calc_paper_pane_g7

0x073a,	// (0x0006c8dc) bg_calc_paper_pane_g8

0x0007,

0xf15b,	// (0x0007b2fd) bg_calc_paper_pane_g

0x074d,	// (0x0006c8ef) calc_bg_paper_pane_g9

0x0760,	// (0x0006c902) list_calc_item_pane_ParamLimits

0x0760,	// (0x0006c902) list_calc_item_pane

0xa7e9,	// (0x0007698b) list_calc_item_pane_g1

0x9588,	// (0x0007572a) list_calc_item_pane_t1_ParamLimits

0x9588,	// (0x0007572a) list_calc_item_pane_t1

0x077a,	// (0x0006c91c) list_calc_item_pane_t2_ParamLimits

0x077a,	// (0x0006c91c) list_calc_item_pane_t2

0x0001,

0xf16c,	// (0x0007b30e) list_calc_item_pane_t_ParamLimits

0xf16c,	// (0x0007b30e) list_calc_item_pane_t

0xa7f6,	// (0x00076998) cell_calc_pane_g1

0xa800,	// (0x000769a2) grid_highlight_pane_cp02

0xa822,	// (0x000769c4) bg_calc_display_pane_g1

0x959a,	// (0x0007573c) bg_calc_display_pane_g2

0xa82b,	// (0x000769cd) bg_calc_display_pane_g3

0x0002,

0xf176,	// (0x0007b318) bg_calc_display_pane_g

0x07ac,	// (0x0006c94e) cell_qdial_pane_ParamLimits

0x07ac,	// (0x0006c94e) cell_qdial_pane

0x07c0,	// (0x0006c962) cell_qdial_pane_g1_ParamLimits

0x07c0,	// (0x0006c962) cell_qdial_pane_g1

0x07d6,	// (0x0006c978) cell_qdial_pane_g2_ParamLimits

0x07d6,	// (0x0006c978) cell_qdial_pane_g2

0xa834,	// (0x000769d6) cell_qdial_pane_g3_ParamLimits

0xa834,	// (0x000769d6) cell_qdial_pane_g3

0x0003,

0xf17d,	// (0x0007b31f) cell_qdial_pane_g_ParamLimits

0xf17d,	// (0x0007b31f) cell_qdial_pane_g

0x07fc,	// (0x0006c99e) cell_qdial_pane_t1_ParamLimits

0x07fc,	// (0x0006c99e) cell_qdial_pane_t1

0x0814,	// (0x0006c9b6) cell_qdial_pane_t2_ParamLimits

0x0814,	// (0x0006c9b6) cell_qdial_pane_t2

0x0827,	// (0x0006c9c9) cell_qdial_pane_t3_ParamLimits

0x0827,	// (0x0006c9c9) cell_qdial_pane_t3

0x0002,

0xf186,	// (0x0007b328) cell_qdial_pane_t_ParamLimits

0xf186,	// (0x0007b328) cell_qdial_pane_t

0x9ca5,	// (0x00075e47) grid_highlight_pane_cp04

0xa840,	// (0x000769e2) thumbnail_qdial_pane_ParamLimits

0xa840,	// (0x000769e2) thumbnail_qdial_pane

0xa89c,	// (0x00076a3e) list_help_pane

0xa8a5,	// (0x00076a47) scroll_pane_cp02

0x083a,	// (0x0006c9dc) help_list_pane_t1_ParamLimits

0x083a,	// (0x0006c9dc) help_list_pane_t1

0x95a4,	// (0x00075746) bg_notes_pane_g2

0x95ac,	// (0x0007574e) bg_notes_pane_g3

0x95b4,	// (0x00075756) notes_bg_pane_g1

0x95bc,	// (0x0007575e) notes_bg_pane_g4

0x95c4,	// (0x00075766) notes_bg_pane_g5

0x95cc,	// (0x0007576e) notes_bg_pane_g6

0x95d4,	// (0x00075776) notes_bg_pane_g7

0x95dc,	// (0x0007577e) notes_bg_pane_g8

0x95e4,	// (0x00075786) notes_bg_pane_g9

0x0006,

0xf1a4,	// (0x0007b346) notes_bg_pane_g

0x0859,	// (0x0006c9fb) list_notes_text_pane_ParamLimits

0x0859,	// (0x0006c9fb) list_notes_text_pane

0xa8ae,	// (0x00076a50) list_notes_text_pane_g1

0xa02c,	// (0x000761ce) list_notes_text_pane_t1

0x086f,	// (0x0006ca11) listscroll_cale_week_pane

0x089b,	// (0x0006ca3d) bg_cale_heading_pane

0xa8d1,	// (0x00076a73) bg_cale_pane_cp01

0x08b9,	// (0x0006ca5b) cale_week_corner_pane

0x08d8,	// (0x0006ca7a) cale_week_day_heading_pane

0x08fb,	// (0x0006ca9d) cale_week_scroll_pane_g1

0x0914,	// (0x0006cab6) cale_week_scroll_pane_g2

0x092c,	// (0x0006cace) cale_week_scroll_pane_g3

0x0944,	// (0x0006cae6) cale_week_scroll_pane_g4

0x095c,	// (0x0006cafe) cale_week_scroll_pane_g5

0x0978,	// (0x0006cb1a) cale_week_scroll_pane_g6

0x0998,	// (0x0006cb3a) cale_week_scroll_pane_g7

0x09b8,	// (0x0006cb5a) cale_week_scroll_pane_g8

0x09dc,	// (0x0006cb7e) cale_week_scroll_pane_g9

0x09f4,	// (0x0006cb96) cale_week_scroll_pane_g10

0x0a0c,	// (0x0006cbae) cale_week_scroll_pane_g11

0x0a24,	// (0x0006cbc6) cale_week_scroll_pane_g12

0x0a3c,	// (0x0006cbde) cale_week_scroll_pane_g13

0x0a3c,	// (0x0006cbde) cale_week_scroll_pane_g14

0x0a3c,	// (0x0006cbde) cale_week_scroll_pane_g15

0x000e,

0xf1b3,	// (0x0007b355) cale_week_scroll_pane_g

0x0a54,	// (0x0006cbf6) cale_week_time_pane

0x0a78,	// (0x0006cc1a) grid_cale_week_pane

0xa901,	// (0x00076aa3) scroll_pane_cp08

0x0a9e,	// (0x0006cc40) cell_cale_week_pane_ParamLimits

0x0a9e,	// (0x0006cc40) cell_cale_week_pane

0x0b2c,	// (0x0006ccce) cale_week_day_heading_pane_t1

0x0b76,	// (0x0006cd18) cale_week_day_heading_pane_t2

0x0bc5,	// (0x0006cd67) cale_week_day_heading_pane_t3

0x0c14,	// (0x0006cdb6) cale_week_day_heading_pane_t4

0x0c63,	// (0x0006ce05) cale_week_day_heading_pane_t5

0x0cba,	// (0x0006ce5c) cale_week_day_heading_pane_t6

0x0d11,	// (0x0006ceb3) cale_week_day_heading_pane_t7

0x0006,

0xf1d2,	// (0x0007b374) cale_week_day_heading_pane_t

0xa91e,	// (0x00076ac0) bg_cale_side_pane

0x0d5b,	// (0x0006cefd) cale_week_time_pane_t1

0x0d75,	// (0x0006cf17) cale_week_time_pane_t2

0x0d8f,	// (0x0006cf31) cale_week_time_pane_t3

0x0da9,	// (0x0006cf4b) cale_week_time_pane_t4

0x0dc3,	// (0x0006cf65) cale_week_time_pane_t5

0x0ddd,	// (0x0006cf7f) cale_week_time_pane_t6

0x0df7,	// (0x0006cf99) cale_week_time_pane_t7

0x0e17,	// (0x0006cfb9) cale_week_time_pane_t8

0x0007,

0xf1e1,	// (0x0007b383) cale_week_time_pane_t

0x0e37,	// (0x0006cfd9) cell_cale_week_pane_g2

0x0e56,	// (0x0006cff8) cell_cale_week_pane_g3_ParamLimits

0x0e56,	// (0x0006cff8) cell_cale_week_pane_g3

0xa92c,	// (0x00076ace) grid_highlight_pane_cp07

0xa934,	// (0x00076ad6) listscroll_gms_pane

0xa93e,	// (0x00076ae0) grid_gms_pane

0xa947,	// (0x00076ae9) listscroll_gms_pane_g1

0xa94f,	// (0x00076af1) listscroll_gms_pane_g2

0x0001,

0xf1f2,	// (0x0007b394) listscroll_gms_pane_g

0x0e6e,	// (0x0006d010) scroll_pane_cp010

0x0e79,	// (0x0006d01b) cell_gms_pane_ParamLimits

0x0e79,	// (0x0006d01b) cell_gms_pane

0x0e8b,	// (0x0006d02d) cell_gms_pane_g1

0xa957,	// (0x00076af9) cell_gms_pane_g2

0xa8ae,	// (0x00076a50) cell_gms_pane_g3

0xa95f,	// (0x00076b01) cell_gms_pane_g4

0x0003,

0xf1f7,	// (0x0007b399) cell_gms_pane_g

0xa968,	// (0x00076b0a) grid_highlight_pane_cp09

0x328c,	// (0x0006f42e) phob_pre_status_pane_g1

0x3294,	// (0x0006f436) phob_pre_status_pane_g2

0x329c,	// (0x0006f43e) phob_pre_status_pane_g3

0x32a4,	// (0x0006f446) phob_pre_status_pane_g4

0x0004,

0xf5e6,	// (0x0007b788) phob_pre_status_pane_g

0x32b4,	// (0x0006f456) phob_pre_status_pane_t1

0x32c2,	// (0x0006f464) phob_pre_status_pane_t2

0x32d2,	// (0x0006f474) phob_pre_status_pane_t3

0x0002,

0xf5f1,	// (0x0007b793) phob_pre_status_pane_t

0x9ca5,	// (0x00075e47) bg_list_pane_cp05

0x0e9b,	// (0x0006d03d) grid_vorec_pane

0x0ea5,	// (0x0006d047) vorec_t1

0x0eb3,	// (0x0006d055) vorec_t2

0x0ec1,	// (0x0006d063) vorec_t3

0x0ecf,	// (0x0006d071) vorec_t4

0x95ec,	// (0x0007578e) vorec_t5

0x0edd,	// (0x0006d07f) vorec_t6

0x0006,

0xf200,	// (0x0007b3a2) vorec_t

0x0ef9,	// (0x0006d09b) wait_bar_pane_cp01

0x0f01,	// (0x0006d0a3) cell_vorec_pane_ParamLimits

0x0f01,	// (0x0006d0a3) cell_vorec_pane

0x95fa,	// (0x0007579c) cell_vorec_pane_g1

0x9ca5,	// (0x00075e47) grid_highlight_pane_cp05

0x0f2c,	// (0x0006d0ce) cams_zoom_pane

0x0f3b,	// (0x0006d0dd) image_vga_pane

0x0f55,	// (0x0006d0f7) main_camera_pane_g1

0x0f67,	// (0x0006d109) main_camera_pane_g2

0x0f77,	// (0x0006d119) main_camera_pane_g3

0x0f89,	// (0x0006d12b) main_camera_pane_g4

0x0f9b,	// (0x0006d13d) main_camera_pane_g5

0x0fad,	// (0x0006d14f) main_camera_pane_g6

0x0fbf,	// (0x0006d161) main_camera_pane_g7

0x0007,

0xf20f,	// (0x0007b3b1) main_camera_pane_g

0x0fd1,	// (0x0006d173) main_camera_pane_t1

0x0fe7,	// (0x0006d189) main_camera_pane_t2

0x0001,

0xf220,	// (0x0007b3c2) main_camera_pane_t

0x1023,	// (0x0006d1c5) cams_zoom_pane_cp_ParamLimits

0x1023,	// (0x0006d1c5) cams_zoom_pane_cp

0x104b,	// (0x0006d1ed) image_cif_pane_ParamLimits

0x104b,	// (0x0006d1ed) image_cif_pane

0x1086,	// (0x0006d228) image_subqcif_pane

0x108e,	// (0x0006d230) main_video_pane_g1_ParamLimits

0x108e,	// (0x0006d230) main_video_pane_g1

0x10b2,	// (0x0006d254) main_video_pane_g2_ParamLimits

0x10b2,	// (0x0006d254) main_video_pane_g2

0x10e6,	// (0x0006d288) main_video_pane_g3_ParamLimits

0x10e6,	// (0x0006d288) main_video_pane_g3

0x1114,	// (0x0006d2b6) main_video_pane_g4_ParamLimits

0x1114,	// (0x0006d2b6) main_video_pane_g4

0x1142,	// (0x0006d2e4) main_video_pane_g5_ParamLimits

0x1142,	// (0x0006d2e4) main_video_pane_g5

0xa97c,	// (0x00076b1e) main_video_pane_g6_ParamLimits

0xa97c,	// (0x00076b1e) main_video_pane_g6

0x0006,

0xf225,	// (0x0007b3c7) main_video_pane_g_ParamLimits

0xf225,	// (0x0007b3c7) main_video_pane_g

0x116b,	// (0x0006d30d) main_video_pane_t1_ParamLimits

0x116b,	// (0x0006d30d) main_video_pane_t1

0xa996,	// (0x00076b38) cams_zoom_pane_g1

0xa99f,	// (0x00076b41) cams_zoom_pane_g2

0xa9a8,	// (0x00076b4a) cams_zoom_pane_g3

0xa9b1,	// (0x00076b53) cams_zoom_pane_g4

0x0003,

0xf234,	// (0x0007b3d6) cams_zoom_pane_g

0x11c8,	// (0x0006d36a) grid_cams_pane

0x11e2,	// (0x0006d384) linegrid_cams_pane

0x11f5,	// (0x0006d397) cell_cams_pane_ParamLimits

0x11f5,	// (0x0006d397) cell_cams_pane

0xa9ba,	// (0x00076b5c) cams_burst_image_pane

0xa9c2,	// (0x00076b64) cell_cams_pane_g1

0x9ca5,	// (0x00075e47) grid_highlight_pane_cp03

0xa7f6,	// (0x00076998) mp_bg_pane_g1

0x9ca5,	// (0x00075e47) bg_list_pane_cp03

0xc722,	// (0x000788c4) bg_mp_pane

0xc72a,	// (0x000788cc) grid_mp_pane

0xc732,	// (0x000788d4) media_player_g1

0xc73a,	// (0x000788dc) media_player_t1

0xc748,	// (0x000788ea) media_player_t2

0xc756,	// (0x000788f8) media_player_t3

0xc764,	// (0x00078906) media_player_t4

0xc772,	// (0x00078914) media_player_t5

0xc780,	// (0x00078922) media_player_t6

0xc78e,	// (0x00078930) media_player_t7

0x0006,

0xf5d0,	// (0x0007b772) media_player_t

0xc79c,	// (0x0007893e) wait_bar_pane_cp02

0xf5b5,	// (0x0007b757) main_usb_pane_t

0x3283,	// (0x0006f425) cell_mp_pane

0xa7f6,	// (0x00076998) cell_mp_pane_g1

0x9ca5,	// (0x00075e47) grid_highlight_pane_cp06

0xa9ca,	// (0x00076b6c) grid_skin_colour_pane

0xa9d2,	// (0x00076b74) list_highlight_pane_cp03

0x128b,	// (0x0006d42d) skin_g1

0xa9da,	// (0x00076b7c) skin_t1

0xa9e9,	// (0x00076b8b) skin_t2

0x0001,

0xf269,	// (0x0007b40b) skin_t

0x1293,	// (0x0006d435) cell_skin_colour_pane_ParamLimits

0x1293,	// (0x0006d435) cell_skin_colour_pane

0xa9f7,	// (0x00076b99) cell_skin_colour_pane_g1

0x130c,	// (0x0006d4ae) call_video_g1_ParamLimits

0x130c,	// (0x0006d4ae) call_video_g1

0x1328,	// (0x0006d4ca) call_video_g2_ParamLimits

0x1328,	// (0x0006d4ca) call_video_g2

0x0001,

0xf26e,	// (0x0007b410) call_video_g_ParamLimits

0xf26e,	// (0x0007b410) call_video_g

0x137a,	// (0x0006d51c) call_video_uplink_pane_cp1_ParamLimits

0x137a,	// (0x0006d51c) call_video_uplink_pane_cp1

0xaa09,	// (0x00076bab) call_video_uplink_pane_cp2

0x1419,	// (0x0006d5bb) video_down_crop_pane_ParamLimits

0x1419,	// (0x0006d5bb) video_down_crop_pane

0x1502,	// (0x0006d6a4) video_down_pane_ParamLimits

0x1502,	// (0x0006d6a4) video_down_pane

0xaa11,	// (0x00076bb3) video_down_subqcif_pane_ParamLimits

0xaa11,	// (0x00076bb3) video_down_subqcif_pane

0xaa29,	// (0x00076bcb) video_down_subqcif_pane_cp_ParamLimits

0xaa29,	// (0x00076bcb) video_down_subqcif_pane_cp

0xaa4f,	// (0x00076bf1) im_reading_pane_ParamLimits

0xaa4f,	// (0x00076bf1) im_reading_pane

0x1610,	// (0x0006d7b2) im_writing_pane_ParamLimits

0x1610,	// (0x0006d7b2) im_writing_pane

0x1626,	// (0x0006d7c8) im_reading_pane_t1

0xaa69,	// (0x00076c0b) list_im_pane

0xaa7a,	// (0x00076c1c) scroll_pane_cp07

0x1663,	// (0x0006d805) im_writing_pane_t1_ParamLimits

0x1663,	// (0x0006d805) im_writing_pane_t1

0xaa93,	// (0x00076c35) im_writing_pane_t2_ParamLimits

0xaa93,	// (0x00076c35) im_writing_pane_t2

0x0001,

0xf278,	// (0x0007b41a) im_writing_pane_t_ParamLimits

0xf278,	// (0x0007b41a) im_writing_pane_t

0x9ca5,	// (0x00075e47) input_focus_pane_cp04

0x9ca5,	// (0x00075e47) input_focus_pane_cp05

0x1678,	// (0x0006d81a) list_im_single_pane_ParamLimits

0x1678,	// (0x0006d81a) list_im_single_pane

0x168e,	// (0x0006d830) list_single_im_pane_t1

0x3243,	// (0x0006f3e5) blid_accuracy_pane

0x324b,	// (0x0006f3ed) blid_compass_pane

0x3255,	// (0x0006f3f7) main_location_t1

0x3265,	// (0x0006f407) main_location_t2

0x3275,	// (0x0006f417) main_location_t3

0x0002,

0xf5df,	// (0x0007b781) main_location_t

0x9ca5,	// (0x00075e47) aid_levels_location

0xa7f6,	// (0x00076998) blid_accuracy_pane_g1

0xa7f6,	// (0x00076998) blid_accuracy_pane_g2

0x0001,

0xf2da,	// (0x0007b47c) blid_accuracy_pane_g

0xaadb,	// (0x00076c7d) wml_content_pane

0xab19,	// (0x00076cbb) wml_button_pane_ParamLimits

0xab19,	// (0x00076cbb) wml_button_pane

0x169d,	// (0x0006d83f) wml_list_single_large_pane_ParamLimits

0x169d,	// (0x0006d83f) wml_list_single_large_pane

0x16b3,	// (0x0006d855) wml_list_single_medium_pane_ParamLimits

0x16b3,	// (0x0006d855) wml_list_single_medium_pane

0x16cd,	// (0x0006d86f) wml_list_single_small_pane_ParamLimits

0x16cd,	// (0x0006d86f) wml_list_single_small_pane

0xab2d,	// (0x00076ccf) wml_selection_box_pane_ParamLimits

0xab2d,	// (0x00076ccf) wml_selection_box_pane

0xab40,	// (0x00076ce2) wml_list_single_pane_t1

0xab4f,	// (0x00076cf1) wml_list_single_medium_pane_t1

0xab5e,	// (0x00076d00) wml_list_single_large_pane_t1

0xab6d,	// (0x00076d0f) input_focus_pane_cp02_ParamLimits

0xab6d,	// (0x00076d0f) input_focus_pane_cp02

0xab80,	// (0x00076d22) wml_selection_box_pane_g1

0xab89,	// (0x00076d2b) wml_selection_box_pane_t1_ParamLimits

0xab89,	// (0x00076d2b) wml_selection_box_pane_t1

0x9f00,	// (0x000760a2) bg_wml_button_pane_ParamLimits

0x9f00,	// (0x000760a2) bg_wml_button_pane

0xaba1,	// (0x00076d43) wml_button_pane_g1

0xaba9,	// (0x00076d4b) wml_button_pane_t1

0xaba1,	// (0x00076d43) wml_button_bg_pane_g1

0xabb9,	// (0x00076d5b) wml_button_bg_pane_g2

0xabc1,	// (0x00076d63) wml_button_bg_pane_g3

0xabc9,	// (0x00076d6b) wml_button_bg_pane_g4

0xabd1,	// (0x00076d73) wml_button_bg_pane_g5

0xabd9,	// (0x00076d7b) wml_button_bg_pane_g6

0xabe1,	// (0x00076d83) wml_button_bg_pane_g7

0xabe9,	// (0x00076d8b) wml_button_bg_pane_g8

0xabf1,	// (0x00076d93) wml_button_bg_pane_g9

0x0008,

0xf27d,	// (0x0007b41f) wml_button_bg_pane_g

0x16e7,	// (0x0006d889) bg_list_pane_cp02

0xabf9,	// (0x00076d9b) mce_header_pane_ParamLimits

0xabf9,	// (0x00076d9b) mce_header_pane

0xac0f,	// (0x00076db1) mce_icon_pane

0xac0f,	// (0x00076db1) mce_image_pane

0xac18,	// (0x00076dba) mce_text_pane_ParamLimits

0xac18,	// (0x00076dba) mce_text_pane

0x16ef,	// (0x0006d891) scroll_pane_cp03

0xab11,	// (0x00076cb3) scroll_pane_cp04

0xac2b,	// (0x00076dcd) scroll_pane_cp05_ParamLimits

0xac2b,	// (0x00076dcd) scroll_pane_cp05

0x16f9,	// (0x0006d89b) mce_header_field_pane_ParamLimits

0x16f9,	// (0x0006d89b) mce_header_field_pane

0x1710,	// (0x0006d8b2) mce_header_field_pane_2_ParamLimits

0x1710,	// (0x0006d8b2) mce_header_field_pane_2

0x1726,	// (0x0006d8c8) mce_header_field_pane_3

0x172e,	// (0x0006d8d0) list_single_mce_message_pane_ParamLimits

0x172e,	// (0x0006d8d0) list_single_mce_message_pane

0x1745,	// (0x0006d8e7) list_single_mce_smart_pane_ParamLimits

0x1745,	// (0x0006d8e7) list_single_mce_smart_pane

0xac37,	// (0x00076dd9) input_focus_pane_cp03

0xac40,	// (0x00076de2) list_header_data_pane

0x1767,	// (0x0006d909) mce_header_field_pane_t1

0x1777,	// (0x0006d919) list_single_mce_header_pane_ParamLimits

0x1777,	// (0x0006d919) list_single_mce_header_pane

0xac48,	// (0x00076dea) list_single_mce_header_pane_t1

0xac57,	// (0x00076df9) list_single_mce_message_pane_g1

0xac5f,	// (0x00076e01) list_single_mce_message_pane_t1

0x17b1,	// (0x0006d953) bg_cale_heading_pane_cp01_ParamLimits

0x17b1,	// (0x0006d953) bg_cale_heading_pane_cp01

0xac6d,	// (0x00076e0f) bg_cale_pane_cp02_ParamLimits

0xac6d,	// (0x00076e0f) bg_cale_pane_cp02

0x17ec,	// (0x0006d98e) cale_month_corner_pane

0x180b,	// (0x0006d9ad) cale_month_day_heading_pane_ParamLimits

0x180b,	// (0x0006d9ad) cale_month_day_heading_pane

0x185e,	// (0x0006da00) cale_month_pane_g1_ParamLimits

0x185e,	// (0x0006da00) cale_month_pane_g1

0x188e,	// (0x0006da30) cale_month_pane_g2_ParamLimits

0x188e,	// (0x0006da30) cale_month_pane_g2

0x18be,	// (0x0006da60) cale_month_pane_g3_ParamLimits

0x18be,	// (0x0006da60) cale_month_pane_g3

0x18fa,	// (0x0006da9c) cale_month_pane_g4_ParamLimits

0x18fa,	// (0x0006da9c) cale_month_pane_g4

0x1936,	// (0x0006dad8) cale_month_pane_g5_ParamLimits

0x1936,	// (0x0006dad8) cale_month_pane_g5

0x197e,	// (0x0006db20) cale_month_pane_g6_ParamLimits

0x197e,	// (0x0006db20) cale_month_pane_g6

0x19ca,	// (0x0006db6c) cale_month_pane_g7_ParamLimits

0x19ca,	// (0x0006db6c) cale_month_pane_g7

0x1a1e,	// (0x0006dbc0) cale_month_pane_g8_ParamLimits

0x1a1e,	// (0x0006dbc0) cale_month_pane_g8

0x1a72,	// (0x0006dc14) cale_month_pane_g9_ParamLimits

0x1a72,	// (0x0006dc14) cale_month_pane_g9

0x1ac4,	// (0x0006dc66) cale_month_pane_g10_ParamLimits

0x1ac4,	// (0x0006dc66) cale_month_pane_g10

0x1b16,	// (0x0006dcb8) cale_month_pane_g11_ParamLimits

0x1b16,	// (0x0006dcb8) cale_month_pane_g11

0x1b68,	// (0x0006dd0a) cale_month_pane_g12_ParamLimits

0x1b68,	// (0x0006dd0a) cale_month_pane_g12

0x1bba,	// (0x0006dd5c) cale_month_pane_g13_ParamLimits

0x1bba,	// (0x0006dd5c) cale_month_pane_g13

0x000c,

0xf290,	// (0x0007b432) cale_month_pane_g_ParamLimits

0xf290,	// (0x0007b432) cale_month_pane_g

0x1c0c,	// (0x0006ddae) cale_month_week_pane

0x1c30,	// (0x0006ddd2) grid_cale_month_pane_ParamLimits

0x1c30,	// (0x0006ddd2) grid_cale_month_pane

0x1c6e,	// (0x0006de10) cale_month_day_heading_pane_t1

0x1cf4,	// (0x0006de96) cale_month_day_heading_pane_t2

0x1d85,	// (0x0006df27) cale_month_day_heading_pane_t3

0x1e16,	// (0x0006dfb8) cale_month_day_heading_pane_t4

0x1eaf,	// (0x0006e051) cale_month_day_heading_pane_t5

0x1f50,	// (0x0006e0f2) cale_month_day_heading_pane_t6

0x1ff1,	// (0x0006e193) cale_month_day_heading_pane_t7

0x0006,

0xf2ab,	// (0x0007b44d) cale_month_day_heading_pane_t

0xa91e,	// (0x00076ac0) bg_cale_side_pane_cp01

0x209a,	// (0x0006e23c) cale_month_week_pane_t1

0x20b3,	// (0x0006e255) cale_month_week_pane_t2

0x20cc,	// (0x0006e26e) cale_month_week_pane_t3

0x20e5,	// (0x0006e287) cale_month_week_pane_t4

0x20fe,	// (0x0006e2a0) cale_month_week_pane_t5

0x2117,	// (0x0006e2b9) cale_month_week_pane_t6

0x0005,

0xf2ba,	// (0x0007b45c) cale_month_week_pane_t

0x2130,	// (0x0006e2d2) cell_cale_month_pane_ParamLimits

0x2130,	// (0x0006e2d2) cell_cale_month_pane

0x9604,	// (0x000757a6) cell_cale_month_pane_g1

0x225e,	// (0x0006e400) cell_cale_month_pane_t1_ParamLimits

0x225e,	// (0x0006e400) cell_cale_month_pane_t1

0xa92c,	// (0x00076ace) grid_highlight_pane_cp08

0xa7f6,	// (0x00076998) main_smil_g1

0x227e,	// (0x0006e420) smil_status_pane

0xacac,	// (0x00076e4e) smil_text_pane

0xc642,	// (0x000787e4) bg_popup_call3_rect_pane_g8

0xc64a,	// (0x000787ec) bg_popup_call3_rect_pane_g9

0x0008,

0xf573,	// (0x0007b715) bg_popup_call3_rect_pane_g

0xc891,	// (0x00078a33) smil_status_volume_pane_g1

0xacb6,	// (0x00076e58) smil_status_pane_t1

0x974e,	// (0x000758f0) volume_smil_pane

0xaccd,	// (0x00076e6f) list_smil_text_pane

0x2293,	// (0x0006e435) scroll_pane_cp011

0x229e,	// (0x0006e440) smil_text_list_pane_t1_ParamLimits

0x229e,	// (0x0006e440) smil_text_list_pane_t1

0x9610,	// (0x000757b2) aid_volume_smil_ParamLimits

0x9610,	// (0x000757b2) aid_volume_smil

0xa7f6,	// (0x00076998) smil_volume_pane_g1

0xa7f6,	// (0x00076998) smil_volume_pane_g2

0x0001,

0xf2da,	// (0x0007b47c) smil_volume_pane_g

0x086f,	// (0x0006ca11) listscroll_cale_day_pane

0xacd7,	// (0x00076e79) bg_cale_pane

0xacef,	// (0x00076e91) list_cale_pane

0xad12,	// (0x00076eb4) scroll_pane_cp09

0xad23,	// (0x00076ec5) cale_bg_pane_g1

0xad2b,	// (0x00076ecd) cale_bg_pane_g2

0xad33,	// (0x00076ed5) cale_bg_pane_g3

0xad3b,	// (0x00076edd) cale_bg_pane_g4

0xad43,	// (0x00076ee5) cale_bg_pane_g5

0xad4b,	// (0x00076eed) cale_bg_pane_g6

0xad53,	// (0x00076ef5) cale_bg_pane_g7

0xad5b,	// (0x00076efd) cale_bg_pane_g8

0xad63,	// (0x00076f05) cale_bg_pane_g9

0x0008,

0xf2df,	// (0x0007b481) cale_bg_pane_g

0x22e0,	// (0x0006e482) list_cale_time_pane_ParamLimits

0x22e0,	// (0x0006e482) list_cale_time_pane

0xad73,	// (0x00076f15) list_cale_time_pane_g1_ParamLimits

0xad73,	// (0x00076f15) list_cale_time_pane_g1

0xad7f,	// (0x00076f21) list_cale_time_pane_g2_ParamLimits

0xad7f,	// (0x00076f21) list_cale_time_pane_g2

0x22f7,	// (0x0006e499) list_cale_time_pane_g3_ParamLimits

0x22f7,	// (0x0006e499) list_cale_time_pane_g3

0x2305,	// (0x0006e4a7) list_cale_time_pane_g4_ParamLimits

0x2305,	// (0x0006e4a7) list_cale_time_pane_g4

0x2313,	// (0x0006e4b5) list_cale_time_pane_g5_ParamLimits

0x2313,	// (0x0006e4b5) list_cale_time_pane_g5

0x0005,

0xf2f2,	// (0x0007b494) list_cale_time_pane_g_ParamLimits

0xf2f2,	// (0x0007b494) list_cale_time_pane_g

0xad99,	// (0x00076f3b) list_cale_time_pane_t1_ParamLimits

0xad99,	// (0x00076f3b) list_cale_time_pane_t1

0xadc1,	// (0x00076f63) list_cale_time_pane_t2_ParamLimits

0xadc1,	// (0x00076f63) list_cale_time_pane_t2

0x2610,	// (0x0006e7b2) aid_blid_cardinal_pane

0x264e,	// (0x0006e7f0) compass_pane_t4

0xade9,	// (0x00076f8b) list_cale_time_pane_t4_ParamLimits

0xade9,	// (0x00076f8b) list_cale_time_pane_t4

0x265c,	// (0x0006e7fe) compass_pane_t5

0x266a,	// (0x0006e80c) compass_pane_t6

0x2678,	// (0x0006e81a) compass_pane_t7

0xb29a,	// (0x0007743c) navi_pane_cc_t1

0xb499,	// (0x0007763b) aid_phob_thumbnail_center_pane

0x2c53,	// (0x0006edf5) main_postcard_pane_g4_ParamLimits

0x0002,

0xf2ff,	// (0x0007b4a1) list_cale_time_pane_t_ParamLimits

0xf2ff,	// (0x0007b4a1) list_cale_time_pane_t

0x91da,	// (0x0007537c) bg_popup_window_pane_cp02_ParamLimits

0x91da,	// (0x0007537c) bg_popup_window_pane_cp02

0xae11,	// (0x00076fb3) heading_pane_cp01_ParamLimits

0xae11,	// (0x00076fb3) heading_pane_cp01

0xae1d,	// (0x00076fbf) loc_req_pane_ParamLimits

0xae1d,	// (0x00076fbf) loc_req_pane

0xae2d,	// (0x00076fcf) loc_type_pane_ParamLimits

0xae2d,	// (0x00076fcf) loc_type_pane

0xae3f,	// (0x00076fe1) loc_type_pane_t1_ParamLimits

0xae3f,	// (0x00076fe1) loc_type_pane_t1

0xae51,	// (0x00076ff3) loc_type_pane_t2_ParamLimits

0xae51,	// (0x00076ff3) loc_type_pane_t2

0xae63,	// (0x00077005) loc_type_pane_t3_ParamLimits

0xae63,	// (0x00077005) loc_type_pane_t3

0x0002,

0xf306,	// (0x0007b4a8) loc_type_pane_t_ParamLimits

0xf306,	// (0x0007b4a8) loc_type_pane_t

0xae75,	// (0x00077017) list_loc_req_pane

0xae7f,	// (0x00077021) scroll_pane_cp012

0x2321,	// (0x0006e4c3) list_single_loc_request_popup_menu_pane_ParamLimits

0x2321,	// (0x0006e4c3) list_single_loc_request_popup_menu_pane

0xae8a,	// (0x0007702c) list_single_loc_request_popup_menu_pane_g1_ParamLimits

0xae8a,	// (0x0007702c) list_single_loc_request_popup_menu_pane_g1

0xae96,	// (0x00077038) list_single_loc_request_popup_menu_pane_g2_ParamLimits

0xae96,	// (0x00077038) list_single_loc_request_popup_menu_pane_g2

0x0001,

0xf30d,	// (0x0007b4af) list_single_loc_request_popup_menu_pane_g_ParamLimits

0xf30d,	// (0x0007b4af) list_single_loc_request_popup_menu_pane_g

0xaea2,	// (0x00077044) list_single_loc_request_popup_menu_pane_t1_ParamLimits

0xaea2,	// (0x00077044) list_single_loc_request_popup_menu_pane_t1

0x9f00,	// (0x000760a2) bg_popup_window_pane_cp03_ParamLimits

0x9f00,	// (0x000760a2) bg_popup_window_pane_cp03

0xb355,	// (0x000774f7) heading_loc_req_pane_ParamLimits

0xb355,	// (0x000774f7) heading_loc_req_pane

0x232e,	// (0x0006e4d0) popup_dyc_status_message_window_g1_ParamLimits

0x232e,	// (0x0006e4d0) popup_dyc_status_message_window_g1

0x2342,	// (0x0006e4e4) popup_dyc_status_message_window_t1_ParamLimits

0x2342,	// (0x0006e4e4) popup_dyc_status_message_window_t1

0x2357,	// (0x0006e4f9) popup_dyc_status_message_window_t2_ParamLimits

0x2357,	// (0x0006e4f9) popup_dyc_status_message_window_t2

0x236c,	// (0x0006e50e) popup_dyc_status_message_window_t3_ParamLimits

0x236c,	// (0x0006e50e) popup_dyc_status_message_window_t3

0x0002,

0xf312,	// (0x0007b4b4) popup_dyc_status_message_window_t_ParamLimits

0xf312,	// (0x0007b4b4) popup_dyc_status_message_window_t

0x9ca5,	// (0x00075e47) bg_heading_pane_cp01

0xaeb8,	// (0x0007705a) heading_loc_req_pane_g1

0xaec0,	// (0x00077062) heading_loc_req_pane_g2

0xaec8,	// (0x0007706a) heading_loc_req_pane_g3

0x0002,

0xf319,	// (0x0007b4bb) heading_loc_req_pane_g

0xaed0,	// (0x00077072) heading_loc_req_pane_t1

0xaedf,	// (0x00077081) bg_popup_sub_pane_cp01_ParamLimits

0xaedf,	// (0x00077081) bg_popup_sub_pane_cp01

0xaeed,	// (0x0007708f) popup_cale_events_window_g1_ParamLimits

0xaeed,	// (0x0007708f) popup_cale_events_window_g1

0xaf0d,	// (0x000770af) popup_cale_events_window_g2_ParamLimits

0xaf0d,	// (0x000770af) popup_cale_events_window_g2

0x0001,

0xf34d,	// (0x0007b4ef) popup_cale_events_window_g_ParamLimits

0xf34d,	// (0x0007b4ef) popup_cale_events_window_g

0xaf2d,	// (0x000770cf) popup_cale_events_window_t1_ParamLimits

0xaf2d,	// (0x000770cf) popup_cale_events_window_t1

0xaf3f,	// (0x000770e1) popup_cale_events_window_t2_ParamLimits

0xaf3f,	// (0x000770e1) popup_cale_events_window_t2

0xaf7d,	// (0x0007711f) popup_cale_events_window_t3_ParamLimits

0xaf7d,	// (0x0007711f) popup_cale_events_window_t3

0xafb7,	// (0x00077159) popup_cale_events_window_t4_ParamLimits

0xafb7,	// (0x00077159) popup_cale_events_window_t4

0x0003,

0xf352,	// (0x0007b4f4) popup_cale_events_window_t_ParamLimits

0xf352,	// (0x0007b4f4) popup_cale_events_window_t

0x241e,	// (0x0006e5c0) call_type_pane

0x242e,	// (0x0006e5d0) popup_call_status_window_g1

0x2442,	// (0x0006e5e4) popup_call_status_window_g2

0x2456,	// (0x0006e5f8) popup_call_status_window_g3

0x0002,

0xf35b,	// (0x0007b4fd) popup_call_status_window_g

0xafed,	// (0x0007718f) call_type_pane_g1

0xaff6,	// (0x00077198) call_type_pane_g2

0x0001,

0xf362,	// (0x0007b504) call_type_pane_g

0x9ca5,	// (0x00075e47) bg_popup_sub_pane_cp02

0xafff,	// (0x000771a1) listscroll_popup_wml_pane

0xb007,	// (0x000771a9) list_wml_pane

0xb011,	// (0x000771b3) scroll_pane_cp013

0xb01c,	// (0x000771be) list_single_graphic_popup_wml_pane_ParamLimits

0xb01c,	// (0x000771be) list_single_graphic_popup_wml_pane

0xa7f6,	// (0x00076998) list_single_graphic_popup_wml_pane_g1

0xb030,	// (0x000771d2) list_single_graphic_popup_wml_pane_g2

0x0001,

0xf367,	// (0x0007b509) list_single_graphic_popup_wml_pane_g

0xb038,	// (0x000771da) list_single_graphic_popup_wml_pane_t1

0xb04e,	// (0x000771f0) aid_call_pane

0x9ef8,	// (0x0007609a) popup_clock_analogue_window_g1

0x9ef8,	// (0x0007609a) popup_clock_analogue_window_g2

0x9632,	// (0x000757d4) popup_clock_analogue_window_g3

0x9632,	// (0x000757d4) popup_clock_analogue_window_g4

0xa7f6,	// (0x00076998) popup_clock_analogue_window_g5

0x0004,

0xf36c,	// (0x0007b50e) popup_clock_analogue_window_g

0x963a,	// (0x000757dc) popup_clock_analogue_window_t1

0x9648,	// (0x000757ea) clock_digital_number_pane_ParamLimits

0x9648,	// (0x000757ea) clock_digital_number_pane

0x9654,	// (0x000757f6) clock_digital_number_pane_cp02_ParamLimits

0x9654,	// (0x000757f6) clock_digital_number_pane_cp02

0x9660,	// (0x00075802) clock_digital_number_pane_cp03_ParamLimits

0x9660,	// (0x00075802) clock_digital_number_pane_cp03

0x966c,	// (0x0007580e) clock_digital_number_pane_cp04_ParamLimits

0x966c,	// (0x0007580e) clock_digital_number_pane_cp04

0x967c,	// (0x0007581e) clock_digital_separator_pane_ParamLimits

0x967c,	// (0x0007581e) clock_digital_separator_pane

0x9688,	// (0x0007582a) popup_clock_digital_window_t1

0xa7f6,	// (0x00076998) clock_digital_number_pane_g1

0xa7f6,	// (0x00076998) clock_digital_number_pane_g2

0x0001,

0xf2da,	// (0x0007b47c) clock_digital_number_pane_g

0xa7f6,	// (0x00076998) clock_digital_separator_pane_g1

0xa7f6,	// (0x00076998) clock_digital_separator_pane_g2

0x0001,

0xf2da,	// (0x0007b47c) clock_digital_separator_pane_g

0x9ca5,	// (0x00075e47) bg_popup_window_pane_cp04

0xb056,	// (0x000771f8) heading_pane_cp03

0xb05e,	// (0x00077200) listscroll_popup_gms_pane

0xb066,	// (0x00077208) grid_large_graphic_popup_pane

0xb070,	// (0x00077212) listscroll_popup_gms_pane_g1

0xb078,	// (0x0007721a) listscroll_popup_gms_pane_g2

0x0001,

0xf377,	// (0x0007b519) listscroll_popup_gms_pane_g

0xab11,	// (0x00076cb3) scroll_pane_cp014

0xb080,	// (0x00077222) cell_large_graphic_popup_pane_ParamLimits

0xb080,	// (0x00077222) cell_large_graphic_popup_pane

0xb098,	// (0x0007723a) cell_large_graphic_popup_pane_g1_ParamLimits

0xb098,	// (0x0007723a) cell_large_graphic_popup_pane_g1

0xb0a4,	// (0x00077246) cell_large_graphic_popup_pane_g2_ParamLimits

0xb0a4,	// (0x00077246) cell_large_graphic_popup_pane_g2

0xb0b0,	// (0x00077252) cell_large_graphic_popup_pane_g3_ParamLimits

0xb0b0,	// (0x00077252) cell_large_graphic_popup_pane_g3

0xb0bd,	// (0x0007725f) cell_large_graphic_popup_pane_g4_ParamLimits

0xb0bd,	// (0x0007725f) cell_large_graphic_popup_pane_g4

0x0003,

0xf37c,	// (0x0007b51e) cell_large_graphic_popup_pane_g_ParamLimits

0xf37c,	// (0x0007b51e) cell_large_graphic_popup_pane_g

0xb0cd,	// (0x0007726f) grid_highlight_pane_cp010

0xa7f6,	// (0x00076998) bg_popup_call_pane_g1

0xb0d7,	// (0x00077279) list_single_graphic_popup_conf_pane_ParamLimits

0xb0d7,	// (0x00077279) list_single_graphic_popup_conf_pane

0xb0ea,	// (0x0007728c) list_highlight_pane_cp01

0xb0f3,	// (0x00077295) list_single_graphic_popup_conf_pane_g1

0xb0fb,	// (0x0007729d) list_single_graphic_popup_conf_pane_g2

0x0001,

0xf385,	// (0x0007b527) list_single_graphic_popup_conf_pane_g

0xb103,	// (0x000772a5) list_single_graphic_popup_conf_pane_t1

0xb111,	// (0x000772b3) linegrid_cams_pane_g1

0x2465,	// (0x0006e607) linegrid_cams_pane_g2

0xa8ae,	// (0x00076a50) linegrid_cams_pane_g3

0xb11a,	// (0x000772bc) linegrid_cams_pane_g4

0x246e,	// (0x0006e610) linegrid_cams_pane_g5

0x2477,	// (0x0006e619) linegrid_cams_pane_g6

0xa95f,	// (0x00076b01) linegrid_cams_pane_g7

0x0006,

0xf38a,	// (0x0007b52c) linegrid_cams_pane_g

0xb123,	// (0x000772c5) popup_clock_analogue_window

0xb123,	// (0x000772c5) popup_clock_digital_window

0x9ca5,	// (0x00075e47) popup_phob_thumbnail_window

0xa7f6,	// (0x00076998) call_video_uplink_pane_g1

0xb12c,	// (0x000772ce) call_video_uplink_pane_g2

0x0001,

0xf399,	// (0x0007b53b) call_video_uplink_pane_g

0xa92c,	// (0x00076ace) video_uplink_pane

0xb134,	// (0x000772d6) mce_image_pane_g1

0x2482,	// (0x0006e624) mce_image_pane_g2

0x248a,	// (0x0006e62c) mce_image_pane_g3

0x2492,	// (0x0006e634) mce_image_pane_g4

0x249c,	// (0x0006e63e) mce_image_pane_g5

0x0004,

0xf39e,	// (0x0007b540) mce_image_pane_g

0xb13e,	// (0x000772e0) control_top_pane_stacon_cp01_ParamLimits

0xb13e,	// (0x000772e0) control_top_pane_stacon_cp01

0xb152,	// (0x000772f4) uni_indicator_pane_stacon_cp01_ParamLimits

0xb152,	// (0x000772f4) uni_indicator_pane_stacon_cp01

0xb163,	// (0x00077305) bg_popup_sub_pane_cp03

0x24a4,	// (0x0006e646) chi_dic_find_pane

0x24ac,	// (0x0006e64e) listscroll_chi_dic_pane

0x24b5,	// (0x0006e657) main_pane_chidic_g1

0xb16d,	// (0x0007730f) chi_dic_find_pane_t1

0xb17b,	// (0x0007731d) find_chidic_pane

0xb184,	// (0x00077326) chi_dic_list_pane_ParamLimits

0xb184,	// (0x00077326) chi_dic_list_pane

0xb195,	// (0x00077337) scroll_pane_cp020

0xb19d,	// (0x0007733f) find_chidic_pane_t1

0x9ca5,	// (0x00075e47) input_focus_pane_cp06

0x24c8,	// (0x0006e66a) list_chi_dic_pane_ParamLimits

0x24c8,	// (0x0006e66a) list_chi_dic_pane

0x24db,	// (0x0006e67d) list_chi_dic_pane_t1_ParamLimits

0x24db,	// (0x0006e67d) list_chi_dic_pane_t1

0x9ca5,	// (0x00075e47) list_highlight_pane_cp020

0xb1ac,	// (0x0007734e) bg_cale_heading_pane_g1

0x24ee,	// (0x0006e690) bg_cale_heading_pane_g2

0x24f6,	// (0x0006e698) bg_cale_heading_pane_g3

0x24fe,	// (0x0006e6a0) bg_cale_heading_pane_g4

0x2508,	// (0x0006e6aa) bg_cale_heading_pane_g5

0x2512,	// (0x0006e6b4) bg_cale_heading_pane_g6

0x251a,	// (0x0006e6bc) bg_cale_heading_pane_g7

0x2522,	// (0x0006e6c4) bg_cale_heading_pane_g8

0x252c,	// (0x0006e6ce) bg_cale_heading_pane_g9

0x0008,

0xf3a9,	// (0x0007b54b) bg_cale_heading_pane_g

0xb1ac,	// (0x0007734e) bg_cale_side_pane_g1

0x2536,	// (0x0006e6d8) bg_cale_side_pane_g2

0x253e,	// (0x0006e6e0) bg_cale_side_pane_g3

0x2546,	// (0x0006e6e8) bg_cale_side_pane_g4

0x254e,	// (0x0006e6f0) bg_cale_side_pane_g5

0x2556,	// (0x0006e6f8) bg_cale_side_pane_g6

0x255e,	// (0x0006e700) bg_cale_side_pane_g7

0x2566,	// (0x0006e708) bg_cale_side_pane_g8

0x256e,	// (0x0006e710) bg_cale_side_pane_g9

0x0008,

0xf3bc,	// (0x0007b55e) bg_cale_side_pane_g

0x2576,	// (0x0006e718) popup_call_status_window_ParamLimits

0x2576,	// (0x0006e718) popup_call_status_window

0xb1b4,	// (0x00077356) stacon_top_pane

0xb1bc,	// (0x0007735e) status_pane_ParamLimits

0xb1bc,	// (0x0007735e) status_pane

0xb1d1,	// (0x00077373) status_small_pane

0xb1d9,	// (0x0007737b) control_pane

0x9ca5,	// (0x00075e47) stacon_bottom_pane

0xb1e1,	// (0x00077383) list_single_mce_smart_pane_t1_ParamLimits

0xb1e1,	// (0x00077383) list_single_mce_smart_pane_t1

0xb1f4,	// (0x00077396) list_single_mce_smart_pane_t2_ParamLimits

0xb1f4,	// (0x00077396) list_single_mce_smart_pane_t2

0x0001,

0xf3cf,	// (0x0007b571) list_single_mce_smart_pane_t_ParamLimits

0xf3cf,	// (0x0007b571) list_single_mce_smart_pane_t

0x25bd,	// (0x0006e75f) compass_pane

0x25c6,	// (0x0006e768) main_location2_pane_t1

0x25d8,	// (0x0006e77a) main_location2_pane_t2

0x25ea,	// (0x0006e78c) main_location2_pane_t3

0x0003,

0xf3d4,	// (0x0007b576) main_location2_pane_t

0xb213,	// (0x000773b5) compass_pane_g1_ParamLimits

0xb213,	// (0x000773b5) compass_pane_g1

0x2630,	// (0x0006e7d2) compass_pane_t1

0x263f,	// (0x0006e7e1) compass_pane_t2

0x0005,

0xf3dd,	// (0x0007b57f) compass_pane_t

0x2686,	// (0x0006e828) text_secondary_cp61

0xb291,	// (0x00077433) navi_pane_cams_g5

0xb30d,	// (0x000774af) navi_pane_im_t1

0xb31b,	// (0x000774bd) navi_pane_mp_g1_ParamLimits

0xb31b,	// (0x000774bd) navi_pane_mp_g1

0xb32f,	// (0x000774d1) navi_pane_mp_g2_ParamLimits

0xb32f,	// (0x000774d1) navi_pane_mp_g2

0xb33b,	// (0x000774dd) navi_pane_mp_g3_ParamLimits

0xb33b,	// (0x000774dd) navi_pane_mp_g3

0x0002,

0xf3f1,	// (0x0007b593) navi_pane_mp_g_ParamLimits

0xf3f1,	// (0x0007b593) navi_pane_mp_g

0xb361,	// (0x00077503) navi_pane_mp_t1

0xb36f,	// (0x00077511) navi_pane_mp_t2

0x0002,

0xf3f8,	// (0x0007b59a) navi_pane_mp_t

0xb3da,	// (0x0007757c) navi_pane_vt_g1

0xb361,	// (0x00077503) navi_pane_vt_t1

0xb3e2,	// (0x00077584) navi_slider_pane

0xb3f2,	// (0x00077594) zooming_pane

0xb3fa,	// (0x0007759c) navi_slider_pane_g1

0x96a5,	// (0x00075847) navi_slider_pane_g2

0x0006,

0xf3ff,	// (0x0007b5a1) navi_slider_pane_g

0xb41e,	// (0x000775c0) aid_levels_zoom

0xb426,	// (0x000775c8) zooming_pane_g1

0xb42e,	// (0x000775d0) zooming_pane_g2

0xb42e,	// (0x000775d0) zooming_pane_g3

0x0002,

0xf40e,	// (0x0007b5b0) zooming_pane_g

0xb436,	// (0x000775d8) level_10_zoom

0xb43f,	// (0x000775e1) level_11_zoom

0xb448,	// (0x000775ea) level_1_zoom

0xb451,	// (0x000775f3) level_2_zoom

0xb45a,	// (0x000775fc) level_3_zoom

0xb463,	// (0x00077605) level_4_zoom

0xb46c,	// (0x0007760e) level_5_zoom

0xb475,	// (0x00077617) level_6_zoom

0xb47e,	// (0x00077620) level_7_zoom

0xb487,	// (0x00077629) level_8_zoom

0xb490,	// (0x00077632) level_9_zoom

0xb4a1,	// (0x00077643) popup_phob_thumbnail_window_g1

0xb4a9,	// (0x0007764b) popup_phob_thumbnail_window_g2

0x0001,

0xf415,	// (0x0007b5b7) popup_phob_thumbnail_window_g

0xc7a4,	// (0x00078946) level_1_location

0xc7ac,	// (0x0007894e) level_2_location

0xc7b4,	// (0x00078956) level_3_location

0xc7bc,	// (0x0007895e) level_4_location

0xb3f2,	// (0x00077594) level_5_location

0x26d7,	// (0x0006e879) mce_icon_pane_g1

0x26e1,	// (0x0006e883) mce_icon_pane_g2

0x0001,

0xf41a,	// (0x0007b5bc) mce_icon_pane_g

0x26eb,	// (0x0006e88d) main_mup_pane_g1_ParamLimits

0x26eb,	// (0x0006e88d) main_mup_pane_g1

0x2701,	// (0x0006e8a3) main_mup_pane_g2_ParamLimits

0x2701,	// (0x0006e8a3) main_mup_pane_g2

0x2719,	// (0x0006e8bb) main_mup_pane_g3_ParamLimits

0x2719,	// (0x0006e8bb) main_mup_pane_g3

0x2731,	// (0x0006e8d3) main_mup_pane_g4_ParamLimits

0x2731,	// (0x0006e8d3) main_mup_pane_g4

0x2749,	// (0x0006e8eb) main_mup_pane_g5_ParamLimits

0x2749,	// (0x0006e8eb) main_mup_pane_g5

0x2765,	// (0x0006e907) main_mup_pane_g6_ParamLimits

0x2765,	// (0x0006e907) main_mup_pane_g6

0x277d,	// (0x0006e91f) main_mup_pane_g7_ParamLimits

0x277d,	// (0x0006e91f) main_mup_pane_g7

0x2795,	// (0x0006e937) main_mup_pane_g8_ParamLimits

0x2795,	// (0x0006e937) main_mup_pane_g8

0x27ad,	// (0x0006e94f) main_mup_pane_g9_ParamLimits

0x27ad,	// (0x0006e94f) main_mup_pane_g9

0x27c7,	// (0x0006e969) main_mup_pane_g10_ParamLimits

0x27c7,	// (0x0006e969) main_mup_pane_g10

0x27e1,	// (0x0006e983) main_mup_pane_g11_ParamLimits

0x27e1,	// (0x0006e983) main_mup_pane_g11

0x27f5,	// (0x0006e997) main_mup_pane_g12_ParamLimits

0x27f5,	// (0x0006e997) main_mup_pane_g12

0x280b,	// (0x0006e9ad) main_mup_pane_g13_ParamLimits

0x280b,	// (0x0006e9ad) main_mup_pane_g13

0x000c,

0xf41f,	// (0x0007b5c1) main_mup_pane_g_ParamLimits

0xf41f,	// (0x0007b5c1) main_mup_pane_g

0x281f,	// (0x0006e9c1) main_mup_pane_t1_ParamLimits

0x281f,	// (0x0006e9c1) main_mup_pane_t1

0x2839,	// (0x0006e9db) main_mup_pane_t2_ParamLimits

0x2839,	// (0x0006e9db) main_mup_pane_t2

0x2851,	// (0x0006e9f3) main_mup_pane_t3_ParamLimits

0x2851,	// (0x0006e9f3) main_mup_pane_t3

0x2869,	// (0x0006ea0b) main_mup_pane_t4_ParamLimits

0x2869,	// (0x0006ea0b) main_mup_pane_t4

0x2887,	// (0x0006ea29) main_mup_pane_t5_ParamLimits

0x2887,	// (0x0006ea29) main_mup_pane_t5

0x289c,	// (0x0006ea3e) main_mup_pane_t6_ParamLimits

0x289c,	// (0x0006ea3e) main_mup_pane_t6

0x0005,

0xf43a,	// (0x0007b5dc) main_mup_pane_t_ParamLimits

0xf43a,	// (0x0007b5dc) main_mup_pane_t

0x28ae,	// (0x0006ea50) mup_progress_pane_ParamLimits

0x28ae,	// (0x0006ea50) mup_progress_pane

0x28ba,	// (0x0006ea5c) mup_visualizer_pane_ParamLimits

0x28ba,	// (0x0006ea5c) mup_visualizer_pane

0x28ee,	// (0x0006ea90) mup_volume_pane_ParamLimits

0x28ee,	// (0x0006ea90) mup_volume_pane

0xb347,	// (0x000774e9) mup_visualizer_pane_g1_ParamLimits

0xb347,	// (0x000774e9) mup_visualizer_pane_g1

0xb347,	// (0x000774e9) mup_visualizer_pane_g2_ParamLimits

0xb347,	// (0x000774e9) mup_visualizer_pane_g2

0xb213,	// (0x000773b5) mup_visualizer_pane_g3_ParamLimits

0xb213,	// (0x000773b5) mup_visualizer_pane_g3

0x0002,

0xf447,	// (0x0007b5e9) mup_visualizer_pane_g_ParamLimits

0xf447,	// (0x0007b5e9) mup_visualizer_pane_g

0xa7f6,	// (0x00076998) mup_volume_pane_g1

0xb4b9,	// (0x0007765b) mup_volume_pane_g2

0x0001,

0xf44e,	// (0x0007b5f0) mup_volume_pane_g

0xa7f6,	// (0x00076998) mup_progress_pane_g1

0xb4c2,	// (0x00077664) mup_progress_pane_g2

0xb4cb,	// (0x0007766d) mup_progress_pane_g3

0x0002,

0xf453,	// (0x0007b5f5) mup_progress_pane_g

0x9ca5,	// (0x00075e47) bg_popup_window_pane_cp05

0xb4d4,	// (0x00077676) heading_pane_cp02_ParamLimits

0xb4d4,	// (0x00077676) heading_pane_cp02

0xb4ee,	// (0x00077690) list_popup_blid_pane

0xb4f6,	// (0x00077698) list_blid_sat_info_pane_ParamLimits

0xb4f6,	// (0x00077698) list_blid_sat_info_pane

0xb509,	// (0x000776ab) list_blid_sat_info_pane_g1

0xb511,	// (0x000776b3) list_blid_sat_info_pane_t1

0x2a04,	// (0x0006eba6) mup_equalizer_pane_ParamLimits

0x2a04,	// (0x0006eba6) mup_equalizer_pane

0x2a1d,	// (0x0006ebbf) mup_equalizer_pane_cp1_ParamLimits

0x2a1d,	// (0x0006ebbf) mup_equalizer_pane_cp1

0x2a3a,	// (0x0006ebdc) mup_equalizer_pane_cp2_ParamLimits

0x2a3a,	// (0x0006ebdc) mup_equalizer_pane_cp2

0x2a57,	// (0x0006ebf9) mup_equalizer_pane_cp3_ParamLimits

0x2a57,	// (0x0006ebf9) mup_equalizer_pane_cp3

0x2a78,	// (0x0006ec1a) mup_equalizer_pane_cp4_ParamLimits

0x2a78,	// (0x0006ec1a) mup_equalizer_pane_cp4

0x2a99,	// (0x0006ec3b) mup_equalizer_pane_cp5

0x2aad,	// (0x0006ec4f) mup_equalizer_pane_cp6

0x2ac1,	// (0x0006ec63) mup_equalizer_pane_cp7

0xc6c2,	// (0x00078864) bg_popup_call_poc_act_pane_g9

0xc6ca,	// (0x0007886c) bg_popup_call_poc_act_pane_g10

0xc6d2,	// (0x00078874) bg_popup_call_poc_act_pane_g11

0x000a,

0x9f00,	// (0x000760a2) mup_scale_pane

0xa7f6,	// (0x00076998) mup_scale_pane_g1

0xb51f,	// (0x000776c1) mup_scale_pane_g2

0x0006,

0xf46f,	// (0x0007b611) mup_scale_pane_g

0xb543,	// (0x000776e5) msg_data_pane

0xb54b,	// (0x000776ed) scroll_pane_cp017

0xa151,	// (0x000762f3) bg_list_pane_cp04_ParamLimits

0xa151,	// (0x000762f3) bg_list_pane_cp04

0xb553,	// (0x000776f5) msg_data_pane_g1

0x2ae7,	// (0x0006ec89) msg_data_pane_g2

0x2aef,	// (0x0006ec91) msg_data_pane_g3

0x2af7,	// (0x0006ec99) msg_data_pane_g4

0x2aff,	// (0x0006eca1) msg_data_pane_g5

0x2b07,	// (0x0006eca9) msg_data_pane_g6

0x2b0f,	// (0x0006ecb1) msg_data_pane_g7

0x0006,

0xf47e,	// (0x0007b620) msg_data_pane_g

0x2b17,	// (0x0006ecb9) msg_text_pane_ParamLimits

0x2b17,	// (0x0006ecb9) msg_text_pane

0x2b40,	// (0x0006ece2) qrid_highlight_pane_cp011_ParamLimits

0x2b40,	// (0x0006ece2) qrid_highlight_pane_cp011

0x9ca5,	// (0x00075e47) msg_body_pane

0x9ca5,	// (0x00075e47) msg_header_pane

0xb55b,	// (0x000776fd) input_focus_pane_cp07

0xa171,	// (0x00076313) msg_header_pane_t1_ParamLimits

0xa171,	// (0x00076313) msg_header_pane_t1

0xa183,	// (0x00076325) msg_header_pane_t2_ParamLimits

0xa183,	// (0x00076325) msg_header_pane_t2

0x0001,

0xf492,	// (0x0007b634) msg_header_pane_t_ParamLimits

0xf492,	// (0x0007b634) msg_header_pane_t

0xb570,	// (0x00077712) msg_body_pane_g1

0xa195,	// (0x00076337) msg_body_pane_t1_ParamLimits

0xa195,	// (0x00076337) msg_body_pane_t1

0xa1c6,	// (0x00076368) msg_body_pane_t2_ParamLimits

0xa1c6,	// (0x00076368) msg_body_pane_t2

0xa1d8,	// (0x0007637a) msg_body_pane_t3_ParamLimits

0xa1d8,	// (0x0007637a) msg_body_pane_t3

0x0002,

0xf497,	// (0x0007b639) msg_body_pane_t_ParamLimits

0xf497,	// (0x0007b639) msg_body_pane_t

0x2ba9,	// (0x0006ed4b) main_viewer_pane_g1_ParamLimits

0x2ba9,	// (0x0006ed4b) main_viewer_pane_g1

0x2bb7,	// (0x0006ed59) main_viewer_pane_g2_ParamLimits

0x2bb7,	// (0x0006ed59) main_viewer_pane_g2

0x2bc5,	// (0x0006ed67) main_viewer_pane_g3_ParamLimits

0x2bc5,	// (0x0006ed67) main_viewer_pane_g3

0x2bd4,	// (0x0006ed76) main_viewer_pane_g4_ParamLimits

0x2bd4,	// (0x0006ed76) main_viewer_pane_g4

0x96cf,	// (0x00075871) main_viewer_pane_g5_ParamLimits

0x96cf,	// (0x00075871) main_viewer_pane_g5

0x96cf,	// (0x00075871) main_viewer_pane_g7_ParamLimits

0x96cf,	// (0x00075871) main_viewer_pane_g7

0xae8a,	// (0x0007702c) main_viewer_pane_g8_ParamLimits

0xae8a,	// (0x0007702c) main_viewer_pane_g8

0x0007,

0xf4a7,	// (0x0007b649) main_viewer_pane_g_ParamLimits

0xf4a7,	// (0x0007b649) main_viewer_pane_g

0xb578,	// (0x0007771a) viewer_content_pane_ParamLimits

0xb578,	// (0x0007771a) viewer_content_pane

0x2c10,	// (0x0006edb2) main_postcard_pane_g1_ParamLimits

0x2c10,	// (0x0006edb2) main_postcard_pane_g1

0x2c26,	// (0x0006edc8) main_postcard_pane_g2_ParamLimits

0x2c26,	// (0x0006edc8) main_postcard_pane_g2

0x2c3c,	// (0x0006edde) main_postcard_pane_g3_ParamLimits

0x2c3c,	// (0x0006edde) main_postcard_pane_g3

0x0005,

0xf4b8,	// (0x0007b65a) main_postcard_pane_g_ParamLimits

0xf4b8,	// (0x0007b65a) main_postcard_pane_g

0x2c53,	// (0x0006edf5) main_postcard_pane_g4

0xc8a4,	// (0x00078a46) smil_status_volume_pane_g2

0x2c96,	// (0x0006ee38) postcard_pane_ParamLimits

0x2c96,	// (0x0006ee38) postcard_pane

0xb586,	// (0x00077728) postcard_pane_g1_ParamLimits

0xb586,	// (0x00077728) postcard_pane_g1

0x2cd8,	// (0x0006ee7a) postcard_pane_g2_ParamLimits

0x2cd8,	// (0x0006ee7a) postcard_pane_g2

0x2ce4,	// (0x0006ee86) postcard_pane_g3_ParamLimits

0x2ce4,	// (0x0006ee86) postcard_pane_g3

0xb594,	// (0x00077736) postcard_pane_g4_ParamLimits

0xb594,	// (0x00077736) postcard_pane_g4

0x2cf0,	// (0x0006ee92) postcard_pane_g5_ParamLimits

0x2cf0,	// (0x0006ee92) postcard_pane_g5

0x2d05,	// (0x0006eea7) postcard_pane_g6_ParamLimits

0x2d05,	// (0x0006eea7) postcard_pane_g6

0xb586,	// (0x00077728) postcard_pane_g7_ParamLimits

0xb586,	// (0x00077728) postcard_pane_g7

0x0006,

0xf4c5,	// (0x0007b667) postcard_pane_g_ParamLimits

0xf4c5,	// (0x0007b667) postcard_pane_g

0x2d19,	// (0x0006eebb) main_mp2_pane_g1_ParamLimits

0x2d19,	// (0x0006eebb) main_mp2_pane_g1

0x2d25,	// (0x0006eec7) main_mp2_pane_g2_ParamLimits

0x2d25,	// (0x0006eec7) main_mp2_pane_g2

0x2d31,	// (0x0006eed3) main_mp2_pane_g3_ParamLimits

0x2d31,	// (0x0006eed3) main_mp2_pane_g3

0x0002,

0xf4d4,	// (0x0007b676) main_mp2_pane_g_ParamLimits

0xf4d4,	// (0x0007b676) main_mp2_pane_g

0x2d3d,	// (0x0006eedf) main_mp2_pane_t1_ParamLimits

0x2d3d,	// (0x0006eedf) main_mp2_pane_t1

0x2d52,	// (0x0006eef4) main_mp2_pane_t2_ParamLimits

0x2d52,	// (0x0006eef4) main_mp2_pane_t2

0x2d64,	// (0x0006ef06) main_mp2_pane_t3_ParamLimits

0x2d64,	// (0x0006ef06) main_mp2_pane_t3

0x0002,

0xf4db,	// (0x0007b67d) main_mp2_pane_t_ParamLimits

0xf4db,	// (0x0007b67d) main_mp2_pane_t

0xb5a2,	// (0x00077744) pec_content_pane_ParamLimits

0xb5a2,	// (0x00077744) pec_content_pane

0xab11,	// (0x00076cb3) scroll_pane_cp015

0xb5b4,	// (0x00077756) pec_attribute_pane_ParamLimits

0xb5b4,	// (0x00077756) pec_attribute_pane

0x2d76,	// (0x0006ef18) pec_content_pane_g1_ParamLimits

0x2d76,	// (0x0006ef18) pec_content_pane_g1

0xb5c4,	// (0x00077766) pec_content_pane_t1_ParamLimits

0xb5c4,	// (0x00077766) pec_content_pane_t1

0xb5d6,	// (0x00077778) pec_content_pane_t2_ParamLimits

0xb5d6,	// (0x00077778) pec_content_pane_t2

0x0001,

0xf4e2,	// (0x0007b684) pec_content_pane_t_ParamLimits

0xf4e2,	// (0x0007b684) pec_content_pane_t

0x2d82,	// (0x0006ef24) list_single_graphic_pane_cp01_ParamLimits

0x2d82,	// (0x0006ef24) list_single_graphic_pane_cp01

0x9f00,	// (0x000760a2) bg_popup_sub_pane_cp04

0xb5e8,	// (0x0007778a) popup_mup_playback_window_g1

0xb5f4,	// (0x00077796) popup_mup_playback_window_t1

0xb609,	// (0x000777ab) popup_mup_playback_window_t2

0x0001,

0xf4e7,	// (0x0007b689) popup_mup_playback_window_t

0xb640,	// (0x000777e2) main_image_pane_g1_ParamLimits

0xb640,	// (0x000777e2) main_image_pane_g1

0xb683,	// (0x00077825) scroll_pane_cp018_ParamLimits

0xb683,	// (0x00077825) scroll_pane_cp018

0xb69b,	// (0x0007783d) scroll_pane_cp016_ParamLimits

0xb69b,	// (0x0007783d) scroll_pane_cp016

0x2e51,	// (0x0006eff3) smil2_image_pane_ParamLimits

0x2e51,	// (0x0006eff3) smil2_image_pane

0x2e85,	// (0x0006f027) smil2_root_pane_ParamLimits

0x2e85,	// (0x0006f027) smil2_root_pane

0x2ebd,	// (0x0006f05f) smil2_text_pane_ParamLimits

0x2ebd,	// (0x0006f05f) smil2_text_pane

0x9ca5,	// (0x00075e47) bg_list_pane_cp06

0xb6d7,	// (0x00077879) grid_radio_pane

0x9ca5,	// (0x00075e47) bg_popup_window_pane_cp06

0xb6df,	// (0x00077881) main_fmradio_pane_t1

0xb056,	// (0x000771f8) heading_pane_cp04

0xb6ed,	// (0x0007788f) main_fmradio_pane_t2

0xc6da,	// (0x0007887c) popup_cale_lunar_info_window_g1

0xb6fb,	// (0x0007789d) main_fmradio_pane_t3

0xc6e2,	// (0x00078884) popup_cale_lunar_info_window_g2

0xb709,	// (0x000778ab) main_fmradio_pane_t4

0x0001,

0xb717,	// (0x000778b9) main_fmradio_pane_t5

0x0004,

0xf5c2,	// (0x0007b764) popup_cale_lunar_info_window_g

0xf4fc,	// (0x0007b69e) main_fmradio_pane_t

0xb725,	// (0x000778c7) wait_bar_pane_cp03

0xb72d,	// (0x000778cf) cell_fmradio_pane_ParamLimits

0xb72d,	// (0x000778cf) cell_fmradio_pane

0xb586,	// (0x00077728) cell_fmradio_pane_g1_ParamLimits

0xb586,	// (0x00077728) cell_fmradio_pane_g1

0x9ca5,	// (0x00075e47) grid_highlight_pane_cp011

0xb740,	// (0x000778e2) poc_content_pane_ParamLimits

0xb740,	// (0x000778e2) poc_content_pane

0xb752,	// (0x000778f4) scroll_pane_cp019

0x2f3d,	// (0x0006f0df) popup_call_poc_act_window_ParamLimits

0x2f3d,	// (0x0006f0df) popup_call_poc_act_window

0x2f61,	// (0x0006f103) popup_call_poc_inact_window_ParamLimits

0x2f61,	// (0x0006f103) popup_call_poc_inact_window

0xf599,	// (0x0007b73b) bg_popup_call_poc_act_pane_g

0xc652,	// (0x000787f4) bg_popup_call_poc_inact_pane_g1

0xc65a,	// (0x000787fc) bg_popup_call_poc_inact_pane_g2

0xb75a,	// (0x000778fc) popup_call_poc_act_window_g2

0xc662,	// (0x00078804) bg_popup_call_poc_inact_pane_g3

0xc66a,	// (0x0007880c) bg_popup_call_poc_inact_pane_g4

0xc672,	// (0x00078814) bg_popup_call_poc_inact_pane_g5

0xb762,	// (0x00077904) popup_call_poc_act_window_t1_ParamLimits

0xb762,	// (0x00077904) popup_call_poc_act_window_t1

0xb78a,	// (0x0007792c) popup_call_poc_act_window_t2_ParamLimits

0xb78a,	// (0x0007792c) popup_call_poc_act_window_t2

0xb7b2,	// (0x00077954) popup_call_poc_act_window_t3_ParamLimits

0xb7b2,	// (0x00077954) popup_call_poc_act_window_t3

0xb7da,	// (0x0007797c) popup_call_poc_act_window_t4_ParamLimits

0xb7da,	// (0x0007797c) popup_call_poc_act_window_t4

0x0003,

0xf507,	// (0x0007b6a9) popup_call_poc_act_window_t_ParamLimits

0xf507,	// (0x0007b6a9) popup_call_poc_act_window_t

0xc67a,	// (0x0007881c) bg_popup_call_poc_inact_pane_g6

0xc682,	// (0x00078824) bg_popup_call_poc_inact_pane_g7

0xc68a,	// (0x0007882c) bg_popup_call_poc_inact_pane_g8

0xb7ec,	// (0x0007798e) popup_call_poc_inact_window_g2

0xc692,	// (0x00078834) bg_popup_call_poc_inact_pane_g9

0x0008,

0xf586,	// (0x0007b728) bg_popup_call_poc_inact_pane_g

0xb7f4,	// (0x00077996) popup_call_poc_inact_window_t1_ParamLimits

0xb7f4,	// (0x00077996) popup_call_poc_inact_window_t1

0xb809,	// (0x000779ab) popup_call_poc_inact_window_t2_ParamLimits

0xb809,	// (0x000779ab) popup_call_poc_inact_window_t2

0xb81e,	// (0x000779c0) popup_call_poc_inact_window_t3_ParamLimits

0xb81e,	// (0x000779c0) popup_call_poc_inact_window_t3

0x0002,

0xf510,	// (0x0007b6b2) popup_call_poc_inact_window_t_ParamLimits

0xf510,	// (0x0007b6b2) popup_call_poc_inact_window_t

0xc817,	// (0x000789b9) context_pane_ParamLimits

0x3794,	// (0x0006f936) signal_pane_ParamLimits

0xb3f2,	// (0x00077594) main_call2_pane

0x971a,	// (0x000758bc) popup_phob_thumbnail2_window_ParamLimits

0x971a,	// (0x000758bc) popup_phob_thumbnail2_window

0x96b7,	// (0x00075859) aid_hotspot_pointer_arrow_pane

0x96bf,	// (0x00075861) aid_hotspot_pointer_hand_pane

0x32ac,	// (0x0006f44e) phob_pre_status_pane_g5

0x0f2c,	// (0x0006d0ce) cams_zoom_pane_ParamLimits

0x0f3b,	// (0x0006d0dd) image_vga_pane_ParamLimits

0x0f55,	// (0x0006d0f7) main_camera_pane_g1_ParamLimits

0x0f67,	// (0x0006d109) main_camera_pane_g2_ParamLimits

0x0f77,	// (0x0006d119) main_camera_pane_g3_ParamLimits

0x0f89,	// (0x0006d12b) main_camera_pane_g4_ParamLimits

0x0f9b,	// (0x0006d13d) main_camera_pane_g5_ParamLimits

0x0fad,	// (0x0006d14f) main_camera_pane_g6_ParamLimits

0x0fbf,	// (0x0006d161) main_camera_pane_g7_ParamLimits

0xf20f,	// (0x0007b3b1) main_camera_pane_g_ParamLimits

0x0fd1,	// (0x0006d173) main_camera_pane_t1_ParamLimits

0x0fe7,	// (0x0006d189) main_camera_pane_t2_ParamLimits

0xf220,	// (0x0007b3c2) main_camera_pane_t_ParamLimits

0x9f00,	// (0x000760a2) bg_popup_preview_window_pane_cp01_ParamLimits

0x9f00,	// (0x000760a2) bg_popup_preview_window_pane_cp01

0xb833,	// (0x000779d5) popup_phob_thumbnail2_window_g1_ParamLimits

0xb833,	// (0x000779d5) popup_phob_thumbnail2_window_g1

0x9ca5,	// (0x00075e47) call2_cli_visual_pane

0x2f95,	// (0x0006f137) popup_call2_audio_conf_window_ParamLimits

0x2f95,	// (0x0006f137) popup_call2_audio_conf_window

0x2fb5,	// (0x0006f157) popup_call2_audio_first_window_ParamLimits

0x2fb5,	// (0x0006f157) popup_call2_audio_first_window

0x304b,	// (0x0006f1ed) popup_call2_audio_in_window_ParamLimits

0x304b,	// (0x0006f1ed) popup_call2_audio_in_window

0x3093,	// (0x0006f235) popup_call2_audio_out_window_ParamLimits

0x3093,	// (0x0006f235) popup_call2_audio_out_window

0x30fd,	// (0x0006f29f) popup_call2_audio_second_window_ParamLimits

0x30fd,	// (0x0006f29f) popup_call2_audio_second_window

0x3163,	// (0x0006f305) popup_call2_audio_wait_window_ParamLimits

0x3163,	// (0x0006f305) popup_call2_audio_wait_window

0x9ca5,	// (0x00075e47) bg_popup_call2_act_pane_cp03

0x9ee2,	// (0x00076084) list_conf_pane_cp

0xb83f,	// (0x000779e1) popup_call2_audio_conf_window_t1

0xb84d,	// (0x000779ef) list_single_graphic_popup_conf2_pane_ParamLimits

0xb84d,	// (0x000779ef) list_single_graphic_popup_conf2_pane

0xb0ea,	// (0x0007728c) list_highlight_pane_cp04

0xb860,	// (0x00077a02) list_single_graphic_popup_conf2_pane_g1

0xb0fb,	// (0x0007729d) list_single_graphic_popup_conf2_pane_g2

0x0001,

0xf517,	// (0x0007b6b9) list_single_graphic_popup_conf2_pane_g

0xb86a,	// (0x00077a0c) list_single_graphic_popup_conf2_pane_t1

0xb878,	// (0x00077a1a) bg_popup_call2_act_pane_cp01_ParamLimits

0xb878,	// (0x00077a1a) bg_popup_call2_act_pane_cp01

0xb902,	// (0x00077aa4) call_type_pane_cp05_ParamLimits

0xb902,	// (0x00077aa4) call_type_pane_cp05

0xb956,	// (0x00077af8) popup_call2_audio_second_window_g1_ParamLimits

0xb956,	// (0x00077af8) popup_call2_audio_second_window_g1

0xb9aa,	// (0x00077b4c) popup_call2_audio_second_window_g2_ParamLimits

0xb9aa,	// (0x00077b4c) popup_call2_audio_second_window_g2

0x0002,

0xf51c,	// (0x0007b6be) popup_call2_audio_second_window_g_ParamLimits

0xf51c,	// (0x0007b6be) popup_call2_audio_second_window_g

0xba0f,	// (0x00077bb1) popup_call2_audio_second_window_t1_ParamLimits

0xba0f,	// (0x00077bb1) popup_call2_audio_second_window_t1

0xbaca,	// (0x00077c6c) popup_call2_audio_second_window_t2_ParamLimits

0xbaca,	// (0x00077c6c) popup_call2_audio_second_window_t2

0xbb1d,	// (0x00077cbf) popup_call2_audio_second_window_t3_ParamLimits

0xbb1d,	// (0x00077cbf) popup_call2_audio_second_window_t3

0x0003,

0xf523,	// (0x0007b6c5) popup_call2_audio_second_window_t_ParamLimits

0xf523,	// (0x0007b6c5) popup_call2_audio_second_window_t

0x9ca5,	// (0x00075e47) bg_popup_call2_in_pane_cp02

0x9caf,	// (0x00075e51) call_type_pane_cp04

0x9cb7,	// (0x00075e59) popup_call2_audio_wait_window_g1

0x9cbf,	// (0x00075e61) popup_call2_audio_wait_window_g2

0x0001,

0xf0fc,	// (0x0007b29e) popup_call2_audio_wait_window_g

0x9cc7,	// (0x00075e69) popup_call2_audio_wait_window_t3

0xbc10,	// (0x00077db2) bg_popup_call2_act_pane_ParamLimits

0xbc10,	// (0x00077db2) bg_popup_call2_act_pane

0xbcd0,	// (0x00077e72) call_type_pane_cp03_ParamLimits

0xbcd0,	// (0x00077e72) call_type_pane_cp03

0xbd34,	// (0x00077ed6) popup_call2_audio_first_window_g1_ParamLimits

0xbd34,	// (0x00077ed6) popup_call2_audio_first_window_g1

0xbda4,	// (0x00077f46) popup_call2_audio_first_window_g2_ParamLimits

0xbda4,	// (0x00077f46) popup_call2_audio_first_window_g2

0xb347,	// (0x000774e9) popup_call2_audio_first_window_g3_ParamLimits

0xb347,	// (0x000774e9) popup_call2_audio_first_window_g3

0x0004,

0xf52c,	// (0x0007b6ce) popup_call2_audio_first_window_g_ParamLimits

0xf52c,	// (0x0007b6ce) popup_call2_audio_first_window_g

0xbe82,	// (0x00078024) popup_call2_audio_first_window_t1_ParamLimits

0xbe82,	// (0x00078024) popup_call2_audio_first_window_t1

0xbf9a,	// (0x0007813c) popup_call2_audio_first_window_t4_ParamLimits

0xbf9a,	// (0x0007813c) popup_call2_audio_first_window_t4

0xc07d,	// (0x0007821f) popup_call2_audio_first_window_t5_ParamLimits

0xc07d,	// (0x0007821f) popup_call2_audio_first_window_t5

0x0003,

0xf537,	// (0x0007b6d9) popup_call2_audio_first_window_t_ParamLimits

0xf537,	// (0x0007b6d9) popup_call2_audio_first_window_t

0x9ef8,	// (0x0007609a) bg_popup_call2_act_pane_g1

0xc6ea,	// (0x0007888c) popup_cale_lunar_info_window_t1

0xc6f8,	// (0x0007889a) popup_cale_lunar_info_window_t2

0xc706,	// (0x000788a8) popup_cale_lunar_info_window_t3

0x9ca5,	// (0x00075e47) bg_popup_call2_bubble_pane

0xc17e,	// (0x00078320) bg_popup_call2_in_pane_cp01_ParamLimits

0xc17e,	// (0x00078320) bg_popup_call2_in_pane_cp01

0x925f,	// (0x00075401) call_type_pane_cp02

0xc1c6,	// (0x00078368) popup_call2_audio_out_window_g1_ParamLimits

0xc1c6,	// (0x00078368) popup_call2_audio_out_window_g1

0xc1f2,	// (0x00078394) popup_call2_audio_out_window_g2_ParamLimits

0xc1f2,	// (0x00078394) popup_call2_audio_out_window_g2

0xc21a,	// (0x000783bc) popup_call2_audio_out_window_g3_ParamLimits

0xc21a,	// (0x000783bc) popup_call2_audio_out_window_g3

0x0003,

0xf540,	// (0x0007b6e2) popup_call2_audio_out_window_g_ParamLimits

0xf540,	// (0x0007b6e2) popup_call2_audio_out_window_g

0xc255,	// (0x000783f7) popup_call2_audio_out_window_t1_ParamLimits

0xc255,	// (0x000783f7) popup_call2_audio_out_window_t1

0xc2b4,	// (0x00078456) popup_call2_audio_out_window_t2_ParamLimits

0xc2b4,	// (0x00078456) popup_call2_audio_out_window_t2

0xc308,	// (0x000784aa) popup_call2_audio_out_window_t3_ParamLimits

0xc308,	// (0x000784aa) popup_call2_audio_out_window_t3

0xc31e,	// (0x000784c0) popup_call2_audio_out_window_t4_ParamLimits

0xc31e,	// (0x000784c0) popup_call2_audio_out_window_t4

0xc334,	// (0x000784d6) popup_call2_audio_out_window_t5_ParamLimits

0xc334,	// (0x000784d6) popup_call2_audio_out_window_t5

0x0005,

0xf549,	// (0x0007b6eb) popup_call2_audio_out_window_t_ParamLimits

0xf549,	// (0x0007b6eb) popup_call2_audio_out_window_t

0xc398,	// (0x0007853a) bg_popup_call2_in_pane_ParamLimits

0xc398,	// (0x0007853a) bg_popup_call2_in_pane

0xc3f4,	// (0x00078596) popup_call2_audio_in_window_g1_ParamLimits

0xc3f4,	// (0x00078596) popup_call2_audio_in_window_g1

0xc42c,	// (0x000785ce) popup_call2_audio_in_window_g2_ParamLimits

0xc42c,	// (0x000785ce) popup_call2_audio_in_window_g2

0xc464,	// (0x00078606) popup_call2_audio_in_window_g3_ParamLimits

0xc464,	// (0x00078606) popup_call2_audio_in_window_g3

0x0003,

0xf556,	// (0x0007b6f8) popup_call2_audio_in_window_g_ParamLimits

0xf556,	// (0x0007b6f8) popup_call2_audio_in_window_g

0xc4bc,	// (0x0007865e) popup_call2_audio_in_window_t1_ParamLimits

0xc4bc,	// (0x0007865e) popup_call2_audio_in_window_t1

0xc53c,	// (0x000786de) popup_call2_audio_in_window_t2_ParamLimits

0xc53c,	// (0x000786de) popup_call2_audio_in_window_t2

0xc5bc,	// (0x0007875e) popup_call2_audio_in_window_t3_ParamLimits

0xc5bc,	// (0x0007875e) popup_call2_audio_in_window_t3

0xc5d6,	// (0x00078778) popup_call2_audio_in_window_t4_ParamLimits

0xc5d6,	// (0x00078778) popup_call2_audio_in_window_t4

0xc5e8,	// (0x0007878a) popup_call2_audio_in_window_t5_ParamLimits

0xc5e8,	// (0x0007878a) popup_call2_audio_in_window_t5

0xc5fd,	// (0x0007879f) popup_call2_audio_in_window_t6_ParamLimits

0xc5fd,	// (0x0007879f) popup_call2_audio_in_window_t6

0x0005,

0xf55f,	// (0x0007b701) popup_call2_audio_in_window_t_ParamLimits

0xf55f,	// (0x0007b701) popup_call2_audio_in_window_t

0x9ef8,	// (0x0007609a) bg_popup_call2_in_pane_g1

0xc714,	// (0x000788b6) popup_cale_lunar_info_window_t4

0x0003,

0xf5c7,	// (0x0007b769) popup_cale_lunar_info_window_t

0x9f00,	// (0x000760a2) bg_popup_call2_rect_pane_ParamLimits

0x9f00,	// (0x000760a2) bg_popup_call2_rect_pane

0x9ca5,	// (0x00075e47) call2_cli_visual_graphic_pane

0x9ca5,	// (0x00075e47) call2_cli_visual_text_pane

0x9741,	// (0x000758e3) smil_status_volume_pane_g3

0x0002,

0xa7f6,	// (0x00076998) call2_cli_visual_graphic_pane_g1

0xa7f6,	// (0x00076998) call2_cli_visual_graphic_pane_g2

0xa7f6,	// (0x00076998) call2_cli_visual_graphic_pane_g3

0x0002,

0xf56c,	// (0x0007b70e) call2_cli_visual_graphic_pane_g

0xc612,	// (0x000787b4) bg_popup_call2_rect_pane_g1

0xa894,	// (0x00076a36) bg_popup_call2_rect_pane_g2

0xc61a,	// (0x000787bc) bg_popup_call2_rect_pane_g3

0xc622,	// (0x000787c4) bg_popup_call2_rect_pane_g4

0xc62a,	// (0x000787cc) bg_popup_call2_rect_pane_g5

0xc632,	// (0x000787d4) bg_popup_call2_rect_pane_g6

0xc63a,	// (0x000787dc) bg_popup_call2_rect_pane_g7

0xc642,	// (0x000787e4) bg_popup_call2_rect_pane_g8

0xc64a,	// (0x000787ec) bg_popup_call2_rect_pane_g9

0x0008,

0xf573,	// (0x0007b715) bg_popup_call2_rect_pane_g

0xc652,	// (0x000787f4) bg_popup_call2_bubble_pane_g1

0xc65a,	// (0x000787fc) bg_popup_call2_bubble_pane_g2

0xc662,	// (0x00078804) bg_popup_call2_bubble_pane_g3

0xc66a,	// (0x0007880c) bg_popup_call2_bubble_pane_g4

0xc672,	// (0x00078814) bg_popup_call2_bubble_pane_g5

0xc67a,	// (0x0007881c) bg_popup_call2_bubble_pane_g6

0xc682,	// (0x00078824) bg_popup_call2_bubble_pane_g7

0xc68a,	// (0x0007882c) bg_popup_call2_bubble_pane_g8

0xc692,	// (0x00078834) bg_popup_call2_bubble_pane_g9

0x0008,

0xf586,	// (0x0007b728) bg_popup_call2_bubble_pane_g

0x0881,	// (0x0006ca23) aid_cale_week_size_cell_pane

0x0fff,	// (0x0006d1a1) aid_cams_cif_uncrop_pane_ParamLimits

0x0fff,	// (0x0006d1a1) aid_cams_cif_uncrop_pane

0x11b4,	// (0x0006d356) aid_cams_size_cell_ParamLimits

0x11b4,	// (0x0006d356) aid_cams_size_cell

0x11c8,	// (0x0006d36a) grid_cams_pane_ParamLimits

0x11e2,	// (0x0006d384) linegrid_cams_pane_ParamLimits

0x133e,	// (0x0006d4e0) call_video_pane_t1

0x135c,	// (0x0006d4fe) call_video_pane_t2

0x0001,

0xf273,	// (0x0007b415) call_video_pane_t

0x178b,	// (0x0006d92d) aid_cale_month_size_cell_pane_ParamLimits

0x178b,	// (0x0006d92d) aid_cale_month_size_cell_pane

0xf610,	// (0x0007b7b2) smil_status_volume_pane_g

0x974e,	// (0x000758f0) volume_smil_pane_ParamLimits

0x9102,	// (0x000752a4) aid_popup2_width_pane

0x07e6,	// (0x0006c988) cell_qdial_pane_g4_ParamLimits

0x07e6,	// (0x0006c988) cell_qdial_pane_g4

0x2610,	// (0x0006e7b2) aid_blid_cardinal_pane_ParamLimits

0x261c,	// (0x0006e7be) aid_blid_destination_pane_ParamLimits

0x261c,	// (0x0006e7be) aid_blid_destination_pane

0x9f00,	// (0x000760a2) bg_popup_call_poc_act_pane_ParamLimits

0x9f00,	// (0x000760a2) bg_popup_call_poc_act_pane

0x9f00,	// (0x000760a2) bg_popup_call_poc_inact_pane_ParamLimits

0x9f00,	// (0x000760a2) bg_popup_call_poc_inact_pane

0xc69a,	// (0x0007883c) bg_popup_call_poc_act_pane_g1

0xc6a2,	// (0x00078844) bg_popup_call_poc_act_pane_g2

0xc6aa,	// (0x0007884c) bg_popup_call_poc_act_pane_g3

0xc66a,	// (0x0007880c) bg_popup_call_poc_act_pane_g4

0xc672,	// (0x00078814) bg_popup_call_poc_act_pane_g5

0xc6b2,	// (0x00078854) bg_popup_call_poc_act_pane_g6

0xc682,	// (0x00078824) bg_popup_call_poc_act_pane_g7

0xc6ba,	// (0x0007885c) bg_popup_call_poc_act_pane_g8

0x9ca5,	// (0x00075e47) main_usb_pane

0x96f5,	// (0x00075897) popup_cale_lunar_info_window

0x1626,	// (0x0006d7c8) im_reading_pane_t1_ParamLimits

0xaa69,	// (0x00076c0b) list_im_pane_ParamLimits

0xaa7a,	// (0x00076c1c) scroll_pane_cp07_ParamLimits

0x9ca5,	// (0x00075e47) grid_highlight_pane_cp012

0x9f00,	// (0x000760a2) mup_scale_pane_ParamLimits

0xb586,	// (0x00077728) main_usb_pane_g1_ParamLimits

0xb586,	// (0x00077728) main_usb_pane_g1

0x31c1,	// (0x0006f363) main_usb_pane_g2_ParamLimits

0x31c1,	// (0x0006f363) main_usb_pane_g2

0x0001,

0xf5b0,	// (0x0007b752) main_usb_pane_g_ParamLimits

0xf5b0,	// (0x0007b752) main_usb_pane_g

0x31d7,	// (0x0006f379) main_usb_pane_t1_ParamLimits

0x31d7,	// (0x0006f379) main_usb_pane_t1

0x31e9,	// (0x0006f38b) main_usb_pane_t2_ParamLimits

0x31e9,	// (0x0006f38b) main_usb_pane_t2

0x31fb,	// (0x0006f39d) main_usb_pane_t3_ParamLimits

0x31fb,	// (0x0006f39d) main_usb_pane_t3

0x320d,	// (0x0006f3af) main_usb_pane_t4_ParamLimits

0x320d,	// (0x0006f3af) main_usb_pane_t4

0x321f,	// (0x0006f3c1) main_usb_pane_t5_ParamLimits

0x321f,	// (0x0006f3c1) main_usb_pane_t5

0x3231,	// (0x0006f3d3) main_usb_pane_t6_ParamLimits

0x3231,	// (0x0006f3d3) main_usb_pane_t6

0x0005,

0xf5b5,	// (0x0007b757) main_usb_pane_t_ParamLimits

0x25bd,	// (0x0006e75f) aid_text_placing

0x25c6,	// (0x0006e768) main_location2_pane_t1_ParamLimits

0x25d8,	// (0x0006e77a) main_location2_pane_t2_ParamLimits

0x25ea,	// (0x0006e78c) main_location2_pane_t3_ParamLimits

0x25fe,	// (0x0006e7a0) main_location2_pane_t4_ParamLimits

0x25fe,	// (0x0006e7a0) main_location2_pane_t4

0xf3d4,	// (0x0007b576) main_location2_pane_t_ParamLimits

0x9f3c,	// (0x000760de) find_pinb_pane_g2_ParamLimits

0x9f3c,	// (0x000760de) find_pinb_pane_g2

0x0001,

0xf122,	// (0x0007b2c4) find_pinb_pane_g_ParamLimits

0xf122,	// (0x0007b2c4) find_pinb_pane_g

0x9f48,	// (0x000760ea) find_pinb_pane_t1_ParamLimits

0x9f5a,	// (0x000760fc) find_pinb_pane_t2_ParamLimits

0xf127,	// (0x0007b2c9) find_pinb_pane_t_ParamLimits

0x9ca5,	// (0x00075e47) main_call3_pane

0x1c6e,	// (0x0006de10) cale_month_day_heading_pane_t1_ParamLimits

0x1cf4,	// (0x0006de96) cale_month_day_heading_pane_t2_ParamLimits

0x1d85,	// (0x0006df27) cale_month_day_heading_pane_t3_ParamLimits

0x1e16,	// (0x0006dfb8) cale_month_day_heading_pane_t4_ParamLimits

0x1eaf,	// (0x0006e051) cale_month_day_heading_pane_t5_ParamLimits

0x1f50,	// (0x0006e0f2) cale_month_day_heading_pane_t6_ParamLimits

0x1ff1,	// (0x0006e193) cale_month_day_heading_pane_t7_ParamLimits

0xf2ab,	// (0x0007b44d) cale_month_day_heading_pane_t_ParamLimits

0xacc4,	// (0x00076e66) smil_status_volume_pane

0x2cb4,	// (0x0006ee56) postcard_address_pane_ParamLimits

0x2cb4,	// (0x0006ee56) postcard_address_pane

0x2cc6,	// (0x0006ee68) postcard_message_pane_ParamLimits

0x2cc6,	// (0x0006ee68) postcard_message_pane

0x319d,	// (0x0006f33f) call2_cli_visual_pane_t1_ParamLimits

0x319d,	// (0x0006f33f) call2_cli_visual_pane_t1

0x39c3,	// (0x0006fb65) postcard_message_pane_t1_ParamLimits

0x39c3,	// (0x0006fb65) postcard_message_pane_t1

0x39ac,	// (0x0006fb4e) postcard_address_pane_t1_ParamLimits

0x39ac,	// (0x0006fb4e) postcard_address_pane_t1

0x3998,	// (0x0006fb3a) popup_call3_audio_in_window_ParamLimits

0x3998,	// (0x0006fb3a) popup_call3_audio_in_window

0x3825,	// (0x0006f9c7) bg_popup_call3_in_pane_ParamLimits

0x3825,	// (0x0006f9c7) bg_popup_call3_in_pane

0x3899,	// (0x0006fa3b) popup_call3_audio_in_window_g1_ParamLimits

0x3899,	// (0x0006fa3b) popup_call3_audio_in_window_g1

0x38b9,	// (0x0006fa5b) popup_call3_audio_in_window_g2_ParamLimits

0x38b9,	// (0x0006fa5b) popup_call3_audio_in_window_g2

0x38d9,	// (0x0006fa7b) popup_call3_audio_in_window_g3_ParamLimits

0x38d9,	// (0x0006fa7b) popup_call3_audio_in_window_g3

0x0003,

0xf617,	// (0x0007b7b9) popup_call3_audio_in_window_g_ParamLimits

0xf617,	// (0x0007b7b9) popup_call3_audio_in_window_g

0x390a,	// (0x0006faac) popup_call3_audio_in_window_t1_ParamLimits

0x390a,	// (0x0006faac) popup_call3_audio_in_window_t1

0x3948,	// (0x0006faea) popup_call3_audio_in_window_t2_ParamLimits

0x3948,	// (0x0006faea) popup_call3_audio_in_window_t2

0x3986,	// (0x0006fb28) popup_call3_audio_in_window_t3_ParamLimits

0x3986,	// (0x0006fb28) popup_call3_audio_in_window_t3

0x0002,

0xf620,	// (0x0007b7c2) popup_call3_audio_in_window_t_ParamLimits

0xf620,	// (0x0007b7c2) popup_call3_audio_in_window_t

0xb3f2,	// (0x00077594) bg_popup_call3_rect_pane

0xc612,	// (0x000787b4) bg_popup_call3_rect_pane_g1

0xa894,	// (0x00076a36) bg_popup_call3_rect_pane_g2

0xc61a,	// (0x000787bc) bg_popup_call3_rect_pane_g3

0xc622,	// (0x000787c4) bg_popup_call3_rect_pane_g4

0xc62a,	// (0x000787cc) bg_popup_call3_rect_pane_g5

0xc632,	// (0x000787d4) bg_popup_call3_rect_pane_g6

0xc63a,	// (0x000787dc) bg_popup_call3_rect_pane_g7

0x2904,	// (0x0006eaa6) mup_visualizer_osc_pane

0xb4b1,	// (0x00077653) mup_visualizer_spec_pane

0x3855,	// (0x0006f9f7) call3_video_qcif_pane_ParamLimits

0x3855,	// (0x0006f9f7) call3_video_qcif_pane

0x3866,	// (0x0006fa08) call3_video_qcif_uncrop_pane_ParamLimits

0x3866,	// (0x0006fa08) call3_video_qcif_uncrop_pane

0x3874,	// (0x0006fa16) call3_video_subqcif_pane_ParamLimits

0x3874,	// (0x0006fa16) call3_video_subqcif_pane

0x3888,	// (0x0006fa2a) call3_video_subqcif_uncrop_pane_ParamLimits

0x3888,	// (0x0006fa2a) call3_video_subqcif_uncrop_pane

0x38f9,	// (0x0006fa9b) popup_call3_audio_in_window_g4_ParamLimits

0x38f9,	// (0x0006fa9b) popup_call3_audio_in_window_g4

0x3814,	// (0x0006f9b6) mup_spec_half_pane

0x381d,	// (0x0006f9bf) mup_spec_half_pane_cp

0xc877,	// (0x00078a19) mup_osc_middle_pane

0xc880,	// (0x00078a22) mup_visualizer_osc_pane_g1

0x37f4,	// (0x0006f996) mup_spec_bar_pane_ParamLimits

0x37f4,	// (0x0006f996) mup_spec_bar_pane

0xc864,	// (0x00078a06) mup_spec_bar_pane_g1

0xc86e,	// (0x00078a10) mup_spec_bar_pane_g2

0x0001,

0xf60b,	// (0x0007b7ad) mup_spec_bar_pane_g

0x0881,	// (0x0006ca23) aid_cale_week_size_cell_pane_ParamLimits

0x089b,	// (0x0006ca3d) bg_cale_heading_pane_ParamLimits

0xa8d1,	// (0x00076a73) bg_cale_pane_cp01_ParamLimits

0x08b9,	// (0x0006ca5b) cale_week_corner_pane_ParamLimits

0x08d8,	// (0x0006ca7a) cale_week_day_heading_pane_ParamLimits

0x08fb,	// (0x0006ca9d) cale_week_scroll_pane_g1_ParamLimits

0x0914,	// (0x0006cab6) cale_week_scroll_pane_g2_ParamLimits

0x092c,	// (0x0006cace) cale_week_scroll_pane_g3_ParamLimits

0x0944,	// (0x0006cae6) cale_week_scroll_pane_g4_ParamLimits

0x095c,	// (0x0006cafe) cale_week_scroll_pane_g5_ParamLimits

0x0978,	// (0x0006cb1a) cale_week_scroll_pane_g6_ParamLimits

0x0998,	// (0x0006cb3a) cale_week_scroll_pane_g7_ParamLimits

0x09b8,	// (0x0006cb5a) cale_week_scroll_pane_g8_ParamLimits

0x09dc,	// (0x0006cb7e) cale_week_scroll_pane_g9_ParamLimits

0x09f4,	// (0x0006cb96) cale_week_scroll_pane_g10_ParamLimits

0x0a0c,	// (0x0006cbae) cale_week_scroll_pane_g11_ParamLimits

0x0a24,	// (0x0006cbc6) cale_week_scroll_pane_g12_ParamLimits

0x0a3c,	// (0x0006cbde) cale_week_scroll_pane_g13_ParamLimits

0x0a3c,	// (0x0006cbde) cale_week_scroll_pane_g14_ParamLimits

0x0a3c,	// (0x0006cbde) cale_week_scroll_pane_g15_ParamLimits

0xf1b3,	// (0x0007b355) cale_week_scroll_pane_g_ParamLimits

0x0a54,	// (0x0006cbf6) cale_week_time_pane_ParamLimits

0x0a78,	// (0x0006cc1a) grid_cale_week_pane_ParamLimits

0xa8ef,	// (0x00076a91) listscroll_cale_week_pane_t1

0xa901,	// (0x00076aa3) scroll_pane_cp08_ParamLimits

0x17ec,	// (0x0006d98e) cale_month_corner_pane_ParamLimits

0xac9a,	// (0x00076e3c) cale_month_pane_t1

0x1c0c,	// (0x0006ddae) cale_month_week_pane_ParamLimits

0x242e,	// (0x0006e5d0) popup_call_status_window_g1_ParamLimits

0x2442,	// (0x0006e5e4) popup_call_status_window_g2_ParamLimits

0x2456,	// (0x0006e5f8) popup_call_status_window_g3_ParamLimits

0xf35b,	// (0x0007b4fd) popup_call_status_window_g_ParamLimits

0xb046,	// (0x000771e8) aid_call2_pane

0x2b61,	// (0x0006ed03) msg_header_pane_g1

0x2cb4,	// (0x0006ee56) postcard_address2_pane_ParamLimits

0x2cb4,	// (0x0006ee56) postcard_address2_pane

0x2cc6,	// (0x0006ee68) postcard_message2_pane_ParamLimits

0x2cc6,	// (0x0006ee68) postcard_message2_pane

0x37a2,	// (0x0006f944) message2_row_pane_ParamLimits

0x37a2,	// (0x0006f944) message2_row_pane

0x37c1,	// (0x0006f963) address2_row_pane_ParamLimits

0x37c1,	// (0x0006f963) address2_row_pane

0xc832,	// (0x000789d4) postcard_message2_row_pane_g1

0xc83a,	// (0x000789dc) postcard_message2_row_pane_t1

0xc832,	// (0x000789d4) address2_row_pane_g1

0xc83a,	// (0x000789dc) address2_row_pane_t1

0x0e93,	// (0x0006d035) aid_size_cell_vorec

0x9ca5,	// (0x00075e47) main_rss_pane

0x37d4,	// (0x0006f976) rss_list_single_pane_ParamLimits

0x37d4,	// (0x0006f976) rss_list_single_pane

0xc848,	// (0x000789ea) rss_list_single_pane_t1

0xc856,	// (0x000789f8) rss_list_single_pane_t2

0x0001,

0xf606,	// (0x0007b7a8) rss_list_single_pane_t

0x9ca5,	// (0x00075e47) main_camera2_pane

0x9ca5,	// (0x00075e47) main_video2_pane

0x3a3c,	// (0x0006fbde) cams_zoom_pane_cp2_ParamLimits

0x3a3c,	// (0x0006fbde) cams_zoom_pane_cp2

0x3a5c,	// (0x0006fbfe) image2_vga_pane_ParamLimits

0x3a5c,	// (0x0006fbfe) image2_vga_pane

0x3aad,	// (0x0006fc4f) main_camera2_pane_g1_ParamLimits

0x3aad,	// (0x0006fc4f) main_camera2_pane_g1

0x3acd,	// (0x0006fc6f) main_camera2_pane_g2_ParamLimits

0x3acd,	// (0x0006fc6f) main_camera2_pane_g2

0x3aed,	// (0x0006fc8f) main_camera2_pane_g3_ParamLimits

0x3aed,	// (0x0006fc8f) main_camera2_pane_g3

0x3b0d,	// (0x0006fcaf) main_camera2_pane_g4_ParamLimits

0x3b0d,	// (0x0006fcaf) main_camera2_pane_g4

0x3b2d,	// (0x0006fccf) main_camera2_pane_g5_ParamLimits

0x3b2d,	// (0x0006fccf) main_camera2_pane_g5

0x3b4d,	// (0x0006fcef) main_camera2_pane_g6_ParamLimits

0x3b4d,	// (0x0006fcef) main_camera2_pane_g6

0x3b6d,	// (0x0006fd0f) main_camera2_pane_g7_ParamLimits

0x3b6d,	// (0x0006fd0f) main_camera2_pane_g7

0x3b8d,	// (0x0006fd2f) main_camera2_pane_g8_ParamLimits

0x3b8d,	// (0x0006fd2f) main_camera2_pane_g8

0x0008,

0xf627,	// (0x0007b7c9) main_camera2_pane_g_ParamLimits

0xf627,	// (0x0007b7c9) main_camera2_pane_g

0x3bcd,	// (0x0006fd6f) main_camera2_pane_t1_ParamLimits

0x3bcd,	// (0x0006fd6f) main_camera2_pane_t1

0x3c02,	// (0x0006fda4) main_camera2_pane_t2_ParamLimits

0x3c02,	// (0x0006fda4) main_camera2_pane_t2

0x3c28,	// (0x0006fdca) main_camera2_pane_t3_ParamLimits

0x3c28,	// (0x0006fdca) main_camera2_pane_t3

0x3c86,	// (0x0006fe28) main_camera2_pane_t4_ParamLimits

0x3c86,	// (0x0006fe28) main_camera2_pane_t4

0x0006,

0xf63a,	// (0x0007b7dc) main_camera2_pane_t_ParamLimits

0xf63a,	// (0x0007b7dc) main_camera2_pane_t

0x3d18,	// (0x0006feba) cams_zoom_pane_cp4_ParamLimits

0x3d18,	// (0x0006feba) cams_zoom_pane_cp4

0x3d2e,	// (0x0006fed0) image2_cif_pane_ParamLimits

0x3d2e,	// (0x0006fed0) image2_cif_pane

0x3d59,	// (0x0006fefb) image2_subqcif_pane_ParamLimits

0x3d59,	// (0x0006fefb) image2_subqcif_pane

0x3d73,	// (0x0006ff15) main_video2_pane_g1_ParamLimits

0x3d73,	// (0x0006ff15) main_video2_pane_g1

0x3d8d,	// (0x0006ff2f) main_video2_pane_g2_ParamLimits

0x3d8d,	// (0x0006ff2f) main_video2_pane_g2

0x3da3,	// (0x0006ff45) main_video2_pane_g3_ParamLimits

0x3da3,	// (0x0006ff45) main_video2_pane_g3

0x3db9,	// (0x0006ff5b) main_video2_pane_g4_ParamLimits

0x3db9,	// (0x0006ff5b) main_video2_pane_g4

0x3dcf,	// (0x0006ff71) main_video2_pane_g5_ParamLimits

0x3dcf,	// (0x0006ff71) main_video2_pane_g5

0x3de5,	// (0x0006ff87) main_video2_pane_g6_ParamLimits

0x3de5,	// (0x0006ff87) main_video2_pane_g6

0x0005,

0xf649,	// (0x0007b7eb) main_video2_pane_g_ParamLimits

0xf649,	// (0x0007b7eb) main_video2_pane_g

0x3dff,	// (0x0006ffa1) main_video2_pane_t1_ParamLimits

0x3dff,	// (0x0006ffa1) main_video2_pane_t1

0x3e23,	// (0x0006ffc5) main_video2_pane_t2_ParamLimits

0x3e23,	// (0x0006ffc5) main_video2_pane_t2

0x3e71,	// (0x00070013) main_video2_pane_t3_ParamLimits

0x3e71,	// (0x00070013) main_video2_pane_t3

0x0002,

0xf656,	// (0x0007b7f8) main_video2_pane_t_ParamLimits

0xf656,	// (0x0007b7f8) main_video2_pane_t

0x32ec,	// (0x0006f48e) call_muted_g2

0x0001,

0xf5f8,	// (0x0007b79a) call_muted_g

0x9ca5,	// (0x00075e47) main_mup2_pane

0x3eb9,	// (0x0007005b) main_mup2_pane_g1_ParamLimits

0x3eb9,	// (0x0007005b) main_mup2_pane_g1

0x3ec5,	// (0x00070067) main_mup2_pane_g2_ParamLimits

0x3ec5,	// (0x00070067) main_mup2_pane_g2

0x97bc,	// (0x0007595e) main_mup_pane_g13_cp1

0x97c4,	// (0x00075966) mup_volume_pane_cp1

0x3ee1,	// (0x00070083) main_mup2_pane_g4_ParamLimits

0x3ee1,	// (0x00070083) main_mup2_pane_g4

0x3ef3,	// (0x00070095) main_mup2_pane_g5_ParamLimits

0x3ef3,	// (0x00070095) main_mup2_pane_g5

0x3f05,	// (0x000700a7) main_mup2_pane_g6_ParamLimits

0x3f05,	// (0x000700a7) main_mup2_pane_g6

0x3f17,	// (0x000700b9) main_mup2_pane_g7_ParamLimits

0x3f17,	// (0x000700b9) main_mup2_pane_g7

0x0006,

0xf65d,	// (0x0007b7ff) main_mup2_pane_g_ParamLimits

0xf65d,	// (0x0007b7ff) main_mup2_pane_g

0x3f2f,	// (0x000700d1) main_mup2_pane_t1_ParamLimits

0x3f2f,	// (0x000700d1) main_mup2_pane_t1

0x3f45,	// (0x000700e7) main_mup2_pane_t2_ParamLimits

0x3f45,	// (0x000700e7) main_mup2_pane_t2

0x3f5b,	// (0x000700fd) main_mup2_pane_t3_ParamLimits

0x3f5b,	// (0x000700fd) main_mup2_pane_t3

0x3f71,	// (0x00070113) main_mup2_pane_t4_ParamLimits

0x3f71,	// (0x00070113) main_mup2_pane_t4

0x3f89,	// (0x0007012b) main_mup2_pane_t5_ParamLimits

0x3f89,	// (0x0007012b) main_mup2_pane_t5

0x3fa1,	// (0x00070143) main_mup2_pane_t6_ParamLimits

0x3fa1,	// (0x00070143) main_mup2_pane_t6

0x0005,

0xf66c,	// (0x0007b80e) main_mup2_pane_t_ParamLimits

0xf66c,	// (0x0007b80e) main_mup2_pane_t

0x3fd1,	// (0x00070173) mup2_visualizer_pane_ParamLimits

0x3fd1,	// (0x00070173) mup2_visualizer_pane

0x3fff,	// (0x000701a1) mup_progress_pane_cp_ParamLimits

0x3fff,	// (0x000701a1) mup_progress_pane_cp

0x97a7,	// (0x00075949) mup_volume_pane_cp_ParamLimits

0x97a7,	// (0x00075949) mup_volume_pane_cp

0x4013,	// (0x000701b5) mup2_visualizer_pane_g1_ParamLimits

0x4013,	// (0x000701b5) mup2_visualizer_pane_g1

0xc8b7,	// (0x00078a59) mup2_visualizer_pane_g2_ParamLimits

0xc8b7,	// (0x00078a59) mup2_visualizer_pane_g2

0x402a,	// (0x000701cc) mup2_visualizer_pane_g3_ParamLimits

0x402a,	// (0x000701cc) mup2_visualizer_pane_g3

0x0002,

0xf679,	// (0x0007b81b) mup2_visualizer_pane_g_ParamLimits

0xf679,	// (0x0007b81b) mup2_visualizer_pane_g

0xb6cf,	// (0x00077871) aid_size_cell_fmradio

0x349e,	// (0x0006f640) aid_height_parent_landcape

0xaaf8,	// (0x00076c9a) wml_content_pane_cp

0xab00,	// (0x00076ca2) wml_tabs_pane

0xab09,	// (0x00076cab) popup_wml_miniature_window

0xab11,	// (0x00076cb3) scroll_pane_cp021

0xab25,	// (0x00076cc7) wml_content_pane_comp8

0x9ca5,	// (0x00075e47) bg_popup_sub_pane_cp05

0xc8d5,	// (0x00078a77) popup_wml_miniature_window_g1

0xc8dd,	// (0x00078a7f) wml_miniature_view_pane

0x4036,	// (0x000701d8) aid_size_wml_view

0x403e,	// (0x000701e0) wml_miniature_view_pane_g1

0x4047,	// (0x000701e9) wml_miniature_view_pane_g2

0x4050,	// (0x000701f2) wml_miniature_view_pane_g3

0x4058,	// (0x000701fa) wml_miniature_view_pane_g4

0x4060,	// (0x00070202) wml_miniature_view_pane_g5

0x4068,	// (0x0007020a) wml_miniature_view_pane_g6

0x4070,	// (0x00070212) wml_miniature_view_pane_g7

0x4078,	// (0x0007021a) wml_miniature_view_pane_g8

0x0007,

0xf680,	// (0x0007b822) wml_miniature_view_pane_g

0xc8e5,	// (0x00078a87) background_graphic_ParamLimits

0xc8e5,	// (0x00078a87) background_graphic

0xc8f1,	// (0x00078a93) wml_tabs_2_pane

0xc8fa,	// (0x00078a9c) wml_tabs_3_pane_ParamLimits

0xc8fa,	// (0x00078a9c) wml_tabs_3_pane

0xc90c,	// (0x00078aae) wml_tabs_4_pane_ParamLimits

0xc90c,	// (0x00078aae) wml_tabs_4_pane

0xc922,	// (0x00078ac4) wml_tabs_5_pane_ParamLimits

0xc922,	// (0x00078ac4) wml_tabs_5_pane

0xc93c,	// (0x00078ade) wml_tabs_pane_g2_ParamLimits

0xc93c,	// (0x00078ade) wml_tabs_pane_g2

0xc950,	// (0x00078af2) wml_tabs_pane_g3_ParamLimits

0xc950,	// (0x00078af2) wml_tabs_pane_g3

0x4080,	// (0x00070222) wml_tabs_2_active_pane_ParamLimits

0x4080,	// (0x00070222) wml_tabs_2_active_pane

0x4094,	// (0x00070236) wml_tabs_2_passive_pane_ParamLimits

0x4094,	// (0x00070236) wml_tabs_2_passive_pane

0x40a8,	// (0x0007024a) wml_tabs_3_active_pane_cp_ParamLimits

0x40a8,	// (0x0007024a) wml_tabs_3_active_pane_cp

0x40bd,	// (0x0007025f) wml_tabs_3_passive_pane_ParamLimits

0x40bd,	// (0x0007025f) wml_tabs_3_passive_pane

0x40d0,	// (0x00070272) wml_tabs_3_passive_pane_cp_ParamLimits

0x40d0,	// (0x00070272) wml_tabs_3_passive_pane_cp

0x40e7,	// (0x00070289) tabs_4_active_pane

0x40ef,	// (0x00070291) tabs_4_passive_pane

0x40f9,	// (0x0007029b) tabs_4_passive_pane_cp

0x4101,	// (0x000702a3) tabs_4_passive_pane_cp2

0x31b9,	// (0x0006f35b) aid_height_text

0x28d6,	// (0x0006ea78) mup_volume_cont_pane_ParamLimits

0x28d6,	// (0x0006ea78) mup_volume_cont_pane

0x0492,	// (0x0006c634) aid_size_cell_pinb

0x049c,	// (0x0006c63e) aid_size_list_pinb

0x3feb,	// (0x0007018d) mup2_volume_cont_pane_ParamLimits

0x3feb,	// (0x0007018d) mup2_volume_cont_pane

0x9793,	// (0x00075935) mup2_volume_cont_pane_g1_ParamLimits

0x9793,	// (0x00075935) mup2_volume_cont_pane_g1

0x0144,	// (0x0006c2e6) aid_size_cell_touch_ParamLimits

0x0144,	// (0x0006c2e6) aid_size_cell_touch

0x0381,	// (0x0006c523) touch_pane_ParamLimits

0x0381,	// (0x0006c523) touch_pane

0x9166,	// (0x00075308) main_rss2_pane

0xc96d,	// (0x00078b0f) listscroll_rss2_pane

0xc976,	// (0x00078b18) rss2_navigation_pane

0xc97e,	// (0x00078b20) list_rss2_pane

0xb195,	// (0x00077337) scroll_pane_cp22

0xc986,	// (0x00078b28) rss2_navigation_pane_g1

0xc98f,	// (0x00078b31) rss2_navigation_pane_g2

0xc997,	// (0x00078b39) rss2_navigation_pane_g3

0x0002,

0xf691,	// (0x0007b833) rss2_navigation_pane_g

0xc99f,	// (0x00078b41) rss2_navigation_pane_t1

0x410b,	// (0x000702ad) rss2_list_single_pane_ParamLimits

0x410b,	// (0x000702ad) rss2_list_single_pane

0xc9ad,	// (0x00078b4f) rss2_list_single_pane_t2

0xc9bb,	// (0x00078b5d) rss2_list_single_pane_t3_ParamLimits

0xc9bb,	// (0x00078b5d) rss2_list_single_pane_t3

0xc9d8,	// (0x00078b7a) rss2_list_single_pane_t4

0x2289,	// (0x0006e42b) smil_status_pane_g1

0x9158,	// (0x000752fa) main_image2_pane_ParamLimits

0x9158,	// (0x000752fa) main_image2_pane

0x3bad,	// (0x0006fd4f) main_camera2_pane_g9_ParamLimits

0x3bad,	// (0x0006fd4f) main_camera2_pane_g9

0x3cdb,	// (0x0006fe7d) main_camera2_pane_t5_ParamLimits

0x3cdb,	// (0x0006fe7d) main_camera2_pane_t5

0x9763,	// (0x00075905) main_camera2_pane_t6_ParamLimits

0x9763,	// (0x00075905) main_camera2_pane_t6

0x4122,	// (0x000702c4) main_image2_pane_g1_ParamLimits

0x4122,	// (0x000702c4) main_image2_pane_g1

0x2ef3,	// (0x0006f095) smil2_video_pane_ParamLimits

0x2ef3,	// (0x0006f095) smil2_video_pane

0x017c,	// (0x0006c31e) aid_zoom_text_primary_cp

0x914e,	// (0x000752f0) popup_preview_fixed_window

0xaa61,	// (0x00076c03) im_reading_pane_g1

0x3a24,	// (0x0006fbc6) cams2_bc_adjust_pane_cp_ParamLimits

0x3a24,	// (0x0006fbc6) cams2_bc_adjust_pane_cp

0x3d0a,	// (0x0006feac) cams2_bc_adjust_pane_ParamLimits

0x3d0a,	// (0x0006feac) cams2_bc_adjust_pane

0xd680,	// (0x00079822) cams2_bc_adjust_pane_g1

0x97cc,	// (0x0007596e) cams2_slider_pane

0x97d5,	// (0x00075977) cams2_slider_pane_g1

0x97de,	// (0x00075980) cams2_slider_pane_g2

0x0006,

0xf698,	// (0x0007b83a) cams2_slider_pane_g

0x0574,	// (0x0006c716) calc_display_pane_ParamLimits

0x059c,	// (0x0006c73e) calc_paper_pane_ParamLimits

0x05bf,	// (0x0006c761) grid_calc_pane_ParamLimits

0x9688,	// (0x0007582a) popup_clock_digital_window_t1_ParamLimits

0xb66c,	// (0x0007780e) main_image_pane_t1

0x0556,	// (0x0006c6f8) aid_size_cell_calc_ParamLimits

0x0556,	// (0x0006c6f8) aid_size_cell_calc

0x34f6,	// (0x0006f698) popup_blid_sat_info2_window_ParamLimits

0x34f6,	// (0x0006f698) popup_blid_sat_info2_window

0xc9ee,	// (0x00078b90) aid_size_cell_blid

0xc9f6,	// (0x00078b98) bg_popup_window_pane_cp07

0xca19,	// (0x00078bbb) grid_popup_blid_pane

0xca23,	// (0x00078bc5) heading_pane_cp05_ParamLimits

0xca23,	// (0x00078bc5) heading_pane_cp05

0xcaed,	// (0x00078c8f) cell_popup_blid_pane_ParamLimits

0xcaed,	// (0x00078c8f) cell_popup_blid_pane

0xcb1f,	// (0x00078cc1) cell_popup_blid_pane_g1

0xcb27,	// (0x00078cc9) cell_popup_blid_pane_t1

0x3fbb,	// (0x0007015d) mup2_indicator_pane_ParamLimits

0x3fbb,	// (0x0007015d) mup2_indicator_pane

0xb3f2,	// (0x00077594) mup2_visualizer_osc_pane

0xc8c3,	// (0x00078a65) mup2_visualizer_spec_pane_ParamLimits

0xc8c3,	// (0x00078a65) mup2_visualizer_spec_pane

0x4138,	// (0x000702da) mup2_spec_half_pane

0x4141,	// (0x000702e3) mup2_spec_half_pane_cp

0x4149,	// (0x000702eb) mup2_spec_bar_pane_ParamLimits

0x4149,	// (0x000702eb) mup2_spec_bar_pane

0xc864,	// (0x00078a06) mup2_spec_bar_pane_g1

0xc86e,	// (0x00078a10) mup2_spec_bar_pane_g2

0x0001,

0xf60b,	// (0x0007b7ad) mup2_spec_bar_pane_g

0x4169,	// (0x0007030b) mup2_osc_middle_pane

0xc880,	// (0x00078a22) mup2_visualizer_osc_pane_g1

0x9190,	// (0x00075332) popup_number_entry_window_t1_ParamLimits

0x91a3,	// (0x00075345) popup_number_entry_window_t2_ParamLimits

0x91b5,	// (0x00075357) popup_number_entry_window_t3_ParamLimits

0x03d3,	// (0x0006c575) popup_number_entry_window_t5_ParamLimits

0x03d3,	// (0x0006c575) popup_number_entry_window_t5

0xf0cd,	// (0x0007b26f) popup_number_entry_window_t_ParamLimits

0x91c7,	// (0x00075369) text_title_cp2_ParamLimits

0x96c7,	// (0x00075869) aid_hotspot_pointer_text2_pane

0x96e1,	// (0x00075883) main_viewer_pane_g9_ParamLimits

0x96e1,	// (0x00075883) main_viewer_pane_g9

0xac9a,	// (0x00076e3c) cale_month_pane_t1_ParamLimits

0xacd7,	// (0x00076e79) bg_cale_pane_ParamLimits

0xacef,	// (0x00076e91) list_cale_pane_ParamLimits

0xad00,	// (0x00076ea2) listscroll_cale_day_pane_t1

0xad12,	// (0x00076eb4) scroll_pane_cp09_ParamLimits

0x290c,	// (0x0006eaae) main_mup_eq_pane_t1_ParamLimits

0x290c,	// (0x0006eaae) main_mup_eq_pane_t1

0x2926,	// (0x0006eac8) main_mup_eq_pane_t2_ParamLimits

0x2926,	// (0x0006eac8) main_mup_eq_pane_t2

0x2940,	// (0x0006eae2) main_mup_eq_pane_t3_ParamLimits

0x2940,	// (0x0006eae2) main_mup_eq_pane_t3

0x295c,	// (0x0006eafe) main_mup_eq_pane_t4_ParamLimits

0x295c,	// (0x0006eafe) main_mup_eq_pane_t4

0x2978,	// (0x0006eb1a) main_mup_eq_pane_t5_ParamLimits

0x2978,	// (0x0006eb1a) main_mup_eq_pane_t5

0x2994,	// (0x0006eb36) main_mup_eq_pane_t6_ParamLimits

0x2994,	// (0x0006eb36) main_mup_eq_pane_t6

0x29a8,	// (0x0006eb4a) main_mup_eq_pane_t7_ParamLimits

0x29a8,	// (0x0006eb4a) main_mup_eq_pane_t7

0x29bc,	// (0x0006eb5e) main_mup_eq_pane_t8_ParamLimits

0x29bc,	// (0x0006eb5e) main_mup_eq_pane_t8

0x29d0,	// (0x0006eb72) main_mup_eq_pane_t9_ParamLimits

0x29d0,	// (0x0006eb72) main_mup_eq_pane_t9

0x29ea,	// (0x0006eb8c) main_mup_eq_pane_t10_ParamLimits

0x29ea,	// (0x0006eb8c) main_mup_eq_pane_t10

0x0009,

0xf45a,	// (0x0007b5fc) main_mup_eq_pane_t_ParamLimits

0xf45a,	// (0x0007b5fc) main_mup_eq_pane_t

0x2a99,	// (0x0006ec3b) mup_equalizer_pane_cp5_ParamLimits

0x2aad,	// (0x0006ec4f) mup_equalizer_pane_cp6_ParamLimits

0x2ac1,	// (0x0006ec63) mup_equalizer_pane_cp7_ParamLimits

0x9166,	// (0x00075308) main_gallery_pane

0xc889,	// (0x00078a2b) smil2_volume_pane

0xc891,	// (0x00078a33) smil_status_volume_pane_g1_ParamLimits

0xc8a4,	// (0x00078a46) smil_status_volume_pane_g2_ParamLimits

0x9741,	// (0x000758e3) smil_status_volume_pane_g3_ParamLimits

0xf610,	// (0x0007b7b2) smil_status_volume_pane_g_ParamLimits

0xc9f6,	// (0x00078b98) bg_popup_window_pane_cp07_ParamLimits

0xca04,	// (0x00078ba6) blid_firmament_pane

0x4172,	// (0x00070314) aid_size_cell_gallery_ParamLimits

0x4172,	// (0x00070314) aid_size_cell_gallery

0x4188,	// (0x0007032a) grid_gallery_pane_ParamLimits

0x4188,	// (0x0007032a) grid_gallery_pane

0x41a1,	// (0x00070343) cell_gallery_pane_ParamLimits

0x41a1,	// (0x00070343) cell_gallery_pane

0xcb35,	// (0x00078cd7) bg_cell_gallery_focus_pane_ParamLimits

0xcb35,	// (0x00078cd7) bg_cell_gallery_focus_pane

0xcb47,	// (0x00078ce9) cell_gallery_pane_g1_ParamLimits

0xcb47,	// (0x00078ce9) cell_gallery_pane_g1

0x41ea,	// (0x0007038c) cell_gallery_pane_g2_ParamLimits

0x41ea,	// (0x0007038c) cell_gallery_pane_g2

0x41f7,	// (0x00070399) cell_gallery_pane_g3_ParamLimits

0x41f7,	// (0x00070399) cell_gallery_pane_g3

0xcb53,	// (0x00078cf5) cell_gallery_pane_g4_ParamLimits

0xcb53,	// (0x00078cf5) cell_gallery_pane_g4

0x0003,

0xf6be,	// (0x0007b860) cell_gallery_pane_g_ParamLimits

0xf6be,	// (0x0007b860) cell_gallery_pane_g

0xcb5f,	// (0x00078d01) bg_cell_gallery_focus_pane_g1

0xcb67,	// (0x00078d09) bg_cell_gallery_focus_pane_g2

0xcb6f,	// (0x00078d11) bg_cell_gallery_focus_pane_g3

0xcb77,	// (0x00078d19) bg_cell_gallery_focus_pane_g4

0xcb7f,	// (0x00078d21) bg_cell_gallery_focus_pane_g5

0xcb87,	// (0x00078d29) bg_cell_gallery_focus_pane_g6

0xcb8f,	// (0x00078d31) bg_cell_gallery_focus_pane_g7

0xcb97,	// (0x00078d39) bg_cell_gallery_focus_pane_g8

0x0007,

0xf6c7,	// (0x0007b869) bg_cell_gallery_focus_pane_g

0xcb9f,	// (0x00078d41) aid_firma_cardinal

0xcbb3,	// (0x00078d55) blid_firmament_pane_t1

0xcbca,	// (0x00078d6c) blid_firmament_pane_t2

0xcbe1,	// (0x00078d83) blid_firmament_pane_t3

0xcbf8,	// (0x00078d9a) blid_firmament_pane_t4

0x0003,

0xf6d8,	// (0x0007b87a) blid_firmament_pane_t

0xcc0f,	// (0x00078db1) blid_sat_info_pane

0xcc1f,	// (0x00078dc1) blid_sat_info_pane_g1

0xcc1f,	// (0x00078dc1) blid_sat_info_pane_g2

0x0001,

0xf6e1,	// (0x0007b883) blid_sat_info_pane_g

0xcc29,	// (0x00078dcb) blid_sat_info_pane_t1

0xcc37,	// (0x00078dd9) smil2_volume_content_pane

0xcc40,	// (0x00078de2) smil2_volume_pane_g1

0xa82b,	// (0x000769cd) smil2_volume_content_pane_g1

0xcc48,	// (0x00078dea) smil2_volume_content_pane_g2

0xcc51,	// (0x00078df3) smil2_volume_content_pane_g3

0xcc5a,	// (0x00078dfc) smil2_volume_content_pane_g4

0xcc63,	// (0x00078e05) smil2_volume_content_pane_g5

0xcc6c,	// (0x00078e0e) smil2_volume_content_pane_g6

0xcc75,	// (0x00078e17) smil2_volume_content_pane_g7

0xcc7e,	// (0x00078e20) smil2_volume_content_pane_g8

0xcc87,	// (0x00078e29) smil2_volume_content_pane_g9

0xcc90,	// (0x00078e32) smil2_volume_content_pane_g10

0x0009,

0xf6e6,	// (0x0007b888) smil2_volume_content_pane_g

0x0b2c,	// (0x0006ccce) cale_week_day_heading_pane_t1_ParamLimits

0x0b76,	// (0x0006cd18) cale_week_day_heading_pane_t2_ParamLimits

0x0bc5,	// (0x0006cd67) cale_week_day_heading_pane_t3_ParamLimits

0x0c14,	// (0x0006cdb6) cale_week_day_heading_pane_t4_ParamLimits

0x0c63,	// (0x0006ce05) cale_week_day_heading_pane_t5_ParamLimits

0x0cba,	// (0x0006ce5c) cale_week_day_heading_pane_t6_ParamLimits

0x0d11,	// (0x0006ceb3) cale_week_day_heading_pane_t7_ParamLimits

0xf1d2,	// (0x0007b374) cale_week_day_heading_pane_t_ParamLimits

0xa91e,	// (0x00076ac0) bg_cale_side_pane_ParamLimits

0x0d5b,	// (0x0006cefd) cale_week_time_pane_t1_ParamLimits

0x0d75,	// (0x0006cf17) cale_week_time_pane_t2_ParamLimits

0x0d8f,	// (0x0006cf31) cale_week_time_pane_t3_ParamLimits

0x0da9,	// (0x0006cf4b) cale_week_time_pane_t4_ParamLimits

0x0dc3,	// (0x0006cf65) cale_week_time_pane_t5_ParamLimits

0x0ddd,	// (0x0006cf7f) cale_week_time_pane_t6_ParamLimits

0x0df7,	// (0x0006cf99) cale_week_time_pane_t7_ParamLimits

0x0e17,	// (0x0006cfb9) cale_week_time_pane_t8_ParamLimits

0xf1e1,	// (0x0007b383) cale_week_time_pane_t_ParamLimits

0x0e37,	// (0x0006cfd9) cell_cale_week_pane_g2_ParamLimits

0xa91e,	// (0x00076ac0) bg_cale_side_pane_cp01_ParamLimits

0x209a,	// (0x0006e23c) cale_month_week_pane_t1_ParamLimits

0x20b3,	// (0x0006e255) cale_month_week_pane_t2_ParamLimits

0x20cc,	// (0x0006e26e) cale_month_week_pane_t3_ParamLimits

0x20e5,	// (0x0006e287) cale_month_week_pane_t4_ParamLimits

0x20fe,	// (0x0006e2a0) cale_month_week_pane_t5_ParamLimits

0x2117,	// (0x0006e2b9) cale_month_week_pane_t6_ParamLimits

0xf2ba,	// (0x0007b45c) cale_month_week_pane_t_ParamLimits

0x9604,	// (0x000757a6) cell_cale_month_pane_g1_ParamLimits

0x9166,	// (0x00075308) main_cale_event_viewer_pane

0x90f0,	// (0x00075292) listscroll_cale_event_viewer_pane

0xcc99,	// (0x00078e3b) list_cale_ev_pane

0xcca1,	// (0x00078e43) scroll_pane_cp023

0xccad,	// (0x00078e4f) field_cale_ev_pane_ParamLimits

0xccad,	// (0x00078e4f) field_cale_ev_pane

0xccc9,	// (0x00078e6b) field_cale_ev_content_pane_ParamLimits

0xccc9,	// (0x00078e6b) field_cale_ev_content_pane

0xccd5,	// (0x00078e77) field_cale_ev_pane_g1_ParamLimits

0xccd5,	// (0x00078e77) field_cale_ev_pane_g1

0xcce1,	// (0x00078e83) field_cale_ev_pane_g2_ParamLimits

0xcce1,	// (0x00078e83) field_cale_ev_pane_g2

0xccf9,	// (0x00078e9b) field_cale_ev_pane_g3_ParamLimits

0xccf9,	// (0x00078e9b) field_cale_ev_pane_g3

0x0002,

0xf6fb,	// (0x0007b89d) field_cale_ev_pane_g_ParamLimits

0xf6fb,	// (0x0007b89d) field_cale_ev_pane_g

0xcd11,	// (0x00078eb3) field_cale_ev_pane_t1_ParamLimits

0xcd11,	// (0x00078eb3) field_cale_ev_pane_t1

0xcd28,	// (0x00078eca) field_cale_ev_content_pane_t1_ParamLimits

0xcd28,	// (0x00078eca) field_cale_ev_content_pane_t1

0x2b56,	// (0x0006ecf8) bg_button_pane_cp01

0x086f,	// (0x0006ca11) listscroll_cale_week_pane_ParamLimits

0xa8c8,	// (0x00076a6a) popup_toolbar_window_cp01

0xa8ef,	// (0x00076a91) listscroll_cale_week_pane_t1_ParamLimits

0x086f,	// (0x0006ca11) listscroll_cale_day_pane_ParamLimits

0xa8c8,	// (0x00076a6a) popup_toolbar_window_cp02

0xad00,	// (0x00076ea2) listscroll_cale_day_pane_t1_ParamLimits

0x34bc,	// (0x0006f65e) main_cale_month_pane_ParamLimits

0x972c,	// (0x000758ce) popup_toolbar_window_cp03_ParamLimits

0x972c,	// (0x000758ce) popup_toolbar_window_cp03

0x2db7,	// (0x0006ef59) main_image_pane_g2_ParamLimits

0x2db7,	// (0x0006ef59) main_image_pane_g2

0x2dc8,	// (0x0006ef6a) main_image_pane_g3_ParamLimits

0x2dc8,	// (0x0006ef6a) main_image_pane_g3

0x0002,

0xf4ec,	// (0x0007b68e) main_image_pane_g_ParamLimits

0xf4ec,	// (0x0007b68e) main_image_pane_g

0xb66c,	// (0x0007780e) main_image_pane_t1_ParamLimits

0x2dd9,	// (0x0006ef7b) main_image_pane_t2_ParamLimits

0x2dd9,	// (0x0006ef7b) main_image_pane_t2

0x2deb,	// (0x0006ef8d) main_image_pane_t3_ParamLimits

0x2deb,	// (0x0006ef8d) main_image_pane_t3

0x2e13,	// (0x0006efb5) main_image_pane_t4_ParamLimits

0x2e13,	// (0x0006efb5) main_image_pane_t4

0x0003,

0xf4f3,	// (0x0007b695) main_image_pane_t_ParamLimits

0xf4f3,	// (0x0007b695) main_image_pane_t

0x2e33,	// (0x0006efd5) popup_image_details_window_cp01

0x2e3d,	// (0x0006efdf) popup_toobar_trans_pane_cp01_ParamLimits

0x2e3d,	// (0x0006efdf) popup_toobar_trans_pane_cp01

0x35cd,	// (0x0006f76f) popup_image_details_window_ParamLimits

0x35cd,	// (0x0006f76f) popup_image_details_window

0x96ff,	// (0x000758a1) popup_image_focus_window

0x39de,	// (0x0006fb80) camera2_autofocus_pane_ParamLimits

0x39de,	// (0x0006fb80) camera2_autofocus_pane

0x90f0,	// (0x00075292) bg_popup_sub_pane_cp06

0xcd45,	// (0x00078ee7) popup_image_focus_window_g1

0xcd4d,	// (0x00078eef) popup_image_focus_window_g2

0xcd55,	// (0x00078ef7) popup_image_focus_window_g3

0xcd5d,	// (0x00078eff) popup_image_focus_window_g4

0x0003,

0xf702,	// (0x0007b8a4) popup_image_focus_window_g

0xcd65,	// (0x00078f07) popup_image_focus_window_t1

0xcd73,	// (0x00078f15) popup_image_focus_window_t2

0xcd83,	// (0x00078f25) popup_image_focus_window_t3

0x0002,

0xf70b,	// (0x0007b8ad) popup_image_focus_window_t

0xcd91,	// (0x00078f33) camera2_autofocus_pane_g1

0xa1ea,	// (0x0007638c) bg_tb_trans_pane_cp01

0xcd9f,	// (0x00078f41) popup_image_details_window_g1

0xcdb2,	// (0x00078f54) popup_image_details_window_g2

0x0002,

0xf71d,	// (0x0007b8bf) popup_image_details_window_g

0xcddb,	// (0x00078f7d) popup_image_details_window_t1

0xcded,	// (0x00078f8f) popup_image_details_window_t2

0xce06,	// (0x00078fa8) popup_image_details_window_t3

0xce1a,	// (0x00078fbc) popup_image_details_window_t4

0xce35,	// (0x00078fd7) popup_image_details_window_t5

0x0004,

0xf724,	// (0x0007b8c6) popup_image_details_window_t

0x9fd0,	// (0x00076172) bg_calc_paper_pane_ParamLimits

0x9166,	// (0x00075308) grid_highlight_pane_cp013

0x955c,	// (0x000756fe) list_calc_pane_ParamLimits

0x956e,	// (0x00075710) scroll_pane_cp024

0x9fe4,	// (0x00076186) bg_calc_display_pane_ParamLimits

0x06bd,	// (0x0006c85f) calc_display_pane_t1_ParamLimits

0x06cf,	// (0x0006c871) calc_display_pane_t2_ParamLimits

0x9576,	// (0x00075718) calc_display_pane_t3_ParamLimits

0xf154,	// (0x0007b2f6) calc_display_pane_t_ParamLimits

0x0794,	// (0x0006c936) cell_calc_pane_g2

0x0001,

0xf171,	// (0x0007b313) cell_calc_pane_g

0x079d,	// (0x0006c93f) cell_calc_pane_t1

0xa800,	// (0x000769a2) grid_highlight_pane_cp02_ParamLimits

0xa816,	// (0x000769b8) toolbar_button_pane_cp01_ParamLimits

0xa816,	// (0x000769b8) toolbar_button_pane_cp01

0xb6b1,	// (0x00077853) temp_image_control_pane_ParamLimits

0xb6b1,	// (0x00077853) temp_image_control_pane

0x9158,	// (0x000752fa) main_mp3_pane

0xce4f,	// (0x00078ff1) temp_image_control_pane_g1_ParamLimits

0xce4f,	// (0x00078ff1) temp_image_control_pane_g1

0xce5d,	// (0x00078fff) temp_image_control_pane_g2_ParamLimits

0xce5d,	// (0x00078fff) temp_image_control_pane_g2

0xce6f,	// (0x00079011) temp_image_control_pane_g3_ParamLimits

0xce6f,	// (0x00079011) temp_image_control_pane_g3

0x4234,	// (0x000703d6) temp_image_control_pane_g4_ParamLimits

0x4234,	// (0x000703d6) temp_image_control_pane_g4

0x0003,

0xf72f,	// (0x0007b8d1) temp_image_control_pane_g_ParamLimits

0xf72f,	// (0x0007b8d1) temp_image_control_pane_g

0xce4f,	// (0x00078ff1) main_mp3_pane_g1

0x4247,	// (0x000703e9) main_mp3_pane_g2

0x0007,

0xf738,	// (0x0007b8da) main_mp3_pane_g

0xceb2,	// (0x00079054) main_mp3_pane_t1

0xa970,	// (0x00076b12) main_camera_pane_g8_ParamLimits

0xa970,	// (0x00076b12) main_camera_pane_g8

0x115a,	// (0x0006d2fc) main_video_pane_g7_ParamLimits

0x115a,	// (0x0006d2fc) main_video_pane_g7

0x9781,	// (0x00075923) main_camera2_pane_t7_ParamLimits

0x9781,	// (0x00075923) main_camera2_pane_t7

0xaab8,	// (0x00076c5a) scroll_pane_cp025_ParamLimits

0xaab8,	// (0x00076c5a) scroll_pane_cp025

0xaacc,	// (0x00076c6e) scroll_pane_cp026_ParamLimits

0xaacc,	// (0x00076c6e) scroll_pane_cp026

0xaadb,	// (0x00076c7d) wml_content_pane_ParamLimits

0x9166,	// (0x00075308) main_touch_calib_pane

0x431d,	// (0x000704bf) main_touch_calib_pane_g1

0x432f,	// (0x000704d1) main_touch_calib_pane_g2

0x4341,	// (0x000704e3) main_touch_calib_pane_g3

0x4353,	// (0x000704f5) main_touch_calib_pane_g4

0x0003,

0xf756,	// (0x0007b8f8) main_touch_calib_pane_g

0x4365,	// (0x00070507) main_touch_calib_pane_t1

0x437f,	// (0x00070521) main_touch_calib_pane_t2

0x0004,

0xf75f,	// (0x0007b901) main_touch_calib_pane_t

0xb273,	// (0x00077415) mup_progress_pane_cp02

0xb2a8,	// (0x0007744a) navi_pane_g1

0xb37d,	// (0x0007751f) navi_pane_mp_t3

0x9158,	// (0x000752fa) main_mp3_pane_ParamLimits

0x374a,	// (0x0006f8ec) navi_pane_ParamLimits

0xce4f,	// (0x00078ff1) main_mp3_pane_g1_ParamLimits

0x4247,	// (0x000703e9) main_mp3_pane_g2_ParamLimits

0x4255,	// (0x000703f7) main_mp3_pane_g3_ParamLimits

0x4255,	// (0x000703f7) main_mp3_pane_g3

0x4263,	// (0x00070405) main_mp3_pane_g4_ParamLimits

0x4263,	// (0x00070405) main_mp3_pane_g4

0xce7f,	// (0x00079021) main_mp3_pane_g5_ParamLimits

0xce7f,	// (0x00079021) main_mp3_pane_g5

0xce8d,	// (0x0007902f) main_mp3_pane_g6_ParamLimits

0xce8d,	// (0x0007902f) main_mp3_pane_g6

0xce9a,	// (0x0007903c) main_mp3_pane_g7_ParamLimits

0xce9a,	// (0x0007903c) main_mp3_pane_g7

0xcea6,	// (0x00079048) main_mp3_pane_g8_ParamLimits

0xcea6,	// (0x00079048) main_mp3_pane_g8

0xf738,	// (0x0007b8da) main_mp3_pane_g_ParamLimits

0x4271,	// (0x00070413) main_mp3_pane_t2

0x427f,	// (0x00070421) main_mp3_pane_t3

0xcec0,	// (0x00079062) main_mp3_pane_t4

0xcece,	// (0x00079070) main_mp3_pane_t5

0x0005,

0xf749,	// (0x0007b8eb) main_mp3_pane_t

0xcedc,	// (0x0007907e) mup_progress_pane_cp01

0x017c,	// (0x0006c31e) aid_zoom_text_secondary2

0xcc99,	// (0x00078e3b) list_cale_ev2_pane

0xcca1,	// (0x00078e43) scroll_pane_cp023_ParamLimits

0x43d5,	// (0x00070577) field_cale_ev2_pane_ParamLimits

0x43d5,	// (0x00070577) field_cale_ev2_pane

0xa1f8,	// (0x0007639a) field_cale_ev2_pane_g1_ParamLimits

0xa1f8,	// (0x0007639a) field_cale_ev2_pane_g1

0xa204,	// (0x000763a6) field_cale_ev2_pane_g2_ParamLimits

0xa204,	// (0x000763a6) field_cale_ev2_pane_g2

0xa21c,	// (0x000763be) field_cale_ev2_pane_g3_ParamLimits

0xa21c,	// (0x000763be) field_cale_ev2_pane_g3

0x0003,

0xf76a,	// (0x0007b90c) field_cale_ev2_pane_g_ParamLimits

0xf76a,	// (0x0007b90c) field_cale_ev2_pane_g

0xa240,	// (0x000763e2) field_cale_ev2_pane_t1_ParamLimits

0xa240,	// (0x000763e2) field_cale_ev2_pane_t1

0xa257,	// (0x000763f9) field_cale_ev2_pane_t2_ParamLimits

0xa257,	// (0x000763f9) field_cale_ev2_pane_t2

0x0001,

0xf773,	// (0x0007b915) field_cale_ev2_pane_t_ParamLimits

0xf773,	// (0x0007b915) field_cale_ev2_pane_t

0x2c6a,	// (0x0006ee0c) main_postcard_pane_g5_ParamLimits

0x2c6a,	// (0x0006ee0c) main_postcard_pane_g5

0x2c80,	// (0x0006ee22) main_postcard_pane_g6_ParamLimits

0x2c80,	// (0x0006ee22) main_postcard_pane_g6

0x0f14,	// (0x0006d0b6) camera2_autofocus_pane_cp_ParamLimits

0x0f14,	// (0x0006d0b6) camera2_autofocus_pane_cp

0x9158,	// (0x000752fa) main_mup3_pane

0x4417,	// (0x000705b9) main_mup3_pane_g1_ParamLimits

0x4417,	// (0x000705b9) main_mup3_pane_g1

0x4439,	// (0x000705db) main_mup3_pane_g2_ParamLimits

0x4439,	// (0x000705db) main_mup3_pane_g2

0x44bb,	// (0x0007065d) main_mup3_pane_g3_ParamLimits

0x44bb,	// (0x0007065d) main_mup3_pane_g3

0x4501,	// (0x000706a3) main_mup3_pane_g4_ParamLimits

0x4501,	// (0x000706a3) main_mup3_pane_g4

0x4547,	// (0x000706e9) main_mup3_pane_g5_ParamLimits

0x4547,	// (0x000706e9) main_mup3_pane_g5

0x458f,	// (0x00070731) main_mup3_pane_g6_ParamLimits

0x458f,	// (0x00070731) main_mup3_pane_g6

0xcee4,	// (0x00079086) main_mup3_pane_g7_ParamLimits

0xcee4,	// (0x00079086) main_mup3_pane_g7

0x0007,

0xf783,	// (0x0007b925) main_mup3_pane_g_ParamLimits

0xf783,	// (0x0007b925) main_mup3_pane_g

0x460d,	// (0x000707af) main_mup3_pane_t1_ParamLimits

0x460d,	// (0x000707af) main_mup3_pane_t1

0x4681,	// (0x00070823) main_mup3_pane_t2_ParamLimits

0x4681,	// (0x00070823) main_mup3_pane_t2

0x4755,	// (0x000708f7) main_mup3_pane_t4_ParamLimits

0x4755,	// (0x000708f7) main_mup3_pane_t4

0x47ab,	// (0x0007094d) main_mup3_pane_t5_ParamLimits

0x47ab,	// (0x0007094d) main_mup3_pane_t5

0x4867,	// (0x00070a09) main_mup3_pane_t6_ParamLimits

0x4867,	// (0x00070a09) main_mup3_pane_t6

0x0005,

0xf794,	// (0x0007b936) main_mup3_pane_t_ParamLimits

0xf794,	// (0x0007b936) main_mup3_pane_t

0x491f,	// (0x00070ac1) mup3_progress_pane_ParamLimits

0x491f,	// (0x00070ac1) mup3_progress_pane

0x49ab,	// (0x00070b4d) popup_mup3_control_window_ParamLimits

0x49ab,	// (0x00070b4d) popup_mup3_control_window

0xcef2,	// (0x00079094) popup_mup3_text_window

0x49dd,	// (0x00070b7f) mup3_progress_pane_t1

0x49fc,	// (0x00070b9e) mup3_progress_pane_t2

0xcefa,	// (0x0007909c) mup3_progress_pane_t3

0x0002,

0xf7a1,	// (0x0007b943) mup3_progress_pane_t

0xcf17,	// (0x000790b9) mup_progress_pane_cp03

0x90f0,	// (0x00075292) bg_tb_trans_pane_cp04

0x4a1b,	// (0x00070bbd) mup3_volume_pane

0x4a23,	// (0x00070bc5) popup_mup3_control_window_g1

0x4a2c,	// (0x00070bce) mup3_volume_pane_g1

0x4a35,	// (0x00070bd7) mup3_volume_pane_g2

0x4a3e,	// (0x00070be0) mup3_volume_pane_g3

0x0002,

0xf7a8,	// (0x0007b94a) mup3_volume_pane_g

0x90f0,	// (0x00075292) bg_tb_trans_pane_cp03

0xcf27,	// (0x000790c9) popup_mup3_text_window_g1

0xcf2f,	// (0x000790d1) popup_mup3_text_window_t1

0xa7e9,	// (0x0007698b) list_calc_item_pane_g1_ParamLimits

0xc964,	// (0x00078b06) mup_volume_pane_cp_g1

0x4399,	// (0x0007053b) main_touch_calib_pane_t3

0x43ad,	// (0x0007054f) main_touch_calib_pane_t4

0x43c1,	// (0x00070563) main_touch_calib_pane_t5

0x90fa,	// (0x0007529c) aid_cell_size_toolbar2

0x9102,	// (0x000752a4) aid_popup3_width_pane

0x0174,	// (0x0006c316) aid_zoom_text_msg_primary

0x0eeb,	// (0x0006d08d) vorec_t7

0x9ff0,	// (0x00076192) bg_calc_paper_pane_g1_ParamLimits

0x9ffc,	// (0x0007619e) bg_calc_paper_pane_g2_ParamLimits

0xa008,	// (0x000761aa) bg_calc_paper_pane_g3_ParamLimits

0xa014,	// (0x000761b6) bg_calc_paper_pane_g4_ParamLimits

0xa020,	// (0x000761c2) bg_calc_paper_pane_g5_ParamLimits

0x0718,	// (0x0006c8ba) bg_calc_paper_pane_g6_ParamLimits

0x0729,	// (0x0006c8cb) bg_calc_paper_pane_g7_ParamLimits

0x073a,	// (0x0006c8dc) bg_calc_paper_pane_g8_ParamLimits

0xf15b,	// (0x0007b2fd) bg_calc_paper_pane_g_ParamLimits

0x074d,	// (0x0006c8ef) calc_bg_paper_pane_g9_ParamLimits

0x106c,	// (0x0006d20e) image_qvga_pane_ParamLimits

0x106c,	// (0x0006d20e) image_qvga_pane

0x9f00,	// (0x000760a2) bg_popup_sub_pane_cp04_ParamLimits

0xb5e8,	// (0x0007778a) popup_mup_playback_window_g1_ParamLimits

0xb5f4,	// (0x00077796) popup_mup_playback_window_t1_ParamLimits

0xb609,	// (0x000777ab) popup_mup_playback_window_t2_ParamLimits

0xf4e7,	// (0x0007b689) popup_mup_playback_window_t_ParamLimits

0x3ed5,	// (0x00070077) main_mup2_pane_g3_ParamLimits

0x3ed5,	// (0x00070077) main_mup2_pane_g3

0x13df,	// (0x0006d581) popup_toolbar_window_cp04

0xb9fe,	// (0x00077ba0) popup_call2_audio_second_window_g3_ParamLimits

0xb9fe,	// (0x00077ba0) popup_call2_audio_second_window_g3

0xbe08,	// (0x00077faa) popup_call2_audio_first_window_g4_ParamLimits

0xbe08,	// (0x00077faa) popup_call2_audio_first_window_g4

0xc49c,	// (0x0007863e) popup_call2_audio_in_window_g4_ParamLimits

0xc49c,	// (0x0007863e) popup_call2_audio_in_window_g4

0x2d99,	// (0x0006ef3b) aid_area_sk_bg_cut_ParamLimits

0x2d99,	// (0x0006ef3b) aid_area_sk_bg_cut

0xb61e,	// (0x000777c0) aid_area_sk_bg_cut_2_ParamLimits

0xb61e,	// (0x000777c0) aid_area_sk_bg_cut_2

0x41da,	// (0x0007037c) aid_placing_details_win

0x41e2,	// (0x00070384) aid_placing_details_win_2

0xcd91,	// (0x00078f33) camera2_autofocus_pane_g1_ParamLimits

0x031a,	// (0x0006c4bc) popup_fixed_preview_cale_window_ParamLimits

0x031a,	// (0x0006c4bc) popup_fixed_preview_cale_window

0xb403,	// (0x000775a5) navi_slider_pane_g3

0xb40c,	// (0x000775ae) navi_slider_pane_g4

0xb415,	// (0x000775b7) navi_slider_pane_g5

0xb403,	// (0x000775a5) navi_slider_pane_g6

0x96ae,	// (0x00075850) navi_slider_pane_g7

0xb528,	// (0x000776ca) mup_scale_pane_g3

0xb531,	// (0x000776d3) mup_scale_pane_g4

0xb53a,	// (0x000776dc) mup_scale_pane_g5

0x2ad5,	// (0x0006ec77) mup_scale_pane_g6

0x2ade,	// (0x0006ec80) mup_scale_pane_g7

0xb403,	// (0x000775a5) cams2_slider_pane_g3

0xc9e6,	// (0x00078b88) cams2_slider_pane_g4

0x97e7,	// (0x00075989) cams2_slider_pane_g5

0xb403,	// (0x000775a5) cams2_slider_pane_g6

0x97ef,	// (0x00075991) cams2_slider_pane_g7

0xcc1f,	// (0x00078dc1) camera2_autofocus_pane_cp_g1

0xc7fd,	// (0x0007899f) bg_popup_preview_window_pane_cp02_ParamLimits

0xc7fd,	// (0x0007899f) bg_popup_preview_window_pane_cp02

0xcf3d,	// (0x000790df) list_fp_cale_pane_ParamLimits

0xcf3d,	// (0x000790df) list_fp_cale_pane

0xcf49,	// (0x000790eb) popup_fixed_preview_cale_window_t1_ParamLimits

0xcf49,	// (0x000790eb) popup_fixed_preview_cale_window_t1

0x4a47,	// (0x00070be9) popup_fixed_preview_cale_window_t2_ParamLimits

0x4a47,	// (0x00070be9) popup_fixed_preview_cale_window_t2

0x4a5c,	// (0x00070bfe) popup_fixed_preview_cale_window_t3_ParamLimits

0x4a5c,	// (0x00070bfe) popup_fixed_preview_cale_window_t3

0x0002,

0xf7af,	// (0x0007b951) popup_fixed_preview_cale_window_t_ParamLimits

0xf7af,	// (0x0007b951) popup_fixed_preview_cale_window_t

0x4a71,	// (0x00070c13) list_single_fp_cale_pane_ParamLimits

0x4a71,	// (0x00070c13) list_single_fp_cale_pane

0xcf67,	// (0x00079109) list_single_fp_cale_pane_g1_ParamLimits

0xcf67,	// (0x00079109) list_single_fp_cale_pane_g1

0xcf73,	// (0x00079115) list_single_fp_cale_pane_g2_ParamLimits

0xcf73,	// (0x00079115) list_single_fp_cale_pane_g2

0x0002,

0xf7b6,	// (0x0007b958) list_single_fp_cale_pane_g_ParamLimits

0xf7b6,	// (0x0007b958) list_single_fp_cale_pane_g

0xcf8c,	// (0x0007912e) list_single_fp_cale_pane_t1_ParamLimits

0xcf8c,	// (0x0007912e) list_single_fp_cale_pane_t1

0xcf9e,	// (0x00079140) list_single_fp_cale_pane_t2_ParamLimits

0xcf9e,	// (0x00079140) list_single_fp_cale_pane_t2

0x0001,

0xf7bd,	// (0x0007b95f) list_single_fp_cale_pane_t_ParamLimits

0xf7bd,	// (0x0007b95f) list_single_fp_cale_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0x9166,	// (0x00075308) main_dialer_pane

0x4a88,	// (0x00070c2a) aid_cell_size_keypad

0x4a92,	// (0x00070c34) dialer_ne_pane

0x4a9a,	// (0x00070c3c) grid_dialer_command_1_pane

0x4aa2,	// (0x00070c44) grid_dialer_command_2_pane

0x4aaa,	// (0x00070c4c) grid_dialer_keypad_pane

0x4abc,	// (0x00070c5e) bg_popup_call_pane_cp06_ParamLimits

0x4abc,	// (0x00070c5e) bg_popup_call_pane_cp06

0x4ac8,	// (0x00070c6a) dialer_ne_clear_pane_ParamLimits

0x4ac8,	// (0x00070c6a) dialer_ne_clear_pane

0xcfd1,	// (0x00079173) dialer_ne_pane_g1

0xcfd9,	// (0x0007917b) dialer_ne_pane_t1_ParamLimits

0xcfd9,	// (0x0007917b) dialer_ne_pane_t1

0x4ad4,	// (0x00070c76) dialer_ne_pane_t2_ParamLimits

0x4ad4,	// (0x00070c76) dialer_ne_pane_t2

0x4afe,	// (0x00070ca0) dialer_ne_pane_t3_ParamLimits

0x4afe,	// (0x00070ca0) dialer_ne_pane_t3

0x0002,

0xf7c2,	// (0x0007b964) dialer_ne_pane_t_ParamLimits

0xf7c2,	// (0x0007b964) dialer_ne_pane_t

0x4b2e,	// (0x00070cd0) dialer_ne_pane_t3_copy1_ParamLimits

0x4b2e,	// (0x00070cd0) dialer_ne_pane_t3_copy1

0x4b5d,	// (0x00070cff) cell_dialer_keypad_pane_ParamLimits

0x4b5d,	// (0x00070cff) cell_dialer_keypad_pane

0x4b74,	// (0x00070d16) cell_dialer_command_1_pane_ParamLimits

0x4b74,	// (0x00070d16) cell_dialer_command_1_pane

0x4b8a,	// (0x00070d2c) cell_dialer_command_2_pane_ParamLimits

0x4b8a,	// (0x00070d2c) cell_dialer_command_2_pane

0xcfeb,	// (0x0007918d) bg_button_pane_cp02_ParamLimits

0xcfeb,	// (0x0007918d) bg_button_pane_cp02

0x4b99,	// (0x00070d3b) cell_dialer_keypad_pane_g1_ParamLimits

0x4b99,	// (0x00070d3b) cell_dialer_keypad_pane_g1

0xcfeb,	// (0x0007918d) bg_button_pane_cp03_ParamLimits

0xcfeb,	// (0x0007918d) bg_button_pane_cp03

0x4bae,	// (0x00070d50) cell_dialer_command_1_pane_g1_ParamLimits

0x4bae,	// (0x00070d50) cell_dialer_command_1_pane_g1

0xcff7,	// (0x00079199) bg_button_pane_cp04

0x4bc1,	// (0x00070d63) cell_dialer_command_2_pane_g1

0xb3f2,	// (0x00077594) bg_button_pane_cp06

0xcfff,	// (0x000791a1) dialer_ne_clear_pane_g1

0xb2b4,	// (0x00077456) navi_pane_g2

0xb2e2,	// (0x00077484) navi_pane_g3

0x0002,

0xf3ea,	// (0x0007b58c) navi_pane_g

0xb38b,	// (0x0007752d) navi_pane_mv_g2

0xb3b2,	// (0x00077554) navi_pane_mv_g5

0x2695,	// (0x0006e837) navi_pane_mv_t1

0x9fe4,	// (0x00076186) main_clock2_pane

0x4c0e,	// (0x00070db0) main_clock2_list_pane_ParamLimits

0x4c0e,	// (0x00070db0) main_clock2_list_pane

0x4c48,	// (0x00070dea) main_clock2_pane_t1_ParamLimits

0x4c48,	// (0x00070dea) main_clock2_pane_t1

0x4c86,	// (0x00070e28) main_clock2_pane_t2_ParamLimits

0x4c86,	// (0x00070e28) main_clock2_pane_t2

0x0004,

0xf7c9,	// (0x0007b96b) main_clock2_pane_t_ParamLimits

0xf7c9,	// (0x0007b96b) main_clock2_pane_t

0x4d24,	// (0x00070ec6) popup_clock_analogue_window_cp03_ParamLimits

0x4d24,	// (0x00070ec6) popup_clock_analogue_window_cp03

0x4d49,	// (0x00070eeb) popup_clock_digital_window_cp02_ParamLimits

0x4d49,	// (0x00070eeb) popup_clock_digital_window_cp02

0x4dbc,	// (0x00070f5e) main_clock2_list_single_pane_ParamLimits

0x4dbc,	// (0x00070f5e) main_clock2_list_single_pane

0xb3f2,	// (0x00077594) list_highlight_pane_cp05

0xd01d,	// (0x000791bf) main_clock2_list_single_pane_t1

0x13df,	// (0x0006d581) popup_toolbar_window_cp04_ParamLimits

0x4204,	// (0x000703a6) camera2_autofocus_pane_g2_ParamLimits

0x4204,	// (0x000703a6) camera2_autofocus_pane_g2

0x4210,	// (0x000703b2) camera2_autofocus_pane_g3_ParamLimits

0x4210,	// (0x000703b2) camera2_autofocus_pane_g3

0x421c,	// (0x000703be) camera2_autofocus_pane_g4_ParamLimits

0x421c,	// (0x000703be) camera2_autofocus_pane_g4

0x4228,	// (0x000703ca) camera2_autofocus_pane_g5_ParamLimits

0x4228,	// (0x000703ca) camera2_autofocus_pane_g5

0x0004,

0xf712,	// (0x0007b8b4) camera2_autofocus_pane_g_ParamLimits

0xf712,	// (0x0007b8b4) camera2_autofocus_pane_g

0x43f7,	// (0x00070599) camera2_autofocus_pane_cp_g2

0x43ff,	// (0x000705a1) camera2_autofocus_pane_cp_g3

0x4407,	// (0x000705a9) camera2_autofocus_pane_cp_g4

0x440f,	// (0x000705b1) camera2_autofocus_pane_cp_g5

0x0004,

0xf778,	// (0x0007b91a) camera2_autofocus_pane_cp_g

0x4ab4,	// (0x00070c56) popup_dialer_spcha_window

0x90f0,	// (0x00075292) bg_popup_sub_pane_cp07

0xd02b,	// (0x000791cd) list_spcha_pane

0xd033,	// (0x000791d5) list_single_spcha_pane_ParamLimits

0xd033,	// (0x000791d5) list_single_spcha_pane

0x90f0,	// (0x00075292) list_highlight_pane_cp06

0xd044,	// (0x000791e6) list_single_spcha_pane_t1

0xc246,	// (0x000783e8) popup_call2_audio_out_window_g4_ParamLimits

0xc246,	// (0x000783e8) popup_call2_audio_out_window_g4

0x9166,	// (0x00075308) main_imed2_pane

0x9707,	// (0x000758a9) popup_imed_adjust2_window

0x35e5,	// (0x0006f787) popup_imed_trans_window_ParamLimits

0x35e5,	// (0x0006f787) popup_imed_trans_window

0xca4f,	// (0x00078bf1) popup_blid_sat_info2_window_t1

0xca5d,	// (0x00078bff) popup_blid_sat_info2_window_t2

0x000a,

0xf6a7,	// (0x0007b849) popup_blid_sat_info2_window_t

0x4e66,	// (0x00071008) aid_size_cell_colour_35

0x4e86,	// (0x00071028) aid_size_cell_colour_112

0x4ea6,	// (0x00071048) aid_size_cell_effect

0xc809,	// (0x000789ab) bg_tb_trans_pane_cp02

0xae11,	// (0x00076fb3) heading_imed_pane

0x4ec6,	// (0x00071068) listscroll_imed_pane

0xd052,	// (0x000791f4) heading_imed_pane_g1

0xd05a,	// (0x000791fc) heading_imed_pane_t1

0xd068,	// (0x0007920a) grid_imed_colour_35_pane_ParamLimits

0xd068,	// (0x0007920a) grid_imed_colour_35_pane

0x4ed2,	// (0x00071074) grid_imed_effect_pane

0xd080,	// (0x00079222) list_imed_aspect_pane

0x4ee8,	// (0x0007108a) scroll_pane_cp027_ParamLimits

0x4ee8,	// (0x0007108a) scroll_pane_cp027

0x4ef9,	// (0x0007109b) cell_imed_effect_pane_ParamLimits

0x4ef9,	// (0x0007109b) cell_imed_effect_pane

0xd088,	// (0x0007922a) cell_imed_colour_pane_ParamLimits

0xd088,	// (0x0007922a) cell_imed_colour_pane

0xd0ca,	// (0x0007926c) cell_imed_colour_pane_g1_ParamLimits

0xd0ca,	// (0x0007926c) cell_imed_colour_pane_g1

0xd0db,	// (0x0007927d) hgihlgiht_grid_pane_cp016_ParamLimits

0xd0db,	// (0x0007927d) hgihlgiht_grid_pane_cp016

0x4f20,	// (0x000710c2) cell_imed_effect_pane_g1

0x4f28,	// (0x000710ca) grid_highlight_pane_cp017

0xd0ec,	// (0x0007928e) list_imed_single_pane_ParamLimits

0xd0ec,	// (0x0007928e) list_imed_single_pane

0x90f0,	// (0x00075292) list_highlight_pane_cp07

0xd102,	// (0x000792a4) list_imed_aspect_pane_comp1_t1

0xc809,	// (0x000789ab) bg_tb_trans_pane_cp05

0xd124,	// (0x000792c6) popup_imed_adjust2_window_g1

0xd14b,	// (0x000792ed) popup_imed_adjust2_window_t1

0xd163,	// (0x00079305) slider_imed_adjust_pane

0xd177,	// (0x00079319) slider_imed_adjust_pane_g1

0xd187,	// (0x00079329) slider_imed_adjust_pane_g2

0xd197,	// (0x00079339) slider_imed_adjust_pane_g3

0xd1a8,	// (0x0007934a) slider_imed_adjust_pane_g4

0x0003,

0xf7e6,	// (0x0007b988) slider_imed_adjust_pane_g

0x4f31,	// (0x000710d3) aid_size_cell_clipart2

0x4f3d,	// (0x000710df) grid_imed_clipart_pane

0xd1b9,	// (0x0007935b) scroll_pane_cp031

0x4f47,	// (0x000710e9) cell_imed_clipart_pane_ParamLimits

0x4f47,	// (0x000710e9) cell_imed_clipart_pane

0x4f6b,	// (0x0007110d) cell_imed_clipart_pane_g1

0x90f0,	// (0x00075292) grid_highlight_pane_cp014

0x4c23,	// (0x00070dc5) main_clock2_pane_g1_ParamLimits

0x4c23,	// (0x00070dc5) main_clock2_pane_g1

0x4d67,	// (0x00070f09) aid_call2_pane_cp10

0x4d79,	// (0x00070f1b) aid_call_pane_cp10

0xb213,	// (0x000773b5) popup_clock_analogue_window_cp10_g1

0xb213,	// (0x000773b5) popup_clock_analogue_window_cp10_g2

0x4d8b,	// (0x00070f2d) popup_clock_analogue_window_cp10_g3

0x4d8b,	// (0x00070f2d) popup_clock_analogue_window_cp10_g4

0xb213,	// (0x000773b5) popup_clock_analogue_window_cp10_g5

0x0004,

0xf7d4,	// (0x0007b976) popup_clock_analogue_window_cp10_g

0x4d9d,	// (0x00070f3f) popup_clock_analogue_window_cp10_t1

0x4dce,	// (0x00070f70) clock_digital_number_pane_cp10_ParamLimits

0x4dce,	// (0x00070f70) clock_digital_number_pane_cp10

0x4de6,	// (0x00070f88) clock_digital_number_pane_cp11_ParamLimits

0x4de6,	// (0x00070f88) clock_digital_number_pane_cp11

0x4dfe,	// (0x00070fa0) clock_digital_number_pane_cp12_ParamLimits

0x4dfe,	// (0x00070fa0) clock_digital_number_pane_cp12

0x4e16,	// (0x00070fb8) clock_digital_number_pane_cp13_ParamLimits

0x4e16,	// (0x00070fb8) clock_digital_number_pane_cp13

0x4e2e,	// (0x00070fd0) clock_digital_separator_pane_cp10_ParamLimits

0x4e2e,	// (0x00070fd0) clock_digital_separator_pane_cp10

0x4e46,	// (0x00070fe8) popup_clock_digital_window_cp02_t1_ParamLimits

0x4e46,	// (0x00070fe8) popup_clock_digital_window_cp02_t1

0x9ef8,	// (0x0007609a) clock_digital_number_pane_cp10_g1

0x9ef8,	// (0x0007609a) clock_digital_number_pane_cp10_g2

0x0001,

0xf7ef,	// (0x0007b991) clock_digital_number_pane_cp10_g

0x9ef8,	// (0x0007609a) clock_digital_separator_pane_cp10_g1

0x9ef8,	// (0x0007609a) clock_digital_separator_pane_g2_cp10

0xb3ba,	// (0x0007755c) navi_pane_vded_g4

0xb3c3,	// (0x00077565) navi_pane_vded_g5

0xb3cc,	// (0x0007756e) navi_pane_vded_t1

0x9166,	// (0x00075308) main_vded_pane

0x4f74,	// (0x00071116) main_vded_pane_g1

0x4f7e,	// (0x00071120) main_vded_pane_g2

0x4f88,	// (0x0007112a) main_vded_pane_g3

0x0002,

0xf7f4,	// (0x0007b996) main_vded_pane_g

0x4f92,	// (0x00071134) main_vded_pane_t1

0x4fa0,	// (0x00071142) main_vded_pane_t2

0x0001,

0xf7fb,	// (0x0007b99d) main_vded_pane_t

0x4fae,	// (0x00071150) vded_slider_pane

0x4fb8,	// (0x0007115a) vded_video_pane

0xd1c1,	// (0x00079363) vded_video_pane_g1

0x4fc2,	// (0x00071164) vded_video_pane_g2

0xcc1f,	// (0x00078dc1) vded_video_pane_g3

0x0002,

0xf800,	// (0x0007b9a2) vded_video_pane_g

0xd1cb,	// (0x0007936d) vded_slider_pane_g1

0xd1d4,	// (0x00079376) vded_slider_pane_g2

0xd1dd,	// (0x0007937f) vded_slider_pane_g3

0xd1e6,	// (0x00079388) vded_slider_pane_g4

0xd1ef,	// (0x00079391) vded_slider_pane_g5

0x0004,

0xf807,	// (0x0007b9a9) vded_slider_pane_g

0x4993,	// (0x00070b35) mup3_rocker_pane_ParamLimits

0x4993,	// (0x00070b35) mup3_rocker_pane

0x4fcb,	// (0x0007116d) mup3_control_keys_pane_g1

0x4fd3,	// (0x00071175) mup3_control_keys_pane_g2

0x4fdb,	// (0x0007117d) mup3_control_keys_pane_g3

0x4fe3,	// (0x00071185) mup3_control_keys_pane_g4

0x0003,

0xf812,	// (0x0007b9b4) mup3_control_keys_pane_g

0x0351,	// (0x0006c4f3) popup_toolbar2_fixed_window_cp01_ParamLimits

0x0351,	// (0x0006c4f3) popup_toolbar2_fixed_window_cp01

0x49c7,	// (0x00070b69) popup_toolbar2_fixed_window_cp02_ParamLimits

0x49c7,	// (0x00070b69) popup_toolbar2_fixed_window_cp02

0xbb70,	// (0x00077d12) popup_call2_audio_second_window_t4_ParamLimits

0xbb70,	// (0x00077d12) popup_call2_audio_second_window_t4

0xc0b3,	// (0x00078255) popup_call2_audio_first_window_t6_ParamLimits

0xc0b3,	// (0x00078255) popup_call2_audio_first_window_t6

0xc349,	// (0x000784eb) popup_call2_audio_out_window_t6_ParamLimits

0xc349,	// (0x000784eb) popup_call2_audio_out_window_t6

0x9166,	// (0x00075308) main_vitu_pane

0x4ff3,	// (0x00071195) aid_size_cell_itu_ParamLimits

0x4ff3,	// (0x00071195) aid_size_cell_itu

0xa1ea,	// (0x0007638c) bg_popup_window_pane_cp08_ParamLimits

0xa1ea,	// (0x0007638c) bg_popup_window_pane_cp08

0x5009,	// (0x000711ab) field_vitu_entry_pane_ParamLimits

0x5009,	// (0x000711ab) field_vitu_entry_pane

0x5020,	// (0x000711c2) grid_vitu_function_pane_ParamLimits

0x5020,	// (0x000711c2) grid_vitu_function_pane

0x503b,	// (0x000711dd) grid_vitu_itu_pane_ParamLimits

0x503b,	// (0x000711dd) grid_vitu_itu_pane

0x5059,	// (0x000711fb) cell_vitu_itu_pane_ParamLimits

0x5059,	// (0x000711fb) cell_vitu_itu_pane

0x507d,	// (0x0007121f) cell_vitu_function_pane_ParamLimits

0x507d,	// (0x0007121f) cell_vitu_function_pane

0xa1ea,	// (0x0007638c) bg_popup_sub_pane_cp08_ParamLimits

0xa1ea,	// (0x0007638c) bg_popup_sub_pane_cp08

0x5098,	// (0x0007123a) field_vitu_entry_pane_t1_ParamLimits

0x5098,	// (0x0007123a) field_vitu_entry_pane_t1

0xd210,	// (0x000793b2) field_vitu_entry_pane_t2_ParamLimits

0xd210,	// (0x000793b2) field_vitu_entry_pane_t2

0x0001,

0xf820,	// (0x0007b9c2) field_vitu_entry_pane_t_ParamLimits

0xf820,	// (0x0007b9c2) field_vitu_entry_pane_t

0xd22d,	// (0x000793cf) bg_button_pane_cp05_ParamLimits

0xd22d,	// (0x000793cf) bg_button_pane_cp05

0x50b7,	// (0x00071259) cell_vitu_itu_pane_g1

0x50cf,	// (0x00071271) cell_vitu_itu_pane_t1_ParamLimits

0x50cf,	// (0x00071271) cell_vitu_itu_pane_t1

0x50e1,	// (0x00071283) cell_vitu_itu_pane_t2_ParamLimits

0x50e1,	// (0x00071283) cell_vitu_itu_pane_t2

0x0002,

0xf825,	// (0x0007b9c7) cell_vitu_itu_pane_t_ParamLimits

0xf825,	// (0x0007b9c7) cell_vitu_itu_pane_t

0xd23b,	// (0x000793dd) bg_button_pane_cp07

0x5124,	// (0x000712c6) cell_vitu_function_pane_g1

0x9554,	// (0x000756f6) main_calc_pane_g1

0x0168,	// (0x0006c30a) aid_visual_content_pane

0x9166,	// (0x00075308) main_vradio_pane

0x512d,	// (0x000712cf) main_vradio_pane_g1_ParamLimits

0x512d,	// (0x000712cf) main_vradio_pane_g1

0xd245,	// (0x000793e7) main_vradio_pane_g2_ParamLimits

0xd245,	// (0x000793e7) main_vradio_pane_g2

0x0001,

0xf82c,	// (0x0007b9ce) main_vradio_pane_g_ParamLimits

0xf82c,	// (0x0007b9ce) main_vradio_pane_g

0x5146,	// (0x000712e8) main_vradio_pane_t1_ParamLimits

0x5146,	// (0x000712e8) main_vradio_pane_t1

0x515b,	// (0x000712fd) main_vradio_pane_t2_ParamLimits

0x515b,	// (0x000712fd) main_vradio_pane_t2

0xd252,	// (0x000793f4) main_vradio_pane_t3_ParamLimits

0xd252,	// (0x000793f4) main_vradio_pane_t3

0x0002,

0xf831,	// (0x0007b9d3) main_vradio_pane_t_ParamLimits

0xf831,	// (0x0007b9d3) main_vradio_pane_t

0x5170,	// (0x00071312) vradio_rocker_control_pane_ParamLimits

0x5170,	// (0x00071312) vradio_rocker_control_pane

0x5182,	// (0x00071324) vradio_station_info_pane_ParamLimits

0x5182,	// (0x00071324) vradio_station_info_pane

0xd266,	// (0x00079408) vradio_frequency_info_pane_ParamLimits

0xd266,	// (0x00079408) vradio_frequency_info_pane

0xcc1f,	// (0x00078dc1) vradio_station_info_pane_g1

0xd275,	// (0x00079417) vradio_station_info_pane_t1_ParamLimits

0xd275,	// (0x00079417) vradio_station_info_pane_t1

0xd297,	// (0x00079439) vradio_station_info_pane_t2_ParamLimits

0xd297,	// (0x00079439) vradio_station_info_pane_t2

0x0001,

0xf838,	// (0x0007b9da) vradio_station_info_pane_t_ParamLimits

0xf838,	// (0x0007b9da) vradio_station_info_pane_t

0xd2a9,	// (0x0007944b) vradio_tuning_pane

0xd2b1,	// (0x00079453) vradio_rocker_control_pane_g1

0xd2b9,	// (0x0007945b) vradio_rocker_control_pane_g2

0xd2c1,	// (0x00079463) vradio_rocker_control_pane_g3

0xd2c9,	// (0x0007946b) vradio_rocker_control_pane_g4

0xd2d1,	// (0x00079473) vradio_rocker_control_pane_g5

0x0004,

0xf83d,	// (0x0007b9df) vradio_rocker_control_pane_g

0x5194,	// (0x00071336) vradio_frequency_info_pane_g1

0xd2d9,	// (0x0007947b) vradio_frequency_info_pane_t1_ParamLimits

0xd2d9,	// (0x0007947b) vradio_frequency_info_pane_t1

0x519e,	// (0x00071340) vradio_tuning_pane_g1

0x51a9,	// (0x0007134b) vradio_tuning_pane_t1

0x9116,	// (0x000752b8) area_side_right_pane_ParamLimits

0x9116,	// (0x000752b8) area_side_right_pane

0xc7c4,	// (0x00078966) status_small_pane_g1

0xc7cc,	// (0x0007896e) status_small_pane_g2

0xc7d5,	// (0x00078977) status_small_pane_g3

0xc7de,	// (0x00078980) status_small_pane_g4

0x0003,

0xf5fd,	// (0x0007b79f) status_small_pane_g

0xc7e7,	// (0x00078989) status_small_pane_t1

0x9166,	// (0x00075308) main_video3_pane

0xd2ed,	// (0x0007948f) cams_zoom_vslider_pane

0xd2f5,	// (0x00079497) image3_wide_pane_ParamLimits

0xd2f5,	// (0x00079497) image3_wide_pane

0xd30f,	// (0x000794b1) image3_wide_small_pane

0xd31b,	// (0x000794bd) main_video3_pane_g1_ParamLimits

0xd31b,	// (0x000794bd) main_video3_pane_g1

0xd337,	// (0x000794d9) main_video3_pane_g2_ParamLimits

0xd337,	// (0x000794d9) main_video3_pane_g2

0x0001,

0xf848,	// (0x0007b9ea) main_video3_pane_g_ParamLimits

0xf848,	// (0x0007b9ea) main_video3_pane_g

0xd353,	// (0x000794f5) main_video3_pane_t1_ParamLimits

0xd353,	// (0x000794f5) main_video3_pane_t1

0xd37e,	// (0x00079520) main_video3_pane_t2_ParamLimits

0xd37e,	// (0x00079520) main_video3_pane_t2

0xd3a9,	// (0x0007954b) main_video3_pane_t3_ParamLimits

0xd3a9,	// (0x0007954b) main_video3_pane_t3

0x0002,

0xf84d,	// (0x0007b9ef) main_video3_pane_t_ParamLimits

0xf84d,	// (0x0007b9ef) main_video3_pane_t

0xd3d6,	// (0x00079578) cams_zoom_vslider_pane_g1

0xd3df,	// (0x00079581) cams_zoom_vslider_pane_g2

0x0001,

0xf854,	// (0x0007b9f6) cams_zoom_vslider_pane_g

0xd3e7,	// (0x00079589) small_slider_vertical_pane

0xcc1f,	// (0x00078dc1) small_slider_vertical_pane_g1

0xcc1f,	// (0x00078dc1) small_slider_vertical_pane_g2

0xd3ef,	// (0x00079591) small_slider_vertical_pane_g3

0x0002,

0xf859,	// (0x0007b9fb) small_slider_vertical_pane_g

0x9166,	// (0x00075308) main_hwr_training_pane

0xd3f8,	// (0x0007959a) hwr_training_instruct_pane_ParamLimits

0xd3f8,	// (0x0007959a) hwr_training_instruct_pane

0x51b8,	// (0x0007135a) hwr_training_navi_pane_ParamLimits

0x51b8,	// (0x0007135a) hwr_training_navi_pane

0x51d7,	// (0x00071379) hwr_training_write_pane_ParamLimits

0x51d7,	// (0x00071379) hwr_training_write_pane

0x90f0,	// (0x00075292) bg_frame_shadow_pane

0xd42f,	// (0x000795d1) hwr_training_write_pane_g1

0xd437,	// (0x000795d9) hwr_training_write_pane_g2

0xd43f,	// (0x000795e1) hwr_training_write_pane_g3

0xd447,	// (0x000795e9) hwr_training_write_pane_g4

0xd44f,	// (0x000795f1) hwr_training_write_pane_g5

0xd457,	// (0x000795f9) hwr_training_write_pane_g6

0xd45f,	// (0x00079601) hwr_training_write_pane_g7

0x0006,

0xf860,	// (0x0007ba02) hwr_training_write_pane_g

0x97f8,	// (0x0007599a) hwr_training_navi_pane_g1_ParamLimits

0x97f8,	// (0x0007599a) hwr_training_navi_pane_g1

0x980a,	// (0x000759ac) hwr_training_navi_pane_g2_ParamLimits

0x980a,	// (0x000759ac) hwr_training_navi_pane_g2

0x981c,	// (0x000759be) hwr_training_navi_pane_g3_ParamLimits

0x981c,	// (0x000759be) hwr_training_navi_pane_g3

0x982c,	// (0x000759ce) hwr_training_navi_pane_g4_ParamLimits

0x982c,	// (0x000759ce) hwr_training_navi_pane_g4

0x0004,

0xf86f,	// (0x0007ba11) hwr_training_navi_pane_g_ParamLimits

0xf86f,	// (0x0007ba11) hwr_training_navi_pane_g

0x9839,	// (0x000759db) hwr_training_navi_pane_t1

0x5221,	// (0x000713c3) list_single_hwr_training_instruct_pane_ParamLimits

0x5221,	// (0x000713c3) list_single_hwr_training_instruct_pane

0xd467,	// (0x00079609) list_single_hwr_training_instruct_pane_t1

0xcb5f,	// (0x00078d01) bg_frame_shadow_pane_g1

0xd476,	// (0x00079618) bg_frame_shadow_pane_g2

0xd47e,	// (0x00079620) bg_frame_shadow_pane_g3

0xd486,	// (0x00079628) bg_frame_shadow_pane_g4

0xd48e,	// (0x00079630) bg_frame_shadow_pane_g5

0xd496,	// (0x00079638) bg_frame_shadow_pane_g6

0xd49e,	// (0x00079640) bg_frame_shadow_pane_g7

0xa86c,	// (0x00076a0e) bg_frame_shadow_pane_g8

0x0007,

0xf87a,	// (0x0007ba1c) bg_frame_shadow_pane_g

0x9166,	// (0x00075308) main_video_tele_dialer_pane

0x5238,	// (0x000713da) aid_size_cell_video_keypad_ParamLimits

0x5238,	// (0x000713da) aid_size_cell_video_keypad

0x5252,	// (0x000713f4) grid_video_dialer_keypad_pane_ParamLimits

0x5252,	// (0x000713f4) grid_video_dialer_keypad_pane

0x52a0,	// (0x00071442) video_down_pane_cp_ParamLimits

0x52a0,	// (0x00071442) video_down_pane_cp

0x52d2,	// (0x00071474) cell_video_dialer_keypad_pane_ParamLimits

0x52d2,	// (0x00071474) cell_video_dialer_keypad_pane

0xd4a6,	// (0x00079648) bg_button_pane_cp08_ParamLimits

0xd4a6,	// (0x00079648) bg_button_pane_cp08

0x52f4,	// (0x00071496) cell_video_dialer_keypad_pane_g1_ParamLimits

0x52f4,	// (0x00071496) cell_video_dialer_keypad_pane_g1

0x497d,	// (0x00070b1f) mup3_rocker2_pane_ParamLimits

0x497d,	// (0x00070b1f) mup3_rocker2_pane

0xcc1f,	// (0x00078dc1) mup3_rocker2_pane_g1

0x34ce,	// (0x0006f670) main_dialer2_pane

0x9166,	// (0x00075308) main_mp4_pane

0x984f,	// (0x000759f1) main_mp4_pane_g1_ParamLimits

0x984f,	// (0x000759f1) main_mp4_pane_g1

0x984f,	// (0x000759f1) main_mp4_pane_g2_ParamLimits

0x984f,	// (0x000759f1) main_mp4_pane_g2

0x532f,	// (0x000714d1) main_mp4_pane_g3_ParamLimits

0x532f,	// (0x000714d1) main_mp4_pane_g3

0x985d,	// (0x000759ff) main_mp4_pane_g4_ParamLimits

0x985d,	// (0x000759ff) main_mp4_pane_g4

0x9885,	// (0x00075a27) main_mp4_pane_g5_ParamLimits

0x9885,	// (0x00075a27) main_mp4_pane_g5

0x0005,

0xf89a,	// (0x0007ba3c) main_mp4_pane_g_ParamLimits

0xf89a,	// (0x0007ba3c) main_mp4_pane_g

0x98d5,	// (0x00075a77) main_mp4_pane_t1_ParamLimits

0x98d5,	// (0x00075a77) main_mp4_pane_t1

0x9931,	// (0x00075ad3) main_mp4_pane_t2_ParamLimits

0x9931,	// (0x00075ad3) main_mp4_pane_t2

0xd4b2,	// (0x00079654) main_mp4_pane_t3_ParamLimits

0xd4b2,	// (0x00079654) main_mp4_pane_t3

0x9983,	// (0x00075b25) main_mp4_pane_t4_ParamLimits

0x9983,	// (0x00075b25) main_mp4_pane_t4

0x0003,

0xf8a7,	// (0x0007ba49) main_mp4_pane_t_ParamLimits

0xf8a7,	// (0x0007ba49) main_mp4_pane_t

0x99c7,	// (0x00075b69) mp4_progress_pane_ParamLimits

0x99c7,	// (0x00075b69) mp4_progress_pane

0x9a11,	// (0x00075bb3) mp4_rocker_pane_ParamLimits

0x9a11,	// (0x00075bb3) mp4_rocker_pane

0xd4da,	// (0x0007967c) mp4_progress_pane_t1

0xd4f3,	// (0x00079695) mp4_progress_pane_t2

0x0001,

0xf8b0,	// (0x0007ba52) mp4_progress_pane_t

0xd50c,	// (0x000796ae) mup_progress_pane_cp04

0xd688,	// (0x0007982a) mp4_rocker_pane_g1

0x536b,	// (0x0007150d) aid_cell_size_keypad2_ParamLimits

0x536b,	// (0x0007150d) aid_cell_size_keypad2

0x5381,	// (0x00071523) dialer2_ne_pane_ParamLimits

0x5381,	// (0x00071523) dialer2_ne_pane

0x539b,	// (0x0007153d) grid_dialer2_keypad_pane_ParamLimits

0x539b,	// (0x0007153d) grid_dialer2_keypad_pane

0xc9f6,	// (0x00078b98) bg_popup_call_pane_cp07_ParamLimits

0xc9f6,	// (0x00078b98) bg_popup_call_pane_cp07

0x53b9,	// (0x0007155b) dialer2_ne_pane_t1_ParamLimits

0x53b9,	// (0x0007155b) dialer2_ne_pane_t1

0x53f6,	// (0x00071598) cell_dialer2_keypad_pane_ParamLimits

0x53f6,	// (0x00071598) cell_dialer2_keypad_pane

0xd52a,	// (0x000796cc) bg_button_pane_pane_cp04_ParamLimits

0xd52a,	// (0x000796cc) bg_button_pane_pane_cp04

0x5418,	// (0x000715ba) cell_dialer2_keypad_pane_g1_ParamLimits

0x5418,	// (0x000715ba) cell_dialer2_keypad_pane_g1

0x12b3,	// (0x0006d455) aid_placing_vt_set_content_ParamLimits

0x12b3,	// (0x0006d455) aid_placing_vt_set_content

0x12db,	// (0x0006d47d) aid_placing_vt_set_title_ParamLimits

0x12db,	// (0x0006d47d) aid_placing_vt_set_title

0x9166,	// (0x00075308) main_image3_pane

0x54de,	// (0x00071680) area_side_right_pane_cp01_ParamLimits

0x54de,	// (0x00071680) area_side_right_pane_cp01

0x984f,	// (0x000759f1) main_image3_pane_g1_ParamLimits

0x984f,	// (0x000759f1) main_image3_pane_g1

0x54f5,	// (0x00071697) main_image3_pane_g2_ParamLimits

0x54f5,	// (0x00071697) main_image3_pane_g2

0x551d,	// (0x000716bf) main_image3_pane_g3_ParamLimits

0x551d,	// (0x000716bf) main_image3_pane_g3

0x5547,	// (0x000716e9) main_image3_pane_g4_ParamLimits

0x5547,	// (0x000716e9) main_image3_pane_g4

0x0003,

0xf8bf,	// (0x0007ba61) main_image3_pane_g_ParamLimits

0xf8bf,	// (0x0007ba61) main_image3_pane_g

0x5571,	// (0x00071713) main_image3_pane_t1_ParamLimits

0x5571,	// (0x00071713) main_image3_pane_t1

0x55c9,	// (0x0007176b) main_image3_pane_t2_ParamLimits

0x55c9,	// (0x0007176b) main_image3_pane_t2

0x561b,	// (0x000717bd) main_image3_pane_t3_ParamLimits

0x561b,	// (0x000717bd) main_image3_pane_t3

0x0003,

0xf8c8,	// (0x0007ba6a) main_image3_pane_t_ParamLimits

0xf8c8,	// (0x0007ba6a) main_image3_pane_t

0xa1ea,	// (0x0007638c) grid_sctrl_middle_pane_cp01_ParamLimits

0xa1ea,	// (0x0007638c) grid_sctrl_middle_pane_cp01

0x56a3,	// (0x00071845) cell_sctrl_middle_pane_cp01_ParamLimits

0x56a3,	// (0x00071845) cell_sctrl_middle_pane_cp01

0x56c0,	// (0x00071862) cell_sctrl_middle_pane_cp01_g1_ParamLimits

0x56c0,	// (0x00071862) cell_sctrl_middle_pane_cp01_g1

0x9166,	// (0x00075308) main_call4_pane

0x56d6,	// (0x00071878) aid_size_button_call4_ParamLimits

0x56d6,	// (0x00071878) aid_size_button_call4

0x5707,	// (0x000718a9) call4_windows_pane_ParamLimits

0x5707,	// (0x000718a9) call4_windows_pane

0x5727,	// (0x000718c9) grid_call4_button_pane_ParamLimits

0x5727,	// (0x000718c9) grid_call4_button_pane

0xd536,	// (0x000796d8) call4_windows_conf_pane

0xd54b,	// (0x000796ed) popup_call4_audio_first_window_ParamLimits

0xd54b,	// (0x000796ed) popup_call4_audio_first_window

0xd597,	// (0x00079739) popup_call4_audio_second_window_ParamLimits

0xd597,	// (0x00079739) popup_call4_audio_second_window

0xd5ab,	// (0x0007974d) popup_call4_audio_wait_window_ParamLimits

0xd5ab,	// (0x0007974d) popup_call4_audio_wait_window

0x5754,	// (0x000718f6) cell_call4_button_pane_ParamLimits

0x5754,	// (0x000718f6) cell_call4_button_pane

0x577d,	// (0x0007191f) bg_button_pane_cp09_ParamLimits

0x577d,	// (0x0007191f) bg_button_pane_cp09

0x5789,	// (0x0007192b) cell_call4_button_pane_g1_ParamLimits

0x5789,	// (0x0007192b) cell_call4_button_pane_g1

0x57af,	// (0x00071951) cell_call4_button_pane_t1_ParamLimits

0x57af,	// (0x00071951) cell_call4_button_pane_t1

0xd5f3,	// (0x00079795) popup_call4_audio_conf_window_ParamLimits

0xd5f3,	// (0x00079795) popup_call4_audio_conf_window

0x49dd,	// (0x00070b7f) mup3_progress_pane_t1_ParamLimits

0x49fc,	// (0x00070b9e) mup3_progress_pane_t2_ParamLimits

0xcefa,	// (0x0007909c) mup3_progress_pane_t3_ParamLimits

0xf7a1,	// (0x0007b943) mup3_progress_pane_t_ParamLimits

0xcf17,	// (0x000790b9) mup_progress_pane_cp03_ParamLimits

0x4feb,	// (0x0007118d) mup3_control_keys_pane_g4_copy1

0x99f5,	// (0x00075b97) mp4_rocker2_pane_ParamLimits

0x99f5,	// (0x00075b97) mp4_rocker2_pane

0xd607,	// (0x000797a9) mp4_rocker2_pane_g1

0xd60f,	// (0x000797b1) mp4_rocker2_pane_g2

0x9a63,	// (0x00075c05) mp4_rocker2_pane_g3

0x9a6b,	// (0x00075c0d) mp4_rocker2_pane_g4

0x9a73,	// (0x00075c15) mp4_rocker2_pane_g5

0x0004,

0xf8d1,	// (0x0007ba73) mp4_rocker2_pane_g

0x9166,	// (0x00075308) main_camera4_pane

0x9166,	// (0x00075308) main_video4_pane

0x526e,	// (0x00071410) main_video_tele_dialer_pane_t1_ParamLimits

0x526e,	// (0x00071410) main_video_tele_dialer_pane_t1

0x5287,	// (0x00071429) main_video_tele_dialer_pane_t2_ParamLimits

0x5287,	// (0x00071429) main_video_tele_dialer_pane_t2

0x0001,

0xf88b,	// (0x0007ba2d) main_video_tele_dialer_pane_t_ParamLimits

0xf88b,	// (0x0007ba2d) main_video_tele_dialer_pane_t

0x57ed,	// (0x0007198f) cam4_autofocus_pane_ParamLimits

0x57ed,	// (0x0007198f) cam4_autofocus_pane

0x5803,	// (0x000719a5) cam4_image_uncrop_pane_ParamLimits

0x5803,	// (0x000719a5) cam4_image_uncrop_pane

0x581d,	// (0x000719bf) cam4_indicators_pane_ParamLimits

0x581d,	// (0x000719bf) cam4_indicators_pane

0x5848,	// (0x000719ea) main_camera4_pane_g1_ParamLimits

0x5848,	// (0x000719ea) main_camera4_pane_g1

0x585a,	// (0x000719fc) main_camera4_pane_g2_ParamLimits

0x585a,	// (0x000719fc) main_camera4_pane_g2

0x586d,	// (0x00071a0f) main_camera4_pane_g3_ParamLimits

0x586d,	// (0x00071a0f) main_camera4_pane_g3

0x5880,	// (0x00071a22) main_camera4_pane_g4_ParamLimits

0x5880,	// (0x00071a22) main_camera4_pane_g4

0x5893,	// (0x00071a35) main_camera4_pane_g5_ParamLimits

0x5893,	// (0x00071a35) main_camera4_pane_g5

0x0005,

0xf8dc,	// (0x0007ba7e) main_camera4_pane_g_ParamLimits

0xf8dc,	// (0x0007ba7e) main_camera4_pane_g

0x58b7,	// (0x00071a59) main_camera4_pane_t1_ParamLimits

0x58b7,	// (0x00071a59) main_camera4_pane_t1

0x9a97,	// (0x00075c39) bg_tb_trans_pane_cp06

0x9aad,	// (0x00075c4f) cam4_indicators_pane_g1

0x9abe,	// (0x00075c60) cam4_indicators_pane_g2

0x0002,

0xf8f7,	// (0x0007ba99) cam4_indicators_pane_g

0x9adc,	// (0x00075c7e) cam4_indicators_pane_t1

0x591b,	// (0x00071abd) main_video4_pane_g1_ParamLimits

0x591b,	// (0x00071abd) main_video4_pane_g1

0x592a,	// (0x00071acc) main_video4_pane_g2_ParamLimits

0x592a,	// (0x00071acc) main_video4_pane_g2

0x5939,	// (0x00071adb) main_video4_pane_g3_ParamLimits

0x5939,	// (0x00071adb) main_video4_pane_g3

0x5948,	// (0x00071aea) main_video4_pane_g4_ParamLimits

0x5948,	// (0x00071aea) main_video4_pane_g4

0x0004,

0xf8fe,	// (0x0007baa0) main_video4_pane_g_ParamLimits

0xf8fe,	// (0x0007baa0) main_video4_pane_g

0x5966,	// (0x00071b08) vid4_indicators_pane_ParamLimits

0x5966,	// (0x00071b08) vid4_indicators_pane

0x5994,	// (0x00071b36) video4_image_uncrop_cif_pane_ParamLimits

0x5994,	// (0x00071b36) video4_image_uncrop_cif_pane

0x59ae,	// (0x00071b50) video4_image_uncrop_nhd_pane_ParamLimits

0x59ae,	// (0x00071b50) video4_image_uncrop_nhd_pane

0x5803,	// (0x000719a5) video4_image_uncrop_vga_pane_ParamLimits

0x5803,	// (0x000719a5) video4_image_uncrop_vga_pane

0x9158,	// (0x000752fa) bg_tb_trans_pane_cp07

0x9b06,	// (0x00075ca8) vid4_indicators_pane_g1

0x9b1a,	// (0x00075cbc) vid4_indicators_pane_g2

0x9b2e,	// (0x00075cd0) vid4_indicators_pane_g3

0x0004,

0xf909,	// (0x0007baab) vid4_indicators_pane_g

0x9b5b,	// (0x00075cfd) vid4_indicators_pane_t1

0x59c2,	// (0x00071b64) cam4_autofocus_pane_g1

0x59ca,	// (0x00071b6c) cam4_autofocus_pane_g2

0x59d2,	// (0x00071b74) cam4_autofocus_pane_g3

0x0002,

0xf914,	// (0x0007bab6) cam4_autofocus_pane_g

0x59da,	// (0x00071b7c) cam4_autofocus_pane_g3_copy1

0x52b6,	// (0x00071458) video_down_pane_cp_t1

0x52c4,	// (0x00071466) video_down_pane_cp_t2

0x0001,

0xf890,	// (0x0007ba32) video_down_pane_cp_t

0x9158,	// (0x000752fa) popup_vitu2_window_ParamLimits

0x9158,	// (0x000752fa) popup_vitu2_window

0x59e2,	// (0x00071b84) aid_size_cell2_itu2_ParamLimits

0x59e2,	// (0x00071b84) aid_size_cell2_itu2

0x5a08,	// (0x00071baa) aid_size_cell_itu2_ParamLimits

0x5a08,	// (0x00071baa) aid_size_cell_itu2

0x5a64,	// (0x00071c06) bg_popup_window_pane_cp09_ParamLimits

0x5a64,	// (0x00071c06) bg_popup_window_pane_cp09

0x5a72,	// (0x00071c14) field_vitu2_entry_pane_ParamLimits

0x5a72,	// (0x00071c14) field_vitu2_entry_pane

0x5a98,	// (0x00071c3a) grid_vitu2_function_pane_ParamLimits

0x5a98,	// (0x00071c3a) grid_vitu2_function_pane

0x5ae9,	// (0x00071c8b) grid_vitu2_itu_pane_ParamLimits

0x5ae9,	// (0x00071c8b) grid_vitu2_itu_pane

0x5b7a,	// (0x00071d1c) cell_vitu2_itu_pane_ParamLimits

0x5b7a,	// (0x00071d1c) cell_vitu2_itu_pane

0x5b9e,	// (0x00071d40) cell_vitu2_function_pane_ParamLimits

0x5b9e,	// (0x00071d40) cell_vitu2_function_pane

0xd617,	// (0x000797b9) bg_popup_call_pane_cp08_ParamLimits

0xd617,	// (0x000797b9) bg_popup_call_pane_cp08

0xd630,	// (0x000797d2) field_vitu2_entry_pane_g1

0xd63c,	// (0x000797de) field_vitu2_entry_pane_g2

0x0002,

0xf91b,	// (0x0007babd) field_vitu2_entry_pane_g

0x5bdd,	// (0x00071d7f) field_vitu2_entry_pane_t1_ParamLimits

0x5bdd,	// (0x00071d7f) field_vitu2_entry_pane_t1

0xa26c,	// (0x0007640e) field_vitu2_entry_pane_t2_ParamLimits

0xa26c,	// (0x0007640e) field_vitu2_entry_pane_t2

0x0001,

0xf922,	// (0x0007bac4) field_vitu2_entry_pane_t_ParamLimits

0xf922,	// (0x0007bac4) field_vitu2_entry_pane_t

0x5c0e,	// (0x00071db0) bg_button_pane_cp010_ParamLimits

0x5c0e,	// (0x00071db0) bg_button_pane_cp010

0x5c1c,	// (0x00071dbe) cell_vitu2_itu_pane_g1

0x5c47,	// (0x00071de9) cell_vitu2_itu_pane_t1_ParamLimits

0x5c47,	// (0x00071de9) cell_vitu2_itu_pane_t1

0x0040,	// (0x0006c1e2) cell_vitu2_itu_pane_t2_ParamLimits

0x0040,	// (0x0006c1e2) cell_vitu2_itu_pane_t2

0x0002,

0xf92c,	// (0x0007bace) cell_vitu2_itu_pane_t_ParamLimits

0xf92c,	// (0x0007bace) cell_vitu2_itu_pane_t

0x9158,	// (0x000752fa) bg_button_pane_cp011

0x5ca5,	// (0x00071e47) cell_vitu2_function_pane_g1

0x9166,	// (0x00075308) main_myfav_hc_pane

0x566b,	// (0x0007180d) popup_image3_note_pane_ParamLimits

0x566b,	// (0x0007180d) popup_image3_note_pane

0x5687,	// (0x00071829) popup_image3_tool_bar_pane_ParamLimits

0x5687,	// (0x00071829) popup_image3_tool_bar_pane

0x00ce,	// (0x0006c270) cell_vitu2_itu_pane_t3_ParamLimits

0x00ce,	// (0x0006c270) cell_vitu2_itu_pane_t3

0x90f0,	// (0x00075292) bg_popup_trans_pane

0xd65e,	// (0x00079800) grid_image3_tool_bar_pane

0xd668,	// (0x0007980a) bg_popup_trans_pane_g1

0xabc1,	// (0x00076d63) bg_popup_trans_pane_g2

0xd670,	// (0x00079812) bg_popup_trans_pane_g3

0xd678,	// (0x0007981a) bg_popup_trans_pane_g4

0xd6a4,	// (0x00079846) bg_popup_trans_pane_g5

0xd6ac,	// (0x0007984e) bg_popup_trans_pane_g6

0xd6b4,	// (0x00079856) bg_popup_trans_pane_g7

0xd6bc,	// (0x0007985e) bg_popup_trans_pane_g8

0xaba1,	// (0x00076d43) bg_popup_trans_pane_g9

0x0008,

0xf933,	// (0x0007bad5) bg_popup_trans_pane_g

0xd6c4,	// (0x00079866) cell_image3_tool_bar_pane_ParamLimits

0xd6c4,	// (0x00079866) cell_image3_tool_bar_pane

0xcc1f,	// (0x00078dc1) cell_image3_tool_bar_pane_g1

0x90f0,	// (0x00075292) bg_popup_trans_pane_cp1

0xd6d8,	// (0x0007987a) popup_image3_note_pane_t1

0xd6e6,	// (0x00079888) popup_image3_note_pane_t2

0xd6f4,	// (0x00079896) popup_image3_note_pane_t3

0x0002,

0xf946,	// (0x0007bae8) popup_image3_note_pane_t

0xd702,	// (0x000798a4) popup_image3_note_pane_t3_copy1

0x5cb9,	// (0x00071e5b) bg_myfav_hc_instruction_pane_ParamLimits

0x5cb9,	// (0x00071e5b) bg_myfav_hc_instruction_pane

0x5ccf,	// (0x00071e71) cell_myfav_contact_pane_ParamLimits

0x5ccf,	// (0x00071e71) cell_myfav_contact_pane

0x5ced,	// (0x00071e8f) cell_myfav_contact_pane_cp1_ParamLimits

0x5ced,	// (0x00071e8f) cell_myfav_contact_pane_cp1

0x5d05,	// (0x00071ea7) cell_myfav_contact_pane_cp2_ParamLimits

0x5d05,	// (0x00071ea7) cell_myfav_contact_pane_cp2

0x5d1d,	// (0x00071ebf) cell_myfav_contact_pane_cp3_ParamLimits

0x5d1d,	// (0x00071ebf) cell_myfav_contact_pane_cp3

0x5d34,	// (0x00071ed6) cell_myfav_contact_pane_cp4_ParamLimits

0x5d34,	// (0x00071ed6) cell_myfav_contact_pane_cp4

0x5d4c,	// (0x00071eee) cell_myfav_contact_pane_cp5_ParamLimits

0x5d4c,	// (0x00071eee) cell_myfav_contact_pane_cp5

0x5d60,	// (0x00071f02) cell_myfav_contact_pane_cp6_ParamLimits

0x5d60,	// (0x00071f02) cell_myfav_contact_pane_cp6

0x5d76,	// (0x00071f18) cell_myfav_contact_pane_cp7_ParamLimits

0x5d76,	// (0x00071f18) cell_myfav_contact_pane_cp7

0xd710,	// (0x000798b2) listscroll_gen_pane_cp05

0x5d90,	// (0x00071f32) main_myfav_hc_pane_g1_ParamLimits

0x5d90,	// (0x00071f32) main_myfav_hc_pane_g1

0x5daa,	// (0x00071f4c) main_myfav_hc_pane_g2_ParamLimits

0x5daa,	// (0x00071f4c) main_myfav_hc_pane_g2

0x0002,

0xf94d,	// (0x0007baef) main_myfav_hc_pane_g_ParamLimits

0xf94d,	// (0x0007baef) main_myfav_hc_pane_g

0x5ddc,	// (0x00071f7e) main_myfav_hc_pane_t1_ParamLimits

0x5ddc,	// (0x00071f7e) main_myfav_hc_pane_t1

0xd719,	// (0x000798bb) main_myfav_hc_pane_t2_ParamLimits

0xd719,	// (0x000798bb) main_myfav_hc_pane_t2

0xd72b,	// (0x000798cd) main_myfav_hc_pane_t3_ParamLimits

0xd72b,	// (0x000798cd) main_myfav_hc_pane_t3

0x5df3,	// (0x00071f95) main_myfav_hc_pane_t4_ParamLimits

0x5df3,	// (0x00071f95) main_myfav_hc_pane_t4

0x0004,

0xf954,	// (0x0007baf6) main_myfav_hc_pane_t_ParamLimits

0xf954,	// (0x0007baf6) main_myfav_hc_pane_t

0xcc1f,	// (0x00078dc1) bg_myfav_hc_instruction_pane_g1

0xd73d,	// (0x000798df) cell_myfav_contact_pane_g1_ParamLimits

0xd73d,	// (0x000798df) cell_myfav_contact_pane_g1

0xd73d,	// (0x000798df) cell_myfav_contact_pane_g2_ParamLimits

0xd73d,	// (0x000798df) cell_myfav_contact_pane_g2

0xd749,	// (0x000798eb) cell_myfav_contact_pane_g3_ParamLimits

0xd749,	// (0x000798eb) cell_myfav_contact_pane_g3

0xcee4,	// (0x00079086) cell_myfav_contact_pane_g4_ParamLimits

0xcee4,	// (0x00079086) cell_myfav_contact_pane_g4

0xd756,	// (0x000798f8) cell_myfav_contact_pane_g5_ParamLimits

0xd756,	// (0x000798f8) cell_myfav_contact_pane_g5

0x0004,

0xf95f,	// (0x0007bb01) cell_myfav_contact_pane_g_ParamLimits

0xf95f,	// (0x0007bb01) cell_myfav_contact_pane_g

0x5dc4,	// (0x00071f66) main_myfav_hc_pane_g3_ParamLimits

0x5dc4,	// (0x00071f66) main_myfav_hc_pane_g3

0x02b3,	// (0x0006c455) popup_adpt_find_window

0x5e1b,	// (0x00071fbd) afind_page_pane_ParamLimits

0x5e1b,	// (0x00071fbd) afind_page_pane

0x5e30,	// (0x00071fd2) aid_size_cell_afind_ParamLimits

0x5e30,	// (0x00071fd2) aid_size_cell_afind

0x5e4e,	// (0x00071ff0) bg_popup_sub_pane_cp09_ParamLimits

0x5e4e,	// (0x00071ff0) bg_popup_sub_pane_cp09

0x5e5b,	// (0x00071ffd) find_pane_cp01_ParamLimits

0x5e5b,	// (0x00071ffd) find_pane_cp01

0xd762,	// (0x00079904) grid_afind_control_pane_ParamLimits

0xd762,	// (0x00079904) grid_afind_control_pane

0x5e68,	// (0x0007200a) grid_afind_pane_ParamLimits

0x5e68,	// (0x0007200a) grid_afind_pane

0x5e87,	// (0x00072029) cell_afind_pane_ParamLimits

0x5e87,	// (0x00072029) cell_afind_pane

0xcc1f,	// (0x00078dc1) afind_page_pane_g1

0x5ee8,	// (0x0007208a) afind_page_pane_g2

0x5ef1,	// (0x00072093) afind_page_pane_g3

0x0002,

0xf96a,	// (0x0007bb0c) afind_page_pane_g

0x5efa,	// (0x0007209c) afind_page_pane_t1

0xd776,	// (0x00079918) cell_afind_grid_control_pane_ParamLimits

0xd776,	// (0x00079918) cell_afind_grid_control_pane

0xd52a,	// (0x000796cc) bg_button_pane_cp69_ParamLimits

0xd52a,	// (0x000796cc) bg_button_pane_cp69

0x5f1a,	// (0x000720bc) cell_afind_pane_g1_ParamLimits

0x5f1a,	// (0x000720bc) cell_afind_pane_g1

0x5f27,	// (0x000720c9) cell_afind_pane_t1_ParamLimits

0x5f27,	// (0x000720c9) cell_afind_pane_t1

0xa9ba,	// (0x00076b5c) bg_button_pane_cp72

0xd785,	// (0x00079927) cell_afind_grid_control_pane_g1

0x2f7a,	// (0x0006f11c) aid_image_placing_area_ParamLimits

0x2f7a,	// (0x0006f11c) aid_image_placing_area

0xd1f8,	// (0x0007939a) field_vitu_entry_pane_g1_ParamLimits

0xd1f8,	// (0x0007939a) field_vitu_entry_pane_g1

0xd204,	// (0x000793a6) field_vitu_entry_pane_g2_ParamLimits

0xd204,	// (0x000793a6) field_vitu_entry_pane_g2

0x0001,

0xf81b,	// (0x0007b9bd) field_vitu_entry_pane_g_ParamLimits

0xf81b,	// (0x0007b9bd) field_vitu_entry_pane_g

0x50b7,	// (0x00071259) cell_vitu_itu_pane_g1_ParamLimits

0x5107,	// (0x000712a9) cell_vitu_itu_pane_t3_ParamLimits

0x5107,	// (0x000712a9) cell_vitu_itu_pane_t3

0xd4da,	// (0x0007967c) mp4_progress_pane_t1_ParamLimits

0xd4f3,	// (0x00079695) mp4_progress_pane_t2_ParamLimits

0xf8b0,	// (0x0007ba52) mp4_progress_pane_t_ParamLimits

0xd50c,	// (0x000796ae) mup_progress_pane_cp04_ParamLimits

0x5e07,	// (0x00071fa9) main_myfav_hc_pane_t5_ParamLimits

0x5e07,	// (0x00071fa9) main_myfav_hc_pane_t5

0x910e,	// (0x000752b0) aid_zoom_text_primary

0x02b3,	// (0x0006c455) popup_adpt_find_window_ParamLimits

0x9158,	// (0x000752fa) main_cam_set_pane

0x5834,	// (0x000719d6) cam4_zoom_pane_ParamLimits

0x5834,	// (0x000719d6) cam4_zoom_pane

0x5f39,	// (0x000720db) main_cam_set_pane_g1_ParamLimits

0x5f39,	// (0x000720db) main_cam_set_pane_g1

0x5f47,	// (0x000720e9) main_cam_set_pane_g2_ParamLimits

0x5f47,	// (0x000720e9) main_cam_set_pane_g2

0x0001,

0xf971,	// (0x0007bb13) main_cam_set_pane_g_ParamLimits

0xf971,	// (0x0007bb13) main_cam_set_pane_g

0x5f68,	// (0x0007210a) main_cam_set_pane_t1_ParamLimits

0x5f68,	// (0x0007210a) main_cam_set_pane_t1

0x5f83,	// (0x00072125) main_cset_listscroll_pane_ParamLimits

0x5f83,	// (0x00072125) main_cset_listscroll_pane

0x5fa3,	// (0x00072145) main_cset_slider_pane_ParamLimits

0x5fa3,	// (0x00072145) main_cset_slider_pane

0xd796,	// (0x00079938) main_cset_list_pane_ParamLimits

0xd796,	// (0x00079938) main_cset_list_pane

0xd7a6,	// (0x00079948) scroll_pane_cp028

0x5fc9,	// (0x0007216b) aid_area_touch_slider

0x5fe5,	// (0x00072187) cset_slider_pane

0x600f,	// (0x000721b1) main_cset_slider_pane_g1

0x6024,	// (0x000721c6) main_cset_slider_pane_g2

0x0011,

0xf976,	// (0x0007bb18) main_cset_slider_pane_g

0xd7df,	// (0x00079981) main_cset_slider_pane_t1

0x60e0,	// (0x00072282) main_cset_slider_pane_t2

0x60fa,	// (0x0007229c) main_cset_slider_pane_t3

0x6114,	// (0x000722b6) main_cset_slider_pane_t4

0x612e,	// (0x000722d0) main_cset_slider_pane_t5

0x6148,	// (0x000722ea) main_cset_slider_pane_t6

0x615d,	// (0x000722ff) main_cset_slider_pane_t7

0x000e,

0xf99b,	// (0x0007bb3d) main_cset_slider_pane_t

0x6261,	// (0x00072403) cset_list_set_pane_ParamLimits

0x6261,	// (0x00072403) cset_list_set_pane

0x6274,	// (0x00072416) aid_position_infowindow_above

0x627c,	// (0x0007241e) aid_position_infowindow_below

0xa289,	// (0x0007642b) cset_list_set_pane_g1_ParamLimits

0xa289,	// (0x0007642b) cset_list_set_pane_g1

0x6284,	// (0x00072426) cset_list_set_pane_g3_ParamLimits

0x6284,	// (0x00072426) cset_list_set_pane_g3

0x0001,

0xf9ba,	// (0x0007bb5c) cset_list_set_pane_g_ParamLimits

0xf9ba,	// (0x0007bb5c) cset_list_set_pane_g

0xa295,	// (0x00076437) cset_list_set_pane_t1_ParamLimits

0xa295,	// (0x00076437) cset_list_set_pane_t1

0xa1ea,	// (0x0007638c) list_highlight_pane_cp021_ParamLimits

0xa1ea,	// (0x0007638c) list_highlight_pane_cp021

0xb528,	// (0x000776ca) cset_slider_pane_g1

0xb53a,	// (0x000776dc) cset_slider_pane_g2

0xb531,	// (0x000776d3) cset_slider_pane_g3

0x0002,

0xf9bf,	// (0x0007bb61) cset_slider_pane_g

0x9b72,	// (0x00075d14) aid_area_touch_cam4_zoom

0x9b7a,	// (0x00075d1c) cam4_zoom_cont_pane

0x9b82,	// (0x00075d24) cam4_zoom_pane_g1

0x9b8a,	// (0x00075d2c) cam4_zoom_pane_g2

0x6293,	// (0x00072435) cam4_zoom_pane_g3

0x0002,

0xf9c6,	// (0x0007bb68) cam4_zoom_pane_g

0x9b92,	// (0x00075d34) cam4_zoom_cont_pane_g1

0x9b9b,	// (0x00075d3d) cam4_zoom_cont_pane_g2

0x9ba4,	// (0x00075d46) cam4_zoom_cont_pane_g3

0x0002,

0xf9cd,	// (0x0007bb6f) cam4_zoom_cont_pane_g

0x56f4,	// (0x00071896) call4_image_pane_ParamLimits

0x56f4,	// (0x00071896) call4_image_pane

0xd536,	// (0x000796d8) call4_windows_conf_pane_ParamLimits

0xd575,	// (0x00079717) popup_call4_audio_in_window_ParamLimits

0xd575,	// (0x00079717) popup_call4_audio_in_window

0x90f0,	// (0x00075292) bg_popup_call2_act_pane_cp02

0xd5eb,	// (0x0007978d) call4_list_conf_pane

0xcc1f,	// (0x00078dc1) call4_image_pane_g1

0xcc1f,	// (0x00078dc1) call4_image_pane_g2

0x0001,

0xf6e1,	// (0x0007b883) call4_image_pane_g

0xd87f,	// (0x00079a21) list_single_graphic_popup_conf4_pane_ParamLimits

0xd87f,	// (0x00079a21) list_single_graphic_popup_conf4_pane

0x90f0,	// (0x00075292) list_highlight_pane_cp022

0xd892,	// (0x00079a34) list_single_graphic_popup_conf4_pane_g1

0xb0fb,	// (0x0007729d) list_single_graphic_popup_conf4_pane_g2

0x0001,

0xf9d4,	// (0x0007bb76) list_single_graphic_popup_conf4_pane_g

0xd89a,	// (0x00079a3c) list_single_graphic_popup_conf4_pane_t1

0x13ff,	// (0x0006d5a1) popup_vtel_slider_window_ParamLimits

0x13ff,	// (0x0006d5a1) popup_vtel_slider_window

0xd518,	// (0x000796ba) dialer2_ne_pane_t2_ParamLimits

0xd518,	// (0x000796ba) dialer2_ne_pane_t2

0x0001,

0xf8b5,	// (0x0007ba57) dialer2_ne_pane_t_ParamLimits

0xf8b5,	// (0x0007ba57) dialer2_ne_pane_t

0xc9f6,	// (0x00078b98) bg_popup_sub_pane_cp010_ParamLimits

0xc9f6,	// (0x00078b98) bg_popup_sub_pane_cp010

0x629b,	// (0x0007243d) popup_vtel_slider_window_g1_ParamLimits

0x629b,	// (0x0007243d) popup_vtel_slider_window_g1

0x62ae,	// (0x00072450) popup_vtel_slider_window_g2_ParamLimits

0x62ae,	// (0x00072450) popup_vtel_slider_window_g2

0x0003,

0xf9d9,	// (0x0007bb7b) popup_vtel_slider_window_g_ParamLimits

0xf9d9,	// (0x0007bb7b) popup_vtel_slider_window_g

0x6304,	// (0x000724a6) vtel_slider_pane_ParamLimits

0x6304,	// (0x000724a6) vtel_slider_pane

0x6326,	// (0x000724c8) vtel_slider_pane_g1_ParamLimits

0x6326,	// (0x000724c8) vtel_slider_pane_g1

0x633a,	// (0x000724dc) vtel_slider_pane_g2_ParamLimits

0x633a,	// (0x000724dc) vtel_slider_pane_g2

0x6352,	// (0x000724f4) vtel_slider_pane_g3_ParamLimits

0x6352,	// (0x000724f4) vtel_slider_pane_g3

0x6326,	// (0x000724c8) vtel_slider_pane_g4_ParamLimits

0x6326,	// (0x000724c8) vtel_slider_pane_g4

0x6368,	// (0x0007250a) vtel_slider_pane_g5_ParamLimits

0x6368,	// (0x0007250a) vtel_slider_pane_g5

0x0004,

0xf9e2,	// (0x0007bb84) vtel_slider_pane_g_ParamLimits

0xf9e2,	// (0x0007bb84) vtel_slider_pane_g

0x9158,	// (0x000752fa) main_gallery2_pane

0x5a34,	// (0x00071bd6) aid_size_row_itut2_dropdow_list_ParamLimits

0x5a34,	// (0x00071bd6) aid_size_row_itut2_dropdow_list

0x5ac0,	// (0x00071c62) grid_vitu2_function_top_pane_ParamLimits

0x5ac0,	// (0x00071c62) grid_vitu2_function_top_pane

0x5b25,	// (0x00071cc7) popup_vitu2_dropdown_list_window_ParamLimits

0x5b25,	// (0x00071cc7) popup_vitu2_dropdown_list_window

0x5b4e,	// (0x00071cf0) popup_vitu2_match_list_window

0x637e,	// (0x00072520) cell_vitu2_function_top_pane_ParamLimits

0x637e,	// (0x00072520) cell_vitu2_function_top_pane

0x639c,	// (0x0007253e) cell_vitu2_function_top_pane_cp01_ParamLimits

0x639c,	// (0x0007253e) cell_vitu2_function_top_pane_cp01

0x63ba,	// (0x0007255c) cell_vitu2_function_top_wide_pane_ParamLimits

0x63ba,	// (0x0007255c) cell_vitu2_function_top_wide_pane

0x9158,	// (0x000752fa) bg_button_pane_cp012

0x63d8,	// (0x0007257a) cell_vitu2_function_top_pane_g1

0x9bad,	// (0x00075d4f) bg_button_pane_cp013_ParamLimits

0x9bad,	// (0x00075d4f) bg_button_pane_cp013

0x63ec,	// (0x0007258e) cell_vitu2_function_top_wide_pane_g1_ParamLimits

0x63ec,	// (0x0007258e) cell_vitu2_function_top_wide_pane_g1

0x9158,	// (0x000752fa) bg_popup_sub_pane_cp20

0x6404,	// (0x000725a6) list_vitu2_match_list_pane

0xd668,	// (0x0007980a) bg_popup_sub_pane_cp20_g1

0xd670,	// (0x00079812) bg_popup_sub_pane_cp20_g2

0xabc1,	// (0x00076d63) bg_popup_sub_pane_cp20_g3

0xd678,	// (0x0007981a) bg_popup_sub_pane_cp20_g4

0xaba1,	// (0x00076d43) bg_popup_sub_pane_cp20_g5

0xd8b0,	// (0x00079a52) bg_popup_sub_pane_cp20_g6

0xd6ac,	// (0x0007984e) bg_popup_sub_pane_cp20_g7

0xd6b4,	// (0x00079856) bg_popup_sub_pane_cp20_g8

0xd6bc,	// (0x0007985e) bg_popup_sub_pane_cp20_g9

0x0008,

0xf9ed,	// (0x0007bb8f) bg_popup_sub_pane_cp20_g

0x9bc9,	// (0x00075d6b) list_vitu2_match_list_item_pane_ParamLimits

0x9bc9,	// (0x00075d6b) list_vitu2_match_list_item_pane

0x9bdb,	// (0x00075d7d) list_vitu2_match_list_item_pane_t1

0x9166,	// (0x00075308) bg_popup_sub_pane_cp21

0x9be9,	// (0x00075d8b) grid_vitu2_dropdown_list_pane

0x6457,	// (0x000725f9) cell_vitu2_dropdown_list_char_pane_ParamLimits

0x6457,	// (0x000725f9) cell_vitu2_dropdown_list_char_pane

0x6478,	// (0x0007261a) cell_vitu2_dropdown_list_ctrl_pane_ParamLimits

0x6478,	// (0x0007261a) cell_vitu2_dropdown_list_ctrl_pane

0xd8b8,	// (0x00079a5a) cell_vitu2_dropdown_list_char_pane_g1

0xd8c1,	// (0x00079a63) cell_vitu2_dropdown_list_char_pane_g2

0xd8ca,	// (0x00079a6c) cell_vitu2_dropdown_list_char_pane_g3

0x0002,

0xfa0a,	// (0x0007bbac) cell_vitu2_dropdown_list_char_pane_g

0x64a4,	// (0x00072646) cell_vitu2_dropdown_list_char_pane_t1

0x64b2,	// (0x00072654) cell_vitu2_dropdown_list_ctrl_pane_g1_ParamLimits

0x64b2,	// (0x00072654) cell_vitu2_dropdown_list_ctrl_pane_g1

0x64c2,	// (0x00072664) cell_vitu2_dropdown_list_ctrl_pane_g2_ParamLimits

0x64c2,	// (0x00072664) cell_vitu2_dropdown_list_ctrl_pane_g2

0x64d3,	// (0x00072675) cell_vitu2_dropdown_list_ctrl_pane_g3_ParamLimits

0x64d3,	// (0x00072675) cell_vitu2_dropdown_list_ctrl_pane_g3

0x64e3,	// (0x00072685) cell_vitu2_dropdown_list_ctrl_pane_g4_ParamLimits

0x64e3,	// (0x00072685) cell_vitu2_dropdown_list_ctrl_pane_g4

0x9a97,	// (0x00075c39) cell_vitu2_dropdown_list_ctrl_pane_g5_ParamLimits

0x9a97,	// (0x00075c39) cell_vitu2_dropdown_list_ctrl_pane_g5

0x0004,

0xfa11,	// (0x0007bbb3) cell_vitu2_dropdown_list_ctrl_pane_g_ParamLimits

0xfa11,	// (0x0007bbb3) cell_vitu2_dropdown_list_ctrl_pane_g

0x64ff,	// (0x000726a1) aid_size_cell_gallery2_ParamLimits

0x64ff,	// (0x000726a1) aid_size_cell_gallery2

0x651d,	// (0x000726bf) grid_gallery2_pane_ParamLimits

0x651d,	// (0x000726bf) grid_gallery2_pane

0x6537,	// (0x000726d9) scroll_pane_cp029_ParamLimits

0x6537,	// (0x000726d9) scroll_pane_cp029

0x6543,	// (0x000726e5) cell_gallery2_pane_ParamLimits

0x6543,	// (0x000726e5) cell_gallery2_pane

0xd8d3,	// (0x00079a75) cell_gallery2_pane_g2

0x659f,	// (0x00072741) cell_gallery2_pane_g3

0xd8db,	// (0x00079a7d) cell_gallery2_pane_g4

0xd8e3,	// (0x00079a85) cell_gallery2_pane_g5

0xb3f2,	// (0x00077594) grid_highlight_pane_cp10

0x5b4e,	// (0x00071cf0) popup_vitu2_match_list_window_ParamLimits

0x5b63,	// (0x00071d05) popup_vitu2_query_window_ParamLimits

0x5b63,	// (0x00071d05) popup_vitu2_query_window

0x9166,	// (0x00075308) bg_vitu2_candi_button_pane

0xd8b8,	// (0x00079a5a) cell_vitu2_dropdown_list_char_pane_g1_copy1

0xd8c1,	// (0x00079a63) cell_vitu2_dropdown_list_char_pane_g2_copy1

0xd8ca,	// (0x00079a6c) cell_vitu2_dropdown_list_char_pane_g2_copy2

0x65a7,	// (0x00072749) bg_button_pane_cp015

0x65bb,	// (0x0007275d) bg_button_pane_cp016

0x65ce,	// (0x00072770) bg_button_pane_cp017

0xc809,	// (0x000789ab) bg_popup_sub_pane_cp22

0xd8eb,	// (0x00079a8d) popup_vitu2_query_window_g1

0x6613,	// (0x000727b5) popup_vitu2_query_window_g2

0x0002,

0xfa1c,	// (0x0007bbbe) popup_vitu2_query_window_g

0x6632,	// (0x000727d4) popup_vitu2_query_window_t1_ParamLimits

0x6632,	// (0x000727d4) popup_vitu2_query_window_t1

0x6667,	// (0x00072809) popup_vitu2_query_window_t2_ParamLimits

0x6667,	// (0x00072809) popup_vitu2_query_window_t2

0x6679,	// (0x0007281b) popup_vitu2_query_window_t3_ParamLimits

0x6679,	// (0x0007281b) popup_vitu2_query_window_t3

0x66a1,	// (0x00072843) popup_vitu2_query_window_t4_ParamLimits

0x66a1,	// (0x00072843) popup_vitu2_query_window_t4

0x66c2,	// (0x00072864) popup_vitu2_query_window_t5_ParamLimits

0x66c2,	// (0x00072864) popup_vitu2_query_window_t5

0x0006,

0xfa23,	// (0x0007bbc5) popup_vitu2_query_window_t_ParamLimits

0xfa23,	// (0x0007bbc5) popup_vitu2_query_window_t

0xd78e,	// (0x00079930) main_cset_text_pane

0x5fc9,	// (0x0007216b) aid_area_touch_slider_ParamLimits

0x5fe5,	// (0x00072187) cset_slider_pane_ParamLimits

0x600f,	// (0x000721b1) main_cset_slider_pane_g1_ParamLimits

0x6024,	// (0x000721c6) main_cset_slider_pane_g2_ParamLimits

0xd7af,	// (0x00079951) main_cset_slider_pane_g3_ParamLimits

0xd7af,	// (0x00079951) main_cset_slider_pane_g3

0x6039,	// (0x000721db) main_cset_slider_pane_g4_ParamLimits

0x6039,	// (0x000721db) main_cset_slider_pane_g4

0x6048,	// (0x000721ea) main_cset_slider_pane_g5_ParamLimits

0x6048,	// (0x000721ea) main_cset_slider_pane_g5

0x6054,	// (0x000721f6) main_cset_slider_pane_g6_ParamLimits

0x6054,	// (0x000721f6) main_cset_slider_pane_g6

0xf976,	// (0x0007bb18) main_cset_slider_pane_g_ParamLimits

0xd7df,	// (0x00079981) main_cset_slider_pane_t1_ParamLimits

0x60e0,	// (0x00072282) main_cset_slider_pane_t2_ParamLimits

0x60fa,	// (0x0007229c) main_cset_slider_pane_t3_ParamLimits

0x6114,	// (0x000722b6) main_cset_slider_pane_t4_ParamLimits

0x612e,	// (0x000722d0) main_cset_slider_pane_t5_ParamLimits

0x6148,	// (0x000722ea) main_cset_slider_pane_t6_ParamLimits

0x615d,	// (0x000722ff) main_cset_slider_pane_t7_ParamLimits

0x6187,	// (0x00072329) main_cset_slider_pane_t8_ParamLimits

0x6187,	// (0x00072329) main_cset_slider_pane_t8

0x61af,	// (0x00072351) main_cset_slider_pane_t9_ParamLimits

0x61af,	// (0x00072351) main_cset_slider_pane_t9

0x61d7,	// (0x00072379) main_cset_slider_pane_t10_ParamLimits

0x61d7,	// (0x00072379) main_cset_slider_pane_t10

0x61ff,	// (0x000723a1) main_cset_slider_pane_t11_ParamLimits

0x61ff,	// (0x000723a1) main_cset_slider_pane_t11

0x6227,	// (0x000723c9) main_cset_slider_pane_t12_ParamLimits

0x6227,	// (0x000723c9) main_cset_slider_pane_t12

0x6244,	// (0x000723e6) main_cset_slider_pane_t13_ParamLimits

0x6244,	// (0x000723e6) main_cset_slider_pane_t13

0xf99b,	// (0x0007bb3d) main_cset_slider_pane_t_ParamLimits

0x90f0,	// (0x00075292) bg_popup_sub_pane_cp011

0xd8f7,	// (0x00079a99) main_cset_text_pane_g1

0xd8ff,	// (0x00079aa1) main_cset_text_pane_t1

0xd90d,	// (0x00079aaf) main_cset_text_pane_t2

0xd91b,	// (0x00079abd) main_cset_text_pane_t3

0xd929,	// (0x00079acb) main_cset_text_pane_t4

0xd937,	// (0x00079ad9) main_cset_text_pane_t5

0xd945,	// (0x00079ae7) main_cset_text_pane_t6

0xd953,	// (0x00079af5) main_cset_text_pane_t7

0x0006,

0xfa32,	// (0x0007bbd4) main_cset_text_pane_t

0x9166,	// (0x00075308) main_cam4_burst_pane

0x9166,	// (0x00075308) main_cam5_pane

0x5f08,	// (0x000720aa) bg_button_pane_cp019

0x5f11,	// (0x000720b3) bg_button_pane_cp020

0xd7bb,	// (0x0007995d) main_cset_slider_pane_g7_ParamLimits

0xd7bb,	// (0x0007995d) main_cset_slider_pane_g7

0xd7c7,	// (0x00079969) main_cset_slider_pane_g8_ParamLimits

0xd7c7,	// (0x00079969) main_cset_slider_pane_g8

0x6068,	// (0x0007220a) main_cset_slider_pane_g9_ParamLimits

0x6068,	// (0x0007220a) main_cset_slider_pane_g9

0x6074,	// (0x00072216) main_cset_slider_pane_g10_ParamLimits

0x6074,	// (0x00072216) main_cset_slider_pane_g10

0x6080,	// (0x00072222) main_cset_slider_pane_g11_ParamLimits

0x6080,	// (0x00072222) main_cset_slider_pane_g11

0x608c,	// (0x0007222e) main_cset_slider_pane_g12_ParamLimits

0x608c,	// (0x0007222e) main_cset_slider_pane_g12

0x6098,	// (0x0007223a) main_cset_slider_pane_g13_ParamLimits

0x6098,	// (0x0007223a) main_cset_slider_pane_g13

0x60a4,	// (0x00072246) main_cset_slider_pane_g14_ParamLimits

0x60a4,	// (0x00072246) main_cset_slider_pane_g14

0x60b0,	// (0x00072252) main_cset_slider_pane_g15_ParamLimits

0x60b0,	// (0x00072252) main_cset_slider_pane_g15

0xd80d,	// (0x000799af) main_cset_slider_pane_t14_ParamLimits

0xd80d,	// (0x000799af) main_cset_slider_pane_t14

0xd846,	// (0x000799e8) main_cset_slider_pane_t15_ParamLimits

0xd846,	// (0x000799e8) main_cset_slider_pane_t15

0x6739,	// (0x000728db) aid_cam4_burst_size_cell_ParamLimits

0x6739,	// (0x000728db) aid_cam4_burst_size_cell

0x6759,	// (0x000728fb) grid_cam4_burst_pane_ParamLimits

0x6759,	// (0x000728fb) grid_cam4_burst_pane

0x6791,	// (0x00072933) linegrid_cam4_burst_pane_ParamLimits

0x6791,	// (0x00072933) linegrid_cam4_burst_pane

0xd961,	// (0x00079b03) scroll_pane_cp30_ParamLimits

0xd961,	// (0x00079b03) scroll_pane_cp30

0x67b7,	// (0x00072959) cell_cam4_burst_pane_ParamLimits

0x67b7,	// (0x00072959) cell_cam4_burst_pane

0xd96d,	// (0x00079b0f) linegrid_cam4_burst_pane_g1_ParamLimits

0xd96d,	// (0x00079b0f) linegrid_cam4_burst_pane_g1

0x6804,	// (0x000729a6) linegrid_cam4_burst_pane_g2_ParamLimits

0x6804,	// (0x000729a6) linegrid_cam4_burst_pane_g2

0xd97a,	// (0x00079b1c) linegrid_cam4_burst_pane_g3_ParamLimits

0xd97a,	// (0x00079b1c) linegrid_cam4_burst_pane_g3

0x0002,

0xfa41,	// (0x0007bbe3) linegrid_cam4_burst_pane_g_ParamLimits

0xfa41,	// (0x0007bbe3) linegrid_cam4_burst_pane_g

0x6815,	// (0x000729b7) linegrid_cam4_burst_pane_g3_copy1_ParamLimits

0x6815,	// (0x000729b7) linegrid_cam4_burst_pane_g3_copy1

0xd987,	// (0x00079b29) linegrid_cam4_burst_pane_g4_ParamLimits

0xd987,	// (0x00079b29) linegrid_cam4_burst_pane_g4

0x682f,	// (0x000729d1) linegrid_cam4_burst_pane_g5_ParamLimits

0x682f,	// (0x000729d1) linegrid_cam4_burst_pane_g5

0x6840,	// (0x000729e2) linegrid_cam4_burst_pane_g6_ParamLimits

0x6840,	// (0x000729e2) linegrid_cam4_burst_pane_g6

0xd994,	// (0x00079b36) linegrid_cam4_burst_pane_g7_ParamLimits

0xd994,	// (0x00079b36) linegrid_cam4_burst_pane_g7

0x6857,	// (0x000729f9) cell_cam4_burst_pane_g1

0xd9ad,	// (0x00079b4f) main_cam5_pane_t1_ParamLimits

0xd9ad,	// (0x00079b4f) main_cam5_pane_t1

0xd9bf,	// (0x00079b61) main_cam5_pane_t2_ParamLimits

0xd9bf,	// (0x00079b61) main_cam5_pane_t2

0xd9d1,	// (0x00079b73) main_cam5_pane_t3_ParamLimits

0xd9d1,	// (0x00079b73) main_cam5_pane_t3

0xd9e3,	// (0x00079b85) main_cam5_pane_t4_ParamLimits

0xd9e3,	// (0x00079b85) main_cam5_pane_t4

0xd9fb,	// (0x00079b9d) main_cam5_pane_t5_ParamLimits

0xd9fb,	// (0x00079b9d) main_cam5_pane_t5

0xda0f,	// (0x00079bb1) main_cam5_pane_t6_ParamLimits

0xda0f,	// (0x00079bb1) main_cam5_pane_t6

0xda23,	// (0x00079bc5) main_cam5_pane_t7_ParamLimits

0xda23,	// (0x00079bc5) main_cam5_pane_t7

0xda35,	// (0x00079bd7) main_cam5_pane_t8_ParamLimits

0xda35,	// (0x00079bd7) main_cam5_pane_t8

0xda51,	// (0x00079bf3) main_cam5_pane_t9_ParamLimits

0xda51,	// (0x00079bf3) main_cam5_pane_t9

0xda63,	// (0x00079c05) main_cam5_pane_t10_ParamLimits

0xda63,	// (0x00079c05) main_cam5_pane_t10

0xda75,	// (0x00079c17) main_cam5_pane_t11_ParamLimits

0xda75,	// (0x00079c17) main_cam5_pane_t11

0xda87,	// (0x00079c29) main_cam5_pane_t12_ParamLimits

0xda87,	// (0x00079c29) main_cam5_pane_t12

0xda9c,	// (0x00079c3e) main_cam5_pane_t13_ParamLimits

0xda9c,	// (0x00079c3e) main_cam5_pane_t13

0x000c,

0xfa4d,	// (0x0007bbef) main_cam5_pane_t_ParamLimits

0xfa4d,	// (0x0007bbef) main_cam5_pane_t

0x0335,	// (0x0006c4d7) popup_scut_keymap_window_ParamLimits

0x0335,	// (0x0006c4d7) popup_scut_keymap_window

0x686c,	// (0x00072a0e) aid_size_cell_brow_shortcut

0xb3f2,	// (0x00077594) bg_popup_window_pane_cp010

0x6878,	// (0x00072a1a) grid_scut_pane

0x6884,	// (0x00072a26) cell_scut_pane_ParamLimits

0x6884,	// (0x00072a26) cell_scut_pane

0x689b,	// (0x00072a3d) cell_scut_pane_g1

0xdab9,	// (0x00079c5b) cell_scut_pane_t1

0xdac8,	// (0x00079c6a) cell_scut_pane_t2

0x68a4,	// (0x00072a46) cell_scut_pane_t3

0x0002,

0xfa68,	// (0x0007bc0a) cell_scut_pane_t

0x45a0,	// (0x00070742) main_mup3_pane_g8_ParamLimits

0x45a0,	// (0x00070742) main_mup3_pane_g8

0x5a4c,	// (0x00071bee) area_vitu2_query_pane_ParamLimits

0x5a4c,	// (0x00071bee) area_vitu2_query_pane

0x65e1,	// (0x00072783) input_focus_pane_cp08

0xdad7,	// (0x00079c79) area_vitu2_query_pane_g1

0x68b2,	// (0x00072a54) area_vitu2_query_pane_g2

0x0001,

0xfa6f,	// (0x0007bc11) area_vitu2_query_pane_g

0x68c3,	// (0x00072a65) area_vitu2_query_pane_t1_ParamLimits

0x68c3,	// (0x00072a65) area_vitu2_query_pane_t1

0x68d7,	// (0x00072a79) area_vitu2_query_pane_t2_ParamLimits

0x68d7,	// (0x00072a79) area_vitu2_query_pane_t2

0x68eb,	// (0x00072a8d) area_vitu2_query_pane_t3_ParamLimits

0x68eb,	// (0x00072a8d) area_vitu2_query_pane_t3

0xa2d0,	// (0x00076472) area_vitu2_query_pane_t4_ParamLimits

0xa2d0,	// (0x00076472) area_vitu2_query_pane_t4

0xa2f8,	// (0x0007649a) area_vitu2_query_pane_t5_ParamLimits

0xa2f8,	// (0x0007649a) area_vitu2_query_pane_t5

0xa320,	// (0x000764c2) area_vitu2_query_pane_t6_ParamLimits

0xa320,	// (0x000764c2) area_vitu2_query_pane_t6

0x0006,

0xfa74,	// (0x0007bc16) area_vitu2_query_pane_t_ParamLimits

0xfa74,	// (0x0007bc16) area_vitu2_query_pane_t

0x6913,	// (0x00072ab5) bg_button_pane_cp018

0x6921,	// (0x00072ac3) bg_button_pane_cp021

0x692d,	// (0x00072acf) bg_button_pane_cp022

0x693e,	// (0x00072ae0) input_focus_pane_cp09

0xb21f,	// (0x000773c1) aid_size_touch_mv_arrow_left

0xb24a,	// (0x000773ec) aid_size_touch_mv_arrow_right

0x60c8,	// (0x0007226a) main_cset_slider_pane_g16_ParamLimits

0x60c8,	// (0x0007226a) main_cset_slider_pane_g16

0x60d4,	// (0x00072276) main_cset_slider_pane_g17_ParamLimits

0x60d4,	// (0x00072276) main_cset_slider_pane_g17

0x6857,	// (0x000729f9) cell_cam4_burst_pane_g1_ParamLimits

0x90f0,	// (0x00075292) compa_mode_pane

0x62be,	// (0x00072460) popup_vtel_slider_window_g3_ParamLimits

0x62be,	// (0x00072460) popup_vtel_slider_window_g3

0x62d5,	// (0x00072477) popup_vtel_slider_window_g4_ParamLimits

0x62d5,	// (0x00072477) popup_vtel_slider_window_g4

0x62ec,	// (0x0007248e) popup_vtel_slider_window_t1_ParamLimits

0x62ec,	// (0x0007248e) popup_vtel_slider_window_t1

0x9166,	// (0x00075308) main_cl_pane

0x9707,	// (0x000758a9) popup_imed_adjust2_window_ParamLimits

0xc809,	// (0x000789ab) bg_tb_trans_pane_cp05_ParamLimits

0xd124,	// (0x000792c6) popup_imed_adjust2_window_g1_ParamLimits

0xd133,	// (0x000792d5) popup_imed_adjust2_window_g2_ParamLimits

0xd133,	// (0x000792d5) popup_imed_adjust2_window_g2

0xd13f,	// (0x000792e1) popup_imed_adjust2_window_g3_ParamLimits

0xd13f,	// (0x000792e1) popup_imed_adjust2_window_g3

0x0002,

0xf7df,	// (0x0007b981) popup_imed_adjust2_window_g_ParamLimits

0xf7df,	// (0x0007b981) popup_imed_adjust2_window_g

0xd14b,	// (0x000792ed) popup_imed_adjust2_window_t1_ParamLimits

0xd163,	// (0x00079305) slider_imed_adjust_pane_ParamLimits

0xd177,	// (0x00079319) slider_imed_adjust_pane_g1_ParamLimits

0xd187,	// (0x00079329) slider_imed_adjust_pane_g2_ParamLimits

0xd197,	// (0x00079339) slider_imed_adjust_pane_g3_ParamLimits

0xd1a8,	// (0x0007934a) slider_imed_adjust_pane_g4_ParamLimits

0xf7e6,	// (0x0007b988) slider_imed_adjust_pane_g_ParamLimits

0x57d5,	// (0x00071977) aid_touch_area_cam4_ParamLimits

0x57d5,	// (0x00071977) aid_touch_area_cam4

0x9a7b,	// (0x00075c1d) battery_pane_cp01

0x58a4,	// (0x00071a46) main_camera4_pane_g6_ParamLimits

0x58a4,	// (0x00071a46) main_camera4_pane_g6

0x58ce,	// (0x00071a70) main_camera4_pane_t2_ParamLimits

0x58ce,	// (0x00071a70) main_camera4_pane_t2

0x0001,

0xf8e9,	// (0x0007ba8b) main_camera4_pane_t_ParamLimits

0xf8e9,	// (0x0007ba8b) main_camera4_pane_t

0x5903,	// (0x00071aa5) aid_touch_area_vid4_ParamLimits

0x5903,	// (0x00071aa5) aid_touch_area_vid4

0x5957,	// (0x00071af9) main_video4_pane_g5_ParamLimits

0x5957,	// (0x00071af9) main_video4_pane_g5

0x597c,	// (0x00071b1e) vid4_progress_pane_ParamLimits

0x597c,	// (0x00071b1e) vid4_progress_pane

0xd7d3,	// (0x00079975) main_cset_slider_pane_g18_ParamLimits

0xd7d3,	// (0x00079975) main_cset_slider_pane_g18

0xd9a1,	// (0x00079b43) cell_cam4_burst_pane_g2_ParamLimits

0xd9a1,	// (0x00079b43) cell_cam4_burst_pane_g2

0x0001,

0xfa48,	// (0x0007bbea) cell_cam4_burst_pane_g_ParamLimits

0xfa48,	// (0x0007bbea) cell_cam4_burst_pane_g

0x9fe4,	// (0x00076186) bg_cl_pane_ParamLimits

0x9fe4,	// (0x00076186) bg_cl_pane

0x694f,	// (0x00072af1) cl_header_pane_ParamLimits

0x694f,	// (0x00072af1) cl_header_pane

0x6963,	// (0x00072b05) cl_listscroll_pane_ParamLimits

0x6963,	// (0x00072b05) cl_listscroll_pane

0xdae3,	// (0x00079c85) bg_cl_pane_g1

0xdaeb,	// (0x00079c8d) bg_cl_pane_g2

0xdaf3,	// (0x00079c95) bg_cl_pane_g3

0xdafb,	// (0x00079c9d) bg_cl_pane_g4

0xdb03,	// (0x00079ca5) bg_cl_pane_g5

0xdb0b,	// (0x00079cad) bg_cl_pane_g6

0xdb13,	// (0x00079cb5) bg_cl_pane_g7

0xdb1b,	// (0x00079cbd) bg_cl_pane_g8

0xdb23,	// (0x00079cc5) bg_cl_pane_g9

0x0008,

0xfa83,	// (0x0007bc25) bg_cl_pane_g

0x6973,	// (0x00072b15) aid_height_cl_leading_ParamLimits

0x6973,	// (0x00072b15) aid_height_cl_leading

0x697f,	// (0x00072b21) aid_height_cl_text_ParamLimits

0x697f,	// (0x00072b21) aid_height_cl_text

0xa1ea,	// (0x0007638c) bg_cl_header_pane_ParamLimits

0xa1ea,	// (0x0007638c) bg_cl_header_pane

0x699e,	// (0x00072b40) cl_header_pane_g1_ParamLimits

0x699e,	// (0x00072b40) cl_header_pane_g1

0x69b4,	// (0x00072b56) cl_header_pane_t1_ParamLimits

0x69b4,	// (0x00072b56) cl_header_pane_t1

0xdb2b,	// (0x00079ccd) cl_list_pane

0xd7a6,	// (0x00079948) hc_scroll_pane_cp01

0xaba1,	// (0x00076d43) bg_cl_header_pane_g1

0xd668,	// (0x0007980a) bg_cl_header_pane_g2

0xabc1,	// (0x00076d63) bg_cl_header_pane_g3

0xd678,	// (0x0007981a) bg_cl_header_pane_g4

0xd670,	// (0x00079812) bg_cl_header_pane_g5

0xd8b0,	// (0x00079a52) bg_cl_header_pane_g6

0xd6b4,	// (0x00079856) bg_cl_header_pane_g7

0xd6bc,	// (0x0007985e) bg_cl_header_pane_g8

0xd6ac,	// (0x0007984e) bg_cl_header_pane_g9

0x0008,

0xfa96,	// (0x0007bc38) bg_cl_header_pane_g

0x69cd,	// (0x00072b6f) hc_cl_list_double_graphic_heading_pane_ParamLimits

0x69cd,	// (0x00072b6f) hc_cl_list_double_graphic_heading_pane

0x69de,	// (0x00072b80) hc_cl_list_single_graphic_pane_ParamLimits

0x69de,	// (0x00072b80) hc_cl_list_single_graphic_pane

0x69f7,	// (0x00072b99) hc_cl_list_single_graphic_pane_g1_ParamLimits

0x69f7,	// (0x00072b99) hc_cl_list_single_graphic_pane_g1

0x6a03,	// (0x00072ba5) hc_cl_list_single_graphic_pane_g2_ParamLimits

0x6a03,	// (0x00072ba5) hc_cl_list_single_graphic_pane_g2

0x0001,

0xfaa9,	// (0x0007bc4b) hc_cl_list_single_graphic_pane_g_ParamLimits

0xfaa9,	// (0x0007bc4b) hc_cl_list_single_graphic_pane_g

0x6a17,	// (0x00072bb9) hc_cl_list_single_graphic_pane_t1_ParamLimits

0x6a17,	// (0x00072bb9) hc_cl_list_single_graphic_pane_t1

0x69f7,	// (0x00072b99) hc_cl_list_double_graphic_heading_pane_g1_ParamLimits

0x69f7,	// (0x00072b99) hc_cl_list_double_graphic_heading_pane_g1

0x6a2c,	// (0x00072bce) hc_cl_list_double_graphic_heading_pane_g2_ParamLimits

0x6a2c,	// (0x00072bce) hc_cl_list_double_graphic_heading_pane_g2

0x6a40,	// (0x00072be2) hc_cl_list_double_graphic_heading_pane_g3_ParamLimits

0x6a40,	// (0x00072be2) hc_cl_list_double_graphic_heading_pane_g3

0x0002,

0xfaae,	// (0x0007bc50) hc_cl_list_double_graphic_heading_pane_g_ParamLimits

0xfaae,	// (0x0007bc50) hc_cl_list_double_graphic_heading_pane_g

0x6a54,	// (0x00072bf6) hc_cl_list_double_graphic_heading_pane_t1_ParamLimits

0x6a54,	// (0x00072bf6) hc_cl_list_double_graphic_heading_pane_t1

0x6a69,	// (0x00072c0b) hc_cl_list_double_graphic_heading_pane_t2_ParamLimits

0x6a69,	// (0x00072c0b) hc_cl_list_double_graphic_heading_pane_t2

0x0001,

0xfab5,	// (0x0007bc57) hc_cl_list_double_graphic_heading_pane_t_ParamLimits

0xfab5,	// (0x0007bc57) hc_cl_list_double_graphic_heading_pane_t

0x6a7e,	// (0x00072c20) vid4_progress_pane_g1

0x6a90,	// (0x00072c32) vid4_progress_pane_g2

0xae8a,	// (0x0007702c) vid4_progress_pane_g3

0x9bf9,	// (0x00075d9b) vid4_progress_pane_g4

0x0004,

0xfaba,	// (0x0007bc5c) vid4_progress_pane_g

0x9c17,	// (0x00075db9) vid4_progress_pane_t1

0x9c2c,	// (0x00075dce) vid4_progress_pane_t2

0x0002,

0xfac5,	// (0x0007bc67) vid4_progress_pane_t

0x9c58,	// (0x00075dfa) wait_bar_pane_cp07

0xca04,	// (0x00078ba6) blid_firmament_pane_ParamLimits

0xca47,	// (0x00078be9) popup_blid_sat_info2_window_g1

0xca6b,	// (0x00078c0d) popup_blid_sat_info2_window_t3

0xca79,	// (0x00078c1b) popup_blid_sat_info2_window_t4

0xca87,	// (0x00078c29) popup_blid_sat_info2_window_t5

0xca95,	// (0x00078c37) popup_blid_sat_info2_window_t6

0xcaa5,	// (0x00078c47) popup_blid_sat_info2_window_t7

0xcab3,	// (0x00078c55) popup_blid_sat_info2_window_t8

0xcac1,	// (0x00078c63) popup_blid_sat_info2_window_t9

0xcacf,	// (0x00078c71) popup_blid_sat_info2_window_t10

0xcb9f,	// (0x00078d41) aid_firma_cardinal_ParamLimits

0xcbb3,	// (0x00078d55) blid_firmament_pane_t1_ParamLimits

0xcbca,	// (0x00078d6c) blid_firmament_pane_t2_ParamLimits

0xcbe1,	// (0x00078d83) blid_firmament_pane_t3_ParamLimits

0xcbf8,	// (0x00078d9a) blid_firmament_pane_t4_ParamLimits

0xf6d8,	// (0x0007b87a) blid_firmament_pane_t_ParamLimits

0xcc0f,	// (0x00078db1) blid_sat_info_pane_ParamLimits

0x9158,	// (0x000752fa) main_cam_set_pane_ParamLimits

0x4e66,	// (0x00071008) aid_size_cell_colour_35_ParamLimits

0x4e86,	// (0x00071028) aid_size_cell_colour_112_ParamLimits

0x4ea6,	// (0x00071048) aid_size_cell_effect_ParamLimits

0xc809,	// (0x000789ab) bg_tb_trans_pane_cp02_ParamLimits

0xae11,	// (0x00076fb3) heading_imed_pane_ParamLimits

0x4ec6,	// (0x00071068) listscroll_imed_pane_ParamLimits

0xbe1a,	// (0x00077fbc) popup_call2_audio_first_window_g5_ParamLimits

0xbe1a,	// (0x00077fbc) popup_call2_audio_first_window_g5

0x5480,	// (0x00071622) aid_size_touch_image3_arrow_left_ParamLimits

0x5480,	// (0x00071622) aid_size_touch_image3_arrow_left

0x54ac,	// (0x0007164e) aid_size_touch_image3_arrow_right_ParamLimits

0x54ac,	// (0x0007164e) aid_size_touch_image3_arrow_right

0x9c42,	// (0x00075de4) vid4_progress_pane_t3

0x51f2,	// (0x00071394) main_hwr_training_symbol_option_pane_ParamLimits

0x51f2,	// (0x00071394) main_hwr_training_symbol_option_pane

0xd41a,	// (0x000795bc) popup_hwr_training_preview_window_ParamLimits

0xd41a,	// (0x000795bc) popup_hwr_training_preview_window

0x5212,	// (0x000713b4) hwr_training_navi_pane_g5_ParamLimits

0x5212,	// (0x000713b4) hwr_training_navi_pane_g5

0xd656,	// (0x000797f8) popup_char_count_window

0x9158,	// (0x000752fa) bg_popup_sub_pane_cp20_ParamLimits

0x6404,	// (0x000725a6) list_vitu2_match_list_pane_ParamLimits

0x6413,	// (0x000725b5) vitu2_page_scroll_pane_ParamLimits

0x6413,	// (0x000725b5) vitu2_page_scroll_pane

0xdb34,	// (0x00079cd6) list_single_hwr_training_symbol_option_pane_ParamLimits

0xdb34,	// (0x00079cd6) list_single_hwr_training_symbol_option_pane

0xdb47,	// (0x00079ce9) list_single_hwr_training_symbol_option_pane_g1

0xdb4f,	// (0x00079cf1) list_single_hwr_training_symbol_option_pane_t1

0xdb5d,	// (0x00079cff) bg_button_pane_cp023

0xdb66,	// (0x00079d08) bg_button_pane_cp024

0x6ad1,	// (0x00072c73) vitu2_page_scroll_pane_g1

0x6ad9,	// (0x00072c7b) vitu2_page_scroll_pane_g2

0x0001,

0xfacc,	// (0x0007bc6e) vitu2_page_scroll_pane_g

0x6ae1,	// (0x00072c83) vitu2_page_scroll_pane_t1

0xd1d4,	// (0x00079376) popup_char_count_window_g1

0xdb99,	// (0x00079d3b) popup_char_count_window_g2

0xdba2,	// (0x00079d44) popup_char_count_window_g3

0x0002,

0xfad1,	// (0x0007bc73) popup_char_count_window_g

0xdbab,	// (0x00079d4d) popup_char_count_window_t1

0x9166,	// (0x00075308) main_vded2_pane

0xd110,	// (0x000792b2) aid_size_cell_imed_line

0xd11a,	// (0x000792bc) grid_imed_line_width_pane

0x9b3f,	// (0x00075ce1) vid4_indicators_pane_g4

0xdbb9,	// (0x00079d5b) cell_imed_line_width_pane_ParamLimits

0xdbb9,	// (0x00079d5b) cell_imed_line_width_pane

0xdbcd,	// (0x00079d6f) cell_imed_line_width_pane_g1

0xd680,	// (0x00079822) cell_imed_line_width_pane_g2

0x0001,

0xfad8,	// (0x0007bc7a) cell_imed_line_width_pane_g

0x6af0,	// (0x00072c92) main_vded2_pane_g1_ParamLimits

0x6af0,	// (0x00072c92) main_vded2_pane_g1

0x6b06,	// (0x00072ca8) main_vded2_pane_g2_ParamLimits

0x6b06,	// (0x00072ca8) main_vded2_pane_g2

0x0001,

0xfadd,	// (0x0007bc7f) main_vded2_pane_g_ParamLimits

0xfadd,	// (0x0007bc7f) main_vded2_pane_g

0x6b18,	// (0x00072cba) vded2_slider_pane_ParamLimits

0x6b18,	// (0x00072cba) vded2_slider_pane

0x6b28,	// (0x00072cca) aid_size_touch_vded2_end

0x6b32,	// (0x00072cd4) aid_size_touch_vded2_playhead

0xdbd6,	// (0x00079d78) aid_size_touch_vded2_start

0xdbde,	// (0x00079d80) vded2_slider_bg_pane

0xdbe7,	// (0x00079d89) vded2_slider_pane_g1

0xdbf0,	// (0x00079d92) vded2_slider_pane_g2

0x6b3c,	// (0x00072cde) vded2_slider_pane_g3

0x0002,

0xfae2,	// (0x0007bc84) vded2_slider_pane_g

0xdbf8,	// (0x00079d9a) vded2_slider_bg_pane_g1

0xdc01,	// (0x00079da3) vded2_slider_bg_pane_g2

0xdc0a,	// (0x00079dac) vded2_slider_bg_pane_g3

0x0002,

0xfae9,	// (0x0007bc8b) vded2_slider_bg_pane_g

0x2be3,	// (0x0006ed85) aid_postcard_touch_down_pane_ParamLimits

0x2be3,	// (0x0006ed85) aid_postcard_touch_down_pane

0x2bf9,	// (0x0006ed9b) aid_postcard_touch_up_pane_ParamLimits

0x2bf9,	// (0x0006ed9b) aid_postcard_touch_up_pane

0x9166,	// (0x00075308) main_blid2_pane

0x96ed,	// (0x0007588f) popup_blid2_search_window

0x90f0,	// (0x00075292) blid2_gps_pane

0x90f0,	// (0x00075292) blid2_navig_pane

0x90f0,	// (0x00075292) blid2_search_pane

0x90f0,	// (0x00075292) blid2_tripm_pane

0x6b47,	// (0x00072ce9) blid2_search_pane_g1_ParamLimits

0x6b47,	// (0x00072ce9) blid2_search_pane_g1

0x6b5f,	// (0x00072d01) blid2_search_pane_t1_ParamLimits

0x6b5f,	// (0x00072d01) blid2_search_pane_t1

0x6b71,	// (0x00072d13) aid_size_cell_blid2_gps_ParamLimits

0x6b71,	// (0x00072d13) aid_size_cell_blid2_gps

0x6b89,	// (0x00072d2b) blid2_gps_pane_g1_ParamLimits

0x6b89,	// (0x00072d2b) blid2_gps_pane_g1

0x6b9d,	// (0x00072d3f) grid_blid2_satellite_pane_ParamLimits

0x6b9d,	// (0x00072d3f) grid_blid2_satellite_pane

0x6bb7,	// (0x00072d59) blid2_navig_pane_g1_ParamLimits

0x6bb7,	// (0x00072d59) blid2_navig_pane_g1

0x6bc3,	// (0x00072d65) blid2_navig_pane_t1_ParamLimits

0x6bc3,	// (0x00072d65) blid2_navig_pane_t1

0x6bde,	// (0x00072d80) blid2_navig_pane_t2_ParamLimits

0x6bde,	// (0x00072d80) blid2_navig_pane_t2

0x0001,

0xfaf0,	// (0x0007bc92) blid2_navig_pane_t_ParamLimits

0xfaf0,	// (0x0007bc92) blid2_navig_pane_t

0x6bf9,	// (0x00072d9b) blid2_navig_ring_pane_ParamLimits

0x6bf9,	// (0x00072d9b) blid2_navig_ring_pane

0x6c12,	// (0x00072db4) blid2_speed_pane_ParamLimits

0x6c12,	// (0x00072db4) blid2_speed_pane

0x6c1e,	// (0x00072dc0) blid2_tripm_pane_g1_ParamLimits

0x6c1e,	// (0x00072dc0) blid2_tripm_pane_g1

0x6c39,	// (0x00072ddb) blid2_tripm_pane_g2_ParamLimits

0x6c39,	// (0x00072ddb) blid2_tripm_pane_g2

0x6c4d,	// (0x00072def) blid2_tripm_pane_g3_ParamLimits

0x6c4d,	// (0x00072def) blid2_tripm_pane_g3

0x6c61,	// (0x00072e03) blid2_tripm_pane_g4_ParamLimits

0x6c61,	// (0x00072e03) blid2_tripm_pane_g4

0x6c75,	// (0x00072e17) blid2_tripm_pane_g5_ParamLimits

0x6c75,	// (0x00072e17) blid2_tripm_pane_g5

0x0005,

0xfaf5,	// (0x0007bc97) blid2_tripm_pane_g_ParamLimits

0xfaf5,	// (0x0007bc97) blid2_tripm_pane_g

0x6c9b,	// (0x00072e3d) blid2_tripm_pane_t1_ParamLimits

0x6c9b,	// (0x00072e3d) blid2_tripm_pane_t1

0x6cb6,	// (0x00072e58) blid2_tripm_pane_t2_ParamLimits

0x6cb6,	// (0x00072e58) blid2_tripm_pane_t2

0x6ccf,	// (0x00072e71) blid2_tripm_pane_t3_ParamLimits

0x6ccf,	// (0x00072e71) blid2_tripm_pane_t3

0x0003,

0xfb02,	// (0x0007bca4) blid2_tripm_pane_t_ParamLimits

0xfb02,	// (0x0007bca4) blid2_tripm_pane_t

0x6d16,	// (0x00072eb8) cell_blid2_satellite_pane_ParamLimits

0x6d16,	// (0x00072eb8) cell_blid2_satellite_pane

0x6d34,	// (0x00072ed6) cell_blid2_satellite_pane_g1

0xdc13,	// (0x00079db5) cell_blid2_satellite_pane_t1

0xcc1f,	// (0x00078dc1) blid2_speed_pane_g1

0xdc21,	// (0x00079dc3) blid2_speed_pane_t1

0xdc2f,	// (0x00079dd1) blid2_speed_pane_t2

0x0001,

0xfb0b,	// (0x0007bcad) blid2_speed_pane_t

0xcc1f,	// (0x00078dc1) blid2_navig_ring_pane_g1

0x6d3d,	// (0x00072edf) blid2_navig_ring_pane_g2

0x6d45,	// (0x00072ee7) blid2_navig_ring_pane_g3

0x6d4d,	// (0x00072eef) blid2_navig_ring_pane_g4

0x6d55,	// (0x00072ef7) blid2_navig_ring_pane_g5

0x0004,

0xfb10,	// (0x0007bcb2) blid2_navig_ring_pane_g

0x90f0,	// (0x00075292) bg_popup_window_pane_cp011

0xdc3d,	// (0x00079ddf) popup_blid2_search_window_g1

0xdc45,	// (0x00079de7) popup_blid2_search_window_t1

0xdc53,	// (0x00079df5) popup_blid2_search_window_t2

0x0001,

0xfb1b,	// (0x0007bcbd) popup_blid2_search_window_t

0xaab0,	// (0x00076c52) main_browser_pane_g1

0x9fe4,	// (0x00076186) main_browser_pane_ParamLimits

0x9158,	// (0x000752fa) bg_button_pane_cp011_ParamLimits

0x5ca5,	// (0x00071e47) cell_vitu2_function_pane_g1_ParamLimits

0xc809,	// (0x000789ab) bg_popup_sub_pane_cp22_ParamLimits

0x65e1,	// (0x00072783) input_focus_pane_cp08_ParamLimits

0x65f8,	// (0x0007279a) popup_vitu2_query_button_pane_ParamLimits

0x65f8,	// (0x0007279a) popup_vitu2_query_button_pane

0x6609,	// (0x000727ab) popup_vitu2_query_input_button_pane

0xd8eb,	// (0x00079a8d) popup_vitu2_query_window_g1_ParamLimits

0x6613,	// (0x000727b5) popup_vitu2_query_window_g2_ParamLimits

0xfa1c,	// (0x0007bbbe) popup_vitu2_query_window_g_ParamLimits

0x90f0,	// (0x00075292) bg_button_pane_cp026

0x6d5d,	// (0x00072eff) popup_vitu2_query_input_button_pane_g1

0x90f0,	// (0x00075292) bg_button_pane_cp025

0xdc61,	// (0x00079e03) popup_vitu2_query_button_pane_t1

0x428d,	// (0x0007042f) main_mp3_pane_t6

0x429b,	// (0x0007043d) popup_slider_window_cp01

0x9aa5,	// (0x00075c47) cam4_battery_pane

0x9afe,	// (0x00075ca0) cam4_battery_pane_cp02

0x9bf1,	// (0x00075d93) cam4_battery_pane_cp01

0x9bf1,	// (0x00075d93) cam4_battery_pane_cp03

0xd688,	// (0x0007982a) cam4_battery_pane_g1

0xcc1f,	// (0x00078dc1) cam4_battery_pane_g2

0x0001,

0xfb20,	// (0x0007bcc2) cam4_battery_pane_g

0xcadd,	// (0x00078c7f) popup_blid_sat_info2_window_t11

0xb21f,	// (0x000773c1) aid_size_touch_mv_arrow_left_ParamLimits

0xb24a,	// (0x000773ec) aid_size_touch_mv_arrow_right_ParamLimits

0xb2a8,	// (0x0007744a) navi_pane_g1_ParamLimits

0xb2b4,	// (0x00077456) navi_pane_g2_ParamLimits

0xb2e2,	// (0x00077484) navi_pane_g3_ParamLimits

0xf3ea,	// (0x0007b58c) navi_pane_g_ParamLimits

0x2695,	// (0x0006e837) navi_pane_mv_t1_ParamLimits

0x4ed2,	// (0x00071074) grid_imed_effect_pane_ParamLimits

0x12fc,	// (0x0006d49e) aid_placing_vt_slider_lsc

0xa9ff,	// (0x00076ba1) aid_placing_vt_slider_prt

0xa1ea,	// (0x0007638c) bg_tb_trans_pane_cp01_ParamLimits

0xcd9f,	// (0x00078f41) popup_image_details_window_g1_ParamLimits

0xcdb2,	// (0x00078f54) popup_image_details_window_g2_ParamLimits

0xcdc7,	// (0x00078f69) popup_image_details_window_g3_ParamLimits

0xcdc7,	// (0x00078f69) popup_image_details_window_g3

0xf71d,	// (0x0007b8bf) popup_image_details_window_g_ParamLimits

0xcddb,	// (0x00078f7d) popup_image_details_window_t1_ParamLimits

0xcded,	// (0x00078f8f) popup_image_details_window_t2_ParamLimits

0xce06,	// (0x00078fa8) popup_image_details_window_t3_ParamLimits

0xce1a,	// (0x00078fbc) popup_image_details_window_t4_ParamLimits

0xce35,	// (0x00078fd7) popup_image_details_window_t5_ParamLimits

0xf724,	// (0x0007b8c6) popup_image_details_window_t_ParamLimits

0x698b,	// (0x00072b2d) cl_header_name_pane_ParamLimits

0x698b,	// (0x00072b2d) cl_header_name_pane

0x6d65,	// (0x00072f07) cl_header_name_pane_t1_ParamLimits

0x6d65,	// (0x00072f07) cl_header_name_pane_t1

0x6d86,	// (0x00072f28) cl_header_name_pane_t2_ParamLimits

0x6d86,	// (0x00072f28) cl_header_name_pane_t2

0x6dc8,	// (0x00072f6a) cl_header_name_pane_t3_ParamLimits

0x6dc8,	// (0x00072f6a) cl_header_name_pane_t3

0x0002,

0xfb25,	// (0x0007bcc7) cl_header_name_pane_t_ParamLimits

0xfb25,	// (0x0007bcc7) cl_header_name_pane_t

0xb38b,	// (0x0007752d) navi_pane_mv_g2_ParamLimits

0xd630,	// (0x000797d2) field_vitu2_entry_pane_g1_ParamLimits

0xd63c,	// (0x000797de) field_vitu2_entry_pane_g2_ParamLimits

0xd648,	// (0x000797ea) field_vitu2_entry_pane_g3_ParamLimits

0xd648,	// (0x000797ea) field_vitu2_entry_pane_g3

0xf91b,	// (0x0007babd) field_vitu2_entry_pane_g_ParamLimits

0x5c1c,	// (0x00071dbe) cell_vitu2_itu_pane_g1_ParamLimits

0x5c2c,	// (0x00071dce) cell_vitu2_itu_pane_g2_ParamLimits

0x5c2c,	// (0x00071dce) cell_vitu2_itu_pane_g2

0x0001,

0xf927,	// (0x0007bac9) cell_vitu2_itu_pane_g_ParamLimits

0xf927,	// (0x0007bac9) cell_vitu2_itu_pane_g

0x9158,	// (0x000752fa) bg_vkb2_func_pane_cp05_ParamLimits

0x9158,	// (0x000752fa) bg_vkb2_func_pane_cp05

0x9158,	// (0x000752fa) bg_vkb2_func_pane_cp03

0x9158,	// (0x000752fa) bg_vkb2_func_pane_cp04

0x9158,	// (0x000752fa) bg_vkb2_func_pane_cp10_ParamLimits

0x9158,	// (0x000752fa) bg_vkb2_func_pane_cp10

0x692d,	// (0x00072acf) bg_vkb2_func_pane_cp08

0x6913,	// (0x00072ab5) bg_vkb2_func_pane_cp06

0x6921,	// (0x00072ac3) bg_vkb2_func_pane_cp07

0xdb6f,	// (0x00079d11) bg_vkb2_func_pane_cp11_ParamLimits

0xdb6f,	// (0x00079d11) bg_vkb2_func_pane_cp11

0xdb84,	// (0x00079d26) bg_vkb2_func_pane_cp12_ParamLimits

0xdb84,	// (0x00079d26) bg_vkb2_func_pane_cp12

0x90f0,	// (0x00075292) bg_vkb2_func_pane_cp09

0xd668,	// (0x0007980a) bg_vkb2_func_pane_g1

0xabc1,	// (0x00076d63) bg_vkb2_func_pane_g2

0xd670,	// (0x00079812) bg_vkb2_func_pane_g3

0xd678,	// (0x0007981a) bg_vkb2_func_pane_g4

0xd8b0,	// (0x00079a52) bg_vkb2_func_pane_g5

0xd6b4,	// (0x00079856) bg_vkb2_func_pane_g6

0xd6bc,	// (0x0007985e) bg_vkb2_func_pane_g7

0xd6ac,	// (0x0007984e) bg_vkb2_func_pane_g8

0xaba1,	// (0x00076d43) bg_vkb2_func_pane_g9

0x0008,

0xfb2c,	// (0x0007bcce) bg_vkb2_func_pane_g

0x6c89,	// (0x00072e2b) blid2_tripm_pane_g6_ParamLimits

0x6c89,	// (0x00072e2b) blid2_tripm_pane_g6

0xd4d2,	// (0x00079674) mp4_progress_pane_g1

0x6d02,	// (0x00072ea4) blid2_tripm_values_pane_ParamLimits

0x6d02,	// (0x00072ea4) blid2_tripm_values_pane

0x6df9,	// (0x00072f9b) blid2_tripm_values_pane_t1

0x6e07,	// (0x00072fa9) blid2_tripm_values_pane_t2

0x6e15,	// (0x00072fb7) blid2_tripm_values_pane_t3

0x6e23,	// (0x00072fc5) blid2_tripm_values_pane_t4

0x6e31,	// (0x00072fd3) blid2_tripm_values_pane_t5

0x6e3f,	// (0x00072fe1) blid2_tripm_values_pane_t6

0x6e4d,	// (0x00072fef) blid2_tripm_values_pane_t7

0x6e5b,	// (0x00072ffd) blid2_tripm_values_pane_t8

0x6e69,	// (0x0007300b) blid2_tripm_values_pane_t9

0x0008,

0xfb3f,	// (0x0007bce1) blid2_tripm_values_pane_t

0x133e,	// (0x0006d4e0) call_video_pane_t1_ParamLimits

0x135c,	// (0x0006d4fe) call_video_pane_t2_ParamLimits

0xf273,	// (0x0007b415) call_video_pane_t_ParamLimits

0x2b61,	// (0x0006ed03) msg_header_pane_g1_ParamLimits

0xb564,	// (0x00077706) msg_header_pane_g2_ParamLimits

0xb564,	// (0x00077706) msg_header_pane_g2

0x0001,

0xf48d,	// (0x0007b62f) msg_header_pane_g_ParamLimits

0xf48d,	// (0x0007b62f) msg_header_pane_g

0x9fe4,	// (0x00076186) main_clock2_pane_ParamLimits

0x4bc9,	// (0x00070d6b) grid_clock2_toolbar_pane_ParamLimits

0x4bc9,	// (0x00070d6b) grid_clock2_toolbar_pane

0x4bc9,	// (0x00070d6b) listscroll_clock2_pane_ParamLimits

0x4bc9,	// (0x00070d6b) listscroll_clock2_pane

0x4cc4,	// (0x00070e66) main_clock2_pane_t3_ParamLimits

0x4cc4,	// (0x00070e66) main_clock2_pane_t3

0x4ce8,	// (0x00070e8a) main_clock2_pane_t4_ParamLimits

0x4ce8,	// (0x00070e8a) main_clock2_pane_t4

0xdc6f,	// (0x00079e11) cell_clock2_toolbar_pane

0xdc77,	// (0x00079e19) cell_clock2_toolbar_pane_cp01

0xdc77,	// (0x00079e19) cell_clock2_toolbar_pane_cp02

0xdc7f,	// (0x00079e21) cell_clock2_toolbar_pane_cp03

0xdc87,	// (0x00079e29) list_clock2_pane

0xb195,	// (0x00077337) scroll_pane_cp10

0xdc8f,	// (0x00079e31) list_single_clock2_pane_ParamLimits

0xdc8f,	// (0x00079e31) list_single_clock2_pane

0xb3f2,	// (0x00077594) list_highlight_pane_cp08

0xdc9c,	// (0x00079e3e) list_single_clock2_pane_t1

0xdcaa,	// (0x00079e4c) list_single_clock2_pane_t2

0x0001,

0xfb52,	// (0x0007bcf4) list_single_clock2_pane_t

0x90f0,	// (0x00075292) bg_button_pane_cp10

0xdcb8,	// (0x00079e5a) cell_clock2_toolbar_pane_g1

0x2b6f,	// (0x0006ed11) aid_main_viewer_pane_g1_ParamLimits

0x2b6f,	// (0x0006ed11) aid_main_viewer_pane_g1

0x2b7d,	// (0x0006ed1f) aid_main_viewer_pane_g2_ParamLimits

0x2b7d,	// (0x0006ed1f) aid_main_viewer_pane_g2

0x2b8b,	// (0x0006ed2d) aid_main_viewer_pane_g3_ParamLimits

0x2b8b,	// (0x0006ed2d) aid_main_viewer_pane_g3

0x2b9a,	// (0x0006ed3c) aid_main_viewer_pane_g4_ParamLimits

0x2b9a,	// (0x0006ed3c) aid_main_viewer_pane_g4

0x0003,

0xf49e,	// (0x0007b640) aid_main_viewer_pane_g_ParamLimits

0xf49e,	// (0x0007b640) aid_main_viewer_pane_g

0x34a8,	// (0x0006f64a) main_calc_pane_ParamLimits

0x34ce,	// (0x0006f670) main_dialer2_pane_ParamLimits

0x9166,	// (0x00075308) main_cam6_pane

0x9166,	// (0x00075308) main_vid6_pane

0x4bd5,	// (0x00070d77) listscroll_gen_pane_cp06_ParamLimits

0x4bd5,	// (0x00070d77) listscroll_gen_pane_cp06

0x4d0b,	// (0x00070ead) main_clock2_pane_t5_ParamLimits

0x4d0b,	// (0x00070ead) main_clock2_pane_t5

0x4d67,	// (0x00070f09) aid_call2_pane_cp10_ParamLimits

0x4d79,	// (0x00070f1b) aid_call_pane_cp10_ParamLimits

0xb213,	// (0x000773b5) popup_clock_analogue_window_cp10_g1_ParamLimits

0xb213,	// (0x000773b5) popup_clock_analogue_window_cp10_g2_ParamLimits

0x4d8b,	// (0x00070f2d) popup_clock_analogue_window_cp10_g3_ParamLimits

0x4d8b,	// (0x00070f2d) popup_clock_analogue_window_cp10_g4_ParamLimits

0xb213,	// (0x000773b5) popup_clock_analogue_window_cp10_g5_ParamLimits

0xf7d4,	// (0x0007b976) popup_clock_analogue_window_cp10_g_ParamLimits

0x4d9d,	// (0x00070f3f) popup_clock_analogue_window_cp10_t1_ParamLimits

0x542d,	// (0x000715cf) cell_dialer2_keypad_pane_g2_ParamLimits

0x542d,	// (0x000715cf) cell_dialer2_keypad_pane_g2

0x0001,

0xf8ba,	// (0x0007ba5c) cell_dialer2_keypad_pane_g_ParamLimits

0xf8ba,	// (0x0007ba5c) cell_dialer2_keypad_pane_g

0x5449,	// (0x000715eb) cell_dialer2_keypad_pane_t1

0x5fbb,	// (0x0007215d) main_cset_text2_pane_ParamLimits

0x5fbb,	// (0x0007215d) main_cset_text2_pane

0xdad7,	// (0x00079c79) area_vitu2_query_pane_g1_ParamLimits

0x68b2,	// (0x00072a54) area_vitu2_query_pane_g2_ParamLimits

0xfa6f,	// (0x0007bc11) area_vitu2_query_pane_g_ParamLimits

0xa348,	// (0x000764ea) area_vitu2_query_pane_t7_ParamLimits

0xa348,	// (0x000764ea) area_vitu2_query_pane_t7

0x6913,	// (0x00072ab5) bg_button_pane_cp018_ParamLimits

0x6921,	// (0x00072ac3) bg_button_pane_cp021_ParamLimits

0x692d,	// (0x00072acf) bg_button_pane_cp022_ParamLimits

0x692d,	// (0x00072acf) bg_vkb2_func_pane_cp08_ParamLimits

0x6913,	// (0x00072ab5) bg_vkb2_func_pane_cp06_ParamLimits

0x6921,	// (0x00072ac3) bg_vkb2_func_pane_cp07_ParamLimits

0x693e,	// (0x00072ae0) input_focus_pane_cp09_ParamLimits

0x9c68,	// (0x00075e0a) cam6_autofocus_pane_ParamLimits

0x9c68,	// (0x00075e0a) cam6_autofocus_pane

0x6e77,	// (0x00073019) cam6_image_uncrop_pane_ParamLimits

0x6e77,	// (0x00073019) cam6_image_uncrop_pane

0x6e86,	// (0x00073028) cam6_indi_pane_ParamLimits

0x6e86,	// (0x00073028) cam6_indi_pane

0x6e9c,	// (0x0007303e) cam6_mode_pane_ParamLimits

0x6e9c,	// (0x0007303e) cam6_mode_pane

0x6eae,	// (0x00073050) cam6_timer_pane_ParamLimits

0x6eae,	// (0x00073050) cam6_timer_pane

0x6eba,	// (0x0007305c) cam6_zoom_pane_ParamLimits

0x6eba,	// (0x0007305c) cam6_zoom_pane

0x6ec6,	// (0x00073068) cam6_mode_pane_g1_ParamLimits

0x6ec6,	// (0x00073068) cam6_mode_pane_g1

0x6ed6,	// (0x00073078) cam6_mode_pane_g2_ParamLimits

0x6ed6,	// (0x00073078) cam6_mode_pane_g2

0x6ee6,	// (0x00073088) cam6_mode_pane_g3_ParamLimits

0x6ee6,	// (0x00073088) cam6_mode_pane_g3

0x6ef6,	// (0x00073098) cam6_mode_pane_g4_ParamLimits

0x6ef6,	// (0x00073098) cam6_mode_pane_g4

0x0003,

0xfb57,	// (0x0007bcf9) cam6_mode_pane_g_ParamLimits

0xfb57,	// (0x0007bcf9) cam6_mode_pane_g

0xdcc0,	// (0x00079e62) bg_tb_trans_pane_cp08_ParamLimits

0xdcc0,	// (0x00079e62) bg_tb_trans_pane_cp08

0xdcce,	// (0x00079e70) cam6_battery_pane_ParamLimits

0xdcce,	// (0x00079e70) cam6_battery_pane

0xdce4,	// (0x00079e86) cam6_indi_pane_g1_ParamLimits

0xdce4,	// (0x00079e86) cam6_indi_pane_g1

0xdcf6,	// (0x00079e98) cam6_indi_pane_g2_ParamLimits

0xdcf6,	// (0x00079e98) cam6_indi_pane_g2

0xdd08,	// (0x00079eaa) cam6_indi_pane_g3_ParamLimits

0xdd08,	// (0x00079eaa) cam6_indi_pane_g3

0x0002,

0xfb60,	// (0x0007bd02) cam6_indi_pane_g_ParamLimits

0xfb60,	// (0x0007bd02) cam6_indi_pane_g

0xdd1a,	// (0x00079ebc) cam6_indi_pane_t1_ParamLimits

0xdd1a,	// (0x00079ebc) cam6_indi_pane_t1

0x6f06,	// (0x000730a8) cam6_autofocus_pane_g1

0x6f0e,	// (0x000730b0) cam6_autofocus_pane_g2

0x6f16,	// (0x000730b8) cam6_autofocus_pane_g3

0x6f1e,	// (0x000730c0) cam6_autofocus_pane_g4

0x0003,

0xfb67,	// (0x0007bd09) cam6_autofocus_pane_g

0xdd40,	// (0x00079ee2) cam6_timer_pane_g1

0xdd48,	// (0x00079eea) cam6_timer_pane_t1

0xdd56,	// (0x00079ef8) cam6_zoom_cont_pane

0xdd5e,	// (0x00079f00) cam6_zoom_pane_g1

0xdd66,	// (0x00079f08) cam6_zoom_pane_g2

0x6f26,	// (0x000730c8) cam6_zoom_pane_g3

0x0002,

0xfb70,	// (0x0007bd12) cam6_zoom_pane_g

0xcc1f,	// (0x00078dc1) cam6_battery_pane_g1

0xcc1f,	// (0x00078dc1) cam6_battery_pane_g2

0x0001,

0xf6e1,	// (0x0007b883) cam6_battery_pane_g

0xdd6e,	// (0x00079f10) cam6_zoom_cont_pane_g1

0xdd77,	// (0x00079f19) cam6_zoom_cont_pane_g2

0xdd80,	// (0x00079f22) cam6_zoom_cont_pane_g3

0x0002,

0xfb77,	// (0x0007bd19) cam6_zoom_cont_pane_g

0x6f43,	// (0x000730e5) cam6_mode_pane_cp_ParamLimits

0x6f43,	// (0x000730e5) cam6_mode_pane_cp

0x6f55,	// (0x000730f7) cam6_zoom_pane_cp_ParamLimits

0x6f55,	// (0x000730f7) cam6_zoom_pane_cp

0x6f61,	// (0x00073103) vid6_image_uncrop_cif_pane_ParamLimits

0x6f61,	// (0x00073103) vid6_image_uncrop_cif_pane

0x6f71,	// (0x00073113) vid6_image_uncrop_nhd_pane_ParamLimits

0x6f71,	// (0x00073113) vid6_image_uncrop_nhd_pane

0x6f80,	// (0x00073122) vid6_image_uncrop_vga_pane_ParamLimits

0x6f80,	// (0x00073122) vid6_image_uncrop_vga_pane

0x6f8f,	// (0x00073131) vid6_image_uncrop_wvga_pane_ParamLimits

0x6f8f,	// (0x00073131) vid6_image_uncrop_wvga_pane

0x6f9e,	// (0x00073140) vid6_indi_pane_ParamLimits

0x6f9e,	// (0x00073140) vid6_indi_pane

0xdcc0,	// (0x00079e62) bg_tb_trans_pane_cp09_ParamLimits

0xdcc0,	// (0x00079e62) bg_tb_trans_pane_cp09

0xdd98,	// (0x00079f3a) cam6_battery_pane_cp_ParamLimits

0xdd98,	// (0x00079f3a) cam6_battery_pane_cp

0xdda4,	// (0x00079f46) vid6_indi_pane_g1_ParamLimits

0xdda4,	// (0x00079f46) vid6_indi_pane_g1

0xddb6,	// (0x00079f58) vid6_indi_pane_g2_ParamLimits

0xddb6,	// (0x00079f58) vid6_indi_pane_g2

0xddc8,	// (0x00079f6a) vid6_indi_pane_g3_ParamLimits

0xddc8,	// (0x00079f6a) vid6_indi_pane_g3

0xdddd,	// (0x00079f7f) vid6_indi_pane_g4_ParamLimits

0xdddd,	// (0x00079f7f) vid6_indi_pane_g4

0xddf2,	// (0x00079f94) vid6_indi_pane_g5_ParamLimits

0xddf2,	// (0x00079f94) vid6_indi_pane_g5

0x0004,

0xfb7e,	// (0x0007bd20) vid6_indi_pane_g_ParamLimits

0xfb7e,	// (0x0007bd20) vid6_indi_pane_g

0xde0c,	// (0x00079fae) vid6_indi_pane_t1_ParamLimits

0xde0c,	// (0x00079fae) vid6_indi_pane_t1

0xde22,	// (0x00079fc4) vid6_indi_pane_t2_ParamLimits

0xde22,	// (0x00079fc4) vid6_indi_pane_t2

0xde4a,	// (0x00079fec) vid6_indi_pane_t3_ParamLimits

0xde4a,	// (0x00079fec) vid6_indi_pane_t3

0xde72,	// (0x0007a014) vid6_indi_pane_t4_ParamLimits

0xde72,	// (0x0007a014) vid6_indi_pane_t4

0x0003,

0xfb89,	// (0x0007bd2b) vid6_indi_pane_t_ParamLimits

0xfb89,	// (0x0007bd2b) vid6_indi_pane_t

0xde96,	// (0x0007a038) wait_bar_pane_cp08

0x6fb6,	// (0x00073158) main_cset_text2_pane_t1_ParamLimits

0x6fb6,	// (0x00073158) main_cset_text2_pane_t1

0x6f2e,	// (0x000730d0) listscroll_gen_pane_cp06_t1_ParamLimits

0x6f2e,	// (0x000730d0) listscroll_gen_pane_cp06_t1

0x9166,	// (0x00075308) main_cam6_set_pane

0x9a97,	// (0x00075c39) bg_tb_trans_pane_cp06_ParamLimits

0x9aad,	// (0x00075c4f) cam4_indicators_pane_g1_ParamLimits

0x9abe,	// (0x00075c60) cam4_indicators_pane_g2_ParamLimits

0xf8f7,	// (0x0007ba99) cam4_indicators_pane_g_ParamLimits

0x9adc,	// (0x00075c7e) cam4_indicators_pane_t1_ParamLimits

0x9158,	// (0x000752fa) bg_tb_trans_pane_cp07_ParamLimits

0x9b06,	// (0x00075ca8) vid4_indicators_pane_g1_ParamLimits

0x9b1a,	// (0x00075cbc) vid4_indicators_pane_g2_ParamLimits

0x9b2e,	// (0x00075cd0) vid4_indicators_pane_g3_ParamLimits

0x9b3f,	// (0x00075ce1) vid4_indicators_pane_g4_ParamLimits

0xf909,	// (0x0007baab) vid4_indicators_pane_g_ParamLimits

0x9b5b,	// (0x00075cfd) vid4_indicators_pane_t1_ParamLimits

0x6a7e,	// (0x00072c20) vid4_progress_pane_g1_ParamLimits

0x6a90,	// (0x00072c32) vid4_progress_pane_g2_ParamLimits

0xae8a,	// (0x0007702c) vid4_progress_pane_g3_ParamLimits

0x9bf9,	// (0x00075d9b) vid4_progress_pane_g4_ParamLimits

0xfaba,	// (0x0007bc5c) vid4_progress_pane_g_ParamLimits

0x9c17,	// (0x00075db9) vid4_progress_pane_t1_ParamLimits

0x9c2c,	// (0x00075dce) vid4_progress_pane_t2_ParamLimits

0x9c42,	// (0x00075de4) vid4_progress_pane_t3_ParamLimits

0xfac5,	// (0x0007bc67) vid4_progress_pane_t_ParamLimits

0x9c58,	// (0x00075dfa) wait_bar_pane_cp07_ParamLimits

0x6fd5,	// (0x00073177) main_cam6_set_pane_g2_ParamLimits

0x6fd5,	// (0x00073177) main_cam6_set_pane_g2

0x6ff9,	// (0x0007319b) main_cset6_listscroll_pane_ParamLimits

0x6ff9,	// (0x0007319b) main_cset6_listscroll_pane

0x7015,	// (0x000731b7) main_cset6_slider_pane_ParamLimits

0x7015,	// (0x000731b7) main_cset6_slider_pane

0x702b,	// (0x000731cd) main_cset6_text2_pane_ParamLimits

0x702b,	// (0x000731cd) main_cset6_text2_pane

0xdea5,	// (0x0007a047) main_cset6_text_pane

0xdead,	// (0x0007a04f) main_cset_list_pane_copy1_ParamLimits

0xdead,	// (0x0007a04f) main_cset_list_pane_copy1

0xdebd,	// (0x0007a05f) scroll_pane_cp028_copy1

0x7039,	// (0x000731db) cset_list_set_pane_copy1

0x704b,	// (0x000731ed) aid_position_infowindow_above_copy1

0x7053,	// (0x000731f5) aid_position_infowindow_below_copy1

0x705b,	// (0x000731fd) cset_list_set_pane_g1_copy1

0x7063,	// (0x00073205) cset_list_set_pane_g3_copy1_ParamLimits

0x7063,	// (0x00073205) cset_list_set_pane_g3_copy1

0x7072,	// (0x00073214) cset_list_set_pane_t1_copy1_ParamLimits

0x7072,	// (0x00073214) cset_list_set_pane_t1_copy1

0xa1ea,	// (0x0007638c) list_highlight_pane_cp021_copy1_ParamLimits

0xa1ea,	// (0x0007638c) list_highlight_pane_cp021_copy1

0xdec6,	// (0x0007a068) cset6_slider_pane_ParamLimits

0xdec6,	// (0x0007a068) cset6_slider_pane

0xdef2,	// (0x0007a094) main_cset6_slider_pane_g1_ParamLimits

0xdef2,	// (0x0007a094) main_cset6_slider_pane_g1

0x7087,	// (0x00073229) main_cset6_slider_pane_g2_ParamLimits

0x7087,	// (0x00073229) main_cset6_slider_pane_g2

0xdf1a,	// (0x0007a0bc) main_cset6_slider_pane_g3_ParamLimits

0xdf1a,	// (0x0007a0bc) main_cset6_slider_pane_g3

0x70af,	// (0x00073251) main_cset6_slider_pane_g4_ParamLimits

0x70af,	// (0x00073251) main_cset6_slider_pane_g4

0x70bb,	// (0x0007325d) main_cset6_slider_pane_g5_ParamLimits

0x70bb,	// (0x0007325d) main_cset6_slider_pane_g5

0xd7bb,	// (0x0007995d) main_cset6_slider_pane_g7_ParamLimits

0xd7bb,	// (0x0007995d) main_cset6_slider_pane_g7

0xd7c7,	// (0x00079969) main_cset6_slider_pane_g8_ParamLimits

0xd7c7,	// (0x00079969) main_cset6_slider_pane_g8

0x6068,	// (0x0007220a) main_cset6_slider_pane_g9_ParamLimits

0x6068,	// (0x0007220a) main_cset6_slider_pane_g9

0x6074,	// (0x00072216) main_cset6_slider_pane_g10_ParamLimits

0x6074,	// (0x00072216) main_cset6_slider_pane_g10

0x6080,	// (0x00072222) main_cset6_slider_pane_g11_ParamLimits

0x6080,	// (0x00072222) main_cset6_slider_pane_g11

0x608c,	// (0x0007222e) main_cset6_slider_pane_g12_ParamLimits

0x608c,	// (0x0007222e) main_cset6_slider_pane_g12

0x6098,	// (0x0007223a) main_cset6_slider_pane_g13_ParamLimits

0x6098,	// (0x0007223a) main_cset6_slider_pane_g13

0x60a4,	// (0x00072246) main_cset6_slider_pane_g14_ParamLimits

0x60a4,	// (0x00072246) main_cset6_slider_pane_g14

0x70c7,	// (0x00073269) main_cset6_slider_pane_g15_ParamLimits

0x70c7,	// (0x00073269) main_cset6_slider_pane_g15

0x60c8,	// (0x0007226a) main_cset6_slider_pane_g16_ParamLimits

0x60c8,	// (0x0007226a) main_cset6_slider_pane_g16

0x60d4,	// (0x00072276) main_cset6_slider_pane_g17_ParamLimits

0x60d4,	// (0x00072276) main_cset6_slider_pane_g17

0x0011,

0xfb92,	// (0x0007bd34) main_cset6_slider_pane_g_ParamLimits

0xfb92,	// (0x0007bd34) main_cset6_slider_pane_g

0xdf26,	// (0x0007a0c8) main_cset6_slider_pane_t1_ParamLimits

0xdf26,	// (0x0007a0c8) main_cset6_slider_pane_t1

0x70f7,	// (0x00073299) main_cset6_slider_pane_t2_ParamLimits

0x70f7,	// (0x00073299) main_cset6_slider_pane_t2

0x7122,	// (0x000732c4) main_cset6_slider_pane_t3_ParamLimits

0x7122,	// (0x000732c4) main_cset6_slider_pane_t3

0x714d,	// (0x000732ef) main_cset6_slider_pane_t4_ParamLimits

0x714d,	// (0x000732ef) main_cset6_slider_pane_t4

0x7178,	// (0x0007331a) main_cset6_slider_pane_t5_ParamLimits

0x7178,	// (0x0007331a) main_cset6_slider_pane_t5

0xdf67,	// (0x0007a109) main_cset6_slider_pane_t7_ParamLimits

0xdf67,	// (0x0007a109) main_cset6_slider_pane_t7

0x71a3,	// (0x00073345) main_cset6_slider_pane_t8_ParamLimits

0x71a3,	// (0x00073345) main_cset6_slider_pane_t8

0x71c7,	// (0x00073369) main_cset6_slider_pane_t9_ParamLimits

0x71c7,	// (0x00073369) main_cset6_slider_pane_t9

0x71eb,	// (0x0007338d) main_cset6_slider_pane_t10_ParamLimits

0x71eb,	// (0x0007338d) main_cset6_slider_pane_t10

0x720f,	// (0x000733b1) main_cset6_slider_pane_t11_ParamLimits

0x720f,	// (0x000733b1) main_cset6_slider_pane_t11

0xdf9d,	// (0x0007a13f) main_cset6_slider_pane_t14_ParamLimits

0xdf9d,	// (0x0007a13f) main_cset6_slider_pane_t14

0xdfd6,	// (0x0007a178) main_cset6_slider_pane_t15_ParamLimits

0xdfd6,	// (0x0007a178) main_cset6_slider_pane_t15

0x000b,

0xfbb7,	// (0x0007bd59) main_cset6_slider_pane_t_ParamLimits

0xfbb7,	// (0x0007bd59) main_cset6_slider_pane_t

0xe00f,	// (0x0007a1b1) cset_slider_pane_g1_copy1

0xe018,	// (0x0007a1ba) cset_slider_pane_g2_copy1

0xe021,	// (0x0007a1c3) cset_slider_pane_g3_copy1

0x90f0,	// (0x00075292) bg_popup_sub_pane_cp011_copy1

0xe02a,	// (0x0007a1cc) main_cset_text_pane_g1_copy1

0xd8ff,	// (0x00079aa1) main_cset_text_pane_t1_copy1

0xd90d,	// (0x00079aaf) main_cset_text_pane_t2_copy1

0xd91b,	// (0x00079abd) main_cset_text_pane_t3_copy1

0xd929,	// (0x00079acb) main_cset_text_pane_t4_copy1

0xd937,	// (0x00079ad9) main_cset_text_pane_t5_copy1

0xe032,	// (0x0007a1d4) main_cset_text_pane_t6_copy1

0xe040,	// (0x0007a1e2) main_cset_text_pane_t7_copy1

0x72a8,	// (0x0007344a) main_cset_text2_pane_t1_copy1

0x9158,	// (0x000752fa) main_ncimui_pane

0x370a,	// (0x0006f8ac) popup_query_ncimui_window_ParamLimits

0x370a,	// (0x0006f8ac) popup_query_ncimui_window

0xa234,	// (0x000763d6) field_cale_ev2_pane_g4_ParamLimits

0xa234,	// (0x000763d6) field_cale_ev2_pane_g4

0x5309,	// (0x000714ab) cell_video_dialer_keypad_pane_g2_ParamLimits

0x5309,	// (0x000714ab) cell_video_dialer_keypad_pane_g2

0x0001,

0xf895,	// (0x0007ba37) cell_video_dialer_keypad_pane_g_ParamLimits

0xf895,	// (0x0007ba37) cell_video_dialer_keypad_pane_g

0x5321,	// (0x000714c3) cell_video_dialer_keypad_pane_t1

0x90f0,	// (0x00075292) bg_popup_window_pane_cp012

0xb056,	// (0x000771f8) heading_pane_cp06

0xe06c,	// (0x0007a20e) ncim_query_content_pane

0x90f0,	// (0x00075292) bg_popup_heading_pane_cp01

0xe074,	// (0x0007a216) ncim_heading_pane_t1

0xe082,	// (0x0007a224) ncim_indicator_popup_pane

0xe094,	// (0x0007a236) ncim_query_button_pane

0xe0a8,	// (0x0007a24a) ncim_query_content_pane_t1

0xe0ba,	// (0x0007a25c) ncim_query_content_pane_t2

0x0005,

0xfbfb,	// (0x0007bd9d) ncim_query_content_pane_t

0xe0f4,	// (0x0007a296) ncim_query_list_pane

0xe106,	// (0x0007a2a8) ncim_query_popup_pane

0xe082,	// (0x0007a224) ncim_indicator_popup_pane_ParamLimits

0x73ec,	// (0x0007358e) ncim_query_content_pane_g1_ParamLimits

0x73ec,	// (0x0007358e) ncim_query_content_pane_g1

0xe0a8,	// (0x0007a24a) ncim_query_content_pane_t1_ParamLimits

0xe0ba,	// (0x0007a25c) ncim_query_content_pane_t2_ParamLimits

0x73f8,	// (0x0007359a) ncim_query_content_pane_t3_ParamLimits

0x73f8,	// (0x0007359a) ncim_query_content_pane_t3

0x7420,	// (0x000735c2) ncim_query_content_pane_t4_ParamLimits

0x7420,	// (0x000735c2) ncim_query_content_pane_t4

0x7448,	// (0x000735ea) ncim_query_content_pane_t5_ParamLimits

0x7448,	// (0x000735ea) ncim_query_content_pane_t5

0xe0cc,	// (0x0007a26e) ncim_query_content_pane_t6_ParamLimits

0xe0cc,	// (0x0007a26e) ncim_query_content_pane_t6

0xfbfb,	// (0x0007bd9d) ncim_query_content_pane_t_ParamLimits

0xe0f4,	// (0x0007a296) ncim_query_list_pane_ParamLimits

0xe106,	// (0x0007a2a8) ncim_query_popup_pane_ParamLimits

0xe11a,	// (0x0007a2bc) wait_bar_pane_cp04

0x90f0,	// (0x00075292) input_focus_pane_cp011

0xe122,	// (0x0007a2c4) ncim_query_popup_pane_t1

0xe130,	// (0x0007a2d2) ncim_list_query_list_pane_ParamLimits

0xe130,	// (0x0007a2d2) ncim_list_query_list_pane

0x90f0,	// (0x00075292) bg_button_pane_cp027

0xe143,	// (0x0007a2e5) ncim_query_button_pane_g1

0x90f0,	// (0x00075292) list_highlight_pane_cp012

0xe14d,	// (0x0007a2ef) ncim_list_query_list_pane_g1

0xe155,	// (0x0007a2f7) ncim_list_query_list_pane_t1

0x9acd,	// (0x00075c6f) cam4_indicators_pane_g3_ParamLimits

0x9acd,	// (0x00075c6f) cam4_indicators_pane_g3

0x9b4b,	// (0x00075ced) vid4_indicators_pane_g5_ParamLimits

0x9b4b,	// (0x00075ced) vid4_indicators_pane_g5

0x9c08,	// (0x00075daa) vid4_progress_pane_g5_ParamLimits

0x9c08,	// (0x00075daa) vid4_progress_pane_g5

0x72da,	// (0x0007347c) main_ncimui_pane_g1

0x7340,	// (0x000734e2) ncimui_group_query_pane_ParamLimits

0x7340,	// (0x000734e2) ncimui_group_query_pane

0x7388,	// (0x0007352a) ncimui_list_pane_ParamLimits

0x7388,	// (0x0007352a) ncimui_list_pane

0x73af,	// (0x00073551) ncimui_text_pane_ParamLimits

0x73af,	// (0x00073551) ncimui_text_pane

0x7470,	// (0x00073612) ncimui_text_pane_t1_ParamLimits

0x7470,	// (0x00073612) ncimui_text_pane_t1

0xe163,	// (0x0007a305) ncimui_list_single_graphic_pane_ParamLimits

0xe163,	// (0x0007a305) ncimui_list_single_graphic_pane

0x748e,	// (0x00073630) ncimui_query_pane_ParamLimits

0x748e,	// (0x00073630) ncimui_query_pane

0x90f0,	// (0x00075292) list_highlight_pane_cp013

0xe173,	// (0x0007a315) ncim_list_query_list_pane_t1_copy1

0xe14d,	// (0x0007a2ef) ncim_list_single_graphic_pane_g1

0xe181,	// (0x0007a323) ncim_query_button_pane_cp01

0xe18d,	// (0x0007a32f) ncim_query_entry_pane_ParamLimits

0xe18d,	// (0x0007a32f) ncim_query_entry_pane

0xe1a0,	// (0x0007a342) ncimui_query_pane_g1

0xe1ac,	// (0x0007a34e) ncimui_query_pane_t1_ParamLimits

0xe1ac,	// (0x0007a34e) ncimui_query_pane_t1

0xa1ea,	// (0x0007638c) input_focus_pane_cp012

0xe1c5,	// (0x0007a367) ncim_query_entry_pane_t1

0x9fe4,	// (0x00076186) main_im_pane_ParamLimits

0x9158,	// (0x000752fa) main_mobtv_pane_ParamLimits

0x9158,	// (0x000752fa) main_mobtv_pane

0x70df,	// (0x00073281) main_cset6_slider_pane_g18_ParamLimits

0x70df,	// (0x00073281) main_cset6_slider_pane_g18

0x70eb,	// (0x0007328d) main_cset6_slider_pane_g19_ParamLimits

0x70eb,	// (0x0007328d) main_cset6_slider_pane_g19

0x74a1,	// (0x00073643) bg_main_mobtv_pane_ParamLimits

0x74a1,	// (0x00073643) bg_main_mobtv_pane

0x74af,	// (0x00073651) main_mobtv_info_pane

0x74b8,	// (0x0007365a) main_mobtv_loading_pane_ParamLimits

0x74b8,	// (0x0007365a) main_mobtv_loading_pane

0xe1d7,	// (0x0007a379) main_mobtv_pg_channel_list_pane

0xe1e1,	// (0x0007a383) main_mobtv_pg_hdr_pane

0x74c5,	// (0x00073667) main_mobtv_programe_curr_pane_ParamLimits

0x74c5,	// (0x00073667) main_mobtv_programe_curr_pane

0x74d2,	// (0x00073674) main_mobtv_programe_next_pane_ParamLimits

0x74d2,	// (0x00073674) main_mobtv_programe_next_pane

0xe1f3,	// (0x0007a395) popup_mobtv_noti_window

0xcc1f,	// (0x00078dc1) main_tv_pg_hdr_pane_g1

0xe1fb,	// (0x0007a39d) main_tv_pg_hdr_pane_g2

0xe203,	// (0x0007a3a5) main_tv_pg_hdr_pane_g3

0xe20b,	// (0x0007a3ad) main_tv_pg_hdr_pane_g4

0xe213,	// (0x0007a3b5) main_tv_pg_hdr_pane_g5

0xe21d,	// (0x0007a3bf) main_tv_pg_hdr_pane_g6

0xe227,	// (0x0007a3c9) main_tv_pg_hdr_pane_g7

0xe231,	// (0x0007a3d3) main_tv_pg_hdr_pane_g8

0xe23b,	// (0x0007a3dd) main_tv_pg_hdr_pane_g9

0xe245,	// (0x0007a3e7) main_tv_pg_hdr_pane_g10

0xe24f,	// (0x0007a3f1) main_tv_pg_hdr_pane_g11

0x000a,

0xfc08,	// (0x0007bdaa) main_tv_pg_hdr_pane_g

0xe259,	// (0x0007a3fb) main_tv_pg_hdr_pane_t1

0xe267,	// (0x0007a409) main_tv_pg_hdr_pane_t2

0xe275,	// (0x0007a417) main_tv_pg_hdr_pane_t3

0xe285,	// (0x0007a427) main_tv_pg_hdr_pane_t4

0xe295,	// (0x0007a437) main_tv_pg_hdr_pane_t5

0x0004,

0xfc1f,	// (0x0007bdc1) main_tv_pg_hdr_pane_t

0xe2a5,	// (0x0007a447) single_mobtv_pg_channel_pane_ParamLimits

0xe2a5,	// (0x0007a447) single_mobtv_pg_channel_pane

0xe2b7,	// (0x0007a459) single_mobtv_pg_channel_table_pane

0xe2c0,	// (0x0007a462) single_mobtv_pg_channel_thumb_pane

0xe2c9,	// (0x0007a46b) single_tv_pg_channel_pane_g1

0xe2d2,	// (0x0007a474) single_tv_pg_channel_pane_g2

0x0001,

0xfc2a,	// (0x0007bdcc) single_tv_pg_channel_pane_g

0xce7f,	// (0x00079021) bg_single_mobtv_pg_channel_thumb_pane_ParamLimits

0xce7f,	// (0x00079021) bg_single_mobtv_pg_channel_thumb_pane

0xe2db,	// (0x0007a47d) single_mobtv_pg_channel_thumb_pane_g1_ParamLimits

0xe2db,	// (0x0007a47d) single_mobtv_pg_channel_thumb_pane_g1

0xe2e9,	// (0x0007a48b) single_mobtv_pg_channel_thumb_pane_g2_ParamLimits

0xe2e9,	// (0x0007a48b) single_mobtv_pg_channel_thumb_pane_g2

0xe2f5,	// (0x0007a497) single_mobtv_pg_channel_thumb_pane_g3_ParamLimits

0xe2f5,	// (0x0007a497) single_mobtv_pg_channel_thumb_pane_g3

0x0002,

0xfc2f,	// (0x0007bdd1) single_mobtv_pg_channel_thumb_pane_g_ParamLimits

0xfc2f,	// (0x0007bdd1) single_mobtv_pg_channel_thumb_pane_g

0xe301,	// (0x0007a4a3) single_mobtv_pg_channel_thumb_pane_t1

0xe30f,	// (0x0007a4b1) single_mobtv_pg_channel_thumb_pane_t2

0x0001,

0xfc36,	// (0x0007bdd8) single_mobtv_pg_channel_thumb_pane_t

0xcc1f,	// (0x00078dc1) bg_single_mobtv_pg_channel_table_pane_g1

0xcc1f,	// (0x00078dc1) bg_single_mobtv_pg_channel_table_pane_g2

0x0001,

0xf6e1,	// (0x0007b883) bg_single_mobtv_pg_channel_table_pane_g

0xe31d,	// (0x0007a4bf) single_mobtv_pg_channel_table_pane_t1

0xe32b,	// (0x0007a4cd) single_mobtv_pg_channel_table_pane_t2

0x0001,

0xfc3b,	// (0x0007bddd) single_mobtv_pg_channel_table_pane_t

0x74e7,	// (0x00073689) main_mobtv_info_pane_g1_ParamLimits

0x74e7,	// (0x00073689) main_mobtv_info_pane_g1

0x7505,	// (0x000736a7) main_mobtv_info_pane_t1_ParamLimits

0x7505,	// (0x000736a7) main_mobtv_info_pane_t1

0x757d,	// (0x0007371f) main_mobtv_info_pane_t2_ParamLimits

0x757d,	// (0x0007371f) main_mobtv_info_pane_t2

0x0002,

0xfc45,	// (0x0007bde7) main_mobtv_info_pane_t_ParamLimits

0xfc45,	// (0x0007bde7) main_mobtv_info_pane_t

0x760c,	// (0x000737ae) wait_bar_pane_cp05

0x761e,	// (0x000737c0) main_mobtv_loading_pane_g1_ParamLimits

0x761e,	// (0x000737c0) main_mobtv_loading_pane_g1

0x7631,	// (0x000737d3) main_mobtv_loading_pane_g2_ParamLimits

0x7631,	// (0x000737d3) main_mobtv_loading_pane_g2

0x763d,	// (0x000737df) main_mobtv_loading_pane_g3_ParamLimits

0x763d,	// (0x000737df) main_mobtv_loading_pane_g3

0x0002,

0xfc4c,	// (0x0007bdee) main_mobtv_loading_pane_g_ParamLimits

0xfc4c,	// (0x0007bdee) main_mobtv_loading_pane_g

0xe339,	// (0x0007a4db) main_mobtv_loading_pane_t1_ParamLimits

0xe339,	// (0x0007a4db) main_mobtv_loading_pane_t1

0xe351,	// (0x0007a4f3) main_mobtv_loading_pane_t2_ParamLimits

0xe351,	// (0x0007a4f3) main_mobtv_loading_pane_t2

0x0001,

0xfc53,	// (0x0007bdf5) main_mobtv_loading_pane_t_ParamLimits

0xfc53,	// (0x0007bdf5) main_mobtv_loading_pane_t

0x7650,	// (0x000737f2) wait_bar_pane_cp06_ParamLimits

0x7650,	// (0x000737f2) wait_bar_pane_cp06

0xe375,	// (0x0007a517) main_mobtv_programe_curr_pane_t1

0xe383,	// (0x0007a525) main_mobtv_programe_curr_pane_t2

0x0001,

0xfc58,	// (0x0007bdfa) main_mobtv_programe_curr_pane_t

0xe391,	// (0x0007a533) main_mobtv_programe_next_pane_t1

0xe39f,	// (0x0007a541) main_mobtv_programe_next_pane_t2

0xe3ad,	// (0x0007a54f) main_mobtv_programe_next_pane_t3

0x0002,

0xfc5d,	// (0x0007bdff) main_mobtv_programe_next_pane_t

0x90f0,	// (0x00075292) bg_popup_mobtv_noti_window_pane

0xe3bb,	// (0x0007a55d) popup_mobtv_noti_window_g1

0xe3c3,	// (0x0007a565) popup_mobtv_noti_window_t1

0xe3d1,	// (0x0007a573) popup_mobtv_noti_window_t2

0x0001,

0xfc64,	// (0x0007be06) popup_mobtv_noti_window_t

0xcc1f,	// (0x00078dc1) bg_popup_mobtv_noti_window_pane_g1

0x9166,	// (0x00075308) sc_clock_pane

0x9166,	// (0x00075308) main_fs_bigclock_pane

0x6cec,	// (0x00072e8e) blid2_tripm_pane_t4_ParamLimits

0x6cec,	// (0x00072e8e) blid2_tripm_pane_t4

0x765f,	// (0x00073801) sc_clock_pane_g1_ParamLimits

0x765f,	// (0x00073801) sc_clock_pane_g1

0x7671,	// (0x00073813) sc_clock_pane_t1_ParamLimits

0x7671,	// (0x00073813) sc_clock_pane_t1

0x7693,	// (0x00073835) sc_clock_pane_t2_ParamLimits

0x7693,	// (0x00073835) sc_clock_pane_t2

0x76ab,	// (0x0007384d) sc_clock_pane_t3_ParamLimits

0x76ab,	// (0x0007384d) sc_clock_pane_t3

0x0004,

0xfc69,	// (0x0007be0b) sc_clock_pane_t_ParamLimits

0xfc69,	// (0x0007be0b) sc_clock_pane_t

0x85d4,	// (0x00074776) main_fs_bigclock_indicator_pane_ParamLimits

0x85d4,	// (0x00074776) main_fs_bigclock_indicator_pane

0xce4f,	// (0x00078ff1) main_fs_bigclock_pane_g1_ParamLimits

0xce4f,	// (0x00078ff1) main_fs_bigclock_pane_g1

0x85e0,	// (0x00074782) main_fs_bigclock_pane_t1_ParamLimits

0x85e0,	// (0x00074782) main_fs_bigclock_pane_t1

0x85f2,	// (0x00074794) main_fs_bigclock_pane_t2_ParamLimits

0x85f2,	// (0x00074794) main_fs_bigclock_pane_t2

0x8604,	// (0x000747a6) main_fs_bigclock_pane_t3_ParamLimits

0x8604,	// (0x000747a6) main_fs_bigclock_pane_t3

0x0002,

0xfe73,	// (0x0007c015) main_fs_bigclock_pane_t_ParamLimits

0xfe73,	// (0x0007c015) main_fs_bigclock_pane_t

0xec65,	// (0x0007ae07) main_fs_bigclock_indicator_pane_g1

0xe09c,	// (0x0007a23e) ncim_query_content_pane_g2_ParamLimits

0xe09c,	// (0x0007a23e) ncim_query_content_pane_g2

0x0001,

0xfbf6,	// (0x0007bd98) ncim_query_content_pane_g_ParamLimits

0xfbf6,	// (0x0007bd98) ncim_query_content_pane_g

0x76c4,	// (0x00073866) sc_clock_pane_t4_ParamLimits

0x76c4,	// (0x00073866) sc_clock_pane_t4

0x9158,	// (0x000752fa) main_radioblah_pane

0xd5b9,	// (0x0007975b) cell_call4_button_pane_t1_copy1_ParamLimits

0xd5b9,	// (0x0007975b) cell_call4_button_pane_t1_copy1

0x72f2,	// (0x00073494) main_ncimui_pane_t1_ParamLimits

0x72f2,	// (0x00073494) main_ncimui_pane_t1

0x730c,	// (0x000734ae) main_ncimui_pane_t2_ParamLimits

0x730c,	// (0x000734ae) main_ncimui_pane_t2

0x0002,

0xfbef,	// (0x0007bd91) main_ncimui_pane_t_ParamLimits

0xfbef,	// (0x0007bd91) main_ncimui_pane_t

0xe50c,	// (0x0007a6ae) main_radioblah_anim_pane_ParamLimits

0xe50c,	// (0x0007a6ae) main_radioblah_anim_pane

0xe51d,	// (0x0007a6bf) main_radioblah_info_pane_ParamLimits

0xe51d,	// (0x0007a6bf) main_radioblah_info_pane

0xe531,	// (0x0007a6d3) main_radioblah_pane_t1_ParamLimits

0xe531,	// (0x0007a6d3) main_radioblah_pane_t1

0xe54d,	// (0x0007a6ef) main_radioblah_pane_t2_ParamLimits

0xe54d,	// (0x0007a6ef) main_radioblah_pane_t2

0x0003,

0xfc8a,	// (0x0007be2c) main_radioblah_pane_t_ParamLimits

0xfc8a,	// (0x0007be2c) main_radioblah_pane_t

0x777a,	// (0x0007391c) main_radioblah_rocker_ctrl_pane_ParamLimits

0x777a,	// (0x0007391c) main_radioblah_rocker_ctrl_pane

0xe595,	// (0x0007a737) main_radioblah_info_pane_t1_ParamLimits

0xe595,	// (0x0007a737) main_radioblah_info_pane_t1

0x77d2,	// (0x00073974) main_radioblah_info_pane_t2_ParamLimits

0x77d2,	// (0x00073974) main_radioblah_info_pane_t2

0x0003,

0xfc93,	// (0x0007be35) main_radioblah_info_pane_t_ParamLimits

0xfc93,	// (0x0007be35) main_radioblah_info_pane_t

0xcc1f,	// (0x00078dc1) main_radioblah_rocker_ctrl_pane_g1

0x7882,	// (0x00073a24) main_radioblah_rocker_ctrl_pane_g2

0x788a,	// (0x00073a2c) main_radioblah_rocker_ctrl_pane_g3

0x7892,	// (0x00073a34) main_radioblah_rocker_ctrl_pane_g4

0x789a,	// (0x00073a3c) main_radioblah_rocker_ctrl_pane_g5

0x78a2,	// (0x00073a44) main_radioblah_rocker_ctrl_pane_g6

0x0005,

0xfc9c,	// (0x0007be3e) main_radioblah_rocker_ctrl_pane_g

0x72a8,	// (0x0007344a) main_cset_text2_pane_t1_copy1_ParamLimits

0x9a8f,	// (0x00075c31) cam4_image_uncrop_qvga_pane

0x9af6,	// (0x00075c98) vid4_image_uncrop_qcif_pane

0x9c68,	// (0x00075e0a) cam6_image_uncrop_qvga_pane_ParamLimits

0x9c68,	// (0x00075e0a) cam6_image_uncrop_qvga_pane

0xdd88,	// (0x00079f2a) vid6_image_uncrop_qcif_pane_ParamLimits

0xdd88,	// (0x00079f2a) vid6_image_uncrop_qcif_pane

0x90f0,	// (0x00075292) bg_popup_preview_window_pane_cp03

0xe04e,	// (0x0007a1f0) list_cset_text2_pane

0xe056,	// (0x0007a1f8) main_cset6_text2_pane_g1

0xe05e,	// (0x0007a200) main_cset6_text2_pane_t1

0x78aa,	// (0x00073a4c) list_cset_text2_pane_t1_ParamLimits

0x78aa,	// (0x00073a4c) list_cset_text2_pane_t1

0x9158,	// (0x000752fa) main_radioblah_pane_ParamLimits

0x75f8,	// (0x0007379a) main_mobtv_info_pane_t3_ParamLimits

0x75f8,	// (0x0007379a) main_mobtv_info_pane_t3

0x7768,	// (0x0007390a) main_radioblah_pane_g1

0x77a2,	// (0x00073944) main_radioblah_info_pane_g1

0x7827,	// (0x000739c9) main_radioblah_info_pane_t3_ParamLimits

0x7827,	// (0x000739c9) main_radioblah_info_pane_t3

0x2238,	// (0x0006e3da) highlight_cell_cale_month_pane_ParamLimits

0x2238,	// (0x0006e3da) highlight_cell_cale_month_pane

0x9166,	// (0x00075308) main_phob_fisheye_pane

0xcf5b,	// (0x000790fd) scroll_pane_cp0031_ParamLimits

0xcf5b,	// (0x000790fd) scroll_pane_cp0031

0xde96,	// (0x0007a038) wait_bar_pane_cp08_ParamLimits

0x7039,	// (0x000731db) cset_list_set_pane_copy1_ParamLimits

0xe5cf,	// (0x0007a771) highlight_cell_cale_month_pane_g1

0x78c5,	// (0x00073a67) highlight_cell_cale_month_pane_t1

0xdb2b,	// (0x00079ccd) list_gen_pane_cp01

0xd7a6,	// (0x00079948) scroll_pane_01

0xbf85,	// (0x00078127) list_single_double_fisheye_pane

0xa3e8,	// (0x0007658a) list_double_fisheye_pane_g1_ParamLimits

0xa3e8,	// (0x0007658a) list_double_fisheye_pane_g1

0xa3f4,	// (0x00076596) list_double_fisheye_pane_g2_ParamLimits

0xa3f4,	// (0x00076596) list_double_fisheye_pane_g2

0xbf8e,	// (0x00078130) list_double_fisheye_pane_g3_ParamLimits

0xbf8e,	// (0x00078130) list_double_fisheye_pane_g3

0x0004,

0xfca9,	// (0x0007be4b) list_double_fisheye_pane_g_ParamLimits

0xfca9,	// (0x0007be4b) list_double_fisheye_pane_g

0xa425,	// (0x000765c7) list_double_fisheye_pane_t1_ParamLimits

0xa425,	// (0x000765c7) list_double_fisheye_pane_t1

0xa440,	// (0x000765e2) list_double_fisheye_pane_t2_ParamLimits

0xa440,	// (0x000765e2) list_double_fisheye_pane_t2

0x0001,

0xfcb4,	// (0x0007be56) list_double_fisheye_pane_t_ParamLimits

0xfcb4,	// (0x0007be56) list_double_fisheye_pane_t

0x9166,	// (0x00075308) main_call5_pane

0x76ef,	// (0x00073891) sc_swipe_pane_ParamLimits

0x76ef,	// (0x00073891) sc_swipe_pane

0x78e6,	// (0x00073a88) call5_image_pane_ParamLimits

0x78e6,	// (0x00073a88) call5_image_pane

0x7903,	// (0x00073aa5) call5_swipe_1_pane_ParamLimits

0x7903,	// (0x00073aa5) call5_swipe_1_pane

0x7916,	// (0x00073ab8) call5_swipe_2_pane_ParamLimits

0x7916,	// (0x00073ab8) call5_swipe_2_pane

0x7941,	// (0x00073ae3) popup_call5_audio_first_window_ParamLimits

0x7941,	// (0x00073ae3) popup_call5_audio_first_window

0xce7f,	// (0x00079021) call5_swipe_1_pane_g1_ParamLimits

0xce7f,	// (0x00079021) call5_swipe_1_pane_g1

0xe5d7,	// (0x0007a779) call5_swipe_1_pane_g2_ParamLimits

0xe5d7,	// (0x0007a779) call5_swipe_1_pane_g2

0x0001,

0xfcb9,	// (0x0007be5b) call5_swipe_1_pane_g_ParamLimits

0xfcb9,	// (0x0007be5b) call5_swipe_1_pane_g

0xe5e3,	// (0x0007a785) call5_swipe_1_pane_t1_ParamLimits

0xe5e3,	// (0x0007a785) call5_swipe_1_pane_t1

0xce7f,	// (0x00079021) call5_swipe_2_pane_g1_ParamLimits

0xce7f,	// (0x00079021) call5_swipe_2_pane_g1

0xe5f8,	// (0x0007a79a) call5_swipe_2_pane_g2_ParamLimits

0xe5f8,	// (0x0007a79a) call5_swipe_2_pane_g2

0x0001,

0xfcbe,	// (0x0007be60) call5_swipe_2_pane_g_ParamLimits

0xfcbe,	// (0x0007be60) call5_swipe_2_pane_g

0xe604,	// (0x0007a7a6) call5_swipe_2_pane_t1_ParamLimits

0xe604,	// (0x0007a7a6) call5_swipe_2_pane_t1

0xe619,	// (0x0007a7bb) sc_swipe_pane_g1_ParamLimits

0xe619,	// (0x0007a7bb) sc_swipe_pane_g1

0xe626,	// (0x0007a7c8) sc_swipe_pane_g2_ParamLimits

0xe626,	// (0x0007a7c8) sc_swipe_pane_g2

0x0001,

0xfcc3,	// (0x0007be65) sc_swipe_pane_g_ParamLimits

0xfcc3,	// (0x0007be65) sc_swipe_pane_g

0xe632,	// (0x0007a7d4) sc_swipe_pane_t1_ParamLimits

0xe632,	// (0x0007a7d4) sc_swipe_pane_t1

0x9166,	// (0x00075308) main_cmail_launcher_pane

0x7952,	// (0x00073af4) aid_size_cell_cmail_l_ParamLimits

0x7952,	// (0x00073af4) aid_size_cell_cmail_l

0x796c,	// (0x00073b0e) grid_cmail_l_pane_ParamLimits

0x796c,	// (0x00073b0e) grid_cmail_l_pane

0x7987,	// (0x00073b29) cell_cmail_l_pane_ParamLimits

0x7987,	// (0x00073b29) cell_cmail_l_pane

0x79ad,	// (0x00073b4f) cell_cmail_l_pane_g1_ParamLimits

0x79ad,	// (0x00073b4f) cell_cmail_l_pane_g1

0x79be,	// (0x00073b60) cell_cmail_l_pane_t1_ParamLimits

0x79be,	// (0x00073b60) cell_cmail_l_pane_t1

0xe647,	// (0x0007a7e9) cell_cmail_l_pane_t2_ParamLimits

0xe647,	// (0x0007a7e9) cell_cmail_l_pane_t2

0x0001,

0xfcc8,	// (0x0007be6a) cell_cmail_l_pane_t_ParamLimits

0xfcc8,	// (0x0007be6a) cell_cmail_l_pane_t

0xa1ea,	// (0x0007638c) grid_highlight_pane_cp018_ParamLimits

0xa1ea,	// (0x0007638c) grid_highlight_pane_cp018

0x021a,	// (0x0006c3bc) main2_pane_ParamLimits

0x021a,	// (0x0006c3bc) main2_pane

0xa84c,	// (0x000769ee) popup_sp_fs_action_menu_bg_pane_g1

0xa854,	// (0x000769f6) popup_sp_fs_action_menu_bg_pane_g2

0xa85c,	// (0x000769fe) popup_sp_fs_action_menu_bg_pane_g3

0xa864,	// (0x00076a06) popup_sp_fs_action_menu_bg_pane_g4

0xa86c,	// (0x00076a0e) popup_sp_fs_action_menu_bg_pane_g5

0xa874,	// (0x00076a16) popup_sp_fs_action_menu_bg_pane_g6

0xa87c,	// (0x00076a1e) popup_sp_fs_action_menu_bg_pane_g7

0xa884,	// (0x00076a26) popup_sp_fs_action_menu_bg_pane_g8

0xa88c,	// (0x00076a2e) popup_sp_fs_action_menu_bg_pane_g9

0xa894,	// (0x00076a36) popup_sp_fs_action_menu_bg_pane_g10

0xa894,	// (0x00076a36) popup_sp_fs_action_menu_bg_pane_g11

0x000a,

0xf18d,	// (0x0007b32f) popup_sp_fs_action_menu_bg_pane_g

0xa03a,	// (0x000761dc) list_medium_line_x2_t3_g3_g1_ParamLimits

0xa03a,	// (0x000761dc) list_medium_line_x2_t3_g3_g1

0x1215,	// (0x0006d3b7) list_medium_line_x2_t3_g3_g2_ParamLimits

0x1215,	// (0x0006d3b7) list_medium_line_x2_t3_g3_g2

0xa046,	// (0x000761e8) list_medium_line_x2_t3_g3_g3_ParamLimits

0xa046,	// (0x000761e8) list_medium_line_x2_t3_g3_g3

0x0002,

0xf23d,	// (0x0007b3df) list_medium_line_x2_t3_g3_g_ParamLimits

0xf23d,	// (0x0007b3df) list_medium_line_x2_t3_g3_g

0xa052,	// (0x000761f4) list_medium_line_x2_t3_g3_t1_ParamLimits

0xa052,	// (0x000761f4) list_medium_line_x2_t3_g3_t1

0x1221,	// (0x0006d3c3) list_medium_line_x2_t3_g3_t2_ParamLimits

0x1221,	// (0x0006d3c3) list_medium_line_x2_t3_g3_t2

0xa067,	// (0x00076209) list_medium_line_x2_t3_g3_t3_ParamLimits

0xa067,	// (0x00076209) list_medium_line_x2_t3_g3_t3

0x0002,

0xf244,	// (0x0007b3e6) list_medium_line_x2_t3_g3_t_ParamLimits

0xf244,	// (0x0007b3e6) list_medium_line_x2_t3_g3_t

0xa03a,	// (0x000761dc) list_medium_line_x2_t3_g2_g1_ParamLimits

0xa03a,	// (0x000761dc) list_medium_line_x2_t3_g2_g1

0xa046,	// (0x000761e8) list_medium_line_x2_t3_g2_g2_ParamLimits

0xa046,	// (0x000761e8) list_medium_line_x2_t3_g2_g2

0x0001,

0xf24b,	// (0x0007b3ed) list_medium_line_x2_t3_g2_g_ParamLimits

0xf24b,	// (0x0007b3ed) list_medium_line_x2_t3_g2_g

0xa07c,	// (0x0007621e) list_medium_line_x2_t3_g2_t1_ParamLimits

0xa07c,	// (0x0007621e) list_medium_line_x2_t3_g2_t1

0xa092,	// (0x00076234) list_medium_line_x2_t3_g2_t2_ParamLimits

0xa092,	// (0x00076234) list_medium_line_x2_t3_g2_t2

0xa0a4,	// (0x00076246) list_medium_line_x2_t3_g2_t3_ParamLimits

0xa0a4,	// (0x00076246) list_medium_line_x2_t3_g2_t3

0x0002,

0xf250,	// (0x0007b3f2) list_medium_line_x2_t3_g2_t_ParamLimits

0xf250,	// (0x0007b3f2) list_medium_line_x2_t3_g2_t

0xa03a,	// (0x000761dc) list_medium_line_x2_t4_g4_g1_ParamLimits

0xa03a,	// (0x000761dc) list_medium_line_x2_t4_g4_g1

0x1235,	// (0x0006d3d7) list_medium_line_x2_t4_g4_g2_ParamLimits

0x1235,	// (0x0006d3d7) list_medium_line_x2_t4_g4_g2

0x1215,	// (0x0006d3b7) list_medium_line_x2_t4_g4_g3_ParamLimits

0x1215,	// (0x0006d3b7) list_medium_line_x2_t4_g4_g3

0x1241,	// (0x0006d3e3) list_medium_line_x2_t4_g4_g4_ParamLimits

0x1241,	// (0x0006d3e3) list_medium_line_x2_t4_g4_g4

0x0003,

0xf257,	// (0x0007b3f9) list_medium_line_x2_t4_g4_g_ParamLimits

0xf257,	// (0x0007b3f9) list_medium_line_x2_t4_g4_g

0x124d,	// (0x0006d3ef) list_medium_line_x2_t4_g4_t1_ParamLimits

0x124d,	// (0x0006d3ef) list_medium_line_x2_t4_g4_t1

0x1264,	// (0x0006d406) list_medium_line_x2_t4_g4_t2_ParamLimits

0x1264,	// (0x0006d406) list_medium_line_x2_t4_g4_t2

0x1279,	// (0x0006d41b) list_medium_line_x2_t4_g4_t3_ParamLimits

0x1279,	// (0x0006d41b) list_medium_line_x2_t4_g4_t3

0xa0c2,	// (0x00076264) list_medium_line_x2_t4_g4_t4_ParamLimits

0xa0c2,	// (0x00076264) list_medium_line_x2_t4_g4_t4

0x0003,

0xf260,	// (0x0007b402) list_medium_line_x2_t4_g4_t_ParamLimits

0xf260,	// (0x0007b402) list_medium_line_x2_t4_g4_t

0xa03a,	// (0x000761dc) list_medium_line_x2_t2_g4_g1_ParamLimits

0xa03a,	// (0x000761dc) list_medium_line_x2_t2_g4_g1

0x1235,	// (0x0006d3d7) list_medium_line_x2_t2_g4_g2_ParamLimits

0x1235,	// (0x0006d3d7) list_medium_line_x2_t2_g4_g2

0x1215,	// (0x0006d3b7) list_medium_line_x2_t2_g4_g3_ParamLimits

0x1215,	// (0x0006d3b7) list_medium_line_x2_t2_g4_g3

0xa046,	// (0x000761e8) list_medium_line_x2_t2_g4_g4_ParamLimits

0xa046,	// (0x000761e8) list_medium_line_x2_t2_g4_g4

0x0003,

0xf2c7,	// (0x0007b469) list_medium_line_x2_t2_g4_g_ParamLimits

0xf2c7,	// (0x0007b469) list_medium_line_x2_t2_g4_g

0xa0d4,	// (0x00076276) list_medium_line_x2_t2_g4_t1_ParamLimits

0xa0d4,	// (0x00076276) list_medium_line_x2_t2_g4_t1

0xa067,	// (0x00076209) list_medium_line_x2_t2_g4_t2_ParamLimits

0xa067,	// (0x00076209) list_medium_line_x2_t2_g4_t2

0x0001,

0xf2d0,	// (0x0007b472) list_medium_line_x2_t2_g4_t_ParamLimits

0xf2d0,	// (0x0007b472) list_medium_line_x2_t2_g4_t

0xa03a,	// (0x000761dc) list_medium_line_x2_t2_g3_g1_ParamLimits

0xa03a,	// (0x000761dc) list_medium_line_x2_t2_g3_g1

0x1215,	// (0x0006d3b7) list_medium_line_x2_t2_g3_g2_ParamLimits

0x1215,	// (0x0006d3b7) list_medium_line_x2_t2_g3_g2

0xa046,	// (0x000761e8) list_medium_line_x2_t2_g3_g3_ParamLimits

0xa046,	// (0x000761e8) list_medium_line_x2_t2_g3_g3

0x0002,

0xf23d,	// (0x0007b3df) list_medium_line_x2_t2_g3_g_ParamLimits

0xf23d,	// (0x0007b3df) list_medium_line_x2_t2_g3_g

0xa0e9,	// (0x0007628b) list_medium_line_x2_t2_g3_t1_ParamLimits

0xa0e9,	// (0x0007628b) list_medium_line_x2_t2_g3_t1

0xa067,	// (0x00076209) list_medium_line_x2_t2_g3_t2_ParamLimits

0xa067,	// (0x00076209) list_medium_line_x2_t2_g3_t2

0x0001,

0xf2d5,	// (0x0007b477) list_medium_line_x2_t2_g3_t_ParamLimits

0xf2d5,	// (0x0007b477) list_medium_line_x2_t2_g3_t

0x2388,	// (0x0006e52a) main_sp_fs_list_pane_ParamLimits

0x2388,	// (0x0006e52a) main_sp_fs_list_pane

0xcb13,	// (0x00078cb5) sp_fs_scroll_pane_ParamLimits

0xcb13,	// (0x00078cb5) sp_fs_scroll_pane

0x2394,	// (0x0006e536) list_medium_line_x2_t3_t1

0x23a4,	// (0x0006e546) list_medium_line_x2_t3_t2

0xa0fe,	// (0x000762a0) list_medium_line_x2_t3_t3

0x0002,

0xf320,	// (0x0007b4c2) list_medium_line_x2_t3_t

0x23b2,	// (0x0006e554) list_medium_line_x3_t4_t1

0x23c2,	// (0x0006e564) list_medium_line_x3_t4_t2

0xa10c,	// (0x000762ae) list_medium_line_x3_t4_t3

0xa0fe,	// (0x000762a0) list_medium_line_x3_t4_t4

0x0003,

0xf327,	// (0x0007b4c9) list_medium_line_x3_t4_t

0x23d0,	// (0x0006e572) list_medium_line_x4_t5_t1

0x23e0,	// (0x0006e582) list_medium_line_x4_t5_t2

0xa10c,	// (0x000762ae) list_medium_line_x4_t5_t3

0x23ee,	// (0x0006e590) list_medium_line_x4_t5_t4

0xa0fe,	// (0x000762a0) list_medium_line_x4_t5_t5

0x0004,

0xf330,	// (0x0007b4d2) list_medium_line_x4_t5_t

0xa03a,	// (0x000761dc) list_medium_line_t4_g4_g1_ParamLimits

0xa03a,	// (0x000761dc) list_medium_line_t4_g4_g1

0xa11a,	// (0x000762bc) list_medium_line_t4_g4_g2_ParamLimits

0xa11a,	// (0x000762bc) list_medium_line_t4_g4_g2

0x23fc,	// (0x0006e59e) list_medium_line_t4_g4_g3_ParamLimits

0x23fc,	// (0x0006e59e) list_medium_line_t4_g4_g3

0xa046,	// (0x000761e8) list_medium_line_t4_g4_g4_ParamLimits

0xa046,	// (0x000761e8) list_medium_line_t4_g4_g4

0x0003,

0xf33b,	// (0x0007b4dd) list_medium_line_t4_g4_g_ParamLimits

0xf33b,	// (0x0007b4dd) list_medium_line_t4_g4_g

0xa126,	// (0x000762c8) list_medium_line_t4_g4_t1_ParamLimits

0xa126,	// (0x000762c8) list_medium_line_t4_g4_t1

0xa13b,	// (0x000762dd) list_medium_line_t4_g4_t2_ParamLimits

0xa13b,	// (0x000762dd) list_medium_line_t4_g4_t2

0x2408,	// (0x0006e5aa) list_medium_line_t4_g4_t3_ParamLimits

0x2408,	// (0x0006e5aa) list_medium_line_t4_g4_t3

0xa067,	// (0x00076209) list_medium_line_t4_g4_t4_ParamLimits

0xa067,	// (0x00076209) list_medium_line_t4_g4_t4

0x0003,

0xf344,	// (0x0007b4e6) list_medium_line_t4_g4_t_ParamLimits

0xf344,	// (0x0007b4e6) list_medium_line_t4_g4_t

0x24bd,	// (0x0006e65f) chi_dic_find_pane_g1

0x34e2,	// (0x0006f684) main_tport_pane

0xa2aa,	// (0x0007644c) list_medium_line_plain_t1

0xa2b8,	// (0x0007645a) list_medium_line_t2_g2_g1_ParamLimits

0xa2b8,	// (0x0007645a) list_medium_line_t2_g2_g1

0xa2c4,	// (0x00076466) list_medium_line_t2_g2_g2_ParamLimits

0xa2c4,	// (0x00076466) list_medium_line_t2_g2_g2

0x0001,

0xfa00,	// (0x0007bba2) list_medium_line_t2_g2_g_ParamLimits

0xfa00,	// (0x0007bba2) list_medium_line_t2_g2_g

0x6422,	// (0x000725c4) list_medium_line_t2_g2_t1_ParamLimits

0x6422,	// (0x000725c4) list_medium_line_t2_g2_t1

0x643c,	// (0x000725de) list_medium_line_t2_g2_t2_ParamLimits

0x643c,	// (0x000725de) list_medium_line_t2_g2_t2

0x0001,

0xfa05,	// (0x0007bba7) list_medium_line_t2_g2_t_ParamLimits

0xfa05,	// (0x0007bba7) list_medium_line_t2_g2_t

0xa36c,	// (0x0007650e) aid_sp_fs_list_icon_a_sm

0xa374,	// (0x00076516) aid_sp_fs_list_icon_d

0xa37c,	// (0x0007651e) aid_sp_fs_text_primary

0xa385,	// (0x00076527) aid_sp_fs_text_secondary

0xe1ea,	// (0x0007a38c) list_medium_line

0xe1ea,	// (0x0007a38c) list_medium_line_g2

0xe1ea,	// (0x0007a38c) list_medium_line_g3

0xe1ea,	// (0x0007a38c) list_medium_line_plain

0xe1ea,	// (0x0007a38c) list_medium_line_plain_t2

0xe1ea,	// (0x0007a38c) list_medium_line_plain_t3

0xe1ea,	// (0x0007a38c) list_medium_line_right_icon

0xe1ea,	// (0x0007a38c) list_medium_line_right_iconx2

0xe1ea,	// (0x0007a38c) list_medium_line_t2

0xe1ea,	// (0x0007a38c) list_medium_line_t2_g2

0xe1ea,	// (0x0007a38c) list_medium_line_t2_g3

0xe1ea,	// (0x0007a38c) list_medium_line_t2_right_icon

0xe1ea,	// (0x0007a38c) list_medium_line_t2_right_iconx2

0xe1ea,	// (0x0007a38c) list_medium_line_t3

0xe1ea,	// (0x0007a38c) list_medium_line_t3_g2

0xe1ea,	// (0x0007a38c) list_medium_line_t3_g3

0xe1ea,	// (0x0007a38c) list_medium_line_t3_right_iconx2

0x6aa2,	// (0x00072c44) list_medium_line_t4_g4

0x6aab,	// (0x00072c4d) list_medium_line_x2

0x6aab,	// (0x00072c4d) list_medium_line_x2_t2_g2

0x6aab,	// (0x00072c4d) list_medium_line_x2_t2_g3

0x6aab,	// (0x00072c4d) list_medium_line_x2_t2_g4

0x6aab,	// (0x00072c4d) list_medium_line_x2_t3

0x6aab,	// (0x00072c4d) list_medium_line_x2_t3_g2

0x6aab,	// (0x00072c4d) list_medium_line_x2_t3_g3

0x6aab,	// (0x00072c4d) list_medium_line_x2_t3_g4

0x6aab,	// (0x00072c4d) list_medium_line_x2_t4_g2

0x6aab,	// (0x00072c4d) list_medium_line_x2_t4_g4

0x6ab4,	// (0x00072c56) list_medium_line_x3

0x6ab4,	// (0x00072c56) list_medium_line_x3_t4

0x6ab4,	// (0x00072c56) list_medium_line_x3_t4_g4

0x6aa2,	// (0x00072c44) list_medium_line_x4_t4

0x6aa2,	// (0x00072c44) list_medium_line_x4_t4_g7

0x6aa2,	// (0x00072c44) list_medium_line_x4_t5

0x6abd,	// (0x00072c5f) list_single_fs_dyc_pane_ParamLimits

0x6abd,	// (0x00072c5f) list_single_fs_dyc_pane

0xa03a,	// (0x000761dc) list_medium_line_x4_t4_g7_g1_ParamLimits

0xa03a,	// (0x000761dc) list_medium_line_x4_t4_g7_g1

0xa38e,	// (0x00076530) list_medium_line_x4_t4_g7_g2_ParamLimits

0xa38e,	// (0x00076530) list_medium_line_x4_t4_g7_g2

0x7233,	// (0x000733d5) list_medium_line_x4_t4_g7_g3_ParamLimits

0x7233,	// (0x000733d5) list_medium_line_x4_t4_g7_g3

0x7242,	// (0x000733e4) list_medium_line_x4_t4_g7_g4_ParamLimits

0x7242,	// (0x000733e4) list_medium_line_x4_t4_g7_g4

0x724e,	// (0x000733f0) list_medium_line_x4_t4_g7_g5_ParamLimits

0x724e,	// (0x000733f0) list_medium_line_x4_t4_g7_g5

0x725d,	// (0x000733ff) list_medium_line_x4_t4_g7_g6_ParamLimits

0x725d,	// (0x000733ff) list_medium_line_x4_t4_g7_g6

0xa39a,	// (0x0007653c) list_medium_line_x4_t4_g7_g7_ParamLimits

0xa39a,	// (0x0007653c) list_medium_line_x4_t4_g7_g7

0x0006,

0xfbd0,	// (0x0007bd72) list_medium_line_x4_t4_g7_g_ParamLimits

0xfbd0,	// (0x0007bd72) list_medium_line_x4_t4_g7_g

0xa3a6,	// (0x00076548) list_medium_line_x4_t4_g7_t1_ParamLimits

0xa3a6,	// (0x00076548) list_medium_line_x4_t4_g7_t1

0x726c,	// (0x0007340e) list_medium_line_x4_t4_g7_t2_ParamLimits

0x726c,	// (0x0007340e) list_medium_line_x4_t4_g7_t2

0x7281,	// (0x00073423) list_medium_line_x4_t4_g7_t3_ParamLimits

0x7281,	// (0x00073423) list_medium_line_x4_t4_g7_t3

0x7296,	// (0x00073438) list_medium_line_x4_t4_g7_t4_ParamLimits

0x7296,	// (0x00073438) list_medium_line_x4_t4_g7_t4

0xa3bb,	// (0x0007655d) list_medium_line_x4_t4_g7_t5_ParamLimits

0xa3bb,	// (0x0007655d) list_medium_line_x4_t4_g7_t5

0x0004,

0xfbdf,	// (0x0007bd81) list_medium_line_x4_t4_g7_t_ParamLimits

0xfbdf,	// (0x0007bd81) list_medium_line_x4_t4_g7_t

0xa3cd,	// (0x0007656f) list_single_dyc_row_pane_ParamLimits

0xa3cd,	// (0x0007656f) list_single_dyc_row_pane

0x78d3,	// (0x00073a75) call5_gesture_pane_ParamLimits

0x78d3,	// (0x00073a75) call5_gesture_pane

0x7929,	// (0x00073acb) call5_windows_pane_ParamLimits

0x7929,	// (0x00073acb) call5_windows_pane

0x79d4,	// (0x00073b76) call5_swipe_1_pane_cp_ParamLimits

0x79d4,	// (0x00073b76) call5_swipe_1_pane_cp

0x79e0,	// (0x00073b82) call5_swipe_2_pane_cp_ParamLimits

0x79e0,	// (0x00073b82) call5_swipe_2_pane_cp

0xb3f2,	// (0x00077594) call5_image_pane_cp

0x79ec,	// (0x00073b8e) popup_call5_audio_first_window_cp_ParamLimits

0x79ec,	// (0x00073b8e) popup_call5_audio_first_window_cp

0xe619,	// (0x0007a7bb) call5_swipe_1_pane_g1_cp_ParamLimits

0xe619,	// (0x0007a7bb) call5_swipe_1_pane_g1_cp

0xe659,	// (0x0007a7fb) call5_swipe_1_pane_g2_cp

0xe632,	// (0x0007a7d4) call5_swipe_1_pane_t1_cp_ParamLimits

0xe632,	// (0x0007a7d4) call5_swipe_1_pane_t1_cp

0xe619,	// (0x0007a7bb) call5_swipe_2_pane_g1_cp_ParamLimits

0xe619,	// (0x0007a7bb) call5_swipe_2_pane_g1_cp

0xe661,	// (0x0007a803) call5_swipe_2_pane_g2_cp

0xe669,	// (0x0007a80b) call5_swipe_2_pane_t1_cp_ParamLimits

0xe669,	// (0x0007a80b) call5_swipe_2_pane_t1_cp

0xa1ea,	// (0x0007638c) main_sp_fs_email_pane

0xe67e,	// (0x0007a820) main_sp_fs_listscroll_pane_te

0x79fa,	// (0x00073b9c) popup_sp_fs_action_menu_pane_ParamLimits

0x79fa,	// (0x00073b9c) popup_sp_fs_action_menu_pane

0xcc1f,	// (0x00078dc1) bg_sp_fs_ctrlbar_pane_g1

0xe687,	// (0x0007a829) bg_sp_fs_ctrlbar_ddmenu_pane_g1

0xe690,	// (0x0007a832) bg_sp_fs_ctrlbar_ddmenu_pane_g2

0xe699,	// (0x0007a83b) bg_sp_fs_ctrlbar_ddmenu_pane_g3

0xcc1f,	// (0x00078dc1) bg_sp_fs_ctrlbar_ddmenu_pane_g4

0x0003,

0xfccd,	// (0x0007be6f) bg_sp_fs_ctrlbar_ddmenu_pane_g

0xc9f6,	// (0x00078b98) bg_sp_fs_ctrlbar_ddmenu_pane_ParamLimits

0xc9f6,	// (0x00078b98) bg_sp_fs_ctrlbar_ddmenu_pane

0xe6a2,	// (0x0007a844) main_sp_fs_ctrlbar_ddmenu_pane_g1_ParamLimits

0xe6a2,	// (0x0007a844) main_sp_fs_ctrlbar_ddmenu_pane_g1

0xe6ae,	// (0x0007a850) main_sp_fs_ctrlbar_ddmenu_pane_g2_ParamLimits

0xe6ae,	// (0x0007a850) main_sp_fs_ctrlbar_ddmenu_pane_g2

0x0001,

0xfcd6,	// (0x0007be78) main_sp_fs_ctrlbar_ddmenu_pane_g_ParamLimits

0xfcd6,	// (0x0007be78) main_sp_fs_ctrlbar_ddmenu_pane_g

0xe6ba,	// (0x0007a85c) main_sp_fs_ctrlbar_ddmenu_pane_t1_ParamLimits

0xe6ba,	// (0x0007a85c) main_sp_fs_ctrlbar_ddmenu_pane_t1

0xa462,	// (0x00076604) list_medium_line_t2_right_icon_g1

0x7a3c,	// (0x00073bde) list_medium_line_t2_right_icon_t1

0x7a4c,	// (0x00073bee) list_medium_line_t2_right_icon_t2

0x0001,

0xfcdb,	// (0x0007be7d) list_medium_line_t2_right_icon_t

0xc809,	// (0x000789ab) bg_sp_fs_ctrlbar_pane_ParamLimits

0xc809,	// (0x000789ab) bg_sp_fs_ctrlbar_pane

0x7aa6,	// (0x00073c48) main_sp_fs_ctrlbar_button_pane_cp01

0x7ab0,	// (0x00073c52) main_sp_fs_ctrlbar_ddmenu_pane

0xe70c,	// (0x0007a8ae) main_sp_fs_ctrlbar_pane_g1

0xe718,	// (0x0007a8ba) main_sp_fs_ctrlbar_pane_g2

0x0001,

0xfce0,	// (0x0007be82) main_sp_fs_ctrlbar_pane_g

0xe724,	// (0x0007a8c6) main_sp_fs_ctrlbar_pane_t1

0x7aba,	// (0x00073c5c) main_sp_fs_ctrlbar_pane

0x7ade,	// (0x00073c80) main_sp_fs_listscroll_pane_te_cp01

0x7afe,	// (0x00073ca0) popup_sp_fs_action_menu_pane_cp01_ParamLimits

0x7afe,	// (0x00073ca0) popup_sp_fs_action_menu_pane_cp01

0xa1ea,	// (0x0007638c) bg_sp_fs_highlight_list_pane_cp01_ParamLimits

0xa1ea,	// (0x0007638c) bg_sp_fs_highlight_list_pane_cp01

0xa46a,	// (0x0007660c) sp_fs_action_menu_list_gene_pane_g1_ParamLimits

0xa46a,	// (0x0007660c) sp_fs_action_menu_list_gene_pane_g1

0xe754,	// (0x0007a8f6) sp_fs_action_menu_list_gene_pane_g2_ParamLimits

0xe754,	// (0x0007a8f6) sp_fs_action_menu_list_gene_pane_g2

0x0001,

0xfcea,	// (0x0007be8c) sp_fs_action_menu_list_gene_pane_g_ParamLimits

0xfcea,	// (0x0007be8c) sp_fs_action_menu_list_gene_pane_g

0xa479,	// (0x0007661b) sp_fs_action_menu_list_gene_pane_t1_ParamLimits

0xa479,	// (0x0007661b) sp_fs_action_menu_list_gene_pane_t1

0xa491,	// (0x00076633) sp_fs_action_menu_list_gene_pane_ParamLimits

0xa491,	// (0x00076633) sp_fs_action_menu_list_gene_pane

0xe761,	// (0x0007a903) popup_sp_fs_action_menu_bg_pane_ParamLimits

0xe761,	// (0x0007a903) popup_sp_fs_action_menu_bg_pane

0xa4ae,	// (0x00076650) sp_fs_action_menu_list_pane_ParamLimits

0xa4ae,	// (0x00076650) sp_fs_action_menu_list_pane

0x7b2e,	// (0x00073cd0) sp_fs_scroll_pane_cp01_ParamLimits

0x7b2e,	// (0x00073cd0) sp_fs_scroll_pane_cp01

0x7b54,	// (0x00073cf6) list_medium_line_plain_t2_t1

0x7b64,	// (0x00073d06) list_medium_line_plain_t2_t2

0x0001,

0xfcef,	// (0x0007be91) list_medium_line_plain_t2_t

0x7b74,	// (0x00073d16) list_medium_line_plain_t3_t1

0x7b84,	// (0x00073d26) list_medium_line_plain_t3_t2

0x7b92,	// (0x00073d34) list_medium_line_plain_t3_t3

0x0002,

0xfcf4,	// (0x0007be96) list_medium_line_plain_t3_t

0xa03a,	// (0x000761dc) list_medium_line_x2_t2_g2_g1_ParamLimits

0xa03a,	// (0x000761dc) list_medium_line_x2_t2_g2_g1

0xa046,	// (0x000761e8) list_medium_line_x2_t2_g2_g2_ParamLimits

0xa046,	// (0x000761e8) list_medium_line_x2_t2_g2_g2

0x0001,

0xf24b,	// (0x0007b3ed) list_medium_line_x2_t2_g2_g_ParamLimits

0xf24b,	// (0x0007b3ed) list_medium_line_x2_t2_g2_g

0xa126,	// (0x000762c8) list_medium_line_x2_t2_g2_t1_ParamLimits

0xa126,	// (0x000762c8) list_medium_line_x2_t2_g2_t1

0xa067,	// (0x00076209) list_medium_line_x2_t2_g2_t2_ParamLimits

0xa067,	// (0x00076209) list_medium_line_x2_t2_g2_t2

0x0001,

0xfcfb,	// (0x0007be9d) list_medium_line_x2_t2_g2_t_ParamLimits

0xfcfb,	// (0x0007be9d) list_medium_line_x2_t2_g2_t

0xa03a,	// (0x000761dc) list_medium_line_x2_t4_g2_g1_ParamLimits

0xa03a,	// (0x000761dc) list_medium_line_x2_t4_g2_g1

0x7ba0,	// (0x00073d42) list_medium_line_x2_t4_g2_g2_ParamLimits

0x7ba0,	// (0x00073d42) list_medium_line_x2_t4_g2_g2

0x0001,

0xfd00,	// (0x0007bea2) list_medium_line_x2_t4_g2_g_ParamLimits

0xfd00,	// (0x0007bea2) list_medium_line_x2_t4_g2_g

0x7bb1,	// (0x00073d53) list_medium_line_x2_t4_g2_t1_ParamLimits

0x7bb1,	// (0x00073d53) list_medium_line_x2_t4_g2_t1

0x7bcb,	// (0x00073d6d) list_medium_line_x2_t4_g2_t2_ParamLimits

0x7bcb,	// (0x00073d6d) list_medium_line_x2_t4_g2_t2

0x7be0,	// (0x00073d82) list_medium_line_x2_t4_g2_t3_ParamLimits

0x7be0,	// (0x00073d82) list_medium_line_x2_t4_g2_t3

0xa067,	// (0x00076209) list_medium_line_x2_t4_g2_t4_ParamLimits

0xa067,	// (0x00076209) list_medium_line_x2_t4_g2_t4

0x0003,

0xfd05,	// (0x0007bea7) list_medium_line_x2_t4_g2_t_ParamLimits

0xfd05,	// (0x0007bea7) list_medium_line_x2_t4_g2_t

0xa4cc,	// (0x0007666e) list_medium_line_t3_right_iconx2_g1

0xa462,	// (0x00076604) list_medium_line_t3_right_iconx2_g2

0x7bf5,	// (0x00073d97) list_medium_line_t3_right_iconx2_g3

0x0002,

0xfd0e,	// (0x0007beb0) list_medium_line_t3_right_iconx2_g

0x7bff,	// (0x00073da1) list_medium_line_t3_right_iconx2_t1

0x7c0f,	// (0x00073db1) list_medium_line_t3_right_iconx2_t2

0x0001,

0xfd15,	// (0x0007beb7) list_medium_line_t3_right_iconx2_t

0xa03a,	// (0x000761dc) list_medium_line_x3_t4_g4_g1_ParamLimits

0xa03a,	// (0x000761dc) list_medium_line_x3_t4_g4_g1

0x1215,	// (0x0006d3b7) list_medium_line_x3_t4_g4_g2_ParamLimits

0x1215,	// (0x0006d3b7) list_medium_line_x3_t4_g4_g2

0xa11a,	// (0x000762bc) list_medium_line_x3_t4_g4_g3_ParamLimits

0xa11a,	// (0x000762bc) list_medium_line_x3_t4_g4_g3

0x7c1d,	// (0x00073dbf) list_medium_line_x3_t4_g4_g4_ParamLimits

0x7c1d,	// (0x00073dbf) list_medium_line_x3_t4_g4_g4

0x0003,

0xfd1a,	// (0x0007bebc) list_medium_line_x3_t4_g4_g_ParamLimits

0xfd1a,	// (0x0007bebc) list_medium_line_x3_t4_g4_g

0x7c29,	// (0x00073dcb) list_medium_line_x3_t4_g4_t1_ParamLimits

0x7c29,	// (0x00073dcb) list_medium_line_x3_t4_g4_t1

0x7c40,	// (0x00073de2) list_medium_line_x3_t4_g4_t2_ParamLimits

0x7c40,	// (0x00073de2) list_medium_line_x3_t4_g4_t2

0xa4d4,	// (0x00076676) list_medium_line_x3_t4_g4_t3_ParamLimits

0xa4d4,	// (0x00076676) list_medium_line_x3_t4_g4_t3

0x7c5b,	// (0x00073dfd) list_medium_line_x3_t4_g4_t4_ParamLimits

0x7c5b,	// (0x00073dfd) list_medium_line_x3_t4_g4_t4

0x0003,

0xfd23,	// (0x0007bec5) list_medium_line_x3_t4_g4_t_ParamLimits

0xfd23,	// (0x0007bec5) list_medium_line_x3_t4_g4_t

0x7c77,	// (0x00073e19) list_single_dyc_row_text_pane_t1_ParamLimits

0x7c77,	// (0x00073e19) list_single_dyc_row_text_pane_t1

0x7cc0,	// (0x00073e62) list_single_dyc_row_text_pane_t2_ParamLimits

0x7cc0,	// (0x00073e62) list_single_dyc_row_text_pane_t2

0xa4e9,	// (0x0007668b) list_single_dyc_row_text_pane_t3_ParamLimits

0xa4e9,	// (0x0007668b) list_single_dyc_row_text_pane_t3

0x0005,

0xfd2c,	// (0x0007bece) list_single_dyc_row_text_pane_t_ParamLimits

0xfd2c,	// (0x0007bece) list_single_dyc_row_text_pane_t

0xa50d,	// (0x000766af) list_single_dyc_row_pane_g1_ParamLimits

0xa50d,	// (0x000766af) list_single_dyc_row_pane_g1

0xa519,	// (0x000766bb) list_single_dyc_row_pane_g2_ParamLimits

0xa519,	// (0x000766bb) list_single_dyc_row_pane_g2

0xa525,	// (0x000766c7) list_single_dyc_row_pane_g3_ParamLimits

0xa525,	// (0x000766c7) list_single_dyc_row_pane_g3

0xa531,	// (0x000766d3) list_single_dyc_row_pane_g4_ParamLimits

0xa531,	// (0x000766d3) list_single_dyc_row_pane_g4

0x0003,

0xfd39,	// (0x0007bedb) list_single_dyc_row_pane_g_ParamLimits

0xfd39,	// (0x0007bedb) list_single_dyc_row_pane_g

0xa53d,	// (0x000766df) list_single_dyc_row_text_pane_ParamLimits

0xa53d,	// (0x000766df) list_single_dyc_row_text_pane

0x90f0,	// (0x00075292) bg_sp_fs_scroll_pane

0xe76f,	// (0x0007a911) thumb_sp_fs_scroll_pane

0xa2b8,	// (0x0007645a) list_medium_line_g1_ParamLimits

0xa2b8,	// (0x0007645a) list_medium_line_g1

0xa55c,	// (0x000766fe) list_medium_line_t1_ParamLimits

0xa55c,	// (0x000766fe) list_medium_line_t1

0xa03a,	// (0x000761dc) list_medium_line_x2_g1_ParamLimits

0xa03a,	// (0x000761dc) list_medium_line_x2_g1

0x1215,	// (0x0006d3b7) list_medium_line_x2_g2_ParamLimits

0x1215,	// (0x0006d3b7) list_medium_line_x2_g2

0x0001,

0xfd42,	// (0x0007bee4) list_medium_line_x2_g_ParamLimits

0xfd42,	// (0x0007bee4) list_medium_line_x2_g

0xa571,	// (0x00076713) list_medium_line_x2_t1_ParamLimits

0xa571,	// (0x00076713) list_medium_line_x2_t1

0xa03a,	// (0x000761dc) list_medium_line_x3_g1_ParamLimits

0xa03a,	// (0x000761dc) list_medium_line_x3_g1

0x1215,	// (0x0006d3b7) list_medium_line_x3_g2_ParamLimits

0x1215,	// (0x0006d3b7) list_medium_line_x3_g2

0x0001,

0xfd42,	// (0x0007bee4) list_medium_line_x3_g_ParamLimits

0xfd42,	// (0x0007bee4) list_medium_line_x3_g

0xa571,	// (0x00076713) list_medium_line_x3_t1_ParamLimits

0xa571,	// (0x00076713) list_medium_line_x3_t1

0xe778,	// (0x0007a91a) thumb_sp_fs_scroll_pane_g1

0xe781,	// (0x0007a923) thumb_sp_fs_scroll_pane_g2

0xe78a,	// (0x0007a92c) thumb_sp_fs_scroll_pane_g3

0x0002,

0xfd47,	// (0x0007bee9) thumb_sp_fs_scroll_pane_g

0xe778,	// (0x0007a91a) bg_sp_fs_scroll_pane_g1

0xe781,	// (0x0007a923) bg_sp_fs_scroll_pane_g2

0xe78a,	// (0x0007a92c) bg_sp_fs_scroll_pane_g3

0x0002,

0xfd47,	// (0x0007bee9) bg_sp_fs_scroll_pane_g

0xa03a,	// (0x000761dc) list_medium_line_x2_t3_g4_g1_ParamLimits

0xa03a,	// (0x000761dc) list_medium_line_x2_t3_g4_g1

0x1235,	// (0x0006d3d7) list_medium_line_x2_t3_g4_g2_ParamLimits

0x1235,	// (0x0006d3d7) list_medium_line_x2_t3_g4_g2

0x1215,	// (0x0006d3b7) list_medium_line_x2_t3_g4_g3_ParamLimits

0x1215,	// (0x0006d3b7) list_medium_line_x2_t3_g4_g3

0xa046,	// (0x000761e8) list_medium_line_x2_t3_g4_g4_ParamLimits

0xa046,	// (0x000761e8) list_medium_line_x2_t3_g4_g4

0x0003,

0xf2c7,	// (0x0007b469) list_medium_line_x2_t3_g4_g_ParamLimits

0xf2c7,	// (0x0007b469) list_medium_line_x2_t3_g4_g

0x7df5,	// (0x00073f97) list_medium_line_x2_t3_g4_t1_ParamLimits

0x7df5,	// (0x00073f97) list_medium_line_x2_t3_g4_t1

0x7e0f,	// (0x00073fb1) list_medium_line_x2_t3_g4_t2_ParamLimits

0x7e0f,	// (0x00073fb1) list_medium_line_x2_t3_g4_t2

0xa067,	// (0x00076209) list_medium_line_x2_t3_g4_t3_ParamLimits

0xa067,	// (0x00076209) list_medium_line_x2_t3_g4_t3

0x0002,

0xfd4e,	// (0x0007bef0) list_medium_line_x2_t3_g4_t_ParamLimits

0xfd4e,	// (0x0007bef0) list_medium_line_x2_t3_g4_t

0xa2b8,	// (0x0007645a) list_medium_line_g2_g1_ParamLimits

0xa2b8,	// (0x0007645a) list_medium_line_g2_g1

0xa2c4,	// (0x00076466) list_medium_line_g2_g2_ParamLimits

0xa2c4,	// (0x00076466) list_medium_line_g2_g2

0x0001,

0xfa00,	// (0x0007bba2) list_medium_line_g2_g_ParamLimits

0xfa00,	// (0x0007bba2) list_medium_line_g2_g

0xa587,	// (0x00076729) list_medium_line_g2_t1_ParamLimits

0xa587,	// (0x00076729) list_medium_line_g2_t1

0xa2b8,	// (0x0007645a) list_medium_line_t3_g2_g1_ParamLimits

0xa2b8,	// (0x0007645a) list_medium_line_t3_g2_g1

0xa2c4,	// (0x00076466) list_medium_line_t3_g2_g2_ParamLimits

0xa2c4,	// (0x00076466) list_medium_line_t3_g2_g2

0x0001,

0xfa00,	// (0x0007bba2) list_medium_line_t3_g2_g_ParamLimits

0xfa00,	// (0x0007bba2) list_medium_line_t3_g2_g

0x7e28,	// (0x00073fca) list_medium_line_t3_g2_t1_ParamLimits

0x7e28,	// (0x00073fca) list_medium_line_t3_g2_t1

0x7e42,	// (0x00073fe4) list_medium_line_t3_g2_t2_ParamLimits

0x7e42,	// (0x00073fe4) list_medium_line_t3_g2_t2

0x7e57,	// (0x00073ff9) list_medium_line_t3_g2_t3_ParamLimits

0x7e57,	// (0x00073ff9) list_medium_line_t3_g2_t3

0x0002,

0xfd55,	// (0x0007bef7) list_medium_line_t3_g2_t_ParamLimits

0xfd55,	// (0x0007bef7) list_medium_line_t3_g2_t

0xa462,	// (0x00076604) list_medium_line_right_icon_g1

0xa59c,	// (0x0007673e) list_medium_line_right_icon_t1

0xa2b8,	// (0x0007645a) list_medium_line_t2_g1_ParamLimits

0xa2b8,	// (0x0007645a) list_medium_line_t2_g1

0x7e71,	// (0x00074013) list_medium_line_t2_t1_ParamLimits

0x7e71,	// (0x00074013) list_medium_line_t2_t1

0x7e8b,	// (0x0007402d) list_medium_line_t2_t2_ParamLimits

0x7e8b,	// (0x0007402d) list_medium_line_t2_t2

0x0001,

0xfd5c,	// (0x0007befe) list_medium_line_t2_t_ParamLimits

0xfd5c,	// (0x0007befe) list_medium_line_t2_t

0xa2b8,	// (0x0007645a) list_medium_line_t3_g1_ParamLimits

0xa2b8,	// (0x0007645a) list_medium_line_t3_g1

0x7ea4,	// (0x00074046) list_medium_line_t3_t1_ParamLimits

0x7ea4,	// (0x00074046) list_medium_line_t3_t1

0x7ebb,	// (0x0007405d) list_medium_line_t3_t2_ParamLimits

0x7ebb,	// (0x0007405d) list_medium_line_t3_t2

0x7ed0,	// (0x00074072) list_medium_line_t3_t3_ParamLimits

0x7ed0,	// (0x00074072) list_medium_line_t3_t3

0x0002,

0xfd61,	// (0x0007bf03) list_medium_line_t3_t_ParamLimits

0xfd61,	// (0x0007bf03) list_medium_line_t3_t

0xa2b8,	// (0x0007645a) list_medium_line_g3_g1_ParamLimits

0xa2b8,	// (0x0007645a) list_medium_line_g3_g1

0xa5aa,	// (0x0007674c) list_medium_line_g3_g2_ParamLimits

0xa5aa,	// (0x0007674c) list_medium_line_g3_g2

0xa2c4,	// (0x00076466) list_medium_line_g3_g3_ParamLimits

0xa2c4,	// (0x00076466) list_medium_line_g3_g3

0x0002,

0xfd68,	// (0x0007bf0a) list_medium_line_g3_g_ParamLimits

0xfd68,	// (0x0007bf0a) list_medium_line_g3_g

0xa5b6,	// (0x00076758) list_medium_line_g3_t1_ParamLimits

0xa5b6,	// (0x00076758) list_medium_line_g3_t1

0xa2b8,	// (0x0007645a) list_medium_line_t2_g3_g1_ParamLimits

0xa2b8,	// (0x0007645a) list_medium_line_t2_g3_g1

0xa5aa,	// (0x0007674c) list_medium_line_t2_g3_g2_ParamLimits

0xa5aa,	// (0x0007674c) list_medium_line_t2_g3_g2

0xa2c4,	// (0x00076466) list_medium_line_t2_g3_g3_ParamLimits

0xa2c4,	// (0x00076466) list_medium_line_t2_g3_g3

0x0002,

0xfd68,	// (0x0007bf0a) list_medium_line_t2_g3_g_ParamLimits

0xfd68,	// (0x0007bf0a) list_medium_line_t2_g3_g

0x7ee2,	// (0x00074084) list_medium_line_t2_g3_t1_ParamLimits

0x7ee2,	// (0x00074084) list_medium_line_t2_g3_t1

0x7efc,	// (0x0007409e) list_medium_line_t2_g3_t2_ParamLimits

0x7efc,	// (0x0007409e) list_medium_line_t2_g3_t2

0x0001,

0xfd6f,	// (0x0007bf11) list_medium_line_t2_g3_t_ParamLimits

0xfd6f,	// (0x0007bf11) list_medium_line_t2_g3_t

0xa2b8,	// (0x0007645a) list_medium_line_t3_g3_g1_ParamLimits

0xa2b8,	// (0x0007645a) list_medium_line_t3_g3_g1

0xa5aa,	// (0x0007674c) list_medium_line_t3_g3_g2_ParamLimits

0xa5aa,	// (0x0007674c) list_medium_line_t3_g3_g2

0xa2c4,	// (0x00076466) list_medium_line_t3_g3_g3_ParamLimits

0xa2c4,	// (0x00076466) list_medium_line_t3_g3_g3

0x0002,

0xfd68,	// (0x0007bf0a) list_medium_line_t3_g3_g_ParamLimits

0xfd68,	// (0x0007bf0a) list_medium_line_t3_g3_g

0x7f17,	// (0x000740b9) list_medium_line_t3_g3_t1_ParamLimits

0x7f17,	// (0x000740b9) list_medium_line_t3_g3_t1

0x7f30,	// (0x000740d2) list_medium_line_t3_g3_t2_ParamLimits

0x7f30,	// (0x000740d2) list_medium_line_t3_g3_t2

0x7f46,	// (0x000740e8) list_medium_line_t3_g3_t3_ParamLimits

0x7f46,	// (0x000740e8) list_medium_line_t3_g3_t3

0x0002,

0xfd74,	// (0x0007bf16) list_medium_line_t3_g3_t_ParamLimits

0xfd74,	// (0x0007bf16) list_medium_line_t3_g3_t

0xa4cc,	// (0x0007666e) list_medium_line_right_iconx2_g1

0xa462,	// (0x00076604) list_medium_line_right_iconx2_g2

0x0001,

0xfd7b,	// (0x0007bf1d) list_medium_line_right_iconx2_g

0xa5cb,	// (0x0007676d) list_medium_line_right_iconx2_t1

0xa4cc,	// (0x0007666e) list_medium_line_t2_right_iconx2_g1

0xa462,	// (0x00076604) list_medium_line_t2_right_iconx2_g2

0x0001,

0xfd7b,	// (0x0007bf1d) list_medium_line_t2_right_iconx2_g

0x7f60,	// (0x00074102) list_medium_line_t2_right_iconx2_t1

0x7f70,	// (0x00074112) list_medium_line_t2_right_iconx2_t2

0x0001,

0xfd80,	// (0x0007bf22) list_medium_line_t2_right_iconx2_t

0xa5d9,	// (0x0007677b) list_medium_line_x4_t4_t1

0x7f82,	// (0x00074124) list_medium_line_x4_t4_t2

0x7f92,	// (0x00074134) list_medium_line_x4_t4_t3

0x7fa2,	// (0x00074144) list_medium_line_x4_t4_t4

0x0003,

0xfd85,	// (0x0007bf27) list_medium_line_x4_t4_t

0x7ff5,	// (0x00074197) tport_appsw_pane_ParamLimits

0x7ff5,	// (0x00074197) tport_appsw_pane

0x800d,	// (0x000741af) tport_contact_pane_ParamLimits

0x800d,	// (0x000741af) tport_contact_pane

0x8025,	// (0x000741c7) tport_listscroll_pane_ParamLimits

0x8025,	// (0x000741c7) tport_listscroll_pane

0x803f,	// (0x000741e1) cell_tport_appsw_pane_ParamLimits

0x803f,	// (0x000741e1) cell_tport_appsw_pane

0xd648,	// (0x000797ea) tport_appsw_pane_g1_ParamLimits

0xd648,	// (0x000797ea) tport_appsw_pane_g1

0xe793,	// (0x0007a935) tport_contact_pane_g1

0xe122,	// (0x0007a2c4) tport_contact_pane_t1

0xe79c,	// (0x0007a93e) tport_contact_pane_t2

0x0001,

0xfd8e,	// (0x0007bf30) tport_contact_pane_t

0xe7aa,	// (0x0007a94c) list_tport_pane

0xe7b3,	// (0x0007a955) scroll_pane_cp_030

0x8087,	// (0x00074229) cell_tport_appsw_pane_g1

0x8097,	// (0x00074239) cell_tport_appsw_pane_t1

0x80a5,	// (0x00074247) grid_highlight_pane_cp019

0x80ad,	// (0x0007424f) list_tport_double_graphic_pane_ParamLimits

0x80ad,	// (0x0007424f) list_tport_double_graphic_pane

0xa1ea,	// (0x0007638c) list_highlight_pane_cp023_ParamLimits

0xa1ea,	// (0x0007638c) list_highlight_pane_cp023

0x80ba,	// (0x0007425c) list_tport_double_graphic_pane_g1_ParamLimits

0x80ba,	// (0x0007425c) list_tport_double_graphic_pane_g1

0x80c7,	// (0x00074269) list_tport_double_graphic_pane_t1_ParamLimits

0x80c7,	// (0x00074269) list_tport_double_graphic_pane_t1

0x80dc,	// (0x0007427e) list_tport_double_graphic_pane_t2_ParamLimits

0x80dc,	// (0x0007427e) list_tport_double_graphic_pane_t2

0x0001,

0xfd9a,	// (0x0007bf3c) list_tport_double_graphic_pane_t_ParamLimits

0xfd9a,	// (0x0007bf3c) list_tport_double_graphic_pane_t

0x90f0,	// (0x00075292) main_cale_note_pane

0x5bc3,	// (0x00071d65) cell_vitu2_function_top_wide_pane_cp01_ParamLimits

0x5bc3,	// (0x00071d65) cell_vitu2_function_top_wide_pane_cp01

0x760c,	// (0x000737ae) wait_bar_pane_cp05_ParamLimits

0xa1ea,	// (0x0007638c) listscroll_cmail_pane

0xe7bc,	// (0x0007a95e) list_cmail_pane

0x80ee,	// (0x00074290) list_cmail_body_pane

0x8103,	// (0x000742a5) list_single_cmail_header_caption_pane

0x811c,	// (0x000742be) list_single_cmail_header_detail_pane_ParamLimits

0x811c,	// (0x000742be) list_single_cmail_header_detail_pane

0xe7cc,	// (0x0007a96e) list_single_cmail_header_caption_pane_t1

0x8150,	// (0x000742f2) list_single_cmail_header_detail_pane_g1_ParamLimits

0x8150,	// (0x000742f2) list_single_cmail_header_detail_pane_g1

0xa5e7,	// (0x00076789) list_single_cmail_header_detail_pane_g2_ParamLimits

0xa5e7,	// (0x00076789) list_single_cmail_header_detail_pane_g2

0x0002,

0xfd9f,	// (0x0007bf41) list_single_cmail_header_detail_pane_g_ParamLimits

0xfd9f,	// (0x0007bf41) list_single_cmail_header_detail_pane_g

0x8168,	// (0x0007430a) list_single_cmail_header_detail_pane_t1_ParamLimits

0x8168,	// (0x0007430a) list_single_cmail_header_detail_pane_t1

0x81a6,	// (0x00074348) list_single_cmail_header_editor_pane_bg_ParamLimits

0x81a6,	// (0x00074348) list_single_cmail_header_editor_pane_bg

0xe7e7,	// (0x0007a989) list_cmail_body_pane_g1

0xe7f0,	// (0x0007a992) list_cmail_body_pane_t1

0xd668,	// (0x0007980a) list_single_cmail_header_editor_pane_bg_g1

0xabc1,	// (0x00076d63) list_single_cmail_header_editor_pane_bg_g1_copy1

0xd678,	// (0x0007981a) list_single_cmail_header_editor_pane_bg_g1_copy2

0xd670,	// (0x00079812) list_single_cmail_header_editor_pane_bg_g1_copy3

0xd8b0,	// (0x00079a52) list_single_cmail_header_editor_pane_bg_g1_copy4

0xd6bc,	// (0x0007985e) list_single_cmail_header_editor_pane_bg_g1_copy4_copy1

0xd6ac,	// (0x0007984e) list_single_cmail_header_editor_pane_bg_g1_copy4_copy2

0xd6b4,	// (0x00079856) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3

0xaba1,	// (0x00076d43) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3_copy1

0x81bf,	// (0x00074361) calenote_gesture_pane_ParamLimits

0x81bf,	// (0x00074361) calenote_gesture_pane

0x81df,	// (0x00074381) calenote_window_pane_ParamLimits

0x81df,	// (0x00074381) calenote_window_pane

0xe7fe,	// (0x0007a9a0) popup_note_window_cp01

0x81fb,	// (0x0007439d) calenote_swipe_1_pane_ParamLimits

0x81fb,	// (0x0007439d) calenote_swipe_1_pane

0x79e0,	// (0x00073b82) calenote_swipe_2_pane_ParamLimits

0x79e0,	// (0x00073b82) calenote_swipe_2_pane

0xe619,	// (0x0007a7bb) calenote_swipe_1_pane_g1_ParamLimits

0xe619,	// (0x0007a7bb) calenote_swipe_1_pane_g1

0xe626,	// (0x0007a7c8) calenote_swipe_1_pane_g2_ParamLimits

0xe626,	// (0x0007a7c8) calenote_swipe_1_pane_g2

0x0001,

0xfcc3,	// (0x0007be65) calenote_swipe_1_pane_g_ParamLimits

0xfcc3,	// (0x0007be65) calenote_swipe_1_pane_g

0xe810,	// (0x0007a9b2) calenote_swipe_1_pane_t1_ParamLimits

0xe810,	// (0x0007a9b2) calenote_swipe_1_pane_t1

0xe619,	// (0x0007a7bb) calenote_swipe_2_pane_g1_ParamLimits

0xe619,	// (0x0007a7bb) calenote_swipe_2_pane_g1

0xe82f,	// (0x0007a9d1) calenote_swipe_2_pane_g2_ParamLimits

0xe82f,	// (0x0007a9d1) calenote_swipe_2_pane_g2

0x0001,

0xfdab,	// (0x0007bf4d) calenote_swipe_2_pane_g_ParamLimits

0xfdab,	// (0x0007bf4d) calenote_swipe_2_pane_g

0xe83b,	// (0x0007a9dd) calenote_swipe_2_pane_t1_ParamLimits

0xe83b,	// (0x0007a9dd) calenote_swipe_2_pane_t1

0x90f0,	// (0x00075292) main_mup_navstr_pane

0x4879,	// (0x00070a1b) main_mup3_pane_t7_ParamLimits

0x4879,	// (0x00070a1b) main_mup3_pane_t7

0x98ad,	// (0x00075a4f) main_mp4_pane_g6_ParamLimits

0x98ad,	// (0x00075a4f) main_mp4_pane_g6

0x9a51,	// (0x00075bf3) main_image3_pane_t4_ParamLimits

0x9a51,	// (0x00075bf3) main_image3_pane_t4

0x8210,	// (0x000743b2) popup_navstr_preview_pane_ParamLimits

0x8210,	// (0x000743b2) popup_navstr_preview_pane

0x8224,	// (0x000743c6) scroll_navstr_pane_ParamLimits

0x8224,	// (0x000743c6) scroll_navstr_pane

0x90f0,	// (0x00075292) bg_popup_preview_window_pane_cp04

0xe862,	// (0x0007aa04) popup_navstr_preview_pane_t1

0x8238,	// (0x000743da) scroll_navstr_pane_g1_ParamLimits

0x8238,	// (0x000743da) scroll_navstr_pane_g1

0x824c,	// (0x000743ee) scroll_navstr_pane_t1_ParamLimits

0x824c,	// (0x000743ee) scroll_navstr_pane_t1

0xe807,	// (0x0007a9a9) bg_button_pane_cp014

0xe807,	// (0x0007a9a9) bg_button_pane_cp030

0xa408,	// (0x000765aa) list_double_fisheye_pane_g4_ParamLimits

0xa408,	// (0x000765aa) list_double_fisheye_pane_g4

0xa414,	// (0x000765b6) list_double_fisheye_pane_g5_ParamLimits

0xa414,	// (0x000765b6) list_double_fisheye_pane_g5

0xcb13,	// (0x00078cb5) sp_fs_scroll_pane_cp03

0xe70c,	// (0x0007a8ae) main_sp_fs_ctrlbar_pane_g1_ParamLimits

0xe718,	// (0x0007a8ba) main_sp_fs_ctrlbar_pane_g2_ParamLimits

0xfce0,	// (0x0007be82) main_sp_fs_ctrlbar_pane_g_ParamLimits

0xe724,	// (0x0007a8c6) main_sp_fs_ctrlbar_pane_t1_ParamLimits

0xe7c4,	// (0x0007a966) sp_fs_scroll_pane_cp02

0xa8b7,	// (0x00076a59) popup_sp_fs_calendar_preview_list_single_pane_ParamLimits

0xa8b7,	// (0x00076a59) popup_sp_fs_calendar_preview_list_single_pane

0x90f0,	// (0x00075292) main_cam6_pano_pane

0x9158,	// (0x000752fa) main_mup3_pane_ParamLimits

0x90f0,	// (0x00075292) main_phacti_pane

0x74df,	// (0x00073681) bg_button_pane_cp11

0x74f9,	// (0x0007369b) main_mobtv_info_pane_g2_ParamLimits

0x74f9,	// (0x0007369b) main_mobtv_info_pane_g2

0x0001,

0xfc40,	// (0x0007bde2) main_mobtv_info_pane_g_ParamLimits

0xfc40,	// (0x0007bde2) main_mobtv_info_pane_g

0x76d6,	// (0x00073878) sc_clock_pane_t5_ParamLimits

0x76d6,	// (0x00073878) sc_clock_pane_t5

0x7768,	// (0x0007390a) main_radioblah_pane_g1_ParamLimits

0xe565,	// (0x0007a707) main_radioblah_pane_t3_ParamLimits

0xe565,	// (0x0007a707) main_radioblah_pane_t3

0xe57d,	// (0x0007a71f) main_radioblah_pane_t4_ParamLimits

0xe57d,	// (0x0007a71f) main_radioblah_pane_t4

0x7790,	// (0x00073932) main_radioblah_text_pane_ParamLimits

0x7790,	// (0x00073932) main_radioblah_text_pane

0x77a2,	// (0x00073944) main_radioblah_info_pane_g1_ParamLimits

0x783b,	// (0x000739dd) main_radioblah_info_pane_t4_ParamLimits

0x783b,	// (0x000739dd) main_radioblah_info_pane_t4

0xa1ea,	// (0x0007638c) main_sp_fs_calendar_pane

0x8262,	// (0x00074404) main_phacti_pane_g1

0x826a,	// (0x0007440c) phacti_note_pane_ParamLimits

0x826a,	// (0x0007440c) phacti_note_pane

0xe879,	// (0x0007aa1b) phacti_term_pane_ParamLimits

0xe879,	// (0x0007aa1b) phacti_term_pane

0xe88e,	// (0x0007aa30) phacti_note_pane_t1_ParamLimits

0xe88e,	// (0x0007aa30) phacti_note_pane_t1

0xa617,	// (0x000767b9) phacti_term_pane_g1

0xa61f,	// (0x000767c1) phacti_term_pane_t1_ParamLimits

0xa61f,	// (0x000767c1) phacti_term_pane_t1

0xe8a5,	// (0x0007aa47) popup_sp_fs_calendar_preview_list_single_pane_g1

0xe8ad,	// (0x0007aa4f) popup_sp_fs_calendar_preview_list_single_pane_g2

0x0001,

0xfdb5,	// (0x0007bf57) popup_sp_fs_calendar_preview_list_single_pane_g

0xe8b5,	// (0x0007aa57) popup_sp_fs_calendar_preview_list_single_pane_t1_ParamLimits

0xe8b5,	// (0x0007aa57) popup_sp_fs_calendar_preview_list_single_pane_t1

0xe8cb,	// (0x0007aa6d) aid_popup_sp_fs_bg_corner_pane

0xcc1f,	// (0x00078dc1) popup_sp_fs_calendar_preview_bg_pane_g1

0x90f0,	// (0x00075292) popup_sp_fs_calendar_preview_bg_pane

0x109e,	// (0x0006d240) popup_sp_fs_calendar_preview_list_pane

0xc809,	// (0x000789ab) bg_main_sp_fs_cale_pane_ParamLimits

0xc809,	// (0x000789ab) bg_main_sp_fs_cale_pane

0xa649,	// (0x000767eb) listscroll_cale_mrui_pane_ParamLimits

0xa649,	// (0x000767eb) listscroll_cale_mrui_pane

0xa65e,	// (0x00076800) listscroll_sp_fs_schedule_track_pane

0xa667,	// (0x00076809) main_sp_fs_ctrlbar_pane_cp01_ParamLimits

0xa667,	// (0x00076809) main_sp_fs_ctrlbar_pane_cp01

0xe8dc,	// (0x0007aa7e) main_sp_fs_ribbon_pane

0xa67a,	// (0x0007681c) popup_sp_fs_cale_preview_window

0x82df,	// (0x00074481) list_single_sp_fs_schedule_track_pane_ParamLimits

0x82df,	// (0x00074481) list_single_sp_fs_schedule_track_pane

0xa1ea,	// (0x0007638c) bg_sp_fs_highlight_list_pane_cp03_ParamLimits

0xa1ea,	// (0x0007638c) bg_sp_fs_highlight_list_pane_cp03

0x82f5,	// (0x00074497) list_single_sp_fs_schedule_track_pane_g1_ParamLimits

0x82f5,	// (0x00074497) list_single_sp_fs_schedule_track_pane_g1

0x8301,	// (0x000744a3) list_single_sp_fs_schedule_track_pane_g2_ParamLimits

0x8301,	// (0x000744a3) list_single_sp_fs_schedule_track_pane_g2

0x0001,

0xfdba,	// (0x0007bf5c) list_single_sp_fs_schedule_track_pane_g_ParamLimits

0xfdba,	// (0x0007bf5c) list_single_sp_fs_schedule_track_pane_g

0x830d,	// (0x000744af) list_single_sp_fs_schedule_track_pane_t1_ParamLimits

0x830d,	// (0x000744af) list_single_sp_fs_schedule_track_pane_t1

0x8327,	// (0x000744c9) sp_fs_schedule_track_pane_ParamLimits

0x8327,	// (0x000744c9) sp_fs_schedule_track_pane

0xe8e4,	// (0x0007aa86) sp_fs_schedule_track_pane_g1

0xe8ec,	// (0x0007aa8e) sp_fs_schedule_track_pane_g2

0xe8f4,	// (0x0007aa96) sp_fs_schedule_track_pane_g3

0xe8fc,	// (0x0007aa9e) sp_fs_schedule_track_pane_g4

0xe904,	// (0x0007aaa6) sp_fs_schedule_track_pane_g5

0x0004,

0xfdbf,	// (0x0007bf61) sp_fs_schedule_track_pane_g

0xd668,	// (0x0007980a) bg_sp_fs_schedule_viewer_highlight_g1

0xabc1,	// (0x00076d63) bg_sp_fs_schedule_viewer_highlight_g2

0xd670,	// (0x00079812) bg_sp_fs_schedule_viewer_highlight_g3

0xd678,	// (0x0007981a) bg_sp_fs_schedule_viewer_highlight_g4

0xd8b0,	// (0x00079a52) bg_sp_fs_schedule_viewer_highlight_g5

0xd6ac,	// (0x0007984e) bg_sp_fs_schedule_viewer_highlight_g6

0xd6b4,	// (0x00079856) bg_sp_fs_schedule_viewer_highlight_g7

0xd6bc,	// (0x0007985e) bg_sp_fs_schedule_viewer_highlight_g8

0xaba1,	// (0x00076d43) bg_sp_fs_schedule_viewer_highlight_g9

0x0008,

0xfdca,	// (0x0007bf6c) bg_sp_fs_schedule_viewer_highlight_g

0x90f0,	// (0x00075292) bg_main_sp_fs_ribbon_pane

0x8338,	// (0x000744da) main_sp_fs_ribbon_pane_g1

0xe90c,	// (0x0007aaae) main_sp_fs_ribbon_pane_t1

0x8341,	// (0x000744e3) main_sp_fs_ribbon_pane_t2

0xe91b,	// (0x0007aabd) main_sp_fs_ribbon_pane_t3

0x0002,

0xfddd,	// (0x0007bf7f) main_sp_fs_ribbon_pane_t

0xe92a,	// (0x0007aacc) main_sp_fs_ribbon_scheduler_pane

0xe932,	// (0x0007aad4) bg_main_sp_fs_ribbon_pane_g1

0xe93b,	// (0x0007aadd) bg_main_sp_fs_ribbon_pane_g2

0xe944,	// (0x0007aae6) bg_main_sp_fs_ribbon_pane_g3

0x0002,

0xfde4,	// (0x0007bf86) bg_main_sp_fs_ribbon_pane_g

0xe94c,	// (0x0007aaee) main_sp_fs_ribbon_scheduler_pane_g1

0xe955,	// (0x0007aaf7) main_sp_fs_ribbon_scheduler_pane_g2

0xe95e,	// (0x0007ab00) main_sp_fs_ribbon_scheduler_pane_g3

0x0002,

0xfdeb,	// (0x0007bf8d) main_sp_fs_ribbon_scheduler_pane_g

0xe967,	// (0x0007ab09) list_cale_mrui_pane

0x8350,	// (0x000744f2) sp_fs_scroll_pane_cp07_ParamLimits

0x8350,	// (0x000744f2) sp_fs_scroll_pane_cp07

0x836c,	// (0x0007450e) bg_sp_fs_schedule_viewer_highlight_ParamLimits

0x836c,	// (0x0007450e) bg_sp_fs_schedule_viewer_highlight

0xe974,	// (0x0007ab16) list_single_sp_fs_schedule_track_pane_cp01

0xe97c,	// (0x0007ab1e) list_sp_fs_schedule_track_pane

0xe984,	// (0x0007ab26) sp_fs_scroll_pane_cp06_ParamLimits

0xe984,	// (0x0007ab26) sp_fs_scroll_pane_cp06

0xcc1f,	// (0x00078dc1) bgmain_sp_fs_calendar_pane_g1

0x837c,	// (0x0007451e) list_single_cale_mrui_pane_ParamLimits

0x837c,	// (0x0007451e) list_single_cale_mrui_pane

0xa68c,	// (0x0007682e) list_single_cale_mrui_row_pane_ParamLimits

0xa68c,	// (0x0007682e) list_single_cale_mrui_row_pane

0xa699,	// (0x0007683b) list_single_cale_mrui_row_pane_g1_ParamLimits

0xa699,	// (0x0007683b) list_single_cale_mrui_row_pane_g1

0xa6d1,	// (0x00076873) list_single_cale_mrui_row_pane_t1_ParamLimits

0xa6d1,	// (0x00076873) list_single_cale_mrui_row_pane_t1

0x839e,	// (0x00074540) list_single_cale_mrui_row_pane_t2_ParamLimits

0x839e,	// (0x00074540) list_single_cale_mrui_row_pane_t2

0xa6e3,	// (0x00076885) list_single_cale_mrui_row_pane_t3_ParamLimits

0xa6e3,	// (0x00076885) list_single_cale_mrui_row_pane_t3

0xa712,	// (0x000768b4) list_single_cale_mrui_row_pane_t4_ParamLimits

0xa712,	// (0x000768b4) list_single_cale_mrui_row_pane_t4

0x0003,

0xfdf9,	// (0x0007bf9b) list_single_cale_mrui_row_pane_t_ParamLimits

0xfdf9,	// (0x0007bf9b) list_single_cale_mrui_row_pane_t

0x8406,	// (0x000745a8) list_single_cmail_header_editor_pane_bg_cp01_ParamLimits

0x8406,	// (0x000745a8) list_single_cmail_header_editor_pane_bg_cp01

0x842c,	// (0x000745ce) list_single_cmail_header_editor_pane_bg_cp02_ParamLimits

0x842c,	// (0x000745ce) list_single_cmail_header_editor_pane_bg_cp02

0x844c,	// (0x000745ee) main_radioblah_text_pane_t1_ParamLimits

0x844c,	// (0x000745ee) main_radioblah_text_pane_t1

0xe9a3,	// (0x0007ab45) cam6_indi_pane_cp01

0xe9ab,	// (0x0007ab4d) cam6_mode_pane_cp01

0xe9b3,	// (0x0007ab55) cam6_pano_pane

0xe9bc,	// (0x0007ab5e) cam6_zoom_pane_cp01

0xe9c4,	// (0x0007ab66) cam6_pano_image_pane

0xe9cf,	// (0x0007ab71) cam6_pano_pane_g1

0xe2d2,	// (0x0007a474) cam6_pano_pane_g2

0xe9d8,	// (0x0007ab7a) cam6_pano_pane_g3

0xe9e1,	// (0x0007ab83) cam6_pano_pane_g4

0xd1c1,	// (0x00079363) cam6_pano_pane_g5

0xe9ea,	// (0x0007ab8c) cam6_pano_pane_g6

0xe9f4,	// (0x0007ab96) cam6_pano_pane_g7

0xe9fc,	// (0x0007ab9e) cam6_pano_pane_g8

0xea05,	// (0x0007aba7) cam6_pano_pane_g9

0x0008,

0xfe02,	// (0x0007bfa4) cam6_pano_pane_g

0x90f0,	// (0x00075292) main_browser_tag_pane

0xe85a,	// (0x0007a9fc) grid_navstr_albumart_pane

0xea10,	// (0x0007abb2) cell_navstr_albumart_pane_ParamLimits

0xea10,	// (0x0007abb2) cell_navstr_albumart_pane

0xb553,	// (0x000776f5) cell_navstr_albumart_pane_g1

0xc61a,	// (0x000787bc) cell_navstr_albumart_pane_g2

0xc62a,	// (0x000787cc) cell_navstr_albumart_pane_g3

0xc622,	// (0x000787c4) cell_navstr_albumart_pane_g4

0x0003,

0xfe15,	// (0x0007bfb7) cell_navstr_albumart_pane_g

0x8467,	// (0x00074609) bt_list_pane_ParamLimits

0x8467,	// (0x00074609) bt_list_pane

0xea32,	// (0x0007abd4) bt_list_pane_t1

0xea41,	// (0x0007abe3) bt_list_pane_t2

0x0001,

0xfe1e,	// (0x0007bfc0) bt_list_pane_t

0x90f0,	// (0x00075292) main_cale_prevew_pane

0x847c,	// (0x0007461e) popup_cale_preview_window_ParamLimits

0x847c,	// (0x0007461e) popup_cale_preview_window

0xa1ea,	// (0x0007638c) bg_popup_preview_window_pane_cp05_ParamLimits

0xa1ea,	// (0x0007638c) bg_popup_preview_window_pane_cp05

0xea50,	// (0x0007abf2) list_cale_preview_pane_ParamLimits

0xea50,	// (0x0007abf2) list_cale_preview_pane

0xea5c,	// (0x0007abfe) list_double_cale_preview_pane_ParamLimits

0xea5c,	// (0x0007abfe) list_double_cale_preview_pane

0xea6e,	// (0x0007ac10) list_single_cale_preview_pane_ParamLimits

0xea6e,	// (0x0007ac10) list_single_cale_preview_pane

0xea82,	// (0x0007ac24) list_single_cale_preview_pane_g1

0xea8a,	// (0x0007ac2c) list_single_cale_preview_pane_t1_ParamLimits

0xea8a,	// (0x0007ac2c) list_single_cale_preview_pane_t1

0xea9f,	// (0x0007ac41) list_double_cale_preview_pane_g1

0xeaa7,	// (0x0007ac49) list_double_cale_preview_pane_t1_ParamLimits

0xeaa7,	// (0x0007ac49) list_double_cale_preview_pane_t1

0xeabc,	// (0x0007ac5e) list_double_cale_preview_pane_t2_ParamLimits

0xeabc,	// (0x0007ac5e) list_double_cale_preview_pane_t2

0x0001,

0xfe23,	// (0x0007bfc5) list_double_cale_preview_pane_t_ParamLimits

0xfe23,	// (0x0007bfc5) list_double_cale_preview_pane_t

0x90f0,	// (0x00075292) main_ezdial_pane

0xa1ea,	// (0x0007638c) main_sp_fs_email_pane_ParamLimits

0x7a5e,	// (0x00073c00) cmail_ddmenu_btn01_pane_ParamLimits

0x7a5e,	// (0x00073c00) cmail_ddmenu_btn01_pane

0x7a71,	// (0x00073c13) cmail_ddmenu_btn02_pane_ParamLimits

0x7a71,	// (0x00073c13) cmail_ddmenu_btn02_pane

0x7a94,	// (0x00073c36) cmail_ddmenu_btn03_pane_ParamLimits

0x7a94,	// (0x00073c36) cmail_ddmenu_btn03_pane

0x7aba,	// (0x00073c5c) main_sp_fs_ctrlbar_pane_ParamLimits

0x7ade,	// (0x00073c80) main_sp_fs_listscroll_pane_te_cp01_ParamLimits

0x80ee,	// (0x00074290) list_cmail_body_pane_ParamLimits

0x8145,	// (0x000742e7) bg_button_pane_cp12

0xe7da,	// (0x0007a97c) list_single_cmail_header_detail_pane_g3_ParamLimits

0xe7da,	// (0x0007a97c) list_single_cmail_header_detail_pane_g3

0xa5f3,	// (0x00076795) list_single_cmail_header_detail_pane_t2_ParamLimits

0xa5f3,	// (0x00076795) list_single_cmail_header_detail_pane_t2

0x0001,

0xfda6,	// (0x0007bf48) list_single_cmail_header_detail_pane_t_ParamLimits

0xfda6,	// (0x0007bf48) list_single_cmail_header_detail_pane_t

0xa634,	// (0x000767d6) phacti_term_pane_t2_ParamLimits

0xa634,	// (0x000767d6) phacti_term_pane_t2

0x0001,

0xfdb0,	// (0x0007bf52) phacti_term_pane_t_ParamLimits

0xfdb0,	// (0x0007bf52) phacti_term_pane_t

0xead4,	// (0x0007ac76) aid_size_list_single_double

0x8495,	// (0x00074637) popup_ezdial_listscroll_window

0x84b0,	// (0x00074652) popup_number_entry_window_cp01

0xb3f2,	// (0x00077594) bg_popup_call_pane_cp09

0xeae0,	// (0x0007ac82) ezdial_list_pane

0xeae8,	// (0x0007ac8a) scroll_pane_cp23

0xc809,	// (0x000789ab) bg_button_pane_cp028_ParamLimits

0xc809,	// (0x000789ab) bg_button_pane_cp028

0x84be,	// (0x00074660) cmail_ddmenu_btn01_pane_g1_ParamLimits

0x84be,	// (0x00074660) cmail_ddmenu_btn01_pane_g1

0x84ca,	// (0x0007466c) cmail_ddmenu_btn01_pane_g2_ParamLimits

0x84ca,	// (0x0007466c) cmail_ddmenu_btn01_pane_g2

0x0001,

0xfe28,	// (0x0007bfca) cmail_ddmenu_btn01_pane_g_ParamLimits

0xfe28,	// (0x0007bfca) cmail_ddmenu_btn01_pane_g

0xeaf0,	// (0x0007ac92) cmail_ddmenu_btn01_pane_t1_ParamLimits

0xeaf0,	// (0x0007ac92) cmail_ddmenu_btn01_pane_t1

0xc809,	// (0x000789ab) bg_button_pane_cp029_ParamLimits

0xc809,	// (0x000789ab) bg_button_pane_cp029

0x84d6,	// (0x00074678) cmail_ddmenu_btn02_pane_g1_ParamLimits

0x84d6,	// (0x00074678) cmail_ddmenu_btn02_pane_g1

0x84ee,	// (0x00074690) cmail_ddmenu_btn02_pane_t1_ParamLimits

0x84ee,	// (0x00074690) cmail_ddmenu_btn02_pane_t1

0xa1ea,	// (0x0007638c) bg_button_pane_cp031_ParamLimits

0xa1ea,	// (0x0007638c) bg_button_pane_cp031

0x84d6,	// (0x00074678) cmail_ddmenu_btn03_pane_g1_ParamLimits

0x84d6,	// (0x00074678) cmail_ddmenu_btn03_pane_g1

0x84ee,	// (0x00074690) cmail_ddmenu_btn03_pane_t1_ParamLimits

0x84ee,	// (0x00074690) cmail_ddmenu_btn03_pane_t1

0x5449,	// (0x000715eb) cell_dialer2_keypad_pane_t1_ParamLimits

0x5463,	// (0x00071605) cell_dialer2_keypad_pane_t1_copy1_ParamLimits

0x5463,	// (0x00071605) cell_dialer2_keypad_pane_t1_copy1

0x7338,	// (0x000734da) ncimui_group_button_pane

0xa1ea,	// (0x0007638c) main_sp_fs_calendar_pane_ParamLimits

0x8103,	// (0x000742a5) list_single_cmail_header_caption_pane_ParamLimits

0xe8d3,	// (0x0007aa75) aid_recal_txt_sm_pane

0x90f0,	// (0x00075292) mian_recal_day_pane

0xa67a,	// (0x0007681c) popup_sp_fs_cale_preview_window_ParamLimits

0xeb05,	// (0x0007aca7) list_recal_day_pane

0xa75c,	// (0x000768fe) list_single_recal_day_pane_ParamLimits

0xa75c,	// (0x000768fe) list_single_recal_day_pane

0xeb2c,	// (0x0007acce) list_single_recal_day_pane_g1_ParamLimits

0xeb2c,	// (0x0007acce) list_single_recal_day_pane_g1

0xa76e,	// (0x00076910) list_single_recal_day_pane_g2_ParamLimits

0xa76e,	// (0x00076910) list_single_recal_day_pane_g2

0xa77e,	// (0x00076920) list_single_recal_day_pane_g3_ParamLimits

0xa77e,	// (0x00076920) list_single_recal_day_pane_g3

0x8512,	// (0x000746b4) list_single_recal_day_pane_g4_ParamLimits

0x8512,	// (0x000746b4) list_single_recal_day_pane_g4

0xa78a,	// (0x0007692c) list_single_recal_day_pane_g5_ParamLimits

0xa78a,	// (0x0007692c) list_single_recal_day_pane_g5

0xa79a,	// (0x0007693c) list_single_recal_day_pane_g6_ParamLimits

0xa79a,	// (0x0007693c) list_single_recal_day_pane_g6

0x0004,

0xfe37,	// (0x0007bfd9) list_single_recal_day_pane_g_ParamLimits

0xfe37,	// (0x0007bfd9) list_single_recal_day_pane_g

0xa7ae,	// (0x00076950) list_single_recal_day_pane_t1

0xa7c0,	// (0x00076962) list_single_recal_day_pane_t2

0x0001,

0xfe42,	// (0x0007bfe4) list_single_recal_day_pane_t

0x8532,	// (0x000746d4) ncimui_query_button_pane_ParamLimits

0x8532,	// (0x000746d4) ncimui_query_button_pane

0x8542,	// (0x000746e4) ncimui_query_button_pane_t1_ParamLimits

0x8542,	// (0x000746e4) ncimui_query_button_pane_t1

0xeb38,	// (0x0007acda) ncimui_query_button_pane_t2_ParamLimits

0xeb38,	// (0x0007acda) ncimui_query_button_pane_t2

0x0001,

0xfe47,	// (0x0007bfe9) ncimui_query_button_pane_t_ParamLimits

0xfe47,	// (0x0007bfe9) ncimui_query_button_pane_t

0x8555,	// (0x000746f7) query_button_pane_ParamLimits

0x8555,	// (0x000746f7) query_button_pane

0x90f0,	// (0x00075292) bg_button_pane_cp0028

0xeb4b,	// (0x0007aced) query_button_pane_t1

0x34e2,	// (0x0006f684) main_tport_pane_ParamLimits

0x7fb2,	// (0x00074154) bg_popup_window_pane_cp01_ParamLimits

0x7fb2,	// (0x00074154) bg_popup_window_pane_cp01

0x7fcd,	// (0x0007416f) heading_pane_cp08_ParamLimits

0x7fcd,	// (0x0007416f) heading_pane_cp08

0x7fe0,	// (0x00074182) heading_pane_cp07_ParamLimits

0x7fe0,	// (0x00074182) heading_pane_cp07

0x8087,	// (0x00074229) cell_tport_appsw_pane_g2

0x0002,

0xfd93,	// (0x0007bf35) cell_tport_appsw_pane_g

0xa169,	// (0x0007630b) input_candi_list_open_g1

0xad8c,	// (0x00076f2e) list_cale_time_pane_g6_ParamLimits

0xad8c,	// (0x00076f2e) list_cale_time_pane_g6

0x42a5,	// (0x00070447) aid_size_touch_calib_1_ParamLimits

0x42a5,	// (0x00070447) aid_size_touch_calib_1

0x42b7,	// (0x00070459) aid_size_touch_calib_2_ParamLimits

0x42b7,	// (0x00070459) aid_size_touch_calib_2

0x42cf,	// (0x00070471) aid_size_touch_calib_3_ParamLimits

0x42cf,	// (0x00070471) aid_size_touch_calib_3

0x42ed,	// (0x0007048f) aid_size_touch_calib_4_ParamLimits

0x42ed,	// (0x0007048f) aid_size_touch_calib_4

0x4305,	// (0x000704a7) main_touch_calib_button_group_pane_ParamLimits

0x4305,	// (0x000704a7) main_touch_calib_button_group_pane

0x431d,	// (0x000704bf) main_touch_calib_pane_g1_ParamLimits

0x432f,	// (0x000704d1) main_touch_calib_pane_g2_ParamLimits

0x4341,	// (0x000704e3) main_touch_calib_pane_g3_ParamLimits

0x4353,	// (0x000704f5) main_touch_calib_pane_g4_ParamLimits

0xf756,	// (0x0007b8f8) main_touch_calib_pane_g_ParamLimits

0x4365,	// (0x00070507) main_touch_calib_pane_t1_ParamLimits

0x437f,	// (0x00070521) main_touch_calib_pane_t2_ParamLimits

0x4399,	// (0x0007053b) main_touch_calib_pane_t3_ParamLimits

0x43ad,	// (0x0007054f) main_touch_calib_pane_t4_ParamLimits

0x43c1,	// (0x00070563) main_touch_calib_pane_t5_ParamLimits

0xf75f,	// (0x0007b901) main_touch_calib_pane_t_ParamLimits

0xcf7f,	// (0x00079121) list_single_fp_cale_pane_g3_ParamLimits

0xcf7f,	// (0x00079121) list_single_fp_cale_pane_g3

0x9158,	// (0x000752fa) bg_button_pane_cp012_ParamLimits

0x9158,	// (0x000752fa) bg_vkb2_func_pane_cp03_ParamLimits

0x63d8,	// (0x0007257a) cell_vitu2_function_top_pane_g1_ParamLimits

0x9158,	// (0x000752fa) bg_vkb2_func_pane_cp04_ParamLimits

0x72c6,	// (0x00073468) main_ncimui_button_group_pane_ParamLimits

0x72c6,	// (0x00073468) main_ncimui_button_group_pane

0x7326,	// (0x000734c8) main_ncimui_pane_t3_ParamLimits

0x7326,	// (0x000734c8) main_ncimui_pane_t3

0xe870,	// (0x0007aa12) phacti_button_group_pane

0xead4,	// (0x0007ac76) aid_size_list_single_double_ParamLimits

0x8495,	// (0x00074637) popup_ezdial_listscroll_window_ParamLimits

0x84b0,	// (0x00074652) popup_number_entry_window_cp01_ParamLimits

0x8568,	// (0x0007470a) phacti_button_pane_ParamLimits

0x8568,	// (0x0007470a) phacti_button_pane

0x90f0,	// (0x00075292) bg_button_pane_cp14

0xeb59,	// (0x0007acfb) phacti_button_pane_t1

0x8579,	// (0x0007471b) main_touch_calib_button_pane_ParamLimits

0x8579,	// (0x0007471b) main_touch_calib_button_pane

0x9fe4,	// (0x00076186) bg_button_pane_cp18_ParamLimits

0x9fe4,	// (0x00076186) bg_button_pane_cp18

0xeb67,	// (0x0007ad09) main_touch_calib_button_pane_t1_ParamLimits

0xeb67,	// (0x0007ad09) main_touch_calib_button_pane_t1

0xeb7d,	// (0x0007ad1f) main_touch_calib_button_pane_t2_ParamLimits

0xeb7d,	// (0x0007ad1f) main_touch_calib_button_pane_t2

0x0001,

0xfe4c,	// (0x0007bfee) main_touch_calib_button_pane_t_ParamLimits

0xfe4c,	// (0x0007bfee) main_touch_calib_button_pane_t

0x90f0,	// (0x00075292) cell_ncimui_button_pane

0x90f0,	// (0x00075292) bg_button_pane_cp032

0xeb9b,	// (0x0007ad3d) cell_ncimui_button_pane_t1

0x9a31,	// (0x00075bd3) image3_infobar_pane_ParamLimits

0x9a31,	// (0x00075bd3) image3_infobar_pane

0x7702,	// (0x000738a4) fs_bigclock_status_pane_ParamLimits

0x7702,	// (0x000738a4) fs_bigclock_status_pane

0x770f,	// (0x000738b1) main_fs_bigclock_clock_pane_ParamLimits

0x770f,	// (0x000738b1) main_fs_bigclock_clock_pane

0x772b,	// (0x000738cd) main_fs_bigclock_indi_pane_ParamLimits

0x772b,	// (0x000738cd) main_fs_bigclock_indi_pane

0x7744,	// (0x000738e6) main_fs_bigclock_swipe_pane_ParamLimits

0x7744,	// (0x000738e6) main_fs_bigclock_swipe_pane

0x90f0,	// (0x00075292) main_fs_clock_dumped_data

0xe3df,	// (0x0007a581) list_single_fs_bigclock_indicator_pane_g1_ParamLimits

0xe3df,	// (0x0007a581) list_single_fs_bigclock_indicator_pane_g1

0xe3fa,	// (0x0007a59c) list_single_fs_bigclock_indicator_pane_g2_ParamLimits

0xe3fa,	// (0x0007a59c) list_single_fs_bigclock_indicator_pane_g2

0xe414,	// (0x0007a5b6) list_single_fs_bigclock_indicator_pane_g3_ParamLimits

0xe414,	// (0x0007a5b6) list_single_fs_bigclock_indicator_pane_g3

0xe42e,	// (0x0007a5d0) list_single_fs_bigclock_indicator_pane_g4_ParamLimits

0xe42e,	// (0x0007a5d0) list_single_fs_bigclock_indicator_pane_g4

0x0004,

0xfc74,	// (0x0007be16) list_single_fs_bigclock_indicator_pane_g_ParamLimits

0xfc74,	// (0x0007be16) list_single_fs_bigclock_indicator_pane_g

0xe457,	// (0x0007a5f9) list_single_fs_bigclock_indicator_pane_t1_ParamLimits

0xe457,	// (0x0007a5f9) list_single_fs_bigclock_indicator_pane_t1

0xe47f,	// (0x0007a621) list_single_fs_bigclock_indicator_pane_t2_ParamLimits

0xe47f,	// (0x0007a621) list_single_fs_bigclock_indicator_pane_t2

0xe4a7,	// (0x0007a649) list_single_fs_bigclock_indicator_pane_t3_ParamLimits

0xe4a7,	// (0x0007a649) list_single_fs_bigclock_indicator_pane_t3

0xe4cf,	// (0x0007a671) list_single_fs_bigclock_indicator_pane_t4_ParamLimits

0xe4cf,	// (0x0007a671) list_single_fs_bigclock_indicator_pane_t4

0x0004,

0xfc7f,	// (0x0007be21) list_single_fs_bigclock_indicator_pane_t_ParamLimits

0xfc7f,	// (0x0007be21) list_single_fs_bigclock_indicator_pane_t

0xeba9,	// (0x0007ad4b) image3_infobar_fav_pane_ParamLimits

0xeba9,	// (0x0007ad4b) image3_infobar_fav_pane

0xebb9,	// (0x0007ad5b) image3_infobar_loc_pane_ParamLimits

0xebb9,	// (0x0007ad5b) image3_infobar_loc_pane

0xebcd,	// (0x0007ad6f) image3_infobar_time_pane_ParamLimits

0xebcd,	// (0x0007ad6f) image3_infobar_time_pane

0xcc1f,	// (0x00078dc1) image3_infobar_time_pane_g1

0xebdd,	// (0x0007ad7f) image3_infobar_time_pane_t1

0xcc1f,	// (0x00078dc1) image3_infobar_loc_pane_g1

0xebeb,	// (0x0007ad8d) image3_infobar_loc_pane_g2

0x0001,

0xfe51,	// (0x0007bff3) image3_infobar_loc_pane_g

0xebf3,	// (0x0007ad95) image3_infobar_loc_pane_t1

0xcc1f,	// (0x00078dc1) image3_infobar_fav_pane_g1

0xec01,	// (0x0007ada3) image3_infobar_fav_pane_g2

0x0001,

0xfe56,	// (0x0007bff8) image3_infobar_fav_pane_g

0xec09,	// (0x0007adab) fs_bigclock_status_battery_pane

0xec12,	// (0x0007adb4) fs_bigclock_status_signal_pane

0xec1b,	// (0x0007adbd) fs_bigclock_status_title_pane

0xec24,	// (0x0007adc6) fs_bigclock_status_signal_pane_g1

0xec2d,	// (0x0007adcf) fs_bigclock_status_signal_pane_g2

0x0001,

0xfe5b,	// (0x0007bffd) fs_bigclock_status_signal_pane_g

0xec35,	// (0x0007add7) fs_bigclock_status_battery_pane_g1

0xec3e,	// (0x0007ade0) fs_bigclock_status_battery_pane_g2

0x0001,

0xfe60,	// (0x0007c002) fs_bigclock_status_battery_pane_g

0xec46,	// (0x0007ade8) fs_bigclock_status_title_pane_t1

0xcc1f,	// (0x00078dc1) main_fs_bigclock_clock_pane_g1

0x858e,	// (0x00074730) main_fs_bigclock_clock_pane_g2

0x858e,	// (0x00074730) main_fs_bigclock_clock_pane_g3

0x858e,	// (0x00074730) main_fs_bigclock_clock_pane_g4

0x0003,

0xfe65,	// (0x0007c007) main_fs_bigclock_clock_pane_g

0x8596,	// (0x00074738) main_fs_bigclock_clock_pane_t1

0x85a4,	// (0x00074746) main_fs_bigclock_clock_pane_t2

0x0001,

0xfe6e,	// (0x0007c010) main_fs_bigclock_clock_pane_t

0xec54,	// (0x0007adf6) list_single_fs_bigclock_indicator_pane_ParamLimits

0xec54,	// (0x0007adf6) list_single_fs_bigclock_indicator_pane

0x85b3,	// (0x00074755) list_single_fs_bigclock_pane_ParamLimits

0x85b3,	// (0x00074755) list_single_fs_bigclock_pane

0xec6e,	// (0x0007ae10) main_fs_bigclock_indicator_pane_t1

0xec7d,	// (0x0007ae1f) list_single_fs_bigclock_pane_g1

0xec85,	// (0x0007ae27) list_single_fs_bigclock_pane_t1

0xcc1f,	// (0x00078dc1) main_fs_bigclock_swipe_pane_g1

0xecc8,	// (0x0007ae6a) main_fs_bigclock_swipe_pane_g2

0x0001,

0xfe7f,	// (0x0007c021) main_fs_bigclock_swipe_pane_g

0xecd0,	// (0x0007ae72) main_fs_bigclock_swipe_pane_t1_ParamLimits

0xecd0,	// (0x0007ae72) main_fs_bigclock_swipe_pane_t1

0x241e,	// (0x0006e5c0) call_type_pane_ParamLimits

0x90f0,	// (0x00075292) main_btmg_pane

0xa6c5,	// (0x00076867) list_single_cale_mrui_row_pane_g2_ParamLimits

0xa6c5,	// (0x00076867) list_single_cale_mrui_row_pane_g2

0x0002,

0xfdf2,	// (0x0007bf94) list_single_cale_mrui_row_pane_g_ParamLimits

0xfdf2,	// (0x0007bf94) list_single_cale_mrui_row_pane_g

0xa74b,	// (0x000768ed) list_recal_vselct_arw_lo_pane

0xeb24,	// (0x0007acc6) list_recal_vselct_arw_up_pane

0xa753,	// (0x000768f5) list_recal_vselct_pane

0x8616,	// (0x000747b8) btmg_button_pane

0x8620,	// (0x000747c2) main_btmg_pane_g1

0x90f0,	// (0x00075292) bg_button_pane_cp044

0xeced,	// (0x0007ae8f) btmg_button_pane_t1

0xc7f5,	// (0x00078997) aid_listscroll_gen

0xa1ea,	// (0x0007638c) main_cntbar_detail_pane

0xe7bc,	// (0x0007a95e) list_cmail_folder_pane

0xcb13,	// (0x00078cb5) sp_fs_scroll_pane_cp03_ParamLimits

0x862a,	// (0x000747cc) list_single_fs_dyc_pane_cp01_ParamLimits

0x862a,	// (0x000747cc) list_single_fs_dyc_pane_cp01

0xecfb,	// (0x0007ae9d) aid_size_cmail_indent

0xa7d2,	// (0x00076974) list_single_dyc_row_pane_cp01

0x8672,	// (0x00074814) cntbar_detail_list_pane_ParamLimits

0x8672,	// (0x00074814) cntbar_detail_list_pane

0x86be,	// (0x00074860) main_cntbar_detail_cont_pane_ParamLimits

0x86be,	// (0x00074860) main_cntbar_detail_cont_pane

0xcb13,	// (0x00078cb5) scroll_pane_cp032_ParamLimits

0xcb13,	// (0x00078cb5) scroll_pane_cp032

0x86d2,	// (0x00074874) cntbar_detail_list_event_pane_ParamLimits

0x86d2,	// (0x00074874) cntbar_detail_list_event_pane

0x8682,	// (0x00074824) cntbar_detail_list_shct_pane

0xac0f,	// (0x00076db1) aid_list_gen

0xed04,	// (0x0007aea6) aid_scroll

0xed0d,	// (0x0007aeaf) aid_size_touch_scroll_bar

0x6aab,	// (0x00072c4d) aid_list_double

0xe1ea,	// (0x0007a38c) aid_list_single

0xe1ea,	// (0x0007a38c) aid_list_single_lg

0x86e2,	// (0x00074884) aid_list_z_g_a_sm

0x86ea,	// (0x0007488c) aid_list_z_g_d

0x86f2,	// (0x00074894) aid_txt_z_prm

0x8700,	// (0x000748a2) aid_txt_z_prm_cp01

0x870e,	// (0x000748b0) aid_txt_z_sec

0x871c,	// (0x000748be) main_cntbar_detail_cont_pane_g1_ParamLimits

0x871c,	// (0x000748be) main_cntbar_detail_cont_pane_g1

0x8730,	// (0x000748d2) main_cntbar_detail_cont_pane_g2_ParamLimits

0x8730,	// (0x000748d2) main_cntbar_detail_cont_pane_g2

0x0001,

0xfe84,	// (0x0007c026) main_cntbar_detail_cont_pane_g_ParamLimits

0xfe84,	// (0x0007c026) main_cntbar_detail_cont_pane_g

0xed16,	// (0x0007aeb8) main_cntbar_detail_cont_pane_t1

0xed24,	// (0x0007aec6) main_cntbar_detail_cont_pane_t2

0xed32,	// (0x0007aed4) main_cntbar_detail_cont_pane_t3

0x0002,

0xfe89,	// (0x0007c02b) main_cntbar_detail_cont_pane_t

0x8740,	// (0x000748e2) cell_cntbar_detail_list_shct_pane_ParamLimits

0x8740,	// (0x000748e2) cell_cntbar_detail_list_shct_pane

0xed40,	// (0x0007aee2) cntbar_detail_list_shct_pane_g1

0xed57,	// (0x0007aef9) cntbar_detail_list_shct_pane_g2

0x0001,

0xfe90,	// (0x0007c032) cntbar_detail_list_shct_pane_g

0x8754,	// (0x000748f6) cntbar_detail_list_event_pane_g1_ParamLimits

0x8754,	// (0x000748f6) cntbar_detail_list_event_pane_g1

0x8760,	// (0x00074902) cntbar_detail_list_event_pane_g2_ParamLimits

0x8760,	// (0x00074902) cntbar_detail_list_event_pane_g2

0x0005,

0xfe95,	// (0x0007c037) cntbar_detail_list_event_pane_g_ParamLimits

0xfe95,	// (0x0007c037) cntbar_detail_list_event_pane_g

0x87cc,	// (0x0007496e) cntbar_detail_list_event_pane_t1_ParamLimits

0x87cc,	// (0x0007496e) cntbar_detail_list_event_pane_t1

0x87e1,	// (0x00074983) cntbar_detail_list_event_pane_t2_ParamLimits

0x87e1,	// (0x00074983) cntbar_detail_list_event_pane_t2

0x0002,

0xfea2,	// (0x0007c044) cntbar_detail_list_event_pane_t_ParamLimits

0xfea2,	// (0x0007c044) cntbar_detail_list_event_pane_t

0xcc1f,	// (0x00078dc1) cell_cntbar_detail_list_shct_pane_g1

0xb3aa,	// (0x0007754c) navi_pane_mv_g3

0xa1ea,	// (0x0007638c) main_cntbar_detail_pane_ParamLimits

0x90f0,	// (0x00075292) main_notif_wgt_pane

0x9847,	// (0x000759e9) aid_tch_main_mp4_pane_g4

0x9a29,	// (0x00075bcb) popup_slider_window_cp02

0xa741,	// (0x000768e3) list_recal_day_event_pane

0x8646,	// (0x000747e8) cntbar_detail_btn_pane_ParamLimits

0x8646,	// (0x000747e8) cntbar_detail_btn_pane

0x865c,	// (0x000747fe) cntbar_detail_btn_pane_cp01_ParamLimits

0x865c,	// (0x000747fe) cntbar_detail_btn_pane_cp01

0x8682,	// (0x00074824) cntbar_detail_list_shct_pane_ParamLimits

0x8692,	// (0x00074834) cntbar_detail_pane_g1_ParamLimits

0x8692,	// (0x00074834) cntbar_detail_pane_g1

0x86a2,	// (0x00074844) cntbar_detail_pane_t1_ParamLimits

0x86a2,	// (0x00074844) cntbar_detail_pane_t1

0x876c,	// (0x0007490e) cntbar_detail_list_event_pane_g3_ParamLimits

0x876c,	// (0x0007490e) cntbar_detail_list_event_pane_g3

0x8784,	// (0x00074926) cntbar_detail_list_event_pane_g4_ParamLimits

0x8784,	// (0x00074926) cntbar_detail_list_event_pane_g4

0x879c,	// (0x0007493e) cntbar_detail_list_event_pane_g5_ParamLimits

0x879c,	// (0x0007493e) cntbar_detail_list_event_pane_g5

0x87b4,	// (0x00074956) cntbar_detail_list_event_pane_g6_ParamLimits

0x87b4,	// (0x00074956) cntbar_detail_list_event_pane_g6

0x87f6,	// (0x00074998) cntbar_detail_list_event_pane_t3_ParamLimits

0x87f6,	// (0x00074998) cntbar_detail_list_event_pane_t3

0x8808,	// (0x000749aa) popup_notif_wgt_window_ParamLimits

0x8808,	// (0x000749aa) popup_notif_wgt_window

0x8821,	// (0x000749c3) popup_submenu_window_cp01_ParamLimits

0x8821,	// (0x000749c3) popup_submenu_window_cp01

0xb3f2,	// (0x00077594) bg_popup_window_pane_cp10

0xed60,	// (0x0007af02) listscroll_notif_wgt_pane

0xed71,	// (0x0007af13) list_notif_wgt_window

0xed7a,	// (0x0007af1c) scroll_pane_cp033

0x8833,	// (0x000749d5) list_notif_wgt_row_pane_ParamLimits

0x8833,	// (0x000749d5) list_notif_wgt_row_pane

0xed83,	// (0x0007af25) aid_size_list_notif_wgt_del

0xed90,	// (0x0007af32) list_notif_wgt_row_pane_g1

0xed9c,	// (0x0007af3e) list_notif_wgt_row_pane_g2

0xeda8,	// (0x0007af4a) list_notif_wgt_row_pane_g3

0x0002,

0xfea9,	// (0x0007c04b) list_notif_wgt_row_pane_g

0xedb5,	// (0x0007af57) list_notif_wgt_row_pane_t1

0xedca,	// (0x0007af6c) list_notif_wgt_row_pane_t2

0xeddc,	// (0x0007af7e) list_notif_wgt_row_pane_t3

0x0002,

0xfeb0,	// (0x0007c052) list_notif_wgt_row_pane_t

0xd8ca,	// (0x00079a6c) list_recal_day_event_pane_g1

0xedee,	// (0x0007af90) list_recal_day_event_pane_t1

0x90f0,	// (0x00075292) bg_button_pane_cp045

0xedfd,	// (0x0007af9f) cntbar_detail_btn_pane_t1

0xc809,	// (0x000789ab) main_callh_pane_ParamLimits

0xc809,	// (0x000789ab) main_callh_pane

0x90f0,	// (0x00075292) main_coverflow0_pane

0x90f0,	// (0x00075292) main_wgtman_pane

0x7752,	// (0x000738f4) main_fs_bigclock_unlock_btn_pane_ParamLimits

0x7752,	// (0x000738f4) main_fs_bigclock_unlock_btn_pane

0x807f,	// (0x00074221) bg_button_pane_cp16

0x808f,	// (0x00074231) cell_tport_appsw_pane_g3

0x8843,	// (0x000749e5) cf0_flow_pane_ParamLimits

0x8843,	// (0x000749e5) cf0_flow_pane

0xee0b,	// (0x0007afad) listscroll_cf0_pane

0xee16,	// (0x0007afb8) main_cf0_pane_g1

0x8858,	// (0x000749fa) main_cf0_pane_t1_ParamLimits

0x8858,	// (0x000749fa) main_cf0_pane_t1

0x886f,	// (0x00074a11) main_cf0_pane_t2_ParamLimits

0x886f,	// (0x00074a11) main_cf0_pane_t2

0x0001,

0xfebc,	// (0x0007c05e) main_cf0_pane_t_ParamLimits

0xfebc,	// (0x0007c05e) main_cf0_pane_t

0xee28,	// (0x0007afca) scroll_pane_cp11

0x8886,	// (0x00074a28) cf0_flow_pane_g1

0x888e,	// (0x00074a30) cf0_flow_pane_g2

0x0001,

0xfec1,	// (0x0007c063) cf0_flow_pane_g

0x8896,	// (0x00074a38) cf0_flow_pane_t1

0x90f0,	// (0x00075292) main_call6_pane

0x90f0,	// (0x00075292) main_calllock_pane

0x88a4,	// (0x00074a46) call6_btn_grp_pane_ParamLimits

0x88a4,	// (0x00074a46) call6_btn_grp_pane

0x88be,	// (0x00074a60) call6_pane_g1_ParamLimits

0x88be,	// (0x00074a60) call6_pane_g1

0x88d3,	// (0x00074a75) popup_call6_1st_window_ParamLimits

0x88d3,	// (0x00074a75) popup_call6_1st_window

0x88e4,	// (0x00074a86) popup_call6_2nd_window_ParamLimits

0x88e4,	// (0x00074a86) popup_call6_2nd_window

0x88f5,	// (0x00074a97) cell_call6_btn_pane_ParamLimits

0x88f5,	// (0x00074a97) cell_call6_btn_pane

0xb3f2,	// (0x00077594) bg_popup_call2_in_pane_cp03

0xee33,	// (0x0007afd5) popup_call6_1st_window_g1

0xee3b,	// (0x0007afdd) popup_call6_1st_window_g2

0xee43,	// (0x0007afe5) popup_call6_1st_window_g3

0x0002,

0xfec6,	// (0x0007c068) popup_call6_1st_window_g

0xee4b,	// (0x0007afed) popup_call6_1st_window_t1

0xee5a,	// (0x0007affc) popup_call6_1st_window_t2

0xee6a,	// (0x0007b00c) popup_call6_1st_window_t3

0x0002,

0xfecd,	// (0x0007c06f) popup_call6_1st_window_t

0xb3f2,	// (0x00077594) bg_popup_call2_in_pane_cp04

0xee33,	// (0x0007afd5) popup_call6_2nd_window_g1

0xee3b,	// (0x0007afdd) popup_call6_2nd_window_g2

0xee43,	// (0x0007afe5) popup_call6_2nd_window_g3

0x0002,

0xfec6,	// (0x0007c068) popup_call6_2nd_window_g

0xee4b,	// (0x0007afed) popup_call6_2nd_window_t1

0x90f0,	// (0x00075292) bg_button_pane_cp15

0xee7a,	// (0x0007b01c) cell_call6_btn_pane_g1

0xee83,	// (0x0007b025) cell_call6_btn_pane_t1

0x8909,	// (0x00074aab) listscroll_wgtman_pane_ParamLimits

0x8909,	// (0x00074aab) listscroll_wgtman_pane

0x892a,	// (0x00074acc) wgtman_btn_pane_ParamLimits

0x892a,	// (0x00074acc) wgtman_btn_pane

0xb195,	// (0x00077337) aid_scroll_copy1

0xee92,	// (0x0007b034) list_wgtman_pane

0x896d,	// (0x00074b0f) wgtman_btn_pane_g1_ParamLimits

0x896d,	// (0x00074b0f) wgtman_btn_pane_g1

0x8999,	// (0x00074b3b) wgtman_btn_pane_t1_ParamLimits

0x8999,	// (0x00074b3b) wgtman_btn_pane_t1

0xee9c,	// (0x0007b03e) wgtman_btn_pane_t2_ParamLimits

0xee9c,	// (0x0007b03e) wgtman_btn_pane_t2

0x0001,

0xfed4,	// (0x0007c076) wgtman_btn_pane_t_ParamLimits

0xfed4,	// (0x0007c076) wgtman_btn_pane_t

0x89d6,	// (0x00074b78) listrow_wgtman_pane_ParamLimits

0x89d6,	// (0x00074b78) listrow_wgtman_pane

0x89e9,	// (0x00074b8b) listrow_wgtman_pane_g1

0x89f6,	// (0x00074b98) listrow_wgtman_pane_g2

0x0001,

0xfed9,	// (0x0007c07b) listrow_wgtman_pane_g

0x8a14,	// (0x00074bb6) listrow_wgtman_pane_t1

0x8a2c,	// (0x00074bce) listrow_wgtman_pane_t2

0x0001,

0xfede,	// (0x0007c080) listrow_wgtman_pane_t

0x8a52,	// (0x00074bf4) wait_bar_pane_cp09

0xeeb3,	// (0x0007b055) main_calllock_btn_pane

0xeebd,	// (0x0007b05f) main_calllock_pane_g1

0x90f0,	// (0x00075292) bg_button_pane_cp17

0xeec8,	// (0x0007b06a) main_calllock_btn_pane_g1

0xeed1,	// (0x0007b073) main_calllock_btn_pane_t1

0x90f0,	// (0x00075292) main_dialer3_pane

0x90f0,	// (0x00075292) main_fmrd2_pane

0xcc1f,	// (0x00078dc1) main_fs_bigclock_unlock_btn_pane_g1

0xeee8,	// (0x0007b08a) main_fs_bigclock_unlock_btn_pane_t1

0x8a64,	// (0x00074c06) area_fmrd2_info_pane_ParamLimits

0x8a64,	// (0x00074c06) area_fmrd2_info_pane

0x8a75,	// (0x00074c17) area_fmrd2_visual_pane_ParamLimits

0x8a75,	// (0x00074c17) area_fmrd2_visual_pane

0x8a83,	// (0x00074c25) fmrd2_indi_pane_ParamLimits

0x8a83,	// (0x00074c25) fmrd2_indi_pane

0x8a90,	// (0x00074c32) area_fmrd2_visual_pane_g1

0x8a98,	// (0x00074c3a) area_fmrd2_visual_pane_t1

0x8aa8,	// (0x00074c4a) area_fmrd2_visual_pane_t2

0x8ab8,	// (0x00074c5a) area_fmrd2_visual_pane_t3

0x0002,

0xfee8,	// (0x0007c08a) area_fmrd2_visual_pane_t

0x8ac8,	// (0x00074c6a) area_fmrd2_info_pane_g1

0x8ad0,	// (0x00074c72) area_fmrd2_info_pane_t1

0x8ae0,	// (0x00074c82) area_fmrd2_info_pane_t2

0x8af0,	// (0x00074c92) area_fmrd2_info_pane_t3

0x8b00,	// (0x00074ca2) area_fmrd2_info_pane_t4

0x0003,

0xfeef,	// (0x0007c091) area_fmrd2_info_pane_t

0x8b0e,	// (0x00074cb0) fmrd2_indi_pane_t1

0x8b1e,	// (0x00074cc0) fmrd2_indi_pane_t2

0x8b2e,	// (0x00074cd0) fmrd2_indi_pane_t3

0x0002,

0xfef8,	// (0x0007c09a) fmrd2_indi_pane_t

0xe43d,	// (0x0007a5df) list_single_fs_bigclock_indicator_pane_g5_ParamLimits

0xe43d,	// (0x0007a5df) list_single_fs_bigclock_indicator_pane_g5

0xe4e4,	// (0x0007a686) list_single_fs_bigclock_indicator_pane_t5_ParamLimits

0xe4e4,	// (0x0007a686) list_single_fs_bigclock_indicator_pane_t5

0x827e,	// (0x00074420) aid_cell_bcale_month_pane_ParamLimits

0x827e,	// (0x00074420) aid_cell_bcale_month_pane

0x829c,	// (0x0007443e) bcale_month_pane_ParamLimits

0x829c,	// (0x0007443e) bcale_month_pane

0x82c0,	// (0x00074462) bcale_preview_pane_ParamLimits

0x82c0,	// (0x00074462) bcale_preview_pane

0xec85,	// (0x0007ae27) list_single_fs_bigclock_pane_t1_ParamLimits

0xeca4,	// (0x0007ae46) list_single_fs_bigclock_pane_t2_ParamLimits

0xeca4,	// (0x0007ae46) list_single_fs_bigclock_pane_t2

0x0001,

0xfe7a,	// (0x0007c01c) list_single_fs_bigclock_pane_t_ParamLimits

0xfe7a,	// (0x0007c01c) list_single_fs_bigclock_pane_t

0xeee0,	// (0x0007b082) main_fs_bigclock_unlock_btn_pane_g2

0x0001,

0xfee3,	// (0x0007c085) main_fs_bigclock_unlock_btn_pane_g

0x8b3e,	// (0x00074ce0) aid_dia3_key_size_ParamLimits

0x8b3e,	// (0x00074ce0) aid_dia3_key_size

0x8b4d,	// (0x00074cef) aid_dia3_listrow_size_ParamLimits

0x8b4d,	// (0x00074cef) aid_dia3_listrow_size

0x8b62,	// (0x00074d04) dia3_keypad_fun_pane_ParamLimits

0x8b62,	// (0x00074d04) dia3_keypad_fun_pane

0x8b7e,	// (0x00074d20) dia3_keypad_num_pane_ParamLimits

0x8b7e,	// (0x00074d20) dia3_keypad_num_pane

0x8b99,	// (0x00074d3b) dia3_listscroll_pane_ParamLimits

0x8b99,	// (0x00074d3b) dia3_listscroll_pane

0x8bac,	// (0x00074d4e) dia3_numentry_pane_ParamLimits

0x8bac,	// (0x00074d4e) dia3_numentry_pane

0xeef6,	// (0x0007b098) dia3_list_pane

0xef01,	// (0x0007b0a3) scroll_pane_cp12

0x90f0,	// (0x00075292) bg_dia3_numentry_pane

0x8bc0,	// (0x00074d62) dia3_numentry_pane_t1

0x8bcf,	// (0x00074d71) cell_dia3_key_num_pane

0x8bd7,	// (0x00074d79) cell_dia3_key0_fun_pane_ParamLimits

0x8bd7,	// (0x00074d79) cell_dia3_key0_fun_pane

0x8beb,	// (0x00074d8d) cell_dia3_key1_fun_pane_ParamLimits

0x8beb,	// (0x00074d8d) cell_dia3_key1_fun_pane

0x8c03,	// (0x00074da5) dia3_listrow_pane

0xe143,	// (0x0007a2e5) bg_dia3_numentry_pane_g1

0x90f0,	// (0x00075292) bg_button_pane_cp21

0xef0c,	// (0x0007b0ae) cell_dia3_key_num_pane_t1

0xef1a,	// (0x0007b0bc) cell_dia3_key_num_pane_t2

0xef29,	// (0x0007b0cb) cell_dia3_key_num_pane_t3

0xef38,	// (0x0007b0da) cell_dia3_key_num_pane_t4

0x0003,

0xfeff,	// (0x0007c0a1) cell_dia3_key_num_pane_t

0x90f0,	// (0x00075292) bg_button_pane_cp19

0x8c15,	// (0x00074db7) cell_dia3_key0_fun_pane_g1

0x90f0,	// (0x00075292) bg_button_pane_cp20

0x8c1d,	// (0x00074dbf) cell_dia3_key1_fun_pane_g1

0x8c25,	// (0x00074dc7) area_left_week_number_pane

0x8c31,	// (0x00074dd3) area_top_day_name_pane

0x8c44,	// (0x00074de6) frame_month_view_pane

0xef47,	// (0x0007b0e9) grid_month_view_pane

0x8c57,	// (0x00074df9) cell_top_day_name_pane_ParamLimits

0x8c57,	// (0x00074df9) cell_top_day_name_pane

0x8c84,	// (0x00074e26) cell_area_left_week_number_pane_ParamLimits

0x8c84,	// (0x00074e26) cell_area_left_week_number_pane

0x8c98,	// (0x00074e3a) cell_month_view_pane_ParamLimits

0x8c98,	// (0x00074e3a) cell_month_view_pane

0xef55,	// (0x0007b0f7) frm_month_g1

0x8cc5,	// (0x00074e67) frm_month_g2

0x8cd8,	// (0x00074e7a) frm_month_g3

0x8ceb,	// (0x00074e8d) frm_month_g4

0x8cfe,	// (0x00074ea0) frm_month_g5

0x8d11,	// (0x00074eb3) frm_month_g6

0x8d24,	// (0x00074ec6) frm_month_g7

0xef62,	// (0x0007b104) frm_month_g8

0x8d37,	// (0x00074ed9) frm_month_g9

0x8d47,	// (0x00074ee9) frm_month_g10

0x8d57,	// (0x00074ef9) frm_month_g11

0x8d67,	// (0x00074f09) frm_month_g12

0x8d79,	// (0x00074f1b) frm_month_g13

0x8d8b,	// (0x00074f2d) frm_month_g14

0x8d9f,	// (0x00074f41) frm_month_g15

0x8db3,	// (0x00074f55) frm_month_g16

0x000f,

0xff08,	// (0x0007c0aa) frm_month_g

0xef6f,	// (0x0007b111) cell_top_day_name_pane_t1

0x8dc7,	// (0x00074f69) cell_area_left_week_number_pane_g1

0x8dd3,	// (0x00074f75) cell_area_left_week_number_pane_t1

0xce7f,	// (0x00079021) cell_month_view_pane_g1

0x8de6,	// (0x00074f88) cell_month_view_pane_t1

0x90f0,	// (0x00075292) main_fps_pane

0xe6d4,	// (0x0007a876) cmail_ddmenu_btn02_pane_cp1_ParamLimits

0xe6d4,	// (0x0007a876) cmail_ddmenu_btn02_pane_cp1

0xe6f0,	// (0x0007a892) cmail_ddmenu_btn02_pane_cp2_ParamLimits

0xe6f0,	// (0x0007a892) cmail_ddmenu_btn02_pane_cp2

0x84e2,	// (0x00074684) cmail_ddmenu_btn02_pane_g2_ParamLimits

0x84e2,	// (0x00074684) cmail_ddmenu_btn02_pane_g2

0x0001,

0xfe2d,	// (0x0007bfcf) cmail_ddmenu_btn02_pane_g_ParamLimits

0xfe2d,	// (0x0007bfcf) cmail_ddmenu_btn02_pane_g

0x8500,	// (0x000746a2) cmail_ddmenu_btn02_pane_t2_ParamLimits

0x8500,	// (0x000746a2) cmail_ddmenu_btn02_pane_t2

0x0001,

0xfe32,	// (0x0007bfd4) cmail_ddmenu_btn02_pane_t_ParamLimits

0xfe32,	// (0x0007bfd4) cmail_ddmenu_btn02_pane_t

0x8df9,	// (0x00074f9b) fps_text_pane_ParamLimits

0x8df9,	// (0x00074f9b) fps_text_pane

0x8e10,	// (0x00074fb2) main_fps_pane_g1_ParamLimits

0x8e10,	// (0x00074fb2) main_fps_pane_g1

0x8e2a,	// (0x00074fcc) wait_bar_pane_cp010_ParamLimits

0x8e2a,	// (0x00074fcc) wait_bar_pane_cp010

0x8e3b,	// (0x00074fdd) fps_text_pane_t1_ParamLimits

0x8e3b,	// (0x00074fdd) fps_text_pane_t1

0xd692,	// (0x00079834) cam4_image_uncrop_pane_g1

0xd69b,	// (0x0007983d) cam4_image_uncrop_pane_g2

0x58ef,	// (0x00071a91) cam4_image_uncrop_pane_g3

0x58f8,	// (0x00071a9a) cam4_image_uncrop_pane_g4

0x0003,

0xf8ee,	// (0x0007ba90) cam4_image_uncrop_pane_g

0x8c03,	// (0x00074da5) dia3_listrow_pane_ParamLimits

0x90f0,	// (0x00075292) main_phob2_pane

0x8050,	// (0x000741f2) cell_tport_appsw_pane_cp02_ParamLimits

0x8050,	// (0x000741f2) cell_tport_appsw_pane_cp02

0x8064,	// (0x00074206) cell_tport_appsw_pane_cp03_ParamLimits

0x8064,	// (0x00074206) cell_tport_appsw_pane_cp03

0x90f0,	// (0x00075292) phob2_contact_card_pane

0x90f0,	// (0x00075292) phob2_listscroll_pane

0xef82,	// (0x0007b124) phob2_list_pane

0xef8a,	// (0x0007b12c) scroll_pane_cp034

0x8e53,	// (0x00074ff5) phob2_cc_data_pane_ParamLimits

0x8e53,	// (0x00074ff5) phob2_cc_data_pane

0x8e72,	// (0x00075014) phob2_cc_listscroll_pane_ParamLimits

0x8e72,	// (0x00075014) phob2_cc_listscroll_pane

0x8e90,	// (0x00075032) list_double_large_graphic_phob2_pane_ParamLimits

0x8e90,	// (0x00075032) list_double_large_graphic_phob2_pane

0x8ea3,	// (0x00075045) list_double_large_graphic_phob2_pane_g1_ParamLimits

0x8ea3,	// (0x00075045) list_double_large_graphic_phob2_pane_g1

0x8eb9,	// (0x0007505b) list_double_large_graphic_phob2_pane_g2_ParamLimits

0x8eb9,	// (0x0007505b) list_double_large_graphic_phob2_pane_g2

0x0001,

0xff29,	// (0x0007c0cb) list_double_large_graphic_phob2_pane_g_ParamLimits

0xff29,	// (0x0007c0cb) list_double_large_graphic_phob2_pane_g

0x8ec5,	// (0x00075067) list_double_large_graphic_phob2_pane_t1_ParamLimits

0x8ec5,	// (0x00075067) list_double_large_graphic_phob2_pane_t1

0x8edb,	// (0x0007507d) list_double_large_graphic_phob2_pane_t2_ParamLimits

0x8edb,	// (0x0007507d) list_double_large_graphic_phob2_pane_t2

0x0001,

0xff2e,	// (0x0007c0d0) list_double_large_graphic_phob2_pane_t_ParamLimits

0xff2e,	// (0x0007c0d0) list_double_large_graphic_phob2_pane_t

0x90f0,	// (0x00075292) list_highlight_pane_cp024

0x8ef0,	// (0x00075092) phob2_cc_button_pane

0x8ef8,	// (0x0007509a) phob2_cc_data_pane_g1_ParamLimits

0x8ef8,	// (0x0007509a) phob2_cc_data_pane_g1

0x8f0d,	// (0x000750af) phob2_cc_data_pane_g2_ParamLimits

0x8f0d,	// (0x000750af) phob2_cc_data_pane_g2

0x0001,

0xff33,	// (0x0007c0d5) phob2_cc_data_pane_g_ParamLimits

0xff33,	// (0x0007c0d5) phob2_cc_data_pane_g

0x8f1d,	// (0x000750bf) phob2_cc_data_pane_t1_ParamLimits

0x8f1d,	// (0x000750bf) phob2_cc_data_pane_t1

0x8f35,	// (0x000750d7) phob2_cc_data_pane_t2_ParamLimits

0x8f35,	// (0x000750d7) phob2_cc_data_pane_t2

0x8f4d,	// (0x000750ef) phob2_cc_data_pane_t3_ParamLimits

0x8f4d,	// (0x000750ef) phob2_cc_data_pane_t3

0x0002,

0xff38,	// (0x0007c0da) phob2_cc_data_pane_t_ParamLimits

0xff38,	// (0x0007c0da) phob2_cc_data_pane_t

0xef92,	// (0x0007b134) phob2_cc_list_pane_ParamLimits

0xef92,	// (0x0007b134) phob2_cc_list_pane

0xd961,	// (0x00079b03) scroll_pane_cp035_ParamLimits

0xd961,	// (0x00079b03) scroll_pane_cp035

0xa1ea,	// (0x0007638c) bg_button_pane_cp033

0xef9e,	// (0x0007b140) phob2_cc_button_pane_g1

0xefaa,	// (0x0007b14c) phob2_cc_button_pane_t1

0xefbf,	// (0x0007b161) phob2_cc_button_pane_t2

0x0001,

0x0018,	// (0x0006c1ba) phob2_cc_button_pane_t

0x8f65,	// (0x00075107) list_double_large_graphic_phob2_cc_pane_ParamLimits

0x8f65,	// (0x00075107) list_double_large_graphic_phob2_cc_pane

0x8f78,	// (0x0007511a) list_double_large_graphic_phob2_cc_pane_g1_ParamLimits

0x8f78,	// (0x0007511a) list_double_large_graphic_phob2_cc_pane_g1

0x8f84,	// (0x00075126) list_double_large_graphic_phob2_cc_pane_g2_ParamLimits

0x8f84,	// (0x00075126) list_double_large_graphic_phob2_cc_pane_g2

0x8f90,	// (0x00075132) list_double_large_graphic_phob2_cc_pane_g3_ParamLimits

0x8f90,	// (0x00075132) list_double_large_graphic_phob2_cc_pane_g3

0x8f9c,	// (0x0007513e) list_double_large_graphic_phob2_cc_pane_g4_ParamLimits

0x8f9c,	// (0x0007513e) list_double_large_graphic_phob2_cc_pane_g4

0x8fa8,	// (0x0007514a) list_double_large_graphic_phob2_cc_pane_g5_ParamLimits

0x8fa8,	// (0x0007514a) list_double_large_graphic_phob2_cc_pane_g5

0x0004,

0xff3f,	// (0x0007c0e1) list_double_large_graphic_phob2_cc_pane_g_ParamLimits

0xff3f,	// (0x0007c0e1) list_double_large_graphic_phob2_cc_pane_g

0x8fb4,	// (0x00075156) list_double_large_graphic_phob2_cc_pane_t1_ParamLimits

0x8fb4,	// (0x00075156) list_double_large_graphic_phob2_cc_pane_t1

0x8fdd,	// (0x0007517f) list_double_large_graphic_phob2_cc_pane_t2_ParamLimits

0x8fdd,	// (0x0007517f) list_double_large_graphic_phob2_cc_pane_t2

0x0001,

0xff4a,	// (0x0007c0ec) list_double_large_graphic_phob2_cc_pane_t_ParamLimits

0xff4a,	// (0x0007c0ec) list_double_large_graphic_phob2_cc_pane_t

0xefd1,	// (0x0007b173) list_highlight_pane_cp025_ParamLimits

0xefd1,	// (0x0007b173) list_highlight_pane_cp025

0xa1ea,	// (0x0007638c) bg_button_pane_cp033_ParamLimits

0xef9e,	// (0x0007b140) phob2_cc_button_pane_g1_ParamLimits

0xefaa,	// (0x0007b14c) phob2_cc_button_pane_t1_ParamLimits

0xefbf,	// (0x0007b161) phob2_cc_button_pane_t2_ParamLimits

0x0018,	// (0x0006c1ba) phob2_cc_button_pane_t_ParamLimits

0x0375,	// (0x0006c517) popup_wgtman_window

0xd7a6,	// (0x00079948) scroll_pane_cp038

0x894f,	// (0x00074af1) wgtman_btn_pane_cp_01_ParamLimits

0x894f,	// (0x00074af1) wgtman_btn_pane_cp_01

0xefdf,	// (0x0007b181) wgtman_content_pane

0xefe8,	// (0x0007b18a) wgtman_heading_pane

0x90f0,	// (0x00075292) bg_heading_pane_cp02

0xeff1,	// (0x0007b193) wgtman_heading_pane_g1

0xeff9,	// (0x0007b19b) wgtman_heading_pane_t1

0xf007,	// (0x0007b1a9) scroll_pane_cp036

0xf00f,	// (0x0007b1b1) wgtman_list_pane

0xf017,	// (0x0007b1b9) wgtman_list_pane_t1_ParamLimits

0xf017,	// (0x0007b1b9) wgtman_list_pane_t1

0x9a83,	// (0x00075c25) cam4_grid_pane

0x65a7,	// (0x00072749) bg_button_pane_cp015_ParamLimits

0x65bb,	// (0x0007275d) bg_button_pane_cp016_ParamLimits

0x65ce,	// (0x00072770) bg_button_pane_cp017_ParamLimits

0x6626,	// (0x000727c8) popup_vitu2_query_window_g3_ParamLimits

0x6626,	// (0x000727c8) popup_vitu2_query_window_g3

0x66e3,	// (0x00072885) popup_vitu2_query_window_t6_ParamLimits

0x66e3,	// (0x00072885) popup_vitu2_query_window_t6

0x670e,	// (0x000728b0) popup_vitu2_query_window_t7_ParamLimits

0x670e,	// (0x000728b0) popup_vitu2_query_window_t7

0xd692,	// (0x00079834) cam4_grid_pane_g1

0xd69b,	// (0x0007983d) cam4_grid_pane_g2

0xf033,	// (0x0007b1d5) cam4_grid_pane_g3

0xf03c,	// (0x0007b1de) cam4_grid_pane_g4

0x0003,

0xff4f,	// (0x0007c0f1) cam4_grid_pane_g

0x12fc,	// (0x0006d49e) aid_placing_vt_slider_lsc_ParamLimits

0x15f9,	// (0x0006d79b) vidtel_button_pane_ParamLimits

0x15f9,	// (0x0006d79b) vidtel_button_pane

0xf047,	// (0x0007b1e9) bg_button_pane_cp034

0x9006,	// (0x000751a8) vidtel_button_pane_g1

0xf051,	// (0x0007b1f3) vidtel_button_pane_t1

0xd8a8,	// (0x00079a4a) aid_size_vtel_slider_touch

0xd961,	// (0x00079b03) scroll_pane_cp039

0xe181,	// (0x0007a323) ncim_query_button_pane_cp01_ParamLimits

0xe1a0,	// (0x0007a342) ncimui_query_pane_g1_ParamLimits

0xa1ea,	// (0x0007638c) input_focus_pane_cp012_ParamLimits

0xe1c5,	// (0x0007a367) ncim_query_entry_pane_t1_ParamLimits

0xd961,	// (0x00079b03) scroll_pane_cp039_ParamLimits

0xb27b,	// (0x0007741d) navi_pane_bcale_mc_g1

0xb283,	// (0x00077425) navi_pane_bcale_mc_t1

0xe739,	// (0x0007a8db) main_sp_fs_email_pane_g1

0xe745,	// (0x0007a8e7) main_sp_fs_email_pane_g2

0x0001,

0xfce5,	// (0x0007be87) main_sp_fs_email_pane_g

0xe996,	// (0x0007ab38) list_single_cale_mrui_row_pane_g3_ParamLimits

0xe996,	// (0x0007ab38) list_single_cale_mrui_row_pane_g3

0x8528,	// (0x000746ca) list_single_recal_day_pane_g5_event_pane

0xa7a6,	// (0x00076948) list_single_recal_day_pane_g7

0xf05f,	// (0x0007b201) list_recal_day_event_pane_cp01

0xf068,	// (0x0007b20a) list_recal_vselct_arw_lo_pane_cp01

0xf070,	// (0x0007b212) list_recal_vselct_arw_up_pane_cp01

0xf078,	// (0x0007b21a) list_recal_vselct_pane_cp01

0xd8ca,	// (0x00079a6c) list_recal_day_event_pane_cp01_g1

0xa7db,	// (0x0007697d) list_recal_day_event_pane_cp01_t1

0xa7ae,	// (0x00076950) list_single_recal_day_pane_t1_ParamLimits

0xa7c0,	// (0x00076962) list_single_recal_day_pane_t2_ParamLimits

0xfe42,	// (0x0007bfe4) list_single_recal_day_pane_t_ParamLimits

0x9f00,	// (0x000760a2) bg_notes_pane_ParamLimits

0x9fc2,	// (0x00076164) list_notes_pane_ParamLimits

0x06a9,	// (0x0006c84b) scroll_pane_cp06_ParamLimits

0x9fe4,	// (0x00076186) main_notes_pane_ParamLimits

0x90f0,	// (0x00075292) main_welc_pane

0x900e,	// (0x000751b0) main_welc_body_pane_ParamLimits

0x900e,	// (0x000751b0) main_welc_body_pane

0x902b,	// (0x000751cd) main_welc_opti_pane_ParamLimits

0x902b,	// (0x000751cd) main_welc_opti_pane

0x9074,	// (0x00075216) main_welc_pane_t1_ParamLimits

0x9074,	// (0x00075216) main_welc_pane_t1

0x9096,	// (0x00075238) main_welc_body_row_pane_ParamLimits

0x9096,	// (0x00075238) main_welc_body_row_pane

0xed49,	// (0x0007aeeb) main_welc_opti_row_pane_ParamLimits

0xed49,	// (0x0007aeeb) main_welc_opti_row_pane

0xf082,	// (0x0007b224) main_welc_opti_row_pane_g1

0xf08a,	// (0x0007b22c) main_welc_opti_row_pane_t1

0xf09a,	// (0x0007b23c) main_welc_body_row_pane_t1

0xed69,	// (0x0007af0b) popup_notif_wgt_heading_pane

0xed83,	// (0x0007af25) aid_size_list_notif_wgt_del_ParamLimits

0xed90,	// (0x0007af32) list_notif_wgt_row_pane_g1_ParamLimits

0xed9c,	// (0x0007af3e) list_notif_wgt_row_pane_g2_ParamLimits

0xeda8,	// (0x0007af4a) list_notif_wgt_row_pane_g3_ParamLimits

0xfea9,	// (0x0007c04b) list_notif_wgt_row_pane_g_ParamLimits

0xedb5,	// (0x0007af57) list_notif_wgt_row_pane_t1_ParamLimits

0xedca,	// (0x0007af6c) list_notif_wgt_row_pane_t2_ParamLimits

0xeddc,	// (0x0007af7e) list_notif_wgt_row_pane_t3_ParamLimits

0xfeb0,	// (0x0007c052) list_notif_wgt_row_pane_t_ParamLimits

0x89e9,	// (0x00074b8b) listrow_wgtman_pane_g1_ParamLimits

0x89f6,	// (0x00074b98) listrow_wgtman_pane_g2_ParamLimits

0xfed9,	// (0x0007c07b) listrow_wgtman_pane_g_ParamLimits

0x8a14,	// (0x00074bb6) listrow_wgtman_pane_t1_ParamLimits

0x8a2c,	// (0x00074bce) listrow_wgtman_pane_t2_ParamLimits

0xfede,	// (0x0007c080) listrow_wgtman_pane_t_ParamLimits

0x8a52,	// (0x00074bf4) wait_bar_pane_cp09_ParamLimits

0x90f0,	// (0x00075292) bg_popup_heading_pane_cp02

0xf0a9,	// (0x0007b24b) popup_notif_wgt_heading_pane_g1

0xf0b1,	// (0x0007b253) popup_notif_wgt_heading_pane_t1

0x90f0,	// (0x00075292) main_vids_pane

0x90f0,	// (0x00075292) vids_listscroll_pane

0x90ac,	// (0x0007524e) scroll_pane_cp040

0x90f0,	// (0x00075292) vids_list_pane

0x90b7,	// (0x00075259) vids_list_double_pane_ParamLimits

0x90b7,	// (0x00075259) vids_list_double_pane

0x90c8,	// (0x0007526a) vids_list_double_pane_g1

0x90d1,	// (0x00075273) vids_list_double_pane_t1

0x90e0,	// (0x00075282) vids_list_double_pane_t2

0x0001,

0xff5d,	// (0x0007c0ff) vids_list_double_pane_t

0x9158,	// (0x000752fa) main_ncimui_pane_ParamLimits

0x72da,	// (0x0007347c) main_ncimui_pane_g1_ParamLimits

0x72e6,	// (0x00073488) main_ncimui_pane_g2_ParamLimits

0x72e6,	// (0x00073488) main_ncimui_pane_g2

0x0001,

0xfbea,	// (0x0007bd8c) main_ncimui_pane_g_ParamLimits

0xfbea,	// (0x0007bd8c) main_ncimui_pane_g

0x904a,	// (0x000751ec) main_welc_pane_g1_ParamLimits

0x904a,	// (0x000751ec) main_welc_pane_g1

0x905f,	// (0x00075201) main_welc_pane_g2_ParamLimits

0x905f,	// (0x00075201) main_welc_pane_g2

0x0001,

0xff58,	// (0x0007c0fa) main_welc_pane_g_ParamLimits

0xff58,	// (0x0007c0fa) main_welc_pane_g

0x9f00,	// (0x000760a2) listscroll_mce_pane_ParamLimits

0xb3ea,	// (0x0007758c) wait_bar_pane_cp10

0xc7fd,	// (0x0007899f) main_cale_day_pane_ParamLimits

0xc7fd,	// (0x0007899f) main_cale_week_pane_ParamLimits

0x9f00,	// (0x000760a2) main_messa_pane_ParamLimits

0x4bfa,	// (0x00070d9c) main_clock2_btn_pane_ParamLimits

0x4bfa,	// (0x00070d9c) main_clock2_btn_pane

0xd007,	// (0x000791a9) main_clock2_btn_pane_cp01_ParamLimits

0xd007,	// (0x000791a9) main_clock2_btn_pane_cp01

0xe967,	// (0x0007ab09) list_cale_mrui_pane_ParamLimits

0xee20,	// (0x0007afc2) main_cf0_pane_g2

0x0001,

0xfeb7,	// (0x0007c059) main_cf0_pane_g

0x8c25,	// (0x00074dc7) area_left_week_number_pane_ParamLimits

0x8c31,	// (0x00074dd3) area_top_day_name_pane_ParamLimits

0x8c44,	// (0x00074de6) frame_month_view_pane_ParamLimits

0xef47,	// (0x0007b0e9) grid_month_view_pane_ParamLimits

0xef55,	// (0x0007b0f7) frm_month_g1_ParamLimits

0x8cc5,	// (0x00074e67) frm_month_g2_ParamLimits

0x8cd8,	// (0x00074e7a) frm_month_g3_ParamLimits

0x8ceb,	// (0x00074e8d) frm_month_g4_ParamLimits

0x8cfe,	// (0x00074ea0) frm_month_g5_ParamLimits

0x8d11,	// (0x00074eb3) frm_month_g6_ParamLimits

0x8d24,	// (0x00074ec6) frm_month_g7_ParamLimits

0xef62,	// (0x0007b104) frm_month_g8_ParamLimits

0x8d37,	// (0x00074ed9) frm_month_g9_ParamLimits

0x8d47,	// (0x00074ee9) frm_month_g10_ParamLimits

0x8d57,	// (0x00074ef9) frm_month_g11_ParamLimits

0x8d67,	// (0x00074f09) frm_month_g12_ParamLimits

0x8d79,	// (0x00074f1b) frm_month_g13_ParamLimits

0x8d8b,	// (0x00074f2d) frm_month_g14_ParamLimits

0x8d9f,	// (0x00074f41) frm_month_g15_ParamLimits

0x8db3,	// (0x00074f55) frm_month_g16_ParamLimits

0xff08,	// (0x0007c0aa) frm_month_g_ParamLimits

0xef6f,	// (0x0007b111) cell_top_day_name_pane_t1_ParamLimits

0x8dc7,	// (0x00074f69) cell_area_left_week_number_pane_g1_ParamLimits

0x8dd3,	// (0x00074f75) cell_area_left_week_number_pane_t1_ParamLimits

0xce7f,	// (0x00079021) cell_month_view_pane_g1_ParamLimits

0x8de6,	// (0x00074f88) cell_month_view_pane_t1_ParamLimits

0x9ef8,	// (0x0007609a) main_clock2_btn_pane_g1

0xf0bf,	// (0x0007b261) main_clock2_btn_pane_t1

0xa1ea,	// (0x0007638c) listscroll_cmail_pane_ParamLimits

0xe739,	// (0x0007a8db) main_sp_fs_email_pane_g1_ParamLimits

0xe745,	// (0x0007a8e7) main_sp_fs_email_pane_g2_ParamLimits

0xfce5,	// (0x0007be87) main_sp_fs_email_pane_g_ParamLimits

0xeb05,	// (0x0007aca7) list_recal_day_pane_ParamLimits

0xeb16,	// (0x0007acb8) mian_recal_day_pane_t1

0x7d36,	// (0x00073ed8) list_single_dyc_row_text_pane_t4_ParamLimits

0x7d36,	// (0x00073ed8) list_single_dyc_row_text_pane_t4

0x7d7f,	// (0x00073f21) list_single_dyc_row_text_pane_t5_ParamLimits

0x7d7f,	// (0x00073f21) list_single_dyc_row_text_pane_t5

0xa4fb,	// (0x0007669d) list_single_dyc_row_text_pane_t6_ParamLimits

0xa4fb,	// (0x0007669d) list_single_dyc_row_text_pane_t6

0xad6b,	// (0x00076f0d) aid_mgn_list_cale_time_pane

0x9158,	// (0x000752fa) main_gallery2_pane_ParamLimits
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

} // end of namespace AknLayoutScalable_Abrw_pnl4_apps_nhd4_lsc_tch_Small
