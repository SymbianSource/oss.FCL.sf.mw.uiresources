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
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Apps::KByteCodedData_AknLayoutScalable_Elaf_pnp4_apps_nhd4_prt_tch + 0x000601a1 };

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
0x0ab1,	// (0x00060c52) Screen

0x0abd,	// (0x00060c5e) application_window

0x0af9,	// (0x00060c9a) area_bottom_pane_ParamLimits

0x0af9,	// (0x00060c9a) area_bottom_pane

0x0b32,	// (0x00060cd3) area_top_pane_ParamLimits

0x0b32,	// (0x00060cd3) area_top_pane

0x9b75,	// (0x00069d16) call_video_uplink_pane_ParamLimits

0x9b75,	// (0x00069d16) call_video_uplink_pane

0x0bc0,	// (0x00060d61) main_pane_ParamLimits

0x0bc0,	// (0x00060d61) main_pane

0xe44d,	// (0x0006e5ee) context_pane

0x3661,	// (0x00063802) navi_pane

0x3693,	// (0x00063834) popup_cale_events_window_ParamLimits

0x3693,	// (0x00063834) popup_cale_events_window

0xe460,	// (0x0006e601) popup_mup_playback_window

0x36ab,	// (0x0006384c) signal_pane

0xbfa0,	// (0x0006c141) main_browser_pane

0xc58b,	// (0x0006c72c) main_burst_pane

0x33c9,	// (0x0006356a) main_calc_pane

0xe441,	// (0x0006e5e2) main_cale_day_pane

0x0faa,	// (0x0006114b) main_cale_month_pane

0xe441,	// (0x0006e5e2) main_cale_week_pane

0xc58b,	// (0x0006c72c) main_call_pane

0xbc20,	// (0x0006bdc1) main_call_poc_pane

0xc58b,	// (0x0006c72c) main_camera_pane

0xc58b,	// (0x0006c72c) main_chi_dic_pane

0xce99,	// (0x0006d03a) main_clock_pane

0xbc20,	// (0x0006bdc1) main_fmradio_pane

0xc58b,	// (0x0006c72c) main_graph_messa_pane

0xbc20,	// (0x0006bdc1) main_help_pane

0xbfa0,	// (0x0006c141) main_im_pane

0xbe7b,	// (0x0006c01c) main_image_pane_ParamLimits

0xbe7b,	// (0x0006c01c) main_image_pane

0xbc20,	// (0x0006bdc1) main_location2_pane

0xc58b,	// (0x0006c72c) main_location_pane

0xbe7b,	// (0x0006c01c) main_messa_pane

0xbc20,	// (0x0006bdc1) main_mp2_pane

0xc58b,	// (0x0006c72c) main_mp_pane

0xbc20,	// (0x0006bdc1) main_msg_pane

0xbc20,	// (0x0006bdc1) main_mup_eq_pane

0xbc20,	// (0x0006bdc1) main_mup_pane

0xbfa0,	// (0x0006c141) main_notes_pane

0xbc20,	// (0x0006bdc1) main_pec_pane

0xbc20,	// (0x0006bdc1) main_phob_pane

0xbc20,	// (0x0006bdc1) main_pinb_pane

0xbc20,	// (0x0006bdc1) main_postcard_pane

0xbc20,	// (0x0006bdc1) main_qdial_pane

0xc58b,	// (0x0006c72c) main_skin_pane

0xbc20,	// (0x0006bdc1) main_smil2_pane

0xc58b,	// (0x0006c72c) main_smil_pane

0xc58b,	// (0x0006c72c) main_video_pane

0xc58b,	// (0x0006c72c) main_video_tele_pane

0xbe7b,	// (0x0006c01c) main_viewer_pane_ParamLimits

0xbe7b,	// (0x0006c01c) main_viewer_pane

0xc58b,	// (0x0006c72c) main_vorec_pane

0x341d,	// (0x000635be) popup_blid_sat_info_window_ParamLimits

0x341d,	// (0x000635be) popup_blid_sat_info_window

0x3475,	// (0x00063616) popup_dyc_status_message_window_ParamLimits

0x3475,	// (0x00063616) popup_dyc_status_message_window

0x348d,	// (0x0006362e) popup_grid_large_graphic_window_ParamLimits

0x348d,	// (0x0006362e) popup_grid_large_graphic_window

0x353d,	// (0x000636de) popup_loc_request_window_ParamLimits

0x353d,	// (0x000636de) popup_loc_request_window

0x3639,	// (0x000637da) popup_wml_address_window_ParamLimits

0x3639,	// (0x000637da) popup_wml_address_window

0x3203,	// (0x000633a4) call_muted_g1

0x2ef8,	// (0x00063099) popup_call_audio_conf_window_ParamLimits

0x2ef8,	// (0x00063099) popup_call_audio_conf_window

0x3217,	// (0x000633b8) popup_call_audio_first_window_ParamLimits

0x3217,	// (0x000633b8) popup_call_audio_first_window

0x328d,	// (0x0006342e) popup_call_audio_in_window_ParamLimits

0x328d,	// (0x0006342e) popup_call_audio_in_window

0x32c9,	// (0x0006346a) popup_call_audio_out_window_ParamLimits

0x32c9,	// (0x0006346a) popup_call_audio_out_window

0x3303,	// (0x000634a4) popup_call_audio_second_window_ParamLimits

0x3303,	// (0x000634a4) popup_call_audio_second_window

0x3359,	// (0x000634fa) popup_call_audio_wait_window_ParamLimits

0x3359,	// (0x000634fa) popup_call_audio_wait_window

0x338e,	// (0x0006352f) popup_number_entry_window_ParamLimits

0x338e,	// (0x0006352f) popup_number_entry_window

0xb7e7,	// (0x0006b988) bg_popup_call_pane_cp05_ParamLimits

0xb7e7,	// (0x0006b988) bg_popup_call_pane_cp05

0xb807,	// (0x0006b9a8) popup_number_entry_window_t1

0xb81a,	// (0x0006b9bb) popup_number_entry_window_t2

0xb82c,	// (0x0006b9cd) popup_number_entry_window_t3

0x0003,

0xf01d,	// (0x0006f1be) popup_number_entry_window_t

0xb83e,	// (0x0006b9df) text_title_cp2

0xb851,	// (0x0006b9f2) bg_popup_call_pane_cp_ParamLimits

0xb851,	// (0x0006b9f2) bg_popup_call_pane_cp

0xb85f,	// (0x0006ba00) call_thumbnail_pane

0xb867,	// (0x0006ba08) popup_call_audio_in_window_g1_ParamLimits

0xb867,	// (0x0006ba08) popup_call_audio_in_window_g1

0xb873,	// (0x0006ba14) popup_call_audio_in_window_g2_ParamLimits

0xb873,	// (0x0006ba14) popup_call_audio_in_window_g2

0xb87f,	// (0x0006ba20) popup_call_audio_in_window_g3_ParamLimits

0xb87f,	// (0x0006ba20) popup_call_audio_in_window_g3

0x0002,

0xf026,	// (0x0006f1c7) popup_call_audio_in_window_g_ParamLimits

0xf026,	// (0x0006f1c7) popup_call_audio_in_window_g

0xb88b,	// (0x0006ba2c) popup_call_audio_in_window_t1_ParamLimits

0xb88b,	// (0x0006ba2c) popup_call_audio_in_window_t1

0xb8a7,	// (0x0006ba48) popup_call_audio_in_window_t2_ParamLimits

0xb8a7,	// (0x0006ba48) popup_call_audio_in_window_t2

0xb8c3,	// (0x0006ba64) popup_call_audio_in_window_t3_ParamLimits

0xb8c3,	// (0x0006ba64) popup_call_audio_in_window_t3

0x0002,

0xf02d,	// (0x0006f1ce) popup_call_audio_in_window_t_ParamLimits

0xf02d,	// (0x0006f1ce) popup_call_audio_in_window_t

0xb851,	// (0x0006b9f2) bg_popup_call_pane_cp01_ParamLimits

0xb851,	// (0x0006b9f2) bg_popup_call_pane_cp01

0xb85f,	// (0x0006ba00) call_thumbnail_pane_cp02

0xb8d6,	// (0x0006ba77) call_type_pane_cp022

0xb8de,	// (0x0006ba7f) popup_call_audio_out_window_g1_ParamLimits

0xb8de,	// (0x0006ba7f) popup_call_audio_out_window_g1

0xb8f0,	// (0x0006ba91) popup_call_audio_out_window_g2_ParamLimits

0xb8f0,	// (0x0006ba91) popup_call_audio_out_window_g2

0xb8fc,	// (0x0006ba9d) popup_call_audio_out_window_g3_ParamLimits

0xb8fc,	// (0x0006ba9d) popup_call_audio_out_window_g3

0x0002,

0xf034,	// (0x0006f1d5) popup_call_audio_out_window_g_ParamLimits

0xf034,	// (0x0006f1d5) popup_call_audio_out_window_g

0xb90e,	// (0x0006baaf) popup_call_audio_out_window_t1_ParamLimits

0xb90e,	// (0x0006baaf) popup_call_audio_out_window_t1

0xb926,	// (0x0006bac7) popup_call_audio_out_window_t2_ParamLimits

0xb926,	// (0x0006bac7) popup_call_audio_out_window_t2

0x0001,

0xf03b,	// (0x0006f1dc) popup_call_audio_out_window_t_ParamLimits

0xf03b,	// (0x0006f1dc) popup_call_audio_out_window_t

0xb93b,	// (0x0006badc) bg_popup_call_pane_ParamLimits

0xb93b,	// (0x0006badc) bg_popup_call_pane

0x0d16,	// (0x00060eb7) call_thumbnail_pane_cp_ParamLimits

0x0d16,	// (0x00060eb7) call_thumbnail_pane_cp

0xb9bf,	// (0x0006bb60) call_type_pane_cp01_ParamLimits

0xb9bf,	// (0x0006bb60) call_type_pane_cp01

0xba03,	// (0x0006bba4) popup_call_audio_first_window_g1_ParamLimits

0xba03,	// (0x0006bba4) popup_call_audio_first_window_g1

0xba4f,	// (0x0006bbf0) popup_call_audio_first_window_g2_ParamLimits

0xba4f,	// (0x0006bbf0) popup_call_audio_first_window_g2

0x0001,

0xf040,	// (0x0006f1e1) popup_call_audio_first_window_g_ParamLimits

0xf040,	// (0x0006f1e1) popup_call_audio_first_window_g

0xba93,	// (0x0006bc34) popup_call_audio_first_window_t1_ParamLimits

0xba93,	// (0x0006bc34) popup_call_audio_first_window_t1

0xbb3f,	// (0x0006bce0) popup_call_audio_first_window_t4_ParamLimits

0xbb3f,	// (0x0006bce0) popup_call_audio_first_window_t4

0xbbcb,	// (0x0006bd6c) popup_call_audio_first_window_t5_ParamLimits

0xbbcb,	// (0x0006bd6c) popup_call_audio_first_window_t5

0x0002,

0xf045,	// (0x0006f1e6) popup_call_audio_first_window_t_ParamLimits

0xf045,	// (0x0006f1e6) popup_call_audio_first_window_t

0xbc20,	// (0x0006bdc1) bg_popup_call_pane_cp02

0xbc2a,	// (0x0006bdcb) call_type_pane_cp023

0xbc32,	// (0x0006bdd3) popup_call_audio_wait_window_g1

0xbc3a,	// (0x0006bddb) popup_call_audio_wait_window_g2

0x0001,

0xf04c,	// (0x0006f1ed) popup_call_audio_wait_window_g

0xbc42,	// (0x0006bde3) popup_call_audio_wait_window_t3

0xbc50,	// (0x0006bdf1) bg_popup_call_pane_cp03_ParamLimits

0xbc50,	// (0x0006bdf1) bg_popup_call_pane_cp03

0xbcb0,	// (0x0006be51) call_thumbnail_pane_cp011_ParamLimits

0xbcb0,	// (0x0006be51) call_thumbnail_pane_cp011

0xbcbc,	// (0x0006be5d) call_type_pane_cp034_ParamLimits

0xbcbc,	// (0x0006be5d) call_type_pane_cp034

0xbcf8,	// (0x0006be99) popup_call_audio_second_window_g1_ParamLimits

0xbcf8,	// (0x0006be99) popup_call_audio_second_window_g1

0xbd34,	// (0x0006bed5) popup_call_audio_second_window_g2_ParamLimits

0xbd34,	// (0x0006bed5) popup_call_audio_second_window_g2

0x0001,

0xf051,	// (0x0006f1f2) popup_call_audio_second_window_g_ParamLimits

0xf051,	// (0x0006f1f2) popup_call_audio_second_window_g

0xbd70,	// (0x0006bf11) popup_call_audio_second_window_t1_ParamLimits

0xbd70,	// (0x0006bf11) popup_call_audio_second_window_t1

0xbdf1,	// (0x0006bf92) popup_call_audio_second_window_t2_ParamLimits

0xbdf1,	// (0x0006bf92) popup_call_audio_second_window_t2

0xbe27,	// (0x0006bfc8) popup_call_audio_second_window_t3_ParamLimits

0xbe27,	// (0x0006bfc8) popup_call_audio_second_window_t3

0x0002,

0xf056,	// (0x0006f1f7) popup_call_audio_second_window_t_ParamLimits

0xf056,	// (0x0006f1f7) popup_call_audio_second_window_t

0xbc20,	// (0x0006bdc1) bg_popup_call_pane_cp04

0xbe5d,	// (0x0006bffe) list_conf_pane

0xbe65,	// (0x0006c006) popup_call_audio_conf_window_t1

0xbe73,	// (0x0006c014) call_thumbnail_pane_g1

0xbe7b,	// (0x0006c01c) bg_pinb_pane_ParamLimits

0xbe7b,	// (0x0006c01c) bg_pinb_pane

0xbe89,	// (0x0006c02a) find_pinb_pane

0xbe7b,	// (0x0006c01c) listscroll_pinb_pane_ParamLimits

0xbe7b,	// (0x0006c01c) listscroll_pinb_pane

0xbe93,	// (0x0006c034) pinb_bg_pane_g1

0xbe93,	// (0x0006c034) pinb_bg_pane_g2

0xbe93,	// (0x0006c034) pinb_bg_pane_g3

0xbe93,	// (0x0006c034) pinb_bg_pane_g4

0xbe93,	// (0x0006c034) pinb_bg_pane_g5

0xbe93,	// (0x0006c034) pinb_bg_pane_g6

0xbe93,	// (0x0006c034) pinb_bg_pane_g7

0xbe93,	// (0x0006c034) pinb_bg_pane_g8

0xbe93,	// (0x0006c034) pinb_bg_pane_g9

0xbe93,	// (0x0006c034) pinb_bg_pane_g10

0x0009,

0xf05d,	// (0x0006f1fe) pinb_bg_pane_g

0xb7dd,	// (0x0006b97e) grid_pinb_pane

0xb7dd,	// (0x0006b97e) list_pinb_pane

0xbe9d,	// (0x0006c03e) scroll_pane_cp01_ParamLimits

0xbe9d,	// (0x0006c03e) scroll_pane_cp01

0xbeab,	// (0x0006c04c) find_pinb_pane_g1_ParamLimits

0xbeab,	// (0x0006c04c) find_pinb_pane_g1

0xbec3,	// (0x0006c064) find_pinb_pane_t1

0xbed5,	// (0x0006c076) find_pinb_pane_t2

0x0001,

0xf077,	// (0x0006f218) find_pinb_pane_t

0xbeea,	// (0x0006c08b) input_focus_pane_cp01_ParamLimits

0xbeea,	// (0x0006c08b) input_focus_pane_cp01

0xbef6,	// (0x0006c097) cell_pinb_pane_ParamLimits

0xbef6,	// (0x0006c097) cell_pinb_pane

0xbf04,	// (0x0006c0a5) cell_pinb_pane_g1_ParamLimits

0xbf04,	// (0x0006c0a5) cell_pinb_pane_g1

0xbf12,	// (0x0006c0b3) cell_pinb_pane_g2_ParamLimits

0xbf12,	// (0x0006c0b3) cell_pinb_pane_g2

0xbf12,	// (0x0006c0b3) cell_pinb_pane_g3_ParamLimits

0xbf12,	// (0x0006c0b3) cell_pinb_pane_g3

0x0002,

0xf07c,	// (0x0006f21d) cell_pinb_pane_g_ParamLimits

0xf07c,	// (0x0006f21d) cell_pinb_pane_g

0xbc20,	// (0x0006bdc1) grid_highlight_pane_cp01

0xbef6,	// (0x0006c097) list_pinb_item_pane_ParamLimits

0xbef6,	// (0x0006c097) list_pinb_item_pane

0xb7dd,	// (0x0006b97e) list_highlight_pane_cp02

0xbf20,	// (0x0006c0c1) list_pinb_item_pane_g1_ParamLimits

0xbf20,	// (0x0006c0c1) list_pinb_item_pane_g1

0xbf12,	// (0x0006c0b3) list_pinb_item_pane_g2_ParamLimits

0xbf12,	// (0x0006c0b3) list_pinb_item_pane_g2

0xbf04,	// (0x0006c0a5) list_pinb_item_pane_g3_ParamLimits

0xbf04,	// (0x0006c0a5) list_pinb_item_pane_g3

0xbf12,	// (0x0006c0b3) list_pinb_item_pane_g4_ParamLimits

0xbf12,	// (0x0006c0b3) list_pinb_item_pane_g4

0x0003,

0xf083,	// (0x0006f224) list_pinb_item_pane_g_ParamLimits

0xf083,	// (0x0006f224) list_pinb_item_pane_g

0xbf2e,	// (0x0006c0cf) list_pinb_item_pane_t1_ParamLimits

0xbf2e,	// (0x0006c0cf) list_pinb_item_pane_t1

0x0d58,	// (0x00060ef9) calc_display_pane

0x0d7d,	// (0x00060f1e) calc_paper_pane

0x0da0,	// (0x00060f41) grid_calc_pane

0xb7dd,	// (0x0006b97e) bg_list_pane_cp01

0xbf42,	// (0x0006c0e3) clock_g1

0xbf42,	// (0x0006c0e3) clock_g2

0x0001,

0xf08c,	// (0x0006f22d) clock_g

0xbf4c,	// (0x0006c0ed) clock_t1_ParamLimits

0xbf4c,	// (0x0006c0ed) clock_t1

0xbf60,	// (0x0006c101) clock_t2_ParamLimits

0xbf60,	// (0x0006c101) clock_t2

0xbf60,	// (0x0006c101) clock_t3_ParamLimits

0xbf60,	// (0x0006c101) clock_t3

0xbf60,	// (0x0006c101) clock_t4_ParamLimits

0xbf60,	// (0x0006c101) clock_t4

0xbf4c,	// (0x0006c0ed) clock_t5_ParamLimits

0xbf4c,	// (0x0006c0ed) clock_t5

0xbf60,	// (0x0006c101) clock_t6_ParamLimits

0xbf60,	// (0x0006c101) clock_t6

0xbf60,	// (0x0006c101) clock_t7_ParamLimits

0xbf60,	// (0x0006c101) clock_t7

0xbf60,	// (0x0006c101) clock_t8_ParamLimits

0xbf60,	// (0x0006c101) clock_t8

0xbf60,	// (0x0006c101) clock_t9_ParamLimits

0xbf60,	// (0x0006c101) clock_t9

0x0008,

0xf091,	// (0x0006f232) clock_t_ParamLimits

0xf091,	// (0x0006f232) clock_t

0xb7dd,	// (0x0006b97e) popup_clock_analogue_window_cp02

0xb7dd,	// (0x0006b97e) popup_clock_digital_window_cp01

0xbc20,	// (0x0006bdc1) listscroll_help_pane

0xbc20,	// (0x0006bdc1) phob_pre_status_pane

0xbf74,	// (0x0006c115) grid_qdial_pane

0xbe7b,	// (0x0006c01c) listscroll_mce_pane

0xbe7b,	// (0x0006c01c) bg_notes_pane

0xbf7e,	// (0x0006c11f) list_notes_pane

0x0dce,	// (0x00060f6f) scroll_pane_cp06

0xbf8c,	// (0x0006c12d) bg_calc_paper_pane

0x9bb3,	// (0x00069d54) list_calc_pane

0xbfa0,	// (0x0006c141) bg_calc_display_pane

0x0de2,	// (0x00060f83) calc_display_pane_t1

0x0df4,	// (0x00060f95) calc_display_pane_t2

0x9bcd,	// (0x00069d6e) calc_display_pane_t3

0x0002,

0xf0a4,	// (0x0006f245) calc_display_pane_t

0x0e06,	// (0x00060fa7) cell_calc_pane_ParamLimits

0x0e06,	// (0x00060fa7) cell_calc_pane

0xbfac,	// (0x0006c14d) bg_calc_paper_pane_g1

0xbfb8,	// (0x0006c159) bg_calc_paper_pane_g2

0xbfc4,	// (0x0006c165) bg_calc_paper_pane_g3

0xbfd0,	// (0x0006c171) bg_calc_paper_pane_g4

0xbfdc,	// (0x0006c17d) bg_calc_paper_pane_g5

0x0e3b,	// (0x00060fdc) bg_calc_paper_pane_g6

0x0e4a,	// (0x00060feb) bg_calc_paper_pane_g7

0x0e59,	// (0x00060ffa) bg_calc_paper_pane_g8

0x0007,

0xf0ab,	// (0x0006f24c) bg_calc_paper_pane_g

0x0e6c,	// (0x0006100d) calc_bg_paper_pane_g9

0x0e7f,	// (0x00061020) list_calc_item_pane_ParamLimits

0x0e7f,	// (0x00061020) list_calc_item_pane

0xbfe8,	// (0x0006c189) list_calc_item_pane_g1

0x9bdf,	// (0x00069d80) list_calc_item_pane_t1_ParamLimits

0x9bdf,	// (0x00069d80) list_calc_item_pane_t1

0x0e94,	// (0x00061035) list_calc_item_pane_t2_ParamLimits

0x0e94,	// (0x00061035) list_calc_item_pane_t2

0x0001,

0xf0bc,	// (0x0006f25d) list_calc_item_pane_t_ParamLimits

0xf0bc,	// (0x0006f25d) list_calc_item_pane_t

0xbe93,	// (0x0006c034) cell_calc_pane_g1

0xbff5,	// (0x0006c196) grid_highlight_pane_cp02

0x0ec6,	// (0x00061067) bg_calc_display_pane_g1

0x0ecf,	// (0x00061070) bg_calc_display_pane_g2

0xc047,	// (0x0006c1e8) bg_calc_display_pane_g3

0x0002,

0xf0c6,	// (0x0006f267) bg_calc_display_pane_g

0x0ed9,	// (0x0006107a) cell_qdial_pane_ParamLimits

0x0ed9,	// (0x0006107a) cell_qdial_pane

0x0eed,	// (0x0006108e) cell_qdial_pane_g1_ParamLimits

0x0eed,	// (0x0006108e) cell_qdial_pane_g1

0x0f03,	// (0x000610a4) cell_qdial_pane_g2_ParamLimits

0x0f03,	// (0x000610a4) cell_qdial_pane_g2

0xc017,	// (0x0006c1b8) cell_qdial_pane_g3_ParamLimits

0xc017,	// (0x0006c1b8) cell_qdial_pane_g3

0x0003,

0xf0cd,	// (0x0006f26e) cell_qdial_pane_g_ParamLimits

0xf0cd,	// (0x0006f26e) cell_qdial_pane_g

0x0f29,	// (0x000610ca) cell_qdial_pane_t1_ParamLimits

0x0f29,	// (0x000610ca) cell_qdial_pane_t1

0x0f41,	// (0x000610e2) cell_qdial_pane_t2_ParamLimits

0x0f41,	// (0x000610e2) cell_qdial_pane_t2

0x0f54,	// (0x000610f5) cell_qdial_pane_t3_ParamLimits

0x0f54,	// (0x000610f5) cell_qdial_pane_t3

0x0002,

0xf0d6,	// (0x0006f277) cell_qdial_pane_t_ParamLimits

0xf0d6,	// (0x0006f277) cell_qdial_pane_t

0xbc20,	// (0x0006bdc1) grid_highlight_pane_cp04

0xc023,	// (0x0006c1c4) thumbnail_qdial_pane_ParamLimits

0xc023,	// (0x0006c1c4) thumbnail_qdial_pane

0xc479,	// (0x0006c61a) list_help_pane

0xc482,	// (0x0006c623) scroll_pane_cp02

0x0f67,	// (0x00061108) help_list_pane_t1_ParamLimits

0x0f67,	// (0x00061108) help_list_pane_t1

0xc48b,	// (0x0006c62c) bg_notes_pane_g2

0xc493,	// (0x0006c634) bg_notes_pane_g3

0xc49b,	// (0x0006c63c) notes_bg_pane_g1

0xc4a3,	// (0x0006c644) notes_bg_pane_g4

0xc4ab,	// (0x0006c64c) notes_bg_pane_g5

0xc4b3,	// (0x0006c654) notes_bg_pane_g6

0xc4bb,	// (0x0006c65c) notes_bg_pane_g7

0xc4c3,	// (0x0006c664) notes_bg_pane_g8

0xc4cb,	// (0x0006c66c) notes_bg_pane_g9

0x0006,

0xf0f4,	// (0x0006f295) notes_bg_pane_g

0x0f86,	// (0x00061127) list_notes_text_pane_ParamLimits

0x0f86,	// (0x00061127) list_notes_text_pane

0xc4d3,	// (0x0006c674) list_notes_text_pane_g1

0x0f9c,	// (0x0006113d) list_notes_text_pane_t1

0x0faa,	// (0x0006114b) listscroll_cale_week_pane

0x0fd6,	// (0x00061177) bg_cale_heading_pane

0xc4ed,	// (0x0006c68e) bg_cale_pane_cp01

0x0fee,	// (0x0006118f) cale_week_corner_pane

0x100d,	// (0x000611ae) cale_week_day_heading_pane

0x102a,	// (0x000611cb) cale_week_scroll_pane_g1

0x103d,	// (0x000611de) cale_week_scroll_pane_g2

0x1055,	// (0x000611f6) cale_week_scroll_pane_g3

0x106d,	// (0x0006120e) cale_week_scroll_pane_g4

0x1085,	// (0x00061226) cale_week_scroll_pane_g5

0x10a5,	// (0x00061246) cale_week_scroll_pane_g6

0x10c5,	// (0x00061266) cale_week_scroll_pane_g7

0x10e5,	// (0x00061286) cale_week_scroll_pane_g8

0x1109,	// (0x000612aa) cale_week_scroll_pane_g9

0x1121,	// (0x000612c2) cale_week_scroll_pane_g10

0x1139,	// (0x000612da) cale_week_scroll_pane_g11

0x1151,	// (0x000612f2) cale_week_scroll_pane_g12

0x1169,	// (0x0006130a) cale_week_scroll_pane_g13

0x1169,	// (0x0006130a) cale_week_scroll_pane_g14

0x1169,	// (0x0006130a) cale_week_scroll_pane_g15

0x000f,

0xf103,	// (0x0006f2a4) cale_week_scroll_pane_g

0x11a5,	// (0x00061346) cale_week_time_pane

0x11c9,	// (0x0006136a) grid_cale_week_pane

0xc51c,	// (0x0006c6bd) scroll_pane_cp08

0x11ef,	// (0x00061390) cell_cale_week_pane_ParamLimits

0x11ef,	// (0x00061390) cell_cale_week_pane

0x127d,	// (0x0006141e) cale_week_day_heading_pane_t1

0x12a7,	// (0x00061448) cale_week_day_heading_pane_t2

0x12d6,	// (0x00061477) cale_week_day_heading_pane_t3

0x1305,	// (0x000614a6) cale_week_day_heading_pane_t4

0x1334,	// (0x000614d5) cale_week_day_heading_pane_t5

0x136b,	// (0x0006150c) cale_week_day_heading_pane_t6

0x13a2,	// (0x00061543) cale_week_day_heading_pane_t7

0x0006,

0xf124,	// (0x0006f2c5) cale_week_day_heading_pane_t

0xc539,	// (0x0006c6da) bg_cale_side_pane

0x13cc,	// (0x0006156d) cale_week_time_pane_t1

0x13e6,	// (0x00061587) cale_week_time_pane_t2

0x1400,	// (0x000615a1) cale_week_time_pane_t3

0x141a,	// (0x000615bb) cale_week_time_pane_t4

0x1434,	// (0x000615d5) cale_week_time_pane_t5

0x144e,	// (0x000615ef) cale_week_time_pane_t6

0x1468,	// (0x00061609) cale_week_time_pane_t7

0x1482,	// (0x00061623) cale_week_time_pane_t8

0x0007,

0xf133,	// (0x0006f2d4) cale_week_time_pane_t

0x14a2,	// (0x00061643) cell_cale_week_pane_g2

0x14c6,	// (0x00061667) cell_cale_week_pane_g3_ParamLimits

0x14c6,	// (0x00061667) cell_cale_week_pane_g3

0xc547,	// (0x0006c6e8) grid_highlight_pane_cp07

0xc54f,	// (0x0006c6f0) listscroll_gms_pane

0xc559,	// (0x0006c6fa) grid_gms_pane

0xc562,	// (0x0006c703) listscroll_gms_pane_g1

0xc56a,	// (0x0006c70b) listscroll_gms_pane_g2

0x0001,

0xf144,	// (0x0006f2e5) listscroll_gms_pane_g

0x14de,	// (0x0006167f) scroll_pane_cp010

0x14e9,	// (0x0006168a) cell_gms_pane_ParamLimits

0x14e9,	// (0x0006168a) cell_gms_pane

0x14fb,	// (0x0006169c) cell_gms_pane_g1

0xc572,	// (0x0006c713) cell_gms_pane_g2

0xc4d3,	// (0x0006c674) cell_gms_pane_g3

0xc57a,	// (0x0006c71b) cell_gms_pane_g4

0x0003,

0xf149,	// (0x0006f2ea) cell_gms_pane_g

0xc583,	// (0x0006c724) grid_highlight_pane_cp09

0x318b,	// (0x0006332c) phob_pre_status_pane_g1

0x3193,	// (0x00063334) phob_pre_status_pane_g2

0x319b,	// (0x0006333c) phob_pre_status_pane_g3

0x31a3,	// (0x00063344) phob_pre_status_pane_g4

0x0004,

0xf46a,	// (0x0006f60b) phob_pre_status_pane_g

0x31b3,	// (0x00063354) phob_pre_status_pane_t1

0x31c1,	// (0x00063362) phob_pre_status_pane_t2

0x31d1,	// (0x00063372) phob_pre_status_pane_t3

0x0002,

0xf475,	// (0x0006f616) phob_pre_status_pane_t

0xc58b,	// (0x0006c72c) bg_list_pane_cp05

0x150b,	// (0x000616ac) grid_vorec_pane

0x1513,	// (0x000616b4) vorec_t1

0x1521,	// (0x000616c2) vorec_t2

0x152f,	// (0x000616d0) vorec_t3

0x153d,	// (0x000616de) vorec_t4

0xbc12,	// (0x0006bdb3) vorec_t5

0x8c91,	// (0x00068e32) vorec_t6

0x0004,

0xf152,	// (0x0006f2f3) vorec_t

0x8c9f,	// (0x00068e40) wait_bar_pane_cp01

0x1559,	// (0x000616fa) cell_vorec_pane_ParamLimits

0x1559,	// (0x000616fa) cell_vorec_pane

0x9bfa,	// (0x00069d9b) cell_vorec_pane_g1

0xbc20,	// (0x0006bdc1) grid_highlight_pane_cp05

0xbe9d,	// (0x0006c03e) cams_zoom_pane

0xbe9d,	// (0x0006c03e) image_vga_pane

0xbf04,	// (0x0006c0a5) main_camera_pane_g1

0xbf04,	// (0x0006c0a5) main_camera_pane_g2

0xbf04,	// (0x0006c0a5) main_camera_pane_g3

0xbf04,	// (0x0006c0a5) main_camera_pane_g4

0xbf04,	// (0x0006c0a5) main_camera_pane_g5

0xbf04,	// (0x0006c0a5) main_camera_pane_g6

0xbf04,	// (0x0006c0a5) main_camera_pane_g7

0x0007,

0xf15d,	// (0x0006f2fe) main_camera_pane_g

0xbf4c,	// (0x0006c0ed) main_camera_pane_t1

0xbf4c,	// (0x0006c0ed) main_camera_pane_t2

0x0001,

0xf16e,	// (0x0006f30f) main_camera_pane_t

0x1580,	// (0x00061721) cams_zoom_pane_cp_ParamLimits

0x1580,	// (0x00061721) cams_zoom_pane_cp

0x15b4,	// (0x00061755) image_cif_pane_ParamLimits

0x15b4,	// (0x00061755) image_cif_pane

0xb7dd,	// (0x0006b97e) image_subqcif_pane

0x15c6,	// (0x00061767) main_video_pane_g1_ParamLimits

0x15c6,	// (0x00061767) main_video_pane_g1

0x15f4,	// (0x00061795) main_video_pane_g2_ParamLimits

0x15f4,	// (0x00061795) main_video_pane_g2

0x162e,	// (0x000617cf) main_video_pane_g3_ParamLimits

0x162e,	// (0x000617cf) main_video_pane_g3

0x162e,	// (0x000617cf) main_video_pane_g4_ParamLimits

0x162e,	// (0x000617cf) main_video_pane_g4

0x1662,	// (0x00061803) main_video_pane_g5_ParamLimits

0x1662,	// (0x00061803) main_video_pane_g5

0xc593,	// (0x0006c734) main_video_pane_g6_ParamLimits

0xc593,	// (0x0006c734) main_video_pane_g6

0x0006,

0xf173,	// (0x0006f314) main_video_pane_g_ParamLimits

0xf173,	// (0x0006f314) main_video_pane_g

0x167e,	// (0x0006181f) main_video_pane_t1_ParamLimits

0x167e,	// (0x0006181f) main_video_pane_t1

0xbf42,	// (0x0006c0e3) cams_zoom_pane_g1

0xbf42,	// (0x0006c0e3) cams_zoom_pane_g2

0xbf42,	// (0x0006c0e3) cams_zoom_pane_g3

0xbf42,	// (0x0006c0e3) cams_zoom_pane_g4

0x0003,

0xf182,	// (0x0006f323) cams_zoom_pane_g

0xbe9d,	// (0x0006c03e) grid_cams_pane

0xbe9d,	// (0x0006c03e) linegrid_cams_pane

0x16c2,	// (0x00061863) cell_cams_pane_ParamLimits

0x16c2,	// (0x00061863) cell_cams_pane

0xb7dd,	// (0x0006b97e) cams_burst_image_pane

0xbf42,	// (0x0006c0e3) cell_cams_pane_g1

0xb7dd,	// (0x0006b97e) grid_highlight_pane_cp03

0xbe93,	// (0x0006c034) mp_bg_pane_g1

0xb7dd,	// (0x0006b97e) bg_list_pane_cp03

0xb7dd,	// (0x0006b97e) bg_mp_pane

0xb7dd,	// (0x0006b97e) grid_mp_pane

0xbf42,	// (0x0006c0e3) media_player_g1

0xcc2e,	// (0x0006cdcf) media_player_t1

0xcc2e,	// (0x0006cdcf) media_player_t2

0xcc2e,	// (0x0006cdcf) media_player_t3

0xcc2e,	// (0x0006cdcf) media_player_t4

0xcc2e,	// (0x0006cdcf) media_player_t5

0xcc2e,	// (0x0006cdcf) media_player_t6

0xcc2e,	// (0x0006cdcf) media_player_t7

0x0006,

0xf45b,	// (0x0006f5fc) media_player_t

0xb7dd,	// (0x0006b97e) wait_bar_pane_cp02

0xf44e,	// (0x0006f5ef) main_usb_pane_t

0xce99,	// (0x0006d03a) cell_mp_pane

0xbe93,	// (0x0006c034) cell_mp_pane_g1

0xbc20,	// (0x0006bdc1) grid_highlight_pane_cp06

0xc5ad,	// (0x0006c74e) grid_skin_colour_pane

0xc5b5,	// (0x0006c756) list_highlight_pane_cp03

0x16d7,	// (0x00061878) skin_g1

0xc5bd,	// (0x0006c75e) skin_t1

0xc5cc,	// (0x0006c76d) skin_t2

0x0001,

0xf1a7,	// (0x0006f348) skin_t

0x16df,	// (0x00061880) cell_skin_colour_pane_ParamLimits

0x16df,	// (0x00061880) cell_skin_colour_pane

0xc5da,	// (0x0006c77b) cell_skin_colour_pane_g1

0x1758,	// (0x000618f9) call_video_g1_ParamLimits

0x1758,	// (0x000618f9) call_video_g1

0x1774,	// (0x00061915) call_video_g2_ParamLimits

0x1774,	// (0x00061915) call_video_g2

0x0001,

0xf1ac,	// (0x0006f34d) call_video_g_ParamLimits

0xf1ac,	// (0x0006f34d) call_video_g

0x17c6,	// (0x00061967) call_video_uplink_pane_cp1_ParamLimits

0x17c6,	// (0x00061967) call_video_uplink_pane_cp1

0xc5ec,	// (0x0006c78d) call_video_uplink_pane_cp2

0x1865,	// (0x00061a06) video_down_crop_pane_ParamLimits

0x1865,	// (0x00061a06) video_down_crop_pane

0x194e,	// (0x00061aef) video_down_pane_ParamLimits

0x194e,	// (0x00061aef) video_down_pane

0xc5f4,	// (0x0006c795) video_down_subqcif_pane_ParamLimits

0xc5f4,	// (0x0006c795) video_down_subqcif_pane

0xc60c,	// (0x0006c7ad) video_down_subqcif_pane_cp_ParamLimits

0xc60c,	// (0x0006c7ad) video_down_subqcif_pane_cp

0xc632,	// (0x0006c7d3) im_reading_pane_ParamLimits

0xc632,	// (0x0006c7d3) im_reading_pane

0x1a5e,	// (0x00061bff) im_writing_pane_ParamLimits

0x1a5e,	// (0x00061bff) im_writing_pane

0x1a74,	// (0x00061c15) im_reading_pane_t1

0xc64c,	// (0x0006c7ed) list_im_pane

0xc65d,	// (0x0006c7fe) scroll_pane_cp07

0x1aae,	// (0x00061c4f) im_writing_pane_t1_ParamLimits

0x1aae,	// (0x00061c4f) im_writing_pane_t1

0xc676,	// (0x0006c817) im_writing_pane_t2_ParamLimits

0xc676,	// (0x0006c817) im_writing_pane_t2

0x0001,

0xf1b6,	// (0x0006f357) im_writing_pane_t_ParamLimits

0xf1b6,	// (0x0006f357) im_writing_pane_t

0xbc20,	// (0x0006bdc1) input_focus_pane_cp04

0xbc20,	// (0x0006bdc1) input_focus_pane_cp05

0x1ac3,	// (0x00061c64) list_im_single_pane_ParamLimits

0x1ac3,	// (0x00061c64) list_im_single_pane

0x1ad8,	// (0x00061c79) list_single_im_pane_t1

0xc58b,	// (0x0006c72c) blid_accuracy_pane

0xc58b,	// (0x0006c72c) blid_compass_pane

0xe3f9,	// (0x0006e59a) main_location_t1

0xe3f9,	// (0x0006e59a) main_location_t2

0xe3f9,	// (0x0006e59a) main_location_t3

0x0002,

0x00bc,	// (0x0006025d) main_location_t

0xbc20,	// (0x0006bdc1) aid_levels_location

0xbe93,	// (0x0006c034) blid_accuracy_pane_g1

0xbe93,	// (0x0006c034) blid_accuracy_pane_g2

0x0001,

0xf205,	// (0x0006f3a6) blid_accuracy_pane_g

0xc6be,	// (0x0006c85f) wml_content_pane

0xc8aa,	// (0x0006ca4b) wml_button_pane_ParamLimits

0xc8aa,	// (0x0006ca4b) wml_button_pane

0x1ae7,	// (0x00061c88) wml_list_single_large_pane_ParamLimits

0x1ae7,	// (0x00061c88) wml_list_single_large_pane

0x1afc,	// (0x00061c9d) wml_list_single_medium_pane_ParamLimits

0x1afc,	// (0x00061c9d) wml_list_single_medium_pane

0x1b13,	// (0x00061cb4) wml_list_single_small_pane_ParamLimits

0x1b13,	// (0x00061cb4) wml_list_single_small_pane

0xc8be,	// (0x0006ca5f) wml_selection_box_pane_ParamLimits

0xc8be,	// (0x0006ca5f) wml_selection_box_pane

0xc8d1,	// (0x0006ca72) wml_list_single_pane_t1

0xc8e0,	// (0x0006ca81) wml_list_single_medium_pane_t1

0xc8ef,	// (0x0006ca90) wml_list_single_large_pane_t1

0xc8fe,	// (0x0006ca9f) input_focus_pane_cp02_ParamLimits

0xc8fe,	// (0x0006ca9f) input_focus_pane_cp02

0xc911,	// (0x0006cab2) wml_selection_box_pane_g1

0xc91a,	// (0x0006cabb) wml_selection_box_pane_t1_ParamLimits

0xc91a,	// (0x0006cabb) wml_selection_box_pane_t1

0xbe7b,	// (0x0006c01c) bg_wml_button_pane_ParamLimits

0xbe7b,	// (0x0006c01c) bg_wml_button_pane

0xc932,	// (0x0006cad3) wml_button_pane_g1

0xc93a,	// (0x0006cadb) wml_button_pane_t1

0xc932,	// (0x0006cad3) wml_button_bg_pane_g1

0xc94a,	// (0x0006caeb) wml_button_bg_pane_g2

0xc952,	// (0x0006caf3) wml_button_bg_pane_g3

0xc95a,	// (0x0006cafb) wml_button_bg_pane_g4

0xc962,	// (0x0006cb03) wml_button_bg_pane_g5

0xc96a,	// (0x0006cb0b) wml_button_bg_pane_g6

0xc972,	// (0x0006cb13) wml_button_bg_pane_g7

0xc97a,	// (0x0006cb1b) wml_button_bg_pane_g8

0xc982,	// (0x0006cb23) wml_button_bg_pane_g9

0x0008,

0xf1bb,	// (0x0006f35c) wml_button_bg_pane_g

0x1b2c,	// (0x00061ccd) bg_list_pane_cp02

0xc98a,	// (0x0006cb2b) mce_header_pane_ParamLimits

0xc98a,	// (0x0006cb2b) mce_header_pane

0xc9a0,	// (0x0006cb41) mce_icon_pane

0xc9a0,	// (0x0006cb41) mce_image_pane

0xc9a9,	// (0x0006cb4a) mce_text_pane_ParamLimits

0xc9a9,	// (0x0006cb4a) mce_text_pane

0x1b34,	// (0x00061cd5) scroll_pane_cp03

0xc8a2,	// (0x0006ca43) scroll_pane_cp04

0xc9bc,	// (0x0006cb5d) scroll_pane_cp05_ParamLimits

0xc9bc,	// (0x0006cb5d) scroll_pane_cp05

0x1b3e,	// (0x00061cdf) mce_header_field_pane_ParamLimits

0x1b3e,	// (0x00061cdf) mce_header_field_pane

0x1b55,	// (0x00061cf6) mce_header_field_pane_2_ParamLimits

0x1b55,	// (0x00061cf6) mce_header_field_pane_2

0x1b6b,	// (0x00061d0c) mce_header_field_pane_3

0x1b73,	// (0x00061d14) list_single_mce_message_pane_ParamLimits

0x1b73,	// (0x00061d14) list_single_mce_message_pane

0x1b89,	// (0x00061d2a) list_single_mce_smart_pane_ParamLimits

0x1b89,	// (0x00061d2a) list_single_mce_smart_pane

0xc9c8,	// (0x0006cb69) input_focus_pane_cp03

0xc9d1,	// (0x0006cb72) list_header_data_pane

0x1baa,	// (0x00061d4b) mce_header_field_pane_t1

0x1bba,	// (0x00061d5b) list_single_mce_header_pane_ParamLimits

0x1bba,	// (0x00061d5b) list_single_mce_header_pane

0xc9d9,	// (0x0006cb7a) list_single_mce_header_pane_t1

0xc9e8,	// (0x0006cb89) list_single_mce_message_pane_g1

0xc9f0,	// (0x0006cb91) list_single_mce_message_pane_t1

0x1bf4,	// (0x00061d95) bg_cale_heading_pane_cp01_ParamLimits

0x1bf4,	// (0x00061d95) bg_cale_heading_pane_cp01

0xc9fe,	// (0x0006cb9f) bg_cale_pane_cp02_ParamLimits

0xc9fe,	// (0x0006cb9f) bg_cale_pane_cp02

0x1c2e,	// (0x00061dcf) cale_month_corner_pane

0x1c4d,	// (0x00061dee) cale_month_day_heading_pane_ParamLimits

0x1c4d,	// (0x00061dee) cale_month_day_heading_pane

0x1c9f,	// (0x00061e40) cale_month_pane_g1_ParamLimits

0x1c9f,	// (0x00061e40) cale_month_pane_g1

0x1cce,	// (0x00061e6f) cale_month_pane_g2_ParamLimits

0x1cce,	// (0x00061e6f) cale_month_pane_g2

0x1cfe,	// (0x00061e9f) cale_month_pane_g3_ParamLimits

0x1cfe,	// (0x00061e9f) cale_month_pane_g3

0x1d3a,	// (0x00061edb) cale_month_pane_g4_ParamLimits

0x1d3a,	// (0x00061edb) cale_month_pane_g4

0x1d76,	// (0x00061f17) cale_month_pane_g5_ParamLimits

0x1d76,	// (0x00061f17) cale_month_pane_g5

0x1dbe,	// (0x00061f5f) cale_month_pane_g6_ParamLimits

0x1dbe,	// (0x00061f5f) cale_month_pane_g6

0x1e0a,	// (0x00061fab) cale_month_pane_g7_ParamLimits

0x1e0a,	// (0x00061fab) cale_month_pane_g7

0x1e5a,	// (0x00061ffb) cale_month_pane_g8_ParamLimits

0x1e5a,	// (0x00061ffb) cale_month_pane_g8

0x1eae,	// (0x0006204f) cale_month_pane_g9_ParamLimits

0x1eae,	// (0x0006204f) cale_month_pane_g9

0x1f00,	// (0x000620a1) cale_month_pane_g10_ParamLimits

0x1f00,	// (0x000620a1) cale_month_pane_g10

0x1f52,	// (0x000620f3) cale_month_pane_g11_ParamLimits

0x1f52,	// (0x000620f3) cale_month_pane_g11

0x1fa4,	// (0x00062145) cale_month_pane_g12_ParamLimits

0x1fa4,	// (0x00062145) cale_month_pane_g12

0x1ff6,	// (0x00062197) cale_month_pane_g13_ParamLimits

0x1ff6,	// (0x00062197) cale_month_pane_g13

0x000c,

0xf1ce,	// (0x0006f36f) cale_month_pane_g_ParamLimits

0xf1ce,	// (0x0006f36f) cale_month_pane_g

0x2048,	// (0x000621e9) cale_month_week_pane

0x206c,	// (0x0006220d) grid_cale_month_pane_ParamLimits

0x206c,	// (0x0006220d) grid_cale_month_pane

0x20b5,	// (0x00062256) cale_month_day_heading_pane_t1

0x20f7,	// (0x00062298) cale_month_day_heading_pane_t2

0x212c,	// (0x000622cd) cale_month_day_heading_pane_t3

0x2161,	// (0x00062302) cale_month_day_heading_pane_t4

0x219e,	// (0x0006233f) cale_month_day_heading_pane_t5

0x21e3,	// (0x00062384) cale_month_day_heading_pane_t6

0x2228,	// (0x000623c9) cale_month_day_heading_pane_t7

0x0006,

0xf1e9,	// (0x0006f38a) cale_month_day_heading_pane_t

0xc539,	// (0x0006c6da) bg_cale_side_pane_cp01

0x2275,	// (0x00062416) cale_month_week_pane_t1

0x228e,	// (0x0006242f) cale_month_week_pane_t2

0x22a7,	// (0x00062448) cale_month_week_pane_t3

0x22c0,	// (0x00062461) cale_month_week_pane_t4

0x22d9,	// (0x0006247a) cale_month_week_pane_t5

0x22f2,	// (0x00062493) cale_month_week_pane_t6

0x0005,

0xf1f8,	// (0x0006f399) cale_month_week_pane_t

0x230b,	// (0x000624ac) cell_cale_month_pane_ParamLimits

0x230b,	// (0x000624ac) cell_cale_month_pane

0x9c04,	// (0x00069da5) cell_cale_month_pane_g1

0x2439,	// (0x000625da) cell_cale_month_pane_t1_ParamLimits

0x2439,	// (0x000625da) cell_cale_month_pane_t1

0xc547,	// (0x0006c6e8) grid_highlight_pane_cp08

0xbe93,	// (0x0006c034) main_smil_g1

0x2465,	// (0x00062606) smil_status_pane

0xca3d,	// (0x0006cbde) smil_text_pane

0xc4cb,	// (0x0006c66c) bg_popup_call3_rect_pane_g8

0xc4c3,	// (0x0006c664) bg_popup_call3_rect_pane_g9

0x0008,

0xf20a,	// (0x0006f3ab) bg_popup_call3_rect_pane_g

0xe4c2,	// (0x0006e663) smil_status_volume_pane_g1

0xca47,	// (0x0006cbe8) smil_status_pane_t1

0x9d56,	// (0x00069ef7) volume_smil_pane

0xca5e,	// (0x0006cbff) list_smil_text_pane

0x247a,	// (0x0006261b) scroll_pane_cp011

0x2485,	// (0x00062626) smil_text_list_pane_t1_ParamLimits

0x2485,	// (0x00062626) smil_text_list_pane_t1

0x9c10,	// (0x00069db1) aid_volume_smil_ParamLimits

0x9c10,	// (0x00069db1) aid_volume_smil

0xbe93,	// (0x0006c034) smil_volume_pane_g1

0xbe93,	// (0x0006c034) smil_volume_pane_g2

0x0001,

0xf205,	// (0x0006f3a6) smil_volume_pane_g

0x24c9,	// (0x0006266a) listscroll_cale_day_pane

0xca68,	// (0x0006cc09) bg_cale_pane

0xca80,	// (0x0006cc21) list_cale_pane

0xcaa3,	// (0x0006cc44) scroll_pane_cp09

0xc49b,	// (0x0006c63c) cale_bg_pane_g1

0xc493,	// (0x0006c634) cale_bg_pane_g2

0xc48b,	// (0x0006c62c) cale_bg_pane_g3

0xc4ab,	// (0x0006c64c) cale_bg_pane_g4

0xc4a3,	// (0x0006c644) cale_bg_pane_g5

0xc4b3,	// (0x0006c654) cale_bg_pane_g6

0xc4bb,	// (0x0006c65c) cale_bg_pane_g7

0xc4cb,	// (0x0006c66c) cale_bg_pane_g8

0xc4c3,	// (0x0006c664) cale_bg_pane_g9

0x0008,

0xf20a,	// (0x0006f3ab) cale_bg_pane_g

0x24e3,	// (0x00062684) list_cale_time_pane_ParamLimits

0x24e3,	// (0x00062684) list_cale_time_pane

0xcab4,	// (0x0006cc55) list_cale_time_pane_g1_ParamLimits

0xcab4,	// (0x0006cc55) list_cale_time_pane_g1

0xcac0,	// (0x0006cc61) list_cale_time_pane_g2_ParamLimits

0xcac0,	// (0x0006cc61) list_cale_time_pane_g2

0x24f9,	// (0x0006269a) list_cale_time_pane_g3_ParamLimits

0x24f9,	// (0x0006269a) list_cale_time_pane_g3

0x2507,	// (0x000626a8) list_cale_time_pane_g4_ParamLimits

0x2507,	// (0x000626a8) list_cale_time_pane_g4

0x2515,	// (0x000626b6) list_cale_time_pane_g5_ParamLimits

0x2515,	// (0x000626b6) list_cale_time_pane_g5

0x0005,

0xf21d,	// (0x0006f3be) list_cale_time_pane_g_ParamLimits

0xf21d,	// (0x0006f3be) list_cale_time_pane_g

0xcada,	// (0x0006cc7b) list_cale_time_pane_t1_ParamLimits

0xcada,	// (0x0006cc7b) list_cale_time_pane_t1

0xcb02,	// (0x0006cca3) list_cale_time_pane_t2_ParamLimits

0xcb02,	// (0x0006cca3) list_cale_time_pane_t2

0x27a2,	// (0x00062943) aid_blid_cardinal_pane

0x27e0,	// (0x00062981) compass_pane_t4

0xcb2a,	// (0x0006cccb) list_cale_time_pane_t4_ParamLimits

0xcb2a,	// (0x0006cccb) list_cale_time_pane_t4

0x27ee,	// (0x0006298f) compass_pane_t5

0x27fc,	// (0x0006299d) compass_pane_t6

0x280a,	// (0x000629ab) compass_pane_t7

0xcfb3,	// (0x0006d154) navi_pane_cc_t1

0xd190,	// (0x0006d331) aid_phob_thumbnail_center_pane

0x2bdd,	// (0x00062d7e) main_postcard_pane_g4_ParamLimits

0x0002,

0xf22a,	// (0x0006f3cb) list_cale_time_pane_t_ParamLimits

0xf22a,	// (0x0006f3cb) list_cale_time_pane_t

0xb851,	// (0x0006b9f2) bg_popup_window_pane_cp02_ParamLimits

0xb851,	// (0x0006b9f2) bg_popup_window_pane_cp02

0xcb52,	// (0x0006ccf3) heading_pane_cp01_ParamLimits

0xcb52,	// (0x0006ccf3) heading_pane_cp01

0xcb5e,	// (0x0006ccff) loc_req_pane_ParamLimits

0xcb5e,	// (0x0006ccff) loc_req_pane

0xcb70,	// (0x0006cd11) loc_type_pane_ParamLimits

0xcb70,	// (0x0006cd11) loc_type_pane

0xcb82,	// (0x0006cd23) loc_type_pane_t1_ParamLimits

0xcb82,	// (0x0006cd23) loc_type_pane_t1

0xcb94,	// (0x0006cd35) loc_type_pane_t2_ParamLimits

0xcb94,	// (0x0006cd35) loc_type_pane_t2

0xcba6,	// (0x0006cd47) loc_type_pane_t3_ParamLimits

0xcba6,	// (0x0006cd47) loc_type_pane_t3

0x0002,

0xf231,	// (0x0006f3d2) loc_type_pane_t_ParamLimits

0xf231,	// (0x0006f3d2) loc_type_pane_t

0xcbb8,	// (0x0006cd59) list_loc_req_pane

0xcbc2,	// (0x0006cd63) scroll_pane_cp012

0x2523,	// (0x000626c4) list_single_loc_request_popup_menu_pane_ParamLimits

0x2523,	// (0x000626c4) list_single_loc_request_popup_menu_pane

0xcbcd,	// (0x0006cd6e) list_single_loc_request_popup_menu_pane_g1_ParamLimits

0xcbcd,	// (0x0006cd6e) list_single_loc_request_popup_menu_pane_g1

0xcbd9,	// (0x0006cd7a) list_single_loc_request_popup_menu_pane_g2_ParamLimits

0xcbd9,	// (0x0006cd7a) list_single_loc_request_popup_menu_pane_g2

0x0001,

0xf238,	// (0x0006f3d9) list_single_loc_request_popup_menu_pane_g_ParamLimits

0xf238,	// (0x0006f3d9) list_single_loc_request_popup_menu_pane_g

0xcbe5,	// (0x0006cd86) list_single_loc_request_popup_menu_pane_t1_ParamLimits

0xcbe5,	// (0x0006cd86) list_single_loc_request_popup_menu_pane_t1

0xbe7b,	// (0x0006c01c) bg_popup_window_pane_cp03_ParamLimits

0xbe7b,	// (0x0006c01c) bg_popup_window_pane_cp03

0xcbfb,	// (0x0006cd9c) heading_loc_req_pane_ParamLimits

0xcbfb,	// (0x0006cd9c) heading_loc_req_pane

0x2530,	// (0x000626d1) popup_dyc_status_message_window_g1_ParamLimits

0x2530,	// (0x000626d1) popup_dyc_status_message_window_g1

0x2544,	// (0x000626e5) popup_dyc_status_message_window_t1_ParamLimits

0x2544,	// (0x000626e5) popup_dyc_status_message_window_t1

0x2559,	// (0x000626fa) popup_dyc_status_message_window_t2_ParamLimits

0x2559,	// (0x000626fa) popup_dyc_status_message_window_t2

0x256e,	// (0x0006270f) popup_dyc_status_message_window_t3_ParamLimits

0x256e,	// (0x0006270f) popup_dyc_status_message_window_t3

0x0002,

0xf23d,	// (0x0006f3de) popup_dyc_status_message_window_t_ParamLimits

0xf23d,	// (0x0006f3de) popup_dyc_status_message_window_t

0xbc20,	// (0x0006bdc1) bg_heading_pane_cp01

0xcc07,	// (0x0006cda8) heading_loc_req_pane_g1

0xcc0f,	// (0x0006cdb0) heading_loc_req_pane_g2

0xcc17,	// (0x0006cdb8) heading_loc_req_pane_g3

0x0002,

0xf244,	// (0x0006f3e5) heading_loc_req_pane_g

0xcc1f,	// (0x0006cdc0) heading_loc_req_pane_t1

0xcc3e,	// (0x0006cddf) bg_popup_sub_pane_cp01_ParamLimits

0xcc3e,	// (0x0006cddf) bg_popup_sub_pane_cp01

0xcc4c,	// (0x0006cded) popup_cale_events_window_g1_ParamLimits

0xcc4c,	// (0x0006cded) popup_cale_events_window_g1

0xcc6c,	// (0x0006ce0d) popup_cale_events_window_g2_ParamLimits

0xcc6c,	// (0x0006ce0d) popup_cale_events_window_g2

0x0001,

0xf266,	// (0x0006f407) popup_cale_events_window_g_ParamLimits

0xf266,	// (0x0006f407) popup_cale_events_window_g

0xcc8c,	// (0x0006ce2d) popup_cale_events_window_t1_ParamLimits

0xcc8c,	// (0x0006ce2d) popup_cale_events_window_t1

0xcc9e,	// (0x0006ce3f) popup_cale_events_window_t2_ParamLimits

0xcc9e,	// (0x0006ce3f) popup_cale_events_window_t2

0xccdc,	// (0x0006ce7d) popup_cale_events_window_t3_ParamLimits

0xccdc,	// (0x0006ce7d) popup_cale_events_window_t3

0xcd16,	// (0x0006ceb7) popup_cale_events_window_t4_ParamLimits

0xcd16,	// (0x0006ceb7) popup_cale_events_window_t4

0x0003,

0xf26b,	// (0x0006f40c) popup_cale_events_window_t_ParamLimits

0xf26b,	// (0x0006f40c) popup_cale_events_window_t

0x2596,	// (0x00062737) call_type_pane

0x25a6,	// (0x00062747) popup_call_status_window_g1

0x25ba,	// (0x0006275b) popup_call_status_window_g2

0x25ce,	// (0x0006276f) popup_call_status_window_g3

0x0002,

0xf274,	// (0x0006f415) popup_call_status_window_g

0xcd4c,	// (0x0006ceed) call_type_pane_g1

0xcd55,	// (0x0006cef6) call_type_pane_g2

0x0001,

0xf27b,	// (0x0006f41c) call_type_pane_g

0xbc20,	// (0x0006bdc1) bg_popup_sub_pane_cp02

0xcd5e,	// (0x0006ceff) listscroll_popup_wml_pane

0xcd66,	// (0x0006cf07) list_wml_pane

0xcd70,	// (0x0006cf11) scroll_pane_cp013

0xcd7b,	// (0x0006cf1c) list_single_graphic_popup_wml_pane_ParamLimits

0xcd7b,	// (0x0006cf1c) list_single_graphic_popup_wml_pane

0xbe93,	// (0x0006c034) list_single_graphic_popup_wml_pane_g1

0xcd8f,	// (0x0006cf30) list_single_graphic_popup_wml_pane_g2

0x0001,

0xf280,	// (0x0006f421) list_single_graphic_popup_wml_pane_g

0xcd97,	// (0x0006cf38) list_single_graphic_popup_wml_pane_t1

0xcdad,	// (0x0006cf4e) aid_call_pane

0xbe73,	// (0x0006c014) popup_clock_analogue_window_g1

0xbe73,	// (0x0006c014) popup_clock_analogue_window_g2

0x9c3e,	// (0x00069ddf) popup_clock_analogue_window_g3

0x9c3e,	// (0x00069ddf) popup_clock_analogue_window_g4

0xbe93,	// (0x0006c034) popup_clock_analogue_window_g5

0x0004,

0xf285,	// (0x0006f426) popup_clock_analogue_window_g

0x9c46,	// (0x00069de7) popup_clock_analogue_window_t1

0x9c54,	// (0x00069df5) clock_digital_number_pane_ParamLimits

0x9c54,	// (0x00069df5) clock_digital_number_pane

0x9c60,	// (0x00069e01) clock_digital_number_pane_cp02_ParamLimits

0x9c60,	// (0x00069e01) clock_digital_number_pane_cp02

0x9c6c,	// (0x00069e0d) clock_digital_number_pane_cp03_ParamLimits

0x9c6c,	// (0x00069e0d) clock_digital_number_pane_cp03

0x9c78,	// (0x00069e19) clock_digital_number_pane_cp04_ParamLimits

0x9c78,	// (0x00069e19) clock_digital_number_pane_cp04

0x9c84,	// (0x00069e25) clock_digital_separator_pane_ParamLimits

0x9c84,	// (0x00069e25) clock_digital_separator_pane

0x9c90,	// (0x00069e31) popup_clock_digital_window_t1

0xbe93,	// (0x0006c034) clock_digital_number_pane_g1

0xbe93,	// (0x0006c034) clock_digital_number_pane_g2

0x0001,

0xf205,	// (0x0006f3a6) clock_digital_number_pane_g

0xbe93,	// (0x0006c034) clock_digital_separator_pane_g1

0xbe93,	// (0x0006c034) clock_digital_separator_pane_g2

0x0001,

0xf205,	// (0x0006f3a6) clock_digital_separator_pane_g

0xbc20,	// (0x0006bdc1) bg_popup_window_pane_cp04

0xcdb5,	// (0x0006cf56) heading_pane_cp03

0xc58b,	// (0x0006c72c) listscroll_popup_gms_pane

0xbc20,	// (0x0006bdc1) grid_large_graphic_popup_pane

0xcdbd,	// (0x0006cf5e) listscroll_popup_gms_pane_g1

0xcdc6,	// (0x0006cf67) listscroll_popup_gms_pane_g2

0x0001,

0xf290,	// (0x0006f431) listscroll_popup_gms_pane_g

0xcdcf,	// (0x0006cf70) scroll_pane_cp014

0xbef6,	// (0x0006c097) cell_large_graphic_popup_pane_ParamLimits

0xbef6,	// (0x0006c097) cell_large_graphic_popup_pane

0xbf04,	// (0x0006c0a5) cell_large_graphic_popup_pane_g1_ParamLimits

0xbf04,	// (0x0006c0a5) cell_large_graphic_popup_pane_g1

0xcdd8,	// (0x0006cf79) cell_large_graphic_popup_pane_g2_ParamLimits

0xcdd8,	// (0x0006cf79) cell_large_graphic_popup_pane_g2

0xcde6,	// (0x0006cf87) cell_large_graphic_popup_pane_g3_ParamLimits

0xcde6,	// (0x0006cf87) cell_large_graphic_popup_pane_g3

0xcdf4,	// (0x0006cf95) cell_large_graphic_popup_pane_g4_ParamLimits

0xcdf4,	// (0x0006cf95) cell_large_graphic_popup_pane_g4

0x0003,

0xf295,	// (0x0006f436) cell_large_graphic_popup_pane_g_ParamLimits

0xf295,	// (0x0006f436) cell_large_graphic_popup_pane_g

0xbc20,	// (0x0006bdc1) grid_highlight_pane_cp010

0xbe93,	// (0x0006c034) bg_popup_call_pane_g1

0xce05,	// (0x0006cfa6) list_single_graphic_popup_conf_pane_ParamLimits

0xce05,	// (0x0006cfa6) list_single_graphic_popup_conf_pane

0xce18,	// (0x0006cfb9) list_highlight_pane_cp01

0xce21,	// (0x0006cfc2) list_single_graphic_popup_conf_pane_g1

0xce29,	// (0x0006cfca) list_single_graphic_popup_conf_pane_g2

0x0001,

0xf29e,	// (0x0006f43f) list_single_graphic_popup_conf_pane_g

0xce31,	// (0x0006cfd2) list_single_graphic_popup_conf_pane_t1

0xce3f,	// (0x0006cfe0) linegrid_cams_pane_g1

0x25dd,	// (0x0006277e) linegrid_cams_pane_g2

0xc4d3,	// (0x0006c674) linegrid_cams_pane_g3

0xce48,	// (0x0006cfe9) linegrid_cams_pane_g4

0x25e6,	// (0x00062787) linegrid_cams_pane_g5

0x25ef,	// (0x00062790) linegrid_cams_pane_g6

0xc57a,	// (0x0006c71b) linegrid_cams_pane_g7

0x0006,

0xf2a3,	// (0x0006f444) linegrid_cams_pane_g

0xce51,	// (0x0006cff2) popup_clock_analogue_window

0xce51,	// (0x0006cff2) popup_clock_digital_window

0xbc20,	// (0x0006bdc1) popup_phob_thumbnail_window

0xbe93,	// (0x0006c034) call_video_uplink_pane_g1

0xce5a,	// (0x0006cffb) call_video_uplink_pane_g2

0x0001,

0xf2b2,	// (0x0006f453) call_video_uplink_pane_g

0xce62,	// (0x0006d003) video_uplink_pane

0xce6a,	// (0x0006d00b) mce_image_pane_g1

0x25fa,	// (0x0006279b) mce_image_pane_g2

0x2602,	// (0x000627a3) mce_image_pane_g3

0x260a,	// (0x000627ab) mce_image_pane_g4

0x2614,	// (0x000627b5) mce_image_pane_g5

0x0004,

0xf2b7,	// (0x0006f458) mce_image_pane_g

0xce74,	// (0x0006d015) control_top_pane_stacon_cp01_ParamLimits

0xce74,	// (0x0006d015) control_top_pane_stacon_cp01

0xce88,	// (0x0006d029) uni_indicator_pane_stacon_cp01_ParamLimits

0xce88,	// (0x0006d029) uni_indicator_pane_stacon_cp01

0xce99,	// (0x0006d03a) bg_popup_sub_pane_cp03

0x261c,	// (0x000627bd) chi_dic_find_pane

0x2624,	// (0x000627c5) listscroll_chi_dic_pane

0x262d,	// (0x000627ce) main_pane_chidic_g1

0x2640,	// (0x000627e1) chi_dic_find_pane_t1

0xcea3,	// (0x0006d044) find_chidic_pane

0xceac,	// (0x0006d04d) chi_dic_list_pane_ParamLimits

0xceac,	// (0x0006d04d) chi_dic_list_pane

0xcebd,	// (0x0006d05e) scroll_pane_cp020

0x264e,	// (0x000627ef) find_chidic_pane_t1

0xbc20,	// (0x0006bdc1) input_focus_pane_cp06

0x265d,	// (0x000627fe) list_chi_dic_pane_ParamLimits

0x265d,	// (0x000627fe) list_chi_dic_pane

0x266f,	// (0x00062810) list_chi_dic_pane_t1_ParamLimits

0x266f,	// (0x00062810) list_chi_dic_pane_t1

0xbc20,	// (0x0006bdc1) list_highlight_pane_cp020

0xcec5,	// (0x0006d066) bg_cale_heading_pane_g1

0x2682,	// (0x00062823) bg_cale_heading_pane_g2

0x268a,	// (0x0006282b) bg_cale_heading_pane_g3

0x2692,	// (0x00062833) bg_cale_heading_pane_g4

0x269c,	// (0x0006283d) bg_cale_heading_pane_g5

0x26a6,	// (0x00062847) bg_cale_heading_pane_g6

0x26ae,	// (0x0006284f) bg_cale_heading_pane_g7

0x26b6,	// (0x00062857) bg_cale_heading_pane_g8

0x26c0,	// (0x00062861) bg_cale_heading_pane_g9

0x0008,

0xf2c2,	// (0x0006f463) bg_cale_heading_pane_g

0xcec5,	// (0x0006d066) bg_cale_side_pane_g1

0x26ca,	// (0x0006286b) bg_cale_side_pane_g2

0x26d2,	// (0x00062873) bg_cale_side_pane_g3

0x26da,	// (0x0006287b) bg_cale_side_pane_g4

0x26e2,	// (0x00062883) bg_cale_side_pane_g5

0x26ea,	// (0x0006288b) bg_cale_side_pane_g6

0x26f2,	// (0x00062893) bg_cale_side_pane_g7

0x26fa,	// (0x0006289b) bg_cale_side_pane_g8

0x2702,	// (0x000628a3) bg_cale_side_pane_g9

0x0008,

0xf2d5,	// (0x0006f476) bg_cale_side_pane_g

0x270a,	// (0x000628ab) popup_call_status_window_ParamLimits

0x270a,	// (0x000628ab) popup_call_status_window

0xcecd,	// (0x0006d06e) stacon_top_pane

0xced5,	// (0x0006d076) status_pane_ParamLimits

0xced5,	// (0x0006d076) status_pane

0xceea,	// (0x0006d08b) status_small_pane

0xcef2,	// (0x0006d093) control_pane

0xbc20,	// (0x0006bdc1) stacon_bottom_pane

0xcefa,	// (0x0006d09b) list_single_mce_smart_pane_t1_ParamLimits

0xcefa,	// (0x0006d09b) list_single_mce_smart_pane_t1

0xcf0d,	// (0x0006d0ae) list_single_mce_smart_pane_t2_ParamLimits

0xcf0d,	// (0x0006d0ae) list_single_mce_smart_pane_t2

0x0001,

0xf2e8,	// (0x0006f489) list_single_mce_smart_pane_t_ParamLimits

0xf2e8,	// (0x0006f489) list_single_mce_smart_pane_t

0x2751,	// (0x000628f2) compass_pane

0x275a,	// (0x000628fb) main_location2_pane_t1

0x276c,	// (0x0006290d) main_location2_pane_t2

0x277e,	// (0x0006291f) main_location2_pane_t3

0x0003,

0xf2ed,	// (0x0006f48e) main_location2_pane_t

0xcf2c,	// (0x0006d0cd) compass_pane_g1_ParamLimits

0xcf2c,	// (0x0006d0cd) compass_pane_g1

0x27c2,	// (0x00062963) compass_pane_t1

0x27d1,	// (0x00062972) compass_pane_t2

0x0005,

0xf2f6,	// (0x0006f497) compass_pane_t

0x2818,	// (0x000629b9) text_secondary_cp61

0xcfaa,	// (0x0006d14b) navi_pane_cams_g5

0xd026,	// (0x0006d1c7) navi_pane_im_t1

0xd034,	// (0x0006d1d5) navi_pane_mp_g1_ParamLimits

0xd034,	// (0x0006d1d5) navi_pane_mp_g1

0xd048,	// (0x0006d1e9) navi_pane_mp_g2_ParamLimits

0xd048,	// (0x0006d1e9) navi_pane_mp_g2

0xd054,	// (0x0006d1f5) navi_pane_mp_g3_ParamLimits

0xd054,	// (0x0006d1f5) navi_pane_mp_g3

0x0002,

0xf30a,	// (0x0006f4ab) navi_pane_mp_g_ParamLimits

0xf30a,	// (0x0006f4ab) navi_pane_mp_g

0xd060,	// (0x0006d201) navi_pane_mp_t1

0xd06e,	// (0x0006d20f) navi_pane_mp_t2

0x0002,

0xf311,	// (0x0006f4b2) navi_pane_mp_t

0xd0d9,	// (0x0006d27a) navi_pane_vt_g1

0xd060,	// (0x0006d201) navi_pane_vt_t1

0xd0e1,	// (0x0006d282) navi_slider_pane

0xc58b,	// (0x0006c72c) zooming_pane

0xd0f1,	// (0x0006d292) navi_slider_pane_g1

0x9cad,	// (0x00069e4e) navi_slider_pane_g2

0x0006,

0xf318,	// (0x0006f4b9) navi_slider_pane_g

0xd115,	// (0x0006d2b6) aid_levels_zoom

0xd11d,	// (0x0006d2be) zooming_pane_g1

0xd125,	// (0x0006d2c6) zooming_pane_g2

0xd125,	// (0x0006d2c6) zooming_pane_g3

0x0002,

0xf327,	// (0x0006f4c8) zooming_pane_g

0xd12d,	// (0x0006d2ce) level_10_zoom

0xd136,	// (0x0006d2d7) level_11_zoom

0xd13f,	// (0x0006d2e0) level_1_zoom

0xd148,	// (0x0006d2e9) level_2_zoom

0xd151,	// (0x0006d2f2) level_3_zoom

0xd15a,	// (0x0006d2fb) level_4_zoom

0xd163,	// (0x0006d304) level_5_zoom

0xd16c,	// (0x0006d30d) level_6_zoom

0xd175,	// (0x0006d316) level_7_zoom

0xd17e,	// (0x0006d31f) level_8_zoom

0xd187,	// (0x0006d328) level_9_zoom

0xd198,	// (0x0006d339) popup_phob_thumbnail_window_g1

0xd1a0,	// (0x0006d341) popup_phob_thumbnail_window_g2

0x0001,

0xf32e,	// (0x0006f4cf) popup_phob_thumbnail_window_g

0x31e1,	// (0x00063382) level_1_location

0x31e9,	// (0x0006338a) level_2_location

0x31f1,	// (0x00063392) level_3_location

0x31f9,	// (0x0006339a) level_4_location

0xc58b,	// (0x0006c72c) level_5_location

0x2869,	// (0x00062a0a) mce_icon_pane_g1

0x2873,	// (0x00062a14) mce_icon_pane_g2

0x0001,

0xf333,	// (0x0006f4d4) mce_icon_pane_g

0xd1a8,	// (0x0006d349) main_mup_pane_g1_ParamLimits

0xd1a8,	// (0x0006d349) main_mup_pane_g1

0xd1a8,	// (0x0006d349) main_mup_pane_g2_ParamLimits

0xd1a8,	// (0x0006d349) main_mup_pane_g2

0xd1a8,	// (0x0006d349) main_mup_pane_g3_ParamLimits

0xd1a8,	// (0x0006d349) main_mup_pane_g3

0xd1a8,	// (0x0006d349) main_mup_pane_g4_ParamLimits

0xd1a8,	// (0x0006d349) main_mup_pane_g4

0xd1a8,	// (0x0006d349) main_mup_pane_g5_ParamLimits

0xd1a8,	// (0x0006d349) main_mup_pane_g5

0xd1a8,	// (0x0006d349) main_mup_pane_g6_ParamLimits

0xd1a8,	// (0x0006d349) main_mup_pane_g6

0xd1a8,	// (0x0006d349) main_mup_pane_g7_ParamLimits

0xd1a8,	// (0x0006d349) main_mup_pane_g7

0xd1a8,	// (0x0006d349) main_mup_pane_g8_ParamLimits

0xd1a8,	// (0x0006d349) main_mup_pane_g8

0xd1a8,	// (0x0006d349) main_mup_pane_g9_ParamLimits

0xd1a8,	// (0x0006d349) main_mup_pane_g9

0xd1a8,	// (0x0006d349) main_mup_pane_g10_ParamLimits

0xd1a8,	// (0x0006d349) main_mup_pane_g10

0xd1a8,	// (0x0006d349) main_mup_pane_g11_ParamLimits

0xd1a8,	// (0x0006d349) main_mup_pane_g11

0xbf04,	// (0x0006c0a5) main_mup_pane_g12_ParamLimits

0xbf04,	// (0x0006c0a5) main_mup_pane_g12

0xd1a8,	// (0x0006d349) main_mup_pane_g13_ParamLimits

0xd1a8,	// (0x0006d349) main_mup_pane_g13

0x000c,

0xf338,	// (0x0006f4d9) main_mup_pane_g_ParamLimits

0xf338,	// (0x0006f4d9) main_mup_pane_g

0xd1b6,	// (0x0006d357) main_mup_pane_t1_ParamLimits

0xd1b6,	// (0x0006d357) main_mup_pane_t1

0xd1b6,	// (0x0006d357) main_mup_pane_t2_ParamLimits

0xd1b6,	// (0x0006d357) main_mup_pane_t2

0xd1b6,	// (0x0006d357) main_mup_pane_t3_ParamLimits

0xd1b6,	// (0x0006d357) main_mup_pane_t3

0xbf4c,	// (0x0006c0ed) main_mup_pane_t4_ParamLimits

0xbf4c,	// (0x0006c0ed) main_mup_pane_t4

0xbf4c,	// (0x0006c0ed) main_mup_pane_t5_ParamLimits

0xbf4c,	// (0x0006c0ed) main_mup_pane_t5

0xbf60,	// (0x0006c101) main_mup_pane_t6_ParamLimits

0xbf60,	// (0x0006c101) main_mup_pane_t6

0x0005,

0xf353,	// (0x0006f4f4) main_mup_pane_t_ParamLimits

0xf353,	// (0x0006f4f4) main_mup_pane_t

0xbef6,	// (0x0006c097) mup_progress_pane_ParamLimits

0xbef6,	// (0x0006c097) mup_progress_pane

0xd1ca,	// (0x0006d36b) mup_visualizer_pane_ParamLimits

0xd1ca,	// (0x0006d36b) mup_visualizer_pane

0xd1ca,	// (0x0006d36b) mup_volume_pane_ParamLimits

0xd1ca,	// (0x0006d36b) mup_volume_pane

0xbf12,	// (0x0006c0b3) mup_visualizer_pane_g1_ParamLimits

0xbf12,	// (0x0006c0b3) mup_visualizer_pane_g1

0xd1d8,	// (0x0006d379) mup_visualizer_pane_g2_ParamLimits

0xd1d8,	// (0x0006d379) mup_visualizer_pane_g2

0xbf04,	// (0x0006c0a5) mup_visualizer_pane_g3_ParamLimits

0xbf04,	// (0x0006c0a5) mup_visualizer_pane_g3

0x0002,

0xf360,	// (0x0006f501) mup_visualizer_pane_g_ParamLimits

0xf360,	// (0x0006f501) mup_visualizer_pane_g

0xbf42,	// (0x0006c0e3) mup_volume_pane_g1

0xbf42,	// (0x0006c0e3) mup_volume_pane_g2

0x0001,

0xf08c,	// (0x0006f22d) mup_volume_pane_g

0xbf42,	// (0x0006c0e3) mup_progress_pane_g1

0xbf42,	// (0x0006c0e3) mup_progress_pane_g2

0xbf42,	// (0x0006c0e3) mup_progress_pane_g3

0x0002,

0xf367,	// (0x0006f508) mup_progress_pane_g

0xbc20,	// (0x0006bdc1) bg_popup_window_pane_cp05

0xd1e6,	// (0x0006d387) heading_pane_cp02_ParamLimits

0xd1e6,	// (0x0006d387) heading_pane_cp02

0xd200,	// (0x0006d3a1) list_popup_blid_pane

0xd208,	// (0x0006d3a9) list_blid_sat_info_pane_ParamLimits

0xd208,	// (0x0006d3a9) list_blid_sat_info_pane

0xd21b,	// (0x0006d3bc) list_blid_sat_info_pane_g1

0xd223,	// (0x0006d3c4) list_blid_sat_info_pane_t1

0x2973,	// (0x00062b14) mup_equalizer_pane_ParamLimits

0x2973,	// (0x00062b14) mup_equalizer_pane

0x298c,	// (0x00062b2d) mup_equalizer_pane_cp1_ParamLimits

0x298c,	// (0x00062b2d) mup_equalizer_pane_cp1

0x29a9,	// (0x00062b4a) mup_equalizer_pane_cp2_ParamLimits

0x29a9,	// (0x00062b4a) mup_equalizer_pane_cp2

0x29c6,	// (0x00062b67) mup_equalizer_pane_cp3_ParamLimits

0x29c6,	// (0x00062b67) mup_equalizer_pane_cp3

0x29e7,	// (0x00062b88) mup_equalizer_pane_cp4_ParamLimits

0x29e7,	// (0x00062b88) mup_equalizer_pane_cp4

0x2a08,	// (0x00062ba9) mup_equalizer_pane_cp5

0x2a1c,	// (0x00062bbd) mup_equalizer_pane_cp6

0x2a30,	// (0x00062bd1) mup_equalizer_pane_cp7

0xe359,	// (0x0006e4fa) bg_popup_call_poc_act_pane_g9

0xe361,	// (0x0006e502) bg_popup_call_poc_act_pane_g10

0xe369,	// (0x0006e50a) bg_popup_call_poc_act_pane_g11

0x000a,

0xbe7b,	// (0x0006c01c) mup_scale_pane

0xbe93,	// (0x0006c034) mup_scale_pane_g1

0xd231,	// (0x0006d3d2) mup_scale_pane_g2

0x0006,

0xf383,	// (0x0006f524) mup_scale_pane_g

0xd255,	// (0x0006d3f6) msg_data_pane

0xd25d,	// (0x0006d3fe) scroll_pane_cp017

0x2a56,	// (0x00062bf7) bg_list_pane_cp04_ParamLimits

0x2a56,	// (0x00062bf7) bg_list_pane_cp04

0xd26d,	// (0x0006d40e) msg_data_pane_g1

0x2a6e,	// (0x00062c0f) msg_data_pane_g2

0x2a76,	// (0x00062c17) msg_data_pane_g3

0x2a7e,	// (0x00062c1f) msg_data_pane_g4

0x2a86,	// (0x00062c27) msg_data_pane_g5

0x2a8e,	// (0x00062c2f) msg_data_pane_g6

0x2a96,	// (0x00062c37) msg_data_pane_g7

0x0006,

0xf392,	// (0x0006f533) msg_data_pane_g

0x2a9e,	// (0x00062c3f) msg_text_pane_ParamLimits

0x2a9e,	// (0x00062c3f) msg_text_pane

0x2ad5,	// (0x00062c76) qrid_highlight_pane_cp011_ParamLimits

0x2ad5,	// (0x00062c76) qrid_highlight_pane_cp011

0xbc20,	// (0x0006bdc1) msg_body_pane

0xbe7b,	// (0x0006c01c) msg_header_pane

0xd289,	// (0x0006d42a) input_focus_pane_cp07

0xd2aa,	// (0x0006d44b) msg_header_pane_t1_ParamLimits

0xd2aa,	// (0x0006d44b) msg_header_pane_t1

0xd2c6,	// (0x0006d467) msg_header_pane_t2_ParamLimits

0xd2c6,	// (0x0006d467) msg_header_pane_t2

0x0001,

0xf3a6,	// (0x0006f547) msg_header_pane_t_ParamLimits

0xf3a6,	// (0x0006f547) msg_header_pane_t

0xd2e6,	// (0x0006d487) msg_body_pane_g1

0xd2ee,	// (0x0006d48f) msg_body_pane_t1_ParamLimits

0xd2ee,	// (0x0006d48f) msg_body_pane_t1

0xd31f,	// (0x0006d4c0) msg_body_pane_t2_ParamLimits

0xd31f,	// (0x0006d4c0) msg_body_pane_t2

0xd331,	// (0x0006d4d2) msg_body_pane_t3_ParamLimits

0xd331,	// (0x0006d4d2) msg_body_pane_t3

0x0002,

0xf3ab,	// (0x0006f54c) msg_body_pane_t_ParamLimits

0xf3ab,	// (0x0006f54c) msg_body_pane_t

0x2b33,	// (0x00062cd4) main_viewer_pane_g1_ParamLimits

0x2b33,	// (0x00062cd4) main_viewer_pane_g1

0x2b41,	// (0x00062ce2) main_viewer_pane_g2_ParamLimits

0x2b41,	// (0x00062ce2) main_viewer_pane_g2

0x2b4f,	// (0x00062cf0) main_viewer_pane_g3_ParamLimits

0x2b4f,	// (0x00062cf0) main_viewer_pane_g3

0x2b5e,	// (0x00062cff) main_viewer_pane_g4_ParamLimits

0x2b5e,	// (0x00062cff) main_viewer_pane_g4

0x9cd7,	// (0x00069e78) main_viewer_pane_g5_ParamLimits

0x9cd7,	// (0x00069e78) main_viewer_pane_g5

0x9cd7,	// (0x00069e78) main_viewer_pane_g7_ParamLimits

0x9cd7,	// (0x00069e78) main_viewer_pane_g7

0xcbcd,	// (0x0006cd6e) main_viewer_pane_g8_ParamLimits

0xcbcd,	// (0x0006cd6e) main_viewer_pane_g8

0x0007,

0xf3bb,	// (0x0006f55c) main_viewer_pane_g_ParamLimits

0xf3bb,	// (0x0006f55c) main_viewer_pane_g

0xd343,	// (0x0006d4e4) viewer_content_pane_ParamLimits

0xd343,	// (0x0006d4e4) viewer_content_pane

0x2b9a,	// (0x00062d3b) main_postcard_pane_g1_ParamLimits

0x2b9a,	// (0x00062d3b) main_postcard_pane_g1

0x2bb0,	// (0x00062d51) main_postcard_pane_g2_ParamLimits

0x2bb0,	// (0x00062d51) main_postcard_pane_g2

0x2bc6,	// (0x00062d67) main_postcard_pane_g3_ParamLimits

0x2bc6,	// (0x00062d67) main_postcard_pane_g3

0x0005,

0xf3cc,	// (0x0006f56d) main_postcard_pane_g_ParamLimits

0xf3cc,	// (0x0006f56d) main_postcard_pane_g

0x2bdd,	// (0x00062d7e) main_postcard_pane_g4

0xe4d5,	// (0x0006e676) smil_status_volume_pane_g2

0x2c20,	// (0x00062dc1) postcard_pane_ParamLimits

0x2c20,	// (0x00062dc1) postcard_pane

0xd351,	// (0x0006d4f2) postcard_pane_g1_ParamLimits

0xd351,	// (0x0006d4f2) postcard_pane_g1

0x2c62,	// (0x00062e03) postcard_pane_g2_ParamLimits

0x2c62,	// (0x00062e03) postcard_pane_g2

0x2c6e,	// (0x00062e0f) postcard_pane_g3_ParamLimits

0x2c6e,	// (0x00062e0f) postcard_pane_g3

0xd35f,	// (0x0006d500) postcard_pane_g4_ParamLimits

0xd35f,	// (0x0006d500) postcard_pane_g4

0x2c7a,	// (0x00062e1b) postcard_pane_g5_ParamLimits

0x2c7a,	// (0x00062e1b) postcard_pane_g5

0x2c8f,	// (0x00062e30) postcard_pane_g6_ParamLimits

0x2c8f,	// (0x00062e30) postcard_pane_g6

0xd351,	// (0x0006d4f2) postcard_pane_g7_ParamLimits

0xd351,	// (0x0006d4f2) postcard_pane_g7

0x0006,

0xf3d9,	// (0x0006f57a) postcard_pane_g_ParamLimits

0xf3d9,	// (0x0006f57a) postcard_pane_g

0x2ca3,	// (0x00062e44) main_mp2_pane_g1_ParamLimits

0x2ca3,	// (0x00062e44) main_mp2_pane_g1

0x2caf,	// (0x00062e50) main_mp2_pane_g2_ParamLimits

0x2caf,	// (0x00062e50) main_mp2_pane_g2

0x2cbb,	// (0x00062e5c) main_mp2_pane_g3_ParamLimits

0x2cbb,	// (0x00062e5c) main_mp2_pane_g3

0x0002,

0xf3e8,	// (0x0006f589) main_mp2_pane_g_ParamLimits

0xf3e8,	// (0x0006f589) main_mp2_pane_g

0x2cc7,	// (0x00062e68) main_mp2_pane_t1_ParamLimits

0x2cc7,	// (0x00062e68) main_mp2_pane_t1

0x2cdc,	// (0x00062e7d) main_mp2_pane_t2_ParamLimits

0x2cdc,	// (0x00062e7d) main_mp2_pane_t2

0x2cee,	// (0x00062e8f) main_mp2_pane_t3_ParamLimits

0x2cee,	// (0x00062e8f) main_mp2_pane_t3

0x0002,

0xf3ef,	// (0x0006f590) main_mp2_pane_t_ParamLimits

0xf3ef,	// (0x0006f590) main_mp2_pane_t

0xbe9d,	// (0x0006c03e) pec_content_pane_ParamLimits

0xbe9d,	// (0x0006c03e) pec_content_pane

0xb7dd,	// (0x0006b97e) scroll_pane_cp015

0xd1ca,	// (0x0006d36b) pec_attribute_pane_ParamLimits

0xd1ca,	// (0x0006d36b) pec_attribute_pane

0xbf04,	// (0x0006c0a5) pec_content_pane_g1_ParamLimits

0xbf04,	// (0x0006c0a5) pec_content_pane_g1

0xd36d,	// (0x0006d50e) pec_content_pane_t1_ParamLimits

0xd36d,	// (0x0006d50e) pec_content_pane_t1

0xd381,	// (0x0006d522) pec_content_pane_t2_ParamLimits

0xd381,	// (0x0006d522) pec_content_pane_t2

0x0001,

0xf3f6,	// (0x0006f597) pec_content_pane_t_ParamLimits

0xf3f6,	// (0x0006f597) pec_content_pane_t

0xbef6,	// (0x0006c097) list_single_graphic_pane_cp01_ParamLimits

0xbef6,	// (0x0006c097) list_single_graphic_pane_cp01

0xbe7b,	// (0x0006c01c) bg_popup_sub_pane_cp04

0xd395,	// (0x0006d536) popup_mup_playback_window_g1

0xd3a1,	// (0x0006d542) popup_mup_playback_window_t1

0xd3b6,	// (0x0006d557) popup_mup_playback_window_t2

0x0001,

0xf3fb,	// (0x0006f59c) popup_mup_playback_window_t

0xd3ed,	// (0x0006d58e) main_image_pane_g1_ParamLimits

0xd3ed,	// (0x0006d58e) main_image_pane_g1

0xd430,	// (0x0006d5d1) scroll_pane_cp018_ParamLimits

0xd430,	// (0x0006d5d1) scroll_pane_cp018

0xd448,	// (0x0006d5e9) scroll_pane_cp016_ParamLimits

0xd448,	// (0x0006d5e9) scroll_pane_cp016

0x2db8,	// (0x00062f59) smil2_image_pane_ParamLimits

0x2db8,	// (0x00062f59) smil2_image_pane

0x2de8,	// (0x00062f89) smil2_root_pane_ParamLimits

0x2de8,	// (0x00062f89) smil2_root_pane

0x2e20,	// (0x00062fc1) smil2_text_pane_ParamLimits

0x2e20,	// (0x00062fc1) smil2_text_pane

0xb7dd,	// (0x0006b97e) bg_list_pane_cp06

0xb7dd,	// (0x0006b97e) grid_radio_pane

0xbc20,	// (0x0006bdc1) bg_popup_window_pane_cp06

0xcc2e,	// (0x0006cdcf) main_fmradio_pane_t1

0xcdb5,	// (0x0006cf56) heading_pane_cp04

0xcc2e,	// (0x0006cdcf) main_fmradio_pane_t2

0xe3b1,	// (0x0006e552) popup_cale_lunar_info_window_g1

0xcc2e,	// (0x0006cdcf) main_fmradio_pane_t3

0xe3b9,	// (0x0006e55a) popup_cale_lunar_info_window_g2

0xcc2e,	// (0x0006cdcf) main_fmradio_pane_t4

0x0001,

0xcc2e,	// (0x0006cdcf) main_fmradio_pane_t5

0x0004,

0x009f,	// (0x00060240) popup_cale_lunar_info_window_g

0xf25b,	// (0x0006f3fc) main_fmradio_pane_t

0xb7dd,	// (0x0006b97e) wait_bar_pane_cp03

0xbef6,	// (0x0006c097) cell_fmradio_pane_ParamLimits

0xbef6,	// (0x0006c097) cell_fmradio_pane

0xbf04,	// (0x0006c0a5) cell_fmradio_pane_g1_ParamLimits

0xbf04,	// (0x0006c0a5) cell_fmradio_pane_g1

0xb7dd,	// (0x0006b97e) grid_highlight_pane_cp011

0xd47c,	// (0x0006d61d) poc_content_pane_ParamLimits

0xd47c,	// (0x0006d61d) poc_content_pane

0xd48e,	// (0x0006d62f) scroll_pane_cp019

0x2ea0,	// (0x00063041) popup_call_poc_act_window_ParamLimits

0x2ea0,	// (0x00063041) popup_call_poc_act_window

0x2ec4,	// (0x00063065) popup_call_poc_inact_window_ParamLimits

0x2ec4,	// (0x00063065) popup_call_poc_inact_window

0x0063,	// (0x00060204) bg_popup_call_poc_act_pane_g

0xe371,	// (0x0006e512) bg_popup_call_poc_inact_pane_g1

0xe379,	// (0x0006e51a) bg_popup_call_poc_inact_pane_g2

0xd496,	// (0x0006d637) popup_call_poc_act_window_g2

0xe381,	// (0x0006e522) bg_popup_call_poc_inact_pane_g3

0xe301,	// (0x0006e4a2) bg_popup_call_poc_inact_pane_g4

0xe389,	// (0x0006e52a) bg_popup_call_poc_inact_pane_g5

0xd49e,	// (0x0006d63f) popup_call_poc_act_window_t1_ParamLimits

0xd49e,	// (0x0006d63f) popup_call_poc_act_window_t1

0xd4c6,	// (0x0006d667) popup_call_poc_act_window_t2_ParamLimits

0xd4c6,	// (0x0006d667) popup_call_poc_act_window_t2

0xd4ee,	// (0x0006d68f) popup_call_poc_act_window_t3_ParamLimits

0xd4ee,	// (0x0006d68f) popup_call_poc_act_window_t3

0xd516,	// (0x0006d6b7) popup_call_poc_act_window_t4_ParamLimits

0xd516,	// (0x0006d6b7) popup_call_poc_act_window_t4

0x0003,

0xf410,	// (0x0006f5b1) popup_call_poc_act_window_t_ParamLimits

0xf410,	// (0x0006f5b1) popup_call_poc_act_window_t

0xe391,	// (0x0006e532) bg_popup_call_poc_inact_pane_g6

0xe399,	// (0x0006e53a) bg_popup_call_poc_inact_pane_g7

0xe3a1,	// (0x0006e542) bg_popup_call_poc_inact_pane_g8

0xd528,	// (0x0006d6c9) popup_call_poc_inact_window_g2

0xe3a9,	// (0x0006e54a) bg_popup_call_poc_inact_pane_g9

0x0008,

0x007a,	// (0x0006021b) bg_popup_call_poc_inact_pane_g

0xd530,	// (0x0006d6d1) popup_call_poc_inact_window_t1_ParamLimits

0xd530,	// (0x0006d6d1) popup_call_poc_inact_window_t1

0xd545,	// (0x0006d6e6) popup_call_poc_inact_window_t2_ParamLimits

0xd545,	// (0x0006d6e6) popup_call_poc_inact_window_t2

0xd55a,	// (0x0006d6fb) popup_call_poc_inact_window_t3_ParamLimits

0xd55a,	// (0x0006d6fb) popup_call_poc_inact_window_t3

0x0002,

0xf419,	// (0x0006f5ba) popup_call_poc_inact_window_t_ParamLimits

0xf419,	// (0x0006f5ba) popup_call_poc_inact_window_t

0xe44d,	// (0x0006e5ee) context_pane_ParamLimits

0x36ab,	// (0x0006384c) signal_pane_ParamLimits

0xc58b,	// (0x0006c72c) main_call2_pane

0x9d22,	// (0x00069ec3) popup_phob_thumbnail2_window_ParamLimits

0x9d22,	// (0x00069ec3) popup_phob_thumbnail2_window

0x9cbf,	// (0x00069e60) aid_hotspot_pointer_arrow_pane

0x9cc7,	// (0x00069e68) aid_hotspot_pointer_hand_pane

0x31ab,	// (0x0006334c) phob_pre_status_pane_g5

0xbe9d,	// (0x0006c03e) cams_zoom_pane_ParamLimits

0xbe9d,	// (0x0006c03e) image_vga_pane_ParamLimits

0xbf04,	// (0x0006c0a5) main_camera_pane_g1_ParamLimits

0xbf04,	// (0x0006c0a5) main_camera_pane_g2_ParamLimits

0xbf04,	// (0x0006c0a5) main_camera_pane_g3_ParamLimits

0xbf04,	// (0x0006c0a5) main_camera_pane_g4_ParamLimits

0xbf04,	// (0x0006c0a5) main_camera_pane_g5_ParamLimits

0xbf04,	// (0x0006c0a5) main_camera_pane_g6_ParamLimits

0xbf04,	// (0x0006c0a5) main_camera_pane_g7_ParamLimits

0xf15d,	// (0x0006f2fe) main_camera_pane_g_ParamLimits

0xbf4c,	// (0x0006c0ed) main_camera_pane_t1_ParamLimits

0xbf4c,	// (0x0006c0ed) main_camera_pane_t2_ParamLimits

0xf16e,	// (0x0006f30f) main_camera_pane_t_ParamLimits

0xbe7b,	// (0x0006c01c) bg_popup_preview_window_pane_cp01_ParamLimits

0xbe7b,	// (0x0006c01c) bg_popup_preview_window_pane_cp01

0xd56f,	// (0x0006d710) popup_phob_thumbnail2_window_g1_ParamLimits

0xd56f,	// (0x0006d710) popup_phob_thumbnail2_window_g1

0xbc20,	// (0x0006bdc1) call2_cli_visual_pane

0x2ef8,	// (0x00063099) popup_call2_audio_conf_window_ParamLimits

0x2ef8,	// (0x00063099) popup_call2_audio_conf_window

0x2f18,	// (0x000630b9) popup_call2_audio_first_window_ParamLimits

0x2f18,	// (0x000630b9) popup_call2_audio_first_window

0x2fae,	// (0x0006314f) popup_call2_audio_in_window_ParamLimits

0x2fae,	// (0x0006314f) popup_call2_audio_in_window

0x2ff6,	// (0x00063197) popup_call2_audio_out_window_ParamLimits

0x2ff6,	// (0x00063197) popup_call2_audio_out_window

0x3060,	// (0x00063201) popup_call2_audio_second_window_ParamLimits

0x3060,	// (0x00063201) popup_call2_audio_second_window

0x30c6,	// (0x00063267) popup_call2_audio_wait_window_ParamLimits

0x30c6,	// (0x00063267) popup_call2_audio_wait_window

0xbc20,	// (0x0006bdc1) bg_popup_call2_act_pane_cp03

0xbe5d,	// (0x0006bffe) list_conf_pane_cp

0xd57b,	// (0x0006d71c) popup_call2_audio_conf_window_t1

0xd589,	// (0x0006d72a) list_single_graphic_popup_conf2_pane_ParamLimits

0xd589,	// (0x0006d72a) list_single_graphic_popup_conf2_pane

0xce18,	// (0x0006cfb9) list_highlight_pane_cp04

0xd59c,	// (0x0006d73d) list_single_graphic_popup_conf2_pane_g1

0xce29,	// (0x0006cfca) list_single_graphic_popup_conf2_pane_g2

0x0001,

0xf420,	// (0x0006f5c1) list_single_graphic_popup_conf2_pane_g

0xd5a6,	// (0x0006d747) list_single_graphic_popup_conf2_pane_t1

0xd5b4,	// (0x0006d755) bg_popup_call2_act_pane_cp01_ParamLimits

0xd5b4,	// (0x0006d755) bg_popup_call2_act_pane_cp01

0xd63e,	// (0x0006d7df) call_type_pane_cp05_ParamLimits

0xd63e,	// (0x0006d7df) call_type_pane_cp05

0xd692,	// (0x0006d833) popup_call2_audio_second_window_g1_ParamLimits

0xd692,	// (0x0006d833) popup_call2_audio_second_window_g1

0xd6e6,	// (0x0006d887) popup_call2_audio_second_window_g2_ParamLimits

0xd6e6,	// (0x0006d887) popup_call2_audio_second_window_g2

0x0002,

0xf425,	// (0x0006f5c6) popup_call2_audio_second_window_g_ParamLimits

0xf425,	// (0x0006f5c6) popup_call2_audio_second_window_g

0xd74b,	// (0x0006d8ec) popup_call2_audio_second_window_t1_ParamLimits

0xd74b,	// (0x0006d8ec) popup_call2_audio_second_window_t1

0xd806,	// (0x0006d9a7) popup_call2_audio_second_window_t2_ParamLimits

0xd806,	// (0x0006d9a7) popup_call2_audio_second_window_t2

0xd859,	// (0x0006d9fa) popup_call2_audio_second_window_t3_ParamLimits

0xd859,	// (0x0006d9fa) popup_call2_audio_second_window_t3

0x0003,

0xf42c,	// (0x0006f5cd) popup_call2_audio_second_window_t_ParamLimits

0xf42c,	// (0x0006f5cd) popup_call2_audio_second_window_t

0xbc20,	// (0x0006bdc1) bg_popup_call2_in_pane_cp02

0xbc2a,	// (0x0006bdcb) call_type_pane_cp04

0x3100,	// (0x000632a1) popup_call2_audio_wait_window_g1

0x3108,	// (0x000632a9) popup_call2_audio_wait_window_g2

0x0001,

0xf435,	// (0x0006f5d6) popup_call2_audio_wait_window_g

0xbc42,	// (0x0006bde3) popup_call2_audio_wait_window_t3

0xd94c,	// (0x0006daed) bg_popup_call2_act_pane_ParamLimits

0xd94c,	// (0x0006daed) bg_popup_call2_act_pane

0xda0c,	// (0x0006dbad) call_type_pane_cp03_ParamLimits

0xda0c,	// (0x0006dbad) call_type_pane_cp03

0xda70,	// (0x0006dc11) popup_call2_audio_first_window_g1_ParamLimits

0xda70,	// (0x0006dc11) popup_call2_audio_first_window_g1

0xdae0,	// (0x0006dc81) popup_call2_audio_first_window_g2_ParamLimits

0xdae0,	// (0x0006dc81) popup_call2_audio_first_window_g2

0xdb44,	// (0x0006dce5) popup_call2_audio_first_window_g3_ParamLimits

0xdb44,	// (0x0006dce5) popup_call2_audio_first_window_g3

0x0004,

0xf43a,	// (0x0006f5db) popup_call2_audio_first_window_g_ParamLimits

0xf43a,	// (0x0006f5db) popup_call2_audio_first_window_g

0xdbcc,	// (0x0006dd6d) popup_call2_audio_first_window_t1_ParamLimits

0xdbcc,	// (0x0006dd6d) popup_call2_audio_first_window_t1

0xdccf,	// (0x0006de70) popup_call2_audio_first_window_t4_ParamLimits

0xdccf,	// (0x0006de70) popup_call2_audio_first_window_t4

0xddb2,	// (0x0006df53) popup_call2_audio_first_window_t5_ParamLimits

0xddb2,	// (0x0006df53) popup_call2_audio_first_window_t5

0x0003,

0x0014,	// (0x000601b5) popup_call2_audio_first_window_t_ParamLimits

0x0014,	// (0x000601b5) popup_call2_audio_first_window_t

0xbe73,	// (0x0006c014) bg_popup_call2_act_pane_g1

0xe3c1,	// (0x0006e562) popup_cale_lunar_info_window_t1

0xe3cf,	// (0x0006e570) popup_cale_lunar_info_window_t2

0xe3dd,	// (0x0006e57e) popup_cale_lunar_info_window_t3

0xbc20,	// (0x0006bdc1) bg_popup_call2_bubble_pane

0xdeb3,	// (0x0006e054) bg_popup_call2_in_pane_cp01_ParamLimits

0xdeb3,	// (0x0006e054) bg_popup_call2_in_pane_cp01

0xb8d6,	// (0x0006ba77) call_type_pane_cp02

0x3110,	// (0x000632b1) popup_call2_audio_out_window_g1_ParamLimits

0x3110,	// (0x000632b1) popup_call2_audio_out_window_g1

0xdefb,	// (0x0006e09c) popup_call2_audio_out_window_g2_ParamLimits

0xdefb,	// (0x0006e09c) popup_call2_audio_out_window_g2

0x313c,	// (0x000632dd) popup_call2_audio_out_window_g3_ParamLimits

0x313c,	// (0x000632dd) popup_call2_audio_out_window_g3

0x0003,

0xf445,	// (0x0006f5e6) popup_call2_audio_out_window_g_ParamLimits

0xf445,	// (0x0006f5e6) popup_call2_audio_out_window_g

0xdf32,	// (0x0006e0d3) popup_call2_audio_out_window_t1_ParamLimits

0xdf32,	// (0x0006e0d3) popup_call2_audio_out_window_t1

0xdf91,	// (0x0006e132) popup_call2_audio_out_window_t2_ParamLimits

0xdf91,	// (0x0006e132) popup_call2_audio_out_window_t2

0xdfe5,	// (0x0006e186) popup_call2_audio_out_window_t3_ParamLimits

0xdfe5,	// (0x0006e186) popup_call2_audio_out_window_t3

0xdffb,	// (0x0006e19c) popup_call2_audio_out_window_t4_ParamLimits

0xdffb,	// (0x0006e19c) popup_call2_audio_out_window_t4

0xe011,	// (0x0006e1b2) popup_call2_audio_out_window_t5_ParamLimits

0xe011,	// (0x0006e1b2) popup_call2_audio_out_window_t5

0x0005,

0x0026,	// (0x000601c7) popup_call2_audio_out_window_t_ParamLimits

0x0026,	// (0x000601c7) popup_call2_audio_out_window_t

0xe075,	// (0x0006e216) bg_popup_call2_in_pane_ParamLimits

0xe075,	// (0x0006e216) bg_popup_call2_in_pane

0xe0d1,	// (0x0006e272) popup_call2_audio_in_window_g1_ParamLimits

0xe0d1,	// (0x0006e272) popup_call2_audio_in_window_g1

0xe109,	// (0x0006e2aa) popup_call2_audio_in_window_g2_ParamLimits

0xe109,	// (0x0006e2aa) popup_call2_audio_in_window_g2

0xe141,	// (0x0006e2e2) popup_call2_audio_in_window_g3_ParamLimits

0xe141,	// (0x0006e2e2) popup_call2_audio_in_window_g3

0x0003,

0x0033,	// (0x000601d4) popup_call2_audio_in_window_g_ParamLimits

0x0033,	// (0x000601d4) popup_call2_audio_in_window_g

0xe199,	// (0x0006e33a) popup_call2_audio_in_window_t1_ParamLimits

0xe199,	// (0x0006e33a) popup_call2_audio_in_window_t1

0xe219,	// (0x0006e3ba) popup_call2_audio_in_window_t2_ParamLimits

0xe219,	// (0x0006e3ba) popup_call2_audio_in_window_t2

0xe299,	// (0x0006e43a) popup_call2_audio_in_window_t3_ParamLimits

0xe299,	// (0x0006e43a) popup_call2_audio_in_window_t3

0xe2b3,	// (0x0006e454) popup_call2_audio_in_window_t4_ParamLimits

0xe2b3,	// (0x0006e454) popup_call2_audio_in_window_t4

0xe2c5,	// (0x0006e466) popup_call2_audio_in_window_t5_ParamLimits

0xe2c5,	// (0x0006e466) popup_call2_audio_in_window_t5

0xe2d7,	// (0x0006e478) popup_call2_audio_in_window_t6_ParamLimits

0xe2d7,	// (0x0006e478) popup_call2_audio_in_window_t6

0x0005,

0x003c,	// (0x000601dd) popup_call2_audio_in_window_t_ParamLimits

0x003c,	// (0x000601dd) popup_call2_audio_in_window_t

0xbe73,	// (0x0006c014) bg_popup_call2_in_pane_g1

0xe3eb,	// (0x0006e58c) popup_cale_lunar_info_window_t4

0x0003,

0x00a4,	// (0x00060245) popup_cale_lunar_info_window_t

0xbe7b,	// (0x0006c01c) bg_popup_call2_rect_pane_ParamLimits

0xbe7b,	// (0x0006c01c) bg_popup_call2_rect_pane

0xbc20,	// (0x0006bdc1) call2_cli_visual_graphic_pane

0xbc20,	// (0x0006bdc1) call2_cli_visual_text_pane

0x9d49,	// (0x00069eea) smil_status_volume_pane_g3

0x0002,

0xbe93,	// (0x0006c034) call2_cli_visual_graphic_pane_g1

0xbe93,	// (0x0006c034) call2_cli_visual_graphic_pane_g2

0xbe93,	// (0x0006c034) call2_cli_visual_graphic_pane_g3

0x0002,

0x0049,	// (0x000601ea) call2_cli_visual_graphic_pane_g

0xc49b,	// (0x0006c63c) bg_popup_call2_rect_pane_g1

0xc493,	// (0x0006c634) bg_popup_call2_rect_pane_g2

0xc48b,	// (0x0006c62c) bg_popup_call2_rect_pane_g3

0xc4ab,	// (0x0006c64c) bg_popup_call2_rect_pane_g4

0xc4a3,	// (0x0006c644) bg_popup_call2_rect_pane_g5

0xc4b3,	// (0x0006c654) bg_popup_call2_rect_pane_g6

0xc4bb,	// (0x0006c65c) bg_popup_call2_rect_pane_g7

0xc4cb,	// (0x0006c66c) bg_popup_call2_rect_pane_g8

0xc4c3,	// (0x0006c664) bg_popup_call2_rect_pane_g9

0x0008,

0xf20a,	// (0x0006f3ab) bg_popup_call2_rect_pane_g

0xe2e9,	// (0x0006e48a) bg_popup_call2_bubble_pane_g1

0xe2f1,	// (0x0006e492) bg_popup_call2_bubble_pane_g2

0xe2f9,	// (0x0006e49a) bg_popup_call2_bubble_pane_g3

0xe301,	// (0x0006e4a2) bg_popup_call2_bubble_pane_g4

0xe309,	// (0x0006e4aa) bg_popup_call2_bubble_pane_g5

0xe311,	// (0x0006e4b2) bg_popup_call2_bubble_pane_g6

0xe319,	// (0x0006e4ba) bg_popup_call2_bubble_pane_g7

0xe321,	// (0x0006e4c2) bg_popup_call2_bubble_pane_g8

0xe329,	// (0x0006e4ca) bg_popup_call2_bubble_pane_g9

0x0008,

0x0050,	// (0x000601f1) bg_popup_call2_bubble_pane_g

0x0fbc,	// (0x0006115d) aid_cale_week_size_cell_pane

0x156c,	// (0x0006170d) aid_cams_cif_uncrop_pane_ParamLimits

0x156c,	// (0x0006170d) aid_cams_cif_uncrop_pane

0xbe9d,	// (0x0006c03e) aid_cams_size_cell_ParamLimits

0xbe9d,	// (0x0006c03e) aid_cams_size_cell

0xbe9d,	// (0x0006c03e) grid_cams_pane_ParamLimits

0xbe9d,	// (0x0006c03e) linegrid_cams_pane_ParamLimits

0x178a,	// (0x0006192b) call_video_pane_t1

0x17a8,	// (0x00061949) call_video_pane_t2

0x0001,

0xf1b1,	// (0x0006f352) call_video_pane_t

0x1bce,	// (0x00061d6f) aid_cale_month_size_cell_pane_ParamLimits

0x1bce,	// (0x00061d6f) aid_cale_month_size_cell_pane

0xf481,	// (0x0006f622) smil_status_volume_pane_g

0x9d56,	// (0x00069ef7) volume_smil_pane_ParamLimits

0x9b2e,	// (0x00069ccf) aid_popup2_width_pane

0x0f13,	// (0x000610b4) cell_qdial_pane_g4_ParamLimits

0x0f13,	// (0x000610b4) cell_qdial_pane_g4

0x27a2,	// (0x00062943) aid_blid_cardinal_pane_ParamLimits

0x27ae,	// (0x0006294f) aid_blid_destination_pane_ParamLimits

0x27ae,	// (0x0006294f) aid_blid_destination_pane

0xbe7b,	// (0x0006c01c) bg_popup_call_poc_act_pane_ParamLimits

0xbe7b,	// (0x0006c01c) bg_popup_call_poc_act_pane

0xbe7b,	// (0x0006c01c) bg_popup_call_poc_inact_pane_ParamLimits

0xbe7b,	// (0x0006c01c) bg_popup_call_poc_inact_pane

0xe331,	// (0x0006e4d2) bg_popup_call_poc_act_pane_g1

0xe339,	// (0x0006e4da) bg_popup_call_poc_act_pane_g2

0xe341,	// (0x0006e4e2) bg_popup_call_poc_act_pane_g3

0xe301,	// (0x0006e4a2) bg_popup_call_poc_act_pane_g4

0xe309,	// (0x0006e4aa) bg_popup_call_poc_act_pane_g5

0xe349,	// (0x0006e4ea) bg_popup_call_poc_act_pane_g6

0xe319,	// (0x0006e4ba) bg_popup_call_poc_act_pane_g7

0xe351,	// (0x0006e4f2) bg_popup_call_poc_act_pane_g8

0xbc20,	// (0x0006bdc1) main_usb_pane

0x9cfd,	// (0x00069e9e) popup_cale_lunar_info_window

0x1a74,	// (0x00061c15) im_reading_pane_t1_ParamLimits

0xc64c,	// (0x0006c7ed) list_im_pane_ParamLimits

0xc65d,	// (0x0006c7fe) scroll_pane_cp07_ParamLimits

0xbc20,	// (0x0006bdc1) grid_highlight_pane_cp012

0xbe7b,	// (0x0006c01c) mup_scale_pane_ParamLimits

0xbf04,	// (0x0006c0a5) main_usb_pane_g1_ParamLimits

0xbf04,	// (0x0006c0a5) main_usb_pane_g1

0xbf04,	// (0x0006c0a5) main_usb_pane_g2_ParamLimits

0xbf04,	// (0x0006c0a5) main_usb_pane_g2

0x0001,

0xf199,	// (0x0006f33a) main_usb_pane_g_ParamLimits

0xf199,	// (0x0006f33a) main_usb_pane_g

0xbf4c,	// (0x0006c0ed) main_usb_pane_t1_ParamLimits

0xbf4c,	// (0x0006c0ed) main_usb_pane_t1

0xbf4c,	// (0x0006c0ed) main_usb_pane_t2_ParamLimits

0xbf4c,	// (0x0006c0ed) main_usb_pane_t2

0xbf4c,	// (0x0006c0ed) main_usb_pane_t3_ParamLimits

0xbf4c,	// (0x0006c0ed) main_usb_pane_t3

0xbf4c,	// (0x0006c0ed) main_usb_pane_t4_ParamLimits

0xbf4c,	// (0x0006c0ed) main_usb_pane_t4

0xbf4c,	// (0x0006c0ed) main_usb_pane_t5_ParamLimits

0xbf4c,	// (0x0006c0ed) main_usb_pane_t5

0xbf4c,	// (0x0006c0ed) main_usb_pane_t6_ParamLimits

0xbf4c,	// (0x0006c0ed) main_usb_pane_t6

0x0005,

0xf44e,	// (0x0006f5ef) main_usb_pane_t_ParamLimits

0x2751,	// (0x000628f2) aid_text_placing

0x275a,	// (0x000628fb) main_location2_pane_t1_ParamLimits

0x276c,	// (0x0006290d) main_location2_pane_t2_ParamLimits

0x277e,	// (0x0006291f) main_location2_pane_t3_ParamLimits

0x2790,	// (0x00062931) main_location2_pane_t4_ParamLimits

0x2790,	// (0x00062931) main_location2_pane_t4

0xf2ed,	// (0x0006f48e) main_location2_pane_t_ParamLimits

0xbeb7,	// (0x0006c058) find_pinb_pane_g2_ParamLimits

0xbeb7,	// (0x0006c058) find_pinb_pane_g2

0x0001,

0xf072,	// (0x0006f213) find_pinb_pane_g_ParamLimits

0xf072,	// (0x0006f213) find_pinb_pane_g

0xbec3,	// (0x0006c064) find_pinb_pane_t1_ParamLimits

0xbed5,	// (0x0006c076) find_pinb_pane_t2_ParamLimits

0xf077,	// (0x0006f218) find_pinb_pane_t_ParamLimits

0xbc20,	// (0x0006bdc1) main_call3_pane

0x20b5,	// (0x00062256) cale_month_day_heading_pane_t1_ParamLimits

0x20f7,	// (0x00062298) cale_month_day_heading_pane_t2_ParamLimits

0x212c,	// (0x000622cd) cale_month_day_heading_pane_t3_ParamLimits

0x2161,	// (0x00062302) cale_month_day_heading_pane_t4_ParamLimits

0x219e,	// (0x0006233f) cale_month_day_heading_pane_t5_ParamLimits

0x21e3,	// (0x00062384) cale_month_day_heading_pane_t6_ParamLimits

0x2228,	// (0x000623c9) cale_month_day_heading_pane_t7_ParamLimits

0xf1e9,	// (0x0006f38a) cale_month_day_heading_pane_t_ParamLimits

0xca55,	// (0x0006cbf6) smil_status_volume_pane

0x2c3e,	// (0x00062ddf) postcard_address_pane_ParamLimits

0x2c3e,	// (0x00062ddf) postcard_address_pane

0x2c50,	// (0x00062df1) postcard_message_pane_ParamLimits

0x2c50,	// (0x00062df1) postcard_message_pane

0x3168,	// (0x00063309) call2_cli_visual_pane_t1_ParamLimits

0x3168,	// (0x00063309) call2_cli_visual_pane_t1

0xe500,	// (0x0006e6a1) postcard_message_pane_t1_ParamLimits

0xe500,	// (0x0006e6a1) postcard_message_pane_t1

0xe4e8,	// (0x0006e689) postcard_address_pane_t1_ParamLimits

0xe4e8,	// (0x0006e689) postcard_address_pane_t1

0x385e,	// (0x000639ff) popup_call3_audio_in_window_ParamLimits

0x385e,	// (0x000639ff) popup_call3_audio_in_window

0x36e9,	// (0x0006388a) bg_popup_call3_in_pane_ParamLimits

0x36e9,	// (0x0006388a) bg_popup_call3_in_pane

0x375f,	// (0x00063900) popup_call3_audio_in_window_g1_ParamLimits

0x375f,	// (0x00063900) popup_call3_audio_in_window_g1

0x377f,	// (0x00063920) popup_call3_audio_in_window_g2_ParamLimits

0x377f,	// (0x00063920) popup_call3_audio_in_window_g2

0x379f,	// (0x00063940) popup_call3_audio_in_window_g3_ParamLimits

0x379f,	// (0x00063940) popup_call3_audio_in_window_g3

0x0003,

0xf488,	// (0x0006f629) popup_call3_audio_in_window_g_ParamLimits

0xf488,	// (0x0006f629) popup_call3_audio_in_window_g

0x37d0,	// (0x00063971) popup_call3_audio_in_window_t1_ParamLimits

0x37d0,	// (0x00063971) popup_call3_audio_in_window_t1

0x380e,	// (0x000639af) popup_call3_audio_in_window_t2_ParamLimits

0x380e,	// (0x000639af) popup_call3_audio_in_window_t2

0x384c,	// (0x000639ed) popup_call3_audio_in_window_t3_ParamLimits

0x384c,	// (0x000639ed) popup_call3_audio_in_window_t3

0x0002,

0xf491,	// (0x0006f632) popup_call3_audio_in_window_t_ParamLimits

0xf491,	// (0x0006f632) popup_call3_audio_in_window_t

0xc58b,	// (0x0006c72c) bg_popup_call3_rect_pane

0xc49b,	// (0x0006c63c) bg_popup_call3_rect_pane_g1

0xc493,	// (0x0006c634) bg_popup_call3_rect_pane_g2

0xc48b,	// (0x0006c62c) bg_popup_call3_rect_pane_g3

0xc4ab,	// (0x0006c64c) bg_popup_call3_rect_pane_g4

0xc4a3,	// (0x0006c644) bg_popup_call3_rect_pane_g5

0xc4b3,	// (0x0006c654) bg_popup_call3_rect_pane_g6

0xc4bb,	// (0x0006c65c) bg_popup_call3_rect_pane_g7

0xb7dd,	// (0x0006b97e) mup_visualizer_osc_pane

0xb7dd,	// (0x0006b97e) mup_visualizer_spec_pane

0x3719,	// (0x000638ba) call3_video_qcif_pane_ParamLimits

0x3719,	// (0x000638ba) call3_video_qcif_pane

0x372c,	// (0x000638cd) call3_video_qcif_uncrop_pane_ParamLimits

0x372c,	// (0x000638cd) call3_video_qcif_uncrop_pane

0x373a,	// (0x000638db) call3_video_subqcif_pane_ParamLimits

0x373a,	// (0x000638db) call3_video_subqcif_pane

0x374e,	// (0x000638ef) call3_video_subqcif_uncrop_pane_ParamLimits

0x374e,	// (0x000638ef) call3_video_subqcif_uncrop_pane

0x37bf,	// (0x00063960) popup_call3_audio_in_window_g4_ParamLimits

0x37bf,	// (0x00063960) popup_call3_audio_in_window_g4

0xb7dd,	// (0x0006b97e) mup_spec_half_pane

0xb7dd,	// (0x0006b97e) mup_spec_half_pane_cp

0xb7dd,	// (0x0006b97e) mup_osc_middle_pane

0xbf42,	// (0x0006c0e3) mup_visualizer_osc_pane_g1

0xe49b,	// (0x0006e63c) mup_spec_bar_pane_ParamLimits

0xe49b,	// (0x0006e63c) mup_spec_bar_pane

0xbf42,	// (0x0006c0e3) mup_spec_bar_pane_g1

0xbf42,	// (0x0006c0e3) mup_spec_bar_pane_g2

0x0001,

0xf08c,	// (0x0006f22d) mup_spec_bar_pane_g

0x0fbc,	// (0x0006115d) aid_cale_week_size_cell_pane_ParamLimits

0x0fd6,	// (0x00061177) bg_cale_heading_pane_ParamLimits

0xc4ed,	// (0x0006c68e) bg_cale_pane_cp01_ParamLimits

0x0fee,	// (0x0006118f) cale_week_corner_pane_ParamLimits

0x100d,	// (0x000611ae) cale_week_day_heading_pane_ParamLimits

0x102a,	// (0x000611cb) cale_week_scroll_pane_g1_ParamLimits

0x103d,	// (0x000611de) cale_week_scroll_pane_g2_ParamLimits

0x1055,	// (0x000611f6) cale_week_scroll_pane_g3_ParamLimits

0x106d,	// (0x0006120e) cale_week_scroll_pane_g4_ParamLimits

0x1085,	// (0x00061226) cale_week_scroll_pane_g5_ParamLimits

0x10a5,	// (0x00061246) cale_week_scroll_pane_g6_ParamLimits

0x10c5,	// (0x00061266) cale_week_scroll_pane_g7_ParamLimits

0x10e5,	// (0x00061286) cale_week_scroll_pane_g8_ParamLimits

0x1109,	// (0x000612aa) cale_week_scroll_pane_g9_ParamLimits

0x1121,	// (0x000612c2) cale_week_scroll_pane_g10_ParamLimits

0x1139,	// (0x000612da) cale_week_scroll_pane_g11_ParamLimits

0x1151,	// (0x000612f2) cale_week_scroll_pane_g12_ParamLimits

0x1169,	// (0x0006130a) cale_week_scroll_pane_g13_ParamLimits

0x1169,	// (0x0006130a) cale_week_scroll_pane_g14_ParamLimits

0x1169,	// (0x0006130a) cale_week_scroll_pane_g15_ParamLimits

0xf103,	// (0x0006f2a4) cale_week_scroll_pane_g_ParamLimits

0x11a5,	// (0x00061346) cale_week_time_pane_ParamLimits

0x11c9,	// (0x0006136a) grid_cale_week_pane_ParamLimits

0xc50a,	// (0x0006c6ab) listscroll_cale_week_pane_t1

0xc51c,	// (0x0006c6bd) scroll_pane_cp08_ParamLimits

0x1c2e,	// (0x00061dcf) cale_month_corner_pane_ParamLimits

0xca2b,	// (0x0006cbcc) cale_month_pane_t1

0x2048,	// (0x000621e9) cale_month_week_pane_ParamLimits

0x25a6,	// (0x00062747) popup_call_status_window_g1_ParamLimits

0x25ba,	// (0x0006275b) popup_call_status_window_g2_ParamLimits

0x25ce,	// (0x0006276f) popup_call_status_window_g3_ParamLimits

0xf274,	// (0x0006f415) popup_call_status_window_g_ParamLimits

0xcda5,	// (0x0006cf46) aid_call2_pane

0x2aeb,	// (0x00062c8c) msg_header_pane_g1

0x2c3e,	// (0x00062ddf) postcard_address2_pane_ParamLimits

0x2c3e,	// (0x00062ddf) postcard_address2_pane

0x2c50,	// (0x00062df1) postcard_message2_pane_ParamLimits

0x2c50,	// (0x00062df1) postcard_message2_pane

0x36b9,	// (0x0006385a) message2_row_pane_ParamLimits

0x36b9,	// (0x0006385a) message2_row_pane

0x36d6,	// (0x00063877) address2_row_pane_ParamLimits

0x36d6,	// (0x00063877) address2_row_pane

0xe468,	// (0x0006e609) postcard_message2_row_pane_g1

0xe470,	// (0x0006e611) postcard_message2_row_pane_t1

0xe468,	// (0x0006e609) address2_row_pane_g1

0xe470,	// (0x0006e611) address2_row_pane_t1

0x1503,	// (0x000616a4) aid_size_cell_vorec

0xbc20,	// (0x0006bdc1) main_rss_pane

0xe47e,	// (0x0006e61f) rss_list_single_pane_ParamLimits

0xe47e,	// (0x0006e61f) rss_list_single_pane

0xe48c,	// (0x0006e62d) rss_list_single_pane_t1

0xe48c,	// (0x0006e62d) rss_list_single_pane_t2

0x0001,

0x00e3,	// (0x00060284) rss_list_single_pane_t

0xbc20,	// (0x0006bdc1) main_camera2_pane

0xbc20,	// (0x0006bdc1) main_video2_pane

0x9d6b,	// (0x00069f0c) cams_zoom_pane_cp2_ParamLimits

0x9d6b,	// (0x00069f0c) cams_zoom_pane_cp2

0x9d6b,	// (0x00069f0c) image2_vga_pane_ParamLimits

0x9d6b,	// (0x00069f0c) image2_vga_pane

0x9d79,	// (0x00069f1a) main_camera2_pane_g1_ParamLimits

0x9d79,	// (0x00069f1a) main_camera2_pane_g1

0x9d79,	// (0x00069f1a) main_camera2_pane_g2_ParamLimits

0x9d79,	// (0x00069f1a) main_camera2_pane_g2

0x9d79,	// (0x00069f1a) main_camera2_pane_g3_ParamLimits

0x9d79,	// (0x00069f1a) main_camera2_pane_g3

0x9d79,	// (0x00069f1a) main_camera2_pane_g4_ParamLimits

0x9d79,	// (0x00069f1a) main_camera2_pane_g4

0x9d79,	// (0x00069f1a) main_camera2_pane_g5_ParamLimits

0x9d79,	// (0x00069f1a) main_camera2_pane_g5

0x9d79,	// (0x00069f1a) main_camera2_pane_g6_ParamLimits

0x9d79,	// (0x00069f1a) main_camera2_pane_g6

0x9d79,	// (0x00069f1a) main_camera2_pane_g7_ParamLimits

0x9d79,	// (0x00069f1a) main_camera2_pane_g7

0x9d79,	// (0x00069f1a) main_camera2_pane_g8_ParamLimits

0x9d79,	// (0x00069f1a) main_camera2_pane_g8

0x0008,

0xf498,	// (0x0006f639) main_camera2_pane_g_ParamLimits

0xf498,	// (0x0006f639) main_camera2_pane_g

0x3880,	// (0x00063a21) main_camera2_pane_t1_ParamLimits

0x3880,	// (0x00063a21) main_camera2_pane_t1

0x3880,	// (0x00063a21) main_camera2_pane_t2_ParamLimits

0x3880,	// (0x00063a21) main_camera2_pane_t2

0x3880,	// (0x00063a21) main_camera2_pane_t3_ParamLimits

0x3880,	// (0x00063a21) main_camera2_pane_t3

0x3880,	// (0x00063a21) main_camera2_pane_t4_ParamLimits

0x3880,	// (0x00063a21) main_camera2_pane_t4

0x0006,

0xf4ab,	// (0x0006f64c) main_camera2_pane_t_ParamLimits

0xf4ab,	// (0x0006f64c) main_camera2_pane_t

0x9dbd,	// (0x00069f5e) cams_zoom_pane_cp4_ParamLimits

0x9dbd,	// (0x00069f5e) cams_zoom_pane_cp4

0x3894,	// (0x00063a35) image2_cif_pane_ParamLimits

0x3894,	// (0x00063a35) image2_cif_pane

0x9b93,	// (0x00069d34) image2_subqcif_pane_ParamLimits

0x9b93,	// (0x00069d34) image2_subqcif_pane

0x38a2,	// (0x00063a43) main_video2_pane_g1_ParamLimits

0x38a2,	// (0x00063a43) main_video2_pane_g1

0x38a2,	// (0x00063a43) main_video2_pane_g2_ParamLimits

0x38a2,	// (0x00063a43) main_video2_pane_g2

0x38a2,	// (0x00063a43) main_video2_pane_g3_ParamLimits

0x38a2,	// (0x00063a43) main_video2_pane_g3

0x38a2,	// (0x00063a43) main_video2_pane_g4_ParamLimits

0x38a2,	// (0x00063a43) main_video2_pane_g4

0x38a2,	// (0x00063a43) main_video2_pane_g5_ParamLimits

0x38a2,	// (0x00063a43) main_video2_pane_g5

0x38a2,	// (0x00063a43) main_video2_pane_g6_ParamLimits

0x38a2,	// (0x00063a43) main_video2_pane_g6

0x0005,

0xf4ba,	// (0x0006f65b) main_video2_pane_g_ParamLimits

0xf4ba,	// (0x0006f65b) main_video2_pane_g

0x38b0,	// (0x00063a51) main_video2_pane_t1_ParamLimits

0x38b0,	// (0x00063a51) main_video2_pane_t1

0x38b0,	// (0x00063a51) main_video2_pane_t2_ParamLimits

0x38b0,	// (0x00063a51) main_video2_pane_t2

0x38b0,	// (0x00063a51) main_video2_pane_t3_ParamLimits

0x38b0,	// (0x00063a51) main_video2_pane_t3

0x0002,

0xf4c7,	// (0x0006f668) main_video2_pane_t_ParamLimits

0xf4c7,	// (0x0006f668) main_video2_pane_t

0x320d,	// (0x000633ae) call_muted_g2

0x0001,

0xf47c,	// (0x0006f61d) call_muted_g

0xbc20,	// (0x0006bdc1) main_mup2_pane

0xd1a8,	// (0x0006d349) main_mup2_pane_g1_ParamLimits

0xd1a8,	// (0x0006d349) main_mup2_pane_g1

0xd1a8,	// (0x0006d349) main_mup2_pane_g2_ParamLimits

0xd1a8,	// (0x0006d349) main_mup2_pane_g2

0x9df7,	// (0x00069f98) main_mup_pane_g13_cp1

0x9ba1,	// (0x00069d42) mup_volume_pane_cp1

0xd1a8,	// (0x0006d349) main_mup2_pane_g4_ParamLimits

0xd1a8,	// (0x0006d349) main_mup2_pane_g4

0xd1a8,	// (0x0006d349) main_mup2_pane_g5_ParamLimits

0xd1a8,	// (0x0006d349) main_mup2_pane_g5

0xd1a8,	// (0x0006d349) main_mup2_pane_g6_ParamLimits

0xd1a8,	// (0x0006d349) main_mup2_pane_g6

0xd1a8,	// (0x0006d349) main_mup2_pane_g7_ParamLimits

0xd1a8,	// (0x0006d349) main_mup2_pane_g7

0x0006,

0xf4ce,	// (0x0006f66f) main_mup2_pane_g_ParamLimits

0xf4ce,	// (0x0006f66f) main_mup2_pane_g

0xd1b6,	// (0x0006d357) main_mup2_pane_t1_ParamLimits

0xd1b6,	// (0x0006d357) main_mup2_pane_t1

0xd1b6,	// (0x0006d357) main_mup2_pane_t2_ParamLimits

0xd1b6,	// (0x0006d357) main_mup2_pane_t2

0xd1b6,	// (0x0006d357) main_mup2_pane_t3_ParamLimits

0xd1b6,	// (0x0006d357) main_mup2_pane_t3

0xd1b6,	// (0x0006d357) main_mup2_pane_t4_ParamLimits

0xd1b6,	// (0x0006d357) main_mup2_pane_t4

0xd1b6,	// (0x0006d357) main_mup2_pane_t5_ParamLimits

0xd1b6,	// (0x0006d357) main_mup2_pane_t5

0xd1b6,	// (0x0006d357) main_mup2_pane_t6_ParamLimits

0xd1b6,	// (0x0006d357) main_mup2_pane_t6

0x0005,

0xf4dd,	// (0x0006f67e) main_mup2_pane_t_ParamLimits

0xf4dd,	// (0x0006f67e) main_mup2_pane_t

0xd1ca,	// (0x0006d36b) mup2_visualizer_pane_ParamLimits

0xd1ca,	// (0x0006d36b) mup2_visualizer_pane

0xd1ca,	// (0x0006d36b) mup_progress_pane_cp_ParamLimits

0xd1ca,	// (0x0006d36b) mup_progress_pane_cp

0x9de1,	// (0x00069f82) mup_volume_pane_cp_ParamLimits

0x9de1,	// (0x00069f82) mup_volume_pane_cp

0xbf04,	// (0x0006c0a5) mup2_visualizer_pane_g1_ParamLimits

0xbf04,	// (0x0006c0a5) mup2_visualizer_pane_g1

0xbf12,	// (0x0006c0b3) mup2_visualizer_pane_g2_ParamLimits

0xbf12,	// (0x0006c0b3) mup2_visualizer_pane_g2

0xbf12,	// (0x0006c0b3) mup2_visualizer_pane_g3_ParamLimits

0xbf12,	// (0x0006c0b3) mup2_visualizer_pane_g3

0x0002,

0xf07c,	// (0x0006f21d) mup2_visualizer_pane_g_ParamLimits

0xf07c,	// (0x0006f21d) mup2_visualizer_pane_g

0xb7dd,	// (0x0006b97e) aid_size_cell_fmradio

0x33bf,	// (0x00063560) aid_height_parent_landcape

0xc6db,	// (0x0006c87c) wml_content_pane_cp

0xc6e3,	// (0x0006c884) wml_tabs_pane

0xc89a,	// (0x0006ca3b) popup_wml_miniature_window

0xc8a2,	// (0x0006ca43) scroll_pane_cp021

0xc8b6,	// (0x0006ca57) wml_content_pane_comp8

0xbc20,	// (0x0006bdc1) bg_popup_sub_pane_cp05

0xe532,	// (0x0006e6d3) popup_wml_miniature_window_g1

0xe53a,	// (0x0006e6db) wml_miniature_view_pane

0x38c4,	// (0x00063a65) aid_size_wml_view

0x38cc,	// (0x00063a6d) wml_miniature_view_pane_g1

0x38d5,	// (0x00063a76) wml_miniature_view_pane_g2

0x38de,	// (0x00063a7f) wml_miniature_view_pane_g3

0x38e6,	// (0x00063a87) wml_miniature_view_pane_g4

0x38ee,	// (0x00063a8f) wml_miniature_view_pane_g5

0x38f6,	// (0x00063a97) wml_miniature_view_pane_g6

0x38fe,	// (0x00063a9f) wml_miniature_view_pane_g7

0x3906,	// (0x00063aa7) wml_miniature_view_pane_g8

0x0007,

0xf4ea,	// (0x0006f68b) wml_miniature_view_pane_g

0xe542,	// (0x0006e6e3) background_graphic_ParamLimits

0xe542,	// (0x0006e6e3) background_graphic

0xe54e,	// (0x0006e6ef) wml_tabs_2_pane

0xe557,	// (0x0006e6f8) wml_tabs_3_pane_ParamLimits

0xe557,	// (0x0006e6f8) wml_tabs_3_pane

0xe569,	// (0x0006e70a) wml_tabs_4_pane_ParamLimits

0xe569,	// (0x0006e70a) wml_tabs_4_pane

0xe57f,	// (0x0006e720) wml_tabs_5_pane_ParamLimits

0xe57f,	// (0x0006e720) wml_tabs_5_pane

0xe599,	// (0x0006e73a) wml_tabs_pane_g2_ParamLimits

0xe599,	// (0x0006e73a) wml_tabs_pane_g2

0xe5ae,	// (0x0006e74f) wml_tabs_pane_g3_ParamLimits

0xe5ae,	// (0x0006e74f) wml_tabs_pane_g3

0xe5c3,	// (0x0006e764) wml_tabs_2_active_pane_ParamLimits

0xe5c3,	// (0x0006e764) wml_tabs_2_active_pane

0xe5c3,	// (0x0006e764) wml_tabs_2_passive_pane_ParamLimits

0xe5c3,	// (0x0006e764) wml_tabs_2_passive_pane

0x390e,	// (0x00063aaf) wml_tabs_3_active_pane_cp_ParamLimits

0x390e,	// (0x00063aaf) wml_tabs_3_active_pane_cp

0x3923,	// (0x00063ac4) wml_tabs_3_passive_pane_ParamLimits

0x3923,	// (0x00063ac4) wml_tabs_3_passive_pane

0x3936,	// (0x00063ad7) wml_tabs_3_passive_pane_cp_ParamLimits

0x3936,	// (0x00063ad7) wml_tabs_3_passive_pane_cp

0x394d,	// (0x00063aee) tabs_4_active_pane

0x3955,	// (0x00063af6) tabs_4_passive_pane

0x395f,	// (0x00063b00) tabs_4_passive_pane_cp

0x3967,	// (0x00063b08) tabs_4_passive_pane_cp2

0x3183,	// (0x00063324) aid_height_text

0xd1ca,	// (0x0006d36b) mup_volume_cont_pane_ParamLimits

0xd1ca,	// (0x0006d36b) mup_volume_cont_pane

0xb7dd,	// (0x0006b97e) aid_size_cell_pinb

0xb7dd,	// (0x0006b97e) aid_size_list_pinb

0xd1ca,	// (0x0006d36b) mup2_volume_cont_pane_ParamLimits

0xd1ca,	// (0x0006d36b) mup2_volume_cont_pane

0x9dcb,	// (0x00069f6c) mup2_volume_cont_pane_g1_ParamLimits

0x9dcb,	// (0x00069f6c) mup2_volume_cont_pane_g1

0x0ac9,	// (0x00060c6a) aid_size_cell_touch_ParamLimits

0x0ac9,	// (0x00060c6a) aid_size_cell_touch

0x0c8f,	// (0x00060e30) touch_pane_ParamLimits

0x0c8f,	// (0x00060e30) touch_pane

0x9ba1,	// (0x00069d42) main_rss2_pane

0xe5da,	// (0x0006e77b) listscroll_rss2_pane

0xe5e3,	// (0x0006e784) rss2_navigation_pane

0xe5eb,	// (0x0006e78c) list_rss2_pane

0xcebd,	// (0x0006d05e) scroll_pane_cp22

0xe5f3,	// (0x0006e794) rss2_navigation_pane_g1

0xe5fc,	// (0x0006e79d) rss2_navigation_pane_g2

0xe604,	// (0x0006e7a5) rss2_navigation_pane_g3

0x0002,

0xf4fb,	// (0x0006f69c) rss2_navigation_pane_g

0xe63c,	// (0x0006e7dd) rss2_navigation_pane_t1

0x3971,	// (0x00063b12) rss2_list_single_pane_ParamLimits

0x3971,	// (0x00063b12) rss2_list_single_pane

0xe64a,	// (0x0006e7eb) rss2_list_single_pane_t2

0xe658,	// (0x0006e7f9) rss2_list_single_pane_t3_ParamLimits

0xe658,	// (0x0006e7f9) rss2_list_single_pane_t3

0xe675,	// (0x0006e816) rss2_list_single_pane_t4

0x2470,	// (0x00062611) smil_status_pane_g1

0x9b93,	// (0x00069d34) main_image2_pane_ParamLimits

0x9b93,	// (0x00069d34) main_image2_pane

0x9d79,	// (0x00069f1a) main_camera2_pane_g9_ParamLimits

0x9d79,	// (0x00069f1a) main_camera2_pane_g9

0x3880,	// (0x00063a21) main_camera2_pane_t5_ParamLimits

0x3880,	// (0x00063a21) main_camera2_pane_t5

0x9d87,	// (0x00069f28) main_camera2_pane_t6_ParamLimits

0x9d87,	// (0x00069f28) main_camera2_pane_t6

0x3987,	// (0x00063b28) main_image2_pane_g1_ParamLimits

0x3987,	// (0x00063b28) main_image2_pane_g1

0x2e56,	// (0x00062ff7) smil2_video_pane_ParamLimits

0x2e56,	// (0x00062ff7) smil2_video_pane

0x9b4a,	// (0x00069ceb) aid_zoom_text_primary_cp

0x9b89,	// (0x00069d2a) popup_preview_fixed_window

0xc644,	// (0x0006c7e5) im_reading_pane_g1

0x3872,	// (0x00063a13) cams2_bc_adjust_pane_cp_ParamLimits

0x3872,	// (0x00063a13) cams2_bc_adjust_pane_cp

0x9daf,	// (0x00069f50) cams2_bc_adjust_pane_ParamLimits

0x9daf,	// (0x00069f50) cams2_bc_adjust_pane

0x9df7,	// (0x00069f98) cams2_bc_adjust_pane_g1

0x9ba1,	// (0x00069d42) cams2_slider_pane

0x9df7,	// (0x00069f98) cams2_slider_pane_g1

0x9df7,	// (0x00069f98) cams2_slider_pane_g2

0x0006,

0xf502,	// (0x0006f6a3) cams2_slider_pane_g

0x0d58,	// (0x00060ef9) calc_display_pane_ParamLimits

0x0d7d,	// (0x00060f1e) calc_paper_pane_ParamLimits

0x0da0,	// (0x00060f41) grid_calc_pane_ParamLimits

0x9c90,	// (0x00069e31) popup_clock_digital_window_t1_ParamLimits

0xd419,	// (0x0006d5ba) main_image_pane_t1

0x0d3a,	// (0x00060edb) aid_size_cell_calc_ParamLimits

0x0d3a,	// (0x00060edb) aid_size_cell_calc

0x3405,	// (0x000635a6) popup_blid_sat_info2_window_ParamLimits

0x3405,	// (0x000635a6) popup_blid_sat_info2_window

0xe683,	// (0x0006e824) aid_size_cell_blid

0xe60c,	// (0x0006e7ad) bg_popup_window_pane_cp07

0xe6a0,	// (0x0006e841) grid_popup_blid_pane

0xe6aa,	// (0x0006e84b) heading_pane_cp05_ParamLimits

0xe6aa,	// (0x0006e84b) heading_pane_cp05

0xe774,	// (0x0006e915) cell_popup_blid_pane_ParamLimits

0xe774,	// (0x0006e915) cell_popup_blid_pane

0xe798,	// (0x0006e939) cell_popup_blid_pane_g1

0xe7a0,	// (0x0006e941) cell_popup_blid_pane_t1

0xd1ca,	// (0x0006d36b) mup2_indicator_pane_ParamLimits

0xd1ca,	// (0x0006d36b) mup2_indicator_pane

0xb7dd,	// (0x0006b97e) mup2_visualizer_osc_pane

0xe51c,	// (0x0006e6bd) mup2_visualizer_spec_pane_ParamLimits

0xe51c,	// (0x0006e6bd) mup2_visualizer_spec_pane

0xb7dd,	// (0x0006b97e) mup2_spec_half_pane

0xb7dd,	// (0x0006b97e) mup2_spec_half_pane_cp

0xe7ae,	// (0x0006e94f) mup2_spec_bar_pane_ParamLimits

0xe7ae,	// (0x0006e94f) mup2_spec_bar_pane

0xbf42,	// (0x0006c0e3) mup2_spec_bar_pane_g1

0xe7cd,	// (0x0006e96e) mup2_spec_bar_pane_g2

0x0001,

0x018f,	// (0x00060330) mup2_spec_bar_pane_g

0xb7dd,	// (0x0006b97e) mup2_osc_middle_pane

0xbf42,	// (0x0006c0e3) mup2_visualizer_osc_pane_g1

0xb807,	// (0x0006b9a8) popup_number_entry_window_t1_ParamLimits

0xb81a,	// (0x0006b9bb) popup_number_entry_window_t2_ParamLimits

0xb82c,	// (0x0006b9cd) popup_number_entry_window_t3_ParamLimits

0x0ce1,	// (0x00060e82) popup_number_entry_window_t5_ParamLimits

0x0ce1,	// (0x00060e82) popup_number_entry_window_t5

0xf01d,	// (0x0006f1be) popup_number_entry_window_t_ParamLimits

0xb83e,	// (0x0006b9df) text_title_cp2_ParamLimits

0x9ccf,	// (0x00069e70) aid_hotspot_pointer_text2_pane

0x9ce9,	// (0x00069e8a) main_viewer_pane_g9_ParamLimits

0x9ce9,	// (0x00069e8a) main_viewer_pane_g9

0xca2b,	// (0x0006cbcc) cale_month_pane_t1_ParamLimits

0xca68,	// (0x0006cc09) bg_cale_pane_ParamLimits

0xca80,	// (0x0006cc21) list_cale_pane_ParamLimits

0xca91,	// (0x0006cc32) listscroll_cale_day_pane_t1

0xcaa3,	// (0x0006cc44) scroll_pane_cp09_ParamLimits

0x287b,	// (0x00062a1c) main_mup_eq_pane_t1_ParamLimits

0x287b,	// (0x00062a1c) main_mup_eq_pane_t1

0x2895,	// (0x00062a36) main_mup_eq_pane_t2_ParamLimits

0x2895,	// (0x00062a36) main_mup_eq_pane_t2

0x28af,	// (0x00062a50) main_mup_eq_pane_t3_ParamLimits

0x28af,	// (0x00062a50) main_mup_eq_pane_t3

0x28cb,	// (0x00062a6c) main_mup_eq_pane_t4_ParamLimits

0x28cb,	// (0x00062a6c) main_mup_eq_pane_t4

0x28e7,	// (0x00062a88) main_mup_eq_pane_t5_ParamLimits

0x28e7,	// (0x00062a88) main_mup_eq_pane_t5

0x2903,	// (0x00062aa4) main_mup_eq_pane_t6_ParamLimits

0x2903,	// (0x00062aa4) main_mup_eq_pane_t6

0x2917,	// (0x00062ab8) main_mup_eq_pane_t7_ParamLimits

0x2917,	// (0x00062ab8) main_mup_eq_pane_t7

0x292b,	// (0x00062acc) main_mup_eq_pane_t8_ParamLimits

0x292b,	// (0x00062acc) main_mup_eq_pane_t8

0x293f,	// (0x00062ae0) main_mup_eq_pane_t9_ParamLimits

0x293f,	// (0x00062ae0) main_mup_eq_pane_t9

0x2959,	// (0x00062afa) main_mup_eq_pane_t10_ParamLimits

0x2959,	// (0x00062afa) main_mup_eq_pane_t10

0x0009,

0xf36e,	// (0x0006f50f) main_mup_eq_pane_t_ParamLimits

0xf36e,	// (0x0006f50f) main_mup_eq_pane_t

0x2a08,	// (0x00062ba9) mup_equalizer_pane_cp5_ParamLimits

0x2a1c,	// (0x00062bbd) mup_equalizer_pane_cp6_ParamLimits

0x2a30,	// (0x00062bd1) mup_equalizer_pane_cp7_ParamLimits

0x9ba1,	// (0x00069d42) main_gallery_pane

0xe4ba,	// (0x0006e65b) smil2_volume_pane

0xe4c2,	// (0x0006e663) smil_status_volume_pane_g1_ParamLimits

0xe4d5,	// (0x0006e676) smil_status_volume_pane_g2_ParamLimits

0x9d49,	// (0x00069eea) smil_status_volume_pane_g3_ParamLimits

0xf481,	// (0x0006f622) smil_status_volume_pane_g_ParamLimits

0xe60c,	// (0x0006e7ad) bg_popup_window_pane_cp07_ParamLimits

0xe68b,	// (0x0006e82c) blid_firmament_pane

0xbe9d,	// (0x0006c03e) aid_size_cell_gallery_ParamLimits

0xbe9d,	// (0x0006c03e) aid_size_cell_gallery

0xbe9d,	// (0x0006c03e) grid_gallery_pane_ParamLimits

0xbe9d,	// (0x0006c03e) grid_gallery_pane

0xe60c,	// (0x0006e7ad) cell_gallery_pane_ParamLimits

0xe60c,	// (0x0006e7ad) cell_gallery_pane

0xbe9d,	// (0x0006c03e) bg_cell_gallery_focus_pane_ParamLimits

0xbe9d,	// (0x0006c03e) bg_cell_gallery_focus_pane

0xbf04,	// (0x0006c0a5) cell_gallery_pane_g1_ParamLimits

0xbf04,	// (0x0006c0a5) cell_gallery_pane_g1

0xbf04,	// (0x0006c0a5) cell_gallery_pane_g2_ParamLimits

0xbf04,	// (0x0006c0a5) cell_gallery_pane_g2

0xbf04,	// (0x0006c0a5) cell_gallery_pane_g3_ParamLimits

0xbf04,	// (0x0006c0a5) cell_gallery_pane_g3

0xbf12,	// (0x0006c0b3) cell_gallery_pane_g4_ParamLimits

0xbf12,	// (0x0006c0b3) cell_gallery_pane_g4

0x0003,

0x0194,	// (0x00060335) cell_gallery_pane_g_ParamLimits

0x0194,	// (0x00060335) cell_gallery_pane_g

0xe7d7,	// (0x0006e978) bg_cell_gallery_focus_pane_g1

0xe7df,	// (0x0006e980) bg_cell_gallery_focus_pane_g2

0xe7e7,	// (0x0006e988) bg_cell_gallery_focus_pane_g3

0xe7ef,	// (0x0006e990) bg_cell_gallery_focus_pane_g4

0xe7f7,	// (0x0006e998) bg_cell_gallery_focus_pane_g5

0xe7ff,	// (0x0006e9a0) bg_cell_gallery_focus_pane_g6

0xe807,	// (0x0006e9a8) bg_cell_gallery_focus_pane_g7

0xe80f,	// (0x0006e9b0) bg_cell_gallery_focus_pane_g8

0x0007,

0x019d,	// (0x0006033e) bg_cell_gallery_focus_pane_g

0xe817,	// (0x0006e9b8) aid_firma_cardinal

0xe82b,	// (0x0006e9cc) blid_firmament_pane_t1

0xe842,	// (0x0006e9e3) blid_firmament_pane_t2

0xe859,	// (0x0006e9fa) blid_firmament_pane_t3

0xe870,	// (0x0006ea11) blid_firmament_pane_t4

0x0003,

0x01ae,	// (0x0006034f) blid_firmament_pane_t

0xe887,	// (0x0006ea28) blid_sat_info_pane

0xbf42,	// (0x0006c0e3) blid_sat_info_pane_g1

0xbf42,	// (0x0006c0e3) blid_sat_info_pane_g2

0x0001,

0xf08c,	// (0x0006f22d) blid_sat_info_pane_g

0xe897,	// (0x0006ea38) blid_sat_info_pane_t1

0xe8a5,	// (0x0006ea46) smil2_volume_content_pane

0xe8ae,	// (0x0006ea4f) smil2_volume_pane_g1

0xc047,	// (0x0006c1e8) smil2_volume_content_pane_g1

0xe8b6,	// (0x0006ea57) smil2_volume_content_pane_g2

0xe8bf,	// (0x0006ea60) smil2_volume_content_pane_g3

0xe8c8,	// (0x0006ea69) smil2_volume_content_pane_g4

0xe8d1,	// (0x0006ea72) smil2_volume_content_pane_g5

0xe8da,	// (0x0006ea7b) smil2_volume_content_pane_g6

0xe8e3,	// (0x0006ea84) smil2_volume_content_pane_g7

0xe8ec,	// (0x0006ea8d) smil2_volume_content_pane_g8

0xe8f5,	// (0x0006ea96) smil2_volume_content_pane_g9

0xe8fe,	// (0x0006ea9f) smil2_volume_content_pane_g10

0x0009,

0xf511,	// (0x0006f6b2) smil2_volume_content_pane_g

0x127d,	// (0x0006141e) cale_week_day_heading_pane_t1_ParamLimits

0x12a7,	// (0x00061448) cale_week_day_heading_pane_t2_ParamLimits

0x12d6,	// (0x00061477) cale_week_day_heading_pane_t3_ParamLimits

0x1305,	// (0x000614a6) cale_week_day_heading_pane_t4_ParamLimits

0x1334,	// (0x000614d5) cale_week_day_heading_pane_t5_ParamLimits

0x136b,	// (0x0006150c) cale_week_day_heading_pane_t6_ParamLimits

0x13a2,	// (0x00061543) cale_week_day_heading_pane_t7_ParamLimits

0xf124,	// (0x0006f2c5) cale_week_day_heading_pane_t_ParamLimits

0xc539,	// (0x0006c6da) bg_cale_side_pane_ParamLimits

0x13cc,	// (0x0006156d) cale_week_time_pane_t1_ParamLimits

0x13e6,	// (0x00061587) cale_week_time_pane_t2_ParamLimits

0x1400,	// (0x000615a1) cale_week_time_pane_t3_ParamLimits

0x141a,	// (0x000615bb) cale_week_time_pane_t4_ParamLimits

0x1434,	// (0x000615d5) cale_week_time_pane_t5_ParamLimits

0x144e,	// (0x000615ef) cale_week_time_pane_t6_ParamLimits

0x1468,	// (0x00061609) cale_week_time_pane_t7_ParamLimits

0x1482,	// (0x00061623) cale_week_time_pane_t8_ParamLimits

0xf133,	// (0x0006f2d4) cale_week_time_pane_t_ParamLimits

0x14a2,	// (0x00061643) cell_cale_week_pane_g2_ParamLimits

0xc539,	// (0x0006c6da) bg_cale_side_pane_cp01_ParamLimits

0x2275,	// (0x00062416) cale_month_week_pane_t1_ParamLimits

0x228e,	// (0x0006242f) cale_month_week_pane_t2_ParamLimits

0x22a7,	// (0x00062448) cale_month_week_pane_t3_ParamLimits

0x22c0,	// (0x00062461) cale_month_week_pane_t4_ParamLimits

0x22d9,	// (0x0006247a) cale_month_week_pane_t5_ParamLimits

0x22f2,	// (0x00062493) cale_month_week_pane_t6_ParamLimits

0xf1f8,	// (0x0006f399) cale_month_week_pane_t_ParamLimits

0x9c04,	// (0x00069da5) cell_cale_month_pane_g1_ParamLimits

0x9ba1,	// (0x00069d42) main_cale_event_viewer_pane

0xb7dd,	// (0x0006b97e) listscroll_cale_event_viewer_pane

0xe907,	// (0x0006eaa8) list_cale_ev_pane

0xe90f,	// (0x0006eab0) scroll_pane_cp023

0xe91b,	// (0x0006eabc) field_cale_ev_pane_ParamLimits

0xe91b,	// (0x0006eabc) field_cale_ev_pane

0xe939,	// (0x0006eada) field_cale_ev_content_pane_ParamLimits

0xe939,	// (0x0006eada) field_cale_ev_content_pane

0xe945,	// (0x0006eae6) field_cale_ev_pane_g1_ParamLimits

0xe945,	// (0x0006eae6) field_cale_ev_pane_g1

0xe951,	// (0x0006eaf2) field_cale_ev_pane_g2_ParamLimits

0xe951,	// (0x0006eaf2) field_cale_ev_pane_g2

0xe969,	// (0x0006eb0a) field_cale_ev_pane_g3_ParamLimits

0xe969,	// (0x0006eb0a) field_cale_ev_pane_g3

0x0002,

0x01cc,	// (0x0006036d) field_cale_ev_pane_g_ParamLimits

0x01cc,	// (0x0006036d) field_cale_ev_pane_g

0xe981,	// (0x0006eb22) field_cale_ev_pane_t1_ParamLimits

0xe981,	// (0x0006eb22) field_cale_ev_pane_t1

0xe998,	// (0x0006eb39) field_cale_ev_content_pane_t1_ParamLimits

0xe998,	// (0x0006eb39) field_cale_ev_content_pane_t1

0xd275,	// (0x0006d416) bg_button_pane_cp01

0x0faa,	// (0x0006114b) listscroll_cale_week_pane_ParamLimits

0x9bf1,	// (0x00069d92) popup_toolbar_window_cp01

0xc50a,	// (0x0006c6ab) listscroll_cale_week_pane_t1_ParamLimits

0x24c9,	// (0x0006266a) listscroll_cale_day_pane_ParamLimits

0xc6ec,	// (0x0006c88d) popup_toolbar_window_cp02

0xca91,	// (0x0006cc32) listscroll_cale_day_pane_t1_ParamLimits

0x0faa,	// (0x0006114b) main_cale_month_pane_ParamLimits

0x9d34,	// (0x00069ed5) popup_toolbar_window_cp03_ParamLimits

0x9d34,	// (0x00069ed5) popup_toolbar_window_cp03

0x2d1e,	// (0x00062ebf) main_image_pane_g2_ParamLimits

0x2d1e,	// (0x00062ebf) main_image_pane_g2

0x2d2f,	// (0x00062ed0) main_image_pane_g3_ParamLimits

0x2d2f,	// (0x00062ed0) main_image_pane_g3

0x0002,

0xf400,	// (0x0006f5a1) main_image_pane_g_ParamLimits

0xf400,	// (0x0006f5a1) main_image_pane_g

0xd419,	// (0x0006d5ba) main_image_pane_t1_ParamLimits

0x2d40,	// (0x00062ee1) main_image_pane_t2_ParamLimits

0x2d40,	// (0x00062ee1) main_image_pane_t2

0x2d52,	// (0x00062ef3) main_image_pane_t3_ParamLimits

0x2d52,	// (0x00062ef3) main_image_pane_t3

0x2d7a,	// (0x00062f1b) main_image_pane_t4_ParamLimits

0x2d7a,	// (0x00062f1b) main_image_pane_t4

0x0003,

0xf407,	// (0x0006f5a8) main_image_pane_t_ParamLimits

0xf407,	// (0x0006f5a8) main_image_pane_t

0x2d9a,	// (0x00062f3b) popup_image_details_window_cp01

0x2da4,	// (0x00062f45) popup_toobar_trans_pane_cp01_ParamLimits

0x2da4,	// (0x00062f45) popup_toobar_trans_pane_cp01

0x34d6,	// (0x00063677) popup_image_details_window_ParamLimits

0x34d6,	// (0x00063677) popup_image_details_window

0x9d07,	// (0x00069ea8) popup_image_focus_window

0x9d6b,	// (0x00069f0c) camera2_autofocus_pane_ParamLimits

0x9d6b,	// (0x00069f0c) camera2_autofocus_pane

0xb7dd,	// (0x0006b97e) bg_popup_sub_pane_cp06

0xe9b6,	// (0x0006eb57) popup_image_focus_window_g1

0xe9be,	// (0x0006eb5f) popup_image_focus_window_g2

0xe9c6,	// (0x0006eb67) popup_image_focus_window_g3

0xe9ce,	// (0x0006eb6f) popup_image_focus_window_g4

0x0003,

0x01d3,	// (0x00060374) popup_image_focus_window_g

0xe9d6,	// (0x0006eb77) popup_image_focus_window_t1

0xe9e4,	// (0x0006eb85) popup_image_focus_window_t2

0xe9f4,	// (0x0006eb95) popup_image_focus_window_t3

0x0002,

0x01dc,	// (0x0006037d) popup_image_focus_window_t

0xbf04,	// (0x0006c0a5) camera2_autofocus_pane_g1

0xbe9d,	// (0x0006c03e) bg_tb_trans_pane_cp01

0xea02,	// (0x0006eba3) popup_image_details_window_g1

0xea15,	// (0x0006ebb6) popup_image_details_window_g2

0x0002,

0x01ee,	// (0x0006038f) popup_image_details_window_g

0xea3e,	// (0x0006ebdf) popup_image_details_window_t1

0xea50,	// (0x0006ebf1) popup_image_details_window_t2

0xea69,	// (0x0006ec0a) popup_image_details_window_t3

0xea7d,	// (0x0006ec1e) popup_image_details_window_t4

0xea98,	// (0x0006ec39) popup_image_details_window_t5

0x0004,

0x01f5,	// (0x00060396) popup_image_details_window_t

0xbf8c,	// (0x0006c12d) bg_calc_paper_pane_ParamLimits

0x9ba1,	// (0x00069d42) grid_highlight_pane_cp013

0x9bb3,	// (0x00069d54) list_calc_pane_ParamLimits

0x9bc5,	// (0x00069d66) scroll_pane_cp024

0xbfa0,	// (0x0006c141) bg_calc_display_pane_ParamLimits

0x0de2,	// (0x00060f83) calc_display_pane_t1_ParamLimits

0x0df4,	// (0x00060f95) calc_display_pane_t2_ParamLimits

0x9bcd,	// (0x00069d6e) calc_display_pane_t3_ParamLimits

0xf0a4,	// (0x0006f245) calc_display_pane_t_ParamLimits

0x0eae,	// (0x0006104f) cell_calc_pane_g2

0x0001,

0xf0c1,	// (0x0006f262) cell_calc_pane_g

0x0eb7,	// (0x00061058) cell_calc_pane_t1

0xbff5,	// (0x0006c196) grid_highlight_pane_cp02_ParamLimits

0xc00b,	// (0x0006c1ac) toolbar_button_pane_cp01_ParamLimits

0xc00b,	// (0x0006c1ac) toolbar_button_pane_cp01

0xd45e,	// (0x0006d5ff) temp_image_control_pane_ParamLimits

0xd45e,	// (0x0006d5ff) temp_image_control_pane

0x9b93,	// (0x00069d34) main_mp3_pane

0xeab2,	// (0x0006ec53) temp_image_control_pane_g1_ParamLimits

0xeab2,	// (0x0006ec53) temp_image_control_pane_g1

0xeac0,	// (0x0006ec61) temp_image_control_pane_g2_ParamLimits

0xeac0,	// (0x0006ec61) temp_image_control_pane_g2

0xead2,	// (0x0006ec73) temp_image_control_pane_g3_ParamLimits

0xead2,	// (0x0006ec73) temp_image_control_pane_g3

0x399d,	// (0x00063b3e) temp_image_control_pane_g4_ParamLimits

0x399d,	// (0x00063b3e) temp_image_control_pane_g4

0x0003,

0xf526,	// (0x0006f6c7) temp_image_control_pane_g_ParamLimits

0xf526,	// (0x0006f6c7) temp_image_control_pane_g

0xeab2,	// (0x0006ec53) main_mp3_pane_g1

0x39b0,	// (0x00063b51) main_mp3_pane_g2

0x0007,

0xf52f,	// (0x0006f6d0) main_mp3_pane_g

0xeb07,	// (0x0006eca8) main_mp3_pane_t1

0xbf12,	// (0x0006c0b3) main_camera_pane_g8_ParamLimits

0xbf12,	// (0x0006c0b3) main_camera_pane_g8

0x1670,	// (0x00061811) main_video_pane_g7_ParamLimits

0x1670,	// (0x00061811) main_video_pane_g7

0x9d9b,	// (0x00069f3c) main_camera2_pane_t7_ParamLimits

0x9d9b,	// (0x00069f3c) main_camera2_pane_t7

0xc69b,	// (0x0006c83c) scroll_pane_cp025_ParamLimits

0xc69b,	// (0x0006c83c) scroll_pane_cp025

0xc6af,	// (0x0006c850) scroll_pane_cp026_ParamLimits

0xc6af,	// (0x0006c850) scroll_pane_cp026

0xc6be,	// (0x0006c85f) wml_content_pane_ParamLimits

0x9ba1,	// (0x00069d42) main_touch_calib_pane

0x3a84,	// (0x00063c25) main_touch_calib_pane_g1

0x3a96,	// (0x00063c37) main_touch_calib_pane_g2

0x3aa8,	// (0x00063c49) main_touch_calib_pane_g3

0x3aba,	// (0x00063c5b) main_touch_calib_pane_g4

0x0003,

0xf54d,	// (0x0006f6ee) main_touch_calib_pane_g

0x3acc,	// (0x00063c6d) main_touch_calib_pane_t1

0x3ae6,	// (0x00063c87) main_touch_calib_pane_t2

0x0004,

0xf556,	// (0x0006f6f7) main_touch_calib_pane_t

0xcf8c,	// (0x0006d12d) mup_progress_pane_cp02

0xcfc1,	// (0x0006d162) navi_pane_g1

0xd07c,	// (0x0006d21d) navi_pane_mp_t3

0x9b93,	// (0x00069d34) main_mp3_pane_ParamLimits

0x3661,	// (0x00063802) navi_pane_ParamLimits

0xeab2,	// (0x0006ec53) main_mp3_pane_g1_ParamLimits

0x39b0,	// (0x00063b51) main_mp3_pane_g2_ParamLimits

0x39be,	// (0x00063b5f) main_mp3_pane_g3_ParamLimits

0x39be,	// (0x00063b5f) main_mp3_pane_g3

0x39cc,	// (0x00063b6d) main_mp3_pane_g4_ParamLimits

0x39cc,	// (0x00063b6d) main_mp3_pane_g4

0xbf04,	// (0x0006c0a5) main_mp3_pane_g5_ParamLimits

0xbf04,	// (0x0006c0a5) main_mp3_pane_g5

0xeae2,	// (0x0006ec83) main_mp3_pane_g6_ParamLimits

0xeae2,	// (0x0006ec83) main_mp3_pane_g6

0xeaef,	// (0x0006ec90) main_mp3_pane_g7_ParamLimits

0xeaef,	// (0x0006ec90) main_mp3_pane_g7

0xeafb,	// (0x0006ec9c) main_mp3_pane_g8_ParamLimits

0xeafb,	// (0x0006ec9c) main_mp3_pane_g8

0xf52f,	// (0x0006f6d0) main_mp3_pane_g_ParamLimits

0x39d8,	// (0x00063b79) main_mp3_pane_t2

0x39e6,	// (0x00063b87) main_mp3_pane_t3

0xeb15,	// (0x0006ecb6) main_mp3_pane_t4

0xeb23,	// (0x0006ecc4) main_mp3_pane_t5

0x0005,

0xf540,	// (0x0006f6e1) main_mp3_pane_t

0xeb31,	// (0x0006ecd2) mup_progress_pane_cp01

0x9b42,	// (0x00069ce3) aid_zoom_text_secondary2

0xe907,	// (0x0006eaa8) list_cale_ev2_pane

0xe90f,	// (0x0006eab0) scroll_pane_cp023_ParamLimits

0x3b3c,	// (0x00063cdd) field_cale_ev2_pane_ParamLimits

0x3b3c,	// (0x00063cdd) field_cale_ev2_pane

0xeb39,	// (0x0006ecda) field_cale_ev2_pane_g1_ParamLimits

0xeb39,	// (0x0006ecda) field_cale_ev2_pane_g1

0xeb45,	// (0x0006ece6) field_cale_ev2_pane_g2_ParamLimits

0xeb45,	// (0x0006ece6) field_cale_ev2_pane_g2

0xeb5d,	// (0x0006ecfe) field_cale_ev2_pane_g3_ParamLimits

0xeb5d,	// (0x0006ecfe) field_cale_ev2_pane_g3

0x0003,

0x023b,	// (0x000603dc) field_cale_ev2_pane_g_ParamLimits

0x023b,	// (0x000603dc) field_cale_ev2_pane_g

0xeb81,	// (0x0006ed22) field_cale_ev2_pane_t1_ParamLimits

0xeb81,	// (0x0006ed22) field_cale_ev2_pane_t1

0xeb98,	// (0x0006ed39) field_cale_ev2_pane_t2_ParamLimits

0xeb98,	// (0x0006ed39) field_cale_ev2_pane_t2

0x0001,

0x0244,	// (0x000603e5) field_cale_ev2_pane_t_ParamLimits

0x0244,	// (0x000603e5) field_cale_ev2_pane_t

0x2bf4,	// (0x00062d95) main_postcard_pane_g5_ParamLimits

0x2bf4,	// (0x00062d95) main_postcard_pane_g5

0x2c0a,	// (0x00062dab) main_postcard_pane_g6_ParamLimits

0x2c0a,	// (0x00062dab) main_postcard_pane_g6

0xbe9d,	// (0x0006c03e) camera2_autofocus_pane_cp_ParamLimits

0xbe9d,	// (0x0006c03e) camera2_autofocus_pane_cp

0x9b93,	// (0x00069d34) main_mup3_pane

0x3ba1,	// (0x00063d42) main_mup3_pane_g1_ParamLimits

0x3ba1,	// (0x00063d42) main_mup3_pane_g1

0x3bf3,	// (0x00063d94) main_mup3_pane_g2_ParamLimits

0x3bf3,	// (0x00063d94) main_mup3_pane_g2

0x3c5b,	// (0x00063dfc) main_mup3_pane_g3_ParamLimits

0x3c5b,	// (0x00063dfc) main_mup3_pane_g3

0x3cbf,	// (0x00063e60) main_mup3_pane_g4_ParamLimits

0x3cbf,	// (0x00063e60) main_mup3_pane_g4

0x3d23,	// (0x00063ec4) main_mup3_pane_g5_ParamLimits

0x3d23,	// (0x00063ec4) main_mup3_pane_g5

0x9e01,	// (0x00069fa2) main_mup3_pane_g6_ParamLimits

0x9e01,	// (0x00069fa2) main_mup3_pane_g6

0xbf12,	// (0x0006c0b3) main_mup3_pane_g7_ParamLimits

0xbf12,	// (0x0006c0b3) main_mup3_pane_g7

0x0007,

0xf56c,	// (0x0006f70d) main_mup3_pane_g_ParamLimits

0xf56c,	// (0x0006f70d) main_mup3_pane_g

0x3df0,	// (0x00063f91) main_mup3_pane_t1_ParamLimits

0x3df0,	// (0x00063f91) main_mup3_pane_t1

0x3ede,	// (0x0006407f) main_mup3_pane_t2_ParamLimits

0x3ede,	// (0x0006407f) main_mup3_pane_t2

0x3fcc,	// (0x0006416d) main_mup3_pane_t4_ParamLimits

0x3fcc,	// (0x0006416d) main_mup3_pane_t4

0x3fde,	// (0x0006417f) main_mup3_pane_t5_ParamLimits

0x3fde,	// (0x0006417f) main_mup3_pane_t5

0x40b0,	// (0x00064251) main_mup3_pane_t6_ParamLimits

0x40b0,	// (0x00064251) main_mup3_pane_t6

0x0005,

0xf57d,	// (0x0006f71e) main_mup3_pane_t_ParamLimits

0xf57d,	// (0x0006f71e) main_mup3_pane_t

0x4158,	// (0x000642f9) mup3_progress_pane_ParamLimits

0x4158,	// (0x000642f9) mup3_progress_pane

0x41c0,	// (0x00064361) popup_mup3_control_window_ParamLimits

0x41c0,	// (0x00064361) popup_mup3_control_window

0xebad,	// (0x0006ed4e) popup_mup3_text_window

0x41d8,	// (0x00064379) mup3_progress_pane_t1

0x41f7,	// (0x00064398) mup3_progress_pane_t2

0xebb5,	// (0x0006ed56) mup3_progress_pane_t3

0x0002,

0xf58a,	// (0x0006f72b) mup3_progress_pane_t

0xebd2,	// (0x0006ed73) mup_progress_pane_cp03

0xebe2,	// (0x0006ed83) bg_tb_trans_pane_cp04

0xebe2,	// (0x0006ed83) mup3_volume_pane

0xebea,	// (0x0006ed8b) popup_mup3_control_window_g1

0xebea,	// (0x0006ed8b) mup3_volume_pane_g1

0xebea,	// (0x0006ed8b) mup3_volume_pane_g2

0xebea,	// (0x0006ed8b) mup3_volume_pane_g3

0x0002,

0x0279,	// (0x0006041a) mup3_volume_pane_g

0xb7dd,	// (0x0006b97e) bg_tb_trans_pane_cp03

0xebf2,	// (0x0006ed93) popup_mup3_text_window_g1

0xebfa,	// (0x0006ed9b) popup_mup3_text_window_t1

0xbfe8,	// (0x0006c189) list_calc_item_pane_g1_ParamLimits

0xe5d1,	// (0x0006e772) mup_volume_pane_cp_g1

0x3b00,	// (0x00063ca1) main_touch_calib_pane_t3

0x3b14,	// (0x00063cb5) main_touch_calib_pane_t4

0x3b28,	// (0x00063cc9) main_touch_calib_pane_t5

0x9b26,	// (0x00069cc7) aid_cell_size_toolbar2

0x9b2e,	// (0x00069ccf) aid_popup3_width_pane

0x9b3a,	// (0x00069cdb) aid_zoom_text_msg_primary

0x154b,	// (0x000616ec) vorec_t7

0xbfac,	// (0x0006c14d) bg_calc_paper_pane_g1_ParamLimits

0xbfb8,	// (0x0006c159) bg_calc_paper_pane_g2_ParamLimits

0xbfc4,	// (0x0006c165) bg_calc_paper_pane_g3_ParamLimits

0xbfd0,	// (0x0006c171) bg_calc_paper_pane_g4_ParamLimits

0xbfdc,	// (0x0006c17d) bg_calc_paper_pane_g5_ParamLimits

0x0e3b,	// (0x00060fdc) bg_calc_paper_pane_g6_ParamLimits

0x0e4a,	// (0x00060feb) bg_calc_paper_pane_g7_ParamLimits

0x0e59,	// (0x00060ffa) bg_calc_paper_pane_g8_ParamLimits

0xf0ab,	// (0x0006f24c) bg_calc_paper_pane_g_ParamLimits

0x0e6c,	// (0x0006100d) calc_bg_paper_pane_g9_ParamLimits

0xbe9d,	// (0x0006c03e) image_qvga_pane_ParamLimits

0xbe9d,	// (0x0006c03e) image_qvga_pane

0xbe7b,	// (0x0006c01c) bg_popup_sub_pane_cp04_ParamLimits

0xd395,	// (0x0006d536) popup_mup_playback_window_g1_ParamLimits

0xd3a1,	// (0x0006d542) popup_mup_playback_window_t1_ParamLimits

0xd3b6,	// (0x0006d557) popup_mup_playback_window_t2_ParamLimits

0xf3fb,	// (0x0006f59c) popup_mup_playback_window_t_ParamLimits

0xbf12,	// (0x0006c0b3) main_mup2_pane_g3_ParamLimits

0xbf12,	// (0x0006c0b3) main_mup2_pane_g3

0x182b,	// (0x000619cc) popup_toolbar_window_cp04

0xd73a,	// (0x0006d8db) popup_call2_audio_second_window_g3_ParamLimits

0xd73a,	// (0x0006d8db) popup_call2_audio_second_window_g3

0xdb52,	// (0x0006dcf3) popup_call2_audio_first_window_g4_ParamLimits

0xdb52,	// (0x0006dcf3) popup_call2_audio_first_window_g4

0xe179,	// (0x0006e31a) popup_call2_audio_in_window_g4_ParamLimits

0xe179,	// (0x0006e31a) popup_call2_audio_in_window_g4

0x2d00,	// (0x00062ea1) aid_area_sk_bg_cut_ParamLimits

0x2d00,	// (0x00062ea1) aid_area_sk_bg_cut

0xd3cb,	// (0x0006d56c) aid_area_sk_bg_cut_2_ParamLimits

0xd3cb,	// (0x0006d56c) aid_area_sk_bg_cut_2

0xb7dd,	// (0x0006b97e) aid_placing_details_win

0xb7dd,	// (0x0006b97e) aid_placing_details_win_2

0xbf04,	// (0x0006c0a5) camera2_autofocus_pane_g1_ParamLimits

0x0c28,	// (0x00060dc9) popup_fixed_preview_cale_window_ParamLimits

0x0c28,	// (0x00060dc9) popup_fixed_preview_cale_window

0xd0fa,	// (0x0006d29b) navi_slider_pane_g3

0xd103,	// (0x0006d2a4) navi_slider_pane_g4

0xd10c,	// (0x0006d2ad) navi_slider_pane_g5

0xd0fa,	// (0x0006d29b) navi_slider_pane_g6

0x9cb6,	// (0x00069e57) navi_slider_pane_g7

0xd23a,	// (0x0006d3db) mup_scale_pane_g3

0xd243,	// (0x0006d3e4) mup_scale_pane_g4

0xd24c,	// (0x0006d3ed) mup_scale_pane_g5

0x2a44,	// (0x00062be5) mup_scale_pane_g6

0x2a4d,	// (0x00062bee) mup_scale_pane_g7

0x9df7,	// (0x00069f98) cams2_slider_pane_g3

0x9df7,	// (0x00069f98) cams2_slider_pane_g4

0x9df7,	// (0x00069f98) cams2_slider_pane_g5

0x9df7,	// (0x00069f98) cams2_slider_pane_g6

0x9df7,	// (0x00069f98) cams2_slider_pane_g7

0xbf42,	// (0x0006c0e3) camera2_autofocus_pane_cp_g1

0xe441,	// (0x0006e5e2) bg_popup_preview_window_pane_cp02_ParamLimits

0xe441,	// (0x0006e5e2) bg_popup_preview_window_pane_cp02

0xec08,	// (0x0006eda9) list_fp_cale_pane_ParamLimits

0xec08,	// (0x0006eda9) list_fp_cale_pane

0xec14,	// (0x0006edb5) popup_fixed_preview_cale_window_t1_ParamLimits

0xec14,	// (0x0006edb5) popup_fixed_preview_cale_window_t1

0x4216,	// (0x000643b7) popup_fixed_preview_cale_window_t2_ParamLimits

0x4216,	// (0x000643b7) popup_fixed_preview_cale_window_t2

0x422b,	// (0x000643cc) popup_fixed_preview_cale_window_t3_ParamLimits

0x422b,	// (0x000643cc) popup_fixed_preview_cale_window_t3

0x0002,

0xf591,	// (0x0006f732) popup_fixed_preview_cale_window_t_ParamLimits

0xf591,	// (0x0006f732) popup_fixed_preview_cale_window_t

0x4240,	// (0x000643e1) list_single_fp_cale_pane_ParamLimits

0x4240,	// (0x000643e1) list_single_fp_cale_pane

0xec32,	// (0x0006edd3) list_single_fp_cale_pane_g1_ParamLimits

0xec32,	// (0x0006edd3) list_single_fp_cale_pane_g1

0xec3e,	// (0x0006eddf) list_single_fp_cale_pane_g2_ParamLimits

0xec3e,	// (0x0006eddf) list_single_fp_cale_pane_g2

0x0002,

0x0287,	// (0x00060428) list_single_fp_cale_pane_g_ParamLimits

0x0287,	// (0x00060428) list_single_fp_cale_pane_g

0xec57,	// (0x0006edf8) list_single_fp_cale_pane_t1_ParamLimits

0xec57,	// (0x0006edf8) list_single_fp_cale_pane_t1

0xec69,	// (0x0006ee0a) list_single_fp_cale_pane_t2_ParamLimits

0xec69,	// (0x0006ee0a) list_single_fp_cale_pane_t2

0x0001,

0x028e,	// (0x0006042f) list_single_fp_cale_pane_t_ParamLimits

0x028e,	// (0x0006042f) list_single_fp_cale_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0x9ba1,	// (0x00069d42) main_dialer_pane

0xb7dd,	// (0x0006b97e) aid_cell_size_keypad

0xb7dd,	// (0x0006b97e) dialer_ne_pane

0xb7dd,	// (0x0006b97e) grid_dialer_command_1_pane

0xb7dd,	// (0x0006b97e) grid_dialer_command_2_pane

0xb7dd,	// (0x0006b97e) grid_dialer_keypad_pane

0x4256,	// (0x000643f7) bg_popup_call_pane_cp06_ParamLimits

0x4256,	// (0x000643f7) bg_popup_call_pane_cp06

0x4256,	// (0x000643f7) dialer_ne_clear_pane_ParamLimits

0x4256,	// (0x000643f7) dialer_ne_clear_pane

0xbf42,	// (0x0006c0e3) dialer_ne_pane_g1

0xbf60,	// (0x0006c101) dialer_ne_pane_t1_ParamLimits

0xbf60,	// (0x0006c101) dialer_ne_pane_t1

0x4264,	// (0x00064405) dialer_ne_pane_t2_ParamLimits

0x4264,	// (0x00064405) dialer_ne_pane_t2

0x428c,	// (0x0006442d) dialer_ne_pane_t3_ParamLimits

0x428c,	// (0x0006442d) dialer_ne_pane_t3

0x0002,

0xf598,	// (0x0006f739) dialer_ne_pane_t_ParamLimits

0xf598,	// (0x0006f739) dialer_ne_pane_t

0x428c,	// (0x0006442d) dialer_ne_pane_t3_copy1_ParamLimits

0x428c,	// (0x0006442d) dialer_ne_pane_t3_copy1

0xec9c,	// (0x0006ee3d) cell_dialer_keypad_pane_ParamLimits

0xec9c,	// (0x0006ee3d) cell_dialer_keypad_pane

0xbe9d,	// (0x0006c03e) cell_dialer_command_1_pane_ParamLimits

0xbe9d,	// (0x0006c03e) cell_dialer_command_1_pane

0xecb3,	// (0x0006ee54) cell_dialer_command_2_pane_ParamLimits

0xecb3,	// (0x0006ee54) cell_dialer_command_2_pane

0xbe9d,	// (0x0006c03e) bg_button_pane_cp02_ParamLimits

0xbe9d,	// (0x0006c03e) bg_button_pane_cp02

0xbf04,	// (0x0006c0a5) cell_dialer_keypad_pane_g1_ParamLimits

0xbf04,	// (0x0006c0a5) cell_dialer_keypad_pane_g1

0xbe9d,	// (0x0006c03e) bg_button_pane_cp03_ParamLimits

0xbe9d,	// (0x0006c03e) bg_button_pane_cp03

0xbf04,	// (0x0006c0a5) cell_dialer_command_1_pane_g1_ParamLimits

0xbf04,	// (0x0006c0a5) cell_dialer_command_1_pane_g1

0xb7dd,	// (0x0006b97e) bg_button_pane_cp04

0xbf42,	// (0x0006c0e3) cell_dialer_command_2_pane_g1

0xb7dd,	// (0x0006b97e) bg_button_pane_cp06

0xbf42,	// (0x0006c0e3) dialer_ne_clear_pane_g1

0xcfcd,	// (0x0006d16e) navi_pane_g2

0xcffb,	// (0x0006d19c) navi_pane_g3

0x0002,

0xf303,	// (0x0006f4a4) navi_pane_g

0xd08a,	// (0x0006d22b) navi_pane_mv_g2

0xd0b1,	// (0x0006d252) navi_pane_mv_g5

0x2827,	// (0x000629c8) navi_pane_mv_t1

0xbfa0,	// (0x0006c141) main_clock2_pane

0xbe9d,	// (0x0006c03e) main_clock2_list_pane_ParamLimits

0xbe9d,	// (0x0006c03e) main_clock2_list_pane

0x4322,	// (0x000644c3) main_clock2_pane_t1_ParamLimits

0x4322,	// (0x000644c3) main_clock2_pane_t1

0x435d,	// (0x000644fe) main_clock2_pane_t2_ParamLimits

0x435d,	// (0x000644fe) main_clock2_pane_t2

0x0004,

0xf59f,	// (0x0006f740) main_clock2_pane_t_ParamLimits

0xf59f,	// (0x0006f740) main_clock2_pane_t

0x43fd,	// (0x0006459e) popup_clock_analogue_window_cp03_ParamLimits

0x43fd,	// (0x0006459e) popup_clock_analogue_window_cp03

0x4422,	// (0x000645c3) popup_clock_digital_window_cp02_ParamLimits

0x4422,	// (0x000645c3) popup_clock_digital_window_cp02

0x449b,	// (0x0006463c) main_clock2_list_single_pane_ParamLimits

0x449b,	// (0x0006463c) main_clock2_list_single_pane

0xc58b,	// (0x0006c72c) list_highlight_pane_cp05

0xecf6,	// (0x0006ee97) main_clock2_list_single_pane_t1

0x182b,	// (0x000619cc) popup_toolbar_window_cp04_ParamLimits

0xbf12,	// (0x0006c0b3) camera2_autofocus_pane_g2_ParamLimits

0xbf12,	// (0x0006c0b3) camera2_autofocus_pane_g2

0xbf12,	// (0x0006c0b3) camera2_autofocus_pane_g3_ParamLimits

0xbf12,	// (0x0006c0b3) camera2_autofocus_pane_g3

0xbf12,	// (0x0006c0b3) camera2_autofocus_pane_g4_ParamLimits

0xbf12,	// (0x0006c0b3) camera2_autofocus_pane_g4

0xbf12,	// (0x0006c0b3) camera2_autofocus_pane_g5_ParamLimits

0xbf12,	// (0x0006c0b3) camera2_autofocus_pane_g5

0x0004,

0x01e3,	// (0x00060384) camera2_autofocus_pane_g_ParamLimits

0x01e3,	// (0x00060384) camera2_autofocus_pane_g

0x3b5d,	// (0x00063cfe) camera2_autofocus_pane_cp_g2

0x3b65,	// (0x00063d06) camera2_autofocus_pane_cp_g3

0x3b6d,	// (0x00063d0e) camera2_autofocus_pane_cp_g4

0x3b75,	// (0x00063d16) camera2_autofocus_pane_cp_g5

0x0004,

0xf561,	// (0x0006f702) camera2_autofocus_pane_cp_g

0xb7dd,	// (0x0006b97e) popup_dialer_spcha_window

0xb7dd,	// (0x0006b97e) bg_popup_sub_pane_cp07

0xb7dd,	// (0x0006b97e) list_spcha_pane

0xed04,	// (0x0006eea5) list_single_spcha_pane_ParamLimits

0xed04,	// (0x0006eea5) list_single_spcha_pane

0xb7dd,	// (0x0006b97e) list_highlight_pane_cp06

0xcc2e,	// (0x0006cdcf) list_single_spcha_pane_t1

0xdf23,	// (0x0006e0c4) popup_call2_audio_out_window_g4_ParamLimits

0xdf23,	// (0x0006e0c4) popup_call2_audio_out_window_g4

0x9ba1,	// (0x00069d42) main_imed2_pane

0x9d0f,	// (0x00069eb0) popup_imed_adjust2_window

0x34ee,	// (0x0006368f) popup_imed_trans_window_ParamLimits

0x34ee,	// (0x0006368f) popup_imed_trans_window

0xe6d6,	// (0x0006e877) popup_blid_sat_info2_window_t1

0xe6e4,	// (0x0006e885) popup_blid_sat_info2_window_t2

0x000a,

0x0178,	// (0x00060319) popup_blid_sat_info2_window_t

0x454c,	// (0x000646ed) aid_size_cell_colour_35

0x456c,	// (0x0006470d) aid_size_cell_colour_112

0x458c,	// (0x0006472d) aid_size_cell_effect

0xd1ca,	// (0x0006d36b) bg_tb_trans_pane_cp02

0x45ac,	// (0x0006474d) heading_imed_pane

0x45b8,	// (0x00064759) listscroll_imed_pane

0xed16,	// (0x0006eeb7) heading_imed_pane_g1

0xed1e,	// (0x0006eebf) heading_imed_pane_t1

0xed2c,	// (0x0006eecd) grid_imed_colour_35_pane_ParamLimits

0xed2c,	// (0x0006eecd) grid_imed_colour_35_pane

0x45c4,	// (0x00064765) grid_imed_effect_pane

0xed44,	// (0x0006eee5) list_imed_aspect_pane

0x45da,	// (0x0006477b) scroll_pane_cp027_ParamLimits

0x45da,	// (0x0006477b) scroll_pane_cp027

0x45eb,	// (0x0006478c) cell_imed_effect_pane_ParamLimits

0x45eb,	// (0x0006478c) cell_imed_effect_pane

0xed4c,	// (0x0006eeed) cell_imed_colour_pane_ParamLimits

0xed4c,	// (0x0006eeed) cell_imed_colour_pane

0xed8e,	// (0x0006ef2f) cell_imed_colour_pane_g1_ParamLimits

0xed8e,	// (0x0006ef2f) cell_imed_colour_pane_g1

0xed9f,	// (0x0006ef40) hgihlgiht_grid_pane_cp016_ParamLimits

0xed9f,	// (0x0006ef40) hgihlgiht_grid_pane_cp016

0x4612,	// (0x000647b3) cell_imed_effect_pane_g1

0x461a,	// (0x000647bb) grid_highlight_pane_cp017

0xedb0,	// (0x0006ef51) list_imed_single_pane_ParamLimits

0xedb0,	// (0x0006ef51) list_imed_single_pane

0xb7dd,	// (0x0006b97e) list_highlight_pane_cp07

0xedc5,	// (0x0006ef66) list_imed_aspect_pane_comp1_t1

0xd1ca,	// (0x0006d36b) bg_tb_trans_pane_cp05

0xede7,	// (0x0006ef88) popup_imed_adjust2_window_g1

0xee0e,	// (0x0006efaf) popup_imed_adjust2_window_t1

0xee26,	// (0x0006efc7) slider_imed_adjust_pane

0xee3a,	// (0x0006efdb) slider_imed_adjust_pane_g1

0xee4a,	// (0x0006efeb) slider_imed_adjust_pane_g2

0xee5a,	// (0x0006effb) slider_imed_adjust_pane_g3

0xee6b,	// (0x0006f00c) slider_imed_adjust_pane_g4

0x0003,

0xf5b5,	// (0x0006f756) slider_imed_adjust_pane_g

0x4623,	// (0x000647c4) aid_size_cell_clipart2

0x462f,	// (0x000647d0) grid_imed_clipart_pane

0xd25d,	// (0x0006d3fe) scroll_pane_cp031

0x4639,	// (0x000647da) cell_imed_clipart_pane_ParamLimits

0x4639,	// (0x000647da) cell_imed_clipart_pane

0x465b,	// (0x000647fc) cell_imed_clipart_pane_g1

0xb7dd,	// (0x0006b97e) grid_highlight_pane_cp014

0x42fe,	// (0x0006449f) main_clock2_pane_g1_ParamLimits

0x42fe,	// (0x0006449f) main_clock2_pane_g1

0x4442,	// (0x000645e3) aid_call2_pane_cp10

0x4454,	// (0x000645f5) aid_call_pane_cp10

0xcf2c,	// (0x0006d0cd) popup_clock_analogue_window_cp10_g1

0xcf2c,	// (0x0006d0cd) popup_clock_analogue_window_cp10_g2

0x4466,	// (0x00064607) popup_clock_analogue_window_cp10_g3

0x4466,	// (0x00064607) popup_clock_analogue_window_cp10_g4

0xcf2c,	// (0x0006d0cd) popup_clock_analogue_window_cp10_g5

0x0004,

0xf5aa,	// (0x0006f74b) popup_clock_analogue_window_cp10_g

0x447c,	// (0x0006461d) popup_clock_analogue_window_cp10_t1

0x44ad,	// (0x0006464e) clock_digital_number_pane_cp10_ParamLimits

0x44ad,	// (0x0006464e) clock_digital_number_pane_cp10

0x44c5,	// (0x00064666) clock_digital_number_pane_cp11_ParamLimits

0x44c5,	// (0x00064666) clock_digital_number_pane_cp11

0x44dd,	// (0x0006467e) clock_digital_number_pane_cp12_ParamLimits

0x44dd,	// (0x0006467e) clock_digital_number_pane_cp12

0x44f7,	// (0x00064698) clock_digital_number_pane_cp13_ParamLimits

0x44f7,	// (0x00064698) clock_digital_number_pane_cp13

0x4511,	// (0x000646b2) clock_digital_separator_pane_cp10_ParamLimits

0x4511,	// (0x000646b2) clock_digital_separator_pane_cp10

0x452b,	// (0x000646cc) popup_clock_digital_window_cp02_t1_ParamLimits

0x452b,	// (0x000646cc) popup_clock_digital_window_cp02_t1

0xbe73,	// (0x0006c014) clock_digital_number_pane_cp10_g1

0xbe73,	// (0x0006c014) clock_digital_number_pane_cp10_g2

0x0001,

0x02c5,	// (0x00060466) clock_digital_number_pane_cp10_g

0xbe73,	// (0x0006c014) clock_digital_separator_pane_cp10_g1

0xbe73,	// (0x0006c014) clock_digital_separator_pane_g2_cp10

0xd0b9,	// (0x0006d25a) navi_pane_vded_g4

0xd0c2,	// (0x0006d263) navi_pane_vded_g5

0xd0cb,	// (0x0006d26c) navi_pane_vded_t1

0x9ba1,	// (0x00069d42) main_vded_pane

0x4664,	// (0x00064805) main_vded_pane_g1

0x466e,	// (0x0006480f) main_vded_pane_g2

0x4678,	// (0x00064819) main_vded_pane_g3

0x0002,

0xf5be,	// (0x0006f75f) main_vded_pane_g

0x4682,	// (0x00064823) main_vded_pane_t1

0x4690,	// (0x00064831) main_vded_pane_t2

0x0001,

0xf5c5,	// (0x0006f766) main_vded_pane_t

0x469e,	// (0x0006483f) vded_slider_pane

0x46a6,	// (0x00064847) vded_video_pane

0xee99,	// (0x0006f03a) vded_video_pane_g1

0x46ae,	// (0x0006484f) vded_video_pane_g2

0xbf42,	// (0x0006c0e3) vded_video_pane_g3

0x0002,

0xf5ca,	// (0x0006f76b) vded_video_pane_g

0xeea3,	// (0x0006f044) vded_slider_pane_g1

0xe5d1,	// (0x0006e772) vded_slider_pane_g2

0xeeac,	// (0x0006f04d) vded_slider_pane_g3

0xeeb5,	// (0x0006f056) vded_slider_pane_g4

0xeebe,	// (0x0006f05f) vded_slider_pane_g5

0x0004,

0xf5d1,	// (0x0006f772) vded_slider_pane_g

0x9e0d,	// (0x00069fae) mup3_rocker_pane_ParamLimits

0x9e0d,	// (0x00069fae) mup3_rocker_pane

0xebea,	// (0x0006ed8b) mup3_control_keys_pane_g1

0xeec7,	// (0x0006f068) mup3_control_keys_pane_g2

0xebea,	// (0x0006ed8b) mup3_control_keys_pane_g3

0xeecf,	// (0x0006f070) mup3_control_keys_pane_g4

0x0003,

0x02e8,	// (0x00060489) mup3_control_keys_pane_g

0x0c5f,	// (0x00060e00) popup_toolbar2_fixed_window_cp01_ParamLimits

0x0c5f,	// (0x00060e00) popup_toolbar2_fixed_window_cp01

0x9e0d,	// (0x00069fae) popup_toolbar2_fixed_window_cp02_ParamLimits

0x9e0d,	// (0x00069fae) popup_toolbar2_fixed_window_cp02

0xd8ac,	// (0x0006da4d) popup_call2_audio_second_window_t4_ParamLimits

0xd8ac,	// (0x0006da4d) popup_call2_audio_second_window_t4

0xdde8,	// (0x0006df89) popup_call2_audio_first_window_t6_ParamLimits

0xdde8,	// (0x0006df89) popup_call2_audio_first_window_t6

0xe026,	// (0x0006e1c7) popup_call2_audio_out_window_t6_ParamLimits

0xe026,	// (0x0006e1c7) popup_call2_audio_out_window_t6

0x9ba1,	// (0x00069d42) main_vitu_pane

0xbe9d,	// (0x0006c03e) aid_size_cell_itu_ParamLimits

0xbe9d,	// (0x0006c03e) aid_size_cell_itu

0xbe9d,	// (0x0006c03e) bg_popup_window_pane_cp08_ParamLimits

0xbe9d,	// (0x0006c03e) bg_popup_window_pane_cp08

0xbe9d,	// (0x0006c03e) field_vitu_entry_pane_ParamLimits

0xbe9d,	// (0x0006c03e) field_vitu_entry_pane

0xbe9d,	// (0x0006c03e) grid_vitu_function_pane_ParamLimits

0xbe9d,	// (0x0006c03e) grid_vitu_function_pane

0xbe9d,	// (0x0006c03e) grid_vitu_itu_pane_ParamLimits

0xbe9d,	// (0x0006c03e) grid_vitu_itu_pane

0xbe9d,	// (0x0006c03e) cell_vitu_itu_pane_ParamLimits

0xbe9d,	// (0x0006c03e) cell_vitu_itu_pane

0xbe9d,	// (0x0006c03e) cell_vitu_function_pane_ParamLimits

0xbe9d,	// (0x0006c03e) cell_vitu_function_pane

0xbe9d,	// (0x0006c03e) bg_popup_sub_pane_cp08_ParamLimits

0xbe9d,	// (0x0006c03e) bg_popup_sub_pane_cp08

0xbf4c,	// (0x0006c0ed) field_vitu_entry_pane_t1_ParamLimits

0xbf4c,	// (0x0006c0ed) field_vitu_entry_pane_t1

0xee7c,	// (0x0006f01d) field_vitu_entry_pane_t2_ParamLimits

0xee7c,	// (0x0006f01d) field_vitu_entry_pane_t2

0x0001,

0xf5dc,	// (0x0006f77d) field_vitu_entry_pane_t_ParamLimits

0xf5dc,	// (0x0006f77d) field_vitu_entry_pane_t

0xe60c,	// (0x0006e7ad) bg_button_pane_cp05_ParamLimits

0xe60c,	// (0x0006e7ad) bg_button_pane_cp05

0xeed7,	// (0x0006f078) cell_vitu_itu_pane_g1

0xd1b6,	// (0x0006d357) cell_vitu_itu_pane_t1_ParamLimits

0xd1b6,	// (0x0006d357) cell_vitu_itu_pane_t1

0xd1b6,	// (0x0006d357) cell_vitu_itu_pane_t2_ParamLimits

0xd1b6,	// (0x0006d357) cell_vitu_itu_pane_t2

0x0002,

0xf5e1,	// (0x0006f782) cell_vitu_itu_pane_t_ParamLimits

0xf5e1,	// (0x0006f782) cell_vitu_itu_pane_t

0xb7dd,	// (0x0006b97e) bg_button_pane_cp07

0xbf42,	// (0x0006c0e3) cell_vitu_function_pane_g1

0x9bab,	// (0x00069d4c) main_calc_pane_g1

0x0aed,	// (0x00060c8e) aid_visual_content_pane

0x9ba1,	// (0x00069d42) main_vradio_pane

0xbf04,	// (0x0006c0a5) main_vradio_pane_g1_ParamLimits

0xbf04,	// (0x0006c0a5) main_vradio_pane_g1

0xbf12,	// (0x0006c0b3) main_vradio_pane_g2_ParamLimits

0xbf12,	// (0x0006c0b3) main_vradio_pane_g2

0x0001,

0x0784,	// (0x00060925) main_vradio_pane_g_ParamLimits

0x0784,	// (0x00060925) main_vradio_pane_g

0xbf4c,	// (0x0006c0ed) main_vradio_pane_t1_ParamLimits

0xbf4c,	// (0x0006c0ed) main_vradio_pane_t1

0xbf4c,	// (0x0006c0ed) main_vradio_pane_t2_ParamLimits

0xbf4c,	// (0x0006c0ed) main_vradio_pane_t2

0xbf60,	// (0x0006c101) main_vradio_pane_t3_ParamLimits

0xbf60,	// (0x0006c101) main_vradio_pane_t3

0x0002,

0xf5e8,	// (0x0006f789) main_vradio_pane_t_ParamLimits

0xf5e8,	// (0x0006f789) main_vradio_pane_t

0xbe9d,	// (0x0006c03e) vradio_rocker_control_pane_ParamLimits

0xbe9d,	// (0x0006c03e) vradio_rocker_control_pane

0xbe9d,	// (0x0006c03e) vradio_station_info_pane_ParamLimits

0xbe9d,	// (0x0006c03e) vradio_station_info_pane

0xbe9d,	// (0x0006c03e) vradio_frequency_info_pane_ParamLimits

0xbe9d,	// (0x0006c03e) vradio_frequency_info_pane

0xbf42,	// (0x0006c0e3) vradio_station_info_pane_g1

0xd1b6,	// (0x0006d357) vradio_station_info_pane_t1_ParamLimits

0xd1b6,	// (0x0006d357) vradio_station_info_pane_t1

0xbf60,	// (0x0006c101) vradio_station_info_pane_t2_ParamLimits

0xbf60,	// (0x0006c101) vradio_station_info_pane_t2

0x0001,

0xf5ef,	// (0x0006f790) vradio_station_info_pane_t_ParamLimits

0xf5ef,	// (0x0006f790) vradio_station_info_pane_t

0xb7dd,	// (0x0006b97e) vradio_tuning_pane

0x46b7,	// (0x00064858) vradio_rocker_control_pane_g1

0xeef3,	// (0x0006f094) vradio_rocker_control_pane_g2

0x46c1,	// (0x00064862) vradio_rocker_control_pane_g3

0x46cb,	// (0x0006486c) vradio_rocker_control_pane_g4

0x46d5,	// (0x00064876) vradio_rocker_control_pane_g5

0x0004,

0xf5f4,	// (0x0006f795) vradio_rocker_control_pane_g

0xbf42,	// (0x0006c0e3) vradio_frequency_info_pane_g1

0xbf4c,	// (0x0006c0ed) vradio_frequency_info_pane_t1_ParamLimits

0xbf4c,	// (0x0006c0ed) vradio_frequency_info_pane_t1

0x46df,	// (0x00064880) vradio_tuning_pane_g1

0x46ea,	// (0x0006488b) vradio_tuning_pane_t1

0x9b52,	// (0x00069cf3) area_side_right_pane_ParamLimits

0x9b52,	// (0x00069cf3) area_side_right_pane

0xe408,	// (0x0006e5a9) status_small_pane_g1

0xe410,	// (0x0006e5b1) status_small_pane_g2

0xe419,	// (0x0006e5ba) status_small_pane_g3

0xe422,	// (0x0006e5c3) status_small_pane_g4

0x0003,

0x00da,	// (0x0006027b) status_small_pane_g

0xe42b,	// (0x0006e5cc) status_small_pane_t1

0x9ba1,	// (0x00069d42) main_video3_pane

0xb7dd,	// (0x0006b97e) cams_zoom_vslider_pane

0xeefb,	// (0x0006f09c) image3_wide_pane_ParamLimits

0xeefb,	// (0x0006f09c) image3_wide_pane

0xb7dd,	// (0x0006b97e) image3_wide_small_pane

0xef15,	// (0x0006f0b6) main_video3_pane_g1_ParamLimits

0xef15,	// (0x0006f0b6) main_video3_pane_g1

0xef15,	// (0x0006f0b6) main_video3_pane_g2_ParamLimits

0xef15,	// (0x0006f0b6) main_video3_pane_g2

0x0001,

0x0314,	// (0x000604b5) main_video3_pane_g_ParamLimits

0x0314,	// (0x000604b5) main_video3_pane_g

0xef33,	// (0x0006f0d4) main_video3_pane_t1_ParamLimits

0xef33,	// (0x0006f0d4) main_video3_pane_t1

0xef33,	// (0x0006f0d4) main_video3_pane_t2_ParamLimits

0xef33,	// (0x0006f0d4) main_video3_pane_t2

0xef33,	// (0x0006f0d4) main_video3_pane_t3_ParamLimits

0xef33,	// (0x0006f0d4) main_video3_pane_t3

0x0002,

0x0319,	// (0x000604ba) main_video3_pane_t_ParamLimits

0x0319,	// (0x000604ba) main_video3_pane_t

0xbf42,	// (0x0006c0e3) cams_zoom_vslider_pane_g1

0xbf42,	// (0x0006c0e3) cams_zoom_vslider_pane_g2

0x0001,

0xf08c,	// (0x0006f22d) cams_zoom_vslider_pane_g

0xb7dd,	// (0x0006b97e) small_slider_vertical_pane

0xbf42,	// (0x0006c0e3) small_slider_vertical_pane_g1

0xbf42,	// (0x0006c0e3) small_slider_vertical_pane_g2

0xef5a,	// (0x0006f0fb) small_slider_vertical_pane_g3

0x0002,

0x0320,	// (0x000604c1) small_slider_vertical_pane_g

0x9ba1,	// (0x00069d42) main_hwr_training_pane

0xef63,	// (0x0006f104) hwr_training_instruct_pane_ParamLimits

0xef63,	// (0x0006f104) hwr_training_instruct_pane

0x46f9,	// (0x0006489a) hwr_training_navi_pane_ParamLimits

0x46f9,	// (0x0006489a) hwr_training_navi_pane

0x4718,	// (0x000648b9) hwr_training_write_pane_ParamLimits

0x4718,	// (0x000648b9) hwr_training_write_pane

0xb7dd,	// (0x0006b97e) bg_frame_shadow_pane

0xef9a,	// (0x0006f13b) hwr_training_write_pane_g1

0xefa2,	// (0x0006f143) hwr_training_write_pane_g2

0xefaa,	// (0x0006f14b) hwr_training_write_pane_g3

0xefb2,	// (0x0006f153) hwr_training_write_pane_g4

0xefba,	// (0x0006f15b) hwr_training_write_pane_g5

0xefc2,	// (0x0006f163) hwr_training_write_pane_g6

0xefca,	// (0x0006f16b) hwr_training_write_pane_g7

0x0006,

0x0327,	// (0x000604c8) hwr_training_write_pane_g

0x9e19,	// (0x00069fba) hwr_training_navi_pane_g1_ParamLimits

0x9e19,	// (0x00069fba) hwr_training_navi_pane_g1

0x9e2b,	// (0x00069fcc) hwr_training_navi_pane_g2_ParamLimits

0x9e2b,	// (0x00069fcc) hwr_training_navi_pane_g2

0x9e3d,	// (0x00069fde) hwr_training_navi_pane_g3_ParamLimits

0x9e3d,	// (0x00069fde) hwr_training_navi_pane_g3

0x9e4d,	// (0x00069fee) hwr_training_navi_pane_g4_ParamLimits

0x9e4d,	// (0x00069fee) hwr_training_navi_pane_g4

0x0004,

0xf5ff,	// (0x0006f7a0) hwr_training_navi_pane_g_ParamLimits

0xf5ff,	// (0x0006f7a0) hwr_training_navi_pane_g

0x9e5a,	// (0x00069ffb) hwr_training_navi_pane_t1

0x4762,	// (0x00064903) list_single_hwr_training_instruct_pane_ParamLimits

0x4762,	// (0x00064903) list_single_hwr_training_instruct_pane

0xefd2,	// (0x0006f173) list_single_hwr_training_instruct_pane_t1

0xe7d7,	// (0x0006e978) bg_frame_shadow_pane_g1

0xefe1,	// (0x0006f182) bg_frame_shadow_pane_g2

0xefe9,	// (0x0006f18a) bg_frame_shadow_pane_g3

0xeff1,	// (0x0006f192) bg_frame_shadow_pane_g4

0xeff9,	// (0x0006f19a) bg_frame_shadow_pane_g5

0xf001,	// (0x0006f1a2) bg_frame_shadow_pane_g6

0xf009,	// (0x0006f1aa) bg_frame_shadow_pane_g7

0xc058,	// (0x0006c1f9) bg_frame_shadow_pane_g8

0x0007,

0xf60a,	// (0x0006f7ab) bg_frame_shadow_pane_g

0x9ba1,	// (0x00069d42) main_video_tele_dialer_pane

0x4778,	// (0x00064919) aid_size_cell_video_keypad_ParamLimits

0x4778,	// (0x00064919) aid_size_cell_video_keypad

0x4792,	// (0x00064933) grid_video_dialer_keypad_pane_ParamLimits

0x4792,	// (0x00064933) grid_video_dialer_keypad_pane

0x47e0,	// (0x00064981) video_down_pane_cp_ParamLimits

0x47e0,	// (0x00064981) video_down_pane_cp

0x4812,	// (0x000649b3) cell_video_dialer_keypad_pane_ParamLimits

0x4812,	// (0x000649b3) cell_video_dialer_keypad_pane

0xf011,	// (0x0006f1b2) bg_button_pane_cp08_ParamLimits

0xf011,	// (0x0006f1b2) bg_button_pane_cp08

0x4834,	// (0x000649d5) cell_video_dialer_keypad_pane_g1_ParamLimits

0x4834,	// (0x000649d5) cell_video_dialer_keypad_pane_g1

0x9e0d,	// (0x00069fae) mup3_rocker2_pane_ParamLimits

0x9e0d,	// (0x00069fae) mup3_rocker2_pane

0xbf42,	// (0x0006c0e3) mup3_rocker2_pane_g1

0x33dd,	// (0x0006357e) main_dialer2_pane

0x9ba1,	// (0x00069d42) main_mp4_pane

0x9e86,	// (0x0006a027) main_mp4_pane_g1_ParamLimits

0x9e86,	// (0x0006a027) main_mp4_pane_g1

0x9e86,	// (0x0006a027) main_mp4_pane_g2_ParamLimits

0x9e86,	// (0x0006a027) main_mp4_pane_g2

0x486e,	// (0x00064a0f) main_mp4_pane_g3_ParamLimits

0x486e,	// (0x00064a0f) main_mp4_pane_g3

0x9ea4,	// (0x0006a045) main_mp4_pane_g4_ParamLimits

0x9ea4,	// (0x0006a045) main_mp4_pane_g4

0x9ecc,	// (0x0006a06d) main_mp4_pane_g5_ParamLimits

0x9ecc,	// (0x0006a06d) main_mp4_pane_g5

0x0007,

0xf62a,	// (0x0006f7cb) main_mp4_pane_g_ParamLimits

0xf62a,	// (0x0006f7cb) main_mp4_pane_g

0x9f34,	// (0x0006a0d5) main_mp4_pane_t1_ParamLimits

0x9f34,	// (0x0006a0d5) main_mp4_pane_t1

0x9f96,	// (0x0006a137) main_mp4_pane_t2_ParamLimits

0x9f96,	// (0x0006a137) main_mp4_pane_t2

0x9ffa,	// (0x0006a19b) main_mp4_pane_t3_ParamLimits

0x9ffa,	// (0x0006a19b) main_mp4_pane_t3

0xa058,	// (0x0006a1f9) main_mp4_pane_t4_ParamLimits

0xa058,	// (0x0006a1f9) main_mp4_pane_t4

0x0003,

0xf63b,	// (0x0006f7dc) main_mp4_pane_t_ParamLimits

0xf63b,	// (0x0006f7dc) main_mp4_pane_t

0xa0b6,	// (0x0006a257) mp4_progress_pane_ParamLimits

0xa0b6,	// (0x0006a257) mp4_progress_pane

0xa0ea,	// (0x0006a28b) mp4_rocker_pane_ParamLimits

0xa0ea,	// (0x0006a28b) mp4_rocker_pane

0x48a6,	// (0x00064a47) mp4_progress_pane_t1

0x48c5,	// (0x00064a66) mp4_progress_pane_t2

0x0001,

0xf644,	// (0x0006f7e5) mp4_progress_pane_t

0x48e4,	// (0x00064a85) mup_progress_pane_cp04

0x9df7,	// (0x00069f98) mp4_rocker_pane_g1

0x9b93,	// (0x00069d34) aid_cell_size_keypad2_ParamLimits

0x9b93,	// (0x00069d34) aid_cell_size_keypad2

0x9b93,	// (0x00069d34) dialer2_ne_pane_ParamLimits

0x9b93,	// (0x00069d34) dialer2_ne_pane

0x9b93,	// (0x00069d34) grid_dialer2_keypad_pane_ParamLimits

0x9b93,	// (0x00069d34) grid_dialer2_keypad_pane

0xe60c,	// (0x0006e7ad) bg_popup_call_pane_cp07_ParamLimits

0xe60c,	// (0x0006e7ad) bg_popup_call_pane_cp07

0x48f7,	// (0x00064a98) dialer2_ne_pane_t1_ParamLimits

0x48f7,	// (0x00064a98) dialer2_ne_pane_t1

0x4948,	// (0x00064ae9) cell_dialer2_keypad_pane_ParamLimits

0x4948,	// (0x00064ae9) cell_dialer2_keypad_pane

0xe60c,	// (0x0006e7ad) bg_button_pane_pane_cp04_ParamLimits

0xe60c,	// (0x0006e7ad) bg_button_pane_pane_cp04

0xbf04,	// (0x0006c0a5) cell_dialer2_keypad_pane_g1_ParamLimits

0xbf04,	// (0x0006c0a5) cell_dialer2_keypad_pane_g1

0x16ff,	// (0x000618a0) aid_placing_vt_set_content_ParamLimits

0x16ff,	// (0x000618a0) aid_placing_vt_set_content

0x1727,	// (0x000618c8) aid_placing_vt_set_title_ParamLimits

0x1727,	// (0x000618c8) aid_placing_vt_set_title

0x9ba1,	// (0x00069d42) main_image3_pane

0x49d9,	// (0x00064b7a) area_side_right_pane_cp01_ParamLimits

0x49d9,	// (0x00064b7a) area_side_right_pane_cp01

0x49f0,	// (0x00064b91) main_image3_pane_g1_ParamLimits

0x49f0,	// (0x00064b91) main_image3_pane_g1

0x49fe,	// (0x00064b9f) main_image3_pane_g2_ParamLimits

0x49fe,	// (0x00064b9f) main_image3_pane_g2

0x4a26,	// (0x00064bc7) main_image3_pane_g3_ParamLimits

0x4a26,	// (0x00064bc7) main_image3_pane_g3

0x4a50,	// (0x00064bf1) main_image3_pane_g4_ParamLimits

0x4a50,	// (0x00064bf1) main_image3_pane_g4

0x0003,

0xf653,	// (0x0006f7f4) main_image3_pane_g_ParamLimits

0xf653,	// (0x0006f7f4) main_image3_pane_g

0x4a7a,	// (0x00064c1b) main_image3_pane_t1_ParamLimits

0x4a7a,	// (0x00064c1b) main_image3_pane_t1

0x4ad2,	// (0x00064c73) main_image3_pane_t2_ParamLimits

0x4ad2,	// (0x00064c73) main_image3_pane_t2

0x4b24,	// (0x00064cc5) main_image3_pane_t3_ParamLimits

0x4b24,	// (0x00064cc5) main_image3_pane_t3

0x0003,

0xf65c,	// (0x0006f7fd) main_image3_pane_t_ParamLimits

0xf65c,	// (0x0006f7fd) main_image3_pane_t

0xbe9d,	// (0x0006c03e) grid_sctrl_middle_pane_cp01_ParamLimits

0xbe9d,	// (0x0006c03e) grid_sctrl_middle_pane_cp01

0x4bac,	// (0x00064d4d) cell_sctrl_middle_pane_cp01_ParamLimits

0x4bac,	// (0x00064d4d) cell_sctrl_middle_pane_cp01

0x4bc9,	// (0x00064d6a) cell_sctrl_middle_pane_cp01_g1_ParamLimits

0x4bc9,	// (0x00064d6a) cell_sctrl_middle_pane_cp01_g1

0x9ba1,	// (0x00069d42) main_call4_pane

0x4bdf,	// (0x00064d80) aid_size_button_call4_ParamLimits

0x4bdf,	// (0x00064d80) aid_size_button_call4

0x4c12,	// (0x00064db3) call4_windows_pane_ParamLimits

0x4c12,	// (0x00064db3) call4_windows_pane

0x4c31,	// (0x00064dd2) grid_call4_button_pane_ParamLimits

0x4c31,	// (0x00064dd2) grid_call4_button_pane

0x4c64,	// (0x00064e05) call4_windows_conf_pane

0x4c79,	// (0x00064e1a) popup_call4_audio_first_window_ParamLimits

0x4c79,	// (0x00064e1a) popup_call4_audio_first_window

0x4cc9,	// (0x00064e6a) popup_call4_audio_second_window_ParamLimits

0x4cc9,	// (0x00064e6a) popup_call4_audio_second_window

0x4ce0,	// (0x00064e81) popup_call4_audio_wait_window_ParamLimits

0x4ce0,	// (0x00064e81) popup_call4_audio_wait_window

0x4cee,	// (0x00064e8f) cell_call4_button_pane_ParamLimits

0x4cee,	// (0x00064e8f) cell_call4_button_pane

0x4d13,	// (0x00064eb4) bg_button_pane_cp09_ParamLimits

0x4d13,	// (0x00064eb4) bg_button_pane_cp09

0x4d1f,	// (0x00064ec0) cell_call4_button_pane_g1_ParamLimits

0x4d1f,	// (0x00064ec0) cell_call4_button_pane_g1

0x4d45,	// (0x00064ee6) cell_call4_button_pane_t1_ParamLimits

0x4d45,	// (0x00064ee6) cell_call4_button_pane_t1

0x4d77,	// (0x00064f18) popup_call4_audio_conf_window_ParamLimits

0x4d77,	// (0x00064f18) popup_call4_audio_conf_window

0x41d8,	// (0x00064379) mup3_progress_pane_t1_ParamLimits

0x41f7,	// (0x00064398) mup3_progress_pane_t2_ParamLimits

0xebb5,	// (0x0006ed56) mup3_progress_pane_t3_ParamLimits

0xf58a,	// (0x0006f72b) mup3_progress_pane_t_ParamLimits

0xebd2,	// (0x0006ed73) mup_progress_pane_cp03_ParamLimits

0xebea,	// (0x0006ed8b) mup3_control_keys_pane_g4_copy1

0xa0ea,	// (0x0006a28b) mp4_rocker2_pane_ParamLimits

0xa0ea,	// (0x0006a28b) mp4_rocker2_pane

0xeec7,	// (0x0006f068) mp4_rocker2_pane_g1

0xeec7,	// (0x0006f068) mp4_rocker2_pane_g2

0xeec7,	// (0x0006f068) mp4_rocker2_pane_g3

0xeec7,	// (0x0006f068) mp4_rocker2_pane_g4

0xeec7,	// (0x0006f068) mp4_rocker2_pane_g5

0x0004,

0x039c,	// (0x0006053d) mp4_rocker2_pane_g

0x9ba1,	// (0x00069d42) main_camera4_pane

0x9ba1,	// (0x00069d42) main_video4_pane

0x47ae,	// (0x0006494f) main_video_tele_dialer_pane_t1_ParamLimits

0x47ae,	// (0x0006494f) main_video_tele_dialer_pane_t1

0x47c7,	// (0x00064968) main_video_tele_dialer_pane_t2_ParamLimits

0x47c7,	// (0x00064968) main_video_tele_dialer_pane_t2

0x0001,

0xf61b,	// (0x0006f7bc) main_video_tele_dialer_pane_t_ParamLimits

0xf61b,	// (0x0006f7bc) main_video_tele_dialer_pane_t

0x4da3,	// (0x00064f44) cam4_autofocus_pane_ParamLimits

0x4da3,	// (0x00064f44) cam4_autofocus_pane

0x4db9,	// (0x00064f5a) cam4_image_uncrop_pane_ParamLimits

0x4db9,	// (0x00064f5a) cam4_image_uncrop_pane

0x4dd3,	// (0x00064f74) cam4_indicators_pane_ParamLimits

0x4dd3,	// (0x00064f74) cam4_indicators_pane

0x4dfe,	// (0x00064f9f) main_camera4_pane_g1_ParamLimits

0x4dfe,	// (0x00064f9f) main_camera4_pane_g1

0x4e10,	// (0x00064fb1) main_camera4_pane_g2_ParamLimits

0x4e10,	// (0x00064fb1) main_camera4_pane_g2

0x4e23,	// (0x00064fc4) main_camera4_pane_g3_ParamLimits

0x4e23,	// (0x00064fc4) main_camera4_pane_g3

0x4e36,	// (0x00064fd7) main_camera4_pane_g4_ParamLimits

0x4e36,	// (0x00064fd7) main_camera4_pane_g4

0x4e49,	// (0x00064fea) main_camera4_pane_g5_ParamLimits

0x4e49,	// (0x00064fea) main_camera4_pane_g5

0x0005,

0xf665,	// (0x0006f806) main_camera4_pane_g_ParamLimits

0xf665,	// (0x0006f806) main_camera4_pane_g

0x4e6d,	// (0x0006500e) main_camera4_pane_t1_ParamLimits

0x4e6d,	// (0x0006500e) main_camera4_pane_t1

0xa190,	// (0x0006a331) bg_tb_trans_pane_cp06

0xa1a6,	// (0x0006a347) cam4_indicators_pane_g1

0xa1b7,	// (0x0006a358) cam4_indicators_pane_g2

0x0002,

0xf680,	// (0x0006f821) cam4_indicators_pane_g

0xa1cf,	// (0x0006a370) cam4_indicators_pane_t1

0x4ed1,	// (0x00065072) main_video4_pane_g1_ParamLimits

0x4ed1,	// (0x00065072) main_video4_pane_g1

0x4ee0,	// (0x00065081) main_video4_pane_g2_ParamLimits

0x4ee0,	// (0x00065081) main_video4_pane_g2

0x4eef,	// (0x00065090) main_video4_pane_g3_ParamLimits

0x4eef,	// (0x00065090) main_video4_pane_g3

0x4efe,	// (0x0006509f) main_video4_pane_g4_ParamLimits

0x4efe,	// (0x0006509f) main_video4_pane_g4

0x0004,

0xf687,	// (0x0006f828) main_video4_pane_g_ParamLimits

0xf687,	// (0x0006f828) main_video4_pane_g

0x4f1c,	// (0x000650bd) vid4_indicators_pane_ParamLimits

0x4f1c,	// (0x000650bd) vid4_indicators_pane

0x4f4a,	// (0x000650eb) video4_image_uncrop_cif_pane_ParamLimits

0x4f4a,	// (0x000650eb) video4_image_uncrop_cif_pane

0x4f64,	// (0x00065105) video4_image_uncrop_nhd_pane_ParamLimits

0x4f64,	// (0x00065105) video4_image_uncrop_nhd_pane

0x4db9,	// (0x00064f5a) video4_image_uncrop_vga_pane_ParamLimits

0x4db9,	// (0x00064f5a) video4_image_uncrop_vga_pane

0x9b93,	// (0x00069d34) bg_tb_trans_pane_cp07

0xa1f9,	// (0x0006a39a) vid4_indicators_pane_g1

0xa20d,	// (0x0006a3ae) vid4_indicators_pane_g2

0xa221,	// (0x0006a3c2) vid4_indicators_pane_g3

0x0004,

0xf692,	// (0x0006f833) vid4_indicators_pane_g

0xa24e,	// (0x0006a3ef) vid4_indicators_pane_t1

0x4f78,	// (0x00065119) cam4_autofocus_pane_g1

0x4f80,	// (0x00065121) cam4_autofocus_pane_g2

0x4f88,	// (0x00065129) cam4_autofocus_pane_g3

0x0002,

0xf69d,	// (0x0006f83e) cam4_autofocus_pane_g

0x4f90,	// (0x00065131) cam4_autofocus_pane_g3_copy1

0x47f6,	// (0x00064997) video_down_pane_cp_t1

0x4804,	// (0x000649a5) video_down_pane_cp_t2

0x0001,

0xf620,	// (0x0006f7c1) video_down_pane_cp_t

0x9b93,	// (0x00069d34) popup_vitu2_window_ParamLimits

0x9b93,	// (0x00069d34) popup_vitu2_window

0x4f98,	// (0x00065139) aid_size_cell2_itu2_ParamLimits

0x4f98,	// (0x00065139) aid_size_cell2_itu2

0x4fbe,	// (0x0006515f) aid_size_cell_itu2_ParamLimits

0x4fbe,	// (0x0006515f) aid_size_cell_itu2

0x501a,	// (0x000651bb) bg_popup_window_pane_cp09_ParamLimits

0x501a,	// (0x000651bb) bg_popup_window_pane_cp09

0x5028,	// (0x000651c9) field_vitu2_entry_pane_ParamLimits

0x5028,	// (0x000651c9) field_vitu2_entry_pane

0x504e,	// (0x000651ef) grid_vitu2_function_pane_ParamLimits

0x504e,	// (0x000651ef) grid_vitu2_function_pane

0x509b,	// (0x0006523c) grid_vitu2_itu_pane_ParamLimits

0x509b,	// (0x0006523c) grid_vitu2_itu_pane

0x512d,	// (0x000652ce) cell_vitu2_itu_pane_ParamLimits

0x512d,	// (0x000652ce) cell_vitu2_itu_pane

0x5159,	// (0x000652fa) cell_vitu2_function_pane_ParamLimits

0x5159,	// (0x000652fa) cell_vitu2_function_pane

0x5198,	// (0x00065339) bg_popup_call_pane_cp08_ParamLimits

0x5198,	// (0x00065339) bg_popup_call_pane_cp08

0x51af,	// (0x00065350) field_vitu2_entry_pane_g1

0x51bb,	// (0x0006535c) field_vitu2_entry_pane_g2

0x0002,

0xf6a4,	// (0x0006f845) field_vitu2_entry_pane_g

0x51c7,	// (0x00065368) field_vitu2_entry_pane_t1_ParamLimits

0x51c7,	// (0x00065368) field_vitu2_entry_pane_t1

0x51f7,	// (0x00065398) field_vitu2_entry_pane_t2_ParamLimits

0x51f7,	// (0x00065398) field_vitu2_entry_pane_t2

0x0001,

0xf6ab,	// (0x0006f84c) field_vitu2_entry_pane_t_ParamLimits

0xf6ab,	// (0x0006f84c) field_vitu2_entry_pane_t

0x521c,	// (0x000653bd) bg_button_pane_cp010_ParamLimits

0x521c,	// (0x000653bd) bg_button_pane_cp010

0x522a,	// (0x000653cb) cell_vitu2_itu_pane_g1

0x5250,	// (0x000653f1) cell_vitu2_itu_pane_t1_ParamLimits

0x5250,	// (0x000653f1) cell_vitu2_itu_pane_t1

0x52ae,	// (0x0006544f) cell_vitu2_itu_pane_t2_ParamLimits

0x52ae,	// (0x0006544f) cell_vitu2_itu_pane_t2

0x0002,

0xf6b5,	// (0x0006f856) cell_vitu2_itu_pane_t_ParamLimits

0xf6b5,	// (0x0006f856) cell_vitu2_itu_pane_t

0x9b93,	// (0x00069d34) bg_button_pane_cp011

0x539a,	// (0x0006553b) cell_vitu2_function_pane_g1

0x9ba1,	// (0x00069d42) main_myfav_hc_pane

0x4b74,	// (0x00064d15) popup_image3_note_pane_ParamLimits

0x4b74,	// (0x00064d15) popup_image3_note_pane

0x4b90,	// (0x00064d31) popup_image3_tool_bar_pane_ParamLimits

0x4b90,	// (0x00064d31) popup_image3_tool_bar_pane

0x533c,	// (0x000654dd) cell_vitu2_itu_pane_t3_ParamLimits

0x533c,	// (0x000654dd) cell_vitu2_itu_pane_t3

0xb7dd,	// (0x0006b97e) bg_popup_trans_pane

0x53ad,	// (0x0006554e) grid_image3_tool_bar_pane

0x53b7,	// (0x00065558) bg_popup_trans_pane_g1

0xc952,	// (0x0006caf3) bg_popup_trans_pane_g2

0x53bf,	// (0x00065560) bg_popup_trans_pane_g3

0x53c7,	// (0x00065568) bg_popup_trans_pane_g4

0x53cf,	// (0x00065570) bg_popup_trans_pane_g5

0x53d7,	// (0x00065578) bg_popup_trans_pane_g6

0x53df,	// (0x00065580) bg_popup_trans_pane_g7

0x53e7,	// (0x00065588) bg_popup_trans_pane_g8

0xc932,	// (0x0006cad3) bg_popup_trans_pane_g9

0x0008,

0xf6bc,	// (0x0006f85d) bg_popup_trans_pane_g

0x53ef,	// (0x00065590) cell_image3_tool_bar_pane_ParamLimits

0x53ef,	// (0x00065590) cell_image3_tool_bar_pane

0xbf42,	// (0x0006c0e3) cell_image3_tool_bar_pane_g1

0xb7dd,	// (0x0006b97e) bg_popup_trans_pane_cp1

0x5403,	// (0x000655a4) popup_image3_note_pane_t1

0x5411,	// (0x000655b2) popup_image3_note_pane_t2

0x541f,	// (0x000655c0) popup_image3_note_pane_t3

0x0002,

0xf6cf,	// (0x0006f870) popup_image3_note_pane_t

0x542d,	// (0x000655ce) popup_image3_note_pane_t3_copy1

0x543b,	// (0x000655dc) bg_myfav_hc_instruction_pane_ParamLimits

0x543b,	// (0x000655dc) bg_myfav_hc_instruction_pane

0x544f,	// (0x000655f0) cell_myfav_contact_pane_ParamLimits

0x544f,	// (0x000655f0) cell_myfav_contact_pane

0x546d,	// (0x0006560e) cell_myfav_contact_pane_cp1_ParamLimits

0x546d,	// (0x0006560e) cell_myfav_contact_pane_cp1

0x5485,	// (0x00065626) cell_myfav_contact_pane_cp2_ParamLimits

0x5485,	// (0x00065626) cell_myfav_contact_pane_cp2

0x549d,	// (0x0006563e) cell_myfav_contact_pane_cp3_ParamLimits

0x549d,	// (0x0006563e) cell_myfav_contact_pane_cp3

0x54b4,	// (0x00065655) cell_myfav_contact_pane_cp4_ParamLimits

0x54b4,	// (0x00065655) cell_myfav_contact_pane_cp4

0x54cc,	// (0x0006566d) cell_myfav_contact_pane_cp5_ParamLimits

0x54cc,	// (0x0006566d) cell_myfav_contact_pane_cp5

0x54e0,	// (0x00065681) cell_myfav_contact_pane_cp6_ParamLimits

0x54e0,	// (0x00065681) cell_myfav_contact_pane_cp6

0x54f6,	// (0x00065697) cell_myfav_contact_pane_cp7_ParamLimits

0x54f6,	// (0x00065697) cell_myfav_contact_pane_cp7

0x5510,	// (0x000656b1) listscroll_gen_pane_cp05

0x5519,	// (0x000656ba) main_myfav_hc_pane_g1_ParamLimits

0x5519,	// (0x000656ba) main_myfav_hc_pane_g1

0x5533,	// (0x000656d4) main_myfav_hc_pane_g2_ParamLimits

0x5533,	// (0x000656d4) main_myfav_hc_pane_g2

0x0002,

0xf6d6,	// (0x0006f877) main_myfav_hc_pane_g_ParamLimits

0xf6d6,	// (0x0006f877) main_myfav_hc_pane_g

0x5565,	// (0x00065706) main_myfav_hc_pane_t1_ParamLimits

0x5565,	// (0x00065706) main_myfav_hc_pane_t1

0x557c,	// (0x0006571d) main_myfav_hc_pane_t2_ParamLimits

0x557c,	// (0x0006571d) main_myfav_hc_pane_t2

0x558e,	// (0x0006572f) main_myfav_hc_pane_t3_ParamLimits

0x558e,	// (0x0006572f) main_myfav_hc_pane_t3

0x55a0,	// (0x00065741) main_myfav_hc_pane_t4_ParamLimits

0x55a0,	// (0x00065741) main_myfav_hc_pane_t4

0x0004,

0xf6dd,	// (0x0006f87e) main_myfav_hc_pane_t_ParamLimits

0xf6dd,	// (0x0006f87e) main_myfav_hc_pane_t

0xbf42,	// (0x0006c0e3) bg_myfav_hc_instruction_pane_g1

0x55c8,	// (0x00065769) cell_myfav_contact_pane_g1_ParamLimits

0x55c8,	// (0x00065769) cell_myfav_contact_pane_g1

0x55c8,	// (0x00065769) cell_myfav_contact_pane_g2_ParamLimits

0x55c8,	// (0x00065769) cell_myfav_contact_pane_g2

0x55d4,	// (0x00065775) cell_myfav_contact_pane_g3_ParamLimits

0x55d4,	// (0x00065775) cell_myfav_contact_pane_g3

0xbf12,	// (0x0006c0b3) cell_myfav_contact_pane_g4_ParamLimits

0xbf12,	// (0x0006c0b3) cell_myfav_contact_pane_g4

0x55e1,	// (0x00065782) cell_myfav_contact_pane_g5_ParamLimits

0x55e1,	// (0x00065782) cell_myfav_contact_pane_g5

0x0004,

0xf6e8,	// (0x0006f889) cell_myfav_contact_pane_g_ParamLimits

0xf6e8,	// (0x0006f889) cell_myfav_contact_pane_g

0x554d,	// (0x000656ee) main_myfav_hc_pane_g3_ParamLimits

0x554d,	// (0x000656ee) main_myfav_hc_pane_g3

0x0a4b,	// (0x00060bec) popup_adpt_find_window

0x55ed,	// (0x0006578e) afind_page_pane_ParamLimits

0x55ed,	// (0x0006578e) afind_page_pane

0x5603,	// (0x000657a4) aid_size_cell_afind_ParamLimits

0x5603,	// (0x000657a4) aid_size_cell_afind

0x5621,	// (0x000657c2) bg_popup_sub_pane_cp09_ParamLimits

0x5621,	// (0x000657c2) bg_popup_sub_pane_cp09

0x5633,	// (0x000657d4) find_pane_cp01_ParamLimits

0x5633,	// (0x000657d4) find_pane_cp01

0x5647,	// (0x000657e8) grid_afind_control_pane_ParamLimits

0x5647,	// (0x000657e8) grid_afind_control_pane

0x565b,	// (0x000657fc) grid_afind_pane_ParamLimits

0x565b,	// (0x000657fc) grid_afind_pane

0x567d,	// (0x0006581e) cell_afind_pane_ParamLimits

0x567d,	// (0x0006581e) cell_afind_pane

0xbf42,	// (0x0006c0e3) afind_page_pane_g1

0x56e4,	// (0x00065885) afind_page_pane_g2

0x56ec,	// (0x0006588d) afind_page_pane_g3

0x0002,

0xf6f3,	// (0x0006f894) afind_page_pane_g

0x56f4,	// (0x00065895) afind_page_pane_t1

0x5714,	// (0x000658b5) cell_afind_grid_control_pane_ParamLimits

0x5714,	// (0x000658b5) cell_afind_grid_control_pane

0x5723,	// (0x000658c4) bg_button_pane_cp69_ParamLimits

0x5723,	// (0x000658c4) bg_button_pane_cp69

0x572f,	// (0x000658d0) cell_afind_pane_g1_ParamLimits

0x572f,	// (0x000658d0) cell_afind_pane_g1

0x573c,	// (0x000658dd) cell_afind_pane_t1_ParamLimits

0x573c,	// (0x000658dd) cell_afind_pane_t1

0x574e,	// (0x000658ef) bg_button_pane_cp72

0x5756,	// (0x000658f7) cell_afind_grid_control_pane_g1

0x2edd,	// (0x0006307e) aid_image_placing_area_ParamLimits

0x2edd,	// (0x0006307e) aid_image_placing_area

0xbf04,	// (0x0006c0a5) field_vitu_entry_pane_g1_ParamLimits

0xbf04,	// (0x0006c0a5) field_vitu_entry_pane_g1

0xbf04,	// (0x0006c0a5) field_vitu_entry_pane_g2_ParamLimits

0xbf04,	// (0x0006c0a5) field_vitu_entry_pane_g2

0x0001,

0xf199,	// (0x0006f33a) field_vitu_entry_pane_g_ParamLimits

0xf199,	// (0x0006f33a) field_vitu_entry_pane_g

0xeed7,	// (0x0006f078) cell_vitu_itu_pane_g1_ParamLimits

0xee7c,	// (0x0006f01d) cell_vitu_itu_pane_t3_ParamLimits

0xee7c,	// (0x0006f01d) cell_vitu_itu_pane_t3

0x48a6,	// (0x00064a47) mp4_progress_pane_t1_ParamLimits

0x48c5,	// (0x00064a66) mp4_progress_pane_t2_ParamLimits

0xf644,	// (0x0006f7e5) mp4_progress_pane_t_ParamLimits

0x48e4,	// (0x00064a85) mup_progress_pane_cp04_ParamLimits

0x55b4,	// (0x00065755) main_myfav_hc_pane_t5_ParamLimits

0x55b4,	// (0x00065755) main_myfav_hc_pane_t5

0x9b42,	// (0x00069ce3) aid_zoom_text_primary

0x0a4b,	// (0x00060bec) popup_adpt_find_window_ParamLimits

0x9b93,	// (0x00069d34) main_cam_set_pane

0x4dea,	// (0x00064f8b) cam4_zoom_pane_ParamLimits

0x4dea,	// (0x00064f8b) cam4_zoom_pane

0x575f,	// (0x00065900) main_cam_set_pane_g1_ParamLimits

0x575f,	// (0x00065900) main_cam_set_pane_g1

0x576d,	// (0x0006590e) main_cam_set_pane_g2_ParamLimits

0x576d,	// (0x0006590e) main_cam_set_pane_g2

0x0001,

0xf6fa,	// (0x0006f89b) main_cam_set_pane_g_ParamLimits

0xf6fa,	// (0x0006f89b) main_cam_set_pane_g

0x578e,	// (0x0006592f) main_cam_set_pane_t1_ParamLimits

0x578e,	// (0x0006592f) main_cam_set_pane_t1

0x57a9,	// (0x0006594a) main_cset_listscroll_pane_ParamLimits

0x57a9,	// (0x0006594a) main_cset_listscroll_pane

0x57cf,	// (0x00065970) main_cset_slider_pane_ParamLimits

0x57cf,	// (0x00065970) main_cset_slider_pane

0x57fd,	// (0x0006599e) main_cset_list_pane_ParamLimits

0x57fd,	// (0x0006599e) main_cset_list_pane

0x580d,	// (0x000659ae) scroll_pane_cp028

0x5816,	// (0x000659b7) aid_area_touch_slider

0x5832,	// (0x000659d3) cset_slider_pane

0x5855,	// (0x000659f6) main_cset_slider_pane_g1

0x586a,	// (0x00065a0b) main_cset_slider_pane_g2

0x0011,

0xf6ff,	// (0x0006f8a0) main_cset_slider_pane_g

0x593e,	// (0x00065adf) main_cset_slider_pane_t1

0x5966,	// (0x00065b07) main_cset_slider_pane_t2

0x5980,	// (0x00065b21) main_cset_slider_pane_t3

0x599a,	// (0x00065b3b) main_cset_slider_pane_t4

0x59b4,	// (0x00065b55) main_cset_slider_pane_t5

0x59ce,	// (0x00065b6f) main_cset_slider_pane_t6

0x59e3,	// (0x00065b84) main_cset_slider_pane_t7

0x000e,

0xf724,	// (0x0006f8c5) main_cset_slider_pane_t

0x5b59,	// (0x00065cfa) cset_list_set_pane_ParamLimits

0x5b59,	// (0x00065cfa) cset_list_set_pane

0x5b6b,	// (0x00065d0c) aid_position_infowindow_above

0x5b73,	// (0x00065d14) aid_position_infowindow_below

0x5b7b,	// (0x00065d1c) cset_list_set_pane_g1_ParamLimits

0x5b7b,	// (0x00065d1c) cset_list_set_pane_g1

0x5b87,	// (0x00065d28) cset_list_set_pane_g3_ParamLimits

0x5b87,	// (0x00065d28) cset_list_set_pane_g3

0x0001,

0xf743,	// (0x0006f8e4) cset_list_set_pane_g_ParamLimits

0xf743,	// (0x0006f8e4) cset_list_set_pane_g

0x5b96,	// (0x00065d37) cset_list_set_pane_t1_ParamLimits

0x5b96,	// (0x00065d37) cset_list_set_pane_t1

0xbe9d,	// (0x0006c03e) list_highlight_pane_cp021_ParamLimits

0xbe9d,	// (0x0006c03e) list_highlight_pane_cp021

0xd23a,	// (0x0006d3db) cset_slider_pane_g1

0xd24c,	// (0x0006d3ed) cset_slider_pane_g2

0xd243,	// (0x0006d3e4) cset_slider_pane_g3

0x0002,

0xf748,	// (0x0006f8e9) cset_slider_pane_g

0xa27d,	// (0x0006a41e) aid_area_touch_cam4_zoom

0xa285,	// (0x0006a426) cam4_zoom_cont_pane

0xa28d,	// (0x0006a42e) cam4_zoom_pane_g1

0xa295,	// (0x0006a436) cam4_zoom_pane_g2

0x5bab,	// (0x00065d4c) cam4_zoom_pane_g3

0x0002,

0xf74f,	// (0x0006f8f0) cam4_zoom_pane_g

0xa29d,	// (0x0006a43e) cam4_zoom_cont_pane_g1

0xa2a6,	// (0x0006a447) cam4_zoom_cont_pane_g2

0xa2af,	// (0x0006a450) cam4_zoom_cont_pane_g3

0x0002,

0xf756,	// (0x0006f8f7) cam4_zoom_cont_pane_g

0x4bfd,	// (0x00064d9e) call4_image_pane_ParamLimits

0x4bfd,	// (0x00064d9e) call4_image_pane

0x4c64,	// (0x00064e05) call4_windows_conf_pane_ParamLimits

0x4ca7,	// (0x00064e48) popup_call4_audio_in_window_ParamLimits

0x4ca7,	// (0x00064e48) popup_call4_audio_in_window

0xb7dd,	// (0x0006b97e) bg_popup_call2_act_pane_cp02

0x4d6f,	// (0x00064f10) call4_list_conf_pane

0xbf42,	// (0x0006c0e3) call4_image_pane_g1

0xbf42,	// (0x0006c0e3) call4_image_pane_g2

0x0001,

0xf08c,	// (0x0006f22d) call4_image_pane_g

0x5bb3,	// (0x00065d54) list_single_graphic_popup_conf4_pane_ParamLimits

0x5bb3,	// (0x00065d54) list_single_graphic_popup_conf4_pane

0xb7dd,	// (0x0006b97e) list_highlight_pane_cp022

0x5bc6,	// (0x00065d67) list_single_graphic_popup_conf4_pane_g1

0xce29,	// (0x0006cfca) list_single_graphic_popup_conf4_pane_g2

0x0001,

0xf75d,	// (0x0006f8fe) list_single_graphic_popup_conf4_pane_g

0x5bce,	// (0x00065d6f) list_single_graphic_popup_conf4_pane_t1

0x184b,	// (0x000619ec) popup_vtel_slider_window_ParamLimits

0x184b,	// (0x000619ec) popup_vtel_slider_window

0x4936,	// (0x00064ad7) dialer2_ne_pane_t2_ParamLimits

0x4936,	// (0x00064ad7) dialer2_ne_pane_t2

0x0001,

0xf649,	// (0x0006f7ea) dialer2_ne_pane_t_ParamLimits

0xf649,	// (0x0006f7ea) dialer2_ne_pane_t

0xe60c,	// (0x0006e7ad) bg_popup_sub_pane_cp010_ParamLimits

0xe60c,	// (0x0006e7ad) bg_popup_sub_pane_cp010

0x5be4,	// (0x00065d85) popup_vtel_slider_window_g1_ParamLimits

0x5be4,	// (0x00065d85) popup_vtel_slider_window_g1

0x5bf7,	// (0x00065d98) popup_vtel_slider_window_g2_ParamLimits

0x5bf7,	// (0x00065d98) popup_vtel_slider_window_g2

0x0003,

0xf762,	// (0x0006f903) popup_vtel_slider_window_g_ParamLimits

0xf762,	// (0x0006f903) popup_vtel_slider_window_g

0x5c4d,	// (0x00065dee) vtel_slider_pane_ParamLimits

0x5c4d,	// (0x00065dee) vtel_slider_pane

0x5c6f,	// (0x00065e10) vtel_slider_pane_g1_ParamLimits

0x5c6f,	// (0x00065e10) vtel_slider_pane_g1

0x5c83,	// (0x00065e24) vtel_slider_pane_g2_ParamLimits

0x5c83,	// (0x00065e24) vtel_slider_pane_g2

0x5c9b,	// (0x00065e3c) vtel_slider_pane_g3_ParamLimits

0x5c9b,	// (0x00065e3c) vtel_slider_pane_g3

0x5c6f,	// (0x00065e10) vtel_slider_pane_g4_ParamLimits

0x5c6f,	// (0x00065e10) vtel_slider_pane_g4

0x5cb1,	// (0x00065e52) vtel_slider_pane_g5_ParamLimits

0x5cb1,	// (0x00065e52) vtel_slider_pane_g5

0x0004,

0xf76b,	// (0x0006f90c) vtel_slider_pane_g_ParamLimits

0xf76b,	// (0x0006f90c) vtel_slider_pane_g

0x9b93,	// (0x00069d34) main_gallery2_pane

0x4fea,	// (0x0006518b) aid_size_row_itut2_dropdow_list_ParamLimits

0x4fea,	// (0x0006518b) aid_size_row_itut2_dropdow_list

0x5072,	// (0x00065213) grid_vitu2_function_top_pane_ParamLimits

0x5072,	// (0x00065213) grid_vitu2_function_top_pane

0x50d6,	// (0x00065277) popup_vitu2_dropdown_list_window_ParamLimits

0x50d6,	// (0x00065277) popup_vitu2_dropdown_list_window

0x5101,	// (0x000652a2) popup_vitu2_match_list_window

0x5cc7,	// (0x00065e68) cell_vitu2_function_top_pane_ParamLimits

0x5cc7,	// (0x00065e68) cell_vitu2_function_top_pane

0x5cdf,	// (0x00065e80) cell_vitu2_function_top_pane_cp01_ParamLimits

0x5cdf,	// (0x00065e80) cell_vitu2_function_top_pane_cp01

0x5cfb,	// (0x00065e9c) cell_vitu2_function_top_wide_pane_ParamLimits

0x5cfb,	// (0x00065e9c) cell_vitu2_function_top_wide_pane

0x9b93,	// (0x00069d34) bg_button_pane_cp012

0x5d19,	// (0x00065eba) cell_vitu2_function_top_pane_g1

0xa2b8,	// (0x0006a459) bg_button_pane_cp013_ParamLimits

0xa2b8,	// (0x0006a459) bg_button_pane_cp013

0x5d2d,	// (0x00065ece) cell_vitu2_function_top_wide_pane_g1_ParamLimits

0x5d2d,	// (0x00065ece) cell_vitu2_function_top_wide_pane_g1

0x9b93,	// (0x00069d34) bg_popup_sub_pane_cp20

0x5d45,	// (0x00065ee6) list_vitu2_match_list_pane

0x53b7,	// (0x00065558) bg_popup_sub_pane_cp20_g1

0x53bf,	// (0x00065560) bg_popup_sub_pane_cp20_g2

0xc952,	// (0x0006caf3) bg_popup_sub_pane_cp20_g3

0x53c7,	// (0x00065568) bg_popup_sub_pane_cp20_g4

0xc932,	// (0x0006cad3) bg_popup_sub_pane_cp20_g5

0x5d5d,	// (0x00065efe) bg_popup_sub_pane_cp20_g6

0x53d7,	// (0x00065578) bg_popup_sub_pane_cp20_g7

0x53df,	// (0x00065580) bg_popup_sub_pane_cp20_g8

0x53e7,	// (0x00065588) bg_popup_sub_pane_cp20_g9

0x0008,

0xf776,	// (0x0006f917) bg_popup_sub_pane_cp20_g

0xa2d4,	// (0x0006a475) list_vitu2_match_list_item_pane_ParamLimits

0xa2d4,	// (0x0006a475) list_vitu2_match_list_item_pane

0xa2e6,	// (0x0006a487) list_vitu2_match_list_item_pane_t1

0x9ba1,	// (0x00069d42) bg_popup_sub_pane_cp21

0xc58b,	// (0x0006c72c) grid_vitu2_dropdown_list_pane

0x5d65,	// (0x00065f06) cell_vitu2_dropdown_list_char_pane_ParamLimits

0x5d65,	// (0x00065f06) cell_vitu2_dropdown_list_char_pane

0x5d85,	// (0x00065f26) cell_vitu2_dropdown_list_ctrl_pane_ParamLimits

0x5d85,	// (0x00065f26) cell_vitu2_dropdown_list_ctrl_pane

0x5dad,	// (0x00065f4e) cell_vitu2_dropdown_list_char_pane_g1

0x5db6,	// (0x00065f57) cell_vitu2_dropdown_list_char_pane_g2

0x5dbf,	// (0x00065f60) cell_vitu2_dropdown_list_char_pane_g3

0x0002,

0xf789,	// (0x0006f92a) cell_vitu2_dropdown_list_char_pane_g

0x5dc8,	// (0x00065f69) cell_vitu2_dropdown_list_char_pane_t1

0x5dd6,	// (0x00065f77) cell_vitu2_dropdown_list_ctrl_pane_g1_ParamLimits

0x5dd6,	// (0x00065f77) cell_vitu2_dropdown_list_ctrl_pane_g1

0x5de3,	// (0x00065f84) cell_vitu2_dropdown_list_ctrl_pane_g2_ParamLimits

0x5de3,	// (0x00065f84) cell_vitu2_dropdown_list_ctrl_pane_g2

0x5df0,	// (0x00065f91) cell_vitu2_dropdown_list_ctrl_pane_g3_ParamLimits

0x5df0,	// (0x00065f91) cell_vitu2_dropdown_list_ctrl_pane_g3

0x5dfd,	// (0x00065f9e) cell_vitu2_dropdown_list_ctrl_pane_g4_ParamLimits

0x5dfd,	// (0x00065f9e) cell_vitu2_dropdown_list_ctrl_pane_g4

0xa190,	// (0x0006a331) cell_vitu2_dropdown_list_ctrl_pane_g5_ParamLimits

0xa190,	// (0x0006a331) cell_vitu2_dropdown_list_ctrl_pane_g5

0x0004,

0xf790,	// (0x0006f931) cell_vitu2_dropdown_list_ctrl_pane_g_ParamLimits

0xf790,	// (0x0006f931) cell_vitu2_dropdown_list_ctrl_pane_g

0x5e19,	// (0x00065fba) aid_size_cell_gallery2_ParamLimits

0x5e19,	// (0x00065fba) aid_size_cell_gallery2

0x5e37,	// (0x00065fd8) grid_gallery2_pane_ParamLimits

0x5e37,	// (0x00065fd8) grid_gallery2_pane

0x5e51,	// (0x00065ff2) scroll_pane_cp029_ParamLimits

0x5e51,	// (0x00065ff2) scroll_pane_cp029

0x5e62,	// (0x00066003) cell_gallery2_pane_ParamLimits

0x5e62,	// (0x00066003) cell_gallery2_pane

0xc5da,	// (0x0006c77b) cell_gallery2_pane_g2

0x5ec1,	// (0x00066062) cell_gallery2_pane_g3

0x5ec9,	// (0x0006606a) cell_gallery2_pane_g4

0x5ed1,	// (0x00066072) cell_gallery2_pane_g5

0xc58b,	// (0x0006c72c) grid_highlight_pane_cp10

0x5101,	// (0x000652a2) popup_vitu2_match_list_window_ParamLimits

0x5116,	// (0x000652b7) popup_vitu2_query_window_ParamLimits

0x5116,	// (0x000652b7) popup_vitu2_query_window

0x9ba1,	// (0x00069d42) bg_vitu2_candi_button_pane

0x5dad,	// (0x00065f4e) cell_vitu2_dropdown_list_char_pane_g1_copy1

0x5db6,	// (0x00065f57) cell_vitu2_dropdown_list_char_pane_g2_copy1

0x5dbf,	// (0x00065f60) cell_vitu2_dropdown_list_char_pane_g2_copy2

0x5ed9,	// (0x0006607a) bg_button_pane_cp015

0x5eea,	// (0x0006608b) bg_button_pane_cp016

0x5ef6,	// (0x00066097) bg_button_pane_cp017

0xd1ca,	// (0x0006d36b) bg_popup_sub_pane_cp22

0x5f34,	// (0x000660d5) popup_vitu2_query_window_g1

0x5f40,	// (0x000660e1) popup_vitu2_query_window_g2

0x0002,

0xf79b,	// (0x0006f93c) popup_vitu2_query_window_g

0x5f62,	// (0x00066103) popup_vitu2_query_window_t1_ParamLimits

0x5f62,	// (0x00066103) popup_vitu2_query_window_t1

0x5f95,	// (0x00066136) popup_vitu2_query_window_t2_ParamLimits

0x5f95,	// (0x00066136) popup_vitu2_query_window_t2

0x5fa7,	// (0x00066148) popup_vitu2_query_window_t3_ParamLimits

0x5fa7,	// (0x00066148) popup_vitu2_query_window_t3

0x5fcf,	// (0x00066170) popup_vitu2_query_window_t4_ParamLimits

0x5fcf,	// (0x00066170) popup_vitu2_query_window_t4

0x5fe3,	// (0x00066184) popup_vitu2_query_window_t5_ParamLimits

0x5fe3,	// (0x00066184) popup_vitu2_query_window_t5

0x0006,

0xf7a2,	// (0x0006f943) popup_vitu2_query_window_t_ParamLimits

0xf7a2,	// (0x0006f943) popup_vitu2_query_window_t

0x57f5,	// (0x00065996) main_cset_text_pane

0x5816,	// (0x000659b7) aid_area_touch_slider_ParamLimits

0x5832,	// (0x000659d3) cset_slider_pane_ParamLimits

0x5855,	// (0x000659f6) main_cset_slider_pane_g1_ParamLimits

0x586a,	// (0x00065a0b) main_cset_slider_pane_g2_ParamLimits

0x587f,	// (0x00065a20) main_cset_slider_pane_g3_ParamLimits

0x587f,	// (0x00065a20) main_cset_slider_pane_g3

0x588b,	// (0x00065a2c) main_cset_slider_pane_g4_ParamLimits

0x588b,	// (0x00065a2c) main_cset_slider_pane_g4

0x589a,	// (0x00065a3b) main_cset_slider_pane_g5_ParamLimits

0x589a,	// (0x00065a3b) main_cset_slider_pane_g5

0x58a6,	// (0x00065a47) main_cset_slider_pane_g6_ParamLimits

0x58a6,	// (0x00065a47) main_cset_slider_pane_g6

0xf6ff,	// (0x0006f8a0) main_cset_slider_pane_g_ParamLimits

0x593e,	// (0x00065adf) main_cset_slider_pane_t1_ParamLimits

0x5966,	// (0x00065b07) main_cset_slider_pane_t2_ParamLimits

0x5980,	// (0x00065b21) main_cset_slider_pane_t3_ParamLimits

0x599a,	// (0x00065b3b) main_cset_slider_pane_t4_ParamLimits

0x59b4,	// (0x00065b55) main_cset_slider_pane_t5_ParamLimits

0x59ce,	// (0x00065b6f) main_cset_slider_pane_t6_ParamLimits

0x59e3,	// (0x00065b84) main_cset_slider_pane_t7_ParamLimits

0x5a0d,	// (0x00065bae) main_cset_slider_pane_t8_ParamLimits

0x5a0d,	// (0x00065bae) main_cset_slider_pane_t8

0x5a35,	// (0x00065bd6) main_cset_slider_pane_t9_ParamLimits

0x5a35,	// (0x00065bd6) main_cset_slider_pane_t9

0x5a5d,	// (0x00065bfe) main_cset_slider_pane_t10_ParamLimits

0x5a5d,	// (0x00065bfe) main_cset_slider_pane_t10

0x5a85,	// (0x00065c26) main_cset_slider_pane_t11_ParamLimits

0x5a85,	// (0x00065c26) main_cset_slider_pane_t11

0x5aad,	// (0x00065c4e) main_cset_slider_pane_t12_ParamLimits

0x5aad,	// (0x00065c4e) main_cset_slider_pane_t12

0x5aca,	// (0x00065c6b) main_cset_slider_pane_t13_ParamLimits

0x5aca,	// (0x00065c6b) main_cset_slider_pane_t13

0xf724,	// (0x0006f8c5) main_cset_slider_pane_t_ParamLimits

0xb7dd,	// (0x0006b97e) bg_popup_sub_pane_cp011

0x604d,	// (0x000661ee) main_cset_text_pane_g1

0x6055,	// (0x000661f6) main_cset_text_pane_t1

0x6063,	// (0x00066204) main_cset_text_pane_t2

0x6071,	// (0x00066212) main_cset_text_pane_t3

0x607f,	// (0x00066220) main_cset_text_pane_t4

0x608d,	// (0x0006622e) main_cset_text_pane_t5

0x609b,	// (0x0006623c) main_cset_text_pane_t6

0x60a9,	// (0x0006624a) main_cset_text_pane_t7

0x0006,

0xf7b1,	// (0x0006f952) main_cset_text_pane_t

0x9ba1,	// (0x00069d42) main_cam4_burst_pane

0x9ba1,	// (0x00069d42) main_cam5_pane

0x5702,	// (0x000658a3) bg_button_pane_cp019

0x570b,	// (0x000658ac) bg_button_pane_cp020

0x58ba,	// (0x00065a5b) main_cset_slider_pane_g7_ParamLimits

0x58ba,	// (0x00065a5b) main_cset_slider_pane_g7

0x58c6,	// (0x00065a67) main_cset_slider_pane_g8_ParamLimits

0x58c6,	// (0x00065a67) main_cset_slider_pane_g8

0x58d2,	// (0x00065a73) main_cset_slider_pane_g9_ParamLimits

0x58d2,	// (0x00065a73) main_cset_slider_pane_g9

0x58de,	// (0x00065a7f) main_cset_slider_pane_g10_ParamLimits

0x58de,	// (0x00065a7f) main_cset_slider_pane_g10

0x58ea,	// (0x00065a8b) main_cset_slider_pane_g11_ParamLimits

0x58ea,	// (0x00065a8b) main_cset_slider_pane_g11

0x58f6,	// (0x00065a97) main_cset_slider_pane_g12_ParamLimits

0x58f6,	// (0x00065a97) main_cset_slider_pane_g12

0x5902,	// (0x00065aa3) main_cset_slider_pane_g13_ParamLimits

0x5902,	// (0x00065aa3) main_cset_slider_pane_g13

0x590e,	// (0x00065aaf) main_cset_slider_pane_g14_ParamLimits

0x590e,	// (0x00065aaf) main_cset_slider_pane_g14

0x591a,	// (0x00065abb) main_cset_slider_pane_g15_ParamLimits

0x591a,	// (0x00065abb) main_cset_slider_pane_g15

0x5ae7,	// (0x00065c88) main_cset_slider_pane_t14_ParamLimits

0x5ae7,	// (0x00065c88) main_cset_slider_pane_t14

0x5b20,	// (0x00065cc1) main_cset_slider_pane_t15_ParamLimits

0x5b20,	// (0x00065cc1) main_cset_slider_pane_t15

0x60b7,	// (0x00066258) aid_cam4_burst_size_cell_ParamLimits

0x60b7,	// (0x00066258) aid_cam4_burst_size_cell

0x60d7,	// (0x00066278) grid_cam4_burst_pane_ParamLimits

0x60d7,	// (0x00066278) grid_cam4_burst_pane

0x610f,	// (0x000662b0) linegrid_cam4_burst_pane_ParamLimits

0x610f,	// (0x000662b0) linegrid_cam4_burst_pane

0xa2f4,	// (0x0006a495) scroll_pane_cp30_ParamLimits

0xa2f4,	// (0x0006a495) scroll_pane_cp30

0x6133,	// (0x000662d4) cell_cam4_burst_pane_ParamLimits

0x6133,	// (0x000662d4) cell_cam4_burst_pane

0x6180,	// (0x00066321) linegrid_cam4_burst_pane_g1_ParamLimits

0x6180,	// (0x00066321) linegrid_cam4_burst_pane_g1

0x618d,	// (0x0006632e) linegrid_cam4_burst_pane_g2_ParamLimits

0x618d,	// (0x0006632e) linegrid_cam4_burst_pane_g2

0x619e,	// (0x0006633f) linegrid_cam4_burst_pane_g3_ParamLimits

0x619e,	// (0x0006633f) linegrid_cam4_burst_pane_g3

0x0002,

0xf7c0,	// (0x0006f961) linegrid_cam4_burst_pane_g_ParamLimits

0xf7c0,	// (0x0006f961) linegrid_cam4_burst_pane_g

0x61ab,	// (0x0006634c) linegrid_cam4_burst_pane_g3_copy1_ParamLimits

0x61ab,	// (0x0006634c) linegrid_cam4_burst_pane_g3_copy1

0x61c5,	// (0x00066366) linegrid_cam4_burst_pane_g4_ParamLimits

0x61c5,	// (0x00066366) linegrid_cam4_burst_pane_g4

0x61d2,	// (0x00066373) linegrid_cam4_burst_pane_g5_ParamLimits

0x61d2,	// (0x00066373) linegrid_cam4_burst_pane_g5

0x61e3,	// (0x00066384) linegrid_cam4_burst_pane_g6_ParamLimits

0x61e3,	// (0x00066384) linegrid_cam4_burst_pane_g6

0x61fa,	// (0x0006639b) linegrid_cam4_burst_pane_g7_ParamLimits

0x61fa,	// (0x0006639b) linegrid_cam4_burst_pane_g7

0x6207,	// (0x000663a8) cell_cam4_burst_pane_g1

0x6226,	// (0x000663c7) main_cam5_pane_t1_ParamLimits

0x6226,	// (0x000663c7) main_cam5_pane_t1

0x6238,	// (0x000663d9) main_cam5_pane_t2_ParamLimits

0x6238,	// (0x000663d9) main_cam5_pane_t2

0x624a,	// (0x000663eb) main_cam5_pane_t3_ParamLimits

0x624a,	// (0x000663eb) main_cam5_pane_t3

0x625c,	// (0x000663fd) main_cam5_pane_t4_ParamLimits

0x625c,	// (0x000663fd) main_cam5_pane_t4

0x6274,	// (0x00066415) main_cam5_pane_t5_ParamLimits

0x6274,	// (0x00066415) main_cam5_pane_t5

0x6288,	// (0x00066429) main_cam5_pane_t6_ParamLimits

0x6288,	// (0x00066429) main_cam5_pane_t6

0x629c,	// (0x0006643d) main_cam5_pane_t7_ParamLimits

0x629c,	// (0x0006643d) main_cam5_pane_t7

0x62ae,	// (0x0006644f) main_cam5_pane_t8_ParamLimits

0x62ae,	// (0x0006644f) main_cam5_pane_t8

0x62ca,	// (0x0006646b) main_cam5_pane_t9_ParamLimits

0x62ca,	// (0x0006646b) main_cam5_pane_t9

0x62dc,	// (0x0006647d) main_cam5_pane_t10_ParamLimits

0x62dc,	// (0x0006647d) main_cam5_pane_t10

0x62ee,	// (0x0006648f) main_cam5_pane_t11_ParamLimits

0x62ee,	// (0x0006648f) main_cam5_pane_t11

0x6300,	// (0x000664a1) main_cam5_pane_t12_ParamLimits

0x6300,	// (0x000664a1) main_cam5_pane_t12

0x6315,	// (0x000664b6) main_cam5_pane_t13_ParamLimits

0x6315,	// (0x000664b6) main_cam5_pane_t13

0x000c,

0xf7cc,	// (0x0006f96d) main_cam5_pane_t_ParamLimits

0xf7cc,	// (0x0006f96d) main_cam5_pane_t

0x0c43,	// (0x00060de4) popup_scut_keymap_window_ParamLimits

0x0c43,	// (0x00060de4) popup_scut_keymap_window

0x6332,	// (0x000664d3) aid_size_cell_brow_shortcut

0xc58b,	// (0x0006c72c) bg_popup_window_pane_cp010

0x633e,	// (0x000664df) grid_scut_pane

0x634a,	// (0x000664eb) cell_scut_pane_ParamLimits

0x634a,	// (0x000664eb) cell_scut_pane

0x6361,	// (0x00066502) cell_scut_pane_g1

0x636a,	// (0x0006650b) cell_scut_pane_t1

0x6379,	// (0x0006651a) cell_scut_pane_t2

0x6388,	// (0x00066529) cell_scut_pane_t3

0x0002,

0xf7e7,	// (0x0006f988) cell_scut_pane_t

0x3d87,	// (0x00063f28) main_mup3_pane_g8_ParamLimits

0x3d87,	// (0x00063f28) main_mup3_pane_g8

0x5004,	// (0x000651a5) area_vitu2_query_pane_ParamLimits

0x5004,	// (0x000651a5) area_vitu2_query_pane

0x5f02,	// (0x000660a3) input_focus_pane_cp08

0x6396,	// (0x00066537) area_vitu2_query_pane_g1

0x63a2,	// (0x00066543) area_vitu2_query_pane_g2

0x0001,

0xf7ee,	// (0x0006f98f) area_vitu2_query_pane_g

0x63b1,	// (0x00066552) area_vitu2_query_pane_t1_ParamLimits

0x63b1,	// (0x00066552) area_vitu2_query_pane_t1

0x63c5,	// (0x00066566) area_vitu2_query_pane_t2_ParamLimits

0x63c5,	// (0x00066566) area_vitu2_query_pane_t2

0x63d9,	// (0x0006657a) area_vitu2_query_pane_t3_ParamLimits

0x63d9,	// (0x0006657a) area_vitu2_query_pane_t3

0x6401,	// (0x000665a2) area_vitu2_query_pane_t4_ParamLimits

0x6401,	// (0x000665a2) area_vitu2_query_pane_t4

0x6429,	// (0x000665ca) area_vitu2_query_pane_t5_ParamLimits

0x6429,	// (0x000665ca) area_vitu2_query_pane_t5

0x6451,	// (0x000665f2) area_vitu2_query_pane_t6_ParamLimits

0x6451,	// (0x000665f2) area_vitu2_query_pane_t6

0x0006,

0xf7f3,	// (0x0006f994) area_vitu2_query_pane_t_ParamLimits

0xf7f3,	// (0x0006f994) area_vitu2_query_pane_t

0x649d,	// (0x0006663e) bg_button_pane_cp018

0x64a9,	// (0x0006664a) bg_button_pane_cp021

0x64b5,	// (0x00066656) bg_button_pane_cp022

0x64d4,	// (0x00066675) input_focus_pane_cp09

0xcf38,	// (0x0006d0d9) aid_size_touch_mv_arrow_left

0xcf63,	// (0x0006d104) aid_size_touch_mv_arrow_right

0xa265,	// (0x0006a406) main_cset_slider_pane_g16_ParamLimits

0xa265,	// (0x0006a406) main_cset_slider_pane_g16

0xa271,	// (0x0006a412) main_cset_slider_pane_g17_ParamLimits

0xa271,	// (0x0006a412) main_cset_slider_pane_g17

0x6207,	// (0x000663a8) cell_cam4_burst_pane_g1_ParamLimits

0xb7dd,	// (0x0006b97e) compa_mode_pane

0x5c07,	// (0x00065da8) popup_vtel_slider_window_g3_ParamLimits

0x5c07,	// (0x00065da8) popup_vtel_slider_window_g3

0x5c1e,	// (0x00065dbf) popup_vtel_slider_window_g4_ParamLimits

0x5c1e,	// (0x00065dbf) popup_vtel_slider_window_g4

0x5c35,	// (0x00065dd6) popup_vtel_slider_window_t1_ParamLimits

0x5c35,	// (0x00065dd6) popup_vtel_slider_window_t1

0x9ba1,	// (0x00069d42) main_cl_pane

0x9d0f,	// (0x00069eb0) popup_imed_adjust2_window_ParamLimits

0xd1ca,	// (0x0006d36b) bg_tb_trans_pane_cp05_ParamLimits

0xede7,	// (0x0006ef88) popup_imed_adjust2_window_g1_ParamLimits

0xedf6,	// (0x0006ef97) popup_imed_adjust2_window_g2_ParamLimits

0xedf6,	// (0x0006ef97) popup_imed_adjust2_window_g2

0xee02,	// (0x0006efa3) popup_imed_adjust2_window_g3_ParamLimits

0xee02,	// (0x0006efa3) popup_imed_adjust2_window_g3

0x0002,

0x02b5,	// (0x00060456) popup_imed_adjust2_window_g_ParamLimits

0x02b5,	// (0x00060456) popup_imed_adjust2_window_g

0xee0e,	// (0x0006efaf) popup_imed_adjust2_window_t1_ParamLimits

0xee26,	// (0x0006efc7) slider_imed_adjust_pane_ParamLimits

0xee3a,	// (0x0006efdb) slider_imed_adjust_pane_g1_ParamLimits

0xee4a,	// (0x0006efeb) slider_imed_adjust_pane_g2_ParamLimits

0xee5a,	// (0x0006effb) slider_imed_adjust_pane_g3_ParamLimits

0xee6b,	// (0x0006f00c) slider_imed_adjust_pane_g4_ParamLimits

0xf5b5,	// (0x0006f756) slider_imed_adjust_pane_g_ParamLimits

0x4d8b,	// (0x00064f2c) aid_touch_area_cam4_ParamLimits

0x4d8b,	// (0x00064f2c) aid_touch_area_cam4

0xa162,	// (0x0006a303) battery_pane_cp01

0x4e5a,	// (0x00064ffb) main_camera4_pane_g6_ParamLimits

0x4e5a,	// (0x00064ffb) main_camera4_pane_g6

0x4e84,	// (0x00065025) main_camera4_pane_t2_ParamLimits

0x4e84,	// (0x00065025) main_camera4_pane_t2

0x0001,

0xf672,	// (0x0006f813) main_camera4_pane_t_ParamLimits

0xf672,	// (0x0006f813) main_camera4_pane_t

0x4eb9,	// (0x0006505a) aid_touch_area_vid4_ParamLimits

0x4eb9,	// (0x0006505a) aid_touch_area_vid4

0x4f0d,	// (0x000650ae) main_video4_pane_g5_ParamLimits

0x4f0d,	// (0x000650ae) main_video4_pane_g5

0x4f32,	// (0x000650d3) vid4_progress_pane_ParamLimits

0x4f32,	// (0x000650d3) vid4_progress_pane

0x5932,	// (0x00065ad3) main_cset_slider_pane_g18_ParamLimits

0x5932,	// (0x00065ad3) main_cset_slider_pane_g18

0x621a,	// (0x000663bb) cell_cam4_burst_pane_g2_ParamLimits

0x621a,	// (0x000663bb) cell_cam4_burst_pane_g2

0x0001,

0xf7c7,	// (0x0006f968) cell_cam4_burst_pane_g_ParamLimits

0xf7c7,	// (0x0006f968) cell_cam4_burst_pane_g

0xbfa0,	// (0x0006c141) bg_cl_pane_ParamLimits

0xbfa0,	// (0x0006c141) bg_cl_pane

0x64e4,	// (0x00066685) cl_header_pane_ParamLimits

0x64e4,	// (0x00066685) cl_header_pane

0x64f8,	// (0x00066699) cl_listscroll_pane_ParamLimits

0x64f8,	// (0x00066699) cl_listscroll_pane

0x6508,	// (0x000666a9) bg_cl_pane_g1

0x6510,	// (0x000666b1) bg_cl_pane_g2

0x6518,	// (0x000666b9) bg_cl_pane_g3

0x6520,	// (0x000666c1) bg_cl_pane_g4

0x6528,	// (0x000666c9) bg_cl_pane_g5

0x6530,	// (0x000666d1) bg_cl_pane_g6

0x6538,	// (0x000666d9) bg_cl_pane_g7

0x6540,	// (0x000666e1) bg_cl_pane_g8

0x6548,	// (0x000666e9) bg_cl_pane_g9

0x0008,

0xf802,	// (0x0006f9a3) bg_cl_pane_g

0x6550,	// (0x000666f1) aid_height_cl_leading_ParamLimits

0x6550,	// (0x000666f1) aid_height_cl_leading

0x655c,	// (0x000666fd) aid_height_cl_text_ParamLimits

0x655c,	// (0x000666fd) aid_height_cl_text

0xbe9d,	// (0x0006c03e) bg_cl_header_pane_ParamLimits

0xbe9d,	// (0x0006c03e) bg_cl_header_pane

0x657b,	// (0x0006671c) cl_header_pane_g1_ParamLimits

0x657b,	// (0x0006671c) cl_header_pane_g1

0x6591,	// (0x00066732) cl_header_pane_t1_ParamLimits

0x6591,	// (0x00066732) cl_header_pane_t1

0x65aa,	// (0x0006674b) cl_list_pane

0x580d,	// (0x000659ae) hc_scroll_pane_cp01

0xc932,	// (0x0006cad3) bg_cl_header_pane_g1

0x53b7,	// (0x00065558) bg_cl_header_pane_g2

0xc952,	// (0x0006caf3) bg_cl_header_pane_g3

0x53c7,	// (0x00065568) bg_cl_header_pane_g4

0x53bf,	// (0x00065560) bg_cl_header_pane_g5

0x5d5d,	// (0x00065efe) bg_cl_header_pane_g6

0x53df,	// (0x00065580) bg_cl_header_pane_g7

0x53e7,	// (0x00065588) bg_cl_header_pane_g8

0x53d7,	// (0x00065578) bg_cl_header_pane_g9

0x0008,

0xf815,	// (0x0006f9b6) bg_cl_header_pane_g

0x65b3,	// (0x00066754) hc_cl_list_double_graphic_heading_pane_ParamLimits

0x65b3,	// (0x00066754) hc_cl_list_double_graphic_heading_pane

0x65c4,	// (0x00066765) hc_cl_list_single_graphic_pane_ParamLimits

0x65c4,	// (0x00066765) hc_cl_list_single_graphic_pane

0x65dd,	// (0x0006677e) hc_cl_list_single_graphic_pane_g1_ParamLimits

0x65dd,	// (0x0006677e) hc_cl_list_single_graphic_pane_g1

0x65e9,	// (0x0006678a) hc_cl_list_single_graphic_pane_g2_ParamLimits

0x65e9,	// (0x0006678a) hc_cl_list_single_graphic_pane_g2

0x0001,

0xf828,	// (0x0006f9c9) hc_cl_list_single_graphic_pane_g_ParamLimits

0xf828,	// (0x0006f9c9) hc_cl_list_single_graphic_pane_g

0x65fd,	// (0x0006679e) hc_cl_list_single_graphic_pane_t1_ParamLimits

0x65fd,	// (0x0006679e) hc_cl_list_single_graphic_pane_t1

0x65dd,	// (0x0006677e) hc_cl_list_double_graphic_heading_pane_g1_ParamLimits

0x65dd,	// (0x0006677e) hc_cl_list_double_graphic_heading_pane_g1

0x6612,	// (0x000667b3) hc_cl_list_double_graphic_heading_pane_g2_ParamLimits

0x6612,	// (0x000667b3) hc_cl_list_double_graphic_heading_pane_g2

0x6626,	// (0x000667c7) hc_cl_list_double_graphic_heading_pane_g3_ParamLimits

0x6626,	// (0x000667c7) hc_cl_list_double_graphic_heading_pane_g3

0x0002,

0xf82d,	// (0x0006f9ce) hc_cl_list_double_graphic_heading_pane_g_ParamLimits

0xf82d,	// (0x0006f9ce) hc_cl_list_double_graphic_heading_pane_g

0x663a,	// (0x000667db) hc_cl_list_double_graphic_heading_pane_t1_ParamLimits

0x663a,	// (0x000667db) hc_cl_list_double_graphic_heading_pane_t1

0x664f,	// (0x000667f0) hc_cl_list_double_graphic_heading_pane_t2_ParamLimits

0x664f,	// (0x000667f0) hc_cl_list_double_graphic_heading_pane_t2

0x0001,

0xf834,	// (0x0006f9d5) hc_cl_list_double_graphic_heading_pane_t_ParamLimits

0xf834,	// (0x0006f9d5) hc_cl_list_double_graphic_heading_pane_t

0xa308,	// (0x0006a4a9) vid4_progress_pane_g1

0xa318,	// (0x0006a4b9) vid4_progress_pane_g2

0x6664,	// (0x00066805) vid4_progress_pane_g3

0xa328,	// (0x0006a4c9) vid4_progress_pane_g4

0x0004,

0xf839,	// (0x0006f9da) vid4_progress_pane_g

0x6676,	// (0x00066817) vid4_progress_pane_t1

0xa340,	// (0x0006a4e1) vid4_progress_pane_t2

0x0002,

0xf844,	// (0x0006f9e5) vid4_progress_pane_t

0x668c,	// (0x0006682d) wait_bar_pane_cp07

0xe68b,	// (0x0006e82c) blid_firmament_pane_ParamLimits

0xe6ce,	// (0x0006e86f) popup_blid_sat_info2_window_g1

0xe6f2,	// (0x0006e893) popup_blid_sat_info2_window_t3

0xe700,	// (0x0006e8a1) popup_blid_sat_info2_window_t4

0xe70e,	// (0x0006e8af) popup_blid_sat_info2_window_t5

0xe71c,	// (0x0006e8bd) popup_blid_sat_info2_window_t6

0xe72c,	// (0x0006e8cd) popup_blid_sat_info2_window_t7

0xe73a,	// (0x0006e8db) popup_blid_sat_info2_window_t8

0xe748,	// (0x0006e8e9) popup_blid_sat_info2_window_t9

0xe756,	// (0x0006e8f7) popup_blid_sat_info2_window_t10

0xe817,	// (0x0006e9b8) aid_firma_cardinal_ParamLimits

0xe82b,	// (0x0006e9cc) blid_firmament_pane_t1_ParamLimits

0xe842,	// (0x0006e9e3) blid_firmament_pane_t2_ParamLimits

0xe859,	// (0x0006e9fa) blid_firmament_pane_t3_ParamLimits

0xe870,	// (0x0006ea11) blid_firmament_pane_t4_ParamLimits

0x01ae,	// (0x0006034f) blid_firmament_pane_t_ParamLimits

0xe887,	// (0x0006ea28) blid_sat_info_pane_ParamLimits

0x9b93,	// (0x00069d34) main_cam_set_pane_ParamLimits

0x454c,	// (0x000646ed) aid_size_cell_colour_35_ParamLimits

0x456c,	// (0x0006470d) aid_size_cell_colour_112_ParamLimits

0x458c,	// (0x0006472d) aid_size_cell_effect_ParamLimits

0xd1ca,	// (0x0006d36b) bg_tb_trans_pane_cp02_ParamLimits

0x45ac,	// (0x0006474d) heading_imed_pane_ParamLimits

0x45b8,	// (0x00064759) listscroll_imed_pane_ParamLimits

0xdb64,	// (0x0006dd05) popup_call2_audio_first_window_g5_ParamLimits

0xdb64,	// (0x0006dd05) popup_call2_audio_first_window_g5

0x497b,	// (0x00064b1c) aid_size_touch_image3_arrow_left_ParamLimits

0x497b,	// (0x00064b1c) aid_size_touch_image3_arrow_left

0x49a7,	// (0x00064b48) aid_size_touch_image3_arrow_right_ParamLimits

0x49a7,	// (0x00064b48) aid_size_touch_image3_arrow_right

0xa355,	// (0x0006a4f6) vid4_progress_pane_t3

0x4733,	// (0x000648d4) main_hwr_training_symbol_option_pane_ParamLimits

0x4733,	// (0x000648d4) main_hwr_training_symbol_option_pane

0xef85,	// (0x0006f126) popup_hwr_training_preview_window_ParamLimits

0xef85,	// (0x0006f126) popup_hwr_training_preview_window

0x4753,	// (0x000648f4) hwr_training_navi_pane_g5_ParamLimits

0x4753,	// (0x000648f4) hwr_training_navi_pane_g5

0x5214,	// (0x000653b5) popup_char_count_window

0x9b93,	// (0x00069d34) bg_popup_sub_pane_cp20_ParamLimits

0x5d45,	// (0x00065ee6) list_vitu2_match_list_pane_ParamLimits

0x5d51,	// (0x00065ef2) vitu2_page_scroll_pane_ParamLimits

0x5d51,	// (0x00065ef2) vitu2_page_scroll_pane

0x66d3,	// (0x00066874) list_single_hwr_training_symbol_option_pane_ParamLimits

0x66d3,	// (0x00066874) list_single_hwr_training_symbol_option_pane

0x66e6,	// (0x00066887) list_single_hwr_training_symbol_option_pane_g1

0x66ee,	// (0x0006688f) list_single_hwr_training_symbol_option_pane_t1

0x66fc,	// (0x0006689d) bg_button_pane_cp023

0x6705,	// (0x000668a6) bg_button_pane_cp024

0xa380,	// (0x0006a521) vitu2_page_scroll_pane_g1

0xa388,	// (0x0006a529) vitu2_page_scroll_pane_g2

0x0001,

0xf84b,	// (0x0006f9ec) vitu2_page_scroll_pane_g

0xa390,	// (0x0006a531) vitu2_page_scroll_pane_t1

0xc047,	// (0x0006c1e8) popup_char_count_window_g1

0xa39f,	// (0x0006a540) popup_char_count_window_g2

0x0ec6,	// (0x00061067) popup_char_count_window_g3

0x0002,

0xf850,	// (0x0006f9f1) popup_char_count_window_g

0xa3a8,	// (0x0006a549) popup_char_count_window_t1

0x9ba1,	// (0x00069d42) main_vded2_pane

0xedd3,	// (0x0006ef74) aid_size_cell_imed_line

0xeddd,	// (0x0006ef7e) grid_imed_line_width_pane

0xa232,	// (0x0006a3d3) vid4_indicators_pane_g4

0xa3b6,	// (0x0006a557) cell_imed_line_width_pane_ParamLimits

0xa3b6,	// (0x0006a557) cell_imed_line_width_pane

0xa3ca,	// (0x0006a56b) cell_imed_line_width_pane_g1

0xa3d3,	// (0x0006a574) cell_imed_line_width_pane_g2

0x0001,

0xf857,	// (0x0006f9f8) cell_imed_line_width_pane_g

0x6723,	// (0x000668c4) main_vded2_pane_g1_ParamLimits

0x6723,	// (0x000668c4) main_vded2_pane_g1

0x6739,	// (0x000668da) main_vded2_pane_g2_ParamLimits

0x6739,	// (0x000668da) main_vded2_pane_g2

0x0001,

0xf85c,	// (0x0006f9fd) main_vded2_pane_g_ParamLimits

0xf85c,	// (0x0006f9fd) main_vded2_pane_g

0x674b,	// (0x000668ec) vded2_slider_pane_ParamLimits

0x674b,	// (0x000668ec) vded2_slider_pane

0x675b,	// (0x000668fc) aid_size_touch_vded2_end

0x6765,	// (0x00066906) aid_size_touch_vded2_playhead

0xa3db,	// (0x0006a57c) aid_size_touch_vded2_start

0xa3e3,	// (0x0006a584) vded2_slider_bg_pane

0xa3ec,	// (0x0006a58d) vded2_slider_pane_g1

0xa3f5,	// (0x0006a596) vded2_slider_pane_g2

0x676f,	// (0x00066910) vded2_slider_pane_g3

0x0002,

0xf861,	// (0x0006fa02) vded2_slider_pane_g

0xa3fd,	// (0x0006a59e) vded2_slider_bg_pane_g1

0xa406,	// (0x0006a5a7) vded2_slider_bg_pane_g2

0xa40f,	// (0x0006a5b0) vded2_slider_bg_pane_g3

0x0002,

0xf868,	// (0x0006fa09) vded2_slider_bg_pane_g

0x2b6d,	// (0x00062d0e) aid_postcard_touch_down_pane_ParamLimits

0x2b6d,	// (0x00062d0e) aid_postcard_touch_down_pane

0x2b83,	// (0x00062d24) aid_postcard_touch_up_pane_ParamLimits

0x2b83,	// (0x00062d24) aid_postcard_touch_up_pane

0x9ba1,	// (0x00069d42) main_blid2_pane

0x9cf5,	// (0x00069e96) popup_blid2_search_window

0xb7dd,	// (0x0006b97e) blid2_gps_pane

0xb7dd,	// (0x0006b97e) blid2_navig_pane

0xb7dd,	// (0x0006b97e) blid2_search_pane

0xb7dd,	// (0x0006b97e) blid2_tripm_pane

0x677a,	// (0x0006691b) blid2_search_pane_g1_ParamLimits

0x677a,	// (0x0006691b) blid2_search_pane_g1

0x6792,	// (0x00066933) blid2_search_pane_t1_ParamLimits

0x6792,	// (0x00066933) blid2_search_pane_t1

0x67a4,	// (0x00066945) aid_size_cell_blid2_gps_ParamLimits

0x67a4,	// (0x00066945) aid_size_cell_blid2_gps

0x67bc,	// (0x0006695d) blid2_gps_pane_g1_ParamLimits

0x67bc,	// (0x0006695d) blid2_gps_pane_g1

0x67d0,	// (0x00066971) grid_blid2_satellite_pane_ParamLimits

0x67d0,	// (0x00066971) grid_blid2_satellite_pane

0x67ea,	// (0x0006698b) blid2_navig_pane_g1_ParamLimits

0x67ea,	// (0x0006698b) blid2_navig_pane_g1

0x67f6,	// (0x00066997) blid2_navig_pane_t1_ParamLimits

0x67f6,	// (0x00066997) blid2_navig_pane_t1

0x6811,	// (0x000669b2) blid2_navig_pane_t2_ParamLimits

0x6811,	// (0x000669b2) blid2_navig_pane_t2

0x0001,

0xf86f,	// (0x0006fa10) blid2_navig_pane_t_ParamLimits

0xf86f,	// (0x0006fa10) blid2_navig_pane_t

0x682c,	// (0x000669cd) blid2_navig_ring_pane_ParamLimits

0x682c,	// (0x000669cd) blid2_navig_ring_pane

0x6845,	// (0x000669e6) blid2_speed_pane_ParamLimits

0x6845,	// (0x000669e6) blid2_speed_pane

0x6851,	// (0x000669f2) blid2_tripm_pane_g1_ParamLimits

0x6851,	// (0x000669f2) blid2_tripm_pane_g1

0x686c,	// (0x00066a0d) blid2_tripm_pane_g2_ParamLimits

0x686c,	// (0x00066a0d) blid2_tripm_pane_g2

0x6880,	// (0x00066a21) blid2_tripm_pane_g3_ParamLimits

0x6880,	// (0x00066a21) blid2_tripm_pane_g3

0x6894,	// (0x00066a35) blid2_tripm_pane_g4_ParamLimits

0x6894,	// (0x00066a35) blid2_tripm_pane_g4

0x68a8,	// (0x00066a49) blid2_tripm_pane_g5_ParamLimits

0x68a8,	// (0x00066a49) blid2_tripm_pane_g5

0x0005,

0xf874,	// (0x0006fa15) blid2_tripm_pane_g_ParamLimits

0xf874,	// (0x0006fa15) blid2_tripm_pane_g

0x68ce,	// (0x00066a6f) blid2_tripm_pane_t1_ParamLimits

0x68ce,	// (0x00066a6f) blid2_tripm_pane_t1

0x68e9,	// (0x00066a8a) blid2_tripm_pane_t2_ParamLimits

0x68e9,	// (0x00066a8a) blid2_tripm_pane_t2

0x6902,	// (0x00066aa3) blid2_tripm_pane_t3_ParamLimits

0x6902,	// (0x00066aa3) blid2_tripm_pane_t3

0x0003,

0xf881,	// (0x0006fa22) blid2_tripm_pane_t_ParamLimits

0xf881,	// (0x0006fa22) blid2_tripm_pane_t

0x6949,	// (0x00066aea) cell_blid2_satellite_pane_ParamLimits

0x6949,	// (0x00066aea) cell_blid2_satellite_pane

0x6967,	// (0x00066b08) cell_blid2_satellite_pane_g1

0xa418,	// (0x0006a5b9) cell_blid2_satellite_pane_t1

0xbf42,	// (0x0006c0e3) blid2_speed_pane_g1

0xa426,	// (0x0006a5c7) blid2_speed_pane_t1

0xa434,	// (0x0006a5d5) blid2_speed_pane_t2

0x0001,

0xf88a,	// (0x0006fa2b) blid2_speed_pane_t

0xbf42,	// (0x0006c0e3) blid2_navig_ring_pane_g1

0x6970,	// (0x00066b11) blid2_navig_ring_pane_g2

0x6978,	// (0x00066b19) blid2_navig_ring_pane_g3

0x6980,	// (0x00066b21) blid2_navig_ring_pane_g4

0x6988,	// (0x00066b29) blid2_navig_ring_pane_g5

0x0004,

0xf88f,	// (0x0006fa30) blid2_navig_ring_pane_g

0xb7dd,	// (0x0006b97e) bg_popup_window_pane_cp011

0xa442,	// (0x0006a5e3) popup_blid2_search_window_g1

0xa44a,	// (0x0006a5eb) popup_blid2_search_window_t1

0xa458,	// (0x0006a5f9) popup_blid2_search_window_t2

0x0001,

0xf89a,	// (0x0006fa3b) popup_blid2_search_window_t

0xc693,	// (0x0006c834) main_browser_pane_g1

0xbfa0,	// (0x0006c141) main_browser_pane_ParamLimits

0x9b93,	// (0x00069d34) bg_button_pane_cp011_ParamLimits

0x539a,	// (0x0006553b) cell_vitu2_function_pane_g1_ParamLimits

0xd1ca,	// (0x0006d36b) bg_popup_sub_pane_cp22_ParamLimits

0x5f02,	// (0x000660a3) input_focus_pane_cp08_ParamLimits

0x5f1d,	// (0x000660be) popup_vitu2_query_button_pane_ParamLimits

0x5f1d,	// (0x000660be) popup_vitu2_query_button_pane

0x5f2c,	// (0x000660cd) popup_vitu2_query_input_button_pane

0x5f34,	// (0x000660d5) popup_vitu2_query_window_g1_ParamLimits

0x5f40,	// (0x000660e1) popup_vitu2_query_window_g2_ParamLimits

0xf79b,	// (0x0006f93c) popup_vitu2_query_window_g_ParamLimits

0xb7dd,	// (0x0006b97e) bg_button_pane_cp026

0x6990,	// (0x00066b31) popup_vitu2_query_input_button_pane_g1

0xb7dd,	// (0x0006b97e) bg_button_pane_cp025

0xa466,	// (0x0006a607) popup_vitu2_query_button_pane_t1

0x39f4,	// (0x00063b95) main_mp3_pane_t6

0x3a02,	// (0x00063ba3) popup_slider_window_cp01

0xa19e,	// (0x0006a33f) cam4_battery_pane

0xa1f1,	// (0x0006a392) cam4_battery_pane_cp02

0xa300,	// (0x0006a4a1) cam4_battery_pane_cp01

0xa300,	// (0x0006a4a1) cam4_battery_pane_cp03

0x9df7,	// (0x00069f98) cam4_battery_pane_g1

0xbf42,	// (0x0006c0e3) cam4_battery_pane_g2

0x0001,

0xf89f,	// (0x0006fa40) cam4_battery_pane_g

0xe764,	// (0x0006e905) popup_blid_sat_info2_window_t11

0xcf38,	// (0x0006d0d9) aid_size_touch_mv_arrow_left_ParamLimits

0xcf63,	// (0x0006d104) aid_size_touch_mv_arrow_right_ParamLimits

0xcfc1,	// (0x0006d162) navi_pane_g1_ParamLimits

0xcfcd,	// (0x0006d16e) navi_pane_g2_ParamLimits

0xcffb,	// (0x0006d19c) navi_pane_g3_ParamLimits

0xf303,	// (0x0006f4a4) navi_pane_g_ParamLimits

0x2827,	// (0x000629c8) navi_pane_mv_t1_ParamLimits

0x45c4,	// (0x00064765) grid_imed_effect_pane_ParamLimits

0x1748,	// (0x000618e9) aid_placing_vt_slider_lsc

0xc5e2,	// (0x0006c783) aid_placing_vt_slider_prt

0xbe9d,	// (0x0006c03e) bg_tb_trans_pane_cp01_ParamLimits

0xea02,	// (0x0006eba3) popup_image_details_window_g1_ParamLimits

0xea15,	// (0x0006ebb6) popup_image_details_window_g2_ParamLimits

0xea2a,	// (0x0006ebcb) popup_image_details_window_g3_ParamLimits

0xea2a,	// (0x0006ebcb) popup_image_details_window_g3

0x01ee,	// (0x0006038f) popup_image_details_window_g_ParamLimits

0xea3e,	// (0x0006ebdf) popup_image_details_window_t1_ParamLimits

0xea50,	// (0x0006ebf1) popup_image_details_window_t2_ParamLimits

0xea69,	// (0x0006ec0a) popup_image_details_window_t3_ParamLimits

0xea7d,	// (0x0006ec1e) popup_image_details_window_t4_ParamLimits

0xea98,	// (0x0006ec39) popup_image_details_window_t5_ParamLimits

0x01f5,	// (0x00060396) popup_image_details_window_t_ParamLimits

0x6568,	// (0x00066709) cl_header_name_pane_ParamLimits

0x6568,	// (0x00066709) cl_header_name_pane

0x6998,	// (0x00066b39) cl_header_name_pane_t1_ParamLimits

0x6998,	// (0x00066b39) cl_header_name_pane_t1

0x69b9,	// (0x00066b5a) cl_header_name_pane_t2_ParamLimits

0x69b9,	// (0x00066b5a) cl_header_name_pane_t2

0x69fb,	// (0x00066b9c) cl_header_name_pane_t3_ParamLimits

0x69fb,	// (0x00066b9c) cl_header_name_pane_t3

0x0002,

0xf8a4,	// (0x0006fa45) cl_header_name_pane_t_ParamLimits

0xf8a4,	// (0x0006fa45) cl_header_name_pane_t

0xd08a,	// (0x0006d22b) navi_pane_mv_g2_ParamLimits

0x51af,	// (0x00065350) field_vitu2_entry_pane_g1_ParamLimits

0x51bb,	// (0x0006535c) field_vitu2_entry_pane_g2_ParamLimits

0xd1a8,	// (0x0006d349) field_vitu2_entry_pane_g3_ParamLimits

0xd1a8,	// (0x0006d349) field_vitu2_entry_pane_g3

0xf6a4,	// (0x0006f845) field_vitu2_entry_pane_g_ParamLimits

0x522a,	// (0x000653cb) cell_vitu2_itu_pane_g1_ParamLimits

0x5242,	// (0x000653e3) cell_vitu2_itu_pane_g2_ParamLimits

0x5242,	// (0x000653e3) cell_vitu2_itu_pane_g2

0x0001,

0xf6b0,	// (0x0006f851) cell_vitu2_itu_pane_g_ParamLimits

0xf6b0,	// (0x0006f851) cell_vitu2_itu_pane_g

0x9b93,	// (0x00069d34) bg_vkb2_func_pane_cp05_ParamLimits

0x9b93,	// (0x00069d34) bg_vkb2_func_pane_cp05

0x9b93,	// (0x00069d34) bg_vkb2_func_pane_cp03

0x9b93,	// (0x00069d34) bg_vkb2_func_pane_cp04

0x9b93,	// (0x00069d34) bg_vkb2_func_pane_cp10_ParamLimits

0x9b93,	// (0x00069d34) bg_vkb2_func_pane_cp10

0x64c4,	// (0x00066665) bg_vkb2_func_pane_cp08

0x649d,	// (0x0006663e) bg_vkb2_func_pane_cp06

0x64a9,	// (0x0006664a) bg_vkb2_func_pane_cp07

0x670e,	// (0x000668af) bg_vkb2_func_pane_cp11_ParamLimits

0x670e,	// (0x000668af) bg_vkb2_func_pane_cp11

0xa36b,	// (0x0006a50c) bg_vkb2_func_pane_cp12_ParamLimits

0xa36b,	// (0x0006a50c) bg_vkb2_func_pane_cp12

0xb7dd,	// (0x0006b97e) bg_vkb2_func_pane_cp09

0x53b7,	// (0x00065558) bg_vkb2_func_pane_g1

0xc952,	// (0x0006caf3) bg_vkb2_func_pane_g2

0x53bf,	// (0x00065560) bg_vkb2_func_pane_g3

0x53c7,	// (0x00065568) bg_vkb2_func_pane_g4

0x5d5d,	// (0x00065efe) bg_vkb2_func_pane_g5

0x53df,	// (0x00065580) bg_vkb2_func_pane_g6

0x53e7,	// (0x00065588) bg_vkb2_func_pane_g7

0x53d7,	// (0x00065578) bg_vkb2_func_pane_g8

0xc932,	// (0x0006cad3) bg_vkb2_func_pane_g9

0x0008,

0xf8ab,	// (0x0006fa4c) bg_vkb2_func_pane_g

0x68bc,	// (0x00066a5d) blid2_tripm_pane_g6_ParamLimits

0x68bc,	// (0x00066a5d) blid2_tripm_pane_g6

0x489e,	// (0x00064a3f) mp4_progress_pane_g1

0x6935,	// (0x00066ad6) blid2_tripm_values_pane_ParamLimits

0x6935,	// (0x00066ad6) blid2_tripm_values_pane

0x6a2c,	// (0x00066bcd) blid2_tripm_values_pane_t1

0x6a3a,	// (0x00066bdb) blid2_tripm_values_pane_t2

0x6a48,	// (0x00066be9) blid2_tripm_values_pane_t3

0x6a56,	// (0x00066bf7) blid2_tripm_values_pane_t4

0x6a64,	// (0x00066c05) blid2_tripm_values_pane_t5

0x6a72,	// (0x00066c13) blid2_tripm_values_pane_t6

0x6a80,	// (0x00066c21) blid2_tripm_values_pane_t7

0x6a8e,	// (0x00066c2f) blid2_tripm_values_pane_t8

0x6a9c,	// (0x00066c3d) blid2_tripm_values_pane_t9

0x0008,

0xf8be,	// (0x0006fa5f) blid2_tripm_values_pane_t

0x178a,	// (0x0006192b) call_video_pane_t1_ParamLimits

0x17a8,	// (0x00061949) call_video_pane_t2_ParamLimits

0xf1b1,	// (0x0006f352) call_video_pane_t_ParamLimits

0x2aeb,	// (0x00062c8c) msg_header_pane_g1_ParamLimits

0xd29e,	// (0x0006d43f) msg_header_pane_g2_ParamLimits

0xd29e,	// (0x0006d43f) msg_header_pane_g2

0x0001,

0xf3a1,	// (0x0006f542) msg_header_pane_g_ParamLimits

0xf3a1,	// (0x0006f542) msg_header_pane_g

0xbfa0,	// (0x0006c141) main_clock2_pane_ParamLimits

0x42b9,	// (0x0006445a) grid_clock2_toolbar_pane_ParamLimits

0x42b9,	// (0x0006445a) grid_clock2_toolbar_pane

0x42b9,	// (0x0006445a) listscroll_clock2_pane_ParamLimits

0x42b9,	// (0x0006445a) listscroll_clock2_pane

0x439d,	// (0x0006453e) main_clock2_pane_t3_ParamLimits

0x439d,	// (0x0006453e) main_clock2_pane_t3

0x43c1,	// (0x00064562) main_clock2_pane_t4_ParamLimits

0x43c1,	// (0x00064562) main_clock2_pane_t4

0xa474,	// (0x0006a615) cell_clock2_toolbar_pane

0xa47c,	// (0x0006a61d) cell_clock2_toolbar_pane_cp01

0xa47c,	// (0x0006a61d) cell_clock2_toolbar_pane_cp02

0xa484,	// (0x0006a625) cell_clock2_toolbar_pane_cp03

0xa48c,	// (0x0006a62d) list_clock2_pane

0xcebd,	// (0x0006d05e) scroll_pane_cp10

0xa494,	// (0x0006a635) list_single_clock2_pane_ParamLimits

0xa494,	// (0x0006a635) list_single_clock2_pane

0xc58b,	// (0x0006c72c) list_highlight_pane_cp08

0xa4a1,	// (0x0006a642) list_single_clock2_pane_t1

0xa4af,	// (0x0006a650) list_single_clock2_pane_t2

0x0001,

0xf8d1,	// (0x0006fa72) list_single_clock2_pane_t

0xb7dd,	// (0x0006b97e) bg_button_pane_cp10

0xa4bd,	// (0x0006a65e) cell_clock2_toolbar_pane_g1

0x2af9,	// (0x00062c9a) aid_main_viewer_pane_g1_ParamLimits

0x2af9,	// (0x00062c9a) aid_main_viewer_pane_g1

0x2b07,	// (0x00062ca8) aid_main_viewer_pane_g2_ParamLimits

0x2b07,	// (0x00062ca8) aid_main_viewer_pane_g2

0x2b15,	// (0x00062cb6) aid_main_viewer_pane_g3_ParamLimits

0x2b15,	// (0x00062cb6) aid_main_viewer_pane_g3

0x2b24,	// (0x00062cc5) aid_main_viewer_pane_g4_ParamLimits

0x2b24,	// (0x00062cc5) aid_main_viewer_pane_g4

0x0003,

0xf3b2,	// (0x0006f553) aid_main_viewer_pane_g_ParamLimits

0xf3b2,	// (0x0006f553) aid_main_viewer_pane_g

0x33c9,	// (0x0006356a) main_calc_pane_ParamLimits

0x33dd,	// (0x0006357e) main_dialer2_pane_ParamLimits

0x9ba1,	// (0x00069d42) main_cam6_pane

0x9ba1,	// (0x00069d42) main_vid6_pane

0x42c5,	// (0x00064466) listscroll_gen_pane_cp06_ParamLimits

0x42c5,	// (0x00064466) listscroll_gen_pane_cp06

0x43e4,	// (0x00064585) main_clock2_pane_t5_ParamLimits

0x43e4,	// (0x00064585) main_clock2_pane_t5

0x4442,	// (0x000645e3) aid_call2_pane_cp10_ParamLimits

0x4454,	// (0x000645f5) aid_call_pane_cp10_ParamLimits

0xcf2c,	// (0x0006d0cd) popup_clock_analogue_window_cp10_g1_ParamLimits

0xcf2c,	// (0x0006d0cd) popup_clock_analogue_window_cp10_g2_ParamLimits

0x4466,	// (0x00064607) popup_clock_analogue_window_cp10_g3_ParamLimits

0x4466,	// (0x00064607) popup_clock_analogue_window_cp10_g4_ParamLimits

0xcf2c,	// (0x0006d0cd) popup_clock_analogue_window_cp10_g5_ParamLimits

0xf5aa,	// (0x0006f74b) popup_clock_analogue_window_cp10_g_ParamLimits

0x447c,	// (0x0006461d) popup_clock_analogue_window_cp10_t1_ParamLimits

0x495f,	// (0x00064b00) cell_dialer2_keypad_pane_g2_ParamLimits

0x495f,	// (0x00064b00) cell_dialer2_keypad_pane_g2

0x0001,

0xf64e,	// (0x0006f7ef) cell_dialer2_keypad_pane_g_ParamLimits

0xf64e,	// (0x0006f7ef) cell_dialer2_keypad_pane_g

0xbf4c,	// (0x0006c0ed) cell_dialer2_keypad_pane_t1

0x57e7,	// (0x00065988) main_cset_text2_pane_ParamLimits

0x57e7,	// (0x00065988) main_cset_text2_pane

0x6396,	// (0x00066537) area_vitu2_query_pane_g1_ParamLimits

0x63a2,	// (0x00066543) area_vitu2_query_pane_g2_ParamLimits

0xf7ee,	// (0x0006f98f) area_vitu2_query_pane_g_ParamLimits

0x6479,	// (0x0006661a) area_vitu2_query_pane_t7_ParamLimits

0x6479,	// (0x0006661a) area_vitu2_query_pane_t7

0x649d,	// (0x0006663e) bg_button_pane_cp018_ParamLimits

0x64a9,	// (0x0006664a) bg_button_pane_cp021_ParamLimits

0x64b5,	// (0x00066656) bg_button_pane_cp022_ParamLimits

0x64c4,	// (0x00066665) bg_vkb2_func_pane_cp08_ParamLimits

0x649d,	// (0x0006663e) bg_vkb2_func_pane_cp06_ParamLimits

0x64a9,	// (0x0006664a) bg_vkb2_func_pane_cp07_ParamLimits

0x64d4,	// (0x00066675) input_focus_pane_cp09_ParamLimits

0x6aaa,	// (0x00066c4b) cam6_autofocus_pane_ParamLimits

0x6aaa,	// (0x00066c4b) cam6_autofocus_pane

0x6ab6,	// (0x00066c57) cam6_image_uncrop_pane_ParamLimits

0x6ab6,	// (0x00066c57) cam6_image_uncrop_pane

0x6ac6,	// (0x00066c67) cam6_indi_pane_ParamLimits

0x6ac6,	// (0x00066c67) cam6_indi_pane

0x6adc,	// (0x00066c7d) cam6_mode_pane_ParamLimits

0x6adc,	// (0x00066c7d) cam6_mode_pane

0x6aee,	// (0x00066c8f) cam6_timer_pane_ParamLimits

0x6aee,	// (0x00066c8f) cam6_timer_pane

0x6afa,	// (0x00066c9b) cam6_zoom_pane_ParamLimits

0x6afa,	// (0x00066c9b) cam6_zoom_pane

0x6b07,	// (0x00066ca8) cam6_mode_pane_g1_ParamLimits

0x6b07,	// (0x00066ca8) cam6_mode_pane_g1

0x6b17,	// (0x00066cb8) cam6_mode_pane_g2_ParamLimits

0x6b17,	// (0x00066cb8) cam6_mode_pane_g2

0x6b27,	// (0x00066cc8) cam6_mode_pane_g3_ParamLimits

0x6b27,	// (0x00066cc8) cam6_mode_pane_g3

0x6b37,	// (0x00066cd8) cam6_mode_pane_g4_ParamLimits

0x6b37,	// (0x00066cd8) cam6_mode_pane_g4

0x0003,

0xf8d6,	// (0x0006fa77) cam6_mode_pane_g_ParamLimits

0xf8d6,	// (0x0006fa77) cam6_mode_pane_g

0xe61a,	// (0x0006e7bb) bg_tb_trans_pane_cp08_ParamLimits

0xe61a,	// (0x0006e7bb) bg_tb_trans_pane_cp08

0xa4d3,	// (0x0006a674) cam6_battery_pane_ParamLimits

0xa4d3,	// (0x0006a674) cam6_battery_pane

0xa4e9,	// (0x0006a68a) cam6_indi_pane_g1_ParamLimits

0xa4e9,	// (0x0006a68a) cam6_indi_pane_g1

0xa4fb,	// (0x0006a69c) cam6_indi_pane_g2_ParamLimits

0xa4fb,	// (0x0006a69c) cam6_indi_pane_g2

0xa50d,	// (0x0006a6ae) cam6_indi_pane_g3_ParamLimits

0xa50d,	// (0x0006a6ae) cam6_indi_pane_g3

0x0002,

0xf8df,	// (0x0006fa80) cam6_indi_pane_g_ParamLimits

0xf8df,	// (0x0006fa80) cam6_indi_pane_g

0xa51f,	// (0x0006a6c0) cam6_indi_pane_t1_ParamLimits

0xa51f,	// (0x0006a6c0) cam6_indi_pane_t1

0x4f80,	// (0x00065121) cam6_autofocus_pane_g1

0x4f78,	// (0x00065119) cam6_autofocus_pane_g2

0x4f90,	// (0x00065131) cam6_autofocus_pane_g3

0x4f88,	// (0x00065129) cam6_autofocus_pane_g4

0x0003,

0xf8e6,	// (0x0006fa87) cam6_autofocus_pane_g

0xa545,	// (0x0006a6e6) cam6_timer_pane_g1

0xa54d,	// (0x0006a6ee) cam6_timer_pane_t1

0xa55b,	// (0x0006a6fc) cam6_zoom_cont_pane

0xa563,	// (0x0006a704) cam6_zoom_pane_g1

0xa56c,	// (0x0006a70d) cam6_zoom_pane_g2

0x6b47,	// (0x00066ce8) cam6_zoom_pane_g3

0x0002,

0xf8ef,	// (0x0006fa90) cam6_zoom_pane_g

0xbf42,	// (0x0006c0e3) cam6_battery_pane_g1

0xbf42,	// (0x0006c0e3) cam6_battery_pane_g2

0x0001,

0xf08c,	// (0x0006f22d) cam6_battery_pane_g

0xa563,	// (0x0006a704) cam6_zoom_cont_pane_g1

0xa56c,	// (0x0006a70d) cam6_zoom_cont_pane_g2

0xa575,	// (0x0006a716) cam6_zoom_cont_pane_g3

0x0002,

0xf8f6,	// (0x0006fa97) cam6_zoom_cont_pane_g

0x6b65,	// (0x00066d06) cam6_mode_pane_cp_ParamLimits

0x6b65,	// (0x00066d06) cam6_mode_pane_cp

0x6b77,	// (0x00066d18) cam6_zoom_pane_cp_ParamLimits

0x6b77,	// (0x00066d18) cam6_zoom_pane_cp

0x6b83,	// (0x00066d24) vid6_image_uncrop_cif_pane_ParamLimits

0x6b83,	// (0x00066d24) vid6_image_uncrop_cif_pane

0x6b93,	// (0x00066d34) vid6_image_uncrop_nhd_pane_ParamLimits

0x6b93,	// (0x00066d34) vid6_image_uncrop_nhd_pane

0x6ba2,	// (0x00066d43) vid6_image_uncrop_vga_pane_ParamLimits

0x6ba2,	// (0x00066d43) vid6_image_uncrop_vga_pane

0x6bb1,	// (0x00066d52) vid6_image_uncrop_wvga_pane_ParamLimits

0x6bb1,	// (0x00066d52) vid6_image_uncrop_wvga_pane

0x6bc0,	// (0x00066d61) vid6_indi_pane_ParamLimits

0x6bc0,	// (0x00066d61) vid6_indi_pane

0xe61a,	// (0x0006e7bb) bg_tb_trans_pane_cp09_ParamLimits

0xe61a,	// (0x0006e7bb) bg_tb_trans_pane_cp09

0xa58d,	// (0x0006a72e) cam6_battery_pane_cp_ParamLimits

0xa58d,	// (0x0006a72e) cam6_battery_pane_cp

0xa599,	// (0x0006a73a) vid6_indi_pane_g1_ParamLimits

0xa599,	// (0x0006a73a) vid6_indi_pane_g1

0xa5ab,	// (0x0006a74c) vid6_indi_pane_g2_ParamLimits

0xa5ab,	// (0x0006a74c) vid6_indi_pane_g2

0xa5bd,	// (0x0006a75e) vid6_indi_pane_g3_ParamLimits

0xa5bd,	// (0x0006a75e) vid6_indi_pane_g3

0xa5d2,	// (0x0006a773) vid6_indi_pane_g4_ParamLimits

0xa5d2,	// (0x0006a773) vid6_indi_pane_g4

0xa5e7,	// (0x0006a788) vid6_indi_pane_g5_ParamLimits

0xa5e7,	// (0x0006a788) vid6_indi_pane_g5

0x0004,

0xf8fd,	// (0x0006fa9e) vid6_indi_pane_g_ParamLimits

0xf8fd,	// (0x0006fa9e) vid6_indi_pane_g

0xa601,	// (0x0006a7a2) vid6_indi_pane_t1_ParamLimits

0xa601,	// (0x0006a7a2) vid6_indi_pane_t1

0xa617,	// (0x0006a7b8) vid6_indi_pane_t2_ParamLimits

0xa617,	// (0x0006a7b8) vid6_indi_pane_t2

0xa63f,	// (0x0006a7e0) vid6_indi_pane_t3_ParamLimits

0xa63f,	// (0x0006a7e0) vid6_indi_pane_t3

0xa667,	// (0x0006a808) vid6_indi_pane_t4_ParamLimits

0xa667,	// (0x0006a808) vid6_indi_pane_t4

0x0003,

0xf908,	// (0x0006faa9) vid6_indi_pane_t_ParamLimits

0xf908,	// (0x0006faa9) vid6_indi_pane_t

0xa68b,	// (0x0006a82c) wait_bar_pane_cp08

0x6bd8,	// (0x00066d79) main_cset_text2_pane_t1_ParamLimits

0x6bd8,	// (0x00066d79) main_cset_text2_pane_t1

0x6b50,	// (0x00066cf1) listscroll_gen_pane_cp06_t1_ParamLimits

0x6b50,	// (0x00066cf1) listscroll_gen_pane_cp06_t1

0x9ba1,	// (0x00069d42) main_cam6_set_pane

0xa190,	// (0x0006a331) bg_tb_trans_pane_cp06_ParamLimits

0xa1a6,	// (0x0006a347) cam4_indicators_pane_g1_ParamLimits

0xa1b7,	// (0x0006a358) cam4_indicators_pane_g2_ParamLimits

0xf680,	// (0x0006f821) cam4_indicators_pane_g_ParamLimits

0xa1cf,	// (0x0006a370) cam4_indicators_pane_t1_ParamLimits

0x9b93,	// (0x00069d34) bg_tb_trans_pane_cp07_ParamLimits

0xa1f9,	// (0x0006a39a) vid4_indicators_pane_g1_ParamLimits

0xa20d,	// (0x0006a3ae) vid4_indicators_pane_g2_ParamLimits

0xa221,	// (0x0006a3c2) vid4_indicators_pane_g3_ParamLimits

0xa232,	// (0x0006a3d3) vid4_indicators_pane_g4_ParamLimits

0xf692,	// (0x0006f833) vid4_indicators_pane_g_ParamLimits

0xa24e,	// (0x0006a3ef) vid4_indicators_pane_t1_ParamLimits

0xa308,	// (0x0006a4a9) vid4_progress_pane_g1_ParamLimits

0xa318,	// (0x0006a4b9) vid4_progress_pane_g2_ParamLimits

0x6664,	// (0x00066805) vid4_progress_pane_g3_ParamLimits

0xa328,	// (0x0006a4c9) vid4_progress_pane_g4_ParamLimits

0xf839,	// (0x0006f9da) vid4_progress_pane_g_ParamLimits

0x6676,	// (0x00066817) vid4_progress_pane_t1_ParamLimits

0xa340,	// (0x0006a4e1) vid4_progress_pane_t2_ParamLimits

0xa355,	// (0x0006a4f6) vid4_progress_pane_t3_ParamLimits

0xf844,	// (0x0006f9e5) vid4_progress_pane_t_ParamLimits

0x668c,	// (0x0006682d) wait_bar_pane_cp07_ParamLimits

0x6bf6,	// (0x00066d97) main_cam6_set_pane_g2_ParamLimits

0x6bf6,	// (0x00066d97) main_cam6_set_pane_g2

0x6c1a,	// (0x00066dbb) main_cset6_listscroll_pane_ParamLimits

0x6c1a,	// (0x00066dbb) main_cset6_listscroll_pane

0x6c36,	// (0x00066dd7) main_cset6_slider_pane_ParamLimits

0x6c36,	// (0x00066dd7) main_cset6_slider_pane

0x6c4c,	// (0x00066ded) main_cset6_text2_pane_ParamLimits

0x6c4c,	// (0x00066ded) main_cset6_text2_pane

0xa69a,	// (0x0006a83b) main_cset6_text_pane

0xa6a2,	// (0x0006a843) main_cset_list_pane_copy1_ParamLimits

0xa6a2,	// (0x0006a843) main_cset_list_pane_copy1

0xa6b2,	// (0x0006a853) scroll_pane_cp028_copy1

0x6c5a,	// (0x00066dfb) cset_list_set_pane_copy1

0x6c6c,	// (0x00066e0d) aid_position_infowindow_above_copy1

0x6c74,	// (0x00066e15) aid_position_infowindow_below_copy1

0x6c7c,	// (0x00066e1d) cset_list_set_pane_g1_copy1

0x6c84,	// (0x00066e25) cset_list_set_pane_g3_copy1_ParamLimits

0x6c84,	// (0x00066e25) cset_list_set_pane_g3_copy1

0x6c93,	// (0x00066e34) cset_list_set_pane_t1_copy1_ParamLimits

0x6c93,	// (0x00066e34) cset_list_set_pane_t1_copy1

0xbe9d,	// (0x0006c03e) list_highlight_pane_cp021_copy1_ParamLimits

0xbe9d,	// (0x0006c03e) list_highlight_pane_cp021_copy1

0xa6bb,	// (0x0006a85c) cset6_slider_pane_ParamLimits

0xa6bb,	// (0x0006a85c) cset6_slider_pane

0xa6e7,	// (0x0006a888) main_cset6_slider_pane_g1_ParamLimits

0xa6e7,	// (0x0006a888) main_cset6_slider_pane_g1

0x6ca8,	// (0x00066e49) main_cset6_slider_pane_g2_ParamLimits

0x6ca8,	// (0x00066e49) main_cset6_slider_pane_g2

0xa70f,	// (0x0006a8b0) main_cset6_slider_pane_g3_ParamLimits

0xa70f,	// (0x0006a8b0) main_cset6_slider_pane_g3

0x6cd0,	// (0x00066e71) main_cset6_slider_pane_g4_ParamLimits

0x6cd0,	// (0x00066e71) main_cset6_slider_pane_g4

0xa71b,	// (0x0006a8bc) main_cset6_slider_pane_g5_ParamLimits

0xa71b,	// (0x0006a8bc) main_cset6_slider_pane_g5

0x58ba,	// (0x00065a5b) main_cset6_slider_pane_g7_ParamLimits

0x58ba,	// (0x00065a5b) main_cset6_slider_pane_g7

0x58c6,	// (0x00065a67) main_cset6_slider_pane_g8_ParamLimits

0x58c6,	// (0x00065a67) main_cset6_slider_pane_g8

0x58d2,	// (0x00065a73) main_cset6_slider_pane_g9_ParamLimits

0x58d2,	// (0x00065a73) main_cset6_slider_pane_g9

0x58de,	// (0x00065a7f) main_cset6_slider_pane_g10_ParamLimits

0x58de,	// (0x00065a7f) main_cset6_slider_pane_g10

0x58ea,	// (0x00065a8b) main_cset6_slider_pane_g11_ParamLimits

0x58ea,	// (0x00065a8b) main_cset6_slider_pane_g11

0x58f6,	// (0x00065a97) main_cset6_slider_pane_g12_ParamLimits

0x58f6,	// (0x00065a97) main_cset6_slider_pane_g12

0x5902,	// (0x00065aa3) main_cset6_slider_pane_g13_ParamLimits

0x5902,	// (0x00065aa3) main_cset6_slider_pane_g13

0x590e,	// (0x00065aaf) main_cset6_slider_pane_g14_ParamLimits

0x590e,	// (0x00065aaf) main_cset6_slider_pane_g14

0x6cdc,	// (0x00066e7d) main_cset6_slider_pane_g15_ParamLimits

0x6cdc,	// (0x00066e7d) main_cset6_slider_pane_g15

0xa265,	// (0x0006a406) main_cset6_slider_pane_g16_ParamLimits

0xa265,	// (0x0006a406) main_cset6_slider_pane_g16

0xa271,	// (0x0006a412) main_cset6_slider_pane_g17_ParamLimits

0xa271,	// (0x0006a412) main_cset6_slider_pane_g17

0x0011,

0xf911,	// (0x0006fab2) main_cset6_slider_pane_g_ParamLimits

0xf911,	// (0x0006fab2) main_cset6_slider_pane_g

0xa727,	// (0x0006a8c8) main_cset6_slider_pane_t1_ParamLimits

0xa727,	// (0x0006a8c8) main_cset6_slider_pane_t1

0x6d0c,	// (0x00066ead) main_cset6_slider_pane_t2_ParamLimits

0x6d0c,	// (0x00066ead) main_cset6_slider_pane_t2

0x6d37,	// (0x00066ed8) main_cset6_slider_pane_t3_ParamLimits

0x6d37,	// (0x00066ed8) main_cset6_slider_pane_t3

0x6d62,	// (0x00066f03) main_cset6_slider_pane_t4_ParamLimits

0x6d62,	// (0x00066f03) main_cset6_slider_pane_t4

0x6d8d,	// (0x00066f2e) main_cset6_slider_pane_t5_ParamLimits

0x6d8d,	// (0x00066f2e) main_cset6_slider_pane_t5

0xa768,	// (0x0006a909) main_cset6_slider_pane_t7_ParamLimits

0xa768,	// (0x0006a909) main_cset6_slider_pane_t7

0x6db8,	// (0x00066f59) main_cset6_slider_pane_t8_ParamLimits

0x6db8,	// (0x00066f59) main_cset6_slider_pane_t8

0x6ddc,	// (0x00066f7d) main_cset6_slider_pane_t9_ParamLimits

0x6ddc,	// (0x00066f7d) main_cset6_slider_pane_t9

0x6e00,	// (0x00066fa1) main_cset6_slider_pane_t10_ParamLimits

0x6e00,	// (0x00066fa1) main_cset6_slider_pane_t10

0x6e24,	// (0x00066fc5) main_cset6_slider_pane_t11_ParamLimits

0x6e24,	// (0x00066fc5) main_cset6_slider_pane_t11

0xa79e,	// (0x0006a93f) main_cset6_slider_pane_t14_ParamLimits

0xa79e,	// (0x0006a93f) main_cset6_slider_pane_t14

0xa7d7,	// (0x0006a978) main_cset6_slider_pane_t15_ParamLimits

0xa7d7,	// (0x0006a978) main_cset6_slider_pane_t15

0x000b,

0xf936,	// (0x0006fad7) main_cset6_slider_pane_t_ParamLimits

0xf936,	// (0x0006fad7) main_cset6_slider_pane_t

0x6e48,	// (0x00066fe9) cset_slider_pane_g1_copy1

0x6e51,	// (0x00066ff2) cset_slider_pane_g2_copy1

0x6e5a,	// (0x00066ffb) cset_slider_pane_g3_copy1

0xb7dd,	// (0x0006b97e) bg_popup_sub_pane_cp011_copy1

0xa819,	// (0x0006a9ba) main_cset_text_pane_g1_copy1

0x6055,	// (0x000661f6) main_cset_text_pane_t1_copy1

0x6063,	// (0x00066204) main_cset_text_pane_t2_copy1

0x6071,	// (0x00066212) main_cset_text_pane_t3_copy1

0x607f,	// (0x00066220) main_cset_text_pane_t4_copy1

0x608d,	// (0x0006622e) main_cset_text_pane_t5_copy1

0xa821,	// (0x0006a9c2) main_cset_text_pane_t6_copy1

0xa82f,	// (0x0006a9d0) main_cset_text_pane_t7_copy1

0x6bd8,	// (0x00066d79) main_cset_text2_pane_t1_copy1

0x9b93,	// (0x00069d34) main_ncimui_pane

0x3621,	// (0x000637c2) popup_query_ncimui_window_ParamLimits

0x3621,	// (0x000637c2) popup_query_ncimui_window

0xeb75,	// (0x0006ed16) field_cale_ev2_pane_g4_ParamLimits

0xeb75,	// (0x0006ed16) field_cale_ev2_pane_g4

0x4848,	// (0x000649e9) cell_video_dialer_keypad_pane_g2_ParamLimits

0x4848,	// (0x000649e9) cell_video_dialer_keypad_pane_g2

0x0001,

0xf625,	// (0x0006f7c6) cell_video_dialer_keypad_pane_g_ParamLimits

0xf625,	// (0x0006f7c6) cell_video_dialer_keypad_pane_g

0x4860,	// (0x00064a01) cell_video_dialer_keypad_pane_t1

0xb7dd,	// (0x0006b97e) bg_popup_window_pane_cp012

0xcdb5,	// (0x0006cf56) heading_pane_cp06

0xa85b,	// (0x0006a9fc) ncim_query_content_pane

0xb7dd,	// (0x0006b97e) bg_popup_heading_pane_cp01

0xa863,	// (0x0006aa04) ncim_heading_pane_t1

0xa871,	// (0x0006aa12) ncim_indicator_popup_pane

0xa883,	// (0x0006aa24) ncim_query_button_pane

0xa897,	// (0x0006aa38) ncim_query_content_pane_t1

0xa8a9,	// (0x0006aa4a) ncim_query_content_pane_t2

0x0005,

0xf960,	// (0x0006fb01) ncim_query_content_pane_t

0xa8e3,	// (0x0006aa84) ncim_query_list_pane

0xa8f5,	// (0x0006aa96) ncim_query_popup_pane

0xa871,	// (0x0006aa12) ncim_indicator_popup_pane_ParamLimits

0x6fa9,	// (0x0006714a) ncim_query_content_pane_g1_ParamLimits

0x6fa9,	// (0x0006714a) ncim_query_content_pane_g1

0xa897,	// (0x0006aa38) ncim_query_content_pane_t1_ParamLimits

0xa8a9,	// (0x0006aa4a) ncim_query_content_pane_t2_ParamLimits

0x6fb5,	// (0x00067156) ncim_query_content_pane_t3_ParamLimits

0x6fb5,	// (0x00067156) ncim_query_content_pane_t3

0x6fdd,	// (0x0006717e) ncim_query_content_pane_t4_ParamLimits

0x6fdd,	// (0x0006717e) ncim_query_content_pane_t4

0x7005,	// (0x000671a6) ncim_query_content_pane_t5_ParamLimits

0x7005,	// (0x000671a6) ncim_query_content_pane_t5

0xa8bb,	// (0x0006aa5c) ncim_query_content_pane_t6_ParamLimits

0xa8bb,	// (0x0006aa5c) ncim_query_content_pane_t6

0xf960,	// (0x0006fb01) ncim_query_content_pane_t_ParamLimits

0xa8e3,	// (0x0006aa84) ncim_query_list_pane_ParamLimits

0xa8f5,	// (0x0006aa96) ncim_query_popup_pane_ParamLimits

0xa909,	// (0x0006aaaa) wait_bar_pane_cp04

0xb7dd,	// (0x0006b97e) input_focus_pane_cp011

0xa911,	// (0x0006aab2) ncim_query_popup_pane_t1

0xa91f,	// (0x0006aac0) ncim_list_query_list_pane_ParamLimits

0xa91f,	// (0x0006aac0) ncim_list_query_list_pane

0xb7dd,	// (0x0006b97e) bg_button_pane_cp027

0xa92c,	// (0x0006aacd) ncim_query_button_pane_g1

0xb7dd,	// (0x0006b97e) list_highlight_pane_cp012

0xa936,	// (0x0006aad7) ncim_list_query_list_pane_g1

0xa93e,	// (0x0006aadf) ncim_list_query_list_pane_t1

0xa1c3,	// (0x0006a364) cam4_indicators_pane_g3_ParamLimits

0xa1c3,	// (0x0006a364) cam4_indicators_pane_g3

0xa23e,	// (0x0006a3df) vid4_indicators_pane_g5_ParamLimits

0xa23e,	// (0x0006a3df) vid4_indicators_pane_g5

0xa334,	// (0x0006a4d5) vid4_progress_pane_g5_ParamLimits

0xa334,	// (0x0006a4d5) vid4_progress_pane_g5

0x6e94,	// (0x00067035) main_ncimui_pane_g1

0x6efd,	// (0x0006709e) ncimui_group_query_pane_ParamLimits

0x6efd,	// (0x0006709e) ncimui_group_query_pane

0x6f45,	// (0x000670e6) ncimui_list_pane_ParamLimits

0x6f45,	// (0x000670e6) ncimui_list_pane

0x6f6c,	// (0x0006710d) ncimui_text_pane_ParamLimits

0x6f6c,	// (0x0006710d) ncimui_text_pane

0x702d,	// (0x000671ce) ncimui_text_pane_t1_ParamLimits

0x702d,	// (0x000671ce) ncimui_text_pane_t1

0xa94c,	// (0x0006aaed) ncimui_list_single_graphic_pane_ParamLimits

0xa94c,	// (0x0006aaed) ncimui_list_single_graphic_pane

0x704b,	// (0x000671ec) ncimui_query_pane_ParamLimits

0x704b,	// (0x000671ec) ncimui_query_pane

0xb7dd,	// (0x0006b97e) list_highlight_pane_cp013

0xa95c,	// (0x0006aafd) ncim_list_query_list_pane_t1_copy1

0xa96a,	// (0x0006ab0b) ncim_list_single_graphic_pane_g1

0x705e,	// (0x000671ff) ncim_query_button_pane_cp01

0x706a,	// (0x0006720b) ncim_query_entry_pane_ParamLimits

0x706a,	// (0x0006720b) ncim_query_entry_pane

0x707d,	// (0x0006721e) ncimui_query_pane_g1

0x7089,	// (0x0006722a) ncimui_query_pane_t1_ParamLimits

0x7089,	// (0x0006722a) ncimui_query_pane_t1

0xbe9d,	// (0x0006c03e) input_focus_pane_cp012

0xa972,	// (0x0006ab13) ncim_query_entry_pane_t1

0xbfa0,	// (0x0006c141) main_im_pane_ParamLimits

0x9b93,	// (0x00069d34) main_mobtv_pane_ParamLimits

0x9b93,	// (0x00069d34) main_mobtv_pane

0x6cf4,	// (0x00066e95) main_cset6_slider_pane_g18_ParamLimits

0x6cf4,	// (0x00066e95) main_cset6_slider_pane_g18

0x6d00,	// (0x00066ea1) main_cset6_slider_pane_g19_ParamLimits

0x6d00,	// (0x00066ea1) main_cset6_slider_pane_g19

0xbf20,	// (0x0006c0c1) bg_main_mobtv_pane_ParamLimits

0xbf20,	// (0x0006c0c1) bg_main_mobtv_pane

0x70a2,	// (0x00067243) main_mobtv_info_pane

0x70ab,	// (0x0006724c) main_mobtv_loading_pane_ParamLimits

0x70ab,	// (0x0006724c) main_mobtv_loading_pane

0xa984,	// (0x0006ab25) main_mobtv_pg_channel_list_pane

0xa98e,	// (0x0006ab2f) main_mobtv_pg_hdr_pane

0x70b8,	// (0x00067259) main_mobtv_programe_curr_pane_ParamLimits

0x70b8,	// (0x00067259) main_mobtv_programe_curr_pane

0x70c5,	// (0x00067266) main_mobtv_programe_next_pane_ParamLimits

0x70c5,	// (0x00067266) main_mobtv_programe_next_pane

0xa997,	// (0x0006ab38) popup_mobtv_noti_window

0xbf42,	// (0x0006c0e3) main_tv_pg_hdr_pane_g1

0xa99f,	// (0x0006ab40) main_tv_pg_hdr_pane_g2

0xa9a7,	// (0x0006ab48) main_tv_pg_hdr_pane_g3

0xa9af,	// (0x0006ab50) main_tv_pg_hdr_pane_g4

0xa9b7,	// (0x0006ab58) main_tv_pg_hdr_pane_g5

0xa9c1,	// (0x0006ab62) main_tv_pg_hdr_pane_g6

0xa9cb,	// (0x0006ab6c) main_tv_pg_hdr_pane_g7

0xa9d5,	// (0x0006ab76) main_tv_pg_hdr_pane_g8

0xa9df,	// (0x0006ab80) main_tv_pg_hdr_pane_g9

0xa9e9,	// (0x0006ab8a) main_tv_pg_hdr_pane_g10

0xa9f3,	// (0x0006ab94) main_tv_pg_hdr_pane_g11

0x000a,

0xf96d,	// (0x0006fb0e) main_tv_pg_hdr_pane_g

0xa9fd,	// (0x0006ab9e) main_tv_pg_hdr_pane_t1

0xaa0b,	// (0x0006abac) main_tv_pg_hdr_pane_t2

0xaa19,	// (0x0006abba) main_tv_pg_hdr_pane_t3

0xaa29,	// (0x0006abca) main_tv_pg_hdr_pane_t4

0xaa39,	// (0x0006abda) main_tv_pg_hdr_pane_t5

0x0004,

0xf984,	// (0x0006fb25) main_tv_pg_hdr_pane_t

0xaa49,	// (0x0006abea) single_mobtv_pg_channel_pane_ParamLimits

0xaa49,	// (0x0006abea) single_mobtv_pg_channel_pane

0xaa5b,	// (0x0006abfc) single_mobtv_pg_channel_table_pane

0xca55,	// (0x0006cbf6) single_mobtv_pg_channel_thumb_pane

0xaa64,	// (0x0006ac05) single_tv_pg_channel_pane_g1

0xaa6d,	// (0x0006ac0e) single_tv_pg_channel_pane_g2

0x0001,

0xf98f,	// (0x0006fb30) single_tv_pg_channel_pane_g

0xbf04,	// (0x0006c0a5) bg_single_mobtv_pg_channel_thumb_pane_ParamLimits

0xbf04,	// (0x0006c0a5) bg_single_mobtv_pg_channel_thumb_pane

0xaa76,	// (0x0006ac17) single_mobtv_pg_channel_thumb_pane_g1_ParamLimits

0xaa76,	// (0x0006ac17) single_mobtv_pg_channel_thumb_pane_g1

0xaa84,	// (0x0006ac25) single_mobtv_pg_channel_thumb_pane_g2_ParamLimits

0xaa84,	// (0x0006ac25) single_mobtv_pg_channel_thumb_pane_g2

0xaa90,	// (0x0006ac31) single_mobtv_pg_channel_thumb_pane_g3_ParamLimits

0xaa90,	// (0x0006ac31) single_mobtv_pg_channel_thumb_pane_g3

0x0002,

0xf994,	// (0x0006fb35) single_mobtv_pg_channel_thumb_pane_g_ParamLimits

0xf994,	// (0x0006fb35) single_mobtv_pg_channel_thumb_pane_g

0xaa9c,	// (0x0006ac3d) single_mobtv_pg_channel_thumb_pane_t1

0xaaaa,	// (0x0006ac4b) single_mobtv_pg_channel_thumb_pane_t2

0x0001,

0xf99b,	// (0x0006fb3c) single_mobtv_pg_channel_thumb_pane_t

0xbf42,	// (0x0006c0e3) bg_single_mobtv_pg_channel_table_pane_g1

0xbf42,	// (0x0006c0e3) bg_single_mobtv_pg_channel_table_pane_g2

0x0001,

0xf08c,	// (0x0006f22d) bg_single_mobtv_pg_channel_table_pane_g

0xaab8,	// (0x0006ac59) single_mobtv_pg_channel_table_pane_t1

0xaac6,	// (0x0006ac67) single_mobtv_pg_channel_table_pane_t2

0x0001,

0xf9a0,	// (0x0006fb41) single_mobtv_pg_channel_table_pane_t

0x70da,	// (0x0006727b) main_mobtv_info_pane_g1_ParamLimits

0x70da,	// (0x0006727b) main_mobtv_info_pane_g1

0x70f8,	// (0x00067299) main_mobtv_info_pane_t1_ParamLimits

0x70f8,	// (0x00067299) main_mobtv_info_pane_t1

0x7170,	// (0x00067311) main_mobtv_info_pane_t2_ParamLimits

0x7170,	// (0x00067311) main_mobtv_info_pane_t2

0x0002,

0xf9aa,	// (0x0006fb4b) main_mobtv_info_pane_t_ParamLimits

0xf9aa,	// (0x0006fb4b) main_mobtv_info_pane_t

0x71ff,	// (0x000673a0) wait_bar_pane_cp05

0x7211,	// (0x000673b2) main_mobtv_loading_pane_g1_ParamLimits

0x7211,	// (0x000673b2) main_mobtv_loading_pane_g1

0x7224,	// (0x000673c5) main_mobtv_loading_pane_g2_ParamLimits

0x7224,	// (0x000673c5) main_mobtv_loading_pane_g2

0x7230,	// (0x000673d1) main_mobtv_loading_pane_g3_ParamLimits

0x7230,	// (0x000673d1) main_mobtv_loading_pane_g3

0x0002,

0xf9b1,	// (0x0006fb52) main_mobtv_loading_pane_g_ParamLimits

0xf9b1,	// (0x0006fb52) main_mobtv_loading_pane_g

0xaad4,	// (0x0006ac75) main_mobtv_loading_pane_t1_ParamLimits

0xaad4,	// (0x0006ac75) main_mobtv_loading_pane_t1

0xaaec,	// (0x0006ac8d) main_mobtv_loading_pane_t2_ParamLimits

0xaaec,	// (0x0006ac8d) main_mobtv_loading_pane_t2

0x0001,

0xf9b8,	// (0x0006fb59) main_mobtv_loading_pane_t_ParamLimits

0xf9b8,	// (0x0006fb59) main_mobtv_loading_pane_t

0x7243,	// (0x000673e4) wait_bar_pane_cp06_ParamLimits

0x7243,	// (0x000673e4) wait_bar_pane_cp06

0xab10,	// (0x0006acb1) main_mobtv_programe_curr_pane_t1

0xab1e,	// (0x0006acbf) main_mobtv_programe_curr_pane_t2

0x0001,

0xf9bd,	// (0x0006fb5e) main_mobtv_programe_curr_pane_t

0xab2c,	// (0x0006accd) main_mobtv_programe_next_pane_t1

0xab3a,	// (0x0006acdb) main_mobtv_programe_next_pane_t2

0xab48,	// (0x0006ace9) main_mobtv_programe_next_pane_t3

0x0002,

0xf9c2,	// (0x0006fb63) main_mobtv_programe_next_pane_t

0xb7dd,	// (0x0006b97e) bg_popup_mobtv_noti_window_pane

0xab56,	// (0x0006acf7) popup_mobtv_noti_window_g1

0xab5e,	// (0x0006acff) popup_mobtv_noti_window_t1

0xab6c,	// (0x0006ad0d) popup_mobtv_noti_window_t2

0x0001,

0xf9c9,	// (0x0006fb6a) popup_mobtv_noti_window_t

0xbf42,	// (0x0006c0e3) bg_popup_mobtv_noti_window_pane_g1

0x9ba1,	// (0x00069d42) sc_clock_pane

0x9ba1,	// (0x00069d42) main_fs_bigclock_pane

0x691f,	// (0x00066ac0) blid2_tripm_pane_t4_ParamLimits

0x691f,	// (0x00066ac0) blid2_tripm_pane_t4

0xbf04,	// (0x0006c0a5) sc_clock_pane_g1_ParamLimits

0xbf04,	// (0x0006c0a5) sc_clock_pane_g1

0xbf4c,	// (0x0006c0ed) sc_clock_pane_t1_ParamLimits

0xbf4c,	// (0x0006c0ed) sc_clock_pane_t1

0xbf4c,	// (0x0006c0ed) sc_clock_pane_t2_ParamLimits

0xbf4c,	// (0x0006c0ed) sc_clock_pane_t2

0xbf4c,	// (0x0006c0ed) sc_clock_pane_t3_ParamLimits

0xbf4c,	// (0x0006c0ed) sc_clock_pane_t3

0x0004,

0xf9ce,	// (0x0006fb6f) sc_clock_pane_t_ParamLimits

0xf9ce,	// (0x0006fb6f) sc_clock_pane_t

0x8057,	// (0x000681f8) main_fs_bigclock_indicator_pane_ParamLimits

0x8057,	// (0x000681f8) main_fs_bigclock_indicator_pane

0x72a1,	// (0x00067442) main_fs_bigclock_pane_g1_ParamLimits

0x72a1,	// (0x00067442) main_fs_bigclock_pane_g1

0x8063,	// (0x00068204) main_fs_bigclock_pane_t1_ParamLimits

0x8063,	// (0x00068204) main_fs_bigclock_pane_t1

0x8075,	// (0x00068216) main_fs_bigclock_pane_t2_ParamLimits

0x8075,	// (0x00068216) main_fs_bigclock_pane_t2

0x8089,	// (0x0006822a) main_fs_bigclock_pane_t3_ParamLimits

0x8089,	// (0x0006822a) main_fs_bigclock_pane_t3

0x0002,

0xfb2c,	// (0x0006fccd) main_fs_bigclock_pane_t_ParamLimits

0xfb2c,	// (0x0006fccd) main_fs_bigclock_pane_t

0xb392,	// (0x0006b533) main_fs_bigclock_indicator_pane_g1

0xa88b,	// (0x0006aa2c) ncim_query_content_pane_g2_ParamLimits

0xa88b,	// (0x0006aa2c) ncim_query_content_pane_g2

0x0001,

0xf95b,	// (0x0006fafc) ncim_query_content_pane_g_ParamLimits

0xf95b,	// (0x0006fafc) ncim_query_content_pane_g

0xbf4c,	// (0x0006c0ed) sc_clock_pane_t4_ParamLimits

0xbf4c,	// (0x0006c0ed) sc_clock_pane_t4

0x9b93,	// (0x00069d34) main_radioblah_pane

0xa130,	// (0x0006a2d1) cell_call4_button_pane_t1_copy1_ParamLimits

0xa130,	// (0x0006a2d1) cell_call4_button_pane_t1_copy1

0x6eac,	// (0x0006704d) main_ncimui_pane_t1_ParamLimits

0x6eac,	// (0x0006704d) main_ncimui_pane_t1

0x6ec6,	// (0x00067067) main_ncimui_pane_t2_ParamLimits

0x6ec6,	// (0x00067067) main_ncimui_pane_t2

0x0002,

0xf954,	// (0x0006faf5) main_ncimui_pane_t_ParamLimits

0xf954,	// (0x0006faf5) main_ncimui_pane_t

0xd1ca,	// (0x0006d36b) main_radioblah_anim_pane_ParamLimits

0xd1ca,	// (0x0006d36b) main_radioblah_anim_pane

0xd1ca,	// (0x0006d36b) main_radioblah_info_pane_ParamLimits

0xd1ca,	// (0x0006d36b) main_radioblah_info_pane

0xd1b6,	// (0x0006d357) main_radioblah_pane_t1_ParamLimits

0xd1b6,	// (0x0006d357) main_radioblah_pane_t1

0xd1b6,	// (0x0006d357) main_radioblah_pane_t2_ParamLimits

0xd1b6,	// (0x0006d357) main_radioblah_pane_t2

0x0003,

0xf9ef,	// (0x0006fb90) main_radioblah_pane_t_ParamLimits

0xf9ef,	// (0x0006fb90) main_radioblah_pane_t

0xbe9d,	// (0x0006c03e) main_radioblah_rocker_ctrl_pane_ParamLimits

0xbe9d,	// (0x0006c03e) main_radioblah_rocker_ctrl_pane

0xe628,	// (0x0006e7c9) main_radioblah_info_pane_t1_ParamLimits

0xe628,	// (0x0006e7c9) main_radioblah_info_pane_t1

0xace2,	// (0x0006ae83) main_radioblah_info_pane_t2_ParamLimits

0xace2,	// (0x0006ae83) main_radioblah_info_pane_t2

0x0003,

0xf9f8,	// (0x0006fb99) main_radioblah_info_pane_t_ParamLimits

0xf9f8,	// (0x0006fb99) main_radioblah_info_pane_t

0xbf42,	// (0x0006c0e3) main_radioblah_rocker_ctrl_pane_g1

0xbf42,	// (0x0006c0e3) main_radioblah_rocker_ctrl_pane_g2

0xbf42,	// (0x0006c0e3) main_radioblah_rocker_ctrl_pane_g3

0xbf42,	// (0x0006c0e3) main_radioblah_rocker_ctrl_pane_g4

0xbf42,	// (0x0006c0e3) main_radioblah_rocker_ctrl_pane_g5

0xbf42,	// (0x0006c0e3) main_radioblah_rocker_ctrl_pane_g6

0x0005,

0x075d,	// (0x000608fe) main_radioblah_rocker_ctrl_pane_g

0x6bd8,	// (0x00066d79) main_cset_text2_pane_t1_copy1_ParamLimits

0xa176,	// (0x0006a317) cam4_image_uncrop_qvga_pane

0xa1e9,	// (0x0006a38a) vid4_image_uncrop_qcif_pane

0xa4c5,	// (0x0006a666) cam6_image_uncrop_qvga_pane_ParamLimits

0xa4c5,	// (0x0006a666) cam6_image_uncrop_qvga_pane

0xa57d,	// (0x0006a71e) vid6_image_uncrop_qcif_pane_ParamLimits

0xa57d,	// (0x0006a71e) vid6_image_uncrop_qcif_pane

0xb7dd,	// (0x0006b97e) bg_popup_preview_window_pane_cp03

0xa83d,	// (0x0006a9de) list_cset_text2_pane

0xa845,	// (0x0006a9e6) main_cset6_text2_pane_g1

0xa84d,	// (0x0006a9ee) main_cset6_text2_pane_t1

0xad31,	// (0x0006aed2) list_cset_text2_pane_t1_ParamLimits

0xad31,	// (0x0006aed2) list_cset_text2_pane_t1

0x9b93,	// (0x00069d34) main_radioblah_pane_ParamLimits

0x71eb,	// (0x0006738c) main_mobtv_info_pane_t3_ParamLimits

0x71eb,	// (0x0006738c) main_mobtv_info_pane_t3

0xd1a8,	// (0x0006d349) main_radioblah_pane_g1

0xacb2,	// (0x0006ae53) main_radioblah_info_pane_g1

0xbf60,	// (0x0006c101) main_radioblah_info_pane_t3_ParamLimits

0xbf60,	// (0x0006c101) main_radioblah_info_pane_t3

0x2413,	// (0x000625b4) highlight_cell_cale_month_pane_ParamLimits

0x2413,	// (0x000625b4) highlight_cell_cale_month_pane

0x9ba1,	// (0x00069d42) main_phob_fisheye_pane

0xec26,	// (0x0006edc7) scroll_pane_cp0031_ParamLimits

0xec26,	// (0x0006edc7) scroll_pane_cp0031

0xa68b,	// (0x0006a82c) wait_bar_pane_cp08_ParamLimits

0x6c5a,	// (0x00066dfb) cset_list_set_pane_copy1_ParamLimits

0xad4c,	// (0x0006aeed) highlight_cell_cale_month_pane_g1

0x72ee,	// (0x0006748f) highlight_cell_cale_month_pane_t1

0x65aa,	// (0x0006674b) list_gen_pane_cp01

0x580d,	// (0x000659ae) scroll_pane_01

0x72fc,	// (0x0006749d) list_single_double_fisheye_pane

0x7305,	// (0x000674a6) list_double_fisheye_pane_g1_ParamLimits

0x7305,	// (0x000674a6) list_double_fisheye_pane_g1

0x7311,	// (0x000674b2) list_double_fisheye_pane_g2_ParamLimits

0x7311,	// (0x000674b2) list_double_fisheye_pane_g2

0x7325,	// (0x000674c6) list_double_fisheye_pane_g3_ParamLimits

0x7325,	// (0x000674c6) list_double_fisheye_pane_g3

0x0004,

0xfa01,	// (0x0006fba2) list_double_fisheye_pane_g_ParamLimits

0xfa01,	// (0x0006fba2) list_double_fisheye_pane_g

0x734e,	// (0x000674ef) list_double_fisheye_pane_t1_ParamLimits

0x734e,	// (0x000674ef) list_double_fisheye_pane_t1

0x7369,	// (0x0006750a) list_double_fisheye_pane_t2_ParamLimits

0x7369,	// (0x0006750a) list_double_fisheye_pane_t2

0x0001,

0xfa0c,	// (0x0006fbad) list_double_fisheye_pane_t_ParamLimits

0xfa0c,	// (0x0006fbad) list_double_fisheye_pane_t

0x9ba1,	// (0x00069d42) main_call5_pane

0xbe9d,	// (0x0006c03e) sc_swipe_pane_ParamLimits

0xbe9d,	// (0x0006c03e) sc_swipe_pane

0x739e,	// (0x0006753f) call5_image_pane_ParamLimits

0x739e,	// (0x0006753f) call5_image_pane

0x73bb,	// (0x0006755c) call5_swipe_1_pane_ParamLimits

0x73bb,	// (0x0006755c) call5_swipe_1_pane

0x73ce,	// (0x0006756f) call5_swipe_2_pane_ParamLimits

0x73ce,	// (0x0006756f) call5_swipe_2_pane

0x73f9,	// (0x0006759a) popup_call5_audio_first_window_ParamLimits

0x73f9,	// (0x0006759a) popup_call5_audio_first_window

0xbf04,	// (0x0006c0a5) call5_swipe_1_pane_g1_ParamLimits

0xbf04,	// (0x0006c0a5) call5_swipe_1_pane_g1

0xad54,	// (0x0006aef5) call5_swipe_1_pane_g2_ParamLimits

0xad54,	// (0x0006aef5) call5_swipe_1_pane_g2

0x0001,

0xfa11,	// (0x0006fbb2) call5_swipe_1_pane_g_ParamLimits

0xfa11,	// (0x0006fbb2) call5_swipe_1_pane_g

0xad60,	// (0x0006af01) call5_swipe_1_pane_t1_ParamLimits

0xad60,	// (0x0006af01) call5_swipe_1_pane_t1

0xbf04,	// (0x0006c0a5) call5_swipe_2_pane_g1_ParamLimits

0xbf04,	// (0x0006c0a5) call5_swipe_2_pane_g1

0xad75,	// (0x0006af16) call5_swipe_2_pane_g2_ParamLimits

0xad75,	// (0x0006af16) call5_swipe_2_pane_g2

0x0001,

0xfa16,	// (0x0006fbb7) call5_swipe_2_pane_g_ParamLimits

0xfa16,	// (0x0006fbb7) call5_swipe_2_pane_g

0xad81,	// (0x0006af22) call5_swipe_2_pane_t1_ParamLimits

0xad81,	// (0x0006af22) call5_swipe_2_pane_t1

0xbf04,	// (0x0006c0a5) sc_swipe_pane_g1_ParamLimits

0xbf04,	// (0x0006c0a5) sc_swipe_pane_g1

0xbf12,	// (0x0006c0b3) sc_swipe_pane_g2_ParamLimits

0xbf12,	// (0x0006c0b3) sc_swipe_pane_g2

0x0001,

0x0784,	// (0x00060925) sc_swipe_pane_g_ParamLimits

0x0784,	// (0x00060925) sc_swipe_pane_g

0xbf4c,	// (0x0006c0ed) sc_swipe_pane_t1_ParamLimits

0xbf4c,	// (0x0006c0ed) sc_swipe_pane_t1

0x9ba1,	// (0x00069d42) main_cmail_launcher_pane

0x740a,	// (0x000675ab) aid_size_cell_cmail_l_ParamLimits

0x740a,	// (0x000675ab) aid_size_cell_cmail_l

0x7418,	// (0x000675b9) grid_cmail_l_pane_ParamLimits

0x7418,	// (0x000675b9) grid_cmail_l_pane

0x7432,	// (0x000675d3) cell_cmail_l_pane_ParamLimits

0x7432,	// (0x000675d3) cell_cmail_l_pane

0xad96,	// (0x0006af37) cell_cmail_l_pane_g1_ParamLimits

0xad96,	// (0x0006af37) cell_cmail_l_pane_g1

0xada2,	// (0x0006af43) cell_cmail_l_pane_t1_ParamLimits

0xada2,	// (0x0006af43) cell_cmail_l_pane_t1

0xadb8,	// (0x0006af59) cell_cmail_l_pane_t2_ParamLimits

0xadb8,	// (0x0006af59) cell_cmail_l_pane_t2

0x0001,

0xfa1b,	// (0x0006fbbc) cell_cmail_l_pane_t_ParamLimits

0xfa1b,	// (0x0006fbbc) cell_cmail_l_pane_t

0xbe9d,	// (0x0006c03e) grid_highlight_pane_cp018_ParamLimits

0xbe9d,	// (0x0006c03e) grid_highlight_pane_cp018

0x0b8f,	// (0x00060d30) main2_pane_ParamLimits

0x0b8f,	// (0x00060d30) main2_pane

0xc02f,	// (0x0006c1d0) popup_sp_fs_action_menu_bg_pane_g1

0xc037,	// (0x0006c1d8) popup_sp_fs_action_menu_bg_pane_g2

0xc03f,	// (0x0006c1e0) popup_sp_fs_action_menu_bg_pane_g3

0xc050,	// (0x0006c1f1) popup_sp_fs_action_menu_bg_pane_g4

0xc058,	// (0x0006c1f9) popup_sp_fs_action_menu_bg_pane_g5

0xc060,	// (0x0006c201) popup_sp_fs_action_menu_bg_pane_g6

0xc068,	// (0x0006c209) popup_sp_fs_action_menu_bg_pane_g7

0xc070,	// (0x0006c211) popup_sp_fs_action_menu_bg_pane_g8

0xc078,	// (0x0006c219) popup_sp_fs_action_menu_bg_pane_g9

0xc471,	// (0x0006c612) popup_sp_fs_action_menu_bg_pane_g10

0xc471,	// (0x0006c612) popup_sp_fs_action_menu_bg_pane_g11

0x000a,

0xf0dd,	// (0x0006f27e) popup_sp_fs_action_menu_bg_pane_g

0xbf04,	// (0x0006c0a5) list_medium_line_x2_t3_g3_g1_ParamLimits

0xbf04,	// (0x0006c0a5) list_medium_line_x2_t3_g3_g1

0xbf04,	// (0x0006c0a5) list_medium_line_x2_t3_g3_g2_ParamLimits

0xbf04,	// (0x0006c0a5) list_medium_line_x2_t3_g3_g2

0xbf04,	// (0x0006c0a5) list_medium_line_x2_t3_g3_g3_ParamLimits

0xbf04,	// (0x0006c0a5) list_medium_line_x2_t3_g3_g3

0x0002,

0xf18b,	// (0x0006f32c) list_medium_line_x2_t3_g3_g_ParamLimits

0xf18b,	// (0x0006f32c) list_medium_line_x2_t3_g3_g

0xbf4c,	// (0x0006c0ed) list_medium_line_x2_t3_g3_t1_ParamLimits

0xbf4c,	// (0x0006c0ed) list_medium_line_x2_t3_g3_t1

0xbf4c,	// (0x0006c0ed) list_medium_line_x2_t3_g3_t2_ParamLimits

0xbf4c,	// (0x0006c0ed) list_medium_line_x2_t3_g3_t2

0xbf4c,	// (0x0006c0ed) list_medium_line_x2_t3_g3_t3_ParamLimits

0xbf4c,	// (0x0006c0ed) list_medium_line_x2_t3_g3_t3

0x0002,

0xf192,	// (0x0006f333) list_medium_line_x2_t3_g3_t_ParamLimits

0xf192,	// (0x0006f333) list_medium_line_x2_t3_g3_t

0xbf04,	// (0x0006c0a5) list_medium_line_x2_t3_g2_g1_ParamLimits

0xbf04,	// (0x0006c0a5) list_medium_line_x2_t3_g2_g1

0xbf04,	// (0x0006c0a5) list_medium_line_x2_t3_g2_g2_ParamLimits

0xbf04,	// (0x0006c0a5) list_medium_line_x2_t3_g2_g2

0x0001,

0xf199,	// (0x0006f33a) list_medium_line_x2_t3_g2_g_ParamLimits

0xf199,	// (0x0006f33a) list_medium_line_x2_t3_g2_g

0xbf4c,	// (0x0006c0ed) list_medium_line_x2_t3_g2_t1_ParamLimits

0xbf4c,	// (0x0006c0ed) list_medium_line_x2_t3_g2_t1

0xbf4c,	// (0x0006c0ed) list_medium_line_x2_t3_g2_t2_ParamLimits

0xbf4c,	// (0x0006c0ed) list_medium_line_x2_t3_g2_t2

0xbf4c,	// (0x0006c0ed) list_medium_line_x2_t3_g2_t3_ParamLimits

0xbf4c,	// (0x0006c0ed) list_medium_line_x2_t3_g2_t3

0x0002,

0xf192,	// (0x0006f333) list_medium_line_x2_t3_g2_t_ParamLimits

0xf192,	// (0x0006f333) list_medium_line_x2_t3_g2_t

0xbf04,	// (0x0006c0a5) list_medium_line_x2_t4_g4_g1_ParamLimits

0xbf04,	// (0x0006c0a5) list_medium_line_x2_t4_g4_g1

0xbf04,	// (0x0006c0a5) list_medium_line_x2_t4_g4_g2_ParamLimits

0xbf04,	// (0x0006c0a5) list_medium_line_x2_t4_g4_g2

0xbf04,	// (0x0006c0a5) list_medium_line_x2_t4_g4_g3_ParamLimits

0xbf04,	// (0x0006c0a5) list_medium_line_x2_t4_g4_g3

0xbf04,	// (0x0006c0a5) list_medium_line_x2_t4_g4_g4_ParamLimits

0xbf04,	// (0x0006c0a5) list_medium_line_x2_t4_g4_g4

0x0003,

0x0693,	// (0x00060834) list_medium_line_x2_t4_g4_g_ParamLimits

0x0693,	// (0x00060834) list_medium_line_x2_t4_g4_g

0xbf4c,	// (0x0006c0ed) list_medium_line_x2_t4_g4_t1_ParamLimits

0xbf4c,	// (0x0006c0ed) list_medium_line_x2_t4_g4_t1

0xbf4c,	// (0x0006c0ed) list_medium_line_x2_t4_g4_t2_ParamLimits

0xbf4c,	// (0x0006c0ed) list_medium_line_x2_t4_g4_t2

0xbf4c,	// (0x0006c0ed) list_medium_line_x2_t4_g4_t3_ParamLimits

0xbf4c,	// (0x0006c0ed) list_medium_line_x2_t4_g4_t3

0xbf4c,	// (0x0006c0ed) list_medium_line_x2_t4_g4_t4_ParamLimits

0xbf4c,	// (0x0006c0ed) list_medium_line_x2_t4_g4_t4

0x0003,

0xf19e,	// (0x0006f33f) list_medium_line_x2_t4_g4_t_ParamLimits

0xf19e,	// (0x0006f33f) list_medium_line_x2_t4_g4_t

0xbf04,	// (0x0006c0a5) list_medium_line_x2_t2_g4_g1_ParamLimits

0xbf04,	// (0x0006c0a5) list_medium_line_x2_t2_g4_g1

0xbf04,	// (0x0006c0a5) list_medium_line_x2_t2_g4_g2_ParamLimits

0xbf04,	// (0x0006c0a5) list_medium_line_x2_t2_g4_g2

0xbf04,	// (0x0006c0a5) list_medium_line_x2_t2_g4_g3_ParamLimits

0xbf04,	// (0x0006c0a5) list_medium_line_x2_t2_g4_g3

0xbf04,	// (0x0006c0a5) list_medium_line_x2_t2_g4_g4_ParamLimits

0xbf04,	// (0x0006c0a5) list_medium_line_x2_t2_g4_g4

0x0003,

0x0693,	// (0x00060834) list_medium_line_x2_t2_g4_g_ParamLimits

0x0693,	// (0x00060834) list_medium_line_x2_t2_g4_g

0xbf4c,	// (0x0006c0ed) list_medium_line_x2_t2_g4_t1_ParamLimits

0xbf4c,	// (0x0006c0ed) list_medium_line_x2_t2_g4_t1

0xbf4c,	// (0x0006c0ed) list_medium_line_x2_t2_g4_t2_ParamLimits

0xbf4c,	// (0x0006c0ed) list_medium_line_x2_t2_g4_t2

0x0001,

0xf16e,	// (0x0006f30f) list_medium_line_x2_t2_g4_t_ParamLimits

0xf16e,	// (0x0006f30f) list_medium_line_x2_t2_g4_t

0xbf04,	// (0x0006c0a5) list_medium_line_x2_t2_g3_g1_ParamLimits

0xbf04,	// (0x0006c0a5) list_medium_line_x2_t2_g3_g1

0xbf04,	// (0x0006c0a5) list_medium_line_x2_t2_g3_g2_ParamLimits

0xbf04,	// (0x0006c0a5) list_medium_line_x2_t2_g3_g2

0xbf04,	// (0x0006c0a5) list_medium_line_x2_t2_g3_g3_ParamLimits

0xbf04,	// (0x0006c0a5) list_medium_line_x2_t2_g3_g3

0x0002,

0xf18b,	// (0x0006f32c) list_medium_line_x2_t2_g3_g_ParamLimits

0xf18b,	// (0x0006f32c) list_medium_line_x2_t2_g3_g

0xbf4c,	// (0x0006c0ed) list_medium_line_x2_t2_g3_t1_ParamLimits

0xbf4c,	// (0x0006c0ed) list_medium_line_x2_t2_g3_t1

0xbf4c,	// (0x0006c0ed) list_medium_line_x2_t2_g3_t2_ParamLimits

0xbf4c,	// (0x0006c0ed) list_medium_line_x2_t2_g3_t2

0x0001,

0xf16e,	// (0x0006f30f) list_medium_line_x2_t2_g3_t_ParamLimits

0xf16e,	// (0x0006f30f) list_medium_line_x2_t2_g3_t

0x258a,	// (0x0006272b) main_sp_fs_list_pane_ParamLimits

0x258a,	// (0x0006272b) main_sp_fs_list_pane

0x9c32,	// (0x00069dd3) sp_fs_scroll_pane_ParamLimits

0x9c32,	// (0x00069dd3) sp_fs_scroll_pane

0xcc2e,	// (0x0006cdcf) list_medium_line_x2_t3_t1

0xcc2e,	// (0x0006cdcf) list_medium_line_x2_t3_t2

0xcc2e,	// (0x0006cdcf) list_medium_line_x2_t3_t3

0x0002,

0xf24b,	// (0x0006f3ec) list_medium_line_x2_t3_t

0xcc2e,	// (0x0006cdcf) list_medium_line_x3_t4_t1

0xcc2e,	// (0x0006cdcf) list_medium_line_x3_t4_t2

0xcc2e,	// (0x0006cdcf) list_medium_line_x3_t4_t3

0xcc2e,	// (0x0006cdcf) list_medium_line_x3_t4_t4

0x0003,

0xf252,	// (0x0006f3f3) list_medium_line_x3_t4_t

0xcc2e,	// (0x0006cdcf) list_medium_line_x4_t5_t1

0xcc2e,	// (0x0006cdcf) list_medium_line_x4_t5_t2

0xcc2e,	// (0x0006cdcf) list_medium_line_x4_t5_t3

0xcc2e,	// (0x0006cdcf) list_medium_line_x4_t5_t4

0xcc2e,	// (0x0006cdcf) list_medium_line_x4_t5_t5

0x0004,

0xf25b,	// (0x0006f3fc) list_medium_line_x4_t5_t

0xbf04,	// (0x0006c0a5) list_medium_line_t4_g4_g1_ParamLimits

0xbf04,	// (0x0006c0a5) list_medium_line_t4_g4_g1

0xbf04,	// (0x0006c0a5) list_medium_line_t4_g4_g2_ParamLimits

0xbf04,	// (0x0006c0a5) list_medium_line_t4_g4_g2

0xbf04,	// (0x0006c0a5) list_medium_line_t4_g4_g3_ParamLimits

0xbf04,	// (0x0006c0a5) list_medium_line_t4_g4_g3

0xbf04,	// (0x0006c0a5) list_medium_line_t4_g4_g4_ParamLimits

0xbf04,	// (0x0006c0a5) list_medium_line_t4_g4_g4

0x0003,

0x0693,	// (0x00060834) list_medium_line_t4_g4_g_ParamLimits

0x0693,	// (0x00060834) list_medium_line_t4_g4_g

0xbf4c,	// (0x0006c0ed) list_medium_line_t4_g4_t1_ParamLimits

0xbf4c,	// (0x0006c0ed) list_medium_line_t4_g4_t1

0xbf4c,	// (0x0006c0ed) list_medium_line_t4_g4_t2_ParamLimits

0xbf4c,	// (0x0006c0ed) list_medium_line_t4_g4_t2

0xbf4c,	// (0x0006c0ed) list_medium_line_t4_g4_t3_ParamLimits

0xbf4c,	// (0x0006c0ed) list_medium_line_t4_g4_t3

0xbf4c,	// (0x0006c0ed) list_medium_line_t4_g4_t4_ParamLimits

0xbf4c,	// (0x0006c0ed) list_medium_line_t4_g4_t4

0x0003,

0xf19e,	// (0x0006f33f) list_medium_line_t4_g4_t_ParamLimits

0xf19e,	// (0x0006f33f) list_medium_line_t4_g4_t

0x2635,	// (0x000627d6) chi_dic_find_pane_g1

0x33f1,	// (0x00063592) main_tport_pane

0xcc2e,	// (0x0006cdcf) list_medium_line_plain_t1

0xbf04,	// (0x0006c0a5) list_medium_line_t2_g2_g1_ParamLimits

0xbf04,	// (0x0006c0a5) list_medium_line_t2_g2_g1

0xbf04,	// (0x0006c0a5) list_medium_line_t2_g2_g2_ParamLimits

0xbf04,	// (0x0006c0a5) list_medium_line_t2_g2_g2

0x0001,

0xf199,	// (0x0006f33a) list_medium_line_t2_g2_g_ParamLimits

0xf199,	// (0x0006f33a) list_medium_line_t2_g2_g

0xbf4c,	// (0x0006c0ed) list_medium_line_t2_g2_t1_ParamLimits

0xbf4c,	// (0x0006c0ed) list_medium_line_t2_g2_t1

0xbf4c,	// (0x0006c0ed) list_medium_line_t2_g2_t2_ParamLimits

0xbf4c,	// (0x0006c0ed) list_medium_line_t2_g2_t2

0x0001,

0xf16e,	// (0x0006f30f) list_medium_line_t2_g2_t_ParamLimits

0xf16e,	// (0x0006f30f) list_medium_line_t2_g2_t

0x669d,	// (0x0006683e) aid_sp_fs_list_icon_a_sm

0x66a5,	// (0x00066846) aid_sp_fs_list_icon_d

0x66ad,	// (0x0006684e) aid_sp_fs_text_primary

0x66b6,	// (0x00066857) aid_sp_fs_text_secondary

0xb7dd,	// (0x0006b97e) list_medium_line

0xb7dd,	// (0x0006b97e) list_medium_line_g2

0xb7dd,	// (0x0006b97e) list_medium_line_g3

0xb7dd,	// (0x0006b97e) list_medium_line_plain

0xb7dd,	// (0x0006b97e) list_medium_line_plain_t2

0xb7dd,	// (0x0006b97e) list_medium_line_plain_t3

0xb7dd,	// (0x0006b97e) list_medium_line_right_icon

0xb7dd,	// (0x0006b97e) list_medium_line_right_iconx2

0xb7dd,	// (0x0006b97e) list_medium_line_t2

0xb7dd,	// (0x0006b97e) list_medium_line_t2_g2

0xb7dd,	// (0x0006b97e) list_medium_line_t2_g3

0xb7dd,	// (0x0006b97e) list_medium_line_t2_right_icon

0xb7dd,	// (0x0006b97e) list_medium_line_t2_right_iconx2

0xb7dd,	// (0x0006b97e) list_medium_line_t3

0xb7dd,	// (0x0006b97e) list_medium_line_t3_g2

0xb7dd,	// (0x0006b97e) list_medium_line_t3_g3

0xb7dd,	// (0x0006b97e) list_medium_line_t3_right_iconx2

0xb7dd,	// (0x0006b97e) list_medium_line_t4_g4

0xb7dd,	// (0x0006b97e) list_medium_line_x2

0xb7dd,	// (0x0006b97e) list_medium_line_x2_t2_g2

0xb7dd,	// (0x0006b97e) list_medium_line_x2_t2_g3

0xb7dd,	// (0x0006b97e) list_medium_line_x2_t2_g4

0xb7dd,	// (0x0006b97e) list_medium_line_x2_t3

0xb7dd,	// (0x0006b97e) list_medium_line_x2_t3_g2

0xb7dd,	// (0x0006b97e) list_medium_line_x2_t3_g3

0xb7dd,	// (0x0006b97e) list_medium_line_x2_t3_g4

0xb7dd,	// (0x0006b97e) list_medium_line_x2_t4_g2

0xb7dd,	// (0x0006b97e) list_medium_line_x2_t4_g4

0xb7dd,	// (0x0006b97e) list_medium_line_x3

0xb7dd,	// (0x0006b97e) list_medium_line_x3_t4

0xb7dd,	// (0x0006b97e) list_medium_line_x3_t4_g4

0xb7dd,	// (0x0006b97e) list_medium_line_x4_t4

0xb7dd,	// (0x0006b97e) list_medium_line_x4_t4_g7

0xb7dd,	// (0x0006b97e) list_medium_line_x4_t5

0x66bf,	// (0x00066860) list_single_fs_dyc_pane_ParamLimits

0x66bf,	// (0x00066860) list_single_fs_dyc_pane

0xbf04,	// (0x0006c0a5) list_medium_line_x4_t4_g7_g1_ParamLimits

0xbf04,	// (0x0006c0a5) list_medium_line_x4_t4_g7_g1

0xbf04,	// (0x0006c0a5) list_medium_line_x4_t4_g7_g2_ParamLimits

0xbf04,	// (0x0006c0a5) list_medium_line_x4_t4_g7_g2

0xbf04,	// (0x0006c0a5) list_medium_line_x4_t4_g7_g3_ParamLimits

0xbf04,	// (0x0006c0a5) list_medium_line_x4_t4_g7_g3

0xbf04,	// (0x0006c0a5) list_medium_line_x4_t4_g7_g4_ParamLimits

0xbf04,	// (0x0006c0a5) list_medium_line_x4_t4_g7_g4

0xbf04,	// (0x0006c0a5) list_medium_line_x4_t4_g7_g5_ParamLimits

0xbf04,	// (0x0006c0a5) list_medium_line_x4_t4_g7_g5

0xbf04,	// (0x0006c0a5) list_medium_line_x4_t4_g7_g6_ParamLimits

0xbf04,	// (0x0006c0a5) list_medium_line_x4_t4_g7_g6

0xbf12,	// (0x0006c0b3) list_medium_line_x4_t4_g7_g7_ParamLimits

0xbf12,	// (0x0006c0b3) list_medium_line_x4_t4_g7_g7

0x0006,

0x0691,	// (0x00060832) list_medium_line_x4_t4_g7_g_ParamLimits

0x0691,	// (0x00060832) list_medium_line_x4_t4_g7_g

0xbf4c,	// (0x0006c0ed) list_medium_line_x4_t4_g7_t1_ParamLimits

0xbf4c,	// (0x0006c0ed) list_medium_line_x4_t4_g7_t1

0xbf4c,	// (0x0006c0ed) list_medium_line_x4_t4_g7_t2_ParamLimits

0xbf4c,	// (0x0006c0ed) list_medium_line_x4_t4_g7_t2

0xbf4c,	// (0x0006c0ed) list_medium_line_x4_t4_g7_t3_ParamLimits

0xbf4c,	// (0x0006c0ed) list_medium_line_x4_t4_g7_t3

0xbf60,	// (0x0006c101) list_medium_line_x4_t4_g7_t4_ParamLimits

0xbf60,	// (0x0006c101) list_medium_line_x4_t4_g7_t4

0xbf60,	// (0x0006c101) list_medium_line_x4_t4_g7_t5_ParamLimits

0xbf60,	// (0x0006c101) list_medium_line_x4_t4_g7_t5

0x0004,

0x06a0,	// (0x00060841) list_medium_line_x4_t4_g7_t_ParamLimits

0x06a0,	// (0x00060841) list_medium_line_x4_t4_g7_t

0x6e63,	// (0x00067004) list_single_dyc_row_pane_ParamLimits

0x6e63,	// (0x00067004) list_single_dyc_row_pane

0x738b,	// (0x0006752c) call5_gesture_pane_ParamLimits

0x738b,	// (0x0006752c) call5_gesture_pane

0x73e1,	// (0x00067582) call5_windows_pane_ParamLimits

0x73e1,	// (0x00067582) call5_windows_pane

0x744c,	// (0x000675ed) call5_swipe_1_pane_cp_ParamLimits

0x744c,	// (0x000675ed) call5_swipe_1_pane_cp

0x7458,	// (0x000675f9) call5_swipe_2_pane_cp_ParamLimits

0x7458,	// (0x000675f9) call5_swipe_2_pane_cp

0xc58b,	// (0x0006c72c) call5_image_pane_cp

0x7464,	// (0x00067605) popup_call5_audio_first_window_cp_ParamLimits

0x7464,	// (0x00067605) popup_call5_audio_first_window_cp

0xadd5,	// (0x0006af76) call5_swipe_1_pane_g1_cp_ParamLimits

0xadd5,	// (0x0006af76) call5_swipe_1_pane_g1_cp

0xade2,	// (0x0006af83) call5_swipe_1_pane_g2_cp

0xadea,	// (0x0006af8b) call5_swipe_1_pane_t1_cp_ParamLimits

0xadea,	// (0x0006af8b) call5_swipe_1_pane_t1_cp

0xadd5,	// (0x0006af76) call5_swipe_2_pane_g1_cp_ParamLimits

0xadd5,	// (0x0006af76) call5_swipe_2_pane_g1_cp

0xadff,	// (0x0006afa0) call5_swipe_2_pane_g2_cp

0xae07,	// (0x0006afa8) call5_swipe_2_pane_t1_cp_ParamLimits

0xae07,	// (0x0006afa8) call5_swipe_2_pane_t1_cp

0xbe9d,	// (0x0006c03e) main_sp_fs_email_pane

0xae1c,	// (0x0006afbd) main_sp_fs_listscroll_pane_te

0x7472,	// (0x00067613) popup_sp_fs_action_menu_pane_ParamLimits

0x7472,	// (0x00067613) popup_sp_fs_action_menu_pane

0xbf42,	// (0x0006c0e3) bg_sp_fs_ctrlbar_pane_g1

0xae25,	// (0x0006afc6) bg_sp_fs_ctrlbar_ddmenu_pane_g1

0xae2e,	// (0x0006afcf) bg_sp_fs_ctrlbar_ddmenu_pane_g2

0xe422,	// (0x0006e5c3) bg_sp_fs_ctrlbar_ddmenu_pane_g3

0xbf42,	// (0x0006c0e3) bg_sp_fs_ctrlbar_ddmenu_pane_g4

0x0003,

0xfa20,	// (0x0006fbc1) bg_sp_fs_ctrlbar_ddmenu_pane_g

0xe60c,	// (0x0006e7ad) bg_sp_fs_ctrlbar_ddmenu_pane_ParamLimits

0xe60c,	// (0x0006e7ad) bg_sp_fs_ctrlbar_ddmenu_pane

0xae37,	// (0x0006afd8) main_sp_fs_ctrlbar_ddmenu_pane_g1_ParamLimits

0xae37,	// (0x0006afd8) main_sp_fs_ctrlbar_ddmenu_pane_g1

0xae43,	// (0x0006afe4) main_sp_fs_ctrlbar_ddmenu_pane_g2_ParamLimits

0xae43,	// (0x0006afe4) main_sp_fs_ctrlbar_ddmenu_pane_g2

0x0001,

0xfa29,	// (0x0006fbca) main_sp_fs_ctrlbar_ddmenu_pane_g_ParamLimits

0xfa29,	// (0x0006fbca) main_sp_fs_ctrlbar_ddmenu_pane_g

0xae4f,	// (0x0006aff0) main_sp_fs_ctrlbar_ddmenu_pane_t1_ParamLimits

0xae4f,	// (0x0006aff0) main_sp_fs_ctrlbar_ddmenu_pane_t1

0xbf42,	// (0x0006c0e3) list_medium_line_t2_right_icon_g1

0xcc2e,	// (0x0006cdcf) list_medium_line_t2_right_icon_t1

0xcc2e,	// (0x0006cdcf) list_medium_line_t2_right_icon_t2

0x0001,

0xfa2e,	// (0x0006fbcf) list_medium_line_t2_right_icon_t

0xd1ca,	// (0x0006d36b) bg_sp_fs_ctrlbar_pane_ParamLimits

0xd1ca,	// (0x0006d36b) bg_sp_fs_ctrlbar_pane

0x74fc,	// (0x0006769d) main_sp_fs_ctrlbar_button_pane_cp01

0x7506,	// (0x000676a7) main_sp_fs_ctrlbar_ddmenu_pane

0xaea1,	// (0x0006b042) main_sp_fs_ctrlbar_pane_g1

0xaead,	// (0x0006b04e) main_sp_fs_ctrlbar_pane_g2

0x0003,

0xfa33,	// (0x0006fbd4) main_sp_fs_ctrlbar_pane_g

0x7544,	// (0x000676e5) main_sp_fs_ctrlbar_pane_t1

0x7583,	// (0x00067724) main_sp_fs_ctrlbar_pane

0x75a7,	// (0x00067748) main_sp_fs_listscroll_pane_te_cp01

0x75d1,	// (0x00067772) popup_sp_fs_action_menu_pane_cp01_ParamLimits

0x75d1,	// (0x00067772) popup_sp_fs_action_menu_pane_cp01

0xbe9d,	// (0x0006c03e) bg_sp_fs_highlight_list_pane_cp01_ParamLimits

0xbe9d,	// (0x0006c03e) bg_sp_fs_highlight_list_pane_cp01

0x75f6,	// (0x00067797) sp_fs_action_menu_list_gene_pane_g1_ParamLimits

0x75f6,	// (0x00067797) sp_fs_action_menu_list_gene_pane_g1

0xaed4,	// (0x0006b075) sp_fs_action_menu_list_gene_pane_g2_ParamLimits

0xaed4,	// (0x0006b075) sp_fs_action_menu_list_gene_pane_g2

0x0001,

0xfa41,	// (0x0006fbe2) sp_fs_action_menu_list_gene_pane_g_ParamLimits

0xfa41,	// (0x0006fbe2) sp_fs_action_menu_list_gene_pane_g

0x7605,	// (0x000677a6) sp_fs_action_menu_list_gene_pane_t1_ParamLimits

0x7605,	// (0x000677a6) sp_fs_action_menu_list_gene_pane_t1

0x761d,	// (0x000677be) sp_fs_action_menu_list_gene_pane_ParamLimits

0x761d,	// (0x000677be) sp_fs_action_menu_list_gene_pane

0xaee1,	// (0x0006b082) popup_sp_fs_action_menu_bg_pane_ParamLimits

0xaee1,	// (0x0006b082) popup_sp_fs_action_menu_bg_pane

0x763c,	// (0x000677dd) sp_fs_action_menu_list_pane_ParamLimits

0x763c,	// (0x000677dd) sp_fs_action_menu_list_pane

0x765c,	// (0x000677fd) sp_fs_scroll_pane_cp01_ParamLimits

0x765c,	// (0x000677fd) sp_fs_scroll_pane_cp01

0xcc2e,	// (0x0006cdcf) list_medium_line_plain_t2_t1

0xcc2e,	// (0x0006cdcf) list_medium_line_plain_t2_t2

0x0001,

0xfa2e,	// (0x0006fbcf) list_medium_line_plain_t2_t

0xcc2e,	// (0x0006cdcf) list_medium_line_plain_t3_t1

0xcc2e,	// (0x0006cdcf) list_medium_line_plain_t3_t2

0xcc2e,	// (0x0006cdcf) list_medium_line_plain_t3_t3

0x0002,

0xf24b,	// (0x0006f3ec) list_medium_line_plain_t3_t

0xbf04,	// (0x0006c0a5) list_medium_line_x2_t2_g2_g1_ParamLimits

0xbf04,	// (0x0006c0a5) list_medium_line_x2_t2_g2_g1

0xbf04,	// (0x0006c0a5) list_medium_line_x2_t2_g2_g2_ParamLimits

0xbf04,	// (0x0006c0a5) list_medium_line_x2_t2_g2_g2

0x0001,

0xf199,	// (0x0006f33a) list_medium_line_x2_t2_g2_g_ParamLimits

0xf199,	// (0x0006f33a) list_medium_line_x2_t2_g2_g

0xbf4c,	// (0x0006c0ed) list_medium_line_x2_t2_g2_t1_ParamLimits

0xbf4c,	// (0x0006c0ed) list_medium_line_x2_t2_g2_t1

0xbf4c,	// (0x0006c0ed) list_medium_line_x2_t2_g2_t2_ParamLimits

0xbf4c,	// (0x0006c0ed) list_medium_line_x2_t2_g2_t2

0x0001,

0xf16e,	// (0x0006f30f) list_medium_line_x2_t2_g2_t_ParamLimits

0xf16e,	// (0x0006f30f) list_medium_line_x2_t2_g2_t

0xbf04,	// (0x0006c0a5) list_medium_line_x2_t4_g2_g1_ParamLimits

0xbf04,	// (0x0006c0a5) list_medium_line_x2_t4_g2_g1

0xbf04,	// (0x0006c0a5) list_medium_line_x2_t4_g2_g2_ParamLimits

0xbf04,	// (0x0006c0a5) list_medium_line_x2_t4_g2_g2

0x0001,

0xf199,	// (0x0006f33a) list_medium_line_x2_t4_g2_g_ParamLimits

0xf199,	// (0x0006f33a) list_medium_line_x2_t4_g2_g

0xbf4c,	// (0x0006c0ed) list_medium_line_x2_t4_g2_t1_ParamLimits

0xbf4c,	// (0x0006c0ed) list_medium_line_x2_t4_g2_t1

0xbf4c,	// (0x0006c0ed) list_medium_line_x2_t4_g2_t2_ParamLimits

0xbf4c,	// (0x0006c0ed) list_medium_line_x2_t4_g2_t2

0xbf4c,	// (0x0006c0ed) list_medium_line_x2_t4_g2_t3_ParamLimits

0xbf4c,	// (0x0006c0ed) list_medium_line_x2_t4_g2_t3

0xbf4c,	// (0x0006c0ed) list_medium_line_x2_t4_g2_t4_ParamLimits

0xbf4c,	// (0x0006c0ed) list_medium_line_x2_t4_g2_t4

0x0003,

0xf19e,	// (0x0006f33f) list_medium_line_x2_t4_g2_t_ParamLimits

0xf19e,	// (0x0006f33f) list_medium_line_x2_t4_g2_t

0xbf42,	// (0x0006c0e3) list_medium_line_t3_right_iconx2_g1

0xbf42,	// (0x0006c0e3) list_medium_line_t3_right_iconx2_g2

0xbf42,	// (0x0006c0e3) list_medium_line_t3_right_iconx2_g3

0x0002,

0xf367,	// (0x0006f508) list_medium_line_t3_right_iconx2_g

0xcc2e,	// (0x0006cdcf) list_medium_line_t3_right_iconx2_t1

0xcc2e,	// (0x0006cdcf) list_medium_line_t3_right_iconx2_t2

0x0001,

0xfa2e,	// (0x0006fbcf) list_medium_line_t3_right_iconx2_t

0xbf04,	// (0x0006c0a5) list_medium_line_x3_t4_g4_g1_ParamLimits

0xbf04,	// (0x0006c0a5) list_medium_line_x3_t4_g4_g1

0xbf04,	// (0x0006c0a5) list_medium_line_x3_t4_g4_g2_ParamLimits

0xbf04,	// (0x0006c0a5) list_medium_line_x3_t4_g4_g2

0xbf04,	// (0x0006c0a5) list_medium_line_x3_t4_g4_g3_ParamLimits

0xbf04,	// (0x0006c0a5) list_medium_line_x3_t4_g4_g3

0xbf04,	// (0x0006c0a5) list_medium_line_x3_t4_g4_g4_ParamLimits

0xbf04,	// (0x0006c0a5) list_medium_line_x3_t4_g4_g4

0x0003,

0x0693,	// (0x00060834) list_medium_line_x3_t4_g4_g_ParamLimits

0x0693,	// (0x00060834) list_medium_line_x3_t4_g4_g

0xbf4c,	// (0x0006c0ed) list_medium_line_x3_t4_g4_t1_ParamLimits

0xbf4c,	// (0x0006c0ed) list_medium_line_x3_t4_g4_t1

0xbf4c,	// (0x0006c0ed) list_medium_line_x3_t4_g4_t2_ParamLimits

0xbf4c,	// (0x0006c0ed) list_medium_line_x3_t4_g4_t2

0xbf4c,	// (0x0006c0ed) list_medium_line_x3_t4_g4_t3_ParamLimits

0xbf4c,	// (0x0006c0ed) list_medium_line_x3_t4_g4_t3

0xbf4c,	// (0x0006c0ed) list_medium_line_x3_t4_g4_t4_ParamLimits

0xbf4c,	// (0x0006c0ed) list_medium_line_x3_t4_g4_t4

0x0003,

0xf19e,	// (0x0006f33f) list_medium_line_x3_t4_g4_t_ParamLimits

0xf19e,	// (0x0006f33f) list_medium_line_x3_t4_g4_t

0x7682,	// (0x00067823) list_single_dyc_row_text_pane_t1_ParamLimits

0x7682,	// (0x00067823) list_single_dyc_row_text_pane_t1

0x76cb,	// (0x0006786c) list_single_dyc_row_text_pane_t2_ParamLimits

0x76cb,	// (0x0006786c) list_single_dyc_row_text_pane_t2

0x7741,	// (0x000678e2) list_single_dyc_row_text_pane_t3_ParamLimits

0x7741,	// (0x000678e2) list_single_dyc_row_text_pane_t3

0x0005,

0xfa46,	// (0x0006fbe7) list_single_dyc_row_text_pane_t_ParamLimits

0xfa46,	// (0x0006fbe7) list_single_dyc_row_text_pane_t

0x7824,	// (0x000679c5) list_single_dyc_row_pane_g1_ParamLimits

0x7824,	// (0x000679c5) list_single_dyc_row_pane_g1

0x7830,	// (0x000679d1) list_single_dyc_row_pane_g2_ParamLimits

0x7830,	// (0x000679d1) list_single_dyc_row_pane_g2

0x783c,	// (0x000679dd) list_single_dyc_row_pane_g3_ParamLimits

0x783c,	// (0x000679dd) list_single_dyc_row_pane_g3

0x784f,	// (0x000679f0) list_single_dyc_row_pane_g4_ParamLimits

0x784f,	// (0x000679f0) list_single_dyc_row_pane_g4

0x0006,

0xfa53,	// (0x0006fbf4) list_single_dyc_row_pane_g_ParamLimits

0xfa53,	// (0x0006fbf4) list_single_dyc_row_pane_g

0x78a1,	// (0x00067a42) list_single_dyc_row_text_pane_ParamLimits

0x78a1,	// (0x00067a42) list_single_dyc_row_text_pane

0xb7dd,	// (0x0006b97e) bg_sp_fs_scroll_pane

0xaeef,	// (0x0006b090) thumb_sp_fs_scroll_pane

0xbf04,	// (0x0006c0a5) list_medium_line_g1_ParamLimits

0xbf04,	// (0x0006c0a5) list_medium_line_g1

0xbf4c,	// (0x0006c0ed) list_medium_line_t1_ParamLimits

0xbf4c,	// (0x0006c0ed) list_medium_line_t1

0xbf04,	// (0x0006c0a5) list_medium_line_x2_g1_ParamLimits

0xbf04,	// (0x0006c0a5) list_medium_line_x2_g1

0xbf04,	// (0x0006c0a5) list_medium_line_x2_g2_ParamLimits

0xbf04,	// (0x0006c0a5) list_medium_line_x2_g2

0x0001,

0xf199,	// (0x0006f33a) list_medium_line_x2_g_ParamLimits

0xf199,	// (0x0006f33a) list_medium_line_x2_g

0xbf4c,	// (0x0006c0ed) list_medium_line_x2_t1_ParamLimits

0xbf4c,	// (0x0006c0ed) list_medium_line_x2_t1

0xbf04,	// (0x0006c0a5) list_medium_line_x3_g1_ParamLimits

0xbf04,	// (0x0006c0a5) list_medium_line_x3_g1

0xa190,	// (0x0006a331) list_medium_line_x3_g2_ParamLimits

0xa190,	// (0x0006a331) list_medium_line_x3_g2

0x0001,

0xfa62,	// (0x0006fc03) list_medium_line_x3_g_ParamLimits

0xfa62,	// (0x0006fc03) list_medium_line_x3_g

0xaef8,	// (0x0006b099) list_medium_line_x3_t1_ParamLimits

0xaef8,	// (0x0006b099) list_medium_line_x3_t1

0xaf0c,	// (0x0006b0ad) thumb_sp_fs_scroll_pane_g1

0xaf15,	// (0x0006b0b6) thumb_sp_fs_scroll_pane_g2

0xaf1e,	// (0x0006b0bf) thumb_sp_fs_scroll_pane_g3

0x0002,

0xfa67,	// (0x0006fc08) thumb_sp_fs_scroll_pane_g

0xaf0c,	// (0x0006b0ad) bg_sp_fs_scroll_pane_g1

0xaf15,	// (0x0006b0b6) bg_sp_fs_scroll_pane_g2

0xaf1e,	// (0x0006b0bf) bg_sp_fs_scroll_pane_g3

0x0002,

0xfa67,	// (0x0006fc08) bg_sp_fs_scroll_pane_g

0xbf04,	// (0x0006c0a5) list_medium_line_x2_t3_g4_g1_ParamLimits

0xbf04,	// (0x0006c0a5) list_medium_line_x2_t3_g4_g1

0xbf04,	// (0x0006c0a5) list_medium_line_x2_t3_g4_g2_ParamLimits

0xbf04,	// (0x0006c0a5) list_medium_line_x2_t3_g4_g2

0xbf04,	// (0x0006c0a5) list_medium_line_x2_t3_g4_g3_ParamLimits

0xbf04,	// (0x0006c0a5) list_medium_line_x2_t3_g4_g3

0xbf04,	// (0x0006c0a5) list_medium_line_x2_t3_g4_g4_ParamLimits

0xbf04,	// (0x0006c0a5) list_medium_line_x2_t3_g4_g4

0x0003,

0x0693,	// (0x00060834) list_medium_line_x2_t3_g4_g_ParamLimits

0x0693,	// (0x00060834) list_medium_line_x2_t3_g4_g

0xbf4c,	// (0x0006c0ed) list_medium_line_x2_t3_g4_t1_ParamLimits

0xbf4c,	// (0x0006c0ed) list_medium_line_x2_t3_g4_t1

0xbf4c,	// (0x0006c0ed) list_medium_line_x2_t3_g4_t2_ParamLimits

0xbf4c,	// (0x0006c0ed) list_medium_line_x2_t3_g4_t2

0xbf4c,	// (0x0006c0ed) list_medium_line_x2_t3_g4_t3_ParamLimits

0xbf4c,	// (0x0006c0ed) list_medium_line_x2_t3_g4_t3

0x0002,

0xf192,	// (0x0006f333) list_medium_line_x2_t3_g4_t_ParamLimits

0xf192,	// (0x0006f333) list_medium_line_x2_t3_g4_t

0xbf04,	// (0x0006c0a5) list_medium_line_g2_g1_ParamLimits

0xbf04,	// (0x0006c0a5) list_medium_line_g2_g1

0xbf04,	// (0x0006c0a5) list_medium_line_g2_g2_ParamLimits

0xbf04,	// (0x0006c0a5) list_medium_line_g2_g2

0x0001,

0xf199,	// (0x0006f33a) list_medium_line_g2_g_ParamLimits

0xf199,	// (0x0006f33a) list_medium_line_g2_g

0xbf4c,	// (0x0006c0ed) list_medium_line_g2_t1_ParamLimits

0xbf4c,	// (0x0006c0ed) list_medium_line_g2_t1

0xbf04,	// (0x0006c0a5) list_medium_line_t3_g2_g1_ParamLimits

0xbf04,	// (0x0006c0a5) list_medium_line_t3_g2_g1

0xbf04,	// (0x0006c0a5) list_medium_line_t3_g2_g2_ParamLimits

0xbf04,	// (0x0006c0a5) list_medium_line_t3_g2_g2

0x0001,

0xf199,	// (0x0006f33a) list_medium_line_t3_g2_g_ParamLimits

0xf199,	// (0x0006f33a) list_medium_line_t3_g2_g

0xbf4c,	// (0x0006c0ed) list_medium_line_t3_g2_t1_ParamLimits

0xbf4c,	// (0x0006c0ed) list_medium_line_t3_g2_t1

0xbf4c,	// (0x0006c0ed) list_medium_line_t3_g2_t2_ParamLimits

0xbf4c,	// (0x0006c0ed) list_medium_line_t3_g2_t2

0xbf4c,	// (0x0006c0ed) list_medium_line_t3_g2_t3_ParamLimits

0xbf4c,	// (0x0006c0ed) list_medium_line_t3_g2_t3

0x0002,

0xf192,	// (0x0006f333) list_medium_line_t3_g2_t_ParamLimits

0xf192,	// (0x0006f333) list_medium_line_t3_g2_t

0xbf42,	// (0x0006c0e3) list_medium_line_right_icon_g1

0xcc2e,	// (0x0006cdcf) list_medium_line_right_icon_t1

0xbf04,	// (0x0006c0a5) list_medium_line_t2_g1_ParamLimits

0xbf04,	// (0x0006c0a5) list_medium_line_t2_g1

0xbf4c,	// (0x0006c0ed) list_medium_line_t2_t1_ParamLimits

0xbf4c,	// (0x0006c0ed) list_medium_line_t2_t1

0xbf4c,	// (0x0006c0ed) list_medium_line_t2_t2_ParamLimits

0xbf4c,	// (0x0006c0ed) list_medium_line_t2_t2

0x0001,

0xf16e,	// (0x0006f30f) list_medium_line_t2_t_ParamLimits

0xf16e,	// (0x0006f30f) list_medium_line_t2_t

0xbf04,	// (0x0006c0a5) list_medium_line_t3_g1_ParamLimits

0xbf04,	// (0x0006c0a5) list_medium_line_t3_g1

0xbf4c,	// (0x0006c0ed) list_medium_line_t3_t1_ParamLimits

0xbf4c,	// (0x0006c0ed) list_medium_line_t3_t1

0xbf4c,	// (0x0006c0ed) list_medium_line_t3_t2_ParamLimits

0xbf4c,	// (0x0006c0ed) list_medium_line_t3_t2

0xbf4c,	// (0x0006c0ed) list_medium_line_t3_t3_ParamLimits

0xbf4c,	// (0x0006c0ed) list_medium_line_t3_t3

0x0002,

0xf192,	// (0x0006f333) list_medium_line_t3_t_ParamLimits

0xf192,	// (0x0006f333) list_medium_line_t3_t

0xbf04,	// (0x0006c0a5) list_medium_line_g3_g1_ParamLimits

0xbf04,	// (0x0006c0a5) list_medium_line_g3_g1

0xbf04,	// (0x0006c0a5) list_medium_line_g3_g2_ParamLimits

0xbf04,	// (0x0006c0a5) list_medium_line_g3_g2

0xbf04,	// (0x0006c0a5) list_medium_line_g3_g3_ParamLimits

0xbf04,	// (0x0006c0a5) list_medium_line_g3_g3

0x0002,

0xf18b,	// (0x0006f32c) list_medium_line_g3_g_ParamLimits

0xf18b,	// (0x0006f32c) list_medium_line_g3_g

0xbf4c,	// (0x0006c0ed) list_medium_line_g3_t1_ParamLimits

0xbf4c,	// (0x0006c0ed) list_medium_line_g3_t1

0xbf04,	// (0x0006c0a5) list_medium_line_t2_g3_g1_ParamLimits

0xbf04,	// (0x0006c0a5) list_medium_line_t2_g3_g1

0xbf04,	// (0x0006c0a5) list_medium_line_t2_g3_g2_ParamLimits

0xbf04,	// (0x0006c0a5) list_medium_line_t2_g3_g2

0xbf04,	// (0x0006c0a5) list_medium_line_t2_g3_g3_ParamLimits

0xbf04,	// (0x0006c0a5) list_medium_line_t2_g3_g3

0x0002,

0xf18b,	// (0x0006f32c) list_medium_line_t2_g3_g_ParamLimits

0xf18b,	// (0x0006f32c) list_medium_line_t2_g3_g

0xbf4c,	// (0x0006c0ed) list_medium_line_t2_g3_t1_ParamLimits

0xbf4c,	// (0x0006c0ed) list_medium_line_t2_g3_t1

0xbf4c,	// (0x0006c0ed) list_medium_line_t2_g3_t2_ParamLimits

0xbf4c,	// (0x0006c0ed) list_medium_line_t2_g3_t2

0x0001,

0xf16e,	// (0x0006f30f) list_medium_line_t2_g3_t_ParamLimits

0xf16e,	// (0x0006f30f) list_medium_line_t2_g3_t

0xbf04,	// (0x0006c0a5) list_medium_line_t3_g3_g1_ParamLimits

0xbf04,	// (0x0006c0a5) list_medium_line_t3_g3_g1

0xbf04,	// (0x0006c0a5) list_medium_line_t3_g3_g2_ParamLimits

0xbf04,	// (0x0006c0a5) list_medium_line_t3_g3_g2

0xbf04,	// (0x0006c0a5) list_medium_line_t3_g3_g3_ParamLimits

0xbf04,	// (0x0006c0a5) list_medium_line_t3_g3_g3

0x0002,

0xf18b,	// (0x0006f32c) list_medium_line_t3_g3_g_ParamLimits

0xf18b,	// (0x0006f32c) list_medium_line_t3_g3_g

0xbf4c,	// (0x0006c0ed) list_medium_line_t3_g3_t1_ParamLimits

0xbf4c,	// (0x0006c0ed) list_medium_line_t3_g3_t1

0xbf4c,	// (0x0006c0ed) list_medium_line_t3_g3_t2_ParamLimits

0xbf4c,	// (0x0006c0ed) list_medium_line_t3_g3_t2

0xbf4c,	// (0x0006c0ed) list_medium_line_t3_g3_t3_ParamLimits

0xbf4c,	// (0x0006c0ed) list_medium_line_t3_g3_t3

0x0002,

0xf192,	// (0x0006f333) list_medium_line_t3_g3_t_ParamLimits

0xf192,	// (0x0006f333) list_medium_line_t3_g3_t

0xbf42,	// (0x0006c0e3) list_medium_line_right_iconx2_g1

0xbf42,	// (0x0006c0e3) list_medium_line_right_iconx2_g2

0x0001,

0xf08c,	// (0x0006f22d) list_medium_line_right_iconx2_g

0xcc2e,	// (0x0006cdcf) list_medium_line_right_iconx2_t1

0xbf42,	// (0x0006c0e3) list_medium_line_t2_right_iconx2_g1

0xbf42,	// (0x0006c0e3) list_medium_line_t2_right_iconx2_g2

0x0001,

0xf08c,	// (0x0006f22d) list_medium_line_t2_right_iconx2_g

0xcc2e,	// (0x0006cdcf) list_medium_line_t2_right_iconx2_t1

0xcc2e,	// (0x0006cdcf) list_medium_line_t2_right_iconx2_t2

0x0001,

0xfa2e,	// (0x0006fbcf) list_medium_line_t2_right_iconx2_t

0xcc2e,	// (0x0006cdcf) list_medium_line_x4_t4_t1

0xcc2e,	// (0x0006cdcf) list_medium_line_x4_t4_t2

0xcc2e,	// (0x0006cdcf) list_medium_line_x4_t4_t3

0xcc2e,	// (0x0006cdcf) list_medium_line_x4_t4_t4

0x0003,

0xf252,	// (0x0006f3f3) list_medium_line_x4_t4_t

0x7909,	// (0x00067aaa) tport_appsw_pane_ParamLimits

0x7909,	// (0x00067aaa) tport_appsw_pane

0x7921,	// (0x00067ac2) tport_contact_pane_ParamLimits

0x7921,	// (0x00067ac2) tport_contact_pane

0x7939,	// (0x00067ada) tport_listscroll_pane_ParamLimits

0x7939,	// (0x00067ada) tport_listscroll_pane

0x7953,	// (0x00067af4) cell_tport_appsw_pane_ParamLimits

0x7953,	// (0x00067af4) cell_tport_appsw_pane

0xd1a8,	// (0x0006d349) tport_appsw_pane_g1_ParamLimits

0xd1a8,	// (0x0006d349) tport_appsw_pane_g1

0xaf27,	// (0x0006b0c8) tport_contact_pane_g1

0xaf30,	// (0x0006b0d1) tport_contact_pane_t1

0xaf3e,	// (0x0006b0df) tport_contact_pane_t2

0x0001,

0xfa6e,	// (0x0006fc0f) tport_contact_pane_t

0xaf4c,	// (0x0006b0ed) list_tport_pane

0xaf55,	// (0x0006b0f6) scroll_pane_cp_030

0x799b,	// (0x00067b3c) cell_tport_appsw_pane_g1

0x79ab,	// (0x00067b4c) cell_tport_appsw_pane_t1

0x79b9,	// (0x00067b5a) grid_highlight_pane_cp019

0x79c1,	// (0x00067b62) list_tport_double_graphic_pane_ParamLimits

0x79c1,	// (0x00067b62) list_tport_double_graphic_pane

0xbe9d,	// (0x0006c03e) list_highlight_pane_cp023_ParamLimits

0xbe9d,	// (0x0006c03e) list_highlight_pane_cp023

0x79ce,	// (0x00067b6f) list_tport_double_graphic_pane_g1_ParamLimits

0x79ce,	// (0x00067b6f) list_tport_double_graphic_pane_g1

0x79db,	// (0x00067b7c) list_tport_double_graphic_pane_t1_ParamLimits

0x79db,	// (0x00067b7c) list_tport_double_graphic_pane_t1

0x79f0,	// (0x00067b91) list_tport_double_graphic_pane_t2_ParamLimits

0x79f0,	// (0x00067b91) list_tport_double_graphic_pane_t2

0x0001,

0xfa7a,	// (0x0006fc1b) list_tport_double_graphic_pane_t_ParamLimits

0xfa7a,	// (0x0006fc1b) list_tport_double_graphic_pane_t

0xb7dd,	// (0x0006b97e) main_cale_note_pane

0x517e,	// (0x0006531f) cell_vitu2_function_top_wide_pane_cp01_ParamLimits

0x517e,	// (0x0006531f) cell_vitu2_function_top_wide_pane_cp01

0x71ff,	// (0x000673a0) wait_bar_pane_cp05_ParamLimits

0xbe9d,	// (0x0006c03e) listscroll_cmail_pane

0xaf66,	// (0x0006b107) list_cmail_pane

0x7a02,	// (0x00067ba3) list_cmail_body_pane

0x7a18,	// (0x00067bb9) list_single_cmail_header_caption_pane

0x7a2f,	// (0x00067bd0) list_single_cmail_header_detail_pane_ParamLimits

0x7a2f,	// (0x00067bd0) list_single_cmail_header_detail_pane

0xaf7d,	// (0x0006b11e) list_single_cmail_header_caption_pane_t1

0x7a5d,	// (0x00067bfe) list_single_cmail_header_detail_pane_g1_ParamLimits

0x7a5d,	// (0x00067bfe) list_single_cmail_header_detail_pane_g1

0x7a75,	// (0x00067c16) list_single_cmail_header_detail_pane_g2_ParamLimits

0x7a75,	// (0x00067c16) list_single_cmail_header_detail_pane_g2

0x0002,

0xfa7f,	// (0x0006fc20) list_single_cmail_header_detail_pane_g_ParamLimits

0xfa7f,	// (0x0006fc20) list_single_cmail_header_detail_pane_g

0x7a81,	// (0x00067c22) list_single_cmail_header_detail_pane_t1_ParamLimits

0x7a81,	// (0x00067c22) list_single_cmail_header_detail_pane_t1

0x7ae3,	// (0x00067c84) list_single_cmail_header_editor_pane_bg_ParamLimits

0x7ae3,	// (0x00067c84) list_single_cmail_header_editor_pane_bg

0xaa6d,	// (0x0006ac0e) list_cmail_body_pane_g1

0xafa1,	// (0x0006b142) list_cmail_body_pane_t1

0x53b7,	// (0x00065558) list_single_cmail_header_editor_pane_bg_g1

0xc952,	// (0x0006caf3) list_single_cmail_header_editor_pane_bg_g1_copy1

0x53c7,	// (0x00065568) list_single_cmail_header_editor_pane_bg_g1_copy2

0x53bf,	// (0x00065560) list_single_cmail_header_editor_pane_bg_g1_copy3

0x5d5d,	// (0x00065efe) list_single_cmail_header_editor_pane_bg_g1_copy4

0x53e7,	// (0x00065588) list_single_cmail_header_editor_pane_bg_g1_copy4_copy1

0x53d7,	// (0x00065578) list_single_cmail_header_editor_pane_bg_g1_copy4_copy2

0x53df,	// (0x00065580) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3

0xc932,	// (0x0006cad3) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3_copy1

0x7afc,	// (0x00067c9d) calenote_gesture_pane_ParamLimits

0x7afc,	// (0x00067c9d) calenote_gesture_pane

0x7b1c,	// (0x00067cbd) calenote_window_pane_ParamLimits

0x7b1c,	// (0x00067cbd) calenote_window_pane

0xafaf,	// (0x0006b150) popup_note_window_cp01

0x7b38,	// (0x00067cd9) calenote_swipe_1_pane_ParamLimits

0x7b38,	// (0x00067cd9) calenote_swipe_1_pane

0x7458,	// (0x000675f9) calenote_swipe_2_pane_ParamLimits

0x7458,	// (0x000675f9) calenote_swipe_2_pane

0xadd5,	// (0x0006af76) calenote_swipe_1_pane_g1_ParamLimits

0xadd5,	// (0x0006af76) calenote_swipe_1_pane_g1

0xafc1,	// (0x0006b162) calenote_swipe_1_pane_g2_ParamLimits

0xafc1,	// (0x0006b162) calenote_swipe_1_pane_g2

0x0001,

0xfa8b,	// (0x0006fc2c) calenote_swipe_1_pane_g_ParamLimits

0xfa8b,	// (0x0006fc2c) calenote_swipe_1_pane_g

0xafcd,	// (0x0006b16e) calenote_swipe_1_pane_t1_ParamLimits

0xafcd,	// (0x0006b16e) calenote_swipe_1_pane_t1

0xadd5,	// (0x0006af76) calenote_swipe_2_pane_g1_ParamLimits

0xadd5,	// (0x0006af76) calenote_swipe_2_pane_g1

0xafec,	// (0x0006b18d) calenote_swipe_2_pane_g2_ParamLimits

0xafec,	// (0x0006b18d) calenote_swipe_2_pane_g2

0x0001,

0xfa90,	// (0x0006fc31) calenote_swipe_2_pane_g_ParamLimits

0xfa90,	// (0x0006fc31) calenote_swipe_2_pane_g

0xaff8,	// (0x0006b199) calenote_swipe_2_pane_t1_ParamLimits

0xaff8,	// (0x0006b199) calenote_swipe_2_pane_t1

0xb7dd,	// (0x0006b97e) main_mup_navstr_pane

0x40c2,	// (0x00064263) main_mup3_pane_t7_ParamLimits

0x40c2,	// (0x00064263) main_mup3_pane_t7

0x9ef4,	// (0x0006a095) main_mp4_pane_g6_ParamLimits

0x9ef4,	// (0x0006a095) main_mp4_pane_g6

0xa11e,	// (0x0006a2bf) main_image3_pane_t4_ParamLimits

0xa11e,	// (0x0006a2bf) main_image3_pane_t4

0x7b4d,	// (0x00067cee) popup_navstr_preview_pane_ParamLimits

0x7b4d,	// (0x00067cee) popup_navstr_preview_pane

0x7b61,	// (0x00067d02) scroll_navstr_pane_ParamLimits

0x7b61,	// (0x00067d02) scroll_navstr_pane

0xb7dd,	// (0x0006b97e) bg_popup_preview_window_pane_cp04

0xb01f,	// (0x0006b1c0) popup_navstr_preview_pane_t1

0x7b75,	// (0x00067d16) scroll_navstr_pane_g1_ParamLimits

0x7b75,	// (0x00067d16) scroll_navstr_pane_g1

0x7b89,	// (0x00067d2a) scroll_navstr_pane_t1_ParamLimits

0x7b89,	// (0x00067d2a) scroll_navstr_pane_t1

0xafb8,	// (0x0006b159) bg_button_pane_cp014

0xafb8,	// (0x0006b159) bg_button_pane_cp030

0x7331,	// (0x000674d2) list_double_fisheye_pane_g4_ParamLimits

0x7331,	// (0x000674d2) list_double_fisheye_pane_g4

0x733d,	// (0x000674de) list_double_fisheye_pane_g5_ParamLimits

0x733d,	// (0x000674de) list_double_fisheye_pane_g5

0x9c32,	// (0x00069dd3) sp_fs_scroll_pane_cp03

0xaea1,	// (0x0006b042) main_sp_fs_ctrlbar_pane_g1_ParamLimits

0xaead,	// (0x0006b04e) main_sp_fs_ctrlbar_pane_g2_ParamLimits

0xfa33,	// (0x0006fbd4) main_sp_fs_ctrlbar_pane_g_ParamLimits

0x7544,	// (0x000676e5) main_sp_fs_ctrlbar_pane_t1_ParamLimits

0xaf75,	// (0x0006b116) sp_fs_scroll_pane_cp02

0xc4dc,	// (0x0006c67d) popup_sp_fs_calendar_preview_list_single_pane_ParamLimits

0xc4dc,	// (0x0006c67d) popup_sp_fs_calendar_preview_list_single_pane

0xb7dd,	// (0x0006b97e) main_cam6_pano_pane

0x9b93,	// (0x00069d34) main_mup3_pane_ParamLimits

0xb7dd,	// (0x0006b97e) main_phacti_pane

0x70d2,	// (0x00067273) bg_button_pane_cp11

0x70ec,	// (0x0006728d) main_mobtv_info_pane_g2_ParamLimits

0x70ec,	// (0x0006728d) main_mobtv_info_pane_g2

0x0001,

0xf9a5,	// (0x0006fb46) main_mobtv_info_pane_g_ParamLimits

0xf9a5,	// (0x0006fb46) main_mobtv_info_pane_g

0xbf4c,	// (0x0006c0ed) sc_clock_pane_t5_ParamLimits

0xbf4c,	// (0x0006c0ed) sc_clock_pane_t5

0xd1a8,	// (0x0006d349) main_radioblah_pane_g1_ParamLimits

0xd1b6,	// (0x0006d357) main_radioblah_pane_t3_ParamLimits

0xd1b6,	// (0x0006d357) main_radioblah_pane_t3

0xd1b6,	// (0x0006d357) main_radioblah_pane_t4_ParamLimits

0xd1b6,	// (0x0006d357) main_radioblah_pane_t4

0xbe9d,	// (0x0006c03e) main_radioblah_text_pane_ParamLimits

0xbe9d,	// (0x0006c03e) main_radioblah_text_pane

0xacb2,	// (0x0006ae53) main_radioblah_info_pane_g1_ParamLimits

0xacf6,	// (0x0006ae97) main_radioblah_info_pane_t4_ParamLimits

0xacf6,	// (0x0006ae97) main_radioblah_info_pane_t4

0xbe9d,	// (0x0006c03e) main_sp_fs_calendar_pane

0x7ba0,	// (0x00067d41) main_phacti_pane_g1

0x7ba8,	// (0x00067d49) phacti_note_pane_ParamLimits

0x7ba8,	// (0x00067d49) phacti_note_pane

0xb036,	// (0x0006b1d7) phacti_term_pane_ParamLimits

0xb036,	// (0x0006b1d7) phacti_term_pane

0xb04b,	// (0x0006b1ec) phacti_note_pane_t1_ParamLimits

0xb04b,	// (0x0006b1ec) phacti_note_pane_t1

0x7bbc,	// (0x00067d5d) phacti_term_pane_g1

0x7bc4,	// (0x00067d65) phacti_term_pane_t1_ParamLimits

0x7bc4,	// (0x00067d65) phacti_term_pane_t1

0xb062,	// (0x0006b203) popup_sp_fs_calendar_preview_list_single_pane_g1

0xb06a,	// (0x0006b20b) popup_sp_fs_calendar_preview_list_single_pane_g2

0x0001,

0xfa9a,	// (0x0006fc3b) popup_sp_fs_calendar_preview_list_single_pane_g

0xb072,	// (0x0006b213) popup_sp_fs_calendar_preview_list_single_pane_t1_ParamLimits

0xb072,	// (0x0006b213) popup_sp_fs_calendar_preview_list_single_pane_t1

0xb088,	// (0x0006b229) aid_popup_sp_fs_bg_corner_pane

0xbf42,	// (0x0006c0e3) popup_sp_fs_calendar_preview_bg_pane_g1

0xb7dd,	// (0x0006b97e) popup_sp_fs_calendar_preview_bg_pane

0xb090,	// (0x0006b231) popup_sp_fs_calendar_preview_list_pane

0xb098,	// (0x0006b239) bg_main_sp_fs_cale_pane_ParamLimits

0xb098,	// (0x0006b239) bg_main_sp_fs_cale_pane

0xb0b0,	// (0x0006b251) listscroll_cale_mrui_pane_ParamLimits

0xb0b0,	// (0x0006b251) listscroll_cale_mrui_pane

0xebe2,	// (0x0006ed83) listscroll_sp_fs_schedule_track_pane

0x7c03,	// (0x00067da4) main_sp_fs_ctrlbar_pane_cp01_ParamLimits

0x7c03,	// (0x00067da4) main_sp_fs_ctrlbar_pane_cp01

0xebe2,	// (0x0006ed83) main_sp_fs_ribbon_pane

0x7c19,	// (0x00067dba) popup_sp_fs_cale_preview_window

0x7c2b,	// (0x00067dcc) list_single_sp_fs_schedule_track_pane_ParamLimits

0x7c2b,	// (0x00067dcc) list_single_sp_fs_schedule_track_pane

0x9e0d,	// (0x00069fae) bg_sp_fs_highlight_list_pane_cp03_ParamLimits

0x9e0d,	// (0x00069fae) bg_sp_fs_highlight_list_pane_cp03

0x9e01,	// (0x00069fa2) list_single_sp_fs_schedule_track_pane_g1_ParamLimits

0x9e01,	// (0x00069fa2) list_single_sp_fs_schedule_track_pane_g1

0x9e01,	// (0x00069fa2) list_single_sp_fs_schedule_track_pane_g2_ParamLimits

0x9e01,	// (0x00069fa2) list_single_sp_fs_schedule_track_pane_g2

0x0001,

0xfa9f,	// (0x0006fc40) list_single_sp_fs_schedule_track_pane_g_ParamLimits

0xfa9f,	// (0x0006fc40) list_single_sp_fs_schedule_track_pane_g

0x7c37,	// (0x00067dd8) list_single_sp_fs_schedule_track_pane_t1_ParamLimits

0x7c37,	// (0x00067dd8) list_single_sp_fs_schedule_track_pane_t1

0x7c49,	// (0x00067dea) sp_fs_schedule_track_pane_ParamLimits

0x7c49,	// (0x00067dea) sp_fs_schedule_track_pane

0xebea,	// (0x0006ed8b) sp_fs_schedule_track_pane_g1

0xebea,	// (0x0006ed8b) sp_fs_schedule_track_pane_g2

0xebea,	// (0x0006ed8b) sp_fs_schedule_track_pane_g3

0xebea,	// (0x0006ed8b) sp_fs_schedule_track_pane_g4

0xebea,	// (0x0006ed8b) sp_fs_schedule_track_pane_g5

0x0004,

0x0812,	// (0x000609b3) sp_fs_schedule_track_pane_g

0xebea,	// (0x0006ed8b) bg_sp_fs_schedule_viewer_highlight_g1

0xebea,	// (0x0006ed8b) bg_sp_fs_schedule_viewer_highlight_g2

0xebea,	// (0x0006ed8b) bg_sp_fs_schedule_viewer_highlight_g3

0xebea,	// (0x0006ed8b) bg_sp_fs_schedule_viewer_highlight_g4

0xebea,	// (0x0006ed8b) bg_sp_fs_schedule_viewer_highlight_g5

0xebea,	// (0x0006ed8b) bg_sp_fs_schedule_viewer_highlight_g6

0xebea,	// (0x0006ed8b) bg_sp_fs_schedule_viewer_highlight_g7

0xebea,	// (0x0006ed8b) bg_sp_fs_schedule_viewer_highlight_g8

0xebea,	// (0x0006ed8b) bg_sp_fs_schedule_viewer_highlight_g9

0x0008,

0x081d,	// (0x000609be) bg_sp_fs_schedule_viewer_highlight_g

0xebe2,	// (0x0006ed83) bg_main_sp_fs_ribbon_pane

0xebea,	// (0x0006ed8b) main_sp_fs_ribbon_pane_g1

0xb0c8,	// (0x0006b269) main_sp_fs_ribbon_pane_t1

0xb0c8,	// (0x0006b269) main_sp_fs_ribbon_pane_t2

0xb0c8,	// (0x0006b269) main_sp_fs_ribbon_pane_t3

0x0002,

0xfaa4,	// (0x0006fc45) main_sp_fs_ribbon_pane_t

0xebe2,	// (0x0006ed83) main_sp_fs_ribbon_scheduler_pane

0xebea,	// (0x0006ed8b) bg_main_sp_fs_ribbon_pane_g1

0xebea,	// (0x0006ed8b) bg_main_sp_fs_ribbon_pane_g2

0xebea,	// (0x0006ed8b) bg_main_sp_fs_ribbon_pane_g3

0x0002,

0x0279,	// (0x0006041a) bg_main_sp_fs_ribbon_pane_g

0xebea,	// (0x0006ed8b) main_sp_fs_ribbon_scheduler_pane_g1

0xebea,	// (0x0006ed8b) main_sp_fs_ribbon_scheduler_pane_g2

0xebea,	// (0x0006ed8b) main_sp_fs_ribbon_scheduler_pane_g3

0x0002,

0x0279,	// (0x0006041a) main_sp_fs_ribbon_scheduler_pane_g

0xb0d6,	// (0x0006b277) list_cale_mrui_pane

0x7c55,	// (0x00067df6) sp_fs_scroll_pane_cp07_ParamLimits

0x7c55,	// (0x00067df6) sp_fs_scroll_pane_cp07

0x9e0d,	// (0x00069fae) bg_sp_fs_schedule_viewer_highlight_ParamLimits

0x9e0d,	// (0x00069fae) bg_sp_fs_schedule_viewer_highlight

0xebe2,	// (0x0006ed83) list_single_sp_fs_schedule_track_pane_cp01

0xebe2,	// (0x0006ed83) list_sp_fs_schedule_track_pane

0xb0e3,	// (0x0006b284) sp_fs_scroll_pane_cp06_ParamLimits

0xb0e3,	// (0x0006b284) sp_fs_scroll_pane_cp06

0xbf42,	// (0x0006c0e3) bgmain_sp_fs_calendar_pane_g1

0x7c71,	// (0x00067e12) list_single_cale_mrui_pane_ParamLimits

0x7c71,	// (0x00067e12) list_single_cale_mrui_pane

0x7c92,	// (0x00067e33) list_single_cale_mrui_row_pane_ParamLimits

0x7c92,	// (0x00067e33) list_single_cale_mrui_row_pane

0x7c9f,	// (0x00067e40) list_single_cale_mrui_row_pane_g1_ParamLimits

0x7c9f,	// (0x00067e40) list_single_cale_mrui_row_pane_g1

0x7cd7,	// (0x00067e78) list_single_cale_mrui_row_pane_t1_ParamLimits

0x7cd7,	// (0x00067e78) list_single_cale_mrui_row_pane_t1

0x7ce9,	// (0x00067e8a) list_single_cale_mrui_row_pane_t2_ParamLimits

0x7ce9,	// (0x00067e8a) list_single_cale_mrui_row_pane_t2

0x7d51,	// (0x00067ef2) list_single_cale_mrui_row_pane_t3_ParamLimits

0x7d51,	// (0x00067ef2) list_single_cale_mrui_row_pane_t3

0x7d80,	// (0x00067f21) list_single_cale_mrui_row_pane_t4_ParamLimits

0x7d80,	// (0x00067f21) list_single_cale_mrui_row_pane_t4

0x0003,

0xfab2,	// (0x0006fc53) list_single_cale_mrui_row_pane_t_ParamLimits

0xfab2,	// (0x0006fc53) list_single_cale_mrui_row_pane_t

0x7daf,	// (0x00067f50) list_single_cmail_header_editor_pane_bg_cp01_ParamLimits

0x7daf,	// (0x00067f50) list_single_cmail_header_editor_pane_bg_cp01

0x7ddd,	// (0x00067f7e) list_single_cmail_header_editor_pane_bg_cp02_ParamLimits

0x7ddd,	// (0x00067f7e) list_single_cmail_header_editor_pane_bg_cp02

0xb104,	// (0x0006b2a5) main_radioblah_text_pane_t1_ParamLimits

0xb104,	// (0x0006b2a5) main_radioblah_text_pane_t1

0xb11e,	// (0x0006b2bf) cam6_indi_pane_cp01

0xb126,	// (0x0006b2c7) cam6_mode_pane_cp01

0xb12e,	// (0x0006b2cf) cam6_pano_pane

0xb137,	// (0x0006b2d8) cam6_zoom_pane_cp01

0xb13f,	// (0x0006b2e0) cam6_pano_image_pane

0xb14a,	// (0x0006b2eb) cam6_pano_pane_g1

0xaa6d,	// (0x0006ac0e) cam6_pano_pane_g2

0xb153,	// (0x0006b2f4) cam6_pano_pane_g3

0xb15c,	// (0x0006b2fd) cam6_pano_pane_g4

0xee99,	// (0x0006f03a) cam6_pano_pane_g5

0xb165,	// (0x0006b306) cam6_pano_pane_g6

0xb16f,	// (0x0006b310) cam6_pano_pane_g7

0xb177,	// (0x0006b318) cam6_pano_pane_g8

0xb180,	// (0x0006b321) cam6_pano_pane_g9

0x0008,

0xfabb,	// (0x0006fc5c) cam6_pano_pane_g

0xb7dd,	// (0x0006b97e) main_browser_tag_pane

0xb017,	// (0x0006b1b8) grid_navstr_albumart_pane

0xb18b,	// (0x0006b32c) cell_navstr_albumart_pane_ParamLimits

0xb18b,	// (0x0006b32c) cell_navstr_albumart_pane

0xb1ab,	// (0x0006b34c) cell_navstr_albumart_pane_g1

0xb1b3,	// (0x0006b354) cell_navstr_albumart_pane_g2

0xb1bb,	// (0x0006b35c) cell_navstr_albumart_pane_g3

0xb1c3,	// (0x0006b364) cell_navstr_albumart_pane_g4

0x0003,

0xface,	// (0x0006fc6f) cell_navstr_albumart_pane_g

0x7dfd,	// (0x00067f9e) bt_list_pane_ParamLimits

0x7dfd,	// (0x00067f9e) bt_list_pane

0x7e11,	// (0x00067fb2) bt_list_pane_t1

0x7e20,	// (0x00067fc1) bt_list_pane_t2

0x0001,

0xfad7,	// (0x0006fc78) bt_list_pane_t

0xb7dd,	// (0x0006b97e) main_cale_prevew_pane

0x7e2f,	// (0x00067fd0) popup_cale_preview_window_ParamLimits

0x7e2f,	// (0x00067fd0) popup_cale_preview_window

0xbe9d,	// (0x0006c03e) bg_popup_preview_window_pane_cp05_ParamLimits

0xbe9d,	// (0x0006c03e) bg_popup_preview_window_pane_cp05

0xb1cb,	// (0x0006b36c) list_cale_preview_pane_ParamLimits

0xb1cb,	// (0x0006b36c) list_cale_preview_pane

0x7e48,	// (0x00067fe9) list_double_cale_preview_pane_ParamLimits

0x7e48,	// (0x00067fe9) list_double_cale_preview_pane

0x53ef,	// (0x00065590) list_single_cale_preview_pane_ParamLimits

0x53ef,	// (0x00065590) list_single_cale_preview_pane

0x7e5a,	// (0x00067ffb) list_single_cale_preview_pane_g1

0x7e62,	// (0x00068003) list_single_cale_preview_pane_t1_ParamLimits

0x7e62,	// (0x00068003) list_single_cale_preview_pane_t1

0x7e77,	// (0x00068018) list_double_cale_preview_pane_g1

0x7e7f,	// (0x00068020) list_double_cale_preview_pane_t1_ParamLimits

0x7e7f,	// (0x00068020) list_double_cale_preview_pane_t1

0x7e94,	// (0x00068035) list_double_cale_preview_pane_t2_ParamLimits

0x7e94,	// (0x00068035) list_double_cale_preview_pane_t2

0x0001,

0xfadc,	// (0x0006fc7d) list_double_cale_preview_pane_t_ParamLimits

0xfadc,	// (0x0006fc7d) list_double_cale_preview_pane_t

0xb7dd,	// (0x0006b97e) main_ezdial_pane

0xbe9d,	// (0x0006c03e) main_sp_fs_email_pane_ParamLimits

0x74b4,	// (0x00067655) cmail_ddmenu_btn01_pane_ParamLimits

0x74b4,	// (0x00067655) cmail_ddmenu_btn01_pane

0x74c7,	// (0x00067668) cmail_ddmenu_btn02_pane_ParamLimits

0x74c7,	// (0x00067668) cmail_ddmenu_btn02_pane

0x74ea,	// (0x0006768b) cmail_ddmenu_btn03_pane_ParamLimits

0x74ea,	// (0x0006768b) cmail_ddmenu_btn03_pane

0x7583,	// (0x00067724) main_sp_fs_ctrlbar_pane_ParamLimits

0x75a7,	// (0x00067748) main_sp_fs_listscroll_pane_te_cp01_ParamLimits

0x7a02,	// (0x00067ba3) list_cmail_body_pane_ParamLimits

0xaf8b,	// (0x0006b12c) bg_button_pane_cp12

0xaf94,	// (0x0006b135) list_single_cmail_header_detail_pane_g3_ParamLimits

0xaf94,	// (0x0006b135) list_single_cmail_header_detail_pane_g3

0x7abf,	// (0x00067c60) list_single_cmail_header_detail_pane_t2_ParamLimits

0x7abf,	// (0x00067c60) list_single_cmail_header_detail_pane_t2

0x0001,

0xfa86,	// (0x0006fc27) list_single_cmail_header_detail_pane_t_ParamLimits

0xfa86,	// (0x0006fc27) list_single_cmail_header_detail_pane_t

0x7bd9,	// (0x00067d7a) phacti_term_pane_t2_ParamLimits

0x7bd9,	// (0x00067d7a) phacti_term_pane_t2

0x0001,

0xfa95,	// (0x0006fc36) phacti_term_pane_t_ParamLimits

0xfa95,	// (0x0006fc36) phacti_term_pane_t

0xb1d7,	// (0x0006b378) aid_size_list_single_double

0x7eac,	// (0x0006804d) popup_ezdial_listscroll_window

0xb1e3,	// (0x0006b384) popup_number_entry_window_cp01

0xc58b,	// (0x0006c72c) bg_popup_call_pane_cp09

0xb1f0,	// (0x0006b391) ezdial_list_pane

0xb1f8,	// (0x0006b399) scroll_pane_cp23

0xd1ca,	// (0x0006d36b) bg_button_pane_cp028_ParamLimits

0xd1ca,	// (0x0006d36b) bg_button_pane_cp028

0x7ec3,	// (0x00068064) cmail_ddmenu_btn01_pane_g1_ParamLimits

0x7ec3,	// (0x00068064) cmail_ddmenu_btn01_pane_g1

0x7ecf,	// (0x00068070) cmail_ddmenu_btn01_pane_g2_ParamLimits

0x7ecf,	// (0x00068070) cmail_ddmenu_btn01_pane_g2

0x0001,

0xfae1,	// (0x0006fc82) cmail_ddmenu_btn01_pane_g_ParamLimits

0xfae1,	// (0x0006fc82) cmail_ddmenu_btn01_pane_g

0xb200,	// (0x0006b3a1) cmail_ddmenu_btn01_pane_t1_ParamLimits

0xb200,	// (0x0006b3a1) cmail_ddmenu_btn01_pane_t1

0xd1ca,	// (0x0006d36b) bg_button_pane_cp029_ParamLimits

0xd1ca,	// (0x0006d36b) bg_button_pane_cp029

0x7edb,	// (0x0006807c) cmail_ddmenu_btn02_pane_g1_ParamLimits

0x7edb,	// (0x0006807c) cmail_ddmenu_btn02_pane_g1

0x7ef3,	// (0x00068094) cmail_ddmenu_btn02_pane_t1_ParamLimits

0x7ef3,	// (0x00068094) cmail_ddmenu_btn02_pane_t1

0xbe9d,	// (0x0006c03e) bg_button_pane_cp031_ParamLimits

0xbe9d,	// (0x0006c03e) bg_button_pane_cp031

0x7edb,	// (0x0006807c) cmail_ddmenu_btn03_pane_g1_ParamLimits

0x7edb,	// (0x0006807c) cmail_ddmenu_btn03_pane_g1

0x7ef3,	// (0x00068094) cmail_ddmenu_btn03_pane_t1_ParamLimits

0x7ef3,	// (0x00068094) cmail_ddmenu_btn03_pane_t1

0xbf4c,	// (0x0006c0ed) cell_dialer2_keypad_pane_t1_ParamLimits

0xee7c,	// (0x0006f01d) cell_dialer2_keypad_pane_t1_copy1_ParamLimits

0xee7c,	// (0x0006f01d) cell_dialer2_keypad_pane_t1_copy1

0x6ef5,	// (0x00067096) ncimui_group_button_pane

0xbe9d,	// (0x0006c03e) main_sp_fs_calendar_pane_ParamLimits

0x7a18,	// (0x00067bb9) list_single_cmail_header_caption_pane_ParamLimits

0x7bfa,	// (0x00067d9b) aid_recal_txt_sm_pane

0xb7dd,	// (0x0006b97e) mian_recal_day_pane

0x7c19,	// (0x00067dba) popup_sp_fs_cale_preview_window_ParamLimits

0xb215,	// (0x0006b3b6) list_recal_day_pane

0x7f32,	// (0x000680d3) list_single_recal_day_pane_ParamLimits

0x7f32,	// (0x000680d3) list_single_recal_day_pane

0xb23c,	// (0x0006b3dd) list_single_recal_day_pane_g1_ParamLimits

0xb23c,	// (0x0006b3dd) list_single_recal_day_pane_g1

0x7f44,	// (0x000680e5) list_single_recal_day_pane_g2_ParamLimits

0x7f44,	// (0x000680e5) list_single_recal_day_pane_g2

0x7f50,	// (0x000680f1) list_single_recal_day_pane_g3_ParamLimits

0x7f50,	// (0x000680f1) list_single_recal_day_pane_g3

0x7f5c,	// (0x000680fd) list_single_recal_day_pane_g4_ParamLimits

0x7f5c,	// (0x000680fd) list_single_recal_day_pane_g4

0x7f6a,	// (0x0006810b) list_single_recal_day_pane_g5_ParamLimits

0x7f6a,	// (0x0006810b) list_single_recal_day_pane_g5

0x7f80,	// (0x00068121) list_single_recal_day_pane_g6_ParamLimits

0x7f80,	// (0x00068121) list_single_recal_day_pane_g6

0x0004,

0xfaf0,	// (0x0006fc91) list_single_recal_day_pane_g_ParamLimits

0xfaf0,	// (0x0006fc91) list_single_recal_day_pane_g

0x7f94,	// (0x00068135) list_single_recal_day_pane_t1

0x7fa6,	// (0x00068147) list_single_recal_day_pane_t2

0x0001,

0xfafb,	// (0x0006fc9c) list_single_recal_day_pane_t

0x7fb8,	// (0x00068159) ncimui_query_button_pane_ParamLimits

0x7fb8,	// (0x00068159) ncimui_query_button_pane

0x7fc8,	// (0x00068169) ncimui_query_button_pane_t1_ParamLimits

0x7fc8,	// (0x00068169) ncimui_query_button_pane_t1

0xb248,	// (0x0006b3e9) ncimui_query_button_pane_t2_ParamLimits

0xb248,	// (0x0006b3e9) ncimui_query_button_pane_t2

0x0001,

0xfb00,	// (0x0006fca1) ncimui_query_button_pane_t_ParamLimits

0xfb00,	// (0x0006fca1) ncimui_query_button_pane_t

0x7fdb,	// (0x0006817c) query_button_pane_ParamLimits

0x7fdb,	// (0x0006817c) query_button_pane

0xb7dd,	// (0x0006b97e) bg_button_pane_cp0028

0xb25b,	// (0x0006b3fc) query_button_pane_t1

0x33f1,	// (0x00063592) main_tport_pane_ParamLimits

0x78c6,	// (0x00067a67) bg_popup_window_pane_cp01_ParamLimits

0x78c6,	// (0x00067a67) bg_popup_window_pane_cp01

0x78e1,	// (0x00067a82) heading_pane_cp08_ParamLimits

0x78e1,	// (0x00067a82) heading_pane_cp08

0x78f4,	// (0x00067a95) heading_pane_cp07_ParamLimits

0x78f4,	// (0x00067a95) heading_pane_cp07

0x799b,	// (0x00067b3c) cell_tport_appsw_pane_g2

0x0002,

0xfa73,	// (0x0006fc14) cell_tport_appsw_pane_g

0xd265,	// (0x0006d406) input_candi_list_open_g1

0xcacd,	// (0x0006cc6e) list_cale_time_pane_g6_ParamLimits

0xcacd,	// (0x0006cc6e) list_cale_time_pane_g6

0x3a0c,	// (0x00063bad) aid_size_touch_calib_1_ParamLimits

0x3a0c,	// (0x00063bad) aid_size_touch_calib_1

0x3a1e,	// (0x00063bbf) aid_size_touch_calib_2_ParamLimits

0x3a1e,	// (0x00063bbf) aid_size_touch_calib_2

0x3a36,	// (0x00063bd7) aid_size_touch_calib_3_ParamLimits

0x3a36,	// (0x00063bd7) aid_size_touch_calib_3

0x3a54,	// (0x00063bf5) aid_size_touch_calib_4_ParamLimits

0x3a54,	// (0x00063bf5) aid_size_touch_calib_4

0x3a6c,	// (0x00063c0d) main_touch_calib_button_group_pane_ParamLimits

0x3a6c,	// (0x00063c0d) main_touch_calib_button_group_pane

0x3a84,	// (0x00063c25) main_touch_calib_pane_g1_ParamLimits

0x3a96,	// (0x00063c37) main_touch_calib_pane_g2_ParamLimits

0x3aa8,	// (0x00063c49) main_touch_calib_pane_g3_ParamLimits

0x3aba,	// (0x00063c5b) main_touch_calib_pane_g4_ParamLimits

0xf54d,	// (0x0006f6ee) main_touch_calib_pane_g_ParamLimits

0x3acc,	// (0x00063c6d) main_touch_calib_pane_t1_ParamLimits

0x3ae6,	// (0x00063c87) main_touch_calib_pane_t2_ParamLimits

0x3b00,	// (0x00063ca1) main_touch_calib_pane_t3_ParamLimits

0x3b14,	// (0x00063cb5) main_touch_calib_pane_t4_ParamLimits

0x3b28,	// (0x00063cc9) main_touch_calib_pane_t5_ParamLimits

0xf556,	// (0x0006f6f7) main_touch_calib_pane_t_ParamLimits

0xec4a,	// (0x0006edeb) list_single_fp_cale_pane_g3_ParamLimits

0xec4a,	// (0x0006edeb) list_single_fp_cale_pane_g3

0x9b93,	// (0x00069d34) bg_button_pane_cp012_ParamLimits

0x9b93,	// (0x00069d34) bg_vkb2_func_pane_cp03_ParamLimits

0x5d19,	// (0x00065eba) cell_vitu2_function_top_pane_g1_ParamLimits

0x9b93,	// (0x00069d34) bg_vkb2_func_pane_cp04_ParamLimits

0x6e80,	// (0x00067021) main_ncimui_button_group_pane_ParamLimits

0x6e80,	// (0x00067021) main_ncimui_button_group_pane

0x6ee0,	// (0x00067081) main_ncimui_pane_t3_ParamLimits

0x6ee0,	// (0x00067081) main_ncimui_pane_t3

0xb02d,	// (0x0006b1ce) phacti_button_group_pane

0xb1d7,	// (0x0006b378) aid_size_list_single_double_ParamLimits

0x7eac,	// (0x0006804d) popup_ezdial_listscroll_window_ParamLimits

0xb1e3,	// (0x0006b384) popup_number_entry_window_cp01_ParamLimits

0x7fee,	// (0x0006818f) phacti_button_pane_ParamLimits

0x7fee,	// (0x0006818f) phacti_button_pane

0xb7dd,	// (0x0006b97e) bg_button_pane_cp14

0xb269,	// (0x0006b40a) phacti_button_pane_t1

0x7fff,	// (0x000681a0) main_touch_calib_button_pane_ParamLimits

0x7fff,	// (0x000681a0) main_touch_calib_button_pane

0xbfa0,	// (0x0006c141) bg_button_pane_cp18_ParamLimits

0xbfa0,	// (0x0006c141) bg_button_pane_cp18

0xb277,	// (0x0006b418) main_touch_calib_button_pane_t1_ParamLimits

0xb277,	// (0x0006b418) main_touch_calib_button_pane_t1

0xb28d,	// (0x0006b42e) main_touch_calib_button_pane_t2_ParamLimits

0xb28d,	// (0x0006b42e) main_touch_calib_button_pane_t2

0x0001,

0xfb05,	// (0x0006fca6) main_touch_calib_button_pane_t_ParamLimits

0xfb05,	// (0x0006fca6) main_touch_calib_button_pane_t

0xb7dd,	// (0x0006b97e) cell_ncimui_button_pane

0xb7dd,	// (0x0006b97e) bg_button_pane_cp032

0xb2ab,	// (0x0006b44c) cell_ncimui_button_pane_t1

0xa0fe,	// (0x0006a29f) image3_infobar_pane_ParamLimits

0xa0fe,	// (0x0006a29f) image3_infobar_pane

0x7252,	// (0x000673f3) fs_bigclock_status_pane_ParamLimits

0x7252,	// (0x000673f3) fs_bigclock_status_pane

0x725f,	// (0x00067400) main_fs_bigclock_clock_pane_ParamLimits

0x725f,	// (0x00067400) main_fs_bigclock_clock_pane

0x727d,	// (0x0006741e) main_fs_bigclock_indi_pane_ParamLimits

0x727d,	// (0x0006741e) main_fs_bigclock_indi_pane

0x72af,	// (0x00067450) main_fs_bigclock_swipe_pane_ParamLimits

0x72af,	// (0x00067450) main_fs_bigclock_swipe_pane

0xb7dd,	// (0x0006b97e) main_fs_clock_dumped_data

0xab7a,	// (0x0006ad1b) list_single_fs_bigclock_indicator_pane_g1_ParamLimits

0xab7a,	// (0x0006ad1b) list_single_fs_bigclock_indicator_pane_g1

0xab96,	// (0x0006ad37) list_single_fs_bigclock_indicator_pane_g2_ParamLimits

0xab96,	// (0x0006ad37) list_single_fs_bigclock_indicator_pane_g2

0xabb0,	// (0x0006ad51) list_single_fs_bigclock_indicator_pane_g3_ParamLimits

0xabb0,	// (0x0006ad51) list_single_fs_bigclock_indicator_pane_g3

0xabca,	// (0x0006ad6b) list_single_fs_bigclock_indicator_pane_g4_ParamLimits

0xabca,	// (0x0006ad6b) list_single_fs_bigclock_indicator_pane_g4

0x0004,

0xf9d9,	// (0x0006fb7a) list_single_fs_bigclock_indicator_pane_g_ParamLimits

0xf9d9,	// (0x0006fb7a) list_single_fs_bigclock_indicator_pane_g

0xabf5,	// (0x0006ad96) list_single_fs_bigclock_indicator_pane_t1_ParamLimits

0xabf5,	// (0x0006ad96) list_single_fs_bigclock_indicator_pane_t1

0xac1d,	// (0x0006adbe) list_single_fs_bigclock_indicator_pane_t2_ParamLimits

0xac1d,	// (0x0006adbe) list_single_fs_bigclock_indicator_pane_t2

0xac45,	// (0x0006ade6) list_single_fs_bigclock_indicator_pane_t3_ParamLimits

0xac45,	// (0x0006ade6) list_single_fs_bigclock_indicator_pane_t3

0xac6d,	// (0x0006ae0e) list_single_fs_bigclock_indicator_pane_t4_ParamLimits

0xac6d,	// (0x0006ae0e) list_single_fs_bigclock_indicator_pane_t4

0x0004,

0xf9e4,	// (0x0006fb85) list_single_fs_bigclock_indicator_pane_t_ParamLimits

0xf9e4,	// (0x0006fb85) list_single_fs_bigclock_indicator_pane_t

0xb2b9,	// (0x0006b45a) image3_infobar_fav_pane_ParamLimits

0xb2b9,	// (0x0006b45a) image3_infobar_fav_pane

0xb2c9,	// (0x0006b46a) image3_infobar_loc_pane_ParamLimits

0xb2c9,	// (0x0006b46a) image3_infobar_loc_pane

0xb2dd,	// (0x0006b47e) image3_infobar_time_pane_ParamLimits

0xb2dd,	// (0x0006b47e) image3_infobar_time_pane

0xbf42,	// (0x0006c0e3) image3_infobar_time_pane_g1

0xb2ed,	// (0x0006b48e) image3_infobar_time_pane_t1

0xbf42,	// (0x0006c0e3) image3_infobar_loc_pane_g1

0xb2fb,	// (0x0006b49c) image3_infobar_loc_pane_g2

0x0001,

0xfb0a,	// (0x0006fcab) image3_infobar_loc_pane_g

0xb303,	// (0x0006b4a4) image3_infobar_loc_pane_t1

0xbf42,	// (0x0006c0e3) image3_infobar_fav_pane_g1

0xb311,	// (0x0006b4b2) image3_infobar_fav_pane_g2

0x0001,

0xfb0f,	// (0x0006fcb0) image3_infobar_fav_pane_g

0xb319,	// (0x0006b4ba) fs_bigclock_status_battery_pane

0xb322,	// (0x0006b4c3) fs_bigclock_status_signal_pane

0xb32b,	// (0x0006b4cc) fs_bigclock_status_title_pane

0xb334,	// (0x0006b4d5) fs_bigclock_status_signal_pane_g1

0xb33d,	// (0x0006b4de) fs_bigclock_status_signal_pane_g2

0x0001,

0xfb14,	// (0x0006fcb5) fs_bigclock_status_signal_pane_g

0xb345,	// (0x0006b4e6) fs_bigclock_status_battery_pane_g1

0xb34e,	// (0x0006b4ef) fs_bigclock_status_battery_pane_g2

0x0001,

0xfb19,	// (0x0006fcba) fs_bigclock_status_battery_pane_g

0xb356,	// (0x0006b4f7) fs_bigclock_status_title_pane_t1

0x8014,	// (0x000681b5) main_fs_bigclock_clock_pane_g1

0x8014,	// (0x000681b5) main_fs_bigclock_clock_pane_g2

0x8014,	// (0x000681b5) main_fs_bigclock_clock_pane_g3

0x8014,	// (0x000681b5) main_fs_bigclock_clock_pane_g4

0x0003,

0xfb1e,	// (0x0006fcbf) main_fs_bigclock_clock_pane_g

0x8027,	// (0x000681c8) main_fs_bigclock_clock_pane_t1

0x8041,	// (0x000681e2) main_fs_bigclock_clock_pane_t2

0x0001,

0xfb27,	// (0x0006fcc8) main_fs_bigclock_clock_pane_t

0xb364,	// (0x0006b505) list_single_fs_bigclock_indicator_pane_ParamLimits

0xb364,	// (0x0006b505) list_single_fs_bigclock_indicator_pane

0xb375,	// (0x0006b516) list_single_fs_bigclock_pane_ParamLimits

0xb375,	// (0x0006b516) list_single_fs_bigclock_pane

0xb39b,	// (0x0006b53c) main_fs_bigclock_indicator_pane_t1

0xb3aa,	// (0x0006b54b) list_single_fs_bigclock_pane_g1

0xb3b2,	// (0x0006b553) list_single_fs_bigclock_pane_t1

0xbf42,	// (0x0006c0e3) main_fs_bigclock_swipe_pane_g1

0xb3f5,	// (0x0006b596) main_fs_bigclock_swipe_pane_g2

0x0001,

0xfb38,	// (0x0006fcd9) main_fs_bigclock_swipe_pane_g

0xb3fd,	// (0x0006b59e) main_fs_bigclock_swipe_pane_t1_ParamLimits

0xb3fd,	// (0x0006b59e) main_fs_bigclock_swipe_pane_t1

0x2596,	// (0x00062737) call_type_pane_ParamLimits

0xb7dd,	// (0x0006b97e) main_btmg_pane

0x7ccb,	// (0x00067e6c) list_single_cale_mrui_row_pane_g2_ParamLimits

0x7ccb,	// (0x00067e6c) list_single_cale_mrui_row_pane_g2

0x0002,

0xfaab,	// (0x0006fc4c) list_single_cale_mrui_row_pane_g_ParamLimits

0xfaab,	// (0x0006fc4c) list_single_cale_mrui_row_pane_g

0x7f21,	// (0x000680c2) list_recal_vselct_arw_lo_pane

0xb234,	// (0x0006b3d5) list_recal_vselct_arw_up_pane

0x7f29,	// (0x000680ca) list_recal_vselct_pane

0x809b,	// (0x0006823c) btmg_button_pane

0x80a5,	// (0x00068246) main_btmg_pane_g1

0xb7dd,	// (0x0006b97e) bg_button_pane_cp044

0xb41a,	// (0x0006b5bb) btmg_button_pane_t1

0xe439,	// (0x0006e5da) aid_listscroll_gen

0xbe9d,	// (0x0006c03e) main_cntbar_detail_pane

0xaf5e,	// (0x0006b0ff) list_cmail_folder_pane

0x9c32,	// (0x00069dd3) sp_fs_scroll_pane_cp03_ParamLimits

0x7a18,	// (0x00067bb9) list_single_fs_dyc_pane_cp01_ParamLimits

0x7a18,	// (0x00067bb9) list_single_fs_dyc_pane_cp01

0xb428,	// (0x0006b5c9) aid_size_cmail_indent

0x80af,	// (0x00068250) list_single_dyc_row_pane_cp01

0x80ea,	// (0x0006828b) cntbar_detail_list_pane_ParamLimits

0x80ea,	// (0x0006828b) cntbar_detail_list_pane

0x8136,	// (0x000682d7) main_cntbar_detail_cont_pane_ParamLimits

0x8136,	// (0x000682d7) main_cntbar_detail_cont_pane

0x9c32,	// (0x00069dd3) scroll_pane_cp032_ParamLimits

0x9c32,	// (0x00069dd3) scroll_pane_cp032

0x814a,	// (0x000682eb) cntbar_detail_list_event_pane_ParamLimits

0x814a,	// (0x000682eb) cntbar_detail_list_event_pane

0x80fa,	// (0x0006829b) cntbar_detail_list_shct_pane

0xc9a0,	// (0x0006cb41) aid_list_gen

0xb431,	// (0x0006b5d2) aid_scroll

0xb43a,	// (0x0006b5db) aid_size_touch_scroll_bar

0xb443,	// (0x0006b5e4) aid_list_double

0x815a,	// (0x000682fb) aid_list_single

0x815a,	// (0x000682fb) aid_list_single_lg

0x8163,	// (0x00068304) aid_list_z_g_a_sm

0x816b,	// (0x0006830c) aid_list_z_g_d

0x8173,	// (0x00068314) aid_txt_z_prm

0x8181,	// (0x00068322) aid_txt_z_prm_cp01

0x818f,	// (0x00068330) aid_txt_z_sec

0x819d,	// (0x0006833e) main_cntbar_detail_cont_pane_g1_ParamLimits

0x819d,	// (0x0006833e) main_cntbar_detail_cont_pane_g1

0x81b1,	// (0x00068352) main_cntbar_detail_cont_pane_g2_ParamLimits

0x81b1,	// (0x00068352) main_cntbar_detail_cont_pane_g2

0x0001,

0xfb3d,	// (0x0006fcde) main_cntbar_detail_cont_pane_g_ParamLimits

0xfb3d,	// (0x0006fcde) main_cntbar_detail_cont_pane_g

0xb44c,	// (0x0006b5ed) main_cntbar_detail_cont_pane_t1

0xb45a,	// (0x0006b5fb) main_cntbar_detail_cont_pane_t2

0xb468,	// (0x0006b609) main_cntbar_detail_cont_pane_t3

0x0002,

0xfb42,	// (0x0006fce3) main_cntbar_detail_cont_pane_t

0x81c1,	// (0x00068362) cell_cntbar_detail_list_shct_pane_ParamLimits

0x81c1,	// (0x00068362) cell_cntbar_detail_list_shct_pane

0xb476,	// (0x0006b617) cntbar_detail_list_shct_pane_g1

0xb47f,	// (0x0006b620) cntbar_detail_list_shct_pane_g2

0x0001,

0xfb49,	// (0x0006fcea) cntbar_detail_list_shct_pane_g

0x81d5,	// (0x00068376) cntbar_detail_list_event_pane_g1_ParamLimits

0x81d5,	// (0x00068376) cntbar_detail_list_event_pane_g1

0x81e1,	// (0x00068382) cntbar_detail_list_event_pane_g2_ParamLimits

0x81e1,	// (0x00068382) cntbar_detail_list_event_pane_g2

0x0005,

0xfb4e,	// (0x0006fcef) cntbar_detail_list_event_pane_g_ParamLimits

0xfb4e,	// (0x0006fcef) cntbar_detail_list_event_pane_g

0x824d,	// (0x000683ee) cntbar_detail_list_event_pane_t1_ParamLimits

0x824d,	// (0x000683ee) cntbar_detail_list_event_pane_t1

0x8262,	// (0x00068403) cntbar_detail_list_event_pane_t2_ParamLimits

0x8262,	// (0x00068403) cntbar_detail_list_event_pane_t2

0x0002,

0xfb5b,	// (0x0006fcfc) cntbar_detail_list_event_pane_t_ParamLimits

0xfb5b,	// (0x0006fcfc) cntbar_detail_list_event_pane_t

0xbf42,	// (0x0006c0e3) cell_cntbar_detail_list_shct_pane_g1

0xd0a9,	// (0x0006d24a) navi_pane_mv_g3

0xbe9d,	// (0x0006c03e) main_cntbar_detail_pane_ParamLimits

0xb7dd,	// (0x0006b97e) main_notif_wgt_pane

0x9e7e,	// (0x0006a01f) aid_tch_main_mp4_pane_g4

0xa0f6,	// (0x0006a297) popup_slider_window_cp02

0x7f17,	// (0x000680b8) list_recal_day_event_pane

0x80b8,	// (0x00068259) cntbar_detail_btn_pane_ParamLimits

0x80b8,	// (0x00068259) cntbar_detail_btn_pane

0x80d1,	// (0x00068272) cntbar_detail_btn_pane_cp01_ParamLimits

0x80d1,	// (0x00068272) cntbar_detail_btn_pane_cp01

0x80fa,	// (0x0006829b) cntbar_detail_list_shct_pane_ParamLimits

0x810a,	// (0x000682ab) cntbar_detail_pane_g1_ParamLimits

0x810a,	// (0x000682ab) cntbar_detail_pane_g1

0x811a,	// (0x000682bb) cntbar_detail_pane_t1_ParamLimits

0x811a,	// (0x000682bb) cntbar_detail_pane_t1

0x81ed,	// (0x0006838e) cntbar_detail_list_event_pane_g3_ParamLimits

0x81ed,	// (0x0006838e) cntbar_detail_list_event_pane_g3

0x8205,	// (0x000683a6) cntbar_detail_list_event_pane_g4_ParamLimits

0x8205,	// (0x000683a6) cntbar_detail_list_event_pane_g4

0x821d,	// (0x000683be) cntbar_detail_list_event_pane_g5_ParamLimits

0x821d,	// (0x000683be) cntbar_detail_list_event_pane_g5

0x8235,	// (0x000683d6) cntbar_detail_list_event_pane_g6_ParamLimits

0x8235,	// (0x000683d6) cntbar_detail_list_event_pane_g6

0x8277,	// (0x00068418) cntbar_detail_list_event_pane_t3_ParamLimits

0x8277,	// (0x00068418) cntbar_detail_list_event_pane_t3

0x8289,	// (0x0006842a) popup_notif_wgt_window_ParamLimits

0x8289,	// (0x0006842a) popup_notif_wgt_window

0x82a2,	// (0x00068443) popup_submenu_window_cp01_ParamLimits

0x82a2,	// (0x00068443) popup_submenu_window_cp01

0xc58b,	// (0x0006c72c) bg_popup_window_pane_cp10

0xb488,	// (0x0006b629) listscroll_notif_wgt_pane

0xb49a,	// (0x0006b63b) list_notif_wgt_window

0xb4a3,	// (0x0006b644) scroll_pane_cp033

0x82b4,	// (0x00068455) list_notif_wgt_row_pane_ParamLimits

0x82b4,	// (0x00068455) list_notif_wgt_row_pane

0xb4ac,	// (0x0006b64d) aid_size_list_notif_wgt_del

0xb4b9,	// (0x0006b65a) list_notif_wgt_row_pane_g1

0xb4c5,	// (0x0006b666) list_notif_wgt_row_pane_g2

0xb4d4,	// (0x0006b675) list_notif_wgt_row_pane_g3

0x0002,

0xfb62,	// (0x0006fd03) list_notif_wgt_row_pane_g

0xb4e1,	// (0x0006b682) list_notif_wgt_row_pane_t1

0xb4f7,	// (0x0006b698) list_notif_wgt_row_pane_t2

0xb509,	// (0x0006b6aa) list_notif_wgt_row_pane_t3

0x0002,

0xfb69,	// (0x0006fd0a) list_notif_wgt_row_pane_t

0x5dbf,	// (0x00065f60) list_recal_day_event_pane_g1

0xb51b,	// (0x0006b6bc) list_recal_day_event_pane_t1

0xb7dd,	// (0x0006b97e) bg_button_pane_cp045

0x82c4,	// (0x00068465) cntbar_detail_btn_pane_t1

0xd1ca,	// (0x0006d36b) main_callh_pane_ParamLimits

0xd1ca,	// (0x0006d36b) main_callh_pane

0xb7dd,	// (0x0006b97e) main_coverflow0_pane

0xb7dd,	// (0x0006b97e) main_wgtman_pane

0x72c7,	// (0x00067468) main_fs_bigclock_unlock_btn_pane_ParamLimits

0x72c7,	// (0x00067468) main_fs_bigclock_unlock_btn_pane

0x7993,	// (0x00067b34) bg_button_pane_cp16

0x79a3,	// (0x00067b44) cell_tport_appsw_pane_g3

0x82d2,	// (0x00068473) cf0_flow_pane_ParamLimits

0x82d2,	// (0x00068473) cf0_flow_pane

0xb52a,	// (0x0006b6cb) listscroll_cf0_pane

0xb535,	// (0x0006b6d6) main_cf0_pane_g1

0x82e7,	// (0x00068488) main_cf0_pane_t1_ParamLimits

0x82e7,	// (0x00068488) main_cf0_pane_t1

0x82fe,	// (0x0006849f) main_cf0_pane_t2_ParamLimits

0x82fe,	// (0x0006849f) main_cf0_pane_t2

0x0001,

0xfb75,	// (0x0006fd16) main_cf0_pane_t_ParamLimits

0xfb75,	// (0x0006fd16) main_cf0_pane_t

0xb547,	// (0x0006b6e8) scroll_pane_cp11

0x8315,	// (0x000684b6) cf0_flow_pane_g1

0x831d,	// (0x000684be) cf0_flow_pane_g2

0x0001,

0xfb7a,	// (0x0006fd1b) cf0_flow_pane_g

0x8325,	// (0x000684c6) cf0_flow_pane_t1

0xb7dd,	// (0x0006b97e) main_call6_pane

0xb7dd,	// (0x0006b97e) main_calllock_pane

0x8333,	// (0x000684d4) call6_btn_grp_pane_ParamLimits

0x8333,	// (0x000684d4) call6_btn_grp_pane

0x834d,	// (0x000684ee) call6_pane_g1_ParamLimits

0x834d,	// (0x000684ee) call6_pane_g1

0x8363,	// (0x00068504) popup_call6_1st_window_ParamLimits

0x8363,	// (0x00068504) popup_call6_1st_window

0x8374,	// (0x00068515) popup_call6_2nd_window_ParamLimits

0x8374,	// (0x00068515) popup_call6_2nd_window

0x8385,	// (0x00068526) cell_call6_btn_pane_ParamLimits

0x8385,	// (0x00068526) cell_call6_btn_pane

0xc58b,	// (0x0006c72c) bg_popup_call2_in_pane_cp03

0xb552,	// (0x0006b6f3) popup_call6_1st_window_g1

0xb55a,	// (0x0006b6fb) popup_call6_1st_window_g2

0xb562,	// (0x0006b703) popup_call6_1st_window_g3

0x0002,

0xfb7f,	// (0x0006fd20) popup_call6_1st_window_g

0xb56a,	// (0x0006b70b) popup_call6_1st_window_t1

0xb579,	// (0x0006b71a) popup_call6_1st_window_t2

0xb587,	// (0x0006b728) popup_call6_1st_window_t3

0x0002,

0xfb86,	// (0x0006fd27) popup_call6_1st_window_t

0xc58b,	// (0x0006c72c) bg_popup_call2_in_pane_cp04

0xb595,	// (0x0006b736) popup_call6_2nd_window_g1

0xb59d,	// (0x0006b73e) popup_call6_2nd_window_g2

0xb5a5,	// (0x0006b746) popup_call6_2nd_window_g3

0x0002,

0xfb8d,	// (0x0006fd2e) popup_call6_2nd_window_g

0xb5ad,	// (0x0006b74e) popup_call6_2nd_window_t1

0x9ba1,	// (0x00069d42) bg_button_pane_cp15

0xbbfa,	// (0x0006bd9b) cell_call6_btn_pane_g1

0xbc03,	// (0x0006bda4) cell_call6_btn_pane_t1

0x8399,	// (0x0006853a) listscroll_wgtman_pane_ParamLimits

0x8399,	// (0x0006853a) listscroll_wgtman_pane

0x83ba,	// (0x0006855b) wgtman_btn_pane_ParamLimits

0x83ba,	// (0x0006855b) wgtman_btn_pane

0xcebd,	// (0x0006d05e) aid_scroll_copy1

0xb5bc,	// (0x0006b75d) list_wgtman_pane

0x83fd,	// (0x0006859e) wgtman_btn_pane_g1_ParamLimits

0x83fd,	// (0x0006859e) wgtman_btn_pane_g1

0x8429,	// (0x000685ca) wgtman_btn_pane_t1_ParamLimits

0x8429,	// (0x000685ca) wgtman_btn_pane_t1

0xb5c6,	// (0x0006b767) wgtman_btn_pane_t2_ParamLimits

0xb5c6,	// (0x0006b767) wgtman_btn_pane_t2

0x0001,

0xfb94,	// (0x0006fd35) wgtman_btn_pane_t_ParamLimits

0xfb94,	// (0x0006fd35) wgtman_btn_pane_t

0x8466,	// (0x00068607) listrow_wgtman_pane_ParamLimits

0x8466,	// (0x00068607) listrow_wgtman_pane

0x8479,	// (0x0006861a) listrow_wgtman_pane_g1

0x8486,	// (0x00068627) listrow_wgtman_pane_g2

0x0001,

0xfb99,	// (0x0006fd3a) listrow_wgtman_pane_g

0x84a4,	// (0x00068645) listrow_wgtman_pane_t1

0x84bc,	// (0x0006865d) listrow_wgtman_pane_t2

0x0001,

0xfb9e,	// (0x0006fd3f) listrow_wgtman_pane_t

0x84e2,	// (0x00068683) wait_bar_pane_cp09

0xb5dd,	// (0x0006b77e) main_calllock_btn_pane

0xb5e7,	// (0x0006b788) main_calllock_pane_g1

0xb7dd,	// (0x0006b97e) bg_button_pane_cp17

0xb5ef,	// (0x0006b790) main_calllock_btn_pane_g1

0xb5f8,	// (0x0006b799) main_calllock_btn_pane_t1

0xb7dd,	// (0x0006b97e) main_dialer3_pane

0xb7dd,	// (0x0006b97e) main_fmrd2_pane

0xbf42,	// (0x0006c0e3) main_fs_bigclock_unlock_btn_pane_g1

0x84fc,	// (0x0006869d) main_fs_bigclock_unlock_btn_pane_t1

0x850a,	// (0x000686ab) area_fmrd2_info_pane_ParamLimits

0x850a,	// (0x000686ab) area_fmrd2_info_pane

0x851b,	// (0x000686bc) area_fmrd2_visual_pane_ParamLimits

0x851b,	// (0x000686bc) area_fmrd2_visual_pane

0x8529,	// (0x000686ca) fmrd2_indi_pane_ParamLimits

0x8529,	// (0x000686ca) fmrd2_indi_pane

0x8536,	// (0x000686d7) area_fmrd2_visual_pane_g1

0x853e,	// (0x000686df) area_fmrd2_visual_pane_t1

0x854e,	// (0x000686ef) area_fmrd2_visual_pane_t2

0x855e,	// (0x000686ff) area_fmrd2_visual_pane_t3

0x0002,

0xfba8,	// (0x0006fd49) area_fmrd2_visual_pane_t

0x856e,	// (0x0006870f) area_fmrd2_info_pane_g1

0x8576,	// (0x00068717) area_fmrd2_info_pane_t1

0x8586,	// (0x00068727) area_fmrd2_info_pane_t2

0x8596,	// (0x00068737) area_fmrd2_info_pane_t3

0x85a6,	// (0x00068747) area_fmrd2_info_pane_t4

0x0003,

0xfbaf,	// (0x0006fd50) area_fmrd2_info_pane_t

0x85b4,	// (0x00068755) fmrd2_indi_pane_t1

0x85c4,	// (0x00068765) fmrd2_indi_pane_t2

0x85d4,	// (0x00068775) fmrd2_indi_pane_t3

0x0002,

0xfbb8,	// (0x0006fd59) fmrd2_indi_pane_t

0xabd9,	// (0x0006ad7a) list_single_fs_bigclock_indicator_pane_g5_ParamLimits

0xabd9,	// (0x0006ad7a) list_single_fs_bigclock_indicator_pane_g5

0xac8a,	// (0x0006ae2b) list_single_fs_bigclock_indicator_pane_t5_ParamLimits

0xac8a,	// (0x0006ae2b) list_single_fs_bigclock_indicator_pane_t5

0x7bee,	// (0x00067d8f) aid_cell_bcale_month_pane_ParamLimits

0x7bee,	// (0x00067d8f) aid_cell_bcale_month_pane

0x7bee,	// (0x00067d8f) bcale_month_pane_ParamLimits

0x7bee,	// (0x00067d8f) bcale_month_pane

0x9e0d,	// (0x00069fae) bcale_preview_pane_ParamLimits

0x9e0d,	// (0x00069fae) bcale_preview_pane

0xb3b2,	// (0x0006b553) list_single_fs_bigclock_pane_t1_ParamLimits

0xb3d1,	// (0x0006b572) list_single_fs_bigclock_pane_t2_ParamLimits

0xb3d1,	// (0x0006b572) list_single_fs_bigclock_pane_t2

0x0001,

0xfb33,	// (0x0006fcd4) list_single_fs_bigclock_pane_t_ParamLimits

0xfb33,	// (0x0006fcd4) list_single_fs_bigclock_pane_t

0x84f4,	// (0x00068695) main_fs_bigclock_unlock_btn_pane_g2

0x0001,

0xfba3,	// (0x0006fd44) main_fs_bigclock_unlock_btn_pane_g

0x85e4,	// (0x00068785) aid_dia3_key_size_ParamLimits

0x85e4,	// (0x00068785) aid_dia3_key_size

0x85f3,	// (0x00068794) aid_dia3_listrow_size_ParamLimits

0x85f3,	// (0x00068794) aid_dia3_listrow_size

0x8608,	// (0x000687a9) dia3_keypad_fun_pane_ParamLimits

0x8608,	// (0x000687a9) dia3_keypad_fun_pane

0x8624,	// (0x000687c5) dia3_keypad_num_pane_ParamLimits

0x8624,	// (0x000687c5) dia3_keypad_num_pane

0x863f,	// (0x000687e0) dia3_listscroll_pane_ParamLimits

0x863f,	// (0x000687e0) dia3_listscroll_pane

0x8652,	// (0x000687f3) dia3_numentry_pane_ParamLimits

0x8652,	// (0x000687f3) dia3_numentry_pane

0xb607,	// (0x0006b7a8) dia3_list_pane

0xb612,	// (0x0006b7b3) scroll_pane_cp12

0xb7dd,	// (0x0006b97e) bg_dia3_numentry_pane

0x866a,	// (0x0006880b) dia3_numentry_pane_t1

0x8679,	// (0x0006881a) cell_dia3_key_num_pane

0x8681,	// (0x00068822) cell_dia3_key0_fun_pane_ParamLimits

0x8681,	// (0x00068822) cell_dia3_key0_fun_pane

0x8695,	// (0x00068836) cell_dia3_key1_fun_pane_ParamLimits

0x8695,	// (0x00068836) cell_dia3_key1_fun_pane

0x86ad,	// (0x0006884e) dia3_listrow_pane

0xa92c,	// (0x0006aacd) bg_dia3_numentry_pane_g1

0xb7dd,	// (0x0006b97e) bg_button_pane_cp21

0xb61d,	// (0x0006b7be) cell_dia3_key_num_pane_t1

0xb62b,	// (0x0006b7cc) cell_dia3_key_num_pane_t2

0xb63a,	// (0x0006b7db) cell_dia3_key_num_pane_t3

0xb649,	// (0x0006b7ea) cell_dia3_key_num_pane_t4

0x0003,

0xfbbf,	// (0x0006fd60) cell_dia3_key_num_pane_t

0xb7dd,	// (0x0006b97e) bg_button_pane_cp19

0x86bf,	// (0x00068860) cell_dia3_key0_fun_pane_g1

0xb7dd,	// (0x0006b97e) bg_button_pane_cp20

0x86c7,	// (0x00068868) cell_dia3_key1_fun_pane_g1

0x9e0d,	// (0x00069fae) area_left_week_number_pane

0x9e0d,	// (0x00069fae) area_top_day_name_pane

0x9e0d,	// (0x00069fae) frame_month_view_pane

0x9e0d,	// (0x00069fae) grid_month_view_pane

0x9e0d,	// (0x00069fae) cell_top_day_name_pane_ParamLimits

0x9e0d,	// (0x00069fae) cell_top_day_name_pane

0x9e0d,	// (0x00069fae) cell_area_left_week_number_pane_ParamLimits

0x9e0d,	// (0x00069fae) cell_area_left_week_number_pane

0x9e0d,	// (0x00069fae) cell_month_view_pane_ParamLimits

0x9e0d,	// (0x00069fae) cell_month_view_pane

0x9e01,	// (0x00069fa2) frm_month_g1

0x9e01,	// (0x00069fa2) frm_month_g2

0x9e01,	// (0x00069fa2) frm_month_g3

0x9e01,	// (0x00069fa2) frm_month_g4

0x9e01,	// (0x00069fa2) frm_month_g5

0x9e01,	// (0x00069fa2) frm_month_g6

0x9e01,	// (0x00069fa2) frm_month_g7

0x9e01,	// (0x00069fa2) frm_month_g8

0x9e01,	// (0x00069fa2) frm_month_g9

0x9e01,	// (0x00069fa2) frm_month_g10

0x9e01,	// (0x00069fa2) frm_month_g11

0x9e01,	// (0x00069fa2) frm_month_g12

0x9e01,	// (0x00069fa2) frm_month_g13

0x9e01,	// (0x00069fa2) frm_month_g14

0x9e01,	// (0x00069fa2) frm_month_g15

0x9e01,	// (0x00069fa2) frm_month_g16

0x000f,

0xfbc8,	// (0x0006fd69) frm_month_g

0xb658,	// (0x0006b7f9) cell_top_day_name_pane_t1

0x9e01,	// (0x00069fa2) cell_area_left_week_number_pane_g1

0xb658,	// (0x0006b7f9) cell_area_left_week_number_pane_t1

0x9e01,	// (0x00069fa2) cell_month_view_pane_g1

0xb658,	// (0x0006b7f9) cell_month_view_pane_t1

0xb7dd,	// (0x0006b97e) main_fps_pane

0xae69,	// (0x0006b00a) cmail_ddmenu_btn02_pane_cp1_ParamLimits

0xae69,	// (0x0006b00a) cmail_ddmenu_btn02_pane_cp1

0xae85,	// (0x0006b026) cmail_ddmenu_btn02_pane_cp2_ParamLimits

0xae85,	// (0x0006b026) cmail_ddmenu_btn02_pane_cp2

0x7ee7,	// (0x00068088) cmail_ddmenu_btn02_pane_g2_ParamLimits

0x7ee7,	// (0x00068088) cmail_ddmenu_btn02_pane_g2

0x0001,

0xfae6,	// (0x0006fc87) cmail_ddmenu_btn02_pane_g_ParamLimits

0xfae6,	// (0x0006fc87) cmail_ddmenu_btn02_pane_g

0x7f05,	// (0x000680a6) cmail_ddmenu_btn02_pane_t2_ParamLimits

0x7f05,	// (0x000680a6) cmail_ddmenu_btn02_pane_t2

0x0001,

0xfaeb,	// (0x0006fc8c) cmail_ddmenu_btn02_pane_t_ParamLimits

0xfaeb,	// (0x0006fc8c) cmail_ddmenu_btn02_pane_t

0x86cf,	// (0x00068870) fps_text_pane_ParamLimits

0x86cf,	// (0x00068870) fps_text_pane

0x86e6,	// (0x00068887) main_fps_pane_g1_ParamLimits

0x86e6,	// (0x00068887) main_fps_pane_g1

0x8700,	// (0x000688a1) wait_bar_pane_cp010_ParamLimits

0x8700,	// (0x000688a1) wait_bar_pane_cp010

0x8711,	// (0x000688b2) fps_text_pane_t1_ParamLimits

0x8711,	// (0x000688b2) fps_text_pane_t1

0xa17e,	// (0x0006a31f) cam4_image_uncrop_pane_g1

0xa187,	// (0x0006a328) cam4_image_uncrop_pane_g2

0x4ea5,	// (0x00065046) cam4_image_uncrop_pane_g3

0x4eae,	// (0x0006504f) cam4_image_uncrop_pane_g4

0x0003,

0xf677,	// (0x0006f818) cam4_image_uncrop_pane_g

0x86ad,	// (0x0006884e) dia3_listrow_pane_ParamLimits

0xb7dd,	// (0x0006b97e) main_phob2_pane

0x7964,	// (0x00067b05) cell_tport_appsw_pane_cp02_ParamLimits

0x7964,	// (0x00067b05) cell_tport_appsw_pane_cp02

0x7978,	// (0x00067b19) cell_tport_appsw_pane_cp03_ParamLimits

0x7978,	// (0x00067b19) cell_tport_appsw_pane_cp03

0xb7dd,	// (0x0006b97e) phob2_contact_card_pane

0xb7dd,	// (0x0006b97e) phob2_listscroll_pane

0xb66a,	// (0x0006b80b) phob2_list_pane

0xb1f8,	// (0x0006b399) scroll_pane_cp034

0x8729,	// (0x000688ca) phob2_cc_data_pane_ParamLimits

0x8729,	// (0x000688ca) phob2_cc_data_pane

0x8748,	// (0x000688e9) phob2_cc_listscroll_pane_ParamLimits

0x8748,	// (0x000688e9) phob2_cc_listscroll_pane

0x8766,	// (0x00068907) list_double_large_graphic_phob2_pane_ParamLimits

0x8766,	// (0x00068907) list_double_large_graphic_phob2_pane

0x8787,	// (0x00068928) list_double_large_graphic_phob2_pane_g1_ParamLimits

0x8787,	// (0x00068928) list_double_large_graphic_phob2_pane_g1

0x8799,	// (0x0006893a) list_double_large_graphic_phob2_pane_g2_ParamLimits

0x8799,	// (0x0006893a) list_double_large_graphic_phob2_pane_g2

0x0003,

0xfbe9,	// (0x0006fd8a) list_double_large_graphic_phob2_pane_g_ParamLimits

0xfbe9,	// (0x0006fd8a) list_double_large_graphic_phob2_pane_g

0x87cd,	// (0x0006896e) list_double_large_graphic_phob2_pane_t1_ParamLimits

0x87cd,	// (0x0006896e) list_double_large_graphic_phob2_pane_t1

0x87f1,	// (0x00068992) list_double_large_graphic_phob2_pane_t2_ParamLimits

0x87f1,	// (0x00068992) list_double_large_graphic_phob2_pane_t2

0x0001,

0xfbf2,	// (0x0006fd93) list_double_large_graphic_phob2_pane_t_ParamLimits

0xfbf2,	// (0x0006fd93) list_double_large_graphic_phob2_pane_t

0xbe9d,	// (0x0006c03e) list_highlight_pane_cp024

0xb672,	// (0x0006b813) phob2_cc_button_pane

0x8812,	// (0x000689b3) phob2_cc_data_pane_g1_ParamLimits

0x8812,	// (0x000689b3) phob2_cc_data_pane_g1

0x8829,	// (0x000689ca) phob2_cc_data_pane_g2_ParamLimits

0x8829,	// (0x000689ca) phob2_cc_data_pane_g2

0x0001,

0xfbf7,	// (0x0006fd98) phob2_cc_data_pane_g_ParamLimits

0xfbf7,	// (0x0006fd98) phob2_cc_data_pane_g

0x883b,	// (0x000689dc) phob2_cc_data_pane_t1_ParamLimits

0x883b,	// (0x000689dc) phob2_cc_data_pane_t1

0x8853,	// (0x000689f4) phob2_cc_data_pane_t2_ParamLimits

0x8853,	// (0x000689f4) phob2_cc_data_pane_t2

0x886b,	// (0x00068a0c) phob2_cc_data_pane_t3_ParamLimits

0x886b,	// (0x00068a0c) phob2_cc_data_pane_t3

0x0002,

0xfbfc,	// (0x0006fd9d) phob2_cc_data_pane_t_ParamLimits

0xfbfc,	// (0x0006fd9d) phob2_cc_data_pane_t

0xb67a,	// (0x0006b81b) phob2_cc_list_pane_ParamLimits

0xb67a,	// (0x0006b81b) phob2_cc_list_pane

0xa2f4,	// (0x0006a495) scroll_pane_cp035_ParamLimits

0xa2f4,	// (0x0006a495) scroll_pane_cp035

0xbe9d,	// (0x0006c03e) bg_button_pane_cp033

0xb686,	// (0x0006b827) phob2_cc_button_pane_g1

0xb692,	// (0x0006b833) phob2_cc_button_pane_t1

0xb6a7,	// (0x0006b848) phob2_cc_button_pane_t2

0x0001,

0xfc03,	// (0x0006fda4) phob2_cc_button_pane_t

0x8883,	// (0x00068a24) list_double_large_graphic_phob2_cc_pane_ParamLimits

0x8883,	// (0x00068a24) list_double_large_graphic_phob2_cc_pane

0x88b5,	// (0x00068a56) list_double_large_graphic_phob2_cc_pane_g1_ParamLimits

0x88b5,	// (0x00068a56) list_double_large_graphic_phob2_cc_pane_g1

0x88c1,	// (0x00068a62) list_double_large_graphic_phob2_cc_pane_g2_ParamLimits

0x88c1,	// (0x00068a62) list_double_large_graphic_phob2_cc_pane_g2

0x88cd,	// (0x00068a6e) list_double_large_graphic_phob2_cc_pane_g3_ParamLimits

0x88cd,	// (0x00068a6e) list_double_large_graphic_phob2_cc_pane_g3

0x88d9,	// (0x00068a7a) list_double_large_graphic_phob2_cc_pane_g4_ParamLimits

0x88d9,	// (0x00068a7a) list_double_large_graphic_phob2_cc_pane_g4

0x88e5,	// (0x00068a86) list_double_large_graphic_phob2_cc_pane_g5_ParamLimits

0x88e5,	// (0x00068a86) list_double_large_graphic_phob2_cc_pane_g5

0x0004,

0xfc08,	// (0x0006fda9) list_double_large_graphic_phob2_cc_pane_g_ParamLimits

0xfc08,	// (0x0006fda9) list_double_large_graphic_phob2_cc_pane_g

0x88f1,	// (0x00068a92) list_double_large_graphic_phob2_cc_pane_t1_ParamLimits

0x88f1,	// (0x00068a92) list_double_large_graphic_phob2_cc_pane_t1

0x891a,	// (0x00068abb) list_double_large_graphic_phob2_cc_pane_t2_ParamLimits

0x891a,	// (0x00068abb) list_double_large_graphic_phob2_cc_pane_t2

0x0001,

0xfc13,	// (0x0006fdb4) list_double_large_graphic_phob2_cc_pane_t_ParamLimits

0xfc13,	// (0x0006fdb4) list_double_large_graphic_phob2_cc_pane_t

0xb6b9,	// (0x0006b85a) list_highlight_pane_cp025_ParamLimits

0xb6b9,	// (0x0006b85a) list_highlight_pane_cp025

0xbe9d,	// (0x0006c03e) bg_button_pane_cp033_ParamLimits

0xb686,	// (0x0006b827) phob2_cc_button_pane_g1_ParamLimits

0xb692,	// (0x0006b833) phob2_cc_button_pane_t1_ParamLimits

0xb6a7,	// (0x0006b848) phob2_cc_button_pane_t2_ParamLimits

0xfc03,	// (0x0006fda4) phob2_cc_button_pane_t_ParamLimits

0x0c83,	// (0x00060e24) popup_wgtman_window

0x580d,	// (0x000659ae) scroll_pane_cp038

0x83df,	// (0x00068580) wgtman_btn_pane_cp_01_ParamLimits

0x83df,	// (0x00068580) wgtman_btn_pane_cp_01

0xb6c7,	// (0x0006b868) wgtman_content_pane

0xb6d0,	// (0x0006b871) wgtman_heading_pane

0xb7dd,	// (0x0006b97e) bg_heading_pane_cp02

0xb6d9,	// (0x0006b87a) wgtman_heading_pane_g1

0xb6e1,	// (0x0006b882) wgtman_heading_pane_t1

0xb6ef,	// (0x0006b890) scroll_pane_cp036

0xb6f7,	// (0x0006b898) wgtman_list_pane

0xad31,	// (0x0006aed2) wgtman_list_pane_t1_ParamLimits

0xad31,	// (0x0006aed2) wgtman_list_pane_t1

0xa16a,	// (0x0006a30b) cam4_grid_pane

0x5ed9,	// (0x0006607a) bg_button_pane_cp015_ParamLimits

0x5eea,	// (0x0006608b) bg_button_pane_cp016_ParamLimits

0x5ef6,	// (0x00066097) bg_button_pane_cp017_ParamLimits

0x5f56,	// (0x000660f7) popup_vitu2_query_window_g3_ParamLimits

0x5f56,	// (0x000660f7) popup_vitu2_query_window_g3

0x5ff7,	// (0x00066198) popup_vitu2_query_window_t6_ParamLimits

0x5ff7,	// (0x00066198) popup_vitu2_query_window_t6

0x6022,	// (0x000661c3) popup_vitu2_query_window_t7_ParamLimits

0x6022,	// (0x000661c3) popup_vitu2_query_window_t7

0xa17e,	// (0x0006a31f) cam4_grid_pane_g1

0xa187,	// (0x0006a328) cam4_grid_pane_g2

0xb6ff,	// (0x0006b8a0) cam4_grid_pane_g3

0xb708,	// (0x0006b8a9) cam4_grid_pane_g4

0x0003,

0xfc18,	// (0x0006fdb9) cam4_grid_pane_g

0x1748,	// (0x000618e9) aid_placing_vt_slider_lsc_ParamLimits

0x1a45,	// (0x00061be6) vidtel_button_pane_ParamLimits

0x1a45,	// (0x00061be6) vidtel_button_pane

0xb7dd,	// (0x0006b97e) bg_button_pane_cp034

0xb713,	// (0x0006b8b4) vidtel_button_pane_g1

0xb71b,	// (0x0006b8bc) vidtel_button_pane_t1

0x5bdc,	// (0x00065d7d) aid_size_vtel_slider_touch

0xa2f4,	// (0x0006a495) scroll_pane_cp039

0x705e,	// (0x000671ff) ncim_query_button_pane_cp01_ParamLimits

0x707d,	// (0x0006721e) ncimui_query_pane_g1_ParamLimits

0xbe9d,	// (0x0006c03e) input_focus_pane_cp012_ParamLimits

0xa972,	// (0x0006ab13) ncim_query_entry_pane_t1_ParamLimits

0xa2f4,	// (0x0006a495) scroll_pane_cp039_ParamLimits

0xcf94,	// (0x0006d135) navi_pane_bcale_mc_g1

0xcf9c,	// (0x0006d13d) navi_pane_bcale_mc_t1

0xaeb9,	// (0x0006b05a) main_sp_fs_email_pane_g1

0xaec5,	// (0x0006b066) main_sp_fs_email_pane_g2

0x0001,

0xfa3c,	// (0x0006fbdd) main_sp_fs_email_pane_g

0xb0f7,	// (0x0006b298) list_single_cale_mrui_row_pane_g3_ParamLimits

0xb0f7,	// (0x0006b298) list_single_cale_mrui_row_pane_g3

0x7f76,	// (0x00068117) list_single_recal_day_pane_g5_event_pane

0x7f8c,	// (0x0006812d) list_single_recal_day_pane_g7

0xb731,	// (0x0006b8d2) list_recal_day_event_pane_cp01

0xb73a,	// (0x0006b8db) list_recal_vselct_arw_lo_pane_cp01

0xb742,	// (0x0006b8e3) list_recal_vselct_arw_up_pane_cp01

0xb74a,	// (0x0006b8eb) list_recal_vselct_pane_cp01

0x5dbf,	// (0x00065f60) list_recal_day_event_pane_cp01_g1

0x8943,	// (0x00068ae4) list_recal_day_event_pane_cp01_t1

0x7f94,	// (0x00068135) list_single_recal_day_pane_t1_ParamLimits

0x7fa6,	// (0x00068147) list_single_recal_day_pane_t2_ParamLimits

0xfafb,	// (0x0006fc9c) list_single_recal_day_pane_t_ParamLimits

0xbe7b,	// (0x0006c01c) bg_notes_pane_ParamLimits

0xbf7e,	// (0x0006c11f) list_notes_pane_ParamLimits

0x0dce,	// (0x00060f6f) scroll_pane_cp06_ParamLimits

0xbfa0,	// (0x0006c141) main_notes_pane_ParamLimits

0xbe9d,	// (0x0006c03e) main_welc_pane

0x898a,	// (0x00068b2b) main_welc_body_pane_ParamLimits

0x898a,	// (0x00068b2b) main_welc_body_pane

0x89a7,	// (0x00068b48) main_welc_opti_pane_ParamLimits

0x89a7,	// (0x00068b48) main_welc_opti_pane

0x8a17,	// (0x00068bb8) main_welc_pane_t1_ParamLimits

0x8a17,	// (0x00068bb8) main_welc_pane_t1

0x8c29,	// (0x00068dca) main_welc_body_row_pane_ParamLimits

0x8c29,	// (0x00068dca) main_welc_body_row_pane

0xbef6,	// (0x0006c097) main_welc_opti_row_pane_ParamLimits

0xbef6,	// (0x0006c097) main_welc_opti_row_pane

0xb75c,	// (0x0006b8fd) main_welc_opti_row_pane_g1

0x8c3e,	// (0x00068ddf) main_welc_opti_row_pane_t1

0xb764,	// (0x0006b905) main_welc_body_row_pane_t1

0xb492,	// (0x0006b633) popup_notif_wgt_heading_pane

0xb4ac,	// (0x0006b64d) aid_size_list_notif_wgt_del_ParamLimits

0xb4b9,	// (0x0006b65a) list_notif_wgt_row_pane_g1_ParamLimits

0xb4c5,	// (0x0006b666) list_notif_wgt_row_pane_g2_ParamLimits

0xb4d4,	// (0x0006b675) list_notif_wgt_row_pane_g3_ParamLimits

0xfb62,	// (0x0006fd03) list_notif_wgt_row_pane_g_ParamLimits

0xb4e1,	// (0x0006b682) list_notif_wgt_row_pane_t1_ParamLimits

0xb4f7,	// (0x0006b698) list_notif_wgt_row_pane_t2_ParamLimits

0xb509,	// (0x0006b6aa) list_notif_wgt_row_pane_t3_ParamLimits

0xfb69,	// (0x0006fd0a) list_notif_wgt_row_pane_t_ParamLimits

0x8479,	// (0x0006861a) listrow_wgtman_pane_g1_ParamLimits

0x8486,	// (0x00068627) listrow_wgtman_pane_g2_ParamLimits

0xfb99,	// (0x0006fd3a) listrow_wgtman_pane_g_ParamLimits

0x84a4,	// (0x00068645) listrow_wgtman_pane_t1_ParamLimits

0x84bc,	// (0x0006865d) listrow_wgtman_pane_t2_ParamLimits

0xfb9e,	// (0x0006fd3f) listrow_wgtman_pane_t_ParamLimits

0x84e2,	// (0x00068683) wait_bar_pane_cp09_ParamLimits

0xb7dd,	// (0x0006b97e) bg_popup_heading_pane_cp02

0xb773,	// (0x0006b914) popup_notif_wgt_heading_pane_g1

0xb77b,	// (0x0006b91c) popup_notif_wgt_heading_pane_t1

0xb7dd,	// (0x0006b97e) main_vids_pane

0xb7dd,	// (0x0006b97e) vids_listscroll_pane

0x8c4d,	// (0x00068dee) scroll_pane_cp040

0xb7dd,	// (0x0006b97e) vids_list_pane

0x8c58,	// (0x00068df9) vids_list_double_pane_ParamLimits

0x8c58,	// (0x00068df9) vids_list_double_pane

0x8c69,	// (0x00068e0a) vids_list_double_pane_g1

0x8c72,	// (0x00068e13) vids_list_double_pane_t1

0x8c81,	// (0x00068e22) vids_list_double_pane_t2

0x0001,

0xfc37,	// (0x0006fdd8) vids_list_double_pane_t

0x9b93,	// (0x00069d34) main_ncimui_pane_ParamLimits

0x6e94,	// (0x00067035) main_ncimui_pane_g1_ParamLimits

0x6ea0,	// (0x00067041) main_ncimui_pane_g2_ParamLimits

0x6ea0,	// (0x00067041) main_ncimui_pane_g2

0x0001,

0xf94f,	// (0x0006faf0) main_ncimui_pane_g_ParamLimits

0xf94f,	// (0x0006faf0) main_ncimui_pane_g

0x89c2,	// (0x00068b63) main_welc_pane_g1_ParamLimits

0x89c2,	// (0x00068b63) main_welc_pane_g1

0x89d7,	// (0x00068b78) main_welc_pane_g2_ParamLimits

0x89d7,	// (0x00068b78) main_welc_pane_g2

0x0003,

0xfc21,	// (0x0006fdc2) main_welc_pane_g_ParamLimits

0xfc21,	// (0x0006fdc2) main_welc_pane_g

0xbe7b,	// (0x0006c01c) listscroll_mce_pane_ParamLimits

0xd0e9,	// (0x0006d28a) wait_bar_pane_cp10

0xe441,	// (0x0006e5e2) main_cale_day_pane_ParamLimits

0xe441,	// (0x0006e5e2) main_cale_week_pane_ParamLimits

0xbe7b,	// (0x0006c01c) main_messa_pane_ParamLimits

0x42ea,	// (0x0006448b) main_clock2_btn_pane_ParamLimits

0x42ea,	// (0x0006448b) main_clock2_btn_pane

0xecc4,	// (0x0006ee65) main_clock2_btn_pane_cp01_ParamLimits

0xecc4,	// (0x0006ee65) main_clock2_btn_pane_cp01

0xb0d6,	// (0x0006b277) list_cale_mrui_pane_ParamLimits

0xb53f,	// (0x0006b6e0) main_cf0_pane_g2

0x0001,

0xfb70,	// (0x0006fd11) main_cf0_pane_g

0x9e0d,	// (0x00069fae) area_left_week_number_pane_ParamLimits

0x9e0d,	// (0x00069fae) area_top_day_name_pane_ParamLimits

0x9e0d,	// (0x00069fae) frame_month_view_pane_ParamLimits

0x9e0d,	// (0x00069fae) grid_month_view_pane_ParamLimits

0x9e01,	// (0x00069fa2) frm_month_g1_ParamLimits

0x9e01,	// (0x00069fa2) frm_month_g2_ParamLimits

0x9e01,	// (0x00069fa2) frm_month_g3_ParamLimits

0x9e01,	// (0x00069fa2) frm_month_g4_ParamLimits

0x9e01,	// (0x00069fa2) frm_month_g5_ParamLimits

0x9e01,	// (0x00069fa2) frm_month_g6_ParamLimits

0x9e01,	// (0x00069fa2) frm_month_g7_ParamLimits

0x9e01,	// (0x00069fa2) frm_month_g8_ParamLimits

0x9e01,	// (0x00069fa2) frm_month_g9_ParamLimits

0x9e01,	// (0x00069fa2) frm_month_g10_ParamLimits

0x9e01,	// (0x00069fa2) frm_month_g11_ParamLimits

0x9e01,	// (0x00069fa2) frm_month_g12_ParamLimits

0x9e01,	// (0x00069fa2) frm_month_g13_ParamLimits

0x9e01,	// (0x00069fa2) frm_month_g14_ParamLimits

0x9e01,	// (0x00069fa2) frm_month_g15_ParamLimits

0x9e01,	// (0x00069fa2) frm_month_g16_ParamLimits

0xfbc8,	// (0x0006fd69) frm_month_g_ParamLimits

0xb658,	// (0x0006b7f9) cell_top_day_name_pane_t1_ParamLimits

0x9e01,	// (0x00069fa2) cell_area_left_week_number_pane_g1_ParamLimits

0xb658,	// (0x0006b7f9) cell_area_left_week_number_pane_t1_ParamLimits

0x9e01,	// (0x00069fa2) cell_month_view_pane_g1_ParamLimits

0xb658,	// (0x0006b7f9) cell_month_view_pane_t1_ParamLimits

0xbe73,	// (0x0006c014) main_clock2_btn_pane_g1

0xb789,	// (0x0006b92a) main_clock2_btn_pane_t1

0xbe9d,	// (0x0006c03e) listscroll_cmail_pane_ParamLimits

0xaeb9,	// (0x0006b05a) main_sp_fs_email_pane_g1_ParamLimits

0xaec5,	// (0x0006b066) main_sp_fs_email_pane_g2_ParamLimits

0xfa3c,	// (0x0006fbdd) main_sp_fs_email_pane_g_ParamLimits

0xb215,	// (0x0006b3b6) list_recal_day_pane_ParamLimits

0xb226,	// (0x0006b3c7) mian_recal_day_pane_t1

0x7753,	// (0x000678f4) list_single_dyc_row_text_pane_t4_ParamLimits

0x7753,	// (0x000678f4) list_single_dyc_row_text_pane_t4

0x779c,	// (0x0006793d) list_single_dyc_row_text_pane_t5_ParamLimits

0x779c,	// (0x0006793d) list_single_dyc_row_text_pane_t5

0x7812,	// (0x000679b3) list_single_dyc_row_text_pane_t6_ParamLimits

0x7812,	// (0x000679b3) list_single_dyc_row_text_pane_t6

0x24db,	// (0x0006267c) aid_mgn_list_cale_time_pane

0x9b93,	// (0x00069d34) main_gallery2_pane_ParamLimits

0xecda,	// (0x0006ee7b) main_clock2_pane_cp01_t1

0xece8,	// (0x0006ee89) main_clock2_pane_cp01_t3

0x0001,

0x029a,	// (0x0006043b) main_clock2_pane_cp01_t

0x1181,	// (0x00061322) cale_week_scroll_pane_g16_ParamLimits

0x1181,	// (0x00061322) cale_week_scroll_pane_g16

0xc58b,	// (0x0006c72c) vorec_slider_pane

0xb71b,	// (0x0006b8bc) vidtel_button_pane_t1_ParamLimits

0x8014,	// (0x000681b5) main_fs_bigclock_clock_pane_g1_ParamLimits

0x8014,	// (0x000681b5) main_fs_bigclock_clock_pane_g2_ParamLimits

0x8014,	// (0x000681b5) main_fs_bigclock_clock_pane_g3_ParamLimits

0x8014,	// (0x000681b5) main_fs_bigclock_clock_pane_g4_ParamLimits

0xfb1e,	// (0x0006fcbf) main_fs_bigclock_clock_pane_g_ParamLimits

0x8027,	// (0x000681c8) main_fs_bigclock_clock_pane_t1_ParamLimits

0x8041,	// (0x000681e2) main_fs_bigclock_clock_pane_t2_ParamLimits

0xfb27,	// (0x0006fcc8) main_fs_bigclock_clock_pane_t_ParamLimits

0x3b7d,	// (0x00063d1e) main_mup3_lyrics_pane_ParamLimits

0x3b7d,	// (0x00063d1e) main_mup3_lyrics_pane

0x8ca9,	// (0x00068e4a) main_mup3_lyrics_pane_t1_ParamLimits

0x8ca9,	// (0x00068e4a) main_mup3_lyrics_pane_t1

0x9e68,	// (0x0006a009) aid_main_mp4_pane_t1_area

0x9e72,	// (0x0006a013) aid_main_mp4_pane_t2_area

0x9f1c,	// (0x0006a0bd) main_mp4_pane_g7_ParamLimits

0x9f1c,	// (0x0006a0bd) main_mp4_pane_g7

0x9f28,	// (0x0006a0c9) main_mp4_pane_g8_ParamLimits

0x9f28,	// (0x0006a0c9) main_mp4_pane_g8

0x4c5a,	// (0x00064dfb) aid_call6_pane_g1_size

0x889e,	// (0x00068a3f) list_double_large_graphic_phob2_other_pane_ParamLimits

0x889e,	// (0x00068a3f) list_double_large_graphic_phob2_other_pane

0xcec5,	// (0x0006d066) list_double_large_graphic_phob2_other_pane_g1

0xb7dd,	// (0x0006b97e) list_highlight_pane_cp026

0xbe9d,	// (0x0006c03e) main_welc_pane_ParamLimits

0x7510,	// (0x000676b1) main_sp_fs_ctrlbar_pane_g3_ParamLimits

0x7510,	// (0x000676b1) main_sp_fs_ctrlbar_pane_g3

0x752a,	// (0x000676cb) main_sp_fs_ctrlbar_pane_g4_ParamLimits

0x752a,	// (0x000676cb) main_sp_fs_ctrlbar_pane_g4

0x755e,	// (0x000676ff) toolbar2_fixed_button_pane_cp01

0x7569,	// (0x0006770a) toolbar2_fixed_button_pane_cp02

0x7576,	// (0x00067717) toolbar2_fixed_button_pane_cp03

0x8964,	// (0x00068b05) list_welc_entry_pane_ParamLimits

0x8964,	// (0x00068b05) list_welc_entry_pane

0x89ec,	// (0x00068b8d) main_welc_pane_g3_ParamLimits

0x89ec,	// (0x00068b8d) main_welc_pane_g3

0x8a35,	// (0x00068bd6) main_welc_pane_t2_ParamLimits

0x8a35,	// (0x00068bd6) main_welc_pane_t2

0x8a50,	// (0x00068bf1) main_welc_pane_t3_ParamLimits

0x8a50,	// (0x00068bf1) main_welc_pane_t3

0x0005,

0xfc2a,	// (0x0006fdcb) main_welc_pane_t_ParamLimits

0xfc2a,	// (0x0006fdcb) main_welc_pane_t

0x8b88,	// (0x00068d29) welc_button_pane_ParamLimits

0x8b88,	// (0x00068d29) welc_button_pane

0x8c14,	// (0x00068db5) welc_service_logo_pane_ParamLimits

0x8c14,	// (0x00068db5) welc_service_logo_pane

0x8cc5,	// (0x00068e66) list_single_welc_entry_pane_ParamLimits

0x8cc5,	// (0x00068e66) list_single_welc_entry_pane

0x8cd6,	// (0x00068e77) list_single_welc_entry_pane_g1

0x8cde,	// (0x00068e7f) list_single_welc_entry_pane_t1

0x8cec,	// (0x00068e8d) list_single_welc_entry_pane_t2

0x0001,

0xfc3c,	// (0x0006fddd) list_single_welc_entry_pane_t

0xb7dd,	// (0x0006b97e) bg_button_pane_cp035

0x8cfa,	// (0x00068e9b) welc_button_pane_t1

0xb797,	// (0x0006b938) welc_service_logo_pane_g1

0xb7a0,	// (0x0006b941) welc_service_logo_pane_g2

0x0001,

0xfc41,	// (0x0006fde2) welc_service_logo_pane_g

0x9ba1,	// (0x00069d42) main_int_radio_pane

0xa810,	// (0x0006a9b1) list_single_fs_dyc_pane_g1

0x87a8,	// (0x00068949) list_double_large_graphic_phob2_pane_g3_ParamLimits

0x87a8,	// (0x00068949) list_double_large_graphic_phob2_pane_g3

0x87ba,	// (0x0006895b) list_double_large_graphic_phob2_pane_g4_ParamLimits

0x87ba,	// (0x0006895b) list_double_large_graphic_phob2_pane_g4

0x8d08,	// (0x00068ea9) main_int_radio1_pane_ParamLimits

0x8d08,	// (0x00068ea9) main_int_radio1_pane

0xb7a9,	// (0x0006b94a) find_pane_cp02

0x8d25,	// (0x00068ec6) input_focus_pane_cp12_ParamLimits

0x8d25,	// (0x00068ec6) input_focus_pane_cp12

0x8d35,	// (0x00068ed6) input_focus_pane_cp13_ParamLimits

0x8d35,	// (0x00068ed6) input_focus_pane_cp13

0x8d49,	// (0x00068eea) input_focus_pane_cp14_ParamLimits

0x8d49,	// (0x00068eea) input_focus_pane_cp14

0xb7b2,	// (0x0006b953) int_radio1_listscroll_pane

0x8d5d,	// (0x00068efe) main_int_radio1_pane_g1_ParamLimits

0x8d5d,	// (0x00068efe) main_int_radio1_pane_g1

0x8d75,	// (0x00068f16) main_int_radio1_pane_t1_ParamLimits

0x8d75,	// (0x00068f16) main_int_radio1_pane_t1

0x8d90,	// (0x00068f31) main_int_radio1_pane_t2_ParamLimits

0x8d90,	// (0x00068f31) main_int_radio1_pane_t2

0x8dab,	// (0x00068f4c) main_int_radio1_pane_t3_ParamLimits

0x8dab,	// (0x00068f4c) main_int_radio1_pane_t3

0x8dc6,	// (0x00068f67) main_int_radio1_pane_t4_ParamLimits

0x8dc6,	// (0x00068f67) main_int_radio1_pane_t4

0xb7bc,	// (0x0006b95d) main_int_radio1_pane_t5_ParamLimits

0xb7bc,	// (0x0006b95d) main_int_radio1_pane_t5

0x8dd8,	// (0x00068f79) main_int_radio1_pane_t6_ParamLimits

0x8dd8,	// (0x00068f79) main_int_radio1_pane_t6

0x8ded,	// (0x00068f8e) main_int_radio1_pane_t7_ParamLimits

0x8ded,	// (0x00068f8e) main_int_radio1_pane_t7

0x8e02,	// (0x00068fa3) main_int_radio1_pane_t8_ParamLimits

0x8e02,	// (0x00068fa3) main_int_radio1_pane_t8

0x8e21,	// (0x00068fc2) main_int_radio1_pane_t9_ParamLimits

0x8e21,	// (0x00068fc2) main_int_radio1_pane_t9

0x8e33,	// (0x00068fd4) main_int_radio1_pane_t10_ParamLimits

0x8e33,	// (0x00068fd4) main_int_radio1_pane_t10

0x8e59,	// (0x00068ffa) main_int_radio1_pane_t11_ParamLimits

0x8e59,	// (0x00068ffa) main_int_radio1_pane_t11

0x8e7f,	// (0x00069020) main_int_radio1_pane_t12_ParamLimits

0x8e7f,	// (0x00069020) main_int_radio1_pane_t12

0x000b,

0xfc46,	// (0x0006fde7) main_int_radio1_pane_t_ParamLimits

0xfc46,	// (0x0006fde7) main_int_radio1_pane_t

0xc080,	// (0x0006c221) int_radio_list_pane

0xb1f8,	// (0x0006b399) scroll_pane_cp037

0xc088,	// (0x0006c229) list_double_large_graphic_int_radio_pane_ParamLimits

0xc088,	// (0x0006c229) list_double_large_graphic_int_radio_pane

0xc0a1,	// (0x0006c242) list_double_large_graphic_int_radio_pane_g1

0x8e91,	// (0x00069032) list_double_large_graphic_int_radio_pane_t1

0x8e9f,	// (0x00069040) list_double_large_graphic_int_radio_pane_t2

0x0001,

0xfc5f,	// (0x0006fe00) list_double_large_graphic_int_radio_pane_t

0xb7dd,	// (0x0006b97e) list_highlight_pane_cp027

0xb754,	// (0x0006b8f5) main_button_pane_4

0x89ff,	// (0x00068ba0) main_welc_pane_g4_ParamLimits

0x89ff,	// (0x00068ba0) main_welc_pane_g4

0x8a69,	// (0x00068c0a) main_welc_pane_t4_ParamLimits

0x8a69,	// (0x00068c0a) main_welc_pane_t4

0x8a84,	// (0x00068c25) main_welc_pane_t5_ParamLimits

0x8a84,	// (0x00068c25) main_welc_pane_t5

0x8ac5,	// (0x00068c66) main_welc_pane_t6_ParamLimits

0x8ac5,	// (0x00068c66) main_welc_pane_t6

0x8b9f,	// (0x00068d40) welc_button_pane_2_ParamLimits

0x8b9f,	// (0x00068d40) welc_button_pane_2

0x8bc4,	// (0x00068d65) welc_button_pane_3_ParamLimits

0x8bc4,	// (0x00068d65) welc_button_pane_3

0xb754,	// (0x0006b8f5) welc_button_pane_4

0x8bec,	// (0x00068d8d) welc_button_pane_5_ParamLimits

0x8bec,	// (0x00068d8d) welc_button_pane_5

0x0aed,	// (0x00060c8e) main_popup_welc_pane

0xc0c2,	// (0x0006c263) main_welc_sk_g3

0xc0cc,	// (0x0006c26d) main_welc_sk_g4

0xc0d6,	// (0x0006c277) main_welc_sk_t3

0xc0e6,	// (0x0006c287) main_welc_sk_t4

0xc0f6,	// (0x0006c297) popup_welc_pane_t4

0xc104,	// (0x0006c2a5) popup_welc_pane_t5

0xc112,	// (0x0006c2b3) popup_welc_pane_t6

0x9ba1,	// (0x00069d42) main_acti_pane

0xb7dd,	// (0x0006b97e) main_sso_pane

0x8ead,	// (0x0006904e) sso_body_pane_ParamLimits

0x8ead,	// (0x0006904e) sso_body_pane

0x8ecd,	// (0x0006906e) sso_logo_pane_ParamLimits

0x8ecd,	// (0x0006906e) sso_logo_pane

0x8f06,	// (0x000690a7) sso_sk_pane_ParamLimits

0x8f06,	// (0x000690a7) sso_sk_pane

0xc150,	// (0x0006c2f1) main_sso_logo_pane_g1

0x8f18,	// (0x000690b9) sso_sk_pane_t1_ParamLimits

0x8f18,	// (0x000690b9) sso_sk_pane_t1

0x8f32,	// (0x000690d3) sso_sk_pane_t2_ParamLimits

0x8f32,	// (0x000690d3) sso_sk_pane_t2

0x0001,

0xfc64,	// (0x0006fe05) sso_sk_pane_t_ParamLimits

0xfc64,	// (0x0006fe05) sso_sk_pane_t

0xc159,	// (0x0006c2fa) aid_sso_gap

0xc162,	// (0x0006c303) aid_sso_txt1

0xc16c,	// (0x0006c30d) aid_sso_txt2

0xc176,	// (0x0006c317) aid_sso_txt3

0x0002,

0x09f5,	// (0x00060b96) aid_sso_txt

0xc180,	// (0x0006c321) aid_sso_widget

0x8f9c,	// (0x0006913d) sso_btn_pane_ParamLimits

0x8f9c,	// (0x0006913d) sso_btn_pane

0x9030,	// (0x000691d1) sso_option_pane_ParamLimits

0x9030,	// (0x000691d1) sso_option_pane

0x90e4,	// (0x00069285) sso_query_pane_ParamLimits

0x90e4,	// (0x00069285) sso_query_pane

0x913a,	// (0x000692db) sso_query_pane_cp01_ParamLimits

0x913a,	// (0x000692db) sso_query_pane_cp01

0x9192,	// (0x00069333) sso_t_hdr_pane_ParamLimits

0x9192,	// (0x00069333) sso_t_hdr_pane

0x91bc,	// (0x0006935d) sso_t_nml_pane_ParamLimits

0x91bc,	// (0x0006935d) sso_t_nml_pane

0x9212,	// (0x000693b3) sso_t_sub_pane

0x8eda,	// (0x0006907b) sso_popup_window_ParamLimits

0x8eda,	// (0x0006907b) sso_popup_window

0x8f48,	// (0x000690e9) sso_apps_pane_ParamLimits

0x8f48,	// (0x000690e9) sso_apps_pane

0x8f72,	// (0x00069113) sso_body_pane_g1

0x8f7c,	// (0x0006911d) sso_body_pane_t1

0x8f8c,	// (0x0006912d) sso_body_pane_t2

0x0001,

0xfc69,	// (0x0006fe0a) sso_body_pane_t

0x8fe8,	// (0x00069189) sso_btn_pane_cp01_ParamLimits

0x8fe8,	// (0x00069189) sso_btn_pane_cp01

0x90b8,	// (0x00069259) sso_prog_pane_ParamLimits

0x90b8,	// (0x00069259) sso_prog_pane

0x9241,	// (0x000693e2) sso_t_hdr_pane_t1_ParamLimits

0x9241,	// (0x000693e2) sso_t_hdr_pane_t1

0xc18a,	// (0x0006c32b) input_focus_pane_cp10_ParamLimits

0xc18a,	// (0x0006c32b) input_focus_pane_cp10

0xc19e,	// (0x0006c33f) sso_query_pane_t1_ParamLimits

0xc19e,	// (0x0006c33f) sso_query_pane_t1

0xc1b1,	// (0x0006c352) sso_query_pane_t2_ParamLimits

0xc1b1,	// (0x0006c352) sso_query_pane_t2

0xc1ca,	// (0x0006c36b) sso_query_pane_t3_ParamLimits

0xc1ca,	// (0x0006c36b) sso_query_pane_t3

0xc1f4,	// (0x0006c395) sso_query_pane_t4_ParamLimits

0xc1f4,	// (0x0006c395) sso_query_pane_t4

0x0003,

0x0a01,	// (0x00060ba2) sso_query_pane_t_ParamLimits

0x0a01,	// (0x00060ba2) sso_query_pane_t

0xc218,	// (0x0006c3b9) bg_button_pane_cp22

0xc0aa,	// (0x0006c24b) sso_btn_pane_t1

0x9254,	// (0x000693f5) sso_t_nml_pane_t1_ParamLimits

0x9254,	// (0x000693f5) sso_t_nml_pane_t1

0xc221,	// (0x0006c3c2) sso_option_row_pane_ParamLimits

0xc221,	// (0x0006c3c2) sso_option_row_pane

0xc22e,	// (0x0006c3cf) sso_t_sub_pane_t1_ParamLimits

0xc22e,	// (0x0006c3cf) sso_t_sub_pane_t1

0xbe9d,	// (0x0006c03e) bg_popup_window_pane_cp11_ParamLimits

0xbe9d,	// (0x0006c03e) bg_popup_window_pane_cp11

0xc24b,	// (0x0006c3ec) popup_sk_window_cp01_ParamLimits

0xc24b,	// (0x0006c3ec) popup_sk_window_cp01

0xc258,	// (0x0006c3f9) sso_popup_body_pane_ParamLimits

0xc258,	// (0x0006c3f9) sso_popup_body_pane

0xc265,	// (0x0006c406) scroll_pane_cp21_ParamLimits

0xc265,	// (0x0006c406) scroll_pane_cp21

0xc272,	// (0x0006c413) sso_popup_body_t_pane_ParamLimits

0xc272,	// (0x0006c413) sso_popup_body_t_pane

0xc27f,	// (0x0006c420) sso_popup_body_t_hdr_pane_ParamLimits

0xc27f,	// (0x0006c420) sso_popup_body_t_hdr_pane

0x926f,	// (0x00069410) sso_popup_body_t_nml_pane_ParamLimits

0x926f,	// (0x00069410) sso_popup_body_t_nml_pane

0x9296,	// (0x00069437) sso_popup_body_t_sub_pane_ParamLimits

0x9296,	// (0x00069437) sso_popup_body_t_sub_pane

0xc291,	// (0x0006c432) sso_popup_body_t_hdr_pane_t1

0x92b9,	// (0x0006945a) sso_popup_body_t_nml_pane_t1_ParamLimits

0x92b9,	// (0x0006945a) sso_popup_body_t_nml_pane_t1

0xc2a1,	// (0x0006c442) sso_popup_body_t_sub_pane_t1_ParamLimits

0xc2a1,	// (0x0006c442) sso_popup_body_t_sub_pane_t1

0xbf42,	// (0x0006c0e3) sso_prog_pane_g1

0x92f2,	// (0x00069493) sso_apps_pane_comp1_ParamLimits

0x92f2,	// (0x00069493) sso_apps_pane_comp1

0xc2c6,	// (0x0006c467) sso_apps_pane_comp1_g1

0xc2ce,	// (0x0006c46f) sso_apps_pane_comp1_t1

0xc2ea,	// (0x0006c48b) sso_option_row_pane_g1

0xc302,	// (0x0006c4a3) sso_option_row_pane_t1

0xaf66,	// (0x0006b107) list_cmail_pane_ParamLimits

0xb7dd,	// (0x0006b97e) main_call7_pane

0x8951,	// (0x00068af2) bg_welc_area_ParamLimits

0x8951,	// (0x00068af2) bg_welc_area

0x8b03,	// (0x00068ca4) sso_t_hdr_pane_a_t1_ParamLimits

0x8b03,	// (0x00068ca4) sso_t_hdr_pane_a_t1

0x8b1e,	// (0x00068cbf) sso_t_nml_pane_a_t1_ParamLimits

0x8b1e,	// (0x00068cbf) sso_t_nml_pane_a_t1

0x8b4d,	// (0x00068cee) sso_t_sub_pane_a_t1_ParamLimits

0x8b4d,	// (0x00068cee) sso_t_sub_pane_a_t1

0x8c02,	// (0x00068da3) welc_button_pane_cp01_ParamLimits

0x8c02,	// (0x00068da3) welc_button_pane_cp01

0xc0aa,	// (0x0006c24b) sso_btn_pane_t1_copy1

0xc0b9,	// (0x0006c25a) welc_button_pane_2_comp1

0xc120,	// (0x0006c2c1) sso_t_hdr_pane_p_t1

0xc130,	// (0x0006c2d1) sso_t_nml_pane_p_t1

0xc140,	// (0x0006c2e1) sso_t_sub_pane_p_t1

0xb7dd,	// (0x0006b97e) main_att_pane

0xb7dd,	// (0x0006b97e) main_vod_pane

0x9212,	// (0x000693b3) sso_t_sub_pane_ParamLimits

0xc2dc,	// (0x0006c47d) input_focus_pane_cp10_t1

0xc302,	// (0x0006c4a3) sso_option_row_pane_t1_ParamLimits

0x930c,	// (0x000694ad) main_att_body_pane_ParamLimits

0x930c,	// (0x000694ad) main_att_body_pane

0x9322,	// (0x000694c3) att_btn_emg_pane_ParamLimits

0x9322,	// (0x000694c3) att_btn_emg_pane

0x9341,	// (0x000694e2) att_btn_pane_ParamLimits

0x9341,	// (0x000694e2) att_btn_pane

0x93b0,	// (0x00069551) att_btn_pane_cp01_ParamLimits

0x93b0,	// (0x00069551) att_btn_pane_cp01

0x93f0,	// (0x00069591) att_li_srv_pane_ParamLimits

0x93f0,	// (0x00069591) att_li_srv_pane

0x940d,	// (0x000695ae) att_opt_pane_ParamLimits

0x940d,	// (0x000695ae) att_opt_pane

0x9457,	// (0x000695f8) att_query_pane_ParamLimits

0x9457,	// (0x000695f8) att_query_pane

0x94d0,	// (0x00069671) att_query_pane_cp01_ParamLimits

0x94d0,	// (0x00069671) att_query_pane_cp01

0x951c,	// (0x000696bd) att_t_hdr_pane_ParamLimits

0x951c,	// (0x000696bd) att_t_hdr_pane

0x9588,	// (0x00069729) att_t_nml_pane_ParamLimits

0x9588,	// (0x00069729) att_t_nml_pane

0x95f8,	// (0x00069799) att_t_nml_pane_cp01_ParamLimits

0x95f8,	// (0x00069799) att_t_nml_pane_cp01

0x9624,	// (0x000697c5) att_t_nmlb_pane_ParamLimits

0x9624,	// (0x000697c5) att_t_nmlb_pane

0x9691,	// (0x00069832) att_term_pane_ParamLimits

0x9691,	// (0x00069832) att_term_pane

0x96db,	// (0x0006987c) main_att_body_pane_g1_ParamLimits

0x96db,	// (0x0006987c) main_att_body_pane_g1

0xc31e,	// (0x0006c4bf) att_t_hdr_pane_t1_ParamLimits

0xc31e,	// (0x0006c4bf) att_t_hdr_pane_t1

0xc337,	// (0x0006c4d8) att_t_nml_pane_t1_ParamLimits

0xc337,	// (0x0006c4d8) att_t_nml_pane_t1

0xc35c,	// (0x0006c4fd) att_btn_pane_t1

0xc218,	// (0x0006c3b9) bg_button_pane_cp23

0x9707,	// (0x000698a8) att_li_srv_row_pane_ParamLimits

0x9707,	// (0x000698a8) att_li_srv_row_pane

0xc36b,	// (0x0006c50c) att_t_nmlb_pane_t1_ParamLimits

0xc36b,	// (0x0006c50c) att_t_nmlb_pane_t1

0xc387,	// (0x0006c528) att_query_pane_t1

0xc396,	// (0x0006c537) att_query_pane_t2

0xc3a5,	// (0x0006c546) att_query_pane_t3

0x0002,

0x0a0f,	// (0x00060bb0) att_query_pane_t

0xc3b4,	// (0x0006c555) input_focus_pane_cp11

0xc3bd,	// (0x0006c55e) att_term_pane_t1_ParamLimits

0xc3bd,	// (0x0006c55e) att_term_pane_t1

0xb7dd,	// (0x0006b97e) att_opt_row_pane

0xc3da,	// (0x0006c57b) att_opt_row_pane_g1

0xc3e2,	// (0x0006c583) att_opt_row_pane_t1_ParamLimits

0xc3e2,	// (0x0006c583) att_opt_row_pane_t1

0x9717,	// (0x000698b8) att_li_srv_row_pane_g1

0x971f,	// (0x000698c0) att_li_srv_row_pane_t1_ParamLimits

0x971f,	// (0x000698c0) att_li_srv_row_pane_t1

0x971f,	// (0x000698c0) att_li_srv_row_pane_t2_ParamLimits

0x971f,	// (0x000698c0) att_li_srv_row_pane_t2

0x0001,

0xfc6e,	// (0x0006fe0f) att_li_srv_row_pane_t_ParamLimits

0xfc6e,	// (0x0006fe0f) att_li_srv_row_pane_t

0xc3fb,	// (0x0006c59c) att_btn_close_pane_g1

0xb7dd,	// (0x0006b97e) bg_button_pane_cp24

0x9734,	// (0x000698d5) main_vod_body_pane_ParamLimits

0x9734,	// (0x000698d5) main_vod_body_pane

0x9748,	// (0x000698e9) main_vod_body_pane_g1_ParamLimits

0x9748,	// (0x000698e9) main_vod_body_pane_g1

0x977c,	// (0x0006991d) scroll_pane_cp24_ParamLimits

0x977c,	// (0x0006991d) scroll_pane_cp24

0x97ca,	// (0x0006996b) vod_btn_pane_ParamLimits

0x97ca,	// (0x0006996b) vod_btn_pane

0x9810,	// (0x000699b1) vod_det_pane_ParamLimits

0x9810,	// (0x000699b1) vod_det_pane

0x9840,	// (0x000699e1) vod_logo_g1_ParamLimits

0x9840,	// (0x000699e1) vod_logo_g1

0x987e,	// (0x00069a1f) vod_opt_pane_ParamLimits

0x987e,	// (0x00069a1f) vod_opt_pane

0x98b1,	// (0x00069a52) vod_opt_pane_cp01_ParamLimits

0x98b1,	// (0x00069a52) vod_opt_pane_cp01

0x98dd,	// (0x00069a7e) vod_query_pane_ParamLimits

0x98dd,	// (0x00069a7e) vod_query_pane

0x9908,	// (0x00069aa9) vod_query_pane_cp01_ParamLimits

0x9908,	// (0x00069aa9) vod_query_pane_cp01

0x9914,	// (0x00069ab5) vod_t_nml_pane_ParamLimits

0x9914,	// (0x00069ab5) vod_t_nml_pane

0x99bd,	// (0x00069b5e) vod_t_nml_pane_cp01_ParamLimits

0x99bd,	// (0x00069b5e) vod_t_nml_pane_cp01

0x99f9,	// (0x00069b9a) vod_t_sub_pane_ParamLimits

0x99f9,	// (0x00069b9a) vod_t_sub_pane

0x9a2a,	// (0x00069bcb) vod_t_sub_pane_cp01_ParamLimits

0x9a2a,	// (0x00069bcb) vod_t_sub_pane_cp01

0xc3b4,	// (0x0006c555) vod_query_field_pane

0xc403,	// (0x0006c5a4) vod_query_pane_t1

0xc412,	// (0x0006c5b3) bg_button_pane_cp25

0xc0aa,	// (0x0006c24b) sso_btn_pane_t1_copy2

0x9a56,	// (0x00069bf7) vod_t_nml_pane_t1_ParamLimits

0x9a56,	// (0x00069bf7) vod_t_nml_pane_t1

0xc41b,	// (0x0006c5bc) vod_opt_row_pane_ParamLimits

0xc41b,	// (0x0006c5bc) vod_opt_row_pane

0xc42d,	// (0x0006c5ce) vod_t_sub_pane_t1_ParamLimits

0xc42d,	// (0x0006c5ce) vod_t_sub_pane_t1

0xc446,	// (0x0006c5e7) vod_det_cell_pane_ParamLimits

0xc446,	// (0x0006c5e7) vod_det_cell_pane

0xb7dd,	// (0x0006b97e) input_focus_pane_cp15

0xc457,	// (0x0006c5f8) vod_query_field_pane_t1

0xc465,	// (0x0006c606) vod_opt_row_pane_g1_ParamLimits

0xc465,	// (0x0006c606) vod_opt_row_pane_g1

0xc6f5,	// (0x0006c896) vod_opt_row_pane_t1_ParamLimits

0xc6f5,	// (0x0006c896) vod_opt_row_pane_t1

0xc715,	// (0x0006c8b6) vod_det_cell_field_pane

0xc71e,	// (0x0006c8bf) vod_det_cell_pane_g1

0xc726,	// (0x0006c8c7) vod_det_cell_pane_t1

0xb7dd,	// (0x0006b97e) input_focus_pane_cp16

0xc735,	// (0x0006c8d6) vod_det_cell_field_pane_t1

0x9a85,	// (0x00069c26) call7_btn_grp_pane_ParamLimits

0x9a85,	// (0x00069c26) call7_btn_grp_pane

0x9a9f,	// (0x00069c40) call7_bubble_pane_ParamLimits

0x9a9f,	// (0x00069c40) call7_bubble_pane

0x9ab6,	// (0x00069c57) cell_call7_btn_pane_ParamLimits

0x9ab6,	// (0x00069c57) cell_call7_btn_pane

0x9aca,	// (0x00069c6b) call7_pane_g1_ParamLimits

0x9aca,	// (0x00069c6b) call7_pane_g1

0x9ad9,	// (0x00069c7a) call7_windows_conf_pane_ParamLimits

0x9ad9,	// (0x00069c7a) call7_windows_conf_pane

0x9af3,	// (0x00069c94) popup_call7_1st_window_ParamLimits

0x9af3,	// (0x00069c94) popup_call7_1st_window

0x9b04,	// (0x00069ca5) popup_call7_2nd_window_ParamLimits

0x9b04,	// (0x00069ca5) popup_call7_2nd_window

0x9b15,	// (0x00069cb6) popup_call7_3rd_window_ParamLimits

0x9b15,	// (0x00069cb6) popup_call7_3rd_window

0xb7dd,	// (0x0006b97e) bg_button_pane_cp26

0xb5ef,	// (0x0006b790) cell_call7_btn_pane_g1

0xb7ce,	// (0x0006b96f) cell_call7_btn_pane_t1

0xb7dd,	// (0x0006b97e) bg_popup_window_pane_cp12

0xc743,	// (0x0006c8e4) popup_call7_1st_window_g1

0xc74b,	// (0x0006c8ec) popup_call7_1st_window_g2

0xc753,	// (0x0006c8f4) popup_call7_1st_window_g3

0x0002,

0xfc73,	// (0x0006fe14) popup_call7_1st_window_g

0xc75b,	// (0x0006c8fc) popup_call7_1st_window_t1

0xc76a,	// (0x0006c90b) popup_call7_1st_window_t2

0xc778,	// (0x0006c919) popup_call7_1st_window_t3

0x0002,

0xfc7a,	// (0x0006fe1b) popup_call7_1st_window_t

0xb7dd,	// (0x0006b97e) bg_popup_window_pane_cp13

0xc786,	// (0x0006c927) popup_call7_2nd_window_g1

0xc78e,	// (0x0006c92f) popup_call7_2nd_window_g2

0xc796,	// (0x0006c937) popup_call7_2nd_window_g3

0x0002,

0xfc81,	// (0x0006fe22) popup_call7_2nd_window_g

0xc79e,	// (0x0006c93f) popup_call7_2nd_window_t1

0xb7dd,	// (0x0006b97e) bg_popup_window_pane_cp14

0xc7ad,	// (0x0006c94e) call7_list_conf_pane

0xc7b5,	// (0x0006c956) call7_list_conf_row_pane_ParamLimits

0xc7b5,	// (0x0006c956) call7_list_conf_row_pane

0xc7c8,	// (0x0006c969) call7_list_conf_row_pane_g1

0xc7d0,	// (0x0006c971) call7_list_conf_row_pane_g2

0x0001,

0xfc88,	// (0x0006fe29) call7_list_conf_row_pane_g

0xc7d8,	// (0x0006c979) call7_list_conf_row_pane_t1

0xb7dd,	// (0x0006b97e) list_highlight_pane_cp22

0x9084,	// (0x00069225) sso_option_pane_cp01_ParamLimits

0x9084,	// (0x00069225) sso_option_pane_cp01

0xbe7b,	// (0x0006c01c) msg_header_pane_ParamLimits

0xd275,	// (0x0006d416) bg_button_pane_cp01_ParamLimits

0xd289,	// (0x0006d42a) input_focus_pane_cp07_ParamLimits

0x75c7,	// (0x00067768) popup_email_progress_window

0xbf42,	// (0x0006c0e3) popup_email_progress_window_g1

0xc7e6,	// (0x0006c987) popup_email_progress_window_g2

0x0001,

0xfc8d,	// (0x0006fe2e) popup_email_progress_window_g

0xc7ee,	// (0x0006c98f) popup_email_progress_window_t1

0xb7dd,	// (0x0006b97e) cmail_conv_pane

0x7865,	// (0x00067a06) list_single_dyc_row_pane_g5_ParamLimits

0x7865,	// (0x00067a06) list_single_dyc_row_pane_g5

0x7871,	// (0x00067a12) list_single_dyc_row_pane_g6_ParamLimits

0x7871,	// (0x00067a12) list_single_dyc_row_pane_g6

0x7889,	// (0x00067a2a) list_single_dyc_row_pane_g7_ParamLimits

0x7889,	// (0x00067a2a) list_single_dyc_row_pane_g7

0x897e,	// (0x00068b1f) main_button_pane_5_ParamLimits

0x897e,	// (0x00068b1f) main_button_pane_5

0x8ec1,	// (0x00069062) sso_emg_call_btn_pane_ParamLimits

0x8ec1,	// (0x00069062) sso_emg_call_btn_pane

0x9227,	// (0x000693c8) sso_t_sub_pane_cp01_ParamLimits

0x9227,	// (0x000693c8) sso_t_sub_pane_cp01

0xc2ea,	// (0x0006c48b) sso_option_row_pane_g1_ParamLimits

0xc2f6,	// (0x0006c497) sso_option_row_pane_g2_ParamLimits

0xc2f6,	// (0x0006c497) sso_option_row_pane_g2

0x0001,

0x0a0a,	// (0x00060bab) sso_option_row_pane_g_ParamLimits

0x0a0a,	// (0x00060bab) sso_option_row_pane_g

0x93ce,	// (0x0006956f) att_btn_pane_cp02_ParamLimits

0x93ce,	// (0x0006956f) att_btn_pane_cp02

0xc7fc,	// (0x0006c99d) cmail_conv_hdr_pane

0xc805,	// (0x0006c9a6) list_cmail_conv_pane

0xc80f,	// (0x0006c9b0) scroll_pane_cp31

0xc817,	// (0x0006c9b8) cmail_conv_hdr_pane_t1

0xc825,	// (0x0006c9c6) cmail_conv_hdr_pane_t2

0x0001,

0xfc92,	// (0x0006fe33) cmail_conv_hdr_pane_t

0xc833,	// (0x0006c9d4) bubble_cmail_conv_pane_ParamLimits

0xc833,	// (0x0006c9d4) bubble_cmail_conv_pane

0xb088,	// (0x0006b229) aid_size_colorization_pane

0xc58b,	// (0x0006c72c) bg_bubble_cmail_conv_pane

0xc84b,	// (0x0006c9ec) body_bubble_cmail_conv_pane

0xcc07,	// (0x0006cda8) bubble_cmail_conv_pane_g1

0xc853,	// (0x0006c9f4) bubble_cmail_conv_pane_g2

0xc85b,	// (0x0006c9fc) bubble_cmail_conv_pane_g3

0x0002,

0xfc97,	// (0x0006fe38) bubble_cmail_conv_pane_g

0xc863,	// (0x0006ca04) bubble_cmail_conv_pane_t1

0xaf0c,	// (0x0006b0ad) bg_bubble_cmail_conv_pane_g1

0xaf15,	// (0x0006b0b6) bg_bubble_cmail_conv_pane_g2

0xaf1e,	// (0x0006b0bf) bg_bubble_cmail_conv_pane_g3

0x0002,

0xfa67,	// (0x0006fc08) bg_bubble_cmail_conv_pane_g

0xc871,	// (0x0006ca12) body_bubble_cmail_conv_pane_t1_ParamLimits

0xc871,	// (0x0006ca12) body_bubble_cmail_conv_pane_t1

0xc888,	// (0x0006ca29) body_bubble_cmail_conv_pane_t2_ParamLimits

0xc888,	// (0x0006ca29) body_bubble_cmail_conv_pane_t2

0x0001,

0xfc9e,	// (0x0006fe3f) body_bubble_cmail_conv_pane_t_ParamLimits

0xfc9e,	// (0x0006fe3f) body_bubble_cmail_conv_pane_t

0xbe9d,	// (0x0006c03e) list_highlight_pane_cp024_ParamLimits
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
	&WindowLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&TextLineVCR,
	&WindowLineVCR,
	&TextLineVCR,
	&TextLineVCR,
	&TextLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
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
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
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
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&Limits,
	&WindowTableLVCR,
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
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&Limits,
	&ParameterLimitsTableLV,
	&TextTableLVCR,
	&ParameterLimitsV,
	};

} // end of namespace AknLayoutScalable_Abrw_pnl4_apps_nhd4_lsc_tch_Small
