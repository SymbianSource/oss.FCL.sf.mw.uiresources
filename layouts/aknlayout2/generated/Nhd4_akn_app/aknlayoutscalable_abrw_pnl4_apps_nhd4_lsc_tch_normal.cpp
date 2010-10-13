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
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Apps::KByteCodedData_AknLayoutScalable_Elaf_pnp4_apps_nhd4_prt_tch + 0x0002a283 };

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
0x1cea,	// (0x0002bf6d) Screen

0x1cf6,	// (0x0002bf79) application_window

0x1d02,	// (0x0002bf85) area_bottom_pane_ParamLimits

0x1d02,	// (0x0002bf85) area_bottom_pane

0x0903,	// (0x0002ab86) area_top_pane_ParamLimits

0x0903,	// (0x0002ab86) area_top_pane

0xb1fd,	// (0x00035480) call_video_uplink_pane_ParamLimits

0xb1fd,	// (0x00035480) call_video_uplink_pane

0x0991,	// (0x0002ac14) main_pane_ParamLimits

0x0991,	// (0x0002ac14) main_pane

0xe490,	// (0x00038713) context_pane

0x4235,	// (0x0002e4b8) navi_pane

0x4267,	// (0x0002e4ea) popup_cale_events_window_ParamLimits

0x4267,	// (0x0002e4ea) popup_cale_events_window

0xe4a3,	// (0x00038726) popup_mup_playback_window

0x427f,	// (0x0002e502) signal_pane

0xc5bd,	// (0x00036840) main_browser_pane

0xc786,	// (0x00036a09) main_burst_pane

0x0d8d,	// (0x0002b010) main_calc_pane

0xe484,	// (0x00038707) main_cale_day_pane

0x0da1,	// (0x0002b024) main_cale_month_pane

0xe484,	// (0x00038707) main_cale_week_pane

0xc786,	// (0x00036a09) main_call_pane

0xc23d,	// (0x000364c0) main_call_poc_pane

0xc786,	// (0x00036a09) main_camera_pane

0xc786,	// (0x00036a09) main_chi_dic_pane

0xcf2d,	// (0x000371b0) main_clock_pane

0xc23d,	// (0x000364c0) main_fmradio_pane

0xc786,	// (0x00036a09) main_graph_messa_pane

0xc23d,	// (0x000364c0) main_help_pane

0xc5bd,	// (0x00036840) main_im_pane

0xc4a6,	// (0x00036729) main_image_pane_ParamLimits

0xc4a6,	// (0x00036729) main_image_pane

0xc23d,	// (0x000364c0) main_location2_pane

0xc786,	// (0x00036a09) main_location_pane

0xc4a6,	// (0x00036729) main_messa_pane

0xc23d,	// (0x000364c0) main_mp2_pane

0xc786,	// (0x00036a09) main_mp_pane

0xc23d,	// (0x000364c0) main_msg_pane

0xc23d,	// (0x000364c0) main_mup_eq_pane

0xc23d,	// (0x000364c0) main_mup_pane

0xc5bd,	// (0x00036840) main_notes_pane

0xc23d,	// (0x000364c0) main_pec_pane

0xc23d,	// (0x000364c0) main_phob_pane

0xc23d,	// (0x000364c0) main_pinb_pane

0xc23d,	// (0x000364c0) main_postcard_pane

0xc23d,	// (0x000364c0) main_qdial_pane

0xc786,	// (0x00036a09) main_skin_pane

0xc23d,	// (0x000364c0) main_smil2_pane

0xc786,	// (0x00036a09) main_smil_pane

0xc786,	// (0x00036a09) main_video_pane

0xc786,	// (0x00036a09) main_video_tele_pane

0xc4a6,	// (0x00036729) main_viewer_pane_ParamLimits

0xc4a6,	// (0x00036729) main_viewer_pane

0xc786,	// (0x00036a09) main_vorec_pane

0x0df3,	// (0x0002b076) popup_blid_sat_info_window_ParamLimits

0x0df3,	// (0x0002b076) popup_blid_sat_info_window

0x0e4b,	// (0x0002b0ce) popup_dyc_status_message_window_ParamLimits

0x0e4b,	// (0x0002b0ce) popup_dyc_status_message_window

0x0e63,	// (0x0002b0e6) popup_grid_large_graphic_window_ParamLimits

0x0e63,	// (0x0002b0e6) popup_grid_large_graphic_window

0x0f13,	// (0x0002b196) popup_loc_request_window_ParamLimits

0x0f13,	// (0x0002b196) popup_loc_request_window

0x100f,	// (0x0002b292) popup_wml_address_window_ParamLimits

0x100f,	// (0x0002b292) popup_wml_address_window

0x4079,	// (0x0002e2fc) call_muted_g1

0x3d6e,	// (0x0002dff1) popup_call_audio_conf_window_ParamLimits

0x3d6e,	// (0x0002dff1) popup_call_audio_conf_window

0x408d,	// (0x0002e310) popup_call_audio_first_window_ParamLimits

0x408d,	// (0x0002e310) popup_call_audio_first_window

0x4103,	// (0x0002e386) popup_call_audio_in_window_ParamLimits

0x4103,	// (0x0002e386) popup_call_audio_in_window

0x413f,	// (0x0002e3c2) popup_call_audio_out_window_ParamLimits

0x413f,	// (0x0002e3c2) popup_call_audio_out_window

0x4179,	// (0x0002e3fc) popup_call_audio_second_window_ParamLimits

0x4179,	// (0x0002e3fc) popup_call_audio_second_window

0x41cf,	// (0x0002e452) popup_call_audio_wait_window_ParamLimits

0x41cf,	// (0x0002e452) popup_call_audio_wait_window

0x4204,	// (0x0002e487) popup_number_entry_window_ParamLimits

0x4204,	// (0x0002e487) popup_number_entry_window

0xbe2a,	// (0x000360ad) bg_popup_call_pane_cp05_ParamLimits

0xbe2a,	// (0x000360ad) bg_popup_call_pane_cp05

0xbe4a,	// (0x000360cd) popup_number_entry_window_t1

0xbe5d,	// (0x000360e0) popup_number_entry_window_t2

0xbe6f,	// (0x000360f2) popup_number_entry_window_t3

0x0003,

0xf040,	// (0x000392c3) popup_number_entry_window_t

0xbe81,	// (0x00036104) text_title_cp2

0xbe94,	// (0x00036117) bg_popup_call_pane_cp_ParamLimits

0xbe94,	// (0x00036117) bg_popup_call_pane_cp

0xbea2,	// (0x00036125) call_thumbnail_pane

0xbeaa,	// (0x0003612d) popup_call_audio_in_window_g1_ParamLimits

0xbeaa,	// (0x0003612d) popup_call_audio_in_window_g1

0xbeb6,	// (0x00036139) popup_call_audio_in_window_g2_ParamLimits

0xbeb6,	// (0x00036139) popup_call_audio_in_window_g2

0xbec2,	// (0x00036145) popup_call_audio_in_window_g3_ParamLimits

0xbec2,	// (0x00036145) popup_call_audio_in_window_g3

0x0002,

0xf049,	// (0x000392cc) popup_call_audio_in_window_g_ParamLimits

0xf049,	// (0x000392cc) popup_call_audio_in_window_g

0xbece,	// (0x00036151) popup_call_audio_in_window_t1_ParamLimits

0xbece,	// (0x00036151) popup_call_audio_in_window_t1

0xbeea,	// (0x0003616d) popup_call_audio_in_window_t2_ParamLimits

0xbeea,	// (0x0003616d) popup_call_audio_in_window_t2

0xbf06,	// (0x00036189) popup_call_audio_in_window_t3_ParamLimits

0xbf06,	// (0x00036189) popup_call_audio_in_window_t3

0x0002,

0xf050,	// (0x000392d3) popup_call_audio_in_window_t_ParamLimits

0xf050,	// (0x000392d3) popup_call_audio_in_window_t

0xbe94,	// (0x00036117) bg_popup_call_pane_cp01_ParamLimits

0xbe94,	// (0x00036117) bg_popup_call_pane_cp01

0xbea2,	// (0x00036125) call_thumbnail_pane_cp02

0xbf19,	// (0x0003619c) call_type_pane_cp022

0xbf21,	// (0x000361a4) popup_call_audio_out_window_g1_ParamLimits

0xbf21,	// (0x000361a4) popup_call_audio_out_window_g1

0xbf33,	// (0x000361b6) popup_call_audio_out_window_g2_ParamLimits

0xbf33,	// (0x000361b6) popup_call_audio_out_window_g2

0xbf3f,	// (0x000361c2) popup_call_audio_out_window_g3_ParamLimits

0xbf3f,	// (0x000361c2) popup_call_audio_out_window_g3

0x0002,

0xf057,	// (0x000392da) popup_call_audio_out_window_g_ParamLimits

0xf057,	// (0x000392da) popup_call_audio_out_window_g

0xbf51,	// (0x000361d4) popup_call_audio_out_window_t1_ParamLimits

0xbf51,	// (0x000361d4) popup_call_audio_out_window_t1

0xbf69,	// (0x000361ec) popup_call_audio_out_window_t2_ParamLimits

0xbf69,	// (0x000361ec) popup_call_audio_out_window_t2

0x0001,

0xf05e,	// (0x000392e1) popup_call_audio_out_window_t_ParamLimits

0xf05e,	// (0x000392e1) popup_call_audio_out_window_t

0xbf7e,	// (0x00036201) bg_popup_call_pane_ParamLimits

0xbf7e,	// (0x00036201) bg_popup_call_pane

0x1d7c,	// (0x0002bfff) call_thumbnail_pane_cp_ParamLimits

0x1d7c,	// (0x0002bfff) call_thumbnail_pane_cp

0xc002,	// (0x00036285) call_type_pane_cp01_ParamLimits

0xc002,	// (0x00036285) call_type_pane_cp01

0xc046,	// (0x000362c9) popup_call_audio_first_window_g1_ParamLimits

0xc046,	// (0x000362c9) popup_call_audio_first_window_g1

0xc092,	// (0x00036315) popup_call_audio_first_window_g2_ParamLimits

0xc092,	// (0x00036315) popup_call_audio_first_window_g2

0x0001,

0xf063,	// (0x000392e6) popup_call_audio_first_window_g_ParamLimits

0xf063,	// (0x000392e6) popup_call_audio_first_window_g

0xc0d6,	// (0x00036359) popup_call_audio_first_window_t1_ParamLimits

0xc0d6,	// (0x00036359) popup_call_audio_first_window_t1

0xc182,	// (0x00036405) popup_call_audio_first_window_t4_ParamLimits

0xc182,	// (0x00036405) popup_call_audio_first_window_t4

0xc20e,	// (0x00036491) popup_call_audio_first_window_t5_ParamLimits

0xc20e,	// (0x00036491) popup_call_audio_first_window_t5

0x0002,

0xf068,	// (0x000392eb) popup_call_audio_first_window_t_ParamLimits

0xf068,	// (0x000392eb) popup_call_audio_first_window_t

0xc23d,	// (0x000364c0) bg_popup_call_pane_cp02

0xc247,	// (0x000364ca) call_type_pane_cp023

0xc24f,	// (0x000364d2) popup_call_audio_wait_window_g1

0xc257,	// (0x000364da) popup_call_audio_wait_window_g2

0x0001,

0xf06f,	// (0x000392f2) popup_call_audio_wait_window_g

0xc25f,	// (0x000364e2) popup_call_audio_wait_window_t3

0xc26d,	// (0x000364f0) bg_popup_call_pane_cp03_ParamLimits

0xc26d,	// (0x000364f0) bg_popup_call_pane_cp03

0xc2cd,	// (0x00036550) call_thumbnail_pane_cp011_ParamLimits

0xc2cd,	// (0x00036550) call_thumbnail_pane_cp011

0xc2d9,	// (0x0003655c) call_type_pane_cp034_ParamLimits

0xc2d9,	// (0x0003655c) call_type_pane_cp034

0xc315,	// (0x00036598) popup_call_audio_second_window_g1_ParamLimits

0xc315,	// (0x00036598) popup_call_audio_second_window_g1

0xc351,	// (0x000365d4) popup_call_audio_second_window_g2_ParamLimits

0xc351,	// (0x000365d4) popup_call_audio_second_window_g2

0x0001,

0xf074,	// (0x000392f7) popup_call_audio_second_window_g_ParamLimits

0xf074,	// (0x000392f7) popup_call_audio_second_window_g

0xc38d,	// (0x00036610) popup_call_audio_second_window_t1_ParamLimits

0xc38d,	// (0x00036610) popup_call_audio_second_window_t1

0xc41c,	// (0x0003669f) popup_call_audio_second_window_t2_ParamLimits

0xc41c,	// (0x0003669f) popup_call_audio_second_window_t2

0xc452,	// (0x000366d5) popup_call_audio_second_window_t3_ParamLimits

0xc452,	// (0x000366d5) popup_call_audio_second_window_t3

0x0002,

0xf079,	// (0x000392fc) popup_call_audio_second_window_t_ParamLimits

0xf079,	// (0x000392fc) popup_call_audio_second_window_t

0xc23d,	// (0x000364c0) bg_popup_call_pane_cp04

0xc488,	// (0x0003670b) list_conf_pane

0xc490,	// (0x00036713) popup_call_audio_conf_window_t1

0xc49e,	// (0x00036721) call_thumbnail_pane_g1

0xc4a6,	// (0x00036729) bg_pinb_pane_ParamLimits

0xc4a6,	// (0x00036729) bg_pinb_pane

0xc4b4,	// (0x00036737) find_pinb_pane

0xc4a6,	// (0x00036729) listscroll_pinb_pane_ParamLimits

0xc4a6,	// (0x00036729) listscroll_pinb_pane

0xc4be,	// (0x00036741) pinb_bg_pane_g1

0xc4be,	// (0x00036741) pinb_bg_pane_g2

0xc4be,	// (0x00036741) pinb_bg_pane_g3

0xc4be,	// (0x00036741) pinb_bg_pane_g4

0xc4be,	// (0x00036741) pinb_bg_pane_g5

0xc4be,	// (0x00036741) pinb_bg_pane_g6

0xc4be,	// (0x00036741) pinb_bg_pane_g7

0xc4be,	// (0x00036741) pinb_bg_pane_g8

0xc4be,	// (0x00036741) pinb_bg_pane_g9

0xc4be,	// (0x00036741) pinb_bg_pane_g10

0x0009,

0xf080,	// (0x00039303) pinb_bg_pane_g

0xbe20,	// (0x000360a3) grid_pinb_pane

0xbe20,	// (0x000360a3) list_pinb_pane

0xc40e,	// (0x00036691) scroll_pane_cp01_ParamLimits

0xc40e,	// (0x00036691) scroll_pane_cp01

0xc4c8,	// (0x0003674b) find_pinb_pane_g1_ParamLimits

0xc4c8,	// (0x0003674b) find_pinb_pane_g1

0xc4e0,	// (0x00036763) find_pinb_pane_t1

0xc4f2,	// (0x00036775) find_pinb_pane_t2

0x0001,

0xf09a,	// (0x0003931d) find_pinb_pane_t

0xc507,	// (0x0003678a) input_focus_pane_cp01_ParamLimits

0xc507,	// (0x0003678a) input_focus_pane_cp01

0xc513,	// (0x00036796) cell_pinb_pane_ParamLimits

0xc513,	// (0x00036796) cell_pinb_pane

0xc521,	// (0x000367a4) cell_pinb_pane_g1_ParamLimits

0xc521,	// (0x000367a4) cell_pinb_pane_g1

0xc52f,	// (0x000367b2) cell_pinb_pane_g2_ParamLimits

0xc52f,	// (0x000367b2) cell_pinb_pane_g2

0xc52f,	// (0x000367b2) cell_pinb_pane_g3_ParamLimits

0xc52f,	// (0x000367b2) cell_pinb_pane_g3

0x0002,

0xf09f,	// (0x00039322) cell_pinb_pane_g_ParamLimits

0xf09f,	// (0x00039322) cell_pinb_pane_g

0xc23d,	// (0x000364c0) grid_highlight_pane_cp01

0xc513,	// (0x00036796) list_pinb_item_pane_ParamLimits

0xc513,	// (0x00036796) list_pinb_item_pane

0xbe20,	// (0x000360a3) list_highlight_pane_cp02

0xc53d,	// (0x000367c0) list_pinb_item_pane_g1_ParamLimits

0xc53d,	// (0x000367c0) list_pinb_item_pane_g1

0xc52f,	// (0x000367b2) list_pinb_item_pane_g2_ParamLimits

0xc52f,	// (0x000367b2) list_pinb_item_pane_g2

0xc521,	// (0x000367a4) list_pinb_item_pane_g3_ParamLimits

0xc521,	// (0x000367a4) list_pinb_item_pane_g3

0xc52f,	// (0x000367b2) list_pinb_item_pane_g4_ParamLimits

0xc52f,	// (0x000367b2) list_pinb_item_pane_g4

0x0003,

0xf0a6,	// (0x00039329) list_pinb_item_pane_g_ParamLimits

0xf0a6,	// (0x00039329) list_pinb_item_pane_g

0xc54b,	// (0x000367ce) list_pinb_item_pane_t1_ParamLimits

0xc54b,	// (0x000367ce) list_pinb_item_pane_t1

0x0b2a,	// (0x0002adad) calc_display_pane

0x0b4f,	// (0x0002add2) calc_paper_pane

0x0b72,	// (0x0002adf5) grid_calc_pane

0xbe20,	// (0x000360a3) bg_list_pane_cp01

0xc55f,	// (0x000367e2) clock_g1

0xc55f,	// (0x000367e2) clock_g2

0x0001,

0xf0af,	// (0x00039332) clock_g

0xc569,	// (0x000367ec) clock_t1_ParamLimits

0xc569,	// (0x000367ec) clock_t1

0xc57d,	// (0x00036800) clock_t2_ParamLimits

0xc57d,	// (0x00036800) clock_t2

0xc57d,	// (0x00036800) clock_t3_ParamLimits

0xc57d,	// (0x00036800) clock_t3

0xc57d,	// (0x00036800) clock_t4_ParamLimits

0xc57d,	// (0x00036800) clock_t4

0xc569,	// (0x000367ec) clock_t5_ParamLimits

0xc569,	// (0x000367ec) clock_t5

0xc57d,	// (0x00036800) clock_t6_ParamLimits

0xc57d,	// (0x00036800) clock_t6

0xc57d,	// (0x00036800) clock_t7_ParamLimits

0xc57d,	// (0x00036800) clock_t7

0xc57d,	// (0x00036800) clock_t8_ParamLimits

0xc57d,	// (0x00036800) clock_t8

0xc57d,	// (0x00036800) clock_t9_ParamLimits

0xc57d,	// (0x00036800) clock_t9

0x0008,

0xf0b4,	// (0x00039337) clock_t_ParamLimits

0xf0b4,	// (0x00039337) clock_t

0xbe20,	// (0x000360a3) popup_clock_analogue_window_cp02

0xbe20,	// (0x000360a3) popup_clock_digital_window_cp01

0xc23d,	// (0x000364c0) listscroll_help_pane

0xc23d,	// (0x000364c0) phob_pre_status_pane

0xc591,	// (0x00036814) grid_qdial_pane

0xc4a6,	// (0x00036729) listscroll_mce_pane

0xc4a6,	// (0x00036729) bg_notes_pane

0xc59b,	// (0x0003681e) list_notes_pane

0x1da0,	// (0x0002c023) scroll_pane_cp06

0xc5a9,	// (0x0003682c) bg_calc_paper_pane

0xb23b,	// (0x000354be) list_calc_pane

0xc5bd,	// (0x00036840) bg_calc_display_pane

0x0ba0,	// (0x0002ae23) calc_display_pane_t1

0x0bb2,	// (0x0002ae35) calc_display_pane_t2

0xb255,	// (0x000354d8) calc_display_pane_t3

0x0002,

0xf0c7,	// (0x0003934a) calc_display_pane_t

0x0bc4,	// (0x0002ae47) cell_calc_pane_ParamLimits

0x0bc4,	// (0x0002ae47) cell_calc_pane

0xc5c9,	// (0x0003684c) bg_calc_paper_pane_g1

0xc5d5,	// (0x00036858) bg_calc_paper_pane_g2

0xc5e1,	// (0x00036864) bg_calc_paper_pane_g3

0xc5ed,	// (0x00036870) bg_calc_paper_pane_g4

0xc5f9,	// (0x0003687c) bg_calc_paper_pane_g5

0x1db4,	// (0x0002c037) bg_calc_paper_pane_g6

0x1dc3,	// (0x0002c046) bg_calc_paper_pane_g7

0x1dd2,	// (0x0002c055) bg_calc_paper_pane_g8

0x0007,

0xf0ce,	// (0x00039351) bg_calc_paper_pane_g

0x1de5,	// (0x0002c068) calc_bg_paper_pane_g9

0x1df8,	// (0x0002c07b) list_calc_item_pane_ParamLimits

0x1df8,	// (0x0002c07b) list_calc_item_pane

0xc605,	// (0x00036888) list_calc_item_pane_g1

0xb267,	// (0x000354ea) list_calc_item_pane_t1_ParamLimits

0xb267,	// (0x000354ea) list_calc_item_pane_t1

0x0bf9,	// (0x0002ae7c) list_calc_item_pane_t2_ParamLimits

0x0bf9,	// (0x0002ae7c) list_calc_item_pane_t2

0x0001,

0xf0df,	// (0x00039362) list_calc_item_pane_t_ParamLimits

0xf0df,	// (0x00039362) list_calc_item_pane_t

0xc4be,	// (0x00036741) cell_calc_pane_g1

0xc612,	// (0x00036895) grid_highlight_pane_cp02

0x1e0d,	// (0x0002c090) bg_calc_display_pane_g1

0x0c2b,	// (0x0002aeae) bg_calc_display_pane_g2

0xc634,	// (0x000368b7) bg_calc_display_pane_g3

0x0002,

0xf0e9,	// (0x0003936c) bg_calc_display_pane_g

0x0c35,	// (0x0002aeb8) cell_qdial_pane_ParamLimits

0x0c35,	// (0x0002aeb8) cell_qdial_pane

0x1e16,	// (0x0002c099) cell_qdial_pane_g1_ParamLimits

0x1e16,	// (0x0002c099) cell_qdial_pane_g1

0x1e2c,	// (0x0002c0af) cell_qdial_pane_g2_ParamLimits

0x1e2c,	// (0x0002c0af) cell_qdial_pane_g2

0xc63d,	// (0x000368c0) cell_qdial_pane_g3_ParamLimits

0xc63d,	// (0x000368c0) cell_qdial_pane_g3

0x0003,

0xf0f0,	// (0x00039373) cell_qdial_pane_g_ParamLimits

0xf0f0,	// (0x00039373) cell_qdial_pane_g

0x1e52,	// (0x0002c0d5) cell_qdial_pane_t1_ParamLimits

0x1e52,	// (0x0002c0d5) cell_qdial_pane_t1

0x1e6a,	// (0x0002c0ed) cell_qdial_pane_t2_ParamLimits

0x1e6a,	// (0x0002c0ed) cell_qdial_pane_t2

0x1e7d,	// (0x0002c100) cell_qdial_pane_t3_ParamLimits

0x1e7d,	// (0x0002c100) cell_qdial_pane_t3

0x0002,

0xf0f9,	// (0x0003937c) cell_qdial_pane_t_ParamLimits

0xf0f9,	// (0x0003937c) cell_qdial_pane_t

0xc23d,	// (0x000364c0) grid_highlight_pane_cp04

0xc649,	// (0x000368cc) thumbnail_qdial_pane_ParamLimits

0xc649,	// (0x000368cc) thumbnail_qdial_pane

0xc6a5,	// (0x00036928) list_help_pane

0xc6ae,	// (0x00036931) scroll_pane_cp02

0x1e90,	// (0x0002c113) help_list_pane_t1_ParamLimits

0x1e90,	// (0x0002c113) help_list_pane_t1

0xb279,	// (0x000354fc) bg_notes_pane_g2

0xb281,	// (0x00035504) bg_notes_pane_g3

0xb289,	// (0x0003550c) notes_bg_pane_g1

0xb291,	// (0x00035514) notes_bg_pane_g4

0xb299,	// (0x0003551c) notes_bg_pane_g5

0xb2a1,	// (0x00035524) notes_bg_pane_g6

0xb2a9,	// (0x0003552c) notes_bg_pane_g7

0xb2b1,	// (0x00035534) notes_bg_pane_g8

0xb2b9,	// (0x0003553c) notes_bg_pane_g9

0x0006,

0xf117,	// (0x0003939a) notes_bg_pane_g

0x1eaf,	// (0x0002c132) list_notes_text_pane_ParamLimits

0x1eaf,	// (0x0002c132) list_notes_text_pane

0xc6b7,	// (0x0003693a) list_notes_text_pane_g1

0xc6c0,	// (0x00036943) list_notes_text_pane_t1

0x1ec5,	// (0x0002c148) listscroll_cale_week_pane

0x1ef1,	// (0x0002c174) bg_cale_heading_pane

0xc6e8,	// (0x0003696b) bg_cale_pane_cp01

0x1f09,	// (0x0002c18c) cale_week_corner_pane

0x1f28,	// (0x0002c1ab) cale_week_day_heading_pane

0x1f45,	// (0x0002c1c8) cale_week_scroll_pane_g1

0x1f58,	// (0x0002c1db) cale_week_scroll_pane_g2

0x1f70,	// (0x0002c1f3) cale_week_scroll_pane_g3

0x1f88,	// (0x0002c20b) cale_week_scroll_pane_g4

0x1fa0,	// (0x0002c223) cale_week_scroll_pane_g5

0x1fc0,	// (0x0002c243) cale_week_scroll_pane_g6

0x1fe0,	// (0x0002c263) cale_week_scroll_pane_g7

0x2000,	// (0x0002c283) cale_week_scroll_pane_g8

0x2024,	// (0x0002c2a7) cale_week_scroll_pane_g9

0x203c,	// (0x0002c2bf) cale_week_scroll_pane_g10

0x2054,	// (0x0002c2d7) cale_week_scroll_pane_g11

0x206c,	// (0x0002c2ef) cale_week_scroll_pane_g12

0x2084,	// (0x0002c307) cale_week_scroll_pane_g13

0x2084,	// (0x0002c307) cale_week_scroll_pane_g14

0x2084,	// (0x0002c307) cale_week_scroll_pane_g15

0x000f,

0xf126,	// (0x000393a9) cale_week_scroll_pane_g

0x20c0,	// (0x0002c343) cale_week_time_pane

0x20e4,	// (0x0002c367) grid_cale_week_pane

0xc717,	// (0x0003699a) scroll_pane_cp08

0x210a,	// (0x0002c38d) cell_cale_week_pane_ParamLimits

0x210a,	// (0x0002c38d) cell_cale_week_pane

0x2198,	// (0x0002c41b) cale_week_day_heading_pane_t1

0x21c2,	// (0x0002c445) cale_week_day_heading_pane_t2

0x21f1,	// (0x0002c474) cale_week_day_heading_pane_t3

0x2220,	// (0x0002c4a3) cale_week_day_heading_pane_t4

0x224f,	// (0x0002c4d2) cale_week_day_heading_pane_t5

0x2286,	// (0x0002c509) cale_week_day_heading_pane_t6

0x22bd,	// (0x0002c540) cale_week_day_heading_pane_t7

0x0006,

0xf147,	// (0x000393ca) cale_week_day_heading_pane_t

0xc734,	// (0x000369b7) bg_cale_side_pane

0x0c49,	// (0x0002aecc) cale_week_time_pane_t1

0x0c63,	// (0x0002aee6) cale_week_time_pane_t2

0x0c7d,	// (0x0002af00) cale_week_time_pane_t3

0x0c97,	// (0x0002af1a) cale_week_time_pane_t4

0x0cb1,	// (0x0002af34) cale_week_time_pane_t5

0x0ccb,	// (0x0002af4e) cale_week_time_pane_t6

0x0ce5,	// (0x0002af68) cale_week_time_pane_t7

0x0cff,	// (0x0002af82) cale_week_time_pane_t8

0x0007,

0xf156,	// (0x000393d9) cale_week_time_pane_t

0x22e7,	// (0x0002c56a) cell_cale_week_pane_g2

0x230b,	// (0x0002c58e) cell_cale_week_pane_g3_ParamLimits

0x230b,	// (0x0002c58e) cell_cale_week_pane_g3

0xc742,	// (0x000369c5) grid_highlight_pane_cp07

0xc74a,	// (0x000369cd) listscroll_gms_pane

0xc754,	// (0x000369d7) grid_gms_pane

0xc75d,	// (0x000369e0) listscroll_gms_pane_g1

0xc765,	// (0x000369e8) listscroll_gms_pane_g2

0x0001,

0xf167,	// (0x000393ea) listscroll_gms_pane_g

0x2323,	// (0x0002c5a6) scroll_pane_cp010

0x232e,	// (0x0002c5b1) cell_gms_pane_ParamLimits

0x232e,	// (0x0002c5b1) cell_gms_pane

0x2340,	// (0x0002c5c3) cell_gms_pane_g1

0xc76d,	// (0x000369f0) cell_gms_pane_g2

0xc6b7,	// (0x0003693a) cell_gms_pane_g3

0xc775,	// (0x000369f8) cell_gms_pane_g4

0x0003,

0xf16c,	// (0x000393ef) cell_gms_pane_g

0xc77e,	// (0x00036a01) grid_highlight_pane_cp09

0x4001,	// (0x0002e284) phob_pre_status_pane_g1

0x4009,	// (0x0002e28c) phob_pre_status_pane_g2

0x4011,	// (0x0002e294) phob_pre_status_pane_g3

0x4019,	// (0x0002e29c) phob_pre_status_pane_g4

0x0004,

0xf52e,	// (0x000397b1) phob_pre_status_pane_g

0x4029,	// (0x0002e2ac) phob_pre_status_pane_t1

0x4037,	// (0x0002e2ba) phob_pre_status_pane_t2

0x4047,	// (0x0002e2ca) phob_pre_status_pane_t3

0x0002,

0xf539,	// (0x000397bc) phob_pre_status_pane_t

0xc786,	// (0x00036a09) bg_list_pane_cp05

0x2350,	// (0x0002c5d3) grid_vorec_pane

0x2358,	// (0x0002c5db) vorec_t1

0x2366,	// (0x0002c5e9) vorec_t2

0x2374,	// (0x0002c5f7) vorec_t3

0x2382,	// (0x0002c605) vorec_t4

0xb9ee,	// (0x00035c71) vorec_t5

0x1cd2,	// (0x0002bf55) vorec_t6

0x0004,

0xf175,	// (0x000393f8) vorec_t

0x1ce0,	// (0x0002bf63) wait_bar_pane_cp01

0x239e,	// (0x0002c621) cell_vorec_pane_ParamLimits

0x239e,	// (0x0002c621) cell_vorec_pane

0xb2c1,	// (0x00035544) cell_vorec_pane_g1

0xc23d,	// (0x000364c0) grid_highlight_pane_cp05

0xc40e,	// (0x00036691) cams_zoom_pane

0xc40e,	// (0x00036691) image_vga_pane

0xc521,	// (0x000367a4) main_camera_pane_g1

0xc521,	// (0x000367a4) main_camera_pane_g2

0xc521,	// (0x000367a4) main_camera_pane_g3

0xc521,	// (0x000367a4) main_camera_pane_g4

0xc521,	// (0x000367a4) main_camera_pane_g5

0xc521,	// (0x000367a4) main_camera_pane_g6

0xc521,	// (0x000367a4) main_camera_pane_g7

0x0007,

0xf180,	// (0x00039403) main_camera_pane_g

0xc569,	// (0x000367ec) main_camera_pane_t1

0xc569,	// (0x000367ec) main_camera_pane_t2

0x0001,

0xf191,	// (0x00039414) main_camera_pane_t

0x23c5,	// (0x0002c648) cams_zoom_pane_cp_ParamLimits

0x23c5,	// (0x0002c648) cams_zoom_pane_cp

0x23f9,	// (0x0002c67c) image_cif_pane_ParamLimits

0x23f9,	// (0x0002c67c) image_cif_pane

0xbe20,	// (0x000360a3) image_subqcif_pane

0x240b,	// (0x0002c68e) main_video_pane_g1_ParamLimits

0x240b,	// (0x0002c68e) main_video_pane_g1

0x2439,	// (0x0002c6bc) main_video_pane_g2_ParamLimits

0x2439,	// (0x0002c6bc) main_video_pane_g2

0x2473,	// (0x0002c6f6) main_video_pane_g3_ParamLimits

0x2473,	// (0x0002c6f6) main_video_pane_g3

0x2473,	// (0x0002c6f6) main_video_pane_g4_ParamLimits

0x2473,	// (0x0002c6f6) main_video_pane_g4

0x24a7,	// (0x0002c72a) main_video_pane_g5_ParamLimits

0x24a7,	// (0x0002c72a) main_video_pane_g5

0xc78e,	// (0x00036a11) main_video_pane_g6_ParamLimits

0xc78e,	// (0x00036a11) main_video_pane_g6

0x0006,

0xf196,	// (0x00039419) main_video_pane_g_ParamLimits

0xf196,	// (0x00039419) main_video_pane_g

0x24c3,	// (0x0002c746) main_video_pane_t1_ParamLimits

0x24c3,	// (0x0002c746) main_video_pane_t1

0xc55f,	// (0x000367e2) cams_zoom_pane_g1

0xc55f,	// (0x000367e2) cams_zoom_pane_g2

0xc55f,	// (0x000367e2) cams_zoom_pane_g3

0xc55f,	// (0x000367e2) cams_zoom_pane_g4

0x0003,

0xf1a5,	// (0x00039428) cams_zoom_pane_g

0xc40e,	// (0x00036691) grid_cams_pane

0xc40e,	// (0x00036691) linegrid_cams_pane

0x2507,	// (0x0002c78a) cell_cams_pane_ParamLimits

0x2507,	// (0x0002c78a) cell_cams_pane

0xbe20,	// (0x000360a3) cams_burst_image_pane

0xc55f,	// (0x000367e2) cell_cams_pane_g1

0xbe20,	// (0x000360a3) grid_highlight_pane_cp03

0xc4be,	// (0x00036741) mp_bg_pane_g1

0xbe20,	// (0x000360a3) bg_list_pane_cp03

0xbe20,	// (0x000360a3) bg_mp_pane

0xbe20,	// (0x000360a3) grid_mp_pane

0xc55f,	// (0x000367e2) media_player_g1

0xccc1,	// (0x00036f44) media_player_t1

0xccc1,	// (0x00036f44) media_player_t2

0xccc1,	// (0x00036f44) media_player_t3

0xccc1,	// (0x00036f44) media_player_t4

0xccc1,	// (0x00036f44) media_player_t5

0xccc1,	// (0x00036f44) media_player_t6

0xccc1,	// (0x00036f44) media_player_t7

0x0006,

0xf518,	// (0x0003979b) media_player_t

0xbe20,	// (0x000360a3) wait_bar_pane_cp02

0xf4fd,	// (0x00039780) main_usb_pane_t

0xcf2d,	// (0x000371b0) cell_mp_pane

0xc4be,	// (0x00036741) cell_mp_pane_g1

0xc23d,	// (0x000364c0) grid_highlight_pane_cp06

0xc7a8,	// (0x00036a2b) grid_skin_colour_pane

0xc7b0,	// (0x00036a33) list_highlight_pane_cp03

0x251c,	// (0x0002c79f) skin_g1

0xc7b8,	// (0x00036a3b) skin_t1

0xc7c7,	// (0x00036a4a) skin_t2

0x0001,

0xf1d3,	// (0x00039456) skin_t

0x2524,	// (0x0002c7a7) cell_skin_colour_pane_ParamLimits

0x2524,	// (0x0002c7a7) cell_skin_colour_pane

0xc7d5,	// (0x00036a58) cell_skin_colour_pane_g1

0x259d,	// (0x0002c820) call_video_g1_ParamLimits

0x259d,	// (0x0002c820) call_video_g1

0x25b9,	// (0x0002c83c) call_video_g2_ParamLimits

0x25b9,	// (0x0002c83c) call_video_g2

0x0001,

0xf1d8,	// (0x0003945b) call_video_g_ParamLimits

0xf1d8,	// (0x0003945b) call_video_g

0x260b,	// (0x0002c88e) call_video_uplink_pane_cp1_ParamLimits

0x260b,	// (0x0002c88e) call_video_uplink_pane_cp1

0xc7e7,	// (0x00036a6a) call_video_uplink_pane_cp2

0x26aa,	// (0x0002c92d) video_down_crop_pane_ParamLimits

0x26aa,	// (0x0002c92d) video_down_crop_pane

0x2793,	// (0x0002ca16) video_down_pane_ParamLimits

0x2793,	// (0x0002ca16) video_down_pane

0xc7ef,	// (0x00036a72) video_down_subqcif_pane_ParamLimits

0xc7ef,	// (0x00036a72) video_down_subqcif_pane

0xc807,	// (0x00036a8a) video_down_subqcif_pane_cp_ParamLimits

0xc807,	// (0x00036a8a) video_down_subqcif_pane_cp

0xc82d,	// (0x00036ab0) im_reading_pane_ParamLimits

0xc82d,	// (0x00036ab0) im_reading_pane

0x28a3,	// (0x0002cb26) im_writing_pane_ParamLimits

0x28a3,	// (0x0002cb26) im_writing_pane

0x28b9,	// (0x0002cb3c) im_reading_pane_t1

0xc847,	// (0x00036aca) list_im_pane

0xc858,	// (0x00036adb) scroll_pane_cp07

0x28f3,	// (0x0002cb76) im_writing_pane_t1_ParamLimits

0x28f3,	// (0x0002cb76) im_writing_pane_t1

0xc871,	// (0x00036af4) im_writing_pane_t2_ParamLimits

0xc871,	// (0x00036af4) im_writing_pane_t2

0x0001,

0xf1e2,	// (0x00039465) im_writing_pane_t_ParamLimits

0xf1e2,	// (0x00039465) im_writing_pane_t

0xc23d,	// (0x000364c0) input_focus_pane_cp04

0xc23d,	// (0x000364c0) input_focus_pane_cp05

0x2908,	// (0x0002cb8b) list_im_single_pane_ParamLimits

0x2908,	// (0x0002cb8b) list_im_single_pane

0x291d,	// (0x0002cba0) list_single_im_pane_t1

0xc786,	// (0x00036a09) blid_accuracy_pane

0xc786,	// (0x00036a09) blid_compass_pane

0xe43c,	// (0x000386bf) main_location_t1

0xe43c,	// (0x000386bf) main_location_t2

0xe43c,	// (0x000386bf) main_location_t3

0x0002,

0xf527,	// (0x000397aa) main_location_t

0xc23d,	// (0x000364c0) aid_levels_location

0xc4be,	// (0x00036741) blid_accuracy_pane_g1

0xc4be,	// (0x00036741) blid_accuracy_pane_g2

0x0001,

0xf231,	// (0x000394b4) blid_accuracy_pane_g

0xc8b9,	// (0x00036b3c) wml_content_pane

0xc8f7,	// (0x00036b7a) wml_button_pane_ParamLimits

0xc8f7,	// (0x00036b7a) wml_button_pane

0x292c,	// (0x0002cbaf) wml_list_single_large_pane_ParamLimits

0x292c,	// (0x0002cbaf) wml_list_single_large_pane

0x2941,	// (0x0002cbc4) wml_list_single_medium_pane_ParamLimits

0x2941,	// (0x0002cbc4) wml_list_single_medium_pane

0x2958,	// (0x0002cbdb) wml_list_single_small_pane_ParamLimits

0x2958,	// (0x0002cbdb) wml_list_single_small_pane

0xc90b,	// (0x00036b8e) wml_selection_box_pane_ParamLimits

0xc90b,	// (0x00036b8e) wml_selection_box_pane

0xc91e,	// (0x00036ba1) wml_list_single_pane_t1

0xc92d,	// (0x00036bb0) wml_list_single_medium_pane_t1

0xc93c,	// (0x00036bbf) wml_list_single_large_pane_t1

0xc94b,	// (0x00036bce) input_focus_pane_cp02_ParamLimits

0xc94b,	// (0x00036bce) input_focus_pane_cp02

0xc95e,	// (0x00036be1) wml_selection_box_pane_g1

0xc967,	// (0x00036bea) wml_selection_box_pane_t1_ParamLimits

0xc967,	// (0x00036bea) wml_selection_box_pane_t1

0xc4a6,	// (0x00036729) bg_wml_button_pane_ParamLimits

0xc4a6,	// (0x00036729) bg_wml_button_pane

0xc97f,	// (0x00036c02) wml_button_pane_g1

0xc987,	// (0x00036c0a) wml_button_pane_t1

0xc97f,	// (0x00036c02) wml_button_bg_pane_g1

0xc997,	// (0x00036c1a) wml_button_bg_pane_g2

0xc99f,	// (0x00036c22) wml_button_bg_pane_g3

0xc9a7,	// (0x00036c2a) wml_button_bg_pane_g4

0xc9af,	// (0x00036c32) wml_button_bg_pane_g5

0xc9b7,	// (0x00036c3a) wml_button_bg_pane_g6

0xc9bf,	// (0x00036c42) wml_button_bg_pane_g7

0xc9c7,	// (0x00036c4a) wml_button_bg_pane_g8

0xc9cf,	// (0x00036c52) wml_button_bg_pane_g9

0x0008,

0xf1e7,	// (0x0003946a) wml_button_bg_pane_g

0x2971,	// (0x0002cbf4) bg_list_pane_cp02

0xc9d7,	// (0x00036c5a) mce_header_pane_ParamLimits

0xc9d7,	// (0x00036c5a) mce_header_pane

0xc9ed,	// (0x00036c70) mce_icon_pane

0xc9ed,	// (0x00036c70) mce_image_pane

0xc9f6,	// (0x00036c79) mce_text_pane_ParamLimits

0xc9f6,	// (0x00036c79) mce_text_pane

0x2979,	// (0x0002cbfc) scroll_pane_cp03

0xc8ef,	// (0x00036b72) scroll_pane_cp04

0xca09,	// (0x00036c8c) scroll_pane_cp05_ParamLimits

0xca09,	// (0x00036c8c) scroll_pane_cp05

0x2983,	// (0x0002cc06) mce_header_field_pane_ParamLimits

0x2983,	// (0x0002cc06) mce_header_field_pane

0x299a,	// (0x0002cc1d) mce_header_field_pane_2_ParamLimits

0x299a,	// (0x0002cc1d) mce_header_field_pane_2

0x29b0,	// (0x0002cc33) mce_header_field_pane_3

0x29b8,	// (0x0002cc3b) list_single_mce_message_pane_ParamLimits

0x29b8,	// (0x0002cc3b) list_single_mce_message_pane

0x29ce,	// (0x0002cc51) list_single_mce_smart_pane_ParamLimits

0x29ce,	// (0x0002cc51) list_single_mce_smart_pane

0xca15,	// (0x00036c98) input_focus_pane_cp03

0xca1e,	// (0x00036ca1) list_header_data_pane

0x29ef,	// (0x0002cc72) mce_header_field_pane_t1

0x29ff,	// (0x0002cc82) list_single_mce_header_pane_ParamLimits

0x29ff,	// (0x0002cc82) list_single_mce_header_pane

0xca26,	// (0x00036ca9) list_single_mce_header_pane_t1

0xca35,	// (0x00036cb8) list_single_mce_message_pane_g1

0xca3d,	// (0x00036cc0) list_single_mce_message_pane_t1

0x2a39,	// (0x0002ccbc) bg_cale_heading_pane_cp01_ParamLimits

0x2a39,	// (0x0002ccbc) bg_cale_heading_pane_cp01

0xca4b,	// (0x00036cce) bg_cale_pane_cp02_ParamLimits

0xca4b,	// (0x00036cce) bg_cale_pane_cp02

0x2a73,	// (0x0002ccf6) cale_month_corner_pane

0x2a92,	// (0x0002cd15) cale_month_day_heading_pane_ParamLimits

0x2a92,	// (0x0002cd15) cale_month_day_heading_pane

0x2ae4,	// (0x0002cd67) cale_month_pane_g1_ParamLimits

0x2ae4,	// (0x0002cd67) cale_month_pane_g1

0x2b13,	// (0x0002cd96) cale_month_pane_g2_ParamLimits

0x2b13,	// (0x0002cd96) cale_month_pane_g2

0x2b43,	// (0x0002cdc6) cale_month_pane_g3_ParamLimits

0x2b43,	// (0x0002cdc6) cale_month_pane_g3

0x2b7f,	// (0x0002ce02) cale_month_pane_g4_ParamLimits

0x2b7f,	// (0x0002ce02) cale_month_pane_g4

0x2bbb,	// (0x0002ce3e) cale_month_pane_g5_ParamLimits

0x2bbb,	// (0x0002ce3e) cale_month_pane_g5

0x2c03,	// (0x0002ce86) cale_month_pane_g6_ParamLimits

0x2c03,	// (0x0002ce86) cale_month_pane_g6

0x2c4f,	// (0x0002ced2) cale_month_pane_g7_ParamLimits

0x2c4f,	// (0x0002ced2) cale_month_pane_g7

0x2c9f,	// (0x0002cf22) cale_month_pane_g8_ParamLimits

0x2c9f,	// (0x0002cf22) cale_month_pane_g8

0x2cf3,	// (0x0002cf76) cale_month_pane_g9_ParamLimits

0x2cf3,	// (0x0002cf76) cale_month_pane_g9

0x2d45,	// (0x0002cfc8) cale_month_pane_g10_ParamLimits

0x2d45,	// (0x0002cfc8) cale_month_pane_g10

0x2d97,	// (0x0002d01a) cale_month_pane_g11_ParamLimits

0x2d97,	// (0x0002d01a) cale_month_pane_g11

0x2de9,	// (0x0002d06c) cale_month_pane_g12_ParamLimits

0x2de9,	// (0x0002d06c) cale_month_pane_g12

0x2e3b,	// (0x0002d0be) cale_month_pane_g13_ParamLimits

0x2e3b,	// (0x0002d0be) cale_month_pane_g13

0x000c,

0xf1fa,	// (0x0003947d) cale_month_pane_g_ParamLimits

0xf1fa,	// (0x0003947d) cale_month_pane_g

0x2e8d,	// (0x0002d110) cale_month_week_pane

0x2eb1,	// (0x0002d134) grid_cale_month_pane_ParamLimits

0x2eb1,	// (0x0002d134) grid_cale_month_pane

0x2efa,	// (0x0002d17d) cale_month_day_heading_pane_t1

0x2f3c,	// (0x0002d1bf) cale_month_day_heading_pane_t2

0x2f71,	// (0x0002d1f4) cale_month_day_heading_pane_t3

0x2fa6,	// (0x0002d229) cale_month_day_heading_pane_t4

0x2fe3,	// (0x0002d266) cale_month_day_heading_pane_t5

0x3028,	// (0x0002d2ab) cale_month_day_heading_pane_t6

0x306d,	// (0x0002d2f0) cale_month_day_heading_pane_t7

0x0006,

0xf215,	// (0x00039498) cale_month_day_heading_pane_t

0xc734,	// (0x000369b7) bg_cale_side_pane_cp01

0x30ba,	// (0x0002d33d) cale_month_week_pane_t1

0x30d3,	// (0x0002d356) cale_month_week_pane_t2

0x30ec,	// (0x0002d36f) cale_month_week_pane_t3

0x3105,	// (0x0002d388) cale_month_week_pane_t4

0x311e,	// (0x0002d3a1) cale_month_week_pane_t5

0x3137,	// (0x0002d3ba) cale_month_week_pane_t6

0x0005,

0xf224,	// (0x000394a7) cale_month_week_pane_t

0x3150,	// (0x0002d3d3) cell_cale_month_pane_ParamLimits

0x3150,	// (0x0002d3d3) cell_cale_month_pane

0xb2cb,	// (0x0003554e) cell_cale_month_pane_g1

0x0d1f,	// (0x0002afa2) cell_cale_month_pane_t1_ParamLimits

0x0d1f,	// (0x0002afa2) cell_cale_month_pane_t1

0xc742,	// (0x000369c5) grid_highlight_pane_cp08

0xc4be,	// (0x00036741) main_smil_g1

0x327e,	// (0x0002d501) smil_status_pane

0xca8a,	// (0x00036d0d) smil_text_pane

0xe314,	// (0x00038597) bg_popup_call3_rect_pane_g8

0xe31c,	// (0x0003859f) bg_popup_call3_rect_pane_g9

0x0008,

0xf4ad,	// (0x00039730) bg_popup_call3_rect_pane_g

0xe505,	// (0x00038788) smil_status_volume_pane_g1

0xca94,	// (0x00036d17) smil_status_pane_t1

0xb411,	// (0x00035694) volume_smil_pane

0xcaab,	// (0x00036d2e) list_smil_text_pane

0x3293,	// (0x0002d516) scroll_pane_cp011

0x329e,	// (0x0002d521) smil_text_list_pane_t1_ParamLimits

0x329e,	// (0x0002d521) smil_text_list_pane_t1

0xb2d7,	// (0x0003555a) aid_volume_smil_ParamLimits

0xb2d7,	// (0x0003555a) aid_volume_smil

0xc4be,	// (0x00036741) smil_volume_pane_g1

0xc4be,	// (0x00036741) smil_volume_pane_g2

0x0001,

0xf231,	// (0x000394b4) smil_volume_pane_g

0x1ec5,	// (0x0002c148) listscroll_cale_day_pane

0xcab5,	// (0x00036d38) bg_cale_pane

0xcacd,	// (0x00036d50) list_cale_pane

0xcaf0,	// (0x00036d73) scroll_pane_cp09

0xcb01,	// (0x00036d84) cale_bg_pane_g1

0xcb09,	// (0x00036d8c) cale_bg_pane_g2

0xcb11,	// (0x00036d94) cale_bg_pane_g3

0xcb19,	// (0x00036d9c) cale_bg_pane_g4

0xcb21,	// (0x00036da4) cale_bg_pane_g5

0xcb29,	// (0x00036dac) cale_bg_pane_g6

0xcb31,	// (0x00036db4) cale_bg_pane_g7

0xcb39,	// (0x00036dbc) cale_bg_pane_g8

0xcb41,	// (0x00036dc4) cale_bg_pane_g9

0x0008,

0xf236,	// (0x000394b9) cale_bg_pane_g

0x32ea,	// (0x0002d56d) list_cale_time_pane_ParamLimits

0x32ea,	// (0x0002d56d) list_cale_time_pane

0xcb49,	// (0x00036dcc) list_cale_time_pane_g1_ParamLimits

0xcb49,	// (0x00036dcc) list_cale_time_pane_g1

0xcb55,	// (0x00036dd8) list_cale_time_pane_g2_ParamLimits

0xcb55,	// (0x00036dd8) list_cale_time_pane_g2

0x3300,	// (0x0002d583) list_cale_time_pane_g3_ParamLimits

0x3300,	// (0x0002d583) list_cale_time_pane_g3

0x330e,	// (0x0002d591) list_cale_time_pane_g4_ParamLimits

0x330e,	// (0x0002d591) list_cale_time_pane_g4

0x331c,	// (0x0002d59f) list_cale_time_pane_g5_ParamLimits

0x331c,	// (0x0002d59f) list_cale_time_pane_g5

0x0005,

0xf249,	// (0x000394cc) list_cale_time_pane_g_ParamLimits

0xf249,	// (0x000394cc) list_cale_time_pane_g

0xcb6f,	// (0x00036df2) list_cale_time_pane_t1_ParamLimits

0xcb6f,	// (0x00036df2) list_cale_time_pane_t1

0xcb97,	// (0x00036e1a) list_cale_time_pane_t2_ParamLimits

0xcb97,	// (0x00036e1a) list_cale_time_pane_t2

0x35b5,	// (0x0002d838) aid_blid_cardinal_pane

0x35f3,	// (0x0002d876) compass_pane_t4

0xcbbf,	// (0x00036e42) list_cale_time_pane_t4_ParamLimits

0xcbbf,	// (0x00036e42) list_cale_time_pane_t4

0x3601,	// (0x0002d884) compass_pane_t5

0x360f,	// (0x0002d892) compass_pane_t6

0x361d,	// (0x0002d8a0) compass_pane_t7

0xd047,	// (0x000372ca) navi_pane_cc_t1

0xd224,	// (0x000374a7) aid_phob_thumbnail_center_pane

0x3a53,	// (0x0002dcd6) main_postcard_pane_g4_ParamLimits

0x0002,

0xf256,	// (0x000394d9) list_cale_time_pane_t_ParamLimits

0xf256,	// (0x000394d9) list_cale_time_pane_t

0xbe94,	// (0x00036117) bg_popup_window_pane_cp02_ParamLimits

0xbe94,	// (0x00036117) bg_popup_window_pane_cp02

0xcbe7,	// (0x00036e6a) heading_pane_cp01_ParamLimits

0xcbe7,	// (0x00036e6a) heading_pane_cp01

0xcbf3,	// (0x00036e76) loc_req_pane_ParamLimits

0xcbf3,	// (0x00036e76) loc_req_pane

0xcc03,	// (0x00036e86) loc_type_pane_ParamLimits

0xcc03,	// (0x00036e86) loc_type_pane

0xcc15,	// (0x00036e98) loc_type_pane_t1_ParamLimits

0xcc15,	// (0x00036e98) loc_type_pane_t1

0xcc27,	// (0x00036eaa) loc_type_pane_t2_ParamLimits

0xcc27,	// (0x00036eaa) loc_type_pane_t2

0xcc39,	// (0x00036ebc) loc_type_pane_t3_ParamLimits

0xcc39,	// (0x00036ebc) loc_type_pane_t3

0x0002,

0xf25d,	// (0x000394e0) loc_type_pane_t_ParamLimits

0xf25d,	// (0x000394e0) loc_type_pane_t

0xcc4b,	// (0x00036ece) list_loc_req_pane

0xcc55,	// (0x00036ed8) scroll_pane_cp012

0x332a,	// (0x0002d5ad) list_single_loc_request_popup_menu_pane_ParamLimits

0x332a,	// (0x0002d5ad) list_single_loc_request_popup_menu_pane

0xcc60,	// (0x00036ee3) list_single_loc_request_popup_menu_pane_g1_ParamLimits

0xcc60,	// (0x00036ee3) list_single_loc_request_popup_menu_pane_g1

0xcc6c,	// (0x00036eef) list_single_loc_request_popup_menu_pane_g2_ParamLimits

0xcc6c,	// (0x00036eef) list_single_loc_request_popup_menu_pane_g2

0x0001,

0xf264,	// (0x000394e7) list_single_loc_request_popup_menu_pane_g_ParamLimits

0xf264,	// (0x000394e7) list_single_loc_request_popup_menu_pane_g

0xcc78,	// (0x00036efb) list_single_loc_request_popup_menu_pane_t1_ParamLimits

0xcc78,	// (0x00036efb) list_single_loc_request_popup_menu_pane_t1

0xc4a6,	// (0x00036729) bg_popup_window_pane_cp03_ParamLimits

0xc4a6,	// (0x00036729) bg_popup_window_pane_cp03

0xcc8e,	// (0x00036f11) heading_loc_req_pane_ParamLimits

0xcc8e,	// (0x00036f11) heading_loc_req_pane

0x3337,	// (0x0002d5ba) popup_dyc_status_message_window_g1_ParamLimits

0x3337,	// (0x0002d5ba) popup_dyc_status_message_window_g1

0x334b,	// (0x0002d5ce) popup_dyc_status_message_window_t1_ParamLimits

0x334b,	// (0x0002d5ce) popup_dyc_status_message_window_t1

0x3360,	// (0x0002d5e3) popup_dyc_status_message_window_t2_ParamLimits

0x3360,	// (0x0002d5e3) popup_dyc_status_message_window_t2

0x3375,	// (0x0002d5f8) popup_dyc_status_message_window_t3_ParamLimits

0x3375,	// (0x0002d5f8) popup_dyc_status_message_window_t3

0x0002,

0xf269,	// (0x000394ec) popup_dyc_status_message_window_t_ParamLimits

0xf269,	// (0x000394ec) popup_dyc_status_message_window_t

0xc23d,	// (0x000364c0) bg_heading_pane_cp01

0xcc9a,	// (0x00036f1d) heading_loc_req_pane_g1

0xcca2,	// (0x00036f25) heading_loc_req_pane_g2

0xccaa,	// (0x00036f2d) heading_loc_req_pane_g3

0x0002,

0xf270,	// (0x000394f3) heading_loc_req_pane_g

0xccb2,	// (0x00036f35) heading_loc_req_pane_t1

0xccd1,	// (0x00036f54) bg_popup_sub_pane_cp01_ParamLimits

0xccd1,	// (0x00036f54) bg_popup_sub_pane_cp01

0xccdf,	// (0x00036f62) popup_cale_events_window_g1_ParamLimits

0xccdf,	// (0x00036f62) popup_cale_events_window_g1

0xccff,	// (0x00036f82) popup_cale_events_window_g2_ParamLimits

0xccff,	// (0x00036f82) popup_cale_events_window_g2

0x0001,

0xf292,	// (0x00039515) popup_cale_events_window_g_ParamLimits

0xf292,	// (0x00039515) popup_cale_events_window_g

0xcd1f,	// (0x00036fa2) popup_cale_events_window_t1_ParamLimits

0xcd1f,	// (0x00036fa2) popup_cale_events_window_t1

0xcd31,	// (0x00036fb4) popup_cale_events_window_t2_ParamLimits

0xcd31,	// (0x00036fb4) popup_cale_events_window_t2

0xcd6f,	// (0x00036ff2) popup_cale_events_window_t3_ParamLimits

0xcd6f,	// (0x00036ff2) popup_cale_events_window_t3

0xcda9,	// (0x0003702c) popup_cale_events_window_t4_ParamLimits

0xcda9,	// (0x0003702c) popup_cale_events_window_t4

0x0003,

0xf297,	// (0x0003951a) popup_cale_events_window_t_ParamLimits

0xf297,	// (0x0003951a) popup_cale_events_window_t

0x33a9,	// (0x0002d62c) call_type_pane

0x33b9,	// (0x0002d63c) popup_call_status_window_g1

0x33cd,	// (0x0002d650) popup_call_status_window_g2

0x33e1,	// (0x0002d664) popup_call_status_window_g3

0x0002,

0xf2a0,	// (0x00039523) popup_call_status_window_g

0xcddf,	// (0x00037062) call_type_pane_g1

0xcde8,	// (0x0003706b) call_type_pane_g2

0x0001,

0xf2a7,	// (0x0003952a) call_type_pane_g

0xc23d,	// (0x000364c0) bg_popup_sub_pane_cp02

0xcdf1,	// (0x00037074) listscroll_popup_wml_pane

0xcdf9,	// (0x0003707c) list_wml_pane

0xce03,	// (0x00037086) scroll_pane_cp013

0xce0e,	// (0x00037091) list_single_graphic_popup_wml_pane_ParamLimits

0xce0e,	// (0x00037091) list_single_graphic_popup_wml_pane

0xc4be,	// (0x00036741) list_single_graphic_popup_wml_pane_g1

0xce22,	// (0x000370a5) list_single_graphic_popup_wml_pane_g2

0x0001,

0xf2ac,	// (0x0003952f) list_single_graphic_popup_wml_pane_g

0xce2a,	// (0x000370ad) list_single_graphic_popup_wml_pane_t1

0xce40,	// (0x000370c3) aid_call_pane

0xc49e,	// (0x00036721) popup_clock_analogue_window_g1

0xc49e,	// (0x00036721) popup_clock_analogue_window_g2

0xb2f9,	// (0x0003557c) popup_clock_analogue_window_g3

0xb2f9,	// (0x0003557c) popup_clock_analogue_window_g4

0xc4be,	// (0x00036741) popup_clock_analogue_window_g5

0x0004,

0xf2b1,	// (0x00039534) popup_clock_analogue_window_g

0xb301,	// (0x00035584) popup_clock_analogue_window_t1

0xb30f,	// (0x00035592) clock_digital_number_pane_ParamLimits

0xb30f,	// (0x00035592) clock_digital_number_pane

0xb31b,	// (0x0003559e) clock_digital_number_pane_cp02_ParamLimits

0xb31b,	// (0x0003559e) clock_digital_number_pane_cp02

0xb327,	// (0x000355aa) clock_digital_number_pane_cp03_ParamLimits

0xb327,	// (0x000355aa) clock_digital_number_pane_cp03

0xb333,	// (0x000355b6) clock_digital_number_pane_cp04_ParamLimits

0xb333,	// (0x000355b6) clock_digital_number_pane_cp04

0xb33f,	// (0x000355c2) clock_digital_separator_pane_ParamLimits

0xb33f,	// (0x000355c2) clock_digital_separator_pane

0xb34b,	// (0x000355ce) popup_clock_digital_window_t1

0xc4be,	// (0x00036741) clock_digital_number_pane_g1

0xc4be,	// (0x00036741) clock_digital_number_pane_g2

0x0001,

0xf231,	// (0x000394b4) clock_digital_number_pane_g

0xc4be,	// (0x00036741) clock_digital_separator_pane_g1

0xc4be,	// (0x00036741) clock_digital_separator_pane_g2

0x0001,

0xf231,	// (0x000394b4) clock_digital_separator_pane_g

0xc23d,	// (0x000364c0) bg_popup_window_pane_cp04

0xce48,	// (0x000370cb) heading_pane_cp03

0xc786,	// (0x00036a09) listscroll_popup_gms_pane

0xc23d,	// (0x000364c0) grid_large_graphic_popup_pane

0xce51,	// (0x000370d4) listscroll_popup_gms_pane_g1

0xce5a,	// (0x000370dd) listscroll_popup_gms_pane_g2

0x0001,

0xf2bc,	// (0x0003953f) listscroll_popup_gms_pane_g

0xce63,	// (0x000370e6) scroll_pane_cp014

0xc513,	// (0x00036796) cell_large_graphic_popup_pane_ParamLimits

0xc513,	// (0x00036796) cell_large_graphic_popup_pane

0xc521,	// (0x000367a4) cell_large_graphic_popup_pane_g1_ParamLimits

0xc521,	// (0x000367a4) cell_large_graphic_popup_pane_g1

0xce6c,	// (0x000370ef) cell_large_graphic_popup_pane_g2_ParamLimits

0xce6c,	// (0x000370ef) cell_large_graphic_popup_pane_g2

0xce7a,	// (0x000370fd) cell_large_graphic_popup_pane_g3_ParamLimits

0xce7a,	// (0x000370fd) cell_large_graphic_popup_pane_g3

0xce88,	// (0x0003710b) cell_large_graphic_popup_pane_g4_ParamLimits

0xce88,	// (0x0003710b) cell_large_graphic_popup_pane_g4

0x0003,

0xf2c1,	// (0x00039544) cell_large_graphic_popup_pane_g_ParamLimits

0xf2c1,	// (0x00039544) cell_large_graphic_popup_pane_g

0xc23d,	// (0x000364c0) grid_highlight_pane_cp010

0xc4be,	// (0x00036741) bg_popup_call_pane_g1

0xce99,	// (0x0003711c) list_single_graphic_popup_conf_pane_ParamLimits

0xce99,	// (0x0003711c) list_single_graphic_popup_conf_pane

0xceac,	// (0x0003712f) list_highlight_pane_cp01

0xceb5,	// (0x00037138) list_single_graphic_popup_conf_pane_g1

0xcebd,	// (0x00037140) list_single_graphic_popup_conf_pane_g2

0x0001,

0xf2ca,	// (0x0003954d) list_single_graphic_popup_conf_pane_g

0xcec5,	// (0x00037148) list_single_graphic_popup_conf_pane_t1

0xced3,	// (0x00037156) linegrid_cams_pane_g1

0x33f0,	// (0x0002d673) linegrid_cams_pane_g2

0xc6b7,	// (0x0003693a) linegrid_cams_pane_g3

0xcedc,	// (0x0003715f) linegrid_cams_pane_g4

0x33f9,	// (0x0002d67c) linegrid_cams_pane_g5

0x3402,	// (0x0002d685) linegrid_cams_pane_g6

0xc775,	// (0x000369f8) linegrid_cams_pane_g7

0x0006,

0xf2cf,	// (0x00039552) linegrid_cams_pane_g

0xcee5,	// (0x00037168) popup_clock_analogue_window

0xcee5,	// (0x00037168) popup_clock_digital_window

0xc23d,	// (0x000364c0) popup_phob_thumbnail_window

0xc4be,	// (0x00036741) call_video_uplink_pane_g1

0xceee,	// (0x00037171) call_video_uplink_pane_g2

0x0001,

0xf2de,	// (0x00039561) call_video_uplink_pane_g

0xcef6,	// (0x00037179) video_uplink_pane

0xcefe,	// (0x00037181) mce_image_pane_g1

0x340d,	// (0x0002d690) mce_image_pane_g2

0x3415,	// (0x0002d698) mce_image_pane_g3

0x341d,	// (0x0002d6a0) mce_image_pane_g4

0x3427,	// (0x0002d6aa) mce_image_pane_g5

0x0004,

0xf2e3,	// (0x00039566) mce_image_pane_g

0xcf08,	// (0x0003718b) control_top_pane_stacon_cp01_ParamLimits

0xcf08,	// (0x0003718b) control_top_pane_stacon_cp01

0xcf1c,	// (0x0003719f) uni_indicator_pane_stacon_cp01_ParamLimits

0xcf1c,	// (0x0003719f) uni_indicator_pane_stacon_cp01

0xcf2d,	// (0x000371b0) bg_popup_sub_pane_cp03

0x342f,	// (0x0002d6b2) chi_dic_find_pane

0x3437,	// (0x0002d6ba) listscroll_chi_dic_pane

0x3440,	// (0x0002d6c3) main_pane_chidic_g1

0x3453,	// (0x0002d6d6) chi_dic_find_pane_t1

0xcf37,	// (0x000371ba) find_chidic_pane

0xcf40,	// (0x000371c3) chi_dic_list_pane_ParamLimits

0xcf40,	// (0x000371c3) chi_dic_list_pane

0xcf51,	// (0x000371d4) scroll_pane_cp020

0x3461,	// (0x0002d6e4) find_chidic_pane_t1

0xc23d,	// (0x000364c0) input_focus_pane_cp06

0x3470,	// (0x0002d6f3) list_chi_dic_pane_ParamLimits

0x3470,	// (0x0002d6f3) list_chi_dic_pane

0x3482,	// (0x0002d705) list_chi_dic_pane_t1_ParamLimits

0x3482,	// (0x0002d705) list_chi_dic_pane_t1

0xc23d,	// (0x000364c0) list_highlight_pane_cp020

0xcf59,	// (0x000371dc) bg_cale_heading_pane_g1

0x3495,	// (0x0002d718) bg_cale_heading_pane_g2

0x349d,	// (0x0002d720) bg_cale_heading_pane_g3

0x34a5,	// (0x0002d728) bg_cale_heading_pane_g4

0x34af,	// (0x0002d732) bg_cale_heading_pane_g5

0x34b9,	// (0x0002d73c) bg_cale_heading_pane_g6

0x34c1,	// (0x0002d744) bg_cale_heading_pane_g7

0x34c9,	// (0x0002d74c) bg_cale_heading_pane_g8

0x34d3,	// (0x0002d756) bg_cale_heading_pane_g9

0x0008,

0xf2ee,	// (0x00039571) bg_cale_heading_pane_g

0xcf59,	// (0x000371dc) bg_cale_side_pane_g1

0x34dd,	// (0x0002d760) bg_cale_side_pane_g2

0x34e5,	// (0x0002d768) bg_cale_side_pane_g3

0x34ed,	// (0x0002d770) bg_cale_side_pane_g4

0x34f5,	// (0x0002d778) bg_cale_side_pane_g5

0x34fd,	// (0x0002d780) bg_cale_side_pane_g6

0x3505,	// (0x0002d788) bg_cale_side_pane_g7

0x350d,	// (0x0002d790) bg_cale_side_pane_g8

0x3515,	// (0x0002d798) bg_cale_side_pane_g9

0x0008,

0xf301,	// (0x00039584) bg_cale_side_pane_g

0x351d,	// (0x0002d7a0) popup_call_status_window_ParamLimits

0x351d,	// (0x0002d7a0) popup_call_status_window

0xcf61,	// (0x000371e4) stacon_top_pane

0xcf69,	// (0x000371ec) status_pane_ParamLimits

0xcf69,	// (0x000371ec) status_pane

0xcf7e,	// (0x00037201) status_small_pane

0xcf86,	// (0x00037209) control_pane

0xc23d,	// (0x000364c0) stacon_bottom_pane

0xcf8e,	// (0x00037211) list_single_mce_smart_pane_t1_ParamLimits

0xcf8e,	// (0x00037211) list_single_mce_smart_pane_t1

0xcfa1,	// (0x00037224) list_single_mce_smart_pane_t2_ParamLimits

0xcfa1,	// (0x00037224) list_single_mce_smart_pane_t2

0x0001,

0xf314,	// (0x00039597) list_single_mce_smart_pane_t_ParamLimits

0xf314,	// (0x00039597) list_single_mce_smart_pane_t

0x3564,	// (0x0002d7e7) compass_pane

0x356d,	// (0x0002d7f0) main_location2_pane_t1

0x357f,	// (0x0002d802) main_location2_pane_t2

0x3591,	// (0x0002d814) main_location2_pane_t3

0x0003,

0xf319,	// (0x0003959c) main_location2_pane_t

0xcfc0,	// (0x00037243) compass_pane_g1_ParamLimits

0xcfc0,	// (0x00037243) compass_pane_g1

0x35d5,	// (0x0002d858) compass_pane_t1

0x35e4,	// (0x0002d867) compass_pane_t2

0x0005,

0xf322,	// (0x000395a5) compass_pane_t

0x362b,	// (0x0002d8ae) text_secondary_cp61

0xd03e,	// (0x000372c1) navi_pane_cams_g5

0xd0ba,	// (0x0003733d) navi_pane_im_t1

0xd0c8,	// (0x0003734b) navi_pane_mp_g1_ParamLimits

0xd0c8,	// (0x0003734b) navi_pane_mp_g1

0xd0dc,	// (0x0003735f) navi_pane_mp_g2_ParamLimits

0xd0dc,	// (0x0003735f) navi_pane_mp_g2

0xd0e8,	// (0x0003736b) navi_pane_mp_g3_ParamLimits

0xd0e8,	// (0x0003736b) navi_pane_mp_g3

0x0002,

0xf336,	// (0x000395b9) navi_pane_mp_g_ParamLimits

0xf336,	// (0x000395b9) navi_pane_mp_g

0xd0f4,	// (0x00037377) navi_pane_mp_t1

0xd102,	// (0x00037385) navi_pane_mp_t2

0x0002,

0xf33d,	// (0x000395c0) navi_pane_mp_t

0xd16d,	// (0x000373f0) navi_pane_vt_g1

0xd0f4,	// (0x00037377) navi_pane_vt_t1

0xd175,	// (0x000373f8) navi_slider_pane

0xc786,	// (0x00036a09) zooming_pane

0xd185,	// (0x00037408) navi_slider_pane_g1

0xb368,	// (0x000355eb) navi_slider_pane_g2

0x0006,

0xf344,	// (0x000395c7) navi_slider_pane_g

0xd1a9,	// (0x0003742c) aid_levels_zoom

0xd1b1,	// (0x00037434) zooming_pane_g1

0xd1b9,	// (0x0003743c) zooming_pane_g2

0xd1b9,	// (0x0003743c) zooming_pane_g3

0x0002,

0xf353,	// (0x000395d6) zooming_pane_g

0xd1c1,	// (0x00037444) level_10_zoom

0xd1ca,	// (0x0003744d) level_11_zoom

0xd1d3,	// (0x00037456) level_1_zoom

0xd1dc,	// (0x0003745f) level_2_zoom

0xd1e5,	// (0x00037468) level_3_zoom

0xd1ee,	// (0x00037471) level_4_zoom

0xd1f7,	// (0x0003747a) level_5_zoom

0xd200,	// (0x00037483) level_6_zoom

0xd209,	// (0x0003748c) level_7_zoom

0xd212,	// (0x00037495) level_8_zoom

0xd21b,	// (0x0003749e) level_9_zoom

0xd22c,	// (0x000374af) popup_phob_thumbnail_window_g1

0xd234,	// (0x000374b7) popup_phob_thumbnail_window_g2

0x0001,

0xf35a,	// (0x000395dd) popup_phob_thumbnail_window_g

0x4057,	// (0x0002e2da) level_1_location

0x405f,	// (0x0002e2e2) level_2_location

0x4067,	// (0x0002e2ea) level_3_location

0x406f,	// (0x0002e2f2) level_4_location

0xc786,	// (0x00036a09) level_5_location

0x367c,	// (0x0002d8ff) mce_icon_pane_g1

0x3686,	// (0x0002d909) mce_icon_pane_g2

0x0001,

0xf35f,	// (0x000395e2) mce_icon_pane_g

0xd23c,	// (0x000374bf) main_mup_pane_g1_ParamLimits

0xd23c,	// (0x000374bf) main_mup_pane_g1

0xd23c,	// (0x000374bf) main_mup_pane_g2_ParamLimits

0xd23c,	// (0x000374bf) main_mup_pane_g2

0xd23c,	// (0x000374bf) main_mup_pane_g3_ParamLimits

0xd23c,	// (0x000374bf) main_mup_pane_g3

0xd23c,	// (0x000374bf) main_mup_pane_g4_ParamLimits

0xd23c,	// (0x000374bf) main_mup_pane_g4

0xd23c,	// (0x000374bf) main_mup_pane_g5_ParamLimits

0xd23c,	// (0x000374bf) main_mup_pane_g5

0xd23c,	// (0x000374bf) main_mup_pane_g6_ParamLimits

0xd23c,	// (0x000374bf) main_mup_pane_g6

0xd23c,	// (0x000374bf) main_mup_pane_g7_ParamLimits

0xd23c,	// (0x000374bf) main_mup_pane_g7

0xd23c,	// (0x000374bf) main_mup_pane_g8_ParamLimits

0xd23c,	// (0x000374bf) main_mup_pane_g8

0xd23c,	// (0x000374bf) main_mup_pane_g9_ParamLimits

0xd23c,	// (0x000374bf) main_mup_pane_g9

0xd23c,	// (0x000374bf) main_mup_pane_g10_ParamLimits

0xd23c,	// (0x000374bf) main_mup_pane_g10

0xd23c,	// (0x000374bf) main_mup_pane_g11_ParamLimits

0xd23c,	// (0x000374bf) main_mup_pane_g11

0xc521,	// (0x000367a4) main_mup_pane_g12_ParamLimits

0xc521,	// (0x000367a4) main_mup_pane_g12

0xd23c,	// (0x000374bf) main_mup_pane_g13_ParamLimits

0xd23c,	// (0x000374bf) main_mup_pane_g13

0x000c,

0xf364,	// (0x000395e7) main_mup_pane_g_ParamLimits

0xf364,	// (0x000395e7) main_mup_pane_g

0xd24a,	// (0x000374cd) main_mup_pane_t1_ParamLimits

0xd24a,	// (0x000374cd) main_mup_pane_t1

0xd24a,	// (0x000374cd) main_mup_pane_t2_ParamLimits

0xd24a,	// (0x000374cd) main_mup_pane_t2

0xd24a,	// (0x000374cd) main_mup_pane_t3_ParamLimits

0xd24a,	// (0x000374cd) main_mup_pane_t3

0xc569,	// (0x000367ec) main_mup_pane_t4_ParamLimits

0xc569,	// (0x000367ec) main_mup_pane_t4

0xc569,	// (0x000367ec) main_mup_pane_t5_ParamLimits

0xc569,	// (0x000367ec) main_mup_pane_t5

0xc57d,	// (0x00036800) main_mup_pane_t6_ParamLimits

0xc57d,	// (0x00036800) main_mup_pane_t6

0x0005,

0xf37f,	// (0x00039602) main_mup_pane_t_ParamLimits

0xf37f,	// (0x00039602) main_mup_pane_t

0xc513,	// (0x00036796) mup_progress_pane_ParamLimits

0xc513,	// (0x00036796) mup_progress_pane

0xd25e,	// (0x000374e1) mup_visualizer_pane_ParamLimits

0xd25e,	// (0x000374e1) mup_visualizer_pane

0xd25e,	// (0x000374e1) mup_volume_pane_ParamLimits

0xd25e,	// (0x000374e1) mup_volume_pane

0xc52f,	// (0x000367b2) mup_visualizer_pane_g1_ParamLimits

0xc52f,	// (0x000367b2) mup_visualizer_pane_g1

0xd26c,	// (0x000374ef) mup_visualizer_pane_g2_ParamLimits

0xd26c,	// (0x000374ef) mup_visualizer_pane_g2

0xc521,	// (0x000367a4) mup_visualizer_pane_g3_ParamLimits

0xc521,	// (0x000367a4) mup_visualizer_pane_g3

0x0002,

0xf38c,	// (0x0003960f) mup_visualizer_pane_g_ParamLimits

0xf38c,	// (0x0003960f) mup_visualizer_pane_g

0xc55f,	// (0x000367e2) mup_volume_pane_g1

0xc55f,	// (0x000367e2) mup_volume_pane_g2

0x0001,

0xf0af,	// (0x00039332) mup_volume_pane_g

0xc55f,	// (0x000367e2) mup_progress_pane_g1

0xc55f,	// (0x000367e2) mup_progress_pane_g2

0xc55f,	// (0x000367e2) mup_progress_pane_g3

0x0002,

0xf393,	// (0x00039616) mup_progress_pane_g

0xc23d,	// (0x000364c0) bg_popup_window_pane_cp05

0xd27a,	// (0x000374fd) heading_pane_cp02_ParamLimits

0xd27a,	// (0x000374fd) heading_pane_cp02

0xd294,	// (0x00037517) list_popup_blid_pane

0xd29c,	// (0x0003751f) list_blid_sat_info_pane_ParamLimits

0xd29c,	// (0x0003751f) list_blid_sat_info_pane

0xd2af,	// (0x00037532) list_blid_sat_info_pane_g1

0xd2b7,	// (0x0003753a) list_blid_sat_info_pane_t1

0x3786,	// (0x0002da09) mup_equalizer_pane_ParamLimits

0x3786,	// (0x0002da09) mup_equalizer_pane

0x379f,	// (0x0002da22) mup_equalizer_pane_cp1_ParamLimits

0x379f,	// (0x0002da22) mup_equalizer_pane_cp1

0x37bc,	// (0x0002da3f) mup_equalizer_pane_cp2_ParamLimits

0x37bc,	// (0x0002da3f) mup_equalizer_pane_cp2

0x37d9,	// (0x0002da5c) mup_equalizer_pane_cp3_ParamLimits

0x37d9,	// (0x0002da5c) mup_equalizer_pane_cp3

0x37fa,	// (0x0002da7d) mup_equalizer_pane_cp4_ParamLimits

0x37fa,	// (0x0002da7d) mup_equalizer_pane_cp4

0x381b,	// (0x0002da9e) mup_equalizer_pane_cp5

0x382f,	// (0x0002dab2) mup_equalizer_pane_cp6

0x3843,	// (0x0002dac6) mup_equalizer_pane_cp7

0xe394,	// (0x00038617) bg_popup_call_poc_act_pane_g9

0xe39c,	// (0x0003861f) bg_popup_call_poc_act_pane_g10

0xe3a4,	// (0x00038627) bg_popup_call_poc_act_pane_g11

0x000a,

0xc4a6,	// (0x00036729) mup_scale_pane

0xc4be,	// (0x00036741) mup_scale_pane_g1

0xd2c5,	// (0x00037548) mup_scale_pane_g2

0x0006,

0xf3af,	// (0x00039632) mup_scale_pane_g

0xd2e9,	// (0x0003756c) msg_data_pane

0xd2f1,	// (0x00037574) scroll_pane_cp017

0x3869,	// (0x0002daec) bg_list_pane_cp04_ParamLimits

0x3869,	// (0x0002daec) bg_list_pane_cp04

0xd2f9,	// (0x0003757c) msg_data_pane_g1

0x388d,	// (0x0002db10) msg_data_pane_g2

0x3895,	// (0x0002db18) msg_data_pane_g3

0x389d,	// (0x0002db20) msg_data_pane_g4

0x38a5,	// (0x0002db28) msg_data_pane_g5

0x38ad,	// (0x0002db30) msg_data_pane_g6

0x38b5,	// (0x0002db38) msg_data_pane_g7

0x0006,

0xf3be,	// (0x00039641) msg_data_pane_g

0x38bd,	// (0x0002db40) msg_text_pane_ParamLimits

0x38bd,	// (0x0002db40) msg_text_pane

0x38f2,	// (0x0002db75) qrid_highlight_pane_cp011_ParamLimits

0x38f2,	// (0x0002db75) qrid_highlight_pane_cp011

0xc23d,	// (0x000364c0) msg_body_pane

0xc4a6,	// (0x00036729) msg_header_pane

0xd315,	// (0x00037598) input_focus_pane_cp07

0x3916,	// (0x0002db99) msg_header_pane_t1_ParamLimits

0x3916,	// (0x0002db99) msg_header_pane_t1

0x3932,	// (0x0002dbb5) msg_header_pane_t2_ParamLimits

0x3932,	// (0x0002dbb5) msg_header_pane_t2

0x0001,

0xf3d2,	// (0x00039655) msg_header_pane_t_ParamLimits

0xf3d2,	// (0x00039655) msg_header_pane_t

0xd336,	// (0x000375b9) msg_body_pane_g1

0x3952,	// (0x0002dbd5) msg_body_pane_t1_ParamLimits

0x3952,	// (0x0002dbd5) msg_body_pane_t1

0x3983,	// (0x0002dc06) msg_body_pane_t2_ParamLimits

0x3983,	// (0x0002dc06) msg_body_pane_t2

0x3995,	// (0x0002dc18) msg_body_pane_t3_ParamLimits

0x3995,	// (0x0002dc18) msg_body_pane_t3

0x0002,

0xf3d7,	// (0x0003965a) msg_body_pane_t_ParamLimits

0xf3d7,	// (0x0003965a) msg_body_pane_t

0x0d67,	// (0x0002afea) main_viewer_pane_g1_ParamLimits

0x0d67,	// (0x0002afea) main_viewer_pane_g1

0x0d75,	// (0x0002aff8) main_viewer_pane_g2_ParamLimits

0x0d75,	// (0x0002aff8) main_viewer_pane_g2

0x39c5,	// (0x0002dc48) main_viewer_pane_g3_ParamLimits

0x39c5,	// (0x0002dc48) main_viewer_pane_g3

0x39d4,	// (0x0002dc57) main_viewer_pane_g4_ParamLimits

0x39d4,	// (0x0002dc57) main_viewer_pane_g4

0xb392,	// (0x00035615) main_viewer_pane_g5_ParamLimits

0xb392,	// (0x00035615) main_viewer_pane_g5

0xb392,	// (0x00035615) main_viewer_pane_g7_ParamLimits

0xb392,	// (0x00035615) main_viewer_pane_g7

0xcc60,	// (0x00036ee3) main_viewer_pane_g8_ParamLimits

0xcc60,	// (0x00036ee3) main_viewer_pane_g8

0x0007,

0xf3e7,	// (0x0003966a) main_viewer_pane_g_ParamLimits

0xf3e7,	// (0x0003966a) main_viewer_pane_g

0xd33e,	// (0x000375c1) viewer_content_pane_ParamLimits

0xd33e,	// (0x000375c1) viewer_content_pane

0x3a10,	// (0x0002dc93) main_postcard_pane_g1_ParamLimits

0x3a10,	// (0x0002dc93) main_postcard_pane_g1

0x3a26,	// (0x0002dca9) main_postcard_pane_g2_ParamLimits

0x3a26,	// (0x0002dca9) main_postcard_pane_g2

0x3a3c,	// (0x0002dcbf) main_postcard_pane_g3_ParamLimits

0x3a3c,	// (0x0002dcbf) main_postcard_pane_g3

0x0005,

0xf3f8,	// (0x0003967b) main_postcard_pane_g_ParamLimits

0xf3f8,	// (0x0003967b) main_postcard_pane_g

0x3a53,	// (0x0002dcd6) main_postcard_pane_g4

0xe518,	// (0x0003879b) smil_status_volume_pane_g2

0x3a96,	// (0x0002dd19) postcard_pane_ParamLimits

0x3a96,	// (0x0002dd19) postcard_pane

0xd34c,	// (0x000375cf) postcard_pane_g1_ParamLimits

0xd34c,	// (0x000375cf) postcard_pane_g1

0x3ad8,	// (0x0002dd5b) postcard_pane_g2_ParamLimits

0x3ad8,	// (0x0002dd5b) postcard_pane_g2

0x3ae4,	// (0x0002dd67) postcard_pane_g3_ParamLimits

0x3ae4,	// (0x0002dd67) postcard_pane_g3

0xd35a,	// (0x000375dd) postcard_pane_g4_ParamLimits

0xd35a,	// (0x000375dd) postcard_pane_g4

0x3af0,	// (0x0002dd73) postcard_pane_g5_ParamLimits

0x3af0,	// (0x0002dd73) postcard_pane_g5

0x3b05,	// (0x0002dd88) postcard_pane_g6_ParamLimits

0x3b05,	// (0x0002dd88) postcard_pane_g6

0xd34c,	// (0x000375cf) postcard_pane_g7_ParamLimits

0xd34c,	// (0x000375cf) postcard_pane_g7

0x0006,

0xf405,	// (0x00039688) postcard_pane_g_ParamLimits

0xf405,	// (0x00039688) postcard_pane_g

0x3b19,	// (0x0002dd9c) main_mp2_pane_g1_ParamLimits

0x3b19,	// (0x0002dd9c) main_mp2_pane_g1

0x3b25,	// (0x0002dda8) main_mp2_pane_g2_ParamLimits

0x3b25,	// (0x0002dda8) main_mp2_pane_g2

0x3b31,	// (0x0002ddb4) main_mp2_pane_g3_ParamLimits

0x3b31,	// (0x0002ddb4) main_mp2_pane_g3

0x0002,

0xf414,	// (0x00039697) main_mp2_pane_g_ParamLimits

0xf414,	// (0x00039697) main_mp2_pane_g

0x3b3d,	// (0x0002ddc0) main_mp2_pane_t1_ParamLimits

0x3b3d,	// (0x0002ddc0) main_mp2_pane_t1

0x3b52,	// (0x0002ddd5) main_mp2_pane_t2_ParamLimits

0x3b52,	// (0x0002ddd5) main_mp2_pane_t2

0x3b64,	// (0x0002dde7) main_mp2_pane_t3_ParamLimits

0x3b64,	// (0x0002dde7) main_mp2_pane_t3

0x0002,

0xf41b,	// (0x0003969e) main_mp2_pane_t_ParamLimits

0xf41b,	// (0x0003969e) main_mp2_pane_t

0xc40e,	// (0x00036691) pec_content_pane_ParamLimits

0xc40e,	// (0x00036691) pec_content_pane

0xbe20,	// (0x000360a3) scroll_pane_cp015

0xd25e,	// (0x000374e1) pec_attribute_pane_ParamLimits

0xd25e,	// (0x000374e1) pec_attribute_pane

0xc521,	// (0x000367a4) pec_content_pane_g1_ParamLimits

0xc521,	// (0x000367a4) pec_content_pane_g1

0xd368,	// (0x000375eb) pec_content_pane_t1_ParamLimits

0xd368,	// (0x000375eb) pec_content_pane_t1

0xd37c,	// (0x000375ff) pec_content_pane_t2_ParamLimits

0xd37c,	// (0x000375ff) pec_content_pane_t2

0x0001,

0xf422,	// (0x000396a5) pec_content_pane_t_ParamLimits

0xf422,	// (0x000396a5) pec_content_pane_t

0xc513,	// (0x00036796) list_single_graphic_pane_cp01_ParamLimits

0xc513,	// (0x00036796) list_single_graphic_pane_cp01

0xc4a6,	// (0x00036729) bg_popup_sub_pane_cp04

0xd390,	// (0x00037613) popup_mup_playback_window_g1

0xd39c,	// (0x0003761f) popup_mup_playback_window_t1

0xd3b1,	// (0x00037634) popup_mup_playback_window_t2

0x0001,

0xf427,	// (0x000396aa) popup_mup_playback_window_t

0xd3e8,	// (0x0003766b) main_image_pane_g1_ParamLimits

0xd3e8,	// (0x0003766b) main_image_pane_g1

0xd42b,	// (0x000376ae) scroll_pane_cp018_ParamLimits

0xd42b,	// (0x000376ae) scroll_pane_cp018

0xd443,	// (0x000376c6) scroll_pane_cp016_ParamLimits

0xd443,	// (0x000376c6) scroll_pane_cp016

0x3c2e,	// (0x0002deb1) smil2_image_pane_ParamLimits

0x3c2e,	// (0x0002deb1) smil2_image_pane

0x3c5e,	// (0x0002dee1) smil2_root_pane_ParamLimits

0x3c5e,	// (0x0002dee1) smil2_root_pane

0x3c96,	// (0x0002df19) smil2_text_pane_ParamLimits

0x3c96,	// (0x0002df19) smil2_text_pane

0xbe20,	// (0x000360a3) bg_list_pane_cp06

0xbe20,	// (0x000360a3) grid_radio_pane

0xc23d,	// (0x000364c0) bg_popup_window_pane_cp06

0xccc1,	// (0x00036f44) main_fmradio_pane_t1

0xe3ec,	// (0x0003866f) heading_pane_cp04

0xccc1,	// (0x00036f44) main_fmradio_pane_t2

0xe3f4,	// (0x00038677) popup_cale_lunar_info_window_g1

0xccc1,	// (0x00036f44) main_fmradio_pane_t3

0xe3fc,	// (0x0003867f) popup_cale_lunar_info_window_g2

0xccc1,	// (0x00036f44) main_fmradio_pane_t4

0x0001,

0xccc1,	// (0x00036f44) main_fmradio_pane_t5

0x0004,

0xf50a,	// (0x0003978d) popup_cale_lunar_info_window_g

0xf287,	// (0x0003950a) main_fmradio_pane_t

0xbe20,	// (0x000360a3) wait_bar_pane_cp03

0xc513,	// (0x00036796) cell_fmradio_pane_ParamLimits

0xc513,	// (0x00036796) cell_fmradio_pane

0xc521,	// (0x000367a4) cell_fmradio_pane_g1_ParamLimits

0xc521,	// (0x000367a4) cell_fmradio_pane_g1

0xbe20,	// (0x000360a3) grid_highlight_pane_cp011

0xd477,	// (0x000376fa) poc_content_pane_ParamLimits

0xd477,	// (0x000376fa) poc_content_pane

0xd489,	// (0x0003770c) scroll_pane_cp019

0x3d16,	// (0x0002df99) popup_call_poc_act_window_ParamLimits

0x3d16,	// (0x0002df99) popup_call_poc_act_window

0x3d3a,	// (0x0002dfbd) popup_call_poc_inact_window_ParamLimits

0x3d3a,	// (0x0002dfbd) popup_call_poc_inact_window

0xf4d3,	// (0x00039756) bg_popup_call_poc_act_pane_g

0xe3ac,	// (0x0003862f) bg_popup_call_poc_inact_pane_g1

0xe3b4,	// (0x00038637) bg_popup_call_poc_inact_pane_g2

0xd491,	// (0x00037714) popup_call_poc_act_window_g2

0xe3bc,	// (0x0003863f) bg_popup_call_poc_inact_pane_g3

0xe33c,	// (0x000385bf) bg_popup_call_poc_inact_pane_g4

0xe3c4,	// (0x00038647) bg_popup_call_poc_inact_pane_g5

0xd499,	// (0x0003771c) popup_call_poc_act_window_t1_ParamLimits

0xd499,	// (0x0003771c) popup_call_poc_act_window_t1

0xd4c1,	// (0x00037744) popup_call_poc_act_window_t2_ParamLimits

0xd4c1,	// (0x00037744) popup_call_poc_act_window_t2

0xd4e9,	// (0x0003776c) popup_call_poc_act_window_t3_ParamLimits

0xd4e9,	// (0x0003776c) popup_call_poc_act_window_t3

0xd511,	// (0x00037794) popup_call_poc_act_window_t4_ParamLimits

0xd511,	// (0x00037794) popup_call_poc_act_window_t4

0x0003,

0xf43c,	// (0x000396bf) popup_call_poc_act_window_t_ParamLimits

0xf43c,	// (0x000396bf) popup_call_poc_act_window_t

0xe3cc,	// (0x0003864f) bg_popup_call_poc_inact_pane_g6

0xe3d4,	// (0x00038657) bg_popup_call_poc_inact_pane_g7

0xe3dc,	// (0x0003865f) bg_popup_call_poc_inact_pane_g8

0xd523,	// (0x000377a6) popup_call_poc_inact_window_g2

0xe3e4,	// (0x00038667) bg_popup_call_poc_inact_pane_g9

0x0008,

0xf4ea,	// (0x0003976d) bg_popup_call_poc_inact_pane_g

0xd52b,	// (0x000377ae) popup_call_poc_inact_window_t1_ParamLimits

0xd52b,	// (0x000377ae) popup_call_poc_inact_window_t1

0xd540,	// (0x000377c3) popup_call_poc_inact_window_t2_ParamLimits

0xd540,	// (0x000377c3) popup_call_poc_inact_window_t2

0xd555,	// (0x000377d8) popup_call_poc_inact_window_t3_ParamLimits

0xd555,	// (0x000377d8) popup_call_poc_inact_window_t3

0x0002,

0xf445,	// (0x000396c8) popup_call_poc_inact_window_t_ParamLimits

0xf445,	// (0x000396c8) popup_call_poc_inact_window_t

0xe490,	// (0x00038713) context_pane_ParamLimits

0x427f,	// (0x0002e502) signal_pane_ParamLimits

0xc786,	// (0x00036a09) main_call2_pane

0xb3dd,	// (0x00035660) popup_phob_thumbnail2_window_ParamLimits

0xb3dd,	// (0x00035660) popup_phob_thumbnail2_window

0xb37a,	// (0x000355fd) aid_hotspot_pointer_arrow_pane

0xb382,	// (0x00035605) aid_hotspot_pointer_hand_pane

0x4021,	// (0x0002e2a4) phob_pre_status_pane_g5

0xc40e,	// (0x00036691) cams_zoom_pane_ParamLimits

0xc40e,	// (0x00036691) image_vga_pane_ParamLimits

0xc521,	// (0x000367a4) main_camera_pane_g1_ParamLimits

0xc521,	// (0x000367a4) main_camera_pane_g2_ParamLimits

0xc521,	// (0x000367a4) main_camera_pane_g3_ParamLimits

0xc521,	// (0x000367a4) main_camera_pane_g4_ParamLimits

0xc521,	// (0x000367a4) main_camera_pane_g5_ParamLimits

0xc521,	// (0x000367a4) main_camera_pane_g6_ParamLimits

0xc521,	// (0x000367a4) main_camera_pane_g7_ParamLimits

0xf180,	// (0x00039403) main_camera_pane_g_ParamLimits

0xc569,	// (0x000367ec) main_camera_pane_t1_ParamLimits

0xc569,	// (0x000367ec) main_camera_pane_t2_ParamLimits

0xf191,	// (0x00039414) main_camera_pane_t_ParamLimits

0xc4a6,	// (0x00036729) bg_popup_preview_window_pane_cp01_ParamLimits

0xc4a6,	// (0x00036729) bg_popup_preview_window_pane_cp01

0xd56a,	// (0x000377ed) popup_phob_thumbnail2_window_g1_ParamLimits

0xd56a,	// (0x000377ed) popup_phob_thumbnail2_window_g1

0xc23d,	// (0x000364c0) call2_cli_visual_pane

0x3d6e,	// (0x0002dff1) popup_call2_audio_conf_window_ParamLimits

0x3d6e,	// (0x0002dff1) popup_call2_audio_conf_window

0x3d8e,	// (0x0002e011) popup_call2_audio_first_window_ParamLimits

0x3d8e,	// (0x0002e011) popup_call2_audio_first_window

0x3e24,	// (0x0002e0a7) popup_call2_audio_in_window_ParamLimits

0x3e24,	// (0x0002e0a7) popup_call2_audio_in_window

0x3e6c,	// (0x0002e0ef) popup_call2_audio_out_window_ParamLimits

0x3e6c,	// (0x0002e0ef) popup_call2_audio_out_window

0x3ed6,	// (0x0002e159) popup_call2_audio_second_window_ParamLimits

0x3ed6,	// (0x0002e159) popup_call2_audio_second_window

0x3f3c,	// (0x0002e1bf) popup_call2_audio_wait_window_ParamLimits

0x3f3c,	// (0x0002e1bf) popup_call2_audio_wait_window

0xc23d,	// (0x000364c0) bg_popup_call2_act_pane_cp03

0xc488,	// (0x0003670b) list_conf_pane_cp

0xd576,	// (0x000377f9) popup_call2_audio_conf_window_t1

0xd584,	// (0x00037807) list_single_graphic_popup_conf2_pane_ParamLimits

0xd584,	// (0x00037807) list_single_graphic_popup_conf2_pane

0xceac,	// (0x0003712f) list_highlight_pane_cp04

0xd597,	// (0x0003781a) list_single_graphic_popup_conf2_pane_g1

0xcebd,	// (0x00037140) list_single_graphic_popup_conf2_pane_g2

0x0001,

0xf44c,	// (0x000396cf) list_single_graphic_popup_conf2_pane_g

0xd5a1,	// (0x00037824) list_single_graphic_popup_conf2_pane_t1

0xd5af,	// (0x00037832) bg_popup_call2_act_pane_cp01_ParamLimits

0xd5af,	// (0x00037832) bg_popup_call2_act_pane_cp01

0xd639,	// (0x000378bc) call_type_pane_cp05_ParamLimits

0xd639,	// (0x000378bc) call_type_pane_cp05

0xd68d,	// (0x00037910) popup_call2_audio_second_window_g1_ParamLimits

0xd68d,	// (0x00037910) popup_call2_audio_second_window_g1

0xd6e1,	// (0x00037964) popup_call2_audio_second_window_g2_ParamLimits

0xd6e1,	// (0x00037964) popup_call2_audio_second_window_g2

0x0002,

0xf451,	// (0x000396d4) popup_call2_audio_second_window_g_ParamLimits

0xf451,	// (0x000396d4) popup_call2_audio_second_window_g

0xd746,	// (0x000379c9) popup_call2_audio_second_window_t1_ParamLimits

0xd746,	// (0x000379c9) popup_call2_audio_second_window_t1

0xd801,	// (0x00037a84) popup_call2_audio_second_window_t2_ParamLimits

0xd801,	// (0x00037a84) popup_call2_audio_second_window_t2

0xd854,	// (0x00037ad7) popup_call2_audio_second_window_t3_ParamLimits

0xd854,	// (0x00037ad7) popup_call2_audio_second_window_t3

0x0003,

0xf458,	// (0x000396db) popup_call2_audio_second_window_t_ParamLimits

0xf458,	// (0x000396db) popup_call2_audio_second_window_t

0xc23d,	// (0x000364c0) bg_popup_call2_in_pane_cp02

0xc247,	// (0x000364ca) call_type_pane_cp04

0x3f76,	// (0x0002e1f9) popup_call2_audio_wait_window_g1

0x3f7e,	// (0x0002e201) popup_call2_audio_wait_window_g2

0x0001,

0xf461,	// (0x000396e4) popup_call2_audio_wait_window_g

0xc25f,	// (0x000364e2) popup_call2_audio_wait_window_t3

0xd947,	// (0x00037bca) bg_popup_call2_act_pane_ParamLimits

0xd947,	// (0x00037bca) bg_popup_call2_act_pane

0xda07,	// (0x00037c8a) call_type_pane_cp03_ParamLimits

0xda07,	// (0x00037c8a) call_type_pane_cp03

0xda6b,	// (0x00037cee) popup_call2_audio_first_window_g1_ParamLimits

0xda6b,	// (0x00037cee) popup_call2_audio_first_window_g1

0xdae9,	// (0x00037d6c) popup_call2_audio_first_window_g2_ParamLimits

0xdae9,	// (0x00037d6c) popup_call2_audio_first_window_g2

0xdadb,	// (0x00037d5e) popup_call2_audio_first_window_g3_ParamLimits

0xdadb,	// (0x00037d5e) popup_call2_audio_first_window_g3

0x0004,

0xf466,	// (0x000396e9) popup_call2_audio_first_window_g_ParamLimits

0xf466,	// (0x000396e9) popup_call2_audio_first_window_g

0xdbc7,	// (0x00037e4a) popup_call2_audio_first_window_t1_ParamLimits

0xdbc7,	// (0x00037e4a) popup_call2_audio_first_window_t1

0xdcca,	// (0x00037f4d) popup_call2_audio_first_window_t4_ParamLimits

0xdcca,	// (0x00037f4d) popup_call2_audio_first_window_t4

0xddad,	// (0x00038030) popup_call2_audio_first_window_t5_ParamLimits

0xddad,	// (0x00038030) popup_call2_audio_first_window_t5

0x0003,

0xf471,	// (0x000396f4) popup_call2_audio_first_window_t_ParamLimits

0xf471,	// (0x000396f4) popup_call2_audio_first_window_t

0xc49e,	// (0x00036721) bg_popup_call2_act_pane_g1

0xe404,	// (0x00038687) popup_cale_lunar_info_window_t1

0xe412,	// (0x00038695) popup_cale_lunar_info_window_t2

0xe420,	// (0x000386a3) popup_cale_lunar_info_window_t3

0xc23d,	// (0x000364c0) bg_popup_call2_bubble_pane

0xdeae,	// (0x00038131) bg_popup_call2_in_pane_cp01_ParamLimits

0xdeae,	// (0x00038131) bg_popup_call2_in_pane_cp01

0xbf19,	// (0x0003619c) call_type_pane_cp02

0x3f86,	// (0x0002e209) popup_call2_audio_out_window_g1_ParamLimits

0x3f86,	// (0x0002e209) popup_call2_audio_out_window_g1

0xdef6,	// (0x00038179) popup_call2_audio_out_window_g2_ParamLimits

0xdef6,	// (0x00038179) popup_call2_audio_out_window_g2

0x3fb2,	// (0x0002e235) popup_call2_audio_out_window_g3_ParamLimits

0x3fb2,	// (0x0002e235) popup_call2_audio_out_window_g3

0x0003,

0xf47a,	// (0x000396fd) popup_call2_audio_out_window_g_ParamLimits

0xf47a,	// (0x000396fd) popup_call2_audio_out_window_g

0xdf2d,	// (0x000381b0) popup_call2_audio_out_window_t1_ParamLimits

0xdf2d,	// (0x000381b0) popup_call2_audio_out_window_t1

0xdf8c,	// (0x0003820f) popup_call2_audio_out_window_t2_ParamLimits

0xdf8c,	// (0x0003820f) popup_call2_audio_out_window_t2

0xdfe0,	// (0x00038263) popup_call2_audio_out_window_t3_ParamLimits

0xdfe0,	// (0x00038263) popup_call2_audio_out_window_t3

0xdff6,	// (0x00038279) popup_call2_audio_out_window_t4_ParamLimits

0xdff6,	// (0x00038279) popup_call2_audio_out_window_t4

0xe00c,	// (0x0003828f) popup_call2_audio_out_window_t5_ParamLimits

0xe00c,	// (0x0003828f) popup_call2_audio_out_window_t5

0x0005,

0xf483,	// (0x00039706) popup_call2_audio_out_window_t_ParamLimits

0xf483,	// (0x00039706) popup_call2_audio_out_window_t

0xe070,	// (0x000382f3) bg_popup_call2_in_pane_ParamLimits

0xe070,	// (0x000382f3) bg_popup_call2_in_pane

0xe0cc,	// (0x0003834f) popup_call2_audio_in_window_g1_ParamLimits

0xe0cc,	// (0x0003834f) popup_call2_audio_in_window_g1

0xe104,	// (0x00038387) popup_call2_audio_in_window_g2_ParamLimits

0xe104,	// (0x00038387) popup_call2_audio_in_window_g2

0xe13c,	// (0x000383bf) popup_call2_audio_in_window_g3_ParamLimits

0xe13c,	// (0x000383bf) popup_call2_audio_in_window_g3

0x0003,

0xf490,	// (0x00039713) popup_call2_audio_in_window_g_ParamLimits

0xf490,	// (0x00039713) popup_call2_audio_in_window_g

0xe194,	// (0x00038417) popup_call2_audio_in_window_t1_ParamLimits

0xe194,	// (0x00038417) popup_call2_audio_in_window_t1

0xe214,	// (0x00038497) popup_call2_audio_in_window_t2_ParamLimits

0xe214,	// (0x00038497) popup_call2_audio_in_window_t2

0xe294,	// (0x00038517) popup_call2_audio_in_window_t3_ParamLimits

0xe294,	// (0x00038517) popup_call2_audio_in_window_t3

0xe2ae,	// (0x00038531) popup_call2_audio_in_window_t4_ParamLimits

0xe2ae,	// (0x00038531) popup_call2_audio_in_window_t4

0xe2c0,	// (0x00038543) popup_call2_audio_in_window_t5_ParamLimits

0xe2c0,	// (0x00038543) popup_call2_audio_in_window_t5

0xe2d2,	// (0x00038555) popup_call2_audio_in_window_t6_ParamLimits

0xe2d2,	// (0x00038555) popup_call2_audio_in_window_t6

0x0005,

0xf499,	// (0x0003971c) popup_call2_audio_in_window_t_ParamLimits

0xf499,	// (0x0003971c) popup_call2_audio_in_window_t

0xc49e,	// (0x00036721) bg_popup_call2_in_pane_g1

0xe42e,	// (0x000386b1) popup_cale_lunar_info_window_t4

0x0003,

0xf50f,	// (0x00039792) popup_cale_lunar_info_window_t

0xc4a6,	// (0x00036729) bg_popup_call2_rect_pane_ParamLimits

0xc4a6,	// (0x00036729) bg_popup_call2_rect_pane

0xc23d,	// (0x000364c0) call2_cli_visual_graphic_pane

0xc23d,	// (0x000364c0) call2_cli_visual_text_pane

0xb404,	// (0x00035687) smil_status_volume_pane_g3

0x0002,

0xc4be,	// (0x00036741) call2_cli_visual_graphic_pane_g1

0xc4be,	// (0x00036741) call2_cli_visual_graphic_pane_g2

0xc4be,	// (0x00036741) call2_cli_visual_graphic_pane_g3

0x0002,

0xf4a6,	// (0x00039729) call2_cli_visual_graphic_pane_g

0xe2e4,	// (0x00038567) bg_popup_call2_rect_pane_g1

0xc69d,	// (0x00036920) bg_popup_call2_rect_pane_g2

0xe2ec,	// (0x0003856f) bg_popup_call2_rect_pane_g3

0xe2f4,	// (0x00038577) bg_popup_call2_rect_pane_g4

0xe2fc,	// (0x0003857f) bg_popup_call2_rect_pane_g5

0xe304,	// (0x00038587) bg_popup_call2_rect_pane_g6

0xe30c,	// (0x0003858f) bg_popup_call2_rect_pane_g7

0xe314,	// (0x00038597) bg_popup_call2_rect_pane_g8

0xe31c,	// (0x0003859f) bg_popup_call2_rect_pane_g9

0x0008,

0xf4ad,	// (0x00039730) bg_popup_call2_rect_pane_g

0xe324,	// (0x000385a7) bg_popup_call2_bubble_pane_g1

0xe32c,	// (0x000385af) bg_popup_call2_bubble_pane_g2

0xe334,	// (0x000385b7) bg_popup_call2_bubble_pane_g3

0xe33c,	// (0x000385bf) bg_popup_call2_bubble_pane_g4

0xe344,	// (0x000385c7) bg_popup_call2_bubble_pane_g5

0xe34c,	// (0x000385cf) bg_popup_call2_bubble_pane_g6

0xe354,	// (0x000385d7) bg_popup_call2_bubble_pane_g7

0xe35c,	// (0x000385df) bg_popup_call2_bubble_pane_g8

0xe364,	// (0x000385e7) bg_popup_call2_bubble_pane_g9

0x0008,

0xf4c0,	// (0x00039743) bg_popup_call2_bubble_pane_g

0x1ed7,	// (0x0002c15a) aid_cale_week_size_cell_pane

0x23b1,	// (0x0002c634) aid_cams_cif_uncrop_pane_ParamLimits

0x23b1,	// (0x0002c634) aid_cams_cif_uncrop_pane

0xc40e,	// (0x00036691) aid_cams_size_cell_ParamLimits

0xc40e,	// (0x00036691) aid_cams_size_cell

0xc40e,	// (0x00036691) grid_cams_pane_ParamLimits

0xc40e,	// (0x00036691) linegrid_cams_pane_ParamLimits

0x25cf,	// (0x0002c852) call_video_pane_t1

0x25ed,	// (0x0002c870) call_video_pane_t2

0x0001,

0xf1dd,	// (0x00039460) call_video_pane_t

0x2a13,	// (0x0002cc96) aid_cale_month_size_cell_pane_ParamLimits

0x2a13,	// (0x0002cc96) aid_cale_month_size_cell_pane

0xf553,	// (0x000397d6) smil_status_volume_pane_g

0xb411,	// (0x00035694) volume_smil_pane_ParamLimits

0xb1be,	// (0x00035441) aid_popup2_width_pane

0x1e3c,	// (0x0002c0bf) cell_qdial_pane_g4_ParamLimits

0x1e3c,	// (0x0002c0bf) cell_qdial_pane_g4

0x35b5,	// (0x0002d838) aid_blid_cardinal_pane_ParamLimits

0x35c1,	// (0x0002d844) aid_blid_destination_pane_ParamLimits

0x35c1,	// (0x0002d844) aid_blid_destination_pane

0xc4a6,	// (0x00036729) bg_popup_call_poc_act_pane_ParamLimits

0xc4a6,	// (0x00036729) bg_popup_call_poc_act_pane

0xc4a6,	// (0x00036729) bg_popup_call_poc_inact_pane_ParamLimits

0xc4a6,	// (0x00036729) bg_popup_call_poc_inact_pane

0xe36c,	// (0x000385ef) bg_popup_call_poc_act_pane_g1

0xe374,	// (0x000385f7) bg_popup_call_poc_act_pane_g2

0xe37c,	// (0x000385ff) bg_popup_call_poc_act_pane_g3

0xe33c,	// (0x000385bf) bg_popup_call_poc_act_pane_g4

0xe344,	// (0x000385c7) bg_popup_call_poc_act_pane_g5

0xe384,	// (0x00038607) bg_popup_call_poc_act_pane_g6

0xe354,	// (0x000385d7) bg_popup_call_poc_act_pane_g7

0xe38c,	// (0x0003860f) bg_popup_call_poc_act_pane_g8

0xc23d,	// (0x000364c0) main_usb_pane

0xb3b8,	// (0x0003563b) popup_cale_lunar_info_window

0x28b9,	// (0x0002cb3c) im_reading_pane_t1_ParamLimits

0xc847,	// (0x00036aca) list_im_pane_ParamLimits

0xc858,	// (0x00036adb) scroll_pane_cp07_ParamLimits

0xc23d,	// (0x000364c0) grid_highlight_pane_cp012

0xc4a6,	// (0x00036729) mup_scale_pane_ParamLimits

0xc521,	// (0x000367a4) main_usb_pane_g1_ParamLimits

0xc521,	// (0x000367a4) main_usb_pane_g1

0xc521,	// (0x000367a4) main_usb_pane_g2_ParamLimits

0xc521,	// (0x000367a4) main_usb_pane_g2

0x0001,

0xf1bc,	// (0x0003943f) main_usb_pane_g_ParamLimits

0xf1bc,	// (0x0003943f) main_usb_pane_g

0xc569,	// (0x000367ec) main_usb_pane_t1_ParamLimits

0xc569,	// (0x000367ec) main_usb_pane_t1

0xc569,	// (0x000367ec) main_usb_pane_t2_ParamLimits

0xc569,	// (0x000367ec) main_usb_pane_t2

0xc569,	// (0x000367ec) main_usb_pane_t3_ParamLimits

0xc569,	// (0x000367ec) main_usb_pane_t3

0xc569,	// (0x000367ec) main_usb_pane_t4_ParamLimits

0xc569,	// (0x000367ec) main_usb_pane_t4

0xc569,	// (0x000367ec) main_usb_pane_t5_ParamLimits

0xc569,	// (0x000367ec) main_usb_pane_t5

0xc569,	// (0x000367ec) main_usb_pane_t6_ParamLimits

0xc569,	// (0x000367ec) main_usb_pane_t6

0x0005,

0xf4fd,	// (0x00039780) main_usb_pane_t_ParamLimits

0x3564,	// (0x0002d7e7) aid_text_placing

0x356d,	// (0x0002d7f0) main_location2_pane_t1_ParamLimits

0x357f,	// (0x0002d802) main_location2_pane_t2_ParamLimits

0x3591,	// (0x0002d814) main_location2_pane_t3_ParamLimits

0x35a3,	// (0x0002d826) main_location2_pane_t4_ParamLimits

0x35a3,	// (0x0002d826) main_location2_pane_t4

0xf319,	// (0x0003959c) main_location2_pane_t_ParamLimits

0xc4d4,	// (0x00036757) find_pinb_pane_g2_ParamLimits

0xc4d4,	// (0x00036757) find_pinb_pane_g2

0x0001,

0xf095,	// (0x00039318) find_pinb_pane_g_ParamLimits

0xf095,	// (0x00039318) find_pinb_pane_g

0xc4e0,	// (0x00036763) find_pinb_pane_t1_ParamLimits

0xc4f2,	// (0x00036775) find_pinb_pane_t2_ParamLimits

0xf09a,	// (0x0003931d) find_pinb_pane_t_ParamLimits

0xc23d,	// (0x000364c0) main_call3_pane

0x2efa,	// (0x0002d17d) cale_month_day_heading_pane_t1_ParamLimits

0x2f3c,	// (0x0002d1bf) cale_month_day_heading_pane_t2_ParamLimits

0x2f71,	// (0x0002d1f4) cale_month_day_heading_pane_t3_ParamLimits

0x2fa6,	// (0x0002d229) cale_month_day_heading_pane_t4_ParamLimits

0x2fe3,	// (0x0002d266) cale_month_day_heading_pane_t5_ParamLimits

0x3028,	// (0x0002d2ab) cale_month_day_heading_pane_t6_ParamLimits

0x306d,	// (0x0002d2f0) cale_month_day_heading_pane_t7_ParamLimits

0xf215,	// (0x00039498) cale_month_day_heading_pane_t_ParamLimits

0xcaa2,	// (0x00036d25) smil_status_volume_pane

0x3ab4,	// (0x0002dd37) postcard_address_pane_ParamLimits

0x3ab4,	// (0x0002dd37) postcard_address_pane

0x3ac6,	// (0x0002dd49) postcard_message_pane_ParamLimits

0x3ac6,	// (0x0002dd49) postcard_message_pane

0x3fde,	// (0x0002e261) call2_cli_visual_pane_t1_ParamLimits

0x3fde,	// (0x0002e261) call2_cli_visual_pane_t1

0xe543,	// (0x000387c6) postcard_message_pane_t1_ParamLimits

0xe543,	// (0x000387c6) postcard_message_pane_t1

0xe52b,	// (0x000387ae) postcard_address_pane_t1_ParamLimits

0xe52b,	// (0x000387ae) postcard_address_pane_t1

0x4432,	// (0x0002e6b5) popup_call3_audio_in_window_ParamLimits

0x4432,	// (0x0002e6b5) popup_call3_audio_in_window

0x42bd,	// (0x0002e540) bg_popup_call3_in_pane_ParamLimits

0x42bd,	// (0x0002e540) bg_popup_call3_in_pane

0x4333,	// (0x0002e5b6) popup_call3_audio_in_window_g1_ParamLimits

0x4333,	// (0x0002e5b6) popup_call3_audio_in_window_g1

0x4353,	// (0x0002e5d6) popup_call3_audio_in_window_g2_ParamLimits

0x4353,	// (0x0002e5d6) popup_call3_audio_in_window_g2

0x4373,	// (0x0002e5f6) popup_call3_audio_in_window_g3_ParamLimits

0x4373,	// (0x0002e5f6) popup_call3_audio_in_window_g3

0x0003,

0xf55a,	// (0x000397dd) popup_call3_audio_in_window_g_ParamLimits

0xf55a,	// (0x000397dd) popup_call3_audio_in_window_g

0x43a4,	// (0x0002e627) popup_call3_audio_in_window_t1_ParamLimits

0x43a4,	// (0x0002e627) popup_call3_audio_in_window_t1

0x43e2,	// (0x0002e665) popup_call3_audio_in_window_t2_ParamLimits

0x43e2,	// (0x0002e665) popup_call3_audio_in_window_t2

0x4420,	// (0x0002e6a3) popup_call3_audio_in_window_t3_ParamLimits

0x4420,	// (0x0002e6a3) popup_call3_audio_in_window_t3

0x0002,

0xf563,	// (0x000397e6) popup_call3_audio_in_window_t_ParamLimits

0xf563,	// (0x000397e6) popup_call3_audio_in_window_t

0xc786,	// (0x00036a09) bg_popup_call3_rect_pane

0xe2e4,	// (0x00038567) bg_popup_call3_rect_pane_g1

0xc69d,	// (0x00036920) bg_popup_call3_rect_pane_g2

0xe2ec,	// (0x0003856f) bg_popup_call3_rect_pane_g3

0xe2f4,	// (0x00038577) bg_popup_call3_rect_pane_g4

0xe2fc,	// (0x0003857f) bg_popup_call3_rect_pane_g5

0xe304,	// (0x00038587) bg_popup_call3_rect_pane_g6

0xe30c,	// (0x0003858f) bg_popup_call3_rect_pane_g7

0xbe20,	// (0x000360a3) mup_visualizer_osc_pane

0xbe20,	// (0x000360a3) mup_visualizer_spec_pane

0x42ed,	// (0x0002e570) call3_video_qcif_pane_ParamLimits

0x42ed,	// (0x0002e570) call3_video_qcif_pane

0x4300,	// (0x0002e583) call3_video_qcif_uncrop_pane_ParamLimits

0x4300,	// (0x0002e583) call3_video_qcif_uncrop_pane

0x430e,	// (0x0002e591) call3_video_subqcif_pane_ParamLimits

0x430e,	// (0x0002e591) call3_video_subqcif_pane

0x4322,	// (0x0002e5a5) call3_video_subqcif_uncrop_pane_ParamLimits

0x4322,	// (0x0002e5a5) call3_video_subqcif_uncrop_pane

0x4393,	// (0x0002e616) popup_call3_audio_in_window_g4_ParamLimits

0x4393,	// (0x0002e616) popup_call3_audio_in_window_g4

0xbe20,	// (0x000360a3) mup_spec_half_pane

0xbe20,	// (0x000360a3) mup_spec_half_pane_cp

0xbe20,	// (0x000360a3) mup_osc_middle_pane

0xc55f,	// (0x000367e2) mup_visualizer_osc_pane_g1

0xe4de,	// (0x00038761) mup_spec_bar_pane_ParamLimits

0xe4de,	// (0x00038761) mup_spec_bar_pane

0xc55f,	// (0x000367e2) mup_spec_bar_pane_g1

0xc55f,	// (0x000367e2) mup_spec_bar_pane_g2

0x0001,

0xf0af,	// (0x00039332) mup_spec_bar_pane_g

0x1ed7,	// (0x0002c15a) aid_cale_week_size_cell_pane_ParamLimits

0x1ef1,	// (0x0002c174) bg_cale_heading_pane_ParamLimits

0xc6e8,	// (0x0003696b) bg_cale_pane_cp01_ParamLimits

0x1f09,	// (0x0002c18c) cale_week_corner_pane_ParamLimits

0x1f28,	// (0x0002c1ab) cale_week_day_heading_pane_ParamLimits

0x1f45,	// (0x0002c1c8) cale_week_scroll_pane_g1_ParamLimits

0x1f58,	// (0x0002c1db) cale_week_scroll_pane_g2_ParamLimits

0x1f70,	// (0x0002c1f3) cale_week_scroll_pane_g3_ParamLimits

0x1f88,	// (0x0002c20b) cale_week_scroll_pane_g4_ParamLimits

0x1fa0,	// (0x0002c223) cale_week_scroll_pane_g5_ParamLimits

0x1fc0,	// (0x0002c243) cale_week_scroll_pane_g6_ParamLimits

0x1fe0,	// (0x0002c263) cale_week_scroll_pane_g7_ParamLimits

0x2000,	// (0x0002c283) cale_week_scroll_pane_g8_ParamLimits

0x2024,	// (0x0002c2a7) cale_week_scroll_pane_g9_ParamLimits

0x203c,	// (0x0002c2bf) cale_week_scroll_pane_g10_ParamLimits

0x2054,	// (0x0002c2d7) cale_week_scroll_pane_g11_ParamLimits

0x206c,	// (0x0002c2ef) cale_week_scroll_pane_g12_ParamLimits

0x2084,	// (0x0002c307) cale_week_scroll_pane_g13_ParamLimits

0x2084,	// (0x0002c307) cale_week_scroll_pane_g14_ParamLimits

0x2084,	// (0x0002c307) cale_week_scroll_pane_g15_ParamLimits

0xf126,	// (0x000393a9) cale_week_scroll_pane_g_ParamLimits

0x20c0,	// (0x0002c343) cale_week_time_pane_ParamLimits

0x20e4,	// (0x0002c367) grid_cale_week_pane_ParamLimits

0xc705,	// (0x00036988) listscroll_cale_week_pane_t1

0xc717,	// (0x0003699a) scroll_pane_cp08_ParamLimits

0x2a73,	// (0x0002ccf6) cale_month_corner_pane_ParamLimits

0xca78,	// (0x00036cfb) cale_month_pane_t1

0x2e8d,	// (0x0002d110) cale_month_week_pane_ParamLimits

0x33b9,	// (0x0002d63c) popup_call_status_window_g1_ParamLimits

0x33cd,	// (0x0002d650) popup_call_status_window_g2_ParamLimits

0x33e1,	// (0x0002d664) popup_call_status_window_g3_ParamLimits

0xf2a0,	// (0x00039523) popup_call_status_window_g_ParamLimits

0xce38,	// (0x000370bb) aid_call2_pane

0x3908,	// (0x0002db8b) msg_header_pane_g1

0x3ab4,	// (0x0002dd37) postcard_address2_pane_ParamLimits

0x3ab4,	// (0x0002dd37) postcard_address2_pane

0x3ac6,	// (0x0002dd49) postcard_message2_pane_ParamLimits

0x3ac6,	// (0x0002dd49) postcard_message2_pane

0x428d,	// (0x0002e510) message2_row_pane_ParamLimits

0x428d,	// (0x0002e510) message2_row_pane

0x42aa,	// (0x0002e52d) address2_row_pane_ParamLimits

0x42aa,	// (0x0002e52d) address2_row_pane

0xe4ab,	// (0x0003872e) postcard_message2_row_pane_g1

0xe4b3,	// (0x00038736) postcard_message2_row_pane_t1

0xe4ab,	// (0x0003872e) address2_row_pane_g1

0xe4b3,	// (0x00038736) address2_row_pane_t1

0x2348,	// (0x0002c5cb) aid_size_cell_vorec

0xc23d,	// (0x000364c0) main_rss_pane

0xe4c1,	// (0x00038744) rss_list_single_pane_ParamLimits

0xe4c1,	// (0x00038744) rss_list_single_pane

0xe4cf,	// (0x00038752) rss_list_single_pane_t1

0xe4cf,	// (0x00038752) rss_list_single_pane_t2

0x0001,

0xf54e,	// (0x000397d1) rss_list_single_pane_t

0xc23d,	// (0x000364c0) main_camera2_pane

0xc23d,	// (0x000364c0) main_video2_pane

0xb426,	// (0x000356a9) cams_zoom_pane_cp2_ParamLimits

0xb426,	// (0x000356a9) cams_zoom_pane_cp2

0xb426,	// (0x000356a9) image2_vga_pane_ParamLimits

0xb426,	// (0x000356a9) image2_vga_pane

0xb434,	// (0x000356b7) main_camera2_pane_g1_ParamLimits

0xb434,	// (0x000356b7) main_camera2_pane_g1

0xb434,	// (0x000356b7) main_camera2_pane_g2_ParamLimits

0xb434,	// (0x000356b7) main_camera2_pane_g2

0xb434,	// (0x000356b7) main_camera2_pane_g3_ParamLimits

0xb434,	// (0x000356b7) main_camera2_pane_g3

0xb434,	// (0x000356b7) main_camera2_pane_g4_ParamLimits

0xb434,	// (0x000356b7) main_camera2_pane_g4

0xb434,	// (0x000356b7) main_camera2_pane_g5_ParamLimits

0xb434,	// (0x000356b7) main_camera2_pane_g5

0xb434,	// (0x000356b7) main_camera2_pane_g6_ParamLimits

0xb434,	// (0x000356b7) main_camera2_pane_g6

0xb434,	// (0x000356b7) main_camera2_pane_g7_ParamLimits

0xb434,	// (0x000356b7) main_camera2_pane_g7

0xb434,	// (0x000356b7) main_camera2_pane_g8_ParamLimits

0xb434,	// (0x000356b7) main_camera2_pane_g8

0x0008,

0xf56a,	// (0x000397ed) main_camera2_pane_g_ParamLimits

0xf56a,	// (0x000397ed) main_camera2_pane_g

0x1045,	// (0x0002b2c8) main_camera2_pane_t1_ParamLimits

0x1045,	// (0x0002b2c8) main_camera2_pane_t1

0x1045,	// (0x0002b2c8) main_camera2_pane_t2_ParamLimits

0x1045,	// (0x0002b2c8) main_camera2_pane_t2

0x1045,	// (0x0002b2c8) main_camera2_pane_t3_ParamLimits

0x1045,	// (0x0002b2c8) main_camera2_pane_t3

0x1045,	// (0x0002b2c8) main_camera2_pane_t4_ParamLimits

0x1045,	// (0x0002b2c8) main_camera2_pane_t4

0x0006,

0xf57d,	// (0x00039800) main_camera2_pane_t_ParamLimits

0xf57d,	// (0x00039800) main_camera2_pane_t

0xb478,	// (0x000356fb) cams_zoom_pane_cp4_ParamLimits

0xb478,	// (0x000356fb) cams_zoom_pane_cp4

0x1059,	// (0x0002b2dc) image2_cif_pane_ParamLimits

0x1059,	// (0x0002b2dc) image2_cif_pane

0xb21b,	// (0x0003549e) image2_subqcif_pane_ParamLimits

0xb21b,	// (0x0003549e) image2_subqcif_pane

0x1067,	// (0x0002b2ea) main_video2_pane_g1_ParamLimits

0x1067,	// (0x0002b2ea) main_video2_pane_g1

0x1067,	// (0x0002b2ea) main_video2_pane_g2_ParamLimits

0x1067,	// (0x0002b2ea) main_video2_pane_g2

0x1067,	// (0x0002b2ea) main_video2_pane_g3_ParamLimits

0x1067,	// (0x0002b2ea) main_video2_pane_g3

0x1067,	// (0x0002b2ea) main_video2_pane_g4_ParamLimits

0x1067,	// (0x0002b2ea) main_video2_pane_g4

0x1067,	// (0x0002b2ea) main_video2_pane_g5_ParamLimits

0x1067,	// (0x0002b2ea) main_video2_pane_g5

0x1067,	// (0x0002b2ea) main_video2_pane_g6_ParamLimits

0x1067,	// (0x0002b2ea) main_video2_pane_g6

0x0005,

0xf58c,	// (0x0003980f) main_video2_pane_g_ParamLimits

0xf58c,	// (0x0003980f) main_video2_pane_g

0x1075,	// (0x0002b2f8) main_video2_pane_t1_ParamLimits

0x1075,	// (0x0002b2f8) main_video2_pane_t1

0x1075,	// (0x0002b2f8) main_video2_pane_t2_ParamLimits

0x1075,	// (0x0002b2f8) main_video2_pane_t2

0x1075,	// (0x0002b2f8) main_video2_pane_t3_ParamLimits

0x1075,	// (0x0002b2f8) main_video2_pane_t3

0x0002,

0xf599,	// (0x0003981c) main_video2_pane_t_ParamLimits

0xf599,	// (0x0003981c) main_video2_pane_t

0x4083,	// (0x0002e306) call_muted_g2

0x0001,

0xf540,	// (0x000397c3) call_muted_g

0xc23d,	// (0x000364c0) main_mup2_pane

0xd23c,	// (0x000374bf) main_mup2_pane_g1_ParamLimits

0xd23c,	// (0x000374bf) main_mup2_pane_g1

0xd23c,	// (0x000374bf) main_mup2_pane_g2_ParamLimits

0xd23c,	// (0x000374bf) main_mup2_pane_g2

0x44f3,	// (0x0002e776) main_mup_pane_g13_cp1

0xb229,	// (0x000354ac) mup_volume_pane_cp1

0xd23c,	// (0x000374bf) main_mup2_pane_g4_ParamLimits

0xd23c,	// (0x000374bf) main_mup2_pane_g4

0xd23c,	// (0x000374bf) main_mup2_pane_g5_ParamLimits

0xd23c,	// (0x000374bf) main_mup2_pane_g5

0xd23c,	// (0x000374bf) main_mup2_pane_g6_ParamLimits

0xd23c,	// (0x000374bf) main_mup2_pane_g6

0xd23c,	// (0x000374bf) main_mup2_pane_g7_ParamLimits

0xd23c,	// (0x000374bf) main_mup2_pane_g7

0x0006,

0xf5a0,	// (0x00039823) main_mup2_pane_g_ParamLimits

0xf5a0,	// (0x00039823) main_mup2_pane_g

0xd24a,	// (0x000374cd) main_mup2_pane_t1_ParamLimits

0xd24a,	// (0x000374cd) main_mup2_pane_t1

0xd24a,	// (0x000374cd) main_mup2_pane_t2_ParamLimits

0xd24a,	// (0x000374cd) main_mup2_pane_t2

0xd24a,	// (0x000374cd) main_mup2_pane_t3_ParamLimits

0xd24a,	// (0x000374cd) main_mup2_pane_t3

0xd24a,	// (0x000374cd) main_mup2_pane_t4_ParamLimits

0xd24a,	// (0x000374cd) main_mup2_pane_t4

0xd24a,	// (0x000374cd) main_mup2_pane_t5_ParamLimits

0xd24a,	// (0x000374cd) main_mup2_pane_t5

0xd24a,	// (0x000374cd) main_mup2_pane_t6_ParamLimits

0xd24a,	// (0x000374cd) main_mup2_pane_t6

0x0005,

0xf5af,	// (0x00039832) main_mup2_pane_t_ParamLimits

0xf5af,	// (0x00039832) main_mup2_pane_t

0xd25e,	// (0x000374e1) mup2_visualizer_pane_ParamLimits

0xd25e,	// (0x000374e1) mup2_visualizer_pane

0xd25e,	// (0x000374e1) mup_progress_pane_cp_ParamLimits

0xd25e,	// (0x000374e1) mup_progress_pane_cp

0xb49c,	// (0x0003571f) mup_volume_pane_cp_ParamLimits

0xb49c,	// (0x0003571f) mup_volume_pane_cp

0xc521,	// (0x000367a4) mup2_visualizer_pane_g1_ParamLimits

0xc521,	// (0x000367a4) mup2_visualizer_pane_g1

0xc52f,	// (0x000367b2) mup2_visualizer_pane_g2_ParamLimits

0xc52f,	// (0x000367b2) mup2_visualizer_pane_g2

0xc52f,	// (0x000367b2) mup2_visualizer_pane_g3_ParamLimits

0xc52f,	// (0x000367b2) mup2_visualizer_pane_g3

0x0002,

0xf09f,	// (0x00039322) mup2_visualizer_pane_g_ParamLimits

0xf09f,	// (0x00039322) mup2_visualizer_pane_g

0xbe20,	// (0x000360a3) aid_size_cell_fmradio

0x0d83,	// (0x0002b006) aid_height_parent_landcape

0xc8d6,	// (0x00036b59) wml_content_pane_cp

0xc8de,	// (0x00036b61) wml_tabs_pane

0xc8e7,	// (0x00036b6a) popup_wml_miniature_window

0xc8ef,	// (0x00036b72) scroll_pane_cp021

0xc903,	// (0x00036b86) wml_content_pane_comp8

0xc23d,	// (0x000364c0) bg_popup_sub_pane_cp05

0xe575,	// (0x000387f8) popup_wml_miniature_window_g1

0xe57d,	// (0x00038800) wml_miniature_view_pane

0x4446,	// (0x0002e6c9) aid_size_wml_view

0x444e,	// (0x0002e6d1) wml_miniature_view_pane_g1

0x4457,	// (0x0002e6da) wml_miniature_view_pane_g2

0x4460,	// (0x0002e6e3) wml_miniature_view_pane_g3

0x4468,	// (0x0002e6eb) wml_miniature_view_pane_g4

0x4470,	// (0x0002e6f3) wml_miniature_view_pane_g5

0x4478,	// (0x0002e6fb) wml_miniature_view_pane_g6

0x4480,	// (0x0002e703) wml_miniature_view_pane_g7

0x4488,	// (0x0002e70b) wml_miniature_view_pane_g8

0x0007,

0xf5bc,	// (0x0003983f) wml_miniature_view_pane_g

0xe585,	// (0x00038808) background_graphic_ParamLimits

0xe585,	// (0x00038808) background_graphic

0xe591,	// (0x00038814) wml_tabs_2_pane

0xe59a,	// (0x0003881d) wml_tabs_3_pane_ParamLimits

0xe59a,	// (0x0003881d) wml_tabs_3_pane

0xe5ac,	// (0x0003882f) wml_tabs_4_pane_ParamLimits

0xe5ac,	// (0x0003882f) wml_tabs_4_pane

0xe5c2,	// (0x00038845) wml_tabs_5_pane_ParamLimits

0xe5c2,	// (0x00038845) wml_tabs_5_pane

0xe5dc,	// (0x0003885f) wml_tabs_pane_g2_ParamLimits

0xe5dc,	// (0x0003885f) wml_tabs_pane_g2

0xe5f1,	// (0x00038874) wml_tabs_pane_g3_ParamLimits

0xe5f1,	// (0x00038874) wml_tabs_pane_g3

0xe606,	// (0x00038889) wml_tabs_2_active_pane_ParamLimits

0xe606,	// (0x00038889) wml_tabs_2_active_pane

0xe606,	// (0x00038889) wml_tabs_2_passive_pane_ParamLimits

0xe606,	// (0x00038889) wml_tabs_2_passive_pane

0x4490,	// (0x0002e713) wml_tabs_3_active_pane_cp_ParamLimits

0x4490,	// (0x0002e713) wml_tabs_3_active_pane_cp

0x44a5,	// (0x0002e728) wml_tabs_3_passive_pane_ParamLimits

0x44a5,	// (0x0002e728) wml_tabs_3_passive_pane

0x44b8,	// (0x0002e73b) wml_tabs_3_passive_pane_cp_ParamLimits

0x44b8,	// (0x0002e73b) wml_tabs_3_passive_pane_cp

0x44cf,	// (0x0002e752) tabs_4_active_pane

0x44d7,	// (0x0002e75a) tabs_4_passive_pane

0x44e1,	// (0x0002e764) tabs_4_passive_pane_cp

0x44e9,	// (0x0002e76c) tabs_4_passive_pane_cp2

0x3ff9,	// (0x0002e27c) aid_height_text

0xd25e,	// (0x000374e1) mup_volume_cont_pane_ParamLimits

0xd25e,	// (0x000374e1) mup_volume_cont_pane

0xbe20,	// (0x000360a3) aid_size_cell_pinb

0xbe20,	// (0x000360a3) aid_size_list_pinb

0xd25e,	// (0x000374e1) mup2_volume_cont_pane_ParamLimits

0xd25e,	// (0x000374e1) mup2_volume_cont_pane

0xb486,	// (0x00035709) mup2_volume_cont_pane_g1_ParamLimits

0xb486,	// (0x00035709) mup2_volume_cont_pane_g1

0x08d3,	// (0x0002ab56) aid_size_cell_touch_ParamLimits

0x08d3,	// (0x0002ab56) aid_size_cell_touch

0x0aba,	// (0x0002ad3d) touch_pane_ParamLimits

0x0aba,	// (0x0002ad3d) touch_pane

0xb229,	// (0x000354ac) main_rss2_pane

0xe61d,	// (0x000388a0) listscroll_rss2_pane

0xe626,	// (0x000388a9) rss2_navigation_pane

0xe62e,	// (0x000388b1) list_rss2_pane

0xcf51,	// (0x000371d4) scroll_pane_cp22

0xe636,	// (0x000388b9) rss2_navigation_pane_g1

0xe63f,	// (0x000388c2) rss2_navigation_pane_g2

0xe647,	// (0x000388ca) rss2_navigation_pane_g3

0x0002,

0xf5cd,	// (0x00039850) rss2_navigation_pane_g

0xe64f,	// (0x000388d2) rss2_navigation_pane_t1

0x44fd,	// (0x0002e780) rss2_list_single_pane_ParamLimits

0x44fd,	// (0x0002e780) rss2_list_single_pane

0xe66b,	// (0x000388ee) rss2_list_single_pane_t2

0xe679,	// (0x000388fc) rss2_list_single_pane_t3_ParamLimits

0xe679,	// (0x000388fc) rss2_list_single_pane_t3

0xe696,	// (0x00038919) rss2_list_single_pane_t4

0x3289,	// (0x0002d50c) smil_status_pane_g1

0xb21b,	// (0x0003549e) main_image2_pane_ParamLimits

0xb21b,	// (0x0003549e) main_image2_pane

0xb434,	// (0x000356b7) main_camera2_pane_g9_ParamLimits

0xb434,	// (0x000356b7) main_camera2_pane_g9

0x1045,	// (0x0002b2c8) main_camera2_pane_t5_ParamLimits

0x1045,	// (0x0002b2c8) main_camera2_pane_t5

0xb442,	// (0x000356c5) main_camera2_pane_t6_ParamLimits

0xb442,	// (0x000356c5) main_camera2_pane_t6

0x4513,	// (0x0002e796) main_image2_pane_g1_ParamLimits

0x4513,	// (0x0002e796) main_image2_pane_g1

0x3ccc,	// (0x0002df4f) smil2_video_pane_ParamLimits

0x3ccc,	// (0x0002df4f) smil2_video_pane

0xb1ca,	// (0x0003544d) aid_zoom_text_primary_cp

0xb211,	// (0x00035494) popup_preview_fixed_window

0xc83f,	// (0x00036ac2) im_reading_pane_g1

0x1037,	// (0x0002b2ba) cams2_bc_adjust_pane_cp_ParamLimits

0x1037,	// (0x0002b2ba) cams2_bc_adjust_pane_cp

0xb46a,	// (0x000356ed) cams2_bc_adjust_pane_ParamLimits

0xb46a,	// (0x000356ed) cams2_bc_adjust_pane

0x44f3,	// (0x0002e776) cams2_bc_adjust_pane_g1

0xb229,	// (0x000354ac) cams2_slider_pane

0x44f3,	// (0x0002e776) cams2_slider_pane_g1

0x44f3,	// (0x0002e776) cams2_slider_pane_g2

0x0006,

0xf5d4,	// (0x00039857) cams2_slider_pane_g

0x0b2a,	// (0x0002adad) calc_display_pane_ParamLimits

0x0b4f,	// (0x0002add2) calc_paper_pane_ParamLimits

0x0b72,	// (0x0002adf5) grid_calc_pane_ParamLimits

0xb34b,	// (0x000355ce) popup_clock_digital_window_t1_ParamLimits

0xd414,	// (0x00037697) main_image_pane_t1

0x0b0c,	// (0x0002ad8f) aid_size_cell_calc_ParamLimits

0x0b0c,	// (0x0002ad8f) aid_size_cell_calc

0x0ddb,	// (0x0002b05e) popup_blid_sat_info2_window_ParamLimits

0x0ddb,	// (0x0002b05e) popup_blid_sat_info2_window

0xe6a4,	// (0x00038927) aid_size_cell_blid

0xe65d,	// (0x000388e0) bg_popup_window_pane_cp07

0xe6c1,	// (0x00038944) grid_popup_blid_pane

0xe6cb,	// (0x0003894e) heading_pane_cp05_ParamLimits

0xe6cb,	// (0x0003894e) heading_pane_cp05

0xe795,	// (0x00038a18) cell_popup_blid_pane_ParamLimits

0xe795,	// (0x00038a18) cell_popup_blid_pane

0xe7b9,	// (0x00038a3c) cell_popup_blid_pane_g1

0xe7c1,	// (0x00038a44) cell_popup_blid_pane_t1

0xd25e,	// (0x000374e1) mup2_indicator_pane_ParamLimits

0xd25e,	// (0x000374e1) mup2_indicator_pane

0xbe20,	// (0x000360a3) mup2_visualizer_osc_pane

0xe55f,	// (0x000387e2) mup2_visualizer_spec_pane_ParamLimits

0xe55f,	// (0x000387e2) mup2_visualizer_spec_pane

0xbe20,	// (0x000360a3) mup2_spec_half_pane

0xbe20,	// (0x000360a3) mup2_spec_half_pane_cp

0xe7cf,	// (0x00038a52) mup2_spec_bar_pane_ParamLimits

0xe7cf,	// (0x00038a52) mup2_spec_bar_pane

0xc55f,	// (0x000367e2) mup2_spec_bar_pane_g1

0xe7ee,	// (0x00038a71) mup2_spec_bar_pane_g2

0x0001,

0xf5fa,	// (0x0003987d) mup2_spec_bar_pane_g

0xbe20,	// (0x000360a3) mup2_osc_middle_pane

0xc55f,	// (0x000367e2) mup2_visualizer_osc_pane_g1

0xbe4a,	// (0x000360cd) popup_number_entry_window_t1_ParamLimits

0xbe5d,	// (0x000360e0) popup_number_entry_window_t2_ParamLimits

0xbe6f,	// (0x000360f2) popup_number_entry_window_t3_ParamLimits

0x1d47,	// (0x0002bfca) popup_number_entry_window_t5_ParamLimits

0x1d47,	// (0x0002bfca) popup_number_entry_window_t5

0xf040,	// (0x000392c3) popup_number_entry_window_t_ParamLimits

0xbe81,	// (0x00036104) text_title_cp2_ParamLimits

0xb38a,	// (0x0003560d) aid_hotspot_pointer_text2_pane

0xb3a4,	// (0x00035627) main_viewer_pane_g9_ParamLimits

0xb3a4,	// (0x00035627) main_viewer_pane_g9

0xca78,	// (0x00036cfb) cale_month_pane_t1_ParamLimits

0xcab5,	// (0x00036d38) bg_cale_pane_ParamLimits

0xcacd,	// (0x00036d50) list_cale_pane_ParamLimits

0xcade,	// (0x00036d61) listscroll_cale_day_pane_t1

0xcaf0,	// (0x00036d73) scroll_pane_cp09_ParamLimits

0x368e,	// (0x0002d911) main_mup_eq_pane_t1_ParamLimits

0x368e,	// (0x0002d911) main_mup_eq_pane_t1

0x36a8,	// (0x0002d92b) main_mup_eq_pane_t2_ParamLimits

0x36a8,	// (0x0002d92b) main_mup_eq_pane_t2

0x36c2,	// (0x0002d945) main_mup_eq_pane_t3_ParamLimits

0x36c2,	// (0x0002d945) main_mup_eq_pane_t3

0x36de,	// (0x0002d961) main_mup_eq_pane_t4_ParamLimits

0x36de,	// (0x0002d961) main_mup_eq_pane_t4

0x36fa,	// (0x0002d97d) main_mup_eq_pane_t5_ParamLimits

0x36fa,	// (0x0002d97d) main_mup_eq_pane_t5

0x3716,	// (0x0002d999) main_mup_eq_pane_t6_ParamLimits

0x3716,	// (0x0002d999) main_mup_eq_pane_t6

0x372a,	// (0x0002d9ad) main_mup_eq_pane_t7_ParamLimits

0x372a,	// (0x0002d9ad) main_mup_eq_pane_t7

0x373e,	// (0x0002d9c1) main_mup_eq_pane_t8_ParamLimits

0x373e,	// (0x0002d9c1) main_mup_eq_pane_t8

0x3752,	// (0x0002d9d5) main_mup_eq_pane_t9_ParamLimits

0x3752,	// (0x0002d9d5) main_mup_eq_pane_t9

0x376c,	// (0x0002d9ef) main_mup_eq_pane_t10_ParamLimits

0x376c,	// (0x0002d9ef) main_mup_eq_pane_t10

0x0009,

0xf39a,	// (0x0003961d) main_mup_eq_pane_t_ParamLimits

0xf39a,	// (0x0003961d) main_mup_eq_pane_t

0x381b,	// (0x0002da9e) mup_equalizer_pane_cp5_ParamLimits

0x382f,	// (0x0002dab2) mup_equalizer_pane_cp6_ParamLimits

0x3843,	// (0x0002dac6) mup_equalizer_pane_cp7_ParamLimits

0xb229,	// (0x000354ac) main_gallery_pane

0xe4fd,	// (0x00038780) smil2_volume_pane

0xe505,	// (0x00038788) smil_status_volume_pane_g1_ParamLimits

0xe518,	// (0x0003879b) smil_status_volume_pane_g2_ParamLimits

0xb404,	// (0x00035687) smil_status_volume_pane_g3_ParamLimits

0xf553,	// (0x000397d6) smil_status_volume_pane_g_ParamLimits

0xe65d,	// (0x000388e0) bg_popup_window_pane_cp07_ParamLimits

0xe6ac,	// (0x0003892f) blid_firmament_pane

0xc40e,	// (0x00036691) aid_size_cell_gallery_ParamLimits

0xc40e,	// (0x00036691) aid_size_cell_gallery

0xc40e,	// (0x00036691) grid_gallery_pane_ParamLimits

0xc40e,	// (0x00036691) grid_gallery_pane

0xe65d,	// (0x000388e0) cell_gallery_pane_ParamLimits

0xe65d,	// (0x000388e0) cell_gallery_pane

0xc40e,	// (0x00036691) bg_cell_gallery_focus_pane_ParamLimits

0xc40e,	// (0x00036691) bg_cell_gallery_focus_pane

0xc521,	// (0x000367a4) cell_gallery_pane_g1_ParamLimits

0xc521,	// (0x000367a4) cell_gallery_pane_g1

0xc521,	// (0x000367a4) cell_gallery_pane_g2_ParamLimits

0xc521,	// (0x000367a4) cell_gallery_pane_g2

0xc521,	// (0x000367a4) cell_gallery_pane_g3_ParamLimits

0xc521,	// (0x000367a4) cell_gallery_pane_g3

0xc52f,	// (0x000367b2) cell_gallery_pane_g4_ParamLimits

0xc52f,	// (0x000367b2) cell_gallery_pane_g4

0x0003,

0x002a,	// (0x0002a2ad) cell_gallery_pane_g_ParamLimits

0x002a,	// (0x0002a2ad) cell_gallery_pane_g

0xe7f8,	// (0x00038a7b) bg_cell_gallery_focus_pane_g1

0xe800,	// (0x00038a83) bg_cell_gallery_focus_pane_g2

0xe808,	// (0x00038a8b) bg_cell_gallery_focus_pane_g3

0xe810,	// (0x00038a93) bg_cell_gallery_focus_pane_g4

0xe818,	// (0x00038a9b) bg_cell_gallery_focus_pane_g5

0xe820,	// (0x00038aa3) bg_cell_gallery_focus_pane_g6

0xe828,	// (0x00038aab) bg_cell_gallery_focus_pane_g7

0xe830,	// (0x00038ab3) bg_cell_gallery_focus_pane_g8

0x0007,

0xf5ff,	// (0x00039882) bg_cell_gallery_focus_pane_g

0xe838,	// (0x00038abb) aid_firma_cardinal

0xe84c,	// (0x00038acf) blid_firmament_pane_t1

0xe863,	// (0x00038ae6) blid_firmament_pane_t2

0xe87a,	// (0x00038afd) blid_firmament_pane_t3

0xe891,	// (0x00038b14) blid_firmament_pane_t4

0x0003,

0xf610,	// (0x00039893) blid_firmament_pane_t

0xe8a8,	// (0x00038b2b) blid_sat_info_pane

0xc55f,	// (0x000367e2) blid_sat_info_pane_g1

0xc55f,	// (0x000367e2) blid_sat_info_pane_g2

0x0001,

0xf0af,	// (0x00039332) blid_sat_info_pane_g

0xe8b8,	// (0x00038b3b) blid_sat_info_pane_t1

0xe8c6,	// (0x00038b49) smil2_volume_content_pane

0xe8cf,	// (0x00038b52) smil2_volume_pane_g1

0xc634,	// (0x000368b7) smil2_volume_content_pane_g1

0xe8d7,	// (0x00038b5a) smil2_volume_content_pane_g2

0xe8e0,	// (0x00038b63) smil2_volume_content_pane_g3

0xe8e9,	// (0x00038b6c) smil2_volume_content_pane_g4

0xe8f2,	// (0x00038b75) smil2_volume_content_pane_g5

0xe8fb,	// (0x00038b7e) smil2_volume_content_pane_g6

0xe904,	// (0x00038b87) smil2_volume_content_pane_g7

0xe90d,	// (0x00038b90) smil2_volume_content_pane_g8

0xe916,	// (0x00038b99) smil2_volume_content_pane_g9

0xe91f,	// (0x00038ba2) smil2_volume_content_pane_g10

0x0009,

0xf619,	// (0x0003989c) smil2_volume_content_pane_g

0x2198,	// (0x0002c41b) cale_week_day_heading_pane_t1_ParamLimits

0x21c2,	// (0x0002c445) cale_week_day_heading_pane_t2_ParamLimits

0x21f1,	// (0x0002c474) cale_week_day_heading_pane_t3_ParamLimits

0x2220,	// (0x0002c4a3) cale_week_day_heading_pane_t4_ParamLimits

0x224f,	// (0x0002c4d2) cale_week_day_heading_pane_t5_ParamLimits

0x2286,	// (0x0002c509) cale_week_day_heading_pane_t6_ParamLimits

0x22bd,	// (0x0002c540) cale_week_day_heading_pane_t7_ParamLimits

0xf147,	// (0x000393ca) cale_week_day_heading_pane_t_ParamLimits

0xc734,	// (0x000369b7) bg_cale_side_pane_ParamLimits

0x0c49,	// (0x0002aecc) cale_week_time_pane_t1_ParamLimits

0x0c63,	// (0x0002aee6) cale_week_time_pane_t2_ParamLimits

0x0c7d,	// (0x0002af00) cale_week_time_pane_t3_ParamLimits

0x0c97,	// (0x0002af1a) cale_week_time_pane_t4_ParamLimits

0x0cb1,	// (0x0002af34) cale_week_time_pane_t5_ParamLimits

0x0ccb,	// (0x0002af4e) cale_week_time_pane_t6_ParamLimits

0x0ce5,	// (0x0002af68) cale_week_time_pane_t7_ParamLimits

0x0cff,	// (0x0002af82) cale_week_time_pane_t8_ParamLimits

0xf156,	// (0x000393d9) cale_week_time_pane_t_ParamLimits

0x22e7,	// (0x0002c56a) cell_cale_week_pane_g2_ParamLimits

0xc734,	// (0x000369b7) bg_cale_side_pane_cp01_ParamLimits

0x30ba,	// (0x0002d33d) cale_month_week_pane_t1_ParamLimits

0x30d3,	// (0x0002d356) cale_month_week_pane_t2_ParamLimits

0x30ec,	// (0x0002d36f) cale_month_week_pane_t3_ParamLimits

0x3105,	// (0x0002d388) cale_month_week_pane_t4_ParamLimits

0x311e,	// (0x0002d3a1) cale_month_week_pane_t5_ParamLimits

0x3137,	// (0x0002d3ba) cale_month_week_pane_t6_ParamLimits

0xf224,	// (0x000394a7) cale_month_week_pane_t_ParamLimits

0xb2cb,	// (0x0003554e) cell_cale_month_pane_g1_ParamLimits

0xb229,	// (0x000354ac) main_cale_event_viewer_pane

0xbe20,	// (0x000360a3) listscroll_cale_event_viewer_pane

0xe928,	// (0x00038bab) list_cale_ev_pane

0xe930,	// (0x00038bb3) scroll_pane_cp023

0xe93c,	// (0x00038bbf) field_cale_ev_pane_ParamLimits

0xe93c,	// (0x00038bbf) field_cale_ev_pane

0xe95a,	// (0x00038bdd) field_cale_ev_content_pane_ParamLimits

0xe95a,	// (0x00038bdd) field_cale_ev_content_pane

0xe966,	// (0x00038be9) field_cale_ev_pane_g1_ParamLimits

0xe966,	// (0x00038be9) field_cale_ev_pane_g1

0xe972,	// (0x00038bf5) field_cale_ev_pane_g2_ParamLimits

0xe972,	// (0x00038bf5) field_cale_ev_pane_g2

0xe98a,	// (0x00038c0d) field_cale_ev_pane_g3_ParamLimits

0xe98a,	// (0x00038c0d) field_cale_ev_pane_g3

0x0002,

0xf62e,	// (0x000398b1) field_cale_ev_pane_g_ParamLimits

0xf62e,	// (0x000398b1) field_cale_ev_pane_g

0xe9a2,	// (0x00038c25) field_cale_ev_pane_t1_ParamLimits

0xe9a2,	// (0x00038c25) field_cale_ev_pane_t1

0xe9b9,	// (0x00038c3c) field_cale_ev_content_pane_t1_ParamLimits

0xe9b9,	// (0x00038c3c) field_cale_ev_content_pane_t1

0xd301,	// (0x00037584) bg_button_pane_cp01

0x1ec5,	// (0x0002c148) listscroll_cale_week_pane_ParamLimits

0xc6df,	// (0x00036962) popup_toolbar_window_cp01

0xc705,	// (0x00036988) listscroll_cale_week_pane_t1_ParamLimits

0x1ec5,	// (0x0002c148) listscroll_cale_day_pane_ParamLimits

0xc6df,	// (0x00036962) popup_toolbar_window_cp02

0xcade,	// (0x00036d61) listscroll_cale_day_pane_t1_ParamLimits

0x0da1,	// (0x0002b024) main_cale_month_pane_ParamLimits

0xb3ef,	// (0x00035672) popup_toolbar_window_cp03_ParamLimits

0xb3ef,	// (0x00035672) popup_toolbar_window_cp03

0x3b94,	// (0x0002de17) main_image_pane_g2_ParamLimits

0x3b94,	// (0x0002de17) main_image_pane_g2

0x3ba5,	// (0x0002de28) main_image_pane_g3_ParamLimits

0x3ba5,	// (0x0002de28) main_image_pane_g3

0x0002,

0xf42c,	// (0x000396af) main_image_pane_g_ParamLimits

0xf42c,	// (0x000396af) main_image_pane_g

0xd414,	// (0x00037697) main_image_pane_t1_ParamLimits

0x3bb6,	// (0x0002de39) main_image_pane_t2_ParamLimits

0x3bb6,	// (0x0002de39) main_image_pane_t2

0x3bc8,	// (0x0002de4b) main_image_pane_t3_ParamLimits

0x3bc8,	// (0x0002de4b) main_image_pane_t3

0x3bf0,	// (0x0002de73) main_image_pane_t4_ParamLimits

0x3bf0,	// (0x0002de73) main_image_pane_t4

0x0003,

0xf433,	// (0x000396b6) main_image_pane_t_ParamLimits

0xf433,	// (0x000396b6) main_image_pane_t

0x3c10,	// (0x0002de93) popup_image_details_window_cp01

0x3c1a,	// (0x0002de9d) popup_toobar_trans_pane_cp01_ParamLimits

0x3c1a,	// (0x0002de9d) popup_toobar_trans_pane_cp01

0x0eac,	// (0x0002b12f) popup_image_details_window_ParamLimits

0x0eac,	// (0x0002b12f) popup_image_details_window

0xb3c2,	// (0x00035645) popup_image_focus_window

0xb426,	// (0x000356a9) camera2_autofocus_pane_ParamLimits

0xb426,	// (0x000356a9) camera2_autofocus_pane

0xbe20,	// (0x000360a3) bg_popup_sub_pane_cp06

0xe9d7,	// (0x00038c5a) popup_image_focus_window_g1

0xe9df,	// (0x00038c62) popup_image_focus_window_g2

0xe9e7,	// (0x00038c6a) popup_image_focus_window_g3

0xe9ef,	// (0x00038c72) popup_image_focus_window_g4

0x0003,

0xf635,	// (0x000398b8) popup_image_focus_window_g

0xe9f7,	// (0x00038c7a) popup_image_focus_window_t1

0xea05,	// (0x00038c88) popup_image_focus_window_t2

0xea15,	// (0x00038c98) popup_image_focus_window_t3

0x0002,

0xf63e,	// (0x000398c1) popup_image_focus_window_t

0xc521,	// (0x000367a4) camera2_autofocus_pane_g1

0xc40e,	// (0x00036691) bg_tb_trans_pane_cp01

0xea23,	// (0x00038ca6) popup_image_details_window_g1

0xea36,	// (0x00038cb9) popup_image_details_window_g2

0x0002,

0xf645,	// (0x000398c8) popup_image_details_window_g

0xea5f,	// (0x00038ce2) popup_image_details_window_t1

0xea71,	// (0x00038cf4) popup_image_details_window_t2

0xea8a,	// (0x00038d0d) popup_image_details_window_t3

0xea9e,	// (0x00038d21) popup_image_details_window_t4

0xeab9,	// (0x00038d3c) popup_image_details_window_t5

0x0004,

0xf64c,	// (0x000398cf) popup_image_details_window_t

0xc5a9,	// (0x0003682c) bg_calc_paper_pane_ParamLimits

0xb229,	// (0x000354ac) grid_highlight_pane_cp013

0xb23b,	// (0x000354be) list_calc_pane_ParamLimits

0xb24d,	// (0x000354d0) scroll_pane_cp024

0xc5bd,	// (0x00036840) bg_calc_display_pane_ParamLimits

0x0ba0,	// (0x0002ae23) calc_display_pane_t1_ParamLimits

0x0bb2,	// (0x0002ae35) calc_display_pane_t2_ParamLimits

0xb255,	// (0x000354d8) calc_display_pane_t3_ParamLimits

0xf0c7,	// (0x0003934a) calc_display_pane_t_ParamLimits

0x0c13,	// (0x0002ae96) cell_calc_pane_g2

0x0001,

0xf0e4,	// (0x00039367) cell_calc_pane_g

0x0c1c,	// (0x0002ae9f) cell_calc_pane_t1

0xc612,	// (0x00036895) grid_highlight_pane_cp02_ParamLimits

0xc628,	// (0x000368ab) toolbar_button_pane_cp01_ParamLimits

0xc628,	// (0x000368ab) toolbar_button_pane_cp01

0xd459,	// (0x000376dc) temp_image_control_pane_ParamLimits

0xd459,	// (0x000376dc) temp_image_control_pane

0xb21b,	// (0x0003549e) main_mp3_pane

0xead3,	// (0x00038d56) temp_image_control_pane_g1_ParamLimits

0xead3,	// (0x00038d56) temp_image_control_pane_g1

0xeae1,	// (0x00038d64) temp_image_control_pane_g2_ParamLimits

0xeae1,	// (0x00038d64) temp_image_control_pane_g2

0xeaf3,	// (0x00038d76) temp_image_control_pane_g3_ParamLimits

0xeaf3,	// (0x00038d76) temp_image_control_pane_g3

0x4529,	// (0x0002e7ac) temp_image_control_pane_g4_ParamLimits

0x4529,	// (0x0002e7ac) temp_image_control_pane_g4

0x0003,

0xf657,	// (0x000398da) temp_image_control_pane_g_ParamLimits

0xf657,	// (0x000398da) temp_image_control_pane_g

0xead3,	// (0x00038d56) main_mp3_pane_g1

0x453c,	// (0x0002e7bf) main_mp3_pane_g2

0x0007,

0xf660,	// (0x000398e3) main_mp3_pane_g

0xeb28,	// (0x00038dab) main_mp3_pane_t1

0xc52f,	// (0x000367b2) main_camera_pane_g8_ParamLimits

0xc52f,	// (0x000367b2) main_camera_pane_g8

0x24b5,	// (0x0002c738) main_video_pane_g7_ParamLimits

0x24b5,	// (0x0002c738) main_video_pane_g7

0xb456,	// (0x000356d9) main_camera2_pane_t7_ParamLimits

0xb456,	// (0x000356d9) main_camera2_pane_t7

0xc896,	// (0x00036b19) scroll_pane_cp025_ParamLimits

0xc896,	// (0x00036b19) scroll_pane_cp025

0xc8aa,	// (0x00036b2d) scroll_pane_cp026_ParamLimits

0xc8aa,	// (0x00036b2d) scroll_pane_cp026

0xc8b9,	// (0x00036b3c) wml_content_pane_ParamLimits

0xb229,	// (0x000354ac) main_touch_calib_pane

0x4610,	// (0x0002e893) main_touch_calib_pane_g1

0x4622,	// (0x0002e8a5) main_touch_calib_pane_g2

0x4634,	// (0x0002e8b7) main_touch_calib_pane_g3

0x4646,	// (0x0002e8c9) main_touch_calib_pane_g4

0x0003,

0xf67e,	// (0x00039901) main_touch_calib_pane_g

0x4658,	// (0x0002e8db) main_touch_calib_pane_t1

0x4672,	// (0x0002e8f5) main_touch_calib_pane_t2

0x0004,

0xf687,	// (0x0003990a) main_touch_calib_pane_t

0xd020,	// (0x000372a3) mup_progress_pane_cp02

0xd055,	// (0x000372d8) navi_pane_g1

0xd110,	// (0x00037393) navi_pane_mp_t3

0xb21b,	// (0x0003549e) main_mp3_pane_ParamLimits

0x4235,	// (0x0002e4b8) navi_pane_ParamLimits

0xead3,	// (0x00038d56) main_mp3_pane_g1_ParamLimits

0x453c,	// (0x0002e7bf) main_mp3_pane_g2_ParamLimits

0x454a,	// (0x0002e7cd) main_mp3_pane_g3_ParamLimits

0x454a,	// (0x0002e7cd) main_mp3_pane_g3

0x4558,	// (0x0002e7db) main_mp3_pane_g4_ParamLimits

0x4558,	// (0x0002e7db) main_mp3_pane_g4

0xc521,	// (0x000367a4) main_mp3_pane_g5_ParamLimits

0xc521,	// (0x000367a4) main_mp3_pane_g5

0xeb03,	// (0x00038d86) main_mp3_pane_g6_ParamLimits

0xeb03,	// (0x00038d86) main_mp3_pane_g6

0xeb10,	// (0x00038d93) main_mp3_pane_g7_ParamLimits

0xeb10,	// (0x00038d93) main_mp3_pane_g7

0xeb1c,	// (0x00038d9f) main_mp3_pane_g8_ParamLimits

0xeb1c,	// (0x00038d9f) main_mp3_pane_g8

0xf660,	// (0x000398e3) main_mp3_pane_g_ParamLimits

0x4564,	// (0x0002e7e7) main_mp3_pane_t2

0x4572,	// (0x0002e7f5) main_mp3_pane_t3

0xeb36,	// (0x00038db9) main_mp3_pane_t4

0xeb44,	// (0x00038dc7) main_mp3_pane_t5

0x0005,

0xf671,	// (0x000398f4) main_mp3_pane_t

0xeb52,	// (0x00038dd5) mup_progress_pane_cp01

0xb1ca,	// (0x0003544d) aid_zoom_text_secondary2

0xe928,	// (0x00038bab) list_cale_ev2_pane

0xe930,	// (0x00038bb3) scroll_pane_cp023_ParamLimits

0x46c8,	// (0x0002e94b) field_cale_ev2_pane_ParamLimits

0x46c8,	// (0x0002e94b) field_cale_ev2_pane

0xeb5a,	// (0x00038ddd) field_cale_ev2_pane_g1_ParamLimits

0xeb5a,	// (0x00038ddd) field_cale_ev2_pane_g1

0xeb66,	// (0x00038de9) field_cale_ev2_pane_g2_ParamLimits

0xeb66,	// (0x00038de9) field_cale_ev2_pane_g2

0xeb7e,	// (0x00038e01) field_cale_ev2_pane_g3_ParamLimits

0xeb7e,	// (0x00038e01) field_cale_ev2_pane_g3

0x0003,

0xf692,	// (0x00039915) field_cale_ev2_pane_g_ParamLimits

0xf692,	// (0x00039915) field_cale_ev2_pane_g

0xeba2,	// (0x00038e25) field_cale_ev2_pane_t1_ParamLimits

0xeba2,	// (0x00038e25) field_cale_ev2_pane_t1

0xebb9,	// (0x00038e3c) field_cale_ev2_pane_t2_ParamLimits

0xebb9,	// (0x00038e3c) field_cale_ev2_pane_t2

0x0001,

0xf69b,	// (0x0003991e) field_cale_ev2_pane_t_ParamLimits

0xf69b,	// (0x0003991e) field_cale_ev2_pane_t

0x3a6a,	// (0x0002dced) main_postcard_pane_g5_ParamLimits

0x3a6a,	// (0x0002dced) main_postcard_pane_g5

0x3a80,	// (0x0002dd03) main_postcard_pane_g6_ParamLimits

0x3a80,	// (0x0002dd03) main_postcard_pane_g6

0xc40e,	// (0x00036691) camera2_autofocus_pane_cp_ParamLimits

0xc40e,	// (0x00036691) camera2_autofocus_pane_cp

0xb21b,	// (0x0003549e) main_mup3_pane

0x472d,	// (0x0002e9b0) main_mup3_pane_g1_ParamLimits

0x472d,	// (0x0002e9b0) main_mup3_pane_g1

0x474f,	// (0x0002e9d2) main_mup3_pane_g2_ParamLimits

0x474f,	// (0x0002e9d2) main_mup3_pane_g2

0x47cf,	// (0x0002ea52) main_mup3_pane_g3_ParamLimits

0x47cf,	// (0x0002ea52) main_mup3_pane_g3

0x4815,	// (0x0002ea98) main_mup3_pane_g4_ParamLimits

0x4815,	// (0x0002ea98) main_mup3_pane_g4

0x485b,	// (0x0002eade) main_mup3_pane_g5_ParamLimits

0x485b,	// (0x0002eade) main_mup3_pane_g5

0x48a1,	// (0x0002eb24) main_mup3_pane_g6_ParamLimits

0x48a1,	// (0x0002eb24) main_mup3_pane_g6

0xc52f,	// (0x000367b2) main_mup3_pane_g7_ParamLimits

0xc52f,	// (0x000367b2) main_mup3_pane_g7

0x0007,

0xf6ab,	// (0x0003992e) main_mup3_pane_g_ParamLimits

0xf6ab,	// (0x0003992e) main_mup3_pane_g

0x491f,	// (0x0002eba2) main_mup3_pane_t1_ParamLimits

0x491f,	// (0x0002eba2) main_mup3_pane_t1

0x4993,	// (0x0002ec16) main_mup3_pane_t2_ParamLimits

0x4993,	// (0x0002ec16) main_mup3_pane_t2

0x4a67,	// (0x0002ecea) main_mup3_pane_t4_ParamLimits

0x4a67,	// (0x0002ecea) main_mup3_pane_t4

0x4abd,	// (0x0002ed40) main_mup3_pane_t5_ParamLimits

0x4abd,	// (0x0002ed40) main_mup3_pane_t5

0x4b79,	// (0x0002edfc) main_mup3_pane_t6_ParamLimits

0x4b79,	// (0x0002edfc) main_mup3_pane_t6

0x0005,

0xf6bc,	// (0x0003993f) main_mup3_pane_t_ParamLimits

0xf6bc,	// (0x0003993f) main_mup3_pane_t

0x4c31,	// (0x0002eeb4) mup3_progress_pane_ParamLimits

0x4c31,	// (0x0002eeb4) mup3_progress_pane

0x4cbd,	// (0x0002ef40) popup_mup3_control_window_ParamLimits

0x4cbd,	// (0x0002ef40) popup_mup3_control_window

0xebce,	// (0x00038e51) popup_mup3_text_window

0x4cef,	// (0x0002ef72) mup3_progress_pane_t1

0x4d0e,	// (0x0002ef91) mup3_progress_pane_t2

0xebd6,	// (0x00038e59) mup3_progress_pane_t3

0x0002,

0xf6c9,	// (0x0003994c) mup3_progress_pane_t

0xec15,	// (0x00038e98) mup_progress_pane_cp03

0xbe20,	// (0x000360a3) bg_tb_trans_pane_cp04

0x4d2d,	// (0x0002efb0) mup3_volume_pane

0x4d35,	// (0x0002efb8) popup_mup3_control_window_g1

0x4d3e,	// (0x0002efc1) mup3_volume_pane_g1

0x4d47,	// (0x0002efca) mup3_volume_pane_g2

0x4d50,	// (0x0002efd3) mup3_volume_pane_g3

0x0002,

0xf6d0,	// (0x00039953) mup3_volume_pane_g

0xbe20,	// (0x000360a3) bg_tb_trans_pane_cp03

0xec25,	// (0x00038ea8) popup_mup3_text_window_g1

0xec2d,	// (0x00038eb0) popup_mup3_text_window_t1

0xc605,	// (0x00036888) list_calc_item_pane_g1_ParamLimits

0xe614,	// (0x00038897) mup_volume_pane_cp_g1

0x468c,	// (0x0002e90f) main_touch_calib_pane_t3

0x46a0,	// (0x0002e923) main_touch_calib_pane_t4

0x46b4,	// (0x0002e937) main_touch_calib_pane_t5

0xb1b6,	// (0x00035439) aid_cell_size_toolbar2

0xb1be,	// (0x00035441) aid_popup3_width_pane

0xb1ca,	// (0x0003544d) aid_zoom_text_msg_primary

0x2390,	// (0x0002c613) vorec_t7

0xc5c9,	// (0x0003684c) bg_calc_paper_pane_g1_ParamLimits

0xc5d5,	// (0x00036858) bg_calc_paper_pane_g2_ParamLimits

0xc5e1,	// (0x00036864) bg_calc_paper_pane_g3_ParamLimits

0xc5ed,	// (0x00036870) bg_calc_paper_pane_g4_ParamLimits

0xc5f9,	// (0x0003687c) bg_calc_paper_pane_g5_ParamLimits

0x1db4,	// (0x0002c037) bg_calc_paper_pane_g6_ParamLimits

0x1dc3,	// (0x0002c046) bg_calc_paper_pane_g7_ParamLimits

0x1dd2,	// (0x0002c055) bg_calc_paper_pane_g8_ParamLimits

0xf0ce,	// (0x00039351) bg_calc_paper_pane_g_ParamLimits

0x1de5,	// (0x0002c068) calc_bg_paper_pane_g9_ParamLimits

0xc40e,	// (0x00036691) image_qvga_pane_ParamLimits

0xc40e,	// (0x00036691) image_qvga_pane

0xc4a6,	// (0x00036729) bg_popup_sub_pane_cp04_ParamLimits

0xd390,	// (0x00037613) popup_mup_playback_window_g1_ParamLimits

0xd39c,	// (0x0003761f) popup_mup_playback_window_t1_ParamLimits

0xd3b1,	// (0x00037634) popup_mup_playback_window_t2_ParamLimits

0xf427,	// (0x000396aa) popup_mup_playback_window_t_ParamLimits

0xc52f,	// (0x000367b2) main_mup2_pane_g3_ParamLimits

0xc52f,	// (0x000367b2) main_mup2_pane_g3

0x2670,	// (0x0002c8f3) popup_toolbar_window_cp04

0xd735,	// (0x000379b8) popup_call2_audio_second_window_g3_ParamLimits

0xd735,	// (0x000379b8) popup_call2_audio_second_window_g3

0xdb4d,	// (0x00037dd0) popup_call2_audio_first_window_g4_ParamLimits

0xdb4d,	// (0x00037dd0) popup_call2_audio_first_window_g4

0xe174,	// (0x000383f7) popup_call2_audio_in_window_g4_ParamLimits

0xe174,	// (0x000383f7) popup_call2_audio_in_window_g4

0x3b76,	// (0x0002ddf9) aid_area_sk_bg_cut_ParamLimits

0x3b76,	// (0x0002ddf9) aid_area_sk_bg_cut

0xd3c6,	// (0x00037649) aid_area_sk_bg_cut_2_ParamLimits

0xd3c6,	// (0x00037649) aid_area_sk_bg_cut_2

0xbe20,	// (0x000360a3) aid_placing_details_win

0xbe20,	// (0x000360a3) aid_placing_details_win_2

0xc521,	// (0x000367a4) camera2_autofocus_pane_g1_ParamLimits

0x0a5f,	// (0x0002ace2) popup_fixed_preview_cale_window_ParamLimits

0x0a5f,	// (0x0002ace2) popup_fixed_preview_cale_window

0xd18e,	// (0x00037411) navi_slider_pane_g3

0xd197,	// (0x0003741a) navi_slider_pane_g4

0xd1a0,	// (0x00037423) navi_slider_pane_g5

0xd18e,	// (0x00037411) navi_slider_pane_g6

0xb371,	// (0x000355f4) navi_slider_pane_g7

0xd2ce,	// (0x00037551) mup_scale_pane_g3

0xd2d7,	// (0x0003755a) mup_scale_pane_g4

0xd2e0,	// (0x00037563) mup_scale_pane_g5

0x3857,	// (0x0002dada) mup_scale_pane_g6

0x3860,	// (0x0002dae3) mup_scale_pane_g7

0x44f3,	// (0x0002e776) cams2_slider_pane_g3

0x44f3,	// (0x0002e776) cams2_slider_pane_g4

0x44f3,	// (0x0002e776) cams2_slider_pane_g5

0x44f3,	// (0x0002e776) cams2_slider_pane_g6

0x44f3,	// (0x0002e776) cams2_slider_pane_g7

0xc55f,	// (0x000367e2) camera2_autofocus_pane_cp_g1

0xe484,	// (0x00038707) bg_popup_preview_window_pane_cp02_ParamLimits

0xe484,	// (0x00038707) bg_popup_preview_window_pane_cp02

0xec3b,	// (0x00038ebe) list_fp_cale_pane_ParamLimits

0xec3b,	// (0x00038ebe) list_fp_cale_pane

0xec47,	// (0x00038eca) popup_fixed_preview_cale_window_t1_ParamLimits

0xec47,	// (0x00038eca) popup_fixed_preview_cale_window_t1

0x4d59,	// (0x0002efdc) popup_fixed_preview_cale_window_t2_ParamLimits

0x4d59,	// (0x0002efdc) popup_fixed_preview_cale_window_t2

0x4d6e,	// (0x0002eff1) popup_fixed_preview_cale_window_t3_ParamLimits

0x4d6e,	// (0x0002eff1) popup_fixed_preview_cale_window_t3

0x0002,

0xf6d7,	// (0x0003995a) popup_fixed_preview_cale_window_t_ParamLimits

0xf6d7,	// (0x0003995a) popup_fixed_preview_cale_window_t

0x4d83,	// (0x0002f006) list_single_fp_cale_pane_ParamLimits

0x4d83,	// (0x0002f006) list_single_fp_cale_pane

0xec65,	// (0x00038ee8) list_single_fp_cale_pane_g1_ParamLimits

0xec65,	// (0x00038ee8) list_single_fp_cale_pane_g1

0xec71,	// (0x00038ef4) list_single_fp_cale_pane_g2_ParamLimits

0xec71,	// (0x00038ef4) list_single_fp_cale_pane_g2

0x0002,

0x011d,	// (0x0002a3a0) list_single_fp_cale_pane_g_ParamLimits

0x011d,	// (0x0002a3a0) list_single_fp_cale_pane_g

0xec8a,	// (0x00038f0d) list_single_fp_cale_pane_t1_ParamLimits

0xec8a,	// (0x00038f0d) list_single_fp_cale_pane_t1

0xec9c,	// (0x00038f1f) list_single_fp_cale_pane_t2_ParamLimits

0xec9c,	// (0x00038f1f) list_single_fp_cale_pane_t2

0x0001,

0x0124,	// (0x0002a3a7) list_single_fp_cale_pane_t_ParamLimits

0x0124,	// (0x0002a3a7) list_single_fp_cale_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0xb229,	// (0x000354ac) main_dialer_pane

0xbe20,	// (0x000360a3) aid_cell_size_keypad

0xbe20,	// (0x000360a3) dialer_ne_pane

0xbe20,	// (0x000360a3) grid_dialer_command_1_pane

0xbe20,	// (0x000360a3) grid_dialer_command_2_pane

0xbe20,	// (0x000360a3) grid_dialer_keypad_pane

0x4d99,	// (0x0002f01c) bg_popup_call_pane_cp06_ParamLimits

0x4d99,	// (0x0002f01c) bg_popup_call_pane_cp06

0x4d99,	// (0x0002f01c) dialer_ne_clear_pane_ParamLimits

0x4d99,	// (0x0002f01c) dialer_ne_clear_pane

0xc55f,	// (0x000367e2) dialer_ne_pane_g1

0xc57d,	// (0x00036800) dialer_ne_pane_t1_ParamLimits

0xc57d,	// (0x00036800) dialer_ne_pane_t1

0x4da7,	// (0x0002f02a) dialer_ne_pane_t2_ParamLimits

0x4da7,	// (0x0002f02a) dialer_ne_pane_t2

0x4dcf,	// (0x0002f052) dialer_ne_pane_t3_ParamLimits

0x4dcf,	// (0x0002f052) dialer_ne_pane_t3

0x0002,

0xf6de,	// (0x00039961) dialer_ne_pane_t_ParamLimits

0xf6de,	// (0x00039961) dialer_ne_pane_t

0x4dcf,	// (0x0002f052) dialer_ne_pane_t3_copy1_ParamLimits

0x4dcf,	// (0x0002f052) dialer_ne_pane_t3_copy1

0xeccf,	// (0x00038f52) cell_dialer_keypad_pane_ParamLimits

0xeccf,	// (0x00038f52) cell_dialer_keypad_pane

0xc40e,	// (0x00036691) cell_dialer_command_1_pane_ParamLimits

0xc40e,	// (0x00036691) cell_dialer_command_1_pane

0xece6,	// (0x00038f69) cell_dialer_command_2_pane_ParamLimits

0xece6,	// (0x00038f69) cell_dialer_command_2_pane

0xc40e,	// (0x00036691) bg_button_pane_cp02_ParamLimits

0xc40e,	// (0x00036691) bg_button_pane_cp02

0xc521,	// (0x000367a4) cell_dialer_keypad_pane_g1_ParamLimits

0xc521,	// (0x000367a4) cell_dialer_keypad_pane_g1

0xc40e,	// (0x00036691) bg_button_pane_cp03_ParamLimits

0xc40e,	// (0x00036691) bg_button_pane_cp03

0xc521,	// (0x000367a4) cell_dialer_command_1_pane_g1_ParamLimits

0xc521,	// (0x000367a4) cell_dialer_command_1_pane_g1

0xbe20,	// (0x000360a3) bg_button_pane_cp04

0xc55f,	// (0x000367e2) cell_dialer_command_2_pane_g1

0xbe20,	// (0x000360a3) bg_button_pane_cp06

0xc55f,	// (0x000367e2) dialer_ne_clear_pane_g1

0xd061,	// (0x000372e4) navi_pane_g2

0xd08f,	// (0x00037312) navi_pane_g3

0x0002,

0xf32f,	// (0x000395b2) navi_pane_g

0xd11e,	// (0x000373a1) navi_pane_mv_g2

0xd145,	// (0x000373c8) navi_pane_mv_g5

0x363a,	// (0x0002d8bd) navi_pane_mv_t1

0xc5bd,	// (0x00036840) main_clock2_pane

0xc40e,	// (0x00036691) main_clock2_list_pane_ParamLimits

0xc40e,	// (0x00036691) main_clock2_list_pane

0x4e65,	// (0x0002f0e8) main_clock2_pane_t1_ParamLimits

0x4e65,	// (0x0002f0e8) main_clock2_pane_t1

0x4ea0,	// (0x0002f123) main_clock2_pane_t2_ParamLimits

0x4ea0,	// (0x0002f123) main_clock2_pane_t2

0x0004,

0xf6ea,	// (0x0003996d) main_clock2_pane_t_ParamLimits

0xf6ea,	// (0x0003996d) main_clock2_pane_t

0x4f40,	// (0x0002f1c3) popup_clock_analogue_window_cp03_ParamLimits

0x4f40,	// (0x0002f1c3) popup_clock_analogue_window_cp03

0x4f65,	// (0x0002f1e8) popup_clock_digital_window_cp02_ParamLimits

0x4f65,	// (0x0002f1e8) popup_clock_digital_window_cp02

0x4fa9,	// (0x0002f22c) main_clock2_list_single_pane_ParamLimits

0x4fa9,	// (0x0002f22c) main_clock2_list_single_pane

0xc786,	// (0x00036a09) list_highlight_pane_cp05

0xed29,	// (0x00038fac) main_clock2_list_single_pane_t1

0x2670,	// (0x0002c8f3) popup_toolbar_window_cp04_ParamLimits

0xc52f,	// (0x000367b2) camera2_autofocus_pane_g2_ParamLimits

0xc52f,	// (0x000367b2) camera2_autofocus_pane_g2

0xc52f,	// (0x000367b2) camera2_autofocus_pane_g3_ParamLimits

0xc52f,	// (0x000367b2) camera2_autofocus_pane_g3

0xc52f,	// (0x000367b2) camera2_autofocus_pane_g4_ParamLimits

0xc52f,	// (0x000367b2) camera2_autofocus_pane_g4

0xc52f,	// (0x000367b2) camera2_autofocus_pane_g5_ParamLimits

0xc52f,	// (0x000367b2) camera2_autofocus_pane_g5

0x0004,

0x0079,	// (0x0002a2fc) camera2_autofocus_pane_g_ParamLimits

0x0079,	// (0x0002a2fc) camera2_autofocus_pane_g

0x46e9,	// (0x0002e96c) camera2_autofocus_pane_cp_g2

0x46f1,	// (0x0002e974) camera2_autofocus_pane_cp_g3

0x46f9,	// (0x0002e97c) camera2_autofocus_pane_cp_g4

0x4701,	// (0x0002e984) camera2_autofocus_pane_cp_g5

0x0004,

0xf6a0,	// (0x00039923) camera2_autofocus_pane_cp_g

0xbe20,	// (0x000360a3) popup_dialer_spcha_window

0xbe20,	// (0x000360a3) bg_popup_sub_pane_cp07

0xbe20,	// (0x000360a3) list_spcha_pane

0xed37,	// (0x00038fba) list_single_spcha_pane_ParamLimits

0xed37,	// (0x00038fba) list_single_spcha_pane

0xbe20,	// (0x000360a3) list_highlight_pane_cp06

0xccc1,	// (0x00036f44) list_single_spcha_pane_t1

0xdf1e,	// (0x000381a1) popup_call2_audio_out_window_g4_ParamLimits

0xdf1e,	// (0x000381a1) popup_call2_audio_out_window_g4

0xb229,	// (0x000354ac) main_imed2_pane

0xb3ca,	// (0x0003564d) popup_imed_adjust2_window

0x0ec4,	// (0x0002b147) popup_imed_trans_window_ParamLimits

0x0ec4,	// (0x0002b147) popup_imed_trans_window

0xe6f7,	// (0x0003897a) popup_blid_sat_info2_window_t1

0xe705,	// (0x00038988) popup_blid_sat_info2_window_t2

0x000a,

0xf5e3,	// (0x00039866) popup_blid_sat_info2_window_t

0x4fbb,	// (0x0002f23e) aid_size_cell_colour_35

0x4fdb,	// (0x0002f25e) aid_size_cell_colour_112

0x4ffb,	// (0x0002f27e) aid_size_cell_effect

0xd25e,	// (0x000374e1) bg_tb_trans_pane_cp02

0xcbe7,	// (0x00036e6a) heading_imed_pane

0x501b,	// (0x0002f29e) listscroll_imed_pane

0xed49,	// (0x00038fcc) heading_imed_pane_g1

0xed51,	// (0x00038fd4) heading_imed_pane_t1

0xed5f,	// (0x00038fe2) grid_imed_colour_35_pane_ParamLimits

0xed5f,	// (0x00038fe2) grid_imed_colour_35_pane

0x5027,	// (0x0002f2aa) grid_imed_effect_pane

0xed77,	// (0x00038ffa) list_imed_aspect_pane

0x503d,	// (0x0002f2c0) scroll_pane_cp027_ParamLimits

0x503d,	// (0x0002f2c0) scroll_pane_cp027

0x504e,	// (0x0002f2d1) cell_imed_effect_pane_ParamLimits

0x504e,	// (0x0002f2d1) cell_imed_effect_pane

0xed7f,	// (0x00039002) cell_imed_colour_pane_ParamLimits

0xed7f,	// (0x00039002) cell_imed_colour_pane

0xedc1,	// (0x00039044) cell_imed_colour_pane_g1_ParamLimits

0xedc1,	// (0x00039044) cell_imed_colour_pane_g1

0xedd2,	// (0x00039055) hgihlgiht_grid_pane_cp016_ParamLimits

0xedd2,	// (0x00039055) hgihlgiht_grid_pane_cp016

0x5075,	// (0x0002f2f8) cell_imed_effect_pane_g1

0x507d,	// (0x0002f300) grid_highlight_pane_cp017

0xede3,	// (0x00039066) list_imed_single_pane_ParamLimits

0xede3,	// (0x00039066) list_imed_single_pane

0xbe20,	// (0x000360a3) list_highlight_pane_cp07

0xedf8,	// (0x0003907b) list_imed_aspect_pane_comp1_t1

0xd25e,	// (0x000374e1) bg_tb_trans_pane_cp05

0xee1a,	// (0x0003909d) popup_imed_adjust2_window_g1

0xee41,	// (0x000390c4) popup_imed_adjust2_window_t1

0xee59,	// (0x000390dc) slider_imed_adjust_pane

0xee6d,	// (0x000390f0) slider_imed_adjust_pane_g1

0xee7d,	// (0x00039100) slider_imed_adjust_pane_g2

0xee8d,	// (0x00039110) slider_imed_adjust_pane_g3

0xee9e,	// (0x00039121) slider_imed_adjust_pane_g4

0x0003,

0xf707,	// (0x0003998a) slider_imed_adjust_pane_g

0x5086,	// (0x0002f309) aid_size_cell_clipart2

0x5092,	// (0x0002f315) grid_imed_clipart_pane

0xd2f1,	// (0x00037574) scroll_pane_cp031

0x509c,	// (0x0002f31f) cell_imed_clipart_pane_ParamLimits

0x509c,	// (0x0002f31f) cell_imed_clipart_pane

0x50be,	// (0x0002f341) cell_imed_clipart_pane_g1

0xbe20,	// (0x000360a3) grid_highlight_pane_cp014

0x4e41,	// (0x0002f0c4) main_clock2_pane_g1_ParamLimits

0x4e41,	// (0x0002f0c4) main_clock2_pane_g1

0x4f85,	// (0x0002f208) aid_call2_pane_cp10

0x4f97,	// (0x0002f21a) aid_call_pane_cp10

0xcfc0,	// (0x00037243) popup_clock_analogue_window_cp10_g1

0xcfc0,	// (0x00037243) popup_clock_analogue_window_cp10_g2

0x1089,	// (0x0002b30c) popup_clock_analogue_window_cp10_g3

0x1089,	// (0x0002b30c) popup_clock_analogue_window_cp10_g4

0xcfc0,	// (0x00037243) popup_clock_analogue_window_cp10_g5

0x0004,

0xf6f5,	// (0x00039978) popup_clock_analogue_window_cp10_g

0x109f,	// (0x0002b322) popup_clock_analogue_window_cp10_t1

0x10be,	// (0x0002b341) clock_digital_number_pane_cp10_ParamLimits

0x10be,	// (0x0002b341) clock_digital_number_pane_cp10

0x10d6,	// (0x0002b359) clock_digital_number_pane_cp11_ParamLimits

0x10d6,	// (0x0002b359) clock_digital_number_pane_cp11

0x10ee,	// (0x0002b371) clock_digital_number_pane_cp12_ParamLimits

0x10ee,	// (0x0002b371) clock_digital_number_pane_cp12

0x1108,	// (0x0002b38b) clock_digital_number_pane_cp13_ParamLimits

0x1108,	// (0x0002b38b) clock_digital_number_pane_cp13

0x1122,	// (0x0002b3a5) clock_digital_separator_pane_cp10_ParamLimits

0x1122,	// (0x0002b3a5) clock_digital_separator_pane_cp10

0x113c,	// (0x0002b3bf) popup_clock_digital_window_cp02_t1_ParamLimits

0x113c,	// (0x0002b3bf) popup_clock_digital_window_cp02_t1

0xc49e,	// (0x00036721) clock_digital_number_pane_cp10_g1

0xc49e,	// (0x00036721) clock_digital_number_pane_cp10_g2

0x0001,

0x015b,	// (0x0002a3de) clock_digital_number_pane_cp10_g

0xc49e,	// (0x00036721) clock_digital_separator_pane_cp10_g1

0xc49e,	// (0x00036721) clock_digital_separator_pane_g2_cp10

0xd14d,	// (0x000373d0) navi_pane_vded_g4

0xd156,	// (0x000373d9) navi_pane_vded_g5

0xd15f,	// (0x000373e2) navi_pane_vded_t1

0xb229,	// (0x000354ac) main_vded_pane

0x50c7,	// (0x0002f34a) main_vded_pane_g1

0x50d1,	// (0x0002f354) main_vded_pane_g2

0x50db,	// (0x0002f35e) main_vded_pane_g3

0x0002,

0xf710,	// (0x00039993) main_vded_pane_g

0x50e5,	// (0x0002f368) main_vded_pane_t1

0x50f3,	// (0x0002f376) main_vded_pane_t2

0x0001,

0xf717,	// (0x0003999a) main_vded_pane_t

0x5101,	// (0x0002f384) vded_slider_pane

0x5109,	// (0x0002f38c) vded_video_pane

0xeeaf,	// (0x00039132) vded_video_pane_g1

0x5111,	// (0x0002f394) vded_video_pane_g2

0xc55f,	// (0x000367e2) vded_video_pane_g3

0x0002,

0xf71c,	// (0x0003999f) vded_video_pane_g

0xeeb9,	// (0x0003913c) vded_slider_pane_g1

0xe614,	// (0x00038897) vded_slider_pane_g2

0xeec2,	// (0x00039145) vded_slider_pane_g3

0xeecb,	// (0x0003914e) vded_slider_pane_g4

0xeed4,	// (0x00039157) vded_slider_pane_g5

0x0004,

0xf723,	// (0x000399a6) vded_slider_pane_g

0x4ca5,	// (0x0002ef28) mup3_rocker_pane_ParamLimits

0x4ca5,	// (0x0002ef28) mup3_rocker_pane

0x511a,	// (0x0002f39d) mup3_control_keys_pane_g1

0x5122,	// (0x0002f3a5) mup3_control_keys_pane_g2

0x512a,	// (0x0002f3ad) mup3_control_keys_pane_g3

0x5132,	// (0x0002f3b5) mup3_control_keys_pane_g4

0x0003,

0xf72e,	// (0x000399b1) mup3_control_keys_pane_g

0x0a96,	// (0x0002ad19) popup_toolbar2_fixed_window_cp01_ParamLimits

0x0a96,	// (0x0002ad19) popup_toolbar2_fixed_window_cp01

0x4cd9,	// (0x0002ef5c) popup_toolbar2_fixed_window_cp02_ParamLimits

0x4cd9,	// (0x0002ef5c) popup_toolbar2_fixed_window_cp02

0xd8a7,	// (0x00037b2a) popup_call2_audio_second_window_t4_ParamLimits

0xd8a7,	// (0x00037b2a) popup_call2_audio_second_window_t4

0xdde3,	// (0x00038066) popup_call2_audio_first_window_t6_ParamLimits

0xdde3,	// (0x00038066) popup_call2_audio_first_window_t6

0xe021,	// (0x000382a4) popup_call2_audio_out_window_t6_ParamLimits

0xe021,	// (0x000382a4) popup_call2_audio_out_window_t6

0xb229,	// (0x000354ac) main_vitu_pane

0xc40e,	// (0x00036691) aid_size_cell_itu_ParamLimits

0xc40e,	// (0x00036691) aid_size_cell_itu

0xc40e,	// (0x00036691) bg_popup_window_pane_cp08_ParamLimits

0xc40e,	// (0x00036691) bg_popup_window_pane_cp08

0xc40e,	// (0x00036691) field_vitu_entry_pane_ParamLimits

0xc40e,	// (0x00036691) field_vitu_entry_pane

0xc40e,	// (0x00036691) grid_vitu_function_pane_ParamLimits

0xc40e,	// (0x00036691) grid_vitu_function_pane

0xc40e,	// (0x00036691) grid_vitu_itu_pane_ParamLimits

0xc40e,	// (0x00036691) grid_vitu_itu_pane

0xc40e,	// (0x00036691) cell_vitu_itu_pane_ParamLimits

0xc40e,	// (0x00036691) cell_vitu_itu_pane

0xc40e,	// (0x00036691) cell_vitu_function_pane_ParamLimits

0xc40e,	// (0x00036691) cell_vitu_function_pane

0xc40e,	// (0x00036691) bg_popup_sub_pane_cp08_ParamLimits

0xc40e,	// (0x00036691) bg_popup_sub_pane_cp08

0xc569,	// (0x000367ec) field_vitu_entry_pane_t1_ParamLimits

0xc569,	// (0x000367ec) field_vitu_entry_pane_t1

0xeedd,	// (0x00039160) field_vitu_entry_pane_t2_ParamLimits

0xeedd,	// (0x00039160) field_vitu_entry_pane_t2

0x0001,

0xf737,	// (0x000399ba) field_vitu_entry_pane_t_ParamLimits

0xf737,	// (0x000399ba) field_vitu_entry_pane_t

0xe65d,	// (0x000388e0) bg_button_pane_cp05_ParamLimits

0xe65d,	// (0x000388e0) bg_button_pane_cp05

0xeefa,	// (0x0003917d) cell_vitu_itu_pane_g1

0xd24a,	// (0x000374cd) cell_vitu_itu_pane_t1_ParamLimits

0xd24a,	// (0x000374cd) cell_vitu_itu_pane_t1

0xd24a,	// (0x000374cd) cell_vitu_itu_pane_t2_ParamLimits

0xd24a,	// (0x000374cd) cell_vitu_itu_pane_t2

0x0002,

0xf73c,	// (0x000399bf) cell_vitu_itu_pane_t_ParamLimits

0xf73c,	// (0x000399bf) cell_vitu_itu_pane_t

0xbe20,	// (0x000360a3) bg_button_pane_cp07

0xc55f,	// (0x000367e2) cell_vitu_function_pane_g1

0xb233,	// (0x000354b6) main_calc_pane_g1

0x08f7,	// (0x0002ab7a) aid_visual_content_pane

0xb229,	// (0x000354ac) main_vradio_pane

0xc521,	// (0x000367a4) main_vradio_pane_g1_ParamLimits

0xc521,	// (0x000367a4) main_vradio_pane_g1

0xc52f,	// (0x000367b2) main_vradio_pane_g2_ParamLimits

0xc52f,	// (0x000367b2) main_vradio_pane_g2

0x0001,

0x061a,	// (0x0002a89d) main_vradio_pane_g_ParamLimits

0x061a,	// (0x0002a89d) main_vradio_pane_g

0xc569,	// (0x000367ec) main_vradio_pane_t1_ParamLimits

0xc569,	// (0x000367ec) main_vradio_pane_t1

0xc569,	// (0x000367ec) main_vradio_pane_t2_ParamLimits

0xc569,	// (0x000367ec) main_vradio_pane_t2

0xc57d,	// (0x00036800) main_vradio_pane_t3_ParamLimits

0xc57d,	// (0x00036800) main_vradio_pane_t3

0x0002,

0xf743,	// (0x000399c6) main_vradio_pane_t_ParamLimits

0xf743,	// (0x000399c6) main_vradio_pane_t

0xc40e,	// (0x00036691) vradio_rocker_control_pane_ParamLimits

0xc40e,	// (0x00036691) vradio_rocker_control_pane

0xc40e,	// (0x00036691) vradio_station_info_pane_ParamLimits

0xc40e,	// (0x00036691) vradio_station_info_pane

0xc40e,	// (0x00036691) vradio_frequency_info_pane_ParamLimits

0xc40e,	// (0x00036691) vradio_frequency_info_pane

0xc55f,	// (0x000367e2) vradio_station_info_pane_g1

0xd24a,	// (0x000374cd) vradio_station_info_pane_t1_ParamLimits

0xd24a,	// (0x000374cd) vradio_station_info_pane_t1

0xc57d,	// (0x00036800) vradio_station_info_pane_t2_ParamLimits

0xc57d,	// (0x00036800) vradio_station_info_pane_t2

0x0001,

0xf74a,	// (0x000399cd) vradio_station_info_pane_t_ParamLimits

0xf74a,	// (0x000399cd) vradio_station_info_pane_t

0xbe20,	// (0x000360a3) vradio_tuning_pane

0x5142,	// (0x0002f3c5) vradio_rocker_control_pane_g1

0xef16,	// (0x00039199) vradio_rocker_control_pane_g2

0x514c,	// (0x0002f3cf) vradio_rocker_control_pane_g3

0x5156,	// (0x0002f3d9) vradio_rocker_control_pane_g4

0x5160,	// (0x0002f3e3) vradio_rocker_control_pane_g5

0x0004,

0xf74f,	// (0x000399d2) vradio_rocker_control_pane_g

0xc55f,	// (0x000367e2) vradio_frequency_info_pane_g1

0xc569,	// (0x000367ec) vradio_frequency_info_pane_t1_ParamLimits

0xc569,	// (0x000367ec) vradio_frequency_info_pane_t1

0x516a,	// (0x0002f3ed) vradio_tuning_pane_g1

0x5175,	// (0x0002f3f8) vradio_tuning_pane_t1

0xb1da,	// (0x0003545d) area_side_right_pane_ParamLimits

0xb1da,	// (0x0003545d) area_side_right_pane

0xe44b,	// (0x000386ce) status_small_pane_g1

0xe453,	// (0x000386d6) status_small_pane_g2

0xe45c,	// (0x000386df) status_small_pane_g3

0xe465,	// (0x000386e8) status_small_pane_g4

0x0003,

0xf545,	// (0x000397c8) status_small_pane_g

0xe46e,	// (0x000386f1) status_small_pane_t1

0xb229,	// (0x000354ac) main_video3_pane

0xbe20,	// (0x000360a3) cams_zoom_vslider_pane

0xef1e,	// (0x000391a1) image3_wide_pane_ParamLimits

0xef1e,	// (0x000391a1) image3_wide_pane

0xbe20,	// (0x000360a3) image3_wide_small_pane

0xef38,	// (0x000391bb) main_video3_pane_g1_ParamLimits

0xef38,	// (0x000391bb) main_video3_pane_g1

0xef38,	// (0x000391bb) main_video3_pane_g2_ParamLimits

0xef38,	// (0x000391bb) main_video3_pane_g2

0x0001,

0x01aa,	// (0x0002a42d) main_video3_pane_g_ParamLimits

0x01aa,	// (0x0002a42d) main_video3_pane_g

0xef56,	// (0x000391d9) main_video3_pane_t1_ParamLimits

0xef56,	// (0x000391d9) main_video3_pane_t1

0xef56,	// (0x000391d9) main_video3_pane_t2_ParamLimits

0xef56,	// (0x000391d9) main_video3_pane_t2

0xef56,	// (0x000391d9) main_video3_pane_t3_ParamLimits

0xef56,	// (0x000391d9) main_video3_pane_t3

0x0002,

0x01af,	// (0x0002a432) main_video3_pane_t_ParamLimits

0x01af,	// (0x0002a432) main_video3_pane_t

0xc55f,	// (0x000367e2) cams_zoom_vslider_pane_g1

0xc55f,	// (0x000367e2) cams_zoom_vslider_pane_g2

0x0001,

0xf0af,	// (0x00039332) cams_zoom_vslider_pane_g

0xbe20,	// (0x000360a3) small_slider_vertical_pane

0xc55f,	// (0x000367e2) small_slider_vertical_pane_g1

0xc55f,	// (0x000367e2) small_slider_vertical_pane_g2

0xef7d,	// (0x00039200) small_slider_vertical_pane_g3

0x0002,

0x01b6,	// (0x0002a439) small_slider_vertical_pane_g

0xb229,	// (0x000354ac) main_hwr_training_pane

0xef86,	// (0x00039209) hwr_training_instruct_pane_ParamLimits

0xef86,	// (0x00039209) hwr_training_instruct_pane

0x5184,	// (0x0002f407) hwr_training_navi_pane_ParamLimits

0x5184,	// (0x0002f407) hwr_training_navi_pane

0x51a3,	// (0x0002f426) hwr_training_write_pane_ParamLimits

0x51a3,	// (0x0002f426) hwr_training_write_pane

0xbe20,	// (0x000360a3) bg_frame_shadow_pane

0xefbd,	// (0x00039240) hwr_training_write_pane_g1

0xefc5,	// (0x00039248) hwr_training_write_pane_g2

0xefcd,	// (0x00039250) hwr_training_write_pane_g3

0xefd5,	// (0x00039258) hwr_training_write_pane_g4

0xefdd,	// (0x00039260) hwr_training_write_pane_g5

0xefe5,	// (0x00039268) hwr_training_write_pane_g6

0xefed,	// (0x00039270) hwr_training_write_pane_g7

0x0006,

0x01bd,	// (0x0002a440) hwr_training_write_pane_g

0xb4b2,	// (0x00035735) hwr_training_navi_pane_g1_ParamLimits

0xb4b2,	// (0x00035735) hwr_training_navi_pane_g1

0xb4c4,	// (0x00035747) hwr_training_navi_pane_g2_ParamLimits

0xb4c4,	// (0x00035747) hwr_training_navi_pane_g2

0xb4d6,	// (0x00035759) hwr_training_navi_pane_g3_ParamLimits

0xb4d6,	// (0x00035759) hwr_training_navi_pane_g3

0xb4e6,	// (0x00035769) hwr_training_navi_pane_g4_ParamLimits

0xb4e6,	// (0x00035769) hwr_training_navi_pane_g4

0x0004,

0xf75a,	// (0x000399dd) hwr_training_navi_pane_g_ParamLimits

0xf75a,	// (0x000399dd) hwr_training_navi_pane_g

0xb4f3,	// (0x00035776) hwr_training_navi_pane_t1

0x51de,	// (0x0002f461) list_single_hwr_training_instruct_pane_ParamLimits

0x51de,	// (0x0002f461) list_single_hwr_training_instruct_pane

0xeff5,	// (0x00039278) list_single_hwr_training_instruct_pane_t1

0xe7f8,	// (0x00038a7b) bg_frame_shadow_pane_g1

0xf004,	// (0x00039287) bg_frame_shadow_pane_g2

0xf00c,	// (0x0003928f) bg_frame_shadow_pane_g3

0xf014,	// (0x00039297) bg_frame_shadow_pane_g4

0xf01c,	// (0x0003929f) bg_frame_shadow_pane_g5

0xf024,	// (0x000392a7) bg_frame_shadow_pane_g6

0xf02c,	// (0x000392af) bg_frame_shadow_pane_g7

0xc675,	// (0x000368f8) bg_frame_shadow_pane_g8

0x0007,

0xf765,	// (0x000399e8) bg_frame_shadow_pane_g

0xb229,	// (0x000354ac) main_video_tele_dialer_pane

0x116c,	// (0x0002b3ef) aid_size_cell_video_keypad_ParamLimits

0x116c,	// (0x0002b3ef) aid_size_cell_video_keypad

0x1186,	// (0x0002b409) grid_video_dialer_keypad_pane_ParamLimits

0x1186,	// (0x0002b409) grid_video_dialer_keypad_pane

0x11d4,	// (0x0002b457) video_down_pane_cp_ParamLimits

0x11d4,	// (0x0002b457) video_down_pane_cp

0x11ea,	// (0x0002b46d) cell_video_dialer_keypad_pane_ParamLimits

0x11ea,	// (0x0002b46d) cell_video_dialer_keypad_pane

0xf034,	// (0x000392b7) bg_button_pane_cp08_ParamLimits

0xf034,	// (0x000392b7) bg_button_pane_cp08

0x5210,	// (0x0002f493) cell_video_dialer_keypad_pane_g1_ParamLimits

0x5210,	// (0x0002f493) cell_video_dialer_keypad_pane_g1

0x4c8f,	// (0x0002ef12) mup3_rocker2_pane_ParamLimits

0x4c8f,	// (0x0002ef12) mup3_rocker2_pane

0xc55f,	// (0x000367e2) mup3_rocker2_pane_g1

0x0db3,	// (0x0002b036) main_dialer2_pane

0xb229,	// (0x000354ac) main_mp4_pane

0xb51f,	// (0x000357a2) main_mp4_pane_g1_ParamLimits

0xb51f,	// (0x000357a2) main_mp4_pane_g1

0xb51f,	// (0x000357a2) main_mp4_pane_g2_ParamLimits

0xb51f,	// (0x000357a2) main_mp4_pane_g2

0x120c,	// (0x0002b48f) main_mp4_pane_g3_ParamLimits

0x120c,	// (0x0002b48f) main_mp4_pane_g3

0xb53d,	// (0x000357c0) main_mp4_pane_g4_ParamLimits

0xb53d,	// (0x000357c0) main_mp4_pane_g4

0xb565,	// (0x000357e8) main_mp4_pane_g5_ParamLimits

0xb565,	// (0x000357e8) main_mp4_pane_g5

0x0007,

0xf785,	// (0x00039a08) main_mp4_pane_g_ParamLimits

0xf785,	// (0x00039a08) main_mp4_pane_g

0xb5cd,	// (0x00035850) main_mp4_pane_t1_ParamLimits

0xb5cd,	// (0x00035850) main_mp4_pane_t1

0xb62f,	// (0x000358b2) main_mp4_pane_t2_ParamLimits

0xb62f,	// (0x000358b2) main_mp4_pane_t2

0xb693,	// (0x00035916) main_mp4_pane_t3_ParamLimits

0xb693,	// (0x00035916) main_mp4_pane_t3

0xb6f1,	// (0x00035974) main_mp4_pane_t4_ParamLimits

0xb6f1,	// (0x00035974) main_mp4_pane_t4

0x0003,

0xf796,	// (0x00039a19) main_mp4_pane_t_ParamLimits

0xf796,	// (0x00039a19) main_mp4_pane_t

0xb74f,	// (0x000359d2) mp4_progress_pane_ParamLimits

0xb74f,	// (0x000359d2) mp4_progress_pane

0xb783,	// (0x00035a06) mp4_rocker_pane_ParamLimits

0xb783,	// (0x00035a06) mp4_rocker_pane

0x5252,	// (0x0002f4d5) mp4_progress_pane_t1

0x5274,	// (0x0002f4f7) mp4_progress_pane_t2

0x0001,

0xf79f,	// (0x00039a22) mp4_progress_pane_t

0x5296,	// (0x0002f519) mup_progress_pane_cp04

0x44f3,	// (0x0002e776) mp4_rocker_pane_g1

0xb21b,	// (0x0003549e) aid_cell_size_keypad2_ParamLimits

0xb21b,	// (0x0003549e) aid_cell_size_keypad2

0xb21b,	// (0x0003549e) dialer2_ne_pane_ParamLimits

0xb21b,	// (0x0003549e) dialer2_ne_pane

0xb21b,	// (0x0003549e) grid_dialer2_keypad_pane_ParamLimits

0xb21b,	// (0x0003549e) grid_dialer2_keypad_pane

0xe65d,	// (0x000388e0) bg_popup_call_pane_cp07_ParamLimits

0xe65d,	// (0x000388e0) bg_popup_call_pane_cp07

0x52a9,	// (0x0002f52c) dialer2_ne_pane_t1_ParamLimits

0x52a9,	// (0x0002f52c) dialer2_ne_pane_t1

0x123c,	// (0x0002b4bf) cell_dialer2_keypad_pane_ParamLimits

0x123c,	// (0x0002b4bf) cell_dialer2_keypad_pane

0xe65d,	// (0x000388e0) bg_button_pane_pane_cp04_ParamLimits

0xe65d,	// (0x000388e0) bg_button_pane_pane_cp04

0xc521,	// (0x000367a4) cell_dialer2_keypad_pane_g1_ParamLimits

0xc521,	// (0x000367a4) cell_dialer2_keypad_pane_g1

0x2544,	// (0x0002c7c7) aid_placing_vt_set_content_ParamLimits

0x2544,	// (0x0002c7c7) aid_placing_vt_set_content

0x256c,	// (0x0002c7ef) aid_placing_vt_set_title_ParamLimits

0x256c,	// (0x0002c7ef) aid_placing_vt_set_title

0xb229,	// (0x000354ac) main_image3_pane

0x12b1,	// (0x0002b534) area_side_right_pane_cp01_ParamLimits

0x12b1,	// (0x0002b534) area_side_right_pane_cp01

0x12c8,	// (0x0002b54b) main_image3_pane_g1_ParamLimits

0x12c8,	// (0x0002b54b) main_image3_pane_g1

0x12d6,	// (0x0002b559) main_image3_pane_g2_ParamLimits

0x12d6,	// (0x0002b559) main_image3_pane_g2

0x12fe,	// (0x0002b581) main_image3_pane_g3_ParamLimits

0x12fe,	// (0x0002b581) main_image3_pane_g3

0x1328,	// (0x0002b5ab) main_image3_pane_g4_ParamLimits

0x1328,	// (0x0002b5ab) main_image3_pane_g4

0x0003,

0xf7ae,	// (0x00039a31) main_image3_pane_g_ParamLimits

0xf7ae,	// (0x00039a31) main_image3_pane_g

0x1352,	// (0x0002b5d5) main_image3_pane_t1_ParamLimits

0x1352,	// (0x0002b5d5) main_image3_pane_t1

0x13aa,	// (0x0002b62d) main_image3_pane_t2_ParamLimits

0x13aa,	// (0x0002b62d) main_image3_pane_t2

0x13fc,	// (0x0002b67f) main_image3_pane_t3_ParamLimits

0x13fc,	// (0x0002b67f) main_image3_pane_t3

0x0003,

0xf7b7,	// (0x00039a3a) main_image3_pane_t_ParamLimits

0xf7b7,	// (0x00039a3a) main_image3_pane_t

0xc40e,	// (0x00036691) grid_sctrl_middle_pane_cp01_ParamLimits

0xc40e,	// (0x00036691) grid_sctrl_middle_pane_cp01

0x5316,	// (0x0002f599) cell_sctrl_middle_pane_cp01_ParamLimits

0x5316,	// (0x0002f599) cell_sctrl_middle_pane_cp01

0x5333,	// (0x0002f5b6) cell_sctrl_middle_pane_cp01_g1_ParamLimits

0x5333,	// (0x0002f5b6) cell_sctrl_middle_pane_cp01_g1

0xb229,	// (0x000354ac) main_call4_pane

0x1484,	// (0x0002b707) aid_size_button_call4_ParamLimits

0x1484,	// (0x0002b707) aid_size_button_call4

0x14b7,	// (0x0002b73a) call4_windows_pane_ParamLimits

0x14b7,	// (0x0002b73a) call4_windows_pane

0x14d6,	// (0x0002b759) grid_call4_button_pane_ParamLimits

0x14d6,	// (0x0002b759) grid_call4_button_pane

0x5353,	// (0x0002f5d6) call4_windows_conf_pane

0x5368,	// (0x0002f5eb) popup_call4_audio_first_window_ParamLimits

0x5368,	// (0x0002f5eb) popup_call4_audio_first_window

0x53b8,	// (0x0002f63b) popup_call4_audio_second_window_ParamLimits

0x53b8,	// (0x0002f63b) popup_call4_audio_second_window

0x53cf,	// (0x0002f652) popup_call4_audio_wait_window_ParamLimits

0x53cf,	// (0x0002f652) popup_call4_audio_wait_window

0x14ff,	// (0x0002b782) cell_call4_button_pane_ParamLimits

0x14ff,	// (0x0002b782) cell_call4_button_pane

0x53dd,	// (0x0002f660) bg_button_pane_cp09_ParamLimits

0x53dd,	// (0x0002f660) bg_button_pane_cp09

0x1524,	// (0x0002b7a7) cell_call4_button_pane_g1_ParamLimits

0x1524,	// (0x0002b7a7) cell_call4_button_pane_g1

0x154a,	// (0x0002b7cd) cell_call4_button_pane_t1_ParamLimits

0x154a,	// (0x0002b7cd) cell_call4_button_pane_t1

0x53f1,	// (0x0002f674) popup_call4_audio_conf_window_ParamLimits

0x53f1,	// (0x0002f674) popup_call4_audio_conf_window

0x4cef,	// (0x0002ef72) mup3_progress_pane_t1_ParamLimits

0x4d0e,	// (0x0002ef91) mup3_progress_pane_t2_ParamLimits

0xebd6,	// (0x00038e59) mup3_progress_pane_t3_ParamLimits

0xf6c9,	// (0x0003994c) mup3_progress_pane_t_ParamLimits

0xec15,	// (0x00038e98) mup_progress_pane_cp03_ParamLimits

0x513a,	// (0x0002f3bd) mup3_control_keys_pane_g4_copy1

0xb783,	// (0x00035a06) mp4_rocker2_pane_ParamLimits

0xb783,	// (0x00035a06) mp4_rocker2_pane

0xb7fb,	// (0x00035a7e) mp4_rocker2_pane_g1

0xb7fb,	// (0x00035a7e) mp4_rocker2_pane_g2

0xb7fb,	// (0x00035a7e) mp4_rocker2_pane_g3

0xb7fb,	// (0x00035a7e) mp4_rocker2_pane_g4

0xb7fb,	// (0x00035a7e) mp4_rocker2_pane_g5

0x0004,

0xf7c0,	// (0x00039a43) mp4_rocker2_pane_g

0xb229,	// (0x000354ac) main_camera4_pane

0xb229,	// (0x000354ac) main_video4_pane

0x11a2,	// (0x0002b425) main_video_tele_dialer_pane_t1_ParamLimits

0x11a2,	// (0x0002b425) main_video_tele_dialer_pane_t1

0x11bb,	// (0x0002b43e) main_video_tele_dialer_pane_t2_ParamLimits

0x11bb,	// (0x0002b43e) main_video_tele_dialer_pane_t2

0x0001,

0xf776,	// (0x000399f9) main_video_tele_dialer_pane_t_ParamLimits

0xf776,	// (0x000399f9) main_video_tele_dialer_pane_t

0x158c,	// (0x0002b80f) cam4_autofocus_pane_ParamLimits

0x158c,	// (0x0002b80f) cam4_autofocus_pane

0x15a2,	// (0x0002b825) cam4_image_uncrop_pane_ParamLimits

0x15a2,	// (0x0002b825) cam4_image_uncrop_pane

0x15bc,	// (0x0002b83f) cam4_indicators_pane_ParamLimits

0x15bc,	// (0x0002b83f) cam4_indicators_pane

0x15e7,	// (0x0002b86a) main_camera4_pane_g1_ParamLimits

0x15e7,	// (0x0002b86a) main_camera4_pane_g1

0x15f9,	// (0x0002b87c) main_camera4_pane_g2_ParamLimits

0x15f9,	// (0x0002b87c) main_camera4_pane_g2

0x160c,	// (0x0002b88f) main_camera4_pane_g3_ParamLimits

0x160c,	// (0x0002b88f) main_camera4_pane_g3

0x161f,	// (0x0002b8a2) main_camera4_pane_g4_ParamLimits

0x161f,	// (0x0002b8a2) main_camera4_pane_g4

0x1632,	// (0x0002b8b5) main_camera4_pane_g5_ParamLimits

0x1632,	// (0x0002b8b5) main_camera4_pane_g5

0x0005,

0xf7cb,	// (0x00039a4e) main_camera4_pane_g_ParamLimits

0xf7cb,	// (0x00039a4e) main_camera4_pane_g

0x1656,	// (0x0002b8d9) main_camera4_pane_t1_ParamLimits

0x1656,	// (0x0002b8d9) main_camera4_pane_t1

0x542b,	// (0x0002f6ae) bg_tb_trans_pane_cp06

0xb827,	// (0x00035aaa) cam4_indicators_pane_g1

0xb838,	// (0x00035abb) cam4_indicators_pane_g2

0x0002,

0xf7e6,	// (0x00039a69) cam4_indicators_pane_g

0xb850,	// (0x00035ad3) cam4_indicators_pane_t1

0x16a6,	// (0x0002b929) main_video4_pane_g1_ParamLimits

0x16a6,	// (0x0002b929) main_video4_pane_g1

0x16b5,	// (0x0002b938) main_video4_pane_g2_ParamLimits

0x16b5,	// (0x0002b938) main_video4_pane_g2

0x16c4,	// (0x0002b947) main_video4_pane_g3_ParamLimits

0x16c4,	// (0x0002b947) main_video4_pane_g3

0x16d3,	// (0x0002b956) main_video4_pane_g4_ParamLimits

0x16d3,	// (0x0002b956) main_video4_pane_g4

0x0004,

0xf7ed,	// (0x00039a70) main_video4_pane_g_ParamLimits

0xf7ed,	// (0x00039a70) main_video4_pane_g

0x16f1,	// (0x0002b974) vid4_indicators_pane_ParamLimits

0x16f1,	// (0x0002b974) vid4_indicators_pane

0x171f,	// (0x0002b9a2) video4_image_uncrop_cif_pane_ParamLimits

0x171f,	// (0x0002b9a2) video4_image_uncrop_cif_pane

0x1739,	// (0x0002b9bc) video4_image_uncrop_nhd_pane_ParamLimits

0x1739,	// (0x0002b9bc) video4_image_uncrop_nhd_pane

0x15a2,	// (0x0002b825) video4_image_uncrop_vga_pane_ParamLimits

0x15a2,	// (0x0002b825) video4_image_uncrop_vga_pane

0xb21b,	// (0x0003549e) bg_tb_trans_pane_cp07

0xb87a,	// (0x00035afd) vid4_indicators_pane_g1

0xb88e,	// (0x00035b11) vid4_indicators_pane_g2

0xb8a2,	// (0x00035b25) vid4_indicators_pane_g3

0x0004,

0xf7f8,	// (0x00039a7b) vid4_indicators_pane_g

0xb8cf,	// (0x00035b52) vid4_indicators_pane_t1

0x5439,	// (0x0002f6bc) cam4_autofocus_pane_g1

0x5441,	// (0x0002f6c4) cam4_autofocus_pane_g2

0x5449,	// (0x0002f6cc) cam4_autofocus_pane_g3

0x0002,

0xf803,	// (0x00039a86) cam4_autofocus_pane_g

0x5451,	// (0x0002f6d4) cam4_autofocus_pane_g3_copy1

0x51f4,	// (0x0002f477) video_down_pane_cp_t1

0x5202,	// (0x0002f485) video_down_pane_cp_t2

0x0001,

0xf77b,	// (0x000399fe) video_down_pane_cp_t

0xb21b,	// (0x0003549e) popup_vitu2_window_ParamLimits

0xb21b,	// (0x0003549e) popup_vitu2_window

0x174d,	// (0x0002b9d0) aid_size_cell2_itu2_ParamLimits

0x174d,	// (0x0002b9d0) aid_size_cell2_itu2

0x1773,	// (0x0002b9f6) aid_size_cell_itu2_ParamLimits

0x1773,	// (0x0002b9f6) aid_size_cell_itu2

0x17cf,	// (0x0002ba52) bg_popup_window_pane_cp09_ParamLimits

0x17cf,	// (0x0002ba52) bg_popup_window_pane_cp09

0x17dd,	// (0x0002ba60) field_vitu2_entry_pane_ParamLimits

0x17dd,	// (0x0002ba60) field_vitu2_entry_pane

0x1803,	// (0x0002ba86) grid_vitu2_function_pane_ParamLimits

0x1803,	// (0x0002ba86) grid_vitu2_function_pane

0x1850,	// (0x0002bad3) grid_vitu2_itu_pane_ParamLimits

0x1850,	// (0x0002bad3) grid_vitu2_itu_pane

0x18e2,	// (0x0002bb65) cell_vitu2_itu_pane_ParamLimits

0x18e2,	// (0x0002bb65) cell_vitu2_itu_pane

0x190e,	// (0x0002bb91) cell_vitu2_function_pane_ParamLimits

0x190e,	// (0x0002bb91) cell_vitu2_function_pane

0x5459,	// (0x0002f6dc) bg_popup_call_pane_cp08_ParamLimits

0x5459,	// (0x0002f6dc) bg_popup_call_pane_cp08

0x5470,	// (0x0002f6f3) field_vitu2_entry_pane_g1

0x547c,	// (0x0002f6ff) field_vitu2_entry_pane_g2

0x0002,

0xf80a,	// (0x00039a8d) field_vitu2_entry_pane_g

0x5488,	// (0x0002f70b) field_vitu2_entry_pane_t1_ParamLimits

0x5488,	// (0x0002f70b) field_vitu2_entry_pane_t1

0x54b8,	// (0x0002f73b) field_vitu2_entry_pane_t2_ParamLimits

0x54b8,	// (0x0002f73b) field_vitu2_entry_pane_t2

0x0001,

0xf811,	// (0x00039a94) field_vitu2_entry_pane_t_ParamLimits

0xf811,	// (0x00039a94) field_vitu2_entry_pane_t

0x194d,	// (0x0002bbd0) bg_button_pane_cp010_ParamLimits

0x194d,	// (0x0002bbd0) bg_button_pane_cp010

0x195b,	// (0x0002bbde) cell_vitu2_itu_pane_g1

0x1981,	// (0x0002bc04) cell_vitu2_itu_pane_t1_ParamLimits

0x1981,	// (0x0002bc04) cell_vitu2_itu_pane_t1

0x19df,	// (0x0002bc62) cell_vitu2_itu_pane_t2_ParamLimits

0x19df,	// (0x0002bc62) cell_vitu2_itu_pane_t2

0x0002,

0xf81b,	// (0x00039a9e) cell_vitu2_itu_pane_t_ParamLimits

0xf81b,	// (0x00039a9e) cell_vitu2_itu_pane_t

0xb21b,	// (0x0003549e) bg_button_pane_cp011

0x1acb,	// (0x0002bd4e) cell_vitu2_function_pane_g1

0xb229,	// (0x000354ac) main_myfav_hc_pane

0x144c,	// (0x0002b6cf) popup_image3_note_pane_ParamLimits

0x144c,	// (0x0002b6cf) popup_image3_note_pane

0x1468,	// (0x0002b6eb) popup_image3_tool_bar_pane_ParamLimits

0x1468,	// (0x0002b6eb) popup_image3_tool_bar_pane

0x1a6d,	// (0x0002bcf0) cell_vitu2_itu_pane_t3_ParamLimits

0x1a6d,	// (0x0002bcf0) cell_vitu2_itu_pane_t3

0xbe20,	// (0x000360a3) bg_popup_trans_pane

0x54dd,	// (0x0002f760) grid_image3_tool_bar_pane

0x54e7,	// (0x0002f76a) bg_popup_trans_pane_g1

0xc99f,	// (0x00036c22) bg_popup_trans_pane_g2

0x54ef,	// (0x0002f772) bg_popup_trans_pane_g3

0x54f7,	// (0x0002f77a) bg_popup_trans_pane_g4

0x54ff,	// (0x0002f782) bg_popup_trans_pane_g5

0x5507,	// (0x0002f78a) bg_popup_trans_pane_g6

0x550f,	// (0x0002f792) bg_popup_trans_pane_g7

0x5517,	// (0x0002f79a) bg_popup_trans_pane_g8

0xc97f,	// (0x00036c02) bg_popup_trans_pane_g9

0x0008,

0xf822,	// (0x00039aa5) bg_popup_trans_pane_g

0x551f,	// (0x0002f7a2) cell_image3_tool_bar_pane_ParamLimits

0x551f,	// (0x0002f7a2) cell_image3_tool_bar_pane

0xc55f,	// (0x000367e2) cell_image3_tool_bar_pane_g1

0xbe20,	// (0x000360a3) bg_popup_trans_pane_cp1

0x5533,	// (0x0002f7b6) popup_image3_note_pane_t1

0x5541,	// (0x0002f7c4) popup_image3_note_pane_t2

0x554f,	// (0x0002f7d2) popup_image3_note_pane_t3

0x0002,

0xf835,	// (0x00039ab8) popup_image3_note_pane_t

0x555d,	// (0x0002f7e0) popup_image3_note_pane_t3_copy1

0x556b,	// (0x0002f7ee) bg_myfav_hc_instruction_pane_ParamLimits

0x556b,	// (0x0002f7ee) bg_myfav_hc_instruction_pane

0x557f,	// (0x0002f802) cell_myfav_contact_pane_ParamLimits

0x557f,	// (0x0002f802) cell_myfav_contact_pane

0x559d,	// (0x0002f820) cell_myfav_contact_pane_cp1_ParamLimits

0x559d,	// (0x0002f820) cell_myfav_contact_pane_cp1

0x55b5,	// (0x0002f838) cell_myfav_contact_pane_cp2_ParamLimits

0x55b5,	// (0x0002f838) cell_myfav_contact_pane_cp2

0x55cd,	// (0x0002f850) cell_myfav_contact_pane_cp3_ParamLimits

0x55cd,	// (0x0002f850) cell_myfav_contact_pane_cp3

0x55e4,	// (0x0002f867) cell_myfav_contact_pane_cp4_ParamLimits

0x55e4,	// (0x0002f867) cell_myfav_contact_pane_cp4

0x55fc,	// (0x0002f87f) cell_myfav_contact_pane_cp5_ParamLimits

0x55fc,	// (0x0002f87f) cell_myfav_contact_pane_cp5

0x5610,	// (0x0002f893) cell_myfav_contact_pane_cp6_ParamLimits

0x5610,	// (0x0002f893) cell_myfav_contact_pane_cp6

0x5626,	// (0x0002f8a9) cell_myfav_contact_pane_cp7_ParamLimits

0x5626,	// (0x0002f8a9) cell_myfav_contact_pane_cp7

0x5640,	// (0x0002f8c3) listscroll_gen_pane_cp05

0x5649,	// (0x0002f8cc) main_myfav_hc_pane_g1_ParamLimits

0x5649,	// (0x0002f8cc) main_myfav_hc_pane_g1

0x5663,	// (0x0002f8e6) main_myfav_hc_pane_g2_ParamLimits

0x5663,	// (0x0002f8e6) main_myfav_hc_pane_g2

0x0002,

0xf83c,	// (0x00039abf) main_myfav_hc_pane_g_ParamLimits

0xf83c,	// (0x00039abf) main_myfav_hc_pane_g

0x5695,	// (0x0002f918) main_myfav_hc_pane_t1_ParamLimits

0x5695,	// (0x0002f918) main_myfav_hc_pane_t1

0x56ac,	// (0x0002f92f) main_myfav_hc_pane_t2_ParamLimits

0x56ac,	// (0x0002f92f) main_myfav_hc_pane_t2

0x56be,	// (0x0002f941) main_myfav_hc_pane_t3_ParamLimits

0x56be,	// (0x0002f941) main_myfav_hc_pane_t3

0x56d0,	// (0x0002f953) main_myfav_hc_pane_t4_ParamLimits

0x56d0,	// (0x0002f953) main_myfav_hc_pane_t4

0x0004,

0xf843,	// (0x00039ac6) main_myfav_hc_pane_t_ParamLimits

0xf843,	// (0x00039ac6) main_myfav_hc_pane_t

0xc55f,	// (0x000367e2) bg_myfav_hc_instruction_pane_g1

0x56f8,	// (0x0002f97b) cell_myfav_contact_pane_g1_ParamLimits

0x56f8,	// (0x0002f97b) cell_myfav_contact_pane_g1

0x56f8,	// (0x0002f97b) cell_myfav_contact_pane_g2_ParamLimits

0x56f8,	// (0x0002f97b) cell_myfav_contact_pane_g2

0x5704,	// (0x0002f987) cell_myfav_contact_pane_g3_ParamLimits

0x5704,	// (0x0002f987) cell_myfav_contact_pane_g3

0xc52f,	// (0x000367b2) cell_myfav_contact_pane_g4_ParamLimits

0xc52f,	// (0x000367b2) cell_myfav_contact_pane_g4

0x5711,	// (0x0002f994) cell_myfav_contact_pane_g5_ParamLimits

0x5711,	// (0x0002f994) cell_myfav_contact_pane_g5

0x0004,

0xf84e,	// (0x00039ad1) cell_myfav_contact_pane_g_ParamLimits

0xf84e,	// (0x00039ad1) cell_myfav_contact_pane_g

0x567d,	// (0x0002f900) main_myfav_hc_pane_g3_ParamLimits

0x567d,	// (0x0002f900) main_myfav_hc_pane_g3

0x09f9,	// (0x0002ac7c) popup_adpt_find_window

0x571d,	// (0x0002f9a0) afind_page_pane_ParamLimits

0x571d,	// (0x0002f9a0) afind_page_pane

0x5733,	// (0x0002f9b6) aid_size_cell_afind_ParamLimits

0x5733,	// (0x0002f9b6) aid_size_cell_afind

0x5751,	// (0x0002f9d4) bg_popup_sub_pane_cp09_ParamLimits

0x5751,	// (0x0002f9d4) bg_popup_sub_pane_cp09

0x5763,	// (0x0002f9e6) find_pane_cp01_ParamLimits

0x5763,	// (0x0002f9e6) find_pane_cp01

0x5777,	// (0x0002f9fa) grid_afind_control_pane_ParamLimits

0x5777,	// (0x0002f9fa) grid_afind_control_pane

0x578b,	// (0x0002fa0e) grid_afind_pane_ParamLimits

0x578b,	// (0x0002fa0e) grid_afind_pane

0x57ad,	// (0x0002fa30) cell_afind_pane_ParamLimits

0x57ad,	// (0x0002fa30) cell_afind_pane

0xc55f,	// (0x000367e2) afind_page_pane_g1

0x5814,	// (0x0002fa97) afind_page_pane_g2

0x581c,	// (0x0002fa9f) afind_page_pane_g3

0x0002,

0xf859,	// (0x00039adc) afind_page_pane_g

0x5824,	// (0x0002faa7) afind_page_pane_t1

0x5844,	// (0x0002fac7) cell_afind_grid_control_pane_ParamLimits

0x5844,	// (0x0002fac7) cell_afind_grid_control_pane

0x5853,	// (0x0002fad6) bg_button_pane_cp69_ParamLimits

0x5853,	// (0x0002fad6) bg_button_pane_cp69

0x585f,	// (0x0002fae2) cell_afind_pane_g1_ParamLimits

0x585f,	// (0x0002fae2) cell_afind_pane_g1

0x586c,	// (0x0002faef) cell_afind_pane_t1_ParamLimits

0x586c,	// (0x0002faef) cell_afind_pane_t1

0x587e,	// (0x0002fb01) bg_button_pane_cp72

0x5886,	// (0x0002fb09) cell_afind_grid_control_pane_g1

0x3d53,	// (0x0002dfd6) aid_image_placing_area_ParamLimits

0x3d53,	// (0x0002dfd6) aid_image_placing_area

0xc521,	// (0x000367a4) field_vitu_entry_pane_g1_ParamLimits

0xc521,	// (0x000367a4) field_vitu_entry_pane_g1

0xc521,	// (0x000367a4) field_vitu_entry_pane_g2_ParamLimits

0xc521,	// (0x000367a4) field_vitu_entry_pane_g2

0x0001,

0xf1bc,	// (0x0003943f) field_vitu_entry_pane_g_ParamLimits

0xf1bc,	// (0x0003943f) field_vitu_entry_pane_g

0xeefa,	// (0x0003917d) cell_vitu_itu_pane_g1_ParamLimits

0xeedd,	// (0x00039160) cell_vitu_itu_pane_t3_ParamLimits

0xeedd,	// (0x00039160) cell_vitu_itu_pane_t3

0x5252,	// (0x0002f4d5) mp4_progress_pane_t1_ParamLimits

0x5274,	// (0x0002f4f7) mp4_progress_pane_t2_ParamLimits

0xf79f,	// (0x00039a22) mp4_progress_pane_t_ParamLimits

0x5296,	// (0x0002f519) mup_progress_pane_cp04_ParamLimits

0x56e4,	// (0x0002f967) main_myfav_hc_pane_t5_ParamLimits

0x56e4,	// (0x0002f967) main_myfav_hc_pane_t5

0xb1d2,	// (0x00035455) aid_zoom_text_primary

0x09f9,	// (0x0002ac7c) popup_adpt_find_window_ParamLimits

0xb21b,	// (0x0003549e) main_cam_set_pane

0x15d3,	// (0x0002b856) cam4_zoom_pane_ParamLimits

0x15d3,	// (0x0002b856) cam4_zoom_pane

0x588f,	// (0x0002fb12) main_cam_set_pane_g1_ParamLimits

0x588f,	// (0x0002fb12) main_cam_set_pane_g1

0x589d,	// (0x0002fb20) main_cam_set_pane_g2_ParamLimits

0x589d,	// (0x0002fb20) main_cam_set_pane_g2

0x0001,

0xf860,	// (0x00039ae3) main_cam_set_pane_g_ParamLimits

0xf860,	// (0x00039ae3) main_cam_set_pane_g

0x58be,	// (0x0002fb41) main_cam_set_pane_t1_ParamLimits

0x58be,	// (0x0002fb41) main_cam_set_pane_t1

0x58d9,	// (0x0002fb5c) main_cset_listscroll_pane_ParamLimits

0x58d9,	// (0x0002fb5c) main_cset_listscroll_pane

0x58ff,	// (0x0002fb82) main_cset_slider_pane_ParamLimits

0x58ff,	// (0x0002fb82) main_cset_slider_pane

0x592d,	// (0x0002fbb0) main_cset_list_pane_ParamLimits

0x592d,	// (0x0002fbb0) main_cset_list_pane

0x593d,	// (0x0002fbc0) scroll_pane_cp028

0x5946,	// (0x0002fbc9) aid_area_touch_slider

0x5962,	// (0x0002fbe5) cset_slider_pane

0x5985,	// (0x0002fc08) main_cset_slider_pane_g1

0x599a,	// (0x0002fc1d) main_cset_slider_pane_g2

0x0011,

0xf865,	// (0x00039ae8) main_cset_slider_pane_g

0x5a86,	// (0x0002fd09) main_cset_slider_pane_t1

0x5aae,	// (0x0002fd31) main_cset_slider_pane_t2

0x5ac8,	// (0x0002fd4b) main_cset_slider_pane_t3

0x5ae2,	// (0x0002fd65) main_cset_slider_pane_t4

0x5afc,	// (0x0002fd7f) main_cset_slider_pane_t5

0x5b16,	// (0x0002fd99) main_cset_slider_pane_t6

0x5b2b,	// (0x0002fdae) main_cset_slider_pane_t7

0x000e,

0xf88a,	// (0x00039b0d) main_cset_slider_pane_t

0x5ca1,	// (0x0002ff24) cset_list_set_pane_ParamLimits

0x5ca1,	// (0x0002ff24) cset_list_set_pane

0x5cb3,	// (0x0002ff36) aid_position_infowindow_above

0x5cbb,	// (0x0002ff3e) aid_position_infowindow_below

0x5cc3,	// (0x0002ff46) cset_list_set_pane_g1_ParamLimits

0x5cc3,	// (0x0002ff46) cset_list_set_pane_g1

0x5ccf,	// (0x0002ff52) cset_list_set_pane_g3_ParamLimits

0x5ccf,	// (0x0002ff52) cset_list_set_pane_g3

0x0001,

0xf8a9,	// (0x00039b2c) cset_list_set_pane_g_ParamLimits

0xf8a9,	// (0x00039b2c) cset_list_set_pane_g

0x5cde,	// (0x0002ff61) cset_list_set_pane_t1_ParamLimits

0x5cde,	// (0x0002ff61) cset_list_set_pane_t1

0xc40e,	// (0x00036691) list_highlight_pane_cp021_ParamLimits

0xc40e,	// (0x00036691) list_highlight_pane_cp021

0xd2ce,	// (0x00037551) cset_slider_pane_g1

0xd2e0,	// (0x00037563) cset_slider_pane_g2

0xd2d7,	// (0x0003755a) cset_slider_pane_g3

0x0002,

0xf8ae,	// (0x00039b31) cset_slider_pane_g

0xb8e6,	// (0x00035b69) aid_area_touch_cam4_zoom

0xb8ee,	// (0x00035b71) cam4_zoom_cont_pane

0xb8f6,	// (0x00035b79) cam4_zoom_pane_g1

0xb8fe,	// (0x00035b81) cam4_zoom_pane_g2

0x1ade,	// (0x0002bd61) cam4_zoom_pane_g3

0x0002,

0xf8b5,	// (0x00039b38) cam4_zoom_pane_g

0xb906,	// (0x00035b89) cam4_zoom_cont_pane_g1

0xb90f,	// (0x00035b92) cam4_zoom_cont_pane_g2

0xb918,	// (0x00035b9b) cam4_zoom_cont_pane_g3

0x0002,

0xf8bc,	// (0x00039b3f) cam4_zoom_cont_pane_g

0x14a2,	// (0x0002b725) call4_image_pane_ParamLimits

0x14a2,	// (0x0002b725) call4_image_pane

0x5353,	// (0x0002f5d6) call4_windows_conf_pane_ParamLimits

0x5396,	// (0x0002f619) popup_call4_audio_in_window_ParamLimits

0x5396,	// (0x0002f619) popup_call4_audio_in_window

0xbe20,	// (0x000360a3) bg_popup_call2_act_pane_cp02

0x53e9,	// (0x0002f66c) call4_list_conf_pane

0xc55f,	// (0x000367e2) call4_image_pane_g1

0xc55f,	// (0x000367e2) call4_image_pane_g2

0x0001,

0xf0af,	// (0x00039332) call4_image_pane_g

0x5cf3,	// (0x0002ff76) list_single_graphic_popup_conf4_pane_ParamLimits

0x5cf3,	// (0x0002ff76) list_single_graphic_popup_conf4_pane

0xbe20,	// (0x000360a3) list_highlight_pane_cp022

0x5d06,	// (0x0002ff89) list_single_graphic_popup_conf4_pane_g1

0xcebd,	// (0x00037140) list_single_graphic_popup_conf4_pane_g2

0x0001,

0xf8c3,	// (0x00039b46) list_single_graphic_popup_conf4_pane_g

0x5d0e,	// (0x0002ff91) list_single_graphic_popup_conf4_pane_t1

0x2690,	// (0x0002c913) popup_vtel_slider_window_ParamLimits

0x2690,	// (0x0002c913) popup_vtel_slider_window

0x52e8,	// (0x0002f56b) dialer2_ne_pane_t2_ParamLimits

0x52e8,	// (0x0002f56b) dialer2_ne_pane_t2

0x0001,

0xf7a4,	// (0x00039a27) dialer2_ne_pane_t_ParamLimits

0xf7a4,	// (0x00039a27) dialer2_ne_pane_t

0xe65d,	// (0x000388e0) bg_popup_sub_pane_cp010_ParamLimits

0xe65d,	// (0x000388e0) bg_popup_sub_pane_cp010

0x5d24,	// (0x0002ffa7) popup_vtel_slider_window_g1_ParamLimits

0x5d24,	// (0x0002ffa7) popup_vtel_slider_window_g1

0x5d37,	// (0x0002ffba) popup_vtel_slider_window_g2_ParamLimits

0x5d37,	// (0x0002ffba) popup_vtel_slider_window_g2

0x0003,

0xf8c8,	// (0x00039b4b) popup_vtel_slider_window_g_ParamLimits

0xf8c8,	// (0x00039b4b) popup_vtel_slider_window_g

0x5d8d,	// (0x00030010) vtel_slider_pane_ParamLimits

0x5d8d,	// (0x00030010) vtel_slider_pane

0x5daf,	// (0x00030032) vtel_slider_pane_g1_ParamLimits

0x5daf,	// (0x00030032) vtel_slider_pane_g1

0x5dc3,	// (0x00030046) vtel_slider_pane_g2_ParamLimits

0x5dc3,	// (0x00030046) vtel_slider_pane_g2

0x5ddb,	// (0x0003005e) vtel_slider_pane_g3_ParamLimits

0x5ddb,	// (0x0003005e) vtel_slider_pane_g3

0x5daf,	// (0x00030032) vtel_slider_pane_g4_ParamLimits

0x5daf,	// (0x00030032) vtel_slider_pane_g4

0x5df1,	// (0x00030074) vtel_slider_pane_g5_ParamLimits

0x5df1,	// (0x00030074) vtel_slider_pane_g5

0x0004,

0xf8d1,	// (0x00039b54) vtel_slider_pane_g_ParamLimits

0xf8d1,	// (0x00039b54) vtel_slider_pane_g

0xb21b,	// (0x0003549e) main_gallery2_pane

0x179f,	// (0x0002ba22) aid_size_row_itut2_dropdow_list_ParamLimits

0x179f,	// (0x0002ba22) aid_size_row_itut2_dropdow_list

0x1827,	// (0x0002baaa) grid_vitu2_function_top_pane_ParamLimits

0x1827,	// (0x0002baaa) grid_vitu2_function_top_pane

0x188b,	// (0x0002bb0e) popup_vitu2_dropdown_list_window_ParamLimits

0x188b,	// (0x0002bb0e) popup_vitu2_dropdown_list_window

0x18b6,	// (0x0002bb39) popup_vitu2_match_list_window

0x1ae6,	// (0x0002bd69) cell_vitu2_function_top_pane_ParamLimits

0x1ae6,	// (0x0002bd69) cell_vitu2_function_top_pane

0x1afe,	// (0x0002bd81) cell_vitu2_function_top_pane_cp01_ParamLimits

0x1afe,	// (0x0002bd81) cell_vitu2_function_top_pane_cp01

0x1b1a,	// (0x0002bd9d) cell_vitu2_function_top_wide_pane_ParamLimits

0x1b1a,	// (0x0002bd9d) cell_vitu2_function_top_wide_pane

0xb21b,	// (0x0003549e) bg_button_pane_cp012

0x1b38,	// (0x0002bdbb) cell_vitu2_function_top_pane_g1

0xb921,	// (0x00035ba4) bg_button_pane_cp013_ParamLimits

0xb921,	// (0x00035ba4) bg_button_pane_cp013

0x5e07,	// (0x0003008a) cell_vitu2_function_top_wide_pane_g1_ParamLimits

0x5e07,	// (0x0003008a) cell_vitu2_function_top_wide_pane_g1

0xb21b,	// (0x0003549e) bg_popup_sub_pane_cp20

0x1b4c,	// (0x0002bdcf) list_vitu2_match_list_pane

0x54e7,	// (0x0002f76a) bg_popup_sub_pane_cp20_g1

0x54ef,	// (0x0002f772) bg_popup_sub_pane_cp20_g2

0xc99f,	// (0x00036c22) bg_popup_sub_pane_cp20_g3

0x54f7,	// (0x0002f77a) bg_popup_sub_pane_cp20_g4

0xc97f,	// (0x00036c02) bg_popup_sub_pane_cp20_g5

0x5e1f,	// (0x000300a2) bg_popup_sub_pane_cp20_g6

0x5507,	// (0x0002f78a) bg_popup_sub_pane_cp20_g7

0x550f,	// (0x0002f792) bg_popup_sub_pane_cp20_g8

0x5517,	// (0x0002f79a) bg_popup_sub_pane_cp20_g9

0x0008,

0xf8dc,	// (0x00039b5f) bg_popup_sub_pane_cp20_g

0xb93d,	// (0x00035bc0) list_vitu2_match_list_item_pane_ParamLimits

0xb93d,	// (0x00035bc0) list_vitu2_match_list_item_pane

0xb94f,	// (0x00035bd2) list_vitu2_match_list_item_pane_t1

0xb229,	// (0x000354ac) bg_popup_sub_pane_cp21

0xc786,	// (0x00036a09) grid_vitu2_dropdown_list_pane

0x1b64,	// (0x0002bde7) cell_vitu2_dropdown_list_char_pane_ParamLimits

0x1b64,	// (0x0002bde7) cell_vitu2_dropdown_list_char_pane

0x1b84,	// (0x0002be07) cell_vitu2_dropdown_list_ctrl_pane_ParamLimits

0x1b84,	// (0x0002be07) cell_vitu2_dropdown_list_ctrl_pane

0x5e27,	// (0x000300aa) cell_vitu2_dropdown_list_char_pane_g1

0x5e30,	// (0x000300b3) cell_vitu2_dropdown_list_char_pane_g2

0x5e39,	// (0x000300bc) cell_vitu2_dropdown_list_char_pane_g3

0x0002,

0xf8ef,	// (0x00039b72) cell_vitu2_dropdown_list_char_pane_g

0x1bac,	// (0x0002be2f) cell_vitu2_dropdown_list_char_pane_t1

0x5e42,	// (0x000300c5) cell_vitu2_dropdown_list_ctrl_pane_g1_ParamLimits

0x5e42,	// (0x000300c5) cell_vitu2_dropdown_list_ctrl_pane_g1

0x5e4f,	// (0x000300d2) cell_vitu2_dropdown_list_ctrl_pane_g2_ParamLimits

0x5e4f,	// (0x000300d2) cell_vitu2_dropdown_list_ctrl_pane_g2

0x5e5c,	// (0x000300df) cell_vitu2_dropdown_list_ctrl_pane_g3_ParamLimits

0x5e5c,	// (0x000300df) cell_vitu2_dropdown_list_ctrl_pane_g3

0x1bba,	// (0x0002be3d) cell_vitu2_dropdown_list_ctrl_pane_g4_ParamLimits

0x1bba,	// (0x0002be3d) cell_vitu2_dropdown_list_ctrl_pane_g4

0x542b,	// (0x0002f6ae) cell_vitu2_dropdown_list_ctrl_pane_g5_ParamLimits

0x542b,	// (0x0002f6ae) cell_vitu2_dropdown_list_ctrl_pane_g5

0x0004,

0xf8f6,	// (0x00039b79) cell_vitu2_dropdown_list_ctrl_pane_g_ParamLimits

0xf8f6,	// (0x00039b79) cell_vitu2_dropdown_list_ctrl_pane_g

0x5e69,	// (0x000300ec) aid_size_cell_gallery2_ParamLimits

0x5e69,	// (0x000300ec) aid_size_cell_gallery2

0x5e87,	// (0x0003010a) grid_gallery2_pane_ParamLimits

0x5e87,	// (0x0003010a) grid_gallery2_pane

0x5ea1,	// (0x00030124) scroll_pane_cp029_ParamLimits

0x5ea1,	// (0x00030124) scroll_pane_cp029

0x5eb2,	// (0x00030135) cell_gallery2_pane_ParamLimits

0x5eb2,	// (0x00030135) cell_gallery2_pane

0x5f11,	// (0x00030194) cell_gallery2_pane_g2

0x5f19,	// (0x0003019c) cell_gallery2_pane_g3

0x5f21,	// (0x000301a4) cell_gallery2_pane_g4

0x5f29,	// (0x000301ac) cell_gallery2_pane_g5

0xc786,	// (0x00036a09) grid_highlight_pane_cp10

0x18b6,	// (0x0002bb39) popup_vitu2_match_list_window_ParamLimits

0x18cb,	// (0x0002bb4e) popup_vitu2_query_window_ParamLimits

0x18cb,	// (0x0002bb4e) popup_vitu2_query_window

0xb229,	// (0x000354ac) bg_vitu2_candi_button_pane

0x5e27,	// (0x000300aa) cell_vitu2_dropdown_list_char_pane_g1_copy1

0x5e30,	// (0x000300b3) cell_vitu2_dropdown_list_char_pane_g2_copy1

0x5e39,	// (0x000300bc) cell_vitu2_dropdown_list_char_pane_g2_copy2

0x5f31,	// (0x000301b4) bg_button_pane_cp015

0x5f42,	// (0x000301c5) bg_button_pane_cp016

0x5f4e,	// (0x000301d1) bg_button_pane_cp017

0xd25e,	// (0x000374e1) bg_popup_sub_pane_cp22

0x5f8c,	// (0x0003020f) popup_vitu2_query_window_g1

0x5f98,	// (0x0003021b) popup_vitu2_query_window_g2

0x0002,

0xf901,	// (0x00039b84) popup_vitu2_query_window_g

0x5fba,	// (0x0003023d) popup_vitu2_query_window_t1_ParamLimits

0x5fba,	// (0x0003023d) popup_vitu2_query_window_t1

0x5fed,	// (0x00030270) popup_vitu2_query_window_t2_ParamLimits

0x5fed,	// (0x00030270) popup_vitu2_query_window_t2

0x5fff,	// (0x00030282) popup_vitu2_query_window_t3_ParamLimits

0x5fff,	// (0x00030282) popup_vitu2_query_window_t3

0x6027,	// (0x000302aa) popup_vitu2_query_window_t4_ParamLimits

0x6027,	// (0x000302aa) popup_vitu2_query_window_t4

0x603b,	// (0x000302be) popup_vitu2_query_window_t5_ParamLimits

0x603b,	// (0x000302be) popup_vitu2_query_window_t5

0x0006,

0xf908,	// (0x00039b8b) popup_vitu2_query_window_t_ParamLimits

0xf908,	// (0x00039b8b) popup_vitu2_query_window_t

0x5925,	// (0x0002fba8) main_cset_text_pane

0x5946,	// (0x0002fbc9) aid_area_touch_slider_ParamLimits

0x5962,	// (0x0002fbe5) cset_slider_pane_ParamLimits

0x5985,	// (0x0002fc08) main_cset_slider_pane_g1_ParamLimits

0x599a,	// (0x0002fc1d) main_cset_slider_pane_g2_ParamLimits

0x59af,	// (0x0002fc32) main_cset_slider_pane_g3_ParamLimits

0x59af,	// (0x0002fc32) main_cset_slider_pane_g3

0x59bb,	// (0x0002fc3e) main_cset_slider_pane_g4_ParamLimits

0x59bb,	// (0x0002fc3e) main_cset_slider_pane_g4

0x59ca,	// (0x0002fc4d) main_cset_slider_pane_g5_ParamLimits

0x59ca,	// (0x0002fc4d) main_cset_slider_pane_g5

0x59d6,	// (0x0002fc59) main_cset_slider_pane_g6_ParamLimits

0x59d6,	// (0x0002fc59) main_cset_slider_pane_g6

0xf865,	// (0x00039ae8) main_cset_slider_pane_g_ParamLimits

0x5a86,	// (0x0002fd09) main_cset_slider_pane_t1_ParamLimits

0x5aae,	// (0x0002fd31) main_cset_slider_pane_t2_ParamLimits

0x5ac8,	// (0x0002fd4b) main_cset_slider_pane_t3_ParamLimits

0x5ae2,	// (0x0002fd65) main_cset_slider_pane_t4_ParamLimits

0x5afc,	// (0x0002fd7f) main_cset_slider_pane_t5_ParamLimits

0x5b16,	// (0x0002fd99) main_cset_slider_pane_t6_ParamLimits

0x5b2b,	// (0x0002fdae) main_cset_slider_pane_t7_ParamLimits

0x5b55,	// (0x0002fdd8) main_cset_slider_pane_t8_ParamLimits

0x5b55,	// (0x0002fdd8) main_cset_slider_pane_t8

0x5b7d,	// (0x0002fe00) main_cset_slider_pane_t9_ParamLimits

0x5b7d,	// (0x0002fe00) main_cset_slider_pane_t9

0x5ba5,	// (0x0002fe28) main_cset_slider_pane_t10_ParamLimits

0x5ba5,	// (0x0002fe28) main_cset_slider_pane_t10

0x5bcd,	// (0x0002fe50) main_cset_slider_pane_t11_ParamLimits

0x5bcd,	// (0x0002fe50) main_cset_slider_pane_t11

0x5bf5,	// (0x0002fe78) main_cset_slider_pane_t12_ParamLimits

0x5bf5,	// (0x0002fe78) main_cset_slider_pane_t12

0x5c12,	// (0x0002fe95) main_cset_slider_pane_t13_ParamLimits

0x5c12,	// (0x0002fe95) main_cset_slider_pane_t13

0xf88a,	// (0x00039b0d) main_cset_slider_pane_t_ParamLimits

0xbe20,	// (0x000360a3) bg_popup_sub_pane_cp011

0x60a5,	// (0x00030328) main_cset_text_pane_g1

0x60ad,	// (0x00030330) main_cset_text_pane_t1

0x60bb,	// (0x0003033e) main_cset_text_pane_t2

0x60c9,	// (0x0003034c) main_cset_text_pane_t3

0x60d7,	// (0x0003035a) main_cset_text_pane_t4

0x60e5,	// (0x00030368) main_cset_text_pane_t5

0x60f3,	// (0x00030376) main_cset_text_pane_t6

0x6101,	// (0x00030384) main_cset_text_pane_t7

0x0006,

0xf917,	// (0x00039b9a) main_cset_text_pane_t

0xb229,	// (0x000354ac) main_cam4_burst_pane

0xb229,	// (0x000354ac) main_cam5_pane

0x5832,	// (0x0002fab5) bg_button_pane_cp019

0x583b,	// (0x0002fabe) bg_button_pane_cp020

0x59ea,	// (0x0002fc6d) main_cset_slider_pane_g7_ParamLimits

0x59ea,	// (0x0002fc6d) main_cset_slider_pane_g7

0x59f6,	// (0x0002fc79) main_cset_slider_pane_g8_ParamLimits

0x59f6,	// (0x0002fc79) main_cset_slider_pane_g8

0x5a02,	// (0x0002fc85) main_cset_slider_pane_g9_ParamLimits

0x5a02,	// (0x0002fc85) main_cset_slider_pane_g9

0x5a0e,	// (0x0002fc91) main_cset_slider_pane_g10_ParamLimits

0x5a0e,	// (0x0002fc91) main_cset_slider_pane_g10

0x5a1a,	// (0x0002fc9d) main_cset_slider_pane_g11_ParamLimits

0x5a1a,	// (0x0002fc9d) main_cset_slider_pane_g11

0x5a26,	// (0x0002fca9) main_cset_slider_pane_g12_ParamLimits

0x5a26,	// (0x0002fca9) main_cset_slider_pane_g12

0x5a32,	// (0x0002fcb5) main_cset_slider_pane_g13_ParamLimits

0x5a32,	// (0x0002fcb5) main_cset_slider_pane_g13

0x5a3e,	// (0x0002fcc1) main_cset_slider_pane_g14_ParamLimits

0x5a3e,	// (0x0002fcc1) main_cset_slider_pane_g14

0x5a4a,	// (0x0002fccd) main_cset_slider_pane_g15_ParamLimits

0x5a4a,	// (0x0002fccd) main_cset_slider_pane_g15

0x5c2f,	// (0x0002feb2) main_cset_slider_pane_t14_ParamLimits

0x5c2f,	// (0x0002feb2) main_cset_slider_pane_t14

0x5c68,	// (0x0002feeb) main_cset_slider_pane_t15_ParamLimits

0x5c68,	// (0x0002feeb) main_cset_slider_pane_t15

0x610f,	// (0x00030392) aid_cam4_burst_size_cell_ParamLimits

0x610f,	// (0x00030392) aid_cam4_burst_size_cell

0x612f,	// (0x000303b2) grid_cam4_burst_pane_ParamLimits

0x612f,	// (0x000303b2) grid_cam4_burst_pane

0x6167,	// (0x000303ea) linegrid_cam4_burst_pane_ParamLimits

0x6167,	// (0x000303ea) linegrid_cam4_burst_pane

0x618b,	// (0x0003040e) scroll_pane_cp30_ParamLimits

0x618b,	// (0x0003040e) scroll_pane_cp30

0x6197,	// (0x0003041a) cell_cam4_burst_pane_ParamLimits

0x6197,	// (0x0003041a) cell_cam4_burst_pane

0x61e4,	// (0x00030467) linegrid_cam4_burst_pane_g1_ParamLimits

0x61e4,	// (0x00030467) linegrid_cam4_burst_pane_g1

0x61f1,	// (0x00030474) linegrid_cam4_burst_pane_g2_ParamLimits

0x61f1,	// (0x00030474) linegrid_cam4_burst_pane_g2

0x6202,	// (0x00030485) linegrid_cam4_burst_pane_g3_ParamLimits

0x6202,	// (0x00030485) linegrid_cam4_burst_pane_g3

0x0002,

0xf926,	// (0x00039ba9) linegrid_cam4_burst_pane_g_ParamLimits

0xf926,	// (0x00039ba9) linegrid_cam4_burst_pane_g

0x620f,	// (0x00030492) linegrid_cam4_burst_pane_g3_copy1_ParamLimits

0x620f,	// (0x00030492) linegrid_cam4_burst_pane_g3_copy1

0x6229,	// (0x000304ac) linegrid_cam4_burst_pane_g4_ParamLimits

0x6229,	// (0x000304ac) linegrid_cam4_burst_pane_g4

0x6236,	// (0x000304b9) linegrid_cam4_burst_pane_g5_ParamLimits

0x6236,	// (0x000304b9) linegrid_cam4_burst_pane_g5

0x6247,	// (0x000304ca) linegrid_cam4_burst_pane_g6_ParamLimits

0x6247,	// (0x000304ca) linegrid_cam4_burst_pane_g6

0x625e,	// (0x000304e1) linegrid_cam4_burst_pane_g7_ParamLimits

0x625e,	// (0x000304e1) linegrid_cam4_burst_pane_g7

0x626b,	// (0x000304ee) cell_cam4_burst_pane_g1

0x628a,	// (0x0003050d) main_cam5_pane_t1_ParamLimits

0x628a,	// (0x0003050d) main_cam5_pane_t1

0x629c,	// (0x0003051f) main_cam5_pane_t2_ParamLimits

0x629c,	// (0x0003051f) main_cam5_pane_t2

0x62ae,	// (0x00030531) main_cam5_pane_t3_ParamLimits

0x62ae,	// (0x00030531) main_cam5_pane_t3

0x62c0,	// (0x00030543) main_cam5_pane_t4_ParamLimits

0x62c0,	// (0x00030543) main_cam5_pane_t4

0x62d8,	// (0x0003055b) main_cam5_pane_t5_ParamLimits

0x62d8,	// (0x0003055b) main_cam5_pane_t5

0x62ec,	// (0x0003056f) main_cam5_pane_t6_ParamLimits

0x62ec,	// (0x0003056f) main_cam5_pane_t6

0x6300,	// (0x00030583) main_cam5_pane_t7_ParamLimits

0x6300,	// (0x00030583) main_cam5_pane_t7

0x6312,	// (0x00030595) main_cam5_pane_t8_ParamLimits

0x6312,	// (0x00030595) main_cam5_pane_t8

0x632e,	// (0x000305b1) main_cam5_pane_t9_ParamLimits

0x632e,	// (0x000305b1) main_cam5_pane_t9

0x6340,	// (0x000305c3) main_cam5_pane_t10_ParamLimits

0x6340,	// (0x000305c3) main_cam5_pane_t10

0x6352,	// (0x000305d5) main_cam5_pane_t11_ParamLimits

0x6352,	// (0x000305d5) main_cam5_pane_t11

0x6364,	// (0x000305e7) main_cam5_pane_t12_ParamLimits

0x6364,	// (0x000305e7) main_cam5_pane_t12

0x6379,	// (0x000305fc) main_cam5_pane_t13_ParamLimits

0x6379,	// (0x000305fc) main_cam5_pane_t13

0x000c,

0xf932,	// (0x00039bb5) main_cam5_pane_t_ParamLimits

0xf932,	// (0x00039bb5) main_cam5_pane_t

0x0a7a,	// (0x0002acfd) popup_scut_keymap_window_ParamLimits

0x0a7a,	// (0x0002acfd) popup_scut_keymap_window

0x6396,	// (0x00030619) aid_size_cell_brow_shortcut

0xc786,	// (0x00036a09) bg_popup_window_pane_cp010

0x63a2,	// (0x00030625) grid_scut_pane

0x63ae,	// (0x00030631) cell_scut_pane_ParamLimits

0x63ae,	// (0x00030631) cell_scut_pane

0x63c5,	// (0x00030648) cell_scut_pane_g1

0x63ce,	// (0x00030651) cell_scut_pane_t1

0x63dd,	// (0x00030660) cell_scut_pane_t2

0x63ec,	// (0x0003066f) cell_scut_pane_t3

0x0002,

0xf94d,	// (0x00039bd0) cell_scut_pane_t

0x48b2,	// (0x0002eb35) main_mup3_pane_g8_ParamLimits

0x48b2,	// (0x0002eb35) main_mup3_pane_g8

0x17b9,	// (0x0002ba3c) area_vitu2_query_pane_ParamLimits

0x17b9,	// (0x0002ba3c) area_vitu2_query_pane

0x5f5a,	// (0x000301dd) input_focus_pane_cp08

0x63fa,	// (0x0003067d) area_vitu2_query_pane_g1

0x6406,	// (0x00030689) area_vitu2_query_pane_g2

0x0001,

0xf954,	// (0x00039bd7) area_vitu2_query_pane_g

0x6415,	// (0x00030698) area_vitu2_query_pane_t1_ParamLimits

0x6415,	// (0x00030698) area_vitu2_query_pane_t1

0x6429,	// (0x000306ac) area_vitu2_query_pane_t2_ParamLimits

0x6429,	// (0x000306ac) area_vitu2_query_pane_t2

0x643d,	// (0x000306c0) area_vitu2_query_pane_t3_ParamLimits

0x643d,	// (0x000306c0) area_vitu2_query_pane_t3

0x6465,	// (0x000306e8) area_vitu2_query_pane_t4_ParamLimits

0x6465,	// (0x000306e8) area_vitu2_query_pane_t4

0x648d,	// (0x00030710) area_vitu2_query_pane_t5_ParamLimits

0x648d,	// (0x00030710) area_vitu2_query_pane_t5

0x64b5,	// (0x00030738) area_vitu2_query_pane_t6_ParamLimits

0x64b5,	// (0x00030738) area_vitu2_query_pane_t6

0x0006,

0xf959,	// (0x00039bdc) area_vitu2_query_pane_t_ParamLimits

0xf959,	// (0x00039bdc) area_vitu2_query_pane_t

0x6501,	// (0x00030784) bg_button_pane_cp018

0x650d,	// (0x00030790) bg_button_pane_cp021

0x6519,	// (0x0003079c) bg_button_pane_cp022

0x6538,	// (0x000307bb) input_focus_pane_cp09

0xcfcc,	// (0x0003724f) aid_size_touch_mv_arrow_left

0xcff7,	// (0x0003727a) aid_size_touch_mv_arrow_right

0x5a62,	// (0x0002fce5) main_cset_slider_pane_g16_ParamLimits

0x5a62,	// (0x0002fce5) main_cset_slider_pane_g16

0x5a6e,	// (0x0002fcf1) main_cset_slider_pane_g17_ParamLimits

0x5a6e,	// (0x0002fcf1) main_cset_slider_pane_g17

0x626b,	// (0x000304ee) cell_cam4_burst_pane_g1_ParamLimits

0xbe20,	// (0x000360a3) compa_mode_pane

0x5d47,	// (0x0002ffca) popup_vtel_slider_window_g3_ParamLimits

0x5d47,	// (0x0002ffca) popup_vtel_slider_window_g3

0x5d5e,	// (0x0002ffe1) popup_vtel_slider_window_g4_ParamLimits

0x5d5e,	// (0x0002ffe1) popup_vtel_slider_window_g4

0x5d75,	// (0x0002fff8) popup_vtel_slider_window_t1_ParamLimits

0x5d75,	// (0x0002fff8) popup_vtel_slider_window_t1

0xb229,	// (0x000354ac) main_cl_pane

0xb3ca,	// (0x0003564d) popup_imed_adjust2_window_ParamLimits

0xd25e,	// (0x000374e1) bg_tb_trans_pane_cp05_ParamLimits

0xee1a,	// (0x0003909d) popup_imed_adjust2_window_g1_ParamLimits

0xee29,	// (0x000390ac) popup_imed_adjust2_window_g2_ParamLimits

0xee29,	// (0x000390ac) popup_imed_adjust2_window_g2

0xee35,	// (0x000390b8) popup_imed_adjust2_window_g3_ParamLimits

0xee35,	// (0x000390b8) popup_imed_adjust2_window_g3

0x0002,

0xf700,	// (0x00039983) popup_imed_adjust2_window_g_ParamLimits

0xf700,	// (0x00039983) popup_imed_adjust2_window_g

0xee41,	// (0x000390c4) popup_imed_adjust2_window_t1_ParamLimits

0xee59,	// (0x000390dc) slider_imed_adjust_pane_ParamLimits

0xee6d,	// (0x000390f0) slider_imed_adjust_pane_g1_ParamLimits

0xee7d,	// (0x00039100) slider_imed_adjust_pane_g2_ParamLimits

0xee8d,	// (0x00039110) slider_imed_adjust_pane_g3_ParamLimits

0xee9e,	// (0x00039121) slider_imed_adjust_pane_g4_ParamLimits

0xf707,	// (0x0003998a) slider_imed_adjust_pane_g_ParamLimits

0x1574,	// (0x0002b7f7) aid_touch_area_cam4_ParamLimits

0x1574,	// (0x0002b7f7) aid_touch_area_cam4

0xb803,	// (0x00035a86) battery_pane_cp01

0x1643,	// (0x0002b8c6) main_camera4_pane_g6_ParamLimits

0x1643,	// (0x0002b8c6) main_camera4_pane_g6

0x166d,	// (0x0002b8f0) main_camera4_pane_t2_ParamLimits

0x166d,	// (0x0002b8f0) main_camera4_pane_t2

0x0001,

0xf7d8,	// (0x00039a5b) main_camera4_pane_t_ParamLimits

0xf7d8,	// (0x00039a5b) main_camera4_pane_t

0x168e,	// (0x0002b911) aid_touch_area_vid4_ParamLimits

0x168e,	// (0x0002b911) aid_touch_area_vid4

0x16e2,	// (0x0002b965) main_video4_pane_g5_ParamLimits

0x16e2,	// (0x0002b965) main_video4_pane_g5

0x1707,	// (0x0002b98a) vid4_progress_pane_ParamLimits

0x1707,	// (0x0002b98a) vid4_progress_pane

0x5a7a,	// (0x0002fcfd) main_cset_slider_pane_g18_ParamLimits

0x5a7a,	// (0x0002fcfd) main_cset_slider_pane_g18

0x627e,	// (0x00030501) cell_cam4_burst_pane_g2_ParamLimits

0x627e,	// (0x00030501) cell_cam4_burst_pane_g2

0x0001,

0xf92d,	// (0x00039bb0) cell_cam4_burst_pane_g_ParamLimits

0xf92d,	// (0x00039bb0) cell_cam4_burst_pane_g

0xc5bd,	// (0x00036840) bg_cl_pane_ParamLimits

0xc5bd,	// (0x00036840) bg_cl_pane

0x6548,	// (0x000307cb) cl_header_pane_ParamLimits

0x6548,	// (0x000307cb) cl_header_pane

0x655c,	// (0x000307df) cl_listscroll_pane_ParamLimits

0x655c,	// (0x000307df) cl_listscroll_pane

0x656c,	// (0x000307ef) bg_cl_pane_g1

0x6574,	// (0x000307f7) bg_cl_pane_g2

0x657c,	// (0x000307ff) bg_cl_pane_g3

0x6584,	// (0x00030807) bg_cl_pane_g4

0x658c,	// (0x0003080f) bg_cl_pane_g5

0x6594,	// (0x00030817) bg_cl_pane_g6

0x659c,	// (0x0003081f) bg_cl_pane_g7

0x65a4,	// (0x00030827) bg_cl_pane_g8

0x65ac,	// (0x0003082f) bg_cl_pane_g9

0x0008,

0xf968,	// (0x00039beb) bg_cl_pane_g

0x65b4,	// (0x00030837) aid_height_cl_leading_ParamLimits

0x65b4,	// (0x00030837) aid_height_cl_leading

0x65c0,	// (0x00030843) aid_height_cl_text_ParamLimits

0x65c0,	// (0x00030843) aid_height_cl_text

0xc40e,	// (0x00036691) bg_cl_header_pane_ParamLimits

0xc40e,	// (0x00036691) bg_cl_header_pane

0x65df,	// (0x00030862) cl_header_pane_g1_ParamLimits

0x65df,	// (0x00030862) cl_header_pane_g1

0x65f5,	// (0x00030878) cl_header_pane_t1_ParamLimits

0x65f5,	// (0x00030878) cl_header_pane_t1

0x660e,	// (0x00030891) cl_list_pane

0x593d,	// (0x0002fbc0) hc_scroll_pane_cp01

0xc97f,	// (0x00036c02) bg_cl_header_pane_g1

0x54e7,	// (0x0002f76a) bg_cl_header_pane_g2

0xc99f,	// (0x00036c22) bg_cl_header_pane_g3

0x54f7,	// (0x0002f77a) bg_cl_header_pane_g4

0x54ef,	// (0x0002f772) bg_cl_header_pane_g5

0x5e1f,	// (0x000300a2) bg_cl_header_pane_g6

0x550f,	// (0x0002f792) bg_cl_header_pane_g7

0x5517,	// (0x0002f79a) bg_cl_header_pane_g8

0x5507,	// (0x0002f78a) bg_cl_header_pane_g9

0x0008,

0xf97b,	// (0x00039bfe) bg_cl_header_pane_g

0x6617,	// (0x0003089a) hc_cl_list_double_graphic_heading_pane_ParamLimits

0x6617,	// (0x0003089a) hc_cl_list_double_graphic_heading_pane

0x6628,	// (0x000308ab) hc_cl_list_single_graphic_pane_ParamLimits

0x6628,	// (0x000308ab) hc_cl_list_single_graphic_pane

0x6641,	// (0x000308c4) hc_cl_list_single_graphic_pane_g1_ParamLimits

0x6641,	// (0x000308c4) hc_cl_list_single_graphic_pane_g1

0x664d,	// (0x000308d0) hc_cl_list_single_graphic_pane_g2_ParamLimits

0x664d,	// (0x000308d0) hc_cl_list_single_graphic_pane_g2

0x0001,

0xf98e,	// (0x00039c11) hc_cl_list_single_graphic_pane_g_ParamLimits

0xf98e,	// (0x00039c11) hc_cl_list_single_graphic_pane_g

0x6661,	// (0x000308e4) hc_cl_list_single_graphic_pane_t1_ParamLimits

0x6661,	// (0x000308e4) hc_cl_list_single_graphic_pane_t1

0x6641,	// (0x000308c4) hc_cl_list_double_graphic_heading_pane_g1_ParamLimits

0x6641,	// (0x000308c4) hc_cl_list_double_graphic_heading_pane_g1

0x6676,	// (0x000308f9) hc_cl_list_double_graphic_heading_pane_g2_ParamLimits

0x6676,	// (0x000308f9) hc_cl_list_double_graphic_heading_pane_g2

0x668a,	// (0x0003090d) hc_cl_list_double_graphic_heading_pane_g3_ParamLimits

0x668a,	// (0x0003090d) hc_cl_list_double_graphic_heading_pane_g3

0x0002,

0xf993,	// (0x00039c16) hc_cl_list_double_graphic_heading_pane_g_ParamLimits

0xf993,	// (0x00039c16) hc_cl_list_double_graphic_heading_pane_g

0x669e,	// (0x00030921) hc_cl_list_double_graphic_heading_pane_t1_ParamLimits

0x669e,	// (0x00030921) hc_cl_list_double_graphic_heading_pane_t1

0x66b3,	// (0x00030936) hc_cl_list_double_graphic_heading_pane_t2_ParamLimits

0x66b3,	// (0x00030936) hc_cl_list_double_graphic_heading_pane_t2

0x0001,

0xf99a,	// (0x00039c1d) hc_cl_list_double_graphic_heading_pane_t_ParamLimits

0xf99a,	// (0x00039c1d) hc_cl_list_double_graphic_heading_pane_t

0xb965,	// (0x00035be8) vid4_progress_pane_g1

0xb975,	// (0x00035bf8) vid4_progress_pane_g2

0x1bd6,	// (0x0002be59) vid4_progress_pane_g3

0xb985,	// (0x00035c08) vid4_progress_pane_g4

0x0004,

0xf99f,	// (0x00039c22) vid4_progress_pane_g

0x1be8,	// (0x0002be6b) vid4_progress_pane_t1

0xb99d,	// (0x00035c20) vid4_progress_pane_t2

0x0002,

0xf9aa,	// (0x00039c2d) vid4_progress_pane_t

0x1bfe,	// (0x0002be81) wait_bar_pane_cp07

0xe6ac,	// (0x0003892f) blid_firmament_pane_ParamLimits

0xe6ef,	// (0x00038972) popup_blid_sat_info2_window_g1

0xe713,	// (0x00038996) popup_blid_sat_info2_window_t3

0xe721,	// (0x000389a4) popup_blid_sat_info2_window_t4

0xe72f,	// (0x000389b2) popup_blid_sat_info2_window_t5

0xe73d,	// (0x000389c0) popup_blid_sat_info2_window_t6

0xe74d,	// (0x000389d0) popup_blid_sat_info2_window_t7

0xe75b,	// (0x000389de) popup_blid_sat_info2_window_t8

0xe769,	// (0x000389ec) popup_blid_sat_info2_window_t9

0xe777,	// (0x000389fa) popup_blid_sat_info2_window_t10

0xe838,	// (0x00038abb) aid_firma_cardinal_ParamLimits

0xe84c,	// (0x00038acf) blid_firmament_pane_t1_ParamLimits

0xe863,	// (0x00038ae6) blid_firmament_pane_t2_ParamLimits

0xe87a,	// (0x00038afd) blid_firmament_pane_t3_ParamLimits

0xe891,	// (0x00038b14) blid_firmament_pane_t4_ParamLimits

0xf610,	// (0x00039893) blid_firmament_pane_t_ParamLimits

0xe8a8,	// (0x00038b2b) blid_sat_info_pane_ParamLimits

0xb21b,	// (0x0003549e) main_cam_set_pane_ParamLimits

0x4fbb,	// (0x0002f23e) aid_size_cell_colour_35_ParamLimits

0x4fdb,	// (0x0002f25e) aid_size_cell_colour_112_ParamLimits

0x4ffb,	// (0x0002f27e) aid_size_cell_effect_ParamLimits

0xd25e,	// (0x000374e1) bg_tb_trans_pane_cp02_ParamLimits

0xcbe7,	// (0x00036e6a) heading_imed_pane_ParamLimits

0x501b,	// (0x0002f29e) listscroll_imed_pane_ParamLimits

0xdb5f,	// (0x00037de2) popup_call2_audio_first_window_g5_ParamLimits

0xdb5f,	// (0x00037de2) popup_call2_audio_first_window_g5

0x1253,	// (0x0002b4d6) aid_size_touch_image3_arrow_left_ParamLimits

0x1253,	// (0x0002b4d6) aid_size_touch_image3_arrow_left

0x127f,	// (0x0002b502) aid_size_touch_image3_arrow_right_ParamLimits

0x127f,	// (0x0002b502) aid_size_touch_image3_arrow_right

0xb9b2,	// (0x00035c35) vid4_progress_pane_t3

0x51be,	// (0x0002f441) main_hwr_training_symbol_option_pane_ParamLimits

0x51be,	// (0x0002f441) main_hwr_training_symbol_option_pane

0xefa8,	// (0x0003922b) popup_hwr_training_preview_window_ParamLimits

0xefa8,	// (0x0003922b) popup_hwr_training_preview_window

0x115d,	// (0x0002b3e0) hwr_training_navi_pane_g5_ParamLimits

0x115d,	// (0x0002b3e0) hwr_training_navi_pane_g5

0x54d5,	// (0x0002f758) popup_char_count_window

0xb21b,	// (0x0003549e) bg_popup_sub_pane_cp20_ParamLimits

0x1b4c,	// (0x0002bdcf) list_vitu2_match_list_pane_ParamLimits

0x1b58,	// (0x0002bddb) vitu2_page_scroll_pane_ParamLimits

0x1b58,	// (0x0002bddb) vitu2_page_scroll_pane

0x66fe,	// (0x00030981) list_single_hwr_training_symbol_option_pane_ParamLimits

0x66fe,	// (0x00030981) list_single_hwr_training_symbol_option_pane

0x6711,	// (0x00030994) list_single_hwr_training_symbol_option_pane_g1

0x6719,	// (0x0003099c) list_single_hwr_training_symbol_option_pane_t1

0x6727,	// (0x000309aa) bg_button_pane_cp023

0x6730,	// (0x000309b3) bg_button_pane_cp024

0x6763,	// (0x000309e6) vitu2_page_scroll_pane_g1

0x676b,	// (0x000309ee) vitu2_page_scroll_pane_g2

0x0001,

0xf9b1,	// (0x00039c34) vitu2_page_scroll_pane_g

0x6773,	// (0x000309f6) vitu2_page_scroll_pane_t1

0xc634,	// (0x000368b7) popup_char_count_window_g1

0x6782,	// (0x00030a05) popup_char_count_window_g2

0x1e0d,	// (0x0002c090) popup_char_count_window_g3

0x0002,

0xf9b6,	// (0x00039c39) popup_char_count_window_g

0x678b,	// (0x00030a0e) popup_char_count_window_t1

0xb229,	// (0x000354ac) main_vded2_pane

0xee06,	// (0x00039089) aid_size_cell_imed_line

0xee10,	// (0x00039093) grid_imed_line_width_pane

0xb8b3,	// (0x00035b36) vid4_indicators_pane_g4

0x6799,	// (0x00030a1c) cell_imed_line_width_pane_ParamLimits

0x6799,	// (0x00030a1c) cell_imed_line_width_pane

0x67ad,	// (0x00030a30) cell_imed_line_width_pane_g1

0x67b6,	// (0x00030a39) cell_imed_line_width_pane_g2

0x0001,

0xf9bd,	// (0x00039c40) cell_imed_line_width_pane_g

0x67be,	// (0x00030a41) main_vded2_pane_g1_ParamLimits

0x67be,	// (0x00030a41) main_vded2_pane_g1

0x67d4,	// (0x00030a57) main_vded2_pane_g2_ParamLimits

0x67d4,	// (0x00030a57) main_vded2_pane_g2

0x0001,

0xf9c2,	// (0x00039c45) main_vded2_pane_g_ParamLimits

0xf9c2,	// (0x00039c45) main_vded2_pane_g

0x67e6,	// (0x00030a69) vded2_slider_pane_ParamLimits

0x67e6,	// (0x00030a69) vded2_slider_pane

0x67f6,	// (0x00030a79) aid_size_touch_vded2_end

0x6800,	// (0x00030a83) aid_size_touch_vded2_playhead

0x680a,	// (0x00030a8d) aid_size_touch_vded2_start

0x6812,	// (0x00030a95) vded2_slider_bg_pane

0x681b,	// (0x00030a9e) vded2_slider_pane_g1

0x6824,	// (0x00030aa7) vded2_slider_pane_g2

0x682c,	// (0x00030aaf) vded2_slider_pane_g3

0x0002,

0xf9c7,	// (0x00039c4a) vded2_slider_pane_g

0x6837,	// (0x00030aba) vded2_slider_bg_pane_g1

0x6840,	// (0x00030ac3) vded2_slider_bg_pane_g2

0x6849,	// (0x00030acc) vded2_slider_bg_pane_g3

0x0002,

0xf9ce,	// (0x00039c51) vded2_slider_bg_pane_g

0x39e3,	// (0x0002dc66) aid_postcard_touch_down_pane_ParamLimits

0x39e3,	// (0x0002dc66) aid_postcard_touch_down_pane

0x39f9,	// (0x0002dc7c) aid_postcard_touch_up_pane_ParamLimits

0x39f9,	// (0x0002dc7c) aid_postcard_touch_up_pane

0xb229,	// (0x000354ac) main_blid2_pane

0xb3b0,	// (0x00035633) popup_blid2_search_window

0xbe20,	// (0x000360a3) blid2_gps_pane

0xbe20,	// (0x000360a3) blid2_navig_pane

0xbe20,	// (0x000360a3) blid2_search_pane

0xbe20,	// (0x000360a3) blid2_tripm_pane

0x6852,	// (0x00030ad5) blid2_search_pane_g1_ParamLimits

0x6852,	// (0x00030ad5) blid2_search_pane_g1

0x686a,	// (0x00030aed) blid2_search_pane_t1_ParamLimits

0x686a,	// (0x00030aed) blid2_search_pane_t1

0x687c,	// (0x00030aff) aid_size_cell_blid2_gps_ParamLimits

0x687c,	// (0x00030aff) aid_size_cell_blid2_gps

0x6894,	// (0x00030b17) blid2_gps_pane_g1_ParamLimits

0x6894,	// (0x00030b17) blid2_gps_pane_g1

0x68a8,	// (0x00030b2b) grid_blid2_satellite_pane_ParamLimits

0x68a8,	// (0x00030b2b) grid_blid2_satellite_pane

0x68c2,	// (0x00030b45) blid2_navig_pane_g1_ParamLimits

0x68c2,	// (0x00030b45) blid2_navig_pane_g1

0x68ce,	// (0x00030b51) blid2_navig_pane_t1_ParamLimits

0x68ce,	// (0x00030b51) blid2_navig_pane_t1

0x68e9,	// (0x00030b6c) blid2_navig_pane_t2_ParamLimits

0x68e9,	// (0x00030b6c) blid2_navig_pane_t2

0x0001,

0xf9d5,	// (0x00039c58) blid2_navig_pane_t_ParamLimits

0xf9d5,	// (0x00039c58) blid2_navig_pane_t

0x6904,	// (0x00030b87) blid2_navig_ring_pane_ParamLimits

0x6904,	// (0x00030b87) blid2_navig_ring_pane

0x691d,	// (0x00030ba0) blid2_speed_pane_ParamLimits

0x691d,	// (0x00030ba0) blid2_speed_pane

0x6929,	// (0x00030bac) blid2_tripm_pane_g1_ParamLimits

0x6929,	// (0x00030bac) blid2_tripm_pane_g1

0x6944,	// (0x00030bc7) blid2_tripm_pane_g2_ParamLimits

0x6944,	// (0x00030bc7) blid2_tripm_pane_g2

0x6958,	// (0x00030bdb) blid2_tripm_pane_g3_ParamLimits

0x6958,	// (0x00030bdb) blid2_tripm_pane_g3

0x696c,	// (0x00030bef) blid2_tripm_pane_g4_ParamLimits

0x696c,	// (0x00030bef) blid2_tripm_pane_g4

0x6980,	// (0x00030c03) blid2_tripm_pane_g5_ParamLimits

0x6980,	// (0x00030c03) blid2_tripm_pane_g5

0x0005,

0xf9da,	// (0x00039c5d) blid2_tripm_pane_g_ParamLimits

0xf9da,	// (0x00039c5d) blid2_tripm_pane_g

0x69a6,	// (0x00030c29) blid2_tripm_pane_t1_ParamLimits

0x69a6,	// (0x00030c29) blid2_tripm_pane_t1

0x69c1,	// (0x00030c44) blid2_tripm_pane_t2_ParamLimits

0x69c1,	// (0x00030c44) blid2_tripm_pane_t2

0x69da,	// (0x00030c5d) blid2_tripm_pane_t3_ParamLimits

0x69da,	// (0x00030c5d) blid2_tripm_pane_t3

0x0003,

0xf9e7,	// (0x00039c6a) blid2_tripm_pane_t_ParamLimits

0xf9e7,	// (0x00039c6a) blid2_tripm_pane_t

0x6a21,	// (0x00030ca4) cell_blid2_satellite_pane_ParamLimits

0x6a21,	// (0x00030ca4) cell_blid2_satellite_pane

0x6a3f,	// (0x00030cc2) cell_blid2_satellite_pane_g1

0x6a48,	// (0x00030ccb) cell_blid2_satellite_pane_t1

0xc55f,	// (0x000367e2) blid2_speed_pane_g1

0x6a56,	// (0x00030cd9) blid2_speed_pane_t1

0x6a64,	// (0x00030ce7) blid2_speed_pane_t2

0x0001,

0xf9f0,	// (0x00039c73) blid2_speed_pane_t

0xc55f,	// (0x000367e2) blid2_navig_ring_pane_g1

0x6a72,	// (0x00030cf5) blid2_navig_ring_pane_g2

0x6a7a,	// (0x00030cfd) blid2_navig_ring_pane_g3

0x6a82,	// (0x00030d05) blid2_navig_ring_pane_g4

0x6a8a,	// (0x00030d0d) blid2_navig_ring_pane_g5

0x0004,

0xf9f5,	// (0x00039c78) blid2_navig_ring_pane_g

0xbe20,	// (0x000360a3) bg_popup_window_pane_cp011

0x6a92,	// (0x00030d15) popup_blid2_search_window_g1

0x6a9a,	// (0x00030d1d) popup_blid2_search_window_t1

0x6aa8,	// (0x00030d2b) popup_blid2_search_window_t2

0x0001,

0xfa00,	// (0x00039c83) popup_blid2_search_window_t

0xc88e,	// (0x00036b11) main_browser_pane_g1

0xc5bd,	// (0x00036840) main_browser_pane_ParamLimits

0xb21b,	// (0x0003549e) bg_button_pane_cp011_ParamLimits

0x1acb,	// (0x0002bd4e) cell_vitu2_function_pane_g1_ParamLimits

0xd25e,	// (0x000374e1) bg_popup_sub_pane_cp22_ParamLimits

0x5f5a,	// (0x000301dd) input_focus_pane_cp08_ParamLimits

0x5f75,	// (0x000301f8) popup_vitu2_query_button_pane_ParamLimits

0x5f75,	// (0x000301f8) popup_vitu2_query_button_pane

0x5f84,	// (0x00030207) popup_vitu2_query_input_button_pane

0x5f8c,	// (0x0003020f) popup_vitu2_query_window_g1_ParamLimits

0x5f98,	// (0x0003021b) popup_vitu2_query_window_g2_ParamLimits

0xf901,	// (0x00039b84) popup_vitu2_query_window_g_ParamLimits

0xbe20,	// (0x000360a3) bg_button_pane_cp026

0x6ab6,	// (0x00030d39) popup_vitu2_query_input_button_pane_g1

0xbe20,	// (0x000360a3) bg_button_pane_cp025

0x6abe,	// (0x00030d41) popup_vitu2_query_button_pane_t1

0x4580,	// (0x0002e803) main_mp3_pane_t6

0x458e,	// (0x0002e811) popup_slider_window_cp01

0xb81f,	// (0x00035aa2) cam4_battery_pane

0xb872,	// (0x00035af5) cam4_battery_pane_cp02

0xb95d,	// (0x00035be0) cam4_battery_pane_cp01

0xb95d,	// (0x00035be0) cam4_battery_pane_cp03

0x44f3,	// (0x0002e776) cam4_battery_pane_g1

0xc55f,	// (0x000367e2) cam4_battery_pane_g2

0x0001,

0xfa05,	// (0x00039c88) cam4_battery_pane_g

0xe785,	// (0x00038a08) popup_blid_sat_info2_window_t11

0xcfcc,	// (0x0003724f) aid_size_touch_mv_arrow_left_ParamLimits

0xcff7,	// (0x0003727a) aid_size_touch_mv_arrow_right_ParamLimits

0xd055,	// (0x000372d8) navi_pane_g1_ParamLimits

0xd061,	// (0x000372e4) navi_pane_g2_ParamLimits

0xd08f,	// (0x00037312) navi_pane_g3_ParamLimits

0xf32f,	// (0x000395b2) navi_pane_g_ParamLimits

0x363a,	// (0x0002d8bd) navi_pane_mv_t1_ParamLimits

0x5027,	// (0x0002f2aa) grid_imed_effect_pane_ParamLimits

0x258d,	// (0x0002c810) aid_placing_vt_slider_lsc

0xc7dd,	// (0x00036a60) aid_placing_vt_slider_prt

0xc40e,	// (0x00036691) bg_tb_trans_pane_cp01_ParamLimits

0xea23,	// (0x00038ca6) popup_image_details_window_g1_ParamLimits

0xea36,	// (0x00038cb9) popup_image_details_window_g2_ParamLimits

0xea4b,	// (0x00038cce) popup_image_details_window_g3_ParamLimits

0xea4b,	// (0x00038cce) popup_image_details_window_g3

0xf645,	// (0x000398c8) popup_image_details_window_g_ParamLimits

0xea5f,	// (0x00038ce2) popup_image_details_window_t1_ParamLimits

0xea71,	// (0x00038cf4) popup_image_details_window_t2_ParamLimits

0xea8a,	// (0x00038d0d) popup_image_details_window_t3_ParamLimits

0xea9e,	// (0x00038d21) popup_image_details_window_t4_ParamLimits

0xeab9,	// (0x00038d3c) popup_image_details_window_t5_ParamLimits

0xf64c,	// (0x000398cf) popup_image_details_window_t_ParamLimits

0x65cc,	// (0x0003084f) cl_header_name_pane_ParamLimits

0x65cc,	// (0x0003084f) cl_header_name_pane

0x6acc,	// (0x00030d4f) cl_header_name_pane_t1_ParamLimits

0x6acc,	// (0x00030d4f) cl_header_name_pane_t1

0x6aed,	// (0x00030d70) cl_header_name_pane_t2_ParamLimits

0x6aed,	// (0x00030d70) cl_header_name_pane_t2

0x6b2f,	// (0x00030db2) cl_header_name_pane_t3_ParamLimits

0x6b2f,	// (0x00030db2) cl_header_name_pane_t3

0x0002,

0xfa0a,	// (0x00039c8d) cl_header_name_pane_t_ParamLimits

0xfa0a,	// (0x00039c8d) cl_header_name_pane_t

0xd11e,	// (0x000373a1) navi_pane_mv_g2_ParamLimits

0x5470,	// (0x0002f6f3) field_vitu2_entry_pane_g1_ParamLimits

0x547c,	// (0x0002f6ff) field_vitu2_entry_pane_g2_ParamLimits

0xd23c,	// (0x000374bf) field_vitu2_entry_pane_g3_ParamLimits

0xd23c,	// (0x000374bf) field_vitu2_entry_pane_g3

0xf80a,	// (0x00039a8d) field_vitu2_entry_pane_g_ParamLimits

0x195b,	// (0x0002bbde) cell_vitu2_itu_pane_g1_ParamLimits

0x1973,	// (0x0002bbf6) cell_vitu2_itu_pane_g2_ParamLimits

0x1973,	// (0x0002bbf6) cell_vitu2_itu_pane_g2

0x0001,

0xf816,	// (0x00039a99) cell_vitu2_itu_pane_g_ParamLimits

0xf816,	// (0x00039a99) cell_vitu2_itu_pane_g

0xb21b,	// (0x0003549e) bg_vkb2_func_pane_cp05_ParamLimits

0xb21b,	// (0x0003549e) bg_vkb2_func_pane_cp05

0xb21b,	// (0x0003549e) bg_vkb2_func_pane_cp03

0xb21b,	// (0x0003549e) bg_vkb2_func_pane_cp04

0xb21b,	// (0x0003549e) bg_vkb2_func_pane_cp10_ParamLimits

0xb21b,	// (0x0003549e) bg_vkb2_func_pane_cp10

0x6528,	// (0x000307ab) bg_vkb2_func_pane_cp08

0x6501,	// (0x00030784) bg_vkb2_func_pane_cp06

0x650d,	// (0x00030790) bg_vkb2_func_pane_cp07

0x6739,	// (0x000309bc) bg_vkb2_func_pane_cp11_ParamLimits

0x6739,	// (0x000309bc) bg_vkb2_func_pane_cp11

0x674e,	// (0x000309d1) bg_vkb2_func_pane_cp12_ParamLimits

0x674e,	// (0x000309d1) bg_vkb2_func_pane_cp12

0xbe20,	// (0x000360a3) bg_vkb2_func_pane_cp09

0x54e7,	// (0x0002f76a) bg_vkb2_func_pane_g1

0xc99f,	// (0x00036c22) bg_vkb2_func_pane_g2

0x54ef,	// (0x0002f772) bg_vkb2_func_pane_g3

0x54f7,	// (0x0002f77a) bg_vkb2_func_pane_g4

0x5e1f,	// (0x000300a2) bg_vkb2_func_pane_g5

0x550f,	// (0x0002f792) bg_vkb2_func_pane_g6

0x5517,	// (0x0002f79a) bg_vkb2_func_pane_g7

0x5507,	// (0x0002f78a) bg_vkb2_func_pane_g8

0xc97f,	// (0x00036c02) bg_vkb2_func_pane_g9

0x0008,

0xfa11,	// (0x00039c94) bg_vkb2_func_pane_g

0x6994,	// (0x00030c17) blid2_tripm_pane_g6_ParamLimits

0x6994,	// (0x00030c17) blid2_tripm_pane_g6

0x524a,	// (0x0002f4cd) mp4_progress_pane_g1

0x6a0d,	// (0x00030c90) blid2_tripm_values_pane_ParamLimits

0x6a0d,	// (0x00030c90) blid2_tripm_values_pane

0x6b60,	// (0x00030de3) blid2_tripm_values_pane_t1

0x6b6e,	// (0x00030df1) blid2_tripm_values_pane_t2

0x6b7c,	// (0x00030dff) blid2_tripm_values_pane_t3

0x6b8a,	// (0x00030e0d) blid2_tripm_values_pane_t4

0x6b98,	// (0x00030e1b) blid2_tripm_values_pane_t5

0x6ba6,	// (0x00030e29) blid2_tripm_values_pane_t6

0x6bb4,	// (0x00030e37) blid2_tripm_values_pane_t7

0x6bc2,	// (0x00030e45) blid2_tripm_values_pane_t8

0x6bd0,	// (0x00030e53) blid2_tripm_values_pane_t9

0x0008,

0xfa24,	// (0x00039ca7) blid2_tripm_values_pane_t

0x25cf,	// (0x0002c852) call_video_pane_t1_ParamLimits

0x25ed,	// (0x0002c870) call_video_pane_t2_ParamLimits

0xf1dd,	// (0x00039460) call_video_pane_t_ParamLimits

0x3908,	// (0x0002db8b) msg_header_pane_g1_ParamLimits

0xd32a,	// (0x000375ad) msg_header_pane_g2_ParamLimits

0xd32a,	// (0x000375ad) msg_header_pane_g2

0x0001,

0xf3cd,	// (0x00039650) msg_header_pane_g_ParamLimits

0xf3cd,	// (0x00039650) msg_header_pane_g

0xc5bd,	// (0x00036840) main_clock2_pane_ParamLimits

0x4dfc,	// (0x0002f07f) grid_clock2_toolbar_pane_ParamLimits

0x4dfc,	// (0x0002f07f) grid_clock2_toolbar_pane

0x4dfc,	// (0x0002f07f) listscroll_clock2_pane_ParamLimits

0x4dfc,	// (0x0002f07f) listscroll_clock2_pane

0x4ee0,	// (0x0002f163) main_clock2_pane_t3_ParamLimits

0x4ee0,	// (0x0002f163) main_clock2_pane_t3

0x4f04,	// (0x0002f187) main_clock2_pane_t4_ParamLimits

0x4f04,	// (0x0002f187) main_clock2_pane_t4

0x6bde,	// (0x00030e61) cell_clock2_toolbar_pane

0x6be6,	// (0x00030e69) cell_clock2_toolbar_pane_cp01

0x6be6,	// (0x00030e69) cell_clock2_toolbar_pane_cp02

0x6bee,	// (0x00030e71) cell_clock2_toolbar_pane_cp03

0x6bf6,	// (0x00030e79) list_clock2_pane

0xcf51,	// (0x000371d4) scroll_pane_cp10

0x6bfe,	// (0x00030e81) list_single_clock2_pane_ParamLimits

0x6bfe,	// (0x00030e81) list_single_clock2_pane

0xc786,	// (0x00036a09) list_highlight_pane_cp08

0x6c0b,	// (0x00030e8e) list_single_clock2_pane_t1

0x6c19,	// (0x00030e9c) list_single_clock2_pane_t2

0x0001,

0xfa37,	// (0x00039cba) list_single_clock2_pane_t

0xbe20,	// (0x000360a3) bg_button_pane_cp10

0x6c27,	// (0x00030eaa) cell_clock2_toolbar_pane_g1

0x0d4b,	// (0x0002afce) aid_main_viewer_pane_g1_ParamLimits

0x0d4b,	// (0x0002afce) aid_main_viewer_pane_g1

0x0d59,	// (0x0002afdc) aid_main_viewer_pane_g2_ParamLimits

0x0d59,	// (0x0002afdc) aid_main_viewer_pane_g2

0x39a7,	// (0x0002dc2a) aid_main_viewer_pane_g3_ParamLimits

0x39a7,	// (0x0002dc2a) aid_main_viewer_pane_g3

0x39b6,	// (0x0002dc39) aid_main_viewer_pane_g4_ParamLimits

0x39b6,	// (0x0002dc39) aid_main_viewer_pane_g4

0x0003,

0xf3de,	// (0x00039661) aid_main_viewer_pane_g_ParamLimits

0xf3de,	// (0x00039661) aid_main_viewer_pane_g

0x0d8d,	// (0x0002b010) main_calc_pane_ParamLimits

0x0db3,	// (0x0002b036) main_dialer2_pane_ParamLimits

0xb229,	// (0x000354ac) main_cam6_pane

0xb229,	// (0x000354ac) main_vid6_pane

0x4e08,	// (0x0002f08b) listscroll_gen_pane_cp06_ParamLimits

0x4e08,	// (0x0002f08b) listscroll_gen_pane_cp06

0x4f27,	// (0x0002f1aa) main_clock2_pane_t5_ParamLimits

0x4f27,	// (0x0002f1aa) main_clock2_pane_t5

0x4f85,	// (0x0002f208) aid_call2_pane_cp10_ParamLimits

0x4f97,	// (0x0002f21a) aid_call_pane_cp10_ParamLimits

0xcfc0,	// (0x00037243) popup_clock_analogue_window_cp10_g1_ParamLimits

0xcfc0,	// (0x00037243) popup_clock_analogue_window_cp10_g2_ParamLimits

0x1089,	// (0x0002b30c) popup_clock_analogue_window_cp10_g3_ParamLimits

0x1089,	// (0x0002b30c) popup_clock_analogue_window_cp10_g4_ParamLimits

0xcfc0,	// (0x00037243) popup_clock_analogue_window_cp10_g5_ParamLimits

0xf6f5,	// (0x00039978) popup_clock_analogue_window_cp10_g_ParamLimits

0x109f,	// (0x0002b322) popup_clock_analogue_window_cp10_t1_ParamLimits

0x52fa,	// (0x0002f57d) cell_dialer2_keypad_pane_g2_ParamLimits

0x52fa,	// (0x0002f57d) cell_dialer2_keypad_pane_g2

0x0001,

0xf7a9,	// (0x00039a2c) cell_dialer2_keypad_pane_g_ParamLimits

0xf7a9,	// (0x00039a2c) cell_dialer2_keypad_pane_g

0xc569,	// (0x000367ec) cell_dialer2_keypad_pane_t1

0x5917,	// (0x0002fb9a) main_cset_text2_pane_ParamLimits

0x5917,	// (0x0002fb9a) main_cset_text2_pane

0x63fa,	// (0x0003067d) area_vitu2_query_pane_g1_ParamLimits

0x6406,	// (0x00030689) area_vitu2_query_pane_g2_ParamLimits

0xf954,	// (0x00039bd7) area_vitu2_query_pane_g_ParamLimits

0x64dd,	// (0x00030760) area_vitu2_query_pane_t7_ParamLimits

0x64dd,	// (0x00030760) area_vitu2_query_pane_t7

0x6501,	// (0x00030784) bg_button_pane_cp018_ParamLimits

0x650d,	// (0x00030790) bg_button_pane_cp021_ParamLimits

0x6519,	// (0x0003079c) bg_button_pane_cp022_ParamLimits

0x6528,	// (0x000307ab) bg_vkb2_func_pane_cp08_ParamLimits

0x6501,	// (0x00030784) bg_vkb2_func_pane_cp06_ParamLimits

0x650d,	// (0x00030790) bg_vkb2_func_pane_cp07_ParamLimits

0x6538,	// (0x000307bb) input_focus_pane_cp09_ParamLimits

0x1c0f,	// (0x0002be92) cam6_autofocus_pane_ParamLimits

0x1c0f,	// (0x0002be92) cam6_autofocus_pane

0x1c1b,	// (0x0002be9e) cam6_image_uncrop_pane_ParamLimits

0x1c1b,	// (0x0002be9e) cam6_image_uncrop_pane

0x1c2b,	// (0x0002beae) cam6_indi_pane_ParamLimits

0x1c2b,	// (0x0002beae) cam6_indi_pane

0x1c41,	// (0x0002bec4) cam6_mode_pane_ParamLimits

0x1c41,	// (0x0002bec4) cam6_mode_pane

0x1c53,	// (0x0002bed6) cam6_timer_pane_ParamLimits

0x1c53,	// (0x0002bed6) cam6_timer_pane

0x1c5f,	// (0x0002bee2) cam6_zoom_pane_ParamLimits

0x1c5f,	// (0x0002bee2) cam6_zoom_pane

0x6c2f,	// (0x00030eb2) cam6_mode_pane_g1_ParamLimits

0x6c2f,	// (0x00030eb2) cam6_mode_pane_g1

0x6c3f,	// (0x00030ec2) cam6_mode_pane_g2_ParamLimits

0x6c3f,	// (0x00030ec2) cam6_mode_pane_g2

0x6c4f,	// (0x00030ed2) cam6_mode_pane_g3_ParamLimits

0x6c4f,	// (0x00030ed2) cam6_mode_pane_g3

0x6c5f,	// (0x00030ee2) cam6_mode_pane_g4_ParamLimits

0x6c5f,	// (0x00030ee2) cam6_mode_pane_g4

0x0003,

0xfa3c,	// (0x00039cbf) cam6_mode_pane_g_ParamLimits

0xfa3c,	// (0x00039cbf) cam6_mode_pane_g

0xebf3,	// (0x00038e76) bg_tb_trans_pane_cp08_ParamLimits

0xebf3,	// (0x00038e76) bg_tb_trans_pane_cp08

0x6c6f,	// (0x00030ef2) cam6_battery_pane_ParamLimits

0x6c6f,	// (0x00030ef2) cam6_battery_pane

0x6c85,	// (0x00030f08) cam6_indi_pane_g1_ParamLimits

0x6c85,	// (0x00030f08) cam6_indi_pane_g1

0x6c97,	// (0x00030f1a) cam6_indi_pane_g2_ParamLimits

0x6c97,	// (0x00030f1a) cam6_indi_pane_g2

0x6ca9,	// (0x00030f2c) cam6_indi_pane_g3_ParamLimits

0x6ca9,	// (0x00030f2c) cam6_indi_pane_g3

0x0002,

0xfa45,	// (0x00039cc8) cam6_indi_pane_g_ParamLimits

0xfa45,	// (0x00039cc8) cam6_indi_pane_g

0x6cbb,	// (0x00030f3e) cam6_indi_pane_t1_ParamLimits

0x6cbb,	// (0x00030f3e) cam6_indi_pane_t1

0x5441,	// (0x0002f6c4) cam6_autofocus_pane_g1

0x5439,	// (0x0002f6bc) cam6_autofocus_pane_g2

0x5451,	// (0x0002f6d4) cam6_autofocus_pane_g3

0x5449,	// (0x0002f6cc) cam6_autofocus_pane_g4

0x0003,

0xfa4c,	// (0x00039ccf) cam6_autofocus_pane_g

0x6ce1,	// (0x00030f64) cam6_timer_pane_g1

0x6ce9,	// (0x00030f6c) cam6_timer_pane_t1

0x6cf7,	// (0x00030f7a) cam6_zoom_cont_pane

0x6cff,	// (0x00030f82) cam6_zoom_pane_g1

0x6d08,	// (0x00030f8b) cam6_zoom_pane_g2

0x6d11,	// (0x00030f94) cam6_zoom_pane_g3

0x0002,

0xfa55,	// (0x00039cd8) cam6_zoom_pane_g

0xc55f,	// (0x000367e2) cam6_battery_pane_g1

0xc55f,	// (0x000367e2) cam6_battery_pane_g2

0x0001,

0xf0af,	// (0x00039332) cam6_battery_pane_g

0x6cff,	// (0x00030f82) cam6_zoom_cont_pane_g1

0x6d08,	// (0x00030f8b) cam6_zoom_cont_pane_g2

0x6d1a,	// (0x00030f9d) cam6_zoom_cont_pane_g3

0x0002,

0xfa5c,	// (0x00039cdf) cam6_zoom_cont_pane_g

0x6d37,	// (0x00030fba) cam6_mode_pane_cp_ParamLimits

0x6d37,	// (0x00030fba) cam6_mode_pane_cp

0x6d49,	// (0x00030fcc) cam6_zoom_pane_cp_ParamLimits

0x6d49,	// (0x00030fcc) cam6_zoom_pane_cp

0x6d55,	// (0x00030fd8) vid6_image_uncrop_cif_pane_ParamLimits

0x6d55,	// (0x00030fd8) vid6_image_uncrop_cif_pane

0x6d65,	// (0x00030fe8) vid6_image_uncrop_nhd_pane_ParamLimits

0x6d65,	// (0x00030fe8) vid6_image_uncrop_nhd_pane

0x6d84,	// (0x00031007) vid6_image_uncrop_vga_pane_ParamLimits

0x6d84,	// (0x00031007) vid6_image_uncrop_vga_pane

0x6d93,	// (0x00031016) vid6_image_uncrop_wvga_pane_ParamLimits

0x6d93,	// (0x00031016) vid6_image_uncrop_wvga_pane

0x6da2,	// (0x00031025) vid6_indi_pane_ParamLimits

0x6da2,	// (0x00031025) vid6_indi_pane

0xebf3,	// (0x00038e76) bg_tb_trans_pane_cp09_ParamLimits

0xebf3,	// (0x00038e76) bg_tb_trans_pane_cp09

0x6dba,	// (0x0003103d) cam6_battery_pane_cp_ParamLimits

0x6dba,	// (0x0003103d) cam6_battery_pane_cp

0x6dc6,	// (0x00031049) vid6_indi_pane_g1_ParamLimits

0x6dc6,	// (0x00031049) vid6_indi_pane_g1

0x6dd8,	// (0x0003105b) vid6_indi_pane_g2_ParamLimits

0x6dd8,	// (0x0003105b) vid6_indi_pane_g2

0x6dea,	// (0x0003106d) vid6_indi_pane_g3_ParamLimits

0x6dea,	// (0x0003106d) vid6_indi_pane_g3

0x6dff,	// (0x00031082) vid6_indi_pane_g4_ParamLimits

0x6dff,	// (0x00031082) vid6_indi_pane_g4

0x6e14,	// (0x00031097) vid6_indi_pane_g5_ParamLimits

0x6e14,	// (0x00031097) vid6_indi_pane_g5

0x0004,

0xfa63,	// (0x00039ce6) vid6_indi_pane_g_ParamLimits

0xfa63,	// (0x00039ce6) vid6_indi_pane_g

0x6e2e,	// (0x000310b1) vid6_indi_pane_t1_ParamLimits

0x6e2e,	// (0x000310b1) vid6_indi_pane_t1

0x6e44,	// (0x000310c7) vid6_indi_pane_t2_ParamLimits

0x6e44,	// (0x000310c7) vid6_indi_pane_t2

0x6e6c,	// (0x000310ef) vid6_indi_pane_t3_ParamLimits

0x6e6c,	// (0x000310ef) vid6_indi_pane_t3

0x6e94,	// (0x00031117) vid6_indi_pane_t4_ParamLimits

0x6e94,	// (0x00031117) vid6_indi_pane_t4

0x0003,

0xfa6e,	// (0x00039cf1) vid6_indi_pane_t_ParamLimits

0xfa6e,	// (0x00039cf1) vid6_indi_pane_t

0x6eb8,	// (0x0003113b) wait_bar_pane_cp08

0x6ec7,	// (0x0003114a) main_cset_text2_pane_t1_ParamLimits

0x6ec7,	// (0x0003114a) main_cset_text2_pane_t1

0x6d22,	// (0x00030fa5) listscroll_gen_pane_cp06_t1_ParamLimits

0x6d22,	// (0x00030fa5) listscroll_gen_pane_cp06_t1

0xb229,	// (0x000354ac) main_cam6_set_pane

0x542b,	// (0x0002f6ae) bg_tb_trans_pane_cp06_ParamLimits

0xb827,	// (0x00035aaa) cam4_indicators_pane_g1_ParamLimits

0xb838,	// (0x00035abb) cam4_indicators_pane_g2_ParamLimits

0xf7e6,	// (0x00039a69) cam4_indicators_pane_g_ParamLimits

0xb850,	// (0x00035ad3) cam4_indicators_pane_t1_ParamLimits

0xb21b,	// (0x0003549e) bg_tb_trans_pane_cp07_ParamLimits

0xb87a,	// (0x00035afd) vid4_indicators_pane_g1_ParamLimits

0xb88e,	// (0x00035b11) vid4_indicators_pane_g2_ParamLimits

0xb8a2,	// (0x00035b25) vid4_indicators_pane_g3_ParamLimits

0xb8b3,	// (0x00035b36) vid4_indicators_pane_g4_ParamLimits

0xf7f8,	// (0x00039a7b) vid4_indicators_pane_g_ParamLimits

0xb8cf,	// (0x00035b52) vid4_indicators_pane_t1_ParamLimits

0xb965,	// (0x00035be8) vid4_progress_pane_g1_ParamLimits

0xb975,	// (0x00035bf8) vid4_progress_pane_g2_ParamLimits

0x1bd6,	// (0x0002be59) vid4_progress_pane_g3_ParamLimits

0xb985,	// (0x00035c08) vid4_progress_pane_g4_ParamLimits

0xf99f,	// (0x00039c22) vid4_progress_pane_g_ParamLimits

0x1be8,	// (0x0002be6b) vid4_progress_pane_t1_ParamLimits

0xb99d,	// (0x00035c20) vid4_progress_pane_t2_ParamLimits

0xb9b2,	// (0x00035c35) vid4_progress_pane_t3_ParamLimits

0xf9aa,	// (0x00039c2d) vid4_progress_pane_t_ParamLimits

0x1bfe,	// (0x0002be81) wait_bar_pane_cp07_ParamLimits

0x6ee5,	// (0x00031168) main_cam6_set_pane_g2_ParamLimits

0x6ee5,	// (0x00031168) main_cam6_set_pane_g2

0x6f09,	// (0x0003118c) main_cset6_listscroll_pane_ParamLimits

0x6f09,	// (0x0003118c) main_cset6_listscroll_pane

0x6f25,	// (0x000311a8) main_cset6_slider_pane_ParamLimits

0x6f25,	// (0x000311a8) main_cset6_slider_pane

0x6f3b,	// (0x000311be) main_cset6_text2_pane_ParamLimits

0x6f3b,	// (0x000311be) main_cset6_text2_pane

0x6f49,	// (0x000311cc) main_cset6_text_pane

0x6f51,	// (0x000311d4) main_cset_list_pane_copy1_ParamLimits

0x6f51,	// (0x000311d4) main_cset_list_pane_copy1

0x6f61,	// (0x000311e4) scroll_pane_cp028_copy1

0x6f6a,	// (0x000311ed) cset_list_set_pane_copy1

0x6f7c,	// (0x000311ff) aid_position_infowindow_above_copy1

0x6f84,	// (0x00031207) aid_position_infowindow_below_copy1

0x6f8c,	// (0x0003120f) cset_list_set_pane_g1_copy1

0x6f94,	// (0x00031217) cset_list_set_pane_g3_copy1_ParamLimits

0x6f94,	// (0x00031217) cset_list_set_pane_g3_copy1

0x6fa3,	// (0x00031226) cset_list_set_pane_t1_copy1_ParamLimits

0x6fa3,	// (0x00031226) cset_list_set_pane_t1_copy1

0xc40e,	// (0x00036691) list_highlight_pane_cp021_copy1_ParamLimits

0xc40e,	// (0x00036691) list_highlight_pane_cp021_copy1

0x6fb8,	// (0x0003123b) cset6_slider_pane_ParamLimits

0x6fb8,	// (0x0003123b) cset6_slider_pane

0x6fe4,	// (0x00031267) main_cset6_slider_pane_g1_ParamLimits

0x6fe4,	// (0x00031267) main_cset6_slider_pane_g1

0x700c,	// (0x0003128f) main_cset6_slider_pane_g2_ParamLimits

0x700c,	// (0x0003128f) main_cset6_slider_pane_g2

0x7034,	// (0x000312b7) main_cset6_slider_pane_g3_ParamLimits

0x7034,	// (0x000312b7) main_cset6_slider_pane_g3

0x7040,	// (0x000312c3) main_cset6_slider_pane_g4_ParamLimits

0x7040,	// (0x000312c3) main_cset6_slider_pane_g4

0x704c,	// (0x000312cf) main_cset6_slider_pane_g5_ParamLimits

0x704c,	// (0x000312cf) main_cset6_slider_pane_g5

0x59ea,	// (0x0002fc6d) main_cset6_slider_pane_g7_ParamLimits

0x59ea,	// (0x0002fc6d) main_cset6_slider_pane_g7

0x59f6,	// (0x0002fc79) main_cset6_slider_pane_g8_ParamLimits

0x59f6,	// (0x0002fc79) main_cset6_slider_pane_g8

0x5a02,	// (0x0002fc85) main_cset6_slider_pane_g9_ParamLimits

0x5a02,	// (0x0002fc85) main_cset6_slider_pane_g9

0x5a0e,	// (0x0002fc91) main_cset6_slider_pane_g10_ParamLimits

0x5a0e,	// (0x0002fc91) main_cset6_slider_pane_g10

0x5a1a,	// (0x0002fc9d) main_cset6_slider_pane_g11_ParamLimits

0x5a1a,	// (0x0002fc9d) main_cset6_slider_pane_g11

0x5a26,	// (0x0002fca9) main_cset6_slider_pane_g12_ParamLimits

0x5a26,	// (0x0002fca9) main_cset6_slider_pane_g12

0x5a32,	// (0x0002fcb5) main_cset6_slider_pane_g13_ParamLimits

0x5a32,	// (0x0002fcb5) main_cset6_slider_pane_g13

0x5a3e,	// (0x0002fcc1) main_cset6_slider_pane_g14_ParamLimits

0x5a3e,	// (0x0002fcc1) main_cset6_slider_pane_g14

0x7058,	// (0x000312db) main_cset6_slider_pane_g15_ParamLimits

0x7058,	// (0x000312db) main_cset6_slider_pane_g15

0x5a62,	// (0x0002fce5) main_cset6_slider_pane_g16_ParamLimits

0x5a62,	// (0x0002fce5) main_cset6_slider_pane_g16

0x5a6e,	// (0x0002fcf1) main_cset6_slider_pane_g17_ParamLimits

0x5a6e,	// (0x0002fcf1) main_cset6_slider_pane_g17

0x0011,

0xfa77,	// (0x00039cfa) main_cset6_slider_pane_g_ParamLimits

0xfa77,	// (0x00039cfa) main_cset6_slider_pane_g

0x7088,	// (0x0003130b) main_cset6_slider_pane_t1_ParamLimits

0x7088,	// (0x0003130b) main_cset6_slider_pane_t1

0x70c9,	// (0x0003134c) main_cset6_slider_pane_t2_ParamLimits

0x70c9,	// (0x0003134c) main_cset6_slider_pane_t2

0x70f4,	// (0x00031377) main_cset6_slider_pane_t3_ParamLimits

0x70f4,	// (0x00031377) main_cset6_slider_pane_t3

0x711f,	// (0x000313a2) main_cset6_slider_pane_t4_ParamLimits

0x711f,	// (0x000313a2) main_cset6_slider_pane_t4

0x714a,	// (0x000313cd) main_cset6_slider_pane_t5_ParamLimits

0x714a,	// (0x000313cd) main_cset6_slider_pane_t5

0x7175,	// (0x000313f8) main_cset6_slider_pane_t7_ParamLimits

0x7175,	// (0x000313f8) main_cset6_slider_pane_t7

0x71ab,	// (0x0003142e) main_cset6_slider_pane_t8_ParamLimits

0x71ab,	// (0x0003142e) main_cset6_slider_pane_t8

0x71cf,	// (0x00031452) main_cset6_slider_pane_t9_ParamLimits

0x71cf,	// (0x00031452) main_cset6_slider_pane_t9

0x71f3,	// (0x00031476) main_cset6_slider_pane_t10_ParamLimits

0x71f3,	// (0x00031476) main_cset6_slider_pane_t10

0x7217,	// (0x0003149a) main_cset6_slider_pane_t11_ParamLimits

0x7217,	// (0x0003149a) main_cset6_slider_pane_t11

0x723b,	// (0x000314be) main_cset6_slider_pane_t14_ParamLimits

0x723b,	// (0x000314be) main_cset6_slider_pane_t14

0x7274,	// (0x000314f7) main_cset6_slider_pane_t15_ParamLimits

0x7274,	// (0x000314f7) main_cset6_slider_pane_t15

0x000b,

0xfa9c,	// (0x00039d1f) main_cset6_slider_pane_t_ParamLimits

0xfa9c,	// (0x00039d1f) main_cset6_slider_pane_t

0x72ad,	// (0x00031530) cset_slider_pane_g1_copy1

0x72b6,	// (0x00031539) cset_slider_pane_g2_copy1

0x72bf,	// (0x00031542) cset_slider_pane_g3_copy1

0xbe20,	// (0x000360a3) bg_popup_sub_pane_cp011_copy1

0x72ee,	// (0x00031571) main_cset_text_pane_g1_copy1

0x60ad,	// (0x00030330) main_cset_text_pane_t1_copy1

0x60bb,	// (0x0003033e) main_cset_text_pane_t2_copy1

0x60c9,	// (0x0003034c) main_cset_text_pane_t3_copy1

0x60d7,	// (0x0003035a) main_cset_text_pane_t4_copy1

0x60e5,	// (0x00030368) main_cset_text_pane_t5_copy1

0x72f6,	// (0x00031579) main_cset_text_pane_t6_copy1

0x7304,	// (0x00031587) main_cset_text_pane_t7_copy1

0x6ec7,	// (0x0003114a) main_cset_text2_pane_t1_copy1

0xb21b,	// (0x0003549e) main_ncimui_pane

0x0ff7,	// (0x0002b27a) popup_query_ncimui_window_ParamLimits

0x0ff7,	// (0x0002b27a) popup_query_ncimui_window

0xeb96,	// (0x00038e19) field_cale_ev2_pane_g4_ParamLimits

0xeb96,	// (0x00038e19) field_cale_ev2_pane_g4

0x5224,	// (0x0002f4a7) cell_video_dialer_keypad_pane_g2_ParamLimits

0x5224,	// (0x0002f4a7) cell_video_dialer_keypad_pane_g2

0x0001,

0xf780,	// (0x00039a03) cell_video_dialer_keypad_pane_g_ParamLimits

0xf780,	// (0x00039a03) cell_video_dialer_keypad_pane_g

0x523c,	// (0x0002f4bf) cell_video_dialer_keypad_pane_t1

0xbe20,	// (0x000360a3) bg_popup_window_pane_cp012

0xe3ec,	// (0x0003866f) heading_pane_cp06

0x7459,	// (0x000316dc) ncim_query_content_pane

0xbe20,	// (0x000360a3) bg_popup_heading_pane_cp01

0x7461,	// (0x000316e4) ncim_heading_pane_t1

0x746f,	// (0x000316f2) ncim_indicator_popup_pane

0x7481,	// (0x00031704) ncim_query_button_pane

0x74a1,	// (0x00031724) ncim_query_content_pane_t1

0x74b3,	// (0x00031736) ncim_query_content_pane_t2

0x0005,

0xfac6,	// (0x00039d49) ncim_query_content_pane_t

0x7565,	// (0x000317e8) ncim_query_list_pane

0x7577,	// (0x000317fa) ncim_query_popup_pane

0x746f,	// (0x000316f2) ncim_indicator_popup_pane_ParamLimits

0x7489,	// (0x0003170c) ncim_query_content_pane_g1_ParamLimits

0x7489,	// (0x0003170c) ncim_query_content_pane_g1

0x74a1,	// (0x00031724) ncim_query_content_pane_t1_ParamLimits

0x74b3,	// (0x00031736) ncim_query_content_pane_t2_ParamLimits

0x74c5,	// (0x00031748) ncim_query_content_pane_t3_ParamLimits

0x74c5,	// (0x00031748) ncim_query_content_pane_t3

0x74ed,	// (0x00031770) ncim_query_content_pane_t4_ParamLimits

0x74ed,	// (0x00031770) ncim_query_content_pane_t4

0x7515,	// (0x00031798) ncim_query_content_pane_t5_ParamLimits

0x7515,	// (0x00031798) ncim_query_content_pane_t5

0x753d,	// (0x000317c0) ncim_query_content_pane_t6_ParamLimits

0x753d,	// (0x000317c0) ncim_query_content_pane_t6

0xfac6,	// (0x00039d49) ncim_query_content_pane_t_ParamLimits

0x7565,	// (0x000317e8) ncim_query_list_pane_ParamLimits

0x7577,	// (0x000317fa) ncim_query_popup_pane_ParamLimits

0x758b,	// (0x0003180e) wait_bar_pane_cp04

0xbe20,	// (0x000360a3) input_focus_pane_cp011

0x7593,	// (0x00031816) ncim_query_popup_pane_t1

0x75a1,	// (0x00031824) ncim_list_query_list_pane_ParamLimits

0x75a1,	// (0x00031824) ncim_list_query_list_pane

0xbe20,	// (0x000360a3) bg_button_pane_cp027

0x75ae,	// (0x00031831) ncim_query_button_pane_g1

0xbe20,	// (0x000360a3) list_highlight_pane_cp012

0x75b8,	// (0x0003183b) ncim_list_query_list_pane_g1

0x75c0,	// (0x00031843) ncim_list_query_list_pane_t1

0xb844,	// (0x00035ac7) cam4_indicators_pane_g3_ParamLimits

0xb844,	// (0x00035ac7) cam4_indicators_pane_g3

0xb8bf,	// (0x00035b42) vid4_indicators_pane_g5_ParamLimits

0xb8bf,	// (0x00035b42) vid4_indicators_pane_g5

0xb991,	// (0x00035c14) vid4_progress_pane_g5_ParamLimits

0xb991,	// (0x00035c14) vid4_progress_pane_g5

0x7344,	// (0x000315c7) main_ncimui_pane_g1

0x73ad,	// (0x00031630) ncimui_group_query_pane_ParamLimits

0x73ad,	// (0x00031630) ncimui_group_query_pane

0x73f5,	// (0x00031678) ncimui_list_pane_ParamLimits

0x73f5,	// (0x00031678) ncimui_list_pane

0x741c,	// (0x0003169f) ncimui_text_pane_ParamLimits

0x741c,	// (0x0003169f) ncimui_text_pane

0x75ce,	// (0x00031851) ncimui_text_pane_t1_ParamLimits

0x75ce,	// (0x00031851) ncimui_text_pane_t1

0x75ec,	// (0x0003186f) ncimui_list_single_graphic_pane_ParamLimits

0x75ec,	// (0x0003186f) ncimui_list_single_graphic_pane

0x75fc,	// (0x0003187f) ncimui_query_pane_ParamLimits

0x75fc,	// (0x0003187f) ncimui_query_pane

0xbe20,	// (0x000360a3) list_highlight_pane_cp013

0x760f,	// (0x00031892) ncim_list_query_list_pane_t1_copy1

0x761d,	// (0x000318a0) ncim_list_single_graphic_pane_g1

0x7625,	// (0x000318a8) ncim_query_button_pane_cp01

0x7631,	// (0x000318b4) ncim_query_entry_pane_ParamLimits

0x7631,	// (0x000318b4) ncim_query_entry_pane

0x7644,	// (0x000318c7) ncimui_query_pane_g1

0x7650,	// (0x000318d3) ncimui_query_pane_t1_ParamLimits

0x7650,	// (0x000318d3) ncimui_query_pane_t1

0xc40e,	// (0x00036691) input_focus_pane_cp012

0x7669,	// (0x000318ec) ncim_query_entry_pane_t1

0xc5bd,	// (0x00036840) main_im_pane_ParamLimits

0xb21b,	// (0x0003549e) main_mobtv_pane_ParamLimits

0xb21b,	// (0x0003549e) main_mobtv_pane

0x7070,	// (0x000312f3) main_cset6_slider_pane_g18_ParamLimits

0x7070,	// (0x000312f3) main_cset6_slider_pane_g18

0x707c,	// (0x000312ff) main_cset6_slider_pane_g19_ParamLimits

0x707c,	// (0x000312ff) main_cset6_slider_pane_g19

0xc53d,	// (0x000367c0) bg_main_mobtv_pane_ParamLimits

0xc53d,	// (0x000367c0) bg_main_mobtv_pane

0x767b,	// (0x000318fe) main_mobtv_info_pane

0x7684,	// (0x00031907) main_mobtv_loading_pane_ParamLimits

0x7684,	// (0x00031907) main_mobtv_loading_pane

0x7691,	// (0x00031914) main_mobtv_pg_channel_list_pane

0x769b,	// (0x0003191e) main_mobtv_pg_hdr_pane

0x76a4,	// (0x00031927) main_mobtv_programe_curr_pane_ParamLimits

0x76a4,	// (0x00031927) main_mobtv_programe_curr_pane

0x76b1,	// (0x00031934) main_mobtv_programe_next_pane_ParamLimits

0x76b1,	// (0x00031934) main_mobtv_programe_next_pane

0x76be,	// (0x00031941) popup_mobtv_noti_window

0xc55f,	// (0x000367e2) main_tv_pg_hdr_pane_g1

0x76c6,	// (0x00031949) main_tv_pg_hdr_pane_g2

0x76ce,	// (0x00031951) main_tv_pg_hdr_pane_g3

0x76d6,	// (0x00031959) main_tv_pg_hdr_pane_g4

0x76de,	// (0x00031961) main_tv_pg_hdr_pane_g5

0x76e8,	// (0x0003196b) main_tv_pg_hdr_pane_g6

0x76f2,	// (0x00031975) main_tv_pg_hdr_pane_g7

0x76fc,	// (0x0003197f) main_tv_pg_hdr_pane_g8

0x7706,	// (0x00031989) main_tv_pg_hdr_pane_g9

0x7710,	// (0x00031993) main_tv_pg_hdr_pane_g10

0x771a,	// (0x0003199d) main_tv_pg_hdr_pane_g11

0x000a,

0xfad3,	// (0x00039d56) main_tv_pg_hdr_pane_g

0x7724,	// (0x000319a7) main_tv_pg_hdr_pane_t1

0x7732,	// (0x000319b5) main_tv_pg_hdr_pane_t2

0x7740,	// (0x000319c3) main_tv_pg_hdr_pane_t3

0x7750,	// (0x000319d3) main_tv_pg_hdr_pane_t4

0x7760,	// (0x000319e3) main_tv_pg_hdr_pane_t5

0x0004,

0xfaea,	// (0x00039d6d) main_tv_pg_hdr_pane_t

0x7770,	// (0x000319f3) single_mobtv_pg_channel_pane_ParamLimits

0x7770,	// (0x000319f3) single_mobtv_pg_channel_pane

0x7782,	// (0x00031a05) single_mobtv_pg_channel_table_pane

0xcaa2,	// (0x00036d25) single_mobtv_pg_channel_thumb_pane

0x778b,	// (0x00031a0e) single_tv_pg_channel_pane_g1

0x7794,	// (0x00031a17) single_tv_pg_channel_pane_g2

0x0001,

0xfaf5,	// (0x00039d78) single_tv_pg_channel_pane_g

0xc521,	// (0x000367a4) bg_single_mobtv_pg_channel_thumb_pane_ParamLimits

0xc521,	// (0x000367a4) bg_single_mobtv_pg_channel_thumb_pane

0x779d,	// (0x00031a20) single_mobtv_pg_channel_thumb_pane_g1_ParamLimits

0x779d,	// (0x00031a20) single_mobtv_pg_channel_thumb_pane_g1

0x77ab,	// (0x00031a2e) single_mobtv_pg_channel_thumb_pane_g2_ParamLimits

0x77ab,	// (0x00031a2e) single_mobtv_pg_channel_thumb_pane_g2

0x77b7,	// (0x00031a3a) single_mobtv_pg_channel_thumb_pane_g3_ParamLimits

0x77b7,	// (0x00031a3a) single_mobtv_pg_channel_thumb_pane_g3

0x0002,

0xfafa,	// (0x00039d7d) single_mobtv_pg_channel_thumb_pane_g_ParamLimits

0xfafa,	// (0x00039d7d) single_mobtv_pg_channel_thumb_pane_g

0x77c3,	// (0x00031a46) single_mobtv_pg_channel_thumb_pane_t1

0x77d1,	// (0x00031a54) single_mobtv_pg_channel_thumb_pane_t2

0x0001,

0xfb01,	// (0x00039d84) single_mobtv_pg_channel_thumb_pane_t

0xc55f,	// (0x000367e2) bg_single_mobtv_pg_channel_table_pane_g1

0xc55f,	// (0x000367e2) bg_single_mobtv_pg_channel_table_pane_g2

0x0001,

0xf0af,	// (0x00039332) bg_single_mobtv_pg_channel_table_pane_g

0x77df,	// (0x00031a62) single_mobtv_pg_channel_table_pane_t1

0x77ed,	// (0x00031a70) single_mobtv_pg_channel_table_pane_t2

0x0001,

0xfb06,	// (0x00039d89) single_mobtv_pg_channel_table_pane_t

0x7803,	// (0x00031a86) main_mobtv_info_pane_g1_ParamLimits

0x7803,	// (0x00031a86) main_mobtv_info_pane_g1

0x7821,	// (0x00031aa4) main_mobtv_info_pane_t1_ParamLimits

0x7821,	// (0x00031aa4) main_mobtv_info_pane_t1

0x7899,	// (0x00031b1c) main_mobtv_info_pane_t2_ParamLimits

0x7899,	// (0x00031b1c) main_mobtv_info_pane_t2

0x0002,

0xfb10,	// (0x00039d93) main_mobtv_info_pane_t_ParamLimits

0xfb10,	// (0x00039d93) main_mobtv_info_pane_t

0x7928,	// (0x00031bab) wait_bar_pane_cp05

0x793a,	// (0x00031bbd) main_mobtv_loading_pane_g1_ParamLimits

0x793a,	// (0x00031bbd) main_mobtv_loading_pane_g1

0x794d,	// (0x00031bd0) main_mobtv_loading_pane_g2_ParamLimits

0x794d,	// (0x00031bd0) main_mobtv_loading_pane_g2

0x7959,	// (0x00031bdc) main_mobtv_loading_pane_g3_ParamLimits

0x7959,	// (0x00031bdc) main_mobtv_loading_pane_g3

0x0002,

0xfb17,	// (0x00039d9a) main_mobtv_loading_pane_g_ParamLimits

0xfb17,	// (0x00039d9a) main_mobtv_loading_pane_g

0x796c,	// (0x00031bef) main_mobtv_loading_pane_t1_ParamLimits

0x796c,	// (0x00031bef) main_mobtv_loading_pane_t1

0x7984,	// (0x00031c07) main_mobtv_loading_pane_t2_ParamLimits

0x7984,	// (0x00031c07) main_mobtv_loading_pane_t2

0x0001,

0xfb1e,	// (0x00039da1) main_mobtv_loading_pane_t_ParamLimits

0xfb1e,	// (0x00039da1) main_mobtv_loading_pane_t

0x79a8,	// (0x00031c2b) wait_bar_pane_cp06_ParamLimits

0x79a8,	// (0x00031c2b) wait_bar_pane_cp06

0x79b7,	// (0x00031c3a) main_mobtv_programe_curr_pane_t1

0x79c5,	// (0x00031c48) main_mobtv_programe_curr_pane_t2

0x0001,

0xfb23,	// (0x00039da6) main_mobtv_programe_curr_pane_t

0x79d3,	// (0x00031c56) main_mobtv_programe_next_pane_t1

0x79e1,	// (0x00031c64) main_mobtv_programe_next_pane_t2

0x79ef,	// (0x00031c72) main_mobtv_programe_next_pane_t3

0x0002,

0xfb28,	// (0x00039dab) main_mobtv_programe_next_pane_t

0xbe20,	// (0x000360a3) bg_popup_mobtv_noti_window_pane

0x79fd,	// (0x00031c80) popup_mobtv_noti_window_g1

0x7a05,	// (0x00031c88) popup_mobtv_noti_window_t1

0x7a13,	// (0x00031c96) popup_mobtv_noti_window_t2

0x0001,

0xfb2f,	// (0x00039db2) popup_mobtv_noti_window_t

0xc55f,	// (0x000367e2) bg_popup_mobtv_noti_window_pane_g1

0xb229,	// (0x000354ac) sc_clock_pane

0xb229,	// (0x000354ac) main_fs_bigclock_pane

0x69f7,	// (0x00030c7a) blid2_tripm_pane_t4_ParamLimits

0x69f7,	// (0x00030c7a) blid2_tripm_pane_t4

0xc521,	// (0x000367a4) sc_clock_pane_g1_ParamLimits

0xc521,	// (0x000367a4) sc_clock_pane_g1

0xc569,	// (0x000367ec) sc_clock_pane_t1_ParamLimits

0xc569,	// (0x000367ec) sc_clock_pane_t1

0xc569,	// (0x000367ec) sc_clock_pane_t2_ParamLimits

0xc569,	// (0x000367ec) sc_clock_pane_t2

0xc569,	// (0x000367ec) sc_clock_pane_t3_ParamLimits

0xc569,	// (0x000367ec) sc_clock_pane_t3

0x0004,

0xfb34,	// (0x00039db7) sc_clock_pane_t_ParamLimits

0xfb34,	// (0x00039db7) sc_clock_pane_t

0x9100,	// (0x00033383) main_fs_bigclock_indicator_pane_ParamLimits

0x9100,	// (0x00033383) main_fs_bigclock_indicator_pane

0x7a70,	// (0x00031cf3) main_fs_bigclock_pane_g1_ParamLimits

0x7a70,	// (0x00031cf3) main_fs_bigclock_pane_g1

0x910c,	// (0x0003338f) main_fs_bigclock_pane_t1_ParamLimits

0x910c,	// (0x0003338f) main_fs_bigclock_pane_t1

0x911e,	// (0x000333a1) main_fs_bigclock_pane_t2_ParamLimits

0x911e,	// (0x000333a1) main_fs_bigclock_pane_t2

0x9132,	// (0x000333b5) main_fs_bigclock_pane_t3_ParamLimits

0x9132,	// (0x000333b5) main_fs_bigclock_pane_t3

0x0002,

0xfcb3,	// (0x00039f36) main_fs_bigclock_pane_t_ParamLimits

0xfcb3,	// (0x00039f36) main_fs_bigclock_pane_t

0x9144,	// (0x000333c7) main_fs_bigclock_indicator_pane_g1

0x7495,	// (0x00031718) ncim_query_content_pane_g2_ParamLimits

0x7495,	// (0x00031718) ncim_query_content_pane_g2

0x0001,

0xfac1,	// (0x00039d44) ncim_query_content_pane_g_ParamLimits

0xfac1,	// (0x00039d44) ncim_query_content_pane_g

0xc569,	// (0x000367ec) sc_clock_pane_t4_ParamLimits

0xc569,	// (0x000367ec) sc_clock_pane_t4

0xb21b,	// (0x0003549e) main_radioblah_pane

0xb7c9,	// (0x00035a4c) cell_call4_button_pane_t1_copy1_ParamLimits

0xb7c9,	// (0x00035a4c) cell_call4_button_pane_t1_copy1

0x735c,	// (0x000315df) main_ncimui_pane_t1_ParamLimits

0x735c,	// (0x000315df) main_ncimui_pane_t1

0x7376,	// (0x000315f9) main_ncimui_pane_t2_ParamLimits

0x7376,	// (0x000315f9) main_ncimui_pane_t2

0x0002,

0xfaba,	// (0x00039d3d) main_ncimui_pane_t_ParamLimits

0xfaba,	// (0x00039d3d) main_ncimui_pane_t

0xd25e,	// (0x000374e1) main_radioblah_anim_pane_ParamLimits

0xd25e,	// (0x000374e1) main_radioblah_anim_pane

0xd25e,	// (0x000374e1) main_radioblah_info_pane_ParamLimits

0xd25e,	// (0x000374e1) main_radioblah_info_pane

0xd24a,	// (0x000374cd) main_radioblah_pane_t1_ParamLimits

0xd24a,	// (0x000374cd) main_radioblah_pane_t1

0xd24a,	// (0x000374cd) main_radioblah_pane_t2_ParamLimits

0xd24a,	// (0x000374cd) main_radioblah_pane_t2

0x0003,

0xfb55,	// (0x00039dd8) main_radioblah_pane_t_ParamLimits

0xfb55,	// (0x00039dd8) main_radioblah_pane_t

0xc40e,	// (0x00036691) main_radioblah_rocker_ctrl_pane_ParamLimits

0xc40e,	// (0x00036691) main_radioblah_rocker_ctrl_pane

0xec01,	// (0x00038e84) main_radioblah_info_pane_t1_ParamLimits

0xec01,	// (0x00038e84) main_radioblah_info_pane_t1

0x7c25,	// (0x00031ea8) main_radioblah_info_pane_t2_ParamLimits

0x7c25,	// (0x00031ea8) main_radioblah_info_pane_t2

0x0003,

0xfb5e,	// (0x00039de1) main_radioblah_info_pane_t_ParamLimits

0xfb5e,	// (0x00039de1) main_radioblah_info_pane_t

0xc55f,	// (0x000367e2) main_radioblah_rocker_ctrl_pane_g1

0xc55f,	// (0x000367e2) main_radioblah_rocker_ctrl_pane_g2

0xc55f,	// (0x000367e2) main_radioblah_rocker_ctrl_pane_g3

0xc55f,	// (0x000367e2) main_radioblah_rocker_ctrl_pane_g4

0xc55f,	// (0x000367e2) main_radioblah_rocker_ctrl_pane_g5

0xc55f,	// (0x000367e2) main_radioblah_rocker_ctrl_pane_g6

0x0005,

0x05f3,	// (0x0002a876) main_radioblah_rocker_ctrl_pane_g

0x6ec7,	// (0x0003114a) main_cset_text2_pane_t1_copy1_ParamLimits

0xb817,	// (0x00035a9a) cam4_image_uncrop_qvga_pane

0xb86a,	// (0x00035aed) vid4_image_uncrop_qcif_pane

0xb9c8,	// (0x00035c4b) cam6_image_uncrop_qvga_pane_ParamLimits

0xb9c8,	// (0x00035c4b) cam6_image_uncrop_qvga_pane

0x6d74,	// (0x00030ff7) vid6_image_uncrop_qcif_pane_ParamLimits

0x6d74,	// (0x00030ff7) vid6_image_uncrop_qcif_pane

0xbe20,	// (0x000360a3) bg_popup_preview_window_pane_cp03

0x7312,	// (0x00031595) list_cset_text2_pane

0x731a,	// (0x0003159d) main_cset6_text2_pane_g1

0x7322,	// (0x000315a5) main_cset6_text2_pane_t1

0x7c74,	// (0x00031ef7) list_cset_text2_pane_t1_ParamLimits

0x7c74,	// (0x00031ef7) list_cset_text2_pane_t1

0xb21b,	// (0x0003549e) main_radioblah_pane_ParamLimits

0x7914,	// (0x00031b97) main_mobtv_info_pane_t3_ParamLimits

0x7914,	// (0x00031b97) main_mobtv_info_pane_t3

0xd23c,	// (0x000374bf) main_radioblah_pane_g1

0x7bf5,	// (0x00031e78) main_radioblah_info_pane_g1

0xc57d,	// (0x00036800) main_radioblah_info_pane_t3_ParamLimits

0xc57d,	// (0x00036800) main_radioblah_info_pane_t3

0x3258,	// (0x0002d4db) highlight_cell_cale_month_pane_ParamLimits

0x3258,	// (0x0002d4db) highlight_cell_cale_month_pane

0xb229,	// (0x000354ac) main_phob_fisheye_pane

0xec59,	// (0x00038edc) scroll_pane_cp0031_ParamLimits

0xec59,	// (0x00038edc) scroll_pane_cp0031

0x6eb8,	// (0x0003113b) wait_bar_pane_cp08_ParamLimits

0x6f6a,	// (0x000311ed) cset_list_set_pane_copy1_ParamLimits

0x7c8f,	// (0x00031f12) highlight_cell_cale_month_pane_g1

0x7c97,	// (0x00031f1a) highlight_cell_cale_month_pane_t1

0x660e,	// (0x00030891) list_gen_pane_cp01

0x593d,	// (0x0002fbc0) scroll_pane_01

0x7ca5,	// (0x00031f28) list_single_double_fisheye_pane

0x7cae,	// (0x00031f31) list_double_fisheye_pane_g1_ParamLimits

0x7cae,	// (0x00031f31) list_double_fisheye_pane_g1

0x7cba,	// (0x00031f3d) list_double_fisheye_pane_g2_ParamLimits

0x7cba,	// (0x00031f3d) list_double_fisheye_pane_g2

0x7cce,	// (0x00031f51) list_double_fisheye_pane_g3_ParamLimits

0x7cce,	// (0x00031f51) list_double_fisheye_pane_g3

0x0004,

0xfb67,	// (0x00039dea) list_double_fisheye_pane_g_ParamLimits

0xfb67,	// (0x00039dea) list_double_fisheye_pane_g

0x7cf7,	// (0x00031f7a) list_double_fisheye_pane_t1_ParamLimits

0x7cf7,	// (0x00031f7a) list_double_fisheye_pane_t1

0x7d12,	// (0x00031f95) list_double_fisheye_pane_t2_ParamLimits

0x7d12,	// (0x00031f95) list_double_fisheye_pane_t2

0x0001,

0xfb72,	// (0x00039df5) list_double_fisheye_pane_t_ParamLimits

0xfb72,	// (0x00039df5) list_double_fisheye_pane_t

0xb229,	// (0x000354ac) main_call5_pane

0xc40e,	// (0x00036691) sc_swipe_pane_ParamLimits

0xc40e,	// (0x00036691) sc_swipe_pane

0x7d47,	// (0x00031fca) call5_image_pane_ParamLimits

0x7d47,	// (0x00031fca) call5_image_pane

0x7d64,	// (0x00031fe7) call5_swipe_1_pane_ParamLimits

0x7d64,	// (0x00031fe7) call5_swipe_1_pane

0x7d77,	// (0x00031ffa) call5_swipe_2_pane_ParamLimits

0x7d77,	// (0x00031ffa) call5_swipe_2_pane

0x7da2,	// (0x00032025) popup_call5_audio_first_window_ParamLimits

0x7da2,	// (0x00032025) popup_call5_audio_first_window

0xc521,	// (0x000367a4) call5_swipe_1_pane_g1_ParamLimits

0xc521,	// (0x000367a4) call5_swipe_1_pane_g1

0x7db3,	// (0x00032036) call5_swipe_1_pane_g2_ParamLimits

0x7db3,	// (0x00032036) call5_swipe_1_pane_g2

0x0001,

0xfb77,	// (0x00039dfa) call5_swipe_1_pane_g_ParamLimits

0xfb77,	// (0x00039dfa) call5_swipe_1_pane_g

0x7dbf,	// (0x00032042) call5_swipe_1_pane_t1_ParamLimits

0x7dbf,	// (0x00032042) call5_swipe_1_pane_t1

0xc521,	// (0x000367a4) call5_swipe_2_pane_g1_ParamLimits

0xc521,	// (0x000367a4) call5_swipe_2_pane_g1

0x7dd4,	// (0x00032057) call5_swipe_2_pane_g2_ParamLimits

0x7dd4,	// (0x00032057) call5_swipe_2_pane_g2

0x0001,

0xfb7c,	// (0x00039dff) call5_swipe_2_pane_g_ParamLimits

0xfb7c,	// (0x00039dff) call5_swipe_2_pane_g

0x7de0,	// (0x00032063) call5_swipe_2_pane_t1_ParamLimits

0x7de0,	// (0x00032063) call5_swipe_2_pane_t1

0xc521,	// (0x000367a4) sc_swipe_pane_g1_ParamLimits

0xc521,	// (0x000367a4) sc_swipe_pane_g1

0xc52f,	// (0x000367b2) sc_swipe_pane_g2_ParamLimits

0xc52f,	// (0x000367b2) sc_swipe_pane_g2

0x0001,

0x061a,	// (0x0002a89d) sc_swipe_pane_g_ParamLimits

0x061a,	// (0x0002a89d) sc_swipe_pane_g

0xc569,	// (0x000367ec) sc_swipe_pane_t1_ParamLimits

0xc569,	// (0x000367ec) sc_swipe_pane_t1

0xb229,	// (0x000354ac) main_cmail_launcher_pane

0x7df5,	// (0x00032078) aid_size_cell_cmail_l_ParamLimits

0x7df5,	// (0x00032078) aid_size_cell_cmail_l

0x7e03,	// (0x00032086) grid_cmail_l_pane_ParamLimits

0x7e03,	// (0x00032086) grid_cmail_l_pane

0x7e1d,	// (0x000320a0) cell_cmail_l_pane_ParamLimits

0x7e1d,	// (0x000320a0) cell_cmail_l_pane

0x7e37,	// (0x000320ba) cell_cmail_l_pane_g1_ParamLimits

0x7e37,	// (0x000320ba) cell_cmail_l_pane_g1

0x7e43,	// (0x000320c6) cell_cmail_l_pane_t1_ParamLimits

0x7e43,	// (0x000320c6) cell_cmail_l_pane_t1

0x7e59,	// (0x000320dc) cell_cmail_l_pane_t2_ParamLimits

0x7e59,	// (0x000320dc) cell_cmail_l_pane_t2

0x0001,

0xfb81,	// (0x00039e04) cell_cmail_l_pane_t_ParamLimits

0xfb81,	// (0x00039e04) cell_cmail_l_pane_t

0xc40e,	// (0x00036691) grid_highlight_pane_cp018_ParamLimits

0xc40e,	// (0x00036691) grid_highlight_pane_cp018

0x0960,	// (0x0002abe3) main2_pane_ParamLimits

0x0960,	// (0x0002abe3) main2_pane

0xc655,	// (0x000368d8) popup_sp_fs_action_menu_bg_pane_g1

0xc65d,	// (0x000368e0) popup_sp_fs_action_menu_bg_pane_g2

0xc665,	// (0x000368e8) popup_sp_fs_action_menu_bg_pane_g3

0xc66d,	// (0x000368f0) popup_sp_fs_action_menu_bg_pane_g4

0xc675,	// (0x000368f8) popup_sp_fs_action_menu_bg_pane_g5

0xc67d,	// (0x00036900) popup_sp_fs_action_menu_bg_pane_g6

0xc685,	// (0x00036908) popup_sp_fs_action_menu_bg_pane_g7

0xc68d,	// (0x00036910) popup_sp_fs_action_menu_bg_pane_g8

0xc695,	// (0x00036918) popup_sp_fs_action_menu_bg_pane_g9

0xc69d,	// (0x00036920) popup_sp_fs_action_menu_bg_pane_g10

0xc69d,	// (0x00036920) popup_sp_fs_action_menu_bg_pane_g11

0x000a,

0xf100,	// (0x00039383) popup_sp_fs_action_menu_bg_pane_g

0xc521,	// (0x000367a4) list_medium_line_x2_t3_g3_g1_ParamLimits

0xc521,	// (0x000367a4) list_medium_line_x2_t3_g3_g1

0xc521,	// (0x000367a4) list_medium_line_x2_t3_g3_g2_ParamLimits

0xc521,	// (0x000367a4) list_medium_line_x2_t3_g3_g2

0xc521,	// (0x000367a4) list_medium_line_x2_t3_g3_g3_ParamLimits

0xc521,	// (0x000367a4) list_medium_line_x2_t3_g3_g3

0x0002,

0xf1ae,	// (0x00039431) list_medium_line_x2_t3_g3_g_ParamLimits

0xf1ae,	// (0x00039431) list_medium_line_x2_t3_g3_g

0xc569,	// (0x000367ec) list_medium_line_x2_t3_g3_t1_ParamLimits

0xc569,	// (0x000367ec) list_medium_line_x2_t3_g3_t1

0xc569,	// (0x000367ec) list_medium_line_x2_t3_g3_t2_ParamLimits

0xc569,	// (0x000367ec) list_medium_line_x2_t3_g3_t2

0xc569,	// (0x000367ec) list_medium_line_x2_t3_g3_t3_ParamLimits

0xc569,	// (0x000367ec) list_medium_line_x2_t3_g3_t3

0x0002,

0xf1b5,	// (0x00039438) list_medium_line_x2_t3_g3_t_ParamLimits

0xf1b5,	// (0x00039438) list_medium_line_x2_t3_g3_t

0xc521,	// (0x000367a4) list_medium_line_x2_t3_g2_g1_ParamLimits

0xc521,	// (0x000367a4) list_medium_line_x2_t3_g2_g1

0xc521,	// (0x000367a4) list_medium_line_x2_t3_g2_g2_ParamLimits

0xc521,	// (0x000367a4) list_medium_line_x2_t3_g2_g2

0x0001,

0xf1bc,	// (0x0003943f) list_medium_line_x2_t3_g2_g_ParamLimits

0xf1bc,	// (0x0003943f) list_medium_line_x2_t3_g2_g

0xc569,	// (0x000367ec) list_medium_line_x2_t3_g2_t1_ParamLimits

0xc569,	// (0x000367ec) list_medium_line_x2_t3_g2_t1

0xc569,	// (0x000367ec) list_medium_line_x2_t3_g2_t2_ParamLimits

0xc569,	// (0x000367ec) list_medium_line_x2_t3_g2_t2

0xc569,	// (0x000367ec) list_medium_line_x2_t3_g2_t3_ParamLimits

0xc569,	// (0x000367ec) list_medium_line_x2_t3_g2_t3

0x0002,

0xf1b5,	// (0x00039438) list_medium_line_x2_t3_g2_t_ParamLimits

0xf1b5,	// (0x00039438) list_medium_line_x2_t3_g2_t

0xc521,	// (0x000367a4) list_medium_line_x2_t4_g4_g1_ParamLimits

0xc521,	// (0x000367a4) list_medium_line_x2_t4_g4_g1

0xc521,	// (0x000367a4) list_medium_line_x2_t4_g4_g2_ParamLimits

0xc521,	// (0x000367a4) list_medium_line_x2_t4_g4_g2

0xc521,	// (0x000367a4) list_medium_line_x2_t4_g4_g3_ParamLimits

0xc521,	// (0x000367a4) list_medium_line_x2_t4_g4_g3

0xc521,	// (0x000367a4) list_medium_line_x2_t4_g4_g4_ParamLimits

0xc521,	// (0x000367a4) list_medium_line_x2_t4_g4_g4

0x0003,

0xf1c1,	// (0x00039444) list_medium_line_x2_t4_g4_g_ParamLimits

0xf1c1,	// (0x00039444) list_medium_line_x2_t4_g4_g

0xc569,	// (0x000367ec) list_medium_line_x2_t4_g4_t1_ParamLimits

0xc569,	// (0x000367ec) list_medium_line_x2_t4_g4_t1

0xc569,	// (0x000367ec) list_medium_line_x2_t4_g4_t2_ParamLimits

0xc569,	// (0x000367ec) list_medium_line_x2_t4_g4_t2

0xc569,	// (0x000367ec) list_medium_line_x2_t4_g4_t3_ParamLimits

0xc569,	// (0x000367ec) list_medium_line_x2_t4_g4_t3

0xc569,	// (0x000367ec) list_medium_line_x2_t4_g4_t4_ParamLimits

0xc569,	// (0x000367ec) list_medium_line_x2_t4_g4_t4

0x0003,

0xf1ca,	// (0x0003944d) list_medium_line_x2_t4_g4_t_ParamLimits

0xf1ca,	// (0x0003944d) list_medium_line_x2_t4_g4_t

0xc521,	// (0x000367a4) list_medium_line_x2_t2_g4_g1_ParamLimits

0xc521,	// (0x000367a4) list_medium_line_x2_t2_g4_g1

0xc521,	// (0x000367a4) list_medium_line_x2_t2_g4_g2_ParamLimits

0xc521,	// (0x000367a4) list_medium_line_x2_t2_g4_g2

0xc521,	// (0x000367a4) list_medium_line_x2_t2_g4_g3_ParamLimits

0xc521,	// (0x000367a4) list_medium_line_x2_t2_g4_g3

0xc521,	// (0x000367a4) list_medium_line_x2_t2_g4_g4_ParamLimits

0xc521,	// (0x000367a4) list_medium_line_x2_t2_g4_g4

0x0003,

0xf1c1,	// (0x00039444) list_medium_line_x2_t2_g4_g_ParamLimits

0xf1c1,	// (0x00039444) list_medium_line_x2_t2_g4_g

0xc569,	// (0x000367ec) list_medium_line_x2_t2_g4_t1_ParamLimits

0xc569,	// (0x000367ec) list_medium_line_x2_t2_g4_t1

0xc569,	// (0x000367ec) list_medium_line_x2_t2_g4_t2_ParamLimits

0xc569,	// (0x000367ec) list_medium_line_x2_t2_g4_t2

0x0001,

0xf191,	// (0x00039414) list_medium_line_x2_t2_g4_t_ParamLimits

0xf191,	// (0x00039414) list_medium_line_x2_t2_g4_t

0xc521,	// (0x000367a4) list_medium_line_x2_t2_g3_g1_ParamLimits

0xc521,	// (0x000367a4) list_medium_line_x2_t2_g3_g1

0xc521,	// (0x000367a4) list_medium_line_x2_t2_g3_g2_ParamLimits

0xc521,	// (0x000367a4) list_medium_line_x2_t2_g3_g2

0xc521,	// (0x000367a4) list_medium_line_x2_t2_g3_g3_ParamLimits

0xc521,	// (0x000367a4) list_medium_line_x2_t2_g3_g3

0x0002,

0xf1ae,	// (0x00039431) list_medium_line_x2_t2_g3_g_ParamLimits

0xf1ae,	// (0x00039431) list_medium_line_x2_t2_g3_g

0xc569,	// (0x000367ec) list_medium_line_x2_t2_g3_t1_ParamLimits

0xc569,	// (0x000367ec) list_medium_line_x2_t2_g3_t1

0xc569,	// (0x000367ec) list_medium_line_x2_t2_g3_t2_ParamLimits

0xc569,	// (0x000367ec) list_medium_line_x2_t2_g3_t2

0x0001,

0xf191,	// (0x00039414) list_medium_line_x2_t2_g3_t_ParamLimits

0xf191,	// (0x00039414) list_medium_line_x2_t2_g3_t

0x3391,	// (0x0002d614) main_sp_fs_list_pane_ParamLimits

0x3391,	// (0x0002d614) main_sp_fs_list_pane

0x339d,	// (0x0002d620) sp_fs_scroll_pane_ParamLimits

0x339d,	// (0x0002d620) sp_fs_scroll_pane

0xccc1,	// (0x00036f44) list_medium_line_x2_t3_t1

0xccc1,	// (0x00036f44) list_medium_line_x2_t3_t2

0xccc1,	// (0x00036f44) list_medium_line_x2_t3_t3

0x0002,

0xf277,	// (0x000394fa) list_medium_line_x2_t3_t

0xccc1,	// (0x00036f44) list_medium_line_x3_t4_t1

0xccc1,	// (0x00036f44) list_medium_line_x3_t4_t2

0xccc1,	// (0x00036f44) list_medium_line_x3_t4_t3

0xccc1,	// (0x00036f44) list_medium_line_x3_t4_t4

0x0003,

0xf27e,	// (0x00039501) list_medium_line_x3_t4_t

0xccc1,	// (0x00036f44) list_medium_line_x4_t5_t1

0xccc1,	// (0x00036f44) list_medium_line_x4_t5_t2

0xccc1,	// (0x00036f44) list_medium_line_x4_t5_t3

0xccc1,	// (0x00036f44) list_medium_line_x4_t5_t4

0xccc1,	// (0x00036f44) list_medium_line_x4_t5_t5

0x0004,

0xf287,	// (0x0003950a) list_medium_line_x4_t5_t

0xc521,	// (0x000367a4) list_medium_line_t4_g4_g1_ParamLimits

0xc521,	// (0x000367a4) list_medium_line_t4_g4_g1

0xc521,	// (0x000367a4) list_medium_line_t4_g4_g2_ParamLimits

0xc521,	// (0x000367a4) list_medium_line_t4_g4_g2

0xc521,	// (0x000367a4) list_medium_line_t4_g4_g3_ParamLimits

0xc521,	// (0x000367a4) list_medium_line_t4_g4_g3

0xc521,	// (0x000367a4) list_medium_line_t4_g4_g4_ParamLimits

0xc521,	// (0x000367a4) list_medium_line_t4_g4_g4

0x0003,

0xf1c1,	// (0x00039444) list_medium_line_t4_g4_g_ParamLimits

0xf1c1,	// (0x00039444) list_medium_line_t4_g4_g

0xc569,	// (0x000367ec) list_medium_line_t4_g4_t1_ParamLimits

0xc569,	// (0x000367ec) list_medium_line_t4_g4_t1

0xc569,	// (0x000367ec) list_medium_line_t4_g4_t2_ParamLimits

0xc569,	// (0x000367ec) list_medium_line_t4_g4_t2

0xc569,	// (0x000367ec) list_medium_line_t4_g4_t3_ParamLimits

0xc569,	// (0x000367ec) list_medium_line_t4_g4_t3

0xc569,	// (0x000367ec) list_medium_line_t4_g4_t4_ParamLimits

0xc569,	// (0x000367ec) list_medium_line_t4_g4_t4

0x0003,

0xf1ca,	// (0x0003944d) list_medium_line_t4_g4_t_ParamLimits

0xf1ca,	// (0x0003944d) list_medium_line_t4_g4_t

0x3448,	// (0x0002d6cb) chi_dic_find_pane_g1

0x0dc7,	// (0x0002b04a) main_tport_pane

0xccc1,	// (0x00036f44) list_medium_line_plain_t1

0xc521,	// (0x000367a4) list_medium_line_t2_g2_g1_ParamLimits

0xc521,	// (0x000367a4) list_medium_line_t2_g2_g1

0xc521,	// (0x000367a4) list_medium_line_t2_g2_g2_ParamLimits

0xc521,	// (0x000367a4) list_medium_line_t2_g2_g2

0x0001,

0xf1bc,	// (0x0003943f) list_medium_line_t2_g2_g_ParamLimits

0xf1bc,	// (0x0003943f) list_medium_line_t2_g2_g

0xc569,	// (0x000367ec) list_medium_line_t2_g2_t1_ParamLimits

0xc569,	// (0x000367ec) list_medium_line_t2_g2_t1

0xc569,	// (0x000367ec) list_medium_line_t2_g2_t2_ParamLimits

0xc569,	// (0x000367ec) list_medium_line_t2_g2_t2

0x0001,

0xf191,	// (0x00039414) list_medium_line_t2_g2_t_ParamLimits

0xf191,	// (0x00039414) list_medium_line_t2_g2_t

0x66c8,	// (0x0003094b) aid_sp_fs_list_icon_a_sm

0x66d0,	// (0x00030953) aid_sp_fs_list_icon_d

0x66d8,	// (0x0003095b) aid_sp_fs_text_primary

0x66e1,	// (0x00030964) aid_sp_fs_text_secondary

0xbe20,	// (0x000360a3) list_medium_line

0xbe20,	// (0x000360a3) list_medium_line_g2

0xbe20,	// (0x000360a3) list_medium_line_g3

0xbe20,	// (0x000360a3) list_medium_line_plain

0xbe20,	// (0x000360a3) list_medium_line_plain_t2

0xbe20,	// (0x000360a3) list_medium_line_plain_t3

0xbe20,	// (0x000360a3) list_medium_line_right_icon

0xbe20,	// (0x000360a3) list_medium_line_right_iconx2

0xbe20,	// (0x000360a3) list_medium_line_t2

0xbe20,	// (0x000360a3) list_medium_line_t2_g2

0xbe20,	// (0x000360a3) list_medium_line_t2_g3

0xbe20,	// (0x000360a3) list_medium_line_t2_right_icon

0xbe20,	// (0x000360a3) list_medium_line_t2_right_iconx2

0xbe20,	// (0x000360a3) list_medium_line_t3

0xbe20,	// (0x000360a3) list_medium_line_t3_g2

0xbe20,	// (0x000360a3) list_medium_line_t3_g3

0xbe20,	// (0x000360a3) list_medium_line_t3_right_iconx2

0xbe20,	// (0x000360a3) list_medium_line_t4_g4

0xbe20,	// (0x000360a3) list_medium_line_x2

0xbe20,	// (0x000360a3) list_medium_line_x2_t2_g2

0xbe20,	// (0x000360a3) list_medium_line_x2_t2_g3

0xbe20,	// (0x000360a3) list_medium_line_x2_t2_g4

0xbe20,	// (0x000360a3) list_medium_line_x2_t3

0xbe20,	// (0x000360a3) list_medium_line_x2_t3_g2

0xbe20,	// (0x000360a3) list_medium_line_x2_t3_g3

0xbe20,	// (0x000360a3) list_medium_line_x2_t3_g4

0xbe20,	// (0x000360a3) list_medium_line_x2_t4_g2

0xbe20,	// (0x000360a3) list_medium_line_x2_t4_g4

0xbe20,	// (0x000360a3) list_medium_line_x3

0xbe20,	// (0x000360a3) list_medium_line_x3_t4

0xbe20,	// (0x000360a3) list_medium_line_x3_t4_g4

0xbe20,	// (0x000360a3) list_medium_line_x4_t4

0xbe20,	// (0x000360a3) list_medium_line_x4_t4_g7

0xbe20,	// (0x000360a3) list_medium_line_x4_t5

0x66ea,	// (0x0003096d) list_single_fs_dyc_pane_ParamLimits

0x66ea,	// (0x0003096d) list_single_fs_dyc_pane

0xc521,	// (0x000367a4) list_medium_line_x4_t4_g7_g1_ParamLimits

0xc521,	// (0x000367a4) list_medium_line_x4_t4_g7_g1

0xc521,	// (0x000367a4) list_medium_line_x4_t4_g7_g2_ParamLimits

0xc521,	// (0x000367a4) list_medium_line_x4_t4_g7_g2

0xc521,	// (0x000367a4) list_medium_line_x4_t4_g7_g3_ParamLimits

0xc521,	// (0x000367a4) list_medium_line_x4_t4_g7_g3

0xc521,	// (0x000367a4) list_medium_line_x4_t4_g7_g4_ParamLimits

0xc521,	// (0x000367a4) list_medium_line_x4_t4_g7_g4

0xc521,	// (0x000367a4) list_medium_line_x4_t4_g7_g5_ParamLimits

0xc521,	// (0x000367a4) list_medium_line_x4_t4_g7_g5

0xc521,	// (0x000367a4) list_medium_line_x4_t4_g7_g6_ParamLimits

0xc521,	// (0x000367a4) list_medium_line_x4_t4_g7_g6

0xc52f,	// (0x000367b2) list_medium_line_x4_t4_g7_g7_ParamLimits

0xc52f,	// (0x000367b2) list_medium_line_x4_t4_g7_g7

0x0006,

0x0527,	// (0x0002a7aa) list_medium_line_x4_t4_g7_g_ParamLimits

0x0527,	// (0x0002a7aa) list_medium_line_x4_t4_g7_g

0xc569,	// (0x000367ec) list_medium_line_x4_t4_g7_t1_ParamLimits

0xc569,	// (0x000367ec) list_medium_line_x4_t4_g7_t1

0xc569,	// (0x000367ec) list_medium_line_x4_t4_g7_t2_ParamLimits

0xc569,	// (0x000367ec) list_medium_line_x4_t4_g7_t2

0xc569,	// (0x000367ec) list_medium_line_x4_t4_g7_t3_ParamLimits

0xc569,	// (0x000367ec) list_medium_line_x4_t4_g7_t3

0xc57d,	// (0x00036800) list_medium_line_x4_t4_g7_t4_ParamLimits

0xc57d,	// (0x00036800) list_medium_line_x4_t4_g7_t4

0xc57d,	// (0x00036800) list_medium_line_x4_t4_g7_t5_ParamLimits

0xc57d,	// (0x00036800) list_medium_line_x4_t4_g7_t5

0x0004,

0x0536,	// (0x0002a7b9) list_medium_line_x4_t4_g7_t_ParamLimits

0x0536,	// (0x0002a7b9) list_medium_line_x4_t4_g7_t

0x72c8,	// (0x0003154b) list_single_dyc_row_pane_ParamLimits

0x72c8,	// (0x0003154b) list_single_dyc_row_pane

0x7d34,	// (0x00031fb7) call5_gesture_pane_ParamLimits

0x7d34,	// (0x00031fb7) call5_gesture_pane

0x7d8a,	// (0x0003200d) call5_windows_pane_ParamLimits

0x7d8a,	// (0x0003200d) call5_windows_pane

0x7e76,	// (0x000320f9) call5_swipe_1_pane_cp_ParamLimits

0x7e76,	// (0x000320f9) call5_swipe_1_pane_cp

0x7e82,	// (0x00032105) call5_swipe_2_pane_cp_ParamLimits

0x7e82,	// (0x00032105) call5_swipe_2_pane_cp

0xc786,	// (0x00036a09) call5_image_pane_cp

0x7e8e,	// (0x00032111) popup_call5_audio_first_window_cp_ParamLimits

0x7e8e,	// (0x00032111) popup_call5_audio_first_window_cp

0x7e9c,	// (0x0003211f) call5_swipe_1_pane_g1_cp_ParamLimits

0x7e9c,	// (0x0003211f) call5_swipe_1_pane_g1_cp

0x7ea9,	// (0x0003212c) call5_swipe_1_pane_g2_cp

0x7eb1,	// (0x00032134) call5_swipe_1_pane_t1_cp_ParamLimits

0x7eb1,	// (0x00032134) call5_swipe_1_pane_t1_cp

0x7e9c,	// (0x0003211f) call5_swipe_2_pane_g1_cp_ParamLimits

0x7e9c,	// (0x0003211f) call5_swipe_2_pane_g1_cp

0x7ec6,	// (0x00032149) call5_swipe_2_pane_g2_cp

0x7ece,	// (0x00032151) call5_swipe_2_pane_t1_cp_ParamLimits

0x7ece,	// (0x00032151) call5_swipe_2_pane_t1_cp

0xc40e,	// (0x00036691) main_sp_fs_email_pane

0x7ee3,	// (0x00032166) main_sp_fs_listscroll_pane_te

0x7eec,	// (0x0003216f) popup_sp_fs_action_menu_pane_ParamLimits

0x7eec,	// (0x0003216f) popup_sp_fs_action_menu_pane

0xc55f,	// (0x000367e2) bg_sp_fs_ctrlbar_pane_g1

0x7f2e,	// (0x000321b1) bg_sp_fs_ctrlbar_ddmenu_pane_g1

0x7f37,	// (0x000321ba) bg_sp_fs_ctrlbar_ddmenu_pane_g2

0xe465,	// (0x000386e8) bg_sp_fs_ctrlbar_ddmenu_pane_g3

0xc55f,	// (0x000367e2) bg_sp_fs_ctrlbar_ddmenu_pane_g4

0x0003,

0xfb86,	// (0x00039e09) bg_sp_fs_ctrlbar_ddmenu_pane_g

0xe65d,	// (0x000388e0) bg_sp_fs_ctrlbar_ddmenu_pane_ParamLimits

0xe65d,	// (0x000388e0) bg_sp_fs_ctrlbar_ddmenu_pane

0x7f40,	// (0x000321c3) main_sp_fs_ctrlbar_ddmenu_pane_g1_ParamLimits

0x7f40,	// (0x000321c3) main_sp_fs_ctrlbar_ddmenu_pane_g1

0x7f4c,	// (0x000321cf) main_sp_fs_ctrlbar_ddmenu_pane_g2_ParamLimits

0x7f4c,	// (0x000321cf) main_sp_fs_ctrlbar_ddmenu_pane_g2

0x0001,

0xfb8f,	// (0x00039e12) main_sp_fs_ctrlbar_ddmenu_pane_g_ParamLimits

0xfb8f,	// (0x00039e12) main_sp_fs_ctrlbar_ddmenu_pane_g

0x7f58,	// (0x000321db) main_sp_fs_ctrlbar_ddmenu_pane_t1_ParamLimits

0x7f58,	// (0x000321db) main_sp_fs_ctrlbar_ddmenu_pane_t1

0xc55f,	// (0x000367e2) list_medium_line_t2_right_icon_g1

0xccc1,	// (0x00036f44) list_medium_line_t2_right_icon_t1

0xccc1,	// (0x00036f44) list_medium_line_t2_right_icon_t2

0x0001,

0xfb94,	// (0x00039e17) list_medium_line_t2_right_icon_t

0xd25e,	// (0x000374e1) bg_sp_fs_ctrlbar_pane_ParamLimits

0xd25e,	// (0x000374e1) bg_sp_fs_ctrlbar_pane

0x7ff2,	// (0x00032275) main_sp_fs_ctrlbar_button_pane_cp01

0x7ffc,	// (0x0003227f) main_sp_fs_ctrlbar_ddmenu_pane

0x8006,	// (0x00032289) main_sp_fs_ctrlbar_pane_g1

0x8012,	// (0x00032295) main_sp_fs_ctrlbar_pane_g2

0x0003,

0xfb99,	// (0x00039e1c) main_sp_fs_ctrlbar_pane_g

0x8052,	// (0x000322d5) main_sp_fs_ctrlbar_pane_t1

0x8091,	// (0x00032314) main_sp_fs_ctrlbar_pane

0x80d0,	// (0x00032353) main_sp_fs_listscroll_pane_te_cp01

0x80fa,	// (0x0003237d) popup_sp_fs_action_menu_pane_cp01_ParamLimits

0x80fa,	// (0x0003237d) popup_sp_fs_action_menu_pane_cp01

0xc40e,	// (0x00036691) bg_sp_fs_highlight_list_pane_cp01_ParamLimits

0xc40e,	// (0x00036691) bg_sp_fs_highlight_list_pane_cp01

0x811f,	// (0x000323a2) sp_fs_action_menu_list_gene_pane_g1_ParamLimits

0x811f,	// (0x000323a2) sp_fs_action_menu_list_gene_pane_g1

0x812e,	// (0x000323b1) sp_fs_action_menu_list_gene_pane_g2_ParamLimits

0x812e,	// (0x000323b1) sp_fs_action_menu_list_gene_pane_g2

0x0001,

0xfba7,	// (0x00039e2a) sp_fs_action_menu_list_gene_pane_g_ParamLimits

0xfba7,	// (0x00039e2a) sp_fs_action_menu_list_gene_pane_g

0x813b,	// (0x000323be) sp_fs_action_menu_list_gene_pane_t1_ParamLimits

0x813b,	// (0x000323be) sp_fs_action_menu_list_gene_pane_t1

0x8153,	// (0x000323d6) sp_fs_action_menu_list_gene_pane_ParamLimits

0x8153,	// (0x000323d6) sp_fs_action_menu_list_gene_pane

0x8172,	// (0x000323f5) popup_sp_fs_action_menu_bg_pane_ParamLimits

0x8172,	// (0x000323f5) popup_sp_fs_action_menu_bg_pane

0x8180,	// (0x00032403) sp_fs_action_menu_list_pane_ParamLimits

0x8180,	// (0x00032403) sp_fs_action_menu_list_pane

0x81a0,	// (0x00032423) sp_fs_scroll_pane_cp01_ParamLimits

0x81a0,	// (0x00032423) sp_fs_scroll_pane_cp01

0xccc1,	// (0x00036f44) list_medium_line_plain_t2_t1

0xccc1,	// (0x00036f44) list_medium_line_plain_t2_t2

0x0001,

0xfb94,	// (0x00039e17) list_medium_line_plain_t2_t

0xccc1,	// (0x00036f44) list_medium_line_plain_t3_t1

0xccc1,	// (0x00036f44) list_medium_line_plain_t3_t2

0xccc1,	// (0x00036f44) list_medium_line_plain_t3_t3

0x0002,

0xf277,	// (0x000394fa) list_medium_line_plain_t3_t

0xc521,	// (0x000367a4) list_medium_line_x2_t2_g2_g1_ParamLimits

0xc521,	// (0x000367a4) list_medium_line_x2_t2_g2_g1

0xc521,	// (0x000367a4) list_medium_line_x2_t2_g2_g2_ParamLimits

0xc521,	// (0x000367a4) list_medium_line_x2_t2_g2_g2

0x0001,

0xf1bc,	// (0x0003943f) list_medium_line_x2_t2_g2_g_ParamLimits

0xf1bc,	// (0x0003943f) list_medium_line_x2_t2_g2_g

0xc569,	// (0x000367ec) list_medium_line_x2_t2_g2_t1_ParamLimits

0xc569,	// (0x000367ec) list_medium_line_x2_t2_g2_t1

0xc569,	// (0x000367ec) list_medium_line_x2_t2_g2_t2_ParamLimits

0xc569,	// (0x000367ec) list_medium_line_x2_t2_g2_t2

0x0001,

0xf191,	// (0x00039414) list_medium_line_x2_t2_g2_t_ParamLimits

0xf191,	// (0x00039414) list_medium_line_x2_t2_g2_t

0xc521,	// (0x000367a4) list_medium_line_x2_t4_g2_g1_ParamLimits

0xc521,	// (0x000367a4) list_medium_line_x2_t4_g2_g1

0xc521,	// (0x000367a4) list_medium_line_x2_t4_g2_g2_ParamLimits

0xc521,	// (0x000367a4) list_medium_line_x2_t4_g2_g2

0x0001,

0xf1bc,	// (0x0003943f) list_medium_line_x2_t4_g2_g_ParamLimits

0xf1bc,	// (0x0003943f) list_medium_line_x2_t4_g2_g

0xc569,	// (0x000367ec) list_medium_line_x2_t4_g2_t1_ParamLimits

0xc569,	// (0x000367ec) list_medium_line_x2_t4_g2_t1

0xc569,	// (0x000367ec) list_medium_line_x2_t4_g2_t2_ParamLimits

0xc569,	// (0x000367ec) list_medium_line_x2_t4_g2_t2

0xc569,	// (0x000367ec) list_medium_line_x2_t4_g2_t3_ParamLimits

0xc569,	// (0x000367ec) list_medium_line_x2_t4_g2_t3

0xc569,	// (0x000367ec) list_medium_line_x2_t4_g2_t4_ParamLimits

0xc569,	// (0x000367ec) list_medium_line_x2_t4_g2_t4

0x0003,

0xf1ca,	// (0x0003944d) list_medium_line_x2_t4_g2_t_ParamLimits

0xf1ca,	// (0x0003944d) list_medium_line_x2_t4_g2_t

0xc55f,	// (0x000367e2) list_medium_line_t3_right_iconx2_g1

0xc55f,	// (0x000367e2) list_medium_line_t3_right_iconx2_g2

0xc55f,	// (0x000367e2) list_medium_line_t3_right_iconx2_g3

0x0002,

0xf393,	// (0x00039616) list_medium_line_t3_right_iconx2_g

0xccc1,	// (0x00036f44) list_medium_line_t3_right_iconx2_t1

0xccc1,	// (0x00036f44) list_medium_line_t3_right_iconx2_t2

0x0001,

0xfb94,	// (0x00039e17) list_medium_line_t3_right_iconx2_t

0xc521,	// (0x000367a4) list_medium_line_x3_t4_g4_g1_ParamLimits

0xc521,	// (0x000367a4) list_medium_line_x3_t4_g4_g1

0xc521,	// (0x000367a4) list_medium_line_x3_t4_g4_g2_ParamLimits

0xc521,	// (0x000367a4) list_medium_line_x3_t4_g4_g2

0xc521,	// (0x000367a4) list_medium_line_x3_t4_g4_g3_ParamLimits

0xc521,	// (0x000367a4) list_medium_line_x3_t4_g4_g3

0xc521,	// (0x000367a4) list_medium_line_x3_t4_g4_g4_ParamLimits

0xc521,	// (0x000367a4) list_medium_line_x3_t4_g4_g4

0x0003,

0xf1c1,	// (0x00039444) list_medium_line_x3_t4_g4_g_ParamLimits

0xf1c1,	// (0x00039444) list_medium_line_x3_t4_g4_g

0xc569,	// (0x000367ec) list_medium_line_x3_t4_g4_t1_ParamLimits

0xc569,	// (0x000367ec) list_medium_line_x3_t4_g4_t1

0xc569,	// (0x000367ec) list_medium_line_x3_t4_g4_t2_ParamLimits

0xc569,	// (0x000367ec) list_medium_line_x3_t4_g4_t2

0xc569,	// (0x000367ec) list_medium_line_x3_t4_g4_t3_ParamLimits

0xc569,	// (0x000367ec) list_medium_line_x3_t4_g4_t3

0xc569,	// (0x000367ec) list_medium_line_x3_t4_g4_t4_ParamLimits

0xc569,	// (0x000367ec) list_medium_line_x3_t4_g4_t4

0x0003,

0xf1ca,	// (0x0003944d) list_medium_line_x3_t4_g4_t_ParamLimits

0xf1ca,	// (0x0003944d) list_medium_line_x3_t4_g4_t

0x81c6,	// (0x00032449) list_single_dyc_row_text_pane_t1_ParamLimits

0x81c6,	// (0x00032449) list_single_dyc_row_text_pane_t1

0x820f,	// (0x00032492) list_single_dyc_row_text_pane_t2_ParamLimits

0x820f,	// (0x00032492) list_single_dyc_row_text_pane_t2

0x8285,	// (0x00032508) list_single_dyc_row_text_pane_t3_ParamLimits

0x8285,	// (0x00032508) list_single_dyc_row_text_pane_t3

0x0005,

0xfbac,	// (0x00039e2f) list_single_dyc_row_text_pane_t_ParamLimits

0xfbac,	// (0x00039e2f) list_single_dyc_row_text_pane_t

0x8368,	// (0x000325eb) list_single_dyc_row_pane_g1_ParamLimits

0x8368,	// (0x000325eb) list_single_dyc_row_pane_g1

0x8374,	// (0x000325f7) list_single_dyc_row_pane_g2_ParamLimits

0x8374,	// (0x000325f7) list_single_dyc_row_pane_g2

0x8380,	// (0x00032603) list_single_dyc_row_pane_g3_ParamLimits

0x8380,	// (0x00032603) list_single_dyc_row_pane_g3

0x838c,	// (0x0003260f) list_single_dyc_row_pane_g4_ParamLimits

0x838c,	// (0x0003260f) list_single_dyc_row_pane_g4

0x0003,

0xfbb9,	// (0x00039e3c) list_single_dyc_row_pane_g_ParamLimits

0xfbb9,	// (0x00039e3c) list_single_dyc_row_pane_g

0x8398,	// (0x0003261b) list_single_dyc_row_text_pane_ParamLimits

0x8398,	// (0x0003261b) list_single_dyc_row_text_pane

0xbe20,	// (0x000360a3) bg_sp_fs_scroll_pane

0x83b7,	// (0x0003263a) thumb_sp_fs_scroll_pane

0xc521,	// (0x000367a4) list_medium_line_g1_ParamLimits

0xc521,	// (0x000367a4) list_medium_line_g1

0xc569,	// (0x000367ec) list_medium_line_t1_ParamLimits

0xc569,	// (0x000367ec) list_medium_line_t1

0xc521,	// (0x000367a4) list_medium_line_x2_g1_ParamLimits

0xc521,	// (0x000367a4) list_medium_line_x2_g1

0xc521,	// (0x000367a4) list_medium_line_x2_g2_ParamLimits

0xc521,	// (0x000367a4) list_medium_line_x2_g2

0x0001,

0xf1bc,	// (0x0003943f) list_medium_line_x2_g_ParamLimits

0xf1bc,	// (0x0003943f) list_medium_line_x2_g

0xc569,	// (0x000367ec) list_medium_line_x2_t1_ParamLimits

0xc569,	// (0x000367ec) list_medium_line_x2_t1

0xc521,	// (0x000367a4) list_medium_line_x3_g1_ParamLimits

0xc521,	// (0x000367a4) list_medium_line_x3_g1

0x542b,	// (0x0002f6ae) list_medium_line_x3_g2_ParamLimits

0x542b,	// (0x0002f6ae) list_medium_line_x3_g2

0x0001,

0xfbc2,	// (0x00039e45) list_medium_line_x3_g_ParamLimits

0xfbc2,	// (0x00039e45) list_medium_line_x3_g

0x83c0,	// (0x00032643) list_medium_line_x3_t1_ParamLimits

0x83c0,	// (0x00032643) list_medium_line_x3_t1

0x83d4,	// (0x00032657) thumb_sp_fs_scroll_pane_g1

0x83dd,	// (0x00032660) thumb_sp_fs_scroll_pane_g2

0x83e6,	// (0x00032669) thumb_sp_fs_scroll_pane_g3

0x0002,

0xfbc7,	// (0x00039e4a) thumb_sp_fs_scroll_pane_g

0x83d4,	// (0x00032657) bg_sp_fs_scroll_pane_g1

0x83dd,	// (0x00032660) bg_sp_fs_scroll_pane_g2

0x83e6,	// (0x00032669) bg_sp_fs_scroll_pane_g3

0x0002,

0xfbc7,	// (0x00039e4a) bg_sp_fs_scroll_pane_g

0xc521,	// (0x000367a4) list_medium_line_x2_t3_g4_g1_ParamLimits

0xc521,	// (0x000367a4) list_medium_line_x2_t3_g4_g1

0xc521,	// (0x000367a4) list_medium_line_x2_t3_g4_g2_ParamLimits

0xc521,	// (0x000367a4) list_medium_line_x2_t3_g4_g2

0xc521,	// (0x000367a4) list_medium_line_x2_t3_g4_g3_ParamLimits

0xc521,	// (0x000367a4) list_medium_line_x2_t3_g4_g3

0xc521,	// (0x000367a4) list_medium_line_x2_t3_g4_g4_ParamLimits

0xc521,	// (0x000367a4) list_medium_line_x2_t3_g4_g4

0x0003,

0xf1c1,	// (0x00039444) list_medium_line_x2_t3_g4_g_ParamLimits

0xf1c1,	// (0x00039444) list_medium_line_x2_t3_g4_g

0xc569,	// (0x000367ec) list_medium_line_x2_t3_g4_t1_ParamLimits

0xc569,	// (0x000367ec) list_medium_line_x2_t3_g4_t1

0xc569,	// (0x000367ec) list_medium_line_x2_t3_g4_t2_ParamLimits

0xc569,	// (0x000367ec) list_medium_line_x2_t3_g4_t2

0xc569,	// (0x000367ec) list_medium_line_x2_t3_g4_t3_ParamLimits

0xc569,	// (0x000367ec) list_medium_line_x2_t3_g4_t3

0x0002,

0xf1b5,	// (0x00039438) list_medium_line_x2_t3_g4_t_ParamLimits

0xf1b5,	// (0x00039438) list_medium_line_x2_t3_g4_t

0xc521,	// (0x000367a4) list_medium_line_g2_g1_ParamLimits

0xc521,	// (0x000367a4) list_medium_line_g2_g1

0xc521,	// (0x000367a4) list_medium_line_g2_g2_ParamLimits

0xc521,	// (0x000367a4) list_medium_line_g2_g2

0x0001,

0xf1bc,	// (0x0003943f) list_medium_line_g2_g_ParamLimits

0xf1bc,	// (0x0003943f) list_medium_line_g2_g

0xc569,	// (0x000367ec) list_medium_line_g2_t1_ParamLimits

0xc569,	// (0x000367ec) list_medium_line_g2_t1

0xc521,	// (0x000367a4) list_medium_line_t3_g2_g1_ParamLimits

0xc521,	// (0x000367a4) list_medium_line_t3_g2_g1

0xc521,	// (0x000367a4) list_medium_line_t3_g2_g2_ParamLimits

0xc521,	// (0x000367a4) list_medium_line_t3_g2_g2

0x0001,

0xf1bc,	// (0x0003943f) list_medium_line_t3_g2_g_ParamLimits

0xf1bc,	// (0x0003943f) list_medium_line_t3_g2_g

0xc569,	// (0x000367ec) list_medium_line_t3_g2_t1_ParamLimits

0xc569,	// (0x000367ec) list_medium_line_t3_g2_t1

0xc569,	// (0x000367ec) list_medium_line_t3_g2_t2_ParamLimits

0xc569,	// (0x000367ec) list_medium_line_t3_g2_t2

0xc569,	// (0x000367ec) list_medium_line_t3_g2_t3_ParamLimits

0xc569,	// (0x000367ec) list_medium_line_t3_g2_t3

0x0002,

0xf1b5,	// (0x00039438) list_medium_line_t3_g2_t_ParamLimits

0xf1b5,	// (0x00039438) list_medium_line_t3_g2_t

0xc55f,	// (0x000367e2) list_medium_line_right_icon_g1

0xccc1,	// (0x00036f44) list_medium_line_right_icon_t1

0xc521,	// (0x000367a4) list_medium_line_t2_g1_ParamLimits

0xc521,	// (0x000367a4) list_medium_line_t2_g1

0xc569,	// (0x000367ec) list_medium_line_t2_t1_ParamLimits

0xc569,	// (0x000367ec) list_medium_line_t2_t1

0xc569,	// (0x000367ec) list_medium_line_t2_t2_ParamLimits

0xc569,	// (0x000367ec) list_medium_line_t2_t2

0x0001,

0xf191,	// (0x00039414) list_medium_line_t2_t_ParamLimits

0xf191,	// (0x00039414) list_medium_line_t2_t

0xc521,	// (0x000367a4) list_medium_line_t3_g1_ParamLimits

0xc521,	// (0x000367a4) list_medium_line_t3_g1

0xc569,	// (0x000367ec) list_medium_line_t3_t1_ParamLimits

0xc569,	// (0x000367ec) list_medium_line_t3_t1

0xc569,	// (0x000367ec) list_medium_line_t3_t2_ParamLimits

0xc569,	// (0x000367ec) list_medium_line_t3_t2

0xc569,	// (0x000367ec) list_medium_line_t3_t3_ParamLimits

0xc569,	// (0x000367ec) list_medium_line_t3_t3

0x0002,

0xf1b5,	// (0x00039438) list_medium_line_t3_t_ParamLimits

0xf1b5,	// (0x00039438) list_medium_line_t3_t

0xc521,	// (0x000367a4) list_medium_line_g3_g1_ParamLimits

0xc521,	// (0x000367a4) list_medium_line_g3_g1

0xc521,	// (0x000367a4) list_medium_line_g3_g2_ParamLimits

0xc521,	// (0x000367a4) list_medium_line_g3_g2

0xc521,	// (0x000367a4) list_medium_line_g3_g3_ParamLimits

0xc521,	// (0x000367a4) list_medium_line_g3_g3

0x0002,

0xf1ae,	// (0x00039431) list_medium_line_g3_g_ParamLimits

0xf1ae,	// (0x00039431) list_medium_line_g3_g

0xc569,	// (0x000367ec) list_medium_line_g3_t1_ParamLimits

0xc569,	// (0x000367ec) list_medium_line_g3_t1

0xc521,	// (0x000367a4) list_medium_line_t2_g3_g1_ParamLimits

0xc521,	// (0x000367a4) list_medium_line_t2_g3_g1

0xc521,	// (0x000367a4) list_medium_line_t2_g3_g2_ParamLimits

0xc521,	// (0x000367a4) list_medium_line_t2_g3_g2

0xc521,	// (0x000367a4) list_medium_line_t2_g3_g3_ParamLimits

0xc521,	// (0x000367a4) list_medium_line_t2_g3_g3

0x0002,

0xf1ae,	// (0x00039431) list_medium_line_t2_g3_g_ParamLimits

0xf1ae,	// (0x00039431) list_medium_line_t2_g3_g

0xc569,	// (0x000367ec) list_medium_line_t2_g3_t1_ParamLimits

0xc569,	// (0x000367ec) list_medium_line_t2_g3_t1

0xc569,	// (0x000367ec) list_medium_line_t2_g3_t2_ParamLimits

0xc569,	// (0x000367ec) list_medium_line_t2_g3_t2

0x0001,

0xf191,	// (0x00039414) list_medium_line_t2_g3_t_ParamLimits

0xf191,	// (0x00039414) list_medium_line_t2_g3_t

0xc521,	// (0x000367a4) list_medium_line_t3_g3_g1_ParamLimits

0xc521,	// (0x000367a4) list_medium_line_t3_g3_g1

0xc521,	// (0x000367a4) list_medium_line_t3_g3_g2_ParamLimits

0xc521,	// (0x000367a4) list_medium_line_t3_g3_g2

0xc521,	// (0x000367a4) list_medium_line_t3_g3_g3_ParamLimits

0xc521,	// (0x000367a4) list_medium_line_t3_g3_g3

0x0002,

0xf1ae,	// (0x00039431) list_medium_line_t3_g3_g_ParamLimits

0xf1ae,	// (0x00039431) list_medium_line_t3_g3_g

0xc569,	// (0x000367ec) list_medium_line_t3_g3_t1_ParamLimits

0xc569,	// (0x000367ec) list_medium_line_t3_g3_t1

0xc569,	// (0x000367ec) list_medium_line_t3_g3_t2_ParamLimits

0xc569,	// (0x000367ec) list_medium_line_t3_g3_t2

0xc569,	// (0x000367ec) list_medium_line_t3_g3_t3_ParamLimits

0xc569,	// (0x000367ec) list_medium_line_t3_g3_t3

0x0002,

0xf1b5,	// (0x00039438) list_medium_line_t3_g3_t_ParamLimits

0xf1b5,	// (0x00039438) list_medium_line_t3_g3_t

0xc55f,	// (0x000367e2) list_medium_line_right_iconx2_g1

0xc55f,	// (0x000367e2) list_medium_line_right_iconx2_g2

0x0001,

0xf0af,	// (0x00039332) list_medium_line_right_iconx2_g

0xccc1,	// (0x00036f44) list_medium_line_right_iconx2_t1

0xc55f,	// (0x000367e2) list_medium_line_t2_right_iconx2_g1

0xc55f,	// (0x000367e2) list_medium_line_t2_right_iconx2_g2

0x0001,

0xf0af,	// (0x00039332) list_medium_line_t2_right_iconx2_g

0xccc1,	// (0x00036f44) list_medium_line_t2_right_iconx2_t1

0xccc1,	// (0x00036f44) list_medium_line_t2_right_iconx2_t2

0x0001,

0xfb94,	// (0x00039e17) list_medium_line_t2_right_iconx2_t

0xccc1,	// (0x00036f44) list_medium_line_x4_t4_t1

0xccc1,	// (0x00036f44) list_medium_line_x4_t4_t2

0xccc1,	// (0x00036f44) list_medium_line_x4_t4_t3

0xccc1,	// (0x00036f44) list_medium_line_x4_t4_t4

0x0003,

0xf27e,	// (0x00039501) list_medium_line_x4_t4_t

0x8432,	// (0x000326b5) tport_appsw_pane_ParamLimits

0x8432,	// (0x000326b5) tport_appsw_pane

0x844a,	// (0x000326cd) tport_contact_pane_ParamLimits

0x844a,	// (0x000326cd) tport_contact_pane

0x8462,	// (0x000326e5) tport_listscroll_pane_ParamLimits

0x8462,	// (0x000326e5) tport_listscroll_pane

0x847c,	// (0x000326ff) cell_tport_appsw_pane_ParamLimits

0x847c,	// (0x000326ff) cell_tport_appsw_pane

0xd23c,	// (0x000374bf) tport_appsw_pane_g1_ParamLimits

0xd23c,	// (0x000374bf) tport_appsw_pane_g1

0x84bc,	// (0x0003273f) tport_contact_pane_g1

0x84c5,	// (0x00032748) tport_contact_pane_t1

0x84d3,	// (0x00032756) tport_contact_pane_t2

0x0001,

0xfbce,	// (0x00039e51) tport_contact_pane_t

0x84e1,	// (0x00032764) list_tport_pane

0x84ea,	// (0x0003276d) scroll_pane_cp_030

0x84fb,	// (0x0003277e) cell_tport_appsw_pane_g1

0x850b,	// (0x0003278e) cell_tport_appsw_pane_t1

0x8519,	// (0x0003279c) grid_highlight_pane_cp019

0x8521,	// (0x000327a4) list_tport_double_graphic_pane_ParamLimits

0x8521,	// (0x000327a4) list_tport_double_graphic_pane

0xc40e,	// (0x00036691) list_highlight_pane_cp023_ParamLimits

0xc40e,	// (0x00036691) list_highlight_pane_cp023

0x852e,	// (0x000327b1) list_tport_double_graphic_pane_g1_ParamLimits

0x852e,	// (0x000327b1) list_tport_double_graphic_pane_g1

0x853b,	// (0x000327be) list_tport_double_graphic_pane_t1_ParamLimits

0x853b,	// (0x000327be) list_tport_double_graphic_pane_t1

0x8550,	// (0x000327d3) list_tport_double_graphic_pane_t2_ParamLimits

0x8550,	// (0x000327d3) list_tport_double_graphic_pane_t2

0x0001,

0xfbda,	// (0x00039e5d) list_tport_double_graphic_pane_t_ParamLimits

0xfbda,	// (0x00039e5d) list_tport_double_graphic_pane_t

0xbe20,	// (0x000360a3) main_cale_note_pane

0x1933,	// (0x0002bbb6) cell_vitu2_function_top_wide_pane_cp01_ParamLimits

0x1933,	// (0x0002bbb6) cell_vitu2_function_top_wide_pane_cp01

0x7928,	// (0x00031bab) wait_bar_pane_cp05_ParamLimits

0xc40e,	// (0x00036691) listscroll_cmail_pane

0x856a,	// (0x000327ed) list_cmail_pane

0x8581,	// (0x00032804) list_cmail_body_pane

0x8597,	// (0x0003281a) list_single_cmail_header_caption_pane

0x85ae,	// (0x00032831) list_single_cmail_header_detail_pane_ParamLimits

0x85ae,	// (0x00032831) list_single_cmail_header_detail_pane

0x85dc,	// (0x0003285f) list_single_cmail_header_caption_pane_t1

0x85f3,	// (0x00032876) list_single_cmail_header_detail_pane_g1_ParamLimits

0x85f3,	// (0x00032876) list_single_cmail_header_detail_pane_g1

0x860b,	// (0x0003288e) list_single_cmail_header_detail_pane_g2_ParamLimits

0x860b,	// (0x0003288e) list_single_cmail_header_detail_pane_g2

0x0002,

0xfbdf,	// (0x00039e62) list_single_cmail_header_detail_pane_g_ParamLimits

0xfbdf,	// (0x00039e62) list_single_cmail_header_detail_pane_g

0x8624,	// (0x000328a7) list_single_cmail_header_detail_pane_t1_ParamLimits

0x8624,	// (0x000328a7) list_single_cmail_header_detail_pane_t1

0x8686,	// (0x00032909) list_single_cmail_header_editor_pane_bg_ParamLimits

0x8686,	// (0x00032909) list_single_cmail_header_editor_pane_bg

0x7794,	// (0x00031a17) list_cmail_body_pane_g1

0x869f,	// (0x00032922) list_cmail_body_pane_t1

0x54e7,	// (0x0002f76a) list_single_cmail_header_editor_pane_bg_g1

0xc99f,	// (0x00036c22) list_single_cmail_header_editor_pane_bg_g1_copy1

0x54f7,	// (0x0002f77a) list_single_cmail_header_editor_pane_bg_g1_copy2

0x54ef,	// (0x0002f772) list_single_cmail_header_editor_pane_bg_g1_copy3

0x5e1f,	// (0x000300a2) list_single_cmail_header_editor_pane_bg_g1_copy4

0x5517,	// (0x0002f79a) list_single_cmail_header_editor_pane_bg_g1_copy4_copy1

0x5507,	// (0x0002f78a) list_single_cmail_header_editor_pane_bg_g1_copy4_copy2

0x550f,	// (0x0002f792) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3

0xc97f,	// (0x00036c02) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3_copy1

0x86ad,	// (0x00032930) calenote_gesture_pane_ParamLimits

0x86ad,	// (0x00032930) calenote_gesture_pane

0x86cd,	// (0x00032950) calenote_window_pane_ParamLimits

0x86cd,	// (0x00032950) calenote_window_pane

0x86e9,	// (0x0003296c) popup_note_window_cp01

0x86f2,	// (0x00032975) calenote_swipe_1_pane_ParamLimits

0x86f2,	// (0x00032975) calenote_swipe_1_pane

0x7e82,	// (0x00032105) calenote_swipe_2_pane_ParamLimits

0x7e82,	// (0x00032105) calenote_swipe_2_pane

0x7e9c,	// (0x0003211f) calenote_swipe_1_pane_g1_ParamLimits

0x7e9c,	// (0x0003211f) calenote_swipe_1_pane_g1

0x8710,	// (0x00032993) calenote_swipe_1_pane_g2_ParamLimits

0x8710,	// (0x00032993) calenote_swipe_1_pane_g2

0x0001,

0xfbeb,	// (0x00039e6e) calenote_swipe_1_pane_g_ParamLimits

0xfbeb,	// (0x00039e6e) calenote_swipe_1_pane_g

0x871c,	// (0x0003299f) calenote_swipe_1_pane_t1_ParamLimits

0x871c,	// (0x0003299f) calenote_swipe_1_pane_t1

0x7e9c,	// (0x0003211f) calenote_swipe_2_pane_g1_ParamLimits

0x7e9c,	// (0x0003211f) calenote_swipe_2_pane_g1

0x873b,	// (0x000329be) calenote_swipe_2_pane_g2_ParamLimits

0x873b,	// (0x000329be) calenote_swipe_2_pane_g2

0x0001,

0xfbf0,	// (0x00039e73) calenote_swipe_2_pane_g_ParamLimits

0xfbf0,	// (0x00039e73) calenote_swipe_2_pane_g

0x8747,	// (0x000329ca) calenote_swipe_2_pane_t1_ParamLimits

0x8747,	// (0x000329ca) calenote_swipe_2_pane_t1

0xbe20,	// (0x000360a3) main_mup_navstr_pane

0x4b8b,	// (0x0002ee0e) main_mup3_pane_t7_ParamLimits

0x4b8b,	// (0x0002ee0e) main_mup3_pane_t7

0xb58d,	// (0x00035810) main_mp4_pane_g6_ParamLimits

0xb58d,	// (0x00035810) main_mp4_pane_g6

0xb7b7,	// (0x00035a3a) main_image3_pane_t4_ParamLimits

0xb7b7,	// (0x00035a3a) main_image3_pane_t4

0x876e,	// (0x000329f1) popup_navstr_preview_pane_ParamLimits

0x876e,	// (0x000329f1) popup_navstr_preview_pane

0x8782,	// (0x00032a05) scroll_navstr_pane_ParamLimits

0x8782,	// (0x00032a05) scroll_navstr_pane

0xbe20,	// (0x000360a3) bg_popup_preview_window_pane_cp04

0x8796,	// (0x00032a19) popup_navstr_preview_pane_t1

0x87a4,	// (0x00032a27) scroll_navstr_pane_g1_ParamLimits

0x87a4,	// (0x00032a27) scroll_navstr_pane_g1

0x87b8,	// (0x00032a3b) scroll_navstr_pane_t1_ParamLimits

0x87b8,	// (0x00032a3b) scroll_navstr_pane_t1

0x8707,	// (0x0003298a) bg_button_pane_cp014

0x8707,	// (0x0003298a) bg_button_pane_cp030

0x7cda,	// (0x00031f5d) list_double_fisheye_pane_g4_ParamLimits

0x7cda,	// (0x00031f5d) list_double_fisheye_pane_g4

0x7ce6,	// (0x00031f69) list_double_fisheye_pane_g5_ParamLimits

0x7ce6,	// (0x00031f69) list_double_fisheye_pane_g5

0x339d,	// (0x0002d620) sp_fs_scroll_pane_cp03

0x8006,	// (0x00032289) main_sp_fs_ctrlbar_pane_g1_ParamLimits

0x8012,	// (0x00032295) main_sp_fs_ctrlbar_pane_g2_ParamLimits

0xfb99,	// (0x00039e1c) main_sp_fs_ctrlbar_pane_g_ParamLimits

0x8052,	// (0x000322d5) main_sp_fs_ctrlbar_pane_t1_ParamLimits

0x8579,	// (0x000327fc) sp_fs_scroll_pane_cp02

0xc6ce,	// (0x00036951) popup_sp_fs_calendar_preview_list_single_pane_ParamLimits

0xc6ce,	// (0x00036951) popup_sp_fs_calendar_preview_list_single_pane

0xbe20,	// (0x000360a3) main_cam6_pano_pane

0xb21b,	// (0x0003549e) main_mup3_pane_ParamLimits

0xbe20,	// (0x000360a3) main_phacti_pane

0x77fb,	// (0x00031a7e) bg_button_pane_cp11

0x7815,	// (0x00031a98) main_mobtv_info_pane_g2_ParamLimits

0x7815,	// (0x00031a98) main_mobtv_info_pane_g2

0x0001,

0xfb0b,	// (0x00039d8e) main_mobtv_info_pane_g_ParamLimits

0xfb0b,	// (0x00039d8e) main_mobtv_info_pane_g

0xc569,	// (0x000367ec) sc_clock_pane_t5_ParamLimits

0xc569,	// (0x000367ec) sc_clock_pane_t5

0xd23c,	// (0x000374bf) main_radioblah_pane_g1_ParamLimits

0xd24a,	// (0x000374cd) main_radioblah_pane_t3_ParamLimits

0xd24a,	// (0x000374cd) main_radioblah_pane_t3

0xd24a,	// (0x000374cd) main_radioblah_pane_t4_ParamLimits

0xd24a,	// (0x000374cd) main_radioblah_pane_t4

0xc40e,	// (0x00036691) main_radioblah_text_pane_ParamLimits

0xc40e,	// (0x00036691) main_radioblah_text_pane

0x7bf5,	// (0x00031e78) main_radioblah_info_pane_g1_ParamLimits

0x7c39,	// (0x00031ebc) main_radioblah_info_pane_t4_ParamLimits

0x7c39,	// (0x00031ebc) main_radioblah_info_pane_t4

0xc40e,	// (0x00036691) main_sp_fs_calendar_pane

0x87cf,	// (0x00032a52) main_phacti_pane_g1

0x87e0,	// (0x00032a63) phacti_note_pane_ParamLimits

0x87e0,	// (0x00032a63) phacti_note_pane

0x87f4,	// (0x00032a77) phacti_term_pane_ParamLimits

0x87f4,	// (0x00032a77) phacti_term_pane

0x8809,	// (0x00032a8c) phacti_note_pane_t1_ParamLimits

0x8809,	// (0x00032a8c) phacti_note_pane_t1

0x8820,	// (0x00032aa3) phacti_term_pane_g1

0x8828,	// (0x00032aab) phacti_term_pane_t1_ParamLimits

0x8828,	// (0x00032aab) phacti_term_pane_t1

0x8852,	// (0x00032ad5) popup_sp_fs_calendar_preview_list_single_pane_g1

0x885a,	// (0x00032add) popup_sp_fs_calendar_preview_list_single_pane_g2

0x0001,

0xfbfa,	// (0x00039e7d) popup_sp_fs_calendar_preview_list_single_pane_g

0x8862,	// (0x00032ae5) popup_sp_fs_calendar_preview_list_single_pane_t1_ParamLimits

0x8862,	// (0x00032ae5) popup_sp_fs_calendar_preview_list_single_pane_t1

0x8878,	// (0x00032afb) aid_popup_sp_fs_bg_corner_pane

0xc55f,	// (0x000367e2) popup_sp_fs_calendar_preview_bg_pane_g1

0xbe20,	// (0x000360a3) popup_sp_fs_calendar_preview_bg_pane

0x8880,	// (0x00032b03) popup_sp_fs_calendar_preview_list_pane

0xd25e,	// (0x000374e1) bg_main_sp_fs_cale_pane_ParamLimits

0xd25e,	// (0x000374e1) bg_main_sp_fs_cale_pane

0x88f2,	// (0x00032b75) listscroll_cale_mrui_pane_ParamLimits

0x88f2,	// (0x00032b75) listscroll_cale_mrui_pane

0x8907,	// (0x00032b8a) listscroll_sp_fs_schedule_track_pane

0x8910,	// (0x00032b93) main_sp_fs_ctrlbar_pane_cp01_ParamLimits

0x8910,	// (0x00032b93) main_sp_fs_ctrlbar_pane_cp01

0x8923,	// (0x00032ba6) main_sp_fs_ribbon_pane

0x892b,	// (0x00032bae) popup_sp_fs_cale_preview_window

0x893d,	// (0x00032bc0) list_single_sp_fs_schedule_track_pane_ParamLimits

0x893d,	// (0x00032bc0) list_single_sp_fs_schedule_track_pane

0xc40e,	// (0x00036691) bg_sp_fs_highlight_list_pane_cp03_ParamLimits

0xc40e,	// (0x00036691) bg_sp_fs_highlight_list_pane_cp03

0x8951,	// (0x00032bd4) list_single_sp_fs_schedule_track_pane_g1_ParamLimits

0x8951,	// (0x00032bd4) list_single_sp_fs_schedule_track_pane_g1

0x895d,	// (0x00032be0) list_single_sp_fs_schedule_track_pane_g2_ParamLimits

0x895d,	// (0x00032be0) list_single_sp_fs_schedule_track_pane_g2

0x0001,

0x031b,	// (0x0002a59e) list_single_sp_fs_schedule_track_pane_g_ParamLimits

0x031b,	// (0x0002a59e) list_single_sp_fs_schedule_track_pane_g

0x8969,	// (0x00032bec) list_single_sp_fs_schedule_track_pane_t1_ParamLimits

0x8969,	// (0x00032bec) list_single_sp_fs_schedule_track_pane_t1

0x8983,	// (0x00032c06) sp_fs_schedule_track_pane_ParamLimits

0x8983,	// (0x00032c06) sp_fs_schedule_track_pane

0x8994,	// (0x00032c17) sp_fs_schedule_track_pane_g1

0x899c,	// (0x00032c1f) sp_fs_schedule_track_pane_g2

0x89a4,	// (0x00032c27) sp_fs_schedule_track_pane_g3

0x89ac,	// (0x00032c2f) sp_fs_schedule_track_pane_g4

0x89b4,	// (0x00032c37) sp_fs_schedule_track_pane_g5

0x0004,

0xfbff,	// (0x00039e82) sp_fs_schedule_track_pane_g

0x54e7,	// (0x0002f76a) bg_sp_fs_schedule_viewer_highlight_g1

0xc99f,	// (0x00036c22) bg_sp_fs_schedule_viewer_highlight_g2

0x54ef,	// (0x0002f772) bg_sp_fs_schedule_viewer_highlight_g3

0x54f7,	// (0x0002f77a) bg_sp_fs_schedule_viewer_highlight_g4

0x5e1f,	// (0x000300a2) bg_sp_fs_schedule_viewer_highlight_g5

0x5507,	// (0x0002f78a) bg_sp_fs_schedule_viewer_highlight_g6

0x550f,	// (0x0002f792) bg_sp_fs_schedule_viewer_highlight_g7

0x5517,	// (0x0002f79a) bg_sp_fs_schedule_viewer_highlight_g8

0xc97f,	// (0x00036c02) bg_sp_fs_schedule_viewer_highlight_g9

0x0008,

0xfc0a,	// (0x00039e8d) bg_sp_fs_schedule_viewer_highlight_g

0xbe20,	// (0x000360a3) bg_main_sp_fs_ribbon_pane

0x89bc,	// (0x00032c3f) main_sp_fs_ribbon_pane_g1

0x89c5,	// (0x00032c48) main_sp_fs_ribbon_pane_t1

0x89d4,	// (0x00032c57) main_sp_fs_ribbon_pane_t2

0x89e3,	// (0x00032c66) main_sp_fs_ribbon_pane_t3

0x0002,

0xfc1d,	// (0x00039ea0) main_sp_fs_ribbon_pane_t

0x89f2,	// (0x00032c75) main_sp_fs_ribbon_scheduler_pane

0x89fa,	// (0x00032c7d) bg_main_sp_fs_ribbon_pane_g1

0x8a03,	// (0x00032c86) bg_main_sp_fs_ribbon_pane_g2

0x8a0c,	// (0x00032c8f) bg_main_sp_fs_ribbon_pane_g3

0x0002,

0xfc24,	// (0x00039ea7) bg_main_sp_fs_ribbon_pane_g

0x8a14,	// (0x00032c97) main_sp_fs_ribbon_scheduler_pane_g1

0x8a1d,	// (0x00032ca0) main_sp_fs_ribbon_scheduler_pane_g2

0x8a26,	// (0x00032ca9) main_sp_fs_ribbon_scheduler_pane_g3

0x0002,

0xfc2b,	// (0x00039eae) main_sp_fs_ribbon_scheduler_pane_g

0x8a2f,	// (0x00032cb2) list_cale_mrui_pane

0x8a3c,	// (0x00032cbf) sp_fs_scroll_pane_cp07_ParamLimits

0x8a3c,	// (0x00032cbf) sp_fs_scroll_pane_cp07

0x8a58,	// (0x00032cdb) bg_sp_fs_schedule_viewer_highlight_ParamLimits

0x8a58,	// (0x00032cdb) bg_sp_fs_schedule_viewer_highlight

0x8a68,	// (0x00032ceb) list_single_sp_fs_schedule_track_pane_cp01

0x8a70,	// (0x00032cf3) list_sp_fs_schedule_track_pane

0x8a78,	// (0x00032cfb) sp_fs_scroll_pane_cp06_ParamLimits

0x8a78,	// (0x00032cfb) sp_fs_scroll_pane_cp06

0xc55f,	// (0x000367e2) bgmain_sp_fs_calendar_pane_g1

0x8a8a,	// (0x00032d0d) list_single_cale_mrui_pane_ParamLimits

0x8a8a,	// (0x00032d0d) list_single_cale_mrui_pane

0x8aab,	// (0x00032d2e) list_single_cale_mrui_row_pane_ParamLimits

0x8aab,	// (0x00032d2e) list_single_cale_mrui_row_pane

0x8ab8,	// (0x00032d3b) list_single_cale_mrui_row_pane_g1_ParamLimits

0x8ab8,	// (0x00032d3b) list_single_cale_mrui_row_pane_g1

0x8afd,	// (0x00032d80) list_single_cale_mrui_row_pane_t1_ParamLimits

0x8afd,	// (0x00032d80) list_single_cale_mrui_row_pane_t1

0x8b0f,	// (0x00032d92) list_single_cale_mrui_row_pane_t2_ParamLimits

0x8b0f,	// (0x00032d92) list_single_cale_mrui_row_pane_t2

0x8b77,	// (0x00032dfa) list_single_cale_mrui_row_pane_t3_ParamLimits

0x8b77,	// (0x00032dfa) list_single_cale_mrui_row_pane_t3

0x8ba6,	// (0x00032e29) list_single_cale_mrui_row_pane_t4_ParamLimits

0x8ba6,	// (0x00032e29) list_single_cale_mrui_row_pane_t4

0x0003,

0xfc39,	// (0x00039ebc) list_single_cale_mrui_row_pane_t_ParamLimits

0xfc39,	// (0x00039ebc) list_single_cale_mrui_row_pane_t

0x8bd5,	// (0x00032e58) list_single_cmail_header_editor_pane_bg_cp01_ParamLimits

0x8bd5,	// (0x00032e58) list_single_cmail_header_editor_pane_bg_cp01

0x8c03,	// (0x00032e86) list_single_cmail_header_editor_pane_bg_cp02_ParamLimits

0x8c03,	// (0x00032e86) list_single_cmail_header_editor_pane_bg_cp02

0x8c23,	// (0x00032ea6) main_radioblah_text_pane_t1_ParamLimits

0x8c23,	// (0x00032ea6) main_radioblah_text_pane_t1

0x8c3d,	// (0x00032ec0) cam6_indi_pane_cp01

0x8c45,	// (0x00032ec8) cam6_mode_pane_cp01

0x8c4d,	// (0x00032ed0) cam6_pano_pane

0x8c56,	// (0x00032ed9) cam6_zoom_pane_cp01

0x8c5e,	// (0x00032ee1) cam6_pano_image_pane

0x8c69,	// (0x00032eec) cam6_pano_pane_g1

0x7794,	// (0x00031a17) cam6_pano_pane_g2

0x8c72,	// (0x00032ef5) cam6_pano_pane_g3

0x8c7b,	// (0x00032efe) cam6_pano_pane_g4

0xeeaf,	// (0x00039132) cam6_pano_pane_g5

0x8c84,	// (0x00032f07) cam6_pano_pane_g6

0x8c8e,	// (0x00032f11) cam6_pano_pane_g7

0x8c96,	// (0x00032f19) cam6_pano_pane_g8

0x8c9f,	// (0x00032f22) cam6_pano_pane_g9

0x0008,

0xfc42,	// (0x00039ec5) cam6_pano_pane_g

0xbe20,	// (0x000360a3) main_browser_tag_pane

0x8766,	// (0x000329e9) grid_navstr_albumart_pane

0x8caa,	// (0x00032f2d) cell_navstr_albumart_pane_ParamLimits

0x8caa,	// (0x00032f2d) cell_navstr_albumart_pane

0x8cca,	// (0x00032f4d) cell_navstr_albumart_pane_g1

0xe2ec,	// (0x0003856f) cell_navstr_albumart_pane_g2

0xe2fc,	// (0x0003857f) cell_navstr_albumart_pane_g3

0xe2f4,	// (0x00038577) cell_navstr_albumart_pane_g4

0x0003,

0xfc55,	// (0x00039ed8) cell_navstr_albumart_pane_g

0x8cd2,	// (0x00032f55) bt_list_pane_ParamLimits

0x8cd2,	// (0x00032f55) bt_list_pane

0x8ce6,	// (0x00032f69) bt_list_pane_t1

0x8cf5,	// (0x00032f78) bt_list_pane_t2

0x0001,

0xfc5e,	// (0x00039ee1) bt_list_pane_t

0xbe20,	// (0x000360a3) main_cale_prevew_pane

0x8d04,	// (0x00032f87) popup_cale_preview_window_ParamLimits

0x8d04,	// (0x00032f87) popup_cale_preview_window

0xc40e,	// (0x00036691) bg_popup_preview_window_pane_cp05_ParamLimits

0xc40e,	// (0x00036691) bg_popup_preview_window_pane_cp05

0x8d1d,	// (0x00032fa0) list_cale_preview_pane_ParamLimits

0x8d1d,	// (0x00032fa0) list_cale_preview_pane

0x8d29,	// (0x00032fac) list_double_cale_preview_pane_ParamLimits

0x8d29,	// (0x00032fac) list_double_cale_preview_pane

0x551f,	// (0x0002f7a2) list_single_cale_preview_pane_ParamLimits

0x551f,	// (0x0002f7a2) list_single_cale_preview_pane

0x8d3b,	// (0x00032fbe) list_single_cale_preview_pane_g1

0x8d43,	// (0x00032fc6) list_single_cale_preview_pane_t1_ParamLimits

0x8d43,	// (0x00032fc6) list_single_cale_preview_pane_t1

0x8d58,	// (0x00032fdb) list_double_cale_preview_pane_g1

0x8d60,	// (0x00032fe3) list_double_cale_preview_pane_t1_ParamLimits

0x8d60,	// (0x00032fe3) list_double_cale_preview_pane_t1

0x8d75,	// (0x00032ff8) list_double_cale_preview_pane_t2_ParamLimits

0x8d75,	// (0x00032ff8) list_double_cale_preview_pane_t2

0x0001,

0xfc63,	// (0x00039ee6) list_double_cale_preview_pane_t_ParamLimits

0xfc63,	// (0x00039ee6) list_double_cale_preview_pane_t

0xbe20,	// (0x000360a3) main_ezdial_pane

0xc40e,	// (0x00036691) main_sp_fs_email_pane_ParamLimits

0x7f72,	// (0x000321f5) cmail_ddmenu_btn01_pane_ParamLimits

0x7f72,	// (0x000321f5) cmail_ddmenu_btn01_pane

0x7f85,	// (0x00032208) cmail_ddmenu_btn02_pane_ParamLimits

0x7f85,	// (0x00032208) cmail_ddmenu_btn02_pane

0x7fe0,	// (0x00032263) cmail_ddmenu_btn03_pane_ParamLimits

0x7fe0,	// (0x00032263) cmail_ddmenu_btn03_pane

0x8091,	// (0x00032314) main_sp_fs_ctrlbar_pane_ParamLimits

0x80d0,	// (0x00032353) main_sp_fs_listscroll_pane_te_cp01_ParamLimits

0x8581,	// (0x00032804) list_cmail_body_pane_ParamLimits

0x85ea,	// (0x0003286d) bg_button_pane_cp12

0x8617,	// (0x0003289a) list_single_cmail_header_detail_pane_g3_ParamLimits

0x8617,	// (0x0003289a) list_single_cmail_header_detail_pane_g3

0x8662,	// (0x000328e5) list_single_cmail_header_detail_pane_t2_ParamLimits

0x8662,	// (0x000328e5) list_single_cmail_header_detail_pane_t2

0x0001,

0xfbe6,	// (0x00039e69) list_single_cmail_header_detail_pane_t_ParamLimits

0xfbe6,	// (0x00039e69) list_single_cmail_header_detail_pane_t

0x883d,	// (0x00032ac0) phacti_term_pane_t2_ParamLimits

0x883d,	// (0x00032ac0) phacti_term_pane_t2

0x0001,

0xfbf5,	// (0x00039e78) phacti_term_pane_t_ParamLimits

0xfbf5,	// (0x00039e78) phacti_term_pane_t

0x8d8d,	// (0x00033010) aid_size_list_single_double

0x8d99,	// (0x0003301c) popup_ezdial_listscroll_window

0x8db0,	// (0x00033033) popup_number_entry_window_cp01

0xc786,	// (0x00036a09) bg_popup_call_pane_cp09

0x8dbd,	// (0x00033040) ezdial_list_pane

0x8dc5,	// (0x00033048) scroll_pane_cp23

0xd25e,	// (0x000374e1) bg_button_pane_cp028_ParamLimits

0xd25e,	// (0x000374e1) bg_button_pane_cp028

0x8dcd,	// (0x00033050) cmail_ddmenu_btn01_pane_g1_ParamLimits

0x8dcd,	// (0x00033050) cmail_ddmenu_btn01_pane_g1

0x8dd9,	// (0x0003305c) cmail_ddmenu_btn01_pane_g2_ParamLimits

0x8dd9,	// (0x0003305c) cmail_ddmenu_btn01_pane_g2

0x0001,

0xfc68,	// (0x00039eeb) cmail_ddmenu_btn01_pane_g_ParamLimits

0xfc68,	// (0x00039eeb) cmail_ddmenu_btn01_pane_g

0x8de5,	// (0x00033068) cmail_ddmenu_btn01_pane_t1_ParamLimits

0x8de5,	// (0x00033068) cmail_ddmenu_btn01_pane_t1

0xd25e,	// (0x000374e1) bg_button_pane_cp029_ParamLimits

0xd25e,	// (0x000374e1) bg_button_pane_cp029

0x8dfa,	// (0x0003307d) cmail_ddmenu_btn02_pane_g1_ParamLimits

0x8dfa,	// (0x0003307d) cmail_ddmenu_btn02_pane_g1

0x8e12,	// (0x00033095) cmail_ddmenu_btn02_pane_t1_ParamLimits

0x8e12,	// (0x00033095) cmail_ddmenu_btn02_pane_t1

0xc40e,	// (0x00036691) bg_button_pane_cp031_ParamLimits

0xc40e,	// (0x00036691) bg_button_pane_cp031

0x8dfa,	// (0x0003307d) cmail_ddmenu_btn03_pane_g1_ParamLimits

0x8dfa,	// (0x0003307d) cmail_ddmenu_btn03_pane_g1

0x8e12,	// (0x00033095) cmail_ddmenu_btn03_pane_t1_ParamLimits

0x8e12,	// (0x00033095) cmail_ddmenu_btn03_pane_t1

0xc569,	// (0x000367ec) cell_dialer2_keypad_pane_t1_ParamLimits

0xeedd,	// (0x00039160) cell_dialer2_keypad_pane_t1_copy1_ParamLimits

0xeedd,	// (0x00039160) cell_dialer2_keypad_pane_t1_copy1

0x73a5,	// (0x00031628) ncimui_group_button_pane

0xc40e,	// (0x00036691) main_sp_fs_calendar_pane_ParamLimits

0x8597,	// (0x0003281a) list_single_cmail_header_caption_pane_ParamLimits

0x88a6,	// (0x00032b29) aid_recal_txt_sm_pane

0xbe20,	// (0x000360a3) mian_recal_day_pane

0x892b,	// (0x00032bae) popup_sp_fs_cale_preview_window_ParamLimits

0x8e36,	// (0x000330b9) list_recal_day_pane

0x8e78,	// (0x000330fb) list_single_recal_day_pane_ParamLimits

0x8e78,	// (0x000330fb) list_single_recal_day_pane

0x8e8a,	// (0x0003310d) list_single_recal_day_pane_g1_ParamLimits

0x8e8a,	// (0x0003310d) list_single_recal_day_pane_g1

0x8e96,	// (0x00033119) list_single_recal_day_pane_g2_ParamLimits

0x8e96,	// (0x00033119) list_single_recal_day_pane_g2

0x8ea2,	// (0x00033125) list_single_recal_day_pane_g3_ParamLimits

0x8ea2,	// (0x00033125) list_single_recal_day_pane_g3

0x8eae,	// (0x00033131) list_single_recal_day_pane_g4_ParamLimits

0x8eae,	// (0x00033131) list_single_recal_day_pane_g4

0x8ebc,	// (0x0003313f) list_single_recal_day_pane_g5_ParamLimits

0x8ebc,	// (0x0003313f) list_single_recal_day_pane_g5

0x8ed2,	// (0x00033155) list_single_recal_day_pane_g6_ParamLimits

0x8ed2,	// (0x00033155) list_single_recal_day_pane_g6

0x0004,

0xfc77,	// (0x00039efa) list_single_recal_day_pane_g_ParamLimits

0xfc77,	// (0x00039efa) list_single_recal_day_pane_g

0x8ee6,	// (0x00033169) list_single_recal_day_pane_t1

0x8ef8,	// (0x0003317b) list_single_recal_day_pane_t2

0x0001,

0xfc82,	// (0x00039f05) list_single_recal_day_pane_t

0x8f0a,	// (0x0003318d) ncimui_query_button_pane_ParamLimits

0x8f0a,	// (0x0003318d) ncimui_query_button_pane

0x8f1a,	// (0x0003319d) ncimui_query_button_pane_t1_ParamLimits

0x8f1a,	// (0x0003319d) ncimui_query_button_pane_t1

0x8f2d,	// (0x000331b0) ncimui_query_button_pane_t2_ParamLimits

0x8f2d,	// (0x000331b0) ncimui_query_button_pane_t2

0x0001,

0xfc87,	// (0x00039f0a) ncimui_query_button_pane_t_ParamLimits

0xfc87,	// (0x00039f0a) ncimui_query_button_pane_t

0x8f40,	// (0x000331c3) query_button_pane_ParamLimits

0x8f40,	// (0x000331c3) query_button_pane

0xbe20,	// (0x000360a3) bg_button_pane_cp0028

0x8f53,	// (0x000331d6) query_button_pane_t1

0x0dc7,	// (0x0002b04a) main_tport_pane_ParamLimits

0x83ef,	// (0x00032672) bg_popup_window_pane_cp01_ParamLimits

0x83ef,	// (0x00032672) bg_popup_window_pane_cp01

0x840a,	// (0x0003268d) heading_pane_cp08_ParamLimits

0x840a,	// (0x0003268d) heading_pane_cp08

0x841d,	// (0x000326a0) heading_pane_cp07_ParamLimits

0x841d,	// (0x000326a0) heading_pane_cp07

0x84fb,	// (0x0003277e) cell_tport_appsw_pane_g2

0x0002,

0xfbd3,	// (0x00039e56) cell_tport_appsw_pane_g

0x3885,	// (0x0002db08) input_candi_list_open_g1

0xcb62,	// (0x00036de5) list_cale_time_pane_g6_ParamLimits

0xcb62,	// (0x00036de5) list_cale_time_pane_g6

0x4598,	// (0x0002e81b) aid_size_touch_calib_1_ParamLimits

0x4598,	// (0x0002e81b) aid_size_touch_calib_1

0x45aa,	// (0x0002e82d) aid_size_touch_calib_2_ParamLimits

0x45aa,	// (0x0002e82d) aid_size_touch_calib_2

0x45c2,	// (0x0002e845) aid_size_touch_calib_3_ParamLimits

0x45c2,	// (0x0002e845) aid_size_touch_calib_3

0x45e0,	// (0x0002e863) aid_size_touch_calib_4_ParamLimits

0x45e0,	// (0x0002e863) aid_size_touch_calib_4

0x45f8,	// (0x0002e87b) main_touch_calib_button_group_pane_ParamLimits

0x45f8,	// (0x0002e87b) main_touch_calib_button_group_pane

0x4610,	// (0x0002e893) main_touch_calib_pane_g1_ParamLimits

0x4622,	// (0x0002e8a5) main_touch_calib_pane_g2_ParamLimits

0x4634,	// (0x0002e8b7) main_touch_calib_pane_g3_ParamLimits

0x4646,	// (0x0002e8c9) main_touch_calib_pane_g4_ParamLimits

0xf67e,	// (0x00039901) main_touch_calib_pane_g_ParamLimits

0x4658,	// (0x0002e8db) main_touch_calib_pane_t1_ParamLimits

0x4672,	// (0x0002e8f5) main_touch_calib_pane_t2_ParamLimits

0x468c,	// (0x0002e90f) main_touch_calib_pane_t3_ParamLimits

0x46a0,	// (0x0002e923) main_touch_calib_pane_t4_ParamLimits

0x46b4,	// (0x0002e937) main_touch_calib_pane_t5_ParamLimits

0xf687,	// (0x0003990a) main_touch_calib_pane_t_ParamLimits

0xec7d,	// (0x00038f00) list_single_fp_cale_pane_g3_ParamLimits

0xec7d,	// (0x00038f00) list_single_fp_cale_pane_g3

0xb21b,	// (0x0003549e) bg_button_pane_cp012_ParamLimits

0xb21b,	// (0x0003549e) bg_vkb2_func_pane_cp03_ParamLimits

0x1b38,	// (0x0002bdbb) cell_vitu2_function_top_pane_g1_ParamLimits

0xb21b,	// (0x0003549e) bg_vkb2_func_pane_cp04_ParamLimits

0x7330,	// (0x000315b3) main_ncimui_button_group_pane_ParamLimits

0x7330,	// (0x000315b3) main_ncimui_button_group_pane

0x7390,	// (0x00031613) main_ncimui_pane_t3_ParamLimits

0x7390,	// (0x00031613) main_ncimui_pane_t3

0x87d7,	// (0x00032a5a) phacti_button_group_pane

0x8d8d,	// (0x00033010) aid_size_list_single_double_ParamLimits

0x8d99,	// (0x0003301c) popup_ezdial_listscroll_window_ParamLimits

0x8db0,	// (0x00033033) popup_number_entry_window_cp01_ParamLimits

0x8f61,	// (0x000331e4) phacti_button_pane_ParamLimits

0x8f61,	// (0x000331e4) phacti_button_pane

0xbe20,	// (0x000360a3) bg_button_pane_cp14

0x8f72,	// (0x000331f5) phacti_button_pane_t1

0x8f80,	// (0x00033203) main_touch_calib_button_pane_ParamLimits

0x8f80,	// (0x00033203) main_touch_calib_button_pane

0xc5bd,	// (0x00036840) bg_button_pane_cp18_ParamLimits

0xc5bd,	// (0x00036840) bg_button_pane_cp18

0x8f95,	// (0x00033218) main_touch_calib_button_pane_t1_ParamLimits

0x8f95,	// (0x00033218) main_touch_calib_button_pane_t1

0x8fab,	// (0x0003322e) main_touch_calib_button_pane_t2_ParamLimits

0x8fab,	// (0x0003322e) main_touch_calib_button_pane_t2

0x0001,

0xfc8c,	// (0x00039f0f) main_touch_calib_button_pane_t_ParamLimits

0xfc8c,	// (0x00039f0f) main_touch_calib_button_pane_t

0xbe20,	// (0x000360a3) cell_ncimui_button_pane

0xbe20,	// (0x000360a3) bg_button_pane_cp032

0x8fc9,	// (0x0003324c) cell_ncimui_button_pane_t1

0xb797,	// (0x00035a1a) image3_infobar_pane_ParamLimits

0xb797,	// (0x00035a1a) image3_infobar_pane

0x7a21,	// (0x00031ca4) fs_bigclock_status_pane_ParamLimits

0x7a21,	// (0x00031ca4) fs_bigclock_status_pane

0x7a2e,	// (0x00031cb1) main_fs_bigclock_clock_pane_ParamLimits

0x7a2e,	// (0x00031cb1) main_fs_bigclock_clock_pane

0x7a4c,	// (0x00031ccf) main_fs_bigclock_indi_pane_ParamLimits

0x7a4c,	// (0x00031ccf) main_fs_bigclock_indi_pane

0x7a7e,	// (0x00031d01) main_fs_bigclock_swipe_pane_ParamLimits

0x7a7e,	// (0x00031d01) main_fs_bigclock_swipe_pane

0xbe20,	// (0x000360a3) main_fs_clock_dumped_data

0x7abd,	// (0x00031d40) list_single_fs_bigclock_indicator_pane_g1_ParamLimits

0x7abd,	// (0x00031d40) list_single_fs_bigclock_indicator_pane_g1

0x7ad9,	// (0x00031d5c) list_single_fs_bigclock_indicator_pane_g2_ParamLimits

0x7ad9,	// (0x00031d5c) list_single_fs_bigclock_indicator_pane_g2

0x7af3,	// (0x00031d76) list_single_fs_bigclock_indicator_pane_g3_ParamLimits

0x7af3,	// (0x00031d76) list_single_fs_bigclock_indicator_pane_g3

0x7b0d,	// (0x00031d90) list_single_fs_bigclock_indicator_pane_g4_ParamLimits

0x7b0d,	// (0x00031d90) list_single_fs_bigclock_indicator_pane_g4

0x0004,

0xfb3f,	// (0x00039dc2) list_single_fs_bigclock_indicator_pane_g_ParamLimits

0xfb3f,	// (0x00039dc2) list_single_fs_bigclock_indicator_pane_g

0x7b38,	// (0x00031dbb) list_single_fs_bigclock_indicator_pane_t1_ParamLimits

0x7b38,	// (0x00031dbb) list_single_fs_bigclock_indicator_pane_t1

0x7b60,	// (0x00031de3) list_single_fs_bigclock_indicator_pane_t2_ParamLimits

0x7b60,	// (0x00031de3) list_single_fs_bigclock_indicator_pane_t2

0x7b88,	// (0x00031e0b) list_single_fs_bigclock_indicator_pane_t3_ParamLimits

0x7b88,	// (0x00031e0b) list_single_fs_bigclock_indicator_pane_t3

0x7bb0,	// (0x00031e33) list_single_fs_bigclock_indicator_pane_t4_ParamLimits

0x7bb0,	// (0x00031e33) list_single_fs_bigclock_indicator_pane_t4

0x0004,

0xfb4a,	// (0x00039dcd) list_single_fs_bigclock_indicator_pane_t_ParamLimits

0xfb4a,	// (0x00039dcd) list_single_fs_bigclock_indicator_pane_t

0x8fd7,	// (0x0003325a) image3_infobar_fav_pane_ParamLimits

0x8fd7,	// (0x0003325a) image3_infobar_fav_pane

0x8fe7,	// (0x0003326a) image3_infobar_loc_pane_ParamLimits

0x8fe7,	// (0x0003326a) image3_infobar_loc_pane

0x8ffb,	// (0x0003327e) image3_infobar_time_pane_ParamLimits

0x8ffb,	// (0x0003327e) image3_infobar_time_pane

0xc55f,	// (0x000367e2) image3_infobar_time_pane_g1

0x900b,	// (0x0003328e) image3_infobar_time_pane_t1

0xc55f,	// (0x000367e2) image3_infobar_loc_pane_g1

0x9019,	// (0x0003329c) image3_infobar_loc_pane_g2

0x0001,

0xfc91,	// (0x00039f14) image3_infobar_loc_pane_g

0x9021,	// (0x000332a4) image3_infobar_loc_pane_t1

0xc55f,	// (0x000367e2) image3_infobar_fav_pane_g1

0x902f,	// (0x000332b2) image3_infobar_fav_pane_g2

0x0001,

0xfc96,	// (0x00039f19) image3_infobar_fav_pane_g

0x9037,	// (0x000332ba) fs_bigclock_status_battery_pane

0x9040,	// (0x000332c3) fs_bigclock_status_signal_pane

0x9049,	// (0x000332cc) fs_bigclock_status_title_pane

0x9052,	// (0x000332d5) fs_bigclock_status_signal_pane_g1

0x905b,	// (0x000332de) fs_bigclock_status_signal_pane_g2

0x0001,

0xfc9b,	// (0x00039f1e) fs_bigclock_status_signal_pane_g

0x9063,	// (0x000332e6) fs_bigclock_status_battery_pane_g1

0x906c,	// (0x000332ef) fs_bigclock_status_battery_pane_g2

0x0001,

0xfca0,	// (0x00039f23) fs_bigclock_status_battery_pane_g

0x9074,	// (0x000332f7) fs_bigclock_status_title_pane_t1

0x9082,	// (0x00033305) main_fs_bigclock_clock_pane_g1

0x9082,	// (0x00033305) main_fs_bigclock_clock_pane_g2

0x9093,	// (0x00033316) main_fs_bigclock_clock_pane_g3

0x9093,	// (0x00033316) main_fs_bigclock_clock_pane_g4

0x0003,

0xfca5,	// (0x00039f28) main_fs_bigclock_clock_pane_g

0x90a6,	// (0x00033329) main_fs_bigclock_clock_pane_t1

0x90bc,	// (0x0003333f) main_fs_bigclock_clock_pane_t2

0x0001,

0xfcae,	// (0x00039f31) main_fs_bigclock_clock_pane_t

0x90d2,	// (0x00033355) list_single_fs_bigclock_indicator_pane_ParamLimits

0x90d2,	// (0x00033355) list_single_fs_bigclock_indicator_pane

0x90e3,	// (0x00033366) list_single_fs_bigclock_pane_ParamLimits

0x90e3,	// (0x00033366) list_single_fs_bigclock_pane

0x914d,	// (0x000333d0) main_fs_bigclock_indicator_pane_t1

0x915c,	// (0x000333df) list_single_fs_bigclock_pane_g1

0x9164,	// (0x000333e7) list_single_fs_bigclock_pane_t1

0xc55f,	// (0x000367e2) main_fs_bigclock_swipe_pane_g1

0x91a7,	// (0x0003342a) main_fs_bigclock_swipe_pane_g2

0x0001,

0xfcbf,	// (0x00039f42) main_fs_bigclock_swipe_pane_g

0x91af,	// (0x00033432) main_fs_bigclock_swipe_pane_t1_ParamLimits

0x91af,	// (0x00033432) main_fs_bigclock_swipe_pane_t1

0x33a9,	// (0x0002d62c) call_type_pane_ParamLimits

0xbe20,	// (0x000360a3) main_btmg_pane

0x8ae4,	// (0x00032d67) list_single_cale_mrui_row_pane_g2_ParamLimits

0x8ae4,	// (0x00032d67) list_single_cale_mrui_row_pane_g2

0x0002,

0xfc32,	// (0x00039eb5) list_single_cale_mrui_row_pane_g_ParamLimits

0xfc32,	// (0x00039eb5) list_single_cale_mrui_row_pane_g

0x8e5f,	// (0x000330e2) list_recal_vselct_arw_lo_pane

0x8e67,	// (0x000330ea) list_recal_vselct_arw_up_pane

0x8e6f,	// (0x000330f2) list_recal_vselct_pane

0x91cc,	// (0x0003344f) btmg_button_pane

0x91d6,	// (0x00033459) main_btmg_pane_g1

0xbe20,	// (0x000360a3) bg_button_pane_cp044

0x91e0,	// (0x00033463) btmg_button_pane_t1

0xe47c,	// (0x000386ff) aid_listscroll_gen

0xc40e,	// (0x00036691) main_cntbar_detail_pane

0x8562,	// (0x000327e5) list_cmail_folder_pane

0x339d,	// (0x0002d620) sp_fs_scroll_pane_cp03_ParamLimits

0x91ee,	// (0x00033471) list_single_fs_dyc_pane_cp01_ParamLimits

0x91ee,	// (0x00033471) list_single_fs_dyc_pane_cp01

0x9205,	// (0x00033488) aid_size_cmail_indent

0x920e,	// (0x00033491) list_single_dyc_row_pane_cp01

0x9249,	// (0x000334cc) cntbar_detail_list_pane_ParamLimits

0x9249,	// (0x000334cc) cntbar_detail_list_pane

0x9295,	// (0x00033518) main_cntbar_detail_cont_pane_ParamLimits

0x9295,	// (0x00033518) main_cntbar_detail_cont_pane

0x339d,	// (0x0002d620) scroll_pane_cp032_ParamLimits

0x339d,	// (0x0002d620) scroll_pane_cp032

0x92a9,	// (0x0003352c) cntbar_detail_list_event_pane_ParamLimits

0x92a9,	// (0x0003352c) cntbar_detail_list_event_pane

0x9259,	// (0x000334dc) cntbar_detail_list_shct_pane

0xc9ed,	// (0x00036c70) aid_list_gen

0x92b9,	// (0x0003353c) aid_scroll

0x92c2,	// (0x00033545) aid_size_touch_scroll_bar

0x92cb,	// (0x0003354e) aid_list_double

0x92d4,	// (0x00033557) aid_list_single

0x92cb,	// (0x0003354e) aid_list_single_lg

0x92dd,	// (0x00033560) aid_list_z_g_a_sm

0x92e5,	// (0x00033568) aid_list_z_g_d

0x92ed,	// (0x00033570) aid_txt_z_prm

0x92fb,	// (0x0003357e) aid_txt_z_prm_cp01

0x9309,	// (0x0003358c) aid_txt_z_sec

0x9317,	// (0x0003359a) main_cntbar_detail_cont_pane_g1_ParamLimits

0x9317,	// (0x0003359a) main_cntbar_detail_cont_pane_g1

0x932b,	// (0x000335ae) main_cntbar_detail_cont_pane_g2_ParamLimits

0x932b,	// (0x000335ae) main_cntbar_detail_cont_pane_g2

0x0001,

0xfcc4,	// (0x00039f47) main_cntbar_detail_cont_pane_g_ParamLimits

0xfcc4,	// (0x00039f47) main_cntbar_detail_cont_pane_g

0x933b,	// (0x000335be) main_cntbar_detail_cont_pane_t1

0x9349,	// (0x000335cc) main_cntbar_detail_cont_pane_t2

0x9357,	// (0x000335da) main_cntbar_detail_cont_pane_t3

0x0002,

0xfcc9,	// (0x00039f4c) main_cntbar_detail_cont_pane_t

0x9365,	// (0x000335e8) cell_cntbar_detail_list_shct_pane_ParamLimits

0x9365,	// (0x000335e8) cell_cntbar_detail_list_shct_pane

0x9379,	// (0x000335fc) cntbar_detail_list_shct_pane_g1

0x9382,	// (0x00033605) cntbar_detail_list_shct_pane_g2

0x0001,

0xfcd0,	// (0x00039f53) cntbar_detail_list_shct_pane_g

0x938b,	// (0x0003360e) cntbar_detail_list_event_pane_g1_ParamLimits

0x938b,	// (0x0003360e) cntbar_detail_list_event_pane_g1

0x9397,	// (0x0003361a) cntbar_detail_list_event_pane_g2_ParamLimits

0x9397,	// (0x0003361a) cntbar_detail_list_event_pane_g2

0x0005,

0xfcd5,	// (0x00039f58) cntbar_detail_list_event_pane_g_ParamLimits

0xfcd5,	// (0x00039f58) cntbar_detail_list_event_pane_g

0x9403,	// (0x00033686) cntbar_detail_list_event_pane_t1_ParamLimits

0x9403,	// (0x00033686) cntbar_detail_list_event_pane_t1

0x9418,	// (0x0003369b) cntbar_detail_list_event_pane_t2_ParamLimits

0x9418,	// (0x0003369b) cntbar_detail_list_event_pane_t2

0x0002,

0xfce2,	// (0x00039f65) cntbar_detail_list_event_pane_t_ParamLimits

0xfce2,	// (0x00039f65) cntbar_detail_list_event_pane_t

0xc55f,	// (0x000367e2) cell_cntbar_detail_list_shct_pane_g1

0xd13d,	// (0x000373c0) navi_pane_mv_g3

0xc40e,	// (0x00036691) main_cntbar_detail_pane_ParamLimits

0xbe20,	// (0x000360a3) main_notif_wgt_pane

0xb517,	// (0x0003579a) aid_tch_main_mp4_pane_g4

0xb78f,	// (0x00035a12) popup_slider_window_cp02

0x8e55,	// (0x000330d8) list_recal_day_event_pane

0x9217,	// (0x0003349a) cntbar_detail_btn_pane_ParamLimits

0x9217,	// (0x0003349a) cntbar_detail_btn_pane

0x9230,	// (0x000334b3) cntbar_detail_btn_pane_cp01_ParamLimits

0x9230,	// (0x000334b3) cntbar_detail_btn_pane_cp01

0x9259,	// (0x000334dc) cntbar_detail_list_shct_pane_ParamLimits

0x9269,	// (0x000334ec) cntbar_detail_pane_g1_ParamLimits

0x9269,	// (0x000334ec) cntbar_detail_pane_g1

0x9279,	// (0x000334fc) cntbar_detail_pane_t1_ParamLimits

0x9279,	// (0x000334fc) cntbar_detail_pane_t1

0x93a3,	// (0x00033626) cntbar_detail_list_event_pane_g3_ParamLimits

0x93a3,	// (0x00033626) cntbar_detail_list_event_pane_g3

0x93bb,	// (0x0003363e) cntbar_detail_list_event_pane_g4_ParamLimits

0x93bb,	// (0x0003363e) cntbar_detail_list_event_pane_g4

0x93d3,	// (0x00033656) cntbar_detail_list_event_pane_g5_ParamLimits

0x93d3,	// (0x00033656) cntbar_detail_list_event_pane_g5

0x93eb,	// (0x0003366e) cntbar_detail_list_event_pane_g6_ParamLimits

0x93eb,	// (0x0003366e) cntbar_detail_list_event_pane_g6

0x942d,	// (0x000336b0) cntbar_detail_list_event_pane_t3_ParamLimits

0x942d,	// (0x000336b0) cntbar_detail_list_event_pane_t3

0x943f,	// (0x000336c2) popup_notif_wgt_window_ParamLimits

0x943f,	// (0x000336c2) popup_notif_wgt_window

0x9458,	// (0x000336db) popup_submenu_window_cp01_ParamLimits

0x9458,	// (0x000336db) popup_submenu_window_cp01

0xc786,	// (0x00036a09) bg_popup_window_pane_cp10

0x946a,	// (0x000336ed) listscroll_notif_wgt_pane

0x947c,	// (0x000336ff) list_notif_wgt_window

0x9485,	// (0x00033708) scroll_pane_cp033

0x948e,	// (0x00033711) list_notif_wgt_row_pane_ParamLimits

0x948e,	// (0x00033711) list_notif_wgt_row_pane

0x949e,	// (0x00033721) aid_size_list_notif_wgt_del

0x94ab,	// (0x0003372e) list_notif_wgt_row_pane_g1

0x94b7,	// (0x0003373a) list_notif_wgt_row_pane_g2

0x94c6,	// (0x00033749) list_notif_wgt_row_pane_g3

0x0002,

0xfce9,	// (0x00039f6c) list_notif_wgt_row_pane_g

0x94d3,	// (0x00033756) list_notif_wgt_row_pane_t1

0x94e9,	// (0x0003376c) list_notif_wgt_row_pane_t2

0x94fb,	// (0x0003377e) list_notif_wgt_row_pane_t3

0x0002,

0xfcf0,	// (0x00039f73) list_notif_wgt_row_pane_t

0x5e39,	// (0x000300bc) list_recal_day_event_pane_g1

0x950d,	// (0x00033790) list_recal_day_event_pane_t1

0xbe20,	// (0x000360a3) bg_button_pane_cp045

0x951c,	// (0x0003379f) cntbar_detail_btn_pane_t1

0xd25e,	// (0x000374e1) main_callh_pane_ParamLimits

0xd25e,	// (0x000374e1) main_callh_pane

0xbe20,	// (0x000360a3) main_coverflow0_pane

0xbe20,	// (0x000360a3) main_wgtman_pane

0x7a96,	// (0x00031d19) main_fs_bigclock_unlock_btn_pane_ParamLimits

0x7a96,	// (0x00031d19) main_fs_bigclock_unlock_btn_pane

0x84f3,	// (0x00032776) bg_button_pane_cp16

0x8503,	// (0x00032786) cell_tport_appsw_pane_g3

0x952a,	// (0x000337ad) cf0_flow_pane_ParamLimits

0x952a,	// (0x000337ad) cf0_flow_pane

0x953f,	// (0x000337c2) listscroll_cf0_pane

0x954a,	// (0x000337cd) main_cf0_pane_g1

0x955c,	// (0x000337df) main_cf0_pane_t1_ParamLimits

0x955c,	// (0x000337df) main_cf0_pane_t1

0x9573,	// (0x000337f6) main_cf0_pane_t2_ParamLimits

0x9573,	// (0x000337f6) main_cf0_pane_t2

0x0001,

0xfcfc,	// (0x00039f7f) main_cf0_pane_t_ParamLimits

0xfcfc,	// (0x00039f7f) main_cf0_pane_t

0x958a,	// (0x0003380d) scroll_pane_cp11

0x9595,	// (0x00033818) cf0_flow_pane_g1

0x959d,	// (0x00033820) cf0_flow_pane_g2

0x0001,

0xfd01,	// (0x00039f84) cf0_flow_pane_g

0x95a5,	// (0x00033828) cf0_flow_pane_t1

0xbe20,	// (0x000360a3) main_call6_pane

0xbe20,	// (0x000360a3) main_calllock_pane

0x1c6c,	// (0x0002beef) call6_btn_grp_pane_ParamLimits

0x1c6c,	// (0x0002beef) call6_btn_grp_pane

0x1c86,	// (0x0002bf09) call6_pane_g1_ParamLimits

0x1c86,	// (0x0002bf09) call6_pane_g1

0x1c9c,	// (0x0002bf1f) popup_call6_1st_window_ParamLimits

0x1c9c,	// (0x0002bf1f) popup_call6_1st_window

0x1cad,	// (0x0002bf30) popup_call6_2nd_window_ParamLimits

0x1cad,	// (0x0002bf30) popup_call6_2nd_window

0x1cbe,	// (0x0002bf41) cell_call6_btn_pane_ParamLimits

0x1cbe,	// (0x0002bf41) cell_call6_btn_pane

0xc786,	// (0x00036a09) bg_popup_call2_in_pane_cp03

0x95b3,	// (0x00033836) popup_call6_1st_window_g1

0x95bb,	// (0x0003383e) popup_call6_1st_window_g2

0x95c3,	// (0x00033846) popup_call6_1st_window_g3

0x0002,

0xfd06,	// (0x00039f89) popup_call6_1st_window_g

0x95cb,	// (0x0003384e) popup_call6_1st_window_t1

0x95da,	// (0x0003385d) popup_call6_1st_window_t2

0x95e8,	// (0x0003386b) popup_call6_1st_window_t3

0x0002,

0xfd0d,	// (0x00039f90) popup_call6_1st_window_t

0xc786,	// (0x00036a09) bg_popup_call2_in_pane_cp04

0x95f6,	// (0x00033879) popup_call6_2nd_window_g1

0x95fe,	// (0x00033881) popup_call6_2nd_window_g2

0x9606,	// (0x00033889) popup_call6_2nd_window_g3

0x0002,

0xfd14,	// (0x00039f97) popup_call6_2nd_window_g

0x960e,	// (0x00033891) popup_call6_2nd_window_t1

0xb229,	// (0x000354ac) bg_button_pane_cp15

0xb9d6,	// (0x00035c59) cell_call6_btn_pane_g1

0xb9df,	// (0x00035c62) cell_call6_btn_pane_t1

0x961d,	// (0x000338a0) listscroll_wgtman_pane_ParamLimits

0x961d,	// (0x000338a0) listscroll_wgtman_pane

0x963e,	// (0x000338c1) wgtman_btn_pane_ParamLimits

0x963e,	// (0x000338c1) wgtman_btn_pane

0xcf51,	// (0x000371d4) aid_scroll_copy1

0x9681,	// (0x00033904) list_wgtman_pane

0x968b,	// (0x0003390e) wgtman_btn_pane_g1_ParamLimits

0x968b,	// (0x0003390e) wgtman_btn_pane_g1

0x96b7,	// (0x0003393a) wgtman_btn_pane_t1_ParamLimits

0x96b7,	// (0x0003393a) wgtman_btn_pane_t1

0x96f4,	// (0x00033977) wgtman_btn_pane_t2_ParamLimits

0x96f4,	// (0x00033977) wgtman_btn_pane_t2

0x0001,

0xfd1b,	// (0x00039f9e) wgtman_btn_pane_t_ParamLimits

0xfd1b,	// (0x00039f9e) wgtman_btn_pane_t

0x970b,	// (0x0003398e) listrow_wgtman_pane_ParamLimits

0x970b,	// (0x0003398e) listrow_wgtman_pane

0x971e,	// (0x000339a1) listrow_wgtman_pane_g1

0x972b,	// (0x000339ae) listrow_wgtman_pane_g2

0x0001,

0xfd20,	// (0x00039fa3) listrow_wgtman_pane_g

0x9749,	// (0x000339cc) listrow_wgtman_pane_t1

0x9761,	// (0x000339e4) listrow_wgtman_pane_t2

0x0001,

0xfd25,	// (0x00039fa8) listrow_wgtman_pane_t

0x9787,	// (0x00033a0a) wait_bar_pane_cp09

0x9799,	// (0x00033a1c) main_calllock_btn_pane

0x97a3,	// (0x00033a26) main_calllock_pane_g1

0xbe20,	// (0x000360a3) bg_button_pane_cp17

0x97ab,	// (0x00033a2e) main_calllock_btn_pane_g1

0x97b4,	// (0x00033a37) main_calllock_btn_pane_t1

0xbe20,	// (0x000360a3) main_dialer3_pane

0xbe20,	// (0x000360a3) main_fmrd2_pane

0xc55f,	// (0x000367e2) main_fs_bigclock_unlock_btn_pane_g1

0x97cb,	// (0x00033a4e) main_fs_bigclock_unlock_btn_pane_t1

0x97d9,	// (0x00033a5c) area_fmrd2_info_pane_ParamLimits

0x97d9,	// (0x00033a5c) area_fmrd2_info_pane

0x97ea,	// (0x00033a6d) area_fmrd2_visual_pane_ParamLimits

0x97ea,	// (0x00033a6d) area_fmrd2_visual_pane

0x97f8,	// (0x00033a7b) fmrd2_indi_pane_ParamLimits

0x97f8,	// (0x00033a7b) fmrd2_indi_pane

0x9805,	// (0x00033a88) area_fmrd2_visual_pane_g1

0x980d,	// (0x00033a90) area_fmrd2_visual_pane_t1

0x981d,	// (0x00033aa0) area_fmrd2_visual_pane_t2

0x982d,	// (0x00033ab0) area_fmrd2_visual_pane_t3

0x0002,

0xfd2f,	// (0x00039fb2) area_fmrd2_visual_pane_t

0x983d,	// (0x00033ac0) area_fmrd2_info_pane_g1

0x9845,	// (0x00033ac8) area_fmrd2_info_pane_t1

0x9855,	// (0x00033ad8) area_fmrd2_info_pane_t2

0x9865,	// (0x00033ae8) area_fmrd2_info_pane_t3

0x9875,	// (0x00033af8) area_fmrd2_info_pane_t4

0x0003,

0xfd36,	// (0x00039fb9) area_fmrd2_info_pane_t

0x9883,	// (0x00033b06) fmrd2_indi_pane_t1

0x9893,	// (0x00033b16) fmrd2_indi_pane_t2

0x98a3,	// (0x00033b26) fmrd2_indi_pane_t3

0x0002,

0xfd3f,	// (0x00039fc2) fmrd2_indi_pane_t

0x7b1c,	// (0x00031d9f) list_single_fs_bigclock_indicator_pane_g5_ParamLimits

0x7b1c,	// (0x00031d9f) list_single_fs_bigclock_indicator_pane_g5

0x7bcd,	// (0x00031e50) list_single_fs_bigclock_indicator_pane_t5_ParamLimits

0x7bcd,	// (0x00031e50) list_single_fs_bigclock_indicator_pane_t5

0x8888,	// (0x00032b0b) aid_cell_bcale_month_pane_ParamLimits

0x8888,	// (0x00032b0b) aid_cell_bcale_month_pane

0x88af,	// (0x00032b32) bcale_month_pane_ParamLimits

0x88af,	// (0x00032b32) bcale_month_pane

0x88d3,	// (0x00032b56) bcale_preview_pane_ParamLimits

0x88d3,	// (0x00032b56) bcale_preview_pane

0x9164,	// (0x000333e7) list_single_fs_bigclock_pane_t1_ParamLimits

0x9183,	// (0x00033406) list_single_fs_bigclock_pane_t2_ParamLimits

0x9183,	// (0x00033406) list_single_fs_bigclock_pane_t2

0x0001,

0xfcba,	// (0x00039f3d) list_single_fs_bigclock_pane_t_ParamLimits

0xfcba,	// (0x00039f3d) list_single_fs_bigclock_pane_t

0x97c3,	// (0x00033a46) main_fs_bigclock_unlock_btn_pane_g2

0x0001,

0xfd2a,	// (0x00039fad) main_fs_bigclock_unlock_btn_pane_g

0x98b3,	// (0x00033b36) aid_dia3_key_size_ParamLimits

0x98b3,	// (0x00033b36) aid_dia3_key_size

0x98c2,	// (0x00033b45) aid_dia3_listrow_size_ParamLimits

0x98c2,	// (0x00033b45) aid_dia3_listrow_size

0x98d7,	// (0x00033b5a) dia3_keypad_fun_pane_ParamLimits

0x98d7,	// (0x00033b5a) dia3_keypad_fun_pane

0x98f3,	// (0x00033b76) dia3_keypad_num_pane_ParamLimits

0x98f3,	// (0x00033b76) dia3_keypad_num_pane

0x990e,	// (0x00033b91) dia3_listscroll_pane_ParamLimits

0x990e,	// (0x00033b91) dia3_listscroll_pane

0x9921,	// (0x00033ba4) dia3_numentry_pane_ParamLimits

0x9921,	// (0x00033ba4) dia3_numentry_pane

0x9939,	// (0x00033bbc) dia3_list_pane

0x9944,	// (0x00033bc7) scroll_pane_cp12

0xbe20,	// (0x000360a3) bg_dia3_numentry_pane

0x994f,	// (0x00033bd2) dia3_numentry_pane_t1

0x995e,	// (0x00033be1) cell_dia3_key_num_pane

0x9966,	// (0x00033be9) cell_dia3_key0_fun_pane_ParamLimits

0x9966,	// (0x00033be9) cell_dia3_key0_fun_pane

0x997a,	// (0x00033bfd) cell_dia3_key1_fun_pane_ParamLimits

0x997a,	// (0x00033bfd) cell_dia3_key1_fun_pane

0x9992,	// (0x00033c15) dia3_listrow_pane

0x75ae,	// (0x00031831) bg_dia3_numentry_pane_g1

0xbe20,	// (0x000360a3) bg_button_pane_cp21

0x99a4,	// (0x00033c27) cell_dia3_key_num_pane_t1

0x99b2,	// (0x00033c35) cell_dia3_key_num_pane_t2

0x99c1,	// (0x00033c44) cell_dia3_key_num_pane_t3

0x99d0,	// (0x00033c53) cell_dia3_key_num_pane_t4

0x0003,

0xfd46,	// (0x00039fc9) cell_dia3_key_num_pane_t

0xbe20,	// (0x000360a3) bg_button_pane_cp19

0x99df,	// (0x00033c62) cell_dia3_key0_fun_pane_g1

0xbe20,	// (0x000360a3) bg_button_pane_cp20

0x99e7,	// (0x00033c6a) cell_dia3_key1_fun_pane_g1

0x99ef,	// (0x00033c72) area_left_week_number_pane

0x99fb,	// (0x00033c7e) area_top_day_name_pane

0x9a0e,	// (0x00033c91) frame_month_view_pane

0x9a21,	// (0x00033ca4) grid_month_view_pane

0x9a2f,	// (0x00033cb2) cell_top_day_name_pane_ParamLimits

0x9a2f,	// (0x00033cb2) cell_top_day_name_pane

0x9a5c,	// (0x00033cdf) cell_area_left_week_number_pane_ParamLimits

0x9a5c,	// (0x00033cdf) cell_area_left_week_number_pane

0x9a70,	// (0x00033cf3) cell_month_view_pane_ParamLimits

0x9a70,	// (0x00033cf3) cell_month_view_pane

0x9a9d,	// (0x00033d20) frm_month_g1

0x9aaa,	// (0x00033d2d) frm_month_g2

0x9abd,	// (0x00033d40) frm_month_g3

0x9ad0,	// (0x00033d53) frm_month_g4

0x9ae3,	// (0x00033d66) frm_month_g5

0x9af6,	// (0x00033d79) frm_month_g6

0x9b09,	// (0x00033d8c) frm_month_g7

0x9b1c,	// (0x00033d9f) frm_month_g8

0x9b29,	// (0x00033dac) frm_month_g9

0x9b39,	// (0x00033dbc) frm_month_g10

0x9b49,	// (0x00033dcc) frm_month_g11

0x9b59,	// (0x00033ddc) frm_month_g12

0x9b6b,	// (0x00033dee) frm_month_g13

0x9b7d,	// (0x00033e00) frm_month_g14

0x9b91,	// (0x00033e14) frm_month_g15

0x9ba5,	// (0x00033e28) frm_month_g16

0x000f,

0xfd4f,	// (0x00039fd2) frm_month_g

0x9bb9,	// (0x00033e3c) cell_top_day_name_pane_t1

0x9bcc,	// (0x00033e4f) cell_area_left_week_number_pane_g1

0x9bd8,	// (0x00033e5b) cell_area_left_week_number_pane_t1

0xc521,	// (0x000367a4) cell_month_view_pane_g1

0x9beb,	// (0x00033e6e) cell_month_view_pane_t1

0xbe20,	// (0x000360a3) main_fps_pane

0x7fa8,	// (0x0003222b) cmail_ddmenu_btn02_pane_cp1_ParamLimits

0x7fa8,	// (0x0003222b) cmail_ddmenu_btn02_pane_cp1

0x7fc4,	// (0x00032247) cmail_ddmenu_btn02_pane_cp2_ParamLimits

0x7fc4,	// (0x00032247) cmail_ddmenu_btn02_pane_cp2

0x8e06,	// (0x00033089) cmail_ddmenu_btn02_pane_g2_ParamLimits

0x8e06,	// (0x00033089) cmail_ddmenu_btn02_pane_g2

0x0001,

0xfc6d,	// (0x00039ef0) cmail_ddmenu_btn02_pane_g_ParamLimits

0xfc6d,	// (0x00039ef0) cmail_ddmenu_btn02_pane_g

0x8e24,	// (0x000330a7) cmail_ddmenu_btn02_pane_t2_ParamLimits

0x8e24,	// (0x000330a7) cmail_ddmenu_btn02_pane_t2

0x0001,

0xfc72,	// (0x00039ef5) cmail_ddmenu_btn02_pane_t_ParamLimits

0xfc72,	// (0x00039ef5) cmail_ddmenu_btn02_pane_t

0x9bfe,	// (0x00033e81) fps_text_pane_ParamLimits

0x9bfe,	// (0x00033e81) fps_text_pane

0x9c15,	// (0x00033e98) main_fps_pane_g1_ParamLimits

0x9c15,	// (0x00033e98) main_fps_pane_g1

0x9c2f,	// (0x00033eb2) wait_bar_pane_cp010_ParamLimits

0x9c2f,	// (0x00033eb2) wait_bar_pane_cp010

0x9c40,	// (0x00033ec3) fps_text_pane_t1_ParamLimits

0x9c40,	// (0x00033ec3) fps_text_pane_t1

0x5405,	// (0x0002f688) cam4_image_uncrop_pane_g1

0x540e,	// (0x0002f691) cam4_image_uncrop_pane_g2

0x5417,	// (0x0002f69a) cam4_image_uncrop_pane_g3

0x5420,	// (0x0002f6a3) cam4_image_uncrop_pane_g4

0x0003,

0xf7dd,	// (0x00039a60) cam4_image_uncrop_pane_g

0x9992,	// (0x00033c15) dia3_listrow_pane_ParamLimits

0xbe20,	// (0x000360a3) main_phob2_pane

0x848d,	// (0x00032710) cell_tport_appsw_pane_cp02_ParamLimits

0x848d,	// (0x00032710) cell_tport_appsw_pane_cp02

0x84a1,	// (0x00032724) cell_tport_appsw_pane_cp03_ParamLimits

0x84a1,	// (0x00032724) cell_tport_appsw_pane_cp03

0xbe20,	// (0x000360a3) phob2_contact_card_pane

0xbe20,	// (0x000360a3) phob2_listscroll_pane

0x9c58,	// (0x00033edb) phob2_list_pane

0x8dc5,	// (0x00033048) scroll_pane_cp034

0x9c60,	// (0x00033ee3) phob2_cc_data_pane_ParamLimits

0x9c60,	// (0x00033ee3) phob2_cc_data_pane

0x9c7f,	// (0x00033f02) phob2_cc_listscroll_pane_ParamLimits

0x9c7f,	// (0x00033f02) phob2_cc_listscroll_pane

0x970b,	// (0x0003398e) list_double_large_graphic_phob2_pane_ParamLimits

0x970b,	// (0x0003398e) list_double_large_graphic_phob2_pane

0x9c9d,	// (0x00033f20) list_double_large_graphic_phob2_pane_g1_ParamLimits

0x9c9d,	// (0x00033f20) list_double_large_graphic_phob2_pane_g1

0x9caa,	// (0x00033f2d) list_double_large_graphic_phob2_pane_g2_ParamLimits

0x9caa,	// (0x00033f2d) list_double_large_graphic_phob2_pane_g2

0x0003,

0xfd70,	// (0x00039ff3) list_double_large_graphic_phob2_pane_g_ParamLimits

0xfd70,	// (0x00039ff3) list_double_large_graphic_phob2_pane_g

0x9cd0,	// (0x00033f53) list_double_large_graphic_phob2_pane_t1_ParamLimits

0x9cd0,	// (0x00033f53) list_double_large_graphic_phob2_pane_t1

0x9ce5,	// (0x00033f68) list_double_large_graphic_phob2_pane_t2_ParamLimits

0x9ce5,	// (0x00033f68) list_double_large_graphic_phob2_pane_t2

0x0001,

0xfd79,	// (0x00039ffc) list_double_large_graphic_phob2_pane_t_ParamLimits

0xfd79,	// (0x00039ffc) list_double_large_graphic_phob2_pane_t

0xbe20,	// (0x000360a3) list_highlight_pane_cp024

0x9cfa,	// (0x00033f7d) phob2_cc_button_pane

0x9d02,	// (0x00033f85) phob2_cc_data_pane_g1_ParamLimits

0x9d02,	// (0x00033f85) phob2_cc_data_pane_g1

0x9d19,	// (0x00033f9c) phob2_cc_data_pane_g2_ParamLimits

0x9d19,	// (0x00033f9c) phob2_cc_data_pane_g2

0x0001,

0xfd7e,	// (0x0003a001) phob2_cc_data_pane_g_ParamLimits

0xfd7e,	// (0x0003a001) phob2_cc_data_pane_g

0x9d2b,	// (0x00033fae) phob2_cc_data_pane_t1_ParamLimits

0x9d2b,	// (0x00033fae) phob2_cc_data_pane_t1

0x9d43,	// (0x00033fc6) phob2_cc_data_pane_t2_ParamLimits

0x9d43,	// (0x00033fc6) phob2_cc_data_pane_t2

0x9d5b,	// (0x00033fde) phob2_cc_data_pane_t3_ParamLimits

0x9d5b,	// (0x00033fde) phob2_cc_data_pane_t3

0x0002,

0xfd83,	// (0x0003a006) phob2_cc_data_pane_t_ParamLimits

0xfd83,	// (0x0003a006) phob2_cc_data_pane_t

0x9d73,	// (0x00033ff6) phob2_cc_list_pane_ParamLimits

0x9d73,	// (0x00033ff6) phob2_cc_list_pane

0x618b,	// (0x0003040e) scroll_pane_cp035_ParamLimits

0x618b,	// (0x0003040e) scroll_pane_cp035

0xc40e,	// (0x00036691) bg_button_pane_cp033

0x9d7f,	// (0x00034002) phob2_cc_button_pane_g1

0x9d8b,	// (0x0003400e) phob2_cc_button_pane_t1

0x9da0,	// (0x00034023) phob2_cc_button_pane_t2

0x0001,

0xfd8a,	// (0x0003a00d) phob2_cc_button_pane_t

0x9db2,	// (0x00034035) list_double_large_graphic_phob2_cc_pane_ParamLimits

0x9db2,	// (0x00034035) list_double_large_graphic_phob2_cc_pane

0x9de4,	// (0x00034067) list_double_large_graphic_phob2_cc_pane_g1_ParamLimits

0x9de4,	// (0x00034067) list_double_large_graphic_phob2_cc_pane_g1

0x9df0,	// (0x00034073) list_double_large_graphic_phob2_cc_pane_g2_ParamLimits

0x9df0,	// (0x00034073) list_double_large_graphic_phob2_cc_pane_g2

0x9dfc,	// (0x0003407f) list_double_large_graphic_phob2_cc_pane_g3_ParamLimits

0x9dfc,	// (0x0003407f) list_double_large_graphic_phob2_cc_pane_g3

0x9e08,	// (0x0003408b) list_double_large_graphic_phob2_cc_pane_g4_ParamLimits

0x9e08,	// (0x0003408b) list_double_large_graphic_phob2_cc_pane_g4

0x9e14,	// (0x00034097) list_double_large_graphic_phob2_cc_pane_g5_ParamLimits

0x9e14,	// (0x00034097) list_double_large_graphic_phob2_cc_pane_g5

0x0004,

0xfd8f,	// (0x0003a012) list_double_large_graphic_phob2_cc_pane_g_ParamLimits

0xfd8f,	// (0x0003a012) list_double_large_graphic_phob2_cc_pane_g

0x9e20,	// (0x000340a3) list_double_large_graphic_phob2_cc_pane_t1_ParamLimits

0x9e20,	// (0x000340a3) list_double_large_graphic_phob2_cc_pane_t1

0x9e49,	// (0x000340cc) list_double_large_graphic_phob2_cc_pane_t2_ParamLimits

0x9e49,	// (0x000340cc) list_double_large_graphic_phob2_cc_pane_t2

0x0001,

0xfd9a,	// (0x0003a01d) list_double_large_graphic_phob2_cc_pane_t_ParamLimits

0xfd9a,	// (0x0003a01d) list_double_large_graphic_phob2_cc_pane_t

0x9e72,	// (0x000340f5) list_highlight_pane_cp025_ParamLimits

0x9e72,	// (0x000340f5) list_highlight_pane_cp025

0xc40e,	// (0x00036691) bg_button_pane_cp033_ParamLimits

0x9d7f,	// (0x00034002) phob2_cc_button_pane_g1_ParamLimits

0x9d8b,	// (0x0003400e) phob2_cc_button_pane_t1_ParamLimits

0x9da0,	// (0x00034023) phob2_cc_button_pane_t2_ParamLimits

0xfd8a,	// (0x0003a00d) phob2_cc_button_pane_t_ParamLimits

0x1d3b,	// (0x0002bfbe) popup_wgtman_window

0x593d,	// (0x0002fbc0) scroll_pane_cp038

0x9663,	// (0x000338e6) wgtman_btn_pane_cp_01_ParamLimits

0x9663,	// (0x000338e6) wgtman_btn_pane_cp_01

0x9e80,	// (0x00034103) wgtman_content_pane

0x9e89,	// (0x0003410c) wgtman_heading_pane

0xbe20,	// (0x000360a3) bg_heading_pane_cp02

0x9e92,	// (0x00034115) wgtman_heading_pane_g1

0x9e9a,	// (0x0003411d) wgtman_heading_pane_t1

0x9ea8,	// (0x0003412b) scroll_pane_cp036

0x9eb0,	// (0x00034133) wgtman_list_pane

0x7c74,	// (0x00031ef7) wgtman_list_pane_t1_ParamLimits

0x7c74,	// (0x00031ef7) wgtman_list_pane_t1

0xb80b,	// (0x00035a8e) cam4_grid_pane

0x5f31,	// (0x000301b4) bg_button_pane_cp015_ParamLimits

0x5f42,	// (0x000301c5) bg_button_pane_cp016_ParamLimits

0x5f4e,	// (0x000301d1) bg_button_pane_cp017_ParamLimits

0x5fae,	// (0x00030231) popup_vitu2_query_window_g3_ParamLimits

0x5fae,	// (0x00030231) popup_vitu2_query_window_g3

0x604f,	// (0x000302d2) popup_vitu2_query_window_t6_ParamLimits

0x604f,	// (0x000302d2) popup_vitu2_query_window_t6

0x607a,	// (0x000302fd) popup_vitu2_query_window_t7_ParamLimits

0x607a,	// (0x000302fd) popup_vitu2_query_window_t7

0x5405,	// (0x0002f688) cam4_grid_pane_g1

0x540e,	// (0x0002f691) cam4_grid_pane_g2

0x9eb8,	// (0x0003413b) cam4_grid_pane_g3

0x9ec1,	// (0x00034144) cam4_grid_pane_g4

0x0003,

0xfd9f,	// (0x0003a022) cam4_grid_pane_g

0x258d,	// (0x0002c810) aid_placing_vt_slider_lsc_ParamLimits

0x288a,	// (0x0002cb0d) vidtel_button_pane_ParamLimits

0x288a,	// (0x0002cb0d) vidtel_button_pane

0xbe20,	// (0x000360a3) bg_button_pane_cp034

0x9ecc,	// (0x0003414f) vidtel_button_pane_g1

0x9ed4,	// (0x00034157) vidtel_button_pane_t1

0x5d1c,	// (0x0002ff9f) aid_size_vtel_slider_touch

0x618b,	// (0x0003040e) scroll_pane_cp039

0x7625,	// (0x000318a8) ncim_query_button_pane_cp01_ParamLimits

0x7644,	// (0x000318c7) ncimui_query_pane_g1_ParamLimits

0xc40e,	// (0x00036691) input_focus_pane_cp012_ParamLimits

0x7669,	// (0x000318ec) ncim_query_entry_pane_t1_ParamLimits

0x618b,	// (0x0003040e) scroll_pane_cp039_ParamLimits

0xd028,	// (0x000372ab) navi_pane_bcale_mc_g1

0xd030,	// (0x000372b3) navi_pane_bcale_mc_t1

0x80b5,	// (0x00032338) main_sp_fs_email_pane_g1

0x80c1,	// (0x00032344) main_sp_fs_email_pane_g2

0x0001,

0xfba2,	// (0x00039e25) main_sp_fs_email_pane_g

0x8af0,	// (0x00032d73) list_single_cale_mrui_row_pane_g3_ParamLimits

0x8af0,	// (0x00032d73) list_single_cale_mrui_row_pane_g3

0x8ec8,	// (0x0003314b) list_single_recal_day_pane_g5_event_pane

0x8ede,	// (0x00033161) list_single_recal_day_pane_g7

0x9eea,	// (0x0003416d) list_recal_day_event_pane_cp01

0x9ef3,	// (0x00034176) list_recal_vselct_arw_lo_pane_cp01

0x9efb,	// (0x0003417e) list_recal_vselct_arw_up_pane_cp01

0x9f03,	// (0x00034186) list_recal_vselct_pane_cp01

0x5e39,	// (0x000300bc) list_recal_day_event_pane_cp01_g1

0x9f0d,	// (0x00034190) list_recal_day_event_pane_cp01_t1

0x8ee6,	// (0x00033169) list_single_recal_day_pane_t1_ParamLimits

0x8ef8,	// (0x0003317b) list_single_recal_day_pane_t2_ParamLimits

0xfc82,	// (0x00039f05) list_single_recal_day_pane_t_ParamLimits

0xc4a6,	// (0x00036729) bg_notes_pane_ParamLimits

0xc59b,	// (0x0003681e) list_notes_pane_ParamLimits

0x1da0,	// (0x0002c023) scroll_pane_cp06_ParamLimits

0xc5bd,	// (0x00036840) main_notes_pane_ParamLimits

0xc40e,	// (0x00036691) main_welc_pane

0x9f50,	// (0x000341d3) main_welc_body_pane_ParamLimits

0x9f50,	// (0x000341d3) main_welc_body_pane

0x9f6d,	// (0x000341f0) main_welc_opti_pane_ParamLimits

0x9f6d,	// (0x000341f0) main_welc_opti_pane

0x9fe4,	// (0x00034267) main_welc_pane_t1_ParamLimits

0x9fe4,	// (0x00034267) main_welc_pane_t1

0xa1e4,	// (0x00034467) main_welc_body_row_pane_ParamLimits

0xa1e4,	// (0x00034467) main_welc_body_row_pane

0xc513,	// (0x00036796) main_welc_opti_row_pane_ParamLimits

0xc513,	// (0x00036796) main_welc_opti_row_pane

0xa1f9,	// (0x0003447c) main_welc_opti_row_pane_g1

0xa201,	// (0x00034484) main_welc_opti_row_pane_t1

0xa210,	// (0x00034493) main_welc_body_row_pane_t1

0x9474,	// (0x000336f7) popup_notif_wgt_heading_pane

0x949e,	// (0x00033721) aid_size_list_notif_wgt_del_ParamLimits

0x94ab,	// (0x0003372e) list_notif_wgt_row_pane_g1_ParamLimits

0x94b7,	// (0x0003373a) list_notif_wgt_row_pane_g2_ParamLimits

0x94c6,	// (0x00033749) list_notif_wgt_row_pane_g3_ParamLimits

0xfce9,	// (0x00039f6c) list_notif_wgt_row_pane_g_ParamLimits

0x94d3,	// (0x00033756) list_notif_wgt_row_pane_t1_ParamLimits

0x94e9,	// (0x0003376c) list_notif_wgt_row_pane_t2_ParamLimits

0x94fb,	// (0x0003377e) list_notif_wgt_row_pane_t3_ParamLimits

0xfcf0,	// (0x00039f73) list_notif_wgt_row_pane_t_ParamLimits

0x971e,	// (0x000339a1) listrow_wgtman_pane_g1_ParamLimits

0x972b,	// (0x000339ae) listrow_wgtman_pane_g2_ParamLimits

0xfd20,	// (0x00039fa3) listrow_wgtman_pane_g_ParamLimits

0x9749,	// (0x000339cc) listrow_wgtman_pane_t1_ParamLimits

0x9761,	// (0x000339e4) listrow_wgtman_pane_t2_ParamLimits

0xfd25,	// (0x00039fa8) listrow_wgtman_pane_t_ParamLimits

0x9787,	// (0x00033a0a) wait_bar_pane_cp09_ParamLimits

0xbe20,	// (0x000360a3) bg_popup_heading_pane_cp02

0xa21f,	// (0x000344a2) popup_notif_wgt_heading_pane_g1

0xa227,	// (0x000344aa) popup_notif_wgt_heading_pane_t1

0xbe20,	// (0x000360a3) main_vids_pane

0xbe20,	// (0x000360a3) vids_listscroll_pane

0xa235,	// (0x000344b8) scroll_pane_cp040

0xbe20,	// (0x000360a3) vids_list_pane

0xa240,	// (0x000344c3) vids_list_double_pane_ParamLimits

0xa240,	// (0x000344c3) vids_list_double_pane

0xa251,	// (0x000344d4) vids_list_double_pane_g1

0xa25a,	// (0x000344dd) vids_list_double_pane_t1

0xa269,	// (0x000344ec) vids_list_double_pane_t2

0x0001,

0xfdbe,	// (0x0003a041) vids_list_double_pane_t

0xb21b,	// (0x0003549e) main_ncimui_pane_ParamLimits

0x7344,	// (0x000315c7) main_ncimui_pane_g1_ParamLimits

0x7350,	// (0x000315d3) main_ncimui_pane_g2_ParamLimits

0x7350,	// (0x000315d3) main_ncimui_pane_g2

0x0001,

0xfab5,	// (0x00039d38) main_ncimui_pane_g_ParamLimits

0xfab5,	// (0x00039d38) main_ncimui_pane_g

0x9f88,	// (0x0003420b) main_welc_pane_g1_ParamLimits

0x9f88,	// (0x0003420b) main_welc_pane_g1

0x9f9d,	// (0x00034220) main_welc_pane_g2_ParamLimits

0x9f9d,	// (0x00034220) main_welc_pane_g2

0x0003,

0xfda8,	// (0x0003a02b) main_welc_pane_g_ParamLimits

0xfda8,	// (0x0003a02b) main_welc_pane_g

0xc4a6,	// (0x00036729) listscroll_mce_pane_ParamLimits

0xd17d,	// (0x00037400) wait_bar_pane_cp10

0xe484,	// (0x00038707) main_cale_day_pane_ParamLimits

0xe484,	// (0x00038707) main_cale_week_pane_ParamLimits

0xc4a6,	// (0x00036729) main_messa_pane_ParamLimits

0x4e2d,	// (0x0002f0b0) main_clock2_btn_pane_ParamLimits

0x4e2d,	// (0x0002f0b0) main_clock2_btn_pane

0xecf7,	// (0x00038f7a) main_clock2_btn_pane_cp01_ParamLimits

0xecf7,	// (0x00038f7a) main_clock2_btn_pane_cp01

0x8a2f,	// (0x00032cb2) list_cale_mrui_pane_ParamLimits

0x9554,	// (0x000337d7) main_cf0_pane_g2

0x0001,

0xfcf7,	// (0x00039f7a) main_cf0_pane_g

0x99ef,	// (0x00033c72) area_left_week_number_pane_ParamLimits

0x99fb,	// (0x00033c7e) area_top_day_name_pane_ParamLimits

0x9a0e,	// (0x00033c91) frame_month_view_pane_ParamLimits

0x9a21,	// (0x00033ca4) grid_month_view_pane_ParamLimits

0x9a9d,	// (0x00033d20) frm_month_g1_ParamLimits

0x9aaa,	// (0x00033d2d) frm_month_g2_ParamLimits

0x9abd,	// (0x00033d40) frm_month_g3_ParamLimits

0x9ad0,	// (0x00033d53) frm_month_g4_ParamLimits

0x9ae3,	// (0x00033d66) frm_month_g5_ParamLimits

0x9af6,	// (0x00033d79) frm_month_g6_ParamLimits

0x9b09,	// (0x00033d8c) frm_month_g7_ParamLimits

0x9b1c,	// (0x00033d9f) frm_month_g8_ParamLimits

0x9b29,	// (0x00033dac) frm_month_g9_ParamLimits

0x9b39,	// (0x00033dbc) frm_month_g10_ParamLimits

0x9b49,	// (0x00033dcc) frm_month_g11_ParamLimits

0x9b59,	// (0x00033ddc) frm_month_g12_ParamLimits

0x9b6b,	// (0x00033dee) frm_month_g13_ParamLimits

0x9b7d,	// (0x00033e00) frm_month_g14_ParamLimits

0x9b91,	// (0x00033e14) frm_month_g15_ParamLimits

0x9ba5,	// (0x00033e28) frm_month_g16_ParamLimits

0xfd4f,	// (0x00039fd2) frm_month_g_ParamLimits

0x9bb9,	// (0x00033e3c) cell_top_day_name_pane_t1_ParamLimits

0x9bcc,	// (0x00033e4f) cell_area_left_week_number_pane_g1_ParamLimits

0x9bd8,	// (0x00033e5b) cell_area_left_week_number_pane_t1_ParamLimits

0xc521,	// (0x000367a4) cell_month_view_pane_g1_ParamLimits

0x9beb,	// (0x00033e6e) cell_month_view_pane_t1_ParamLimits

0xc49e,	// (0x00036721) main_clock2_btn_pane_g1

0xa279,	// (0x000344fc) main_clock2_btn_pane_t1

0xc40e,	// (0x00036691) listscroll_cmail_pane_ParamLimits

0x80b5,	// (0x00032338) main_sp_fs_email_pane_g1_ParamLimits

0x80c1,	// (0x00032344) main_sp_fs_email_pane_g2_ParamLimits

0xfba2,	// (0x00039e25) main_sp_fs_email_pane_g_ParamLimits

0x8e36,	// (0x000330b9) list_recal_day_pane_ParamLimits

0x8e47,	// (0x000330ca) mian_recal_day_pane_t1

0x8297,	// (0x0003251a) list_single_dyc_row_text_pane_t4_ParamLimits

0x8297,	// (0x0003251a) list_single_dyc_row_text_pane_t4

0x82e0,	// (0x00032563) list_single_dyc_row_text_pane_t5_ParamLimits

0x82e0,	// (0x00032563) list_single_dyc_row_text_pane_t5

0x8356,	// (0x000325d9) list_single_dyc_row_text_pane_t6_ParamLimits

0x8356,	// (0x000325d9) list_single_dyc_row_text_pane_t6

0x32e2,	// (0x0002d565) aid_mgn_list_cale_time_pane

0xb21b,	// (0x0003549e) main_gallery2_pane_ParamLimits

0xed0d,	// (0x00038f90) main_clock2_pane_cp01_t1

0xed1b,	// (0x00038f9e) main_clock2_pane_cp01_t3

0x0001,

0xf6e5,	// (0x00039968) main_clock2_pane_cp01_t

0x209c,	// (0x0002c31f) cale_week_scroll_pane_g16_ParamLimits

0x209c,	// (0x0002c31f) cale_week_scroll_pane_g16

0xc786,	// (0x00036a09) vorec_slider_pane

0x9ed4,	// (0x00034157) vidtel_button_pane_t1_ParamLimits

0x9082,	// (0x00033305) main_fs_bigclock_clock_pane_g1_ParamLimits

0x9082,	// (0x00033305) main_fs_bigclock_clock_pane_g2_ParamLimits

0x9093,	// (0x00033316) main_fs_bigclock_clock_pane_g3_ParamLimits

0x9093,	// (0x00033316) main_fs_bigclock_clock_pane_g4_ParamLimits

0xfca5,	// (0x00039f28) main_fs_bigclock_clock_pane_g_ParamLimits

0x90a6,	// (0x00033329) main_fs_bigclock_clock_pane_t1_ParamLimits

0x90bc,	// (0x0003333f) main_fs_bigclock_clock_pane_t2_ParamLimits

0xfcae,	// (0x00039f31) main_fs_bigclock_clock_pane_t_ParamLimits

0x4709,	// (0x0002e98c) main_mup3_lyrics_pane_ParamLimits

0x4709,	// (0x0002e98c) main_mup3_lyrics_pane

0xa287,	// (0x0003450a) main_mup3_lyrics_pane_t1_ParamLimits

0xa287,	// (0x0003450a) main_mup3_lyrics_pane_t1

0xb501,	// (0x00035784) aid_main_mp4_pane_t1_area

0xb50b,	// (0x0003578e) aid_main_mp4_pane_t2_area

0xb5b5,	// (0x00035838) main_mp4_pane_g7_ParamLimits

0xb5b5,	// (0x00035838) main_mp4_pane_g7

0xb5c1,	// (0x00035844) main_mp4_pane_g8_ParamLimits

0xb5c1,	// (0x00035844) main_mp4_pane_g8

0x5349,	// (0x0002f5cc) aid_call6_pane_g1_size

0x9dcd,	// (0x00034050) list_double_large_graphic_phob2_other_pane_ParamLimits

0x9dcd,	// (0x00034050) list_double_large_graphic_phob2_other_pane

0xcf59,	// (0x000371dc) list_double_large_graphic_phob2_other_pane_g1

0xbe20,	// (0x000360a3) list_highlight_pane_cp026

0xc40e,	// (0x00036691) main_welc_pane_ParamLimits

0x801e,	// (0x000322a1) main_sp_fs_ctrlbar_pane_g3_ParamLimits

0x801e,	// (0x000322a1) main_sp_fs_ctrlbar_pane_g3

0x8038,	// (0x000322bb) main_sp_fs_ctrlbar_pane_g4_ParamLimits

0x8038,	// (0x000322bb) main_sp_fs_ctrlbar_pane_g4

0x806c,	// (0x000322ef) toolbar2_fixed_button_pane_cp01

0x8077,	// (0x000322fa) toolbar2_fixed_button_pane_cp02

0x8084,	// (0x00032307) toolbar2_fixed_button_pane_cp03

0x9f2e,	// (0x000341b1) list_welc_entry_pane_ParamLimits

0x9f2e,	// (0x000341b1) list_welc_entry_pane

0x9fb2,	// (0x00034235) main_welc_pane_g3_ParamLimits

0x9fb2,	// (0x00034235) main_welc_pane_g3

0xa002,	// (0x00034285) main_welc_pane_t2_ParamLimits

0xa002,	// (0x00034285) main_welc_pane_t2

0xa01d,	// (0x000342a0) main_welc_pane_t3_ParamLimits

0xa01d,	// (0x000342a0) main_welc_pane_t3

0x0005,

0xfdb1,	// (0x0003a034) main_welc_pane_t_ParamLimits

0xfdb1,	// (0x0003a034) main_welc_pane_t

0xa14d,	// (0x000343d0) welc_button_pane_ParamLimits

0xa14d,	// (0x000343d0) welc_button_pane

0xa1cf,	// (0x00034452) welc_service_logo_pane_ParamLimits

0xa1cf,	// (0x00034452) welc_service_logo_pane

0xa2a3,	// (0x00034526) list_single_welc_entry_pane_ParamLimits

0xa2a3,	// (0x00034526) list_single_welc_entry_pane

0xa2b4,	// (0x00034537) list_single_welc_entry_pane_g1

0xa2bc,	// (0x0003453f) list_single_welc_entry_pane_t1

0xa2ca,	// (0x0003454d) list_single_welc_entry_pane_t2

0x0001,

0xfdc3,	// (0x0003a046) list_single_welc_entry_pane_t

0xbe20,	// (0x000360a3) bg_button_pane_cp035

0xa2d8,	// (0x0003455b) welc_button_pane_t1

0xa2e6,	// (0x00034569) welc_service_logo_pane_g1

0xa2ef,	// (0x00034572) welc_service_logo_pane_g2

0x0001,

0xfdc8,	// (0x0003a04b) welc_service_logo_pane_g

0xb229,	// (0x000354ac) main_int_radio_pane

0x72e5,	// (0x00031568) list_single_fs_dyc_pane_g1

0x9cb6,	// (0x00033f39) list_double_large_graphic_phob2_pane_g3_ParamLimits

0x9cb6,	// (0x00033f39) list_double_large_graphic_phob2_pane_g3

0x9cc2,	// (0x00033f45) list_double_large_graphic_phob2_pane_g4_ParamLimits

0x9cc2,	// (0x00033f45) list_double_large_graphic_phob2_pane_g4

0xa2f8,	// (0x0003457b) main_int_radio1_pane_ParamLimits

0xa2f8,	// (0x0003457b) main_int_radio1_pane

0xa315,	// (0x00034598) find_pane_cp02

0xa31e,	// (0x000345a1) input_focus_pane_cp12_ParamLimits

0xa31e,	// (0x000345a1) input_focus_pane_cp12

0xa32e,	// (0x000345b1) input_focus_pane_cp13_ParamLimits

0xa32e,	// (0x000345b1) input_focus_pane_cp13

0xa342,	// (0x000345c5) input_focus_pane_cp14_ParamLimits

0xa342,	// (0x000345c5) input_focus_pane_cp14

0xa356,	// (0x000345d9) int_radio1_listscroll_pane

0xa360,	// (0x000345e3) main_int_radio1_pane_g1_ParamLimits

0xa360,	// (0x000345e3) main_int_radio1_pane_g1

0xa378,	// (0x000345fb) main_int_radio1_pane_t1_ParamLimits

0xa378,	// (0x000345fb) main_int_radio1_pane_t1

0xa393,	// (0x00034616) main_int_radio1_pane_t2_ParamLimits

0xa393,	// (0x00034616) main_int_radio1_pane_t2

0xa3ae,	// (0x00034631) main_int_radio1_pane_t3_ParamLimits

0xa3ae,	// (0x00034631) main_int_radio1_pane_t3

0xa3c9,	// (0x0003464c) main_int_radio1_pane_t4_ParamLimits

0xa3c9,	// (0x0003464c) main_int_radio1_pane_t4

0xa3db,	// (0x0003465e) main_int_radio1_pane_t5_ParamLimits

0xa3db,	// (0x0003465e) main_int_radio1_pane_t5

0xa3ed,	// (0x00034670) main_int_radio1_pane_t6_ParamLimits

0xa3ed,	// (0x00034670) main_int_radio1_pane_t6

0xa402,	// (0x00034685) main_int_radio1_pane_t7_ParamLimits

0xa402,	// (0x00034685) main_int_radio1_pane_t7

0xa417,	// (0x0003469a) main_int_radio1_pane_t8_ParamLimits

0xa417,	// (0x0003469a) main_int_radio1_pane_t8

0xa436,	// (0x000346b9) main_int_radio1_pane_t9_ParamLimits

0xa436,	// (0x000346b9) main_int_radio1_pane_t9

0xa448,	// (0x000346cb) main_int_radio1_pane_t10_ParamLimits

0xa448,	// (0x000346cb) main_int_radio1_pane_t10

0xa46e,	// (0x000346f1) main_int_radio1_pane_t11_ParamLimits

0xa46e,	// (0x000346f1) main_int_radio1_pane_t11

0xa494,	// (0x00034717) main_int_radio1_pane_t12_ParamLimits

0xa494,	// (0x00034717) main_int_radio1_pane_t12

0x000b,

0xfdcd,	// (0x0003a050) main_int_radio1_pane_t_ParamLimits

0xfdcd,	// (0x0003a050) main_int_radio1_pane_t

0xa4a6,	// (0x00034729) int_radio_list_pane

0x8dc5,	// (0x00033048) scroll_pane_cp037

0xa4ae,	// (0x00034731) list_double_large_graphic_int_radio_pane_ParamLimits

0xa4ae,	// (0x00034731) list_double_large_graphic_int_radio_pane

0xa4c7,	// (0x0003474a) list_double_large_graphic_int_radio_pane_g1

0xa4d0,	// (0x00034753) list_double_large_graphic_int_radio_pane_t1

0xa4de,	// (0x00034761) list_double_large_graphic_int_radio_pane_t2

0x0001,

0xfde6,	// (0x0003a069) list_double_large_graphic_int_radio_pane_t

0xbe20,	// (0x000360a3) list_highlight_pane_cp027

0x9f48,	// (0x000341cb) main_button_pane_4

0x9fc5,	// (0x00034248) main_welc_pane_g4_ParamLimits

0x9fc5,	// (0x00034248) main_welc_pane_g4

0xa036,	// (0x000342b9) main_welc_pane_t4_ParamLimits

0xa036,	// (0x000342b9) main_welc_pane_t4

0xa04d,	// (0x000342d0) main_welc_pane_t5_ParamLimits

0xa04d,	// (0x000342d0) main_welc_pane_t5

0xa08a,	// (0x0003430d) main_welc_pane_t6_ParamLimits

0xa08a,	// (0x0003430d) main_welc_pane_t6

0xa164,	// (0x000343e7) welc_button_pane_2_ParamLimits

0xa164,	// (0x000343e7) welc_button_pane_2

0xa180,	// (0x00034403) welc_button_pane_3_ParamLimits

0xa180,	// (0x00034403) welc_button_pane_3

0xa19f,	// (0x00034422) welc_button_pane_4

0xa1a7,	// (0x0003442a) welc_button_pane_5_ParamLimits

0xa1a7,	// (0x0003442a) welc_button_pane_5

0x08f7,	// (0x0002ab7a) main_popup_welc_pane

0xa504,	// (0x00034787) main_welc_sk_g3

0xa50e,	// (0x00034791) main_welc_sk_g4

0xa518,	// (0x0003479b) main_welc_sk_t3

0xa528,	// (0x000347ab) main_welc_sk_t4

0xa538,	// (0x000347bb) popup_welc_pane_t4

0xa546,	// (0x000347c9) popup_welc_pane_t5

0xa554,	// (0x000347d7) popup_welc_pane_t6

0xb229,	// (0x000354ac) main_acti_pane

0xbe20,	// (0x000360a3) main_sso_pane

0xa582,	// (0x00034805) sso_body_pane_ParamLimits

0xa582,	// (0x00034805) sso_body_pane

0xa596,	// (0x00034819) sso_logo_pane_ParamLimits

0xa596,	// (0x00034819) sso_logo_pane

0xa5cf,	// (0x00034852) sso_sk_pane_ParamLimits

0xa5cf,	// (0x00034852) sso_sk_pane

0xba0c,	// (0x00035c8f) main_sso_logo_pane_g1

0xa5e1,	// (0x00034864) sso_sk_pane_t1_ParamLimits

0xa5e1,	// (0x00034864) sso_sk_pane_t1

0xa5fb,	// (0x0003487e) sso_sk_pane_t2_ParamLimits

0xa5fb,	// (0x0003487e) sso_sk_pane_t2

0x0001,

0xfdeb,	// (0x0003a06e) sso_sk_pane_t_ParamLimits

0xfdeb,	// (0x0003a06e) sso_sk_pane_t

0xba17,	// (0x00035c9a) aid_sso_gap

0xba20,	// (0x00035ca3) aid_sso_txt1

0xba2a,	// (0x00035cad) aid_sso_txt2

0xba34,	// (0x00035cb7) aid_sso_txt3

0x0002,

0xfdf0,	// (0x0003a073) aid_sso_txt

0xba3e,	// (0x00035cc1) aid_sso_widget

0xa665,	// (0x000348e8) sso_btn_pane_ParamLimits

0xa665,	// (0x000348e8) sso_btn_pane

0xa6e9,	// (0x0003496c) sso_option_pane_ParamLimits

0xa6e9,	// (0x0003496c) sso_option_pane

0xa79f,	// (0x00034a22) sso_query_pane_ParamLimits

0xa79f,	// (0x00034a22) sso_query_pane

0xa7f5,	// (0x00034a78) sso_query_pane_cp01_ParamLimits

0xa7f5,	// (0x00034a78) sso_query_pane_cp01

0xa84f,	// (0x00034ad2) sso_t_hdr_pane_ParamLimits

0xa84f,	// (0x00034ad2) sso_t_hdr_pane

0xa879,	// (0x00034afc) sso_t_nml_pane_ParamLimits

0xa879,	// (0x00034afc) sso_t_nml_pane

0xba48,	// (0x00035ccb) sso_t_sub_pane

0xa5a3,	// (0x00034826) sso_popup_window_ParamLimits

0xa5a3,	// (0x00034826) sso_popup_window

0xa611,	// (0x00034894) sso_apps_pane_ParamLimits

0xa611,	// (0x00034894) sso_apps_pane

0xa63b,	// (0x000348be) sso_body_pane_g1

0xa645,	// (0x000348c8) sso_body_pane_t1

0xa655,	// (0x000348d8) sso_body_pane_t2

0x0001,

0xfdf7,	// (0x0003a07a) sso_body_pane_t

0xa6b1,	// (0x00034934) sso_btn_pane_cp01_ParamLimits

0xa6b1,	// (0x00034934) sso_btn_pane_cp01

0xa773,	// (0x000349f6) sso_prog_pane_ParamLimits

0xa773,	// (0x000349f6) sso_prog_pane

0xa8cf,	// (0x00034b52) sso_t_hdr_pane_t1_ParamLimits

0xa8cf,	// (0x00034b52) sso_t_hdr_pane_t1

0xba5d,	// (0x00035ce0) input_focus_pane_cp10_ParamLimits

0xba5d,	// (0x00035ce0) input_focus_pane_cp10

0xba71,	// (0x00035cf4) sso_query_pane_t1_ParamLimits

0xba71,	// (0x00035cf4) sso_query_pane_t1

0xba84,	// (0x00035d07) sso_query_pane_t2_ParamLimits

0xba84,	// (0x00035d07) sso_query_pane_t2

0xba9d,	// (0x00035d20) sso_query_pane_t3_ParamLimits

0xba9d,	// (0x00035d20) sso_query_pane_t3

0xbac7,	// (0x00035d4a) sso_query_pane_t4_ParamLimits

0xbac7,	// (0x00035d4a) sso_query_pane_t4

0x0003,

0xfdfc,	// (0x0003a07f) sso_query_pane_t_ParamLimits

0xfdfc,	// (0x0003a07f) sso_query_pane_t

0xa4fb,	// (0x0003477e) bg_button_pane_cp22

0xa4ec,	// (0x0003476f) sso_btn_pane_t1

0xa8e2,	// (0x00034b65) sso_t_nml_pane_t1_ParamLimits

0xa8e2,	// (0x00034b65) sso_t_nml_pane_t1

0xbaeb,	// (0x00035d6e) sso_option_row_pane_ParamLimits

0xbaeb,	// (0x00035d6e) sso_option_row_pane

0xbaf8,	// (0x00035d7b) sso_t_sub_pane_t1_ParamLimits

0xbaf8,	// (0x00035d7b) sso_t_sub_pane_t1

0xc40e,	// (0x00036691) bg_popup_window_pane_cp11_ParamLimits

0xc40e,	// (0x00036691) bg_popup_window_pane_cp11

0xbb15,	// (0x00035d98) popup_sk_window_cp01_ParamLimits

0xbb15,	// (0x00035d98) popup_sk_window_cp01

0xbb22,	// (0x00035da5) sso_popup_body_pane_ParamLimits

0xbb22,	// (0x00035da5) sso_popup_body_pane

0xbb2f,	// (0x00035db2) scroll_pane_cp21_ParamLimits

0xbb2f,	// (0x00035db2) scroll_pane_cp21

0xbb3c,	// (0x00035dbf) sso_popup_body_t_pane_ParamLimits

0xbb3c,	// (0x00035dbf) sso_popup_body_t_pane

0xbb49,	// (0x00035dcc) sso_popup_body_t_hdr_pane_ParamLimits

0xbb49,	// (0x00035dcc) sso_popup_body_t_hdr_pane

0xa8fd,	// (0x00034b80) sso_popup_body_t_nml_pane_ParamLimits

0xa8fd,	// (0x00034b80) sso_popup_body_t_nml_pane

0xa924,	// (0x00034ba7) sso_popup_body_t_sub_pane_ParamLimits

0xa924,	// (0x00034ba7) sso_popup_body_t_sub_pane

0xbb5b,	// (0x00035dde) sso_popup_body_t_hdr_pane_t1

0xa947,	// (0x00034bca) sso_popup_body_t_nml_pane_t1_ParamLimits

0xa947,	// (0x00034bca) sso_popup_body_t_nml_pane_t1

0xbb6b,	// (0x00035dee) sso_popup_body_t_sub_pane_t1_ParamLimits

0xbb6b,	// (0x00035dee) sso_popup_body_t_sub_pane_t1

0xc55f,	// (0x000367e2) sso_prog_pane_g1

0xa980,	// (0x00034c03) sso_apps_pane_comp1_ParamLimits

0xa980,	// (0x00034c03) sso_apps_pane_comp1

0xbb90,	// (0x00035e13) sso_apps_pane_comp1_g1

0xbb98,	// (0x00035e1b) sso_apps_pane_comp1_t1

0xbbb4,	// (0x00035e37) sso_option_row_pane_g1

0xbbbc,	// (0x00035e3f) sso_option_row_pane_t1

0x856a,	// (0x000327ed) list_cmail_pane_ParamLimits

0xbe20,	// (0x000360a3) main_call7_pane

0x9f1b,	// (0x0003419e) bg_welc_area_ParamLimits

0x9f1b,	// (0x0003419e) bg_welc_area

0xa0c8,	// (0x0003434b) sso_t_hdr_pane_a_t1_ParamLimits

0xa0c8,	// (0x0003434b) sso_t_hdr_pane_a_t1

0xa0e3,	// (0x00034366) sso_t_nml_pane_a_t1_ParamLimits

0xa0e3,	// (0x00034366) sso_t_nml_pane_a_t1

0xa112,	// (0x00034395) sso_t_sub_pane_a_t1_ParamLimits

0xa112,	// (0x00034395) sso_t_sub_pane_a_t1

0xa1bd,	// (0x00034440) welc_button_pane_cp01_ParamLimits

0xa1bd,	// (0x00034440) welc_button_pane_cp01

0xa4ec,	// (0x0003476f) sso_btn_pane_t1_copy1

0xa4fb,	// (0x0003477e) welc_button_pane_2_comp1

0xa562,	// (0x000347e5) sso_t_hdr_pane_p_t1

0xa572,	// (0x000347f5) sso_t_nml_pane_p_t1

0xb9fc,	// (0x00035c7f) sso_t_sub_pane_p_t1

0xbe20,	// (0x000360a3) main_att_pane

0xbe20,	// (0x000360a3) main_vod_pane

0xba48,	// (0x00035ccb) sso_t_sub_pane_ParamLimits

0xbba6,	// (0x00035e29) input_focus_pane_cp10_t1

0xbbbc,	// (0x00035e3f) sso_option_row_pane_t1_ParamLimits

0xa99a,	// (0x00034c1d) main_att_body_pane_ParamLimits

0xa99a,	// (0x00034c1d) main_att_body_pane

0xa9b0,	// (0x00034c33) att_btn_emg_pane_ParamLimits

0xa9b0,	// (0x00034c33) att_btn_emg_pane

0xa9cf,	// (0x00034c52) att_btn_pane_ParamLimits

0xa9cf,	// (0x00034c52) att_btn_pane

0xaa40,	// (0x00034cc3) att_btn_pane_cp01_ParamLimits

0xaa40,	// (0x00034cc3) att_btn_pane_cp01

0xaa60,	// (0x00034ce3) att_li_srv_pane_ParamLimits

0xaa60,	// (0x00034ce3) att_li_srv_pane

0xaa7d,	// (0x00034d00) att_opt_pane_ParamLimits

0xaa7d,	// (0x00034d00) att_opt_pane

0xaac7,	// (0x00034d4a) att_query_pane_ParamLimits

0xaac7,	// (0x00034d4a) att_query_pane

0xab40,	// (0x00034dc3) att_query_pane_cp01_ParamLimits

0xab40,	// (0x00034dc3) att_query_pane_cp01

0xab8c,	// (0x00034e0f) att_t_hdr_pane_ParamLimits

0xab8c,	// (0x00034e0f) att_t_hdr_pane

0xabf8,	// (0x00034e7b) att_t_nml_pane_ParamLimits

0xabf8,	// (0x00034e7b) att_t_nml_pane

0xac68,	// (0x00034eeb) att_t_nml_pane_cp01_ParamLimits

0xac68,	// (0x00034eeb) att_t_nml_pane_cp01

0xac94,	// (0x00034f17) att_t_nmlb_pane_ParamLimits

0xac94,	// (0x00034f17) att_t_nmlb_pane

0xad01,	// (0x00034f84) att_term_pane_ParamLimits

0xad01,	// (0x00034f84) att_term_pane

0xad4b,	// (0x00034fce) main_att_body_pane_g1_ParamLimits

0xad4b,	// (0x00034fce) main_att_body_pane_g1

0xbbd5,	// (0x00035e58) att_t_hdr_pane_t1_ParamLimits

0xbbd5,	// (0x00035e58) att_t_hdr_pane_t1

0xbbee,	// (0x00035e71) att_t_nml_pane_t1_ParamLimits

0xbbee,	// (0x00035e71) att_t_nml_pane_t1

0xbc13,	// (0x00035e96) att_btn_pane_t1

0xa4fb,	// (0x0003477e) bg_button_pane_cp23

0xad77,	// (0x00034ffa) att_li_srv_row_pane_ParamLimits

0xad77,	// (0x00034ffa) att_li_srv_row_pane

0xbc23,	// (0x00035ea6) att_t_nmlb_pane_t1_ParamLimits

0xbc23,	// (0x00035ea6) att_t_nmlb_pane_t1

0xbc41,	// (0x00035ec4) att_query_pane_t1

0xbc50,	// (0x00035ed3) att_query_pane_t2

0xbc5f,	// (0x00035ee2) att_query_pane_t3

0x0002,

0xfe05,	// (0x0003a088) att_query_pane_t

0xbc6e,	// (0x00035ef1) input_focus_pane_cp11

0xbc77,	// (0x00035efa) att_term_pane_t1_ParamLimits

0xbc77,	// (0x00035efa) att_term_pane_t1

0xbe20,	// (0x000360a3) att_opt_row_pane

0xbbb4,	// (0x00035e37) att_opt_row_pane_g1

0xbc94,	// (0x00035f17) att_opt_row_pane_t1_ParamLimits

0xbc94,	// (0x00035f17) att_opt_row_pane_t1

0xad87,	// (0x0003500a) att_li_srv_row_pane_g1

0xad8f,	// (0x00035012) att_li_srv_row_pane_t1_ParamLimits

0xad8f,	// (0x00035012) att_li_srv_row_pane_t1

0xada4,	// (0x00035027) att_li_srv_row_pane_t2_ParamLimits

0xada4,	// (0x00035027) att_li_srv_row_pane_t2

0x0001,

0xfe0c,	// (0x0003a08f) att_li_srv_row_pane_t_ParamLimits

0xfe0c,	// (0x0003a08f) att_li_srv_row_pane_t

0xbcad,	// (0x00035f30) att_btn_close_pane_g1

0xbe20,	// (0x000360a3) bg_button_pane_cp24

0xadb9,	// (0x0003503c) main_vod_body_pane_ParamLimits

0xadb9,	// (0x0003503c) main_vod_body_pane

0xadcd,	// (0x00035050) main_vod_body_pane_g1_ParamLimits

0xadcd,	// (0x00035050) main_vod_body_pane_g1

0xae01,	// (0x00035084) scroll_pane_cp24_ParamLimits

0xae01,	// (0x00035084) scroll_pane_cp24

0xae4f,	// (0x000350d2) vod_btn_pane_ParamLimits

0xae4f,	// (0x000350d2) vod_btn_pane

0xae91,	// (0x00035114) vod_det_pane_ParamLimits

0xae91,	// (0x00035114) vod_det_pane

0xaec1,	// (0x00035144) vod_logo_g1_ParamLimits

0xaec1,	// (0x00035144) vod_logo_g1

0xaeff,	// (0x00035182) vod_opt_pane_ParamLimits

0xaeff,	// (0x00035182) vod_opt_pane

0xaf32,	// (0x000351b5) vod_opt_pane_cp01_ParamLimits

0xaf32,	// (0x000351b5) vod_opt_pane_cp01

0xaf5e,	// (0x000351e1) vod_query_pane_ParamLimits

0xaf5e,	// (0x000351e1) vod_query_pane

0xaf89,	// (0x0003520c) vod_query_pane_cp01_ParamLimits

0xaf89,	// (0x0003520c) vod_query_pane_cp01

0xaf95,	// (0x00035218) vod_t_nml_pane_ParamLimits

0xaf95,	// (0x00035218) vod_t_nml_pane

0xb03e,	// (0x000352c1) vod_t_nml_pane_cp01_ParamLimits

0xb03e,	// (0x000352c1) vod_t_nml_pane_cp01

0xb07a,	// (0x000352fd) vod_t_sub_pane_ParamLimits

0xb07a,	// (0x000352fd) vod_t_sub_pane

0xb0ab,	// (0x0003532e) vod_t_sub_pane_cp01_ParamLimits

0xb0ab,	// (0x0003532e) vod_t_sub_pane_cp01

0xbc6e,	// (0x00035ef1) vod_query_field_pane

0xbcb5,	// (0x00035f38) vod_query_pane_t1

0xa4fb,	// (0x0003477e) bg_button_pane_cp25

0xa4ec,	// (0x0003476f) sso_btn_pane_t1_copy2

0xb0d7,	// (0x0003535a) vod_t_nml_pane_t1_ParamLimits

0xb0d7,	// (0x0003535a) vod_t_nml_pane_t1

0xbcc4,	// (0x00035f47) vod_opt_row_pane_ParamLimits

0xbcc4,	// (0x00035f47) vod_opt_row_pane

0xbcd6,	// (0x00035f59) vod_t_sub_pane_t1_ParamLimits

0xbcd6,	// (0x00035f59) vod_t_sub_pane_t1

0xbcef,	// (0x00035f72) vod_det_cell_pane_ParamLimits

0xbcef,	// (0x00035f72) vod_det_cell_pane

0xbe20,	// (0x000360a3) input_focus_pane_cp15

0xbd00,	// (0x00035f83) vod_query_field_pane_t1

0xbd0e,	// (0x00035f91) vod_opt_row_pane_g1_ParamLimits

0xbd0e,	// (0x00035f91) vod_opt_row_pane_g1

0xbd1a,	// (0x00035f9d) vod_opt_row_pane_t1_ParamLimits

0xbd1a,	// (0x00035f9d) vod_opt_row_pane_t1

0xbd39,	// (0x00035fbc) vod_det_cell_field_pane

0xbd42,	// (0x00035fc5) vod_det_cell_pane_g1

0xbd4a,	// (0x00035fcd) vod_det_cell_pane_t1

0xbe20,	// (0x000360a3) input_focus_pane_cp16

0xbd59,	// (0x00035fdc) vod_det_cell_field_pane_t1

0xb106,	// (0x00035389) call7_btn_grp_pane_ParamLimits

0xb106,	// (0x00035389) call7_btn_grp_pane

0xb120,	// (0x000353a3) call7_bubble_pane_ParamLimits

0xb120,	// (0x000353a3) call7_bubble_pane

0xb137,	// (0x000353ba) cell_call7_btn_pane_ParamLimits

0xb137,	// (0x000353ba) cell_call7_btn_pane

0xb14b,	// (0x000353ce) call7_pane_g1_ParamLimits

0xb14b,	// (0x000353ce) call7_pane_g1

0xb15a,	// (0x000353dd) call7_windows_conf_pane_ParamLimits

0xb15a,	// (0x000353dd) call7_windows_conf_pane

0xb174,	// (0x000353f7) popup_call7_1st_window_ParamLimits

0xb174,	// (0x000353f7) popup_call7_1st_window

0xb185,	// (0x00035408) popup_call7_2nd_window_ParamLimits

0xb185,	// (0x00035408) popup_call7_2nd_window

0xb196,	// (0x00035419) popup_call7_3rd_window_ParamLimits

0xb196,	// (0x00035419) popup_call7_3rd_window

0xbe20,	// (0x000360a3) bg_button_pane_cp26

0x97ab,	// (0x00033a2e) cell_call7_btn_pane_g1

0xb1a7,	// (0x0003542a) cell_call7_btn_pane_t1

0xbe20,	// (0x000360a3) bg_popup_window_pane_cp12

0xbd67,	// (0x00035fea) popup_call7_1st_window_g1

0xbd6f,	// (0x00035ff2) popup_call7_1st_window_g2

0xbd77,	// (0x00035ffa) popup_call7_1st_window_g3

0x0002,

0xfe11,	// (0x0003a094) popup_call7_1st_window_g

0xbd7f,	// (0x00036002) popup_call7_1st_window_t1

0xbd8e,	// (0x00036011) popup_call7_1st_window_t2

0xbd9c,	// (0x0003601f) popup_call7_1st_window_t3

0x0002,

0xfe18,	// (0x0003a09b) popup_call7_1st_window_t

0xbe20,	// (0x000360a3) bg_popup_window_pane_cp13

0xbdaa,	// (0x0003602d) popup_call7_2nd_window_g1

0xbdb2,	// (0x00036035) popup_call7_2nd_window_g2

0xbdba,	// (0x0003603d) popup_call7_2nd_window_g3

0x0002,

0xfe1f,	// (0x0003a0a2) popup_call7_2nd_window_g

0xbdc2,	// (0x00036045) popup_call7_2nd_window_t1

0xbe20,	// (0x000360a3) bg_popup_window_pane_cp14

0xbdd1,	// (0x00036054) call7_list_conf_pane

0xbdd9,	// (0x0003605c) call7_list_conf_row_pane_ParamLimits

0xbdd9,	// (0x0003605c) call7_list_conf_row_pane

0xbdec,	// (0x0003606f) call7_list_conf_row_pane_g1

0xbdf4,	// (0x00036077) call7_list_conf_row_pane_g2

0x0001,

0xfe26,	// (0x0003a0a9) call7_list_conf_row_pane_g

0xbdfc,	// (0x0003607f) call7_list_conf_row_pane_t1

0xbe20,	// (0x000360a3) list_highlight_pane_cp22

0xa73f,	// (0x000349c2) sso_option_pane_cp01_ParamLimits

0xa73f,	// (0x000349c2) sso_option_pane_cp01

0xc4a6,	// (0x00036729) msg_header_pane_ParamLimits

0xd301,	// (0x00037584) bg_button_pane_cp01_ParamLimits

0xd315,	// (0x00037598) input_focus_pane_cp07_ParamLimits

0x80f0,	// (0x00032373) popup_email_progress_window

0xc55f,	// (0x000367e2) popup_email_progress_window_g1

0xbe0a,	// (0x0003608d) popup_email_progress_window_g2

0x0001,

0xfe2b,	// (0x0003a0ae) popup_email_progress_window_g

0xbe12,	// (0x00036095) popup_email_progress_window_t1
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
	};

} // end of namespace AknLayoutScalable_Abrw_pnl4_apps_nhd4_lsc_tch_Normal
