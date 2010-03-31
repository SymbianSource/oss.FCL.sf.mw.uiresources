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

#include "aknlayoutscalable_abrw_pnl4_apps_nhd4_lsc_tch_normal.h"
#include "AknLayout2ScalableDecode.h"
namespace AknLayoutScalable_Apps { extern const TUint8 KByteCodedData_AknLayoutScalable_Elaf_pnp4_apps_nhd4_prt_tch[]; }

namespace AknLayoutScalable_Abrw_pnl4_apps_nhd4_lsc_tch_Normal
{

extern const TUint16 KDataLookup[AknLayoutScalable_Apps::E_TApiId_TableSize];
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Apps::KByteCodedData_AknLayoutScalable_Elaf_pnp4_apps_nhd4_prt_tch + 0x0002e17b };

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
0x180a,	// (0x0002f985) Screen

0x1816,	// (0x0002f991) application_window

0x1846,	// (0x0002f9c1) area_bottom_pane_ParamLimits

0x1846,	// (0x0002f9c1) area_bottom_pane

0x00c0,	// (0x0002e23b) area_top_pane_ParamLimits

0x00c0,	// (0x0002e23b) area_top_pane

0x18a3,	// (0x0002fa1e) call_video_uplink_pane_ParamLimits

0x18a3,	// (0x0002fa1e) call_video_uplink_pane

0x014e,	// (0x0002e2c9) main_pane_ParamLimits

0x014e,	// (0x0002e2c9) main_pane

0xc355,	// (0x0003a4d0) context_pane

0x4a41,	// (0x00032bbc) navi_pane

0x4a73,	// (0x00032bee) popup_cale_events_window_ParamLimits

0x4a73,	// (0x00032bee) popup_cale_events_window

0xc368,	// (0x0003a4e3) popup_mup_playback_window

0x4a8b,	// (0x00032c06) signal_pane

0xa290,	// (0x0003840b) main_browser_pane

0xaeef,	// (0x0003906a) main_burst_pane

0x05ae,	// (0x0002e729) main_calc_pane

0xc33b,	// (0x0003a4b6) main_cale_day_pane

0x05c2,	// (0x0002e73d) main_cale_month_pane

0xc33b,	// (0x0003a4b6) main_cale_week_pane

0xaeef,	// (0x0003906a) main_call_pane

0x9f51,	// (0x000380cc) main_call_poc_pane

0xaeef,	// (0x0003906a) main_camera_pane

0xaeef,	// (0x0003906a) main_chi_dic_pane

0xac7a,	// (0x00038df5) main_clock_pane

0x9f51,	// (0x000380cc) main_fmradio_pane

0xaeef,	// (0x0003906a) main_graph_messa_pane

0x9f51,	// (0x000380cc) main_help_pane

0xa290,	// (0x0003840b) main_im_pane

0xa1ac,	// (0x00038327) main_image_pane_ParamLimits

0xa1ac,	// (0x00038327) main_image_pane

0x9f51,	// (0x000380cc) main_location2_pane

0xaeef,	// (0x0003906a) main_location_pane

0xa1ac,	// (0x00038327) main_messa_pane

0x9f51,	// (0x000380cc) main_mp2_pane

0xaeef,	// (0x0003906a) main_mp_pane

0x9f51,	// (0x000380cc) main_msg_pane

0x9f51,	// (0x000380cc) main_mup_eq_pane

0x9f51,	// (0x000380cc) main_mup_pane

0xa290,	// (0x0003840b) main_notes_pane

0x9f51,	// (0x000380cc) main_pec_pane

0x9f51,	// (0x000380cc) main_phob_pane

0x9f51,	// (0x000380cc) main_pinb_pane

0x9f51,	// (0x000380cc) main_postcard_pane

0x9f51,	// (0x000380cc) main_qdial_pane

0xaeef,	// (0x0003906a) main_skin_pane

0x9f51,	// (0x000380cc) main_smil2_pane

0xaeef,	// (0x0003906a) main_smil_pane

0xaeef,	// (0x0003906a) main_video_pane

0xaeef,	// (0x0003906a) main_video_tele_pane

0xa1ac,	// (0x00038327) main_viewer_pane_ParamLimits

0xa1ac,	// (0x00038327) main_viewer_pane

0xaeef,	// (0x0003906a) main_vorec_pane

0x0614,	// (0x0002e78f) popup_blid_sat_info_window_ParamLimits

0x0614,	// (0x0002e78f) popup_blid_sat_info_window

0x066c,	// (0x0002e7e7) popup_dyc_status_message_window_ParamLimits

0x066c,	// (0x0002e7e7) popup_dyc_status_message_window

0x0684,	// (0x0002e7ff) popup_grid_large_graphic_window_ParamLimits

0x0684,	// (0x0002e7ff) popup_grid_large_graphic_window

0x073a,	// (0x0002e8b5) popup_loc_request_window_ParamLimits

0x073a,	// (0x0002e8b5) popup_loc_request_window

0x0828,	// (0x0002e9a3) popup_wml_address_window_ParamLimits

0x0828,	// (0x0002e9a3) popup_wml_address_window

0x4831,	// (0x000329ac) call_muted_g1

0x44e4,	// (0x0003265f) popup_call_audio_conf_window_ParamLimits

0x44e4,	// (0x0003265f) popup_call_audio_conf_window

0x4845,	// (0x000329c0) popup_call_audio_first_window_ParamLimits

0x4845,	// (0x000329c0) popup_call_audio_first_window

0x48bb,	// (0x00032a36) popup_call_audio_in_window_ParamLimits

0x48bb,	// (0x00032a36) popup_call_audio_in_window

0x48f7,	// (0x00032a72) popup_call_audio_out_window_ParamLimits

0x48f7,	// (0x00032a72) popup_call_audio_out_window

0x4931,	// (0x00032aac) popup_call_audio_second_window_ParamLimits

0x4931,	// (0x00032aac) popup_call_audio_second_window

0x4987,	// (0x00032b02) popup_call_audio_wait_window_ParamLimits

0x4987,	// (0x00032b02) popup_call_audio_wait_window

0x49bc,	// (0x00032b37) popup_number_entry_window_ParamLimits

0x49bc,	// (0x00032b37) popup_number_entry_window

0x9b3e,	// (0x00037cb9) bg_popup_call_pane_cp05_ParamLimits

0x9b3e,	// (0x00037cb9) bg_popup_call_pane_cp05

0x9b5e,	// (0x00037cd9) popup_number_entry_window_t1

0x9b71,	// (0x00037cec) popup_number_entry_window_t2

0x9b83,	// (0x00037cfe) popup_number_entry_window_t3

0x0003,

0xf0cd,	// (0x0003d248) popup_number_entry_window_t

0x9b95,	// (0x00037d10) text_title_cp2

0x9ba8,	// (0x00037d23) bg_popup_call_pane_cp_ParamLimits

0x9ba8,	// (0x00037d23) bg_popup_call_pane_cp

0x9bb6,	// (0x00037d31) call_thumbnail_pane

0x9bbe,	// (0x00037d39) popup_call_audio_in_window_g1_ParamLimits

0x9bbe,	// (0x00037d39) popup_call_audio_in_window_g1

0x9bca,	// (0x00037d45) popup_call_audio_in_window_g2_ParamLimits

0x9bca,	// (0x00037d45) popup_call_audio_in_window_g2

0x9bd6,	// (0x00037d51) popup_call_audio_in_window_g3_ParamLimits

0x9bd6,	// (0x00037d51) popup_call_audio_in_window_g3

0x0002,

0xf0d6,	// (0x0003d251) popup_call_audio_in_window_g_ParamLimits

0xf0d6,	// (0x0003d251) popup_call_audio_in_window_g

0x9be2,	// (0x00037d5d) popup_call_audio_in_window_t1_ParamLimits

0x9be2,	// (0x00037d5d) popup_call_audio_in_window_t1

0x9bfe,	// (0x00037d79) popup_call_audio_in_window_t2_ParamLimits

0x9bfe,	// (0x00037d79) popup_call_audio_in_window_t2

0x9c1a,	// (0x00037d95) popup_call_audio_in_window_t3_ParamLimits

0x9c1a,	// (0x00037d95) popup_call_audio_in_window_t3

0x0002,

0xf0dd,	// (0x0003d258) popup_call_audio_in_window_t_ParamLimits

0xf0dd,	// (0x0003d258) popup_call_audio_in_window_t

0x9ba8,	// (0x00037d23) bg_popup_call_pane_cp01_ParamLimits

0x9ba8,	// (0x00037d23) bg_popup_call_pane_cp01

0x9bb6,	// (0x00037d31) call_thumbnail_pane_cp02

0x9c2d,	// (0x00037da8) call_type_pane_cp022

0x9c35,	// (0x00037db0) popup_call_audio_out_window_g1_ParamLimits

0x9c35,	// (0x00037db0) popup_call_audio_out_window_g1

0x9c47,	// (0x00037dc2) popup_call_audio_out_window_g2_ParamLimits

0x9c47,	// (0x00037dc2) popup_call_audio_out_window_g2

0x9c53,	// (0x00037dce) popup_call_audio_out_window_g3_ParamLimits

0x9c53,	// (0x00037dce) popup_call_audio_out_window_g3

0x0002,

0xf0e4,	// (0x0003d25f) popup_call_audio_out_window_g_ParamLimits

0xf0e4,	// (0x0003d25f) popup_call_audio_out_window_g

0x9c65,	// (0x00037de0) popup_call_audio_out_window_t1_ParamLimits

0x9c65,	// (0x00037de0) popup_call_audio_out_window_t1

0x9c7d,	// (0x00037df8) popup_call_audio_out_window_t2_ParamLimits

0x9c7d,	// (0x00037df8) popup_call_audio_out_window_t2

0x0001,

0xf0eb,	// (0x0003d266) popup_call_audio_out_window_t_ParamLimits

0xf0eb,	// (0x0003d266) popup_call_audio_out_window_t

0x9c92,	// (0x00037e0d) bg_popup_call_pane_ParamLimits

0x9c92,	// (0x00037e0d) bg_popup_call_pane

0x191a,	// (0x0002fa95) call_thumbnail_pane_cp_ParamLimits

0x191a,	// (0x0002fa95) call_thumbnail_pane_cp

0x9d16,	// (0x00037e91) call_type_pane_cp01_ParamLimits

0x9d16,	// (0x00037e91) call_type_pane_cp01

0x9d5a,	// (0x00037ed5) popup_call_audio_first_window_g1_ParamLimits

0x9d5a,	// (0x00037ed5) popup_call_audio_first_window_g1

0x9da6,	// (0x00037f21) popup_call_audio_first_window_g2_ParamLimits

0x9da6,	// (0x00037f21) popup_call_audio_first_window_g2

0x0001,

0xf0f0,	// (0x0003d26b) popup_call_audio_first_window_g_ParamLimits

0xf0f0,	// (0x0003d26b) popup_call_audio_first_window_g

0x9dea,	// (0x00037f65) popup_call_audio_first_window_t1_ParamLimits

0x9dea,	// (0x00037f65) popup_call_audio_first_window_t1

0x9e96,	// (0x00038011) popup_call_audio_first_window_t4_ParamLimits

0x9e96,	// (0x00038011) popup_call_audio_first_window_t4

0x9f22,	// (0x0003809d) popup_call_audio_first_window_t5_ParamLimits

0x9f22,	// (0x0003809d) popup_call_audio_first_window_t5

0x0002,

0xf0f5,	// (0x0003d270) popup_call_audio_first_window_t_ParamLimits

0xf0f5,	// (0x0003d270) popup_call_audio_first_window_t

0x9f51,	// (0x000380cc) bg_popup_call_pane_cp02

0x9f5b,	// (0x000380d6) call_type_pane_cp023

0x9f63,	// (0x000380de) popup_call_audio_wait_window_g1

0x9f6b,	// (0x000380e6) popup_call_audio_wait_window_g2

0x0001,

0xf0fc,	// (0x0003d277) popup_call_audio_wait_window_g

0x9f73,	// (0x000380ee) popup_call_audio_wait_window_t3

0x9f81,	// (0x000380fc) bg_popup_call_pane_cp03_ParamLimits

0x9f81,	// (0x000380fc) bg_popup_call_pane_cp03

0x9fe1,	// (0x0003815c) call_thumbnail_pane_cp011_ParamLimits

0x9fe1,	// (0x0003815c) call_thumbnail_pane_cp011

0x9fed,	// (0x00038168) call_type_pane_cp034_ParamLimits

0x9fed,	// (0x00038168) call_type_pane_cp034

0xa029,	// (0x000381a4) popup_call_audio_second_window_g1_ParamLimits

0xa029,	// (0x000381a4) popup_call_audio_second_window_g1

0xa065,	// (0x000381e0) popup_call_audio_second_window_g2_ParamLimits

0xa065,	// (0x000381e0) popup_call_audio_second_window_g2

0x0001,

0xf101,	// (0x0003d27c) popup_call_audio_second_window_g_ParamLimits

0xf101,	// (0x0003d27c) popup_call_audio_second_window_g

0xa0a1,	// (0x0003821c) popup_call_audio_second_window_t1_ParamLimits

0xa0a1,	// (0x0003821c) popup_call_audio_second_window_t1

0xa122,	// (0x0003829d) popup_call_audio_second_window_t2_ParamLimits

0xa122,	// (0x0003829d) popup_call_audio_second_window_t2

0xa158,	// (0x000382d3) popup_call_audio_second_window_t3_ParamLimits

0xa158,	// (0x000382d3) popup_call_audio_second_window_t3

0x0002,

0xf106,	// (0x0003d281) popup_call_audio_second_window_t_ParamLimits

0xf106,	// (0x0003d281) popup_call_audio_second_window_t

0x9f51,	// (0x000380cc) bg_popup_call_pane_cp04

0xa18e,	// (0x00038309) list_conf_pane

0xa196,	// (0x00038311) popup_call_audio_conf_window_t1

0xa1a4,	// (0x0003831f) call_thumbnail_pane_g1

0xa1ac,	// (0x00038327) bg_pinb_pane_ParamLimits

0xa1ac,	// (0x00038327) bg_pinb_pane

0xa1ba,	// (0x00038335) find_pinb_pane

0xa1c3,	// (0x0003833e) listscroll_pinb_pane_ParamLimits

0xa1c3,	// (0x0003833e) listscroll_pinb_pane

0xa1d2,	// (0x0003834d) pinb_bg_pane_g1

0x193e,	// (0x0002fab9) pinb_bg_pane_g2

0x194a,	// (0x0002fac5) pinb_bg_pane_g3

0x1956,	// (0x0002fad1) pinb_bg_pane_g4

0x1962,	// (0x0002fadd) pinb_bg_pane_g5

0x196e,	// (0x0002fae9) pinb_bg_pane_g6

0x1979,	// (0x0002faf4) pinb_bg_pane_g7

0x1984,	// (0x0002faff) pinb_bg_pane_g8

0x198f,	// (0x0002fb0a) pinb_bg_pane_g9

0x1999,	// (0x0002fb14) pinb_bg_pane_g10

0x0009,

0xf10d,	// (0x0003d288) pinb_bg_pane_g

0x19b6,	// (0x0002fb31) grid_pinb_pane

0x19bf,	// (0x0002fb3a) list_pinb_pane

0x19c8,	// (0x0002fb43) scroll_pane_cp01_ParamLimits

0x19c8,	// (0x0002fb43) scroll_pane_cp01

0xa1dc,	// (0x00038357) find_pinb_pane_g1_ParamLimits

0xa1dc,	// (0x00038357) find_pinb_pane_g1

0xa1f4,	// (0x0003836f) find_pinb_pane_t1

0xa206,	// (0x00038381) find_pinb_pane_t2

0x0001,

0xf127,	// (0x0003d2a2) find_pinb_pane_t

0xa21b,	// (0x00038396) input_focus_pane_cp01_ParamLimits

0xa21b,	// (0x00038396) input_focus_pane_cp01

0x19da,	// (0x0002fb55) cell_pinb_pane_ParamLimits

0x19da,	// (0x0002fb55) cell_pinb_pane

0xa227,	// (0x000383a2) cell_pinb_pane_g1_ParamLimits

0xa227,	// (0x000383a2) cell_pinb_pane_g1

0xa23a,	// (0x000383b5) cell_pinb_pane_g2_ParamLimits

0xa23a,	// (0x000383b5) cell_pinb_pane_g2

0xa246,	// (0x000383c1) cell_pinb_pane_g3_ParamLimits

0xa246,	// (0x000383c1) cell_pinb_pane_g3

0x0002,

0xf12c,	// (0x0003d2a7) cell_pinb_pane_g_ParamLimits

0xf12c,	// (0x0003d2a7) cell_pinb_pane_g

0x9f51,	// (0x000380cc) grid_highlight_pane_cp01

0x1a08,	// (0x0002fb83) list_pinb_item_pane_ParamLimits

0x1a08,	// (0x0002fb83) list_pinb_item_pane

0x9f51,	// (0x000380cc) list_highlight_pane_cp02

0x1a1b,	// (0x0002fb96) list_pinb_item_pane_g1_ParamLimits

0x1a1b,	// (0x0002fb96) list_pinb_item_pane_g1

0x1a28,	// (0x0002fba3) list_pinb_item_pane_g2_ParamLimits

0x1a28,	// (0x0002fba3) list_pinb_item_pane_g2

0x1a34,	// (0x0002fbaf) list_pinb_item_pane_g3_ParamLimits

0x1a34,	// (0x0002fbaf) list_pinb_item_pane_g3

0x1a45,	// (0x0002fbc0) list_pinb_item_pane_g4_ParamLimits

0x1a45,	// (0x0002fbc0) list_pinb_item_pane_g4

0x0003,

0xf133,	// (0x0003d2ae) list_pinb_item_pane_g_ParamLimits

0xf133,	// (0x0003d2ae) list_pinb_item_pane_g

0x1a51,	// (0x0002fbcc) list_pinb_item_pane_t1_ParamLimits

0x1a51,	// (0x0002fbcc) list_pinb_item_pane_t1

0x02e8,	// (0x0002e463) calc_display_pane

0x0310,	// (0x0002e48b) calc_paper_pane

0x0333,	// (0x0002e4ae) grid_calc_pane

0x9f51,	// (0x000380cc) bg_list_pane_cp01

0x1a70,	// (0x0002fbeb) clock_g1

0x1a78,	// (0x0002fbf3) clock_g2

0x0001,

0xf13c,	// (0x0003d2b7) clock_g

0x1a80,	// (0x0002fbfb) clock_t1_ParamLimits

0x1a80,	// (0x0002fbfb) clock_t1

0x1a95,	// (0x0002fc10) clock_t2_ParamLimits

0x1a95,	// (0x0002fc10) clock_t2

0x1aa7,	// (0x0002fc22) clock_t3_ParamLimits

0x1aa7,	// (0x0002fc22) clock_t3

0x1ab9,	// (0x0002fc34) clock_t4_ParamLimits

0x1ab9,	// (0x0002fc34) clock_t4

0x1acb,	// (0x0002fc46) clock_t5_ParamLimits

0x1acb,	// (0x0002fc46) clock_t5

0x1ae0,	// (0x0002fc5b) clock_t6_ParamLimits

0x1ae0,	// (0x0002fc5b) clock_t6

0x1af2,	// (0x0002fc6d) clock_t7_ParamLimits

0x1af2,	// (0x0002fc6d) clock_t7

0x1b04,	// (0x0002fc7f) clock_t8_ParamLimits

0x1b04,	// (0x0002fc7f) clock_t8

0x1b18,	// (0x0002fc93) clock_t9_ParamLimits

0x1b18,	// (0x0002fc93) clock_t9

0x0008,

0xf141,	// (0x0003d2bc) clock_t_ParamLimits

0xf141,	// (0x0003d2bc) clock_t

0xa252,	// (0x000383cd) popup_clock_analogue_window_cp02

0xa252,	// (0x000383cd) popup_clock_digital_window_cp01

0xa25a,	// (0x000383d5) listscroll_help_pane

0x9f51,	// (0x000380cc) phob_pre_status_pane

0xa264,	// (0x000383df) grid_qdial_pane

0xa1ac,	// (0x00038327) listscroll_mce_pane

0xa1ac,	// (0x00038327) bg_notes_pane

0xa26e,	// (0x000383e9) list_notes_pane

0x1b2c,	// (0x0002fca7) scroll_pane_cp06

0xa27c,	// (0x000383f7) bg_calc_paper_pane

0x1b40,	// (0x0002fcbb) list_calc_pane

0xa290,	// (0x0003840b) bg_calc_display_pane

0x0361,	// (0x0002e4dc) calc_display_pane_t1

0x0373,	// (0x0002e4ee) calc_display_pane_t2

0x1b5a,	// (0x0002fcd5) calc_display_pane_t3

0x0002,

0xf154,	// (0x0003d2cf) calc_display_pane_t

0x0385,	// (0x0002e500) cell_calc_pane_ParamLimits

0x0385,	// (0x0002e500) cell_calc_pane

0xa29c,	// (0x00038417) bg_calc_paper_pane_g1

0xa2a8,	// (0x00038423) bg_calc_paper_pane_g2

0xa2b4,	// (0x0003842f) bg_calc_paper_pane_g3

0xa2c0,	// (0x0003843b) bg_calc_paper_pane_g4

0xa2cc,	// (0x00038447) bg_calc_paper_pane_g5

0x1b6c,	// (0x0002fce7) bg_calc_paper_pane_g6

0x1b7d,	// (0x0002fcf8) bg_calc_paper_pane_g7

0x1b8e,	// (0x0002fd09) bg_calc_paper_pane_g8

0x0007,

0xf15b,	// (0x0003d2d6) bg_calc_paper_pane_g

0x1ba1,	// (0x0002fd1c) calc_bg_paper_pane_g9

0x1bb4,	// (0x0002fd2f) list_calc_item_pane_ParamLimits

0x1bb4,	// (0x0002fd2f) list_calc_item_pane

0xa2d8,	// (0x00038453) list_calc_item_pane_g1

0x1bce,	// (0x0002fd49) list_calc_item_pane_t1_ParamLimits

0x1bce,	// (0x0002fd49) list_calc_item_pane_t1

0x03bc,	// (0x0002e537) list_calc_item_pane_t2_ParamLimits

0x03bc,	// (0x0002e537) list_calc_item_pane_t2

0x0001,

0xf16c,	// (0x0003d2e7) list_calc_item_pane_t_ParamLimits

0xf16c,	// (0x0003d2e7) list_calc_item_pane_t

0xa2e5,	// (0x00038460) cell_calc_pane_g1

0xa2ef,	// (0x0003846a) grid_highlight_pane_cp02

0xa311,	// (0x0003848c) bg_calc_display_pane_g1

0x1be0,	// (0x0002fd5b) bg_calc_display_pane_g2

0xa31a,	// (0x00038495) bg_calc_display_pane_g3

0x0002,

0xf176,	// (0x0003d2f1) bg_calc_display_pane_g

0x03ee,	// (0x0002e569) cell_qdial_pane_ParamLimits

0x03ee,	// (0x0002e569) cell_qdial_pane

0x1bea,	// (0x0002fd65) cell_qdial_pane_g1_ParamLimits

0x1bea,	// (0x0002fd65) cell_qdial_pane_g1

0x1c00,	// (0x0002fd7b) cell_qdial_pane_g2_ParamLimits

0x1c00,	// (0x0002fd7b) cell_qdial_pane_g2

0xa323,	// (0x0003849e) cell_qdial_pane_g3_ParamLimits

0xa323,	// (0x0003849e) cell_qdial_pane_g3

0x0003,

0xf17d,	// (0x0003d2f8) cell_qdial_pane_g_ParamLimits

0xf17d,	// (0x0003d2f8) cell_qdial_pane_g

0x1c26,	// (0x0002fda1) cell_qdial_pane_t1_ParamLimits

0x1c26,	// (0x0002fda1) cell_qdial_pane_t1

0x1c3e,	// (0x0002fdb9) cell_qdial_pane_t2_ParamLimits

0x1c3e,	// (0x0002fdb9) cell_qdial_pane_t2

0x1c51,	// (0x0002fdcc) cell_qdial_pane_t3_ParamLimits

0x1c51,	// (0x0002fdcc) cell_qdial_pane_t3

0x0002,

0xf186,	// (0x0003d301) cell_qdial_pane_t_ParamLimits

0xf186,	// (0x0003d301) cell_qdial_pane_t

0x9f51,	// (0x000380cc) grid_highlight_pane_cp04

0xa32f,	// (0x000384aa) thumbnail_qdial_pane_ParamLimits

0xa32f,	// (0x000384aa) thumbnail_qdial_pane

0xa38b,	// (0x00038506) list_help_pane

0xa394,	// (0x0003850f) scroll_pane_cp02

0x1c64,	// (0x0002fddf) help_list_pane_t1_ParamLimits

0x1c64,	// (0x0002fddf) help_list_pane_t1

0x1c83,	// (0x0002fdfe) bg_notes_pane_g2

0x1c8b,	// (0x0002fe06) bg_notes_pane_g3

0x1c93,	// (0x0002fe0e) notes_bg_pane_g1

0x1c9b,	// (0x0002fe16) notes_bg_pane_g4

0x1ca3,	// (0x0002fe1e) notes_bg_pane_g5

0x1cab,	// (0x0002fe26) notes_bg_pane_g6

0x1cb3,	// (0x0002fe2e) notes_bg_pane_g7

0x1cbb,	// (0x0002fe36) notes_bg_pane_g8

0x1cc3,	// (0x0002fe3e) notes_bg_pane_g9

0x0006,

0xf1a4,	// (0x0003d31f) notes_bg_pane_g

0x1ccb,	// (0x0002fe46) list_notes_text_pane_ParamLimits

0x1ccb,	// (0x0002fe46) list_notes_text_pane

0xa39d,	// (0x00038518) list_notes_text_pane_g1

0x1ce1,	// (0x0002fe5c) list_notes_text_pane_t1

0x1cef,	// (0x0002fe6a) listscroll_cale_week_pane

0x1d1b,	// (0x0002fe96) bg_cale_heading_pane

0xa3c0,	// (0x0003853b) bg_cale_pane_cp01

0x1d39,	// (0x0002feb4) cale_week_corner_pane

0x1d58,	// (0x0002fed3) cale_week_day_heading_pane

0x1d7b,	// (0x0002fef6) cale_week_scroll_pane_g1

0x1d94,	// (0x0002ff0f) cale_week_scroll_pane_g2

0x1dac,	// (0x0002ff27) cale_week_scroll_pane_g3

0x1dc4,	// (0x0002ff3f) cale_week_scroll_pane_g4

0x1ddc,	// (0x0002ff57) cale_week_scroll_pane_g5

0x1df8,	// (0x0002ff73) cale_week_scroll_pane_g6

0x1e18,	// (0x0002ff93) cale_week_scroll_pane_g7

0x1e38,	// (0x0002ffb3) cale_week_scroll_pane_g8

0x1e5c,	// (0x0002ffd7) cale_week_scroll_pane_g9

0x1e74,	// (0x0002ffef) cale_week_scroll_pane_g10

0x1e8c,	// (0x00030007) cale_week_scroll_pane_g11

0x1ea4,	// (0x0003001f) cale_week_scroll_pane_g12

0x1ebc,	// (0x00030037) cale_week_scroll_pane_g13

0x1ebc,	// (0x00030037) cale_week_scroll_pane_g14

0x1ebc,	// (0x00030037) cale_week_scroll_pane_g15

0x000e,

0xf1b3,	// (0x0003d32e) cale_week_scroll_pane_g

0x1ed4,	// (0x0003004f) cale_week_time_pane

0x1ef8,	// (0x00030073) grid_cale_week_pane

0xa3f0,	// (0x0003856b) scroll_pane_cp08

0x1f1e,	// (0x00030099) cell_cale_week_pane_ParamLimits

0x1f1e,	// (0x00030099) cell_cale_week_pane

0x1fac,	// (0x00030127) cale_week_day_heading_pane_t1

0x1ff6,	// (0x00030171) cale_week_day_heading_pane_t2

0x2045,	// (0x000301c0) cale_week_day_heading_pane_t3

0x2094,	// (0x0003020f) cale_week_day_heading_pane_t4

0x20e3,	// (0x0003025e) cale_week_day_heading_pane_t5

0x213a,	// (0x000302b5) cale_week_day_heading_pane_t6

0x2191,	// (0x0003030c) cale_week_day_heading_pane_t7

0x0006,

0xf1d2,	// (0x0003d34d) cale_week_day_heading_pane_t

0xa40d,	// (0x00038588) bg_cale_side_pane

0x0402,	// (0x0002e57d) cale_week_time_pane_t1

0x041c,	// (0x0002e597) cale_week_time_pane_t2

0x0436,	// (0x0002e5b1) cale_week_time_pane_t3

0x0450,	// (0x0002e5cb) cale_week_time_pane_t4

0x046a,	// (0x0002e5e5) cale_week_time_pane_t5

0x0484,	// (0x0002e5ff) cale_week_time_pane_t6

0x049e,	// (0x0002e619) cale_week_time_pane_t7

0x04be,	// (0x0002e639) cale_week_time_pane_t8

0x0007,

0xf1e1,	// (0x0003d35c) cale_week_time_pane_t

0x21db,	// (0x00030356) cell_cale_week_pane_g2

0x21fa,	// (0x00030375) cell_cale_week_pane_g3_ParamLimits

0x21fa,	// (0x00030375) cell_cale_week_pane_g3

0xa41b,	// (0x00038596) grid_highlight_pane_cp07

0xa423,	// (0x0003859e) listscroll_gms_pane

0xa42d,	// (0x000385a8) grid_gms_pane

0xa436,	// (0x000385b1) listscroll_gms_pane_g1

0xa43e,	// (0x000385b9) listscroll_gms_pane_g2

0x0001,

0xf1f2,	// (0x0003d36d) listscroll_gms_pane_g

0x2212,	// (0x0003038d) scroll_pane_cp010

0x221d,	// (0x00030398) cell_gms_pane_ParamLimits

0x221d,	// (0x00030398) cell_gms_pane

0x222f,	// (0x000303aa) cell_gms_pane_g1

0xa446,	// (0x000385c1) cell_gms_pane_g2

0xa39d,	// (0x00038518) cell_gms_pane_g3

0xa44e,	// (0x000385c9) cell_gms_pane_g4

0x0003,

0xf1f7,	// (0x0003d372) cell_gms_pane_g

0xa457,	// (0x000385d2) grid_highlight_pane_cp09

0x47db,	// (0x00032956) phob_pre_status_pane_g1

0x47e3,	// (0x0003295e) phob_pre_status_pane_g2

0x47eb,	// (0x00032966) phob_pre_status_pane_g3

0x47f3,	// (0x0003296e) phob_pre_status_pane_g4

0x0004,

0xf5e6,	// (0x0003d761) phob_pre_status_pane_g

0x4803,	// (0x0003297e) phob_pre_status_pane_t1

0x4811,	// (0x0003298c) phob_pre_status_pane_t2

0x4821,	// (0x0003299c) phob_pre_status_pane_t3

0x0002,

0xf5f1,	// (0x0003d76c) phob_pre_status_pane_t

0x9f51,	// (0x000380cc) bg_list_pane_cp05

0x04e6,	// (0x0002e661) grid_vorec_pane

0x04f0,	// (0x0002e66b) vorec_t1

0x04fe,	// (0x0002e679) vorec_t2

0x050c,	// (0x0002e687) vorec_t3

0x051a,	// (0x0002e695) vorec_t4

0x2237,	// (0x000303b2) vorec_t5

0x0528,	// (0x0002e6a3) vorec_t6

0x0006,

0xf200,	// (0x0003d37b) vorec_t

0x0544,	// (0x0002e6bf) wait_bar_pane_cp01

0x2245,	// (0x000303c0) cell_vorec_pane_ParamLimits

0x2245,	// (0x000303c0) cell_vorec_pane

0x2258,	// (0x000303d3) cell_vorec_pane_g1

0x9f51,	// (0x000380cc) grid_highlight_pane_cp05

0x227a,	// (0x000303f5) cams_zoom_pane

0x2289,	// (0x00030404) image_vga_pane

0x22a3,	// (0x0003041e) main_camera_pane_g1

0x22b5,	// (0x00030430) main_camera_pane_g2

0x22c5,	// (0x00030440) main_camera_pane_g3

0x22d7,	// (0x00030452) main_camera_pane_g4

0x22e9,	// (0x00030464) main_camera_pane_g5

0x22fb,	// (0x00030476) main_camera_pane_g6

0x230d,	// (0x00030488) main_camera_pane_g7

0x0007,

0xf20f,	// (0x0003d38a) main_camera_pane_g

0x231f,	// (0x0003049a) main_camera_pane_t1

0x2335,	// (0x000304b0) main_camera_pane_t2

0x0001,

0xf220,	// (0x0003d39b) main_camera_pane_t

0x2371,	// (0x000304ec) cams_zoom_pane_cp_ParamLimits

0x2371,	// (0x000304ec) cams_zoom_pane_cp

0x2399,	// (0x00030514) image_cif_pane_ParamLimits

0x2399,	// (0x00030514) image_cif_pane

0x23d4,	// (0x0003054f) image_subqcif_pane

0x23dc,	// (0x00030557) main_video_pane_g1_ParamLimits

0x23dc,	// (0x00030557) main_video_pane_g1

0x2400,	// (0x0003057b) main_video_pane_g2_ParamLimits

0x2400,	// (0x0003057b) main_video_pane_g2

0x2434,	// (0x000305af) main_video_pane_g3_ParamLimits

0x2434,	// (0x000305af) main_video_pane_g3

0x2462,	// (0x000305dd) main_video_pane_g4_ParamLimits

0x2462,	// (0x000305dd) main_video_pane_g4

0x2490,	// (0x0003060b) main_video_pane_g5_ParamLimits

0x2490,	// (0x0003060b) main_video_pane_g5

0xa46b,	// (0x000385e6) main_video_pane_g6_ParamLimits

0xa46b,	// (0x000385e6) main_video_pane_g6

0x0006,

0xf225,	// (0x0003d3a0) main_video_pane_g_ParamLimits

0xf225,	// (0x0003d3a0) main_video_pane_g

0x24b9,	// (0x00030634) main_video_pane_t1_ParamLimits

0x24b9,	// (0x00030634) main_video_pane_t1

0xa485,	// (0x00038600) cams_zoom_pane_g1

0xa48e,	// (0x00038609) cams_zoom_pane_g2

0xa497,	// (0x00038612) cams_zoom_pane_g3

0xa4a0,	// (0x0003861b) cams_zoom_pane_g4

0x0003,

0xf234,	// (0x0003d3af) cams_zoom_pane_g

0x2516,	// (0x00030691) grid_cams_pane

0x2530,	// (0x000306ab) linegrid_cams_pane

0x2543,	// (0x000306be) cell_cams_pane_ParamLimits

0x2543,	// (0x000306be) cell_cams_pane

0xa4a9,	// (0x00038624) cams_burst_image_pane

0xa4b1,	// (0x0003862c) cell_cams_pane_g1

0x9f51,	// (0x000380cc) grid_highlight_pane_cp03

0xa2e5,	// (0x00038460) mp_bg_pane_g1

0x9f51,	// (0x000380cc) bg_list_pane_cp03

0xc260,	// (0x0003a3db) bg_mp_pane

0xc268,	// (0x0003a3e3) grid_mp_pane

0xc270,	// (0x0003a3eb) media_player_g1

0xc278,	// (0x0003a3f3) media_player_t1

0xc286,	// (0x0003a401) media_player_t2

0xc294,	// (0x0003a40f) media_player_t3

0xc2a2,	// (0x0003a41d) media_player_t4

0xc2b0,	// (0x0003a42b) media_player_t5

0xc2be,	// (0x0003a439) media_player_t6

0xc2cc,	// (0x0003a447) media_player_t7

0x0006,

0xf5d0,	// (0x0003d74b) media_player_t

0xc2da,	// (0x0003a455) wait_bar_pane_cp02

0xf5b5,	// (0x0003d730) main_usb_pane_t

0x47d2,	// (0x0003294d) cell_mp_pane

0xa2e5,	// (0x00038460) cell_mp_pane_g1

0x9f51,	// (0x000380cc) grid_highlight_pane_cp06

0xa4b9,	// (0x00038634) grid_skin_colour_pane

0xa4c1,	// (0x0003863c) list_highlight_pane_cp03

0x2679,	// (0x000307f4) skin_g1

0xa4c9,	// (0x00038644) skin_t1

0xa4d8,	// (0x00038653) skin_t2

0x0001,

0xf269,	// (0x0003d3e4) skin_t

0x2681,	// (0x000307fc) cell_skin_colour_pane_ParamLimits

0x2681,	// (0x000307fc) cell_skin_colour_pane

0xa4e6,	// (0x00038661) cell_skin_colour_pane_g1

0x26fa,	// (0x00030875) call_video_g1_ParamLimits

0x26fa,	// (0x00030875) call_video_g1

0x2716,	// (0x00030891) call_video_g2_ParamLimits

0x2716,	// (0x00030891) call_video_g2

0x0001,

0xf26e,	// (0x0003d3e9) call_video_g_ParamLimits

0xf26e,	// (0x0003d3e9) call_video_g

0x2768,	// (0x000308e3) call_video_uplink_pane_cp1_ParamLimits

0x2768,	// (0x000308e3) call_video_uplink_pane_cp1

0xa4f8,	// (0x00038673) call_video_uplink_pane_cp2

0x2807,	// (0x00030982) video_down_crop_pane_ParamLimits

0x2807,	// (0x00030982) video_down_crop_pane

0x28f0,	// (0x00030a6b) video_down_pane_ParamLimits

0x28f0,	// (0x00030a6b) video_down_pane

0xa500,	// (0x0003867b) video_down_subqcif_pane_ParamLimits

0xa500,	// (0x0003867b) video_down_subqcif_pane

0xa518,	// (0x00038693) video_down_subqcif_pane_cp_ParamLimits

0xa518,	// (0x00038693) video_down_subqcif_pane_cp

0xa53e,	// (0x000386b9) im_reading_pane_ParamLimits

0xa53e,	// (0x000386b9) im_reading_pane

0x29fe,	// (0x00030b79) im_writing_pane_ParamLimits

0x29fe,	// (0x00030b79) im_writing_pane

0x2a14,	// (0x00030b8f) im_reading_pane_t1

0xa558,	// (0x000386d3) list_im_pane

0xa569,	// (0x000386e4) scroll_pane_cp07

0x2a51,	// (0x00030bcc) im_writing_pane_t1_ParamLimits

0x2a51,	// (0x00030bcc) im_writing_pane_t1

0xa582,	// (0x000386fd) im_writing_pane_t2_ParamLimits

0xa582,	// (0x000386fd) im_writing_pane_t2

0x0001,

0xf278,	// (0x0003d3f3) im_writing_pane_t_ParamLimits

0xf278,	// (0x0003d3f3) im_writing_pane_t

0x9f51,	// (0x000380cc) input_focus_pane_cp04

0x9f51,	// (0x000380cc) input_focus_pane_cp05

0x2a66,	// (0x00030be1) list_im_single_pane_ParamLimits

0x2a66,	// (0x00030be1) list_im_single_pane

0x2a7c,	// (0x00030bf7) list_single_im_pane_t1

0x4792,	// (0x0003290d) blid_accuracy_pane

0x479a,	// (0x00032915) blid_compass_pane

0x47a4,	// (0x0003291f) main_location_t1

0x47b4,	// (0x0003292f) main_location_t2

0x47c4,	// (0x0003293f) main_location_t3

0x0002,

0xf5df,	// (0x0003d75a) main_location_t

0x9f51,	// (0x000380cc) aid_levels_location

0xa2e5,	// (0x00038460) blid_accuracy_pane_g1

0xa2e5,	// (0x00038460) blid_accuracy_pane_g2

0x0001,

0xf2da,	// (0x0003d455) blid_accuracy_pane_g

0xa5ca,	// (0x00038745) wml_content_pane

0xa608,	// (0x00038783) wml_button_pane_ParamLimits

0xa608,	// (0x00038783) wml_button_pane

0x2a8b,	// (0x00030c06) wml_list_single_large_pane_ParamLimits

0x2a8b,	// (0x00030c06) wml_list_single_large_pane

0x2aa1,	// (0x00030c1c) wml_list_single_medium_pane_ParamLimits

0x2aa1,	// (0x00030c1c) wml_list_single_medium_pane

0x2abb,	// (0x00030c36) wml_list_single_small_pane_ParamLimits

0x2abb,	// (0x00030c36) wml_list_single_small_pane

0xa61c,	// (0x00038797) wml_selection_box_pane_ParamLimits

0xa61c,	// (0x00038797) wml_selection_box_pane

0xa62f,	// (0x000387aa) wml_list_single_pane_t1

0xa63e,	// (0x000387b9) wml_list_single_medium_pane_t1

0xa64d,	// (0x000387c8) wml_list_single_large_pane_t1

0xa65c,	// (0x000387d7) input_focus_pane_cp02_ParamLimits

0xa65c,	// (0x000387d7) input_focus_pane_cp02

0xa66f,	// (0x000387ea) wml_selection_box_pane_g1

0xa678,	// (0x000387f3) wml_selection_box_pane_t1_ParamLimits

0xa678,	// (0x000387f3) wml_selection_box_pane_t1

0xa1ac,	// (0x00038327) bg_wml_button_pane_ParamLimits

0xa1ac,	// (0x00038327) bg_wml_button_pane

0xa690,	// (0x0003880b) wml_button_pane_g1

0xa698,	// (0x00038813) wml_button_pane_t1

0xa690,	// (0x0003880b) wml_button_bg_pane_g1

0xa6a8,	// (0x00038823) wml_button_bg_pane_g2

0xa6b0,	// (0x0003882b) wml_button_bg_pane_g3

0xa6b8,	// (0x00038833) wml_button_bg_pane_g4

0xa6c0,	// (0x0003883b) wml_button_bg_pane_g5

0xa6c8,	// (0x00038843) wml_button_bg_pane_g6

0xa6d0,	// (0x0003884b) wml_button_bg_pane_g7

0xa6d8,	// (0x00038853) wml_button_bg_pane_g8

0xa6e0,	// (0x0003885b) wml_button_bg_pane_g9

0x0008,

0xf27d,	// (0x0003d3f8) wml_button_bg_pane_g

0x2ad5,	// (0x00030c50) bg_list_pane_cp02

0xa6e8,	// (0x00038863) mce_header_pane_ParamLimits

0xa6e8,	// (0x00038863) mce_header_pane

0xa6fe,	// (0x00038879) mce_icon_pane

0xa6fe,	// (0x00038879) mce_image_pane

0xa707,	// (0x00038882) mce_text_pane_ParamLimits

0xa707,	// (0x00038882) mce_text_pane

0x2add,	// (0x00030c58) scroll_pane_cp03

0xa600,	// (0x0003877b) scroll_pane_cp04

0xa71a,	// (0x00038895) scroll_pane_cp05_ParamLimits

0xa71a,	// (0x00038895) scroll_pane_cp05

0x2ae7,	// (0x00030c62) mce_header_field_pane_ParamLimits

0x2ae7,	// (0x00030c62) mce_header_field_pane

0x2afe,	// (0x00030c79) mce_header_field_pane_2_ParamLimits

0x2afe,	// (0x00030c79) mce_header_field_pane_2

0x2b14,	// (0x00030c8f) mce_header_field_pane_3

0x2b1c,	// (0x00030c97) list_single_mce_message_pane_ParamLimits

0x2b1c,	// (0x00030c97) list_single_mce_message_pane

0x2b33,	// (0x00030cae) list_single_mce_smart_pane_ParamLimits

0x2b33,	// (0x00030cae) list_single_mce_smart_pane

0xa726,	// (0x000388a1) input_focus_pane_cp03

0xa72f,	// (0x000388aa) list_header_data_pane

0x2b55,	// (0x00030cd0) mce_header_field_pane_t1

0x2b65,	// (0x00030ce0) list_single_mce_header_pane_ParamLimits

0x2b65,	// (0x00030ce0) list_single_mce_header_pane

0xa737,	// (0x000388b2) list_single_mce_header_pane_t1

0xa746,	// (0x000388c1) list_single_mce_message_pane_g1

0xa74e,	// (0x000388c9) list_single_mce_message_pane_t1

0x2b9f,	// (0x00030d1a) bg_cale_heading_pane_cp01_ParamLimits

0x2b9f,	// (0x00030d1a) bg_cale_heading_pane_cp01

0xa75c,	// (0x000388d7) bg_cale_pane_cp02_ParamLimits

0xa75c,	// (0x000388d7) bg_cale_pane_cp02

0x2bda,	// (0x00030d55) cale_month_corner_pane

0x2bf9,	// (0x00030d74) cale_month_day_heading_pane_ParamLimits

0x2bf9,	// (0x00030d74) cale_month_day_heading_pane

0x2c4c,	// (0x00030dc7) cale_month_pane_g1_ParamLimits

0x2c4c,	// (0x00030dc7) cale_month_pane_g1

0x2c7c,	// (0x00030df7) cale_month_pane_g2_ParamLimits

0x2c7c,	// (0x00030df7) cale_month_pane_g2

0x2cac,	// (0x00030e27) cale_month_pane_g3_ParamLimits

0x2cac,	// (0x00030e27) cale_month_pane_g3

0x2ce8,	// (0x00030e63) cale_month_pane_g4_ParamLimits

0x2ce8,	// (0x00030e63) cale_month_pane_g4

0x2d24,	// (0x00030e9f) cale_month_pane_g5_ParamLimits

0x2d24,	// (0x00030e9f) cale_month_pane_g5

0x2d6c,	// (0x00030ee7) cale_month_pane_g6_ParamLimits

0x2d6c,	// (0x00030ee7) cale_month_pane_g6

0x2db8,	// (0x00030f33) cale_month_pane_g7_ParamLimits

0x2db8,	// (0x00030f33) cale_month_pane_g7

0x2e0c,	// (0x00030f87) cale_month_pane_g8_ParamLimits

0x2e0c,	// (0x00030f87) cale_month_pane_g8

0x2e60,	// (0x00030fdb) cale_month_pane_g9_ParamLimits

0x2e60,	// (0x00030fdb) cale_month_pane_g9

0x2eb2,	// (0x0003102d) cale_month_pane_g10_ParamLimits

0x2eb2,	// (0x0003102d) cale_month_pane_g10

0x2f04,	// (0x0003107f) cale_month_pane_g11_ParamLimits

0x2f04,	// (0x0003107f) cale_month_pane_g11

0x2f56,	// (0x000310d1) cale_month_pane_g12_ParamLimits

0x2f56,	// (0x000310d1) cale_month_pane_g12

0x2fa8,	// (0x00031123) cale_month_pane_g13_ParamLimits

0x2fa8,	// (0x00031123) cale_month_pane_g13

0x000c,

0xf290,	// (0x0003d40b) cale_month_pane_g_ParamLimits

0xf290,	// (0x0003d40b) cale_month_pane_g

0x2ffa,	// (0x00031175) cale_month_week_pane

0x301e,	// (0x00031199) grid_cale_month_pane_ParamLimits

0x301e,	// (0x00031199) grid_cale_month_pane

0x305c,	// (0x000311d7) cale_month_day_heading_pane_t1

0x30e2,	// (0x0003125d) cale_month_day_heading_pane_t2

0x3173,	// (0x000312ee) cale_month_day_heading_pane_t3

0x3204,	// (0x0003137f) cale_month_day_heading_pane_t4

0x329d,	// (0x00031418) cale_month_day_heading_pane_t5

0x333e,	// (0x000314b9) cale_month_day_heading_pane_t6

0x33df,	// (0x0003155a) cale_month_day_heading_pane_t7

0x0006,

0xf2ab,	// (0x0003d426) cale_month_day_heading_pane_t

0xa40d,	// (0x00038588) bg_cale_side_pane_cp01

0x3488,	// (0x00031603) cale_month_week_pane_t1

0x34a1,	// (0x0003161c) cale_month_week_pane_t2

0x34ba,	// (0x00031635) cale_month_week_pane_t3

0x34d3,	// (0x0003164e) cale_month_week_pane_t4

0x34ec,	// (0x00031667) cale_month_week_pane_t5

0x3505,	// (0x00031680) cale_month_week_pane_t6

0x0005,

0xf2ba,	// (0x0003d435) cale_month_week_pane_t

0x351e,	// (0x00031699) cell_cale_month_pane_ParamLimits

0x351e,	// (0x00031699) cell_cale_month_pane

0x3676,	// (0x000317f1) cell_cale_month_pane_g1

0x054c,	// (0x0002e6c7) cell_cale_month_pane_t1_ParamLimits

0x054c,	// (0x0002e6c7) cell_cale_month_pane_t1

0xa41b,	// (0x00038596) grid_highlight_pane_cp08

0xa2e5,	// (0x00038460) main_smil_g1

0x3682,	// (0x000317fd) smil_status_pane

0xa79b,	// (0x00038916) smil_text_pane

0xc180,	// (0x0003a2fb) bg_popup_call3_rect_pane_g8

0xc188,	// (0x0003a303) bg_popup_call3_rect_pane_g9

0x0008,

0xf573,	// (0x0003d6ee) bg_popup_call3_rect_pane_g

0xc3cf,	// (0x0003a54a) smil_status_volume_pane_g1

0xa7a5,	// (0x00038920) smil_status_pane_t1

0x4b29,	// (0x00032ca4) volume_smil_pane

0xa7bc,	// (0x00038937) list_smil_text_pane

0x3697,	// (0x00031812) scroll_pane_cp011

0x36a2,	// (0x0003181d) smil_text_list_pane_t1_ParamLimits

0x36a2,	// (0x0003181d) smil_text_list_pane_t1

0x36e4,	// (0x0003185f) aid_volume_smil_ParamLimits

0x36e4,	// (0x0003185f) aid_volume_smil

0xa2e5,	// (0x00038460) smil_volume_pane_g1

0xa2e5,	// (0x00038460) smil_volume_pane_g2

0x0001,

0xf2da,	// (0x0003d455) smil_volume_pane_g

0x1cef,	// (0x0002fe6a) listscroll_cale_day_pane

0xa7c6,	// (0x00038941) bg_cale_pane

0xa7de,	// (0x00038959) list_cale_pane

0xa81d,	// (0x00038998) scroll_pane_cp09

0xa82e,	// (0x000389a9) cale_bg_pane_g1

0xa836,	// (0x000389b1) cale_bg_pane_g2

0xa83e,	// (0x000389b9) cale_bg_pane_g3

0xa846,	// (0x000389c1) cale_bg_pane_g4

0xa84e,	// (0x000389c9) cale_bg_pane_g5

0xa856,	// (0x000389d1) cale_bg_pane_g6

0xa85e,	// (0x000389d9) cale_bg_pane_g7

0xa866,	// (0x000389e1) cale_bg_pane_g8

0xa86e,	// (0x000389e9) cale_bg_pane_g9

0x0008,

0xf2df,	// (0x0003d45a) cale_bg_pane_g

0x3706,	// (0x00031881) list_cale_time_pane_ParamLimits

0x3706,	// (0x00031881) list_cale_time_pane

0xa87e,	// (0x000389f9) list_cale_time_pane_g1_ParamLimits

0xa87e,	// (0x000389f9) list_cale_time_pane_g1

0xa88a,	// (0x00038a05) list_cale_time_pane_g2_ParamLimits

0xa88a,	// (0x00038a05) list_cale_time_pane_g2

0x371d,	// (0x00031898) list_cale_time_pane_g3_ParamLimits

0x371d,	// (0x00031898) list_cale_time_pane_g3

0x372b,	// (0x000318a6) list_cale_time_pane_g4_ParamLimits

0x372b,	// (0x000318a6) list_cale_time_pane_g4

0x3739,	// (0x000318b4) list_cale_time_pane_g5_ParamLimits

0x3739,	// (0x000318b4) list_cale_time_pane_g5

0x0005,

0xf2f2,	// (0x0003d46d) list_cale_time_pane_g_ParamLimits

0xf2f2,	// (0x0003d46d) list_cale_time_pane_g

0xa8a4,	// (0x00038a1f) list_cale_time_pane_t1_ParamLimits

0xa8a4,	// (0x00038a1f) list_cale_time_pane_t1

0xa8cc,	// (0x00038a47) list_cale_time_pane_t2_ParamLimits

0xa8cc,	// (0x00038a47) list_cale_time_pane_t2

0x3afc,	// (0x00031c77) aid_blid_cardinal_pane

0x3b3a,	// (0x00031cb5) compass_pane_t4

0xa8f4,	// (0x00038a6f) list_cale_time_pane_t4_ParamLimits

0xa8f4,	// (0x00038a6f) list_cale_time_pane_t4

0x3b48,	// (0x00031cc3) compass_pane_t5

0x3b56,	// (0x00031cd1) compass_pane_t6

0x3b64,	// (0x00031cdf) compass_pane_t7

0xadb1,	// (0x00038f2c) navi_pane_cc_t1

0xaf96,	// (0x00039111) aid_phob_thumbnail_center_pane

0x41a2,	// (0x0003231d) main_postcard_pane_g4_ParamLimits

0x0002,

0xf2ff,	// (0x0003d47a) list_cale_time_pane_t_ParamLimits

0xf2ff,	// (0x0003d47a) list_cale_time_pane_t

0x9ba8,	// (0x00037d23) bg_popup_window_pane_cp02_ParamLimits

0x9ba8,	// (0x00037d23) bg_popup_window_pane_cp02

0xa91c,	// (0x00038a97) heading_pane_cp01_ParamLimits

0xa91c,	// (0x00038a97) heading_pane_cp01

0xa928,	// (0x00038aa3) loc_req_pane_ParamLimits

0xa928,	// (0x00038aa3) loc_req_pane

0xa938,	// (0x00038ab3) loc_type_pane_ParamLimits

0xa938,	// (0x00038ab3) loc_type_pane

0xa94a,	// (0x00038ac5) loc_type_pane_t1_ParamLimits

0xa94a,	// (0x00038ac5) loc_type_pane_t1

0xa95c,	// (0x00038ad7) loc_type_pane_t2_ParamLimits

0xa95c,	// (0x00038ad7) loc_type_pane_t2

0xa96e,	// (0x00038ae9) loc_type_pane_t3_ParamLimits

0xa96e,	// (0x00038ae9) loc_type_pane_t3

0x0002,

0xf306,	// (0x0003d481) loc_type_pane_t_ParamLimits

0xf306,	// (0x0003d481) loc_type_pane_t

0xa980,	// (0x00038afb) list_loc_req_pane

0xa98a,	// (0x00038b05) scroll_pane_cp012

0x3747,	// (0x000318c2) list_single_loc_request_popup_menu_pane_ParamLimits

0x3747,	// (0x000318c2) list_single_loc_request_popup_menu_pane

0xa995,	// (0x00038b10) list_single_loc_request_popup_menu_pane_g1_ParamLimits

0xa995,	// (0x00038b10) list_single_loc_request_popup_menu_pane_g1

0xa9a1,	// (0x00038b1c) list_single_loc_request_popup_menu_pane_g2_ParamLimits

0xa9a1,	// (0x00038b1c) list_single_loc_request_popup_menu_pane_g2

0x0001,

0xf30d,	// (0x0003d488) list_single_loc_request_popup_menu_pane_g_ParamLimits

0xf30d,	// (0x0003d488) list_single_loc_request_popup_menu_pane_g

0xa9ad,	// (0x00038b28) list_single_loc_request_popup_menu_pane_t1_ParamLimits

0xa9ad,	// (0x00038b28) list_single_loc_request_popup_menu_pane_t1

0xa1ac,	// (0x00038327) bg_popup_window_pane_cp03_ParamLimits

0xa1ac,	// (0x00038327) bg_popup_window_pane_cp03

0xa9c3,	// (0x00038b3e) heading_loc_req_pane_ParamLimits

0xa9c3,	// (0x00038b3e) heading_loc_req_pane

0x3754,	// (0x000318cf) popup_dyc_status_message_window_g1_ParamLimits

0x3754,	// (0x000318cf) popup_dyc_status_message_window_g1

0x3768,	// (0x000318e3) popup_dyc_status_message_window_t1_ParamLimits

0x3768,	// (0x000318e3) popup_dyc_status_message_window_t1

0x377d,	// (0x000318f8) popup_dyc_status_message_window_t2_ParamLimits

0x377d,	// (0x000318f8) popup_dyc_status_message_window_t2

0x3792,	// (0x0003190d) popup_dyc_status_message_window_t3_ParamLimits

0x3792,	// (0x0003190d) popup_dyc_status_message_window_t3

0x0002,

0xf312,	// (0x0003d48d) popup_dyc_status_message_window_t_ParamLimits

0xf312,	// (0x0003d48d) popup_dyc_status_message_window_t

0x9f51,	// (0x000380cc) bg_heading_pane_cp01

0xa9cf,	// (0x00038b4a) heading_loc_req_pane_g1

0xa9d7,	// (0x00038b52) heading_loc_req_pane_g2

0xa9df,	// (0x00038b5a) heading_loc_req_pane_g3

0x0002,

0xf319,	// (0x0003d494) heading_loc_req_pane_g

0xa9e7,	// (0x00038b62) heading_loc_req_pane_t1

0xa9f6,	// (0x00038b71) bg_popup_sub_pane_cp01_ParamLimits

0xa9f6,	// (0x00038b71) bg_popup_sub_pane_cp01

0xaa04,	// (0x00038b7f) popup_cale_events_window_g1_ParamLimits

0xaa04,	// (0x00038b7f) popup_cale_events_window_g1

0xaa24,	// (0x00038b9f) popup_cale_events_window_g2_ParamLimits

0xaa24,	// (0x00038b9f) popup_cale_events_window_g2

0x0001,

0xf34d,	// (0x0003d4c8) popup_cale_events_window_g_ParamLimits

0xf34d,	// (0x0003d4c8) popup_cale_events_window_g

0xaa44,	// (0x00038bbf) popup_cale_events_window_t1_ParamLimits

0xaa44,	// (0x00038bbf) popup_cale_events_window_t1

0xaa56,	// (0x00038bd1) popup_cale_events_window_t2_ParamLimits

0xaa56,	// (0x00038bd1) popup_cale_events_window_t2

0xaa94,	// (0x00038c0f) popup_cale_events_window_t3_ParamLimits

0xaa94,	// (0x00038c0f) popup_cale_events_window_t3

0xaace,	// (0x00038c49) popup_cale_events_window_t4_ParamLimits

0xaace,	// (0x00038c49) popup_cale_events_window_t4

0x0003,

0xf352,	// (0x0003d4cd) popup_cale_events_window_t_ParamLimits

0xf352,	// (0x0003d4cd) popup_cale_events_window_t

0x3897,	// (0x00031a12) call_type_pane

0x38a7,	// (0x00031a22) popup_call_status_window_g1

0x38bb,	// (0x00031a36) popup_call_status_window_g2

0x38cf,	// (0x00031a4a) popup_call_status_window_g3

0x0002,

0xf35b,	// (0x0003d4d6) popup_call_status_window_g

0xab04,	// (0x00038c7f) call_type_pane_g1

0xab0d,	// (0x00038c88) call_type_pane_g2

0x0001,

0xf362,	// (0x0003d4dd) call_type_pane_g

0x9f51,	// (0x000380cc) bg_popup_sub_pane_cp02

0xab16,	// (0x00038c91) listscroll_popup_wml_pane

0xab1e,	// (0x00038c99) list_wml_pane

0xab28,	// (0x00038ca3) scroll_pane_cp013

0xab33,	// (0x00038cae) list_single_graphic_popup_wml_pane_ParamLimits

0xab33,	// (0x00038cae) list_single_graphic_popup_wml_pane

0xa2e5,	// (0x00038460) list_single_graphic_popup_wml_pane_g1

0xab47,	// (0x00038cc2) list_single_graphic_popup_wml_pane_g2

0x0001,

0xf367,	// (0x0003d4e2) list_single_graphic_popup_wml_pane_g

0xab4f,	// (0x00038cca) list_single_graphic_popup_wml_pane_t1

0xab65,	// (0x00038ce0) aid_call_pane

0xa1a4,	// (0x0003831f) popup_clock_analogue_window_g1

0xa1a4,	// (0x0003831f) popup_clock_analogue_window_g2

0x38de,	// (0x00031a59) popup_clock_analogue_window_g3

0x38de,	// (0x00031a59) popup_clock_analogue_window_g4

0xa2e5,	// (0x00038460) popup_clock_analogue_window_g5

0x0004,

0xf36c,	// (0x0003d4e7) popup_clock_analogue_window_g

0x38e6,	// (0x00031a61) popup_clock_analogue_window_t1

0x38f4,	// (0x00031a6f) clock_digital_number_pane_ParamLimits

0x38f4,	// (0x00031a6f) clock_digital_number_pane

0x3900,	// (0x00031a7b) clock_digital_number_pane_cp02_ParamLimits

0x3900,	// (0x00031a7b) clock_digital_number_pane_cp02

0x390c,	// (0x00031a87) clock_digital_number_pane_cp03_ParamLimits

0x390c,	// (0x00031a87) clock_digital_number_pane_cp03

0x3918,	// (0x00031a93) clock_digital_number_pane_cp04_ParamLimits

0x3918,	// (0x00031a93) clock_digital_number_pane_cp04

0x3928,	// (0x00031aa3) clock_digital_separator_pane_ParamLimits

0x3928,	// (0x00031aa3) clock_digital_separator_pane

0x3934,	// (0x00031aaf) popup_clock_digital_window_t1

0xa2e5,	// (0x00038460) clock_digital_number_pane_g1

0xa2e5,	// (0x00038460) clock_digital_number_pane_g2

0x0001,

0xf2da,	// (0x0003d455) clock_digital_number_pane_g

0xa2e5,	// (0x00038460) clock_digital_separator_pane_g1

0xa2e5,	// (0x00038460) clock_digital_separator_pane_g2

0x0001,

0xf2da,	// (0x0003d455) clock_digital_separator_pane_g

0x9f51,	// (0x000380cc) bg_popup_window_pane_cp04

0xab6d,	// (0x00038ce8) heading_pane_cp03

0xab75,	// (0x00038cf0) listscroll_popup_gms_pane

0xab7d,	// (0x00038cf8) grid_large_graphic_popup_pane

0xab87,	// (0x00038d02) listscroll_popup_gms_pane_g1

0xab8f,	// (0x00038d0a) listscroll_popup_gms_pane_g2

0x0001,

0xf377,	// (0x0003d4f2) listscroll_popup_gms_pane_g

0xa600,	// (0x0003877b) scroll_pane_cp014

0xab97,	// (0x00038d12) cell_large_graphic_popup_pane_ParamLimits

0xab97,	// (0x00038d12) cell_large_graphic_popup_pane

0xabaf,	// (0x00038d2a) cell_large_graphic_popup_pane_g1_ParamLimits

0xabaf,	// (0x00038d2a) cell_large_graphic_popup_pane_g1

0xabbb,	// (0x00038d36) cell_large_graphic_popup_pane_g2_ParamLimits

0xabbb,	// (0x00038d36) cell_large_graphic_popup_pane_g2

0xabc7,	// (0x00038d42) cell_large_graphic_popup_pane_g3_ParamLimits

0xabc7,	// (0x00038d42) cell_large_graphic_popup_pane_g3

0xabd4,	// (0x00038d4f) cell_large_graphic_popup_pane_g4_ParamLimits

0xabd4,	// (0x00038d4f) cell_large_graphic_popup_pane_g4

0x0003,

0xf37c,	// (0x0003d4f7) cell_large_graphic_popup_pane_g_ParamLimits

0xf37c,	// (0x0003d4f7) cell_large_graphic_popup_pane_g

0xabe4,	// (0x00038d5f) grid_highlight_pane_cp010

0xa2e5,	// (0x00038460) bg_popup_call_pane_g1

0xabee,	// (0x00038d69) list_single_graphic_popup_conf_pane_ParamLimits

0xabee,	// (0x00038d69) list_single_graphic_popup_conf_pane

0xac01,	// (0x00038d7c) list_highlight_pane_cp01

0xac0a,	// (0x00038d85) list_single_graphic_popup_conf_pane_g1

0xac12,	// (0x00038d8d) list_single_graphic_popup_conf_pane_g2

0x0001,

0xf385,	// (0x0003d500) list_single_graphic_popup_conf_pane_g

0xac1a,	// (0x00038d95) list_single_graphic_popup_conf_pane_t1

0xac28,	// (0x00038da3) linegrid_cams_pane_g1

0x3951,	// (0x00031acc) linegrid_cams_pane_g2

0xa39d,	// (0x00038518) linegrid_cams_pane_g3

0xac31,	// (0x00038dac) linegrid_cams_pane_g4

0x395a,	// (0x00031ad5) linegrid_cams_pane_g5

0x3963,	// (0x00031ade) linegrid_cams_pane_g6

0xa44e,	// (0x000385c9) linegrid_cams_pane_g7

0x0006,

0xf38a,	// (0x0003d505) linegrid_cams_pane_g

0xac3a,	// (0x00038db5) popup_clock_analogue_window

0xac3a,	// (0x00038db5) popup_clock_digital_window

0x9f51,	// (0x000380cc) popup_phob_thumbnail_window

0xa2e5,	// (0x00038460) call_video_uplink_pane_g1

0xac43,	// (0x00038dbe) call_video_uplink_pane_g2

0x0001,

0xf399,	// (0x0003d514) call_video_uplink_pane_g

0xa41b,	// (0x00038596) video_uplink_pane

0xac4b,	// (0x00038dc6) mce_image_pane_g1

0x396e,	// (0x00031ae9) mce_image_pane_g2

0x3976,	// (0x00031af1) mce_image_pane_g3

0x397e,	// (0x00031af9) mce_image_pane_g4

0x3988,	// (0x00031b03) mce_image_pane_g5

0x0004,

0xf39e,	// (0x0003d519) mce_image_pane_g

0xac55,	// (0x00038dd0) control_top_pane_stacon_cp01_ParamLimits

0xac55,	// (0x00038dd0) control_top_pane_stacon_cp01

0xac69,	// (0x00038de4) uni_indicator_pane_stacon_cp01_ParamLimits

0xac69,	// (0x00038de4) uni_indicator_pane_stacon_cp01

0xac7a,	// (0x00038df5) bg_popup_sub_pane_cp03

0x3990,	// (0x00031b0b) chi_dic_find_pane

0x3998,	// (0x00031b13) listscroll_chi_dic_pane

0x39a1,	// (0x00031b1c) main_pane_chidic_g1

0xac84,	// (0x00038dff) chi_dic_find_pane_t1

0xac92,	// (0x00038e0d) find_chidic_pane

0xac9b,	// (0x00038e16) chi_dic_list_pane_ParamLimits

0xac9b,	// (0x00038e16) chi_dic_list_pane

0xacac,	// (0x00038e27) scroll_pane_cp020

0xacb4,	// (0x00038e2f) find_chidic_pane_t1

0x9f51,	// (0x000380cc) input_focus_pane_cp06

0x39b4,	// (0x00031b2f) list_chi_dic_pane_ParamLimits

0x39b4,	// (0x00031b2f) list_chi_dic_pane

0x39c7,	// (0x00031b42) list_chi_dic_pane_t1_ParamLimits

0x39c7,	// (0x00031b42) list_chi_dic_pane_t1

0x9f51,	// (0x000380cc) list_highlight_pane_cp020

0xacc3,	// (0x00038e3e) bg_cale_heading_pane_g1

0x39da,	// (0x00031b55) bg_cale_heading_pane_g2

0x39e2,	// (0x00031b5d) bg_cale_heading_pane_g3

0x39ea,	// (0x00031b65) bg_cale_heading_pane_g4

0x39f4,	// (0x00031b6f) bg_cale_heading_pane_g5

0x39fe,	// (0x00031b79) bg_cale_heading_pane_g6

0x3a06,	// (0x00031b81) bg_cale_heading_pane_g7

0x3a0e,	// (0x00031b89) bg_cale_heading_pane_g8

0x3a18,	// (0x00031b93) bg_cale_heading_pane_g9

0x0008,

0xf3a9,	// (0x0003d524) bg_cale_heading_pane_g

0xacc3,	// (0x00038e3e) bg_cale_side_pane_g1

0x3a22,	// (0x00031b9d) bg_cale_side_pane_g2

0x3a2a,	// (0x00031ba5) bg_cale_side_pane_g3

0x3a32,	// (0x00031bad) bg_cale_side_pane_g4

0x3a3a,	// (0x00031bb5) bg_cale_side_pane_g5

0x3a42,	// (0x00031bbd) bg_cale_side_pane_g6

0x3a4a,	// (0x00031bc5) bg_cale_side_pane_g7

0x3a52,	// (0x00031bcd) bg_cale_side_pane_g8

0x3a5a,	// (0x00031bd5) bg_cale_side_pane_g9

0x0008,

0xf3bc,	// (0x0003d537) bg_cale_side_pane_g

0x3a62,	// (0x00031bdd) popup_call_status_window_ParamLimits

0x3a62,	// (0x00031bdd) popup_call_status_window

0xaccb,	// (0x00038e46) stacon_top_pane

0xacd3,	// (0x00038e4e) status_pane_ParamLimits

0xacd3,	// (0x00038e4e) status_pane

0xace8,	// (0x00038e63) status_small_pane

0xacf0,	// (0x00038e6b) control_pane

0x9f51,	// (0x000380cc) stacon_bottom_pane

0xacf8,	// (0x00038e73) list_single_mce_smart_pane_t1_ParamLimits

0xacf8,	// (0x00038e73) list_single_mce_smart_pane_t1

0xad0b,	// (0x00038e86) list_single_mce_smart_pane_t2_ParamLimits

0xad0b,	// (0x00038e86) list_single_mce_smart_pane_t2

0x0001,

0xf3cf,	// (0x0003d54a) list_single_mce_smart_pane_t_ParamLimits

0xf3cf,	// (0x0003d54a) list_single_mce_smart_pane_t

0x3aa9,	// (0x00031c24) compass_pane

0x3ab2,	// (0x00031c2d) main_location2_pane_t1

0x3ac4,	// (0x00031c3f) main_location2_pane_t2

0x3ad6,	// (0x00031c51) main_location2_pane_t3

0x0003,

0xf3d4,	// (0x0003d54f) main_location2_pane_t

0xad2a,	// (0x00038ea5) compass_pane_g1_ParamLimits

0xad2a,	// (0x00038ea5) compass_pane_g1

0x3b1c,	// (0x00031c97) compass_pane_t1

0x3b2b,	// (0x00031ca6) compass_pane_t2

0x0005,

0xf3dd,	// (0x0003d558) compass_pane_t

0x3b72,	// (0x00031ced) text_secondary_cp61

0xada8,	// (0x00038f23) navi_pane_cams_g5

0xae24,	// (0x00038f9f) navi_pane_im_t1

0xae32,	// (0x00038fad) navi_pane_mp_g1_ParamLimits

0xae32,	// (0x00038fad) navi_pane_mp_g1

0xae46,	// (0x00038fc1) navi_pane_mp_g2_ParamLimits

0xae46,	// (0x00038fc1) navi_pane_mp_g2

0xae52,	// (0x00038fcd) navi_pane_mp_g3_ParamLimits

0xae52,	// (0x00038fcd) navi_pane_mp_g3

0x0002,

0xf3f1,	// (0x0003d56c) navi_pane_mp_g_ParamLimits

0xf3f1,	// (0x0003d56c) navi_pane_mp_g

0xae5e,	// (0x00038fd9) navi_pane_mp_t1

0xae6c,	// (0x00038fe7) navi_pane_mp_t2

0x0002,

0xf3f8,	// (0x0003d573) navi_pane_mp_t

0xaed7,	// (0x00039052) navi_pane_vt_g1

0xae5e,	// (0x00038fd9) navi_pane_vt_t1

0xaedf,	// (0x0003905a) navi_slider_pane

0xaeef,	// (0x0003906a) zooming_pane

0xaef7,	// (0x00039072) navi_slider_pane_g1

0x3bc3,	// (0x00031d3e) navi_slider_pane_g2

0x0006,

0xf3ff,	// (0x0003d57a) navi_slider_pane_g

0xaf1b,	// (0x00039096) aid_levels_zoom

0xaf23,	// (0x0003909e) zooming_pane_g1

0xaf2b,	// (0x000390a6) zooming_pane_g2

0xaf2b,	// (0x000390a6) zooming_pane_g3

0x0002,

0xf40e,	// (0x0003d589) zooming_pane_g

0xaf33,	// (0x000390ae) level_10_zoom

0xaf3c,	// (0x000390b7) level_11_zoom

0xaf45,	// (0x000390c0) level_1_zoom

0xaf4e,	// (0x000390c9) level_2_zoom

0xaf57,	// (0x000390d2) level_3_zoom

0xaf60,	// (0x000390db) level_4_zoom

0xaf69,	// (0x000390e4) level_5_zoom

0xaf72,	// (0x000390ed) level_6_zoom

0xaf7b,	// (0x000390f6) level_7_zoom

0xaf84,	// (0x000390ff) level_8_zoom

0xaf8d,	// (0x00039108) level_9_zoom

0xaf9e,	// (0x00039119) popup_phob_thumbnail_window_g1

0xafa6,	// (0x00039121) popup_phob_thumbnail_window_g2

0x0001,

0xf415,	// (0x0003d590) popup_phob_thumbnail_window_g

0xc2e2,	// (0x0003a45d) level_1_location

0xc2ea,	// (0x0003a465) level_2_location

0xc2f2,	// (0x0003a46d) level_3_location

0xc2fa,	// (0x0003a475) level_4_location

0xaeef,	// (0x0003906a) level_5_location

0x3bd5,	// (0x00031d50) mce_icon_pane_g1

0x3bdf,	// (0x00031d5a) mce_icon_pane_g2

0x0001,

0xf41a,	// (0x0003d595) mce_icon_pane_g

0x3be9,	// (0x00031d64) main_mup_pane_g1_ParamLimits

0x3be9,	// (0x00031d64) main_mup_pane_g1

0x3bff,	// (0x00031d7a) main_mup_pane_g2_ParamLimits

0x3bff,	// (0x00031d7a) main_mup_pane_g2

0x3c17,	// (0x00031d92) main_mup_pane_g3_ParamLimits

0x3c17,	// (0x00031d92) main_mup_pane_g3

0x3c2f,	// (0x00031daa) main_mup_pane_g4_ParamLimits

0x3c2f,	// (0x00031daa) main_mup_pane_g4

0x3c47,	// (0x00031dc2) main_mup_pane_g5_ParamLimits

0x3c47,	// (0x00031dc2) main_mup_pane_g5

0x3c63,	// (0x00031dde) main_mup_pane_g6_ParamLimits

0x3c63,	// (0x00031dde) main_mup_pane_g6

0x3c7b,	// (0x00031df6) main_mup_pane_g7_ParamLimits

0x3c7b,	// (0x00031df6) main_mup_pane_g7

0x3c93,	// (0x00031e0e) main_mup_pane_g8_ParamLimits

0x3c93,	// (0x00031e0e) main_mup_pane_g8

0x3cab,	// (0x00031e26) main_mup_pane_g9_ParamLimits

0x3cab,	// (0x00031e26) main_mup_pane_g9

0x3cc5,	// (0x00031e40) main_mup_pane_g10_ParamLimits

0x3cc5,	// (0x00031e40) main_mup_pane_g10

0x3cdf,	// (0x00031e5a) main_mup_pane_g11_ParamLimits

0x3cdf,	// (0x00031e5a) main_mup_pane_g11

0x3cf3,	// (0x00031e6e) main_mup_pane_g12_ParamLimits

0x3cf3,	// (0x00031e6e) main_mup_pane_g12

0x3d09,	// (0x00031e84) main_mup_pane_g13_ParamLimits

0x3d09,	// (0x00031e84) main_mup_pane_g13

0x000c,

0xf41f,	// (0x0003d59a) main_mup_pane_g_ParamLimits

0xf41f,	// (0x0003d59a) main_mup_pane_g

0x3d1d,	// (0x00031e98) main_mup_pane_t1_ParamLimits

0x3d1d,	// (0x00031e98) main_mup_pane_t1

0x3d37,	// (0x00031eb2) main_mup_pane_t2_ParamLimits

0x3d37,	// (0x00031eb2) main_mup_pane_t2

0x3d4f,	// (0x00031eca) main_mup_pane_t3_ParamLimits

0x3d4f,	// (0x00031eca) main_mup_pane_t3

0x3d67,	// (0x00031ee2) main_mup_pane_t4_ParamLimits

0x3d67,	// (0x00031ee2) main_mup_pane_t4

0x3d85,	// (0x00031f00) main_mup_pane_t5_ParamLimits

0x3d85,	// (0x00031f00) main_mup_pane_t5

0x3d9a,	// (0x00031f15) main_mup_pane_t6_ParamLimits

0x3d9a,	// (0x00031f15) main_mup_pane_t6

0x0005,

0xf43a,	// (0x0003d5b5) main_mup_pane_t_ParamLimits

0xf43a,	// (0x0003d5b5) main_mup_pane_t

0x3dac,	// (0x00031f27) mup_progress_pane_ParamLimits

0x3dac,	// (0x00031f27) mup_progress_pane

0x3db8,	// (0x00031f33) mup_visualizer_pane_ParamLimits

0x3db8,	// (0x00031f33) mup_visualizer_pane

0x3dec,	// (0x00031f67) mup_volume_pane_ParamLimits

0x3dec,	// (0x00031f67) mup_volume_pane

0xafae,	// (0x00039129) mup_visualizer_pane_g1_ParamLimits

0xafae,	// (0x00039129) mup_visualizer_pane_g1

0xafae,	// (0x00039129) mup_visualizer_pane_g2_ParamLimits

0xafae,	// (0x00039129) mup_visualizer_pane_g2

0xad2a,	// (0x00038ea5) mup_visualizer_pane_g3_ParamLimits

0xad2a,	// (0x00038ea5) mup_visualizer_pane_g3

0x0002,

0xf447,	// (0x0003d5c2) mup_visualizer_pane_g_ParamLimits

0xf447,	// (0x0003d5c2) mup_visualizer_pane_g

0xa2e5,	// (0x00038460) mup_volume_pane_g1

0xafc4,	// (0x0003913f) mup_volume_pane_g2

0x0001,

0xf44e,	// (0x0003d5c9) mup_volume_pane_g

0xa2e5,	// (0x00038460) mup_progress_pane_g1

0xafcd,	// (0x00039148) mup_progress_pane_g2

0xafd6,	// (0x00039151) mup_progress_pane_g3

0x0002,

0xf453,	// (0x0003d5ce) mup_progress_pane_g

0x9f51,	// (0x000380cc) bg_popup_window_pane_cp05

0xafdf,	// (0x0003915a) heading_pane_cp02_ParamLimits

0xafdf,	// (0x0003915a) heading_pane_cp02

0xaff9,	// (0x00039174) list_popup_blid_pane

0xb001,	// (0x0003917c) list_blid_sat_info_pane_ParamLimits

0xb001,	// (0x0003917c) list_blid_sat_info_pane

0xb014,	// (0x0003918f) list_blid_sat_info_pane_g1

0xb01c,	// (0x00039197) list_blid_sat_info_pane_t1

0x3f02,	// (0x0003207d) mup_equalizer_pane_ParamLimits

0x3f02,	// (0x0003207d) mup_equalizer_pane

0x3f1b,	// (0x00032096) mup_equalizer_pane_cp1_ParamLimits

0x3f1b,	// (0x00032096) mup_equalizer_pane_cp1

0x3f38,	// (0x000320b3) mup_equalizer_pane_cp2_ParamLimits

0x3f38,	// (0x000320b3) mup_equalizer_pane_cp2

0x3f55,	// (0x000320d0) mup_equalizer_pane_cp3_ParamLimits

0x3f55,	// (0x000320d0) mup_equalizer_pane_cp3

0x3f76,	// (0x000320f1) mup_equalizer_pane_cp4_ParamLimits

0x3f76,	// (0x000320f1) mup_equalizer_pane_cp4

0x3f97,	// (0x00032112) mup_equalizer_pane_cp5

0x3fab,	// (0x00032126) mup_equalizer_pane_cp6

0x3fbf,	// (0x0003213a) mup_equalizer_pane_cp7

0xc200,	// (0x0003a37b) bg_popup_call_poc_act_pane_g9

0xc208,	// (0x0003a383) bg_popup_call_poc_act_pane_g10

0xc210,	// (0x0003a38b) bg_popup_call_poc_act_pane_g11

0x000a,

0xa1ac,	// (0x00038327) mup_scale_pane

0xa2e5,	// (0x00038460) mup_scale_pane_g1

0xb02a,	// (0x000391a5) mup_scale_pane_g2

0x0006,

0xf46f,	// (0x0003d5ea) mup_scale_pane_g

0xb04e,	// (0x000391c9) msg_data_pane

0xb056,	// (0x000391d1) scroll_pane_cp017

0x3fe5,	// (0x00032160) bg_list_pane_cp04_ParamLimits

0x3fe5,	// (0x00032160) bg_list_pane_cp04

0xb05e,	// (0x000391d9) msg_data_pane_g1

0x4009,	// (0x00032184) msg_data_pane_g2

0x4011,	// (0x0003218c) msg_data_pane_g3

0x4019,	// (0x00032194) msg_data_pane_g4

0x4021,	// (0x0003219c) msg_data_pane_g5

0x4029,	// (0x000321a4) msg_data_pane_g6

0x4031,	// (0x000321ac) msg_data_pane_g7

0x0006,

0xf47e,	// (0x0003d5f9) msg_data_pane_g

0x4039,	// (0x000321b4) msg_text_pane_ParamLimits

0x4039,	// (0x000321b4) msg_text_pane

0x4060,	// (0x000321db) qrid_highlight_pane_cp011_ParamLimits

0x4060,	// (0x000321db) qrid_highlight_pane_cp011

0x9f51,	// (0x000380cc) msg_body_pane

0x9f51,	// (0x000380cc) msg_header_pane

0xb066,	// (0x000391e1) input_focus_pane_cp07

0xb07b,	// (0x000391f6) msg_header_pane_t1_ParamLimits

0xb07b,	// (0x000391f6) msg_header_pane_t1

0xb08d,	// (0x00039208) msg_header_pane_t2_ParamLimits

0xb08d,	// (0x00039208) msg_header_pane_t2

0x0001,

0xf492,	// (0x0003d60d) msg_header_pane_t_ParamLimits

0xf492,	// (0x0003d60d) msg_header_pane_t

0xb09f,	// (0x0003921a) msg_body_pane_g1

0x408f,	// (0x0003220a) msg_body_pane_t1_ParamLimits

0x408f,	// (0x0003220a) msg_body_pane_t1

0xb0a7,	// (0x00039222) msg_body_pane_t2_ParamLimits

0xb0a7,	// (0x00039222) msg_body_pane_t2

0xb0b9,	// (0x00039234) msg_body_pane_t3_ParamLimits

0xb0b9,	// (0x00039234) msg_body_pane_t3

0x0002,

0xf497,	// (0x0003d612) msg_body_pane_t_ParamLimits

0xf497,	// (0x0003d612) msg_body_pane_t

0x0588,	// (0x0002e703) main_viewer_pane_g1_ParamLimits

0x0588,	// (0x0002e703) main_viewer_pane_g1

0x0596,	// (0x0002e711) main_viewer_pane_g2_ParamLimits

0x0596,	// (0x0002e711) main_viewer_pane_g2

0x40f6,	// (0x00032271) main_viewer_pane_g3_ParamLimits

0x40f6,	// (0x00032271) main_viewer_pane_g3

0x4105,	// (0x00032280) main_viewer_pane_g4_ParamLimits

0x4105,	// (0x00032280) main_viewer_pane_g4

0x4114,	// (0x0003228f) main_viewer_pane_g5_ParamLimits

0x4114,	// (0x0003228f) main_viewer_pane_g5

0x4114,	// (0x0003228f) main_viewer_pane_g7_ParamLimits

0x4114,	// (0x0003228f) main_viewer_pane_g7

0xa995,	// (0x00038b10) main_viewer_pane_g8_ParamLimits

0xa995,	// (0x00038b10) main_viewer_pane_g8

0x0007,

0xf4a7,	// (0x0003d622) main_viewer_pane_g_ParamLimits

0xf4a7,	// (0x0003d622) main_viewer_pane_g

0xb0cb,	// (0x00039246) viewer_content_pane_ParamLimits

0xb0cb,	// (0x00039246) viewer_content_pane

0x415f,	// (0x000322da) main_postcard_pane_g1_ParamLimits

0x415f,	// (0x000322da) main_postcard_pane_g1

0x4175,	// (0x000322f0) main_postcard_pane_g2_ParamLimits

0x4175,	// (0x000322f0) main_postcard_pane_g2

0x418b,	// (0x00032306) main_postcard_pane_g3_ParamLimits

0x418b,	// (0x00032306) main_postcard_pane_g3

0x0005,

0xf4b8,	// (0x0003d633) main_postcard_pane_g_ParamLimits

0xf4b8,	// (0x0003d633) main_postcard_pane_g

0x41a2,	// (0x0003231d) main_postcard_pane_g4

0xc3e2,	// (0x0003a55d) smil_status_volume_pane_g2

0x41e5,	// (0x00032360) postcard_pane_ParamLimits

0x41e5,	// (0x00032360) postcard_pane

0xb0d9,	// (0x00039254) postcard_pane_g1_ParamLimits

0xb0d9,	// (0x00039254) postcard_pane_g1

0x4227,	// (0x000323a2) postcard_pane_g2_ParamLimits

0x4227,	// (0x000323a2) postcard_pane_g2

0x4233,	// (0x000323ae) postcard_pane_g3_ParamLimits

0x4233,	// (0x000323ae) postcard_pane_g3

0xb0e7,	// (0x00039262) postcard_pane_g4_ParamLimits

0xb0e7,	// (0x00039262) postcard_pane_g4

0x423f,	// (0x000323ba) postcard_pane_g5_ParamLimits

0x423f,	// (0x000323ba) postcard_pane_g5

0x4254,	// (0x000323cf) postcard_pane_g6_ParamLimits

0x4254,	// (0x000323cf) postcard_pane_g6

0xb0d9,	// (0x00039254) postcard_pane_g7_ParamLimits

0xb0d9,	// (0x00039254) postcard_pane_g7

0x0006,

0xf4c5,	// (0x0003d640) postcard_pane_g_ParamLimits

0xf4c5,	// (0x0003d640) postcard_pane_g

0x4268,	// (0x000323e3) main_mp2_pane_g1_ParamLimits

0x4268,	// (0x000323e3) main_mp2_pane_g1

0x4274,	// (0x000323ef) main_mp2_pane_g2_ParamLimits

0x4274,	// (0x000323ef) main_mp2_pane_g2

0x4280,	// (0x000323fb) main_mp2_pane_g3_ParamLimits

0x4280,	// (0x000323fb) main_mp2_pane_g3

0x0002,

0xf4d4,	// (0x0003d64f) main_mp2_pane_g_ParamLimits

0xf4d4,	// (0x0003d64f) main_mp2_pane_g

0x428c,	// (0x00032407) main_mp2_pane_t1_ParamLimits

0x428c,	// (0x00032407) main_mp2_pane_t1

0x42a1,	// (0x0003241c) main_mp2_pane_t2_ParamLimits

0x42a1,	// (0x0003241c) main_mp2_pane_t2

0x42b3,	// (0x0003242e) main_mp2_pane_t3_ParamLimits

0x42b3,	// (0x0003242e) main_mp2_pane_t3

0x0002,

0xf4db,	// (0x0003d656) main_mp2_pane_t_ParamLimits

0xf4db,	// (0x0003d656) main_mp2_pane_t

0xb0f5,	// (0x00039270) pec_content_pane_ParamLimits

0xb0f5,	// (0x00039270) pec_content_pane

0xa600,	// (0x0003877b) scroll_pane_cp015

0xb107,	// (0x00039282) pec_attribute_pane_ParamLimits

0xb107,	// (0x00039282) pec_attribute_pane

0x42c5,	// (0x00032440) pec_content_pane_g1_ParamLimits

0x42c5,	// (0x00032440) pec_content_pane_g1

0xb117,	// (0x00039292) pec_content_pane_t1_ParamLimits

0xb117,	// (0x00039292) pec_content_pane_t1

0xb129,	// (0x000392a4) pec_content_pane_t2_ParamLimits

0xb129,	// (0x000392a4) pec_content_pane_t2

0x0001,

0xf4e2,	// (0x0003d65d) pec_content_pane_t_ParamLimits

0xf4e2,	// (0x0003d65d) pec_content_pane_t

0x42d1,	// (0x0003244c) list_single_graphic_pane_cp01_ParamLimits

0x42d1,	// (0x0003244c) list_single_graphic_pane_cp01

0xa1ac,	// (0x00038327) bg_popup_sub_pane_cp04

0xb13b,	// (0x000392b6) popup_mup_playback_window_g1

0xb147,	// (0x000392c2) popup_mup_playback_window_t1

0xb15c,	// (0x000392d7) popup_mup_playback_window_t2

0x0001,

0xf4e7,	// (0x0003d662) popup_mup_playback_window_t

0xb193,	// (0x0003930e) main_image_pane_g1_ParamLimits

0xb193,	// (0x0003930e) main_image_pane_g1

0xb1d6,	// (0x00039351) scroll_pane_cp018_ParamLimits

0xb1d6,	// (0x00039351) scroll_pane_cp018

0xb1ee,	// (0x00039369) scroll_pane_cp016_ParamLimits

0xb1ee,	// (0x00039369) scroll_pane_cp016

0x43a0,	// (0x0003251b) smil2_image_pane_ParamLimits

0x43a0,	// (0x0003251b) smil2_image_pane

0x43d4,	// (0x0003254f) smil2_root_pane_ParamLimits

0x43d4,	// (0x0003254f) smil2_root_pane

0x440c,	// (0x00032587) smil2_text_pane_ParamLimits

0x440c,	// (0x00032587) smil2_text_pane

0x9f51,	// (0x000380cc) bg_list_pane_cp06

0xb22a,	// (0x000393a5) grid_radio_pane

0x9f51,	// (0x000380cc) bg_popup_window_pane_cp06

0xb232,	// (0x000393ad) main_fmradio_pane_t1

0xab6d,	// (0x00038ce8) heading_pane_cp04

0xb240,	// (0x000393bb) main_fmradio_pane_t2

0xc218,	// (0x0003a393) popup_cale_lunar_info_window_g1

0xb24e,	// (0x000393c9) main_fmradio_pane_t3

0xc220,	// (0x0003a39b) popup_cale_lunar_info_window_g2

0xb25c,	// (0x000393d7) main_fmradio_pane_t4

0x0001,

0xb26a,	// (0x000393e5) main_fmradio_pane_t5

0x0004,

0xf5c2,	// (0x0003d73d) popup_cale_lunar_info_window_g

0xf4fc,	// (0x0003d677) main_fmradio_pane_t

0xb278,	// (0x000393f3) wait_bar_pane_cp03

0xb280,	// (0x000393fb) cell_fmradio_pane_ParamLimits

0xb280,	// (0x000393fb) cell_fmradio_pane

0xb0d9,	// (0x00039254) cell_fmradio_pane_g1_ParamLimits

0xb0d9,	// (0x00039254) cell_fmradio_pane_g1

0x9f51,	// (0x000380cc) grid_highlight_pane_cp011

0xb293,	// (0x0003940e) poc_content_pane_ParamLimits

0xb293,	// (0x0003940e) poc_content_pane

0xb2a5,	// (0x00039420) scroll_pane_cp019

0x448c,	// (0x00032607) popup_call_poc_act_window_ParamLimits

0x448c,	// (0x00032607) popup_call_poc_act_window

0x44b0,	// (0x0003262b) popup_call_poc_inact_window_ParamLimits

0x44b0,	// (0x0003262b) popup_call_poc_inact_window

0xf599,	// (0x0003d714) bg_popup_call_poc_act_pane_g

0xc190,	// (0x0003a30b) bg_popup_call_poc_inact_pane_g1

0xc198,	// (0x0003a313) bg_popup_call_poc_inact_pane_g2

0xb2ad,	// (0x00039428) popup_call_poc_act_window_g2

0xc1a0,	// (0x0003a31b) bg_popup_call_poc_inact_pane_g3

0xc1a8,	// (0x0003a323) bg_popup_call_poc_inact_pane_g4

0xc1b0,	// (0x0003a32b) bg_popup_call_poc_inact_pane_g5

0xb2b5,	// (0x00039430) popup_call_poc_act_window_t1_ParamLimits

0xb2b5,	// (0x00039430) popup_call_poc_act_window_t1

0xb2dd,	// (0x00039458) popup_call_poc_act_window_t2_ParamLimits

0xb2dd,	// (0x00039458) popup_call_poc_act_window_t2

0xb305,	// (0x00039480) popup_call_poc_act_window_t3_ParamLimits

0xb305,	// (0x00039480) popup_call_poc_act_window_t3

0xb32d,	// (0x000394a8) popup_call_poc_act_window_t4_ParamLimits

0xb32d,	// (0x000394a8) popup_call_poc_act_window_t4

0x0003,

0xf507,	// (0x0003d682) popup_call_poc_act_window_t_ParamLimits

0xf507,	// (0x0003d682) popup_call_poc_act_window_t

0xc1b8,	// (0x0003a333) bg_popup_call_poc_inact_pane_g6

0xc1c0,	// (0x0003a33b) bg_popup_call_poc_inact_pane_g7

0xc1c8,	// (0x0003a343) bg_popup_call_poc_inact_pane_g8

0xb33f,	// (0x000394ba) popup_call_poc_inact_window_g2

0xc1d0,	// (0x0003a34b) bg_popup_call_poc_inact_pane_g9

0x0008,

0xf586,	// (0x0003d701) bg_popup_call_poc_inact_pane_g

0xb347,	// (0x000394c2) popup_call_poc_inact_window_t1_ParamLimits

0xb347,	// (0x000394c2) popup_call_poc_inact_window_t1

0xb35c,	// (0x000394d7) popup_call_poc_inact_window_t2_ParamLimits

0xb35c,	// (0x000394d7) popup_call_poc_inact_window_t2

0xb371,	// (0x000394ec) popup_call_poc_inact_window_t3_ParamLimits

0xb371,	// (0x000394ec) popup_call_poc_inact_window_t3

0x0002,

0xf510,	// (0x0003d68b) popup_call_poc_inact_window_t_ParamLimits

0xf510,	// (0x0003d68b) popup_call_poc_inact_window_t

0xc355,	// (0x0003a4d0) context_pane_ParamLimits

0x4a8b,	// (0x00032c06) signal_pane_ParamLimits

0xaeef,	// (0x0003906a) main_call2_pane

0x4a1a,	// (0x00032b95) popup_phob_thumbnail2_window_ParamLimits

0x4a1a,	// (0x00032b95) popup_phob_thumbnail2_window

0x40c0,	// (0x0003223b) aid_hotspot_pointer_arrow_pane

0x40c8,	// (0x00032243) aid_hotspot_pointer_hand_pane

0x47fb,	// (0x00032976) phob_pre_status_pane_g5

0x227a,	// (0x000303f5) cams_zoom_pane_ParamLimits

0x2289,	// (0x00030404) image_vga_pane_ParamLimits

0x22a3,	// (0x0003041e) main_camera_pane_g1_ParamLimits

0x22b5,	// (0x00030430) main_camera_pane_g2_ParamLimits

0x22c5,	// (0x00030440) main_camera_pane_g3_ParamLimits

0x22d7,	// (0x00030452) main_camera_pane_g4_ParamLimits

0x22e9,	// (0x00030464) main_camera_pane_g5_ParamLimits

0x22fb,	// (0x00030476) main_camera_pane_g6_ParamLimits

0x230d,	// (0x00030488) main_camera_pane_g7_ParamLimits

0xf20f,	// (0x0003d38a) main_camera_pane_g_ParamLimits

0x231f,	// (0x0003049a) main_camera_pane_t1_ParamLimits

0x2335,	// (0x000304b0) main_camera_pane_t2_ParamLimits

0xf220,	// (0x0003d39b) main_camera_pane_t_ParamLimits

0xa1ac,	// (0x00038327) bg_popup_preview_window_pane_cp01_ParamLimits

0xa1ac,	// (0x00038327) bg_popup_preview_window_pane_cp01

0xb386,	// (0x00039501) popup_phob_thumbnail2_window_g1_ParamLimits

0xb386,	// (0x00039501) popup_phob_thumbnail2_window_g1

0x9f51,	// (0x000380cc) call2_cli_visual_pane

0x44e4,	// (0x0003265f) popup_call2_audio_conf_window_ParamLimits

0x44e4,	// (0x0003265f) popup_call2_audio_conf_window

0x4504,	// (0x0003267f) popup_call2_audio_first_window_ParamLimits

0x4504,	// (0x0003267f) popup_call2_audio_first_window

0x459a,	// (0x00032715) popup_call2_audio_in_window_ParamLimits

0x459a,	// (0x00032715) popup_call2_audio_in_window

0x45e2,	// (0x0003275d) popup_call2_audio_out_window_ParamLimits

0x45e2,	// (0x0003275d) popup_call2_audio_out_window

0x464c,	// (0x000327c7) popup_call2_audio_second_window_ParamLimits

0x464c,	// (0x000327c7) popup_call2_audio_second_window

0x46b2,	// (0x0003282d) popup_call2_audio_wait_window_ParamLimits

0x46b2,	// (0x0003282d) popup_call2_audio_wait_window

0x9f51,	// (0x000380cc) bg_popup_call2_act_pane_cp03

0xa18e,	// (0x00038309) list_conf_pane_cp

0xb392,	// (0x0003950d) popup_call2_audio_conf_window_t1

0xb3a0,	// (0x0003951b) list_single_graphic_popup_conf2_pane_ParamLimits

0xb3a0,	// (0x0003951b) list_single_graphic_popup_conf2_pane

0xac01,	// (0x00038d7c) list_highlight_pane_cp04

0xb3b3,	// (0x0003952e) list_single_graphic_popup_conf2_pane_g1

0xac12,	// (0x00038d8d) list_single_graphic_popup_conf2_pane_g2

0x0001,

0xf517,	// (0x0003d692) list_single_graphic_popup_conf2_pane_g

0xb3bd,	// (0x00039538) list_single_graphic_popup_conf2_pane_t1

0xb3cb,	// (0x00039546) bg_popup_call2_act_pane_cp01_ParamLimits

0xb3cb,	// (0x00039546) bg_popup_call2_act_pane_cp01

0xb455,	// (0x000395d0) call_type_pane_cp05_ParamLimits

0xb455,	// (0x000395d0) call_type_pane_cp05

0xb4a9,	// (0x00039624) popup_call2_audio_second_window_g1_ParamLimits

0xb4a9,	// (0x00039624) popup_call2_audio_second_window_g1

0xb4fd,	// (0x00039678) popup_call2_audio_second_window_g2_ParamLimits

0xb4fd,	// (0x00039678) popup_call2_audio_second_window_g2

0x0002,

0xf51c,	// (0x0003d697) popup_call2_audio_second_window_g_ParamLimits

0xf51c,	// (0x0003d697) popup_call2_audio_second_window_g

0xb562,	// (0x000396dd) popup_call2_audio_second_window_t1_ParamLimits

0xb562,	// (0x000396dd) popup_call2_audio_second_window_t1

0xb61d,	// (0x00039798) popup_call2_audio_second_window_t2_ParamLimits

0xb61d,	// (0x00039798) popup_call2_audio_second_window_t2

0xb670,	// (0x000397eb) popup_call2_audio_second_window_t3_ParamLimits

0xb670,	// (0x000397eb) popup_call2_audio_second_window_t3

0x0003,

0xf523,	// (0x0003d69e) popup_call2_audio_second_window_t_ParamLimits

0xf523,	// (0x0003d69e) popup_call2_audio_second_window_t

0x9f51,	// (0x000380cc) bg_popup_call2_in_pane_cp02

0x9f5b,	// (0x000380d6) call_type_pane_cp04

0x9f63,	// (0x000380de) popup_call2_audio_wait_window_g1

0x9f6b,	// (0x000380e6) popup_call2_audio_wait_window_g2

0x0001,

0xf0fc,	// (0x0003d277) popup_call2_audio_wait_window_g

0x9f73,	// (0x000380ee) popup_call2_audio_wait_window_t3

0xb763,	// (0x000398de) bg_popup_call2_act_pane_ParamLimits

0xb763,	// (0x000398de) bg_popup_call2_act_pane

0xb823,	// (0x0003999e) call_type_pane_cp03_ParamLimits

0xb823,	// (0x0003999e) call_type_pane_cp03

0xb887,	// (0x00039a02) popup_call2_audio_first_window_g1_ParamLimits

0xb887,	// (0x00039a02) popup_call2_audio_first_window_g1

0xb8f7,	// (0x00039a72) popup_call2_audio_first_window_g2_ParamLimits

0xb8f7,	// (0x00039a72) popup_call2_audio_first_window_g2

0xafae,	// (0x00039129) popup_call2_audio_first_window_g3_ParamLimits

0xafae,	// (0x00039129) popup_call2_audio_first_window_g3

0x0004,

0xf52c,	// (0x0003d6a7) popup_call2_audio_first_window_g_ParamLimits

0xf52c,	// (0x0003d6a7) popup_call2_audio_first_window_g

0xb9d5,	// (0x00039b50) popup_call2_audio_first_window_t1_ParamLimits

0xb9d5,	// (0x00039b50) popup_call2_audio_first_window_t1

0xbad8,	// (0x00039c53) popup_call2_audio_first_window_t4_ParamLimits

0xbad8,	// (0x00039c53) popup_call2_audio_first_window_t4

0xbbbb,	// (0x00039d36) popup_call2_audio_first_window_t5_ParamLimits

0xbbbb,	// (0x00039d36) popup_call2_audio_first_window_t5

0x0003,

0xf537,	// (0x0003d6b2) popup_call2_audio_first_window_t_ParamLimits

0xf537,	// (0x0003d6b2) popup_call2_audio_first_window_t

0xa1a4,	// (0x0003831f) bg_popup_call2_act_pane_g1

0xc228,	// (0x0003a3a3) popup_cale_lunar_info_window_t1

0xc236,	// (0x0003a3b1) popup_cale_lunar_info_window_t2

0xc244,	// (0x0003a3bf) popup_cale_lunar_info_window_t3

0x9f51,	// (0x000380cc) bg_popup_call2_bubble_pane

0xbcbc,	// (0x00039e37) bg_popup_call2_in_pane_cp01_ParamLimits

0xbcbc,	// (0x00039e37) bg_popup_call2_in_pane_cp01

0x9c2d,	// (0x00037da8) call_type_pane_cp02

0xbd04,	// (0x00039e7f) popup_call2_audio_out_window_g1_ParamLimits

0xbd04,	// (0x00039e7f) popup_call2_audio_out_window_g1

0xbd30,	// (0x00039eab) popup_call2_audio_out_window_g2_ParamLimits

0xbd30,	// (0x00039eab) popup_call2_audio_out_window_g2

0xbd58,	// (0x00039ed3) popup_call2_audio_out_window_g3_ParamLimits

0xbd58,	// (0x00039ed3) popup_call2_audio_out_window_g3

0x0003,

0xf540,	// (0x0003d6bb) popup_call2_audio_out_window_g_ParamLimits

0xf540,	// (0x0003d6bb) popup_call2_audio_out_window_g

0xbd93,	// (0x00039f0e) popup_call2_audio_out_window_t1_ParamLimits

0xbd93,	// (0x00039f0e) popup_call2_audio_out_window_t1

0xbdf2,	// (0x00039f6d) popup_call2_audio_out_window_t2_ParamLimits

0xbdf2,	// (0x00039f6d) popup_call2_audio_out_window_t2

0xbe46,	// (0x00039fc1) popup_call2_audio_out_window_t3_ParamLimits

0xbe46,	// (0x00039fc1) popup_call2_audio_out_window_t3

0xbe5c,	// (0x00039fd7) popup_call2_audio_out_window_t4_ParamLimits

0xbe5c,	// (0x00039fd7) popup_call2_audio_out_window_t4

0xbe72,	// (0x00039fed) popup_call2_audio_out_window_t5_ParamLimits

0xbe72,	// (0x00039fed) popup_call2_audio_out_window_t5

0x0005,

0xf549,	// (0x0003d6c4) popup_call2_audio_out_window_t_ParamLimits

0xf549,	// (0x0003d6c4) popup_call2_audio_out_window_t

0xbed6,	// (0x0003a051) bg_popup_call2_in_pane_ParamLimits

0xbed6,	// (0x0003a051) bg_popup_call2_in_pane

0xbf32,	// (0x0003a0ad) popup_call2_audio_in_window_g1_ParamLimits

0xbf32,	// (0x0003a0ad) popup_call2_audio_in_window_g1

0xbf6a,	// (0x0003a0e5) popup_call2_audio_in_window_g2_ParamLimits

0xbf6a,	// (0x0003a0e5) popup_call2_audio_in_window_g2

0xbfa2,	// (0x0003a11d) popup_call2_audio_in_window_g3_ParamLimits

0xbfa2,	// (0x0003a11d) popup_call2_audio_in_window_g3

0x0003,

0xf556,	// (0x0003d6d1) popup_call2_audio_in_window_g_ParamLimits

0xf556,	// (0x0003d6d1) popup_call2_audio_in_window_g

0xbffa,	// (0x0003a175) popup_call2_audio_in_window_t1_ParamLimits

0xbffa,	// (0x0003a175) popup_call2_audio_in_window_t1

0xc07a,	// (0x0003a1f5) popup_call2_audio_in_window_t2_ParamLimits

0xc07a,	// (0x0003a1f5) popup_call2_audio_in_window_t2

0xc0fa,	// (0x0003a275) popup_call2_audio_in_window_t3_ParamLimits

0xc0fa,	// (0x0003a275) popup_call2_audio_in_window_t3

0xc114,	// (0x0003a28f) popup_call2_audio_in_window_t4_ParamLimits

0xc114,	// (0x0003a28f) popup_call2_audio_in_window_t4

0xc126,	// (0x0003a2a1) popup_call2_audio_in_window_t5_ParamLimits

0xc126,	// (0x0003a2a1) popup_call2_audio_in_window_t5

0xc13b,	// (0x0003a2b6) popup_call2_audio_in_window_t6_ParamLimits

0xc13b,	// (0x0003a2b6) popup_call2_audio_in_window_t6

0x0005,

0xf55f,	// (0x0003d6da) popup_call2_audio_in_window_t_ParamLimits

0xf55f,	// (0x0003d6da) popup_call2_audio_in_window_t

0xa1a4,	// (0x0003831f) bg_popup_call2_in_pane_g1

0xc252,	// (0x0003a3cd) popup_cale_lunar_info_window_t4

0x0003,

0xf5c7,	// (0x0003d742) popup_cale_lunar_info_window_t

0xa1ac,	// (0x00038327) bg_popup_call2_rect_pane_ParamLimits

0xa1ac,	// (0x00038327) bg_popup_call2_rect_pane

0x9f51,	// (0x000380cc) call2_cli_visual_graphic_pane

0x9f51,	// (0x000380cc) call2_cli_visual_text_pane

0x4b1c,	// (0x00032c97) smil_status_volume_pane_g3

0x0002,

0xa2e5,	// (0x00038460) call2_cli_visual_graphic_pane_g1

0xa2e5,	// (0x00038460) call2_cli_visual_graphic_pane_g2

0xa2e5,	// (0x00038460) call2_cli_visual_graphic_pane_g3

0x0002,

0xf56c,	// (0x0003d6e7) call2_cli_visual_graphic_pane_g

0xc150,	// (0x0003a2cb) bg_popup_call2_rect_pane_g1

0xa383,	// (0x000384fe) bg_popup_call2_rect_pane_g2

0xc158,	// (0x0003a2d3) bg_popup_call2_rect_pane_g3

0xc160,	// (0x0003a2db) bg_popup_call2_rect_pane_g4

0xc168,	// (0x0003a2e3) bg_popup_call2_rect_pane_g5

0xc170,	// (0x0003a2eb) bg_popup_call2_rect_pane_g6

0xc178,	// (0x0003a2f3) bg_popup_call2_rect_pane_g7

0xc180,	// (0x0003a2fb) bg_popup_call2_rect_pane_g8

0xc188,	// (0x0003a303) bg_popup_call2_rect_pane_g9

0x0008,

0xf573,	// (0x0003d6ee) bg_popup_call2_rect_pane_g

0xc190,	// (0x0003a30b) bg_popup_call2_bubble_pane_g1

0xc198,	// (0x0003a313) bg_popup_call2_bubble_pane_g2

0xc1a0,	// (0x0003a31b) bg_popup_call2_bubble_pane_g3

0xc1a8,	// (0x0003a323) bg_popup_call2_bubble_pane_g4

0xc1b0,	// (0x0003a32b) bg_popup_call2_bubble_pane_g5

0xc1b8,	// (0x0003a333) bg_popup_call2_bubble_pane_g6

0xc1c0,	// (0x0003a33b) bg_popup_call2_bubble_pane_g7

0xc1c8,	// (0x0003a343) bg_popup_call2_bubble_pane_g8

0xc1d0,	// (0x0003a34b) bg_popup_call2_bubble_pane_g9

0x0008,

0xf586,	// (0x0003d701) bg_popup_call2_bubble_pane_g

0x1d01,	// (0x0002fe7c) aid_cale_week_size_cell_pane

0x234d,	// (0x000304c8) aid_cams_cif_uncrop_pane_ParamLimits

0x234d,	// (0x000304c8) aid_cams_cif_uncrop_pane

0x2502,	// (0x0003067d) aid_cams_size_cell_ParamLimits

0x2502,	// (0x0003067d) aid_cams_size_cell

0x2516,	// (0x00030691) grid_cams_pane_ParamLimits

0x2530,	// (0x000306ab) linegrid_cams_pane_ParamLimits

0x272c,	// (0x000308a7) call_video_pane_t1

0x274a,	// (0x000308c5) call_video_pane_t2

0x0001,

0xf273,	// (0x0003d3ee) call_video_pane_t

0x2b79,	// (0x00030cf4) aid_cale_month_size_cell_pane_ParamLimits

0x2b79,	// (0x00030cf4) aid_cale_month_size_cell_pane

0xf610,	// (0x0003d78b) smil_status_volume_pane_g

0x4b29,	// (0x00032ca4) volume_smil_pane_ParamLimits

0x182a,	// (0x0002f9a5) aid_popup2_width_pane

0x1c10,	// (0x0002fd8b) cell_qdial_pane_g4_ParamLimits

0x1c10,	// (0x0002fd8b) cell_qdial_pane_g4

0x3afc,	// (0x00031c77) aid_blid_cardinal_pane_ParamLimits

0x3b08,	// (0x00031c83) aid_blid_destination_pane_ParamLimits

0x3b08,	// (0x00031c83) aid_blid_destination_pane

0xa1ac,	// (0x00038327) bg_popup_call_poc_act_pane_ParamLimits

0xa1ac,	// (0x00038327) bg_popup_call_poc_act_pane

0xa1ac,	// (0x00038327) bg_popup_call_poc_inact_pane_ParamLimits

0xa1ac,	// (0x00038327) bg_popup_call_poc_inact_pane

0xc1d8,	// (0x0003a353) bg_popup_call_poc_act_pane_g1

0xc1e0,	// (0x0003a35b) bg_popup_call_poc_act_pane_g2

0xc1e8,	// (0x0003a363) bg_popup_call_poc_act_pane_g3

0xc1a8,	// (0x0003a323) bg_popup_call_poc_act_pane_g4

0xc1b0,	// (0x0003a32b) bg_popup_call_poc_act_pane_g5

0xc1f0,	// (0x0003a36b) bg_popup_call_poc_act_pane_g6

0xc1c0,	// (0x0003a33b) bg_popup_call_poc_act_pane_g7

0xc1f8,	// (0x0003a373) bg_popup_call_poc_act_pane_g8

0x9f51,	// (0x000380cc) main_usb_pane

0x49f5,	// (0x00032b70) popup_cale_lunar_info_window

0x2a14,	// (0x00030b8f) im_reading_pane_t1_ParamLimits

0xa558,	// (0x000386d3) list_im_pane_ParamLimits

0xa569,	// (0x000386e4) scroll_pane_cp07_ParamLimits

0x9f51,	// (0x000380cc) grid_highlight_pane_cp012

0xa1ac,	// (0x00038327) mup_scale_pane_ParamLimits

0xb0d9,	// (0x00039254) main_usb_pane_g1_ParamLimits

0xb0d9,	// (0x00039254) main_usb_pane_g1

0x4710,	// (0x0003288b) main_usb_pane_g2_ParamLimits

0x4710,	// (0x0003288b) main_usb_pane_g2

0x0001,

0xf5b0,	// (0x0003d72b) main_usb_pane_g_ParamLimits

0xf5b0,	// (0x0003d72b) main_usb_pane_g

0x4726,	// (0x000328a1) main_usb_pane_t1_ParamLimits

0x4726,	// (0x000328a1) main_usb_pane_t1

0x4738,	// (0x000328b3) main_usb_pane_t2_ParamLimits

0x4738,	// (0x000328b3) main_usb_pane_t2

0x474a,	// (0x000328c5) main_usb_pane_t3_ParamLimits

0x474a,	// (0x000328c5) main_usb_pane_t3

0x475c,	// (0x000328d7) main_usb_pane_t4_ParamLimits

0x475c,	// (0x000328d7) main_usb_pane_t4

0x476e,	// (0x000328e9) main_usb_pane_t5_ParamLimits

0x476e,	// (0x000328e9) main_usb_pane_t5

0x4780,	// (0x000328fb) main_usb_pane_t6_ParamLimits

0x4780,	// (0x000328fb) main_usb_pane_t6

0x0005,

0xf5b5,	// (0x0003d730) main_usb_pane_t_ParamLimits

0x3aa9,	// (0x00031c24) aid_text_placing

0x3ab2,	// (0x00031c2d) main_location2_pane_t1_ParamLimits

0x3ac4,	// (0x00031c3f) main_location2_pane_t2_ParamLimits

0x3ad6,	// (0x00031c51) main_location2_pane_t3_ParamLimits

0x3aea,	// (0x00031c65) main_location2_pane_t4_ParamLimits

0x3aea,	// (0x00031c65) main_location2_pane_t4

0xf3d4,	// (0x0003d54f) main_location2_pane_t_ParamLimits

0xa1e8,	// (0x00038363) find_pinb_pane_g2_ParamLimits

0xa1e8,	// (0x00038363) find_pinb_pane_g2

0x0001,

0xf122,	// (0x0003d29d) find_pinb_pane_g_ParamLimits

0xf122,	// (0x0003d29d) find_pinb_pane_g

0xa1f4,	// (0x0003836f) find_pinb_pane_t1_ParamLimits

0xa206,	// (0x00038381) find_pinb_pane_t2_ParamLimits

0xf127,	// (0x0003d2a2) find_pinb_pane_t_ParamLimits

0x9f51,	// (0x000380cc) main_call3_pane

0x305c,	// (0x000311d7) cale_month_day_heading_pane_t1_ParamLimits

0x30e2,	// (0x0003125d) cale_month_day_heading_pane_t2_ParamLimits

0x3173,	// (0x000312ee) cale_month_day_heading_pane_t3_ParamLimits

0x3204,	// (0x0003137f) cale_month_day_heading_pane_t4_ParamLimits

0x329d,	// (0x00031418) cale_month_day_heading_pane_t5_ParamLimits

0x333e,	// (0x000314b9) cale_month_day_heading_pane_t6_ParamLimits

0x33df,	// (0x0003155a) cale_month_day_heading_pane_t7_ParamLimits

0xf2ab,	// (0x0003d426) cale_month_day_heading_pane_t_ParamLimits

0xa7b3,	// (0x0003892e) smil_status_volume_pane

0x4203,	// (0x0003237e) postcard_address_pane_ParamLimits

0x4203,	// (0x0003237e) postcard_address_pane

0x4215,	// (0x00032390) postcard_message_pane_ParamLimits

0x4215,	// (0x00032390) postcard_message_pane

0x46ec,	// (0x00032867) call2_cli_visual_pane_t1_ParamLimits

0x46ec,	// (0x00032867) call2_cli_visual_pane_t1

0x4cdc,	// (0x00032e57) postcard_message_pane_t1_ParamLimits

0x4cdc,	// (0x00032e57) postcard_message_pane_t1

0x4cc5,	// (0x00032e40) postcard_address_pane_t1_ParamLimits

0x4cc5,	// (0x00032e40) postcard_address_pane_t1

0x4cb1,	// (0x00032e2c) popup_call3_audio_in_window_ParamLimits

0x4cb1,	// (0x00032e2c) popup_call3_audio_in_window

0x4b3e,	// (0x00032cb9) bg_popup_call3_in_pane_ParamLimits

0x4b3e,	// (0x00032cb9) bg_popup_call3_in_pane

0x4bb2,	// (0x00032d2d) popup_call3_audio_in_window_g1_ParamLimits

0x4bb2,	// (0x00032d2d) popup_call3_audio_in_window_g1

0x4bd2,	// (0x00032d4d) popup_call3_audio_in_window_g2_ParamLimits

0x4bd2,	// (0x00032d4d) popup_call3_audio_in_window_g2

0x4bf2,	// (0x00032d6d) popup_call3_audio_in_window_g3_ParamLimits

0x4bf2,	// (0x00032d6d) popup_call3_audio_in_window_g3

0x0003,

0xf617,	// (0x0003d792) popup_call3_audio_in_window_g_ParamLimits

0xf617,	// (0x0003d792) popup_call3_audio_in_window_g

0x4c23,	// (0x00032d9e) popup_call3_audio_in_window_t1_ParamLimits

0x4c23,	// (0x00032d9e) popup_call3_audio_in_window_t1

0x4c61,	// (0x00032ddc) popup_call3_audio_in_window_t2_ParamLimits

0x4c61,	// (0x00032ddc) popup_call3_audio_in_window_t2

0x4c9f,	// (0x00032e1a) popup_call3_audio_in_window_t3_ParamLimits

0x4c9f,	// (0x00032e1a) popup_call3_audio_in_window_t3

0x0002,

0xf620,	// (0x0003d79b) popup_call3_audio_in_window_t_ParamLimits

0xf620,	// (0x0003d79b) popup_call3_audio_in_window_t

0xaeef,	// (0x0003906a) bg_popup_call3_rect_pane

0xc150,	// (0x0003a2cb) bg_popup_call3_rect_pane_g1

0xa383,	// (0x000384fe) bg_popup_call3_rect_pane_g2

0xc158,	// (0x0003a2d3) bg_popup_call3_rect_pane_g3

0xc160,	// (0x0003a2db) bg_popup_call3_rect_pane_g4

0xc168,	// (0x0003a2e3) bg_popup_call3_rect_pane_g5

0xc170,	// (0x0003a2eb) bg_popup_call3_rect_pane_g6

0xc178,	// (0x0003a2f3) bg_popup_call3_rect_pane_g7

0x3e02,	// (0x00031f7d) mup_visualizer_osc_pane

0xafbc,	// (0x00039137) mup_visualizer_spec_pane

0x4b6e,	// (0x00032ce9) call3_video_qcif_pane_ParamLimits

0x4b6e,	// (0x00032ce9) call3_video_qcif_pane

0x4b7f,	// (0x00032cfa) call3_video_qcif_uncrop_pane_ParamLimits

0x4b7f,	// (0x00032cfa) call3_video_qcif_uncrop_pane

0x4b8d,	// (0x00032d08) call3_video_subqcif_pane_ParamLimits

0x4b8d,	// (0x00032d08) call3_video_subqcif_pane

0x4ba1,	// (0x00032d1c) call3_video_subqcif_uncrop_pane_ParamLimits

0x4ba1,	// (0x00032d1c) call3_video_subqcif_uncrop_pane

0x4c12,	// (0x00032d8d) popup_call3_audio_in_window_g4_ParamLimits

0x4c12,	// (0x00032d8d) popup_call3_audio_in_window_g4

0x4b0b,	// (0x00032c86) mup_spec_half_pane

0x4b14,	// (0x00032c8f) mup_spec_half_pane_cp

0xc3b5,	// (0x0003a530) mup_osc_middle_pane

0xc3be,	// (0x0003a539) mup_visualizer_osc_pane_g1

0x4aeb,	// (0x00032c66) mup_spec_bar_pane_ParamLimits

0x4aeb,	// (0x00032c66) mup_spec_bar_pane

0xc3a2,	// (0x0003a51d) mup_spec_bar_pane_g1

0xc3ac,	// (0x0003a527) mup_spec_bar_pane_g2

0x0001,

0xf60b,	// (0x0003d786) mup_spec_bar_pane_g

0x1d01,	// (0x0002fe7c) aid_cale_week_size_cell_pane_ParamLimits

0x1d1b,	// (0x0002fe96) bg_cale_heading_pane_ParamLimits

0xa3c0,	// (0x0003853b) bg_cale_pane_cp01_ParamLimits

0x1d39,	// (0x0002feb4) cale_week_corner_pane_ParamLimits

0x1d58,	// (0x0002fed3) cale_week_day_heading_pane_ParamLimits

0x1d7b,	// (0x0002fef6) cale_week_scroll_pane_g1_ParamLimits

0x1d94,	// (0x0002ff0f) cale_week_scroll_pane_g2_ParamLimits

0x1dac,	// (0x0002ff27) cale_week_scroll_pane_g3_ParamLimits

0x1dc4,	// (0x0002ff3f) cale_week_scroll_pane_g4_ParamLimits

0x1ddc,	// (0x0002ff57) cale_week_scroll_pane_g5_ParamLimits

0x1df8,	// (0x0002ff73) cale_week_scroll_pane_g6_ParamLimits

0x1e18,	// (0x0002ff93) cale_week_scroll_pane_g7_ParamLimits

0x1e38,	// (0x0002ffb3) cale_week_scroll_pane_g8_ParamLimits

0x1e5c,	// (0x0002ffd7) cale_week_scroll_pane_g9_ParamLimits

0x1e74,	// (0x0002ffef) cale_week_scroll_pane_g10_ParamLimits

0x1e8c,	// (0x00030007) cale_week_scroll_pane_g11_ParamLimits

0x1ea4,	// (0x0003001f) cale_week_scroll_pane_g12_ParamLimits

0x1ebc,	// (0x00030037) cale_week_scroll_pane_g13_ParamLimits

0x1ebc,	// (0x00030037) cale_week_scroll_pane_g14_ParamLimits

0x1ebc,	// (0x00030037) cale_week_scroll_pane_g15_ParamLimits

0xf1b3,	// (0x0003d32e) cale_week_scroll_pane_g_ParamLimits

0x1ed4,	// (0x0003004f) cale_week_time_pane_ParamLimits

0x1ef8,	// (0x00030073) grid_cale_week_pane_ParamLimits

0xa3de,	// (0x00038559) listscroll_cale_week_pane_t1

0xa3f0,	// (0x0003856b) scroll_pane_cp08_ParamLimits

0x2bda,	// (0x00030d55) cale_month_corner_pane_ParamLimits

0xa789,	// (0x00038904) cale_month_pane_t1

0x2ffa,	// (0x00031175) cale_month_week_pane_ParamLimits

0x38a7,	// (0x00031a22) popup_call_status_window_g1_ParamLimits

0x38bb,	// (0x00031a36) popup_call_status_window_g2_ParamLimits

0x38cf,	// (0x00031a4a) popup_call_status_window_g3_ParamLimits

0xf35b,	// (0x0003d4d6) popup_call_status_window_g_ParamLimits

0xab5d,	// (0x00038cd8) aid_call2_pane

0x4081,	// (0x000321fc) msg_header_pane_g1

0x4203,	// (0x0003237e) postcard_address2_pane_ParamLimits

0x4203,	// (0x0003237e) postcard_address2_pane

0x4215,	// (0x00032390) postcard_message2_pane_ParamLimits

0x4215,	// (0x00032390) postcard_message2_pane

0x4a99,	// (0x00032c14) message2_row_pane_ParamLimits

0x4a99,	// (0x00032c14) message2_row_pane

0x4ab8,	// (0x00032c33) address2_row_pane_ParamLimits

0x4ab8,	// (0x00032c33) address2_row_pane

0xc370,	// (0x0003a4eb) postcard_message2_row_pane_g1

0xc378,	// (0x0003a4f3) postcard_message2_row_pane_t1

0xc370,	// (0x0003a4eb) address2_row_pane_g1

0xc378,	// (0x0003a4f3) address2_row_pane_t1

0x04de,	// (0x0002e659) aid_size_cell_vorec

0x9f51,	// (0x000380cc) main_rss_pane

0x4acb,	// (0x00032c46) rss_list_single_pane_ParamLimits

0x4acb,	// (0x00032c46) rss_list_single_pane

0xc386,	// (0x0003a501) rss_list_single_pane_t1

0xc394,	// (0x0003a50f) rss_list_single_pane_t2

0x0001,

0xf606,	// (0x0003d781) rss_list_single_pane_t

0x9f51,	// (0x000380cc) main_camera2_pane

0x9f51,	// (0x000380cc) main_video2_pane

0x08ae,	// (0x0002ea29) cams_zoom_pane_cp2_ParamLimits

0x08ae,	// (0x0002ea29) cams_zoom_pane_cp2

0x08ce,	// (0x0002ea49) image2_vga_pane_ParamLimits

0x08ce,	// (0x0002ea49) image2_vga_pane

0x091f,	// (0x0002ea9a) main_camera2_pane_g1_ParamLimits

0x091f,	// (0x0002ea9a) main_camera2_pane_g1

0x093f,	// (0x0002eaba) main_camera2_pane_g2_ParamLimits

0x093f,	// (0x0002eaba) main_camera2_pane_g2

0x095f,	// (0x0002eada) main_camera2_pane_g3_ParamLimits

0x095f,	// (0x0002eada) main_camera2_pane_g3

0x097f,	// (0x0002eafa) main_camera2_pane_g4_ParamLimits

0x097f,	// (0x0002eafa) main_camera2_pane_g4

0x099f,	// (0x0002eb1a) main_camera2_pane_g5_ParamLimits

0x099f,	// (0x0002eb1a) main_camera2_pane_g5

0x09bf,	// (0x0002eb3a) main_camera2_pane_g6_ParamLimits

0x09bf,	// (0x0002eb3a) main_camera2_pane_g6

0x09df,	// (0x0002eb5a) main_camera2_pane_g7_ParamLimits

0x09df,	// (0x0002eb5a) main_camera2_pane_g7

0x09ff,	// (0x0002eb7a) main_camera2_pane_g8_ParamLimits

0x09ff,	// (0x0002eb7a) main_camera2_pane_g8

0x0008,

0xf627,	// (0x0003d7a2) main_camera2_pane_g_ParamLimits

0xf627,	// (0x0003d7a2) main_camera2_pane_g

0x0a3f,	// (0x0002ebba) main_camera2_pane_t1_ParamLimits

0x0a3f,	// (0x0002ebba) main_camera2_pane_t1

0x0a74,	// (0x0002ebef) main_camera2_pane_t2_ParamLimits

0x0a74,	// (0x0002ebef) main_camera2_pane_t2

0x0a9a,	// (0x0002ec15) main_camera2_pane_t3_ParamLimits

0x0a9a,	// (0x0002ec15) main_camera2_pane_t3

0x0af8,	// (0x0002ec73) main_camera2_pane_t4_ParamLimits

0x0af8,	// (0x0002ec73) main_camera2_pane_t4

0x0006,

0xf63a,	// (0x0003d7b5) main_camera2_pane_t_ParamLimits

0xf63a,	// (0x0003d7b5) main_camera2_pane_t

0x0b8a,	// (0x0002ed05) cams_zoom_pane_cp4_ParamLimits

0x0b8a,	// (0x0002ed05) cams_zoom_pane_cp4

0x0ba0,	// (0x0002ed1b) image2_cif_pane_ParamLimits

0x0ba0,	// (0x0002ed1b) image2_cif_pane

0x0bcb,	// (0x0002ed46) image2_subqcif_pane_ParamLimits

0x0bcb,	// (0x0002ed46) image2_subqcif_pane

0x0be5,	// (0x0002ed60) main_video2_pane_g1_ParamLimits

0x0be5,	// (0x0002ed60) main_video2_pane_g1

0x0bff,	// (0x0002ed7a) main_video2_pane_g2_ParamLimits

0x0bff,	// (0x0002ed7a) main_video2_pane_g2

0x0c15,	// (0x0002ed90) main_video2_pane_g3_ParamLimits

0x0c15,	// (0x0002ed90) main_video2_pane_g3

0x0c2b,	// (0x0002eda6) main_video2_pane_g4_ParamLimits

0x0c2b,	// (0x0002eda6) main_video2_pane_g4

0x0c41,	// (0x0002edbc) main_video2_pane_g5_ParamLimits

0x0c41,	// (0x0002edbc) main_video2_pane_g5

0x0c57,	// (0x0002edd2) main_video2_pane_g6_ParamLimits

0x0c57,	// (0x0002edd2) main_video2_pane_g6

0x0005,

0xf649,	// (0x0003d7c4) main_video2_pane_g_ParamLimits

0xf649,	// (0x0003d7c4) main_video2_pane_g

0x0c71,	// (0x0002edec) main_video2_pane_t1_ParamLimits

0x0c71,	// (0x0002edec) main_video2_pane_t1

0x0c95,	// (0x0002ee10) main_video2_pane_t2_ParamLimits

0x0c95,	// (0x0002ee10) main_video2_pane_t2

0x0ce3,	// (0x0002ee5e) main_video2_pane_t3_ParamLimits

0x0ce3,	// (0x0002ee5e) main_video2_pane_t3

0x0002,

0xf656,	// (0x0003d7d1) main_video2_pane_t_ParamLimits

0xf656,	// (0x0003d7d1) main_video2_pane_t

0x483b,	// (0x000329b6) call_muted_g2

0x0001,

0xf5f8,	// (0x0003d773) call_muted_g

0x9f51,	// (0x000380cc) main_mup2_pane

0x4d27,	// (0x00032ea2) main_mup2_pane_g1_ParamLimits

0x4d27,	// (0x00032ea2) main_mup2_pane_g1

0x4d33,	// (0x00032eae) main_mup2_pane_g2_ParamLimits

0x4d33,	// (0x00032eae) main_mup2_pane_g2

0x4fa2,	// (0x0003311d) main_mup_pane_g13_cp1

0x4faa,	// (0x00033125) mup_volume_pane_cp1

0x4d4f,	// (0x00032eca) main_mup2_pane_g4_ParamLimits

0x4d4f,	// (0x00032eca) main_mup2_pane_g4

0x4d61,	// (0x00032edc) main_mup2_pane_g5_ParamLimits

0x4d61,	// (0x00032edc) main_mup2_pane_g5

0x4d73,	// (0x00032eee) main_mup2_pane_g6_ParamLimits

0x4d73,	// (0x00032eee) main_mup2_pane_g6

0x4d85,	// (0x00032f00) main_mup2_pane_g7_ParamLimits

0x4d85,	// (0x00032f00) main_mup2_pane_g7

0x0006,

0xf65d,	// (0x0003d7d8) main_mup2_pane_g_ParamLimits

0xf65d,	// (0x0003d7d8) main_mup2_pane_g

0x4d9d,	// (0x00032f18) main_mup2_pane_t1_ParamLimits

0x4d9d,	// (0x00032f18) main_mup2_pane_t1

0x4db3,	// (0x00032f2e) main_mup2_pane_t2_ParamLimits

0x4db3,	// (0x00032f2e) main_mup2_pane_t2

0x4dc9,	// (0x00032f44) main_mup2_pane_t3_ParamLimits

0x4dc9,	// (0x00032f44) main_mup2_pane_t3

0x4ddf,	// (0x00032f5a) main_mup2_pane_t4_ParamLimits

0x4ddf,	// (0x00032f5a) main_mup2_pane_t4

0x4df7,	// (0x00032f72) main_mup2_pane_t5_ParamLimits

0x4df7,	// (0x00032f72) main_mup2_pane_t5

0x4e0f,	// (0x00032f8a) main_mup2_pane_t6_ParamLimits

0x4e0f,	// (0x00032f8a) main_mup2_pane_t6

0x0005,

0xf66c,	// (0x0003d7e7) main_mup2_pane_t_ParamLimits

0xf66c,	// (0x0003d7e7) main_mup2_pane_t

0x4e3f,	// (0x00032fba) mup2_visualizer_pane_ParamLimits

0x4e3f,	// (0x00032fba) mup2_visualizer_pane

0x4e6d,	// (0x00032fe8) mup_progress_pane_cp_ParamLimits

0x4e6d,	// (0x00032fe8) mup_progress_pane_cp

0x4f8d,	// (0x00033108) mup_volume_pane_cp_ParamLimits

0x4f8d,	// (0x00033108) mup_volume_pane_cp

0x4e81,	// (0x00032ffc) mup2_visualizer_pane_g1_ParamLimits

0x4e81,	// (0x00032ffc) mup2_visualizer_pane_g1

0xc3f5,	// (0x0003a570) mup2_visualizer_pane_g2_ParamLimits

0xc3f5,	// (0x0003a570) mup2_visualizer_pane_g2

0x4e98,	// (0x00033013) mup2_visualizer_pane_g3_ParamLimits

0x4e98,	// (0x00033013) mup2_visualizer_pane_g3

0x0002,

0xf679,	// (0x0003d7f4) mup2_visualizer_pane_g_ParamLimits

0xf679,	// (0x0003d7f4) mup2_visualizer_pane_g

0xb222,	// (0x0003939d) aid_size_cell_fmradio

0x05a4,	// (0x0002e71f) aid_height_parent_landcape

0xa5e7,	// (0x00038762) wml_content_pane_cp

0xa5ef,	// (0x0003876a) wml_tabs_pane

0xa5f8,	// (0x00038773) popup_wml_miniature_window

0xa600,	// (0x0003877b) scroll_pane_cp021

0xa614,	// (0x0003878f) wml_content_pane_comp8

0x9f51,	// (0x000380cc) bg_popup_sub_pane_cp05

0xc413,	// (0x0003a58e) popup_wml_miniature_window_g1

0xc41b,	// (0x0003a596) wml_miniature_view_pane

0x4ea4,	// (0x0003301f) aid_size_wml_view

0x4eac,	// (0x00033027) wml_miniature_view_pane_g1

0x4eb5,	// (0x00033030) wml_miniature_view_pane_g2

0x4ebe,	// (0x00033039) wml_miniature_view_pane_g3

0x4ec6,	// (0x00033041) wml_miniature_view_pane_g4

0x4ece,	// (0x00033049) wml_miniature_view_pane_g5

0x4ed6,	// (0x00033051) wml_miniature_view_pane_g6

0x4ede,	// (0x00033059) wml_miniature_view_pane_g7

0x4ee6,	// (0x00033061) wml_miniature_view_pane_g8

0x0007,

0xf680,	// (0x0003d7fb) wml_miniature_view_pane_g

0xc423,	// (0x0003a59e) background_graphic_ParamLimits

0xc423,	// (0x0003a59e) background_graphic

0xc42f,	// (0x0003a5aa) wml_tabs_2_pane

0xc438,	// (0x0003a5b3) wml_tabs_3_pane_ParamLimits

0xc438,	// (0x0003a5b3) wml_tabs_3_pane

0xc44a,	// (0x0003a5c5) wml_tabs_4_pane_ParamLimits

0xc44a,	// (0x0003a5c5) wml_tabs_4_pane

0xc460,	// (0x0003a5db) wml_tabs_5_pane_ParamLimits

0xc460,	// (0x0003a5db) wml_tabs_5_pane

0xc47a,	// (0x0003a5f5) wml_tabs_pane_g2_ParamLimits

0xc47a,	// (0x0003a5f5) wml_tabs_pane_g2

0xc48e,	// (0x0003a609) wml_tabs_pane_g3_ParamLimits

0xc48e,	// (0x0003a609) wml_tabs_pane_g3

0x4eee,	// (0x00033069) wml_tabs_2_active_pane_ParamLimits

0x4eee,	// (0x00033069) wml_tabs_2_active_pane

0x4f02,	// (0x0003307d) wml_tabs_2_passive_pane_ParamLimits

0x4f02,	// (0x0003307d) wml_tabs_2_passive_pane

0x4f16,	// (0x00033091) wml_tabs_3_active_pane_cp_ParamLimits

0x4f16,	// (0x00033091) wml_tabs_3_active_pane_cp

0x4f2b,	// (0x000330a6) wml_tabs_3_passive_pane_ParamLimits

0x4f2b,	// (0x000330a6) wml_tabs_3_passive_pane

0x4f3e,	// (0x000330b9) wml_tabs_3_passive_pane_cp_ParamLimits

0x4f3e,	// (0x000330b9) wml_tabs_3_passive_pane_cp

0x4f55,	// (0x000330d0) tabs_4_active_pane

0x4f5d,	// (0x000330d8) tabs_4_passive_pane

0x4f67,	// (0x000330e2) tabs_4_passive_pane_cp

0x4f6f,	// (0x000330ea) tabs_4_passive_pane_cp2

0x4708,	// (0x00032883) aid_height_text

0x3dd4,	// (0x00031f4f) mup_volume_cont_pane_ParamLimits

0x3dd4,	// (0x00031f4f) mup_volume_cont_pane

0x19a4,	// (0x0002fb1f) aid_size_cell_pinb

0x19ae,	// (0x0002fb29) aid_size_list_pinb

0x4e59,	// (0x00032fd4) mup2_volume_cont_pane_ParamLimits

0x4e59,	// (0x00032fd4) mup2_volume_cont_pane

0x4f79,	// (0x000330f4) mup2_volume_cont_pane_g1_ParamLimits

0x4f79,	// (0x000330f4) mup2_volume_cont_pane_g1

0x0090,	// (0x0002e20b) aid_size_cell_touch_ParamLimits

0x0090,	// (0x0002e20b) aid_size_cell_touch

0x0278,	// (0x0002e3f3) touch_pane_ParamLimits

0x0278,	// (0x0002e3f3) touch_pane

0x18db,	// (0x0002fa56) main_rss2_pane

0xc4ab,	// (0x0003a626) listscroll_rss2_pane

0xc4b4,	// (0x0003a62f) rss2_navigation_pane

0xc4bc,	// (0x0003a637) list_rss2_pane

0xacac,	// (0x00038e27) scroll_pane_cp22

0xc4c4,	// (0x0003a63f) rss2_navigation_pane_g1

0xc4cd,	// (0x0003a648) rss2_navigation_pane_g2

0xc4d5,	// (0x0003a650) rss2_navigation_pane_g3

0x0002,

0xf691,	// (0x0003d80c) rss2_navigation_pane_g

0xc4dd,	// (0x0003a658) rss2_navigation_pane_t1

0x4fb2,	// (0x0003312d) rss2_list_single_pane_ParamLimits

0x4fb2,	// (0x0003312d) rss2_list_single_pane

0xc4eb,	// (0x0003a666) rss2_list_single_pane_t2

0xc4f9,	// (0x0003a674) rss2_list_single_pane_t3_ParamLimits

0xc4f9,	// (0x0003a674) rss2_list_single_pane_t3

0xc516,	// (0x0003a691) rss2_list_single_pane_t4

0x368d,	// (0x00031808) smil_status_pane_g1

0x18c1,	// (0x0002fa3c) main_image2_pane_ParamLimits

0x18c1,	// (0x0002fa3c) main_image2_pane

0x0a1f,	// (0x0002eb9a) main_camera2_pane_g9_ParamLimits

0x0a1f,	// (0x0002eb9a) main_camera2_pane_g9

0x0b4d,	// (0x0002ecc8) main_camera2_pane_t5_ParamLimits

0x0b4d,	// (0x0002ecc8) main_camera2_pane_t5

0x4cf7,	// (0x00032e72) main_camera2_pane_t6_ParamLimits

0x4cf7,	// (0x00032e72) main_camera2_pane_t6

0x4fc9,	// (0x00033144) main_image2_pane_g1_ParamLimits

0x4fc9,	// (0x00033144) main_image2_pane_g1

0x4442,	// (0x000325bd) smil2_video_pane_ParamLimits

0x4442,	// (0x000325bd) smil2_video_pane

0x1836,	// (0x0002f9b1) aid_zoom_text_primary_cp

0x18b7,	// (0x0002fa32) popup_preview_fixed_window

0xa550,	// (0x000386cb) im_reading_pane_g1

0x0896,	// (0x0002ea11) cams2_bc_adjust_pane_cp_ParamLimits

0x0896,	// (0x0002ea11) cams2_bc_adjust_pane_cp

0x0b7c,	// (0x0002ecf7) cams2_bc_adjust_pane_ParamLimits

0x0b7c,	// (0x0002ecf7) cams2_bc_adjust_pane

0xcecd,	// (0x0003b048) cams2_bc_adjust_pane_g1

0x4fdf,	// (0x0003315a) cams2_slider_pane

0x4fe8,	// (0x00033163) cams2_slider_pane_g1

0x4ff1,	// (0x0003316c) cams2_slider_pane_g2

0x0006,

0xf698,	// (0x0003d813) cams2_slider_pane_g

0x02e8,	// (0x0002e463) calc_display_pane_ParamLimits

0x0310,	// (0x0002e48b) calc_paper_pane_ParamLimits

0x0333,	// (0x0002e4ae) grid_calc_pane_ParamLimits

0x3934,	// (0x00031aaf) popup_clock_digital_window_t1_ParamLimits

0xb1bf,	// (0x0003933a) main_image_pane_t1

0x02ca,	// (0x0002e445) aid_size_cell_calc_ParamLimits

0x02ca,	// (0x0002e445) aid_size_cell_calc

0x05fc,	// (0x0002e777) popup_blid_sat_info2_window_ParamLimits

0x05fc,	// (0x0002e777) popup_blid_sat_info2_window

0xc52c,	// (0x0003a6a7) aid_size_cell_blid

0xc534,	// (0x0003a6af) bg_popup_window_pane_cp07

0xc557,	// (0x0003a6d2) grid_popup_blid_pane

0xc561,	// (0x0003a6dc) heading_pane_cp05_ParamLimits

0xc561,	// (0x0003a6dc) heading_pane_cp05

0xc62b,	// (0x0003a7a6) cell_popup_blid_pane_ParamLimits

0xc62b,	// (0x0003a7a6) cell_popup_blid_pane

0xc651,	// (0x0003a7cc) cell_popup_blid_pane_g1

0xc659,	// (0x0003a7d4) cell_popup_blid_pane_t1

0x4e29,	// (0x00032fa4) mup2_indicator_pane_ParamLimits

0x4e29,	// (0x00032fa4) mup2_indicator_pane

0xaeef,	// (0x0003906a) mup2_visualizer_osc_pane

0xc401,	// (0x0003a57c) mup2_visualizer_spec_pane_ParamLimits

0xc401,	// (0x0003a57c) mup2_visualizer_spec_pane

0x500b,	// (0x00033186) mup2_spec_half_pane

0x5014,	// (0x0003318f) mup2_spec_half_pane_cp

0x501c,	// (0x00033197) mup2_spec_bar_pane_ParamLimits

0x501c,	// (0x00033197) mup2_spec_bar_pane

0xc3a2,	// (0x0003a51d) mup2_spec_bar_pane_g1

0xc3ac,	// (0x0003a527) mup2_spec_bar_pane_g2

0x0001,

0xf60b,	// (0x0003d786) mup2_spec_bar_pane_g

0x503c,	// (0x000331b7) mup2_osc_middle_pane

0xc3be,	// (0x0003a539) mup2_visualizer_osc_pane_g1

0x9b5e,	// (0x00037cd9) popup_number_entry_window_t1_ParamLimits

0x9b71,	// (0x00037cec) popup_number_entry_window_t2_ParamLimits

0x9b83,	// (0x00037cfe) popup_number_entry_window_t3_ParamLimits

0x18e5,	// (0x0002fa60) popup_number_entry_window_t5_ParamLimits

0x18e5,	// (0x0002fa60) popup_number_entry_window_t5

0xf0cd,	// (0x0003d248) popup_number_entry_window_t_ParamLimits

0x9b95,	// (0x00037d10) text_title_cp2_ParamLimits

0x40d0,	// (0x0003224b) aid_hotspot_pointer_text2_pane

0x4126,	// (0x000322a1) main_viewer_pane_g9_ParamLimits

0x4126,	// (0x000322a1) main_viewer_pane_g9

0xa789,	// (0x00038904) cale_month_pane_t1_ParamLimits

0xa7c6,	// (0x00038941) bg_cale_pane_ParamLimits

0xa7de,	// (0x00038959) list_cale_pane_ParamLimits

0xa7ef,	// (0x0003896a) listscroll_cale_day_pane_t1

0xa81d,	// (0x00038998) scroll_pane_cp09_ParamLimits

0x3e0a,	// (0x00031f85) main_mup_eq_pane_t1_ParamLimits

0x3e0a,	// (0x00031f85) main_mup_eq_pane_t1

0x3e24,	// (0x00031f9f) main_mup_eq_pane_t2_ParamLimits

0x3e24,	// (0x00031f9f) main_mup_eq_pane_t2

0x3e3e,	// (0x00031fb9) main_mup_eq_pane_t3_ParamLimits

0x3e3e,	// (0x00031fb9) main_mup_eq_pane_t3

0x3e5a,	// (0x00031fd5) main_mup_eq_pane_t4_ParamLimits

0x3e5a,	// (0x00031fd5) main_mup_eq_pane_t4

0x3e76,	// (0x00031ff1) main_mup_eq_pane_t5_ParamLimits

0x3e76,	// (0x00031ff1) main_mup_eq_pane_t5

0x3e92,	// (0x0003200d) main_mup_eq_pane_t6_ParamLimits

0x3e92,	// (0x0003200d) main_mup_eq_pane_t6

0x3ea6,	// (0x00032021) main_mup_eq_pane_t7_ParamLimits

0x3ea6,	// (0x00032021) main_mup_eq_pane_t7

0x3eba,	// (0x00032035) main_mup_eq_pane_t8_ParamLimits

0x3eba,	// (0x00032035) main_mup_eq_pane_t8

0x3ece,	// (0x00032049) main_mup_eq_pane_t9_ParamLimits

0x3ece,	// (0x00032049) main_mup_eq_pane_t9

0x3ee8,	// (0x00032063) main_mup_eq_pane_t10_ParamLimits

0x3ee8,	// (0x00032063) main_mup_eq_pane_t10

0x0009,

0xf45a,	// (0x0003d5d5) main_mup_eq_pane_t_ParamLimits

0xf45a,	// (0x0003d5d5) main_mup_eq_pane_t

0x3f97,	// (0x00032112) mup_equalizer_pane_cp5_ParamLimits

0x3fab,	// (0x00032126) mup_equalizer_pane_cp6_ParamLimits

0x3fbf,	// (0x0003213a) mup_equalizer_pane_cp7_ParamLimits

0x18db,	// (0x0002fa56) main_gallery_pane

0xc3c7,	// (0x0003a542) smil2_volume_pane

0xc3cf,	// (0x0003a54a) smil_status_volume_pane_g1_ParamLimits

0xc3e2,	// (0x0003a55d) smil_status_volume_pane_g2_ParamLimits

0x4b1c,	// (0x00032c97) smil_status_volume_pane_g3_ParamLimits

0xf610,	// (0x0003d78b) smil_status_volume_pane_g_ParamLimits

0xc534,	// (0x0003a6af) bg_popup_window_pane_cp07_ParamLimits

0xc542,	// (0x0003a6bd) blid_firmament_pane

0x5045,	// (0x000331c0) aid_size_cell_gallery_ParamLimits

0x5045,	// (0x000331c0) aid_size_cell_gallery

0x505b,	// (0x000331d6) grid_gallery_pane_ParamLimits

0x505b,	// (0x000331d6) grid_gallery_pane

0x5074,	// (0x000331ef) cell_gallery_pane_ParamLimits

0x5074,	// (0x000331ef) cell_gallery_pane

0xc667,	// (0x0003a7e2) bg_cell_gallery_focus_pane_ParamLimits

0xc667,	// (0x0003a7e2) bg_cell_gallery_focus_pane

0xc679,	// (0x0003a7f4) cell_gallery_pane_g1_ParamLimits

0xc679,	// (0x0003a7f4) cell_gallery_pane_g1

0x50bd,	// (0x00033238) cell_gallery_pane_g2_ParamLimits

0x50bd,	// (0x00033238) cell_gallery_pane_g2

0x50ca,	// (0x00033245) cell_gallery_pane_g3_ParamLimits

0x50ca,	// (0x00033245) cell_gallery_pane_g3

0xc685,	// (0x0003a800) cell_gallery_pane_g4_ParamLimits

0xc685,	// (0x0003a800) cell_gallery_pane_g4

0x0003,

0xf6be,	// (0x0003d839) cell_gallery_pane_g_ParamLimits

0xf6be,	// (0x0003d839) cell_gallery_pane_g

0xc691,	// (0x0003a80c) bg_cell_gallery_focus_pane_g1

0xc699,	// (0x0003a814) bg_cell_gallery_focus_pane_g2

0xc6a1,	// (0x0003a81c) bg_cell_gallery_focus_pane_g3

0xc6a9,	// (0x0003a824) bg_cell_gallery_focus_pane_g4

0xc6b1,	// (0x0003a82c) bg_cell_gallery_focus_pane_g5

0xc6b9,	// (0x0003a834) bg_cell_gallery_focus_pane_g6

0xc6c1,	// (0x0003a83c) bg_cell_gallery_focus_pane_g7

0xc6c9,	// (0x0003a844) bg_cell_gallery_focus_pane_g8

0x0007,

0xf6c7,	// (0x0003d842) bg_cell_gallery_focus_pane_g

0xc6d1,	// (0x0003a84c) aid_firma_cardinal

0xc6e5,	// (0x0003a860) blid_firmament_pane_t1

0xc6fc,	// (0x0003a877) blid_firmament_pane_t2

0xc713,	// (0x0003a88e) blid_firmament_pane_t3

0xc72a,	// (0x0003a8a5) blid_firmament_pane_t4

0x0003,

0xf6d8,	// (0x0003d853) blid_firmament_pane_t

0xc741,	// (0x0003a8bc) blid_sat_info_pane

0xc751,	// (0x0003a8cc) blid_sat_info_pane_g1

0xc751,	// (0x0003a8cc) blid_sat_info_pane_g2

0x0001,

0xf6e1,	// (0x0003d85c) blid_sat_info_pane_g

0xc75b,	// (0x0003a8d6) blid_sat_info_pane_t1

0xc769,	// (0x0003a8e4) smil2_volume_content_pane

0xc772,	// (0x0003a8ed) smil2_volume_pane_g1

0xa31a,	// (0x00038495) smil2_volume_content_pane_g1

0xc77a,	// (0x0003a8f5) smil2_volume_content_pane_g2

0xc783,	// (0x0003a8fe) smil2_volume_content_pane_g3

0xc78c,	// (0x0003a907) smil2_volume_content_pane_g4

0xc795,	// (0x0003a910) smil2_volume_content_pane_g5

0xc79e,	// (0x0003a919) smil2_volume_content_pane_g6

0xc7a7,	// (0x0003a922) smil2_volume_content_pane_g7

0xc7b0,	// (0x0003a92b) smil2_volume_content_pane_g8

0xc7b9,	// (0x0003a934) smil2_volume_content_pane_g9

0xc7c2,	// (0x0003a93d) smil2_volume_content_pane_g10

0x0009,

0xf6e6,	// (0x0003d861) smil2_volume_content_pane_g

0x1fac,	// (0x00030127) cale_week_day_heading_pane_t1_ParamLimits

0x1ff6,	// (0x00030171) cale_week_day_heading_pane_t2_ParamLimits

0x2045,	// (0x000301c0) cale_week_day_heading_pane_t3_ParamLimits

0x2094,	// (0x0003020f) cale_week_day_heading_pane_t4_ParamLimits

0x20e3,	// (0x0003025e) cale_week_day_heading_pane_t5_ParamLimits

0x213a,	// (0x000302b5) cale_week_day_heading_pane_t6_ParamLimits

0x2191,	// (0x0003030c) cale_week_day_heading_pane_t7_ParamLimits

0xf1d2,	// (0x0003d34d) cale_week_day_heading_pane_t_ParamLimits

0xa40d,	// (0x00038588) bg_cale_side_pane_ParamLimits

0x0402,	// (0x0002e57d) cale_week_time_pane_t1_ParamLimits

0x041c,	// (0x0002e597) cale_week_time_pane_t2_ParamLimits

0x0436,	// (0x0002e5b1) cale_week_time_pane_t3_ParamLimits

0x0450,	// (0x0002e5cb) cale_week_time_pane_t4_ParamLimits

0x046a,	// (0x0002e5e5) cale_week_time_pane_t5_ParamLimits

0x0484,	// (0x0002e5ff) cale_week_time_pane_t6_ParamLimits

0x049e,	// (0x0002e619) cale_week_time_pane_t7_ParamLimits

0x04be,	// (0x0002e639) cale_week_time_pane_t8_ParamLimits

0xf1e1,	// (0x0003d35c) cale_week_time_pane_t_ParamLimits

0x21db,	// (0x00030356) cell_cale_week_pane_g2_ParamLimits

0xa40d,	// (0x00038588) bg_cale_side_pane_cp01_ParamLimits

0x3488,	// (0x00031603) cale_month_week_pane_t1_ParamLimits

0x34a1,	// (0x0003161c) cale_month_week_pane_t2_ParamLimits

0x34ba,	// (0x00031635) cale_month_week_pane_t3_ParamLimits

0x34d3,	// (0x0003164e) cale_month_week_pane_t4_ParamLimits

0x34ec,	// (0x00031667) cale_month_week_pane_t5_ParamLimits

0x3505,	// (0x00031680) cale_month_week_pane_t6_ParamLimits

0xf2ba,	// (0x0003d435) cale_month_week_pane_t_ParamLimits

0x3676,	// (0x000317f1) cell_cale_month_pane_g1_ParamLimits

0x18db,	// (0x0002fa56) main_cale_event_viewer_pane

0x9b34,	// (0x00037caf) listscroll_cale_event_viewer_pane

0xc7cb,	// (0x0003a946) list_cale_ev_pane

0xc7d3,	// (0x0003a94e) scroll_pane_cp023

0xc7df,	// (0x0003a95a) field_cale_ev_pane_ParamLimits

0xc7df,	// (0x0003a95a) field_cale_ev_pane

0xc7fb,	// (0x0003a976) field_cale_ev_content_pane_ParamLimits

0xc7fb,	// (0x0003a976) field_cale_ev_content_pane

0xc807,	// (0x0003a982) field_cale_ev_pane_g1_ParamLimits

0xc807,	// (0x0003a982) field_cale_ev_pane_g1

0xc813,	// (0x0003a98e) field_cale_ev_pane_g2_ParamLimits

0xc813,	// (0x0003a98e) field_cale_ev_pane_g2

0xc82b,	// (0x0003a9a6) field_cale_ev_pane_g3_ParamLimits

0xc82b,	// (0x0003a9a6) field_cale_ev_pane_g3

0x0002,

0xf6fb,	// (0x0003d876) field_cale_ev_pane_g_ParamLimits

0xf6fb,	// (0x0003d876) field_cale_ev_pane_g

0xc843,	// (0x0003a9be) field_cale_ev_pane_t1_ParamLimits

0xc843,	// (0x0003a9be) field_cale_ev_pane_t1

0xc85a,	// (0x0003a9d5) field_cale_ev_content_pane_t1_ParamLimits

0xc85a,	// (0x0003a9d5) field_cale_ev_content_pane_t1

0x4076,	// (0x000321f1) bg_button_pane_cp01

0x1cef,	// (0x0002fe6a) listscroll_cale_week_pane_ParamLimits

0xa3b7,	// (0x00038532) popup_toolbar_window_cp01

0xa3de,	// (0x00038559) listscroll_cale_week_pane_t1_ParamLimits

0x1cef,	// (0x0002fe6a) listscroll_cale_day_pane_ParamLimits

0xa3b7,	// (0x00038532) popup_toolbar_window_cp02

0xa7ef,	// (0x0003896a) listscroll_cale_day_pane_t1_ParamLimits

0x05c2,	// (0x0002e73d) main_cale_month_pane_ParamLimits

0x4a2c,	// (0x00032ba7) popup_toolbar_window_cp03_ParamLimits

0x4a2c,	// (0x00032ba7) popup_toolbar_window_cp03

0x4306,	// (0x00032481) main_image_pane_g2_ParamLimits

0x4306,	// (0x00032481) main_image_pane_g2

0x4317,	// (0x00032492) main_image_pane_g3_ParamLimits

0x4317,	// (0x00032492) main_image_pane_g3

0x0002,

0xf4ec,	// (0x0003d667) main_image_pane_g_ParamLimits

0xf4ec,	// (0x0003d667) main_image_pane_g

0xb1bf,	// (0x0003933a) main_image_pane_t1_ParamLimits

0x4328,	// (0x000324a3) main_image_pane_t2_ParamLimits

0x4328,	// (0x000324a3) main_image_pane_t2

0x433a,	// (0x000324b5) main_image_pane_t3_ParamLimits

0x433a,	// (0x000324b5) main_image_pane_t3

0x4362,	// (0x000324dd) main_image_pane_t4_ParamLimits

0x4362,	// (0x000324dd) main_image_pane_t4

0x0003,

0xf4f3,	// (0x0003d66e) main_image_pane_t_ParamLimits

0xf4f3,	// (0x0003d66e) main_image_pane_t

0x4382,	// (0x000324fd) popup_image_details_window_cp01

0x438c,	// (0x00032507) popup_toobar_trans_pane_cp01_ParamLimits

0x438c,	// (0x00032507) popup_toobar_trans_pane_cp01

0x06d3,	// (0x0002e84e) popup_image_details_window_ParamLimits

0x06d3,	// (0x0002e84e) popup_image_details_window

0x49ff,	// (0x00032b7a) popup_image_focus_window

0x0850,	// (0x0002e9cb) camera2_autofocus_pane_ParamLimits

0x0850,	// (0x0002e9cb) camera2_autofocus_pane

0x9b34,	// (0x00037caf) bg_popup_sub_pane_cp06

0xc877,	// (0x0003a9f2) popup_image_focus_window_g1

0xc87f,	// (0x0003a9fa) popup_image_focus_window_g2

0xc887,	// (0x0003aa02) popup_image_focus_window_g3

0xc88f,	// (0x0003aa0a) popup_image_focus_window_g4

0x0003,

0xf702,	// (0x0003d87d) popup_image_focus_window_g

0xc897,	// (0x0003aa12) popup_image_focus_window_t1

0xc8a5,	// (0x0003aa20) popup_image_focus_window_t2

0xc8b5,	// (0x0003aa30) popup_image_focus_window_t3

0x0002,

0xf70b,	// (0x0003d886) popup_image_focus_window_t

0xc8c3,	// (0x0003aa3e) camera2_autofocus_pane_g1

0xa801,	// (0x0003897c) bg_tb_trans_pane_cp01

0xc8d1,	// (0x0003aa4c) popup_image_details_window_g1

0xc8e4,	// (0x0003aa5f) popup_image_details_window_g2

0x0002,

0xf71d,	// (0x0003d898) popup_image_details_window_g

0xc90d,	// (0x0003aa88) popup_image_details_window_t1

0xc91f,	// (0x0003aa9a) popup_image_details_window_t2

0xc938,	// (0x0003aab3) popup_image_details_window_t3

0xc94c,	// (0x0003aac7) popup_image_details_window_t4

0xc967,	// (0x0003aae2) popup_image_details_window_t5

0x0004,

0xf724,	// (0x0003d89f) popup_image_details_window_t

0xa27c,	// (0x000383f7) bg_calc_paper_pane_ParamLimits

0x18db,	// (0x0002fa56) grid_highlight_pane_cp013

0x1b40,	// (0x0002fcbb) list_calc_pane_ParamLimits

0x1b52,	// (0x0002fccd) scroll_pane_cp024

0xa290,	// (0x0003840b) bg_calc_display_pane_ParamLimits

0x0361,	// (0x0002e4dc) calc_display_pane_t1_ParamLimits

0x0373,	// (0x0002e4ee) calc_display_pane_t2_ParamLimits

0x1b5a,	// (0x0002fcd5) calc_display_pane_t3_ParamLimits

0xf154,	// (0x0003d2cf) calc_display_pane_t_ParamLimits

0x03d6,	// (0x0002e551) cell_calc_pane_g2

0x0001,

0xf171,	// (0x0003d2ec) cell_calc_pane_g

0x03df,	// (0x0002e55a) cell_calc_pane_t1

0xa2ef,	// (0x0003846a) grid_highlight_pane_cp02_ParamLimits

0xa305,	// (0x00038480) toolbar_button_pane_cp01_ParamLimits

0xa305,	// (0x00038480) toolbar_button_pane_cp01

0xb204,	// (0x0003937f) temp_image_control_pane_ParamLimits

0xb204,	// (0x0003937f) temp_image_control_pane

0x18c1,	// (0x0002fa3c) main_mp3_pane

0xc981,	// (0x0003aafc) temp_image_control_pane_g1_ParamLimits

0xc981,	// (0x0003aafc) temp_image_control_pane_g1

0xc98f,	// (0x0003ab0a) temp_image_control_pane_g2_ParamLimits

0xc98f,	// (0x0003ab0a) temp_image_control_pane_g2

0xc9a1,	// (0x0003ab1c) temp_image_control_pane_g3_ParamLimits

0xc9a1,	// (0x0003ab1c) temp_image_control_pane_g3

0x5107,	// (0x00033282) temp_image_control_pane_g4_ParamLimits

0x5107,	// (0x00033282) temp_image_control_pane_g4

0x0003,

0xf72f,	// (0x0003d8aa) temp_image_control_pane_g_ParamLimits

0xf72f,	// (0x0003d8aa) temp_image_control_pane_g

0xc981,	// (0x0003aafc) main_mp3_pane_g1

0x511a,	// (0x00033295) main_mp3_pane_g2

0x0007,

0xf738,	// (0x0003d8b3) main_mp3_pane_g

0xc9e4,	// (0x0003ab5f) main_mp3_pane_t1

0xa45f,	// (0x000385da) main_camera_pane_g8_ParamLimits

0xa45f,	// (0x000385da) main_camera_pane_g8

0x24a8,	// (0x00030623) main_video_pane_g7_ParamLimits

0x24a8,	// (0x00030623) main_video_pane_g7

0x4d15,	// (0x00032e90) main_camera2_pane_t7_ParamLimits

0x4d15,	// (0x00032e90) main_camera2_pane_t7

0xa5a7,	// (0x00038722) scroll_pane_cp025_ParamLimits

0xa5a7,	// (0x00038722) scroll_pane_cp025

0xa5bb,	// (0x00038736) scroll_pane_cp026_ParamLimits

0xa5bb,	// (0x00038736) scroll_pane_cp026

0xa5ca,	// (0x00038745) wml_content_pane_ParamLimits

0x18db,	// (0x0002fa56) main_touch_calib_pane

0x51f0,	// (0x0003336b) main_touch_calib_pane_g1

0x5202,	// (0x0003337d) main_touch_calib_pane_g2

0x5214,	// (0x0003338f) main_touch_calib_pane_g3

0x5226,	// (0x000333a1) main_touch_calib_pane_g4

0x0003,

0xf756,	// (0x0003d8d1) main_touch_calib_pane_g

0x5238,	// (0x000333b3) main_touch_calib_pane_t1

0x5252,	// (0x000333cd) main_touch_calib_pane_t2

0x0004,

0xf75f,	// (0x0003d8da) main_touch_calib_pane_t

0xad8a,	// (0x00038f05) mup_progress_pane_cp02

0xadbf,	// (0x00038f3a) navi_pane_g1

0xae7a,	// (0x00038ff5) navi_pane_mp_t3

0x18c1,	// (0x0002fa3c) main_mp3_pane_ParamLimits

0x4a41,	// (0x00032bbc) navi_pane_ParamLimits

0xc981,	// (0x0003aafc) main_mp3_pane_g1_ParamLimits

0x511a,	// (0x00033295) main_mp3_pane_g2_ParamLimits

0x5128,	// (0x000332a3) main_mp3_pane_g3_ParamLimits

0x5128,	// (0x000332a3) main_mp3_pane_g3

0x5136,	// (0x000332b1) main_mp3_pane_g4_ParamLimits

0x5136,	// (0x000332b1) main_mp3_pane_g4

0xc9b1,	// (0x0003ab2c) main_mp3_pane_g5_ParamLimits

0xc9b1,	// (0x0003ab2c) main_mp3_pane_g5

0xc9bf,	// (0x0003ab3a) main_mp3_pane_g6_ParamLimits

0xc9bf,	// (0x0003ab3a) main_mp3_pane_g6

0xc9cc,	// (0x0003ab47) main_mp3_pane_g7_ParamLimits

0xc9cc,	// (0x0003ab47) main_mp3_pane_g7

0xc9d8,	// (0x0003ab53) main_mp3_pane_g8_ParamLimits

0xc9d8,	// (0x0003ab53) main_mp3_pane_g8

0xf738,	// (0x0003d8b3) main_mp3_pane_g_ParamLimits

0x5144,	// (0x000332bf) main_mp3_pane_t2

0x5152,	// (0x000332cd) main_mp3_pane_t3

0xc9f2,	// (0x0003ab6d) main_mp3_pane_t4

0xca00,	// (0x0003ab7b) main_mp3_pane_t5

0x0005,

0xf749,	// (0x0003d8c4) main_mp3_pane_t

0xca0e,	// (0x0003ab89) mup_progress_pane_cp01

0x1836,	// (0x0002f9b1) aid_zoom_text_secondary2

0xc7cb,	// (0x0003a946) list_cale_ev2_pane

0xc7d3,	// (0x0003a94e) scroll_pane_cp023_ParamLimits

0x52a8,	// (0x00033423) field_cale_ev2_pane_ParamLimits

0x52a8,	// (0x00033423) field_cale_ev2_pane

0xca16,	// (0x0003ab91) field_cale_ev2_pane_g1_ParamLimits

0xca16,	// (0x0003ab91) field_cale_ev2_pane_g1

0xca22,	// (0x0003ab9d) field_cale_ev2_pane_g2_ParamLimits

0xca22,	// (0x0003ab9d) field_cale_ev2_pane_g2

0xca3a,	// (0x0003abb5) field_cale_ev2_pane_g3_ParamLimits

0xca3a,	// (0x0003abb5) field_cale_ev2_pane_g3

0x0003,

0xf76a,	// (0x0003d8e5) field_cale_ev2_pane_g_ParamLimits

0xf76a,	// (0x0003d8e5) field_cale_ev2_pane_g

0xca5e,	// (0x0003abd9) field_cale_ev2_pane_t1_ParamLimits

0xca5e,	// (0x0003abd9) field_cale_ev2_pane_t1

0xca75,	// (0x0003abf0) field_cale_ev2_pane_t2_ParamLimits

0xca75,	// (0x0003abf0) field_cale_ev2_pane_t2

0x0001,

0xf773,	// (0x0003d8ee) field_cale_ev2_pane_t_ParamLimits

0xf773,	// (0x0003d8ee) field_cale_ev2_pane_t

0x41b9,	// (0x00032334) main_postcard_pane_g5_ParamLimits

0x41b9,	// (0x00032334) main_postcard_pane_g5

0x41cf,	// (0x0003234a) main_postcard_pane_g6_ParamLimits

0x41cf,	// (0x0003234a) main_postcard_pane_g6

0x2262,	// (0x000303dd) camera2_autofocus_pane_cp_ParamLimits

0x2262,	// (0x000303dd) camera2_autofocus_pane_cp

0x18c1,	// (0x0002fa3c) main_mup3_pane

0x52ea,	// (0x00033465) main_mup3_pane_g1_ParamLimits

0x52ea,	// (0x00033465) main_mup3_pane_g1

0x530c,	// (0x00033487) main_mup3_pane_g2_ParamLimits

0x530c,	// (0x00033487) main_mup3_pane_g2

0x538e,	// (0x00033509) main_mup3_pane_g3_ParamLimits

0x538e,	// (0x00033509) main_mup3_pane_g3

0x53d4,	// (0x0003354f) main_mup3_pane_g4_ParamLimits

0x53d4,	// (0x0003354f) main_mup3_pane_g4

0x541a,	// (0x00033595) main_mup3_pane_g5_ParamLimits

0x541a,	// (0x00033595) main_mup3_pane_g5

0x5462,	// (0x000335dd) main_mup3_pane_g6_ParamLimits

0x5462,	// (0x000335dd) main_mup3_pane_g6

0xca8a,	// (0x0003ac05) main_mup3_pane_g7_ParamLimits

0xca8a,	// (0x0003ac05) main_mup3_pane_g7

0x0007,

0xf783,	// (0x0003d8fe) main_mup3_pane_g_ParamLimits

0xf783,	// (0x0003d8fe) main_mup3_pane_g

0x54e0,	// (0x0003365b) main_mup3_pane_t1_ParamLimits

0x54e0,	// (0x0003365b) main_mup3_pane_t1

0x5554,	// (0x000336cf) main_mup3_pane_t2_ParamLimits

0x5554,	// (0x000336cf) main_mup3_pane_t2

0x5628,	// (0x000337a3) main_mup3_pane_t4_ParamLimits

0x5628,	// (0x000337a3) main_mup3_pane_t4

0x567e,	// (0x000337f9) main_mup3_pane_t5_ParamLimits

0x567e,	// (0x000337f9) main_mup3_pane_t5

0x573a,	// (0x000338b5) main_mup3_pane_t6_ParamLimits

0x573a,	// (0x000338b5) main_mup3_pane_t6

0x0005,

0xf794,	// (0x0003d90f) main_mup3_pane_t_ParamLimits

0xf794,	// (0x0003d90f) main_mup3_pane_t

0x57f2,	// (0x0003396d) mup3_progress_pane_ParamLimits

0x57f2,	// (0x0003396d) mup3_progress_pane

0x587e,	// (0x000339f9) popup_mup3_control_window_ParamLimits

0x587e,	// (0x000339f9) popup_mup3_control_window

0xca98,	// (0x0003ac13) popup_mup3_text_window

0x58b0,	// (0x00033a2b) mup3_progress_pane_t1

0x58cf,	// (0x00033a4a) mup3_progress_pane_t2

0xcaa0,	// (0x0003ac1b) mup3_progress_pane_t3

0x0002,

0xf7a1,	// (0x0003d91c) mup3_progress_pane_t

0xcabd,	// (0x0003ac38) mup_progress_pane_cp03

0x9b34,	// (0x00037caf) bg_tb_trans_pane_cp04

0x58ee,	// (0x00033a69) mup3_volume_pane

0x58f6,	// (0x00033a71) popup_mup3_control_window_g1

0x58ff,	// (0x00033a7a) mup3_volume_pane_g1

0x5908,	// (0x00033a83) mup3_volume_pane_g2

0x5911,	// (0x00033a8c) mup3_volume_pane_g3

0x0002,

0xf7a8,	// (0x0003d923) mup3_volume_pane_g

0x9b34,	// (0x00037caf) bg_tb_trans_pane_cp03

0xcacd,	// (0x0003ac48) popup_mup3_text_window_g1

0xcad5,	// (0x0003ac50) popup_mup3_text_window_t1

0xa2d8,	// (0x00038453) list_calc_item_pane_g1_ParamLimits

0xc4a2,	// (0x0003a61d) mup_volume_pane_cp_g1

0x526c,	// (0x000333e7) main_touch_calib_pane_t3

0x5280,	// (0x000333fb) main_touch_calib_pane_t4

0x5294,	// (0x0003340f) main_touch_calib_pane_t5

0x1822,	// (0x0002f99d) aid_cell_size_toolbar2

0x182a,	// (0x0002f9a5) aid_popup3_width_pane

0x1836,	// (0x0002f9b1) aid_zoom_text_msg_primary

0x0536,	// (0x0002e6b1) vorec_t7

0xa29c,	// (0x00038417) bg_calc_paper_pane_g1_ParamLimits

0xa2a8,	// (0x00038423) bg_calc_paper_pane_g2_ParamLimits

0xa2b4,	// (0x0003842f) bg_calc_paper_pane_g3_ParamLimits

0xa2c0,	// (0x0003843b) bg_calc_paper_pane_g4_ParamLimits

0xa2cc,	// (0x00038447) bg_calc_paper_pane_g5_ParamLimits

0x1b6c,	// (0x0002fce7) bg_calc_paper_pane_g6_ParamLimits

0x1b7d,	// (0x0002fcf8) bg_calc_paper_pane_g7_ParamLimits

0x1b8e,	// (0x0002fd09) bg_calc_paper_pane_g8_ParamLimits

0xf15b,	// (0x0003d2d6) bg_calc_paper_pane_g_ParamLimits

0x1ba1,	// (0x0002fd1c) calc_bg_paper_pane_g9_ParamLimits

0x23ba,	// (0x00030535) image_qvga_pane_ParamLimits

0x23ba,	// (0x00030535) image_qvga_pane

0xa1ac,	// (0x00038327) bg_popup_sub_pane_cp04_ParamLimits

0xb13b,	// (0x000392b6) popup_mup_playback_window_g1_ParamLimits

0xb147,	// (0x000392c2) popup_mup_playback_window_t1_ParamLimits

0xb15c,	// (0x000392d7) popup_mup_playback_window_t2_ParamLimits

0xf4e7,	// (0x0003d662) popup_mup_playback_window_t_ParamLimits

0x4d43,	// (0x00032ebe) main_mup2_pane_g3_ParamLimits

0x4d43,	// (0x00032ebe) main_mup2_pane_g3

0x27cd,	// (0x00030948) popup_toolbar_window_cp04

0xb551,	// (0x000396cc) popup_call2_audio_second_window_g3_ParamLimits

0xb551,	// (0x000396cc) popup_call2_audio_second_window_g3

0xb95b,	// (0x00039ad6) popup_call2_audio_first_window_g4_ParamLimits

0xb95b,	// (0x00039ad6) popup_call2_audio_first_window_g4

0xbfda,	// (0x0003a155) popup_call2_audio_in_window_g4_ParamLimits

0xbfda,	// (0x0003a155) popup_call2_audio_in_window_g4

0x42e8,	// (0x00032463) aid_area_sk_bg_cut_ParamLimits

0x42e8,	// (0x00032463) aid_area_sk_bg_cut

0xb171,	// (0x000392ec) aid_area_sk_bg_cut_2_ParamLimits

0xb171,	// (0x000392ec) aid_area_sk_bg_cut_2

0x50ad,	// (0x00033228) aid_placing_details_win

0x50b5,	// (0x00033230) aid_placing_details_win_2

0xc8c3,	// (0x0003aa3e) camera2_autofocus_pane_g1_ParamLimits

0x021d,	// (0x0002e398) popup_fixed_preview_cale_window_ParamLimits

0x021d,	// (0x0002e398) popup_fixed_preview_cale_window

0xaf00,	// (0x0003907b) navi_slider_pane_g3

0xaf09,	// (0x00039084) navi_slider_pane_g4

0xaf12,	// (0x0003908d) navi_slider_pane_g5

0xaf00,	// (0x0003907b) navi_slider_pane_g6

0x3bcc,	// (0x00031d47) navi_slider_pane_g7

0xb033,	// (0x000391ae) mup_scale_pane_g3

0xb03c,	// (0x000391b7) mup_scale_pane_g4

0xb045,	// (0x000391c0) mup_scale_pane_g5

0x3fd3,	// (0x0003214e) mup_scale_pane_g6

0x3fdc,	// (0x00032157) mup_scale_pane_g7

0xaf00,	// (0x0003907b) cams2_slider_pane_g3

0xc524,	// (0x0003a69f) cams2_slider_pane_g4

0x4ffa,	// (0x00033175) cams2_slider_pane_g5

0xaf00,	// (0x0003907b) cams2_slider_pane_g6

0x5002,	// (0x0003317d) cams2_slider_pane_g7

0xc751,	// (0x0003a8cc) camera2_autofocus_pane_cp_g1

0xc33b,	// (0x0003a4b6) bg_popup_preview_window_pane_cp02_ParamLimits

0xc33b,	// (0x0003a4b6) bg_popup_preview_window_pane_cp02

0xcae3,	// (0x0003ac5e) list_fp_cale_pane_ParamLimits

0xcae3,	// (0x0003ac5e) list_fp_cale_pane

0xcaef,	// (0x0003ac6a) popup_fixed_preview_cale_window_t1_ParamLimits

0xcaef,	// (0x0003ac6a) popup_fixed_preview_cale_window_t1

0x591a,	// (0x00033a95) popup_fixed_preview_cale_window_t2_ParamLimits

0x591a,	// (0x00033a95) popup_fixed_preview_cale_window_t2

0x592f,	// (0x00033aaa) popup_fixed_preview_cale_window_t3_ParamLimits

0x592f,	// (0x00033aaa) popup_fixed_preview_cale_window_t3

0x0002,

0xf7af,	// (0x0003d92a) popup_fixed_preview_cale_window_t_ParamLimits

0xf7af,	// (0x0003d92a) popup_fixed_preview_cale_window_t

0x5944,	// (0x00033abf) list_single_fp_cale_pane_ParamLimits

0x5944,	// (0x00033abf) list_single_fp_cale_pane

0xcb0d,	// (0x0003ac88) list_single_fp_cale_pane_g1_ParamLimits

0xcb0d,	// (0x0003ac88) list_single_fp_cale_pane_g1

0xcb19,	// (0x0003ac94) list_single_fp_cale_pane_g2_ParamLimits

0xcb19,	// (0x0003ac94) list_single_fp_cale_pane_g2

0x0002,

0xf7b6,	// (0x0003d931) list_single_fp_cale_pane_g_ParamLimits

0xf7b6,	// (0x0003d931) list_single_fp_cale_pane_g

0xcb32,	// (0x0003acad) list_single_fp_cale_pane_t1_ParamLimits

0xcb32,	// (0x0003acad) list_single_fp_cale_pane_t1

0xcb44,	// (0x0003acbf) list_single_fp_cale_pane_t2_ParamLimits

0xcb44,	// (0x0003acbf) list_single_fp_cale_pane_t2

0x0001,

0xf7bd,	// (0x0003d938) list_single_fp_cale_pane_t_ParamLimits

0xf7bd,	// (0x0003d938) list_single_fp_cale_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0x18db,	// (0x0002fa56) main_dialer_pane

0x595b,	// (0x00033ad6) aid_cell_size_keypad

0x5965,	// (0x00033ae0) dialer_ne_pane

0x596d,	// (0x00033ae8) grid_dialer_command_1_pane

0x5975,	// (0x00033af0) grid_dialer_command_2_pane

0x597d,	// (0x00033af8) grid_dialer_keypad_pane

0x598f,	// (0x00033b0a) bg_popup_call_pane_cp06_ParamLimits

0x598f,	// (0x00033b0a) bg_popup_call_pane_cp06

0x599b,	// (0x00033b16) dialer_ne_clear_pane_ParamLimits

0x599b,	// (0x00033b16) dialer_ne_clear_pane

0xcb77,	// (0x0003acf2) dialer_ne_pane_g1

0xcb7f,	// (0x0003acfa) dialer_ne_pane_t1_ParamLimits

0xcb7f,	// (0x0003acfa) dialer_ne_pane_t1

0x59a7,	// (0x00033b22) dialer_ne_pane_t2_ParamLimits

0x59a7,	// (0x00033b22) dialer_ne_pane_t2

0x59d1,	// (0x00033b4c) dialer_ne_pane_t3_ParamLimits

0x59d1,	// (0x00033b4c) dialer_ne_pane_t3

0x0002,

0xf7c2,	// (0x0003d93d) dialer_ne_pane_t_ParamLimits

0xf7c2,	// (0x0003d93d) dialer_ne_pane_t

0x5a01,	// (0x00033b7c) dialer_ne_pane_t3_copy1_ParamLimits

0x5a01,	// (0x00033b7c) dialer_ne_pane_t3_copy1

0x5a30,	// (0x00033bab) cell_dialer_keypad_pane_ParamLimits

0x5a30,	// (0x00033bab) cell_dialer_keypad_pane

0x5a47,	// (0x00033bc2) cell_dialer_command_1_pane_ParamLimits

0x5a47,	// (0x00033bc2) cell_dialer_command_1_pane

0x5a5d,	// (0x00033bd8) cell_dialer_command_2_pane_ParamLimits

0x5a5d,	// (0x00033bd8) cell_dialer_command_2_pane

0xcb91,	// (0x0003ad0c) bg_button_pane_cp02_ParamLimits

0xcb91,	// (0x0003ad0c) bg_button_pane_cp02

0x5a6c,	// (0x00033be7) cell_dialer_keypad_pane_g1_ParamLimits

0x5a6c,	// (0x00033be7) cell_dialer_keypad_pane_g1

0xcb91,	// (0x0003ad0c) bg_button_pane_cp03_ParamLimits

0xcb91,	// (0x0003ad0c) bg_button_pane_cp03

0x5a81,	// (0x00033bfc) cell_dialer_command_1_pane_g1_ParamLimits

0x5a81,	// (0x00033bfc) cell_dialer_command_1_pane_g1

0xcb9d,	// (0x0003ad18) bg_button_pane_cp04

0x5a94,	// (0x00033c0f) cell_dialer_command_2_pane_g1

0xaeef,	// (0x0003906a) bg_button_pane_cp06

0xcba5,	// (0x0003ad20) dialer_ne_clear_pane_g1

0xadcb,	// (0x00038f46) navi_pane_g2

0xadf9,	// (0x00038f74) navi_pane_g3

0x0002,

0xf3ea,	// (0x0003d565) navi_pane_g

0xae88,	// (0x00039003) navi_pane_mv_g2

0xaeaf,	// (0x0003902a) navi_pane_mv_g5

0x3b81,	// (0x00031cfc) navi_pane_mv_t1

0xa290,	// (0x0003840b) main_clock2_pane

0x5ae1,	// (0x00033c5c) main_clock2_list_pane_ParamLimits

0x5ae1,	// (0x00033c5c) main_clock2_list_pane

0x5b1b,	// (0x00033c96) main_clock2_pane_t1_ParamLimits

0x5b1b,	// (0x00033c96) main_clock2_pane_t1

0x5b59,	// (0x00033cd4) main_clock2_pane_t2_ParamLimits

0x5b59,	// (0x00033cd4) main_clock2_pane_t2

0x0004,

0xf7c9,	// (0x0003d944) main_clock2_pane_t_ParamLimits

0xf7c9,	// (0x0003d944) main_clock2_pane_t

0x5bf7,	// (0x00033d72) popup_clock_analogue_window_cp03_ParamLimits

0x5bf7,	// (0x00033d72) popup_clock_analogue_window_cp03

0x5c1c,	// (0x00033d97) popup_clock_digital_window_cp02_ParamLimits

0x5c1c,	// (0x00033d97) popup_clock_digital_window_cp02

0x5c8f,	// (0x00033e0a) main_clock2_list_single_pane_ParamLimits

0x5c8f,	// (0x00033e0a) main_clock2_list_single_pane

0xaeef,	// (0x0003906a) list_highlight_pane_cp05

0xcbc3,	// (0x0003ad3e) main_clock2_list_single_pane_t1

0x27cd,	// (0x00030948) popup_toolbar_window_cp04_ParamLimits

0x50d7,	// (0x00033252) camera2_autofocus_pane_g2_ParamLimits

0x50d7,	// (0x00033252) camera2_autofocus_pane_g2

0x50e3,	// (0x0003325e) camera2_autofocus_pane_g3_ParamLimits

0x50e3,	// (0x0003325e) camera2_autofocus_pane_g3

0x50ef,	// (0x0003326a) camera2_autofocus_pane_g4_ParamLimits

0x50ef,	// (0x0003326a) camera2_autofocus_pane_g4

0x50fb,	// (0x00033276) camera2_autofocus_pane_g5_ParamLimits

0x50fb,	// (0x00033276) camera2_autofocus_pane_g5

0x0004,

0xf712,	// (0x0003d88d) camera2_autofocus_pane_g_ParamLimits

0xf712,	// (0x0003d88d) camera2_autofocus_pane_g

0x52ca,	// (0x00033445) camera2_autofocus_pane_cp_g2

0x52d2,	// (0x0003344d) camera2_autofocus_pane_cp_g3

0x52da,	// (0x00033455) camera2_autofocus_pane_cp_g4

0x52e2,	// (0x0003345d) camera2_autofocus_pane_cp_g5

0x0004,

0xf778,	// (0x0003d8f3) camera2_autofocus_pane_cp_g

0x5987,	// (0x00033b02) popup_dialer_spcha_window

0x9b34,	// (0x00037caf) bg_popup_sub_pane_cp07

0xcbd1,	// (0x0003ad4c) list_spcha_pane

0xcbd9,	// (0x0003ad54) list_single_spcha_pane_ParamLimits

0xcbd9,	// (0x0003ad54) list_single_spcha_pane

0x9b34,	// (0x00037caf) list_highlight_pane_cp06

0xcbea,	// (0x0003ad65) list_single_spcha_pane_t1

0xbd84,	// (0x00039eff) popup_call2_audio_out_window_g4_ParamLimits

0xbd84,	// (0x00039eff) popup_call2_audio_out_window_g4

0x18db,	// (0x0002fa56) main_imed2_pane

0x4a07,	// (0x00032b82) popup_imed_adjust2_window

0x06eb,	// (0x0002e866) popup_imed_trans_window_ParamLimits

0x06eb,	// (0x0002e866) popup_imed_trans_window

0xc58d,	// (0x0003a708) popup_blid_sat_info2_window_t1

0xc59b,	// (0x0003a716) popup_blid_sat_info2_window_t2

0x000a,

0xf6a7,	// (0x0003d822) popup_blid_sat_info2_window_t

0x5cc1,	// (0x00033e3c) aid_size_cell_colour_35

0x5ce1,	// (0x00033e5c) aid_size_cell_colour_112

0x5d01,	// (0x00033e7c) aid_size_cell_effect

0xc347,	// (0x0003a4c2) bg_tb_trans_pane_cp02

0xa91c,	// (0x00038a97) heading_imed_pane

0x5d21,	// (0x00033e9c) listscroll_imed_pane

0xcbf8,	// (0x0003ad73) heading_imed_pane_g1

0xcc00,	// (0x0003ad7b) heading_imed_pane_t1

0xcc0e,	// (0x0003ad89) grid_imed_colour_35_pane_ParamLimits

0xcc0e,	// (0x0003ad89) grid_imed_colour_35_pane

0x5d2d,	// (0x00033ea8) grid_imed_effect_pane

0xcc26,	// (0x0003ada1) list_imed_aspect_pane

0x5d43,	// (0x00033ebe) scroll_pane_cp027_ParamLimits

0x5d43,	// (0x00033ebe) scroll_pane_cp027

0x5d54,	// (0x00033ecf) cell_imed_effect_pane_ParamLimits

0x5d54,	// (0x00033ecf) cell_imed_effect_pane

0xcc2e,	// (0x0003ada9) cell_imed_colour_pane_ParamLimits

0xcc2e,	// (0x0003ada9) cell_imed_colour_pane

0xcc70,	// (0x0003adeb) cell_imed_colour_pane_g1_ParamLimits

0xcc70,	// (0x0003adeb) cell_imed_colour_pane_g1

0xcc81,	// (0x0003adfc) hgihlgiht_grid_pane_cp016_ParamLimits

0xcc81,	// (0x0003adfc) hgihlgiht_grid_pane_cp016

0x5d7b,	// (0x00033ef6) cell_imed_effect_pane_g1

0x5d83,	// (0x00033efe) grid_highlight_pane_cp017

0xcc92,	// (0x0003ae0d) list_imed_single_pane_ParamLimits

0xcc92,	// (0x0003ae0d) list_imed_single_pane

0x9b34,	// (0x00037caf) list_highlight_pane_cp07

0xcca8,	// (0x0003ae23) list_imed_aspect_pane_comp1_t1

0xc347,	// (0x0003a4c2) bg_tb_trans_pane_cp05

0xccca,	// (0x0003ae45) popup_imed_adjust2_window_g1

0xccf1,	// (0x0003ae6c) popup_imed_adjust2_window_t1

0xcd09,	// (0x0003ae84) slider_imed_adjust_pane

0xcd1d,	// (0x0003ae98) slider_imed_adjust_pane_g1

0xcd2d,	// (0x0003aea8) slider_imed_adjust_pane_g2

0xcd3d,	// (0x0003aeb8) slider_imed_adjust_pane_g3

0xcd4e,	// (0x0003aec9) slider_imed_adjust_pane_g4

0x0003,

0xf7e6,	// (0x0003d961) slider_imed_adjust_pane_g

0x5d8c,	// (0x00033f07) aid_size_cell_clipart2

0x5d98,	// (0x00033f13) grid_imed_clipart_pane

0xcd5f,	// (0x0003aeda) scroll_pane_cp031

0x5da2,	// (0x00033f1d) cell_imed_clipart_pane_ParamLimits

0x5da2,	// (0x00033f1d) cell_imed_clipart_pane

0x5dc6,	// (0x00033f41) cell_imed_clipart_pane_g1

0x9b34,	// (0x00037caf) grid_highlight_pane_cp014

0x5af6,	// (0x00033c71) main_clock2_pane_g1_ParamLimits

0x5af6,	// (0x00033c71) main_clock2_pane_g1

0x5c3a,	// (0x00033db5) aid_call2_pane_cp10

0x5c4c,	// (0x00033dc7) aid_call_pane_cp10

0xad2a,	// (0x00038ea5) popup_clock_analogue_window_cp10_g1

0xad2a,	// (0x00038ea5) popup_clock_analogue_window_cp10_g2

0x5c5e,	// (0x00033dd9) popup_clock_analogue_window_cp10_g3

0x5c5e,	// (0x00033dd9) popup_clock_analogue_window_cp10_g4

0xad2a,	// (0x00038ea5) popup_clock_analogue_window_cp10_g5

0x0004,

0xf7d4,	// (0x0003d94f) popup_clock_analogue_window_cp10_g

0x5c70,	// (0x00033deb) popup_clock_analogue_window_cp10_t1

0x0d2b,	// (0x0002eea6) clock_digital_number_pane_cp10_ParamLimits

0x0d2b,	// (0x0002eea6) clock_digital_number_pane_cp10

0x0d43,	// (0x0002eebe) clock_digital_number_pane_cp11_ParamLimits

0x0d43,	// (0x0002eebe) clock_digital_number_pane_cp11

0x0d5b,	// (0x0002eed6) clock_digital_number_pane_cp12_ParamLimits

0x0d5b,	// (0x0002eed6) clock_digital_number_pane_cp12

0x0d73,	// (0x0002eeee) clock_digital_number_pane_cp13_ParamLimits

0x0d73,	// (0x0002eeee) clock_digital_number_pane_cp13

0x0d8b,	// (0x0002ef06) clock_digital_separator_pane_cp10_ParamLimits

0x0d8b,	// (0x0002ef06) clock_digital_separator_pane_cp10

0x5ca1,	// (0x00033e1c) popup_clock_digital_window_cp02_t1_ParamLimits

0x5ca1,	// (0x00033e1c) popup_clock_digital_window_cp02_t1

0xa1a4,	// (0x0003831f) clock_digital_number_pane_cp10_g1

0xa1a4,	// (0x0003831f) clock_digital_number_pane_cp10_g2

0x0001,

0xf7ef,	// (0x0003d96a) clock_digital_number_pane_cp10_g

0xa1a4,	// (0x0003831f) clock_digital_separator_pane_cp10_g1

0xa1a4,	// (0x0003831f) clock_digital_separator_pane_g2_cp10

0xaeb7,	// (0x00039032) navi_pane_vded_g4

0xaec0,	// (0x0003903b) navi_pane_vded_g5

0xaec9,	// (0x00039044) navi_pane_vded_t1

0x18db,	// (0x0002fa56) main_vded_pane

0x5dcf,	// (0x00033f4a) main_vded_pane_g1

0x5dd9,	// (0x00033f54) main_vded_pane_g2

0x5de3,	// (0x00033f5e) main_vded_pane_g3

0x0002,

0xf7f4,	// (0x0003d96f) main_vded_pane_g

0x5ded,	// (0x00033f68) main_vded_pane_t1

0x5dfb,	// (0x00033f76) main_vded_pane_t2

0x0001,

0xf7fb,	// (0x0003d976) main_vded_pane_t

0x5e09,	// (0x00033f84) vded_slider_pane

0x5e13,	// (0x00033f8e) vded_video_pane

0xcd67,	// (0x0003aee2) vded_video_pane_g1

0x5e1d,	// (0x00033f98) vded_video_pane_g2

0xc751,	// (0x0003a8cc) vded_video_pane_g3

0x0002,

0xf800,	// (0x0003d97b) vded_video_pane_g

0xcd71,	// (0x0003aeec) vded_slider_pane_g1

0xcd7a,	// (0x0003aef5) vded_slider_pane_g2

0xcd83,	// (0x0003aefe) vded_slider_pane_g3

0xcd8c,	// (0x0003af07) vded_slider_pane_g4

0xcd95,	// (0x0003af10) vded_slider_pane_g5

0x0004,

0xf807,	// (0x0003d982) vded_slider_pane_g

0x5866,	// (0x000339e1) mup3_rocker_pane_ParamLimits

0x5866,	// (0x000339e1) mup3_rocker_pane

0x5e26,	// (0x00033fa1) mup3_control_keys_pane_g1

0x5e2e,	// (0x00033fa9) mup3_control_keys_pane_g2

0x5e36,	// (0x00033fb1) mup3_control_keys_pane_g3

0x5e3e,	// (0x00033fb9) mup3_control_keys_pane_g4

0x0003,

0xf812,	// (0x0003d98d) mup3_control_keys_pane_g

0x0254,	// (0x0002e3cf) popup_toolbar2_fixed_window_cp01_ParamLimits

0x0254,	// (0x0002e3cf) popup_toolbar2_fixed_window_cp01

0x589a,	// (0x00033a15) popup_toolbar2_fixed_window_cp02_ParamLimits

0x589a,	// (0x00033a15) popup_toolbar2_fixed_window_cp02

0xb6c3,	// (0x0003983e) popup_call2_audio_second_window_t4_ParamLimits

0xb6c3,	// (0x0003983e) popup_call2_audio_second_window_t4

0xbbf1,	// (0x00039d6c) popup_call2_audio_first_window_t6_ParamLimits

0xbbf1,	// (0x00039d6c) popup_call2_audio_first_window_t6

0xbe87,	// (0x0003a002) popup_call2_audio_out_window_t6_ParamLimits

0xbe87,	// (0x0003a002) popup_call2_audio_out_window_t6

0x18db,	// (0x0002fa56) main_vitu_pane

0x5e4e,	// (0x00033fc9) aid_size_cell_itu_ParamLimits

0x5e4e,	// (0x00033fc9) aid_size_cell_itu

0xa801,	// (0x0003897c) bg_popup_window_pane_cp08_ParamLimits

0xa801,	// (0x0003897c) bg_popup_window_pane_cp08

0x5e64,	// (0x00033fdf) field_vitu_entry_pane_ParamLimits

0x5e64,	// (0x00033fdf) field_vitu_entry_pane

0x5e7b,	// (0x00033ff6) grid_vitu_function_pane_ParamLimits

0x5e7b,	// (0x00033ff6) grid_vitu_function_pane

0x5e96,	// (0x00034011) grid_vitu_itu_pane_ParamLimits

0x5e96,	// (0x00034011) grid_vitu_itu_pane

0x5eb4,	// (0x0003402f) cell_vitu_itu_pane_ParamLimits

0x5eb4,	// (0x0003402f) cell_vitu_itu_pane

0x5ed8,	// (0x00034053) cell_vitu_function_pane_ParamLimits

0x5ed8,	// (0x00034053) cell_vitu_function_pane

0xa801,	// (0x0003897c) bg_popup_sub_pane_cp08_ParamLimits

0xa801,	// (0x0003897c) bg_popup_sub_pane_cp08

0x5ef3,	// (0x0003406e) field_vitu_entry_pane_t1_ParamLimits

0x5ef3,	// (0x0003406e) field_vitu_entry_pane_t1

0xcdb6,	// (0x0003af31) field_vitu_entry_pane_t2_ParamLimits

0xcdb6,	// (0x0003af31) field_vitu_entry_pane_t2

0x0001,

0xf820,	// (0x0003d99b) field_vitu_entry_pane_t_ParamLimits

0xf820,	// (0x0003d99b) field_vitu_entry_pane_t

0xcdd3,	// (0x0003af4e) bg_button_pane_cp05_ParamLimits

0xcdd3,	// (0x0003af4e) bg_button_pane_cp05

0x5f12,	// (0x0003408d) cell_vitu_itu_pane_g1

0x5f2a,	// (0x000340a5) cell_vitu_itu_pane_t1_ParamLimits

0x5f2a,	// (0x000340a5) cell_vitu_itu_pane_t1

0x5f3c,	// (0x000340b7) cell_vitu_itu_pane_t2_ParamLimits

0x5f3c,	// (0x000340b7) cell_vitu_itu_pane_t2

0x0002,

0xf825,	// (0x0003d9a0) cell_vitu_itu_pane_t_ParamLimits

0xf825,	// (0x0003d9a0) cell_vitu_itu_pane_t

0xcde1,	// (0x0003af5c) bg_button_pane_cp07

0x5f7f,	// (0x000340fa) cell_vitu_function_pane_g1

0x1a68,	// (0x0002fbe3) main_calc_pane_g1

0x00b4,	// (0x0002e22f) aid_visual_content_pane

0x18db,	// (0x0002fa56) main_vradio_pane

0x5f88,	// (0x00034103) main_vradio_pane_g1_ParamLimits

0x5f88,	// (0x00034103) main_vradio_pane_g1

0xcdeb,	// (0x0003af66) main_vradio_pane_g2_ParamLimits

0xcdeb,	// (0x0003af66) main_vradio_pane_g2

0x0001,

0xf82c,	// (0x0003d9a7) main_vradio_pane_g_ParamLimits

0xf82c,	// (0x0003d9a7) main_vradio_pane_g

0x5fa1,	// (0x0003411c) main_vradio_pane_t1_ParamLimits

0x5fa1,	// (0x0003411c) main_vradio_pane_t1

0x5fb6,	// (0x00034131) main_vradio_pane_t2_ParamLimits

0x5fb6,	// (0x00034131) main_vradio_pane_t2

0xcdf8,	// (0x0003af73) main_vradio_pane_t3_ParamLimits

0xcdf8,	// (0x0003af73) main_vradio_pane_t3

0x0002,

0xf831,	// (0x0003d9ac) main_vradio_pane_t_ParamLimits

0xf831,	// (0x0003d9ac) main_vradio_pane_t

0x5fcb,	// (0x00034146) vradio_rocker_control_pane_ParamLimits

0x5fcb,	// (0x00034146) vradio_rocker_control_pane

0x5fdd,	// (0x00034158) vradio_station_info_pane_ParamLimits

0x5fdd,	// (0x00034158) vradio_station_info_pane

0xce0c,	// (0x0003af87) vradio_frequency_info_pane_ParamLimits

0xce0c,	// (0x0003af87) vradio_frequency_info_pane

0xc751,	// (0x0003a8cc) vradio_station_info_pane_g1

0xce1b,	// (0x0003af96) vradio_station_info_pane_t1_ParamLimits

0xce1b,	// (0x0003af96) vradio_station_info_pane_t1

0xce3d,	// (0x0003afb8) vradio_station_info_pane_t2_ParamLimits

0xce3d,	// (0x0003afb8) vradio_station_info_pane_t2

0x0001,

0xf838,	// (0x0003d9b3) vradio_station_info_pane_t_ParamLimits

0xf838,	// (0x0003d9b3) vradio_station_info_pane_t

0xce4f,	// (0x0003afca) vradio_tuning_pane

0xce57,	// (0x0003afd2) vradio_rocker_control_pane_g1

0xce5f,	// (0x0003afda) vradio_rocker_control_pane_g2

0xce67,	// (0x0003afe2) vradio_rocker_control_pane_g3

0xce6f,	// (0x0003afea) vradio_rocker_control_pane_g4

0xce77,	// (0x0003aff2) vradio_rocker_control_pane_g5

0x0004,

0xf83d,	// (0x0003d9b8) vradio_rocker_control_pane_g

0x5fef,	// (0x0003416a) vradio_frequency_info_pane_g1

0xce7f,	// (0x0003affa) vradio_frequency_info_pane_t1_ParamLimits

0xce7f,	// (0x0003affa) vradio_frequency_info_pane_t1

0x5ff9,	// (0x00034174) vradio_tuning_pane_g1

0x6004,	// (0x0003417f) vradio_tuning_pane_t1

0x187f,	// (0x0002f9fa) area_side_right_pane_ParamLimits

0x187f,	// (0x0002f9fa) area_side_right_pane

0xc302,	// (0x0003a47d) status_small_pane_g1

0xc30a,	// (0x0003a485) status_small_pane_g2

0xc313,	// (0x0003a48e) status_small_pane_g3

0xc31c,	// (0x0003a497) status_small_pane_g4

0x0003,

0xf5fd,	// (0x0003d778) status_small_pane_g

0xc325,	// (0x0003a4a0) status_small_pane_t1

0x18db,	// (0x0002fa56) main_video3_pane

0xce93,	// (0x0003b00e) cams_zoom_vslider_pane

0xce9b,	// (0x0003b016) image3_wide_pane_ParamLimits

0xce9b,	// (0x0003b016) image3_wide_pane

0xceb5,	// (0x0003b030) image3_wide_small_pane

0xced5,	// (0x0003b050) main_video3_pane_g1_ParamLimits

0xced5,	// (0x0003b050) main_video3_pane_g1

0xcef1,	// (0x0003b06c) main_video3_pane_g2_ParamLimits

0xcef1,	// (0x0003b06c) main_video3_pane_g2

0x0001,

0xf848,	// (0x0003d9c3) main_video3_pane_g_ParamLimits

0xf848,	// (0x0003d9c3) main_video3_pane_g

0xcf0d,	// (0x0003b088) main_video3_pane_t1_ParamLimits

0xcf0d,	// (0x0003b088) main_video3_pane_t1

0xcf38,	// (0x0003b0b3) main_video3_pane_t2_ParamLimits

0xcf38,	// (0x0003b0b3) main_video3_pane_t2

0xcf63,	// (0x0003b0de) main_video3_pane_t3_ParamLimits

0xcf63,	// (0x0003b0de) main_video3_pane_t3

0x0002,

0xf84d,	// (0x0003d9c8) main_video3_pane_t_ParamLimits

0xf84d,	// (0x0003d9c8) main_video3_pane_t

0xcf90,	// (0x0003b10b) cams_zoom_vslider_pane_g1

0xcf99,	// (0x0003b114) cams_zoom_vslider_pane_g2

0x0001,

0xf854,	// (0x0003d9cf) cams_zoom_vslider_pane_g

0xcfa1,	// (0x0003b11c) small_slider_vertical_pane

0xc751,	// (0x0003a8cc) small_slider_vertical_pane_g1

0xc751,	// (0x0003a8cc) small_slider_vertical_pane_g2

0xcfa9,	// (0x0003b124) small_slider_vertical_pane_g3

0x0002,

0xf859,	// (0x0003d9d4) small_slider_vertical_pane_g

0x18db,	// (0x0002fa56) main_hwr_training_pane

0xcfb2,	// (0x0003b12d) hwr_training_instruct_pane_ParamLimits

0xcfb2,	// (0x0003b12d) hwr_training_instruct_pane

0x6013,	// (0x0003418e) hwr_training_navi_pane_ParamLimits

0x6013,	// (0x0003418e) hwr_training_navi_pane

0x6032,	// (0x000341ad) hwr_training_write_pane_ParamLimits

0x6032,	// (0x000341ad) hwr_training_write_pane

0x9b34,	// (0x00037caf) bg_frame_shadow_pane

0xcfe9,	// (0x0003b164) hwr_training_write_pane_g1

0xcff1,	// (0x0003b16c) hwr_training_write_pane_g2

0xcff9,	// (0x0003b174) hwr_training_write_pane_g3

0xd001,	// (0x0003b17c) hwr_training_write_pane_g4

0xd009,	// (0x0003b184) hwr_training_write_pane_g5

0xd011,	// (0x0003b18c) hwr_training_write_pane_g6

0xd019,	// (0x0003b194) hwr_training_write_pane_g7

0x0006,

0xf860,	// (0x0003d9db) hwr_training_write_pane_g

0x606d,	// (0x000341e8) hwr_training_navi_pane_g1_ParamLimits

0x606d,	// (0x000341e8) hwr_training_navi_pane_g1

0x607f,	// (0x000341fa) hwr_training_navi_pane_g2_ParamLimits

0x607f,	// (0x000341fa) hwr_training_navi_pane_g2

0x6091,	// (0x0003420c) hwr_training_navi_pane_g3_ParamLimits

0x6091,	// (0x0003420c) hwr_training_navi_pane_g3

0x60a1,	// (0x0003421c) hwr_training_navi_pane_g4_ParamLimits

0x60a1,	// (0x0003421c) hwr_training_navi_pane_g4

0x0004,

0xf86f,	// (0x0003d9ea) hwr_training_navi_pane_g_ParamLimits

0xf86f,	// (0x0003d9ea) hwr_training_navi_pane_g

0x60ae,	// (0x00034229) hwr_training_navi_pane_t1

0x60bc,	// (0x00034237) list_single_hwr_training_instruct_pane_ParamLimits

0x60bc,	// (0x00034237) list_single_hwr_training_instruct_pane

0xd021,	// (0x0003b19c) list_single_hwr_training_instruct_pane_t1

0xc691,	// (0x0003a80c) bg_frame_shadow_pane_g1

0xd030,	// (0x0003b1ab) bg_frame_shadow_pane_g2

0xd038,	// (0x0003b1b3) bg_frame_shadow_pane_g3

0xd040,	// (0x0003b1bb) bg_frame_shadow_pane_g4

0xd048,	// (0x0003b1c3) bg_frame_shadow_pane_g5

0xd050,	// (0x0003b1cb) bg_frame_shadow_pane_g6

0xd058,	// (0x0003b1d3) bg_frame_shadow_pane_g7

0xa35b,	// (0x000384d6) bg_frame_shadow_pane_g8

0x0007,

0xf87a,	// (0x0003d9f5) bg_frame_shadow_pane_g

0x18db,	// (0x0002fa56) main_video_tele_dialer_pane

0x0db2,	// (0x0002ef2d) aid_size_cell_video_keypad_ParamLimits

0x0db2,	// (0x0002ef2d) aid_size_cell_video_keypad

0x0dcc,	// (0x0002ef47) grid_video_dialer_keypad_pane_ParamLimits

0x0dcc,	// (0x0002ef47) grid_video_dialer_keypad_pane

0x0e1a,	// (0x0002ef95) video_down_pane_cp_ParamLimits

0x0e1a,	// (0x0002ef95) video_down_pane_cp

0x0e30,	// (0x0002efab) cell_video_dialer_keypad_pane_ParamLimits

0x0e30,	// (0x0002efab) cell_video_dialer_keypad_pane

0xd060,	// (0x0003b1db) bg_button_pane_cp08_ParamLimits

0xd060,	// (0x0003b1db) bg_button_pane_cp08

0x60ef,	// (0x0003426a) cell_video_dialer_keypad_pane_g1_ParamLimits

0x60ef,	// (0x0003426a) cell_video_dialer_keypad_pane_g1

0x5850,	// (0x000339cb) mup3_rocker2_pane_ParamLimits

0x5850,	// (0x000339cb) mup3_rocker2_pane

0xc751,	// (0x0003a8cc) mup3_rocker2_pane_g1

0x05d4,	// (0x0002e74f) main_dialer2_pane

0x18db,	// (0x0002fa56) main_mp4_pane

0x6132,	// (0x000342ad) main_mp4_pane_g1_ParamLimits

0x6132,	// (0x000342ad) main_mp4_pane_g1

0x6132,	// (0x000342ad) main_mp4_pane_g2_ParamLimits

0x6132,	// (0x000342ad) main_mp4_pane_g2

0x0e52,	// (0x0002efcd) main_mp4_pane_g3_ParamLimits

0x0e52,	// (0x0002efcd) main_mp4_pane_g3

0x6140,	// (0x000342bb) main_mp4_pane_g4_ParamLimits

0x6140,	// (0x000342bb) main_mp4_pane_g4

0x6168,	// (0x000342e3) main_mp4_pane_g5_ParamLimits

0x6168,	// (0x000342e3) main_mp4_pane_g5

0x0005,

0xf89a,	// (0x0003da15) main_mp4_pane_g_ParamLimits

0xf89a,	// (0x0003da15) main_mp4_pane_g

0x61b8,	// (0x00034333) main_mp4_pane_t1_ParamLimits

0x61b8,	// (0x00034333) main_mp4_pane_t1

0x6214,	// (0x0003438f) main_mp4_pane_t2_ParamLimits

0x6214,	// (0x0003438f) main_mp4_pane_t2

0xd06c,	// (0x0003b1e7) main_mp4_pane_t3_ParamLimits

0xd06c,	// (0x0003b1e7) main_mp4_pane_t3

0x6266,	// (0x000343e1) main_mp4_pane_t4_ParamLimits

0x6266,	// (0x000343e1) main_mp4_pane_t4

0x0003,

0xf8a7,	// (0x0003da22) main_mp4_pane_t_ParamLimits

0xf8a7,	// (0x0003da22) main_mp4_pane_t

0x62aa,	// (0x00034425) mp4_progress_pane_ParamLimits

0x62aa,	// (0x00034425) mp4_progress_pane

0x62f4,	// (0x0003446f) mp4_rocker_pane_ParamLimits

0x62f4,	// (0x0003446f) mp4_rocker_pane

0xd094,	// (0x0003b20f) mp4_progress_pane_t1

0xd0ad,	// (0x0003b228) mp4_progress_pane_t2

0x0001,

0xf8b0,	// (0x0003da2b) mp4_progress_pane_t

0xd0c6,	// (0x0003b241) mup_progress_pane_cp04

0xd0d2,	// (0x0003b24d) mp4_rocker_pane_g1

0x0e8e,	// (0x0002f009) aid_cell_size_keypad2_ParamLimits

0x0e8e,	// (0x0002f009) aid_cell_size_keypad2

0x0ea4,	// (0x0002f01f) dialer2_ne_pane_ParamLimits

0x0ea4,	// (0x0002f01f) dialer2_ne_pane

0x0ebe,	// (0x0002f039) grid_dialer2_keypad_pane_ParamLimits

0x0ebe,	// (0x0002f039) grid_dialer2_keypad_pane

0xc534,	// (0x0003a6af) bg_popup_call_pane_cp07_ParamLimits

0xc534,	// (0x0003a6af) bg_popup_call_pane_cp07

0x6314,	// (0x0003448f) dialer2_ne_pane_t1_ParamLimits

0x6314,	// (0x0003448f) dialer2_ne_pane_t1

0x0edc,	// (0x0002f057) cell_dialer2_keypad_pane_ParamLimits

0x0edc,	// (0x0002f057) cell_dialer2_keypad_pane

0xd0ee,	// (0x0003b269) bg_button_pane_pane_cp04_ParamLimits

0xd0ee,	// (0x0003b269) bg_button_pane_pane_cp04

0x6351,	// (0x000344cc) cell_dialer2_keypad_pane_g1_ParamLimits

0x6351,	// (0x000344cc) cell_dialer2_keypad_pane_g1

0x26a1,	// (0x0003081c) aid_placing_vt_set_content_ParamLimits

0x26a1,	// (0x0003081c) aid_placing_vt_set_content

0x26c9,	// (0x00030844) aid_placing_vt_set_title_ParamLimits

0x26c9,	// (0x00030844) aid_placing_vt_set_title

0x18db,	// (0x0002fa56) main_image3_pane

0x0f5c,	// (0x0002f0d7) area_side_right_pane_cp01_ParamLimits

0x0f5c,	// (0x0002f0d7) area_side_right_pane_cp01

0x6132,	// (0x000342ad) main_image3_pane_g1_ParamLimits

0x6132,	// (0x000342ad) main_image3_pane_g1

0x0f73,	// (0x0002f0ee) main_image3_pane_g2_ParamLimits

0x0f73,	// (0x0002f0ee) main_image3_pane_g2

0x0f9b,	// (0x0002f116) main_image3_pane_g3_ParamLimits

0x0f9b,	// (0x0002f116) main_image3_pane_g3

0x0fc5,	// (0x0002f140) main_image3_pane_g4_ParamLimits

0x0fc5,	// (0x0002f140) main_image3_pane_g4

0x0003,

0xf8bf,	// (0x0003da3a) main_image3_pane_g_ParamLimits

0xf8bf,	// (0x0003da3a) main_image3_pane_g

0x0fef,	// (0x0002f16a) main_image3_pane_t1_ParamLimits

0x0fef,	// (0x0002f16a) main_image3_pane_t1

0x1047,	// (0x0002f1c2) main_image3_pane_t2_ParamLimits

0x1047,	// (0x0002f1c2) main_image3_pane_t2

0x1099,	// (0x0002f214) main_image3_pane_t3_ParamLimits

0x1099,	// (0x0002f214) main_image3_pane_t3

0x0003,

0xf8c8,	// (0x0003da43) main_image3_pane_t_ParamLimits

0xf8c8,	// (0x0003da43) main_image3_pane_t

0xa801,	// (0x0003897c) grid_sctrl_middle_pane_cp01_ParamLimits

0xa801,	// (0x0003897c) grid_sctrl_middle_pane_cp01

0x63eb,	// (0x00034566) cell_sctrl_middle_pane_cp01_ParamLimits

0x63eb,	// (0x00034566) cell_sctrl_middle_pane_cp01

0x6408,	// (0x00034583) cell_sctrl_middle_pane_cp01_g1_ParamLimits

0x6408,	// (0x00034583) cell_sctrl_middle_pane_cp01_g1

0x18db,	// (0x0002fa56) main_call4_pane

0x641e,	// (0x00034599) aid_size_button_call4_ParamLimits

0x641e,	// (0x00034599) aid_size_button_call4

0x644f,	// (0x000345ca) call4_windows_pane_ParamLimits

0x644f,	// (0x000345ca) call4_windows_pane

0x646f,	// (0x000345ea) grid_call4_button_pane_ParamLimits

0x646f,	// (0x000345ea) grid_call4_button_pane

0xd0fa,	// (0x0003b275) call4_windows_conf_pane

0xd10f,	// (0x0003b28a) popup_call4_audio_first_window_ParamLimits

0xd10f,	// (0x0003b28a) popup_call4_audio_first_window

0xd15b,	// (0x0003b2d6) popup_call4_audio_second_window_ParamLimits

0xd15b,	// (0x0003b2d6) popup_call4_audio_second_window

0xd16f,	// (0x0003b2ea) popup_call4_audio_wait_window_ParamLimits

0xd16f,	// (0x0003b2ea) popup_call4_audio_wait_window

0x649c,	// (0x00034617) cell_call4_button_pane_ParamLimits

0x649c,	// (0x00034617) cell_call4_button_pane

0x64c5,	// (0x00034640) bg_button_pane_cp09_ParamLimits

0x64c5,	// (0x00034640) bg_button_pane_cp09

0x64d1,	// (0x0003464c) cell_call4_button_pane_g1_ParamLimits

0x64d1,	// (0x0003464c) cell_call4_button_pane_g1

0x64f7,	// (0x00034672) cell_call4_button_pane_t1_ParamLimits

0x64f7,	// (0x00034672) cell_call4_button_pane_t1

0xd1b7,	// (0x0003b332) popup_call4_audio_conf_window_ParamLimits

0xd1b7,	// (0x0003b332) popup_call4_audio_conf_window

0x58b0,	// (0x00033a2b) mup3_progress_pane_t1_ParamLimits

0x58cf,	// (0x00033a4a) mup3_progress_pane_t2_ParamLimits

0xcaa0,	// (0x0003ac1b) mup3_progress_pane_t3_ParamLimits

0xf7a1,	// (0x0003d91c) mup3_progress_pane_t_ParamLimits

0xcabd,	// (0x0003ac38) mup_progress_pane_cp03_ParamLimits

0x5e46,	// (0x00033fc1) mup3_control_keys_pane_g4_copy1

0x62d8,	// (0x00034453) mp4_rocker2_pane_ParamLimits

0x62d8,	// (0x00034453) mp4_rocker2_pane

0xd1cb,	// (0x0003b346) mp4_rocker2_pane_g1

0xd1d3,	// (0x0003b34e) mp4_rocker2_pane_g2

0x651d,	// (0x00034698) mp4_rocker2_pane_g3

0x6525,	// (0x000346a0) mp4_rocker2_pane_g4

0x652d,	// (0x000346a8) mp4_rocker2_pane_g5

0x0004,

0xf8d1,	// (0x0003da4c) mp4_rocker2_pane_g

0x18db,	// (0x0002fa56) main_camera4_pane

0x18db,	// (0x0002fa56) main_video4_pane

0x0de8,	// (0x0002ef63) main_video_tele_dialer_pane_t1_ParamLimits

0x0de8,	// (0x0002ef63) main_video_tele_dialer_pane_t1

0x0e01,	// (0x0002ef7c) main_video_tele_dialer_pane_t2_ParamLimits

0x0e01,	// (0x0002ef7c) main_video_tele_dialer_pane_t2

0x0001,

0xf88b,	// (0x0003da06) main_video_tele_dialer_pane_t_ParamLimits

0xf88b,	// (0x0003da06) main_video_tele_dialer_pane_t

0x1139,	// (0x0002f2b4) cam4_autofocus_pane_ParamLimits

0x1139,	// (0x0002f2b4) cam4_autofocus_pane

0x114f,	// (0x0002f2ca) cam4_image_uncrop_pane_ParamLimits

0x114f,	// (0x0002f2ca) cam4_image_uncrop_pane

0x1169,	// (0x0002f2e4) cam4_indicators_pane_ParamLimits

0x1169,	// (0x0002f2e4) cam4_indicators_pane

0x1194,	// (0x0002f30f) main_camera4_pane_g1_ParamLimits

0x1194,	// (0x0002f30f) main_camera4_pane_g1

0x11a6,	// (0x0002f321) main_camera4_pane_g2_ParamLimits

0x11a6,	// (0x0002f321) main_camera4_pane_g2

0x11b9,	// (0x0002f334) main_camera4_pane_g3_ParamLimits

0x11b9,	// (0x0002f334) main_camera4_pane_g3

0x11cc,	// (0x0002f347) main_camera4_pane_g4_ParamLimits

0x11cc,	// (0x0002f347) main_camera4_pane_g4

0x11df,	// (0x0002f35a) main_camera4_pane_g5_ParamLimits

0x11df,	// (0x0002f35a) main_camera4_pane_g5

0x0005,

0xf8dc,	// (0x0003da57) main_camera4_pane_g_ParamLimits

0xf8dc,	// (0x0003da57) main_camera4_pane_g

0x1203,	// (0x0002f37e) main_camera4_pane_t1_ParamLimits

0x1203,	// (0x0002f37e) main_camera4_pane_t1

0x6565,	// (0x000346e0) bg_tb_trans_pane_cp06

0x657b,	// (0x000346f6) cam4_indicators_pane_g1

0x658c,	// (0x00034707) cam4_indicators_pane_g2

0x0002,

0xf8f7,	// (0x0003da72) cam4_indicators_pane_g

0x65aa,	// (0x00034725) cam4_indicators_pane_t1

0x1253,	// (0x0002f3ce) main_video4_pane_g1_ParamLimits

0x1253,	// (0x0002f3ce) main_video4_pane_g1

0x1262,	// (0x0002f3dd) main_video4_pane_g2_ParamLimits

0x1262,	// (0x0002f3dd) main_video4_pane_g2

0x1271,	// (0x0002f3ec) main_video4_pane_g3_ParamLimits

0x1271,	// (0x0002f3ec) main_video4_pane_g3

0x1280,	// (0x0002f3fb) main_video4_pane_g4_ParamLimits

0x1280,	// (0x0002f3fb) main_video4_pane_g4

0x0004,

0xf8fe,	// (0x0003da79) main_video4_pane_g_ParamLimits

0xf8fe,	// (0x0003da79) main_video4_pane_g

0x129e,	// (0x0002f419) vid4_indicators_pane_ParamLimits

0x129e,	// (0x0002f419) vid4_indicators_pane

0x12cc,	// (0x0002f447) video4_image_uncrop_cif_pane_ParamLimits

0x12cc,	// (0x0002f447) video4_image_uncrop_cif_pane

0x12e6,	// (0x0002f461) video4_image_uncrop_nhd_pane_ParamLimits

0x12e6,	// (0x0002f461) video4_image_uncrop_nhd_pane

0x114f,	// (0x0002f2ca) video4_image_uncrop_vga_pane_ParamLimits

0x114f,	// (0x0002f2ca) video4_image_uncrop_vga_pane

0x18c1,	// (0x0002fa3c) bg_tb_trans_pane_cp07

0x65d4,	// (0x0003474f) vid4_indicators_pane_g1

0x65e8,	// (0x00034763) vid4_indicators_pane_g2

0x65fc,	// (0x00034777) vid4_indicators_pane_g3

0x0004,

0xf909,	// (0x0003da84) vid4_indicators_pane_g

0x6629,	// (0x000347a4) vid4_indicators_pane_t1

0x6640,	// (0x000347bb) cam4_autofocus_pane_g1

0x6648,	// (0x000347c3) cam4_autofocus_pane_g2

0x6650,	// (0x000347cb) cam4_autofocus_pane_g3

0x0002,

0xf914,	// (0x0003da8f) cam4_autofocus_pane_g

0x6658,	// (0x000347d3) cam4_autofocus_pane_g3_copy1

0x60d3,	// (0x0003424e) video_down_pane_cp_t1

0x60e1,	// (0x0003425c) video_down_pane_cp_t2

0x0001,

0xf890,	// (0x0003da0b) video_down_pane_cp_t

0x18c1,	// (0x0002fa3c) popup_vitu2_window_ParamLimits

0x18c1,	// (0x0002fa3c) popup_vitu2_window

0x12fa,	// (0x0002f475) aid_size_cell2_itu2_ParamLimits

0x12fa,	// (0x0002f475) aid_size_cell2_itu2

0x1320,	// (0x0002f49b) aid_size_cell_itu2_ParamLimits

0x1320,	// (0x0002f49b) aid_size_cell_itu2

0x137c,	// (0x0002f4f7) bg_popup_window_pane_cp09_ParamLimits

0x137c,	// (0x0002f4f7) bg_popup_window_pane_cp09

0x138a,	// (0x0002f505) field_vitu2_entry_pane_ParamLimits

0x138a,	// (0x0002f505) field_vitu2_entry_pane

0x13b0,	// (0x0002f52b) grid_vitu2_function_pane_ParamLimits

0x13b0,	// (0x0002f52b) grid_vitu2_function_pane

0x1401,	// (0x0002f57c) grid_vitu2_itu_pane_ParamLimits

0x1401,	// (0x0002f57c) grid_vitu2_itu_pane

0x1492,	// (0x0002f60d) cell_vitu2_itu_pane_ParamLimits

0x1492,	// (0x0002f60d) cell_vitu2_itu_pane

0x14b6,	// (0x0002f631) cell_vitu2_function_pane_ParamLimits

0x14b6,	// (0x0002f631) cell_vitu2_function_pane

0xd1db,	// (0x0003b356) bg_popup_call_pane_cp08_ParamLimits

0xd1db,	// (0x0003b356) bg_popup_call_pane_cp08

0xd1f4,	// (0x0003b36f) field_vitu2_entry_pane_g1

0xd200,	// (0x0003b37b) field_vitu2_entry_pane_g2

0x0002,

0xf91b,	// (0x0003da96) field_vitu2_entry_pane_g

0x6660,	// (0x000347db) field_vitu2_entry_pane_t1_ParamLimits

0x6660,	// (0x000347db) field_vitu2_entry_pane_t1

0xd21a,	// (0x0003b395) field_vitu2_entry_pane_t2_ParamLimits

0xd21a,	// (0x0003b395) field_vitu2_entry_pane_t2

0x0001,

0xf922,	// (0x0003da9d) field_vitu2_entry_pane_t_ParamLimits

0xf922,	// (0x0003da9d) field_vitu2_entry_pane_t

0x14f5,	// (0x0002f670) bg_button_pane_cp010_ParamLimits

0x14f5,	// (0x0002f670) bg_button_pane_cp010

0x1503,	// (0x0002f67e) cell_vitu2_itu_pane_g1

0x152e,	// (0x0002f6a9) cell_vitu2_itu_pane_t1_ParamLimits

0x152e,	// (0x0002f6a9) cell_vitu2_itu_pane_t1

0x158c,	// (0x0002f707) cell_vitu2_itu_pane_t2_ParamLimits

0x158c,	// (0x0002f707) cell_vitu2_itu_pane_t2

0x0002,

0xf92c,	// (0x0003daa7) cell_vitu2_itu_pane_t_ParamLimits

0xf92c,	// (0x0003daa7) cell_vitu2_itu_pane_t

0x18c1,	// (0x0002fa3c) bg_button_pane_cp011

0x1678,	// (0x0002f7f3) cell_vitu2_function_pane_g1

0x18db,	// (0x0002fa56) main_myfav_hc_pane

0x10e9,	// (0x0002f264) popup_image3_note_pane_ParamLimits

0x10e9,	// (0x0002f264) popup_image3_note_pane

0x1105,	// (0x0002f280) popup_image3_tool_bar_pane_ParamLimits

0x1105,	// (0x0002f280) popup_image3_tool_bar_pane

0x161a,	// (0x0002f795) cell_vitu2_itu_pane_t3_ParamLimits

0x161a,	// (0x0002f795) cell_vitu2_itu_pane_t3

0x9b34,	// (0x00037caf) bg_popup_trans_pane

0xd23f,	// (0x0003b3ba) grid_image3_tool_bar_pane

0xd249,	// (0x0003b3c4) bg_popup_trans_pane_g1

0xa6b0,	// (0x0003882b) bg_popup_trans_pane_g2

0xd251,	// (0x0003b3cc) bg_popup_trans_pane_g3

0xd259,	// (0x0003b3d4) bg_popup_trans_pane_g4

0xd261,	// (0x0003b3dc) bg_popup_trans_pane_g5

0xd269,	// (0x0003b3e4) bg_popup_trans_pane_g6

0xd271,	// (0x0003b3ec) bg_popup_trans_pane_g7

0xd279,	// (0x0003b3f4) bg_popup_trans_pane_g8

0xa690,	// (0x0003880b) bg_popup_trans_pane_g9

0x0008,

0xf933,	// (0x0003daae) bg_popup_trans_pane_g

0xd281,	// (0x0003b3fc) cell_image3_tool_bar_pane_ParamLimits

0xd281,	// (0x0003b3fc) cell_image3_tool_bar_pane

0xc751,	// (0x0003a8cc) cell_image3_tool_bar_pane_g1

0x9b34,	// (0x00037caf) bg_popup_trans_pane_cp1

0xd295,	// (0x0003b410) popup_image3_note_pane_t1

0xd2a3,	// (0x0003b41e) popup_image3_note_pane_t2

0xd2b1,	// (0x0003b42c) popup_image3_note_pane_t3

0x0002,

0xf946,	// (0x0003dac1) popup_image3_note_pane_t

0xd2bf,	// (0x0003b43a) popup_image3_note_pane_t3_copy1

0x6690,	// (0x0003480b) bg_myfav_hc_instruction_pane_ParamLimits

0x6690,	// (0x0003480b) bg_myfav_hc_instruction_pane

0x66a6,	// (0x00034821) cell_myfav_contact_pane_ParamLimits

0x66a6,	// (0x00034821) cell_myfav_contact_pane

0x66c4,	// (0x0003483f) cell_myfav_contact_pane_cp1_ParamLimits

0x66c4,	// (0x0003483f) cell_myfav_contact_pane_cp1

0x66dc,	// (0x00034857) cell_myfav_contact_pane_cp2_ParamLimits

0x66dc,	// (0x00034857) cell_myfav_contact_pane_cp2

0x66f4,	// (0x0003486f) cell_myfav_contact_pane_cp3_ParamLimits

0x66f4,	// (0x0003486f) cell_myfav_contact_pane_cp3

0x670b,	// (0x00034886) cell_myfav_contact_pane_cp4_ParamLimits

0x670b,	// (0x00034886) cell_myfav_contact_pane_cp4

0x6723,	// (0x0003489e) cell_myfav_contact_pane_cp5_ParamLimits

0x6723,	// (0x0003489e) cell_myfav_contact_pane_cp5

0x6737,	// (0x000348b2) cell_myfav_contact_pane_cp6_ParamLimits

0x6737,	// (0x000348b2) cell_myfav_contact_pane_cp6

0x674d,	// (0x000348c8) cell_myfav_contact_pane_cp7_ParamLimits

0x674d,	// (0x000348c8) cell_myfav_contact_pane_cp7

0xd2cd,	// (0x0003b448) listscroll_gen_pane_cp05

0x6767,	// (0x000348e2) main_myfav_hc_pane_g1_ParamLimits

0x6767,	// (0x000348e2) main_myfav_hc_pane_g1

0x6781,	// (0x000348fc) main_myfav_hc_pane_g2_ParamLimits

0x6781,	// (0x000348fc) main_myfav_hc_pane_g2

0x0002,

0xf94d,	// (0x0003dac8) main_myfav_hc_pane_g_ParamLimits

0xf94d,	// (0x0003dac8) main_myfav_hc_pane_g

0x67b3,	// (0x0003492e) main_myfav_hc_pane_t1_ParamLimits

0x67b3,	// (0x0003492e) main_myfav_hc_pane_t1

0xd2d6,	// (0x0003b451) main_myfav_hc_pane_t2_ParamLimits

0xd2d6,	// (0x0003b451) main_myfav_hc_pane_t2

0xd2e8,	// (0x0003b463) main_myfav_hc_pane_t3_ParamLimits

0xd2e8,	// (0x0003b463) main_myfav_hc_pane_t3

0x67ca,	// (0x00034945) main_myfav_hc_pane_t4_ParamLimits

0x67ca,	// (0x00034945) main_myfav_hc_pane_t4

0x0004,

0xf954,	// (0x0003dacf) main_myfav_hc_pane_t_ParamLimits

0xf954,	// (0x0003dacf) main_myfav_hc_pane_t

0xc751,	// (0x0003a8cc) bg_myfav_hc_instruction_pane_g1

0xd2fa,	// (0x0003b475) cell_myfav_contact_pane_g1_ParamLimits

0xd2fa,	// (0x0003b475) cell_myfav_contact_pane_g1

0xd2fa,	// (0x0003b475) cell_myfav_contact_pane_g2_ParamLimits

0xd2fa,	// (0x0003b475) cell_myfav_contact_pane_g2

0xd306,	// (0x0003b481) cell_myfav_contact_pane_g3_ParamLimits

0xd306,	// (0x0003b481) cell_myfav_contact_pane_g3

0xca8a,	// (0x0003ac05) cell_myfav_contact_pane_g4_ParamLimits

0xca8a,	// (0x0003ac05) cell_myfav_contact_pane_g4

0xd313,	// (0x0003b48e) cell_myfav_contact_pane_g5_ParamLimits

0xd313,	// (0x0003b48e) cell_myfav_contact_pane_g5

0x0004,

0xf95f,	// (0x0003dada) cell_myfav_contact_pane_g_ParamLimits

0xf95f,	// (0x0003dada) cell_myfav_contact_pane_g

0x679b,	// (0x00034916) main_myfav_hc_pane_g3_ParamLimits

0x679b,	// (0x00034916) main_myfav_hc_pane_g3

0x01b6,	// (0x0002e331) popup_adpt_find_window

0x67f2,	// (0x0003496d) afind_page_pane_ParamLimits

0x67f2,	// (0x0003496d) afind_page_pane

0x6807,	// (0x00034982) aid_size_cell_afind_ParamLimits

0x6807,	// (0x00034982) aid_size_cell_afind

0x6825,	// (0x000349a0) bg_popup_sub_pane_cp09_ParamLimits

0x6825,	// (0x000349a0) bg_popup_sub_pane_cp09

0x6832,	// (0x000349ad) find_pane_cp01_ParamLimits

0x6832,	// (0x000349ad) find_pane_cp01

0xd31f,	// (0x0003b49a) grid_afind_control_pane_ParamLimits

0xd31f,	// (0x0003b49a) grid_afind_control_pane

0x683f,	// (0x000349ba) grid_afind_pane_ParamLimits

0x683f,	// (0x000349ba) grid_afind_pane

0x685e,	// (0x000349d9) cell_afind_pane_ParamLimits

0x685e,	// (0x000349d9) cell_afind_pane

0xc751,	// (0x0003a8cc) afind_page_pane_g1

0x68bf,	// (0x00034a3a) afind_page_pane_g2

0x68c8,	// (0x00034a43) afind_page_pane_g3

0x0002,

0xf96a,	// (0x0003dae5) afind_page_pane_g

0x68d1,	// (0x00034a4c) afind_page_pane_t1

0xd333,	// (0x0003b4ae) cell_afind_grid_control_pane_ParamLimits

0xd333,	// (0x0003b4ae) cell_afind_grid_control_pane

0xd0ee,	// (0x0003b269) bg_button_pane_cp69_ParamLimits

0xd0ee,	// (0x0003b269) bg_button_pane_cp69

0x68f1,	// (0x00034a6c) cell_afind_pane_g1_ParamLimits

0x68f1,	// (0x00034a6c) cell_afind_pane_g1

0x68fe,	// (0x00034a79) cell_afind_pane_t1_ParamLimits

0x68fe,	// (0x00034a79) cell_afind_pane_t1

0xa4a9,	// (0x00038624) bg_button_pane_cp72

0xd342,	// (0x0003b4bd) cell_afind_grid_control_pane_g1

0x44c9,	// (0x00032644) aid_image_placing_area_ParamLimits

0x44c9,	// (0x00032644) aid_image_placing_area

0xcd9e,	// (0x0003af19) field_vitu_entry_pane_g1_ParamLimits

0xcd9e,	// (0x0003af19) field_vitu_entry_pane_g1

0xcdaa,	// (0x0003af25) field_vitu_entry_pane_g2_ParamLimits

0xcdaa,	// (0x0003af25) field_vitu_entry_pane_g2

0x0001,

0xf81b,	// (0x0003d996) field_vitu_entry_pane_g_ParamLimits

0xf81b,	// (0x0003d996) field_vitu_entry_pane_g

0x5f12,	// (0x0003408d) cell_vitu_itu_pane_g1_ParamLimits

0x5f62,	// (0x000340dd) cell_vitu_itu_pane_t3_ParamLimits

0x5f62,	// (0x000340dd) cell_vitu_itu_pane_t3

0xd094,	// (0x0003b20f) mp4_progress_pane_t1_ParamLimits

0xd0ad,	// (0x0003b228) mp4_progress_pane_t2_ParamLimits

0xf8b0,	// (0x0003da2b) mp4_progress_pane_t_ParamLimits

0xd0c6,	// (0x0003b241) mup_progress_pane_cp04_ParamLimits

0x67de,	// (0x00034959) main_myfav_hc_pane_t5_ParamLimits

0x67de,	// (0x00034959) main_myfav_hc_pane_t5

0x183e,	// (0x0002f9b9) aid_zoom_text_primary

0x01b6,	// (0x0002e331) popup_adpt_find_window_ParamLimits

0x18c1,	// (0x0002fa3c) main_cam_set_pane

0x1180,	// (0x0002f2fb) cam4_zoom_pane_ParamLimits

0x1180,	// (0x0002f2fb) cam4_zoom_pane

0x6910,	// (0x00034a8b) main_cam_set_pane_g1_ParamLimits

0x6910,	// (0x00034a8b) main_cam_set_pane_g1

0x691e,	// (0x00034a99) main_cam_set_pane_g2_ParamLimits

0x691e,	// (0x00034a99) main_cam_set_pane_g2

0x0001,

0xf971,	// (0x0003daec) main_cam_set_pane_g_ParamLimits

0xf971,	// (0x0003daec) main_cam_set_pane_g

0x693f,	// (0x00034aba) main_cam_set_pane_t1_ParamLimits

0x693f,	// (0x00034aba) main_cam_set_pane_t1

0x695a,	// (0x00034ad5) main_cset_listscroll_pane_ParamLimits

0x695a,	// (0x00034ad5) main_cset_listscroll_pane

0x697a,	// (0x00034af5) main_cset_slider_pane_ParamLimits

0x697a,	// (0x00034af5) main_cset_slider_pane

0xd353,	// (0x0003b4ce) main_cset_list_pane_ParamLimits

0xd353,	// (0x0003b4ce) main_cset_list_pane

0xd363,	// (0x0003b4de) scroll_pane_cp028

0x69a0,	// (0x00034b1b) aid_area_touch_slider

0x69bc,	// (0x00034b37) cset_slider_pane

0x69e6,	// (0x00034b61) main_cset_slider_pane_g1

0x69fb,	// (0x00034b76) main_cset_slider_pane_g2

0x0011,

0xf976,	// (0x0003daf1) main_cset_slider_pane_g

0xd39c,	// (0x0003b517) main_cset_slider_pane_t1

0x6ab7,	// (0x00034c32) main_cset_slider_pane_t2

0x6ad1,	// (0x00034c4c) main_cset_slider_pane_t3

0x6aeb,	// (0x00034c66) main_cset_slider_pane_t4

0x6b05,	// (0x00034c80) main_cset_slider_pane_t5

0x6b1f,	// (0x00034c9a) main_cset_slider_pane_t6

0x6b34,	// (0x00034caf) main_cset_slider_pane_t7

0x000e,

0xf99b,	// (0x0003db16) main_cset_slider_pane_t

0x6c38,	// (0x00034db3) cset_list_set_pane_ParamLimits

0x6c38,	// (0x00034db3) cset_list_set_pane

0x6c4b,	// (0x00034dc6) aid_position_infowindow_above

0x6c53,	// (0x00034dce) aid_position_infowindow_below

0x6c5b,	// (0x00034dd6) cset_list_set_pane_g1_ParamLimits

0x6c5b,	// (0x00034dd6) cset_list_set_pane_g1

0x6c67,	// (0x00034de2) cset_list_set_pane_g3_ParamLimits

0x6c67,	// (0x00034de2) cset_list_set_pane_g3

0x0001,

0xf9ba,	// (0x0003db35) cset_list_set_pane_g_ParamLimits

0xf9ba,	// (0x0003db35) cset_list_set_pane_g

0x6c76,	// (0x00034df1) cset_list_set_pane_t1_ParamLimits

0x6c76,	// (0x00034df1) cset_list_set_pane_t1

0xa801,	// (0x0003897c) list_highlight_pane_cp021_ParamLimits

0xa801,	// (0x0003897c) list_highlight_pane_cp021

0xb033,	// (0x000391ae) cset_slider_pane_g1

0xb045,	// (0x000391c0) cset_slider_pane_g2

0xb03c,	// (0x000391b7) cset_slider_pane_g3

0x0002,

0xf9bf,	// (0x0003db3a) cset_slider_pane_g

0x6c8b,	// (0x00034e06) aid_area_touch_cam4_zoom

0x6c93,	// (0x00034e0e) cam4_zoom_cont_pane

0x6c9b,	// (0x00034e16) cam4_zoom_pane_g1

0x6ca3,	// (0x00034e1e) cam4_zoom_pane_g2

0x168c,	// (0x0002f807) cam4_zoom_pane_g3

0x0002,

0xf9c6,	// (0x0003db41) cam4_zoom_pane_g

0x6cab,	// (0x00034e26) cam4_zoom_cont_pane_g1

0x6cb4,	// (0x00034e2f) cam4_zoom_cont_pane_g2

0x6cbd,	// (0x00034e38) cam4_zoom_cont_pane_g3

0x0002,

0xf9cd,	// (0x0003db48) cam4_zoom_cont_pane_g

0x643c,	// (0x000345b7) call4_image_pane_ParamLimits

0x643c,	// (0x000345b7) call4_image_pane

0xd0fa,	// (0x0003b275) call4_windows_conf_pane_ParamLimits

0xd139,	// (0x0003b2b4) popup_call4_audio_in_window_ParamLimits

0xd139,	// (0x0003b2b4) popup_call4_audio_in_window

0x9b34,	// (0x00037caf) bg_popup_call2_act_pane_cp02

0xd1af,	// (0x0003b32a) call4_list_conf_pane

0xc751,	// (0x0003a8cc) call4_image_pane_g1

0xc751,	// (0x0003a8cc) call4_image_pane_g2

0x0001,

0xf6e1,	// (0x0003d85c) call4_image_pane_g

0xd43c,	// (0x0003b5b7) list_single_graphic_popup_conf4_pane_ParamLimits

0xd43c,	// (0x0003b5b7) list_single_graphic_popup_conf4_pane

0x9b34,	// (0x00037caf) list_highlight_pane_cp022

0xd44f,	// (0x0003b5ca) list_single_graphic_popup_conf4_pane_g1

0xac12,	// (0x00038d8d) list_single_graphic_popup_conf4_pane_g2

0x0001,

0xf9d4,	// (0x0003db4f) list_single_graphic_popup_conf4_pane_g

0xd457,	// (0x0003b5d2) list_single_graphic_popup_conf4_pane_t1

0x27ed,	// (0x00030968) popup_vtel_slider_window_ParamLimits

0x27ed,	// (0x00030968) popup_vtel_slider_window

0xd0dc,	// (0x0003b257) dialer2_ne_pane_t2_ParamLimits

0xd0dc,	// (0x0003b257) dialer2_ne_pane_t2

0x0001,

0xf8b5,	// (0x0003da30) dialer2_ne_pane_t_ParamLimits

0xf8b5,	// (0x0003da30) dialer2_ne_pane_t

0xc534,	// (0x0003a6af) bg_popup_sub_pane_cp010_ParamLimits

0xc534,	// (0x0003a6af) bg_popup_sub_pane_cp010

0x6cc6,	// (0x00034e41) popup_vtel_slider_window_g1_ParamLimits

0x6cc6,	// (0x00034e41) popup_vtel_slider_window_g1

0x6cd9,	// (0x00034e54) popup_vtel_slider_window_g2_ParamLimits

0x6cd9,	// (0x00034e54) popup_vtel_slider_window_g2

0x0003,

0xf9d9,	// (0x0003db54) popup_vtel_slider_window_g_ParamLimits

0xf9d9,	// (0x0003db54) popup_vtel_slider_window_g

0x6d2f,	// (0x00034eaa) vtel_slider_pane_ParamLimits

0x6d2f,	// (0x00034eaa) vtel_slider_pane

0x6d51,	// (0x00034ecc) vtel_slider_pane_g1_ParamLimits

0x6d51,	// (0x00034ecc) vtel_slider_pane_g1

0x6d65,	// (0x00034ee0) vtel_slider_pane_g2_ParamLimits

0x6d65,	// (0x00034ee0) vtel_slider_pane_g2

0x6d7d,	// (0x00034ef8) vtel_slider_pane_g3_ParamLimits

0x6d7d,	// (0x00034ef8) vtel_slider_pane_g3

0x6d51,	// (0x00034ecc) vtel_slider_pane_g4_ParamLimits

0x6d51,	// (0x00034ecc) vtel_slider_pane_g4

0x6d93,	// (0x00034f0e) vtel_slider_pane_g5_ParamLimits

0x6d93,	// (0x00034f0e) vtel_slider_pane_g5

0x0004,

0xf9e2,	// (0x0003db5d) vtel_slider_pane_g_ParamLimits

0xf9e2,	// (0x0003db5d) vtel_slider_pane_g

0x18c1,	// (0x0002fa3c) main_gallery2_pane

0x134c,	// (0x0002f4c7) aid_size_row_itut2_dropdow_list_ParamLimits

0x134c,	// (0x0002f4c7) aid_size_row_itut2_dropdow_list

0x13d8,	// (0x0002f553) grid_vitu2_function_top_pane_ParamLimits

0x13d8,	// (0x0002f553) grid_vitu2_function_top_pane

0x143d,	// (0x0002f5b8) popup_vitu2_dropdown_list_window_ParamLimits

0x143d,	// (0x0002f5b8) popup_vitu2_dropdown_list_window

0x1466,	// (0x0002f5e1) popup_vitu2_match_list_window

0x1694,	// (0x0002f80f) cell_vitu2_function_top_pane_ParamLimits

0x1694,	// (0x0002f80f) cell_vitu2_function_top_pane

0x16b2,	// (0x0002f82d) cell_vitu2_function_top_pane_cp01_ParamLimits

0x16b2,	// (0x0002f82d) cell_vitu2_function_top_pane_cp01

0x16d0,	// (0x0002f84b) cell_vitu2_function_top_wide_pane_ParamLimits

0x16d0,	// (0x0002f84b) cell_vitu2_function_top_wide_pane

0x18c1,	// (0x0002fa3c) bg_button_pane_cp012

0x16ee,	// (0x0002f869) cell_vitu2_function_top_pane_g1

0x6db7,	// (0x00034f32) bg_button_pane_cp013_ParamLimits

0x6db7,	// (0x00034f32) bg_button_pane_cp013

0x6dd3,	// (0x00034f4e) cell_vitu2_function_top_wide_pane_g1_ParamLimits

0x6dd3,	// (0x00034f4e) cell_vitu2_function_top_wide_pane_g1

0x18c1,	// (0x0002fa3c) bg_popup_sub_pane_cp20

0x1702,	// (0x0002f87d) list_vitu2_match_list_pane

0xd249,	// (0x0003b3c4) bg_popup_sub_pane_cp20_g1

0xd251,	// (0x0003b3cc) bg_popup_sub_pane_cp20_g2

0xa6b0,	// (0x0003882b) bg_popup_sub_pane_cp20_g3

0xd259,	// (0x0003b3d4) bg_popup_sub_pane_cp20_g4

0xa690,	// (0x0003880b) bg_popup_sub_pane_cp20_g5

0xd46d,	// (0x0003b5e8) bg_popup_sub_pane_cp20_g6

0xd269,	// (0x0003b3e4) bg_popup_sub_pane_cp20_g7

0xd271,	// (0x0003b3ec) bg_popup_sub_pane_cp20_g8

0xd279,	// (0x0003b3f4) bg_popup_sub_pane_cp20_g9

0x0008,

0xf9ed,	// (0x0003db68) bg_popup_sub_pane_cp20_g

0x6deb,	// (0x00034f66) list_vitu2_match_list_item_pane_ParamLimits

0x6deb,	// (0x00034f66) list_vitu2_match_list_item_pane

0x6dfd,	// (0x00034f78) list_vitu2_match_list_item_pane_t1

0x18db,	// (0x0002fa56) bg_popup_sub_pane_cp21

0x6e58,	// (0x00034fd3) grid_vitu2_dropdown_list_pane

0x1720,	// (0x0002f89b) cell_vitu2_dropdown_list_char_pane_ParamLimits

0x1720,	// (0x0002f89b) cell_vitu2_dropdown_list_char_pane

0x1741,	// (0x0002f8bc) cell_vitu2_dropdown_list_ctrl_pane_ParamLimits

0x1741,	// (0x0002f8bc) cell_vitu2_dropdown_list_ctrl_pane

0xd475,	// (0x0003b5f0) cell_vitu2_dropdown_list_char_pane_g1

0xd47e,	// (0x0003b5f9) cell_vitu2_dropdown_list_char_pane_g2

0xd487,	// (0x0003b602) cell_vitu2_dropdown_list_char_pane_g3

0x0002,

0xfa0a,	// (0x0003db85) cell_vitu2_dropdown_list_char_pane_g

0x176d,	// (0x0002f8e8) cell_vitu2_dropdown_list_char_pane_t1

0x6e60,	// (0x00034fdb) cell_vitu2_dropdown_list_ctrl_pane_g1_ParamLimits

0x6e60,	// (0x00034fdb) cell_vitu2_dropdown_list_ctrl_pane_g1

0x6e70,	// (0x00034feb) cell_vitu2_dropdown_list_ctrl_pane_g2_ParamLimits

0x6e70,	// (0x00034feb) cell_vitu2_dropdown_list_ctrl_pane_g2

0x6e81,	// (0x00034ffc) cell_vitu2_dropdown_list_ctrl_pane_g3_ParamLimits

0x6e81,	// (0x00034ffc) cell_vitu2_dropdown_list_ctrl_pane_g3

0x177b,	// (0x0002f8f6) cell_vitu2_dropdown_list_ctrl_pane_g4_ParamLimits

0x177b,	// (0x0002f8f6) cell_vitu2_dropdown_list_ctrl_pane_g4

0x6565,	// (0x000346e0) cell_vitu2_dropdown_list_ctrl_pane_g5_ParamLimits

0x6565,	// (0x000346e0) cell_vitu2_dropdown_list_ctrl_pane_g5

0x0004,

0xfa11,	// (0x0003db8c) cell_vitu2_dropdown_list_ctrl_pane_g_ParamLimits

0xfa11,	// (0x0003db8c) cell_vitu2_dropdown_list_ctrl_pane_g

0x6e91,	// (0x0003500c) aid_size_cell_gallery2_ParamLimits

0x6e91,	// (0x0003500c) aid_size_cell_gallery2

0x6eaf,	// (0x0003502a) grid_gallery2_pane_ParamLimits

0x6eaf,	// (0x0003502a) grid_gallery2_pane

0x6ec9,	// (0x00035044) scroll_pane_cp029_ParamLimits

0x6ec9,	// (0x00035044) scroll_pane_cp029

0x6ed5,	// (0x00035050) cell_gallery2_pane_ParamLimits

0x6ed5,	// (0x00035050) cell_gallery2_pane

0xd490,	// (0x0003b60b) cell_gallery2_pane_g2

0x6f31,	// (0x000350ac) cell_gallery2_pane_g3

0xd498,	// (0x0003b613) cell_gallery2_pane_g4

0xd4a0,	// (0x0003b61b) cell_gallery2_pane_g5

0xaeef,	// (0x0003906a) grid_highlight_pane_cp10

0x1466,	// (0x0002f5e1) popup_vitu2_match_list_window_ParamLimits

0x147b,	// (0x0002f5f6) popup_vitu2_query_window_ParamLimits

0x147b,	// (0x0002f5f6) popup_vitu2_query_window

0x18db,	// (0x0002fa56) bg_vitu2_candi_button_pane

0xd475,	// (0x0003b5f0) cell_vitu2_dropdown_list_char_pane_g1_copy1

0xd47e,	// (0x0003b5f9) cell_vitu2_dropdown_list_char_pane_g2_copy1

0xd487,	// (0x0003b602) cell_vitu2_dropdown_list_char_pane_g2_copy2

0x6f39,	// (0x000350b4) bg_button_pane_cp015

0x6f4d,	// (0x000350c8) bg_button_pane_cp016

0x6f60,	// (0x000350db) bg_button_pane_cp017

0xc347,	// (0x0003a4c2) bg_popup_sub_pane_cp22

0xd4a8,	// (0x0003b623) popup_vitu2_query_window_g1

0x6fa5,	// (0x00035120) popup_vitu2_query_window_g2

0x0002,

0xfa1c,	// (0x0003db97) popup_vitu2_query_window_g

0x6fc4,	// (0x0003513f) popup_vitu2_query_window_t1_ParamLimits

0x6fc4,	// (0x0003513f) popup_vitu2_query_window_t1

0x6ff9,	// (0x00035174) popup_vitu2_query_window_t2_ParamLimits

0x6ff9,	// (0x00035174) popup_vitu2_query_window_t2

0x700b,	// (0x00035186) popup_vitu2_query_window_t3_ParamLimits

0x700b,	// (0x00035186) popup_vitu2_query_window_t3

0x7033,	// (0x000351ae) popup_vitu2_query_window_t4_ParamLimits

0x7033,	// (0x000351ae) popup_vitu2_query_window_t4

0x7054,	// (0x000351cf) popup_vitu2_query_window_t5_ParamLimits

0x7054,	// (0x000351cf) popup_vitu2_query_window_t5

0x0006,

0xfa23,	// (0x0003db9e) popup_vitu2_query_window_t_ParamLimits

0xfa23,	// (0x0003db9e) popup_vitu2_query_window_t

0xd34b,	// (0x0003b4c6) main_cset_text_pane

0x69a0,	// (0x00034b1b) aid_area_touch_slider_ParamLimits

0x69bc,	// (0x00034b37) cset_slider_pane_ParamLimits

0x69e6,	// (0x00034b61) main_cset_slider_pane_g1_ParamLimits

0x69fb,	// (0x00034b76) main_cset_slider_pane_g2_ParamLimits

0xd36c,	// (0x0003b4e7) main_cset_slider_pane_g3_ParamLimits

0xd36c,	// (0x0003b4e7) main_cset_slider_pane_g3

0x6a10,	// (0x00034b8b) main_cset_slider_pane_g4_ParamLimits

0x6a10,	// (0x00034b8b) main_cset_slider_pane_g4

0x6a1f,	// (0x00034b9a) main_cset_slider_pane_g5_ParamLimits

0x6a1f,	// (0x00034b9a) main_cset_slider_pane_g5

0x6a2b,	// (0x00034ba6) main_cset_slider_pane_g6_ParamLimits

0x6a2b,	// (0x00034ba6) main_cset_slider_pane_g6

0xf976,	// (0x0003daf1) main_cset_slider_pane_g_ParamLimits

0xd39c,	// (0x0003b517) main_cset_slider_pane_t1_ParamLimits

0x6ab7,	// (0x00034c32) main_cset_slider_pane_t2_ParamLimits

0x6ad1,	// (0x00034c4c) main_cset_slider_pane_t3_ParamLimits

0x6aeb,	// (0x00034c66) main_cset_slider_pane_t4_ParamLimits

0x6b05,	// (0x00034c80) main_cset_slider_pane_t5_ParamLimits

0x6b1f,	// (0x00034c9a) main_cset_slider_pane_t6_ParamLimits

0x6b34,	// (0x00034caf) main_cset_slider_pane_t7_ParamLimits

0x6b5e,	// (0x00034cd9) main_cset_slider_pane_t8_ParamLimits

0x6b5e,	// (0x00034cd9) main_cset_slider_pane_t8

0x6b86,	// (0x00034d01) main_cset_slider_pane_t9_ParamLimits

0x6b86,	// (0x00034d01) main_cset_slider_pane_t9

0x6bae,	// (0x00034d29) main_cset_slider_pane_t10_ParamLimits

0x6bae,	// (0x00034d29) main_cset_slider_pane_t10

0x6bd6,	// (0x00034d51) main_cset_slider_pane_t11_ParamLimits

0x6bd6,	// (0x00034d51) main_cset_slider_pane_t11

0x6bfe,	// (0x00034d79) main_cset_slider_pane_t12_ParamLimits

0x6bfe,	// (0x00034d79) main_cset_slider_pane_t12

0x6c1b,	// (0x00034d96) main_cset_slider_pane_t13_ParamLimits

0x6c1b,	// (0x00034d96) main_cset_slider_pane_t13

0xf99b,	// (0x0003db16) main_cset_slider_pane_t_ParamLimits

0x9b34,	// (0x00037caf) bg_popup_sub_pane_cp011

0xd4b4,	// (0x0003b62f) main_cset_text_pane_g1

0xd4bc,	// (0x0003b637) main_cset_text_pane_t1

0xd4ca,	// (0x0003b645) main_cset_text_pane_t2

0xd4d8,	// (0x0003b653) main_cset_text_pane_t3

0xd4e6,	// (0x0003b661) main_cset_text_pane_t4

0xd4f4,	// (0x0003b66f) main_cset_text_pane_t5

0xd502,	// (0x0003b67d) main_cset_text_pane_t6

0xd510,	// (0x0003b68b) main_cset_text_pane_t7

0x0006,

0xfa32,	// (0x0003dbad) main_cset_text_pane_t

0x18db,	// (0x0002fa56) main_cam4_burst_pane

0x18db,	// (0x0002fa56) main_cam5_pane

0x68df,	// (0x00034a5a) bg_button_pane_cp019

0x68e8,	// (0x00034a63) bg_button_pane_cp020

0xd378,	// (0x0003b4f3) main_cset_slider_pane_g7_ParamLimits

0xd378,	// (0x0003b4f3) main_cset_slider_pane_g7

0xd384,	// (0x0003b4ff) main_cset_slider_pane_g8_ParamLimits

0xd384,	// (0x0003b4ff) main_cset_slider_pane_g8

0x6a3f,	// (0x00034bba) main_cset_slider_pane_g9_ParamLimits

0x6a3f,	// (0x00034bba) main_cset_slider_pane_g9

0x6a4b,	// (0x00034bc6) main_cset_slider_pane_g10_ParamLimits

0x6a4b,	// (0x00034bc6) main_cset_slider_pane_g10

0x6a57,	// (0x00034bd2) main_cset_slider_pane_g11_ParamLimits

0x6a57,	// (0x00034bd2) main_cset_slider_pane_g11

0x6a63,	// (0x00034bde) main_cset_slider_pane_g12_ParamLimits

0x6a63,	// (0x00034bde) main_cset_slider_pane_g12

0x6a6f,	// (0x00034bea) main_cset_slider_pane_g13_ParamLimits

0x6a6f,	// (0x00034bea) main_cset_slider_pane_g13

0x6a7b,	// (0x00034bf6) main_cset_slider_pane_g14_ParamLimits

0x6a7b,	// (0x00034bf6) main_cset_slider_pane_g14

0x6a87,	// (0x00034c02) main_cset_slider_pane_g15_ParamLimits

0x6a87,	// (0x00034c02) main_cset_slider_pane_g15

0xd3ca,	// (0x0003b545) main_cset_slider_pane_t14_ParamLimits

0xd3ca,	// (0x0003b545) main_cset_slider_pane_t14

0xd403,	// (0x0003b57e) main_cset_slider_pane_t15_ParamLimits

0xd403,	// (0x0003b57e) main_cset_slider_pane_t15

0x70cb,	// (0x00035246) aid_cam4_burst_size_cell_ParamLimits

0x70cb,	// (0x00035246) aid_cam4_burst_size_cell

0x70eb,	// (0x00035266) grid_cam4_burst_pane_ParamLimits

0x70eb,	// (0x00035266) grid_cam4_burst_pane

0x7123,	// (0x0003529e) linegrid_cam4_burst_pane_ParamLimits

0x7123,	// (0x0003529e) linegrid_cam4_burst_pane

0xd51e,	// (0x0003b699) scroll_pane_cp30_ParamLimits

0xd51e,	// (0x0003b699) scroll_pane_cp30

0x7149,	// (0x000352c4) cell_cam4_burst_pane_ParamLimits

0x7149,	// (0x000352c4) cell_cam4_burst_pane

0xd52a,	// (0x0003b6a5) linegrid_cam4_burst_pane_g1_ParamLimits

0xd52a,	// (0x0003b6a5) linegrid_cam4_burst_pane_g1

0x7196,	// (0x00035311) linegrid_cam4_burst_pane_g2_ParamLimits

0x7196,	// (0x00035311) linegrid_cam4_burst_pane_g2

0xd537,	// (0x0003b6b2) linegrid_cam4_burst_pane_g3_ParamLimits

0xd537,	// (0x0003b6b2) linegrid_cam4_burst_pane_g3

0x0002,

0xfa41,	// (0x0003dbbc) linegrid_cam4_burst_pane_g_ParamLimits

0xfa41,	// (0x0003dbbc) linegrid_cam4_burst_pane_g

0x71a7,	// (0x00035322) linegrid_cam4_burst_pane_g3_copy1_ParamLimits

0x71a7,	// (0x00035322) linegrid_cam4_burst_pane_g3_copy1

0xd544,	// (0x0003b6bf) linegrid_cam4_burst_pane_g4_ParamLimits

0xd544,	// (0x0003b6bf) linegrid_cam4_burst_pane_g4

0x71c1,	// (0x0003533c) linegrid_cam4_burst_pane_g5_ParamLimits

0x71c1,	// (0x0003533c) linegrid_cam4_burst_pane_g5

0x71d2,	// (0x0003534d) linegrid_cam4_burst_pane_g6_ParamLimits

0x71d2,	// (0x0003534d) linegrid_cam4_burst_pane_g6

0xd551,	// (0x0003b6cc) linegrid_cam4_burst_pane_g7_ParamLimits

0xd551,	// (0x0003b6cc) linegrid_cam4_burst_pane_g7

0x71e9,	// (0x00035364) cell_cam4_burst_pane_g1

0xd56a,	// (0x0003b6e5) main_cam5_pane_t1_ParamLimits

0xd56a,	// (0x0003b6e5) main_cam5_pane_t1

0xd57c,	// (0x0003b6f7) main_cam5_pane_t2_ParamLimits

0xd57c,	// (0x0003b6f7) main_cam5_pane_t2

0xd58e,	// (0x0003b709) main_cam5_pane_t3_ParamLimits

0xd58e,	// (0x0003b709) main_cam5_pane_t3

0xd5a0,	// (0x0003b71b) main_cam5_pane_t4_ParamLimits

0xd5a0,	// (0x0003b71b) main_cam5_pane_t4

0xd5b8,	// (0x0003b733) main_cam5_pane_t5_ParamLimits

0xd5b8,	// (0x0003b733) main_cam5_pane_t5

0xd5cc,	// (0x0003b747) main_cam5_pane_t6_ParamLimits

0xd5cc,	// (0x0003b747) main_cam5_pane_t6

0xd5e0,	// (0x0003b75b) main_cam5_pane_t7_ParamLimits

0xd5e0,	// (0x0003b75b) main_cam5_pane_t7

0xd5f2,	// (0x0003b76d) main_cam5_pane_t8_ParamLimits

0xd5f2,	// (0x0003b76d) main_cam5_pane_t8

0xd60e,	// (0x0003b789) main_cam5_pane_t9_ParamLimits

0xd60e,	// (0x0003b789) main_cam5_pane_t9

0xd620,	// (0x0003b79b) main_cam5_pane_t10_ParamLimits

0xd620,	// (0x0003b79b) main_cam5_pane_t10

0xd632,	// (0x0003b7ad) main_cam5_pane_t11_ParamLimits

0xd632,	// (0x0003b7ad) main_cam5_pane_t11

0xd644,	// (0x0003b7bf) main_cam5_pane_t12_ParamLimits

0xd644,	// (0x0003b7bf) main_cam5_pane_t12

0xd659,	// (0x0003b7d4) main_cam5_pane_t13_ParamLimits

0xd659,	// (0x0003b7d4) main_cam5_pane_t13

0x000c,

0xfa4d,	// (0x0003dbc8) main_cam5_pane_t_ParamLimits

0xfa4d,	// (0x0003dbc8) main_cam5_pane_t

0x0238,	// (0x0002e3b3) popup_scut_keymap_window_ParamLimits

0x0238,	// (0x0002e3b3) popup_scut_keymap_window

0x71fe,	// (0x00035379) aid_size_cell_brow_shortcut

0xaeef,	// (0x0003906a) bg_popup_window_pane_cp010

0x720a,	// (0x00035385) grid_scut_pane

0x7216,	// (0x00035391) cell_scut_pane_ParamLimits

0x7216,	// (0x00035391) cell_scut_pane

0x722d,	// (0x000353a8) cell_scut_pane_g1

0xd676,	// (0x0003b7f1) cell_scut_pane_t1

0xd685,	// (0x0003b800) cell_scut_pane_t2

0x7236,	// (0x000353b1) cell_scut_pane_t3

0x0002,

0xfa68,	// (0x0003dbe3) cell_scut_pane_t

0x5473,	// (0x000335ee) main_mup3_pane_g8_ParamLimits

0x5473,	// (0x000335ee) main_mup3_pane_g8

0x1364,	// (0x0002f4df) area_vitu2_query_pane_ParamLimits

0x1364,	// (0x0002f4df) area_vitu2_query_pane

0x6f73,	// (0x000350ee) input_focus_pane_cp08

0xd694,	// (0x0003b80f) area_vitu2_query_pane_g1

0x7244,	// (0x000353bf) area_vitu2_query_pane_g2

0x0001,

0xfa6f,	// (0x0003dbea) area_vitu2_query_pane_g

0x7255,	// (0x000353d0) area_vitu2_query_pane_t1_ParamLimits

0x7255,	// (0x000353d0) area_vitu2_query_pane_t1

0x7269,	// (0x000353e4) area_vitu2_query_pane_t2_ParamLimits

0x7269,	// (0x000353e4) area_vitu2_query_pane_t2

0x727d,	// (0x000353f8) area_vitu2_query_pane_t3_ParamLimits

0x727d,	// (0x000353f8) area_vitu2_query_pane_t3

0xd6a0,	// (0x0003b81b) area_vitu2_query_pane_t4_ParamLimits

0xd6a0,	// (0x0003b81b) area_vitu2_query_pane_t4

0xd6c8,	// (0x0003b843) area_vitu2_query_pane_t5_ParamLimits

0xd6c8,	// (0x0003b843) area_vitu2_query_pane_t5

0xd6f0,	// (0x0003b86b) area_vitu2_query_pane_t6_ParamLimits

0xd6f0,	// (0x0003b86b) area_vitu2_query_pane_t6

0x0006,

0xfa74,	// (0x0003dbef) area_vitu2_query_pane_t_ParamLimits

0xfa74,	// (0x0003dbef) area_vitu2_query_pane_t

0x72a5,	// (0x00035420) bg_button_pane_cp018

0x72b3,	// (0x0003542e) bg_button_pane_cp021

0x72bf,	// (0x0003543a) bg_button_pane_cp022

0x72d0,	// (0x0003544b) input_focus_pane_cp09

0xad36,	// (0x00038eb1) aid_size_touch_mv_arrow_left

0xad61,	// (0x00038edc) aid_size_touch_mv_arrow_right

0x6a9f,	// (0x00034c1a) main_cset_slider_pane_g16_ParamLimits

0x6a9f,	// (0x00034c1a) main_cset_slider_pane_g16

0x6aab,	// (0x00034c26) main_cset_slider_pane_g17_ParamLimits

0x6aab,	// (0x00034c26) main_cset_slider_pane_g17

0x71e9,	// (0x00035364) cell_cam4_burst_pane_g1_ParamLimits

0x9b34,	// (0x00037caf) compa_mode_pane

0x6ce9,	// (0x00034e64) popup_vtel_slider_window_g3_ParamLimits

0x6ce9,	// (0x00034e64) popup_vtel_slider_window_g3

0x6d00,	// (0x00034e7b) popup_vtel_slider_window_g4_ParamLimits

0x6d00,	// (0x00034e7b) popup_vtel_slider_window_g4

0x6d17,	// (0x00034e92) popup_vtel_slider_window_t1_ParamLimits

0x6d17,	// (0x00034e92) popup_vtel_slider_window_t1

0x18db,	// (0x0002fa56) main_cl_pane

0x4a07,	// (0x00032b82) popup_imed_adjust2_window_ParamLimits

0xc347,	// (0x0003a4c2) bg_tb_trans_pane_cp05_ParamLimits

0xccca,	// (0x0003ae45) popup_imed_adjust2_window_g1_ParamLimits

0xccd9,	// (0x0003ae54) popup_imed_adjust2_window_g2_ParamLimits

0xccd9,	// (0x0003ae54) popup_imed_adjust2_window_g2

0xcce5,	// (0x0003ae60) popup_imed_adjust2_window_g3_ParamLimits

0xcce5,	// (0x0003ae60) popup_imed_adjust2_window_g3

0x0002,

0xf7df,	// (0x0003d95a) popup_imed_adjust2_window_g_ParamLimits

0xf7df,	// (0x0003d95a) popup_imed_adjust2_window_g

0xccf1,	// (0x0003ae6c) popup_imed_adjust2_window_t1_ParamLimits

0xcd09,	// (0x0003ae84) slider_imed_adjust_pane_ParamLimits

0xcd1d,	// (0x0003ae98) slider_imed_adjust_pane_g1_ParamLimits

0xcd2d,	// (0x0003aea8) slider_imed_adjust_pane_g2_ParamLimits

0xcd3d,	// (0x0003aeb8) slider_imed_adjust_pane_g3_ParamLimits

0xcd4e,	// (0x0003aec9) slider_imed_adjust_pane_g4_ParamLimits

0xf7e6,	// (0x0003d961) slider_imed_adjust_pane_g_ParamLimits

0x1121,	// (0x0002f29c) aid_touch_area_cam4_ParamLimits

0x1121,	// (0x0002f29c) aid_touch_area_cam4

0x6535,	// (0x000346b0) battery_pane_cp01

0x11f0,	// (0x0002f36b) main_camera4_pane_g6_ParamLimits

0x11f0,	// (0x0002f36b) main_camera4_pane_g6

0x121a,	// (0x0002f395) main_camera4_pane_t2_ParamLimits

0x121a,	// (0x0002f395) main_camera4_pane_t2

0x0001,

0xf8e9,	// (0x0003da64) main_camera4_pane_t_ParamLimits

0xf8e9,	// (0x0003da64) main_camera4_pane_t

0x123b,	// (0x0002f3b6) aid_touch_area_vid4_ParamLimits

0x123b,	// (0x0002f3b6) aid_touch_area_vid4

0x128f,	// (0x0002f40a) main_video4_pane_g5_ParamLimits

0x128f,	// (0x0002f40a) main_video4_pane_g5

0x12b4,	// (0x0002f42f) vid4_progress_pane_ParamLimits

0x12b4,	// (0x0002f42f) vid4_progress_pane

0xd390,	// (0x0003b50b) main_cset_slider_pane_g18_ParamLimits

0xd390,	// (0x0003b50b) main_cset_slider_pane_g18

0xd55e,	// (0x0003b6d9) cell_cam4_burst_pane_g2_ParamLimits

0xd55e,	// (0x0003b6d9) cell_cam4_burst_pane_g2

0x0001,

0xfa48,	// (0x0003dbc3) cell_cam4_burst_pane_g_ParamLimits

0xfa48,	// (0x0003dbc3) cell_cam4_burst_pane_g

0xa290,	// (0x0003840b) bg_cl_pane_ParamLimits

0xa290,	// (0x0003840b) bg_cl_pane

0x72e1,	// (0x0003545c) cl_header_pane_ParamLimits

0x72e1,	// (0x0003545c) cl_header_pane

0x72f5,	// (0x00035470) cl_listscroll_pane_ParamLimits

0x72f5,	// (0x00035470) cl_listscroll_pane

0xd73c,	// (0x0003b8b7) bg_cl_pane_g1

0xd744,	// (0x0003b8bf) bg_cl_pane_g2

0xd74c,	// (0x0003b8c7) bg_cl_pane_g3

0xd754,	// (0x0003b8cf) bg_cl_pane_g4

0xd75c,	// (0x0003b8d7) bg_cl_pane_g5

0xd764,	// (0x0003b8df) bg_cl_pane_g6

0xd76c,	// (0x0003b8e7) bg_cl_pane_g7

0xd774,	// (0x0003b8ef) bg_cl_pane_g8

0xd77c,	// (0x0003b8f7) bg_cl_pane_g9

0x0008,

0xfa83,	// (0x0003dbfe) bg_cl_pane_g

0x7305,	// (0x00035480) aid_height_cl_leading_ParamLimits

0x7305,	// (0x00035480) aid_height_cl_leading

0x7311,	// (0x0003548c) aid_height_cl_text_ParamLimits

0x7311,	// (0x0003548c) aid_height_cl_text

0xa801,	// (0x0003897c) bg_cl_header_pane_ParamLimits

0xa801,	// (0x0003897c) bg_cl_header_pane

0x7330,	// (0x000354ab) cl_header_pane_g1_ParamLimits

0x7330,	// (0x000354ab) cl_header_pane_g1

0x7346,	// (0x000354c1) cl_header_pane_t1_ParamLimits

0x7346,	// (0x000354c1) cl_header_pane_t1

0xd784,	// (0x0003b8ff) cl_list_pane

0xd363,	// (0x0003b4de) hc_scroll_pane_cp01

0xa690,	// (0x0003880b) bg_cl_header_pane_g1

0xd249,	// (0x0003b3c4) bg_cl_header_pane_g2

0xa6b0,	// (0x0003882b) bg_cl_header_pane_g3

0xd259,	// (0x0003b3d4) bg_cl_header_pane_g4

0xd251,	// (0x0003b3cc) bg_cl_header_pane_g5

0xd46d,	// (0x0003b5e8) bg_cl_header_pane_g6

0xd271,	// (0x0003b3ec) bg_cl_header_pane_g7

0xd279,	// (0x0003b3f4) bg_cl_header_pane_g8

0xd269,	// (0x0003b3e4) bg_cl_header_pane_g9

0x0008,

0xfa96,	// (0x0003dc11) bg_cl_header_pane_g

0x735f,	// (0x000354da) hc_cl_list_double_graphic_heading_pane_ParamLimits

0x735f,	// (0x000354da) hc_cl_list_double_graphic_heading_pane

0x7370,	// (0x000354eb) hc_cl_list_single_graphic_pane_ParamLimits

0x7370,	// (0x000354eb) hc_cl_list_single_graphic_pane

0x7389,	// (0x00035504) hc_cl_list_single_graphic_pane_g1_ParamLimits

0x7389,	// (0x00035504) hc_cl_list_single_graphic_pane_g1

0x7395,	// (0x00035510) hc_cl_list_single_graphic_pane_g2_ParamLimits

0x7395,	// (0x00035510) hc_cl_list_single_graphic_pane_g2

0x0001,

0xfaa9,	// (0x0003dc24) hc_cl_list_single_graphic_pane_g_ParamLimits

0xfaa9,	// (0x0003dc24) hc_cl_list_single_graphic_pane_g

0x73a9,	// (0x00035524) hc_cl_list_single_graphic_pane_t1_ParamLimits

0x73a9,	// (0x00035524) hc_cl_list_single_graphic_pane_t1

0x7389,	// (0x00035504) hc_cl_list_double_graphic_heading_pane_g1_ParamLimits

0x7389,	// (0x00035504) hc_cl_list_double_graphic_heading_pane_g1

0x73be,	// (0x00035539) hc_cl_list_double_graphic_heading_pane_g2_ParamLimits

0x73be,	// (0x00035539) hc_cl_list_double_graphic_heading_pane_g2

0x73d2,	// (0x0003554d) hc_cl_list_double_graphic_heading_pane_g3_ParamLimits

0x73d2,	// (0x0003554d) hc_cl_list_double_graphic_heading_pane_g3

0x0002,

0xfaae,	// (0x0003dc29) hc_cl_list_double_graphic_heading_pane_g_ParamLimits

0xfaae,	// (0x0003dc29) hc_cl_list_double_graphic_heading_pane_g

0x73e6,	// (0x00035561) hc_cl_list_double_graphic_heading_pane_t1_ParamLimits

0x73e6,	// (0x00035561) hc_cl_list_double_graphic_heading_pane_t1

0x73fb,	// (0x00035576) hc_cl_list_double_graphic_heading_pane_t2_ParamLimits

0x73fb,	// (0x00035576) hc_cl_list_double_graphic_heading_pane_t2

0x0001,

0xfab5,	// (0x0003dc30) hc_cl_list_double_graphic_heading_pane_t_ParamLimits

0xfab5,	// (0x0003dc30) hc_cl_list_double_graphic_heading_pane_t

0x1797,	// (0x0002f912) vid4_progress_pane_g1

0x17a9,	// (0x0002f924) vid4_progress_pane_g2

0xa995,	// (0x00038b10) vid4_progress_pane_g3

0x7418,	// (0x00035593) vid4_progress_pane_g4

0x0004,

0xfaba,	// (0x0003dc35) vid4_progress_pane_g

0x7436,	// (0x000355b1) vid4_progress_pane_t1

0x744b,	// (0x000355c6) vid4_progress_pane_t2

0x0002,

0xfac5,	// (0x0003dc40) vid4_progress_pane_t

0x7477,	// (0x000355f2) wait_bar_pane_cp07

0xc542,	// (0x0003a6bd) blid_firmament_pane_ParamLimits

0xc585,	// (0x0003a700) popup_blid_sat_info2_window_g1

0xc5a9,	// (0x0003a724) popup_blid_sat_info2_window_t3

0xc5b7,	// (0x0003a732) popup_blid_sat_info2_window_t4

0xc5c5,	// (0x0003a740) popup_blid_sat_info2_window_t5

0xc5d3,	// (0x0003a74e) popup_blid_sat_info2_window_t6

0xc5e3,	// (0x0003a75e) popup_blid_sat_info2_window_t7

0xc5f1,	// (0x0003a76c) popup_blid_sat_info2_window_t8

0xc5ff,	// (0x0003a77a) popup_blid_sat_info2_window_t9

0xc60d,	// (0x0003a788) popup_blid_sat_info2_window_t10

0xc6d1,	// (0x0003a84c) aid_firma_cardinal_ParamLimits

0xc6e5,	// (0x0003a860) blid_firmament_pane_t1_ParamLimits

0xc6fc,	// (0x0003a877) blid_firmament_pane_t2_ParamLimits

0xc713,	// (0x0003a88e) blid_firmament_pane_t3_ParamLimits

0xc72a,	// (0x0003a8a5) blid_firmament_pane_t4_ParamLimits

0xf6d8,	// (0x0003d853) blid_firmament_pane_t_ParamLimits

0xc741,	// (0x0003a8bc) blid_sat_info_pane_ParamLimits

0x18c1,	// (0x0002fa3c) main_cam_set_pane_ParamLimits

0x5cc1,	// (0x00033e3c) aid_size_cell_colour_35_ParamLimits

0x5ce1,	// (0x00033e5c) aid_size_cell_colour_112_ParamLimits

0x5d01,	// (0x00033e7c) aid_size_cell_effect_ParamLimits

0xc347,	// (0x0003a4c2) bg_tb_trans_pane_cp02_ParamLimits

0xa91c,	// (0x00038a97) heading_imed_pane_ParamLimits

0x5d21,	// (0x00033e9c) listscroll_imed_pane_ParamLimits

0xb96d,	// (0x00039ae8) popup_call2_audio_first_window_g5_ParamLimits

0xb96d,	// (0x00039ae8) popup_call2_audio_first_window_g5

0x0efe,	// (0x0002f079) aid_size_touch_image3_arrow_left_ParamLimits

0x0efe,	// (0x0002f079) aid_size_touch_image3_arrow_left

0x0f2a,	// (0x0002f0a5) aid_size_touch_image3_arrow_right_ParamLimits

0x0f2a,	// (0x0002f0a5) aid_size_touch_image3_arrow_right

0x7461,	// (0x000355dc) vid4_progress_pane_t3

0x604d,	// (0x000341c8) main_hwr_training_symbol_option_pane_ParamLimits

0x604d,	// (0x000341c8) main_hwr_training_symbol_option_pane

0xcfd4,	// (0x0003b14f) popup_hwr_training_preview_window_ParamLimits

0xcfd4,	// (0x0003b14f) popup_hwr_training_preview_window

0x0da3,	// (0x0002ef1e) hwr_training_navi_pane_g5_ParamLimits

0x0da3,	// (0x0002ef1e) hwr_training_navi_pane_g5

0xd237,	// (0x0003b3b2) popup_char_count_window

0x18c1,	// (0x0002fa3c) bg_popup_sub_pane_cp20_ParamLimits

0x1702,	// (0x0002f87d) list_vitu2_match_list_pane_ParamLimits

0x1711,	// (0x0002f88c) vitu2_page_scroll_pane_ParamLimits

0x1711,	// (0x0002f88c) vitu2_page_scroll_pane

0xd7af,	// (0x0003b92a) list_single_hwr_training_symbol_option_pane_ParamLimits

0xd7af,	// (0x0003b92a) list_single_hwr_training_symbol_option_pane

0xd7c2,	// (0x0003b93d) list_single_hwr_training_symbol_option_pane_g1

0xd7ca,	// (0x0003b945) list_single_hwr_training_symbol_option_pane_t1

0xd7d8,	// (0x0003b953) bg_button_pane_cp023

0xd7e1,	// (0x0003b95c) bg_button_pane_cp024

0x74b6,	// (0x00035631) vitu2_page_scroll_pane_g1

0x74be,	// (0x00035639) vitu2_page_scroll_pane_g2

0x0001,

0xfacc,	// (0x0003dc47) vitu2_page_scroll_pane_g

0x74c6,	// (0x00035641) vitu2_page_scroll_pane_t1

0xcd7a,	// (0x0003aef5) popup_char_count_window_g1

0xd814,	// (0x0003b98f) popup_char_count_window_g2

0xd81d,	// (0x0003b998) popup_char_count_window_g3

0x0002,

0xfad1,	// (0x0003dc4c) popup_char_count_window_g

0xd826,	// (0x0003b9a1) popup_char_count_window_t1

0x18db,	// (0x0002fa56) main_vded2_pane

0xccb6,	// (0x0003ae31) aid_size_cell_imed_line

0xccc0,	// (0x0003ae3b) grid_imed_line_width_pane

0x660d,	// (0x00034788) vid4_indicators_pane_g4

0xd834,	// (0x0003b9af) cell_imed_line_width_pane_ParamLimits

0xd834,	// (0x0003b9af) cell_imed_line_width_pane

0xd848,	// (0x0003b9c3) cell_imed_line_width_pane_g1

0xcecd,	// (0x0003b048) cell_imed_line_width_pane_g2

0x0001,

0xfad8,	// (0x0003dc53) cell_imed_line_width_pane_g

0x74d5,	// (0x00035650) main_vded2_pane_g1_ParamLimits

0x74d5,	// (0x00035650) main_vded2_pane_g1

0x74eb,	// (0x00035666) main_vded2_pane_g2_ParamLimits

0x74eb,	// (0x00035666) main_vded2_pane_g2

0x0001,

0xfadd,	// (0x0003dc58) main_vded2_pane_g_ParamLimits

0xfadd,	// (0x0003dc58) main_vded2_pane_g

0x74fd,	// (0x00035678) vded2_slider_pane_ParamLimits

0x74fd,	// (0x00035678) vded2_slider_pane

0x750d,	// (0x00035688) aid_size_touch_vded2_end

0x7517,	// (0x00035692) aid_size_touch_vded2_playhead

0xd851,	// (0x0003b9cc) aid_size_touch_vded2_start

0xd859,	// (0x0003b9d4) vded2_slider_bg_pane

0xd862,	// (0x0003b9dd) vded2_slider_pane_g1

0xd86b,	// (0x0003b9e6) vded2_slider_pane_g2

0x7521,	// (0x0003569c) vded2_slider_pane_g3

0x0002,

0xfae2,	// (0x0003dc5d) vded2_slider_pane_g

0xd873,	// (0x0003b9ee) vded2_slider_bg_pane_g1

0xd87c,	// (0x0003b9f7) vded2_slider_bg_pane_g2

0xd885,	// (0x0003ba00) vded2_slider_bg_pane_g3

0x0002,

0xfae9,	// (0x0003dc64) vded2_slider_bg_pane_g

0x4132,	// (0x000322ad) aid_postcard_touch_down_pane_ParamLimits

0x4132,	// (0x000322ad) aid_postcard_touch_down_pane

0x4148,	// (0x000322c3) aid_postcard_touch_up_pane_ParamLimits

0x4148,	// (0x000322c3) aid_postcard_touch_up_pane

0x18db,	// (0x0002fa56) main_blid2_pane

0x49ed,	// (0x00032b68) popup_blid2_search_window

0x9b34,	// (0x00037caf) blid2_gps_pane

0x9b34,	// (0x00037caf) blid2_navig_pane

0x9b34,	// (0x00037caf) blid2_search_pane

0x9b34,	// (0x00037caf) blid2_tripm_pane

0x752c,	// (0x000356a7) blid2_search_pane_g1_ParamLimits

0x752c,	// (0x000356a7) blid2_search_pane_g1

0x7544,	// (0x000356bf) blid2_search_pane_t1_ParamLimits

0x7544,	// (0x000356bf) blid2_search_pane_t1

0x7556,	// (0x000356d1) aid_size_cell_blid2_gps_ParamLimits

0x7556,	// (0x000356d1) aid_size_cell_blid2_gps

0x756e,	// (0x000356e9) blid2_gps_pane_g1_ParamLimits

0x756e,	// (0x000356e9) blid2_gps_pane_g1

0x7582,	// (0x000356fd) grid_blid2_satellite_pane_ParamLimits

0x7582,	// (0x000356fd) grid_blid2_satellite_pane

0x759c,	// (0x00035717) blid2_navig_pane_g1_ParamLimits

0x759c,	// (0x00035717) blid2_navig_pane_g1

0x75a8,	// (0x00035723) blid2_navig_pane_t1_ParamLimits

0x75a8,	// (0x00035723) blid2_navig_pane_t1

0x75c3,	// (0x0003573e) blid2_navig_pane_t2_ParamLimits

0x75c3,	// (0x0003573e) blid2_navig_pane_t2

0x0001,

0xfaf0,	// (0x0003dc6b) blid2_navig_pane_t_ParamLimits

0xfaf0,	// (0x0003dc6b) blid2_navig_pane_t

0x75de,	// (0x00035759) blid2_navig_ring_pane_ParamLimits

0x75de,	// (0x00035759) blid2_navig_ring_pane

0x75f7,	// (0x00035772) blid2_speed_pane_ParamLimits

0x75f7,	// (0x00035772) blid2_speed_pane

0x7603,	// (0x0003577e) blid2_tripm_pane_g1_ParamLimits

0x7603,	// (0x0003577e) blid2_tripm_pane_g1

0x761e,	// (0x00035799) blid2_tripm_pane_g2_ParamLimits

0x761e,	// (0x00035799) blid2_tripm_pane_g2

0x7632,	// (0x000357ad) blid2_tripm_pane_g3_ParamLimits

0x7632,	// (0x000357ad) blid2_tripm_pane_g3

0x7646,	// (0x000357c1) blid2_tripm_pane_g4_ParamLimits

0x7646,	// (0x000357c1) blid2_tripm_pane_g4

0x765a,	// (0x000357d5) blid2_tripm_pane_g5_ParamLimits

0x765a,	// (0x000357d5) blid2_tripm_pane_g5

0x0005,

0xfaf5,	// (0x0003dc70) blid2_tripm_pane_g_ParamLimits

0xfaf5,	// (0x0003dc70) blid2_tripm_pane_g

0x7680,	// (0x000357fb) blid2_tripm_pane_t1_ParamLimits

0x7680,	// (0x000357fb) blid2_tripm_pane_t1

0x769b,	// (0x00035816) blid2_tripm_pane_t2_ParamLimits

0x769b,	// (0x00035816) blid2_tripm_pane_t2

0x76b4,	// (0x0003582f) blid2_tripm_pane_t3_ParamLimits

0x76b4,	// (0x0003582f) blid2_tripm_pane_t3

0x0003,

0xfb02,	// (0x0003dc7d) blid2_tripm_pane_t_ParamLimits

0xfb02,	// (0x0003dc7d) blid2_tripm_pane_t

0x76fb,	// (0x00035876) cell_blid2_satellite_pane_ParamLimits

0x76fb,	// (0x00035876) cell_blid2_satellite_pane

0x7719,	// (0x00035894) cell_blid2_satellite_pane_g1

0xd88e,	// (0x0003ba09) cell_blid2_satellite_pane_t1

0xc751,	// (0x0003a8cc) blid2_speed_pane_g1

0xd89c,	// (0x0003ba17) blid2_speed_pane_t1

0xd8aa,	// (0x0003ba25) blid2_speed_pane_t2

0x0001,

0xfb0b,	// (0x0003dc86) blid2_speed_pane_t

0xc751,	// (0x0003a8cc) blid2_navig_ring_pane_g1

0x7722,	// (0x0003589d) blid2_navig_ring_pane_g2

0x772a,	// (0x000358a5) blid2_navig_ring_pane_g3

0x7732,	// (0x000358ad) blid2_navig_ring_pane_g4

0x773a,	// (0x000358b5) blid2_navig_ring_pane_g5

0x0004,

0xfb10,	// (0x0003dc8b) blid2_navig_ring_pane_g

0x9b34,	// (0x00037caf) bg_popup_window_pane_cp011

0xd8b8,	// (0x0003ba33) popup_blid2_search_window_g1

0xd8c0,	// (0x0003ba3b) popup_blid2_search_window_t1

0xd8ce,	// (0x0003ba49) popup_blid2_search_window_t2

0x0001,

0xfb1b,	// (0x0003dc96) popup_blid2_search_window_t

0xa59f,	// (0x0003871a) main_browser_pane_g1

0xa290,	// (0x0003840b) main_browser_pane_ParamLimits

0x18c1,	// (0x0002fa3c) bg_button_pane_cp011_ParamLimits

0x1678,	// (0x0002f7f3) cell_vitu2_function_pane_g1_ParamLimits

0xc347,	// (0x0003a4c2) bg_popup_sub_pane_cp22_ParamLimits

0x6f73,	// (0x000350ee) input_focus_pane_cp08_ParamLimits

0x6f8a,	// (0x00035105) popup_vitu2_query_button_pane_ParamLimits

0x6f8a,	// (0x00035105) popup_vitu2_query_button_pane

0x6f9b,	// (0x00035116) popup_vitu2_query_input_button_pane

0xd4a8,	// (0x0003b623) popup_vitu2_query_window_g1_ParamLimits

0x6fa5,	// (0x00035120) popup_vitu2_query_window_g2_ParamLimits

0xfa1c,	// (0x0003db97) popup_vitu2_query_window_g_ParamLimits

0x9b34,	// (0x00037caf) bg_button_pane_cp026

0x7742,	// (0x000358bd) popup_vitu2_query_input_button_pane_g1

0x9b34,	// (0x00037caf) bg_button_pane_cp025

0xd8dc,	// (0x0003ba57) popup_vitu2_query_button_pane_t1

0x5160,	// (0x000332db) main_mp3_pane_t6

0x516e,	// (0x000332e9) popup_slider_window_cp01

0x6573,	// (0x000346ee) cam4_battery_pane

0x65cc,	// (0x00034747) cam4_battery_pane_cp02

0x7410,	// (0x0003558b) cam4_battery_pane_cp01

0x7410,	// (0x0003558b) cam4_battery_pane_cp03

0xd0d2,	// (0x0003b24d) cam4_battery_pane_g1

0xc751,	// (0x0003a8cc) cam4_battery_pane_g2

0x0001,

0xfb20,	// (0x0003dc9b) cam4_battery_pane_g

0xc61b,	// (0x0003a796) popup_blid_sat_info2_window_t11

0xad36,	// (0x00038eb1) aid_size_touch_mv_arrow_left_ParamLimits

0xad61,	// (0x00038edc) aid_size_touch_mv_arrow_right_ParamLimits

0xadbf,	// (0x00038f3a) navi_pane_g1_ParamLimits

0xadcb,	// (0x00038f46) navi_pane_g2_ParamLimits

0xadf9,	// (0x00038f74) navi_pane_g3_ParamLimits

0xf3ea,	// (0x0003d565) navi_pane_g_ParamLimits

0x3b81,	// (0x00031cfc) navi_pane_mv_t1_ParamLimits

0x5d2d,	// (0x00033ea8) grid_imed_effect_pane_ParamLimits

0x26ea,	// (0x00030865) aid_placing_vt_slider_lsc

0xa4ee,	// (0x00038669) aid_placing_vt_slider_prt

0xa801,	// (0x0003897c) bg_tb_trans_pane_cp01_ParamLimits

0xc8d1,	// (0x0003aa4c) popup_image_details_window_g1_ParamLimits

0xc8e4,	// (0x0003aa5f) popup_image_details_window_g2_ParamLimits

0xc8f9,	// (0x0003aa74) popup_image_details_window_g3_ParamLimits

0xc8f9,	// (0x0003aa74) popup_image_details_window_g3

0xf71d,	// (0x0003d898) popup_image_details_window_g_ParamLimits

0xc90d,	// (0x0003aa88) popup_image_details_window_t1_ParamLimits

0xc91f,	// (0x0003aa9a) popup_image_details_window_t2_ParamLimits

0xc938,	// (0x0003aab3) popup_image_details_window_t3_ParamLimits

0xc94c,	// (0x0003aac7) popup_image_details_window_t4_ParamLimits

0xc967,	// (0x0003aae2) popup_image_details_window_t5_ParamLimits

0xf724,	// (0x0003d89f) popup_image_details_window_t_ParamLimits

0x731d,	// (0x00035498) cl_header_name_pane_ParamLimits

0x731d,	// (0x00035498) cl_header_name_pane

0x774a,	// (0x000358c5) cl_header_name_pane_t1_ParamLimits

0x774a,	// (0x000358c5) cl_header_name_pane_t1

0x776b,	// (0x000358e6) cl_header_name_pane_t2_ParamLimits

0x776b,	// (0x000358e6) cl_header_name_pane_t2

0x77ad,	// (0x00035928) cl_header_name_pane_t3_ParamLimits

0x77ad,	// (0x00035928) cl_header_name_pane_t3

0x0002,

0xfb25,	// (0x0003dca0) cl_header_name_pane_t_ParamLimits

0xfb25,	// (0x0003dca0) cl_header_name_pane_t

0xae88,	// (0x00039003) navi_pane_mv_g2_ParamLimits

0xd1f4,	// (0x0003b36f) field_vitu2_entry_pane_g1_ParamLimits

0xd200,	// (0x0003b37b) field_vitu2_entry_pane_g2_ParamLimits

0xd20c,	// (0x0003b387) field_vitu2_entry_pane_g3_ParamLimits

0xd20c,	// (0x0003b387) field_vitu2_entry_pane_g3

0xf91b,	// (0x0003da96) field_vitu2_entry_pane_g_ParamLimits

0x1503,	// (0x0002f67e) cell_vitu2_itu_pane_g1_ParamLimits

0x1513,	// (0x0002f68e) cell_vitu2_itu_pane_g2_ParamLimits

0x1513,	// (0x0002f68e) cell_vitu2_itu_pane_g2

0x0001,

0xf927,	// (0x0003daa2) cell_vitu2_itu_pane_g_ParamLimits

0xf927,	// (0x0003daa2) cell_vitu2_itu_pane_g

0x18c1,	// (0x0002fa3c) bg_vkb2_func_pane_cp05_ParamLimits

0x18c1,	// (0x0002fa3c) bg_vkb2_func_pane_cp05

0x18c1,	// (0x0002fa3c) bg_vkb2_func_pane_cp03

0x18c1,	// (0x0002fa3c) bg_vkb2_func_pane_cp04

0x18c1,	// (0x0002fa3c) bg_vkb2_func_pane_cp10_ParamLimits

0x18c1,	// (0x0002fa3c) bg_vkb2_func_pane_cp10

0x72bf,	// (0x0003543a) bg_vkb2_func_pane_cp08

0x72a5,	// (0x00035420) bg_vkb2_func_pane_cp06

0x72b3,	// (0x0003542e) bg_vkb2_func_pane_cp07

0xd7ea,	// (0x0003b965) bg_vkb2_func_pane_cp11_ParamLimits

0xd7ea,	// (0x0003b965) bg_vkb2_func_pane_cp11

0xd7ff,	// (0x0003b97a) bg_vkb2_func_pane_cp12_ParamLimits

0xd7ff,	// (0x0003b97a) bg_vkb2_func_pane_cp12

0x9b34,	// (0x00037caf) bg_vkb2_func_pane_cp09

0xd249,	// (0x0003b3c4) bg_vkb2_func_pane_g1

0xa6b0,	// (0x0003882b) bg_vkb2_func_pane_g2

0xd251,	// (0x0003b3cc) bg_vkb2_func_pane_g3

0xd259,	// (0x0003b3d4) bg_vkb2_func_pane_g4

0xd46d,	// (0x0003b5e8) bg_vkb2_func_pane_g5

0xd271,	// (0x0003b3ec) bg_vkb2_func_pane_g6

0xd279,	// (0x0003b3f4) bg_vkb2_func_pane_g7

0xd269,	// (0x0003b3e4) bg_vkb2_func_pane_g8

0xa690,	// (0x0003880b) bg_vkb2_func_pane_g9

0x0008,

0xfb2c,	// (0x0003dca7) bg_vkb2_func_pane_g

0x766e,	// (0x000357e9) blid2_tripm_pane_g6_ParamLimits

0x766e,	// (0x000357e9) blid2_tripm_pane_g6

0xd08c,	// (0x0003b207) mp4_progress_pane_g1

0x76e7,	// (0x00035862) blid2_tripm_values_pane_ParamLimits

0x76e7,	// (0x00035862) blid2_tripm_values_pane

0x77de,	// (0x00035959) blid2_tripm_values_pane_t1

0x77ec,	// (0x00035967) blid2_tripm_values_pane_t2

0x77fa,	// (0x00035975) blid2_tripm_values_pane_t3

0x7808,	// (0x00035983) blid2_tripm_values_pane_t4

0x7816,	// (0x00035991) blid2_tripm_values_pane_t5

0x7824,	// (0x0003599f) blid2_tripm_values_pane_t6

0x7832,	// (0x000359ad) blid2_tripm_values_pane_t7

0x7840,	// (0x000359bb) blid2_tripm_values_pane_t8

0x784e,	// (0x000359c9) blid2_tripm_values_pane_t9

0x0008,

0xfb3f,	// (0x0003dcba) blid2_tripm_values_pane_t

0x272c,	// (0x000308a7) call_video_pane_t1_ParamLimits

0x274a,	// (0x000308c5) call_video_pane_t2_ParamLimits

0xf273,	// (0x0003d3ee) call_video_pane_t_ParamLimits

0x4081,	// (0x000321fc) msg_header_pane_g1_ParamLimits

0xb06f,	// (0x000391ea) msg_header_pane_g2_ParamLimits

0xb06f,	// (0x000391ea) msg_header_pane_g2

0x0001,

0xf48d,	// (0x0003d608) msg_header_pane_g_ParamLimits

0xf48d,	// (0x0003d608) msg_header_pane_g

0xa290,	// (0x0003840b) main_clock2_pane_ParamLimits

0x5a9c,	// (0x00033c17) grid_clock2_toolbar_pane_ParamLimits

0x5a9c,	// (0x00033c17) grid_clock2_toolbar_pane

0x5a9c,	// (0x00033c17) listscroll_clock2_pane_ParamLimits

0x5a9c,	// (0x00033c17) listscroll_clock2_pane

0x5b97,	// (0x00033d12) main_clock2_pane_t3_ParamLimits

0x5b97,	// (0x00033d12) main_clock2_pane_t3

0x5bbb,	// (0x00033d36) main_clock2_pane_t4_ParamLimits

0x5bbb,	// (0x00033d36) main_clock2_pane_t4

0xd8ea,	// (0x0003ba65) cell_clock2_toolbar_pane

0xd8f2,	// (0x0003ba6d) cell_clock2_toolbar_pane_cp01

0xd8f2,	// (0x0003ba6d) cell_clock2_toolbar_pane_cp02

0xd8fa,	// (0x0003ba75) cell_clock2_toolbar_pane_cp03

0xd902,	// (0x0003ba7d) list_clock2_pane

0xacac,	// (0x00038e27) scroll_pane_cp10

0xd90a,	// (0x0003ba85) list_single_clock2_pane_ParamLimits

0xd90a,	// (0x0003ba85) list_single_clock2_pane

0xaeef,	// (0x0003906a) list_highlight_pane_cp08

0xd917,	// (0x0003ba92) list_single_clock2_pane_t1

0xd925,	// (0x0003baa0) list_single_clock2_pane_t2

0x0001,

0xfb52,	// (0x0003dccd) list_single_clock2_pane_t

0x9b34,	// (0x00037caf) bg_button_pane_cp10

0xd933,	// (0x0003baae) cell_clock2_toolbar_pane_g1

0x056c,	// (0x0002e6e7) aid_main_viewer_pane_g1_ParamLimits

0x056c,	// (0x0002e6e7) aid_main_viewer_pane_g1

0x057a,	// (0x0002e6f5) aid_main_viewer_pane_g2_ParamLimits

0x057a,	// (0x0002e6f5) aid_main_viewer_pane_g2

0x40d8,	// (0x00032253) aid_main_viewer_pane_g3_ParamLimits

0x40d8,	// (0x00032253) aid_main_viewer_pane_g3

0x40e7,	// (0x00032262) aid_main_viewer_pane_g4_ParamLimits

0x40e7,	// (0x00032262) aid_main_viewer_pane_g4

0x0003,

0xf49e,	// (0x0003d619) aid_main_viewer_pane_g_ParamLimits

0xf49e,	// (0x0003d619) aid_main_viewer_pane_g

0x05ae,	// (0x0002e729) main_calc_pane_ParamLimits

0x05d4,	// (0x0002e74f) main_dialer2_pane_ParamLimits

0x18db,	// (0x0002fa56) main_cam6_pane

0x18db,	// (0x0002fa56) main_vid6_pane

0x5aa8,	// (0x00033c23) listscroll_gen_pane_cp06_ParamLimits

0x5aa8,	// (0x00033c23) listscroll_gen_pane_cp06

0x5bde,	// (0x00033d59) main_clock2_pane_t5_ParamLimits

0x5bde,	// (0x00033d59) main_clock2_pane_t5

0x5c3a,	// (0x00033db5) aid_call2_pane_cp10_ParamLimits

0x5c4c,	// (0x00033dc7) aid_call_pane_cp10_ParamLimits

0xad2a,	// (0x00038ea5) popup_clock_analogue_window_cp10_g1_ParamLimits

0xad2a,	// (0x00038ea5) popup_clock_analogue_window_cp10_g2_ParamLimits

0x5c5e,	// (0x00033dd9) popup_clock_analogue_window_cp10_g3_ParamLimits

0x5c5e,	// (0x00033dd9) popup_clock_analogue_window_cp10_g4_ParamLimits

0xad2a,	// (0x00038ea5) popup_clock_analogue_window_cp10_g5_ParamLimits

0xf7d4,	// (0x0003d94f) popup_clock_analogue_window_cp10_g_ParamLimits

0x5c70,	// (0x00033deb) popup_clock_analogue_window_cp10_t1_ParamLimits

0x6366,	// (0x000344e1) cell_dialer2_keypad_pane_g2_ParamLimits

0x6366,	// (0x000344e1) cell_dialer2_keypad_pane_g2

0x0001,

0xf8ba,	// (0x0003da35) cell_dialer2_keypad_pane_g_ParamLimits

0xf8ba,	// (0x0003da35) cell_dialer2_keypad_pane_g

0x6382,	// (0x000344fd) cell_dialer2_keypad_pane_t1

0x6992,	// (0x00034b0d) main_cset_text2_pane_ParamLimits

0x6992,	// (0x00034b0d) main_cset_text2_pane

0xd694,	// (0x0003b80f) area_vitu2_query_pane_g1_ParamLimits

0x7244,	// (0x000353bf) area_vitu2_query_pane_g2_ParamLimits

0xfa6f,	// (0x0003dbea) area_vitu2_query_pane_g_ParamLimits

0xd718,	// (0x0003b893) area_vitu2_query_pane_t7_ParamLimits

0xd718,	// (0x0003b893) area_vitu2_query_pane_t7

0x72a5,	// (0x00035420) bg_button_pane_cp018_ParamLimits

0x72b3,	// (0x0003542e) bg_button_pane_cp021_ParamLimits

0x72bf,	// (0x0003543a) bg_button_pane_cp022_ParamLimits

0x72bf,	// (0x0003543a) bg_vkb2_func_pane_cp08_ParamLimits

0x72a5,	// (0x00035420) bg_vkb2_func_pane_cp06_ParamLimits

0x72b3,	// (0x0003542e) bg_vkb2_func_pane_cp07_ParamLimits

0x72d0,	// (0x0003544b) input_focus_pane_cp09_ParamLimits

0xa80f,	// (0x0003898a) cam6_autofocus_pane_ParamLimits

0xa80f,	// (0x0003898a) cam6_autofocus_pane

0x17bb,	// (0x0002f936) cam6_image_uncrop_pane_ParamLimits

0x17bb,	// (0x0002f936) cam6_image_uncrop_pane

0x17ca,	// (0x0002f945) cam6_indi_pane_ParamLimits

0x17ca,	// (0x0002f945) cam6_indi_pane

0x17e0,	// (0x0002f95b) cam6_mode_pane_ParamLimits

0x17e0,	// (0x0002f95b) cam6_mode_pane

0x17f2,	// (0x0002f96d) cam6_timer_pane_ParamLimits

0x17f2,	// (0x0002f96d) cam6_timer_pane

0x17fe,	// (0x0002f979) cam6_zoom_pane_ParamLimits

0x17fe,	// (0x0002f979) cam6_zoom_pane

0x785c,	// (0x000359d7) cam6_mode_pane_g1_ParamLimits

0x785c,	// (0x000359d7) cam6_mode_pane_g1

0x786c,	// (0x000359e7) cam6_mode_pane_g2_ParamLimits

0x786c,	// (0x000359e7) cam6_mode_pane_g2

0x787c,	// (0x000359f7) cam6_mode_pane_g3_ParamLimits

0x787c,	// (0x000359f7) cam6_mode_pane_g3

0x788c,	// (0x00035a07) cam6_mode_pane_g4_ParamLimits

0x788c,	// (0x00035a07) cam6_mode_pane_g4

0x0003,

0xfb57,	// (0x0003dcd2) cam6_mode_pane_g_ParamLimits

0xfb57,	// (0x0003dcd2) cam6_mode_pane_g

0xd93b,	// (0x0003bab6) bg_tb_trans_pane_cp08_ParamLimits

0xd93b,	// (0x0003bab6) bg_tb_trans_pane_cp08

0xd949,	// (0x0003bac4) cam6_battery_pane_ParamLimits

0xd949,	// (0x0003bac4) cam6_battery_pane

0xd95f,	// (0x0003bada) cam6_indi_pane_g1_ParamLimits

0xd95f,	// (0x0003bada) cam6_indi_pane_g1

0xd971,	// (0x0003baec) cam6_indi_pane_g2_ParamLimits

0xd971,	// (0x0003baec) cam6_indi_pane_g2

0xd983,	// (0x0003bafe) cam6_indi_pane_g3_ParamLimits

0xd983,	// (0x0003bafe) cam6_indi_pane_g3

0x0002,

0xfb60,	// (0x0003dcdb) cam6_indi_pane_g_ParamLimits

0xfb60,	// (0x0003dcdb) cam6_indi_pane_g

0xd995,	// (0x0003bb10) cam6_indi_pane_t1_ParamLimits

0xd995,	// (0x0003bb10) cam6_indi_pane_t1

0x789c,	// (0x00035a17) cam6_autofocus_pane_g1

0x78a4,	// (0x00035a1f) cam6_autofocus_pane_g2

0x78ac,	// (0x00035a27) cam6_autofocus_pane_g3

0x78b4,	// (0x00035a2f) cam6_autofocus_pane_g4

0x0003,

0xfb67,	// (0x0003dce2) cam6_autofocus_pane_g

0xd9bb,	// (0x0003bb36) cam6_timer_pane_g1

0xd9c3,	// (0x0003bb3e) cam6_timer_pane_t1

0xd9d1,	// (0x0003bb4c) cam6_zoom_cont_pane

0xd9d9,	// (0x0003bb54) cam6_zoom_pane_g1

0xd9e1,	// (0x0003bb5c) cam6_zoom_pane_g2

0x78bc,	// (0x00035a37) cam6_zoom_pane_g3

0x0002,

0xfb70,	// (0x0003dceb) cam6_zoom_pane_g

0xc751,	// (0x0003a8cc) cam6_battery_pane_g1

0xc751,	// (0x0003a8cc) cam6_battery_pane_g2

0x0001,

0xf6e1,	// (0x0003d85c) cam6_battery_pane_g

0xd9e9,	// (0x0003bb64) cam6_zoom_cont_pane_g1

0xd9f2,	// (0x0003bb6d) cam6_zoom_cont_pane_g2

0xd9fb,	// (0x0003bb76) cam6_zoom_cont_pane_g3

0x0002,

0xfb77,	// (0x0003dcf2) cam6_zoom_cont_pane_g

0x78d9,	// (0x00035a54) cam6_mode_pane_cp_ParamLimits

0x78d9,	// (0x00035a54) cam6_mode_pane_cp

0x78eb,	// (0x00035a66) cam6_zoom_pane_cp_ParamLimits

0x78eb,	// (0x00035a66) cam6_zoom_pane_cp

0x78f7,	// (0x00035a72) vid6_image_uncrop_cif_pane_ParamLimits

0x78f7,	// (0x00035a72) vid6_image_uncrop_cif_pane

0x7907,	// (0x00035a82) vid6_image_uncrop_nhd_pane_ParamLimits

0x7907,	// (0x00035a82) vid6_image_uncrop_nhd_pane

0x7916,	// (0x00035a91) vid6_image_uncrop_vga_pane_ParamLimits

0x7916,	// (0x00035a91) vid6_image_uncrop_vga_pane

0x7925,	// (0x00035aa0) vid6_image_uncrop_wvga_pane_ParamLimits

0x7925,	// (0x00035aa0) vid6_image_uncrop_wvga_pane

0x7934,	// (0x00035aaf) vid6_indi_pane_ParamLimits

0x7934,	// (0x00035aaf) vid6_indi_pane

0xd93b,	// (0x0003bab6) bg_tb_trans_pane_cp09_ParamLimits

0xd93b,	// (0x0003bab6) bg_tb_trans_pane_cp09

0xda13,	// (0x0003bb8e) cam6_battery_pane_cp_ParamLimits

0xda13,	// (0x0003bb8e) cam6_battery_pane_cp

0xda1f,	// (0x0003bb9a) vid6_indi_pane_g1_ParamLimits

0xda1f,	// (0x0003bb9a) vid6_indi_pane_g1

0xda31,	// (0x0003bbac) vid6_indi_pane_g2_ParamLimits

0xda31,	// (0x0003bbac) vid6_indi_pane_g2

0xda43,	// (0x0003bbbe) vid6_indi_pane_g3_ParamLimits

0xda43,	// (0x0003bbbe) vid6_indi_pane_g3

0xda58,	// (0x0003bbd3) vid6_indi_pane_g4_ParamLimits

0xda58,	// (0x0003bbd3) vid6_indi_pane_g4

0xda6d,	// (0x0003bbe8) vid6_indi_pane_g5_ParamLimits

0xda6d,	// (0x0003bbe8) vid6_indi_pane_g5

0x0004,

0xfb7e,	// (0x0003dcf9) vid6_indi_pane_g_ParamLimits

0xfb7e,	// (0x0003dcf9) vid6_indi_pane_g

0xda87,	// (0x0003bc02) vid6_indi_pane_t1_ParamLimits

0xda87,	// (0x0003bc02) vid6_indi_pane_t1

0xda9d,	// (0x0003bc18) vid6_indi_pane_t2_ParamLimits

0xda9d,	// (0x0003bc18) vid6_indi_pane_t2

0xdac5,	// (0x0003bc40) vid6_indi_pane_t3_ParamLimits

0xdac5,	// (0x0003bc40) vid6_indi_pane_t3

0xdaed,	// (0x0003bc68) vid6_indi_pane_t4_ParamLimits

0xdaed,	// (0x0003bc68) vid6_indi_pane_t4

0x0003,

0xfb89,	// (0x0003dd04) vid6_indi_pane_t_ParamLimits

0xfb89,	// (0x0003dd04) vid6_indi_pane_t

0xdb11,	// (0x0003bc8c) wait_bar_pane_cp08

0x794c,	// (0x00035ac7) main_cset_text2_pane_t1_ParamLimits

0x794c,	// (0x00035ac7) main_cset_text2_pane_t1

0x78c4,	// (0x00035a3f) listscroll_gen_pane_cp06_t1_ParamLimits

0x78c4,	// (0x00035a3f) listscroll_gen_pane_cp06_t1

0x18db,	// (0x0002fa56) main_cam6_set_pane

0x6565,	// (0x000346e0) bg_tb_trans_pane_cp06_ParamLimits

0x657b,	// (0x000346f6) cam4_indicators_pane_g1_ParamLimits

0x658c,	// (0x00034707) cam4_indicators_pane_g2_ParamLimits

0xf8f7,	// (0x0003da72) cam4_indicators_pane_g_ParamLimits

0x65aa,	// (0x00034725) cam4_indicators_pane_t1_ParamLimits

0x18c1,	// (0x0002fa3c) bg_tb_trans_pane_cp07_ParamLimits

0x65d4,	// (0x0003474f) vid4_indicators_pane_g1_ParamLimits

0x65e8,	// (0x00034763) vid4_indicators_pane_g2_ParamLimits

0x65fc,	// (0x00034777) vid4_indicators_pane_g3_ParamLimits

0x660d,	// (0x00034788) vid4_indicators_pane_g4_ParamLimits

0xf909,	// (0x0003da84) vid4_indicators_pane_g_ParamLimits

0x6629,	// (0x000347a4) vid4_indicators_pane_t1_ParamLimits

0x1797,	// (0x0002f912) vid4_progress_pane_g1_ParamLimits

0x17a9,	// (0x0002f924) vid4_progress_pane_g2_ParamLimits

0xa995,	// (0x00038b10) vid4_progress_pane_g3_ParamLimits

0x7418,	// (0x00035593) vid4_progress_pane_g4_ParamLimits

0xfaba,	// (0x0003dc35) vid4_progress_pane_g_ParamLimits

0x7436,	// (0x000355b1) vid4_progress_pane_t1_ParamLimits

0x744b,	// (0x000355c6) vid4_progress_pane_t2_ParamLimits

0x7461,	// (0x000355dc) vid4_progress_pane_t3_ParamLimits

0xfac5,	// (0x0003dc40) vid4_progress_pane_t_ParamLimits

0x7477,	// (0x000355f2) wait_bar_pane_cp07_ParamLimits

0x796b,	// (0x00035ae6) main_cam6_set_pane_g2_ParamLimits

0x796b,	// (0x00035ae6) main_cam6_set_pane_g2

0x798f,	// (0x00035b0a) main_cset6_listscroll_pane_ParamLimits

0x798f,	// (0x00035b0a) main_cset6_listscroll_pane

0x79ab,	// (0x00035b26) main_cset6_slider_pane_ParamLimits

0x79ab,	// (0x00035b26) main_cset6_slider_pane

0x79c1,	// (0x00035b3c) main_cset6_text2_pane_ParamLimits

0x79c1,	// (0x00035b3c) main_cset6_text2_pane

0xdb20,	// (0x0003bc9b) main_cset6_text_pane

0xdb28,	// (0x0003bca3) main_cset_list_pane_copy1_ParamLimits

0xdb28,	// (0x0003bca3) main_cset_list_pane_copy1

0xdb38,	// (0x0003bcb3) scroll_pane_cp028_copy1

0x79cf,	// (0x00035b4a) cset_list_set_pane_copy1

0x79e1,	// (0x00035b5c) aid_position_infowindow_above_copy1

0x79e9,	// (0x00035b64) aid_position_infowindow_below_copy1

0x79f1,	// (0x00035b6c) cset_list_set_pane_g1_copy1

0x79f9,	// (0x00035b74) cset_list_set_pane_g3_copy1_ParamLimits

0x79f9,	// (0x00035b74) cset_list_set_pane_g3_copy1

0x7a08,	// (0x00035b83) cset_list_set_pane_t1_copy1_ParamLimits

0x7a08,	// (0x00035b83) cset_list_set_pane_t1_copy1

0xa801,	// (0x0003897c) list_highlight_pane_cp021_copy1_ParamLimits

0xa801,	// (0x0003897c) list_highlight_pane_cp021_copy1

0xdb41,	// (0x0003bcbc) cset6_slider_pane_ParamLimits

0xdb41,	// (0x0003bcbc) cset6_slider_pane

0xdb6d,	// (0x0003bce8) main_cset6_slider_pane_g1_ParamLimits

0xdb6d,	// (0x0003bce8) main_cset6_slider_pane_g1

0x7a1d,	// (0x00035b98) main_cset6_slider_pane_g2_ParamLimits

0x7a1d,	// (0x00035b98) main_cset6_slider_pane_g2

0xdbbe,	// (0x0003bd39) main_cset6_slider_pane_g3_ParamLimits

0xdbbe,	// (0x0003bd39) main_cset6_slider_pane_g3

0x7a45,	// (0x00035bc0) main_cset6_slider_pane_g4_ParamLimits

0x7a45,	// (0x00035bc0) main_cset6_slider_pane_g4

0x7a51,	// (0x00035bcc) main_cset6_slider_pane_g5_ParamLimits

0x7a51,	// (0x00035bcc) main_cset6_slider_pane_g5

0xd378,	// (0x0003b4f3) main_cset6_slider_pane_g7_ParamLimits

0xd378,	// (0x0003b4f3) main_cset6_slider_pane_g7

0xd384,	// (0x0003b4ff) main_cset6_slider_pane_g8_ParamLimits

0xd384,	// (0x0003b4ff) main_cset6_slider_pane_g8

0x6a3f,	// (0x00034bba) main_cset6_slider_pane_g9_ParamLimits

0x6a3f,	// (0x00034bba) main_cset6_slider_pane_g9

0x6a4b,	// (0x00034bc6) main_cset6_slider_pane_g10_ParamLimits

0x6a4b,	// (0x00034bc6) main_cset6_slider_pane_g10

0x6a57,	// (0x00034bd2) main_cset6_slider_pane_g11_ParamLimits

0x6a57,	// (0x00034bd2) main_cset6_slider_pane_g11

0x6a63,	// (0x00034bde) main_cset6_slider_pane_g12_ParamLimits

0x6a63,	// (0x00034bde) main_cset6_slider_pane_g12

0x6a6f,	// (0x00034bea) main_cset6_slider_pane_g13_ParamLimits

0x6a6f,	// (0x00034bea) main_cset6_slider_pane_g13

0x6a7b,	// (0x00034bf6) main_cset6_slider_pane_g14_ParamLimits

0x6a7b,	// (0x00034bf6) main_cset6_slider_pane_g14

0x7a5d,	// (0x00035bd8) main_cset6_slider_pane_g15_ParamLimits

0x7a5d,	// (0x00035bd8) main_cset6_slider_pane_g15

0x6a9f,	// (0x00034c1a) main_cset6_slider_pane_g16_ParamLimits

0x6a9f,	// (0x00034c1a) main_cset6_slider_pane_g16

0x6aab,	// (0x00034c26) main_cset6_slider_pane_g17_ParamLimits

0x6aab,	// (0x00034c26) main_cset6_slider_pane_g17

0x0011,

0xfb92,	// (0x0003dd0d) main_cset6_slider_pane_g_ParamLimits

0xfb92,	// (0x0003dd0d) main_cset6_slider_pane_g

0xdbca,	// (0x0003bd45) main_cset6_slider_pane_t1_ParamLimits

0xdbca,	// (0x0003bd45) main_cset6_slider_pane_t1

0x7a8d,	// (0x00035c08) main_cset6_slider_pane_t2_ParamLimits

0x7a8d,	// (0x00035c08) main_cset6_slider_pane_t2

0x7ab8,	// (0x00035c33) main_cset6_slider_pane_t3_ParamLimits

0x7ab8,	// (0x00035c33) main_cset6_slider_pane_t3

0x7ae3,	// (0x00035c5e) main_cset6_slider_pane_t4_ParamLimits

0x7ae3,	// (0x00035c5e) main_cset6_slider_pane_t4

0x7b0e,	// (0x00035c89) main_cset6_slider_pane_t5_ParamLimits

0x7b0e,	// (0x00035c89) main_cset6_slider_pane_t5

0xdc0b,	// (0x0003bd86) main_cset6_slider_pane_t7_ParamLimits

0xdc0b,	// (0x0003bd86) main_cset6_slider_pane_t7

0x7b39,	// (0x00035cb4) main_cset6_slider_pane_t8_ParamLimits

0x7b39,	// (0x00035cb4) main_cset6_slider_pane_t8

0x7b5d,	// (0x00035cd8) main_cset6_slider_pane_t9_ParamLimits

0x7b5d,	// (0x00035cd8) main_cset6_slider_pane_t9

0x7b81,	// (0x00035cfc) main_cset6_slider_pane_t10_ParamLimits

0x7b81,	// (0x00035cfc) main_cset6_slider_pane_t10

0x7ba5,	// (0x00035d20) main_cset6_slider_pane_t11_ParamLimits

0x7ba5,	// (0x00035d20) main_cset6_slider_pane_t11

0xdc41,	// (0x0003bdbc) main_cset6_slider_pane_t14_ParamLimits

0xdc41,	// (0x0003bdbc) main_cset6_slider_pane_t14

0xdc7a,	// (0x0003bdf5) main_cset6_slider_pane_t15_ParamLimits

0xdc7a,	// (0x0003bdf5) main_cset6_slider_pane_t15

0x000b,

0xfbb7,	// (0x0003dd32) main_cset6_slider_pane_t_ParamLimits

0xfbb7,	// (0x0003dd32) main_cset6_slider_pane_t

0xdb95,	// (0x0003bd10) cset_slider_pane_g1_copy1

0xdb9e,	// (0x0003bd19) cset_slider_pane_g2_copy1

0xdba7,	// (0x0003bd22) cset_slider_pane_g3_copy1

0x9b34,	// (0x00037caf) bg_popup_sub_pane_cp011_copy1

0xdcb3,	// (0x0003be2e) main_cset_text_pane_g1_copy1

0xd4bc,	// (0x0003b637) main_cset_text_pane_t1_copy1

0xd4ca,	// (0x0003b645) main_cset_text_pane_t2_copy1

0xd4d8,	// (0x0003b653) main_cset_text_pane_t3_copy1

0xd4e6,	// (0x0003b661) main_cset_text_pane_t4_copy1

0xd4f4,	// (0x0003b66f) main_cset_text_pane_t5_copy1

0xdcbb,	// (0x0003be36) main_cset_text_pane_t6_copy1

0xdcc9,	// (0x0003be44) main_cset_text_pane_t7_copy1

0x7c98,	// (0x00035e13) main_cset_text2_pane_t1_copy1

0x18c1,	// (0x0002fa3c) main_ncimui_pane

0x0810,	// (0x0002e98b) popup_query_ncimui_window_ParamLimits

0x0810,	// (0x0002e98b) popup_query_ncimui_window

0xca52,	// (0x0003abcd) field_cale_ev2_pane_g4_ParamLimits

0xca52,	// (0x0003abcd) field_cale_ev2_pane_g4

0x6104,	// (0x0003427f) cell_video_dialer_keypad_pane_g2_ParamLimits

0x6104,	// (0x0003427f) cell_video_dialer_keypad_pane_g2

0x0001,

0xf895,	// (0x0003da10) cell_video_dialer_keypad_pane_g_ParamLimits

0xf895,	// (0x0003da10) cell_video_dialer_keypad_pane_g

0x611c,	// (0x00034297) cell_video_dialer_keypad_pane_t1

0x9b34,	// (0x00037caf) bg_popup_window_pane_cp012

0xab6d,	// (0x00038ce8) heading_pane_cp06

0xdcf5,	// (0x0003be70) ncim_query_content_pane

0x9b34,	// (0x00037caf) bg_popup_heading_pane_cp01

0xdcfd,	// (0x0003be78) ncim_heading_pane_t1

0xdd0b,	// (0x0003be86) ncim_indicator_popup_pane

0xdd1d,	// (0x0003be98) ncim_query_button_pane

0xdd31,	// (0x0003beac) ncim_query_content_pane_t1

0xdd43,	// (0x0003bebe) ncim_query_content_pane_t2

0x0005,

0xfbfb,	// (0x0003dd76) ncim_query_content_pane_t

0xdd7d,	// (0x0003bef8) ncim_query_list_pane

0xdd8f,	// (0x0003bf0a) ncim_query_popup_pane

0xdd0b,	// (0x0003be86) ncim_indicator_popup_pane_ParamLimits

0x7ddc,	// (0x00035f57) ncim_query_content_pane_g1_ParamLimits

0x7ddc,	// (0x00035f57) ncim_query_content_pane_g1

0xdd31,	// (0x0003beac) ncim_query_content_pane_t1_ParamLimits

0xdd43,	// (0x0003bebe) ncim_query_content_pane_t2_ParamLimits

0x7de8,	// (0x00035f63) ncim_query_content_pane_t3_ParamLimits

0x7de8,	// (0x00035f63) ncim_query_content_pane_t3

0x7e10,	// (0x00035f8b) ncim_query_content_pane_t4_ParamLimits

0x7e10,	// (0x00035f8b) ncim_query_content_pane_t4

0x7e38,	// (0x00035fb3) ncim_query_content_pane_t5_ParamLimits

0x7e38,	// (0x00035fb3) ncim_query_content_pane_t5

0xdd55,	// (0x0003bed0) ncim_query_content_pane_t6_ParamLimits

0xdd55,	// (0x0003bed0) ncim_query_content_pane_t6

0xfbfb,	// (0x0003dd76) ncim_query_content_pane_t_ParamLimits

0xdd7d,	// (0x0003bef8) ncim_query_list_pane_ParamLimits

0xdd8f,	// (0x0003bf0a) ncim_query_popup_pane_ParamLimits

0xdda3,	// (0x0003bf1e) wait_bar_pane_cp04

0x9b34,	// (0x00037caf) input_focus_pane_cp011

0xddab,	// (0x0003bf26) ncim_query_popup_pane_t1

0xddb9,	// (0x0003bf34) ncim_list_query_list_pane_ParamLimits

0xddb9,	// (0x0003bf34) ncim_list_query_list_pane

0x9b34,	// (0x00037caf) bg_button_pane_cp027

0xddcc,	// (0x0003bf47) ncim_query_button_pane_g1

0x9b34,	// (0x00037caf) list_highlight_pane_cp012

0xddd6,	// (0x0003bf51) ncim_list_query_list_pane_g1

0xddde,	// (0x0003bf59) ncim_list_query_list_pane_t1

0x659b,	// (0x00034716) cam4_indicators_pane_g3_ParamLimits

0x659b,	// (0x00034716) cam4_indicators_pane_g3

0x6619,	// (0x00034794) vid4_indicators_pane_g5_ParamLimits

0x6619,	// (0x00034794) vid4_indicators_pane_g5

0x7427,	// (0x000355a2) vid4_progress_pane_g5_ParamLimits

0x7427,	// (0x000355a2) vid4_progress_pane_g5

0x7cca,	// (0x00035e45) main_ncimui_pane_g1

0x7d30,	// (0x00035eab) ncimui_group_query_pane_ParamLimits

0x7d30,	// (0x00035eab) ncimui_group_query_pane

0x7d78,	// (0x00035ef3) ncimui_list_pane_ParamLimits

0x7d78,	// (0x00035ef3) ncimui_list_pane

0x7d9f,	// (0x00035f1a) ncimui_text_pane_ParamLimits

0x7d9f,	// (0x00035f1a) ncimui_text_pane

0x7e60,	// (0x00035fdb) ncimui_text_pane_t1_ParamLimits

0x7e60,	// (0x00035fdb) ncimui_text_pane_t1

0xddec,	// (0x0003bf67) ncimui_list_single_graphic_pane_ParamLimits

0xddec,	// (0x0003bf67) ncimui_list_single_graphic_pane

0x7e7e,	// (0x00035ff9) ncimui_query_pane_ParamLimits

0x7e7e,	// (0x00035ff9) ncimui_query_pane

0x9b34,	// (0x00037caf) list_highlight_pane_cp013

0xddfc,	// (0x0003bf77) ncim_list_query_list_pane_t1_copy1

0xddd6,	// (0x0003bf51) ncim_list_single_graphic_pane_g1

0xde0a,	// (0x0003bf85) ncim_query_button_pane_cp01

0xde16,	// (0x0003bf91) ncim_query_entry_pane_ParamLimits

0xde16,	// (0x0003bf91) ncim_query_entry_pane

0xde29,	// (0x0003bfa4) ncimui_query_pane_g1

0xde35,	// (0x0003bfb0) ncimui_query_pane_t1_ParamLimits

0xde35,	// (0x0003bfb0) ncimui_query_pane_t1

0xa801,	// (0x0003897c) input_focus_pane_cp012

0xde4e,	// (0x0003bfc9) ncim_query_entry_pane_t1

0xa290,	// (0x0003840b) main_im_pane_ParamLimits

0x18c1,	// (0x0002fa3c) main_mobtv_pane_ParamLimits

0x18c1,	// (0x0002fa3c) main_mobtv_pane

0x7a75,	// (0x00035bf0) main_cset6_slider_pane_g18_ParamLimits

0x7a75,	// (0x00035bf0) main_cset6_slider_pane_g18

0x7a81,	// (0x00035bfc) main_cset6_slider_pane_g19_ParamLimits

0x7a81,	// (0x00035bfc) main_cset6_slider_pane_g19

0x7e91,	// (0x0003600c) bg_main_mobtv_pane_ParamLimits

0x7e91,	// (0x0003600c) bg_main_mobtv_pane

0x7e9f,	// (0x0003601a) main_mobtv_info_pane

0x7ea8,	// (0x00036023) main_mobtv_loading_pane_ParamLimits

0x7ea8,	// (0x00036023) main_mobtv_loading_pane

0xde60,	// (0x0003bfdb) main_mobtv_pg_channel_list_pane

0xde6a,	// (0x0003bfe5) main_mobtv_pg_hdr_pane

0x7eb5,	// (0x00036030) main_mobtv_programe_curr_pane_ParamLimits

0x7eb5,	// (0x00036030) main_mobtv_programe_curr_pane

0x7ec2,	// (0x0003603d) main_mobtv_programe_next_pane_ParamLimits

0x7ec2,	// (0x0003603d) main_mobtv_programe_next_pane

0xde73,	// (0x0003bfee) popup_mobtv_noti_window

0xc751,	// (0x0003a8cc) main_tv_pg_hdr_pane_g1

0xde7b,	// (0x0003bff6) main_tv_pg_hdr_pane_g2

0xde83,	// (0x0003bffe) main_tv_pg_hdr_pane_g3

0xde8b,	// (0x0003c006) main_tv_pg_hdr_pane_g4

0xde93,	// (0x0003c00e) main_tv_pg_hdr_pane_g5

0xde9d,	// (0x0003c018) main_tv_pg_hdr_pane_g6

0xdea7,	// (0x0003c022) main_tv_pg_hdr_pane_g7

0xdeb1,	// (0x0003c02c) main_tv_pg_hdr_pane_g8

0xdebb,	// (0x0003c036) main_tv_pg_hdr_pane_g9

0xdec5,	// (0x0003c040) main_tv_pg_hdr_pane_g10

0xdecf,	// (0x0003c04a) main_tv_pg_hdr_pane_g11

0x000a,

0xfc08,	// (0x0003dd83) main_tv_pg_hdr_pane_g

0xded9,	// (0x0003c054) main_tv_pg_hdr_pane_t1

0xdee7,	// (0x0003c062) main_tv_pg_hdr_pane_t2

0xdef5,	// (0x0003c070) main_tv_pg_hdr_pane_t3

0xdf05,	// (0x0003c080) main_tv_pg_hdr_pane_t4

0xdf15,	// (0x0003c090) main_tv_pg_hdr_pane_t5

0x0004,

0xfc1f,	// (0x0003dd9a) main_tv_pg_hdr_pane_t

0xdf25,	// (0x0003c0a0) single_mobtv_pg_channel_pane_ParamLimits

0xdf25,	// (0x0003c0a0) single_mobtv_pg_channel_pane

0xdf37,	// (0x0003c0b2) single_mobtv_pg_channel_table_pane

0xdf40,	// (0x0003c0bb) single_mobtv_pg_channel_thumb_pane

0xdf49,	// (0x0003c0c4) single_tv_pg_channel_pane_g1

0xdf52,	// (0x0003c0cd) single_tv_pg_channel_pane_g2

0x0001,

0xfc2a,	// (0x0003dda5) single_tv_pg_channel_pane_g

0xc9b1,	// (0x0003ab2c) bg_single_mobtv_pg_channel_thumb_pane_ParamLimits

0xc9b1,	// (0x0003ab2c) bg_single_mobtv_pg_channel_thumb_pane

0xdf5b,	// (0x0003c0d6) single_mobtv_pg_channel_thumb_pane_g1_ParamLimits

0xdf5b,	// (0x0003c0d6) single_mobtv_pg_channel_thumb_pane_g1

0xdf69,	// (0x0003c0e4) single_mobtv_pg_channel_thumb_pane_g2_ParamLimits

0xdf69,	// (0x0003c0e4) single_mobtv_pg_channel_thumb_pane_g2

0xdf75,	// (0x0003c0f0) single_mobtv_pg_channel_thumb_pane_g3_ParamLimits

0xdf75,	// (0x0003c0f0) single_mobtv_pg_channel_thumb_pane_g3

0x0002,

0xfc2f,	// (0x0003ddaa) single_mobtv_pg_channel_thumb_pane_g_ParamLimits

0xfc2f,	// (0x0003ddaa) single_mobtv_pg_channel_thumb_pane_g

0xdf81,	// (0x0003c0fc) single_mobtv_pg_channel_thumb_pane_t1

0xdf8f,	// (0x0003c10a) single_mobtv_pg_channel_thumb_pane_t2

0x0001,

0xfc36,	// (0x0003ddb1) single_mobtv_pg_channel_thumb_pane_t

0xc751,	// (0x0003a8cc) bg_single_mobtv_pg_channel_table_pane_g1

0xc751,	// (0x0003a8cc) bg_single_mobtv_pg_channel_table_pane_g2

0x0001,

0xf6e1,	// (0x0003d85c) bg_single_mobtv_pg_channel_table_pane_g

0xdf9d,	// (0x0003c118) single_mobtv_pg_channel_table_pane_t1

0xdfab,	// (0x0003c126) single_mobtv_pg_channel_table_pane_t2

0x0001,

0xfc3b,	// (0x0003ddb6) single_mobtv_pg_channel_table_pane_t

0x7ed7,	// (0x00036052) main_mobtv_info_pane_g1_ParamLimits

0x7ed7,	// (0x00036052) main_mobtv_info_pane_g1

0x7ef5,	// (0x00036070) main_mobtv_info_pane_t1_ParamLimits

0x7ef5,	// (0x00036070) main_mobtv_info_pane_t1

0x7f6d,	// (0x000360e8) main_mobtv_info_pane_t2_ParamLimits

0x7f6d,	// (0x000360e8) main_mobtv_info_pane_t2

0x0002,

0xfc45,	// (0x0003ddc0) main_mobtv_info_pane_t_ParamLimits

0xfc45,	// (0x0003ddc0) main_mobtv_info_pane_t

0x7ffc,	// (0x00036177) wait_bar_pane_cp05

0x800e,	// (0x00036189) main_mobtv_loading_pane_g1_ParamLimits

0x800e,	// (0x00036189) main_mobtv_loading_pane_g1

0x8021,	// (0x0003619c) main_mobtv_loading_pane_g2_ParamLimits

0x8021,	// (0x0003619c) main_mobtv_loading_pane_g2

0x802d,	// (0x000361a8) main_mobtv_loading_pane_g3_ParamLimits

0x802d,	// (0x000361a8) main_mobtv_loading_pane_g3

0x0002,

0xfc4c,	// (0x0003ddc7) main_mobtv_loading_pane_g_ParamLimits

0xfc4c,	// (0x0003ddc7) main_mobtv_loading_pane_g

0xdfb9,	// (0x0003c134) main_mobtv_loading_pane_t1_ParamLimits

0xdfb9,	// (0x0003c134) main_mobtv_loading_pane_t1

0xdfd1,	// (0x0003c14c) main_mobtv_loading_pane_t2_ParamLimits

0xdfd1,	// (0x0003c14c) main_mobtv_loading_pane_t2

0x0001,

0xfc53,	// (0x0003ddce) main_mobtv_loading_pane_t_ParamLimits

0xfc53,	// (0x0003ddce) main_mobtv_loading_pane_t

0x8040,	// (0x000361bb) wait_bar_pane_cp06_ParamLimits

0x8040,	// (0x000361bb) wait_bar_pane_cp06

0xdff5,	// (0x0003c170) main_mobtv_programe_curr_pane_t1

0xe003,	// (0x0003c17e) main_mobtv_programe_curr_pane_t2

0x0001,

0xfc58,	// (0x0003ddd3) main_mobtv_programe_curr_pane_t

0xe011,	// (0x0003c18c) main_mobtv_programe_next_pane_t1

0xe01f,	// (0x0003c19a) main_mobtv_programe_next_pane_t2

0xe02d,	// (0x0003c1a8) main_mobtv_programe_next_pane_t3

0x0002,

0xfc5d,	// (0x0003ddd8) main_mobtv_programe_next_pane_t

0x9b34,	// (0x00037caf) bg_popup_mobtv_noti_window_pane

0xe03b,	// (0x0003c1b6) popup_mobtv_noti_window_g1

0xe043,	// (0x0003c1be) popup_mobtv_noti_window_t1

0xe051,	// (0x0003c1cc) popup_mobtv_noti_window_t2

0x0001,

0xfc64,	// (0x0003dddf) popup_mobtv_noti_window_t

0xc751,	// (0x0003a8cc) bg_popup_mobtv_noti_window_pane_g1

0x18db,	// (0x0002fa56) sc_clock_pane

0x18db,	// (0x0002fa56) main_fs_bigclock_pane

0x76d1,	// (0x0003584c) blid2_tripm_pane_t4_ParamLimits

0x76d1,	// (0x0003584c) blid2_tripm_pane_t4

0x804f,	// (0x000361ca) sc_clock_pane_g1_ParamLimits

0x804f,	// (0x000361ca) sc_clock_pane_g1

0x8061,	// (0x000361dc) sc_clock_pane_t1_ParamLimits

0x8061,	// (0x000361dc) sc_clock_pane_t1

0x8083,	// (0x000361fe) sc_clock_pane_t2_ParamLimits

0x8083,	// (0x000361fe) sc_clock_pane_t2

0x809b,	// (0x00036216) sc_clock_pane_t3_ParamLimits

0x809b,	// (0x00036216) sc_clock_pane_t3

0x0004,

0xfc69,	// (0x0003dde4) sc_clock_pane_t_ParamLimits

0xfc69,	// (0x0003dde4) sc_clock_pane_t

0x9052,	// (0x000371cd) main_fs_bigclock_indicator_pane_ParamLimits

0x9052,	// (0x000371cd) main_fs_bigclock_indicator_pane

0xc981,	// (0x0003aafc) main_fs_bigclock_pane_g1_ParamLimits

0xc981,	// (0x0003aafc) main_fs_bigclock_pane_g1

0x905e,	// (0x000371d9) main_fs_bigclock_pane_t1_ParamLimits

0x905e,	// (0x000371d9) main_fs_bigclock_pane_t1

0x9070,	// (0x000371eb) main_fs_bigclock_pane_t2_ParamLimits

0x9070,	// (0x000371eb) main_fs_bigclock_pane_t2

0x9082,	// (0x000371fd) main_fs_bigclock_pane_t3_ParamLimits

0x9082,	// (0x000371fd) main_fs_bigclock_pane_t3

0x0002,

0xfe6e,	// (0x0003dfe9) main_fs_bigclock_pane_t_ParamLimits

0xfe6e,	// (0x0003dfe9) main_fs_bigclock_pane_t

0xec35,	// (0x0003cdb0) main_fs_bigclock_indicator_pane_g1

0xdd25,	// (0x0003bea0) ncim_query_content_pane_g2_ParamLimits

0xdd25,	// (0x0003bea0) ncim_query_content_pane_g2

0x0001,

0xfbf6,	// (0x0003dd71) ncim_query_content_pane_g_ParamLimits

0xfbf6,	// (0x0003dd71) ncim_query_content_pane_g

0x80b4,	// (0x0003622f) sc_clock_pane_t4_ParamLimits

0x80b4,	// (0x0003622f) sc_clock_pane_t4

0x18c1,	// (0x0002fa3c) main_radioblah_pane

0xd17d,	// (0x0003b2f8) cell_call4_button_pane_t1_copy1_ParamLimits

0xd17d,	// (0x0003b2f8) cell_call4_button_pane_t1_copy1

0x7ce2,	// (0x00035e5d) main_ncimui_pane_t1_ParamLimits

0x7ce2,	// (0x00035e5d) main_ncimui_pane_t1

0x7cfc,	// (0x00035e77) main_ncimui_pane_t2_ParamLimits

0x7cfc,	// (0x00035e77) main_ncimui_pane_t2

0x0002,

0xfbef,	// (0x0003dd6a) main_ncimui_pane_t_ParamLimits

0xfbef,	// (0x0003dd6a) main_ncimui_pane_t

0xe18c,	// (0x0003c307) main_radioblah_anim_pane_ParamLimits

0xe18c,	// (0x0003c307) main_radioblah_anim_pane

0xe19d,	// (0x0003c318) main_radioblah_info_pane_ParamLimits

0xe19d,	// (0x0003c318) main_radioblah_info_pane

0xe1b1,	// (0x0003c32c) main_radioblah_pane_t1_ParamLimits

0xe1b1,	// (0x0003c32c) main_radioblah_pane_t1

0xe1cd,	// (0x0003c348) main_radioblah_pane_t2_ParamLimits

0xe1cd,	// (0x0003c348) main_radioblah_pane_t2

0x0003,

0xfc8a,	// (0x0003de05) main_radioblah_pane_t_ParamLimits

0xfc8a,	// (0x0003de05) main_radioblah_pane_t

0x816a,	// (0x000362e5) main_radioblah_rocker_ctrl_pane_ParamLimits

0x816a,	// (0x000362e5) main_radioblah_rocker_ctrl_pane

0xe215,	// (0x0003c390) main_radioblah_info_pane_t1_ParamLimits

0xe215,	// (0x0003c390) main_radioblah_info_pane_t1

0x81c2,	// (0x0003633d) main_radioblah_info_pane_t2_ParamLimits

0x81c2,	// (0x0003633d) main_radioblah_info_pane_t2

0x0003,

0xfc93,	// (0x0003de0e) main_radioblah_info_pane_t_ParamLimits

0xfc93,	// (0x0003de0e) main_radioblah_info_pane_t

0xc751,	// (0x0003a8cc) main_radioblah_rocker_ctrl_pane_g1

0x8272,	// (0x000363ed) main_radioblah_rocker_ctrl_pane_g2

0x827a,	// (0x000363f5) main_radioblah_rocker_ctrl_pane_g3

0x8282,	// (0x000363fd) main_radioblah_rocker_ctrl_pane_g4

0x828a,	// (0x00036405) main_radioblah_rocker_ctrl_pane_g5

0x8292,	// (0x0003640d) main_radioblah_rocker_ctrl_pane_g6

0x0005,

0xfc9c,	// (0x0003de17) main_radioblah_rocker_ctrl_pane_g

0x7c98,	// (0x00035e13) main_cset_text2_pane_t1_copy1_ParamLimits

0x6549,	// (0x000346c4) cam4_image_uncrop_qvga_pane

0x65c4,	// (0x0003473f) vid4_image_uncrop_qcif_pane

0xa80f,	// (0x0003898a) cam6_image_uncrop_qvga_pane_ParamLimits

0xa80f,	// (0x0003898a) cam6_image_uncrop_qvga_pane

0xda03,	// (0x0003bb7e) vid6_image_uncrop_qcif_pane_ParamLimits

0xda03,	// (0x0003bb7e) vid6_image_uncrop_qcif_pane

0x9b34,	// (0x00037caf) bg_popup_preview_window_pane_cp03

0xdcd7,	// (0x0003be52) list_cset_text2_pane

0xdcdf,	// (0x0003be5a) main_cset6_text2_pane_g1

0xdce7,	// (0x0003be62) main_cset6_text2_pane_t1

0x829a,	// (0x00036415) list_cset_text2_pane_t1_ParamLimits

0x829a,	// (0x00036415) list_cset_text2_pane_t1

0x18c1,	// (0x0002fa3c) main_radioblah_pane_ParamLimits

0x7fe8,	// (0x00036163) main_mobtv_info_pane_t3_ParamLimits

0x7fe8,	// (0x00036163) main_mobtv_info_pane_t3

0x8158,	// (0x000362d3) main_radioblah_pane_g1

0x8192,	// (0x0003630d) main_radioblah_info_pane_g1

0x8217,	// (0x00036392) main_radioblah_info_pane_t3_ParamLimits

0x8217,	// (0x00036392) main_radioblah_info_pane_t3

0x3626,	// (0x000317a1) highlight_cell_cale_month_pane_ParamLimits

0x3626,	// (0x000317a1) highlight_cell_cale_month_pane

0x18db,	// (0x0002fa56) main_phob_fisheye_pane

0xcb01,	// (0x0003ac7c) scroll_pane_cp0031_ParamLimits

0xcb01,	// (0x0003ac7c) scroll_pane_cp0031

0xdb11,	// (0x0003bc8c) wait_bar_pane_cp08_ParamLimits

0x79cf,	// (0x00035b4a) cset_list_set_pane_copy1_ParamLimits

0xe24f,	// (0x0003c3ca) highlight_cell_cale_month_pane_g1

0x82b5,	// (0x00036430) highlight_cell_cale_month_pane_t1

0xd784,	// (0x0003b8ff) list_gen_pane_cp01

0xd363,	// (0x0003b4de) scroll_pane_01

0x82c3,	// (0x0003643e) list_single_double_fisheye_pane

0x82cc,	// (0x00036447) list_double_fisheye_pane_g1_ParamLimits

0x82cc,	// (0x00036447) list_double_fisheye_pane_g1

0x82d8,	// (0x00036453) list_double_fisheye_pane_g2_ParamLimits

0x82d8,	// (0x00036453) list_double_fisheye_pane_g2

0x82e4,	// (0x0003645f) list_double_fisheye_pane_g3_ParamLimits

0x82e4,	// (0x0003645f) list_double_fisheye_pane_g3

0x0004,

0xfca9,	// (0x0003de24) list_double_fisheye_pane_g_ParamLimits

0xfca9,	// (0x0003de24) list_double_fisheye_pane_g

0x8308,	// (0x00036483) list_double_fisheye_pane_t1_ParamLimits

0x8308,	// (0x00036483) list_double_fisheye_pane_t1

0x8323,	// (0x0003649e) list_double_fisheye_pane_t2_ParamLimits

0x8323,	// (0x0003649e) list_double_fisheye_pane_t2

0x0001,

0xfcb4,	// (0x0003de2f) list_double_fisheye_pane_t_ParamLimits

0xfcb4,	// (0x0003de2f) list_double_fisheye_pane_t

0x18db,	// (0x0002fa56) main_call5_pane

0x80df,	// (0x0003625a) sc_swipe_pane_ParamLimits

0x80df,	// (0x0003625a) sc_swipe_pane

0x8358,	// (0x000364d3) call5_image_pane_ParamLimits

0x8358,	// (0x000364d3) call5_image_pane

0x8375,	// (0x000364f0) call5_swipe_1_pane_ParamLimits

0x8375,	// (0x000364f0) call5_swipe_1_pane

0x8388,	// (0x00036503) call5_swipe_2_pane_ParamLimits

0x8388,	// (0x00036503) call5_swipe_2_pane

0x83b3,	// (0x0003652e) popup_call5_audio_first_window_ParamLimits

0x83b3,	// (0x0003652e) popup_call5_audio_first_window

0xc9b1,	// (0x0003ab2c) call5_swipe_1_pane_g1_ParamLimits

0xc9b1,	// (0x0003ab2c) call5_swipe_1_pane_g1

0xe257,	// (0x0003c3d2) call5_swipe_1_pane_g2_ParamLimits

0xe257,	// (0x0003c3d2) call5_swipe_1_pane_g2

0x0001,

0xfcb9,	// (0x0003de34) call5_swipe_1_pane_g_ParamLimits

0xfcb9,	// (0x0003de34) call5_swipe_1_pane_g

0xe263,	// (0x0003c3de) call5_swipe_1_pane_t1_ParamLimits

0xe263,	// (0x0003c3de) call5_swipe_1_pane_t1

0xc9b1,	// (0x0003ab2c) call5_swipe_2_pane_g1_ParamLimits

0xc9b1,	// (0x0003ab2c) call5_swipe_2_pane_g1

0xe278,	// (0x0003c3f3) call5_swipe_2_pane_g2_ParamLimits

0xe278,	// (0x0003c3f3) call5_swipe_2_pane_g2

0x0001,

0xfcbe,	// (0x0003de39) call5_swipe_2_pane_g_ParamLimits

0xfcbe,	// (0x0003de39) call5_swipe_2_pane_g

0xe284,	// (0x0003c3ff) call5_swipe_2_pane_t1_ParamLimits

0xe284,	// (0x0003c3ff) call5_swipe_2_pane_t1

0xe299,	// (0x0003c414) sc_swipe_pane_g1_ParamLimits

0xe299,	// (0x0003c414) sc_swipe_pane_g1

0xe2a6,	// (0x0003c421) sc_swipe_pane_g2_ParamLimits

0xe2a6,	// (0x0003c421) sc_swipe_pane_g2

0x0001,

0xfcc3,	// (0x0003de3e) sc_swipe_pane_g_ParamLimits

0xfcc3,	// (0x0003de3e) sc_swipe_pane_g

0xe2b2,	// (0x0003c42d) sc_swipe_pane_t1_ParamLimits

0xe2b2,	// (0x0003c42d) sc_swipe_pane_t1

0x18db,	// (0x0002fa56) main_cmail_launcher_pane

0x83c4,	// (0x0003653f) aid_size_cell_cmail_l_ParamLimits

0x83c4,	// (0x0003653f) aid_size_cell_cmail_l

0x83de,	// (0x00036559) grid_cmail_l_pane_ParamLimits

0x83de,	// (0x00036559) grid_cmail_l_pane

0x83f9,	// (0x00036574) cell_cmail_l_pane_ParamLimits

0x83f9,	// (0x00036574) cell_cmail_l_pane

0x841f,	// (0x0003659a) cell_cmail_l_pane_g1_ParamLimits

0x841f,	// (0x0003659a) cell_cmail_l_pane_g1

0x8430,	// (0x000365ab) cell_cmail_l_pane_t1_ParamLimits

0x8430,	// (0x000365ab) cell_cmail_l_pane_t1

0xe2c7,	// (0x0003c442) cell_cmail_l_pane_t2_ParamLimits

0xe2c7,	// (0x0003c442) cell_cmail_l_pane_t2

0x0001,

0xfcc8,	// (0x0003de43) cell_cmail_l_pane_t_ParamLimits

0xfcc8,	// (0x0003de43) cell_cmail_l_pane_t

0xa801,	// (0x0003897c) grid_highlight_pane_cp018_ParamLimits

0xa801,	// (0x0003897c) grid_highlight_pane_cp018

0x011d,	// (0x0002e298) main2_pane_ParamLimits

0x011d,	// (0x0002e298) main2_pane

0xa33b,	// (0x000384b6) popup_sp_fs_action_menu_bg_pane_g1

0xa343,	// (0x000384be) popup_sp_fs_action_menu_bg_pane_g2

0xa34b,	// (0x000384c6) popup_sp_fs_action_menu_bg_pane_g3

0xa353,	// (0x000384ce) popup_sp_fs_action_menu_bg_pane_g4

0xa35b,	// (0x000384d6) popup_sp_fs_action_menu_bg_pane_g5

0xa363,	// (0x000384de) popup_sp_fs_action_menu_bg_pane_g6

0xa36b,	// (0x000384e6) popup_sp_fs_action_menu_bg_pane_g7

0xa373,	// (0x000384ee) popup_sp_fs_action_menu_bg_pane_g8

0xa37b,	// (0x000384f6) popup_sp_fs_action_menu_bg_pane_g9

0xa383,	// (0x000384fe) popup_sp_fs_action_menu_bg_pane_g10

0xa383,	// (0x000384fe) popup_sp_fs_action_menu_bg_pane_g11

0x000a,

0xf18d,	// (0x0003d308) popup_sp_fs_action_menu_bg_pane_g

0x2563,	// (0x000306de) list_medium_line_x2_t3_g3_g1_ParamLimits

0x2563,	// (0x000306de) list_medium_line_x2_t3_g3_g1

0x256f,	// (0x000306ea) list_medium_line_x2_t3_g3_g2_ParamLimits

0x256f,	// (0x000306ea) list_medium_line_x2_t3_g3_g2

0x257b,	// (0x000306f6) list_medium_line_x2_t3_g3_g3_ParamLimits

0x257b,	// (0x000306f6) list_medium_line_x2_t3_g3_g3

0x0002,

0xf23d,	// (0x0003d3b8) list_medium_line_x2_t3_g3_g_ParamLimits

0xf23d,	// (0x0003d3b8) list_medium_line_x2_t3_g3_g

0x2587,	// (0x00030702) list_medium_line_x2_t3_g3_t1_ParamLimits

0x2587,	// (0x00030702) list_medium_line_x2_t3_g3_t1

0x259c,	// (0x00030717) list_medium_line_x2_t3_g3_t2_ParamLimits

0x259c,	// (0x00030717) list_medium_line_x2_t3_g3_t2

0x25b0,	// (0x0003072b) list_medium_line_x2_t3_g3_t3_ParamLimits

0x25b0,	// (0x0003072b) list_medium_line_x2_t3_g3_t3

0x0002,

0xf244,	// (0x0003d3bf) list_medium_line_x2_t3_g3_t_ParamLimits

0xf244,	// (0x0003d3bf) list_medium_line_x2_t3_g3_t

0x2563,	// (0x000306de) list_medium_line_x2_t3_g2_g1_ParamLimits

0x2563,	// (0x000306de) list_medium_line_x2_t3_g2_g1

0x257b,	// (0x000306f6) list_medium_line_x2_t3_g2_g2_ParamLimits

0x257b,	// (0x000306f6) list_medium_line_x2_t3_g2_g2

0x0001,

0xf24b,	// (0x0003d3c6) list_medium_line_x2_t3_g2_g_ParamLimits

0xf24b,	// (0x0003d3c6) list_medium_line_x2_t3_g2_g

0x25c5,	// (0x00030740) list_medium_line_x2_t3_g2_t1_ParamLimits

0x25c5,	// (0x00030740) list_medium_line_x2_t3_g2_t1

0x25db,	// (0x00030756) list_medium_line_x2_t3_g2_t2_ParamLimits

0x25db,	// (0x00030756) list_medium_line_x2_t3_g2_t2

0x25ed,	// (0x00030768) list_medium_line_x2_t3_g2_t3_ParamLimits

0x25ed,	// (0x00030768) list_medium_line_x2_t3_g2_t3

0x0002,

0xf250,	// (0x0003d3cb) list_medium_line_x2_t3_g2_t_ParamLimits

0xf250,	// (0x0003d3cb) list_medium_line_x2_t3_g2_t

0x2563,	// (0x000306de) list_medium_line_x2_t4_g4_g1_ParamLimits

0x2563,	// (0x000306de) list_medium_line_x2_t4_g4_g1

0x260b,	// (0x00030786) list_medium_line_x2_t4_g4_g2_ParamLimits

0x260b,	// (0x00030786) list_medium_line_x2_t4_g4_g2

0x256f,	// (0x000306ea) list_medium_line_x2_t4_g4_g3_ParamLimits

0x256f,	// (0x000306ea) list_medium_line_x2_t4_g4_g3

0x2617,	// (0x00030792) list_medium_line_x2_t4_g4_g4_ParamLimits

0x2617,	// (0x00030792) list_medium_line_x2_t4_g4_g4

0x0003,

0xf257,	// (0x0003d3d2) list_medium_line_x2_t4_g4_g_ParamLimits

0xf257,	// (0x0003d3d2) list_medium_line_x2_t4_g4_g

0x2623,	// (0x0003079e) list_medium_line_x2_t4_g4_t1_ParamLimits

0x2623,	// (0x0003079e) list_medium_line_x2_t4_g4_t1

0x263d,	// (0x000307b8) list_medium_line_x2_t4_g4_t2_ParamLimits

0x263d,	// (0x000307b8) list_medium_line_x2_t4_g4_t2

0x2652,	// (0x000307cd) list_medium_line_x2_t4_g4_t3_ParamLimits

0x2652,	// (0x000307cd) list_medium_line_x2_t4_g4_t3

0x2667,	// (0x000307e2) list_medium_line_x2_t4_g4_t4_ParamLimits

0x2667,	// (0x000307e2) list_medium_line_x2_t4_g4_t4

0x0003,

0xf260,	// (0x0003d3db) list_medium_line_x2_t4_g4_t_ParamLimits

0xf260,	// (0x0003d3db) list_medium_line_x2_t4_g4_t

0x2563,	// (0x000306de) list_medium_line_x2_t2_g4_g1_ParamLimits

0x2563,	// (0x000306de) list_medium_line_x2_t2_g4_g1

0x260b,	// (0x00030786) list_medium_line_x2_t2_g4_g2_ParamLimits

0x260b,	// (0x00030786) list_medium_line_x2_t2_g4_g2

0x256f,	// (0x000306ea) list_medium_line_x2_t2_g4_g3_ParamLimits

0x256f,	// (0x000306ea) list_medium_line_x2_t2_g4_g3

0x257b,	// (0x000306f6) list_medium_line_x2_t2_g4_g4_ParamLimits

0x257b,	// (0x000306f6) list_medium_line_x2_t2_g4_g4

0x0003,

0xf2c7,	// (0x0003d442) list_medium_line_x2_t2_g4_g_ParamLimits

0xf2c7,	// (0x0003d442) list_medium_line_x2_t2_g4_g

0x364c,	// (0x000317c7) list_medium_line_x2_t2_g4_t1_ParamLimits

0x364c,	// (0x000317c7) list_medium_line_x2_t2_g4_t1

0x25b0,	// (0x0003072b) list_medium_line_x2_t2_g4_t2_ParamLimits

0x25b0,	// (0x0003072b) list_medium_line_x2_t2_g4_t2

0x0001,

0xf2d0,	// (0x0003d44b) list_medium_line_x2_t2_g4_t_ParamLimits

0xf2d0,	// (0x0003d44b) list_medium_line_x2_t2_g4_t

0x2563,	// (0x000306de) list_medium_line_x2_t2_g3_g1_ParamLimits

0x2563,	// (0x000306de) list_medium_line_x2_t2_g3_g1

0x256f,	// (0x000306ea) list_medium_line_x2_t2_g3_g2_ParamLimits

0x256f,	// (0x000306ea) list_medium_line_x2_t2_g3_g2

0x257b,	// (0x000306f6) list_medium_line_x2_t2_g3_g3_ParamLimits

0x257b,	// (0x000306f6) list_medium_line_x2_t2_g3_g3

0x0002,

0xf23d,	// (0x0003d3b8) list_medium_line_x2_t2_g3_g_ParamLimits

0xf23d,	// (0x0003d3b8) list_medium_line_x2_t2_g3_g

0x3661,	// (0x000317dc) list_medium_line_x2_t2_g3_t1_ParamLimits

0x3661,	// (0x000317dc) list_medium_line_x2_t2_g3_t1

0x25b0,	// (0x0003072b) list_medium_line_x2_t2_g3_t2_ParamLimits

0x25b0,	// (0x0003072b) list_medium_line_x2_t2_g3_t2

0x0001,

0xf2d5,	// (0x0003d450) list_medium_line_x2_t2_g3_t_ParamLimits

0xf2d5,	// (0x0003d450) list_medium_line_x2_t2_g3_t

0x37ae,	// (0x00031929) main_sp_fs_list_pane_ParamLimits

0x37ae,	// (0x00031929) main_sp_fs_list_pane

0xcec1,	// (0x0003b03c) sp_fs_scroll_pane_ParamLimits

0xcec1,	// (0x0003b03c) sp_fs_scroll_pane

0x37ba,	// (0x00031935) list_medium_line_x2_t3_t1

0x37ca,	// (0x00031945) list_medium_line_x2_t3_t2

0x37d8,	// (0x00031953) list_medium_line_x2_t3_t3

0x0002,

0xf320,	// (0x0003d49b) list_medium_line_x2_t3_t

0x37e6,	// (0x00031961) list_medium_line_x3_t4_t1

0x37f6,	// (0x00031971) list_medium_line_x3_t4_t2

0x3804,	// (0x0003197f) list_medium_line_x3_t4_t3

0x37d8,	// (0x00031953) list_medium_line_x3_t4_t4

0x0003,

0xf327,	// (0x0003d4a2) list_medium_line_x3_t4_t

0x3812,	// (0x0003198d) list_medium_line_x4_t5_t1

0x3822,	// (0x0003199d) list_medium_line_x4_t5_t2

0x3804,	// (0x0003197f) list_medium_line_x4_t5_t3

0x3830,	// (0x000319ab) list_medium_line_x4_t5_t4

0x37d8,	// (0x00031953) list_medium_line_x4_t5_t5

0x0004,

0xf330,	// (0x0003d4ab) list_medium_line_x4_t5_t

0x2563,	// (0x000306de) list_medium_line_t4_g4_g1_ParamLimits

0x2563,	// (0x000306de) list_medium_line_t4_g4_g1

0x383e,	// (0x000319b9) list_medium_line_t4_g4_g2_ParamLimits

0x383e,	// (0x000319b9) list_medium_line_t4_g4_g2

0x384a,	// (0x000319c5) list_medium_line_t4_g4_g3_ParamLimits

0x384a,	// (0x000319c5) list_medium_line_t4_g4_g3

0x257b,	// (0x000306f6) list_medium_line_t4_g4_g4_ParamLimits

0x257b,	// (0x000306f6) list_medium_line_t4_g4_g4

0x0003,

0xf33b,	// (0x0003d4b6) list_medium_line_t4_g4_g_ParamLimits

0xf33b,	// (0x0003d4b6) list_medium_line_t4_g4_g

0x3856,	// (0x000319d1) list_medium_line_t4_g4_t1_ParamLimits

0x3856,	// (0x000319d1) list_medium_line_t4_g4_t1

0x386b,	// (0x000319e6) list_medium_line_t4_g4_t2_ParamLimits

0x386b,	// (0x000319e6) list_medium_line_t4_g4_t2

0x3881,	// (0x000319fc) list_medium_line_t4_g4_t3_ParamLimits

0x3881,	// (0x000319fc) list_medium_line_t4_g4_t3

0x25b0,	// (0x0003072b) list_medium_line_t4_g4_t4_ParamLimits

0x25b0,	// (0x0003072b) list_medium_line_t4_g4_t4

0x0003,

0xf344,	// (0x0003d4bf) list_medium_line_t4_g4_t_ParamLimits

0xf344,	// (0x0003d4bf) list_medium_line_t4_g4_t

0x39a9,	// (0x00031b24) chi_dic_find_pane_g1

0x05e8,	// (0x0002e763) main_tport_pane

0x6da9,	// (0x00034f24) list_medium_line_plain_t1

0x6e0b,	// (0x00034f86) list_medium_line_t2_g2_g1_ParamLimits

0x6e0b,	// (0x00034f86) list_medium_line_t2_g2_g1

0x6e17,	// (0x00034f92) list_medium_line_t2_g2_g2_ParamLimits

0x6e17,	// (0x00034f92) list_medium_line_t2_g2_g2

0x0001,

0xfa00,	// (0x0003db7b) list_medium_line_t2_g2_g_ParamLimits

0xfa00,	// (0x0003db7b) list_medium_line_t2_g2_g

0x6e23,	// (0x00034f9e) list_medium_line_t2_g2_t1_ParamLimits

0x6e23,	// (0x00034f9e) list_medium_line_t2_g2_t1

0x6e3d,	// (0x00034fb8) list_medium_line_t2_g2_t2_ParamLimits

0x6e3d,	// (0x00034fb8) list_medium_line_t2_g2_t2

0x0001,

0xfa05,	// (0x0003db80) list_medium_line_t2_g2_t_ParamLimits

0xfa05,	// (0x0003db80) list_medium_line_t2_g2_t

0xd78d,	// (0x0003b908) aid_sp_fs_list_icon_a_sm

0xd795,	// (0x0003b910) aid_sp_fs_list_icon_d

0xd79d,	// (0x0003b918) aid_sp_fs_text_primary

0xd7a6,	// (0x0003b921) aid_sp_fs_text_secondary

0x7487,	// (0x00035602) list_medium_line

0x7487,	// (0x00035602) list_medium_line_g2

0x7487,	// (0x00035602) list_medium_line_g3

0x7487,	// (0x00035602) list_medium_line_plain

0x7487,	// (0x00035602) list_medium_line_plain_t2

0x7487,	// (0x00035602) list_medium_line_plain_t3

0x7487,	// (0x00035602) list_medium_line_right_icon

0x7487,	// (0x00035602) list_medium_line_right_iconx2

0x7487,	// (0x00035602) list_medium_line_t2

0x7487,	// (0x00035602) list_medium_line_t2_g2

0x7487,	// (0x00035602) list_medium_line_t2_g3

0x7487,	// (0x00035602) list_medium_line_t2_right_icon

0x7487,	// (0x00035602) list_medium_line_t2_right_iconx2

0x7487,	// (0x00035602) list_medium_line_t3

0x7487,	// (0x00035602) list_medium_line_t3_g2

0x7487,	// (0x00035602) list_medium_line_t3_g3

0x7487,	// (0x00035602) list_medium_line_t3_right_iconx2

0x7490,	// (0x0003560b) list_medium_line_t4_g4

0x7487,	// (0x00035602) list_medium_line_x2

0x7487,	// (0x00035602) list_medium_line_x2_t2_g2

0x7487,	// (0x00035602) list_medium_line_x2_t2_g3

0x7487,	// (0x00035602) list_medium_line_x2_t2_g4

0x7487,	// (0x00035602) list_medium_line_x2_t3

0x7487,	// (0x00035602) list_medium_line_x2_t3_g2

0x7487,	// (0x00035602) list_medium_line_x2_t3_g3

0x7487,	// (0x00035602) list_medium_line_x2_t3_g4

0x7487,	// (0x00035602) list_medium_line_x2_t4_g2

0x7487,	// (0x00035602) list_medium_line_x2_t4_g4

0x7499,	// (0x00035614) list_medium_line_x3

0x7499,	// (0x00035614) list_medium_line_x3_t4

0x7499,	// (0x00035614) list_medium_line_x3_t4_g4

0x7490,	// (0x0003560b) list_medium_line_x4_t4

0x7490,	// (0x0003560b) list_medium_line_x4_t4_g7

0x7490,	// (0x0003560b) list_medium_line_x4_t5

0x74a2,	// (0x0003561d) list_single_fs_dyc_pane_ParamLimits

0x74a2,	// (0x0003561d) list_single_fs_dyc_pane

0x2563,	// (0x000306de) list_medium_line_x4_t4_g7_g1_ParamLimits

0x2563,	// (0x000306de) list_medium_line_x4_t4_g7_g1

0x7bc9,	// (0x00035d44) list_medium_line_x4_t4_g7_g2_ParamLimits

0x7bc9,	// (0x00035d44) list_medium_line_x4_t4_g7_g2

0x7bd5,	// (0x00035d50) list_medium_line_x4_t4_g7_g3_ParamLimits

0x7bd5,	// (0x00035d50) list_medium_line_x4_t4_g7_g3

0x7be4,	// (0x00035d5f) list_medium_line_x4_t4_g7_g4_ParamLimits

0x7be4,	// (0x00035d5f) list_medium_line_x4_t4_g7_g4

0x7bf0,	// (0x00035d6b) list_medium_line_x4_t4_g7_g5_ParamLimits

0x7bf0,	// (0x00035d6b) list_medium_line_x4_t4_g7_g5

0x7bff,	// (0x00035d7a) list_medium_line_x4_t4_g7_g6_ParamLimits

0x7bff,	// (0x00035d7a) list_medium_line_x4_t4_g7_g6

0x7c0e,	// (0x00035d89) list_medium_line_x4_t4_g7_g7_ParamLimits

0x7c0e,	// (0x00035d89) list_medium_line_x4_t4_g7_g7

0x0006,

0xfbd0,	// (0x0003dd4b) list_medium_line_x4_t4_g7_g_ParamLimits

0xfbd0,	// (0x0003dd4b) list_medium_line_x4_t4_g7_g

0x7c1a,	// (0x00035d95) list_medium_line_x4_t4_g7_t1_ParamLimits

0x7c1a,	// (0x00035d95) list_medium_line_x4_t4_g7_t1

0x7c2f,	// (0x00035daa) list_medium_line_x4_t4_g7_t2_ParamLimits

0x7c2f,	// (0x00035daa) list_medium_line_x4_t4_g7_t2

0x7c44,	// (0x00035dbf) list_medium_line_x4_t4_g7_t3_ParamLimits

0x7c44,	// (0x00035dbf) list_medium_line_x4_t4_g7_t3

0x7c59,	// (0x00035dd4) list_medium_line_x4_t4_g7_t4_ParamLimits

0x7c59,	// (0x00035dd4) list_medium_line_x4_t4_g7_t4

0x7c6b,	// (0x00035de6) list_medium_line_x4_t4_g7_t5_ParamLimits

0x7c6b,	// (0x00035de6) list_medium_line_x4_t4_g7_t5

0x0004,

0xfbdf,	// (0x0003dd5a) list_medium_line_x4_t4_g7_t_ParamLimits

0xfbdf,	// (0x0003dd5a) list_medium_line_x4_t4_g7_t

0x7c7d,	// (0x00035df8) list_single_dyc_row_pane_ParamLimits

0x7c7d,	// (0x00035df8) list_single_dyc_row_pane

0x8345,	// (0x000364c0) call5_gesture_pane_ParamLimits

0x8345,	// (0x000364c0) call5_gesture_pane

0x839b,	// (0x00036516) call5_windows_pane_ParamLimits

0x839b,	// (0x00036516) call5_windows_pane

0x8446,	// (0x000365c1) call5_swipe_1_pane_cp_ParamLimits

0x8446,	// (0x000365c1) call5_swipe_1_pane_cp

0x8452,	// (0x000365cd) call5_swipe_2_pane_cp_ParamLimits

0x8452,	// (0x000365cd) call5_swipe_2_pane_cp

0xaeef,	// (0x0003906a) call5_image_pane_cp

0x845e,	// (0x000365d9) popup_call5_audio_first_window_cp_ParamLimits

0x845e,	// (0x000365d9) popup_call5_audio_first_window_cp

0xe299,	// (0x0003c414) call5_swipe_1_pane_g1_cp_ParamLimits

0xe299,	// (0x0003c414) call5_swipe_1_pane_g1_cp

0xe2d9,	// (0x0003c454) call5_swipe_1_pane_g2_cp

0xe2b2,	// (0x0003c42d) call5_swipe_1_pane_t1_cp_ParamLimits

0xe2b2,	// (0x0003c42d) call5_swipe_1_pane_t1_cp

0xe299,	// (0x0003c414) call5_swipe_2_pane_g1_cp_ParamLimits

0xe299,	// (0x0003c414) call5_swipe_2_pane_g1_cp

0xe2e1,	// (0x0003c45c) call5_swipe_2_pane_g2_cp

0xe2e9,	// (0x0003c464) call5_swipe_2_pane_t1_cp_ParamLimits

0xe2e9,	// (0x0003c464) call5_swipe_2_pane_t1_cp

0xa801,	// (0x0003897c) main_sp_fs_email_pane

0xe2fe,	// (0x0003c479) main_sp_fs_listscroll_pane_te

0xe307,	// (0x0003c482) popup_sp_fs_action_menu_pane_ParamLimits

0xe307,	// (0x0003c482) popup_sp_fs_action_menu_pane

0xc751,	// (0x0003a8cc) bg_sp_fs_ctrlbar_pane_g1

0xe349,	// (0x0003c4c4) bg_sp_fs_ctrlbar_ddmenu_pane_g1

0xe352,	// (0x0003c4cd) bg_sp_fs_ctrlbar_ddmenu_pane_g2

0xe35b,	// (0x0003c4d6) bg_sp_fs_ctrlbar_ddmenu_pane_g3

0xc751,	// (0x0003a8cc) bg_sp_fs_ctrlbar_ddmenu_pane_g4

0x0003,

0xfccd,	// (0x0003de48) bg_sp_fs_ctrlbar_ddmenu_pane_g

0xc534,	// (0x0003a6af) bg_sp_fs_ctrlbar_ddmenu_pane_ParamLimits

0xc534,	// (0x0003a6af) bg_sp_fs_ctrlbar_ddmenu_pane

0xe364,	// (0x0003c4df) main_sp_fs_ctrlbar_ddmenu_pane_g1_ParamLimits

0xe364,	// (0x0003c4df) main_sp_fs_ctrlbar_ddmenu_pane_g1

0xe370,	// (0x0003c4eb) main_sp_fs_ctrlbar_ddmenu_pane_g2_ParamLimits

0xe370,	// (0x0003c4eb) main_sp_fs_ctrlbar_ddmenu_pane_g2

0x0001,

0xfcd6,	// (0x0003de51) main_sp_fs_ctrlbar_ddmenu_pane_g_ParamLimits

0xfcd6,	// (0x0003de51) main_sp_fs_ctrlbar_ddmenu_pane_g

0xe37c,	// (0x0003c4f7) main_sp_fs_ctrlbar_ddmenu_pane_t1_ParamLimits

0xe37c,	// (0x0003c4f7) main_sp_fs_ctrlbar_ddmenu_pane_t1

0x846c,	// (0x000365e7) list_medium_line_t2_right_icon_g1

0x8474,	// (0x000365ef) list_medium_line_t2_right_icon_t1

0x8484,	// (0x000365ff) list_medium_line_t2_right_icon_t2

0x0001,

0xfcdb,	// (0x0003de56) list_medium_line_t2_right_icon_t

0xc347,	// (0x0003a4c2) bg_sp_fs_ctrlbar_pane_ParamLimits

0xc347,	// (0x0003a4c2) bg_sp_fs_ctrlbar_pane

0x84de,	// (0x00036659) main_sp_fs_ctrlbar_button_pane_cp01

0x84e8,	// (0x00036663) main_sp_fs_ctrlbar_ddmenu_pane

0xe3ce,	// (0x0003c549) main_sp_fs_ctrlbar_pane_g1

0xe3da,	// (0x0003c555) main_sp_fs_ctrlbar_pane_g2

0x0001,

0xfce0,	// (0x0003de5b) main_sp_fs_ctrlbar_pane_g

0xe3e6,	// (0x0003c561) main_sp_fs_ctrlbar_pane_t1

0x84f2,	// (0x0003666d) main_sp_fs_ctrlbar_pane

0x8516,	// (0x00036691) main_sp_fs_listscroll_pane_te_cp01

0x8536,	// (0x000366b1) popup_sp_fs_action_menu_pane_cp01_ParamLimits

0x8536,	// (0x000366b1) popup_sp_fs_action_menu_pane_cp01

0xa801,	// (0x0003897c) bg_sp_fs_highlight_list_pane_cp01_ParamLimits

0xa801,	// (0x0003897c) bg_sp_fs_highlight_list_pane_cp01

0xe416,	// (0x0003c591) sp_fs_action_menu_list_gene_pane_g1_ParamLimits

0xe416,	// (0x0003c591) sp_fs_action_menu_list_gene_pane_g1

0xe425,	// (0x0003c5a0) sp_fs_action_menu_list_gene_pane_g2_ParamLimits

0xe425,	// (0x0003c5a0) sp_fs_action_menu_list_gene_pane_g2

0x0001,

0xfcea,	// (0x0003de65) sp_fs_action_menu_list_gene_pane_g_ParamLimits

0xfcea,	// (0x0003de65) sp_fs_action_menu_list_gene_pane_g

0xe432,	// (0x0003c5ad) sp_fs_action_menu_list_gene_pane_t1_ParamLimits

0xe432,	// (0x0003c5ad) sp_fs_action_menu_list_gene_pane_t1

0xe44a,	// (0x0003c5c5) sp_fs_action_menu_list_gene_pane_ParamLimits

0xe44a,	// (0x0003c5c5) sp_fs_action_menu_list_gene_pane

0xe467,	// (0x0003c5e2) popup_sp_fs_action_menu_bg_pane_ParamLimits

0xe467,	// (0x0003c5e2) popup_sp_fs_action_menu_bg_pane

0xe475,	// (0x0003c5f0) sp_fs_action_menu_list_pane_ParamLimits

0xe475,	// (0x0003c5f0) sp_fs_action_menu_list_pane

0xe493,	// (0x0003c60e) sp_fs_scroll_pane_cp01_ParamLimits

0xe493,	// (0x0003c60e) sp_fs_scroll_pane_cp01

0x8566,	// (0x000366e1) list_medium_line_plain_t2_t1

0x8576,	// (0x000366f1) list_medium_line_plain_t2_t2

0x0001,

0xfcef,	// (0x0003de6a) list_medium_line_plain_t2_t

0x8586,	// (0x00036701) list_medium_line_plain_t3_t1

0x8596,	// (0x00036711) list_medium_line_plain_t3_t2

0x85a4,	// (0x0003671f) list_medium_line_plain_t3_t3

0x0002,

0xfcf4,	// (0x0003de6f) list_medium_line_plain_t3_t

0x2563,	// (0x000306de) list_medium_line_x2_t2_g2_g1_ParamLimits

0x2563,	// (0x000306de) list_medium_line_x2_t2_g2_g1

0x257b,	// (0x000306f6) list_medium_line_x2_t2_g2_g2_ParamLimits

0x257b,	// (0x000306f6) list_medium_line_x2_t2_g2_g2

0x0001,

0xf24b,	// (0x0003d3c6) list_medium_line_x2_t2_g2_g_ParamLimits

0xf24b,	// (0x0003d3c6) list_medium_line_x2_t2_g2_g

0x3856,	// (0x000319d1) list_medium_line_x2_t2_g2_t1_ParamLimits

0x3856,	// (0x000319d1) list_medium_line_x2_t2_g2_t1

0x25b0,	// (0x0003072b) list_medium_line_x2_t2_g2_t2_ParamLimits

0x25b0,	// (0x0003072b) list_medium_line_x2_t2_g2_t2

0x0001,

0xfcfb,	// (0x0003de76) list_medium_line_x2_t2_g2_t_ParamLimits

0xfcfb,	// (0x0003de76) list_medium_line_x2_t2_g2_t

0x2563,	// (0x000306de) list_medium_line_x2_t4_g2_g1_ParamLimits

0x2563,	// (0x000306de) list_medium_line_x2_t4_g2_g1

0x257b,	// (0x000306f6) list_medium_line_x2_t4_g2_g2_ParamLimits

0x257b,	// (0x000306f6) list_medium_line_x2_t4_g2_g2

0x0001,

0xf24b,	// (0x0003d3c6) list_medium_line_x2_t4_g2_g_ParamLimits

0xf24b,	// (0x0003d3c6) list_medium_line_x2_t4_g2_g

0x85b2,	// (0x0003672d) list_medium_line_x2_t4_g2_t1_ParamLimits

0x85b2,	// (0x0003672d) list_medium_line_x2_t4_g2_t1

0x85cc,	// (0x00036747) list_medium_line_x2_t4_g2_t2_ParamLimits

0x85cc,	// (0x00036747) list_medium_line_x2_t4_g2_t2

0x85e1,	// (0x0003675c) list_medium_line_x2_t4_g2_t3_ParamLimits

0x85e1,	// (0x0003675c) list_medium_line_x2_t4_g2_t3

0x25b0,	// (0x0003072b) list_medium_line_x2_t4_g2_t4_ParamLimits

0x25b0,	// (0x0003072b) list_medium_line_x2_t4_g2_t4

0x0003,

0xfd00,	// (0x0003de7b) list_medium_line_x2_t4_g2_t_ParamLimits

0xfd00,	// (0x0003de7b) list_medium_line_x2_t4_g2_t

0x85f6,	// (0x00036771) list_medium_line_t3_right_iconx2_g1

0x846c,	// (0x000365e7) list_medium_line_t3_right_iconx2_g2

0x85fe,	// (0x00036779) list_medium_line_t3_right_iconx2_g3

0x0002,

0xfd09,	// (0x0003de84) list_medium_line_t3_right_iconx2_g

0x8608,	// (0x00036783) list_medium_line_t3_right_iconx2_t1

0x8618,	// (0x00036793) list_medium_line_t3_right_iconx2_t2

0x0001,

0xfd10,	// (0x0003de8b) list_medium_line_t3_right_iconx2_t

0x2563,	// (0x000306de) list_medium_line_x3_t4_g4_g1_ParamLimits

0x2563,	// (0x000306de) list_medium_line_x3_t4_g4_g1

0x256f,	// (0x000306ea) list_medium_line_x3_t4_g4_g2_ParamLimits

0x256f,	// (0x000306ea) list_medium_line_x3_t4_g4_g2

0x383e,	// (0x000319b9) list_medium_line_x3_t4_g4_g3_ParamLimits

0x383e,	// (0x000319b9) list_medium_line_x3_t4_g4_g3

0x8626,	// (0x000367a1) list_medium_line_x3_t4_g4_g4_ParamLimits

0x8626,	// (0x000367a1) list_medium_line_x3_t4_g4_g4

0x0003,

0xfd15,	// (0x0003de90) list_medium_line_x3_t4_g4_g_ParamLimits

0xfd15,	// (0x0003de90) list_medium_line_x3_t4_g4_g

0x8632,	// (0x000367ad) list_medium_line_x3_t4_g4_t1_ParamLimits

0x8632,	// (0x000367ad) list_medium_line_x3_t4_g4_t1

0x8649,	// (0x000367c4) list_medium_line_x3_t4_g4_t2_ParamLimits

0x8649,	// (0x000367c4) list_medium_line_x3_t4_g4_t2

0x8664,	// (0x000367df) list_medium_line_x3_t4_g4_t3_ParamLimits

0x8664,	// (0x000367df) list_medium_line_x3_t4_g4_t3

0x8679,	// (0x000367f4) list_medium_line_x3_t4_g4_t4_ParamLimits

0x8679,	// (0x000367f4) list_medium_line_x3_t4_g4_t4

0x0003,

0xfd1e,	// (0x0003de99) list_medium_line_x3_t4_g4_t_ParamLimits

0xfd1e,	// (0x0003de99) list_medium_line_x3_t4_g4_t

0x8696,	// (0x00036811) list_single_dyc_row_text_pane_t1_ParamLimits

0x8696,	// (0x00036811) list_single_dyc_row_text_pane_t1

0x86df,	// (0x0003685a) list_single_dyc_row_text_pane_t2_ParamLimits

0x86df,	// (0x0003685a) list_single_dyc_row_text_pane_t2

0xe4b9,	// (0x0003c634) list_single_dyc_row_text_pane_t3_ParamLimits

0xe4b9,	// (0x0003c634) list_single_dyc_row_text_pane_t3

0x0005,

0xfd27,	// (0x0003dea2) list_single_dyc_row_text_pane_t_ParamLimits

0xfd27,	// (0x0003dea2) list_single_dyc_row_text_pane_t

0xe4dd,	// (0x0003c658) list_single_dyc_row_pane_g1_ParamLimits

0xe4dd,	// (0x0003c658) list_single_dyc_row_pane_g1

0xe4e9,	// (0x0003c664) list_single_dyc_row_pane_g2_ParamLimits

0xe4e9,	// (0x0003c664) list_single_dyc_row_pane_g2

0xe4f5,	// (0x0003c670) list_single_dyc_row_pane_g3_ParamLimits

0xe4f5,	// (0x0003c670) list_single_dyc_row_pane_g3

0xe501,	// (0x0003c67c) list_single_dyc_row_pane_g4_ParamLimits

0xe501,	// (0x0003c67c) list_single_dyc_row_pane_g4

0x0003,

0xfd34,	// (0x0003deaf) list_single_dyc_row_pane_g_ParamLimits

0xfd34,	// (0x0003deaf) list_single_dyc_row_pane_g

0xe50d,	// (0x0003c688) list_single_dyc_row_text_pane_ParamLimits

0xe50d,	// (0x0003c688) list_single_dyc_row_text_pane

0x9b34,	// (0x00037caf) bg_sp_fs_scroll_pane

0xe52c,	// (0x0003c6a7) thumb_sp_fs_scroll_pane

0x6e0b,	// (0x00034f86) list_medium_line_g1_ParamLimits

0x6e0b,	// (0x00034f86) list_medium_line_g1

0x8814,	// (0x0003698f) list_medium_line_t1_ParamLimits

0x8814,	// (0x0003698f) list_medium_line_t1

0x2563,	// (0x000306de) list_medium_line_x2_g1_ParamLimits

0x2563,	// (0x000306de) list_medium_line_x2_g1

0x256f,	// (0x000306ea) list_medium_line_x2_g2_ParamLimits

0x256f,	// (0x000306ea) list_medium_line_x2_g2

0x0001,

0xfd3d,	// (0x0003deb8) list_medium_line_x2_g_ParamLimits

0xfd3d,	// (0x0003deb8) list_medium_line_x2_g

0xe535,	// (0x0003c6b0) list_medium_line_x2_t1_ParamLimits

0xe535,	// (0x0003c6b0) list_medium_line_x2_t1

0x2563,	// (0x000306de) list_medium_line_x3_g1_ParamLimits

0x2563,	// (0x000306de) list_medium_line_x3_g1

0x256f,	// (0x000306ea) list_medium_line_x3_g2_ParamLimits

0x256f,	// (0x000306ea) list_medium_line_x3_g2

0x0001,

0xfd3d,	// (0x0003deb8) list_medium_line_x3_g_ParamLimits

0xfd3d,	// (0x0003deb8) list_medium_line_x3_g

0xe535,	// (0x0003c6b0) list_medium_line_x3_t1_ParamLimits

0xe535,	// (0x0003c6b0) list_medium_line_x3_t1

0xe54b,	// (0x0003c6c6) thumb_sp_fs_scroll_pane_g1

0xe554,	// (0x0003c6cf) thumb_sp_fs_scroll_pane_g2

0xe55d,	// (0x0003c6d8) thumb_sp_fs_scroll_pane_g3

0x0002,

0xfd42,	// (0x0003debd) thumb_sp_fs_scroll_pane_g

0xe54b,	// (0x0003c6c6) bg_sp_fs_scroll_pane_g1

0xe554,	// (0x0003c6cf) bg_sp_fs_scroll_pane_g2

0xe55d,	// (0x0003c6d8) bg_sp_fs_scroll_pane_g3

0x0002,

0xfd42,	// (0x0003debd) bg_sp_fs_scroll_pane_g

0x2563,	// (0x000306de) list_medium_line_x2_t3_g4_g1_ParamLimits

0x2563,	// (0x000306de) list_medium_line_x2_t3_g4_g1

0x260b,	// (0x00030786) list_medium_line_x2_t3_g4_g2_ParamLimits

0x260b,	// (0x00030786) list_medium_line_x2_t3_g4_g2

0x256f,	// (0x000306ea) list_medium_line_x2_t3_g4_g3_ParamLimits

0x256f,	// (0x000306ea) list_medium_line_x2_t3_g4_g3

0x257b,	// (0x000306f6) list_medium_line_x2_t3_g4_g4_ParamLimits

0x257b,	// (0x000306f6) list_medium_line_x2_t3_g4_g4

0x0003,

0xf2c7,	// (0x0003d442) list_medium_line_x2_t3_g4_g_ParamLimits

0xf2c7,	// (0x0003d442) list_medium_line_x2_t3_g4_g

0x8829,	// (0x000369a4) list_medium_line_x2_t3_g4_t1_ParamLimits

0x8829,	// (0x000369a4) list_medium_line_x2_t3_g4_t1

0x8843,	// (0x000369be) list_medium_line_x2_t3_g4_t2_ParamLimits

0x8843,	// (0x000369be) list_medium_line_x2_t3_g4_t2

0x25b0,	// (0x0003072b) list_medium_line_x2_t3_g4_t3_ParamLimits

0x25b0,	// (0x0003072b) list_medium_line_x2_t3_g4_t3

0x0002,

0xfd49,	// (0x0003dec4) list_medium_line_x2_t3_g4_t_ParamLimits

0xfd49,	// (0x0003dec4) list_medium_line_x2_t3_g4_t

0x6e0b,	// (0x00034f86) list_medium_line_g2_g1_ParamLimits

0x6e0b,	// (0x00034f86) list_medium_line_g2_g1

0x6e17,	// (0x00034f92) list_medium_line_g2_g2_ParamLimits

0x6e17,	// (0x00034f92) list_medium_line_g2_g2

0x0001,

0xfa00,	// (0x0003db7b) list_medium_line_g2_g_ParamLimits

0xfa00,	// (0x0003db7b) list_medium_line_g2_g

0x885c,	// (0x000369d7) list_medium_line_g2_t1_ParamLimits

0x885c,	// (0x000369d7) list_medium_line_g2_t1

0x6e0b,	// (0x00034f86) list_medium_line_t3_g2_g1_ParamLimits

0x6e0b,	// (0x00034f86) list_medium_line_t3_g2_g1

0x6e17,	// (0x00034f92) list_medium_line_t3_g2_g2_ParamLimits

0x6e17,	// (0x00034f92) list_medium_line_t3_g2_g2

0x0001,

0xfa00,	// (0x0003db7b) list_medium_line_t3_g2_g_ParamLimits

0xfa00,	// (0x0003db7b) list_medium_line_t3_g2_g

0x8871,	// (0x000369ec) list_medium_line_t3_g2_t1_ParamLimits

0x8871,	// (0x000369ec) list_medium_line_t3_g2_t1

0x8888,	// (0x00036a03) list_medium_line_t3_g2_t2_ParamLimits

0x8888,	// (0x00036a03) list_medium_line_t3_g2_t2

0x889d,	// (0x00036a18) list_medium_line_t3_g2_t3_ParamLimits

0x889d,	// (0x00036a18) list_medium_line_t3_g2_t3

0x0002,

0xfd50,	// (0x0003decb) list_medium_line_t3_g2_t_ParamLimits

0xfd50,	// (0x0003decb) list_medium_line_t3_g2_t

0x846c,	// (0x000365e7) list_medium_line_right_icon_g1

0x88b6,	// (0x00036a31) list_medium_line_right_icon_t1

0x6e0b,	// (0x00034f86) list_medium_line_t2_g1_ParamLimits

0x6e0b,	// (0x00034f86) list_medium_line_t2_g1

0x88c4,	// (0x00036a3f) list_medium_line_t2_t1_ParamLimits

0x88c4,	// (0x00036a3f) list_medium_line_t2_t1

0x88de,	// (0x00036a59) list_medium_line_t2_t2_ParamLimits

0x88de,	// (0x00036a59) list_medium_line_t2_t2

0x0001,

0xfd57,	// (0x0003ded2) list_medium_line_t2_t_ParamLimits

0xfd57,	// (0x0003ded2) list_medium_line_t2_t

0x6e0b,	// (0x00034f86) list_medium_line_t3_g1_ParamLimits

0x6e0b,	// (0x00034f86) list_medium_line_t3_g1

0x88f7,	// (0x00036a72) list_medium_line_t3_t1_ParamLimits

0x88f7,	// (0x00036a72) list_medium_line_t3_t1

0x890e,	// (0x00036a89) list_medium_line_t3_t2_ParamLimits

0x890e,	// (0x00036a89) list_medium_line_t3_t2

0x8923,	// (0x00036a9e) list_medium_line_t3_t3_ParamLimits

0x8923,	// (0x00036a9e) list_medium_line_t3_t3

0x0002,

0xfd5c,	// (0x0003ded7) list_medium_line_t3_t_ParamLimits

0xfd5c,	// (0x0003ded7) list_medium_line_t3_t

0x6e0b,	// (0x00034f86) list_medium_line_g3_g1_ParamLimits

0x6e0b,	// (0x00034f86) list_medium_line_g3_g1

0x8935,	// (0x00036ab0) list_medium_line_g3_g2_ParamLimits

0x8935,	// (0x00036ab0) list_medium_line_g3_g2

0x6e17,	// (0x00034f92) list_medium_line_g3_g3_ParamLimits

0x6e17,	// (0x00034f92) list_medium_line_g3_g3

0x0002,

0xfd63,	// (0x0003dede) list_medium_line_g3_g_ParamLimits

0xfd63,	// (0x0003dede) list_medium_line_g3_g

0x8941,	// (0x00036abc) list_medium_line_g3_t1_ParamLimits

0x8941,	// (0x00036abc) list_medium_line_g3_t1

0x6e0b,	// (0x00034f86) list_medium_line_t2_g3_g1_ParamLimits

0x6e0b,	// (0x00034f86) list_medium_line_t2_g3_g1

0x8935,	// (0x00036ab0) list_medium_line_t2_g3_g2_ParamLimits

0x8935,	// (0x00036ab0) list_medium_line_t2_g3_g2

0x6e17,	// (0x00034f92) list_medium_line_t2_g3_g3_ParamLimits

0x6e17,	// (0x00034f92) list_medium_line_t2_g3_g3

0x0002,

0xfd63,	// (0x0003dede) list_medium_line_t2_g3_g_ParamLimits

0xfd63,	// (0x0003dede) list_medium_line_t2_g3_g

0x8956,	// (0x00036ad1) list_medium_line_t2_g3_t1_ParamLimits

0x8956,	// (0x00036ad1) list_medium_line_t2_g3_t1

0x896d,	// (0x00036ae8) list_medium_line_t2_g3_t2_ParamLimits

0x896d,	// (0x00036ae8) list_medium_line_t2_g3_t2

0x0001,

0xfd6a,	// (0x0003dee5) list_medium_line_t2_g3_t_ParamLimits

0xfd6a,	// (0x0003dee5) list_medium_line_t2_g3_t

0x6e0b,	// (0x00034f86) list_medium_line_t3_g3_g1_ParamLimits

0x6e0b,	// (0x00034f86) list_medium_line_t3_g3_g1

0x8935,	// (0x00036ab0) list_medium_line_t3_g3_g2_ParamLimits

0x8935,	// (0x00036ab0) list_medium_line_t3_g3_g2

0x6e17,	// (0x00034f92) list_medium_line_t3_g3_g3_ParamLimits

0x6e17,	// (0x00034f92) list_medium_line_t3_g3_g3

0x0002,

0xfd63,	// (0x0003dede) list_medium_line_t3_g3_g_ParamLimits

0xfd63,	// (0x0003dede) list_medium_line_t3_g3_g

0x8988,	// (0x00036b03) list_medium_line_t3_g3_t1_ParamLimits

0x8988,	// (0x00036b03) list_medium_line_t3_g3_t1

0x899c,	// (0x00036b17) list_medium_line_t3_g3_t2_ParamLimits

0x899c,	// (0x00036b17) list_medium_line_t3_g3_t2

0x89ae,	// (0x00036b29) list_medium_line_t3_g3_t3_ParamLimits

0x89ae,	// (0x00036b29) list_medium_line_t3_g3_t3

0x0002,

0xfd6f,	// (0x0003deea) list_medium_line_t3_g3_t_ParamLimits

0xfd6f,	// (0x0003deea) list_medium_line_t3_g3_t

0x85f6,	// (0x00036771) list_medium_line_right_iconx2_g1

0x846c,	// (0x000365e7) list_medium_line_right_iconx2_g2

0x0001,

0xfd76,	// (0x0003def1) list_medium_line_right_iconx2_g

0x89c2,	// (0x00036b3d) list_medium_line_right_iconx2_t1

0x85f6,	// (0x00036771) list_medium_line_t2_right_iconx2_g1

0x846c,	// (0x000365e7) list_medium_line_t2_right_iconx2_g2

0x0001,

0xfd76,	// (0x0003def1) list_medium_line_t2_right_iconx2_g

0x89d0,	// (0x00036b4b) list_medium_line_t2_right_iconx2_t1

0x89e0,	// (0x00036b5b) list_medium_line_t2_right_iconx2_t2

0x0001,

0xfd7b,	// (0x0003def6) list_medium_line_t2_right_iconx2_t

0x89f2,	// (0x00036b6d) list_medium_line_x4_t4_t1

0x8a00,	// (0x00036b7b) list_medium_line_x4_t4_t2

0x8a10,	// (0x00036b8b) list_medium_line_x4_t4_t3

0x8a20,	// (0x00036b9b) list_medium_line_x4_t4_t4

0x0003,

0xfd80,	// (0x0003defb) list_medium_line_x4_t4_t

0x8a73,	// (0x00036bee) tport_appsw_pane_ParamLimits

0x8a73,	// (0x00036bee) tport_appsw_pane

0x8a8b,	// (0x00036c06) tport_contact_pane_ParamLimits

0x8a8b,	// (0x00036c06) tport_contact_pane

0x8aa3,	// (0x00036c1e) tport_listscroll_pane_ParamLimits

0x8aa3,	// (0x00036c1e) tport_listscroll_pane

0x8abd,	// (0x00036c38) cell_tport_appsw_pane_ParamLimits

0x8abd,	// (0x00036c38) cell_tport_appsw_pane

0xd20c,	// (0x0003b387) tport_appsw_pane_g1_ParamLimits

0xd20c,	// (0x0003b387) tport_appsw_pane_g1

0xe566,	// (0x0003c6e1) tport_contact_pane_g1

0xddab,	// (0x0003bf26) tport_contact_pane_t1

0xe56f,	// (0x0003c6ea) tport_contact_pane_t2

0x0001,

0xfd89,	// (0x0003df04) tport_contact_pane_t

0xe57d,	// (0x0003c6f8) list_tport_pane

0xe586,	// (0x0003c701) scroll_pane_cp_030

0x8b05,	// (0x00036c80) cell_tport_appsw_pane_g1

0x8b15,	// (0x00036c90) cell_tport_appsw_pane_t1

0x8b23,	// (0x00036c9e) grid_highlight_pane_cp019

0x8b2b,	// (0x00036ca6) list_tport_double_graphic_pane_ParamLimits

0x8b2b,	// (0x00036ca6) list_tport_double_graphic_pane

0xa801,	// (0x0003897c) list_highlight_pane_cp023_ParamLimits

0xa801,	// (0x0003897c) list_highlight_pane_cp023

0x8b38,	// (0x00036cb3) list_tport_double_graphic_pane_g1_ParamLimits

0x8b38,	// (0x00036cb3) list_tport_double_graphic_pane_g1

0x8b45,	// (0x00036cc0) list_tport_double_graphic_pane_t1_ParamLimits

0x8b45,	// (0x00036cc0) list_tport_double_graphic_pane_t1

0x8b5a,	// (0x00036cd5) list_tport_double_graphic_pane_t2_ParamLimits

0x8b5a,	// (0x00036cd5) list_tport_double_graphic_pane_t2

0x0001,

0xfd95,	// (0x0003df10) list_tport_double_graphic_pane_t_ParamLimits

0xfd95,	// (0x0003df10) list_tport_double_graphic_pane_t

0x9b34,	// (0x00037caf) main_cale_note_pane

0x14db,	// (0x0002f656) cell_vitu2_function_top_wide_pane_cp01_ParamLimits

0x14db,	// (0x0002f656) cell_vitu2_function_top_wide_pane_cp01

0x7ffc,	// (0x00036177) wait_bar_pane_cp05_ParamLimits

0xa801,	// (0x0003897c) listscroll_cmail_pane

0xe58f,	// (0x0003c70a) list_cmail_pane

0x8b6c,	// (0x00036ce7) list_cmail_body_pane

0x8b81,	// (0x00036cfc) list_single_cmail_header_caption_pane

0x8b9a,	// (0x00036d15) list_single_cmail_header_detail_pane_ParamLimits

0x8b9a,	// (0x00036d15) list_single_cmail_header_detail_pane

0xe59f,	// (0x0003c71a) list_single_cmail_header_caption_pane_t1

0x8bce,	// (0x00036d49) list_single_cmail_header_detail_pane_g1_ParamLimits

0x8bce,	// (0x00036d49) list_single_cmail_header_detail_pane_g1

0xe5ad,	// (0x0003c728) list_single_cmail_header_detail_pane_g2_ParamLimits

0xe5ad,	// (0x0003c728) list_single_cmail_header_detail_pane_g2

0x0002,

0xfd9a,	// (0x0003df15) list_single_cmail_header_detail_pane_g_ParamLimits

0xfd9a,	// (0x0003df15) list_single_cmail_header_detail_pane_g

0x8be6,	// (0x00036d61) list_single_cmail_header_detail_pane_t1_ParamLimits

0x8be6,	// (0x00036d61) list_single_cmail_header_detail_pane_t1

0x8c24,	// (0x00036d9f) list_single_cmail_header_editor_pane_bg_ParamLimits

0x8c24,	// (0x00036d9f) list_single_cmail_header_editor_pane_bg

0xe5ea,	// (0x0003c765) list_cmail_body_pane_g1

0xe5f3,	// (0x0003c76e) list_cmail_body_pane_t1

0xd249,	// (0x0003b3c4) list_single_cmail_header_editor_pane_bg_g1

0xa6b0,	// (0x0003882b) list_single_cmail_header_editor_pane_bg_g1_copy1

0xd259,	// (0x0003b3d4) list_single_cmail_header_editor_pane_bg_g1_copy2

0xd251,	// (0x0003b3cc) list_single_cmail_header_editor_pane_bg_g1_copy3

0xd46d,	// (0x0003b5e8) list_single_cmail_header_editor_pane_bg_g1_copy4

0xd279,	// (0x0003b3f4) list_single_cmail_header_editor_pane_bg_g1_copy4_copy1

0xd269,	// (0x0003b3e4) list_single_cmail_header_editor_pane_bg_g1_copy4_copy2

0xd271,	// (0x0003b3ec) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3

0xa690,	// (0x0003880b) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3_copy1

0x8c3d,	// (0x00036db8) calenote_gesture_pane_ParamLimits

0x8c3d,	// (0x00036db8) calenote_gesture_pane

0x8c5d,	// (0x00036dd8) calenote_window_pane_ParamLimits

0x8c5d,	// (0x00036dd8) calenote_window_pane

0xe601,	// (0x0003c77c) popup_note_window_cp01

0x8c79,	// (0x00036df4) calenote_swipe_1_pane_ParamLimits

0x8c79,	// (0x00036df4) calenote_swipe_1_pane

0x8452,	// (0x000365cd) calenote_swipe_2_pane_ParamLimits

0x8452,	// (0x000365cd) calenote_swipe_2_pane

0xe299,	// (0x0003c414) calenote_swipe_1_pane_g1_ParamLimits

0xe299,	// (0x0003c414) calenote_swipe_1_pane_g1

0xe2a6,	// (0x0003c421) calenote_swipe_1_pane_g2_ParamLimits

0xe2a6,	// (0x0003c421) calenote_swipe_1_pane_g2

0x0001,

0xfcc3,	// (0x0003de3e) calenote_swipe_1_pane_g_ParamLimits

0xfcc3,	// (0x0003de3e) calenote_swipe_1_pane_g

0xe613,	// (0x0003c78e) calenote_swipe_1_pane_t1_ParamLimits

0xe613,	// (0x0003c78e) calenote_swipe_1_pane_t1

0xe299,	// (0x0003c414) calenote_swipe_2_pane_g1_ParamLimits

0xe299,	// (0x0003c414) calenote_swipe_2_pane_g1

0xe632,	// (0x0003c7ad) calenote_swipe_2_pane_g2_ParamLimits

0xe632,	// (0x0003c7ad) calenote_swipe_2_pane_g2

0x0001,

0xfda6,	// (0x0003df21) calenote_swipe_2_pane_g_ParamLimits

0xfda6,	// (0x0003df21) calenote_swipe_2_pane_g

0xe63e,	// (0x0003c7b9) calenote_swipe_2_pane_t1_ParamLimits

0xe63e,	// (0x0003c7b9) calenote_swipe_2_pane_t1

0x9b34,	// (0x00037caf) main_mup_navstr_pane

0x574c,	// (0x000338c7) main_mup3_pane_t7_ParamLimits

0x574c,	// (0x000338c7) main_mup3_pane_t7

0x6190,	// (0x0003430b) main_mp4_pane_g6_ParamLimits

0x6190,	// (0x0003430b) main_mp4_pane_g6

0x63d9,	// (0x00034554) main_image3_pane_t4_ParamLimits

0x63d9,	// (0x00034554) main_image3_pane_t4

0x8c8e,	// (0x00036e09) popup_navstr_preview_pane_ParamLimits

0x8c8e,	// (0x00036e09) popup_navstr_preview_pane

0x8ca2,	// (0x00036e1d) scroll_navstr_pane_ParamLimits

0x8ca2,	// (0x00036e1d) scroll_navstr_pane

0x9b34,	// (0x00037caf) bg_popup_preview_window_pane_cp04

0xe665,	// (0x0003c7e0) popup_navstr_preview_pane_t1

0x8cb6,	// (0x00036e31) scroll_navstr_pane_g1_ParamLimits

0x8cb6,	// (0x00036e31) scroll_navstr_pane_g1

0x8cca,	// (0x00036e45) scroll_navstr_pane_t1_ParamLimits

0x8cca,	// (0x00036e45) scroll_navstr_pane_t1

0xe60a,	// (0x0003c785) bg_button_pane_cp014

0xe60a,	// (0x0003c785) bg_button_pane_cp030

0x82f0,	// (0x0003646b) list_double_fisheye_pane_g4_ParamLimits

0x82f0,	// (0x0003646b) list_double_fisheye_pane_g4

0x82fc,	// (0x00036477) list_double_fisheye_pane_g5_ParamLimits

0x82fc,	// (0x00036477) list_double_fisheye_pane_g5

0xcec1,	// (0x0003b03c) sp_fs_scroll_pane_cp03

0xe3ce,	// (0x0003c549) main_sp_fs_ctrlbar_pane_g1_ParamLimits

0xe3da,	// (0x0003c555) main_sp_fs_ctrlbar_pane_g2_ParamLimits

0xfce0,	// (0x0003de5b) main_sp_fs_ctrlbar_pane_g_ParamLimits

0xe3e6,	// (0x0003c561) main_sp_fs_ctrlbar_pane_t1_ParamLimits

0xe597,	// (0x0003c712) sp_fs_scroll_pane_cp02

0xa3a6,	// (0x00038521) popup_sp_fs_calendar_preview_list_single_pane_ParamLimits

0xa3a6,	// (0x00038521) popup_sp_fs_calendar_preview_list_single_pane

0x9b34,	// (0x00037caf) main_cam6_pano_pane

0x18c1,	// (0x0002fa3c) main_mup3_pane_ParamLimits

0x9b34,	// (0x00037caf) main_phacti_pane

0x7ecf,	// (0x0003604a) bg_button_pane_cp11

0x7ee9,	// (0x00036064) main_mobtv_info_pane_g2_ParamLimits

0x7ee9,	// (0x00036064) main_mobtv_info_pane_g2

0x0001,

0xfc40,	// (0x0003ddbb) main_mobtv_info_pane_g_ParamLimits

0xfc40,	// (0x0003ddbb) main_mobtv_info_pane_g

0x80c6,	// (0x00036241) sc_clock_pane_t5_ParamLimits

0x80c6,	// (0x00036241) sc_clock_pane_t5

0x8158,	// (0x000362d3) main_radioblah_pane_g1_ParamLimits

0xe1e5,	// (0x0003c360) main_radioblah_pane_t3_ParamLimits

0xe1e5,	// (0x0003c360) main_radioblah_pane_t3

0xe1fd,	// (0x0003c378) main_radioblah_pane_t4_ParamLimits

0xe1fd,	// (0x0003c378) main_radioblah_pane_t4

0x8180,	// (0x000362fb) main_radioblah_text_pane_ParamLimits

0x8180,	// (0x000362fb) main_radioblah_text_pane

0x8192,	// (0x0003630d) main_radioblah_info_pane_g1_ParamLimits

0x822b,	// (0x000363a6) main_radioblah_info_pane_t4_ParamLimits

0x822b,	// (0x000363a6) main_radioblah_info_pane_t4

0xa801,	// (0x0003897c) main_sp_fs_calendar_pane

0x8ce0,	// (0x00036e5b) main_phacti_pane_g1

0x8ce8,	// (0x00036e63) phacti_note_pane_ParamLimits

0x8ce8,	// (0x00036e63) phacti_note_pane

0xe67c,	// (0x0003c7f7) phacti_term_pane_ParamLimits

0xe67c,	// (0x0003c7f7) phacti_term_pane

0xe691,	// (0x0003c80c) phacti_note_pane_t1_ParamLimits

0xe691,	// (0x0003c80c) phacti_note_pane_t1

0xe6a8,	// (0x0003c823) phacti_term_pane_g1

0xe6b0,	// (0x0003c82b) phacti_term_pane_t1_ParamLimits

0xe6b0,	// (0x0003c82b) phacti_term_pane_t1

0xe6da,	// (0x0003c855) popup_sp_fs_calendar_preview_list_single_pane_g1

0xe6e2,	// (0x0003c85d) popup_sp_fs_calendar_preview_list_single_pane_g2

0x0001,

0xfdb0,	// (0x0003df2b) popup_sp_fs_calendar_preview_list_single_pane_g

0xe6ea,	// (0x0003c865) popup_sp_fs_calendar_preview_list_single_pane_t1_ParamLimits

0xe6ea,	// (0x0003c865) popup_sp_fs_calendar_preview_list_single_pane_t1

0xe700,	// (0x0003c87b) aid_popup_sp_fs_bg_corner_pane

0xc751,	// (0x0003a8cc) popup_sp_fs_calendar_preview_bg_pane_g1

0x9b34,	// (0x00037caf) popup_sp_fs_calendar_preview_bg_pane

0x23ec,	// (0x00030567) popup_sp_fs_calendar_preview_list_pane

0xc347,	// (0x0003a4c2) bg_main_sp_fs_cale_pane_ParamLimits

0xc347,	// (0x0003a4c2) bg_main_sp_fs_cale_pane

0xe711,	// (0x0003c88c) listscroll_cale_mrui_pane_ParamLimits

0xe711,	// (0x0003c88c) listscroll_cale_mrui_pane

0xe726,	// (0x0003c8a1) listscroll_sp_fs_schedule_track_pane

0xe72f,	// (0x0003c8aa) main_sp_fs_ctrlbar_pane_cp01_ParamLimits

0xe72f,	// (0x0003c8aa) main_sp_fs_ctrlbar_pane_cp01

0xe742,	// (0x0003c8bd) main_sp_fs_ribbon_pane

0xe74a,	// (0x0003c8c5) popup_sp_fs_cale_preview_window

0x8d5d,	// (0x00036ed8) list_single_sp_fs_schedule_track_pane_ParamLimits

0x8d5d,	// (0x00036ed8) list_single_sp_fs_schedule_track_pane

0xa801,	// (0x0003897c) bg_sp_fs_highlight_list_pane_cp03_ParamLimits

0xa801,	// (0x0003897c) bg_sp_fs_highlight_list_pane_cp03

0x8d73,	// (0x00036eee) list_single_sp_fs_schedule_track_pane_g1_ParamLimits

0x8d73,	// (0x00036eee) list_single_sp_fs_schedule_track_pane_g1

0x8d7f,	// (0x00036efa) list_single_sp_fs_schedule_track_pane_g2_ParamLimits

0x8d7f,	// (0x00036efa) list_single_sp_fs_schedule_track_pane_g2

0x0001,

0xfdb5,	// (0x0003df30) list_single_sp_fs_schedule_track_pane_g_ParamLimits

0xfdb5,	// (0x0003df30) list_single_sp_fs_schedule_track_pane_g

0x8d8b,	// (0x00036f06) list_single_sp_fs_schedule_track_pane_t1_ParamLimits

0x8d8b,	// (0x00036f06) list_single_sp_fs_schedule_track_pane_t1

0x8da5,	// (0x00036f20) sp_fs_schedule_track_pane_ParamLimits

0x8da5,	// (0x00036f20) sp_fs_schedule_track_pane

0xe75c,	// (0x0003c8d7) sp_fs_schedule_track_pane_g1

0xe764,	// (0x0003c8df) sp_fs_schedule_track_pane_g2

0xe76c,	// (0x0003c8e7) sp_fs_schedule_track_pane_g3

0xe774,	// (0x0003c8ef) sp_fs_schedule_track_pane_g4

0xe77c,	// (0x0003c8f7) sp_fs_schedule_track_pane_g5

0x0004,

0xfdba,	// (0x0003df35) sp_fs_schedule_track_pane_g

0xd249,	// (0x0003b3c4) bg_sp_fs_schedule_viewer_highlight_g1

0xa6b0,	// (0x0003882b) bg_sp_fs_schedule_viewer_highlight_g2

0xd251,	// (0x0003b3cc) bg_sp_fs_schedule_viewer_highlight_g3

0xd259,	// (0x0003b3d4) bg_sp_fs_schedule_viewer_highlight_g4

0xd46d,	// (0x0003b5e8) bg_sp_fs_schedule_viewer_highlight_g5

0xd269,	// (0x0003b3e4) bg_sp_fs_schedule_viewer_highlight_g6

0xd271,	// (0x0003b3ec) bg_sp_fs_schedule_viewer_highlight_g7

0xd279,	// (0x0003b3f4) bg_sp_fs_schedule_viewer_highlight_g8

0xa690,	// (0x0003880b) bg_sp_fs_schedule_viewer_highlight_g9

0x0008,

0xfdc5,	// (0x0003df40) bg_sp_fs_schedule_viewer_highlight_g

0x9b34,	// (0x00037caf) bg_main_sp_fs_ribbon_pane

0x8db6,	// (0x00036f31) main_sp_fs_ribbon_pane_g1

0xe784,	// (0x0003c8ff) main_sp_fs_ribbon_pane_t1

0x8dbf,	// (0x00036f3a) main_sp_fs_ribbon_pane_t2

0xe793,	// (0x0003c90e) main_sp_fs_ribbon_pane_t3

0x0002,

0xfdd8,	// (0x0003df53) main_sp_fs_ribbon_pane_t

0xe7a2,	// (0x0003c91d) main_sp_fs_ribbon_scheduler_pane

0xe7aa,	// (0x0003c925) bg_main_sp_fs_ribbon_pane_g1

0xe7b3,	// (0x0003c92e) bg_main_sp_fs_ribbon_pane_g2

0xe7bc,	// (0x0003c937) bg_main_sp_fs_ribbon_pane_g3

0x0002,

0xfddf,	// (0x0003df5a) bg_main_sp_fs_ribbon_pane_g

0xe7c4,	// (0x0003c93f) main_sp_fs_ribbon_scheduler_pane_g1

0xe7cd,	// (0x0003c948) main_sp_fs_ribbon_scheduler_pane_g2

0xe7d6,	// (0x0003c951) main_sp_fs_ribbon_scheduler_pane_g3

0x0002,

0xfde6,	// (0x0003df61) main_sp_fs_ribbon_scheduler_pane_g

0xe7df,	// (0x0003c95a) list_cale_mrui_pane

0x8dce,	// (0x00036f49) sp_fs_scroll_pane_cp07_ParamLimits

0x8dce,	// (0x00036f49) sp_fs_scroll_pane_cp07

0x8dea,	// (0x00036f65) bg_sp_fs_schedule_viewer_highlight_ParamLimits

0x8dea,	// (0x00036f65) bg_sp_fs_schedule_viewer_highlight

0xe7ec,	// (0x0003c967) list_single_sp_fs_schedule_track_pane_cp01

0xe7f4,	// (0x0003c96f) list_sp_fs_schedule_track_pane

0xe7fc,	// (0x0003c977) sp_fs_scroll_pane_cp06_ParamLimits

0xe7fc,	// (0x0003c977) sp_fs_scroll_pane_cp06

0xc751,	// (0x0003a8cc) bgmain_sp_fs_calendar_pane_g1

0x8dfa,	// (0x00036f75) list_single_cale_mrui_pane_ParamLimits

0x8dfa,	// (0x00036f75) list_single_cale_mrui_pane

0xe80e,	// (0x0003c989) list_single_cale_mrui_row_pane_ParamLimits

0xe80e,	// (0x0003c989) list_single_cale_mrui_row_pane

0xe81b,	// (0x0003c996) list_single_cale_mrui_row_pane_g1_ParamLimits

0xe81b,	// (0x0003c996) list_single_cale_mrui_row_pane_g1

0xe860,	// (0x0003c9db) list_single_cale_mrui_row_pane_t1_ParamLimits

0xe860,	// (0x0003c9db) list_single_cale_mrui_row_pane_t1

0x8e1c,	// (0x00036f97) list_single_cale_mrui_row_pane_t2_ParamLimits

0x8e1c,	// (0x00036f97) list_single_cale_mrui_row_pane_t2

0xe872,	// (0x0003c9ed) list_single_cale_mrui_row_pane_t3_ParamLimits

0xe872,	// (0x0003c9ed) list_single_cale_mrui_row_pane_t3

0xe8b3,	// (0x0003ca2e) list_single_cale_mrui_row_pane_t4_ParamLimits

0xe8b3,	// (0x0003ca2e) list_single_cale_mrui_row_pane_t4

0x0003,

0xfdf4,	// (0x0003df6f) list_single_cale_mrui_row_pane_t_ParamLimits

0xfdf4,	// (0x0003df6f) list_single_cale_mrui_row_pane_t

0x8e84,	// (0x00036fff) list_single_cmail_header_editor_pane_bg_cp01_ParamLimits

0x8e84,	// (0x00036fff) list_single_cmail_header_editor_pane_bg_cp01

0x8eaa,	// (0x00037025) list_single_cmail_header_editor_pane_bg_cp02_ParamLimits

0x8eaa,	// (0x00037025) list_single_cmail_header_editor_pane_bg_cp02

0x8eca,	// (0x00037045) main_radioblah_text_pane_t1_ParamLimits

0x8eca,	// (0x00037045) main_radioblah_text_pane_t1

0xe8e2,	// (0x0003ca5d) cam6_indi_pane_cp01

0xe8ea,	// (0x0003ca65) cam6_mode_pane_cp01

0xe8f2,	// (0x0003ca6d) cam6_pano_pane

0xe8fb,	// (0x0003ca76) cam6_zoom_pane_cp01

0xe903,	// (0x0003ca7e) cam6_pano_image_pane

0xe90e,	// (0x0003ca89) cam6_pano_pane_g1

0xdf52,	// (0x0003c0cd) cam6_pano_pane_g2

0xe917,	// (0x0003ca92) cam6_pano_pane_g3

0xe920,	// (0x0003ca9b) cam6_pano_pane_g4

0xcd67,	// (0x0003aee2) cam6_pano_pane_g5

0xe929,	// (0x0003caa4) cam6_pano_pane_g6

0xe933,	// (0x0003caae) cam6_pano_pane_g7

0xe93b,	// (0x0003cab6) cam6_pano_pane_g8

0xe944,	// (0x0003cabf) cam6_pano_pane_g9

0x0008,

0xfdfd,	// (0x0003df78) cam6_pano_pane_g

0x9b34,	// (0x00037caf) main_browser_tag_pane

0xe65d,	// (0x0003c7d8) grid_navstr_albumart_pane

0xe94f,	// (0x0003caca) cell_navstr_albumart_pane_ParamLimits

0xe94f,	// (0x0003caca) cell_navstr_albumart_pane

0xb05e,	// (0x000391d9) cell_navstr_albumart_pane_g1

0xc158,	// (0x0003a2d3) cell_navstr_albumart_pane_g2

0xc168,	// (0x0003a2e3) cell_navstr_albumart_pane_g3

0xc160,	// (0x0003a2db) cell_navstr_albumart_pane_g4

0x0003,

0xfe10,	// (0x0003df8b) cell_navstr_albumart_pane_g

0x8ee5,	// (0x00037060) bt_list_pane_ParamLimits

0x8ee5,	// (0x00037060) bt_list_pane

0xe971,	// (0x0003caec) bt_list_pane_t1

0xe980,	// (0x0003cafb) bt_list_pane_t2

0x0001,

0xfe19,	// (0x0003df94) bt_list_pane_t

0x9b34,	// (0x00037caf) main_cale_prevew_pane

0x8efa,	// (0x00037075) popup_cale_preview_window_ParamLimits

0x8efa,	// (0x00037075) popup_cale_preview_window

0xa801,	// (0x0003897c) bg_popup_preview_window_pane_cp05_ParamLimits

0xa801,	// (0x0003897c) bg_popup_preview_window_pane_cp05

0xe98f,	// (0x0003cb0a) list_cale_preview_pane_ParamLimits

0xe98f,	// (0x0003cb0a) list_cale_preview_pane

0xe99b,	// (0x0003cb16) list_double_cale_preview_pane_ParamLimits

0xe99b,	// (0x0003cb16) list_double_cale_preview_pane

0xe9ad,	// (0x0003cb28) list_single_cale_preview_pane_ParamLimits

0xe9ad,	// (0x0003cb28) list_single_cale_preview_pane

0xe9c1,	// (0x0003cb3c) list_single_cale_preview_pane_g1

0xe9c9,	// (0x0003cb44) list_single_cale_preview_pane_t1_ParamLimits

0xe9c9,	// (0x0003cb44) list_single_cale_preview_pane_t1

0xe9de,	// (0x0003cb59) list_double_cale_preview_pane_g1

0xe9e6,	// (0x0003cb61) list_double_cale_preview_pane_t1_ParamLimits

0xe9e6,	// (0x0003cb61) list_double_cale_preview_pane_t1

0xe9fb,	// (0x0003cb76) list_double_cale_preview_pane_t2_ParamLimits

0xe9fb,	// (0x0003cb76) list_double_cale_preview_pane_t2

0x0001,

0xfe1e,	// (0x0003df99) list_double_cale_preview_pane_t_ParamLimits

0xfe1e,	// (0x0003df99) list_double_cale_preview_pane_t

0x9b34,	// (0x00037caf) main_ezdial_pane

0xa801,	// (0x0003897c) main_sp_fs_email_pane_ParamLimits

0x8496,	// (0x00036611) cmail_ddmenu_btn01_pane_ParamLimits

0x8496,	// (0x00036611) cmail_ddmenu_btn01_pane

0x84a9,	// (0x00036624) cmail_ddmenu_btn02_pane_ParamLimits

0x84a9,	// (0x00036624) cmail_ddmenu_btn02_pane

0x84cc,	// (0x00036647) cmail_ddmenu_btn03_pane_ParamLimits

0x84cc,	// (0x00036647) cmail_ddmenu_btn03_pane

0x84f2,	// (0x0003666d) main_sp_fs_ctrlbar_pane_ParamLimits

0x8516,	// (0x00036691) main_sp_fs_listscroll_pane_te_cp01_ParamLimits

0x8b6c,	// (0x00036ce7) list_cmail_body_pane_ParamLimits

0x8bc3,	// (0x00036d3e) bg_button_pane_cp12

0xe5b9,	// (0x0003c734) list_single_cmail_header_detail_pane_g3_ParamLimits

0xe5b9,	// (0x0003c734) list_single_cmail_header_detail_pane_g3

0xe5c6,	// (0x0003c741) list_single_cmail_header_detail_pane_t2_ParamLimits

0xe5c6,	// (0x0003c741) list_single_cmail_header_detail_pane_t2

0x0001,

0xfda1,	// (0x0003df1c) list_single_cmail_header_detail_pane_t_ParamLimits

0xfda1,	// (0x0003df1c) list_single_cmail_header_detail_pane_t

0xe6c5,	// (0x0003c840) phacti_term_pane_t2_ParamLimits

0xe6c5,	// (0x0003c840) phacti_term_pane_t2

0x0001,

0xfdab,	// (0x0003df26) phacti_term_pane_t_ParamLimits

0xfdab,	// (0x0003df26) phacti_term_pane_t

0xea13,	// (0x0003cb8e) aid_size_list_single_double

0x8f13,	// (0x0003708e) popup_ezdial_listscroll_window

0x8f2e,	// (0x000370a9) popup_number_entry_window_cp01

0xaeef,	// (0x0003906a) bg_popup_call_pane_cp09

0xea1f,	// (0x0003cb9a) ezdial_list_pane

0xea27,	// (0x0003cba2) scroll_pane_cp23

0xc347,	// (0x0003a4c2) bg_button_pane_cp028_ParamLimits

0xc347,	// (0x0003a4c2) bg_button_pane_cp028

0x8f3c,	// (0x000370b7) cmail_ddmenu_btn01_pane_g1_ParamLimits

0x8f3c,	// (0x000370b7) cmail_ddmenu_btn01_pane_g1

0x8f48,	// (0x000370c3) cmail_ddmenu_btn01_pane_g2_ParamLimits

0x8f48,	// (0x000370c3) cmail_ddmenu_btn01_pane_g2

0x0001,

0xfe23,	// (0x0003df9e) cmail_ddmenu_btn01_pane_g_ParamLimits

0xfe23,	// (0x0003df9e) cmail_ddmenu_btn01_pane_g

0xea2f,	// (0x0003cbaa) cmail_ddmenu_btn01_pane_t1_ParamLimits

0xea2f,	// (0x0003cbaa) cmail_ddmenu_btn01_pane_t1

0xc347,	// (0x0003a4c2) bg_button_pane_cp029_ParamLimits

0xc347,	// (0x0003a4c2) bg_button_pane_cp029

0x8f54,	// (0x000370cf) cmail_ddmenu_btn02_pane_g1_ParamLimits

0x8f54,	// (0x000370cf) cmail_ddmenu_btn02_pane_g1

0x8f6c,	// (0x000370e7) cmail_ddmenu_btn02_pane_t1_ParamLimits

0x8f6c,	// (0x000370e7) cmail_ddmenu_btn02_pane_t1

0xa801,	// (0x0003897c) bg_button_pane_cp031_ParamLimits

0xa801,	// (0x0003897c) bg_button_pane_cp031

0x8f54,	// (0x000370cf) cmail_ddmenu_btn03_pane_g1_ParamLimits

0x8f54,	// (0x000370cf) cmail_ddmenu_btn03_pane_g1

0x8f6c,	// (0x000370e7) cmail_ddmenu_btn03_pane_t1_ParamLimits

0x8f6c,	// (0x000370e7) cmail_ddmenu_btn03_pane_t1

0x6382,	// (0x000344fd) cell_dialer2_keypad_pane_t1_ParamLimits

0x639c,	// (0x00034517) cell_dialer2_keypad_pane_t1_copy1_ParamLimits

0x639c,	// (0x00034517) cell_dialer2_keypad_pane_t1_copy1

0x7d28,	// (0x00035ea3) ncimui_group_button_pane

0xa801,	// (0x0003897c) main_sp_fs_calendar_pane_ParamLimits

0x8b81,	// (0x00036cfc) list_single_cmail_header_caption_pane_ParamLimits

0xe708,	// (0x0003c883) aid_recal_txt_sm_pane

0x9b34,	// (0x00037caf) mian_recal_day_pane

0xe74a,	// (0x0003c8c5) popup_sp_fs_cale_preview_window_ParamLimits

0xea44,	// (0x0003cbbf) list_recal_day_pane

0xea86,	// (0x0003cc01) list_single_recal_day_pane_ParamLimits

0xea86,	// (0x0003cc01) list_single_recal_day_pane

0xea98,	// (0x0003cc13) list_single_recal_day_pane_g1_ParamLimits

0xea98,	// (0x0003cc13) list_single_recal_day_pane_g1

0xeaa4,	// (0x0003cc1f) list_single_recal_day_pane_g2_ParamLimits

0xeaa4,	// (0x0003cc1f) list_single_recal_day_pane_g2

0xeab4,	// (0x0003cc2f) list_single_recal_day_pane_g3_ParamLimits

0xeab4,	// (0x0003cc2f) list_single_recal_day_pane_g3

0x8f90,	// (0x0003710b) list_single_recal_day_pane_g4_ParamLimits

0x8f90,	// (0x0003710b) list_single_recal_day_pane_g4

0xeac0,	// (0x0003cc3b) list_single_recal_day_pane_g5_ParamLimits

0xeac0,	// (0x0003cc3b) list_single_recal_day_pane_g5

0xead0,	// (0x0003cc4b) list_single_recal_day_pane_g6_ParamLimits

0xead0,	// (0x0003cc4b) list_single_recal_day_pane_g6

0x0004,

0xfe32,	// (0x0003dfad) list_single_recal_day_pane_g_ParamLimits

0xfe32,	// (0x0003dfad) list_single_recal_day_pane_g

0xeae4,	// (0x0003cc5f) list_single_recal_day_pane_t1

0xeaf6,	// (0x0003cc71) list_single_recal_day_pane_t2

0x0001,

0xfe3d,	// (0x0003dfb8) list_single_recal_day_pane_t

0x8fb0,	// (0x0003712b) ncimui_query_button_pane_ParamLimits

0x8fb0,	// (0x0003712b) ncimui_query_button_pane

0x8fc0,	// (0x0003713b) ncimui_query_button_pane_t1_ParamLimits

0x8fc0,	// (0x0003713b) ncimui_query_button_pane_t1

0xeb08,	// (0x0003cc83) ncimui_query_button_pane_t2_ParamLimits

0xeb08,	// (0x0003cc83) ncimui_query_button_pane_t2

0x0001,

0xfe42,	// (0x0003dfbd) ncimui_query_button_pane_t_ParamLimits

0xfe42,	// (0x0003dfbd) ncimui_query_button_pane_t

0x8fd3,	// (0x0003714e) query_button_pane_ParamLimits

0x8fd3,	// (0x0003714e) query_button_pane

0x9b34,	// (0x00037caf) bg_button_pane_cp0028

0xeb1b,	// (0x0003cc96) query_button_pane_t1

0x05e8,	// (0x0002e763) main_tport_pane_ParamLimits

0x8a30,	// (0x00036bab) bg_popup_window_pane_cp01_ParamLimits

0x8a30,	// (0x00036bab) bg_popup_window_pane_cp01

0x8a4b,	// (0x00036bc6) heading_pane_cp08_ParamLimits

0x8a4b,	// (0x00036bc6) heading_pane_cp08

0x8a5e,	// (0x00036bd9) heading_pane_cp07_ParamLimits

0x8a5e,	// (0x00036bd9) heading_pane_cp07

0x8b05,	// (0x00036c80) cell_tport_appsw_pane_g2

0x0002,

0xfd8e,	// (0x0003df09) cell_tport_appsw_pane_g

0x4001,	// (0x0003217c) input_candi_list_open_g1

0xa897,	// (0x00038a12) list_cale_time_pane_g6_ParamLimits

0xa897,	// (0x00038a12) list_cale_time_pane_g6

0x5178,	// (0x000332f3) aid_size_touch_calib_1_ParamLimits

0x5178,	// (0x000332f3) aid_size_touch_calib_1

0x518a,	// (0x00033305) aid_size_touch_calib_2_ParamLimits

0x518a,	// (0x00033305) aid_size_touch_calib_2

0x51a2,	// (0x0003331d) aid_size_touch_calib_3_ParamLimits

0x51a2,	// (0x0003331d) aid_size_touch_calib_3

0x51c0,	// (0x0003333b) aid_size_touch_calib_4_ParamLimits

0x51c0,	// (0x0003333b) aid_size_touch_calib_4

0x51d8,	// (0x00033353) main_touch_calib_button_group_pane_ParamLimits

0x51d8,	// (0x00033353) main_touch_calib_button_group_pane

0x51f0,	// (0x0003336b) main_touch_calib_pane_g1_ParamLimits

0x5202,	// (0x0003337d) main_touch_calib_pane_g2_ParamLimits

0x5214,	// (0x0003338f) main_touch_calib_pane_g3_ParamLimits

0x5226,	// (0x000333a1) main_touch_calib_pane_g4_ParamLimits

0xf756,	// (0x0003d8d1) main_touch_calib_pane_g_ParamLimits

0x5238,	// (0x000333b3) main_touch_calib_pane_t1_ParamLimits

0x5252,	// (0x000333cd) main_touch_calib_pane_t2_ParamLimits

0x526c,	// (0x000333e7) main_touch_calib_pane_t3_ParamLimits

0x5280,	// (0x000333fb) main_touch_calib_pane_t4_ParamLimits

0x5294,	// (0x0003340f) main_touch_calib_pane_t5_ParamLimits

0xf75f,	// (0x0003d8da) main_touch_calib_pane_t_ParamLimits

0xcb25,	// (0x0003aca0) list_single_fp_cale_pane_g3_ParamLimits

0xcb25,	// (0x0003aca0) list_single_fp_cale_pane_g3

0x18c1,	// (0x0002fa3c) bg_button_pane_cp012_ParamLimits

0x18c1,	// (0x0002fa3c) bg_vkb2_func_pane_cp03_ParamLimits

0x16ee,	// (0x0002f869) cell_vitu2_function_top_pane_g1_ParamLimits

0x18c1,	// (0x0002fa3c) bg_vkb2_func_pane_cp04_ParamLimits

0x7cb6,	// (0x00035e31) main_ncimui_button_group_pane_ParamLimits

0x7cb6,	// (0x00035e31) main_ncimui_button_group_pane

0x7d16,	// (0x00035e91) main_ncimui_pane_t3_ParamLimits

0x7d16,	// (0x00035e91) main_ncimui_pane_t3

0xe673,	// (0x0003c7ee) phacti_button_group_pane

0xea13,	// (0x0003cb8e) aid_size_list_single_double_ParamLimits

0x8f13,	// (0x0003708e) popup_ezdial_listscroll_window_ParamLimits

0x8f2e,	// (0x000370a9) popup_number_entry_window_cp01_ParamLimits

0x8fe6,	// (0x00037161) phacti_button_pane_ParamLimits

0x8fe6,	// (0x00037161) phacti_button_pane

0x9b34,	// (0x00037caf) bg_button_pane_cp14

0xeb29,	// (0x0003cca4) phacti_button_pane_t1

0x8ff7,	// (0x00037172) main_touch_calib_button_pane_ParamLimits

0x8ff7,	// (0x00037172) main_touch_calib_button_pane

0xa290,	// (0x0003840b) bg_button_pane_cp18_ParamLimits

0xa290,	// (0x0003840b) bg_button_pane_cp18

0xeb37,	// (0x0003ccb2) main_touch_calib_button_pane_t1_ParamLimits

0xeb37,	// (0x0003ccb2) main_touch_calib_button_pane_t1

0xeb4d,	// (0x0003ccc8) main_touch_calib_button_pane_t2_ParamLimits

0xeb4d,	// (0x0003ccc8) main_touch_calib_button_pane_t2

0x0001,

0xfe47,	// (0x0003dfc2) main_touch_calib_button_pane_t_ParamLimits

0xfe47,	// (0x0003dfc2) main_touch_calib_button_pane_t

0x9b34,	// (0x00037caf) cell_ncimui_button_pane

0x9b34,	// (0x00037caf) bg_button_pane_cp032

0xeb6b,	// (0x0003cce6) cell_ncimui_button_pane_t1

0x63b9,	// (0x00034534) image3_infobar_pane_ParamLimits

0x63b9,	// (0x00034534) image3_infobar_pane

0x80f2,	// (0x0003626d) fs_bigclock_status_pane_ParamLimits

0x80f2,	// (0x0003626d) fs_bigclock_status_pane

0x80ff,	// (0x0003627a) main_fs_bigclock_clock_pane_ParamLimits

0x80ff,	// (0x0003627a) main_fs_bigclock_clock_pane

0x811b,	// (0x00036296) main_fs_bigclock_indi_pane_ParamLimits

0x811b,	// (0x00036296) main_fs_bigclock_indi_pane

0x8134,	// (0x000362af) main_fs_bigclock_swipe_pane_ParamLimits

0x8134,	// (0x000362af) main_fs_bigclock_swipe_pane

0x9b34,	// (0x00037caf) main_fs_clock_dumped_data

0xe05f,	// (0x0003c1da) list_single_fs_bigclock_indicator_pane_g1_ParamLimits

0xe05f,	// (0x0003c1da) list_single_fs_bigclock_indicator_pane_g1

0xe07a,	// (0x0003c1f5) list_single_fs_bigclock_indicator_pane_g2_ParamLimits

0xe07a,	// (0x0003c1f5) list_single_fs_bigclock_indicator_pane_g2

0xe094,	// (0x0003c20f) list_single_fs_bigclock_indicator_pane_g3_ParamLimits

0xe094,	// (0x0003c20f) list_single_fs_bigclock_indicator_pane_g3

0xe0ae,	// (0x0003c229) list_single_fs_bigclock_indicator_pane_g4_ParamLimits

0xe0ae,	// (0x0003c229) list_single_fs_bigclock_indicator_pane_g4

0x0004,

0xfc74,	// (0x0003ddef) list_single_fs_bigclock_indicator_pane_g_ParamLimits

0xfc74,	// (0x0003ddef) list_single_fs_bigclock_indicator_pane_g

0xe0d7,	// (0x0003c252) list_single_fs_bigclock_indicator_pane_t1_ParamLimits

0xe0d7,	// (0x0003c252) list_single_fs_bigclock_indicator_pane_t1

0xe0ff,	// (0x0003c27a) list_single_fs_bigclock_indicator_pane_t2_ParamLimits

0xe0ff,	// (0x0003c27a) list_single_fs_bigclock_indicator_pane_t2

0xe127,	// (0x0003c2a2) list_single_fs_bigclock_indicator_pane_t3_ParamLimits

0xe127,	// (0x0003c2a2) list_single_fs_bigclock_indicator_pane_t3

0xe14f,	// (0x0003c2ca) list_single_fs_bigclock_indicator_pane_t4_ParamLimits

0xe14f,	// (0x0003c2ca) list_single_fs_bigclock_indicator_pane_t4

0x0004,

0xfc7f,	// (0x0003ddfa) list_single_fs_bigclock_indicator_pane_t_ParamLimits

0xfc7f,	// (0x0003ddfa) list_single_fs_bigclock_indicator_pane_t

0xeb79,	// (0x0003ccf4) image3_infobar_fav_pane_ParamLimits

0xeb79,	// (0x0003ccf4) image3_infobar_fav_pane

0xeb89,	// (0x0003cd04) image3_infobar_loc_pane_ParamLimits

0xeb89,	// (0x0003cd04) image3_infobar_loc_pane

0xeb9d,	// (0x0003cd18) image3_infobar_time_pane_ParamLimits

0xeb9d,	// (0x0003cd18) image3_infobar_time_pane

0xc751,	// (0x0003a8cc) image3_infobar_time_pane_g1

0xebad,	// (0x0003cd28) image3_infobar_time_pane_t1

0xc751,	// (0x0003a8cc) image3_infobar_loc_pane_g1

0xebbb,	// (0x0003cd36) image3_infobar_loc_pane_g2

0x0001,

0xfe4c,	// (0x0003dfc7) image3_infobar_loc_pane_g

0xebc3,	// (0x0003cd3e) image3_infobar_loc_pane_t1

0xc751,	// (0x0003a8cc) image3_infobar_fav_pane_g1

0xebd1,	// (0x0003cd4c) image3_infobar_fav_pane_g2

0x0001,

0xfe51,	// (0x0003dfcc) image3_infobar_fav_pane_g

0xebd9,	// (0x0003cd54) fs_bigclock_status_battery_pane

0xebe2,	// (0x0003cd5d) fs_bigclock_status_signal_pane

0xebeb,	// (0x0003cd66) fs_bigclock_status_title_pane

0xebf4,	// (0x0003cd6f) fs_bigclock_status_signal_pane_g1

0xebfd,	// (0x0003cd78) fs_bigclock_status_signal_pane_g2

0x0001,

0xfe56,	// (0x0003dfd1) fs_bigclock_status_signal_pane_g

0xec05,	// (0x0003cd80) fs_bigclock_status_battery_pane_g1

0xec0e,	// (0x0003cd89) fs_bigclock_status_battery_pane_g2

0x0001,

0xfe5b,	// (0x0003dfd6) fs_bigclock_status_battery_pane_g

0xec16,	// (0x0003cd91) fs_bigclock_status_title_pane_t1

0xc751,	// (0x0003a8cc) main_fs_bigclock_clock_pane_g1

0x900c,	// (0x00037187) main_fs_bigclock_clock_pane_g2

0x900c,	// (0x00037187) main_fs_bigclock_clock_pane_g3

0x900c,	// (0x00037187) main_fs_bigclock_clock_pane_g4

0x0003,

0xfe60,	// (0x0003dfdb) main_fs_bigclock_clock_pane_g

0x9014,	// (0x0003718f) main_fs_bigclock_clock_pane_t1

0x9022,	// (0x0003719d) main_fs_bigclock_clock_pane_t2

0x0001,

0xfe69,	// (0x0003dfe4) main_fs_bigclock_clock_pane_t

0xec24,	// (0x0003cd9f) list_single_fs_bigclock_indicator_pane_ParamLimits

0xec24,	// (0x0003cd9f) list_single_fs_bigclock_indicator_pane

0x9031,	// (0x000371ac) list_single_fs_bigclock_pane_ParamLimits

0x9031,	// (0x000371ac) list_single_fs_bigclock_pane

0xec3e,	// (0x0003cdb9) main_fs_bigclock_indicator_pane_t1

0xec4d,	// (0x0003cdc8) list_single_fs_bigclock_pane_g1

0xec55,	// (0x0003cdd0) list_single_fs_bigclock_pane_t1

0xc751,	// (0x0003a8cc) main_fs_bigclock_swipe_pane_g1

0xec98,	// (0x0003ce13) main_fs_bigclock_swipe_pane_g2

0x0001,

0xfe7a,	// (0x0003dff5) main_fs_bigclock_swipe_pane_g

0xeca0,	// (0x0003ce1b) main_fs_bigclock_swipe_pane_t1_ParamLimits

0xeca0,	// (0x0003ce1b) main_fs_bigclock_swipe_pane_t1

0x3897,	// (0x00031a12) call_type_pane_ParamLimits

0x9b34,	// (0x00037caf) main_btmg_pane

0xe847,	// (0x0003c9c2) list_single_cale_mrui_row_pane_g2_ParamLimits

0xe847,	// (0x0003c9c2) list_single_cale_mrui_row_pane_g2

0x0002,

0xfded,	// (0x0003df68) list_single_cale_mrui_row_pane_g_ParamLimits

0xfded,	// (0x0003df68) list_single_cale_mrui_row_pane_g

0xea6d,	// (0x0003cbe8) list_recal_vselct_arw_lo_pane

0xea75,	// (0x0003cbf0) list_recal_vselct_arw_up_pane

0xea7d,	// (0x0003cbf8) list_recal_vselct_pane

0x9094,	// (0x0003720f) btmg_button_pane

0x909e,	// (0x00037219) main_btmg_pane_g1

0x9b34,	// (0x00037caf) bg_button_pane_cp044

0xecbd,	// (0x0003ce38) btmg_button_pane_t1

0xc333,	// (0x0003a4ae) aid_listscroll_gen

0xa801,	// (0x0003897c) main_cntbar_detail_pane

0xe58f,	// (0x0003c70a) list_cmail_folder_pane

0xcec1,	// (0x0003b03c) sp_fs_scroll_pane_cp03_ParamLimits

0x8b81,	// (0x00036cfc) list_single_fs_dyc_pane_cp01_ParamLimits

0x8b81,	// (0x00036cfc) list_single_fs_dyc_pane_cp01

0xeccb,	// (0x0003ce46) aid_size_cmail_indent

0xecd4,	// (0x0003ce4f) list_single_dyc_row_pane_cp01

0x90d4,	// (0x0003724f) cntbar_detail_list_pane_ParamLimits

0x90d4,	// (0x0003724f) cntbar_detail_list_pane

0x9120,	// (0x0003729b) main_cntbar_detail_cont_pane_ParamLimits

0x9120,	// (0x0003729b) main_cntbar_detail_cont_pane

0xcec1,	// (0x0003b03c) scroll_pane_cp032_ParamLimits

0xcec1,	// (0x0003b03c) scroll_pane_cp032

0x9134,	// (0x000372af) cntbar_detail_list_event_pane_ParamLimits

0x9134,	// (0x000372af) cntbar_detail_list_event_pane

0x90e4,	// (0x0003725f) cntbar_detail_list_shct_pane

0xa6fe,	// (0x00038879) aid_list_gen

0xecdd,	// (0x0003ce58) aid_scroll

0xece6,	// (0x0003ce61) aid_size_touch_scroll_bar

0x7487,	// (0x00035602) aid_list_double

0xecef,	// (0x0003ce6a) aid_list_single

0x7487,	// (0x00035602) aid_list_single_lg

0xecf8,	// (0x0003ce73) aid_list_z_g_a_sm

0xed00,	// (0x0003ce7b) aid_list_z_g_d

0xed08,	// (0x0003ce83) aid_txt_z_prm

0x9144,	// (0x000372bf) aid_txt_z_prm_cp01

0x9152,	// (0x000372cd) aid_txt_z_sec

0x9160,	// (0x000372db) main_cntbar_detail_cont_pane_g1_ParamLimits

0x9160,	// (0x000372db) main_cntbar_detail_cont_pane_g1

0x9174,	// (0x000372ef) main_cntbar_detail_cont_pane_g2_ParamLimits

0x9174,	// (0x000372ef) main_cntbar_detail_cont_pane_g2

0x0001,

0xfe7f,	// (0x0003dffa) main_cntbar_detail_cont_pane_g_ParamLimits

0xfe7f,	// (0x0003dffa) main_cntbar_detail_cont_pane_g

0xed16,	// (0x0003ce91) main_cntbar_detail_cont_pane_t1

0xed24,	// (0x0003ce9f) main_cntbar_detail_cont_pane_t2

0xed32,	// (0x0003cead) main_cntbar_detail_cont_pane_t3

0x0002,

0xfe84,	// (0x0003dfff) main_cntbar_detail_cont_pane_t

0x9184,	// (0x000372ff) cell_cntbar_detail_list_shct_pane_ParamLimits

0x9184,	// (0x000372ff) cell_cntbar_detail_list_shct_pane

0xed40,	// (0x0003cebb) cntbar_detail_list_shct_pane_g1

0xed49,	// (0x0003cec4) cntbar_detail_list_shct_pane_g2

0x0001,

0xfe8b,	// (0x0003e006) cntbar_detail_list_shct_pane_g

0x9198,	// (0x00037313) cntbar_detail_list_event_pane_g1_ParamLimits

0x9198,	// (0x00037313) cntbar_detail_list_event_pane_g1

0x91a4,	// (0x0003731f) cntbar_detail_list_event_pane_g2_ParamLimits

0x91a4,	// (0x0003731f) cntbar_detail_list_event_pane_g2

0x0005,

0xfe90,	// (0x0003e00b) cntbar_detail_list_event_pane_g_ParamLimits

0xfe90,	// (0x0003e00b) cntbar_detail_list_event_pane_g

0x9210,	// (0x0003738b) cntbar_detail_list_event_pane_t1_ParamLimits

0x9210,	// (0x0003738b) cntbar_detail_list_event_pane_t1

0x9225,	// (0x000373a0) cntbar_detail_list_event_pane_t2_ParamLimits

0x9225,	// (0x000373a0) cntbar_detail_list_event_pane_t2

0x0002,

0xfe9d,	// (0x0003e018) cntbar_detail_list_event_pane_t_ParamLimits

0xfe9d,	// (0x0003e018) cntbar_detail_list_event_pane_t

0xc751,	// (0x0003a8cc) cell_cntbar_detail_list_shct_pane_g1

0xaea7,	// (0x00039022) navi_pane_mv_g3

0xa801,	// (0x0003897c) main_cntbar_detail_pane_ParamLimits

0x9b34,	// (0x00037caf) main_notif_wgt_pane

0x612a,	// (0x000342a5) aid_tch_main_mp4_pane_g4

0x630c,	// (0x00034487) popup_slider_window_cp02

0xea63,	// (0x0003cbde) list_recal_day_event_pane

0x90a8,	// (0x00037223) cntbar_detail_btn_pane_ParamLimits

0x90a8,	// (0x00037223) cntbar_detail_btn_pane

0x90be,	// (0x00037239) cntbar_detail_btn_pane_cp01_ParamLimits

0x90be,	// (0x00037239) cntbar_detail_btn_pane_cp01

0x90e4,	// (0x0003725f) cntbar_detail_list_shct_pane_ParamLimits

0x90f4,	// (0x0003726f) cntbar_detail_pane_g1_ParamLimits

0x90f4,	// (0x0003726f) cntbar_detail_pane_g1

0x9104,	// (0x0003727f) cntbar_detail_pane_t1_ParamLimits

0x9104,	// (0x0003727f) cntbar_detail_pane_t1

0x91b0,	// (0x0003732b) cntbar_detail_list_event_pane_g3_ParamLimits

0x91b0,	// (0x0003732b) cntbar_detail_list_event_pane_g3

0x91c8,	// (0x00037343) cntbar_detail_list_event_pane_g4_ParamLimits

0x91c8,	// (0x00037343) cntbar_detail_list_event_pane_g4

0x91e0,	// (0x0003735b) cntbar_detail_list_event_pane_g5_ParamLimits

0x91e0,	// (0x0003735b) cntbar_detail_list_event_pane_g5

0x91f8,	// (0x00037373) cntbar_detail_list_event_pane_g6_ParamLimits

0x91f8,	// (0x00037373) cntbar_detail_list_event_pane_g6

0x923a,	// (0x000373b5) cntbar_detail_list_event_pane_t3_ParamLimits

0x923a,	// (0x000373b5) cntbar_detail_list_event_pane_t3

0x924c,	// (0x000373c7) popup_notif_wgt_window_ParamLimits

0x924c,	// (0x000373c7) popup_notif_wgt_window

0x9265,	// (0x000373e0) popup_submenu_window_cp01_ParamLimits

0x9265,	// (0x000373e0) popup_submenu_window_cp01

0xaeef,	// (0x0003906a) bg_popup_window_pane_cp10

0xed52,	// (0x0003cecd) listscroll_notif_wgt_pane

0xed63,	// (0x0003cede) list_notif_wgt_window

0xed6c,	// (0x0003cee7) scroll_pane_cp033

0x9277,	// (0x000373f2) list_notif_wgt_row_pane_ParamLimits

0x9277,	// (0x000373f2) list_notif_wgt_row_pane

0xed75,	// (0x0003cef0) aid_size_list_notif_wgt_del

0xed82,	// (0x0003cefd) list_notif_wgt_row_pane_g1

0xed8e,	// (0x0003cf09) list_notif_wgt_row_pane_g2

0xed9a,	// (0x0003cf15) list_notif_wgt_row_pane_g3

0x0002,

0xfea4,	// (0x0003e01f) list_notif_wgt_row_pane_g

0xeda7,	// (0x0003cf22) list_notif_wgt_row_pane_t1

0xedbc,	// (0x0003cf37) list_notif_wgt_row_pane_t2

0xedce,	// (0x0003cf49) list_notif_wgt_row_pane_t3

0x0002,

0xfeab,	// (0x0003e026) list_notif_wgt_row_pane_t

0xd487,	// (0x0003b602) list_recal_day_event_pane_g1

0xede0,	// (0x0003cf5b) list_recal_day_event_pane_t1

0x9b34,	// (0x00037caf) bg_button_pane_cp045

0xedef,	// (0x0003cf6a) cntbar_detail_btn_pane_t1

0xc347,	// (0x0003a4c2) main_callh_pane_ParamLimits

0xc347,	// (0x0003a4c2) main_callh_pane

0x9b34,	// (0x00037caf) main_coverflow0_pane

0x9b34,	// (0x00037caf) main_wgtman_pane

0x8142,	// (0x000362bd) main_fs_bigclock_unlock_btn_pane_ParamLimits

0x8142,	// (0x000362bd) main_fs_bigclock_unlock_btn_pane

0x8afd,	// (0x00036c78) bg_button_pane_cp16

0x8b0d,	// (0x00036c88) cell_tport_appsw_pane_g3

0x9287,	// (0x00037402) cf0_flow_pane_ParamLimits

0x9287,	// (0x00037402) cf0_flow_pane

0xedfd,	// (0x0003cf78) listscroll_cf0_pane

0xee08,	// (0x0003cf83) main_cf0_pane_g1

0x929c,	// (0x00037417) main_cf0_pane_t1_ParamLimits

0x929c,	// (0x00037417) main_cf0_pane_t1

0x92b3,	// (0x0003742e) main_cf0_pane_t2_ParamLimits

0x92b3,	// (0x0003742e) main_cf0_pane_t2

0x0001,

0xfeb7,	// (0x0003e032) main_cf0_pane_t_ParamLimits

0xfeb7,	// (0x0003e032) main_cf0_pane_t

0xee1a,	// (0x0003cf95) scroll_pane_cp11

0x92ca,	// (0x00037445) cf0_flow_pane_g1

0x92d2,	// (0x0003744d) cf0_flow_pane_g2

0x0001,

0xfebc,	// (0x0003e037) cf0_flow_pane_g

0x92da,	// (0x00037455) cf0_flow_pane_t1

0x9b34,	// (0x00037caf) main_call6_pane

0x9b34,	// (0x00037caf) main_calllock_pane

0x92e8,	// (0x00037463) call6_btn_grp_pane_ParamLimits

0x92e8,	// (0x00037463) call6_btn_grp_pane

0x9302,	// (0x0003747d) call6_pane_g1_ParamLimits

0x9302,	// (0x0003747d) call6_pane_g1

0x9317,	// (0x00037492) popup_call6_1st_window_ParamLimits

0x9317,	// (0x00037492) popup_call6_1st_window

0x9328,	// (0x000374a3) popup_call6_2nd_window_ParamLimits

0x9328,	// (0x000374a3) popup_call6_2nd_window

0x9339,	// (0x000374b4) cell_call6_btn_pane_ParamLimits

0x9339,	// (0x000374b4) cell_call6_btn_pane

0xaeef,	// (0x0003906a) bg_popup_call2_in_pane_cp03

0xee25,	// (0x0003cfa0) popup_call6_1st_window_g1

0xee2d,	// (0x0003cfa8) popup_call6_1st_window_g2

0xee35,	// (0x0003cfb0) popup_call6_1st_window_g3

0x0002,

0xfec1,	// (0x0003e03c) popup_call6_1st_window_g

0xee3d,	// (0x0003cfb8) popup_call6_1st_window_t1

0xee4c,	// (0x0003cfc7) popup_call6_1st_window_t2

0xee5c,	// (0x0003cfd7) popup_call6_1st_window_t3

0x0002,

0xfec8,	// (0x0003e043) popup_call6_1st_window_t

0xaeef,	// (0x0003906a) bg_popup_call2_in_pane_cp04

0xee25,	// (0x0003cfa0) popup_call6_2nd_window_g1

0xee2d,	// (0x0003cfa8) popup_call6_2nd_window_g2

0xee35,	// (0x0003cfb0) popup_call6_2nd_window_g3

0x0002,

0xfec1,	// (0x0003e03c) popup_call6_2nd_window_g

0xee3d,	// (0x0003cfb8) popup_call6_2nd_window_t1

0x9b34,	// (0x00037caf) bg_button_pane_cp15

0xee6c,	// (0x0003cfe7) cell_call6_btn_pane_g1

0xee75,	// (0x0003cff0) cell_call6_btn_pane_t1

0x934d,	// (0x000374c8) listscroll_wgtman_pane_ParamLimits

0x934d,	// (0x000374c8) listscroll_wgtman_pane

0x936e,	// (0x000374e9) wgtman_btn_pane_ParamLimits

0x936e,	// (0x000374e9) wgtman_btn_pane

0xacac,	// (0x00038e27) aid_scroll_copy1

0xee84,	// (0x0003cfff) list_wgtman_pane

0x93b1,	// (0x0003752c) wgtman_btn_pane_g1_ParamLimits

0x93b1,	// (0x0003752c) wgtman_btn_pane_g1

0x93dd,	// (0x00037558) wgtman_btn_pane_t1_ParamLimits

0x93dd,	// (0x00037558) wgtman_btn_pane_t1

0xee8e,	// (0x0003d009) wgtman_btn_pane_t2_ParamLimits

0xee8e,	// (0x0003d009) wgtman_btn_pane_t2

0x0001,

0xfecf,	// (0x0003e04a) wgtman_btn_pane_t_ParamLimits

0xfecf,	// (0x0003e04a) wgtman_btn_pane_t

0x941a,	// (0x00037595) listrow_wgtman_pane_ParamLimits

0x941a,	// (0x00037595) listrow_wgtman_pane

0x942d,	// (0x000375a8) listrow_wgtman_pane_g1

0x943a,	// (0x000375b5) listrow_wgtman_pane_g2

0x0001,

0xfed4,	// (0x0003e04f) listrow_wgtman_pane_g

0x9458,	// (0x000375d3) listrow_wgtman_pane_t1

0x9470,	// (0x000375eb) listrow_wgtman_pane_t2

0x0001,

0xfed9,	// (0x0003e054) listrow_wgtman_pane_t

0x9496,	// (0x00037611) wait_bar_pane_cp09

0xeea5,	// (0x0003d020) main_calllock_btn_pane

0xeeaf,	// (0x0003d02a) main_calllock_pane_g1

0x9b34,	// (0x00037caf) bg_button_pane_cp17

0xeeba,	// (0x0003d035) main_calllock_btn_pane_g1

0xeec3,	// (0x0003d03e) main_calllock_btn_pane_t1

0x9b34,	// (0x00037caf) main_dialer3_pane

0x9b34,	// (0x00037caf) main_fmrd2_pane

0xc751,	// (0x0003a8cc) main_fs_bigclock_unlock_btn_pane_g1

0xeeda,	// (0x0003d055) main_fs_bigclock_unlock_btn_pane_t1

0x94a8,	// (0x00037623) area_fmrd2_info_pane_ParamLimits

0x94a8,	// (0x00037623) area_fmrd2_info_pane

0x94b9,	// (0x00037634) area_fmrd2_visual_pane_ParamLimits

0x94b9,	// (0x00037634) area_fmrd2_visual_pane

0x94c7,	// (0x00037642) fmrd2_indi_pane_ParamLimits

0x94c7,	// (0x00037642) fmrd2_indi_pane

0x94d4,	// (0x0003764f) area_fmrd2_visual_pane_g1

0x94dc,	// (0x00037657) area_fmrd2_visual_pane_t1

0x94ec,	// (0x00037667) area_fmrd2_visual_pane_t2

0x94fc,	// (0x00037677) area_fmrd2_visual_pane_t3

0x0002,

0xfede,	// (0x0003e059) area_fmrd2_visual_pane_t

0x950c,	// (0x00037687) area_fmrd2_info_pane_g1

0x9514,	// (0x0003768f) area_fmrd2_info_pane_t1

0x9524,	// (0x0003769f) area_fmrd2_info_pane_t2

0x9534,	// (0x000376af) area_fmrd2_info_pane_t3

0x9544,	// (0x000376bf) area_fmrd2_info_pane_t4

0x0003,

0xfee5,	// (0x0003e060) area_fmrd2_info_pane_t

0x9552,	// (0x000376cd) fmrd2_indi_pane_t1

0x9562,	// (0x000376dd) fmrd2_indi_pane_t2

0x9572,	// (0x000376ed) fmrd2_indi_pane_t3

0x0002,

0xfeee,	// (0x0003e069) fmrd2_indi_pane_t

0xe0bd,	// (0x0003c238) list_single_fs_bigclock_indicator_pane_g5_ParamLimits

0xe0bd,	// (0x0003c238) list_single_fs_bigclock_indicator_pane_g5

0xe164,	// (0x0003c2df) list_single_fs_bigclock_indicator_pane_t5_ParamLimits

0xe164,	// (0x0003c2df) list_single_fs_bigclock_indicator_pane_t5

0x8cfc,	// (0x00036e77) aid_cell_bcale_month_pane_ParamLimits

0x8cfc,	// (0x00036e77) aid_cell_bcale_month_pane

0x8d1a,	// (0x00036e95) bcale_month_pane_ParamLimits

0x8d1a,	// (0x00036e95) bcale_month_pane

0x8d3e,	// (0x00036eb9) bcale_preview_pane_ParamLimits

0x8d3e,	// (0x00036eb9) bcale_preview_pane

0xec55,	// (0x0003cdd0) list_single_fs_bigclock_pane_t1_ParamLimits

0xec74,	// (0x0003cdef) list_single_fs_bigclock_pane_t2_ParamLimits

0xec74,	// (0x0003cdef) list_single_fs_bigclock_pane_t2

0x0001,

0xfe75,	// (0x0003dff0) list_single_fs_bigclock_pane_t_ParamLimits

0xfe75,	// (0x0003dff0) list_single_fs_bigclock_pane_t

0xeed2,	// (0x0003d04d) main_fs_bigclock_unlock_btn_pane_g2

0x0001,

0x001a,	// (0x0002e195) main_fs_bigclock_unlock_btn_pane_g

0x9582,	// (0x000376fd) aid_dia3_key_size_ParamLimits

0x9582,	// (0x000376fd) aid_dia3_key_size

0x9591,	// (0x0003770c) aid_dia3_listrow_size_ParamLimits

0x9591,	// (0x0003770c) aid_dia3_listrow_size

0x95a6,	// (0x00037721) dia3_keypad_fun_pane_ParamLimits

0x95a6,	// (0x00037721) dia3_keypad_fun_pane

0x95c2,	// (0x0003773d) dia3_keypad_num_pane_ParamLimits

0x95c2,	// (0x0003773d) dia3_keypad_num_pane

0x95dd,	// (0x00037758) dia3_listscroll_pane_ParamLimits

0x95dd,	// (0x00037758) dia3_listscroll_pane

0x95f0,	// (0x0003776b) dia3_numentry_pane_ParamLimits

0x95f0,	// (0x0003776b) dia3_numentry_pane

0xeee8,	// (0x0003d063) dia3_list_pane

0xeef3,	// (0x0003d06e) scroll_pane_cp12

0x9b34,	// (0x00037caf) bg_dia3_numentry_pane

0x9604,	// (0x0003777f) dia3_numentry_pane_t1

0x9613,	// (0x0003778e) cell_dia3_key_num_pane

0x961b,	// (0x00037796) cell_dia3_key0_fun_pane_ParamLimits

0x961b,	// (0x00037796) cell_dia3_key0_fun_pane

0x962f,	// (0x000377aa) cell_dia3_key1_fun_pane_ParamLimits

0x962f,	// (0x000377aa) cell_dia3_key1_fun_pane

0x9647,	// (0x000377c2) dia3_listrow_pane

0xddcc,	// (0x0003bf47) bg_dia3_numentry_pane_g1

0x9b34,	// (0x00037caf) bg_button_pane_cp21

0xeefe,	// (0x0003d079) cell_dia3_key_num_pane_t1

0xef0c,	// (0x0003d087) cell_dia3_key_num_pane_t2

0xef1b,	// (0x0003d096) cell_dia3_key_num_pane_t3

0xef2a,	// (0x0003d0a5) cell_dia3_key_num_pane_t4

0x0003,

0xfef5,	// (0x0003e070) cell_dia3_key_num_pane_t

0x9b34,	// (0x00037caf) bg_button_pane_cp19

0x9659,	// (0x000377d4) cell_dia3_key0_fun_pane_g1

0x9b34,	// (0x00037caf) bg_button_pane_cp20

0x9661,	// (0x000377dc) cell_dia3_key1_fun_pane_g1

0x9669,	// (0x000377e4) area_left_week_number_pane

0x9675,	// (0x000377f0) area_top_day_name_pane

0x9688,	// (0x00037803) frame_month_view_pane

0xef39,	// (0x0003d0b4) grid_month_view_pane

0x969b,	// (0x00037816) cell_top_day_name_pane_ParamLimits

0x969b,	// (0x00037816) cell_top_day_name_pane

0x96c8,	// (0x00037843) cell_area_left_week_number_pane_ParamLimits

0x96c8,	// (0x00037843) cell_area_left_week_number_pane

0x96dc,	// (0x00037857) cell_month_view_pane_ParamLimits

0x96dc,	// (0x00037857) cell_month_view_pane

0xef47,	// (0x0003d0c2) frm_month_g1

0x9709,	// (0x00037884) frm_month_g2

0x971c,	// (0x00037897) frm_month_g3

0x972f,	// (0x000378aa) frm_month_g4

0x9742,	// (0x000378bd) frm_month_g5

0x9755,	// (0x000378d0) frm_month_g6

0x9768,	// (0x000378e3) frm_month_g7

0xef54,	// (0x0003d0cf) frm_month_g8

0x977b,	// (0x000378f6) frm_month_g9

0x978b,	// (0x00037906) frm_month_g10

0x979b,	// (0x00037916) frm_month_g11

0x97ab,	// (0x00037926) frm_month_g12

0x97bd,	// (0x00037938) frm_month_g13

0x97cf,	// (0x0003794a) frm_month_g14

0x97e3,	// (0x0003795e) frm_month_g15

0x97f7,	// (0x00037972) frm_month_g16

0x000f,

0xfefe,	// (0x0003e079) frm_month_g

0xef61,	// (0x0003d0dc) cell_top_day_name_pane_t1

0x980b,	// (0x00037986) cell_area_left_week_number_pane_g1

0x9817,	// (0x00037992) cell_area_left_week_number_pane_t1

0xc9b1,	// (0x0003ab2c) cell_month_view_pane_g1

0x982a,	// (0x000379a5) cell_month_view_pane_t1

0x9b34,	// (0x00037caf) main_fps_pane

0xe396,	// (0x0003c511) cmail_ddmenu_btn02_pane_cp1_ParamLimits

0xe396,	// (0x0003c511) cmail_ddmenu_btn02_pane_cp1

0xe3b2,	// (0x0003c52d) cmail_ddmenu_btn02_pane_cp2_ParamLimits

0xe3b2,	// (0x0003c52d) cmail_ddmenu_btn02_pane_cp2

0x8f60,	// (0x000370db) cmail_ddmenu_btn02_pane_g2_ParamLimits

0x8f60,	// (0x000370db) cmail_ddmenu_btn02_pane_g2

0x0001,

0xfe28,	// (0x0003dfa3) cmail_ddmenu_btn02_pane_g_ParamLimits

0xfe28,	// (0x0003dfa3) cmail_ddmenu_btn02_pane_g

0x8f7e,	// (0x000370f9) cmail_ddmenu_btn02_pane_t2_ParamLimits

0x8f7e,	// (0x000370f9) cmail_ddmenu_btn02_pane_t2

0x0001,

0xfe2d,	// (0x0003dfa8) cmail_ddmenu_btn02_pane_t_ParamLimits

0xfe2d,	// (0x0003dfa8) cmail_ddmenu_btn02_pane_t

0x983d,	// (0x000379b8) fps_text_pane_ParamLimits

0x983d,	// (0x000379b8) fps_text_pane

0x9854,	// (0x000379cf) main_fps_pane_g1_ParamLimits

0x9854,	// (0x000379cf) main_fps_pane_g1

0x986e,	// (0x000379e9) wait_bar_pane_cp010_ParamLimits

0x986e,	// (0x000379e9) wait_bar_pane_cp010

0x987f,	// (0x000379fa) fps_text_pane_t1_ParamLimits

0x987f,	// (0x000379fa) fps_text_pane_t1

0xe8a1,	// (0x0003ca1c) cam4_image_uncrop_pane_g1

0xe8aa,	// (0x0003ca25) cam4_image_uncrop_pane_g2

0x6551,	// (0x000346cc) cam4_image_uncrop_pane_g3

0x655a,	// (0x000346d5) cam4_image_uncrop_pane_g4

0x0003,

0xf8ee,	// (0x0003da69) cam4_image_uncrop_pane_g

0x9647,	// (0x000377c2) dia3_listrow_pane_ParamLimits

0x9b34,	// (0x00037caf) main_phob2_pane

0x8ace,	// (0x00036c49) cell_tport_appsw_pane_cp02_ParamLimits

0x8ace,	// (0x00036c49) cell_tport_appsw_pane_cp02

0x8ae2,	// (0x00036c5d) cell_tport_appsw_pane_cp03_ParamLimits

0x8ae2,	// (0x00036c5d) cell_tport_appsw_pane_cp03

0x9b34,	// (0x00037caf) phob2_contact_card_pane

0x9b34,	// (0x00037caf) phob2_listscroll_pane

0xef74,	// (0x0003d0ef) phob2_list_pane

0xef7c,	// (0x0003d0f7) scroll_pane_cp034

0x9897,	// (0x00037a12) phob2_cc_data_pane_ParamLimits

0x9897,	// (0x00037a12) phob2_cc_data_pane

0x98b6,	// (0x00037a31) phob2_cc_listscroll_pane_ParamLimits

0x98b6,	// (0x00037a31) phob2_cc_listscroll_pane

0x98d4,	// (0x00037a4f) list_double_large_graphic_phob2_pane_ParamLimits

0x98d4,	// (0x00037a4f) list_double_large_graphic_phob2_pane

0x98e7,	// (0x00037a62) list_double_large_graphic_phob2_pane_g1_ParamLimits

0x98e7,	// (0x00037a62) list_double_large_graphic_phob2_pane_g1

0x98fd,	// (0x00037a78) list_double_large_graphic_phob2_pane_g2_ParamLimits

0x98fd,	// (0x00037a78) list_double_large_graphic_phob2_pane_g2

0x0001,

0xff1f,	// (0x0003e09a) list_double_large_graphic_phob2_pane_g_ParamLimits

0xff1f,	// (0x0003e09a) list_double_large_graphic_phob2_pane_g

0x9909,	// (0x00037a84) list_double_large_graphic_phob2_pane_t1_ParamLimits

0x9909,	// (0x00037a84) list_double_large_graphic_phob2_pane_t1

0x991f,	// (0x00037a9a) list_double_large_graphic_phob2_pane_t2_ParamLimits

0x991f,	// (0x00037a9a) list_double_large_graphic_phob2_pane_t2

0x0001,

0xff24,	// (0x0003e09f) list_double_large_graphic_phob2_pane_t_ParamLimits

0xff24,	// (0x0003e09f) list_double_large_graphic_phob2_pane_t

0x9b34,	// (0x00037caf) list_highlight_pane_cp024

0x9934,	// (0x00037aaf) phob2_cc_button_pane

0x993c,	// (0x00037ab7) phob2_cc_data_pane_g1_ParamLimits

0x993c,	// (0x00037ab7) phob2_cc_data_pane_g1

0x9951,	// (0x00037acc) phob2_cc_data_pane_g2_ParamLimits

0x9951,	// (0x00037acc) phob2_cc_data_pane_g2

0x0001,

0xff29,	// (0x0003e0a4) phob2_cc_data_pane_g_ParamLimits

0xff29,	// (0x0003e0a4) phob2_cc_data_pane_g

0x9961,	// (0x00037adc) phob2_cc_data_pane_t1_ParamLimits

0x9961,	// (0x00037adc) phob2_cc_data_pane_t1

0x9979,	// (0x00037af4) phob2_cc_data_pane_t2_ParamLimits

0x9979,	// (0x00037af4) phob2_cc_data_pane_t2

0x9991,	// (0x00037b0c) phob2_cc_data_pane_t3_ParamLimits

0x9991,	// (0x00037b0c) phob2_cc_data_pane_t3

0x0002,

0xff2e,	// (0x0003e0a9) phob2_cc_data_pane_t_ParamLimits

0xff2e,	// (0x0003e0a9) phob2_cc_data_pane_t

0xef84,	// (0x0003d0ff) phob2_cc_list_pane_ParamLimits

0xef84,	// (0x0003d0ff) phob2_cc_list_pane

0xd51e,	// (0x0003b699) scroll_pane_cp035_ParamLimits

0xd51e,	// (0x0003b699) scroll_pane_cp035

0xa801,	// (0x0003897c) bg_button_pane_cp033

0xef90,	// (0x0003d10b) phob2_cc_button_pane_g1

0xef9c,	// (0x0003d117) phob2_cc_button_pane_t1

0xefb1,	// (0x0003d12c) phob2_cc_button_pane_t2

0x0001,

0xff35,	// (0x0003e0b0) phob2_cc_button_pane_t

0x99a9,	// (0x00037b24) list_double_large_graphic_phob2_cc_pane_ParamLimits

0x99a9,	// (0x00037b24) list_double_large_graphic_phob2_cc_pane

0x99bc,	// (0x00037b37) list_double_large_graphic_phob2_cc_pane_g1_ParamLimits

0x99bc,	// (0x00037b37) list_double_large_graphic_phob2_cc_pane_g1

0x99c8,	// (0x00037b43) list_double_large_graphic_phob2_cc_pane_g2_ParamLimits

0x99c8,	// (0x00037b43) list_double_large_graphic_phob2_cc_pane_g2

0x99d4,	// (0x00037b4f) list_double_large_graphic_phob2_cc_pane_g3_ParamLimits

0x99d4,	// (0x00037b4f) list_double_large_graphic_phob2_cc_pane_g3

0x99e0,	// (0x00037b5b) list_double_large_graphic_phob2_cc_pane_g4_ParamLimits

0x99e0,	// (0x00037b5b) list_double_large_graphic_phob2_cc_pane_g4

0x99ec,	// (0x00037b67) list_double_large_graphic_phob2_cc_pane_g5_ParamLimits

0x99ec,	// (0x00037b67) list_double_large_graphic_phob2_cc_pane_g5

0x0004,

0xff3a,	// (0x0003e0b5) list_double_large_graphic_phob2_cc_pane_g_ParamLimits

0xff3a,	// (0x0003e0b5) list_double_large_graphic_phob2_cc_pane_g

0x99f8,	// (0x00037b73) list_double_large_graphic_phob2_cc_pane_t1_ParamLimits

0x99f8,	// (0x00037b73) list_double_large_graphic_phob2_cc_pane_t1

0x9a21,	// (0x00037b9c) list_double_large_graphic_phob2_cc_pane_t2_ParamLimits

0x9a21,	// (0x00037b9c) list_double_large_graphic_phob2_cc_pane_t2

0x0001,

0xff45,	// (0x0003e0c0) list_double_large_graphic_phob2_cc_pane_t_ParamLimits

0xff45,	// (0x0003e0c0) list_double_large_graphic_phob2_cc_pane_t

0xefc3,	// (0x0003d13e) list_highlight_pane_cp025_ParamLimits

0xefc3,	// (0x0003d13e) list_highlight_pane_cp025

0xa801,	// (0x0003897c) bg_button_pane_cp033_ParamLimits

0xef90,	// (0x0003d10b) phob2_cc_button_pane_g1_ParamLimits

0xef9c,	// (0x0003d117) phob2_cc_button_pane_t1_ParamLimits

0xefb1,	// (0x0003d12c) phob2_cc_button_pane_t2_ParamLimits

0xff35,	// (0x0003e0b0) phob2_cc_button_pane_t_ParamLimits

0x18cf,	// (0x0002fa4a) popup_wgtman_window

0xd363,	// (0x0003b4de) scroll_pane_cp038

0x9393,	// (0x0003750e) wgtman_btn_pane_cp_01_ParamLimits

0x9393,	// (0x0003750e) wgtman_btn_pane_cp_01

0xefd1,	// (0x0003d14c) wgtman_content_pane

0xefda,	// (0x0003d155) wgtman_heading_pane

0x9b34,	// (0x00037caf) bg_heading_pane_cp02

0xefe3,	// (0x0003d15e) wgtman_heading_pane_g1

0xefeb,	// (0x0003d166) wgtman_heading_pane_t1

0xeff9,	// (0x0003d174) scroll_pane_cp036

0xf001,	// (0x0003d17c) wgtman_list_pane

0xf009,	// (0x0003d184) wgtman_list_pane_t1_ParamLimits

0xf009,	// (0x0003d184) wgtman_list_pane_t1

0x653d,	// (0x000346b8) cam4_grid_pane

0x6f39,	// (0x000350b4) bg_button_pane_cp015_ParamLimits

0x6f4d,	// (0x000350c8) bg_button_pane_cp016_ParamLimits

0x6f60,	// (0x000350db) bg_button_pane_cp017_ParamLimits

0x6fb8,	// (0x00035133) popup_vitu2_query_window_g3_ParamLimits

0x6fb8,	// (0x00035133) popup_vitu2_query_window_g3

0x7075,	// (0x000351f0) popup_vitu2_query_window_t6_ParamLimits

0x7075,	// (0x000351f0) popup_vitu2_query_window_t6

0x70a0,	// (0x0003521b) popup_vitu2_query_window_t7_ParamLimits

0x70a0,	// (0x0003521b) popup_vitu2_query_window_t7

0xe8a1,	// (0x0003ca1c) cam4_grid_pane_g1

0xe8aa,	// (0x0003ca25) cam4_grid_pane_g2

0xf025,	// (0x0003d1a0) cam4_grid_pane_g3

0xf02e,	// (0x0003d1a9) cam4_grid_pane_g4

0x0003,

0xff4a,	// (0x0003e0c5) cam4_grid_pane_g

0x26ea,	// (0x00030865) aid_placing_vt_slider_lsc_ParamLimits

0x29e7,	// (0x00030b62) vidtel_button_pane_ParamLimits

0x29e7,	// (0x00030b62) vidtel_button_pane

0xf039,	// (0x0003d1b4) bg_button_pane_cp034

0x9a4a,	// (0x00037bc5) vidtel_button_pane_g1

0xf043,	// (0x0003d1be) vidtel_button_pane_t1

0xd465,	// (0x0003b5e0) aid_size_vtel_slider_touch

0xd51e,	// (0x0003b699) scroll_pane_cp039

0xde0a,	// (0x0003bf85) ncim_query_button_pane_cp01_ParamLimits

0xde29,	// (0x0003bfa4) ncimui_query_pane_g1_ParamLimits

0xa801,	// (0x0003897c) input_focus_pane_cp012_ParamLimits

0xde4e,	// (0x0003bfc9) ncim_query_entry_pane_t1_ParamLimits

0xd51e,	// (0x0003b699) scroll_pane_cp039_ParamLimits

0xad92,	// (0x00038f0d) navi_pane_bcale_mc_g1

0xad9a,	// (0x00038f15) navi_pane_bcale_mc_t1

0xe3fb,	// (0x0003c576) main_sp_fs_email_pane_g1

0xe407,	// (0x0003c582) main_sp_fs_email_pane_g2

0x0001,

0xfce5,	// (0x0003de60) main_sp_fs_email_pane_g

0xe853,	// (0x0003c9ce) list_single_cale_mrui_row_pane_g3_ParamLimits

0xe853,	// (0x0003c9ce) list_single_cale_mrui_row_pane_g3

0x8fa6,	// (0x00037121) list_single_recal_day_pane_g5_event_pane

0xeadc,	// (0x0003cc57) list_single_recal_day_pane_g7

0xf051,	// (0x0003d1cc) list_recal_day_event_pane_cp01

0xf05a,	// (0x0003d1d5) list_recal_vselct_arw_lo_pane_cp01

0xf062,	// (0x0003d1dd) list_recal_vselct_arw_up_pane_cp01

0xf06a,	// (0x0003d1e5) list_recal_vselct_pane_cp01

0xd487,	// (0x0003b602) list_recal_day_event_pane_cp01_g1

0xf074,	// (0x0003d1ef) list_recal_day_event_pane_cp01_t1

0xeae4,	// (0x0003cc5f) list_single_recal_day_pane_t1_ParamLimits

0xeaf6,	// (0x0003cc71) list_single_recal_day_pane_t2_ParamLimits

0xfe3d,	// (0x0003dfb8) list_single_recal_day_pane_t_ParamLimits

0xa1ac,	// (0x00038327) bg_notes_pane_ParamLimits

0xa26e,	// (0x000383e9) list_notes_pane_ParamLimits

0x1b2c,	// (0x0002fca7) scroll_pane_cp06_ParamLimits

0xa290,	// (0x0003840b) main_notes_pane_ParamLimits

0x9b34,	// (0x00037caf) main_welc_pane

0x9a52,	// (0x00037bcd) main_welc_body_pane_ParamLimits

0x9a52,	// (0x00037bcd) main_welc_body_pane

0x9a6f,	// (0x00037bea) main_welc_opti_pane_ParamLimits

0x9a6f,	// (0x00037bea) main_welc_opti_pane

0x9ab8,	// (0x00037c33) main_welc_pane_t1_ParamLimits

0x9ab8,	// (0x00037c33) main_welc_pane_t1

0x9ada,	// (0x00037c55) main_welc_body_row_pane_ParamLimits

0x9ada,	// (0x00037c55) main_welc_body_row_pane

0xdbb0,	// (0x0003bd2b) main_welc_opti_row_pane_ParamLimits

0xdbb0,	// (0x0003bd2b) main_welc_opti_row_pane

0xf082,	// (0x0003d1fd) main_welc_opti_row_pane_g1

0xf08a,	// (0x0003d205) main_welc_opti_row_pane_t1

0xf09a,	// (0x0003d215) main_welc_body_row_pane_t1

0xed5b,	// (0x0003ced6) popup_notif_wgt_heading_pane

0xed75,	// (0x0003cef0) aid_size_list_notif_wgt_del_ParamLimits

0xed82,	// (0x0003cefd) list_notif_wgt_row_pane_g1_ParamLimits

0xed8e,	// (0x0003cf09) list_notif_wgt_row_pane_g2_ParamLimits

0xed9a,	// (0x0003cf15) list_notif_wgt_row_pane_g3_ParamLimits

0xfea4,	// (0x0003e01f) list_notif_wgt_row_pane_g_ParamLimits

0xeda7,	// (0x0003cf22) list_notif_wgt_row_pane_t1_ParamLimits

0xedbc,	// (0x0003cf37) list_notif_wgt_row_pane_t2_ParamLimits

0xedce,	// (0x0003cf49) list_notif_wgt_row_pane_t3_ParamLimits

0xfeab,	// (0x0003e026) list_notif_wgt_row_pane_t_ParamLimits

0x942d,	// (0x000375a8) listrow_wgtman_pane_g1_ParamLimits

0x943a,	// (0x000375b5) listrow_wgtman_pane_g2_ParamLimits

0xfed4,	// (0x0003e04f) listrow_wgtman_pane_g_ParamLimits

0x9458,	// (0x000375d3) listrow_wgtman_pane_t1_ParamLimits

0x9470,	// (0x000375eb) listrow_wgtman_pane_t2_ParamLimits

0xfed9,	// (0x0003e054) listrow_wgtman_pane_t_ParamLimits

0x9496,	// (0x00037611) wait_bar_pane_cp09_ParamLimits

0x9b34,	// (0x00037caf) bg_popup_heading_pane_cp02

0xf0a9,	// (0x0003d224) popup_notif_wgt_heading_pane_g1

0xf0b1,	// (0x0003d22c) popup_notif_wgt_heading_pane_t1

0x9b34,	// (0x00037caf) main_vids_pane

0x9b34,	// (0x00037caf) vids_listscroll_pane

0x9af0,	// (0x00037c6b) scroll_pane_cp040

0x9b34,	// (0x00037caf) vids_list_pane

0x9afb,	// (0x00037c76) vids_list_double_pane_ParamLimits

0x9afb,	// (0x00037c76) vids_list_double_pane

0x9b0c,	// (0x00037c87) vids_list_double_pane_g1

0x9b15,	// (0x00037c90) vids_list_double_pane_t1

0x9b24,	// (0x00037c9f) vids_list_double_pane_t2

0x0001,

0xff58,	// (0x0003e0d3) vids_list_double_pane_t

0x18c1,	// (0x0002fa3c) main_ncimui_pane_ParamLimits

0x7cca,	// (0x00035e45) main_ncimui_pane_g1_ParamLimits

0x7cd6,	// (0x00035e51) main_ncimui_pane_g2_ParamLimits

0x7cd6,	// (0x00035e51) main_ncimui_pane_g2

0x0001,

0xfbea,	// (0x0003dd65) main_ncimui_pane_g_ParamLimits

0xfbea,	// (0x0003dd65) main_ncimui_pane_g

0x9a8e,	// (0x00037c09) main_welc_pane_g1_ParamLimits

0x9a8e,	// (0x00037c09) main_welc_pane_g1

0x9aa3,	// (0x00037c1e) main_welc_pane_g2_ParamLimits

0x9aa3,	// (0x00037c1e) main_welc_pane_g2

0x0001,

0xff53,	// (0x0003e0ce) main_welc_pane_g_ParamLimits

0xff53,	// (0x0003e0ce) main_welc_pane_g

0xa1ac,	// (0x00038327) listscroll_mce_pane_ParamLimits

0xaee7,	// (0x00039062) wait_bar_pane_cp10

0xc33b,	// (0x0003a4b6) main_cale_day_pane_ParamLimits

0xc33b,	// (0x0003a4b6) main_cale_week_pane_ParamLimits

0xa1ac,	// (0x00038327) main_messa_pane_ParamLimits

0x5acd,	// (0x00033c48) main_clock2_btn_pane_ParamLimits

0x5acd,	// (0x00033c48) main_clock2_btn_pane

0xcbad,	// (0x0003ad28) main_clock2_btn_pane_cp01_ParamLimits

0xcbad,	// (0x0003ad28) main_clock2_btn_pane_cp01

0xe7df,	// (0x0003c95a) list_cale_mrui_pane_ParamLimits

0xee12,	// (0x0003cf8d) main_cf0_pane_g2

0x0001,

0xfeb2,	// (0x0003e02d) main_cf0_pane_g

0x9669,	// (0x000377e4) area_left_week_number_pane_ParamLimits

0x9675,	// (0x000377f0) area_top_day_name_pane_ParamLimits

0x9688,	// (0x00037803) frame_month_view_pane_ParamLimits

0xef39,	// (0x0003d0b4) grid_month_view_pane_ParamLimits

0xef47,	// (0x0003d0c2) frm_month_g1_ParamLimits

0x9709,	// (0x00037884) frm_month_g2_ParamLimits

0x971c,	// (0x00037897) frm_month_g3_ParamLimits

0x972f,	// (0x000378aa) frm_month_g4_ParamLimits

0x9742,	// (0x000378bd) frm_month_g5_ParamLimits

0x9755,	// (0x000378d0) frm_month_g6_ParamLimits

0x9768,	// (0x000378e3) frm_month_g7_ParamLimits

0xef54,	// (0x0003d0cf) frm_month_g8_ParamLimits

0x977b,	// (0x000378f6) frm_month_g9_ParamLimits

0x978b,	// (0x00037906) frm_month_g10_ParamLimits

0x979b,	// (0x00037916) frm_month_g11_ParamLimits

0x97ab,	// (0x00037926) frm_month_g12_ParamLimits

0x97bd,	// (0x00037938) frm_month_g13_ParamLimits

0x97cf,	// (0x0003794a) frm_month_g14_ParamLimits

0x97e3,	// (0x0003795e) frm_month_g15_ParamLimits

0x97f7,	// (0x00037972) frm_month_g16_ParamLimits

0xfefe,	// (0x0003e079) frm_month_g_ParamLimits

0xef61,	// (0x0003d0dc) cell_top_day_name_pane_t1_ParamLimits

0x980b,	// (0x00037986) cell_area_left_week_number_pane_g1_ParamLimits

0x9817,	// (0x00037992) cell_area_left_week_number_pane_t1_ParamLimits

0xc9b1,	// (0x0003ab2c) cell_month_view_pane_g1_ParamLimits

0x982a,	// (0x000379a5) cell_month_view_pane_t1_ParamLimits

0xa1a4,	// (0x0003831f) main_clock2_btn_pane_g1

0xf0bf,	// (0x0003d23a) main_clock2_btn_pane_t1

0xa801,	// (0x0003897c) listscroll_cmail_pane_ParamLimits

0xe3fb,	// (0x0003c576) main_sp_fs_email_pane_g1_ParamLimits

0xe407,	// (0x0003c582) main_sp_fs_email_pane_g2_ParamLimits

0xfce5,	// (0x0003de60) main_sp_fs_email_pane_g_ParamLimits

0xea44,	// (0x0003cbbf) list_recal_day_pane_ParamLimits

0xea55,	// (0x0003cbd0) mian_recal_day_pane_t1

0x8755,	// (0x000368d0) list_single_dyc_row_text_pane_t4_ParamLimits

0x8755,	// (0x000368d0) list_single_dyc_row_text_pane_t4

0x879e,	// (0x00036919) list_single_dyc_row_text_pane_t5_ParamLimits

0x879e,	// (0x00036919) list_single_dyc_row_text_pane_t5

0xe4cb,	// (0x0003c646) list_single_dyc_row_text_pane_t6_ParamLimits

0xe4cb,	// (0x0003c646) list_single_dyc_row_text_pane_t6

0xa876,	// (0x000389f1) aid_mgn_list_cale_time_pane

0x18c1,	// (0x0002fa3c) main_gallery2_pane_ParamLimits
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

} // end of namespace AknLayoutScalable_Abrw_pnl4_apps_nhd4_lsc_tch_Normal
