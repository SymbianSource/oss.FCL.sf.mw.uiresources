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
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Apps::KByteCodedData_AknLayoutScalable_Elaf_pnp4_apps_nhd4_prt_tch + 0x0006014c };

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
0x0a51,	// (0x00060b9d) Screen

0x0a5d,	// (0x00060ba9) application_window

0x0a99,	// (0x00060be5) area_bottom_pane_ParamLimits

0x0a99,	// (0x00060be5) area_bottom_pane

0x0ad2,	// (0x00060c1e) area_top_pane_ParamLimits

0x0ad2,	// (0x00060c1e) area_top_pane

0x9cca,	// (0x00069e16) call_video_uplink_pane_ParamLimits

0x9cca,	// (0x00069e16) call_video_uplink_pane

0x0b47,	// (0x00060c93) main_pane_ParamLimits

0x0b47,	// (0x00060c93) main_pane

0xf038,	// (0x0006f184) context_pane

0x3bc8,	// (0x00063d14) navi_pane

0x3bf0,	// (0x00063d3c) popup_cale_events_window_ParamLimits

0x3bf0,	// (0x00063d3c) popup_cale_events_window

0xf04b,	// (0x0006f197) popup_mup_playback_window

0x3c08,	// (0x00063d54) signal_pane

0xc484,	// (0x0006c5d0) main_browser_pane

0xdbdf,	// (0x0006dd2b) main_burst_pane

0x3928,	// (0x00063a74) main_calc_pane

0xdbdf,	// (0x0006dd2b) main_cale_day_pane

0xc484,	// (0x0006c5d0) main_cale_month_pane

0xdbdf,	// (0x0006dd2b) main_cale_week_pane

0xdbdf,	// (0x0006dd2b) main_call_pane

0xc112,	// (0x0006c25e) main_call_poc_pane

0xdbdf,	// (0x0006dd2b) main_camera_pane

0xdbdf,	// (0x0006dd2b) main_chi_dic_pane

0xda6e,	// (0x0006dbba) main_clock_pane

0xc112,	// (0x0006c25e) main_fmradio_pane

0xdbdf,	// (0x0006dd2b) main_graph_messa_pane

0xc112,	// (0x0006c25e) main_help_pane

0xc484,	// (0x0006c5d0) main_im_pane

0xc36d,	// (0x0006c4b9) main_image_pane_ParamLimits

0xc36d,	// (0x0006c4b9) main_image_pane

0xc112,	// (0x0006c25e) main_location2_pane

0xdbdf,	// (0x0006dd2b) main_location_pane

0xc112,	// (0x0006c25e) main_messa_pane

0xc112,	// (0x0006c25e) main_mp2_pane

0xdbdf,	// (0x0006dd2b) main_mp_pane

0xc112,	// (0x0006c25e) main_msg_pane

0xc112,	// (0x0006c25e) main_mup_eq_pane

0xc112,	// (0x0006c25e) main_mup_pane

0xc484,	// (0x0006c5d0) main_notes_pane

0xc112,	// (0x0006c25e) main_pec_pane

0xc112,	// (0x0006c25e) main_phob_pane

0xc112,	// (0x0006c25e) main_pinb_pane

0xc112,	// (0x0006c25e) main_postcard_pane

0xc112,	// (0x0006c25e) main_qdial_pane

0xdbdf,	// (0x0006dd2b) main_skin_pane

0xc112,	// (0x0006c25e) main_smil2_pane

0xdbdf,	// (0x0006dd2b) main_smil_pane

0xdbdf,	// (0x0006dd2b) main_video_pane

0xdbdf,	// (0x0006dd2b) main_video_tele_pane

0xc36d,	// (0x0006c4b9) main_viewer_pane_ParamLimits

0xc36d,	// (0x0006c4b9) main_viewer_pane

0xdbdf,	// (0x0006dd2b) main_vorec_pane

0x397c,	// (0x00063ac8) popup_blid_sat_info_window_ParamLimits

0x397c,	// (0x00063ac8) popup_blid_sat_info_window

0x39d4,	// (0x00063b20) popup_dyc_status_message_window_ParamLimits

0x39d4,	// (0x00063b20) popup_dyc_status_message_window

0x39ec,	// (0x00063b38) popup_grid_large_graphic_window_ParamLimits

0x39ec,	// (0x00063b38) popup_grid_large_graphic_window

0x3aa2,	// (0x00063bee) popup_loc_request_window_ParamLimits

0x3aa2,	// (0x00063bee) popup_loc_request_window

0x3ba0,	// (0x00063cec) popup_wml_address_window_ParamLimits

0x3ba0,	// (0x00063cec) popup_wml_address_window

0x3762,	// (0x000638ae) call_muted_g1

0x341a,	// (0x00063566) popup_call_audio_conf_window_ParamLimits

0x341a,	// (0x00063566) popup_call_audio_conf_window

0x3776,	// (0x000638c2) popup_call_audio_first_window_ParamLimits

0x3776,	// (0x000638c2) popup_call_audio_first_window

0x37ec,	// (0x00063938) popup_call_audio_in_window_ParamLimits

0x37ec,	// (0x00063938) popup_call_audio_in_window

0x3828,	// (0x00063974) popup_call_audio_out_window_ParamLimits

0x3828,	// (0x00063974) popup_call_audio_out_window

0x3862,	// (0x000639ae) popup_call_audio_second_window_ParamLimits

0x3862,	// (0x000639ae) popup_call_audio_second_window

0x38b8,	// (0x00063a04) popup_call_audio_wait_window_ParamLimits

0x38b8,	// (0x00063a04) popup_call_audio_wait_window

0x38ed,	// (0x00063a39) popup_number_entry_window_ParamLimits

0x38ed,	// (0x00063a39) popup_number_entry_window

0xbd01,	// (0x0006be4d) bg_popup_call_pane_cp05_ParamLimits

0xbd01,	// (0x0006be4d) bg_popup_call_pane_cp05

0xbd21,	// (0x0006be6d) popup_number_entry_window_t1

0xbd34,	// (0x0006be80) popup_number_entry_window_t2

0xbd46,	// (0x0006be92) popup_number_entry_window_t3

0x0003,

0xf0d8,	// (0x0006f224) popup_number_entry_window_t

0xbd58,	// (0x0006bea4) text_title_cp2

0xbd6b,	// (0x0006beb7) bg_popup_call_pane_cp_ParamLimits

0xbd6b,	// (0x0006beb7) bg_popup_call_pane_cp

0xbd79,	// (0x0006bec5) call_thumbnail_pane

0xbd81,	// (0x0006becd) popup_call_audio_in_window_g1_ParamLimits

0xbd81,	// (0x0006becd) popup_call_audio_in_window_g1

0xbd8d,	// (0x0006bed9) popup_call_audio_in_window_g2_ParamLimits

0xbd8d,	// (0x0006bed9) popup_call_audio_in_window_g2

0xbd99,	// (0x0006bee5) popup_call_audio_in_window_g3_ParamLimits

0xbd99,	// (0x0006bee5) popup_call_audio_in_window_g3

0x0002,

0xf0e1,	// (0x0006f22d) popup_call_audio_in_window_g_ParamLimits

0xf0e1,	// (0x0006f22d) popup_call_audio_in_window_g

0xbda5,	// (0x0006bef1) popup_call_audio_in_window_t1_ParamLimits

0xbda5,	// (0x0006bef1) popup_call_audio_in_window_t1

0xbdc0,	// (0x0006bf0c) popup_call_audio_in_window_t2_ParamLimits

0xbdc0,	// (0x0006bf0c) popup_call_audio_in_window_t2

0xbddb,	// (0x0006bf27) popup_call_audio_in_window_t3_ParamLimits

0xbddb,	// (0x0006bf27) popup_call_audio_in_window_t3

0x0002,

0xf0e8,	// (0x0006f234) popup_call_audio_in_window_t_ParamLimits

0xf0e8,	// (0x0006f234) popup_call_audio_in_window_t

0xbd6b,	// (0x0006beb7) bg_popup_call_pane_cp01_ParamLimits

0xbd6b,	// (0x0006beb7) bg_popup_call_pane_cp01

0xbd79,	// (0x0006bec5) call_thumbnail_pane_cp02

0xbdee,	// (0x0006bf3a) call_type_pane_cp022

0xbdf6,	// (0x0006bf42) popup_call_audio_out_window_g1_ParamLimits

0xbdf6,	// (0x0006bf42) popup_call_audio_out_window_g1

0xbe08,	// (0x0006bf54) popup_call_audio_out_window_g2_ParamLimits

0xbe08,	// (0x0006bf54) popup_call_audio_out_window_g2

0xbe14,	// (0x0006bf60) popup_call_audio_out_window_g3_ParamLimits

0xbe14,	// (0x0006bf60) popup_call_audio_out_window_g3

0x0002,

0xf0ef,	// (0x0006f23b) popup_call_audio_out_window_g_ParamLimits

0xf0ef,	// (0x0006f23b) popup_call_audio_out_window_g

0xbe26,	// (0x0006bf72) popup_call_audio_out_window_t1_ParamLimits

0xbe26,	// (0x0006bf72) popup_call_audio_out_window_t1

0xbe3e,	// (0x0006bf8a) popup_call_audio_out_window_t2_ParamLimits

0xbe3e,	// (0x0006bf8a) popup_call_audio_out_window_t2

0x0001,

0xf0f6,	// (0x0006f242) popup_call_audio_out_window_t_ParamLimits

0xf0f6,	// (0x0006f242) popup_call_audio_out_window_t

0xbe53,	// (0x0006bf9f) bg_popup_call_pane_ParamLimits

0xbe53,	// (0x0006bf9f) bg_popup_call_pane

0x0cff,	// (0x00060e4b) call_thumbnail_pane_cp_ParamLimits

0x0cff,	// (0x00060e4b) call_thumbnail_pane_cp

0xbed7,	// (0x0006c023) call_type_pane_cp01_ParamLimits

0xbed7,	// (0x0006c023) call_type_pane_cp01

0xbf1b,	// (0x0006c067) popup_call_audio_first_window_g1_ParamLimits

0xbf1b,	// (0x0006c067) popup_call_audio_first_window_g1

0xbf67,	// (0x0006c0b3) popup_call_audio_first_window_g2_ParamLimits

0xbf67,	// (0x0006c0b3) popup_call_audio_first_window_g2

0x0001,

0xf0fb,	// (0x0006f247) popup_call_audio_first_window_g_ParamLimits

0xf0fb,	// (0x0006f247) popup_call_audio_first_window_g

0xbfab,	// (0x0006c0f7) popup_call_audio_first_window_t1_ParamLimits

0xbfab,	// (0x0006c0f7) popup_call_audio_first_window_t1

0xc057,	// (0x0006c1a3) popup_call_audio_first_window_t4_ParamLimits

0xc057,	// (0x0006c1a3) popup_call_audio_first_window_t4

0xc0e3,	// (0x0006c22f) popup_call_audio_first_window_t5_ParamLimits

0xc0e3,	// (0x0006c22f) popup_call_audio_first_window_t5

0x0002,

0xf100,	// (0x0006f24c) popup_call_audio_first_window_t_ParamLimits

0xf100,	// (0x0006f24c) popup_call_audio_first_window_t

0xc112,	// (0x0006c25e) bg_popup_call_pane_cp02

0xc11c,	// (0x0006c268) call_type_pane_cp023

0xc124,	// (0x0006c270) popup_call_audio_wait_window_g1

0xc12c,	// (0x0006c278) popup_call_audio_wait_window_g2

0x0001,

0xf107,	// (0x0006f253) popup_call_audio_wait_window_g

0xc134,	// (0x0006c280) popup_call_audio_wait_window_t3

0xc142,	// (0x0006c28e) bg_popup_call_pane_cp03_ParamLimits

0xc142,	// (0x0006c28e) bg_popup_call_pane_cp03

0xc1a2,	// (0x0006c2ee) call_thumbnail_pane_cp011_ParamLimits

0xc1a2,	// (0x0006c2ee) call_thumbnail_pane_cp011

0xc1ae,	// (0x0006c2fa) call_type_pane_cp034_ParamLimits

0xc1ae,	// (0x0006c2fa) call_type_pane_cp034

0xc1ea,	// (0x0006c336) popup_call_audio_second_window_g1_ParamLimits

0xc1ea,	// (0x0006c336) popup_call_audio_second_window_g1

0xc226,	// (0x0006c372) popup_call_audio_second_window_g2_ParamLimits

0xc226,	// (0x0006c372) popup_call_audio_second_window_g2

0x0001,

0xf10c,	// (0x0006f258) popup_call_audio_second_window_g_ParamLimits

0xf10c,	// (0x0006f258) popup_call_audio_second_window_g

0xc262,	// (0x0006c3ae) popup_call_audio_second_window_t1_ParamLimits

0xc262,	// (0x0006c3ae) popup_call_audio_second_window_t1

0xc2e3,	// (0x0006c42f) popup_call_audio_second_window_t2_ParamLimits

0xc2e3,	// (0x0006c42f) popup_call_audio_second_window_t2

0xc319,	// (0x0006c465) popup_call_audio_second_window_t3_ParamLimits

0xc319,	// (0x0006c465) popup_call_audio_second_window_t3

0x0002,

0xf111,	// (0x0006f25d) popup_call_audio_second_window_t_ParamLimits

0xf111,	// (0x0006f25d) popup_call_audio_second_window_t

0xc112,	// (0x0006c25e) bg_popup_call_pane_cp04

0xc34f,	// (0x0006c49b) list_conf_pane

0xc357,	// (0x0006c4a3) popup_call_audio_conf_window_t1

0xc365,	// (0x0006c4b1) call_thumbnail_pane_g1

0xc36d,	// (0x0006c4b9) bg_pinb_pane_ParamLimits

0xc36d,	// (0x0006c4b9) bg_pinb_pane

0xc37b,	// (0x0006c4c7) find_pinb_pane

0xc384,	// (0x0006c4d0) listscroll_pinb_pane_ParamLimits

0xc384,	// (0x0006c4d0) listscroll_pinb_pane

0xc393,	// (0x0006c4df) pinb_bg_pane_g1

0x0d23,	// (0x00060e6f) pinb_bg_pane_g2

0x0d2f,	// (0x00060e7b) pinb_bg_pane_g3

0x0d3b,	// (0x00060e87) pinb_bg_pane_g4

0x0d47,	// (0x00060e93) pinb_bg_pane_g5

0x0d53,	// (0x00060e9f) pinb_bg_pane_g6

0x0d5e,	// (0x00060eaa) pinb_bg_pane_g7

0x0d69,	// (0x00060eb5) pinb_bg_pane_g8

0x0d74,	// (0x00060ec0) pinb_bg_pane_g9

0x0d7e,	// (0x00060eca) pinb_bg_pane_g10

0x0009,

0xf118,	// (0x0006f264) pinb_bg_pane_g

0x0d93,	// (0x00060edf) grid_pinb_pane

0x0d9c,	// (0x00060ee8) list_pinb_pane

0x0da5,	// (0x00060ef1) scroll_pane_cp01_ParamLimits

0x0da5,	// (0x00060ef1) scroll_pane_cp01

0xc3a5,	// (0x0006c4f1) find_pinb_pane_g1_ParamLimits

0xc3a5,	// (0x0006c4f1) find_pinb_pane_g1

0xc3bd,	// (0x0006c509) find_pinb_pane_t1

0xc3cf,	// (0x0006c51b) find_pinb_pane_t2

0x0001,

0xf132,	// (0x0006f27e) find_pinb_pane_t

0xc3e4,	// (0x0006c530) input_focus_pane_cp01_ParamLimits

0xc3e4,	// (0x0006c530) input_focus_pane_cp01

0x0db7,	// (0x00060f03) cell_pinb_pane_ParamLimits

0x0db7,	// (0x00060f03) cell_pinb_pane

0x0de9,	// (0x00060f35) cell_pinb_pane_g1_ParamLimits

0x0de9,	// (0x00060f35) cell_pinb_pane_g1

0x0df9,	// (0x00060f45) cell_pinb_pane_g2_ParamLimits

0x0df9,	// (0x00060f45) cell_pinb_pane_g2

0xc3f0,	// (0x0006c53c) cell_pinb_pane_g3_ParamLimits

0xc3f0,	// (0x0006c53c) cell_pinb_pane_g3

0x0002,

0xf137,	// (0x0006f283) cell_pinb_pane_g_ParamLimits

0xf137,	// (0x0006f283) cell_pinb_pane_g

0xc112,	// (0x0006c25e) grid_highlight_pane_cp01

0x0e05,	// (0x00060f51) list_pinb_item_pane_ParamLimits

0x0e05,	// (0x00060f51) list_pinb_item_pane

0xc112,	// (0x0006c25e) list_highlight_pane_cp02

0xc3fc,	// (0x0006c548) list_pinb_item_pane_g1_ParamLimits

0xc3fc,	// (0x0006c548) list_pinb_item_pane_g1

0xc409,	// (0x0006c555) list_pinb_item_pane_g2_ParamLimits

0xc409,	// (0x0006c555) list_pinb_item_pane_g2

0x0e19,	// (0x00060f65) list_pinb_item_pane_g3_ParamLimits

0x0e19,	// (0x00060f65) list_pinb_item_pane_g3

0xc415,	// (0x0006c561) list_pinb_item_pane_g4_ParamLimits

0xc415,	// (0x0006c561) list_pinb_item_pane_g4

0x0003,

0xf13e,	// (0x0006f28a) list_pinb_item_pane_g_ParamLimits

0xf13e,	// (0x0006f28a) list_pinb_item_pane_g

0xc421,	// (0x0006c56d) list_pinb_item_pane_t1_ParamLimits

0xc421,	// (0x0006c56d) list_pinb_item_pane_t1

0x0e48,	// (0x00060f94) calc_display_pane

0x0e70,	// (0x00060fbc) calc_paper_pane

0x0e93,	// (0x00060fdf) grid_calc_pane

0xc112,	// (0x0006c25e) bg_list_pane_cp01

0x0ec1,	// (0x0006100d) clock_g1

0x0ec9,	// (0x00061015) clock_g2

0x0001,

0xf147,	// (0x0006f293) clock_g

0x0ed1,	// (0x0006101d) clock_t1_ParamLimits

0x0ed1,	// (0x0006101d) clock_t1

0x0ee6,	// (0x00061032) clock_t2_ParamLimits

0x0ee6,	// (0x00061032) clock_t2

0x0ef8,	// (0x00061044) clock_t3_ParamLimits

0x0ef8,	// (0x00061044) clock_t3

0x0f0a,	// (0x00061056) clock_t4_ParamLimits

0x0f0a,	// (0x00061056) clock_t4

0x0f1c,	// (0x00061068) clock_t5_ParamLimits

0x0f1c,	// (0x00061068) clock_t5

0x0f31,	// (0x0006107d) clock_t6_ParamLimits

0x0f31,	// (0x0006107d) clock_t6

0x0f43,	// (0x0006108f) clock_t7_ParamLimits

0x0f43,	// (0x0006108f) clock_t7

0x0f55,	// (0x000610a1) clock_t8_ParamLimits

0x0f55,	// (0x000610a1) clock_t8

0x0f69,	// (0x000610b5) clock_t9_ParamLimits

0x0f69,	// (0x000610b5) clock_t9

0x0008,

0xf14c,	// (0x0006f298) clock_t_ParamLimits

0xf14c,	// (0x0006f298) clock_t

0xc438,	// (0x0006c584) popup_clock_analogue_window_cp02

0xc438,	// (0x0006c584) popup_clock_digital_window_cp01

0xc440,	// (0x0006c58c) listscroll_help_pane

0xc112,	// (0x0006c25e) phob_pre_status_pane

0xc44a,	// (0x0006c596) grid_qdial_pane

0xc112,	// (0x0006c25e) listscroll_mce_pane

0xc454,	// (0x0006c5a0) bg_notes_pane

0xc462,	// (0x0006c5ae) list_notes_pane

0x0f7d,	// (0x000610c9) scroll_pane_cp06

0xc470,	// (0x0006c5bc) bg_calc_paper_pane

0x9d08,	// (0x00069e54) list_calc_pane

0xc484,	// (0x0006c5d0) bg_calc_display_pane

0x0f91,	// (0x000610dd) calc_display_pane_t1

0x0fa3,	// (0x000610ef) calc_display_pane_t2

0x9d22,	// (0x00069e6e) calc_display_pane_t3

0x0002,

0xf15f,	// (0x0006f2ab) calc_display_pane_t

0x0fb5,	// (0x00061101) cell_calc_pane_ParamLimits

0x0fb5,	// (0x00061101) cell_calc_pane

0xc490,	// (0x0006c5dc) bg_calc_paper_pane_g1

0xc49c,	// (0x0006c5e8) bg_calc_paper_pane_g2

0xc4a8,	// (0x0006c5f4) bg_calc_paper_pane_g3

0xc4b4,	// (0x0006c600) bg_calc_paper_pane_g4

0xc4c0,	// (0x0006c60c) bg_calc_paper_pane_g5

0x0fec,	// (0x00061138) bg_calc_paper_pane_g6

0x0ffd,	// (0x00061149) bg_calc_paper_pane_g7

0x100e,	// (0x0006115a) bg_calc_paper_pane_g8

0x0007,

0xf166,	// (0x0006f2b2) bg_calc_paper_pane_g

0x1021,	// (0x0006116d) calc_bg_paper_pane_g9

0x1034,	// (0x00061180) list_calc_item_pane_ParamLimits

0x1034,	// (0x00061180) list_calc_item_pane

0xc4cc,	// (0x0006c618) list_calc_item_pane_g1

0x9d34,	// (0x00069e80) list_calc_item_pane_t1_ParamLimits

0x9d34,	// (0x00069e80) list_calc_item_pane_t1

0x104c,	// (0x00061198) list_calc_item_pane_t2_ParamLimits

0x104c,	// (0x00061198) list_calc_item_pane_t2

0x0001,

0xf177,	// (0x0006f2c3) list_calc_item_pane_t_ParamLimits

0xf177,	// (0x0006f2c3) list_calc_item_pane_t

0xc4d9,	// (0x0006c625) cell_calc_pane_g1

0xc4e3,	// (0x0006c62f) grid_highlight_pane_cp02

0xc505,	// (0x0006c651) bg_calc_display_pane_g1

0x9d46,	// (0x00069e92) bg_calc_display_pane_g2

0xc50e,	// (0x0006c65a) bg_calc_display_pane_g3

0x0002,

0xf181,	// (0x0006f2cd) bg_calc_display_pane_g

0x107e,	// (0x000611ca) cell_qdial_pane_ParamLimits

0x107e,	// (0x000611ca) cell_qdial_pane

0x1092,	// (0x000611de) cell_qdial_pane_g1_ParamLimits

0x1092,	// (0x000611de) cell_qdial_pane_g1

0x10a8,	// (0x000611f4) cell_qdial_pane_g2_ParamLimits

0x10a8,	// (0x000611f4) cell_qdial_pane_g2

0xc517,	// (0x0006c663) cell_qdial_pane_g3_ParamLimits

0xc517,	// (0x0006c663) cell_qdial_pane_g3

0x0003,

0xf188,	// (0x0006f2d4) cell_qdial_pane_g_ParamLimits

0xf188,	// (0x0006f2d4) cell_qdial_pane_g

0x10cf,	// (0x0006121b) cell_qdial_pane_t1_ParamLimits

0x10cf,	// (0x0006121b) cell_qdial_pane_t1

0x10e7,	// (0x00061233) cell_qdial_pane_t2_ParamLimits

0x10e7,	// (0x00061233) cell_qdial_pane_t2

0x10fa,	// (0x00061246) cell_qdial_pane_t3_ParamLimits

0x10fa,	// (0x00061246) cell_qdial_pane_t3

0x0002,

0xf191,	// (0x0006f2dd) cell_qdial_pane_t_ParamLimits

0xf191,	// (0x0006f2dd) cell_qdial_pane_t

0xc112,	// (0x0006c25e) grid_highlight_pane_cp04

0xc523,	// (0x0006c66f) thumbnail_qdial_pane_ParamLimits

0xc523,	// (0x0006c66f) thumbnail_qdial_pane

0xc57f,	// (0x0006c6cb) list_help_pane

0xc588,	// (0x0006c6d4) scroll_pane_cp02

0x110d,	// (0x00061259) help_list_pane_t1_ParamLimits

0x110d,	// (0x00061259) help_list_pane_t1

0x9d50,	// (0x00069e9c) bg_notes_pane_g2

0x9d58,	// (0x00069ea4) bg_notes_pane_g3

0x9d60,	// (0x00069eac) notes_bg_pane_g1

0x9d68,	// (0x00069eb4) notes_bg_pane_g4

0x9d70,	// (0x00069ebc) notes_bg_pane_g5

0x9d78,	// (0x00069ec4) notes_bg_pane_g6

0x9d80,	// (0x00069ecc) notes_bg_pane_g7

0x9d88,	// (0x00069ed4) notes_bg_pane_g8

0x9d90,	// (0x00069edc) notes_bg_pane_g9

0x0006,

0xf1af,	// (0x0006f2fb) notes_bg_pane_g

0x112d,	// (0x00061279) list_notes_text_pane_ParamLimits

0x112d,	// (0x00061279) list_notes_text_pane

0xc591,	// (0x0006c6dd) list_notes_text_pane_g1

0x1144,	// (0x00061290) list_notes_text_pane_t1

0xc484,	// (0x0006c5d0) listscroll_cale_week_pane

0x116f,	// (0x000612bb) bg_cale_heading_pane

0xc5ab,	// (0x0006c6f7) bg_cale_pane_cp01

0x1187,	// (0x000612d3) cale_week_corner_pane

0x1198,	// (0x000612e4) cale_week_day_heading_pane

0x11b0,	// (0x000612fc) cale_week_scroll_pane_g1

0x11c5,	// (0x00061311) cale_week_scroll_pane_g2

0x11d6,	// (0x00061322) cale_week_scroll_pane_g3

0x11e7,	// (0x00061333) cale_week_scroll_pane_g4

0x11f8,	// (0x00061344) cale_week_scroll_pane_g5

0x120b,	// (0x00061357) cale_week_scroll_pane_g6

0x121e,	// (0x0006136a) cale_week_scroll_pane_g7

0x1231,	// (0x0006137d) cale_week_scroll_pane_g8

0x1244,	// (0x00061390) cale_week_scroll_pane_g9

0x1255,	// (0x000613a1) cale_week_scroll_pane_g10

0x1266,	// (0x000613b2) cale_week_scroll_pane_g11

0x1277,	// (0x000613c3) cale_week_scroll_pane_g12

0x1288,	// (0x000613d4) cale_week_scroll_pane_g13

0x1299,	// (0x000613e5) cale_week_scroll_pane_g14

0x12aa,	// (0x000613f6) cale_week_scroll_pane_g15

0x000e,

0xf1be,	// (0x0006f30a) cale_week_scroll_pane_g

0x12bf,	// (0x0006140b) cale_week_time_pane

0x12d2,	// (0x0006141e) grid_cale_week_pane

0x12e7,	// (0x00061433) scroll_pane_cp08

0x1301,	// (0x0006144d) cell_cale_week_pane_ParamLimits

0x1301,	// (0x0006144d) cell_cale_week_pane

0x1341,	// (0x0006148d) cale_week_day_heading_pane_t1

0x1355,	// (0x000614a1) cale_week_day_heading_pane_t2

0x1369,	// (0x000614b5) cale_week_day_heading_pane_t3

0x137d,	// (0x000614c9) cale_week_day_heading_pane_t4

0x1391,	// (0x000614dd) cale_week_day_heading_pane_t5

0x13a5,	// (0x000614f1) cale_week_day_heading_pane_t6

0x13bb,	// (0x00061507) cale_week_day_heading_pane_t7

0x0006,

0xf1dd,	// (0x0006f329) cale_week_day_heading_pane_t

0xc5d6,	// (0x0006c722) bg_cale_side_pane

0x13cf,	// (0x0006151b) cale_week_time_pane_t1

0x13e7,	// (0x00061533) cale_week_time_pane_t2

0x13ff,	// (0x0006154b) cale_week_time_pane_t3

0x1417,	// (0x00061563) cale_week_time_pane_t4

0x142f,	// (0x0006157b) cale_week_time_pane_t5

0x1447,	// (0x00061593) cale_week_time_pane_t6

0x145f,	// (0x000615ab) cale_week_time_pane_t7

0x1477,	// (0x000615c3) cale_week_time_pane_t8

0x0007,

0xf1ec,	// (0x0006f338) cale_week_time_pane_t

0x148f,	// (0x000615db) cell_cale_week_pane_g2

0x14a8,	// (0x000615f4) cell_cale_week_pane_g3_ParamLimits

0x14a8,	// (0x000615f4) cell_cale_week_pane_g3

0xc5e4,	// (0x0006c730) grid_highlight_pane_cp07

0xc5ec,	// (0x0006c738) listscroll_gms_pane

0xc5f6,	// (0x0006c742) grid_gms_pane

0xc5ff,	// (0x0006c74b) listscroll_gms_pane_g1

0xc607,	// (0x0006c753) listscroll_gms_pane_g2

0x0001,

0xf1fd,	// (0x0006f349) listscroll_gms_pane_g

0x14c0,	// (0x0006160c) scroll_pane_cp010

0x14cb,	// (0x00061617) cell_gms_pane_ParamLimits

0x14cb,	// (0x00061617) cell_gms_pane

0x14dd,	// (0x00061629) cell_gms_pane_g1

0xc60f,	// (0x0006c75b) cell_gms_pane_g2

0xc591,	// (0x0006c6dd) cell_gms_pane_g3

0xc617,	// (0x0006c763) cell_gms_pane_g4

0x0003,

0xf202,	// (0x0006f34e) cell_gms_pane_g

0xc620,	// (0x0006c76c) grid_highlight_pane_cp09

0x370a,	// (0x00063856) phob_pre_status_pane_g1

0x3712,	// (0x0006385e) phob_pre_status_pane_g2

0x371a,	// (0x00063866) phob_pre_status_pane_g3

0x3722,	// (0x0006386e) phob_pre_status_pane_g4

0x0004,

0xf5f1,	// (0x0006f73d) phob_pre_status_pane_g

0x3734,	// (0x00063880) phob_pre_status_pane_t1

0x3742,	// (0x0006388e) phob_pre_status_pane_t2

0x3752,	// (0x0006389e) phob_pre_status_pane_t3

0x0002,

0xf5fc,	// (0x0006f748) phob_pre_status_pane_t

0xc112,	// (0x0006c25e) bg_list_pane_cp05

0x14e5,	// (0x00061631) grid_vorec_pane

0x9da0,	// (0x00069eec) vorec_t1

0x9dae,	// (0x00069efa) vorec_t2

0x9dbc,	// (0x00069f08) vorec_t3

0x9dca,	// (0x00069f16) vorec_t4

0x9dd8,	// (0x00069f24) vorec_t5

0x9de6,	// (0x00069f32) vorec_t6

0x0006,

0xf20b,	// (0x0006f357) vorec_t

0x9e02,	// (0x00069f4e) wait_bar_pane_cp01

0xc628,	// (0x0006c774) cell_vorec_pane_ParamLimits

0xc628,	// (0x0006c774) cell_vorec_pane

0xc63b,	// (0x0006c787) cell_vorec_pane_g1

0xc112,	// (0x0006c25e) grid_highlight_pane_cp05

0x1507,	// (0x00061653) cams_zoom_pane

0x1516,	// (0x00061662) image_vga_pane

0x1530,	// (0x0006167c) main_camera_pane_g1

0x1542,	// (0x0006168e) main_camera_pane_g2

0x1554,	// (0x000616a0) main_camera_pane_g3

0x1566,	// (0x000616b2) main_camera_pane_g4

0x1578,	// (0x000616c4) main_camera_pane_g5

0x158a,	// (0x000616d6) main_camera_pane_g6

0x159c,	// (0x000616e8) main_camera_pane_g7

0x0007,

0xf21a,	// (0x0006f366) main_camera_pane_g

0x15ae,	// (0x000616fa) main_camera_pane_t1

0x15c4,	// (0x00061710) main_camera_pane_t2

0x0001,

0xf22b,	// (0x0006f377) main_camera_pane_t

0x1600,	// (0x0006174c) cams_zoom_pane_cp_ParamLimits

0x1600,	// (0x0006174c) cams_zoom_pane_cp

0x1628,	// (0x00061774) image_cif_pane_ParamLimits

0x1628,	// (0x00061774) image_cif_pane

0x1663,	// (0x000617af) image_subqcif_pane

0x166b,	// (0x000617b7) main_video_pane_g1_ParamLimits

0x166b,	// (0x000617b7) main_video_pane_g1

0x168f,	// (0x000617db) main_video_pane_g2_ParamLimits

0x168f,	// (0x000617db) main_video_pane_g2

0x16c5,	// (0x00061811) main_video_pane_g3_ParamLimits

0x16c5,	// (0x00061811) main_video_pane_g3

0x16f5,	// (0x00061841) main_video_pane_g4_ParamLimits

0x16f5,	// (0x00061841) main_video_pane_g4

0x1725,	// (0x00061871) main_video_pane_g5_ParamLimits

0x1725,	// (0x00061871) main_video_pane_g5

0xc651,	// (0x0006c79d) main_video_pane_g6_ParamLimits

0xc651,	// (0x0006c79d) main_video_pane_g6

0x0006,

0xf230,	// (0x0006f37c) main_video_pane_g_ParamLimits

0xf230,	// (0x0006f37c) main_video_pane_g

0x1750,	// (0x0006189c) main_video_pane_t1_ParamLimits

0x1750,	// (0x0006189c) main_video_pane_t1

0xc66b,	// (0x0006c7b7) cams_zoom_pane_g1

0xc674,	// (0x0006c7c0) cams_zoom_pane_g2

0xc67d,	// (0x0006c7c9) cams_zoom_pane_g3

0xc686,	// (0x0006c7d2) cams_zoom_pane_g4

0x0003,

0xf23f,	// (0x0006f38b) cams_zoom_pane_g

0x17ad,	// (0x000618f9) grid_cams_pane

0x17c7,	// (0x00061913) linegrid_cams_pane

0x17da,	// (0x00061926) cell_cams_pane_ParamLimits

0x17da,	// (0x00061926) cell_cams_pane

0xc68f,	// (0x0006c7db) cams_burst_image_pane

0xc697,	// (0x0006c7e3) cell_cams_pane_g1

0xc112,	// (0x0006c25e) grid_highlight_pane_cp03

0xc4d9,	// (0x0006c625) mp_bg_pane_g1

0xc112,	// (0x0006c25e) bg_list_pane_cp03

0xef4f,	// (0x0006f09b) bg_mp_pane

0xef57,	// (0x0006f0a3) grid_mp_pane

0xef5f,	// (0x0006f0ab) media_player_g1

0xef67,	// (0x0006f0b3) media_player_t1

0xef75,	// (0x0006f0c1) media_player_t2

0xef83,	// (0x0006f0cf) media_player_t3

0xef91,	// (0x0006f0dd) media_player_t4

0xef9f,	// (0x0006f0eb) media_player_t5

0xefad,	// (0x0006f0f9) media_player_t6

0xefbb,	// (0x0006f107) media_player_t7

0x0006,

0xf5db,	// (0x0006f727) media_player_t

0xefc9,	// (0x0006f115) wait_bar_pane_cp02

0xf5c0,	// (0x0006f70c) main_usb_pane_t

0x3701,	// (0x0006384d) cell_mp_pane

0xc4d9,	// (0x0006c625) cell_mp_pane_g1

0xc112,	// (0x0006c25e) grid_highlight_pane_cp06

0xd21c,	// (0x0006d368) grid_skin_colour_pane

0xd224,	// (0x0006d370) list_highlight_pane_cp03

0x1852,	// (0x0006199e) skin_g1

0xd22c,	// (0x0006d378) skin_t1

0xd23b,	// (0x0006d387) skin_t2

0x0001,

0xf274,	// (0x0006f3c0) skin_t

0x185a,	// (0x000619a6) cell_skin_colour_pane_ParamLimits

0x185a,	// (0x000619a6) cell_skin_colour_pane

0xd249,	// (0x0006d395) cell_skin_colour_pane_g1

0x18d3,	// (0x00061a1f) call_video_g1_ParamLimits

0x18d3,	// (0x00061a1f) call_video_g1

0x18ef,	// (0x00061a3b) call_video_g2_ParamLimits

0x18ef,	// (0x00061a3b) call_video_g2

0x0001,

0xf279,	// (0x0006f3c5) call_video_g_ParamLimits

0xf279,	// (0x0006f3c5) call_video_g

0x1941,	// (0x00061a8d) call_video_uplink_pane_cp1_ParamLimits

0x1941,	// (0x00061a8d) call_video_uplink_pane_cp1

0xd25b,	// (0x0006d3a7) call_video_uplink_pane_cp2

0x19e0,	// (0x00061b2c) video_down_crop_pane_ParamLimits

0x19e0,	// (0x00061b2c) video_down_crop_pane

0x1ac9,	// (0x00061c15) video_down_pane_ParamLimits

0x1ac9,	// (0x00061c15) video_down_pane

0xd263,	// (0x0006d3af) video_down_subqcif_pane_ParamLimits

0xd263,	// (0x0006d3af) video_down_subqcif_pane

0xd27b,	// (0x0006d3c7) video_down_subqcif_pane_cp_ParamLimits

0xd27b,	// (0x0006d3c7) video_down_subqcif_pane_cp

0xd2a1,	// (0x0006d3ed) im_reading_pane_ParamLimits

0xd2a1,	// (0x0006d3ed) im_reading_pane

0x1bd7,	// (0x00061d23) im_writing_pane_ParamLimits

0x1bd7,	// (0x00061d23) im_writing_pane

0x1bed,	// (0x00061d39) im_reading_pane_t1

0xd2bb,	// (0x0006d407) list_im_pane

0xd2cc,	// (0x0006d418) scroll_pane_cp07

0x1c29,	// (0x00061d75) im_writing_pane_t1_ParamLimits

0x1c29,	// (0x00061d75) im_writing_pane_t1

0xd2e5,	// (0x0006d431) im_writing_pane_t2_ParamLimits

0xd2e5,	// (0x0006d431) im_writing_pane_t2

0x0001,

0xf283,	// (0x0006f3cf) im_writing_pane_t_ParamLimits

0xf283,	// (0x0006f3cf) im_writing_pane_t

0xc112,	// (0x0006c25e) input_focus_pane_cp04

0xc112,	// (0x0006c25e) input_focus_pane_cp05

0x1c3e,	// (0x00061d8a) list_im_single_pane_ParamLimits

0x1c3e,	// (0x00061d8a) list_im_single_pane

0x1c54,	// (0x00061da0) list_single_im_pane_t1

0x36c1,	// (0x0006380d) blid_accuracy_pane

0x36c9,	// (0x00063815) blid_compass_pane

0x36d3,	// (0x0006381f) main_location_t1

0x36e3,	// (0x0006382f) main_location_t2

0x36f3,	// (0x0006383f) main_location_t3

0x0002,

0xf5ea,	// (0x0006f736) main_location_t

0xc112,	// (0x0006c25e) aid_levels_location

0xc4d9,	// (0x0006c625) blid_accuracy_pane_g1

0xc4d9,	// (0x0006c625) blid_accuracy_pane_g2

0x0001,

0xf2e5,	// (0x0006f431) blid_accuracy_pane_g

0xd32d,	// (0x0006d479) wml_content_pane

0xd36b,	// (0x0006d4b7) wml_button_pane_ParamLimits

0xd36b,	// (0x0006d4b7) wml_button_pane

0x1c63,	// (0x00061daf) wml_list_single_large_pane_ParamLimits

0x1c63,	// (0x00061daf) wml_list_single_large_pane

0x1c7a,	// (0x00061dc6) wml_list_single_medium_pane_ParamLimits

0x1c7a,	// (0x00061dc6) wml_list_single_medium_pane

0x1c92,	// (0x00061dde) wml_list_single_small_pane_ParamLimits

0x1c92,	// (0x00061dde) wml_list_single_small_pane

0xd37f,	// (0x0006d4cb) wml_selection_box_pane_ParamLimits

0xd37f,	// (0x0006d4cb) wml_selection_box_pane

0xd392,	// (0x0006d4de) wml_list_single_pane_t1

0xd3a1,	// (0x0006d4ed) wml_list_single_medium_pane_t1

0xd3b0,	// (0x0006d4fc) wml_list_single_large_pane_t1

0xd3bf,	// (0x0006d50b) input_focus_pane_cp02_ParamLimits

0xd3bf,	// (0x0006d50b) input_focus_pane_cp02

0xd3d2,	// (0x0006d51e) wml_selection_box_pane_g1

0xd3db,	// (0x0006d527) wml_selection_box_pane_t1_ParamLimits

0xd3db,	// (0x0006d527) wml_selection_box_pane_t1

0xc36d,	// (0x0006c4b9) bg_wml_button_pane_ParamLimits

0xc36d,	// (0x0006c4b9) bg_wml_button_pane

0xd3f3,	// (0x0006d53f) wml_button_pane_g1

0xd3fb,	// (0x0006d547) wml_button_pane_t1

0xd3f3,	// (0x0006d53f) wml_button_bg_pane_g1

0xd40b,	// (0x0006d557) wml_button_bg_pane_g2

0xd413,	// (0x0006d55f) wml_button_bg_pane_g3

0xd41b,	// (0x0006d567) wml_button_bg_pane_g4

0xd423,	// (0x0006d56f) wml_button_bg_pane_g5

0xd42b,	// (0x0006d577) wml_button_bg_pane_g6

0xd433,	// (0x0006d57f) wml_button_bg_pane_g7

0xd43b,	// (0x0006d587) wml_button_bg_pane_g8

0xd443,	// (0x0006d58f) wml_button_bg_pane_g9

0x0008,

0xf288,	// (0x0006f3d4) wml_button_bg_pane_g

0x1cb0,	// (0x00061dfc) bg_list_pane_cp02

0xd44b,	// (0x0006d597) mce_header_pane_ParamLimits

0xd44b,	// (0x0006d597) mce_header_pane

0xd461,	// (0x0006d5ad) mce_icon_pane

0xd461,	// (0x0006d5ad) mce_image_pane

0xd46a,	// (0x0006d5b6) mce_text_pane_ParamLimits

0xd46a,	// (0x0006d5b6) mce_text_pane

0x1cb8,	// (0x00061e04) scroll_pane_cp03

0xd363,	// (0x0006d4af) scroll_pane_cp04

0xd47d,	// (0x0006d5c9) scroll_pane_cp05_ParamLimits

0xd47d,	// (0x0006d5c9) scroll_pane_cp05

0x1cc2,	// (0x00061e0e) mce_header_field_pane_ParamLimits

0x1cc2,	// (0x00061e0e) mce_header_field_pane

0x1cd9,	// (0x00061e25) mce_header_field_pane_2_ParamLimits

0x1cd9,	// (0x00061e25) mce_header_field_pane_2

0x1cef,	// (0x00061e3b) mce_header_field_pane_3

0x1cf7,	// (0x00061e43) list_single_mce_message_pane_ParamLimits

0x1cf7,	// (0x00061e43) list_single_mce_message_pane

0x1d0f,	// (0x00061e5b) list_single_mce_smart_pane_ParamLimits

0x1d0f,	// (0x00061e5b) list_single_mce_smart_pane

0xd489,	// (0x0006d5d5) input_focus_pane_cp03

0xd492,	// (0x0006d5de) list_header_data_pane

0x1d32,	// (0x00061e7e) mce_header_field_pane_t1

0x1d42,	// (0x00061e8e) list_single_mce_header_pane_ParamLimits

0x1d42,	// (0x00061e8e) list_single_mce_header_pane

0xd49a,	// (0x0006d5e6) list_single_mce_header_pane_t1

0xd4a9,	// (0x0006d5f5) list_single_mce_message_pane_g1

0xd4b1,	// (0x0006d5fd) list_single_mce_message_pane_t1

0x1d74,	// (0x00061ec0) bg_cale_heading_pane_cp01_ParamLimits

0x1d74,	// (0x00061ec0) bg_cale_heading_pane_cp01

0xd4bf,	// (0x0006d60b) bg_cale_pane_cp02_ParamLimits

0xd4bf,	// (0x0006d60b) bg_cale_pane_cp02

0x1d97,	// (0x00061ee3) cale_month_corner_pane

0x1dad,	// (0x00061ef9) cale_month_day_heading_pane_ParamLimits

0x1dad,	// (0x00061ef9) cale_month_day_heading_pane

0x1de0,	// (0x00061f2c) cale_month_pane_g1_ParamLimits

0x1de0,	// (0x00061f2c) cale_month_pane_g1

0x1dfc,	// (0x00061f48) cale_month_pane_g2_ParamLimits

0x1dfc,	// (0x00061f48) cale_month_pane_g2

0x1e17,	// (0x00061f63) cale_month_pane_g3_ParamLimits

0x1e17,	// (0x00061f63) cale_month_pane_g3

0x1e43,	// (0x00061f8f) cale_month_pane_g4_ParamLimits

0x1e43,	// (0x00061f8f) cale_month_pane_g4

0x1e6f,	// (0x00061fbb) cale_month_pane_g5_ParamLimits

0x1e6f,	// (0x00061fbb) cale_month_pane_g5

0x1ea3,	// (0x00061fef) cale_month_pane_g6_ParamLimits

0x1ea3,	// (0x00061fef) cale_month_pane_g6

0x1edf,	// (0x0006202b) cale_month_pane_g7_ParamLimits

0x1edf,	// (0x0006202b) cale_month_pane_g7

0x1f1b,	// (0x00062067) cale_month_pane_g8_ParamLimits

0x1f1b,	// (0x00062067) cale_month_pane_g8

0x1f57,	// (0x000620a3) cale_month_pane_g9_ParamLimits

0x1f57,	// (0x000620a3) cale_month_pane_g9

0x1f91,	// (0x000620dd) cale_month_pane_g10_ParamLimits

0x1f91,	// (0x000620dd) cale_month_pane_g10

0x1fcb,	// (0x00062117) cale_month_pane_g11_ParamLimits

0x1fcb,	// (0x00062117) cale_month_pane_g11

0x2005,	// (0x00062151) cale_month_pane_g12_ParamLimits

0x2005,	// (0x00062151) cale_month_pane_g12

0x203f,	// (0x0006218b) cale_month_pane_g13_ParamLimits

0x203f,	// (0x0006218b) cale_month_pane_g13

0x000c,

0xf29b,	// (0x0006f3e7) cale_month_pane_g_ParamLimits

0xf29b,	// (0x0006f3e7) cale_month_pane_g

0x2079,	// (0x000621c5) cale_month_week_pane

0x208c,	// (0x000621d8) grid_cale_month_pane_ParamLimits

0x208c,	// (0x000621d8) grid_cale_month_pane

0x20ba,	// (0x00062206) cale_month_day_heading_pane_t1

0x2118,	// (0x00062264) cale_month_day_heading_pane_t2

0x217d,	// (0x000622c9) cale_month_day_heading_pane_t3

0x21e2,	// (0x0006232e) cale_month_day_heading_pane_t4

0x2247,	// (0x00062393) cale_month_day_heading_pane_t5

0x22bc,	// (0x00062408) cale_month_day_heading_pane_t6

0x2331,	// (0x0006247d) cale_month_day_heading_pane_t7

0x0006,

0xf2b6,	// (0x0006f402) cale_month_day_heading_pane_t

0xc5d6,	// (0x0006c722) bg_cale_side_pane_cp01

0x23a6,	// (0x000624f2) cale_month_week_pane_t1

0x23bd,	// (0x00062509) cale_month_week_pane_t2

0x23d4,	// (0x00062520) cale_month_week_pane_t3

0x23eb,	// (0x00062537) cale_month_week_pane_t4

0x2402,	// (0x0006254e) cale_month_week_pane_t5

0x2419,	// (0x00062565) cale_month_week_pane_t6

0x0005,

0xf2c5,	// (0x0006f411) cale_month_week_pane_t

0x2430,	// (0x0006257c) cell_cale_month_pane_ParamLimits

0x2430,	// (0x0006257c) cell_cale_month_pane

0x9e0a,	// (0x00069f56) cell_cale_month_pane_g1

0x2506,	// (0x00062652) cell_cale_month_pane_t1_ParamLimits

0x2506,	// (0x00062652) cell_cale_month_pane_t1

0xc5e4,	// (0x0006c730) grid_highlight_pane_cp08

0xc4d9,	// (0x0006c625) main_smil_g1

0x2522,	// (0x0006266e) smil_status_pane

0xd51e,	// (0x0006d66a) smil_text_pane

0xee67,	// (0x0006efb3) bg_popup_call3_rect_pane_g8

0xee6f,	// (0x0006efbb) bg_popup_call3_rect_pane_g9

0x0008,

0xf57e,	// (0x0006f6ca) bg_popup_call3_rect_pane_g

0xf0b2,	// (0x0006f1fe) smil_status_volume_pane_g1

0xd528,	// (0x0006d674) smil_status_pane_t1

0x9f47,	// (0x0006a093) volume_smil_pane

0xd53f,	// (0x0006d68b) list_smil_text_pane

0x2537,	// (0x00062683) scroll_pane_cp011

0x2542,	// (0x0006268e) smil_text_list_pane_t1_ParamLimits

0x2542,	// (0x0006268e) smil_text_list_pane_t1

0x9e16,	// (0x00069f62) aid_volume_smil_ParamLimits

0x9e16,	// (0x00069f62) aid_volume_smil

0xc4d9,	// (0x0006c625) smil_volume_pane_g1

0xc4d9,	// (0x0006c625) smil_volume_pane_g2

0x0001,

0xf2e5,	// (0x0006f431) smil_volume_pane_g

0xc484,	// (0x0006c5d0) listscroll_cale_day_pane

0xd549,	// (0x0006d695) bg_cale_pane

0xd561,	// (0x0006d6ad) list_cale_pane

0xd572,	// (0x0006d6be) scroll_pane_cp09

0xd583,	// (0x0006d6cf) cale_bg_pane_g1

0xd58b,	// (0x0006d6d7) cale_bg_pane_g2

0xd593,	// (0x0006d6df) cale_bg_pane_g3

0xd59b,	// (0x0006d6e7) cale_bg_pane_g4

0xd5a3,	// (0x0006d6ef) cale_bg_pane_g5

0xd5ab,	// (0x0006d6f7) cale_bg_pane_g6

0xd5b3,	// (0x0006d6ff) cale_bg_pane_g7

0xd5bb,	// (0x0006d707) cale_bg_pane_g8

0xd5c3,	// (0x0006d70f) cale_bg_pane_g9

0x0008,

0xf2ea,	// (0x0006f436) cale_bg_pane_g

0x2596,	// (0x000626e2) list_cale_time_pane_ParamLimits

0x2596,	// (0x000626e2) list_cale_time_pane

0x25ab,	// (0x000626f7) list_cale_time_pane_g1_ParamLimits

0x25ab,	// (0x000626f7) list_cale_time_pane_g1

0xd5cb,	// (0x0006d717) list_cale_time_pane_g2_ParamLimits

0xd5cb,	// (0x0006d717) list_cale_time_pane_g2

0x25b7,	// (0x00062703) list_cale_time_pane_g3_ParamLimits

0x25b7,	// (0x00062703) list_cale_time_pane_g3

0x25d3,	// (0x0006271f) list_cale_time_pane_g4_ParamLimits

0x25d3,	// (0x0006271f) list_cale_time_pane_g4

0x25e1,	// (0x0006272d) list_cale_time_pane_g5_ParamLimits

0x25e1,	// (0x0006272d) list_cale_time_pane_g5

0x0005,

0xf2fd,	// (0x0006f449) list_cale_time_pane_g_ParamLimits

0xf2fd,	// (0x0006f449) list_cale_time_pane_g

0x25ef,	// (0x0006273b) list_cale_time_pane_t1_ParamLimits

0x25ef,	// (0x0006273b) list_cale_time_pane_t1

0x2617,	// (0x00062763) list_cale_time_pane_t2_ParamLimits

0x2617,	// (0x00062763) list_cale_time_pane_t2

0x2944,	// (0x00062a90) aid_blid_cardinal_pane

0x2982,	// (0x00062ace) compass_pane_t4

0x263f,	// (0x0006278b) list_cale_time_pane_t4_ParamLimits

0x263f,	// (0x0006278b) list_cale_time_pane_t4

0x2990,	// (0x00062adc) compass_pane_t5

0x299e,	// (0x00062aea) compass_pane_t6

0x29ac,	// (0x00062af8) compass_pane_t7

0xdb31,	// (0x0006dc7d) navi_pane_cc_t1

0xdc86,	// (0x0006ddd2) aid_phob_thumbnail_center_pane

0x30d5,	// (0x00063221) main_postcard_pane_g4_ParamLimits

0x0002,

0xf30a,	// (0x0006f456) list_cale_time_pane_t_ParamLimits

0xf30a,	// (0x0006f456) list_cale_time_pane_t

0xbd6b,	// (0x0006beb7) bg_popup_window_pane_cp02_ParamLimits

0xbd6b,	// (0x0006beb7) bg_popup_window_pane_cp02

0xd69c,	// (0x0006d7e8) heading_pane_cp01_ParamLimits

0xd69c,	// (0x0006d7e8) heading_pane_cp01

0xd6a8,	// (0x0006d7f4) loc_req_pane_ParamLimits

0xd6a8,	// (0x0006d7f4) loc_req_pane

0xd6b8,	// (0x0006d804) loc_type_pane_ParamLimits

0xd6b8,	// (0x0006d804) loc_type_pane

0xd6ca,	// (0x0006d816) loc_type_pane_t1_ParamLimits

0xd6ca,	// (0x0006d816) loc_type_pane_t1

0xd6dc,	// (0x0006d828) loc_type_pane_t2_ParamLimits

0xd6dc,	// (0x0006d828) loc_type_pane_t2

0xd6ee,	// (0x0006d83a) loc_type_pane_t3_ParamLimits

0xd6ee,	// (0x0006d83a) loc_type_pane_t3

0x0002,

0xf311,	// (0x0006f45d) loc_type_pane_t_ParamLimits

0xf311,	// (0x0006f45d) loc_type_pane_t

0xd700,	// (0x0006d84c) list_loc_req_pane

0xd70a,	// (0x0006d856) scroll_pane_cp012

0x2667,	// (0x000627b3) list_single_loc_request_popup_menu_pane_ParamLimits

0x2667,	// (0x000627b3) list_single_loc_request_popup_menu_pane

0xd715,	// (0x0006d861) list_single_loc_request_popup_menu_pane_g1_ParamLimits

0xd715,	// (0x0006d861) list_single_loc_request_popup_menu_pane_g1

0xd721,	// (0x0006d86d) list_single_loc_request_popup_menu_pane_g2_ParamLimits

0xd721,	// (0x0006d86d) list_single_loc_request_popup_menu_pane_g2

0x0001,

0xf318,	// (0x0006f464) list_single_loc_request_popup_menu_pane_g_ParamLimits

0xf318,	// (0x0006f464) list_single_loc_request_popup_menu_pane_g

0xd72d,	// (0x0006d879) list_single_loc_request_popup_menu_pane_t1_ParamLimits

0xd72d,	// (0x0006d879) list_single_loc_request_popup_menu_pane_t1

0xc36d,	// (0x0006c4b9) bg_popup_window_pane_cp03_ParamLimits

0xc36d,	// (0x0006c4b9) bg_popup_window_pane_cp03

0xd743,	// (0x0006d88f) heading_loc_req_pane_ParamLimits

0xd743,	// (0x0006d88f) heading_loc_req_pane

0x2674,	// (0x000627c0) popup_dyc_status_message_window_g1_ParamLimits

0x2674,	// (0x000627c0) popup_dyc_status_message_window_g1

0x2688,	// (0x000627d4) popup_dyc_status_message_window_t1_ParamLimits

0x2688,	// (0x000627d4) popup_dyc_status_message_window_t1

0x269d,	// (0x000627e9) popup_dyc_status_message_window_t2_ParamLimits

0x269d,	// (0x000627e9) popup_dyc_status_message_window_t2

0x26b2,	// (0x000627fe) popup_dyc_status_message_window_t3_ParamLimits

0x26b2,	// (0x000627fe) popup_dyc_status_message_window_t3

0x0002,

0xf31d,	// (0x0006f469) popup_dyc_status_message_window_t_ParamLimits

0xf31d,	// (0x0006f469) popup_dyc_status_message_window_t

0xc112,	// (0x0006c25e) bg_heading_pane_cp01

0xd74f,	// (0x0006d89b) heading_loc_req_pane_g1

0xd757,	// (0x0006d8a3) heading_loc_req_pane_g2

0xd75f,	// (0x0006d8ab) heading_loc_req_pane_g3

0x0002,

0xf324,	// (0x0006f470) heading_loc_req_pane_g

0xd767,	// (0x0006d8b3) heading_loc_req_pane_t1

0xd7eb,	// (0x0006d937) bg_popup_sub_pane_cp01_ParamLimits

0xd7eb,	// (0x0006d937) bg_popup_sub_pane_cp01

0xd7f9,	// (0x0006d945) popup_cale_events_window_g1_ParamLimits

0xd7f9,	// (0x0006d945) popup_cale_events_window_g1

0xd819,	// (0x0006d965) popup_cale_events_window_g2_ParamLimits

0xd819,	// (0x0006d965) popup_cale_events_window_g2

0x0001,

0xf358,	// (0x0006f4a4) popup_cale_events_window_g_ParamLimits

0xf358,	// (0x0006f4a4) popup_cale_events_window_g

0xd839,	// (0x0006d985) popup_cale_events_window_t1_ParamLimits

0xd839,	// (0x0006d985) popup_cale_events_window_t1

0xd84b,	// (0x0006d997) popup_cale_events_window_t2_ParamLimits

0xd84b,	// (0x0006d997) popup_cale_events_window_t2

0xd889,	// (0x0006d9d5) popup_cale_events_window_t3_ParamLimits

0xd889,	// (0x0006d9d5) popup_cale_events_window_t3

0xd8c3,	// (0x0006da0f) popup_cale_events_window_t4_ParamLimits

0xd8c3,	// (0x0006da0f) popup_cale_events_window_t4

0x0003,

0xf35d,	// (0x0006f4a9) popup_cale_events_window_t_ParamLimits

0xf35d,	// (0x0006f4a9) popup_cale_events_window_t

0x2740,	// (0x0006288c) call_type_pane

0x2750,	// (0x0006289c) popup_call_status_window_g1

0x2764,	// (0x000628b0) popup_call_status_window_g2

0x2778,	// (0x000628c4) popup_call_status_window_g3

0x0002,

0xf366,	// (0x0006f4b2) popup_call_status_window_g

0xd8f9,	// (0x0006da45) call_type_pane_g1

0xd902,	// (0x0006da4e) call_type_pane_g2

0x0001,

0xf36d,	// (0x0006f4b9) call_type_pane_g

0xc112,	// (0x0006c25e) bg_popup_sub_pane_cp02

0xd90b,	// (0x0006da57) listscroll_popup_wml_pane

0xd913,	// (0x0006da5f) list_wml_pane

0xd91d,	// (0x0006da69) scroll_pane_cp013

0xd928,	// (0x0006da74) list_single_graphic_popup_wml_pane_ParamLimits

0xd928,	// (0x0006da74) list_single_graphic_popup_wml_pane

0xc4d9,	// (0x0006c625) list_single_graphic_popup_wml_pane_g1

0xd93c,	// (0x0006da88) list_single_graphic_popup_wml_pane_g2

0x0001,

0xf372,	// (0x0006f4be) list_single_graphic_popup_wml_pane_g

0xd944,	// (0x0006da90) list_single_graphic_popup_wml_pane_t1

0xd95a,	// (0x0006daa6) aid_call_pane

0xc365,	// (0x0006c4b1) popup_clock_analogue_window_g1

0xc365,	// (0x0006c4b1) popup_clock_analogue_window_g2

0x9e38,	// (0x00069f84) popup_clock_analogue_window_g3

0x9e38,	// (0x00069f84) popup_clock_analogue_window_g4

0xc4d9,	// (0x0006c625) popup_clock_analogue_window_g5

0x0004,

0xf377,	// (0x0006f4c3) popup_clock_analogue_window_g

0x9e40,	// (0x00069f8c) popup_clock_analogue_window_t1

0x9e4e,	// (0x00069f9a) clock_digital_number_pane_ParamLimits

0x9e4e,	// (0x00069f9a) clock_digital_number_pane

0x9e5a,	// (0x00069fa6) clock_digital_number_pane_cp02_ParamLimits

0x9e5a,	// (0x00069fa6) clock_digital_number_pane_cp02

0x9e66,	// (0x00069fb2) clock_digital_number_pane_cp03_ParamLimits

0x9e66,	// (0x00069fb2) clock_digital_number_pane_cp03

0x9e72,	// (0x00069fbe) clock_digital_number_pane_cp04_ParamLimits

0x9e72,	// (0x00069fbe) clock_digital_number_pane_cp04

0x9e7e,	// (0x00069fca) clock_digital_separator_pane_ParamLimits

0x9e7e,	// (0x00069fca) clock_digital_separator_pane

0x9e8a,	// (0x00069fd6) popup_clock_digital_window_t1

0xc4d9,	// (0x0006c625) clock_digital_number_pane_g1

0xc4d9,	// (0x0006c625) clock_digital_number_pane_g2

0x0001,

0xf2e5,	// (0x0006f431) clock_digital_number_pane_g

0xc4d9,	// (0x0006c625) clock_digital_separator_pane_g1

0xc4d9,	// (0x0006c625) clock_digital_separator_pane_g2

0x0001,

0xf2e5,	// (0x0006f431) clock_digital_separator_pane_g

0xc112,	// (0x0006c25e) bg_popup_window_pane_cp04

0xd962,	// (0x0006daae) heading_pane_cp03

0xd96a,	// (0x0006dab6) listscroll_popup_gms_pane

0xd972,	// (0x0006dabe) grid_large_graphic_popup_pane

0xd97c,	// (0x0006dac8) listscroll_popup_gms_pane_g1

0xd984,	// (0x0006dad0) listscroll_popup_gms_pane_g2

0x0001,

0xf382,	// (0x0006f4ce) listscroll_popup_gms_pane_g

0xd363,	// (0x0006d4af) scroll_pane_cp014

0xd98c,	// (0x0006dad8) cell_large_graphic_popup_pane_ParamLimits

0xd98c,	// (0x0006dad8) cell_large_graphic_popup_pane

0xd9a4,	// (0x0006daf0) cell_large_graphic_popup_pane_g1_ParamLimits

0xd9a4,	// (0x0006daf0) cell_large_graphic_popup_pane_g1

0xd9b0,	// (0x0006dafc) cell_large_graphic_popup_pane_g2_ParamLimits

0xd9b0,	// (0x0006dafc) cell_large_graphic_popup_pane_g2

0xd9bc,	// (0x0006db08) cell_large_graphic_popup_pane_g3_ParamLimits

0xd9bc,	// (0x0006db08) cell_large_graphic_popup_pane_g3

0xd9c9,	// (0x0006db15) cell_large_graphic_popup_pane_g4_ParamLimits

0xd9c9,	// (0x0006db15) cell_large_graphic_popup_pane_g4

0x0003,

0xf387,	// (0x0006f4d3) cell_large_graphic_popup_pane_g_ParamLimits

0xf387,	// (0x0006f4d3) cell_large_graphic_popup_pane_g

0xd9d9,	// (0x0006db25) grid_highlight_pane_cp010

0xc4d9,	// (0x0006c625) bg_popup_call_pane_g1

0xd9e3,	// (0x0006db2f) list_single_graphic_popup_conf_pane_ParamLimits

0xd9e3,	// (0x0006db2f) list_single_graphic_popup_conf_pane

0xd9f5,	// (0x0006db41) list_highlight_pane_cp01

0xd9fe,	// (0x0006db4a) list_single_graphic_popup_conf_pane_g1

0xda06,	// (0x0006db52) list_single_graphic_popup_conf_pane_g2

0x0001,

0xf390,	// (0x0006f4dc) list_single_graphic_popup_conf_pane_g

0xda0e,	// (0x0006db5a) list_single_graphic_popup_conf_pane_t1

0xda1c,	// (0x0006db68) linegrid_cams_pane_g1

0x2788,	// (0x000628d4) linegrid_cams_pane_g2

0xc591,	// (0x0006c6dd) linegrid_cams_pane_g3

0xda25,	// (0x0006db71) linegrid_cams_pane_g4

0x2791,	// (0x000628dd) linegrid_cams_pane_g5

0x279a,	// (0x000628e6) linegrid_cams_pane_g6

0xc617,	// (0x0006c763) linegrid_cams_pane_g7

0x0006,

0xf395,	// (0x0006f4e1) linegrid_cams_pane_g

0xda2e,	// (0x0006db7a) popup_clock_analogue_window

0xda2e,	// (0x0006db7a) popup_clock_digital_window

0xc112,	// (0x0006c25e) popup_phob_thumbnail_window

0xc4d9,	// (0x0006c625) call_video_uplink_pane_g1

0xda37,	// (0x0006db83) call_video_uplink_pane_g2

0x0001,

0xf3a4,	// (0x0006f4f0) call_video_uplink_pane_g

0xc5e4,	// (0x0006c730) video_uplink_pane

0xda3f,	// (0x0006db8b) mce_image_pane_g1

0x27a5,	// (0x000628f1) mce_image_pane_g2

0x27ad,	// (0x000628f9) mce_image_pane_g3

0x27b5,	// (0x00062901) mce_image_pane_g4

0x27bd,	// (0x00062909) mce_image_pane_g5

0x0004,

0xf3a9,	// (0x0006f4f5) mce_image_pane_g

0xda49,	// (0x0006db95) control_top_pane_stacon_cp01_ParamLimits

0xda49,	// (0x0006db95) control_top_pane_stacon_cp01

0xda5d,	// (0x0006dba9) uni_indicator_pane_stacon_cp01_ParamLimits

0xda5d,	// (0x0006dba9) uni_indicator_pane_stacon_cp01

0xda6e,	// (0x0006dbba) bg_popup_sub_pane_cp03

0x27c5,	// (0x00062911) chi_dic_find_pane

0x27cd,	// (0x00062919) listscroll_chi_dic_pane

0x27d6,	// (0x00062922) main_pane_chidic_g1

0x27e9,	// (0x00062935) chi_dic_find_pane_t1

0xda78,	// (0x0006dbc4) find_chidic_pane

0xda81,	// (0x0006dbcd) chi_dic_list_pane_ParamLimits

0xda81,	// (0x0006dbcd) chi_dic_list_pane

0xda92,	// (0x0006dbde) scroll_pane_cp020

0x27f7,	// (0x00062943) find_chidic_pane_t1

0xc112,	// (0x0006c25e) input_focus_pane_cp06

0x2806,	// (0x00062952) list_chi_dic_pane_ParamLimits

0x2806,	// (0x00062952) list_chi_dic_pane

0xda9a,	// (0x0006dbe6) list_chi_dic_pane_t1_ParamLimits

0xda9a,	// (0x0006dbe6) list_chi_dic_pane_t1

0xc112,	// (0x0006c25e) list_highlight_pane_cp020

0xdaad,	// (0x0006dbf9) bg_cale_heading_pane_g1

0x281a,	// (0x00062966) bg_cale_heading_pane_g2

0x2822,	// (0x0006296e) bg_cale_heading_pane_g3

0x282a,	// (0x00062976) bg_cale_heading_pane_g4

0x2834,	// (0x00062980) bg_cale_heading_pane_g5

0x283e,	// (0x0006298a) bg_cale_heading_pane_g6

0x2846,	// (0x00062992) bg_cale_heading_pane_g7

0x284e,	// (0x0006299a) bg_cale_heading_pane_g8

0x2858,	// (0x000629a4) bg_cale_heading_pane_g9

0x0008,

0xf3b4,	// (0x0006f500) bg_cale_heading_pane_g

0xdaad,	// (0x0006dbf9) bg_cale_side_pane_g1

0x2862,	// (0x000629ae) bg_cale_side_pane_g2

0x286a,	// (0x000629b6) bg_cale_side_pane_g3

0x2872,	// (0x000629be) bg_cale_side_pane_g4

0x287a,	// (0x000629c6) bg_cale_side_pane_g5

0x2882,	// (0x000629ce) bg_cale_side_pane_g6

0x288a,	// (0x000629d6) bg_cale_side_pane_g7

0x2892,	// (0x000629de) bg_cale_side_pane_g8

0x289a,	// (0x000629e6) bg_cale_side_pane_g9

0x0008,

0xf3c7,	// (0x0006f513) bg_cale_side_pane_g

0x28a2,	// (0x000629ee) popup_call_status_window_ParamLimits

0x28a2,	// (0x000629ee) popup_call_status_window

0xdab5,	// (0x0006dc01) stacon_top_pane

0xdabd,	// (0x0006dc09) status_pane_ParamLimits

0xdabd,	// (0x0006dc09) status_pane

0xdad2,	// (0x0006dc1e) status_small_pane

0xdada,	// (0x0006dc26) control_pane

0xc112,	// (0x0006c25e) stacon_bottom_pane

0xdae2,	// (0x0006dc2e) list_single_mce_smart_pane_t1_ParamLimits

0xdae2,	// (0x0006dc2e) list_single_mce_smart_pane_t1

0xdaf5,	// (0x0006dc41) list_single_mce_smart_pane_t2_ParamLimits

0xdaf5,	// (0x0006dc41) list_single_mce_smart_pane_t2

0x0001,

0xf3da,	// (0x0006f526) list_single_mce_smart_pane_t_ParamLimits

0xf3da,	// (0x0006f526) list_single_mce_smart_pane_t

0x28e9,	// (0x00062a35) compass_pane

0x28f2,	// (0x00062a3e) main_location2_pane_t1

0x2906,	// (0x00062a52) main_location2_pane_t2

0x291a,	// (0x00062a66) main_location2_pane_t3

0x0003,

0xf3df,	// (0x0006f52b) main_location2_pane_t

0xdb14,	// (0x0006dc60) compass_pane_g1_ParamLimits

0xdb14,	// (0x0006dc60) compass_pane_g1

0x2964,	// (0x00062ab0) compass_pane_t1

0x2973,	// (0x00062abf) compass_pane_t2

0x0005,

0xf3e8,	// (0x0006f534) compass_pane_t

0x29ba,	// (0x00062b06) text_secondary_cp61

0xdb28,	// (0x0006dc74) navi_pane_cams_g5

0xdb4b,	// (0x0006dc97) navi_pane_im_t1

0xdb59,	// (0x0006dca5) navi_pane_mp_g1_ParamLimits

0xdb59,	// (0x0006dca5) navi_pane_mp_g1

0xdb6d,	// (0x0006dcb9) navi_pane_mp_g2_ParamLimits

0xdb6d,	// (0x0006dcb9) navi_pane_mp_g2

0xdb79,	// (0x0006dcc5) navi_pane_mp_g3_ParamLimits

0xdb79,	// (0x0006dcc5) navi_pane_mp_g3

0x0002,

0xf3fc,	// (0x0006f548) navi_pane_mp_g_ParamLimits

0xf3fc,	// (0x0006f548) navi_pane_mp_g

0xdb85,	// (0x0006dcd1) navi_pane_mp_t1

0xdb93,	// (0x0006dcdf) navi_pane_mp_t2

0x0002,

0xf403,	// (0x0006f54f) navi_pane_mp_t

0xdbcf,	// (0x0006dd1b) navi_pane_vt_g1

0xdb85,	// (0x0006dcd1) navi_pane_vt_t1

0xdbd7,	// (0x0006dd23) navi_slider_pane

0xdbdf,	// (0x0006dd2b) zooming_pane

0xdbe7,	// (0x0006dd33) navi_slider_pane_g1

0x9ea7,	// (0x00069ff3) navi_slider_pane_g2

0x0006,

0xf40a,	// (0x0006f556) navi_slider_pane_g

0xdc0b,	// (0x0006dd57) aid_levels_zoom

0xdc13,	// (0x0006dd5f) zooming_pane_g1

0xdc1b,	// (0x0006dd67) zooming_pane_g2

0xdc1b,	// (0x0006dd67) zooming_pane_g3

0x0002,

0xf419,	// (0x0006f565) zooming_pane_g

0xdc23,	// (0x0006dd6f) level_10_zoom

0xdc2c,	// (0x0006dd78) level_11_zoom

0xdc35,	// (0x0006dd81) level_1_zoom

0xdc3e,	// (0x0006dd8a) level_2_zoom

0xdc47,	// (0x0006dd93) level_3_zoom

0xdc50,	// (0x0006dd9c) level_4_zoom

0xdc59,	// (0x0006dda5) level_5_zoom

0xdc62,	// (0x0006ddae) level_6_zoom

0xdc6b,	// (0x0006ddb7) level_7_zoom

0xdc74,	// (0x0006ddc0) level_8_zoom

0xdc7d,	// (0x0006ddc9) level_9_zoom

0xdc8e,	// (0x0006ddda) popup_phob_thumbnail_window_g1

0xdc96,	// (0x0006dde2) popup_phob_thumbnail_window_g2

0x0001,

0xf420,	// (0x0006f56c) popup_phob_thumbnail_window_g

0xefd1,	// (0x0006f11d) level_1_location

0xefd9,	// (0x0006f125) level_2_location

0xefe1,	// (0x0006f12d) level_3_location

0xefe9,	// (0x0006f135) level_4_location

0xdbdf,	// (0x0006dd2b) level_5_location

0x2af9,	// (0x00062c45) mce_icon_pane_g1

0x2b01,	// (0x00062c4d) mce_icon_pane_g2

0x0001,

0xf425,	// (0x0006f571) mce_icon_pane_g

0x2b09,	// (0x00062c55) main_mup_pane_g1_ParamLimits

0x2b09,	// (0x00062c55) main_mup_pane_g1

0x2b1f,	// (0x00062c6b) main_mup_pane_g2_ParamLimits

0x2b1f,	// (0x00062c6b) main_mup_pane_g2

0x2b37,	// (0x00062c83) main_mup_pane_g3_ParamLimits

0x2b37,	// (0x00062c83) main_mup_pane_g3

0x2b4f,	// (0x00062c9b) main_mup_pane_g4_ParamLimits

0x2b4f,	// (0x00062c9b) main_mup_pane_g4

0x2b67,	// (0x00062cb3) main_mup_pane_g5_ParamLimits

0x2b67,	// (0x00062cb3) main_mup_pane_g5

0x2b83,	// (0x00062ccf) main_mup_pane_g6_ParamLimits

0x2b83,	// (0x00062ccf) main_mup_pane_g6

0x2b9b,	// (0x00062ce7) main_mup_pane_g7_ParamLimits

0x2b9b,	// (0x00062ce7) main_mup_pane_g7

0x2bb3,	// (0x00062cff) main_mup_pane_g8_ParamLimits

0x2bb3,	// (0x00062cff) main_mup_pane_g8

0x2bcb,	// (0x00062d17) main_mup_pane_g9_ParamLimits

0x2bcb,	// (0x00062d17) main_mup_pane_g9

0x2be5,	// (0x00062d31) main_mup_pane_g10_ParamLimits

0x2be5,	// (0x00062d31) main_mup_pane_g10

0x2bff,	// (0x00062d4b) main_mup_pane_g11_ParamLimits

0x2bff,	// (0x00062d4b) main_mup_pane_g11

0x2c13,	// (0x00062d5f) main_mup_pane_g12_ParamLimits

0x2c13,	// (0x00062d5f) main_mup_pane_g12

0x2c29,	// (0x00062d75) main_mup_pane_g13_ParamLimits

0x2c29,	// (0x00062d75) main_mup_pane_g13

0x000c,

0xf42a,	// (0x0006f576) main_mup_pane_g_ParamLimits

0xf42a,	// (0x0006f576) main_mup_pane_g

0x2c3d,	// (0x00062d89) main_mup_pane_t1_ParamLimits

0x2c3d,	// (0x00062d89) main_mup_pane_t1

0x2c57,	// (0x00062da3) main_mup_pane_t2_ParamLimits

0x2c57,	// (0x00062da3) main_mup_pane_t2

0x2c6f,	// (0x00062dbb) main_mup_pane_t3_ParamLimits

0x2c6f,	// (0x00062dbb) main_mup_pane_t3

0x2c87,	// (0x00062dd3) main_mup_pane_t4_ParamLimits

0x2c87,	// (0x00062dd3) main_mup_pane_t4

0x2ca5,	// (0x00062df1) main_mup_pane_t5_ParamLimits

0x2ca5,	// (0x00062df1) main_mup_pane_t5

0x2cba,	// (0x00062e06) main_mup_pane_t6_ParamLimits

0x2cba,	// (0x00062e06) main_mup_pane_t6

0x0005,

0xf445,	// (0x0006f591) main_mup_pane_t_ParamLimits

0xf445,	// (0x0006f591) main_mup_pane_t

0x2ccc,	// (0x00062e18) mup_progress_pane_ParamLimits

0x2ccc,	// (0x00062e18) mup_progress_pane

0x2cd8,	// (0x00062e24) mup_visualizer_pane_ParamLimits

0x2cd8,	// (0x00062e24) mup_visualizer_pane

0x2d0c,	// (0x00062e58) mup_volume_pane_ParamLimits

0x2d0c,	// (0x00062e58) mup_volume_pane

0xdc9e,	// (0x0006ddea) mup_visualizer_pane_g1_ParamLimits

0xdc9e,	// (0x0006ddea) mup_visualizer_pane_g1

0xdc9e,	// (0x0006ddea) mup_visualizer_pane_g2_ParamLimits

0xdc9e,	// (0x0006ddea) mup_visualizer_pane_g2

0xdb14,	// (0x0006dc60) mup_visualizer_pane_g3_ParamLimits

0xdb14,	// (0x0006dc60) mup_visualizer_pane_g3

0x0002,

0xf452,	// (0x0006f59e) mup_visualizer_pane_g_ParamLimits

0xf452,	// (0x0006f59e) mup_visualizer_pane_g

0xc4d9,	// (0x0006c625) mup_volume_pane_g1

0xdcb4,	// (0x0006de00) mup_volume_pane_g2

0x0001,

0xf459,	// (0x0006f5a5) mup_volume_pane_g

0xc4d9,	// (0x0006c625) mup_progress_pane_g1

0xdcbd,	// (0x0006de09) mup_progress_pane_g2

0xdcc6,	// (0x0006de12) mup_progress_pane_g3

0x0002,

0xf45e,	// (0x0006f5aa) mup_progress_pane_g

0xc112,	// (0x0006c25e) bg_popup_window_pane_cp05

0xdccf,	// (0x0006de1b) heading_pane_cp02_ParamLimits

0xdccf,	// (0x0006de1b) heading_pane_cp02

0xdce9,	// (0x0006de35) list_popup_blid_pane

0xdcf1,	// (0x0006de3d) list_blid_sat_info_pane_ParamLimits

0xdcf1,	// (0x0006de3d) list_blid_sat_info_pane

0xdd04,	// (0x0006de50) list_blid_sat_info_pane_g1

0xdd0c,	// (0x0006de58) list_blid_sat_info_pane_t1

0x2e32,	// (0x00062f7e) mup_equalizer_pane_ParamLimits

0x2e32,	// (0x00062f7e) mup_equalizer_pane

0x2e4b,	// (0x00062f97) mup_equalizer_pane_cp1_ParamLimits

0x2e4b,	// (0x00062f97) mup_equalizer_pane_cp1

0x2e68,	// (0x00062fb4) mup_equalizer_pane_cp2_ParamLimits

0x2e68,	// (0x00062fb4) mup_equalizer_pane_cp2

0x2e85,	// (0x00062fd1) mup_equalizer_pane_cp3_ParamLimits

0x2e85,	// (0x00062fd1) mup_equalizer_pane_cp3

0x2ea6,	// (0x00062ff2) mup_equalizer_pane_cp4_ParamLimits

0x2ea6,	// (0x00062ff2) mup_equalizer_pane_cp4

0x2ec7,	// (0x00063013) mup_equalizer_pane_cp5

0x2edb,	// (0x00063027) mup_equalizer_pane_cp6

0x2eef,	// (0x0006303b) mup_equalizer_pane_cp7

0xeeef,	// (0x0006f03b) bg_popup_call_poc_act_pane_g9

0xeef7,	// (0x0006f043) bg_popup_call_poc_act_pane_g10

0xeeff,	// (0x0006f04b) bg_popup_call_poc_act_pane_g11

0x000a,

0xc36d,	// (0x0006c4b9) mup_scale_pane

0xc4d9,	// (0x0006c625) mup_scale_pane_g1

0xdd1a,	// (0x0006de66) mup_scale_pane_g2

0x0006,

0xf47a,	// (0x0006f5c6) mup_scale_pane_g

0xdd3e,	// (0x0006de8a) msg_data_pane

0xdd46,	// (0x0006de92) scroll_pane_cp017

0x2f15,	// (0x00063061) bg_list_pane_cp04_ParamLimits

0x2f15,	// (0x00063061) bg_list_pane_cp04

0xdd4e,	// (0x0006de9a) msg_data_pane_g1

0x2f35,	// (0x00063081) msg_data_pane_g2

0x27ad,	// (0x000628f9) msg_data_pane_g3

0x2f3d,	// (0x00063089) msg_data_pane_g4

0x2f45,	// (0x00063091) msg_data_pane_g5

0x2f4d,	// (0x00063099) msg_data_pane_g6

0x2f55,	// (0x000630a1) msg_data_pane_g7

0x0006,

0xf489,	// (0x0006f5d5) msg_data_pane_g

0x2f5d,	// (0x000630a9) msg_text_pane_ParamLimits

0x2f5d,	// (0x000630a9) msg_text_pane

0x2f88,	// (0x000630d4) qrid_highlight_pane_cp011_ParamLimits

0x2f88,	// (0x000630d4) qrid_highlight_pane_cp011

0xc112,	// (0x0006c25e) msg_body_pane

0xc112,	// (0x0006c25e) msg_header_pane

0xdd5f,	// (0x0006deab) input_focus_pane_cp07

0x2fac,	// (0x000630f8) msg_header_pane_t1_ParamLimits

0x2fac,	// (0x000630f8) msg_header_pane_t1

0xdd74,	// (0x0006dec0) msg_header_pane_t2_ParamLimits

0xdd74,	// (0x0006dec0) msg_header_pane_t2

0x0001,

0xf49d,	// (0x0006f5e9) msg_header_pane_t_ParamLimits

0xf49d,	// (0x0006f5e9) msg_header_pane_t

0xdd86,	// (0x0006ded2) msg_body_pane_g1

0x2fc0,	// (0x0006310c) msg_body_pane_t1_ParamLimits

0x2fc0,	// (0x0006310c) msg_body_pane_t1

0xdd8e,	// (0x0006deda) msg_body_pane_t2_ParamLimits

0xdd8e,	// (0x0006deda) msg_body_pane_t2

0xdda0,	// (0x0006deec) msg_body_pane_t3_ParamLimits

0xdda0,	// (0x0006deec) msg_body_pane_t3

0x0002,

0xf4a2,	// (0x0006f5ee) msg_body_pane_t_ParamLimits

0xf4a2,	// (0x0006f5ee) msg_body_pane_t

0x302b,	// (0x00063177) main_viewer_pane_g1_ParamLimits

0x302b,	// (0x00063177) main_viewer_pane_g1

0x3039,	// (0x00063185) main_viewer_pane_g2_ParamLimits

0x3039,	// (0x00063185) main_viewer_pane_g2

0x3047,	// (0x00063193) main_viewer_pane_g3_ParamLimits

0x3047,	// (0x00063193) main_viewer_pane_g3

0x3056,	// (0x000631a2) main_viewer_pane_g4_ParamLimits

0x3056,	// (0x000631a2) main_viewer_pane_g4

0x9ed1,	// (0x0006a01d) main_viewer_pane_g5_ParamLimits

0x9ed1,	// (0x0006a01d) main_viewer_pane_g5

0x9ed1,	// (0x0006a01d) main_viewer_pane_g7_ParamLimits

0x9ed1,	// (0x0006a01d) main_viewer_pane_g7

0x9ee3,	// (0x0006a02f) main_viewer_pane_g8_ParamLimits

0x9ee3,	// (0x0006a02f) main_viewer_pane_g8

0x0007,

0xf4b2,	// (0x0006f5fe) main_viewer_pane_g_ParamLimits

0xf4b2,	// (0x0006f5fe) main_viewer_pane_g

0xddb2,	// (0x0006defe) viewer_content_pane_ParamLimits

0xddb2,	// (0x0006defe) viewer_content_pane

0x3092,	// (0x000631de) main_postcard_pane_g1_ParamLimits

0x3092,	// (0x000631de) main_postcard_pane_g1

0x30a8,	// (0x000631f4) main_postcard_pane_g2_ParamLimits

0x30a8,	// (0x000631f4) main_postcard_pane_g2

0x30be,	// (0x0006320a) main_postcard_pane_g3_ParamLimits

0x30be,	// (0x0006320a) main_postcard_pane_g3

0x0005,

0xf4c3,	// (0x0006f60f) main_postcard_pane_g_ParamLimits

0xf4c3,	// (0x0006f60f) main_postcard_pane_g

0x30d5,	// (0x00063221) main_postcard_pane_g4

0xf0c5,	// (0x0006f211) smil_status_volume_pane_g2

0x3118,	// (0x00063264) postcard_pane_ParamLimits

0x3118,	// (0x00063264) postcard_pane

0xddc0,	// (0x0006df0c) postcard_pane_g1_ParamLimits

0xddc0,	// (0x0006df0c) postcard_pane_g1

0x315a,	// (0x000632a6) postcard_pane_g2_ParamLimits

0x315a,	// (0x000632a6) postcard_pane_g2

0x3166,	// (0x000632b2) postcard_pane_g3_ParamLimits

0x3166,	// (0x000632b2) postcard_pane_g3

0xddce,	// (0x0006df1a) postcard_pane_g4_ParamLimits

0xddce,	// (0x0006df1a) postcard_pane_g4

0x3172,	// (0x000632be) postcard_pane_g5_ParamLimits

0x3172,	// (0x000632be) postcard_pane_g5

0x3187,	// (0x000632d3) postcard_pane_g6_ParamLimits

0x3187,	// (0x000632d3) postcard_pane_g6

0xddc0,	// (0x0006df0c) postcard_pane_g7_ParamLimits

0xddc0,	// (0x0006df0c) postcard_pane_g7

0x0006,

0xf4d0,	// (0x0006f61c) postcard_pane_g_ParamLimits

0xf4d0,	// (0x0006f61c) postcard_pane_g

0x319b,	// (0x000632e7) main_mp2_pane_g1_ParamLimits

0x319b,	// (0x000632e7) main_mp2_pane_g1

0x31a7,	// (0x000632f3) main_mp2_pane_g2_ParamLimits

0x31a7,	// (0x000632f3) main_mp2_pane_g2

0x31b3,	// (0x000632ff) main_mp2_pane_g3_ParamLimits

0x31b3,	// (0x000632ff) main_mp2_pane_g3

0x0002,

0xf4df,	// (0x0006f62b) main_mp2_pane_g_ParamLimits

0xf4df,	// (0x0006f62b) main_mp2_pane_g

0x31bf,	// (0x0006330b) main_mp2_pane_t1_ParamLimits

0x31bf,	// (0x0006330b) main_mp2_pane_t1

0x31d4,	// (0x00063320) main_mp2_pane_t2_ParamLimits

0x31d4,	// (0x00063320) main_mp2_pane_t2

0x31e6,	// (0x00063332) main_mp2_pane_t3_ParamLimits

0x31e6,	// (0x00063332) main_mp2_pane_t3

0x0002,

0xf4e6,	// (0x0006f632) main_mp2_pane_t_ParamLimits

0xf4e6,	// (0x0006f632) main_mp2_pane_t

0xdddc,	// (0x0006df28) pec_content_pane_ParamLimits

0xdddc,	// (0x0006df28) pec_content_pane

0xd363,	// (0x0006d4af) scroll_pane_cp015

0xddee,	// (0x0006df3a) pec_attribute_pane_ParamLimits

0xddee,	// (0x0006df3a) pec_attribute_pane

0x31f8,	// (0x00063344) pec_content_pane_g1_ParamLimits

0x31f8,	// (0x00063344) pec_content_pane_g1

0xddfe,	// (0x0006df4a) pec_content_pane_t1_ParamLimits

0xddfe,	// (0x0006df4a) pec_content_pane_t1

0xde10,	// (0x0006df5c) pec_content_pane_t2_ParamLimits

0xde10,	// (0x0006df5c) pec_content_pane_t2

0x0001,

0xf4ed,	// (0x0006f639) pec_content_pane_t_ParamLimits

0xf4ed,	// (0x0006f639) pec_content_pane_t

0x3206,	// (0x00063352) list_single_graphic_pane_cp01_ParamLimits

0x3206,	// (0x00063352) list_single_graphic_pane_cp01

0xc36d,	// (0x0006c4b9) bg_popup_sub_pane_cp04

0xde22,	// (0x0006df6e) popup_mup_playback_window_g1

0xde2e,	// (0x0006df7a) popup_mup_playback_window_t1

0xde43,	// (0x0006df8f) popup_mup_playback_window_t2

0x0001,

0xf4f2,	// (0x0006f63e) popup_mup_playback_window_t

0xde7a,	// (0x0006dfc6) main_image_pane_g1_ParamLimits

0xde7a,	// (0x0006dfc6) main_image_pane_g1

0xdebd,	// (0x0006e009) scroll_pane_cp018_ParamLimits

0xdebd,	// (0x0006e009) scroll_pane_cp018

0xded5,	// (0x0006e021) scroll_pane_cp016_ParamLimits

0xded5,	// (0x0006e021) scroll_pane_cp016

0x32d6,	// (0x00063422) smil2_image_pane_ParamLimits

0x32d6,	// (0x00063422) smil2_image_pane

0x330a,	// (0x00063456) smil2_root_pane_ParamLimits

0x330a,	// (0x00063456) smil2_root_pane

0x3342,	// (0x0006348e) smil2_text_pane_ParamLimits

0x3342,	// (0x0006348e) smil2_text_pane

0xc112,	// (0x0006c25e) bg_list_pane_cp06

0xdf11,	// (0x0006e05d) grid_radio_pane

0xc112,	// (0x0006c25e) bg_popup_window_pane_cp06

0xdf19,	// (0x0006e065) main_fmradio_pane_t1

0xd962,	// (0x0006daae) heading_pane_cp04

0xdf27,	// (0x0006e073) main_fmradio_pane_t2

0xef07,	// (0x0006f053) popup_cale_lunar_info_window_g1

0xdf35,	// (0x0006e081) main_fmradio_pane_t3

0xef0f,	// (0x0006f05b) popup_cale_lunar_info_window_g2

0xdf43,	// (0x0006e08f) main_fmradio_pane_t4

0x0001,

0xdf51,	// (0x0006e09d) main_fmradio_pane_t5

0x0004,

0xf5cd,	// (0x0006f719) popup_cale_lunar_info_window_g

0xf507,	// (0x0006f653) main_fmradio_pane_t

0xdf5f,	// (0x0006e0ab) wait_bar_pane_cp03

0xdf67,	// (0x0006e0b3) cell_fmradio_pane_ParamLimits

0xdf67,	// (0x0006e0b3) cell_fmradio_pane

0xddc0,	// (0x0006df0c) cell_fmradio_pane_g1_ParamLimits

0xddc0,	// (0x0006df0c) cell_fmradio_pane_g1

0xc112,	// (0x0006c25e) grid_highlight_pane_cp011

0xdf7a,	// (0x0006e0c6) poc_content_pane_ParamLimits

0xdf7a,	// (0x0006e0c6) poc_content_pane

0xdf8c,	// (0x0006e0d8) scroll_pane_cp019

0x33c2,	// (0x0006350e) popup_call_poc_act_window_ParamLimits

0x33c2,	// (0x0006350e) popup_call_poc_act_window

0x33e6,	// (0x00063532) popup_call_poc_inact_window_ParamLimits

0x33e6,	// (0x00063532) popup_call_poc_inact_window

0xf5a4,	// (0x0006f6f0) bg_popup_call_poc_act_pane_g

0xee77,	// (0x0006efc3) bg_popup_call_poc_inact_pane_g1

0xee7f,	// (0x0006efcb) bg_popup_call_poc_inact_pane_g2

0xdf94,	// (0x0006e0e0) popup_call_poc_act_window_g2

0xee87,	// (0x0006efd3) bg_popup_call_poc_inact_pane_g3

0xee8f,	// (0x0006efdb) bg_popup_call_poc_inact_pane_g4

0xee97,	// (0x0006efe3) bg_popup_call_poc_inact_pane_g5

0xdf9c,	// (0x0006e0e8) popup_call_poc_act_window_t1_ParamLimits

0xdf9c,	// (0x0006e0e8) popup_call_poc_act_window_t1

0xdfc4,	// (0x0006e110) popup_call_poc_act_window_t2_ParamLimits

0xdfc4,	// (0x0006e110) popup_call_poc_act_window_t2

0xdfec,	// (0x0006e138) popup_call_poc_act_window_t3_ParamLimits

0xdfec,	// (0x0006e138) popup_call_poc_act_window_t3

0xe014,	// (0x0006e160) popup_call_poc_act_window_t4_ParamLimits

0xe014,	// (0x0006e160) popup_call_poc_act_window_t4

0x0003,

0xf512,	// (0x0006f65e) popup_call_poc_act_window_t_ParamLimits

0xf512,	// (0x0006f65e) popup_call_poc_act_window_t

0xee9f,	// (0x0006efeb) bg_popup_call_poc_inact_pane_g6

0xeea7,	// (0x0006eff3) bg_popup_call_poc_inact_pane_g7

0xeeaf,	// (0x0006effb) bg_popup_call_poc_inact_pane_g8

0xe026,	// (0x0006e172) popup_call_poc_inact_window_g2

0xeeb7,	// (0x0006f003) bg_popup_call_poc_inact_pane_g9

0x0008,

0xf591,	// (0x0006f6dd) bg_popup_call_poc_inact_pane_g

0xe02e,	// (0x0006e17a) popup_call_poc_inact_window_t1_ParamLimits

0xe02e,	// (0x0006e17a) popup_call_poc_inact_window_t1

0xe043,	// (0x0006e18f) popup_call_poc_inact_window_t2_ParamLimits

0xe043,	// (0x0006e18f) popup_call_poc_inact_window_t2

0xe058,	// (0x0006e1a4) popup_call_poc_inact_window_t3_ParamLimits

0xe058,	// (0x0006e1a4) popup_call_poc_inact_window_t3

0x0002,

0xf51b,	// (0x0006f667) popup_call_poc_inact_window_t_ParamLimits

0xf51b,	// (0x0006f667) popup_call_poc_inact_window_t

0xf038,	// (0x0006f184) context_pane_ParamLimits

0x3c08,	// (0x00063d54) signal_pane_ParamLimits

0xdbdf,	// (0x0006dd2b) main_call2_pane

0x9f28,	// (0x0006a074) popup_phob_thumbnail2_window_ParamLimits

0x9f28,	// (0x0006a074) popup_phob_thumbnail2_window

0x9eb9,	// (0x0006a005) aid_hotspot_pointer_arrow_pane

0x9ec1,	// (0x0006a00d) aid_hotspot_pointer_hand_pane

0x372c,	// (0x00063878) phob_pre_status_pane_g5

0x1507,	// (0x00061653) cams_zoom_pane_ParamLimits

0x1516,	// (0x00061662) image_vga_pane_ParamLimits

0x1530,	// (0x0006167c) main_camera_pane_g1_ParamLimits

0x1542,	// (0x0006168e) main_camera_pane_g2_ParamLimits

0x1554,	// (0x000616a0) main_camera_pane_g3_ParamLimits

0x1566,	// (0x000616b2) main_camera_pane_g4_ParamLimits

0x1578,	// (0x000616c4) main_camera_pane_g5_ParamLimits

0x158a,	// (0x000616d6) main_camera_pane_g6_ParamLimits

0x159c,	// (0x000616e8) main_camera_pane_g7_ParamLimits

0xf21a,	// (0x0006f366) main_camera_pane_g_ParamLimits

0x15ae,	// (0x000616fa) main_camera_pane_t1_ParamLimits

0x15c4,	// (0x00061710) main_camera_pane_t2_ParamLimits

0xf22b,	// (0x0006f377) main_camera_pane_t_ParamLimits

0xc36d,	// (0x0006c4b9) bg_popup_preview_window_pane_cp01_ParamLimits

0xc36d,	// (0x0006c4b9) bg_popup_preview_window_pane_cp01

0xe06d,	// (0x0006e1b9) popup_phob_thumbnail2_window_g1_ParamLimits

0xe06d,	// (0x0006e1b9) popup_phob_thumbnail2_window_g1

0xc112,	// (0x0006c25e) call2_cli_visual_pane

0x341a,	// (0x00063566) popup_call2_audio_conf_window_ParamLimits

0x341a,	// (0x00063566) popup_call2_audio_conf_window

0x343a,	// (0x00063586) popup_call2_audio_first_window_ParamLimits

0x343a,	// (0x00063586) popup_call2_audio_first_window

0x34d0,	// (0x0006361c) popup_call2_audio_in_window_ParamLimits

0x34d0,	// (0x0006361c) popup_call2_audio_in_window

0x3518,	// (0x00063664) popup_call2_audio_out_window_ParamLimits

0x3518,	// (0x00063664) popup_call2_audio_out_window

0x3582,	// (0x000636ce) popup_call2_audio_second_window_ParamLimits

0x3582,	// (0x000636ce) popup_call2_audio_second_window

0x35e8,	// (0x00063734) popup_call2_audio_wait_window_ParamLimits

0x35e8,	// (0x00063734) popup_call2_audio_wait_window

0xc112,	// (0x0006c25e) bg_popup_call2_act_pane_cp03

0xc34f,	// (0x0006c49b) list_conf_pane_cp

0xe079,	// (0x0006e1c5) popup_call2_audio_conf_window_t1

0xe087,	// (0x0006e1d3) list_single_graphic_popup_conf2_pane_ParamLimits

0xe087,	// (0x0006e1d3) list_single_graphic_popup_conf2_pane

0xd9f5,	// (0x0006db41) list_highlight_pane_cp04

0xe09a,	// (0x0006e1e6) list_single_graphic_popup_conf2_pane_g1

0xda06,	// (0x0006db52) list_single_graphic_popup_conf2_pane_g2

0x0001,

0xf522,	// (0x0006f66e) list_single_graphic_popup_conf2_pane_g

0xe0a4,	// (0x0006e1f0) list_single_graphic_popup_conf2_pane_t1

0xe0b2,	// (0x0006e1fe) bg_popup_call2_act_pane_cp01_ParamLimits

0xe0b2,	// (0x0006e1fe) bg_popup_call2_act_pane_cp01

0xe13c,	// (0x0006e288) call_type_pane_cp05_ParamLimits

0xe13c,	// (0x0006e288) call_type_pane_cp05

0xe190,	// (0x0006e2dc) popup_call2_audio_second_window_g1_ParamLimits

0xe190,	// (0x0006e2dc) popup_call2_audio_second_window_g1

0xe1e4,	// (0x0006e330) popup_call2_audio_second_window_g2_ParamLimits

0xe1e4,	// (0x0006e330) popup_call2_audio_second_window_g2

0x0002,

0xf527,	// (0x0006f673) popup_call2_audio_second_window_g_ParamLimits

0xf527,	// (0x0006f673) popup_call2_audio_second_window_g

0xe249,	// (0x0006e395) popup_call2_audio_second_window_t1_ParamLimits

0xe249,	// (0x0006e395) popup_call2_audio_second_window_t1

0xe304,	// (0x0006e450) popup_call2_audio_second_window_t2_ParamLimits

0xe304,	// (0x0006e450) popup_call2_audio_second_window_t2

0xe357,	// (0x0006e4a3) popup_call2_audio_second_window_t3_ParamLimits

0xe357,	// (0x0006e4a3) popup_call2_audio_second_window_t3

0x0003,

0xf52e,	// (0x0006f67a) popup_call2_audio_second_window_t_ParamLimits

0xf52e,	// (0x0006f67a) popup_call2_audio_second_window_t

0xc112,	// (0x0006c25e) bg_popup_call2_in_pane_cp02

0xc11c,	// (0x0006c268) call_type_pane_cp04

0xc124,	// (0x0006c270) popup_call2_audio_wait_window_g1

0xc12c,	// (0x0006c278) popup_call2_audio_wait_window_g2

0x0001,

0xf107,	// (0x0006f253) popup_call2_audio_wait_window_g

0xc134,	// (0x0006c280) popup_call2_audio_wait_window_t3

0xe44a,	// (0x0006e596) bg_popup_call2_act_pane_ParamLimits

0xe44a,	// (0x0006e596) bg_popup_call2_act_pane

0xe50a,	// (0x0006e656) call_type_pane_cp03_ParamLimits

0xe50a,	// (0x0006e656) call_type_pane_cp03

0xe56e,	// (0x0006e6ba) popup_call2_audio_first_window_g1_ParamLimits

0xe56e,	// (0x0006e6ba) popup_call2_audio_first_window_g1

0xe5de,	// (0x0006e72a) popup_call2_audio_first_window_g2_ParamLimits

0xe5de,	// (0x0006e72a) popup_call2_audio_first_window_g2

0xdc9e,	// (0x0006ddea) popup_call2_audio_first_window_g3_ParamLimits

0xdc9e,	// (0x0006ddea) popup_call2_audio_first_window_g3

0x0004,

0xf537,	// (0x0006f683) popup_call2_audio_first_window_g_ParamLimits

0xf537,	// (0x0006f683) popup_call2_audio_first_window_g

0xe6bc,	// (0x0006e808) popup_call2_audio_first_window_t1_ParamLimits

0xe6bc,	// (0x0006e808) popup_call2_audio_first_window_t1

0xe7bf,	// (0x0006e90b) popup_call2_audio_first_window_t4_ParamLimits

0xe7bf,	// (0x0006e90b) popup_call2_audio_first_window_t4

0xe8a2,	// (0x0006e9ee) popup_call2_audio_first_window_t5_ParamLimits

0xe8a2,	// (0x0006e9ee) popup_call2_audio_first_window_t5

0x0003,

0xf542,	// (0x0006f68e) popup_call2_audio_first_window_t_ParamLimits

0xf542,	// (0x0006f68e) popup_call2_audio_first_window_t

0xc365,	// (0x0006c4b1) bg_popup_call2_act_pane_g1

0xef17,	// (0x0006f063) popup_cale_lunar_info_window_t1

0xef25,	// (0x0006f071) popup_cale_lunar_info_window_t2

0xef33,	// (0x0006f07f) popup_cale_lunar_info_window_t3

0xc112,	// (0x0006c25e) bg_popup_call2_bubble_pane

0xe9a3,	// (0x0006eaef) bg_popup_call2_in_pane_cp01_ParamLimits

0xe9a3,	// (0x0006eaef) bg_popup_call2_in_pane_cp01

0xbdee,	// (0x0006bf3a) call_type_pane_cp02

0xe9eb,	// (0x0006eb37) popup_call2_audio_out_window_g1_ParamLimits

0xe9eb,	// (0x0006eb37) popup_call2_audio_out_window_g1

0xea17,	// (0x0006eb63) popup_call2_audio_out_window_g2_ParamLimits

0xea17,	// (0x0006eb63) popup_call2_audio_out_window_g2

0xea3f,	// (0x0006eb8b) popup_call2_audio_out_window_g3_ParamLimits

0xea3f,	// (0x0006eb8b) popup_call2_audio_out_window_g3

0x0003,

0xf54b,	// (0x0006f697) popup_call2_audio_out_window_g_ParamLimits

0xf54b,	// (0x0006f697) popup_call2_audio_out_window_g

0xea7a,	// (0x0006ebc6) popup_call2_audio_out_window_t1_ParamLimits

0xea7a,	// (0x0006ebc6) popup_call2_audio_out_window_t1

0xead9,	// (0x0006ec25) popup_call2_audio_out_window_t2_ParamLimits

0xead9,	// (0x0006ec25) popup_call2_audio_out_window_t2

0xeb2d,	// (0x0006ec79) popup_call2_audio_out_window_t3_ParamLimits

0xeb2d,	// (0x0006ec79) popup_call2_audio_out_window_t3

0xeb43,	// (0x0006ec8f) popup_call2_audio_out_window_t4_ParamLimits

0xeb43,	// (0x0006ec8f) popup_call2_audio_out_window_t4

0xeb59,	// (0x0006eca5) popup_call2_audio_out_window_t5_ParamLimits

0xeb59,	// (0x0006eca5) popup_call2_audio_out_window_t5

0x0005,

0xf554,	// (0x0006f6a0) popup_call2_audio_out_window_t_ParamLimits

0xf554,	// (0x0006f6a0) popup_call2_audio_out_window_t

0xebbd,	// (0x0006ed09) bg_popup_call2_in_pane_ParamLimits

0xebbd,	// (0x0006ed09) bg_popup_call2_in_pane

0xec19,	// (0x0006ed65) popup_call2_audio_in_window_g1_ParamLimits

0xec19,	// (0x0006ed65) popup_call2_audio_in_window_g1

0xec51,	// (0x0006ed9d) popup_call2_audio_in_window_g2_ParamLimits

0xec51,	// (0x0006ed9d) popup_call2_audio_in_window_g2

0xec89,	// (0x0006edd5) popup_call2_audio_in_window_g3_ParamLimits

0xec89,	// (0x0006edd5) popup_call2_audio_in_window_g3

0x0003,

0xf561,	// (0x0006f6ad) popup_call2_audio_in_window_g_ParamLimits

0xf561,	// (0x0006f6ad) popup_call2_audio_in_window_g

0xece1,	// (0x0006ee2d) popup_call2_audio_in_window_t1_ParamLimits

0xece1,	// (0x0006ee2d) popup_call2_audio_in_window_t1

0xed61,	// (0x0006eead) popup_call2_audio_in_window_t2_ParamLimits

0xed61,	// (0x0006eead) popup_call2_audio_in_window_t2

0xede1,	// (0x0006ef2d) popup_call2_audio_in_window_t3_ParamLimits

0xede1,	// (0x0006ef2d) popup_call2_audio_in_window_t3

0xedfb,	// (0x0006ef47) popup_call2_audio_in_window_t4_ParamLimits

0xedfb,	// (0x0006ef47) popup_call2_audio_in_window_t4

0xee0d,	// (0x0006ef59) popup_call2_audio_in_window_t5_ParamLimits

0xee0d,	// (0x0006ef59) popup_call2_audio_in_window_t5

0xee22,	// (0x0006ef6e) popup_call2_audio_in_window_t6_ParamLimits

0xee22,	// (0x0006ef6e) popup_call2_audio_in_window_t6

0x0005,

0xf56a,	// (0x0006f6b6) popup_call2_audio_in_window_t_ParamLimits

0xf56a,	// (0x0006f6b6) popup_call2_audio_in_window_t

0xc365,	// (0x0006c4b1) bg_popup_call2_in_pane_g1

0xef41,	// (0x0006f08d) popup_cale_lunar_info_window_t4

0x0003,

0xf5d2,	// (0x0006f71e) popup_cale_lunar_info_window_t

0xc36d,	// (0x0006c4b9) bg_popup_call2_rect_pane_ParamLimits

0xc36d,	// (0x0006c4b9) bg_popup_call2_rect_pane

0xc112,	// (0x0006c25e) call2_cli_visual_graphic_pane

0xc112,	// (0x0006c25e) call2_cli_visual_text_pane

0x9f3a,	// (0x0006a086) smil_status_volume_pane_g3

0x0002,

0xc4d9,	// (0x0006c625) call2_cli_visual_graphic_pane_g1

0xc4d9,	// (0x0006c625) call2_cli_visual_graphic_pane_g2

0xc4d9,	// (0x0006c625) call2_cli_visual_graphic_pane_g3

0x0002,

0xf577,	// (0x0006f6c3) call2_cli_visual_graphic_pane_g

0xee37,	// (0x0006ef83) bg_popup_call2_rect_pane_g1

0xc577,	// (0x0006c6c3) bg_popup_call2_rect_pane_g2

0xee3f,	// (0x0006ef8b) bg_popup_call2_rect_pane_g3

0xee47,	// (0x0006ef93) bg_popup_call2_rect_pane_g4

0xee4f,	// (0x0006ef9b) bg_popup_call2_rect_pane_g5

0xee57,	// (0x0006efa3) bg_popup_call2_rect_pane_g6

0xee5f,	// (0x0006efab) bg_popup_call2_rect_pane_g7

0xee67,	// (0x0006efb3) bg_popup_call2_rect_pane_g8

0xee6f,	// (0x0006efbb) bg_popup_call2_rect_pane_g9

0x0008,

0xf57e,	// (0x0006f6ca) bg_popup_call2_rect_pane_g

0xee77,	// (0x0006efc3) bg_popup_call2_bubble_pane_g1

0xee7f,	// (0x0006efcb) bg_popup_call2_bubble_pane_g2

0xee87,	// (0x0006efd3) bg_popup_call2_bubble_pane_g3

0xee8f,	// (0x0006efdb) bg_popup_call2_bubble_pane_g4

0xee97,	// (0x0006efe3) bg_popup_call2_bubble_pane_g5

0xee9f,	// (0x0006efeb) bg_popup_call2_bubble_pane_g6

0xeea7,	// (0x0006eff3) bg_popup_call2_bubble_pane_g7

0xeeaf,	// (0x0006effb) bg_popup_call2_bubble_pane_g8

0xeeb7,	// (0x0006f003) bg_popup_call2_bubble_pane_g9

0x0008,

0xf591,	// (0x0006f6dd) bg_popup_call2_bubble_pane_g

0x115c,	// (0x000612a8) aid_cale_week_size_cell_pane

0x15dc,	// (0x00061728) aid_cams_cif_uncrop_pane_ParamLimits

0x15dc,	// (0x00061728) aid_cams_cif_uncrop_pane

0x1799,	// (0x000618e5) aid_cams_size_cell_ParamLimits

0x1799,	// (0x000618e5) aid_cams_size_cell

0x17ad,	// (0x000618f9) grid_cams_pane_ParamLimits

0x17c7,	// (0x00061913) linegrid_cams_pane_ParamLimits

0x1905,	// (0x00061a51) call_video_pane_t1

0x1923,	// (0x00061a6f) call_video_pane_t2

0x0001,

0xf27e,	// (0x0006f3ca) call_video_pane_t

0x1d56,	// (0x00061ea2) aid_cale_month_size_cell_pane_ParamLimits

0x1d56,	// (0x00061ea2) aid_cale_month_size_cell_pane

0xf608,	// (0x0006f754) smil_status_volume_pane_g

0x9f47,	// (0x0006a093) volume_smil_pane_ParamLimits

0x9c82,	// (0x00069dce) aid_popup2_width_pane

0x10b9,	// (0x00061205) cell_qdial_pane_g4_ParamLimits

0x10b9,	// (0x00061205) cell_qdial_pane_g4

0x2944,	// (0x00062a90) aid_blid_cardinal_pane_ParamLimits

0x2950,	// (0x00062a9c) aid_blid_destination_pane_ParamLimits

0x2950,	// (0x00062a9c) aid_blid_destination_pane

0xc36d,	// (0x0006c4b9) bg_popup_call_poc_act_pane_ParamLimits

0xc36d,	// (0x0006c4b9) bg_popup_call_poc_act_pane

0xc36d,	// (0x0006c4b9) bg_popup_call_poc_inact_pane_ParamLimits

0xc36d,	// (0x0006c4b9) bg_popup_call_poc_inact_pane

0xeec7,	// (0x0006f013) bg_popup_call_poc_act_pane_g1

0xeecf,	// (0x0006f01b) bg_popup_call_poc_act_pane_g2

0xeed7,	// (0x0006f023) bg_popup_call_poc_act_pane_g3

0xee8f,	// (0x0006efdb) bg_popup_call_poc_act_pane_g4

0xee97,	// (0x0006efe3) bg_popup_call_poc_act_pane_g5

0xeedf,	// (0x0006f02b) bg_popup_call_poc_act_pane_g6

0xeea7,	// (0x0006eff3) bg_popup_call_poc_act_pane_g7

0xeee7,	// (0x0006f033) bg_popup_call_poc_act_pane_g8

0xc112,	// (0x0006c25e) main_usb_pane

0x9f03,	// (0x0006a04f) popup_cale_lunar_info_window

0x1bed,	// (0x00061d39) im_reading_pane_t1_ParamLimits

0xd2bb,	// (0x0006d407) list_im_pane_ParamLimits

0xd2cc,	// (0x0006d418) scroll_pane_cp07_ParamLimits

0xc112,	// (0x0006c25e) grid_highlight_pane_cp012

0xc36d,	// (0x0006c4b9) mup_scale_pane_ParamLimits

0xddc0,	// (0x0006df0c) main_usb_pane_g1_ParamLimits

0xddc0,	// (0x0006df0c) main_usb_pane_g1

0x363f,	// (0x0006378b) main_usb_pane_g2_ParamLimits

0x363f,	// (0x0006378b) main_usb_pane_g2

0x0001,

0xf5bb,	// (0x0006f707) main_usb_pane_g_ParamLimits

0xf5bb,	// (0x0006f707) main_usb_pane_g

0x3655,	// (0x000637a1) main_usb_pane_t1_ParamLimits

0x3655,	// (0x000637a1) main_usb_pane_t1

0x3667,	// (0x000637b3) main_usb_pane_t2_ParamLimits

0x3667,	// (0x000637b3) main_usb_pane_t2

0x3679,	// (0x000637c5) main_usb_pane_t3_ParamLimits

0x3679,	// (0x000637c5) main_usb_pane_t3

0x368b,	// (0x000637d7) main_usb_pane_t4_ParamLimits

0x368b,	// (0x000637d7) main_usb_pane_t4

0x369d,	// (0x000637e9) main_usb_pane_t5_ParamLimits

0x369d,	// (0x000637e9) main_usb_pane_t5

0x36af,	// (0x000637fb) main_usb_pane_t6_ParamLimits

0x36af,	// (0x000637fb) main_usb_pane_t6

0x0005,

0xf5c0,	// (0x0006f70c) main_usb_pane_t_ParamLimits

0x28e9,	// (0x00062a35) aid_text_placing

0x28f2,	// (0x00062a3e) main_location2_pane_t1_ParamLimits

0x2906,	// (0x00062a52) main_location2_pane_t2_ParamLimits

0x291a,	// (0x00062a66) main_location2_pane_t3_ParamLimits

0x2930,	// (0x00062a7c) main_location2_pane_t4_ParamLimits

0x2930,	// (0x00062a7c) main_location2_pane_t4

0xf3df,	// (0x0006f52b) main_location2_pane_t_ParamLimits

0xc3b1,	// (0x0006c4fd) find_pinb_pane_g2_ParamLimits

0xc3b1,	// (0x0006c4fd) find_pinb_pane_g2

0x0001,

0xf12d,	// (0x0006f279) find_pinb_pane_g_ParamLimits

0xf12d,	// (0x0006f279) find_pinb_pane_g

0xc3bd,	// (0x0006c509) find_pinb_pane_t1_ParamLimits

0xc3cf,	// (0x0006c51b) find_pinb_pane_t2_ParamLimits

0xf132,	// (0x0006f27e) find_pinb_pane_t_ParamLimits

0xc112,	// (0x0006c25e) main_call3_pane

0x20ba,	// (0x00062206) cale_month_day_heading_pane_t1_ParamLimits

0x2118,	// (0x00062264) cale_month_day_heading_pane_t2_ParamLimits

0x217d,	// (0x000622c9) cale_month_day_heading_pane_t3_ParamLimits

0x21e2,	// (0x0006232e) cale_month_day_heading_pane_t4_ParamLimits

0x2247,	// (0x00062393) cale_month_day_heading_pane_t5_ParamLimits

0x22bc,	// (0x00062408) cale_month_day_heading_pane_t6_ParamLimits

0x2331,	// (0x0006247d) cale_month_day_heading_pane_t7_ParamLimits

0xf2b6,	// (0x0006f402) cale_month_day_heading_pane_t_ParamLimits

0xd536,	// (0x0006d682) smil_status_volume_pane

0x3136,	// (0x00063282) postcard_address_pane_ParamLimits

0x3136,	// (0x00063282) postcard_address_pane

0x3148,	// (0x00063294) postcard_message_pane_ParamLimits

0x3148,	// (0x00063294) postcard_message_pane

0x3622,	// (0x0006376e) call2_cli_visual_pane_t1_ParamLimits

0x3622,	// (0x0006376e) call2_cli_visual_pane_t1

0x3e36,	// (0x00063f82) postcard_message_pane_t1_ParamLimits

0x3e36,	// (0x00063f82) postcard_message_pane_t1

0x3e1f,	// (0x00063f6b) postcard_address_pane_t1_ParamLimits

0x3e1f,	// (0x00063f6b) postcard_address_pane_t1

0x3e0b,	// (0x00063f57) popup_call3_audio_in_window_ParamLimits

0x3e0b,	// (0x00063f57) popup_call3_audio_in_window

0x3c9a,	// (0x00063de6) bg_popup_call3_in_pane_ParamLimits

0x3c9a,	// (0x00063de6) bg_popup_call3_in_pane

0x3d0c,	// (0x00063e58) popup_call3_audio_in_window_g1_ParamLimits

0x3d0c,	// (0x00063e58) popup_call3_audio_in_window_g1

0x3d2c,	// (0x00063e78) popup_call3_audio_in_window_g2_ParamLimits

0x3d2c,	// (0x00063e78) popup_call3_audio_in_window_g2

0x3d4c,	// (0x00063e98) popup_call3_audio_in_window_g3_ParamLimits

0x3d4c,	// (0x00063e98) popup_call3_audio_in_window_g3

0x0003,

0xf60f,	// (0x0006f75b) popup_call3_audio_in_window_g_ParamLimits

0xf60f,	// (0x0006f75b) popup_call3_audio_in_window_g

0x3d7d,	// (0x00063ec9) popup_call3_audio_in_window_t1_ParamLimits

0x3d7d,	// (0x00063ec9) popup_call3_audio_in_window_t1

0x3dbb,	// (0x00063f07) popup_call3_audio_in_window_t2_ParamLimits

0x3dbb,	// (0x00063f07) popup_call3_audio_in_window_t2

0x3df9,	// (0x00063f45) popup_call3_audio_in_window_t3_ParamLimits

0x3df9,	// (0x00063f45) popup_call3_audio_in_window_t3

0x0002,

0xf618,	// (0x0006f764) popup_call3_audio_in_window_t_ParamLimits

0xf618,	// (0x0006f764) popup_call3_audio_in_window_t

0xdbdf,	// (0x0006dd2b) bg_popup_call3_rect_pane

0xee37,	// (0x0006ef83) bg_popup_call3_rect_pane_g1

0xc577,	// (0x0006c6c3) bg_popup_call3_rect_pane_g2

0xee3f,	// (0x0006ef8b) bg_popup_call3_rect_pane_g3

0xee47,	// (0x0006ef93) bg_popup_call3_rect_pane_g4

0xee4f,	// (0x0006ef9b) bg_popup_call3_rect_pane_g5

0xee57,	// (0x0006efa3) bg_popup_call3_rect_pane_g6

0xee5f,	// (0x0006efab) bg_popup_call3_rect_pane_g7

0x2d22,	// (0x00062e6e) mup_visualizer_osc_pane

0xdcac,	// (0x0006ddf8) mup_visualizer_spec_pane

0x3cca,	// (0x00063e16) call3_video_qcif_pane_ParamLimits

0x3cca,	// (0x00063e16) call3_video_qcif_pane

0x3cdb,	// (0x00063e27) call3_video_qcif_uncrop_pane_ParamLimits

0x3cdb,	// (0x00063e27) call3_video_qcif_uncrop_pane

0x3ce7,	// (0x00063e33) call3_video_subqcif_pane_ParamLimits

0x3ce7,	// (0x00063e33) call3_video_subqcif_pane

0x3cfb,	// (0x00063e47) call3_video_subqcif_uncrop_pane_ParamLimits

0x3cfb,	// (0x00063e47) call3_video_subqcif_uncrop_pane

0x3d6c,	// (0x00063eb8) popup_call3_audio_in_window_g4_ParamLimits

0x3d6c,	// (0x00063eb8) popup_call3_audio_in_window_g4

0x3c89,	// (0x00063dd5) mup_spec_half_pane

0x3c92,	// (0x00063dde) mup_spec_half_pane_cp

0xf098,	// (0x0006f1e4) mup_osc_middle_pane

0xf0a1,	// (0x0006f1ed) mup_visualizer_osc_pane_g1

0x3c69,	// (0x00063db5) mup_spec_bar_pane_ParamLimits

0x3c69,	// (0x00063db5) mup_spec_bar_pane

0xf085,	// (0x0006f1d1) mup_spec_bar_pane_g1

0xf08f,	// (0x0006f1db) mup_spec_bar_pane_g2

0x0001,

0x0024,	// (0x00060170) mup_spec_bar_pane_g

0x115c,	// (0x000612a8) aid_cale_week_size_cell_pane_ParamLimits

0x116f,	// (0x000612bb) bg_cale_heading_pane_ParamLimits

0xc5ab,	// (0x0006c6f7) bg_cale_pane_cp01_ParamLimits

0x1187,	// (0x000612d3) cale_week_corner_pane_ParamLimits

0x1198,	// (0x000612e4) cale_week_day_heading_pane_ParamLimits

0x11b0,	// (0x000612fc) cale_week_scroll_pane_g1_ParamLimits

0x11c5,	// (0x00061311) cale_week_scroll_pane_g2_ParamLimits

0x11d6,	// (0x00061322) cale_week_scroll_pane_g3_ParamLimits

0x11e7,	// (0x00061333) cale_week_scroll_pane_g4_ParamLimits

0x11f8,	// (0x00061344) cale_week_scroll_pane_g5_ParamLimits

0x120b,	// (0x00061357) cale_week_scroll_pane_g6_ParamLimits

0x121e,	// (0x0006136a) cale_week_scroll_pane_g7_ParamLimits

0x1231,	// (0x0006137d) cale_week_scroll_pane_g8_ParamLimits

0x1244,	// (0x00061390) cale_week_scroll_pane_g9_ParamLimits

0x1255,	// (0x000613a1) cale_week_scroll_pane_g10_ParamLimits

0x1266,	// (0x000613b2) cale_week_scroll_pane_g11_ParamLimits

0x1277,	// (0x000613c3) cale_week_scroll_pane_g12_ParamLimits

0x1288,	// (0x000613d4) cale_week_scroll_pane_g13_ParamLimits

0x1299,	// (0x000613e5) cale_week_scroll_pane_g14_ParamLimits

0x12aa,	// (0x000613f6) cale_week_scroll_pane_g15_ParamLimits

0xf1be,	// (0x0006f30a) cale_week_scroll_pane_g_ParamLimits

0x12bf,	// (0x0006140b) cale_week_time_pane_ParamLimits

0x12d2,	// (0x0006141e) grid_cale_week_pane_ParamLimits

0xc5c4,	// (0x0006c710) listscroll_cale_week_pane_t1

0x12e7,	// (0x00061433) scroll_pane_cp08_ParamLimits

0x1d97,	// (0x00061ee3) cale_month_corner_pane_ParamLimits

0xd4e2,	// (0x0006d62e) cale_month_pane_t1

0x2079,	// (0x000621c5) cale_month_week_pane_ParamLimits

0x2750,	// (0x0006289c) popup_call_status_window_g1_ParamLimits

0x2764,	// (0x000628b0) popup_call_status_window_g2_ParamLimits

0x2778,	// (0x000628c4) popup_call_status_window_g3_ParamLimits

0xf366,	// (0x0006f4b2) popup_call_status_window_g_ParamLimits

0xd952,	// (0x0006da9e) aid_call2_pane

0x2f9e,	// (0x000630ea) msg_header_pane_g1

0x3136,	// (0x00063282) postcard_address2_pane_ParamLimits

0x3136,	// (0x00063282) postcard_address2_pane

0x3148,	// (0x00063294) postcard_message2_pane_ParamLimits

0x3148,	// (0x00063294) postcard_message2_pane

0x3c16,	// (0x00063d62) message2_row_pane_ParamLimits

0x3c16,	// (0x00063d62) message2_row_pane

0x3c35,	// (0x00063d81) address2_row_pane_ParamLimits

0x3c35,	// (0x00063d81) address2_row_pane

0xf053,	// (0x0006f19f) postcard_message2_row_pane_g1

0xf05b,	// (0x0006f1a7) postcard_message2_row_pane_t1

0xf053,	// (0x0006f19f) address2_row_pane_g1

0xf05b,	// (0x0006f1a7) address2_row_pane_t1

0x9d98,	// (0x00069ee4) aid_size_cell_vorec

0xc112,	// (0x0006c25e) main_rss_pane

0x3c48,	// (0x00063d94) rss_list_single_pane_ParamLimits

0x3c48,	// (0x00063d94) rss_list_single_pane

0xf069,	// (0x0006f1b5) rss_list_single_pane_t1

0xf077,	// (0x0006f1c3) rss_list_single_pane_t2

0x0001,

0x001f,	// (0x0006016b) rss_list_single_pane_t

0xc112,	// (0x0006c25e) main_camera2_pane

0xc112,	// (0x0006c25e) main_video2_pane

0x3eaf,	// (0x00063ffb) cams_zoom_pane_cp2_ParamLimits

0x3eaf,	// (0x00063ffb) cams_zoom_pane_cp2

0x3ecf,	// (0x0006401b) image2_vga_pane_ParamLimits

0x3ecf,	// (0x0006401b) image2_vga_pane

0x3f20,	// (0x0006406c) main_camera2_pane_g1_ParamLimits

0x3f20,	// (0x0006406c) main_camera2_pane_g1

0x3f40,	// (0x0006408c) main_camera2_pane_g2_ParamLimits

0x3f40,	// (0x0006408c) main_camera2_pane_g2

0x3f60,	// (0x000640ac) main_camera2_pane_g3_ParamLimits

0x3f60,	// (0x000640ac) main_camera2_pane_g3

0x3f80,	// (0x000640cc) main_camera2_pane_g4_ParamLimits

0x3f80,	// (0x000640cc) main_camera2_pane_g4

0x3fa0,	// (0x000640ec) main_camera2_pane_g5_ParamLimits

0x3fa0,	// (0x000640ec) main_camera2_pane_g5

0x3fc0,	// (0x0006410c) main_camera2_pane_g6_ParamLimits

0x3fc0,	// (0x0006410c) main_camera2_pane_g6

0x3fe0,	// (0x0006412c) main_camera2_pane_g7_ParamLimits

0x3fe0,	// (0x0006412c) main_camera2_pane_g7

0x4000,	// (0x0006414c) main_camera2_pane_g8_ParamLimits

0x4000,	// (0x0006414c) main_camera2_pane_g8

0x0008,

0xf61f,	// (0x0006f76b) main_camera2_pane_g_ParamLimits

0xf61f,	// (0x0006f76b) main_camera2_pane_g

0x4040,	// (0x0006418c) main_camera2_pane_t1_ParamLimits

0x4040,	// (0x0006418c) main_camera2_pane_t1

0x4075,	// (0x000641c1) main_camera2_pane_t2_ParamLimits

0x4075,	// (0x000641c1) main_camera2_pane_t2

0x409b,	// (0x000641e7) main_camera2_pane_t3_ParamLimits

0x409b,	// (0x000641e7) main_camera2_pane_t3

0x40f9,	// (0x00064245) main_camera2_pane_t4_ParamLimits

0x40f9,	// (0x00064245) main_camera2_pane_t4

0x0006,

0xf632,	// (0x0006f77e) main_camera2_pane_t_ParamLimits

0xf632,	// (0x0006f77e) main_camera2_pane_t

0x418b,	// (0x000642d7) cams_zoom_pane_cp4_ParamLimits

0x418b,	// (0x000642d7) cams_zoom_pane_cp4

0x41a1,	// (0x000642ed) image2_cif_pane_ParamLimits

0x41a1,	// (0x000642ed) image2_cif_pane

0x41cc,	// (0x00064318) image2_subqcif_pane_ParamLimits

0x41cc,	// (0x00064318) image2_subqcif_pane

0x41e6,	// (0x00064332) main_video2_pane_g1_ParamLimits

0x41e6,	// (0x00064332) main_video2_pane_g1

0x4200,	// (0x0006434c) main_video2_pane_g2_ParamLimits

0x4200,	// (0x0006434c) main_video2_pane_g2

0x4216,	// (0x00064362) main_video2_pane_g3_ParamLimits

0x4216,	// (0x00064362) main_video2_pane_g3

0x422c,	// (0x00064378) main_video2_pane_g4_ParamLimits

0x422c,	// (0x00064378) main_video2_pane_g4

0x4242,	// (0x0006438e) main_video2_pane_g5_ParamLimits

0x4242,	// (0x0006438e) main_video2_pane_g5

0x4258,	// (0x000643a4) main_video2_pane_g6_ParamLimits

0x4258,	// (0x000643a4) main_video2_pane_g6

0x0005,

0xf641,	// (0x0006f78d) main_video2_pane_g_ParamLimits

0xf641,	// (0x0006f78d) main_video2_pane_g

0x4272,	// (0x000643be) main_video2_pane_t1_ParamLimits

0x4272,	// (0x000643be) main_video2_pane_t1

0x4296,	// (0x000643e2) main_video2_pane_t2_ParamLimits

0x4296,	// (0x000643e2) main_video2_pane_t2

0x42e4,	// (0x00064430) main_video2_pane_t3_ParamLimits

0x42e4,	// (0x00064430) main_video2_pane_t3

0x0002,

0xf64e,	// (0x0006f79a) main_video2_pane_t_ParamLimits

0xf64e,	// (0x0006f79a) main_video2_pane_t

0x376c,	// (0x000638b8) call_muted_g2

0x0001,

0xf603,	// (0x0006f74f) call_muted_g

0xc112,	// (0x0006c25e) main_mup2_pane

0x432c,	// (0x00064478) main_mup2_pane_g1_ParamLimits

0x432c,	// (0x00064478) main_mup2_pane_g1

0x4338,	// (0x00064484) main_mup2_pane_g2_ParamLimits

0x4338,	// (0x00064484) main_mup2_pane_g2

0x9fb5,	// (0x0006a101) main_mup_pane_g13_cp1

0x9fbd,	// (0x0006a109) mup_volume_pane_cp1

0x4354,	// (0x000644a0) main_mup2_pane_g4_ParamLimits

0x4354,	// (0x000644a0) main_mup2_pane_g4

0x4366,	// (0x000644b2) main_mup2_pane_g5_ParamLimits

0x4366,	// (0x000644b2) main_mup2_pane_g5

0x4378,	// (0x000644c4) main_mup2_pane_g6_ParamLimits

0x4378,	// (0x000644c4) main_mup2_pane_g6

0x438a,	// (0x000644d6) main_mup2_pane_g7_ParamLimits

0x438a,	// (0x000644d6) main_mup2_pane_g7

0x0006,

0xf655,	// (0x0006f7a1) main_mup2_pane_g_ParamLimits

0xf655,	// (0x0006f7a1) main_mup2_pane_g

0x43a2,	// (0x000644ee) main_mup2_pane_t1_ParamLimits

0x43a2,	// (0x000644ee) main_mup2_pane_t1

0x43b8,	// (0x00064504) main_mup2_pane_t2_ParamLimits

0x43b8,	// (0x00064504) main_mup2_pane_t2

0x43ce,	// (0x0006451a) main_mup2_pane_t3_ParamLimits

0x43ce,	// (0x0006451a) main_mup2_pane_t3

0x43e4,	// (0x00064530) main_mup2_pane_t4_ParamLimits

0x43e4,	// (0x00064530) main_mup2_pane_t4

0x43fc,	// (0x00064548) main_mup2_pane_t5_ParamLimits

0x43fc,	// (0x00064548) main_mup2_pane_t5

0x4414,	// (0x00064560) main_mup2_pane_t6_ParamLimits

0x4414,	// (0x00064560) main_mup2_pane_t6

0x0005,

0xf664,	// (0x0006f7b0) main_mup2_pane_t_ParamLimits

0xf664,	// (0x0006f7b0) main_mup2_pane_t

0x4444,	// (0x00064590) mup2_visualizer_pane_ParamLimits

0x4444,	// (0x00064590) mup2_visualizer_pane

0x4472,	// (0x000645be) mup_progress_pane_cp_ParamLimits

0x4472,	// (0x000645be) mup_progress_pane_cp

0x9fa0,	// (0x0006a0ec) mup_volume_pane_cp_ParamLimits

0x9fa0,	// (0x0006a0ec) mup_volume_pane_cp

0x4486,	// (0x000645d2) mup2_visualizer_pane_g1_ParamLimits

0x4486,	// (0x000645d2) mup2_visualizer_pane_g1

0x449d,	// (0x000645e9) mup2_visualizer_pane_g2_ParamLimits

0x449d,	// (0x000645e9) mup2_visualizer_pane_g2

0x44a9,	// (0x000645f5) mup2_visualizer_pane_g3_ParamLimits

0x44a9,	// (0x000645f5) mup2_visualizer_pane_g3

0x0002,

0xf671,	// (0x0006f7bd) mup2_visualizer_pane_g_ParamLimits

0xf671,	// (0x0006f7bd) mup2_visualizer_pane_g

0xdf09,	// (0x0006e055) aid_size_cell_fmradio

0x391e,	// (0x00063a6a) aid_height_parent_landcape

0xd34a,	// (0x0006d496) wml_content_pane_cp

0xd352,	// (0x0006d49e) wml_tabs_pane

0xd35b,	// (0x0006d4a7) popup_wml_miniature_window

0xd363,	// (0x0006d4af) scroll_pane_cp021

0xd377,	// (0x0006d4c3) wml_content_pane_comp8

0xc112,	// (0x0006c25e) bg_popup_sub_pane_cp05

0x44c7,	// (0x00064613) popup_wml_miniature_window_g1

0x44cf,	// (0x0006461b) wml_miniature_view_pane

0x44d7,	// (0x00064623) aid_size_wml_view

0x44df,	// (0x0006462b) wml_miniature_view_pane_g1

0x44e8,	// (0x00064634) wml_miniature_view_pane_g2

0x44f1,	// (0x0006463d) wml_miniature_view_pane_g3

0x44f9,	// (0x00064645) wml_miniature_view_pane_g4

0x4501,	// (0x0006464d) wml_miniature_view_pane_g5

0x4509,	// (0x00064655) wml_miniature_view_pane_g6

0x4511,	// (0x0006465d) wml_miniature_view_pane_g7

0x4519,	// (0x00064665) wml_miniature_view_pane_g8

0x0007,

0xf678,	// (0x0006f7c4) wml_miniature_view_pane_g

0x4521,	// (0x0006466d) background_graphic_ParamLimits

0x4521,	// (0x0006466d) background_graphic

0x452d,	// (0x00064679) wml_tabs_2_pane

0x4536,	// (0x00064682) wml_tabs_3_pane_ParamLimits

0x4536,	// (0x00064682) wml_tabs_3_pane

0x4548,	// (0x00064694) wml_tabs_4_pane_ParamLimits

0x4548,	// (0x00064694) wml_tabs_4_pane

0x455e,	// (0x000646aa) wml_tabs_5_pane_ParamLimits

0x455e,	// (0x000646aa) wml_tabs_5_pane

0x4578,	// (0x000646c4) wml_tabs_pane_g2_ParamLimits

0x4578,	// (0x000646c4) wml_tabs_pane_g2

0x458c,	// (0x000646d8) wml_tabs_pane_g3_ParamLimits

0x458c,	// (0x000646d8) wml_tabs_pane_g3

0x45a0,	// (0x000646ec) wml_tabs_2_active_pane_ParamLimits

0x45a0,	// (0x000646ec) wml_tabs_2_active_pane

0x45b4,	// (0x00064700) wml_tabs_2_passive_pane_ParamLimits

0x45b4,	// (0x00064700) wml_tabs_2_passive_pane

0x45c8,	// (0x00064714) wml_tabs_3_active_pane_cp_ParamLimits

0x45c8,	// (0x00064714) wml_tabs_3_active_pane_cp

0x45dd,	// (0x00064729) wml_tabs_3_passive_pane_ParamLimits

0x45dd,	// (0x00064729) wml_tabs_3_passive_pane

0x45f0,	// (0x0006473c) wml_tabs_3_passive_pane_cp_ParamLimits

0x45f0,	// (0x0006473c) wml_tabs_3_passive_pane_cp

0x4607,	// (0x00064753) tabs_4_active_pane

0x460f,	// (0x0006475b) tabs_4_passive_pane

0x4619,	// (0x00064765) tabs_4_passive_pane_cp

0x4621,	// (0x0006476d) tabs_4_passive_pane_cp2

0xeebf,	// (0x0006f00b) aid_height_text

0x2cf4,	// (0x00062e40) mup_volume_cont_pane_ParamLimits

0x2cf4,	// (0x00062e40) mup_volume_cont_pane

0x0d89,	// (0x00060ed5) aid_size_cell_pinb

0xc39d,	// (0x0006c4e9) aid_size_list_pinb

0x445e,	// (0x000645aa) mup2_volume_cont_pane_ParamLimits

0x445e,	// (0x000645aa) mup2_volume_cont_pane

0x9f8c,	// (0x0006a0d8) mup2_volume_cont_pane_g1_ParamLimits

0x9f8c,	// (0x0006a0d8) mup2_volume_cont_pane_g1

0x0a69,	// (0x00060bb5) aid_size_cell_touch_ParamLimits

0x0a69,	// (0x00060bb5) aid_size_cell_touch

0x0c77,	// (0x00060dc3) touch_pane_ParamLimits

0x0c77,	// (0x00060dc3) touch_pane

0x9cf6,	// (0x00069e42) main_rss2_pane

0x4634,	// (0x00064780) listscroll_rss2_pane

0x463d,	// (0x00064789) rss2_navigation_pane

0x4645,	// (0x00064791) list_rss2_pane

0xda92,	// (0x0006dbde) scroll_pane_cp22

0x464d,	// (0x00064799) rss2_navigation_pane_g1

0x4656,	// (0x000647a2) rss2_navigation_pane_g2

0x465e,	// (0x000647aa) rss2_navigation_pane_g3

0x0002,

0xf689,	// (0x0006f7d5) rss2_navigation_pane_g

0x4666,	// (0x000647b2) rss2_navigation_pane_t1

0x4674,	// (0x000647c0) rss2_list_single_pane_ParamLimits

0x4674,	// (0x000647c0) rss2_list_single_pane

0x468c,	// (0x000647d8) rss2_list_single_pane_t2

0x469a,	// (0x000647e6) rss2_list_single_pane_t3_ParamLimits

0x469a,	// (0x000647e6) rss2_list_single_pane_t3

0x46b7,	// (0x00064803) rss2_list_single_pane_t4

0x252d,	// (0x00062679) smil_status_pane_g1

0x9ce8,	// (0x00069e34) main_image2_pane_ParamLimits

0x9ce8,	// (0x00069e34) main_image2_pane

0x4020,	// (0x0006416c) main_camera2_pane_g9_ParamLimits

0x4020,	// (0x0006416c) main_camera2_pane_g9

0x414e,	// (0x0006429a) main_camera2_pane_t5_ParamLimits

0x414e,	// (0x0006429a) main_camera2_pane_t5

0x9f5c,	// (0x0006a0a8) main_camera2_pane_t6_ParamLimits

0x9f5c,	// (0x0006a0a8) main_camera2_pane_t6

0x46c5,	// (0x00064811) main_image2_pane_g1_ParamLimits

0x46c5,	// (0x00064811) main_image2_pane_g1

0x3378,	// (0x000634c4) smil2_video_pane_ParamLimits

0x3378,	// (0x000634c4) smil2_video_pane

0x9c9e,	// (0x00069dea) aid_zoom_text_primary_cp

0x9cde,	// (0x00069e2a) popup_preview_fixed_window

0xd2b3,	// (0x0006d3ff) im_reading_pane_g1

0x3e97,	// (0x00063fe3) cams2_bc_adjust_pane_cp_ParamLimits

0x3e97,	// (0x00063fe3) cams2_bc_adjust_pane_cp

0x417d,	// (0x000642c9) cams2_bc_adjust_pane_ParamLimits

0x417d,	// (0x000642c9) cams2_bc_adjust_pane

0x9fc5,	// (0x0006a111) cams2_bc_adjust_pane_g1

0x9fcd,	// (0x0006a119) cams2_slider_pane

0x9fd6,	// (0x0006a122) cams2_slider_pane_g1

0x9fdf,	// (0x0006a12b) cams2_slider_pane_g2

0x0006,

0xf690,	// (0x0006f7dc) cams2_slider_pane_g

0x0e48,	// (0x00060f94) calc_display_pane_ParamLimits

0x0e70,	// (0x00060fbc) calc_paper_pane_ParamLimits

0x0e93,	// (0x00060fdf) grid_calc_pane_ParamLimits

0x9e8a,	// (0x00069fd6) popup_clock_digital_window_t1_ParamLimits

0xdea6,	// (0x0006dff2) main_image_pane_t1

0x0e2a,	// (0x00060f76) aid_size_cell_calc_ParamLimits

0x0e2a,	// (0x00060f76) aid_size_cell_calc

0x3964,	// (0x00063ab0) popup_blid_sat_info2_window_ParamLimits

0x3964,	// (0x00063ab0) popup_blid_sat_info2_window

0x46e3,	// (0x0006482f) aid_size_cell_blid

0x46eb,	// (0x00064837) bg_popup_window_pane_cp07

0x470e,	// (0x0006485a) grid_popup_blid_pane

0x4718,	// (0x00064864) heading_pane_cp05_ParamLimits

0x4718,	// (0x00064864) heading_pane_cp05

0x47e2,	// (0x0006492e) cell_popup_blid_pane_ParamLimits

0x47e2,	// (0x0006492e) cell_popup_blid_pane

0x4808,	// (0x00064954) cell_popup_blid_pane_g1

0x4810,	// (0x0006495c) cell_popup_blid_pane_t1

0x442e,	// (0x0006457a) mup2_indicator_pane_ParamLimits

0x442e,	// (0x0006457a) mup2_indicator_pane

0xdbdf,	// (0x0006dd2b) mup2_visualizer_osc_pane

0x44b5,	// (0x00064601) mup2_visualizer_spec_pane_ParamLimits

0x44b5,	// (0x00064601) mup2_visualizer_spec_pane

0x481e,	// (0x0006496a) mup2_spec_half_pane

0x4827,	// (0x00064973) mup2_spec_half_pane_cp

0x482f,	// (0x0006497b) mup2_spec_bar_pane_ParamLimits

0x482f,	// (0x0006497b) mup2_spec_bar_pane

0xf085,	// (0x0006f1d1) mup2_spec_bar_pane_g1

0xf08f,	// (0x0006f1db) mup2_spec_bar_pane_g2

0x0001,

0x0024,	// (0x00060170) mup2_spec_bar_pane_g

0x484f,	// (0x0006499b) mup2_osc_middle_pane

0xf0a1,	// (0x0006f1ed) mup2_visualizer_osc_pane_g1

0xbd21,	// (0x0006be6d) popup_number_entry_window_t1_ParamLimits

0xbd34,	// (0x0006be80) popup_number_entry_window_t2_ParamLimits

0xbd46,	// (0x0006be92) popup_number_entry_window_t3_ParamLimits

0x0cc9,	// (0x00060e15) popup_number_entry_window_t5_ParamLimits

0x0cc9,	// (0x00060e15) popup_number_entry_window_t5

0xf0d8,	// (0x0006f224) popup_number_entry_window_t_ParamLimits

0xbd58,	// (0x0006bea4) text_title_cp2_ParamLimits

0x9ec9,	// (0x0006a015) aid_hotspot_pointer_text2_pane

0x9eef,	// (0x0006a03b) main_viewer_pane_g9_ParamLimits

0x9eef,	// (0x0006a03b) main_viewer_pane_g9

0xd4e2,	// (0x0006d62e) cale_month_pane_t1_ParamLimits

0xd549,	// (0x0006d695) bg_cale_pane_ParamLimits

0xd561,	// (0x0006d6ad) list_cale_pane_ParamLimits

0xc5c4,	// (0x0006c710) listscroll_cale_day_pane_t1

0xd572,	// (0x0006d6be) scroll_pane_cp09_ParamLimits

0x2d2a,	// (0x00062e76) main_mup_eq_pane_t1_ParamLimits

0x2d2a,	// (0x00062e76) main_mup_eq_pane_t1

0x2d46,	// (0x00062e92) main_mup_eq_pane_t2_ParamLimits

0x2d46,	// (0x00062e92) main_mup_eq_pane_t2

0x2d62,	// (0x00062eae) main_mup_eq_pane_t3_ParamLimits

0x2d62,	// (0x00062eae) main_mup_eq_pane_t3

0x2d80,	// (0x00062ecc) main_mup_eq_pane_t4_ParamLimits

0x2d80,	// (0x00062ecc) main_mup_eq_pane_t4

0x2d9e,	// (0x00062eea) main_mup_eq_pane_t5_ParamLimits

0x2d9e,	// (0x00062eea) main_mup_eq_pane_t5

0x2dbc,	// (0x00062f08) main_mup_eq_pane_t6_ParamLimits

0x2dbc,	// (0x00062f08) main_mup_eq_pane_t6

0x2dd2,	// (0x00062f1e) main_mup_eq_pane_t7_ParamLimits

0x2dd2,	// (0x00062f1e) main_mup_eq_pane_t7

0x2de8,	// (0x00062f34) main_mup_eq_pane_t8_ParamLimits

0x2de8,	// (0x00062f34) main_mup_eq_pane_t8

0x2dfe,	// (0x00062f4a) main_mup_eq_pane_t9_ParamLimits

0x2dfe,	// (0x00062f4a) main_mup_eq_pane_t9

0x2e18,	// (0x00062f64) main_mup_eq_pane_t10_ParamLimits

0x2e18,	// (0x00062f64) main_mup_eq_pane_t10

0x0009,

0xf465,	// (0x0006f5b1) main_mup_eq_pane_t_ParamLimits

0xf465,	// (0x0006f5b1) main_mup_eq_pane_t

0x2ec7,	// (0x00063013) mup_equalizer_pane_cp5_ParamLimits

0x2edb,	// (0x00063027) mup_equalizer_pane_cp6_ParamLimits

0x2eef,	// (0x0006303b) mup_equalizer_pane_cp7_ParamLimits

0x9cf6,	// (0x00069e42) main_gallery_pane

0xf0aa,	// (0x0006f1f6) smil2_volume_pane

0xf0b2,	// (0x0006f1fe) smil_status_volume_pane_g1_ParamLimits

0xf0c5,	// (0x0006f211) smil_status_volume_pane_g2_ParamLimits

0x9f3a,	// (0x0006a086) smil_status_volume_pane_g3_ParamLimits

0xf608,	// (0x0006f754) smil_status_volume_pane_g_ParamLimits

0x46eb,	// (0x00064837) bg_popup_window_pane_cp07_ParamLimits

0x46f9,	// (0x00064845) blid_firmament_pane

0x4858,	// (0x000649a4) aid_size_cell_gallery_ParamLimits

0x4858,	// (0x000649a4) aid_size_cell_gallery

0x486e,	// (0x000649ba) grid_gallery_pane_ParamLimits

0x486e,	// (0x000649ba) grid_gallery_pane

0x4887,	// (0x000649d3) cell_gallery_pane_ParamLimits

0x4887,	// (0x000649d3) cell_gallery_pane

0x48d0,	// (0x00064a1c) bg_cell_gallery_focus_pane_ParamLimits

0x48d0,	// (0x00064a1c) bg_cell_gallery_focus_pane

0x48e2,	// (0x00064a2e) cell_gallery_pane_g1_ParamLimits

0x48e2,	// (0x00064a2e) cell_gallery_pane_g1

0x48ee,	// (0x00064a3a) cell_gallery_pane_g2_ParamLimits

0x48ee,	// (0x00064a3a) cell_gallery_pane_g2

0x48fb,	// (0x00064a47) cell_gallery_pane_g3_ParamLimits

0x48fb,	// (0x00064a47) cell_gallery_pane_g3

0x4908,	// (0x00064a54) cell_gallery_pane_g4_ParamLimits

0x4908,	// (0x00064a54) cell_gallery_pane_g4

0x0003,

0xf6b6,	// (0x0006f802) cell_gallery_pane_g_ParamLimits

0xf6b6,	// (0x0006f802) cell_gallery_pane_g

0x4914,	// (0x00064a60) bg_cell_gallery_focus_pane_g1

0x491c,	// (0x00064a68) bg_cell_gallery_focus_pane_g2

0x4924,	// (0x00064a70) bg_cell_gallery_focus_pane_g3

0x492c,	// (0x00064a78) bg_cell_gallery_focus_pane_g4

0x4934,	// (0x00064a80) bg_cell_gallery_focus_pane_g5

0x493c,	// (0x00064a88) bg_cell_gallery_focus_pane_g6

0x4944,	// (0x00064a90) bg_cell_gallery_focus_pane_g7

0x494c,	// (0x00064a98) bg_cell_gallery_focus_pane_g8

0x0007,

0xf6bf,	// (0x0006f80b) bg_cell_gallery_focus_pane_g

0x4954,	// (0x00064aa0) aid_firma_cardinal

0x4968,	// (0x00064ab4) blid_firmament_pane_t1

0x497f,	// (0x00064acb) blid_firmament_pane_t2

0x4996,	// (0x00064ae2) blid_firmament_pane_t3

0x49ad,	// (0x00064af9) blid_firmament_pane_t4

0x0003,

0xf6d0,	// (0x0006f81c) blid_firmament_pane_t

0x49c4,	// (0x00064b10) blid_sat_info_pane

0x49d4,	// (0x00064b20) blid_sat_info_pane_g1

0x49d4,	// (0x00064b20) blid_sat_info_pane_g2

0x0001,

0xf6d9,	// (0x0006f825) blid_sat_info_pane_g

0x49de,	// (0x00064b2a) blid_sat_info_pane_t1

0x49ec,	// (0x00064b38) smil2_volume_content_pane

0x49f5,	// (0x00064b41) smil2_volume_pane_g1

0x49fd,	// (0x00064b49) smil2_volume_content_pane_g1

0x4a06,	// (0x00064b52) smil2_volume_content_pane_g2

0x4a0f,	// (0x00064b5b) smil2_volume_content_pane_g3

0x4a18,	// (0x00064b64) smil2_volume_content_pane_g4

0x4a21,	// (0x00064b6d) smil2_volume_content_pane_g5

0x4a2a,	// (0x00064b76) smil2_volume_content_pane_g6

0x4a33,	// (0x00064b7f) smil2_volume_content_pane_g7

0x4a3c,	// (0x00064b88) smil2_volume_content_pane_g8

0x4a45,	// (0x00064b91) smil2_volume_content_pane_g9

0x4a4e,	// (0x00064b9a) smil2_volume_content_pane_g10

0x0009,

0xf6de,	// (0x0006f82a) smil2_volume_content_pane_g

0x1341,	// (0x0006148d) cale_week_day_heading_pane_t1_ParamLimits

0x1355,	// (0x000614a1) cale_week_day_heading_pane_t2_ParamLimits

0x1369,	// (0x000614b5) cale_week_day_heading_pane_t3_ParamLimits

0x137d,	// (0x000614c9) cale_week_day_heading_pane_t4_ParamLimits

0x1391,	// (0x000614dd) cale_week_day_heading_pane_t5_ParamLimits

0x13a5,	// (0x000614f1) cale_week_day_heading_pane_t6_ParamLimits

0x13bb,	// (0x00061507) cale_week_day_heading_pane_t7_ParamLimits

0xf1dd,	// (0x0006f329) cale_week_day_heading_pane_t_ParamLimits

0xc5d6,	// (0x0006c722) bg_cale_side_pane_ParamLimits

0x13cf,	// (0x0006151b) cale_week_time_pane_t1_ParamLimits

0x13e7,	// (0x00061533) cale_week_time_pane_t2_ParamLimits

0x13ff,	// (0x0006154b) cale_week_time_pane_t3_ParamLimits

0x1417,	// (0x00061563) cale_week_time_pane_t4_ParamLimits

0x142f,	// (0x0006157b) cale_week_time_pane_t5_ParamLimits

0x1447,	// (0x00061593) cale_week_time_pane_t6_ParamLimits

0x145f,	// (0x000615ab) cale_week_time_pane_t7_ParamLimits

0x1477,	// (0x000615c3) cale_week_time_pane_t8_ParamLimits

0xf1ec,	// (0x0006f338) cale_week_time_pane_t_ParamLimits

0x148f,	// (0x000615db) cell_cale_week_pane_g2_ParamLimits

0xc5d6,	// (0x0006c722) bg_cale_side_pane_cp01_ParamLimits

0x23a6,	// (0x000624f2) cale_month_week_pane_t1_ParamLimits

0x23bd,	// (0x00062509) cale_month_week_pane_t2_ParamLimits

0x23d4,	// (0x00062520) cale_month_week_pane_t3_ParamLimits

0x23eb,	// (0x00062537) cale_month_week_pane_t4_ParamLimits

0x2402,	// (0x0006254e) cale_month_week_pane_t5_ParamLimits

0x2419,	// (0x00062565) cale_month_week_pane_t6_ParamLimits

0xf2c5,	// (0x0006f411) cale_month_week_pane_t_ParamLimits

0x9e0a,	// (0x00069f56) cell_cale_month_pane_g1_ParamLimits

0x9cf6,	// (0x00069e42) main_cale_event_viewer_pane

0xbcf7,	// (0x0006be43) listscroll_cale_event_viewer_pane

0x4a57,	// (0x00064ba3) list_cale_ev_pane

0x4a5f,	// (0x00064bab) scroll_pane_cp023

0x4a6b,	// (0x00064bb7) field_cale_ev_pane_ParamLimits

0x4a6b,	// (0x00064bb7) field_cale_ev_pane

0x4a85,	// (0x00064bd1) field_cale_ev_content_pane_ParamLimits

0x4a85,	// (0x00064bd1) field_cale_ev_content_pane

0x4a91,	// (0x00064bdd) field_cale_ev_pane_g1_ParamLimits

0x4a91,	// (0x00064bdd) field_cale_ev_pane_g1

0x4a9d,	// (0x00064be9) field_cale_ev_pane_g2_ParamLimits

0x4a9d,	// (0x00064be9) field_cale_ev_pane_g2

0x4ab5,	// (0x00064c01) field_cale_ev_pane_g3_ParamLimits

0x4ab5,	// (0x00064c01) field_cale_ev_pane_g3

0x0002,

0xf6f3,	// (0x0006f83f) field_cale_ev_pane_g_ParamLimits

0xf6f3,	// (0x0006f83f) field_cale_ev_pane_g

0x4acd,	// (0x00064c19) field_cale_ev_pane_t1_ParamLimits

0x4acd,	// (0x00064c19) field_cale_ev_pane_t1

0x4ae4,	// (0x00064c30) field_cale_ev_content_pane_t1_ParamLimits

0x4ae4,	// (0x00064c30) field_cale_ev_content_pane_t1

0xdd56,	// (0x0006dea2) bg_button_pane_cp01

0xc484,	// (0x0006c5d0) listscroll_cale_week_pane_ParamLimits

0x1152,	// (0x0006129e) popup_toolbar_window_cp01

0xc5c4,	// (0x0006c710) listscroll_cale_week_pane_t1_ParamLimits

0xc484,	// (0x0006c5d0) listscroll_cale_day_pane_ParamLimits

0x258c,	// (0x000626d8) popup_toolbar_window_cp02

0xc5c4,	// (0x0006c710) listscroll_cale_day_pane_t1_ParamLimits

0xc484,	// (0x0006c5d0) main_cale_month_pane_ParamLimits

0x3b8a,	// (0x00063cd6) popup_toolbar_window_cp03_ParamLimits

0x3b8a,	// (0x00063cd6) popup_toolbar_window_cp03

0x323c,	// (0x00063388) main_image_pane_g2_ParamLimits

0x323c,	// (0x00063388) main_image_pane_g2

0x324d,	// (0x00063399) main_image_pane_g3_ParamLimits

0x324d,	// (0x00063399) main_image_pane_g3

0x0002,

0xf4f7,	// (0x0006f643) main_image_pane_g_ParamLimits

0xf4f7,	// (0x0006f643) main_image_pane_g

0xdea6,	// (0x0006dff2) main_image_pane_t1_ParamLimits

0x325e,	// (0x000633aa) main_image_pane_t2_ParamLimits

0x325e,	// (0x000633aa) main_image_pane_t2

0x3270,	// (0x000633bc) main_image_pane_t3_ParamLimits

0x3270,	// (0x000633bc) main_image_pane_t3

0x3298,	// (0x000633e4) main_image_pane_t4_ParamLimits

0x3298,	// (0x000633e4) main_image_pane_t4

0x0003,

0xf4fe,	// (0x0006f64a) main_image_pane_t_ParamLimits

0xf4fe,	// (0x0006f64a) main_image_pane_t

0x32b8,	// (0x00063404) popup_image_details_window_cp01

0x32c2,	// (0x0006340e) popup_toobar_trans_pane_cp01_ParamLimits

0x32c2,	// (0x0006340e) popup_toobar_trans_pane_cp01

0x3a3b,	// (0x00063b87) popup_image_details_window_ParamLimits

0x3a3b,	// (0x00063b87) popup_image_details_window

0x9f0d,	// (0x0006a059) popup_image_focus_window

0x3e51,	// (0x00063f9d) camera2_autofocus_pane_ParamLimits

0x3e51,	// (0x00063f9d) camera2_autofocus_pane

0xbcf7,	// (0x0006be43) bg_popup_sub_pane_cp06

0x4b01,	// (0x00064c4d) popup_image_focus_window_g1

0x4b09,	// (0x00064c55) popup_image_focus_window_g2

0x4b11,	// (0x00064c5d) popup_image_focus_window_g3

0x4b19,	// (0x00064c65) popup_image_focus_window_g4

0x0003,

0xf6fa,	// (0x0006f846) popup_image_focus_window_g

0x9ff9,	// (0x0006a145) popup_image_focus_window_t1

0xa007,	// (0x0006a153) popup_image_focus_window_t2

0xa017,	// (0x0006a163) popup_image_focus_window_t3

0x0002,

0xf703,	// (0x0006f84f) popup_image_focus_window_t

0xa025,	// (0x0006a171) camera2_autofocus_pane_g1

0xc69f,	// (0x0006c7eb) bg_tb_trans_pane_cp01

0xa033,	// (0x0006a17f) popup_image_details_window_g1

0xa046,	// (0x0006a192) popup_image_details_window_g2

0x0002,

0xf715,	// (0x0006f861) popup_image_details_window_g

0xa06f,	// (0x0006a1bb) popup_image_details_window_t1

0xa081,	// (0x0006a1cd) popup_image_details_window_t2

0xa09a,	// (0x0006a1e6) popup_image_details_window_t3

0xa0ae,	// (0x0006a1fa) popup_image_details_window_t4

0xa0c9,	// (0x0006a215) popup_image_details_window_t5

0x0004,

0xf71c,	// (0x0006f868) popup_image_details_window_t

0xc470,	// (0x0006c5bc) bg_calc_paper_pane_ParamLimits

0x9cf6,	// (0x00069e42) grid_highlight_pane_cp013

0x9d08,	// (0x00069e54) list_calc_pane_ParamLimits

0x9d1a,	// (0x00069e66) scroll_pane_cp024

0xc484,	// (0x0006c5d0) bg_calc_display_pane_ParamLimits

0x0f91,	// (0x000610dd) calc_display_pane_t1_ParamLimits

0x0fa3,	// (0x000610ef) calc_display_pane_t2_ParamLimits

0x9d22,	// (0x00069e6e) calc_display_pane_t3_ParamLimits

0xf15f,	// (0x0006f2ab) calc_display_pane_t_ParamLimits

0x1066,	// (0x000611b2) cell_calc_pane_g2

0x0001,

0xf17c,	// (0x0006f2c8) cell_calc_pane_g

0x106f,	// (0x000611bb) cell_calc_pane_t1

0xc4e3,	// (0x0006c62f) grid_highlight_pane_cp02_ParamLimits

0xc4f9,	// (0x0006c645) toolbar_button_pane_cp01_ParamLimits

0xc4f9,	// (0x0006c645) toolbar_button_pane_cp01

0xdeeb,	// (0x0006e037) temp_image_control_pane_ParamLimits

0xdeeb,	// (0x0006e037) temp_image_control_pane

0x9ce8,	// (0x00069e34) main_mp3_pane

0xa0e3,	// (0x0006a22f) temp_image_control_pane_g1_ParamLimits

0xa0e3,	// (0x0006a22f) temp_image_control_pane_g1

0xa0f1,	// (0x0006a23d) temp_image_control_pane_g2_ParamLimits

0xa0f1,	// (0x0006a23d) temp_image_control_pane_g2

0xa103,	// (0x0006a24f) temp_image_control_pane_g3_ParamLimits

0xa103,	// (0x0006a24f) temp_image_control_pane_g3

0x4b51,	// (0x00064c9d) temp_image_control_pane_g4_ParamLimits

0x4b51,	// (0x00064c9d) temp_image_control_pane_g4

0x0003,

0xf727,	// (0x0006f873) temp_image_control_pane_g_ParamLimits

0xf727,	// (0x0006f873) temp_image_control_pane_g

0xa0e3,	// (0x0006a22f) main_mp3_pane_g1

0x4b64,	// (0x00064cb0) main_mp3_pane_g2

0x0007,

0xf730,	// (0x0006f87c) main_mp3_pane_g

0xa146,	// (0x0006a292) main_mp3_pane_t1

0xc645,	// (0x0006c791) main_camera_pane_g8_ParamLimits

0xc645,	// (0x0006c791) main_camera_pane_g8

0x173f,	// (0x0006188b) main_video_pane_g7_ParamLimits

0x173f,	// (0x0006188b) main_video_pane_g7

0x9f7a,	// (0x0006a0c6) main_camera2_pane_t7_ParamLimits

0x9f7a,	// (0x0006a0c6) main_camera2_pane_t7

0xd30a,	// (0x0006d456) scroll_pane_cp025_ParamLimits

0xd30a,	// (0x0006d456) scroll_pane_cp025

0xd31e,	// (0x0006d46a) scroll_pane_cp026_ParamLimits

0xd31e,	// (0x0006d46a) scroll_pane_cp026

0xd32d,	// (0x0006d479) wml_content_pane_ParamLimits

0x9cf6,	// (0x00069e42) main_touch_calib_pane

0x4c30,	// (0x00064d7c) main_touch_calib_pane_g1

0x4c3c,	// (0x00064d88) main_touch_calib_pane_g2

0x4c48,	// (0x00064d94) main_touch_calib_pane_g3

0x4c54,	// (0x00064da0) main_touch_calib_pane_g4

0x0003,

0xf74e,	// (0x0006f89a) main_touch_calib_pane_g

0x4c60,	// (0x00064dac) main_touch_calib_pane_t1

0x4c7a,	// (0x00064dc6) main_touch_calib_pane_t2

0x0004,

0xf757,	// (0x0006f8a3) main_touch_calib_pane_t

0xdb20,	// (0x0006dc6c) mup_progress_pane_cp02

0xdb3f,	// (0x0006dc8b) navi_pane_g1

0xdba1,	// (0x0006dced) navi_pane_mp_t3

0x9ce8,	// (0x00069e34) main_mp3_pane_ParamLimits

0x3bc8,	// (0x00063d14) navi_pane_ParamLimits

0xa0e3,	// (0x0006a22f) main_mp3_pane_g1_ParamLimits

0x4b64,	// (0x00064cb0) main_mp3_pane_g2_ParamLimits

0x4b72,	// (0x00064cbe) main_mp3_pane_g3_ParamLimits

0x4b72,	// (0x00064cbe) main_mp3_pane_g3

0x4b80,	// (0x00064ccc) main_mp3_pane_g4_ParamLimits

0x4b80,	// (0x00064ccc) main_mp3_pane_g4

0xa113,	// (0x0006a25f) main_mp3_pane_g5_ParamLimits

0xa113,	// (0x0006a25f) main_mp3_pane_g5

0xa121,	// (0x0006a26d) main_mp3_pane_g6_ParamLimits

0xa121,	// (0x0006a26d) main_mp3_pane_g6

0xa12e,	// (0x0006a27a) main_mp3_pane_g7_ParamLimits

0xa12e,	// (0x0006a27a) main_mp3_pane_g7

0xa13a,	// (0x0006a286) main_mp3_pane_g8_ParamLimits

0xa13a,	// (0x0006a286) main_mp3_pane_g8

0xf730,	// (0x0006f87c) main_mp3_pane_g_ParamLimits

0x4b8e,	// (0x00064cda) main_mp3_pane_t2

0x4b9c,	// (0x00064ce8) main_mp3_pane_t3

0xa154,	// (0x0006a2a0) main_mp3_pane_t4

0xa162,	// (0x0006a2ae) main_mp3_pane_t5

0x0005,

0xf741,	// (0x0006f88d) main_mp3_pane_t

0xa170,	// (0x0006a2bc) mup_progress_pane_cp01

0x9c9e,	// (0x00069dea) aid_zoom_text_secondary2

0x4a57,	// (0x00064ba3) list_cale_ev2_pane

0x4a5f,	// (0x00064bab) scroll_pane_cp023_ParamLimits

0x4cd0,	// (0x00064e1c) field_cale_ev2_pane_ParamLimits

0x4cd0,	// (0x00064e1c) field_cale_ev2_pane

0x4cf6,	// (0x00064e42) field_cale_ev2_pane_g1_ParamLimits

0x4cf6,	// (0x00064e42) field_cale_ev2_pane_g1

0x4d02,	// (0x00064e4e) field_cale_ev2_pane_g2_ParamLimits

0x4d02,	// (0x00064e4e) field_cale_ev2_pane_g2

0x4d1a,	// (0x00064e66) field_cale_ev2_pane_g3_ParamLimits

0x4d1a,	// (0x00064e66) field_cale_ev2_pane_g3

0x0003,

0xf762,	// (0x0006f8ae) field_cale_ev2_pane_g_ParamLimits

0xf762,	// (0x0006f8ae) field_cale_ev2_pane_g

0x4d3e,	// (0x00064e8a) field_cale_ev2_pane_t1_ParamLimits

0x4d3e,	// (0x00064e8a) field_cale_ev2_pane_t1

0x4d55,	// (0x00064ea1) field_cale_ev2_pane_t2_ParamLimits

0x4d55,	// (0x00064ea1) field_cale_ev2_pane_t2

0x0001,

0xf76b,	// (0x0006f8b7) field_cale_ev2_pane_t_ParamLimits

0xf76b,	// (0x0006f8b7) field_cale_ev2_pane_t

0x30ec,	// (0x00063238) main_postcard_pane_g5_ParamLimits

0x30ec,	// (0x00063238) main_postcard_pane_g5

0x3102,	// (0x0006324e) main_postcard_pane_g6_ParamLimits

0x3102,	// (0x0006324e) main_postcard_pane_g6

0x14ef,	// (0x0006163b) camera2_autofocus_pane_cp_ParamLimits

0x14ef,	// (0x0006163b) camera2_autofocus_pane_cp

0x9ce8,	// (0x00069e34) main_mup3_pane

0x4d8a,	// (0x00064ed6) main_mup3_pane_g1_ParamLimits

0x4d8a,	// (0x00064ed6) main_mup3_pane_g1

0x4dac,	// (0x00064ef8) main_mup3_pane_g2_ParamLimits

0x4dac,	// (0x00064ef8) main_mup3_pane_g2

0x4e31,	// (0x00064f7d) main_mup3_pane_g3_ParamLimits

0x4e31,	// (0x00064f7d) main_mup3_pane_g3

0x4e77,	// (0x00064fc3) main_mup3_pane_g4_ParamLimits

0x4e77,	// (0x00064fc3) main_mup3_pane_g4

0x4ebd,	// (0x00065009) main_mup3_pane_g5_ParamLimits

0x4ebd,	// (0x00065009) main_mup3_pane_g5

0x4f05,	// (0x00065051) main_mup3_pane_g6_ParamLimits

0x4f05,	// (0x00065051) main_mup3_pane_g6

0xa178,	// (0x0006a2c4) main_mup3_pane_g7_ParamLimits

0xa178,	// (0x0006a2c4) main_mup3_pane_g7

0x0007,

0xf77b,	// (0x0006f8c7) main_mup3_pane_g_ParamLimits

0xf77b,	// (0x0006f8c7) main_mup3_pane_g

0x4f85,	// (0x000650d1) main_mup3_pane_t1_ParamLimits

0x4f85,	// (0x000650d1) main_mup3_pane_t1

0x4ff9,	// (0x00065145) main_mup3_pane_t2_ParamLimits

0x4ff9,	// (0x00065145) main_mup3_pane_t2

0x50cd,	// (0x00065219) main_mup3_pane_t4_ParamLimits

0x50cd,	// (0x00065219) main_mup3_pane_t4

0x512b,	// (0x00065277) main_mup3_pane_t5_ParamLimits

0x512b,	// (0x00065277) main_mup3_pane_t5

0x51e7,	// (0x00065333) main_mup3_pane_t6_ParamLimits

0x51e7,	// (0x00065333) main_mup3_pane_t6

0x0005,

0xf78c,	// (0x0006f8d8) main_mup3_pane_t_ParamLimits

0xf78c,	// (0x0006f8d8) main_mup3_pane_t

0x529f,	// (0x000653eb) mup3_progress_pane_ParamLimits

0x529f,	// (0x000653eb) mup3_progress_pane

0x532b,	// (0x00065477) popup_mup3_control_window_ParamLimits

0x532b,	// (0x00065477) popup_mup3_control_window

0xa186,	// (0x0006a2d2) popup_mup3_text_window

0x535d,	// (0x000654a9) mup3_progress_pane_t1

0x537c,	// (0x000654c8) mup3_progress_pane_t2

0xa18e,	// (0x0006a2da) mup3_progress_pane_t3

0x0002,

0xf799,	// (0x0006f8e5) mup3_progress_pane_t

0xa1ab,	// (0x0006a2f7) mup_progress_pane_cp03

0xbcf7,	// (0x0006be43) bg_tb_trans_pane_cp04

0x539b,	// (0x000654e7) mup3_volume_pane

0x53a3,	// (0x000654ef) popup_mup3_control_window_g1

0x53ac,	// (0x000654f8) mup3_volume_pane_g1

0x53b5,	// (0x00065501) mup3_volume_pane_g2

0x53be,	// (0x0006550a) mup3_volume_pane_g3

0x0002,

0xf7a0,	// (0x0006f8ec) mup3_volume_pane_g

0xbcf7,	// (0x0006be43) bg_tb_trans_pane_cp03

0xa1bb,	// (0x0006a307) popup_mup3_text_window_g1

0xa1c3,	// (0x0006a30f) popup_mup3_text_window_t1

0xc4cc,	// (0x0006c618) list_calc_item_pane_g1_ParamLimits

0x462b,	// (0x00064777) mup_volume_pane_cp_g1

0x4c94,	// (0x00064de0) main_touch_calib_pane_t3

0x4ca8,	// (0x00064df4) main_touch_calib_pane_t4

0x4cbc,	// (0x00064e08) main_touch_calib_pane_t5

0x9c7a,	// (0x00069dc6) aid_cell_size_toolbar2

0x9c82,	// (0x00069dce) aid_popup3_width_pane

0x9c8e,	// (0x00069dda) aid_zoom_text_msg_primary

0x9df4,	// (0x00069f40) vorec_t7

0xc490,	// (0x0006c5dc) bg_calc_paper_pane_g1_ParamLimits

0xc49c,	// (0x0006c5e8) bg_calc_paper_pane_g2_ParamLimits

0xc4a8,	// (0x0006c5f4) bg_calc_paper_pane_g3_ParamLimits

0xc4b4,	// (0x0006c600) bg_calc_paper_pane_g4_ParamLimits

0xc4c0,	// (0x0006c60c) bg_calc_paper_pane_g5_ParamLimits

0x0fec,	// (0x00061138) bg_calc_paper_pane_g6_ParamLimits

0x0ffd,	// (0x00061149) bg_calc_paper_pane_g7_ParamLimits

0x100e,	// (0x0006115a) bg_calc_paper_pane_g8_ParamLimits

0xf166,	// (0x0006f2b2) bg_calc_paper_pane_g_ParamLimits

0x1021,	// (0x0006116d) calc_bg_paper_pane_g9_ParamLimits

0x1649,	// (0x00061795) image_qvga_pane_ParamLimits

0x1649,	// (0x00061795) image_qvga_pane

0xc36d,	// (0x0006c4b9) bg_popup_sub_pane_cp04_ParamLimits

0xde22,	// (0x0006df6e) popup_mup_playback_window_g1_ParamLimits

0xde2e,	// (0x0006df7a) popup_mup_playback_window_t1_ParamLimits

0xde43,	// (0x0006df8f) popup_mup_playback_window_t2_ParamLimits

0xf4f2,	// (0x0006f63e) popup_mup_playback_window_t_ParamLimits

0x4348,	// (0x00064494) main_mup2_pane_g3_ParamLimits

0x4348,	// (0x00064494) main_mup2_pane_g3

0x19a6,	// (0x00061af2) popup_toolbar_window_cp04

0xe238,	// (0x0006e384) popup_call2_audio_second_window_g3_ParamLimits

0xe238,	// (0x0006e384) popup_call2_audio_second_window_g3

0xe642,	// (0x0006e78e) popup_call2_audio_first_window_g4_ParamLimits

0xe642,	// (0x0006e78e) popup_call2_audio_first_window_g4

0xecc1,	// (0x0006ee0d) popup_call2_audio_in_window_g4_ParamLimits

0xecc1,	// (0x0006ee0d) popup_call2_audio_in_window_g4

0x321e,	// (0x0006336a) aid_area_sk_bg_cut_ParamLimits

0x321e,	// (0x0006336a) aid_area_sk_bg_cut

0xde58,	// (0x0006dfa4) aid_area_sk_bg_cut_2_ParamLimits

0xde58,	// (0x0006dfa4) aid_area_sk_bg_cut_2

0x48c0,	// (0x00064a0c) aid_placing_details_win

0x48c8,	// (0x00064a14) aid_placing_details_win_2

0xa025,	// (0x0006a171) camera2_autofocus_pane_g1_ParamLimits

0x0c16,	// (0x00060d62) popup_fixed_preview_cale_window_ParamLimits

0x0c16,	// (0x00060d62) popup_fixed_preview_cale_window

0xdbf0,	// (0x0006dd3c) navi_slider_pane_g3

0xdbf9,	// (0x0006dd45) navi_slider_pane_g4

0xdc02,	// (0x0006dd4e) navi_slider_pane_g5

0xdbf0,	// (0x0006dd3c) navi_slider_pane_g6

0x9eb0,	// (0x00069ffc) navi_slider_pane_g7

0xdd23,	// (0x0006de6f) mup_scale_pane_g3

0xdd2c,	// (0x0006de78) mup_scale_pane_g4

0xdd35,	// (0x0006de81) mup_scale_pane_g5

0x2f03,	// (0x0006304f) mup_scale_pane_g6

0x2f0c,	// (0x00063058) mup_scale_pane_g7

0xdbf0,	// (0x0006dd3c) cams2_slider_pane_g3

0x46db,	// (0x00064827) cams2_slider_pane_g4

0x9fe8,	// (0x0006a134) cams2_slider_pane_g5

0xdbf0,	// (0x0006dd3c) cams2_slider_pane_g6

0x9ff0,	// (0x0006a13c) cams2_slider_pane_g7

0x49d4,	// (0x00064b20) camera2_autofocus_pane_cp_g1

0xa1d1,	// (0x0006a31d) bg_popup_preview_window_pane_cp02_ParamLimits

0xa1d1,	// (0x0006a31d) bg_popup_preview_window_pane_cp02

0xa1dd,	// (0x0006a329) list_fp_cale_pane_ParamLimits

0xa1dd,	// (0x0006a329) list_fp_cale_pane

0xa1e9,	// (0x0006a335) popup_fixed_preview_cale_window_t1_ParamLimits

0xa1e9,	// (0x0006a335) popup_fixed_preview_cale_window_t1

0x53c7,	// (0x00065513) popup_fixed_preview_cale_window_t2_ParamLimits

0x53c7,	// (0x00065513) popup_fixed_preview_cale_window_t2

0x53dc,	// (0x00065528) popup_fixed_preview_cale_window_t3_ParamLimits

0x53dc,	// (0x00065528) popup_fixed_preview_cale_window_t3

0x0002,

0xf7a7,	// (0x0006f8f3) popup_fixed_preview_cale_window_t_ParamLimits

0xf7a7,	// (0x0006f8f3) popup_fixed_preview_cale_window_t

0x53f1,	// (0x0006553d) list_single_fp_cale_pane_ParamLimits

0x53f1,	// (0x0006553d) list_single_fp_cale_pane

0xa207,	// (0x0006a353) list_single_fp_cale_pane_g1_ParamLimits

0xa207,	// (0x0006a353) list_single_fp_cale_pane_g1

0xa213,	// (0x0006a35f) list_single_fp_cale_pane_g2_ParamLimits

0xa213,	// (0x0006a35f) list_single_fp_cale_pane_g2

0x0002,

0xf7ae,	// (0x0006f8fa) list_single_fp_cale_pane_g_ParamLimits

0xf7ae,	// (0x0006f8fa) list_single_fp_cale_pane_g

0xa22c,	// (0x0006a378) list_single_fp_cale_pane_t1_ParamLimits

0xa22c,	// (0x0006a378) list_single_fp_cale_pane_t1

0xa23e,	// (0x0006a38a) list_single_fp_cale_pane_t2_ParamLimits

0xa23e,	// (0x0006a38a) list_single_fp_cale_pane_t2

0x0001,

0xf7b5,	// (0x0006f901) list_single_fp_cale_pane_t_ParamLimits

0xf7b5,	// (0x0006f901) list_single_fp_cale_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0x9cf6,	// (0x00069e42) main_dialer_pane

0x5409,	// (0x00065555) aid_cell_size_keypad

0x5413,	// (0x0006555f) dialer_ne_pane

0x541b,	// (0x00065567) grid_dialer_command_1_pane

0x5423,	// (0x0006556f) grid_dialer_command_2_pane

0x542b,	// (0x00065577) grid_dialer_keypad_pane

0x543d,	// (0x00065589) bg_popup_call_pane_cp06_ParamLimits

0x543d,	// (0x00065589) bg_popup_call_pane_cp06

0x5449,	// (0x00065595) dialer_ne_clear_pane_ParamLimits

0x5449,	// (0x00065595) dialer_ne_clear_pane

0xa271,	// (0x0006a3bd) dialer_ne_pane_g1

0xa279,	// (0x0006a3c5) dialer_ne_pane_t1_ParamLimits

0xa279,	// (0x0006a3c5) dialer_ne_pane_t1

0x5455,	// (0x000655a1) dialer_ne_pane_t2_ParamLimits

0x5455,	// (0x000655a1) dialer_ne_pane_t2

0x547f,	// (0x000655cb) dialer_ne_pane_t3_ParamLimits

0x547f,	// (0x000655cb) dialer_ne_pane_t3

0x0002,

0xf7ba,	// (0x0006f906) dialer_ne_pane_t_ParamLimits

0xf7ba,	// (0x0006f906) dialer_ne_pane_t

0x54af,	// (0x000655fb) dialer_ne_pane_t3_copy1_ParamLimits

0x54af,	// (0x000655fb) dialer_ne_pane_t3_copy1

0x54de,	// (0x0006562a) cell_dialer_keypad_pane_ParamLimits

0x54de,	// (0x0006562a) cell_dialer_keypad_pane

0x54f5,	// (0x00065641) cell_dialer_command_1_pane_ParamLimits

0x54f5,	// (0x00065641) cell_dialer_command_1_pane

0x550b,	// (0x00065657) cell_dialer_command_2_pane_ParamLimits

0x550b,	// (0x00065657) cell_dialer_command_2_pane

0xa28b,	// (0x0006a3d7) bg_button_pane_cp02_ParamLimits

0xa28b,	// (0x0006a3d7) bg_button_pane_cp02

0x551a,	// (0x00065666) cell_dialer_keypad_pane_g1_ParamLimits

0x551a,	// (0x00065666) cell_dialer_keypad_pane_g1

0xa28b,	// (0x0006a3d7) bg_button_pane_cp03_ParamLimits

0xa28b,	// (0x0006a3d7) bg_button_pane_cp03

0x552f,	// (0x0006567b) cell_dialer_command_1_pane_g1_ParamLimits

0x552f,	// (0x0006567b) cell_dialer_command_1_pane_g1

0xa297,	// (0x0006a3e3) bg_button_pane_cp04

0x5543,	// (0x0006568f) cell_dialer_command_2_pane_g1

0xdbdf,	// (0x0006dd2b) bg_button_pane_cp06

0xa29f,	// (0x0006a3eb) dialer_ne_clear_pane_g1

0x2a31,	// (0x00062b7d) navi_pane_g2

0x2a5f,	// (0x00062bab) navi_pane_g3

0x0002,

0xf3f5,	// (0x0006f541) navi_pane_g

0x2a88,	// (0x00062bd4) navi_pane_mv_g2

0x2aaf,	// (0x00062bfb) navi_pane_mv_g5

0x2ab7,	// (0x00062c03) navi_pane_mv_t1

0xc484,	// (0x0006c5d0) main_clock2_pane

0x557d,	// (0x000656c9) main_clock2_list_pane_ParamLimits

0x557d,	// (0x000656c9) main_clock2_list_pane

0x55b7,	// (0x00065703) main_clock2_pane_t1_ParamLimits

0x55b7,	// (0x00065703) main_clock2_pane_t1

0x55f5,	// (0x00065741) main_clock2_pane_t2_ParamLimits

0x55f5,	// (0x00065741) main_clock2_pane_t2

0x0004,

0xf7c1,	// (0x0006f90d) main_clock2_pane_t_ParamLimits

0xf7c1,	// (0x0006f90d) main_clock2_pane_t

0x5692,	// (0x000657de) popup_clock_analogue_window_cp03_ParamLimits

0x5692,	// (0x000657de) popup_clock_analogue_window_cp03

0x56b9,	// (0x00065805) popup_clock_digital_window_cp02_ParamLimits

0x56b9,	// (0x00065805) popup_clock_digital_window_cp02

0x572e,	// (0x0006587a) main_clock2_list_single_pane_ParamLimits

0x572e,	// (0x0006587a) main_clock2_list_single_pane

0xdbdf,	// (0x0006dd2b) list_highlight_pane_cp05

0xa2a7,	// (0x0006a3f3) main_clock2_list_single_pane_t1

0x19a6,	// (0x00061af2) popup_toolbar_window_cp04_ParamLimits

0x4b21,	// (0x00064c6d) camera2_autofocus_pane_g2_ParamLimits

0x4b21,	// (0x00064c6d) camera2_autofocus_pane_g2

0x4b2d,	// (0x00064c79) camera2_autofocus_pane_g3_ParamLimits

0x4b2d,	// (0x00064c79) camera2_autofocus_pane_g3

0x4b39,	// (0x00064c85) camera2_autofocus_pane_g4_ParamLimits

0x4b39,	// (0x00064c85) camera2_autofocus_pane_g4

0x4b45,	// (0x00064c91) camera2_autofocus_pane_g5_ParamLimits

0x4b45,	// (0x00064c91) camera2_autofocus_pane_g5

0x0004,

0xf70a,	// (0x0006f856) camera2_autofocus_pane_g_ParamLimits

0xf70a,	// (0x0006f856) camera2_autofocus_pane_g

0x4d6a,	// (0x00064eb6) camera2_autofocus_pane_cp_g2

0x4d72,	// (0x00064ebe) camera2_autofocus_pane_cp_g3

0x4d7a,	// (0x00064ec6) camera2_autofocus_pane_cp_g4

0x4d82,	// (0x00064ece) camera2_autofocus_pane_cp_g5

0x0004,

0xf770,	// (0x0006f8bc) camera2_autofocus_pane_cp_g

0x5435,	// (0x00065581) popup_dialer_spcha_window

0xbcf7,	// (0x0006be43) bg_popup_sub_pane_cp07

0xa2b5,	// (0x0006a401) list_spcha_pane

0xa2bd,	// (0x0006a409) list_single_spcha_pane_ParamLimits

0xa2bd,	// (0x0006a409) list_single_spcha_pane

0xbcf7,	// (0x0006be43) list_highlight_pane_cp06

0xa2ce,	// (0x0006a41a) list_single_spcha_pane_t1

0xea6b,	// (0x0006ebb7) popup_call2_audio_out_window_g4_ParamLimits

0xea6b,	// (0x0006ebb7) popup_call2_audio_out_window_g4

0x9cf6,	// (0x00069e42) main_imed2_pane

0x9f15,	// (0x0006a061) popup_imed_adjust2_window

0x3a53,	// (0x00063b9f) popup_imed_trans_window_ParamLimits

0x3a53,	// (0x00063b9f) popup_imed_trans_window

0x4744,	// (0x00064890) popup_blid_sat_info2_window_t1

0x4752,	// (0x0006489e) popup_blid_sat_info2_window_t2

0x000a,

0xf69f,	// (0x0006f7eb) popup_blid_sat_info2_window_t

0x57d6,	// (0x00065922) aid_size_cell_colour_35

0x57f6,	// (0x00065942) aid_size_cell_colour_112

0x5816,	// (0x00065962) aid_size_cell_effect

0xf02a,	// (0x0006f176) bg_tb_trans_pane_cp02

0xd69c,	// (0x0006d7e8) heading_imed_pane

0x5836,	// (0x00065982) listscroll_imed_pane

0xa2dc,	// (0x0006a428) heading_imed_pane_g1

0xa2e4,	// (0x0006a430) heading_imed_pane_t1

0xa2f2,	// (0x0006a43e) grid_imed_colour_35_pane_ParamLimits

0xa2f2,	// (0x0006a43e) grid_imed_colour_35_pane

0x5842,	// (0x0006598e) grid_imed_effect_pane

0xa30d,	// (0x0006a459) list_imed_aspect_pane

0x5857,	// (0x000659a3) scroll_pane_cp027_ParamLimits

0x5857,	// (0x000659a3) scroll_pane_cp027

0x5868,	// (0x000659b4) cell_imed_effect_pane_ParamLimits

0x5868,	// (0x000659b4) cell_imed_effect_pane

0xa315,	// (0x0006a461) cell_imed_colour_pane_ParamLimits

0xa315,	// (0x0006a461) cell_imed_colour_pane

0xa357,	// (0x0006a4a3) cell_imed_colour_pane_g1_ParamLimits

0xa357,	// (0x0006a4a3) cell_imed_colour_pane_g1

0xa368,	// (0x0006a4b4) hgihlgiht_grid_pane_cp016_ParamLimits

0xa368,	// (0x0006a4b4) hgihlgiht_grid_pane_cp016

0x588f,	// (0x000659db) cell_imed_effect_pane_g1

0x5897,	// (0x000659e3) grid_highlight_pane_cp017

0xa379,	// (0x0006a4c5) list_imed_single_pane_ParamLimits

0xa379,	// (0x0006a4c5) list_imed_single_pane

0xbcf7,	// (0x0006be43) list_highlight_pane_cp07

0xa390,	// (0x0006a4dc) list_imed_aspect_pane_comp1_t1

0xf02a,	// (0x0006f176) bg_tb_trans_pane_cp05

0xa3b2,	// (0x0006a4fe) popup_imed_adjust2_window_g1

0xa3d9,	// (0x0006a525) popup_imed_adjust2_window_t1

0xa3f1,	// (0x0006a53d) slider_imed_adjust_pane

0xa405,	// (0x0006a551) slider_imed_adjust_pane_g1

0xa415,	// (0x0006a561) slider_imed_adjust_pane_g2

0xa425,	// (0x0006a571) slider_imed_adjust_pane_g3

0xa436,	// (0x0006a582) slider_imed_adjust_pane_g4

0x0003,

0xf7de,	// (0x0006f92a) slider_imed_adjust_pane_g

0x58a0,	// (0x000659ec) aid_size_cell_clipart2

0x58ac,	// (0x000659f8) grid_imed_clipart_pane

0xa447,	// (0x0006a593) scroll_pane_cp031

0x58b6,	// (0x00065a02) cell_imed_clipart_pane_ParamLimits

0x58b6,	// (0x00065a02) cell_imed_clipart_pane

0x58dd,	// (0x00065a29) cell_imed_clipart_pane_g1

0xbcf7,	// (0x0006be43) grid_highlight_pane_cp014

0x5592,	// (0x000656de) main_clock2_pane_g1_ParamLimits

0x5592,	// (0x000656de) main_clock2_pane_g1

0x56d9,	// (0x00065825) aid_call2_pane_cp10

0x56eb,	// (0x00065837) aid_call_pane_cp10

0xdb14,	// (0x0006dc60) popup_clock_analogue_window_cp10_g1

0xdb14,	// (0x0006dc60) popup_clock_analogue_window_cp10_g2

0x56fd,	// (0x00065849) popup_clock_analogue_window_cp10_g3

0x56fd,	// (0x00065849) popup_clock_analogue_window_cp10_g4

0xdb14,	// (0x0006dc60) popup_clock_analogue_window_cp10_g5

0x0004,

0xf7cc,	// (0x0006f918) popup_clock_analogue_window_cp10_g

0x570f,	// (0x0006585b) popup_clock_analogue_window_cp10_t1

0x5740,	// (0x0006588c) clock_digital_number_pane_cp10_ParamLimits

0x5740,	// (0x0006588c) clock_digital_number_pane_cp10

0x5758,	// (0x000658a4) clock_digital_number_pane_cp11_ParamLimits

0x5758,	// (0x000658a4) clock_digital_number_pane_cp11

0x5770,	// (0x000658bc) clock_digital_number_pane_cp12_ParamLimits

0x5770,	// (0x000658bc) clock_digital_number_pane_cp12

0x5788,	// (0x000658d4) clock_digital_number_pane_cp13_ParamLimits

0x5788,	// (0x000658d4) clock_digital_number_pane_cp13

0x57a0,	// (0x000658ec) clock_digital_separator_pane_cp10_ParamLimits

0x57a0,	// (0x000658ec) clock_digital_separator_pane_cp10

0x57b8,	// (0x00065904) popup_clock_digital_window_cp02_t1_ParamLimits

0x57b8,	// (0x00065904) popup_clock_digital_window_cp02_t1

0xc365,	// (0x0006c4b1) clock_digital_number_pane_cp10_g1

0xc365,	// (0x0006c4b1) clock_digital_number_pane_cp10_g2

0x0001,

0x0208,	// (0x00060354) clock_digital_number_pane_cp10_g

0xc365,	// (0x0006c4b1) clock_digital_separator_pane_cp10_g1

0xc365,	// (0x0006c4b1) clock_digital_separator_pane_g2_cp10

0xdbaf,	// (0x0006dcfb) navi_pane_vded_g4

0xdbb8,	// (0x0006dd04) navi_pane_vded_g5

0xdbc1,	// (0x0006dd0d) navi_pane_vded_t1

0x9cf6,	// (0x00069e42) main_vded_pane

0x58e6,	// (0x00065a32) main_vded_pane_g1

0x58f2,	// (0x00065a3e) main_vded_pane_g2

0x58fc,	// (0x00065a48) main_vded_pane_g3

0x0002,

0xf7e7,	// (0x0006f933) main_vded_pane_g

0x5906,	// (0x00065a52) main_vded_pane_t1

0x5914,	// (0x00065a60) main_vded_pane_t2

0x0001,

0xf7ee,	// (0x0006f93a) main_vded_pane_t

0x5922,	// (0x00065a6e) vded_slider_pane

0x592c,	// (0x00065a78) vded_video_pane

0xa44f,	// (0x0006a59b) vded_video_pane_g1

0x5936,	// (0x00065a82) vded_video_pane_g2

0x49d4,	// (0x00064b20) vded_video_pane_g3

0x0002,

0xf7f3,	// (0x0006f93f) vded_video_pane_g

0xa459,	// (0x0006a5a5) vded_slider_pane_g1

0x462b,	// (0x00064777) vded_slider_pane_g2

0xa462,	// (0x0006a5ae) vded_slider_pane_g3

0xa46b,	// (0x0006a5b7) vded_slider_pane_g4

0xa474,	// (0x0006a5c0) vded_slider_pane_g5

0x0004,

0xf7fa,	// (0x0006f946) vded_slider_pane_g

0x5313,	// (0x0006545f) mup3_rocker_pane_ParamLimits

0x5313,	// (0x0006545f) mup3_rocker_pane

0x593f,	// (0x00065a8b) mup3_control_keys_pane_g1

0x5947,	// (0x00065a93) mup3_control_keys_pane_g2

0x594f,	// (0x00065a9b) mup3_control_keys_pane_g3

0x5957,	// (0x00065aa3) mup3_control_keys_pane_g4

0x0003,

0xf805,	// (0x0006f951) mup3_control_keys_pane_g

0x0c4d,	// (0x00060d99) popup_toolbar2_fixed_window_cp01_ParamLimits

0x0c4d,	// (0x00060d99) popup_toolbar2_fixed_window_cp01

0x5347,	// (0x00065493) popup_toolbar2_fixed_window_cp02_ParamLimits

0x5347,	// (0x00065493) popup_toolbar2_fixed_window_cp02

0xe3aa,	// (0x0006e4f6) popup_call2_audio_second_window_t4_ParamLimits

0xe3aa,	// (0x0006e4f6) popup_call2_audio_second_window_t4

0xe8d8,	// (0x0006ea24) popup_call2_audio_first_window_t6_ParamLimits

0xe8d8,	// (0x0006ea24) popup_call2_audio_first_window_t6

0xeb6e,	// (0x0006ecba) popup_call2_audio_out_window_t6_ParamLimits

0xeb6e,	// (0x0006ecba) popup_call2_audio_out_window_t6

0x9cf6,	// (0x00069e42) main_vitu_pane

0x5967,	// (0x00065ab3) aid_size_cell_itu_ParamLimits

0x5967,	// (0x00065ab3) aid_size_cell_itu

0xc69f,	// (0x0006c7eb) bg_popup_window_pane_cp08_ParamLimits

0xc69f,	// (0x0006c7eb) bg_popup_window_pane_cp08

0x597d,	// (0x00065ac9) field_vitu_entry_pane_ParamLimits

0x597d,	// (0x00065ac9) field_vitu_entry_pane

0x5994,	// (0x00065ae0) grid_vitu_function_pane_ParamLimits

0x5994,	// (0x00065ae0) grid_vitu_function_pane

0x59af,	// (0x00065afb) grid_vitu_itu_pane_ParamLimits

0x59af,	// (0x00065afb) grid_vitu_itu_pane

0x59cd,	// (0x00065b19) cell_vitu_itu_pane_ParamLimits

0x59cd,	// (0x00065b19) cell_vitu_itu_pane

0x59f1,	// (0x00065b3d) cell_vitu_function_pane_ParamLimits

0x59f1,	// (0x00065b3d) cell_vitu_function_pane

0xc69f,	// (0x0006c7eb) bg_popup_sub_pane_cp08_ParamLimits

0xc69f,	// (0x0006c7eb) bg_popup_sub_pane_cp08

0x5a0c,	// (0x00065b58) field_vitu_entry_pane_t1_ParamLimits

0x5a0c,	// (0x00065b58) field_vitu_entry_pane_t1

0xa495,	// (0x0006a5e1) field_vitu_entry_pane_t2_ParamLimits

0xa495,	// (0x0006a5e1) field_vitu_entry_pane_t2

0x0001,

0xf813,	// (0x0006f95f) field_vitu_entry_pane_t_ParamLimits

0xf813,	// (0x0006f95f) field_vitu_entry_pane_t

0xa4b2,	// (0x0006a5fe) bg_button_pane_cp05_ParamLimits

0xa4b2,	// (0x0006a5fe) bg_button_pane_cp05

0x5a2c,	// (0x00065b78) cell_vitu_itu_pane_g1

0x5a44,	// (0x00065b90) cell_vitu_itu_pane_t1_ParamLimits

0x5a44,	// (0x00065b90) cell_vitu_itu_pane_t1

0x5a56,	// (0x00065ba2) cell_vitu_itu_pane_t2_ParamLimits

0x5a56,	// (0x00065ba2) cell_vitu_itu_pane_t2

0x0002,

0xf818,	// (0x0006f964) cell_vitu_itu_pane_t_ParamLimits

0xf818,	// (0x0006f964) cell_vitu_itu_pane_t

0xa4c0,	// (0x0006a60c) bg_button_pane_cp07

0x5a8b,	// (0x00065bd7) cell_vitu_function_pane_g1

0x9d00,	// (0x00069e4c) main_calc_pane_g1

0x0a8d,	// (0x00060bd9) aid_visual_content_pane

0x9cf6,	// (0x00069e42) main_vradio_pane

0x5a94,	// (0x00065be0) main_vradio_pane_g1_ParamLimits

0x5a94,	// (0x00065be0) main_vradio_pane_g1

0xa4ca,	// (0x0006a616) main_vradio_pane_g2_ParamLimits

0xa4ca,	// (0x0006a616) main_vradio_pane_g2

0x0001,

0xf81f,	// (0x0006f96b) main_vradio_pane_g_ParamLimits

0xf81f,	// (0x0006f96b) main_vradio_pane_g

0x5aad,	// (0x00065bf9) main_vradio_pane_t1_ParamLimits

0x5aad,	// (0x00065bf9) main_vradio_pane_t1

0x5ac2,	// (0x00065c0e) main_vradio_pane_t2_ParamLimits

0x5ac2,	// (0x00065c0e) main_vradio_pane_t2

0xa4d7,	// (0x0006a623) main_vradio_pane_t3_ParamLimits

0xa4d7,	// (0x0006a623) main_vradio_pane_t3

0x0002,

0xf824,	// (0x0006f970) main_vradio_pane_t_ParamLimits

0xf824,	// (0x0006f970) main_vradio_pane_t

0x5ad7,	// (0x00065c23) vradio_rocker_control_pane_ParamLimits

0x5ad7,	// (0x00065c23) vradio_rocker_control_pane

0x5ae9,	// (0x00065c35) vradio_station_info_pane_ParamLimits

0x5ae9,	// (0x00065c35) vradio_station_info_pane

0xa4eb,	// (0x0006a637) vradio_frequency_info_pane_ParamLimits

0xa4eb,	// (0x0006a637) vradio_frequency_info_pane

0x49d4,	// (0x00064b20) vradio_station_info_pane_g1

0xa4fa,	// (0x0006a646) vradio_station_info_pane_t1_ParamLimits

0xa4fa,	// (0x0006a646) vradio_station_info_pane_t1

0xa51c,	// (0x0006a668) vradio_station_info_pane_t2_ParamLimits

0xa51c,	// (0x0006a668) vradio_station_info_pane_t2

0x0001,

0xf82b,	// (0x0006f977) vradio_station_info_pane_t_ParamLimits

0xf82b,	// (0x0006f977) vradio_station_info_pane_t

0xa52e,	// (0x0006a67a) vradio_tuning_pane

0xa536,	// (0x0006a682) vradio_rocker_control_pane_g1

0xa53e,	// (0x0006a68a) vradio_rocker_control_pane_g2

0xa546,	// (0x0006a692) vradio_rocker_control_pane_g3

0xa54e,	// (0x0006a69a) vradio_rocker_control_pane_g4

0xa556,	// (0x0006a6a2) vradio_rocker_control_pane_g5

0x0004,

0xf830,	// (0x0006f97c) vradio_rocker_control_pane_g

0x5afb,	// (0x00065c47) vradio_frequency_info_pane_g1

0xa55e,	// (0x0006a6aa) vradio_frequency_info_pane_t1_ParamLimits

0xa55e,	// (0x0006a6aa) vradio_frequency_info_pane_t1

0x5b05,	// (0x00065c51) vradio_tuning_pane_g1

0x5b10,	// (0x00065c5c) vradio_tuning_pane_t1

0x9ca6,	// (0x00069df2) area_side_right_pane_ParamLimits

0x9ca6,	// (0x00069df2) area_side_right_pane

0xeff1,	// (0x0006f13d) status_small_pane_g1

0xeff9,	// (0x0006f145) status_small_pane_g2

0xf002,	// (0x0006f14e) status_small_pane_g3

0xf00b,	// (0x0006f157) status_small_pane_g4

0x0003,

0x0016,	// (0x00060162) status_small_pane_g

0xf014,	// (0x0006f160) status_small_pane_t1

0x9cf6,	// (0x00069e42) main_video3_pane

0xa572,	// (0x0006a6be) cams_zoom_vslider_pane

0xa57a,	// (0x0006a6c6) image3_wide_pane_ParamLimits

0xa57a,	// (0x0006a6c6) image3_wide_pane

0xa594,	// (0x0006a6e0) image3_wide_small_pane

0xa5a0,	// (0x0006a6ec) main_video3_pane_g1_ParamLimits

0xa5a0,	// (0x0006a6ec) main_video3_pane_g1

0xa5bc,	// (0x0006a708) main_video3_pane_g2_ParamLimits

0xa5bc,	// (0x0006a708) main_video3_pane_g2

0x0001,

0xf83b,	// (0x0006f987) main_video3_pane_g_ParamLimits

0xf83b,	// (0x0006f987) main_video3_pane_g

0xa5d8,	// (0x0006a724) main_video3_pane_t1_ParamLimits

0xa5d8,	// (0x0006a724) main_video3_pane_t1

0xa603,	// (0x0006a74f) main_video3_pane_t2_ParamLimits

0xa603,	// (0x0006a74f) main_video3_pane_t2

0xa62e,	// (0x0006a77a) main_video3_pane_t3_ParamLimits

0xa62e,	// (0x0006a77a) main_video3_pane_t3

0x0002,

0xf840,	// (0x0006f98c) main_video3_pane_t_ParamLimits

0xf840,	// (0x0006f98c) main_video3_pane_t

0xa65b,	// (0x0006a7a7) cams_zoom_vslider_pane_g1

0xa664,	// (0x0006a7b0) cams_zoom_vslider_pane_g2

0x0001,

0xf847,	// (0x0006f993) cams_zoom_vslider_pane_g

0xa66c,	// (0x0006a7b8) small_slider_vertical_pane

0x49d4,	// (0x00064b20) small_slider_vertical_pane_g1

0x49d4,	// (0x00064b20) small_slider_vertical_pane_g2

0xa674,	// (0x0006a7c0) small_slider_vertical_pane_g3

0x0002,

0xf84c,	// (0x0006f998) small_slider_vertical_pane_g

0x9cf6,	// (0x00069e42) main_hwr_training_pane

0xa67d,	// (0x0006a7c9) hwr_training_instruct_pane_ParamLimits

0xa67d,	// (0x0006a7c9) hwr_training_instruct_pane

0x5b1f,	// (0x00065c6b) hwr_training_navi_pane_ParamLimits

0x5b1f,	// (0x00065c6b) hwr_training_navi_pane

0x5b3e,	// (0x00065c8a) hwr_training_write_pane_ParamLimits

0x5b3e,	// (0x00065c8a) hwr_training_write_pane

0xbcf7,	// (0x0006be43) bg_frame_shadow_pane

0xa6b4,	// (0x0006a800) hwr_training_write_pane_g1

0xa6bc,	// (0x0006a808) hwr_training_write_pane_g2

0xa6c4,	// (0x0006a810) hwr_training_write_pane_g3

0xa6cc,	// (0x0006a818) hwr_training_write_pane_g4

0xa6d4,	// (0x0006a820) hwr_training_write_pane_g5

0xa6dc,	// (0x0006a828) hwr_training_write_pane_g6

0xa6e4,	// (0x0006a830) hwr_training_write_pane_g7

0x0006,

0xf853,	// (0x0006f99f) hwr_training_write_pane_g

0xa6ec,	// (0x0006a838) hwr_training_navi_pane_g1_ParamLimits

0xa6ec,	// (0x0006a838) hwr_training_navi_pane_g1

0xa6fe,	// (0x0006a84a) hwr_training_navi_pane_g2_ParamLimits

0xa6fe,	// (0x0006a84a) hwr_training_navi_pane_g2

0xa710,	// (0x0006a85c) hwr_training_navi_pane_g3_ParamLimits

0xa710,	// (0x0006a85c) hwr_training_navi_pane_g3

0xa720,	// (0x0006a86c) hwr_training_navi_pane_g4_ParamLimits

0xa720,	// (0x0006a86c) hwr_training_navi_pane_g4

0x0004,

0xf862,	// (0x0006f9ae) hwr_training_navi_pane_g_ParamLimits

0xf862,	// (0x0006f9ae) hwr_training_navi_pane_g

0xa72d,	// (0x0006a879) hwr_training_navi_pane_t1

0x5b88,	// (0x00065cd4) list_single_hwr_training_instruct_pane_ParamLimits

0x5b88,	// (0x00065cd4) list_single_hwr_training_instruct_pane

0xa73b,	// (0x0006a887) list_single_hwr_training_instruct_pane_t1

0x4914,	// (0x00064a60) bg_frame_shadow_pane_g1

0xa74a,	// (0x0006a896) bg_frame_shadow_pane_g2

0xa752,	// (0x0006a89e) bg_frame_shadow_pane_g3

0xa75a,	// (0x0006a8a6) bg_frame_shadow_pane_g4

0xa762,	// (0x0006a8ae) bg_frame_shadow_pane_g5

0xa76a,	// (0x0006a8b6) bg_frame_shadow_pane_g6

0xa772,	// (0x0006a8be) bg_frame_shadow_pane_g7

0xc54f,	// (0x0006c69b) bg_frame_shadow_pane_g8

0x0007,

0xf86d,	// (0x0006f9b9) bg_frame_shadow_pane_g

0x9cf6,	// (0x00069e42) main_video_tele_dialer_pane

0x5ba5,	// (0x00065cf1) aid_size_cell_video_keypad_ParamLimits

0x5ba5,	// (0x00065cf1) aid_size_cell_video_keypad

0x5bbf,	// (0x00065d0b) grid_video_dialer_keypad_pane_ParamLimits

0x5bbf,	// (0x00065d0b) grid_video_dialer_keypad_pane

0x5c0b,	// (0x00065d57) video_down_pane_cp_ParamLimits

0x5c0b,	// (0x00065d57) video_down_pane_cp

0x5c3b,	// (0x00065d87) cell_video_dialer_keypad_pane_ParamLimits

0x5c3b,	// (0x00065d87) cell_video_dialer_keypad_pane

0xa77a,	// (0x0006a8c6) bg_button_pane_cp08_ParamLimits

0xa77a,	// (0x0006a8c6) bg_button_pane_cp08

0x5c5d,	// (0x00065da9) cell_video_dialer_keypad_pane_g1_ParamLimits

0x5c5d,	// (0x00065da9) cell_video_dialer_keypad_pane_g1

0x52fd,	// (0x00065449) mup3_rocker2_pane_ParamLimits

0x52fd,	// (0x00065449) mup3_rocker2_pane

0x49d4,	// (0x00064b20) mup3_rocker2_pane_g1

0x393c,	// (0x00063a88) main_dialer2_pane

0x9cf6,	// (0x00069e42) main_mp4_pane

0xa78e,	// (0x0006a8da) main_mp4_pane_g1_ParamLimits

0xa78e,	// (0x0006a8da) main_mp4_pane_g1

0xa78e,	// (0x0006a8da) main_mp4_pane_g2_ParamLimits

0xa78e,	// (0x0006a8da) main_mp4_pane_g2

0x5c98,	// (0x00065de4) main_mp4_pane_g3_ParamLimits

0x5c98,	// (0x00065de4) main_mp4_pane_g3

0xa79c,	// (0x0006a8e8) main_mp4_pane_g4_ParamLimits

0xa79c,	// (0x0006a8e8) main_mp4_pane_g4

0xa7c4,	// (0x0006a910) main_mp4_pane_g5_ParamLimits

0xa7c4,	// (0x0006a910) main_mp4_pane_g5

0x0005,

0xf88d,	// (0x0006f9d9) main_mp4_pane_g_ParamLimits

0xf88d,	// (0x0006f9d9) main_mp4_pane_g

0xa814,	// (0x0006a960) main_mp4_pane_t1_ParamLimits

0xa814,	// (0x0006a960) main_mp4_pane_t1

0xa870,	// (0x0006a9bc) main_mp4_pane_t2_ParamLimits

0xa870,	// (0x0006a9bc) main_mp4_pane_t2

0xa8c2,	// (0x0006aa0e) main_mp4_pane_t3_ParamLimits

0xa8c2,	// (0x0006aa0e) main_mp4_pane_t3

0xa8e2,	// (0x0006aa2e) main_mp4_pane_t4_ParamLimits

0xa8e2,	// (0x0006aa2e) main_mp4_pane_t4

0x0003,

0xf89a,	// (0x0006f9e6) main_mp4_pane_t_ParamLimits

0xf89a,	// (0x0006f9e6) main_mp4_pane_t

0xa926,	// (0x0006aa72) mp4_progress_pane_ParamLimits

0xa926,	// (0x0006aa72) mp4_progress_pane

0xa970,	// (0x0006aabc) mp4_rocker_pane_ParamLimits

0xa970,	// (0x0006aabc) mp4_rocker_pane

0xa998,	// (0x0006aae4) mp4_progress_pane_t1

0xa9b1,	// (0x0006aafd) mp4_progress_pane_t2

0x0001,

0xf8a3,	// (0x0006f9ef) mp4_progress_pane_t

0xa9ca,	// (0x0006ab16) mup_progress_pane_cp04

0xa9d6,	// (0x0006ab22) mp4_rocker_pane_g1

0x5cd4,	// (0x00065e20) aid_cell_size_keypad2_ParamLimits

0x5cd4,	// (0x00065e20) aid_cell_size_keypad2

0x5cea,	// (0x00065e36) dialer2_ne_pane_ParamLimits

0x5cea,	// (0x00065e36) dialer2_ne_pane

0x5d04,	// (0x00065e50) grid_dialer2_keypad_pane_ParamLimits

0x5d04,	// (0x00065e50) grid_dialer2_keypad_pane

0x46eb,	// (0x00064837) bg_popup_call_pane_cp07_ParamLimits

0x46eb,	// (0x00064837) bg_popup_call_pane_cp07

0x5d22,	// (0x00065e6e) dialer2_ne_pane_t1_ParamLimits

0x5d22,	// (0x00065e6e) dialer2_ne_pane_t1

0x5d61,	// (0x00065ead) cell_dialer2_keypad_pane_ParamLimits

0x5d61,	// (0x00065ead) cell_dialer2_keypad_pane

0xa9f2,	// (0x0006ab3e) bg_button_pane_pane_cp04_ParamLimits

0xa9f2,	// (0x0006ab3e) bg_button_pane_pane_cp04

0x5d85,	// (0x00065ed1) cell_dialer2_keypad_pane_g1_ParamLimits

0x5d85,	// (0x00065ed1) cell_dialer2_keypad_pane_g1

0x187a,	// (0x000619c6) aid_placing_vt_set_content_ParamLimits

0x187a,	// (0x000619c6) aid_placing_vt_set_content

0x18a2,	// (0x000619ee) aid_placing_vt_set_title_ParamLimits

0x18a2,	// (0x000619ee) aid_placing_vt_set_title

0x9cf6,	// (0x00069e42) main_image3_pane

0x5e4b,	// (0x00065f97) area_side_right_pane_cp01_ParamLimits

0x5e4b,	// (0x00065f97) area_side_right_pane_cp01

0xa78e,	// (0x0006a8da) main_image3_pane_g1_ParamLimits

0xa78e,	// (0x0006a8da) main_image3_pane_g1

0x5e62,	// (0x00065fae) main_image3_pane_g2_ParamLimits

0x5e62,	// (0x00065fae) main_image3_pane_g2

0x5e8a,	// (0x00065fd6) main_image3_pane_g3_ParamLimits

0x5e8a,	// (0x00065fd6) main_image3_pane_g3

0x5eb4,	// (0x00066000) main_image3_pane_g4_ParamLimits

0x5eb4,	// (0x00066000) main_image3_pane_g4

0x0003,

0xf8b2,	// (0x0006f9fe) main_image3_pane_g_ParamLimits

0xf8b2,	// (0x0006f9fe) main_image3_pane_g

0x5ede,	// (0x0006602a) main_image3_pane_t1_ParamLimits

0x5ede,	// (0x0006602a) main_image3_pane_t1

0x5f36,	// (0x00066082) main_image3_pane_t2_ParamLimits

0x5f36,	// (0x00066082) main_image3_pane_t2

0x5f88,	// (0x000660d4) main_image3_pane_t3_ParamLimits

0x5f88,	// (0x000660d4) main_image3_pane_t3

0x0003,

0xf8bb,	// (0x0006fa07) main_image3_pane_t_ParamLimits

0xf8bb,	// (0x0006fa07) main_image3_pane_t

0xc69f,	// (0x0006c7eb) grid_sctrl_middle_pane_cp01_ParamLimits

0xc69f,	// (0x0006c7eb) grid_sctrl_middle_pane_cp01

0x6010,	// (0x0006615c) cell_sctrl_middle_pane_cp01_ParamLimits

0x6010,	// (0x0006615c) cell_sctrl_middle_pane_cp01

0x602d,	// (0x00066179) cell_sctrl_middle_pane_cp01_g1_ParamLimits

0x602d,	// (0x00066179) cell_sctrl_middle_pane_cp01_g1

0x9cf6,	// (0x00069e42) main_call4_pane

0x6043,	// (0x0006618f) aid_size_button_call4_ParamLimits

0x6043,	// (0x0006618f) aid_size_button_call4

0x6074,	// (0x000661c0) call4_windows_pane_ParamLimits

0x6074,	// (0x000661c0) call4_windows_pane

0x6094,	// (0x000661e0) grid_call4_button_pane_ParamLimits

0x6094,	// (0x000661e0) grid_call4_button_pane

0xaa30,	// (0x0006ab7c) call4_windows_conf_pane

0xaa45,	// (0x0006ab91) popup_call4_audio_first_window_ParamLimits

0xaa45,	// (0x0006ab91) popup_call4_audio_first_window

0xaa91,	// (0x0006abdd) popup_call4_audio_second_window_ParamLimits

0xaa91,	// (0x0006abdd) popup_call4_audio_second_window

0xaaa5,	// (0x0006abf1) popup_call4_audio_wait_window_ParamLimits

0xaaa5,	// (0x0006abf1) popup_call4_audio_wait_window

0x60c1,	// (0x0006620d) cell_call4_button_pane_ParamLimits

0x60c1,	// (0x0006620d) cell_call4_button_pane

0x60ea,	// (0x00066236) bg_button_pane_cp09_ParamLimits

0x60ea,	// (0x00066236) bg_button_pane_cp09

0x60f6,	// (0x00066242) cell_call4_button_pane_g1_ParamLimits

0x60f6,	// (0x00066242) cell_call4_button_pane_g1

0x611c,	// (0x00066268) cell_call4_button_pane_t1_ParamLimits

0x611c,	// (0x00066268) cell_call4_button_pane_t1

0xaaed,	// (0x0006ac39) popup_call4_audio_conf_window_ParamLimits

0xaaed,	// (0x0006ac39) popup_call4_audio_conf_window

0x535d,	// (0x000654a9) mup3_progress_pane_t1_ParamLimits

0x537c,	// (0x000654c8) mup3_progress_pane_t2_ParamLimits

0xa18e,	// (0x0006a2da) mup3_progress_pane_t3_ParamLimits

0xf799,	// (0x0006f8e5) mup3_progress_pane_t_ParamLimits

0xa1ab,	// (0x0006a2f7) mup_progress_pane_cp03_ParamLimits

0x595f,	// (0x00065aab) mup3_control_keys_pane_g4_copy1

0xa954,	// (0x0006aaa0) mp4_rocker2_pane_ParamLimits

0xa954,	// (0x0006aaa0) mp4_rocker2_pane

0xab01,	// (0x0006ac4d) mp4_rocker2_pane_g1

0xab09,	// (0x0006ac55) mp4_rocker2_pane_g2

0xab11,	// (0x0006ac5d) mp4_rocker2_pane_g3

0xab19,	// (0x0006ac65) mp4_rocker2_pane_g4

0xab21,	// (0x0006ac6d) mp4_rocker2_pane_g5

0x0004,

0xf8c4,	// (0x0006fa10) mp4_rocker2_pane_g

0x9cf6,	// (0x00069e42) main_camera4_pane

0x9cf6,	// (0x00069e42) main_video4_pane

0x5bd9,	// (0x00065d25) main_video_tele_dialer_pane_t1_ParamLimits

0x5bd9,	// (0x00065d25) main_video_tele_dialer_pane_t1

0x5bf2,	// (0x00065d3e) main_video_tele_dialer_pane_t2_ParamLimits

0x5bf2,	// (0x00065d3e) main_video_tele_dialer_pane_t2

0x0001,

0xf87e,	// (0x0006f9ca) main_video_tele_dialer_pane_t_ParamLimits

0xf87e,	// (0x0006f9ca) main_video_tele_dialer_pane_t

0x615e,	// (0x000662aa) cam4_autofocus_pane_ParamLimits

0x615e,	// (0x000662aa) cam4_autofocus_pane

0x6174,	// (0x000662c0) cam4_image_uncrop_pane_ParamLimits

0x6174,	// (0x000662c0) cam4_image_uncrop_pane

0x618e,	// (0x000662da) cam4_indicators_pane_ParamLimits

0x618e,	// (0x000662da) cam4_indicators_pane

0x61b9,	// (0x00066305) main_camera4_pane_g1_ParamLimits

0x61b9,	// (0x00066305) main_camera4_pane_g1

0x61cb,	// (0x00066317) main_camera4_pane_g2_ParamLimits

0x61cb,	// (0x00066317) main_camera4_pane_g2

0x61de,	// (0x0006632a) main_camera4_pane_g3_ParamLimits

0x61de,	// (0x0006632a) main_camera4_pane_g3

0x61f1,	// (0x0006633d) main_camera4_pane_g4_ParamLimits

0x61f1,	// (0x0006633d) main_camera4_pane_g4

0x6204,	// (0x00066350) main_camera4_pane_g5_ParamLimits

0x6204,	// (0x00066350) main_camera4_pane_g5

0x0005,

0xf8cf,	// (0x0006fa1b) main_camera4_pane_g_ParamLimits

0xf8cf,	// (0x0006fa1b) main_camera4_pane_g

0x6228,	// (0x00066374) main_camera4_pane_t1_ParamLimits

0x6228,	// (0x00066374) main_camera4_pane_t1

0xab57,	// (0x0006aca3) bg_tb_trans_pane_cp06

0xab6d,	// (0x0006acb9) cam4_indicators_pane_g1

0xab7e,	// (0x0006acca) cam4_indicators_pane_g2

0x0002,

0xf8ea,	// (0x0006fa36) cam4_indicators_pane_g

0xab9c,	// (0x0006ace8) cam4_indicators_pane_t1

0x628c,	// (0x000663d8) main_video4_pane_g1_ParamLimits

0x628c,	// (0x000663d8) main_video4_pane_g1

0x629b,	// (0x000663e7) main_video4_pane_g2_ParamLimits

0x629b,	// (0x000663e7) main_video4_pane_g2

0x62aa,	// (0x000663f6) main_video4_pane_g3_ParamLimits

0x62aa,	// (0x000663f6) main_video4_pane_g3

0x62b9,	// (0x00066405) main_video4_pane_g4_ParamLimits

0x62b9,	// (0x00066405) main_video4_pane_g4

0x0004,

0xf8f1,	// (0x0006fa3d) main_video4_pane_g_ParamLimits

0xf8f1,	// (0x0006fa3d) main_video4_pane_g

0x62d7,	// (0x00066423) vid4_indicators_pane_ParamLimits

0x62d7,	// (0x00066423) vid4_indicators_pane

0x6307,	// (0x00066453) video4_image_uncrop_cif_pane_ParamLimits

0x6307,	// (0x00066453) video4_image_uncrop_cif_pane

0x6321,	// (0x0006646d) video4_image_uncrop_nhd_pane_ParamLimits

0x6321,	// (0x0006646d) video4_image_uncrop_nhd_pane

0x6174,	// (0x000662c0) video4_image_uncrop_vga_pane_ParamLimits

0x6174,	// (0x000662c0) video4_image_uncrop_vga_pane

0x9ce8,	// (0x00069e34) bg_tb_trans_pane_cp07

0xabc6,	// (0x0006ad12) vid4_indicators_pane_g1

0xabda,	// (0x0006ad26) vid4_indicators_pane_g2

0xabee,	// (0x0006ad3a) vid4_indicators_pane_g3

0x0004,

0xf8fc,	// (0x0006fa48) vid4_indicators_pane_g

0xac1b,	// (0x0006ad67) vid4_indicators_pane_t1

0x6335,	// (0x00066481) cam4_autofocus_pane_g1

0x633d,	// (0x00066489) cam4_autofocus_pane_g2

0x6345,	// (0x00066491) cam4_autofocus_pane_g3

0x0002,

0xf907,	// (0x0006fa53) cam4_autofocus_pane_g

0x634d,	// (0x00066499) cam4_autofocus_pane_g3_copy1

0x5c1f,	// (0x00065d6b) video_down_pane_cp_t1

0x5c2d,	// (0x00065d79) video_down_pane_cp_t2

0x0001,

0xf883,	// (0x0006f9cf) video_down_pane_cp_t

0x9ce8,	// (0x00069e34) popup_vitu2_window_ParamLimits

0x9ce8,	// (0x00069e34) popup_vitu2_window

0x6355,	// (0x000664a1) aid_size_cell2_itu2_ParamLimits

0x6355,	// (0x000664a1) aid_size_cell2_itu2

0x637b,	// (0x000664c7) aid_size_cell_itu2_ParamLimits

0x637b,	// (0x000664c7) aid_size_cell_itu2

0x63d7,	// (0x00066523) bg_popup_window_pane_cp09_ParamLimits

0x63d7,	// (0x00066523) bg_popup_window_pane_cp09

0x63e5,	// (0x00066531) field_vitu2_entry_pane_ParamLimits

0x63e5,	// (0x00066531) field_vitu2_entry_pane

0x640b,	// (0x00066557) grid_vitu2_function_pane_ParamLimits

0x640b,	// (0x00066557) grid_vitu2_function_pane

0x645c,	// (0x000665a8) grid_vitu2_itu_pane_ParamLimits

0x645c,	// (0x000665a8) grid_vitu2_itu_pane

0x64ed,	// (0x00066639) cell_vitu2_itu_pane_ParamLimits

0x64ed,	// (0x00066639) cell_vitu2_itu_pane

0x6511,	// (0x0006665d) cell_vitu2_function_pane_ParamLimits

0x6511,	// (0x0006665d) cell_vitu2_function_pane

0xac32,	// (0x0006ad7e) bg_popup_call_pane_cp08_ParamLimits

0xac32,	// (0x0006ad7e) bg_popup_call_pane_cp08

0xac4b,	// (0x0006ad97) field_vitu2_entry_pane_g1

0xac57,	// (0x0006ada3) field_vitu2_entry_pane_g2

0x0002,

0xf90e,	// (0x0006fa5a) field_vitu2_entry_pane_g

0x6550,	// (0x0006669c) field_vitu2_entry_pane_t1_ParamLimits

0x6550,	// (0x0006669c) field_vitu2_entry_pane_t1

0x6582,	// (0x000666ce) field_vitu2_entry_pane_t2_ParamLimits

0x6582,	// (0x000666ce) field_vitu2_entry_pane_t2

0x0001,

0xf915,	// (0x0006fa61) field_vitu2_entry_pane_t_ParamLimits

0xf915,	// (0x0006fa61) field_vitu2_entry_pane_t

0x659f,	// (0x000666eb) bg_button_pane_cp010_ParamLimits

0x659f,	// (0x000666eb) bg_button_pane_cp010

0x65ad,	// (0x000666f9) cell_vitu2_itu_pane_g1

0x65cb,	// (0x00066717) cell_vitu2_itu_pane_t1_ParamLimits

0x65cb,	// (0x00066717) cell_vitu2_itu_pane_t1

0x0975,	// (0x00060ac1) cell_vitu2_itu_pane_t2_ParamLimits

0x0975,	// (0x00060ac1) cell_vitu2_itu_pane_t2

0x0002,

0xf91f,	// (0x0006fa6b) cell_vitu2_itu_pane_t_ParamLimits

0xf91f,	// (0x0006fa6b) cell_vitu2_itu_pane_t

0x9ce8,	// (0x00069e34) bg_button_pane_cp011

0x6631,	// (0x0006677d) cell_vitu2_function_pane_g1

0x9cf6,	// (0x00069e42) main_myfav_hc_pane

0x5fd8,	// (0x00066124) popup_image3_note_pane_ParamLimits

0x5fd8,	// (0x00066124) popup_image3_note_pane

0x5ff4,	// (0x00066140) popup_image3_tool_bar_pane_ParamLimits

0x5ff4,	// (0x00066140) popup_image3_tool_bar_pane

0x09f9,	// (0x00060b45) cell_vitu2_itu_pane_t3_ParamLimits

0x09f9,	// (0x00060b45) cell_vitu2_itu_pane_t3

0xbcf7,	// (0x0006be43) bg_popup_trans_pane

0xac79,	// (0x0006adc5) grid_image3_tool_bar_pane

0xac83,	// (0x0006adcf) bg_popup_trans_pane_g1

0xd413,	// (0x0006d55f) bg_popup_trans_pane_g2

0xac8b,	// (0x0006add7) bg_popup_trans_pane_g3

0xac93,	// (0x0006addf) bg_popup_trans_pane_g4

0xac9b,	// (0x0006ade7) bg_popup_trans_pane_g5

0xaca3,	// (0x0006adef) bg_popup_trans_pane_g6

0xacab,	// (0x0006adf7) bg_popup_trans_pane_g7

0xacb3,	// (0x0006adff) bg_popup_trans_pane_g8

0xd3f3,	// (0x0006d53f) bg_popup_trans_pane_g9

0x0008,

0xf926,	// (0x0006fa72) bg_popup_trans_pane_g

0xacbb,	// (0x0006ae07) cell_image3_tool_bar_pane_ParamLimits

0xacbb,	// (0x0006ae07) cell_image3_tool_bar_pane

0x49d4,	// (0x00064b20) cell_image3_tool_bar_pane_g1

0xbcf7,	// (0x0006be43) bg_popup_trans_pane_cp1

0xaccf,	// (0x0006ae1b) popup_image3_note_pane_t1

0xacdd,	// (0x0006ae29) popup_image3_note_pane_t2

0xaceb,	// (0x0006ae37) popup_image3_note_pane_t3

0x0002,

0xf939,	// (0x0006fa85) popup_image3_note_pane_t

0xacf9,	// (0x0006ae45) popup_image3_note_pane_t3_copy1

0x6645,	// (0x00066791) bg_myfav_hc_instruction_pane_ParamLimits

0x6645,	// (0x00066791) bg_myfav_hc_instruction_pane

0x665b,	// (0x000667a7) cell_myfav_contact_pane_ParamLimits

0x665b,	// (0x000667a7) cell_myfav_contact_pane

0x6677,	// (0x000667c3) cell_myfav_contact_pane_cp1_ParamLimits

0x6677,	// (0x000667c3) cell_myfav_contact_pane_cp1

0x668f,	// (0x000667db) cell_myfav_contact_pane_cp2_ParamLimits

0x668f,	// (0x000667db) cell_myfav_contact_pane_cp2

0x66a7,	// (0x000667f3) cell_myfav_contact_pane_cp3_ParamLimits

0x66a7,	// (0x000667f3) cell_myfav_contact_pane_cp3

0x66be,	// (0x0006680a) cell_myfav_contact_pane_cp4_ParamLimits

0x66be,	// (0x0006680a) cell_myfav_contact_pane_cp4

0x66d6,	// (0x00066822) cell_myfav_contact_pane_cp5_ParamLimits

0x66d6,	// (0x00066822) cell_myfav_contact_pane_cp5

0x66ea,	// (0x00066836) cell_myfav_contact_pane_cp6_ParamLimits

0x66ea,	// (0x00066836) cell_myfav_contact_pane_cp6

0x6700,	// (0x0006684c) cell_myfav_contact_pane_cp7_ParamLimits

0x6700,	// (0x0006684c) cell_myfav_contact_pane_cp7

0xad07,	// (0x0006ae53) listscroll_gen_pane_cp05

0x671a,	// (0x00066866) main_myfav_hc_pane_g1_ParamLimits

0x671a,	// (0x00066866) main_myfav_hc_pane_g1

0x6734,	// (0x00066880) main_myfav_hc_pane_g2_ParamLimits

0x6734,	// (0x00066880) main_myfav_hc_pane_g2

0x0002,

0xf940,	// (0x0006fa8c) main_myfav_hc_pane_g_ParamLimits

0xf940,	// (0x0006fa8c) main_myfav_hc_pane_g

0x6766,	// (0x000668b2) main_myfav_hc_pane_t1_ParamLimits

0x6766,	// (0x000668b2) main_myfav_hc_pane_t1

0xad10,	// (0x0006ae5c) main_myfav_hc_pane_t2_ParamLimits

0xad10,	// (0x0006ae5c) main_myfav_hc_pane_t2

0xad22,	// (0x0006ae6e) main_myfav_hc_pane_t3_ParamLimits

0xad22,	// (0x0006ae6e) main_myfav_hc_pane_t3

0x677d,	// (0x000668c9) main_myfav_hc_pane_t4_ParamLimits

0x677d,	// (0x000668c9) main_myfav_hc_pane_t4

0x0004,

0xf947,	// (0x0006fa93) main_myfav_hc_pane_t_ParamLimits

0xf947,	// (0x0006fa93) main_myfav_hc_pane_t

0x49d4,	// (0x00064b20) bg_myfav_hc_instruction_pane_g1

0xad34,	// (0x0006ae80) cell_myfav_contact_pane_g1_ParamLimits

0xad34,	// (0x0006ae80) cell_myfav_contact_pane_g1

0xad34,	// (0x0006ae80) cell_myfav_contact_pane_g2_ParamLimits

0xad34,	// (0x0006ae80) cell_myfav_contact_pane_g2

0xad40,	// (0x0006ae8c) cell_myfav_contact_pane_g3_ParamLimits

0xad40,	// (0x0006ae8c) cell_myfav_contact_pane_g3

0xa178,	// (0x0006a2c4) cell_myfav_contact_pane_g4_ParamLimits

0xa178,	// (0x0006a2c4) cell_myfav_contact_pane_g4

0xad4d,	// (0x0006ae99) cell_myfav_contact_pane_g5_ParamLimits

0xad4d,	// (0x0006ae99) cell_myfav_contact_pane_g5

0x0004,

0xf952,	// (0x0006fa9e) cell_myfav_contact_pane_g_ParamLimits

0xf952,	// (0x0006fa9e) cell_myfav_contact_pane_g

0x674e,	// (0x0006689a) main_myfav_hc_pane_g3_ParamLimits

0x674e,	// (0x0006689a) main_myfav_hc_pane_g3

0x0baf,	// (0x00060cfb) popup_adpt_find_window

0x67a5,	// (0x000668f1) afind_page_pane_ParamLimits

0x67a5,	// (0x000668f1) afind_page_pane

0x67ba,	// (0x00066906) aid_size_cell_afind_ParamLimits

0x67ba,	// (0x00066906) aid_size_cell_afind

0x67d8,	// (0x00066924) bg_popup_sub_pane_cp09_ParamLimits

0x67d8,	// (0x00066924) bg_popup_sub_pane_cp09

0x67e5,	// (0x00066931) find_pane_cp01_ParamLimits

0x67e5,	// (0x00066931) find_pane_cp01

0xad59,	// (0x0006aea5) grid_afind_control_pane_ParamLimits

0xad59,	// (0x0006aea5) grid_afind_control_pane

0x67f2,	// (0x0006693e) grid_afind_pane_ParamLimits

0x67f2,	// (0x0006693e) grid_afind_pane

0x6814,	// (0x00066960) cell_afind_pane_ParamLimits

0x6814,	// (0x00066960) cell_afind_pane

0x49d4,	// (0x00064b20) afind_page_pane_g1

0x6875,	// (0x000669c1) afind_page_pane_g2

0x687e,	// (0x000669ca) afind_page_pane_g3

0x0002,

0xf95d,	// (0x0006faa9) afind_page_pane_g

0x6887,	// (0x000669d3) afind_page_pane_t1

0xad6d,	// (0x0006aeb9) cell_afind_grid_control_pane_ParamLimits

0xad6d,	// (0x0006aeb9) cell_afind_grid_control_pane

0xa9f2,	// (0x0006ab3e) bg_button_pane_cp69_ParamLimits

0xa9f2,	// (0x0006ab3e) bg_button_pane_cp69

0x68a7,	// (0x000669f3) cell_afind_pane_g1_ParamLimits

0x68a7,	// (0x000669f3) cell_afind_pane_g1

0x68b4,	// (0x00066a00) cell_afind_pane_t1_ParamLimits

0x68b4,	// (0x00066a00) cell_afind_pane_t1

0xc68f,	// (0x0006c7db) bg_button_pane_cp72

0xad7c,	// (0x0006aec8) cell_afind_grid_control_pane_g1

0x33ff,	// (0x0006354b) aid_image_placing_area_ParamLimits

0x33ff,	// (0x0006354b) aid_image_placing_area

0xa47d,	// (0x0006a5c9) field_vitu_entry_pane_g1_ParamLimits

0xa47d,	// (0x0006a5c9) field_vitu_entry_pane_g1

0xa489,	// (0x0006a5d5) field_vitu_entry_pane_g2_ParamLimits

0xa489,	// (0x0006a5d5) field_vitu_entry_pane_g2

0x0001,

0xf80e,	// (0x0006f95a) field_vitu_entry_pane_g_ParamLimits

0xf80e,	// (0x0006f95a) field_vitu_entry_pane_g

0x5a2c,	// (0x00065b78) cell_vitu_itu_pane_g1_ParamLimits

0x5a6e,	// (0x00065bba) cell_vitu_itu_pane_t3_ParamLimits

0x5a6e,	// (0x00065bba) cell_vitu_itu_pane_t3

0xa998,	// (0x0006aae4) mp4_progress_pane_t1_ParamLimits

0xa9b1,	// (0x0006aafd) mp4_progress_pane_t2_ParamLimits

0xf8a3,	// (0x0006f9ef) mp4_progress_pane_t_ParamLimits

0xa9ca,	// (0x0006ab16) mup_progress_pane_cp04_ParamLimits

0x6791,	// (0x000668dd) main_myfav_hc_pane_t5_ParamLimits

0x6791,	// (0x000668dd) main_myfav_hc_pane_t5

0x9c96,	// (0x00069de2) aid_zoom_text_primary

0x0baf,	// (0x00060cfb) popup_adpt_find_window_ParamLimits

0x9ce8,	// (0x00069e34) main_cam_set_pane

0x61a5,	// (0x000662f1) cam4_zoom_pane_ParamLimits

0x61a5,	// (0x000662f1) cam4_zoom_pane

0x68c6,	// (0x00066a12) main_cam_set_pane_g1_ParamLimits

0x68c6,	// (0x00066a12) main_cam_set_pane_g1

0x68d4,	// (0x00066a20) main_cam_set_pane_g2_ParamLimits

0x68d4,	// (0x00066a20) main_cam_set_pane_g2

0x0001,

0xf964,	// (0x0006fab0) main_cam_set_pane_g_ParamLimits

0xf964,	// (0x0006fab0) main_cam_set_pane_g

0x68f5,	// (0x00066a41) main_cam_set_pane_t1_ParamLimits

0x68f5,	// (0x00066a41) main_cam_set_pane_t1

0x6910,	// (0x00066a5c) main_cset_listscroll_pane_ParamLimits

0x6910,	// (0x00066a5c) main_cset_listscroll_pane

0x6930,	// (0x00066a7c) main_cset_slider_pane_ParamLimits

0x6930,	// (0x00066a7c) main_cset_slider_pane

0xad8d,	// (0x0006aed9) main_cset_list_pane_ParamLimits

0xad8d,	// (0x0006aed9) main_cset_list_pane

0xad9d,	// (0x0006aee9) scroll_pane_cp028

0x6956,	// (0x00066aa2) aid_area_touch_slider

0x6972,	// (0x00066abe) cset_slider_pane

0x699c,	// (0x00066ae8) main_cset_slider_pane_g1

0x69b1,	// (0x00066afd) main_cset_slider_pane_g2

0x0011,

0xf969,	// (0x0006fab5) main_cset_slider_pane_g

0xadd6,	// (0x0006af22) main_cset_slider_pane_t1

0x6a6d,	// (0x00066bb9) main_cset_slider_pane_t2

0x6a87,	// (0x00066bd3) main_cset_slider_pane_t3

0x6aa1,	// (0x00066bed) main_cset_slider_pane_t4

0x6abb,	// (0x00066c07) main_cset_slider_pane_t5

0x6ad7,	// (0x00066c23) main_cset_slider_pane_t6

0x6aec,	// (0x00066c38) main_cset_slider_pane_t7

0x000e,

0xf98e,	// (0x0006fada) main_cset_slider_pane_t

0x6bf0,	// (0x00066d3c) cset_list_set_pane_ParamLimits

0x6bf0,	// (0x00066d3c) cset_list_set_pane

0x6c04,	// (0x00066d50) aid_position_infowindow_above

0x6c0c,	// (0x00066d58) aid_position_infowindow_below

0x6c14,	// (0x00066d60) cset_list_set_pane_g1_ParamLimits

0x6c14,	// (0x00066d60) cset_list_set_pane_g1

0x6c20,	// (0x00066d6c) cset_list_set_pane_g3_ParamLimits

0x6c20,	// (0x00066d6c) cset_list_set_pane_g3

0x0001,

0xf9ad,	// (0x0006faf9) cset_list_set_pane_g_ParamLimits

0xf9ad,	// (0x0006faf9) cset_list_set_pane_g

0x6c2f,	// (0x00066d7b) cset_list_set_pane_t1_ParamLimits

0x6c2f,	// (0x00066d7b) cset_list_set_pane_t1

0xc69f,	// (0x0006c7eb) list_highlight_pane_cp021_ParamLimits

0xc69f,	// (0x0006c7eb) list_highlight_pane_cp021

0xdd23,	// (0x0006de6f) cset_slider_pane_g1

0xdd35,	// (0x0006de81) cset_slider_pane_g2

0xdd2c,	// (0x0006de78) cset_slider_pane_g3

0x0002,

0x03d8,	// (0x00060524) cset_slider_pane_g

0xae76,	// (0x0006afc2) aid_area_touch_cam4_zoom

0xae7e,	// (0x0006afca) cam4_zoom_cont_pane

0xae86,	// (0x0006afd2) cam4_zoom_pane_g1

0xae8e,	// (0x0006afda) cam4_zoom_pane_g2

0x6c44,	// (0x00066d90) cam4_zoom_pane_g3

0x0002,

0xf9b2,	// (0x0006fafe) cam4_zoom_pane_g

0xae96,	// (0x0006afe2) cam4_zoom_cont_pane_g1

0xae9f,	// (0x0006afeb) cam4_zoom_cont_pane_g2

0xaea8,	// (0x0006aff4) cam4_zoom_cont_pane_g3

0x0002,

0xf9b9,	// (0x0006fb05) cam4_zoom_cont_pane_g

0x6061,	// (0x000661ad) call4_image_pane_ParamLimits

0x6061,	// (0x000661ad) call4_image_pane

0xaa30,	// (0x0006ab7c) call4_windows_conf_pane_ParamLimits

0xaa6f,	// (0x0006abbb) popup_call4_audio_in_window_ParamLimits

0xaa6f,	// (0x0006abbb) popup_call4_audio_in_window

0xbcf7,	// (0x0006be43) bg_popup_call2_act_pane_cp02

0xaae5,	// (0x0006ac31) call4_list_conf_pane

0x49d4,	// (0x00064b20) call4_image_pane_g1

0x49d4,	// (0x00064b20) call4_image_pane_g2

0x0001,

0xf6d9,	// (0x0006f825) call4_image_pane_g

0xaeb1,	// (0x0006affd) list_single_graphic_popup_conf4_pane_ParamLimits

0xaeb1,	// (0x0006affd) list_single_graphic_popup_conf4_pane

0xbcf7,	// (0x0006be43) list_highlight_pane_cp022

0xaec4,	// (0x0006b010) list_single_graphic_popup_conf4_pane_g1

0xda06,	// (0x0006db52) list_single_graphic_popup_conf4_pane_g2

0x0001,

0xf9c0,	// (0x0006fb0c) list_single_graphic_popup_conf4_pane_g

0xaecc,	// (0x0006b018) list_single_graphic_popup_conf4_pane_t1

0x19c6,	// (0x00061b12) popup_vtel_slider_window_ParamLimits

0x19c6,	// (0x00061b12) popup_vtel_slider_window

0xa9e0,	// (0x0006ab2c) dialer2_ne_pane_t2_ParamLimits

0xa9e0,	// (0x0006ab2c) dialer2_ne_pane_t2

0x0001,

0xf8a8,	// (0x0006f9f4) dialer2_ne_pane_t_ParamLimits

0xf8a8,	// (0x0006f9f4) dialer2_ne_pane_t

0x46eb,	// (0x00064837) bg_popup_sub_pane_cp010_ParamLimits

0x46eb,	// (0x00064837) bg_popup_sub_pane_cp010

0x6c4c,	// (0x00066d98) popup_vtel_slider_window_g1_ParamLimits

0x6c4c,	// (0x00066d98) popup_vtel_slider_window_g1

0x6c5f,	// (0x00066dab) popup_vtel_slider_window_g2_ParamLimits

0x6c5f,	// (0x00066dab) popup_vtel_slider_window_g2

0x0003,

0xf9c5,	// (0x0006fb11) popup_vtel_slider_window_g_ParamLimits

0xf9c5,	// (0x0006fb11) popup_vtel_slider_window_g

0x6cb5,	// (0x00066e01) vtel_slider_pane_ParamLimits

0x6cb5,	// (0x00066e01) vtel_slider_pane

0x6cd7,	// (0x00066e23) vtel_slider_pane_g1_ParamLimits

0x6cd7,	// (0x00066e23) vtel_slider_pane_g1

0x6ceb,	// (0x00066e37) vtel_slider_pane_g2_ParamLimits

0x6ceb,	// (0x00066e37) vtel_slider_pane_g2

0x6d03,	// (0x00066e4f) vtel_slider_pane_g3_ParamLimits

0x6d03,	// (0x00066e4f) vtel_slider_pane_g3

0x6cd7,	// (0x00066e23) vtel_slider_pane_g4_ParamLimits

0x6cd7,	// (0x00066e23) vtel_slider_pane_g4

0x6d19,	// (0x00066e65) vtel_slider_pane_g5_ParamLimits

0x6d19,	// (0x00066e65) vtel_slider_pane_g5

0x0004,

0xf9ce,	// (0x0006fb1a) vtel_slider_pane_g_ParamLimits

0xf9ce,	// (0x0006fb1a) vtel_slider_pane_g

0x9cf6,	// (0x00069e42) main_gallery2_pane

0x63a7,	// (0x000664f3) aid_size_row_itut2_dropdow_list_ParamLimits

0x63a7,	// (0x000664f3) aid_size_row_itut2_dropdow_list

0x6433,	// (0x0006657f) grid_vitu2_function_top_pane_ParamLimits

0x6433,	// (0x0006657f) grid_vitu2_function_top_pane

0x6498,	// (0x000665e4) popup_vitu2_dropdown_list_window_ParamLimits

0x6498,	// (0x000665e4) popup_vitu2_dropdown_list_window

0x64c1,	// (0x0006660d) popup_vitu2_match_list_window

0x6d3d,	// (0x00066e89) cell_vitu2_function_top_pane_ParamLimits

0x6d3d,	// (0x00066e89) cell_vitu2_function_top_pane

0x6d5b,	// (0x00066ea7) cell_vitu2_function_top_pane_cp01_ParamLimits

0x6d5b,	// (0x00066ea7) cell_vitu2_function_top_pane_cp01

0x6d79,	// (0x00066ec5) cell_vitu2_function_top_wide_pane_ParamLimits

0x6d79,	// (0x00066ec5) cell_vitu2_function_top_wide_pane

0x9ce8,	// (0x00069e34) bg_button_pane_cp012

0x6d97,	// (0x00066ee3) cell_vitu2_function_top_pane_g1

0xaee2,	// (0x0006b02e) bg_button_pane_cp013_ParamLimits

0xaee2,	// (0x0006b02e) bg_button_pane_cp013

0x6dab,	// (0x00066ef7) cell_vitu2_function_top_wide_pane_g1_ParamLimits

0x6dab,	// (0x00066ef7) cell_vitu2_function_top_wide_pane_g1

0x9ce8,	// (0x00069e34) bg_popup_sub_pane_cp20

0x6dc3,	// (0x00066f0f) list_vitu2_match_list_pane

0xac83,	// (0x0006adcf) bg_popup_sub_pane_cp20_g1

0xac8b,	// (0x0006add7) bg_popup_sub_pane_cp20_g2

0xd413,	// (0x0006d55f) bg_popup_sub_pane_cp20_g3

0xac93,	// (0x0006addf) bg_popup_sub_pane_cp20_g4

0xd3f3,	// (0x0006d53f) bg_popup_sub_pane_cp20_g5

0xaefe,	// (0x0006b04a) bg_popup_sub_pane_cp20_g6

0xaca3,	// (0x0006adef) bg_popup_sub_pane_cp20_g7

0xacab,	// (0x0006adf7) bg_popup_sub_pane_cp20_g8

0xacb3,	// (0x0006adff) bg_popup_sub_pane_cp20_g9

0x0008,

0xf9d9,	// (0x0006fb25) bg_popup_sub_pane_cp20_g

0xaf06,	// (0x0006b052) list_vitu2_match_list_item_pane_ParamLimits

0xaf06,	// (0x0006b052) list_vitu2_match_list_item_pane

0xaf18,	// (0x0006b064) list_vitu2_match_list_item_pane_t1

0x9cf6,	// (0x00069e42) bg_popup_sub_pane_cp21

0xaf26,	// (0x0006b072) grid_vitu2_dropdown_list_pane

0x6e2e,	// (0x00066f7a) cell_vitu2_dropdown_list_char_pane_ParamLimits

0x6e2e,	// (0x00066f7a) cell_vitu2_dropdown_list_char_pane

0x6e4f,	// (0x00066f9b) cell_vitu2_dropdown_list_ctrl_pane_ParamLimits

0x6e4f,	// (0x00066f9b) cell_vitu2_dropdown_list_ctrl_pane

0xaf2e,	// (0x0006b07a) cell_vitu2_dropdown_list_char_pane_g1

0xaf37,	// (0x0006b083) cell_vitu2_dropdown_list_char_pane_g2

0xaf40,	// (0x0006b08c) cell_vitu2_dropdown_list_char_pane_g3

0x0002,

0xf9f6,	// (0x0006fb42) cell_vitu2_dropdown_list_char_pane_g

0x6e7b,	// (0x00066fc7) cell_vitu2_dropdown_list_char_pane_t1

0x6e89,	// (0x00066fd5) cell_vitu2_dropdown_list_ctrl_pane_g1_ParamLimits

0x6e89,	// (0x00066fd5) cell_vitu2_dropdown_list_ctrl_pane_g1

0x6e99,	// (0x00066fe5) cell_vitu2_dropdown_list_ctrl_pane_g2_ParamLimits

0x6e99,	// (0x00066fe5) cell_vitu2_dropdown_list_ctrl_pane_g2

0x6eaa,	// (0x00066ff6) cell_vitu2_dropdown_list_ctrl_pane_g3_ParamLimits

0x6eaa,	// (0x00066ff6) cell_vitu2_dropdown_list_ctrl_pane_g3

0x6eba,	// (0x00067006) cell_vitu2_dropdown_list_ctrl_pane_g4_ParamLimits

0x6eba,	// (0x00067006) cell_vitu2_dropdown_list_ctrl_pane_g4

0xab57,	// (0x0006aca3) cell_vitu2_dropdown_list_ctrl_pane_g5_ParamLimits

0xab57,	// (0x0006aca3) cell_vitu2_dropdown_list_ctrl_pane_g5

0x0004,

0xf9fd,	// (0x0006fb49) cell_vitu2_dropdown_list_ctrl_pane_g_ParamLimits

0xf9fd,	// (0x0006fb49) cell_vitu2_dropdown_list_ctrl_pane_g

0x6ed6,	// (0x00067022) aid_size_cell_gallery2_ParamLimits

0x6ed6,	// (0x00067022) aid_size_cell_gallery2

0x6eec,	// (0x00067038) grid_gallery2_pane_ParamLimits

0x6eec,	// (0x00067038) grid_gallery2_pane

0x6f00,	// (0x0006704c) scroll_pane_cp029_ParamLimits

0x6f00,	// (0x0006704c) scroll_pane_cp029

0x6f0c,	// (0x00067058) cell_gallery2_pane_ParamLimits

0x6f0c,	// (0x00067058) cell_gallery2_pane

0xaf49,	// (0x0006b095) cell_gallery2_pane_g2

0x6f42,	// (0x0006708e) cell_gallery2_pane_g3

0xaf53,	// (0x0006b09f) cell_gallery2_pane_g4

0xaf5b,	// (0x0006b0a7) cell_gallery2_pane_g5

0xdbdf,	// (0x0006dd2b) grid_highlight_pane_cp10

0x64c1,	// (0x0006660d) popup_vitu2_match_list_window_ParamLimits

0x64d6,	// (0x00066622) popup_vitu2_query_window_ParamLimits

0x64d6,	// (0x00066622) popup_vitu2_query_window

0x9cf6,	// (0x00069e42) bg_vitu2_candi_button_pane

0xaf2e,	// (0x0006b07a) cell_vitu2_dropdown_list_char_pane_g1_copy1

0xaf37,	// (0x0006b083) cell_vitu2_dropdown_list_char_pane_g2_copy1

0xaf40,	// (0x0006b08c) cell_vitu2_dropdown_list_char_pane_g2_copy2

0x6f4a,	// (0x00067096) bg_button_pane_cp015

0x6f5e,	// (0x000670aa) bg_button_pane_cp016

0x6f71,	// (0x000670bd) bg_button_pane_cp017

0xf02a,	// (0x0006f176) bg_popup_sub_pane_cp22

0xaf63,	// (0x0006b0af) popup_vitu2_query_window_g1

0x6fb6,	// (0x00067102) popup_vitu2_query_window_g2

0x0002,

0xfa08,	// (0x0006fb54) popup_vitu2_query_window_g

0x6fd5,	// (0x00067121) popup_vitu2_query_window_t1_ParamLimits

0x6fd5,	// (0x00067121) popup_vitu2_query_window_t1

0x700a,	// (0x00067156) popup_vitu2_query_window_t2_ParamLimits

0x700a,	// (0x00067156) popup_vitu2_query_window_t2

0x701c,	// (0x00067168) popup_vitu2_query_window_t3_ParamLimits

0x701c,	// (0x00067168) popup_vitu2_query_window_t3

0x7044,	// (0x00067190) popup_vitu2_query_window_t4_ParamLimits

0x7044,	// (0x00067190) popup_vitu2_query_window_t4

0x7065,	// (0x000671b1) popup_vitu2_query_window_t5_ParamLimits

0x7065,	// (0x000671b1) popup_vitu2_query_window_t5

0x0006,

0xfa0f,	// (0x0006fb5b) popup_vitu2_query_window_t_ParamLimits

0xfa0f,	// (0x0006fb5b) popup_vitu2_query_window_t

0xad85,	// (0x0006aed1) main_cset_text_pane

0x6956,	// (0x00066aa2) aid_area_touch_slider_ParamLimits

0x6972,	// (0x00066abe) cset_slider_pane_ParamLimits

0x699c,	// (0x00066ae8) main_cset_slider_pane_g1_ParamLimits

0x69b1,	// (0x00066afd) main_cset_slider_pane_g2_ParamLimits

0xada6,	// (0x0006aef2) main_cset_slider_pane_g3_ParamLimits

0xada6,	// (0x0006aef2) main_cset_slider_pane_g3

0x69c6,	// (0x00066b12) main_cset_slider_pane_g4_ParamLimits

0x69c6,	// (0x00066b12) main_cset_slider_pane_g4

0x69d5,	// (0x00066b21) main_cset_slider_pane_g5_ParamLimits

0x69d5,	// (0x00066b21) main_cset_slider_pane_g5

0x69e1,	// (0x00066b2d) main_cset_slider_pane_g6_ParamLimits

0x69e1,	// (0x00066b2d) main_cset_slider_pane_g6

0xf969,	// (0x0006fab5) main_cset_slider_pane_g_ParamLimits

0xadd6,	// (0x0006af22) main_cset_slider_pane_t1_ParamLimits

0x6a6d,	// (0x00066bb9) main_cset_slider_pane_t2_ParamLimits

0x6a87,	// (0x00066bd3) main_cset_slider_pane_t3_ParamLimits

0x6aa1,	// (0x00066bed) main_cset_slider_pane_t4_ParamLimits

0x6abb,	// (0x00066c07) main_cset_slider_pane_t5_ParamLimits

0x6ad7,	// (0x00066c23) main_cset_slider_pane_t6_ParamLimits

0x6aec,	// (0x00066c38) main_cset_slider_pane_t7_ParamLimits

0x6b16,	// (0x00066c62) main_cset_slider_pane_t8_ParamLimits

0x6b16,	// (0x00066c62) main_cset_slider_pane_t8

0x6b3e,	// (0x00066c8a) main_cset_slider_pane_t9_ParamLimits

0x6b3e,	// (0x00066c8a) main_cset_slider_pane_t9

0x6b66,	// (0x00066cb2) main_cset_slider_pane_t10_ParamLimits

0x6b66,	// (0x00066cb2) main_cset_slider_pane_t10

0x6b8e,	// (0x00066cda) main_cset_slider_pane_t11_ParamLimits

0x6b8e,	// (0x00066cda) main_cset_slider_pane_t11

0x6bb6,	// (0x00066d02) main_cset_slider_pane_t12_ParamLimits

0x6bb6,	// (0x00066d02) main_cset_slider_pane_t12

0x6bd3,	// (0x00066d1f) main_cset_slider_pane_t13_ParamLimits

0x6bd3,	// (0x00066d1f) main_cset_slider_pane_t13

0xf98e,	// (0x0006fada) main_cset_slider_pane_t_ParamLimits

0xbcf7,	// (0x0006be43) bg_popup_sub_pane_cp011

0xaf6f,	// (0x0006b0bb) main_cset_text_pane_g1

0xaf77,	// (0x0006b0c3) main_cset_text_pane_t1

0xaf85,	// (0x0006b0d1) main_cset_text_pane_t2

0xaf93,	// (0x0006b0df) main_cset_text_pane_t3

0xafa1,	// (0x0006b0ed) main_cset_text_pane_t4

0xafaf,	// (0x0006b0fb) main_cset_text_pane_t5

0xafbd,	// (0x0006b109) main_cset_text_pane_t6

0xafcb,	// (0x0006b117) main_cset_text_pane_t7

0x0006,

0xfa1e,	// (0x0006fb6a) main_cset_text_pane_t

0x9cf6,	// (0x00069e42) main_cam4_burst_pane

0x9cf6,	// (0x00069e42) main_cam5_pane

0x6895,	// (0x000669e1) bg_button_pane_cp019

0x689e,	// (0x000669ea) bg_button_pane_cp020

0xadb2,	// (0x0006aefe) main_cset_slider_pane_g7_ParamLimits

0xadb2,	// (0x0006aefe) main_cset_slider_pane_g7

0xadbe,	// (0x0006af0a) main_cset_slider_pane_g8_ParamLimits

0xadbe,	// (0x0006af0a) main_cset_slider_pane_g8

0x69f5,	// (0x00066b41) main_cset_slider_pane_g9_ParamLimits

0x69f5,	// (0x00066b41) main_cset_slider_pane_g9

0x6a01,	// (0x00066b4d) main_cset_slider_pane_g10_ParamLimits

0x6a01,	// (0x00066b4d) main_cset_slider_pane_g10

0x6a0d,	// (0x00066b59) main_cset_slider_pane_g11_ParamLimits

0x6a0d,	// (0x00066b59) main_cset_slider_pane_g11

0x6a19,	// (0x00066b65) main_cset_slider_pane_g12_ParamLimits

0x6a19,	// (0x00066b65) main_cset_slider_pane_g12

0x6a25,	// (0x00066b71) main_cset_slider_pane_g13_ParamLimits

0x6a25,	// (0x00066b71) main_cset_slider_pane_g13

0x6a31,	// (0x00066b7d) main_cset_slider_pane_g14_ParamLimits

0x6a31,	// (0x00066b7d) main_cset_slider_pane_g14

0x6a3d,	// (0x00066b89) main_cset_slider_pane_g15_ParamLimits

0x6a3d,	// (0x00066b89) main_cset_slider_pane_g15

0xae04,	// (0x0006af50) main_cset_slider_pane_t14_ParamLimits

0xae04,	// (0x0006af50) main_cset_slider_pane_t14

0xae3d,	// (0x0006af89) main_cset_slider_pane_t15_ParamLimits

0xae3d,	// (0x0006af89) main_cset_slider_pane_t15

0x70dc,	// (0x00067228) aid_cam4_burst_size_cell_ParamLimits

0x70dc,	// (0x00067228) aid_cam4_burst_size_cell

0x70fc,	// (0x00067248) grid_cam4_burst_pane_ParamLimits

0x70fc,	// (0x00067248) grid_cam4_burst_pane

0x7134,	// (0x00067280) linegrid_cam4_burst_pane_ParamLimits

0x7134,	// (0x00067280) linegrid_cam4_burst_pane

0xafd9,	// (0x0006b125) scroll_pane_cp30_ParamLimits

0xafd9,	// (0x0006b125) scroll_pane_cp30

0x715a,	// (0x000672a6) cell_cam4_burst_pane_ParamLimits

0x715a,	// (0x000672a6) cell_cam4_burst_pane

0xafe5,	// (0x0006b131) linegrid_cam4_burst_pane_g1_ParamLimits

0xafe5,	// (0x0006b131) linegrid_cam4_burst_pane_g1

0x71a7,	// (0x000672f3) linegrid_cam4_burst_pane_g2_ParamLimits

0x71a7,	// (0x000672f3) linegrid_cam4_burst_pane_g2

0xaff2,	// (0x0006b13e) linegrid_cam4_burst_pane_g3_ParamLimits

0xaff2,	// (0x0006b13e) linegrid_cam4_burst_pane_g3

0x0002,

0xfa2d,	// (0x0006fb79) linegrid_cam4_burst_pane_g_ParamLimits

0xfa2d,	// (0x0006fb79) linegrid_cam4_burst_pane_g

0x71b8,	// (0x00067304) linegrid_cam4_burst_pane_g3_copy1_ParamLimits

0x71b8,	// (0x00067304) linegrid_cam4_burst_pane_g3_copy1

0xafff,	// (0x0006b14b) linegrid_cam4_burst_pane_g4_ParamLimits

0xafff,	// (0x0006b14b) linegrid_cam4_burst_pane_g4

0x71d2,	// (0x0006731e) linegrid_cam4_burst_pane_g5_ParamLimits

0x71d2,	// (0x0006731e) linegrid_cam4_burst_pane_g5

0x71e3,	// (0x0006732f) linegrid_cam4_burst_pane_g6_ParamLimits

0x71e3,	// (0x0006732f) linegrid_cam4_burst_pane_g6

0xb00c,	// (0x0006b158) linegrid_cam4_burst_pane_g7_ParamLimits

0xb00c,	// (0x0006b158) linegrid_cam4_burst_pane_g7

0x71fa,	// (0x00067346) cell_cam4_burst_pane_g1

0xb025,	// (0x0006b171) main_cam5_pane_t1_ParamLimits

0xb025,	// (0x0006b171) main_cam5_pane_t1

0xb037,	// (0x0006b183) main_cam5_pane_t2_ParamLimits

0xb037,	// (0x0006b183) main_cam5_pane_t2

0xb049,	// (0x0006b195) main_cam5_pane_t3_ParamLimits

0xb049,	// (0x0006b195) main_cam5_pane_t3

0xb05b,	// (0x0006b1a7) main_cam5_pane_t4_ParamLimits

0xb05b,	// (0x0006b1a7) main_cam5_pane_t4

0xb071,	// (0x0006b1bd) main_cam5_pane_t5_ParamLimits

0xb071,	// (0x0006b1bd) main_cam5_pane_t5

0xb083,	// (0x0006b1cf) main_cam5_pane_t6_ParamLimits

0xb083,	// (0x0006b1cf) main_cam5_pane_t6

0xb097,	// (0x0006b1e3) main_cam5_pane_t7_ParamLimits

0xb097,	// (0x0006b1e3) main_cam5_pane_t7

0xb0a9,	// (0x0006b1f5) main_cam5_pane_t8_ParamLimits

0xb0a9,	// (0x0006b1f5) main_cam5_pane_t8

0xb0c5,	// (0x0006b211) main_cam5_pane_t9_ParamLimits

0xb0c5,	// (0x0006b211) main_cam5_pane_t9

0xb0d7,	// (0x0006b223) main_cam5_pane_t10_ParamLimits

0xb0d7,	// (0x0006b223) main_cam5_pane_t10

0xb0e9,	// (0x0006b235) main_cam5_pane_t11_ParamLimits

0xb0e9,	// (0x0006b235) main_cam5_pane_t11

0xb0fb,	// (0x0006b247) main_cam5_pane_t12_ParamLimits

0xb0fb,	// (0x0006b247) main_cam5_pane_t12

0xb110,	// (0x0006b25c) main_cam5_pane_t13_ParamLimits

0xb110,	// (0x0006b25c) main_cam5_pane_t13

0x000c,

0xfa39,	// (0x0006fb85) main_cam5_pane_t_ParamLimits

0xfa39,	// (0x0006fb85) main_cam5_pane_t

0x0c31,	// (0x00060d7d) popup_scut_keymap_window_ParamLimits

0x0c31,	// (0x00060d7d) popup_scut_keymap_window

0x720f,	// (0x0006735b) aid_size_cell_brow_shortcut

0xdbdf,	// (0x0006dd2b) bg_popup_window_pane_cp010

0x721b,	// (0x00067367) grid_scut_pane

0x7227,	// (0x00067373) cell_scut_pane_ParamLimits

0x7227,	// (0x00067373) cell_scut_pane

0x723e,	// (0x0006738a) cell_scut_pane_g1

0xb12d,	// (0x0006b279) cell_scut_pane_t1

0xb13c,	// (0x0006b288) cell_scut_pane_t2

0x7247,	// (0x00067393) cell_scut_pane_t3

0x0002,

0xfa54,	// (0x0006fba0) cell_scut_pane_t

0x4f18,	// (0x00065064) main_mup3_pane_g8_ParamLimits

0x4f18,	// (0x00065064) main_mup3_pane_g8

0x63bf,	// (0x0006650b) area_vitu2_query_pane_ParamLimits

0x63bf,	// (0x0006650b) area_vitu2_query_pane

0x6f84,	// (0x000670d0) input_focus_pane_cp08

0xb14b,	// (0x0006b297) area_vitu2_query_pane_g1

0x7255,	// (0x000673a1) area_vitu2_query_pane_g2

0x0001,

0xfa5b,	// (0x0006fba7) area_vitu2_query_pane_g

0x7266,	// (0x000673b2) area_vitu2_query_pane_t1_ParamLimits

0x7266,	// (0x000673b2) area_vitu2_query_pane_t1

0x727a,	// (0x000673c6) area_vitu2_query_pane_t2_ParamLimits

0x727a,	// (0x000673c6) area_vitu2_query_pane_t2

0x728e,	// (0x000673da) area_vitu2_query_pane_t3_ParamLimits

0x728e,	// (0x000673da) area_vitu2_query_pane_t3

0x72b6,	// (0x00067402) area_vitu2_query_pane_t4_ParamLimits

0x72b6,	// (0x00067402) area_vitu2_query_pane_t4

0x72de,	// (0x0006742a) area_vitu2_query_pane_t5_ParamLimits

0x72de,	// (0x0006742a) area_vitu2_query_pane_t5

0x7306,	// (0x00067452) area_vitu2_query_pane_t6_ParamLimits

0x7306,	// (0x00067452) area_vitu2_query_pane_t6

0x0006,

0xfa60,	// (0x0006fbac) area_vitu2_query_pane_t_ParamLimits

0xfa60,	// (0x0006fbac) area_vitu2_query_pane_t

0x7352,	// (0x0006749e) bg_button_pane_cp018

0x7360,	// (0x000674ac) bg_button_pane_cp021

0x736c,	// (0x000674b8) bg_button_pane_cp022

0x737d,	// (0x000674c9) input_focus_pane_cp09

0x29c9,	// (0x00062b15) aid_size_touch_mv_arrow_left

0x29f2,	// (0x00062b3e) aid_size_touch_mv_arrow_right

0x6a55,	// (0x00066ba1) main_cset_slider_pane_g16_ParamLimits

0x6a55,	// (0x00066ba1) main_cset_slider_pane_g16

0x6a61,	// (0x00066bad) main_cset_slider_pane_g17_ParamLimits

0x6a61,	// (0x00066bad) main_cset_slider_pane_g17

0x71fa,	// (0x00067346) cell_cam4_burst_pane_g1_ParamLimits

0xbcf7,	// (0x0006be43) compa_mode_pane

0x6c6f,	// (0x00066dbb) popup_vtel_slider_window_g3_ParamLimits

0x6c6f,	// (0x00066dbb) popup_vtel_slider_window_g3

0x6c86,	// (0x00066dd2) popup_vtel_slider_window_g4_ParamLimits

0x6c86,	// (0x00066dd2) popup_vtel_slider_window_g4

0x6c9d,	// (0x00066de9) popup_vtel_slider_window_t1_ParamLimits

0x6c9d,	// (0x00066de9) popup_vtel_slider_window_t1

0x9cf6,	// (0x00069e42) main_cl_pane

0x9f15,	// (0x0006a061) popup_imed_adjust2_window_ParamLimits

0xf02a,	// (0x0006f176) bg_tb_trans_pane_cp05_ParamLimits

0xa3b2,	// (0x0006a4fe) popup_imed_adjust2_window_g1_ParamLimits

0xa3c1,	// (0x0006a50d) popup_imed_adjust2_window_g2_ParamLimits

0xa3c1,	// (0x0006a50d) popup_imed_adjust2_window_g2

0xa3cd,	// (0x0006a519) popup_imed_adjust2_window_g3_ParamLimits

0xa3cd,	// (0x0006a519) popup_imed_adjust2_window_g3

0x0002,

0xf7d7,	// (0x0006f923) popup_imed_adjust2_window_g_ParamLimits

0xf7d7,	// (0x0006f923) popup_imed_adjust2_window_g

0xa3d9,	// (0x0006a525) popup_imed_adjust2_window_t1_ParamLimits

0xa3f1,	// (0x0006a53d) slider_imed_adjust_pane_ParamLimits

0xa405,	// (0x0006a551) slider_imed_adjust_pane_g1_ParamLimits

0xa415,	// (0x0006a561) slider_imed_adjust_pane_g2_ParamLimits

0xa425,	// (0x0006a571) slider_imed_adjust_pane_g3_ParamLimits

0xa436,	// (0x0006a582) slider_imed_adjust_pane_g4_ParamLimits

0xf7de,	// (0x0006f92a) slider_imed_adjust_pane_g_ParamLimits

0x6146,	// (0x00066292) aid_touch_area_cam4_ParamLimits

0x6146,	// (0x00066292) aid_touch_area_cam4

0xab29,	// (0x0006ac75) battery_pane_cp01

0x6215,	// (0x00066361) main_camera4_pane_g6_ParamLimits

0x6215,	// (0x00066361) main_camera4_pane_g6

0x623f,	// (0x0006638b) main_camera4_pane_t2_ParamLimits

0x623f,	// (0x0006638b) main_camera4_pane_t2

0x0001,

0xf8dc,	// (0x0006fa28) main_camera4_pane_t_ParamLimits

0xf8dc,	// (0x0006fa28) main_camera4_pane_t

0x6274,	// (0x000663c0) aid_touch_area_vid4_ParamLimits

0x6274,	// (0x000663c0) aid_touch_area_vid4

0x62c8,	// (0x00066414) main_video4_pane_g5_ParamLimits

0x62c8,	// (0x00066414) main_video4_pane_g5

0x62ed,	// (0x00066439) vid4_progress_pane_ParamLimits

0x62ed,	// (0x00066439) vid4_progress_pane

0xadca,	// (0x0006af16) main_cset_slider_pane_g18_ParamLimits

0xadca,	// (0x0006af16) main_cset_slider_pane_g18

0xb019,	// (0x0006b165) cell_cam4_burst_pane_g2_ParamLimits

0xb019,	// (0x0006b165) cell_cam4_burst_pane_g2

0x0001,

0xfa34,	// (0x0006fb80) cell_cam4_burst_pane_g_ParamLimits

0xfa34,	// (0x0006fb80) cell_cam4_burst_pane_g

0xc484,	// (0x0006c5d0) bg_cl_pane_ParamLimits

0xc484,	// (0x0006c5d0) bg_cl_pane

0x738e,	// (0x000674da) cl_header_pane_ParamLimits

0x738e,	// (0x000674da) cl_header_pane

0x73a2,	// (0x000674ee) cl_listscroll_pane_ParamLimits

0x73a2,	// (0x000674ee) cl_listscroll_pane

0xb157,	// (0x0006b2a3) bg_cl_pane_g1

0xb15f,	// (0x0006b2ab) bg_cl_pane_g2

0xb167,	// (0x0006b2b3) bg_cl_pane_g3

0xb16f,	// (0x0006b2bb) bg_cl_pane_g4

0xb177,	// (0x0006b2c3) bg_cl_pane_g5

0xb17f,	// (0x0006b2cb) bg_cl_pane_g6

0xb187,	// (0x0006b2d3) bg_cl_pane_g7

0xb18f,	// (0x0006b2db) bg_cl_pane_g8

0xb197,	// (0x0006b2e3) bg_cl_pane_g9

0x0008,

0xfa6f,	// (0x0006fbbb) bg_cl_pane_g

0x73b2,	// (0x000674fe) aid_height_cl_leading_ParamLimits

0x73b2,	// (0x000674fe) aid_height_cl_leading

0x73be,	// (0x0006750a) aid_height_cl_text_ParamLimits

0x73be,	// (0x0006750a) aid_height_cl_text

0xc69f,	// (0x0006c7eb) bg_cl_header_pane_ParamLimits

0xc69f,	// (0x0006c7eb) bg_cl_header_pane

0x73dd,	// (0x00067529) cl_header_pane_g1_ParamLimits

0x73dd,	// (0x00067529) cl_header_pane_g1

0x73f3,	// (0x0006753f) cl_header_pane_t1_ParamLimits

0x73f3,	// (0x0006753f) cl_header_pane_t1

0xb19f,	// (0x0006b2eb) cl_list_pane

0xad9d,	// (0x0006aee9) hc_scroll_pane_cp01

0xd3f3,	// (0x0006d53f) bg_cl_header_pane_g1

0xac83,	// (0x0006adcf) bg_cl_header_pane_g2

0xd413,	// (0x0006d55f) bg_cl_header_pane_g3

0xac93,	// (0x0006addf) bg_cl_header_pane_g4

0xac8b,	// (0x0006add7) bg_cl_header_pane_g5

0xaefe,	// (0x0006b04a) bg_cl_header_pane_g6

0xacab,	// (0x0006adf7) bg_cl_header_pane_g7

0xacb3,	// (0x0006adff) bg_cl_header_pane_g8

0xaca3,	// (0x0006adef) bg_cl_header_pane_g9

0x0008,

0xfa82,	// (0x0006fbce) bg_cl_header_pane_g

0x740c,	// (0x00067558) hc_cl_list_double_graphic_heading_pane_ParamLimits

0x740c,	// (0x00067558) hc_cl_list_double_graphic_heading_pane

0x7420,	// (0x0006756c) hc_cl_list_single_graphic_pane_ParamLimits

0x7420,	// (0x0006756c) hc_cl_list_single_graphic_pane

0x743a,	// (0x00067586) hc_cl_list_single_graphic_pane_g1_ParamLimits

0x743a,	// (0x00067586) hc_cl_list_single_graphic_pane_g1

0x7446,	// (0x00067592) hc_cl_list_single_graphic_pane_g2_ParamLimits

0x7446,	// (0x00067592) hc_cl_list_single_graphic_pane_g2

0x0001,

0xfa95,	// (0x0006fbe1) hc_cl_list_single_graphic_pane_g_ParamLimits

0xfa95,	// (0x0006fbe1) hc_cl_list_single_graphic_pane_g

0x745a,	// (0x000675a6) hc_cl_list_single_graphic_pane_t1_ParamLimits

0x745a,	// (0x000675a6) hc_cl_list_single_graphic_pane_t1

0x743a,	// (0x00067586) hc_cl_list_double_graphic_heading_pane_g1_ParamLimits

0x743a,	// (0x00067586) hc_cl_list_double_graphic_heading_pane_g1

0x746f,	// (0x000675bb) hc_cl_list_double_graphic_heading_pane_g2_ParamLimits

0x746f,	// (0x000675bb) hc_cl_list_double_graphic_heading_pane_g2

0x7483,	// (0x000675cf) hc_cl_list_double_graphic_heading_pane_g3_ParamLimits

0x7483,	// (0x000675cf) hc_cl_list_double_graphic_heading_pane_g3

0x0002,

0xfa9a,	// (0x0006fbe6) hc_cl_list_double_graphic_heading_pane_g_ParamLimits

0xfa9a,	// (0x0006fbe6) hc_cl_list_double_graphic_heading_pane_g

0x7497,	// (0x000675e3) hc_cl_list_double_graphic_heading_pane_t1_ParamLimits

0x7497,	// (0x000675e3) hc_cl_list_double_graphic_heading_pane_t1

0x74ac,	// (0x000675f8) hc_cl_list_double_graphic_heading_pane_t2_ParamLimits

0x74ac,	// (0x000675f8) hc_cl_list_double_graphic_heading_pane_t2

0x0001,

0xfaa1,	// (0x0006fbed) hc_cl_list_double_graphic_heading_pane_t_ParamLimits

0xfaa1,	// (0x0006fbed) hc_cl_list_double_graphic_heading_pane_t

0x74c1,	// (0x0006760d) vid4_progress_pane_g1

0x74d3,	// (0x0006761f) vid4_progress_pane_g2

0xd715,	// (0x0006d861) vid4_progress_pane_g3

0xb1b0,	// (0x0006b2fc) vid4_progress_pane_g4

0x0004,

0xfaa6,	// (0x0006fbf2) vid4_progress_pane_g

0xb1ce,	// (0x0006b31a) vid4_progress_pane_t1

0xb1e3,	// (0x0006b32f) vid4_progress_pane_t2

0x0002,

0xfab1,	// (0x0006fbfd) vid4_progress_pane_t

0xb20e,	// (0x0006b35a) wait_bar_pane_cp07

0x46f9,	// (0x00064845) blid_firmament_pane_ParamLimits

0x473c,	// (0x00064888) popup_blid_sat_info2_window_g1

0x4760,	// (0x000648ac) popup_blid_sat_info2_window_t3

0x476e,	// (0x000648ba) popup_blid_sat_info2_window_t4

0x477c,	// (0x000648c8) popup_blid_sat_info2_window_t5

0x478a,	// (0x000648d6) popup_blid_sat_info2_window_t6

0x479a,	// (0x000648e6) popup_blid_sat_info2_window_t7

0x47a8,	// (0x000648f4) popup_blid_sat_info2_window_t8

0x47b6,	// (0x00064902) popup_blid_sat_info2_window_t9

0x47c4,	// (0x00064910) popup_blid_sat_info2_window_t10

0x4954,	// (0x00064aa0) aid_firma_cardinal_ParamLimits

0x4968,	// (0x00064ab4) blid_firmament_pane_t1_ParamLimits

0x497f,	// (0x00064acb) blid_firmament_pane_t2_ParamLimits

0x4996,	// (0x00064ae2) blid_firmament_pane_t3_ParamLimits

0x49ad,	// (0x00064af9) blid_firmament_pane_t4_ParamLimits

0xf6d0,	// (0x0006f81c) blid_firmament_pane_t_ParamLimits

0x49c4,	// (0x00064b10) blid_sat_info_pane_ParamLimits

0x9ce8,	// (0x00069e34) main_cam_set_pane_ParamLimits

0x57d6,	// (0x00065922) aid_size_cell_colour_35_ParamLimits

0x57f6,	// (0x00065942) aid_size_cell_colour_112_ParamLimits

0x5816,	// (0x00065962) aid_size_cell_effect_ParamLimits

0xf02a,	// (0x0006f176) bg_tb_trans_pane_cp02_ParamLimits

0xd69c,	// (0x0006d7e8) heading_imed_pane_ParamLimits

0x5836,	// (0x00065982) listscroll_imed_pane_ParamLimits

0xe654,	// (0x0006e7a0) popup_call2_audio_first_window_g5_ParamLimits

0xe654,	// (0x0006e7a0) popup_call2_audio_first_window_g5

0x5ded,	// (0x00065f39) aid_size_touch_image3_arrow_left_ParamLimits

0x5ded,	// (0x00065f39) aid_size_touch_image3_arrow_left

0x5e19,	// (0x00065f65) aid_size_touch_image3_arrow_right_ParamLimits

0x5e19,	// (0x00065f65) aid_size_touch_image3_arrow_right

0xb1f9,	// (0x0006b345) vid4_progress_pane_t3

0x5b59,	// (0x00065ca5) main_hwr_training_symbol_option_pane_ParamLimits

0x5b59,	// (0x00065ca5) main_hwr_training_symbol_option_pane

0xa69f,	// (0x0006a7eb) popup_hwr_training_preview_window_ParamLimits

0xa69f,	// (0x0006a7eb) popup_hwr_training_preview_window

0x5b79,	// (0x00065cc5) hwr_training_navi_pane_g5_ParamLimits

0x5b79,	// (0x00065cc5) hwr_training_navi_pane_g5

0xac71,	// (0x0006adbd) popup_char_count_window

0x9ce8,	// (0x00069e34) bg_popup_sub_pane_cp20_ParamLimits

0x6dc3,	// (0x00066f0f) list_vitu2_match_list_pane_ParamLimits

0x6dd2,	// (0x00066f1e) vitu2_page_scroll_pane_ParamLimits

0x6dd2,	// (0x00066f1e) vitu2_page_scroll_pane

0xb21e,	// (0x0006b36a) list_single_hwr_training_symbol_option_pane_ParamLimits

0xb21e,	// (0x0006b36a) list_single_hwr_training_symbol_option_pane

0xb231,	// (0x0006b37d) list_single_hwr_training_symbol_option_pane_g1

0xb239,	// (0x0006b385) list_single_hwr_training_symbol_option_pane_t1

0xb247,	// (0x0006b393) bg_button_pane_cp023

0xb250,	// (0x0006b39c) bg_button_pane_cp024

0x752d,	// (0x00067679) vitu2_page_scroll_pane_g1

0x7535,	// (0x00067681) vitu2_page_scroll_pane_g2

0x0001,

0xfab8,	// (0x0006fc04) vitu2_page_scroll_pane_g

0x753d,	// (0x00067689) vitu2_page_scroll_pane_t1

0x462b,	// (0x00064777) popup_char_count_window_g1

0xb283,	// (0x0006b3cf) popup_char_count_window_g2

0xb28c,	// (0x0006b3d8) popup_char_count_window_g3

0x0002,

0xfabd,	// (0x0006fc09) popup_char_count_window_g

0xb295,	// (0x0006b3e1) popup_char_count_window_t1

0x9cf6,	// (0x00069e42) main_vded2_pane

0xa39e,	// (0x0006a4ea) aid_size_cell_imed_line

0xa3a8,	// (0x0006a4f4) grid_imed_line_width_pane

0xabff,	// (0x0006ad4b) vid4_indicators_pane_g4

0xb2a3,	// (0x0006b3ef) cell_imed_line_width_pane_ParamLimits

0xb2a3,	// (0x0006b3ef) cell_imed_line_width_pane

0xb2b7,	// (0x0006b403) cell_imed_line_width_pane_g1

0x9fc5,	// (0x0006a111) cell_imed_line_width_pane_g2

0x0001,

0xfac4,	// (0x0006fc10) cell_imed_line_width_pane_g

0x754c,	// (0x00067698) main_vded2_pane_g1_ParamLimits

0x754c,	// (0x00067698) main_vded2_pane_g1

0x7564,	// (0x000676b0) main_vded2_pane_g2_ParamLimits

0x7564,	// (0x000676b0) main_vded2_pane_g2

0x0001,

0xfac9,	// (0x0006fc15) main_vded2_pane_g_ParamLimits

0xfac9,	// (0x0006fc15) main_vded2_pane_g

0x7576,	// (0x000676c2) vded2_slider_pane_ParamLimits

0x7576,	// (0x000676c2) vded2_slider_pane

0x7586,	// (0x000676d2) aid_size_touch_vded2_end

0x7590,	// (0x000676dc) aid_size_touch_vded2_playhead

0xb2c0,	// (0x0006b40c) aid_size_touch_vded2_start

0xb2c8,	// (0x0006b414) vded2_slider_bg_pane

0xb2d1,	// (0x0006b41d) vded2_slider_pane_g1

0xb2da,	// (0x0006b426) vded2_slider_pane_g2

0x759a,	// (0x000676e6) vded2_slider_pane_g3

0x0002,

0xface,	// (0x0006fc1a) vded2_slider_pane_g

0xb2e2,	// (0x0006b42e) vded2_slider_bg_pane_g1

0xb2eb,	// (0x0006b437) vded2_slider_bg_pane_g2

0xb2f4,	// (0x0006b440) vded2_slider_bg_pane_g3

0x0002,

0xfad5,	// (0x0006fc21) vded2_slider_bg_pane_g

0x3065,	// (0x000631b1) aid_postcard_touch_down_pane_ParamLimits

0x3065,	// (0x000631b1) aid_postcard_touch_down_pane

0x307b,	// (0x000631c7) aid_postcard_touch_up_pane_ParamLimits

0x307b,	// (0x000631c7) aid_postcard_touch_up_pane

0x9cf6,	// (0x00069e42) main_blid2_pane

0x9efb,	// (0x0006a047) popup_blid2_search_window

0xbcf7,	// (0x0006be43) blid2_gps_pane

0xbcf7,	// (0x0006be43) blid2_navig_pane

0xbcf7,	// (0x0006be43) blid2_search_pane

0xbcf7,	// (0x0006be43) blid2_tripm_pane

0x75a5,	// (0x000676f1) blid2_search_pane_g1_ParamLimits

0x75a5,	// (0x000676f1) blid2_search_pane_g1

0x75bd,	// (0x00067709) blid2_search_pane_t1_ParamLimits

0x75bd,	// (0x00067709) blid2_search_pane_t1

0x75cf,	// (0x0006771b) aid_size_cell_blid2_gps_ParamLimits

0x75cf,	// (0x0006771b) aid_size_cell_blid2_gps

0x75e7,	// (0x00067733) blid2_gps_pane_g1_ParamLimits

0x75e7,	// (0x00067733) blid2_gps_pane_g1

0x75fb,	// (0x00067747) grid_blid2_satellite_pane_ParamLimits

0x75fb,	// (0x00067747) grid_blid2_satellite_pane

0x7615,	// (0x00067761) blid2_navig_pane_g1_ParamLimits

0x7615,	// (0x00067761) blid2_navig_pane_g1

0x7621,	// (0x0006776d) blid2_navig_pane_t1_ParamLimits

0x7621,	// (0x0006776d) blid2_navig_pane_t1

0x763c,	// (0x00067788) blid2_navig_pane_t2_ParamLimits

0x763c,	// (0x00067788) blid2_navig_pane_t2

0x0001,

0xfadc,	// (0x0006fc28) blid2_navig_pane_t_ParamLimits

0xfadc,	// (0x0006fc28) blid2_navig_pane_t

0x7657,	// (0x000677a3) blid2_navig_ring_pane_ParamLimits

0x7657,	// (0x000677a3) blid2_navig_ring_pane

0x7670,	// (0x000677bc) blid2_speed_pane_ParamLimits

0x7670,	// (0x000677bc) blid2_speed_pane

0x767c,	// (0x000677c8) blid2_tripm_pane_g1_ParamLimits

0x767c,	// (0x000677c8) blid2_tripm_pane_g1

0x7697,	// (0x000677e3) blid2_tripm_pane_g2_ParamLimits

0x7697,	// (0x000677e3) blid2_tripm_pane_g2

0x76ab,	// (0x000677f7) blid2_tripm_pane_g3_ParamLimits

0x76ab,	// (0x000677f7) blid2_tripm_pane_g3

0x76bf,	// (0x0006780b) blid2_tripm_pane_g4_ParamLimits

0x76bf,	// (0x0006780b) blid2_tripm_pane_g4

0x76d3,	// (0x0006781f) blid2_tripm_pane_g5_ParamLimits

0x76d3,	// (0x0006781f) blid2_tripm_pane_g5

0x0005,

0xfae1,	// (0x0006fc2d) blid2_tripm_pane_g_ParamLimits

0xfae1,	// (0x0006fc2d) blid2_tripm_pane_g

0x76f9,	// (0x00067845) blid2_tripm_pane_t1_ParamLimits

0x76f9,	// (0x00067845) blid2_tripm_pane_t1

0x7714,	// (0x00067860) blid2_tripm_pane_t2_ParamLimits

0x7714,	// (0x00067860) blid2_tripm_pane_t2

0x772f,	// (0x0006787b) blid2_tripm_pane_t3_ParamLimits

0x772f,	// (0x0006787b) blid2_tripm_pane_t3

0x0003,

0xfaee,	// (0x0006fc3a) blid2_tripm_pane_t_ParamLimits

0xfaee,	// (0x0006fc3a) blid2_tripm_pane_t

0x7776,	// (0x000678c2) cell_blid2_satellite_pane_ParamLimits

0x7776,	// (0x000678c2) cell_blid2_satellite_pane

0x7794,	// (0x000678e0) cell_blid2_satellite_pane_g1

0xb2fd,	// (0x0006b449) cell_blid2_satellite_pane_t1

0x49d4,	// (0x00064b20) blid2_speed_pane_g1

0xb30b,	// (0x0006b457) blid2_speed_pane_t1

0xb319,	// (0x0006b465) blid2_speed_pane_t2

0x0001,

0xfaf7,	// (0x0006fc43) blid2_speed_pane_t

0x49d4,	// (0x00064b20) blid2_navig_ring_pane_g1

0x779d,	// (0x000678e9) blid2_navig_ring_pane_g2

0x77a5,	// (0x000678f1) blid2_navig_ring_pane_g3

0x77ad,	// (0x000678f9) blid2_navig_ring_pane_g4

0x77b5,	// (0x00067901) blid2_navig_ring_pane_g5

0x0004,

0xfafc,	// (0x0006fc48) blid2_navig_ring_pane_g

0xbcf7,	// (0x0006be43) bg_popup_window_pane_cp011

0xb327,	// (0x0006b473) popup_blid2_search_window_g1

0xb32f,	// (0x0006b47b) popup_blid2_search_window_t1

0xb33d,	// (0x0006b489) popup_blid2_search_window_t2

0x0001,

0xfb07,	// (0x0006fc53) popup_blid2_search_window_t

0xd302,	// (0x0006d44e) main_browser_pane_g1

0xc484,	// (0x0006c5d0) main_browser_pane_ParamLimits

0x9ce8,	// (0x00069e34) bg_button_pane_cp011_ParamLimits

0x6631,	// (0x0006677d) cell_vitu2_function_pane_g1_ParamLimits

0xf02a,	// (0x0006f176) bg_popup_sub_pane_cp22_ParamLimits

0x6f84,	// (0x000670d0) input_focus_pane_cp08_ParamLimits

0x6f9b,	// (0x000670e7) popup_vitu2_query_button_pane_ParamLimits

0x6f9b,	// (0x000670e7) popup_vitu2_query_button_pane

0x6fac,	// (0x000670f8) popup_vitu2_query_input_button_pane

0xaf63,	// (0x0006b0af) popup_vitu2_query_window_g1_ParamLimits

0x6fb6,	// (0x00067102) popup_vitu2_query_window_g2_ParamLimits

0xfa08,	// (0x0006fb54) popup_vitu2_query_window_g_ParamLimits

0xbcf7,	// (0x0006be43) bg_button_pane_cp026

0x77bd,	// (0x00067909) popup_vitu2_query_input_button_pane_g1

0xbcf7,	// (0x0006be43) bg_button_pane_cp025

0xb34b,	// (0x0006b497) popup_vitu2_query_button_pane_t1

0x4baa,	// (0x00064cf6) main_mp3_pane_t6

0x4bb8,	// (0x00064d04) popup_slider_window_cp01

0xab65,	// (0x0006acb1) cam4_battery_pane

0xabbe,	// (0x0006ad0a) cam4_battery_pane_cp02

0xb1a8,	// (0x0006b2f4) cam4_battery_pane_cp01

0xb1a8,	// (0x0006b2f4) cam4_battery_pane_cp03

0xa9d6,	// (0x0006ab22) cam4_battery_pane_g1

0x49d4,	// (0x00064b20) cam4_battery_pane_g2

0x0001,

0xfb0c,	// (0x0006fc58) cam4_battery_pane_g

0x47d2,	// (0x0006491e) popup_blid_sat_info2_window_t11

0x29c9,	// (0x00062b15) aid_size_touch_mv_arrow_left_ParamLimits

0x29f2,	// (0x00062b3e) aid_size_touch_mv_arrow_right_ParamLimits

0xdb3f,	// (0x0006dc8b) navi_pane_g1_ParamLimits

0x2a31,	// (0x00062b7d) navi_pane_g2_ParamLimits

0x2a5f,	// (0x00062bab) navi_pane_g3_ParamLimits

0xf3f5,	// (0x0006f541) navi_pane_g_ParamLimits

0x2ab7,	// (0x00062c03) navi_pane_mv_t1_ParamLimits

0x5842,	// (0x0006598e) grid_imed_effect_pane_ParamLimits

0x18c3,	// (0x00061a0f) aid_placing_vt_slider_lsc

0xd251,	// (0x0006d39d) aid_placing_vt_slider_prt

0xc69f,	// (0x0006c7eb) bg_tb_trans_pane_cp01_ParamLimits

0xa033,	// (0x0006a17f) popup_image_details_window_g1_ParamLimits

0xa046,	// (0x0006a192) popup_image_details_window_g2_ParamLimits

0xa05b,	// (0x0006a1a7) popup_image_details_window_g3_ParamLimits

0xa05b,	// (0x0006a1a7) popup_image_details_window_g3

0xf715,	// (0x0006f861) popup_image_details_window_g_ParamLimits

0xa06f,	// (0x0006a1bb) popup_image_details_window_t1_ParamLimits

0xa081,	// (0x0006a1cd) popup_image_details_window_t2_ParamLimits

0xa09a,	// (0x0006a1e6) popup_image_details_window_t3_ParamLimits

0xa0ae,	// (0x0006a1fa) popup_image_details_window_t4_ParamLimits

0xa0c9,	// (0x0006a215) popup_image_details_window_t5_ParamLimits

0xf71c,	// (0x0006f868) popup_image_details_window_t_ParamLimits

0x73ca,	// (0x00067516) cl_header_name_pane_ParamLimits

0x73ca,	// (0x00067516) cl_header_name_pane

0x77c5,	// (0x00067911) cl_header_name_pane_t1_ParamLimits

0x77c5,	// (0x00067911) cl_header_name_pane_t1

0x77e6,	// (0x00067932) cl_header_name_pane_t2_ParamLimits

0x77e6,	// (0x00067932) cl_header_name_pane_t2

0x7828,	// (0x00067974) cl_header_name_pane_t3_ParamLimits

0x7828,	// (0x00067974) cl_header_name_pane_t3

0x0002,

0xfb11,	// (0x0006fc5d) cl_header_name_pane_t_ParamLimits

0xfb11,	// (0x0006fc5d) cl_header_name_pane_t

0x2a88,	// (0x00062bd4) navi_pane_mv_g2_ParamLimits

0xac4b,	// (0x0006ad97) field_vitu2_entry_pane_g1_ParamLimits

0xac57,	// (0x0006ada3) field_vitu2_entry_pane_g2_ParamLimits

0xac63,	// (0x0006adaf) field_vitu2_entry_pane_g3_ParamLimits

0xac63,	// (0x0006adaf) field_vitu2_entry_pane_g3

0xf90e,	// (0x0006fa5a) field_vitu2_entry_pane_g_ParamLimits

0x65ad,	// (0x000666f9) cell_vitu2_itu_pane_g1_ParamLimits

0x65bd,	// (0x00066709) cell_vitu2_itu_pane_g2_ParamLimits

0x65bd,	// (0x00066709) cell_vitu2_itu_pane_g2

0x0001,

0xf91a,	// (0x0006fa66) cell_vitu2_itu_pane_g_ParamLimits

0xf91a,	// (0x0006fa66) cell_vitu2_itu_pane_g

0x9ce8,	// (0x00069e34) bg_vkb2_func_pane_cp05_ParamLimits

0x9ce8,	// (0x00069e34) bg_vkb2_func_pane_cp05

0x9ce8,	// (0x00069e34) bg_vkb2_func_pane_cp03

0x9ce8,	// (0x00069e34) bg_vkb2_func_pane_cp04

0x9ce8,	// (0x00069e34) bg_vkb2_func_pane_cp10_ParamLimits

0x9ce8,	// (0x00069e34) bg_vkb2_func_pane_cp10

0x736c,	// (0x000674b8) bg_vkb2_func_pane_cp08

0x7352,	// (0x0006749e) bg_vkb2_func_pane_cp06

0x7360,	// (0x000674ac) bg_vkb2_func_pane_cp07

0xb259,	// (0x0006b3a5) bg_vkb2_func_pane_cp11_ParamLimits

0xb259,	// (0x0006b3a5) bg_vkb2_func_pane_cp11

0xb26e,	// (0x0006b3ba) bg_vkb2_func_pane_cp12_ParamLimits

0xb26e,	// (0x0006b3ba) bg_vkb2_func_pane_cp12

0xbcf7,	// (0x0006be43) bg_vkb2_func_pane_cp09

0xac83,	// (0x0006adcf) bg_vkb2_func_pane_g1

0xd413,	// (0x0006d55f) bg_vkb2_func_pane_g2

0xac8b,	// (0x0006add7) bg_vkb2_func_pane_g3

0xac93,	// (0x0006addf) bg_vkb2_func_pane_g4

0xaefe,	// (0x0006b04a) bg_vkb2_func_pane_g5

0xacab,	// (0x0006adf7) bg_vkb2_func_pane_g6

0xacb3,	// (0x0006adff) bg_vkb2_func_pane_g7

0xaca3,	// (0x0006adef) bg_vkb2_func_pane_g8

0xd3f3,	// (0x0006d53f) bg_vkb2_func_pane_g9

0x0008,

0xfb18,	// (0x0006fc64) bg_vkb2_func_pane_g

0x76e7,	// (0x00067833) blid2_tripm_pane_g6_ParamLimits

0x76e7,	// (0x00067833) blid2_tripm_pane_g6

0xa990,	// (0x0006aadc) mp4_progress_pane_g1

0x7762,	// (0x000678ae) blid2_tripm_values_pane_ParamLimits

0x7762,	// (0x000678ae) blid2_tripm_values_pane

0x7859,	// (0x000679a5) blid2_tripm_values_pane_t1

0x7867,	// (0x000679b3) blid2_tripm_values_pane_t2

0x7875,	// (0x000679c1) blid2_tripm_values_pane_t3

0x7883,	// (0x000679cf) blid2_tripm_values_pane_t4

0x7891,	// (0x000679dd) blid2_tripm_values_pane_t5

0x789f,	// (0x000679eb) blid2_tripm_values_pane_t6

0x78ad,	// (0x000679f9) blid2_tripm_values_pane_t7

0x78bb,	// (0x00067a07) blid2_tripm_values_pane_t8

0x78c9,	// (0x00067a15) blid2_tripm_values_pane_t9

0x0008,

0xfb2b,	// (0x0006fc77) blid2_tripm_values_pane_t

0x1905,	// (0x00061a51) call_video_pane_t1_ParamLimits

0x1923,	// (0x00061a6f) call_video_pane_t2_ParamLimits

0xf27e,	// (0x0006f3ca) call_video_pane_t_ParamLimits

0x2f9e,	// (0x000630ea) msg_header_pane_g1_ParamLimits

0xdd68,	// (0x0006deb4) msg_header_pane_g2_ParamLimits

0xdd68,	// (0x0006deb4) msg_header_pane_g2

0x0001,

0xf498,	// (0x0006f5e4) msg_header_pane_g_ParamLimits

0xf498,	// (0x0006f5e4) msg_header_pane_g

0xc484,	// (0x0006c5d0) main_clock2_pane_ParamLimits

0x554b,	// (0x00065697) grid_clock2_toolbar_pane_ParamLimits

0x554b,	// (0x00065697) grid_clock2_toolbar_pane

0x554b,	// (0x00065697) listscroll_clock2_pane_ParamLimits

0x554b,	// (0x00065697) listscroll_clock2_pane

0x5633,	// (0x0006577f) main_clock2_pane_t3_ParamLimits

0x5633,	// (0x0006577f) main_clock2_pane_t3

0x5656,	// (0x000657a2) main_clock2_pane_t4_ParamLimits

0x5656,	// (0x000657a2) main_clock2_pane_t4

0xb359,	// (0x0006b4a5) cell_clock2_toolbar_pane

0xb361,	// (0x0006b4ad) cell_clock2_toolbar_pane_cp01

0xb361,	// (0x0006b4ad) cell_clock2_toolbar_pane_cp02

0xb369,	// (0x0006b4b5) cell_clock2_toolbar_pane_cp03

0xb371,	// (0x0006b4bd) list_clock2_pane

0xda92,	// (0x0006dbde) scroll_pane_cp10

0xb379,	// (0x0006b4c5) list_single_clock2_pane_ParamLimits

0xb379,	// (0x0006b4c5) list_single_clock2_pane

0xdbdf,	// (0x0006dd2b) list_highlight_pane_cp08

0xb386,	// (0x0006b4d2) list_single_clock2_pane_t1

0xb394,	// (0x0006b4e0) list_single_clock2_pane_t2

0x0001,

0xfb3e,	// (0x0006fc8a) list_single_clock2_pane_t

0xbcf7,	// (0x0006be43) bg_button_pane_cp10

0xb3a2,	// (0x0006b4ee) cell_clock2_toolbar_pane_g1

0x2ff1,	// (0x0006313d) aid_main_viewer_pane_g1_ParamLimits

0x2ff1,	// (0x0006313d) aid_main_viewer_pane_g1

0x2fff,	// (0x0006314b) aid_main_viewer_pane_g2_ParamLimits

0x2fff,	// (0x0006314b) aid_main_viewer_pane_g2

0x300d,	// (0x00063159) aid_main_viewer_pane_g3_ParamLimits

0x300d,	// (0x00063159) aid_main_viewer_pane_g3

0x301c,	// (0x00063168) aid_main_viewer_pane_g4_ParamLimits

0x301c,	// (0x00063168) aid_main_viewer_pane_g4

0x0003,

0xf4a9,	// (0x0006f5f5) aid_main_viewer_pane_g_ParamLimits

0xf4a9,	// (0x0006f5f5) aid_main_viewer_pane_g

0x3928,	// (0x00063a74) main_calc_pane_ParamLimits

0x393c,	// (0x00063a88) main_dialer2_pane_ParamLimits

0x9cf6,	// (0x00069e42) main_cam6_pane

0x9cf6,	// (0x00069e42) main_vid6_pane

0x5557,	// (0x000656a3) listscroll_gen_pane_cp06_ParamLimits

0x5557,	// (0x000656a3) listscroll_gen_pane_cp06

0x5679,	// (0x000657c5) main_clock2_pane_t5_ParamLimits

0x5679,	// (0x000657c5) main_clock2_pane_t5

0x56d9,	// (0x00065825) aid_call2_pane_cp10_ParamLimits

0x56eb,	// (0x00065837) aid_call_pane_cp10_ParamLimits

0xdb14,	// (0x0006dc60) popup_clock_analogue_window_cp10_g1_ParamLimits

0xdb14,	// (0x0006dc60) popup_clock_analogue_window_cp10_g2_ParamLimits

0x56fd,	// (0x00065849) popup_clock_analogue_window_cp10_g3_ParamLimits

0x56fd,	// (0x00065849) popup_clock_analogue_window_cp10_g4_ParamLimits

0xdb14,	// (0x0006dc60) popup_clock_analogue_window_cp10_g5_ParamLimits

0xf7cc,	// (0x0006f918) popup_clock_analogue_window_cp10_g_ParamLimits

0x570f,	// (0x0006585b) popup_clock_analogue_window_cp10_t1_ParamLimits

0x5d9a,	// (0x00065ee6) cell_dialer2_keypad_pane_g2_ParamLimits

0x5d9a,	// (0x00065ee6) cell_dialer2_keypad_pane_g2

0x0001,

0xf8ad,	// (0x0006f9f9) cell_dialer2_keypad_pane_g_ParamLimits

0xf8ad,	// (0x0006f9f9) cell_dialer2_keypad_pane_g

0x5db6,	// (0x00065f02) cell_dialer2_keypad_pane_t1

0x6948,	// (0x00066a94) main_cset_text2_pane_ParamLimits

0x6948,	// (0x00066a94) main_cset_text2_pane

0xb14b,	// (0x0006b297) area_vitu2_query_pane_g1_ParamLimits

0x7255,	// (0x000673a1) area_vitu2_query_pane_g2_ParamLimits

0xfa5b,	// (0x0006fba7) area_vitu2_query_pane_g_ParamLimits

0x732e,	// (0x0006747a) area_vitu2_query_pane_t7_ParamLimits

0x732e,	// (0x0006747a) area_vitu2_query_pane_t7

0x7352,	// (0x0006749e) bg_button_pane_cp018_ParamLimits

0x7360,	// (0x000674ac) bg_button_pane_cp021_ParamLimits

0x736c,	// (0x000674b8) bg_button_pane_cp022_ParamLimits

0x736c,	// (0x000674b8) bg_vkb2_func_pane_cp08_ParamLimits

0x7352,	// (0x0006749e) bg_vkb2_func_pane_cp06_ParamLimits

0x7360,	// (0x000674ac) bg_vkb2_func_pane_cp07_ParamLimits

0x737d,	// (0x000674c9) input_focus_pane_cp09_ParamLimits

0xb3aa,	// (0x0006b4f6) cam6_autofocus_pane_ParamLimits

0xb3aa,	// (0x0006b4f6) cam6_autofocus_pane

0x78d7,	// (0x00067a23) cam6_image_uncrop_pane_ParamLimits

0x78d7,	// (0x00067a23) cam6_image_uncrop_pane

0x78e6,	// (0x00067a32) cam6_indi_pane_ParamLimits

0x78e6,	// (0x00067a32) cam6_indi_pane

0x78fc,	// (0x00067a48) cam6_mode_pane_ParamLimits

0x78fc,	// (0x00067a48) cam6_mode_pane

0x790e,	// (0x00067a5a) cam6_timer_pane_ParamLimits

0x790e,	// (0x00067a5a) cam6_timer_pane

0x791a,	// (0x00067a66) cam6_zoom_pane_ParamLimits

0x791a,	// (0x00067a66) cam6_zoom_pane

0x7926,	// (0x00067a72) cam6_mode_pane_g1_ParamLimits

0x7926,	// (0x00067a72) cam6_mode_pane_g1

0x7936,	// (0x00067a82) cam6_mode_pane_g2_ParamLimits

0x7936,	// (0x00067a82) cam6_mode_pane_g2

0x7946,	// (0x00067a92) cam6_mode_pane_g3_ParamLimits

0x7946,	// (0x00067a92) cam6_mode_pane_g3

0x7956,	// (0x00067aa2) cam6_mode_pane_g4_ParamLimits

0x7956,	// (0x00067aa2) cam6_mode_pane_g4

0x0003,

0xfb43,	// (0x0006fc8f) cam6_mode_pane_g_ParamLimits

0xfb43,	// (0x0006fc8f) cam6_mode_pane_g

0xb3b8,	// (0x0006b504) bg_tb_trans_pane_cp08_ParamLimits

0xb3b8,	// (0x0006b504) bg_tb_trans_pane_cp08

0xb3c6,	// (0x0006b512) cam6_battery_pane_ParamLimits

0xb3c6,	// (0x0006b512) cam6_battery_pane

0xb3dc,	// (0x0006b528) cam6_indi_pane_g1_ParamLimits

0xb3dc,	// (0x0006b528) cam6_indi_pane_g1

0xb3ee,	// (0x0006b53a) cam6_indi_pane_g2_ParamLimits

0xb3ee,	// (0x0006b53a) cam6_indi_pane_g2

0xb400,	// (0x0006b54c) cam6_indi_pane_g3_ParamLimits

0xb400,	// (0x0006b54c) cam6_indi_pane_g3

0x0002,

0xfb4c,	// (0x0006fc98) cam6_indi_pane_g_ParamLimits

0xfb4c,	// (0x0006fc98) cam6_indi_pane_g

0xb412,	// (0x0006b55e) cam6_indi_pane_t1_ParamLimits

0xb412,	// (0x0006b55e) cam6_indi_pane_t1

0x7966,	// (0x00067ab2) cam6_autofocus_pane_g1

0x796e,	// (0x00067aba) cam6_autofocus_pane_g2

0x7976,	// (0x00067ac2) cam6_autofocus_pane_g3

0x797e,	// (0x00067aca) cam6_autofocus_pane_g4

0x0003,

0xfb53,	// (0x0006fc9f) cam6_autofocus_pane_g

0xb438,	// (0x0006b584) cam6_timer_pane_g1

0xb440,	// (0x0006b58c) cam6_timer_pane_t1

0xb44e,	// (0x0006b59a) cam6_zoom_cont_pane

0xb456,	// (0x0006b5a2) cam6_zoom_pane_g1

0xb45e,	// (0x0006b5aa) cam6_zoom_pane_g2

0x7986,	// (0x00067ad2) cam6_zoom_pane_g3

0x0002,

0xfb5c,	// (0x0006fca8) cam6_zoom_pane_g

0x49d4,	// (0x00064b20) cam6_battery_pane_g1

0x49d4,	// (0x00064b20) cam6_battery_pane_g2

0x0001,

0xf6d9,	// (0x0006f825) cam6_battery_pane_g

0xb466,	// (0x0006b5b2) cam6_zoom_cont_pane_g1

0xb46f,	// (0x0006b5bb) cam6_zoom_cont_pane_g2

0xb478,	// (0x0006b5c4) cam6_zoom_cont_pane_g3

0x0002,

0xfb63,	// (0x0006fcaf) cam6_zoom_cont_pane_g

0x79a3,	// (0x00067aef) cam6_mode_pane_cp_ParamLimits

0x79a3,	// (0x00067aef) cam6_mode_pane_cp

0x79b5,	// (0x00067b01) cam6_zoom_pane_cp_ParamLimits

0x79b5,	// (0x00067b01) cam6_zoom_pane_cp

0x79c1,	// (0x00067b0d) vid6_image_uncrop_cif_pane_ParamLimits

0x79c1,	// (0x00067b0d) vid6_image_uncrop_cif_pane

0x79d1,	// (0x00067b1d) vid6_image_uncrop_nhd_pane_ParamLimits

0x79d1,	// (0x00067b1d) vid6_image_uncrop_nhd_pane

0x79e0,	// (0x00067b2c) vid6_image_uncrop_vga_pane_ParamLimits

0x79e0,	// (0x00067b2c) vid6_image_uncrop_vga_pane

0x79ef,	// (0x00067b3b) vid6_image_uncrop_wvga_pane_ParamLimits

0x79ef,	// (0x00067b3b) vid6_image_uncrop_wvga_pane

0x79fe,	// (0x00067b4a) vid6_indi_pane_ParamLimits

0x79fe,	// (0x00067b4a) vid6_indi_pane

0xb3b8,	// (0x0006b504) bg_tb_trans_pane_cp09_ParamLimits

0xb3b8,	// (0x0006b504) bg_tb_trans_pane_cp09

0xb490,	// (0x0006b5dc) cam6_battery_pane_cp_ParamLimits

0xb490,	// (0x0006b5dc) cam6_battery_pane_cp

0xb49c,	// (0x0006b5e8) vid6_indi_pane_g1_ParamLimits

0xb49c,	// (0x0006b5e8) vid6_indi_pane_g1

0xb4ae,	// (0x0006b5fa) vid6_indi_pane_g2_ParamLimits

0xb4ae,	// (0x0006b5fa) vid6_indi_pane_g2

0xb4c0,	// (0x0006b60c) vid6_indi_pane_g3_ParamLimits

0xb4c0,	// (0x0006b60c) vid6_indi_pane_g3

0xb4d5,	// (0x0006b621) vid6_indi_pane_g4_ParamLimits

0xb4d5,	// (0x0006b621) vid6_indi_pane_g4

0xb4ea,	// (0x0006b636) vid6_indi_pane_g5_ParamLimits

0xb4ea,	// (0x0006b636) vid6_indi_pane_g5

0x0004,

0xfb6a,	// (0x0006fcb6) vid6_indi_pane_g_ParamLimits

0xfb6a,	// (0x0006fcb6) vid6_indi_pane_g

0xb504,	// (0x0006b650) vid6_indi_pane_t1_ParamLimits

0xb504,	// (0x0006b650) vid6_indi_pane_t1

0xb51a,	// (0x0006b666) vid6_indi_pane_t2_ParamLimits

0xb51a,	// (0x0006b666) vid6_indi_pane_t2

0xb542,	// (0x0006b68e) vid6_indi_pane_t3_ParamLimits

0xb542,	// (0x0006b68e) vid6_indi_pane_t3

0xb56a,	// (0x0006b6b6) vid6_indi_pane_t4_ParamLimits

0xb56a,	// (0x0006b6b6) vid6_indi_pane_t4

0x0003,

0xfb75,	// (0x0006fcc1) vid6_indi_pane_t_ParamLimits

0xfb75,	// (0x0006fcc1) vid6_indi_pane_t

0xb58e,	// (0x0006b6da) wait_bar_pane_cp08

0x7a16,	// (0x00067b62) main_cset_text2_pane_t1_ParamLimits

0x7a16,	// (0x00067b62) main_cset_text2_pane_t1

0x798e,	// (0x00067ada) listscroll_gen_pane_cp06_t1_ParamLimits

0x798e,	// (0x00067ada) listscroll_gen_pane_cp06_t1

0x9cf6,	// (0x00069e42) main_cam6_set_pane

0xab57,	// (0x0006aca3) bg_tb_trans_pane_cp06_ParamLimits

0xab6d,	// (0x0006acb9) cam4_indicators_pane_g1_ParamLimits

0xab7e,	// (0x0006acca) cam4_indicators_pane_g2_ParamLimits

0xf8ea,	// (0x0006fa36) cam4_indicators_pane_g_ParamLimits

0xab9c,	// (0x0006ace8) cam4_indicators_pane_t1_ParamLimits

0x9ce8,	// (0x00069e34) bg_tb_trans_pane_cp07_ParamLimits

0xabc6,	// (0x0006ad12) vid4_indicators_pane_g1_ParamLimits

0xabda,	// (0x0006ad26) vid4_indicators_pane_g2_ParamLimits

0xabee,	// (0x0006ad3a) vid4_indicators_pane_g3_ParamLimits

0xabff,	// (0x0006ad4b) vid4_indicators_pane_g4_ParamLimits

0xf8fc,	// (0x0006fa48) vid4_indicators_pane_g_ParamLimits

0xac1b,	// (0x0006ad67) vid4_indicators_pane_t1_ParamLimits

0x74c1,	// (0x0006760d) vid4_progress_pane_g1_ParamLimits

0x74d3,	// (0x0006761f) vid4_progress_pane_g2_ParamLimits

0xd715,	// (0x0006d861) vid4_progress_pane_g3_ParamLimits

0xb1b0,	// (0x0006b2fc) vid4_progress_pane_g4_ParamLimits

0xfaa6,	// (0x0006fbf2) vid4_progress_pane_g_ParamLimits

0xb1ce,	// (0x0006b31a) vid4_progress_pane_t1_ParamLimits

0xb1e3,	// (0x0006b32f) vid4_progress_pane_t2_ParamLimits

0xb1f9,	// (0x0006b345) vid4_progress_pane_t3_ParamLimits

0xfab1,	// (0x0006fbfd) vid4_progress_pane_t_ParamLimits

0xb20e,	// (0x0006b35a) wait_bar_pane_cp07_ParamLimits

0x7a36,	// (0x00067b82) main_cam6_set_pane_g2_ParamLimits

0x7a36,	// (0x00067b82) main_cam6_set_pane_g2

0x7a5a,	// (0x00067ba6) main_cset6_listscroll_pane_ParamLimits

0x7a5a,	// (0x00067ba6) main_cset6_listscroll_pane

0x7a76,	// (0x00067bc2) main_cset6_slider_pane_ParamLimits

0x7a76,	// (0x00067bc2) main_cset6_slider_pane

0x7a8c,	// (0x00067bd8) main_cset6_text2_pane_ParamLimits

0x7a8c,	// (0x00067bd8) main_cset6_text2_pane

0xb59d,	// (0x0006b6e9) main_cset6_text_pane

0xb5a5,	// (0x0006b6f1) main_cset_list_pane_copy1_ParamLimits

0xb5a5,	// (0x0006b6f1) main_cset_list_pane_copy1

0xb5b5,	// (0x0006b701) scroll_pane_cp028_copy1

0x7a9a,	// (0x00067be6) cset_list_set_pane_copy1

0x7aad,	// (0x00067bf9) aid_position_infowindow_above_copy1

0x7ab5,	// (0x00067c01) aid_position_infowindow_below_copy1

0x7abd,	// (0x00067c09) cset_list_set_pane_g1_copy1

0x7ac5,	// (0x00067c11) cset_list_set_pane_g3_copy1_ParamLimits

0x7ac5,	// (0x00067c11) cset_list_set_pane_g3_copy1

0x7ad4,	// (0x00067c20) cset_list_set_pane_t1_copy1_ParamLimits

0x7ad4,	// (0x00067c20) cset_list_set_pane_t1_copy1

0xc69f,	// (0x0006c7eb) list_highlight_pane_cp021_copy1_ParamLimits

0xc69f,	// (0x0006c7eb) list_highlight_pane_cp021_copy1

0xb5be,	// (0x0006b70a) cset6_slider_pane_ParamLimits

0xb5be,	// (0x0006b70a) cset6_slider_pane

0xb5ea,	// (0x0006b736) main_cset6_slider_pane_g1_ParamLimits

0xb5ea,	// (0x0006b736) main_cset6_slider_pane_g1

0x7ae9,	// (0x00067c35) main_cset6_slider_pane_g2_ParamLimits

0x7ae9,	// (0x00067c35) main_cset6_slider_pane_g2

0xadb2,	// (0x0006aefe) main_cset6_slider_pane_g3_ParamLimits

0xadb2,	// (0x0006aefe) main_cset6_slider_pane_g3

0x6a0d,	// (0x00066b59) main_cset6_slider_pane_g4_ParamLimits

0x6a0d,	// (0x00066b59) main_cset6_slider_pane_g4

0x6a55,	// (0x00066ba1) main_cset6_slider_pane_g5_ParamLimits

0x6a55,	// (0x00066ba1) main_cset6_slider_pane_g5

0xadb2,	// (0x0006aefe) main_cset6_slider_pane_g7_ParamLimits

0xadb2,	// (0x0006aefe) main_cset6_slider_pane_g7

0xadbe,	// (0x0006af0a) main_cset6_slider_pane_g8_ParamLimits

0xadbe,	// (0x0006af0a) main_cset6_slider_pane_g8

0x69f5,	// (0x00066b41) main_cset6_slider_pane_g9_ParamLimits

0x69f5,	// (0x00066b41) main_cset6_slider_pane_g9

0x6a01,	// (0x00066b4d) main_cset6_slider_pane_g10_ParamLimits

0x6a01,	// (0x00066b4d) main_cset6_slider_pane_g10

0x6a0d,	// (0x00066b59) main_cset6_slider_pane_g11_ParamLimits

0x6a0d,	// (0x00066b59) main_cset6_slider_pane_g11

0x6a19,	// (0x00066b65) main_cset6_slider_pane_g12_ParamLimits

0x6a19,	// (0x00066b65) main_cset6_slider_pane_g12

0x6a25,	// (0x00066b71) main_cset6_slider_pane_g13_ParamLimits

0x6a25,	// (0x00066b71) main_cset6_slider_pane_g13

0x6a31,	// (0x00066b7d) main_cset6_slider_pane_g14_ParamLimits

0x6a31,	// (0x00066b7d) main_cset6_slider_pane_g14

0x7b11,	// (0x00067c5d) main_cset6_slider_pane_g15_ParamLimits

0x7b11,	// (0x00067c5d) main_cset6_slider_pane_g15

0x6a55,	// (0x00066ba1) main_cset6_slider_pane_g16_ParamLimits

0x6a55,	// (0x00066ba1) main_cset6_slider_pane_g16

0x6a61,	// (0x00066bad) main_cset6_slider_pane_g17_ParamLimits

0x6a61,	// (0x00066bad) main_cset6_slider_pane_g17

0x0011,

0xfb7e,	// (0x0006fcca) main_cset6_slider_pane_g_ParamLimits

0xfb7e,	// (0x0006fcca) main_cset6_slider_pane_g

0xb612,	// (0x0006b75e) main_cset6_slider_pane_t1_ParamLimits

0xb612,	// (0x0006b75e) main_cset6_slider_pane_t1

0x7b29,	// (0x00067c75) main_cset6_slider_pane_t2_ParamLimits

0x7b29,	// (0x00067c75) main_cset6_slider_pane_t2

0x7b54,	// (0x00067ca0) main_cset6_slider_pane_t3_ParamLimits

0x7b54,	// (0x00067ca0) main_cset6_slider_pane_t3

0x7b7f,	// (0x00067ccb) main_cset6_slider_pane_t4_ParamLimits

0x7b7f,	// (0x00067ccb) main_cset6_slider_pane_t4

0x7baa,	// (0x00067cf6) main_cset6_slider_pane_t5_ParamLimits

0x7baa,	// (0x00067cf6) main_cset6_slider_pane_t5

0xb653,	// (0x0006b79f) main_cset6_slider_pane_t7_ParamLimits

0xb653,	// (0x0006b79f) main_cset6_slider_pane_t7

0x7bd5,	// (0x00067d21) main_cset6_slider_pane_t8_ParamLimits

0x7bd5,	// (0x00067d21) main_cset6_slider_pane_t8

0x7bf9,	// (0x00067d45) main_cset6_slider_pane_t9_ParamLimits

0x7bf9,	// (0x00067d45) main_cset6_slider_pane_t9

0x7c1d,	// (0x00067d69) main_cset6_slider_pane_t10_ParamLimits

0x7c1d,	// (0x00067d69) main_cset6_slider_pane_t10

0x7c41,	// (0x00067d8d) main_cset6_slider_pane_t11_ParamLimits

0x7c41,	// (0x00067d8d) main_cset6_slider_pane_t11

0xb689,	// (0x0006b7d5) main_cset6_slider_pane_t14_ParamLimits

0xb689,	// (0x0006b7d5) main_cset6_slider_pane_t14

0xb6c2,	// (0x0006b80e) main_cset6_slider_pane_t15_ParamLimits

0xb6c2,	// (0x0006b80e) main_cset6_slider_pane_t15

0x000b,

0xfba3,	// (0x0006fcef) main_cset6_slider_pane_t_ParamLimits

0xfba3,	// (0x0006fcef) main_cset6_slider_pane_t

0xb6fb,	// (0x0006b847) cset_slider_pane_g1_copy1

0xb704,	// (0x0006b850) cset_slider_pane_g2_copy1

0xb70d,	// (0x0006b859) cset_slider_pane_g3_copy1

0xbcf7,	// (0x0006be43) bg_popup_sub_pane_cp011_copy1

0xb716,	// (0x0006b862) main_cset_text_pane_g1_copy1

0xaf77,	// (0x0006b0c3) main_cset_text_pane_t1_copy1

0xaf85,	// (0x0006b0d1) main_cset_text_pane_t2_copy1

0xaf93,	// (0x0006b0df) main_cset_text_pane_t3_copy1

0xafa1,	// (0x0006b0ed) main_cset_text_pane_t4_copy1

0xafaf,	// (0x0006b0fb) main_cset_text_pane_t5_copy1

0xb71e,	// (0x0006b86a) main_cset_text_pane_t6_copy1

0xb72c,	// (0x0006b878) main_cset_text_pane_t7_copy1

0x7a16,	// (0x00067b62) main_cset_text2_pane_t1_copy1

0x9ce8,	// (0x00069e34) main_ncimui_pane

0x3b72,	// (0x00063cbe) popup_query_ncimui_window_ParamLimits

0x3b72,	// (0x00063cbe) popup_query_ncimui_window

0x4d32,	// (0x00064e7e) field_cale_ev2_pane_g4_ParamLimits

0x4d32,	// (0x00064e7e) field_cale_ev2_pane_g4

0x5c72,	// (0x00065dbe) cell_video_dialer_keypad_pane_g2_ParamLimits

0x5c72,	// (0x00065dbe) cell_video_dialer_keypad_pane_g2

0x0001,

0xf888,	// (0x0006f9d4) cell_video_dialer_keypad_pane_g_ParamLimits

0xf888,	// (0x0006f9d4) cell_video_dialer_keypad_pane_g

0x5c8a,	// (0x00065dd6) cell_video_dialer_keypad_pane_t1

0xbcf7,	// (0x0006be43) bg_popup_window_pane_cp012

0xd962,	// (0x0006daae) heading_pane_cp06

0xb758,	// (0x0006b8a4) ncim_query_content_pane

0xbcf7,	// (0x0006be43) bg_popup_heading_pane_cp01

0xb760,	// (0x0006b8ac) ncim_heading_pane_t1

0xb76e,	// (0x0006b8ba) ncim_indicator_popup_pane

0xb780,	// (0x0006b8cc) ncim_query_button_pane

0xb794,	// (0x0006b8e0) ncim_query_content_pane_t1

0xb7a6,	// (0x0006b8f2) ncim_query_content_pane_t2

0x0005,

0xfbe7,	// (0x0006fd33) ncim_query_content_pane_t

0xb7e0,	// (0x0006b92c) ncim_query_list_pane

0xb7f2,	// (0x0006b93e) ncim_query_popup_pane

0xb76e,	// (0x0006b8ba) ncim_indicator_popup_pane_ParamLimits

0x7e5c,	// (0x00067fa8) ncim_query_content_pane_g1_ParamLimits

0x7e5c,	// (0x00067fa8) ncim_query_content_pane_g1

0xb794,	// (0x0006b8e0) ncim_query_content_pane_t1_ParamLimits

0xb7a6,	// (0x0006b8f2) ncim_query_content_pane_t2_ParamLimits

0x7e68,	// (0x00067fb4) ncim_query_content_pane_t3_ParamLimits

0x7e68,	// (0x00067fb4) ncim_query_content_pane_t3

0x7e90,	// (0x00067fdc) ncim_query_content_pane_t4_ParamLimits

0x7e90,	// (0x00067fdc) ncim_query_content_pane_t4

0x7eb8,	// (0x00068004) ncim_query_content_pane_t5_ParamLimits

0x7eb8,	// (0x00068004) ncim_query_content_pane_t5

0xb7b8,	// (0x0006b904) ncim_query_content_pane_t6_ParamLimits

0xb7b8,	// (0x0006b904) ncim_query_content_pane_t6

0xfbe7,	// (0x0006fd33) ncim_query_content_pane_t_ParamLimits

0xb7e0,	// (0x0006b92c) ncim_query_list_pane_ParamLimits

0xb7f2,	// (0x0006b93e) ncim_query_popup_pane_ParamLimits

0xb806,	// (0x0006b952) wait_bar_pane_cp04

0xbcf7,	// (0x0006be43) input_focus_pane_cp011

0xb80e,	// (0x0006b95a) ncim_query_popup_pane_t1

0xb81c,	// (0x0006b968) ncim_list_query_list_pane_ParamLimits

0xb81c,	// (0x0006b968) ncim_list_query_list_pane

0xbcf7,	// (0x0006be43) bg_button_pane_cp027

0xb82f,	// (0x0006b97b) ncim_query_button_pane_g1

0xbcf7,	// (0x0006be43) list_highlight_pane_cp012

0xb839,	// (0x0006b985) ncim_list_query_list_pane_g1

0xb841,	// (0x0006b98d) ncim_list_query_list_pane_t1

0xab8d,	// (0x0006acd9) cam4_indicators_pane_g3_ParamLimits

0xab8d,	// (0x0006acd9) cam4_indicators_pane_g3

0xac0b,	// (0x0006ad57) vid4_indicators_pane_g5_ParamLimits

0xac0b,	// (0x0006ad57) vid4_indicators_pane_g5

0xb1bf,	// (0x0006b30b) vid4_progress_pane_g5_ParamLimits

0xb1bf,	// (0x0006b30b) vid4_progress_pane_g5

0x7d4a,	// (0x00067e96) main_ncimui_pane_g1

0x7db0,	// (0x00067efc) ncimui_group_query_pane_ParamLimits

0x7db0,	// (0x00067efc) ncimui_group_query_pane

0x7df8,	// (0x00067f44) ncimui_list_pane_ParamLimits

0x7df8,	// (0x00067f44) ncimui_list_pane

0x7e1f,	// (0x00067f6b) ncimui_text_pane_ParamLimits

0x7e1f,	// (0x00067f6b) ncimui_text_pane

0x7ee0,	// (0x0006802c) ncimui_text_pane_t1_ParamLimits

0x7ee0,	// (0x0006802c) ncimui_text_pane_t1

0xb84f,	// (0x0006b99b) ncimui_list_single_graphic_pane_ParamLimits

0xb84f,	// (0x0006b99b) ncimui_list_single_graphic_pane

0x7efe,	// (0x0006804a) ncimui_query_pane_ParamLimits

0x7efe,	// (0x0006804a) ncimui_query_pane

0xbcf7,	// (0x0006be43) list_highlight_pane_cp013

0xb85f,	// (0x0006b9ab) ncim_list_query_list_pane_t1_copy1

0xb839,	// (0x0006b985) ncim_list_single_graphic_pane_g1

0xb86d,	// (0x0006b9b9) ncim_query_button_pane_cp01

0xb879,	// (0x0006b9c5) ncim_query_entry_pane_ParamLimits

0xb879,	// (0x0006b9c5) ncim_query_entry_pane

0xb88c,	// (0x0006b9d8) ncimui_query_pane_g1

0xb898,	// (0x0006b9e4) ncimui_query_pane_t1_ParamLimits

0xb898,	// (0x0006b9e4) ncimui_query_pane_t1

0xc69f,	// (0x0006c7eb) input_focus_pane_cp012

0xb8b1,	// (0x0006b9fd) ncim_query_entry_pane_t1

0xc484,	// (0x0006c5d0) main_im_pane_ParamLimits

0x9ce8,	// (0x00069e34) main_mobtv_pane_ParamLimits

0x9ce8,	// (0x00069e34) main_mobtv_pane

0x69f5,	// (0x00066b41) main_cset6_slider_pane_g18_ParamLimits

0x69f5,	// (0x00066b41) main_cset6_slider_pane_g18

0x6a25,	// (0x00066b71) main_cset6_slider_pane_g19_ParamLimits

0x6a25,	// (0x00066b71) main_cset6_slider_pane_g19

0xb8c3,	// (0x0006ba0f) bg_main_mobtv_pane_ParamLimits

0xb8c3,	// (0x0006ba0f) bg_main_mobtv_pane

0x7f11,	// (0x0006805d) main_mobtv_info_pane

0x7f1a,	// (0x00068066) main_mobtv_loading_pane_ParamLimits

0x7f1a,	// (0x00068066) main_mobtv_loading_pane

0xb8d1,	// (0x0006ba1d) main_mobtv_pg_channel_list_pane

0xb8db,	// (0x0006ba27) main_mobtv_pg_hdr_pane

0x7f27,	// (0x00068073) main_mobtv_programe_curr_pane_ParamLimits

0x7f27,	// (0x00068073) main_mobtv_programe_curr_pane

0x7f34,	// (0x00068080) main_mobtv_programe_next_pane_ParamLimits

0x7f34,	// (0x00068080) main_mobtv_programe_next_pane

0xb8e4,	// (0x0006ba30) popup_mobtv_noti_window

0x49d4,	// (0x00064b20) main_tv_pg_hdr_pane_g1

0xb8ec,	// (0x0006ba38) main_tv_pg_hdr_pane_g2

0xb8f4,	// (0x0006ba40) main_tv_pg_hdr_pane_g3

0xb8fc,	// (0x0006ba48) main_tv_pg_hdr_pane_g4

0xb904,	// (0x0006ba50) main_tv_pg_hdr_pane_g5

0xb90e,	// (0x0006ba5a) main_tv_pg_hdr_pane_g6

0xb918,	// (0x0006ba64) main_tv_pg_hdr_pane_g7

0xb922,	// (0x0006ba6e) main_tv_pg_hdr_pane_g8

0xb92c,	// (0x0006ba78) main_tv_pg_hdr_pane_g9

0xb936,	// (0x0006ba82) main_tv_pg_hdr_pane_g10

0xb940,	// (0x0006ba8c) main_tv_pg_hdr_pane_g11

0x000a,

0xfbf4,	// (0x0006fd40) main_tv_pg_hdr_pane_g

0xb94a,	// (0x0006ba96) main_tv_pg_hdr_pane_t1

0xb958,	// (0x0006baa4) main_tv_pg_hdr_pane_t2

0xb966,	// (0x0006bab2) main_tv_pg_hdr_pane_t3

0xb976,	// (0x0006bac2) main_tv_pg_hdr_pane_t4

0xb986,	// (0x0006bad2) main_tv_pg_hdr_pane_t5

0x0004,

0xfc0b,	// (0x0006fd57) main_tv_pg_hdr_pane_t

0xb996,	// (0x0006bae2) single_mobtv_pg_channel_pane_ParamLimits

0xb996,	// (0x0006bae2) single_mobtv_pg_channel_pane

0xb9a8,	// (0x0006baf4) single_mobtv_pg_channel_table_pane

0xb9b1,	// (0x0006bafd) single_mobtv_pg_channel_thumb_pane

0xb9ba,	// (0x0006bb06) single_tv_pg_channel_pane_g1

0xb9c3,	// (0x0006bb0f) single_tv_pg_channel_pane_g2

0x0001,

0xfc16,	// (0x0006fd62) single_tv_pg_channel_pane_g

0xa113,	// (0x0006a25f) bg_single_mobtv_pg_channel_thumb_pane_ParamLimits

0xa113,	// (0x0006a25f) bg_single_mobtv_pg_channel_thumb_pane

0xb9cc,	// (0x0006bb18) single_mobtv_pg_channel_thumb_pane_g1_ParamLimits

0xb9cc,	// (0x0006bb18) single_mobtv_pg_channel_thumb_pane_g1

0xb9da,	// (0x0006bb26) single_mobtv_pg_channel_thumb_pane_g2_ParamLimits

0xb9da,	// (0x0006bb26) single_mobtv_pg_channel_thumb_pane_g2

0xb9e6,	// (0x0006bb32) single_mobtv_pg_channel_thumb_pane_g3_ParamLimits

0xb9e6,	// (0x0006bb32) single_mobtv_pg_channel_thumb_pane_g3

0x0002,

0xfc1b,	// (0x0006fd67) single_mobtv_pg_channel_thumb_pane_g_ParamLimits

0xfc1b,	// (0x0006fd67) single_mobtv_pg_channel_thumb_pane_g

0xb9f2,	// (0x0006bb3e) single_mobtv_pg_channel_thumb_pane_t1

0xba00,	// (0x0006bb4c) single_mobtv_pg_channel_thumb_pane_t2

0x0001,

0xfc22,	// (0x0006fd6e) single_mobtv_pg_channel_thumb_pane_t

0x49d4,	// (0x00064b20) bg_single_mobtv_pg_channel_table_pane_g1

0x49d4,	// (0x00064b20) bg_single_mobtv_pg_channel_table_pane_g2

0x0001,

0xf6d9,	// (0x0006f825) bg_single_mobtv_pg_channel_table_pane_g

0xba0e,	// (0x0006bb5a) single_mobtv_pg_channel_table_pane_t1

0xba1c,	// (0x0006bb68) single_mobtv_pg_channel_table_pane_t2

0x0001,

0xfc27,	// (0x0006fd73) single_mobtv_pg_channel_table_pane_t

0x7f49,	// (0x00068095) main_mobtv_info_pane_g1_ParamLimits

0x7f49,	// (0x00068095) main_mobtv_info_pane_g1

0x7f67,	// (0x000680b3) main_mobtv_info_pane_t1_ParamLimits

0x7f67,	// (0x000680b3) main_mobtv_info_pane_t1

0x7fdf,	// (0x0006812b) main_mobtv_info_pane_t2_ParamLimits

0x7fdf,	// (0x0006812b) main_mobtv_info_pane_t2

0x0002,

0xfc31,	// (0x0006fd7d) main_mobtv_info_pane_t_ParamLimits

0xfc31,	// (0x0006fd7d) main_mobtv_info_pane_t

0x806e,	// (0x000681ba) wait_bar_pane_cp05

0x8080,	// (0x000681cc) main_mobtv_loading_pane_g1_ParamLimits

0x8080,	// (0x000681cc) main_mobtv_loading_pane_g1

0x8093,	// (0x000681df) main_mobtv_loading_pane_g2_ParamLimits

0x8093,	// (0x000681df) main_mobtv_loading_pane_g2

0x809f,	// (0x000681eb) main_mobtv_loading_pane_g3_ParamLimits

0x809f,	// (0x000681eb) main_mobtv_loading_pane_g3

0x0002,

0xfc38,	// (0x0006fd84) main_mobtv_loading_pane_g_ParamLimits

0xfc38,	// (0x0006fd84) main_mobtv_loading_pane_g

0xba2a,	// (0x0006bb76) main_mobtv_loading_pane_t1_ParamLimits

0xba2a,	// (0x0006bb76) main_mobtv_loading_pane_t1

0xba42,	// (0x0006bb8e) main_mobtv_loading_pane_t2_ParamLimits

0xba42,	// (0x0006bb8e) main_mobtv_loading_pane_t2

0x0001,

0xfc3f,	// (0x0006fd8b) main_mobtv_loading_pane_t_ParamLimits

0xfc3f,	// (0x0006fd8b) main_mobtv_loading_pane_t

0x80b2,	// (0x000681fe) wait_bar_pane_cp06_ParamLimits

0x80b2,	// (0x000681fe) wait_bar_pane_cp06

0xba66,	// (0x0006bbb2) main_mobtv_programe_curr_pane_t1

0xba74,	// (0x0006bbc0) main_mobtv_programe_curr_pane_t2

0x0001,

0xfc44,	// (0x0006fd90) main_mobtv_programe_curr_pane_t

0xba82,	// (0x0006bbce) main_mobtv_programe_next_pane_t1

0xba90,	// (0x0006bbdc) main_mobtv_programe_next_pane_t2

0xba9e,	// (0x0006bbea) main_mobtv_programe_next_pane_t3

0x0002,

0xfc49,	// (0x0006fd95) main_mobtv_programe_next_pane_t

0xbcf7,	// (0x0006be43) bg_popup_mobtv_noti_window_pane

0xbaac,	// (0x0006bbf8) popup_mobtv_noti_window_g1

0xbab4,	// (0x0006bc00) popup_mobtv_noti_window_t1

0xbac2,	// (0x0006bc0e) popup_mobtv_noti_window_t2

0x0001,

0xfc50,	// (0x0006fd9c) popup_mobtv_noti_window_t

0x49d4,	// (0x00064b20) bg_popup_mobtv_noti_window_pane_g1

0x9cf6,	// (0x00069e42) sc_clock_pane

0x9cf6,	// (0x00069e42) main_fs_bigclock_pane

0x774c,	// (0x00067898) blid2_tripm_pane_t4_ParamLimits

0x774c,	// (0x00067898) blid2_tripm_pane_t4

0x80c1,	// (0x0006820d) sc_clock_pane_g1_ParamLimits

0x80c1,	// (0x0006820d) sc_clock_pane_g1

0x80d3,	// (0x0006821f) sc_clock_pane_t1_ParamLimits

0x80d3,	// (0x0006821f) sc_clock_pane_t1

0x80f5,	// (0x00068241) sc_clock_pane_t2_ParamLimits

0x80f5,	// (0x00068241) sc_clock_pane_t2

0x810d,	// (0x00068259) sc_clock_pane_t3_ParamLimits

0x810d,	// (0x00068259) sc_clock_pane_t3

0x0004,

0xfc55,	// (0x0006fda1) sc_clock_pane_t_ParamLimits

0xfc55,	// (0x0006fda1) sc_clock_pane_t

0x9267,	// (0x000693b3) main_fs_bigclock_indicator_pane_ParamLimits

0x9267,	// (0x000693b3) main_fs_bigclock_indicator_pane

0xa0e3,	// (0x0006a22f) main_fs_bigclock_pane_g1_ParamLimits

0xa0e3,	// (0x0006a22f) main_fs_bigclock_pane_g1

0x9273,	// (0x000693bf) main_fs_bigclock_pane_t1_ParamLimits

0x9273,	// (0x000693bf) main_fs_bigclock_pane_t1

0x9285,	// (0x000693d1) main_fs_bigclock_pane_t2_ParamLimits

0x9285,	// (0x000693d1) main_fs_bigclock_pane_t2

0x9297,	// (0x000693e3) main_fs_bigclock_pane_t3_ParamLimits

0x9297,	// (0x000693e3) main_fs_bigclock_pane_t3

0x0002,

0xfded,	// (0x0006ff39) main_fs_bigclock_pane_t_ParamLimits

0xfded,	// (0x0006ff39) main_fs_bigclock_pane_t

0xcd90,	// (0x0006cedc) main_fs_bigclock_indicator_pane_g1

0xb788,	// (0x0006b8d4) ncim_query_content_pane_g2_ParamLimits

0xb788,	// (0x0006b8d4) ncim_query_content_pane_g2

0x0001,

0xfbe2,	// (0x0006fd2e) ncim_query_content_pane_g_ParamLimits

0xfbe2,	// (0x0006fd2e) ncim_query_content_pane_g

0x8126,	// (0x00068272) sc_clock_pane_t4_ParamLimits

0x8126,	// (0x00068272) sc_clock_pane_t4

0x9ce8,	// (0x00069e34) main_radioblah_pane

0xaab3,	// (0x0006abff) cell_call4_button_pane_t1_copy1_ParamLimits

0xaab3,	// (0x0006abff) cell_call4_button_pane_t1_copy1

0x7d62,	// (0x00067eae) main_ncimui_pane_t1_ParamLimits

0x7d62,	// (0x00067eae) main_ncimui_pane_t1

0x7d7c,	// (0x00067ec8) main_ncimui_pane_t2_ParamLimits

0x7d7c,	// (0x00067ec8) main_ncimui_pane_t2

0x0002,

0xfbdb,	// (0x0006fd27) main_ncimui_pane_t_ParamLimits

0xfbdb,	// (0x0006fd27) main_ncimui_pane_t

0xbc0b,	// (0x0006bd57) main_radioblah_anim_pane_ParamLimits

0xbc0b,	// (0x0006bd57) main_radioblah_anim_pane

0xbc1c,	// (0x0006bd68) main_radioblah_info_pane_ParamLimits

0xbc1c,	// (0x0006bd68) main_radioblah_info_pane

0xbc30,	// (0x0006bd7c) main_radioblah_pane_t1_ParamLimits

0xbc30,	// (0x0006bd7c) main_radioblah_pane_t1

0xbc4c,	// (0x0006bd98) main_radioblah_pane_t2_ParamLimits

0xbc4c,	// (0x0006bd98) main_radioblah_pane_t2

0x0003,

0xfc76,	// (0x0006fdc2) main_radioblah_pane_t_ParamLimits

0xfc76,	// (0x0006fdc2) main_radioblah_pane_t

0x81d5,	// (0x00068321) main_radioblah_rocker_ctrl_pane_ParamLimits

0x81d5,	// (0x00068321) main_radioblah_rocker_ctrl_pane

0xbc94,	// (0x0006bde0) main_radioblah_info_pane_t1_ParamLimits

0xbc94,	// (0x0006bde0) main_radioblah_info_pane_t1

0x822d,	// (0x00068379) main_radioblah_info_pane_t2_ParamLimits

0x822d,	// (0x00068379) main_radioblah_info_pane_t2

0x0003,

0xfc7f,	// (0x0006fdcb) main_radioblah_info_pane_t_ParamLimits

0xfc7f,	// (0x0006fdcb) main_radioblah_info_pane_t

0x49d4,	// (0x00064b20) main_radioblah_rocker_ctrl_pane_g1

0x82df,	// (0x0006842b) main_radioblah_rocker_ctrl_pane_g2

0x82e7,	// (0x00068433) main_radioblah_rocker_ctrl_pane_g3

0x82ef,	// (0x0006843b) main_radioblah_rocker_ctrl_pane_g4

0x82f7,	// (0x00068443) main_radioblah_rocker_ctrl_pane_g5

0x82ff,	// (0x0006844b) main_radioblah_rocker_ctrl_pane_g6

0x0005,

0xfc88,	// (0x0006fdd4) main_radioblah_rocker_ctrl_pane_g

0x7a16,	// (0x00067b62) main_cset_text2_pane_t1_copy1_ParamLimits

0xab3d,	// (0x0006ac89) cam4_image_uncrop_qvga_pane

0xabb6,	// (0x0006ad02) vid4_image_uncrop_qcif_pane

0xb3aa,	// (0x0006b4f6) cam6_image_uncrop_qvga_pane_ParamLimits

0xb3aa,	// (0x0006b4f6) cam6_image_uncrop_qvga_pane

0xb480,	// (0x0006b5cc) vid6_image_uncrop_qcif_pane_ParamLimits

0xb480,	// (0x0006b5cc) vid6_image_uncrop_qcif_pane

0xbcf7,	// (0x0006be43) bg_popup_preview_window_pane_cp03

0xb73a,	// (0x0006b886) list_cset_text2_pane

0xb742,	// (0x0006b88e) main_cset6_text2_pane_g1

0xb74a,	// (0x0006b896) main_cset6_text2_pane_t1

0x8307,	// (0x00068453) list_cset_text2_pane_t1_ParamLimits

0x8307,	// (0x00068453) list_cset_text2_pane_t1

0x9ce8,	// (0x00069e34) main_radioblah_pane_ParamLimits

0x805a,	// (0x000681a6) main_mobtv_info_pane_t3_ParamLimits

0x805a,	// (0x000681a6) main_mobtv_info_pane_t3

0x81c3,	// (0x0006830f) main_radioblah_pane_g1

0x81fd,	// (0x00068349) main_radioblah_info_pane_g1

0x8284,	// (0x000683d0) main_radioblah_info_pane_t3_ParamLimits

0x8284,	// (0x000683d0) main_radioblah_info_pane_t3

0x24e8,	// (0x00062634) highlight_cell_cale_month_pane_ParamLimits

0x24e8,	// (0x00062634) highlight_cell_cale_month_pane

0x9cf6,	// (0x00069e42) main_phob_fisheye_pane

0xa1fb,	// (0x0006a347) scroll_pane_cp0031_ParamLimits

0xa1fb,	// (0x0006a347) scroll_pane_cp0031

0xb58e,	// (0x0006b6da) wait_bar_pane_cp08_ParamLimits

0x7a9a,	// (0x00067be6) cset_list_set_pane_copy1_ParamLimits

0xbcce,	// (0x0006be1a) highlight_cell_cale_month_pane_g1

0x8324,	// (0x00068470) highlight_cell_cale_month_pane_t1

0xb19f,	// (0x0006b2eb) list_gen_pane_cp01

0xad9d,	// (0x0006aee9) scroll_pane_01

0x8332,	// (0x0006847e) list_single_double_fisheye_pane

0x833b,	// (0x00068487) list_double_fisheye_pane_g1_ParamLimits

0x833b,	// (0x00068487) list_double_fisheye_pane_g1

0x8347,	// (0x00068493) list_double_fisheye_pane_g2_ParamLimits

0x8347,	// (0x00068493) list_double_fisheye_pane_g2

0x835b,	// (0x000684a7) list_double_fisheye_pane_g3_ParamLimits

0x835b,	// (0x000684a7) list_double_fisheye_pane_g3

0x0004,

0xfc95,	// (0x0006fde1) list_double_fisheye_pane_g_ParamLimits

0xfc95,	// (0x0006fde1) list_double_fisheye_pane_g

0x8384,	// (0x000684d0) list_double_fisheye_pane_t1_ParamLimits

0x8384,	// (0x000684d0) list_double_fisheye_pane_t1

0x839f,	// (0x000684eb) list_double_fisheye_pane_t2_ParamLimits

0x839f,	// (0x000684eb) list_double_fisheye_pane_t2

0x0001,

0xfca0,	// (0x0006fdec) list_double_fisheye_pane_t_ParamLimits

0xfca0,	// (0x0006fdec) list_double_fisheye_pane_t

0x9cf6,	// (0x00069e42) main_call5_pane

0x8151,	// (0x0006829d) sc_swipe_pane_ParamLimits

0x8151,	// (0x0006829d) sc_swipe_pane

0x83d4,	// (0x00068520) call5_image_pane_ParamLimits

0x83d4,	// (0x00068520) call5_image_pane

0x83f1,	// (0x0006853d) call5_swipe_1_pane_ParamLimits

0x83f1,	// (0x0006853d) call5_swipe_1_pane

0x8404,	// (0x00068550) call5_swipe_2_pane_ParamLimits

0x8404,	// (0x00068550) call5_swipe_2_pane

0x842f,	// (0x0006857b) popup_call5_audio_first_window_ParamLimits

0x842f,	// (0x0006857b) popup_call5_audio_first_window

0xa113,	// (0x0006a25f) call5_swipe_1_pane_g1_ParamLimits

0xa113,	// (0x0006a25f) call5_swipe_1_pane_g1

0xbcd6,	// (0x0006be22) call5_swipe_1_pane_g2_ParamLimits

0xbcd6,	// (0x0006be22) call5_swipe_1_pane_g2

0x0001,

0xfca5,	// (0x0006fdf1) call5_swipe_1_pane_g_ParamLimits

0xfca5,	// (0x0006fdf1) call5_swipe_1_pane_g

0xbce2,	// (0x0006be2e) call5_swipe_1_pane_t1_ParamLimits

0xbce2,	// (0x0006be2e) call5_swipe_1_pane_t1

0xa113,	// (0x0006a25f) call5_swipe_2_pane_g1_ParamLimits

0xa113,	// (0x0006a25f) call5_swipe_2_pane_g1

0xc6bf,	// (0x0006c80b) call5_swipe_2_pane_g2_ParamLimits

0xc6bf,	// (0x0006c80b) call5_swipe_2_pane_g2

0x0001,

0xfcaa,	// (0x0006fdf6) call5_swipe_2_pane_g_ParamLimits

0xfcaa,	// (0x0006fdf6) call5_swipe_2_pane_g

0xc6cb,	// (0x0006c817) call5_swipe_2_pane_t1_ParamLimits

0xc6cb,	// (0x0006c817) call5_swipe_2_pane_t1

0xc6e0,	// (0x0006c82c) sc_swipe_pane_g1_ParamLimits

0xc6e0,	// (0x0006c82c) sc_swipe_pane_g1

0xc6ed,	// (0x0006c839) sc_swipe_pane_g2_ParamLimits

0xc6ed,	// (0x0006c839) sc_swipe_pane_g2

0x0001,

0x06dc,	// (0x00060828) sc_swipe_pane_g_ParamLimits

0x06dc,	// (0x00060828) sc_swipe_pane_g

0xc6f9,	// (0x0006c845) sc_swipe_pane_t1_ParamLimits

0xc6f9,	// (0x0006c845) sc_swipe_pane_t1

0x9cf6,	// (0x00069e42) main_cmail_launcher_pane

0x8440,	// (0x0006858c) aid_size_cell_cmail_l_ParamLimits

0x8440,	// (0x0006858c) aid_size_cell_cmail_l

0x845a,	// (0x000685a6) grid_cmail_l_pane_ParamLimits

0x845a,	// (0x000685a6) grid_cmail_l_pane

0x8475,	// (0x000685c1) cell_cmail_l_pane_ParamLimits

0x8475,	// (0x000685c1) cell_cmail_l_pane

0x849b,	// (0x000685e7) cell_cmail_l_pane_g1_ParamLimits

0x849b,	// (0x000685e7) cell_cmail_l_pane_g1

0x84a7,	// (0x000685f3) cell_cmail_l_pane_t1_ParamLimits

0x84a7,	// (0x000685f3) cell_cmail_l_pane_t1

0xc70e,	// (0x0006c85a) cell_cmail_l_pane_t2_ParamLimits

0xc70e,	// (0x0006c85a) cell_cmail_l_pane_t2

0x0001,

0xfcaf,	// (0x0006fdfb) cell_cmail_l_pane_t_ParamLimits

0xfcaf,	// (0x0006fdfb) cell_cmail_l_pane_t

0xc69f,	// (0x0006c7eb) grid_highlight_pane_cp018_ParamLimits

0xc69f,	// (0x0006c7eb) grid_highlight_pane_cp018

0x0b2f,	// (0x00060c7b) main2_pane_ParamLimits

0x0b2f,	// (0x00060c7b) main2_pane

0xc52f,	// (0x0006c67b) popup_sp_fs_action_menu_bg_pane_g1

0xc537,	// (0x0006c683) popup_sp_fs_action_menu_bg_pane_g2

0xc53f,	// (0x0006c68b) popup_sp_fs_action_menu_bg_pane_g3

0xc547,	// (0x0006c693) popup_sp_fs_action_menu_bg_pane_g4

0xc54f,	// (0x0006c69b) popup_sp_fs_action_menu_bg_pane_g5

0xc557,	// (0x0006c6a3) popup_sp_fs_action_menu_bg_pane_g6

0xc55f,	// (0x0006c6ab) popup_sp_fs_action_menu_bg_pane_g7

0xc567,	// (0x0006c6b3) popup_sp_fs_action_menu_bg_pane_g8

0xc56f,	// (0x0006c6bb) popup_sp_fs_action_menu_bg_pane_g9

0xc577,	// (0x0006c6c3) popup_sp_fs_action_menu_bg_pane_g10

0xc577,	// (0x0006c6c3) popup_sp_fs_action_menu_bg_pane_g11

0x000a,

0xf198,	// (0x0006f2e4) popup_sp_fs_action_menu_bg_pane_g

0xd17c,	// (0x0006d2c8) list_medium_line_x2_t3_g3_g1_ParamLimits

0xd17c,	// (0x0006d2c8) list_medium_line_x2_t3_g3_g1

0xd188,	// (0x0006d2d4) list_medium_line_x2_t3_g3_g2_ParamLimits

0xd188,	// (0x0006d2d4) list_medium_line_x2_t3_g3_g2

0xd194,	// (0x0006d2e0) list_medium_line_x2_t3_g3_g3_ParamLimits

0xd194,	// (0x0006d2e0) list_medium_line_x2_t3_g3_g3

0x0002,

0xf248,	// (0x0006f394) list_medium_line_x2_t3_g3_g_ParamLimits

0xf248,	// (0x0006f394) list_medium_line_x2_t3_g3_g

0xd1a0,	// (0x0006d2ec) list_medium_line_x2_t3_g3_t1_ParamLimits

0xd1a0,	// (0x0006d2ec) list_medium_line_x2_t3_g3_t1

0x17fa,	// (0x00061946) list_medium_line_x2_t3_g3_t2_ParamLimits

0x17fa,	// (0x00061946) list_medium_line_x2_t3_g3_t2

0xd1b5,	// (0x0006d301) list_medium_line_x2_t3_g3_t3_ParamLimits

0xd1b5,	// (0x0006d301) list_medium_line_x2_t3_g3_t3

0x0002,

0xf24f,	// (0x0006f39b) list_medium_line_x2_t3_g3_t_ParamLimits

0xf24f,	// (0x0006f39b) list_medium_line_x2_t3_g3_t

0xd17c,	// (0x0006d2c8) list_medium_line_x2_t3_g2_g1_ParamLimits

0xd17c,	// (0x0006d2c8) list_medium_line_x2_t3_g2_g1

0xd194,	// (0x0006d2e0) list_medium_line_x2_t3_g2_g2_ParamLimits

0xd194,	// (0x0006d2e0) list_medium_line_x2_t3_g2_g2

0x0001,

0xf256,	// (0x0006f3a2) list_medium_line_x2_t3_g2_g_ParamLimits

0xf256,	// (0x0006f3a2) list_medium_line_x2_t3_g2_g

0xd1ca,	// (0x0006d316) list_medium_line_x2_t3_g2_t1_ParamLimits

0xd1ca,	// (0x0006d316) list_medium_line_x2_t3_g2_t1

0xd1e0,	// (0x0006d32c) list_medium_line_x2_t3_g2_t2_ParamLimits

0xd1e0,	// (0x0006d32c) list_medium_line_x2_t3_g2_t2

0xd1b5,	// (0x0006d301) list_medium_line_x2_t3_g2_t3_ParamLimits

0xd1b5,	// (0x0006d301) list_medium_line_x2_t3_g2_t3

0x0002,

0xf25b,	// (0x0006f3a7) list_medium_line_x2_t3_g2_t_ParamLimits

0xf25b,	// (0x0006f3a7) list_medium_line_x2_t3_g2_t

0xd17c,	// (0x0006d2c8) list_medium_line_x2_t4_g4_g1_ParamLimits

0xd17c,	// (0x0006d2c8) list_medium_line_x2_t4_g4_g1

0xd1f2,	// (0x0006d33e) list_medium_line_x2_t4_g4_g2_ParamLimits

0xd1f2,	// (0x0006d33e) list_medium_line_x2_t4_g4_g2

0xd188,	// (0x0006d2d4) list_medium_line_x2_t4_g4_g3_ParamLimits

0xd188,	// (0x0006d2d4) list_medium_line_x2_t4_g4_g3

0xd1fe,	// (0x0006d34a) list_medium_line_x2_t4_g4_g4_ParamLimits

0xd1fe,	// (0x0006d34a) list_medium_line_x2_t4_g4_g4

0x0003,

0xf262,	// (0x0006f3ae) list_medium_line_x2_t4_g4_g_ParamLimits

0xf262,	// (0x0006f3ae) list_medium_line_x2_t4_g4_g

0x180e,	// (0x0006195a) list_medium_line_x2_t4_g4_t1_ParamLimits

0x180e,	// (0x0006195a) list_medium_line_x2_t4_g4_t1

0x1828,	// (0x00061974) list_medium_line_x2_t4_g4_t2_ParamLimits

0x1828,	// (0x00061974) list_medium_line_x2_t4_g4_t2

0x183d,	// (0x00061989) list_medium_line_x2_t4_g4_t3_ParamLimits

0x183d,	// (0x00061989) list_medium_line_x2_t4_g4_t3

0xd20a,	// (0x0006d356) list_medium_line_x2_t4_g4_t4_ParamLimits

0xd20a,	// (0x0006d356) list_medium_line_x2_t4_g4_t4

0x0003,

0xf26b,	// (0x0006f3b7) list_medium_line_x2_t4_g4_t_ParamLimits

0xf26b,	// (0x0006f3b7) list_medium_line_x2_t4_g4_t

0xd17c,	// (0x0006d2c8) list_medium_line_x2_t2_g4_g1_ParamLimits

0xd17c,	// (0x0006d2c8) list_medium_line_x2_t2_g4_g1

0xd1f2,	// (0x0006d33e) list_medium_line_x2_t2_g4_g2_ParamLimits

0xd1f2,	// (0x0006d33e) list_medium_line_x2_t2_g4_g2

0xd188,	// (0x0006d2d4) list_medium_line_x2_t2_g4_g3_ParamLimits

0xd188,	// (0x0006d2d4) list_medium_line_x2_t2_g4_g3

0xd194,	// (0x0006d2e0) list_medium_line_x2_t2_g4_g4_ParamLimits

0xd194,	// (0x0006d2e0) list_medium_line_x2_t2_g4_g4

0x0003,

0xf2d2,	// (0x0006f41e) list_medium_line_x2_t2_g4_g_ParamLimits

0xf2d2,	// (0x0006f41e) list_medium_line_x2_t2_g4_g

0xd4f4,	// (0x0006d640) list_medium_line_x2_t2_g4_t1_ParamLimits

0xd4f4,	// (0x0006d640) list_medium_line_x2_t2_g4_t1

0xd1b5,	// (0x0006d301) list_medium_line_x2_t2_g4_t2_ParamLimits

0xd1b5,	// (0x0006d301) list_medium_line_x2_t2_g4_t2

0x0001,

0xf2db,	// (0x0006f427) list_medium_line_x2_t2_g4_t_ParamLimits

0xf2db,	// (0x0006f427) list_medium_line_x2_t2_g4_t

0xd17c,	// (0x0006d2c8) list_medium_line_x2_t2_g3_g1_ParamLimits

0xd17c,	// (0x0006d2c8) list_medium_line_x2_t2_g3_g1

0xd188,	// (0x0006d2d4) list_medium_line_x2_t2_g3_g2_ParamLimits

0xd188,	// (0x0006d2d4) list_medium_line_x2_t2_g3_g2

0xd194,	// (0x0006d2e0) list_medium_line_x2_t2_g3_g3_ParamLimits

0xd194,	// (0x0006d2e0) list_medium_line_x2_t2_g3_g3

0x0002,

0xf248,	// (0x0006f394) list_medium_line_x2_t2_g3_g_ParamLimits

0xf248,	// (0x0006f394) list_medium_line_x2_t2_g3_g

0xd509,	// (0x0006d655) list_medium_line_x2_t2_g3_t1_ParamLimits

0xd509,	// (0x0006d655) list_medium_line_x2_t2_g3_t1

0xd1b5,	// (0x0006d301) list_medium_line_x2_t2_g3_t2_ParamLimits

0xd1b5,	// (0x0006d301) list_medium_line_x2_t2_g3_t2

0x0001,

0xf2e0,	// (0x0006f42c) list_medium_line_x2_t2_g3_t_ParamLimits

0xf2e0,	// (0x0006f42c) list_medium_line_x2_t2_g3_t

0x26ce,	// (0x0006281a) main_sp_fs_list_pane_ParamLimits

0x26ce,	// (0x0006281a) main_sp_fs_list_pane

0x26da,	// (0x00062826) sp_fs_scroll_pane_ParamLimits

0x26da,	// (0x00062826) sp_fs_scroll_pane

0x26e6,	// (0x00062832) list_medium_line_x2_t3_t1

0x26f6,	// (0x00062842) list_medium_line_x2_t3_t2

0xd776,	// (0x0006d8c2) list_medium_line_x2_t3_t3

0x0002,

0xf32b,	// (0x0006f477) list_medium_line_x2_t3_t

0x2704,	// (0x00062850) list_medium_line_x3_t4_t1

0x2714,	// (0x00062860) list_medium_line_x3_t4_t2

0xd784,	// (0x0006d8d0) list_medium_line_x3_t4_t3

0xd776,	// (0x0006d8c2) list_medium_line_x3_t4_t4

0x0003,

0xf332,	// (0x0006f47e) list_medium_line_x3_t4_t

0x2722,	// (0x0006286e) list_medium_line_x4_t5_t1

0x2732,	// (0x0006287e) list_medium_line_x4_t5_t2

0xd784,	// (0x0006d8d0) list_medium_line_x4_t5_t3

0xd792,	// (0x0006d8de) list_medium_line_x4_t5_t4

0xd776,	// (0x0006d8c2) list_medium_line_x4_t5_t5

0x0004,

0xf33b,	// (0x0006f487) list_medium_line_x4_t5_t

0xd17c,	// (0x0006d2c8) list_medium_line_t4_g4_g1_ParamLimits

0xd17c,	// (0x0006d2c8) list_medium_line_t4_g4_g1

0xd1fe,	// (0x0006d34a) list_medium_line_t4_g4_g2_ParamLimits

0xd1fe,	// (0x0006d34a) list_medium_line_t4_g4_g2

0xd7a0,	// (0x0006d8ec) list_medium_line_t4_g4_g3_ParamLimits

0xd7a0,	// (0x0006d8ec) list_medium_line_t4_g4_g3

0xd194,	// (0x0006d2e0) list_medium_line_t4_g4_g4_ParamLimits

0xd194,	// (0x0006d2e0) list_medium_line_t4_g4_g4

0x0003,

0xf346,	// (0x0006f492) list_medium_line_t4_g4_g_ParamLimits

0xf346,	// (0x0006f492) list_medium_line_t4_g4_g

0xd7ac,	// (0x0006d8f8) list_medium_line_t4_g4_t1_ParamLimits

0xd7ac,	// (0x0006d8f8) list_medium_line_t4_g4_t1

0xd7c1,	// (0x0006d90d) list_medium_line_t4_g4_t2_ParamLimits

0xd7c1,	// (0x0006d90d) list_medium_line_t4_g4_t2

0xd7d6,	// (0x0006d922) list_medium_line_t4_g4_t3_ParamLimits

0xd7d6,	// (0x0006d922) list_medium_line_t4_g4_t3

0xd1b5,	// (0x0006d301) list_medium_line_t4_g4_t4_ParamLimits

0xd1b5,	// (0x0006d301) list_medium_line_t4_g4_t4

0x0003,

0xf34f,	// (0x0006f49b) list_medium_line_t4_g4_t_ParamLimits

0xf34f,	// (0x0006f49b) list_medium_line_t4_g4_t

0x27de,	// (0x0006292a) chi_dic_find_pane_g1

0x3950,	// (0x00063a9c) main_tport_pane

0x6d2f,	// (0x00066e7b) list_medium_line_plain_t1

0x6de1,	// (0x00066f2d) list_medium_line_t2_g2_g1_ParamLimits

0x6de1,	// (0x00066f2d) list_medium_line_t2_g2_g1

0x6ded,	// (0x00066f39) list_medium_line_t2_g2_g2_ParamLimits

0x6ded,	// (0x00066f39) list_medium_line_t2_g2_g2

0x0001,

0xf9ec,	// (0x0006fb38) list_medium_line_t2_g2_g_ParamLimits

0xf9ec,	// (0x0006fb38) list_medium_line_t2_g2_g

0x6df9,	// (0x00066f45) list_medium_line_t2_g2_t1_ParamLimits

0x6df9,	// (0x00066f45) list_medium_line_t2_g2_t1

0x6e13,	// (0x00066f5f) list_medium_line_t2_g2_t2_ParamLimits

0x6e13,	// (0x00066f5f) list_medium_line_t2_g2_t2

0x0001,

0xf9f1,	// (0x0006fb3d) list_medium_line_t2_g2_t_ParamLimits

0xf9f1,	// (0x0006fb3d) list_medium_line_t2_g2_t

0x74e5,	// (0x00067631) aid_sp_fs_list_icon_a_sm

0x74ed,	// (0x00067639) aid_sp_fs_list_icon_d

0xc6ad,	// (0x0006c7f9) aid_sp_fs_text_primary

0xc6b6,	// (0x0006c802) aid_sp_fs_text_secondary

0x74f5,	// (0x00067641) list_medium_line

0x74f5,	// (0x00067641) list_medium_line_g2

0x74f5,	// (0x00067641) list_medium_line_g3

0x74f5,	// (0x00067641) list_medium_line_plain

0x74f5,	// (0x00067641) list_medium_line_plain_t2

0x74f5,	// (0x00067641) list_medium_line_plain_t3

0x74f5,	// (0x00067641) list_medium_line_right_icon

0x74f5,	// (0x00067641) list_medium_line_right_iconx2

0x74f5,	// (0x00067641) list_medium_line_t2

0x74f5,	// (0x00067641) list_medium_line_t2_g2

0x74f5,	// (0x00067641) list_medium_line_t2_g3

0x74f5,	// (0x00067641) list_medium_line_t2_right_icon

0x74f5,	// (0x00067641) list_medium_line_t2_right_iconx2

0x74f5,	// (0x00067641) list_medium_line_t3

0x74f5,	// (0x00067641) list_medium_line_t3_g2

0x74f5,	// (0x00067641) list_medium_line_t3_g3

0x74f5,	// (0x00067641) list_medium_line_t3_right_iconx2

0x74fe,	// (0x0006764a) list_medium_line_t4_g4

0x7507,	// (0x00067653) list_medium_line_x2

0x7507,	// (0x00067653) list_medium_line_x2_t2_g2

0x7507,	// (0x00067653) list_medium_line_x2_t2_g3

0x7507,	// (0x00067653) list_medium_line_x2_t2_g4

0x7507,	// (0x00067653) list_medium_line_x2_t3

0x7507,	// (0x00067653) list_medium_line_x2_t3_g2

0x7507,	// (0x00067653) list_medium_line_x2_t3_g3

0x7507,	// (0x00067653) list_medium_line_x2_t3_g4

0x7507,	// (0x00067653) list_medium_line_x2_t4_g2

0x7507,	// (0x00067653) list_medium_line_x2_t4_g4

0x7510,	// (0x0006765c) list_medium_line_x3

0x7510,	// (0x0006765c) list_medium_line_x3_t4

0x7510,	// (0x0006765c) list_medium_line_x3_t4_g4

0x74fe,	// (0x0006764a) list_medium_line_x4_t4

0x74fe,	// (0x0006764a) list_medium_line_x4_t4_g7

0x74fe,	// (0x0006764a) list_medium_line_x4_t5

0x7519,	// (0x00067665) list_single_fs_dyc_pane_ParamLimits

0x7519,	// (0x00067665) list_single_fs_dyc_pane

0xd17c,	// (0x0006d2c8) list_medium_line_x4_t4_g7_g1_ParamLimits

0xd17c,	// (0x0006d2c8) list_medium_line_x4_t4_g7_g1

0x7c65,	// (0x00067db1) list_medium_line_x4_t4_g7_g2_ParamLimits

0x7c65,	// (0x00067db1) list_medium_line_x4_t4_g7_g2

0x7c71,	// (0x00067dbd) list_medium_line_x4_t4_g7_g3_ParamLimits

0x7c71,	// (0x00067dbd) list_medium_line_x4_t4_g7_g3

0x7c80,	// (0x00067dcc) list_medium_line_x4_t4_g7_g4_ParamLimits

0x7c80,	// (0x00067dcc) list_medium_line_x4_t4_g7_g4

0x7c8c,	// (0x00067dd8) list_medium_line_x4_t4_g7_g5_ParamLimits

0x7c8c,	// (0x00067dd8) list_medium_line_x4_t4_g7_g5

0x7c9b,	// (0x00067de7) list_medium_line_x4_t4_g7_g6_ParamLimits

0x7c9b,	// (0x00067de7) list_medium_line_x4_t4_g7_g6

0x7caa,	// (0x00067df6) list_medium_line_x4_t4_g7_g7_ParamLimits

0x7caa,	// (0x00067df6) list_medium_line_x4_t4_g7_g7

0x0006,

0xfbbc,	// (0x0006fd08) list_medium_line_x4_t4_g7_g_ParamLimits

0xfbbc,	// (0x0006fd08) list_medium_line_x4_t4_g7_g

0x7cb6,	// (0x00067e02) list_medium_line_x4_t4_g7_t1_ParamLimits

0x7cb6,	// (0x00067e02) list_medium_line_x4_t4_g7_t1

0x7ccb,	// (0x00067e17) list_medium_line_x4_t4_g7_t2_ParamLimits

0x7ccb,	// (0x00067e17) list_medium_line_x4_t4_g7_t2

0x7ce0,	// (0x00067e2c) list_medium_line_x4_t4_g7_t3_ParamLimits

0x7ce0,	// (0x00067e2c) list_medium_line_x4_t4_g7_t3

0x7cf5,	// (0x00067e41) list_medium_line_x4_t4_g7_t4_ParamLimits

0x7cf5,	// (0x00067e41) list_medium_line_x4_t4_g7_t4

0x7d07,	// (0x00067e53) list_medium_line_x4_t4_g7_t5_ParamLimits

0x7d07,	// (0x00067e53) list_medium_line_x4_t4_g7_t5

0x0004,

0xfbcb,	// (0x0006fd17) list_medium_line_x4_t4_g7_t_ParamLimits

0xfbcb,	// (0x0006fd17) list_medium_line_x4_t4_g7_t

0x7d19,	// (0x00067e65) list_single_dyc_row_pane_ParamLimits

0x7d19,	// (0x00067e65) list_single_dyc_row_pane

0x83c1,	// (0x0006850d) call5_gesture_pane_ParamLimits

0x83c1,	// (0x0006850d) call5_gesture_pane

0x8417,	// (0x00068563) call5_windows_pane_ParamLimits

0x8417,	// (0x00068563) call5_windows_pane

0x84bd,	// (0x00068609) call5_swipe_1_pane_cp_ParamLimits

0x84bd,	// (0x00068609) call5_swipe_1_pane_cp

0x84c9,	// (0x00068615) call5_swipe_2_pane_cp_ParamLimits

0x84c9,	// (0x00068615) call5_swipe_2_pane_cp

0xdbdf,	// (0x0006dd2b) call5_image_pane_cp

0x84d5,	// (0x00068621) popup_call5_audio_first_window_cp_ParamLimits

0x84d5,	// (0x00068621) popup_call5_audio_first_window_cp

0xc6e0,	// (0x0006c82c) call5_swipe_1_pane_g1_cp_ParamLimits

0xc6e0,	// (0x0006c82c) call5_swipe_1_pane_g1_cp

0xc720,	// (0x0006c86c) call5_swipe_1_pane_g2_cp

0xc6f9,	// (0x0006c845) call5_swipe_1_pane_t1_cp_ParamLimits

0xc6f9,	// (0x0006c845) call5_swipe_1_pane_t1_cp

0xc6e0,	// (0x0006c82c) call5_swipe_2_pane_g1_cp_ParamLimits

0xc6e0,	// (0x0006c82c) call5_swipe_2_pane_g1_cp

0xc728,	// (0x0006c874) call5_swipe_2_pane_g2_cp

0xc730,	// (0x0006c87c) call5_swipe_2_pane_t1_cp_ParamLimits

0xc730,	// (0x0006c87c) call5_swipe_2_pane_t1_cp

0xc69f,	// (0x0006c7eb) main_sp_fs_email_pane

0xc745,	// (0x0006c891) main_sp_fs_listscroll_pane_te

0x84e1,	// (0x0006862d) popup_sp_fs_action_menu_pane_ParamLimits

0x84e1,	// (0x0006862d) popup_sp_fs_action_menu_pane

0x49d4,	// (0x00064b20) bg_sp_fs_ctrlbar_pane_g1

0xc74e,	// (0x0006c89a) bg_sp_fs_ctrlbar_ddmenu_pane_g1

0xc757,	// (0x0006c8a3) bg_sp_fs_ctrlbar_ddmenu_pane_g2

0xc760,	// (0x0006c8ac) bg_sp_fs_ctrlbar_ddmenu_pane_g3

0x49d4,	// (0x00064b20) bg_sp_fs_ctrlbar_ddmenu_pane_g4

0x0003,

0xfcb4,	// (0x0006fe00) bg_sp_fs_ctrlbar_ddmenu_pane_g

0x46eb,	// (0x00064837) bg_sp_fs_ctrlbar_ddmenu_pane_ParamLimits

0x46eb,	// (0x00064837) bg_sp_fs_ctrlbar_ddmenu_pane

0xc769,	// (0x0006c8b5) main_sp_fs_ctrlbar_ddmenu_pane_g1_ParamLimits

0xc769,	// (0x0006c8b5) main_sp_fs_ctrlbar_ddmenu_pane_g1

0xc775,	// (0x0006c8c1) main_sp_fs_ctrlbar_ddmenu_pane_g2_ParamLimits

0xc775,	// (0x0006c8c1) main_sp_fs_ctrlbar_ddmenu_pane_g2

0x0001,

0x06ef,	// (0x0006083b) main_sp_fs_ctrlbar_ddmenu_pane_g_ParamLimits

0x06ef,	// (0x0006083b) main_sp_fs_ctrlbar_ddmenu_pane_g

0xc781,	// (0x0006c8cd) main_sp_fs_ctrlbar_ddmenu_pane_t1_ParamLimits

0xc781,	// (0x0006c8cd) main_sp_fs_ctrlbar_ddmenu_pane_t1

0x8521,	// (0x0006866d) list_medium_line_t2_right_icon_g1

0x8529,	// (0x00068675) list_medium_line_t2_right_icon_t1

0x8539,	// (0x00068685) list_medium_line_t2_right_icon_t2

0x0001,

0xfcbd,	// (0x0006fe09) list_medium_line_t2_right_icon_t

0xf02a,	// (0x0006f176) bg_sp_fs_ctrlbar_pane_ParamLimits

0xf02a,	// (0x0006f176) bg_sp_fs_ctrlbar_pane

0x8596,	// (0x000686e2) main_sp_fs_ctrlbar_button_pane_cp01

0x85a0,	// (0x000686ec) main_sp_fs_ctrlbar_ddmenu_pane

0xc7d3,	// (0x0006c91f) main_sp_fs_ctrlbar_pane_g1

0xc7df,	// (0x0006c92b) main_sp_fs_ctrlbar_pane_g2

0x0001,

0x06f9,	// (0x00060845) main_sp_fs_ctrlbar_pane_g

0xc7eb,	// (0x0006c937) main_sp_fs_ctrlbar_pane_t1

0x85aa,	// (0x000686f6) main_sp_fs_ctrlbar_pane

0x85ce,	// (0x0006871a) main_sp_fs_listscroll_pane_te_cp01

0x85ee,	// (0x0006873a) popup_sp_fs_action_menu_pane_cp01_ParamLimits

0x85ee,	// (0x0006873a) popup_sp_fs_action_menu_pane_cp01

0xc69f,	// (0x0006c7eb) bg_sp_fs_highlight_list_pane_cp01_ParamLimits

0xc69f,	// (0x0006c7eb) bg_sp_fs_highlight_list_pane_cp01

0x8618,	// (0x00068764) sp_fs_action_menu_list_gene_pane_g1_ParamLimits

0x8618,	// (0x00068764) sp_fs_action_menu_list_gene_pane_g1

0xc810,	// (0x0006c95c) sp_fs_action_menu_list_gene_pane_g2_ParamLimits

0xc810,	// (0x0006c95c) sp_fs_action_menu_list_gene_pane_g2

0x0001,

0xfcc2,	// (0x0006fe0e) sp_fs_action_menu_list_gene_pane_g_ParamLimits

0xfcc2,	// (0x0006fe0e) sp_fs_action_menu_list_gene_pane_g

0x8627,	// (0x00068773) sp_fs_action_menu_list_gene_pane_t1_ParamLimits

0x8627,	// (0x00068773) sp_fs_action_menu_list_gene_pane_t1

0x863f,	// (0x0006878b) sp_fs_action_menu_list_gene_pane_ParamLimits

0x863f,	// (0x0006878b) sp_fs_action_menu_list_gene_pane

0xc81d,	// (0x0006c969) popup_sp_fs_action_menu_bg_pane_ParamLimits

0xc81d,	// (0x0006c969) popup_sp_fs_action_menu_bg_pane

0x865c,	// (0x000687a8) sp_fs_action_menu_list_pane_ParamLimits

0x865c,	// (0x000687a8) sp_fs_action_menu_list_pane

0xc82b,	// (0x0006c977) sp_fs_scroll_pane_cp01_ParamLimits

0xc82b,	// (0x0006c977) sp_fs_scroll_pane_cp01

0x867a,	// (0x000687c6) list_medium_line_plain_t2_t1

0x868a,	// (0x000687d6) list_medium_line_plain_t2_t2

0x0001,

0xfcc7,	// (0x0006fe13) list_medium_line_plain_t2_t

0x869a,	// (0x000687e6) list_medium_line_plain_t3_t1

0x86aa,	// (0x000687f6) list_medium_line_plain_t3_t2

0x86b8,	// (0x00068804) list_medium_line_plain_t3_t3

0x0002,

0xfccc,	// (0x0006fe18) list_medium_line_plain_t3_t

0xd17c,	// (0x0006d2c8) list_medium_line_x2_t2_g2_g1_ParamLimits

0xd17c,	// (0x0006d2c8) list_medium_line_x2_t2_g2_g1

0xd194,	// (0x0006d2e0) list_medium_line_x2_t2_g2_g2_ParamLimits

0xd194,	// (0x0006d2e0) list_medium_line_x2_t2_g2_g2

0x0001,

0xf256,	// (0x0006f3a2) list_medium_line_x2_t2_g2_g_ParamLimits

0xf256,	// (0x0006f3a2) list_medium_line_x2_t2_g2_g

0xd7ac,	// (0x0006d8f8) list_medium_line_x2_t2_g2_t1_ParamLimits

0xd7ac,	// (0x0006d8f8) list_medium_line_x2_t2_g2_t1

0xd1b5,	// (0x0006d301) list_medium_line_x2_t2_g2_t2_ParamLimits

0xd1b5,	// (0x0006d301) list_medium_line_x2_t2_g2_t2

0x0001,

0xfcd3,	// (0x0006fe1f) list_medium_line_x2_t2_g2_t_ParamLimits

0xfcd3,	// (0x0006fe1f) list_medium_line_x2_t2_g2_t

0xd17c,	// (0x0006d2c8) list_medium_line_x2_t4_g2_g1_ParamLimits

0xd17c,	// (0x0006d2c8) list_medium_line_x2_t4_g2_g1

0x86c6,	// (0x00068812) list_medium_line_x2_t4_g2_g2_ParamLimits

0x86c6,	// (0x00068812) list_medium_line_x2_t4_g2_g2

0x0001,

0xfcd8,	// (0x0006fe24) list_medium_line_x2_t4_g2_g_ParamLimits

0xfcd8,	// (0x0006fe24) list_medium_line_x2_t4_g2_g

0x86d8,	// (0x00068824) list_medium_line_x2_t4_g2_t1_ParamLimits

0x86d8,	// (0x00068824) list_medium_line_x2_t4_g2_t1

0x86ef,	// (0x0006883b) list_medium_line_x2_t4_g2_t2_ParamLimits

0x86ef,	// (0x0006883b) list_medium_line_x2_t4_g2_t2

0x8704,	// (0x00068850) list_medium_line_x2_t4_g2_t3_ParamLimits

0x8704,	// (0x00068850) list_medium_line_x2_t4_g2_t3

0xd1b5,	// (0x0006d301) list_medium_line_x2_t4_g2_t4_ParamLimits

0xd1b5,	// (0x0006d301) list_medium_line_x2_t4_g2_t4

0x0003,

0xfcdd,	// (0x0006fe29) list_medium_line_x2_t4_g2_t_ParamLimits

0xfcdd,	// (0x0006fe29) list_medium_line_x2_t4_g2_t

0x8716,	// (0x00068862) list_medium_line_t3_right_iconx2_g1

0x8521,	// (0x0006866d) list_medium_line_t3_right_iconx2_g2

0x871e,	// (0x0006886a) list_medium_line_t3_right_iconx2_g3

0x0002,

0xfce6,	// (0x0006fe32) list_medium_line_t3_right_iconx2_g

0x8728,	// (0x00068874) list_medium_line_t3_right_iconx2_t1

0x8738,	// (0x00068884) list_medium_line_t3_right_iconx2_t2

0x0001,

0xfced,	// (0x0006fe39) list_medium_line_t3_right_iconx2_t

0xd17c,	// (0x0006d2c8) list_medium_line_x3_t4_g4_g1_ParamLimits

0xd17c,	// (0x0006d2c8) list_medium_line_x3_t4_g4_g1

0xd188,	// (0x0006d2d4) list_medium_line_x3_t4_g4_g2_ParamLimits

0xd188,	// (0x0006d2d4) list_medium_line_x3_t4_g4_g2

0xd1fe,	// (0x0006d34a) list_medium_line_x3_t4_g4_g3_ParamLimits

0xd1fe,	// (0x0006d34a) list_medium_line_x3_t4_g4_g3

0x8746,	// (0x00068892) list_medium_line_x3_t4_g4_g4_ParamLimits

0x8746,	// (0x00068892) list_medium_line_x3_t4_g4_g4

0x0003,

0xfcf2,	// (0x0006fe3e) list_medium_line_x3_t4_g4_g_ParamLimits

0xfcf2,	// (0x0006fe3e) list_medium_line_x3_t4_g4_g

0x8752,	// (0x0006889e) list_medium_line_x3_t4_g4_t1_ParamLimits

0x8752,	// (0x0006889e) list_medium_line_x3_t4_g4_t1

0x8769,	// (0x000688b5) list_medium_line_x3_t4_g4_t2_ParamLimits

0x8769,	// (0x000688b5) list_medium_line_x3_t4_g4_t2

0xd7c1,	// (0x0006d90d) list_medium_line_x3_t4_g4_t3_ParamLimits

0xd7c1,	// (0x0006d90d) list_medium_line_x3_t4_g4_t3

0x8784,	// (0x000688d0) list_medium_line_x3_t4_g4_t4_ParamLimits

0x8784,	// (0x000688d0) list_medium_line_x3_t4_g4_t4

0x0003,

0xfcfb,	// (0x0006fe47) list_medium_line_x3_t4_g4_t_ParamLimits

0xfcfb,	// (0x0006fe47) list_medium_line_x3_t4_g4_t

0x87a1,	// (0x000688ed) list_single_dyc_row_text_pane_t1_ParamLimits

0x87a1,	// (0x000688ed) list_single_dyc_row_text_pane_t1

0x87ea,	// (0x00068936) list_single_dyc_row_text_pane_t2_ParamLimits

0x87ea,	// (0x00068936) list_single_dyc_row_text_pane_t2

0x8844,	// (0x00068990) list_single_dyc_row_text_pane_t3_ParamLimits

0x8844,	// (0x00068990) list_single_dyc_row_text_pane_t3

0x0002,

0xfd04,	// (0x0006fe50) list_single_dyc_row_text_pane_t_ParamLimits

0xfd04,	// (0x0006fe50) list_single_dyc_row_text_pane_t

0x8856,	// (0x000689a2) list_single_dyc_row_pane_g1_ParamLimits

0x8856,	// (0x000689a2) list_single_dyc_row_pane_g1

0x8862,	// (0x000689ae) list_single_dyc_row_pane_g2_ParamLimits

0x8862,	// (0x000689ae) list_single_dyc_row_pane_g2

0x886e,	// (0x000689ba) list_single_dyc_row_pane_g3_ParamLimits

0x886e,	// (0x000689ba) list_single_dyc_row_pane_g3

0x887a,	// (0x000689c6) list_single_dyc_row_pane_g4_ParamLimits

0x887a,	// (0x000689c6) list_single_dyc_row_pane_g4

0x0003,

0xfd0b,	// (0x0006fe57) list_single_dyc_row_pane_g_ParamLimits

0xfd0b,	// (0x0006fe57) list_single_dyc_row_pane_g

0x8886,	// (0x000689d2) list_single_dyc_row_text_pane_ParamLimits

0x8886,	// (0x000689d2) list_single_dyc_row_text_pane

0xbcf7,	// (0x0006be43) bg_sp_fs_scroll_pane

0xc851,	// (0x0006c99d) thumb_sp_fs_scroll_pane

0x6de1,	// (0x00066f2d) list_medium_line_g1_ParamLimits

0x6de1,	// (0x00066f2d) list_medium_line_g1

0x88a5,	// (0x000689f1) list_medium_line_t1_ParamLimits

0x88a5,	// (0x000689f1) list_medium_line_t1

0xd17c,	// (0x0006d2c8) list_medium_line_x2_g1_ParamLimits

0xd17c,	// (0x0006d2c8) list_medium_line_x2_g1

0xd188,	// (0x0006d2d4) list_medium_line_x2_g2_ParamLimits

0xd188,	// (0x0006d2d4) list_medium_line_x2_g2

0x0001,

0xfd14,	// (0x0006fe60) list_medium_line_x2_g_ParamLimits

0xfd14,	// (0x0006fe60) list_medium_line_x2_g

0x88ba,	// (0x00068a06) list_medium_line_x2_t1_ParamLimits

0x88ba,	// (0x00068a06) list_medium_line_x2_t1

0xd17c,	// (0x0006d2c8) list_medium_line_x3_g1_ParamLimits

0xd17c,	// (0x0006d2c8) list_medium_line_x3_g1

0xd188,	// (0x0006d2d4) list_medium_line_x3_g2_ParamLimits

0xd188,	// (0x0006d2d4) list_medium_line_x3_g2

0x0001,

0xfd14,	// (0x0006fe60) list_medium_line_x3_g_ParamLimits

0xfd14,	// (0x0006fe60) list_medium_line_x3_g

0x88ba,	// (0x00068a06) list_medium_line_x3_t1_ParamLimits

0x88ba,	// (0x00068a06) list_medium_line_x3_t1

0xc85a,	// (0x0006c9a6) thumb_sp_fs_scroll_pane_g1

0xc863,	// (0x0006c9af) thumb_sp_fs_scroll_pane_g2

0xc86c,	// (0x0006c9b8) thumb_sp_fs_scroll_pane_g3

0x0002,

0x075a,	// (0x000608a6) thumb_sp_fs_scroll_pane_g

0xc85a,	// (0x0006c9a6) bg_sp_fs_scroll_pane_g1

0xc863,	// (0x0006c9af) bg_sp_fs_scroll_pane_g2

0xc86c,	// (0x0006c9b8) bg_sp_fs_scroll_pane_g3

0x0002,

0x075a,	// (0x000608a6) bg_sp_fs_scroll_pane_g

0xd17c,	// (0x0006d2c8) list_medium_line_x2_t3_g4_g1_ParamLimits

0xd17c,	// (0x0006d2c8) list_medium_line_x2_t3_g4_g1

0xd1f2,	// (0x0006d33e) list_medium_line_x2_t3_g4_g2_ParamLimits

0xd1f2,	// (0x0006d33e) list_medium_line_x2_t3_g4_g2

0xd188,	// (0x0006d2d4) list_medium_line_x2_t3_g4_g3_ParamLimits

0xd188,	// (0x0006d2d4) list_medium_line_x2_t3_g4_g3

0xd194,	// (0x0006d2e0) list_medium_line_x2_t3_g4_g4_ParamLimits

0xd194,	// (0x0006d2e0) list_medium_line_x2_t3_g4_g4

0x0003,

0xf2d2,	// (0x0006f41e) list_medium_line_x2_t3_g4_g_ParamLimits

0xf2d2,	// (0x0006f41e) list_medium_line_x2_t3_g4_g

0x88d0,	// (0x00068a1c) list_medium_line_x2_t3_g4_t1_ParamLimits

0x88d0,	// (0x00068a1c) list_medium_line_x2_t3_g4_t1

0x88ea,	// (0x00068a36) list_medium_line_x2_t3_g4_t2_ParamLimits

0x88ea,	// (0x00068a36) list_medium_line_x2_t3_g4_t2

0xd1b5,	// (0x0006d301) list_medium_line_x2_t3_g4_t3_ParamLimits

0xd1b5,	// (0x0006d301) list_medium_line_x2_t3_g4_t3

0x0002,

0xfd19,	// (0x0006fe65) list_medium_line_x2_t3_g4_t_ParamLimits

0xfd19,	// (0x0006fe65) list_medium_line_x2_t3_g4_t

0x6de1,	// (0x00066f2d) list_medium_line_g2_g1_ParamLimits

0x6de1,	// (0x00066f2d) list_medium_line_g2_g1

0x6ded,	// (0x00066f39) list_medium_line_g2_g2_ParamLimits

0x6ded,	// (0x00066f39) list_medium_line_g2_g2

0x0001,

0xf9ec,	// (0x0006fb38) list_medium_line_g2_g_ParamLimits

0xf9ec,	// (0x0006fb38) list_medium_line_g2_g

0x8903,	// (0x00068a4f) list_medium_line_g2_t1_ParamLimits

0x8903,	// (0x00068a4f) list_medium_line_g2_t1

0x6de1,	// (0x00066f2d) list_medium_line_t3_g2_g1_ParamLimits

0x6de1,	// (0x00066f2d) list_medium_line_t3_g2_g1

0x6ded,	// (0x00066f39) list_medium_line_t3_g2_g2_ParamLimits

0x6ded,	// (0x00066f39) list_medium_line_t3_g2_g2

0x0001,

0xf9ec,	// (0x0006fb38) list_medium_line_t3_g2_g_ParamLimits

0xf9ec,	// (0x0006fb38) list_medium_line_t3_g2_g

0x8918,	// (0x00068a64) list_medium_line_t3_g2_t1_ParamLimits

0x8918,	// (0x00068a64) list_medium_line_t3_g2_t1

0x892f,	// (0x00068a7b) list_medium_line_t3_g2_t2_ParamLimits

0x892f,	// (0x00068a7b) list_medium_line_t3_g2_t2

0x8944,	// (0x00068a90) list_medium_line_t3_g2_t3_ParamLimits

0x8944,	// (0x00068a90) list_medium_line_t3_g2_t3

0x0002,

0xfd20,	// (0x0006fe6c) list_medium_line_t3_g2_t_ParamLimits

0xfd20,	// (0x0006fe6c) list_medium_line_t3_g2_t

0x8521,	// (0x0006866d) list_medium_line_right_icon_g1

0x895d,	// (0x00068aa9) list_medium_line_right_icon_t1

0x6de1,	// (0x00066f2d) list_medium_line_t2_g1_ParamLimits

0x6de1,	// (0x00066f2d) list_medium_line_t2_g1

0x896b,	// (0x00068ab7) list_medium_line_t2_t1_ParamLimits

0x896b,	// (0x00068ab7) list_medium_line_t2_t1

0x8982,	// (0x00068ace) list_medium_line_t2_t2_ParamLimits

0x8982,	// (0x00068ace) list_medium_line_t2_t2

0x0001,

0xfd27,	// (0x0006fe73) list_medium_line_t2_t_ParamLimits

0xfd27,	// (0x0006fe73) list_medium_line_t2_t

0x6de1,	// (0x00066f2d) list_medium_line_t3_g1_ParamLimits

0x6de1,	// (0x00066f2d) list_medium_line_t3_g1

0x8996,	// (0x00068ae2) list_medium_line_t3_t1_ParamLimits

0x8996,	// (0x00068ae2) list_medium_line_t3_t1

0x89ad,	// (0x00068af9) list_medium_line_t3_t2_ParamLimits

0x89ad,	// (0x00068af9) list_medium_line_t3_t2

0x89c2,	// (0x00068b0e) list_medium_line_t3_t3_ParamLimits

0x89c2,	// (0x00068b0e) list_medium_line_t3_t3

0x0002,

0xfd2c,	// (0x0006fe78) list_medium_line_t3_t_ParamLimits

0xfd2c,	// (0x0006fe78) list_medium_line_t3_t

0x6de1,	// (0x00066f2d) list_medium_line_g3_g1_ParamLimits

0x6de1,	// (0x00066f2d) list_medium_line_g3_g1

0x89d4,	// (0x00068b20) list_medium_line_g3_g2_ParamLimits

0x89d4,	// (0x00068b20) list_medium_line_g3_g2

0x6ded,	// (0x00066f39) list_medium_line_g3_g3_ParamLimits

0x6ded,	// (0x00066f39) list_medium_line_g3_g3

0x0002,

0xfd33,	// (0x0006fe7f) list_medium_line_g3_g_ParamLimits

0xfd33,	// (0x0006fe7f) list_medium_line_g3_g

0x89e0,	// (0x00068b2c) list_medium_line_g3_t1_ParamLimits

0x89e0,	// (0x00068b2c) list_medium_line_g3_t1

0x6de1,	// (0x00066f2d) list_medium_line_t2_g3_g1_ParamLimits

0x6de1,	// (0x00066f2d) list_medium_line_t2_g3_g1

0x89d4,	// (0x00068b20) list_medium_line_t2_g3_g2_ParamLimits

0x89d4,	// (0x00068b20) list_medium_line_t2_g3_g2

0x6ded,	// (0x00066f39) list_medium_line_t2_g3_g3_ParamLimits

0x6ded,	// (0x00066f39) list_medium_line_t2_g3_g3

0x0002,

0xfd33,	// (0x0006fe7f) list_medium_line_t2_g3_g_ParamLimits

0xfd33,	// (0x0006fe7f) list_medium_line_t2_g3_g

0x89f5,	// (0x00068b41) list_medium_line_t2_g3_t1_ParamLimits

0x89f5,	// (0x00068b41) list_medium_line_t2_g3_t1

0x8a0f,	// (0x00068b5b) list_medium_line_t2_g3_t2_ParamLimits

0x8a0f,	// (0x00068b5b) list_medium_line_t2_g3_t2

0x0001,

0xfd3a,	// (0x0006fe86) list_medium_line_t2_g3_t_ParamLimits

0xfd3a,	// (0x0006fe86) list_medium_line_t2_g3_t

0x6de1,	// (0x00066f2d) list_medium_line_t3_g3_g1_ParamLimits

0x6de1,	// (0x00066f2d) list_medium_line_t3_g3_g1

0x89d4,	// (0x00068b20) list_medium_line_t3_g3_g2_ParamLimits

0x89d4,	// (0x00068b20) list_medium_line_t3_g3_g2

0x6ded,	// (0x00066f39) list_medium_line_t3_g3_g3_ParamLimits

0x6ded,	// (0x00066f39) list_medium_line_t3_g3_g3

0x0002,

0xfd33,	// (0x0006fe7f) list_medium_line_t3_g3_g_ParamLimits

0xfd33,	// (0x0006fe7f) list_medium_line_t3_g3_g

0x8a2a,	// (0x00068b76) list_medium_line_t3_g3_t1_ParamLimits

0x8a2a,	// (0x00068b76) list_medium_line_t3_g3_t1

0x8a3e,	// (0x00068b8a) list_medium_line_t3_g3_t2_ParamLimits

0x8a3e,	// (0x00068b8a) list_medium_line_t3_g3_t2

0x8a50,	// (0x00068b9c) list_medium_line_t3_g3_t3_ParamLimits

0x8a50,	// (0x00068b9c) list_medium_line_t3_g3_t3

0x0002,

0xfd3f,	// (0x0006fe8b) list_medium_line_t3_g3_t_ParamLimits

0xfd3f,	// (0x0006fe8b) list_medium_line_t3_g3_t

0x8716,	// (0x00068862) list_medium_line_right_iconx2_g1

0x8521,	// (0x0006866d) list_medium_line_right_iconx2_g2

0x0001,

0xfd46,	// (0x0006fe92) list_medium_line_right_iconx2_g

0x8a64,	// (0x00068bb0) list_medium_line_right_iconx2_t1

0x8716,	// (0x00068862) list_medium_line_t2_right_iconx2_g1

0x8521,	// (0x0006866d) list_medium_line_t2_right_iconx2_g2

0x0001,

0xfd46,	// (0x0006fe92) list_medium_line_t2_right_iconx2_g

0x8a72,	// (0x00068bbe) list_medium_line_t2_right_iconx2_t1

0x8a82,	// (0x00068bce) list_medium_line_t2_right_iconx2_t2

0x0001,

0xfd4b,	// (0x0006fe97) list_medium_line_t2_right_iconx2_t

0x8a94,	// (0x00068be0) list_medium_line_x4_t4_t1

0x8aa2,	// (0x00068bee) list_medium_line_x4_t4_t2

0x8ab2,	// (0x00068bfe) list_medium_line_x4_t4_t3

0x8ac2,	// (0x00068c0e) list_medium_line_x4_t4_t4

0x0003,

0xfd50,	// (0x0006fe9c) list_medium_line_x4_t4_t

0x8b15,	// (0x00068c61) tport_appsw_pane_ParamLimits

0x8b15,	// (0x00068c61) tport_appsw_pane

0x8b26,	// (0x00068c72) tport_contact_pane_ParamLimits

0x8b26,	// (0x00068c72) tport_contact_pane

0x8b3f,	// (0x00068c8b) tport_listscroll_pane_ParamLimits

0x8b3f,	// (0x00068c8b) tport_listscroll_pane

0x8b5a,	// (0x00068ca6) cell_tport_appsw_pane_ParamLimits

0x8b5a,	// (0x00068ca6) cell_tport_appsw_pane

0xac63,	// (0x0006adaf) tport_appsw_pane_g1_ParamLimits

0xac63,	// (0x0006adaf) tport_appsw_pane_g1

0xc875,	// (0x0006c9c1) tport_contact_pane_g1

0xc87e,	// (0x0006c9ca) tport_contact_pane_t1

0xc88c,	// (0x0006c9d8) tport_contact_pane_t2

0x0001,

0x07a1,	// (0x000608ed) tport_contact_pane_t

0xc89a,	// (0x0006c9e6) list_tport_pane

0xc8a3,	// (0x0006c9ef) scroll_pane_cp_030

0xc8b4,	// (0x0006ca00) cell_tport_appsw_pane_g1

0xc8c4,	// (0x0006ca10) cell_tport_appsw_pane_t1

0xbcf7,	// (0x0006be43) grid_highlight_pane_cp019

0x8b9a,	// (0x00068ce6) list_tport_double_graphic_pane_ParamLimits

0x8b9a,	// (0x00068ce6) list_tport_double_graphic_pane

0xc69f,	// (0x0006c7eb) list_highlight_pane_cp023_ParamLimits

0xc69f,	// (0x0006c7eb) list_highlight_pane_cp023

0x8ba7,	// (0x00068cf3) list_tport_double_graphic_pane_g1_ParamLimits

0x8ba7,	// (0x00068cf3) list_tport_double_graphic_pane_g1

0x8bb4,	// (0x00068d00) list_tport_double_graphic_pane_t1_ParamLimits

0x8bb4,	// (0x00068d00) list_tport_double_graphic_pane_t1

0x8bc9,	// (0x00068d15) list_tport_double_graphic_pane_t2_ParamLimits

0x8bc9,	// (0x00068d15) list_tport_double_graphic_pane_t2

0x0001,

0xfd59,	// (0x0006fea5) list_tport_double_graphic_pane_t_ParamLimits

0xfd59,	// (0x0006fea5) list_tport_double_graphic_pane_t

0xbcf7,	// (0x0006be43) main_cale_note_pane

0x6536,	// (0x00066682) cell_vitu2_function_top_wide_pane_cp01_ParamLimits

0x6536,	// (0x00066682) cell_vitu2_function_top_wide_pane_cp01

0x806e,	// (0x000681ba) wait_bar_pane_cp05_ParamLimits

0xbcf7,	// (0x0006be43) listscroll_cmail_pane

0xc8da,	// (0x0006ca26) list_cmail_pane

0x8be5,	// (0x00068d31) list_cmail_body_pane

0x8bfa,	// (0x00068d46) list_single_cmail_header_caption_pane

0x8c13,	// (0x00068d5f) list_single_cmail_header_detail_pane_ParamLimits

0x8c13,	// (0x00068d5f) list_single_cmail_header_detail_pane

0x8c3c,	// (0x00068d88) list_single_cmail_header_caption_pane_t1

0x8c4c,	// (0x00068d98) list_single_cmail_header_detail_pane_g1_ParamLimits

0x8c4c,	// (0x00068d98) list_single_cmail_header_detail_pane_g1

0x8c64,	// (0x00068db0) list_single_cmail_header_detail_pane_g2_ParamLimits

0x8c64,	// (0x00068db0) list_single_cmail_header_detail_pane_g2

0x0002,

0xfd5e,	// (0x0006feaa) list_single_cmail_header_detail_pane_g_ParamLimits

0xfd5e,	// (0x0006feaa) list_single_cmail_header_detail_pane_g

0x8c70,	// (0x00068dbc) list_single_cmail_header_detail_pane_t1_ParamLimits

0x8c70,	// (0x00068dbc) list_single_cmail_header_detail_pane_t1

0x8cc8,	// (0x00068e14) list_single_cmail_header_editor_pane_bg_ParamLimits

0x8cc8,	// (0x00068e14) list_single_cmail_header_editor_pane_bg

0xc907,	// (0x0006ca53) list_cmail_body_pane_g1

0xc910,	// (0x0006ca5c) list_cmail_body_pane_t1

0xac83,	// (0x0006adcf) list_single_cmail_header_editor_pane_bg_g1

0xd413,	// (0x0006d55f) list_single_cmail_header_editor_pane_bg_g1_copy1

0xac93,	// (0x0006addf) list_single_cmail_header_editor_pane_bg_g1_copy2

0xac8b,	// (0x0006add7) list_single_cmail_header_editor_pane_bg_g1_copy3

0xaefe,	// (0x0006b04a) list_single_cmail_header_editor_pane_bg_g1_copy4

0xacb3,	// (0x0006adff) list_single_cmail_header_editor_pane_bg_g1_copy4_copy1

0xaca3,	// (0x0006adef) list_single_cmail_header_editor_pane_bg_g1_copy4_copy2

0xacab,	// (0x0006adf7) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3

0xd3f3,	// (0x0006d53f) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3_copy1

0x8cda,	// (0x00068e26) calenote_gesture_pane_ParamLimits

0x8cda,	// (0x00068e26) calenote_gesture_pane

0x8cfa,	// (0x00068e46) calenote_window_pane_ParamLimits

0x8cfa,	// (0x00068e46) calenote_window_pane

0xc91e,	// (0x0006ca6a) popup_note_window_cp01

0x8d16,	// (0x00068e62) calenote_swipe_1_pane_ParamLimits

0x8d16,	// (0x00068e62) calenote_swipe_1_pane

0x84c9,	// (0x00068615) calenote_swipe_2_pane_ParamLimits

0x84c9,	// (0x00068615) calenote_swipe_2_pane

0xc6e0,	// (0x0006c82c) calenote_swipe_1_pane_g1_ParamLimits

0xc6e0,	// (0x0006c82c) calenote_swipe_1_pane_g1

0xc6ed,	// (0x0006c839) calenote_swipe_1_pane_g2_ParamLimits

0xc6ed,	// (0x0006c839) calenote_swipe_1_pane_g2

0x0001,

0x06dc,	// (0x00060828) calenote_swipe_1_pane_g_ParamLimits

0x06dc,	// (0x00060828) calenote_swipe_1_pane_g

0xc930,	// (0x0006ca7c) calenote_swipe_1_pane_t1_ParamLimits

0xc930,	// (0x0006ca7c) calenote_swipe_1_pane_t1

0xc6e0,	// (0x0006c82c) calenote_swipe_2_pane_g1_ParamLimits

0xc6e0,	// (0x0006c82c) calenote_swipe_2_pane_g1

0xc94f,	// (0x0006ca9b) calenote_swipe_2_pane_g2_ParamLimits

0xc94f,	// (0x0006ca9b) calenote_swipe_2_pane_g2

0x0001,

0x07be,	// (0x0006090a) calenote_swipe_2_pane_g_ParamLimits

0x07be,	// (0x0006090a) calenote_swipe_2_pane_g

0xc95b,	// (0x0006caa7) calenote_swipe_2_pane_t1_ParamLimits

0xc95b,	// (0x0006caa7) calenote_swipe_2_pane_t1

0xbcf7,	// (0x0006be43) main_mup_navstr_pane

0x51f9,	// (0x00065345) main_mup3_pane_t7_ParamLimits

0x51f9,	// (0x00065345) main_mup3_pane_t7

0xa7ec,	// (0x0006a938) main_mp4_pane_g6_ParamLimits

0xa7ec,	// (0x0006a938) main_mp4_pane_g6

0xaa1e,	// (0x0006ab6a) main_image3_pane_t4_ParamLimits

0xaa1e,	// (0x0006ab6a) main_image3_pane_t4

0x8d2b,	// (0x00068e77) popup_navstr_preview_pane_ParamLimits

0x8d2b,	// (0x00068e77) popup_navstr_preview_pane

0x8d3f,	// (0x00068e8b) scroll_navstr_pane_ParamLimits

0x8d3f,	// (0x00068e8b) scroll_navstr_pane

0xbcf7,	// (0x0006be43) bg_popup_preview_window_pane_cp04

0xc982,	// (0x0006cace) popup_navstr_preview_pane_t1

0x8d53,	// (0x00068e9f) scroll_navstr_pane_g1_ParamLimits

0x8d53,	// (0x00068e9f) scroll_navstr_pane_g1

0x8d67,	// (0x00068eb3) scroll_navstr_pane_t1_ParamLimits

0x8d67,	// (0x00068eb3) scroll_navstr_pane_t1

0xc927,	// (0x0006ca73) bg_button_pane_cp014

0xc927,	// (0x0006ca73) bg_button_pane_cp030

0x8367,	// (0x000684b3) list_double_fisheye_pane_g4_ParamLimits

0x8367,	// (0x000684b3) list_double_fisheye_pane_g4

0x8373,	// (0x000684bf) list_double_fisheye_pane_g5_ParamLimits

0x8373,	// (0x000684bf) list_double_fisheye_pane_g5

0xc8e2,	// (0x0006ca2e) sp_fs_scroll_pane_cp03

0xc7d3,	// (0x0006c91f) main_sp_fs_ctrlbar_pane_g1_ParamLimits

0xc7df,	// (0x0006c92b) main_sp_fs_ctrlbar_pane_g2_ParamLimits

0x06f9,	// (0x00060845) main_sp_fs_ctrlbar_pane_g_ParamLimits

0xc7eb,	// (0x0006c937) main_sp_fs_ctrlbar_pane_t1_ParamLimits

0x8bdb,	// (0x00068d27) sp_fs_scroll_pane_cp02

0xc59a,	// (0x0006c6e6) popup_sp_fs_calendar_preview_list_single_pane_ParamLimits

0xc59a,	// (0x0006c6e6) popup_sp_fs_calendar_preview_list_single_pane

0xbcf7,	// (0x0006be43) main_cam6_pano_pane

0x9ce8,	// (0x00069e34) main_mup3_pane_ParamLimits

0xbcf7,	// (0x0006be43) main_phacti_pane

0x7f41,	// (0x0006808d) bg_button_pane_cp11

0x7f5b,	// (0x000680a7) main_mobtv_info_pane_g2_ParamLimits

0x7f5b,	// (0x000680a7) main_mobtv_info_pane_g2

0x0001,

0xfc2c,	// (0x0006fd78) main_mobtv_info_pane_g_ParamLimits

0xfc2c,	// (0x0006fd78) main_mobtv_info_pane_g

0x8138,	// (0x00068284) sc_clock_pane_t5_ParamLimits

0x8138,	// (0x00068284) sc_clock_pane_t5

0x81c3,	// (0x0006830f) main_radioblah_pane_g1_ParamLimits

0xbc64,	// (0x0006bdb0) main_radioblah_pane_t3_ParamLimits

0xbc64,	// (0x0006bdb0) main_radioblah_pane_t3

0xbc7c,	// (0x0006bdc8) main_radioblah_pane_t4_ParamLimits

0xbc7c,	// (0x0006bdc8) main_radioblah_pane_t4

0x81eb,	// (0x00068337) main_radioblah_text_pane_ParamLimits

0x81eb,	// (0x00068337) main_radioblah_text_pane

0x81fd,	// (0x00068349) main_radioblah_info_pane_g1_ParamLimits

0x8298,	// (0x000683e4) main_radioblah_info_pane_t4_ParamLimits

0x8298,	// (0x000683e4) main_radioblah_info_pane_t4

0xc69f,	// (0x0006c7eb) main_sp_fs_calendar_pane

0x8d7d,	// (0x00068ec9) main_phacti_pane_g1

0x8d85,	// (0x00068ed1) phacti_note_pane_ParamLimits

0x8d85,	// (0x00068ed1) phacti_note_pane

0xc999,	// (0x0006cae5) phacti_term_pane_ParamLimits

0xc999,	// (0x0006cae5) phacti_term_pane

0xc9ae,	// (0x0006cafa) phacti_note_pane_t1_ParamLimits

0xc9ae,	// (0x0006cafa) phacti_note_pane_t1

0x8d99,	// (0x00068ee5) phacti_term_pane_g1

0x8da1,	// (0x00068eed) phacti_term_pane_t1_ParamLimits

0x8da1,	// (0x00068eed) phacti_term_pane_t1

0xc9c5,	// (0x0006cb11) popup_sp_fs_calendar_preview_list_single_pane_g1

0xc9cd,	// (0x0006cb19) popup_sp_fs_calendar_preview_list_single_pane_g2

0x0001,

0x07c8,	// (0x00060914) popup_sp_fs_calendar_preview_list_single_pane_g

0xc9d5,	// (0x0006cb21) popup_sp_fs_calendar_preview_list_single_pane_t1_ParamLimits

0xc9d5,	// (0x0006cb21) popup_sp_fs_calendar_preview_list_single_pane_t1

0xc9eb,	// (0x0006cb37) aid_popup_sp_fs_bg_corner_pane

0x49d4,	// (0x00064b20) popup_sp_fs_calendar_preview_bg_pane_g1

0xbcf7,	// (0x0006be43) popup_sp_fs_calendar_preview_bg_pane

0xc9f3,	// (0x0006cb3f) popup_sp_fs_calendar_preview_list_pane

0xc69f,	// (0x0006c7eb) bg_main_sp_fs_cale_pane_ParamLimits

0xc69f,	// (0x0006c7eb) bg_main_sp_fs_cale_pane

0x8e18,	// (0x00068f64) listscroll_cale_mrui_pane_ParamLimits

0x8e18,	// (0x00068f64) listscroll_cale_mrui_pane

0x8e2c,	// (0x00068f78) listscroll_sp_fs_schedule_track_pane

0x8e35,	// (0x00068f81) main_sp_fs_ctrlbar_pane_cp01_ParamLimits

0x8e35,	// (0x00068f81) main_sp_fs_ctrlbar_pane_cp01

0xc9fb,	// (0x0006cb47) main_sp_fs_ribbon_pane

0xca03,	// (0x0006cb4f) popup_sp_fs_cale_preview_window

0x8e46,	// (0x00068f92) list_single_sp_fs_schedule_track_pane_ParamLimits

0x8e46,	// (0x00068f92) list_single_sp_fs_schedule_track_pane

0xc69f,	// (0x0006c7eb) bg_sp_fs_highlight_list_pane_cp03_ParamLimits

0xc69f,	// (0x0006c7eb) bg_sp_fs_highlight_list_pane_cp03

0x8e5b,	// (0x00068fa7) list_single_sp_fs_schedule_track_pane_g1_ParamLimits

0x8e5b,	// (0x00068fa7) list_single_sp_fs_schedule_track_pane_g1

0x8e67,	// (0x00068fb3) list_single_sp_fs_schedule_track_pane_g2_ParamLimits

0x8e67,	// (0x00068fb3) list_single_sp_fs_schedule_track_pane_g2

0x0001,

0xfd6f,	// (0x0006febb) list_single_sp_fs_schedule_track_pane_g_ParamLimits

0xfd6f,	// (0x0006febb) list_single_sp_fs_schedule_track_pane_g

0x8e73,	// (0x00068fbf) list_single_sp_fs_schedule_track_pane_t1_ParamLimits

0x8e73,	// (0x00068fbf) list_single_sp_fs_schedule_track_pane_t1

0x8e8d,	// (0x00068fd9) sp_fs_schedule_track_pane_ParamLimits

0x8e8d,	// (0x00068fd9) sp_fs_schedule_track_pane

0xca15,	// (0x0006cb61) sp_fs_schedule_track_pane_g1

0xca1d,	// (0x0006cb69) sp_fs_schedule_track_pane_g2

0xca25,	// (0x0006cb71) sp_fs_schedule_track_pane_g3

0xca2d,	// (0x0006cb79) sp_fs_schedule_track_pane_g4

0xca35,	// (0x0006cb81) sp_fs_schedule_track_pane_g5

0x0004,

0x07d2,	// (0x0006091e) sp_fs_schedule_track_pane_g

0xac83,	// (0x0006adcf) bg_sp_fs_schedule_viewer_highlight_g1

0xd413,	// (0x0006d55f) bg_sp_fs_schedule_viewer_highlight_g2

0xac8b,	// (0x0006add7) bg_sp_fs_schedule_viewer_highlight_g3

0xac93,	// (0x0006addf) bg_sp_fs_schedule_viewer_highlight_g4

0xaefe,	// (0x0006b04a) bg_sp_fs_schedule_viewer_highlight_g5

0xaca3,	// (0x0006adef) bg_sp_fs_schedule_viewer_highlight_g6

0xacab,	// (0x0006adf7) bg_sp_fs_schedule_viewer_highlight_g7

0xacb3,	// (0x0006adff) bg_sp_fs_schedule_viewer_highlight_g8

0xd3f3,	// (0x0006d53f) bg_sp_fs_schedule_viewer_highlight_g9

0x0008,

0xfd74,	// (0x0006fec0) bg_sp_fs_schedule_viewer_highlight_g

0xbcf7,	// (0x0006be43) bg_main_sp_fs_ribbon_pane

0x8e9e,	// (0x00068fea) main_sp_fs_ribbon_pane_g1

0xca3d,	// (0x0006cb89) main_sp_fs_ribbon_pane_t1

0x8ea7,	// (0x00068ff3) main_sp_fs_ribbon_pane_t2

0xca4c,	// (0x0006cb98) main_sp_fs_ribbon_pane_t3

0x0002,

0xfd87,	// (0x0006fed3) main_sp_fs_ribbon_pane_t

0xca5b,	// (0x0006cba7) main_sp_fs_ribbon_scheduler_pane

0xca63,	// (0x0006cbaf) bg_main_sp_fs_ribbon_pane_g1

0xca6c,	// (0x0006cbb8) bg_main_sp_fs_ribbon_pane_g2

0xca75,	// (0x0006cbc1) bg_main_sp_fs_ribbon_pane_g3

0x0002,

0x07f7,	// (0x00060943) bg_main_sp_fs_ribbon_pane_g

0xca7d,	// (0x0006cbc9) main_sp_fs_ribbon_scheduler_pane_g1

0xca86,	// (0x0006cbd2) main_sp_fs_ribbon_scheduler_pane_g2

0xca8f,	// (0x0006cbdb) main_sp_fs_ribbon_scheduler_pane_g3

0x0002,

0x07fe,	// (0x0006094a) main_sp_fs_ribbon_scheduler_pane_g

0xca98,	// (0x0006cbe4) list_cale_mrui_pane

0x8eb6,	// (0x00069002) sp_fs_scroll_pane_cp07_ParamLimits

0x8eb6,	// (0x00069002) sp_fs_scroll_pane_cp07

0x8eca,	// (0x00069016) bg_sp_fs_schedule_viewer_highlight_ParamLimits

0x8eca,	// (0x00069016) bg_sp_fs_schedule_viewer_highlight

0xcaa1,	// (0x0006cbed) list_single_sp_fs_schedule_track_pane_cp01

0xcaa9,	// (0x0006cbf5) list_sp_fs_schedule_track_pane

0xcab1,	// (0x0006cbfd) sp_fs_scroll_pane_cp06_ParamLimits

0xcab1,	// (0x0006cbfd) sp_fs_scroll_pane_cp06

0x49d4,	// (0x00064b20) bgmain_sp_fs_calendar_pane_g1

0x8eda,	// (0x00069026) list_single_cale_mrui_pane_ParamLimits

0x8eda,	// (0x00069026) list_single_cale_mrui_pane

0x8efc,	// (0x00069048) list_single_cale_mrui_row_pane_ParamLimits

0x8efc,	// (0x00069048) list_single_cale_mrui_row_pane

0x8f09,	// (0x00069055) list_single_cale_mrui_row_pane_g1_ParamLimits

0x8f09,	// (0x00069055) list_single_cale_mrui_row_pane_g1

0x8f41,	// (0x0006908d) list_single_cale_mrui_row_pane_t1_ParamLimits

0x8f41,	// (0x0006908d) list_single_cale_mrui_row_pane_t1

0x8f53,	// (0x0006909f) list_single_cale_mrui_row_pane_t2_ParamLimits

0x8f53,	// (0x0006909f) list_single_cale_mrui_row_pane_t2

0x8fbb,	// (0x00069107) list_single_cale_mrui_row_pane_t3_ParamLimits

0x8fbb,	// (0x00069107) list_single_cale_mrui_row_pane_t3

0x8fea,	// (0x00069136) list_single_cale_mrui_row_pane_t4_ParamLimits

0x8fea,	// (0x00069136) list_single_cale_mrui_row_pane_t4

0x0003,

0xfd95,	// (0x0006fee1) list_single_cale_mrui_row_pane_t_ParamLimits

0xfd95,	// (0x0006fee1) list_single_cale_mrui_row_pane_t

0x9019,	// (0x00069165) list_single_cmail_header_editor_pane_bg_cp01_ParamLimits

0x9019,	// (0x00069165) list_single_cmail_header_editor_pane_bg_cp01

0x903f,	// (0x0006918b) list_single_cmail_header_editor_pane_bg_cp02_ParamLimits

0x903f,	// (0x0006918b) list_single_cmail_header_editor_pane_bg_cp02

0x905f,	// (0x000691ab) main_radioblah_text_pane_t1_ParamLimits

0x905f,	// (0x000691ab) main_radioblah_text_pane_t1

0xcad0,	// (0x0006cc1c) cam6_indi_pane_cp01

0xcad8,	// (0x0006cc24) cam6_mode_pane_cp01

0xcae0,	// (0x0006cc2c) cam6_pano_pane

0xcae9,	// (0x0006cc35) cam6_zoom_pane_cp01

0xcaf1,	// (0x0006cc3d) cam6_pano_image_pane

0xcafc,	// (0x0006cc48) cam6_pano_pane_g1

0xb9c3,	// (0x0006bb0f) cam6_pano_pane_g2

0xcb05,	// (0x0006cc51) cam6_pano_pane_g3

0xcb0e,	// (0x0006cc5a) cam6_pano_pane_g4

0xa44f,	// (0x0006a59b) cam6_pano_pane_g5

0xcb17,	// (0x0006cc63) cam6_pano_pane_g6

0xcb21,	// (0x0006cc6d) cam6_pano_pane_g7

0xcb29,	// (0x0006cc75) cam6_pano_pane_g8

0xcb32,	// (0x0006cc7e) cam6_pano_pane_g9

0x0008,

0xfd9e,	// (0x0006feea) cam6_pano_pane_g

0xbcf7,	// (0x0006be43) main_browser_tag_pane

0xc97a,	// (0x0006cac6) grid_navstr_albumart_pane

0xcb3d,	// (0x0006cc89) cell_navstr_albumart_pane_ParamLimits

0xcb3d,	// (0x0006cc89) cell_navstr_albumart_pane

0xdd4e,	// (0x0006de9a) cell_navstr_albumart_pane_g1

0xee3f,	// (0x0006ef8b) cell_navstr_albumart_pane_g2

0xee4f,	// (0x0006ef9b) cell_navstr_albumart_pane_g3

0xee47,	// (0x0006ef93) cell_navstr_albumart_pane_g4

0x0003,

0x0828,	// (0x00060974) cell_navstr_albumart_pane_g

0x907a,	// (0x000691c6) bt_list_pane_ParamLimits

0x907a,	// (0x000691c6) bt_list_pane

0x908f,	// (0x000691db) bt_list_pane_t1

0x909e,	// (0x000691ea) bt_list_pane_t2

0x0001,

0xfdb1,	// (0x0006fefd) bt_list_pane_t

0xbcf7,	// (0x0006be43) main_cale_prevew_pane

0x90ad,	// (0x000691f9) popup_cale_preview_window_ParamLimits

0x90ad,	// (0x000691f9) popup_cale_preview_window

0xc69f,	// (0x0006c7eb) bg_popup_preview_window_pane_cp05_ParamLimits

0xc69f,	// (0x0006c7eb) bg_popup_preview_window_pane_cp05

0xcb5f,	// (0x0006ccab) list_cale_preview_pane_ParamLimits

0xcb5f,	// (0x0006ccab) list_cale_preview_pane

0x90c4,	// (0x00069210) list_double_cale_preview_pane_ParamLimits

0x90c4,	// (0x00069210) list_double_cale_preview_pane

0x90d6,	// (0x00069222) list_single_cale_preview_pane_ParamLimits

0x90d6,	// (0x00069222) list_single_cale_preview_pane

0x90ea,	// (0x00069236) list_single_cale_preview_pane_g1

0x90f2,	// (0x0006923e) list_single_cale_preview_pane_t1_ParamLimits

0x90f2,	// (0x0006923e) list_single_cale_preview_pane_t1

0x9107,	// (0x00069253) list_double_cale_preview_pane_g1

0x910f,	// (0x0006925b) list_double_cale_preview_pane_t1_ParamLimits

0x910f,	// (0x0006925b) list_double_cale_preview_pane_t1

0x9124,	// (0x00069270) list_double_cale_preview_pane_t2_ParamLimits

0x9124,	// (0x00069270) list_double_cale_preview_pane_t2

0x0001,

0xfdb6,	// (0x0006ff02) list_double_cale_preview_pane_t_ParamLimits

0xfdb6,	// (0x0006ff02) list_double_cale_preview_pane_t

0xbcf7,	// (0x0006be43) main_ezdial_pane

0xc69f,	// (0x0006c7eb) main_sp_fs_email_pane_ParamLimits

0x854b,	// (0x00068697) cmail_ddmenu_btn01_pane_ParamLimits

0x854b,	// (0x00068697) cmail_ddmenu_btn01_pane

0x855e,	// (0x000686aa) cmail_ddmenu_btn02_pane_ParamLimits

0x855e,	// (0x000686aa) cmail_ddmenu_btn02_pane

0x8581,	// (0x000686cd) cmail_ddmenu_btn03_pane_ParamLimits

0x8581,	// (0x000686cd) cmail_ddmenu_btn03_pane

0x85aa,	// (0x000686f6) main_sp_fs_ctrlbar_pane_ParamLimits

0x85ce,	// (0x0006871a) main_sp_fs_listscroll_pane_te_cp01_ParamLimits

0x8be5,	// (0x00068d31) list_cmail_body_pane_ParamLimits

0xc8f1,	// (0x0006ca3d) bg_button_pane_cp12

0xc8fa,	// (0x0006ca46) list_single_cmail_header_detail_pane_g3_ParamLimits

0xc8fa,	// (0x0006ca46) list_single_cmail_header_detail_pane_g3

0x8ca2,	// (0x00068dee) list_single_cmail_header_detail_pane_t2_ParamLimits

0x8ca2,	// (0x00068dee) list_single_cmail_header_detail_pane_t2

0x0001,

0xfd65,	// (0x0006feb1) list_single_cmail_header_detail_pane_t_ParamLimits

0xfd65,	// (0x0006feb1) list_single_cmail_header_detail_pane_t

0x8db6,	// (0x00068f02) phacti_term_pane_t2_ParamLimits

0x8db6,	// (0x00068f02) phacti_term_pane_t2

0x0001,

0xfd6a,	// (0x0006feb6) phacti_term_pane_t_ParamLimits

0xfd6a,	// (0x0006feb6) phacti_term_pane_t

0xcb6b,	// (0x0006ccb7) aid_size_list_single_double

0x913c,	// (0x00069288) popup_ezdial_listscroll_window

0x9158,	// (0x000692a4) popup_number_entry_window_cp01

0xdbdf,	// (0x0006dd2b) bg_popup_call_pane_cp09

0xcb77,	// (0x0006ccc3) ezdial_list_pane

0xcb7f,	// (0x0006cccb) scroll_pane_cp23

0xf02a,	// (0x0006f176) bg_button_pane_cp028_ParamLimits

0xf02a,	// (0x0006f176) bg_button_pane_cp028

0x9166,	// (0x000692b2) cmail_ddmenu_btn01_pane_g1_ParamLimits

0x9166,	// (0x000692b2) cmail_ddmenu_btn01_pane_g1

0x9175,	// (0x000692c1) cmail_ddmenu_btn01_pane_g2_ParamLimits

0x9175,	// (0x000692c1) cmail_ddmenu_btn01_pane_g2

0x0001,

0xfdbb,	// (0x0006ff07) cmail_ddmenu_btn01_pane_g_ParamLimits

0xfdbb,	// (0x0006ff07) cmail_ddmenu_btn01_pane_g

0xcb87,	// (0x0006ccd3) cmail_ddmenu_btn01_pane_t1_ParamLimits

0xcb87,	// (0x0006ccd3) cmail_ddmenu_btn01_pane_t1

0xf02a,	// (0x0006f176) bg_button_pane_cp029_ParamLimits

0xf02a,	// (0x0006f176) bg_button_pane_cp029

0x9185,	// (0x000692d1) cmail_ddmenu_btn02_pane_g1_ParamLimits

0x9185,	// (0x000692d1) cmail_ddmenu_btn02_pane_g1

0x91a0,	// (0x000692ec) cmail_ddmenu_btn02_pane_t1_ParamLimits

0x91a0,	// (0x000692ec) cmail_ddmenu_btn02_pane_t1

0xc69f,	// (0x0006c7eb) bg_button_pane_cp031_ParamLimits

0xc69f,	// (0x0006c7eb) bg_button_pane_cp031

0x9185,	// (0x000692d1) cmail_ddmenu_btn03_pane_g1_ParamLimits

0x9185,	// (0x000692d1) cmail_ddmenu_btn03_pane_g1

0x91a0,	// (0x000692ec) cmail_ddmenu_btn03_pane_t1_ParamLimits

0x91a0,	// (0x000692ec) cmail_ddmenu_btn03_pane_t1

0x5db6,	// (0x00065f02) cell_dialer2_keypad_pane_t1_ParamLimits

0x5dd0,	// (0x00065f1c) cell_dialer2_keypad_pane_t1_copy1_ParamLimits

0x5dd0,	// (0x00065f1c) cell_dialer2_keypad_pane_t1_copy1

0x7da8,	// (0x00067ef4) ncimui_group_button_pane

0xc69f,	// (0x0006c7eb) main_sp_fs_calendar_pane_ParamLimits

0x8bfa,	// (0x00068d46) list_single_cmail_header_caption_pane_ParamLimits

0xc6b6,	// (0x0006c802) aid_recal_txt_sm_pane

0xbcf7,	// (0x0006be43) mian_recal_day_pane

0xca03,	// (0x0006cb4f) popup_sp_fs_cale_preview_window_ParamLimits

0xbcf7,	// (0x0006be43) list_recal_day_pane

0xcbb6,	// (0x0006cd02) list_single_recal_day_pane_ParamLimits

0xcbb6,	// (0x0006cd02) list_single_recal_day_pane

0xcbc8,	// (0x0006cd14) list_single_recal_day_pane_g1_ParamLimits

0xcbc8,	// (0x0006cd14) list_single_recal_day_pane_g1

0xcbd4,	// (0x0006cd20) list_single_recal_day_pane_g2_ParamLimits

0xcbd4,	// (0x0006cd20) list_single_recal_day_pane_g2

0xcbe4,	// (0x0006cd30) list_single_recal_day_pane_g3_ParamLimits

0xcbe4,	// (0x0006cd30) list_single_recal_day_pane_g3

0x91c7,	// (0x00069313) list_single_recal_day_pane_g4_ParamLimits

0x91c7,	// (0x00069313) list_single_recal_day_pane_g4

0xcbf0,	// (0x0006cd3c) list_single_recal_day_pane_g5_ParamLimits

0xcbf0,	// (0x0006cd3c) list_single_recal_day_pane_g5

0xcc00,	// (0x0006cd4c) list_single_recal_day_pane_g6_ParamLimits

0xcc00,	// (0x0006cd4c) list_single_recal_day_pane_g6

0x0004,

0xfdca,	// (0x0006ff16) list_single_recal_day_pane_g_ParamLimits

0xfdca,	// (0x0006ff16) list_single_recal_day_pane_g

0xcc17,	// (0x0006cd63) list_single_recal_day_pane_t1

0xcc29,	// (0x0006cd75) list_single_recal_day_pane_t2

0x0001,

0x0855,	// (0x000609a1) list_single_recal_day_pane_t

0x91e7,	// (0x00069333) ncimui_query_button_pane_ParamLimits

0x91e7,	// (0x00069333) ncimui_query_button_pane

0x91f7,	// (0x00069343) ncimui_query_button_pane_t1_ParamLimits

0x91f7,	// (0x00069343) ncimui_query_button_pane_t1

0xcc3e,	// (0x0006cd8a) ncimui_query_button_pane_t2_ParamLimits

0xcc3e,	// (0x0006cd8a) ncimui_query_button_pane_t2

0x0001,

0xfdd5,	// (0x0006ff21) ncimui_query_button_pane_t_ParamLimits

0xfdd5,	// (0x0006ff21) ncimui_query_button_pane_t

0x920a,	// (0x00069356) query_button_pane_ParamLimits

0x920a,	// (0x00069356) query_button_pane

0xbcf7,	// (0x0006be43) bg_button_pane_cp0028

0xcc51,	// (0x0006cd9d) query_button_pane_t1

0x3950,	// (0x00063a9c) main_tport_pane_ParamLimits

0x8ad2,	// (0x00068c1e) bg_popup_window_pane_cp01_ParamLimits

0x8ad2,	// (0x00068c1e) bg_popup_window_pane_cp01

0x8aec,	// (0x00068c38) heading_pane_cp08_ParamLimits

0x8aec,	// (0x00068c38) heading_pane_cp08

0x8b00,	// (0x00068c4c) heading_pane_cp07_ParamLimits

0x8b00,	// (0x00068c4c) heading_pane_cp07

0xc8b4,	// (0x0006ca00) cell_tport_appsw_pane_g2

0x0002,

0x07a6,	// (0x000608f2) cell_tport_appsw_pane_g

0x2f2d,	// (0x00063079) input_candi_list_open_g1

0xd5d8,	// (0x0006d724) list_cale_time_pane_g6_ParamLimits

0xd5d8,	// (0x0006d724) list_cale_time_pane_g6

0x4bc2,	// (0x00064d0e) aid_size_touch_calib_1_ParamLimits

0x4bc2,	// (0x00064d0e) aid_size_touch_calib_1

0x4bce,	// (0x00064d1a) aid_size_touch_calib_2_ParamLimits

0x4bce,	// (0x00064d1a) aid_size_touch_calib_2

0x4be4,	// (0x00064d30) aid_size_touch_calib_3_ParamLimits

0x4be4,	// (0x00064d30) aid_size_touch_calib_3

0x4c02,	// (0x00064d4e) aid_size_touch_calib_4_ParamLimits

0x4c02,	// (0x00064d4e) aid_size_touch_calib_4

0x4c18,	// (0x00064d64) main_touch_calib_button_group_pane_ParamLimits

0x4c18,	// (0x00064d64) main_touch_calib_button_group_pane

0x4c30,	// (0x00064d7c) main_touch_calib_pane_g1_ParamLimits

0x4c3c,	// (0x00064d88) main_touch_calib_pane_g2_ParamLimits

0x4c48,	// (0x00064d94) main_touch_calib_pane_g3_ParamLimits

0x4c54,	// (0x00064da0) main_touch_calib_pane_g4_ParamLimits

0xf74e,	// (0x0006f89a) main_touch_calib_pane_g_ParamLimits

0x4c60,	// (0x00064dac) main_touch_calib_pane_t1_ParamLimits

0x4c7a,	// (0x00064dc6) main_touch_calib_pane_t2_ParamLimits

0x4c94,	// (0x00064de0) main_touch_calib_pane_t3_ParamLimits

0x4ca8,	// (0x00064df4) main_touch_calib_pane_t4_ParamLimits

0x4cbc,	// (0x00064e08) main_touch_calib_pane_t5_ParamLimits

0xf757,	// (0x0006f8a3) main_touch_calib_pane_t_ParamLimits

0xa21f,	// (0x0006a36b) list_single_fp_cale_pane_g3_ParamLimits

0xa21f,	// (0x0006a36b) list_single_fp_cale_pane_g3

0x9ce8,	// (0x00069e34) bg_button_pane_cp012_ParamLimits

0x9ce8,	// (0x00069e34) bg_vkb2_func_pane_cp03_ParamLimits

0x6d97,	// (0x00066ee3) cell_vitu2_function_top_pane_g1_ParamLimits

0x9ce8,	// (0x00069e34) bg_vkb2_func_pane_cp04_ParamLimits

0x7d36,	// (0x00067e82) main_ncimui_button_group_pane_ParamLimits

0x7d36,	// (0x00067e82) main_ncimui_button_group_pane

0x7d96,	// (0x00067ee2) main_ncimui_pane_t3_ParamLimits

0x7d96,	// (0x00067ee2) main_ncimui_pane_t3

0xc990,	// (0x0006cadc) phacti_button_group_pane

0xcb6b,	// (0x0006ccb7) aid_size_list_single_double_ParamLimits

0x913c,	// (0x00069288) popup_ezdial_listscroll_window_ParamLimits

0x9158,	// (0x000692a4) popup_number_entry_window_cp01_ParamLimits

0x921d,	// (0x00069369) phacti_button_pane_ParamLimits

0x921d,	// (0x00069369) phacti_button_pane

0xbcf7,	// (0x0006be43) bg_button_pane_cp14

0xcc5f,	// (0x0006cdab) phacti_button_pane_t1

0x922e,	// (0x0006937a) main_touch_calib_button_pane_ParamLimits

0x922e,	// (0x0006937a) main_touch_calib_button_pane

0xc484,	// (0x0006c5d0) bg_button_pane_cp18_ParamLimits

0xc484,	// (0x0006c5d0) bg_button_pane_cp18

0xcc6d,	// (0x0006cdb9) main_touch_calib_button_pane_t1_ParamLimits

0xcc6d,	// (0x0006cdb9) main_touch_calib_button_pane_t1

0xcc83,	// (0x0006cdcf) main_touch_calib_button_pane_t2_ParamLimits

0xcc83,	// (0x0006cdcf) main_touch_calib_button_pane_t2

0x0001,

0x085f,	// (0x000609ab) main_touch_calib_button_pane_t_ParamLimits

0x085f,	// (0x000609ab) main_touch_calib_button_pane_t

0xbcf7,	// (0x0006be43) cell_ncimui_button_pane

0xbcf7,	// (0x0006be43) bg_button_pane_cp032

0xcca1,	// (0x0006cded) cell_ncimui_button_pane_t1

0xa9fe,	// (0x0006ab4a) image3_infobar_pane_ParamLimits

0xa9fe,	// (0x0006ab4a) image3_infobar_pane

0x8164,	// (0x000682b0) fs_bigclock_status_pane_ParamLimits

0x8164,	// (0x000682b0) fs_bigclock_status_pane

0x8171,	// (0x000682bd) main_fs_bigclock_clock_pane_ParamLimits

0x8171,	// (0x000682bd) main_fs_bigclock_clock_pane

0x8185,	// (0x000682d1) main_fs_bigclock_indi_pane_ParamLimits

0x8185,	// (0x000682d1) main_fs_bigclock_indi_pane

0x819d,	// (0x000682e9) main_fs_bigclock_swipe_pane_ParamLimits

0x819d,	// (0x000682e9) main_fs_bigclock_swipe_pane

0xbcf7,	// (0x0006be43) main_fs_clock_dumped_data

0xbad0,	// (0x0006bc1c) list_single_fs_bigclock_indicator_pane_g1_ParamLimits

0xbad0,	// (0x0006bc1c) list_single_fs_bigclock_indicator_pane_g1

0xbaf9,	// (0x0006bc45) list_single_fs_bigclock_indicator_pane_g2_ParamLimits

0xbaf9,	// (0x0006bc45) list_single_fs_bigclock_indicator_pane_g2

0xbb13,	// (0x0006bc5f) list_single_fs_bigclock_indicator_pane_g3_ParamLimits

0xbb13,	// (0x0006bc5f) list_single_fs_bigclock_indicator_pane_g3

0xbb2d,	// (0x0006bc79) list_single_fs_bigclock_indicator_pane_g4_ParamLimits

0xbb2d,	// (0x0006bc79) list_single_fs_bigclock_indicator_pane_g4

0x0004,

0xfc60,	// (0x0006fdac) list_single_fs_bigclock_indicator_pane_g_ParamLimits

0xfc60,	// (0x0006fdac) list_single_fs_bigclock_indicator_pane_g

0xbb56,	// (0x0006bca2) list_single_fs_bigclock_indicator_pane_t1_ParamLimits

0xbb56,	// (0x0006bca2) list_single_fs_bigclock_indicator_pane_t1

0xbb7e,	// (0x0006bcca) list_single_fs_bigclock_indicator_pane_t2_ParamLimits

0xbb7e,	// (0x0006bcca) list_single_fs_bigclock_indicator_pane_t2

0xbba6,	// (0x0006bcf2) list_single_fs_bigclock_indicator_pane_t3_ParamLimits

0xbba6,	// (0x0006bcf2) list_single_fs_bigclock_indicator_pane_t3

0xbbce,	// (0x0006bd1a) list_single_fs_bigclock_indicator_pane_t4_ParamLimits

0xbbce,	// (0x0006bd1a) list_single_fs_bigclock_indicator_pane_t4

0x0004,

0xfc6b,	// (0x0006fdb7) list_single_fs_bigclock_indicator_pane_t_ParamLimits

0xfc6b,	// (0x0006fdb7) list_single_fs_bigclock_indicator_pane_t

0xccaf,	// (0x0006cdfb) image3_infobar_fav_pane_ParamLimits

0xccaf,	// (0x0006cdfb) image3_infobar_fav_pane

0xccbf,	// (0x0006ce0b) image3_infobar_loc_pane_ParamLimits

0xccbf,	// (0x0006ce0b) image3_infobar_loc_pane

0xccd3,	// (0x0006ce1f) image3_infobar_time_pane_ParamLimits

0xccd3,	// (0x0006ce1f) image3_infobar_time_pane

0x49d4,	// (0x00064b20) image3_infobar_time_pane_g1

0xcce3,	// (0x0006ce2f) image3_infobar_time_pane_t1

0x49d4,	// (0x00064b20) image3_infobar_loc_pane_g1

0xccf1,	// (0x0006ce3d) image3_infobar_loc_pane_g2

0x0001,

0xfdda,	// (0x0006ff26) image3_infobar_loc_pane_g

0xccf9,	// (0x0006ce45) image3_infobar_loc_pane_t1

0x49d4,	// (0x00064b20) image3_infobar_fav_pane_g1

0xcd07,	// (0x0006ce53) image3_infobar_fav_pane_g2

0x0001,

0xfddf,	// (0x0006ff2b) image3_infobar_fav_pane_g

0xcd0f,	// (0x0006ce5b) fs_bigclock_status_battery_pane

0xcd18,	// (0x0006ce64) fs_bigclock_status_signal_pane

0xcd21,	// (0x0006ce6d) fs_bigclock_status_title_pane

0xcd2a,	// (0x0006ce76) fs_bigclock_status_signal_pane_g1

0xcd33,	// (0x0006ce7f) fs_bigclock_status_signal_pane_g2

0x0001,

0x086e,	// (0x000609ba) fs_bigclock_status_signal_pane_g

0xcd3b,	// (0x0006ce87) fs_bigclock_status_battery_pane_g1

0xcd44,	// (0x0006ce90) fs_bigclock_status_battery_pane_g2

0x0001,

0x0873,	// (0x000609bf) fs_bigclock_status_battery_pane_g

0xcd4c,	// (0x0006ce98) fs_bigclock_status_title_pane_t1

0x49d4,	// (0x00064b20) main_fs_bigclock_clock_pane_g1

0xcd5a,	// (0x0006cea6) main_fs_bigclock_clock_pane_g2

0xcd5a,	// (0x0006cea6) main_fs_bigclock_clock_pane_g3

0xcd5a,	// (0x0006cea6) main_fs_bigclock_clock_pane_g4

0x0003,

0xfde4,	// (0x0006ff30) main_fs_bigclock_clock_pane_g

0xcd62,	// (0x0006ceae) main_fs_bigclock_clock_pane_t1

0xcd70,	// (0x0006cebc) main_fs_bigclock_clock_pane_t2

0x0001,

0x0881,	// (0x000609cd) main_fs_bigclock_clock_pane_t

0xcd7f,	// (0x0006cecb) list_single_fs_bigclock_indicator_pane_ParamLimits

0xcd7f,	// (0x0006cecb) list_single_fs_bigclock_indicator_pane

0x9243,	// (0x0006938f) list_single_fs_bigclock_pane_ParamLimits

0x9243,	// (0x0006938f) list_single_fs_bigclock_pane

0xcd99,	// (0x0006cee5) main_fs_bigclock_indicator_pane_t1

0xcda8,	// (0x0006cef4) list_single_fs_bigclock_pane_g1

0xcdb0,	// (0x0006cefc) list_single_fs_bigclock_pane_t1

0x49d4,	// (0x00064b20) main_fs_bigclock_swipe_pane_g1

0xcdf3,	// (0x0006cf3f) main_fs_bigclock_swipe_pane_g2

0x0001,

0xfdf4,	// (0x0006ff40) main_fs_bigclock_swipe_pane_g

0xcdfb,	// (0x0006cf47) main_fs_bigclock_swipe_pane_t1_ParamLimits

0xcdfb,	// (0x0006cf47) main_fs_bigclock_swipe_pane_t1

0x2740,	// (0x0006288c) call_type_pane_ParamLimits

0xbcf7,	// (0x0006be43) main_btmg_pane

0x8f35,	// (0x00069081) list_single_cale_mrui_row_pane_g2_ParamLimits

0x8f35,	// (0x00069081) list_single_cale_mrui_row_pane_g2

0x0002,

0xfd8e,	// (0x0006feda) list_single_cale_mrui_row_pane_g_ParamLimits

0xfd8e,	// (0x0006feda) list_single_cale_mrui_row_pane_g

0xcba6,	// (0x0006ccf2) list_recal_vselct_arw_lo_pane

0xcbae,	// (0x0006ccfa) list_recal_vselct_arw_up_pane

0xc6ad,	// (0x0006c7f9) list_recal_vselct_pane

0x92a9,	// (0x000693f5) btmg_button_pane

0x92b3,	// (0x000693ff) main_btmg_pane_g1

0xbcf7,	// (0x0006be43) bg_button_pane_cp044

0xce18,	// (0x0006cf64) btmg_button_pane_t1

0xf022,	// (0x0006f16e) aid_listscroll_gen

0xc69f,	// (0x0006c7eb) main_cntbar_detail_pane

0xc8d2,	// (0x0006ca1e) list_cmail_folder_pane

0xc8e2,	// (0x0006ca2e) sp_fs_scroll_pane_cp03_ParamLimits

0x92bd,	// (0x00069409) list_single_fs_dyc_pane_cp01_ParamLimits

0x92bd,	// (0x00069409) list_single_fs_dyc_pane_cp01

0xce26,	// (0x0006cf72) aid_size_cmail_indent

0x92d6,	// (0x00069422) list_single_dyc_row_pane_cp01

0x930b,	// (0x00069457) cntbar_detail_list_pane_ParamLimits

0x930b,	// (0x00069457) cntbar_detail_list_pane

0x9357,	// (0x000694a3) main_cntbar_detail_cont_pane_ParamLimits

0x9357,	// (0x000694a3) main_cntbar_detail_cont_pane

0x26da,	// (0x00062826) scroll_pane_cp032_ParamLimits

0x26da,	// (0x00062826) scroll_pane_cp032

0x936b,	// (0x000694b7) cntbar_detail_list_event_pane_ParamLimits

0x936b,	// (0x000694b7) cntbar_detail_list_event_pane

0x931b,	// (0x00069467) cntbar_detail_list_shct_pane

0xd461,	// (0x0006d5ad) aid_list_gen

0xce2f,	// (0x0006cf7b) aid_scroll

0xce38,	// (0x0006cf84) aid_size_touch_scroll_bar

0xce41,	// (0x0006cf8d) aid_list_double

0xce4a,	// (0x0006cf96) aid_list_single

0x937b,	// (0x000694c7) aid_list_single_lg

0x9384,	// (0x000694d0) aid_list_z_g_a_sm

0x938c,	// (0x000694d8) aid_list_z_g_d

0x9394,	// (0x000694e0) aid_txt_z_prm

0x93a2,	// (0x000694ee) aid_txt_z_prm_cp01

0x93b0,	// (0x000694fc) aid_txt_z_sec

0x93be,	// (0x0006950a) main_cntbar_detail_cont_pane_g1_ParamLimits

0x93be,	// (0x0006950a) main_cntbar_detail_cont_pane_g1

0x93d2,	// (0x0006951e) main_cntbar_detail_cont_pane_g2_ParamLimits

0x93d2,	// (0x0006951e) main_cntbar_detail_cont_pane_g2

0x0001,

0xfdf9,	// (0x0006ff45) main_cntbar_detail_cont_pane_g_ParamLimits

0xfdf9,	// (0x0006ff45) main_cntbar_detail_cont_pane_g

0xce53,	// (0x0006cf9f) main_cntbar_detail_cont_pane_t1

0xce61,	// (0x0006cfad) main_cntbar_detail_cont_pane_t2

0xce6f,	// (0x0006cfbb) main_cntbar_detail_cont_pane_t3

0x0002,

0xfdfe,	// (0x0006ff4a) main_cntbar_detail_cont_pane_t

0x93e2,	// (0x0006952e) cell_cntbar_detail_list_shct_pane_ParamLimits

0x93e2,	// (0x0006952e) cell_cntbar_detail_list_shct_pane

0xce7d,	// (0x0006cfc9) cntbar_detail_list_shct_pane_g1

0xce86,	// (0x0006cfd2) cntbar_detail_list_shct_pane_g2

0x0001,

0xfe05,	// (0x0006ff51) cntbar_detail_list_shct_pane_g

0x93f6,	// (0x00069542) cntbar_detail_list_event_pane_g1_ParamLimits

0x93f6,	// (0x00069542) cntbar_detail_list_event_pane_g1

0x9402,	// (0x0006954e) cntbar_detail_list_event_pane_g2_ParamLimits

0x9402,	// (0x0006954e) cntbar_detail_list_event_pane_g2

0x0005,

0xfe0a,	// (0x0006ff56) cntbar_detail_list_event_pane_g_ParamLimits

0xfe0a,	// (0x0006ff56) cntbar_detail_list_event_pane_g

0x946e,	// (0x000695ba) cntbar_detail_list_event_pane_t1_ParamLimits

0x946e,	// (0x000695ba) cntbar_detail_list_event_pane_t1

0x9483,	// (0x000695cf) cntbar_detail_list_event_pane_t2_ParamLimits

0x9483,	// (0x000695cf) cntbar_detail_list_event_pane_t2

0x0002,

0xfe17,	// (0x0006ff63) cntbar_detail_list_event_pane_t_ParamLimits

0xfe17,	// (0x0006ff63) cntbar_detail_list_event_pane_t

0x49d4,	// (0x00064b20) cell_cntbar_detail_list_shct_pane_g1

0x2aa7,	// (0x00062bf3) navi_pane_mv_g3

0xc69f,	// (0x0006c7eb) main_cntbar_detail_pane_ParamLimits

0xbcf7,	// (0x0006be43) main_notif_wgt_pane

0xa786,	// (0x0006a8d2) aid_tch_main_mp4_pane_g4

0xa988,	// (0x0006aad4) popup_slider_window_cp02

0xcb9c,	// (0x0006cce8) list_recal_day_event_pane

0x92df,	// (0x0006942b) cntbar_detail_btn_pane_ParamLimits

0x92df,	// (0x0006942b) cntbar_detail_btn_pane

0x92f5,	// (0x00069441) cntbar_detail_btn_pane_cp01_ParamLimits

0x92f5,	// (0x00069441) cntbar_detail_btn_pane_cp01

0x931b,	// (0x00069467) cntbar_detail_list_shct_pane_ParamLimits

0x932b,	// (0x00069477) cntbar_detail_pane_g1_ParamLimits

0x932b,	// (0x00069477) cntbar_detail_pane_g1

0x933b,	// (0x00069487) cntbar_detail_pane_t1_ParamLimits

0x933b,	// (0x00069487) cntbar_detail_pane_t1

0x940e,	// (0x0006955a) cntbar_detail_list_event_pane_g3_ParamLimits

0x940e,	// (0x0006955a) cntbar_detail_list_event_pane_g3

0x9426,	// (0x00069572) cntbar_detail_list_event_pane_g4_ParamLimits

0x9426,	// (0x00069572) cntbar_detail_list_event_pane_g4

0x943e,	// (0x0006958a) cntbar_detail_list_event_pane_g5_ParamLimits

0x943e,	// (0x0006958a) cntbar_detail_list_event_pane_g5

0x9456,	// (0x000695a2) cntbar_detail_list_event_pane_g6_ParamLimits

0x9456,	// (0x000695a2) cntbar_detail_list_event_pane_g6

0x9498,	// (0x000695e4) cntbar_detail_list_event_pane_t3_ParamLimits

0x9498,	// (0x000695e4) cntbar_detail_list_event_pane_t3

0x94aa,	// (0x000695f6) popup_notif_wgt_window_ParamLimits

0x94aa,	// (0x000695f6) popup_notif_wgt_window

0x94c3,	// (0x0006960f) popup_submenu_window_cp01_ParamLimits

0x94c3,	// (0x0006960f) popup_submenu_window_cp01

0xdbdf,	// (0x0006dd2b) bg_popup_window_pane_cp10

0xce8f,	// (0x0006cfdb) listscroll_notif_wgt_pane

0xcea0,	// (0x0006cfec) list_notif_wgt_window

0xcea9,	// (0x0006cff5) scroll_pane_cp033

0x94d5,	// (0x00069621) list_notif_wgt_row_pane_ParamLimits

0x94d5,	// (0x00069621) list_notif_wgt_row_pane

0xceb2,	// (0x0006cffe) aid_size_list_notif_wgt_del

0xcebf,	// (0x0006d00b) list_notif_wgt_row_pane_g1

0xcecb,	// (0x0006d017) list_notif_wgt_row_pane_g2

0xced7,	// (0x0006d023) list_notif_wgt_row_pane_g3

0x0002,

0xfe1e,	// (0x0006ff6a) list_notif_wgt_row_pane_g

0xcee4,	// (0x0006d030) list_notif_wgt_row_pane_t1

0xcef9,	// (0x0006d045) list_notif_wgt_row_pane_t2

0xcf0b,	// (0x0006d057) list_notif_wgt_row_pane_t3

0x0002,

0xfe25,	// (0x0006ff71) list_notif_wgt_row_pane_t

0xaf40,	// (0x0006b08c) list_recal_day_event_pane_g1

0xcf1d,	// (0x0006d069) list_recal_day_event_pane_t1

0xbcf7,	// (0x0006be43) bg_button_pane_cp045

0xcf2c,	// (0x0006d078) cntbar_detail_btn_pane_t1

0xf02a,	// (0x0006f176) main_callh_pane_ParamLimits

0xf02a,	// (0x0006f176) main_callh_pane

0xbcf7,	// (0x0006be43) main_coverflow0_pane

0xbcf7,	// (0x0006be43) main_wgtman_pane

0x81ab,	// (0x000682f7) main_fs_bigclock_unlock_btn_pane_ParamLimits

0x81ab,	// (0x000682f7) main_fs_bigclock_unlock_btn_pane

0xc8ac,	// (0x0006c9f8) bg_button_pane_cp16

0xc8bc,	// (0x0006ca08) cell_tport_appsw_pane_g3

0x94e5,	// (0x00069631) cf0_flow_pane_ParamLimits

0x94e5,	// (0x00069631) cf0_flow_pane

0xcf3a,	// (0x0006d086) listscroll_cf0_pane

0xcf45,	// (0x0006d091) main_cf0_pane_g1

0x94fa,	// (0x00069646) main_cf0_pane_t1_ParamLimits

0x94fa,	// (0x00069646) main_cf0_pane_t1

0x9511,	// (0x0006965d) main_cf0_pane_t2_ParamLimits

0x9511,	// (0x0006965d) main_cf0_pane_t2

0x0001,

0xfe2c,	// (0x0006ff78) main_cf0_pane_t_ParamLimits

0xfe2c,	// (0x0006ff78) main_cf0_pane_t

0xcf4f,	// (0x0006d09b) scroll_pane_cp11

0x9528,	// (0x00069674) cf0_flow_pane_g1

0x9530,	// (0x0006967c) cf0_flow_pane_g2

0x0001,

0xfe31,	// (0x0006ff7d) cf0_flow_pane_g

0x9538,	// (0x00069684) cf0_flow_pane_t1

0xbcf7,	// (0x0006be43) main_call6_pane

0xbcf7,	// (0x0006be43) main_calllock_pane

0x9546,	// (0x00069692) call6_btn_grp_pane_ParamLimits

0x9546,	// (0x00069692) call6_btn_grp_pane

0x9560,	// (0x000696ac) call6_pane_g1_ParamLimits

0x9560,	// (0x000696ac) call6_pane_g1

0x9575,	// (0x000696c1) popup_call6_1st_window_ParamLimits

0x9575,	// (0x000696c1) popup_call6_1st_window

0x9586,	// (0x000696d2) popup_call6_2nd_window_ParamLimits

0x9586,	// (0x000696d2) popup_call6_2nd_window

0x9597,	// (0x000696e3) cell_call6_btn_pane_ParamLimits

0x9597,	// (0x000696e3) cell_call6_btn_pane

0xdbdf,	// (0x0006dd2b) bg_popup_call2_in_pane_cp03

0xcf5a,	// (0x0006d0a6) popup_call6_1st_window_g1

0xcf62,	// (0x0006d0ae) popup_call6_1st_window_g2

0xcf6a,	// (0x0006d0b6) popup_call6_1st_window_g3

0x0002,

0xfe36,	// (0x0006ff82) popup_call6_1st_window_g

0xcf72,	// (0x0006d0be) popup_call6_1st_window_t1

0xcf81,	// (0x0006d0cd) popup_call6_1st_window_t2

0xcf91,	// (0x0006d0dd) popup_call6_1st_window_t3

0x0002,

0xfe3d,	// (0x0006ff89) popup_call6_1st_window_t

0xdbdf,	// (0x0006dd2b) bg_popup_call2_in_pane_cp04

0xcf5a,	// (0x0006d0a6) popup_call6_2nd_window_g1

0xcf62,	// (0x0006d0ae) popup_call6_2nd_window_g2

0xcf6a,	// (0x0006d0b6) popup_call6_2nd_window_g3

0x0002,

0xfe36,	// (0x0006ff82) popup_call6_2nd_window_g

0xcf72,	// (0x0006d0be) popup_call6_2nd_window_t1

0xbcf7,	// (0x0006be43) bg_button_pane_cp15

0xcfa1,	// (0x0006d0ed) cell_call6_btn_pane_g1

0xcfaa,	// (0x0006d0f6) cell_call6_btn_pane_t1

0x95ab,	// (0x000696f7) listscroll_wgtman_pane_ParamLimits

0x95ab,	// (0x000696f7) listscroll_wgtman_pane

0x95ce,	// (0x0006971a) wgtman_btn_pane_ParamLimits

0x95ce,	// (0x0006971a) wgtman_btn_pane

0xda92,	// (0x0006dbde) aid_scroll_copy1

0xcfb9,	// (0x0006d105) list_wgtman_pane

0x9611,	// (0x0006975d) wgtman_btn_pane_g1_ParamLimits

0x9611,	// (0x0006975d) wgtman_btn_pane_g1

0x963d,	// (0x00069789) wgtman_btn_pane_t1_ParamLimits

0x963d,	// (0x00069789) wgtman_btn_pane_t1

0xcfc3,	// (0x0006d10f) wgtman_btn_pane_t2_ParamLimits

0xcfc3,	// (0x0006d10f) wgtman_btn_pane_t2

0x0001,

0xfe44,	// (0x0006ff90) wgtman_btn_pane_t_ParamLimits

0xfe44,	// (0x0006ff90) wgtman_btn_pane_t

0x967a,	// (0x000697c6) listrow_wgtman_pane_ParamLimits

0x967a,	// (0x000697c6) listrow_wgtman_pane

0x968d,	// (0x000697d9) listrow_wgtman_pane_g1

0x969a,	// (0x000697e6) listrow_wgtman_pane_g2

0x0001,

0xfe49,	// (0x0006ff95) listrow_wgtman_pane_g

0x96b8,	// (0x00069804) listrow_wgtman_pane_t1

0x96d0,	// (0x0006981c) listrow_wgtman_pane_t2

0x0001,

0xfe4e,	// (0x0006ff9a) listrow_wgtman_pane_t

0x96f6,	// (0x00069842) wait_bar_pane_cp09

0xcfda,	// (0x0006d126) main_calllock_btn_pane

0xcfe4,	// (0x0006d130) main_calllock_pane_g1

0xbcf7,	// (0x0006be43) bg_button_pane_cp17

0xcfef,	// (0x0006d13b) main_calllock_btn_pane_g1

0xcff8,	// (0x0006d144) main_calllock_btn_pane_t1

0xbcf7,	// (0x0006be43) main_dialer3_pane

0xbcf7,	// (0x0006be43) main_fmrd2_pane

0x49d4,	// (0x00064b20) main_fs_bigclock_unlock_btn_pane_g1

0xd00f,	// (0x0006d15b) main_fs_bigclock_unlock_btn_pane_t1

0x9708,	// (0x00069854) area_fmrd2_info_pane_ParamLimits

0x9708,	// (0x00069854) area_fmrd2_info_pane

0x9719,	// (0x00069865) area_fmrd2_visual_pane_ParamLimits

0x9719,	// (0x00069865) area_fmrd2_visual_pane

0x9727,	// (0x00069873) fmrd2_indi_pane_ParamLimits

0x9727,	// (0x00069873) fmrd2_indi_pane

0x9734,	// (0x00069880) area_fmrd2_visual_pane_g1

0x973c,	// (0x00069888) area_fmrd2_visual_pane_t1

0x974c,	// (0x00069898) area_fmrd2_visual_pane_t2

0x975c,	// (0x000698a8) area_fmrd2_visual_pane_t3

0x0002,

0xfe58,	// (0x0006ffa4) area_fmrd2_visual_pane_t

0x976c,	// (0x000698b8) area_fmrd2_info_pane_g1

0x9774,	// (0x000698c0) area_fmrd2_info_pane_t1

0x9784,	// (0x000698d0) area_fmrd2_info_pane_t2

0x9794,	// (0x000698e0) area_fmrd2_info_pane_t3

0x97a4,	// (0x000698f0) area_fmrd2_info_pane_t4

0x0003,

0xfe5f,	// (0x0006ffab) area_fmrd2_info_pane_t

0x97b2,	// (0x000698fe) fmrd2_indi_pane_t1

0x97c2,	// (0x0006990e) fmrd2_indi_pane_t2

0x97d2,	// (0x0006991e) fmrd2_indi_pane_t3

0x0002,

0xfe68,	// (0x0006ffb4) fmrd2_indi_pane_t

0xbb3c,	// (0x0006bc88) list_single_fs_bigclock_indicator_pane_g5_ParamLimits

0xbb3c,	// (0x0006bc88) list_single_fs_bigclock_indicator_pane_g5

0xbbe3,	// (0x0006bd2f) list_single_fs_bigclock_indicator_pane_t5_ParamLimits

0xbbe3,	// (0x0006bd2f) list_single_fs_bigclock_indicator_pane_t5

0x8dcb,	// (0x00068f17) aid_cell_bcale_month_pane_ParamLimits

0x8dcb,	// (0x00068f17) aid_cell_bcale_month_pane

0x8de3,	// (0x00068f2f) bcale_month_pane_ParamLimits

0x8de3,	// (0x00068f2f) bcale_month_pane

0x8dfa,	// (0x00068f46) bcale_preview_pane_ParamLimits

0x8dfa,	// (0x00068f46) bcale_preview_pane

0xcdb0,	// (0x0006cefc) list_single_fs_bigclock_pane_t1_ParamLimits

0xcdcf,	// (0x0006cf1b) list_single_fs_bigclock_pane_t2_ParamLimits

0xcdcf,	// (0x0006cf1b) list_single_fs_bigclock_pane_t2

0x0001,

0x088d,	// (0x000609d9) list_single_fs_bigclock_pane_t_ParamLimits

0x088d,	// (0x000609d9) list_single_fs_bigclock_pane_t

0xd007,	// (0x0006d153) main_fs_bigclock_unlock_btn_pane_g2

0x0001,

0xfe53,	// (0x0006ff9f) main_fs_bigclock_unlock_btn_pane_g

0x97e2,	// (0x0006992e) aid_dia3_key_size_ParamLimits

0x97e2,	// (0x0006992e) aid_dia3_key_size

0x97f1,	// (0x0006993d) aid_dia3_listrow_size_ParamLimits

0x97f1,	// (0x0006993d) aid_dia3_listrow_size

0x9806,	// (0x00069952) dia3_keypad_fun_pane_ParamLimits

0x9806,	// (0x00069952) dia3_keypad_fun_pane

0x9822,	// (0x0006996e) dia3_keypad_num_pane_ParamLimits

0x9822,	// (0x0006996e) dia3_keypad_num_pane

0x983d,	// (0x00069989) dia3_listscroll_pane_ParamLimits

0x983d,	// (0x00069989) dia3_listscroll_pane

0x9850,	// (0x0006999c) dia3_numentry_pane_ParamLimits

0x9850,	// (0x0006999c) dia3_numentry_pane

0xd01d,	// (0x0006d169) dia3_list_pane

0xd028,	// (0x0006d174) scroll_pane_cp12

0xbcf7,	// (0x0006be43) bg_dia3_numentry_pane

0x9864,	// (0x000699b0) dia3_numentry_pane_t1

0x9873,	// (0x000699bf) cell_dia3_key_num_pane

0x987b,	// (0x000699c7) cell_dia3_key0_fun_pane_ParamLimits

0x987b,	// (0x000699c7) cell_dia3_key0_fun_pane

0x988f,	// (0x000699db) cell_dia3_key1_fun_pane_ParamLimits

0x988f,	// (0x000699db) cell_dia3_key1_fun_pane

0x98a7,	// (0x000699f3) dia3_listrow_pane

0xb82f,	// (0x0006b97b) bg_dia3_numentry_pane_g1

0xbcf7,	// (0x0006be43) bg_button_pane_cp21

0xd033,	// (0x0006d17f) cell_dia3_key_num_pane_t1

0xd041,	// (0x0006d18d) cell_dia3_key_num_pane_t2

0xd050,	// (0x0006d19c) cell_dia3_key_num_pane_t3

0xd05f,	// (0x0006d1ab) cell_dia3_key_num_pane_t4

0x0003,

0xfe6f,	// (0x0006ffbb) cell_dia3_key_num_pane_t

0xbcf7,	// (0x0006be43) bg_button_pane_cp19

0x98b9,	// (0x00069a05) cell_dia3_key0_fun_pane_g1

0xbcf7,	// (0x0006be43) bg_button_pane_cp20

0x98c1,	// (0x00069a0d) cell_dia3_key1_fun_pane_g1

0x98c9,	// (0x00069a15) area_left_week_number_pane

0x98d3,	// (0x00069a1f) area_top_day_name_pane

0x98df,	// (0x00069a2b) frame_month_view_pane

0x98e9,	// (0x00069a35) grid_month_view_pane

0xd06e,	// (0x0006d1ba) cell_top_day_name_pane_ParamLimits

0xd06e,	// (0x0006d1ba) cell_top_day_name_pane

0x98f3,	// (0x00069a3f) cell_area_left_week_number_pane_ParamLimits

0x98f3,	// (0x00069a3f) cell_area_left_week_number_pane

0x9907,	// (0x00069a53) cell_month_view_pane_ParamLimits

0x9907,	// (0x00069a53) cell_month_view_pane

0xd088,	// (0x0006d1d4) frm_month_g1

0x9924,	// (0x00069a70) frm_month_g2

0x992e,	// (0x00069a7a) frm_month_g3

0x9938,	// (0x00069a84) frm_month_g4

0x9942,	// (0x00069a8e) frm_month_g5

0x994c,	// (0x00069a98) frm_month_g6

0x9956,	// (0x00069aa2) frm_month_g7

0xd091,	// (0x0006d1dd) frm_month_g8

0xd09a,	// (0x0006d1e6) frm_month_g9

0xd0a3,	// (0x0006d1ef) frm_month_g10

0xd0ac,	// (0x0006d1f8) frm_month_g11

0xd0b5,	// (0x0006d201) frm_month_g12

0xd0be,	// (0x0006d20a) frm_month_g13

0xd0c7,	// (0x0006d213) frm_month_g14

0xd0d2,	// (0x0006d21e) frm_month_g15

0xd0dd,	// (0x0006d229) frm_month_g16

0x000f,

0xfe78,	// (0x0006ffc4) frm_month_g

0x9960,	// (0x00069aac) cell_top_day_name_pane_t1

0x996f,	// (0x00069abb) cell_area_left_week_number_pane_g1

0x9977,	// (0x00069ac3) cell_area_left_week_number_pane_t1

0x49d4,	// (0x00064b20) cell_month_view_pane_g1

0x9986,	// (0x00069ad2) cell_month_view_pane_t1

0xbcf7,	// (0x0006be43) main_fps_pane

0xc79b,	// (0x0006c8e7) cmail_ddmenu_btn02_pane_cp1_ParamLimits

0xc79b,	// (0x0006c8e7) cmail_ddmenu_btn02_pane_cp1

0xc7b7,	// (0x0006c903) cmail_ddmenu_btn02_pane_cp2_ParamLimits

0xc7b7,	// (0x0006c903) cmail_ddmenu_btn02_pane_cp2

0x9194,	// (0x000692e0) cmail_ddmenu_btn02_pane_g2_ParamLimits

0x9194,	// (0x000692e0) cmail_ddmenu_btn02_pane_g2

0x0001,

0xfdc0,	// (0x0006ff0c) cmail_ddmenu_btn02_pane_g_ParamLimits

0xfdc0,	// (0x0006ff0c) cmail_ddmenu_btn02_pane_g

0x91b5,	// (0x00069301) cmail_ddmenu_btn02_pane_t2_ParamLimits

0x91b5,	// (0x00069301) cmail_ddmenu_btn02_pane_t2

0x0001,

0xfdc5,	// (0x0006ff11) cmail_ddmenu_btn02_pane_t_ParamLimits

0xfdc5,	// (0x0006ff11) cmail_ddmenu_btn02_pane_t

0x9995,	// (0x00069ae1) fps_text_pane_ParamLimits

0x9995,	// (0x00069ae1) fps_text_pane

0x99ac,	// (0x00069af8) main_fps_pane_g1_ParamLimits

0x99ac,	// (0x00069af8) main_fps_pane_g1

0x99c6,	// (0x00069b12) wait_bar_pane_cp010_ParamLimits

0x99c6,	// (0x00069b12) wait_bar_pane_cp010

0x99d7,	// (0x00069b23) fps_text_pane_t1_ParamLimits

0x99d7,	// (0x00069b23) fps_text_pane_t1

0xab45,	// (0x0006ac91) cam4_image_uncrop_pane_g1

0xab4e,	// (0x0006ac9a) cam4_image_uncrop_pane_g2

0x6260,	// (0x000663ac) cam4_image_uncrop_pane_g3

0x6269,	// (0x000663b5) cam4_image_uncrop_pane_g4

0x0003,

0xf8e1,	// (0x0006fa2d) cam4_image_uncrop_pane_g

0x98a7,	// (0x000699f3) dia3_listrow_pane_ParamLimits

0xbcf7,	// (0x0006be43) main_phob2_pane

0x8b6b,	// (0x00068cb7) cell_tport_appsw_pane_cp02_ParamLimits

0x8b6b,	// (0x00068cb7) cell_tport_appsw_pane_cp02

0x8b7f,	// (0x00068ccb) cell_tport_appsw_pane_cp03_ParamLimits

0x8b7f,	// (0x00068ccb) cell_tport_appsw_pane_cp03

0xbcf7,	// (0x0006be43) phob2_contact_card_pane

0xbcf7,	// (0x0006be43) phob2_listscroll_pane

0xd0e8,	// (0x0006d234) phob2_list_pane

0xd0f0,	// (0x0006d23c) scroll_pane_cp034

0x99ef,	// (0x00069b3b) phob2_cc_data_pane_ParamLimits

0x99ef,	// (0x00069b3b) phob2_cc_data_pane

0x9a0e,	// (0x00069b5a) phob2_cc_listscroll_pane_ParamLimits

0x9a0e,	// (0x00069b5a) phob2_cc_listscroll_pane

0xacbb,	// (0x0006ae07) list_double_large_graphic_phob2_pane_ParamLimits

0xacbb,	// (0x0006ae07) list_double_large_graphic_phob2_pane

0x9a2c,	// (0x00069b78) list_double_large_graphic_phob2_pane_g1_ParamLimits

0x9a2c,	// (0x00069b78) list_double_large_graphic_phob2_pane_g1

0x9a39,	// (0x00069b85) list_double_large_graphic_phob2_pane_g2_ParamLimits

0x9a39,	// (0x00069b85) list_double_large_graphic_phob2_pane_g2

0x0001,

0xfe99,	// (0x0006ffe5) list_double_large_graphic_phob2_pane_g_ParamLimits

0xfe99,	// (0x0006ffe5) list_double_large_graphic_phob2_pane_g

0x9a45,	// (0x00069b91) list_double_large_graphic_phob2_pane_t1_ParamLimits

0x9a45,	// (0x00069b91) list_double_large_graphic_phob2_pane_t1

0x9a5a,	// (0x00069ba6) list_double_large_graphic_phob2_pane_t2_ParamLimits

0x9a5a,	// (0x00069ba6) list_double_large_graphic_phob2_pane_t2

0x0001,

0xfe9e,	// (0x0006ffea) list_double_large_graphic_phob2_pane_t_ParamLimits

0xfe9e,	// (0x0006ffea) list_double_large_graphic_phob2_pane_t

0xbcf7,	// (0x0006be43) list_highlight_pane_cp024

0xd0f8,	// (0x0006d244) phob2_cc_button_pane

0x9a6c,	// (0x00069bb8) phob2_cc_data_pane_g1_ParamLimits

0x9a6c,	// (0x00069bb8) phob2_cc_data_pane_g1

0x9a81,	// (0x00069bcd) phob2_cc_data_pane_g2_ParamLimits

0x9a81,	// (0x00069bcd) phob2_cc_data_pane_g2

0x0001,

0xfea3,	// (0x0006ffef) phob2_cc_data_pane_g_ParamLimits

0xfea3,	// (0x0006ffef) phob2_cc_data_pane_g

0x9a93,	// (0x00069bdf) phob2_cc_data_pane_t1_ParamLimits

0x9a93,	// (0x00069bdf) phob2_cc_data_pane_t1

0x9aab,	// (0x00069bf7) phob2_cc_data_pane_t2_ParamLimits

0x9aab,	// (0x00069bf7) phob2_cc_data_pane_t2

0x9ac3,	// (0x00069c0f) phob2_cc_data_pane_t3_ParamLimits

0x9ac3,	// (0x00069c0f) phob2_cc_data_pane_t3

0x0002,

0xfea8,	// (0x0006fff4) phob2_cc_data_pane_t_ParamLimits

0xfea8,	// (0x0006fff4) phob2_cc_data_pane_t

0xd100,	// (0x0006d24c) phob2_cc_list_pane_ParamLimits

0xd100,	// (0x0006d24c) phob2_cc_list_pane

0xafd9,	// (0x0006b125) scroll_pane_cp035_ParamLimits

0xafd9,	// (0x0006b125) scroll_pane_cp035

0xc69f,	// (0x0006c7eb) bg_button_pane_cp033

0xd10c,	// (0x0006d258) phob2_cc_button_pane_g1

0xd118,	// (0x0006d264) phob2_cc_button_pane_t1

0xd12d,	// (0x0006d279) phob2_cc_button_pane_t2

0x0001,

0x094d,	// (0x00060a99) phob2_cc_button_pane_t

0x9add,	// (0x00069c29) list_double_large_graphic_phob2_cc_pane_ParamLimits

0x9add,	// (0x00069c29) list_double_large_graphic_phob2_cc_pane

0x9af1,	// (0x00069c3d) list_double_large_graphic_phob2_cc_pane_g1_ParamLimits

0x9af1,	// (0x00069c3d) list_double_large_graphic_phob2_cc_pane_g1

0x9afd,	// (0x00069c49) list_double_large_graphic_phob2_cc_pane_g2_ParamLimits

0x9afd,	// (0x00069c49) list_double_large_graphic_phob2_cc_pane_g2

0x9b09,	// (0x00069c55) list_double_large_graphic_phob2_cc_pane_g3_ParamLimits

0x9b09,	// (0x00069c55) list_double_large_graphic_phob2_cc_pane_g3

0x9b15,	// (0x00069c61) list_double_large_graphic_phob2_cc_pane_g4_ParamLimits

0x9b15,	// (0x00069c61) list_double_large_graphic_phob2_cc_pane_g4

0x9b21,	// (0x00069c6d) list_double_large_graphic_phob2_cc_pane_g5_ParamLimits

0x9b21,	// (0x00069c6d) list_double_large_graphic_phob2_cc_pane_g5

0x0004,

0xfeaf,	// (0x0006fffb) list_double_large_graphic_phob2_cc_pane_g_ParamLimits

0xfeaf,	// (0x0006fffb) list_double_large_graphic_phob2_cc_pane_g

0x9b2d,	// (0x00069c79) list_double_large_graphic_phob2_cc_pane_t1_ParamLimits

0x9b2d,	// (0x00069c79) list_double_large_graphic_phob2_cc_pane_t1

0x9b56,	// (0x00069ca2) list_double_large_graphic_phob2_cc_pane_t2_ParamLimits

0x9b56,	// (0x00069ca2) list_double_large_graphic_phob2_cc_pane_t2

0x0001,

0xfeba,	// (0x00070006) list_double_large_graphic_phob2_cc_pane_t_ParamLimits

0xfeba,	// (0x00070006) list_double_large_graphic_phob2_cc_pane_t

0xd13f,	// (0x0006d28b) list_highlight_pane_cp025_ParamLimits

0xd13f,	// (0x0006d28b) list_highlight_pane_cp025

0xc69f,	// (0x0006c7eb) bg_button_pane_cp033_ParamLimits

0xd10c,	// (0x0006d258) phob2_cc_button_pane_g1_ParamLimits

0xd118,	// (0x0006d264) phob2_cc_button_pane_t1_ParamLimits

0xd12d,	// (0x0006d279) phob2_cc_button_pane_t2_ParamLimits

0x094d,	// (0x00060a99) phob2_cc_button_pane_t_ParamLimits

0x0c6b,	// (0x00060db7) popup_wgtman_window

0xad9d,	// (0x0006aee9) scroll_pane_cp038

0x95f3,	// (0x0006973f) wgtman_btn_pane_cp_01_ParamLimits

0x95f3,	// (0x0006973f) wgtman_btn_pane_cp_01

0xd14d,	// (0x0006d299) wgtman_content_pane

0xce41,	// (0x0006cf8d) wgtman_heading_pane

0xbcf7,	// (0x0006be43) bg_heading_pane_cp02

0xd156,	// (0x0006d2a2) wgtman_heading_pane_g1

0xd15e,	// (0x0006d2aa) wgtman_heading_pane_t1

0xd16c,	// (0x0006d2b8) scroll_pane_cp036

0xd174,	// (0x0006d2c0) wgtman_list_pane

0xd5e5,	// (0x0006d731) wgtman_list_pane_t1_ParamLimits

0xd5e5,	// (0x0006d731) wgtman_list_pane_t1

0xab31,	// (0x0006ac7d) cam4_grid_pane

0x6f4a,	// (0x00067096) bg_button_pane_cp015_ParamLimits

0x6f5e,	// (0x000670aa) bg_button_pane_cp016_ParamLimits

0x6f71,	// (0x000670bd) bg_button_pane_cp017_ParamLimits

0x6fc9,	// (0x00067115) popup_vitu2_query_window_g3_ParamLimits

0x6fc9,	// (0x00067115) popup_vitu2_query_window_g3

0x7086,	// (0x000671d2) popup_vitu2_query_window_t6_ParamLimits

0x7086,	// (0x000671d2) popup_vitu2_query_window_t6

0x70b1,	// (0x000671fd) popup_vitu2_query_window_t7_ParamLimits

0x70b1,	// (0x000671fd) popup_vitu2_query_window_t7

0xab45,	// (0x0006ac91) cam4_grid_pane_g1

0xab4e,	// (0x0006ac9a) cam4_grid_pane_g2

0xd603,	// (0x0006d74f) cam4_grid_pane_g3

0xd60c,	// (0x0006d758) cam4_grid_pane_g4

0x0003,

0xfebf,	// (0x0007000b) cam4_grid_pane_g

0x18c3,	// (0x00061a0f) aid_placing_vt_slider_lsc_ParamLimits

0x1bc0,	// (0x00061d0c) vidtel_button_pane_ParamLimits

0x1bc0,	// (0x00061d0c) vidtel_button_pane

0xd617,	// (0x0006d763) bg_button_pane_cp034

0x9b7f,	// (0x00069ccb) vidtel_button_pane_g1

0xd621,	// (0x0006d76d) vidtel_button_pane_t1

0xaeda,	// (0x0006b026) aid_size_vtel_slider_touch

0xafd9,	// (0x0006b125) scroll_pane_cp039

0xb86d,	// (0x0006b9b9) ncim_query_button_pane_cp01_ParamLimits

0xb88c,	// (0x0006b9d8) ncimui_query_pane_g1_ParamLimits

0xc69f,	// (0x0006c7eb) input_focus_pane_cp012_ParamLimits

0xb8b1,	// (0x0006b9fd) ncim_query_entry_pane_t1_ParamLimits

0xafd9,	// (0x0006b125) scroll_pane_cp039_ParamLimits

0x2a1b,	// (0x00062b67) navi_pane_bcale_mc_g1

0x2a23,	// (0x00062b6f) navi_pane_bcale_mc_t1

0xc800,	// (0x0006c94c) main_sp_fs_email_pane_g1

0xc808,	// (0x0006c954) main_sp_fs_email_pane_g2

0x0001,

0x06fe,	// (0x0006084a) main_sp_fs_email_pane_g

0xcac3,	// (0x0006cc0f) list_single_cale_mrui_row_pane_g3_ParamLimits

0xcac3,	// (0x0006cc0f) list_single_cale_mrui_row_pane_g3

0x91dd,	// (0x00069329) list_single_recal_day_pane_g5_event_pane

0xcc0f,	// (0x0006cd5b) list_single_recal_day_pane_g7

0xd62f,	// (0x0006d77b) list_recal_day_event_pane_cp01

0xd638,	// (0x0006d784) list_recal_vselct_arw_lo_pane_cp01

0xd640,	// (0x0006d78c) list_recal_vselct_arw_up_pane_cp01

0xd648,	// (0x0006d794) list_recal_vselct_pane_cp01

0xaf40,	// (0x0006b08c) list_recal_day_event_pane_cp01_g1

0xd652,	// (0x0006d79e) list_recal_day_event_pane_cp01_t1

0xcc17,	// (0x0006cd63) list_single_recal_day_pane_t1_ParamLimits

0xcc29,	// (0x0006cd75) list_single_recal_day_pane_t2_ParamLimits

0x0855,	// (0x000609a1) list_single_recal_day_pane_t_ParamLimits

0xc454,	// (0x0006c5a0) bg_notes_pane_ParamLimits

0xc462,	// (0x0006c5ae) list_notes_pane_ParamLimits

0x0f7d,	// (0x000610c9) scroll_pane_cp06_ParamLimits

0xc484,	// (0x0006c5d0) main_notes_pane_ParamLimits

0xbcf7,	// (0x0006be43) main_welc_pane

0x9b87,	// (0x00069cd3) main_welc_body_pane_ParamLimits

0x9b87,	// (0x00069cd3) main_welc_body_pane

0x9ba4,	// (0x00069cf0) main_welc_opti_pane_ParamLimits

0x9ba4,	// (0x00069cf0) main_welc_opti_pane

0x9bed,	// (0x00069d39) main_welc_pane_t1_ParamLimits

0x9bed,	// (0x00069d39) main_welc_pane_t1

0x9c0f,	// (0x00069d5b) main_welc_body_row_pane_ParamLimits

0x9c0f,	// (0x00069d5b) main_welc_body_row_pane

0x9c26,	// (0x00069d72) main_welc_opti_row_pane_ParamLimits

0x9c26,	// (0x00069d72) main_welc_opti_row_pane

0xd660,	// (0x0006d7ac) main_welc_opti_row_pane_g1

0xd668,	// (0x0006d7b4) main_welc_opti_row_pane_t1

0xd677,	// (0x0006d7c3) main_welc_body_row_pane_t1

0xce98,	// (0x0006cfe4) popup_notif_wgt_heading_pane

0xceb2,	// (0x0006cffe) aid_size_list_notif_wgt_del_ParamLimits

0xcebf,	// (0x0006d00b) list_notif_wgt_row_pane_g1_ParamLimits

0xcecb,	// (0x0006d017) list_notif_wgt_row_pane_g2_ParamLimits

0xced7,	// (0x0006d023) list_notif_wgt_row_pane_g3_ParamLimits

0xfe1e,	// (0x0006ff6a) list_notif_wgt_row_pane_g_ParamLimits

0xcee4,	// (0x0006d030) list_notif_wgt_row_pane_t1_ParamLimits

0xcef9,	// (0x0006d045) list_notif_wgt_row_pane_t2_ParamLimits

0xcf0b,	// (0x0006d057) list_notif_wgt_row_pane_t3_ParamLimits

0xfe25,	// (0x0006ff71) list_notif_wgt_row_pane_t_ParamLimits

0x968d,	// (0x000697d9) listrow_wgtman_pane_g1_ParamLimits

0x969a,	// (0x000697e6) listrow_wgtman_pane_g2_ParamLimits

0xfe49,	// (0x0006ff95) listrow_wgtman_pane_g_ParamLimits

0x96b8,	// (0x00069804) listrow_wgtman_pane_t1_ParamLimits

0x96d0,	// (0x0006981c) listrow_wgtman_pane_t2_ParamLimits

0xfe4e,	// (0x0006ff9a) listrow_wgtman_pane_t_ParamLimits

0x96f6,	// (0x00069842) wait_bar_pane_cp09_ParamLimits

0xbcf7,	// (0x0006be43) bg_popup_heading_pane_cp02

0xd686,	// (0x0006d7d2) popup_notif_wgt_heading_pane_g1

0xd68e,	// (0x0006d7da) popup_notif_wgt_heading_pane_t1

0xbcf7,	// (0x0006be43) main_vids_pane

0xbcf7,	// (0x0006be43) vids_listscroll_pane

0x9c36,	// (0x00069d82) scroll_pane_cp040

0xbcf7,	// (0x0006be43) vids_list_pane

0x9c41,	// (0x00069d8d) vids_list_double_pane_ParamLimits

0x9c41,	// (0x00069d8d) vids_list_double_pane

0x9c52,	// (0x00069d9e) vids_list_double_pane_g1

0x9c5b,	// (0x00069da7) vids_list_double_pane_t1

0x9c6a,	// (0x00069db6) vids_list_double_pane_t2

0x0001,

0xfecd,	// (0x00070019) vids_list_double_pane_t

0x9ce8,	// (0x00069e34) main_ncimui_pane_ParamLimits

0x7d4a,	// (0x00067e96) main_ncimui_pane_g1_ParamLimits

0x7d56,	// (0x00067ea2) main_ncimui_pane_g2_ParamLimits

0x7d56,	// (0x00067ea2) main_ncimui_pane_g2

0x0001,

0xfbd6,	// (0x0006fd22) main_ncimui_pane_g_ParamLimits

0xfbd6,	// (0x0006fd22) main_ncimui_pane_g

0x9bc3,	// (0x00069d0f) main_welc_pane_g1_ParamLimits

0x9bc3,	// (0x00069d0f) main_welc_pane_g1

0x9bd8,	// (0x00069d24) main_welc_pane_g2_ParamLimits

0x9bd8,	// (0x00069d24) main_welc_pane_g2

0x0001,

0xfec8,	// (0x00070014) main_welc_pane_g_ParamLimits

0xfec8,	// (0x00070014) main_welc_pane_g
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
	};

} // end of namespace AknLayoutScalable_Abrw_pnl4_apps_nhd4_lsc_tch_Small
