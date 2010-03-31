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

#include "aknlayoutscalable_abrw_pnp4_apps_nhd4_prt_tch_normal.h"
#include "AknLayout2ScalableDecode.h"
namespace AknLayoutScalable_Apps { extern const TUint8 KByteCodedData_AknLayoutScalable_Elaf_pnp4_apps_nhd4_prt_tch[]; }

namespace AknLayoutScalable_Abrw_pnp4_apps_nhd4_prt_tch_Normal
{

extern const TUint16 KDataLookup[AknLayoutScalable_Apps::E_TApiId_TableSize];
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Apps::KByteCodedData_AknLayoutScalable_Elaf_pnp4_apps_nhd4_prt_tch + 0x0001e3d2 };

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
0x258f,	// (0x00020961) Screen

0x259b,	// (0x0002096d) application_window

0x25a7,	// (0x00020979) area_bottom_pane_ParamLimits

0x25a7,	// (0x00020979) area_bottom_pane

0x0d38,	// (0x0001f10a) area_top_pane_ParamLimits

0x0d38,	// (0x0001f10a) area_top_pane

0x0d9c,	// (0x0001f16e) call_video_uplink_pane_ParamLimits

0x0d9c,	// (0x0001f16e) call_video_uplink_pane

0x0ddb,	// (0x0001f1ad) main_pane_ParamLimits

0x0ddb,	// (0x0001f1ad) main_pane

0xc355,	// (0x0002a727) context_pane

0x5488,	// (0x0002385a) navi_pane

0x54ae,	// (0x00023880) popup_cale_events_window_ParamLimits

0x54ae,	// (0x00023880) popup_cale_events_window

0xc368,	// (0x0002a73a) popup_mup_playback_window

0x54c6,	// (0x00023898) signal_pane

0xa29e,	// (0x00028670) main_browser_pane

0xaefd,	// (0x000292cf) main_burst_pane

0x1413,	// (0x0001f7e5) main_calc_pane

0xc33b,	// (0x0002a70d) main_cale_day_pane

0x29b6,	// (0x00020d88) main_cale_month_pane

0xc33b,	// (0x0002a70d) main_cale_week_pane

0xaefd,	// (0x000292cf) main_call_pane

0x9f5f,	// (0x00028331) main_call_poc_pane

0xaefd,	// (0x000292cf) main_camera_pane

0xaefd,	// (0x000292cf) main_chi_dic_pane

0xac88,	// (0x0002905a) main_clock_pane

0x9f5f,	// (0x00028331) main_fmradio_pane

0xaefd,	// (0x000292cf) main_graph_messa_pane

0x9f5f,	// (0x00028331) main_help_pane

0xa29e,	// (0x00028670) main_im_pane

0xa1ba,	// (0x0002858c) main_image_pane_ParamLimits

0xa1ba,	// (0x0002858c) main_image_pane

0x9f5f,	// (0x00028331) main_location2_pane

0xaefd,	// (0x000292cf) main_location_pane

0xa1ba,	// (0x0002858c) main_messa_pane

0x9f5f,	// (0x00028331) main_mp2_pane

0xaefd,	// (0x000292cf) main_mp_pane

0x9f5f,	// (0x00028331) main_msg_pane

0x9f5f,	// (0x00028331) main_mup_eq_pane

0x9f5f,	// (0x00028331) main_mup_pane

0xa29e,	// (0x00028670) main_notes_pane

0x9f5f,	// (0x00028331) main_pec_pane

0x9f5f,	// (0x00028331) main_phob_pane

0x9f5f,	// (0x00028331) main_pinb_pane

0x9f5f,	// (0x00028331) main_postcard_pane

0x9f5f,	// (0x00028331) main_qdial_pane

0xaefd,	// (0x000292cf) main_skin_pane

0x9f5f,	// (0x00028331) main_smil2_pane

0xaefd,	// (0x000292cf) main_smil_pane

0xaefd,	// (0x000292cf) main_video_pane

0xaefd,	// (0x000292cf) main_video_tele_pane

0xa1ba,	// (0x0002858c) main_viewer_pane_ParamLimits

0xa1ba,	// (0x0002858c) main_viewer_pane

0xaefd,	// (0x000292cf) main_vorec_pane

0x145f,	// (0x0001f831) popup_blid_sat_info_window_ParamLimits

0x145f,	// (0x0001f831) popup_blid_sat_info_window

0x147f,	// (0x0001f851) popup_dyc_status_message_window_ParamLimits

0x147f,	// (0x0001f851) popup_dyc_status_message_window

0x148d,	// (0x0001f85f) popup_grid_large_graphic_window_ParamLimits

0x148d,	// (0x0001f85f) popup_grid_large_graphic_window

0x151c,	// (0x0001f8ee) popup_loc_request_window_ParamLimits

0x151c,	// (0x0001f8ee) popup_loc_request_window

0x1563,	// (0x0001f935) popup_wml_address_window_ParamLimits

0x1563,	// (0x0001f935) popup_wml_address_window

0x536a,	// (0x0002373c) call_muted_g1

0x5028,	// (0x000233fa) popup_call_audio_conf_window_ParamLimits

0x5028,	// (0x000233fa) popup_call_audio_conf_window

0x537a,	// (0x0002374c) popup_call_audio_first_window_ParamLimits

0x537a,	// (0x0002374c) popup_call_audio_first_window

0x53ba,	// (0x0002378c) popup_call_audio_in_window_ParamLimits

0x53ba,	// (0x0002378c) popup_call_audio_in_window

0x53de,	// (0x000237b0) popup_call_audio_out_window_ParamLimits

0x53de,	// (0x000237b0) popup_call_audio_out_window

0x5400,	// (0x000237d2) popup_call_audio_second_window_ParamLimits

0x5400,	// (0x000237d2) popup_call_audio_second_window

0x5430,	// (0x00023802) popup_call_audio_wait_window_ParamLimits

0x5430,	// (0x00023802) popup_call_audio_wait_window

0x5451,	// (0x00023823) popup_number_entry_window_ParamLimits

0x5451,	// (0x00023823) popup_number_entry_window

0x9b4c,	// (0x00027f1e) bg_popup_call_pane_cp05_ParamLimits

0x9b4c,	// (0x00027f1e) bg_popup_call_pane_cp05

0x9b6c,	// (0x00027f3e) popup_number_entry_window_t1

0x9b7f,	// (0x00027f51) popup_number_entry_window_t2

0x9b91,	// (0x00027f63) popup_number_entry_window_t3

0x0003,

0xf0cd,	// (0x0002d49f) popup_number_entry_window_t

0x9ba3,	// (0x00027f75) text_title_cp2

0x9bb6,	// (0x00027f88) bg_popup_call_pane_cp_ParamLimits

0x9bb6,	// (0x00027f88) bg_popup_call_pane_cp

0x9bc4,	// (0x00027f96) call_thumbnail_pane

0x9bcc,	// (0x00027f9e) popup_call_audio_in_window_g1_ParamLimits

0x9bcc,	// (0x00027f9e) popup_call_audio_in_window_g1

0x9bd8,	// (0x00027faa) popup_call_audio_in_window_g2_ParamLimits

0x9bd8,	// (0x00027faa) popup_call_audio_in_window_g2

0x9be4,	// (0x00027fb6) popup_call_audio_in_window_g3_ParamLimits

0x9be4,	// (0x00027fb6) popup_call_audio_in_window_g3

0x0002,

0xf0d6,	// (0x0002d4a8) popup_call_audio_in_window_g_ParamLimits

0xf0d6,	// (0x0002d4a8) popup_call_audio_in_window_g

0x9bf0,	// (0x00027fc2) popup_call_audio_in_window_t1_ParamLimits

0x9bf0,	// (0x00027fc2) popup_call_audio_in_window_t1

0x9c0c,	// (0x00027fde) popup_call_audio_in_window_t2_ParamLimits

0x9c0c,	// (0x00027fde) popup_call_audio_in_window_t2

0x9c28,	// (0x00027ffa) popup_call_audio_in_window_t3_ParamLimits

0x9c28,	// (0x00027ffa) popup_call_audio_in_window_t3

0x0002,

0xf0dd,	// (0x0002d4af) popup_call_audio_in_window_t_ParamLimits

0xf0dd,	// (0x0002d4af) popup_call_audio_in_window_t

0x9bb6,	// (0x00027f88) bg_popup_call_pane_cp01_ParamLimits

0x9bb6,	// (0x00027f88) bg_popup_call_pane_cp01

0x9bc4,	// (0x00027f96) call_thumbnail_pane_cp02

0x9c3b,	// (0x0002800d) call_type_pane_cp022

0x9c43,	// (0x00028015) popup_call_audio_out_window_g1_ParamLimits

0x9c43,	// (0x00028015) popup_call_audio_out_window_g1

0x9c55,	// (0x00028027) popup_call_audio_out_window_g2_ParamLimits

0x9c55,	// (0x00028027) popup_call_audio_out_window_g2

0x9c61,	// (0x00028033) popup_call_audio_out_window_g3_ParamLimits

0x9c61,	// (0x00028033) popup_call_audio_out_window_g3

0x0002,

0xf0e4,	// (0x0002d4b6) popup_call_audio_out_window_g_ParamLimits

0xf0e4,	// (0x0002d4b6) popup_call_audio_out_window_g

0x9c73,	// (0x00028045) popup_call_audio_out_window_t1_ParamLimits

0x9c73,	// (0x00028045) popup_call_audio_out_window_t1

0x9c8b,	// (0x0002805d) popup_call_audio_out_window_t2_ParamLimits

0x9c8b,	// (0x0002805d) popup_call_audio_out_window_t2

0x0001,

0xf0eb,	// (0x0002d4bd) popup_call_audio_out_window_t_ParamLimits

0xf0eb,	// (0x0002d4bd) popup_call_audio_out_window_t

0x9ca0,	// (0x00028072) bg_popup_call_pane_ParamLimits

0x9ca0,	// (0x00028072) bg_popup_call_pane

0x2624,	// (0x000209f6) call_thumbnail_pane_cp_ParamLimits

0x2624,	// (0x000209f6) call_thumbnail_pane_cp

0x9d24,	// (0x000280f6) call_type_pane_cp01_ParamLimits

0x9d24,	// (0x000280f6) call_type_pane_cp01

0x9d68,	// (0x0002813a) popup_call_audio_first_window_g1_ParamLimits

0x9d68,	// (0x0002813a) popup_call_audio_first_window_g1

0x9db4,	// (0x00028186) popup_call_audio_first_window_g2_ParamLimits

0x9db4,	// (0x00028186) popup_call_audio_first_window_g2

0x0001,

0xf0f0,	// (0x0002d4c2) popup_call_audio_first_window_g_ParamLimits

0xf0f0,	// (0x0002d4c2) popup_call_audio_first_window_g

0x9df8,	// (0x000281ca) popup_call_audio_first_window_t1_ParamLimits

0x9df8,	// (0x000281ca) popup_call_audio_first_window_t1

0x9ea4,	// (0x00028276) popup_call_audio_first_window_t4_ParamLimits

0x9ea4,	// (0x00028276) popup_call_audio_first_window_t4

0x9f30,	// (0x00028302) popup_call_audio_first_window_t5_ParamLimits

0x9f30,	// (0x00028302) popup_call_audio_first_window_t5

0x0002,

0xf0f5,	// (0x0002d4c7) popup_call_audio_first_window_t_ParamLimits

0xf0f5,	// (0x0002d4c7) popup_call_audio_first_window_t

0x9f5f,	// (0x00028331) bg_popup_call_pane_cp02

0x9f69,	// (0x0002833b) call_type_pane_cp023

0x9f71,	// (0x00028343) popup_call_audio_wait_window_g1

0x9f79,	// (0x0002834b) popup_call_audio_wait_window_g2

0x0001,

0xf0fc,	// (0x0002d4ce) popup_call_audio_wait_window_g

0x9f81,	// (0x00028353) popup_call_audio_wait_window_t3

0x9f8f,	// (0x00028361) bg_popup_call_pane_cp03_ParamLimits

0x9f8f,	// (0x00028361) bg_popup_call_pane_cp03

0x9fef,	// (0x000283c1) call_thumbnail_pane_cp011_ParamLimits

0x9fef,	// (0x000283c1) call_thumbnail_pane_cp011

0x9ffb,	// (0x000283cd) call_type_pane_cp034_ParamLimits

0x9ffb,	// (0x000283cd) call_type_pane_cp034

0xa037,	// (0x00028409) popup_call_audio_second_window_g1_ParamLimits

0xa037,	// (0x00028409) popup_call_audio_second_window_g1

0xa073,	// (0x00028445) popup_call_audio_second_window_g2_ParamLimits

0xa073,	// (0x00028445) popup_call_audio_second_window_g2

0x0001,

0xf101,	// (0x0002d4d3) popup_call_audio_second_window_g_ParamLimits

0xf101,	// (0x0002d4d3) popup_call_audio_second_window_g

0xa0af,	// (0x00028481) popup_call_audio_second_window_t1_ParamLimits

0xa0af,	// (0x00028481) popup_call_audio_second_window_t1

0xa130,	// (0x00028502) popup_call_audio_second_window_t2_ParamLimits

0xa130,	// (0x00028502) popup_call_audio_second_window_t2

0xa166,	// (0x00028538) popup_call_audio_second_window_t3_ParamLimits

0xa166,	// (0x00028538) popup_call_audio_second_window_t3

0x0002,

0xf106,	// (0x0002d4d8) popup_call_audio_second_window_t_ParamLimits

0xf106,	// (0x0002d4d8) popup_call_audio_second_window_t

0x9f5f,	// (0x00028331) bg_popup_call_pane_cp04

0xa19c,	// (0x0002856e) list_conf_pane

0xa1a4,	// (0x00028576) popup_call_audio_conf_window_t1

0xa1b2,	// (0x00028584) call_thumbnail_pane_g1

0xa1ba,	// (0x0002858c) bg_pinb_pane_ParamLimits

0xa1ba,	// (0x0002858c) bg_pinb_pane

0xa1c8,	// (0x0002859a) find_pinb_pane

0xa1d1,	// (0x000285a3) listscroll_pinb_pane_ParamLimits

0xa1d1,	// (0x000285a3) listscroll_pinb_pane

0xa1e0,	// (0x000285b2) pinb_bg_pane_g1

0x2648,	// (0x00020a1a) pinb_bg_pane_g2

0x2654,	// (0x00020a26) pinb_bg_pane_g3

0x2660,	// (0x00020a32) pinb_bg_pane_g4

0x266c,	// (0x00020a3e) pinb_bg_pane_g5

0x2678,	// (0x00020a4a) pinb_bg_pane_g6

0x2683,	// (0x00020a55) pinb_bg_pane_g7

0x268e,	// (0x00020a60) pinb_bg_pane_g8

0x2699,	// (0x00020a6b) pinb_bg_pane_g9

0x26a3,	// (0x00020a75) pinb_bg_pane_g10

0x0009,

0xf10d,	// (0x0002d4df) pinb_bg_pane_g

0x26c0,	// (0x00020a92) grid_pinb_pane

0x26cb,	// (0x00020a9d) list_pinb_pane

0x26d6,	// (0x00020aa8) scroll_pane_cp01_ParamLimits

0x26d6,	// (0x00020aa8) scroll_pane_cp01

0xa1ea,	// (0x000285bc) find_pinb_pane_g1_ParamLimits

0xa1ea,	// (0x000285bc) find_pinb_pane_g1

0xa202,	// (0x000285d4) find_pinb_pane_t1

0xa214,	// (0x000285e6) find_pinb_pane_t2

0x0001,

0xf127,	// (0x0002d4f9) find_pinb_pane_t

0xa229,	// (0x000285fb) input_focus_pane_cp01_ParamLimits

0xa229,	// (0x000285fb) input_focus_pane_cp01

0x26e8,	// (0x00020aba) cell_pinb_pane_ParamLimits

0x26e8,	// (0x00020aba) cell_pinb_pane

0xa235,	// (0x00028607) cell_pinb_pane_g1_ParamLimits

0xa235,	// (0x00028607) cell_pinb_pane_g1

0xa248,	// (0x0002861a) cell_pinb_pane_g2_ParamLimits

0xa248,	// (0x0002861a) cell_pinb_pane_g2

0xa254,	// (0x00028626) cell_pinb_pane_g3_ParamLimits

0xa254,	// (0x00028626) cell_pinb_pane_g3

0x0002,

0xf12c,	// (0x0002d4fe) cell_pinb_pane_g_ParamLimits

0xf12c,	// (0x0002d4fe) cell_pinb_pane_g

0x9f5f,	// (0x00028331) grid_highlight_pane_cp01

0x2717,	// (0x00020ae9) list_pinb_item_pane_ParamLimits

0x2717,	// (0x00020ae9) list_pinb_item_pane

0x9f5f,	// (0x00028331) list_highlight_pane_cp02

0x2741,	// (0x00020b13) list_pinb_item_pane_g1_ParamLimits

0x2741,	// (0x00020b13) list_pinb_item_pane_g1

0x274e,	// (0x00020b20) list_pinb_item_pane_g2_ParamLimits

0x274e,	// (0x00020b20) list_pinb_item_pane_g2

0x275a,	// (0x00020b2c) list_pinb_item_pane_g3_ParamLimits

0x275a,	// (0x00020b2c) list_pinb_item_pane_g3

0x276b,	// (0x00020b3d) list_pinb_item_pane_g4_ParamLimits

0x276b,	// (0x00020b3d) list_pinb_item_pane_g4

0x0003,

0xf133,	// (0x0002d505) list_pinb_item_pane_g_ParamLimits

0xf133,	// (0x0002d505) list_pinb_item_pane_g

0x2777,	// (0x00020b49) list_pinb_item_pane_t1_ParamLimits

0x2777,	// (0x00020b49) list_pinb_item_pane_t1

0x0fc9,	// (0x0001f39b) calc_display_pane

0x0fe7,	// (0x0001f3b9) calc_paper_pane

0x1003,	// (0x0001f3d5) grid_calc_pane

0x9f5f,	// (0x00028331) bg_list_pane_cp01

0x278e,	// (0x00020b60) clock_g1

0x2796,	// (0x00020b68) clock_g2

0x0001,

0xf13c,	// (0x0002d50e) clock_g

0x27a0,	// (0x00020b72) clock_t1_ParamLimits

0x27a0,	// (0x00020b72) clock_t1

0x27b5,	// (0x00020b87) clock_t2_ParamLimits

0x27b5,	// (0x00020b87) clock_t2

0x27c7,	// (0x00020b99) clock_t3_ParamLimits

0x27c7,	// (0x00020b99) clock_t3

0x27d9,	// (0x00020bab) clock_t4_ParamLimits

0x27d9,	// (0x00020bab) clock_t4

0x27eb,	// (0x00020bbd) clock_t5_ParamLimits

0x27eb,	// (0x00020bbd) clock_t5

0x2800,	// (0x00020bd2) clock_t6_ParamLimits

0x2800,	// (0x00020bd2) clock_t6

0x2812,	// (0x00020be4) clock_t7_ParamLimits

0x2812,	// (0x00020be4) clock_t7

0x2824,	// (0x00020bf6) clock_t8_ParamLimits

0x2824,	// (0x00020bf6) clock_t8

0x283a,	// (0x00020c0c) clock_t9_ParamLimits

0x283a,	// (0x00020c0c) clock_t9

0x0008,

0xf141,	// (0x0002d513) clock_t_ParamLimits

0xf141,	// (0x0002d513) clock_t

0xa260,	// (0x00028632) popup_clock_analogue_window_cp02

0xa260,	// (0x00028632) popup_clock_digital_window_cp01

0xa268,	// (0x0002863a) listscroll_help_pane

0x9f5f,	// (0x00028331) phob_pre_status_pane

0xa272,	// (0x00028644) grid_qdial_pane

0xa1ba,	// (0x0002858c) listscroll_mce_pane

0xa1ba,	// (0x0002858c) bg_notes_pane

0xa27c,	// (0x0002864e) list_notes_pane

0x2850,	// (0x00020c22) scroll_pane_cp06

0xa28a,	// (0x0002865c) bg_calc_paper_pane

0x102f,	// (0x0001f401) list_calc_pane

0xa29e,	// (0x00028670) bg_calc_display_pane

0x1049,	// (0x0001f41b) calc_display_pane_t1

0x105e,	// (0x0001f430) calc_display_pane_t2

0x1073,	// (0x0001f445) calc_display_pane_t3

0x0002,

0xf154,	// (0x0002d526) calc_display_pane_t

0x1085,	// (0x0001f457) cell_calc_pane_ParamLimits

0x1085,	// (0x0001f457) cell_calc_pane

0xa2aa,	// (0x0002867c) bg_calc_paper_pane_g1

0xa2b6,	// (0x00028688) bg_calc_paper_pane_g2

0xa2c2,	// (0x00028694) bg_calc_paper_pane_g3

0xa2ce,	// (0x000286a0) bg_calc_paper_pane_g4

0xa2da,	// (0x000286ac) bg_calc_paper_pane_g5

0x285f,	// (0x00020c31) bg_calc_paper_pane_g6

0x2870,	// (0x00020c42) bg_calc_paper_pane_g7

0x2881,	// (0x00020c53) bg_calc_paper_pane_g8

0x0007,

0xf15b,	// (0x0002d52d) bg_calc_paper_pane_g

0x2892,	// (0x00020c64) calc_bg_paper_pane_g9

0x28a3,	// (0x00020c75) list_calc_item_pane_ParamLimits

0x28a3,	// (0x00020c75) list_calc_item_pane

0xa2e6,	// (0x000286b8) list_calc_item_pane_g1

0x10b2,	// (0x0001f484) list_calc_item_pane_t1_ParamLimits

0x10b2,	// (0x0001f484) list_calc_item_pane_t1

0x10c4,	// (0x0001f496) list_calc_item_pane_t2_ParamLimits

0x10c4,	// (0x0001f496) list_calc_item_pane_t2

0x0001,

0xf16c,	// (0x0002d53e) list_calc_item_pane_t_ParamLimits

0xf16c,	// (0x0002d53e) list_calc_item_pane_t

0xa2f3,	// (0x000286c5) cell_calc_pane_g1

0xa2fd,	// (0x000286cf) grid_highlight_pane_cp02

0xa31f,	// (0x000286f1) bg_calc_display_pane_g1

0x10f4,	// (0x0001f4c6) bg_calc_display_pane_g2

0xa328,	// (0x000286fa) bg_calc_display_pane_g3

0x0002,

0xf176,	// (0x0002d548) bg_calc_display_pane_g

0x10fe,	// (0x0001f4d0) cell_qdial_pane_ParamLimits

0x10fe,	// (0x0001f4d0) cell_qdial_pane

0x28d7,	// (0x00020ca9) cell_qdial_pane_g1_ParamLimits

0x28d7,	// (0x00020ca9) cell_qdial_pane_g1

0x28e4,	// (0x00020cb6) cell_qdial_pane_g2_ParamLimits

0x28e4,	// (0x00020cb6) cell_qdial_pane_g2

0xa331,	// (0x00028703) cell_qdial_pane_g3_ParamLimits

0xa331,	// (0x00028703) cell_qdial_pane_g3

0x0003,

0xf17d,	// (0x0002d54f) cell_qdial_pane_g_ParamLimits

0xf17d,	// (0x0002d54f) cell_qdial_pane_g

0x2901,	// (0x00020cd3) cell_qdial_pane_t1_ParamLimits

0x2901,	// (0x00020cd3) cell_qdial_pane_t1

0x2919,	// (0x00020ceb) cell_qdial_pane_t2_ParamLimits

0x2919,	// (0x00020ceb) cell_qdial_pane_t2

0x292c,	// (0x00020cfe) cell_qdial_pane_t3_ParamLimits

0x292c,	// (0x00020cfe) cell_qdial_pane_t3

0x0002,

0xf186,	// (0x0002d558) cell_qdial_pane_t_ParamLimits

0xf186,	// (0x0002d558) cell_qdial_pane_t

0x9f5f,	// (0x00028331) grid_highlight_pane_cp04

0xa33d,	// (0x0002870f) thumbnail_qdial_pane_ParamLimits

0xa33d,	// (0x0002870f) thumbnail_qdial_pane

0xa399,	// (0x0002876b) list_help_pane

0xa3a2,	// (0x00028774) scroll_pane_cp02

0x293f,	// (0x00020d11) help_list_pane_t1_ParamLimits

0x293f,	// (0x00020d11) help_list_pane_t1

0x1112,	// (0x0001f4e4) bg_notes_pane_g2

0x111a,	// (0x0001f4ec) bg_notes_pane_g3

0x1122,	// (0x0001f4f4) notes_bg_pane_g1

0x112a,	// (0x0001f4fc) notes_bg_pane_g4

0x1132,	// (0x0001f504) notes_bg_pane_g5

0x113a,	// (0x0001f50c) notes_bg_pane_g6

0x1142,	// (0x0001f514) notes_bg_pane_g7

0x114a,	// (0x0001f51c) notes_bg_pane_g8

0x1152,	// (0x0001f524) notes_bg_pane_g9

0x0006,

0xf1a4,	// (0x0002d576) notes_bg_pane_g

0x2979,	// (0x00020d4b) list_notes_text_pane_ParamLimits

0x2979,	// (0x00020d4b) list_notes_text_pane

0xa3b9,	// (0x0002878b) list_notes_text_pane_g1

0x29a8,	// (0x00020d7a) list_notes_text_pane_t1

0x29b6,	// (0x00020d88) listscroll_cale_week_pane

0x29db,	// (0x00020dad) bg_cale_heading_pane

0xa3dc,	// (0x000287ae) bg_cale_pane_cp01

0x29fd,	// (0x00020dcf) cale_week_corner_pane

0x2a17,	// (0x00020de9) cale_week_day_heading_pane

0x2a39,	// (0x00020e0b) cale_week_scroll_pane_g1

0x2a56,	// (0x00020e28) cale_week_scroll_pane_g2

0x2a69,	// (0x00020e3b) cale_week_scroll_pane_g3

0x2a7c,	// (0x00020e4e) cale_week_scroll_pane_g4

0x2a8f,	// (0x00020e61) cale_week_scroll_pane_g5

0x2aa2,	// (0x00020e74) cale_week_scroll_pane_g6

0x2ab5,	// (0x00020e87) cale_week_scroll_pane_g7

0x2ac8,	// (0x00020e9a) cale_week_scroll_pane_g8

0x2add,	// (0x00020eaf) cale_week_scroll_pane_g9

0x2af0,	// (0x00020ec2) cale_week_scroll_pane_g10

0x2b03,	// (0x00020ed5) cale_week_scroll_pane_g11

0x2b16,	// (0x00020ee8) cale_week_scroll_pane_g12

0x2b2d,	// (0x00020eff) cale_week_scroll_pane_g13

0x2b48,	// (0x00020f1a) cale_week_scroll_pane_g14

0x2b63,	// (0x00020f35) cale_week_scroll_pane_g15

0x000e,

0xf1b3,	// (0x0002d585) cale_week_scroll_pane_g

0x2b7e,	// (0x00020f50) cale_week_time_pane

0x2b93,	// (0x00020f65) grid_cale_week_pane

0xa40c,	// (0x000287de) scroll_pane_cp08

0x2bb4,	// (0x00020f86) cell_cale_week_pane_ParamLimits

0x2bb4,	// (0x00020f86) cell_cale_week_pane

0x2c18,	// (0x00020fea) cale_week_day_heading_pane_t1

0x2c53,	// (0x00021025) cale_week_day_heading_pane_t2

0x2c8e,	// (0x00021060) cale_week_day_heading_pane_t3

0x2cc9,	// (0x0002109b) cale_week_day_heading_pane_t4

0x2d04,	// (0x000210d6) cale_week_day_heading_pane_t5

0x2d3f,	// (0x00021111) cale_week_day_heading_pane_t6

0x2d7a,	// (0x0002114c) cale_week_day_heading_pane_t7

0x0006,

0xf1d2,	// (0x0002d5a4) cale_week_day_heading_pane_t

0xa429,	// (0x000287fb) bg_cale_side_pane

0x115a,	// (0x0001f52c) cale_week_time_pane_t1

0x1174,	// (0x0001f546) cale_week_time_pane_t2

0x118e,	// (0x0001f560) cale_week_time_pane_t3

0x11a8,	// (0x0001f57a) cale_week_time_pane_t4

0x11c2,	// (0x0001f594) cale_week_time_pane_t5

0x11de,	// (0x0001f5b0) cale_week_time_pane_t6

0x1200,	// (0x0001f5d2) cale_week_time_pane_t7

0x1224,	// (0x0001f5f6) cale_week_time_pane_t8

0x0007,

0xf1e1,	// (0x0002d5b3) cale_week_time_pane_t

0x2db5,	// (0x00021187) cell_cale_week_pane_g2

0x2dc8,	// (0x0002119a) cell_cale_week_pane_g3_ParamLimits

0x2dc8,	// (0x0002119a) cell_cale_week_pane_g3

0xa437,	// (0x00028809) grid_highlight_pane_cp07

0xa43f,	// (0x00028811) listscroll_gms_pane

0xa449,	// (0x0002881b) grid_gms_pane

0xa452,	// (0x00028824) listscroll_gms_pane_g1

0xa45a,	// (0x0002882c) listscroll_gms_pane_g2

0x0001,

0xf1f2,	// (0x0002d5c4) listscroll_gms_pane_g

0x2de0,	// (0x000211b2) scroll_pane_cp010

0x2deb,	// (0x000211bd) cell_gms_pane_ParamLimits

0x2deb,	// (0x000211bd) cell_gms_pane

0x2dfb,	// (0x000211cd) cell_gms_pane_g1

0xa462,	// (0x00028834) cell_gms_pane_g2

0xa3b9,	// (0x0002878b) cell_gms_pane_g3

0xa46a,	// (0x0002883c) cell_gms_pane_g4

0x0003,

0xf1f7,	// (0x0002d5c9) cell_gms_pane_g

0xa473,	// (0x00028845) grid_highlight_pane_cp09

0x5312,	// (0x000236e4) phob_pre_status_pane_g1

0x531a,	// (0x000236ec) phob_pre_status_pane_g2

0x5322,	// (0x000236f4) phob_pre_status_pane_g3

0x532a,	// (0x000236fc) phob_pre_status_pane_g4

0x0004,

0xf5e6,	// (0x0002d9b8) phob_pre_status_pane_g

0x533a,	// (0x0002370c) phob_pre_status_pane_t1

0x534a,	// (0x0002371c) phob_pre_status_pane_t2

0x535a,	// (0x0002372c) phob_pre_status_pane_t3

0x0002,

0xf5f1,	// (0x0002d9c3) phob_pre_status_pane_t

0x9f5f,	// (0x00028331) bg_list_pane_cp05

0x1252,	// (0x0001f624) grid_vorec_pane

0x125c,	// (0x0001f62e) vorec_t1

0x126a,	// (0x0001f63c) vorec_t2

0x1278,	// (0x0001f64a) vorec_t3

0x1286,	// (0x0001f658) vorec_t4

0x1294,	// (0x0001f666) vorec_t5

0x12a2,	// (0x0001f674) vorec_t6

0x0006,

0xf200,	// (0x0002d5d2) vorec_t

0x12be,	// (0x0001f690) wait_bar_pane_cp01

0x2e03,	// (0x000211d5) cell_vorec_pane_ParamLimits

0x2e03,	// (0x000211d5) cell_vorec_pane

0x12c6,	// (0x0001f698) cell_vorec_pane_g1

0x9f5f,	// (0x00028331) grid_highlight_pane_cp05

0x2e26,	// (0x000211f8) cams_zoom_pane

0x2e32,	// (0x00021204) image_vga_pane

0x2e41,	// (0x00021213) main_camera_pane_g1

0x2e4f,	// (0x00021221) main_camera_pane_g2

0x2e5b,	// (0x0002122d) main_camera_pane_g3

0x2e67,	// (0x00021239) main_camera_pane_g4

0x2e73,	// (0x00021245) main_camera_pane_g5

0x2e7f,	// (0x00021251) main_camera_pane_g6

0x2e8b,	// (0x0002125d) main_camera_pane_g7

0x0007,

0xf20f,	// (0x0002d5e1) main_camera_pane_g

0x2e97,	// (0x00021269) main_camera_pane_t1

0x2ea9,	// (0x0002127b) main_camera_pane_t2

0x0001,

0xf220,	// (0x0002d5f2) main_camera_pane_t

0x2eca,	// (0x0002129c) cams_zoom_pane_cp_ParamLimits

0x2eca,	// (0x0002129c) cams_zoom_pane_cp

0x2eee,	// (0x000212c0) image_cif_pane_ParamLimits

0x2eee,	// (0x000212c0) image_cif_pane

0x2f0c,	// (0x000212de) image_subqcif_pane

0x2f14,	// (0x000212e6) main_video_pane_g1_ParamLimits

0x2f14,	// (0x000212e6) main_video_pane_g1

0x2f34,	// (0x00021306) main_video_pane_g2_ParamLimits

0x2f34,	// (0x00021306) main_video_pane_g2

0x2f64,	// (0x00021336) main_video_pane_g3_ParamLimits

0x2f64,	// (0x00021336) main_video_pane_g3

0x2f8d,	// (0x0002135f) main_video_pane_g4_ParamLimits

0x2f8d,	// (0x0002135f) main_video_pane_g4

0x2fb6,	// (0x00021388) main_video_pane_g5_ParamLimits

0x2fb6,	// (0x00021388) main_video_pane_g5

0xa487,	// (0x00028859) main_video_pane_g6_ParamLimits

0xa487,	// (0x00028859) main_video_pane_g6

0x0006,

0xf225,	// (0x0002d5f7) main_video_pane_g_ParamLimits

0xf225,	// (0x0002d5f7) main_video_pane_g

0x2fd8,	// (0x000213aa) main_video_pane_t1_ParamLimits

0x2fd8,	// (0x000213aa) main_video_pane_t1

0xa4a1,	// (0x00028873) cams_zoom_pane_g1

0xa4aa,	// (0x0002887c) cams_zoom_pane_g2

0xa4b3,	// (0x00028885) cams_zoom_pane_g3

0xa4bc,	// (0x0002888e) cams_zoom_pane_g4

0x0003,

0xf234,	// (0x0002d606) cams_zoom_pane_g

0x3022,	// (0x000213f4) grid_cams_pane

0x3030,	// (0x00021402) linegrid_cams_pane

0x303e,	// (0x00021410) cell_cams_pane_ParamLimits

0x303e,	// (0x00021410) cell_cams_pane

0xa4c5,	// (0x00028897) cams_burst_image_pane

0xa4cd,	// (0x0002889f) cell_cams_pane_g1

0x9f5f,	// (0x00028331) grid_highlight_pane_cp03

0xa2f3,	// (0x000286c5) mp_bg_pane_g1

0x9f5f,	// (0x00028331) bg_list_pane_cp03

0xc260,	// (0x0002a632) bg_mp_pane

0xc268,	// (0x0002a63a) grid_mp_pane

0xc270,	// (0x0002a642) media_player_g1

0xc278,	// (0x0002a64a) media_player_t1

0xc286,	// (0x0002a658) media_player_t2

0xc294,	// (0x0002a666) media_player_t3

0xc2a2,	// (0x0002a674) media_player_t4

0xc2b0,	// (0x0002a682) media_player_t5

0xc2be,	// (0x0002a690) media_player_t6

0xc2cc,	// (0x0002a69e) media_player_t7

0x0006,

0xf5d0,	// (0x0002d9a2) media_player_t

0xc2da,	// (0x0002a6ac) wait_bar_pane_cp02

0xf5b5,	// (0x0002d987) main_usb_pane_t

0x5309,	// (0x000236db) cell_mp_pane

0xa2f3,	// (0x000286c5) cell_mp_pane_g1

0x9f5f,	// (0x00028331) grid_highlight_pane_cp06

0xa4d5,	// (0x000288a7) grid_skin_colour_pane

0xa4dd,	// (0x000288af) list_highlight_pane_cp03

0x315f,	// (0x00021531) skin_g1

0xa4e5,	// (0x000288b7) skin_t1

0xa4f4,	// (0x000288c6) skin_t2

0x0001,

0xf269,	// (0x0002d63b) skin_t

0x3169,	// (0x0002153b) cell_skin_colour_pane_ParamLimits

0x3169,	// (0x0002153b) cell_skin_colour_pane

0xa502,	// (0x000288d4) cell_skin_colour_pane_g1

0x31ed,	// (0x000215bf) call_video_g1_ParamLimits

0x31ed,	// (0x000215bf) call_video_g1

0x31fd,	// (0x000215cf) call_video_g2_ParamLimits

0x31fd,	// (0x000215cf) call_video_g2

0x0001,

0xf26e,	// (0x0002d640) call_video_g_ParamLimits

0xf26e,	// (0x0002d640) call_video_g

0x3257,	// (0x00021629) call_video_uplink_pane_cp1_ParamLimits

0x3257,	// (0x00021629) call_video_uplink_pane_cp1

0xa514,	// (0x000288e6) call_video_uplink_pane_cp2

0x3323,	// (0x000216f5) video_down_crop_pane_ParamLimits

0x3323,	// (0x000216f5) video_down_crop_pane

0x3415,	// (0x000217e7) video_down_pane_ParamLimits

0x3415,	// (0x000217e7) video_down_pane

0xa51c,	// (0x000288ee) video_down_subqcif_pane_ParamLimits

0xa51c,	// (0x000288ee) video_down_subqcif_pane

0xa534,	// (0x00028906) video_down_subqcif_pane_cp_ParamLimits

0xa534,	// (0x00028906) video_down_subqcif_pane_cp

0xa55a,	// (0x0002892c) im_reading_pane_ParamLimits

0xa55a,	// (0x0002892c) im_reading_pane

0x3537,	// (0x00021909) im_writing_pane_ParamLimits

0x3537,	// (0x00021909) im_writing_pane

0x3555,	// (0x00021927) im_reading_pane_t1

0xa574,	// (0x00028946) list_im_pane

0xa585,	// (0x00028957) scroll_pane_cp07

0x35b0,	// (0x00021982) im_writing_pane_t1_ParamLimits

0x35b0,	// (0x00021982) im_writing_pane_t1

0xa59e,	// (0x00028970) im_writing_pane_t2_ParamLimits

0xa59e,	// (0x00028970) im_writing_pane_t2

0x0001,

0xf278,	// (0x0002d64a) im_writing_pane_t_ParamLimits

0xf278,	// (0x0002d64a) im_writing_pane_t

0x9f5f,	// (0x00028331) input_focus_pane_cp04

0x9f5f,	// (0x00028331) input_focus_pane_cp05

0x35c2,	// (0x00021994) list_im_single_pane_ParamLimits

0x35c2,	// (0x00021994) list_im_single_pane

0x35ea,	// (0x000219bc) list_single_im_pane_t1

0x52cd,	// (0x0002369f) blid_accuracy_pane

0x52d5,	// (0x000236a7) blid_compass_pane

0x52df,	// (0x000236b1) main_location_t1

0x52ed,	// (0x000236bf) main_location_t2

0x52fb,	// (0x000236cd) main_location_t3

0x0002,

0xf5df,	// (0x0002d9b1) main_location_t

0x9f5f,	// (0x00028331) aid_levels_location

0xa2f3,	// (0x000286c5) blid_accuracy_pane_g1

0xa2f3,	// (0x000286c5) blid_accuracy_pane_g2

0x0001,

0xf2da,	// (0x0002d6ac) blid_accuracy_pane_g

0xa5e6,	// (0x000289b8) wml_content_pane

0xa624,	// (0x000289f6) wml_button_pane_ParamLimits

0xa624,	// (0x000289f6) wml_button_pane

0x35f9,	// (0x000219cb) wml_list_single_large_pane_ParamLimits

0x35f9,	// (0x000219cb) wml_list_single_large_pane

0x362a,	// (0x000219fc) wml_list_single_medium_pane_ParamLimits

0x362a,	// (0x000219fc) wml_list_single_medium_pane

0x3662,	// (0x00021a34) wml_list_single_small_pane_ParamLimits

0x3662,	// (0x00021a34) wml_list_single_small_pane

0xa638,	// (0x00028a0a) wml_selection_box_pane_ParamLimits

0xa638,	// (0x00028a0a) wml_selection_box_pane

0xa64b,	// (0x00028a1d) wml_list_single_pane_t1

0xa65a,	// (0x00028a2c) wml_list_single_medium_pane_t1

0xa669,	// (0x00028a3b) wml_list_single_large_pane_t1

0xa678,	// (0x00028a4a) input_focus_pane_cp02_ParamLimits

0xa678,	// (0x00028a4a) input_focus_pane_cp02

0xa68b,	// (0x00028a5d) wml_selection_box_pane_g1

0xa694,	// (0x00028a66) wml_selection_box_pane_t1_ParamLimits

0xa694,	// (0x00028a66) wml_selection_box_pane_t1

0xa1ba,	// (0x0002858c) bg_wml_button_pane_ParamLimits

0xa1ba,	// (0x0002858c) bg_wml_button_pane

0xa6ac,	// (0x00028a7e) wml_button_pane_g1

0xa6b4,	// (0x00028a86) wml_button_pane_t1

0xa6ac,	// (0x00028a7e) wml_button_bg_pane_g1

0xa6c4,	// (0x00028a96) wml_button_bg_pane_g2

0xa6cc,	// (0x00028a9e) wml_button_bg_pane_g3

0xa6d4,	// (0x00028aa6) wml_button_bg_pane_g4

0xa6dc,	// (0x00028aae) wml_button_bg_pane_g5

0xa6e4,	// (0x00028ab6) wml_button_bg_pane_g6

0xa6ec,	// (0x00028abe) wml_button_bg_pane_g7

0xa6f4,	// (0x00028ac6) wml_button_bg_pane_g8

0xa6fc,	// (0x00028ace) wml_button_bg_pane_g9

0x0008,

0xf27d,	// (0x0002d64f) wml_button_bg_pane_g

0x36a3,	// (0x00021a75) bg_list_pane_cp02

0xa704,	// (0x00028ad6) mce_header_pane_ParamLimits

0xa704,	// (0x00028ad6) mce_header_pane

0xa71a,	// (0x00028aec) mce_icon_pane

0xa71a,	// (0x00028aec) mce_image_pane

0xa723,	// (0x00028af5) mce_text_pane_ParamLimits

0xa723,	// (0x00028af5) mce_text_pane

0x36ad,	// (0x00021a7f) scroll_pane_cp03

0xa61c,	// (0x000289ee) scroll_pane_cp04

0xa736,	// (0x00028b08) scroll_pane_cp05_ParamLimits

0xa736,	// (0x00028b08) scroll_pane_cp05

0x36b7,	// (0x00021a89) mce_header_field_pane_ParamLimits

0x36b7,	// (0x00021a89) mce_header_field_pane

0x36d7,	// (0x00021aa9) mce_header_field_pane_2_ParamLimits

0x36d7,	// (0x00021aa9) mce_header_field_pane_2

0x36ed,	// (0x00021abf) mce_header_field_pane_3

0x36f5,	// (0x00021ac7) list_single_mce_message_pane_ParamLimits

0x36f5,	// (0x00021ac7) list_single_mce_message_pane

0x3727,	// (0x00021af9) list_single_mce_smart_pane_ParamLimits

0x3727,	// (0x00021af9) list_single_mce_smart_pane

0xa742,	// (0x00028b14) input_focus_pane_cp03

0xa74b,	// (0x00028b1d) list_header_data_pane

0x3764,	// (0x00021b36) mce_header_field_pane_t1

0x3774,	// (0x00021b46) list_single_mce_header_pane_ParamLimits

0x3774,	// (0x00021b46) list_single_mce_header_pane

0xa753,	// (0x00028b25) list_single_mce_header_pane_t1

0xa762,	// (0x00028b34) list_single_mce_message_pane_g1

0xa76a,	// (0x00028b3c) list_single_mce_message_pane_t1

0x37cb,	// (0x00021b9d) bg_cale_heading_pane_cp01_ParamLimits

0x37cb,	// (0x00021b9d) bg_cale_heading_pane_cp01

0xa778,	// (0x00028b4a) bg_cale_pane_cp02_ParamLimits

0xa778,	// (0x00028b4a) bg_cale_pane_cp02

0x380e,	// (0x00021be0) cale_month_corner_pane

0x3828,	// (0x00021bfa) cale_month_day_heading_pane_ParamLimits

0x3828,	// (0x00021bfa) cale_month_day_heading_pane

0x3883,	// (0x00021c55) cale_month_pane_g1_ParamLimits

0x3883,	// (0x00021c55) cale_month_pane_g1

0x38bb,	// (0x00021c8d) cale_month_pane_g2_ParamLimits

0x38bb,	// (0x00021c8d) cale_month_pane_g2

0x38e6,	// (0x00021cb8) cale_month_pane_g3_ParamLimits

0x38e6,	// (0x00021cb8) cale_month_pane_g3

0x3936,	// (0x00021d08) cale_month_pane_g4_ParamLimits

0x3936,	// (0x00021d08) cale_month_pane_g4

0x3986,	// (0x00021d58) cale_month_pane_g5_ParamLimits

0x3986,	// (0x00021d58) cale_month_pane_g5

0x39d6,	// (0x00021da8) cale_month_pane_g6_ParamLimits

0x39d6,	// (0x00021da8) cale_month_pane_g6

0x3a26,	// (0x00021df8) cale_month_pane_g7_ParamLimits

0x3a26,	// (0x00021df8) cale_month_pane_g7

0x3a8e,	// (0x00021e60) cale_month_pane_g8_ParamLimits

0x3a8e,	// (0x00021e60) cale_month_pane_g8

0x3af6,	// (0x00021ec8) cale_month_pane_g9_ParamLimits

0x3af6,	// (0x00021ec8) cale_month_pane_g9

0x3b54,	// (0x00021f26) cale_month_pane_g10_ParamLimits

0x3b54,	// (0x00021f26) cale_month_pane_g10

0x3bb2,	// (0x00021f84) cale_month_pane_g11_ParamLimits

0x3bb2,	// (0x00021f84) cale_month_pane_g11

0x3c06,	// (0x00021fd8) cale_month_pane_g12_ParamLimits

0x3c06,	// (0x00021fd8) cale_month_pane_g12

0x3c5c,	// (0x0002202e) cale_month_pane_g13_ParamLimits

0x3c5c,	// (0x0002202e) cale_month_pane_g13

0x000c,

0xf290,	// (0x0002d662) cale_month_pane_g_ParamLimits

0xf290,	// (0x0002d662) cale_month_pane_g

0x3cb2,	// (0x00022084) cale_month_week_pane

0x3cc7,	// (0x00022099) grid_cale_month_pane_ParamLimits

0x3cc7,	// (0x00022099) grid_cale_month_pane

0x3d19,	// (0x000220eb) cale_month_day_heading_pane_t1

0x3d9f,	// (0x00022171) cale_month_day_heading_pane_t2

0x3e30,	// (0x00022202) cale_month_day_heading_pane_t3

0x3ec1,	// (0x00022293) cale_month_day_heading_pane_t4

0x3f52,	// (0x00022324) cale_month_day_heading_pane_t5

0x3fe3,	// (0x000223b5) cale_month_day_heading_pane_t6

0x4080,	// (0x00022452) cale_month_day_heading_pane_t7

0x0006,

0xf2ab,	// (0x0002d67d) cale_month_day_heading_pane_t

0xa429,	// (0x000287fb) bg_cale_side_pane_cp01

0x4129,	// (0x000224fb) cale_month_week_pane_t1

0x4142,	// (0x00022514) cale_month_week_pane_t2

0x415b,	// (0x0002252d) cale_month_week_pane_t3

0x4174,	// (0x00022546) cale_month_week_pane_t4

0x4191,	// (0x00022563) cale_month_week_pane_t5

0x41b2,	// (0x00022584) cale_month_week_pane_t6

0x0005,

0xf2ba,	// (0x0002d68c) cale_month_week_pane_t

0x41d3,	// (0x000225a5) cell_cale_month_pane_ParamLimits

0x41d3,	// (0x000225a5) cell_cale_month_pane

0x12d0,	// (0x0001f6a2) cell_cale_month_pane_g1

0x12dc,	// (0x0001f6ae) cell_cale_month_pane_t1_ParamLimits

0x12dc,	// (0x0001f6ae) cell_cale_month_pane_t1

0xa437,	// (0x00028809) grid_highlight_pane_cp08

0xa2f3,	// (0x000286c5) main_smil_g1

0x4323,	// (0x000226f5) smil_status_pane

0xa7b7,	// (0x00028b89) smil_text_pane

0xc180,	// (0x0002a552) bg_popup_call3_rect_pane_g8

0xc188,	// (0x0002a55a) bg_popup_call3_rect_pane_g9

0x0008,

0xf573,	// (0x0002d945) bg_popup_call3_rect_pane_g

0xc3cf,	// (0x0002a7a1) smil_status_volume_pane_g1

0xa7c1,	// (0x00028b93) smil_status_pane_t1

0x1598,	// (0x0001f96a) volume_smil_pane

0xa7d8,	// (0x00028baa) list_smil_text_pane

0x4336,	// (0x00022708) scroll_pane_cp011

0x4341,	// (0x00022713) smil_text_list_pane_t1_ParamLimits

0x4341,	// (0x00022713) smil_text_list_pane_t1

0x12fc,	// (0x0001f6ce) aid_volume_smil_ParamLimits

0x12fc,	// (0x0001f6ce) aid_volume_smil

0xa2f3,	// (0x000286c5) smil_volume_pane_g1

0xa2f3,	// (0x000286c5) smil_volume_pane_g2

0x0001,

0xf2da,	// (0x0002d6ac) smil_volume_pane_g

0x29b6,	// (0x00020d88) listscroll_cale_day_pane

0xa7e2,	// (0x00028bb4) bg_cale_pane

0xa7fa,	// (0x00028bcc) list_cale_pane

0xa81d,	// (0x00028bef) scroll_pane_cp09

0xa82e,	// (0x00028c00) cale_bg_pane_g1

0xa836,	// (0x00028c08) cale_bg_pane_g2

0xa83e,	// (0x00028c10) cale_bg_pane_g3

0xa846,	// (0x00028c18) cale_bg_pane_g4

0xa84e,	// (0x00028c20) cale_bg_pane_g5

0xa856,	// (0x00028c28) cale_bg_pane_g6

0xa85e,	// (0x00028c30) cale_bg_pane_g7

0xa866,	// (0x00028c38) cale_bg_pane_g8

0xa86e,	// (0x00028c40) cale_bg_pane_g9

0x0008,

0xf2df,	// (0x0002d6b1) cale_bg_pane_g

0x43d5,	// (0x000227a7) list_cale_time_pane_ParamLimits

0x43d5,	// (0x000227a7) list_cale_time_pane

0xa87e,	// (0x00028c50) list_cale_time_pane_g1_ParamLimits

0xa87e,	// (0x00028c50) list_cale_time_pane_g1

0xa88a,	// (0x00028c5c) list_cale_time_pane_g2_ParamLimits

0xa88a,	// (0x00028c5c) list_cale_time_pane_g2

0x4401,	// (0x000227d3) list_cale_time_pane_g3_ParamLimits

0x4401,	// (0x000227d3) list_cale_time_pane_g3

0x440f,	// (0x000227e1) list_cale_time_pane_g4_ParamLimits

0x440f,	// (0x000227e1) list_cale_time_pane_g4

0x441d,	// (0x000227ef) list_cale_time_pane_g5_ParamLimits

0x441d,	// (0x000227ef) list_cale_time_pane_g5

0x0005,

0xf2f2,	// (0x0002d6c4) list_cale_time_pane_g_ParamLimits

0xf2f2,	// (0x0002d6c4) list_cale_time_pane_g

0xa8a4,	// (0x00028c76) list_cale_time_pane_t1_ParamLimits

0xa8a4,	// (0x00028c76) list_cale_time_pane_t1

0xa8cc,	// (0x00028c9e) list_cale_time_pane_t2_ParamLimits

0xa8cc,	// (0x00028c9e) list_cale_time_pane_t2

0x4741,	// (0x00022b13) aid_blid_cardinal_pane

0x4783,	// (0x00022b55) compass_pane_t4

0xa8f4,	// (0x00028cc6) list_cale_time_pane_t4_ParamLimits

0xa8f4,	// (0x00028cc6) list_cale_time_pane_t4

0x4791,	// (0x00022b63) compass_pane_t5

0x47a1,	// (0x00022b73) compass_pane_t6

0x47af,	// (0x00022b81) compass_pane_t7

0xadbf,	// (0x00029191) navi_pane_cc_t1

0xafa4,	// (0x00029376) aid_phob_thumbnail_center_pane

0x4dc6,	// (0x00023198) main_postcard_pane_g4_ParamLimits

0x0002,

0xf2ff,	// (0x0002d6d1) list_cale_time_pane_t_ParamLimits

0xf2ff,	// (0x0002d6d1) list_cale_time_pane_t

0x9bb6,	// (0x00027f88) bg_popup_window_pane_cp02_ParamLimits

0x9bb6,	// (0x00027f88) bg_popup_window_pane_cp02

0xa91c,	// (0x00028cee) heading_pane_cp01_ParamLimits

0xa91c,	// (0x00028cee) heading_pane_cp01

0xa928,	// (0x00028cfa) loc_req_pane_ParamLimits

0xa928,	// (0x00028cfa) loc_req_pane

0xa938,	// (0x00028d0a) loc_type_pane_ParamLimits

0xa938,	// (0x00028d0a) loc_type_pane

0xa94a,	// (0x00028d1c) loc_type_pane_t1_ParamLimits

0xa94a,	// (0x00028d1c) loc_type_pane_t1

0xa95c,	// (0x00028d2e) loc_type_pane_t2_ParamLimits

0xa95c,	// (0x00028d2e) loc_type_pane_t2

0xa96e,	// (0x00028d40) loc_type_pane_t3_ParamLimits

0xa96e,	// (0x00028d40) loc_type_pane_t3

0x0002,

0xf306,	// (0x0002d6d8) loc_type_pane_t_ParamLimits

0xf306,	// (0x0002d6d8) loc_type_pane_t

0xa980,	// (0x00028d52) list_loc_req_pane

0xa98a,	// (0x00028d5c) scroll_pane_cp012

0x442b,	// (0x000227fd) list_single_loc_request_popup_menu_pane_ParamLimits

0x442b,	// (0x000227fd) list_single_loc_request_popup_menu_pane

0xa995,	// (0x00028d67) list_single_loc_request_popup_menu_pane_g1_ParamLimits

0xa995,	// (0x00028d67) list_single_loc_request_popup_menu_pane_g1

0xa9a1,	// (0x00028d73) list_single_loc_request_popup_menu_pane_g2_ParamLimits

0xa9a1,	// (0x00028d73) list_single_loc_request_popup_menu_pane_g2

0x0001,

0xf30d,	// (0x0002d6df) list_single_loc_request_popup_menu_pane_g_ParamLimits

0xf30d,	// (0x0002d6df) list_single_loc_request_popup_menu_pane_g

0xa9ad,	// (0x00028d7f) list_single_loc_request_popup_menu_pane_t1_ParamLimits

0xa9ad,	// (0x00028d7f) list_single_loc_request_popup_menu_pane_t1

0x4443,	// (0x00022815) bg_popup_window_pane_cp03_ParamLimits

0x4443,	// (0x00022815) bg_popup_window_pane_cp03

0x4451,	// (0x00022823) heading_loc_req_pane_ParamLimits

0x4451,	// (0x00022823) heading_loc_req_pane

0x445d,	// (0x0002282f) popup_dyc_status_message_window_g1_ParamLimits

0x445d,	// (0x0002282f) popup_dyc_status_message_window_g1

0x4469,	// (0x0002283b) popup_dyc_status_message_window_t1_ParamLimits

0x4469,	// (0x0002283b) popup_dyc_status_message_window_t1

0x447b,	// (0x0002284d) popup_dyc_status_message_window_t2_ParamLimits

0x447b,	// (0x0002284d) popup_dyc_status_message_window_t2

0x448d,	// (0x0002285f) popup_dyc_status_message_window_t3_ParamLimits

0x448d,	// (0x0002285f) popup_dyc_status_message_window_t3

0x0002,

0xf312,	// (0x0002d6e4) popup_dyc_status_message_window_t_ParamLimits

0xf312,	// (0x0002d6e4) popup_dyc_status_message_window_t

0x9f5f,	// (0x00028331) bg_heading_pane_cp01

0xa9c3,	// (0x00028d95) heading_loc_req_pane_g1

0xa9cb,	// (0x00028d9d) heading_loc_req_pane_g2

0xa9d3,	// (0x00028da5) heading_loc_req_pane_g3

0x0002,

0xf319,	// (0x0002d6eb) heading_loc_req_pane_g

0xa9db,	// (0x00028dad) heading_loc_req_pane_t1

0xa9ea,	// (0x00028dbc) bg_popup_sub_pane_cp01_ParamLimits

0xa9ea,	// (0x00028dbc) bg_popup_sub_pane_cp01

0xa9f8,	// (0x00028dca) popup_cale_events_window_g1_ParamLimits

0xa9f8,	// (0x00028dca) popup_cale_events_window_g1

0xaa18,	// (0x00028dea) popup_cale_events_window_g2_ParamLimits

0xaa18,	// (0x00028dea) popup_cale_events_window_g2

0x0001,

0xf34d,	// (0x0002d71f) popup_cale_events_window_g_ParamLimits

0xf34d,	// (0x0002d71f) popup_cale_events_window_g

0xaa38,	// (0x00028e0a) popup_cale_events_window_t1_ParamLimits

0xaa38,	// (0x00028e0a) popup_cale_events_window_t1

0xaa4a,	// (0x00028e1c) popup_cale_events_window_t2_ParamLimits

0xaa4a,	// (0x00028e1c) popup_cale_events_window_t2

0xaa88,	// (0x00028e5a) popup_cale_events_window_t3_ParamLimits

0xaa88,	// (0x00028e5a) popup_cale_events_window_t3

0xaac2,	// (0x00028e94) popup_cale_events_window_t4_ParamLimits

0xaac2,	// (0x00028e94) popup_cale_events_window_t4

0x0003,

0xf352,	// (0x0002d724) popup_cale_events_window_t_ParamLimits

0xf352,	// (0x0002d724) popup_cale_events_window_t

0x4594,	// (0x00022966) call_type_pane

0xab6d,	// (0x00028f3f) popup_call_status_window_g1

0x45a0,	// (0x00022972) popup_call_status_window_g2

0x45ac,	// (0x0002297e) popup_call_status_window_g3

0x0002,

0xf35b,	// (0x0002d72d) popup_call_status_window_g

0xaaf8,	// (0x00028eca) call_type_pane_g1

0xab01,	// (0x00028ed3) call_type_pane_g2

0x0001,

0xf362,	// (0x0002d734) call_type_pane_g

0x9f5f,	// (0x00028331) bg_popup_sub_pane_cp02

0xab0a,	// (0x00028edc) listscroll_popup_wml_pane

0xab12,	// (0x00028ee4) list_wml_pane

0xab1c,	// (0x00028eee) scroll_pane_cp013

0xab27,	// (0x00028ef9) list_single_graphic_popup_wml_pane_ParamLimits

0xab27,	// (0x00028ef9) list_single_graphic_popup_wml_pane

0xa2f3,	// (0x000286c5) list_single_graphic_popup_wml_pane_g1

0xab3b,	// (0x00028f0d) list_single_graphic_popup_wml_pane_g2

0x0001,

0xf367,	// (0x0002d739) list_single_graphic_popup_wml_pane_g

0xab43,	// (0x00028f15) list_single_graphic_popup_wml_pane_t1

0xab59,	// (0x00028f2b) aid_call_pane

0xa1b2,	// (0x00028584) popup_clock_analogue_window_g1

0xa1b2,	// (0x00028584) popup_clock_analogue_window_g2

0x131e,	// (0x0001f6f0) popup_clock_analogue_window_g3

0x131e,	// (0x0001f6f0) popup_clock_analogue_window_g4

0xa2f3,	// (0x000286c5) popup_clock_analogue_window_g5

0x0004,

0xf36c,	// (0x0002d73e) popup_clock_analogue_window_g

0x1326,	// (0x0001f6f8) popup_clock_analogue_window_t1

0x1334,	// (0x0001f706) clock_digital_number_pane_ParamLimits

0x1334,	// (0x0001f706) clock_digital_number_pane

0x1340,	// (0x0001f712) clock_digital_number_pane_cp02_ParamLimits

0x1340,	// (0x0001f712) clock_digital_number_pane_cp02

0x134c,	// (0x0001f71e) clock_digital_number_pane_cp03_ParamLimits

0x134c,	// (0x0001f71e) clock_digital_number_pane_cp03

0x1358,	// (0x0001f72a) clock_digital_number_pane_cp04_ParamLimits

0x1358,	// (0x0001f72a) clock_digital_number_pane_cp04

0x1368,	// (0x0001f73a) clock_digital_separator_pane_ParamLimits

0x1368,	// (0x0001f73a) clock_digital_separator_pane

0x1374,	// (0x0001f746) popup_clock_digital_window_t1

0xa2f3,	// (0x000286c5) clock_digital_number_pane_g1

0xa2f3,	// (0x000286c5) clock_digital_number_pane_g2

0x0001,

0xf2da,	// (0x0002d6ac) clock_digital_number_pane_g

0xa2f3,	// (0x000286c5) clock_digital_separator_pane_g1

0xa2f3,	// (0x000286c5) clock_digital_separator_pane_g2

0x0001,

0xf2da,	// (0x0002d6ac) clock_digital_separator_pane_g

0x9f5f,	// (0x00028331) bg_popup_window_pane_cp04

0xab7b,	// (0x00028f4d) heading_pane_cp03

0xab83,	// (0x00028f55) listscroll_popup_gms_pane

0xab8b,	// (0x00028f5d) grid_large_graphic_popup_pane

0xab95,	// (0x00028f67) listscroll_popup_gms_pane_g1

0xab9d,	// (0x00028f6f) listscroll_popup_gms_pane_g2

0x0001,

0xf377,	// (0x0002d749) listscroll_popup_gms_pane_g

0xa61c,	// (0x000289ee) scroll_pane_cp014

0xaba5,	// (0x00028f77) cell_large_graphic_popup_pane_ParamLimits

0xaba5,	// (0x00028f77) cell_large_graphic_popup_pane

0xabbd,	// (0x00028f8f) cell_large_graphic_popup_pane_g1_ParamLimits

0xabbd,	// (0x00028f8f) cell_large_graphic_popup_pane_g1

0xabc9,	// (0x00028f9b) cell_large_graphic_popup_pane_g2_ParamLimits

0xabc9,	// (0x00028f9b) cell_large_graphic_popup_pane_g2

0xabd5,	// (0x00028fa7) cell_large_graphic_popup_pane_g3_ParamLimits

0xabd5,	// (0x00028fa7) cell_large_graphic_popup_pane_g3

0xabe2,	// (0x00028fb4) cell_large_graphic_popup_pane_g4_ParamLimits

0xabe2,	// (0x00028fb4) cell_large_graphic_popup_pane_g4

0x0003,

0xf37c,	// (0x0002d74e) cell_large_graphic_popup_pane_g_ParamLimits

0xf37c,	// (0x0002d74e) cell_large_graphic_popup_pane_g

0xabf2,	// (0x00028fc4) grid_highlight_pane_cp010

0xa2f3,	// (0x000286c5) bg_popup_call_pane_g1

0xabfc,	// (0x00028fce) list_single_graphic_popup_conf_pane_ParamLimits

0xabfc,	// (0x00028fce) list_single_graphic_popup_conf_pane

0xac0f,	// (0x00028fe1) list_highlight_pane_cp01

0xac18,	// (0x00028fea) list_single_graphic_popup_conf_pane_g1

0xac20,	// (0x00028ff2) list_single_graphic_popup_conf_pane_g2

0x0001,

0xf385,	// (0x0002d757) list_single_graphic_popup_conf_pane_g

0xac28,	// (0x00028ffa) list_single_graphic_popup_conf_pane_t1

0xac36,	// (0x00029008) linegrid_cams_pane_g1

0x45b8,	// (0x0002298a) linegrid_cams_pane_g2

0xa3b9,	// (0x0002878b) linegrid_cams_pane_g3

0xac3f,	// (0x00029011) linegrid_cams_pane_g4

0x45c1,	// (0x00022993) linegrid_cams_pane_g5

0x45ca,	// (0x0002299c) linegrid_cams_pane_g6

0xa46a,	// (0x0002883c) linegrid_cams_pane_g7

0x0006,

0xf38a,	// (0x0002d75c) linegrid_cams_pane_g

0xac48,	// (0x0002901a) popup_clock_analogue_window

0xac48,	// (0x0002901a) popup_clock_digital_window

0x9f5f,	// (0x00028331) popup_phob_thumbnail_window

0xa2f3,	// (0x000286c5) call_video_uplink_pane_g1

0xac51,	// (0x00029023) call_video_uplink_pane_g2

0x0001,

0xf399,	// (0x0002d76b) call_video_uplink_pane_g

0xa437,	// (0x00028809) video_uplink_pane

0xac59,	// (0x0002902b) mce_image_pane_g1

0x45d3,	// (0x000229a5) mce_image_pane_g2

0x45db,	// (0x000229ad) mce_image_pane_g3

0x45e3,	// (0x000229b5) mce_image_pane_g4

0x45eb,	// (0x000229bd) mce_image_pane_g5

0x0004,

0xf39e,	// (0x0002d770) mce_image_pane_g

0xac63,	// (0x00029035) control_top_pane_stacon_cp01_ParamLimits

0xac63,	// (0x00029035) control_top_pane_stacon_cp01

0xac77,	// (0x00029049) uni_indicator_pane_stacon_cp01_ParamLimits

0xac77,	// (0x00029049) uni_indicator_pane_stacon_cp01

0xac88,	// (0x0002905a) bg_popup_sub_pane_cp03

0x45f3,	// (0x000229c5) chi_dic_find_pane

0x45fb,	// (0x000229cd) listscroll_chi_dic_pane

0x4604,	// (0x000229d6) main_pane_chidic_g1

0xac92,	// (0x00029064) chi_dic_find_pane_t1

0xaca0,	// (0x00029072) find_chidic_pane

0xaca9,	// (0x0002907b) chi_dic_list_pane_ParamLimits

0xaca9,	// (0x0002907b) chi_dic_list_pane

0xacba,	// (0x0002908c) scroll_pane_cp020

0xacc2,	// (0x00029094) find_chidic_pane_t1

0x9f5f,	// (0x00028331) input_focus_pane_cp06

0x4617,	// (0x000229e9) list_chi_dic_pane_ParamLimits

0x4617,	// (0x000229e9) list_chi_dic_pane

0x4634,	// (0x00022a06) list_chi_dic_pane_t1_ParamLimits

0x4634,	// (0x00022a06) list_chi_dic_pane_t1

0x9f5f,	// (0x00028331) list_highlight_pane_cp020

0xacd1,	// (0x000290a3) bg_cale_heading_pane_g1

0x4647,	// (0x00022a19) bg_cale_heading_pane_g2

0x464f,	// (0x00022a21) bg_cale_heading_pane_g3

0x4657,	// (0x00022a29) bg_cale_heading_pane_g4

0x4661,	// (0x00022a33) bg_cale_heading_pane_g5

0x466b,	// (0x00022a3d) bg_cale_heading_pane_g6

0x4673,	// (0x00022a45) bg_cale_heading_pane_g7

0x467b,	// (0x00022a4d) bg_cale_heading_pane_g8

0x4685,	// (0x00022a57) bg_cale_heading_pane_g9

0x0008,

0xf3a9,	// (0x0002d77b) bg_cale_heading_pane_g

0xacd1,	// (0x000290a3) bg_cale_side_pane_g1

0x468f,	// (0x00022a61) bg_cale_side_pane_g2

0x4699,	// (0x00022a6b) bg_cale_side_pane_g3

0x46a3,	// (0x00022a75) bg_cale_side_pane_g4

0x46ad,	// (0x00022a7f) bg_cale_side_pane_g5

0x46b7,	// (0x00022a89) bg_cale_side_pane_g6

0x46c1,	// (0x00022a93) bg_cale_side_pane_g7

0x46cb,	// (0x00022a9d) bg_cale_side_pane_g8

0x46d3,	// (0x00022aa5) bg_cale_side_pane_g9

0x0008,

0xf3bc,	// (0x0002d78e) bg_cale_side_pane_g

0x46db,	// (0x00022aad) popup_call_status_window_ParamLimits

0x46db,	// (0x00022aad) popup_call_status_window

0xacd9,	// (0x000290ab) stacon_top_pane

0xace1,	// (0x000290b3) status_pane_ParamLimits

0xace1,	// (0x000290b3) status_pane

0xacf6,	// (0x000290c8) status_small_pane

0xacfe,	// (0x000290d0) control_pane

0x9f5f,	// (0x00028331) stacon_bottom_pane

0xad06,	// (0x000290d8) list_single_mce_smart_pane_t1_ParamLimits

0xad06,	// (0x000290d8) list_single_mce_smart_pane_t1

0xad19,	// (0x000290eb) list_single_mce_smart_pane_t2_ParamLimits

0xad19,	// (0x000290eb) list_single_mce_smart_pane_t2

0x0001,

0xf3cf,	// (0x0002d7a1) list_single_mce_smart_pane_t_ParamLimits

0xf3cf,	// (0x0002d7a1) list_single_mce_smart_pane_t

0x46e7,	// (0x00022ab9) compass_pane

0x46f3,	// (0x00022ac5) main_location2_pane_t1

0x4707,	// (0x00022ad9) main_location2_pane_t2

0x471b,	// (0x00022aed) main_location2_pane_t3

0x0003,

0xf3d4,	// (0x0002d7a6) main_location2_pane_t

0xad38,	// (0x0002910a) compass_pane_g1_ParamLimits

0xad38,	// (0x0002910a) compass_pane_g1

0x4765,	// (0x00022b37) compass_pane_t1

0x4774,	// (0x00022b46) compass_pane_t2

0x0005,

0xf3dd,	// (0x0002d7af) compass_pane_t

0x47bf,	// (0x00022b91) text_secondary_cp61

0xadb6,	// (0x00029188) navi_pane_cams_g5

0xae32,	// (0x00029204) navi_pane_im_t1

0xae40,	// (0x00029212) navi_pane_mp_g1_ParamLimits

0xae40,	// (0x00029212) navi_pane_mp_g1

0xae54,	// (0x00029226) navi_pane_mp_g2_ParamLimits

0xae54,	// (0x00029226) navi_pane_mp_g2

0xae60,	// (0x00029232) navi_pane_mp_g3_ParamLimits

0xae60,	// (0x00029232) navi_pane_mp_g3

0x0002,

0xf3f1,	// (0x0002d7c3) navi_pane_mp_g_ParamLimits

0xf3f1,	// (0x0002d7c3) navi_pane_mp_g

0xae6c,	// (0x0002923e) navi_pane_mp_t1

0xae7a,	// (0x0002924c) navi_pane_mp_t2

0x0002,

0xf3f8,	// (0x0002d7ca) navi_pane_mp_t

0xaee5,	// (0x000292b7) navi_pane_vt_g1

0xae6c,	// (0x0002923e) navi_pane_vt_t1

0xaeed,	// (0x000292bf) navi_slider_pane

0xaefd,	// (0x000292cf) zooming_pane

0xaf05,	// (0x000292d7) navi_slider_pane_g1

0x1391,	// (0x0001f763) navi_slider_pane_g2

0x0006,

0xf3ff,	// (0x0002d7d1) navi_slider_pane_g

0xaf29,	// (0x000292fb) aid_levels_zoom

0xaf31,	// (0x00029303) zooming_pane_g1

0xaf39,	// (0x0002930b) zooming_pane_g2

0xaf39,	// (0x0002930b) zooming_pane_g3

0x0002,

0xf40e,	// (0x0002d7e0) zooming_pane_g

0xaf41,	// (0x00029313) level_10_zoom

0xaf4a,	// (0x0002931c) level_11_zoom

0xaf53,	// (0x00029325) level_1_zoom

0xaf5c,	// (0x0002932e) level_2_zoom

0xaf65,	// (0x00029337) level_3_zoom

0xaf6e,	// (0x00029340) level_4_zoom

0xaf77,	// (0x00029349) level_5_zoom

0xaf80,	// (0x00029352) level_6_zoom

0xaf89,	// (0x0002935b) level_7_zoom

0xaf92,	// (0x00029364) level_8_zoom

0xaf9b,	// (0x0002936d) level_9_zoom

0xafac,	// (0x0002937e) popup_phob_thumbnail_window_g1

0xafb4,	// (0x00029386) popup_phob_thumbnail_window_g2

0x0001,

0xf415,	// (0x0002d7e7) popup_phob_thumbnail_window_g

0xc2e2,	// (0x0002a6b4) level_1_location

0xc2ea,	// (0x0002a6bc) level_2_location

0xc2f2,	// (0x0002a6c4) level_3_location

0xc2fa,	// (0x0002a6cc) level_4_location

0xaefd,	// (0x000292cf) level_5_location

0x47fa,	// (0x00022bcc) mce_icon_pane_g1

0x4802,	// (0x00022bd4) mce_icon_pane_g2

0x0001,

0xf41a,	// (0x0002d7ec) mce_icon_pane_g

0x480a,	// (0x00022bdc) main_mup_pane_g1_ParamLimits

0x480a,	// (0x00022bdc) main_mup_pane_g1

0x4822,	// (0x00022bf4) main_mup_pane_g2_ParamLimits

0x4822,	// (0x00022bf4) main_mup_pane_g2

0x483e,	// (0x00022c10) main_mup_pane_g3_ParamLimits

0x483e,	// (0x00022c10) main_mup_pane_g3

0x485a,	// (0x00022c2c) main_mup_pane_g4_ParamLimits

0x485a,	// (0x00022c2c) main_mup_pane_g4

0x4876,	// (0x00022c48) main_mup_pane_g5_ParamLimits

0x4876,	// (0x00022c48) main_mup_pane_g5

0x4897,	// (0x00022c69) main_mup_pane_g6_ParamLimits

0x4897,	// (0x00022c69) main_mup_pane_g6

0x48b3,	// (0x00022c85) main_mup_pane_g7_ParamLimits

0x48b3,	// (0x00022c85) main_mup_pane_g7

0x48cf,	// (0x00022ca1) main_mup_pane_g8_ParamLimits

0x48cf,	// (0x00022ca1) main_mup_pane_g8

0x48eb,	// (0x00022cbd) main_mup_pane_g9_ParamLimits

0x48eb,	// (0x00022cbd) main_mup_pane_g9

0x490a,	// (0x00022cdc) main_mup_pane_g10_ParamLimits

0x490a,	// (0x00022cdc) main_mup_pane_g10

0x4929,	// (0x00022cfb) main_mup_pane_g11_ParamLimits

0x4929,	// (0x00022cfb) main_mup_pane_g11

0x4941,	// (0x00022d13) main_mup_pane_g12_ParamLimits

0x4941,	// (0x00022d13) main_mup_pane_g12

0x494f,	// (0x00022d21) main_mup_pane_g13_ParamLimits

0x494f,	// (0x00022d21) main_mup_pane_g13

0x000c,

0xf41f,	// (0x0002d7f1) main_mup_pane_g_ParamLimits

0xf41f,	// (0x0002d7f1) main_mup_pane_g

0x4965,	// (0x00022d37) main_mup_pane_t1_ParamLimits

0x4965,	// (0x00022d37) main_mup_pane_t1

0x4982,	// (0x00022d54) main_mup_pane_t2_ParamLimits

0x4982,	// (0x00022d54) main_mup_pane_t2

0x499c,	// (0x00022d6e) main_mup_pane_t3_ParamLimits

0x499c,	// (0x00022d6e) main_mup_pane_t3

0x49b6,	// (0x00022d88) main_mup_pane_t4_ParamLimits

0x49b6,	// (0x00022d88) main_mup_pane_t4

0x49c8,	// (0x00022d9a) main_mup_pane_t5_ParamLimits

0x49c8,	// (0x00022d9a) main_mup_pane_t5

0x49da,	// (0x00022dac) main_mup_pane_t6_ParamLimits

0x49da,	// (0x00022dac) main_mup_pane_t6

0x0005,

0xf43a,	// (0x0002d80c) main_mup_pane_t_ParamLimits

0xf43a,	// (0x0002d80c) main_mup_pane_t

0x49f0,	// (0x00022dc2) mup_progress_pane_ParamLimits

0x49f0,	// (0x00022dc2) mup_progress_pane

0x49fc,	// (0x00022dce) mup_visualizer_pane_ParamLimits

0x49fc,	// (0x00022dce) mup_visualizer_pane

0x4a3a,	// (0x00022e0c) mup_volume_pane_ParamLimits

0x4a3a,	// (0x00022e0c) mup_volume_pane

0xab6d,	// (0x00028f3f) mup_visualizer_pane_g1_ParamLimits

0xab6d,	// (0x00028f3f) mup_visualizer_pane_g1

0xab6d,	// (0x00028f3f) mup_visualizer_pane_g2_ParamLimits

0xab6d,	// (0x00028f3f) mup_visualizer_pane_g2

0xad38,	// (0x0002910a) mup_visualizer_pane_g3_ParamLimits

0xad38,	// (0x0002910a) mup_visualizer_pane_g3

0x0002,

0xf447,	// (0x0002d819) mup_visualizer_pane_g_ParamLimits

0xf447,	// (0x0002d819) mup_visualizer_pane_g

0xa2f3,	// (0x000286c5) mup_volume_pane_g1

0xafc4,	// (0x00029396) mup_volume_pane_g2

0x0001,

0xf44e,	// (0x0002d820) mup_volume_pane_g

0xa2f3,	// (0x000286c5) mup_progress_pane_g1

0xafcd,	// (0x0002939f) mup_progress_pane_g2

0xafd6,	// (0x000293a8) mup_progress_pane_g3

0x0002,

0xf453,	// (0x0002d825) mup_progress_pane_g

0x9f5f,	// (0x00028331) bg_popup_window_pane_cp05

0xafdf,	// (0x000293b1) heading_pane_cp02_ParamLimits

0xafdf,	// (0x000293b1) heading_pane_cp02

0xaff9,	// (0x000293cb) list_popup_blid_pane

0xb001,	// (0x000293d3) list_blid_sat_info_pane_ParamLimits

0xb001,	// (0x000293d3) list_blid_sat_info_pane

0xb014,	// (0x000293e6) list_blid_sat_info_pane_g1

0xb01c,	// (0x000293ee) list_blid_sat_info_pane_t1

0x4b45,	// (0x00022f17) mup_equalizer_pane_ParamLimits

0x4b45,	// (0x00022f17) mup_equalizer_pane

0x4b66,	// (0x00022f38) mup_equalizer_pane_cp1_ParamLimits

0x4b66,	// (0x00022f38) mup_equalizer_pane_cp1

0x4b87,	// (0x00022f59) mup_equalizer_pane_cp2_ParamLimits

0x4b87,	// (0x00022f59) mup_equalizer_pane_cp2

0x4ba8,	// (0x00022f7a) mup_equalizer_pane_cp3_ParamLimits

0x4ba8,	// (0x00022f7a) mup_equalizer_pane_cp3

0x4bc9,	// (0x00022f9b) mup_equalizer_pane_cp4_ParamLimits

0x4bc9,	// (0x00022f9b) mup_equalizer_pane_cp4

0x4bea,	// (0x00022fbc) mup_equalizer_pane_cp5

0x4c00,	// (0x00022fd2) mup_equalizer_pane_cp6

0x4c18,	// (0x00022fea) mup_equalizer_pane_cp7

0xc200,	// (0x0002a5d2) bg_popup_call_poc_act_pane_g9

0xc208,	// (0x0002a5da) bg_popup_call_poc_act_pane_g10

0xc210,	// (0x0002a5e2) bg_popup_call_poc_act_pane_g11

0x000a,

0xa1ba,	// (0x0002858c) mup_scale_pane

0xa2f3,	// (0x000286c5) mup_scale_pane_g1

0xb02a,	// (0x000293fc) mup_scale_pane_g2

0x0006,

0xf46f,	// (0x0002d841) mup_scale_pane_g

0xb04e,	// (0x00029420) msg_data_pane

0xb056,	// (0x00029428) scroll_pane_cp017

0x4c42,	// (0x00023014) bg_list_pane_cp04_ParamLimits

0x4c42,	// (0x00023014) bg_list_pane_cp04

0xb05e,	// (0x00029430) msg_data_pane_g1

0x4c62,	// (0x00023034) msg_data_pane_g2

0x45db,	// (0x000229ad) msg_data_pane_g3

0x4c6a,	// (0x0002303c) msg_data_pane_g4

0x4c72,	// (0x00023044) msg_data_pane_g5

0x4c7a,	// (0x0002304c) msg_data_pane_g6

0x4c82,	// (0x00023054) msg_data_pane_g7

0x0006,

0xf47e,	// (0x0002d850) msg_data_pane_g

0x4c8a,	// (0x0002305c) msg_text_pane_ParamLimits

0x4c8a,	// (0x0002305c) msg_text_pane

0x4cd2,	// (0x000230a4) qrid_highlight_pane_cp011_ParamLimits

0x4cd2,	// (0x000230a4) qrid_highlight_pane_cp011

0x9f5f,	// (0x00028331) msg_body_pane

0x9f5f,	// (0x00028331) msg_header_pane

0xb066,	// (0x00029438) input_focus_pane_cp07

0xb07b,	// (0x0002944d) msg_header_pane_t1_ParamLimits

0xb07b,	// (0x0002944d) msg_header_pane_t1

0xb08d,	// (0x0002945f) msg_header_pane_t2_ParamLimits

0xb08d,	// (0x0002945f) msg_header_pane_t2

0x0001,

0xf492,	// (0x0002d864) msg_header_pane_t_ParamLimits

0xf492,	// (0x0002d864) msg_header_pane_t

0xb09f,	// (0x00029471) msg_body_pane_g1

0x4d05,	// (0x000230d7) msg_body_pane_t1_ParamLimits

0x4d05,	// (0x000230d7) msg_body_pane_t1

0xb0a7,	// (0x00029479) msg_body_pane_t2_ParamLimits

0xb0a7,	// (0x00029479) msg_body_pane_t2

0xb0b9,	// (0x0002948b) msg_body_pane_t3_ParamLimits

0xb0b9,	// (0x0002948b) msg_body_pane_t3

0x0002,

0xf497,	// (0x0002d869) msg_body_pane_t_ParamLimits

0xf497,	// (0x0002d869) msg_body_pane_t

0x13d3,	// (0x0001f7a5) main_viewer_pane_g1_ParamLimits

0x13d3,	// (0x0001f7a5) main_viewer_pane_g1

0x13df,	// (0x0001f7b1) main_viewer_pane_g2_ParamLimits

0x13df,	// (0x0001f7b1) main_viewer_pane_g2

0x4d58,	// (0x0002312a) main_viewer_pane_g3_ParamLimits

0x4d58,	// (0x0002312a) main_viewer_pane_g3

0x4d69,	// (0x0002313b) main_viewer_pane_g4_ParamLimits

0x4d69,	// (0x0002313b) main_viewer_pane_g4

0x13eb,	// (0x0001f7bd) main_viewer_pane_g5_ParamLimits

0x13eb,	// (0x0001f7bd) main_viewer_pane_g5

0x13eb,	// (0x0001f7bd) main_viewer_pane_g7_ParamLimits

0x13eb,	// (0x0001f7bd) main_viewer_pane_g7

0xa995,	// (0x00028d67) main_viewer_pane_g8_ParamLimits

0xa995,	// (0x00028d67) main_viewer_pane_g8

0x0007,

0xf4a7,	// (0x0002d879) main_viewer_pane_g_ParamLimits

0xf4a7,	// (0x0002d879) main_viewer_pane_g

0xb0cb,	// (0x0002949d) viewer_content_pane_ParamLimits

0xb0cb,	// (0x0002949d) viewer_content_pane

0x4d9a,	// (0x0002316c) main_postcard_pane_g1_ParamLimits

0x4d9a,	// (0x0002316c) main_postcard_pane_g1

0x4da8,	// (0x0002317a) main_postcard_pane_g2_ParamLimits

0x4da8,	// (0x0002317a) main_postcard_pane_g2

0x4db6,	// (0x00023188) main_postcard_pane_g3_ParamLimits

0x4db6,	// (0x00023188) main_postcard_pane_g3

0x0005,

0xf4b8,	// (0x0002d88a) main_postcard_pane_g_ParamLimits

0xf4b8,	// (0x0002d88a) main_postcard_pane_g

0x4dc6,	// (0x00023198) main_postcard_pane_g4

0xc3e2,	// (0x0002a7b4) smil_status_volume_pane_g2

0x4df2,	// (0x000231c4) postcard_pane_ParamLimits

0x4df2,	// (0x000231c4) postcard_pane

0xab6d,	// (0x00028f3f) postcard_pane_g1_ParamLimits

0xab6d,	// (0x00028f3f) postcard_pane_g1

0x4e24,	// (0x000231f6) postcard_pane_g2_ParamLimits

0x4e24,	// (0x000231f6) postcard_pane_g2

0x4e30,	// (0x00023202) postcard_pane_g3_ParamLimits

0x4e30,	// (0x00023202) postcard_pane_g3

0xb0d9,	// (0x000294ab) postcard_pane_g4_ParamLimits

0xb0d9,	// (0x000294ab) postcard_pane_g4

0x4e3c,	// (0x0002320e) postcard_pane_g5_ParamLimits

0x4e3c,	// (0x0002320e) postcard_pane_g5

0x4e48,	// (0x0002321a) postcard_pane_g6_ParamLimits

0x4e48,	// (0x0002321a) postcard_pane_g6

0xb0e7,	// (0x000294b9) postcard_pane_g7_ParamLimits

0xb0e7,	// (0x000294b9) postcard_pane_g7

0x0006,

0xf4c5,	// (0x0002d897) postcard_pane_g_ParamLimits

0xf4c5,	// (0x0002d897) postcard_pane_g

0x4e54,	// (0x00023226) main_mp2_pane_g1_ParamLimits

0x4e54,	// (0x00023226) main_mp2_pane_g1

0x4e60,	// (0x00023232) main_mp2_pane_g2_ParamLimits

0x4e60,	// (0x00023232) main_mp2_pane_g2

0x4e6c,	// (0x0002323e) main_mp2_pane_g3_ParamLimits

0x4e6c,	// (0x0002323e) main_mp2_pane_g3

0x0002,

0xf4d4,	// (0x0002d8a6) main_mp2_pane_g_ParamLimits

0xf4d4,	// (0x0002d8a6) main_mp2_pane_g

0x4e78,	// (0x0002324a) main_mp2_pane_t1_ParamLimits

0x4e78,	// (0x0002324a) main_mp2_pane_t1

0x4e8f,	// (0x00023261) main_mp2_pane_t2_ParamLimits

0x4e8f,	// (0x00023261) main_mp2_pane_t2

0x4ea1,	// (0x00023273) main_mp2_pane_t3_ParamLimits

0x4ea1,	// (0x00023273) main_mp2_pane_t3

0x0002,

0xf4db,	// (0x0002d8ad) main_mp2_pane_t_ParamLimits

0xf4db,	// (0x0002d8ad) main_mp2_pane_t

0xb0f5,	// (0x000294c7) pec_content_pane_ParamLimits

0xb0f5,	// (0x000294c7) pec_content_pane

0xa61c,	// (0x000289ee) scroll_pane_cp015

0xb107,	// (0x000294d9) pec_attribute_pane_ParamLimits

0xb107,	// (0x000294d9) pec_attribute_pane

0x4eb3,	// (0x00023285) pec_content_pane_g1_ParamLimits

0x4eb3,	// (0x00023285) pec_content_pane_g1

0xb117,	// (0x000294e9) pec_content_pane_t1_ParamLimits

0xb117,	// (0x000294e9) pec_content_pane_t1

0xb129,	// (0x000294fb) pec_content_pane_t2_ParamLimits

0xb129,	// (0x000294fb) pec_content_pane_t2

0x0001,

0xf4e2,	// (0x0002d8b4) pec_content_pane_t_ParamLimits

0xf4e2,	// (0x0002d8b4) pec_content_pane_t

0x4ebf,	// (0x00023291) list_single_graphic_pane_cp01_ParamLimits

0x4ebf,	// (0x00023291) list_single_graphic_pane_cp01

0xa1ba,	// (0x0002858c) bg_popup_sub_pane_cp04

0xb13b,	// (0x0002950d) popup_mup_playback_window_g1

0xb147,	// (0x00029519) popup_mup_playback_window_t1

0xb15c,	// (0x0002952e) popup_mup_playback_window_t2

0x0001,

0xf4e7,	// (0x0002d8b9) popup_mup_playback_window_t

0xb193,	// (0x00029565) main_image_pane_g1_ParamLimits

0xb193,	// (0x00029565) main_image_pane_g1

0xb1d6,	// (0x000295a8) scroll_pane_cp018_ParamLimits

0xb1d6,	// (0x000295a8) scroll_pane_cp018

0xb1ee,	// (0x000295c0) scroll_pane_cp016_ParamLimits

0xb1ee,	// (0x000295c0) scroll_pane_cp016

0x4f5f,	// (0x00023331) smil2_image_pane_ParamLimits

0x4f5f,	// (0x00023331) smil2_image_pane

0x4f93,	// (0x00023365) smil2_root_pane_ParamLimits

0x4f93,	// (0x00023365) smil2_root_pane

0x4fbf,	// (0x00023391) smil2_text_pane_ParamLimits

0x4fbf,	// (0x00023391) smil2_text_pane

0x9f5f,	// (0x00028331) bg_list_pane_cp06

0xb22a,	// (0x000295fc) grid_radio_pane

0x9f5f,	// (0x00028331) bg_popup_window_pane_cp06

0xb232,	// (0x00029604) main_fmradio_pane_t1

0xab7b,	// (0x00028f4d) heading_pane_cp04

0xb240,	// (0x00029612) main_fmradio_pane_t2

0xc218,	// (0x0002a5ea) popup_cale_lunar_info_window_g1

0xb24e,	// (0x00029620) main_fmradio_pane_t3

0xc220,	// (0x0002a5f2) popup_cale_lunar_info_window_g2

0xb25c,	// (0x0002962e) main_fmradio_pane_t4

0x0001,

0xb26a,	// (0x0002963c) main_fmradio_pane_t5

0x0004,

0xf5c2,	// (0x0002d994) popup_cale_lunar_info_window_g

0xf4fc,	// (0x0002d8ce) main_fmradio_pane_t

0xb278,	// (0x0002964a) wait_bar_pane_cp03

0xb280,	// (0x00029652) cell_fmradio_pane_ParamLimits

0xb280,	// (0x00029652) cell_fmradio_pane

0xb0e7,	// (0x000294b9) cell_fmradio_pane_g1_ParamLimits

0xb0e7,	// (0x000294b9) cell_fmradio_pane_g1

0x9f5f,	// (0x00028331) grid_highlight_pane_cp011

0xb293,	// (0x00029665) poc_content_pane_ParamLimits

0xb293,	// (0x00029665) poc_content_pane

0xb2a5,	// (0x00029677) scroll_pane_cp019

0x4fff,	// (0x000233d1) popup_call_poc_act_window_ParamLimits

0x4fff,	// (0x000233d1) popup_call_poc_act_window

0x500c,	// (0x000233de) popup_call_poc_inact_window_ParamLimits

0x500c,	// (0x000233de) popup_call_poc_inact_window

0xf599,	// (0x0002d96b) bg_popup_call_poc_act_pane_g

0xc190,	// (0x0002a562) bg_popup_call_poc_inact_pane_g1

0xc198,	// (0x0002a56a) bg_popup_call_poc_inact_pane_g2

0xb2ad,	// (0x0002967f) popup_call_poc_act_window_g2

0xc1a0,	// (0x0002a572) bg_popup_call_poc_inact_pane_g3

0xc1a8,	// (0x0002a57a) bg_popup_call_poc_inact_pane_g4

0xc1b0,	// (0x0002a582) bg_popup_call_poc_inact_pane_g5

0xb2b5,	// (0x00029687) popup_call_poc_act_window_t1_ParamLimits

0xb2b5,	// (0x00029687) popup_call_poc_act_window_t1

0xb2dd,	// (0x000296af) popup_call_poc_act_window_t2_ParamLimits

0xb2dd,	// (0x000296af) popup_call_poc_act_window_t2

0xb305,	// (0x000296d7) popup_call_poc_act_window_t3_ParamLimits

0xb305,	// (0x000296d7) popup_call_poc_act_window_t3

0xb32d,	// (0x000296ff) popup_call_poc_act_window_t4_ParamLimits

0xb32d,	// (0x000296ff) popup_call_poc_act_window_t4

0x0003,

0xf507,	// (0x0002d8d9) popup_call_poc_act_window_t_ParamLimits

0xf507,	// (0x0002d8d9) popup_call_poc_act_window_t

0xc1b8,	// (0x0002a58a) bg_popup_call_poc_inact_pane_g6

0xc1c0,	// (0x0002a592) bg_popup_call_poc_inact_pane_g7

0xc1c8,	// (0x0002a59a) bg_popup_call_poc_inact_pane_g8

0xb33f,	// (0x00029711) popup_call_poc_inact_window_g2

0xc1d0,	// (0x0002a5a2) bg_popup_call_poc_inact_pane_g9

0x0008,

0xf586,	// (0x0002d958) bg_popup_call_poc_inact_pane_g

0xb347,	// (0x00029719) popup_call_poc_inact_window_t1_ParamLimits

0xb347,	// (0x00029719) popup_call_poc_inact_window_t1

0xb35c,	// (0x0002972e) popup_call_poc_inact_window_t2_ParamLimits

0xb35c,	// (0x0002972e) popup_call_poc_inact_window_t2

0xb371,	// (0x00029743) popup_call_poc_inact_window_t3_ParamLimits

0xb371,	// (0x00029743) popup_call_poc_inact_window_t3

0x0002,

0xf510,	// (0x0002d8e2) popup_call_poc_inact_window_t_ParamLimits

0xf510,	// (0x0002d8e2) popup_call_poc_inact_window_t

0xc355,	// (0x0002a727) context_pane_ParamLimits

0x54c6,	// (0x00023898) signal_pane_ParamLimits

0xaefd,	// (0x000292cf) main_call2_pane

0x153c,	// (0x0001f90e) popup_phob_thumbnail2_window_ParamLimits

0x153c,	// (0x0001f90e) popup_phob_thumbnail2_window

0x13a3,	// (0x0001f775) aid_hotspot_pointer_arrow_pane

0x13ab,	// (0x0001f77d) aid_hotspot_pointer_hand_pane

0x5332,	// (0x00023704) phob_pre_status_pane_g5

0x2e26,	// (0x000211f8) cams_zoom_pane_ParamLimits

0x2e32,	// (0x00021204) image_vga_pane_ParamLimits

0x2e41,	// (0x00021213) main_camera_pane_g1_ParamLimits

0x2e4f,	// (0x00021221) main_camera_pane_g2_ParamLimits

0x2e5b,	// (0x0002122d) main_camera_pane_g3_ParamLimits

0x2e67,	// (0x00021239) main_camera_pane_g4_ParamLimits

0x2e73,	// (0x00021245) main_camera_pane_g5_ParamLimits

0x2e7f,	// (0x00021251) main_camera_pane_g6_ParamLimits

0x2e8b,	// (0x0002125d) main_camera_pane_g7_ParamLimits

0xf20f,	// (0x0002d5e1) main_camera_pane_g_ParamLimits

0x2e97,	// (0x00021269) main_camera_pane_t1_ParamLimits

0x2ea9,	// (0x0002127b) main_camera_pane_t2_ParamLimits

0xf220,	// (0x0002d5f2) main_camera_pane_t_ParamLimits

0xa1ba,	// (0x0002858c) bg_popup_preview_window_pane_cp01_ParamLimits

0xa1ba,	// (0x0002858c) bg_popup_preview_window_pane_cp01

0xb386,	// (0x00029758) popup_phob_thumbnail2_window_g1_ParamLimits

0xb386,	// (0x00029758) popup_phob_thumbnail2_window_g1

0x9f5f,	// (0x00028331) call2_cli_visual_pane

0x5028,	// (0x000233fa) popup_call2_audio_conf_window_ParamLimits

0x5028,	// (0x000233fa) popup_call2_audio_conf_window

0x503d,	// (0x0002340f) popup_call2_audio_first_window_ParamLimits

0x503d,	// (0x0002340f) popup_call2_audio_first_window

0x50db,	// (0x000234ad) popup_call2_audio_in_window_ParamLimits

0x50db,	// (0x000234ad) popup_call2_audio_in_window

0x511d,	// (0x000234ef) popup_call2_audio_out_window_ParamLimits

0x511d,	// (0x000234ef) popup_call2_audio_out_window

0x517f,	// (0x00023551) popup_call2_audio_second_window_ParamLimits

0x517f,	// (0x00023551) popup_call2_audio_second_window

0x51dd,	// (0x000235af) popup_call2_audio_wait_window_ParamLimits

0x51dd,	// (0x000235af) popup_call2_audio_wait_window

0x9f5f,	// (0x00028331) bg_popup_call2_act_pane_cp03

0xa19c,	// (0x0002856e) list_conf_pane_cp

0xb392,	// (0x00029764) popup_call2_audio_conf_window_t1

0xb3a0,	// (0x00029772) list_single_graphic_popup_conf2_pane_ParamLimits

0xb3a0,	// (0x00029772) list_single_graphic_popup_conf2_pane

0xac0f,	// (0x00028fe1) list_highlight_pane_cp04

0xb3b3,	// (0x00029785) list_single_graphic_popup_conf2_pane_g1

0xac20,	// (0x00028ff2) list_single_graphic_popup_conf2_pane_g2

0x0001,

0xf517,	// (0x0002d8e9) list_single_graphic_popup_conf2_pane_g

0xb3bd,	// (0x0002978f) list_single_graphic_popup_conf2_pane_t1

0xb3cb,	// (0x0002979d) bg_popup_call2_act_pane_cp01_ParamLimits

0xb3cb,	// (0x0002979d) bg_popup_call2_act_pane_cp01

0xb455,	// (0x00029827) call_type_pane_cp05_ParamLimits

0xb455,	// (0x00029827) call_type_pane_cp05

0xb4a9,	// (0x0002987b) popup_call2_audio_second_window_g1_ParamLimits

0xb4a9,	// (0x0002987b) popup_call2_audio_second_window_g1

0xb4fd,	// (0x000298cf) popup_call2_audio_second_window_g2_ParamLimits

0xb4fd,	// (0x000298cf) popup_call2_audio_second_window_g2

0x0002,

0xf51c,	// (0x0002d8ee) popup_call2_audio_second_window_g_ParamLimits

0xf51c,	// (0x0002d8ee) popup_call2_audio_second_window_g

0xb562,	// (0x00029934) popup_call2_audio_second_window_t1_ParamLimits

0xb562,	// (0x00029934) popup_call2_audio_second_window_t1

0xb61d,	// (0x000299ef) popup_call2_audio_second_window_t2_ParamLimits

0xb61d,	// (0x000299ef) popup_call2_audio_second_window_t2

0xb670,	// (0x00029a42) popup_call2_audio_second_window_t3_ParamLimits

0xb670,	// (0x00029a42) popup_call2_audio_second_window_t3

0x0003,

0xf523,	// (0x0002d8f5) popup_call2_audio_second_window_t_ParamLimits

0xf523,	// (0x0002d8f5) popup_call2_audio_second_window_t

0x9f5f,	// (0x00028331) bg_popup_call2_in_pane_cp02

0x9f69,	// (0x0002833b) call_type_pane_cp04

0x9f71,	// (0x00028343) popup_call2_audio_wait_window_g1

0x9f79,	// (0x0002834b) popup_call2_audio_wait_window_g2

0x0001,

0xf0fc,	// (0x0002d4ce) popup_call2_audio_wait_window_g

0x9f81,	// (0x00028353) popup_call2_audio_wait_window_t3

0xb763,	// (0x00029b35) bg_popup_call2_act_pane_ParamLimits

0xb763,	// (0x00029b35) bg_popup_call2_act_pane

0xb823,	// (0x00029bf5) call_type_pane_cp03_ParamLimits

0xb823,	// (0x00029bf5) call_type_pane_cp03

0xb887,	// (0x00029c59) popup_call2_audio_first_window_g1_ParamLimits

0xb887,	// (0x00029c59) popup_call2_audio_first_window_g1

0xb8f7,	// (0x00029cc9) popup_call2_audio_first_window_g2_ParamLimits

0xb8f7,	// (0x00029cc9) popup_call2_audio_first_window_g2

0xab6d,	// (0x00028f3f) popup_call2_audio_first_window_g3_ParamLimits

0xab6d,	// (0x00028f3f) popup_call2_audio_first_window_g3

0x0004,

0xf52c,	// (0x0002d8fe) popup_call2_audio_first_window_g_ParamLimits

0xf52c,	// (0x0002d8fe) popup_call2_audio_first_window_g

0xb9d5,	// (0x00029da7) popup_call2_audio_first_window_t1_ParamLimits

0xb9d5,	// (0x00029da7) popup_call2_audio_first_window_t1

0xbad8,	// (0x00029eaa) popup_call2_audio_first_window_t4_ParamLimits

0xbad8,	// (0x00029eaa) popup_call2_audio_first_window_t4

0xbbbb,	// (0x00029f8d) popup_call2_audio_first_window_t5_ParamLimits

0xbbbb,	// (0x00029f8d) popup_call2_audio_first_window_t5

0x0003,

0xf537,	// (0x0002d909) popup_call2_audio_first_window_t_ParamLimits

0xf537,	// (0x0002d909) popup_call2_audio_first_window_t

0xa1b2,	// (0x00028584) bg_popup_call2_act_pane_g1

0xc228,	// (0x0002a5fa) popup_cale_lunar_info_window_t1

0xc236,	// (0x0002a608) popup_cale_lunar_info_window_t2

0xc244,	// (0x0002a616) popup_cale_lunar_info_window_t3

0x9f5f,	// (0x00028331) bg_popup_call2_bubble_pane

0xbcbc,	// (0x0002a08e) bg_popup_call2_in_pane_cp01_ParamLimits

0xbcbc,	// (0x0002a08e) bg_popup_call2_in_pane_cp01

0x9c3b,	// (0x0002800d) call_type_pane_cp02

0xbd04,	// (0x0002a0d6) popup_call2_audio_out_window_g1_ParamLimits

0xbd04,	// (0x0002a0d6) popup_call2_audio_out_window_g1

0xbd30,	// (0x0002a102) popup_call2_audio_out_window_g2_ParamLimits

0xbd30,	// (0x0002a102) popup_call2_audio_out_window_g2

0xbd58,	// (0x0002a12a) popup_call2_audio_out_window_g3_ParamLimits

0xbd58,	// (0x0002a12a) popup_call2_audio_out_window_g3

0x0003,

0xf540,	// (0x0002d912) popup_call2_audio_out_window_g_ParamLimits

0xf540,	// (0x0002d912) popup_call2_audio_out_window_g

0xbd93,	// (0x0002a165) popup_call2_audio_out_window_t1_ParamLimits

0xbd93,	// (0x0002a165) popup_call2_audio_out_window_t1

0xbdf2,	// (0x0002a1c4) popup_call2_audio_out_window_t2_ParamLimits

0xbdf2,	// (0x0002a1c4) popup_call2_audio_out_window_t2

0xbe46,	// (0x0002a218) popup_call2_audio_out_window_t3_ParamLimits

0xbe46,	// (0x0002a218) popup_call2_audio_out_window_t3

0xbe5c,	// (0x0002a22e) popup_call2_audio_out_window_t4_ParamLimits

0xbe5c,	// (0x0002a22e) popup_call2_audio_out_window_t4

0xbe72,	// (0x0002a244) popup_call2_audio_out_window_t5_ParamLimits

0xbe72,	// (0x0002a244) popup_call2_audio_out_window_t5

0x0005,

0xf549,	// (0x0002d91b) popup_call2_audio_out_window_t_ParamLimits

0xf549,	// (0x0002d91b) popup_call2_audio_out_window_t

0xbed6,	// (0x0002a2a8) bg_popup_call2_in_pane_ParamLimits

0xbed6,	// (0x0002a2a8) bg_popup_call2_in_pane

0xbf32,	// (0x0002a304) popup_call2_audio_in_window_g1_ParamLimits

0xbf32,	// (0x0002a304) popup_call2_audio_in_window_g1

0xbf6a,	// (0x0002a33c) popup_call2_audio_in_window_g2_ParamLimits

0xbf6a,	// (0x0002a33c) popup_call2_audio_in_window_g2

0xbfa2,	// (0x0002a374) popup_call2_audio_in_window_g3_ParamLimits

0xbfa2,	// (0x0002a374) popup_call2_audio_in_window_g3

0x0003,

0xf556,	// (0x0002d928) popup_call2_audio_in_window_g_ParamLimits

0xf556,	// (0x0002d928) popup_call2_audio_in_window_g

0xbffa,	// (0x0002a3cc) popup_call2_audio_in_window_t1_ParamLimits

0xbffa,	// (0x0002a3cc) popup_call2_audio_in_window_t1

0xc07a,	// (0x0002a44c) popup_call2_audio_in_window_t2_ParamLimits

0xc07a,	// (0x0002a44c) popup_call2_audio_in_window_t2

0xc0fa,	// (0x0002a4cc) popup_call2_audio_in_window_t3_ParamLimits

0xc0fa,	// (0x0002a4cc) popup_call2_audio_in_window_t3

0xc114,	// (0x0002a4e6) popup_call2_audio_in_window_t4_ParamLimits

0xc114,	// (0x0002a4e6) popup_call2_audio_in_window_t4

0xc126,	// (0x0002a4f8) popup_call2_audio_in_window_t5_ParamLimits

0xc126,	// (0x0002a4f8) popup_call2_audio_in_window_t5

0xc13b,	// (0x0002a50d) popup_call2_audio_in_window_t6_ParamLimits

0xc13b,	// (0x0002a50d) popup_call2_audio_in_window_t6

0x0005,

0xf55f,	// (0x0002d931) popup_call2_audio_in_window_t_ParamLimits

0xf55f,	// (0x0002d931) popup_call2_audio_in_window_t

0xa1b2,	// (0x00028584) bg_popup_call2_in_pane_g1

0xc252,	// (0x0002a624) popup_cale_lunar_info_window_t4

0x0003,

0xf5c7,	// (0x0002d999) popup_cale_lunar_info_window_t

0xa1ba,	// (0x0002858c) bg_popup_call2_rect_pane_ParamLimits

0xa1ba,	// (0x0002858c) bg_popup_call2_rect_pane

0x9f5f,	// (0x00028331) call2_cli_visual_graphic_pane

0x9f5f,	// (0x00028331) call2_cli_visual_text_pane

0x158b,	// (0x0001f95d) smil_status_volume_pane_g3

0x0002,

0xa2f3,	// (0x000286c5) call2_cli_visual_graphic_pane_g1

0xa2f3,	// (0x000286c5) call2_cli_visual_graphic_pane_g2

0xa2f3,	// (0x000286c5) call2_cli_visual_graphic_pane_g3

0x0002,

0xf56c,	// (0x0002d93e) call2_cli_visual_graphic_pane_g

0xc150,	// (0x0002a522) bg_popup_call2_rect_pane_g1

0xa391,	// (0x00028763) bg_popup_call2_rect_pane_g2

0xc158,	// (0x0002a52a) bg_popup_call2_rect_pane_g3

0xc160,	// (0x0002a532) bg_popup_call2_rect_pane_g4

0xc168,	// (0x0002a53a) bg_popup_call2_rect_pane_g5

0xc170,	// (0x0002a542) bg_popup_call2_rect_pane_g6

0xc178,	// (0x0002a54a) bg_popup_call2_rect_pane_g7

0xc180,	// (0x0002a552) bg_popup_call2_rect_pane_g8

0xc188,	// (0x0002a55a) bg_popup_call2_rect_pane_g9

0x0008,

0xf573,	// (0x0002d945) bg_popup_call2_rect_pane_g

0xc190,	// (0x0002a562) bg_popup_call2_bubble_pane_g1

0xc198,	// (0x0002a56a) bg_popup_call2_bubble_pane_g2

0xc1a0,	// (0x0002a572) bg_popup_call2_bubble_pane_g3

0xc1a8,	// (0x0002a57a) bg_popup_call2_bubble_pane_g4

0xc1b0,	// (0x0002a582) bg_popup_call2_bubble_pane_g5

0xc1b8,	// (0x0002a58a) bg_popup_call2_bubble_pane_g6

0xc1c0,	// (0x0002a592) bg_popup_call2_bubble_pane_g7

0xc1c8,	// (0x0002a59a) bg_popup_call2_bubble_pane_g8

0xc1d0,	// (0x0002a5a2) bg_popup_call2_bubble_pane_g9

0x0008,

0xf586,	// (0x0002d958) bg_popup_call2_bubble_pane_g

0x29c6,	// (0x00020d98) aid_cale_week_size_cell_pane

0x2ebb,	// (0x0002128d) aid_cams_cif_uncrop_pane_ParamLimits

0x2ebb,	// (0x0002128d) aid_cams_cif_uncrop_pane

0x3016,	// (0x000213e8) aid_cams_size_cell_ParamLimits

0x3016,	// (0x000213e8) aid_cams_size_cell

0x3022,	// (0x000213f4) grid_cams_pane_ParamLimits

0x3030,	// (0x00021402) linegrid_cams_pane_ParamLimits

0x3215,	// (0x000215e7) call_video_pane_t1

0x3236,	// (0x00021608) call_video_pane_t2

0x0001,

0xf273,	// (0x0002d645) call_video_pane_t

0x37a5,	// (0x00021b77) aid_cale_month_size_cell_pane_ParamLimits

0x37a5,	// (0x00021b77) aid_cale_month_size_cell_pane

0xf610,	// (0x0002d9e2) smil_status_volume_pane_g

0x1598,	// (0x0001f96a) volume_smil_pane_ParamLimits

0x0cc4,	// (0x0001f096) aid_popup2_width_pane

0x28f4,	// (0x00020cc6) cell_qdial_pane_g4_ParamLimits

0x28f4,	// (0x00020cc6) cell_qdial_pane_g4

0x4741,	// (0x00022b13) aid_blid_cardinal_pane_ParamLimits

0x4751,	// (0x00022b23) aid_blid_destination_pane_ParamLimits

0x4751,	// (0x00022b23) aid_blid_destination_pane

0xa1ba,	// (0x0002858c) bg_popup_call_poc_act_pane_ParamLimits

0xa1ba,	// (0x0002858c) bg_popup_call_poc_act_pane

0xa1ba,	// (0x0002858c) bg_popup_call_poc_inact_pane_ParamLimits

0xa1ba,	// (0x0002858c) bg_popup_call_poc_inact_pane

0xc1d8,	// (0x0002a5aa) bg_popup_call_poc_act_pane_g1

0xc1e0,	// (0x0002a5b2) bg_popup_call_poc_act_pane_g2

0xc1e8,	// (0x0002a5ba) bg_popup_call_poc_act_pane_g3

0xc1a8,	// (0x0002a57a) bg_popup_call_poc_act_pane_g4

0xc1b0,	// (0x0002a582) bg_popup_call_poc_act_pane_g5

0xc1f0,	// (0x0002a5c2) bg_popup_call_poc_act_pane_g6

0xc1c0,	// (0x0002a592) bg_popup_call_poc_act_pane_g7

0xc1f8,	// (0x0002a5ca) bg_popup_call_poc_act_pane_g8

0x9f5f,	// (0x00028331) main_usb_pane

0x1475,	// (0x0001f847) popup_cale_lunar_info_window

0x3555,	// (0x00021927) im_reading_pane_t1_ParamLimits

0xa574,	// (0x00028946) list_im_pane_ParamLimits

0xa585,	// (0x00028957) scroll_pane_cp07_ParamLimits

0x9f5f,	// (0x00028331) grid_highlight_pane_cp012

0xa1ba,	// (0x0002858c) mup_scale_pane_ParamLimits

0xab6d,	// (0x00028f3f) main_usb_pane_g1_ParamLimits

0xab6d,	// (0x00028f3f) main_usb_pane_g1

0x5255,	// (0x00023627) main_usb_pane_g2_ParamLimits

0x5255,	// (0x00023627) main_usb_pane_g2

0x0001,

0xf5b0,	// (0x0002d982) main_usb_pane_g_ParamLimits

0xf5b0,	// (0x0002d982) main_usb_pane_g

0x5261,	// (0x00023633) main_usb_pane_t1_ParamLimits

0x5261,	// (0x00023633) main_usb_pane_t1

0x5273,	// (0x00023645) main_usb_pane_t2_ParamLimits

0x5273,	// (0x00023645) main_usb_pane_t2

0x5285,	// (0x00023657) main_usb_pane_t3_ParamLimits

0x5285,	// (0x00023657) main_usb_pane_t3

0x5297,	// (0x00023669) main_usb_pane_t4_ParamLimits

0x5297,	// (0x00023669) main_usb_pane_t4

0x52a9,	// (0x0002367b) main_usb_pane_t5_ParamLimits

0x52a9,	// (0x0002367b) main_usb_pane_t5

0x52bb,	// (0x0002368d) main_usb_pane_t6_ParamLimits

0x52bb,	// (0x0002368d) main_usb_pane_t6

0x0005,

0xf5b5,	// (0x0002d987) main_usb_pane_t_ParamLimits

0x46e7,	// (0x00022ab9) aid_text_placing

0x46f3,	// (0x00022ac5) main_location2_pane_t1_ParamLimits

0x4707,	// (0x00022ad9) main_location2_pane_t2_ParamLimits

0x471b,	// (0x00022aed) main_location2_pane_t3_ParamLimits

0x472f,	// (0x00022b01) main_location2_pane_t4_ParamLimits

0x472f,	// (0x00022b01) main_location2_pane_t4

0xf3d4,	// (0x0002d7a6) main_location2_pane_t_ParamLimits

0xa1f6,	// (0x000285c8) find_pinb_pane_g2_ParamLimits

0xa1f6,	// (0x000285c8) find_pinb_pane_g2

0x0001,

0xf122,	// (0x0002d4f4) find_pinb_pane_g_ParamLimits

0xf122,	// (0x0002d4f4) find_pinb_pane_g

0xa202,	// (0x000285d4) find_pinb_pane_t1_ParamLimits

0xa214,	// (0x000285e6) find_pinb_pane_t2_ParamLimits

0xf127,	// (0x0002d4f9) find_pinb_pane_t_ParamLimits

0x9f5f,	// (0x00028331) main_call3_pane

0x3d19,	// (0x000220eb) cale_month_day_heading_pane_t1_ParamLimits

0x3d9f,	// (0x00022171) cale_month_day_heading_pane_t2_ParamLimits

0x3e30,	// (0x00022202) cale_month_day_heading_pane_t3_ParamLimits

0x3ec1,	// (0x00022293) cale_month_day_heading_pane_t4_ParamLimits

0x3f52,	// (0x00022324) cale_month_day_heading_pane_t5_ParamLimits

0x3fe3,	// (0x000223b5) cale_month_day_heading_pane_t6_ParamLimits

0x4080,	// (0x00022452) cale_month_day_heading_pane_t7_ParamLimits

0xf2ab,	// (0x0002d67d) cale_month_day_heading_pane_t_ParamLimits

0xa7cf,	// (0x00028ba1) smil_status_volume_pane

0x4e0c,	// (0x000231de) postcard_address_pane_ParamLimits

0x4e0c,	// (0x000231de) postcard_address_pane

0x4e18,	// (0x000231ea) postcard_message_pane_ParamLimits

0x4e18,	// (0x000231ea) postcard_message_pane

0x521c,	// (0x000235ee) call2_cli_visual_pane_t1_ParamLimits

0x521c,	// (0x000235ee) call2_cli_visual_pane_t1

0x56b4,	// (0x00023a86) postcard_message_pane_t1_ParamLimits

0x56b4,	// (0x00023a86) postcard_message_pane_t1

0x569d,	// (0x00023a6f) postcard_address_pane_t1_ParamLimits

0x569d,	// (0x00023a6f) postcard_address_pane_t1

0x568e,	// (0x00023a60) popup_call3_audio_in_window_ParamLimits

0x568e,	// (0x00023a60) popup_call3_audio_in_window

0x5574,	// (0x00023946) bg_popup_call3_in_pane_ParamLimits

0x5574,	// (0x00023946) bg_popup_call3_in_pane

0x55d4,	// (0x000239a6) popup_call3_audio_in_window_g1_ParamLimits

0x55d4,	// (0x000239a6) popup_call3_audio_in_window_g1

0x55ec,	// (0x000239be) popup_call3_audio_in_window_g2_ParamLimits

0x55ec,	// (0x000239be) popup_call3_audio_in_window_g2

0x5604,	// (0x000239d6) popup_call3_audio_in_window_g3_ParamLimits

0x5604,	// (0x000239d6) popup_call3_audio_in_window_g3

0x0003,

0xf617,	// (0x0002d9e9) popup_call3_audio_in_window_g_ParamLimits

0xf617,	// (0x0002d9e9) popup_call3_audio_in_window_g

0x562c,	// (0x000239fe) popup_call3_audio_in_window_t1_ParamLimits

0x562c,	// (0x000239fe) popup_call3_audio_in_window_t1

0x5654,	// (0x00023a26) popup_call3_audio_in_window_t2_ParamLimits

0x5654,	// (0x00023a26) popup_call3_audio_in_window_t2

0x567c,	// (0x00023a4e) popup_call3_audio_in_window_t3_ParamLimits

0x567c,	// (0x00023a4e) popup_call3_audio_in_window_t3

0x0002,

0xf620,	// (0x0002d9f2) popup_call3_audio_in_window_t_ParamLimits

0xf620,	// (0x0002d9f2) popup_call3_audio_in_window_t

0xaefd,	// (0x000292cf) bg_popup_call3_rect_pane

0xc150,	// (0x0002a522) bg_popup_call3_rect_pane_g1

0xa391,	// (0x00028763) bg_popup_call3_rect_pane_g2

0xc158,	// (0x0002a52a) bg_popup_call3_rect_pane_g3

0xc160,	// (0x0002a532) bg_popup_call3_rect_pane_g4

0xc168,	// (0x0002a53a) bg_popup_call3_rect_pane_g5

0xc170,	// (0x0002a542) bg_popup_call3_rect_pane_g6

0xc178,	// (0x0002a54a) bg_popup_call3_rect_pane_g7

0x4a55,	// (0x00022e27) mup_visualizer_osc_pane

0xafbc,	// (0x0002938e) mup_visualizer_spec_pane

0x5594,	// (0x00023966) call3_video_qcif_pane_ParamLimits

0x5594,	// (0x00023966) call3_video_qcif_pane

0x55a4,	// (0x00023976) call3_video_qcif_uncrop_pane_ParamLimits

0x55a4,	// (0x00023976) call3_video_qcif_uncrop_pane

0x55b2,	// (0x00023984) call3_video_subqcif_pane_ParamLimits

0x55b2,	// (0x00023984) call3_video_subqcif_pane

0x55c4,	// (0x00023996) call3_video_subqcif_uncrop_pane_ParamLimits

0x55c4,	// (0x00023996) call3_video_subqcif_uncrop_pane

0x561c,	// (0x000239ee) popup_call3_audio_in_window_g4_ParamLimits

0x561c,	// (0x000239ee) popup_call3_audio_in_window_g4

0x5561,	// (0x00023933) mup_spec_half_pane

0x556a,	// (0x0002393c) mup_spec_half_pane_cp

0xc3b5,	// (0x0002a787) mup_osc_middle_pane

0xc3be,	// (0x0002a790) mup_visualizer_osc_pane_g1

0x5542,	// (0x00023914) mup_spec_bar_pane_ParamLimits

0x5542,	// (0x00023914) mup_spec_bar_pane

0xc3a2,	// (0x0002a774) mup_spec_bar_pane_g1

0xc3ac,	// (0x0002a77e) mup_spec_bar_pane_g2

0x0001,

0xf60b,	// (0x0002d9dd) mup_spec_bar_pane_g

0x29c6,	// (0x00020d98) aid_cale_week_size_cell_pane_ParamLimits

0x29db,	// (0x00020dad) bg_cale_heading_pane_ParamLimits

0xa3dc,	// (0x000287ae) bg_cale_pane_cp01_ParamLimits

0x29fd,	// (0x00020dcf) cale_week_corner_pane_ParamLimits

0x2a17,	// (0x00020de9) cale_week_day_heading_pane_ParamLimits

0x2a39,	// (0x00020e0b) cale_week_scroll_pane_g1_ParamLimits

0x2a56,	// (0x00020e28) cale_week_scroll_pane_g2_ParamLimits

0x2a69,	// (0x00020e3b) cale_week_scroll_pane_g3_ParamLimits

0x2a7c,	// (0x00020e4e) cale_week_scroll_pane_g4_ParamLimits

0x2a8f,	// (0x00020e61) cale_week_scroll_pane_g5_ParamLimits

0x2aa2,	// (0x00020e74) cale_week_scroll_pane_g6_ParamLimits

0x2ab5,	// (0x00020e87) cale_week_scroll_pane_g7_ParamLimits

0x2ac8,	// (0x00020e9a) cale_week_scroll_pane_g8_ParamLimits

0x2add,	// (0x00020eaf) cale_week_scroll_pane_g9_ParamLimits

0x2af0,	// (0x00020ec2) cale_week_scroll_pane_g10_ParamLimits

0x2b03,	// (0x00020ed5) cale_week_scroll_pane_g11_ParamLimits

0x2b16,	// (0x00020ee8) cale_week_scroll_pane_g12_ParamLimits

0x2b2d,	// (0x00020eff) cale_week_scroll_pane_g13_ParamLimits

0x2b48,	// (0x00020f1a) cale_week_scroll_pane_g14_ParamLimits

0x2b63,	// (0x00020f35) cale_week_scroll_pane_g15_ParamLimits

0xf1b3,	// (0x0002d585) cale_week_scroll_pane_g_ParamLimits

0x2b7e,	// (0x00020f50) cale_week_time_pane_ParamLimits

0x2b93,	// (0x00020f65) grid_cale_week_pane_ParamLimits

0xa3fa,	// (0x000287cc) listscroll_cale_week_pane_t1

0xa40c,	// (0x000287de) scroll_pane_cp08_ParamLimits

0x380e,	// (0x00021be0) cale_month_corner_pane_ParamLimits

0xa7a5,	// (0x00028b77) cale_month_pane_t1

0x3cb2,	// (0x00022084) cale_month_week_pane_ParamLimits

0xab6d,	// (0x00028f3f) popup_call_status_window_g1_ParamLimits

0x45a0,	// (0x00022972) popup_call_status_window_g2_ParamLimits

0x45ac,	// (0x0002297e) popup_call_status_window_g3_ParamLimits

0xf35b,	// (0x0002d72d) popup_call_status_window_g_ParamLimits

0xab51,	// (0x00028f23) aid_call2_pane

0x4cf7,	// (0x000230c9) msg_header_pane_g1

0x4e0c,	// (0x000231de) postcard_address2_pane_ParamLimits

0x4e0c,	// (0x000231de) postcard_address2_pane

0x4e18,	// (0x000231ea) postcard_message2_pane_ParamLimits

0x4e18,	// (0x000231ea) postcard_message2_pane

0x54d4,	// (0x000238a6) message2_row_pane_ParamLimits

0x54d4,	// (0x000238a6) message2_row_pane

0x54f1,	// (0x000238c3) address2_row_pane_ParamLimits

0x54f1,	// (0x000238c3) address2_row_pane

0xc370,	// (0x0002a742) postcard_message2_row_pane_g1

0xc378,	// (0x0002a74a) postcard_message2_row_pane_t1

0xc370,	// (0x0002a742) address2_row_pane_g1

0xc378,	// (0x0002a74a) address2_row_pane_t1

0x124a,	// (0x0001f61c) aid_size_cell_vorec

0x9f5f,	// (0x00028331) main_rss_pane

0x5504,	// (0x000238d6) rss_list_single_pane_ParamLimits

0x5504,	// (0x000238d6) rss_list_single_pane

0xc386,	// (0x0002a758) rss_list_single_pane_t1

0xc394,	// (0x0002a766) rss_list_single_pane_t2

0x0001,

0xf606,	// (0x0002d9d8) rss_list_single_pane_t

0x9f5f,	// (0x00028331) main_camera2_pane

0x9f5f,	// (0x00028331) main_video2_pane

0x15f6,	// (0x0001f9c8) cams_zoom_pane_cp2_ParamLimits

0x15f6,	// (0x0001f9c8) cams_zoom_pane_cp2

0x1602,	// (0x0001f9d4) image2_vga_pane_ParamLimits

0x1602,	// (0x0001f9d4) image2_vga_pane

0x1611,	// (0x0001f9e3) main_camera2_pane_g1_ParamLimits

0x1611,	// (0x0001f9e3) main_camera2_pane_g1

0x161d,	// (0x0001f9ef) main_camera2_pane_g2_ParamLimits

0x161d,	// (0x0001f9ef) main_camera2_pane_g2

0x1629,	// (0x0001f9fb) main_camera2_pane_g3_ParamLimits

0x1629,	// (0x0001f9fb) main_camera2_pane_g3

0x1635,	// (0x0001fa07) main_camera2_pane_g4_ParamLimits

0x1635,	// (0x0001fa07) main_camera2_pane_g4

0x1641,	// (0x0001fa13) main_camera2_pane_g5_ParamLimits

0x1641,	// (0x0001fa13) main_camera2_pane_g5

0x164d,	// (0x0001fa1f) main_camera2_pane_g6_ParamLimits

0x164d,	// (0x0001fa1f) main_camera2_pane_g6

0x1659,	// (0x0001fa2b) main_camera2_pane_g7_ParamLimits

0x1659,	// (0x0001fa2b) main_camera2_pane_g7

0x1665,	// (0x0001fa37) main_camera2_pane_g8_ParamLimits

0x1665,	// (0x0001fa37) main_camera2_pane_g8

0x0008,

0xf627,	// (0x0002d9f9) main_camera2_pane_g_ParamLimits

0xf627,	// (0x0002d9f9) main_camera2_pane_g

0x167d,	// (0x0001fa4f) main_camera2_pane_t1_ParamLimits

0x167d,	// (0x0001fa4f) main_camera2_pane_t1

0x168f,	// (0x0001fa61) main_camera2_pane_t2_ParamLimits

0x168f,	// (0x0001fa61) main_camera2_pane_t2

0x16a1,	// (0x0001fa73) main_camera2_pane_t3_ParamLimits

0x16a1,	// (0x0001fa73) main_camera2_pane_t3

0x16b3,	// (0x0001fa85) main_camera2_pane_t4_ParamLimits

0x16b3,	// (0x0001fa85) main_camera2_pane_t4

0x0006,

0xf63a,	// (0x0002da0c) main_camera2_pane_t_ParamLimits

0xf63a,	// (0x0002da0c) main_camera2_pane_t

0x1715,	// (0x0001fae7) cams_zoom_pane_cp4_ParamLimits

0x1715,	// (0x0001fae7) cams_zoom_pane_cp4

0x1725,	// (0x0001faf7) image2_cif_pane_ParamLimits

0x1725,	// (0x0001faf7) image2_cif_pane

0x173a,	// (0x0001fb0c) image2_subqcif_pane_ParamLimits

0x173a,	// (0x0001fb0c) image2_subqcif_pane

0x1749,	// (0x0001fb1b) main_video2_pane_g1_ParamLimits

0x1749,	// (0x0001fb1b) main_video2_pane_g1

0x175b,	// (0x0001fb2d) main_video2_pane_g2_ParamLimits

0x175b,	// (0x0001fb2d) main_video2_pane_g2

0x176b,	// (0x0001fb3d) main_video2_pane_g3_ParamLimits

0x176b,	// (0x0001fb3d) main_video2_pane_g3

0x177b,	// (0x0001fb4d) main_video2_pane_g4_ParamLimits

0x177b,	// (0x0001fb4d) main_video2_pane_g4

0x178b,	// (0x0001fb5d) main_video2_pane_g5_ParamLimits

0x178b,	// (0x0001fb5d) main_video2_pane_g5

0x179b,	// (0x0001fb6d) main_video2_pane_g6_ParamLimits

0x179b,	// (0x0001fb6d) main_video2_pane_g6

0x0005,

0xf649,	// (0x0002da1b) main_video2_pane_g_ParamLimits

0xf649,	// (0x0002da1b) main_video2_pane_g

0x17ad,	// (0x0001fb7f) main_video2_pane_t1_ParamLimits

0x17ad,	// (0x0001fb7f) main_video2_pane_t1

0x17c7,	// (0x0001fb99) main_video2_pane_t2_ParamLimits

0x17c7,	// (0x0001fb99) main_video2_pane_t2

0x17ed,	// (0x0001fbbf) main_video2_pane_t3_ParamLimits

0x17ed,	// (0x0001fbbf) main_video2_pane_t3

0x0002,

0xf656,	// (0x0002da28) main_video2_pane_t_ParamLimits

0xf656,	// (0x0002da28) main_video2_pane_t

0x5372,	// (0x00023744) call_muted_g2

0x0001,

0xf5f8,	// (0x0002d9ca) call_muted_g

0x9f5f,	// (0x00028331) main_mup2_pane

0xc3f5,	// (0x0002a7c7) main_mup2_pane_g1_ParamLimits

0xc3f5,	// (0x0002a7c7) main_mup2_pane_g1

0x56cf,	// (0x00023aa1) main_mup2_pane_g2_ParamLimits

0x56cf,	// (0x00023aa1) main_mup2_pane_g2

0x183c,	// (0x0001fc0e) main_mup_pane_g13_cp1

0x1844,	// (0x0001fc16) mup_volume_pane_cp1

0x56ef,	// (0x00023ac1) main_mup2_pane_g4_ParamLimits

0x56ef,	// (0x00023ac1) main_mup2_pane_g4

0x5704,	// (0x00023ad6) main_mup2_pane_g5_ParamLimits

0x5704,	// (0x00023ad6) main_mup2_pane_g5

0x5719,	// (0x00023aeb) main_mup2_pane_g6_ParamLimits

0x5719,	// (0x00023aeb) main_mup2_pane_g6

0x572e,	// (0x00023b00) main_mup2_pane_g7_ParamLimits

0x572e,	// (0x00023b00) main_mup2_pane_g7

0x0006,

0xf65d,	// (0x0002da2f) main_mup2_pane_g_ParamLimits

0xf65d,	// (0x0002da2f) main_mup2_pane_g

0x574a,	// (0x00023b1c) main_mup2_pane_t1_ParamLimits

0x574a,	// (0x00023b1c) main_mup2_pane_t1

0x5761,	// (0x00023b33) main_mup2_pane_t2_ParamLimits

0x5761,	// (0x00023b33) main_mup2_pane_t2

0x5778,	// (0x00023b4a) main_mup2_pane_t3_ParamLimits

0x5778,	// (0x00023b4a) main_mup2_pane_t3

0x578f,	// (0x00023b61) main_mup2_pane_t4_ParamLimits

0x578f,	// (0x00023b61) main_mup2_pane_t4

0x57a9,	// (0x00023b7b) main_mup2_pane_t5_ParamLimits

0x57a9,	// (0x00023b7b) main_mup2_pane_t5

0x57c3,	// (0x00023b95) main_mup2_pane_t6_ParamLimits

0x57c3,	// (0x00023b95) main_mup2_pane_t6

0x0005,

0xf66c,	// (0x0002da3e) main_mup2_pane_t_ParamLimits

0xf66c,	// (0x0002da3e) main_mup2_pane_t

0x57fb,	// (0x00023bcd) mup2_visualizer_pane_ParamLimits

0x57fb,	// (0x00023bcd) mup2_visualizer_pane

0x5831,	// (0x00023c03) mup_progress_pane_cp_ParamLimits

0x5831,	// (0x00023c03) mup_progress_pane_cp

0x1827,	// (0x0001fbf9) mup_volume_pane_cp_ParamLimits

0x1827,	// (0x0001fbf9) mup_volume_pane_cp

0x5848,	// (0x00023c1a) mup2_visualizer_pane_g1_ParamLimits

0x5848,	// (0x00023c1a) mup2_visualizer_pane_g1

0xc401,	// (0x0002a7d3) mup2_visualizer_pane_g2_ParamLimits

0xc401,	// (0x0002a7d3) mup2_visualizer_pane_g2

0x585d,	// (0x00023c2f) mup2_visualizer_pane_g3_ParamLimits

0x585d,	// (0x00023c2f) mup2_visualizer_pane_g3

0x0002,

0xf679,	// (0x0002da4b) mup2_visualizer_pane_g_ParamLimits

0xf679,	// (0x0002da4b) mup2_visualizer_pane_g

0xb222,	// (0x000295f4) aid_size_cell_fmradio

0x1409,	// (0x0001f7db) aid_height_parent_landcape

0xa603,	// (0x000289d5) wml_content_pane_cp

0xa60b,	// (0x000289dd) wml_tabs_pane

0xa614,	// (0x000289e6) popup_wml_miniature_window

0xa61c,	// (0x000289ee) scroll_pane_cp021

0xa630,	// (0x00028a02) wml_content_pane_comp8

0x9f5f,	// (0x00028331) bg_popup_sub_pane_cp05

0xc41f,	// (0x0002a7f1) popup_wml_miniature_window_g1

0xc427,	// (0x0002a7f9) wml_miniature_view_pane

0x586b,	// (0x00023c3d) aid_size_wml_view

0x5873,	// (0x00023c45) wml_miniature_view_pane_g1

0x587c,	// (0x00023c4e) wml_miniature_view_pane_g2

0x5885,	// (0x00023c57) wml_miniature_view_pane_g3

0x588d,	// (0x00023c5f) wml_miniature_view_pane_g4

0x5895,	// (0x00023c67) wml_miniature_view_pane_g5

0x589d,	// (0x00023c6f) wml_miniature_view_pane_g6

0x58a5,	// (0x00023c77) wml_miniature_view_pane_g7

0x58ad,	// (0x00023c7f) wml_miniature_view_pane_g8

0x0007,

0xf680,	// (0x0002da52) wml_miniature_view_pane_g

0xc3f5,	// (0x0002a7c7) background_graphic_ParamLimits

0xc3f5,	// (0x0002a7c7) background_graphic

0xc42f,	// (0x0002a801) wml_tabs_2_pane

0xc438,	// (0x0002a80a) wml_tabs_3_pane_ParamLimits

0xc438,	// (0x0002a80a) wml_tabs_3_pane

0xc44a,	// (0x0002a81c) wml_tabs_4_pane_ParamLimits

0xc44a,	// (0x0002a81c) wml_tabs_4_pane

0xc460,	// (0x0002a832) wml_tabs_5_pane_ParamLimits

0xc460,	// (0x0002a832) wml_tabs_5_pane

0xc47a,	// (0x0002a84c) wml_tabs_pane_g2_ParamLimits

0xc47a,	// (0x0002a84c) wml_tabs_pane_g2

0xc48e,	// (0x0002a860) wml_tabs_pane_g3_ParamLimits

0xc48e,	// (0x0002a860) wml_tabs_pane_g3

0x58b5,	// (0x00023c87) wml_tabs_2_active_pane_ParamLimits

0x58b5,	// (0x00023c87) wml_tabs_2_active_pane

0x58c5,	// (0x00023c97) wml_tabs_2_passive_pane_ParamLimits

0x58c5,	// (0x00023c97) wml_tabs_2_passive_pane

0x58d5,	// (0x00023ca7) wml_tabs_3_active_pane_cp_ParamLimits

0x58d5,	// (0x00023ca7) wml_tabs_3_active_pane_cp

0x58e6,	// (0x00023cb8) wml_tabs_3_passive_pane_ParamLimits

0x58e6,	// (0x00023cb8) wml_tabs_3_passive_pane

0x58f7,	// (0x00023cc9) wml_tabs_3_passive_pane_cp_ParamLimits

0x58f7,	// (0x00023cc9) wml_tabs_3_passive_pane_cp

0x5908,	// (0x00023cda) tabs_4_active_pane

0x5910,	// (0x00023ce2) tabs_4_passive_pane

0x5918,	// (0x00023cea) tabs_4_passive_pane_cp

0x5920,	// (0x00023cf2) tabs_4_passive_pane_cp2

0x524d,	// (0x0002361f) aid_height_text

0x4a1e,	// (0x00022df0) mup_volume_cont_pane_ParamLimits

0x4a1e,	// (0x00022df0) mup_volume_cont_pane

0x26ae,	// (0x00020a80) aid_size_cell_pinb

0x26b8,	// (0x00020a8a) aid_size_list_pinb

0x581a,	// (0x00023bec) mup2_volume_cont_pane_ParamLimits

0x581a,	// (0x00023bec) mup2_volume_cont_pane

0x1813,	// (0x0001fbe5) mup2_volume_cont_pane_g1_ParamLimits

0x1813,	// (0x0001fbe5) mup2_volume_cont_pane_g1

0x0cd0,	// (0x0001f0a2) aid_size_cell_touch_ParamLimits

0x0cd0,	// (0x0001f0a2) aid_size_cell_touch

0x0f58,	// (0x0001f32a) touch_pane_ParamLimits

0x0f58,	// (0x0001f32a) touch_pane

0x0f4e,	// (0x0001f320) main_rss2_pane

0xc4ab,	// (0x0002a87d) listscroll_rss2_pane

0xc4b4,	// (0x0002a886) rss2_navigation_pane

0xc4bc,	// (0x0002a88e) list_rss2_pane

0xacba,	// (0x0002908c) scroll_pane_cp22

0xc4c4,	// (0x0002a896) rss2_navigation_pane_g1

0xc4cd,	// (0x0002a89f) rss2_navigation_pane_g2

0xc4d5,	// (0x0002a8a7) rss2_navigation_pane_g3

0x0002,

0xf691,	// (0x0002da63) rss2_navigation_pane_g

0xc4dd,	// (0x0002a8af) rss2_navigation_pane_t1

0x5928,	// (0x00023cfa) rss2_list_single_pane_ParamLimits

0x5928,	// (0x00023cfa) rss2_list_single_pane

0xc4eb,	// (0x0002a8bd) rss2_list_single_pane_t2

0xc4f9,	// (0x0002a8cb) rss2_list_single_pane_t3_ParamLimits

0xc4f9,	// (0x0002a8cb) rss2_list_single_pane_t3

0xc516,	// (0x0002a8e8) rss2_list_single_pane_t4

0x432e,	// (0x00022700) smil_status_pane_g1

0x1420,	// (0x0001f7f2) main_image2_pane_ParamLimits

0x1420,	// (0x0001f7f2) main_image2_pane

0x1671,	// (0x0001fa43) main_camera2_pane_g9_ParamLimits

0x1671,	// (0x0001fa43) main_camera2_pane_g9

0x16c5,	// (0x0001fa97) main_camera2_pane_t5_ParamLimits

0x16c5,	// (0x0001fa97) main_camera2_pane_t5

0x16d7,	// (0x0001faa9) main_camera2_pane_t6_ParamLimits

0x16d7,	// (0x0001faa9) main_camera2_pane_t6

0x5960,	// (0x00023d32) main_image2_pane_g1_ParamLimits

0x5960,	// (0x00023d32) main_image2_pane_g1

0x4fe9,	// (0x000233bb) smil2_video_pane_ParamLimits

0x4fe9,	// (0x000233bb) smil2_video_pane

0x0d04,	// (0x0001f0d6) aid_zoom_text_primary_cp

0x0ef5,	// (0x0001f2c7) popup_preview_fixed_window

0xa56c,	// (0x0002893e) im_reading_pane_g1

0x15bb,	// (0x0001f98d) cams2_bc_adjust_pane_cp_ParamLimits

0x15bb,	// (0x0001f98d) cams2_bc_adjust_pane_cp

0x1707,	// (0x0001fad9) cams2_bc_adjust_pane_ParamLimits

0x1707,	// (0x0001fad9) cams2_bc_adjust_pane

0xd6b9,	// (0x0002ba8b) cams2_bc_adjust_pane_g1

0x184c,	// (0x0001fc1e) cams2_slider_pane

0x1855,	// (0x0001fc27) cams2_slider_pane_g1

0x185e,	// (0x0001fc30) cams2_slider_pane_g2

0x0006,

0xf698,	// (0x0002da6a) cams2_slider_pane_g

0x0fc9,	// (0x0001f39b) calc_display_pane_ParamLimits

0x0fe7,	// (0x0001f3b9) calc_paper_pane_ParamLimits

0x1003,	// (0x0001f3d5) grid_calc_pane_ParamLimits

0x1374,	// (0x0001f746) popup_clock_digital_window_t1_ParamLimits

0xb1bf,	// (0x00029591) main_image_pane_t1

0x0faf,	// (0x0001f381) aid_size_cell_calc_ParamLimits

0x0faf,	// (0x0001f381) aid_size_cell_calc

0x1451,	// (0x0001f823) popup_blid_sat_info2_window_ParamLimits

0x1451,	// (0x0001f823) popup_blid_sat_info2_window

0xc52c,	// (0x0002a8fe) aid_size_cell_blid

0xc534,	// (0x0002a906) bg_popup_window_pane_cp07

0xc557,	// (0x0002a929) grid_popup_blid_pane

0xc561,	// (0x0002a933) heading_pane_cp05_ParamLimits

0xc561,	// (0x0002a933) heading_pane_cp05

0xc62b,	// (0x0002a9fd) cell_popup_blid_pane_ParamLimits

0xc62b,	// (0x0002a9fd) cell_popup_blid_pane

0xc651,	// (0x0002aa23) cell_popup_blid_pane_g1

0xc659,	// (0x0002aa2b) cell_popup_blid_pane_t1

0x57e0,	// (0x00023bb2) mup2_indicator_pane_ParamLimits

0x57e0,	// (0x00023bb2) mup2_indicator_pane

0xaefd,	// (0x000292cf) mup2_visualizer_osc_pane

0xc40d,	// (0x0002a7df) mup2_visualizer_spec_pane_ParamLimits

0xc40d,	// (0x0002a7df) mup2_visualizer_spec_pane

0x596c,	// (0x00023d3e) mup2_spec_half_pane

0x5975,	// (0x00023d47) mup2_spec_half_pane_cp

0x597f,	// (0x00023d51) mup2_spec_bar_pane_ParamLimits

0x597f,	// (0x00023d51) mup2_spec_bar_pane

0xc3a2,	// (0x0002a774) mup2_spec_bar_pane_g1

0xc3ac,	// (0x0002a77e) mup2_spec_bar_pane_g2

0x0001,

0xf60b,	// (0x0002d9dd) mup2_spec_bar_pane_g

0x599e,	// (0x00023d70) mup2_osc_middle_pane

0xc3be,	// (0x0002a790) mup2_visualizer_osc_pane_g1

0x9b6c,	// (0x00027f3e) popup_number_entry_window_t1_ParamLimits

0x9b7f,	// (0x00027f51) popup_number_entry_window_t2_ParamLimits

0x9b91,	// (0x00027f63) popup_number_entry_window_t3_ParamLimits

0x25e8,	// (0x000209ba) popup_number_entry_window_t5_ParamLimits

0x25e8,	// (0x000209ba) popup_number_entry_window_t5

0xf0cd,	// (0x0002d49f) popup_number_entry_window_t_ParamLimits

0x9ba3,	// (0x00027f75) text_title_cp2_ParamLimits

0x13b3,	// (0x0001f785) aid_hotspot_pointer_text2_pane

0x13fd,	// (0x0001f7cf) main_viewer_pane_g9_ParamLimits

0x13fd,	// (0x0001f7cf) main_viewer_pane_g9

0xa7a5,	// (0x00028b77) cale_month_pane_t1_ParamLimits

0xa7e2,	// (0x00028bb4) bg_cale_pane_ParamLimits

0xa7fa,	// (0x00028bcc) list_cale_pane_ParamLimits

0xa80b,	// (0x00028bdd) listscroll_cale_day_pane_t1

0xa81d,	// (0x00028bef) scroll_pane_cp09_ParamLimits

0x4a5d,	// (0x00022e2f) main_mup_eq_pane_t1_ParamLimits

0x4a5d,	// (0x00022e2f) main_mup_eq_pane_t1

0x4a77,	// (0x00022e49) main_mup_eq_pane_t2_ParamLimits

0x4a77,	// (0x00022e49) main_mup_eq_pane_t2

0x4a8f,	// (0x00022e61) main_mup_eq_pane_t3_ParamLimits

0x4a8f,	// (0x00022e61) main_mup_eq_pane_t3

0x4aa7,	// (0x00022e79) main_mup_eq_pane_t4_ParamLimits

0x4aa7,	// (0x00022e79) main_mup_eq_pane_t4

0x4abf,	// (0x00022e91) main_mup_eq_pane_t5_ParamLimits

0x4abf,	// (0x00022e91) main_mup_eq_pane_t5

0x4ad7,	// (0x00022ea9) main_mup_eq_pane_t6_ParamLimits

0x4ad7,	// (0x00022ea9) main_mup_eq_pane_t6

0x4aeb,	// (0x00022ebd) main_mup_eq_pane_t7_ParamLimits

0x4aeb,	// (0x00022ebd) main_mup_eq_pane_t7

0x4aff,	// (0x00022ed1) main_mup_eq_pane_t8_ParamLimits

0x4aff,	// (0x00022ed1) main_mup_eq_pane_t8

0x4b15,	// (0x00022ee7) main_mup_eq_pane_t9_ParamLimits

0x4b15,	// (0x00022ee7) main_mup_eq_pane_t9

0x4b2d,	// (0x00022eff) main_mup_eq_pane_t10_ParamLimits

0x4b2d,	// (0x00022eff) main_mup_eq_pane_t10

0x0009,

0xf45a,	// (0x0002d82c) main_mup_eq_pane_t_ParamLimits

0xf45a,	// (0x0002d82c) main_mup_eq_pane_t

0x4bea,	// (0x00022fbc) mup_equalizer_pane_cp5_ParamLimits

0x4c00,	// (0x00022fd2) mup_equalizer_pane_cp6_ParamLimits

0x4c18,	// (0x00022fea) mup_equalizer_pane_cp7_ParamLimits

0x0f4e,	// (0x0001f320) main_gallery_pane

0xc3c7,	// (0x0002a799) smil2_volume_pane

0xc3cf,	// (0x0002a7a1) smil_status_volume_pane_g1_ParamLimits

0xc3e2,	// (0x0002a7b4) smil_status_volume_pane_g2_ParamLimits

0x158b,	// (0x0001f95d) smil_status_volume_pane_g3_ParamLimits

0xf610,	// (0x0002d9e2) smil_status_volume_pane_g_ParamLimits

0xc534,	// (0x0002a906) bg_popup_window_pane_cp07_ParamLimits

0xc542,	// (0x0002a914) blid_firmament_pane

0x59a7,	// (0x00023d79) aid_size_cell_gallery_ParamLimits

0x59a7,	// (0x00023d79) aid_size_cell_gallery

0x59b5,	// (0x00023d87) grid_gallery_pane_ParamLimits

0x59b5,	// (0x00023d87) grid_gallery_pane

0x59c5,	// (0x00023d97) cell_gallery_pane_ParamLimits

0x59c5,	// (0x00023d97) cell_gallery_pane

0xc667,	// (0x0002aa39) bg_cell_gallery_focus_pane_ParamLimits

0xc667,	// (0x0002aa39) bg_cell_gallery_focus_pane

0xc679,	// (0x0002aa4b) cell_gallery_pane_g1_ParamLimits

0xc679,	// (0x0002aa4b) cell_gallery_pane_g1

0x5a13,	// (0x00023de5) cell_gallery_pane_g2_ParamLimits

0x5a13,	// (0x00023de5) cell_gallery_pane_g2

0x5a20,	// (0x00023df2) cell_gallery_pane_g3_ParamLimits

0x5a20,	// (0x00023df2) cell_gallery_pane_g3

0xc685,	// (0x0002aa57) cell_gallery_pane_g4_ParamLimits

0xc685,	// (0x0002aa57) cell_gallery_pane_g4

0x0003,

0xf6be,	// (0x0002da90) cell_gallery_pane_g_ParamLimits

0xf6be,	// (0x0002da90) cell_gallery_pane_g

0xc691,	// (0x0002aa63) bg_cell_gallery_focus_pane_g1

0xc699,	// (0x0002aa6b) bg_cell_gallery_focus_pane_g2

0xc6a1,	// (0x0002aa73) bg_cell_gallery_focus_pane_g3

0xc6a9,	// (0x0002aa7b) bg_cell_gallery_focus_pane_g4

0xc6b1,	// (0x0002aa83) bg_cell_gallery_focus_pane_g5

0xc6b9,	// (0x0002aa8b) bg_cell_gallery_focus_pane_g6

0xc6c1,	// (0x0002aa93) bg_cell_gallery_focus_pane_g7

0xc6c9,	// (0x0002aa9b) bg_cell_gallery_focus_pane_g8

0x0007,

0xf6c7,	// (0x0002da99) bg_cell_gallery_focus_pane_g

0xc6d1,	// (0x0002aaa3) aid_firma_cardinal

0xc6e5,	// (0x0002aab7) blid_firmament_pane_t1

0xc6fc,	// (0x0002aace) blid_firmament_pane_t2

0xc713,	// (0x0002aae5) blid_firmament_pane_t3

0xc72a,	// (0x0002aafc) blid_firmament_pane_t4

0x0003,

0xf6d8,	// (0x0002daaa) blid_firmament_pane_t

0xc741,	// (0x0002ab13) blid_sat_info_pane

0xc751,	// (0x0002ab23) blid_sat_info_pane_g1

0xc751,	// (0x0002ab23) blid_sat_info_pane_g2

0x0001,

0xf6e1,	// (0x0002dab3) blid_sat_info_pane_g

0xc75b,	// (0x0002ab2d) blid_sat_info_pane_t1

0xc769,	// (0x0002ab3b) smil2_volume_content_pane

0xc772,	// (0x0002ab44) smil2_volume_pane_g1

0xa328,	// (0x000286fa) smil2_volume_content_pane_g1

0xc77a,	// (0x0002ab4c) smil2_volume_content_pane_g2

0xc783,	// (0x0002ab55) smil2_volume_content_pane_g3

0xc78c,	// (0x0002ab5e) smil2_volume_content_pane_g4

0xc795,	// (0x0002ab67) smil2_volume_content_pane_g5

0xc79e,	// (0x0002ab70) smil2_volume_content_pane_g6

0xc7a7,	// (0x0002ab79) smil2_volume_content_pane_g7

0xc7b0,	// (0x0002ab82) smil2_volume_content_pane_g8

0xc7b9,	// (0x0002ab8b) smil2_volume_content_pane_g9

0xc7c2,	// (0x0002ab94) smil2_volume_content_pane_g10

0x0009,

0xf6e6,	// (0x0002dab8) smil2_volume_content_pane_g

0x2c18,	// (0x00020fea) cale_week_day_heading_pane_t1_ParamLimits

0x2c53,	// (0x00021025) cale_week_day_heading_pane_t2_ParamLimits

0x2c8e,	// (0x00021060) cale_week_day_heading_pane_t3_ParamLimits

0x2cc9,	// (0x0002109b) cale_week_day_heading_pane_t4_ParamLimits

0x2d04,	// (0x000210d6) cale_week_day_heading_pane_t5_ParamLimits

0x2d3f,	// (0x00021111) cale_week_day_heading_pane_t6_ParamLimits

0x2d7a,	// (0x0002114c) cale_week_day_heading_pane_t7_ParamLimits

0xf1d2,	// (0x0002d5a4) cale_week_day_heading_pane_t_ParamLimits

0xa429,	// (0x000287fb) bg_cale_side_pane_ParamLimits

0x115a,	// (0x0001f52c) cale_week_time_pane_t1_ParamLimits

0x1174,	// (0x0001f546) cale_week_time_pane_t2_ParamLimits

0x118e,	// (0x0001f560) cale_week_time_pane_t3_ParamLimits

0x11a8,	// (0x0001f57a) cale_week_time_pane_t4_ParamLimits

0x11c2,	// (0x0001f594) cale_week_time_pane_t5_ParamLimits

0x11de,	// (0x0001f5b0) cale_week_time_pane_t6_ParamLimits

0x1200,	// (0x0001f5d2) cale_week_time_pane_t7_ParamLimits

0x1224,	// (0x0001f5f6) cale_week_time_pane_t8_ParamLimits

0xf1e1,	// (0x0002d5b3) cale_week_time_pane_t_ParamLimits

0x2db5,	// (0x00021187) cell_cale_week_pane_g2_ParamLimits

0xa429,	// (0x000287fb) bg_cale_side_pane_cp01_ParamLimits

0x4129,	// (0x000224fb) cale_month_week_pane_t1_ParamLimits

0x4142,	// (0x00022514) cale_month_week_pane_t2_ParamLimits

0x415b,	// (0x0002252d) cale_month_week_pane_t3_ParamLimits

0x4174,	// (0x00022546) cale_month_week_pane_t4_ParamLimits

0x4191,	// (0x00022563) cale_month_week_pane_t5_ParamLimits

0x41b2,	// (0x00022584) cale_month_week_pane_t6_ParamLimits

0xf2ba,	// (0x0002d68c) cale_month_week_pane_t_ParamLimits

0x12d0,	// (0x0001f6a2) cell_cale_month_pane_g1_ParamLimits

0x0f4e,	// (0x0001f320) main_cale_event_viewer_pane

0x9b42,	// (0x00027f14) listscroll_cale_event_viewer_pane

0xc7cb,	// (0x0002ab9d) list_cale_ev_pane

0xc7d3,	// (0x0002aba5) scroll_pane_cp023

0xc7df,	// (0x0002abb1) field_cale_ev_pane_ParamLimits

0xc7df,	// (0x0002abb1) field_cale_ev_pane

0xc7fb,	// (0x0002abcd) field_cale_ev_content_pane_ParamLimits

0xc7fb,	// (0x0002abcd) field_cale_ev_content_pane

0xc807,	// (0x0002abd9) field_cale_ev_pane_g1_ParamLimits

0xc807,	// (0x0002abd9) field_cale_ev_pane_g1

0xc813,	// (0x0002abe5) field_cale_ev_pane_g2_ParamLimits

0xc813,	// (0x0002abe5) field_cale_ev_pane_g2

0xc82b,	// (0x0002abfd) field_cale_ev_pane_g3_ParamLimits

0xc82b,	// (0x0002abfd) field_cale_ev_pane_g3

0x0002,

0xf6fb,	// (0x0002dacd) field_cale_ev_pane_g_ParamLimits

0xf6fb,	// (0x0002dacd) field_cale_ev_pane_g

0xc843,	// (0x0002ac15) field_cale_ev_pane_t1_ParamLimits

0xc843,	// (0x0002ac15) field_cale_ev_pane_t1

0xc85a,	// (0x0002ac2c) field_cale_ev_content_pane_t1_ParamLimits

0xc85a,	// (0x0002ac2c) field_cale_ev_content_pane_t1

0x4cee,	// (0x000230c0) bg_button_pane_cp01

0x29b6,	// (0x00020d88) listscroll_cale_week_pane_ParamLimits

0xa3d3,	// (0x000287a5) popup_toolbar_window_cp01

0xa3fa,	// (0x000287cc) listscroll_cale_week_pane_t1_ParamLimits

0x29b6,	// (0x00020d88) listscroll_cale_day_pane_ParamLimits

0xa3d3,	// (0x000287a5) popup_toolbar_window_cp02

0xa80b,	// (0x00028bdd) listscroll_cale_day_pane_t1_ParamLimits

0x29b6,	// (0x00020d88) main_cale_month_pane_ParamLimits

0x154e,	// (0x0001f920) popup_toolbar_window_cp03_ParamLimits

0x154e,	// (0x0001f920) popup_toolbar_window_cp03

0x4efb,	// (0x000232cd) main_image_pane_g2_ParamLimits

0x4efb,	// (0x000232cd) main_image_pane_g2

0x4f07,	// (0x000232d9) main_image_pane_g3_ParamLimits

0x4f07,	// (0x000232d9) main_image_pane_g3

0x0002,

0xf4ec,	// (0x0002d8be) main_image_pane_g_ParamLimits

0xf4ec,	// (0x0002d8be) main_image_pane_g

0xb1bf,	// (0x00029591) main_image_pane_t1_ParamLimits

0x4f13,	// (0x000232e5) main_image_pane_t2_ParamLimits

0x4f13,	// (0x000232e5) main_image_pane_t2

0x4f25,	// (0x000232f7) main_image_pane_t3_ParamLimits

0x4f25,	// (0x000232f7) main_image_pane_t3

0x4f37,	// (0x00023309) main_image_pane_t4_ParamLimits

0x4f37,	// (0x00023309) main_image_pane_t4

0x0003,

0xf4f3,	// (0x0002d8c5) main_image_pane_t_ParamLimits

0xf4f3,	// (0x0002d8c5) main_image_pane_t

0x4f49,	// (0x0002331b) popup_image_details_window_cp01

0x4f53,	// (0x00023325) popup_toobar_trans_pane_cp01_ParamLimits

0x4f53,	// (0x00023325) popup_toobar_trans_pane_cp01

0x14a4,	// (0x0001f876) popup_image_details_window_ParamLimits

0x14a4,	// (0x0001f876) popup_image_details_window

0x14b2,	// (0x0001f884) popup_image_focus_window

0x15ad,	// (0x0001f97f) camera2_autofocus_pane_ParamLimits

0x15ad,	// (0x0001f97f) camera2_autofocus_pane

0x9b42,	// (0x00027f14) bg_popup_sub_pane_cp06

0xc877,	// (0x0002ac49) popup_image_focus_window_g1

0xc87f,	// (0x0002ac51) popup_image_focus_window_g2

0xc887,	// (0x0002ac59) popup_image_focus_window_g3

0xc88f,	// (0x0002ac61) popup_image_focus_window_g4

0x0003,

0xf702,	// (0x0002dad4) popup_image_focus_window_g

0xc897,	// (0x0002ac69) popup_image_focus_window_t1

0xc8a5,	// (0x0002ac77) popup_image_focus_window_t2

0xc8b5,	// (0x0002ac87) popup_image_focus_window_t3

0x0002,

0xf70b,	// (0x0002dadd) popup_image_focus_window_t

0xc8c3,	// (0x0002ac95) camera2_autofocus_pane_g1

0xa3ab,	// (0x0002877d) bg_tb_trans_pane_cp01

0xc8d1,	// (0x0002aca3) popup_image_details_window_g1

0xc8e4,	// (0x0002acb6) popup_image_details_window_g2

0x0002,

0xf71d,	// (0x0002daef) popup_image_details_window_g

0xc90d,	// (0x0002acdf) popup_image_details_window_t1

0xc91f,	// (0x0002acf1) popup_image_details_window_t2

0xc938,	// (0x0002ad0a) popup_image_details_window_t3

0xc94c,	// (0x0002ad1e) popup_image_details_window_t4

0xc967,	// (0x0002ad39) popup_image_details_window_t5

0x0004,

0xf724,	// (0x0002daf6) popup_image_details_window_t

0xa28a,	// (0x0002865c) bg_calc_paper_pane_ParamLimits

0x0f4e,	// (0x0001f320) grid_highlight_pane_cp013

0x102f,	// (0x0001f401) list_calc_pane_ParamLimits

0x1041,	// (0x0001f413) scroll_pane_cp024

0xa29e,	// (0x00028670) bg_calc_display_pane_ParamLimits

0x1049,	// (0x0001f41b) calc_display_pane_t1_ParamLimits

0x105e,	// (0x0001f430) calc_display_pane_t2_ParamLimits

0x1073,	// (0x0001f445) calc_display_pane_t3_ParamLimits

0xf154,	// (0x0002d526) calc_display_pane_t_ParamLimits

0x10dc,	// (0x0001f4ae) cell_calc_pane_g2

0x0001,

0xf171,	// (0x0002d543) cell_calc_pane_g

0x10e5,	// (0x0001f4b7) cell_calc_pane_t1

0xa2fd,	// (0x000286cf) grid_highlight_pane_cp02_ParamLimits

0xa313,	// (0x000286e5) toolbar_button_pane_cp01_ParamLimits

0xa313,	// (0x000286e5) toolbar_button_pane_cp01

0xb204,	// (0x000295d6) temp_image_control_pane_ParamLimits

0xb204,	// (0x000295d6) temp_image_control_pane

0x1420,	// (0x0001f7f2) main_mp3_pane

0xc981,	// (0x0002ad53) temp_image_control_pane_g1_ParamLimits

0xc981,	// (0x0002ad53) temp_image_control_pane_g1

0xc98f,	// (0x0002ad61) temp_image_control_pane_g2_ParamLimits

0xc98f,	// (0x0002ad61) temp_image_control_pane_g2

0xc9a1,	// (0x0002ad73) temp_image_control_pane_g3_ParamLimits

0xc9a1,	// (0x0002ad73) temp_image_control_pane_g3

0x5a5d,	// (0x00023e2f) temp_image_control_pane_g4_ParamLimits

0x5a5d,	// (0x00023e2f) temp_image_control_pane_g4

0x0003,

0xf72f,	// (0x0002db01) temp_image_control_pane_g_ParamLimits

0xf72f,	// (0x0002db01) temp_image_control_pane_g

0xc981,	// (0x0002ad53) main_mp3_pane_g1

0x5a6e,	// (0x00023e40) main_mp3_pane_g2

0x0007,

0xf738,	// (0x0002db0a) main_mp3_pane_g

0xc9e4,	// (0x0002adb6) main_mp3_pane_t1

0xa47b,	// (0x0002884d) main_camera_pane_g8_ParamLimits

0xa47b,	// (0x0002884d) main_camera_pane_g8

0x2fcc,	// (0x0002139e) main_video_pane_g7_ParamLimits

0x2fcc,	// (0x0002139e) main_video_pane_g7

0x16f5,	// (0x0001fac7) main_camera2_pane_t7_ParamLimits

0x16f5,	// (0x0001fac7) main_camera2_pane_t7

0xa5c3,	// (0x00028995) scroll_pane_cp025_ParamLimits

0xa5c3,	// (0x00028995) scroll_pane_cp025

0xa5d7,	// (0x000289a9) scroll_pane_cp026_ParamLimits

0xa5d7,	// (0x000289a9) scroll_pane_cp026

0xa5e6,	// (0x000289b8) wml_content_pane_ParamLimits

0x0f4e,	// (0x0001f320) main_touch_calib_pane

0x5b12,	// (0x00023ee4) main_touch_calib_pane_g1

0x5b1e,	// (0x00023ef0) main_touch_calib_pane_g2

0x5b2a,	// (0x00023efc) main_touch_calib_pane_g3

0x5b36,	// (0x00023f08) main_touch_calib_pane_g4

0x0003,

0xf756,	// (0x0002db28) main_touch_calib_pane_g

0x5b42,	// (0x00023f14) main_touch_calib_pane_t1

0x5b5b,	// (0x00023f2d) main_touch_calib_pane_t2

0x0004,

0xf75f,	// (0x0002db31) main_touch_calib_pane_t

0xad98,	// (0x0002916a) mup_progress_pane_cp02

0xadcd,	// (0x0002919f) navi_pane_g1

0xae88,	// (0x0002925a) navi_pane_mp_t3

0x1420,	// (0x0001f7f2) main_mp3_pane_ParamLimits

0x5488,	// (0x0002385a) navi_pane_ParamLimits

0xc981,	// (0x0002ad53) main_mp3_pane_g1_ParamLimits

0x5a6e,	// (0x00023e40) main_mp3_pane_g2_ParamLimits

0x5a7a,	// (0x00023e4c) main_mp3_pane_g3_ParamLimits

0x5a7a,	// (0x00023e4c) main_mp3_pane_g3

0x5a86,	// (0x00023e58) main_mp3_pane_g4_ParamLimits

0x5a86,	// (0x00023e58) main_mp3_pane_g4

0xc9b1,	// (0x0002ad83) main_mp3_pane_g5_ParamLimits

0xc9b1,	// (0x0002ad83) main_mp3_pane_g5

0xc9bf,	// (0x0002ad91) main_mp3_pane_g6_ParamLimits

0xc9bf,	// (0x0002ad91) main_mp3_pane_g6

0xc9cc,	// (0x0002ad9e) main_mp3_pane_g7_ParamLimits

0xc9cc,	// (0x0002ad9e) main_mp3_pane_g7

0xc9d8,	// (0x0002adaa) main_mp3_pane_g8_ParamLimits

0xc9d8,	// (0x0002adaa) main_mp3_pane_g8

0xf738,	// (0x0002db0a) main_mp3_pane_g_ParamLimits

0x5a92,	// (0x00023e64) main_mp3_pane_t2

0x5aa2,	// (0x00023e74) main_mp3_pane_t3

0xc9f2,	// (0x0002adc4) main_mp3_pane_t4

0xca00,	// (0x0002add2) main_mp3_pane_t5

0x0005,

0xf749,	// (0x0002db1b) main_mp3_pane_t

0xca0e,	// (0x0002ade0) mup_progress_pane_cp01

0x0d04,	// (0x0001f0d6) aid_zoom_text_secondary2

0xc7cb,	// (0x0002ab9d) list_cale_ev2_pane

0xc7d3,	// (0x0002aba5) scroll_pane_cp023_ParamLimits

0x5bb6,	// (0x00023f88) field_cale_ev2_pane_ParamLimits

0x5bb6,	// (0x00023f88) field_cale_ev2_pane

0xca16,	// (0x0002ade8) field_cale_ev2_pane_g1_ParamLimits

0xca16,	// (0x0002ade8) field_cale_ev2_pane_g1

0xca22,	// (0x0002adf4) field_cale_ev2_pane_g2_ParamLimits

0xca22,	// (0x0002adf4) field_cale_ev2_pane_g2

0xca3a,	// (0x0002ae0c) field_cale_ev2_pane_g3_ParamLimits

0xca3a,	// (0x0002ae0c) field_cale_ev2_pane_g3

0x0003,

0xf76a,	// (0x0002db3c) field_cale_ev2_pane_g_ParamLimits

0xf76a,	// (0x0002db3c) field_cale_ev2_pane_g

0xca5e,	// (0x0002ae30) field_cale_ev2_pane_t1_ParamLimits

0xca5e,	// (0x0002ae30) field_cale_ev2_pane_t1

0xca75,	// (0x0002ae47) field_cale_ev2_pane_t2_ParamLimits

0xca75,	// (0x0002ae47) field_cale_ev2_pane_t2

0x0001,

0xf773,	// (0x0002db45) field_cale_ev2_pane_t_ParamLimits

0xf773,	// (0x0002db45) field_cale_ev2_pane_t

0x4dd6,	// (0x000231a8) main_postcard_pane_g5_ParamLimits

0x4dd6,	// (0x000231a8) main_postcard_pane_g5

0x4de4,	// (0x000231b6) main_postcard_pane_g6_ParamLimits

0x4de4,	// (0x000231b6) main_postcard_pane_g6

0x2e16,	// (0x000211e8) camera2_autofocus_pane_cp_ParamLimits

0x2e16,	// (0x000211e8) camera2_autofocus_pane_cp

0x1420,	// (0x0001f7f2) main_mup3_pane

0x5c04,	// (0x00023fd6) main_mup3_pane_g1_ParamLimits

0x5c04,	// (0x00023fd6) main_mup3_pane_g1

0x5c25,	// (0x00023ff7) main_mup3_pane_g2_ParamLimits

0x5c25,	// (0x00023ff7) main_mup3_pane_g2

0x5ca1,	// (0x00024073) main_mup3_pane_g3_ParamLimits

0x5ca1,	// (0x00024073) main_mup3_pane_g3

0x5ce4,	// (0x000240b6) main_mup3_pane_g4_ParamLimits

0x5ce4,	// (0x000240b6) main_mup3_pane_g4

0x5d27,	// (0x000240f9) main_mup3_pane_g5_ParamLimits

0x5d27,	// (0x000240f9) main_mup3_pane_g5

0x5d6c,	// (0x0002413e) main_mup3_pane_g6_ParamLimits

0x5d6c,	// (0x0002413e) main_mup3_pane_g6

0xca8a,	// (0x0002ae5c) main_mup3_pane_g7_ParamLimits

0xca8a,	// (0x0002ae5c) main_mup3_pane_g7

0x0007,

0xf783,	// (0x0002db55) main_mup3_pane_g_ParamLimits

0xf783,	// (0x0002db55) main_mup3_pane_g

0x5de2,	// (0x000241b4) main_mup3_pane_t1_ParamLimits

0x5de2,	// (0x000241b4) main_mup3_pane_t1

0x5e51,	// (0x00024223) main_mup3_pane_t2_ParamLimits

0x5e51,	// (0x00024223) main_mup3_pane_t2

0x5f1a,	// (0x000242ec) main_mup3_pane_t4_ParamLimits

0x5f1a,	// (0x000242ec) main_mup3_pane_t4

0x5f68,	// (0x0002433a) main_mup3_pane_t5_ParamLimits

0x5f68,	// (0x0002433a) main_mup3_pane_t5

0x6018,	// (0x000243ea) main_mup3_pane_t6_ParamLimits

0x6018,	// (0x000243ea) main_mup3_pane_t6

0x0005,

0xf794,	// (0x0002db66) main_mup3_pane_t_ParamLimits

0xf794,	// (0x0002db66) main_mup3_pane_t

0x60c4,	// (0x00024496) mup3_progress_pane_ParamLimits

0x60c4,	// (0x00024496) mup3_progress_pane

0x6138,	// (0x0002450a) popup_mup3_control_window_ParamLimits

0x6138,	// (0x0002450a) popup_mup3_control_window

0xca98,	// (0x0002ae6a) popup_mup3_text_window

0x6151,	// (0x00024523) mup3_progress_pane_t1

0x6170,	// (0x00024542) mup3_progress_pane_t2

0xcaa0,	// (0x0002ae72) mup3_progress_pane_t3

0x0002,

0xf7a1,	// (0x0002db73) mup3_progress_pane_t

0xcabd,	// (0x0002ae8f) mup_progress_pane_cp03

0x9b42,	// (0x00027f14) bg_tb_trans_pane_cp04

0x618f,	// (0x00024561) mup3_volume_pane

0x6197,	// (0x00024569) popup_mup3_control_window_g1

0x61a0,	// (0x00024572) mup3_volume_pane_g1

0x61a9,	// (0x0002457b) mup3_volume_pane_g2

0x61b2,	// (0x00024584) mup3_volume_pane_g3

0x0002,

0xf7a8,	// (0x0002db7a) mup3_volume_pane_g

0x9b42,	// (0x00027f14) bg_tb_trans_pane_cp03

0xcacd,	// (0x0002ae9f) popup_mup3_text_window_g1

0xcad5,	// (0x0002aea7) popup_mup3_text_window_t1

0xa2e6,	// (0x000286b8) list_calc_item_pane_g1_ParamLimits

0xc4a2,	// (0x0002a874) mup_volume_pane_cp_g1

0x5b74,	// (0x00023f46) main_touch_calib_pane_t3

0x5b8a,	// (0x00023f5c) main_touch_calib_pane_t4

0x5ba0,	// (0x00023f72) main_touch_calib_pane_t5

0x0cbc,	// (0x0001f08e) aid_cell_size_toolbar2

0x0cc4,	// (0x0001f096) aid_popup3_width_pane

0x0d04,	// (0x0001f0d6) aid_zoom_text_msg_primary

0x12b0,	// (0x0001f682) vorec_t7

0xa2aa,	// (0x0002867c) bg_calc_paper_pane_g1_ParamLimits

0xa2b6,	// (0x00028688) bg_calc_paper_pane_g2_ParamLimits

0xa2c2,	// (0x00028694) bg_calc_paper_pane_g3_ParamLimits

0xa2ce,	// (0x000286a0) bg_calc_paper_pane_g4_ParamLimits

0xa2da,	// (0x000286ac) bg_calc_paper_pane_g5_ParamLimits

0x285f,	// (0x00020c31) bg_calc_paper_pane_g6_ParamLimits

0x2870,	// (0x00020c42) bg_calc_paper_pane_g7_ParamLimits

0x2881,	// (0x00020c53) bg_calc_paper_pane_g8_ParamLimits

0xf15b,	// (0x0002d52d) bg_calc_paper_pane_g_ParamLimits

0x2892,	// (0x00020c64) calc_bg_paper_pane_g9_ParamLimits

0x2efd,	// (0x000212cf) image_qvga_pane_ParamLimits

0x2efd,	// (0x000212cf) image_qvga_pane

0xa1ba,	// (0x0002858c) bg_popup_sub_pane_cp04_ParamLimits

0xb13b,	// (0x0002950d) popup_mup_playback_window_g1_ParamLimits

0xb147,	// (0x00029519) popup_mup_playback_window_t1_ParamLimits

0xb15c,	// (0x0002952e) popup_mup_playback_window_t2_ParamLimits

0xf4e7,	// (0x0002d8b9) popup_mup_playback_window_t_ParamLimits

0x56e0,	// (0x00023ab2) main_mup2_pane_g3_ParamLimits

0x56e0,	// (0x00023ab2) main_mup2_pane_g3

0x32c3,	// (0x00021695) popup_toolbar_window_cp04

0xb551,	// (0x00029923) popup_call2_audio_second_window_g3_ParamLimits

0xb551,	// (0x00029923) popup_call2_audio_second_window_g3

0xb95b,	// (0x00029d2d) popup_call2_audio_first_window_g4_ParamLimits

0xb95b,	// (0x00029d2d) popup_call2_audio_first_window_g4

0xbfda,	// (0x0002a3ac) popup_call2_audio_in_window_g4_ParamLimits

0xbfda,	// (0x0002a3ac) popup_call2_audio_in_window_g4

0x4eee,	// (0x000232c0) aid_area_sk_bg_cut_ParamLimits

0x4eee,	// (0x000232c0) aid_area_sk_bg_cut

0xb171,	// (0x00029543) aid_area_sk_bg_cut_2_ParamLimits

0xb171,	// (0x00029543) aid_area_sk_bg_cut_2

0x5a03,	// (0x00023dd5) aid_placing_details_win

0x5a0b,	// (0x00023ddd) aid_placing_details_win_2

0xc8c3,	// (0x0002ac95) camera2_autofocus_pane_g1_ParamLimits

0x0ee6,	// (0x0001f2b8) popup_fixed_preview_cale_window_ParamLimits

0x0ee6,	// (0x0001f2b8) popup_fixed_preview_cale_window

0xaf0e,	// (0x000292e0) navi_slider_pane_g3

0xaf17,	// (0x000292e9) navi_slider_pane_g4

0xaf20,	// (0x000292f2) navi_slider_pane_g5

0xaf0e,	// (0x000292e0) navi_slider_pane_g6

0x139a,	// (0x0001f76c) navi_slider_pane_g7

0xb033,	// (0x00029405) mup_scale_pane_g3

0xb03c,	// (0x0002940e) mup_scale_pane_g4

0xb045,	// (0x00029417) mup_scale_pane_g5

0x4c30,	// (0x00023002) mup_scale_pane_g6

0x4c39,	// (0x0002300b) mup_scale_pane_g7

0xaf0e,	// (0x000292e0) cams2_slider_pane_g3

0xc524,	// (0x0002a8f6) cams2_slider_pane_g4

0x1867,	// (0x0001fc39) cams2_slider_pane_g5

0xaf0e,	// (0x000292e0) cams2_slider_pane_g6

0x186f,	// (0x0001fc41) cams2_slider_pane_g7

0xc751,	// (0x0002ab23) camera2_autofocus_pane_cp_g1

0xc33b,	// (0x0002a70d) bg_popup_preview_window_pane_cp02_ParamLimits

0xc33b,	// (0x0002a70d) bg_popup_preview_window_pane_cp02

0xcae3,	// (0x0002aeb5) list_fp_cale_pane_ParamLimits

0xcae3,	// (0x0002aeb5) list_fp_cale_pane

0xcaef,	// (0x0002aec1) popup_fixed_preview_cale_window_t1_ParamLimits

0xcaef,	// (0x0002aec1) popup_fixed_preview_cale_window_t1

0x61bb,	// (0x0002458d) popup_fixed_preview_cale_window_t2_ParamLimits

0x61bb,	// (0x0002458d) popup_fixed_preview_cale_window_t2

0x61d0,	// (0x000245a2) popup_fixed_preview_cale_window_t3_ParamLimits

0x61d0,	// (0x000245a2) popup_fixed_preview_cale_window_t3

0x0002,

0xf7af,	// (0x0002db81) popup_fixed_preview_cale_window_t_ParamLimits

0xf7af,	// (0x0002db81) popup_fixed_preview_cale_window_t

0x61e5,	// (0x000245b7) list_single_fp_cale_pane_ParamLimits

0x61e5,	// (0x000245b7) list_single_fp_cale_pane

0xcb0d,	// (0x0002aedf) list_single_fp_cale_pane_g1_ParamLimits

0xcb0d,	// (0x0002aedf) list_single_fp_cale_pane_g1

0xcb19,	// (0x0002aeeb) list_single_fp_cale_pane_g2_ParamLimits

0xcb19,	// (0x0002aeeb) list_single_fp_cale_pane_g2

0x0002,

0xf7b6,	// (0x0002db88) list_single_fp_cale_pane_g_ParamLimits

0xf7b6,	// (0x0002db88) list_single_fp_cale_pane_g

0xcb32,	// (0x0002af04) list_single_fp_cale_pane_t1_ParamLimits

0xcb32,	// (0x0002af04) list_single_fp_cale_pane_t1

0xcb44,	// (0x0002af16) list_single_fp_cale_pane_t2_ParamLimits

0xcb44,	// (0x0002af16) list_single_fp_cale_pane_t2

0x0001,

0xf7bd,	// (0x0002db8f) list_single_fp_cale_pane_t_ParamLimits

0xf7bd,	// (0x0002db8f) list_single_fp_cale_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0x0f4e,	// (0x0001f320) main_dialer_pane

0x61f9,	// (0x000245cb) aid_cell_size_keypad

0x6203,	// (0x000245d5) dialer_ne_pane

0x620d,	// (0x000245df) grid_dialer_command_1_pane

0x6215,	// (0x000245e7) grid_dialer_command_2_pane

0x621d,	// (0x000245ef) grid_dialer_keypad_pane

0x6231,	// (0x00024603) bg_popup_call_pane_cp06_ParamLimits

0x6231,	// (0x00024603) bg_popup_call_pane_cp06

0x623d,	// (0x0002460f) dialer_ne_clear_pane_ParamLimits

0x623d,	// (0x0002460f) dialer_ne_clear_pane

0xcb77,	// (0x0002af49) dialer_ne_pane_g1

0xcb7f,	// (0x0002af51) dialer_ne_pane_t1_ParamLimits

0xcb7f,	// (0x0002af51) dialer_ne_pane_t1

0x6249,	// (0x0002461b) dialer_ne_pane_t2_ParamLimits

0x6249,	// (0x0002461b) dialer_ne_pane_t2

0x6266,	// (0x00024638) dialer_ne_pane_t3_ParamLimits

0x6266,	// (0x00024638) dialer_ne_pane_t3

0x0002,

0xf7c2,	// (0x0002db94) dialer_ne_pane_t_ParamLimits

0xf7c2,	// (0x0002db94) dialer_ne_pane_t

0x628a,	// (0x0002465c) dialer_ne_pane_t3_copy1_ParamLimits

0x628a,	// (0x0002465c) dialer_ne_pane_t3_copy1

0x62ae,	// (0x00024680) cell_dialer_keypad_pane_ParamLimits

0x62ae,	// (0x00024680) cell_dialer_keypad_pane

0x62c5,	// (0x00024697) cell_dialer_command_1_pane_ParamLimits

0x62c5,	// (0x00024697) cell_dialer_command_1_pane

0x62db,	// (0x000246ad) cell_dialer_command_2_pane_ParamLimits

0x62db,	// (0x000246ad) cell_dialer_command_2_pane

0xcb91,	// (0x0002af63) bg_button_pane_cp02_ParamLimits

0xcb91,	// (0x0002af63) bg_button_pane_cp02

0x62ea,	// (0x000246bc) cell_dialer_keypad_pane_g1_ParamLimits

0x62ea,	// (0x000246bc) cell_dialer_keypad_pane_g1

0xcb91,	// (0x0002af63) bg_button_pane_cp03_ParamLimits

0xcb91,	// (0x0002af63) bg_button_pane_cp03

0x62ff,	// (0x000246d1) cell_dialer_command_1_pane_g1_ParamLimits

0x62ff,	// (0x000246d1) cell_dialer_command_1_pane_g1

0xcb9d,	// (0x0002af6f) bg_button_pane_cp04

0x6313,	// (0x000246e5) cell_dialer_command_2_pane_g1

0xaefd,	// (0x000292cf) bg_button_pane_cp06

0xcba5,	// (0x0002af77) dialer_ne_clear_pane_g1

0xadd9,	// (0x000291ab) navi_pane_g2

0xae07,	// (0x000291d9) navi_pane_g3

0x0002,

0xf3ea,	// (0x0002d7bc) navi_pane_g

0xae96,	// (0x00029268) navi_pane_mv_g2

0xaebd,	// (0x0002928f) navi_pane_mv_g5

0x47ce,	// (0x00022ba0) navi_pane_mv_t1

0xa29e,	// (0x00028670) main_clock2_pane

0x6353,	// (0x00024725) main_clock2_list_pane_ParamLimits

0x6353,	// (0x00024725) main_clock2_list_pane

0x637d,	// (0x0002474f) main_clock2_pane_t1_ParamLimits

0x637d,	// (0x0002474f) main_clock2_pane_t1

0x63a1,	// (0x00024773) main_clock2_pane_t2_ParamLimits

0x63a1,	// (0x00024773) main_clock2_pane_t2

0x0004,

0xf7c9,	// (0x0002db9b) main_clock2_pane_t_ParamLimits

0xf7c9,	// (0x0002db9b) main_clock2_pane_t

0x63fc,	// (0x000247ce) popup_clock_analogue_window_cp03_ParamLimits

0x63fc,	// (0x000247ce) popup_clock_analogue_window_cp03

0x641a,	// (0x000247ec) popup_clock_digital_window_cp02_ParamLimits

0x641a,	// (0x000247ec) popup_clock_digital_window_cp02

0x6489,	// (0x0002485b) main_clock2_list_single_pane_ParamLimits

0x6489,	// (0x0002485b) main_clock2_list_single_pane

0xaefd,	// (0x000292cf) list_highlight_pane_cp05

0xcbc3,	// (0x0002af95) main_clock2_list_single_pane_t1

0x32c3,	// (0x00021695) popup_toolbar_window_cp04_ParamLimits

0x5a2d,	// (0x00023dff) camera2_autofocus_pane_g2_ParamLimits

0x5a2d,	// (0x00023dff) camera2_autofocus_pane_g2

0x5a39,	// (0x00023e0b) camera2_autofocus_pane_g3_ParamLimits

0x5a39,	// (0x00023e0b) camera2_autofocus_pane_g3

0x5a45,	// (0x00023e17) camera2_autofocus_pane_g4_ParamLimits

0x5a45,	// (0x00023e17) camera2_autofocus_pane_g4

0x5a51,	// (0x00023e23) camera2_autofocus_pane_g5_ParamLimits

0x5a51,	// (0x00023e23) camera2_autofocus_pane_g5

0x0004,

0xf712,	// (0x0002dae4) camera2_autofocus_pane_g_ParamLimits

0xf712,	// (0x0002dae4) camera2_autofocus_pane_g

0x5be4,	// (0x00023fb6) camera2_autofocus_pane_cp_g2

0x5bec,	// (0x00023fbe) camera2_autofocus_pane_cp_g3

0x5bf4,	// (0x00023fc6) camera2_autofocus_pane_cp_g4

0x5bfc,	// (0x00023fce) camera2_autofocus_pane_cp_g5

0x0004,

0xf778,	// (0x0002db4a) camera2_autofocus_pane_cp_g

0x6229,	// (0x000245fb) popup_dialer_spcha_window

0x9b42,	// (0x00027f14) bg_popup_sub_pane_cp07

0xcbd1,	// (0x0002afa3) list_spcha_pane

0xcbd9,	// (0x0002afab) list_single_spcha_pane_ParamLimits

0xcbd9,	// (0x0002afab) list_single_spcha_pane

0x9b42,	// (0x00027f14) list_highlight_pane_cp06

0xcbea,	// (0x0002afbc) list_single_spcha_pane_t1

0xbd84,	// (0x0002a156) popup_call2_audio_out_window_g4_ParamLimits

0xbd84,	// (0x0002a156) popup_call2_audio_out_window_g4

0x0f4e,	// (0x0001f320) main_imed2_pane

0x14ba,	// (0x0001f88c) popup_imed_adjust2_window

0x14cd,	// (0x0001f89f) popup_imed_trans_window_ParamLimits

0x14cd,	// (0x0001f89f) popup_imed_trans_window

0xc58d,	// (0x0002a95f) popup_blid_sat_info2_window_t1

0xc59b,	// (0x0002a96d) popup_blid_sat_info2_window_t2

0x000a,

0xf6a7,	// (0x0002da79) popup_blid_sat_info2_window_t

0x64bb,	// (0x0002488d) aid_size_cell_colour_35

0x64d5,	// (0x000248a7) aid_size_cell_colour_112

0x64ec,	// (0x000248be) aid_size_cell_effect

0xa3ab,	// (0x0002877d) bg_tb_trans_pane_cp02

0xab61,	// (0x00028f33) heading_imed_pane

0x6506,	// (0x000248d8) listscroll_imed_pane

0xcbf8,	// (0x0002afca) heading_imed_pane_g1

0xcc00,	// (0x0002afd2) heading_imed_pane_t1

0xcc0e,	// (0x0002afe0) grid_imed_colour_35_pane_ParamLimits

0xcc0e,	// (0x0002afe0) grid_imed_colour_35_pane

0x6512,	// (0x000248e4) grid_imed_effect_pane

0xcc26,	// (0x0002aff8) list_imed_aspect_pane

0x6522,	// (0x000248f4) scroll_pane_cp027_ParamLimits

0x6522,	// (0x000248f4) scroll_pane_cp027

0x652e,	// (0x00024900) cell_imed_effect_pane_ParamLimits

0x652e,	// (0x00024900) cell_imed_effect_pane

0xcc2e,	// (0x0002b000) cell_imed_colour_pane_ParamLimits

0xcc2e,	// (0x0002b000) cell_imed_colour_pane

0xcc70,	// (0x0002b042) cell_imed_colour_pane_g1_ParamLimits

0xcc70,	// (0x0002b042) cell_imed_colour_pane_g1

0xcc81,	// (0x0002b053) hgihlgiht_grid_pane_cp016_ParamLimits

0xcc81,	// (0x0002b053) hgihlgiht_grid_pane_cp016

0x6546,	// (0x00024918) cell_imed_effect_pane_g1

0x654e,	// (0x00024920) grid_highlight_pane_cp017

0xcc92,	// (0x0002b064) list_imed_single_pane_ParamLimits

0xcc92,	// (0x0002b064) list_imed_single_pane

0x9b42,	// (0x00027f14) list_highlight_pane_cp07

0xcca8,	// (0x0002b07a) list_imed_aspect_pane_comp1_t1

0xc347,	// (0x0002a719) bg_tb_trans_pane_cp05

0xccca,	// (0x0002b09c) popup_imed_adjust2_window_g1

0xccf1,	// (0x0002b0c3) popup_imed_adjust2_window_t1

0xcd09,	// (0x0002b0db) slider_imed_adjust_pane

0xcd1d,	// (0x0002b0ef) slider_imed_adjust_pane_g1

0xcd2d,	// (0x0002b0ff) slider_imed_adjust_pane_g2

0xcd3d,	// (0x0002b10f) slider_imed_adjust_pane_g3

0xcd4e,	// (0x0002b120) slider_imed_adjust_pane_g4

0x0003,

0xf7e6,	// (0x0002dbb8) slider_imed_adjust_pane_g

0x6557,	// (0x00024929) aid_size_cell_clipart2

0x6563,	// (0x00024935) grid_imed_clipart_pane

0xcd5f,	// (0x0002b131) scroll_pane_cp031

0x656d,	// (0x0002493f) cell_imed_clipart_pane_ParamLimits

0x656d,	// (0x0002493f) cell_imed_clipart_pane

0x6594,	// (0x00024966) cell_imed_clipart_pane_g1

0x9b42,	// (0x00027f14) grid_highlight_pane_cp014

0x635f,	// (0x00024731) main_clock2_pane_g1_ParamLimits

0x635f,	// (0x00024731) main_clock2_pane_g1

0x6434,	// (0x00024806) aid_call2_pane_cp10

0x6446,	// (0x00024818) aid_call_pane_cp10

0xad38,	// (0x0002910a) popup_clock_analogue_window_cp10_g1

0xad38,	// (0x0002910a) popup_clock_analogue_window_cp10_g2

0x6458,	// (0x0002482a) popup_clock_analogue_window_cp10_g3

0x6458,	// (0x0002482a) popup_clock_analogue_window_cp10_g4

0xad38,	// (0x0002910a) popup_clock_analogue_window_cp10_g5

0x0004,

0xf7d4,	// (0x0002dba6) popup_clock_analogue_window_cp10_g

0x646a,	// (0x0002483c) popup_clock_analogue_window_cp10_t1

0x1878,	// (0x0001fc4a) clock_digital_number_pane_cp10_ParamLimits

0x1878,	// (0x0001fc4a) clock_digital_number_pane_cp10

0x1890,	// (0x0001fc62) clock_digital_number_pane_cp11_ParamLimits

0x1890,	// (0x0001fc62) clock_digital_number_pane_cp11

0x18a8,	// (0x0001fc7a) clock_digital_number_pane_cp12_ParamLimits

0x18a8,	// (0x0001fc7a) clock_digital_number_pane_cp12

0x18c0,	// (0x0001fc92) clock_digital_number_pane_cp13_ParamLimits

0x18c0,	// (0x0001fc92) clock_digital_number_pane_cp13

0x18d8,	// (0x0001fcaa) clock_digital_separator_pane_cp10_ParamLimits

0x18d8,	// (0x0001fcaa) clock_digital_separator_pane_cp10

0x649b,	// (0x0002486d) popup_clock_digital_window_cp02_t1_ParamLimits

0x649b,	// (0x0002486d) popup_clock_digital_window_cp02_t1

0xa1b2,	// (0x00028584) clock_digital_number_pane_cp10_g1

0xa1b2,	// (0x00028584) clock_digital_number_pane_cp10_g2

0x0001,

0xf7ef,	// (0x0002dbc1) clock_digital_number_pane_cp10_g

0xa1b2,	// (0x00028584) clock_digital_separator_pane_cp10_g1

0xa1b2,	// (0x00028584) clock_digital_separator_pane_g2_cp10

0xaec5,	// (0x00029297) navi_pane_vded_g4

0xaece,	// (0x000292a0) navi_pane_vded_g5

0xaed7,	// (0x000292a9) navi_pane_vded_t1

0x0f4e,	// (0x0001f320) main_vded_pane

0x659d,	// (0x0002496f) main_vded_pane_g1

0x65a9,	// (0x0002497b) main_vded_pane_g2

0x65b3,	// (0x00024985) main_vded_pane_g3

0x0002,

0xf7f4,	// (0x0002dbc6) main_vded_pane_g

0x65bd,	// (0x0002498f) main_vded_pane_t1

0x65cb,	// (0x0002499d) main_vded_pane_t2

0x0001,

0xf7fb,	// (0x0002dbcd) main_vded_pane_t

0x65d9,	// (0x000249ab) vded_slider_pane

0x65e3,	// (0x000249b5) vded_video_pane

0xcd67,	// (0x0002b139) vded_video_pane_g1

0x65ed,	// (0x000249bf) vded_video_pane_g2

0xc751,	// (0x0002ab23) vded_video_pane_g3

0x0002,

0xf800,	// (0x0002dbd2) vded_video_pane_g

0xcd71,	// (0x0002b143) vded_slider_pane_g1

0xcd7a,	// (0x0002b14c) vded_slider_pane_g2

0xcd83,	// (0x0002b155) vded_slider_pane_g3

0xcd8c,	// (0x0002b15e) vded_slider_pane_g4

0xcd95,	// (0x0002b167) vded_slider_pane_g5

0x0004,

0xf807,	// (0x0002dbd9) vded_slider_pane_g

0x612a,	// (0x000244fc) mup3_rocker_pane_ParamLimits

0x612a,	// (0x000244fc) mup3_rocker_pane

0x65f6,	// (0x000249c8) mup3_control_keys_pane_g1

0x65fe,	// (0x000249d0) mup3_control_keys_pane_g2

0x6606,	// (0x000249d8) mup3_control_keys_pane_g3

0x660e,	// (0x000249e0) mup3_control_keys_pane_g4

0x0003,

0xf812,	// (0x0002dbe4) mup3_control_keys_pane_g

0x0f0e,	// (0x0001f2e0) popup_toolbar2_fixed_window_cp01_ParamLimits

0x0f0e,	// (0x0001f2e0) popup_toolbar2_fixed_window_cp01

0x6144,	// (0x00024516) popup_toolbar2_fixed_window_cp02_ParamLimits

0x6144,	// (0x00024516) popup_toolbar2_fixed_window_cp02

0xb6c3,	// (0x00029a95) popup_call2_audio_second_window_t4_ParamLimits

0xb6c3,	// (0x00029a95) popup_call2_audio_second_window_t4

0xbbf1,	// (0x00029fc3) popup_call2_audio_first_window_t6_ParamLimits

0xbbf1,	// (0x00029fc3) popup_call2_audio_first_window_t6

0xbe87,	// (0x0002a259) popup_call2_audio_out_window_t6_ParamLimits

0xbe87,	// (0x0002a259) popup_call2_audio_out_window_t6

0x0f4e,	// (0x0001f320) main_vitu_pane

0x661e,	// (0x000249f0) aid_size_cell_itu_ParamLimits

0x661e,	// (0x000249f0) aid_size_cell_itu

0xd1bd,	// (0x0002b58f) bg_popup_window_pane_cp08_ParamLimits

0xd1bd,	// (0x0002b58f) bg_popup_window_pane_cp08

0x662c,	// (0x000249fe) field_vitu_entry_pane_ParamLimits

0x662c,	// (0x000249fe) field_vitu_entry_pane

0x663b,	// (0x00024a0d) grid_vitu_function_pane_ParamLimits

0x663b,	// (0x00024a0d) grid_vitu_function_pane

0x664b,	// (0x00024a1d) grid_vitu_itu_pane_ParamLimits

0x664b,	// (0x00024a1d) grid_vitu_itu_pane

0x665b,	// (0x00024a2d) cell_vitu_itu_pane_ParamLimits

0x665b,	// (0x00024a2d) cell_vitu_itu_pane

0x6670,	// (0x00024a42) cell_vitu_function_pane_ParamLimits

0x6670,	// (0x00024a42) cell_vitu_function_pane

0xa3ab,	// (0x0002877d) bg_popup_sub_pane_cp08_ParamLimits

0xa3ab,	// (0x0002877d) bg_popup_sub_pane_cp08

0x6684,	// (0x00024a56) field_vitu_entry_pane_t1_ParamLimits

0x6684,	// (0x00024a56) field_vitu_entry_pane_t1

0xcdb6,	// (0x0002b188) field_vitu_entry_pane_t2_ParamLimits

0xcdb6,	// (0x0002b188) field_vitu_entry_pane_t2

0x0001,

0xf820,	// (0x0002dbf2) field_vitu_entry_pane_t_ParamLimits

0xf820,	// (0x0002dbf2) field_vitu_entry_pane_t

0xcdd3,	// (0x0002b1a5) bg_button_pane_cp05_ParamLimits

0xcdd3,	// (0x0002b1a5) bg_button_pane_cp05

0x66a1,	// (0x00024a73) cell_vitu_itu_pane_g1

0x66b9,	// (0x00024a8b) cell_vitu_itu_pane_t1_ParamLimits

0x66b9,	// (0x00024a8b) cell_vitu_itu_pane_t1

0x66cb,	// (0x00024a9d) cell_vitu_itu_pane_t2_ParamLimits

0x66cb,	// (0x00024a9d) cell_vitu_itu_pane_t2

0x0002,

0xf825,	// (0x0002dbf7) cell_vitu_itu_pane_t_ParamLimits

0xf825,	// (0x0002dbf7) cell_vitu_itu_pane_t

0xcde1,	// (0x0002b1b3) bg_button_pane_cp07

0x670e,	// (0x00024ae0) cell_vitu_function_pane_g1

0x1027,	// (0x0001f3f9) main_calc_pane_g1

0x0cf8,	// (0x0001f0ca) aid_visual_content_pane

0x0f4e,	// (0x0001f320) main_vradio_pane

0x6717,	// (0x00024ae9) main_vradio_pane_g1_ParamLimits

0x6717,	// (0x00024ae9) main_vradio_pane_g1

0xcdeb,	// (0x0002b1bd) main_vradio_pane_g2_ParamLimits

0xcdeb,	// (0x0002b1bd) main_vradio_pane_g2

0x0001,

0xf82c,	// (0x0002dbfe) main_vradio_pane_g_ParamLimits

0xf82c,	// (0x0002dbfe) main_vradio_pane_g

0x6727,	// (0x00024af9) main_vradio_pane_t1_ParamLimits

0x6727,	// (0x00024af9) main_vradio_pane_t1

0x6739,	// (0x00024b0b) main_vradio_pane_t2_ParamLimits

0x6739,	// (0x00024b0b) main_vradio_pane_t2

0xcdf8,	// (0x0002b1ca) main_vradio_pane_t3_ParamLimits

0xcdf8,	// (0x0002b1ca) main_vradio_pane_t3

0x0002,

0xf831,	// (0x0002dc03) main_vradio_pane_t_ParamLimits

0xf831,	// (0x0002dc03) main_vradio_pane_t

0x674b,	// (0x00024b1d) vradio_rocker_control_pane_ParamLimits

0x674b,	// (0x00024b1d) vradio_rocker_control_pane

0x6757,	// (0x00024b29) vradio_station_info_pane_ParamLimits

0x6757,	// (0x00024b29) vradio_station_info_pane

0xce0c,	// (0x0002b1de) vradio_frequency_info_pane_ParamLimits

0xce0c,	// (0x0002b1de) vradio_frequency_info_pane

0xc751,	// (0x0002ab23) vradio_station_info_pane_g1

0xce1b,	// (0x0002b1ed) vradio_station_info_pane_t1_ParamLimits

0xce1b,	// (0x0002b1ed) vradio_station_info_pane_t1

0xce3d,	// (0x0002b20f) vradio_station_info_pane_t2_ParamLimits

0xce3d,	// (0x0002b20f) vradio_station_info_pane_t2

0x0001,

0xf838,	// (0x0002dc0a) vradio_station_info_pane_t_ParamLimits

0xf838,	// (0x0002dc0a) vradio_station_info_pane_t

0xce4f,	// (0x0002b221) vradio_tuning_pane

0xce57,	// (0x0002b229) vradio_rocker_control_pane_g1

0xce5f,	// (0x0002b231) vradio_rocker_control_pane_g2

0xce67,	// (0x0002b239) vradio_rocker_control_pane_g3

0xce6f,	// (0x0002b241) vradio_rocker_control_pane_g4

0xce77,	// (0x0002b249) vradio_rocker_control_pane_g5

0x0004,

0xf83d,	// (0x0002dc0f) vradio_rocker_control_pane_g

0x6766,	// (0x00024b38) vradio_frequency_info_pane_g1

0xce7f,	// (0x0002b251) vradio_frequency_info_pane_t1_ParamLimits

0xce7f,	// (0x0002b251) vradio_frequency_info_pane_t1

0x6770,	// (0x00024b42) vradio_tuning_pane_g1

0x6779,	// (0x00024b4b) vradio_tuning_pane_t1

0x0d14,	// (0x0001f0e6) area_side_right_pane_ParamLimits

0x0d14,	// (0x0001f0e6) area_side_right_pane

0xc302,	// (0x0002a6d4) status_small_pane_g1

0xc30a,	// (0x0002a6dc) status_small_pane_g2

0xc313,	// (0x0002a6e5) status_small_pane_g3

0xc31c,	// (0x0002a6ee) status_small_pane_g4

0x0003,

0xf5fd,	// (0x0002d9cf) status_small_pane_g

0xc325,	// (0x0002a6f7) status_small_pane_t1

0x0f4e,	// (0x0001f320) main_video3_pane

0xce93,	// (0x0002b265) cams_zoom_vslider_pane

0xce9b,	// (0x0002b26d) image3_wide_pane_ParamLimits

0xce9b,	// (0x0002b26d) image3_wide_pane

0xceb5,	// (0x0002b287) image3_wide_small_pane

0xcec1,	// (0x0002b293) main_video3_pane_g1_ParamLimits

0xcec1,	// (0x0002b293) main_video3_pane_g1

0xcedd,	// (0x0002b2af) main_video3_pane_g2_ParamLimits

0xcedd,	// (0x0002b2af) main_video3_pane_g2

0x0001,

0xf848,	// (0x0002dc1a) main_video3_pane_g_ParamLimits

0xf848,	// (0x0002dc1a) main_video3_pane_g

0xcef9,	// (0x0002b2cb) main_video3_pane_t1_ParamLimits

0xcef9,	// (0x0002b2cb) main_video3_pane_t1

0xcf24,	// (0x0002b2f6) main_video3_pane_t2_ParamLimits

0xcf24,	// (0x0002b2f6) main_video3_pane_t2

0xcf4f,	// (0x0002b321) main_video3_pane_t3_ParamLimits

0xcf4f,	// (0x0002b321) main_video3_pane_t3

0x0002,

0xf84d,	// (0x0002dc1f) main_video3_pane_t_ParamLimits

0xf84d,	// (0x0002dc1f) main_video3_pane_t

0xcf7c,	// (0x0002b34e) cams_zoom_vslider_pane_g1

0xcf85,	// (0x0002b357) cams_zoom_vslider_pane_g2

0x0001,

0xf854,	// (0x0002dc26) cams_zoom_vslider_pane_g

0xcf8d,	// (0x0002b35f) small_slider_vertical_pane

0xc751,	// (0x0002ab23) small_slider_vertical_pane_g1

0xc751,	// (0x0002ab23) small_slider_vertical_pane_g2

0xcf95,	// (0x0002b367) small_slider_vertical_pane_g3

0x0002,

0xf859,	// (0x0002dc2b) small_slider_vertical_pane_g

0x0f4e,	// (0x0001f320) main_hwr_training_pane

0xcf9e,	// (0x0002b370) hwr_training_instruct_pane_ParamLimits

0xcf9e,	// (0x0002b370) hwr_training_instruct_pane

0x6788,	// (0x00024b5a) hwr_training_navi_pane_ParamLimits

0x6788,	// (0x00024b5a) hwr_training_navi_pane

0x67a2,	// (0x00024b74) hwr_training_write_pane_ParamLimits

0x67a2,	// (0x00024b74) hwr_training_write_pane

0x9b42,	// (0x00027f14) bg_frame_shadow_pane

0xcfd5,	// (0x0002b3a7) hwr_training_write_pane_g1

0xcfdd,	// (0x0002b3af) hwr_training_write_pane_g2

0xcfe5,	// (0x0002b3b7) hwr_training_write_pane_g3

0xcfed,	// (0x0002b3bf) hwr_training_write_pane_g4

0xcff5,	// (0x0002b3c7) hwr_training_write_pane_g5

0xcffd,	// (0x0002b3cf) hwr_training_write_pane_g6

0xd005,	// (0x0002b3d7) hwr_training_write_pane_g7

0x0006,

0xf860,	// (0x0002dc32) hwr_training_write_pane_g

0x18f0,	// (0x0001fcc2) hwr_training_navi_pane_g1_ParamLimits

0x18f0,	// (0x0001fcc2) hwr_training_navi_pane_g1

0x1902,	// (0x0001fcd4) hwr_training_navi_pane_g2_ParamLimits

0x1902,	// (0x0001fcd4) hwr_training_navi_pane_g2

0x1914,	// (0x0001fce6) hwr_training_navi_pane_g3_ParamLimits

0x1914,	// (0x0001fce6) hwr_training_navi_pane_g3

0x1924,	// (0x0001fcf6) hwr_training_navi_pane_g4_ParamLimits

0x1924,	// (0x0001fcf6) hwr_training_navi_pane_g4

0x0004,

0xf86f,	// (0x0002dc41) hwr_training_navi_pane_g_ParamLimits

0xf86f,	// (0x0002dc41) hwr_training_navi_pane_g

0x193e,	// (0x0001fd10) hwr_training_navi_pane_t1

0x67da,	// (0x00024bac) list_single_hwr_training_instruct_pane_ParamLimits

0x67da,	// (0x00024bac) list_single_hwr_training_instruct_pane

0xd00d,	// (0x0002b3df) list_single_hwr_training_instruct_pane_t1

0xc691,	// (0x0002aa63) bg_frame_shadow_pane_g1

0xd01c,	// (0x0002b3ee) bg_frame_shadow_pane_g2

0xd024,	// (0x0002b3f6) bg_frame_shadow_pane_g3

0xd02c,	// (0x0002b3fe) bg_frame_shadow_pane_g4

0xd034,	// (0x0002b406) bg_frame_shadow_pane_g5

0xd03c,	// (0x0002b40e) bg_frame_shadow_pane_g6

0xd044,	// (0x0002b416) bg_frame_shadow_pane_g7

0xa369,	// (0x0002873b) bg_frame_shadow_pane_g8

0x0007,

0xf87a,	// (0x0002dc4c) bg_frame_shadow_pane_g

0x0f4e,	// (0x0001f320) main_video_tele_dialer_pane

0x194c,	// (0x0001fd1e) aid_size_cell_video_keypad_ParamLimits

0x194c,	// (0x0001fd1e) aid_size_cell_video_keypad

0x195c,	// (0x0001fd2e) grid_video_dialer_keypad_pane_ParamLimits

0x195c,	// (0x0001fd2e) grid_video_dialer_keypad_pane

0x1990,	// (0x0001fd62) video_down_pane_cp_ParamLimits

0x1990,	// (0x0001fd62) video_down_pane_cp

0x199e,	// (0x0001fd70) cell_video_dialer_keypad_pane_ParamLimits

0x199e,	// (0x0001fd70) cell_video_dialer_keypad_pane

0xd04c,	// (0x0002b41e) bg_button_pane_cp08_ParamLimits

0xd04c,	// (0x0002b41e) bg_button_pane_cp08

0x6825,	// (0x00024bf7) cell_video_dialer_keypad_pane_g1_ParamLimits

0x6825,	// (0x00024bf7) cell_video_dialer_keypad_pane_g1

0x611e,	// (0x000244f0) mup3_rocker2_pane_ParamLimits

0x611e,	// (0x000244f0) mup3_rocker2_pane

0xc751,	// (0x0002ab23) mup3_rocker2_pane_g1

0x142e,	// (0x0001f800) main_dialer2_pane

0x0f4e,	// (0x0001f320) main_mp4_pane

0x19bb,	// (0x0001fd8d) main_mp4_pane_g1_ParamLimits

0x19bb,	// (0x0001fd8d) main_mp4_pane_g1

0x19c9,	// (0x0001fd9b) main_mp4_pane_g2_ParamLimits

0x19c9,	// (0x0001fd9b) main_mp4_pane_g2

0x19d7,	// (0x0001fda9) main_mp4_pane_g3_ParamLimits

0x19d7,	// (0x0001fda9) main_mp4_pane_g3

0x1a1c,	// (0x0001fdee) main_mp4_pane_g4_ParamLimits

0x1a1c,	// (0x0001fdee) main_mp4_pane_g4

0x1a44,	// (0x0001fe16) main_mp4_pane_g5_ParamLimits

0x1a44,	// (0x0001fe16) main_mp4_pane_g5

0x0005,

0xf89a,	// (0x0002dc6c) main_mp4_pane_g_ParamLimits

0xf89a,	// (0x0002dc6c) main_mp4_pane_g

0x1a94,	// (0x0001fe66) main_mp4_pane_t1_ParamLimits

0x1a94,	// (0x0001fe66) main_mp4_pane_t1

0x1af0,	// (0x0001fec2) main_mp4_pane_t2_ParamLimits

0x1af0,	// (0x0001fec2) main_mp4_pane_t2

0xd058,	// (0x0002b42a) main_mp4_pane_t3_ParamLimits

0xd058,	// (0x0002b42a) main_mp4_pane_t3

0x1b42,	// (0x0001ff14) main_mp4_pane_t4_ParamLimits

0x1b42,	// (0x0001ff14) main_mp4_pane_t4

0x0003,

0xf8a7,	// (0x0002dc79) main_mp4_pane_t_ParamLimits

0xf8a7,	// (0x0002dc79) main_mp4_pane_t

0x1b86,	// (0x0001ff58) mp4_progress_pane_ParamLimits

0x1b86,	// (0x0001ff58) mp4_progress_pane

0x1bd0,	// (0x0001ffa2) mp4_rocker_pane_ParamLimits

0x1bd0,	// (0x0001ffa2) mp4_rocker_pane

0xd080,	// (0x0002b452) mp4_progress_pane_t1

0xd099,	// (0x0002b46b) mp4_progress_pane_t2

0x0001,

0xf8b0,	// (0x0002dc82) mp4_progress_pane_t

0xd0b2,	// (0x0002b484) mup_progress_pane_cp04

0xd8a0,	// (0x0002bc72) mp4_rocker_pane_g1

0x1bf0,	// (0x0001ffc2) aid_cell_size_keypad2_ParamLimits

0x1bf0,	// (0x0001ffc2) aid_cell_size_keypad2

0x1c00,	// (0x0001ffd2) dialer2_ne_pane_ParamLimits

0x1c00,	// (0x0001ffd2) dialer2_ne_pane

0x1c0e,	// (0x0001ffe0) grid_dialer2_keypad_pane_ParamLimits

0x1c0e,	// (0x0001ffe0) grid_dialer2_keypad_pane

0xd1cb,	// (0x0002b59d) bg_popup_call_pane_cp07_ParamLimits

0xd1cb,	// (0x0002b59d) bg_popup_call_pane_cp07

0x6860,	// (0x00024c32) dialer2_ne_pane_t1_ParamLimits

0x6860,	// (0x00024c32) dialer2_ne_pane_t1

0x1c1e,	// (0x0001fff0) cell_dialer2_keypad_pane_ParamLimits

0x1c1e,	// (0x0001fff0) cell_dialer2_keypad_pane

0xd0d0,	// (0x0002b4a2) bg_button_pane_pane_cp04_ParamLimits

0xd0d0,	// (0x0002b4a2) bg_button_pane_pane_cp04

0x6885,	// (0x00024c57) cell_dialer2_keypad_pane_g1_ParamLimits

0x6885,	// (0x00024c57) cell_dialer2_keypad_pane_g1

0x3185,	// (0x00021557) aid_placing_vt_set_content_ParamLimits

0x3185,	// (0x00021557) aid_placing_vt_set_content

0x31b1,	// (0x00021583) aid_placing_vt_set_title_ParamLimits

0x31b1,	// (0x00021583) aid_placing_vt_set_title

0x0f4e,	// (0x0001f320) main_image3_pane

0x1c65,	// (0x00020037) area_side_right_pane_cp01_ParamLimits

0x1c65,	// (0x00020037) area_side_right_pane_cp01

0x1c92,	// (0x00020064) main_image3_pane_g1_ParamLimits

0x1c92,	// (0x00020064) main_image3_pane_g1

0x1ca0,	// (0x00020072) main_image3_pane_g2_ParamLimits

0x1ca0,	// (0x00020072) main_image3_pane_g2

0x1cb9,	// (0x0002008b) main_image3_pane_g3_ParamLimits

0x1cb9,	// (0x0002008b) main_image3_pane_g3

0x1cd2,	// (0x000200a4) main_image3_pane_g4_ParamLimits

0x1cd2,	// (0x000200a4) main_image3_pane_g4

0x0003,

0xf8bf,	// (0x0002dc91) main_image3_pane_g_ParamLimits

0xf8bf,	// (0x0002dc91) main_image3_pane_g

0x1ceb,	// (0x000200bd) main_image3_pane_t1_ParamLimits

0x1ceb,	// (0x000200bd) main_image3_pane_t1

0x1d10,	// (0x000200e2) main_image3_pane_t2_ParamLimits

0x1d10,	// (0x000200e2) main_image3_pane_t2

0x1d2f,	// (0x00020101) main_image3_pane_t3_ParamLimits

0x1d2f,	// (0x00020101) main_image3_pane_t3

0x0003,

0xf8c8,	// (0x0002dc9a) main_image3_pane_t_ParamLimits

0xf8c8,	// (0x0002dc9a) main_image3_pane_t

0xd1bd,	// (0x0002b58f) grid_sctrl_middle_pane_cp01_ParamLimits

0xd1bd,	// (0x0002b58f) grid_sctrl_middle_pane_cp01

0x68ed,	// (0x00024cbf) cell_sctrl_middle_pane_cp01_ParamLimits

0x68ed,	// (0x00024cbf) cell_sctrl_middle_pane_cp01

0x68fe,	// (0x00024cd0) cell_sctrl_middle_pane_cp01_g1_ParamLimits

0x68fe,	// (0x00024cd0) cell_sctrl_middle_pane_cp01_g1

0x0f4e,	// (0x0001f320) main_call4_pane

0x690b,	// (0x00024cdd) aid_size_button_call4_ParamLimits

0x690b,	// (0x00024cdd) aid_size_button_call4

0x693b,	// (0x00024d0d) call4_windows_pane_ParamLimits

0x693b,	// (0x00024d0d) call4_windows_pane

0x6955,	// (0x00024d27) grid_call4_button_pane_ParamLimits

0x6955,	// (0x00024d27) grid_call4_button_pane

0xd0dc,	// (0x0002b4ae) call4_windows_conf_pane

0xd0f1,	// (0x0002b4c3) popup_call4_audio_first_window_ParamLimits

0xd0f1,	// (0x0002b4c3) popup_call4_audio_first_window

0xd13d,	// (0x0002b50f) popup_call4_audio_second_window_ParamLimits

0xd13d,	// (0x0002b50f) popup_call4_audio_second_window

0xd151,	// (0x0002b523) popup_call4_audio_wait_window_ParamLimits

0xd151,	// (0x0002b523) popup_call4_audio_wait_window

0x6979,	// (0x00024d4b) cell_call4_button_pane_ParamLimits

0x6979,	// (0x00024d4b) cell_call4_button_pane

0x699e,	// (0x00024d70) bg_button_pane_cp09_ParamLimits

0x699e,	// (0x00024d70) bg_button_pane_cp09

0x69aa,	// (0x00024d7c) cell_call4_button_pane_g1_ParamLimits

0x69aa,	// (0x00024d7c) cell_call4_button_pane_g1

0x69b7,	// (0x00024d89) cell_call4_button_pane_t1_ParamLimits

0x69b7,	// (0x00024d89) cell_call4_button_pane_t1

0xd199,	// (0x0002b56b) popup_call4_audio_conf_window_ParamLimits

0xd199,	// (0x0002b56b) popup_call4_audio_conf_window

0x6151,	// (0x00024523) mup3_progress_pane_t1_ParamLimits

0x6170,	// (0x00024542) mup3_progress_pane_t2_ParamLimits

0xcaa0,	// (0x0002ae72) mup3_progress_pane_t3_ParamLimits

0xf7a1,	// (0x0002db73) mup3_progress_pane_t_ParamLimits

0xcabd,	// (0x0002ae8f) mup_progress_pane_cp03_ParamLimits

0x6616,	// (0x000249e8) mup3_control_keys_pane_g4_copy1

0x1bb4,	// (0x0001ff86) mp4_rocker2_pane_ParamLimits

0x1bb4,	// (0x0001ff86) mp4_rocker2_pane

0xd1ad,	// (0x0002b57f) mp4_rocker2_pane_g1

0xd1b5,	// (0x0002b587) mp4_rocker2_pane_g2

0x1d90,	// (0x00020162) mp4_rocker2_pane_g3

0x1d98,	// (0x0002016a) mp4_rocker2_pane_g4

0x1da0,	// (0x00020172) mp4_rocker2_pane_g5

0x0004,

0xf8d1,	// (0x0002dca3) mp4_rocker2_pane_g

0x0f4e,	// (0x0001f320) main_camera4_pane

0x0f4e,	// (0x0001f320) main_video4_pane

0x196c,	// (0x0001fd3e) main_video_tele_dialer_pane_t1_ParamLimits

0x196c,	// (0x0001fd3e) main_video_tele_dialer_pane_t1

0x197e,	// (0x0001fd50) main_video_tele_dialer_pane_t2_ParamLimits

0x197e,	// (0x0001fd50) main_video_tele_dialer_pane_t2

0x0001,

0xf88b,	// (0x0002dc5d) main_video_tele_dialer_pane_t_ParamLimits

0xf88b,	// (0x0002dc5d) main_video_tele_dialer_pane_t

0x1dc0,	// (0x00020192) cam4_autofocus_pane_ParamLimits

0x1dc0,	// (0x00020192) cam4_autofocus_pane

0x1dda,	// (0x000201ac) cam4_image_uncrop_pane_ParamLimits

0x1dda,	// (0x000201ac) cam4_image_uncrop_pane

0x1df1,	// (0x000201c3) cam4_indicators_pane_ParamLimits

0x1df1,	// (0x000201c3) cam4_indicators_pane

0x1e0d,	// (0x000201df) main_camera4_pane_g1_ParamLimits

0x1e0d,	// (0x000201df) main_camera4_pane_g1

0x1e19,	// (0x000201eb) main_camera4_pane_g2_ParamLimits

0x1e19,	// (0x000201eb) main_camera4_pane_g2

0x1e19,	// (0x000201eb) main_camera4_pane_g3_ParamLimits

0x1e19,	// (0x000201eb) main_camera4_pane_g3

0x1e25,	// (0x000201f7) main_camera4_pane_g4_ParamLimits

0x1e25,	// (0x000201f7) main_camera4_pane_g4

0x1e31,	// (0x00020203) main_camera4_pane_g5_ParamLimits

0x1e31,	// (0x00020203) main_camera4_pane_g5

0x0005,

0xf8dc,	// (0x0002dcae) main_camera4_pane_g_ParamLimits

0xf8dc,	// (0x0002dcae) main_camera4_pane_g

0x1e4b,	// (0x0002021d) main_camera4_pane_t1_ParamLimits

0x1e4b,	// (0x0002021d) main_camera4_pane_t1

0x1e6f,	// (0x00020241) bg_tb_trans_pane_cp06

0x1e85,	// (0x00020257) cam4_indicators_pane_g1

0x1e96,	// (0x00020268) cam4_indicators_pane_g2

0x0002,

0xf8f7,	// (0x0002dcc9) cam4_indicators_pane_g

0x1eb4,	// (0x00020286) cam4_indicators_pane_t1

0x1ede,	// (0x000202b0) main_video4_pane_g1_ParamLimits

0x1ede,	// (0x000202b0) main_video4_pane_g1

0x1eea,	// (0x000202bc) main_video4_pane_g2_ParamLimits

0x1eea,	// (0x000202bc) main_video4_pane_g2

0x1ef6,	// (0x000202c8) main_video4_pane_g3_ParamLimits

0x1ef6,	// (0x000202c8) main_video4_pane_g3

0x1f02,	// (0x000202d4) main_video4_pane_g4_ParamLimits

0x1f02,	// (0x000202d4) main_video4_pane_g4

0x0004,

0xf8fe,	// (0x0002dcd0) main_video4_pane_g_ParamLimits

0xf8fe,	// (0x0002dcd0) main_video4_pane_g

0x1f22,	// (0x000202f4) vid4_indicators_pane_ParamLimits

0x1f22,	// (0x000202f4) vid4_indicators_pane

0x1f41,	// (0x00020313) video4_image_uncrop_cif_pane_ParamLimits

0x1f41,	// (0x00020313) video4_image_uncrop_cif_pane

0x1f50,	// (0x00020322) video4_image_uncrop_nhd_pane_ParamLimits

0x1f50,	// (0x00020322) video4_image_uncrop_nhd_pane

0x1dda,	// (0x000201ac) video4_image_uncrop_vga_pane_ParamLimits

0x1dda,	// (0x000201ac) video4_image_uncrop_vga_pane

0x1420,	// (0x0001f7f2) bg_tb_trans_pane_cp07

0x1f65,	// (0x00020337) vid4_indicators_pane_g1

0x1f79,	// (0x0002034b) vid4_indicators_pane_g2

0x1f8d,	// (0x0002035f) vid4_indicators_pane_g3

0x0004,

0xf909,	// (0x0002dcdb) vid4_indicators_pane_g

0x1fba,	// (0x0002038c) vid4_indicators_pane_t1

0x69ed,	// (0x00024dbf) cam4_autofocus_pane_g1

0x69f5,	// (0x00024dc7) cam4_autofocus_pane_g2

0x69fd,	// (0x00024dcf) cam4_autofocus_pane_g3

0x0002,

0xf914,	// (0x0002dce6) cam4_autofocus_pane_g

0x6a05,	// (0x00024dd7) cam4_autofocus_pane_g3_copy1

0x6809,	// (0x00024bdb) video_down_pane_cp_t1

0x6817,	// (0x00024be9) video_down_pane_cp_t2

0x0001,

0xf890,	// (0x0002dc62) video_down_pane_cp_t

0x0f40,	// (0x0001f312) popup_vitu2_window_ParamLimits

0x0f40,	// (0x0001f312) popup_vitu2_window

0x1fd1,	// (0x000203a3) aid_size_cell2_itu2_ParamLimits

0x1fd1,	// (0x000203a3) aid_size_cell2_itu2

0x1ff3,	// (0x000203c5) aid_size_cell_itu2_ParamLimits

0x1ff3,	// (0x000203c5) aid_size_cell_itu2

0x2037,	// (0x00020409) bg_popup_window_pane_cp09_ParamLimits

0x2037,	// (0x00020409) bg_popup_window_pane_cp09

0x2045,	// (0x00020417) field_vitu2_entry_pane_ParamLimits

0x2045,	// (0x00020417) field_vitu2_entry_pane

0x2065,	// (0x00020437) grid_vitu2_function_pane_ParamLimits

0x2065,	// (0x00020437) grid_vitu2_function_pane

0x20a9,	// (0x0002047b) grid_vitu2_itu_pane_ParamLimits

0x20a9,	// (0x0002047b) grid_vitu2_itu_pane

0x211f,	// (0x000204f1) cell_vitu2_itu_pane_ParamLimits

0x211f,	// (0x000204f1) cell_vitu2_itu_pane

0x2134,	// (0x00020506) cell_vitu2_function_pane_ParamLimits

0x2134,	// (0x00020506) cell_vitu2_function_pane

0xd1d9,	// (0x0002b5ab) bg_popup_call_pane_cp08_ParamLimits

0xd1d9,	// (0x0002b5ab) bg_popup_call_pane_cp08

0xd1f2,	// (0x0002b5c4) field_vitu2_entry_pane_g1

0xd1fe,	// (0x0002b5d0) field_vitu2_entry_pane_g2

0x0002,

0xf91b,	// (0x0002dced) field_vitu2_entry_pane_g

0x6a0d,	// (0x00024ddf) field_vitu2_entry_pane_t1_ParamLimits

0x6a0d,	// (0x00024ddf) field_vitu2_entry_pane_t1

0xd218,	// (0x0002b5ea) field_vitu2_entry_pane_t2_ParamLimits

0xd218,	// (0x0002b5ea) field_vitu2_entry_pane_t2

0x0001,

0xf922,	// (0x0002dcf4) field_vitu2_entry_pane_t_ParamLimits

0xf922,	// (0x0002dcf4) field_vitu2_entry_pane_t

0x2175,	// (0x00020547) bg_button_pane_cp010_ParamLimits

0x2175,	// (0x00020547) bg_button_pane_cp010

0x2183,	// (0x00020555) cell_vitu2_itu_pane_g1

0x21ac,	// (0x0002057e) cell_vitu2_itu_pane_t1_ParamLimits

0x21ac,	// (0x0002057e) cell_vitu2_itu_pane_t1

0x21f8,	// (0x000205ca) cell_vitu2_itu_pane_t2_ParamLimits

0x21f8,	// (0x000205ca) cell_vitu2_itu_pane_t2

0x0002,

0xf92c,	// (0x0002dcfe) cell_vitu2_itu_pane_t_ParamLimits

0xf92c,	// (0x0002dcfe) cell_vitu2_itu_pane_t

0x1420,	// (0x0001f7f2) bg_button_pane_cp011

0x22bb,	// (0x0002068d) cell_vitu2_function_pane_g1

0x0f4e,	// (0x0001f320) main_myfav_hc_pane

0x1d71,	// (0x00020143) popup_image3_note_pane_ParamLimits

0x1d71,	// (0x00020143) popup_image3_note_pane

0x1d7f,	// (0x00020151) popup_image3_tool_bar_pane_ParamLimits

0x1d7f,	// (0x00020151) popup_image3_tool_bar_pane

0x226e,	// (0x00020640) cell_vitu2_itu_pane_t3_ParamLimits

0x226e,	// (0x00020640) cell_vitu2_itu_pane_t3

0x9b42,	// (0x00027f14) bg_popup_trans_pane

0xd23d,	// (0x0002b60f) grid_image3_tool_bar_pane

0xd247,	// (0x0002b619) bg_popup_trans_pane_g1

0xa6cc,	// (0x00028a9e) bg_popup_trans_pane_g2

0xd24f,	// (0x0002b621) bg_popup_trans_pane_g3

0xd257,	// (0x0002b629) bg_popup_trans_pane_g4

0xd25f,	// (0x0002b631) bg_popup_trans_pane_g5

0xd267,	// (0x0002b639) bg_popup_trans_pane_g6

0xd26f,	// (0x0002b641) bg_popup_trans_pane_g7

0xd277,	// (0x0002b649) bg_popup_trans_pane_g8

0xa6ac,	// (0x00028a7e) bg_popup_trans_pane_g9

0x0008,

0xf933,	// (0x0002dd05) bg_popup_trans_pane_g

0xd27f,	// (0x0002b651) cell_image3_tool_bar_pane_ParamLimits

0xd27f,	// (0x0002b651) cell_image3_tool_bar_pane

0xc751,	// (0x0002ab23) cell_image3_tool_bar_pane_g1

0x9b42,	// (0x00027f14) bg_popup_trans_pane_cp1

0xd293,	// (0x0002b665) popup_image3_note_pane_t1

0xd2a1,	// (0x0002b673) popup_image3_note_pane_t2

0xd2af,	// (0x0002b681) popup_image3_note_pane_t3

0x0002,

0xf946,	// (0x0002dd18) popup_image3_note_pane_t

0xd2bd,	// (0x0002b68f) popup_image3_note_pane_t3_copy1

0x6a3f,	// (0x00024e11) bg_myfav_hc_instruction_pane_ParamLimits

0x6a3f,	// (0x00024e11) bg_myfav_hc_instruction_pane

0x6a57,	// (0x00024e29) cell_myfav_contact_pane_ParamLimits

0x6a57,	// (0x00024e29) cell_myfav_contact_pane

0x6a71,	// (0x00024e43) cell_myfav_contact_pane_cp1_ParamLimits

0x6a71,	// (0x00024e43) cell_myfav_contact_pane_cp1

0x6a89,	// (0x00024e5b) cell_myfav_contact_pane_cp2_ParamLimits

0x6a89,	// (0x00024e5b) cell_myfav_contact_pane_cp2

0x6aa1,	// (0x00024e73) cell_myfav_contact_pane_cp3_ParamLimits

0x6aa1,	// (0x00024e73) cell_myfav_contact_pane_cp3

0x6ab8,	// (0x00024e8a) cell_myfav_contact_pane_cp4_ParamLimits

0x6ab8,	// (0x00024e8a) cell_myfav_contact_pane_cp4

0x6ace,	// (0x00024ea0) cell_myfav_contact_pane_cp5_ParamLimits

0x6ace,	// (0x00024ea0) cell_myfav_contact_pane_cp5

0x6ae2,	// (0x00024eb4) cell_myfav_contact_pane_cp6_ParamLimits

0x6ae2,	// (0x00024eb4) cell_myfav_contact_pane_cp6

0x6af6,	// (0x00024ec8) cell_myfav_contact_pane_cp7_ParamLimits

0x6af6,	// (0x00024ec8) cell_myfav_contact_pane_cp7

0xd2cb,	// (0x0002b69d) listscroll_gen_pane_cp05

0x6b0e,	// (0x00024ee0) main_myfav_hc_pane_g1_ParamLimits

0x6b0e,	// (0x00024ee0) main_myfav_hc_pane_g1

0x6b26,	// (0x00024ef8) main_myfav_hc_pane_g2_ParamLimits

0x6b26,	// (0x00024ef8) main_myfav_hc_pane_g2

0x0002,

0xf94d,	// (0x0002dd1f) main_myfav_hc_pane_g_ParamLimits

0xf94d,	// (0x0002dd1f) main_myfav_hc_pane_g

0x6b56,	// (0x00024f28) main_myfav_hc_pane_t1_ParamLimits

0x6b56,	// (0x00024f28) main_myfav_hc_pane_t1

0xd2d4,	// (0x0002b6a6) main_myfav_hc_pane_t2_ParamLimits

0xd2d4,	// (0x0002b6a6) main_myfav_hc_pane_t2

0xd2e6,	// (0x0002b6b8) main_myfav_hc_pane_t3_ParamLimits

0xd2e6,	// (0x0002b6b8) main_myfav_hc_pane_t3

0x6b6d,	// (0x00024f3f) main_myfav_hc_pane_t4_ParamLimits

0x6b6d,	// (0x00024f3f) main_myfav_hc_pane_t4

0x0004,

0xf954,	// (0x0002dd26) main_myfav_hc_pane_t_ParamLimits

0xf954,	// (0x0002dd26) main_myfav_hc_pane_t

0xc751,	// (0x0002ab23) bg_myfav_hc_instruction_pane_g1

0xd2f8,	// (0x0002b6ca) cell_myfav_contact_pane_g1_ParamLimits

0xd2f8,	// (0x0002b6ca) cell_myfav_contact_pane_g1

0xd2f8,	// (0x0002b6ca) cell_myfav_contact_pane_g2_ParamLimits

0xd2f8,	// (0x0002b6ca) cell_myfav_contact_pane_g2

0xd304,	// (0x0002b6d6) cell_myfav_contact_pane_g3_ParamLimits

0xd304,	// (0x0002b6d6) cell_myfav_contact_pane_g3

0xca8a,	// (0x0002ae5c) cell_myfav_contact_pane_g4_ParamLimits

0xca8a,	// (0x0002ae5c) cell_myfav_contact_pane_g4

0xd311,	// (0x0002b6e3) cell_myfav_contact_pane_g5_ParamLimits

0xd311,	// (0x0002b6e3) cell_myfav_contact_pane_g5

0x0004,

0xf95f,	// (0x0002dd31) cell_myfav_contact_pane_g_ParamLimits

0xf95f,	// (0x0002dd31) cell_myfav_contact_pane_g

0x6b3e,	// (0x00024f10) main_myfav_hc_pane_g3_ParamLimits

0x6b3e,	// (0x00024f10) main_myfav_hc_pane_g3

0x0e49,	// (0x0001f21b) popup_adpt_find_window

0x6b97,	// (0x00024f69) afind_page_pane_ParamLimits

0x6b97,	// (0x00024f69) afind_page_pane

0x6ba4,	// (0x00024f76) aid_size_cell_afind_ParamLimits

0x6ba4,	// (0x00024f76) aid_size_cell_afind

0x6bbe,	// (0x00024f90) bg_popup_sub_pane_cp09_ParamLimits

0x6bbe,	// (0x00024f90) bg_popup_sub_pane_cp09

0x6bcb,	// (0x00024f9d) find_pane_cp01_ParamLimits

0x6bcb,	// (0x00024f9d) find_pane_cp01

0xd31d,	// (0x0002b6ef) grid_afind_control_pane_ParamLimits

0xd31d,	// (0x0002b6ef) grid_afind_control_pane

0x6bd8,	// (0x00024faa) grid_afind_pane_ParamLimits

0x6bd8,	// (0x00024faa) grid_afind_pane

0x6bf2,	// (0x00024fc4) cell_afind_pane_ParamLimits

0x6bf2,	// (0x00024fc4) cell_afind_pane

0xc751,	// (0x0002ab23) afind_page_pane_g1

0x6c3a,	// (0x0002500c) afind_page_pane_g2

0x6c43,	// (0x00025015) afind_page_pane_g3

0x0002,

0xf96a,	// (0x0002dd3c) afind_page_pane_g

0x6c4c,	// (0x0002501e) afind_page_pane_t1

0xd331,	// (0x0002b703) cell_afind_grid_control_pane_ParamLimits

0xd331,	// (0x0002b703) cell_afind_grid_control_pane

0xd0d0,	// (0x0002b4a2) bg_button_pane_cp69_ParamLimits

0xd0d0,	// (0x0002b4a2) bg_button_pane_cp69

0x6c6c,	// (0x0002503e) cell_afind_pane_g1_ParamLimits

0x6c6c,	// (0x0002503e) cell_afind_pane_g1

0x6c79,	// (0x0002504b) cell_afind_pane_t1_ParamLimits

0x6c79,	// (0x0002504b) cell_afind_pane_t1

0xa4c5,	// (0x00028897) bg_button_pane_cp72

0xd340,	// (0x0002b712) cell_afind_grid_control_pane_g1

0x5019,	// (0x000233eb) aid_image_placing_area_ParamLimits

0x5019,	// (0x000233eb) aid_image_placing_area

0xcd9e,	// (0x0002b170) field_vitu_entry_pane_g1_ParamLimits

0xcd9e,	// (0x0002b170) field_vitu_entry_pane_g1

0xcdaa,	// (0x0002b17c) field_vitu_entry_pane_g2_ParamLimits

0xcdaa,	// (0x0002b17c) field_vitu_entry_pane_g2

0x0001,

0xf81b,	// (0x0002dbed) field_vitu_entry_pane_g_ParamLimits

0xf81b,	// (0x0002dbed) field_vitu_entry_pane_g

0x66a1,	// (0x00024a73) cell_vitu_itu_pane_g1_ParamLimits

0x66f1,	// (0x00024ac3) cell_vitu_itu_pane_t3_ParamLimits

0x66f1,	// (0x00024ac3) cell_vitu_itu_pane_t3

0xd080,	// (0x0002b452) mp4_progress_pane_t1_ParamLimits

0xd099,	// (0x0002b46b) mp4_progress_pane_t2_ParamLimits

0xf8b0,	// (0x0002dc82) mp4_progress_pane_t_ParamLimits

0xd0b2,	// (0x0002b484) mup_progress_pane_cp04_ParamLimits

0x6b81,	// (0x00024f53) main_myfav_hc_pane_t5_ParamLimits

0x6b81,	// (0x00024f53) main_myfav_hc_pane_t5

0x0d0c,	// (0x0001f0de) aid_zoom_text_primary

0x0e49,	// (0x0001f21b) popup_adpt_find_window_ParamLimits

0x1420,	// (0x0001f7f2) main_cam_set_pane

0x1dff,	// (0x000201d1) cam4_zoom_pane_ParamLimits

0x1dff,	// (0x000201d1) cam4_zoom_pane

0x6c8b,	// (0x0002505d) main_cam_set_pane_g1_ParamLimits

0x6c8b,	// (0x0002505d) main_cam_set_pane_g1

0x6c99,	// (0x0002506b) main_cam_set_pane_g2_ParamLimits

0x6c99,	// (0x0002506b) main_cam_set_pane_g2

0x0001,

0xf971,	// (0x0002dd43) main_cam_set_pane_g_ParamLimits

0xf971,	// (0x0002dd43) main_cam_set_pane_g

0x6ca5,	// (0x00025077) main_cam_set_pane_t1_ParamLimits

0x6ca5,	// (0x00025077) main_cam_set_pane_t1

0x6cc1,	// (0x00025093) main_cset_listscroll_pane_ParamLimits

0x6cc1,	// (0x00025093) main_cset_listscroll_pane

0x6cec,	// (0x000250be) main_cset_slider_pane_ParamLimits

0x6cec,	// (0x000250be) main_cset_slider_pane

0xd351,	// (0x0002b723) main_cset_list_pane_ParamLimits

0xd351,	// (0x0002b723) main_cset_list_pane

0xd361,	// (0x0002b733) scroll_pane_cp028

0x6d0b,	// (0x000250dd) aid_area_touch_slider

0x6d27,	// (0x000250f9) cset_slider_pane

0x6d51,	// (0x00025123) main_cset_slider_pane_g1

0x6d66,	// (0x00025138) main_cset_slider_pane_g2

0x0011,

0xf976,	// (0x0002dd48) main_cset_slider_pane_g

0xd39a,	// (0x0002b76c) main_cset_slider_pane_t1

0x6e2c,	// (0x000251fe) main_cset_slider_pane_t2

0x6e46,	// (0x00025218) main_cset_slider_pane_t3

0x6e60,	// (0x00025232) main_cset_slider_pane_t4

0x6e7e,	// (0x00025250) main_cset_slider_pane_t5

0x6e9c,	// (0x0002526e) main_cset_slider_pane_t6

0x6eb3,	// (0x00025285) main_cset_slider_pane_t7

0x000e,

0xf99b,	// (0x0002dd6d) main_cset_slider_pane_t

0x6fc1,	// (0x00025393) cset_list_set_pane_ParamLimits

0x6fc1,	// (0x00025393) cset_list_set_pane

0x6fdd,	// (0x000253af) aid_position_infowindow_above

0x6fe5,	// (0x000253b7) aid_position_infowindow_below

0x6fed,	// (0x000253bf) cset_list_set_pane_g1_ParamLimits

0x6fed,	// (0x000253bf) cset_list_set_pane_g1

0x6ff9,	// (0x000253cb) cset_list_set_pane_g3_ParamLimits

0x6ff9,	// (0x000253cb) cset_list_set_pane_g3

0x0001,

0xf9ba,	// (0x0002dd8c) cset_list_set_pane_g_ParamLimits

0xf9ba,	// (0x0002dd8c) cset_list_set_pane_g

0x7008,	// (0x000253da) cset_list_set_pane_t1_ParamLimits

0x7008,	// (0x000253da) cset_list_set_pane_t1

0xa3ab,	// (0x0002877d) list_highlight_pane_cp021_ParamLimits

0xa3ab,	// (0x0002877d) list_highlight_pane_cp021

0xb033,	// (0x00029405) cset_slider_pane_g1

0xb045,	// (0x00029417) cset_slider_pane_g2

0xb03c,	// (0x0002940e) cset_slider_pane_g3

0x0002,

0xf9bf,	// (0x0002dd91) cset_slider_pane_g

0x22cf,	// (0x000206a1) aid_area_touch_cam4_zoom

0x22d7,	// (0x000206a9) cam4_zoom_cont_pane

0x22df,	// (0x000206b1) cam4_zoom_pane_g1

0x22e7,	// (0x000206b9) cam4_zoom_pane_g2

0x22ef,	// (0x000206c1) cam4_zoom_pane_g3

0x0002,

0xf9c6,	// (0x0002dd98) cam4_zoom_pane_g

0x22f7,	// (0x000206c9) cam4_zoom_cont_pane_g1

0x2300,	// (0x000206d2) cam4_zoom_cont_pane_g2

0x2309,	// (0x000206db) cam4_zoom_cont_pane_g3

0x0002,

0xf9cd,	// (0x0002dd9f) cam4_zoom_cont_pane_g

0x6925,	// (0x00024cf7) call4_image_pane_ParamLimits

0x6925,	// (0x00024cf7) call4_image_pane

0xd0dc,	// (0x0002b4ae) call4_windows_conf_pane_ParamLimits

0xd11b,	// (0x0002b4ed) popup_call4_audio_in_window_ParamLimits

0xd11b,	// (0x0002b4ed) popup_call4_audio_in_window

0x9b42,	// (0x00027f14) bg_popup_call2_act_pane_cp02

0xd191,	// (0x0002b563) call4_list_conf_pane

0xc751,	// (0x0002ab23) call4_image_pane_g1

0xc751,	// (0x0002ab23) call4_image_pane_g2

0x0001,

0xf6e1,	// (0x0002dab3) call4_image_pane_g

0xd458,	// (0x0002b82a) list_single_graphic_popup_conf4_pane_ParamLimits

0xd458,	// (0x0002b82a) list_single_graphic_popup_conf4_pane

0x9b42,	// (0x00027f14) list_highlight_pane_cp022

0xd46b,	// (0x0002b83d) list_single_graphic_popup_conf4_pane_g1

0xac20,	// (0x00028ff2) list_single_graphic_popup_conf4_pane_g2

0x0001,

0xf9d4,	// (0x0002dda6) list_single_graphic_popup_conf4_pane_g

0xd473,	// (0x0002b845) list_single_graphic_popup_conf4_pane_t1

0x3315,	// (0x000216e7) popup_vtel_slider_window_ParamLimits

0x3315,	// (0x000216e7) popup_vtel_slider_window

0xd0be,	// (0x0002b490) dialer2_ne_pane_t2_ParamLimits

0xd0be,	// (0x0002b490) dialer2_ne_pane_t2

0x0001,

0xf8b5,	// (0x0002dc87) dialer2_ne_pane_t_ParamLimits

0xf8b5,	// (0x0002dc87) dialer2_ne_pane_t

0xa3ab,	// (0x0002877d) bg_popup_sub_pane_cp010_ParamLimits

0xa3ab,	// (0x0002877d) bg_popup_sub_pane_cp010

0x701d,	// (0x000253ef) popup_vtel_slider_window_g1_ParamLimits

0x701d,	// (0x000253ef) popup_vtel_slider_window_g1

0x7029,	// (0x000253fb) popup_vtel_slider_window_g2_ParamLimits

0x7029,	// (0x000253fb) popup_vtel_slider_window_g2

0x0003,

0xf9d9,	// (0x0002ddab) popup_vtel_slider_window_g_ParamLimits

0xf9d9,	// (0x0002ddab) popup_vtel_slider_window_g

0x7071,	// (0x00025443) vtel_slider_pane_ParamLimits

0x7071,	// (0x00025443) vtel_slider_pane

0x7080,	// (0x00025452) vtel_slider_pane_g1_ParamLimits

0x7080,	// (0x00025452) vtel_slider_pane_g1

0x708d,	// (0x0002545f) vtel_slider_pane_g2_ParamLimits

0x708d,	// (0x0002545f) vtel_slider_pane_g2

0x709a,	// (0x0002546c) vtel_slider_pane_g3_ParamLimits

0x709a,	// (0x0002546c) vtel_slider_pane_g3

0x7080,	// (0x00025452) vtel_slider_pane_g4_ParamLimits

0x7080,	// (0x00025452) vtel_slider_pane_g4

0x70a7,	// (0x00025479) vtel_slider_pane_g5_ParamLimits

0x70a7,	// (0x00025479) vtel_slider_pane_g5

0x0004,

0xf9e2,	// (0x0002ddb4) vtel_slider_pane_g_ParamLimits

0xf9e2,	// (0x0002ddb4) vtel_slider_pane_g

0x1420,	// (0x0001f7f2) main_gallery2_pane

0x2019,	// (0x000203eb) aid_size_row_itut2_dropdow_list_ParamLimits

0x2019,	// (0x000203eb) aid_size_row_itut2_dropdow_list

0x2087,	// (0x00020459) grid_vitu2_function_top_pane_ParamLimits

0x2087,	// (0x00020459) grid_vitu2_function_top_pane

0x20dd,	// (0x000204af) popup_vitu2_dropdown_list_window_ParamLimits

0x20dd,	// (0x000204af) popup_vitu2_dropdown_list_window

0x20fd,	// (0x000204cf) popup_vitu2_match_list_window

0x2312,	// (0x000206e4) cell_vitu2_function_top_pane_ParamLimits

0x2312,	// (0x000206e4) cell_vitu2_function_top_pane

0x2332,	// (0x00020704) cell_vitu2_function_top_pane_cp01_ParamLimits

0x2332,	// (0x00020704) cell_vitu2_function_top_pane_cp01

0x2350,	// (0x00020722) cell_vitu2_function_top_wide_pane_ParamLimits

0x2350,	// (0x00020722) cell_vitu2_function_top_wide_pane

0x1420,	// (0x0001f7f2) bg_button_pane_cp012

0x236e,	// (0x00020740) cell_vitu2_function_top_pane_g1

0x2382,	// (0x00020754) bg_button_pane_cp013_ParamLimits

0x2382,	// (0x00020754) bg_button_pane_cp013

0x70c2,	// (0x00025494) cell_vitu2_function_top_wide_pane_g1_ParamLimits

0x70c2,	// (0x00025494) cell_vitu2_function_top_wide_pane_g1

0x0f40,	// (0x0001f312) bg_popup_sub_pane_cp20

0x239e,	// (0x00020770) list_vitu2_match_list_pane

0xd247,	// (0x0002b619) bg_popup_sub_pane_cp20_g1

0xd24f,	// (0x0002b621) bg_popup_sub_pane_cp20_g2

0xa6cc,	// (0x00028a9e) bg_popup_sub_pane_cp20_g3

0xd257,	// (0x0002b629) bg_popup_sub_pane_cp20_g4

0xa6ac,	// (0x00028a7e) bg_popup_sub_pane_cp20_g5

0xd489,	// (0x0002b85b) bg_popup_sub_pane_cp20_g6

0xd267,	// (0x0002b639) bg_popup_sub_pane_cp20_g7

0xd26f,	// (0x0002b641) bg_popup_sub_pane_cp20_g8

0xd277,	// (0x0002b649) bg_popup_sub_pane_cp20_g9

0x0008,

0xf9ed,	// (0x0002ddbf) bg_popup_sub_pane_cp20_g

0x23b6,	// (0x00020788) list_vitu2_match_list_item_pane_ParamLimits

0x23b6,	// (0x00020788) list_vitu2_match_list_item_pane

0x23c8,	// (0x0002079a) list_vitu2_match_list_item_pane_t1

0x0f4e,	// (0x0001f320) bg_popup_sub_pane_cp21

0x23d6,	// (0x000207a8) grid_vitu2_dropdown_list_pane

0x23de,	// (0x000207b0) cell_vitu2_dropdown_list_char_pane_ParamLimits

0x23de,	// (0x000207b0) cell_vitu2_dropdown_list_char_pane

0x23ff,	// (0x000207d1) cell_vitu2_dropdown_list_ctrl_pane_ParamLimits

0x23ff,	// (0x000207d1) cell_vitu2_dropdown_list_ctrl_pane

0xd491,	// (0x0002b863) cell_vitu2_dropdown_list_char_pane_g1

0xd49a,	// (0x0002b86c) cell_vitu2_dropdown_list_char_pane_g2

0xd4a3,	// (0x0002b875) cell_vitu2_dropdown_list_char_pane_g3

0x0002,

0xfa0a,	// (0x0002dddc) cell_vitu2_dropdown_list_char_pane_g

0x242b,	// (0x000207fd) cell_vitu2_dropdown_list_char_pane_t1

0x7121,	// (0x000254f3) cell_vitu2_dropdown_list_ctrl_pane_g1_ParamLimits

0x7121,	// (0x000254f3) cell_vitu2_dropdown_list_ctrl_pane_g1

0x7131,	// (0x00025503) cell_vitu2_dropdown_list_ctrl_pane_g2_ParamLimits

0x7131,	// (0x00025503) cell_vitu2_dropdown_list_ctrl_pane_g2

0x7142,	// (0x00025514) cell_vitu2_dropdown_list_ctrl_pane_g3_ParamLimits

0x7142,	// (0x00025514) cell_vitu2_dropdown_list_ctrl_pane_g3

0x2439,	// (0x0002080b) cell_vitu2_dropdown_list_ctrl_pane_g4_ParamLimits

0x2439,	// (0x0002080b) cell_vitu2_dropdown_list_ctrl_pane_g4

0x1e6f,	// (0x00020241) cell_vitu2_dropdown_list_ctrl_pane_g5_ParamLimits

0x1e6f,	// (0x00020241) cell_vitu2_dropdown_list_ctrl_pane_g5

0x0004,

0xfa11,	// (0x0002dde3) cell_vitu2_dropdown_list_ctrl_pane_g_ParamLimits

0xfa11,	// (0x0002dde3) cell_vitu2_dropdown_list_ctrl_pane_g

0x7152,	// (0x00025524) aid_size_cell_gallery2_ParamLimits

0x7152,	// (0x00025524) aid_size_cell_gallery2

0x716c,	// (0x0002553e) grid_gallery2_pane_ParamLimits

0x716c,	// (0x0002553e) grid_gallery2_pane

0x6522,	// (0x000248f4) scroll_pane_cp029_ParamLimits

0x6522,	// (0x000248f4) scroll_pane_cp029

0x7183,	// (0x00025555) cell_gallery2_pane_ParamLimits

0x7183,	// (0x00025555) cell_gallery2_pane

0xd4ac,	// (0x0002b87e) cell_gallery2_pane_g2

0x71d8,	// (0x000255aa) cell_gallery2_pane_g3

0xd4b4,	// (0x0002b886) cell_gallery2_pane_g4

0xd4bc,	// (0x0002b88e) cell_gallery2_pane_g5

0xaefd,	// (0x000292cf) grid_highlight_pane_cp10

0x20fd,	// (0x000204cf) popup_vitu2_match_list_window_ParamLimits

0x210f,	// (0x000204e1) popup_vitu2_query_window_ParamLimits

0x210f,	// (0x000204e1) popup_vitu2_query_window

0x0f4e,	// (0x0001f320) bg_vitu2_candi_button_pane

0xd491,	// (0x0002b863) cell_vitu2_dropdown_list_char_pane_g1_copy1

0xd49a,	// (0x0002b86c) cell_vitu2_dropdown_list_char_pane_g2_copy1

0xd4a3,	// (0x0002b875) cell_vitu2_dropdown_list_char_pane_g2_copy2

0x71e0,	// (0x000255b2) bg_button_pane_cp015

0x71f2,	// (0x000255c4) bg_button_pane_cp016

0x7205,	// (0x000255d7) bg_button_pane_cp017

0xc347,	// (0x0002a719) bg_popup_sub_pane_cp22

0xd4c4,	// (0x0002b896) popup_vitu2_query_window_g1

0x724a,	// (0x0002561c) popup_vitu2_query_window_g2

0x0002,

0xfa1c,	// (0x0002ddee) popup_vitu2_query_window_g

0x7267,	// (0x00025639) popup_vitu2_query_window_t1_ParamLimits

0x7267,	// (0x00025639) popup_vitu2_query_window_t1

0x729a,	// (0x0002566c) popup_vitu2_query_window_t2_ParamLimits

0x729a,	// (0x0002566c) popup_vitu2_query_window_t2

0x72ac,	// (0x0002567e) popup_vitu2_query_window_t3_ParamLimits

0x72ac,	// (0x0002567e) popup_vitu2_query_window_t3

0x72d4,	// (0x000256a6) popup_vitu2_query_window_t4_ParamLimits

0x72d4,	// (0x000256a6) popup_vitu2_query_window_t4

0x72f5,	// (0x000256c7) popup_vitu2_query_window_t5_ParamLimits

0x72f5,	// (0x000256c7) popup_vitu2_query_window_t5

0x0006,

0xfa23,	// (0x0002ddf5) popup_vitu2_query_window_t_ParamLimits

0xfa23,	// (0x0002ddf5) popup_vitu2_query_window_t

0xd349,	// (0x0002b71b) main_cset_text_pane

0x6d0b,	// (0x000250dd) aid_area_touch_slider_ParamLimits

0x6d27,	// (0x000250f9) cset_slider_pane_ParamLimits

0x6d51,	// (0x00025123) main_cset_slider_pane_g1_ParamLimits

0x6d66,	// (0x00025138) main_cset_slider_pane_g2_ParamLimits

0xd36a,	// (0x0002b73c) main_cset_slider_pane_g3_ParamLimits

0xd36a,	// (0x0002b73c) main_cset_slider_pane_g3

0x6d7b,	// (0x0002514d) main_cset_slider_pane_g4_ParamLimits

0x6d7b,	// (0x0002514d) main_cset_slider_pane_g4

0x6d8a,	// (0x0002515c) main_cset_slider_pane_g5_ParamLimits

0x6d8a,	// (0x0002515c) main_cset_slider_pane_g5

0x6d98,	// (0x0002516a) main_cset_slider_pane_g6_ParamLimits

0x6d98,	// (0x0002516a) main_cset_slider_pane_g6

0xf976,	// (0x0002dd48) main_cset_slider_pane_g_ParamLimits

0xd39a,	// (0x0002b76c) main_cset_slider_pane_t1_ParamLimits

0x6e2c,	// (0x000251fe) main_cset_slider_pane_t2_ParamLimits

0x6e46,	// (0x00025218) main_cset_slider_pane_t3_ParamLimits

0x6e60,	// (0x00025232) main_cset_slider_pane_t4_ParamLimits

0x6e7e,	// (0x00025250) main_cset_slider_pane_t5_ParamLimits

0x6e9c,	// (0x0002526e) main_cset_slider_pane_t6_ParamLimits

0x6eb3,	// (0x00025285) main_cset_slider_pane_t7_ParamLimits

0x6ee1,	// (0x000252b3) main_cset_slider_pane_t8_ParamLimits

0x6ee1,	// (0x000252b3) main_cset_slider_pane_t8

0x6f09,	// (0x000252db) main_cset_slider_pane_t9_ParamLimits

0x6f09,	// (0x000252db) main_cset_slider_pane_t9

0x6f31,	// (0x00025303) main_cset_slider_pane_t10_ParamLimits

0x6f31,	// (0x00025303) main_cset_slider_pane_t10

0x6f59,	// (0x0002532b) main_cset_slider_pane_t11_ParamLimits

0x6f59,	// (0x0002532b) main_cset_slider_pane_t11

0x6f83,	// (0x00025355) main_cset_slider_pane_t12_ParamLimits

0x6f83,	// (0x00025355) main_cset_slider_pane_t12

0x6fa2,	// (0x00025374) main_cset_slider_pane_t13_ParamLimits

0x6fa2,	// (0x00025374) main_cset_slider_pane_t13

0xf99b,	// (0x0002dd6d) main_cset_slider_pane_t_ParamLimits

0x9b42,	// (0x00027f14) bg_popup_sub_pane_cp011

0xd4d0,	// (0x0002b8a2) main_cset_text_pane_g1

0xd4d8,	// (0x0002b8aa) main_cset_text_pane_t1

0xd4e6,	// (0x0002b8b8) main_cset_text_pane_t2

0xd4f4,	// (0x0002b8c6) main_cset_text_pane_t3

0xd502,	// (0x0002b8d4) main_cset_text_pane_t4

0xd510,	// (0x0002b8e2) main_cset_text_pane_t5

0xd51e,	// (0x0002b8f0) main_cset_text_pane_t6

0xd52c,	// (0x0002b8fe) main_cset_text_pane_t7

0x0006,

0xfa32,	// (0x0002de04) main_cset_text_pane_t

0x0f4e,	// (0x0001f320) main_cam4_burst_pane

0x0f4e,	// (0x0001f320) main_cam5_pane

0x6c5a,	// (0x0002502c) bg_button_pane_cp019

0x6c63,	// (0x00025035) bg_button_pane_cp020

0xd376,	// (0x0002b748) main_cset_slider_pane_g7_ParamLimits

0xd376,	// (0x0002b748) main_cset_slider_pane_g7

0xd382,	// (0x0002b754) main_cset_slider_pane_g8_ParamLimits

0xd382,	// (0x0002b754) main_cset_slider_pane_g8

0x6dac,	// (0x0002517e) main_cset_slider_pane_g9_ParamLimits

0x6dac,	// (0x0002517e) main_cset_slider_pane_g9

0x6db8,	// (0x0002518a) main_cset_slider_pane_g10_ParamLimits

0x6db8,	// (0x0002518a) main_cset_slider_pane_g10

0x6dc4,	// (0x00025196) main_cset_slider_pane_g11_ParamLimits

0x6dc4,	// (0x00025196) main_cset_slider_pane_g11

0x6dd0,	// (0x000251a2) main_cset_slider_pane_g12_ParamLimits

0x6dd0,	// (0x000251a2) main_cset_slider_pane_g12

0x6ddc,	// (0x000251ae) main_cset_slider_pane_g13_ParamLimits

0x6ddc,	// (0x000251ae) main_cset_slider_pane_g13

0x6dea,	// (0x000251bc) main_cset_slider_pane_g14_ParamLimits

0x6dea,	// (0x000251bc) main_cset_slider_pane_g14

0x6df8,	// (0x000251ca) main_cset_slider_pane_g15_ParamLimits

0x6df8,	// (0x000251ca) main_cset_slider_pane_g15

0xd3c8,	// (0x0002b79a) main_cset_slider_pane_t14_ParamLimits

0xd3c8,	// (0x0002b79a) main_cset_slider_pane_t14

0xd401,	// (0x0002b7d3) main_cset_slider_pane_t15_ParamLimits

0xd401,	// (0x0002b7d3) main_cset_slider_pane_t15

0x736c,	// (0x0002573e) aid_cam4_burst_size_cell_ParamLimits

0x736c,	// (0x0002573e) aid_cam4_burst_size_cell

0x7388,	// (0x0002575a) grid_cam4_burst_pane_ParamLimits

0x7388,	// (0x0002575a) grid_cam4_burst_pane

0x73b8,	// (0x0002578a) linegrid_cam4_burst_pane_ParamLimits

0x73b8,	// (0x0002578a) linegrid_cam4_burst_pane

0x73da,	// (0x000257ac) scroll_pane_cp30_ParamLimits

0x73da,	// (0x000257ac) scroll_pane_cp30

0x73e6,	// (0x000257b8) cell_cam4_burst_pane_ParamLimits

0x73e6,	// (0x000257b8) cell_cam4_burst_pane

0xd53a,	// (0x0002b90c) linegrid_cam4_burst_pane_g1_ParamLimits

0xd53a,	// (0x0002b90c) linegrid_cam4_burst_pane_g1

0x7422,	// (0x000257f4) linegrid_cam4_burst_pane_g2_ParamLimits

0x7422,	// (0x000257f4) linegrid_cam4_burst_pane_g2

0xd547,	// (0x0002b919) linegrid_cam4_burst_pane_g3_ParamLimits

0xd547,	// (0x0002b919) linegrid_cam4_burst_pane_g3

0x0002,

0xfa41,	// (0x0002de13) linegrid_cam4_burst_pane_g_ParamLimits

0xfa41,	// (0x0002de13) linegrid_cam4_burst_pane_g

0x7433,	// (0x00025805) linegrid_cam4_burst_pane_g3_copy1_ParamLimits

0x7433,	// (0x00025805) linegrid_cam4_burst_pane_g3_copy1

0xd554,	// (0x0002b926) linegrid_cam4_burst_pane_g4_ParamLimits

0xd554,	// (0x0002b926) linegrid_cam4_burst_pane_g4

0x744d,	// (0x0002581f) linegrid_cam4_burst_pane_g5_ParamLimits

0x744d,	// (0x0002581f) linegrid_cam4_burst_pane_g5

0x745e,	// (0x00025830) linegrid_cam4_burst_pane_g6_ParamLimits

0x745e,	// (0x00025830) linegrid_cam4_burst_pane_g6

0xd561,	// (0x0002b933) linegrid_cam4_burst_pane_g7_ParamLimits

0xd561,	// (0x0002b933) linegrid_cam4_burst_pane_g7

0x746f,	// (0x00025841) cell_cam4_burst_pane_g1

0xd57a,	// (0x0002b94c) main_cam5_pane_t1_ParamLimits

0xd57a,	// (0x0002b94c) main_cam5_pane_t1

0xd58c,	// (0x0002b95e) main_cam5_pane_t2_ParamLimits

0xd58c,	// (0x0002b95e) main_cam5_pane_t2

0xd59e,	// (0x0002b970) main_cam5_pane_t3_ParamLimits

0xd59e,	// (0x0002b970) main_cam5_pane_t3

0xd5b0,	// (0x0002b982) main_cam5_pane_t4_ParamLimits

0xd5b0,	// (0x0002b982) main_cam5_pane_t4

0xd5c8,	// (0x0002b99a) main_cam5_pane_t5_ParamLimits

0xd5c8,	// (0x0002b99a) main_cam5_pane_t5

0xd5dc,	// (0x0002b9ae) main_cam5_pane_t6_ParamLimits

0xd5dc,	// (0x0002b9ae) main_cam5_pane_t6

0xd5f0,	// (0x0002b9c2) main_cam5_pane_t7_ParamLimits

0xd5f0,	// (0x0002b9c2) main_cam5_pane_t7

0xd602,	// (0x0002b9d4) main_cam5_pane_t8_ParamLimits

0xd602,	// (0x0002b9d4) main_cam5_pane_t8

0xd61e,	// (0x0002b9f0) main_cam5_pane_t9_ParamLimits

0xd61e,	// (0x0002b9f0) main_cam5_pane_t9

0xd630,	// (0x0002ba02) main_cam5_pane_t10_ParamLimits

0xd630,	// (0x0002ba02) main_cam5_pane_t10

0xd642,	// (0x0002ba14) main_cam5_pane_t11_ParamLimits

0xd642,	// (0x0002ba14) main_cam5_pane_t11

0xd654,	// (0x0002ba26) main_cam5_pane_t12_ParamLimits

0xd654,	// (0x0002ba26) main_cam5_pane_t12

0xd669,	// (0x0002ba3b) main_cam5_pane_t13_ParamLimits

0xd669,	// (0x0002ba3b) main_cam5_pane_t13

0x000c,

0xfa4d,	// (0x0002de1f) main_cam5_pane_t_ParamLimits

0xfa4d,	// (0x0002de1f) main_cam5_pane_t

0x0eff,	// (0x0001f2d1) popup_scut_keymap_window_ParamLimits

0x0eff,	// (0x0001f2d1) popup_scut_keymap_window

0x7484,	// (0x00025856) aid_size_cell_brow_shortcut

0xaefd,	// (0x000292cf) bg_popup_window_pane_cp010

0x7490,	// (0x00025862) grid_scut_pane

0x749c,	// (0x0002586e) cell_scut_pane_ParamLimits

0x749c,	// (0x0002586e) cell_scut_pane

0x74b3,	// (0x00025885) cell_scut_pane_g1

0xd686,	// (0x0002ba58) cell_scut_pane_t1

0xd695,	// (0x0002ba67) cell_scut_pane_t2

0x74bc,	// (0x0002588e) cell_scut_pane_t3

0x0002,

0xfa68,	// (0x0002de3a) cell_scut_pane_t

0x5d7a,	// (0x0002414c) main_mup3_pane_g8_ParamLimits

0x5d7a,	// (0x0002414c) main_mup3_pane_g8

0x2027,	// (0x000203f9) area_vitu2_query_pane_ParamLimits

0x2027,	// (0x000203f9) area_vitu2_query_pane

0x7218,	// (0x000255ea) input_focus_pane_cp08

0xd6c1,	// (0x0002ba93) area_vitu2_query_pane_g1

0x74ca,	// (0x0002589c) area_vitu2_query_pane_g2

0x0001,

0xfa6f,	// (0x0002de41) area_vitu2_query_pane_g

0x74db,	// (0x000258ad) area_vitu2_query_pane_t1_ParamLimits

0x74db,	// (0x000258ad) area_vitu2_query_pane_t1

0x74ef,	// (0x000258c1) area_vitu2_query_pane_t2_ParamLimits

0x74ef,	// (0x000258c1) area_vitu2_query_pane_t2

0x7503,	// (0x000258d5) area_vitu2_query_pane_t3_ParamLimits

0x7503,	// (0x000258d5) area_vitu2_query_pane_t3

0xd6cd,	// (0x0002ba9f) area_vitu2_query_pane_t4_ParamLimits

0xd6cd,	// (0x0002ba9f) area_vitu2_query_pane_t4

0xd6f5,	// (0x0002bac7) area_vitu2_query_pane_t5_ParamLimits

0xd6f5,	// (0x0002bac7) area_vitu2_query_pane_t5

0xd71d,	// (0x0002baef) area_vitu2_query_pane_t6_ParamLimits

0xd71d,	// (0x0002baef) area_vitu2_query_pane_t6

0x0006,

0xfa74,	// (0x0002de46) area_vitu2_query_pane_t_ParamLimits

0xfa74,	// (0x0002de46) area_vitu2_query_pane_t

0x752b,	// (0x000258fd) bg_button_pane_cp018

0x7539,	// (0x0002590b) bg_button_pane_cp021

0x7545,	// (0x00025917) bg_button_pane_cp022

0x7556,	// (0x00025928) input_focus_pane_cp09

0xad44,	// (0x00029116) aid_size_touch_mv_arrow_left

0xad6f,	// (0x00029141) aid_size_touch_mv_arrow_right

0x6e10,	// (0x000251e2) main_cset_slider_pane_g16_ParamLimits

0x6e10,	// (0x000251e2) main_cset_slider_pane_g16

0x6e1e,	// (0x000251f0) main_cset_slider_pane_g17_ParamLimits

0x6e1e,	// (0x000251f0) main_cset_slider_pane_g17

0x746f,	// (0x00025841) cell_cam4_burst_pane_g1_ParamLimits

0x9b42,	// (0x00027f14) compa_mode_pane

0x7035,	// (0x00025407) popup_vtel_slider_window_g3_ParamLimits

0x7035,	// (0x00025407) popup_vtel_slider_window_g3

0x7049,	// (0x0002541b) popup_vtel_slider_window_g4_ParamLimits

0x7049,	// (0x0002541b) popup_vtel_slider_window_g4

0x705d,	// (0x0002542f) popup_vtel_slider_window_t1_ParamLimits

0x705d,	// (0x0002542f) popup_vtel_slider_window_t1

0x0f4e,	// (0x0001f320) main_cl_pane

0x14ba,	// (0x0001f88c) popup_imed_adjust2_window_ParamLimits

0xc347,	// (0x0002a719) bg_tb_trans_pane_cp05_ParamLimits

0xccca,	// (0x0002b09c) popup_imed_adjust2_window_g1_ParamLimits

0xccd9,	// (0x0002b0ab) popup_imed_adjust2_window_g2_ParamLimits

0xccd9,	// (0x0002b0ab) popup_imed_adjust2_window_g2

0xcce5,	// (0x0002b0b7) popup_imed_adjust2_window_g3_ParamLimits

0xcce5,	// (0x0002b0b7) popup_imed_adjust2_window_g3

0x0002,

0xf7df,	// (0x0002dbb1) popup_imed_adjust2_window_g_ParamLimits

0xf7df,	// (0x0002dbb1) popup_imed_adjust2_window_g

0xccf1,	// (0x0002b0c3) popup_imed_adjust2_window_t1_ParamLimits

0xcd09,	// (0x0002b0db) slider_imed_adjust_pane_ParamLimits

0xcd1d,	// (0x0002b0ef) slider_imed_adjust_pane_g1_ParamLimits

0xcd2d,	// (0x0002b0ff) slider_imed_adjust_pane_g2_ParamLimits

0xcd3d,	// (0x0002b10f) slider_imed_adjust_pane_g3_ParamLimits

0xcd4e,	// (0x0002b120) slider_imed_adjust_pane_g4_ParamLimits

0xf7e6,	// (0x0002dbb8) slider_imed_adjust_pane_g_ParamLimits

0x1da8,	// (0x0002017a) aid_touch_area_cam4_ParamLimits

0x1da8,	// (0x0002017a) aid_touch_area_cam4

0x1db8,	// (0x0002018a) battery_pane_cp01

0x1e3f,	// (0x00020211) main_camera4_pane_g6_ParamLimits

0x1e3f,	// (0x00020211) main_camera4_pane_g6

0x1e5d,	// (0x0002022f) main_camera4_pane_t2_ParamLimits

0x1e5d,	// (0x0002022f) main_camera4_pane_t2

0x0001,

0xf8e9,	// (0x0002dcbb) main_camera4_pane_t_ParamLimits

0xf8e9,	// (0x0002dcbb) main_camera4_pane_t

0x1ece,	// (0x000202a0) aid_touch_area_vid4_ParamLimits

0x1ece,	// (0x000202a0) aid_touch_area_vid4

0x1f0e,	// (0x000202e0) main_video4_pane_g5_ParamLimits

0x1f0e,	// (0x000202e0) main_video4_pane_g5

0x1f32,	// (0x00020304) vid4_progress_pane_ParamLimits

0x1f32,	// (0x00020304) vid4_progress_pane

0xd38e,	// (0x0002b760) main_cset_slider_pane_g18_ParamLimits

0xd38e,	// (0x0002b760) main_cset_slider_pane_g18

0xd56e,	// (0x0002b940) cell_cam4_burst_pane_g2_ParamLimits

0xd56e,	// (0x0002b940) cell_cam4_burst_pane_g2

0x0001,

0xfa48,	// (0x0002de1a) cell_cam4_burst_pane_g_ParamLimits

0xfa48,	// (0x0002de1a) cell_cam4_burst_pane_g

0x7567,	// (0x00025939) bg_cl_pane_ParamLimits

0x7567,	// (0x00025939) bg_cl_pane

0x7573,	// (0x00025945) cl_header_pane_ParamLimits

0x7573,	// (0x00025945) cl_header_pane

0x757f,	// (0x00025951) cl_listscroll_pane_ParamLimits

0x757f,	// (0x00025951) cl_listscroll_pane

0xd769,	// (0x0002bb3b) bg_cl_pane_g1

0xd771,	// (0x0002bb43) bg_cl_pane_g2

0xd779,	// (0x0002bb4b) bg_cl_pane_g3

0xd781,	// (0x0002bb53) bg_cl_pane_g4

0xd789,	// (0x0002bb5b) bg_cl_pane_g5

0xd791,	// (0x0002bb63) bg_cl_pane_g6

0xd799,	// (0x0002bb6b) bg_cl_pane_g7

0xd7a1,	// (0x0002bb73) bg_cl_pane_g8

0xd7a9,	// (0x0002bb7b) bg_cl_pane_g9

0x0008,

0xfa83,	// (0x0002de55) bg_cl_pane_g

0x758b,	// (0x0002595d) aid_height_cl_leading_ParamLimits

0x758b,	// (0x0002595d) aid_height_cl_leading

0x7597,	// (0x00025969) aid_height_cl_text_ParamLimits

0x7597,	// (0x00025969) aid_height_cl_text

0xd1bd,	// (0x0002b58f) bg_cl_header_pane_ParamLimits

0xd1bd,	// (0x0002b58f) bg_cl_header_pane

0x75af,	// (0x00025981) cl_header_pane_g1_ParamLimits

0x75af,	// (0x00025981) cl_header_pane_g1

0x75bc,	// (0x0002598e) cl_header_pane_t1_ParamLimits

0x75bc,	// (0x0002598e) cl_header_pane_t1

0xd7b1,	// (0x0002bb83) cl_list_pane

0xd361,	// (0x0002b733) hc_scroll_pane_cp01

0xa6ac,	// (0x00028a7e) bg_cl_header_pane_g1

0xd247,	// (0x0002b619) bg_cl_header_pane_g2

0xa6cc,	// (0x00028a9e) bg_cl_header_pane_g3

0xd257,	// (0x0002b629) bg_cl_header_pane_g4

0xd24f,	// (0x0002b621) bg_cl_header_pane_g5

0xd489,	// (0x0002b85b) bg_cl_header_pane_g6

0xd26f,	// (0x0002b641) bg_cl_header_pane_g7

0xd277,	// (0x0002b649) bg_cl_header_pane_g8

0xd267,	// (0x0002b639) bg_cl_header_pane_g9

0x0008,

0xfa96,	// (0x0002de68) bg_cl_header_pane_g

0x75ce,	// (0x000259a0) hc_cl_list_double_graphic_heading_pane_ParamLimits

0x75ce,	// (0x000259a0) hc_cl_list_double_graphic_heading_pane

0x75e2,	// (0x000259b4) hc_cl_list_single_graphic_pane_ParamLimits

0x75e2,	// (0x000259b4) hc_cl_list_single_graphic_pane

0x75fc,	// (0x000259ce) hc_cl_list_single_graphic_pane_g1_ParamLimits

0x75fc,	// (0x000259ce) hc_cl_list_single_graphic_pane_g1

0x7608,	// (0x000259da) hc_cl_list_single_graphic_pane_g2_ParamLimits

0x7608,	// (0x000259da) hc_cl_list_single_graphic_pane_g2

0x0001,

0xfaa9,	// (0x0002de7b) hc_cl_list_single_graphic_pane_g_ParamLimits

0xfaa9,	// (0x0002de7b) hc_cl_list_single_graphic_pane_g

0x761c,	// (0x000259ee) hc_cl_list_single_graphic_pane_t1_ParamLimits

0x761c,	// (0x000259ee) hc_cl_list_single_graphic_pane_t1

0x75fc,	// (0x000259ce) hc_cl_list_double_graphic_heading_pane_g1_ParamLimits

0x75fc,	// (0x000259ce) hc_cl_list_double_graphic_heading_pane_g1

0x7631,	// (0x00025a03) hc_cl_list_double_graphic_heading_pane_g2_ParamLimits

0x7631,	// (0x00025a03) hc_cl_list_double_graphic_heading_pane_g2

0x7645,	// (0x00025a17) hc_cl_list_double_graphic_heading_pane_g3_ParamLimits

0x7645,	// (0x00025a17) hc_cl_list_double_graphic_heading_pane_g3

0x0002,

0xfaae,	// (0x0002de80) hc_cl_list_double_graphic_heading_pane_g_ParamLimits

0xfaae,	// (0x0002de80) hc_cl_list_double_graphic_heading_pane_g

0x7659,	// (0x00025a2b) hc_cl_list_double_graphic_heading_pane_t1_ParamLimits

0x7659,	// (0x00025a2b) hc_cl_list_double_graphic_heading_pane_t1

0x766e,	// (0x00025a40) hc_cl_list_double_graphic_heading_pane_t2_ParamLimits

0x766e,	// (0x00025a40) hc_cl_list_double_graphic_heading_pane_t2

0x0001,

0xfab5,	// (0x0002de87) hc_cl_list_double_graphic_heading_pane_t_ParamLimits

0xfab5,	// (0x0002de87) hc_cl_list_double_graphic_heading_pane_t

0x245d,	// (0x0002082f) vid4_progress_pane_g1

0x246f,	// (0x00020841) vid4_progress_pane_g2

0xa995,	// (0x00028d67) vid4_progress_pane_g3

0x247f,	// (0x00020851) vid4_progress_pane_g4

0x0004,

0xfaba,	// (0x0002de8c) vid4_progress_pane_g

0x249d,	// (0x0002086f) vid4_progress_pane_t1

0x24b2,	// (0x00020884) vid4_progress_pane_t2

0x0002,

0xfac5,	// (0x0002de97) vid4_progress_pane_t

0x24de,	// (0x000208b0) wait_bar_pane_cp07

0xc542,	// (0x0002a914) blid_firmament_pane_ParamLimits

0xc585,	// (0x0002a957) popup_blid_sat_info2_window_g1

0xc5a9,	// (0x0002a97b) popup_blid_sat_info2_window_t3

0xc5b7,	// (0x0002a989) popup_blid_sat_info2_window_t4

0xc5c5,	// (0x0002a997) popup_blid_sat_info2_window_t5

0xc5d3,	// (0x0002a9a5) popup_blid_sat_info2_window_t6

0xc5e3,	// (0x0002a9b5) popup_blid_sat_info2_window_t7

0xc5f1,	// (0x0002a9c3) popup_blid_sat_info2_window_t8

0xc5ff,	// (0x0002a9d1) popup_blid_sat_info2_window_t9

0xc60d,	// (0x0002a9df) popup_blid_sat_info2_window_t10

0xc6d1,	// (0x0002aaa3) aid_firma_cardinal_ParamLimits

0xc6e5,	// (0x0002aab7) blid_firmament_pane_t1_ParamLimits

0xc6fc,	// (0x0002aace) blid_firmament_pane_t2_ParamLimits

0xc713,	// (0x0002aae5) blid_firmament_pane_t3_ParamLimits

0xc72a,	// (0x0002aafc) blid_firmament_pane_t4_ParamLimits

0xf6d8,	// (0x0002daaa) blid_firmament_pane_t_ParamLimits

0xc741,	// (0x0002ab13) blid_sat_info_pane_ParamLimits

0x1420,	// (0x0001f7f2) main_cam_set_pane_ParamLimits

0x64bb,	// (0x0002488d) aid_size_cell_colour_35_ParamLimits

0x64d5,	// (0x000248a7) aid_size_cell_colour_112_ParamLimits

0x64ec,	// (0x000248be) aid_size_cell_effect_ParamLimits

0xa3ab,	// (0x0002877d) bg_tb_trans_pane_cp02_ParamLimits

0xab61,	// (0x00028f33) heading_imed_pane_ParamLimits

0x6506,	// (0x000248d8) listscroll_imed_pane_ParamLimits

0xb96d,	// (0x00029d3f) popup_call2_audio_first_window_g5_ParamLimits

0xb96d,	// (0x00029d3f) popup_call2_audio_first_window_g5

0x1c33,	// (0x00020005) aid_size_touch_image3_arrow_left_ParamLimits

0x1c33,	// (0x00020005) aid_size_touch_image3_arrow_left

0x1c49,	// (0x0002001b) aid_size_touch_image3_arrow_right_ParamLimits

0x1c49,	// (0x0002001b) aid_size_touch_image3_arrow_right

0x24c8,	// (0x0002089a) vid4_progress_pane_t3

0x67ba,	// (0x00024b8c) main_hwr_training_symbol_option_pane_ParamLimits

0x67ba,	// (0x00024b8c) main_hwr_training_symbol_option_pane

0xcfc0,	// (0x0002b392) popup_hwr_training_preview_window_ParamLimits

0xcfc0,	// (0x0002b392) popup_hwr_training_preview_window

0x1931,	// (0x0001fd03) hwr_training_navi_pane_g5_ParamLimits

0x1931,	// (0x0001fd03) hwr_training_navi_pane_g5

0xd235,	// (0x0002b607) popup_char_count_window

0x0f40,	// (0x0001f312) bg_popup_sub_pane_cp20_ParamLimits

0x239e,	// (0x00020770) list_vitu2_match_list_pane_ParamLimits

0x23aa,	// (0x0002077c) vitu2_page_scroll_pane_ParamLimits

0x23aa,	// (0x0002077c) vitu2_page_scroll_pane

0xd7dc,	// (0x0002bbae) list_single_hwr_training_symbol_option_pane_ParamLimits

0xd7dc,	// (0x0002bbae) list_single_hwr_training_symbol_option_pane

0xd7ef,	// (0x0002bbc1) list_single_hwr_training_symbol_option_pane_g1

0xd7f7,	// (0x0002bbc9) list_single_hwr_training_symbol_option_pane_t1

0xd805,	// (0x0002bbd7) bg_button_pane_cp023

0xd80e,	// (0x0002bbe0) bg_button_pane_cp024

0x76bb,	// (0x00025a8d) vitu2_page_scroll_pane_g1

0x76c3,	// (0x00025a95) vitu2_page_scroll_pane_g2

0x0001,

0xfacc,	// (0x0002de9e) vitu2_page_scroll_pane_g

0x76cb,	// (0x00025a9d) vitu2_page_scroll_pane_t1

0xcd7a,	// (0x0002b14c) popup_char_count_window_g1

0xd841,	// (0x0002bc13) popup_char_count_window_g2

0xd84a,	// (0x0002bc1c) popup_char_count_window_g3

0x0002,

0xfad1,	// (0x0002dea3) popup_char_count_window_g

0xd853,	// (0x0002bc25) popup_char_count_window_t1

0x0f4e,	// (0x0001f320) main_vded2_pane

0xccb6,	// (0x0002b088) aid_size_cell_imed_line

0xccc0,	// (0x0002b092) grid_imed_line_width_pane

0x1f9e,	// (0x00020370) vid4_indicators_pane_g4

0xd861,	// (0x0002bc33) cell_imed_line_width_pane_ParamLimits

0xd861,	// (0x0002bc33) cell_imed_line_width_pane

0xd875,	// (0x0002bc47) cell_imed_line_width_pane_g1

0xd6b9,	// (0x0002ba8b) cell_imed_line_width_pane_g2

0x0001,

0xfad8,	// (0x0002deaa) cell_imed_line_width_pane_g

0x76da,	// (0x00025aac) main_vded2_pane_g1_ParamLimits

0x76da,	// (0x00025aac) main_vded2_pane_g1

0x76e7,	// (0x00025ab9) main_vded2_pane_g2_ParamLimits

0x76e7,	// (0x00025ab9) main_vded2_pane_g2

0x0001,

0xfadd,	// (0x0002deaf) main_vded2_pane_g_ParamLimits

0xfadd,	// (0x0002deaf) main_vded2_pane_g

0x76f5,	// (0x00025ac7) vded2_slider_pane_ParamLimits

0x76f5,	// (0x00025ac7) vded2_slider_pane

0x7702,	// (0x00025ad4) aid_size_touch_vded2_end

0x770c,	// (0x00025ade) aid_size_touch_vded2_playhead

0xd87e,	// (0x0002bc50) aid_size_touch_vded2_start

0xd886,	// (0x0002bc58) vded2_slider_bg_pane

0xd88f,	// (0x0002bc61) vded2_slider_pane_g1

0xd898,	// (0x0002bc6a) vded2_slider_pane_g2

0x7714,	// (0x00025ae6) vded2_slider_pane_g3

0x0002,

0xfae2,	// (0x0002deb4) vded2_slider_pane_g

0xd8aa,	// (0x0002bc7c) vded2_slider_bg_pane_g1

0xd8b3,	// (0x0002bc85) vded2_slider_bg_pane_g2

0xd8bc,	// (0x0002bc8e) vded2_slider_bg_pane_g3

0x0002,

0xfae9,	// (0x0002debb) vded2_slider_bg_pane_g

0x4d7a,	// (0x0002314c) aid_postcard_touch_down_pane_ParamLimits

0x4d7a,	// (0x0002314c) aid_postcard_touch_down_pane

0x4d8a,	// (0x0002315c) aid_postcard_touch_up_pane_ParamLimits

0x4d8a,	// (0x0002315c) aid_postcard_touch_up_pane

0x0f4e,	// (0x0001f320) main_blid2_pane

0x1449,	// (0x0001f81b) popup_blid2_search_window

0x9b42,	// (0x00027f14) blid2_gps_pane

0x9b42,	// (0x00027f14) blid2_navig_pane

0x9b42,	// (0x00027f14) blid2_search_pane

0x9b42,	// (0x00027f14) blid2_tripm_pane

0x771d,	// (0x00025aef) blid2_search_pane_g1_ParamLimits

0x771d,	// (0x00025aef) blid2_search_pane_g1

0x772d,	// (0x00025aff) blid2_search_pane_t1_ParamLimits

0x772d,	// (0x00025aff) blid2_search_pane_t1

0x773f,	// (0x00025b11) aid_size_cell_blid2_gps_ParamLimits

0x773f,	// (0x00025b11) aid_size_cell_blid2_gps

0x774f,	// (0x00025b21) blid2_gps_pane_g1_ParamLimits

0x774f,	// (0x00025b21) blid2_gps_pane_g1

0x775b,	// (0x00025b2d) grid_blid2_satellite_pane_ParamLimits

0x775b,	// (0x00025b2d) grid_blid2_satellite_pane

0x776b,	// (0x00025b3d) blid2_navig_pane_g1_ParamLimits

0x776b,	// (0x00025b3d) blid2_navig_pane_g1

0x7777,	// (0x00025b49) blid2_navig_pane_t1_ParamLimits

0x7777,	// (0x00025b49) blid2_navig_pane_t1

0x7789,	// (0x00025b5b) blid2_navig_pane_t2_ParamLimits

0x7789,	// (0x00025b5b) blid2_navig_pane_t2

0x0001,

0xfaf0,	// (0x0002dec2) blid2_navig_pane_t_ParamLimits

0xfaf0,	// (0x0002dec2) blid2_navig_pane_t

0x779b,	// (0x00025b6d) blid2_navig_ring_pane_ParamLimits

0x779b,	// (0x00025b6d) blid2_navig_ring_pane

0x77ab,	// (0x00025b7d) blid2_speed_pane_ParamLimits

0x77ab,	// (0x00025b7d) blid2_speed_pane

0x77b7,	// (0x00025b89) blid2_tripm_pane_g1_ParamLimits

0x77b7,	// (0x00025b89) blid2_tripm_pane_g1

0x77c7,	// (0x00025b99) blid2_tripm_pane_g2_ParamLimits

0x77c7,	// (0x00025b99) blid2_tripm_pane_g2

0x77d3,	// (0x00025ba5) blid2_tripm_pane_g3_ParamLimits

0x77d3,	// (0x00025ba5) blid2_tripm_pane_g3

0x77df,	// (0x00025bb1) blid2_tripm_pane_g4_ParamLimits

0x77df,	// (0x00025bb1) blid2_tripm_pane_g4

0x77eb,	// (0x00025bbd) blid2_tripm_pane_g5_ParamLimits

0x77eb,	// (0x00025bbd) blid2_tripm_pane_g5

0x0005,

0xfaf5,	// (0x0002dec7) blid2_tripm_pane_g_ParamLimits

0xfaf5,	// (0x0002dec7) blid2_tripm_pane_g

0x7807,	// (0x00025bd9) blid2_tripm_pane_t1_ParamLimits

0x7807,	// (0x00025bd9) blid2_tripm_pane_t1

0x781b,	// (0x00025bed) blid2_tripm_pane_t2_ParamLimits

0x781b,	// (0x00025bed) blid2_tripm_pane_t2

0x782d,	// (0x00025bff) blid2_tripm_pane_t3_ParamLimits

0x782d,	// (0x00025bff) blid2_tripm_pane_t3

0x0003,

0xfb02,	// (0x0002ded4) blid2_tripm_pane_t_ParamLimits

0xfb02,	// (0x0002ded4) blid2_tripm_pane_t

0x785f,	// (0x00025c31) cell_blid2_satellite_pane_ParamLimits

0x785f,	// (0x00025c31) cell_blid2_satellite_pane

0x7879,	// (0x00025c4b) cell_blid2_satellite_pane_g1

0xd8c5,	// (0x0002bc97) cell_blid2_satellite_pane_t1

0xc751,	// (0x0002ab23) blid2_speed_pane_g1

0xd8d3,	// (0x0002bca5) blid2_speed_pane_t1

0xd8e1,	// (0x0002bcb3) blid2_speed_pane_t2

0x0001,

0xfb0b,	// (0x0002dedd) blid2_speed_pane_t

0xc751,	// (0x0002ab23) blid2_navig_ring_pane_g1

0x7882,	// (0x00025c54) blid2_navig_ring_pane_g2

0x788a,	// (0x00025c5c) blid2_navig_ring_pane_g3

0x7892,	// (0x00025c64) blid2_navig_ring_pane_g4

0x789a,	// (0x00025c6c) blid2_navig_ring_pane_g5

0x0004,

0xfb10,	// (0x0002dee2) blid2_navig_ring_pane_g

0x9b42,	// (0x00027f14) bg_popup_window_pane_cp011

0xd8ef,	// (0x0002bcc1) popup_blid2_search_window_g1

0xd8f7,	// (0x0002bcc9) popup_blid2_search_window_t1

0xd905,	// (0x0002bcd7) popup_blid2_search_window_t2

0x0001,

0xfb1b,	// (0x0002deed) popup_blid2_search_window_t

0xa5bb,	// (0x0002898d) main_browser_pane_g1

0xa29e,	// (0x00028670) main_browser_pane_ParamLimits

0x1420,	// (0x0001f7f2) bg_button_pane_cp011_ParamLimits

0x22bb,	// (0x0002068d) cell_vitu2_function_pane_g1_ParamLimits

0xc347,	// (0x0002a719) bg_popup_sub_pane_cp22_ParamLimits

0x7218,	// (0x000255ea) input_focus_pane_cp08_ParamLimits

0x722f,	// (0x00025601) popup_vitu2_query_button_pane_ParamLimits

0x722f,	// (0x00025601) popup_vitu2_query_button_pane

0x7240,	// (0x00025612) popup_vitu2_query_input_button_pane

0xd4c4,	// (0x0002b896) popup_vitu2_query_window_g1_ParamLimits

0x724a,	// (0x0002561c) popup_vitu2_query_window_g2_ParamLimits

0xfa1c,	// (0x0002ddee) popup_vitu2_query_window_g_ParamLimits

0x9b42,	// (0x00027f14) bg_button_pane_cp026

0x78a2,	// (0x00025c74) popup_vitu2_query_input_button_pane_g1

0x9b42,	// (0x00027f14) bg_button_pane_cp025

0xd913,	// (0x0002bce5) popup_vitu2_query_button_pane_t1

0x5ab2,	// (0x00023e84) main_mp3_pane_t6

0x5ac2,	// (0x00023e94) popup_slider_window_cp01

0x1e7d,	// (0x0002024f) cam4_battery_pane

0x1f5d,	// (0x0002032f) cam4_battery_pane_cp02

0x2455,	// (0x00020827) cam4_battery_pane_cp01

0x2455,	// (0x00020827) cam4_battery_pane_cp03

0xd8a0,	// (0x0002bc72) cam4_battery_pane_g1

0xc751,	// (0x0002ab23) cam4_battery_pane_g2

0x0001,

0xfb20,	// (0x0002def2) cam4_battery_pane_g

0xc61b,	// (0x0002a9ed) popup_blid_sat_info2_window_t11

0xad44,	// (0x00029116) aid_size_touch_mv_arrow_left_ParamLimits

0xad6f,	// (0x00029141) aid_size_touch_mv_arrow_right_ParamLimits

0xadcd,	// (0x0002919f) navi_pane_g1_ParamLimits

0xadd9,	// (0x000291ab) navi_pane_g2_ParamLimits

0xae07,	// (0x000291d9) navi_pane_g3_ParamLimits

0xf3ea,	// (0x0002d7bc) navi_pane_g_ParamLimits

0x47ce,	// (0x00022ba0) navi_pane_mv_t1_ParamLimits

0x6512,	// (0x000248e4) grid_imed_effect_pane_ParamLimits

0x31d5,	// (0x000215a7) aid_placing_vt_slider_lsc

0xa50a,	// (0x000288dc) aid_placing_vt_slider_prt

0xa3ab,	// (0x0002877d) bg_tb_trans_pane_cp01_ParamLimits

0xc8d1,	// (0x0002aca3) popup_image_details_window_g1_ParamLimits

0xc8e4,	// (0x0002acb6) popup_image_details_window_g2_ParamLimits

0xc8f9,	// (0x0002accb) popup_image_details_window_g3_ParamLimits

0xc8f9,	// (0x0002accb) popup_image_details_window_g3

0xf71d,	// (0x0002daef) popup_image_details_window_g_ParamLimits

0xc90d,	// (0x0002acdf) popup_image_details_window_t1_ParamLimits

0xc91f,	// (0x0002acf1) popup_image_details_window_t2_ParamLimits

0xc938,	// (0x0002ad0a) popup_image_details_window_t3_ParamLimits

0xc94c,	// (0x0002ad1e) popup_image_details_window_t4_ParamLimits

0xc967,	// (0x0002ad39) popup_image_details_window_t5_ParamLimits

0xf724,	// (0x0002daf6) popup_image_details_window_t_ParamLimits

0x75a3,	// (0x00025975) cl_header_name_pane_ParamLimits

0x75a3,	// (0x00025975) cl_header_name_pane

0x78aa,	// (0x00025c7c) cl_header_name_pane_t1_ParamLimits

0x78aa,	// (0x00025c7c) cl_header_name_pane_t1

0x78c1,	// (0x00025c93) cl_header_name_pane_t2_ParamLimits

0x78c1,	// (0x00025c93) cl_header_name_pane_t2

0x78eb,	// (0x00025cbd) cl_header_name_pane_t3_ParamLimits

0x78eb,	// (0x00025cbd) cl_header_name_pane_t3

0x0002,

0xfb25,	// (0x0002def7) cl_header_name_pane_t_ParamLimits

0xfb25,	// (0x0002def7) cl_header_name_pane_t

0xae96,	// (0x00029268) navi_pane_mv_g2_ParamLimits

0xd1f2,	// (0x0002b5c4) field_vitu2_entry_pane_g1_ParamLimits

0xd1fe,	// (0x0002b5d0) field_vitu2_entry_pane_g2_ParamLimits

0xd20a,	// (0x0002b5dc) field_vitu2_entry_pane_g3_ParamLimits

0xd20a,	// (0x0002b5dc) field_vitu2_entry_pane_g3

0xf91b,	// (0x0002dced) field_vitu2_entry_pane_g_ParamLimits

0x2183,	// (0x00020555) cell_vitu2_itu_pane_g1_ParamLimits

0x2193,	// (0x00020565) cell_vitu2_itu_pane_g2_ParamLimits

0x2193,	// (0x00020565) cell_vitu2_itu_pane_g2

0x0001,

0xf927,	// (0x0002dcf9) cell_vitu2_itu_pane_g_ParamLimits

0xf927,	// (0x0002dcf9) cell_vitu2_itu_pane_g

0x1420,	// (0x0001f7f2) bg_vkb2_func_pane_cp05_ParamLimits

0x1420,	// (0x0001f7f2) bg_vkb2_func_pane_cp05

0x1420,	// (0x0001f7f2) bg_vkb2_func_pane_cp03

0x1420,	// (0x0001f7f2) bg_vkb2_func_pane_cp04

0x1420,	// (0x0001f7f2) bg_vkb2_func_pane_cp10_ParamLimits

0x1420,	// (0x0001f7f2) bg_vkb2_func_pane_cp10

0x7545,	// (0x00025917) bg_vkb2_func_pane_cp08

0x752b,	// (0x000258fd) bg_vkb2_func_pane_cp06

0x7539,	// (0x0002590b) bg_vkb2_func_pane_cp07

0xd817,	// (0x0002bbe9) bg_vkb2_func_pane_cp11_ParamLimits

0xd817,	// (0x0002bbe9) bg_vkb2_func_pane_cp11

0xd82c,	// (0x0002bbfe) bg_vkb2_func_pane_cp12_ParamLimits

0xd82c,	// (0x0002bbfe) bg_vkb2_func_pane_cp12

0x9b42,	// (0x00027f14) bg_vkb2_func_pane_cp09

0xd247,	// (0x0002b619) bg_vkb2_func_pane_g1

0xa6cc,	// (0x00028a9e) bg_vkb2_func_pane_g2

0xd24f,	// (0x0002b621) bg_vkb2_func_pane_g3

0xd257,	// (0x0002b629) bg_vkb2_func_pane_g4

0xd489,	// (0x0002b85b) bg_vkb2_func_pane_g5

0xd26f,	// (0x0002b641) bg_vkb2_func_pane_g6

0xd277,	// (0x0002b649) bg_vkb2_func_pane_g7

0xd267,	// (0x0002b639) bg_vkb2_func_pane_g8

0xa6ac,	// (0x00028a7e) bg_vkb2_func_pane_g9

0x0008,

0xfb2c,	// (0x0002defe) bg_vkb2_func_pane_g

0x77f9,	// (0x00025bcb) blid2_tripm_pane_g6_ParamLimits

0x77f9,	// (0x00025bcb) blid2_tripm_pane_g6

0xd078,	// (0x0002b44a) mp4_progress_pane_g1

0x7853,	// (0x00025c25) blid2_tripm_values_pane_ParamLimits

0x7853,	// (0x00025c25) blid2_tripm_values_pane

0x7910,	// (0x00025ce2) blid2_tripm_values_pane_t1

0x791e,	// (0x00025cf0) blid2_tripm_values_pane_t2

0x792c,	// (0x00025cfe) blid2_tripm_values_pane_t3

0x793a,	// (0x00025d0c) blid2_tripm_values_pane_t4

0x7948,	// (0x00025d1a) blid2_tripm_values_pane_t5

0x7956,	// (0x00025d28) blid2_tripm_values_pane_t6

0x7964,	// (0x00025d36) blid2_tripm_values_pane_t7

0x7972,	// (0x00025d44) blid2_tripm_values_pane_t8

0x7980,	// (0x00025d52) blid2_tripm_values_pane_t9

0x0008,

0xfb3f,	// (0x0002df11) blid2_tripm_values_pane_t

0x3215,	// (0x000215e7) call_video_pane_t1_ParamLimits

0x3236,	// (0x00021608) call_video_pane_t2_ParamLimits

0xf273,	// (0x0002d645) call_video_pane_t_ParamLimits

0x4cf7,	// (0x000230c9) msg_header_pane_g1_ParamLimits

0xb06f,	// (0x00029441) msg_header_pane_g2_ParamLimits

0xb06f,	// (0x00029441) msg_header_pane_g2

0x0001,

0xf48d,	// (0x0002d85f) msg_header_pane_g_ParamLimits

0xf48d,	// (0x0002d85f) msg_header_pane_g

0xa29e,	// (0x00028670) main_clock2_pane_ParamLimits

0x631b,	// (0x000246ed) grid_clock2_toolbar_pane_ParamLimits

0x631b,	// (0x000246ed) grid_clock2_toolbar_pane

0x631b,	// (0x000246ed) listscroll_clock2_pane_ParamLimits

0x631b,	// (0x000246ed) listscroll_clock2_pane

0x63c5,	// (0x00024797) main_clock2_pane_t3_ParamLimits

0x63c5,	// (0x00024797) main_clock2_pane_t3

0x63d7,	// (0x000247a9) main_clock2_pane_t4_ParamLimits

0x63d7,	// (0x000247a9) main_clock2_pane_t4

0xd921,	// (0x0002bcf3) cell_clock2_toolbar_pane

0xd929,	// (0x0002bcfb) cell_clock2_toolbar_pane_cp01

0xd929,	// (0x0002bcfb) cell_clock2_toolbar_pane_cp02

0xd931,	// (0x0002bd03) cell_clock2_toolbar_pane_cp03

0xd939,	// (0x0002bd0b) list_clock2_pane

0xacba,	// (0x0002908c) scroll_pane_cp10

0xd941,	// (0x0002bd13) list_single_clock2_pane_ParamLimits

0xd941,	// (0x0002bd13) list_single_clock2_pane

0xaefd,	// (0x000292cf) list_highlight_pane_cp08

0xd94e,	// (0x0002bd20) list_single_clock2_pane_t1

0xd95c,	// (0x0002bd2e) list_single_clock2_pane_t2

0x0001,

0xfb52,	// (0x0002df24) list_single_clock2_pane_t

0x9b42,	// (0x00027f14) bg_button_pane_cp10

0xd96a,	// (0x0002bd3c) cell_clock2_toolbar_pane_g1

0x13bb,	// (0x0001f78d) aid_main_viewer_pane_g1_ParamLimits

0x13bb,	// (0x0001f78d) aid_main_viewer_pane_g1

0x13c7,	// (0x0001f799) aid_main_viewer_pane_g2_ParamLimits

0x13c7,	// (0x0001f799) aid_main_viewer_pane_g2

0x4d36,	// (0x00023108) aid_main_viewer_pane_g3_ParamLimits

0x4d36,	// (0x00023108) aid_main_viewer_pane_g3

0x4d47,	// (0x00023119) aid_main_viewer_pane_g4_ParamLimits

0x4d47,	// (0x00023119) aid_main_viewer_pane_g4

0x0003,

0xf49e,	// (0x0002d870) aid_main_viewer_pane_g_ParamLimits

0xf49e,	// (0x0002d870) aid_main_viewer_pane_g

0x1413,	// (0x0001f7e5) main_calc_pane_ParamLimits

0x142e,	// (0x0001f800) main_dialer2_pane_ParamLimits

0x0f4e,	// (0x0001f320) main_cam6_pane

0x0f4e,	// (0x0001f320) main_vid6_pane

0x6327,	// (0x000246f9) listscroll_gen_pane_cp06_ParamLimits

0x6327,	// (0x000246f9) listscroll_gen_pane_cp06

0x63e9,	// (0x000247bb) main_clock2_pane_t5_ParamLimits

0x63e9,	// (0x000247bb) main_clock2_pane_t5

0x6434,	// (0x00024806) aid_call2_pane_cp10_ParamLimits

0x6446,	// (0x00024818) aid_call_pane_cp10_ParamLimits

0xad38,	// (0x0002910a) popup_clock_analogue_window_cp10_g1_ParamLimits

0xad38,	// (0x0002910a) popup_clock_analogue_window_cp10_g2_ParamLimits

0x6458,	// (0x0002482a) popup_clock_analogue_window_cp10_g3_ParamLimits

0x6458,	// (0x0002482a) popup_clock_analogue_window_cp10_g4_ParamLimits

0xad38,	// (0x0002910a) popup_clock_analogue_window_cp10_g5_ParamLimits

0xf7d4,	// (0x0002dba6) popup_clock_analogue_window_cp10_g_ParamLimits

0x646a,	// (0x0002483c) popup_clock_analogue_window_cp10_t1_ParamLimits

0x689a,	// (0x00024c6c) cell_dialer2_keypad_pane_g2_ParamLimits

0x689a,	// (0x00024c6c) cell_dialer2_keypad_pane_g2

0x0001,

0xf8ba,	// (0x0002dc8c) cell_dialer2_keypad_pane_g_ParamLimits

0xf8ba,	// (0x0002dc8c) cell_dialer2_keypad_pane_g

0x68b6,	// (0x00024c88) cell_dialer2_keypad_pane_t1

0x6cf8,	// (0x000250ca) main_cset_text2_pane_ParamLimits

0x6cf8,	// (0x000250ca) main_cset_text2_pane

0xd6c1,	// (0x0002ba93) area_vitu2_query_pane_g1_ParamLimits

0x74ca,	// (0x0002589c) area_vitu2_query_pane_g2_ParamLimits

0xfa6f,	// (0x0002de41) area_vitu2_query_pane_g_ParamLimits

0xd745,	// (0x0002bb17) area_vitu2_query_pane_t7_ParamLimits

0xd745,	// (0x0002bb17) area_vitu2_query_pane_t7

0x752b,	// (0x000258fd) bg_button_pane_cp018_ParamLimits

0x7539,	// (0x0002590b) bg_button_pane_cp021_ParamLimits

0x7545,	// (0x00025917) bg_button_pane_cp022_ParamLimits

0x7545,	// (0x00025917) bg_vkb2_func_pane_cp08_ParamLimits

0x752b,	// (0x000258fd) bg_vkb2_func_pane_cp06_ParamLimits

0x7539,	// (0x0002590b) bg_vkb2_func_pane_cp07_ParamLimits

0x7556,	// (0x00025928) input_focus_pane_cp09_ParamLimits

0x24ee,	// (0x000208c0) cam6_autofocus_pane_ParamLimits

0x24ee,	// (0x000208c0) cam6_autofocus_pane

0x2510,	// (0x000208e2) cam6_image_uncrop_pane_ParamLimits

0x2510,	// (0x000208e2) cam6_image_uncrop_pane

0x253d,	// (0x0002090f) cam6_indi_pane_ParamLimits

0x253d,	// (0x0002090f) cam6_indi_pane

0x2557,	// (0x00020929) cam6_mode_pane_ParamLimits

0x2557,	// (0x00020929) cam6_mode_pane

0x256b,	// (0x0002093d) cam6_timer_pane_ParamLimits

0x256b,	// (0x0002093d) cam6_timer_pane

0x2577,	// (0x00020949) cam6_zoom_pane_ParamLimits

0x2577,	// (0x00020949) cam6_zoom_pane

0x798e,	// (0x00025d60) cam6_mode_pane_g1_ParamLimits

0x798e,	// (0x00025d60) cam6_mode_pane_g1

0x799a,	// (0x00025d6c) cam6_mode_pane_g2_ParamLimits

0x799a,	// (0x00025d6c) cam6_mode_pane_g2

0x79a6,	// (0x00025d78) cam6_mode_pane_g3_ParamLimits

0x79a6,	// (0x00025d78) cam6_mode_pane_g3

0x79b2,	// (0x00025d84) cam6_mode_pane_g4_ParamLimits

0x79b2,	// (0x00025d84) cam6_mode_pane_g4

0x0003,

0xfb57,	// (0x0002df29) cam6_mode_pane_g_ParamLimits

0xfb57,	// (0x0002df29) cam6_mode_pane_g

0xd1cb,	// (0x0002b59d) bg_tb_trans_pane_cp08_ParamLimits

0xd1cb,	// (0x0002b59d) bg_tb_trans_pane_cp08

0xd972,	// (0x0002bd44) cam6_battery_pane_ParamLimits

0xd972,	// (0x0002bd44) cam6_battery_pane

0xd988,	// (0x0002bd5a) cam6_indi_pane_g1_ParamLimits

0xd988,	// (0x0002bd5a) cam6_indi_pane_g1

0xd99a,	// (0x0002bd6c) cam6_indi_pane_g2_ParamLimits

0xd99a,	// (0x0002bd6c) cam6_indi_pane_g2

0xd9ac,	// (0x0002bd7e) cam6_indi_pane_g3_ParamLimits

0xd9ac,	// (0x0002bd7e) cam6_indi_pane_g3

0x0002,

0x08ba,	// (0x0001ec8c) cam6_indi_pane_g_ParamLimits

0x08ba,	// (0x0001ec8c) cam6_indi_pane_g

0xd9be,	// (0x0002bd90) cam6_indi_pane_t1_ParamLimits

0xd9be,	// (0x0002bd90) cam6_indi_pane_t1

0x69f5,	// (0x00024dc7) cam6_autofocus_pane_g1

0x69ed,	// (0x00024dbf) cam6_autofocus_pane_g2

0x6a05,	// (0x00024dd7) cam6_autofocus_pane_g3

0x69fd,	// (0x00024dcf) cam6_autofocus_pane_g4

0x0003,

0xfb60,	// (0x0002df32) cam6_autofocus_pane_g

0xd9e4,	// (0x0002bdb6) cam6_timer_pane_g1

0xd9ec,	// (0x0002bdbe) cam6_timer_pane_t1

0xd9fa,	// (0x0002bdcc) cam6_zoom_cont_pane

0xda02,	// (0x0002bdd4) cam6_zoom_pane_g1

0xda0a,	// (0x0002bddc) cam6_zoom_pane_g2

0x79be,	// (0x00025d90) cam6_zoom_pane_g3

0x0002,

0xfb69,	// (0x0002df3b) cam6_zoom_pane_g

0xc751,	// (0x0002ab23) cam6_battery_pane_g1

0xc751,	// (0x0002ab23) cam6_battery_pane_g2

0x0001,

0xf6e1,	// (0x0002dab3) cam6_battery_pane_g

0xda12,	// (0x0002bde4) cam6_zoom_cont_pane_g1

0xda1b,	// (0x0002bded) cam6_zoom_cont_pane_g2

0xda24,	// (0x0002bdf6) cam6_zoom_cont_pane_g3

0x0002,

0x08d1,	// (0x0001eca3) cam6_zoom_cont_pane_g

0x79db,	// (0x00025dad) cam6_mode_pane_cp_ParamLimits

0x79db,	// (0x00025dad) cam6_mode_pane_cp

0x79ef,	// (0x00025dc1) cam6_zoom_pane_cp_ParamLimits

0x79ef,	// (0x00025dc1) cam6_zoom_pane_cp

0x7a07,	// (0x00025dd9) vid6_image_uncrop_cif_pane_ParamLimits

0x7a07,	// (0x00025dd9) vid6_image_uncrop_cif_pane

0x7a33,	// (0x00025e05) vid6_image_uncrop_nhd_pane_ParamLimits

0x7a33,	// (0x00025e05) vid6_image_uncrop_nhd_pane

0x7a50,	// (0x00025e22) vid6_image_uncrop_vga_pane_ParamLimits

0x7a50,	// (0x00025e22) vid6_image_uncrop_vga_pane

0x7a6f,	// (0x00025e41) vid6_image_uncrop_wvga_pane_ParamLimits

0x7a6f,	// (0x00025e41) vid6_image_uncrop_wvga_pane

0x7a8c,	// (0x00025e5e) vid6_indi_pane_ParamLimits

0x7a8c,	// (0x00025e5e) vid6_indi_pane

0xd1cb,	// (0x0002b59d) bg_tb_trans_pane_cp09_ParamLimits

0xd1cb,	// (0x0002b59d) bg_tb_trans_pane_cp09

0xda3c,	// (0x0002be0e) cam6_battery_pane_cp_ParamLimits

0xda3c,	// (0x0002be0e) cam6_battery_pane_cp

0xda48,	// (0x0002be1a) vid6_indi_pane_g1_ParamLimits

0xda48,	// (0x0002be1a) vid6_indi_pane_g1

0xda5a,	// (0x0002be2c) vid6_indi_pane_g2_ParamLimits

0xda5a,	// (0x0002be2c) vid6_indi_pane_g2

0xda6c,	// (0x0002be3e) vid6_indi_pane_g3_ParamLimits

0xda6c,	// (0x0002be3e) vid6_indi_pane_g3

0xda81,	// (0x0002be53) vid6_indi_pane_g4_ParamLimits

0xda81,	// (0x0002be53) vid6_indi_pane_g4

0xda96,	// (0x0002be68) vid6_indi_pane_g5_ParamLimits

0xda96,	// (0x0002be68) vid6_indi_pane_g5

0x0004,

0x08d8,	// (0x0001ecaa) vid6_indi_pane_g_ParamLimits

0x08d8,	// (0x0001ecaa) vid6_indi_pane_g

0xdab0,	// (0x0002be82) vid6_indi_pane_t1_ParamLimits

0xdab0,	// (0x0002be82) vid6_indi_pane_t1

0xdac6,	// (0x0002be98) vid6_indi_pane_t2_ParamLimits

0xdac6,	// (0x0002be98) vid6_indi_pane_t2

0xdaee,	// (0x0002bec0) vid6_indi_pane_t3_ParamLimits

0xdaee,	// (0x0002bec0) vid6_indi_pane_t3

0xdb16,	// (0x0002bee8) vid6_indi_pane_t4_ParamLimits

0xdb16,	// (0x0002bee8) vid6_indi_pane_t4

0x0003,

0x08e3,	// (0x0001ecb5) vid6_indi_pane_t_ParamLimits

0x08e3,	// (0x0001ecb5) vid6_indi_pane_t

0xdb3a,	// (0x0002bf0c) wait_bar_pane_cp08

0x7aaf,	// (0x00025e81) main_cset_text2_pane_t1_ParamLimits

0x7aaf,	// (0x00025e81) main_cset_text2_pane_t1

0x79c6,	// (0x00025d98) listscroll_gen_pane_cp06_t1_ParamLimits

0x79c6,	// (0x00025d98) listscroll_gen_pane_cp06_t1

0x0f4e,	// (0x0001f320) main_cam6_set_pane

0x1e6f,	// (0x00020241) bg_tb_trans_pane_cp06_ParamLimits

0x1e85,	// (0x00020257) cam4_indicators_pane_g1_ParamLimits

0x1e96,	// (0x00020268) cam4_indicators_pane_g2_ParamLimits

0xf8f7,	// (0x0002dcc9) cam4_indicators_pane_g_ParamLimits

0x1eb4,	// (0x00020286) cam4_indicators_pane_t1_ParamLimits

0x1420,	// (0x0001f7f2) bg_tb_trans_pane_cp07_ParamLimits

0x1f65,	// (0x00020337) vid4_indicators_pane_g1_ParamLimits

0x1f79,	// (0x0002034b) vid4_indicators_pane_g2_ParamLimits

0x1f8d,	// (0x0002035f) vid4_indicators_pane_g3_ParamLimits

0x1f9e,	// (0x00020370) vid4_indicators_pane_g4_ParamLimits

0xf909,	// (0x0002dcdb) vid4_indicators_pane_g_ParamLimits

0x1fba,	// (0x0002038c) vid4_indicators_pane_t1_ParamLimits

0x245d,	// (0x0002082f) vid4_progress_pane_g1_ParamLimits

0x246f,	// (0x00020841) vid4_progress_pane_g2_ParamLimits

0xa995,	// (0x00028d67) vid4_progress_pane_g3_ParamLimits

0x247f,	// (0x00020851) vid4_progress_pane_g4_ParamLimits

0xfaba,	// (0x0002de8c) vid4_progress_pane_g_ParamLimits

0x249d,	// (0x0002086f) vid4_progress_pane_t1_ParamLimits

0x24b2,	// (0x00020884) vid4_progress_pane_t2_ParamLimits

0x24c8,	// (0x0002089a) vid4_progress_pane_t3_ParamLimits

0xfac5,	// (0x0002de97) vid4_progress_pane_t_ParamLimits

0x24de,	// (0x000208b0) wait_bar_pane_cp07_ParamLimits

0x7ae9,	// (0x00025ebb) main_cam6_set_pane_g2_ParamLimits

0x7ae9,	// (0x00025ebb) main_cam6_set_pane_g2

0x7af5,	// (0x00025ec7) main_cset6_listscroll_pane_ParamLimits

0x7af5,	// (0x00025ec7) main_cset6_listscroll_pane

0x7b20,	// (0x00025ef2) main_cset6_slider_pane_ParamLimits

0x7b20,	// (0x00025ef2) main_cset6_slider_pane

0x7b2c,	// (0x00025efe) main_cset6_text2_pane_ParamLimits

0x7b2c,	// (0x00025efe) main_cset6_text2_pane

0xdb49,	// (0x0002bf1b) main_cset6_text_pane

0xdb51,	// (0x0002bf23) main_cset_list_pane_copy1_ParamLimits

0xdb51,	// (0x0002bf23) main_cset_list_pane_copy1

0xdb61,	// (0x0002bf33) scroll_pane_cp028_copy1

0x7b3f,	// (0x00025f11) cset_list_set_pane_copy1

0x7b58,	// (0x00025f2a) aid_position_infowindow_above_copy1

0x7b60,	// (0x00025f32) aid_position_infowindow_below_copy1

0x7b68,	// (0x00025f3a) cset_list_set_pane_g1_copy1

0x6ff9,	// (0x000253cb) cset_list_set_pane_g3_copy1_ParamLimits

0x6ff9,	// (0x000253cb) cset_list_set_pane_g3_copy1

0x7008,	// (0x000253da) cset_list_set_pane_t1_copy1_ParamLimits

0x7008,	// (0x000253da) cset_list_set_pane_t1_copy1

0xa3ab,	// (0x0002877d) list_highlight_pane_cp021_copy1_ParamLimits

0xa3ab,	// (0x0002877d) list_highlight_pane_cp021_copy1

0xdb6a,	// (0x0002bf3c) cset6_slider_pane_ParamLimits

0xdb6a,	// (0x0002bf3c) cset6_slider_pane

0xdb96,	// (0x0002bf68) main_cset6_slider_pane_g1_ParamLimits

0xdb96,	// (0x0002bf68) main_cset6_slider_pane_g1

0x7b70,	// (0x00025f42) main_cset6_slider_pane_g2_ParamLimits

0x7b70,	// (0x00025f42) main_cset6_slider_pane_g2

0xdbbe,	// (0x0002bf90) main_cset6_slider_pane_g3_ParamLimits

0xdbbe,	// (0x0002bf90) main_cset6_slider_pane_g3

0x7b98,	// (0x00025f6a) main_cset6_slider_pane_g4_ParamLimits

0x7b98,	// (0x00025f6a) main_cset6_slider_pane_g4

0x7ba4,	// (0x00025f76) main_cset6_slider_pane_g5_ParamLimits

0x7ba4,	// (0x00025f76) main_cset6_slider_pane_g5

0xd376,	// (0x0002b748) main_cset6_slider_pane_g7_ParamLimits

0xd376,	// (0x0002b748) main_cset6_slider_pane_g7

0xd382,	// (0x0002b754) main_cset6_slider_pane_g8_ParamLimits

0xd382,	// (0x0002b754) main_cset6_slider_pane_g8

0x7bb2,	// (0x00025f84) main_cset6_slider_pane_g9_ParamLimits

0x7bb2,	// (0x00025f84) main_cset6_slider_pane_g9

0x7bbe,	// (0x00025f90) main_cset6_slider_pane_g10_ParamLimits

0x7bbe,	// (0x00025f90) main_cset6_slider_pane_g10

0x7bca,	// (0x00025f9c) main_cset6_slider_pane_g11_ParamLimits

0x7bca,	// (0x00025f9c) main_cset6_slider_pane_g11

0x7bd6,	// (0x00025fa8) main_cset6_slider_pane_g12_ParamLimits

0x7bd6,	// (0x00025fa8) main_cset6_slider_pane_g12

0x7be2,	// (0x00025fb4) main_cset6_slider_pane_g13_ParamLimits

0x7be2,	// (0x00025fb4) main_cset6_slider_pane_g13

0x7bee,	// (0x00025fc0) main_cset6_slider_pane_g14_ParamLimits

0x7bee,	// (0x00025fc0) main_cset6_slider_pane_g14

0x7bfa,	// (0x00025fcc) main_cset6_slider_pane_g15_ParamLimits

0x7bfa,	// (0x00025fcc) main_cset6_slider_pane_g15

0x7c12,	// (0x00025fe4) main_cset6_slider_pane_g16_ParamLimits

0x7c12,	// (0x00025fe4) main_cset6_slider_pane_g16

0x7c20,	// (0x00025ff2) main_cset6_slider_pane_g17_ParamLimits

0x7c20,	// (0x00025ff2) main_cset6_slider_pane_g17

0x0011,

0xfb70,	// (0x0002df42) main_cset6_slider_pane_g_ParamLimits

0xfb70,	// (0x0002df42) main_cset6_slider_pane_g

0xdbca,	// (0x0002bf9c) main_cset6_slider_pane_t1_ParamLimits

0xdbca,	// (0x0002bf9c) main_cset6_slider_pane_t1

0x7c46,	// (0x00026018) main_cset6_slider_pane_t2_ParamLimits

0x7c46,	// (0x00026018) main_cset6_slider_pane_t2

0x7c71,	// (0x00026043) main_cset6_slider_pane_t3_ParamLimits

0x7c71,	// (0x00026043) main_cset6_slider_pane_t3

0x7c9c,	// (0x0002606e) main_cset6_slider_pane_t4_ParamLimits

0x7c9c,	// (0x0002606e) main_cset6_slider_pane_t4

0x7cc7,	// (0x00026099) main_cset6_slider_pane_t5_ParamLimits

0x7cc7,	// (0x00026099) main_cset6_slider_pane_t5

0xdc0b,	// (0x0002bfdd) main_cset6_slider_pane_t7_ParamLimits

0xdc0b,	// (0x0002bfdd) main_cset6_slider_pane_t7

0x7cf4,	// (0x000260c6) main_cset6_slider_pane_t8_ParamLimits

0x7cf4,	// (0x000260c6) main_cset6_slider_pane_t8

0x7d18,	// (0x000260ea) main_cset6_slider_pane_t9_ParamLimits

0x7d18,	// (0x000260ea) main_cset6_slider_pane_t9

0x7d3c,	// (0x0002610e) main_cset6_slider_pane_t10_ParamLimits

0x7d3c,	// (0x0002610e) main_cset6_slider_pane_t10

0x7d60,	// (0x00026132) main_cset6_slider_pane_t11_ParamLimits

0x7d60,	// (0x00026132) main_cset6_slider_pane_t11

0xdc41,	// (0x0002c013) main_cset6_slider_pane_t14_ParamLimits

0xdc41,	// (0x0002c013) main_cset6_slider_pane_t14

0xdc7a,	// (0x0002c04c) main_cset6_slider_pane_t15_ParamLimits

0xdc7a,	// (0x0002c04c) main_cset6_slider_pane_t15

0x000b,

0xfb95,	// (0x0002df67) main_cset6_slider_pane_t_ParamLimits

0xfb95,	// (0x0002df67) main_cset6_slider_pane_t

0xd43a,	// (0x0002b80c) cset_slider_pane_g1_copy1

0xd443,	// (0x0002b815) cset_slider_pane_g2_copy1

0xd6a4,	// (0x0002ba76) cset_slider_pane_g3_copy1

0x9b42,	// (0x00027f14) bg_popup_sub_pane_cp011_copy1

0xdcb3,	// (0x0002c085) main_cset_text_pane_g1_copy1

0xd4d8,	// (0x0002b8aa) main_cset_text_pane_t1_copy1

0xd4e6,	// (0x0002b8b8) main_cset_text_pane_t2_copy1

0xd4f4,	// (0x0002b8c6) main_cset_text_pane_t3_copy1

0xd502,	// (0x0002b8d4) main_cset_text_pane_t4_copy1

0xd510,	// (0x0002b8e2) main_cset_text_pane_t5_copy1

0xdcbb,	// (0x0002c08d) main_cset_text_pane_t6_copy1

0xdcc9,	// (0x0002c09b) main_cset_text_pane_t7_copy1

0x7e55,	// (0x00026227) main_cset_text2_pane_t1_copy1

0x1420,	// (0x0001f7f2) main_ncimui_pane

0x147f,	// (0x0001f851) popup_query_ncimui_window_ParamLimits

0x147f,	// (0x0001f851) popup_query_ncimui_window

0xca52,	// (0x0002ae24) field_cale_ev2_pane_g4_ParamLimits

0xca52,	// (0x0002ae24) field_cale_ev2_pane_g4

0x683a,	// (0x00024c0c) cell_video_dialer_keypad_pane_g2_ParamLimits

0x683a,	// (0x00024c0c) cell_video_dialer_keypad_pane_g2

0x0001,

0xf895,	// (0x0002dc67) cell_video_dialer_keypad_pane_g_ParamLimits

0xf895,	// (0x0002dc67) cell_video_dialer_keypad_pane_g

0x6852,	// (0x00024c24) cell_video_dialer_keypad_pane_t1

0x9b42,	// (0x00027f14) bg_popup_window_pane_cp012

0xab7b,	// (0x00028f4d) heading_pane_cp06

0xdcf5,	// (0x0002c0c7) ncim_query_content_pane

0x9b42,	// (0x00027f14) bg_popup_heading_pane_cp01

0xdcfd,	// (0x0002c0cf) ncim_heading_pane_t1

0xdd0b,	// (0x0002c0dd) ncim_indicator_popup_pane

0xdd1d,	// (0x0002c0ef) ncim_query_button_pane

0xdd31,	// (0x0002c103) ncim_query_content_pane_t1

0xdd43,	// (0x0002c115) ncim_query_content_pane_t2

0x0005,

0xfbd9,	// (0x0002dfab) ncim_query_content_pane_t

0xdd7d,	// (0x0002c14f) ncim_query_list_pane

0xdd8f,	// (0x0002c161) ncim_query_popup_pane

0xdd0b,	// (0x0002c0dd) ncim_indicator_popup_pane_ParamLimits

0x7faf,	// (0x00026381) ncim_query_content_pane_g1_ParamLimits

0x7faf,	// (0x00026381) ncim_query_content_pane_g1

0xdd31,	// (0x0002c103) ncim_query_content_pane_t1_ParamLimits

0xdd43,	// (0x0002c115) ncim_query_content_pane_t2_ParamLimits

0x7fbb,	// (0x0002638d) ncim_query_content_pane_t3_ParamLimits

0x7fbb,	// (0x0002638d) ncim_query_content_pane_t3

0x7fd8,	// (0x000263aa) ncim_query_content_pane_t4_ParamLimits

0x7fd8,	// (0x000263aa) ncim_query_content_pane_t4

0x7ff5,	// (0x000263c7) ncim_query_content_pane_t5_ParamLimits

0x7ff5,	// (0x000263c7) ncim_query_content_pane_t5

0xdd55,	// (0x0002c127) ncim_query_content_pane_t6_ParamLimits

0xdd55,	// (0x0002c127) ncim_query_content_pane_t6

0xfbd9,	// (0x0002dfab) ncim_query_content_pane_t_ParamLimits

0xdd7d,	// (0x0002c14f) ncim_query_list_pane_ParamLimits

0xdd8f,	// (0x0002c161) ncim_query_popup_pane_ParamLimits

0xdda3,	// (0x0002c175) wait_bar_pane_cp04

0x9b42,	// (0x00027f14) input_focus_pane_cp011

0xddab,	// (0x0002c17d) ncim_query_popup_pane_t1

0xddb9,	// (0x0002c18b) ncim_list_query_list_pane_ParamLimits

0xddb9,	// (0x0002c18b) ncim_list_query_list_pane

0x9b42,	// (0x00027f14) bg_button_pane_cp027

0xddcc,	// (0x0002c19e) ncim_query_button_pane_g1

0x9b42,	// (0x00027f14) list_highlight_pane_cp012

0xddd6,	// (0x0002c1a8) ncim_list_query_list_pane_g1

0xddde,	// (0x0002c1b0) ncim_list_query_list_pane_t1

0x1ea5,	// (0x00020277) cam4_indicators_pane_g3_ParamLimits

0x1ea5,	// (0x00020277) cam4_indicators_pane_g3

0x1faa,	// (0x0002037c) vid4_indicators_pane_g5_ParamLimits

0x1faa,	// (0x0002037c) vid4_indicators_pane_g5

0x248e,	// (0x00020860) vid4_progress_pane_g5_ParamLimits

0x248e,	// (0x00020860) vid4_progress_pane_g5

0x7e9b,	// (0x0002626d) main_ncimui_pane_g1

0x7f03,	// (0x000262d5) ncimui_group_query_pane_ParamLimits

0x7f03,	// (0x000262d5) ncimui_group_query_pane

0x7f4b,	// (0x0002631d) ncimui_list_pane_ParamLimits

0x7f4b,	// (0x0002631d) ncimui_list_pane

0x7f72,	// (0x00026344) ncimui_text_pane_ParamLimits

0x7f72,	// (0x00026344) ncimui_text_pane

0x8012,	// (0x000263e4) ncimui_text_pane_t1_ParamLimits

0x8012,	// (0x000263e4) ncimui_text_pane_t1

0xddec,	// (0x0002c1be) ncimui_list_single_graphic_pane_ParamLimits

0xddec,	// (0x0002c1be) ncimui_list_single_graphic_pane

0x8031,	// (0x00026403) ncimui_query_pane_ParamLimits

0x8031,	// (0x00026403) ncimui_query_pane

0x9b42,	// (0x00027f14) list_highlight_pane_cp013

0xddfc,	// (0x0002c1ce) ncim_list_query_list_pane_t1_copy1

0xddd6,	// (0x0002c1a8) ncim_list_single_graphic_pane_g1

0xde0a,	// (0x0002c1dc) ncim_query_button_pane_cp01

0xde16,	// (0x0002c1e8) ncim_query_entry_pane_ParamLimits

0xde16,	// (0x0002c1e8) ncim_query_entry_pane

0xde29,	// (0x0002c1fb) ncimui_query_pane_g1

0xde35,	// (0x0002c207) ncimui_query_pane_t1_ParamLimits

0xde35,	// (0x0002c207) ncimui_query_pane_t1

0xa3ab,	// (0x0002877d) input_focus_pane_cp012

0xde4e,	// (0x0002c220) ncim_query_entry_pane_t1

0xa29e,	// (0x00028670) main_im_pane_ParamLimits

0x1420,	// (0x0001f7f2) main_mobtv_pane_ParamLimits

0x1420,	// (0x0001f7f2) main_mobtv_pane

0x7c2e,	// (0x00026000) main_cset6_slider_pane_g18_ParamLimits

0x7c2e,	// (0x00026000) main_cset6_slider_pane_g18

0x7c3a,	// (0x0002600c) main_cset6_slider_pane_g19_ParamLimits

0x7c3a,	// (0x0002600c) main_cset6_slider_pane_g19

0xd20a,	// (0x0002b5dc) bg_main_mobtv_pane_ParamLimits

0xd20a,	// (0x0002b5dc) bg_main_mobtv_pane

0x8044,	// (0x00026416) main_mobtv_info_pane

0x804f,	// (0x00026421) main_mobtv_loading_pane_ParamLimits

0x804f,	// (0x00026421) main_mobtv_loading_pane

0xde60,	// (0x0002c232) main_mobtv_pg_channel_list_pane

0xde6a,	// (0x0002c23c) main_mobtv_pg_hdr_pane

0x805c,	// (0x0002642e) main_mobtv_programe_curr_pane_ParamLimits

0x805c,	// (0x0002642e) main_mobtv_programe_curr_pane

0x8069,	// (0x0002643b) main_mobtv_programe_next_pane_ParamLimits

0x8069,	// (0x0002643b) main_mobtv_programe_next_pane

0xde73,	// (0x0002c245) popup_mobtv_noti_window

0xc751,	// (0x0002ab23) main_tv_pg_hdr_pane_g1

0xde7b,	// (0x0002c24d) main_tv_pg_hdr_pane_g2

0xde83,	// (0x0002c255) main_tv_pg_hdr_pane_g3

0xde8b,	// (0x0002c25d) main_tv_pg_hdr_pane_g4

0xde93,	// (0x0002c265) main_tv_pg_hdr_pane_g5

0xde9d,	// (0x0002c26f) main_tv_pg_hdr_pane_g6

0xdea7,	// (0x0002c279) main_tv_pg_hdr_pane_g7

0xdeb1,	// (0x0002c283) main_tv_pg_hdr_pane_g8

0xdebb,	// (0x0002c28d) main_tv_pg_hdr_pane_g9

0xdec5,	// (0x0002c297) main_tv_pg_hdr_pane_g10

0xdecf,	// (0x0002c2a1) main_tv_pg_hdr_pane_g11

0x000a,

0xfbe6,	// (0x0002dfb8) main_tv_pg_hdr_pane_g

0xded9,	// (0x0002c2ab) main_tv_pg_hdr_pane_t1

0xdee7,	// (0x0002c2b9) main_tv_pg_hdr_pane_t2

0xdef5,	// (0x0002c2c7) main_tv_pg_hdr_pane_t3

0xdf05,	// (0x0002c2d7) main_tv_pg_hdr_pane_t4

0xdf15,	// (0x0002c2e7) main_tv_pg_hdr_pane_t5

0x0004,

0x0979,	// (0x0001ed4b) main_tv_pg_hdr_pane_t

0xdf25,	// (0x0002c2f7) single_mobtv_pg_channel_pane_ParamLimits

0xdf25,	// (0x0002c2f7) single_mobtv_pg_channel_pane

0xdf37,	// (0x0002c309) single_mobtv_pg_channel_table_pane

0xdf40,	// (0x0002c312) single_mobtv_pg_channel_thumb_pane

0xdf49,	// (0x0002c31b) single_tv_pg_channel_pane_g1

0xdf52,	// (0x0002c324) single_tv_pg_channel_pane_g2

0x0001,

0x0984,	// (0x0001ed56) single_tv_pg_channel_pane_g

0xc9b1,	// (0x0002ad83) bg_single_mobtv_pg_channel_thumb_pane_ParamLimits

0xc9b1,	// (0x0002ad83) bg_single_mobtv_pg_channel_thumb_pane

0xdf5b,	// (0x0002c32d) single_mobtv_pg_channel_thumb_pane_g1_ParamLimits

0xdf5b,	// (0x0002c32d) single_mobtv_pg_channel_thumb_pane_g1

0xdf69,	// (0x0002c33b) single_mobtv_pg_channel_thumb_pane_g2_ParamLimits

0xdf69,	// (0x0002c33b) single_mobtv_pg_channel_thumb_pane_g2

0xdf75,	// (0x0002c347) single_mobtv_pg_channel_thumb_pane_g3_ParamLimits

0xdf75,	// (0x0002c347) single_mobtv_pg_channel_thumb_pane_g3

0x0002,

0x0989,	// (0x0001ed5b) single_mobtv_pg_channel_thumb_pane_g_ParamLimits

0x0989,	// (0x0001ed5b) single_mobtv_pg_channel_thumb_pane_g

0xdf81,	// (0x0002c353) single_mobtv_pg_channel_thumb_pane_t1

0xdf8f,	// (0x0002c361) single_mobtv_pg_channel_thumb_pane_t2

0x0001,

0x0990,	// (0x0001ed62) single_mobtv_pg_channel_thumb_pane_t

0xc751,	// (0x0002ab23) bg_single_mobtv_pg_channel_table_pane_g1

0xc751,	// (0x0002ab23) bg_single_mobtv_pg_channel_table_pane_g2

0x0001,

0xf6e1,	// (0x0002dab3) bg_single_mobtv_pg_channel_table_pane_g

0xdf9d,	// (0x0002c36f) single_mobtv_pg_channel_table_pane_t1

0xdfab,	// (0x0002c37d) single_mobtv_pg_channel_table_pane_t2

0x0001,

0x0995,	// (0x0001ed67) single_mobtv_pg_channel_table_pane_t

0x807e,	// (0x00026450) main_mobtv_info_pane_g1_ParamLimits

0x807e,	// (0x00026450) main_mobtv_info_pane_g1

0x809a,	// (0x0002646c) main_mobtv_info_pane_t1_ParamLimits

0x809a,	// (0x0002646c) main_mobtv_info_pane_t1

0x8112,	// (0x000264e4) main_mobtv_info_pane_t2_ParamLimits

0x8112,	// (0x000264e4) main_mobtv_info_pane_t2

0x0002,

0xfc02,	// (0x0002dfd4) main_mobtv_info_pane_t_ParamLimits

0xfc02,	// (0x0002dfd4) main_mobtv_info_pane_t

0x81a1,	// (0x00026573) wait_bar_pane_cp05

0x81b3,	// (0x00026585) main_mobtv_loading_pane_g1_ParamLimits

0x81b3,	// (0x00026585) main_mobtv_loading_pane_g1

0x81c1,	// (0x00026593) main_mobtv_loading_pane_g2_ParamLimits

0x81c1,	// (0x00026593) main_mobtv_loading_pane_g2

0x81cd,	// (0x0002659f) main_mobtv_loading_pane_g3_ParamLimits

0x81cd,	// (0x0002659f) main_mobtv_loading_pane_g3

0x0002,

0xfc09,	// (0x0002dfdb) main_mobtv_loading_pane_g_ParamLimits

0xfc09,	// (0x0002dfdb) main_mobtv_loading_pane_g

0xdfb9,	// (0x0002c38b) main_mobtv_loading_pane_t1_ParamLimits

0xdfb9,	// (0x0002c38b) main_mobtv_loading_pane_t1

0xdfd1,	// (0x0002c3a3) main_mobtv_loading_pane_t2_ParamLimits

0xdfd1,	// (0x0002c3a3) main_mobtv_loading_pane_t2

0x0001,

0x09ad,	// (0x0001ed7f) main_mobtv_loading_pane_t_ParamLimits

0x09ad,	// (0x0001ed7f) main_mobtv_loading_pane_t

0x81db,	// (0x000265ad) wait_bar_pane_cp06_ParamLimits

0x81db,	// (0x000265ad) wait_bar_pane_cp06

0xdff5,	// (0x0002c3c7) main_mobtv_programe_curr_pane_t1

0xe003,	// (0x0002c3d5) main_mobtv_programe_curr_pane_t2

0x0001,

0x09b2,	// (0x0001ed84) main_mobtv_programe_curr_pane_t

0xe011,	// (0x0002c3e3) main_mobtv_programe_next_pane_t1

0xe01f,	// (0x0002c3f1) main_mobtv_programe_next_pane_t2

0xe02d,	// (0x0002c3ff) main_mobtv_programe_next_pane_t3

0x0002,

0x09b7,	// (0x0001ed89) main_mobtv_programe_next_pane_t

0x9b42,	// (0x00027f14) bg_popup_mobtv_noti_window_pane

0xe03b,	// (0x0002c40d) popup_mobtv_noti_window_g1

0xe043,	// (0x0002c415) popup_mobtv_noti_window_t1

0xe051,	// (0x0002c423) popup_mobtv_noti_window_t2

0x0001,

0x09be,	// (0x0001ed90) popup_mobtv_noti_window_t

0xc751,	// (0x0002ab23) bg_popup_mobtv_noti_window_pane_g1

0x0f4e,	// (0x0001f320) sc_clock_pane

0x0f4e,	// (0x0001f320) main_fs_bigclock_pane

0x7841,	// (0x00025c13) blid2_tripm_pane_t4_ParamLimits

0x7841,	// (0x00025c13) blid2_tripm_pane_t4

0x81e7,	// (0x000265b9) sc_clock_pane_g1_ParamLimits

0x81e7,	// (0x000265b9) sc_clock_pane_g1

0x81f5,	// (0x000265c7) sc_clock_pane_t1_ParamLimits

0x81f5,	// (0x000265c7) sc_clock_pane_t1

0x8208,	// (0x000265da) sc_clock_pane_t2_ParamLimits

0x8208,	// (0x000265da) sc_clock_pane_t2

0x821a,	// (0x000265ec) sc_clock_pane_t3_ParamLimits

0x821a,	// (0x000265ec) sc_clock_pane_t3

0x0004,

0xfc10,	// (0x0002dfe2) sc_clock_pane_t_ParamLimits

0xfc10,	// (0x0002dfe2) sc_clock_pane_t

0x913a,	// (0x0002750c) main_fs_bigclock_indicator_pane_ParamLimits

0x913a,	// (0x0002750c) main_fs_bigclock_indicator_pane

0x82b5,	// (0x00026687) main_fs_bigclock_pane_g1_ParamLimits

0x82b5,	// (0x00026687) main_fs_bigclock_pane_g1

0x9146,	// (0x00027518) main_fs_bigclock_pane_t1_ParamLimits

0x9146,	// (0x00027518) main_fs_bigclock_pane_t1

0x9158,	// (0x0002752a) main_fs_bigclock_pane_t2_ParamLimits

0x9158,	// (0x0002752a) main_fs_bigclock_pane_t2

0x916a,	// (0x0002753c) main_fs_bigclock_pane_t3_ParamLimits

0x916a,	// (0x0002753c) main_fs_bigclock_pane_t3

0x0002,

0xfd85,	// (0x0002e157) main_fs_bigclock_pane_t_ParamLimits

0xfd85,	// (0x0002e157) main_fs_bigclock_pane_t

0xec35,	// (0x0002d007) main_fs_bigclock_indicator_pane_g1

0xdd25,	// (0x0002c0f7) ncim_query_content_pane_g2_ParamLimits

0xdd25,	// (0x0002c0f7) ncim_query_content_pane_g2

0x0001,

0xfbd4,	// (0x0002dfa6) ncim_query_content_pane_g_ParamLimits

0xfbd4,	// (0x0002dfa6) ncim_query_content_pane_g

0x822e,	// (0x00026600) sc_clock_pane_t4_ParamLimits

0x822e,	// (0x00026600) sc_clock_pane_t4

0x1420,	// (0x0001f7f2) main_radioblah_pane

0xd15f,	// (0x0002b531) cell_call4_button_pane_t1_copy1_ParamLimits

0xd15f,	// (0x0002b531) cell_call4_button_pane_t1_copy1

0x7eb5,	// (0x00026287) main_ncimui_pane_t1_ParamLimits

0x7eb5,	// (0x00026287) main_ncimui_pane_t1

0x7ecf,	// (0x000262a1) main_ncimui_pane_t2_ParamLimits

0x7ecf,	// (0x000262a1) main_ncimui_pane_t2

0x0002,

0xfbcd,	// (0x0002df9f) main_ncimui_pane_t_ParamLimits

0xfbcd,	// (0x0002df9f) main_ncimui_pane_t

0xe18c,	// (0x0002c55e) main_radioblah_anim_pane_ParamLimits

0xe18c,	// (0x0002c55e) main_radioblah_anim_pane

0xe19d,	// (0x0002c56f) main_radioblah_info_pane_ParamLimits

0xe19d,	// (0x0002c56f) main_radioblah_info_pane

0xe1b1,	// (0x0002c583) main_radioblah_pane_t1_ParamLimits

0xe1b1,	// (0x0002c583) main_radioblah_pane_t1

0xe1cd,	// (0x0002c59f) main_radioblah_pane_t2_ParamLimits

0xe1cd,	// (0x0002c59f) main_radioblah_pane_t2

0x0003,

0x09e4,	// (0x0001edb6) main_radioblah_pane_t_ParamLimits

0x09e4,	// (0x0001edb6) main_radioblah_pane_t

0x8307,	// (0x000266d9) main_radioblah_rocker_ctrl_pane_ParamLimits

0x8307,	// (0x000266d9) main_radioblah_rocker_ctrl_pane

0xe215,	// (0x0002c5e7) main_radioblah_info_pane_t1_ParamLimits

0xe215,	// (0x0002c5e7) main_radioblah_info_pane_t1

0x834c,	// (0x0002671e) main_radioblah_info_pane_t2_ParamLimits

0x834c,	// (0x0002671e) main_radioblah_info_pane_t2

0x0003,

0xfc1b,	// (0x0002dfed) main_radioblah_info_pane_t_ParamLimits

0xfc1b,	// (0x0002dfed) main_radioblah_info_pane_t

0xc751,	// (0x0002ab23) main_radioblah_rocker_ctrl_pane_g1

0x83fc,	// (0x000267ce) main_radioblah_rocker_ctrl_pane_g2

0x8404,	// (0x000267d6) main_radioblah_rocker_ctrl_pane_g3

0x840c,	// (0x000267de) main_radioblah_rocker_ctrl_pane_g4

0x8414,	// (0x000267e6) main_radioblah_rocker_ctrl_pane_g5

0x841c,	// (0x000267ee) main_radioblah_rocker_ctrl_pane_g6

0x0005,

0xfc24,	// (0x0002dff6) main_radioblah_rocker_ctrl_pane_g

0x7e55,	// (0x00026227) main_cset_text2_pane_t1_copy1_ParamLimits

0x1de9,	// (0x000201bb) cam4_image_uncrop_qvga_pane

0x1f1a,	// (0x000202ec) vid4_image_uncrop_qcif_pane

0x252f,	// (0x00020901) cam6_image_uncrop_qvga_pane_ParamLimits

0x252f,	// (0x00020901) cam6_image_uncrop_qvga_pane

0xda2c,	// (0x0002bdfe) vid6_image_uncrop_qcif_pane_ParamLimits

0xda2c,	// (0x0002bdfe) vid6_image_uncrop_qcif_pane

0x9b42,	// (0x00027f14) bg_popup_preview_window_pane_cp03

0xdcd7,	// (0x0002c0a9) list_cset_text2_pane

0xdcdf,	// (0x0002c0b1) main_cset6_text2_pane_g1

0xdce7,	// (0x0002c0b9) main_cset6_text2_pane_t1

0x8424,	// (0x000267f6) list_cset_text2_pane_t1_ParamLimits

0x8424,	// (0x000267f6) list_cset_text2_pane_t1

0x1420,	// (0x0001f7f2) main_radioblah_pane_ParamLimits

0x818d,	// (0x0002655f) main_mobtv_info_pane_t3_ParamLimits

0x818d,	// (0x0002655f) main_mobtv_info_pane_t3

0x82f5,	// (0x000266c7) main_radioblah_pane_g1

0x8320,	// (0x000266f2) main_radioblah_info_pane_g1

0x83a1,	// (0x00026773) main_radioblah_info_pane_t3_ParamLimits

0x83a1,	// (0x00026773) main_radioblah_info_pane_t3

0x42d3,	// (0x000226a5) highlight_cell_cale_month_pane_ParamLimits

0x42d3,	// (0x000226a5) highlight_cell_cale_month_pane

0x0f4e,	// (0x0001f320) main_phob_fisheye_pane

0xcb01,	// (0x0002aed3) scroll_pane_cp0031_ParamLimits

0xcb01,	// (0x0002aed3) scroll_pane_cp0031

0xdb3a,	// (0x0002bf0c) wait_bar_pane_cp08_ParamLimits

0x7b3f,	// (0x00025f11) cset_list_set_pane_copy1_ParamLimits

0xe24f,	// (0x0002c621) highlight_cell_cale_month_pane_g1

0x844b,	// (0x0002681d) highlight_cell_cale_month_pane_t1

0xd7b1,	// (0x0002bb83) list_gen_pane_cp01

0xd361,	// (0x0002b733) scroll_pane_01

0x8459,	// (0x0002682b) list_single_double_fisheye_pane

0x8462,	// (0x00026834) list_double_fisheye_pane_g1_ParamLimits

0x8462,	// (0x00026834) list_double_fisheye_pane_g1

0x846e,	// (0x00026840) list_double_fisheye_pane_g2_ParamLimits

0x846e,	// (0x00026840) list_double_fisheye_pane_g2

0x8482,	// (0x00026854) list_double_fisheye_pane_g3_ParamLimits

0x8482,	// (0x00026854) list_double_fisheye_pane_g3

0x0004,

0xfc31,	// (0x0002e003) list_double_fisheye_pane_g_ParamLimits

0xfc31,	// (0x0002e003) list_double_fisheye_pane_g

0x84ab,	// (0x0002687d) list_double_fisheye_pane_t1_ParamLimits

0x84ab,	// (0x0002687d) list_double_fisheye_pane_t1

0x84c6,	// (0x00026898) list_double_fisheye_pane_t2_ParamLimits

0x84c6,	// (0x00026898) list_double_fisheye_pane_t2

0x0001,

0xfc3c,	// (0x0002e00e) list_double_fisheye_pane_t_ParamLimits

0xfc3c,	// (0x0002e00e) list_double_fisheye_pane_t

0x0f4e,	// (0x0001f320) main_call5_pane

0x8254,	// (0x00026626) sc_swipe_pane_ParamLimits

0x8254,	// (0x00026626) sc_swipe_pane

0x84f4,	// (0x000268c6) call5_image_pane_ParamLimits

0x84f4,	// (0x000268c6) call5_image_pane

0x8504,	// (0x000268d6) call5_swipe_1_pane_ParamLimits

0x8504,	// (0x000268d6) call5_swipe_1_pane

0x8510,	// (0x000268e2) call5_swipe_2_pane_ParamLimits

0x8510,	// (0x000268e2) call5_swipe_2_pane

0x852a,	// (0x000268fc) popup_call5_audio_first_window_ParamLimits

0x852a,	// (0x000268fc) popup_call5_audio_first_window

0xc9b1,	// (0x0002ad83) call5_swipe_1_pane_g1_ParamLimits

0xc9b1,	// (0x0002ad83) call5_swipe_1_pane_g1

0xe257,	// (0x0002c629) call5_swipe_1_pane_g2_ParamLimits

0xe257,	// (0x0002c629) call5_swipe_1_pane_g2

0x0001,

0xfc41,	// (0x0002e013) call5_swipe_1_pane_g_ParamLimits

0xfc41,	// (0x0002e013) call5_swipe_1_pane_g

0xe263,	// (0x0002c635) call5_swipe_1_pane_t1_ParamLimits

0xe263,	// (0x0002c635) call5_swipe_1_pane_t1

0xc9b1,	// (0x0002ad83) call5_swipe_2_pane_g1_ParamLimits

0xc9b1,	// (0x0002ad83) call5_swipe_2_pane_g1

0xe278,	// (0x0002c64a) call5_swipe_2_pane_g2_ParamLimits

0xe278,	// (0x0002c64a) call5_swipe_2_pane_g2

0x0001,

0xfc46,	// (0x0002e018) call5_swipe_2_pane_g_ParamLimits

0xfc46,	// (0x0002e018) call5_swipe_2_pane_g

0xe284,	// (0x0002c656) call5_swipe_2_pane_t1_ParamLimits

0xe284,	// (0x0002c656) call5_swipe_2_pane_t1

0xe299,	// (0x0002c66b) sc_swipe_pane_g1_ParamLimits

0xe299,	// (0x0002c66b) sc_swipe_pane_g1

0xe2a6,	// (0x0002c678) sc_swipe_pane_g2_ParamLimits

0xe2a6,	// (0x0002c678) sc_swipe_pane_g2

0x0001,

0x0a1d,	// (0x0001edef) sc_swipe_pane_g_ParamLimits

0x0a1d,	// (0x0001edef) sc_swipe_pane_g

0xe2b2,	// (0x0002c684) sc_swipe_pane_t1_ParamLimits

0xe2b2,	// (0x0002c684) sc_swipe_pane_t1

0x0f4e,	// (0x0001f320) main_cmail_launcher_pane

0x8538,	// (0x0002690a) aid_size_cell_cmail_l_ParamLimits

0x8538,	// (0x0002690a) aid_size_cell_cmail_l

0x8548,	// (0x0002691a) grid_cmail_l_pane_ParamLimits

0x8548,	// (0x0002691a) grid_cmail_l_pane

0x8558,	// (0x0002692a) cell_cmail_l_pane_ParamLimits

0x8558,	// (0x0002692a) cell_cmail_l_pane

0x856c,	// (0x0002693e) cell_cmail_l_pane_g1_ParamLimits

0x856c,	// (0x0002693e) cell_cmail_l_pane_g1

0x857d,	// (0x0002694f) cell_cmail_l_pane_t1_ParamLimits

0x857d,	// (0x0002694f) cell_cmail_l_pane_t1

0xe2c7,	// (0x0002c699) cell_cmail_l_pane_t2_ParamLimits

0xe2c7,	// (0x0002c699) cell_cmail_l_pane_t2

0x0001,

0xfc4b,	// (0x0002e01d) cell_cmail_l_pane_t_ParamLimits

0xfc4b,	// (0x0002e01d) cell_cmail_l_pane_t

0xa3ab,	// (0x0002877d) grid_highlight_pane_cp018_ParamLimits

0xa3ab,	// (0x0002877d) grid_highlight_pane_cp018

0x0db0,	// (0x0001f182) main2_pane_ParamLimits

0x0db0,	// (0x0001f182) main2_pane

0xa349,	// (0x0002871b) popup_sp_fs_action_menu_bg_pane_g1

0xa351,	// (0x00028723) popup_sp_fs_action_menu_bg_pane_g2

0xa359,	// (0x0002872b) popup_sp_fs_action_menu_bg_pane_g3

0xa361,	// (0x00028733) popup_sp_fs_action_menu_bg_pane_g4

0xa369,	// (0x0002873b) popup_sp_fs_action_menu_bg_pane_g5

0xa371,	// (0x00028743) popup_sp_fs_action_menu_bg_pane_g6

0xa379,	// (0x0002874b) popup_sp_fs_action_menu_bg_pane_g7

0xa381,	// (0x00028753) popup_sp_fs_action_menu_bg_pane_g8

0xa389,	// (0x0002875b) popup_sp_fs_action_menu_bg_pane_g9

0xa391,	// (0x00028763) popup_sp_fs_action_menu_bg_pane_g10

0xa391,	// (0x00028763) popup_sp_fs_action_menu_bg_pane_g11

0x000a,

0xf18d,	// (0x0002d55f) popup_sp_fs_action_menu_bg_pane_g

0x3051,	// (0x00021423) list_medium_line_x2_t3_g3_g1_ParamLimits

0x3051,	// (0x00021423) list_medium_line_x2_t3_g3_g1

0x305d,	// (0x0002142f) list_medium_line_x2_t3_g3_g2_ParamLimits

0x305d,	// (0x0002142f) list_medium_line_x2_t3_g3_g2

0x3069,	// (0x0002143b) list_medium_line_x2_t3_g3_g3_ParamLimits

0x3069,	// (0x0002143b) list_medium_line_x2_t3_g3_g3

0x0002,

0xf23d,	// (0x0002d60f) list_medium_line_x2_t3_g3_g_ParamLimits

0xf23d,	// (0x0002d60f) list_medium_line_x2_t3_g3_g

0x3075,	// (0x00021447) list_medium_line_x2_t3_g3_t1_ParamLimits

0x3075,	// (0x00021447) list_medium_line_x2_t3_g3_t1

0x308a,	// (0x0002145c) list_medium_line_x2_t3_g3_t2_ParamLimits

0x308a,	// (0x0002145c) list_medium_line_x2_t3_g3_t2

0x309c,	// (0x0002146e) list_medium_line_x2_t3_g3_t3_ParamLimits

0x309c,	// (0x0002146e) list_medium_line_x2_t3_g3_t3

0x0002,

0xf244,	// (0x0002d616) list_medium_line_x2_t3_g3_t_ParamLimits

0xf244,	// (0x0002d616) list_medium_line_x2_t3_g3_t

0x3051,	// (0x00021423) list_medium_line_x2_t3_g2_g1_ParamLimits

0x3051,	// (0x00021423) list_medium_line_x2_t3_g2_g1

0x3069,	// (0x0002143b) list_medium_line_x2_t3_g2_g2_ParamLimits

0x3069,	// (0x0002143b) list_medium_line_x2_t3_g2_g2

0x0001,

0xf24b,	// (0x0002d61d) list_medium_line_x2_t3_g2_g_ParamLimits

0xf24b,	// (0x0002d61d) list_medium_line_x2_t3_g2_g

0x30b1,	// (0x00021483) list_medium_line_x2_t3_g2_t1_ParamLimits

0x30b1,	// (0x00021483) list_medium_line_x2_t3_g2_t1

0x30c7,	// (0x00021499) list_medium_line_x2_t3_g2_t2_ParamLimits

0x30c7,	// (0x00021499) list_medium_line_x2_t3_g2_t2

0x30d9,	// (0x000214ab) list_medium_line_x2_t3_g2_t3_ParamLimits

0x30d9,	// (0x000214ab) list_medium_line_x2_t3_g2_t3

0x0002,

0xf250,	// (0x0002d622) list_medium_line_x2_t3_g2_t_ParamLimits

0xf250,	// (0x0002d622) list_medium_line_x2_t3_g2_t

0x3051,	// (0x00021423) list_medium_line_x2_t4_g4_g1_ParamLimits

0x3051,	// (0x00021423) list_medium_line_x2_t4_g4_g1

0x30f7,	// (0x000214c9) list_medium_line_x2_t4_g4_g2_ParamLimits

0x30f7,	// (0x000214c9) list_medium_line_x2_t4_g4_g2

0x305d,	// (0x0002142f) list_medium_line_x2_t4_g4_g3_ParamLimits

0x305d,	// (0x0002142f) list_medium_line_x2_t4_g4_g3

0x3103,	// (0x000214d5) list_medium_line_x2_t4_g4_g4_ParamLimits

0x3103,	// (0x000214d5) list_medium_line_x2_t4_g4_g4

0x0003,

0xf257,	// (0x0002d629) list_medium_line_x2_t4_g4_g_ParamLimits

0xf257,	// (0x0002d629) list_medium_line_x2_t4_g4_g

0x310f,	// (0x000214e1) list_medium_line_x2_t4_g4_t1_ParamLimits

0x310f,	// (0x000214e1) list_medium_line_x2_t4_g4_t1

0x3126,	// (0x000214f8) list_medium_line_x2_t4_g4_t2_ParamLimits

0x3126,	// (0x000214f8) list_medium_line_x2_t4_g4_t2

0x313b,	// (0x0002150d) list_medium_line_x2_t4_g4_t3_ParamLimits

0x313b,	// (0x0002150d) list_medium_line_x2_t4_g4_t3

0x314d,	// (0x0002151f) list_medium_line_x2_t4_g4_t4_ParamLimits

0x314d,	// (0x0002151f) list_medium_line_x2_t4_g4_t4

0x0003,

0xf260,	// (0x0002d632) list_medium_line_x2_t4_g4_t_ParamLimits

0xf260,	// (0x0002d632) list_medium_line_x2_t4_g4_t

0x3051,	// (0x00021423) list_medium_line_x2_t2_g4_g1_ParamLimits

0x3051,	// (0x00021423) list_medium_line_x2_t2_g4_g1

0x30f7,	// (0x000214c9) list_medium_line_x2_t2_g4_g2_ParamLimits

0x30f7,	// (0x000214c9) list_medium_line_x2_t2_g4_g2

0x305d,	// (0x0002142f) list_medium_line_x2_t2_g4_g3_ParamLimits

0x305d,	// (0x0002142f) list_medium_line_x2_t2_g4_g3

0x3069,	// (0x0002143b) list_medium_line_x2_t2_g4_g4_ParamLimits

0x3069,	// (0x0002143b) list_medium_line_x2_t2_g4_g4

0x0003,

0xf2c7,	// (0x0002d699) list_medium_line_x2_t2_g4_g_ParamLimits

0xf2c7,	// (0x0002d699) list_medium_line_x2_t2_g4_g

0x42f9,	// (0x000226cb) list_medium_line_x2_t2_g4_t1_ParamLimits

0x42f9,	// (0x000226cb) list_medium_line_x2_t2_g4_t1

0x309c,	// (0x0002146e) list_medium_line_x2_t2_g4_t2_ParamLimits

0x309c,	// (0x0002146e) list_medium_line_x2_t2_g4_t2

0x0001,

0xf2d0,	// (0x0002d6a2) list_medium_line_x2_t2_g4_t_ParamLimits

0xf2d0,	// (0x0002d6a2) list_medium_line_x2_t2_g4_t

0x3051,	// (0x00021423) list_medium_line_x2_t2_g3_g1_ParamLimits

0x3051,	// (0x00021423) list_medium_line_x2_t2_g3_g1

0x305d,	// (0x0002142f) list_medium_line_x2_t2_g3_g2_ParamLimits

0x305d,	// (0x0002142f) list_medium_line_x2_t2_g3_g2

0x3069,	// (0x0002143b) list_medium_line_x2_t2_g3_g3_ParamLimits

0x3069,	// (0x0002143b) list_medium_line_x2_t2_g3_g3

0x0002,

0xf23d,	// (0x0002d60f) list_medium_line_x2_t2_g3_g_ParamLimits

0xf23d,	// (0x0002d60f) list_medium_line_x2_t2_g3_g

0x430e,	// (0x000226e0) list_medium_line_x2_t2_g3_t1_ParamLimits

0x430e,	// (0x000226e0) list_medium_line_x2_t2_g3_t1

0x309c,	// (0x0002146e) list_medium_line_x2_t2_g3_t2_ParamLimits

0x309c,	// (0x0002146e) list_medium_line_x2_t2_g3_t2

0x0001,

0xf2d5,	// (0x0002d6a7) list_medium_line_x2_t2_g3_t_ParamLimits

0xf2d5,	// (0x0002d6a7) list_medium_line_x2_t2_g3_t

0x449f,	// (0x00022871) main_sp_fs_list_pane_ParamLimits

0x449f,	// (0x00022871) main_sp_fs_list_pane

0x44ab,	// (0x0002287d) sp_fs_scroll_pane_ParamLimits

0x44ab,	// (0x0002287d) sp_fs_scroll_pane

0x44b7,	// (0x00022889) list_medium_line_x2_t3_t1

0x44c7,	// (0x00022899) list_medium_line_x2_t3_t2

0x44d5,	// (0x000228a7) list_medium_line_x2_t3_t3

0x0002,

0xf320,	// (0x0002d6f2) list_medium_line_x2_t3_t

0x44e3,	// (0x000228b5) list_medium_line_x3_t4_t1

0x44f3,	// (0x000228c5) list_medium_line_x3_t4_t2

0x4501,	// (0x000228d3) list_medium_line_x3_t4_t3

0x44d5,	// (0x000228a7) list_medium_line_x3_t4_t4

0x0003,

0xf327,	// (0x0002d6f9) list_medium_line_x3_t4_t

0x450f,	// (0x000228e1) list_medium_line_x4_t5_t1

0x451f,	// (0x000228f1) list_medium_line_x4_t5_t2

0x4501,	// (0x000228d3) list_medium_line_x4_t5_t3

0x452d,	// (0x000228ff) list_medium_line_x4_t5_t4

0x44d5,	// (0x000228a7) list_medium_line_x4_t5_t5

0x0004,

0xf330,	// (0x0002d702) list_medium_line_x4_t5_t

0x3051,	// (0x00021423) list_medium_line_t4_g4_g1_ParamLimits

0x3051,	// (0x00021423) list_medium_line_t4_g4_g1

0x453b,	// (0x0002290d) list_medium_line_t4_g4_g2_ParamLimits

0x453b,	// (0x0002290d) list_medium_line_t4_g4_g2

0x4547,	// (0x00022919) list_medium_line_t4_g4_g3_ParamLimits

0x4547,	// (0x00022919) list_medium_line_t4_g4_g3

0x3069,	// (0x0002143b) list_medium_line_t4_g4_g4_ParamLimits

0x3069,	// (0x0002143b) list_medium_line_t4_g4_g4

0x0003,

0xf33b,	// (0x0002d70d) list_medium_line_t4_g4_g_ParamLimits

0xf33b,	// (0x0002d70d) list_medium_line_t4_g4_g

0x4553,	// (0x00022925) list_medium_line_t4_g4_t1_ParamLimits

0x4553,	// (0x00022925) list_medium_line_t4_g4_t1

0x4568,	// (0x0002293a) list_medium_line_t4_g4_t2_ParamLimits

0x4568,	// (0x0002293a) list_medium_line_t4_g4_t2

0x457e,	// (0x00022950) list_medium_line_t4_g4_t3_ParamLimits

0x457e,	// (0x00022950) list_medium_line_t4_g4_t3

0x309c,	// (0x0002146e) list_medium_line_t4_g4_t4_ParamLimits

0x309c,	// (0x0002146e) list_medium_line_t4_g4_t4

0x0003,

0xf344,	// (0x0002d716) list_medium_line_t4_g4_t_ParamLimits

0xf344,	// (0x0002d716) list_medium_line_t4_g4_t

0x460c,	// (0x000229de) chi_dic_find_pane_g1

0x143c,	// (0x0001f80e) main_tport_pane

0x70b4,	// (0x00025486) list_medium_line_plain_t1

0x70da,	// (0x000254ac) list_medium_line_t2_g2_g1_ParamLimits

0x70da,	// (0x000254ac) list_medium_line_t2_g2_g1

0x70e6,	// (0x000254b8) list_medium_line_t2_g2_g2_ParamLimits

0x70e6,	// (0x000254b8) list_medium_line_t2_g2_g2

0x0001,

0xfa00,	// (0x0002ddd2) list_medium_line_t2_g2_g_ParamLimits

0xfa00,	// (0x0002ddd2) list_medium_line_t2_g2_g

0x70f2,	// (0x000254c4) list_medium_line_t2_g2_t1_ParamLimits

0x70f2,	// (0x000254c4) list_medium_line_t2_g2_t1

0x710c,	// (0x000254de) list_medium_line_t2_g2_t2_ParamLimits

0x710c,	// (0x000254de) list_medium_line_t2_g2_t2

0x0001,

0xfa05,	// (0x0002ddd7) list_medium_line_t2_g2_t_ParamLimits

0xfa05,	// (0x0002ddd7) list_medium_line_t2_g2_t

0xd7ba,	// (0x0002bb8c) aid_sp_fs_list_icon_a_sm

0xd7c2,	// (0x0002bb94) aid_sp_fs_list_icon_d

0xd7ca,	// (0x0002bb9c) aid_sp_fs_text_primary

0xd7d3,	// (0x0002bba5) aid_sp_fs_text_secondary

0x7683,	// (0x00025a55) list_medium_line

0x7683,	// (0x00025a55) list_medium_line_g2

0x7683,	// (0x00025a55) list_medium_line_g3

0x7683,	// (0x00025a55) list_medium_line_plain

0x7683,	// (0x00025a55) list_medium_line_plain_t2

0x7683,	// (0x00025a55) list_medium_line_plain_t3

0x7683,	// (0x00025a55) list_medium_line_right_icon

0x7683,	// (0x00025a55) list_medium_line_right_iconx2

0x7683,	// (0x00025a55) list_medium_line_t2

0x7683,	// (0x00025a55) list_medium_line_t2_g2

0x7683,	// (0x00025a55) list_medium_line_t2_g3

0x7683,	// (0x00025a55) list_medium_line_t2_right_icon

0x7683,	// (0x00025a55) list_medium_line_t2_right_iconx2

0x7683,	// (0x00025a55) list_medium_line_t3

0x7683,	// (0x00025a55) list_medium_line_t3_g2

0x7683,	// (0x00025a55) list_medium_line_t3_g3

0x7683,	// (0x00025a55) list_medium_line_t3_right_iconx2

0x768c,	// (0x00025a5e) list_medium_line_t4_g4

0x7695,	// (0x00025a67) list_medium_line_x2

0x7695,	// (0x00025a67) list_medium_line_x2_t2_g2

0x7695,	// (0x00025a67) list_medium_line_x2_t2_g3

0x7695,	// (0x00025a67) list_medium_line_x2_t2_g4

0x7695,	// (0x00025a67) list_medium_line_x2_t3

0x7695,	// (0x00025a67) list_medium_line_x2_t3_g2

0x7695,	// (0x00025a67) list_medium_line_x2_t3_g3

0x7695,	// (0x00025a67) list_medium_line_x2_t3_g4

0x7695,	// (0x00025a67) list_medium_line_x2_t4_g2

0x7695,	// (0x00025a67) list_medium_line_x2_t4_g4

0x769e,	// (0x00025a70) list_medium_line_x3

0x769e,	// (0x00025a70) list_medium_line_x3_t4

0x769e,	// (0x00025a70) list_medium_line_x3_t4_g4

0x768c,	// (0x00025a5e) list_medium_line_x4_t4

0x768c,	// (0x00025a5e) list_medium_line_x4_t4_g7

0x768c,	// (0x00025a5e) list_medium_line_x4_t5

0x76a7,	// (0x00025a79) list_single_fs_dyc_pane_ParamLimits

0x76a7,	// (0x00025a79) list_single_fs_dyc_pane

0x3051,	// (0x00021423) list_medium_line_x4_t4_g7_g1_ParamLimits

0x3051,	// (0x00021423) list_medium_line_x4_t4_g7_g1

0x7d86,	// (0x00026158) list_medium_line_x4_t4_g7_g2_ParamLimits

0x7d86,	// (0x00026158) list_medium_line_x4_t4_g7_g2

0x7d92,	// (0x00026164) list_medium_line_x4_t4_g7_g3_ParamLimits

0x7d92,	// (0x00026164) list_medium_line_x4_t4_g7_g3

0x7da1,	// (0x00026173) list_medium_line_x4_t4_g7_g4_ParamLimits

0x7da1,	// (0x00026173) list_medium_line_x4_t4_g7_g4

0x7dad,	// (0x0002617f) list_medium_line_x4_t4_g7_g5_ParamLimits

0x7dad,	// (0x0002617f) list_medium_line_x4_t4_g7_g5

0x7dbc,	// (0x0002618e) list_medium_line_x4_t4_g7_g6_ParamLimits

0x7dbc,	// (0x0002618e) list_medium_line_x4_t4_g7_g6

0x7dcb,	// (0x0002619d) list_medium_line_x4_t4_g7_g7_ParamLimits

0x7dcb,	// (0x0002619d) list_medium_line_x4_t4_g7_g7

0x0006,

0xfbae,	// (0x0002df80) list_medium_line_x4_t4_g7_g_ParamLimits

0xfbae,	// (0x0002df80) list_medium_line_x4_t4_g7_g

0x7dd7,	// (0x000261a9) list_medium_line_x4_t4_g7_t1_ParamLimits

0x7dd7,	// (0x000261a9) list_medium_line_x4_t4_g7_t1

0x7dec,	// (0x000261be) list_medium_line_x4_t4_g7_t2_ParamLimits

0x7dec,	// (0x000261be) list_medium_line_x4_t4_g7_t2

0x7e01,	// (0x000261d3) list_medium_line_x4_t4_g7_t3_ParamLimits

0x7e01,	// (0x000261d3) list_medium_line_x4_t4_g7_t3

0x7e16,	// (0x000261e8) list_medium_line_x4_t4_g7_t4_ParamLimits

0x7e16,	// (0x000261e8) list_medium_line_x4_t4_g7_t4

0x7e28,	// (0x000261fa) list_medium_line_x4_t4_g7_t5_ParamLimits

0x7e28,	// (0x000261fa) list_medium_line_x4_t4_g7_t5

0x0004,

0xfbbd,	// (0x0002df8f) list_medium_line_x4_t4_g7_t_ParamLimits

0xfbbd,	// (0x0002df8f) list_medium_line_x4_t4_g7_t

0x7e3a,	// (0x0002620c) list_single_dyc_row_pane_ParamLimits

0x7e3a,	// (0x0002620c) list_single_dyc_row_pane

0x84e8,	// (0x000268ba) call5_gesture_pane_ParamLimits

0x84e8,	// (0x000268ba) call5_gesture_pane

0x851c,	// (0x000268ee) call5_windows_pane_ParamLimits

0x851c,	// (0x000268ee) call5_windows_pane

0x8593,	// (0x00026965) call5_swipe_1_pane_cp_ParamLimits

0x8593,	// (0x00026965) call5_swipe_1_pane_cp

0x859f,	// (0x00026971) call5_swipe_2_pane_cp_ParamLimits

0x859f,	// (0x00026971) call5_swipe_2_pane_cp

0xaefd,	// (0x000292cf) call5_image_pane_cp

0x85ab,	// (0x0002697d) popup_call5_audio_first_window_cp_ParamLimits

0x85ab,	// (0x0002697d) popup_call5_audio_first_window_cp

0xe299,	// (0x0002c66b) call5_swipe_1_pane_g1_cp_ParamLimits

0xe299,	// (0x0002c66b) call5_swipe_1_pane_g1_cp

0xe2d9,	// (0x0002c6ab) call5_swipe_1_pane_g2_cp

0xe2b2,	// (0x0002c684) call5_swipe_1_pane_t1_cp_ParamLimits

0xe2b2,	// (0x0002c684) call5_swipe_1_pane_t1_cp

0xe299,	// (0x0002c66b) call5_swipe_2_pane_g1_cp_ParamLimits

0xe299,	// (0x0002c66b) call5_swipe_2_pane_g1_cp

0xe2e1,	// (0x0002c6b3) call5_swipe_2_pane_g2_cp

0xe2e9,	// (0x0002c6bb) call5_swipe_2_pane_t1_cp_ParamLimits

0xe2e9,	// (0x0002c6bb) call5_swipe_2_pane_t1_cp

0xa3ab,	// (0x0002877d) main_sp_fs_email_pane

0xe2fe,	// (0x0002c6d0) main_sp_fs_listscroll_pane_te

0xe307,	// (0x0002c6d9) popup_sp_fs_action_menu_pane_ParamLimits

0xe307,	// (0x0002c6d9) popup_sp_fs_action_menu_pane

0xc751,	// (0x0002ab23) bg_sp_fs_ctrlbar_pane_g1

0xe349,	// (0x0002c71b) bg_sp_fs_ctrlbar_ddmenu_pane_g1

0xe352,	// (0x0002c724) bg_sp_fs_ctrlbar_ddmenu_pane_g2

0xe35b,	// (0x0002c72d) bg_sp_fs_ctrlbar_ddmenu_pane_g3

0xc751,	// (0x0002ab23) bg_sp_fs_ctrlbar_ddmenu_pane_g4

0x0003,

0xfc50,	// (0x0002e022) bg_sp_fs_ctrlbar_ddmenu_pane_g

0xc534,	// (0x0002a906) bg_sp_fs_ctrlbar_ddmenu_pane_ParamLimits

0xc534,	// (0x0002a906) bg_sp_fs_ctrlbar_ddmenu_pane

0xe364,	// (0x0002c736) main_sp_fs_ctrlbar_ddmenu_pane_g1_ParamLimits

0xe364,	// (0x0002c736) main_sp_fs_ctrlbar_ddmenu_pane_g1

0xe370,	// (0x0002c742) main_sp_fs_ctrlbar_ddmenu_pane_g2_ParamLimits

0xe370,	// (0x0002c742) main_sp_fs_ctrlbar_ddmenu_pane_g2

0x0001,

0x0a30,	// (0x0001ee02) main_sp_fs_ctrlbar_ddmenu_pane_g_ParamLimits

0x0a30,	// (0x0001ee02) main_sp_fs_ctrlbar_ddmenu_pane_g

0xe37c,	// (0x0002c74e) main_sp_fs_ctrlbar_ddmenu_pane_t1_ParamLimits

0xe37c,	// (0x0002c74e) main_sp_fs_ctrlbar_ddmenu_pane_t1

0x85b9,	// (0x0002698b) list_medium_line_t2_right_icon_g1

0x85c1,	// (0x00026993) list_medium_line_t2_right_icon_t1

0x85d1,	// (0x000269a3) list_medium_line_t2_right_icon_t2

0x0001,

0xfc59,	// (0x0002e02b) list_medium_line_t2_right_icon_t

0xc347,	// (0x0002a719) bg_sp_fs_ctrlbar_pane_ParamLimits

0xc347,	// (0x0002a719) bg_sp_fs_ctrlbar_pane

0x8636,	// (0x00026a08) main_sp_fs_ctrlbar_button_pane_cp01

0x863e,	// (0x00026a10) main_sp_fs_ctrlbar_ddmenu_pane

0xe3ce,	// (0x0002c7a0) main_sp_fs_ctrlbar_pane_g1

0xe3da,	// (0x0002c7ac) main_sp_fs_ctrlbar_pane_g2

0x0001,

0x0a3a,	// (0x0001ee0c) main_sp_fs_ctrlbar_pane_g

0xe3e6,	// (0x0002c7b8) main_sp_fs_ctrlbar_pane_t1

0x8648,	// (0x00026a1a) main_sp_fs_ctrlbar_pane

0x865e,	// (0x00026a30) main_sp_fs_listscroll_pane_te_cp01

0x866f,	// (0x00026a41) popup_sp_fs_action_menu_pane_cp01_ParamLimits

0x866f,	// (0x00026a41) popup_sp_fs_action_menu_pane_cp01

0xa3ab,	// (0x0002877d) bg_sp_fs_highlight_list_pane_cp01_ParamLimits

0xa3ab,	// (0x0002877d) bg_sp_fs_highlight_list_pane_cp01

0xe416,	// (0x0002c7e8) sp_fs_action_menu_list_gene_pane_g1_ParamLimits

0xe416,	// (0x0002c7e8) sp_fs_action_menu_list_gene_pane_g1

0xe425,	// (0x0002c7f7) sp_fs_action_menu_list_gene_pane_g2_ParamLimits

0xe425,	// (0x0002c7f7) sp_fs_action_menu_list_gene_pane_g2

0x0001,

0x0a44,	// (0x0001ee16) sp_fs_action_menu_list_gene_pane_g_ParamLimits

0x0a44,	// (0x0001ee16) sp_fs_action_menu_list_gene_pane_g

0xe432,	// (0x0002c804) sp_fs_action_menu_list_gene_pane_t1_ParamLimits

0xe432,	// (0x0002c804) sp_fs_action_menu_list_gene_pane_t1

0xe44a,	// (0x0002c81c) sp_fs_action_menu_list_gene_pane_ParamLimits

0xe44a,	// (0x0002c81c) sp_fs_action_menu_list_gene_pane

0xe467,	// (0x0002c839) popup_sp_fs_action_menu_bg_pane_ParamLimits

0xe467,	// (0x0002c839) popup_sp_fs_action_menu_bg_pane

0xe475,	// (0x0002c847) sp_fs_action_menu_list_pane_ParamLimits

0xe475,	// (0x0002c847) sp_fs_action_menu_list_pane

0xe493,	// (0x0002c865) sp_fs_scroll_pane_cp01_ParamLimits

0xe493,	// (0x0002c865) sp_fs_scroll_pane_cp01

0x8699,	// (0x00026a6b) list_medium_line_plain_t2_t1

0x86a9,	// (0x00026a7b) list_medium_line_plain_t2_t2

0x0001,

0xfc5e,	// (0x0002e030) list_medium_line_plain_t2_t

0x86b7,	// (0x00026a89) list_medium_line_plain_t3_t1

0x86c7,	// (0x00026a99) list_medium_line_plain_t3_t2

0x86d5,	// (0x00026aa7) list_medium_line_plain_t3_t3

0x0002,

0xfc63,	// (0x0002e035) list_medium_line_plain_t3_t

0x3051,	// (0x00021423) list_medium_line_x2_t2_g2_g1_ParamLimits

0x3051,	// (0x00021423) list_medium_line_x2_t2_g2_g1

0x3069,	// (0x0002143b) list_medium_line_x2_t2_g2_g2_ParamLimits

0x3069,	// (0x0002143b) list_medium_line_x2_t2_g2_g2

0x0001,

0xf24b,	// (0x0002d61d) list_medium_line_x2_t2_g2_g_ParamLimits

0xf24b,	// (0x0002d61d) list_medium_line_x2_t2_g2_g

0x4553,	// (0x00022925) list_medium_line_x2_t2_g2_t1_ParamLimits

0x4553,	// (0x00022925) list_medium_line_x2_t2_g2_t1

0x309c,	// (0x0002146e) list_medium_line_x2_t2_g2_t2_ParamLimits

0x309c,	// (0x0002146e) list_medium_line_x2_t2_g2_t2

0x0001,

0xfc6a,	// (0x0002e03c) list_medium_line_x2_t2_g2_t_ParamLimits

0xfc6a,	// (0x0002e03c) list_medium_line_x2_t2_g2_t

0x3051,	// (0x00021423) list_medium_line_x2_t4_g2_g1_ParamLimits

0x3051,	// (0x00021423) list_medium_line_x2_t4_g2_g1

0x3069,	// (0x0002143b) list_medium_line_x2_t4_g2_g2_ParamLimits

0x3069,	// (0x0002143b) list_medium_line_x2_t4_g2_g2

0x0001,

0xf24b,	// (0x0002d61d) list_medium_line_x2_t4_g2_g_ParamLimits

0xf24b,	// (0x0002d61d) list_medium_line_x2_t4_g2_g

0x86e3,	// (0x00026ab5) list_medium_line_x2_t4_g2_t1_ParamLimits

0x86e3,	// (0x00026ab5) list_medium_line_x2_t4_g2_t1

0x86fd,	// (0x00026acf) list_medium_line_x2_t4_g2_t2_ParamLimits

0x86fd,	// (0x00026acf) list_medium_line_x2_t4_g2_t2

0x8712,	// (0x00026ae4) list_medium_line_x2_t4_g2_t3_ParamLimits

0x8712,	// (0x00026ae4) list_medium_line_x2_t4_g2_t3

0x309c,	// (0x0002146e) list_medium_line_x2_t4_g2_t4_ParamLimits

0x309c,	// (0x0002146e) list_medium_line_x2_t4_g2_t4

0x0003,

0xfc6f,	// (0x0002e041) list_medium_line_x2_t4_g2_t_ParamLimits

0xfc6f,	// (0x0002e041) list_medium_line_x2_t4_g2_t

0x8727,	// (0x00026af9) list_medium_line_t3_right_iconx2_g1

0x85b9,	// (0x0002698b) list_medium_line_t3_right_iconx2_g2

0x872f,	// (0x00026b01) list_medium_line_t3_right_iconx2_g3

0x0002,

0xfc78,	// (0x0002e04a) list_medium_line_t3_right_iconx2_g

0x8737,	// (0x00026b09) list_medium_line_t3_right_iconx2_t1

0x8747,	// (0x00026b19) list_medium_line_t3_right_iconx2_t2

0x0001,

0xfc7f,	// (0x0002e051) list_medium_line_t3_right_iconx2_t

0x3051,	// (0x00021423) list_medium_line_x3_t4_g4_g1_ParamLimits

0x3051,	// (0x00021423) list_medium_line_x3_t4_g4_g1

0x305d,	// (0x0002142f) list_medium_line_x3_t4_g4_g2_ParamLimits

0x305d,	// (0x0002142f) list_medium_line_x3_t4_g4_g2

0x453b,	// (0x0002290d) list_medium_line_x3_t4_g4_g3_ParamLimits

0x453b,	// (0x0002290d) list_medium_line_x3_t4_g4_g3

0x8755,	// (0x00026b27) list_medium_line_x3_t4_g4_g4_ParamLimits

0x8755,	// (0x00026b27) list_medium_line_x3_t4_g4_g4

0x0003,

0xfc84,	// (0x0002e056) list_medium_line_x3_t4_g4_g_ParamLimits

0xfc84,	// (0x0002e056) list_medium_line_x3_t4_g4_g

0x8761,	// (0x00026b33) list_medium_line_x3_t4_g4_t1_ParamLimits

0x8761,	// (0x00026b33) list_medium_line_x3_t4_g4_t1

0x8778,	// (0x00026b4a) list_medium_line_x3_t4_g4_t2_ParamLimits

0x8778,	// (0x00026b4a) list_medium_line_x3_t4_g4_t2

0x878d,	// (0x00026b5f) list_medium_line_x3_t4_g4_t3_ParamLimits

0x878d,	// (0x00026b5f) list_medium_line_x3_t4_g4_t3

0x87a2,	// (0x00026b74) list_medium_line_x3_t4_g4_t4_ParamLimits

0x87a2,	// (0x00026b74) list_medium_line_x3_t4_g4_t4

0x0003,

0xfc8d,	// (0x0002e05f) list_medium_line_x3_t4_g4_t_ParamLimits

0xfc8d,	// (0x0002e05f) list_medium_line_x3_t4_g4_t

0x87bf,	// (0x00026b91) list_single_dyc_row_text_pane_t1_ParamLimits

0x87bf,	// (0x00026b91) list_single_dyc_row_text_pane_t1

0x87f6,	// (0x00026bc8) list_single_dyc_row_text_pane_t2_ParamLimits

0x87f6,	// (0x00026bc8) list_single_dyc_row_text_pane_t2

0xe4b9,	// (0x0002c88b) list_single_dyc_row_text_pane_t3_ParamLimits

0xe4b9,	// (0x0002c88b) list_single_dyc_row_text_pane_t3

0x0005,

0xfc96,	// (0x0002e068) list_single_dyc_row_text_pane_t_ParamLimits

0xfc96,	// (0x0002e068) list_single_dyc_row_text_pane_t

0xe4dd,	// (0x0002c8af) list_single_dyc_row_pane_g1_ParamLimits

0xe4dd,	// (0x0002c8af) list_single_dyc_row_pane_g1

0xe4e9,	// (0x0002c8bb) list_single_dyc_row_pane_g2_ParamLimits

0xe4e9,	// (0x0002c8bb) list_single_dyc_row_pane_g2

0xe4f5,	// (0x0002c8c7) list_single_dyc_row_pane_g3_ParamLimits

0xe4f5,	// (0x0002c8c7) list_single_dyc_row_pane_g3

0xe501,	// (0x0002c8d3) list_single_dyc_row_pane_g4_ParamLimits

0xe501,	// (0x0002c8d3) list_single_dyc_row_pane_g4

0x0003,

0x0a8e,	// (0x0001ee60) list_single_dyc_row_pane_g_ParamLimits

0x0a8e,	// (0x0001ee60) list_single_dyc_row_pane_g

0xe50d,	// (0x0002c8df) list_single_dyc_row_text_pane_ParamLimits

0xe50d,	// (0x0002c8df) list_single_dyc_row_text_pane

0x9b42,	// (0x00027f14) bg_sp_fs_scroll_pane

0xe52c,	// (0x0002c8fe) thumb_sp_fs_scroll_pane

0x70da,	// (0x000254ac) list_medium_line_g1_ParamLimits

0x70da,	// (0x000254ac) list_medium_line_g1

0x8919,	// (0x00026ceb) list_medium_line_t1_ParamLimits

0x8919,	// (0x00026ceb) list_medium_line_t1

0x3051,	// (0x00021423) list_medium_line_x2_g1_ParamLimits

0x3051,	// (0x00021423) list_medium_line_x2_g1

0x305d,	// (0x0002142f) list_medium_line_x2_g2_ParamLimits

0x305d,	// (0x0002142f) list_medium_line_x2_g2

0x0001,

0xfca3,	// (0x0002e075) list_medium_line_x2_g_ParamLimits

0xfca3,	// (0x0002e075) list_medium_line_x2_g

0xe535,	// (0x0002c907) list_medium_line_x2_t1_ParamLimits

0xe535,	// (0x0002c907) list_medium_line_x2_t1

0x3051,	// (0x00021423) list_medium_line_x3_g1_ParamLimits

0x3051,	// (0x00021423) list_medium_line_x3_g1

0x305d,	// (0x0002142f) list_medium_line_x3_g2_ParamLimits

0x305d,	// (0x0002142f) list_medium_line_x3_g2

0x0001,

0xfca3,	// (0x0002e075) list_medium_line_x3_g_ParamLimits

0xfca3,	// (0x0002e075) list_medium_line_x3_g

0xe535,	// (0x0002c907) list_medium_line_x3_t1_ParamLimits

0xe535,	// (0x0002c907) list_medium_line_x3_t1

0xe54b,	// (0x0002c91d) thumb_sp_fs_scroll_pane_g1

0xe554,	// (0x0002c926) thumb_sp_fs_scroll_pane_g2

0xe55d,	// (0x0002c92f) thumb_sp_fs_scroll_pane_g3

0x0002,

0x0a9c,	// (0x0001ee6e) thumb_sp_fs_scroll_pane_g

0xe54b,	// (0x0002c91d) bg_sp_fs_scroll_pane_g1

0xe554,	// (0x0002c926) bg_sp_fs_scroll_pane_g2

0xe55d,	// (0x0002c92f) bg_sp_fs_scroll_pane_g3

0x0002,

0x0a9c,	// (0x0001ee6e) bg_sp_fs_scroll_pane_g

0x3051,	// (0x00021423) list_medium_line_x2_t3_g4_g1_ParamLimits

0x3051,	// (0x00021423) list_medium_line_x2_t3_g4_g1

0x30f7,	// (0x000214c9) list_medium_line_x2_t3_g4_g2_ParamLimits

0x30f7,	// (0x000214c9) list_medium_line_x2_t3_g4_g2

0x305d,	// (0x0002142f) list_medium_line_x2_t3_g4_g3_ParamLimits

0x305d,	// (0x0002142f) list_medium_line_x2_t3_g4_g3

0x3069,	// (0x0002143b) list_medium_line_x2_t3_g4_g4_ParamLimits

0x3069,	// (0x0002143b) list_medium_line_x2_t3_g4_g4

0x0003,

0xf2c7,	// (0x0002d699) list_medium_line_x2_t3_g4_g_ParamLimits

0xf2c7,	// (0x0002d699) list_medium_line_x2_t3_g4_g

0x892e,	// (0x00026d00) list_medium_line_x2_t3_g4_t1_ParamLimits

0x892e,	// (0x00026d00) list_medium_line_x2_t3_g4_t1

0x8944,	// (0x00026d16) list_medium_line_x2_t3_g4_t2_ParamLimits

0x8944,	// (0x00026d16) list_medium_line_x2_t3_g4_t2

0x309c,	// (0x0002146e) list_medium_line_x2_t3_g4_t3_ParamLimits

0x309c,	// (0x0002146e) list_medium_line_x2_t3_g4_t3

0x0002,

0xfca8,	// (0x0002e07a) list_medium_line_x2_t3_g4_t_ParamLimits

0xfca8,	// (0x0002e07a) list_medium_line_x2_t3_g4_t

0x70da,	// (0x000254ac) list_medium_line_g2_g1_ParamLimits

0x70da,	// (0x000254ac) list_medium_line_g2_g1

0x70e6,	// (0x000254b8) list_medium_line_g2_g2_ParamLimits

0x70e6,	// (0x000254b8) list_medium_line_g2_g2

0x0001,

0xfa00,	// (0x0002ddd2) list_medium_line_g2_g_ParamLimits

0xfa00,	// (0x0002ddd2) list_medium_line_g2_g

0x895d,	// (0x00026d2f) list_medium_line_g2_t1_ParamLimits

0x895d,	// (0x00026d2f) list_medium_line_g2_t1

0x70da,	// (0x000254ac) list_medium_line_t3_g2_g1_ParamLimits

0x70da,	// (0x000254ac) list_medium_line_t3_g2_g1

0x70e6,	// (0x000254b8) list_medium_line_t3_g2_g2_ParamLimits

0x70e6,	// (0x000254b8) list_medium_line_t3_g2_g2

0x0001,

0xfa00,	// (0x0002ddd2) list_medium_line_t3_g2_g_ParamLimits

0xfa00,	// (0x0002ddd2) list_medium_line_t3_g2_g

0x8972,	// (0x00026d44) list_medium_line_t3_g2_t1_ParamLimits

0x8972,	// (0x00026d44) list_medium_line_t3_g2_t1

0x8989,	// (0x00026d5b) list_medium_line_t3_g2_t2_ParamLimits

0x8989,	// (0x00026d5b) list_medium_line_t3_g2_t2

0x899e,	// (0x00026d70) list_medium_line_t3_g2_t3_ParamLimits

0x899e,	// (0x00026d70) list_medium_line_t3_g2_t3

0x0002,

0xfcaf,	// (0x0002e081) list_medium_line_t3_g2_t_ParamLimits

0xfcaf,	// (0x0002e081) list_medium_line_t3_g2_t

0x85b9,	// (0x0002698b) list_medium_line_right_icon_g1

0x89b3,	// (0x00026d85) list_medium_line_right_icon_t1

0x70da,	// (0x000254ac) list_medium_line_t2_g1_ParamLimits

0x70da,	// (0x000254ac) list_medium_line_t2_g1

0x89c1,	// (0x00026d93) list_medium_line_t2_t1_ParamLimits

0x89c1,	// (0x00026d93) list_medium_line_t2_t1

0x89db,	// (0x00026dad) list_medium_line_t2_t2_ParamLimits

0x89db,	// (0x00026dad) list_medium_line_t2_t2

0x0001,

0xfcb6,	// (0x0002e088) list_medium_line_t2_t_ParamLimits

0xfcb6,	// (0x0002e088) list_medium_line_t2_t

0x70da,	// (0x000254ac) list_medium_line_t3_g1_ParamLimits

0x70da,	// (0x000254ac) list_medium_line_t3_g1

0x89f0,	// (0x00026dc2) list_medium_line_t3_t1_ParamLimits

0x89f0,	// (0x00026dc2) list_medium_line_t3_t1

0x8a0a,	// (0x00026ddc) list_medium_line_t3_t2_ParamLimits

0x8a0a,	// (0x00026ddc) list_medium_line_t3_t2

0x8a1f,	// (0x00026df1) list_medium_line_t3_t3_ParamLimits

0x8a1f,	// (0x00026df1) list_medium_line_t3_t3

0x0002,

0xfcbb,	// (0x0002e08d) list_medium_line_t3_t_ParamLimits

0xfcbb,	// (0x0002e08d) list_medium_line_t3_t

0x70da,	// (0x000254ac) list_medium_line_g3_g1_ParamLimits

0x70da,	// (0x000254ac) list_medium_line_g3_g1

0x8a34,	// (0x00026e06) list_medium_line_g3_g2_ParamLimits

0x8a34,	// (0x00026e06) list_medium_line_g3_g2

0x70e6,	// (0x000254b8) list_medium_line_g3_g3_ParamLimits

0x70e6,	// (0x000254b8) list_medium_line_g3_g3

0x0002,

0xfcc2,	// (0x0002e094) list_medium_line_g3_g_ParamLimits

0xfcc2,	// (0x0002e094) list_medium_line_g3_g

0x8a40,	// (0x00026e12) list_medium_line_g3_t1_ParamLimits

0x8a40,	// (0x00026e12) list_medium_line_g3_t1

0x70da,	// (0x000254ac) list_medium_line_t2_g3_g1_ParamLimits

0x70da,	// (0x000254ac) list_medium_line_t2_g3_g1

0x8a34,	// (0x00026e06) list_medium_line_t2_g3_g2_ParamLimits

0x8a34,	// (0x00026e06) list_medium_line_t2_g3_g2

0x70e6,	// (0x000254b8) list_medium_line_t2_g3_g3_ParamLimits

0x70e6,	// (0x000254b8) list_medium_line_t2_g3_g3

0x0002,

0xfcc2,	// (0x0002e094) list_medium_line_t2_g3_g_ParamLimits

0xfcc2,	// (0x0002e094) list_medium_line_t2_g3_g

0x8a55,	// (0x00026e27) list_medium_line_t2_g3_t1_ParamLimits

0x8a55,	// (0x00026e27) list_medium_line_t2_g3_t1

0x8a6c,	// (0x00026e3e) list_medium_line_t2_g3_t2_ParamLimits

0x8a6c,	// (0x00026e3e) list_medium_line_t2_g3_t2

0x0001,

0xfcc9,	// (0x0002e09b) list_medium_line_t2_g3_t_ParamLimits

0xfcc9,	// (0x0002e09b) list_medium_line_t2_g3_t

0x70da,	// (0x000254ac) list_medium_line_t3_g3_g1_ParamLimits

0x70da,	// (0x000254ac) list_medium_line_t3_g3_g1

0x8a34,	// (0x00026e06) list_medium_line_t3_g3_g2_ParamLimits

0x8a34,	// (0x00026e06) list_medium_line_t3_g3_g2

0x70e6,	// (0x000254b8) list_medium_line_t3_g3_g3_ParamLimits

0x70e6,	// (0x000254b8) list_medium_line_t3_g3_g3

0x0002,

0xfcc2,	// (0x0002e094) list_medium_line_t3_g3_g_ParamLimits

0xfcc2,	// (0x0002e094) list_medium_line_t3_g3_g

0x8a81,	// (0x00026e53) list_medium_line_t3_g3_t1_ParamLimits

0x8a81,	// (0x00026e53) list_medium_line_t3_g3_t1

0x8a9a,	// (0x00026e6c) list_medium_line_t3_g3_t2_ParamLimits

0x8a9a,	// (0x00026e6c) list_medium_line_t3_g3_t2

0x8ab0,	// (0x00026e82) list_medium_line_t3_g3_t3_ParamLimits

0x8ab0,	// (0x00026e82) list_medium_line_t3_g3_t3

0x0002,

0xfcce,	// (0x0002e0a0) list_medium_line_t3_g3_t_ParamLimits

0xfcce,	// (0x0002e0a0) list_medium_line_t3_g3_t

0x8727,	// (0x00026af9) list_medium_line_right_iconx2_g1

0x85b9,	// (0x0002698b) list_medium_line_right_iconx2_g2

0x0001,

0xfcd5,	// (0x0002e0a7) list_medium_line_right_iconx2_g

0x8ac6,	// (0x00026e98) list_medium_line_right_iconx2_t1

0x8727,	// (0x00026af9) list_medium_line_t2_right_iconx2_g1

0x85b9,	// (0x0002698b) list_medium_line_t2_right_iconx2_g2

0x0001,

0xfcd5,	// (0x0002e0a7) list_medium_line_t2_right_iconx2_g

0x8ad4,	// (0x00026ea6) list_medium_line_t2_right_iconx2_t1

0x8ae4,	// (0x00026eb6) list_medium_line_t2_right_iconx2_t2

0x0001,

0xfcda,	// (0x0002e0ac) list_medium_line_t2_right_iconx2_t

0x8af2,	// (0x00026ec4) list_medium_line_x4_t4_t1

0x8b00,	// (0x00026ed2) list_medium_line_x4_t4_t2

0x8b10,	// (0x00026ee2) list_medium_line_x4_t4_t3

0x8b20,	// (0x00026ef2) list_medium_line_x4_t4_t4

0x0003,

0xfcdf,	// (0x0002e0b1) list_medium_line_x4_t4_t

0x8b5a,	// (0x00026f2c) tport_appsw_pane_ParamLimits

0x8b5a,	// (0x00026f2c) tport_appsw_pane

0x8b68,	// (0x00026f3a) tport_contact_pane_ParamLimits

0x8b68,	// (0x00026f3a) tport_contact_pane

0x8b78,	// (0x00026f4a) tport_listscroll_pane_ParamLimits

0x8b78,	// (0x00026f4a) tport_listscroll_pane

0x8b88,	// (0x00026f5a) cell_tport_appsw_pane_ParamLimits

0x8b88,	// (0x00026f5a) cell_tport_appsw_pane

0xca8a,	// (0x0002ae5c) tport_appsw_pane_g1_ParamLimits

0xca8a,	// (0x0002ae5c) tport_appsw_pane_g1

0xe566,	// (0x0002c938) tport_contact_pane_g1

0xddab,	// (0x0002c17d) tport_contact_pane_t1

0xe56f,	// (0x0002c941) tport_contact_pane_t2

0x0001,

0x0ae3,	// (0x0001eeb5) tport_contact_pane_t

0xe57d,	// (0x0002c94f) list_tport_pane

0xe586,	// (0x0002c958) scroll_pane_cp_030

0x8bbb,	// (0x00026f8d) cell_tport_appsw_pane_g1

0x8bcb,	// (0x00026f9d) cell_tport_appsw_pane_t1

0x8bd9,	// (0x00026fab) grid_highlight_pane_cp019

0x8be1,	// (0x00026fb3) list_tport_double_graphic_pane_ParamLimits

0x8be1,	// (0x00026fb3) list_tport_double_graphic_pane

0xa3ab,	// (0x0002877d) list_highlight_pane_cp023_ParamLimits

0xa3ab,	// (0x0002877d) list_highlight_pane_cp023

0x8bf3,	// (0x00026fc5) list_tport_double_graphic_pane_g1_ParamLimits

0x8bf3,	// (0x00026fc5) list_tport_double_graphic_pane_g1

0x8c00,	// (0x00026fd2) list_tport_double_graphic_pane_t1_ParamLimits

0x8c00,	// (0x00026fd2) list_tport_double_graphic_pane_t1

0x8c15,	// (0x00026fe7) list_tport_double_graphic_pane_t2_ParamLimits

0x8c15,	// (0x00026fe7) list_tport_double_graphic_pane_t2

0x0001,

0xfcef,	// (0x0002e0c1) list_tport_double_graphic_pane_t_ParamLimits

0xfcef,	// (0x0002e0c1) list_tport_double_graphic_pane_t

0x9b42,	// (0x00027f14) main_cale_note_pane

0x215b,	// (0x0002052d) cell_vitu2_function_top_wide_pane_cp01_ParamLimits

0x215b,	// (0x0002052d) cell_vitu2_function_top_wide_pane_cp01

0x81a1,	// (0x00026573) wait_bar_pane_cp05_ParamLimits

0xa3ab,	// (0x0002877d) listscroll_cmail_pane

0xe58f,	// (0x0002c961) list_cmail_pane

0x8c27,	// (0x00026ff9) list_cmail_body_pane

0x8c4e,	// (0x00027020) list_single_cmail_header_caption_pane

0x8c82,	// (0x00027054) list_single_cmail_header_detail_pane_ParamLimits

0x8c82,	// (0x00027054) list_single_cmail_header_detail_pane

0xe59f,	// (0x0002c971) list_single_cmail_header_caption_pane_t1

0x8cc6,	// (0x00027098) list_single_cmail_header_detail_pane_g1_ParamLimits

0x8cc6,	// (0x00027098) list_single_cmail_header_detail_pane_g1

0xe5ad,	// (0x0002c97f) list_single_cmail_header_detail_pane_g2_ParamLimits

0xe5ad,	// (0x0002c97f) list_single_cmail_header_detail_pane_g2

0x0002,

0xfcf4,	// (0x0002e0c6) list_single_cmail_header_detail_pane_g_ParamLimits

0xfcf4,	// (0x0002e0c6) list_single_cmail_header_detail_pane_g

0x8cdc,	// (0x000270ae) list_single_cmail_header_detail_pane_t1_ParamLimits

0x8cdc,	// (0x000270ae) list_single_cmail_header_detail_pane_t1

0x8d18,	// (0x000270ea) list_single_cmail_header_editor_pane_bg_ParamLimits

0x8d18,	// (0x000270ea) list_single_cmail_header_editor_pane_bg

0xe5ea,	// (0x0002c9bc) list_cmail_body_pane_g1

0xe5f3,	// (0x0002c9c5) list_cmail_body_pane_t1

0xd247,	// (0x0002b619) list_single_cmail_header_editor_pane_bg_g1

0xa6cc,	// (0x00028a9e) list_single_cmail_header_editor_pane_bg_g1_copy1

0xd257,	// (0x0002b629) list_single_cmail_header_editor_pane_bg_g1_copy2

0xd24f,	// (0x0002b621) list_single_cmail_header_editor_pane_bg_g1_copy3

0xd489,	// (0x0002b85b) list_single_cmail_header_editor_pane_bg_g1_copy4

0xd277,	// (0x0002b649) list_single_cmail_header_editor_pane_bg_g1_copy4_copy1

0xd267,	// (0x0002b639) list_single_cmail_header_editor_pane_bg_g1_copy4_copy2

0xd26f,	// (0x0002b641) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3

0xa6ac,	// (0x00028a7e) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3_copy1

0x8d2f,	// (0x00027101) calenote_gesture_pane_ParamLimits

0x8d2f,	// (0x00027101) calenote_gesture_pane

0x8d49,	// (0x0002711b) calenote_window_pane_ParamLimits

0x8d49,	// (0x0002711b) calenote_window_pane

0xe601,	// (0x0002c9d3) popup_note_window_cp01

0x8d61,	// (0x00027133) calenote_swipe_1_pane_ParamLimits

0x8d61,	// (0x00027133) calenote_swipe_1_pane

0x859f,	// (0x00026971) calenote_swipe_2_pane_ParamLimits

0x859f,	// (0x00026971) calenote_swipe_2_pane

0xe299,	// (0x0002c66b) calenote_swipe_1_pane_g1_ParamLimits

0xe299,	// (0x0002c66b) calenote_swipe_1_pane_g1

0xe2a6,	// (0x0002c678) calenote_swipe_1_pane_g2_ParamLimits

0xe2a6,	// (0x0002c678) calenote_swipe_1_pane_g2

0x0001,

0x0a1d,	// (0x0001edef) calenote_swipe_1_pane_g_ParamLimits

0x0a1d,	// (0x0001edef) calenote_swipe_1_pane_g

0xe613,	// (0x0002c9e5) calenote_swipe_1_pane_t1_ParamLimits

0xe613,	// (0x0002c9e5) calenote_swipe_1_pane_t1

0xe299,	// (0x0002c66b) calenote_swipe_2_pane_g1_ParamLimits

0xe299,	// (0x0002c66b) calenote_swipe_2_pane_g1

0xe632,	// (0x0002ca04) calenote_swipe_2_pane_g2_ParamLimits

0xe632,	// (0x0002ca04) calenote_swipe_2_pane_g2

0x0001,

0x0b00,	// (0x0001eed2) calenote_swipe_2_pane_g_ParamLimits

0x0b00,	// (0x0001eed2) calenote_swipe_2_pane_g

0xe63e,	// (0x0002ca10) calenote_swipe_2_pane_t1_ParamLimits

0xe63e,	// (0x0002ca10) calenote_swipe_2_pane_t1

0x9b42,	// (0x00027f14) main_mup_navstr_pane

0x602a,	// (0x000243fc) main_mup3_pane_t7_ParamLimits

0x602a,	// (0x000243fc) main_mup3_pane_t7

0x1a6c,	// (0x0001fe3e) main_mp4_pane_g6_ParamLimits

0x1a6c,	// (0x0001fe3e) main_mp4_pane_g6

0x1d5f,	// (0x00020131) main_image3_pane_t4_ParamLimits

0x1d5f,	// (0x00020131) main_image3_pane_t4

0x8d74,	// (0x00027146) popup_navstr_preview_pane_ParamLimits

0x8d74,	// (0x00027146) popup_navstr_preview_pane

0x8d80,	// (0x00027152) scroll_navstr_pane_ParamLimits

0x8d80,	// (0x00027152) scroll_navstr_pane

0x9b42,	// (0x00027f14) bg_popup_preview_window_pane_cp04

0xe665,	// (0x0002ca37) popup_navstr_preview_pane_t1

0x8d8c,	// (0x0002715e) scroll_navstr_pane_g1_ParamLimits

0x8d8c,	// (0x0002715e) scroll_navstr_pane_g1

0x8d99,	// (0x0002716b) scroll_navstr_pane_t1_ParamLimits

0x8d99,	// (0x0002716b) scroll_navstr_pane_t1

0xe60a,	// (0x0002c9dc) bg_button_pane_cp014

0xe60a,	// (0x0002c9dc) bg_button_pane_cp030

0x848e,	// (0x00026860) list_double_fisheye_pane_g4_ParamLimits

0x848e,	// (0x00026860) list_double_fisheye_pane_g4

0x849a,	// (0x0002686c) list_double_fisheye_pane_g5_ParamLimits

0x849a,	// (0x0002686c) list_double_fisheye_pane_g5

0xd44c,	// (0x0002b81e) sp_fs_scroll_pane_cp03

0xe3ce,	// (0x0002c7a0) main_sp_fs_ctrlbar_pane_g1_ParamLimits

0xe3da,	// (0x0002c7ac) main_sp_fs_ctrlbar_pane_g2_ParamLimits

0x0a3a,	// (0x0001ee0c) main_sp_fs_ctrlbar_pane_g_ParamLimits

0xe3e6,	// (0x0002c7b8) main_sp_fs_ctrlbar_pane_t1_ParamLimits

0xe597,	// (0x0002c969) sp_fs_scroll_pane_cp02

0xa3c2,	// (0x00028794) popup_sp_fs_calendar_preview_list_single_pane_ParamLimits

0xa3c2,	// (0x00028794) popup_sp_fs_calendar_preview_list_single_pane

0x9b42,	// (0x00027f14) main_cam6_pano_pane

0x1420,	// (0x0001f7f2) main_mup3_pane_ParamLimits

0x9b42,	// (0x00027f14) main_phacti_pane

0x8076,	// (0x00026448) bg_button_pane_cp11

0x808e,	// (0x00026460) main_mobtv_info_pane_g2_ParamLimits

0x808e,	// (0x00026460) main_mobtv_info_pane_g2

0x0001,

0xfbfd,	// (0x0002dfcf) main_mobtv_info_pane_g_ParamLimits

0xfbfd,	// (0x0002dfcf) main_mobtv_info_pane_g

0x8240,	// (0x00026612) sc_clock_pane_t5_ParamLimits

0x8240,	// (0x00026612) sc_clock_pane_t5

0x82f5,	// (0x000266c7) main_radioblah_pane_g1_ParamLimits

0xe1e5,	// (0x0002c5b7) main_radioblah_pane_t3_ParamLimits

0xe1e5,	// (0x0002c5b7) main_radioblah_pane_t3

0xe1fd,	// (0x0002c5cf) main_radioblah_pane_t4_ParamLimits

0xe1fd,	// (0x0002c5cf) main_radioblah_pane_t4

0x8313,	// (0x000266e5) main_radioblah_text_pane_ParamLimits

0x8313,	// (0x000266e5) main_radioblah_text_pane

0x8320,	// (0x000266f2) main_radioblah_info_pane_g1_ParamLimits

0x83b5,	// (0x00026787) main_radioblah_info_pane_t4_ParamLimits

0x83b5,	// (0x00026787) main_radioblah_info_pane_t4

0xa3ab,	// (0x0002877d) main_sp_fs_calendar_pane

0x8dab,	// (0x0002717d) main_phacti_pane_g1

0x8db3,	// (0x00027185) phacti_note_pane_ParamLimits

0x8db3,	// (0x00027185) phacti_note_pane

0xe67c,	// (0x0002ca4e) phacti_term_pane_ParamLimits

0xe67c,	// (0x0002ca4e) phacti_term_pane

0xe691,	// (0x0002ca63) phacti_note_pane_t1_ParamLimits

0xe691,	// (0x0002ca63) phacti_note_pane_t1

0xe6a8,	// (0x0002ca7a) phacti_term_pane_g1

0xe6b0,	// (0x0002ca82) phacti_term_pane_t1_ParamLimits

0xe6b0,	// (0x0002ca82) phacti_term_pane_t1

0xe6da,	// (0x0002caac) popup_sp_fs_calendar_preview_list_single_pane_g1

0xe6e2,	// (0x0002cab4) popup_sp_fs_calendar_preview_list_single_pane_g2

0x0001,

0x0b0a,	// (0x0001eedc) popup_sp_fs_calendar_preview_list_single_pane_g

0xe6ea,	// (0x0002cabc) popup_sp_fs_calendar_preview_list_single_pane_t1_ParamLimits

0xe6ea,	// (0x0002cabc) popup_sp_fs_calendar_preview_list_single_pane_t1

0xe700,	// (0x0002cad2) aid_popup_sp_fs_bg_corner_pane

0xc751,	// (0x0002ab23) popup_sp_fs_calendar_preview_bg_pane_g1

0x9b42,	// (0x00027f14) popup_sp_fs_calendar_preview_bg_pane

0x8dc9,	// (0x0002719b) popup_sp_fs_calendar_preview_list_pane

0xc347,	// (0x0002a719) bg_main_sp_fs_cale_pane_ParamLimits

0xc347,	// (0x0002a719) bg_main_sp_fs_cale_pane

0xe711,	// (0x0002cae3) listscroll_cale_mrui_pane_ParamLimits

0xe711,	// (0x0002cae3) listscroll_cale_mrui_pane

0xe726,	// (0x0002caf8) listscroll_sp_fs_schedule_track_pane

0xe72f,	// (0x0002cb01) main_sp_fs_ctrlbar_pane_cp01_ParamLimits

0xe72f,	// (0x0002cb01) main_sp_fs_ctrlbar_pane_cp01

0xe742,	// (0x0002cb14) main_sp_fs_ribbon_pane

0xe74a,	// (0x0002cb1c) popup_sp_fs_cale_preview_window

0x8e1e,	// (0x000271f0) list_single_sp_fs_schedule_track_pane_ParamLimits

0x8e1e,	// (0x000271f0) list_single_sp_fs_schedule_track_pane

0xd1bd,	// (0x0002b58f) bg_sp_fs_highlight_list_pane_cp03_ParamLimits

0xd1bd,	// (0x0002b58f) bg_sp_fs_highlight_list_pane_cp03

0x8e4c,	// (0x0002721e) list_single_sp_fs_schedule_track_pane_g1_ParamLimits

0x8e4c,	// (0x0002721e) list_single_sp_fs_schedule_track_pane_g1

0x8e58,	// (0x0002722a) list_single_sp_fs_schedule_track_pane_g2_ParamLimits

0x8e58,	// (0x0002722a) list_single_sp_fs_schedule_track_pane_g2

0x0001,

0xfd00,	// (0x0002e0d2) list_single_sp_fs_schedule_track_pane_g_ParamLimits

0xfd00,	// (0x0002e0d2) list_single_sp_fs_schedule_track_pane_g

0x8e64,	// (0x00027236) list_single_sp_fs_schedule_track_pane_t1_ParamLimits

0x8e64,	// (0x00027236) list_single_sp_fs_schedule_track_pane_t1

0x8e7c,	// (0x0002724e) sp_fs_schedule_track_pane_ParamLimits

0x8e7c,	// (0x0002724e) sp_fs_schedule_track_pane

0xe75c,	// (0x0002cb2e) sp_fs_schedule_track_pane_g1

0xe764,	// (0x0002cb36) sp_fs_schedule_track_pane_g2

0xe76c,	// (0x0002cb3e) sp_fs_schedule_track_pane_g3

0xe774,	// (0x0002cb46) sp_fs_schedule_track_pane_g4

0xe77c,	// (0x0002cb4e) sp_fs_schedule_track_pane_g5

0x0004,

0x0b14,	// (0x0001eee6) sp_fs_schedule_track_pane_g

0xd247,	// (0x0002b619) bg_sp_fs_schedule_viewer_highlight_g1

0xa6cc,	// (0x00028a9e) bg_sp_fs_schedule_viewer_highlight_g2

0xd24f,	// (0x0002b621) bg_sp_fs_schedule_viewer_highlight_g3

0xd257,	// (0x0002b629) bg_sp_fs_schedule_viewer_highlight_g4

0xd489,	// (0x0002b85b) bg_sp_fs_schedule_viewer_highlight_g5

0xd267,	// (0x0002b639) bg_sp_fs_schedule_viewer_highlight_g6

0xd26f,	// (0x0002b641) bg_sp_fs_schedule_viewer_highlight_g7

0xd277,	// (0x0002b649) bg_sp_fs_schedule_viewer_highlight_g8

0xa6ac,	// (0x00028a7e) bg_sp_fs_schedule_viewer_highlight_g9

0x0008,

0xfd05,	// (0x0002e0d7) bg_sp_fs_schedule_viewer_highlight_g

0x9b42,	// (0x00027f14) bg_main_sp_fs_ribbon_pane

0x8e8c,	// (0x0002725e) main_sp_fs_ribbon_pane_g1

0xe784,	// (0x0002cb56) main_sp_fs_ribbon_pane_t1

0x8e95,	// (0x00027267) main_sp_fs_ribbon_pane_t2

0xe793,	// (0x0002cb65) main_sp_fs_ribbon_pane_t3

0x0002,

0xfd18,	// (0x0002e0ea) main_sp_fs_ribbon_pane_t

0xe7a2,	// (0x0002cb74) main_sp_fs_ribbon_scheduler_pane

0xe7aa,	// (0x0002cb7c) bg_main_sp_fs_ribbon_pane_g1

0xe7b3,	// (0x0002cb85) bg_main_sp_fs_ribbon_pane_g2

0xe7bc,	// (0x0002cb8e) bg_main_sp_fs_ribbon_pane_g3

0x0002,

0x0b39,	// (0x0001ef0b) bg_main_sp_fs_ribbon_pane_g

0xe7c4,	// (0x0002cb96) main_sp_fs_ribbon_scheduler_pane_g1

0xe7cd,	// (0x0002cb9f) main_sp_fs_ribbon_scheduler_pane_g2

0xe7d6,	// (0x0002cba8) main_sp_fs_ribbon_scheduler_pane_g3

0x0002,

0x0b40,	// (0x0001ef12) main_sp_fs_ribbon_scheduler_pane_g

0xe7df,	// (0x0002cbb1) list_cale_mrui_pane

0x8ea6,	// (0x00027278) sp_fs_scroll_pane_cp07_ParamLimits

0x8ea6,	// (0x00027278) sp_fs_scroll_pane_cp07

0x8ec2,	// (0x00027294) bg_sp_fs_schedule_viewer_highlight_ParamLimits

0x8ec2,	// (0x00027294) bg_sp_fs_schedule_viewer_highlight

0xe7ec,	// (0x0002cbbe) list_single_sp_fs_schedule_track_pane_cp01

0xe7f4,	// (0x0002cbc6) list_sp_fs_schedule_track_pane

0xe7fc,	// (0x0002cbce) sp_fs_scroll_pane_cp06_ParamLimits

0xe7fc,	// (0x0002cbce) sp_fs_scroll_pane_cp06

0xc751,	// (0x0002ab23) bgmain_sp_fs_calendar_pane_g1

0x8ecf,	// (0x000272a1) list_single_cale_mrui_pane_ParamLimits

0x8ecf,	// (0x000272a1) list_single_cale_mrui_pane

0xe80e,	// (0x0002cbe0) list_single_cale_mrui_row_pane_ParamLimits

0xe80e,	// (0x0002cbe0) list_single_cale_mrui_row_pane

0xe81b,	// (0x0002cbed) list_single_cale_mrui_row_pane_g1_ParamLimits

0xe81b,	// (0x0002cbed) list_single_cale_mrui_row_pane_g1

0xe860,	// (0x0002cc32) list_single_cale_mrui_row_pane_t1_ParamLimits

0xe860,	// (0x0002cc32) list_single_cale_mrui_row_pane_t1

0x8f00,	// (0x000272d2) list_single_cale_mrui_row_pane_t2_ParamLimits

0x8f00,	// (0x000272d2) list_single_cale_mrui_row_pane_t2

0xe872,	// (0x0002cc44) list_single_cale_mrui_row_pane_t3_ParamLimits

0xe872,	// (0x0002cc44) list_single_cale_mrui_row_pane_t3

0xe8a1,	// (0x0002cc73) list_single_cale_mrui_row_pane_t4_ParamLimits

0xe8a1,	// (0x0002cc73) list_single_cale_mrui_row_pane_t4

0x0003,

0xfd1f,	// (0x0002e0f1) list_single_cale_mrui_row_pane_t_ParamLimits

0xfd1f,	// (0x0002e0f1) list_single_cale_mrui_row_pane_t

0x8f66,	// (0x00027338) list_single_cmail_header_editor_pane_bg_cp01_ParamLimits

0x8f66,	// (0x00027338) list_single_cmail_header_editor_pane_bg_cp01

0x8f88,	// (0x0002735a) list_single_cmail_header_editor_pane_bg_cp02_ParamLimits

0x8f88,	// (0x0002735a) list_single_cmail_header_editor_pane_bg_cp02

0x8fa4,	// (0x00027376) main_radioblah_text_pane_t1_ParamLimits

0x8fa4,	// (0x00027376) main_radioblah_text_pane_t1

0xe8d0,	// (0x0002cca2) cam6_indi_pane_cp01

0xe8d8,	// (0x0002ccaa) cam6_mode_pane_cp01

0xe8e0,	// (0x0002ccb2) cam6_pano_pane

0xe8e9,	// (0x0002ccbb) cam6_zoom_pane_cp01

0xe8f1,	// (0x0002ccc3) cam6_pano_image_pane

0xe8fc,	// (0x0002ccce) cam6_pano_pane_g1

0xdf52,	// (0x0002c324) cam6_pano_pane_g2

0xe905,	// (0x0002ccd7) cam6_pano_pane_g3

0xe90e,	// (0x0002cce0) cam6_pano_pane_g4

0xcd67,	// (0x0002b139) cam6_pano_pane_g5

0xe917,	// (0x0002cce9) cam6_pano_pane_g6

0xe921,	// (0x0002ccf3) cam6_pano_pane_g7

0xe929,	// (0x0002ccfb) cam6_pano_pane_g8

0xe932,	// (0x0002cd04) cam6_pano_pane_g9

0x0008,

0xfd28,	// (0x0002e0fa) cam6_pano_pane_g

0x9b42,	// (0x00027f14) main_browser_tag_pane

0xe65d,	// (0x0002ca2f) grid_navstr_albumart_pane

0xe93d,	// (0x0002cd0f) cell_navstr_albumart_pane_ParamLimits

0xe93d,	// (0x0002cd0f) cell_navstr_albumart_pane

0xb05e,	// (0x00029430) cell_navstr_albumart_pane_g1

0xc158,	// (0x0002a52a) cell_navstr_albumart_pane_g2

0xc168,	// (0x0002a53a) cell_navstr_albumart_pane_g3

0xc160,	// (0x0002a532) cell_navstr_albumart_pane_g4

0x0003,

0xfd3b,	// (0x0002e10d) cell_navstr_albumart_pane_g

0x8fbf,	// (0x00027391) bt_list_pane_ParamLimits

0x8fbf,	// (0x00027391) bt_list_pane

0xe95f,	// (0x0002cd31) bt_list_pane_t1

0xe96e,	// (0x0002cd40) bt_list_pane_t2

0x0001,

0x0b73,	// (0x0001ef45) bt_list_pane_t

0x9b42,	// (0x00027f14) main_cale_prevew_pane

0x8fe3,	// (0x000273b5) popup_cale_preview_window_ParamLimits

0x8fe3,	// (0x000273b5) popup_cale_preview_window

0xa3ab,	// (0x0002877d) bg_popup_preview_window_pane_cp05_ParamLimits

0xa3ab,	// (0x0002877d) bg_popup_preview_window_pane_cp05

0xe97d,	// (0x0002cd4f) list_cale_preview_pane_ParamLimits

0xe97d,	// (0x0002cd4f) list_cale_preview_pane

0xe989,	// (0x0002cd5b) list_double_cale_preview_pane_ParamLimits

0xe989,	// (0x0002cd5b) list_double_cale_preview_pane

0xe99b,	// (0x0002cd6d) list_single_cale_preview_pane_ParamLimits

0xe99b,	// (0x0002cd6d) list_single_cale_preview_pane

0xe9af,	// (0x0002cd81) list_single_cale_preview_pane_g1

0xe9b7,	// (0x0002cd89) list_single_cale_preview_pane_t1_ParamLimits

0xe9b7,	// (0x0002cd89) list_single_cale_preview_pane_t1

0xe9cc,	// (0x0002cd9e) list_double_cale_preview_pane_g1

0xe9d4,	// (0x0002cda6) list_double_cale_preview_pane_t1_ParamLimits

0xe9d4,	// (0x0002cda6) list_double_cale_preview_pane_t1

0xe9e9,	// (0x0002cdbb) list_double_cale_preview_pane_t2_ParamLimits

0xe9e9,	// (0x0002cdbb) list_double_cale_preview_pane_t2

0x0001,

0x0b78,	// (0x0001ef4a) list_double_cale_preview_pane_t_ParamLimits

0x0b78,	// (0x0001ef4a) list_double_cale_preview_pane_t

0x9b42,	// (0x00027f14) main_ezdial_pane

0xa3ab,	// (0x0002877d) main_sp_fs_email_pane_ParamLimits

0x85df,	// (0x000269b1) cmail_ddmenu_btn01_pane_ParamLimits

0x85df,	// (0x000269b1) cmail_ddmenu_btn01_pane

0x85fc,	// (0x000269ce) cmail_ddmenu_btn02_pane_ParamLimits

0x85fc,	// (0x000269ce) cmail_ddmenu_btn02_pane

0x861a,	// (0x000269ec) cmail_ddmenu_btn03_pane_ParamLimits

0x861a,	// (0x000269ec) cmail_ddmenu_btn03_pane

0x8648,	// (0x00026a1a) main_sp_fs_ctrlbar_pane_ParamLimits

0x865e,	// (0x00026a30) main_sp_fs_listscroll_pane_te_cp01_ParamLimits

0x8c27,	// (0x00026ff9) list_cmail_body_pane_ParamLimits

0x8cbd,	// (0x0002708f) bg_button_pane_cp12

0xe5b9,	// (0x0002c98b) list_single_cmail_header_detail_pane_g3_ParamLimits

0xe5b9,	// (0x0002c98b) list_single_cmail_header_detail_pane_g3

0xe5c6,	// (0x0002c998) list_single_cmail_header_detail_pane_t2_ParamLimits

0xe5c6,	// (0x0002c998) list_single_cmail_header_detail_pane_t2

0x0001,

0xfcfb,	// (0x0002e0cd) list_single_cmail_header_detail_pane_t_ParamLimits

0xfcfb,	// (0x0002e0cd) list_single_cmail_header_detail_pane_t

0xe6c5,	// (0x0002ca97) phacti_term_pane_t2_ParamLimits

0xe6c5,	// (0x0002ca97) phacti_term_pane_t2

0x0001,

0x0b05,	// (0x0001eed7) phacti_term_pane_t_ParamLimits

0x0b05,	// (0x0001eed7) phacti_term_pane_t

0xea01,	// (0x0002cdd3) aid_size_list_single_double

0x8ffa,	// (0x000273cc) popup_ezdial_listscroll_window

0x901d,	// (0x000273ef) popup_number_entry_window_cp01

0xaefd,	// (0x000292cf) bg_popup_call_pane_cp09

0xea0d,	// (0x0002cddf) ezdial_list_pane

0xea15,	// (0x0002cde7) scroll_pane_cp23

0xc534,	// (0x0002a906) bg_button_pane_cp028_ParamLimits

0xc534,	// (0x0002a906) bg_button_pane_cp028

0x902b,	// (0x000273fd) cmail_ddmenu_btn01_pane_g1_ParamLimits

0x902b,	// (0x000273fd) cmail_ddmenu_btn01_pane_g1

0x903d,	// (0x0002740f) cmail_ddmenu_btn01_pane_g2_ParamLimits

0x903d,	// (0x0002740f) cmail_ddmenu_btn01_pane_g2

0x0001,

0xfd44,	// (0x0002e116) cmail_ddmenu_btn01_pane_g_ParamLimits

0xfd44,	// (0x0002e116) cmail_ddmenu_btn01_pane_g

0xea1d,	// (0x0002cdef) cmail_ddmenu_btn01_pane_t1_ParamLimits

0xea1d,	// (0x0002cdef) cmail_ddmenu_btn01_pane_t1

0xc347,	// (0x0002a719) bg_button_pane_cp029_ParamLimits

0xc347,	// (0x0002a719) bg_button_pane_cp029

0x9049,	// (0x0002741b) cmail_ddmenu_btn02_pane_g1_ParamLimits

0x9049,	// (0x0002741b) cmail_ddmenu_btn02_pane_g1

0x9061,	// (0x00027433) cmail_ddmenu_btn02_pane_t1_ParamLimits

0x9061,	// (0x00027433) cmail_ddmenu_btn02_pane_t1

0xd1bd,	// (0x0002b58f) bg_button_pane_cp031_ParamLimits

0xd1bd,	// (0x0002b58f) bg_button_pane_cp031

0x9049,	// (0x0002741b) cmail_ddmenu_btn03_pane_g1_ParamLimits

0x9049,	// (0x0002741b) cmail_ddmenu_btn03_pane_g1

0x9061,	// (0x00027433) cmail_ddmenu_btn03_pane_t1_ParamLimits

0x9061,	// (0x00027433) cmail_ddmenu_btn03_pane_t1

0x68b6,	// (0x00024c88) cell_dialer2_keypad_pane_t1_ParamLimits

0x68d0,	// (0x00024ca2) cell_dialer2_keypad_pane_t1_copy1_ParamLimits

0x68d0,	// (0x00024ca2) cell_dialer2_keypad_pane_t1_copy1

0x7efb,	// (0x000262cd) ncimui_group_button_pane

0xa3ab,	// (0x0002877d) main_sp_fs_calendar_pane_ParamLimits

0x8c4e,	// (0x00027020) list_single_cmail_header_caption_pane_ParamLimits

0xe708,	// (0x0002cada) aid_recal_txt_sm_pane

0x9b42,	// (0x00027f14) mian_recal_day_pane

0xe74a,	// (0x0002cb1c) popup_sp_fs_cale_preview_window_ParamLimits

0xea32,	// (0x0002ce04) list_recal_day_pane

0xea74,	// (0x0002ce46) list_single_recal_day_pane_ParamLimits

0xea74,	// (0x0002ce46) list_single_recal_day_pane

0xea86,	// (0x0002ce58) list_single_recal_day_pane_g1_ParamLimits

0xea86,	// (0x0002ce58) list_single_recal_day_pane_g1

0xea92,	// (0x0002ce64) list_single_recal_day_pane_g2_ParamLimits

0xea92,	// (0x0002ce64) list_single_recal_day_pane_g2

0xeaa2,	// (0x0002ce74) list_single_recal_day_pane_g3_ParamLimits

0xeaa2,	// (0x0002ce74) list_single_recal_day_pane_g3

0x9085,	// (0x00027457) list_single_recal_day_pane_g4_ParamLimits

0x9085,	// (0x00027457) list_single_recal_day_pane_g4

0xeaae,	// (0x0002ce80) list_single_recal_day_pane_g5_ParamLimits

0xeaae,	// (0x0002ce80) list_single_recal_day_pane_g5

0xeabe,	// (0x0002ce90) list_single_recal_day_pane_g6_ParamLimits

0xeabe,	// (0x0002ce90) list_single_recal_day_pane_g6

0x0004,

0xfd53,	// (0x0002e125) list_single_recal_day_pane_g_ParamLimits

0xfd53,	// (0x0002e125) list_single_recal_day_pane_g

0xead2,	// (0x0002cea4) list_single_recal_day_pane_t1

0xeae4,	// (0x0002ceb6) list_single_recal_day_pane_t2

0x0001,

0xfd5e,	// (0x0002e130) list_single_recal_day_pane_t

0x90a5,	// (0x00027477) ncimui_query_button_pane_ParamLimits

0x90a5,	// (0x00027477) ncimui_query_button_pane

0x90b5,	// (0x00027487) ncimui_query_button_pane_t1_ParamLimits

0x90b5,	// (0x00027487) ncimui_query_button_pane_t1

0xeaf6,	// (0x0002cec8) ncimui_query_button_pane_t2_ParamLimits

0xeaf6,	// (0x0002cec8) ncimui_query_button_pane_t2

0x0001,

0xfd63,	// (0x0002e135) ncimui_query_button_pane_t_ParamLimits

0xfd63,	// (0x0002e135) ncimui_query_button_pane_t

0x90c8,	// (0x0002749a) query_button_pane_ParamLimits

0x90c8,	// (0x0002749a) query_button_pane

0x9b42,	// (0x00027f14) bg_button_pane_cp0028

0xeb09,	// (0x0002cedb) query_button_pane_t1

0x143c,	// (0x0001f80e) main_tport_pane_ParamLimits

0x8b30,	// (0x00026f02) bg_popup_window_pane_cp01_ParamLimits

0x8b30,	// (0x00026f02) bg_popup_window_pane_cp01

0x8b3e,	// (0x00026f10) heading_pane_cp08_ParamLimits

0x8b3e,	// (0x00026f10) heading_pane_cp08

0x8b4c,	// (0x00026f1e) heading_pane_cp07_ParamLimits

0x8b4c,	// (0x00026f1e) heading_pane_cp07

0x8bbb,	// (0x00026f8d) cell_tport_appsw_pane_g2

0x0002,

0xfce8,	// (0x0002e0ba) cell_tport_appsw_pane_g

0x4c5a,	// (0x0002302c) input_candi_list_open_g1

0xa897,	// (0x00028c69) list_cale_time_pane_g6_ParamLimits

0xa897,	// (0x00028c69) list_cale_time_pane_g6

0x5acc,	// (0x00023e9e) aid_size_touch_calib_1_ParamLimits

0x5acc,	// (0x00023e9e) aid_size_touch_calib_1

0x5ad8,	// (0x00023eaa) aid_size_touch_calib_2_ParamLimits

0x5ad8,	// (0x00023eaa) aid_size_touch_calib_2

0x5ae6,	// (0x00023eb8) aid_size_touch_calib_3_ParamLimits

0x5ae6,	// (0x00023eb8) aid_size_touch_calib_3

0x5af6,	// (0x00023ec8) aid_size_touch_calib_4_ParamLimits

0x5af6,	// (0x00023ec8) aid_size_touch_calib_4

0x5b04,	// (0x00023ed6) main_touch_calib_button_group_pane_ParamLimits

0x5b04,	// (0x00023ed6) main_touch_calib_button_group_pane

0x5b12,	// (0x00023ee4) main_touch_calib_pane_g1_ParamLimits

0x5b1e,	// (0x00023ef0) main_touch_calib_pane_g2_ParamLimits

0x5b2a,	// (0x00023efc) main_touch_calib_pane_g3_ParamLimits

0x5b36,	// (0x00023f08) main_touch_calib_pane_g4_ParamLimits

0xf756,	// (0x0002db28) main_touch_calib_pane_g_ParamLimits

0x5b42,	// (0x00023f14) main_touch_calib_pane_t1_ParamLimits

0x5b5b,	// (0x00023f2d) main_touch_calib_pane_t2_ParamLimits

0x5b74,	// (0x00023f46) main_touch_calib_pane_t3_ParamLimits

0x5b8a,	// (0x00023f5c) main_touch_calib_pane_t4_ParamLimits

0x5ba0,	// (0x00023f72) main_touch_calib_pane_t5_ParamLimits

0xf75f,	// (0x0002db31) main_touch_calib_pane_t_ParamLimits

0xcb25,	// (0x0002aef7) list_single_fp_cale_pane_g3_ParamLimits

0xcb25,	// (0x0002aef7) list_single_fp_cale_pane_g3

0x1420,	// (0x0001f7f2) bg_button_pane_cp012_ParamLimits

0x1420,	// (0x0001f7f2) bg_vkb2_func_pane_cp03_ParamLimits

0x236e,	// (0x00020740) cell_vitu2_function_top_pane_g1_ParamLimits

0x1420,	// (0x0001f7f2) bg_vkb2_func_pane_cp04_ParamLimits

0x7e83,	// (0x00026255) main_ncimui_button_group_pane_ParamLimits

0x7e83,	// (0x00026255) main_ncimui_button_group_pane

0x7ee9,	// (0x000262bb) main_ncimui_pane_t3_ParamLimits

0x7ee9,	// (0x000262bb) main_ncimui_pane_t3

0xe673,	// (0x0002ca45) phacti_button_group_pane

0xea01,	// (0x0002cdd3) aid_size_list_single_double_ParamLimits

0x8ffa,	// (0x000273cc) popup_ezdial_listscroll_window_ParamLimits

0x901d,	// (0x000273ef) popup_number_entry_window_cp01_ParamLimits

0x90d5,	// (0x000274a7) phacti_button_pane_ParamLimits

0x90d5,	// (0x000274a7) phacti_button_pane

0x9b42,	// (0x00027f14) bg_button_pane_cp14

0xeb17,	// (0x0002cee9) phacti_button_pane_t1

0x90e6,	// (0x000274b8) main_touch_calib_button_pane_ParamLimits

0x90e6,	// (0x000274b8) main_touch_calib_button_pane

0xa29e,	// (0x00028670) bg_button_pane_cp18_ParamLimits

0xa29e,	// (0x00028670) bg_button_pane_cp18

0xeb25,	// (0x0002cef7) main_touch_calib_button_pane_t1_ParamLimits

0xeb25,	// (0x0002cef7) main_touch_calib_button_pane_t1

0xeb3b,	// (0x0002cf0d) main_touch_calib_button_pane_t2_ParamLimits

0xeb3b,	// (0x0002cf0d) main_touch_calib_button_pane_t2

0x0001,

0xfd68,	// (0x0002e13a) main_touch_calib_button_pane_t_ParamLimits

0xfd68,	// (0x0002e13a) main_touch_calib_button_pane_t

0x9b42,	// (0x00027f14) cell_ncimui_button_pane

0x9b42,	// (0x00027f14) bg_button_pane_cp032

0xeb59,	// (0x0002cf2b) cell_ncimui_button_pane_t1

0x1c72,	// (0x00020044) image3_infobar_pane_ParamLimits

0x1c72,	// (0x00020044) image3_infobar_pane

0x8262,	// (0x00026634) fs_bigclock_status_pane_ParamLimits

0x8262,	// (0x00026634) fs_bigclock_status_pane

0x826f,	// (0x00026641) main_fs_bigclock_clock_pane_ParamLimits

0x826f,	// (0x00026641) main_fs_bigclock_clock_pane

0x8293,	// (0x00026665) main_fs_bigclock_indi_pane_ParamLimits

0x8293,	// (0x00026665) main_fs_bigclock_indi_pane

0x82c3,	// (0x00026695) main_fs_bigclock_swipe_pane_ParamLimits

0x82c3,	// (0x00026695) main_fs_bigclock_swipe_pane

0x9b42,	// (0x00027f14) main_fs_clock_dumped_data

0xe05f,	// (0x0002c431) list_single_fs_bigclock_indicator_pane_g1_ParamLimits

0xe05f,	// (0x0002c431) list_single_fs_bigclock_indicator_pane_g1

0xe07a,	// (0x0002c44c) list_single_fs_bigclock_indicator_pane_g2_ParamLimits

0xe07a,	// (0x0002c44c) list_single_fs_bigclock_indicator_pane_g2

0xe094,	// (0x0002c466) list_single_fs_bigclock_indicator_pane_g3_ParamLimits

0xe094,	// (0x0002c466) list_single_fs_bigclock_indicator_pane_g3

0xe0ae,	// (0x0002c480) list_single_fs_bigclock_indicator_pane_g4_ParamLimits

0xe0ae,	// (0x0002c480) list_single_fs_bigclock_indicator_pane_g4

0x0004,

0x09ce,	// (0x0001eda0) list_single_fs_bigclock_indicator_pane_g_ParamLimits

0x09ce,	// (0x0001eda0) list_single_fs_bigclock_indicator_pane_g

0xe0d7,	// (0x0002c4a9) list_single_fs_bigclock_indicator_pane_t1_ParamLimits

0xe0d7,	// (0x0002c4a9) list_single_fs_bigclock_indicator_pane_t1

0xe0ff,	// (0x0002c4d1) list_single_fs_bigclock_indicator_pane_t2_ParamLimits

0xe0ff,	// (0x0002c4d1) list_single_fs_bigclock_indicator_pane_t2

0xe127,	// (0x0002c4f9) list_single_fs_bigclock_indicator_pane_t3_ParamLimits

0xe127,	// (0x0002c4f9) list_single_fs_bigclock_indicator_pane_t3

0xe14f,	// (0x0002c521) list_single_fs_bigclock_indicator_pane_t4_ParamLimits

0xe14f,	// (0x0002c521) list_single_fs_bigclock_indicator_pane_t4

0x0004,

0x09d9,	// (0x0001edab) list_single_fs_bigclock_indicator_pane_t_ParamLimits

0x09d9,	// (0x0001edab) list_single_fs_bigclock_indicator_pane_t

0xeb67,	// (0x0002cf39) image3_infobar_fav_pane_ParamLimits

0xeb67,	// (0x0002cf39) image3_infobar_fav_pane

0xeb89,	// (0x0002cf5b) image3_infobar_loc_pane_ParamLimits

0xeb89,	// (0x0002cf5b) image3_infobar_loc_pane

0xeb9d,	// (0x0002cf6f) image3_infobar_time_pane_ParamLimits

0xeb9d,	// (0x0002cf6f) image3_infobar_time_pane

0xc751,	// (0x0002ab23) image3_infobar_time_pane_g1

0xebad,	// (0x0002cf7f) image3_infobar_time_pane_t1

0xc751,	// (0x0002ab23) image3_infobar_loc_pane_g1

0xebbb,	// (0x0002cf8d) image3_infobar_loc_pane_g2

0x0001,

0xfd6d,	// (0x0002e13f) image3_infobar_loc_pane_g

0xebc3,	// (0x0002cf95) image3_infobar_loc_pane_t1

0xc751,	// (0x0002ab23) image3_infobar_fav_pane_g1

0xebd1,	// (0x0002cfa3) image3_infobar_fav_pane_g2

0x0001,

0xfd72,	// (0x0002e144) image3_infobar_fav_pane_g

0xebd9,	// (0x0002cfab) fs_bigclock_status_battery_pane

0xebe2,	// (0x0002cfb4) fs_bigclock_status_signal_pane

0xebeb,	// (0x0002cfbd) fs_bigclock_status_title_pane

0xebf4,	// (0x0002cfc6) fs_bigclock_status_signal_pane_g1

0xebfd,	// (0x0002cfcf) fs_bigclock_status_signal_pane_g2

0x0001,

0x0bb0,	// (0x0001ef82) fs_bigclock_status_signal_pane_g

0xec05,	// (0x0002cfd7) fs_bigclock_status_battery_pane_g1

0xec0e,	// (0x0002cfe0) fs_bigclock_status_battery_pane_g2

0x0001,

0x0bb5,	// (0x0001ef87) fs_bigclock_status_battery_pane_g

0xec16,	// (0x0002cfe8) fs_bigclock_status_title_pane_t1

0xc751,	// (0x0002ab23) main_fs_bigclock_clock_pane_g1

0x90f6,	// (0x000274c8) main_fs_bigclock_clock_pane_g2

0x90f6,	// (0x000274c8) main_fs_bigclock_clock_pane_g3

0x90f6,	// (0x000274c8) main_fs_bigclock_clock_pane_g4

0x0003,

0xfd77,	// (0x0002e149) main_fs_bigclock_clock_pane_g

0x90fe,	// (0x000274d0) main_fs_bigclock_clock_pane_t1

0x910c,	// (0x000274de) main_fs_bigclock_clock_pane_t2

0x0001,

0xfd80,	// (0x0002e152) main_fs_bigclock_clock_pane_t

0xec24,	// (0x0002cff6) list_single_fs_bigclock_indicator_pane_ParamLimits

0xec24,	// (0x0002cff6) list_single_fs_bigclock_indicator_pane

0x911b,	// (0x000274ed) list_single_fs_bigclock_pane_ParamLimits

0x911b,	// (0x000274ed) list_single_fs_bigclock_pane

0xec3e,	// (0x0002d010) main_fs_bigclock_indicator_pane_t1

0xec4d,	// (0x0002d01f) list_single_fs_bigclock_pane_g1

0xec55,	// (0x0002d027) list_single_fs_bigclock_pane_t1

0xc751,	// (0x0002ab23) main_fs_bigclock_swipe_pane_g1

0xec98,	// (0x0002d06a) main_fs_bigclock_swipe_pane_g2

0x0001,

0xfd8c,	// (0x0002e15e) main_fs_bigclock_swipe_pane_g

0xeca0,	// (0x0002d072) main_fs_bigclock_swipe_pane_t1_ParamLimits

0xeca0,	// (0x0002d072) main_fs_bigclock_swipe_pane_t1

0x4594,	// (0x00022966) call_type_pane_ParamLimits

0x9b42,	// (0x00027f14) main_btmg_pane

0xe847,	// (0x0002cc19) list_single_cale_mrui_row_pane_g2_ParamLimits

0xe847,	// (0x0002cc19) list_single_cale_mrui_row_pane_g2

0x0002,

0x0b47,	// (0x0001ef19) list_single_cale_mrui_row_pane_g_ParamLimits

0x0b47,	// (0x0001ef19) list_single_cale_mrui_row_pane_g

0xea5b,	// (0x0002ce2d) list_recal_vselct_arw_lo_pane

0xea63,	// (0x0002ce35) list_recal_vselct_arw_up_pane

0xea6b,	// (0x0002ce3d) list_recal_vselct_pane

0x917c,	// (0x0002754e) btmg_button_pane

0x9188,	// (0x0002755a) main_btmg_pane_g1

0x9b42,	// (0x00027f14) bg_button_pane_cp044

0xecbd,	// (0x0002d08f) btmg_button_pane_t1

0xc333,	// (0x0002a705) aid_listscroll_gen

0xa3ab,	// (0x0002877d) main_cntbar_detail_pane

0xe58f,	// (0x0002c961) list_cmail_folder_pane

0xd44c,	// (0x0002b81e) sp_fs_scroll_pane_cp03_ParamLimits

0x8c4e,	// (0x00027020) list_single_fs_dyc_pane_cp01_ParamLimits

0x8c4e,	// (0x00027020) list_single_fs_dyc_pane_cp01

0xeccb,	// (0x0002d09d) aid_size_cmail_indent

0xecd4,	// (0x0002d0a6) list_single_dyc_row_pane_cp01

0x91b0,	// (0x00027582) cntbar_detail_list_pane_ParamLimits

0x91b0,	// (0x00027582) cntbar_detail_list_pane

0x91ea,	// (0x000275bc) main_cntbar_detail_cont_pane_ParamLimits

0x91ea,	// (0x000275bc) main_cntbar_detail_cont_pane

0x44ab,	// (0x0002287d) scroll_pane_cp032_ParamLimits

0x44ab,	// (0x0002287d) scroll_pane_cp032

0x91f6,	// (0x000275c8) cntbar_detail_list_event_pane_ParamLimits

0x91f6,	// (0x000275c8) cntbar_detail_list_event_pane

0x91bc,	// (0x0002758e) cntbar_detail_list_shct_pane

0xa71a,	// (0x00028aec) aid_list_gen

0xecdd,	// (0x0002d0af) aid_scroll

0xece6,	// (0x0002d0b8) aid_size_touch_scroll_bar

0x7695,	// (0x00025a67) aid_list_double

0xecef,	// (0x0002d0c1) aid_list_single

0x7683,	// (0x00025a55) aid_list_single_lg

0xecf8,	// (0x0002d0ca) aid_list_z_g_a_sm

0xed00,	// (0x0002d0d2) aid_list_z_g_d

0xed08,	// (0x0002d0da) aid_txt_z_prm

0x920a,	// (0x000275dc) aid_txt_z_prm_cp01

0x9218,	// (0x000275ea) aid_txt_z_sec

0x9226,	// (0x000275f8) main_cntbar_detail_cont_pane_g1_ParamLimits

0x9226,	// (0x000275f8) main_cntbar_detail_cont_pane_g1

0x9233,	// (0x00027605) main_cntbar_detail_cont_pane_g2_ParamLimits

0x9233,	// (0x00027605) main_cntbar_detail_cont_pane_g2

0x0001,

0xfd91,	// (0x0002e163) main_cntbar_detail_cont_pane_g_ParamLimits

0xfd91,	// (0x0002e163) main_cntbar_detail_cont_pane_g

0xed16,	// (0x0002d0e8) main_cntbar_detail_cont_pane_t1

0xed24,	// (0x0002d0f6) main_cntbar_detail_cont_pane_t2

0xed32,	// (0x0002d104) main_cntbar_detail_cont_pane_t3

0x0002,

0x0bde,	// (0x0001efb0) main_cntbar_detail_cont_pane_t

0x923f,	// (0x00027611) cell_cntbar_detail_list_shct_pane_ParamLimits

0x923f,	// (0x00027611) cell_cntbar_detail_list_shct_pane

0xed40,	// (0x0002d112) cntbar_detail_list_shct_pane_g1

0xed49,	// (0x0002d11b) cntbar_detail_list_shct_pane_g2

0x0001,

0x0be5,	// (0x0001efb7) cntbar_detail_list_shct_pane_g

0x9253,	// (0x00027625) cntbar_detail_list_event_pane_g1_ParamLimits

0x9253,	// (0x00027625) cntbar_detail_list_event_pane_g1

0x925f,	// (0x00027631) cntbar_detail_list_event_pane_g2_ParamLimits

0x925f,	// (0x00027631) cntbar_detail_list_event_pane_g2

0x0005,

0xfd96,	// (0x0002e168) cntbar_detail_list_event_pane_g_ParamLimits

0xfd96,	// (0x0002e168) cntbar_detail_list_event_pane_g

0x92cb,	// (0x0002769d) cntbar_detail_list_event_pane_t1_ParamLimits

0x92cb,	// (0x0002769d) cntbar_detail_list_event_pane_t1

0x92e0,	// (0x000276b2) cntbar_detail_list_event_pane_t2_ParamLimits

0x92e0,	// (0x000276b2) cntbar_detail_list_event_pane_t2

0x0002,

0xfda3,	// (0x0002e175) cntbar_detail_list_event_pane_t_ParamLimits

0xfda3,	// (0x0002e175) cntbar_detail_list_event_pane_t

0xc751,	// (0x0002ab23) cell_cntbar_detail_list_shct_pane_g1

0xaeb5,	// (0x00029287) navi_pane_mv_g3

0xa3ab,	// (0x0002877d) main_cntbar_detail_pane_ParamLimits

0x9b42,	// (0x00027f14) main_notif_wgt_pane

0x19b3,	// (0x0001fd85) aid_tch_main_mp4_pane_g4

0x1be8,	// (0x0001ffba) popup_slider_window_cp02

0xea51,	// (0x0002ce23) list_recal_day_event_pane

0x9190,	// (0x00027562) cntbar_detail_btn_pane_ParamLimits

0x9190,	// (0x00027562) cntbar_detail_btn_pane

0x91a0,	// (0x00027572) cntbar_detail_btn_pane_cp01_ParamLimits

0x91a0,	// (0x00027572) cntbar_detail_btn_pane_cp01

0x91bc,	// (0x0002758e) cntbar_detail_list_shct_pane_ParamLimits

0x91c8,	// (0x0002759a) cntbar_detail_pane_g1_ParamLimits

0x91c8,	// (0x0002759a) cntbar_detail_pane_g1

0x91d4,	// (0x000275a6) cntbar_detail_pane_t1_ParamLimits

0x91d4,	// (0x000275a6) cntbar_detail_pane_t1

0x926b,	// (0x0002763d) cntbar_detail_list_event_pane_g3_ParamLimits

0x926b,	// (0x0002763d) cntbar_detail_list_event_pane_g3

0x9283,	// (0x00027655) cntbar_detail_list_event_pane_g4_ParamLimits

0x9283,	// (0x00027655) cntbar_detail_list_event_pane_g4

0x929b,	// (0x0002766d) cntbar_detail_list_event_pane_g5_ParamLimits

0x929b,	// (0x0002766d) cntbar_detail_list_event_pane_g5

0x92b3,	// (0x00027685) cntbar_detail_list_event_pane_g6_ParamLimits

0x92b3,	// (0x00027685) cntbar_detail_list_event_pane_g6

0x92f5,	// (0x000276c7) cntbar_detail_list_event_pane_t3_ParamLimits

0x92f5,	// (0x000276c7) cntbar_detail_list_event_pane_t3

0x9307,	// (0x000276d9) popup_notif_wgt_window_ParamLimits

0x9307,	// (0x000276d9) popup_notif_wgt_window

0x9317,	// (0x000276e9) popup_submenu_window_cp01_ParamLimits

0x9317,	// (0x000276e9) popup_submenu_window_cp01

0xaefd,	// (0x000292cf) bg_popup_window_pane_cp10

0xed52,	// (0x0002d124) listscroll_notif_wgt_pane

0xed63,	// (0x0002d135) list_notif_wgt_window

0xed6c,	// (0x0002d13e) scroll_pane_cp033

0x9325,	// (0x000276f7) list_notif_wgt_row_pane_ParamLimits

0x9325,	// (0x000276f7) list_notif_wgt_row_pane

0xed75,	// (0x0002d147) aid_size_list_notif_wgt_del

0xed82,	// (0x0002d154) list_notif_wgt_row_pane_g1

0xed8e,	// (0x0002d160) list_notif_wgt_row_pane_g2

0xed9a,	// (0x0002d16c) list_notif_wgt_row_pane_g3

0x0002,

0x0bfe,	// (0x0001efd0) list_notif_wgt_row_pane_g

0xeda7,	// (0x0002d179) list_notif_wgt_row_pane_t1

0xedbc,	// (0x0002d18e) list_notif_wgt_row_pane_t2

0xedce,	// (0x0002d1a0) list_notif_wgt_row_pane_t3

0x0002,

0x0c05,	// (0x0001efd7) list_notif_wgt_row_pane_t

0xd4a3,	// (0x0002b875) list_recal_day_event_pane_g1

0xede0,	// (0x0002d1b2) list_recal_day_event_pane_t1

0x9b42,	// (0x00027f14) bg_button_pane_cp045

0xedef,	// (0x0002d1c1) cntbar_detail_btn_pane_t1

0xc347,	// (0x0002a719) main_callh_pane_ParamLimits

0xc347,	// (0x0002a719) main_callh_pane

0x9b42,	// (0x00027f14) main_coverflow0_pane

0x9b42,	// (0x00027f14) main_wgtman_pane

0x82db,	// (0x000266ad) main_fs_bigclock_unlock_btn_pane_ParamLimits

0x82db,	// (0x000266ad) main_fs_bigclock_unlock_btn_pane

0x8bb3,	// (0x00026f85) bg_button_pane_cp16

0x8bc3,	// (0x00026f95) cell_tport_appsw_pane_g3

0x9337,	// (0x00027709) cf0_flow_pane_ParamLimits

0x9337,	// (0x00027709) cf0_flow_pane

0xedfd,	// (0x0002d1cf) listscroll_cf0_pane

0xee08,	// (0x0002d1da) main_cf0_pane_g1

0x9346,	// (0x00027718) main_cf0_pane_t1_ParamLimits

0x9346,	// (0x00027718) main_cf0_pane_t1

0x935a,	// (0x0002772c) main_cf0_pane_t2_ParamLimits

0x935a,	// (0x0002772c) main_cf0_pane_t2

0x0001,

0xfdaa,	// (0x0002e17c) main_cf0_pane_t_ParamLimits

0xfdaa,	// (0x0002e17c) main_cf0_pane_t

0xee1a,	// (0x0002d1ec) scroll_pane_cp11

0x936e,	// (0x00027740) cf0_flow_pane_g1

0x9376,	// (0x00027748) cf0_flow_pane_g2

0x0001,

0xfdaf,	// (0x0002e181) cf0_flow_pane_g

0x937e,	// (0x00027750) cf0_flow_pane_t1

0x9b42,	// (0x00027f14) main_call6_pane

0x9b42,	// (0x00027f14) main_calllock_pane

0x938c,	// (0x0002775e) call6_btn_grp_pane_ParamLimits

0x938c,	// (0x0002775e) call6_btn_grp_pane

0x939b,	// (0x0002776d) call6_pane_g1_ParamLimits

0x939b,	// (0x0002776d) call6_pane_g1

0x93aa,	// (0x0002777c) popup_call6_1st_window_ParamLimits

0x93aa,	// (0x0002777c) popup_call6_1st_window

0x93b8,	// (0x0002778a) popup_call6_2nd_window_ParamLimits

0x93b8,	// (0x0002778a) popup_call6_2nd_window

0x93c6,	// (0x00027798) cell_call6_btn_pane_ParamLimits

0x93c6,	// (0x00027798) cell_call6_btn_pane

0xaefd,	// (0x000292cf) bg_popup_call2_in_pane_cp03

0xee25,	// (0x0002d1f7) popup_call6_1st_window_g1

0xee2d,	// (0x0002d1ff) popup_call6_1st_window_g2

0xee35,	// (0x0002d207) popup_call6_1st_window_g3

0x0002,

0x0c1b,	// (0x0001efed) popup_call6_1st_window_g

0xee3d,	// (0x0002d20f) popup_call6_1st_window_t1

0xee4c,	// (0x0002d21e) popup_call6_1st_window_t2

0xee5c,	// (0x0002d22e) popup_call6_1st_window_t3

0x0002,

0x0c22,	// (0x0001eff4) popup_call6_1st_window_t

0xaefd,	// (0x000292cf) bg_popup_call2_in_pane_cp04

0xee25,	// (0x0002d1f7) popup_call6_2nd_window_g1

0xee2d,	// (0x0002d1ff) popup_call6_2nd_window_g2

0xee35,	// (0x0002d207) popup_call6_2nd_window_g3

0x0002,

0x0c1b,	// (0x0001efed) popup_call6_2nd_window_g

0xee3d,	// (0x0002d20f) popup_call6_2nd_window_t1

0x9b42,	// (0x00027f14) bg_button_pane_cp15

0xee6c,	// (0x0002d23e) cell_call6_btn_pane_g1

0xee75,	// (0x0002d247) cell_call6_btn_pane_t1

0x93d5,	// (0x000277a7) listscroll_wgtman_pane_ParamLimits

0x93d5,	// (0x000277a7) listscroll_wgtman_pane

0x93f1,	// (0x000277c3) wgtman_btn_pane_ParamLimits

0x93f1,	// (0x000277c3) wgtman_btn_pane

0xacba,	// (0x0002908c) aid_scroll_copy1

0xee84,	// (0x0002d256) list_wgtman_pane

0x9426,	// (0x000277f8) wgtman_btn_pane_g1_ParamLimits

0x9426,	// (0x000277f8) wgtman_btn_pane_g1

0x944e,	// (0x00027820) wgtman_btn_pane_t1_ParamLimits

0x944e,	// (0x00027820) wgtman_btn_pane_t1

0xee8e,	// (0x0002d260) wgtman_btn_pane_t2_ParamLimits

0xee8e,	// (0x0002d260) wgtman_btn_pane_t2

0x0001,

0xfdb4,	// (0x0002e186) wgtman_btn_pane_t_ParamLimits

0xfdb4,	// (0x0002e186) wgtman_btn_pane_t

0x9485,	// (0x00027857) listrow_wgtman_pane_ParamLimits

0x9485,	// (0x00027857) listrow_wgtman_pane

0x94a1,	// (0x00027873) listrow_wgtman_pane_g1

0x94ae,	// (0x00027880) listrow_wgtman_pane_g2

0x0001,

0xfdb9,	// (0x0002e18b) listrow_wgtman_pane_g

0x94cc,	// (0x0002789e) listrow_wgtman_pane_t1

0x94e4,	// (0x000278b6) listrow_wgtman_pane_t2

0x0001,

0xfdbe,	// (0x0002e190) listrow_wgtman_pane_t

0x950a,	// (0x000278dc) wait_bar_pane_cp09

0xeea5,	// (0x0002d277) main_calllock_btn_pane

0xeeaf,	// (0x0002d281) main_calllock_pane_g1

0x9b42,	// (0x00027f14) bg_button_pane_cp17

0xeeba,	// (0x0002d28c) main_calllock_btn_pane_g1

0xeec3,	// (0x0002d295) main_calllock_btn_pane_t1

0x9b42,	// (0x00027f14) main_dialer3_pane

0x9b42,	// (0x00027f14) main_fmrd2_pane

0xc751,	// (0x0002ab23) main_fs_bigclock_unlock_btn_pane_g1

0xeeda,	// (0x0002d2ac) main_fs_bigclock_unlock_btn_pane_t1

0x951c,	// (0x000278ee) area_fmrd2_info_pane_ParamLimits

0x951c,	// (0x000278ee) area_fmrd2_info_pane

0x952a,	// (0x000278fc) area_fmrd2_visual_pane_ParamLimits

0x952a,	// (0x000278fc) area_fmrd2_visual_pane

0x9538,	// (0x0002790a) fmrd2_indi_pane_ParamLimits

0x9538,	// (0x0002790a) fmrd2_indi_pane

0x9545,	// (0x00027917) area_fmrd2_visual_pane_g1

0x954d,	// (0x0002791f) area_fmrd2_visual_pane_t1

0x955d,	// (0x0002792f) area_fmrd2_visual_pane_t2

0x956d,	// (0x0002793f) area_fmrd2_visual_pane_t3

0x0002,

0xfdc8,	// (0x0002e19a) area_fmrd2_visual_pane_t

0x957d,	// (0x0002794f) area_fmrd2_info_pane_g1

0x9585,	// (0x00027957) area_fmrd2_info_pane_t1

0x9595,	// (0x00027967) area_fmrd2_info_pane_t2

0x95a5,	// (0x00027977) area_fmrd2_info_pane_t3

0x95b5,	// (0x00027987) area_fmrd2_info_pane_t4

0x0003,

0xfdcf,	// (0x0002e1a1) area_fmrd2_info_pane_t

0x95c3,	// (0x00027995) fmrd2_indi_pane_t1

0x95d3,	// (0x000279a5) fmrd2_indi_pane_t2

0x95e3,	// (0x000279b5) fmrd2_indi_pane_t3

0x0002,

0xfdd8,	// (0x0002e1aa) fmrd2_indi_pane_t

0xe0bd,	// (0x0002c48f) list_single_fs_bigclock_indicator_pane_g5_ParamLimits

0xe0bd,	// (0x0002c48f) list_single_fs_bigclock_indicator_pane_g5

0xe164,	// (0x0002c536) list_single_fs_bigclock_indicator_pane_t5_ParamLimits

0xe164,	// (0x0002c536) list_single_fs_bigclock_indicator_pane_t5

0x8dd1,	// (0x000271a3) aid_cell_bcale_month_pane_ParamLimits

0x8dd1,	// (0x000271a3) aid_cell_bcale_month_pane

0x8def,	// (0x000271c1) bcale_month_pane_ParamLimits

0x8def,	// (0x000271c1) bcale_month_pane

0x8e0d,	// (0x000271df) bcale_preview_pane_ParamLimits

0x8e0d,	// (0x000271df) bcale_preview_pane

0xec55,	// (0x0002d027) list_single_fs_bigclock_pane_t1_ParamLimits

0xec74,	// (0x0002d046) list_single_fs_bigclock_pane_t2_ParamLimits

0xec74,	// (0x0002d046) list_single_fs_bigclock_pane_t2

0x0001,

0x0bcf,	// (0x0001efa1) list_single_fs_bigclock_pane_t_ParamLimits

0x0bcf,	// (0x0001efa1) list_single_fs_bigclock_pane_t

0xeed2,	// (0x0002d2a4) main_fs_bigclock_unlock_btn_pane_g2

0x0001,

0xfdc3,	// (0x0002e195) main_fs_bigclock_unlock_btn_pane_g

0x95f1,	// (0x000279c3) aid_dia3_key_size_ParamLimits

0x95f1,	// (0x000279c3) aid_dia3_key_size

0x95fd,	// (0x000279cf) aid_dia3_listrow_size_ParamLimits

0x95fd,	// (0x000279cf) aid_dia3_listrow_size

0x960d,	// (0x000279df) dia3_keypad_fun_pane_ParamLimits

0x960d,	// (0x000279df) dia3_keypad_fun_pane

0x961f,	// (0x000279f1) dia3_keypad_num_pane_ParamLimits

0x961f,	// (0x000279f1) dia3_keypad_num_pane

0x9631,	// (0x00027a03) dia3_listscroll_pane_ParamLimits

0x9631,	// (0x00027a03) dia3_listscroll_pane

0x963f,	// (0x00027a11) dia3_numentry_pane_ParamLimits

0x963f,	// (0x00027a11) dia3_numentry_pane

0xeee8,	// (0x0002d2ba) dia3_list_pane

0xeef3,	// (0x0002d2c5) scroll_pane_cp12

0x9b42,	// (0x00027f14) bg_dia3_numentry_pane

0x964d,	// (0x00027a1f) dia3_numentry_pane_t1

0x965c,	// (0x00027a2e) cell_dia3_key_num_pane

0x9664,	// (0x00027a36) cell_dia3_key0_fun_pane_ParamLimits

0x9664,	// (0x00027a36) cell_dia3_key0_fun_pane

0x9671,	// (0x00027a43) cell_dia3_key1_fun_pane_ParamLimits

0x9671,	// (0x00027a43) cell_dia3_key1_fun_pane

0x967e,	// (0x00027a50) dia3_listrow_pane

0xddcc,	// (0x0002c19e) bg_dia3_numentry_pane_g1

0x9b42,	// (0x00027f14) bg_button_pane_cp21

0xeefe,	// (0x0002d2d0) cell_dia3_key_num_pane_t1

0xef0c,	// (0x0002d2de) cell_dia3_key_num_pane_t2

0xef1b,	// (0x0002d2ed) cell_dia3_key_num_pane_t3

0xef2a,	// (0x0002d2fc) cell_dia3_key_num_pane_t4

0x0003,

0x0c54,	// (0x0001f026) cell_dia3_key_num_pane_t

0x9b42,	// (0x00027f14) bg_button_pane_cp19

0x968b,	// (0x00027a5d) cell_dia3_key0_fun_pane_g1

0x9b42,	// (0x00027f14) bg_button_pane_cp20

0x9693,	// (0x00027a65) cell_dia3_key1_fun_pane_g1

0x969b,	// (0x00027a6d) area_left_week_number_pane

0x96ae,	// (0x00027a80) area_top_day_name_pane

0x96bc,	// (0x00027a8e) frame_month_view_pane

0xef39,	// (0x0002d30b) grid_month_view_pane

0x96d1,	// (0x00027aa3) cell_top_day_name_pane_ParamLimits

0x96d1,	// (0x00027aa3) cell_top_day_name_pane

0x96eb,	// (0x00027abd) cell_area_left_week_number_pane_ParamLimits

0x96eb,	// (0x00027abd) cell_area_left_week_number_pane

0x970e,	// (0x00027ae0) cell_month_view_pane_ParamLimits

0x970e,	// (0x00027ae0) cell_month_view_pane

0xef47,	// (0x0002d319) frm_month_g1

0x973a,	// (0x00027b0c) frm_month_g2

0x974b,	// (0x00027b1d) frm_month_g3

0x975c,	// (0x00027b2e) frm_month_g4

0x976d,	// (0x00027b3f) frm_month_g5

0x9780,	// (0x00027b52) frm_month_g6

0x9793,	// (0x00027b65) frm_month_g7

0xef54,	// (0x0002d326) frm_month_g8

0x97a6,	// (0x00027b78) frm_month_g9

0x97b3,	// (0x00027b85) frm_month_g10

0x97c0,	// (0x00027b92) frm_month_g11

0x97cd,	// (0x00027b9f) frm_month_g12

0x97da,	// (0x00027bac) frm_month_g13

0x97e7,	// (0x00027bb9) frm_month_g14

0x97f6,	// (0x00027bc8) frm_month_g15

0x9805,	// (0x00027bd7) frm_month_g16

0x000f,

0xfddf,	// (0x0002e1b1) frm_month_g

0xef61,	// (0x0002d333) cell_top_day_name_pane_t1

0x9814,	// (0x00027be6) cell_area_left_week_number_pane_g1

0x9823,	// (0x00027bf5) cell_area_left_week_number_pane_t1

0xc9b1,	// (0x0002ad83) cell_month_view_pane_g1

0x9839,	// (0x00027c0b) cell_month_view_pane_t1

0x9b42,	// (0x00027f14) main_fps_pane

0xe396,	// (0x0002c768) cmail_ddmenu_btn02_pane_cp1_ParamLimits

0xe396,	// (0x0002c768) cmail_ddmenu_btn02_pane_cp1

0xe3b2,	// (0x0002c784) cmail_ddmenu_btn02_pane_cp2_ParamLimits

0xe3b2,	// (0x0002c784) cmail_ddmenu_btn02_pane_cp2

0x9055,	// (0x00027427) cmail_ddmenu_btn02_pane_g2_ParamLimits

0x9055,	// (0x00027427) cmail_ddmenu_btn02_pane_g2

0x0001,

0xfd49,	// (0x0002e11b) cmail_ddmenu_btn02_pane_g_ParamLimits

0xfd49,	// (0x0002e11b) cmail_ddmenu_btn02_pane_g

0x9073,	// (0x00027445) cmail_ddmenu_btn02_pane_t2_ParamLimits

0x9073,	// (0x00027445) cmail_ddmenu_btn02_pane_t2

0x0001,

0xfd4e,	// (0x0002e120) cmail_ddmenu_btn02_pane_t_ParamLimits

0xfd4e,	// (0x0002e120) cmail_ddmenu_btn02_pane_t

0x984f,	// (0x00027c21) fps_text_pane_ParamLimits

0x984f,	// (0x00027c21) fps_text_pane

0x985c,	// (0x00027c2e) main_fps_pane_g1_ParamLimits

0x985c,	// (0x00027c2e) main_fps_pane_g1

0x986a,	// (0x00027c3c) wait_bar_pane_cp010_ParamLimits

0x986a,	// (0x00027c3c) wait_bar_pane_cp010

0x9876,	// (0x00027c48) fps_text_pane_t1_ParamLimits

0x9876,	// (0x00027c48) fps_text_pane_t1

0x69c9,	// (0x00024d9b) cam4_image_uncrop_pane_g1

0x69d2,	// (0x00024da4) cam4_image_uncrop_pane_g2

0x69db,	// (0x00024dad) cam4_image_uncrop_pane_g3

0x69e4,	// (0x00024db6) cam4_image_uncrop_pane_g4

0x0003,

0xf8ee,	// (0x0002dcc0) cam4_image_uncrop_pane_g

0x967e,	// (0x00027a50) dia3_listrow_pane_ParamLimits

0x9b42,	// (0x00027f14) main_phob2_pane

0x8b95,	// (0x00026f67) cell_tport_appsw_pane_cp02_ParamLimits

0x8b95,	// (0x00026f67) cell_tport_appsw_pane_cp02

0x8ba4,	// (0x00026f76) cell_tport_appsw_pane_cp03_ParamLimits

0x8ba4,	// (0x00026f76) cell_tport_appsw_pane_cp03

0x9b42,	// (0x00027f14) phob2_contact_card_pane

0x9b42,	// (0x00027f14) phob2_listscroll_pane

0xef74,	// (0x0002d346) phob2_list_pane

0xef7c,	// (0x0002d34e) scroll_pane_cp034

0x988f,	// (0x00027c61) phob2_cc_data_pane_ParamLimits

0x988f,	// (0x00027c61) phob2_cc_data_pane

0x98a9,	// (0x00027c7b) phob2_cc_listscroll_pane_ParamLimits

0x98a9,	// (0x00027c7b) phob2_cc_listscroll_pane

0x98c3,	// (0x00027c95) list_double_large_graphic_phob2_pane_ParamLimits

0x98c3,	// (0x00027c95) list_double_large_graphic_phob2_pane

0x98e5,	// (0x00027cb7) list_double_large_graphic_phob2_pane_g1_ParamLimits

0x98e5,	// (0x00027cb7) list_double_large_graphic_phob2_pane_g1

0x98fb,	// (0x00027ccd) list_double_large_graphic_phob2_pane_g2_ParamLimits

0x98fb,	// (0x00027ccd) list_double_large_graphic_phob2_pane_g2

0x0001,

0xfe00,	// (0x0002e1d2) list_double_large_graphic_phob2_pane_g_ParamLimits

0xfe00,	// (0x0002e1d2) list_double_large_graphic_phob2_pane_g

0x9907,	// (0x00027cd9) list_double_large_graphic_phob2_pane_t1_ParamLimits

0x9907,	// (0x00027cd9) list_double_large_graphic_phob2_pane_t1

0x991d,	// (0x00027cef) list_double_large_graphic_phob2_pane_t2_ParamLimits

0x991d,	// (0x00027cef) list_double_large_graphic_phob2_pane_t2

0x0001,

0xfe05,	// (0x0002e1d7) list_double_large_graphic_phob2_pane_t_ParamLimits

0xfe05,	// (0x0002e1d7) list_double_large_graphic_phob2_pane_t

0x9b42,	// (0x00027f14) list_highlight_pane_cp024

0x9932,	// (0x00027d04) phob2_cc_button_pane

0x993a,	// (0x00027d0c) phob2_cc_data_pane_g1_ParamLimits

0x993a,	// (0x00027d0c) phob2_cc_data_pane_g1

0x9946,	// (0x00027d18) phob2_cc_data_pane_g2_ParamLimits

0x9946,	// (0x00027d18) phob2_cc_data_pane_g2

0x0001,

0xfe0a,	// (0x0002e1dc) phob2_cc_data_pane_g_ParamLimits

0xfe0a,	// (0x0002e1dc) phob2_cc_data_pane_g

0x9952,	// (0x00027d24) phob2_cc_data_pane_t1_ParamLimits

0x9952,	// (0x00027d24) phob2_cc_data_pane_t1

0x9964,	// (0x00027d36) phob2_cc_data_pane_t2_ParamLimits

0x9964,	// (0x00027d36) phob2_cc_data_pane_t2

0x9976,	// (0x00027d48) phob2_cc_data_pane_t3_ParamLimits

0x9976,	// (0x00027d48) phob2_cc_data_pane_t3

0x0002,

0xfe0f,	// (0x0002e1e1) phob2_cc_data_pane_t_ParamLimits

0xfe0f,	// (0x0002e1e1) phob2_cc_data_pane_t

0xef84,	// (0x0002d356) phob2_cc_list_pane_ParamLimits

0xef84,	// (0x0002d356) phob2_cc_list_pane

0xd6ad,	// (0x0002ba7f) scroll_pane_cp035_ParamLimits

0xd6ad,	// (0x0002ba7f) scroll_pane_cp035

0xa3ab,	// (0x0002877d) bg_button_pane_cp033

0xef90,	// (0x0002d362) phob2_cc_button_pane_g1

0xef9c,	// (0x0002d36e) phob2_cc_button_pane_t1

0xefb1,	// (0x0002d383) phob2_cc_button_pane_t2

0x0001,

0x0c94,	// (0x0001f066) phob2_cc_button_pane_t

0x9988,	// (0x00027d5a) list_double_large_graphic_phob2_cc_pane_ParamLimits

0x9988,	// (0x00027d5a) list_double_large_graphic_phob2_cc_pane

0x99b7,	// (0x00027d89) list_double_large_graphic_phob2_cc_pane_g1_ParamLimits

0x99b7,	// (0x00027d89) list_double_large_graphic_phob2_cc_pane_g1

0x99c8,	// (0x00027d9a) list_double_large_graphic_phob2_cc_pane_g2_ParamLimits

0x99c8,	// (0x00027d9a) list_double_large_graphic_phob2_cc_pane_g2

0x99d7,	// (0x00027da9) list_double_large_graphic_phob2_cc_pane_g3_ParamLimits

0x99d7,	// (0x00027da9) list_double_large_graphic_phob2_cc_pane_g3

0x99e6,	// (0x00027db8) list_double_large_graphic_phob2_cc_pane_g4_ParamLimits

0x99e6,	// (0x00027db8) list_double_large_graphic_phob2_cc_pane_g4

0x99f7,	// (0x00027dc9) list_double_large_graphic_phob2_cc_pane_g5_ParamLimits

0x99f7,	// (0x00027dc9) list_double_large_graphic_phob2_cc_pane_g5

0x0004,

0xfe16,	// (0x0002e1e8) list_double_large_graphic_phob2_cc_pane_g_ParamLimits

0xfe16,	// (0x0002e1e8) list_double_large_graphic_phob2_cc_pane_g

0x9a06,	// (0x00027dd8) list_double_large_graphic_phob2_cc_pane_t1_ParamLimits

0x9a06,	// (0x00027dd8) list_double_large_graphic_phob2_cc_pane_t1

0x9a2f,	// (0x00027e01) list_double_large_graphic_phob2_cc_pane_t2_ParamLimits

0x9a2f,	// (0x00027e01) list_double_large_graphic_phob2_cc_pane_t2

0x0001,

0xfe21,	// (0x0002e1f3) list_double_large_graphic_phob2_cc_pane_t_ParamLimits

0xfe21,	// (0x0002e1f3) list_double_large_graphic_phob2_cc_pane_t

0xefc3,	// (0x0002d395) list_highlight_pane_cp025_ParamLimits

0xefc3,	// (0x0002d395) list_highlight_pane_cp025

0xa3ab,	// (0x0002877d) bg_button_pane_cp033_ParamLimits

0xef90,	// (0x0002d362) phob2_cc_button_pane_g1_ParamLimits

0xef9c,	// (0x0002d36e) phob2_cc_button_pane_t1_ParamLimits

0xefb1,	// (0x0002d383) phob2_cc_button_pane_t2_ParamLimits

0x0c94,	// (0x0001f066) phob2_cc_button_pane_t_ParamLimits

0x25dc,	// (0x000209ae) popup_wgtman_window

0xd361,	// (0x0002b733) scroll_pane_cp038

0x940e,	// (0x000277e0) wgtman_btn_pane_cp_01_ParamLimits

0x940e,	// (0x000277e0) wgtman_btn_pane_cp_01

0xefd1,	// (0x0002d3a3) wgtman_content_pane

0xefda,	// (0x0002d3ac) wgtman_heading_pane

0x9b42,	// (0x00027f14) bg_heading_pane_cp02

0xefe3,	// (0x0002d3b5) wgtman_heading_pane_g1

0xefeb,	// (0x0002d3bd) wgtman_heading_pane_t1

0xeff9,	// (0x0002d3cb) scroll_pane_cp036

0xf001,	// (0x0002d3d3) wgtman_list_pane

0xf009,	// (0x0002d3db) wgtman_list_pane_t1_ParamLimits

0xf009,	// (0x0002d3db) wgtman_list_pane_t1

0x1dce,	// (0x000201a0) cam4_grid_pane

0x71e0,	// (0x000255b2) bg_button_pane_cp015_ParamLimits

0x71f2,	// (0x000255c4) bg_button_pane_cp016_ParamLimits

0x7205,	// (0x000255d7) bg_button_pane_cp017_ParamLimits

0x725b,	// (0x0002562d) popup_vitu2_query_window_g3_ParamLimits

0x725b,	// (0x0002562d) popup_vitu2_query_window_g3

0x7316,	// (0x000256e8) popup_vitu2_query_window_t6_ParamLimits

0x7316,	// (0x000256e8) popup_vitu2_query_window_t6

0x7341,	// (0x00025713) popup_vitu2_query_window_t7_ParamLimits

0x7341,	// (0x00025713) popup_vitu2_query_window_t7

0xeb77,	// (0x0002cf49) cam4_grid_pane_g1

0xeb80,	// (0x0002cf52) cam4_grid_pane_g2

0xf025,	// (0x0002d3f7) cam4_grid_pane_g3

0xf02e,	// (0x0002d400) cam4_grid_pane_g4

0x0003,

0xfe26,	// (0x0002e1f8) cam4_grid_pane_g

0x31d5,	// (0x000215a7) aid_placing_vt_slider_lsc_ParamLimits

0x3515,	// (0x000218e7) vidtel_button_pane_ParamLimits

0x3515,	// (0x000218e7) vidtel_button_pane

0xf039,	// (0x0002d40b) bg_button_pane_cp034

0x9a58,	// (0x00027e2a) vidtel_button_pane_g1

0xf043,	// (0x0002d415) vidtel_button_pane_t1

0xd481,	// (0x0002b853) aid_size_vtel_slider_touch

0xd6ad,	// (0x0002ba7f) scroll_pane_cp039

0xde0a,	// (0x0002c1dc) ncim_query_button_pane_cp01_ParamLimits

0xde29,	// (0x0002c1fb) ncimui_query_pane_g1_ParamLimits

0xa3ab,	// (0x0002877d) input_focus_pane_cp012_ParamLimits

0xde4e,	// (0x0002c220) ncim_query_entry_pane_t1_ParamLimits

0xd6ad,	// (0x0002ba7f) scroll_pane_cp039_ParamLimits

0xada0,	// (0x00029172) navi_pane_bcale_mc_g1

0xada8,	// (0x0002917a) navi_pane_bcale_mc_t1

0xe3fb,	// (0x0002c7cd) main_sp_fs_email_pane_g1

0xe407,	// (0x0002c7d9) main_sp_fs_email_pane_g2

0x0001,

0x0a3f,	// (0x0001ee11) main_sp_fs_email_pane_g

0xe853,	// (0x0002cc25) list_single_cale_mrui_row_pane_g3_ParamLimits

0xe853,	// (0x0002cc25) list_single_cale_mrui_row_pane_g3

0x909b,	// (0x0002746d) list_single_recal_day_pane_g5_event_pane

0xeaca,	// (0x0002ce9c) list_single_recal_day_pane_g7

0xf051,	// (0x0002d423) list_recal_day_event_pane_cp01

0xf05a,	// (0x0002d42c) list_recal_vselct_arw_lo_pane_cp01

0xf062,	// (0x0002d434) list_recal_vselct_arw_up_pane_cp01

0xf06a,	// (0x0002d43c) list_recal_vselct_pane_cp01

0xd4a3,	// (0x0002b875) list_recal_day_event_pane_cp01_g1

0xf074,	// (0x0002d446) list_recal_day_event_pane_cp01_t1

0xead2,	// (0x0002cea4) list_single_recal_day_pane_t1_ParamLimits

0xeae4,	// (0x0002ceb6) list_single_recal_day_pane_t2_ParamLimits

0xfd5e,	// (0x0002e130) list_single_recal_day_pane_t_ParamLimits

0xa1ba,	// (0x0002858c) bg_notes_pane_ParamLimits

0xa27c,	// (0x0002864e) list_notes_pane_ParamLimits

0x2850,	// (0x00020c22) scroll_pane_cp06_ParamLimits

0xa29e,	// (0x00028670) main_notes_pane_ParamLimits

0x9b42,	// (0x00027f14) main_welc_pane

0x9a60,	// (0x00027e32) main_welc_body_pane_ParamLimits

0x9a60,	// (0x00027e32) main_welc_body_pane

0x9a79,	// (0x00027e4b) main_welc_opti_pane_ParamLimits

0x9a79,	// (0x00027e4b) main_welc_opti_pane

0x9aae,	// (0x00027e80) main_welc_pane_t1_ParamLimits

0x9aae,	// (0x00027e80) main_welc_pane_t1

0x9acc,	// (0x00027e9e) main_welc_body_row_pane_ParamLimits

0x9acc,	// (0x00027e9e) main_welc_body_row_pane

0xd1bd,	// (0x0002b58f) main_welc_opti_row_pane_ParamLimits

0xd1bd,	// (0x0002b58f) main_welc_opti_row_pane

0xf082,	// (0x0002d454) main_welc_opti_row_pane_g1

0xf08a,	// (0x0002d45c) main_welc_opti_row_pane_t1

0xf09a,	// (0x0002d46c) main_welc_body_row_pane_t1

0xed5b,	// (0x0002d12d) popup_notif_wgt_heading_pane

0xed75,	// (0x0002d147) aid_size_list_notif_wgt_del_ParamLimits

0xed82,	// (0x0002d154) list_notif_wgt_row_pane_g1_ParamLimits

0xed8e,	// (0x0002d160) list_notif_wgt_row_pane_g2_ParamLimits

0xed9a,	// (0x0002d16c) list_notif_wgt_row_pane_g3_ParamLimits

0x0bfe,	// (0x0001efd0) list_notif_wgt_row_pane_g_ParamLimits

0xeda7,	// (0x0002d179) list_notif_wgt_row_pane_t1_ParamLimits

0xedbc,	// (0x0002d18e) list_notif_wgt_row_pane_t2_ParamLimits

0xedce,	// (0x0002d1a0) list_notif_wgt_row_pane_t3_ParamLimits

0x0c05,	// (0x0001efd7) list_notif_wgt_row_pane_t_ParamLimits

0x94a1,	// (0x00027873) listrow_wgtman_pane_g1_ParamLimits

0x94ae,	// (0x00027880) listrow_wgtman_pane_g2_ParamLimits

0xfdb9,	// (0x0002e18b) listrow_wgtman_pane_g_ParamLimits

0x94cc,	// (0x0002789e) listrow_wgtman_pane_t1_ParamLimits

0x94e4,	// (0x000278b6) listrow_wgtman_pane_t2_ParamLimits

0xfdbe,	// (0x0002e190) listrow_wgtman_pane_t_ParamLimits

0x950a,	// (0x000278dc) wait_bar_pane_cp09_ParamLimits

0x9b42,	// (0x00027f14) bg_popup_heading_pane_cp02

0xf0a9,	// (0x0002d47b) popup_notif_wgt_heading_pane_g1

0xf0b1,	// (0x0002d483) popup_notif_wgt_heading_pane_t1

0x9b42,	// (0x00027f14) main_vids_pane

0x9b42,	// (0x00027f14) vids_listscroll_pane

0x9af8,	// (0x00027eca) scroll_pane_cp040

0x9b42,	// (0x00027f14) vids_list_pane

0x9b03,	// (0x00027ed5) vids_list_double_pane_ParamLimits

0x9b03,	// (0x00027ed5) vids_list_double_pane

0x9b1b,	// (0x00027eed) vids_list_double_pane_g1

0x9b24,	// (0x00027ef6) vids_list_double_pane_t1

0x9b34,	// (0x00027f06) vids_list_double_pane_t2

0x0001,

0xfe34,	// (0x0002e206) vids_list_double_pane_t

0x1420,	// (0x0001f7f2) main_ncimui_pane_ParamLimits

0x7e9b,	// (0x0002626d) main_ncimui_pane_g1_ParamLimits

0x7ea7,	// (0x00026279) main_ncimui_pane_g2_ParamLimits

0x7ea7,	// (0x00026279) main_ncimui_pane_g2

0x0001,

0xfbc8,	// (0x0002df9a) main_ncimui_pane_g_ParamLimits

0xfbc8,	// (0x0002df9a) main_ncimui_pane_g

0x9a94,	// (0x00027e66) main_welc_pane_g1_ParamLimits

0x9a94,	// (0x00027e66) main_welc_pane_g1

0x9aa0,	// (0x00027e72) main_welc_pane_g2_ParamLimits

0x9aa0,	// (0x00027e72) main_welc_pane_g2

0x0001,

0xfe2f,	// (0x0002e201) main_welc_pane_g_ParamLimits

0xfe2f,	// (0x0002e201) main_welc_pane_g

0xa1ba,	// (0x0002858c) listscroll_mce_pane_ParamLimits

0xaef5,	// (0x000292c7) wait_bar_pane_cp10

0xc33b,	// (0x0002a70d) main_cale_day_pane_ParamLimits

0xc33b,	// (0x0002a70d) main_cale_week_pane_ParamLimits

0xa1ba,	// (0x0002858c) main_messa_pane_ParamLimits

0x6345,	// (0x00024717) main_clock2_btn_pane_ParamLimits

0x6345,	// (0x00024717) main_clock2_btn_pane

0xcbad,	// (0x0002af7f) main_clock2_btn_pane_cp01_ParamLimits

0xcbad,	// (0x0002af7f) main_clock2_btn_pane_cp01

0xe7df,	// (0x0002cbb1) list_cale_mrui_pane_ParamLimits

0xee12,	// (0x0002d1e4) main_cf0_pane_g2

0x0001,

0x0c0c,	// (0x0001efde) main_cf0_pane_g

0x969b,	// (0x00027a6d) area_left_week_number_pane_ParamLimits

0x96ae,	// (0x00027a80) area_top_day_name_pane_ParamLimits

0x96bc,	// (0x00027a8e) frame_month_view_pane_ParamLimits

0xef39,	// (0x0002d30b) grid_month_view_pane_ParamLimits

0xef47,	// (0x0002d319) frm_month_g1_ParamLimits

0x973a,	// (0x00027b0c) frm_month_g2_ParamLimits

0x974b,	// (0x00027b1d) frm_month_g3_ParamLimits

0x975c,	// (0x00027b2e) frm_month_g4_ParamLimits

0x976d,	// (0x00027b3f) frm_month_g5_ParamLimits

0x9780,	// (0x00027b52) frm_month_g6_ParamLimits

0x9793,	// (0x00027b65) frm_month_g7_ParamLimits

0xef54,	// (0x0002d326) frm_month_g8_ParamLimits

0x97a6,	// (0x00027b78) frm_month_g9_ParamLimits

0x97b3,	// (0x00027b85) frm_month_g10_ParamLimits

0x97c0,	// (0x00027b92) frm_month_g11_ParamLimits

0x97cd,	// (0x00027b9f) frm_month_g12_ParamLimits

0x97da,	// (0x00027bac) frm_month_g13_ParamLimits

0x97e7,	// (0x00027bb9) frm_month_g14_ParamLimits

0x97f6,	// (0x00027bc8) frm_month_g15_ParamLimits

0x9805,	// (0x00027bd7) frm_month_g16_ParamLimits

0xfddf,	// (0x0002e1b1) frm_month_g_ParamLimits

0xef61,	// (0x0002d333) cell_top_day_name_pane_t1_ParamLimits

0x9814,	// (0x00027be6) cell_area_left_week_number_pane_g1_ParamLimits

0x9823,	// (0x00027bf5) cell_area_left_week_number_pane_t1_ParamLimits

0xc9b1,	// (0x0002ad83) cell_month_view_pane_g1_ParamLimits

0x9839,	// (0x00027c0b) cell_month_view_pane_t1_ParamLimits

0xa1b2,	// (0x00028584) main_clock2_btn_pane_g1

0xf0bf,	// (0x0002d491) main_clock2_btn_pane_t1

0xa3ab,	// (0x0002877d) listscroll_cmail_pane_ParamLimits

0xe3fb,	// (0x0002c7cd) main_sp_fs_email_pane_g1_ParamLimits

0xe407,	// (0x0002c7d9) main_sp_fs_email_pane_g2_ParamLimits

0x0a3f,	// (0x0001ee11) main_sp_fs_email_pane_g_ParamLimits

0xea32,	// (0x0002ce04) list_recal_day_pane_ParamLimits

0xea43,	// (0x0002ce15) mian_recal_day_pane_t1

0x886c,	// (0x00026c3e) list_single_dyc_row_text_pane_t4_ParamLimits

0x886c,	// (0x00026c3e) list_single_dyc_row_text_pane_t4

0x88a3,	// (0x00026c75) list_single_dyc_row_text_pane_t5_ParamLimits

0x88a3,	// (0x00026c75) list_single_dyc_row_text_pane_t5

0xe4cb,	// (0x0002c89d) list_single_dyc_row_text_pane_t6_ParamLimits

0xe4cb,	// (0x0002c89d) list_single_dyc_row_text_pane_t6

0xa876,	// (0x00028c48) aid_mgn_list_cale_time_pane

0x1420,	// (0x0001f7f2) main_gallery2_pane_ParamLimits
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

} // end of namespace AknLayoutScalable_Abrw_pnp4_apps_nhd4_prt_tch_Normal
