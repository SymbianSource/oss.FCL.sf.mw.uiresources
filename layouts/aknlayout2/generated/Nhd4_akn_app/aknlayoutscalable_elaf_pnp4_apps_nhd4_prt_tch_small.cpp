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

#include "aknlayoutscalable_elaf_pnp4_apps_nhd4_prt_tch_small.h"
#include "AknLayout2ScalableDecode.h"
namespace AknLayoutScalable_Apps { extern const TUint8 KByteCodedData_AknLayoutScalable_Elaf_pnp4_apps_nhd4_prt_tch[]; }

namespace AknLayoutScalable_Elaf_pnp4_apps_nhd4_prt_tch_Small
{

extern const TUint16 KDataLookup[AknLayoutScalable_Apps::E_TApiId_TableSize];
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Apps::KByteCodedData_AknLayoutScalable_Elaf_pnp4_apps_nhd4_prt_tch + 0x000358e4 };

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
0x55e5,	// (0x0003aec9) Screen

0x55f1,	// (0x0003aed5) application_window

0x564d,	// (0x0003af31) area_bottom_pane_ParamLimits

0x564d,	// (0x0003af31) area_bottom_pane

0x56a5,	// (0x0003af89) area_top_pane_ParamLimits

0x56a5,	// (0x0003af89) area_top_pane

0x5709,	// (0x0003afed) call_video_uplink_pane_ParamLimits

0x5709,	// (0x0003afed) call_video_uplink_pane

0x5748,	// (0x0003b02c) main_pane_ParamLimits

0x5748,	// (0x0003b02c) main_pane

0x2e2f,	// (0x00038713) context_pane

0x833d,	// (0x0003dc21) navi_pane

0x8363,	// (0x0003dc47) popup_cale_events_window_ParamLimits

0x8363,	// (0x0003dc47) popup_cale_events_window

0x2e42,	// (0x00038726) popup_mup_playback_window

0x837b,	// (0x0003dc5f) signal_pane

0x0f5c,	// (0x00036840) main_browser_pane

0x1125,	// (0x00036a09) main_burst_pane

0x81cd,	// (0x0003dab1) main_calc_pane

0x2e23,	// (0x00038707) main_cale_day_pane

0x5bde,	// (0x0003b4c2) main_cale_month_pane

0x2e23,	// (0x00038707) main_cale_week_pane

0x1125,	// (0x00036a09) main_call_pane

0x0bdc,	// (0x000364c0) main_call_poc_pane

0x1125,	// (0x00036a09) main_camera_pane

0x1125,	// (0x00036a09) main_chi_dic_pane

0x18cc,	// (0x000371b0) main_clock_pane

0x0bdc,	// (0x000364c0) main_fmradio_pane

0x1125,	// (0x00036a09) main_graph_messa_pane

0x0bdc,	// (0x000364c0) main_help_pane

0x0f5c,	// (0x00036840) main_im_pane

0x0e45,	// (0x00036729) main_image_pane_ParamLimits

0x0e45,	// (0x00036729) main_image_pane

0x0bdc,	// (0x000364c0) main_location2_pane

0x1125,	// (0x00036a09) main_location_pane

0x0e45,	// (0x00036729) main_messa_pane

0x0bdc,	// (0x000364c0) main_mp2_pane

0x1125,	// (0x00036a09) main_mp_pane

0x0bdc,	// (0x000364c0) main_msg_pane

0x0bdc,	// (0x000364c0) main_mup_eq_pane

0x0bdc,	// (0x000364c0) main_mup_pane

0x0f5c,	// (0x00036840) main_notes_pane

0x0bdc,	// (0x000364c0) main_pec_pane

0x0bdc,	// (0x000364c0) main_phob_pane

0x0bdc,	// (0x000364c0) main_pinb_pane

0x0bdc,	// (0x000364c0) main_postcard_pane

0x0bdc,	// (0x000364c0) main_qdial_pane

0x1125,	// (0x00036a09) main_skin_pane

0x0bdc,	// (0x000364c0) main_smil2_pane

0x1125,	// (0x00036a09) main_smil_pane

0x1125,	// (0x00036a09) main_video_pane

0x1125,	// (0x00036a09) main_video_tele_pane

0x0e45,	// (0x00036729) main_viewer_pane_ParamLimits

0x0e45,	// (0x00036729) main_viewer_pane

0x1125,	// (0x00036a09) main_vorec_pane

0x820b,	// (0x0003daef) popup_blid_sat_info_window_ParamLimits

0x820b,	// (0x0003daef) popup_blid_sat_info_window

0x822b,	// (0x0003db0f) popup_dyc_status_message_window_ParamLimits

0x822b,	// (0x0003db0f) popup_dyc_status_message_window

0x8239,	// (0x0003db1d) popup_grid_large_graphic_window_ParamLimits

0x8239,	// (0x0003db1d) popup_grid_large_graphic_window

0x82c8,	// (0x0003dbac) popup_loc_request_window_ParamLimits

0x82c8,	// (0x0003dbac) popup_loc_request_window

0x8315,	// (0x0003dbf9) popup_wml_address_window_ParamLimits

0x8315,	// (0x0003dbf9) popup_wml_address_window

0x80a5,	// (0x0003d989) call_muted_g1

0x7d92,	// (0x0003d676) popup_call_audio_conf_window_ParamLimits

0x7d92,	// (0x0003d676) popup_call_audio_conf_window

0x80b5,	// (0x0003d999) popup_call_audio_first_window_ParamLimits

0x80b5,	// (0x0003d999) popup_call_audio_first_window

0x80f5,	// (0x0003d9d9) popup_call_audio_in_window_ParamLimits

0x80f5,	// (0x0003d9d9) popup_call_audio_in_window

0x8119,	// (0x0003d9fd) popup_call_audio_out_window_ParamLimits

0x8119,	// (0x0003d9fd) popup_call_audio_out_window

0x813b,	// (0x0003da1f) popup_call_audio_second_window_ParamLimits

0x813b,	// (0x0003da1f) popup_call_audio_second_window

0x816b,	// (0x0003da4f) popup_call_audio_wait_window_ParamLimits

0x816b,	// (0x0003da4f) popup_call_audio_wait_window

0x818c,	// (0x0003da70) popup_number_entry_window_ParamLimits

0x818c,	// (0x0003da70) popup_number_entry_window

0x07c9,	// (0x000360ad) bg_popup_call_pane_cp05_ParamLimits

0x07c9,	// (0x000360ad) bg_popup_call_pane_cp05

0x07e9,	// (0x000360cd) popup_number_entry_window_t1

0x07fc,	// (0x000360e0) popup_number_entry_window_t2

0x080e,	// (0x000360f2) popup_number_entry_window_t3

0x0003,

0xf040,	// (0x00044924) popup_number_entry_window_t

0x0820,	// (0x00036104) text_title_cp2

0x0833,	// (0x00036117) bg_popup_call_pane_cp_ParamLimits

0x0833,	// (0x00036117) bg_popup_call_pane_cp

0x0841,	// (0x00036125) call_thumbnail_pane

0x0849,	// (0x0003612d) popup_call_audio_in_window_g1_ParamLimits

0x0849,	// (0x0003612d) popup_call_audio_in_window_g1

0x0855,	// (0x00036139) popup_call_audio_in_window_g2_ParamLimits

0x0855,	// (0x00036139) popup_call_audio_in_window_g2

0x0861,	// (0x00036145) popup_call_audio_in_window_g3_ParamLimits

0x0861,	// (0x00036145) popup_call_audio_in_window_g3

0x0002,

0xf049,	// (0x0004492d) popup_call_audio_in_window_g_ParamLimits

0xf049,	// (0x0004492d) popup_call_audio_in_window_g

0x086d,	// (0x00036151) popup_call_audio_in_window_t1_ParamLimits

0x086d,	// (0x00036151) popup_call_audio_in_window_t1

0x0889,	// (0x0003616d) popup_call_audio_in_window_t2_ParamLimits

0x0889,	// (0x0003616d) popup_call_audio_in_window_t2

0x08a5,	// (0x00036189) popup_call_audio_in_window_t3_ParamLimits

0x08a5,	// (0x00036189) popup_call_audio_in_window_t3

0x0002,

0xf050,	// (0x00044934) popup_call_audio_in_window_t_ParamLimits

0xf050,	// (0x00044934) popup_call_audio_in_window_t

0x0833,	// (0x00036117) bg_popup_call_pane_cp01_ParamLimits

0x0833,	// (0x00036117) bg_popup_call_pane_cp01

0x0841,	// (0x00036125) call_thumbnail_pane_cp02

0x08b8,	// (0x0003619c) call_type_pane_cp022

0x08c0,	// (0x000361a4) popup_call_audio_out_window_g1_ParamLimits

0x08c0,	// (0x000361a4) popup_call_audio_out_window_g1

0x08d2,	// (0x000361b6) popup_call_audio_out_window_g2_ParamLimits

0x08d2,	// (0x000361b6) popup_call_audio_out_window_g2

0x08de,	// (0x000361c2) popup_call_audio_out_window_g3_ParamLimits

0x08de,	// (0x000361c2) popup_call_audio_out_window_g3

0x0002,

0xf057,	// (0x0004493b) popup_call_audio_out_window_g_ParamLimits

0xf057,	// (0x0004493b) popup_call_audio_out_window_g

0x08f0,	// (0x000361d4) popup_call_audio_out_window_t1_ParamLimits

0x08f0,	// (0x000361d4) popup_call_audio_out_window_t1

0x0908,	// (0x000361ec) popup_call_audio_out_window_t2_ParamLimits

0x0908,	// (0x000361ec) popup_call_audio_out_window_t2

0x0001,

0xf05e,	// (0x00044942) popup_call_audio_out_window_t_ParamLimits

0xf05e,	// (0x00044942) popup_call_audio_out_window_t

0x091d,	// (0x00036201) bg_popup_call_pane_ParamLimits

0x091d,	// (0x00036201) bg_popup_call_pane

0x58af,	// (0x0003b193) call_thumbnail_pane_cp_ParamLimits

0x58af,	// (0x0003b193) call_thumbnail_pane_cp

0x09a1,	// (0x00036285) call_type_pane_cp01_ParamLimits

0x09a1,	// (0x00036285) call_type_pane_cp01

0x09e5,	// (0x000362c9) popup_call_audio_first_window_g1_ParamLimits

0x09e5,	// (0x000362c9) popup_call_audio_first_window_g1

0x0a31,	// (0x00036315) popup_call_audio_first_window_g2_ParamLimits

0x0a31,	// (0x00036315) popup_call_audio_first_window_g2

0x0001,

0xf063,	// (0x00044947) popup_call_audio_first_window_g_ParamLimits

0xf063,	// (0x00044947) popup_call_audio_first_window_g

0x0a75,	// (0x00036359) popup_call_audio_first_window_t1_ParamLimits

0x0a75,	// (0x00036359) popup_call_audio_first_window_t1

0x0b21,	// (0x00036405) popup_call_audio_first_window_t4_ParamLimits

0x0b21,	// (0x00036405) popup_call_audio_first_window_t4

0x0bad,	// (0x00036491) popup_call_audio_first_window_t5_ParamLimits

0x0bad,	// (0x00036491) popup_call_audio_first_window_t5

0x0002,

0xf068,	// (0x0004494c) popup_call_audio_first_window_t_ParamLimits

0xf068,	// (0x0004494c) popup_call_audio_first_window_t

0x0bdc,	// (0x000364c0) bg_popup_call_pane_cp02

0x0be6,	// (0x000364ca) call_type_pane_cp023

0x0bee,	// (0x000364d2) popup_call_audio_wait_window_g1

0x0bf6,	// (0x000364da) popup_call_audio_wait_window_g2

0x0001,

0xf06f,	// (0x00044953) popup_call_audio_wait_window_g

0x0bfe,	// (0x000364e2) popup_call_audio_wait_window_t3

0x0c0c,	// (0x000364f0) bg_popup_call_pane_cp03_ParamLimits

0x0c0c,	// (0x000364f0) bg_popup_call_pane_cp03

0x0c6c,	// (0x00036550) call_thumbnail_pane_cp011_ParamLimits

0x0c6c,	// (0x00036550) call_thumbnail_pane_cp011

0x0c78,	// (0x0003655c) call_type_pane_cp034_ParamLimits

0x0c78,	// (0x0003655c) call_type_pane_cp034

0x0cb4,	// (0x00036598) popup_call_audio_second_window_g1_ParamLimits

0x0cb4,	// (0x00036598) popup_call_audio_second_window_g1

0x0cf0,	// (0x000365d4) popup_call_audio_second_window_g2_ParamLimits

0x0cf0,	// (0x000365d4) popup_call_audio_second_window_g2

0x0001,

0xf074,	// (0x00044958) popup_call_audio_second_window_g_ParamLimits

0xf074,	// (0x00044958) popup_call_audio_second_window_g

0x0d2c,	// (0x00036610) popup_call_audio_second_window_t1_ParamLimits

0x0d2c,	// (0x00036610) popup_call_audio_second_window_t1

0x0dbb,	// (0x0003669f) popup_call_audio_second_window_t2_ParamLimits

0x0dbb,	// (0x0003669f) popup_call_audio_second_window_t2

0x0df1,	// (0x000366d5) popup_call_audio_second_window_t3_ParamLimits

0x0df1,	// (0x000366d5) popup_call_audio_second_window_t3

0x0002,

0xf079,	// (0x0004495d) popup_call_audio_second_window_t_ParamLimits

0xf079,	// (0x0004495d) popup_call_audio_second_window_t

0x0bdc,	// (0x000364c0) bg_popup_call_pane_cp04

0x0e27,	// (0x0003670b) list_conf_pane

0x0e2f,	// (0x00036713) popup_call_audio_conf_window_t1

0x0e3d,	// (0x00036721) call_thumbnail_pane_g1

0x0e45,	// (0x00036729) bg_pinb_pane_ParamLimits

0x0e45,	// (0x00036729) bg_pinb_pane

0x0e53,	// (0x00036737) find_pinb_pane

0x0e45,	// (0x00036729) listscroll_pinb_pane_ParamLimits

0x0e45,	// (0x00036729) listscroll_pinb_pane

0x0e5d,	// (0x00036741) pinb_bg_pane_g1

0x0e5d,	// (0x00036741) pinb_bg_pane_g2

0x0e5d,	// (0x00036741) pinb_bg_pane_g3

0x0e5d,	// (0x00036741) pinb_bg_pane_g4

0x0e5d,	// (0x00036741) pinb_bg_pane_g5

0x0e5d,	// (0x00036741) pinb_bg_pane_g6

0x0e5d,	// (0x00036741) pinb_bg_pane_g7

0x0e5d,	// (0x00036741) pinb_bg_pane_g8

0x0e5d,	// (0x00036741) pinb_bg_pane_g9

0x0e5d,	// (0x00036741) pinb_bg_pane_g10

0x0009,

0xf080,	// (0x00044964) pinb_bg_pane_g

0x07bf,	// (0x000360a3) grid_pinb_pane

0x07bf,	// (0x000360a3) list_pinb_pane

0x0dad,	// (0x00036691) scroll_pane_cp01_ParamLimits

0x0dad,	// (0x00036691) scroll_pane_cp01

0x0e67,	// (0x0003674b) find_pinb_pane_g1_ParamLimits

0x0e67,	// (0x0003674b) find_pinb_pane_g1

0x0e7f,	// (0x00036763) find_pinb_pane_t1

0x0e91,	// (0x00036775) find_pinb_pane_t2

0x0001,

0xf09a,	// (0x0004497e) find_pinb_pane_t

0x0ea6,	// (0x0003678a) input_focus_pane_cp01_ParamLimits

0x0ea6,	// (0x0003678a) input_focus_pane_cp01

0x0eb2,	// (0x00036796) cell_pinb_pane_ParamLimits

0x0eb2,	// (0x00036796) cell_pinb_pane

0x0ec0,	// (0x000367a4) cell_pinb_pane_g1_ParamLimits

0x0ec0,	// (0x000367a4) cell_pinb_pane_g1

0x0ece,	// (0x000367b2) cell_pinb_pane_g2_ParamLimits

0x0ece,	// (0x000367b2) cell_pinb_pane_g2

0x0ece,	// (0x000367b2) cell_pinb_pane_g3_ParamLimits

0x0ece,	// (0x000367b2) cell_pinb_pane_g3

0x0002,

0xf09f,	// (0x00044983) cell_pinb_pane_g_ParamLimits

0xf09f,	// (0x00044983) cell_pinb_pane_g

0x0bdc,	// (0x000364c0) grid_highlight_pane_cp01

0x0eb2,	// (0x00036796) list_pinb_item_pane_ParamLimits

0x0eb2,	// (0x00036796) list_pinb_item_pane

0x07bf,	// (0x000360a3) list_highlight_pane_cp02

0x0edc,	// (0x000367c0) list_pinb_item_pane_g1_ParamLimits

0x0edc,	// (0x000367c0) list_pinb_item_pane_g1

0x0ece,	// (0x000367b2) list_pinb_item_pane_g2_ParamLimits

0x0ece,	// (0x000367b2) list_pinb_item_pane_g2

0x0ec0,	// (0x000367a4) list_pinb_item_pane_g3_ParamLimits

0x0ec0,	// (0x000367a4) list_pinb_item_pane_g3

0x0ece,	// (0x000367b2) list_pinb_item_pane_g4_ParamLimits

0x0ece,	// (0x000367b2) list_pinb_item_pane_g4

0x0003,

0xf0a6,	// (0x0004498a) list_pinb_item_pane_g_ParamLimits

0xf0a6,	// (0x0004498a) list_pinb_item_pane_g

0x0eea,	// (0x000367ce) list_pinb_item_pane_t1_ParamLimits

0x0eea,	// (0x000367ce) list_pinb_item_pane_t1

0x58ed,	// (0x0003b1d1) calc_display_pane

0x590b,	// (0x0003b1ef) calc_paper_pane

0x5927,	// (0x0003b20b) grid_calc_pane

0x07bf,	// (0x000360a3) bg_list_pane_cp01

0x0efe,	// (0x000367e2) clock_g1

0x0efe,	// (0x000367e2) clock_g2

0x0001,

0xf0af,	// (0x00044993) clock_g

0x0f08,	// (0x000367ec) clock_t1_ParamLimits

0x0f08,	// (0x000367ec) clock_t1

0x0f1c,	// (0x00036800) clock_t2_ParamLimits

0x0f1c,	// (0x00036800) clock_t2

0x0f1c,	// (0x00036800) clock_t3_ParamLimits

0x0f1c,	// (0x00036800) clock_t3

0x0f1c,	// (0x00036800) clock_t4_ParamLimits

0x0f1c,	// (0x00036800) clock_t4

0x0f08,	// (0x000367ec) clock_t5_ParamLimits

0x0f08,	// (0x000367ec) clock_t5

0x0f1c,	// (0x00036800) clock_t6_ParamLimits

0x0f1c,	// (0x00036800) clock_t6

0x0f1c,	// (0x00036800) clock_t7_ParamLimits

0x0f1c,	// (0x00036800) clock_t7

0x0f1c,	// (0x00036800) clock_t8_ParamLimits

0x0f1c,	// (0x00036800) clock_t8

0x0f1c,	// (0x00036800) clock_t9_ParamLimits

0x0f1c,	// (0x00036800) clock_t9

0x0008,

0xf0b4,	// (0x00044998) clock_t_ParamLimits

0xf0b4,	// (0x00044998) clock_t

0x07bf,	// (0x000360a3) popup_clock_analogue_window_cp02

0x07bf,	// (0x000360a3) popup_clock_digital_window_cp01

0x0bdc,	// (0x000364c0) listscroll_help_pane

0x0bdc,	// (0x000364c0) phob_pre_status_pane

0x0f30,	// (0x00036814) grid_qdial_pane

0x0e45,	// (0x00036729) listscroll_mce_pane

0x0e45,	// (0x00036729) bg_notes_pane

0x0f3a,	// (0x0003681e) list_notes_pane

0x5953,	// (0x0003b237) scroll_pane_cp06

0x0f48,	// (0x0003682c) bg_calc_paper_pane

0x5962,	// (0x0003b246) list_calc_pane

0x0f5c,	// (0x00036840) bg_calc_display_pane

0x597c,	// (0x0003b260) calc_display_pane_t1

0x5991,	// (0x0003b275) calc_display_pane_t2

0x59a6,	// (0x0003b28a) calc_display_pane_t3

0x0002,

0xf0c7,	// (0x000449ab) calc_display_pane_t

0x59b8,	// (0x0003b29c) cell_calc_pane_ParamLimits

0x59b8,	// (0x0003b29c) cell_calc_pane

0x0f68,	// (0x0003684c) bg_calc_paper_pane_g1

0x0f80,	// (0x00036864) bg_calc_paper_pane_g2

0x0f74,	// (0x00036858) bg_calc_paper_pane_g3

0x0f98,	// (0x0003687c) bg_calc_paper_pane_g4

0x0f8c,	// (0x00036870) bg_calc_paper_pane_g5

0x59e5,	// (0x0003b2c9) bg_calc_paper_pane_g6

0x59f6,	// (0x0003b2da) bg_calc_paper_pane_g7

0x5a07,	// (0x0003b2eb) bg_calc_paper_pane_g8

0x0007,

0xf0ce,	// (0x000449b2) bg_calc_paper_pane_g

0x5a18,	// (0x0003b2fc) calc_bg_paper_pane_g9

0x5a29,	// (0x0003b30d) list_calc_item_pane_ParamLimits

0x5a29,	// (0x0003b30d) list_calc_item_pane

0x0fa4,	// (0x00036888) list_calc_item_pane_g1

0x5a56,	// (0x0003b33a) list_calc_item_pane_t1_ParamLimits

0x5a56,	// (0x0003b33a) list_calc_item_pane_t1

0x5a68,	// (0x0003b34c) list_calc_item_pane_t2_ParamLimits

0x5a68,	// (0x0003b34c) list_calc_item_pane_t2

0x0001,

0xf0df,	// (0x000449c3) list_calc_item_pane_t_ParamLimits

0xf0df,	// (0x000449c3) list_calc_item_pane_t

0x0e5d,	// (0x00036741) cell_calc_pane_g1

0x0fb1,	// (0x00036895) grid_highlight_pane_cp02

0x5a98,	// (0x0003b37c) bg_calc_display_pane_g1

0x5aa1,	// (0x0003b385) bg_calc_display_pane_g2

0x5aab,	// (0x0003b38f) bg_calc_display_pane_g3

0x0002,

0xf0e9,	// (0x000449cd) bg_calc_display_pane_g

0x5ab4,	// (0x0003b398) cell_qdial_pane_ParamLimits

0x5ab4,	// (0x0003b398) cell_qdial_pane

0x5ac8,	// (0x0003b3ac) cell_qdial_pane_g1_ParamLimits

0x5ac8,	// (0x0003b3ac) cell_qdial_pane_g1

0x5ad5,	// (0x0003b3b9) cell_qdial_pane_g2_ParamLimits

0x5ad5,	// (0x0003b3b9) cell_qdial_pane_g2

0x0fdc,	// (0x000368c0) cell_qdial_pane_g3_ParamLimits

0x0fdc,	// (0x000368c0) cell_qdial_pane_g3

0x0003,

0xf0f0,	// (0x000449d4) cell_qdial_pane_g_ParamLimits

0xf0f0,	// (0x000449d4) cell_qdial_pane_g

0x5af2,	// (0x0003b3d6) cell_qdial_pane_t1_ParamLimits

0x5af2,	// (0x0003b3d6) cell_qdial_pane_t1

0x5b0a,	// (0x0003b3ee) cell_qdial_pane_t2_ParamLimits

0x5b0a,	// (0x0003b3ee) cell_qdial_pane_t2

0x5b1d,	// (0x0003b401) cell_qdial_pane_t3_ParamLimits

0x5b1d,	// (0x0003b401) cell_qdial_pane_t3

0x0002,

0xf0f9,	// (0x000449dd) cell_qdial_pane_t_ParamLimits

0xf0f9,	// (0x000449dd) cell_qdial_pane_t

0x0bdc,	// (0x000364c0) grid_highlight_pane_cp04

0x0fe8,	// (0x000368cc) thumbnail_qdial_pane_ParamLimits

0x0fe8,	// (0x000368cc) thumbnail_qdial_pane

0x1044,	// (0x00036928) list_help_pane

0x104d,	// (0x00036931) scroll_pane_cp02

0x5b30,	// (0x0003b414) help_list_pane_t1_ParamLimits

0x5b30,	// (0x0003b414) help_list_pane_t1

0x5b6a,	// (0x0003b44e) bg_notes_pane_g2

0x5b72,	// (0x0003b456) bg_notes_pane_g3

0x5b7a,	// (0x0003b45e) notes_bg_pane_g1

0x5b82,	// (0x0003b466) notes_bg_pane_g4

0x5b8a,	// (0x0003b46e) notes_bg_pane_g5

0x5b92,	// (0x0003b476) notes_bg_pane_g6

0x5b9a,	// (0x0003b47e) notes_bg_pane_g7

0x5ba2,	// (0x0003b486) notes_bg_pane_g8

0x5baa,	// (0x0003b48e) notes_bg_pane_g9

0x0006,

0xf117,	// (0x000449fb) notes_bg_pane_g

0x5bb2,	// (0x0003b496) list_notes_text_pane_ParamLimits

0x5bb2,	// (0x0003b496) list_notes_text_pane

0x1056,	// (0x0003693a) list_notes_text_pane_g1

0x487b,	// (0x0003a15f) list_notes_text_pane_t1

0x5bde,	// (0x0003b4c2) listscroll_cale_week_pane

0x5c03,	// (0x0003b4e7) bg_cale_heading_pane

0x1087,	// (0x0003696b) bg_cale_pane_cp01

0x5c25,	// (0x0003b509) cale_week_corner_pane

0x5c3f,	// (0x0003b523) cale_week_day_heading_pane

0x5c61,	// (0x0003b545) cale_week_scroll_pane_g1

0x5c7e,	// (0x0003b562) cale_week_scroll_pane_g2

0x5c91,	// (0x0003b575) cale_week_scroll_pane_g3

0x5ca4,	// (0x0003b588) cale_week_scroll_pane_g4

0x5cb7,	// (0x0003b59b) cale_week_scroll_pane_g5

0x5cca,	// (0x0003b5ae) cale_week_scroll_pane_g6

0x5cdd,	// (0x0003b5c1) cale_week_scroll_pane_g7

0x5cf2,	// (0x0003b5d6) cale_week_scroll_pane_g8

0x5d07,	// (0x0003b5eb) cale_week_scroll_pane_g9

0x5d1a,	// (0x0003b5fe) cale_week_scroll_pane_g10

0x5d2d,	// (0x0003b611) cale_week_scroll_pane_g11

0x5d40,	// (0x0003b624) cale_week_scroll_pane_g12

0x5d57,	// (0x0003b63b) cale_week_scroll_pane_g13

0x5d72,	// (0x0003b656) cale_week_scroll_pane_g14

0x5d8d,	// (0x0003b671) cale_week_scroll_pane_g15

0x000f,

0xf126,	// (0x00044a0a) cale_week_scroll_pane_g

0x5dbd,	// (0x0003b6a1) cale_week_time_pane

0x5dd2,	// (0x0003b6b6) grid_cale_week_pane

0x10b6,	// (0x0003699a) scroll_pane_cp08

0x5df1,	// (0x0003b6d5) cell_cale_week_pane_ParamLimits

0x5df1,	// (0x0003b6d5) cell_cale_week_pane

0x5e53,	// (0x0003b737) cale_week_day_heading_pane_t1

0x5e6e,	// (0x0003b752) cale_week_day_heading_pane_t2

0x5e89,	// (0x0003b76d) cale_week_day_heading_pane_t3

0x5ea4,	// (0x0003b788) cale_week_day_heading_pane_t4

0x5ebf,	// (0x0003b7a3) cale_week_day_heading_pane_t5

0x5eda,	// (0x0003b7be) cale_week_day_heading_pane_t6

0x5ef5,	// (0x0003b7d9) cale_week_day_heading_pane_t7

0x0006,

0xf147,	// (0x00044a2b) cale_week_day_heading_pane_t

0x10d3,	// (0x000369b7) bg_cale_side_pane

0x5f10,	// (0x0003b7f4) cale_week_time_pane_t1

0x5f2a,	// (0x0003b80e) cale_week_time_pane_t2

0x5f44,	// (0x0003b828) cale_week_time_pane_t3

0x5f5e,	// (0x0003b842) cale_week_time_pane_t4

0x5f78,	// (0x0003b85c) cale_week_time_pane_t5

0x5f92,	// (0x0003b876) cale_week_time_pane_t6

0x5fb2,	// (0x0003b896) cale_week_time_pane_t7

0x5fd4,	// (0x0003b8b8) cale_week_time_pane_t8

0x0007,

0xf156,	// (0x00044a3a) cale_week_time_pane_t

0x5ff8,	// (0x0003b8dc) cell_cale_week_pane_g2

0x601c,	// (0x0003b900) cell_cale_week_pane_g3_ParamLimits

0x601c,	// (0x0003b900) cell_cale_week_pane_g3

0x10e1,	// (0x000369c5) grid_highlight_pane_cp07

0x10e9,	// (0x000369cd) listscroll_gms_pane

0x10f3,	// (0x000369d7) grid_gms_pane

0x10fc,	// (0x000369e0) listscroll_gms_pane_g1

0x1104,	// (0x000369e8) listscroll_gms_pane_g2

0x0001,

0xf167,	// (0x00044a4b) listscroll_gms_pane_g

0x6034,	// (0x0003b918) scroll_pane_cp010

0x603f,	// (0x0003b923) cell_gms_pane_ParamLimits

0x603f,	// (0x0003b923) cell_gms_pane

0x604f,	// (0x0003b933) cell_gms_pane_g1

0x110c,	// (0x000369f0) cell_gms_pane_g2

0x1056,	// (0x0003693a) cell_gms_pane_g3

0x1114,	// (0x000369f8) cell_gms_pane_g4

0x0003,

0xf16c,	// (0x00044a50) cell_gms_pane_g

0x111d,	// (0x00036a01) grid_highlight_pane_cp09

0x8029,	// (0x0003d90d) phob_pre_status_pane_g1

0x8031,	// (0x0003d915) phob_pre_status_pane_g2

0x8039,	// (0x0003d91d) phob_pre_status_pane_g3

0x8041,	// (0x0003d925) phob_pre_status_pane_g4

0x0004,

0xf538,	// (0x00044e1c) phob_pre_status_pane_g

0x8051,	// (0x0003d935) phob_pre_status_pane_t1

0x8061,	// (0x0003d945) phob_pre_status_pane_t2

0x8071,	// (0x0003d955) phob_pre_status_pane_t3

0x0002,

0xf543,	// (0x00044e27) phob_pre_status_pane_t

0x1125,	// (0x00036a09) bg_list_pane_cp05

0x605f,	// (0x0003b943) grid_vorec_pane

0x6069,	// (0x0003b94d) vorec_t1

0x6077,	// (0x0003b95b) vorec_t2

0x6085,	// (0x0003b969) vorec_t3

0x6093,	// (0x0003b977) vorec_t4

0xc6f0,	// (0x00041fd4) vorec_t5

0xc6fe,	// (0x00041fe2) vorec_t6

0x0004,

0xf175,	// (0x00044a59) vorec_t

0xc70c,	// (0x00041ff0) wait_bar_pane_cp01

0x60af,	// (0x0003b993) cell_vorec_pane_ParamLimits

0x60af,	// (0x0003b993) cell_vorec_pane

0x60c2,	// (0x0003b9a6) cell_vorec_pane_g1

0x0bdc,	// (0x000364c0) grid_highlight_pane_cp05

0x0eb2,	// (0x00036796) cams_zoom_pane

0x0eb2,	// (0x00036796) image_vga_pane

0x0ece,	// (0x000367b2) main_camera_pane_g1

0x0ece,	// (0x000367b2) main_camera_pane_g2

0x0ece,	// (0x000367b2) main_camera_pane_g3

0x0ece,	// (0x000367b2) main_camera_pane_g4

0x0ece,	// (0x000367b2) main_camera_pane_g5

0x0ece,	// (0x000367b2) main_camera_pane_g6

0x0ece,	// (0x000367b2) main_camera_pane_g7

0x0007,

0xf180,	// (0x00044a64) main_camera_pane_g

0x0f1c,	// (0x00036800) main_camera_pane_t1

0x0f1c,	// (0x00036800) main_camera_pane_t2

0x0001,

0xf191,	// (0x00044a75) main_camera_pane_t

0x60cc,	// (0x0003b9b0) cams_zoom_pane_cp_ParamLimits

0x60cc,	// (0x0003b9b0) cams_zoom_pane_cp

0x60fa,	// (0x0003b9de) image_cif_pane_ParamLimits

0x60fa,	// (0x0003b9de) image_cif_pane

0x07bf,	// (0x000360a3) image_subqcif_pane

0x6108,	// (0x0003b9ec) main_video_pane_g1_ParamLimits

0x6108,	// (0x0003b9ec) main_video_pane_g1

0x6130,	// (0x0003ba14) main_video_pane_g2_ParamLimits

0x6130,	// (0x0003ba14) main_video_pane_g2

0x6163,	// (0x0003ba47) main_video_pane_g3_ParamLimits

0x6163,	// (0x0003ba47) main_video_pane_g3

0x6163,	// (0x0003ba47) main_video_pane_g4_ParamLimits

0x6163,	// (0x0003ba47) main_video_pane_g4

0x6191,	// (0x0003ba75) main_video_pane_g5_ParamLimits

0x6191,	// (0x0003ba75) main_video_pane_g5

0x112d,	// (0x00036a11) main_video_pane_g6_ParamLimits

0x112d,	// (0x00036a11) main_video_pane_g6

0x0006,

0xf196,	// (0x00044a7a) main_video_pane_g_ParamLimits

0xf196,	// (0x00044a7a) main_video_pane_g

0x61ad,	// (0x0003ba91) main_video_pane_t1_ParamLimits

0x61ad,	// (0x0003ba91) main_video_pane_t1

0x0efe,	// (0x000367e2) cams_zoom_pane_g1

0x0efe,	// (0x000367e2) cams_zoom_pane_g2

0x0efe,	// (0x000367e2) cams_zoom_pane_g3

0x0efe,	// (0x000367e2) cams_zoom_pane_g4

0x0003,

0xf1a5,	// (0x00044a89) cams_zoom_pane_g

0x0eb2,	// (0x00036796) grid_cams_pane

0x0eb2,	// (0x00036796) linegrid_cams_pane

0x61e7,	// (0x0003bacb) cell_cams_pane_ParamLimits

0x61e7,	// (0x0003bacb) cell_cams_pane

0x07bf,	// (0x000360a3) cams_burst_image_pane

0x0efe,	// (0x000367e2) cell_cams_pane_g1

0x07bf,	// (0x000360a3) grid_highlight_pane_cp03

0x0e5d,	// (0x00036741) mp_bg_pane_g1

0x07bf,	// (0x000360a3) bg_list_pane_cp03

0x07bf,	// (0x000360a3) bg_mp_pane

0x07bf,	// (0x000360a3) grid_mp_pane

0x0efe,	// (0x000367e2) media_player_g1

0x1660,	// (0x00036f44) media_player_t1

0x1660,	// (0x00036f44) media_player_t2

0x1660,	// (0x00036f44) media_player_t3

0x1660,	// (0x00036f44) media_player_t4

0x1660,	// (0x00036f44) media_player_t5

0x1660,	// (0x00036f44) media_player_t6

0x1660,	// (0x00036f44) media_player_t7

0x0006,

0xf522,	// (0x00044e06) media_player_t

0x07bf,	// (0x000360a3) wait_bar_pane_cp02

0xf507,	// (0x00044deb) main_usb_pane_t

0x18cc,	// (0x000371b0) cell_mp_pane

0x0e5d,	// (0x00036741) cell_mp_pane_g1

0x0bdc,	// (0x000364c0) grid_highlight_pane_cp06

0x1147,	// (0x00036a2b) grid_skin_colour_pane

0x114f,	// (0x00036a33) list_highlight_pane_cp03

0x61fc,	// (0x0003bae0) skin_g1

0x1157,	// (0x00036a3b) skin_t1

0x1166,	// (0x00036a4a) skin_t2

0x0001,

0xf1d3,	// (0x00044ab7) skin_t

0x6206,	// (0x0003baea) cell_skin_colour_pane_ParamLimits

0x6206,	// (0x0003baea) cell_skin_colour_pane

0x1174,	// (0x00036a58) cell_skin_colour_pane_g1

0x628a,	// (0x0003bb6e) call_video_g1_ParamLimits

0x628a,	// (0x0003bb6e) call_video_g1

0x629a,	// (0x0003bb7e) call_video_g2_ParamLimits

0x629a,	// (0x0003bb7e) call_video_g2

0x0001,

0xf1d8,	// (0x00044abc) call_video_g_ParamLimits

0xf1d8,	// (0x00044abc) call_video_g

0x62f4,	// (0x0003bbd8) call_video_uplink_pane_cp1_ParamLimits

0x62f4,	// (0x0003bbd8) call_video_uplink_pane_cp1

0x1186,	// (0x00036a6a) call_video_uplink_pane_cp2

0x63c0,	// (0x0003bca4) video_down_crop_pane_ParamLimits

0x63c0,	// (0x0003bca4) video_down_crop_pane

0x64b2,	// (0x0003bd96) video_down_pane_ParamLimits

0x64b2,	// (0x0003bd96) video_down_pane

0x118e,	// (0x00036a72) video_down_subqcif_pane_ParamLimits

0x118e,	// (0x00036a72) video_down_subqcif_pane

0x11a6,	// (0x00036a8a) video_down_subqcif_pane_cp_ParamLimits

0x11a6,	// (0x00036a8a) video_down_subqcif_pane_cp

0x11cc,	// (0x00036ab0) im_reading_pane_ParamLimits

0x11cc,	// (0x00036ab0) im_reading_pane

0x65d2,	// (0x0003beb6) im_writing_pane_ParamLimits

0x65d2,	// (0x0003beb6) im_writing_pane

0x65f0,	// (0x0003bed4) im_reading_pane_t1

0x11e6,	// (0x00036aca) list_im_pane

0x11f7,	// (0x00036adb) scroll_pane_cp07

0x6648,	// (0x0003bf2c) im_writing_pane_t1_ParamLimits

0x6648,	// (0x0003bf2c) im_writing_pane_t1

0x1210,	// (0x00036af4) im_writing_pane_t2_ParamLimits

0x1210,	// (0x00036af4) im_writing_pane_t2

0x0001,

0xf1e2,	// (0x00044ac6) im_writing_pane_t_ParamLimits

0xf1e2,	// (0x00044ac6) im_writing_pane_t

0x0bdc,	// (0x000364c0) input_focus_pane_cp04

0x0bdc,	// (0x000364c0) input_focus_pane_cp05

0x665a,	// (0x0003bf3e) list_im_single_pane_ParamLimits

0x665a,	// (0x0003bf3e) list_im_single_pane

0x6681,	// (0x0003bf65) list_single_im_pane_t1

0x1125,	// (0x00036a09) blid_accuracy_pane

0x1125,	// (0x00036a09) blid_compass_pane

0x2ddb,	// (0x000386bf) main_location_t1

0x2ddb,	// (0x000386bf) main_location_t2

0x2ddb,	// (0x000386bf) main_location_t3

0x0002,

0xf531,	// (0x00044e15) main_location_t

0x0bdc,	// (0x000364c0) aid_levels_location

0x0e5d,	// (0x00036741) blid_accuracy_pane_g1

0x0e5d,	// (0x00036741) blid_accuracy_pane_g2

0x0001,

0xf236,	// (0x00044b1a) blid_accuracy_pane_g

0x1258,	// (0x00036b3c) wml_content_pane

0x1296,	// (0x00036b7a) wml_button_pane_ParamLimits

0x1296,	// (0x00036b7a) wml_button_pane

0x6690,	// (0x0003bf74) wml_list_single_large_pane_ParamLimits

0x6690,	// (0x0003bf74) wml_list_single_large_pane

0x66bb,	// (0x0003bf9f) wml_list_single_medium_pane_ParamLimits

0x66bb,	// (0x0003bf9f) wml_list_single_medium_pane

0x66ed,	// (0x0003bfd1) wml_list_single_small_pane_ParamLimits

0x66ed,	// (0x0003bfd1) wml_list_single_small_pane

0x12aa,	// (0x00036b8e) wml_selection_box_pane_ParamLimits

0x12aa,	// (0x00036b8e) wml_selection_box_pane

0x12bd,	// (0x00036ba1) wml_list_single_pane_t1

0x12cc,	// (0x00036bb0) wml_list_single_medium_pane_t1

0x12db,	// (0x00036bbf) wml_list_single_large_pane_t1

0x12ea,	// (0x00036bce) input_focus_pane_cp02_ParamLimits

0x12ea,	// (0x00036bce) input_focus_pane_cp02

0x12fd,	// (0x00036be1) wml_selection_box_pane_g1

0x1306,	// (0x00036bea) wml_selection_box_pane_t1_ParamLimits

0x1306,	// (0x00036bea) wml_selection_box_pane_t1

0x0e45,	// (0x00036729) bg_wml_button_pane_ParamLimits

0x0e45,	// (0x00036729) bg_wml_button_pane

0x131e,	// (0x00036c02) wml_button_pane_g1

0x1326,	// (0x00036c0a) wml_button_pane_t1

0x131e,	// (0x00036c02) wml_button_bg_pane_g1

0x1336,	// (0x00036c1a) wml_button_bg_pane_g2

0x133e,	// (0x00036c22) wml_button_bg_pane_g3

0x1346,	// (0x00036c2a) wml_button_bg_pane_g4

0x134e,	// (0x00036c32) wml_button_bg_pane_g5

0x1356,	// (0x00036c3a) wml_button_bg_pane_g6

0x135e,	// (0x00036c42) wml_button_bg_pane_g7

0x1366,	// (0x00036c4a) wml_button_bg_pane_g8

0x136e,	// (0x00036c52) wml_button_bg_pane_g9

0x0008,

0xf1e7,	// (0x00044acb) wml_button_bg_pane_g

0x672a,	// (0x0003c00e) bg_list_pane_cp02

0x1376,	// (0x00036c5a) mce_header_pane_ParamLimits

0x1376,	// (0x00036c5a) mce_header_pane

0x138c,	// (0x00036c70) mce_icon_pane

0x138c,	// (0x00036c70) mce_image_pane

0x1395,	// (0x00036c79) mce_text_pane_ParamLimits

0x1395,	// (0x00036c79) mce_text_pane

0x6734,	// (0x0003c018) scroll_pane_cp03

0x128e,	// (0x00036b72) scroll_pane_cp04

0x13a8,	// (0x00036c8c) scroll_pane_cp05_ParamLimits

0x13a8,	// (0x00036c8c) scroll_pane_cp05

0x673e,	// (0x0003c022) mce_header_field_pane_ParamLimits

0x673e,	// (0x0003c022) mce_header_field_pane

0x675e,	// (0x0003c042) mce_header_field_pane_2_ParamLimits

0x675e,	// (0x0003c042) mce_header_field_pane_2

0x6774,	// (0x0003c058) mce_header_field_pane_3

0x677c,	// (0x0003c060) list_single_mce_message_pane_ParamLimits

0x677c,	// (0x0003c060) list_single_mce_message_pane

0x67aa,	// (0x0003c08e) list_single_mce_smart_pane_ParamLimits

0x67aa,	// (0x0003c08e) list_single_mce_smart_pane

0x13b4,	// (0x00036c98) input_focus_pane_cp03

0x13bd,	// (0x00036ca1) list_header_data_pane

0x67e3,	// (0x0003c0c7) mce_header_field_pane_t1

0x67f1,	// (0x0003c0d5) list_single_mce_header_pane_ParamLimits

0x67f1,	// (0x0003c0d5) list_single_mce_header_pane

0x13c5,	// (0x00036ca9) list_single_mce_header_pane_t1

0x13d4,	// (0x00036cb8) list_single_mce_message_pane_g1

0x13dc,	// (0x00036cc0) list_single_mce_message_pane_t1

0x6847,	// (0x0003c12b) bg_cale_heading_pane_cp01_ParamLimits

0x6847,	// (0x0003c12b) bg_cale_heading_pane_cp01

0x13ea,	// (0x00036cce) bg_cale_pane_cp02_ParamLimits

0x13ea,	// (0x00036cce) bg_cale_pane_cp02

0x6895,	// (0x0003c179) cale_month_corner_pane

0x68b4,	// (0x0003c198) cale_month_day_heading_pane_ParamLimits

0x68b4,	// (0x0003c198) cale_month_day_heading_pane

0x691a,	// (0x0003c1fe) cale_month_pane_g1_ParamLimits

0x691a,	// (0x0003c1fe) cale_month_pane_g1

0x695d,	// (0x0003c241) cale_month_pane_g2_ParamLimits

0x695d,	// (0x0003c241) cale_month_pane_g2

0x6997,	// (0x0003c27b) cale_month_pane_g3_ParamLimits

0x6997,	// (0x0003c27b) cale_month_pane_g3

0x69e7,	// (0x0003c2cb) cale_month_pane_g4_ParamLimits

0x69e7,	// (0x0003c2cb) cale_month_pane_g4

0x6a37,	// (0x0003c31b) cale_month_pane_g5_ParamLimits

0x6a37,	// (0x0003c31b) cale_month_pane_g5

0x6a87,	// (0x0003c36b) cale_month_pane_g6_ParamLimits

0x6a87,	// (0x0003c36b) cale_month_pane_g6

0x6ad7,	// (0x0003c3bb) cale_month_pane_g7_ParamLimits

0x6ad7,	// (0x0003c3bb) cale_month_pane_g7

0x6b3f,	// (0x0003c423) cale_month_pane_g8_ParamLimits

0x6b3f,	// (0x0003c423) cale_month_pane_g8

0x6ba7,	// (0x0003c48b) cale_month_pane_g9_ParamLimits

0x6ba7,	// (0x0003c48b) cale_month_pane_g9

0x6c05,	// (0x0003c4e9) cale_month_pane_g10_ParamLimits

0x6c05,	// (0x0003c4e9) cale_month_pane_g10

0x6c63,	// (0x0003c547) cale_month_pane_g11_ParamLimits

0x6c63,	// (0x0003c547) cale_month_pane_g11

0x6cb7,	// (0x0003c59b) cale_month_pane_g12_ParamLimits

0x6cb7,	// (0x0003c59b) cale_month_pane_g12

0x6d0d,	// (0x0003c5f1) cale_month_pane_g13_ParamLimits

0x6d0d,	// (0x0003c5f1) cale_month_pane_g13

0x000c,

0xf1fa,	// (0x00044ade) cale_month_pane_g_ParamLimits

0xf1fa,	// (0x00044ade) cale_month_pane_g

0x6d63,	// (0x0003c647) cale_month_week_pane

0x6d87,	// (0x0003c66b) grid_cale_month_pane_ParamLimits

0x6d87,	// (0x0003c66b) grid_cale_month_pane

0x6de4,	// (0x0003c6c8) cale_month_day_heading_pane_t1

0x6e6a,	// (0x0003c74e) cale_month_day_heading_pane_t2

0x6ee3,	// (0x0003c7c7) cale_month_day_heading_pane_t3

0x6f5c,	// (0x0003c840) cale_month_day_heading_pane_t4

0x6fd5,	// (0x0003c8b9) cale_month_day_heading_pane_t5

0x704e,	// (0x0003c932) cale_month_day_heading_pane_t6

0x70c7,	// (0x0003c9ab) cale_month_day_heading_pane_t7

0x0006,

0xf215,	// (0x00044af9) cale_month_day_heading_pane_t

0x10d3,	// (0x000369b7) bg_cale_side_pane_cp01

0x7158,	// (0x0003ca3c) cale_month_week_pane_t1

0x7171,	// (0x0003ca55) cale_month_week_pane_t2

0x718a,	// (0x0003ca6e) cale_month_week_pane_t3

0x71a3,	// (0x0003ca87) cale_month_week_pane_t4

0x71be,	// (0x0003caa2) cale_month_week_pane_t5

0x71df,	// (0x0003cac3) cale_month_week_pane_t6

0x0005,

0xf224,	// (0x00044b08) cale_month_week_pane_t

0x7200,	// (0x0003cae4) cell_cale_month_pane_ParamLimits

0x7200,	// (0x0003cae4) cell_cale_month_pane

0x7326,	// (0x0003cc0a) cell_cale_month_pane_g1

0x7332,	// (0x0003cc16) cell_cale_month_pane_t1_ParamLimits

0x7332,	// (0x0003cc16) cell_cale_month_pane_t1

0x10e1,	// (0x000369c5) grid_highlight_pane_cp08

0x0e5d,	// (0x00036741) main_smil_g1

0x735e,	// (0x0003cc42) smil_status_pane

0x1429,	// (0x00036d0d) smil_text_pane

0x2cb3,	// (0x00038597) bg_popup_call3_rect_pane_g8

0x2cbb,	// (0x0003859f) bg_popup_call3_rect_pane_g9

0x0008,

0xf4b2,	// (0x00044d96) bg_popup_call3_rect_pane_g

0x2eb7,	// (0x0003879b) smil_status_volume_pane_g1

0x1433,	// (0x00036d17) smil_status_pane_t1

0x83c4,	// (0x0003dca8) volume_smil_pane

0x144a,	// (0x00036d2e) list_smil_text_pane

0x7371,	// (0x0003cc55) scroll_pane_cp011

0x737c,	// (0x0003cc60) smil_text_list_pane_t1_ParamLimits

0x737c,	// (0x0003cc60) smil_text_list_pane_t1

0x7409,	// (0x0003cced) aid_volume_smil_ParamLimits

0x7409,	// (0x0003cced) aid_volume_smil

0x0e5d,	// (0x00036741) smil_volume_pane_g1

0x0e5d,	// (0x00036741) smil_volume_pane_g2

0x0001,

0xf236,	// (0x00044b1a) smil_volume_pane_g

0x5bde,	// (0x0003b4c2) listscroll_cale_day_pane

0x1454,	// (0x00036d38) bg_cale_pane

0x146c,	// (0x00036d50) list_cale_pane

0x148f,	// (0x00036d73) scroll_pane_cp09

0x14a0,	// (0x00036d84) cale_bg_pane_g1

0x14a8,	// (0x00036d8c) cale_bg_pane_g2

0x14b0,	// (0x00036d94) cale_bg_pane_g3

0x14b8,	// (0x00036d9c) cale_bg_pane_g4

0x14c0,	// (0x00036da4) cale_bg_pane_g5

0x14c8,	// (0x00036dac) cale_bg_pane_g6

0x14d0,	// (0x00036db4) cale_bg_pane_g7

0x14d8,	// (0x00036dbc) cale_bg_pane_g8

0x14e0,	// (0x00036dc4) cale_bg_pane_g9

0x0008,

0xf23b,	// (0x00044b1f) cale_bg_pane_g

0x7433,	// (0x0003cd17) list_cale_time_pane_ParamLimits

0x7433,	// (0x0003cd17) list_cale_time_pane

0x14e8,	// (0x00036dcc) list_cale_time_pane_g1_ParamLimits

0x14e8,	// (0x00036dcc) list_cale_time_pane_g1

0x14f4,	// (0x00036dd8) list_cale_time_pane_g2_ParamLimits

0x14f4,	// (0x00036dd8) list_cale_time_pane_g2

0x745b,	// (0x0003cd3f) list_cale_time_pane_g3_ParamLimits

0x745b,	// (0x0003cd3f) list_cale_time_pane_g3

0x7469,	// (0x0003cd4d) list_cale_time_pane_g4_ParamLimits

0x7469,	// (0x0003cd4d) list_cale_time_pane_g4

0x7477,	// (0x0003cd5b) list_cale_time_pane_g5_ParamLimits

0x7477,	// (0x0003cd5b) list_cale_time_pane_g5

0x0005,

0xf24e,	// (0x00044b32) list_cale_time_pane_g_ParamLimits

0xf24e,	// (0x00044b32) list_cale_time_pane_g

0x150e,	// (0x00036df2) list_cale_time_pane_t1_ParamLimits

0x150e,	// (0x00036df2) list_cale_time_pane_t1

0x1536,	// (0x00036e1a) list_cale_time_pane_t2_ParamLimits

0x1536,	// (0x00036e1a) list_cale_time_pane_t2

0x7732,	// (0x0003d016) aid_blid_cardinal_pane

0x7774,	// (0x0003d058) compass_pane_t4

0x155e,	// (0x00036e42) list_cale_time_pane_t4_ParamLimits

0x155e,	// (0x00036e42) list_cale_time_pane_t4

0x7782,	// (0x0003d066) compass_pane_t5

0x7792,	// (0x0003d076) compass_pane_t6

0x77a0,	// (0x0003d084) compass_pane_t7

0x19e6,	// (0x000372ca) navi_pane_cc_t1

0x1bc3,	// (0x000374a7) aid_phob_thumbnail_center_pane

0x7b6f,	// (0x0003d453) main_postcard_pane_g4_ParamLimits

0x0002,

0xf25b,	// (0x00044b3f) list_cale_time_pane_t_ParamLimits

0xf25b,	// (0x00044b3f) list_cale_time_pane_t

0x0833,	// (0x00036117) bg_popup_window_pane_cp02_ParamLimits

0x0833,	// (0x00036117) bg_popup_window_pane_cp02

0x1586,	// (0x00036e6a) heading_pane_cp01_ParamLimits

0x1586,	// (0x00036e6a) heading_pane_cp01

0x1592,	// (0x00036e76) loc_req_pane_ParamLimits

0x1592,	// (0x00036e76) loc_req_pane

0x15a2,	// (0x00036e86) loc_type_pane_ParamLimits

0x15a2,	// (0x00036e86) loc_type_pane

0x15b4,	// (0x00036e98) loc_type_pane_t1_ParamLimits

0x15b4,	// (0x00036e98) loc_type_pane_t1

0x15c6,	// (0x00036eaa) loc_type_pane_t2_ParamLimits

0x15c6,	// (0x00036eaa) loc_type_pane_t2

0x15d8,	// (0x00036ebc) loc_type_pane_t3_ParamLimits

0x15d8,	// (0x00036ebc) loc_type_pane_t3

0x0002,

0xf262,	// (0x00044b46) loc_type_pane_t_ParamLimits

0xf262,	// (0x00044b46) loc_type_pane_t

0x15ea,	// (0x00036ece) list_loc_req_pane

0x15f4,	// (0x00036ed8) scroll_pane_cp012

0x4889,	// (0x0003a16d) list_single_loc_request_popup_menu_pane_ParamLimits

0x4889,	// (0x0003a16d) list_single_loc_request_popup_menu_pane

0x15ff,	// (0x00036ee3) list_single_loc_request_popup_menu_pane_g1_ParamLimits

0x15ff,	// (0x00036ee3) list_single_loc_request_popup_menu_pane_g1

0x160b,	// (0x00036eef) list_single_loc_request_popup_menu_pane_g2_ParamLimits

0x160b,	// (0x00036eef) list_single_loc_request_popup_menu_pane_g2

0x0001,

0xf269,	// (0x00044b4d) list_single_loc_request_popup_menu_pane_g_ParamLimits

0xf269,	// (0x00044b4d) list_single_loc_request_popup_menu_pane_g

0x1617,	// (0x00036efb) list_single_loc_request_popup_menu_pane_t1_ParamLimits

0x1617,	// (0x00036efb) list_single_loc_request_popup_menu_pane_t1

0x7485,	// (0x0003cd69) bg_popup_window_pane_cp03_ParamLimits

0x7485,	// (0x0003cd69) bg_popup_window_pane_cp03

0x7493,	// (0x0003cd77) heading_loc_req_pane_ParamLimits

0x7493,	// (0x0003cd77) heading_loc_req_pane

0x749f,	// (0x0003cd83) popup_dyc_status_message_window_g1_ParamLimits

0x749f,	// (0x0003cd83) popup_dyc_status_message_window_g1

0x74ab,	// (0x0003cd8f) popup_dyc_status_message_window_t1_ParamLimits

0x74ab,	// (0x0003cd8f) popup_dyc_status_message_window_t1

0x74bd,	// (0x0003cda1) popup_dyc_status_message_window_t2_ParamLimits

0x74bd,	// (0x0003cda1) popup_dyc_status_message_window_t2

0x74cf,	// (0x0003cdb3) popup_dyc_status_message_window_t3_ParamLimits

0x74cf,	// (0x0003cdb3) popup_dyc_status_message_window_t3

0x0002,

0xf26e,	// (0x00044b52) popup_dyc_status_message_window_t_ParamLimits

0xf26e,	// (0x00044b52) popup_dyc_status_message_window_t

0x0bdc,	// (0x000364c0) bg_heading_pane_cp01

0x1639,	// (0x00036f1d) heading_loc_req_pane_g1

0x1641,	// (0x00036f25) heading_loc_req_pane_g2

0x1649,	// (0x00036f2d) heading_loc_req_pane_g3

0x0002,

0xf275,	// (0x00044b59) heading_loc_req_pane_g

0x1651,	// (0x00036f35) heading_loc_req_pane_t1

0x1670,	// (0x00036f54) bg_popup_sub_pane_cp01_ParamLimits

0x1670,	// (0x00036f54) bg_popup_sub_pane_cp01

0x167e,	// (0x00036f62) popup_cale_events_window_g1_ParamLimits

0x167e,	// (0x00036f62) popup_cale_events_window_g1

0x169e,	// (0x00036f82) popup_cale_events_window_g2_ParamLimits

0x169e,	// (0x00036f82) popup_cale_events_window_g2

0x0001,

0xf297,	// (0x00044b7b) popup_cale_events_window_g_ParamLimits

0xf297,	// (0x00044b7b) popup_cale_events_window_g

0x16be,	// (0x00036fa2) popup_cale_events_window_t1_ParamLimits

0x16be,	// (0x00036fa2) popup_cale_events_window_t1

0x16d0,	// (0x00036fb4) popup_cale_events_window_t2_ParamLimits

0x16d0,	// (0x00036fb4) popup_cale_events_window_t2

0x170e,	// (0x00036ff2) popup_cale_events_window_t3_ParamLimits

0x170e,	// (0x00036ff2) popup_cale_events_window_t3

0x1748,	// (0x0003702c) popup_cale_events_window_t4_ParamLimits

0x1748,	// (0x0003702c) popup_cale_events_window_t4

0x0003,

0xf29c,	// (0x00044b80) popup_cale_events_window_t_ParamLimits

0xf29c,	// (0x00044b80) popup_cale_events_window_t

0x74f9,	// (0x0003cddd) call_type_pane

0x247a,	// (0x00037d5e) popup_call_status_window_g1

0x7505,	// (0x0003cde9) popup_call_status_window_g2

0x7511,	// (0x0003cdf5) popup_call_status_window_g3

0x0002,

0xf2a5,	// (0x00044b89) popup_call_status_window_g

0x177e,	// (0x00037062) call_type_pane_g1

0x1787,	// (0x0003706b) call_type_pane_g2

0x0001,

0xf2ac,	// (0x00044b90) call_type_pane_g

0x0bdc,	// (0x000364c0) bg_popup_sub_pane_cp02

0x1790,	// (0x00037074) listscroll_popup_wml_pane

0x1798,	// (0x0003707c) list_wml_pane

0x17a2,	// (0x00037086) scroll_pane_cp013

0x17ad,	// (0x00037091) list_single_graphic_popup_wml_pane_ParamLimits

0x17ad,	// (0x00037091) list_single_graphic_popup_wml_pane

0x0e5d,	// (0x00036741) list_single_graphic_popup_wml_pane_g1

0x17c1,	// (0x000370a5) list_single_graphic_popup_wml_pane_g2

0x0001,

0xf2b1,	// (0x00044b95) list_single_graphic_popup_wml_pane_g

0x17c9,	// (0x000370ad) list_single_graphic_popup_wml_pane_t1

0x17d7,	// (0x000370bb) aid_call_pane

0x0e3d,	// (0x00036721) popup_clock_analogue_window_g1

0x0e3d,	// (0x00036721) popup_clock_analogue_window_g2

0x751d,	// (0x0003ce01) popup_clock_analogue_window_g3

0x751d,	// (0x0003ce01) popup_clock_analogue_window_g4

0x0e5d,	// (0x00036741) popup_clock_analogue_window_g5

0x0004,

0xf2b6,	// (0x00044b9a) popup_clock_analogue_window_g

0x7525,	// (0x0003ce09) popup_clock_analogue_window_t1

0x7533,	// (0x0003ce17) clock_digital_number_pane_ParamLimits

0x7533,	// (0x0003ce17) clock_digital_number_pane

0x753f,	// (0x0003ce23) clock_digital_number_pane_cp02_ParamLimits

0x753f,	// (0x0003ce23) clock_digital_number_pane_cp02

0x754b,	// (0x0003ce2f) clock_digital_number_pane_cp03_ParamLimits

0x754b,	// (0x0003ce2f) clock_digital_number_pane_cp03

0x7557,	// (0x0003ce3b) clock_digital_number_pane_cp04_ParamLimits

0x7557,	// (0x0003ce3b) clock_digital_number_pane_cp04

0x7563,	// (0x0003ce47) clock_digital_separator_pane_ParamLimits

0x7563,	// (0x0003ce47) clock_digital_separator_pane

0x756f,	// (0x0003ce53) popup_clock_digital_window_t1

0x0e5d,	// (0x00036741) clock_digital_number_pane_g1

0x0e5d,	// (0x00036741) clock_digital_number_pane_g2

0x0001,

0xf236,	// (0x00044b1a) clock_digital_number_pane_g

0x0e5d,	// (0x00036741) clock_digital_separator_pane_g1

0x0e5d,	// (0x00036741) clock_digital_separator_pane_g2

0x0001,

0xf236,	// (0x00044b1a) clock_digital_separator_pane_g

0x0bdc,	// (0x000364c0) bg_popup_window_pane_cp04

0x17e7,	// (0x000370cb) heading_pane_cp03

0x1125,	// (0x00036a09) listscroll_popup_gms_pane

0x0bdc,	// (0x000364c0) grid_large_graphic_popup_pane

0x17f0,	// (0x000370d4) listscroll_popup_gms_pane_g1

0x17f9,	// (0x000370dd) listscroll_popup_gms_pane_g2

0x0001,

0xf2c1,	// (0x00044ba5) listscroll_popup_gms_pane_g

0x1802,	// (0x000370e6) scroll_pane_cp014

0x0eb2,	// (0x00036796) cell_large_graphic_popup_pane_ParamLimits

0x0eb2,	// (0x00036796) cell_large_graphic_popup_pane

0x0ec0,	// (0x000367a4) cell_large_graphic_popup_pane_g1_ParamLimits

0x0ec0,	// (0x000367a4) cell_large_graphic_popup_pane_g1

0x180b,	// (0x000370ef) cell_large_graphic_popup_pane_g2_ParamLimits

0x180b,	// (0x000370ef) cell_large_graphic_popup_pane_g2

0x1819,	// (0x000370fd) cell_large_graphic_popup_pane_g3_ParamLimits

0x1819,	// (0x000370fd) cell_large_graphic_popup_pane_g3

0x1827,	// (0x0003710b) cell_large_graphic_popup_pane_g4_ParamLimits

0x1827,	// (0x0003710b) cell_large_graphic_popup_pane_g4

0x0003,

0xf2c6,	// (0x00044baa) cell_large_graphic_popup_pane_g_ParamLimits

0xf2c6,	// (0x00044baa) cell_large_graphic_popup_pane_g

0x0bdc,	// (0x000364c0) grid_highlight_pane_cp010

0x0e5d,	// (0x00036741) bg_popup_call_pane_g1

0x1838,	// (0x0003711c) list_single_graphic_popup_conf_pane_ParamLimits

0x1838,	// (0x0003711c) list_single_graphic_popup_conf_pane

0x184b,	// (0x0003712f) list_highlight_pane_cp01

0x1854,	// (0x00037138) list_single_graphic_popup_conf_pane_g1

0x185c,	// (0x00037140) list_single_graphic_popup_conf_pane_g2

0x0001,

0xf2cf,	// (0x00044bb3) list_single_graphic_popup_conf_pane_g

0x1864,	// (0x00037148) list_single_graphic_popup_conf_pane_t1

0x1872,	// (0x00037156) linegrid_cams_pane_g1

0x758c,	// (0x0003ce70) linegrid_cams_pane_g2

0x1056,	// (0x0003693a) linegrid_cams_pane_g3

0x187b,	// (0x0003715f) linegrid_cams_pane_g4

0x7595,	// (0x0003ce79) linegrid_cams_pane_g5

0x759e,	// (0x0003ce82) linegrid_cams_pane_g6

0x1114,	// (0x000369f8) linegrid_cams_pane_g7

0x0006,

0xf2d4,	// (0x00044bb8) linegrid_cams_pane_g

0x1884,	// (0x00037168) popup_clock_analogue_window

0x1884,	// (0x00037168) popup_clock_digital_window

0x0bdc,	// (0x000364c0) popup_phob_thumbnail_window

0x0e5d,	// (0x00036741) call_video_uplink_pane_g1

0x188d,	// (0x00037171) call_video_uplink_pane_g2

0x0001,

0xf2e3,	// (0x00044bc7) call_video_uplink_pane_g

0x1895,	// (0x00037179) video_uplink_pane

0x189d,	// (0x00037181) mce_image_pane_g1

0x75a7,	// (0x0003ce8b) mce_image_pane_g2

0x75af,	// (0x0003ce93) mce_image_pane_g3

0x75b7,	// (0x0003ce9b) mce_image_pane_g4

0x75bf,	// (0x0003cea3) mce_image_pane_g5

0x0004,

0xf2e8,	// (0x00044bcc) mce_image_pane_g

0x18a7,	// (0x0003718b) control_top_pane_stacon_cp01_ParamLimits

0x18a7,	// (0x0003718b) control_top_pane_stacon_cp01

0x18bb,	// (0x0003719f) uni_indicator_pane_stacon_cp01_ParamLimits

0x18bb,	// (0x0003719f) uni_indicator_pane_stacon_cp01

0x18cc,	// (0x000371b0) bg_popup_sub_pane_cp03

0x75c7,	// (0x0003ceab) chi_dic_find_pane

0x75cf,	// (0x0003ceb3) listscroll_chi_dic_pane

0x75d8,	// (0x0003cebc) main_pane_chidic_g1

0x75eb,	// (0x0003cecf) chi_dic_find_pane_t1

0x18d6,	// (0x000371ba) find_chidic_pane

0x18df,	// (0x000371c3) chi_dic_list_pane_ParamLimits

0x18df,	// (0x000371c3) chi_dic_list_pane

0x18f0,	// (0x000371d4) scroll_pane_cp020

0x75f9,	// (0x0003cedd) find_chidic_pane_t1

0x0bdc,	// (0x000364c0) input_focus_pane_cp06

0x7608,	// (0x0003ceec) list_chi_dic_pane_ParamLimits

0x7608,	// (0x0003ceec) list_chi_dic_pane

0x7625,	// (0x0003cf09) list_chi_dic_pane_t1_ParamLimits

0x7625,	// (0x0003cf09) list_chi_dic_pane_t1

0x0bdc,	// (0x000364c0) list_highlight_pane_cp020

0x18f8,	// (0x000371dc) bg_cale_heading_pane_g1

0x7638,	// (0x0003cf1c) bg_cale_heading_pane_g2

0x7640,	// (0x0003cf24) bg_cale_heading_pane_g3

0x7648,	// (0x0003cf2c) bg_cale_heading_pane_g4

0x7652,	// (0x0003cf36) bg_cale_heading_pane_g5

0x765c,	// (0x0003cf40) bg_cale_heading_pane_g6

0x7664,	// (0x0003cf48) bg_cale_heading_pane_g7

0x766c,	// (0x0003cf50) bg_cale_heading_pane_g8

0x7676,	// (0x0003cf5a) bg_cale_heading_pane_g9

0x0008,

0xf2f3,	// (0x00044bd7) bg_cale_heading_pane_g

0x18f8,	// (0x000371dc) bg_cale_side_pane_g1

0x7680,	// (0x0003cf64) bg_cale_side_pane_g2

0x768a,	// (0x0003cf6e) bg_cale_side_pane_g3

0x7694,	// (0x0003cf78) bg_cale_side_pane_g4

0x769e,	// (0x0003cf82) bg_cale_side_pane_g5

0x76a8,	// (0x0003cf8c) bg_cale_side_pane_g6

0x76b2,	// (0x0003cf96) bg_cale_side_pane_g7

0x76bc,	// (0x0003cfa0) bg_cale_side_pane_g8

0x76c4,	// (0x0003cfa8) bg_cale_side_pane_g9

0x0008,

0xf306,	// (0x00044bea) bg_cale_side_pane_g

0x76cc,	// (0x0003cfb0) popup_call_status_window_ParamLimits

0x76cc,	// (0x0003cfb0) popup_call_status_window

0x1900,	// (0x000371e4) stacon_top_pane

0x1908,	// (0x000371ec) status_pane_ParamLimits

0x1908,	// (0x000371ec) status_pane

0x191d,	// (0x00037201) status_small_pane

0x1925,	// (0x00037209) control_pane

0x0bdc,	// (0x000364c0) stacon_bottom_pane

0x192d,	// (0x00037211) list_single_mce_smart_pane_t1_ParamLimits

0x192d,	// (0x00037211) list_single_mce_smart_pane_t1

0x1940,	// (0x00037224) list_single_mce_smart_pane_t2_ParamLimits

0x1940,	// (0x00037224) list_single_mce_smart_pane_t2

0x0001,

0xf319,	// (0x00044bfd) list_single_mce_smart_pane_t_ParamLimits

0xf319,	// (0x00044bfd) list_single_mce_smart_pane_t

0x76d8,	// (0x0003cfbc) compass_pane

0x76e4,	// (0x0003cfc8) main_location2_pane_t1

0x76f8,	// (0x0003cfdc) main_location2_pane_t2

0x770c,	// (0x0003cff0) main_location2_pane_t3

0x0003,

0xf31e,	// (0x00044c02) main_location2_pane_t

0x195f,	// (0x00037243) compass_pane_g1_ParamLimits

0x195f,	// (0x00037243) compass_pane_g1

0x7756,	// (0x0003d03a) compass_pane_t1

0x7765,	// (0x0003d049) compass_pane_t2

0x0005,

0xf327,	// (0x00044c0b) compass_pane_t

0x77b0,	// (0x0003d094) text_secondary_cp61

0x19dd,	// (0x000372c1) navi_pane_cams_g5

0x1a59,	// (0x0003733d) navi_pane_im_t1

0x1a67,	// (0x0003734b) navi_pane_mp_g1_ParamLimits

0x1a67,	// (0x0003734b) navi_pane_mp_g1

0x1a7b,	// (0x0003735f) navi_pane_mp_g2_ParamLimits

0x1a7b,	// (0x0003735f) navi_pane_mp_g2

0x1a87,	// (0x0003736b) navi_pane_mp_g3_ParamLimits

0x1a87,	// (0x0003736b) navi_pane_mp_g3

0x0002,

0xf33b,	// (0x00044c1f) navi_pane_mp_g_ParamLimits

0xf33b,	// (0x00044c1f) navi_pane_mp_g

0x1a93,	// (0x00037377) navi_pane_mp_t1

0x1aa1,	// (0x00037385) navi_pane_mp_t2

0x0002,

0xf342,	// (0x00044c26) navi_pane_mp_t

0x1b0c,	// (0x000373f0) navi_pane_vt_g1

0x1a93,	// (0x00037377) navi_pane_vt_t1

0x1b14,	// (0x000373f8) navi_slider_pane

0x1125,	// (0x00036a09) zooming_pane

0x1b24,	// (0x00037408) navi_slider_pane_g1

0x77eb,	// (0x0003d0cf) navi_slider_pane_g2

0x0006,

0xf349,	// (0x00044c2d) navi_slider_pane_g

0x1b48,	// (0x0003742c) aid_levels_zoom

0x1b50,	// (0x00037434) zooming_pane_g1

0x1b58,	// (0x0003743c) zooming_pane_g2

0x1b58,	// (0x0003743c) zooming_pane_g3

0x0002,

0xf358,	// (0x00044c3c) zooming_pane_g

0x1b60,	// (0x00037444) level_10_zoom

0x1b69,	// (0x0003744d) level_11_zoom

0x1b72,	// (0x00037456) level_1_zoom

0x1b7b,	// (0x0003745f) level_2_zoom

0x1b84,	// (0x00037468) level_3_zoom

0x1b8d,	// (0x00037471) level_4_zoom

0x1b96,	// (0x0003747a) level_5_zoom

0x1b9f,	// (0x00037483) level_6_zoom

0x1ba8,	// (0x0003748c) level_7_zoom

0x1bb1,	// (0x00037495) level_8_zoom

0x1bba,	// (0x0003749e) level_9_zoom

0x1bcb,	// (0x000374af) popup_phob_thumbnail_window_g1

0x1bd3,	// (0x000374b7) popup_phob_thumbnail_window_g2

0x0001,

0xf35f,	// (0x00044c43) popup_phob_thumbnail_window_g

0x8081,	// (0x0003d965) level_1_location

0x8089,	// (0x0003d96d) level_2_location

0x8091,	// (0x0003d975) level_3_location

0x809b,	// (0x0003d97f) level_4_location

0x1125,	// (0x00036a09) level_5_location

0x77fd,	// (0x0003d0e1) mce_icon_pane_g1

0x7805,	// (0x0003d0e9) mce_icon_pane_g2

0x0001,

0xf364,	// (0x00044c48) mce_icon_pane_g

0x780d,	// (0x0003d0f1) main_mup_pane_g1_ParamLimits

0x780d,	// (0x0003d0f1) main_mup_pane_g1

0x0edc,	// (0x000367c0) main_mup_pane_g2_ParamLimits

0x0edc,	// (0x000367c0) main_mup_pane_g2

0x0edc,	// (0x000367c0) main_mup_pane_g3_ParamLimits

0x0edc,	// (0x000367c0) main_mup_pane_g3

0x0edc,	// (0x000367c0) main_mup_pane_g4_ParamLimits

0x0edc,	// (0x000367c0) main_mup_pane_g4

0x0edc,	// (0x000367c0) main_mup_pane_g5_ParamLimits

0x0edc,	// (0x000367c0) main_mup_pane_g5

0x0edc,	// (0x000367c0) main_mup_pane_g6_ParamLimits

0x0edc,	// (0x000367c0) main_mup_pane_g6

0x0edc,	// (0x000367c0) main_mup_pane_g7_ParamLimits

0x0edc,	// (0x000367c0) main_mup_pane_g7

0x0edc,	// (0x000367c0) main_mup_pane_g8_ParamLimits

0x0edc,	// (0x000367c0) main_mup_pane_g8

0x0edc,	// (0x000367c0) main_mup_pane_g9_ParamLimits

0x0edc,	// (0x000367c0) main_mup_pane_g9

0x0edc,	// (0x000367c0) main_mup_pane_g10_ParamLimits

0x0edc,	// (0x000367c0) main_mup_pane_g10

0x0edc,	// (0x000367c0) main_mup_pane_g11_ParamLimits

0x0edc,	// (0x000367c0) main_mup_pane_g11

0x0ece,	// (0x000367b2) main_mup_pane_g12_ParamLimits

0x0ece,	// (0x000367b2) main_mup_pane_g12

0x0edc,	// (0x000367c0) main_mup_pane_g13_ParamLimits

0x0edc,	// (0x000367c0) main_mup_pane_g13

0x000c,

0xf369,	// (0x00044c4d) main_mup_pane_g_ParamLimits

0xf369,	// (0x00044c4d) main_mup_pane_g

0x0eea,	// (0x000367ce) main_mup_pane_t1_ParamLimits

0x0eea,	// (0x000367ce) main_mup_pane_t1

0x0eea,	// (0x000367ce) main_mup_pane_t2_ParamLimits

0x0eea,	// (0x000367ce) main_mup_pane_t2

0x0eea,	// (0x000367ce) main_mup_pane_t3_ParamLimits

0x0eea,	// (0x000367ce) main_mup_pane_t3

0x0f1c,	// (0x00036800) main_mup_pane_t4_ParamLimits

0x0f1c,	// (0x00036800) main_mup_pane_t4

0x0f1c,	// (0x00036800) main_mup_pane_t5_ParamLimits

0x0f1c,	// (0x00036800) main_mup_pane_t5

0x0f08,	// (0x000367ec) main_mup_pane_t6_ParamLimits

0x0f08,	// (0x000367ec) main_mup_pane_t6

0x0005,

0xf384,	// (0x00044c68) main_mup_pane_t_ParamLimits

0xf384,	// (0x00044c68) main_mup_pane_t

0x0dad,	// (0x00036691) mup_progress_pane_ParamLimits

0x0dad,	// (0x00036691) mup_progress_pane

0x2ffc,	// (0x000388e0) mup_visualizer_pane_ParamLimits

0x2ffc,	// (0x000388e0) mup_visualizer_pane

0x2ffc,	// (0x000388e0) mup_volume_pane_ParamLimits

0x2ffc,	// (0x000388e0) mup_volume_pane

0x0ece,	// (0x000367b2) mup_visualizer_pane_g1_ParamLimits

0x0ece,	// (0x000367b2) mup_visualizer_pane_g1

0x1c0b,	// (0x000374ef) mup_visualizer_pane_g2_ParamLimits

0x1c0b,	// (0x000374ef) mup_visualizer_pane_g2

0x0ec0,	// (0x000367a4) mup_visualizer_pane_g3_ParamLimits

0x0ec0,	// (0x000367a4) mup_visualizer_pane_g3

0x0002,

0xf391,	// (0x00044c75) mup_visualizer_pane_g_ParamLimits

0xf391,	// (0x00044c75) mup_visualizer_pane_g

0x0efe,	// (0x000367e2) mup_volume_pane_g1

0x0efe,	// (0x000367e2) mup_volume_pane_g2

0x0001,

0xf0af,	// (0x00044993) mup_volume_pane_g

0x0efe,	// (0x000367e2) mup_progress_pane_g1

0x0efe,	// (0x000367e2) mup_progress_pane_g2

0x0efe,	// (0x000367e2) mup_progress_pane_g3

0x0002,

0xf398,	// (0x00044c7c) mup_progress_pane_g

0x0bdc,	// (0x000364c0) bg_popup_window_pane_cp05

0x1c19,	// (0x000374fd) heading_pane_cp02_ParamLimits

0x1c19,	// (0x000374fd) heading_pane_cp02

0x1c33,	// (0x00037517) list_popup_blid_pane

0x1c3b,	// (0x0003751f) list_blid_sat_info_pane_ParamLimits

0x1c3b,	// (0x0003751f) list_blid_sat_info_pane

0x1c4e,	// (0x00037532) list_blid_sat_info_pane_g1

0x1c56,	// (0x0003753a) list_blid_sat_info_pane_t1

0x7908,	// (0x0003d1ec) mup_equalizer_pane_ParamLimits

0x7908,	// (0x0003d1ec) mup_equalizer_pane

0x7929,	// (0x0003d20d) mup_equalizer_pane_cp1_ParamLimits

0x7929,	// (0x0003d20d) mup_equalizer_pane_cp1

0x794a,	// (0x0003d22e) mup_equalizer_pane_cp2_ParamLimits

0x794a,	// (0x0003d22e) mup_equalizer_pane_cp2

0x796b,	// (0x0003d24f) mup_equalizer_pane_cp3_ParamLimits

0x796b,	// (0x0003d24f) mup_equalizer_pane_cp3

0x798c,	// (0x0003d270) mup_equalizer_pane_cp4_ParamLimits

0x798c,	// (0x0003d270) mup_equalizer_pane_cp4

0x79ad,	// (0x0003d291) mup_equalizer_pane_cp5

0x79c3,	// (0x0003d2a7) mup_equalizer_pane_cp6

0x79db,	// (0x0003d2bf) mup_equalizer_pane_cp7

0x2d33,	// (0x00038617) bg_popup_call_poc_act_pane_g9

0x2d3b,	// (0x0003861f) bg_popup_call_poc_act_pane_g10

0x2d43,	// (0x00038627) bg_popup_call_poc_act_pane_g11

0x000a,

0x0e45,	// (0x00036729) mup_scale_pane

0x0e5d,	// (0x00036741) mup_scale_pane_g1

0x1c64,	// (0x00037548) mup_scale_pane_g2

0x0006,

0xf3b4,	// (0x00044c98) mup_scale_pane_g

0x1c88,	// (0x0003756c) msg_data_pane

0x1c90,	// (0x00037574) scroll_pane_cp017

0x48a2,	// (0x0003a186) bg_list_pane_cp04_ParamLimits

0x48a2,	// (0x0003a186) bg_list_pane_cp04

0x1c98,	// (0x0003757c) msg_data_pane_g1

0x7a05,	// (0x0003d2e9) msg_data_pane_g2

0x7a0d,	// (0x0003d2f1) msg_data_pane_g3

0x7a15,	// (0x0003d2f9) msg_data_pane_g4

0x7a1d,	// (0x0003d301) msg_data_pane_g5

0x7a25,	// (0x0003d309) msg_data_pane_g6

0x7a2d,	// (0x0003d311) msg_data_pane_g7

0x0006,

0xf3c3,	// (0x00044ca7) msg_data_pane_g

0x48c2,	// (0x0003a1a6) msg_text_pane_ParamLimits

0x48c2,	// (0x0003a1a6) msg_text_pane

0x7a35,	// (0x0003d319) qrid_highlight_pane_cp011_ParamLimits

0x7a35,	// (0x0003d319) qrid_highlight_pane_cp011

0x0bdc,	// (0x000364c0) msg_body_pane

0x0e45,	// (0x00036729) msg_header_pane

0x492e,	// (0x0003a212) input_focus_pane_cp07

0x7a51,	// (0x0003d335) msg_header_pane_t1_ParamLimits

0x7a51,	// (0x0003d335) msg_header_pane_t1

0x494f,	// (0x0003a233) msg_header_pane_t2_ParamLimits

0x494f,	// (0x0003a233) msg_header_pane_t2

0x0001,

0xf3d7,	// (0x00044cbb) msg_header_pane_t_ParamLimits

0xf3d7,	// (0x00044cbb) msg_header_pane_t

0x1cd5,	// (0x000375b9) msg_body_pane_g1

0x496f,	// (0x0003a253) msg_body_pane_t1_ParamLimits

0x496f,	// (0x0003a253) msg_body_pane_t1

0x49a0,	// (0x0003a284) msg_body_pane_t2_ParamLimits

0x49a0,	// (0x0003a284) msg_body_pane_t2

0x49b2,	// (0x0003a296) msg_body_pane_t3_ParamLimits

0x49b2,	// (0x0003a296) msg_body_pane_t3

0x0002,

0xf3dc,	// (0x00044cc0) msg_body_pane_t_ParamLimits

0xf3dc,	// (0x00044cc0) msg_body_pane_t

0x7abf,	// (0x0003d3a3) main_viewer_pane_g1_ParamLimits

0x7abf,	// (0x0003d3a3) main_viewer_pane_g1

0x7acb,	// (0x0003d3af) main_viewer_pane_g2_ParamLimits

0x7acb,	// (0x0003d3af) main_viewer_pane_g2

0x7ad7,	// (0x0003d3bb) main_viewer_pane_g3_ParamLimits

0x7ad7,	// (0x0003d3bb) main_viewer_pane_g3

0x7ae8,	// (0x0003d3cc) main_viewer_pane_g4_ParamLimits

0x7ae8,	// (0x0003d3cc) main_viewer_pane_g4

0x7af9,	// (0x0003d3dd) main_viewer_pane_g5_ParamLimits

0x7af9,	// (0x0003d3dd) main_viewer_pane_g5

0x7af9,	// (0x0003d3dd) main_viewer_pane_g7_ParamLimits

0x7af9,	// (0x0003d3dd) main_viewer_pane_g7

0x7b0b,	// (0x0003d3ef) main_viewer_pane_g8_ParamLimits

0x7b0b,	// (0x0003d3ef) main_viewer_pane_g8

0x0007,

0xf3ec,	// (0x00044cd0) main_viewer_pane_g_ParamLimits

0xf3ec,	// (0x00044cd0) main_viewer_pane_g

0x1cdd,	// (0x000375c1) viewer_content_pane_ParamLimits

0x1cdd,	// (0x000375c1) viewer_content_pane

0x7b43,	// (0x0003d427) main_postcard_pane_g1_ParamLimits

0x7b43,	// (0x0003d427) main_postcard_pane_g1

0x7b51,	// (0x0003d435) main_postcard_pane_g2_ParamLimits

0x7b51,	// (0x0003d435) main_postcard_pane_g2

0x7b5f,	// (0x0003d443) main_postcard_pane_g3_ParamLimits

0x7b5f,	// (0x0003d443) main_postcard_pane_g3

0x0005,

0xf3fd,	// (0x00044ce1) main_postcard_pane_g_ParamLimits

0xf3fd,	// (0x00044ce1) main_postcard_pane_g

0x7b6f,	// (0x0003d453) main_postcard_pane_g4

0x2ea4,	// (0x00038788) smil_status_volume_pane_g2

0x7b9b,	// (0x0003d47f) postcard_pane_ParamLimits

0x7b9b,	// (0x0003d47f) postcard_pane

0x247a,	// (0x00037d5e) postcard_pane_g1_ParamLimits

0x247a,	// (0x00037d5e) postcard_pane_g1

0x7bcd,	// (0x0003d4b1) postcard_pane_g2_ParamLimits

0x7bcd,	// (0x0003d4b1) postcard_pane_g2

0x7bd9,	// (0x0003d4bd) postcard_pane_g3_ParamLimits

0x7bd9,	// (0x0003d4bd) postcard_pane_g3

0x1cf9,	// (0x000375dd) postcard_pane_g4_ParamLimits

0x1cf9,	// (0x000375dd) postcard_pane_g4

0x7be5,	// (0x0003d4c9) postcard_pane_g5_ParamLimits

0x7be5,	// (0x0003d4c9) postcard_pane_g5

0x7bf1,	// (0x0003d4d5) postcard_pane_g6_ParamLimits

0x7bf1,	// (0x0003d4d5) postcard_pane_g6

0x1ceb,	// (0x000375cf) postcard_pane_g7_ParamLimits

0x1ceb,	// (0x000375cf) postcard_pane_g7

0x0006,

0xf40a,	// (0x00044cee) postcard_pane_g_ParamLimits

0xf40a,	// (0x00044cee) postcard_pane_g

0x7bfd,	// (0x0003d4e1) main_mp2_pane_g1_ParamLimits

0x7bfd,	// (0x0003d4e1) main_mp2_pane_g1

0x7c09,	// (0x0003d4ed) main_mp2_pane_g2_ParamLimits

0x7c09,	// (0x0003d4ed) main_mp2_pane_g2

0x7c15,	// (0x0003d4f9) main_mp2_pane_g3_ParamLimits

0x7c15,	// (0x0003d4f9) main_mp2_pane_g3

0x0002,

0xf419,	// (0x00044cfd) main_mp2_pane_g_ParamLimits

0xf419,	// (0x00044cfd) main_mp2_pane_g

0x7c21,	// (0x0003d505) main_mp2_pane_t1_ParamLimits

0x7c21,	// (0x0003d505) main_mp2_pane_t1

0x7c38,	// (0x0003d51c) main_mp2_pane_t2_ParamLimits

0x7c38,	// (0x0003d51c) main_mp2_pane_t2

0x7c4a,	// (0x0003d52e) main_mp2_pane_t3_ParamLimits

0x7c4a,	// (0x0003d52e) main_mp2_pane_t3

0x0002,

0xf420,	// (0x00044d04) main_mp2_pane_t_ParamLimits

0xf420,	// (0x00044d04) main_mp2_pane_t

0x0dad,	// (0x00036691) pec_content_pane_ParamLimits

0x0dad,	// (0x00036691) pec_content_pane

0x07bf,	// (0x000360a3) scroll_pane_cp015

0x1bfd,	// (0x000374e1) pec_attribute_pane_ParamLimits

0x1bfd,	// (0x000374e1) pec_attribute_pane

0x0ec0,	// (0x000367a4) pec_content_pane_g1_ParamLimits

0x0ec0,	// (0x000367a4) pec_content_pane_g1

0x1d07,	// (0x000375eb) pec_content_pane_t1_ParamLimits

0x1d07,	// (0x000375eb) pec_content_pane_t1

0x1d1b,	// (0x000375ff) pec_content_pane_t2_ParamLimits

0x1d1b,	// (0x000375ff) pec_content_pane_t2

0x0001,

0xf427,	// (0x00044d0b) pec_content_pane_t_ParamLimits

0xf427,	// (0x00044d0b) pec_content_pane_t

0x0eb2,	// (0x00036796) list_single_graphic_pane_cp01_ParamLimits

0x0eb2,	// (0x00036796) list_single_graphic_pane_cp01

0x0e45,	// (0x00036729) bg_popup_sub_pane_cp04

0x1d2f,	// (0x00037613) popup_mup_playback_window_g1

0x1d3b,	// (0x0003761f) popup_mup_playback_window_t1

0x1d50,	// (0x00037634) popup_mup_playback_window_t2

0x0001,

0xf42c,	// (0x00044d10) popup_mup_playback_window_t

0x1d87,	// (0x0003766b) main_image_pane_g1_ParamLimits

0x1d87,	// (0x0003766b) main_image_pane_g1

0x1dca,	// (0x000376ae) scroll_pane_cp018_ParamLimits

0x1dca,	// (0x000376ae) scroll_pane_cp018

0x1de2,	// (0x000376c6) scroll_pane_cp016_ParamLimits

0x1de2,	// (0x000376c6) scroll_pane_cp016

0x7ccd,	// (0x0003d5b1) smil2_image_pane_ParamLimits

0x7ccd,	// (0x0003d5b1) smil2_image_pane

0x7cfd,	// (0x0003d5e1) smil2_root_pane_ParamLimits

0x7cfd,	// (0x0003d5e1) smil2_root_pane

0x7d29,	// (0x0003d60d) smil2_text_pane_ParamLimits

0x7d29,	// (0x0003d60d) smil2_text_pane

0x07bf,	// (0x000360a3) bg_list_pane_cp06

0x07bf,	// (0x000360a3) grid_radio_pane

0x0bdc,	// (0x000364c0) bg_popup_window_pane_cp06

0x1660,	// (0x00036f44) main_fmradio_pane_t1

0x2d8b,	// (0x0003866f) heading_pane_cp04

0x1660,	// (0x00036f44) main_fmradio_pane_t2

0x2d93,	// (0x00038677) popup_cale_lunar_info_window_g1

0x1660,	// (0x00036f44) main_fmradio_pane_t3

0x2d9b,	// (0x0003867f) popup_cale_lunar_info_window_g2

0x1660,	// (0x00036f44) main_fmradio_pane_t4

0x0001,

0x1660,	// (0x00036f44) main_fmradio_pane_t5

0x0004,

0xf514,	// (0x00044df8) popup_cale_lunar_info_window_g

0xf28c,	// (0x00044b70) main_fmradio_pane_t

0x07bf,	// (0x000360a3) wait_bar_pane_cp03

0x0eb2,	// (0x00036796) cell_fmradio_pane_ParamLimits

0x0eb2,	// (0x00036796) cell_fmradio_pane

0x0ec0,	// (0x000367a4) cell_fmradio_pane_g1_ParamLimits

0x0ec0,	// (0x000367a4) cell_fmradio_pane_g1

0x07bf,	// (0x000360a3) grid_highlight_pane_cp011

0x1e16,	// (0x000376fa) poc_content_pane_ParamLimits

0x1e16,	// (0x000376fa) poc_content_pane

0x1e28,	// (0x0003770c) scroll_pane_cp019

0x7d69,	// (0x0003d64d) popup_call_poc_act_window_ParamLimits

0x7d69,	// (0x0003d64d) popup_call_poc_act_window

0x7d76,	// (0x0003d65a) popup_call_poc_inact_window_ParamLimits

0x7d76,	// (0x0003d65a) popup_call_poc_inact_window

0xf4d8,	// (0x00044dbc) bg_popup_call_poc_act_pane_g

0x2d4b,	// (0x0003862f) bg_popup_call_poc_inact_pane_g1

0x2d53,	// (0x00038637) bg_popup_call_poc_inact_pane_g2

0x1e30,	// (0x00037714) popup_call_poc_act_window_g2

0x2d5b,	// (0x0003863f) bg_popup_call_poc_inact_pane_g3

0x2cdb,	// (0x000385bf) bg_popup_call_poc_inact_pane_g4

0x2d63,	// (0x00038647) bg_popup_call_poc_inact_pane_g5

0x1e38,	// (0x0003771c) popup_call_poc_act_window_t1_ParamLimits

0x1e38,	// (0x0003771c) popup_call_poc_act_window_t1

0x1e60,	// (0x00037744) popup_call_poc_act_window_t2_ParamLimits

0x1e60,	// (0x00037744) popup_call_poc_act_window_t2

0x1e88,	// (0x0003776c) popup_call_poc_act_window_t3_ParamLimits

0x1e88,	// (0x0003776c) popup_call_poc_act_window_t3

0x1eb0,	// (0x00037794) popup_call_poc_act_window_t4_ParamLimits

0x1eb0,	// (0x00037794) popup_call_poc_act_window_t4

0x0003,

0xf441,	// (0x00044d25) popup_call_poc_act_window_t_ParamLimits

0xf441,	// (0x00044d25) popup_call_poc_act_window_t

0x2d6b,	// (0x0003864f) bg_popup_call_poc_inact_pane_g6

0x2d73,	// (0x00038657) bg_popup_call_poc_inact_pane_g7

0x2d7b,	// (0x0003865f) bg_popup_call_poc_inact_pane_g8

0x1ec2,	// (0x000377a6) popup_call_poc_inact_window_g2

0x2d83,	// (0x00038667) bg_popup_call_poc_inact_pane_g9

0x0008,

0xf4ef,	// (0x00044dd3) bg_popup_call_poc_inact_pane_g

0x1eca,	// (0x000377ae) popup_call_poc_inact_window_t1_ParamLimits

0x1eca,	// (0x000377ae) popup_call_poc_inact_window_t1

0x1edf,	// (0x000377c3) popup_call_poc_inact_window_t2_ParamLimits

0x1edf,	// (0x000377c3) popup_call_poc_inact_window_t2

0x1ef4,	// (0x000377d8) popup_call_poc_inact_window_t3_ParamLimits

0x1ef4,	// (0x000377d8) popup_call_poc_inact_window_t3

0x0002,

0xf44a,	// (0x00044d2e) popup_call_poc_inact_window_t_ParamLimits

0xf44a,	// (0x00044d2e) popup_call_poc_inact_window_t

0x2e2f,	// (0x00038713) context_pane_ParamLimits

0x837b,	// (0x0003dc5f) signal_pane_ParamLimits

0x1125,	// (0x00036a09) main_call2_pane

0x82ee,	// (0x0003dbd2) popup_phob_thumbnail2_window_ParamLimits

0x82ee,	// (0x0003dbd2) popup_phob_thumbnail2_window

0x7a6d,	// (0x0003d351) aid_hotspot_pointer_arrow_pane

0x7a75,	// (0x0003d359) aid_hotspot_pointer_hand_pane

0x8049,	// (0x0003d92d) phob_pre_status_pane_g5

0x0eb2,	// (0x00036796) cams_zoom_pane_ParamLimits

0x0eb2,	// (0x00036796) image_vga_pane_ParamLimits

0x0ece,	// (0x000367b2) main_camera_pane_g1_ParamLimits

0x0ece,	// (0x000367b2) main_camera_pane_g2_ParamLimits

0x0ece,	// (0x000367b2) main_camera_pane_g3_ParamLimits

0x0ece,	// (0x000367b2) main_camera_pane_g4_ParamLimits

0x0ece,	// (0x000367b2) main_camera_pane_g5_ParamLimits

0x0ece,	// (0x000367b2) main_camera_pane_g6_ParamLimits

0x0ece,	// (0x000367b2) main_camera_pane_g7_ParamLimits

0xf180,	// (0x00044a64) main_camera_pane_g_ParamLimits

0x0f1c,	// (0x00036800) main_camera_pane_t1_ParamLimits

0x0f1c,	// (0x00036800) main_camera_pane_t2_ParamLimits

0xf191,	// (0x00044a75) main_camera_pane_t_ParamLimits

0x0e45,	// (0x00036729) bg_popup_preview_window_pane_cp01_ParamLimits

0x0e45,	// (0x00036729) bg_popup_preview_window_pane_cp01

0x1f09,	// (0x000377ed) popup_phob_thumbnail2_window_g1_ParamLimits

0x1f09,	// (0x000377ed) popup_phob_thumbnail2_window_g1

0x0bdc,	// (0x000364c0) call2_cli_visual_pane

0x7d92,	// (0x0003d676) popup_call2_audio_conf_window_ParamLimits

0x7d92,	// (0x0003d676) popup_call2_audio_conf_window

0x7da7,	// (0x0003d68b) popup_call2_audio_first_window_ParamLimits

0x7da7,	// (0x0003d68b) popup_call2_audio_first_window

0x7e45,	// (0x0003d729) popup_call2_audio_in_window_ParamLimits

0x7e45,	// (0x0003d729) popup_call2_audio_in_window

0x7e87,	// (0x0003d76b) popup_call2_audio_out_window_ParamLimits

0x7e87,	// (0x0003d76b) popup_call2_audio_out_window

0x7ee9,	// (0x0003d7cd) popup_call2_audio_second_window_ParamLimits

0x7ee9,	// (0x0003d7cd) popup_call2_audio_second_window

0x7f47,	// (0x0003d82b) popup_call2_audio_wait_window_ParamLimits

0x7f47,	// (0x0003d82b) popup_call2_audio_wait_window

0x0bdc,	// (0x000364c0) bg_popup_call2_act_pane_cp03

0x0e27,	// (0x0003670b) list_conf_pane_cp

0x1f15,	// (0x000377f9) popup_call2_audio_conf_window_t1

0x1f23,	// (0x00037807) list_single_graphic_popup_conf2_pane_ParamLimits

0x1f23,	// (0x00037807) list_single_graphic_popup_conf2_pane

0x184b,	// (0x0003712f) list_highlight_pane_cp04

0x1f36,	// (0x0003781a) list_single_graphic_popup_conf2_pane_g1

0x185c,	// (0x00037140) list_single_graphic_popup_conf2_pane_g2

0x0001,

0xf451,	// (0x00044d35) list_single_graphic_popup_conf2_pane_g

0x1f40,	// (0x00037824) list_single_graphic_popup_conf2_pane_t1

0x1f4e,	// (0x00037832) bg_popup_call2_act_pane_cp01_ParamLimits

0x1f4e,	// (0x00037832) bg_popup_call2_act_pane_cp01

0x1fd8,	// (0x000378bc) call_type_pane_cp05_ParamLimits

0x1fd8,	// (0x000378bc) call_type_pane_cp05

0x202c,	// (0x00037910) popup_call2_audio_second_window_g1_ParamLimits

0x202c,	// (0x00037910) popup_call2_audio_second_window_g1

0x2080,	// (0x00037964) popup_call2_audio_second_window_g2_ParamLimits

0x2080,	// (0x00037964) popup_call2_audio_second_window_g2

0x0002,

0xf456,	// (0x00044d3a) popup_call2_audio_second_window_g_ParamLimits

0xf456,	// (0x00044d3a) popup_call2_audio_second_window_g

0x20e5,	// (0x000379c9) popup_call2_audio_second_window_t1_ParamLimits

0x20e5,	// (0x000379c9) popup_call2_audio_second_window_t1

0x21a0,	// (0x00037a84) popup_call2_audio_second_window_t2_ParamLimits

0x21a0,	// (0x00037a84) popup_call2_audio_second_window_t2

0x21f3,	// (0x00037ad7) popup_call2_audio_second_window_t3_ParamLimits

0x21f3,	// (0x00037ad7) popup_call2_audio_second_window_t3

0x0003,

0xf45d,	// (0x00044d41) popup_call2_audio_second_window_t_ParamLimits

0xf45d,	// (0x00044d41) popup_call2_audio_second_window_t

0x0bdc,	// (0x000364c0) bg_popup_call2_in_pane_cp02

0x0be6,	// (0x000364ca) call_type_pane_cp04

0x7f86,	// (0x0003d86a) popup_call2_audio_wait_window_g1

0x7f8e,	// (0x0003d872) popup_call2_audio_wait_window_g2

0x0001,

0xf466,	// (0x00044d4a) popup_call2_audio_wait_window_g

0x0bfe,	// (0x000364e2) popup_call2_audio_wait_window_t3

0x22e6,	// (0x00037bca) bg_popup_call2_act_pane_ParamLimits

0x22e6,	// (0x00037bca) bg_popup_call2_act_pane

0x23a6,	// (0x00037c8a) call_type_pane_cp03_ParamLimits

0x23a6,	// (0x00037c8a) call_type_pane_cp03

0x240a,	// (0x00037cee) popup_call2_audio_first_window_g1_ParamLimits

0x240a,	// (0x00037cee) popup_call2_audio_first_window_g1

0x2488,	// (0x00037d6c) popup_call2_audio_first_window_g2_ParamLimits

0x2488,	// (0x00037d6c) popup_call2_audio_first_window_g2

0x247a,	// (0x00037d5e) popup_call2_audio_first_window_g3_ParamLimits

0x247a,	// (0x00037d5e) popup_call2_audio_first_window_g3

0x0004,

0xf46b,	// (0x00044d4f) popup_call2_audio_first_window_g_ParamLimits

0xf46b,	// (0x00044d4f) popup_call2_audio_first_window_g

0x2566,	// (0x00037e4a) popup_call2_audio_first_window_t1_ParamLimits

0x2566,	// (0x00037e4a) popup_call2_audio_first_window_t1

0x2669,	// (0x00037f4d) popup_call2_audio_first_window_t4_ParamLimits

0x2669,	// (0x00037f4d) popup_call2_audio_first_window_t4

0x274c,	// (0x00038030) popup_call2_audio_first_window_t5_ParamLimits

0x274c,	// (0x00038030) popup_call2_audio_first_window_t5

0x0003,

0xf476,	// (0x00044d5a) popup_call2_audio_first_window_t_ParamLimits

0xf476,	// (0x00044d5a) popup_call2_audio_first_window_t

0x0e3d,	// (0x00036721) bg_popup_call2_act_pane_g1

0x2da3,	// (0x00038687) popup_cale_lunar_info_window_t1

0x2db1,	// (0x00038695) popup_cale_lunar_info_window_t2

0x2dbf,	// (0x000386a3) popup_cale_lunar_info_window_t3

0x0bdc,	// (0x000364c0) bg_popup_call2_bubble_pane

0x284d,	// (0x00038131) bg_popup_call2_in_pane_cp01_ParamLimits

0x284d,	// (0x00038131) bg_popup_call2_in_pane_cp01

0x08b8,	// (0x0003619c) call_type_pane_cp02

0x7f96,	// (0x0003d87a) popup_call2_audio_out_window_g1_ParamLimits

0x7f96,	// (0x0003d87a) popup_call2_audio_out_window_g1

0x2895,	// (0x00038179) popup_call2_audio_out_window_g2_ParamLimits

0x2895,	// (0x00038179) popup_call2_audio_out_window_g2

0x7fc2,	// (0x0003d8a6) popup_call2_audio_out_window_g3_ParamLimits

0x7fc2,	// (0x0003d8a6) popup_call2_audio_out_window_g3

0x0003,

0xf47f,	// (0x00044d63) popup_call2_audio_out_window_g_ParamLimits

0xf47f,	// (0x00044d63) popup_call2_audio_out_window_g

0x28cc,	// (0x000381b0) popup_call2_audio_out_window_t1_ParamLimits

0x28cc,	// (0x000381b0) popup_call2_audio_out_window_t1

0x292b,	// (0x0003820f) popup_call2_audio_out_window_t2_ParamLimits

0x292b,	// (0x0003820f) popup_call2_audio_out_window_t2

0x297f,	// (0x00038263) popup_call2_audio_out_window_t3_ParamLimits

0x297f,	// (0x00038263) popup_call2_audio_out_window_t3

0x2995,	// (0x00038279) popup_call2_audio_out_window_t4_ParamLimits

0x2995,	// (0x00038279) popup_call2_audio_out_window_t4

0x29ab,	// (0x0003828f) popup_call2_audio_out_window_t5_ParamLimits

0x29ab,	// (0x0003828f) popup_call2_audio_out_window_t5

0x0005,

0xf488,	// (0x00044d6c) popup_call2_audio_out_window_t_ParamLimits

0xf488,	// (0x00044d6c) popup_call2_audio_out_window_t

0x2a0f,	// (0x000382f3) bg_popup_call2_in_pane_ParamLimits

0x2a0f,	// (0x000382f3) bg_popup_call2_in_pane

0x2a6b,	// (0x0003834f) popup_call2_audio_in_window_g1_ParamLimits

0x2a6b,	// (0x0003834f) popup_call2_audio_in_window_g1

0x2aa3,	// (0x00038387) popup_call2_audio_in_window_g2_ParamLimits

0x2aa3,	// (0x00038387) popup_call2_audio_in_window_g2

0x2adb,	// (0x000383bf) popup_call2_audio_in_window_g3_ParamLimits

0x2adb,	// (0x000383bf) popup_call2_audio_in_window_g3

0x0003,

0xf495,	// (0x00044d79) popup_call2_audio_in_window_g_ParamLimits

0xf495,	// (0x00044d79) popup_call2_audio_in_window_g

0x2b33,	// (0x00038417) popup_call2_audio_in_window_t1_ParamLimits

0x2b33,	// (0x00038417) popup_call2_audio_in_window_t1

0x2bb3,	// (0x00038497) popup_call2_audio_in_window_t2_ParamLimits

0x2bb3,	// (0x00038497) popup_call2_audio_in_window_t2

0x2c33,	// (0x00038517) popup_call2_audio_in_window_t3_ParamLimits

0x2c33,	// (0x00038517) popup_call2_audio_in_window_t3

0x2c4d,	// (0x00038531) popup_call2_audio_in_window_t4_ParamLimits

0x2c4d,	// (0x00038531) popup_call2_audio_in_window_t4

0x2c5f,	// (0x00038543) popup_call2_audio_in_window_t5_ParamLimits

0x2c5f,	// (0x00038543) popup_call2_audio_in_window_t5

0x2c71,	// (0x00038555) popup_call2_audio_in_window_t6_ParamLimits

0x2c71,	// (0x00038555) popup_call2_audio_in_window_t6

0x0005,

0xf49e,	// (0x00044d82) popup_call2_audio_in_window_t_ParamLimits

0xf49e,	// (0x00044d82) popup_call2_audio_in_window_t

0x0e3d,	// (0x00036721) bg_popup_call2_in_pane_g1

0x2dcd,	// (0x000386b1) popup_cale_lunar_info_window_t4

0x0003,

0xf519,	// (0x00044dfd) popup_cale_lunar_info_window_t

0x0e45,	// (0x00036729) bg_popup_call2_rect_pane_ParamLimits

0x0e45,	// (0x00036729) bg_popup_call2_rect_pane

0x0bdc,	// (0x000364c0) call2_cli_visual_graphic_pane

0x0bdc,	// (0x000364c0) call2_cli_visual_text_pane

0x83b7,	// (0x0003dc9b) smil_status_volume_pane_g3

0x0002,

0x0e5d,	// (0x00036741) call2_cli_visual_graphic_pane_g1

0x0e5d,	// (0x00036741) call2_cli_visual_graphic_pane_g2

0x0e5d,	// (0x00036741) call2_cli_visual_graphic_pane_g3

0x0002,

0xf4ab,	// (0x00044d8f) call2_cli_visual_graphic_pane_g

0x2c83,	// (0x00038567) bg_popup_call2_rect_pane_g1

0x103c,	// (0x00036920) bg_popup_call2_rect_pane_g2

0x2c8b,	// (0x0003856f) bg_popup_call2_rect_pane_g3

0x2c93,	// (0x00038577) bg_popup_call2_rect_pane_g4

0x2c9b,	// (0x0003857f) bg_popup_call2_rect_pane_g5

0x2ca3,	// (0x00038587) bg_popup_call2_rect_pane_g6

0x2cab,	// (0x0003858f) bg_popup_call2_rect_pane_g7

0x2cb3,	// (0x00038597) bg_popup_call2_rect_pane_g8

0x2cbb,	// (0x0003859f) bg_popup_call2_rect_pane_g9

0x0008,

0xf4b2,	// (0x00044d96) bg_popup_call2_rect_pane_g

0x2cc3,	// (0x000385a7) bg_popup_call2_bubble_pane_g1

0x2ccb,	// (0x000385af) bg_popup_call2_bubble_pane_g2

0x2cd3,	// (0x000385b7) bg_popup_call2_bubble_pane_g3

0x2cdb,	// (0x000385bf) bg_popup_call2_bubble_pane_g4

0x2ce3,	// (0x000385c7) bg_popup_call2_bubble_pane_g5

0x2ceb,	// (0x000385cf) bg_popup_call2_bubble_pane_g6

0x2cf3,	// (0x000385d7) bg_popup_call2_bubble_pane_g7

0x2cfb,	// (0x000385df) bg_popup_call2_bubble_pane_g8

0x2d03,	// (0x000385e7) bg_popup_call2_bubble_pane_g9

0x0008,

0xf4c5,	// (0x00044da9) bg_popup_call2_bubble_pane_g

0x5bee,	// (0x0003b4d2) aid_cale_week_size_cell_pane

0x0e45,	// (0x00036729) aid_cams_cif_uncrop_pane_ParamLimits

0x0e45,	// (0x00036729) aid_cams_cif_uncrop_pane

0x0eb2,	// (0x00036796) aid_cams_size_cell_ParamLimits

0x0eb2,	// (0x00036796) aid_cams_size_cell

0x0eb2,	// (0x00036796) grid_cams_pane_ParamLimits

0x0eb2,	// (0x00036796) linegrid_cams_pane_ParamLimits

0x62b2,	// (0x0003bb96) call_video_pane_t1

0x62d3,	// (0x0003bbb7) call_video_pane_t2

0x0001,

0xf1dd,	// (0x00044ac1) call_video_pane_t

0x6821,	// (0x0003c105) aid_cale_month_size_cell_pane_ParamLimits

0x6821,	// (0x0003c105) aid_cale_month_size_cell_pane

0xf55d,	// (0x00044e41) smil_status_volume_pane_g

0x83c4,	// (0x0003dca8) volume_smil_pane_ParamLimits

0x5605,	// (0x0003aee9) aid_popup2_width_pane

0x5ae5,	// (0x0003b3c9) cell_qdial_pane_g4_ParamLimits

0x5ae5,	// (0x0003b3c9) cell_qdial_pane_g4

0x7732,	// (0x0003d016) aid_blid_cardinal_pane_ParamLimits

0x7742,	// (0x0003d026) aid_blid_destination_pane_ParamLimits

0x7742,	// (0x0003d026) aid_blid_destination_pane

0x0e45,	// (0x00036729) bg_popup_call_poc_act_pane_ParamLimits

0x0e45,	// (0x00036729) bg_popup_call_poc_act_pane

0x0e45,	// (0x00036729) bg_popup_call_poc_inact_pane_ParamLimits

0x0e45,	// (0x00036729) bg_popup_call_poc_inact_pane

0x2d0b,	// (0x000385ef) bg_popup_call_poc_act_pane_g1

0x2d13,	// (0x000385f7) bg_popup_call_poc_act_pane_g2

0x2d1b,	// (0x000385ff) bg_popup_call_poc_act_pane_g3

0x2cdb,	// (0x000385bf) bg_popup_call_poc_act_pane_g4

0x2ce3,	// (0x000385c7) bg_popup_call_poc_act_pane_g5

0x2d23,	// (0x00038607) bg_popup_call_poc_act_pane_g6

0x2cf3,	// (0x000385d7) bg_popup_call_poc_act_pane_g7

0x2d2b,	// (0x0003860f) bg_popup_call_poc_act_pane_g8

0x0bdc,	// (0x000364c0) main_usb_pane

0x8221,	// (0x0003db05) popup_cale_lunar_info_window

0x65f0,	// (0x0003bed4) im_reading_pane_t1_ParamLimits

0x11e6,	// (0x00036aca) list_im_pane_ParamLimits

0x11f7,	// (0x00036adb) scroll_pane_cp07_ParamLimits

0x0bdc,	// (0x000364c0) grid_highlight_pane_cp012

0x0e45,	// (0x00036729) mup_scale_pane_ParamLimits

0x0ece,	// (0x000367b2) main_usb_pane_g1_ParamLimits

0x0ece,	// (0x000367b2) main_usb_pane_g1

0x0ece,	// (0x000367b2) main_usb_pane_g2_ParamLimits

0x0ece,	// (0x000367b2) main_usb_pane_g2

0x0001,

0xf502,	// (0x00044de6) main_usb_pane_g_ParamLimits

0xf502,	// (0x00044de6) main_usb_pane_g

0x0f1c,	// (0x00036800) main_usb_pane_t1_ParamLimits

0x0f1c,	// (0x00036800) main_usb_pane_t1

0x0f1c,	// (0x00036800) main_usb_pane_t2_ParamLimits

0x0f1c,	// (0x00036800) main_usb_pane_t2

0x0f1c,	// (0x00036800) main_usb_pane_t3_ParamLimits

0x0f1c,	// (0x00036800) main_usb_pane_t3

0x0f1c,	// (0x00036800) main_usb_pane_t4_ParamLimits

0x0f1c,	// (0x00036800) main_usb_pane_t4

0x0f1c,	// (0x00036800) main_usb_pane_t5_ParamLimits

0x0f1c,	// (0x00036800) main_usb_pane_t5

0x0f1c,	// (0x00036800) main_usb_pane_t6_ParamLimits

0x0f1c,	// (0x00036800) main_usb_pane_t6

0x0005,

0xf507,	// (0x00044deb) main_usb_pane_t_ParamLimits

0x76d8,	// (0x0003cfbc) aid_text_placing

0x76e4,	// (0x0003cfc8) main_location2_pane_t1_ParamLimits

0x76f8,	// (0x0003cfdc) main_location2_pane_t2_ParamLimits

0x770c,	// (0x0003cff0) main_location2_pane_t3_ParamLimits

0x7720,	// (0x0003d004) main_location2_pane_t4_ParamLimits

0x7720,	// (0x0003d004) main_location2_pane_t4

0xf31e,	// (0x00044c02) main_location2_pane_t_ParamLimits

0x0e73,	// (0x00036757) find_pinb_pane_g2_ParamLimits

0x0e73,	// (0x00036757) find_pinb_pane_g2

0x0001,

0xf095,	// (0x00044979) find_pinb_pane_g_ParamLimits

0xf095,	// (0x00044979) find_pinb_pane_g

0x0e7f,	// (0x00036763) find_pinb_pane_t1_ParamLimits

0x0e91,	// (0x00036775) find_pinb_pane_t2_ParamLimits

0xf09a,	// (0x0004497e) find_pinb_pane_t_ParamLimits

0x0bdc,	// (0x000364c0) main_call3_pane

0x6de4,	// (0x0003c6c8) cale_month_day_heading_pane_t1_ParamLimits

0x6e6a,	// (0x0003c74e) cale_month_day_heading_pane_t2_ParamLimits

0x6ee3,	// (0x0003c7c7) cale_month_day_heading_pane_t3_ParamLimits

0x6f5c,	// (0x0003c840) cale_month_day_heading_pane_t4_ParamLimits

0x6fd5,	// (0x0003c8b9) cale_month_day_heading_pane_t5_ParamLimits

0x704e,	// (0x0003c932) cale_month_day_heading_pane_t6_ParamLimits

0x70c7,	// (0x0003c9ab) cale_month_day_heading_pane_t7_ParamLimits

0xf215,	// (0x00044af9) cale_month_day_heading_pane_t_ParamLimits

0x1441,	// (0x00036d25) smil_status_volume_pane

0x7bb5,	// (0x0003d499) postcard_address_pane_ParamLimits

0x7bb5,	// (0x0003d499) postcard_address_pane

0x7bc1,	// (0x0003d4a5) postcard_message_pane_ParamLimits

0x7bc1,	// (0x0003d4a5) postcard_message_pane

0x7fee,	// (0x0003d8d2) call2_cli_visual_pane_t1_ParamLimits

0x7fee,	// (0x0003d8d2) call2_cli_visual_pane_t1

0x2ee2,	// (0x000387c6) postcard_message_pane_t1_ParamLimits

0x2ee2,	// (0x000387c6) postcard_message_pane_t1

0x2eca,	// (0x000387ae) postcard_address_pane_t1_ParamLimits

0x2eca,	// (0x000387ae) postcard_address_pane_t1

0x84f5,	// (0x0003ddd9) popup_call3_audio_in_window_ParamLimits

0x84f5,	// (0x0003ddd9) popup_call3_audio_in_window

0x83d9,	// (0x0003dcbd) bg_popup_call3_in_pane_ParamLimits

0x83d9,	// (0x0003dcbd) bg_popup_call3_in_pane

0x843b,	// (0x0003dd1f) popup_call3_audio_in_window_g1_ParamLimits

0x843b,	// (0x0003dd1f) popup_call3_audio_in_window_g1

0x8453,	// (0x0003dd37) popup_call3_audio_in_window_g2_ParamLimits

0x8453,	// (0x0003dd37) popup_call3_audio_in_window_g2

0x846b,	// (0x0003dd4f) popup_call3_audio_in_window_g3_ParamLimits

0x846b,	// (0x0003dd4f) popup_call3_audio_in_window_g3

0x0003,

0xf564,	// (0x00044e48) popup_call3_audio_in_window_g_ParamLimits

0xf564,	// (0x00044e48) popup_call3_audio_in_window_g

0x8493,	// (0x0003dd77) popup_call3_audio_in_window_t1_ParamLimits

0x8493,	// (0x0003dd77) popup_call3_audio_in_window_t1

0x84bb,	// (0x0003dd9f) popup_call3_audio_in_window_t2_ParamLimits

0x84bb,	// (0x0003dd9f) popup_call3_audio_in_window_t2

0x84e3,	// (0x0003ddc7) popup_call3_audio_in_window_t3_ParamLimits

0x84e3,	// (0x0003ddc7) popup_call3_audio_in_window_t3

0x0002,

0xf56d,	// (0x00044e51) popup_call3_audio_in_window_t_ParamLimits

0xf56d,	// (0x00044e51) popup_call3_audio_in_window_t

0x1125,	// (0x00036a09) bg_popup_call3_rect_pane

0x2c83,	// (0x00038567) bg_popup_call3_rect_pane_g1

0x103c,	// (0x00036920) bg_popup_call3_rect_pane_g2

0x2c8b,	// (0x0003856f) bg_popup_call3_rect_pane_g3

0x2c93,	// (0x00038577) bg_popup_call3_rect_pane_g4

0x2c9b,	// (0x0003857f) bg_popup_call3_rect_pane_g5

0x2ca3,	// (0x00038587) bg_popup_call3_rect_pane_g6

0x2cab,	// (0x0003858f) bg_popup_call3_rect_pane_g7

0x07bf,	// (0x000360a3) mup_visualizer_osc_pane

0x07bf,	// (0x000360a3) mup_visualizer_spec_pane

0x83f9,	// (0x0003dcdd) call3_video_qcif_pane_ParamLimits

0x83f9,	// (0x0003dcdd) call3_video_qcif_pane

0x840b,	// (0x0003dcef) call3_video_qcif_uncrop_pane_ParamLimits

0x840b,	// (0x0003dcef) call3_video_qcif_uncrop_pane

0x8419,	// (0x0003dcfd) call3_video_subqcif_pane_ParamLimits

0x8419,	// (0x0003dcfd) call3_video_subqcif_pane

0x842b,	// (0x0003dd0f) call3_video_subqcif_uncrop_pane_ParamLimits

0x842b,	// (0x0003dd0f) call3_video_subqcif_uncrop_pane

0x8483,	// (0x0003dd67) popup_call3_audio_in_window_g4_ParamLimits

0x8483,	// (0x0003dd67) popup_call3_audio_in_window_g4

0x07bf,	// (0x000360a3) mup_spec_half_pane

0x07bf,	// (0x000360a3) mup_spec_half_pane_cp

0x07bf,	// (0x000360a3) mup_osc_middle_pane

0x0efe,	// (0x000367e2) mup_visualizer_osc_pane_g1

0x2e7d,	// (0x00038761) mup_spec_bar_pane_ParamLimits

0x2e7d,	// (0x00038761) mup_spec_bar_pane

0x0efe,	// (0x000367e2) mup_spec_bar_pane_g1

0x0efe,	// (0x000367e2) mup_spec_bar_pane_g2

0x0001,

0xf0af,	// (0x00044993) mup_spec_bar_pane_g

0x5bee,	// (0x0003b4d2) aid_cale_week_size_cell_pane_ParamLimits

0x5c03,	// (0x0003b4e7) bg_cale_heading_pane_ParamLimits

0x1087,	// (0x0003696b) bg_cale_pane_cp01_ParamLimits

0x5c25,	// (0x0003b509) cale_week_corner_pane_ParamLimits

0x5c3f,	// (0x0003b523) cale_week_day_heading_pane_ParamLimits

0x5c61,	// (0x0003b545) cale_week_scroll_pane_g1_ParamLimits

0x5c7e,	// (0x0003b562) cale_week_scroll_pane_g2_ParamLimits

0x5c91,	// (0x0003b575) cale_week_scroll_pane_g3_ParamLimits

0x5ca4,	// (0x0003b588) cale_week_scroll_pane_g4_ParamLimits

0x5cb7,	// (0x0003b59b) cale_week_scroll_pane_g5_ParamLimits

0x5cca,	// (0x0003b5ae) cale_week_scroll_pane_g6_ParamLimits

0x5cdd,	// (0x0003b5c1) cale_week_scroll_pane_g7_ParamLimits

0x5cf2,	// (0x0003b5d6) cale_week_scroll_pane_g8_ParamLimits

0x5d07,	// (0x0003b5eb) cale_week_scroll_pane_g9_ParamLimits

0x5d1a,	// (0x0003b5fe) cale_week_scroll_pane_g10_ParamLimits

0x5d2d,	// (0x0003b611) cale_week_scroll_pane_g11_ParamLimits

0x5d40,	// (0x0003b624) cale_week_scroll_pane_g12_ParamLimits

0x5d57,	// (0x0003b63b) cale_week_scroll_pane_g13_ParamLimits

0x5d72,	// (0x0003b656) cale_week_scroll_pane_g14_ParamLimits

0x5d8d,	// (0x0003b671) cale_week_scroll_pane_g15_ParamLimits

0xf126,	// (0x00044a0a) cale_week_scroll_pane_g_ParamLimits

0x5dbd,	// (0x0003b6a1) cale_week_time_pane_ParamLimits

0x5dd2,	// (0x0003b6b6) grid_cale_week_pane_ParamLimits

0x10a4,	// (0x00036988) listscroll_cale_week_pane_t1

0x10b6,	// (0x0003699a) scroll_pane_cp08_ParamLimits

0x6895,	// (0x0003c179) cale_month_corner_pane_ParamLimits

0x1417,	// (0x00036cfb) cale_month_pane_t1

0x6d63,	// (0x0003c647) cale_month_week_pane_ParamLimits

0x247a,	// (0x00037d5e) popup_call_status_window_g1_ParamLimits

0x7505,	// (0x0003cde9) popup_call_status_window_g2_ParamLimits

0x7511,	// (0x0003cdf5) popup_call_status_window_g3_ParamLimits

0xf2a5,	// (0x00044b89) popup_call_status_window_g_ParamLimits

0x17df,	// (0x000370c3) aid_call2_pane

0x4943,	// (0x0003a227) msg_header_pane_g1

0x7bb5,	// (0x0003d499) postcard_address2_pane_ParamLimits

0x7bb5,	// (0x0003d499) postcard_address2_pane

0x7bc1,	// (0x0003d4a5) postcard_message2_pane_ParamLimits

0x7bc1,	// (0x0003d4a5) postcard_message2_pane

0x8389,	// (0x0003dc6d) message2_row_pane_ParamLimits

0x8389,	// (0x0003dc6d) message2_row_pane

0x83a4,	// (0x0003dc88) address2_row_pane_ParamLimits

0x83a4,	// (0x0003dc88) address2_row_pane

0x2e4a,	// (0x0003872e) postcard_message2_row_pane_g1

0x2e52,	// (0x00038736) postcard_message2_row_pane_t1

0x2e4a,	// (0x0003872e) address2_row_pane_g1

0x2e52,	// (0x00038736) address2_row_pane_t1

0x6057,	// (0x0003b93b) aid_size_cell_vorec

0x0bdc,	// (0x000364c0) main_rss_pane

0x2e60,	// (0x00038744) rss_list_single_pane_ParamLimits

0x2e60,	// (0x00038744) rss_list_single_pane

0x2e6e,	// (0x00038752) rss_list_single_pane_t1

0x2e6e,	// (0x00038752) rss_list_single_pane_t2

0x0001,

0xf558,	// (0x00044e3c) rss_list_single_pane_t

0x0bdc,	// (0x000364c0) main_camera2_pane

0x0bdc,	// (0x000364c0) main_video2_pane

0x0eb2,	// (0x00036796) cams_zoom_pane_cp2_ParamLimits

0x0eb2,	// (0x00036796) cams_zoom_pane_cp2

0x0eb2,	// (0x00036796) image2_vga_pane_ParamLimits

0x0eb2,	// (0x00036796) image2_vga_pane

0x0ece,	// (0x000367b2) main_camera2_pane_g1_ParamLimits

0x0ece,	// (0x000367b2) main_camera2_pane_g1

0x0ece,	// (0x000367b2) main_camera2_pane_g2_ParamLimits

0x0ece,	// (0x000367b2) main_camera2_pane_g2

0x0ece,	// (0x000367b2) main_camera2_pane_g3_ParamLimits

0x0ece,	// (0x000367b2) main_camera2_pane_g3

0x0ece,	// (0x000367b2) main_camera2_pane_g4_ParamLimits

0x0ece,	// (0x000367b2) main_camera2_pane_g4

0x0ece,	// (0x000367b2) main_camera2_pane_g5_ParamLimits

0x0ece,	// (0x000367b2) main_camera2_pane_g5

0x0ece,	// (0x000367b2) main_camera2_pane_g6_ParamLimits

0x0ece,	// (0x000367b2) main_camera2_pane_g6

0x0ece,	// (0x000367b2) main_camera2_pane_g7_ParamLimits

0x0ece,	// (0x000367b2) main_camera2_pane_g7

0x0ece,	// (0x000367b2) main_camera2_pane_g8_ParamLimits

0x0ece,	// (0x000367b2) main_camera2_pane_g8

0x0008,

0xf574,	// (0x00044e58) main_camera2_pane_g_ParamLimits

0xf574,	// (0x00044e58) main_camera2_pane_g

0x0f1c,	// (0x00036800) main_camera2_pane_t1_ParamLimits

0x0f1c,	// (0x00036800) main_camera2_pane_t1

0x0f1c,	// (0x00036800) main_camera2_pane_t2_ParamLimits

0x0f1c,	// (0x00036800) main_camera2_pane_t2

0x0f1c,	// (0x00036800) main_camera2_pane_t3_ParamLimits

0x0f1c,	// (0x00036800) main_camera2_pane_t3

0x0f1c,	// (0x00036800) main_camera2_pane_t4_ParamLimits

0x0f1c,	// (0x00036800) main_camera2_pane_t4

0x0006,

0xf587,	// (0x00044e6b) main_camera2_pane_t_ParamLimits

0xf587,	// (0x00044e6b) main_camera2_pane_t

0x1bfd,	// (0x000374e1) cams_zoom_pane_cp4_ParamLimits

0x1bfd,	// (0x000374e1) cams_zoom_pane_cp4

0x0dad,	// (0x00036691) image2_cif_pane_ParamLimits

0x0dad,	// (0x00036691) image2_cif_pane

0x0eb2,	// (0x00036796) image2_subqcif_pane_ParamLimits

0x0eb2,	// (0x00036796) image2_subqcif_pane

0x1bdb,	// (0x000374bf) main_video2_pane_g1_ParamLimits

0x1bdb,	// (0x000374bf) main_video2_pane_g1

0x1bdb,	// (0x000374bf) main_video2_pane_g2_ParamLimits

0x1bdb,	// (0x000374bf) main_video2_pane_g2

0x1bdb,	// (0x000374bf) main_video2_pane_g3_ParamLimits

0x1bdb,	// (0x000374bf) main_video2_pane_g3

0x1bdb,	// (0x000374bf) main_video2_pane_g4_ParamLimits

0x1bdb,	// (0x000374bf) main_video2_pane_g4

0x1bdb,	// (0x000374bf) main_video2_pane_g5_ParamLimits

0x1bdb,	// (0x000374bf) main_video2_pane_g5

0x1bdb,	// (0x000374bf) main_video2_pane_g6_ParamLimits

0x1bdb,	// (0x000374bf) main_video2_pane_g6

0x0005,

0xf596,	// (0x00044e7a) main_video2_pane_g_ParamLimits

0xf596,	// (0x00044e7a) main_video2_pane_g

0x1be9,	// (0x000374cd) main_video2_pane_t1_ParamLimits

0x1be9,	// (0x000374cd) main_video2_pane_t1

0x1be9,	// (0x000374cd) main_video2_pane_t2_ParamLimits

0x1be9,	// (0x000374cd) main_video2_pane_t2

0x1be9,	// (0x000374cd) main_video2_pane_t3_ParamLimits

0x1be9,	// (0x000374cd) main_video2_pane_t3

0x0002,

0xf5a3,	// (0x00044e87) main_video2_pane_t_ParamLimits

0xf5a3,	// (0x00044e87) main_video2_pane_t

0x80ad,	// (0x0003d991) call_muted_g2

0x0001,

0xf54a,	// (0x00044e2e) call_muted_g

0x0bdc,	// (0x000364c0) main_mup2_pane

0x0edc,	// (0x000367c0) main_mup2_pane_g1_ParamLimits

0x0edc,	// (0x000367c0) main_mup2_pane_g1

0x0edc,	// (0x000367c0) main_mup2_pane_g2_ParamLimits

0x0edc,	// (0x000367c0) main_mup2_pane_g2

0x0efe,	// (0x000367e2) main_mup_pane_g13_cp1

0x07bf,	// (0x000360a3) mup_volume_pane_cp1

0x0edc,	// (0x000367c0) main_mup2_pane_g4_ParamLimits

0x0edc,	// (0x000367c0) main_mup2_pane_g4

0x0edc,	// (0x000367c0) main_mup2_pane_g5_ParamLimits

0x0edc,	// (0x000367c0) main_mup2_pane_g5

0x0edc,	// (0x000367c0) main_mup2_pane_g6_ParamLimits

0x0edc,	// (0x000367c0) main_mup2_pane_g6

0x0edc,	// (0x000367c0) main_mup2_pane_g7_ParamLimits

0x0edc,	// (0x000367c0) main_mup2_pane_g7

0x0006,

0xf5aa,	// (0x00044e8e) main_mup2_pane_g_ParamLimits

0xf5aa,	// (0x00044e8e) main_mup2_pane_g

0x0eea,	// (0x000367ce) main_mup2_pane_t1_ParamLimits

0x0eea,	// (0x000367ce) main_mup2_pane_t1

0x0eea,	// (0x000367ce) main_mup2_pane_t2_ParamLimits

0x0eea,	// (0x000367ce) main_mup2_pane_t2

0x0eea,	// (0x000367ce) main_mup2_pane_t3_ParamLimits

0x0eea,	// (0x000367ce) main_mup2_pane_t3

0x0eea,	// (0x000367ce) main_mup2_pane_t4_ParamLimits

0x0eea,	// (0x000367ce) main_mup2_pane_t4

0x0eea,	// (0x000367ce) main_mup2_pane_t5_ParamLimits

0x0eea,	// (0x000367ce) main_mup2_pane_t5

0x0eea,	// (0x000367ce) main_mup2_pane_t6_ParamLimits

0x0eea,	// (0x000367ce) main_mup2_pane_t6

0x0005,

0xf5b9,	// (0x00044e9d) main_mup2_pane_t_ParamLimits

0xf5b9,	// (0x00044e9d) main_mup2_pane_t

0x2ffc,	// (0x000388e0) mup2_visualizer_pane_ParamLimits

0x2ffc,	// (0x000388e0) mup2_visualizer_pane

0x2ffc,	// (0x000388e0) mup_progress_pane_cp_ParamLimits

0x2ffc,	// (0x000388e0) mup_progress_pane_cp

0x2efe,	// (0x000387e2) mup_volume_pane_cp_ParamLimits

0x2efe,	// (0x000387e2) mup_volume_pane_cp

0x0ec0,	// (0x000367a4) mup2_visualizer_pane_g1_ParamLimits

0x0ec0,	// (0x000367a4) mup2_visualizer_pane_g1

0x0ece,	// (0x000367b2) mup2_visualizer_pane_g2_ParamLimits

0x0ece,	// (0x000367b2) mup2_visualizer_pane_g2

0x0ece,	// (0x000367b2) mup2_visualizer_pane_g3_ParamLimits

0x0ece,	// (0x000367b2) mup2_visualizer_pane_g3

0x0002,

0xf09f,	// (0x00044983) mup2_visualizer_pane_g_ParamLimits

0xf09f,	// (0x00044983) mup2_visualizer_pane_g

0x07bf,	// (0x000360a3) aid_size_cell_fmradio

0x81c3,	// (0x0003daa7) aid_height_parent_landcape

0x1275,	// (0x00036b59) wml_content_pane_cp

0x127d,	// (0x00036b61) wml_tabs_pane

0x1286,	// (0x00036b6a) popup_wml_miniature_window

0x128e,	// (0x00036b72) scroll_pane_cp021

0x12a2,	// (0x00036b86) wml_content_pane_comp8

0x0bdc,	// (0x000364c0) bg_popup_sub_pane_cp05

0x2f14,	// (0x000387f8) popup_wml_miniature_window_g1

0x2f1c,	// (0x00038800) wml_miniature_view_pane

0x8512,	// (0x0003ddf6) aid_size_wml_view

0x851a,	// (0x0003ddfe) wml_miniature_view_pane_g1

0x8523,	// (0x0003de07) wml_miniature_view_pane_g2

0x852c,	// (0x0003de10) wml_miniature_view_pane_g3

0x8534,	// (0x0003de18) wml_miniature_view_pane_g4

0x853c,	// (0x0003de20) wml_miniature_view_pane_g5

0x8544,	// (0x0003de28) wml_miniature_view_pane_g6

0x854c,	// (0x0003de30) wml_miniature_view_pane_g7

0x8554,	// (0x0003de38) wml_miniature_view_pane_g8

0x0007,

0xf5c6,	// (0x00044eaa) wml_miniature_view_pane_g

0x2f24,	// (0x00038808) background_graphic_ParamLimits

0x2f24,	// (0x00038808) background_graphic

0x2f30,	// (0x00038814) wml_tabs_2_pane

0x2f39,	// (0x0003881d) wml_tabs_3_pane_ParamLimits

0x2f39,	// (0x0003881d) wml_tabs_3_pane

0x2f4b,	// (0x0003882f) wml_tabs_4_pane_ParamLimits

0x2f4b,	// (0x0003882f) wml_tabs_4_pane

0x2f61,	// (0x00038845) wml_tabs_5_pane_ParamLimits

0x2f61,	// (0x00038845) wml_tabs_5_pane

0x2f7b,	// (0x0003885f) wml_tabs_pane_g2_ParamLimits

0x2f7b,	// (0x0003885f) wml_tabs_pane_g2

0x2f90,	// (0x00038874) wml_tabs_pane_g3_ParamLimits

0x2f90,	// (0x00038874) wml_tabs_pane_g3

0x2fa5,	// (0x00038889) wml_tabs_2_active_pane_ParamLimits

0x2fa5,	// (0x00038889) wml_tabs_2_active_pane

0x2fa5,	// (0x00038889) wml_tabs_2_passive_pane_ParamLimits

0x2fa5,	// (0x00038889) wml_tabs_2_passive_pane

0x855c,	// (0x0003de40) wml_tabs_3_active_pane_cp_ParamLimits

0x855c,	// (0x0003de40) wml_tabs_3_active_pane_cp

0x856d,	// (0x0003de51) wml_tabs_3_passive_pane_ParamLimits

0x856d,	// (0x0003de51) wml_tabs_3_passive_pane

0x857e,	// (0x0003de62) wml_tabs_3_passive_pane_cp_ParamLimits

0x857e,	// (0x0003de62) wml_tabs_3_passive_pane_cp

0x858f,	// (0x0003de73) tabs_4_active_pane

0x8597,	// (0x0003de7b) tabs_4_passive_pane

0x859f,	// (0x0003de83) tabs_4_passive_pane_cp

0x85a7,	// (0x0003de8b) tabs_4_passive_pane_cp2

0x8021,	// (0x0003d905) aid_height_text

0x2ffc,	// (0x000388e0) mup_volume_cont_pane_ParamLimits

0x2ffc,	// (0x000388e0) mup_volume_cont_pane

0x07bf,	// (0x000360a3) aid_size_cell_pinb

0x07bf,	// (0x000360a3) aid_size_list_pinb

0x2ffc,	// (0x000388e0) mup2_volume_cont_pane_ParamLimits

0x2ffc,	// (0x000388e0) mup2_volume_cont_pane

0x85af,	// (0x0003de93) mup2_volume_cont_pane_g1_ParamLimits

0x85af,	// (0x0003de93) mup2_volume_cont_pane_g1

0x5611,	// (0x0003aef5) aid_size_cell_touch_ParamLimits

0x5611,	// (0x0003aef5) aid_size_cell_touch

0x581c,	// (0x0003b100) touch_pane_ParamLimits

0x581c,	// (0x0003b100) touch_pane

0x07bf,	// (0x000360a3) main_rss2_pane

0x2fbc,	// (0x000388a0) listscroll_rss2_pane

0x2fc5,	// (0x000388a9) rss2_navigation_pane

0x2fcd,	// (0x000388b1) list_rss2_pane

0x18f0,	// (0x000371d4) scroll_pane_cp22

0x2fd5,	// (0x000388b9) rss2_navigation_pane_g1

0x2fde,	// (0x000388c2) rss2_navigation_pane_g2

0x2fe6,	// (0x000388ca) rss2_navigation_pane_g3

0x0002,

0xf5d7,	// (0x00044ebb) rss2_navigation_pane_g

0x2fee,	// (0x000388d2) rss2_navigation_pane_t1

0x85c5,	// (0x0003dea9) rss2_list_single_pane_ParamLimits

0x85c5,	// (0x0003dea9) rss2_list_single_pane

0x300a,	// (0x000388ee) rss2_list_single_pane_t2

0x3018,	// (0x000388fc) rss2_list_single_pane_t3_ParamLimits

0x3018,	// (0x000388fc) rss2_list_single_pane_t3

0x3035,	// (0x00038919) rss2_list_single_pane_t4

0x7369,	// (0x0003cc4d) smil_status_pane_g1

0x0dad,	// (0x00036691) main_image2_pane_ParamLimits

0x0dad,	// (0x00036691) main_image2_pane

0x0ece,	// (0x000367b2) main_camera2_pane_g9_ParamLimits

0x0ece,	// (0x000367b2) main_camera2_pane_g9

0x0f1c,	// (0x00036800) main_camera2_pane_t5_ParamLimits

0x0f1c,	// (0x00036800) main_camera2_pane_t5

0x35a0,	// (0x00038e84) main_camera2_pane_t6_ParamLimits

0x35a0,	// (0x00038e84) main_camera2_pane_t6

0x85f9,	// (0x0003dedd) main_image2_pane_g1_ParamLimits

0x85f9,	// (0x0003dedd) main_image2_pane_g1

0x7d53,	// (0x0003d637) smil2_video_pane_ParamLimits

0x7d53,	// (0x0003d637) smil2_video_pane

0x47d7,	// (0x0003a0bb) aid_zoom_text_primary_cp

0x57c5,	// (0x0003b0a9) popup_preview_fixed_window

0x11de,	// (0x00036ac2) im_reading_pane_g1

0x8504,	// (0x0003dde8) cams2_bc_adjust_pane_cp_ParamLimits

0x8504,	// (0x0003dde8) cams2_bc_adjust_pane_cp

0x0eb2,	// (0x00036796) cams2_bc_adjust_pane_ParamLimits

0x0eb2,	// (0x00036796) cams2_bc_adjust_pane

0x0efe,	// (0x000367e2) cams2_bc_adjust_pane_g1

0x07bf,	// (0x000360a3) cams2_slider_pane

0x0efe,	// (0x000367e2) cams2_slider_pane_g1

0x0efe,	// (0x000367e2) cams2_slider_pane_g2

0x0006,

0xf5de,	// (0x00044ec2) cams2_slider_pane_g

0x58ed,	// (0x0003b1d1) calc_display_pane_ParamLimits

0x590b,	// (0x0003b1ef) calc_paper_pane_ParamLimits

0x5927,	// (0x0003b20b) grid_calc_pane_ParamLimits

0x756f,	// (0x0003ce53) popup_clock_digital_window_t1_ParamLimits

0x1db3,	// (0x00037697) main_image_pane_t1

0x58d3,	// (0x0003b1b7) aid_size_cell_calc_ParamLimits

0x58d3,	// (0x0003b1b7) aid_size_cell_calc

0x81fd,	// (0x0003dae1) popup_blid_sat_info2_window_ParamLimits

0x81fd,	// (0x0003dae1) popup_blid_sat_info2_window

0x3043,	// (0x00038927) aid_size_cell_blid

0x2ffc,	// (0x000388e0) bg_popup_window_pane_cp07

0x3060,	// (0x00038944) grid_popup_blid_pane

0x306a,	// (0x0003894e) heading_pane_cp05_ParamLimits

0x306a,	// (0x0003894e) heading_pane_cp05

0x3134,	// (0x00038a18) cell_popup_blid_pane_ParamLimits

0x3134,	// (0x00038a18) cell_popup_blid_pane

0x3158,	// (0x00038a3c) cell_popup_blid_pane_g1

0x3160,	// (0x00038a44) cell_popup_blid_pane_t1

0x2ffc,	// (0x000388e0) mup2_indicator_pane_ParamLimits

0x2ffc,	// (0x000388e0) mup2_indicator_pane

0x07bf,	// (0x000360a3) mup2_visualizer_osc_pane

0x2efe,	// (0x000387e2) mup2_visualizer_spec_pane_ParamLimits

0x2efe,	// (0x000387e2) mup2_visualizer_spec_pane

0x07bf,	// (0x000360a3) mup2_spec_half_pane

0x07bf,	// (0x000360a3) mup2_spec_half_pane_cp

0x316e,	// (0x00038a52) mup2_spec_bar_pane_ParamLimits

0x316e,	// (0x00038a52) mup2_spec_bar_pane

0x0efe,	// (0x000367e2) mup2_spec_bar_pane_g1

0x318d,	// (0x00038a71) mup2_spec_bar_pane_g2

0x0001,

0xf604,	// (0x00044ee8) mup2_spec_bar_pane_g

0x07bf,	// (0x000360a3) mup2_osc_middle_pane

0x0efe,	// (0x000367e2) mup2_visualizer_osc_pane_g1

0x07e9,	// (0x000360cd) popup_number_entry_window_t1_ParamLimits

0x07fc,	// (0x000360e0) popup_number_entry_window_t2_ParamLimits

0x080e,	// (0x000360f2) popup_number_entry_window_t3_ParamLimits

0x5873,	// (0x0003b157) popup_number_entry_window_t5_ParamLimits

0x5873,	// (0x0003b157) popup_number_entry_window_t5

0xf040,	// (0x00044924) popup_number_entry_window_t_ParamLimits

0x0820,	// (0x00036104) text_title_cp2_ParamLimits

0x7a7d,	// (0x0003d361) aid_hotspot_pointer_text2_pane

0x7b17,	// (0x0003d3fb) main_viewer_pane_g9_ParamLimits

0x7b17,	// (0x0003d3fb) main_viewer_pane_g9

0x1417,	// (0x00036cfb) cale_month_pane_t1_ParamLimits

0x1454,	// (0x00036d38) bg_cale_pane_ParamLimits

0x146c,	// (0x00036d50) list_cale_pane_ParamLimits

0x147d,	// (0x00036d61) listscroll_cale_day_pane_t1

0x148f,	// (0x00036d73) scroll_pane_cp09_ParamLimits

0x7820,	// (0x0003d104) main_mup_eq_pane_t1_ParamLimits

0x7820,	// (0x0003d104) main_mup_eq_pane_t1

0x783a,	// (0x0003d11e) main_mup_eq_pane_t2_ParamLimits

0x783a,	// (0x0003d11e) main_mup_eq_pane_t2

0x7852,	// (0x0003d136) main_mup_eq_pane_t3_ParamLimits

0x7852,	// (0x0003d136) main_mup_eq_pane_t3

0x786a,	// (0x0003d14e) main_mup_eq_pane_t4_ParamLimits

0x786a,	// (0x0003d14e) main_mup_eq_pane_t4

0x7882,	// (0x0003d166) main_mup_eq_pane_t5_ParamLimits

0x7882,	// (0x0003d166) main_mup_eq_pane_t5

0x789a,	// (0x0003d17e) main_mup_eq_pane_t6_ParamLimits

0x789a,	// (0x0003d17e) main_mup_eq_pane_t6

0x78ae,	// (0x0003d192) main_mup_eq_pane_t7_ParamLimits

0x78ae,	// (0x0003d192) main_mup_eq_pane_t7

0x78c2,	// (0x0003d1a6) main_mup_eq_pane_t8_ParamLimits

0x78c2,	// (0x0003d1a6) main_mup_eq_pane_t8

0x78d8,	// (0x0003d1bc) main_mup_eq_pane_t9_ParamLimits

0x78d8,	// (0x0003d1bc) main_mup_eq_pane_t9

0x78f0,	// (0x0003d1d4) main_mup_eq_pane_t10_ParamLimits

0x78f0,	// (0x0003d1d4) main_mup_eq_pane_t10

0x0009,

0xf39f,	// (0x00044c83) main_mup_eq_pane_t_ParamLimits

0xf39f,	// (0x00044c83) main_mup_eq_pane_t

0x79ad,	// (0x0003d291) mup_equalizer_pane_cp5_ParamLimits

0x79c3,	// (0x0003d2a7) mup_equalizer_pane_cp6_ParamLimits

0x79db,	// (0x0003d2bf) mup_equalizer_pane_cp7_ParamLimits

0x07bf,	// (0x000360a3) main_gallery_pane

0x2e9c,	// (0x00038780) smil2_volume_pane

0x2eb7,	// (0x0003879b) smil_status_volume_pane_g1_ParamLimits

0x2ea4,	// (0x00038788) smil_status_volume_pane_g2_ParamLimits

0x83b7,	// (0x0003dc9b) smil_status_volume_pane_g3_ParamLimits

0xf55d,	// (0x00044e41) smil_status_volume_pane_g_ParamLimits

0x2ffc,	// (0x000388e0) bg_popup_window_pane_cp07_ParamLimits

0x304b,	// (0x0003892f) blid_firmament_pane

0x0eb2,	// (0x00036796) aid_size_cell_gallery_ParamLimits

0x0eb2,	// (0x00036796) aid_size_cell_gallery

0x0eb2,	// (0x00036796) grid_gallery_pane_ParamLimits

0x0eb2,	// (0x00036796) grid_gallery_pane

0x1bfd,	// (0x000374e1) cell_gallery_pane_ParamLimits

0x1bfd,	// (0x000374e1) cell_gallery_pane

0x0dad,	// (0x00036691) bg_cell_gallery_focus_pane_ParamLimits

0x0dad,	// (0x00036691) bg_cell_gallery_focus_pane

0x0ec0,	// (0x000367a4) cell_gallery_pane_g1_ParamLimits

0x0ec0,	// (0x000367a4) cell_gallery_pane_g1

0x0ec0,	// (0x000367a4) cell_gallery_pane_g2_ParamLimits

0x0ec0,	// (0x000367a4) cell_gallery_pane_g2

0x0ec0,	// (0x000367a4) cell_gallery_pane_g3_ParamLimits

0x0ec0,	// (0x000367a4) cell_gallery_pane_g3

0x0ece,	// (0x000367b2) cell_gallery_pane_g4_ParamLimits

0x0ece,	// (0x000367b2) cell_gallery_pane_g4

0x0003,

0xf609,	// (0x00044eed) cell_gallery_pane_g_ParamLimits

0xf609,	// (0x00044eed) cell_gallery_pane_g

0x3197,	// (0x00038a7b) bg_cell_gallery_focus_pane_g1

0x319f,	// (0x00038a83) bg_cell_gallery_focus_pane_g2

0x31a7,	// (0x00038a8b) bg_cell_gallery_focus_pane_g3

0x31af,	// (0x00038a93) bg_cell_gallery_focus_pane_g4

0x31b7,	// (0x00038a9b) bg_cell_gallery_focus_pane_g5

0x31bf,	// (0x00038aa3) bg_cell_gallery_focus_pane_g6

0x31c7,	// (0x00038aab) bg_cell_gallery_focus_pane_g7

0x31cf,	// (0x00038ab3) bg_cell_gallery_focus_pane_g8

0x0007,

0xf612,	// (0x00044ef6) bg_cell_gallery_focus_pane_g

0x31d7,	// (0x00038abb) aid_firma_cardinal

0x31eb,	// (0x00038acf) blid_firmament_pane_t1

0x3202,	// (0x00038ae6) blid_firmament_pane_t2

0x3219,	// (0x00038afd) blid_firmament_pane_t3

0x3230,	// (0x00038b14) blid_firmament_pane_t4

0x0003,

0xf623,	// (0x00044f07) blid_firmament_pane_t

0x3247,	// (0x00038b2b) blid_sat_info_pane

0x0efe,	// (0x000367e2) blid_sat_info_pane_g1

0x0efe,	// (0x000367e2) blid_sat_info_pane_g2

0x0001,

0xf0af,	// (0x00044993) blid_sat_info_pane_g

0x3257,	// (0x00038b3b) blid_sat_info_pane_t1

0x3265,	// (0x00038b49) smil2_volume_content_pane

0x326e,	// (0x00038b52) smil2_volume_pane_g1

0x0fd3,	// (0x000368b7) smil2_volume_content_pane_g1

0x3276,	// (0x00038b5a) smil2_volume_content_pane_g2

0x327f,	// (0x00038b63) smil2_volume_content_pane_g3

0x3288,	// (0x00038b6c) smil2_volume_content_pane_g4

0x3291,	// (0x00038b75) smil2_volume_content_pane_g5

0x329a,	// (0x00038b7e) smil2_volume_content_pane_g6

0x32a3,	// (0x00038b87) smil2_volume_content_pane_g7

0x32ac,	// (0x00038b90) smil2_volume_content_pane_g8

0x32b5,	// (0x00038b99) smil2_volume_content_pane_g9

0x32be,	// (0x00038ba2) smil2_volume_content_pane_g10

0x0009,

0xf62c,	// (0x00044f10) smil2_volume_content_pane_g

0x5e53,	// (0x0003b737) cale_week_day_heading_pane_t1_ParamLimits

0x5e6e,	// (0x0003b752) cale_week_day_heading_pane_t2_ParamLimits

0x5e89,	// (0x0003b76d) cale_week_day_heading_pane_t3_ParamLimits

0x5ea4,	// (0x0003b788) cale_week_day_heading_pane_t4_ParamLimits

0x5ebf,	// (0x0003b7a3) cale_week_day_heading_pane_t5_ParamLimits

0x5eda,	// (0x0003b7be) cale_week_day_heading_pane_t6_ParamLimits

0x5ef5,	// (0x0003b7d9) cale_week_day_heading_pane_t7_ParamLimits

0xf147,	// (0x00044a2b) cale_week_day_heading_pane_t_ParamLimits

0x10d3,	// (0x000369b7) bg_cale_side_pane_ParamLimits

0x5f10,	// (0x0003b7f4) cale_week_time_pane_t1_ParamLimits

0x5f2a,	// (0x0003b80e) cale_week_time_pane_t2_ParamLimits

0x5f44,	// (0x0003b828) cale_week_time_pane_t3_ParamLimits

0x5f5e,	// (0x0003b842) cale_week_time_pane_t4_ParamLimits

0x5f78,	// (0x0003b85c) cale_week_time_pane_t5_ParamLimits

0x5f92,	// (0x0003b876) cale_week_time_pane_t6_ParamLimits

0x5fb2,	// (0x0003b896) cale_week_time_pane_t7_ParamLimits

0x5fd4,	// (0x0003b8b8) cale_week_time_pane_t8_ParamLimits

0xf156,	// (0x00044a3a) cale_week_time_pane_t_ParamLimits

0x5ff8,	// (0x0003b8dc) cell_cale_week_pane_g2_ParamLimits

0x10d3,	// (0x000369b7) bg_cale_side_pane_cp01_ParamLimits

0x7158,	// (0x0003ca3c) cale_month_week_pane_t1_ParamLimits

0x7171,	// (0x0003ca55) cale_month_week_pane_t2_ParamLimits

0x718a,	// (0x0003ca6e) cale_month_week_pane_t3_ParamLimits

0x71a3,	// (0x0003ca87) cale_month_week_pane_t4_ParamLimits

0x71be,	// (0x0003caa2) cale_month_week_pane_t5_ParamLimits

0x71df,	// (0x0003cac3) cale_month_week_pane_t6_ParamLimits

0xf224,	// (0x00044b08) cale_month_week_pane_t_ParamLimits

0x7326,	// (0x0003cc0a) cell_cale_month_pane_g1_ParamLimits

0x07bf,	// (0x000360a3) main_cale_event_viewer_pane

0x07bf,	// (0x000360a3) listscroll_cale_event_viewer_pane

0x32c7,	// (0x00038bab) list_cale_ev_pane

0x32cf,	// (0x00038bb3) scroll_pane_cp023

0x32db,	// (0x00038bbf) field_cale_ev_pane_ParamLimits

0x32db,	// (0x00038bbf) field_cale_ev_pane

0x32f9,	// (0x00038bdd) field_cale_ev_content_pane_ParamLimits

0x32f9,	// (0x00038bdd) field_cale_ev_content_pane

0x3305,	// (0x00038be9) field_cale_ev_pane_g1_ParamLimits

0x3305,	// (0x00038be9) field_cale_ev_pane_g1

0x3311,	// (0x00038bf5) field_cale_ev_pane_g2_ParamLimits

0x3311,	// (0x00038bf5) field_cale_ev_pane_g2

0x3329,	// (0x00038c0d) field_cale_ev_pane_g3_ParamLimits

0x3329,	// (0x00038c0d) field_cale_ev_pane_g3

0x0002,

0xf641,	// (0x00044f25) field_cale_ev_pane_g_ParamLimits

0xf641,	// (0x00044f25) field_cale_ev_pane_g

0x3341,	// (0x00038c25) field_cale_ev_pane_t1_ParamLimits

0x3341,	// (0x00038c25) field_cale_ev_pane_t1

0x3358,	// (0x00038c3c) field_cale_ev_content_pane_t1_ParamLimits

0x3358,	// (0x00038c3c) field_cale_ev_content_pane_t1

0x1ca0,	// (0x00037584) bg_button_pane_cp01

0x5bde,	// (0x0003b4c2) listscroll_cale_week_pane_ParamLimits

0x107e,	// (0x00036962) popup_toolbar_window_cp01

0x10a4,	// (0x00036988) listscroll_cale_week_pane_t1_ParamLimits

0x5bde,	// (0x0003b4c2) listscroll_cale_day_pane_ParamLimits

0x107e,	// (0x00036962) popup_toolbar_window_cp02

0x147d,	// (0x00036d61) listscroll_cale_day_pane_t1_ParamLimits

0x5bde,	// (0x0003b4c2) main_cale_month_pane_ParamLimits

0x8300,	// (0x0003dbe4) popup_toolbar_window_cp03_ParamLimits

0x8300,	// (0x0003dbe4) popup_toolbar_window_cp03

0x7c69,	// (0x0003d54d) main_image_pane_g2_ParamLimits

0x7c69,	// (0x0003d54d) main_image_pane_g2

0x7c75,	// (0x0003d559) main_image_pane_g3_ParamLimits

0x7c75,	// (0x0003d559) main_image_pane_g3

0x0002,

0xf431,	// (0x00044d15) main_image_pane_g_ParamLimits

0xf431,	// (0x00044d15) main_image_pane_g

0x1db3,	// (0x00037697) main_image_pane_t1_ParamLimits

0x7c81,	// (0x0003d565) main_image_pane_t2_ParamLimits

0x7c81,	// (0x0003d565) main_image_pane_t2

0x7c93,	// (0x0003d577) main_image_pane_t3_ParamLimits

0x7c93,	// (0x0003d577) main_image_pane_t3

0x7ca5,	// (0x0003d589) main_image_pane_t4_ParamLimits

0x7ca5,	// (0x0003d589) main_image_pane_t4

0x0003,

0xf438,	// (0x00044d1c) main_image_pane_t_ParamLimits

0xf438,	// (0x00044d1c) main_image_pane_t

0x7cb7,	// (0x0003d59b) popup_image_details_window_cp01

0x7cc1,	// (0x0003d5a5) popup_toobar_trans_pane_cp01_ParamLimits

0x7cc1,	// (0x0003d5a5) popup_toobar_trans_pane_cp01

0x8250,	// (0x0003db34) popup_image_details_window_ParamLimits

0x8250,	// (0x0003db34) popup_image_details_window

0x825e,	// (0x0003db42) popup_image_focus_window

0x0eb2,	// (0x00036796) camera2_autofocus_pane_ParamLimits

0x0eb2,	// (0x00036796) camera2_autofocus_pane

0x07bf,	// (0x000360a3) bg_popup_sub_pane_cp06

0x3376,	// (0x00038c5a) popup_image_focus_window_g1

0x337e,	// (0x00038c62) popup_image_focus_window_g2

0x3386,	// (0x00038c6a) popup_image_focus_window_g3

0x338e,	// (0x00038c72) popup_image_focus_window_g4

0x0003,

0xf648,	// (0x00044f2c) popup_image_focus_window_g

0x3396,	// (0x00038c7a) popup_image_focus_window_t1

0x33a4,	// (0x00038c88) popup_image_focus_window_t2

0x33b4,	// (0x00038c98) popup_image_focus_window_t3

0x0002,

0xf651,	// (0x00044f35) popup_image_focus_window_t

0x0ec0,	// (0x000367a4) camera2_autofocus_pane_g1

0x0dad,	// (0x00036691) bg_tb_trans_pane_cp01

0x33c2,	// (0x00038ca6) popup_image_details_window_g1

0x33d5,	// (0x00038cb9) popup_image_details_window_g2

0x0002,

0xf663,	// (0x00044f47) popup_image_details_window_g

0x33fe,	// (0x00038ce2) popup_image_details_window_t1

0x3410,	// (0x00038cf4) popup_image_details_window_t2

0x3429,	// (0x00038d0d) popup_image_details_window_t3

0x343d,	// (0x00038d21) popup_image_details_window_t4

0x3458,	// (0x00038d3c) popup_image_details_window_t5

0x0004,

0xf66a,	// (0x00044f4e) popup_image_details_window_t

0x0f48,	// (0x0003682c) bg_calc_paper_pane_ParamLimits

0x07bf,	// (0x000360a3) grid_highlight_pane_cp013

0x5962,	// (0x0003b246) list_calc_pane_ParamLimits

0x5974,	// (0x0003b258) scroll_pane_cp024

0x0f5c,	// (0x00036840) bg_calc_display_pane_ParamLimits

0x597c,	// (0x0003b260) calc_display_pane_t1_ParamLimits

0x5991,	// (0x0003b275) calc_display_pane_t2_ParamLimits

0x59a6,	// (0x0003b28a) calc_display_pane_t3_ParamLimits

0xf0c7,	// (0x000449ab) calc_display_pane_t_ParamLimits

0x5a80,	// (0x0003b364) cell_calc_pane_g2

0x0001,

0xf0e4,	// (0x000449c8) cell_calc_pane_g

0x5a89,	// (0x0003b36d) cell_calc_pane_t1

0x0fb1,	// (0x00036895) grid_highlight_pane_cp02_ParamLimits

0x0fc7,	// (0x000368ab) toolbar_button_pane_cp01_ParamLimits

0x0fc7,	// (0x000368ab) toolbar_button_pane_cp01

0x1df8,	// (0x000376dc) temp_image_control_pane_ParamLimits

0x1df8,	// (0x000376dc) temp_image_control_pane

0x0dad,	// (0x00036691) main_mp3_pane

0x3472,	// (0x00038d56) temp_image_control_pane_g1_ParamLimits

0x3472,	// (0x00038d56) temp_image_control_pane_g1

0x3480,	// (0x00038d64) temp_image_control_pane_g2_ParamLimits

0x3480,	// (0x00038d64) temp_image_control_pane_g2

0x3492,	// (0x00038d76) temp_image_control_pane_g3_ParamLimits

0x3492,	// (0x00038d76) temp_image_control_pane_g3

0x8605,	// (0x0003dee9) temp_image_control_pane_g4_ParamLimits

0x8605,	// (0x0003dee9) temp_image_control_pane_g4

0x0003,

0xf675,	// (0x00044f59) temp_image_control_pane_g_ParamLimits

0xf675,	// (0x00044f59) temp_image_control_pane_g

0x3472,	// (0x00038d56) main_mp3_pane_g1

0x8616,	// (0x0003defa) main_mp3_pane_g2

0x0007,

0xf67e,	// (0x00044f62) main_mp3_pane_g

0x34c7,	// (0x00038dab) main_mp3_pane_t1

0x0ece,	// (0x000367b2) main_camera_pane_g8_ParamLimits

0x0ece,	// (0x000367b2) main_camera_pane_g8

0x619f,	// (0x0003ba83) main_video_pane_g7_ParamLimits

0x619f,	// (0x0003ba83) main_video_pane_g7

0x0f1c,	// (0x00036800) main_camera2_pane_t7_ParamLimits

0x0f1c,	// (0x00036800) main_camera2_pane_t7

0x1235,	// (0x00036b19) scroll_pane_cp025_ParamLimits

0x1235,	// (0x00036b19) scroll_pane_cp025

0x1249,	// (0x00036b2d) scroll_pane_cp026_ParamLimits

0x1249,	// (0x00036b2d) scroll_pane_cp026

0x1258,	// (0x00036b3c) wml_content_pane_ParamLimits

0x07bf,	// (0x000360a3) main_touch_calib_pane

0x86ba,	// (0x0003df9e) main_touch_calib_pane_g1

0x86c6,	// (0x0003dfaa) main_touch_calib_pane_g2

0x86d2,	// (0x0003dfb6) main_touch_calib_pane_g3

0x86de,	// (0x0003dfc2) main_touch_calib_pane_g4

0x0003,

0xf69c,	// (0x00044f80) main_touch_calib_pane_g

0x86ea,	// (0x0003dfce) main_touch_calib_pane_t1

0x8703,	// (0x0003dfe7) main_touch_calib_pane_t2

0x0004,

0xf6a5,	// (0x00044f89) main_touch_calib_pane_t

0x19bf,	// (0x000372a3) mup_progress_pane_cp02

0x19f4,	// (0x000372d8) navi_pane_g1

0x1aaf,	// (0x00037393) navi_pane_mp_t3

0x0dad,	// (0x00036691) main_mp3_pane_ParamLimits

0x833d,	// (0x0003dc21) navi_pane_ParamLimits

0x3472,	// (0x00038d56) main_mp3_pane_g1_ParamLimits

0x8616,	// (0x0003defa) main_mp3_pane_g2_ParamLimits

0x8622,	// (0x0003df06) main_mp3_pane_g3_ParamLimits

0x8622,	// (0x0003df06) main_mp3_pane_g3

0x862e,	// (0x0003df12) main_mp3_pane_g4_ParamLimits

0x862e,	// (0x0003df12) main_mp3_pane_g4

0x0ec0,	// (0x000367a4) main_mp3_pane_g5_ParamLimits

0x0ec0,	// (0x000367a4) main_mp3_pane_g5

0x34a2,	// (0x00038d86) main_mp3_pane_g6_ParamLimits

0x34a2,	// (0x00038d86) main_mp3_pane_g6

0x34af,	// (0x00038d93) main_mp3_pane_g7_ParamLimits

0x34af,	// (0x00038d93) main_mp3_pane_g7

0x34bb,	// (0x00038d9f) main_mp3_pane_g8_ParamLimits

0x34bb,	// (0x00038d9f) main_mp3_pane_g8

0xf67e,	// (0x00044f62) main_mp3_pane_g_ParamLimits

0x863a,	// (0x0003df1e) main_mp3_pane_t2

0x864a,	// (0x0003df2e) main_mp3_pane_t3

0x34d5,	// (0x00038db9) main_mp3_pane_t4

0x34e3,	// (0x00038dc7) main_mp3_pane_t5

0x0005,

0xf68f,	// (0x00044f73) main_mp3_pane_t

0x34f1,	// (0x00038dd5) mup_progress_pane_cp01

0x47d7,	// (0x0003a0bb) aid_zoom_text_secondary2

0x32c7,	// (0x00038bab) list_cale_ev2_pane

0x32cf,	// (0x00038bb3) scroll_pane_cp023_ParamLimits

0x875e,	// (0x0003e042) field_cale_ev2_pane_ParamLimits

0x875e,	// (0x0003e042) field_cale_ev2_pane

0x49c4,	// (0x0003a2a8) field_cale_ev2_pane_g1_ParamLimits

0x49c4,	// (0x0003a2a8) field_cale_ev2_pane_g1

0x49d0,	// (0x0003a2b4) field_cale_ev2_pane_g2_ParamLimits

0x49d0,	// (0x0003a2b4) field_cale_ev2_pane_g2

0x49e8,	// (0x0003a2cc) field_cale_ev2_pane_g3_ParamLimits

0x49e8,	// (0x0003a2cc) field_cale_ev2_pane_g3

0x0003,

0xf6b0,	// (0x00044f94) field_cale_ev2_pane_g_ParamLimits

0xf6b0,	// (0x00044f94) field_cale_ev2_pane_g

0x4a0c,	// (0x0003a2f0) field_cale_ev2_pane_t1_ParamLimits

0x4a0c,	// (0x0003a2f0) field_cale_ev2_pane_t1

0x4a23,	// (0x0003a307) field_cale_ev2_pane_t2_ParamLimits

0x4a23,	// (0x0003a307) field_cale_ev2_pane_t2

0x0001,

0xf6b9,	// (0x00044f9d) field_cale_ev2_pane_t_ParamLimits

0xf6b9,	// (0x00044f9d) field_cale_ev2_pane_t

0x7b7f,	// (0x0003d463) main_postcard_pane_g5_ParamLimits

0x7b7f,	// (0x0003d463) main_postcard_pane_g5

0x7b8d,	// (0x0003d471) main_postcard_pane_g6_ParamLimits

0x7b8d,	// (0x0003d471) main_postcard_pane_g6

0x0eb2,	// (0x00036796) camera2_autofocus_pane_cp_ParamLimits

0x0eb2,	// (0x00036796) camera2_autofocus_pane_cp

0x0dad,	// (0x00036691) main_mup3_pane

0x87c7,	// (0x0003e0ab) main_mup3_pane_g1_ParamLimits

0x87c7,	// (0x0003e0ab) main_mup3_pane_g1

0x87e8,	// (0x0003e0cc) main_mup3_pane_g2_ParamLimits

0x87e8,	// (0x0003e0cc) main_mup3_pane_g2

0x8862,	// (0x0003e146) main_mup3_pane_g3_ParamLimits

0x8862,	// (0x0003e146) main_mup3_pane_g3

0x88a5,	// (0x0003e189) main_mup3_pane_g4_ParamLimits

0x88a5,	// (0x0003e189) main_mup3_pane_g4

0x88e8,	// (0x0003e1cc) main_mup3_pane_g5_ParamLimits

0x88e8,	// (0x0003e1cc) main_mup3_pane_g5

0x892b,	// (0x0003e20f) main_mup3_pane_g6_ParamLimits

0x892b,	// (0x0003e20f) main_mup3_pane_g6

0x0ece,	// (0x000367b2) main_mup3_pane_g7_ParamLimits

0x0ece,	// (0x000367b2) main_mup3_pane_g7

0x0007,

0xf6c9,	// (0x00044fad) main_mup3_pane_g_ParamLimits

0xf6c9,	// (0x00044fad) main_mup3_pane_g

0x89a1,	// (0x0003e285) main_mup3_pane_t1_ParamLimits

0x89a1,	// (0x0003e285) main_mup3_pane_t1

0x8a10,	// (0x0003e2f4) main_mup3_pane_t2_ParamLimits

0x8a10,	// (0x0003e2f4) main_mup3_pane_t2

0x8ad9,	// (0x0003e3bd) main_mup3_pane_t4_ParamLimits

0x8ad9,	// (0x0003e3bd) main_mup3_pane_t4

0x8b27,	// (0x0003e40b) main_mup3_pane_t5_ParamLimits

0x8b27,	// (0x0003e40b) main_mup3_pane_t5

0x8bd7,	// (0x0003e4bb) main_mup3_pane_t6_ParamLimits

0x8bd7,	// (0x0003e4bb) main_mup3_pane_t6

0x0005,

0xf6da,	// (0x00044fbe) main_mup3_pane_t_ParamLimits

0xf6da,	// (0x00044fbe) main_mup3_pane_t

0x8c83,	// (0x0003e567) mup3_progress_pane_ParamLimits

0x8c83,	// (0x0003e567) mup3_progress_pane

0x8cf7,	// (0x0003e5db) popup_mup3_control_window_ParamLimits

0x8cf7,	// (0x0003e5db) popup_mup3_control_window

0x356d,	// (0x00038e51) popup_mup3_text_window

0x8d10,	// (0x0003e5f4) mup3_progress_pane_t1

0x8d2f,	// (0x0003e613) mup3_progress_pane_t2

0x3575,	// (0x00038e59) mup3_progress_pane_t3

0x0002,

0xf6e7,	// (0x00044fcb) mup3_progress_pane_t

0x35b4,	// (0x00038e98) mup_progress_pane_cp03

0x07bf,	// (0x000360a3) bg_tb_trans_pane_cp04

0x8d4e,	// (0x0003e632) mup3_volume_pane

0x8d56,	// (0x0003e63a) popup_mup3_control_window_g1

0x8d5f,	// (0x0003e643) mup3_volume_pane_g1

0x8d68,	// (0x0003e64c) mup3_volume_pane_g2

0x8d71,	// (0x0003e655) mup3_volume_pane_g3

0x0002,

0xf6ee,	// (0x00044fd2) mup3_volume_pane_g

0x07bf,	// (0x000360a3) bg_tb_trans_pane_cp03

0x35c4,	// (0x00038ea8) popup_mup3_text_window_g1

0x35cc,	// (0x00038eb0) popup_mup3_text_window_t1

0x0fa4,	// (0x00036888) list_calc_item_pane_g1_ParamLimits

0x2fb3,	// (0x00038897) mup_volume_pane_cp_g1

0x871c,	// (0x0003e000) main_touch_calib_pane_t3

0x8732,	// (0x0003e016) main_touch_calib_pane_t4

0x8748,	// (0x0003e02c) main_touch_calib_pane_t5

0x55fd,	// (0x0003aee1) aid_cell_size_toolbar2

0x5605,	// (0x0003aee9) aid_popup3_width_pane

0x47cf,	// (0x0003a0b3) aid_zoom_text_msg_primary

0x60a1,	// (0x0003b985) vorec_t7

0x0f68,	// (0x0003684c) bg_calc_paper_pane_g1_ParamLimits

0x0f80,	// (0x00036864) bg_calc_paper_pane_g2_ParamLimits

0x0f74,	// (0x00036858) bg_calc_paper_pane_g3_ParamLimits

0x0f98,	// (0x0003687c) bg_calc_paper_pane_g4_ParamLimits

0x0f8c,	// (0x00036870) bg_calc_paper_pane_g5_ParamLimits

0x59e5,	// (0x0003b2c9) bg_calc_paper_pane_g6_ParamLimits

0x59f6,	// (0x0003b2da) bg_calc_paper_pane_g7_ParamLimits

0x5a07,	// (0x0003b2eb) bg_calc_paper_pane_g8_ParamLimits

0xf0ce,	// (0x000449b2) bg_calc_paper_pane_g_ParamLimits

0x5a18,	// (0x0003b2fc) calc_bg_paper_pane_g9_ParamLimits

0x0eb2,	// (0x00036796) image_qvga_pane_ParamLimits

0x0eb2,	// (0x00036796) image_qvga_pane

0x0e45,	// (0x00036729) bg_popup_sub_pane_cp04_ParamLimits

0x1d2f,	// (0x00037613) popup_mup_playback_window_g1_ParamLimits

0x1d3b,	// (0x0003761f) popup_mup_playback_window_t1_ParamLimits

0x1d50,	// (0x00037634) popup_mup_playback_window_t2_ParamLimits

0xf42c,	// (0x00044d10) popup_mup_playback_window_t_ParamLimits

0x0ec0,	// (0x000367a4) main_mup2_pane_g3_ParamLimits

0x0ec0,	// (0x000367a4) main_mup2_pane_g3

0x6360,	// (0x0003bc44) popup_toolbar_window_cp04

0x20d4,	// (0x000379b8) popup_call2_audio_second_window_g3_ParamLimits

0x20d4,	// (0x000379b8) popup_call2_audio_second_window_g3

0x24ec,	// (0x00037dd0) popup_call2_audio_first_window_g4_ParamLimits

0x24ec,	// (0x00037dd0) popup_call2_audio_first_window_g4

0x2b13,	// (0x000383f7) popup_call2_audio_in_window_g4_ParamLimits

0x2b13,	// (0x000383f7) popup_call2_audio_in_window_g4

0x7c5c,	// (0x0003d540) aid_area_sk_bg_cut_ParamLimits

0x7c5c,	// (0x0003d540) aid_area_sk_bg_cut

0x1d65,	// (0x00037649) aid_area_sk_bg_cut_2_ParamLimits

0x1d65,	// (0x00037649) aid_area_sk_bg_cut_2

0x07bf,	// (0x000360a3) aid_placing_details_win

0x07bf,	// (0x000360a3) aid_placing_details_win_2

0x0ec0,	// (0x000367a4) camera2_autofocus_pane_g1_ParamLimits

0x57b6,	// (0x0003b09a) popup_fixed_preview_cale_window_ParamLimits

0x57b6,	// (0x0003b09a) popup_fixed_preview_cale_window

0x1b3f,	// (0x00037423) navi_slider_pane_g3

0x1b36,	// (0x0003741a) navi_slider_pane_g4

0x1b2d,	// (0x00037411) navi_slider_pane_g5

0x1b3f,	// (0x00037423) navi_slider_pane_g6

0x77f4,	// (0x0003d0d8) navi_slider_pane_g7

0x1c6d,	// (0x00037551) mup_scale_pane_g3

0x1c76,	// (0x0003755a) mup_scale_pane_g4

0x1c7f,	// (0x00037563) mup_scale_pane_g5

0x79f3,	// (0x0003d2d7) mup_scale_pane_g6

0x79fc,	// (0x0003d2e0) mup_scale_pane_g7

0x0efe,	// (0x000367e2) cams2_slider_pane_g3

0x0efe,	// (0x000367e2) cams2_slider_pane_g4

0x0efe,	// (0x000367e2) cams2_slider_pane_g5

0x0efe,	// (0x000367e2) cams2_slider_pane_g6

0x0efe,	// (0x000367e2) cams2_slider_pane_g7

0x0efe,	// (0x000367e2) camera2_autofocus_pane_cp_g1

0x2e23,	// (0x00038707) bg_popup_preview_window_pane_cp02_ParamLimits

0x2e23,	// (0x00038707) bg_popup_preview_window_pane_cp02

0x35da,	// (0x00038ebe) list_fp_cale_pane_ParamLimits

0x35da,	// (0x00038ebe) list_fp_cale_pane

0x35e6,	// (0x00038eca) popup_fixed_preview_cale_window_t1_ParamLimits

0x35e6,	// (0x00038eca) popup_fixed_preview_cale_window_t1

0x8d7a,	// (0x0003e65e) popup_fixed_preview_cale_window_t2_ParamLimits

0x8d7a,	// (0x0003e65e) popup_fixed_preview_cale_window_t2

0x8d8f,	// (0x0003e673) popup_fixed_preview_cale_window_t3_ParamLimits

0x8d8f,	// (0x0003e673) popup_fixed_preview_cale_window_t3

0x0002,

0xf6f5,	// (0x00044fd9) popup_fixed_preview_cale_window_t_ParamLimits

0xf6f5,	// (0x00044fd9) popup_fixed_preview_cale_window_t

0x8da4,	// (0x0003e688) list_single_fp_cale_pane_ParamLimits

0x8da4,	// (0x0003e688) list_single_fp_cale_pane

0x3604,	// (0x00038ee8) list_single_fp_cale_pane_g1_ParamLimits

0x3604,	// (0x00038ee8) list_single_fp_cale_pane_g1

0x3610,	// (0x00038ef4) list_single_fp_cale_pane_g2_ParamLimits

0x3610,	// (0x00038ef4) list_single_fp_cale_pane_g2

0x0002,

0xf6fc,	// (0x00044fe0) list_single_fp_cale_pane_g_ParamLimits

0xf6fc,	// (0x00044fe0) list_single_fp_cale_pane_g

0x3629,	// (0x00038f0d) list_single_fp_cale_pane_t1_ParamLimits

0x3629,	// (0x00038f0d) list_single_fp_cale_pane_t1

0x363b,	// (0x00038f1f) list_single_fp_cale_pane_t2_ParamLimits

0x363b,	// (0x00038f1f) list_single_fp_cale_pane_t2

0x0001,

0xf703,	// (0x00044fe7) list_single_fp_cale_pane_t_ParamLimits

0xf703,	// (0x00044fe7) list_single_fp_cale_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0x07bf,	// (0x000360a3) main_dialer_pane

0x07bf,	// (0x000360a3) aid_cell_size_keypad

0x07bf,	// (0x000360a3) dialer_ne_pane

0x07bf,	// (0x000360a3) grid_dialer_command_1_pane

0x07bf,	// (0x000360a3) grid_dialer_command_2_pane

0x07bf,	// (0x000360a3) grid_dialer_keypad_pane

0x2ffc,	// (0x000388e0) bg_popup_call_pane_cp06_ParamLimits

0x2ffc,	// (0x000388e0) bg_popup_call_pane_cp06

0x2ffc,	// (0x000388e0) dialer_ne_clear_pane_ParamLimits

0x2ffc,	// (0x000388e0) dialer_ne_clear_pane

0x0efe,	// (0x000367e2) dialer_ne_pane_g1

0x0f1c,	// (0x00036800) dialer_ne_pane_t1_ParamLimits

0x0f1c,	// (0x00036800) dialer_ne_pane_t1

0x387c,	// (0x00039160) dialer_ne_pane_t2_ParamLimits

0x387c,	// (0x00039160) dialer_ne_pane_t2

0x8db7,	// (0x0003e69b) dialer_ne_pane_t3_ParamLimits

0x8db7,	// (0x0003e69b) dialer_ne_pane_t3

0x0002,

0xf708,	// (0x00044fec) dialer_ne_pane_t_ParamLimits

0xf708,	// (0x00044fec) dialer_ne_pane_t

0x8db7,	// (0x0003e69b) dialer_ne_pane_t3_copy1_ParamLimits

0x8db7,	// (0x0003e69b) dialer_ne_pane_t3_copy1

0x366e,	// (0x00038f52) cell_dialer_keypad_pane_ParamLimits

0x366e,	// (0x00038f52) cell_dialer_keypad_pane

0x0dad,	// (0x00036691) cell_dialer_command_1_pane_ParamLimits

0x0dad,	// (0x00036691) cell_dialer_command_1_pane

0x3685,	// (0x00038f69) cell_dialer_command_2_pane_ParamLimits

0x3685,	// (0x00038f69) cell_dialer_command_2_pane

0x0dad,	// (0x00036691) bg_button_pane_cp02_ParamLimits

0x0dad,	// (0x00036691) bg_button_pane_cp02

0x0ec0,	// (0x000367a4) cell_dialer_keypad_pane_g1_ParamLimits

0x0ec0,	// (0x000367a4) cell_dialer_keypad_pane_g1

0x0dad,	// (0x00036691) bg_button_pane_cp03_ParamLimits

0x0dad,	// (0x00036691) bg_button_pane_cp03

0x0ec0,	// (0x000367a4) cell_dialer_command_1_pane_g1_ParamLimits

0x0ec0,	// (0x000367a4) cell_dialer_command_1_pane_g1

0x07bf,	// (0x000360a3) bg_button_pane_cp04

0x0efe,	// (0x000367e2) cell_dialer_command_2_pane_g1

0x07bf,	// (0x000360a3) bg_button_pane_cp06

0x0efe,	// (0x000367e2) dialer_ne_clear_pane_g1

0x1a00,	// (0x000372e4) navi_pane_g2

0x1a2e,	// (0x00037312) navi_pane_g3

0x0002,

0xf334,	// (0x00044c18) navi_pane_g

0x1abd,	// (0x000373a1) navi_pane_mv_g2

0x1ae4,	// (0x000373c8) navi_pane_mv_g5

0x77bf,	// (0x0003d0a3) navi_pane_mv_t1

0x0f5c,	// (0x00036840) main_clock2_pane

0x0eb2,	// (0x00036796) main_clock2_list_pane_ParamLimits

0x0eb2,	// (0x00036796) main_clock2_list_pane

0x8e2d,	// (0x0003e711) main_clock2_pane_t1_ParamLimits

0x8e2d,	// (0x0003e711) main_clock2_pane_t1

0x8e5b,	// (0x0003e73f) main_clock2_pane_t2_ParamLimits

0x8e5b,	// (0x0003e73f) main_clock2_pane_t2

0x0004,

0xf714,	// (0x00044ff8) main_clock2_pane_t_ParamLimits

0xf714,	// (0x00044ff8) main_clock2_pane_t

0x8ec0,	// (0x0003e7a4) popup_clock_analogue_window_cp03_ParamLimits

0x8ec0,	// (0x0003e7a4) popup_clock_analogue_window_cp03

0x8ede,	// (0x0003e7c2) popup_clock_digital_window_cp02_ParamLimits

0x8ede,	// (0x0003e7c2) popup_clock_digital_window_cp02

0x8f53,	// (0x0003e837) main_clock2_list_single_pane_ParamLimits

0x8f53,	// (0x0003e837) main_clock2_list_single_pane

0x1125,	// (0x00036a09) list_highlight_pane_cp05

0x36c8,	// (0x00038fac) main_clock2_list_single_pane_t1

0x6360,	// (0x0003bc44) popup_toolbar_window_cp04_ParamLimits

0x0ece,	// (0x000367b2) camera2_autofocus_pane_g2_ParamLimits

0x0ece,	// (0x000367b2) camera2_autofocus_pane_g2

0x0ece,	// (0x000367b2) camera2_autofocus_pane_g3_ParamLimits

0x0ece,	// (0x000367b2) camera2_autofocus_pane_g3

0x0ece,	// (0x000367b2) camera2_autofocus_pane_g4_ParamLimits

0x0ece,	// (0x000367b2) camera2_autofocus_pane_g4

0x0ece,	// (0x000367b2) camera2_autofocus_pane_g5_ParamLimits

0x0ece,	// (0x000367b2) camera2_autofocus_pane_g5

0x0004,

0xf658,	// (0x00044f3c) camera2_autofocus_pane_g_ParamLimits

0xf658,	// (0x00044f3c) camera2_autofocus_pane_g

0x8788,	// (0x0003e06c) camera2_autofocus_pane_cp_g2

0x8790,	// (0x0003e074) camera2_autofocus_pane_cp_g3

0x8798,	// (0x0003e07c) camera2_autofocus_pane_cp_g4

0x87a0,	// (0x0003e084) camera2_autofocus_pane_cp_g5

0x0004,

0xf6be,	// (0x00044fa2) camera2_autofocus_pane_cp_g

0x07bf,	// (0x000360a3) popup_dialer_spcha_window

0x07bf,	// (0x000360a3) bg_popup_sub_pane_cp07

0x07bf,	// (0x000360a3) list_spcha_pane

0x36d6,	// (0x00038fba) list_single_spcha_pane_ParamLimits

0x36d6,	// (0x00038fba) list_single_spcha_pane

0x07bf,	// (0x000360a3) list_highlight_pane_cp06

0x1660,	// (0x00036f44) list_single_spcha_pane_t1

0x28bd,	// (0x000381a1) popup_call2_audio_out_window_g4_ParamLimits

0x28bd,	// (0x000381a1) popup_call2_audio_out_window_g4

0x07bf,	// (0x000360a3) main_imed2_pane

0x8266,	// (0x0003db4a) popup_imed_adjust2_window

0x8279,	// (0x0003db5d) popup_imed_trans_window_ParamLimits

0x8279,	// (0x0003db5d) popup_imed_trans_window

0x3096,	// (0x0003897a) popup_blid_sat_info2_window_t1

0x30a4,	// (0x00038988) popup_blid_sat_info2_window_t2

0x000a,

0xf5ed,	// (0x00044ed1) popup_blid_sat_info2_window_t

0x9008,	// (0x0003e8ec) aid_size_cell_colour_35

0x9022,	// (0x0003e906) aid_size_cell_colour_112

0x9039,	// (0x0003e91d) aid_size_cell_effect

0x0dad,	// (0x00036691) bg_tb_trans_pane_cp02

0x162d,	// (0x00036f11) heading_imed_pane

0x9053,	// (0x0003e937) listscroll_imed_pane

0x36e8,	// (0x00038fcc) heading_imed_pane_g1

0x36f0,	// (0x00038fd4) heading_imed_pane_t1

0x36fe,	// (0x00038fe2) grid_imed_colour_35_pane_ParamLimits

0x36fe,	// (0x00038fe2) grid_imed_colour_35_pane

0x905f,	// (0x0003e943) grid_imed_effect_pane

0x3716,	// (0x00038ffa) list_imed_aspect_pane

0x906f,	// (0x0003e953) scroll_pane_cp027_ParamLimits

0x906f,	// (0x0003e953) scroll_pane_cp027

0x907b,	// (0x0003e95f) cell_imed_effect_pane_ParamLimits

0x907b,	// (0x0003e95f) cell_imed_effect_pane

0x371e,	// (0x00039002) cell_imed_colour_pane_ParamLimits

0x371e,	// (0x00039002) cell_imed_colour_pane

0x3760,	// (0x00039044) cell_imed_colour_pane_g1_ParamLimits

0x3760,	// (0x00039044) cell_imed_colour_pane_g1

0x3771,	// (0x00039055) hgihlgiht_grid_pane_cp016_ParamLimits

0x3771,	// (0x00039055) hgihlgiht_grid_pane_cp016

0x9093,	// (0x0003e977) cell_imed_effect_pane_g1

0x909b,	// (0x0003e97f) grid_highlight_pane_cp017

0x3782,	// (0x00039066) list_imed_single_pane_ParamLimits

0x3782,	// (0x00039066) list_imed_single_pane

0x07bf,	// (0x000360a3) list_highlight_pane_cp07

0x3797,	// (0x0003907b) list_imed_aspect_pane_comp1_t1

0x1bfd,	// (0x000374e1) bg_tb_trans_pane_cp05

0x37b9,	// (0x0003909d) popup_imed_adjust2_window_g1

0x37e0,	// (0x000390c4) popup_imed_adjust2_window_t1

0x37f8,	// (0x000390dc) slider_imed_adjust_pane

0x380c,	// (0x000390f0) slider_imed_adjust_pane_g1

0x381c,	// (0x00039100) slider_imed_adjust_pane_g2

0x382c,	// (0x00039110) slider_imed_adjust_pane_g3

0x383d,	// (0x00039121) slider_imed_adjust_pane_g4

0x0003,

0xf731,	// (0x00045015) slider_imed_adjust_pane_g

0x90a4,	// (0x0003e988) aid_size_cell_clipart2

0x90b0,	// (0x0003e994) grid_imed_clipart_pane

0x1c90,	// (0x00037574) scroll_pane_cp031

0x90ba,	// (0x0003e99e) cell_imed_clipart_pane_ParamLimits

0x90ba,	// (0x0003e99e) cell_imed_clipart_pane

0x90dd,	// (0x0003e9c1) cell_imed_clipart_pane_g1

0x07bf,	// (0x000360a3) grid_highlight_pane_cp014

0x8e0f,	// (0x0003e6f3) main_clock2_pane_g1_ParamLimits

0x8e0f,	// (0x0003e6f3) main_clock2_pane_g1

0x8efa,	// (0x0003e7de) aid_call2_pane_cp10

0x8f0c,	// (0x0003e7f0) aid_call_pane_cp10

0x195f,	// (0x00037243) popup_clock_analogue_window_cp10_g1

0x195f,	// (0x00037243) popup_clock_analogue_window_cp10_g2

0x8f1e,	// (0x0003e802) popup_clock_analogue_window_cp10_g3

0x8f1e,	// (0x0003e802) popup_clock_analogue_window_cp10_g4

0x195f,	// (0x00037243) popup_clock_analogue_window_cp10_g5

0x0004,

0xf71f,	// (0x00045003) popup_clock_analogue_window_cp10_g

0x8f34,	// (0x0003e818) popup_clock_analogue_window_cp10_t1

0x8f65,	// (0x0003e849) clock_digital_number_pane_cp10_ParamLimits

0x8f65,	// (0x0003e849) clock_digital_number_pane_cp10

0x8f7f,	// (0x0003e863) clock_digital_number_pane_cp11_ParamLimits

0x8f7f,	// (0x0003e863) clock_digital_number_pane_cp11

0x8f99,	// (0x0003e87d) clock_digital_number_pane_cp12_ParamLimits

0x8f99,	// (0x0003e87d) clock_digital_number_pane_cp12

0x8fb3,	// (0x0003e897) clock_digital_number_pane_cp13_ParamLimits

0x8fb3,	// (0x0003e897) clock_digital_number_pane_cp13

0x8fcd,	// (0x0003e8b1) clock_digital_separator_pane_cp10_ParamLimits

0x8fcd,	// (0x0003e8b1) clock_digital_separator_pane_cp10

0x8fe7,	// (0x0003e8cb) popup_clock_digital_window_cp02_t1_ParamLimits

0x8fe7,	// (0x0003e8cb) popup_clock_digital_window_cp02_t1

0x0e3d,	// (0x00036721) clock_digital_number_pane_cp10_g1

0x0e3d,	// (0x00036721) clock_digital_number_pane_cp10_g2

0x0001,

0xf73a,	// (0x0004501e) clock_digital_number_pane_cp10_g

0x0e3d,	// (0x00036721) clock_digital_separator_pane_cp10_g1

0x0e3d,	// (0x00036721) clock_digital_separator_pane_g2_cp10

0x1aec,	// (0x000373d0) navi_pane_vded_g4

0x1af5,	// (0x000373d9) navi_pane_vded_g5

0x1afe,	// (0x000373e2) navi_pane_vded_t1

0x07bf,	// (0x000360a3) main_vded_pane

0x90e6,	// (0x0003e9ca) main_vded_pane_g1

0x90f2,	// (0x0003e9d6) main_vded_pane_g2

0x90fc,	// (0x0003e9e0) main_vded_pane_g3

0x0002,

0xf73f,	// (0x00045023) main_vded_pane_g

0x9106,	// (0x0003e9ea) main_vded_pane_t1

0x9114,	// (0x0003e9f8) main_vded_pane_t2

0x0001,

0xf746,	// (0x0004502a) main_vded_pane_t

0x9122,	// (0x0003ea06) vded_slider_pane

0x912c,	// (0x0003ea10) vded_video_pane

0x384e,	// (0x00039132) vded_video_pane_g1

0x9136,	// (0x0003ea1a) vded_video_pane_g2

0x0efe,	// (0x000367e2) vded_video_pane_g3

0x0002,

0xf74b,	// (0x0004502f) vded_video_pane_g

0x3858,	// (0x0003913c) vded_slider_pane_g1

0x2fb3,	// (0x00038897) vded_slider_pane_g2

0x3861,	// (0x00039145) vded_slider_pane_g3

0x386a,	// (0x0003914e) vded_slider_pane_g4

0x3873,	// (0x00039157) vded_slider_pane_g5

0x0004,

0xf752,	// (0x00045036) vded_slider_pane_g

0x8ce9,	// (0x0003e5cd) mup3_rocker_pane_ParamLimits

0x8ce9,	// (0x0003e5cd) mup3_rocker_pane

0x913f,	// (0x0003ea23) mup3_control_keys_pane_g1

0x9147,	// (0x0003ea2b) mup3_control_keys_pane_g2

0x914f,	// (0x0003ea33) mup3_control_keys_pane_g3

0x9157,	// (0x0003ea3b) mup3_control_keys_pane_g4

0x0003,

0xf75d,	// (0x00045041) mup3_control_keys_pane_g

0x57de,	// (0x0003b0c2) popup_toolbar2_fixed_window_cp01_ParamLimits

0x57de,	// (0x0003b0c2) popup_toolbar2_fixed_window_cp01

0x8d03,	// (0x0003e5e7) popup_toolbar2_fixed_window_cp02_ParamLimits

0x8d03,	// (0x0003e5e7) popup_toolbar2_fixed_window_cp02

0x2246,	// (0x00037b2a) popup_call2_audio_second_window_t4_ParamLimits

0x2246,	// (0x00037b2a) popup_call2_audio_second_window_t4

0x2782,	// (0x00038066) popup_call2_audio_first_window_t6_ParamLimits

0x2782,	// (0x00038066) popup_call2_audio_first_window_t6

0x29c0,	// (0x000382a4) popup_call2_audio_out_window_t6_ParamLimits

0x29c0,	// (0x000382a4) popup_call2_audio_out_window_t6

0x07bf,	// (0x000360a3) main_vitu_pane

0x0eb2,	// (0x00036796) aid_size_cell_itu_ParamLimits

0x0eb2,	// (0x00036796) aid_size_cell_itu

0x0eb2,	// (0x00036796) bg_popup_window_pane_cp08_ParamLimits

0x0eb2,	// (0x00036796) bg_popup_window_pane_cp08

0x0eb2,	// (0x00036796) field_vitu_entry_pane_ParamLimits

0x0eb2,	// (0x00036796) field_vitu_entry_pane

0x0eb2,	// (0x00036796) grid_vitu_function_pane_ParamLimits

0x0eb2,	// (0x00036796) grid_vitu_function_pane

0x0eb2,	// (0x00036796) grid_vitu_itu_pane_ParamLimits

0x0eb2,	// (0x00036796) grid_vitu_itu_pane

0x0eb2,	// (0x00036796) cell_vitu_itu_pane_ParamLimits

0x0eb2,	// (0x00036796) cell_vitu_itu_pane

0x0eb2,	// (0x00036796) cell_vitu_function_pane_ParamLimits

0x0eb2,	// (0x00036796) cell_vitu_function_pane

0x0dad,	// (0x00036691) bg_popup_sub_pane_cp08_ParamLimits

0x0dad,	// (0x00036691) bg_popup_sub_pane_cp08

0x0f08,	// (0x000367ec) field_vitu_entry_pane_t1_ParamLimits

0x0f08,	// (0x000367ec) field_vitu_entry_pane_t1

0x387c,	// (0x00039160) field_vitu_entry_pane_t2_ParamLimits

0x387c,	// (0x00039160) field_vitu_entry_pane_t2

0x0001,

0xf766,	// (0x0004504a) field_vitu_entry_pane_t_ParamLimits

0xf766,	// (0x0004504a) field_vitu_entry_pane_t

0x2ffc,	// (0x000388e0) bg_button_pane_cp05_ParamLimits

0x2ffc,	// (0x000388e0) bg_button_pane_cp05

0x3899,	// (0x0003917d) cell_vitu_itu_pane_g1

0x1be9,	// (0x000374cd) cell_vitu_itu_pane_t1_ParamLimits

0x1be9,	// (0x000374cd) cell_vitu_itu_pane_t1

0x1be9,	// (0x000374cd) cell_vitu_itu_pane_t2_ParamLimits

0x1be9,	// (0x000374cd) cell_vitu_itu_pane_t2

0x0002,

0xf76b,	// (0x0004504f) cell_vitu_itu_pane_t_ParamLimits

0xf76b,	// (0x0004504f) cell_vitu_itu_pane_t

0x07bf,	// (0x000360a3) bg_button_pane_cp07

0x0efe,	// (0x000367e2) cell_vitu_function_pane_g1

0x594b,	// (0x0003b22f) main_calc_pane_g1

0x5639,	// (0x0003af1d) aid_visual_content_pane

0x07bf,	// (0x000360a3) main_vradio_pane

0x0ece,	// (0x000367b2) main_vradio_pane_g1_ParamLimits

0x0ece,	// (0x000367b2) main_vradio_pane_g1

0x0ece,	// (0x000367b2) main_vradio_pane_g2_ParamLimits

0x0ece,	// (0x000367b2) main_vradio_pane_g2

0x0001,

0xf502,	// (0x00044de6) main_vradio_pane_g_ParamLimits

0xf502,	// (0x00044de6) main_vradio_pane_g

0x0f1c,	// (0x00036800) main_vradio_pane_t1_ParamLimits

0x0f1c,	// (0x00036800) main_vradio_pane_t1

0x0f1c,	// (0x00036800) main_vradio_pane_t2_ParamLimits

0x0f1c,	// (0x00036800) main_vradio_pane_t2

0x0f1c,	// (0x00036800) main_vradio_pane_t3_ParamLimits

0x0f1c,	// (0x00036800) main_vradio_pane_t3

0x0002,

0xf772,	// (0x00045056) main_vradio_pane_t_ParamLimits

0xf772,	// (0x00045056) main_vradio_pane_t

0x0eb2,	// (0x00036796) vradio_rocker_control_pane_ParamLimits

0x0eb2,	// (0x00036796) vradio_rocker_control_pane

0x0eb2,	// (0x00036796) vradio_station_info_pane_ParamLimits

0x0eb2,	// (0x00036796) vradio_station_info_pane

0x0dad,	// (0x00036691) vradio_frequency_info_pane_ParamLimits

0x0dad,	// (0x00036691) vradio_frequency_info_pane

0x0efe,	// (0x000367e2) vradio_station_info_pane_g1

0x1be9,	// (0x000374cd) vradio_station_info_pane_t1_ParamLimits

0x1be9,	// (0x000374cd) vradio_station_info_pane_t1

0x0f1c,	// (0x00036800) vradio_station_info_pane_t2_ParamLimits

0x0f1c,	// (0x00036800) vradio_station_info_pane_t2

0x0001,

0xf779,	// (0x0004505d) vradio_station_info_pane_t_ParamLimits

0xf779,	// (0x0004505d) vradio_station_info_pane_t

0x07bf,	// (0x000360a3) vradio_tuning_pane

0x9167,	// (0x0003ea4b) vradio_rocker_control_pane_g1

0x38b5,	// (0x00039199) vradio_rocker_control_pane_g2

0x916f,	// (0x0003ea53) vradio_rocker_control_pane_g3

0x9177,	// (0x0003ea5b) vradio_rocker_control_pane_g4

0x917f,	// (0x0003ea63) vradio_rocker_control_pane_g5

0x0004,

0xf77e,	// (0x00045062) vradio_rocker_control_pane_g

0x0efe,	// (0x000367e2) vradio_frequency_info_pane_g1

0x0f08,	// (0x000367ec) vradio_frequency_info_pane_t1_ParamLimits

0x0f08,	// (0x000367ec) vradio_frequency_info_pane_t1

0x9187,	// (0x0003ea6b) vradio_tuning_pane_g1

0x9194,	// (0x0003ea78) vradio_tuning_pane_t1

0x5682,	// (0x0003af66) area_side_right_pane_ParamLimits

0x5682,	// (0x0003af66) area_side_right_pane

0x2dea,	// (0x000386ce) status_small_pane_g1

0x2df2,	// (0x000386d6) status_small_pane_g2

0x2dfb,	// (0x000386df) status_small_pane_g3

0x2e04,	// (0x000386e8) status_small_pane_g4

0x0003,

0xf54f,	// (0x00044e33) status_small_pane_g

0x2e0d,	// (0x000386f1) status_small_pane_t1

0x07bf,	// (0x000360a3) main_video3_pane

0x07bf,	// (0x000360a3) cams_zoom_vslider_pane

0x38bd,	// (0x000391a1) image3_wide_pane_ParamLimits

0x38bd,	// (0x000391a1) image3_wide_pane

0x07bf,	// (0x000360a3) image3_wide_small_pane

0x38d7,	// (0x000391bb) main_video3_pane_g1_ParamLimits

0x38d7,	// (0x000391bb) main_video3_pane_g1

0x38d7,	// (0x000391bb) main_video3_pane_g2_ParamLimits

0x38d7,	// (0x000391bb) main_video3_pane_g2

0x0001,

0xf789,	// (0x0004506d) main_video3_pane_g_ParamLimits

0xf789,	// (0x0004506d) main_video3_pane_g

0x38f5,	// (0x000391d9) main_video3_pane_t1_ParamLimits

0x38f5,	// (0x000391d9) main_video3_pane_t1

0x38f5,	// (0x000391d9) main_video3_pane_t2_ParamLimits

0x38f5,	// (0x000391d9) main_video3_pane_t2

0x38f5,	// (0x000391d9) main_video3_pane_t3_ParamLimits

0x38f5,	// (0x000391d9) main_video3_pane_t3

0x0002,

0xf78e,	// (0x00045072) main_video3_pane_t_ParamLimits

0xf78e,	// (0x00045072) main_video3_pane_t

0x0efe,	// (0x000367e2) cams_zoom_vslider_pane_g1

0x0efe,	// (0x000367e2) cams_zoom_vslider_pane_g2

0x0001,

0xf0af,	// (0x00044993) cams_zoom_vslider_pane_g

0x07bf,	// (0x000360a3) small_slider_vertical_pane

0x0efe,	// (0x000367e2) small_slider_vertical_pane_g1

0x0efe,	// (0x000367e2) small_slider_vertical_pane_g2

0x391c,	// (0x00039200) small_slider_vertical_pane_g3

0x0002,

0xf795,	// (0x00045079) small_slider_vertical_pane_g

0x07bf,	// (0x000360a3) main_hwr_training_pane

0x3925,	// (0x00039209) hwr_training_instruct_pane_ParamLimits

0x3925,	// (0x00039209) hwr_training_instruct_pane

0x91a3,	// (0x0003ea87) hwr_training_navi_pane_ParamLimits

0x91a3,	// (0x0003ea87) hwr_training_navi_pane

0x91bd,	// (0x0003eaa1) hwr_training_write_pane_ParamLimits

0x91bd,	// (0x0003eaa1) hwr_training_write_pane

0x07bf,	// (0x000360a3) bg_frame_shadow_pane

0x395c,	// (0x00039240) hwr_training_write_pane_g1

0x3964,	// (0x00039248) hwr_training_write_pane_g2

0x396c,	// (0x00039250) hwr_training_write_pane_g3

0x3974,	// (0x00039258) hwr_training_write_pane_g4

0x397c,	// (0x00039260) hwr_training_write_pane_g5

0x3984,	// (0x00039268) hwr_training_write_pane_g6

0x398c,	// (0x00039270) hwr_training_write_pane_g7

0x0006,

0xf79c,	// (0x00045080) hwr_training_write_pane_g

0x91f5,	// (0x0003ead9) hwr_training_navi_pane_g1_ParamLimits

0x91f5,	// (0x0003ead9) hwr_training_navi_pane_g1

0x9207,	// (0x0003eaeb) hwr_training_navi_pane_g2_ParamLimits

0x9207,	// (0x0003eaeb) hwr_training_navi_pane_g2

0x9219,	// (0x0003eafd) hwr_training_navi_pane_g3_ParamLimits

0x9219,	// (0x0003eafd) hwr_training_navi_pane_g3

0x9229,	// (0x0003eb0d) hwr_training_navi_pane_g4_ParamLimits

0x9229,	// (0x0003eb0d) hwr_training_navi_pane_g4

0x0004,

0xf7ab,	// (0x0004508f) hwr_training_navi_pane_g_ParamLimits

0xf7ab,	// (0x0004508f) hwr_training_navi_pane_g

0x9243,	// (0x0003eb27) hwr_training_navi_pane_t1

0x9251,	// (0x0003eb35) list_single_hwr_training_instruct_pane_ParamLimits

0x9251,	// (0x0003eb35) list_single_hwr_training_instruct_pane

0x3994,	// (0x00039278) list_single_hwr_training_instruct_pane_t1

0x3197,	// (0x00038a7b) bg_frame_shadow_pane_g1

0x39a3,	// (0x00039287) bg_frame_shadow_pane_g2

0x39ab,	// (0x0003928f) bg_frame_shadow_pane_g3

0x39b3,	// (0x00039297) bg_frame_shadow_pane_g4

0x39bb,	// (0x0003929f) bg_frame_shadow_pane_g5

0x39c3,	// (0x000392a7) bg_frame_shadow_pane_g6

0x39cb,	// (0x000392af) bg_frame_shadow_pane_g7

0x1014,	// (0x000368f8) bg_frame_shadow_pane_g8

0x0007,

0xf7b6,	// (0x0004509a) bg_frame_shadow_pane_g

0x07bf,	// (0x000360a3) main_video_tele_dialer_pane

0x927a,	// (0x0003eb5e) aid_size_cell_video_keypad_ParamLimits

0x927a,	// (0x0003eb5e) aid_size_cell_video_keypad

0x928a,	// (0x0003eb6e) grid_video_dialer_keypad_pane_ParamLimits

0x928a,	// (0x0003eb6e) grid_video_dialer_keypad_pane

0x92be,	// (0x0003eba2) video_down_pane_cp_ParamLimits

0x92be,	// (0x0003eba2) video_down_pane_cp

0x92e8,	// (0x0003ebcc) cell_video_dialer_keypad_pane_ParamLimits

0x92e8,	// (0x0003ebcc) cell_video_dialer_keypad_pane

0x39d3,	// (0x000392b7) bg_button_pane_cp08_ParamLimits

0x39d3,	// (0x000392b7) bg_button_pane_cp08

0x92fd,	// (0x0003ebe1) cell_video_dialer_keypad_pane_g1_ParamLimits

0x92fd,	// (0x0003ebe1) cell_video_dialer_keypad_pane_g1

0x8cdd,	// (0x0003e5c1) mup3_rocker2_pane_ParamLimits

0x8cdd,	// (0x0003e5c1) mup3_rocker2_pane

0x0efe,	// (0x000367e2) mup3_rocker2_pane_g1

0x81da,	// (0x0003dabe) main_dialer2_pane

0x07bf,	// (0x000360a3) main_mp4_pane

0x9355,	// (0x0003ec39) main_mp4_pane_g1_ParamLimits

0x9355,	// (0x0003ec39) main_mp4_pane_g1

0x9377,	// (0x0003ec5b) main_mp4_pane_g2_ParamLimits

0x9377,	// (0x0003ec5b) main_mp4_pane_g2

0x9395,	// (0x0003ec79) main_mp4_pane_g3_ParamLimits

0x9395,	// (0x0003ec79) main_mp4_pane_g3

0x93ce,	// (0x0003ecb2) main_mp4_pane_g4_ParamLimits

0x93ce,	// (0x0003ecb2) main_mp4_pane_g4

0x93f6,	// (0x0003ecda) main_mp4_pane_g5_ParamLimits

0x93f6,	// (0x0003ecda) main_mp4_pane_g5

0x0007,

0xf7d6,	// (0x000450ba) main_mp4_pane_g_ParamLimits

0xf7d6,	// (0x000450ba) main_mp4_pane_g

0x945e,	// (0x0003ed42) main_mp4_pane_t1_ParamLimits

0x945e,	// (0x0003ed42) main_mp4_pane_t1

0x94c0,	// (0x0003eda4) main_mp4_pane_t2_ParamLimits

0x94c0,	// (0x0003eda4) main_mp4_pane_t2

0x9524,	// (0x0003ee08) main_mp4_pane_t3_ParamLimits

0x9524,	// (0x0003ee08) main_mp4_pane_t3

0x9582,	// (0x0003ee66) main_mp4_pane_t4_ParamLimits

0x9582,	// (0x0003ee66) main_mp4_pane_t4

0x0003,

0xf7e7,	// (0x000450cb) main_mp4_pane_t_ParamLimits

0xf7e7,	// (0x000450cb) main_mp4_pane_t

0x95e0,	// (0x0003eec4) mp4_progress_pane_ParamLimits

0x95e0,	// (0x0003eec4) mp4_progress_pane

0x9614,	// (0x0003eef8) mp4_rocker_pane_ParamLimits

0x9614,	// (0x0003eef8) mp4_rocker_pane

0xd3fd,	// (0x00042ce1) mp4_progress_pane_t1

0xd41f,	// (0x00042d03) mp4_progress_pane_t2

0x0001,

0xf7f0,	// (0x000450d4) mp4_progress_pane_t

0xd441,	// (0x00042d25) mup_progress_pane_cp04

0x0efe,	// (0x000367e2) mp4_rocker_pane_g1

0x0eb2,	// (0x00036796) aid_cell_size_keypad2_ParamLimits

0x0eb2,	// (0x00036796) aid_cell_size_keypad2

0x0eb2,	// (0x00036796) dialer2_ne_pane_ParamLimits

0x0eb2,	// (0x00036796) dialer2_ne_pane

0x0eb2,	// (0x00036796) grid_dialer2_keypad_pane_ParamLimits

0x0eb2,	// (0x00036796) grid_dialer2_keypad_pane

0x3592,	// (0x00038e76) bg_popup_call_pane_cp07_ParamLimits

0x3592,	// (0x00038e76) bg_popup_call_pane_cp07

0x9628,	// (0x0003ef0c) dialer2_ne_pane_t1_ParamLimits

0x9628,	// (0x0003ef0c) dialer2_ne_pane_t1

0x366e,	// (0x00038f52) cell_dialer2_keypad_pane_ParamLimits

0x366e,	// (0x00038f52) cell_dialer2_keypad_pane

0x2ffc,	// (0x000388e0) bg_button_pane_pane_cp04_ParamLimits

0x2ffc,	// (0x000388e0) bg_button_pane_pane_cp04

0x0ec0,	// (0x000367a4) cell_dialer2_keypad_pane_g1_ParamLimits

0x0ec0,	// (0x000367a4) cell_dialer2_keypad_pane_g1

0x6222,	// (0x0003bb06) aid_placing_vt_set_content_ParamLimits

0x6222,	// (0x0003bb06) aid_placing_vt_set_content

0x624e,	// (0x0003bb32) aid_placing_vt_set_title_ParamLimits

0x624e,	// (0x0003bb32) aid_placing_vt_set_title

0x07bf,	// (0x000360a3) main_image3_pane

0x9681,	// (0x0003ef65) area_side_right_pane_cp01_ParamLimits

0x9681,	// (0x0003ef65) area_side_right_pane_cp01

0x0edc,	// (0x000367c0) main_image3_pane_g1_ParamLimits

0x0edc,	// (0x000367c0) main_image3_pane_g1

0x96ae,	// (0x0003ef92) main_image3_pane_g2_ParamLimits

0x96ae,	// (0x0003ef92) main_image3_pane_g2

0x96c7,	// (0x0003efab) main_image3_pane_g3_ParamLimits

0x96c7,	// (0x0003efab) main_image3_pane_g3

0x96e0,	// (0x0003efc4) main_image3_pane_g4_ParamLimits

0x96e0,	// (0x0003efc4) main_image3_pane_g4

0x0003,

0xf7ff,	// (0x000450e3) main_image3_pane_g_ParamLimits

0xf7ff,	// (0x000450e3) main_image3_pane_g

0x96f9,	// (0x0003efdd) main_image3_pane_t1_ParamLimits

0x96f9,	// (0x0003efdd) main_image3_pane_t1

0x971e,	// (0x0003f002) main_image3_pane_t2_ParamLimits

0x971e,	// (0x0003f002) main_image3_pane_t2

0x973d,	// (0x0003f021) main_image3_pane_t3_ParamLimits

0x973d,	// (0x0003f021) main_image3_pane_t3

0x0003,

0xf808,	// (0x000450ec) main_image3_pane_t_ParamLimits

0xf808,	// (0x000450ec) main_image3_pane_t

0x0eb2,	// (0x00036796) grid_sctrl_middle_pane_cp01_ParamLimits

0x0eb2,	// (0x00036796) grid_sctrl_middle_pane_cp01

0x979e,	// (0x0003f082) cell_sctrl_middle_pane_cp01_ParamLimits

0x979e,	// (0x0003f082) cell_sctrl_middle_pane_cp01

0x97af,	// (0x0003f093) cell_sctrl_middle_pane_cp01_g1_ParamLimits

0x97af,	// (0x0003f093) cell_sctrl_middle_pane_cp01_g1

0x07bf,	// (0x000360a3) main_call4_pane

0x97bc,	// (0x0003f0a0) aid_size_button_call4_ParamLimits

0x97bc,	// (0x0003f0a0) aid_size_button_call4

0x97f2,	// (0x0003f0d6) call4_windows_pane_ParamLimits

0x97f2,	// (0x0003f0d6) call4_windows_pane

0x9807,	// (0x0003f0eb) grid_call4_button_pane_ParamLimits

0x9807,	// (0x0003f0eb) grid_call4_button_pane

0x9835,	// (0x0003f119) call4_windows_conf_pane

0x984a,	// (0x0003f12e) popup_call4_audio_first_window_ParamLimits

0x984a,	// (0x0003f12e) popup_call4_audio_first_window

0x989a,	// (0x0003f17e) popup_call4_audio_second_window_ParamLimits

0x989a,	// (0x0003f17e) popup_call4_audio_second_window

0x98b3,	// (0x0003f197) popup_call4_audio_wait_window_ParamLimits

0x98b3,	// (0x0003f197) popup_call4_audio_wait_window

0x98c1,	// (0x0003f1a5) cell_call4_button_pane_ParamLimits

0x98c1,	// (0x0003f1a5) cell_call4_button_pane

0x98e4,	// (0x0003f1c8) bg_button_pane_cp09_ParamLimits

0x98e4,	// (0x0003f1c8) bg_button_pane_cp09

0x98f0,	// (0x0003f1d4) cell_call4_button_pane_g1_ParamLimits

0x98f0,	// (0x0003f1d4) cell_call4_button_pane_g1

0x98fd,	// (0x0003f1e1) cell_call4_button_pane_t1_ParamLimits

0x98fd,	// (0x0003f1e1) cell_call4_button_pane_t1

0xd48a,	// (0x00042d6e) popup_call4_audio_conf_window_ParamLimits

0xd48a,	// (0x00042d6e) popup_call4_audio_conf_window

0x8d10,	// (0x0003e5f4) mup3_progress_pane_t1_ParamLimits

0x8d2f,	// (0x0003e613) mup3_progress_pane_t2_ParamLimits

0x3575,	// (0x00038e59) mup3_progress_pane_t3_ParamLimits

0xf6e7,	// (0x00044fcb) mup3_progress_pane_t_ParamLimits

0x35b4,	// (0x00038e98) mup_progress_pane_cp03_ParamLimits

0x915f,	// (0x0003ea43) mup3_control_keys_pane_g4_copy1

0x9614,	// (0x0003eef8) mp4_rocker2_pane_ParamLimits

0x9614,	// (0x0003eef8) mp4_rocker2_pane

0x9941,	// (0x0003f225) mp4_rocker2_pane_g1

0x9941,	// (0x0003f225) mp4_rocker2_pane_g2

0x9941,	// (0x0003f225) mp4_rocker2_pane_g3

0x9941,	// (0x0003f225) mp4_rocker2_pane_g4

0x9941,	// (0x0003f225) mp4_rocker2_pane_g5

0x0004,

0xf811,	// (0x000450f5) mp4_rocker2_pane_g

0x07bf,	// (0x000360a3) main_camera4_pane

0x07bf,	// (0x000360a3) main_video4_pane

0x929a,	// (0x0003eb7e) main_video_tele_dialer_pane_t1_ParamLimits

0x929a,	// (0x0003eb7e) main_video_tele_dialer_pane_t1

0x92ac,	// (0x0003eb90) main_video_tele_dialer_pane_t2_ParamLimits

0x92ac,	// (0x0003eb90) main_video_tele_dialer_pane_t2

0x0001,

0xf7c7,	// (0x000450ab) main_video_tele_dialer_pane_t_ParamLimits

0xf7c7,	// (0x000450ab) main_video_tele_dialer_pane_t

0x9961,	// (0x0003f245) cam4_autofocus_pane_ParamLimits

0x9961,	// (0x0003f245) cam4_autofocus_pane

0x997b,	// (0x0003f25f) cam4_image_uncrop_pane_ParamLimits

0x997b,	// (0x0003f25f) cam4_image_uncrop_pane

0x9992,	// (0x0003f276) cam4_indicators_pane_ParamLimits

0x9992,	// (0x0003f276) cam4_indicators_pane

0x99ae,	// (0x0003f292) main_camera4_pane_g1_ParamLimits

0x99ae,	// (0x0003f292) main_camera4_pane_g1

0x99ba,	// (0x0003f29e) main_camera4_pane_g2_ParamLimits

0x99ba,	// (0x0003f29e) main_camera4_pane_g2

0x99ba,	// (0x0003f29e) main_camera4_pane_g3_ParamLimits

0x99ba,	// (0x0003f29e) main_camera4_pane_g3

0x99c6,	// (0x0003f2aa) main_camera4_pane_g4_ParamLimits

0x99c6,	// (0x0003f2aa) main_camera4_pane_g4

0x99d2,	// (0x0003f2b6) main_camera4_pane_g5_ParamLimits

0x99d2,	// (0x0003f2b6) main_camera4_pane_g5

0x0005,

0xf81c,	// (0x00045100) main_camera4_pane_g_ParamLimits

0xf81c,	// (0x00045100) main_camera4_pane_g

0x99ec,	// (0x0003f2d0) main_camera4_pane_t1_ParamLimits

0x99ec,	// (0x0003f2d0) main_camera4_pane_t1

0x0ec0,	// (0x000367a4) bg_tb_trans_pane_cp06

0x9a3c,	// (0x0003f320) cam4_indicators_pane_g1

0x9a4d,	// (0x0003f331) cam4_indicators_pane_g2

0x0002,

0xf837,	// (0x0004511b) cam4_indicators_pane_g

0x9a65,	// (0x0003f349) cam4_indicators_pane_t1

0x9a8f,	// (0x0003f373) main_video4_pane_g1_ParamLimits

0x9a8f,	// (0x0003f373) main_video4_pane_g1

0x9a9b,	// (0x0003f37f) main_video4_pane_g2_ParamLimits

0x9a9b,	// (0x0003f37f) main_video4_pane_g2

0x9aa7,	// (0x0003f38b) main_video4_pane_g3_ParamLimits

0x9aa7,	// (0x0003f38b) main_video4_pane_g3

0x9ab3,	// (0x0003f397) main_video4_pane_g4_ParamLimits

0x9ab3,	// (0x0003f397) main_video4_pane_g4

0x0004,

0xf83e,	// (0x00045122) main_video4_pane_g_ParamLimits

0xf83e,	// (0x00045122) main_video4_pane_g

0x9ad3,	// (0x0003f3b7) vid4_indicators_pane_ParamLimits

0x9ad3,	// (0x0003f3b7) vid4_indicators_pane

0x9af2,	// (0x0003f3d6) video4_image_uncrop_cif_pane_ParamLimits

0x9af2,	// (0x0003f3d6) video4_image_uncrop_cif_pane

0x9b01,	// (0x0003f3e5) video4_image_uncrop_nhd_pane_ParamLimits

0x9b01,	// (0x0003f3e5) video4_image_uncrop_nhd_pane

0x997b,	// (0x0003f25f) video4_image_uncrop_vga_pane_ParamLimits

0x997b,	// (0x0003f25f) video4_image_uncrop_vga_pane

0x0dad,	// (0x00036691) bg_tb_trans_pane_cp07

0x9b16,	// (0x0003f3fa) vid4_indicators_pane_g1

0x9b2a,	// (0x0003f40e) vid4_indicators_pane_g2

0x9b3e,	// (0x0003f422) vid4_indicators_pane_g3

0x0004,

0xf849,	// (0x0004512d) vid4_indicators_pane_g

0x9b6b,	// (0x0003f44f) vid4_indicators_pane_t1

0x9b82,	// (0x0003f466) cam4_autofocus_pane_g1

0x9b8a,	// (0x0003f46e) cam4_autofocus_pane_g2

0x9b92,	// (0x0003f476) cam4_autofocus_pane_g3

0x0002,

0xf854,	// (0x00045138) cam4_autofocus_pane_g

0x9b9a,	// (0x0003f47e) cam4_autofocus_pane_g3_copy1

0x92cc,	// (0x0003ebb0) video_down_pane_cp_t1

0x92da,	// (0x0003ebbe) video_down_pane_cp_t2

0x0001,

0xf7cc,	// (0x000450b0) video_down_pane_cp_t

0x0eb2,	// (0x00036796) popup_vitu2_window_ParamLimits

0x0eb2,	// (0x00036796) popup_vitu2_window

0x9ba2,	// (0x0003f486) aid_size_cell2_itu2_ParamLimits

0x9ba2,	// (0x0003f486) aid_size_cell2_itu2

0x9bc4,	// (0x0003f4a8) aid_size_cell_itu2_ParamLimits

0x9bc4,	// (0x0003f4a8) aid_size_cell_itu2

0x3592,	// (0x00038e76) bg_popup_window_pane_cp09_ParamLimits

0x3592,	// (0x00038e76) bg_popup_window_pane_cp09

0x9c08,	// (0x0003f4ec) field_vitu2_entry_pane_ParamLimits

0x9c08,	// (0x0003f4ec) field_vitu2_entry_pane

0x9c28,	// (0x0003f50c) grid_vitu2_function_pane_ParamLimits

0x9c28,	// (0x0003f50c) grid_vitu2_function_pane

0x9c68,	// (0x0003f54c) grid_vitu2_itu_pane_ParamLimits

0x9c68,	// (0x0003f54c) grid_vitu2_itu_pane

0x9cdc,	// (0x0003f5c0) cell_vitu2_itu_pane_ParamLimits

0x9cdc,	// (0x0003f5c0) cell_vitu2_itu_pane

0x9cf5,	// (0x0003f5d9) cell_vitu2_function_pane_ParamLimits

0x9cf5,	// (0x0003f5d9) cell_vitu2_function_pane

0xd49e,	// (0x00042d82) bg_popup_call_pane_cp08_ParamLimits

0xd49e,	// (0x00042d82) bg_popup_call_pane_cp08

0xd4b5,	// (0x00042d99) field_vitu2_entry_pane_g1

0xd4c1,	// (0x00042da5) field_vitu2_entry_pane_g2

0x0002,

0xf85b,	// (0x0004513f) field_vitu2_entry_pane_g

0x4a38,	// (0x0003a31c) field_vitu2_entry_pane_t1_ParamLimits

0x4a38,	// (0x0003a31c) field_vitu2_entry_pane_t1

0x4a75,	// (0x0003a359) field_vitu2_entry_pane_t2_ParamLimits

0x4a75,	// (0x0003a359) field_vitu2_entry_pane_t2

0x0001,

0xf862,	// (0x00045146) field_vitu2_entry_pane_t_ParamLimits

0xf862,	// (0x00045146) field_vitu2_entry_pane_t

0x8504,	// (0x0003dde8) bg_button_pane_cp010_ParamLimits

0x8504,	// (0x0003dde8) bg_button_pane_cp010

0x9d36,	// (0x0003f61a) cell_vitu2_itu_pane_g1

0x9d5c,	// (0x0003f640) cell_vitu2_itu_pane_t1_ParamLimits

0x9d5c,	// (0x0003f640) cell_vitu2_itu_pane_t1

0x4a92,	// (0x0003a376) cell_vitu2_itu_pane_t2_ParamLimits

0x4a92,	// (0x0003a376) cell_vitu2_itu_pane_t2

0x0002,

0xf86c,	// (0x00045150) cell_vitu2_itu_pane_t_ParamLimits

0xf86c,	// (0x00045150) cell_vitu2_itu_pane_t

0x0dad,	// (0x00036691) bg_button_pane_cp011

0x9da8,	// (0x0003f68c) cell_vitu2_function_pane_g1

0x07bf,	// (0x000360a3) main_myfav_hc_pane

0x977f,	// (0x0003f063) popup_image3_note_pane_ParamLimits

0x977f,	// (0x0003f063) popup_image3_note_pane

0x978d,	// (0x0003f071) popup_image3_tool_bar_pane_ParamLimits

0x978d,	// (0x0003f071) popup_image3_tool_bar_pane

0x4b08,	// (0x0003a3ec) cell_vitu2_itu_pane_t3_ParamLimits

0x4b08,	// (0x0003a3ec) cell_vitu2_itu_pane_t3

0x07bf,	// (0x000360a3) bg_popup_trans_pane

0xd4d5,	// (0x00042db9) grid_image3_tool_bar_pane

0xd4df,	// (0x00042dc3) bg_popup_trans_pane_g1

0x133e,	// (0x00036c22) bg_popup_trans_pane_g2

0xd4e7,	// (0x00042dcb) bg_popup_trans_pane_g3

0xd4ef,	// (0x00042dd3) bg_popup_trans_pane_g4

0xd4f7,	// (0x00042ddb) bg_popup_trans_pane_g5

0xd4ff,	// (0x00042de3) bg_popup_trans_pane_g6

0xd507,	// (0x00042deb) bg_popup_trans_pane_g7

0xd50f,	// (0x00042df3) bg_popup_trans_pane_g8

0x131e,	// (0x00036c02) bg_popup_trans_pane_g9

0x0008,

0xf873,	// (0x00045157) bg_popup_trans_pane_g

0xd517,	// (0x00042dfb) cell_image3_tool_bar_pane_ParamLimits

0xd517,	// (0x00042dfb) cell_image3_tool_bar_pane

0x0efe,	// (0x000367e2) cell_image3_tool_bar_pane_g1

0x07bf,	// (0x000360a3) bg_popup_trans_pane_cp1

0xd52b,	// (0x00042e0f) popup_image3_note_pane_t1

0xd539,	// (0x00042e1d) popup_image3_note_pane_t2

0xd547,	// (0x00042e2b) popup_image3_note_pane_t3

0x0002,

0xf886,	// (0x0004516a) popup_image3_note_pane_t

0xd555,	// (0x00042e39) popup_image3_note_pane_t3_copy1

0x9dbc,	// (0x0003f6a0) bg_myfav_hc_instruction_pane_ParamLimits

0x9dbc,	// (0x0003f6a0) bg_myfav_hc_instruction_pane

0x9dd4,	// (0x0003f6b8) cell_myfav_contact_pane_ParamLimits

0x9dd4,	// (0x0003f6b8) cell_myfav_contact_pane

0x9dee,	// (0x0003f6d2) cell_myfav_contact_pane_cp1_ParamLimits

0x9dee,	// (0x0003f6d2) cell_myfav_contact_pane_cp1

0x9e06,	// (0x0003f6ea) cell_myfav_contact_pane_cp2_ParamLimits

0x9e06,	// (0x0003f6ea) cell_myfav_contact_pane_cp2

0x9e1e,	// (0x0003f702) cell_myfav_contact_pane_cp3_ParamLimits

0x9e1e,	// (0x0003f702) cell_myfav_contact_pane_cp3

0x9e35,	// (0x0003f719) cell_myfav_contact_pane_cp4_ParamLimits

0x9e35,	// (0x0003f719) cell_myfav_contact_pane_cp4

0x9e4b,	// (0x0003f72f) cell_myfav_contact_pane_cp5_ParamLimits

0x9e4b,	// (0x0003f72f) cell_myfav_contact_pane_cp5

0x9e5f,	// (0x0003f743) cell_myfav_contact_pane_cp6_ParamLimits

0x9e5f,	// (0x0003f743) cell_myfav_contact_pane_cp6

0x9e73,	// (0x0003f757) cell_myfav_contact_pane_cp7_ParamLimits

0x9e73,	// (0x0003f757) cell_myfav_contact_pane_cp7

0xd563,	// (0x00042e47) listscroll_gen_pane_cp05

0x9e8b,	// (0x0003f76f) main_myfav_hc_pane_g1_ParamLimits

0x9e8b,	// (0x0003f76f) main_myfav_hc_pane_g1

0x9ea1,	// (0x0003f785) main_myfav_hc_pane_g2_ParamLimits

0x9ea1,	// (0x0003f785) main_myfav_hc_pane_g2

0x0002,

0xf88d,	// (0x00045171) main_myfav_hc_pane_g_ParamLimits

0xf88d,	// (0x00045171) main_myfav_hc_pane_g

0x9ed1,	// (0x0003f7b5) main_myfav_hc_pane_t1_ParamLimits

0x9ed1,	// (0x0003f7b5) main_myfav_hc_pane_t1

0xd56c,	// (0x00042e50) main_myfav_hc_pane_t2_ParamLimits

0xd56c,	// (0x00042e50) main_myfav_hc_pane_t2

0xd57e,	// (0x00042e62) main_myfav_hc_pane_t3_ParamLimits

0xd57e,	// (0x00042e62) main_myfav_hc_pane_t3

0x9ee8,	// (0x0003f7cc) main_myfav_hc_pane_t4_ParamLimits

0x9ee8,	// (0x0003f7cc) main_myfav_hc_pane_t4

0x0004,

0xf894,	// (0x00045178) main_myfav_hc_pane_t_ParamLimits

0xf894,	// (0x00045178) main_myfav_hc_pane_t

0x0efe,	// (0x000367e2) bg_myfav_hc_instruction_pane_g1

0xd590,	// (0x00042e74) cell_myfav_contact_pane_g1_ParamLimits

0xd590,	// (0x00042e74) cell_myfav_contact_pane_g1

0xd590,	// (0x00042e74) cell_myfav_contact_pane_g2_ParamLimits

0xd590,	// (0x00042e74) cell_myfav_contact_pane_g2

0xd59c,	// (0x00042e80) cell_myfav_contact_pane_g3_ParamLimits

0xd59c,	// (0x00042e80) cell_myfav_contact_pane_g3

0x0ece,	// (0x000367b2) cell_myfav_contact_pane_g4_ParamLimits

0x0ece,	// (0x000367b2) cell_myfav_contact_pane_g4

0xd5a9,	// (0x00042e8d) cell_myfav_contact_pane_g5_ParamLimits

0xd5a9,	// (0x00042e8d) cell_myfav_contact_pane_g5

0x0004,

0xf89f,	// (0x00045183) cell_myfav_contact_pane_g_ParamLimits

0xf89f,	// (0x00045183) cell_myfav_contact_pane_g

0x9eb9,	// (0x0003f79d) main_myfav_hc_pane_g3_ParamLimits

0x9eb9,	// (0x0003f79d) main_myfav_hc_pane_g3

0x47df,	// (0x0003a0c3) popup_adpt_find_window

0x9f12,	// (0x0003f7f6) afind_page_pane_ParamLimits

0x9f12,	// (0x0003f7f6) afind_page_pane

0x9f1f,	// (0x0003f803) aid_size_cell_afind_ParamLimits

0x9f1f,	// (0x0003f803) aid_size_cell_afind

0x9f39,	// (0x0003f81d) bg_popup_sub_pane_cp09_ParamLimits

0x9f39,	// (0x0003f81d) bg_popup_sub_pane_cp09

0x9f4a,	// (0x0003f82e) find_pane_cp01_ParamLimits

0x9f4a,	// (0x0003f82e) find_pane_cp01

0xd5b5,	// (0x00042e99) grid_afind_control_pane_ParamLimits

0xd5b5,	// (0x00042e99) grid_afind_control_pane

0x9f5d,	// (0x0003f841) grid_afind_pane_ParamLimits

0x9f5d,	// (0x0003f841) grid_afind_pane

0x9f79,	// (0x0003f85d) cell_afind_pane_ParamLimits

0x9f79,	// (0x0003f85d) cell_afind_pane

0x0efe,	// (0x000367e2) afind_page_pane_g1

0x9fc1,	// (0x0003f8a5) afind_page_pane_g2

0x9fc9,	// (0x0003f8ad) afind_page_pane_g3

0x0002,

0xf8aa,	// (0x0004518e) afind_page_pane_g

0x9fd1,	// (0x0003f8b5) afind_page_pane_t1

0xd5db,	// (0x00042ebf) cell_afind_grid_control_pane_ParamLimits

0xd5db,	// (0x00042ebf) cell_afind_grid_control_pane

0xd5ea,	// (0x00042ece) bg_button_pane_cp69_ParamLimits

0xd5ea,	// (0x00042ece) bg_button_pane_cp69

0x9fdf,	// (0x0003f8c3) cell_afind_pane_g1_ParamLimits

0x9fdf,	// (0x0003f8c3) cell_afind_pane_g1

0x9fec,	// (0x0003f8d0) cell_afind_pane_t1_ParamLimits

0x9fec,	// (0x0003f8d0) cell_afind_pane_t1

0xd5f6,	// (0x00042eda) bg_button_pane_cp72

0xd5fe,	// (0x00042ee2) cell_afind_grid_control_pane_g1

0x7d83,	// (0x0003d667) aid_image_placing_area_ParamLimits

0x7d83,	// (0x0003d667) aid_image_placing_area

0x0ec0,	// (0x000367a4) field_vitu_entry_pane_g1_ParamLimits

0x0ec0,	// (0x000367a4) field_vitu_entry_pane_g1

0x0ec0,	// (0x000367a4) field_vitu_entry_pane_g2_ParamLimits

0x0ec0,	// (0x000367a4) field_vitu_entry_pane_g2

0x0001,

0xf1bc,	// (0x00044aa0) field_vitu_entry_pane_g_ParamLimits

0xf1bc,	// (0x00044aa0) field_vitu_entry_pane_g

0x3899,	// (0x0003917d) cell_vitu_itu_pane_g1_ParamLimits

0x387c,	// (0x00039160) cell_vitu_itu_pane_t3_ParamLimits

0x387c,	// (0x00039160) cell_vitu_itu_pane_t3

0xd3fd,	// (0x00042ce1) mp4_progress_pane_t1_ParamLimits

0xd41f,	// (0x00042d03) mp4_progress_pane_t2_ParamLimits

0xf7f0,	// (0x000450d4) mp4_progress_pane_t_ParamLimits

0xd441,	// (0x00042d25) mup_progress_pane_cp04_ParamLimits

0x9efc,	// (0x0003f7e0) main_myfav_hc_pane_t5_ParamLimits

0x9efc,	// (0x0003f7e0) main_myfav_hc_pane_t5

0x5645,	// (0x0003af29) aid_zoom_text_primary

0x47df,	// (0x0003a0c3) popup_adpt_find_window_ParamLimits

0x0dad,	// (0x00036691) main_cam_set_pane

0x99a0,	// (0x0003f284) cam4_zoom_pane_ParamLimits

0x99a0,	// (0x0003f284) cam4_zoom_pane

0x9ffe,	// (0x0003f8e2) main_cam_set_pane_g1_ParamLimits

0x9ffe,	// (0x0003f8e2) main_cam_set_pane_g1

0xa00c,	// (0x0003f8f0) main_cam_set_pane_g2_ParamLimits

0xa00c,	// (0x0003f8f0) main_cam_set_pane_g2

0x0001,

0xf8b1,	// (0x00045195) main_cam_set_pane_g_ParamLimits

0xf8b1,	// (0x00045195) main_cam_set_pane_g

0xa018,	// (0x0003f8fc) main_cam_set_pane_t1_ParamLimits

0xa018,	// (0x0003f8fc) main_cam_set_pane_t1

0xa034,	// (0x0003f918) main_cset_listscroll_pane_ParamLimits

0xa034,	// (0x0003f918) main_cset_listscroll_pane

0xa066,	// (0x0003f94a) main_cset_slider_pane_ParamLimits

0xa066,	// (0x0003f94a) main_cset_slider_pane

0xd60f,	// (0x00042ef3) main_cset_list_pane_ParamLimits

0xd60f,	// (0x00042ef3) main_cset_list_pane

0xd61f,	// (0x00042f03) scroll_pane_cp028

0xa085,	// (0x0003f969) aid_area_touch_slider

0xa0a1,	// (0x0003f985) cset_slider_pane

0xa0c4,	// (0x0003f9a8) main_cset_slider_pane_g1

0xa0d9,	// (0x0003f9bd) main_cset_slider_pane_g2

0x0011,

0xf8b6,	// (0x0004519a) main_cset_slider_pane_g

0xd658,	// (0x00042f3c) main_cset_slider_pane_t1

0xa19f,	// (0x0003fa83) main_cset_slider_pane_t2

0xa1b9,	// (0x0003fa9d) main_cset_slider_pane_t3

0xa1d3,	// (0x0003fab7) main_cset_slider_pane_t4

0xa1f1,	// (0x0003fad5) main_cset_slider_pane_t5

0xa20f,	// (0x0003faf3) main_cset_slider_pane_t6

0xa226,	// (0x0003fb0a) main_cset_slider_pane_t7

0x000e,

0xf8db,	// (0x000451bf) main_cset_slider_pane_t

0xa334,	// (0x0003fc18) cset_list_set_pane_ParamLimits

0xa334,	// (0x0003fc18) cset_list_set_pane

0xd6f2,	// (0x00042fd6) aid_position_infowindow_above

0xd6fa,	// (0x00042fde) aid_position_infowindow_below

0x4b5a,	// (0x0003a43e) cset_list_set_pane_g1_ParamLimits

0x4b5a,	// (0x0003a43e) cset_list_set_pane_g1

0x4b66,	// (0x0003a44a) cset_list_set_pane_g3_ParamLimits

0x4b66,	// (0x0003a44a) cset_list_set_pane_g3

0x0001,

0xf8fa,	// (0x000451de) cset_list_set_pane_g_ParamLimits

0xf8fa,	// (0x000451de) cset_list_set_pane_g

0x4b75,	// (0x0003a459) cset_list_set_pane_t1_ParamLimits

0x4b75,	// (0x0003a459) cset_list_set_pane_t1

0x0dad,	// (0x00036691) list_highlight_pane_cp021_ParamLimits

0x0dad,	// (0x00036691) list_highlight_pane_cp021

0x1c6d,	// (0x00037551) cset_slider_pane_g1

0x1c7f,	// (0x00037563) cset_slider_pane_g2

0x1c76,	// (0x0003755a) cset_slider_pane_g3

0x0002,

0xf8ff,	// (0x000451e3) cset_slider_pane_g

0xa34d,	// (0x0003fc31) aid_area_touch_cam4_zoom

0xa355,	// (0x0003fc39) cam4_zoom_cont_pane

0xa35d,	// (0x0003fc41) cam4_zoom_pane_g1

0xa365,	// (0x0003fc49) cam4_zoom_pane_g2

0xa36d,	// (0x0003fc51) cam4_zoom_pane_g3

0x0002,

0xf906,	// (0x000451ea) cam4_zoom_pane_g

0xd702,	// (0x00042fe6) cam4_zoom_cont_pane_g1

0xd70b,	// (0x00042fef) cam4_zoom_cont_pane_g2

0xd714,	// (0x00042ff8) cam4_zoom_cont_pane_g3

0x0002,

0xf90d,	// (0x000451f1) cam4_zoom_cont_pane_g

0x97d6,	// (0x0003f0ba) call4_image_pane_ParamLimits

0x97d6,	// (0x0003f0ba) call4_image_pane

0x9835,	// (0x0003f119) call4_windows_conf_pane_ParamLimits

0x9878,	// (0x0003f15c) popup_call4_audio_in_window_ParamLimits

0x9878,	// (0x0003f15c) popup_call4_audio_in_window

0x07bf,	// (0x000360a3) bg_popup_call2_act_pane_cp02

0xd482,	// (0x00042d66) call4_list_conf_pane

0x0efe,	// (0x000367e2) call4_image_pane_g1

0x0efe,	// (0x000367e2) call4_image_pane_g2

0x0001,

0xf0af,	// (0x00044993) call4_image_pane_g

0xd71d,	// (0x00043001) list_single_graphic_popup_conf4_pane_ParamLimits

0xd71d,	// (0x00043001) list_single_graphic_popup_conf4_pane

0x07bf,	// (0x000360a3) list_highlight_pane_cp022

0xd730,	// (0x00043014) list_single_graphic_popup_conf4_pane_g1

0x185c,	// (0x00037140) list_single_graphic_popup_conf4_pane_g2

0x0001,

0xf914,	// (0x000451f8) list_single_graphic_popup_conf4_pane_g

0xd738,	// (0x0004301c) list_single_graphic_popup_conf4_pane_t1

0x63b2,	// (0x0003bc96) popup_vtel_slider_window_ParamLimits

0x63b2,	// (0x0003bc96) popup_vtel_slider_window

0xd454,	// (0x00042d38) dialer2_ne_pane_t2_ParamLimits

0xd454,	// (0x00042d38) dialer2_ne_pane_t2

0x0001,

0xf7f5,	// (0x000450d9) dialer2_ne_pane_t_ParamLimits

0xf7f5,	// (0x000450d9) dialer2_ne_pane_t

0x0dad,	// (0x00036691) bg_popup_sub_pane_cp010_ParamLimits

0x0dad,	// (0x00036691) bg_popup_sub_pane_cp010

0xa375,	// (0x0003fc59) popup_vtel_slider_window_g1_ParamLimits

0xa375,	// (0x0003fc59) popup_vtel_slider_window_g1

0xa381,	// (0x0003fc65) popup_vtel_slider_window_g2_ParamLimits

0xa381,	// (0x0003fc65) popup_vtel_slider_window_g2

0x0003,

0xf919,	// (0x000451fd) popup_vtel_slider_window_g_ParamLimits

0xf919,	// (0x000451fd) popup_vtel_slider_window_g

0xa3c9,	// (0x0003fcad) vtel_slider_pane_ParamLimits

0xa3c9,	// (0x0003fcad) vtel_slider_pane

0xa3d8,	// (0x0003fcbc) vtel_slider_pane_g1_ParamLimits

0xa3d8,	// (0x0003fcbc) vtel_slider_pane_g1

0xa3e5,	// (0x0003fcc9) vtel_slider_pane_g2_ParamLimits

0xa3e5,	// (0x0003fcc9) vtel_slider_pane_g2

0xa3f2,	// (0x0003fcd6) vtel_slider_pane_g3_ParamLimits

0xa3f2,	// (0x0003fcd6) vtel_slider_pane_g3

0xa3d8,	// (0x0003fcbc) vtel_slider_pane_g4_ParamLimits

0xa3d8,	// (0x0003fcbc) vtel_slider_pane_g4

0xa3ff,	// (0x0003fce3) vtel_slider_pane_g5_ParamLimits

0xa3ff,	// (0x0003fce3) vtel_slider_pane_g5

0x0004,

0xf922,	// (0x00045206) vtel_slider_pane_g_ParamLimits

0xf922,	// (0x00045206) vtel_slider_pane_g

0x0dad,	// (0x00036691) main_gallery2_pane

0x9bea,	// (0x0003f4ce) aid_size_row_itut2_dropdow_list_ParamLimits

0x9bea,	// (0x0003f4ce) aid_size_row_itut2_dropdow_list

0x9c46,	// (0x0003f52a) grid_vitu2_function_top_pane_ParamLimits

0x9c46,	// (0x0003f52a) grid_vitu2_function_top_pane

0x9c9a,	// (0x0003f57e) popup_vitu2_dropdown_list_window_ParamLimits

0x9c9a,	// (0x0003f57e) popup_vitu2_dropdown_list_window

0x9cbc,	// (0x0003f5a0) popup_vitu2_match_list_window

0xa40c,	// (0x0003fcf0) cell_vitu2_function_top_pane_ParamLimits

0xa40c,	// (0x0003fcf0) cell_vitu2_function_top_pane

0xa426,	// (0x0003fd0a) cell_vitu2_function_top_pane_cp01_ParamLimits

0xa426,	// (0x0003fd0a) cell_vitu2_function_top_pane_cp01

0xa442,	// (0x0003fd26) cell_vitu2_function_top_wide_pane_ParamLimits

0xa442,	// (0x0003fd26) cell_vitu2_function_top_wide_pane

0x0dad,	// (0x00036691) bg_button_pane_cp012

0xa460,	// (0x0003fd44) cell_vitu2_function_top_pane_g1

0xa474,	// (0x0003fd58) bg_button_pane_cp013_ParamLimits

0xa474,	// (0x0003fd58) bg_button_pane_cp013

0xa490,	// (0x0003fd74) cell_vitu2_function_top_wide_pane_g1_ParamLimits

0xa490,	// (0x0003fd74) cell_vitu2_function_top_wide_pane_g1

0x0eb2,	// (0x00036796) bg_popup_sub_pane_cp20

0xa4a8,	// (0x0003fd8c) list_vitu2_match_list_pane

0xd4df,	// (0x00042dc3) bg_popup_sub_pane_cp20_g1

0xd4e7,	// (0x00042dcb) bg_popup_sub_pane_cp20_g2

0x133e,	// (0x00036c22) bg_popup_sub_pane_cp20_g3

0xd4ef,	// (0x00042dd3) bg_popup_sub_pane_cp20_g4

0x131e,	// (0x00036c02) bg_popup_sub_pane_cp20_g5

0xd74e,	// (0x00043032) bg_popup_sub_pane_cp20_g6

0xd4ff,	// (0x00042de3) bg_popup_sub_pane_cp20_g7

0xd507,	// (0x00042deb) bg_popup_sub_pane_cp20_g8

0xd50f,	// (0x00042df3) bg_popup_sub_pane_cp20_g9

0x0008,

0xf92d,	// (0x00045211) bg_popup_sub_pane_cp20_g

0xa4c0,	// (0x0003fda4) list_vitu2_match_list_item_pane_ParamLimits

0xa4c0,	// (0x0003fda4) list_vitu2_match_list_item_pane

0xa4d2,	// (0x0003fdb6) list_vitu2_match_list_item_pane_t1

0x07bf,	// (0x000360a3) bg_popup_sub_pane_cp21

0x1125,	// (0x00036a09) grid_vitu2_dropdown_list_pane

0xa4e0,	// (0x0003fdc4) cell_vitu2_dropdown_list_char_pane_ParamLimits

0xa4e0,	// (0x0003fdc4) cell_vitu2_dropdown_list_char_pane

0xa502,	// (0x0003fde6) cell_vitu2_dropdown_list_ctrl_pane_ParamLimits

0xa502,	// (0x0003fde6) cell_vitu2_dropdown_list_ctrl_pane

0xd756,	// (0x0004303a) cell_vitu2_dropdown_list_char_pane_g1

0xd75f,	// (0x00043043) cell_vitu2_dropdown_list_char_pane_g2

0xd768,	// (0x0004304c) cell_vitu2_dropdown_list_char_pane_g3

0x0002,

0xf940,	// (0x00045224) cell_vitu2_dropdown_list_char_pane_g

0xa52a,	// (0x0003fe0e) cell_vitu2_dropdown_list_char_pane_t1

0xa538,	// (0x0003fe1c) cell_vitu2_dropdown_list_ctrl_pane_g1_ParamLimits

0xa538,	// (0x0003fe1c) cell_vitu2_dropdown_list_ctrl_pane_g1

0xa548,	// (0x0003fe2c) cell_vitu2_dropdown_list_ctrl_pane_g2_ParamLimits

0xa548,	// (0x0003fe2c) cell_vitu2_dropdown_list_ctrl_pane_g2

0xa559,	// (0x0003fe3d) cell_vitu2_dropdown_list_ctrl_pane_g3_ParamLimits

0xa559,	// (0x0003fe3d) cell_vitu2_dropdown_list_ctrl_pane_g3

0xa569,	// (0x0003fe4d) cell_vitu2_dropdown_list_ctrl_pane_g4_ParamLimits

0xa569,	// (0x0003fe4d) cell_vitu2_dropdown_list_ctrl_pane_g4

0x0ec0,	// (0x000367a4) cell_vitu2_dropdown_list_ctrl_pane_g5_ParamLimits

0x0ec0,	// (0x000367a4) cell_vitu2_dropdown_list_ctrl_pane_g5

0x0004,

0xf947,	// (0x0004522b) cell_vitu2_dropdown_list_ctrl_pane_g_ParamLimits

0xf947,	// (0x0004522b) cell_vitu2_dropdown_list_ctrl_pane_g

0xa582,	// (0x0003fe66) aid_size_cell_gallery2_ParamLimits

0xa582,	// (0x0003fe66) aid_size_cell_gallery2

0xa59c,	// (0x0003fe80) grid_gallery2_pane_ParamLimits

0xa59c,	// (0x0003fe80) grid_gallery2_pane

0xa5b3,	// (0x0003fe97) scroll_pane_cp029_ParamLimits

0xa5b3,	// (0x0003fe97) scroll_pane_cp029

0xa5c3,	// (0x0003fea7) cell_gallery2_pane_ParamLimits

0xa5c3,	// (0x0003fea7) cell_gallery2_pane

0xd771,	// (0x00043055) cell_gallery2_pane_g2

0xa618,	// (0x0003fefc) cell_gallery2_pane_g3

0xd779,	// (0x0004305d) cell_gallery2_pane_g4

0xd781,	// (0x00043065) cell_gallery2_pane_g5

0x1125,	// (0x00036a09) grid_highlight_pane_cp10

0x9cbc,	// (0x0003f5a0) popup_vitu2_match_list_window_ParamLimits

0x9cce,	// (0x0003f5b2) popup_vitu2_query_window_ParamLimits

0x9cce,	// (0x0003f5b2) popup_vitu2_query_window

0x07bf,	// (0x000360a3) bg_vitu2_candi_button_pane

0xd756,	// (0x0004303a) cell_vitu2_dropdown_list_char_pane_g1_copy1

0xd75f,	// (0x00043043) cell_vitu2_dropdown_list_char_pane_g2_copy1

0xd768,	// (0x0004304c) cell_vitu2_dropdown_list_char_pane_g2_copy2

0x4b8a,	// (0x0003a46e) bg_button_pane_cp015

0xa620,	// (0x0003ff04) bg_button_pane_cp016

0xa62c,	// (0x0003ff10) bg_button_pane_cp017

0x1bfd,	// (0x000374e1) bg_popup_sub_pane_cp22

0xd789,	// (0x0004306d) popup_vitu2_query_window_g1

0x4bc4,	// (0x0003a4a8) popup_vitu2_query_window_g2

0x0002,

0xf952,	// (0x00045236) popup_vitu2_query_window_g

0x4bdc,	// (0x0003a4c0) popup_vitu2_query_window_t1_ParamLimits

0x4bdc,	// (0x0003a4c0) popup_vitu2_query_window_t1

0x4c0f,	// (0x0003a4f3) popup_vitu2_query_window_t2_ParamLimits

0x4c0f,	// (0x0003a4f3) popup_vitu2_query_window_t2

0x4c21,	// (0x0003a505) popup_vitu2_query_window_t3_ParamLimits

0x4c21,	// (0x0003a505) popup_vitu2_query_window_t3

0xa653,	// (0x0003ff37) popup_vitu2_query_window_t4_ParamLimits

0xa653,	// (0x0003ff37) popup_vitu2_query_window_t4

0xa667,	// (0x0003ff4b) popup_vitu2_query_window_t5_ParamLimits

0xa667,	// (0x0003ff4b) popup_vitu2_query_window_t5

0x0006,

0xf959,	// (0x0004523d) popup_vitu2_query_window_t_ParamLimits

0xf959,	// (0x0004523d) popup_vitu2_query_window_t

0xd607,	// (0x00042eeb) main_cset_text_pane

0xa085,	// (0x0003f969) aid_area_touch_slider_ParamLimits

0xa0a1,	// (0x0003f985) cset_slider_pane_ParamLimits

0xa0c4,	// (0x0003f9a8) main_cset_slider_pane_g1_ParamLimits

0xa0d9,	// (0x0003f9bd) main_cset_slider_pane_g2_ParamLimits

0xd628,	// (0x00042f0c) main_cset_slider_pane_g3_ParamLimits

0xd628,	// (0x00042f0c) main_cset_slider_pane_g3

0xa0ee,	// (0x0003f9d2) main_cset_slider_pane_g4_ParamLimits

0xa0ee,	// (0x0003f9d2) main_cset_slider_pane_g4

0xa0fd,	// (0x0003f9e1) main_cset_slider_pane_g5_ParamLimits

0xa0fd,	// (0x0003f9e1) main_cset_slider_pane_g5

0xa10b,	// (0x0003f9ef) main_cset_slider_pane_g6_ParamLimits

0xa10b,	// (0x0003f9ef) main_cset_slider_pane_g6

0xf8b6,	// (0x0004519a) main_cset_slider_pane_g_ParamLimits

0xd658,	// (0x00042f3c) main_cset_slider_pane_t1_ParamLimits

0xa19f,	// (0x0003fa83) main_cset_slider_pane_t2_ParamLimits

0xa1b9,	// (0x0003fa9d) main_cset_slider_pane_t3_ParamLimits

0xa1d3,	// (0x0003fab7) main_cset_slider_pane_t4_ParamLimits

0xa1f1,	// (0x0003fad5) main_cset_slider_pane_t5_ParamLimits

0xa20f,	// (0x0003faf3) main_cset_slider_pane_t6_ParamLimits

0xa226,	// (0x0003fb0a) main_cset_slider_pane_t7_ParamLimits

0xa254,	// (0x0003fb38) main_cset_slider_pane_t8_ParamLimits

0xa254,	// (0x0003fb38) main_cset_slider_pane_t8

0xa27c,	// (0x0003fb60) main_cset_slider_pane_t9_ParamLimits

0xa27c,	// (0x0003fb60) main_cset_slider_pane_t9

0xa2a4,	// (0x0003fb88) main_cset_slider_pane_t10_ParamLimits

0xa2a4,	// (0x0003fb88) main_cset_slider_pane_t10

0xa2cc,	// (0x0003fbb0) main_cset_slider_pane_t11_ParamLimits

0xa2cc,	// (0x0003fbb0) main_cset_slider_pane_t11

0xa2f6,	// (0x0003fbda) main_cset_slider_pane_t12_ParamLimits

0xa2f6,	// (0x0003fbda) main_cset_slider_pane_t12

0xa315,	// (0x0003fbf9) main_cset_slider_pane_t13_ParamLimits

0xa315,	// (0x0003fbf9) main_cset_slider_pane_t13

0xf8db,	// (0x000451bf) main_cset_slider_pane_t_ParamLimits

0x07bf,	// (0x000360a3) bg_popup_sub_pane_cp011

0xd795,	// (0x00043079) main_cset_text_pane_g1

0xd79d,	// (0x00043081) main_cset_text_pane_t1

0xd7ab,	// (0x0004308f) main_cset_text_pane_t2

0xd7b9,	// (0x0004309d) main_cset_text_pane_t3

0xd7c7,	// (0x000430ab) main_cset_text_pane_t4

0xd7d5,	// (0x000430b9) main_cset_text_pane_t5

0xd7e3,	// (0x000430c7) main_cset_text_pane_t6

0xd7f1,	// (0x000430d5) main_cset_text_pane_t7

0x0006,

0xf968,	// (0x0004524c) main_cset_text_pane_t

0x07bf,	// (0x000360a3) main_cam4_burst_pane

0x07bf,	// (0x000360a3) main_cam5_pane

0xd5c9,	// (0x00042ead) bg_button_pane_cp019

0xd5d2,	// (0x00042eb6) bg_button_pane_cp020

0xd634,	// (0x00042f18) main_cset_slider_pane_g7_ParamLimits

0xd634,	// (0x00042f18) main_cset_slider_pane_g7

0xd640,	// (0x00042f24) main_cset_slider_pane_g8_ParamLimits

0xd640,	// (0x00042f24) main_cset_slider_pane_g8

0xa11f,	// (0x0003fa03) main_cset_slider_pane_g9_ParamLimits

0xa11f,	// (0x0003fa03) main_cset_slider_pane_g9

0xa12b,	// (0x0003fa0f) main_cset_slider_pane_g10_ParamLimits

0xa12b,	// (0x0003fa0f) main_cset_slider_pane_g10

0xa137,	// (0x0003fa1b) main_cset_slider_pane_g11_ParamLimits

0xa137,	// (0x0003fa1b) main_cset_slider_pane_g11

0xa143,	// (0x0003fa27) main_cset_slider_pane_g12_ParamLimits

0xa143,	// (0x0003fa27) main_cset_slider_pane_g12

0xa14f,	// (0x0003fa33) main_cset_slider_pane_g13_ParamLimits

0xa14f,	// (0x0003fa33) main_cset_slider_pane_g13

0xa15d,	// (0x0003fa41) main_cset_slider_pane_g14_ParamLimits

0xa15d,	// (0x0003fa41) main_cset_slider_pane_g14

0xa16b,	// (0x0003fa4f) main_cset_slider_pane_g15_ParamLimits

0xa16b,	// (0x0003fa4f) main_cset_slider_pane_g15

0xd680,	// (0x00042f64) main_cset_slider_pane_t14_ParamLimits

0xd680,	// (0x00042f64) main_cset_slider_pane_t14

0xd6b9,	// (0x00042f9d) main_cset_slider_pane_t15_ParamLimits

0xd6b9,	// (0x00042f9d) main_cset_slider_pane_t15

0xa67b,	// (0x0003ff5f) aid_cam4_burst_size_cell_ParamLimits

0xa67b,	// (0x0003ff5f) aid_cam4_burst_size_cell

0xa697,	// (0x0003ff7b) grid_cam4_burst_pane_ParamLimits

0xa697,	// (0x0003ff7b) grid_cam4_burst_pane

0xa6c7,	// (0x0003ffab) linegrid_cam4_burst_pane_ParamLimits

0xa6c7,	// (0x0003ffab) linegrid_cam4_burst_pane

0xa6e7,	// (0x0003ffcb) scroll_pane_cp30_ParamLimits

0xa6e7,	// (0x0003ffcb) scroll_pane_cp30

0xa6f3,	// (0x0003ffd7) cell_cam4_burst_pane_ParamLimits

0xa6f3,	// (0x0003ffd7) cell_cam4_burst_pane

0xd7ff,	// (0x000430e3) linegrid_cam4_burst_pane_g1_ParamLimits

0xd7ff,	// (0x000430e3) linegrid_cam4_burst_pane_g1

0xa72f,	// (0x00040013) linegrid_cam4_burst_pane_g2_ParamLimits

0xa72f,	// (0x00040013) linegrid_cam4_burst_pane_g2

0xd80c,	// (0x000430f0) linegrid_cam4_burst_pane_g3_ParamLimits

0xd80c,	// (0x000430f0) linegrid_cam4_burst_pane_g3

0x0002,

0xf977,	// (0x0004525b) linegrid_cam4_burst_pane_g_ParamLimits

0xf977,	// (0x0004525b) linegrid_cam4_burst_pane_g

0xa740,	// (0x00040024) linegrid_cam4_burst_pane_g3_copy1_ParamLimits

0xa740,	// (0x00040024) linegrid_cam4_burst_pane_g3_copy1

0xd819,	// (0x000430fd) linegrid_cam4_burst_pane_g4_ParamLimits

0xd819,	// (0x000430fd) linegrid_cam4_burst_pane_g4

0xa75a,	// (0x0004003e) linegrid_cam4_burst_pane_g5_ParamLimits

0xa75a,	// (0x0004003e) linegrid_cam4_burst_pane_g5

0xa76b,	// (0x0004004f) linegrid_cam4_burst_pane_g6_ParamLimits

0xa76b,	// (0x0004004f) linegrid_cam4_burst_pane_g6

0xd826,	// (0x0004310a) linegrid_cam4_burst_pane_g7_ParamLimits

0xd826,	// (0x0004310a) linegrid_cam4_burst_pane_g7

0xa77c,	// (0x00040060) cell_cam4_burst_pane_g1

0xd83f,	// (0x00043123) main_cam5_pane_t1_ParamLimits

0xd83f,	// (0x00043123) main_cam5_pane_t1

0xd851,	// (0x00043135) main_cam5_pane_t2_ParamLimits

0xd851,	// (0x00043135) main_cam5_pane_t2

0xd863,	// (0x00043147) main_cam5_pane_t3_ParamLimits

0xd863,	// (0x00043147) main_cam5_pane_t3

0xd875,	// (0x00043159) main_cam5_pane_t4_ParamLimits

0xd875,	// (0x00043159) main_cam5_pane_t4

0xd88d,	// (0x00043171) main_cam5_pane_t5_ParamLimits

0xd88d,	// (0x00043171) main_cam5_pane_t5

0xd8a1,	// (0x00043185) main_cam5_pane_t6_ParamLimits

0xd8a1,	// (0x00043185) main_cam5_pane_t6

0xd8b5,	// (0x00043199) main_cam5_pane_t7_ParamLimits

0xd8b5,	// (0x00043199) main_cam5_pane_t7

0xd8c7,	// (0x000431ab) main_cam5_pane_t8_ParamLimits

0xd8c7,	// (0x000431ab) main_cam5_pane_t8

0xd8e3,	// (0x000431c7) main_cam5_pane_t9_ParamLimits

0xd8e3,	// (0x000431c7) main_cam5_pane_t9

0xd8f5,	// (0x000431d9) main_cam5_pane_t10_ParamLimits

0xd8f5,	// (0x000431d9) main_cam5_pane_t10

0xd907,	// (0x000431eb) main_cam5_pane_t11_ParamLimits

0xd907,	// (0x000431eb) main_cam5_pane_t11

0xd919,	// (0x000431fd) main_cam5_pane_t12_ParamLimits

0xd919,	// (0x000431fd) main_cam5_pane_t12

0xd92e,	// (0x00043212) main_cam5_pane_t13_ParamLimits

0xd92e,	// (0x00043212) main_cam5_pane_t13

0x000c,

0xf983,	// (0x00045267) main_cam5_pane_t_ParamLimits

0xf983,	// (0x00045267) main_cam5_pane_t

0x57cf,	// (0x0003b0b3) popup_scut_keymap_window_ParamLimits

0x57cf,	// (0x0003b0b3) popup_scut_keymap_window

0xa78f,	// (0x00040073) aid_size_cell_brow_shortcut

0x1125,	// (0x00036a09) bg_popup_window_pane_cp010

0xa79b,	// (0x0004007f) grid_scut_pane

0xa7a7,	// (0x0004008b) cell_scut_pane_ParamLimits

0xa7a7,	// (0x0004008b) cell_scut_pane

0xa7be,	// (0x000400a2) cell_scut_pane_g1

0xd94b,	// (0x0004322f) cell_scut_pane_t1

0xd95a,	// (0x0004323e) cell_scut_pane_t2

0xa7c7,	// (0x000400ab) cell_scut_pane_t3

0x0002,

0xf99e,	// (0x00045282) cell_scut_pane_t

0x8939,	// (0x0003e21d) main_mup3_pane_g8_ParamLimits

0x8939,	// (0x0003e21d) main_mup3_pane_g8

0x9bfa,	// (0x0003f4de) area_vitu2_query_pane_ParamLimits

0x9bfa,	// (0x0003f4de) area_vitu2_query_pane

0x4b9f,	// (0x0003a483) input_focus_pane_cp08

0xd969,	// (0x0004324d) area_vitu2_query_pane_g1

0x4c9f,	// (0x0003a583) area_vitu2_query_pane_g2

0x0001,

0xf9a5,	// (0x00045289) area_vitu2_query_pane_g

0xa7d5,	// (0x000400b9) area_vitu2_query_pane_t1_ParamLimits

0xa7d5,	// (0x000400b9) area_vitu2_query_pane_t1

0xa7e9,	// (0x000400cd) area_vitu2_query_pane_t2_ParamLimits

0xa7e9,	// (0x000400cd) area_vitu2_query_pane_t2

0x4cb0,	// (0x0003a594) area_vitu2_query_pane_t3_ParamLimits

0x4cb0,	// (0x0003a594) area_vitu2_query_pane_t3

0x4cd8,	// (0x0003a5bc) area_vitu2_query_pane_t4_ParamLimits

0x4cd8,	// (0x0003a5bc) area_vitu2_query_pane_t4

0x4d00,	// (0x0003a5e4) area_vitu2_query_pane_t5_ParamLimits

0x4d00,	// (0x0003a5e4) area_vitu2_query_pane_t5

0x4d28,	// (0x0003a60c) area_vitu2_query_pane_t6_ParamLimits

0x4d28,	// (0x0003a60c) area_vitu2_query_pane_t6

0x0006,

0xf9aa,	// (0x0004528e) area_vitu2_query_pane_t_ParamLimits

0xf9aa,	// (0x0004528e) area_vitu2_query_pane_t

0xa620,	// (0x0003ff04) bg_button_pane_cp018

0xa7fd,	// (0x000400e1) bg_button_pane_cp021

0x4d74,	// (0x0003a658) bg_button_pane_cp022

0x4d97,	// (0x0003a67b) input_focus_pane_cp09

0x196b,	// (0x0003724f) aid_size_touch_mv_arrow_left

0x1996,	// (0x0003727a) aid_size_touch_mv_arrow_right

0xa183,	// (0x0003fa67) main_cset_slider_pane_g16_ParamLimits

0xa183,	// (0x0003fa67) main_cset_slider_pane_g16

0xa191,	// (0x0003fa75) main_cset_slider_pane_g17_ParamLimits

0xa191,	// (0x0003fa75) main_cset_slider_pane_g17

0xa77c,	// (0x00040060) cell_cam4_burst_pane_g1_ParamLimits

0x07bf,	// (0x000360a3) compa_mode_pane

0xa38d,	// (0x0003fc71) popup_vtel_slider_window_g3_ParamLimits

0xa38d,	// (0x0003fc71) popup_vtel_slider_window_g3

0xa3a1,	// (0x0003fc85) popup_vtel_slider_window_g4_ParamLimits

0xa3a1,	// (0x0003fc85) popup_vtel_slider_window_g4

0xa3b5,	// (0x0003fc99) popup_vtel_slider_window_t1_ParamLimits

0xa3b5,	// (0x0003fc99) popup_vtel_slider_window_t1

0x07bf,	// (0x000360a3) main_cl_pane

0x8266,	// (0x0003db4a) popup_imed_adjust2_window_ParamLimits

0x1bfd,	// (0x000374e1) bg_tb_trans_pane_cp05_ParamLimits

0x37b9,	// (0x0003909d) popup_imed_adjust2_window_g1_ParamLimits

0x37c8,	// (0x000390ac) popup_imed_adjust2_window_g2_ParamLimits

0x37c8,	// (0x000390ac) popup_imed_adjust2_window_g2

0x37d4,	// (0x000390b8) popup_imed_adjust2_window_g3_ParamLimits

0x37d4,	// (0x000390b8) popup_imed_adjust2_window_g3

0x0002,

0xf72a,	// (0x0004500e) popup_imed_adjust2_window_g_ParamLimits

0xf72a,	// (0x0004500e) popup_imed_adjust2_window_g

0x37e0,	// (0x000390c4) popup_imed_adjust2_window_t1_ParamLimits

0x37f8,	// (0x000390dc) slider_imed_adjust_pane_ParamLimits

0x380c,	// (0x000390f0) slider_imed_adjust_pane_g1_ParamLimits

0x381c,	// (0x00039100) slider_imed_adjust_pane_g2_ParamLimits

0x382c,	// (0x00039110) slider_imed_adjust_pane_g3_ParamLimits

0x383d,	// (0x00039121) slider_imed_adjust_pane_g4_ParamLimits

0xf731,	// (0x00045015) slider_imed_adjust_pane_g_ParamLimits

0x9949,	// (0x0003f22d) aid_touch_area_cam4_ParamLimits

0x9949,	// (0x0003f22d) aid_touch_area_cam4

0x9959,	// (0x0003f23d) battery_pane_cp01

0x99e0,	// (0x0003f2c4) main_camera4_pane_g6_ParamLimits

0x99e0,	// (0x0003f2c4) main_camera4_pane_g6

0x99fe,	// (0x0003f2e2) main_camera4_pane_t2_ParamLimits

0x99fe,	// (0x0003f2e2) main_camera4_pane_t2

0x0001,

0xf829,	// (0x0004510d) main_camera4_pane_t_ParamLimits

0xf829,	// (0x0004510d) main_camera4_pane_t

0x9a7f,	// (0x0003f363) aid_touch_area_vid4_ParamLimits

0x9a7f,	// (0x0003f363) aid_touch_area_vid4

0x9abf,	// (0x0003f3a3) main_video4_pane_g5_ParamLimits

0x9abf,	// (0x0003f3a3) main_video4_pane_g5

0x9ae3,	// (0x0003f3c7) vid4_progress_pane_ParamLimits

0x9ae3,	// (0x0003f3c7) vid4_progress_pane

0xd64c,	// (0x00042f30) main_cset_slider_pane_g18_ParamLimits

0xd64c,	// (0x00042f30) main_cset_slider_pane_g18

0xd833,	// (0x00043117) cell_cam4_burst_pane_g2_ParamLimits

0xd833,	// (0x00043117) cell_cam4_burst_pane_g2

0x0001,

0xf97e,	// (0x00045262) cell_cam4_burst_pane_g_ParamLimits

0xf97e,	// (0x00045262) cell_cam4_burst_pane_g

0xa809,	// (0x000400ed) bg_cl_pane_ParamLimits

0xa809,	// (0x000400ed) bg_cl_pane

0xa815,	// (0x000400f9) cl_header_pane_ParamLimits

0xa815,	// (0x000400f9) cl_header_pane

0xa821,	// (0x00040105) cl_listscroll_pane_ParamLimits

0xa821,	// (0x00040105) cl_listscroll_pane

0xd975,	// (0x00043259) bg_cl_pane_g1

0xd97d,	// (0x00043261) bg_cl_pane_g2

0xd985,	// (0x00043269) bg_cl_pane_g3

0xd98d,	// (0x00043271) bg_cl_pane_g4

0xd995,	// (0x00043279) bg_cl_pane_g5

0xd99d,	// (0x00043281) bg_cl_pane_g6

0xd9a5,	// (0x00043289) bg_cl_pane_g7

0xd9ad,	// (0x00043291) bg_cl_pane_g8

0xd9b5,	// (0x00043299) bg_cl_pane_g9

0x0008,

0xf9b9,	// (0x0004529d) bg_cl_pane_g

0xa82d,	// (0x00040111) aid_height_cl_leading_ParamLimits

0xa82d,	// (0x00040111) aid_height_cl_leading

0xa839,	// (0x0004011d) aid_height_cl_text_ParamLimits

0xa839,	// (0x0004011d) aid_height_cl_text

0x0eb2,	// (0x00036796) bg_cl_header_pane_ParamLimits

0x0eb2,	// (0x00036796) bg_cl_header_pane

0xa851,	// (0x00040135) cl_header_pane_g1_ParamLimits

0xa851,	// (0x00040135) cl_header_pane_g1

0xa85e,	// (0x00040142) cl_header_pane_t1_ParamLimits

0xa85e,	// (0x00040142) cl_header_pane_t1

0xd9bd,	// (0x000432a1) cl_list_pane

0xd61f,	// (0x00042f03) hc_scroll_pane_cp01

0x131e,	// (0x00036c02) bg_cl_header_pane_g1

0xd4df,	// (0x00042dc3) bg_cl_header_pane_g2

0x133e,	// (0x00036c22) bg_cl_header_pane_g3

0xd4ef,	// (0x00042dd3) bg_cl_header_pane_g4

0xd4e7,	// (0x00042dcb) bg_cl_header_pane_g5

0xd74e,	// (0x00043032) bg_cl_header_pane_g6

0xd507,	// (0x00042deb) bg_cl_header_pane_g7

0xd50f,	// (0x00042df3) bg_cl_header_pane_g8

0xd4ff,	// (0x00042de3) bg_cl_header_pane_g9

0x0008,

0xf9cc,	// (0x000452b0) bg_cl_header_pane_g

0xa870,	// (0x00040154) hc_cl_list_double_graphic_heading_pane_ParamLimits

0xa870,	// (0x00040154) hc_cl_list_double_graphic_heading_pane

0xa884,	// (0x00040168) hc_cl_list_single_graphic_pane_ParamLimits

0xa884,	// (0x00040168) hc_cl_list_single_graphic_pane

0xa89e,	// (0x00040182) hc_cl_list_single_graphic_pane_g1_ParamLimits

0xa89e,	// (0x00040182) hc_cl_list_single_graphic_pane_g1

0xa8aa,	// (0x0004018e) hc_cl_list_single_graphic_pane_g2_ParamLimits

0xa8aa,	// (0x0004018e) hc_cl_list_single_graphic_pane_g2

0x0001,

0xf9df,	// (0x000452c3) hc_cl_list_single_graphic_pane_g_ParamLimits

0xf9df,	// (0x000452c3) hc_cl_list_single_graphic_pane_g

0xa8be,	// (0x000401a2) hc_cl_list_single_graphic_pane_t1_ParamLimits

0xa8be,	// (0x000401a2) hc_cl_list_single_graphic_pane_t1

0xa89e,	// (0x00040182) hc_cl_list_double_graphic_heading_pane_g1_ParamLimits

0xa89e,	// (0x00040182) hc_cl_list_double_graphic_heading_pane_g1

0xa8d3,	// (0x000401b7) hc_cl_list_double_graphic_heading_pane_g2_ParamLimits

0xa8d3,	// (0x000401b7) hc_cl_list_double_graphic_heading_pane_g2

0xa8e7,	// (0x000401cb) hc_cl_list_double_graphic_heading_pane_g3_ParamLimits

0xa8e7,	// (0x000401cb) hc_cl_list_double_graphic_heading_pane_g3

0x0002,

0xf9e4,	// (0x000452c8) hc_cl_list_double_graphic_heading_pane_g_ParamLimits

0xf9e4,	// (0x000452c8) hc_cl_list_double_graphic_heading_pane_g

0xa8fb,	// (0x000401df) hc_cl_list_double_graphic_heading_pane_t1_ParamLimits

0xa8fb,	// (0x000401df) hc_cl_list_double_graphic_heading_pane_t1

0xa910,	// (0x000401f4) hc_cl_list_double_graphic_heading_pane_t2_ParamLimits

0xa910,	// (0x000401f4) hc_cl_list_double_graphic_heading_pane_t2

0x0001,

0xf9eb,	// (0x000452cf) hc_cl_list_double_graphic_heading_pane_t_ParamLimits

0xf9eb,	// (0x000452cf) hc_cl_list_double_graphic_heading_pane_t

0xa92d,	// (0x00040211) vid4_progress_pane_g1

0xa93d,	// (0x00040221) vid4_progress_pane_g2

0xa94d,	// (0x00040231) vid4_progress_pane_g3

0xa95f,	// (0x00040243) vid4_progress_pane_g4

0x0004,

0xf9f0,	// (0x000452d4) vid4_progress_pane_g

0xa977,	// (0x0004025b) vid4_progress_pane_t1

0xa98d,	// (0x00040271) vid4_progress_pane_t2

0x0002,

0xf9fb,	// (0x000452df) vid4_progress_pane_t

0xa9b8,	// (0x0004029c) wait_bar_pane_cp07

0x304b,	// (0x0003892f) blid_firmament_pane_ParamLimits

0x308e,	// (0x00038972) popup_blid_sat_info2_window_g1

0x30b2,	// (0x00038996) popup_blid_sat_info2_window_t3

0x30c0,	// (0x000389a4) popup_blid_sat_info2_window_t4

0x30ce,	// (0x000389b2) popup_blid_sat_info2_window_t5

0x30dc,	// (0x000389c0) popup_blid_sat_info2_window_t6

0x30ec,	// (0x000389d0) popup_blid_sat_info2_window_t7

0x30fa,	// (0x000389de) popup_blid_sat_info2_window_t8

0x3108,	// (0x000389ec) popup_blid_sat_info2_window_t9

0x3116,	// (0x000389fa) popup_blid_sat_info2_window_t10

0x31d7,	// (0x00038abb) aid_firma_cardinal_ParamLimits

0x31eb,	// (0x00038acf) blid_firmament_pane_t1_ParamLimits

0x3202,	// (0x00038ae6) blid_firmament_pane_t2_ParamLimits

0x3219,	// (0x00038afd) blid_firmament_pane_t3_ParamLimits

0x3230,	// (0x00038b14) blid_firmament_pane_t4_ParamLimits

0xf623,	// (0x00044f07) blid_firmament_pane_t_ParamLimits

0x3247,	// (0x00038b2b) blid_sat_info_pane_ParamLimits

0x0dad,	// (0x00036691) main_cam_set_pane_ParamLimits

0x9008,	// (0x0003e8ec) aid_size_cell_colour_35_ParamLimits

0x9022,	// (0x0003e906) aid_size_cell_colour_112_ParamLimits

0x9039,	// (0x0003e91d) aid_size_cell_effect_ParamLimits

0x0dad,	// (0x00036691) bg_tb_trans_pane_cp02_ParamLimits

0x162d,	// (0x00036f11) heading_imed_pane_ParamLimits

0x9053,	// (0x0003e937) listscroll_imed_pane_ParamLimits

0x24fe,	// (0x00037de2) popup_call2_audio_first_window_g5_ParamLimits

0x24fe,	// (0x00037de2) popup_call2_audio_first_window_g5

0x964f,	// (0x0003ef33) aid_size_touch_image3_arrow_left_ParamLimits

0x964f,	// (0x0003ef33) aid_size_touch_image3_arrow_left

0x9665,	// (0x0003ef49) aid_size_touch_image3_arrow_right_ParamLimits

0x9665,	// (0x0003ef49) aid_size_touch_image3_arrow_right

0xa9a2,	// (0x00040286) vid4_progress_pane_t3

0x91d5,	// (0x0003eab9) main_hwr_training_symbol_option_pane_ParamLimits

0x91d5,	// (0x0003eab9) main_hwr_training_symbol_option_pane

0x3947,	// (0x0003922b) popup_hwr_training_preview_window_ParamLimits

0x3947,	// (0x0003922b) popup_hwr_training_preview_window

0x9236,	// (0x0003eb1a) hwr_training_navi_pane_g5_ParamLimits

0x9236,	// (0x0003eb1a) hwr_training_navi_pane_g5

0xd4cd,	// (0x00042db1) popup_char_count_window

0x0eb2,	// (0x00036796) bg_popup_sub_pane_cp20_ParamLimits

0xa4a8,	// (0x0003fd8c) list_vitu2_match_list_pane_ParamLimits

0xa4b4,	// (0x0003fd98) vitu2_page_scroll_pane_ParamLimits

0xa4b4,	// (0x0003fd98) vitu2_page_scroll_pane

0xd9cf,	// (0x000432b3) list_single_hwr_training_symbol_option_pane_ParamLimits

0xd9cf,	// (0x000432b3) list_single_hwr_training_symbol_option_pane

0xd9e2,	// (0x000432c6) list_single_hwr_training_symbol_option_pane_g1

0xd9ea,	// (0x000432ce) list_single_hwr_training_symbol_option_pane_t1

0xd9f8,	// (0x000432dc) bg_button_pane_cp023

0xda01,	// (0x000432e5) bg_button_pane_cp024

0xda34,	// (0x00043318) vitu2_page_scroll_pane_g1

0xda3c,	// (0x00043320) vitu2_page_scroll_pane_g2

0x0001,

0xfa02,	// (0x000452e6) vitu2_page_scroll_pane_g

0xda44,	// (0x00043328) vitu2_page_scroll_pane_t1

0x0fd3,	// (0x000368b7) popup_char_count_window_g1

0xda53,	// (0x00043337) popup_char_count_window_g2

0xda5c,	// (0x00043340) popup_char_count_window_g3

0x0002,

0xfa07,	// (0x000452eb) popup_char_count_window_g

0xda65,	// (0x00043349) popup_char_count_window_t1

0x07bf,	// (0x000360a3) main_vded2_pane

0x37a5,	// (0x00039089) aid_size_cell_imed_line

0x37af,	// (0x00039093) grid_imed_line_width_pane

0x9b4f,	// (0x0003f433) vid4_indicators_pane_g4

0xda73,	// (0x00043357) cell_imed_line_width_pane_ParamLimits

0xda73,	// (0x00043357) cell_imed_line_width_pane

0xda87,	// (0x0004336b) cell_imed_line_width_pane_g1

0xda90,	// (0x00043374) cell_imed_line_width_pane_g2

0x0001,

0xfa0e,	// (0x000452f2) cell_imed_line_width_pane_g

0xa9c9,	// (0x000402ad) main_vded2_pane_g1_ParamLimits

0xa9c9,	// (0x000402ad) main_vded2_pane_g1

0xa9d6,	// (0x000402ba) main_vded2_pane_g2_ParamLimits

0xa9d6,	// (0x000402ba) main_vded2_pane_g2

0x0001,

0xfa13,	// (0x000452f7) main_vded2_pane_g_ParamLimits

0xfa13,	// (0x000452f7) main_vded2_pane_g

0xa9e4,	// (0x000402c8) vded2_slider_pane_ParamLimits

0xa9e4,	// (0x000402c8) vded2_slider_pane

0xa9f1,	// (0x000402d5) aid_size_touch_vded2_end

0xa9fb,	// (0x000402df) aid_size_touch_vded2_playhead

0xda98,	// (0x0004337c) aid_size_touch_vded2_start

0xdaa0,	// (0x00043384) vded2_slider_bg_pane

0xdaa9,	// (0x0004338d) vded2_slider_pane_g1

0xdab2,	// (0x00043396) vded2_slider_pane_g2

0xaa03,	// (0x000402e7) vded2_slider_pane_g3

0x0002,

0xfa18,	// (0x000452fc) vded2_slider_pane_g

0xdaba,	// (0x0004339e) vded2_slider_bg_pane_g1

0xdac3,	// (0x000433a7) vded2_slider_bg_pane_g2

0xdacc,	// (0x000433b0) vded2_slider_bg_pane_g3

0x0002,

0xfa1f,	// (0x00045303) vded2_slider_bg_pane_g

0x7b23,	// (0x0003d407) aid_postcard_touch_down_pane_ParamLimits

0x7b23,	// (0x0003d407) aid_postcard_touch_down_pane

0x7b33,	// (0x0003d417) aid_postcard_touch_up_pane_ParamLimits

0x7b33,	// (0x0003d417) aid_postcard_touch_up_pane

0x07bf,	// (0x000360a3) main_blid2_pane

0x81f5,	// (0x0003dad9) popup_blid2_search_window

0x07bf,	// (0x000360a3) blid2_gps_pane

0x07bf,	// (0x000360a3) blid2_navig_pane

0x07bf,	// (0x000360a3) blid2_search_pane

0x07bf,	// (0x000360a3) blid2_tripm_pane

0xaa0c,	// (0x000402f0) blid2_search_pane_g1_ParamLimits

0xaa0c,	// (0x000402f0) blid2_search_pane_g1

0xaa1c,	// (0x00040300) blid2_search_pane_t1_ParamLimits

0xaa1c,	// (0x00040300) blid2_search_pane_t1

0xaa2e,	// (0x00040312) aid_size_cell_blid2_gps_ParamLimits

0xaa2e,	// (0x00040312) aid_size_cell_blid2_gps

0xaa3e,	// (0x00040322) blid2_gps_pane_g1_ParamLimits

0xaa3e,	// (0x00040322) blid2_gps_pane_g1

0xaa4a,	// (0x0004032e) grid_blid2_satellite_pane_ParamLimits

0xaa4a,	// (0x0004032e) grid_blid2_satellite_pane

0xaa5a,	// (0x0004033e) blid2_navig_pane_g1_ParamLimits

0xaa5a,	// (0x0004033e) blid2_navig_pane_g1

0xaa66,	// (0x0004034a) blid2_navig_pane_t1_ParamLimits

0xaa66,	// (0x0004034a) blid2_navig_pane_t1

0xaa78,	// (0x0004035c) blid2_navig_pane_t2_ParamLimits

0xaa78,	// (0x0004035c) blid2_navig_pane_t2

0x0001,

0xfa26,	// (0x0004530a) blid2_navig_pane_t_ParamLimits

0xfa26,	// (0x0004530a) blid2_navig_pane_t

0xaa8a,	// (0x0004036e) blid2_navig_ring_pane_ParamLimits

0xaa8a,	// (0x0004036e) blid2_navig_ring_pane

0xaa9a,	// (0x0004037e) blid2_speed_pane_ParamLimits

0xaa9a,	// (0x0004037e) blid2_speed_pane

0xaaa6,	// (0x0004038a) blid2_tripm_pane_g1_ParamLimits

0xaaa6,	// (0x0004038a) blid2_tripm_pane_g1

0xaab6,	// (0x0004039a) blid2_tripm_pane_g2_ParamLimits

0xaab6,	// (0x0004039a) blid2_tripm_pane_g2

0xaac2,	// (0x000403a6) blid2_tripm_pane_g3_ParamLimits

0xaac2,	// (0x000403a6) blid2_tripm_pane_g3

0xaace,	// (0x000403b2) blid2_tripm_pane_g4_ParamLimits

0xaace,	// (0x000403b2) blid2_tripm_pane_g4

0xaada,	// (0x000403be) blid2_tripm_pane_g5_ParamLimits

0xaada,	// (0x000403be) blid2_tripm_pane_g5

0x0005,

0xfa2b,	// (0x0004530f) blid2_tripm_pane_g_ParamLimits

0xfa2b,	// (0x0004530f) blid2_tripm_pane_g

0xaaf6,	// (0x000403da) blid2_tripm_pane_t1_ParamLimits

0xaaf6,	// (0x000403da) blid2_tripm_pane_t1

0xab0a,	// (0x000403ee) blid2_tripm_pane_t2_ParamLimits

0xab0a,	// (0x000403ee) blid2_tripm_pane_t2

0xab1c,	// (0x00040400) blid2_tripm_pane_t3_ParamLimits

0xab1c,	// (0x00040400) blid2_tripm_pane_t3

0x0003,

0xfa38,	// (0x0004531c) blid2_tripm_pane_t_ParamLimits

0xfa38,	// (0x0004531c) blid2_tripm_pane_t

0xab4e,	// (0x00040432) cell_blid2_satellite_pane_ParamLimits

0xab4e,	// (0x00040432) cell_blid2_satellite_pane

0xab68,	// (0x0004044c) cell_blid2_satellite_pane_g1

0xdad5,	// (0x000433b9) cell_blid2_satellite_pane_t1

0x0efe,	// (0x000367e2) blid2_speed_pane_g1

0xdae3,	// (0x000433c7) blid2_speed_pane_t1

0xdaf1,	// (0x000433d5) blid2_speed_pane_t2

0x0001,

0xfa41,	// (0x00045325) blid2_speed_pane_t

0x0efe,	// (0x000367e2) blid2_navig_ring_pane_g1

0xab71,	// (0x00040455) blid2_navig_ring_pane_g2

0xab79,	// (0x0004045d) blid2_navig_ring_pane_g3

0xab81,	// (0x00040465) blid2_navig_ring_pane_g4

0xab89,	// (0x0004046d) blid2_navig_ring_pane_g5

0x0004,

0xfa46,	// (0x0004532a) blid2_navig_ring_pane_g

0x07bf,	// (0x000360a3) bg_popup_window_pane_cp011

0xdaff,	// (0x000433e3) popup_blid2_search_window_g1

0xdb07,	// (0x000433eb) popup_blid2_search_window_t1

0xdb15,	// (0x000433f9) popup_blid2_search_window_t2

0x0001,

0xfa51,	// (0x00045335) popup_blid2_search_window_t

0x122d,	// (0x00036b11) main_browser_pane_g1

0x0f5c,	// (0x00036840) main_browser_pane_ParamLimits

0x0dad,	// (0x00036691) bg_button_pane_cp011_ParamLimits

0x9da8,	// (0x0003f68c) cell_vitu2_function_pane_g1_ParamLimits

0x1bfd,	// (0x000374e1) bg_popup_sub_pane_cp22_ParamLimits

0x4b9f,	// (0x0003a483) input_focus_pane_cp08_ParamLimits

0xa638,	// (0x0003ff1c) popup_vitu2_query_button_pane_ParamLimits

0xa638,	// (0x0003ff1c) popup_vitu2_query_button_pane

0x4bba,	// (0x0003a49e) popup_vitu2_query_input_button_pane

0xd789,	// (0x0004306d) popup_vitu2_query_window_g1_ParamLimits

0x4bc4,	// (0x0003a4a8) popup_vitu2_query_window_g2_ParamLimits

0xf952,	// (0x00045236) popup_vitu2_query_window_g_ParamLimits

0x07bf,	// (0x000360a3) bg_button_pane_cp026

0xab91,	// (0x00040475) popup_vitu2_query_input_button_pane_g1

0x07bf,	// (0x000360a3) bg_button_pane_cp025

0xdb23,	// (0x00043407) popup_vitu2_query_button_pane_t1

0x865a,	// (0x0003df3e) main_mp3_pane_t6

0x866a,	// (0x0003df4e) popup_slider_window_cp01

0x9a34,	// (0x0003f318) cam4_battery_pane

0x9b0e,	// (0x0003f3f2) cam4_battery_pane_cp02

0xa925,	// (0x00040209) cam4_battery_pane_cp01

0xa925,	// (0x00040209) cam4_battery_pane_cp03

0x0efe,	// (0x000367e2) cam4_battery_pane_g1

0xdb31,	// (0x00043415) cam4_battery_pane_g2

0x0001,

0xfa56,	// (0x0004533a) cam4_battery_pane_g

0x3124,	// (0x00038a08) popup_blid_sat_info2_window_t11

0x196b,	// (0x0003724f) aid_size_touch_mv_arrow_left_ParamLimits

0x1996,	// (0x0003727a) aid_size_touch_mv_arrow_right_ParamLimits

0x19f4,	// (0x000372d8) navi_pane_g1_ParamLimits

0x1a00,	// (0x000372e4) navi_pane_g2_ParamLimits

0x1a2e,	// (0x00037312) navi_pane_g3_ParamLimits

0xf334,	// (0x00044c18) navi_pane_g_ParamLimits

0x77bf,	// (0x0003d0a3) navi_pane_mv_t1_ParamLimits

0x905f,	// (0x0003e943) grid_imed_effect_pane_ParamLimits

0x6272,	// (0x0003bb56) aid_placing_vt_slider_lsc

0x117c,	// (0x00036a60) aid_placing_vt_slider_prt

0x0dad,	// (0x00036691) bg_tb_trans_pane_cp01_ParamLimits

0x33c2,	// (0x00038ca6) popup_image_details_window_g1_ParamLimits

0x33d5,	// (0x00038cb9) popup_image_details_window_g2_ParamLimits

0x33ea,	// (0x00038cce) popup_image_details_window_g3_ParamLimits

0x33ea,	// (0x00038cce) popup_image_details_window_g3

0xf663,	// (0x00044f47) popup_image_details_window_g_ParamLimits

0x33fe,	// (0x00038ce2) popup_image_details_window_t1_ParamLimits

0x3410,	// (0x00038cf4) popup_image_details_window_t2_ParamLimits

0x3429,	// (0x00038d0d) popup_image_details_window_t3_ParamLimits

0x343d,	// (0x00038d21) popup_image_details_window_t4_ParamLimits

0x3458,	// (0x00038d3c) popup_image_details_window_t5_ParamLimits

0xf66a,	// (0x00044f4e) popup_image_details_window_t_ParamLimits

0xa845,	// (0x00040129) cl_header_name_pane_ParamLimits

0xa845,	// (0x00040129) cl_header_name_pane

0xab99,	// (0x0004047d) cl_header_name_pane_t1_ParamLimits

0xab99,	// (0x0004047d) cl_header_name_pane_t1

0xabb0,	// (0x00040494) cl_header_name_pane_t2_ParamLimits

0xabb0,	// (0x00040494) cl_header_name_pane_t2

0xabda,	// (0x000404be) cl_header_name_pane_t3_ParamLimits

0xabda,	// (0x000404be) cl_header_name_pane_t3

0x0002,

0xfa5b,	// (0x0004533f) cl_header_name_pane_t_ParamLimits

0xfa5b,	// (0x0004533f) cl_header_name_pane_t

0x1abd,	// (0x000373a1) navi_pane_mv_g2_ParamLimits

0xd4b5,	// (0x00042d99) field_vitu2_entry_pane_g1_ParamLimits

0xd4c1,	// (0x00042da5) field_vitu2_entry_pane_g2_ParamLimits

0x1bdb,	// (0x000374bf) field_vitu2_entry_pane_g3_ParamLimits

0x1bdb,	// (0x000374bf) field_vitu2_entry_pane_g3

0xf85b,	// (0x0004513f) field_vitu2_entry_pane_g_ParamLimits

0x9d36,	// (0x0003f61a) cell_vitu2_itu_pane_g1_ParamLimits

0x9d4e,	// (0x0003f632) cell_vitu2_itu_pane_g2_ParamLimits

0x9d4e,	// (0x0003f632) cell_vitu2_itu_pane_g2

0x0001,

0xf867,	// (0x0004514b) cell_vitu2_itu_pane_g_ParamLimits

0xf867,	// (0x0004514b) cell_vitu2_itu_pane_g

0x0dad,	// (0x00036691) bg_vkb2_func_pane_cp05_ParamLimits

0x0dad,	// (0x00036691) bg_vkb2_func_pane_cp05

0x0dad,	// (0x00036691) bg_vkb2_func_pane_cp03

0x0dad,	// (0x00036691) bg_vkb2_func_pane_cp04

0x0dad,	// (0x00036691) bg_vkb2_func_pane_cp10_ParamLimits

0x0dad,	// (0x00036691) bg_vkb2_func_pane_cp10

0x4d85,	// (0x0003a669) bg_vkb2_func_pane_cp08

0xa620,	// (0x0003ff04) bg_vkb2_func_pane_cp06

0xa7fd,	// (0x000400e1) bg_vkb2_func_pane_cp07

0xda0a,	// (0x000432ee) bg_vkb2_func_pane_cp11_ParamLimits

0xda0a,	// (0x000432ee) bg_vkb2_func_pane_cp11

0xda1f,	// (0x00043303) bg_vkb2_func_pane_cp12_ParamLimits

0xda1f,	// (0x00043303) bg_vkb2_func_pane_cp12

0x07bf,	// (0x000360a3) bg_vkb2_func_pane_cp09

0xd4df,	// (0x00042dc3) bg_vkb2_func_pane_g1

0x133e,	// (0x00036c22) bg_vkb2_func_pane_g2

0xd4e7,	// (0x00042dcb) bg_vkb2_func_pane_g3

0xd4ef,	// (0x00042dd3) bg_vkb2_func_pane_g4

0xd74e,	// (0x00043032) bg_vkb2_func_pane_g5

0xd507,	// (0x00042deb) bg_vkb2_func_pane_g6

0xd50f,	// (0x00042df3) bg_vkb2_func_pane_g7

0xd4ff,	// (0x00042de3) bg_vkb2_func_pane_g8

0x131e,	// (0x00036c02) bg_vkb2_func_pane_g9

0x0008,

0xfa62,	// (0x00045346) bg_vkb2_func_pane_g

0xaae8,	// (0x000403cc) blid2_tripm_pane_g6_ParamLimits

0xaae8,	// (0x000403cc) blid2_tripm_pane_g6

0xd3f5,	// (0x00042cd9) mp4_progress_pane_g1

0xab42,	// (0x00040426) blid2_tripm_values_pane_ParamLimits

0xab42,	// (0x00040426) blid2_tripm_values_pane

0xabff,	// (0x000404e3) blid2_tripm_values_pane_t1

0xac0d,	// (0x000404f1) blid2_tripm_values_pane_t2

0xac1b,	// (0x000404ff) blid2_tripm_values_pane_t3

0xac29,	// (0x0004050d) blid2_tripm_values_pane_t4

0xac37,	// (0x0004051b) blid2_tripm_values_pane_t5

0xac45,	// (0x00040529) blid2_tripm_values_pane_t6

0xac53,	// (0x00040537) blid2_tripm_values_pane_t7

0xac61,	// (0x00040545) blid2_tripm_values_pane_t8

0xac6f,	// (0x00040553) blid2_tripm_values_pane_t9

0x0008,

0xfa75,	// (0x00045359) blid2_tripm_values_pane_t

0x62b2,	// (0x0003bb96) call_video_pane_t1_ParamLimits

0x62d3,	// (0x0003bbb7) call_video_pane_t2_ParamLimits

0xf1dd,	// (0x00044ac1) call_video_pane_t_ParamLimits

0x4943,	// (0x0003a227) msg_header_pane_g1_ParamLimits

0x1cc9,	// (0x000375ad) msg_header_pane_g2_ParamLimits

0x1cc9,	// (0x000375ad) msg_header_pane_g2

0x0001,

0xf3d2,	// (0x00044cb6) msg_header_pane_g_ParamLimits

0xf3d2,	// (0x00044cb6) msg_header_pane_g

0x0f5c,	// (0x00036840) main_clock2_pane_ParamLimits

0x8dd9,	// (0x0003e6bd) grid_clock2_toolbar_pane_ParamLimits

0x8dd9,	// (0x0003e6bd) grid_clock2_toolbar_pane

0x8dd9,	// (0x0003e6bd) listscroll_clock2_pane_ParamLimits

0x8dd9,	// (0x0003e6bd) listscroll_clock2_pane

0x8e89,	// (0x0003e76d) main_clock2_pane_t3_ParamLimits

0x8e89,	// (0x0003e76d) main_clock2_pane_t3

0x8e9b,	// (0x0003e77f) main_clock2_pane_t4_ParamLimits

0x8e9b,	// (0x0003e77f) main_clock2_pane_t4

0xdb3b,	// (0x0004341f) cell_clock2_toolbar_pane

0xdb43,	// (0x00043427) cell_clock2_toolbar_pane_cp01

0xdb43,	// (0x00043427) cell_clock2_toolbar_pane_cp02

0xdb4b,	// (0x0004342f) cell_clock2_toolbar_pane_cp03

0xdb53,	// (0x00043437) list_clock2_pane

0x18f0,	// (0x000371d4) scroll_pane_cp10

0xdb5b,	// (0x0004343f) list_single_clock2_pane_ParamLimits

0xdb5b,	// (0x0004343f) list_single_clock2_pane

0x1125,	// (0x00036a09) list_highlight_pane_cp08

0xdb68,	// (0x0004344c) list_single_clock2_pane_t1

0xdb76,	// (0x0004345a) list_single_clock2_pane_t2

0x0001,

0xfa88,	// (0x0004536c) list_single_clock2_pane_t

0x07bf,	// (0x000360a3) bg_button_pane_cp10

0xdb84,	// (0x00043468) cell_clock2_toolbar_pane_g1

0x7a85,	// (0x0003d369) aid_main_viewer_pane_g1_ParamLimits

0x7a85,	// (0x0003d369) aid_main_viewer_pane_g1

0x7a91,	// (0x0003d375) aid_main_viewer_pane_g2_ParamLimits

0x7a91,	// (0x0003d375) aid_main_viewer_pane_g2

0x7a9d,	// (0x0003d381) aid_main_viewer_pane_g3_ParamLimits

0x7a9d,	// (0x0003d381) aid_main_viewer_pane_g3

0x7aae,	// (0x0003d392) aid_main_viewer_pane_g4_ParamLimits

0x7aae,	// (0x0003d392) aid_main_viewer_pane_g4

0x0003,

0xf3e3,	// (0x00044cc7) aid_main_viewer_pane_g_ParamLimits

0xf3e3,	// (0x00044cc7) aid_main_viewer_pane_g

0x81cd,	// (0x0003dab1) main_calc_pane_ParamLimits

0x81da,	// (0x0003dabe) main_dialer2_pane_ParamLimits

0x07bf,	// (0x000360a3) main_cam6_pane

0x07bf,	// (0x000360a3) main_vid6_pane

0x8de5,	// (0x0003e6c9) listscroll_gen_pane_cp06_ParamLimits

0x8de5,	// (0x0003e6c9) listscroll_gen_pane_cp06

0x8ead,	// (0x0003e791) main_clock2_pane_t5_ParamLimits

0x8ead,	// (0x0003e791) main_clock2_pane_t5

0x8efa,	// (0x0003e7de) aid_call2_pane_cp10_ParamLimits

0x8f0c,	// (0x0003e7f0) aid_call_pane_cp10_ParamLimits

0x195f,	// (0x00037243) popup_clock_analogue_window_cp10_g1_ParamLimits

0x195f,	// (0x00037243) popup_clock_analogue_window_cp10_g2_ParamLimits

0x8f1e,	// (0x0003e802) popup_clock_analogue_window_cp10_g3_ParamLimits

0x8f1e,	// (0x0003e802) popup_clock_analogue_window_cp10_g4_ParamLimits

0x195f,	// (0x00037243) popup_clock_analogue_window_cp10_g5_ParamLimits

0xf71f,	// (0x00045003) popup_clock_analogue_window_cp10_g_ParamLimits

0x8f34,	// (0x0003e818) popup_clock_analogue_window_cp10_t1_ParamLimits

0xd466,	// (0x00042d4a) cell_dialer2_keypad_pane_g2_ParamLimits

0xd466,	// (0x00042d4a) cell_dialer2_keypad_pane_g2

0x0001,

0xf7fa,	// (0x000450de) cell_dialer2_keypad_pane_g_ParamLimits

0xf7fa,	// (0x000450de) cell_dialer2_keypad_pane_g

0x0f08,	// (0x000367ec) cell_dialer2_keypad_pane_t1

0xa072,	// (0x0003f956) main_cset_text2_pane_ParamLimits

0xa072,	// (0x0003f956) main_cset_text2_pane

0xd969,	// (0x0004324d) area_vitu2_query_pane_g1_ParamLimits

0x4c9f,	// (0x0003a583) area_vitu2_query_pane_g2_ParamLimits

0xf9a5,	// (0x00045289) area_vitu2_query_pane_g_ParamLimits

0x4d50,	// (0x0003a634) area_vitu2_query_pane_t7_ParamLimits

0x4d50,	// (0x0003a634) area_vitu2_query_pane_t7

0xa620,	// (0x0003ff04) bg_button_pane_cp018_ParamLimits

0xa7fd,	// (0x000400e1) bg_button_pane_cp021_ParamLimits

0x4d74,	// (0x0003a658) bg_button_pane_cp022_ParamLimits

0x4d85,	// (0x0003a669) bg_vkb2_func_pane_cp08_ParamLimits

0xa620,	// (0x0003ff04) bg_vkb2_func_pane_cp06_ParamLimits

0xa7fd,	// (0x000400e1) bg_vkb2_func_pane_cp07_ParamLimits

0x4d97,	// (0x0003a67b) input_focus_pane_cp09_ParamLimits

0xac7d,	// (0x00040561) cam6_autofocus_pane_ParamLimits

0xac7d,	// (0x00040561) cam6_autofocus_pane

0xac99,	// (0x0004057d) cam6_image_uncrop_pane_ParamLimits

0xac99,	// (0x0004057d) cam6_image_uncrop_pane

0xacd2,	// (0x000405b6) cam6_indi_pane_ParamLimits

0xacd2,	// (0x000405b6) cam6_indi_pane

0xacec,	// (0x000405d0) cam6_mode_pane_ParamLimits

0xacec,	// (0x000405d0) cam6_mode_pane

0xad00,	// (0x000405e4) cam6_timer_pane_ParamLimits

0xad00,	// (0x000405e4) cam6_timer_pane

0xad14,	// (0x000405f8) cam6_zoom_pane_ParamLimits

0xad14,	// (0x000405f8) cam6_zoom_pane

0xad2f,	// (0x00040613) cam6_mode_pane_g1_ParamLimits

0xad2f,	// (0x00040613) cam6_mode_pane_g1

0xad3b,	// (0x0004061f) cam6_mode_pane_g2_ParamLimits

0xad3b,	// (0x0004061f) cam6_mode_pane_g2

0xad47,	// (0x0004062b) cam6_mode_pane_g3_ParamLimits

0xad47,	// (0x0004062b) cam6_mode_pane_g3

0xad53,	// (0x00040637) cam6_mode_pane_g4_ParamLimits

0xad53,	// (0x00040637) cam6_mode_pane_g4

0x0003,

0xfa8d,	// (0x00045371) cam6_mode_pane_g_ParamLimits

0xfa8d,	// (0x00045371) cam6_mode_pane_g

0x3592,	// (0x00038e76) bg_tb_trans_pane_cp08_ParamLimits

0x3592,	// (0x00038e76) bg_tb_trans_pane_cp08

0xdb8c,	// (0x00043470) cam6_battery_pane_ParamLimits

0xdb8c,	// (0x00043470) cam6_battery_pane

0xdba2,	// (0x00043486) cam6_indi_pane_g1_ParamLimits

0xdba2,	// (0x00043486) cam6_indi_pane_g1

0xdbb4,	// (0x00043498) cam6_indi_pane_g2_ParamLimits

0xdbb4,	// (0x00043498) cam6_indi_pane_g2

0xdbc6,	// (0x000434aa) cam6_indi_pane_g3_ParamLimits

0xdbc6,	// (0x000434aa) cam6_indi_pane_g3

0x0002,

0xfa96,	// (0x0004537a) cam6_indi_pane_g_ParamLimits

0xfa96,	// (0x0004537a) cam6_indi_pane_g

0xdbd8,	// (0x000434bc) cam6_indi_pane_t1_ParamLimits

0xdbd8,	// (0x000434bc) cam6_indi_pane_t1

0x9b82,	// (0x0003f466) cam6_autofocus_pane_g1

0x9b8a,	// (0x0003f46e) cam6_autofocus_pane_g2

0x9b92,	// (0x0003f476) cam6_autofocus_pane_g3

0x9b9a,	// (0x0003f47e) cam6_autofocus_pane_g4

0x0003,

0xfa9d,	// (0x00045381) cam6_autofocus_pane_g

0xdbfe,	// (0x000434e2) cam6_timer_pane_g1

0xdc06,	// (0x000434ea) cam6_timer_pane_t1

0xdc14,	// (0x000434f8) cam6_zoom_cont_pane

0xdc1c,	// (0x00043500) cam6_zoom_pane_g1

0xdc25,	// (0x00043509) cam6_zoom_pane_g2

0xad5f,	// (0x00040643) cam6_zoom_pane_g3

0x0002,

0xfaa6,	// (0x0004538a) cam6_zoom_pane_g

0x0efe,	// (0x000367e2) cam6_battery_pane_g1

0x0efe,	// (0x000367e2) cam6_battery_pane_g2

0x0001,

0xf0af,	// (0x00044993) cam6_battery_pane_g

0xdc1c,	// (0x00043500) cam6_zoom_cont_pane_g1

0xdc25,	// (0x00043509) cam6_zoom_cont_pane_g2

0xdc2e,	// (0x00043512) cam6_zoom_cont_pane_g3

0x0002,

0xfaad,	// (0x00045391) cam6_zoom_cont_pane_g

0xad7d,	// (0x00040661) cam6_mode_pane_cp_ParamLimits

0xad7d,	// (0x00040661) cam6_mode_pane_cp

0xad91,	// (0x00040675) cam6_zoom_pane_cp_ParamLimits

0xad91,	// (0x00040675) cam6_zoom_pane_cp

0xada9,	// (0x0004068d) vid6_image_uncrop_cif_pane_ParamLimits

0xada9,	// (0x0004068d) vid6_image_uncrop_cif_pane

0xadd5,	// (0x000406b9) vid6_image_uncrop_nhd_pane_ParamLimits

0xadd5,	// (0x000406b9) vid6_image_uncrop_nhd_pane

0xadf2,	// (0x000406d6) vid6_image_uncrop_vga_pane_ParamLimits

0xadf2,	// (0x000406d6) vid6_image_uncrop_vga_pane

0xae11,	// (0x000406f5) vid6_image_uncrop_wvga_pane_ParamLimits

0xae11,	// (0x000406f5) vid6_image_uncrop_wvga_pane

0xae2e,	// (0x00040712) vid6_indi_pane_ParamLimits

0xae2e,	// (0x00040712) vid6_indi_pane

0x3592,	// (0x00038e76) bg_tb_trans_pane_cp09_ParamLimits

0x3592,	// (0x00038e76) bg_tb_trans_pane_cp09

0xdc46,	// (0x0004352a) cam6_battery_pane_cp_ParamLimits

0xdc46,	// (0x0004352a) cam6_battery_pane_cp

0xdc52,	// (0x00043536) vid6_indi_pane_g1_ParamLimits

0xdc52,	// (0x00043536) vid6_indi_pane_g1

0xdc64,	// (0x00043548) vid6_indi_pane_g2_ParamLimits

0xdc64,	// (0x00043548) vid6_indi_pane_g2

0xdc76,	// (0x0004355a) vid6_indi_pane_g3_ParamLimits

0xdc76,	// (0x0004355a) vid6_indi_pane_g3

0xdc8b,	// (0x0004356f) vid6_indi_pane_g4_ParamLimits

0xdc8b,	// (0x0004356f) vid6_indi_pane_g4

0xdca0,	// (0x00043584) vid6_indi_pane_g5_ParamLimits

0xdca0,	// (0x00043584) vid6_indi_pane_g5

0x0004,

0xfab4,	// (0x00045398) vid6_indi_pane_g_ParamLimits

0xfab4,	// (0x00045398) vid6_indi_pane_g

0xdcba,	// (0x0004359e) vid6_indi_pane_t1_ParamLimits

0xdcba,	// (0x0004359e) vid6_indi_pane_t1

0xdcd0,	// (0x000435b4) vid6_indi_pane_t2_ParamLimits

0xdcd0,	// (0x000435b4) vid6_indi_pane_t2

0xdcf8,	// (0x000435dc) vid6_indi_pane_t3_ParamLimits

0xdcf8,	// (0x000435dc) vid6_indi_pane_t3

0xdd20,	// (0x00043604) vid6_indi_pane_t4_ParamLimits

0xdd20,	// (0x00043604) vid6_indi_pane_t4

0x0003,

0xfabf,	// (0x000453a3) vid6_indi_pane_t_ParamLimits

0xfabf,	// (0x000453a3) vid6_indi_pane_t

0xdd44,	// (0x00043628) wait_bar_pane_cp08

0xae51,	// (0x00040735) main_cset_text2_pane_t1_ParamLimits

0xae51,	// (0x00040735) main_cset_text2_pane_t1

0xad68,	// (0x0004064c) listscroll_gen_pane_cp06_t1_ParamLimits

0xad68,	// (0x0004064c) listscroll_gen_pane_cp06_t1

0x07bf,	// (0x000360a3) main_cam6_set_pane

0x0ec0,	// (0x000367a4) bg_tb_trans_pane_cp06_ParamLimits

0x9a3c,	// (0x0003f320) cam4_indicators_pane_g1_ParamLimits

0x9a4d,	// (0x0003f331) cam4_indicators_pane_g2_ParamLimits

0xf837,	// (0x0004511b) cam4_indicators_pane_g_ParamLimits

0x9a65,	// (0x0003f349) cam4_indicators_pane_t1_ParamLimits

0x0dad,	// (0x00036691) bg_tb_trans_pane_cp07_ParamLimits

0x9b16,	// (0x0003f3fa) vid4_indicators_pane_g1_ParamLimits

0x9b2a,	// (0x0003f40e) vid4_indicators_pane_g2_ParamLimits

0x9b3e,	// (0x0003f422) vid4_indicators_pane_g3_ParamLimits

0x9b4f,	// (0x0003f433) vid4_indicators_pane_g4_ParamLimits

0xf849,	// (0x0004512d) vid4_indicators_pane_g_ParamLimits

0x9b6b,	// (0x0003f44f) vid4_indicators_pane_t1_ParamLimits

0xa92d,	// (0x00040211) vid4_progress_pane_g1_ParamLimits

0xa93d,	// (0x00040221) vid4_progress_pane_g2_ParamLimits

0xa94d,	// (0x00040231) vid4_progress_pane_g3_ParamLimits

0xa95f,	// (0x00040243) vid4_progress_pane_g4_ParamLimits

0xf9f0,	// (0x000452d4) vid4_progress_pane_g_ParamLimits

0xa977,	// (0x0004025b) vid4_progress_pane_t1_ParamLimits

0xa98d,	// (0x00040271) vid4_progress_pane_t2_ParamLimits

0xa9a2,	// (0x00040286) vid4_progress_pane_t3_ParamLimits

0xf9fb,	// (0x000452df) vid4_progress_pane_t_ParamLimits

0xa9b8,	// (0x0004029c) wait_bar_pane_cp07_ParamLimits

0xae88,	// (0x0004076c) main_cam6_set_pane_g2_ParamLimits

0xae88,	// (0x0004076c) main_cam6_set_pane_g2

0xae94,	// (0x00040778) main_cset6_listscroll_pane_ParamLimits

0xae94,	// (0x00040778) main_cset6_listscroll_pane

0xaebf,	// (0x000407a3) main_cset6_slider_pane_ParamLimits

0xaebf,	// (0x000407a3) main_cset6_slider_pane

0xaecb,	// (0x000407af) main_cset6_text2_pane_ParamLimits

0xaecb,	// (0x000407af) main_cset6_text2_pane

0xdd53,	// (0x00043637) main_cset6_text_pane

0xdd5b,	// (0x0004363f) main_cset_list_pane_copy1_ParamLimits

0xdd5b,	// (0x0004363f) main_cset_list_pane_copy1

0xdd6b,	// (0x0004364f) scroll_pane_cp028_copy1

0xaede,	// (0x000407c2) cset_list_set_pane_copy1

0xaef4,	// (0x000407d8) aid_position_infowindow_above_copy1

0xaefc,	// (0x000407e0) aid_position_infowindow_below_copy1

0x4dd4,	// (0x0003a6b8) cset_list_set_pane_g1_copy1

0x4b66,	// (0x0003a44a) cset_list_set_pane_g3_copy1_ParamLimits

0x4b66,	// (0x0003a44a) cset_list_set_pane_g3_copy1

0x4b75,	// (0x0003a459) cset_list_set_pane_t1_copy1_ParamLimits

0x4b75,	// (0x0003a459) cset_list_set_pane_t1_copy1

0x0dad,	// (0x00036691) list_highlight_pane_cp021_copy1_ParamLimits

0x0dad,	// (0x00036691) list_highlight_pane_cp021_copy1

0xdd74,	// (0x00043658) cset6_slider_pane_ParamLimits

0xdd74,	// (0x00043658) cset6_slider_pane

0xdda0,	// (0x00043684) main_cset6_slider_pane_g1_ParamLimits

0xdda0,	// (0x00043684) main_cset6_slider_pane_g1

0xaf04,	// (0x000407e8) main_cset6_slider_pane_g2_ParamLimits

0xaf04,	// (0x000407e8) main_cset6_slider_pane_g2

0xddc8,	// (0x000436ac) main_cset6_slider_pane_g3_ParamLimits

0xddc8,	// (0x000436ac) main_cset6_slider_pane_g3

0xaf2c,	// (0x00040810) main_cset6_slider_pane_g4_ParamLimits

0xaf2c,	// (0x00040810) main_cset6_slider_pane_g4

0xaf38,	// (0x0004081c) main_cset6_slider_pane_g5_ParamLimits

0xaf38,	// (0x0004081c) main_cset6_slider_pane_g5

0xd634,	// (0x00042f18) main_cset6_slider_pane_g7_ParamLimits

0xd634,	// (0x00042f18) main_cset6_slider_pane_g7

0xd640,	// (0x00042f24) main_cset6_slider_pane_g8_ParamLimits

0xd640,	// (0x00042f24) main_cset6_slider_pane_g8

0xaf46,	// (0x0004082a) main_cset6_slider_pane_g9_ParamLimits

0xaf46,	// (0x0004082a) main_cset6_slider_pane_g9

0xaf52,	// (0x00040836) main_cset6_slider_pane_g10_ParamLimits

0xaf52,	// (0x00040836) main_cset6_slider_pane_g10

0xaf5e,	// (0x00040842) main_cset6_slider_pane_g11_ParamLimits

0xaf5e,	// (0x00040842) main_cset6_slider_pane_g11

0xaf6a,	// (0x0004084e) main_cset6_slider_pane_g12_ParamLimits

0xaf6a,	// (0x0004084e) main_cset6_slider_pane_g12

0xddd4,	// (0x000436b8) main_cset6_slider_pane_g13_ParamLimits

0xddd4,	// (0x000436b8) main_cset6_slider_pane_g13

0xdde0,	// (0x000436c4) main_cset6_slider_pane_g14_ParamLimits

0xdde0,	// (0x000436c4) main_cset6_slider_pane_g14

0xaf76,	// (0x0004085a) main_cset6_slider_pane_g15_ParamLimits

0xaf76,	// (0x0004085a) main_cset6_slider_pane_g15

0xaf8e,	// (0x00040872) main_cset6_slider_pane_g16_ParamLimits

0xaf8e,	// (0x00040872) main_cset6_slider_pane_g16

0xaf9c,	// (0x00040880) main_cset6_slider_pane_g17_ParamLimits

0xaf9c,	// (0x00040880) main_cset6_slider_pane_g17

0x0011,

0xfac8,	// (0x000453ac) main_cset6_slider_pane_g_ParamLimits

0xfac8,	// (0x000453ac) main_cset6_slider_pane_g

0xddf8,	// (0x000436dc) main_cset6_slider_pane_t1_ParamLimits

0xddf8,	// (0x000436dc) main_cset6_slider_pane_t1

0xafb6,	// (0x0004089a) main_cset6_slider_pane_t2_ParamLimits

0xafb6,	// (0x0004089a) main_cset6_slider_pane_t2

0xafe1,	// (0x000408c5) main_cset6_slider_pane_t3_ParamLimits

0xafe1,	// (0x000408c5) main_cset6_slider_pane_t3

0xb00c,	// (0x000408f0) main_cset6_slider_pane_t4_ParamLimits

0xb00c,	// (0x000408f0) main_cset6_slider_pane_t4

0xb037,	// (0x0004091b) main_cset6_slider_pane_t5_ParamLimits

0xb037,	// (0x0004091b) main_cset6_slider_pane_t5

0xde39,	// (0x0004371d) main_cset6_slider_pane_t7_ParamLimits

0xde39,	// (0x0004371d) main_cset6_slider_pane_t7

0xb064,	// (0x00040948) main_cset6_slider_pane_t8_ParamLimits

0xb064,	// (0x00040948) main_cset6_slider_pane_t8

0xb088,	// (0x0004096c) main_cset6_slider_pane_t9_ParamLimits

0xb088,	// (0x0004096c) main_cset6_slider_pane_t9

0xb0ac,	// (0x00040990) main_cset6_slider_pane_t10_ParamLimits

0xb0ac,	// (0x00040990) main_cset6_slider_pane_t10

0xb0d0,	// (0x000409b4) main_cset6_slider_pane_t11_ParamLimits

0xb0d0,	// (0x000409b4) main_cset6_slider_pane_t11

0xde6f,	// (0x00043753) main_cset6_slider_pane_t14_ParamLimits

0xde6f,	// (0x00043753) main_cset6_slider_pane_t14

0xdea8,	// (0x0004378c) main_cset6_slider_pane_t15_ParamLimits

0xdea8,	// (0x0004378c) main_cset6_slider_pane_t15

0x000b,

0xfaed,	// (0x000453d1) main_cset6_slider_pane_t_ParamLimits

0xfaed,	// (0x000453d1) main_cset6_slider_pane_t

0xd702,	// (0x00042fe6) cset_slider_pane_g1_copy1

0xd70b,	// (0x00042fef) cset_slider_pane_g2_copy1

0xd714,	// (0x00042ff8) cset_slider_pane_g3_copy1

0x07bf,	// (0x000360a3) bg_popup_sub_pane_cp011_copy1

0xdeea,	// (0x000437ce) main_cset_text_pane_g1_copy1

0xd79d,	// (0x00043081) main_cset_text_pane_t1_copy1

0xd7ab,	// (0x0004308f) main_cset_text_pane_t2_copy1

0xd7b9,	// (0x0004309d) main_cset_text_pane_t3_copy1

0xd7c7,	// (0x000430ab) main_cset_text_pane_t4_copy1

0xd7d5,	// (0x000430b9) main_cset_text_pane_t5_copy1

0xdef2,	// (0x000437d6) main_cset_text_pane_t6_copy1

0xdf00,	// (0x000437e4) main_cset_text_pane_t7_copy1

0xb0f6,	// (0x000409da) main_cset_text2_pane_t1_copy1

0x0dad,	// (0x00036691) main_ncimui_pane

0x822b,	// (0x0003db0f) popup_query_ncimui_window_ParamLimits

0x822b,	// (0x0003db0f) popup_query_ncimui_window

0x4a00,	// (0x0003a2e4) field_cale_ev2_pane_g4_ParamLimits

0x4a00,	// (0x0003a2e4) field_cale_ev2_pane_g4

0x9311,	// (0x0003ebf5) cell_video_dialer_keypad_pane_g2_ParamLimits

0x9311,	// (0x0003ebf5) cell_video_dialer_keypad_pane_g2

0x0001,

0xf7d1,	// (0x000450b5) cell_video_dialer_keypad_pane_g_ParamLimits

0xf7d1,	// (0x000450b5) cell_video_dialer_keypad_pane_g

0x9329,	// (0x0003ec0d) cell_video_dialer_keypad_pane_t1

0x07bf,	// (0x000360a3) bg_popup_window_pane_cp012

0x2d8b,	// (0x0003866f) heading_pane_cp06

0xdf38,	// (0x0004381c) ncim_query_content_pane

0x07bf,	// (0x000360a3) bg_popup_heading_pane_cp01

0xdf40,	// (0x00043824) ncim_heading_pane_t1

0xdf4e,	// (0x00043832) ncim_indicator_popup_pane

0xdf60,	// (0x00043844) ncim_query_button_pane

0xdf74,	// (0x00043858) ncim_query_content_pane_t1

0xdf86,	// (0x0004386a) ncim_query_content_pane_t2

0x0005,

0xfb31,	// (0x00045415) ncim_query_content_pane_t

0xdfc0,	// (0x000438a4) ncim_query_list_pane

0xdfd2,	// (0x000438b6) ncim_query_popup_pane

0xdf4e,	// (0x00043832) ncim_indicator_popup_pane_ParamLimits

0xb24a,	// (0x00040b2e) ncim_query_content_pane_g1_ParamLimits

0xb24a,	// (0x00040b2e) ncim_query_content_pane_g1

0xdf74,	// (0x00043858) ncim_query_content_pane_t1_ParamLimits

0xdf86,	// (0x0004386a) ncim_query_content_pane_t2_ParamLimits

0xb256,	// (0x00040b3a) ncim_query_content_pane_t3_ParamLimits

0xb256,	// (0x00040b3a) ncim_query_content_pane_t3

0xb273,	// (0x00040b57) ncim_query_content_pane_t4_ParamLimits

0xb273,	// (0x00040b57) ncim_query_content_pane_t4

0xb290,	// (0x00040b74) ncim_query_content_pane_t5_ParamLimits

0xb290,	// (0x00040b74) ncim_query_content_pane_t5

0xdf98,	// (0x0004387c) ncim_query_content_pane_t6_ParamLimits

0xdf98,	// (0x0004387c) ncim_query_content_pane_t6

0xfb31,	// (0x00045415) ncim_query_content_pane_t_ParamLimits

0xdfc0,	// (0x000438a4) ncim_query_list_pane_ParamLimits

0xdfd2,	// (0x000438b6) ncim_query_popup_pane_ParamLimits

0xdfe6,	// (0x000438ca) wait_bar_pane_cp04

0x07bf,	// (0x000360a3) input_focus_pane_cp011

0xdfee,	// (0x000438d2) ncim_query_popup_pane_t1

0xdffc,	// (0x000438e0) ncim_list_query_list_pane_ParamLimits

0xdffc,	// (0x000438e0) ncim_list_query_list_pane

0x07bf,	// (0x000360a3) bg_button_pane_cp027

0xe009,	// (0x000438ed) ncim_query_button_pane_g1

0x07bf,	// (0x000360a3) list_highlight_pane_cp012

0xe013,	// (0x000438f7) ncim_list_query_list_pane_g1

0xe01b,	// (0x000438ff) ncim_list_query_list_pane_t1

0x9a59,	// (0x0003f33d) cam4_indicators_pane_g3_ParamLimits

0x9a59,	// (0x0003f33d) cam4_indicators_pane_g3

0x9b5b,	// (0x0003f43f) vid4_indicators_pane_g5_ParamLimits

0x9b5b,	// (0x0003f43f) vid4_indicators_pane_g5

0xa96b,	// (0x0004024f) vid4_progress_pane_g5_ParamLimits

0xa96b,	// (0x0004024f) vid4_progress_pane_g5

0xb136,	// (0x00040a1a) main_ncimui_pane_g1

0xb19e,	// (0x00040a82) ncimui_group_query_pane_ParamLimits

0xb19e,	// (0x00040a82) ncimui_group_query_pane

0xb1e6,	// (0x00040aca) ncimui_list_pane_ParamLimits

0xb1e6,	// (0x00040aca) ncimui_list_pane

0xb20d,	// (0x00040af1) ncimui_text_pane_ParamLimits

0xb20d,	// (0x00040af1) ncimui_text_pane

0xb2ad,	// (0x00040b91) ncimui_text_pane_t1_ParamLimits

0xb2ad,	// (0x00040b91) ncimui_text_pane_t1

0xe029,	// (0x0004390d) ncimui_list_single_graphic_pane_ParamLimits

0xe029,	// (0x0004390d) ncimui_list_single_graphic_pane

0xb2cc,	// (0x00040bb0) ncimui_query_pane_ParamLimits

0xb2cc,	// (0x00040bb0) ncimui_query_pane

0x07bf,	// (0x000360a3) list_highlight_pane_cp013

0xe039,	// (0x0004391d) ncim_list_query_list_pane_t1_copy1

0xe047,	// (0x0004392b) ncim_list_single_graphic_pane_g1

0xb2df,	// (0x00040bc3) ncim_query_button_pane_cp01

0xb2eb,	// (0x00040bcf) ncim_query_entry_pane_ParamLimits

0xb2eb,	// (0x00040bcf) ncim_query_entry_pane

0xb2fe,	// (0x00040be2) ncimui_query_pane_g1

0xb30a,	// (0x00040bee) ncimui_query_pane_t1_ParamLimits

0xb30a,	// (0x00040bee) ncimui_query_pane_t1

0x0dad,	// (0x00036691) input_focus_pane_cp012

0xe04f,	// (0x00043933) ncim_query_entry_pane_t1

0x0f5c,	// (0x00036840) main_im_pane_ParamLimits

0x0dad,	// (0x00036691) main_mobtv_pane_ParamLimits

0x0dad,	// (0x00036691) main_mobtv_pane

0xafaa,	// (0x0004088e) main_cset6_slider_pane_g18_ParamLimits

0xafaa,	// (0x0004088e) main_cset6_slider_pane_g18

0xddec,	// (0x000436d0) main_cset6_slider_pane_g19_ParamLimits

0xddec,	// (0x000436d0) main_cset6_slider_pane_g19

0x1bdb,	// (0x000374bf) bg_main_mobtv_pane_ParamLimits

0x1bdb,	// (0x000374bf) bg_main_mobtv_pane

0xb323,	// (0x00040c07) main_mobtv_info_pane

0xb32e,	// (0x00040c12) main_mobtv_loading_pane_ParamLimits

0xb32e,	// (0x00040c12) main_mobtv_loading_pane

0xe061,	// (0x00043945) main_mobtv_pg_channel_list_pane

0xe06b,	// (0x0004394f) main_mobtv_pg_hdr_pane

0xb33b,	// (0x00040c1f) main_mobtv_programe_curr_pane_ParamLimits

0xb33b,	// (0x00040c1f) main_mobtv_programe_curr_pane

0xb348,	// (0x00040c2c) main_mobtv_programe_next_pane_ParamLimits

0xb348,	// (0x00040c2c) main_mobtv_programe_next_pane

0xe074,	// (0x00043958) popup_mobtv_noti_window

0x0efe,	// (0x000367e2) main_tv_pg_hdr_pane_g1

0xe07c,	// (0x00043960) main_tv_pg_hdr_pane_g2

0xe084,	// (0x00043968) main_tv_pg_hdr_pane_g3

0xe08c,	// (0x00043970) main_tv_pg_hdr_pane_g4

0xe094,	// (0x00043978) main_tv_pg_hdr_pane_g5

0xe09e,	// (0x00043982) main_tv_pg_hdr_pane_g6

0xe0a8,	// (0x0004398c) main_tv_pg_hdr_pane_g7

0xe0b2,	// (0x00043996) main_tv_pg_hdr_pane_g8

0xe0bc,	// (0x000439a0) main_tv_pg_hdr_pane_g9

0xe0c6,	// (0x000439aa) main_tv_pg_hdr_pane_g10

0xe0d0,	// (0x000439b4) main_tv_pg_hdr_pane_g11

0x000a,

0xfb3e,	// (0x00045422) main_tv_pg_hdr_pane_g

0xe0da,	// (0x000439be) main_tv_pg_hdr_pane_t1

0xe0e8,	// (0x000439cc) main_tv_pg_hdr_pane_t2

0xe0f6,	// (0x000439da) main_tv_pg_hdr_pane_t3

0xe106,	// (0x000439ea) main_tv_pg_hdr_pane_t4

0xe116,	// (0x000439fa) main_tv_pg_hdr_pane_t5

0x0004,

0xfb55,	// (0x00045439) main_tv_pg_hdr_pane_t

0xe126,	// (0x00043a0a) single_mobtv_pg_channel_pane_ParamLimits

0xe126,	// (0x00043a0a) single_mobtv_pg_channel_pane

0xe138,	// (0x00043a1c) single_mobtv_pg_channel_table_pane

0x1441,	// (0x00036d25) single_mobtv_pg_channel_thumb_pane

0xe141,	// (0x00043a25) single_tv_pg_channel_pane_g1

0xe14a,	// (0x00043a2e) single_tv_pg_channel_pane_g2

0x0001,

0xfb60,	// (0x00045444) single_tv_pg_channel_pane_g

0x0ec0,	// (0x000367a4) bg_single_mobtv_pg_channel_thumb_pane_ParamLimits

0x0ec0,	// (0x000367a4) bg_single_mobtv_pg_channel_thumb_pane

0xe153,	// (0x00043a37) single_mobtv_pg_channel_thumb_pane_g1_ParamLimits

0xe153,	// (0x00043a37) single_mobtv_pg_channel_thumb_pane_g1

0xe161,	// (0x00043a45) single_mobtv_pg_channel_thumb_pane_g2_ParamLimits

0xe161,	// (0x00043a45) single_mobtv_pg_channel_thumb_pane_g2

0xe16d,	// (0x00043a51) single_mobtv_pg_channel_thumb_pane_g3_ParamLimits

0xe16d,	// (0x00043a51) single_mobtv_pg_channel_thumb_pane_g3

0x0002,

0xfb65,	// (0x00045449) single_mobtv_pg_channel_thumb_pane_g_ParamLimits

0xfb65,	// (0x00045449) single_mobtv_pg_channel_thumb_pane_g

0xe179,	// (0x00043a5d) single_mobtv_pg_channel_thumb_pane_t1

0xe187,	// (0x00043a6b) single_mobtv_pg_channel_thumb_pane_t2

0x0001,

0xfb6c,	// (0x00045450) single_mobtv_pg_channel_thumb_pane_t

0x0efe,	// (0x000367e2) bg_single_mobtv_pg_channel_table_pane_g1

0x0efe,	// (0x000367e2) bg_single_mobtv_pg_channel_table_pane_g2

0x0001,

0xf0af,	// (0x00044993) bg_single_mobtv_pg_channel_table_pane_g

0xe195,	// (0x00043a79) single_mobtv_pg_channel_table_pane_t1

0xe1a3,	// (0x00043a87) single_mobtv_pg_channel_table_pane_t2

0x0001,

0xfb71,	// (0x00045455) single_mobtv_pg_channel_table_pane_t

0xb35d,	// (0x00040c41) main_mobtv_info_pane_g1_ParamLimits

0xb35d,	// (0x00040c41) main_mobtv_info_pane_g1

0xb379,	// (0x00040c5d) main_mobtv_info_pane_t1_ParamLimits

0xb379,	// (0x00040c5d) main_mobtv_info_pane_t1

0xb3f1,	// (0x00040cd5) main_mobtv_info_pane_t2_ParamLimits

0xb3f1,	// (0x00040cd5) main_mobtv_info_pane_t2

0x0002,

0xfb7b,	// (0x0004545f) main_mobtv_info_pane_t_ParamLimits

0xfb7b,	// (0x0004545f) main_mobtv_info_pane_t

0xb480,	// (0x00040d64) wait_bar_pane_cp05

0xb492,	// (0x00040d76) main_mobtv_loading_pane_g1_ParamLimits

0xb492,	// (0x00040d76) main_mobtv_loading_pane_g1

0xb4a0,	// (0x00040d84) main_mobtv_loading_pane_g2_ParamLimits

0xb4a0,	// (0x00040d84) main_mobtv_loading_pane_g2

0xb4ac,	// (0x00040d90) main_mobtv_loading_pane_g3_ParamLimits

0xb4ac,	// (0x00040d90) main_mobtv_loading_pane_g3

0x0002,

0xfb82,	// (0x00045466) main_mobtv_loading_pane_g_ParamLimits

0xfb82,	// (0x00045466) main_mobtv_loading_pane_g

0xe1b1,	// (0x00043a95) main_mobtv_loading_pane_t1_ParamLimits

0xe1b1,	// (0x00043a95) main_mobtv_loading_pane_t1

0xe1c9,	// (0x00043aad) main_mobtv_loading_pane_t2_ParamLimits

0xe1c9,	// (0x00043aad) main_mobtv_loading_pane_t2

0x0001,

0xfb89,	// (0x0004546d) main_mobtv_loading_pane_t_ParamLimits

0xfb89,	// (0x0004546d) main_mobtv_loading_pane_t

0xb4ba,	// (0x00040d9e) wait_bar_pane_cp06_ParamLimits

0xb4ba,	// (0x00040d9e) wait_bar_pane_cp06

0xe1ed,	// (0x00043ad1) main_mobtv_programe_curr_pane_t1

0xe1fb,	// (0x00043adf) main_mobtv_programe_curr_pane_t2

0x0001,

0xfb8e,	// (0x00045472) main_mobtv_programe_curr_pane_t

0xe209,	// (0x00043aed) main_mobtv_programe_next_pane_t1

0xe217,	// (0x00043afb) main_mobtv_programe_next_pane_t2

0xe225,	// (0x00043b09) main_mobtv_programe_next_pane_t3

0x0002,

0xfb93,	// (0x00045477) main_mobtv_programe_next_pane_t

0x07bf,	// (0x000360a3) bg_popup_mobtv_noti_window_pane

0xe233,	// (0x00043b17) popup_mobtv_noti_window_g1

0xe23b,	// (0x00043b1f) popup_mobtv_noti_window_t1

0xe249,	// (0x00043b2d) popup_mobtv_noti_window_t2

0x0001,

0xfb9a,	// (0x0004547e) popup_mobtv_noti_window_t

0x0efe,	// (0x000367e2) bg_popup_mobtv_noti_window_pane_g1

0x07bf,	// (0x000360a3) sc_clock_pane

0x07bf,	// (0x000360a3) main_fs_bigclock_pane

0xab30,	// (0x00040414) blid2_tripm_pane_t4_ParamLimits

0xab30,	// (0x00040414) blid2_tripm_pane_t4

0x0ece,	// (0x000367b2) sc_clock_pane_g1_ParamLimits

0x0ece,	// (0x000367b2) sc_clock_pane_g1

0x0f1c,	// (0x00036800) sc_clock_pane_t1_ParamLimits

0x0f1c,	// (0x00036800) sc_clock_pane_t1

0x0f1c,	// (0x00036800) sc_clock_pane_t2_ParamLimits

0x0f1c,	// (0x00036800) sc_clock_pane_t2

0x0f1c,	// (0x00036800) sc_clock_pane_t3_ParamLimits

0x0f1c,	// (0x00036800) sc_clock_pane_t3

0x0004,

0xfb9f,	// (0x00045483) sc_clock_pane_t_ParamLimits

0xfb9f,	// (0x00045483) sc_clock_pane_t

0xbc06,	// (0x000414ea) main_fs_bigclock_indicator_pane_ParamLimits

0xbc06,	// (0x000414ea) main_fs_bigclock_indicator_pane

0xb501,	// (0x00040de5) main_fs_bigclock_pane_g1_ParamLimits

0xb501,	// (0x00040de5) main_fs_bigclock_pane_g1

0xbc12,	// (0x000414f6) main_fs_bigclock_pane_t1_ParamLimits

0xbc12,	// (0x000414f6) main_fs_bigclock_pane_t1

0xbc24,	// (0x00041508) main_fs_bigclock_pane_t2_ParamLimits

0xbc24,	// (0x00041508) main_fs_bigclock_pane_t2

0xbc38,	// (0x0004151c) main_fs_bigclock_pane_t3_ParamLimits

0xbc38,	// (0x0004151c) main_fs_bigclock_pane_t3

0x0002,

0xfd35,	// (0x00045619) main_fs_bigclock_pane_t_ParamLimits

0xfd35,	// (0x00045619) main_fs_bigclock_pane_t

0xead7,	// (0x000443bb) main_fs_bigclock_indicator_pane_g1

0xdf68,	// (0x0004384c) ncim_query_content_pane_g2_ParamLimits

0xdf68,	// (0x0004384c) ncim_query_content_pane_g2

0x0001,

0xfb2c,	// (0x00045410) ncim_query_content_pane_g_ParamLimits

0xfb2c,	// (0x00045410) ncim_query_content_pane_g

0x0f1c,	// (0x00036800) sc_clock_pane_t4_ParamLimits

0x0f1c,	// (0x00036800) sc_clock_pane_t4

0x0dad,	// (0x00036691) main_radioblah_pane

0x990f,	// (0x0003f1f3) cell_call4_button_pane_t1_copy1_ParamLimits

0x990f,	// (0x0003f1f3) cell_call4_button_pane_t1_copy1

0xb150,	// (0x00040a34) main_ncimui_pane_t1_ParamLimits

0xb150,	// (0x00040a34) main_ncimui_pane_t1

0xb16a,	// (0x00040a4e) main_ncimui_pane_t2_ParamLimits

0xb16a,	// (0x00040a4e) main_ncimui_pane_t2

0x0002,

0xfb25,	// (0x00045409) main_ncimui_pane_t_ParamLimits

0xfb25,	// (0x00045409) main_ncimui_pane_t

0x1bfd,	// (0x000374e1) main_radioblah_anim_pane_ParamLimits

0x1bfd,	// (0x000374e1) main_radioblah_anim_pane

0x1bfd,	// (0x000374e1) main_radioblah_info_pane_ParamLimits

0x1bfd,	// (0x000374e1) main_radioblah_info_pane

0x1be9,	// (0x000374cd) main_radioblah_pane_t1_ParamLimits

0x1be9,	// (0x000374cd) main_radioblah_pane_t1

0x1be9,	// (0x000374cd) main_radioblah_pane_t2_ParamLimits

0x1be9,	// (0x000374cd) main_radioblah_pane_t2

0x0003,

0xfbc0,	// (0x000454a4) main_radioblah_pane_t_ParamLimits

0xfbc0,	// (0x000454a4) main_radioblah_pane_t

0x0eb2,	// (0x00036796) main_radioblah_rocker_ctrl_pane_ParamLimits

0x0eb2,	// (0x00036796) main_radioblah_rocker_ctrl_pane

0x35a0,	// (0x00038e84) main_radioblah_info_pane_t1_ParamLimits

0x35a0,	// (0x00038e84) main_radioblah_info_pane_t1

0xe3bf,	// (0x00043ca3) main_radioblah_info_pane_t2_ParamLimits

0xe3bf,	// (0x00043ca3) main_radioblah_info_pane_t2

0x0003,

0xfbc9,	// (0x000454ad) main_radioblah_info_pane_t_ParamLimits

0xfbc9,	// (0x000454ad) main_radioblah_info_pane_t

0x0efe,	// (0x000367e2) main_radioblah_rocker_ctrl_pane_g1

0x0efe,	// (0x000367e2) main_radioblah_rocker_ctrl_pane_g2

0x0efe,	// (0x000367e2) main_radioblah_rocker_ctrl_pane_g3

0x0efe,	// (0x000367e2) main_radioblah_rocker_ctrl_pane_g4

0x0efe,	// (0x000367e2) main_radioblah_rocker_ctrl_pane_g5

0x0efe,	// (0x000367e2) main_radioblah_rocker_ctrl_pane_g6

0x0005,

0xfbd2,	// (0x000454b6) main_radioblah_rocker_ctrl_pane_g

0xb0f6,	// (0x000409da) main_cset_text2_pane_t1_copy1_ParamLimits

0x998a,	// (0x0003f26e) cam4_image_uncrop_qvga_pane

0x9acb,	// (0x0003f3af) vid4_image_uncrop_qcif_pane

0xacc4,	// (0x000405a8) cam6_image_uncrop_qvga_pane_ParamLimits

0xacc4,	// (0x000405a8) cam6_image_uncrop_qvga_pane

0xdc36,	// (0x0004351a) vid6_image_uncrop_qcif_pane_ParamLimits

0xdc36,	// (0x0004351a) vid6_image_uncrop_qcif_pane

0x07bf,	// (0x000360a3) bg_popup_preview_window_pane_cp03

0xdf0e,	// (0x000437f2) list_cset_text2_pane

0xdf16,	// (0x000437fa) main_cset6_text2_pane_g1

0xdf1e,	// (0x00043802) main_cset6_text2_pane_t1

0xb545,	// (0x00040e29) list_cset_text2_pane_t1_ParamLimits

0xb545,	// (0x00040e29) list_cset_text2_pane_t1

0x0dad,	// (0x00036691) main_radioblah_pane_ParamLimits

0xb46c,	// (0x00040d50) main_mobtv_info_pane_t3_ParamLimits

0xb46c,	// (0x00040d50) main_mobtv_info_pane_t3

0x1bdb,	// (0x000374bf) main_radioblah_pane_g1

0xe38f,	// (0x00043c73) main_radioblah_info_pane_g1

0x0f1c,	// (0x00036800) main_radioblah_info_pane_t3_ParamLimits

0x0f1c,	// (0x00036800) main_radioblah_info_pane_t3

0x7300,	// (0x0003cbe4) highlight_cell_cale_month_pane_ParamLimits

0x7300,	// (0x0003cbe4) highlight_cell_cale_month_pane

0x07bf,	// (0x000360a3) main_phob_fisheye_pane

0x35f8,	// (0x00038edc) scroll_pane_cp0031_ParamLimits

0x35f8,	// (0x00038edc) scroll_pane_cp0031

0xdd44,	// (0x00043628) wait_bar_pane_cp08_ParamLimits

0xaede,	// (0x000407c2) cset_list_set_pane_copy1_ParamLimits

0xe40e,	// (0x00043cf2) highlight_cell_cale_month_pane_g1

0xb566,	// (0x00040e4a) highlight_cell_cale_month_pane_t1

0xd9bd,	// (0x000432a1) list_gen_pane_cp01

0xd61f,	// (0x00042f03) scroll_pane_01

0xb574,	// (0x00040e58) list_single_double_fisheye_pane

0x4df9,	// (0x0003a6dd) list_double_fisheye_pane_g1_ParamLimits

0x4df9,	// (0x0003a6dd) list_double_fisheye_pane_g1

0x4e05,	// (0x0003a6e9) list_double_fisheye_pane_g2_ParamLimits

0x4e05,	// (0x0003a6e9) list_double_fisheye_pane_g2

0xb57d,	// (0x00040e61) list_double_fisheye_pane_g3_ParamLimits

0xb57d,	// (0x00040e61) list_double_fisheye_pane_g3

0x0004,

0xfbdf,	// (0x000454c3) list_double_fisheye_pane_g_ParamLimits

0xfbdf,	// (0x000454c3) list_double_fisheye_pane_g

0x4e36,	// (0x0003a71a) list_double_fisheye_pane_t1_ParamLimits

0x4e36,	// (0x0003a71a) list_double_fisheye_pane_t1

0x4e51,	// (0x0003a735) list_double_fisheye_pane_t2_ParamLimits

0x4e51,	// (0x0003a735) list_double_fisheye_pane_t2

0x0001,

0xfbea,	// (0x000454ce) list_double_fisheye_pane_t_ParamLimits

0xfbea,	// (0x000454ce) list_double_fisheye_pane_t

0x07bf,	// (0x000360a3) main_call5_pane

0x0eb2,	// (0x00036796) sc_swipe_pane_ParamLimits

0x0eb2,	// (0x00036796) sc_swipe_pane

0xb595,	// (0x00040e79) call5_image_pane_ParamLimits

0xb595,	// (0x00040e79) call5_image_pane

0xb5a5,	// (0x00040e89) call5_swipe_1_pane_ParamLimits

0xb5a5,	// (0x00040e89) call5_swipe_1_pane

0xb5b1,	// (0x00040e95) call5_swipe_2_pane_ParamLimits

0xb5b1,	// (0x00040e95) call5_swipe_2_pane

0xb5cb,	// (0x00040eaf) popup_call5_audio_first_window_ParamLimits

0xb5cb,	// (0x00040eaf) popup_call5_audio_first_window

0x0ec0,	// (0x000367a4) call5_swipe_1_pane_g1_ParamLimits

0x0ec0,	// (0x000367a4) call5_swipe_1_pane_g1

0xe416,	// (0x00043cfa) call5_swipe_1_pane_g2_ParamLimits

0xe416,	// (0x00043cfa) call5_swipe_1_pane_g2

0x0001,

0xfbef,	// (0x000454d3) call5_swipe_1_pane_g_ParamLimits

0xfbef,	// (0x000454d3) call5_swipe_1_pane_g

0xe422,	// (0x00043d06) call5_swipe_1_pane_t1_ParamLimits

0xe422,	// (0x00043d06) call5_swipe_1_pane_t1

0x0ec0,	// (0x000367a4) call5_swipe_2_pane_g1_ParamLimits

0x0ec0,	// (0x000367a4) call5_swipe_2_pane_g1

0xe437,	// (0x00043d1b) call5_swipe_2_pane_g2_ParamLimits

0xe437,	// (0x00043d1b) call5_swipe_2_pane_g2

0x0001,

0xfbf4,	// (0x000454d8) call5_swipe_2_pane_g_ParamLimits

0xfbf4,	// (0x000454d8) call5_swipe_2_pane_g

0xe443,	// (0x00043d27) call5_swipe_2_pane_t1_ParamLimits

0xe443,	// (0x00043d27) call5_swipe_2_pane_t1

0x0ec0,	// (0x000367a4) sc_swipe_pane_g1_ParamLimits

0x0ec0,	// (0x000367a4) sc_swipe_pane_g1

0x0ece,	// (0x000367b2) sc_swipe_pane_g2_ParamLimits

0x0ece,	// (0x000367b2) sc_swipe_pane_g2

0x0001,

0xfbf9,	// (0x000454dd) sc_swipe_pane_g_ParamLimits

0xfbf9,	// (0x000454dd) sc_swipe_pane_g

0x0f08,	// (0x000367ec) sc_swipe_pane_t1_ParamLimits

0x0f08,	// (0x000367ec) sc_swipe_pane_t1

0x07bf,	// (0x000360a3) main_cmail_launcher_pane

0xb5d9,	// (0x00040ebd) aid_size_cell_cmail_l_ParamLimits

0xb5d9,	// (0x00040ebd) aid_size_cell_cmail_l

0xb5e7,	// (0x00040ecb) grid_cmail_l_pane_ParamLimits

0xb5e7,	// (0x00040ecb) grid_cmail_l_pane

0xb5f7,	// (0x00040edb) cell_cmail_l_pane_ParamLimits

0xb5f7,	// (0x00040edb) cell_cmail_l_pane

0xe458,	// (0x00043d3c) cell_cmail_l_pane_g1_ParamLimits

0xe458,	// (0x00043d3c) cell_cmail_l_pane_g1

0xe464,	// (0x00043d48) cell_cmail_l_pane_t1_ParamLimits

0xe464,	// (0x00043d48) cell_cmail_l_pane_t1

0xe47a,	// (0x00043d5e) cell_cmail_l_pane_t2_ParamLimits

0xe47a,	// (0x00043d5e) cell_cmail_l_pane_t2

0x0001,

0xfbfe,	// (0x000454e2) cell_cmail_l_pane_t_ParamLimits

0xfbfe,	// (0x000454e2) cell_cmail_l_pane_t

0x0dad,	// (0x00036691) grid_highlight_pane_cp018_ParamLimits

0x0dad,	// (0x00036691) grid_highlight_pane_cp018

0x571d,	// (0x0003b001) main2_pane_ParamLimits

0x571d,	// (0x0003b001) main2_pane

0x0ff4,	// (0x000368d8) popup_sp_fs_action_menu_bg_pane_g1

0x0ffc,	// (0x000368e0) popup_sp_fs_action_menu_bg_pane_g2

0x1004,	// (0x000368e8) popup_sp_fs_action_menu_bg_pane_g3

0x100c,	// (0x000368f0) popup_sp_fs_action_menu_bg_pane_g4

0x1014,	// (0x000368f8) popup_sp_fs_action_menu_bg_pane_g5

0x101c,	// (0x00036900) popup_sp_fs_action_menu_bg_pane_g6

0x1024,	// (0x00036908) popup_sp_fs_action_menu_bg_pane_g7

0x102c,	// (0x00036910) popup_sp_fs_action_menu_bg_pane_g8

0x1034,	// (0x00036918) popup_sp_fs_action_menu_bg_pane_g9

0x103c,	// (0x00036920) popup_sp_fs_action_menu_bg_pane_g10

0x103c,	// (0x00036920) popup_sp_fs_action_menu_bg_pane_g11

0x000a,

0xf100,	// (0x000449e4) popup_sp_fs_action_menu_bg_pane_g

0x0ec0,	// (0x000367a4) list_medium_line_x2_t3_g3_g1_ParamLimits

0x0ec0,	// (0x000367a4) list_medium_line_x2_t3_g3_g1

0x0ec0,	// (0x000367a4) list_medium_line_x2_t3_g3_g2_ParamLimits

0x0ec0,	// (0x000367a4) list_medium_line_x2_t3_g3_g2

0x0ec0,	// (0x000367a4) list_medium_line_x2_t3_g3_g3_ParamLimits

0x0ec0,	// (0x000367a4) list_medium_line_x2_t3_g3_g3

0x0002,

0xf1ae,	// (0x00044a92) list_medium_line_x2_t3_g3_g_ParamLimits

0xf1ae,	// (0x00044a92) list_medium_line_x2_t3_g3_g

0x0f08,	// (0x000367ec) list_medium_line_x2_t3_g3_t1_ParamLimits

0x0f08,	// (0x000367ec) list_medium_line_x2_t3_g3_t1

0x0f08,	// (0x000367ec) list_medium_line_x2_t3_g3_t2_ParamLimits

0x0f08,	// (0x000367ec) list_medium_line_x2_t3_g3_t2

0x0f08,	// (0x000367ec) list_medium_line_x2_t3_g3_t3_ParamLimits

0x0f08,	// (0x000367ec) list_medium_line_x2_t3_g3_t3

0x0002,

0xf1b5,	// (0x00044a99) list_medium_line_x2_t3_g3_t_ParamLimits

0xf1b5,	// (0x00044a99) list_medium_line_x2_t3_g3_t

0x0ec0,	// (0x000367a4) list_medium_line_x2_t3_g2_g1_ParamLimits

0x0ec0,	// (0x000367a4) list_medium_line_x2_t3_g2_g1

0x0ec0,	// (0x000367a4) list_medium_line_x2_t3_g2_g2_ParamLimits

0x0ec0,	// (0x000367a4) list_medium_line_x2_t3_g2_g2

0x0001,

0xf1bc,	// (0x00044aa0) list_medium_line_x2_t3_g2_g_ParamLimits

0xf1bc,	// (0x00044aa0) list_medium_line_x2_t3_g2_g

0x0f08,	// (0x000367ec) list_medium_line_x2_t3_g2_t1_ParamLimits

0x0f08,	// (0x000367ec) list_medium_line_x2_t3_g2_t1

0x0f08,	// (0x000367ec) list_medium_line_x2_t3_g2_t2_ParamLimits

0x0f08,	// (0x000367ec) list_medium_line_x2_t3_g2_t2

0x0f08,	// (0x000367ec) list_medium_line_x2_t3_g2_t3_ParamLimits

0x0f08,	// (0x000367ec) list_medium_line_x2_t3_g2_t3

0x0002,

0xf1b5,	// (0x00044a99) list_medium_line_x2_t3_g2_t_ParamLimits

0xf1b5,	// (0x00044a99) list_medium_line_x2_t3_g2_t

0x0ec0,	// (0x000367a4) list_medium_line_x2_t4_g4_g1_ParamLimits

0x0ec0,	// (0x000367a4) list_medium_line_x2_t4_g4_g1

0x0ec0,	// (0x000367a4) list_medium_line_x2_t4_g4_g2_ParamLimits

0x0ec0,	// (0x000367a4) list_medium_line_x2_t4_g4_g2

0x0ec0,	// (0x000367a4) list_medium_line_x2_t4_g4_g3_ParamLimits

0x0ec0,	// (0x000367a4) list_medium_line_x2_t4_g4_g3

0x0ec0,	// (0x000367a4) list_medium_line_x2_t4_g4_g4_ParamLimits

0x0ec0,	// (0x000367a4) list_medium_line_x2_t4_g4_g4

0x0003,

0xf1c1,	// (0x00044aa5) list_medium_line_x2_t4_g4_g_ParamLimits

0xf1c1,	// (0x00044aa5) list_medium_line_x2_t4_g4_g

0x0f08,	// (0x000367ec) list_medium_line_x2_t4_g4_t1_ParamLimits

0x0f08,	// (0x000367ec) list_medium_line_x2_t4_g4_t1

0x0f08,	// (0x000367ec) list_medium_line_x2_t4_g4_t2_ParamLimits

0x0f08,	// (0x000367ec) list_medium_line_x2_t4_g4_t2

0x0f08,	// (0x000367ec) list_medium_line_x2_t4_g4_t3_ParamLimits

0x0f08,	// (0x000367ec) list_medium_line_x2_t4_g4_t3

0x0f08,	// (0x000367ec) list_medium_line_x2_t4_g4_t4_ParamLimits

0x0f08,	// (0x000367ec) list_medium_line_x2_t4_g4_t4

0x0003,

0xf1ca,	// (0x00044aae) list_medium_line_x2_t4_g4_t_ParamLimits

0xf1ca,	// (0x00044aae) list_medium_line_x2_t4_g4_t

0x0ec0,	// (0x000367a4) list_medium_line_x2_t2_g4_g1_ParamLimits

0x0ec0,	// (0x000367a4) list_medium_line_x2_t2_g4_g1

0x0ec0,	// (0x000367a4) list_medium_line_x2_t2_g4_g2_ParamLimits

0x0ec0,	// (0x000367a4) list_medium_line_x2_t2_g4_g2

0x0ec0,	// (0x000367a4) list_medium_line_x2_t2_g4_g3_ParamLimits

0x0ec0,	// (0x000367a4) list_medium_line_x2_t2_g4_g3

0x0ec0,	// (0x000367a4) list_medium_line_x2_t2_g4_g4_ParamLimits

0x0ec0,	// (0x000367a4) list_medium_line_x2_t2_g4_g4

0x0003,

0xf1c1,	// (0x00044aa5) list_medium_line_x2_t2_g4_g_ParamLimits

0xf1c1,	// (0x00044aa5) list_medium_line_x2_t2_g4_g

0x0f08,	// (0x000367ec) list_medium_line_x2_t2_g4_t1_ParamLimits

0x0f08,	// (0x000367ec) list_medium_line_x2_t2_g4_t1

0x0f08,	// (0x000367ec) list_medium_line_x2_t2_g4_t2_ParamLimits

0x0f08,	// (0x000367ec) list_medium_line_x2_t2_g4_t2

0x0001,

0xf231,	// (0x00044b15) list_medium_line_x2_t2_g4_t_ParamLimits

0xf231,	// (0x00044b15) list_medium_line_x2_t2_g4_t

0x0ec0,	// (0x000367a4) list_medium_line_x2_t2_g3_g1_ParamLimits

0x0ec0,	// (0x000367a4) list_medium_line_x2_t2_g3_g1

0x0ec0,	// (0x000367a4) list_medium_line_x2_t2_g3_g2_ParamLimits

0x0ec0,	// (0x000367a4) list_medium_line_x2_t2_g3_g2

0x0ec0,	// (0x000367a4) list_medium_line_x2_t2_g3_g3_ParamLimits

0x0ec0,	// (0x000367a4) list_medium_line_x2_t2_g3_g3

0x0002,

0xf1ae,	// (0x00044a92) list_medium_line_x2_t2_g3_g_ParamLimits

0xf1ae,	// (0x00044a92) list_medium_line_x2_t2_g3_g

0x0f08,	// (0x000367ec) list_medium_line_x2_t2_g3_t1_ParamLimits

0x0f08,	// (0x000367ec) list_medium_line_x2_t2_g3_t1

0x0f08,	// (0x000367ec) list_medium_line_x2_t2_g3_t2_ParamLimits

0x0f08,	// (0x000367ec) list_medium_line_x2_t2_g3_t2

0x0001,

0xf231,	// (0x00044b15) list_medium_line_x2_t2_g3_t_ParamLimits

0xf231,	// (0x00044b15) list_medium_line_x2_t2_g3_t

0x74e1,	// (0x0003cdc5) main_sp_fs_list_pane_ParamLimits

0x74e1,	// (0x0003cdc5) main_sp_fs_list_pane

0x74ed,	// (0x0003cdd1) sp_fs_scroll_pane_ParamLimits

0x74ed,	// (0x0003cdd1) sp_fs_scroll_pane

0x1660,	// (0x00036f44) list_medium_line_x2_t3_t1

0x1660,	// (0x00036f44) list_medium_line_x2_t3_t2

0x1660,	// (0x00036f44) list_medium_line_x2_t3_t3

0x0002,

0xf27c,	// (0x00044b60) list_medium_line_x2_t3_t

0x1660,	// (0x00036f44) list_medium_line_x3_t4_t1

0x1660,	// (0x00036f44) list_medium_line_x3_t4_t2

0x1660,	// (0x00036f44) list_medium_line_x3_t4_t3

0x1660,	// (0x00036f44) list_medium_line_x3_t4_t4

0x0003,

0xf283,	// (0x00044b67) list_medium_line_x3_t4_t

0x1660,	// (0x00036f44) list_medium_line_x4_t5_t1

0x1660,	// (0x00036f44) list_medium_line_x4_t5_t2

0x1660,	// (0x00036f44) list_medium_line_x4_t5_t3

0x1660,	// (0x00036f44) list_medium_line_x4_t5_t4

0x1660,	// (0x00036f44) list_medium_line_x4_t5_t5

0x0004,

0xf28c,	// (0x00044b70) list_medium_line_x4_t5_t

0x0ec0,	// (0x000367a4) list_medium_line_t4_g4_g1_ParamLimits

0x0ec0,	// (0x000367a4) list_medium_line_t4_g4_g1

0x0ec0,	// (0x000367a4) list_medium_line_t4_g4_g2_ParamLimits

0x0ec0,	// (0x000367a4) list_medium_line_t4_g4_g2

0x0ec0,	// (0x000367a4) list_medium_line_t4_g4_g3_ParamLimits

0x0ec0,	// (0x000367a4) list_medium_line_t4_g4_g3

0x0ec0,	// (0x000367a4) list_medium_line_t4_g4_g4_ParamLimits

0x0ec0,	// (0x000367a4) list_medium_line_t4_g4_g4

0x0003,

0xf1c1,	// (0x00044aa5) list_medium_line_t4_g4_g_ParamLimits

0xf1c1,	// (0x00044aa5) list_medium_line_t4_g4_g

0x0f08,	// (0x000367ec) list_medium_line_t4_g4_t1_ParamLimits

0x0f08,	// (0x000367ec) list_medium_line_t4_g4_t1

0x0f08,	// (0x000367ec) list_medium_line_t4_g4_t2_ParamLimits

0x0f08,	// (0x000367ec) list_medium_line_t4_g4_t2

0x0f08,	// (0x000367ec) list_medium_line_t4_g4_t3_ParamLimits

0x0f08,	// (0x000367ec) list_medium_line_t4_g4_t3

0x0f08,	// (0x000367ec) list_medium_line_t4_g4_t4_ParamLimits

0x0f08,	// (0x000367ec) list_medium_line_t4_g4_t4

0x0003,

0xf1ca,	// (0x00044aae) list_medium_line_t4_g4_t_ParamLimits

0xf1ca,	// (0x00044aae) list_medium_line_t4_g4_t

0x75e0,	// (0x0003cec4) chi_dic_find_pane_g1

0x81e8,	// (0x0003dacc) main_tport_pane

0x1660,	// (0x00036f44) list_medium_line_plain_t1

0x0ec0,	// (0x000367a4) list_medium_line_t2_g2_g1_ParamLimits

0x0ec0,	// (0x000367a4) list_medium_line_t2_g2_g1

0x0ec0,	// (0x000367a4) list_medium_line_t2_g2_g2_ParamLimits

0x0ec0,	// (0x000367a4) list_medium_line_t2_g2_g2

0x0001,

0xf1bc,	// (0x00044aa0) list_medium_line_t2_g2_g_ParamLimits

0xf1bc,	// (0x00044aa0) list_medium_line_t2_g2_g

0x0f08,	// (0x000367ec) list_medium_line_t2_g2_t1_ParamLimits

0x0f08,	// (0x000367ec) list_medium_line_t2_g2_t1

0x0f08,	// (0x000367ec) list_medium_line_t2_g2_t2_ParamLimits

0x0f08,	// (0x000367ec) list_medium_line_t2_g2_t2

0x0001,

0xf231,	// (0x00044b15) list_medium_line_t2_g2_t_ParamLimits

0xf231,	// (0x00044b15) list_medium_line_t2_g2_t

0x4da7,	// (0x0003a68b) aid_sp_fs_list_icon_a_sm

0x4daf,	// (0x0003a693) aid_sp_fs_list_icon_d

0x4db7,	// (0x0003a69b) aid_sp_fs_text_primary

0xd9c6,	// (0x000432aa) aid_sp_fs_text_secondary

0x07bf,	// (0x000360a3) list_medium_line

0x07bf,	// (0x000360a3) list_medium_line_g2

0x07bf,	// (0x000360a3) list_medium_line_g3

0x07bf,	// (0x000360a3) list_medium_line_plain

0x07bf,	// (0x000360a3) list_medium_line_plain_t2

0x07bf,	// (0x000360a3) list_medium_line_plain_t3

0x07bf,	// (0x000360a3) list_medium_line_right_icon

0x07bf,	// (0x000360a3) list_medium_line_right_iconx2

0x07bf,	// (0x000360a3) list_medium_line_t2

0x07bf,	// (0x000360a3) list_medium_line_t2_g2

0x07bf,	// (0x000360a3) list_medium_line_t2_g3

0x07bf,	// (0x000360a3) list_medium_line_t2_right_icon

0x07bf,	// (0x000360a3) list_medium_line_t2_right_iconx2

0x07bf,	// (0x000360a3) list_medium_line_t3

0x07bf,	// (0x000360a3) list_medium_line_t3_g2

0x07bf,	// (0x000360a3) list_medium_line_t3_g3

0x07bf,	// (0x000360a3) list_medium_line_t3_right_iconx2

0x07bf,	// (0x000360a3) list_medium_line_t4_g4

0x07bf,	// (0x000360a3) list_medium_line_x2

0x07bf,	// (0x000360a3) list_medium_line_x2_t2_g2

0x07bf,	// (0x000360a3) list_medium_line_x2_t2_g3

0x07bf,	// (0x000360a3) list_medium_line_x2_t2_g4

0x07bf,	// (0x000360a3) list_medium_line_x2_t3

0x07bf,	// (0x000360a3) list_medium_line_x2_t3_g2

0x07bf,	// (0x000360a3) list_medium_line_x2_t3_g3

0x07bf,	// (0x000360a3) list_medium_line_x2_t3_g4

0x07bf,	// (0x000360a3) list_medium_line_x2_t4_g2

0x07bf,	// (0x000360a3) list_medium_line_x2_t4_g4

0x07bf,	// (0x000360a3) list_medium_line_x3

0x07bf,	// (0x000360a3) list_medium_line_x3_t4

0x07bf,	// (0x000360a3) list_medium_line_x3_t4_g4

0x07bf,	// (0x000360a3) list_medium_line_x4_t4

0x07bf,	// (0x000360a3) list_medium_line_x4_t4_g7

0x07bf,	// (0x000360a3) list_medium_line_x4_t5

0x4dc0,	// (0x0003a6a4) list_single_fs_dyc_pane_ParamLimits

0x4dc0,	// (0x0003a6a4) list_single_fs_dyc_pane

0x0ec0,	// (0x000367a4) list_medium_line_x4_t4_g7_g1_ParamLimits

0x0ec0,	// (0x000367a4) list_medium_line_x4_t4_g7_g1

0x0ec0,	// (0x000367a4) list_medium_line_x4_t4_g7_g2_ParamLimits

0x0ec0,	// (0x000367a4) list_medium_line_x4_t4_g7_g2

0x0ec0,	// (0x000367a4) list_medium_line_x4_t4_g7_g3_ParamLimits

0x0ec0,	// (0x000367a4) list_medium_line_x4_t4_g7_g3

0x0ec0,	// (0x000367a4) list_medium_line_x4_t4_g7_g4_ParamLimits

0x0ec0,	// (0x000367a4) list_medium_line_x4_t4_g7_g4

0x0ec0,	// (0x000367a4) list_medium_line_x4_t4_g7_g5_ParamLimits

0x0ec0,	// (0x000367a4) list_medium_line_x4_t4_g7_g5

0x0ec0,	// (0x000367a4) list_medium_line_x4_t4_g7_g6_ParamLimits

0x0ec0,	// (0x000367a4) list_medium_line_x4_t4_g7_g6

0x0ece,	// (0x000367b2) list_medium_line_x4_t4_g7_g7_ParamLimits

0x0ece,	// (0x000367b2) list_medium_line_x4_t4_g7_g7

0x0006,

0xfb06,	// (0x000453ea) list_medium_line_x4_t4_g7_g_ParamLimits

0xfb06,	// (0x000453ea) list_medium_line_x4_t4_g7_g

0x0f08,	// (0x000367ec) list_medium_line_x4_t4_g7_t1_ParamLimits

0x0f08,	// (0x000367ec) list_medium_line_x4_t4_g7_t1

0x0f08,	// (0x000367ec) list_medium_line_x4_t4_g7_t2_ParamLimits

0x0f08,	// (0x000367ec) list_medium_line_x4_t4_g7_t2

0x0f08,	// (0x000367ec) list_medium_line_x4_t4_g7_t3_ParamLimits

0x0f08,	// (0x000367ec) list_medium_line_x4_t4_g7_t3

0x0f1c,	// (0x00036800) list_medium_line_x4_t4_g7_t4_ParamLimits

0x0f1c,	// (0x00036800) list_medium_line_x4_t4_g7_t4

0x0f1c,	// (0x00036800) list_medium_line_x4_t4_g7_t5_ParamLimits

0x0f1c,	// (0x00036800) list_medium_line_x4_t4_g7_t5

0x0004,

0xfb15,	// (0x000453f9) list_medium_line_x4_t4_g7_t_ParamLimits

0xfb15,	// (0x000453f9) list_medium_line_x4_t4_g7_t

0x4ddc,	// (0x0003a6c0) list_single_dyc_row_pane_ParamLimits

0x4ddc,	// (0x0003a6c0) list_single_dyc_row_pane

0xb589,	// (0x00040e6d) call5_gesture_pane_ParamLimits

0xb589,	// (0x00040e6d) call5_gesture_pane

0xb5bd,	// (0x00040ea1) call5_windows_pane_ParamLimits

0xb5bd,	// (0x00040ea1) call5_windows_pane

0xb610,	// (0x00040ef4) call5_swipe_1_pane_cp_ParamLimits

0xb610,	// (0x00040ef4) call5_swipe_1_pane_cp

0xb61c,	// (0x00040f00) call5_swipe_2_pane_cp_ParamLimits

0xb61c,	// (0x00040f00) call5_swipe_2_pane_cp

0x1125,	// (0x00036a09) call5_image_pane_cp

0xb628,	// (0x00040f0c) popup_call5_audio_first_window_cp_ParamLimits

0xb628,	// (0x00040f0c) popup_call5_audio_first_window_cp

0xe497,	// (0x00043d7b) call5_swipe_1_pane_g1_cp_ParamLimits

0xe497,	// (0x00043d7b) call5_swipe_1_pane_g1_cp

0xe4a4,	// (0x00043d88) call5_swipe_1_pane_g2_cp

0xe4ac,	// (0x00043d90) call5_swipe_1_pane_t1_cp_ParamLimits

0xe4ac,	// (0x00043d90) call5_swipe_1_pane_t1_cp

0xe497,	// (0x00043d7b) call5_swipe_2_pane_g1_cp_ParamLimits

0xe497,	// (0x00043d7b) call5_swipe_2_pane_g1_cp

0xe4c1,	// (0x00043da5) call5_swipe_2_pane_g2_cp

0xe4c9,	// (0x00043dad) call5_swipe_2_pane_t1_cp_ParamLimits

0xe4c9,	// (0x00043dad) call5_swipe_2_pane_t1_cp

0x0dad,	// (0x00036691) main_sp_fs_email_pane

0xe4de,	// (0x00043dc2) main_sp_fs_listscroll_pane_te

0x4e73,	// (0x0003a757) popup_sp_fs_action_menu_pane_ParamLimits

0x4e73,	// (0x0003a757) popup_sp_fs_action_menu_pane

0x0efe,	// (0x000367e2) bg_sp_fs_ctrlbar_pane_g1

0xe4e7,	// (0x00043dcb) bg_sp_fs_ctrlbar_ddmenu_pane_g1

0xe4f0,	// (0x00043dd4) bg_sp_fs_ctrlbar_ddmenu_pane_g2

0x2e04,	// (0x000386e8) bg_sp_fs_ctrlbar_ddmenu_pane_g3

0x0efe,	// (0x000367e2) bg_sp_fs_ctrlbar_ddmenu_pane_g4

0x0003,

0xfc03,	// (0x000454e7) bg_sp_fs_ctrlbar_ddmenu_pane_g

0x2ffc,	// (0x000388e0) bg_sp_fs_ctrlbar_ddmenu_pane_ParamLimits

0x2ffc,	// (0x000388e0) bg_sp_fs_ctrlbar_ddmenu_pane

0xe4f9,	// (0x00043ddd) main_sp_fs_ctrlbar_ddmenu_pane_g1_ParamLimits

0xe4f9,	// (0x00043ddd) main_sp_fs_ctrlbar_ddmenu_pane_g1

0xe505,	// (0x00043de9) main_sp_fs_ctrlbar_ddmenu_pane_g2_ParamLimits

0xe505,	// (0x00043de9) main_sp_fs_ctrlbar_ddmenu_pane_g2

0x0001,

0xfc0c,	// (0x000454f0) main_sp_fs_ctrlbar_ddmenu_pane_g_ParamLimits

0xfc0c,	// (0x000454f0) main_sp_fs_ctrlbar_ddmenu_pane_g

0xe511,	// (0x00043df5) main_sp_fs_ctrlbar_ddmenu_pane_t1_ParamLimits

0xe511,	// (0x00043df5) main_sp_fs_ctrlbar_ddmenu_pane_t1

0x0efe,	// (0x000367e2) list_medium_line_t2_right_icon_g1

0x1660,	// (0x00036f44) list_medium_line_t2_right_icon_t1

0x1660,	// (0x00036f44) list_medium_line_t2_right_icon_t2

0x0001,

0xfc11,	// (0x000454f5) list_medium_line_t2_right_icon_t

0x1bfd,	// (0x000374e1) bg_sp_fs_ctrlbar_pane_ParamLimits

0x1bfd,	// (0x000374e1) bg_sp_fs_ctrlbar_pane

0xb679,	// (0x00040f5d) main_sp_fs_ctrlbar_button_pane_cp01

0xb681,	// (0x00040f65) main_sp_fs_ctrlbar_ddmenu_pane

0xe563,	// (0x00043e47) main_sp_fs_ctrlbar_pane_g1

0xe56f,	// (0x00043e53) main_sp_fs_ctrlbar_pane_g2

0x0003,

0xfc16,	// (0x000454fa) main_sp_fs_ctrlbar_pane_g

0xb6bd,	// (0x00040fa1) main_sp_fs_ctrlbar_pane_t1

0xb6f8,	// (0x00040fdc) main_sp_fs_ctrlbar_pane

0xb70e,	// (0x00040ff2) main_sp_fs_listscroll_pane_te_cp01

0x4eb5,	// (0x0003a799) popup_sp_fs_action_menu_pane_cp01_ParamLimits

0x4eb5,	// (0x0003a799) popup_sp_fs_action_menu_pane_cp01

0x0dad,	// (0x00036691) bg_sp_fs_highlight_list_pane_cp01_ParamLimits

0x0dad,	// (0x00036691) bg_sp_fs_highlight_list_pane_cp01

0x4ed5,	// (0x0003a7b9) sp_fs_action_menu_list_gene_pane_g1_ParamLimits

0x4ed5,	// (0x0003a7b9) sp_fs_action_menu_list_gene_pane_g1

0xe596,	// (0x00043e7a) sp_fs_action_menu_list_gene_pane_g2_ParamLimits

0xe596,	// (0x00043e7a) sp_fs_action_menu_list_gene_pane_g2

0x0001,

0xfc24,	// (0x00045508) sp_fs_action_menu_list_gene_pane_g_ParamLimits

0xfc24,	// (0x00045508) sp_fs_action_menu_list_gene_pane_g

0x4ee4,	// (0x0003a7c8) sp_fs_action_menu_list_gene_pane_t1_ParamLimits

0x4ee4,	// (0x0003a7c8) sp_fs_action_menu_list_gene_pane_t1

0x4efc,	// (0x0003a7e0) sp_fs_action_menu_list_gene_pane_ParamLimits

0x4efc,	// (0x0003a7e0) sp_fs_action_menu_list_gene_pane

0xe5a3,	// (0x00043e87) popup_sp_fs_action_menu_bg_pane_ParamLimits

0xe5a3,	// (0x00043e87) popup_sp_fs_action_menu_bg_pane

0x4f1b,	// (0x0003a7ff) sp_fs_action_menu_list_pane_ParamLimits

0x4f1b,	// (0x0003a7ff) sp_fs_action_menu_list_pane

0xe5b1,	// (0x00043e95) sp_fs_scroll_pane_cp01_ParamLimits

0xe5b1,	// (0x00043e95) sp_fs_scroll_pane_cp01

0x1660,	// (0x00036f44) list_medium_line_plain_t2_t1

0x1660,	// (0x00036f44) list_medium_line_plain_t2_t2

0x0001,

0xfc11,	// (0x000454f5) list_medium_line_plain_t2_t

0x1660,	// (0x00036f44) list_medium_line_plain_t3_t1

0x1660,	// (0x00036f44) list_medium_line_plain_t3_t2

0x1660,	// (0x00036f44) list_medium_line_plain_t3_t3

0x0002,

0xf27c,	// (0x00044b60) list_medium_line_plain_t3_t

0x0ec0,	// (0x000367a4) list_medium_line_x2_t2_g2_g1_ParamLimits

0x0ec0,	// (0x000367a4) list_medium_line_x2_t2_g2_g1

0x0ec0,	// (0x000367a4) list_medium_line_x2_t2_g2_g2_ParamLimits

0x0ec0,	// (0x000367a4) list_medium_line_x2_t2_g2_g2

0x0001,

0xf1bc,	// (0x00044aa0) list_medium_line_x2_t2_g2_g_ParamLimits

0xf1bc,	// (0x00044aa0) list_medium_line_x2_t2_g2_g

0x0f08,	// (0x000367ec) list_medium_line_x2_t2_g2_t1_ParamLimits

0x0f08,	// (0x000367ec) list_medium_line_x2_t2_g2_t1

0x0f08,	// (0x000367ec) list_medium_line_x2_t2_g2_t2_ParamLimits

0x0f08,	// (0x000367ec) list_medium_line_x2_t2_g2_t2

0x0001,

0xf231,	// (0x00044b15) list_medium_line_x2_t2_g2_t_ParamLimits

0xf231,	// (0x00044b15) list_medium_line_x2_t2_g2_t

0x0ec0,	// (0x000367a4) list_medium_line_x2_t4_g2_g1_ParamLimits

0x0ec0,	// (0x000367a4) list_medium_line_x2_t4_g2_g1

0x0ec0,	// (0x000367a4) list_medium_line_x2_t4_g2_g2_ParamLimits

0x0ec0,	// (0x000367a4) list_medium_line_x2_t4_g2_g2

0x0001,

0xf1bc,	// (0x00044aa0) list_medium_line_x2_t4_g2_g_ParamLimits

0xf1bc,	// (0x00044aa0) list_medium_line_x2_t4_g2_g

0x0f08,	// (0x000367ec) list_medium_line_x2_t4_g2_t1_ParamLimits

0x0f08,	// (0x000367ec) list_medium_line_x2_t4_g2_t1

0x0f08,	// (0x000367ec) list_medium_line_x2_t4_g2_t2_ParamLimits

0x0f08,	// (0x000367ec) list_medium_line_x2_t4_g2_t2

0x0f08,	// (0x000367ec) list_medium_line_x2_t4_g2_t3_ParamLimits

0x0f08,	// (0x000367ec) list_medium_line_x2_t4_g2_t3

0x0f08,	// (0x000367ec) list_medium_line_x2_t4_g2_t4_ParamLimits

0x0f08,	// (0x000367ec) list_medium_line_x2_t4_g2_t4

0x0003,

0xf1ca,	// (0x00044aae) list_medium_line_x2_t4_g2_t_ParamLimits

0xf1ca,	// (0x00044aae) list_medium_line_x2_t4_g2_t

0x0efe,	// (0x000367e2) list_medium_line_t3_right_iconx2_g1

0x0efe,	// (0x000367e2) list_medium_line_t3_right_iconx2_g2

0x0efe,	// (0x000367e2) list_medium_line_t3_right_iconx2_g3

0x0002,

0xf398,	// (0x00044c7c) list_medium_line_t3_right_iconx2_g

0x1660,	// (0x00036f44) list_medium_line_t3_right_iconx2_t1

0x1660,	// (0x00036f44) list_medium_line_t3_right_iconx2_t2

0x0001,

0xfc11,	// (0x000454f5) list_medium_line_t3_right_iconx2_t

0x0ec0,	// (0x000367a4) list_medium_line_x3_t4_g4_g1_ParamLimits

0x0ec0,	// (0x000367a4) list_medium_line_x3_t4_g4_g1

0x0ec0,	// (0x000367a4) list_medium_line_x3_t4_g4_g2_ParamLimits

0x0ec0,	// (0x000367a4) list_medium_line_x3_t4_g4_g2

0x0ec0,	// (0x000367a4) list_medium_line_x3_t4_g4_g3_ParamLimits

0x0ec0,	// (0x000367a4) list_medium_line_x3_t4_g4_g3

0x0ec0,	// (0x000367a4) list_medium_line_x3_t4_g4_g4_ParamLimits

0x0ec0,	// (0x000367a4) list_medium_line_x3_t4_g4_g4

0x0003,

0xf1c1,	// (0x00044aa5) list_medium_line_x3_t4_g4_g_ParamLimits

0xf1c1,	// (0x00044aa5) list_medium_line_x3_t4_g4_g

0x0f08,	// (0x000367ec) list_medium_line_x3_t4_g4_t1_ParamLimits

0x0f08,	// (0x000367ec) list_medium_line_x3_t4_g4_t1

0x0f08,	// (0x000367ec) list_medium_line_x3_t4_g4_t2_ParamLimits

0x0f08,	// (0x000367ec) list_medium_line_x3_t4_g4_t2

0x0f08,	// (0x000367ec) list_medium_line_x3_t4_g4_t3_ParamLimits

0x0f08,	// (0x000367ec) list_medium_line_x3_t4_g4_t3

0x0f08,	// (0x000367ec) list_medium_line_x3_t4_g4_t4_ParamLimits

0x0f08,	// (0x000367ec) list_medium_line_x3_t4_g4_t4

0x0003,

0xf1ca,	// (0x00044aae) list_medium_line_x3_t4_g4_t_ParamLimits

0xf1ca,	// (0x00044aae) list_medium_line_x3_t4_g4_t

0x4f3b,	// (0x0003a81f) list_single_dyc_row_text_pane_t1_ParamLimits

0x4f3b,	// (0x0003a81f) list_single_dyc_row_text_pane_t1

0x4f72,	// (0x0003a856) list_single_dyc_row_text_pane_t2_ParamLimits

0x4f72,	// (0x0003a856) list_single_dyc_row_text_pane_t2

0x4fe8,	// (0x0003a8cc) list_single_dyc_row_text_pane_t3_ParamLimits

0x4fe8,	// (0x0003a8cc) list_single_dyc_row_text_pane_t3

0x0005,

0xfc29,	// (0x0004550d) list_single_dyc_row_text_pane_t_ParamLimits

0xfc29,	// (0x0004550d) list_single_dyc_row_text_pane_t

0x50b9,	// (0x0003a99d) list_single_dyc_row_pane_g1_ParamLimits

0x50b9,	// (0x0003a99d) list_single_dyc_row_pane_g1

0x50c5,	// (0x0003a9a9) list_single_dyc_row_pane_g2_ParamLimits

0x50c5,	// (0x0003a9a9) list_single_dyc_row_pane_g2

0x50d1,	// (0x0003a9b5) list_single_dyc_row_pane_g3_ParamLimits

0x50d1,	// (0x0003a9b5) list_single_dyc_row_pane_g3

0x50dd,	// (0x0003a9c1) list_single_dyc_row_pane_g4_ParamLimits

0x50dd,	// (0x0003a9c1) list_single_dyc_row_pane_g4

0x0003,

0xfc36,	// (0x0004551a) list_single_dyc_row_pane_g_ParamLimits

0xfc36,	// (0x0004551a) list_single_dyc_row_pane_g

0x50e9,	// (0x0003a9cd) list_single_dyc_row_text_pane_ParamLimits

0x50e9,	// (0x0003a9cd) list_single_dyc_row_text_pane

0x07bf,	// (0x000360a3) bg_sp_fs_scroll_pane

0xe5d7,	// (0x00043ebb) thumb_sp_fs_scroll_pane

0x0ec0,	// (0x000367a4) list_medium_line_g1_ParamLimits

0x0ec0,	// (0x000367a4) list_medium_line_g1

0x0f08,	// (0x000367ec) list_medium_line_t1_ParamLimits

0x0f08,	// (0x000367ec) list_medium_line_t1

0x0ec0,	// (0x000367a4) list_medium_line_x2_g1_ParamLimits

0x0ec0,	// (0x000367a4) list_medium_line_x2_g1

0x0ec0,	// (0x000367a4) list_medium_line_x2_g2_ParamLimits

0x0ec0,	// (0x000367a4) list_medium_line_x2_g2

0x0001,

0xf1bc,	// (0x00044aa0) list_medium_line_x2_g_ParamLimits

0xf1bc,	// (0x00044aa0) list_medium_line_x2_g

0x0f08,	// (0x000367ec) list_medium_line_x2_t1_ParamLimits

0x0f08,	// (0x000367ec) list_medium_line_x2_t1

0x0ec0,	// (0x000367a4) list_medium_line_x3_g1_ParamLimits

0x0ec0,	// (0x000367a4) list_medium_line_x3_g1

0xe5e0,	// (0x00043ec4) list_medium_line_x3_g2_ParamLimits

0xe5e0,	// (0x00043ec4) list_medium_line_x3_g2

0x0001,

0xfc3f,	// (0x00045523) list_medium_line_x3_g_ParamLimits

0xfc3f,	// (0x00045523) list_medium_line_x3_g

0xe5ee,	// (0x00043ed2) list_medium_line_x3_t1_ParamLimits

0xe5ee,	// (0x00043ed2) list_medium_line_x3_t1

0xe602,	// (0x00043ee6) thumb_sp_fs_scroll_pane_g1

0xe60b,	// (0x00043eef) thumb_sp_fs_scroll_pane_g2

0xe614,	// (0x00043ef8) thumb_sp_fs_scroll_pane_g3

0x0002,

0xfc44,	// (0x00045528) thumb_sp_fs_scroll_pane_g

0xe602,	// (0x00043ee6) bg_sp_fs_scroll_pane_g1

0xe60b,	// (0x00043eef) bg_sp_fs_scroll_pane_g2

0xe614,	// (0x00043ef8) bg_sp_fs_scroll_pane_g3

0x0002,

0xfc44,	// (0x00045528) bg_sp_fs_scroll_pane_g

0x0ec0,	// (0x000367a4) list_medium_line_x2_t3_g4_g1_ParamLimits

0x0ec0,	// (0x000367a4) list_medium_line_x2_t3_g4_g1

0x0ec0,	// (0x000367a4) list_medium_line_x2_t3_g4_g2_ParamLimits

0x0ec0,	// (0x000367a4) list_medium_line_x2_t3_g4_g2

0x0ec0,	// (0x000367a4) list_medium_line_x2_t3_g4_g3_ParamLimits

0x0ec0,	// (0x000367a4) list_medium_line_x2_t3_g4_g3

0x0ec0,	// (0x000367a4) list_medium_line_x2_t3_g4_g4_ParamLimits

0x0ec0,	// (0x000367a4) list_medium_line_x2_t3_g4_g4

0x0003,

0xf1c1,	// (0x00044aa5) list_medium_line_x2_t3_g4_g_ParamLimits

0xf1c1,	// (0x00044aa5) list_medium_line_x2_t3_g4_g

0x0f08,	// (0x000367ec) list_medium_line_x2_t3_g4_t1_ParamLimits

0x0f08,	// (0x000367ec) list_medium_line_x2_t3_g4_t1

0x0f08,	// (0x000367ec) list_medium_line_x2_t3_g4_t2_ParamLimits

0x0f08,	// (0x000367ec) list_medium_line_x2_t3_g4_t2

0x0f08,	// (0x000367ec) list_medium_line_x2_t3_g4_t3_ParamLimits

0x0f08,	// (0x000367ec) list_medium_line_x2_t3_g4_t3

0x0002,

0xf1b5,	// (0x00044a99) list_medium_line_x2_t3_g4_t_ParamLimits

0xf1b5,	// (0x00044a99) list_medium_line_x2_t3_g4_t

0x0ec0,	// (0x000367a4) list_medium_line_g2_g1_ParamLimits

0x0ec0,	// (0x000367a4) list_medium_line_g2_g1

0x0ec0,	// (0x000367a4) list_medium_line_g2_g2_ParamLimits

0x0ec0,	// (0x000367a4) list_medium_line_g2_g2

0x0001,

0xf1bc,	// (0x00044aa0) list_medium_line_g2_g_ParamLimits

0xf1bc,	// (0x00044aa0) list_medium_line_g2_g

0x0f08,	// (0x000367ec) list_medium_line_g2_t1_ParamLimits

0x0f08,	// (0x000367ec) list_medium_line_g2_t1

0x0ec0,	// (0x000367a4) list_medium_line_t3_g2_g1_ParamLimits

0x0ec0,	// (0x000367a4) list_medium_line_t3_g2_g1

0x0ec0,	// (0x000367a4) list_medium_line_t3_g2_g2_ParamLimits

0x0ec0,	// (0x000367a4) list_medium_line_t3_g2_g2

0x0001,

0xf1bc,	// (0x00044aa0) list_medium_line_t3_g2_g_ParamLimits

0xf1bc,	// (0x00044aa0) list_medium_line_t3_g2_g

0x0f08,	// (0x000367ec) list_medium_line_t3_g2_t1_ParamLimits

0x0f08,	// (0x000367ec) list_medium_line_t3_g2_t1

0x0f08,	// (0x000367ec) list_medium_line_t3_g2_t2_ParamLimits

0x0f08,	// (0x000367ec) list_medium_line_t3_g2_t2

0x0f08,	// (0x000367ec) list_medium_line_t3_g2_t3_ParamLimits

0x0f08,	// (0x000367ec) list_medium_line_t3_g2_t3

0x0002,

0xf1b5,	// (0x00044a99) list_medium_line_t3_g2_t_ParamLimits

0xf1b5,	// (0x00044a99) list_medium_line_t3_g2_t

0x0efe,	// (0x000367e2) list_medium_line_right_icon_g1

0x1660,	// (0x00036f44) list_medium_line_right_icon_t1

0x0ec0,	// (0x000367a4) list_medium_line_t2_g1_ParamLimits

0x0ec0,	// (0x000367a4) list_medium_line_t2_g1

0x0f08,	// (0x000367ec) list_medium_line_t2_t1_ParamLimits

0x0f08,	// (0x000367ec) list_medium_line_t2_t1

0x0f08,	// (0x000367ec) list_medium_line_t2_t2_ParamLimits

0x0f08,	// (0x000367ec) list_medium_line_t2_t2

0x0001,

0xf231,	// (0x00044b15) list_medium_line_t2_t_ParamLimits

0xf231,	// (0x00044b15) list_medium_line_t2_t

0x0ec0,	// (0x000367a4) list_medium_line_t3_g1_ParamLimits

0x0ec0,	// (0x000367a4) list_medium_line_t3_g1

0x0f08,	// (0x000367ec) list_medium_line_t3_t1_ParamLimits

0x0f08,	// (0x000367ec) list_medium_line_t3_t1

0x0f08,	// (0x000367ec) list_medium_line_t3_t2_ParamLimits

0x0f08,	// (0x000367ec) list_medium_line_t3_t2

0x0f08,	// (0x000367ec) list_medium_line_t3_t3_ParamLimits

0x0f08,	// (0x000367ec) list_medium_line_t3_t3

0x0002,

0xf1b5,	// (0x00044a99) list_medium_line_t3_t_ParamLimits

0xf1b5,	// (0x00044a99) list_medium_line_t3_t

0x0ec0,	// (0x000367a4) list_medium_line_g3_g1_ParamLimits

0x0ec0,	// (0x000367a4) list_medium_line_g3_g1

0x0ec0,	// (0x000367a4) list_medium_line_g3_g2_ParamLimits

0x0ec0,	// (0x000367a4) list_medium_line_g3_g2

0x0ec0,	// (0x000367a4) list_medium_line_g3_g3_ParamLimits

0x0ec0,	// (0x000367a4) list_medium_line_g3_g3

0x0002,

0xf1ae,	// (0x00044a92) list_medium_line_g3_g_ParamLimits

0xf1ae,	// (0x00044a92) list_medium_line_g3_g

0x0f08,	// (0x000367ec) list_medium_line_g3_t1_ParamLimits

0x0f08,	// (0x000367ec) list_medium_line_g3_t1

0x0ec0,	// (0x000367a4) list_medium_line_t2_g3_g1_ParamLimits

0x0ec0,	// (0x000367a4) list_medium_line_t2_g3_g1

0x0ec0,	// (0x000367a4) list_medium_line_t2_g3_g2_ParamLimits

0x0ec0,	// (0x000367a4) list_medium_line_t2_g3_g2

0x0ec0,	// (0x000367a4) list_medium_line_t2_g3_g3_ParamLimits

0x0ec0,	// (0x000367a4) list_medium_line_t2_g3_g3

0x0002,

0xf1ae,	// (0x00044a92) list_medium_line_t2_g3_g_ParamLimits

0xf1ae,	// (0x00044a92) list_medium_line_t2_g3_g

0x0f08,	// (0x000367ec) list_medium_line_t2_g3_t1_ParamLimits

0x0f08,	// (0x000367ec) list_medium_line_t2_g3_t1

0x0f08,	// (0x000367ec) list_medium_line_t2_g3_t2_ParamLimits

0x0f08,	// (0x000367ec) list_medium_line_t2_g3_t2

0x0001,

0xf231,	// (0x00044b15) list_medium_line_t2_g3_t_ParamLimits

0xf231,	// (0x00044b15) list_medium_line_t2_g3_t

0x0ec0,	// (0x000367a4) list_medium_line_t3_g3_g1_ParamLimits

0x0ec0,	// (0x000367a4) list_medium_line_t3_g3_g1

0x0ec0,	// (0x000367a4) list_medium_line_t3_g3_g2_ParamLimits

0x0ec0,	// (0x000367a4) list_medium_line_t3_g3_g2

0x0ec0,	// (0x000367a4) list_medium_line_t3_g3_g3_ParamLimits

0x0ec0,	// (0x000367a4) list_medium_line_t3_g3_g3

0x0002,

0xf1ae,	// (0x00044a92) list_medium_line_t3_g3_g_ParamLimits

0xf1ae,	// (0x00044a92) list_medium_line_t3_g3_g

0x0f08,	// (0x000367ec) list_medium_line_t3_g3_t1_ParamLimits

0x0f08,	// (0x000367ec) list_medium_line_t3_g3_t1

0x0f08,	// (0x000367ec) list_medium_line_t3_g3_t2_ParamLimits

0x0f08,	// (0x000367ec) list_medium_line_t3_g3_t2

0x0f08,	// (0x000367ec) list_medium_line_t3_g3_t3_ParamLimits

0x0f08,	// (0x000367ec) list_medium_line_t3_g3_t3

0x0002,

0xf1b5,	// (0x00044a99) list_medium_line_t3_g3_t_ParamLimits

0xf1b5,	// (0x00044a99) list_medium_line_t3_g3_t

0x0efe,	// (0x000367e2) list_medium_line_right_iconx2_g1

0x0efe,	// (0x000367e2) list_medium_line_right_iconx2_g2

0x0001,

0xf0af,	// (0x00044993) list_medium_line_right_iconx2_g

0x1660,	// (0x00036f44) list_medium_line_right_iconx2_t1

0x0efe,	// (0x000367e2) list_medium_line_t2_right_iconx2_g1

0x0efe,	// (0x000367e2) list_medium_line_t2_right_iconx2_g2

0x0001,

0xf0af,	// (0x00044993) list_medium_line_t2_right_iconx2_g

0x1660,	// (0x00036f44) list_medium_line_t2_right_iconx2_t1

0x1660,	// (0x00036f44) list_medium_line_t2_right_iconx2_t2

0x0001,

0xfc11,	// (0x000454f5) list_medium_line_t2_right_iconx2_t

0x1660,	// (0x00036f44) list_medium_line_x4_t4_t1

0x1660,	// (0x00036f44) list_medium_line_x4_t4_t2

0x1660,	// (0x00036f44) list_medium_line_x4_t4_t3

0x1660,	// (0x00036f44) list_medium_line_x4_t4_t4

0x0003,

0xf283,	// (0x00044b67) list_medium_line_x4_t4_t

0xb753,	// (0x00041037) tport_appsw_pane_ParamLimits

0xb753,	// (0x00041037) tport_appsw_pane

0xb761,	// (0x00041045) tport_contact_pane_ParamLimits

0xb761,	// (0x00041045) tport_contact_pane

0xb771,	// (0x00041055) tport_listscroll_pane_ParamLimits

0xb771,	// (0x00041055) tport_listscroll_pane

0xb781,	// (0x00041065) cell_tport_appsw_pane_ParamLimits

0xb781,	// (0x00041065) cell_tport_appsw_pane

0x0ece,	// (0x000367b2) tport_appsw_pane_g1_ParamLimits

0x0ece,	// (0x000367b2) tport_appsw_pane_g1

0xe61d,	// (0x00043f01) tport_contact_pane_g1

0xe626,	// (0x00043f0a) tport_contact_pane_t1

0xe634,	// (0x00043f18) tport_contact_pane_t2

0x0001,

0xfc4b,	// (0x0004552f) tport_contact_pane_t

0xe642,	// (0x00043f26) list_tport_pane

0xe64b,	// (0x00043f2f) scroll_pane_cp_030

0xb7b4,	// (0x00041098) cell_tport_appsw_pane_g1

0xb7c4,	// (0x000410a8) cell_tport_appsw_pane_t1

0xb7d2,	// (0x000410b6) grid_highlight_pane_cp019

0xb7da,	// (0x000410be) list_tport_double_graphic_pane_ParamLimits

0xb7da,	// (0x000410be) list_tport_double_graphic_pane

0x0dad,	// (0x00036691) list_highlight_pane_cp023_ParamLimits

0x0dad,	// (0x00036691) list_highlight_pane_cp023

0xb7eb,	// (0x000410cf) list_tport_double_graphic_pane_g1_ParamLimits

0xb7eb,	// (0x000410cf) list_tport_double_graphic_pane_g1

0xb7f8,	// (0x000410dc) list_tport_double_graphic_pane_t1_ParamLimits

0xb7f8,	// (0x000410dc) list_tport_double_graphic_pane_t1

0xb80d,	// (0x000410f1) list_tport_double_graphic_pane_t2_ParamLimits

0xb80d,	// (0x000410f1) list_tport_double_graphic_pane_t2

0x0001,

0xfc57,	// (0x0004553b) list_tport_double_graphic_pane_t_ParamLimits

0xfc57,	// (0x0004553b) list_tport_double_graphic_pane_t

0x07bf,	// (0x000360a3) main_cale_note_pane

0x9d1c,	// (0x0003f600) cell_vitu2_function_top_wide_pane_cp01_ParamLimits

0x9d1c,	// (0x0003f600) cell_vitu2_function_top_wide_pane_cp01

0xb480,	// (0x00040d64) wait_bar_pane_cp05_ParamLimits

0x0dad,	// (0x00036691) listscroll_cmail_pane

0xe65c,	// (0x00043f40) list_cmail_pane

0xb81f,	// (0x00041103) list_cmail_body_pane

0xb847,	// (0x0004112b) list_single_cmail_header_caption_pane

0xb876,	// (0x0004115a) list_single_cmail_header_detail_pane_ParamLimits

0xb876,	// (0x0004115a) list_single_cmail_header_detail_pane

0xe67f,	// (0x00043f63) list_single_cmail_header_caption_pane_t1

0x5108,	// (0x0003a9ec) list_single_cmail_header_detail_pane_g1_ParamLimits

0x5108,	// (0x0003a9ec) list_single_cmail_header_detail_pane_g1

0x511e,	// (0x0003aa02) list_single_cmail_header_detail_pane_g2_ParamLimits

0x511e,	// (0x0003aa02) list_single_cmail_header_detail_pane_g2

0x0002,

0xfc5c,	// (0x00045540) list_single_cmail_header_detail_pane_g_ParamLimits

0xfc5c,	// (0x00045540) list_single_cmail_header_detail_pane_g

0x512a,	// (0x0003aa0e) list_single_cmail_header_detail_pane_t1_ParamLimits

0x512a,	// (0x0003aa0e) list_single_cmail_header_detail_pane_t1

0x518a,	// (0x0003aa6e) list_single_cmail_header_editor_pane_bg_ParamLimits

0x518a,	// (0x0003aa6e) list_single_cmail_header_editor_pane_bg

0xe14a,	// (0x00043a2e) list_cmail_body_pane_g1

0xe6a3,	// (0x00043f87) list_cmail_body_pane_t1

0xd4df,	// (0x00042dc3) list_single_cmail_header_editor_pane_bg_g1

0x133e,	// (0x00036c22) list_single_cmail_header_editor_pane_bg_g1_copy1

0xd4ef,	// (0x00042dd3) list_single_cmail_header_editor_pane_bg_g1_copy2

0xd4e7,	// (0x00042dcb) list_single_cmail_header_editor_pane_bg_g1_copy3

0xd74e,	// (0x00043032) list_single_cmail_header_editor_pane_bg_g1_copy4

0xd50f,	// (0x00042df3) list_single_cmail_header_editor_pane_bg_g1_copy4_copy1

0xd4ff,	// (0x00042de3) list_single_cmail_header_editor_pane_bg_g1_copy4_copy2

0xd507,	// (0x00042deb) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3

0x131e,	// (0x00036c02) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3_copy1

0xb8b3,	// (0x00041197) calenote_gesture_pane_ParamLimits

0xb8b3,	// (0x00041197) calenote_gesture_pane

0xb8cd,	// (0x000411b1) calenote_window_pane_ParamLimits

0xb8cd,	// (0x000411b1) calenote_window_pane

0xe6b1,	// (0x00043f95) popup_note_window_cp01

0xb8e5,	// (0x000411c9) calenote_swipe_1_pane_ParamLimits

0xb8e5,	// (0x000411c9) calenote_swipe_1_pane

0xb61c,	// (0x00040f00) calenote_swipe_2_pane_ParamLimits

0xb61c,	// (0x00040f00) calenote_swipe_2_pane

0xe497,	// (0x00043d7b) calenote_swipe_1_pane_g1_ParamLimits

0xe497,	// (0x00043d7b) calenote_swipe_1_pane_g1

0xe6c3,	// (0x00043fa7) calenote_swipe_1_pane_g2_ParamLimits

0xe6c3,	// (0x00043fa7) calenote_swipe_1_pane_g2

0x0001,

0xfc68,	// (0x0004554c) calenote_swipe_1_pane_g_ParamLimits

0xfc68,	// (0x0004554c) calenote_swipe_1_pane_g

0xe6cf,	// (0x00043fb3) calenote_swipe_1_pane_t1_ParamLimits

0xe6cf,	// (0x00043fb3) calenote_swipe_1_pane_t1

0xe497,	// (0x00043d7b) calenote_swipe_2_pane_g1_ParamLimits

0xe497,	// (0x00043d7b) calenote_swipe_2_pane_g1

0xe6ee,	// (0x00043fd2) calenote_swipe_2_pane_g2_ParamLimits

0xe6ee,	// (0x00043fd2) calenote_swipe_2_pane_g2

0x0001,

0xfc6d,	// (0x00045551) calenote_swipe_2_pane_g_ParamLimits

0xfc6d,	// (0x00045551) calenote_swipe_2_pane_g

0xe6fa,	// (0x00043fde) calenote_swipe_2_pane_t1_ParamLimits

0xe6fa,	// (0x00043fde) calenote_swipe_2_pane_t1

0x07bf,	// (0x000360a3) main_mup_navstr_pane

0x8be9,	// (0x0003e4cd) main_mup3_pane_t7_ParamLimits

0x8be9,	// (0x0003e4cd) main_mup3_pane_t7

0x941e,	// (0x0003ed02) main_mp4_pane_g6_ParamLimits

0x941e,	// (0x0003ed02) main_mp4_pane_g6

0x976d,	// (0x0003f051) main_image3_pane_t4_ParamLimits

0x976d,	// (0x0003f051) main_image3_pane_t4

0xb8f8,	// (0x000411dc) popup_navstr_preview_pane_ParamLimits

0xb8f8,	// (0x000411dc) popup_navstr_preview_pane

0xb904,	// (0x000411e8) scroll_navstr_pane_ParamLimits

0xb904,	// (0x000411e8) scroll_navstr_pane

0x07bf,	// (0x000360a3) bg_popup_preview_window_pane_cp04

0xe721,	// (0x00044005) popup_navstr_preview_pane_t1

0xb910,	// (0x000411f4) scroll_navstr_pane_g1_ParamLimits

0xb910,	// (0x000411f4) scroll_navstr_pane_g1

0xb91d,	// (0x00041201) scroll_navstr_pane_t1_ParamLimits

0xb91d,	// (0x00041201) scroll_navstr_pane_t1

0xe6ba,	// (0x00043f9e) bg_button_pane_cp014

0xe6ba,	// (0x00043f9e) bg_button_pane_cp030

0x4e19,	// (0x0003a6fd) list_double_fisheye_pane_g4_ParamLimits

0x4e19,	// (0x0003a6fd) list_double_fisheye_pane_g4

0x4e25,	// (0x0003a709) list_double_fisheye_pane_g5_ParamLimits

0x4e25,	// (0x0003a709) list_double_fisheye_pane_g5

0xe673,	// (0x00043f57) sp_fs_scroll_pane_cp03

0xe563,	// (0x00043e47) main_sp_fs_ctrlbar_pane_g1_ParamLimits

0xe56f,	// (0x00043e53) main_sp_fs_ctrlbar_pane_g2_ParamLimits

0xfc16,	// (0x000454fa) main_sp_fs_ctrlbar_pane_g_ParamLimits

0xb6bd,	// (0x00040fa1) main_sp_fs_ctrlbar_pane_t1_ParamLimits

0xe66b,	// (0x00043f4f) sp_fs_scroll_pane_cp02

0x106d,	// (0x00036951) popup_sp_fs_calendar_preview_list_single_pane_ParamLimits

0x106d,	// (0x00036951) popup_sp_fs_calendar_preview_list_single_pane

0x07bf,	// (0x000360a3) main_cam6_pano_pane

0x0dad,	// (0x00036691) main_mup3_pane_ParamLimits

0x07bf,	// (0x000360a3) main_phacti_pane

0xb355,	// (0x00040c39) bg_button_pane_cp11

0xb36d,	// (0x00040c51) main_mobtv_info_pane_g2_ParamLimits

0xb36d,	// (0x00040c51) main_mobtv_info_pane_g2

0x0001,

0xfb76,	// (0x0004545a) main_mobtv_info_pane_g_ParamLimits

0xfb76,	// (0x0004545a) main_mobtv_info_pane_g

0x0f1c,	// (0x00036800) sc_clock_pane_t5_ParamLimits

0x0f1c,	// (0x00036800) sc_clock_pane_t5

0x1bdb,	// (0x000374bf) main_radioblah_pane_g1_ParamLimits

0x1be9,	// (0x000374cd) main_radioblah_pane_t3_ParamLimits

0x1be9,	// (0x000374cd) main_radioblah_pane_t3

0x1be9,	// (0x000374cd) main_radioblah_pane_t4_ParamLimits

0x1be9,	// (0x000374cd) main_radioblah_pane_t4

0x0eb2,	// (0x00036796) main_radioblah_text_pane_ParamLimits

0x0eb2,	// (0x00036796) main_radioblah_text_pane

0xe38f,	// (0x00043c73) main_radioblah_info_pane_g1_ParamLimits

0xe3d3,	// (0x00043cb7) main_radioblah_info_pane_t4_ParamLimits

0xe3d3,	// (0x00043cb7) main_radioblah_info_pane_t4

0x0dad,	// (0x00036691) main_sp_fs_calendar_pane

0xb92f,	// (0x00041213) main_phacti_pane_g1

0xb937,	// (0x0004121b) phacti_note_pane_ParamLimits

0xb937,	// (0x0004121b) phacti_note_pane

0xe738,	// (0x0004401c) phacti_term_pane_ParamLimits

0xe738,	// (0x0004401c) phacti_term_pane

0xe74d,	// (0x00044031) phacti_note_pane_t1_ParamLimits

0xe74d,	// (0x00044031) phacti_note_pane_t1

0x51a1,	// (0x0003aa85) phacti_term_pane_g1

0x51a9,	// (0x0003aa8d) phacti_term_pane_t1_ParamLimits

0x51a9,	// (0x0003aa8d) phacti_term_pane_t1

0xe764,	// (0x00044048) popup_sp_fs_calendar_preview_list_single_pane_g1

0xe76c,	// (0x00044050) popup_sp_fs_calendar_preview_list_single_pane_g2

0x0001,

0xfc77,	// (0x0004555b) popup_sp_fs_calendar_preview_list_single_pane_g

0xe774,	// (0x00044058) popup_sp_fs_calendar_preview_list_single_pane_t1_ParamLimits

0xe774,	// (0x00044058) popup_sp_fs_calendar_preview_list_single_pane_t1

0xe78a,	// (0x0004406e) aid_popup_sp_fs_bg_corner_pane

0x0efe,	// (0x000367e2) popup_sp_fs_calendar_preview_bg_pane_g1

0x07bf,	// (0x000360a3) popup_sp_fs_calendar_preview_bg_pane

0xe792,	// (0x00044076) popup_sp_fs_calendar_preview_list_pane

0x1bfd,	// (0x000374e1) bg_main_sp_fs_cale_pane_ParamLimits

0x1bfd,	// (0x000374e1) bg_main_sp_fs_cale_pane

0x51dc,	// (0x0003aac0) listscroll_cale_mrui_pane_ParamLimits

0x51dc,	// (0x0003aac0) listscroll_cale_mrui_pane

0x51f1,	// (0x0003aad5) listscroll_sp_fs_schedule_track_pane

0x51fa,	// (0x0003aade) main_sp_fs_ctrlbar_pane_cp01_ParamLimits

0x51fa,	// (0x0003aade) main_sp_fs_ctrlbar_pane_cp01

0xe79a,	// (0x0004407e) main_sp_fs_ribbon_pane

0x520d,	// (0x0003aaf1) popup_sp_fs_cale_preview_window

0xb99a,	// (0x0004127e) list_single_sp_fs_schedule_track_pane_ParamLimits

0xb99a,	// (0x0004127e) list_single_sp_fs_schedule_track_pane

0x0eb2,	// (0x00036796) bg_sp_fs_highlight_list_pane_cp03_ParamLimits

0x0eb2,	// (0x00036796) bg_sp_fs_highlight_list_pane_cp03

0xb9c0,	// (0x000412a4) list_single_sp_fs_schedule_track_pane_g1_ParamLimits

0xb9c0,	// (0x000412a4) list_single_sp_fs_schedule_track_pane_g1

0xb9cc,	// (0x000412b0) list_single_sp_fs_schedule_track_pane_g2_ParamLimits

0xb9cc,	// (0x000412b0) list_single_sp_fs_schedule_track_pane_g2

0x0001,

0xfc7c,	// (0x00045560) list_single_sp_fs_schedule_track_pane_g_ParamLimits

0xfc7c,	// (0x00045560) list_single_sp_fs_schedule_track_pane_g

0xb9d8,	// (0x000412bc) list_single_sp_fs_schedule_track_pane_t1_ParamLimits

0xb9d8,	// (0x000412bc) list_single_sp_fs_schedule_track_pane_t1

0xb9f0,	// (0x000412d4) sp_fs_schedule_track_pane_ParamLimits

0xb9f0,	// (0x000412d4) sp_fs_schedule_track_pane

0xe7a2,	// (0x00044086) sp_fs_schedule_track_pane_g1

0xe7aa,	// (0x0004408e) sp_fs_schedule_track_pane_g2

0xe7b2,	// (0x00044096) sp_fs_schedule_track_pane_g3

0xe7ba,	// (0x0004409e) sp_fs_schedule_track_pane_g4

0xe7c2,	// (0x000440a6) sp_fs_schedule_track_pane_g5

0x0004,

0xfc81,	// (0x00045565) sp_fs_schedule_track_pane_g

0xd4df,	// (0x00042dc3) bg_sp_fs_schedule_viewer_highlight_g1

0x133e,	// (0x00036c22) bg_sp_fs_schedule_viewer_highlight_g2

0xd4e7,	// (0x00042dcb) bg_sp_fs_schedule_viewer_highlight_g3

0xd4ef,	// (0x00042dd3) bg_sp_fs_schedule_viewer_highlight_g4

0xd74e,	// (0x00043032) bg_sp_fs_schedule_viewer_highlight_g5

0xd4ff,	// (0x00042de3) bg_sp_fs_schedule_viewer_highlight_g6

0xd507,	// (0x00042deb) bg_sp_fs_schedule_viewer_highlight_g7

0xd50f,	// (0x00042df3) bg_sp_fs_schedule_viewer_highlight_g8

0x131e,	// (0x00036c02) bg_sp_fs_schedule_viewer_highlight_g9

0x0008,

0xfc8c,	// (0x00045570) bg_sp_fs_schedule_viewer_highlight_g

0x07bf,	// (0x000360a3) bg_main_sp_fs_ribbon_pane

0xba00,	// (0x000412e4) main_sp_fs_ribbon_pane_g1

0xe7ca,	// (0x000440ae) main_sp_fs_ribbon_pane_t1

0xba09,	// (0x000412ed) main_sp_fs_ribbon_pane_t2

0xe7d9,	// (0x000440bd) main_sp_fs_ribbon_pane_t3

0x0002,

0xfc9f,	// (0x00045583) main_sp_fs_ribbon_pane_t

0xe7e8,	// (0x000440cc) main_sp_fs_ribbon_scheduler_pane

0xe7f0,	// (0x000440d4) bg_main_sp_fs_ribbon_pane_g1

0xe7f9,	// (0x000440dd) bg_main_sp_fs_ribbon_pane_g2

0xe802,	// (0x000440e6) bg_main_sp_fs_ribbon_pane_g3

0x0002,

0xfca6,	// (0x0004558a) bg_main_sp_fs_ribbon_pane_g

0xe80a,	// (0x000440ee) main_sp_fs_ribbon_scheduler_pane_g1

0xe813,	// (0x000440f7) main_sp_fs_ribbon_scheduler_pane_g2

0xe81c,	// (0x00044100) main_sp_fs_ribbon_scheduler_pane_g3

0x0002,

0xfcad,	// (0x00045591) main_sp_fs_ribbon_scheduler_pane_g

0xe825,	// (0x00044109) list_cale_mrui_pane

0xba18,	// (0x000412fc) sp_fs_scroll_pane_cp07_ParamLimits

0xba18,	// (0x000412fc) sp_fs_scroll_pane_cp07

0xba34,	// (0x00041318) bg_sp_fs_schedule_viewer_highlight_ParamLimits

0xba34,	// (0x00041318) bg_sp_fs_schedule_viewer_highlight

0xe832,	// (0x00044116) list_single_sp_fs_schedule_track_pane_cp01

0xe83a,	// (0x0004411e) list_sp_fs_schedule_track_pane

0xe842,	// (0x00044126) sp_fs_scroll_pane_cp06_ParamLimits

0xe842,	// (0x00044126) sp_fs_scroll_pane_cp06

0x0efe,	// (0x000367e2) bgmain_sp_fs_calendar_pane_g1

0x521f,	// (0x0003ab03) list_single_cale_mrui_pane_ParamLimits

0x521f,	// (0x0003ab03) list_single_cale_mrui_pane

0x524d,	// (0x0003ab31) list_single_cale_mrui_row_pane_ParamLimits

0x524d,	// (0x0003ab31) list_single_cale_mrui_row_pane

0x525a,	// (0x0003ab3e) list_single_cale_mrui_row_pane_g1_ParamLimits

0x525a,	// (0x0003ab3e) list_single_cale_mrui_row_pane_g1

0x5292,	// (0x0003ab76) list_single_cale_mrui_row_pane_t1_ParamLimits

0x5292,	// (0x0003ab76) list_single_cale_mrui_row_pane_t1

0x52a4,	// (0x0003ab88) list_single_cale_mrui_row_pane_t2_ParamLimits

0x52a4,	// (0x0003ab88) list_single_cale_mrui_row_pane_t2

0x530a,	// (0x0003abee) list_single_cale_mrui_row_pane_t3_ParamLimits

0x530a,	// (0x0003abee) list_single_cale_mrui_row_pane_t3

0x5339,	// (0x0003ac1d) list_single_cale_mrui_row_pane_t4_ParamLimits

0x5339,	// (0x0003ac1d) list_single_cale_mrui_row_pane_t4

0x0003,

0xfcbb,	// (0x0004559f) list_single_cale_mrui_row_pane_t_ParamLimits

0xfcbb,	// (0x0004559f) list_single_cale_mrui_row_pane_t

0x5368,	// (0x0003ac4c) list_single_cmail_header_editor_pane_bg_cp01_ParamLimits

0x5368,	// (0x0003ac4c) list_single_cmail_header_editor_pane_bg_cp01

0x5390,	// (0x0003ac74) list_single_cmail_header_editor_pane_bg_cp02_ParamLimits

0x5390,	// (0x0003ac74) list_single_cmail_header_editor_pane_bg_cp02

0xe861,	// (0x00044145) main_radioblah_text_pane_t1_ParamLimits

0xe861,	// (0x00044145) main_radioblah_text_pane_t1

0xe87b,	// (0x0004415f) cam6_indi_pane_cp01

0xe883,	// (0x00044167) cam6_mode_pane_cp01

0xe88b,	// (0x0004416f) cam6_pano_pane

0xe894,	// (0x00044178) cam6_zoom_pane_cp01

0xe89c,	// (0x00044180) cam6_pano_image_pane

0xe8a7,	// (0x0004418b) cam6_pano_pane_g1

0xe14a,	// (0x00043a2e) cam6_pano_pane_g2

0xe8b0,	// (0x00044194) cam6_pano_pane_g3

0xe8b9,	// (0x0004419d) cam6_pano_pane_g4

0x384e,	// (0x00039132) cam6_pano_pane_g5

0xe8c2,	// (0x000441a6) cam6_pano_pane_g6

0xe8cc,	// (0x000441b0) cam6_pano_pane_g7

0xe8d4,	// (0x000441b8) cam6_pano_pane_g8

0xe8dd,	// (0x000441c1) cam6_pano_pane_g9

0x0008,

0xfcc4,	// (0x000455a8) cam6_pano_pane_g

0x07bf,	// (0x000360a3) main_browser_tag_pane

0xe719,	// (0x00043ffd) grid_navstr_albumart_pane

0xe8e8,	// (0x000441cc) cell_navstr_albumart_pane_ParamLimits

0xe8e8,	// (0x000441cc) cell_navstr_albumart_pane

0xe908,	// (0x000441ec) cell_navstr_albumart_pane_g1

0x2c8b,	// (0x0003856f) cell_navstr_albumart_pane_g2

0x2c9b,	// (0x0003857f) cell_navstr_albumart_pane_g3

0x2c93,	// (0x00038577) cell_navstr_albumart_pane_g4

0x0003,

0xfcd7,	// (0x000455bb) cell_navstr_albumart_pane_g

0xba41,	// (0x00041325) bt_list_pane_ParamLimits

0xba41,	// (0x00041325) bt_list_pane

0xba62,	// (0x00041346) bt_list_pane_t1

0xba71,	// (0x00041355) bt_list_pane_t2

0x0001,

0xfce0,	// (0x000455c4) bt_list_pane_t

0x07bf,	// (0x000360a3) main_cale_prevew_pane

0xba80,	// (0x00041364) popup_cale_preview_window_ParamLimits

0xba80,	// (0x00041364) popup_cale_preview_window

0x0dad,	// (0x00036691) bg_popup_preview_window_pane_cp05_ParamLimits

0x0dad,	// (0x00036691) bg_popup_preview_window_pane_cp05

0xe910,	// (0x000441f4) list_cale_preview_pane_ParamLimits

0xe910,	// (0x000441f4) list_cale_preview_pane

0xba99,	// (0x0004137d) list_double_cale_preview_pane_ParamLimits

0xba99,	// (0x0004137d) list_double_cale_preview_pane

0xbaab,	// (0x0004138f) list_single_cale_preview_pane_ParamLimits

0xbaab,	// (0x0004138f) list_single_cale_preview_pane

0xbabf,	// (0x000413a3) list_single_cale_preview_pane_g1

0xbac7,	// (0x000413ab) list_single_cale_preview_pane_t1_ParamLimits

0xbac7,	// (0x000413ab) list_single_cale_preview_pane_t1

0xbadc,	// (0x000413c0) list_double_cale_preview_pane_g1

0xbae4,	// (0x000413c8) list_double_cale_preview_pane_t1_ParamLimits

0xbae4,	// (0x000413c8) list_double_cale_preview_pane_t1

0xbaf9,	// (0x000413dd) list_double_cale_preview_pane_t2_ParamLimits

0xbaf9,	// (0x000413dd) list_double_cale_preview_pane_t2

0x0001,

0xfce5,	// (0x000455c9) list_double_cale_preview_pane_t_ParamLimits

0xfce5,	// (0x000455c9) list_double_cale_preview_pane_t

0x07bf,	// (0x000360a3) main_ezdial_pane

0x0dad,	// (0x00036691) main_sp_fs_email_pane_ParamLimits

0xb636,	// (0x00040f1a) cmail_ddmenu_btn01_pane_ParamLimits

0xb636,	// (0x00040f1a) cmail_ddmenu_btn01_pane

0xb64b,	// (0x00040f2f) cmail_ddmenu_btn02_pane_ParamLimits

0xb64b,	// (0x00040f2f) cmail_ddmenu_btn02_pane

0xb663,	// (0x00040f47) cmail_ddmenu_btn03_pane_ParamLimits

0xb663,	// (0x00040f47) cmail_ddmenu_btn03_pane

0xb6f8,	// (0x00040fdc) main_sp_fs_ctrlbar_pane_ParamLimits

0xb70e,	// (0x00040ff2) main_sp_fs_listscroll_pane_te_cp01_ParamLimits

0xb81f,	// (0x00041103) list_cmail_body_pane_ParamLimits

0xe68d,	// (0x00043f71) bg_button_pane_cp12

0xe696,	// (0x00043f7a) list_single_cmail_header_detail_pane_g3_ParamLimits

0xe696,	// (0x00043f7a) list_single_cmail_header_detail_pane_g3

0x5166,	// (0x0003aa4a) list_single_cmail_header_detail_pane_t2_ParamLimits

0x5166,	// (0x0003aa4a) list_single_cmail_header_detail_pane_t2

0x0001,

0xfc63,	// (0x00045547) list_single_cmail_header_detail_pane_t_ParamLimits

0xfc63,	// (0x00045547) list_single_cmail_header_detail_pane_t

0x51be,	// (0x0003aaa2) phacti_term_pane_t2_ParamLimits

0x51be,	// (0x0003aaa2) phacti_term_pane_t2

0x0001,

0xfc72,	// (0x00045556) phacti_term_pane_t_ParamLimits

0xfc72,	// (0x00045556) phacti_term_pane_t

0xe91c,	// (0x00044200) aid_size_list_single_double

0xbb11,	// (0x000413f5) popup_ezdial_listscroll_window

0xe928,	// (0x0004420c) popup_number_entry_window_cp01

0x1125,	// (0x00036a09) bg_popup_call_pane_cp09

0xe935,	// (0x00044219) ezdial_list_pane

0xe93d,	// (0x00044221) scroll_pane_cp23

0x2ffc,	// (0x000388e0) bg_button_pane_cp028_ParamLimits

0x2ffc,	// (0x000388e0) bg_button_pane_cp028

0xbb2a,	// (0x0004140e) cmail_ddmenu_btn01_pane_g1_ParamLimits

0xbb2a,	// (0x0004140e) cmail_ddmenu_btn01_pane_g1

0xbb3a,	// (0x0004141e) cmail_ddmenu_btn01_pane_g2_ParamLimits

0xbb3a,	// (0x0004141e) cmail_ddmenu_btn01_pane_g2

0x0001,

0xfcea,	// (0x000455ce) cmail_ddmenu_btn01_pane_g_ParamLimits

0xfcea,	// (0x000455ce) cmail_ddmenu_btn01_pane_g

0xe945,	// (0x00044229) cmail_ddmenu_btn01_pane_t1_ParamLimits

0xe945,	// (0x00044229) cmail_ddmenu_btn01_pane_t1

0x1bfd,	// (0x000374e1) bg_button_pane_cp029_ParamLimits

0x1bfd,	// (0x000374e1) bg_button_pane_cp029

0xbb3a,	// (0x0004141e) cmail_ddmenu_btn02_pane_g1_ParamLimits

0xbb3a,	// (0x0004141e) cmail_ddmenu_btn02_pane_g1

0xbb52,	// (0x00041436) cmail_ddmenu_btn02_pane_t1_ParamLimits

0xbb52,	// (0x00041436) cmail_ddmenu_btn02_pane_t1

0x0eb2,	// (0x00036796) bg_button_pane_cp031_ParamLimits

0x0eb2,	// (0x00036796) bg_button_pane_cp031

0xbb3a,	// (0x0004141e) cmail_ddmenu_btn03_pane_g1_ParamLimits

0xbb3a,	// (0x0004141e) cmail_ddmenu_btn03_pane_g1

0xbb52,	// (0x00041436) cmail_ddmenu_btn03_pane_t1_ParamLimits

0xbb52,	// (0x00041436) cmail_ddmenu_btn03_pane_t1

0x0f08,	// (0x000367ec) cell_dialer2_keypad_pane_t1_ParamLimits

0x387c,	// (0x00039160) cell_dialer2_keypad_pane_t1_copy1_ParamLimits

0x387c,	// (0x00039160) cell_dialer2_keypad_pane_t1_copy1

0xb196,	// (0x00040a7a) ncimui_group_button_pane

0x0dad,	// (0x00036691) main_sp_fs_calendar_pane_ParamLimits

0xb847,	// (0x0004112b) list_single_cmail_header_caption_pane_ParamLimits

0x51d3,	// (0x0003aab7) aid_recal_txt_sm_pane

0x07bf,	// (0x000360a3) mian_recal_day_pane

0x520d,	// (0x0003aaf1) popup_sp_fs_cale_preview_window_ParamLimits

0xe95a,	// (0x0004423e) list_recal_day_pane

0x53c7,	// (0x0003acab) list_single_recal_day_pane_ParamLimits

0x53c7,	// (0x0003acab) list_single_recal_day_pane

0xe981,	// (0x00044265) list_single_recal_day_pane_g1_ParamLimits

0xe981,	// (0x00044265) list_single_recal_day_pane_g1

0x53d9,	// (0x0003acbd) list_single_recal_day_pane_g2_ParamLimits

0x53d9,	// (0x0003acbd) list_single_recal_day_pane_g2

0x53e5,	// (0x0003acc9) list_single_recal_day_pane_g3_ParamLimits

0x53e5,	// (0x0003acc9) list_single_recal_day_pane_g3

0x53f1,	// (0x0003acd5) list_single_recal_day_pane_g4_ParamLimits

0x53f1,	// (0x0003acd5) list_single_recal_day_pane_g4

0x53ff,	// (0x0003ace3) list_single_recal_day_pane_g5_ParamLimits

0x53ff,	// (0x0003ace3) list_single_recal_day_pane_g5

0x5415,	// (0x0003acf9) list_single_recal_day_pane_g6_ParamLimits

0x5415,	// (0x0003acf9) list_single_recal_day_pane_g6

0x0004,

0xfcf9,	// (0x000455dd) list_single_recal_day_pane_g_ParamLimits

0xfcf9,	// (0x000455dd) list_single_recal_day_pane_g

0x5429,	// (0x0003ad0d) list_single_recal_day_pane_t1

0x543b,	// (0x0003ad1f) list_single_recal_day_pane_t2

0x0001,

0xfd04,	// (0x000455e8) list_single_recal_day_pane_t

0xbb76,	// (0x0004145a) ncimui_query_button_pane_ParamLimits

0xbb76,	// (0x0004145a) ncimui_query_button_pane

0xbb86,	// (0x0004146a) ncimui_query_button_pane_t1_ParamLimits

0xbb86,	// (0x0004146a) ncimui_query_button_pane_t1

0xe98d,	// (0x00044271) ncimui_query_button_pane_t2_ParamLimits

0xe98d,	// (0x00044271) ncimui_query_button_pane_t2

0x0001,

0xfd09,	// (0x000455ed) ncimui_query_button_pane_t_ParamLimits

0xfd09,	// (0x000455ed) ncimui_query_button_pane_t

0xbb99,	// (0x0004147d) query_button_pane_ParamLimits

0xbb99,	// (0x0004147d) query_button_pane

0x07bf,	// (0x000360a3) bg_button_pane_cp0028

0xe9a0,	// (0x00044284) query_button_pane_t1

0x81e8,	// (0x0003dacc) main_tport_pane_ParamLimits

0xb729,	// (0x0004100d) bg_popup_window_pane_cp01_ParamLimits

0xb729,	// (0x0004100d) bg_popup_window_pane_cp01

0xb737,	// (0x0004101b) heading_pane_cp08_ParamLimits

0xb737,	// (0x0004101b) heading_pane_cp08

0xb745,	// (0x00041029) heading_pane_cp07_ParamLimits

0xb745,	// (0x00041029) heading_pane_cp07

0xb7b4,	// (0x00041098) cell_tport_appsw_pane_g2

0x0002,

0xfc50,	// (0x00045534) cell_tport_appsw_pane_g

0x48ba,	// (0x0003a19e) input_candi_list_open_g1

0x1501,	// (0x00036de5) list_cale_time_pane_g6_ParamLimits

0x1501,	// (0x00036de5) list_cale_time_pane_g6

0x8674,	// (0x0003df58) aid_size_touch_calib_1_ParamLimits

0x8674,	// (0x0003df58) aid_size_touch_calib_1

0x8680,	// (0x0003df64) aid_size_touch_calib_2_ParamLimits

0x8680,	// (0x0003df64) aid_size_touch_calib_2

0x868e,	// (0x0003df72) aid_size_touch_calib_3_ParamLimits

0x868e,	// (0x0003df72) aid_size_touch_calib_3

0x869e,	// (0x0003df82) aid_size_touch_calib_4_ParamLimits

0x869e,	// (0x0003df82) aid_size_touch_calib_4

0x86ac,	// (0x0003df90) main_touch_calib_button_group_pane_ParamLimits

0x86ac,	// (0x0003df90) main_touch_calib_button_group_pane

0x86ba,	// (0x0003df9e) main_touch_calib_pane_g1_ParamLimits

0x86c6,	// (0x0003dfaa) main_touch_calib_pane_g2_ParamLimits

0x86d2,	// (0x0003dfb6) main_touch_calib_pane_g3_ParamLimits

0x86de,	// (0x0003dfc2) main_touch_calib_pane_g4_ParamLimits

0xf69c,	// (0x00044f80) main_touch_calib_pane_g_ParamLimits

0x86ea,	// (0x0003dfce) main_touch_calib_pane_t1_ParamLimits

0x8703,	// (0x0003dfe7) main_touch_calib_pane_t2_ParamLimits

0x871c,	// (0x0003e000) main_touch_calib_pane_t3_ParamLimits

0x8732,	// (0x0003e016) main_touch_calib_pane_t4_ParamLimits

0x8748,	// (0x0003e02c) main_touch_calib_pane_t5_ParamLimits

0xf6a5,	// (0x00044f89) main_touch_calib_pane_t_ParamLimits

0x361c,	// (0x00038f00) list_single_fp_cale_pane_g3_ParamLimits

0x361c,	// (0x00038f00) list_single_fp_cale_pane_g3

0x0dad,	// (0x00036691) bg_button_pane_cp012_ParamLimits

0x0dad,	// (0x00036691) bg_vkb2_func_pane_cp03_ParamLimits

0xa460,	// (0x0003fd44) cell_vitu2_function_top_pane_g1_ParamLimits

0x0dad,	// (0x00036691) bg_vkb2_func_pane_cp04_ParamLimits

0xb11e,	// (0x00040a02) main_ncimui_button_group_pane_ParamLimits

0xb11e,	// (0x00040a02) main_ncimui_button_group_pane

0xb184,	// (0x00040a68) main_ncimui_pane_t3_ParamLimits

0xb184,	// (0x00040a68) main_ncimui_pane_t3

0xe72f,	// (0x00044013) phacti_button_group_pane

0xe91c,	// (0x00044200) aid_size_list_single_double_ParamLimits

0xbb11,	// (0x000413f5) popup_ezdial_listscroll_window_ParamLimits

0xe928,	// (0x0004420c) popup_number_entry_window_cp01_ParamLimits

0xbba6,	// (0x0004148a) phacti_button_pane_ParamLimits

0xbba6,	// (0x0004148a) phacti_button_pane

0x07bf,	// (0x000360a3) bg_button_pane_cp14

0xe9ae,	// (0x00044292) phacti_button_pane_t1

0xbbb7,	// (0x0004149b) main_touch_calib_button_pane_ParamLimits

0xbbb7,	// (0x0004149b) main_touch_calib_button_pane

0x0f5c,	// (0x00036840) bg_button_pane_cp18_ParamLimits

0x0f5c,	// (0x00036840) bg_button_pane_cp18

0xe9bc,	// (0x000442a0) main_touch_calib_button_pane_t1_ParamLimits

0xe9bc,	// (0x000442a0) main_touch_calib_button_pane_t1

0xe9d2,	// (0x000442b6) main_touch_calib_button_pane_t2_ParamLimits

0xe9d2,	// (0x000442b6) main_touch_calib_button_pane_t2

0x0001,

0xfd0e,	// (0x000455f2) main_touch_calib_button_pane_t_ParamLimits

0xfd0e,	// (0x000455f2) main_touch_calib_button_pane_t

0x07bf,	// (0x000360a3) cell_ncimui_button_pane

0x07bf,	// (0x000360a3) bg_button_pane_cp032

0xe9f0,	// (0x000442d4) cell_ncimui_button_pane_t1

0x968e,	// (0x0003ef72) image3_infobar_pane_ParamLimits

0x968e,	// (0x0003ef72) image3_infobar_pane

0xb4c6,	// (0x00040daa) fs_bigclock_status_pane_ParamLimits

0xb4c6,	// (0x00040daa) fs_bigclock_status_pane

0xb4d3,	// (0x00040db7) main_fs_bigclock_clock_pane_ParamLimits

0xb4d3,	// (0x00040db7) main_fs_bigclock_clock_pane

0xb4e7,	// (0x00040dcb) main_fs_bigclock_indi_pane_ParamLimits

0xb4e7,	// (0x00040dcb) main_fs_bigclock_indi_pane

0xb50f,	// (0x00040df3) main_fs_bigclock_swipe_pane_ParamLimits

0xb50f,	// (0x00040df3) main_fs_bigclock_swipe_pane

0x07bf,	// (0x000360a3) main_fs_clock_dumped_data

0xe257,	// (0x00043b3b) list_single_fs_bigclock_indicator_pane_g1_ParamLimits

0xe257,	// (0x00043b3b) list_single_fs_bigclock_indicator_pane_g1

0xe273,	// (0x00043b57) list_single_fs_bigclock_indicator_pane_g2_ParamLimits

0xe273,	// (0x00043b57) list_single_fs_bigclock_indicator_pane_g2

0xe28d,	// (0x00043b71) list_single_fs_bigclock_indicator_pane_g3_ParamLimits

0xe28d,	// (0x00043b71) list_single_fs_bigclock_indicator_pane_g3

0xe2a7,	// (0x00043b8b) list_single_fs_bigclock_indicator_pane_g4_ParamLimits

0xe2a7,	// (0x00043b8b) list_single_fs_bigclock_indicator_pane_g4

0x0004,

0xfbaa,	// (0x0004548e) list_single_fs_bigclock_indicator_pane_g_ParamLimits

0xfbaa,	// (0x0004548e) list_single_fs_bigclock_indicator_pane_g

0xe2d2,	// (0x00043bb6) list_single_fs_bigclock_indicator_pane_t1_ParamLimits

0xe2d2,	// (0x00043bb6) list_single_fs_bigclock_indicator_pane_t1

0xe2fa,	// (0x00043bde) list_single_fs_bigclock_indicator_pane_t2_ParamLimits

0xe2fa,	// (0x00043bde) list_single_fs_bigclock_indicator_pane_t2

0xe322,	// (0x00043c06) list_single_fs_bigclock_indicator_pane_t3_ParamLimits

0xe322,	// (0x00043c06) list_single_fs_bigclock_indicator_pane_t3

0xe34a,	// (0x00043c2e) list_single_fs_bigclock_indicator_pane_t4_ParamLimits

0xe34a,	// (0x00043c2e) list_single_fs_bigclock_indicator_pane_t4

0x0004,

0xfbb5,	// (0x00045499) list_single_fs_bigclock_indicator_pane_t_ParamLimits

0xfbb5,	// (0x00045499) list_single_fs_bigclock_indicator_pane_t

0xe9fe,	// (0x000442e2) image3_infobar_fav_pane_ParamLimits

0xe9fe,	// (0x000442e2) image3_infobar_fav_pane

0xea0e,	// (0x000442f2) image3_infobar_loc_pane_ParamLimits

0xea0e,	// (0x000442f2) image3_infobar_loc_pane

0xea22,	// (0x00044306) image3_infobar_time_pane_ParamLimits

0xea22,	// (0x00044306) image3_infobar_time_pane

0x0efe,	// (0x000367e2) image3_infobar_time_pane_g1

0xea32,	// (0x00044316) image3_infobar_time_pane_t1

0x0efe,	// (0x000367e2) image3_infobar_loc_pane_g1

0xea40,	// (0x00044324) image3_infobar_loc_pane_g2

0x0001,

0xfd13,	// (0x000455f7) image3_infobar_loc_pane_g

0xea48,	// (0x0004432c) image3_infobar_loc_pane_t1

0x0efe,	// (0x000367e2) image3_infobar_fav_pane_g1

0xea56,	// (0x0004433a) image3_infobar_fav_pane_g2

0x0001,

0xfd18,	// (0x000455fc) image3_infobar_fav_pane_g

0xea5e,	// (0x00044342) fs_bigclock_status_battery_pane

0xea67,	// (0x0004434b) fs_bigclock_status_signal_pane

0xea70,	// (0x00044354) fs_bigclock_status_title_pane

0xea79,	// (0x0004435d) fs_bigclock_status_signal_pane_g1

0xea82,	// (0x00044366) fs_bigclock_status_signal_pane_g2

0x0001,

0xfd1d,	// (0x00045601) fs_bigclock_status_signal_pane_g

0xea8a,	// (0x0004436e) fs_bigclock_status_battery_pane_g1

0xea93,	// (0x00044377) fs_bigclock_status_battery_pane_g2

0x0001,

0xfd22,	// (0x00045606) fs_bigclock_status_battery_pane_g

0xea9b,	// (0x0004437f) fs_bigclock_status_title_pane_t1

0xbbc7,	// (0x000414ab) main_fs_bigclock_clock_pane_g1

0xbbc7,	// (0x000414ab) main_fs_bigclock_clock_pane_g2

0xbbd4,	// (0x000414b8) main_fs_bigclock_clock_pane_g3

0xbbd4,	// (0x000414b8) main_fs_bigclock_clock_pane_g4

0x0003,

0xfd27,	// (0x0004560b) main_fs_bigclock_clock_pane_g

0xbbe0,	// (0x000414c4) main_fs_bigclock_clock_pane_t1

0xbbf3,	// (0x000414d7) main_fs_bigclock_clock_pane_t2

0x0001,

0xfd30,	// (0x00045614) main_fs_bigclock_clock_pane_t

0xeaa9,	// (0x0004438d) list_single_fs_bigclock_indicator_pane_ParamLimits

0xeaa9,	// (0x0004438d) list_single_fs_bigclock_indicator_pane

0xeaba,	// (0x0004439e) list_single_fs_bigclock_pane_ParamLimits

0xeaba,	// (0x0004439e) list_single_fs_bigclock_pane

0xeae0,	// (0x000443c4) main_fs_bigclock_indicator_pane_t1

0xeaef,	// (0x000443d3) list_single_fs_bigclock_pane_g1

0xeaf7,	// (0x000443db) list_single_fs_bigclock_pane_t1

0x0efe,	// (0x000367e2) main_fs_bigclock_swipe_pane_g1

0xeb3a,	// (0x0004441e) main_fs_bigclock_swipe_pane_g2

0x0001,

0xfd41,	// (0x00045625) main_fs_bigclock_swipe_pane_g

0xeb42,	// (0x00044426) main_fs_bigclock_swipe_pane_t1_ParamLimits

0xeb42,	// (0x00044426) main_fs_bigclock_swipe_pane_t1

0x74f9,	// (0x0003cddd) call_type_pane_ParamLimits

0x07bf,	// (0x000360a3) main_btmg_pane

0x5286,	// (0x0003ab6a) list_single_cale_mrui_row_pane_g2_ParamLimits

0x5286,	// (0x0003ab6a) list_single_cale_mrui_row_pane_g2

0x0002,

0xfcb4,	// (0x00045598) list_single_cale_mrui_row_pane_g_ParamLimits

0xfcb4,	// (0x00045598) list_single_cale_mrui_row_pane_g

0x53b6,	// (0x0003ac9a) list_recal_vselct_arw_lo_pane

0xe979,	// (0x0004425d) list_recal_vselct_arw_up_pane

0x53be,	// (0x0003aca2) list_recal_vselct_pane

0xbc4a,	// (0x0004152e) btmg_button_pane

0xbc56,	// (0x0004153a) main_btmg_pane_g1

0x07bf,	// (0x000360a3) bg_button_pane_cp044

0xeb5f,	// (0x00044443) btmg_button_pane_t1

0x2e1b,	// (0x000386ff) aid_listscroll_gen

0x0dad,	// (0x00036691) main_cntbar_detail_pane

0xe654,	// (0x00043f38) list_cmail_folder_pane

0xe673,	// (0x00043f57) sp_fs_scroll_pane_cp03_ParamLimits

0xb847,	// (0x0004112b) list_single_fs_dyc_pane_cp01_ParamLimits

0xb847,	// (0x0004112b) list_single_fs_dyc_pane_cp01

0xeb6d,	// (0x00044451) aid_size_cmail_indent

0x544d,	// (0x0003ad31) list_single_dyc_row_pane_cp01

0xbc7e,	// (0x00041562) cntbar_detail_list_pane_ParamLimits

0xbc7e,	// (0x00041562) cntbar_detail_list_pane

0xbcb8,	// (0x0004159c) main_cntbar_detail_cont_pane_ParamLimits

0xbcb8,	// (0x0004159c) main_cntbar_detail_cont_pane

0x74ed,	// (0x0003cdd1) scroll_pane_cp032_ParamLimits

0x74ed,	// (0x0003cdd1) scroll_pane_cp032

0xbcc4,	// (0x000415a8) cntbar_detail_list_event_pane_ParamLimits

0xbcc4,	// (0x000415a8) cntbar_detail_list_event_pane

0xbc8a,	// (0x0004156e) cntbar_detail_list_shct_pane

0x138c,	// (0x00036c70) aid_list_gen

0xeb76,	// (0x0004445a) aid_scroll

0xeb7f,	// (0x00044463) aid_size_touch_scroll_bar

0xeb88,	// (0x0004446c) aid_list_double

0x5456,	// (0x0003ad3a) aid_list_single

0xbcd8,	// (0x000415bc) aid_list_single_lg

0x545f,	// (0x0003ad43) aid_list_z_g_a_sm

0x5467,	// (0x0003ad4b) aid_list_z_g_d

0x546f,	// (0x0003ad53) aid_txt_z_prm

0x547d,	// (0x0003ad61) aid_txt_z_prm_cp01

0x548b,	// (0x0003ad6f) aid_txt_z_sec

0xbce1,	// (0x000415c5) main_cntbar_detail_cont_pane_g1_ParamLimits

0xbce1,	// (0x000415c5) main_cntbar_detail_cont_pane_g1

0xbcee,	// (0x000415d2) main_cntbar_detail_cont_pane_g2_ParamLimits

0xbcee,	// (0x000415d2) main_cntbar_detail_cont_pane_g2

0x0001,

0xfd46,	// (0x0004562a) main_cntbar_detail_cont_pane_g_ParamLimits

0xfd46,	// (0x0004562a) main_cntbar_detail_cont_pane_g

0xeb91,	// (0x00044475) main_cntbar_detail_cont_pane_t1

0xeb9f,	// (0x00044483) main_cntbar_detail_cont_pane_t2

0xebad,	// (0x00044491) main_cntbar_detail_cont_pane_t3

0x0002,

0xfd4b,	// (0x0004562f) main_cntbar_detail_cont_pane_t

0xbcfa,	// (0x000415de) cell_cntbar_detail_list_shct_pane_ParamLimits

0xbcfa,	// (0x000415de) cell_cntbar_detail_list_shct_pane

0xebbb,	// (0x0004449f) cntbar_detail_list_shct_pane_g1

0xebc4,	// (0x000444a8) cntbar_detail_list_shct_pane_g2

0x0001,

0xfd52,	// (0x00045636) cntbar_detail_list_shct_pane_g

0xbd0e,	// (0x000415f2) cntbar_detail_list_event_pane_g1_ParamLimits

0xbd0e,	// (0x000415f2) cntbar_detail_list_event_pane_g1

0xbd1a,	// (0x000415fe) cntbar_detail_list_event_pane_g2_ParamLimits

0xbd1a,	// (0x000415fe) cntbar_detail_list_event_pane_g2

0x0005,

0xfd57,	// (0x0004563b) cntbar_detail_list_event_pane_g_ParamLimits

0xfd57,	// (0x0004563b) cntbar_detail_list_event_pane_g

0xbd86,	// (0x0004166a) cntbar_detail_list_event_pane_t1_ParamLimits

0xbd86,	// (0x0004166a) cntbar_detail_list_event_pane_t1

0xbd9b,	// (0x0004167f) cntbar_detail_list_event_pane_t2_ParamLimits

0xbd9b,	// (0x0004167f) cntbar_detail_list_event_pane_t2

0x0002,

0xfd64,	// (0x00045648) cntbar_detail_list_event_pane_t_ParamLimits

0xfd64,	// (0x00045648) cntbar_detail_list_event_pane_t

0x0efe,	// (0x000367e2) cell_cntbar_detail_list_shct_pane_g1

0x1adc,	// (0x000373c0) navi_pane_mv_g3

0x0dad,	// (0x00036691) main_cntbar_detail_pane_ParamLimits

0x07bf,	// (0x000360a3) main_notif_wgt_pane

0x934d,	// (0x0003ec31) aid_tch_main_mp4_pane_g4

0x9620,	// (0x0003ef04) popup_slider_window_cp02

0x53ac,	// (0x0003ac90) list_recal_day_event_pane

0xbc5e,	// (0x00041542) cntbar_detail_btn_pane_ParamLimits

0xbc5e,	// (0x00041542) cntbar_detail_btn_pane

0xbc6e,	// (0x00041552) cntbar_detail_btn_pane_cp01_ParamLimits

0xbc6e,	// (0x00041552) cntbar_detail_btn_pane_cp01

0xbc8a,	// (0x0004156e) cntbar_detail_list_shct_pane_ParamLimits

0xbc96,	// (0x0004157a) cntbar_detail_pane_g1_ParamLimits

0xbc96,	// (0x0004157a) cntbar_detail_pane_g1

0xbca2,	// (0x00041586) cntbar_detail_pane_t1_ParamLimits

0xbca2,	// (0x00041586) cntbar_detail_pane_t1

0xbd26,	// (0x0004160a) cntbar_detail_list_event_pane_g3_ParamLimits

0xbd26,	// (0x0004160a) cntbar_detail_list_event_pane_g3

0xbd3e,	// (0x00041622) cntbar_detail_list_event_pane_g4_ParamLimits

0xbd3e,	// (0x00041622) cntbar_detail_list_event_pane_g4

0xbd56,	// (0x0004163a) cntbar_detail_list_event_pane_g5_ParamLimits

0xbd56,	// (0x0004163a) cntbar_detail_list_event_pane_g5

0xbd6e,	// (0x00041652) cntbar_detail_list_event_pane_g6_ParamLimits

0xbd6e,	// (0x00041652) cntbar_detail_list_event_pane_g6

0xbdb0,	// (0x00041694) cntbar_detail_list_event_pane_t3_ParamLimits

0xbdb0,	// (0x00041694) cntbar_detail_list_event_pane_t3

0xbdc2,	// (0x000416a6) popup_notif_wgt_window_ParamLimits

0xbdc2,	// (0x000416a6) popup_notif_wgt_window

0xbdd2,	// (0x000416b6) popup_submenu_window_cp01_ParamLimits

0xbdd2,	// (0x000416b6) popup_submenu_window_cp01

0x1125,	// (0x00036a09) bg_popup_window_pane_cp10

0xebcd,	// (0x000444b1) listscroll_notif_wgt_pane

0xebdf,	// (0x000444c3) list_notif_wgt_window

0xebe8,	// (0x000444cc) scroll_pane_cp033

0xbde0,	// (0x000416c4) list_notif_wgt_row_pane_ParamLimits

0xbde0,	// (0x000416c4) list_notif_wgt_row_pane

0xebf1,	// (0x000444d5) aid_size_list_notif_wgt_del

0xebfe,	// (0x000444e2) list_notif_wgt_row_pane_g1

0xec0a,	// (0x000444ee) list_notif_wgt_row_pane_g2

0xec19,	// (0x000444fd) list_notif_wgt_row_pane_g3

0x0002,

0xfd6b,	// (0x0004564f) list_notif_wgt_row_pane_g

0xec26,	// (0x0004450a) list_notif_wgt_row_pane_t1

0xec3c,	// (0x00044520) list_notif_wgt_row_pane_t2

0xec4e,	// (0x00044532) list_notif_wgt_row_pane_t3

0x0002,

0xfd72,	// (0x00045656) list_notif_wgt_row_pane_t

0xd756,	// (0x0004303a) list_recal_day_event_pane_g1

0xec60,	// (0x00044544) list_recal_day_event_pane_t1

0x07bf,	// (0x000360a3) bg_button_pane_cp045

0xbdf2,	// (0x000416d6) cntbar_detail_btn_pane_t1

0x1bfd,	// (0x000374e1) main_callh_pane_ParamLimits

0x1bfd,	// (0x000374e1) main_callh_pane

0x07bf,	// (0x000360a3) main_coverflow0_pane

0x07bf,	// (0x000360a3) main_wgtman_pane

0xb527,	// (0x00040e0b) main_fs_bigclock_unlock_btn_pane_ParamLimits

0xb527,	// (0x00040e0b) main_fs_bigclock_unlock_btn_pane

0xb7ac,	// (0x00041090) bg_button_pane_cp16

0xb7bc,	// (0x000410a0) cell_tport_appsw_pane_g3

0xbe00,	// (0x000416e4) cf0_flow_pane_ParamLimits

0xbe00,	// (0x000416e4) cf0_flow_pane

0xec6f,	// (0x00044553) listscroll_cf0_pane

0xec7a,	// (0x0004455e) main_cf0_pane_g1

0xbe0f,	// (0x000416f3) main_cf0_pane_t1_ParamLimits

0xbe0f,	// (0x000416f3) main_cf0_pane_t1

0xbe23,	// (0x00041707) main_cf0_pane_t2_ParamLimits

0xbe23,	// (0x00041707) main_cf0_pane_t2

0x0001,

0xfd7e,	// (0x00045662) main_cf0_pane_t_ParamLimits

0xfd7e,	// (0x00045662) main_cf0_pane_t

0xec8c,	// (0x00044570) scroll_pane_cp11

0xbe37,	// (0x0004171b) cf0_flow_pane_g1

0xbe3f,	// (0x00041723) cf0_flow_pane_g2

0x0001,

0xfd83,	// (0x00045667) cf0_flow_pane_g

0xbe47,	// (0x0004172b) cf0_flow_pane_t1

0x07bf,	// (0x000360a3) main_call6_pane

0x07bf,	// (0x000360a3) main_calllock_pane

0xbe55,	// (0x00041739) call6_btn_grp_pane_ParamLimits

0xbe55,	// (0x00041739) call6_btn_grp_pane

0xbe64,	// (0x00041748) call6_pane_g1_ParamLimits

0xbe64,	// (0x00041748) call6_pane_g1

0xbe74,	// (0x00041758) popup_call6_1st_window_ParamLimits

0xbe74,	// (0x00041758) popup_call6_1st_window

0xbe82,	// (0x00041766) popup_call6_2nd_window_ParamLimits

0xbe82,	// (0x00041766) popup_call6_2nd_window

0xbe90,	// (0x00041774) cell_call6_btn_pane_ParamLimits

0xbe90,	// (0x00041774) cell_call6_btn_pane

0x1125,	// (0x00036a09) bg_popup_call2_in_pane_cp03

0xec97,	// (0x0004457b) popup_call6_1st_window_g1

0xec9f,	// (0x00044583) popup_call6_1st_window_g2

0xeca7,	// (0x0004458b) popup_call6_1st_window_g3

0x0002,

0xfd88,	// (0x0004566c) popup_call6_1st_window_g

0xecaf,	// (0x00044593) popup_call6_1st_window_t1

0xecbe,	// (0x000445a2) popup_call6_1st_window_t2

0xeccc,	// (0x000445b0) popup_call6_1st_window_t3

0x0002,

0xfd8f,	// (0x00045673) popup_call6_1st_window_t

0x1125,	// (0x00036a09) bg_popup_call2_in_pane_cp04

0xecda,	// (0x000445be) popup_call6_2nd_window_g1

0xece2,	// (0x000445c6) popup_call6_2nd_window_g2

0xecea,	// (0x000445ce) popup_call6_2nd_window_g3

0x0002,

0xfd96,	// (0x0004567a) popup_call6_2nd_window_g

0xecf2,	// (0x000445d6) popup_call6_2nd_window_t1

0x07bf,	// (0x000360a3) bg_button_pane_cp15

0xed01,	// (0x000445e5) cell_call6_btn_pane_g1

0xedca,	// (0x000446ae) cell_call6_btn_pane_t1

0xbe9f,	// (0x00041783) listscroll_wgtman_pane_ParamLimits

0xbe9f,	// (0x00041783) listscroll_wgtman_pane

0xbebb,	// (0x0004179f) wgtman_btn_pane_ParamLimits

0xbebb,	// (0x0004179f) wgtman_btn_pane

0x18f0,	// (0x000371d4) aid_scroll_copy1

0xed0a,	// (0x000445ee) list_wgtman_pane

0xbef0,	// (0x000417d4) wgtman_btn_pane_g1_ParamLimits

0xbef0,	// (0x000417d4) wgtman_btn_pane_g1

0xbf18,	// (0x000417fc) wgtman_btn_pane_t1_ParamLimits

0xbf18,	// (0x000417fc) wgtman_btn_pane_t1

0xed14,	// (0x000445f8) wgtman_btn_pane_t2_ParamLimits

0xed14,	// (0x000445f8) wgtman_btn_pane_t2

0x0001,

0xfd9d,	// (0x00045681) wgtman_btn_pane_t_ParamLimits

0xfd9d,	// (0x00045681) wgtman_btn_pane_t

0xbf4f,	// (0x00041833) listrow_wgtman_pane_ParamLimits

0xbf4f,	// (0x00041833) listrow_wgtman_pane

0xbf6b,	// (0x0004184f) listrow_wgtman_pane_g1

0xbf78,	// (0x0004185c) listrow_wgtman_pane_g2

0x0001,

0xfda2,	// (0x00045686) listrow_wgtman_pane_g

0x5499,	// (0x0003ad7d) listrow_wgtman_pane_t1

0x54b1,	// (0x0003ad95) listrow_wgtman_pane_t2

0x0001,

0xfda7,	// (0x0004568b) listrow_wgtman_pane_t

0x54d7,	// (0x0003adbb) wait_bar_pane_cp09

0xed2b,	// (0x0004460f) main_calllock_btn_pane

0xed35,	// (0x00044619) main_calllock_pane_g1

0x07bf,	// (0x000360a3) bg_button_pane_cp17

0xed01,	// (0x000445e5) main_calllock_btn_pane_g1

0xed3d,	// (0x00044621) main_calllock_btn_pane_t1

0x07bf,	// (0x000360a3) main_dialer3_pane

0x07bf,	// (0x000360a3) main_fmrd2_pane

0x0efe,	// (0x000367e2) main_fs_bigclock_unlock_btn_pane_g1

0xbf9e,	// (0x00041882) main_fs_bigclock_unlock_btn_pane_t1

0xbfac,	// (0x00041890) area_fmrd2_info_pane_ParamLimits

0xbfac,	// (0x00041890) area_fmrd2_info_pane

0xbfba,	// (0x0004189e) area_fmrd2_visual_pane_ParamLimits

0xbfba,	// (0x0004189e) area_fmrd2_visual_pane

0xbfc8,	// (0x000418ac) fmrd2_indi_pane_ParamLimits

0xbfc8,	// (0x000418ac) fmrd2_indi_pane

0xbfd5,	// (0x000418b9) area_fmrd2_visual_pane_g1

0xbfdd,	// (0x000418c1) area_fmrd2_visual_pane_t1

0xbfed,	// (0x000418d1) area_fmrd2_visual_pane_t2

0xbffd,	// (0x000418e1) area_fmrd2_visual_pane_t3

0x0002,

0xfdb1,	// (0x00045695) area_fmrd2_visual_pane_t

0xc00d,	// (0x000418f1) area_fmrd2_info_pane_g1

0xc015,	// (0x000418f9) area_fmrd2_info_pane_t1

0xc025,	// (0x00041909) area_fmrd2_info_pane_t2

0xc035,	// (0x00041919) area_fmrd2_info_pane_t3

0xc045,	// (0x00041929) area_fmrd2_info_pane_t4

0x0003,

0xfdb8,	// (0x0004569c) area_fmrd2_info_pane_t

0xc053,	// (0x00041937) fmrd2_indi_pane_t1

0xc063,	// (0x00041947) fmrd2_indi_pane_t2

0xc073,	// (0x00041957) fmrd2_indi_pane_t3

0x0002,

0xfdc1,	// (0x000456a5) fmrd2_indi_pane_t

0xe2b6,	// (0x00043b9a) list_single_fs_bigclock_indicator_pane_g5_ParamLimits

0xe2b6,	// (0x00043b9a) list_single_fs_bigclock_indicator_pane_g5

0xe367,	// (0x00043c4b) list_single_fs_bigclock_indicator_pane_t5_ParamLimits

0xe367,	// (0x00043c4b) list_single_fs_bigclock_indicator_pane_t5

0xb94d,	// (0x00041231) aid_cell_bcale_month_pane_ParamLimits

0xb94d,	// (0x00041231) aid_cell_bcale_month_pane

0xb96b,	// (0x0004124f) bcale_month_pane_ParamLimits

0xb96b,	// (0x0004124f) bcale_month_pane

0xb989,	// (0x0004126d) bcale_preview_pane_ParamLimits

0xb989,	// (0x0004126d) bcale_preview_pane

0xeaf7,	// (0x000443db) list_single_fs_bigclock_pane_t1_ParamLimits

0xeb16,	// (0x000443fa) list_single_fs_bigclock_pane_t2_ParamLimits

0xeb16,	// (0x000443fa) list_single_fs_bigclock_pane_t2

0x0001,

0xfd3c,	// (0x00045620) list_single_fs_bigclock_pane_t_ParamLimits

0xfd3c,	// (0x00045620) list_single_fs_bigclock_pane_t

0xbf96,	// (0x0004187a) main_fs_bigclock_unlock_btn_pane_g2

0x0001,

0xfdac,	// (0x00045690) main_fs_bigclock_unlock_btn_pane_g

0xc081,	// (0x00041965) aid_dia3_key_size_ParamLimits

0xc081,	// (0x00041965) aid_dia3_key_size

0xc08d,	// (0x00041971) aid_dia3_listrow_size_ParamLimits

0xc08d,	// (0x00041971) aid_dia3_listrow_size

0xc09d,	// (0x00041981) dia3_keypad_fun_pane_ParamLimits

0xc09d,	// (0x00041981) dia3_keypad_fun_pane

0xc0af,	// (0x00041993) dia3_keypad_num_pane_ParamLimits

0xc0af,	// (0x00041993) dia3_keypad_num_pane

0xc0c1,	// (0x000419a5) dia3_listscroll_pane_ParamLimits

0xc0c1,	// (0x000419a5) dia3_listscroll_pane

0xc0cf,	// (0x000419b3) dia3_numentry_pane_ParamLimits

0xc0cf,	// (0x000419b3) dia3_numentry_pane

0xed4c,	// (0x00044630) dia3_list_pane

0xed57,	// (0x0004463b) scroll_pane_cp12

0x07bf,	// (0x000360a3) bg_dia3_numentry_pane

0xc0dd,	// (0x000419c1) dia3_numentry_pane_t1

0xc0ec,	// (0x000419d0) cell_dia3_key_num_pane

0xc0f4,	// (0x000419d8) cell_dia3_key0_fun_pane_ParamLimits

0xc0f4,	// (0x000419d8) cell_dia3_key0_fun_pane

0xc101,	// (0x000419e5) cell_dia3_key1_fun_pane_ParamLimits

0xc101,	// (0x000419e5) cell_dia3_key1_fun_pane

0xc10e,	// (0x000419f2) dia3_listrow_pane

0xe009,	// (0x000438ed) bg_dia3_numentry_pane_g1

0x07bf,	// (0x000360a3) bg_button_pane_cp21

0xed62,	// (0x00044646) cell_dia3_key_num_pane_t1

0xed70,	// (0x00044654) cell_dia3_key_num_pane_t2

0xed7f,	// (0x00044663) cell_dia3_key_num_pane_t3

0xed8e,	// (0x00044672) cell_dia3_key_num_pane_t4

0x0003,

0xfdc8,	// (0x000456ac) cell_dia3_key_num_pane_t

0x07bf,	// (0x000360a3) bg_button_pane_cp19

0xc11b,	// (0x000419ff) cell_dia3_key0_fun_pane_g1

0x07bf,	// (0x000360a3) bg_button_pane_cp20

0xc123,	// (0x00041a07) cell_dia3_key1_fun_pane_g1

0xc12b,	// (0x00041a0f) area_left_week_number_pane

0xc13e,	// (0x00041a22) area_top_day_name_pane

0xc14c,	// (0x00041a30) frame_month_view_pane

0xedd9,	// (0x000446bd) grid_month_view_pane

0xc161,	// (0x00041a45) cell_top_day_name_pane_ParamLimits

0xc161,	// (0x00041a45) cell_top_day_name_pane

0xc17b,	// (0x00041a5f) cell_area_left_week_number_pane_ParamLimits

0xc17b,	// (0x00041a5f) cell_area_left_week_number_pane

0xc19e,	// (0x00041a82) cell_month_view_pane_ParamLimits

0xc19e,	// (0x00041a82) cell_month_view_pane

0xede7,	// (0x000446cb) frm_month_g1

0xc1ca,	// (0x00041aae) frm_month_g2

0xc1db,	// (0x00041abf) frm_month_g3

0xc1ec,	// (0x00041ad0) frm_month_g4

0xc1fd,	// (0x00041ae1) frm_month_g5

0xc210,	// (0x00041af4) frm_month_g6

0xc223,	// (0x00041b07) frm_month_g7

0xedf4,	// (0x000446d8) frm_month_g8

0xc236,	// (0x00041b1a) frm_month_g9

0xc243,	// (0x00041b27) frm_month_g10

0xc250,	// (0x00041b34) frm_month_g11

0xc25d,	// (0x00041b41) frm_month_g12

0xc26a,	// (0x00041b4e) frm_month_g13

0xc277,	// (0x00041b5b) frm_month_g14

0xc286,	// (0x00041b6a) frm_month_g15

0xc295,	// (0x00041b79) frm_month_g16

0x000f,

0xfdd1,	// (0x000456b5) frm_month_g

0xee01,	// (0x000446e5) cell_top_day_name_pane_t1

0xc2a4,	// (0x00041b88) cell_area_left_week_number_pane_g1

0xc2b3,	// (0x00041b97) cell_area_left_week_number_pane_t1

0x0ec0,	// (0x000367a4) cell_month_view_pane_g1

0xc2c9,	// (0x00041bad) cell_month_view_pane_t1

0x07bf,	// (0x000360a3) main_fps_pane

0xe52b,	// (0x00043e0f) cmail_ddmenu_btn02_pane_cp1_ParamLimits

0xe52b,	// (0x00043e0f) cmail_ddmenu_btn02_pane_cp1

0xe547,	// (0x00043e2b) cmail_ddmenu_btn02_pane_cp2_ParamLimits

0xe547,	// (0x00043e2b) cmail_ddmenu_btn02_pane_cp2

0xbb46,	// (0x0004142a) cmail_ddmenu_btn02_pane_g2_ParamLimits

0xbb46,	// (0x0004142a) cmail_ddmenu_btn02_pane_g2

0x0001,

0xfcef,	// (0x000455d3) cmail_ddmenu_btn02_pane_g_ParamLimits

0xfcef,	// (0x000455d3) cmail_ddmenu_btn02_pane_g

0xbb64,	// (0x00041448) cmail_ddmenu_btn02_pane_t2_ParamLimits

0xbb64,	// (0x00041448) cmail_ddmenu_btn02_pane_t2

0x0001,

0xfcf4,	// (0x000455d8) cmail_ddmenu_btn02_pane_t_ParamLimits

0xfcf4,	// (0x000455d8) cmail_ddmenu_btn02_pane_t

0xc2df,	// (0x00041bc3) fps_text_pane_ParamLimits

0xc2df,	// (0x00041bc3) fps_text_pane

0xc2ec,	// (0x00041bd0) main_fps_pane_g1_ParamLimits

0xc2ec,	// (0x00041bd0) main_fps_pane_g1

0xc2fa,	// (0x00041bde) wait_bar_pane_cp010_ParamLimits

0xc2fa,	// (0x00041bde) wait_bar_pane_cp010

0xc306,	// (0x00041bea) fps_text_pane_t1_ParamLimits

0xc306,	// (0x00041bea) fps_text_pane_t1

0x9a10,	// (0x0003f2f4) cam4_image_uncrop_pane_g1

0x9a19,	// (0x0003f2fd) cam4_image_uncrop_pane_g2

0x9a22,	// (0x0003f306) cam4_image_uncrop_pane_g3

0x9a2b,	// (0x0003f30f) cam4_image_uncrop_pane_g4

0x0003,

0xf82e,	// (0x00045112) cam4_image_uncrop_pane_g

0xc10e,	// (0x000419f2) dia3_listrow_pane_ParamLimits

0x07bf,	// (0x000360a3) main_phob2_pane

0xb78e,	// (0x00041072) cell_tport_appsw_pane_cp02_ParamLimits

0xb78e,	// (0x00041072) cell_tport_appsw_pane_cp02

0xb79d,	// (0x00041081) cell_tport_appsw_pane_cp03_ParamLimits

0xb79d,	// (0x00041081) cell_tport_appsw_pane_cp03

0x07bf,	// (0x000360a3) phob2_contact_card_pane

0x07bf,	// (0x000360a3) phob2_listscroll_pane

0xee14,	// (0x000446f8) phob2_list_pane

0xe93d,	// (0x00044221) scroll_pane_cp034

0xc31f,	// (0x00041c03) phob2_cc_data_pane_ParamLimits

0xc31f,	// (0x00041c03) phob2_cc_data_pane

0xc339,	// (0x00041c1d) phob2_cc_listscroll_pane_ParamLimits

0xc339,	// (0x00041c1d) phob2_cc_listscroll_pane

0xbf4f,	// (0x00041833) list_double_large_graphic_phob2_pane_ParamLimits

0xbf4f,	// (0x00041833) list_double_large_graphic_phob2_pane

0xc353,	// (0x00041c37) list_double_large_graphic_phob2_pane_g1_ParamLimits

0xc353,	// (0x00041c37) list_double_large_graphic_phob2_pane_g1

0x54e9,	// (0x0003adcd) list_double_large_graphic_phob2_pane_g2_ParamLimits

0x54e9,	// (0x0003adcd) list_double_large_graphic_phob2_pane_g2

0x0003,

0xfdf2,	// (0x000456d6) list_double_large_graphic_phob2_pane_g_ParamLimits

0xfdf2,	// (0x000456d6) list_double_large_graphic_phob2_pane_g

0x550f,	// (0x0003adf3) list_double_large_graphic_phob2_pane_t1_ParamLimits

0x550f,	// (0x0003adf3) list_double_large_graphic_phob2_pane_t1

0x5524,	// (0x0003ae08) list_double_large_graphic_phob2_pane_t2_ParamLimits

0x5524,	// (0x0003ae08) list_double_large_graphic_phob2_pane_t2

0x0001,

0xfdfb,	// (0x000456df) list_double_large_graphic_phob2_pane_t_ParamLimits

0xfdfb,	// (0x000456df) list_double_large_graphic_phob2_pane_t

0x07bf,	// (0x000360a3) list_highlight_pane_cp024

0xee1c,	// (0x00044700) phob2_cc_button_pane

0xc360,	// (0x00041c44) phob2_cc_data_pane_g1_ParamLimits

0xc360,	// (0x00041c44) phob2_cc_data_pane_g1

0xc36f,	// (0x00041c53) phob2_cc_data_pane_g2_ParamLimits

0xc36f,	// (0x00041c53) phob2_cc_data_pane_g2

0x0001,

0xfe00,	// (0x000456e4) phob2_cc_data_pane_g_ParamLimits

0xfe00,	// (0x000456e4) phob2_cc_data_pane_g

0xc37e,	// (0x00041c62) phob2_cc_data_pane_t1_ParamLimits

0xc37e,	// (0x00041c62) phob2_cc_data_pane_t1

0xc393,	// (0x00041c77) phob2_cc_data_pane_t2_ParamLimits

0xc393,	// (0x00041c77) phob2_cc_data_pane_t2

0xc3a8,	// (0x00041c8c) phob2_cc_data_pane_t3_ParamLimits

0xc3a8,	// (0x00041c8c) phob2_cc_data_pane_t3

0x0002,

0xfe05,	// (0x000456e9) phob2_cc_data_pane_t_ParamLimits

0xfe05,	// (0x000456e9) phob2_cc_data_pane_t

0xee24,	// (0x00044708) phob2_cc_list_pane_ParamLimits

0xee24,	// (0x00044708) phob2_cc_list_pane

0xdf2c,	// (0x00043810) scroll_pane_cp035_ParamLimits

0xdf2c,	// (0x00043810) scroll_pane_cp035

0x0dad,	// (0x00036691) bg_button_pane_cp033

0xee30,	// (0x00044714) phob2_cc_button_pane_g1

0xee3c,	// (0x00044720) phob2_cc_button_pane_t1

0xee51,	// (0x00044735) phob2_cc_button_pane_t2

0x0001,

0xfe0c,	// (0x000456f0) phob2_cc_button_pane_t

0xc3bd,	// (0x00041ca1) list_double_large_graphic_phob2_cc_pane_ParamLimits

0xc3bd,	// (0x00041ca1) list_double_large_graphic_phob2_cc_pane

0xc431,	// (0x00041d15) list_double_large_graphic_phob2_cc_pane_g1_ParamLimits

0xc431,	// (0x00041d15) list_double_large_graphic_phob2_cc_pane_g1

0x5539,	// (0x0003ae1d) list_double_large_graphic_phob2_cc_pane_g2_ParamLimits

0x5539,	// (0x0003ae1d) list_double_large_graphic_phob2_cc_pane_g2

0x5545,	// (0x0003ae29) list_double_large_graphic_phob2_cc_pane_g3_ParamLimits

0x5545,	// (0x0003ae29) list_double_large_graphic_phob2_cc_pane_g3

0x5551,	// (0x0003ae35) list_double_large_graphic_phob2_cc_pane_g4_ParamLimits

0x5551,	// (0x0003ae35) list_double_large_graphic_phob2_cc_pane_g4

0x555d,	// (0x0003ae41) list_double_large_graphic_phob2_cc_pane_g5_ParamLimits

0x555d,	// (0x0003ae41) list_double_large_graphic_phob2_cc_pane_g5

0x0004,

0xfe11,	// (0x000456f5) list_double_large_graphic_phob2_cc_pane_g_ParamLimits

0xfe11,	// (0x000456f5) list_double_large_graphic_phob2_cc_pane_g

0x5569,	// (0x0003ae4d) list_double_large_graphic_phob2_cc_pane_t1_ParamLimits

0x5569,	// (0x0003ae4d) list_double_large_graphic_phob2_cc_pane_t1

0x5592,	// (0x0003ae76) list_double_large_graphic_phob2_cc_pane_t2_ParamLimits

0x5592,	// (0x0003ae76) list_double_large_graphic_phob2_cc_pane_t2

0x0001,

0xfe1c,	// (0x00045700) list_double_large_graphic_phob2_cc_pane_t_ParamLimits

0xfe1c,	// (0x00045700) list_double_large_graphic_phob2_cc_pane_t

0xee63,	// (0x00044747) list_highlight_pane_cp025_ParamLimits

0xee63,	// (0x00044747) list_highlight_pane_cp025

0x0dad,	// (0x00036691) bg_button_pane_cp033_ParamLimits

0xee30,	// (0x00044714) phob2_cc_button_pane_g1_ParamLimits

0xee3c,	// (0x00044720) phob2_cc_button_pane_t1_ParamLimits

0xee51,	// (0x00044735) phob2_cc_button_pane_t2_ParamLimits

0xfe0c,	// (0x000456f0) phob2_cc_button_pane_t_ParamLimits

0x5810,	// (0x0003b0f4) popup_wgtman_window

0xd61f,	// (0x00042f03) scroll_pane_cp038

0xbed8,	// (0x000417bc) wgtman_btn_pane_cp_01_ParamLimits

0xbed8,	// (0x000417bc) wgtman_btn_pane_cp_01

0xee71,	// (0x00044755) wgtman_content_pane

0xee7a,	// (0x0004475e) wgtman_heading_pane

0x07bf,	// (0x000360a3) bg_heading_pane_cp02

0xee83,	// (0x00044767) wgtman_heading_pane_g1

0xee8b,	// (0x0004476f) wgtman_heading_pane_t1

0xee99,	// (0x0004477d) scroll_pane_cp036

0xeea1,	// (0x00044785) wgtman_list_pane

0xed9d,	// (0x00044681) wgtman_list_pane_t1_ParamLimits

0xed9d,	// (0x00044681) wgtman_list_pane_t1

0x996f,	// (0x0003f253) cam4_grid_pane

0x4b8a,	// (0x0003a46e) bg_button_pane_cp015_ParamLimits

0xa620,	// (0x0003ff04) bg_button_pane_cp016_ParamLimits

0xa62c,	// (0x0003ff10) bg_button_pane_cp017_ParamLimits

0xa647,	// (0x0003ff2b) popup_vitu2_query_window_g3_ParamLimits

0xa647,	// (0x0003ff2b) popup_vitu2_query_window_g3

0x4c49,	// (0x0003a52d) popup_vitu2_query_window_t6_ParamLimits

0x4c49,	// (0x0003a52d) popup_vitu2_query_window_t6

0x4c74,	// (0x0003a558) popup_vitu2_query_window_t7_ParamLimits

0x4c74,	// (0x0003a558) popup_vitu2_query_window_t7

0xedb8,	// (0x0004469c) cam4_grid_pane_g1

0xedc1,	// (0x000446a5) cam4_grid_pane_g2

0xeea9,	// (0x0004478d) cam4_grid_pane_g3

0xeeb2,	// (0x00044796) cam4_grid_pane_g4

0x0003,

0xfe21,	// (0x00045705) cam4_grid_pane_g

0x6272,	// (0x0003bb56) aid_placing_vt_slider_lsc_ParamLimits

0x65b2,	// (0x0003be96) vidtel_button_pane_ParamLimits

0x65b2,	// (0x0003be96) vidtel_button_pane

0x07bf,	// (0x000360a3) bg_button_pane_cp034

0xeebd,	// (0x000447a1) vidtel_button_pane_g1

0xeec5,	// (0x000447a9) vidtel_button_pane_t1

0xd746,	// (0x0004302a) aid_size_vtel_slider_touch

0xdf2c,	// (0x00043810) scroll_pane_cp039

0xb2df,	// (0x00040bc3) ncim_query_button_pane_cp01_ParamLimits

0xb2fe,	// (0x00040be2) ncimui_query_pane_g1_ParamLimits

0x0dad,	// (0x00036691) input_focus_pane_cp012_ParamLimits

0xe04f,	// (0x00043933) ncim_query_entry_pane_t1_ParamLimits

0xdf2c,	// (0x00043810) scroll_pane_cp039_ParamLimits

0x19c7,	// (0x000372ab) navi_pane_bcale_mc_g1

0x19cf,	// (0x000372b3) navi_pane_bcale_mc_t1

0xe57b,	// (0x00043e5f) main_sp_fs_email_pane_g1

0xe587,	// (0x00043e6b) main_sp_fs_email_pane_g2

0x0001,

0xfc1f,	// (0x00045503) main_sp_fs_email_pane_g

0xe854,	// (0x00044138) list_single_cale_mrui_row_pane_g3_ParamLimits

0xe854,	// (0x00044138) list_single_cale_mrui_row_pane_g3

0x540b,	// (0x0003acef) list_single_recal_day_pane_g5_event_pane

0x5421,	// (0x0003ad05) list_single_recal_day_pane_g7

0xeedb,	// (0x000447bf) list_recal_day_event_pane_cp01

0xeee4,	// (0x000447c8) list_recal_vselct_arw_lo_pane_cp01

0xeeec,	// (0x000447d0) list_recal_vselct_arw_up_pane_cp01

0xeef4,	// (0x000447d8) list_recal_vselct_pane_cp01

0xd756,	// (0x0004303a) list_recal_day_event_pane_cp01_g1

0x55bb,	// (0x0003ae9f) list_recal_day_event_pane_cp01_t1

0x5429,	// (0x0003ad0d) list_single_recal_day_pane_t1_ParamLimits

0x543b,	// (0x0003ad1f) list_single_recal_day_pane_t2_ParamLimits

0xfd04,	// (0x000455e8) list_single_recal_day_pane_t_ParamLimits

0x0e45,	// (0x00036729) bg_notes_pane_ParamLimits

0x0f3a,	// (0x0003681e) list_notes_pane_ParamLimits

0x5953,	// (0x0003b237) scroll_pane_cp06_ParamLimits

0x0f5c,	// (0x00036840) main_notes_pane_ParamLimits

0x0dad,	// (0x00036691) main_welc_pane

0xc464,	// (0x00041d48) main_welc_body_pane_ParamLimits

0xc464,	// (0x00041d48) main_welc_body_pane

0xc47d,	// (0x00041d61) main_welc_opti_pane_ParamLimits

0xc47d,	// (0x00041d61) main_welc_opti_pane

0xc4d8,	// (0x00041dbc) main_welc_pane_t1_ParamLimits

0xc4d8,	// (0x00041dbc) main_welc_pane_t1

0xc66e,	// (0x00041f52) main_welc_body_row_pane_ParamLimits

0xc66e,	// (0x00041f52) main_welc_body_row_pane

0x0eb2,	// (0x00036796) main_welc_opti_row_pane_ParamLimits

0x0eb2,	// (0x00036796) main_welc_opti_row_pane

0xef0e,	// (0x000447f2) main_welc_opti_row_pane_g1

0xc697,	// (0x00041f7b) main_welc_opti_row_pane_t1

0xef16,	// (0x000447fa) main_welc_body_row_pane_t1

0xebd7,	// (0x000444bb) popup_notif_wgt_heading_pane

0xebf1,	// (0x000444d5) aid_size_list_notif_wgt_del_ParamLimits

0xebfe,	// (0x000444e2) list_notif_wgt_row_pane_g1_ParamLimits

0xec0a,	// (0x000444ee) list_notif_wgt_row_pane_g2_ParamLimits

0xec19,	// (0x000444fd) list_notif_wgt_row_pane_g3_ParamLimits

0xfd6b,	// (0x0004564f) list_notif_wgt_row_pane_g_ParamLimits

0xec26,	// (0x0004450a) list_notif_wgt_row_pane_t1_ParamLimits

0xec3c,	// (0x00044520) list_notif_wgt_row_pane_t2_ParamLimits

0xec4e,	// (0x00044532) list_notif_wgt_row_pane_t3_ParamLimits

0xfd72,	// (0x00045656) list_notif_wgt_row_pane_t_ParamLimits

0xbf6b,	// (0x0004184f) listrow_wgtman_pane_g1_ParamLimits

0xbf78,	// (0x0004185c) listrow_wgtman_pane_g2_ParamLimits

0xfda2,	// (0x00045686) listrow_wgtman_pane_g_ParamLimits

0x5499,	// (0x0003ad7d) listrow_wgtman_pane_t1_ParamLimits

0x54b1,	// (0x0003ad95) listrow_wgtman_pane_t2_ParamLimits

0xfda7,	// (0x0004568b) listrow_wgtman_pane_t_ParamLimits

0x54d7,	// (0x0003adbb) wait_bar_pane_cp09_ParamLimits

0x07bf,	// (0x000360a3) bg_popup_heading_pane_cp02

0xef25,	// (0x00044809) popup_notif_wgt_heading_pane_g1

0xef2d,	// (0x00044811) popup_notif_wgt_heading_pane_t1

0x07bf,	// (0x000360a3) main_vids_pane

0x07bf,	// (0x000360a3) vids_listscroll_pane

0xc6a6,	// (0x00041f8a) scroll_pane_cp040

0x07bf,	// (0x000360a3) vids_list_pane

0xc6b1,	// (0x00041f95) vids_list_double_pane_ParamLimits

0xc6b1,	// (0x00041f95) vids_list_double_pane

0xc6c9,	// (0x00041fad) vids_list_double_pane_g1

0xc6d2,	// (0x00041fb6) vids_list_double_pane_t1

0xc6e2,	// (0x00041fc6) vids_list_double_pane_t2

0x0001,

0xfe40,	// (0x00045724) vids_list_double_pane_t

0x0dad,	// (0x00036691) main_ncimui_pane_ParamLimits

0xb136,	// (0x00040a1a) main_ncimui_pane_g1_ParamLimits

0xb142,	// (0x00040a26) main_ncimui_pane_g2_ParamLimits

0xb142,	// (0x00040a26) main_ncimui_pane_g2

0x0001,

0xfb20,	// (0x00045404) main_ncimui_pane_g_ParamLimits

0xfb20,	// (0x00045404) main_ncimui_pane_g

0xc496,	// (0x00041d7a) main_welc_pane_g1_ParamLimits

0xc496,	// (0x00041d7a) main_welc_pane_g1

0xc4a2,	// (0x00041d86) main_welc_pane_g2_ParamLimits

0xc4a2,	// (0x00041d86) main_welc_pane_g2

0x0003,

0xfe2a,	// (0x0004570e) main_welc_pane_g_ParamLimits

0xfe2a,	// (0x0004570e) main_welc_pane_g

0x0e45,	// (0x00036729) listscroll_mce_pane_ParamLimits

0x1b1c,	// (0x00037400) wait_bar_pane_cp10

0x2e23,	// (0x00038707) main_cale_day_pane_ParamLimits

0x2e23,	// (0x00038707) main_cale_week_pane_ParamLimits

0x0e45,	// (0x00036729) main_messa_pane_ParamLimits

0x8e03,	// (0x0003e6e7) main_clock2_btn_pane_ParamLimits

0x8e03,	// (0x0003e6e7) main_clock2_btn_pane

0x3696,	// (0x00038f7a) main_clock2_btn_pane_cp01_ParamLimits

0x3696,	// (0x00038f7a) main_clock2_btn_pane_cp01

0xe825,	// (0x00044109) list_cale_mrui_pane_ParamLimits

0xec84,	// (0x00044568) main_cf0_pane_g2

0x0001,

0xfd79,	// (0x0004565d) main_cf0_pane_g

0xc12b,	// (0x00041a0f) area_left_week_number_pane_ParamLimits

0xc13e,	// (0x00041a22) area_top_day_name_pane_ParamLimits

0xc14c,	// (0x00041a30) frame_month_view_pane_ParamLimits

0xedd9,	// (0x000446bd) grid_month_view_pane_ParamLimits

0xede7,	// (0x000446cb) frm_month_g1_ParamLimits

0xc1ca,	// (0x00041aae) frm_month_g2_ParamLimits

0xc1db,	// (0x00041abf) frm_month_g3_ParamLimits

0xc1ec,	// (0x00041ad0) frm_month_g4_ParamLimits

0xc1fd,	// (0x00041ae1) frm_month_g5_ParamLimits

0xc210,	// (0x00041af4) frm_month_g6_ParamLimits

0xc223,	// (0x00041b07) frm_month_g7_ParamLimits

0xedf4,	// (0x000446d8) frm_month_g8_ParamLimits

0xc236,	// (0x00041b1a) frm_month_g9_ParamLimits

0xc243,	// (0x00041b27) frm_month_g10_ParamLimits

0xc250,	// (0x00041b34) frm_month_g11_ParamLimits

0xc25d,	// (0x00041b41) frm_month_g12_ParamLimits

0xc26a,	// (0x00041b4e) frm_month_g13_ParamLimits

0xc277,	// (0x00041b5b) frm_month_g14_ParamLimits

0xc286,	// (0x00041b6a) frm_month_g15_ParamLimits

0xc295,	// (0x00041b79) frm_month_g16_ParamLimits

0xfdd1,	// (0x000456b5) frm_month_g_ParamLimits

0xee01,	// (0x000446e5) cell_top_day_name_pane_t1_ParamLimits

0xc2a4,	// (0x00041b88) cell_area_left_week_number_pane_g1_ParamLimits

0xc2b3,	// (0x00041b97) cell_area_left_week_number_pane_t1_ParamLimits

0x0ec0,	// (0x000367a4) cell_month_view_pane_g1_ParamLimits

0xc2c9,	// (0x00041bad) cell_month_view_pane_t1_ParamLimits

0x0e3d,	// (0x00036721) main_clock2_btn_pane_g1

0xef3b,	// (0x0004481f) main_clock2_btn_pane_t1

0x0dad,	// (0x00036691) listscroll_cmail_pane_ParamLimits

0xe57b,	// (0x00043e5f) main_sp_fs_email_pane_g1_ParamLimits

0xe587,	// (0x00043e6b) main_sp_fs_email_pane_g2_ParamLimits

0xfc1f,	// (0x00045503) main_sp_fs_email_pane_g_ParamLimits

0xe95a,	// (0x0004423e) list_recal_day_pane_ParamLimits

0xe96b,	// (0x0004424f) mian_recal_day_pane_t1

0x4ffa,	// (0x0003a8de) list_single_dyc_row_text_pane_t4_ParamLimits

0x4ffa,	// (0x0003a8de) list_single_dyc_row_text_pane_t4

0x5031,	// (0x0003a915) list_single_dyc_row_text_pane_t5_ParamLimits

0x5031,	// (0x0003a915) list_single_dyc_row_text_pane_t5

0x50a7,	// (0x0003a98b) list_single_dyc_row_text_pane_t6_ParamLimits

0x50a7,	// (0x0003a98b) list_single_dyc_row_text_pane_t6

0x742b,	// (0x0003cd0f) aid_mgn_list_cale_time_pane

0x0dad,	// (0x00036691) main_gallery2_pane_ParamLimits

0x36ac,	// (0x00038f90) main_clock2_pane_cp01_t1

0x36ba,	// (0x00038f9e) main_clock2_pane_cp01_t3

0x0001,

0xf70f,	// (0x00044ff3) main_clock2_pane_cp01_t

0x5da8,	// (0x0003b68c) cale_week_scroll_pane_g16_ParamLimits

0x5da8,	// (0x0003b68c) cale_week_scroll_pane_g16

0x1125,	// (0x00036a09) vorec_slider_pane

0xeec5,	// (0x000447a9) vidtel_button_pane_t1_ParamLimits

0xbbc7,	// (0x000414ab) main_fs_bigclock_clock_pane_g1_ParamLimits

0xbbc7,	// (0x000414ab) main_fs_bigclock_clock_pane_g2_ParamLimits

0xbbd4,	// (0x000414b8) main_fs_bigclock_clock_pane_g3_ParamLimits

0xbbd4,	// (0x000414b8) main_fs_bigclock_clock_pane_g4_ParamLimits

0xfd27,	// (0x0004560b) main_fs_bigclock_clock_pane_g_ParamLimits

0xbbe0,	// (0x000414c4) main_fs_bigclock_clock_pane_t1_ParamLimits

0xbbf3,	// (0x000414d7) main_fs_bigclock_clock_pane_t2_ParamLimits

0xfd30,	// (0x00045614) main_fs_bigclock_clock_pane_t_ParamLimits

0x87a8,	// (0x0003e08c) main_mup3_lyrics_pane_ParamLimits

0x87a8,	// (0x0003e08c) main_mup3_lyrics_pane

0xc715,	// (0x00041ff9) main_mup3_lyrics_pane_t1_ParamLimits

0xc715,	// (0x00041ff9) main_mup3_lyrics_pane_t1

0x9337,	// (0x0003ec1b) aid_main_mp4_pane_t1_area

0x9341,	// (0x0003ec25) aid_main_mp4_pane_t2_area

0x9446,	// (0x0003ed2a) main_mp4_pane_g7_ParamLimits

0x9446,	// (0x0003ed2a) main_mp4_pane_g7

0x9452,	// (0x0003ed36) main_mp4_pane_g8_ParamLimits

0x9452,	// (0x0003ed36) main_mp4_pane_g8

0x9829,	// (0x0003f10d) aid_call6_pane_g1_size

0xc403,	// (0x00041ce7) list_double_large_graphic_phob2_other_pane_ParamLimits

0xc403,	// (0x00041ce7) list_double_large_graphic_phob2_other_pane

0x14a0,	// (0x00036d84) list_double_large_graphic_phob2_other_pane_g1

0x07bf,	// (0x000360a3) list_highlight_pane_cp026

0x0dad,	// (0x00036691) main_welc_pane_ParamLimits

0xb68b,	// (0x00040f6f) main_sp_fs_ctrlbar_pane_g3_ParamLimits

0xb68b,	// (0x00040f6f) main_sp_fs_ctrlbar_pane_g3

0xb6a3,	// (0x00040f87) main_sp_fs_ctrlbar_pane_g4_ParamLimits

0xb6a3,	// (0x00040f87) main_sp_fs_ctrlbar_pane_g4

0xb6d5,	// (0x00040fb9) toolbar2_fixed_button_pane_cp01

0xb6e0,	// (0x00040fc4) toolbar2_fixed_button_pane_cp02

0xb6eb,	// (0x00040fcf) toolbar2_fixed_button_pane_cp03

0xc454,	// (0x00041d38) list_welc_entry_pane_ParamLimits

0xc454,	// (0x00041d38) list_welc_entry_pane

0xc4b0,	// (0x00041d94) main_welc_pane_g3_ParamLimits

0xc4b0,	// (0x00041d94) main_welc_pane_g3

0xc4f2,	// (0x00041dd6) main_welc_pane_t2_ParamLimits

0xc4f2,	// (0x00041dd6) main_welc_pane_t2

0xc506,	// (0x00041dea) main_welc_pane_t3_ParamLimits

0xc506,	// (0x00041dea) main_welc_pane_t3

0x0005,

0xfe33,	// (0x00045717) main_welc_pane_t_ParamLimits

0xfe33,	// (0x00045717) main_welc_pane_t

0xc602,	// (0x00041ee6) welc_button_pane_ParamLimits

0xc602,	// (0x00041ee6) welc_button_pane

0xc660,	// (0x00041f44) welc_service_logo_pane_ParamLimits

0xc660,	// (0x00041f44) welc_service_logo_pane

0xc74b,	// (0x0004202f) list_single_welc_entry_pane_ParamLimits

0xc74b,	// (0x0004202f) list_single_welc_entry_pane

0xc75c,	// (0x00042040) list_single_welc_entry_pane_g1

0xc764,	// (0x00042048) list_single_welc_entry_pane_t1

0xc772,	// (0x00042056) list_single_welc_entry_pane_t2

0x0001,

0xfe45,	// (0x00045729) list_single_welc_entry_pane_t

0x07bf,	// (0x000360a3) bg_button_pane_cp035

0xc780,	// (0x00042064) welc_button_pane_t1

0xef49,	// (0x0004482d) welc_service_logo_pane_g1

0xef52,	// (0x00044836) welc_service_logo_pane_g2

0x0001,

0xfe4a,	// (0x0004572e) welc_service_logo_pane_g

0x07bf,	// (0x000360a3) main_int_radio_pane

0xdee1,	// (0x000437c5) list_single_fs_dyc_pane_g1

0x54f5,	// (0x0003add9) list_double_large_graphic_phob2_pane_g3_ParamLimits

0x54f5,	// (0x0003add9) list_double_large_graphic_phob2_pane_g3

0x5501,	// (0x0003ade5) list_double_large_graphic_phob2_pane_g4_ParamLimits

0x5501,	// (0x0003ade5) list_double_large_graphic_phob2_pane_g4

0xc78e,	// (0x00042072) main_int_radio1_pane_ParamLimits

0xc78e,	// (0x00042072) main_int_radio1_pane

0xef5b,	// (0x0004483f) find_pane_cp02

0xc7a0,	// (0x00042084) input_focus_pane_cp12_ParamLimits

0xc7a0,	// (0x00042084) input_focus_pane_cp12

0xc7ac,	// (0x00042090) input_focus_pane_cp13_ParamLimits

0xc7ac,	// (0x00042090) input_focus_pane_cp13

0xc7c4,	// (0x000420a8) input_focus_pane_cp14_ParamLimits

0xc7c4,	// (0x000420a8) input_focus_pane_cp14

0xef64,	// (0x00044848) int_radio1_listscroll_pane

0xc7dc,	// (0x000420c0) main_int_radio1_pane_g1_ParamLimits

0xc7dc,	// (0x000420c0) main_int_radio1_pane_g1

0xc7ec,	// (0x000420d0) main_int_radio1_pane_t1_ParamLimits

0xc7ec,	// (0x000420d0) main_int_radio1_pane_t1

0xc800,	// (0x000420e4) main_int_radio1_pane_t2_ParamLimits

0xc800,	// (0x000420e4) main_int_radio1_pane_t2

0xc814,	// (0x000420f8) main_int_radio1_pane_t3_ParamLimits

0xc814,	// (0x000420f8) main_int_radio1_pane_t3

0xc828,	// (0x0004210c) main_int_radio1_pane_t4_ParamLimits

0xc828,	// (0x0004210c) main_int_radio1_pane_t4

0xef6e,	// (0x00044852) main_int_radio1_pane_t5_ParamLimits

0xef6e,	// (0x00044852) main_int_radio1_pane_t5

0xc83f,	// (0x00042123) main_int_radio1_pane_t6_ParamLimits

0xc83f,	// (0x00042123) main_int_radio1_pane_t6

0xc851,	// (0x00042135) main_int_radio1_pane_t7_ParamLimits

0xc851,	// (0x00042135) main_int_radio1_pane_t7

0xc863,	// (0x00042147) main_int_radio1_pane_t8_ParamLimits

0xc863,	// (0x00042147) main_int_radio1_pane_t8

0xc877,	// (0x0004215b) main_int_radio1_pane_t9_ParamLimits

0xc877,	// (0x0004215b) main_int_radio1_pane_t9

0xc889,	// (0x0004216d) main_int_radio1_pane_t10_ParamLimits

0xc889,	// (0x0004216d) main_int_radio1_pane_t10

0xc8ba,	// (0x0004219e) main_int_radio1_pane_t11_ParamLimits

0xc8ba,	// (0x0004219e) main_int_radio1_pane_t11

0xc8eb,	// (0x000421cf) main_int_radio1_pane_t12_ParamLimits

0xc8eb,	// (0x000421cf) main_int_radio1_pane_t12

0x000b,

0xfe4f,	// (0x00045733) main_int_radio1_pane_t_ParamLimits

0xfe4f,	// (0x00045733) main_int_radio1_pane_t

0xef80,	// (0x00044864) int_radio_list_pane

0xe93d,	// (0x00044221) scroll_pane_cp037

0xef88,	// (0x0004486c) list_double_large_graphic_int_radio_pane_ParamLimits

0xef88,	// (0x0004486c) list_double_large_graphic_int_radio_pane

0xefa1,	// (0x00044885) list_double_large_graphic_int_radio_pane_g1

0x55c9,	// (0x0003aead) list_double_large_graphic_int_radio_pane_t1

0x55d7,	// (0x0003aebb) list_double_large_graphic_int_radio_pane_t2

0x0001,

0xfe68,	// (0x0004574c) list_double_large_graphic_int_radio_pane_t

0x07bf,	// (0x000360a3) list_highlight_pane_cp027

0xeefe,	// (0x000447e2) main_button_pane_4

0xc4bc,	// (0x00041da0) main_welc_pane_g4_ParamLimits

0xc4bc,	// (0x00041da0) main_welc_pane_g4

0xc518,	// (0x00041dfc) main_welc_pane_t4_ParamLimits

0xc518,	// (0x00041dfc) main_welc_pane_t4

0xc52a,	// (0x00041e0e) main_welc_pane_t5_ParamLimits

0xc52a,	// (0x00041e0e) main_welc_pane_t5

0xc55a,	// (0x00041e3e) main_welc_pane_t6_ParamLimits

0xc55a,	// (0x00041e3e) main_welc_pane_t6

0xc610,	// (0x00041ef4) welc_button_pane_2_ParamLimits

0xc610,	// (0x00041ef4) welc_button_pane_2

0xc628,	// (0x00041f0c) welc_button_pane_3_ParamLimits

0xc628,	// (0x00041f0c) welc_button_pane_3

0xef06,	// (0x000447ea) welc_button_pane_4

0xc642,	// (0x00041f26) welc_button_pane_5_ParamLimits

0xc642,	// (0x00041f26) welc_button_pane_5

0x5639,	// (0x0003af1d) main_popup_welc_pane

0xefc2,	// (0x000448a6) main_welc_sk_g3

0xefcc,	// (0x000448b0) main_welc_sk_g4

0xefd6,	// (0x000448ba) main_welc_sk_t3

0xefe6,	// (0x000448ca) main_welc_sk_t4

0xeff6,	// (0x000448da) popup_welc_pane_t4

0xf004,	// (0x000448e8) popup_welc_pane_t5

0xf012,	// (0x000448f6) popup_welc_pane_t6

0x07bf,	// (0x000360a3) main_acti_pane

0x07bf,	// (0x000360a3) main_sso_pane

0xc902,	// (0x000421e6) sso_body_pane_ParamLimits

0xc902,	// (0x000421e6) sso_body_pane

0xc910,	// (0x000421f4) sso_logo_pane_ParamLimits

0xc910,	// (0x000421f4) sso_logo_pane

0xc941,	// (0x00042225) sso_sk_pane_ParamLimits

0xc941,	// (0x00042225) sso_sk_pane

0x03ab,	// (0x00035c8f) main_sso_logo_pane_g1

0xc94e,	// (0x00042232) sso_sk_pane_t1_ParamLimits

0xc94e,	// (0x00042232) sso_sk_pane_t1

0xc962,	// (0x00042246) sso_sk_pane_t2_ParamLimits

0xc962,	// (0x00042246) sso_sk_pane_t2

0x0001,

0xfe6d,	// (0x00045751) sso_sk_pane_t_ParamLimits

0xfe6d,	// (0x00045751) sso_sk_pane_t

0x03b6,	// (0x00035c9a) aid_sso_gap

0x03bf,	// (0x00035ca3) aid_sso_txt1

0x03c9,	// (0x00035cad) aid_sso_txt2

0x03d3,	// (0x00035cb7) aid_sso_txt3

0x0002,

0xfe72,	// (0x00045756) aid_sso_txt

0x03dd,	// (0x00035cc1) aid_sso_widget

0xc9bf,	// (0x000422a3) sso_btn_pane_ParamLimits

0xc9bf,	// (0x000422a3) sso_btn_pane

0xca33,	// (0x00042317) sso_option_pane_ParamLimits

0xca33,	// (0x00042317) sso_option_pane

0xcadf,	// (0x000423c3) sso_query_pane_ParamLimits

0xcadf,	// (0x000423c3) sso_query_pane

0xcb2f,	// (0x00042413) sso_query_pane_cp01_ParamLimits

0xcb2f,	// (0x00042413) sso_query_pane_cp01

0xcb81,	// (0x00042465) sso_t_hdr_pane_ParamLimits

0xcb81,	// (0x00042465) sso_t_hdr_pane

0xcba5,	// (0x00042489) sso_t_nml_pane_ParamLimits

0xcba5,	// (0x00042489) sso_t_nml_pane

0x03e7,	// (0x00035ccb) sso_t_sub_pane

0xc91d,	// (0x00042201) sso_popup_window_ParamLimits

0xc91d,	// (0x00042201) sso_popup_window

0xc974,	// (0x00042258) sso_apps_pane_ParamLimits

0xc974,	// (0x00042258) sso_apps_pane

0xc997,	// (0x0004227b) sso_body_pane_g1

0xc99f,	// (0x00042283) sso_body_pane_t1

0xc9af,	// (0x00042293) sso_body_pane_t2

0x0001,

0xfe79,	// (0x0004575d) sso_body_pane_t

0xca03,	// (0x000422e7) sso_btn_pane_cp01_ParamLimits

0xca03,	// (0x000422e7) sso_btn_pane_cp01

0xcab1,	// (0x00042395) sso_prog_pane_ParamLimits

0xcab1,	// (0x00042395) sso_prog_pane

0xcbf5,	// (0x000424d9) sso_t_hdr_pane_t1_ParamLimits

0xcbf5,	// (0x000424d9) sso_t_hdr_pane_t1

0x03fc,	// (0x00035ce0) input_focus_pane_cp10_ParamLimits

0x03fc,	// (0x00035ce0) input_focus_pane_cp10

0x0410,	// (0x00035cf4) sso_query_pane_t1_ParamLimits

0x0410,	// (0x00035cf4) sso_query_pane_t1

0x0423,	// (0x00035d07) sso_query_pane_t2_ParamLimits

0x0423,	// (0x00035d07) sso_query_pane_t2

0x043c,	// (0x00035d20) sso_query_pane_t3_ParamLimits

0x043c,	// (0x00035d20) sso_query_pane_t3

0x0466,	// (0x00035d4a) sso_query_pane_t4_ParamLimits

0x0466,	// (0x00035d4a) sso_query_pane_t4

0x0003,

0xfe7e,	// (0x00045762) sso_query_pane_t_ParamLimits

0xfe7e,	// (0x00045762) sso_query_pane_t

0xefb9,	// (0x0004489d) bg_button_pane_cp22

0xefaa,	// (0x0004488e) sso_btn_pane_t1

0xcc0e,	// (0x000424f2) sso_t_nml_pane_t1_ParamLimits

0xcc0e,	// (0x000424f2) sso_t_nml_pane_t1

0x048a,	// (0x00035d6e) sso_option_row_pane_ParamLimits

0x048a,	// (0x00035d6e) sso_option_row_pane

0x0497,	// (0x00035d7b) sso_t_sub_pane_t1_ParamLimits

0x0497,	// (0x00035d7b) sso_t_sub_pane_t1

0x0dad,	// (0x00036691) bg_popup_window_pane_cp11_ParamLimits

0x0dad,	// (0x00036691) bg_popup_window_pane_cp11

0x04b4,	// (0x00035d98) popup_sk_window_cp01_ParamLimits

0x04b4,	// (0x00035d98) popup_sk_window_cp01

0x04c1,	// (0x00035da5) sso_popup_body_pane_ParamLimits

0x04c1,	// (0x00035da5) sso_popup_body_pane

0x04ce,	// (0x00035db2) scroll_pane_cp21_ParamLimits

0x04ce,	// (0x00035db2) scroll_pane_cp21

0x04db,	// (0x00035dbf) sso_popup_body_t_pane_ParamLimits

0x04db,	// (0x00035dbf) sso_popup_body_t_pane

0x04e8,	// (0x00035dcc) sso_popup_body_t_hdr_pane_ParamLimits

0x04e8,	// (0x00035dcc) sso_popup_body_t_hdr_pane

0xcc2b,	// (0x0004250f) sso_popup_body_t_nml_pane_ParamLimits

0xcc2b,	// (0x0004250f) sso_popup_body_t_nml_pane

0xcc49,	// (0x0004252d) sso_popup_body_t_sub_pane_ParamLimits

0xcc49,	// (0x0004252d) sso_popup_body_t_sub_pane

0x04fa,	// (0x00035dde) sso_popup_body_t_hdr_pane_t1

0xcc6c,	// (0x00042550) sso_popup_body_t_nml_pane_t1_ParamLimits

0xcc6c,	// (0x00042550) sso_popup_body_t_nml_pane_t1

0x050a,	// (0x00035dee) sso_popup_body_t_sub_pane_t1_ParamLimits

0x050a,	// (0x00035dee) sso_popup_body_t_sub_pane_t1

0x0efe,	// (0x000367e2) sso_prog_pane_g1

0xccb3,	// (0x00042597) sso_apps_pane_comp1_ParamLimits

0xccb3,	// (0x00042597) sso_apps_pane_comp1

0x052f,	// (0x00035e13) sso_apps_pane_comp1_g1

0x0537,	// (0x00035e1b) sso_apps_pane_comp1_t1

0x0553,	// (0x00035e37) sso_option_row_pane_g1

0x055b,	// (0x00035e3f) sso_option_row_pane_t1

0xe65c,	// (0x00043f40) list_cmail_pane_ParamLimits

0x07bf,	// (0x000360a3) main_call7_pane

0xc442,	// (0x00041d26) bg_welc_area_ParamLimits

0xc442,	// (0x00041d26) bg_welc_area

0xc590,	// (0x00041e74) sso_t_hdr_pane_a_t1_ParamLimits

0xc590,	// (0x00041e74) sso_t_hdr_pane_a_t1

0xc5a4,	// (0x00041e88) sso_t_nml_pane_a_t1_ParamLimits

0xc5a4,	// (0x00041e88) sso_t_nml_pane_a_t1

0xc5ce,	// (0x00041eb2) sso_t_sub_pane_a_t1_ParamLimits

0xc5ce,	// (0x00041eb2) sso_t_sub_pane_a_t1

0xc652,	// (0x00041f36) welc_button_pane_cp01_ParamLimits

0xc652,	// (0x00041f36) welc_button_pane_cp01

0xefaa,	// (0x0004488e) sso_btn_pane_t1_copy1

0xefb9,	// (0x0004489d) welc_button_pane_2_comp1

0xf020,	// (0x00044904) sso_t_hdr_pane_p_t1

0xf030,	// (0x00044914) sso_t_nml_pane_p_t1

0x039b,	// (0x00035c7f) sso_t_sub_pane_p_t1

0x07bf,	// (0x000360a3) main_att_pane

0x07bf,	// (0x000360a3) main_vod_pane

0x03e7,	// (0x00035ccb) sso_t_sub_pane_ParamLimits

0x0545,	// (0x00035e29) input_focus_pane_cp10_t1

0x055b,	// (0x00035e3f) sso_option_row_pane_t1_ParamLimits

0xcccd,	// (0x000425b1) main_att_body_pane_ParamLimits

0xcccd,	// (0x000425b1) main_att_body_pane

0xcce1,	// (0x000425c5) att_btn_emg_pane_ParamLimits

0xcce1,	// (0x000425c5) att_btn_emg_pane

0xccf9,	// (0x000425dd) att_btn_pane_ParamLimits

0xccf9,	// (0x000425dd) att_btn_pane

0xcd61,	// (0x00042645) att_btn_pane_cp01_ParamLimits

0xcd61,	// (0x00042645) att_btn_pane_cp01

0xcd7b,	// (0x0004265f) att_li_srv_pane_ParamLimits

0xcd7b,	// (0x0004265f) att_li_srv_pane

0xcd8d,	// (0x00042671) att_opt_pane_ParamLimits

0xcd8d,	// (0x00042671) att_opt_pane

0xcdd1,	// (0x000426b5) att_query_pane_ParamLimits

0xcdd1,	// (0x000426b5) att_query_pane

0xce41,	// (0x00042725) att_query_pane_cp01_ParamLimits

0xce41,	// (0x00042725) att_query_pane_cp01

0xce85,	// (0x00042769) att_t_hdr_pane_ParamLimits

0xce85,	// (0x00042769) att_t_hdr_pane

0xceeb,	// (0x000427cf) att_t_nml_pane_ParamLimits

0xceeb,	// (0x000427cf) att_t_nml_pane

0xcf53,	// (0x00042837) att_t_nml_pane_cp01_ParamLimits

0xcf53,	// (0x00042837) att_t_nml_pane_cp01

0xcf77,	// (0x0004285b) att_t_nmlb_pane_ParamLimits

0xcf77,	// (0x0004285b) att_t_nmlb_pane

0xcfdb,	// (0x000428bf) att_term_pane_ParamLimits

0xcfdb,	// (0x000428bf) att_term_pane

0xd01d,	// (0x00042901) main_att_body_pane_g1_ParamLimits

0xd01d,	// (0x00042901) main_att_body_pane_g1

0x0574,	// (0x00035e58) att_t_hdr_pane_t1_ParamLimits

0x0574,	// (0x00035e58) att_t_hdr_pane_t1

0x058d,	// (0x00035e71) att_t_nml_pane_t1_ParamLimits

0x058d,	// (0x00035e71) att_t_nml_pane_t1

0x05b2,	// (0x00035e96) att_btn_pane_t1

0xefb9,	// (0x0004489d) bg_button_pane_cp23

0xd047,	// (0x0004292b) att_li_srv_row_pane_ParamLimits

0xd047,	// (0x0004292b) att_li_srv_row_pane

0x05c2,	// (0x00035ea6) att_t_nmlb_pane_t1_ParamLimits

0x05c2,	// (0x00035ea6) att_t_nmlb_pane_t1

0x05e0,	// (0x00035ec4) att_query_pane_t1

0x05ef,	// (0x00035ed3) att_query_pane_t2

0x05fe,	// (0x00035ee2) att_query_pane_t3

0x0002,

0xfe87,	// (0x0004576b) att_query_pane_t

0x060d,	// (0x00035ef1) input_focus_pane_cp11

0x0616,	// (0x00035efa) att_term_pane_t1_ParamLimits

0x0616,	// (0x00035efa) att_term_pane_t1

0x07bf,	// (0x000360a3) att_opt_row_pane

0x0553,	// (0x00035e37) att_opt_row_pane_g1

0x0633,	// (0x00035f17) att_opt_row_pane_t1_ParamLimits

0x0633,	// (0x00035f17) att_opt_row_pane_t1

0xd057,	// (0x0004293b) att_li_srv_row_pane_g1

0xd05f,	// (0x00042943) att_li_srv_row_pane_t1_ParamLimits

0xd05f,	// (0x00042943) att_li_srv_row_pane_t1

0xd074,	// (0x00042958) att_li_srv_row_pane_t2_ParamLimits

0xd074,	// (0x00042958) att_li_srv_row_pane_t2

0x0001,

0xfe8e,	// (0x00045772) att_li_srv_row_pane_t_ParamLimits

0xfe8e,	// (0x00045772) att_li_srv_row_pane_t

0x064c,	// (0x00035f30) att_btn_close_pane_g1

0x07bf,	// (0x000360a3) bg_button_pane_cp24

0x81da,	// (0x0003dabe) main_vod_body_pane_ParamLimits

0x81da,	// (0x0003dabe) main_vod_body_pane

0xd089,	// (0x0004296d) main_vod_body_pane_g1_ParamLimits

0xd089,	// (0x0004296d) main_vod_body_pane_g1

0xd0b9,	// (0x0004299d) scroll_pane_cp24_ParamLimits

0xd0b9,	// (0x0004299d) scroll_pane_cp24

0xd101,	// (0x000429e5) vod_btn_pane_ParamLimits

0xd101,	// (0x000429e5) vod_btn_pane

0xd13f,	// (0x00042a23) vod_det_pane_ParamLimits

0xd13f,	// (0x00042a23) vod_det_pane

0xd169,	// (0x00042a4d) vod_logo_g1_ParamLimits

0xd169,	// (0x00042a4d) vod_logo_g1

0xd1a3,	// (0x00042a87) vod_opt_pane_ParamLimits

0xd1a3,	// (0x00042a87) vod_opt_pane

0xd1d3,	// (0x00042ab7) vod_opt_pane_cp01_ParamLimits

0xd1d3,	// (0x00042ab7) vod_opt_pane_cp01

0xd1fb,	// (0x00042adf) vod_query_pane_ParamLimits

0xd1fb,	// (0x00042adf) vod_query_pane

0xd223,	// (0x00042b07) vod_query_pane_cp01_ParamLimits

0xd223,	// (0x00042b07) vod_query_pane_cp01

0xd22f,	// (0x00042b13) vod_t_nml_pane_ParamLimits

0xd22f,	// (0x00042b13) vod_t_nml_pane

0xd2d1,	// (0x00042bb5) vod_t_nml_pane_cp01_ParamLimits

0xd2d1,	// (0x00042bb5) vod_t_nml_pane_cp01

0xd309,	// (0x00042bed) vod_t_sub_pane_ParamLimits

0xd309,	// (0x00042bed) vod_t_sub_pane

0xd335,	// (0x00042c19) vod_t_sub_pane_cp01_ParamLimits

0xd335,	// (0x00042c19) vod_t_sub_pane_cp01

0x060d,	// (0x00035ef1) vod_query_field_pane

0x0654,	// (0x00035f38) vod_query_pane_t1

0xefb9,	// (0x0004489d) bg_button_pane_cp25

0xefaa,	// (0x0004488e) sso_btn_pane_t1_copy2

0xd35d,	// (0x00042c41) vod_t_nml_pane_t1_ParamLimits

0xd35d,	// (0x00042c41) vod_t_nml_pane_t1

0x0663,	// (0x00035f47) vod_opt_row_pane_ParamLimits

0x0663,	// (0x00035f47) vod_opt_row_pane

0x0675,	// (0x00035f59) vod_t_sub_pane_t1_ParamLimits

0x0675,	// (0x00035f59) vod_t_sub_pane_t1

0x068e,	// (0x00035f72) vod_det_cell_pane_ParamLimits

0x068e,	// (0x00035f72) vod_det_cell_pane

0x07bf,	// (0x000360a3) input_focus_pane_cp15

0x069f,	// (0x00035f83) vod_query_field_pane_t1

0x06ad,	// (0x00035f91) vod_opt_row_pane_g1_ParamLimits

0x06ad,	// (0x00035f91) vod_opt_row_pane_g1

0x06b9,	// (0x00035f9d) vod_opt_row_pane_t1_ParamLimits

0x06b9,	// (0x00035f9d) vod_opt_row_pane_t1

0x06d8,	// (0x00035fbc) vod_det_cell_field_pane

0x06e1,	// (0x00035fc5) vod_det_cell_pane_g1

0x06e9,	// (0x00035fcd) vod_det_cell_pane_t1

0x07bf,	// (0x000360a3) input_focus_pane_cp16

0x06f8,	// (0x00035fdc) vod_det_cell_field_pane_t1

0xbe55,	// (0x00041739) call7_btn_grp_pane_ParamLimits

0xbe55,	// (0x00041739) call7_btn_grp_pane

0xd392,	// (0x00042c76) call7_bubble_pane_ParamLimits

0xd392,	// (0x00042c76) call7_bubble_pane

0xbe90,	// (0x00041774) cell_call7_btn_pane_ParamLimits

0xbe90,	// (0x00041774) cell_call7_btn_pane

0xd3a0,	// (0x00042c84) call7_pane_g1_ParamLimits

0xd3a0,	// (0x00042c84) call7_pane_g1

0xd3af,	// (0x00042c93) call7_windows_conf_pane_ParamLimits

0xd3af,	// (0x00042c93) call7_windows_conf_pane

0xd3cb,	// (0x00042caf) popup_call7_1st_window_ParamLimits

0xd3cb,	// (0x00042caf) popup_call7_1st_window

0xd3d9,	// (0x00042cbd) popup_call7_2nd_window_ParamLimits

0xd3d9,	// (0x00042cbd) popup_call7_2nd_window

0xd3e7,	// (0x00042ccb) popup_call7_3rd_window_ParamLimits

0xd3e7,	// (0x00042ccb) popup_call7_3rd_window

0x07bf,	// (0x000360a3) bg_button_pane_cp26

0xed01,	// (0x000445e5) cell_call7_btn_pane_g1

0xedca,	// (0x000446ae) cell_call7_btn_pane_t1

0x07bf,	// (0x000360a3) bg_popup_window_pane_cp12

0x0706,	// (0x00035fea) popup_call7_1st_window_g1

0x070e,	// (0x00035ff2) popup_call7_1st_window_g2

0x0716,	// (0x00035ffa) popup_call7_1st_window_g3

0x0002,

0xfe93,	// (0x00045777) popup_call7_1st_window_g

0x071e,	// (0x00036002) popup_call7_1st_window_t1

0x072d,	// (0x00036011) popup_call7_1st_window_t2

0x073b,	// (0x0003601f) popup_call7_1st_window_t3

0x0002,

0xfe9a,	// (0x0004577e) popup_call7_1st_window_t

0x07bf,	// (0x000360a3) bg_popup_window_pane_cp13

0x0749,	// (0x0003602d) popup_call7_2nd_window_g1

0x0751,	// (0x00036035) popup_call7_2nd_window_g2

0x0759,	// (0x0003603d) popup_call7_2nd_window_g3

0x0002,

0xfea1,	// (0x00045785) popup_call7_2nd_window_g

0x0761,	// (0x00036045) popup_call7_2nd_window_t1

0x07bf,	// (0x000360a3) bg_popup_window_pane_cp14

0x0770,	// (0x00036054) call7_list_conf_pane

0x0778,	// (0x0003605c) call7_list_conf_row_pane_ParamLimits

0x0778,	// (0x0003605c) call7_list_conf_row_pane

0x078b,	// (0x0003606f) call7_list_conf_row_pane_g1

0x0793,	// (0x00036077) call7_list_conf_row_pane_g2

0x0001,

0xfea8,	// (0x0004578c) call7_list_conf_row_pane_g

0x079b,	// (0x0003607f) call7_list_conf_row_pane_t1

0x07bf,	// (0x000360a3) list_highlight_pane_cp22

0xca83,	// (0x00042367) sso_option_pane_cp01_ParamLimits

0xca83,	// (0x00042367) sso_option_pane_cp01

0x0e45,	// (0x00036729) msg_header_pane_ParamLimits

0x1ca0,	// (0x00037584) bg_button_pane_cp01_ParamLimits

0x492e,	// (0x0003a212) input_focus_pane_cp07_ParamLimits

0xb71f,	// (0x00041003) popup_email_progress_window

0x0efe,	// (0x000367e2) popup_email_progress_window_g1

0x07a9,	// (0x0003608d) popup_email_progress_window_g2

0x0001,

0xfead,	// (0x00045791) popup_email_progress_window_g

0x07b1,	// (0x00036095) popup_email_progress_window_t1
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

} // end of namespace AknLayoutScalable_Elaf_pnp4_apps_nhd4_prt_tch_Small
