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

#include "aknlayoutscalable_abrw_php_apps_qhd_prt_tch_small.h"
#include "AknLayout2ScalableDecode.h"
namespace AknLayoutScalable_Apps { extern const TUint8 KByteCodedData_AknLayoutScalable_Elaf_php_apps_qhd_prt_tch[]; }

namespace AknLayoutScalable_Abrw_php_apps_qhd_prt_tch_Small
{

extern const TUint16 KDataLookup[AknLayoutScalable_Apps::E_TApiId_TableSize];
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Apps::KByteCodedData_AknLayoutScalable_Elaf_php_apps_qhd_prt_tch + 0x00051ba0 };

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
0x31e0,	// (0x00054d80) Screen

0x31ec,	// (0x00054d8c) application_window

0x3248,	// (0x00054de8) area_bottom_pane_ParamLimits

0x3248,	// (0x00054de8) area_bottom_pane

0x32a0,	// (0x00054e40) area_top_pane_ParamLimits

0x32a0,	// (0x00054e40) area_top_pane

0x3304,	// (0x00054ea4) call_video_uplink_pane_ParamLimits

0x3304,	// (0x00054ea4) call_video_uplink_pane

0x3343,	// (0x00054ee3) main_pane_ParamLimits

0x3343,	// (0x00054ee3) main_pane

0xe4e5,	// (0x00060085) context_pane

0x5fd5,	// (0x00057b75) navi_pane

0x5ffb,	// (0x00057b9b) popup_cale_events_window_ParamLimits

0x5ffb,	// (0x00057b9b) popup_cale_events_window

0xe4f8,	// (0x00060098) popup_mup_playback_window

0x6013,	// (0x00057bb3) signal_pane

0xc079,	// (0x0005dc19) main_browser_pane

0xc22b,	// (0x0005ddcb) main_burst_pane

0x5e53,	// (0x000579f3) main_calc_pane

0xe4d9,	// (0x00060079) main_cale_day_pane

0x37f4,	// (0x00055394) main_cale_month_pane

0xe4d9,	// (0x00060079) main_cale_week_pane

0xc22b,	// (0x0005ddcb) main_call_pane

0xbcf9,	// (0x0005d899) main_call_poc_pane

0xc22b,	// (0x0005ddcb) main_camera_pane

0xc22b,	// (0x0005ddcb) main_chi_dic_pane

0xcf7a,	// (0x0005eb1a) main_clock_pane

0xbcf9,	// (0x0005d899) main_fmradio_pane

0xc22b,	// (0x0005ddcb) main_graph_messa_pane

0xbcf9,	// (0x0005d899) main_help_pane

0xc079,	// (0x0005dc19) main_im_pane

0xbf54,	// (0x0005daf4) main_image_pane_ParamLimits

0xbf54,	// (0x0005daf4) main_image_pane

0xbcf9,	// (0x0005d899) main_location2_pane

0xc22b,	// (0x0005ddcb) main_location_pane

0xbf54,	// (0x0005daf4) main_messa_pane

0xbcf9,	// (0x0005d899) main_mp2_pane

0xc22b,	// (0x0005ddcb) main_mp_pane

0xbcf9,	// (0x0005d899) main_msg_pane

0xbcf9,	// (0x0005d899) main_mup_eq_pane

0xbcf9,	// (0x0005d899) main_mup_pane

0xc079,	// (0x0005dc19) main_notes_pane

0xbcf9,	// (0x0005d899) main_pec_pane

0xbcf9,	// (0x0005d899) main_phob_pane

0xbcf9,	// (0x0005d899) main_pinb_pane

0xbcf9,	// (0x0005d899) main_postcard_pane

0xbcf9,	// (0x0005d899) main_qdial_pane

0xc22b,	// (0x0005ddcb) main_skin_pane

0xbcf9,	// (0x0005d899) main_smil2_pane

0xc22b,	// (0x0005ddcb) main_smil_pane

0xc22b,	// (0x0005ddcb) main_video_pane

0xc22b,	// (0x0005ddcb) main_video_tele_pane

0xbf54,	// (0x0005daf4) main_viewer_pane_ParamLimits

0xbf54,	// (0x0005daf4) main_viewer_pane

0xc22b,	// (0x0005ddcb) main_vorec_pane

0x5e9f,	// (0x00057a3f) popup_blid_sat_info_window_ParamLimits

0x5e9f,	// (0x00057a3f) popup_blid_sat_info_window

0x5ebf,	// (0x00057a5f) popup_dyc_status_message_window_ParamLimits

0x5ebf,	// (0x00057a5f) popup_dyc_status_message_window

0x5ecf,	// (0x00057a6f) popup_grid_large_graphic_window_ParamLimits

0x5ecf,	// (0x00057a6f) popup_grid_large_graphic_window

0x5f60,	// (0x00057b00) popup_loc_request_window_ParamLimits

0x5f60,	// (0x00057b00) popup_loc_request_window

0x5fad,	// (0x00057b4d) popup_wml_address_window_ParamLimits

0x5fad,	// (0x00057b4d) popup_wml_address_window

0x5d2b,	// (0x000578cb) call_muted_g1

0x5a1e,	// (0x000575be) popup_call_audio_conf_window_ParamLimits

0x5a1e,	// (0x000575be) popup_call_audio_conf_window

0x5d3b,	// (0x000578db) popup_call_audio_first_window_ParamLimits

0x5d3b,	// (0x000578db) popup_call_audio_first_window

0x5d7b,	// (0x0005791b) popup_call_audio_in_window_ParamLimits

0x5d7b,	// (0x0005791b) popup_call_audio_in_window

0x5d9f,	// (0x0005793f) popup_call_audio_out_window_ParamLimits

0x5d9f,	// (0x0005793f) popup_call_audio_out_window

0x5dc1,	// (0x00057961) popup_call_audio_second_window_ParamLimits

0x5dc1,	// (0x00057961) popup_call_audio_second_window

0x5df1,	// (0x00057991) popup_call_audio_wait_window_ParamLimits

0x5df1,	// (0x00057991) popup_call_audio_wait_window

0x5e12,	// (0x000579b2) popup_number_entry_window_ParamLimits

0x5e12,	// (0x000579b2) popup_number_entry_window

0xb8e6,	// (0x0005d486) bg_popup_call_pane_cp05_ParamLimits

0xb8e6,	// (0x0005d486) bg_popup_call_pane_cp05

0xb906,	// (0x0005d4a6) popup_number_entry_window_t1

0xb919,	// (0x0005d4b9) popup_number_entry_window_t2

0xb92b,	// (0x0005d4cb) popup_number_entry_window_t3

0x0003,

0xf040,	// (0x00060be0) popup_number_entry_window_t

0xb93d,	// (0x0005d4dd) text_title_cp2

0xb950,	// (0x0005d4f0) bg_popup_call_pane_cp_ParamLimits

0xb950,	// (0x0005d4f0) bg_popup_call_pane_cp

0xb95e,	// (0x0005d4fe) call_thumbnail_pane

0xb966,	// (0x0005d506) popup_call_audio_in_window_g1_ParamLimits

0xb966,	// (0x0005d506) popup_call_audio_in_window_g1

0xb972,	// (0x0005d512) popup_call_audio_in_window_g2_ParamLimits

0xb972,	// (0x0005d512) popup_call_audio_in_window_g2

0xb97e,	// (0x0005d51e) popup_call_audio_in_window_g3_ParamLimits

0xb97e,	// (0x0005d51e) popup_call_audio_in_window_g3

0x0002,

0xf049,	// (0x00060be9) popup_call_audio_in_window_g_ParamLimits

0xf049,	// (0x00060be9) popup_call_audio_in_window_g

0xb98a,	// (0x0005d52a) popup_call_audio_in_window_t1_ParamLimits

0xb98a,	// (0x0005d52a) popup_call_audio_in_window_t1

0xb9a6,	// (0x0005d546) popup_call_audio_in_window_t2_ParamLimits

0xb9a6,	// (0x0005d546) popup_call_audio_in_window_t2

0xb9c2,	// (0x0005d562) popup_call_audio_in_window_t3_ParamLimits

0xb9c2,	// (0x0005d562) popup_call_audio_in_window_t3

0x0002,

0xf050,	// (0x00060bf0) popup_call_audio_in_window_t_ParamLimits

0xf050,	// (0x00060bf0) popup_call_audio_in_window_t

0xb950,	// (0x0005d4f0) bg_popup_call_pane_cp01_ParamLimits

0xb950,	// (0x0005d4f0) bg_popup_call_pane_cp01

0xb95e,	// (0x0005d4fe) call_thumbnail_pane_cp02

0xb9d5,	// (0x0005d575) call_type_pane_cp022

0xb9dd,	// (0x0005d57d) popup_call_audio_out_window_g1_ParamLimits

0xb9dd,	// (0x0005d57d) popup_call_audio_out_window_g1

0xb9ef,	// (0x0005d58f) popup_call_audio_out_window_g2_ParamLimits

0xb9ef,	// (0x0005d58f) popup_call_audio_out_window_g2

0xb9fb,	// (0x0005d59b) popup_call_audio_out_window_g3_ParamLimits

0xb9fb,	// (0x0005d59b) popup_call_audio_out_window_g3

0x0002,

0xf057,	// (0x00060bf7) popup_call_audio_out_window_g_ParamLimits

0xf057,	// (0x00060bf7) popup_call_audio_out_window_g

0xba0d,	// (0x0005d5ad) popup_call_audio_out_window_t1_ParamLimits

0xba0d,	// (0x0005d5ad) popup_call_audio_out_window_t1

0xba25,	// (0x0005d5c5) popup_call_audio_out_window_t2_ParamLimits

0xba25,	// (0x0005d5c5) popup_call_audio_out_window_t2

0x0001,

0xf05e,	// (0x00060bfe) popup_call_audio_out_window_t_ParamLimits

0xf05e,	// (0x00060bfe) popup_call_audio_out_window_t

0xba3a,	// (0x0005d5da) bg_popup_call_pane_ParamLimits

0xba3a,	// (0x0005d5da) bg_popup_call_pane

0x34bf,	// (0x0005505f) call_thumbnail_pane_cp_ParamLimits

0x34bf,	// (0x0005505f) call_thumbnail_pane_cp

0xbabe,	// (0x0005d65e) call_type_pane_cp01_ParamLimits

0xbabe,	// (0x0005d65e) call_type_pane_cp01

0xbb02,	// (0x0005d6a2) popup_call_audio_first_window_g1_ParamLimits

0xbb02,	// (0x0005d6a2) popup_call_audio_first_window_g1

0xbb4e,	// (0x0005d6ee) popup_call_audio_first_window_g2_ParamLimits

0xbb4e,	// (0x0005d6ee) popup_call_audio_first_window_g2

0x0001,

0xf063,	// (0x00060c03) popup_call_audio_first_window_g_ParamLimits

0xf063,	// (0x00060c03) popup_call_audio_first_window_g

0xbb92,	// (0x0005d732) popup_call_audio_first_window_t1_ParamLimits

0xbb92,	// (0x0005d732) popup_call_audio_first_window_t1

0xbc3e,	// (0x0005d7de) popup_call_audio_first_window_t4_ParamLimits

0xbc3e,	// (0x0005d7de) popup_call_audio_first_window_t4

0xbcca,	// (0x0005d86a) popup_call_audio_first_window_t5_ParamLimits

0xbcca,	// (0x0005d86a) popup_call_audio_first_window_t5

0x0002,

0xf068,	// (0x00060c08) popup_call_audio_first_window_t_ParamLimits

0xf068,	// (0x00060c08) popup_call_audio_first_window_t

0xbcf9,	// (0x0005d899) bg_popup_call_pane_cp02

0xbd03,	// (0x0005d8a3) call_type_pane_cp023

0xbd0b,	// (0x0005d8ab) popup_call_audio_wait_window_g1

0xbd13,	// (0x0005d8b3) popup_call_audio_wait_window_g2

0x0001,

0xf06f,	// (0x00060c0f) popup_call_audio_wait_window_g

0xbd1b,	// (0x0005d8bb) popup_call_audio_wait_window_t3

0xbd29,	// (0x0005d8c9) bg_popup_call_pane_cp03_ParamLimits

0xbd29,	// (0x0005d8c9) bg_popup_call_pane_cp03

0xbd89,	// (0x0005d929) call_thumbnail_pane_cp011_ParamLimits

0xbd89,	// (0x0005d929) call_thumbnail_pane_cp011

0xbd95,	// (0x0005d935) call_type_pane_cp034_ParamLimits

0xbd95,	// (0x0005d935) call_type_pane_cp034

0xbdd1,	// (0x0005d971) popup_call_audio_second_window_g1_ParamLimits

0xbdd1,	// (0x0005d971) popup_call_audio_second_window_g1

0xbe0d,	// (0x0005d9ad) popup_call_audio_second_window_g2_ParamLimits

0xbe0d,	// (0x0005d9ad) popup_call_audio_second_window_g2

0x0001,

0xf074,	// (0x00060c14) popup_call_audio_second_window_g_ParamLimits

0xf074,	// (0x00060c14) popup_call_audio_second_window_g

0xbe49,	// (0x0005d9e9) popup_call_audio_second_window_t1_ParamLimits

0xbe49,	// (0x0005d9e9) popup_call_audio_second_window_t1

0xbeca,	// (0x0005da6a) popup_call_audio_second_window_t2_ParamLimits

0xbeca,	// (0x0005da6a) popup_call_audio_second_window_t2

0xbf00,	// (0x0005daa0) popup_call_audio_second_window_t3_ParamLimits

0xbf00,	// (0x0005daa0) popup_call_audio_second_window_t3

0x0002,

0xf079,	// (0x00060c19) popup_call_audio_second_window_t_ParamLimits

0xf079,	// (0x00060c19) popup_call_audio_second_window_t

0xbcf9,	// (0x0005d899) bg_popup_call_pane_cp04

0xbf36,	// (0x0005dad6) list_conf_pane

0xbf3e,	// (0x0005dade) popup_call_audio_conf_window_t1

0xbf4c,	// (0x0005daec) call_thumbnail_pane_g1

0xbf54,	// (0x0005daf4) bg_pinb_pane_ParamLimits

0xbf54,	// (0x0005daf4) bg_pinb_pane

0xbf62,	// (0x0005db02) find_pinb_pane

0xbf54,	// (0x0005daf4) listscroll_pinb_pane_ParamLimits

0xbf54,	// (0x0005daf4) listscroll_pinb_pane

0xbf6c,	// (0x0005db0c) pinb_bg_pane_g1

0xbf6c,	// (0x0005db0c) pinb_bg_pane_g2

0xbf6c,	// (0x0005db0c) pinb_bg_pane_g3

0xbf6c,	// (0x0005db0c) pinb_bg_pane_g4

0xbf6c,	// (0x0005db0c) pinb_bg_pane_g5

0xbf6c,	// (0x0005db0c) pinb_bg_pane_g6

0xbf6c,	// (0x0005db0c) pinb_bg_pane_g7

0xbf6c,	// (0x0005db0c) pinb_bg_pane_g8

0xbf6c,	// (0x0005db0c) pinb_bg_pane_g9

0xbf6c,	// (0x0005db0c) pinb_bg_pane_g10

0x0009,

0xf080,	// (0x00060c20) pinb_bg_pane_g

0xb8dc,	// (0x0005d47c) grid_pinb_pane

0xb8dc,	// (0x0005d47c) list_pinb_pane

0xbf76,	// (0x0005db16) scroll_pane_cp01_ParamLimits

0xbf76,	// (0x0005db16) scroll_pane_cp01

0xbf84,	// (0x0005db24) find_pinb_pane_g1_ParamLimits

0xbf84,	// (0x0005db24) find_pinb_pane_g1

0xbf9c,	// (0x0005db3c) find_pinb_pane_t1

0xbfae,	// (0x0005db4e) find_pinb_pane_t2

0x0001,

0xf09a,	// (0x00060c3a) find_pinb_pane_t

0xbfc3,	// (0x0005db63) input_focus_pane_cp01_ParamLimits

0xbfc3,	// (0x0005db63) input_focus_pane_cp01

0xbfcf,	// (0x0005db6f) cell_pinb_pane_ParamLimits

0xbfcf,	// (0x0005db6f) cell_pinb_pane

0xbfdd,	// (0x0005db7d) cell_pinb_pane_g1_ParamLimits

0xbfdd,	// (0x0005db7d) cell_pinb_pane_g1

0xbfeb,	// (0x0005db8b) cell_pinb_pane_g2_ParamLimits

0xbfeb,	// (0x0005db8b) cell_pinb_pane_g2

0xbfeb,	// (0x0005db8b) cell_pinb_pane_g3_ParamLimits

0xbfeb,	// (0x0005db8b) cell_pinb_pane_g3

0x0002,

0xf09f,	// (0x00060c3f) cell_pinb_pane_g_ParamLimits

0xf09f,	// (0x00060c3f) cell_pinb_pane_g

0xbcf9,	// (0x0005d899) grid_highlight_pane_cp01

0xbfcf,	// (0x0005db6f) list_pinb_item_pane_ParamLimits

0xbfcf,	// (0x0005db6f) list_pinb_item_pane

0xb8dc,	// (0x0005d47c) list_highlight_pane_cp02

0xbff9,	// (0x0005db99) list_pinb_item_pane_g1_ParamLimits

0xbff9,	// (0x0005db99) list_pinb_item_pane_g1

0xbfeb,	// (0x0005db8b) list_pinb_item_pane_g2_ParamLimits

0xbfeb,	// (0x0005db8b) list_pinb_item_pane_g2

0xbfdd,	// (0x0005db7d) list_pinb_item_pane_g3_ParamLimits

0xbfdd,	// (0x0005db7d) list_pinb_item_pane_g3

0xbfeb,	// (0x0005db8b) list_pinb_item_pane_g4_ParamLimits

0xbfeb,	// (0x0005db8b) list_pinb_item_pane_g4

0x0003,

0xf0a6,	// (0x00060c46) list_pinb_item_pane_g_ParamLimits

0xf0a6,	// (0x00060c46) list_pinb_item_pane_g

0xc007,	// (0x0005dba7) list_pinb_item_pane_t1_ParamLimits

0xc007,	// (0x0005dba7) list_pinb_item_pane_t1

0x34fd,	// (0x0005509d) calc_display_pane

0x351b,	// (0x000550bb) calc_paper_pane

0x3537,	// (0x000550d7) grid_calc_pane

0xb8dc,	// (0x0005d47c) bg_list_pane_cp01

0xc01b,	// (0x0005dbbb) clock_g1

0xc01b,	// (0x0005dbbb) clock_g2

0x0001,

0xf0af,	// (0x00060c4f) clock_g

0xc025,	// (0x0005dbc5) clock_t1_ParamLimits

0xc025,	// (0x0005dbc5) clock_t1

0xc039,	// (0x0005dbd9) clock_t2_ParamLimits

0xc039,	// (0x0005dbd9) clock_t2

0xc039,	// (0x0005dbd9) clock_t3_ParamLimits

0xc039,	// (0x0005dbd9) clock_t3

0xc039,	// (0x0005dbd9) clock_t4_ParamLimits

0xc039,	// (0x0005dbd9) clock_t4

0xc025,	// (0x0005dbc5) clock_t5_ParamLimits

0xc025,	// (0x0005dbc5) clock_t5

0xc039,	// (0x0005dbd9) clock_t6_ParamLimits

0xc039,	// (0x0005dbd9) clock_t6

0xc039,	// (0x0005dbd9) clock_t7_ParamLimits

0xc039,	// (0x0005dbd9) clock_t7

0xc039,	// (0x0005dbd9) clock_t8_ParamLimits

0xc039,	// (0x0005dbd9) clock_t8

0xc039,	// (0x0005dbd9) clock_t9_ParamLimits

0xc039,	// (0x0005dbd9) clock_t9

0x0008,

0xf0b4,	// (0x00060c54) clock_t_ParamLimits

0xf0b4,	// (0x00060c54) clock_t

0xb8dc,	// (0x0005d47c) popup_clock_analogue_window_cp02

0xb8dc,	// (0x0005d47c) popup_clock_digital_window_cp01

0xbcf9,	// (0x0005d899) listscroll_help_pane

0xbcf9,	// (0x0005d899) phob_pre_status_pane

0xc04d,	// (0x0005dbed) grid_qdial_pane

0xbf54,	// (0x0005daf4) listscroll_mce_pane

0xbf54,	// (0x0005daf4) bg_notes_pane

0xc057,	// (0x0005dbf7) list_notes_pane

0x3563,	// (0x00055103) scroll_pane_cp06

0xc065,	// (0x0005dc05) bg_calc_paper_pane

0x3572,	// (0x00055112) list_calc_pane

0xc079,	// (0x0005dc19) bg_calc_display_pane

0x358c,	// (0x0005512c) calc_display_pane_t1

0x35a1,	// (0x00055141) calc_display_pane_t2

0x35b6,	// (0x00055156) calc_display_pane_t3

0x0002,

0xf0c7,	// (0x00060c67) calc_display_pane_t

0x35c8,	// (0x00055168) cell_calc_pane_ParamLimits

0x35c8,	// (0x00055168) cell_calc_pane

0xc085,	// (0x0005dc25) bg_calc_paper_pane_g1

0xc091,	// (0x0005dc31) bg_calc_paper_pane_g2

0xc09d,	// (0x0005dc3d) bg_calc_paper_pane_g3

0xc0a9,	// (0x0005dc49) bg_calc_paper_pane_g4

0xc0b5,	// (0x0005dc55) bg_calc_paper_pane_g5

0x35f5,	// (0x00055195) bg_calc_paper_pane_g6

0x3606,	// (0x000551a6) bg_calc_paper_pane_g7

0x3617,	// (0x000551b7) bg_calc_paper_pane_g8

0x0007,

0xf0ce,	// (0x00060c6e) bg_calc_paper_pane_g

0x3628,	// (0x000551c8) calc_bg_paper_pane_g9

0x3639,	// (0x000551d9) list_calc_item_pane_ParamLimits

0x3639,	// (0x000551d9) list_calc_item_pane

0xc0c1,	// (0x0005dc61) list_calc_item_pane_g1

0x3665,	// (0x00055205) list_calc_item_pane_t1_ParamLimits

0x3665,	// (0x00055205) list_calc_item_pane_t1

0x3677,	// (0x00055217) list_calc_item_pane_t2_ParamLimits

0x3677,	// (0x00055217) list_calc_item_pane_t2

0x0001,

0xf0df,	// (0x00060c7f) list_calc_item_pane_t_ParamLimits

0xf0df,	// (0x00060c7f) list_calc_item_pane_t

0xbf6c,	// (0x0005db0c) cell_calc_pane_g1

0xc0ce,	// (0x0005dc6e) grid_highlight_pane_cp02

0x36a7,	// (0x00055247) bg_calc_display_pane_g1

0x36b0,	// (0x00055250) bg_calc_display_pane_g2

0x36ba,	// (0x0005525a) bg_calc_display_pane_g3

0x0002,

0xf0e9,	// (0x00060c89) bg_calc_display_pane_g

0x36c3,	// (0x00055263) cell_qdial_pane_ParamLimits

0x36c3,	// (0x00055263) cell_qdial_pane

0x36d7,	// (0x00055277) cell_qdial_pane_g1_ParamLimits

0x36d7,	// (0x00055277) cell_qdial_pane_g1

0x36e4,	// (0x00055284) cell_qdial_pane_g2_ParamLimits

0x36e4,	// (0x00055284) cell_qdial_pane_g2

0xc0f0,	// (0x0005dc90) cell_qdial_pane_g3_ParamLimits

0xc0f0,	// (0x0005dc90) cell_qdial_pane_g3

0x0003,

0xf0f0,	// (0x00060c90) cell_qdial_pane_g_ParamLimits

0xf0f0,	// (0x00060c90) cell_qdial_pane_g

0x3702,	// (0x000552a2) cell_qdial_pane_t1_ParamLimits

0x3702,	// (0x000552a2) cell_qdial_pane_t1

0x371a,	// (0x000552ba) cell_qdial_pane_t2_ParamLimits

0x371a,	// (0x000552ba) cell_qdial_pane_t2

0x372d,	// (0x000552cd) cell_qdial_pane_t3_ParamLimits

0x372d,	// (0x000552cd) cell_qdial_pane_t3

0x0002,

0xf0f9,	// (0x00060c99) cell_qdial_pane_t_ParamLimits

0xf0f9,	// (0x00060c99) cell_qdial_pane_t

0xbcf9,	// (0x0005d899) grid_highlight_pane_cp04

0xc0fc,	// (0x0005dc9c) thumbnail_qdial_pane_ParamLimits

0xc0fc,	// (0x0005dc9c) thumbnail_qdial_pane

0xc158,	// (0x0005dcf8) list_help_pane

0xc161,	// (0x0005dd01) scroll_pane_cp02

0x3740,	// (0x000552e0) help_list_pane_t1_ParamLimits

0x3740,	// (0x000552e0) help_list_pane_t1

0x3776,	// (0x00055316) bg_notes_pane_g2

0x377e,	// (0x0005531e) bg_notes_pane_g3

0x3786,	// (0x00055326) notes_bg_pane_g1

0x378e,	// (0x0005532e) notes_bg_pane_g4

0x3796,	// (0x00055336) notes_bg_pane_g5

0x379e,	// (0x0005533e) notes_bg_pane_g6

0x37a6,	// (0x00055346) notes_bg_pane_g7

0x37ae,	// (0x0005534e) notes_bg_pane_g8

0x37b6,	// (0x00055356) notes_bg_pane_g9

0x0006,

0xf117,	// (0x00060cb7) notes_bg_pane_g

0x37be,	// (0x0005535e) list_notes_text_pane_ParamLimits

0x37be,	// (0x0005535e) list_notes_text_pane

0xc16a,	// (0x0005dd0a) list_notes_text_pane_g1

0x37e6,	// (0x00055386) list_notes_text_pane_t1

0x37f4,	// (0x00055394) listscroll_cale_week_pane

0x3819,	// (0x000553b9) bg_cale_heading_pane

0xc18d,	// (0x0005dd2d) bg_cale_pane_cp01

0x3839,	// (0x000553d9) cale_week_corner_pane

0x3853,	// (0x000553f3) cale_week_day_heading_pane

0x3873,	// (0x00055413) cale_week_scroll_pane_g1

0x388e,	// (0x0005542e) cale_week_scroll_pane_g2

0x38a1,	// (0x00055441) cale_week_scroll_pane_g3

0x38b4,	// (0x00055454) cale_week_scroll_pane_g4

0x38c7,	// (0x00055467) cale_week_scroll_pane_g5

0x38da,	// (0x0005547a) cale_week_scroll_pane_g6

0x38ed,	// (0x0005548d) cale_week_scroll_pane_g7

0x3902,	// (0x000554a2) cale_week_scroll_pane_g8

0x3917,	// (0x000554b7) cale_week_scroll_pane_g9

0x392a,	// (0x000554ca) cale_week_scroll_pane_g10

0x393d,	// (0x000554dd) cale_week_scroll_pane_g11

0x3950,	// (0x000554f0) cale_week_scroll_pane_g12

0x3967,	// (0x00055507) cale_week_scroll_pane_g13

0x3982,	// (0x00055522) cale_week_scroll_pane_g14

0x399d,	// (0x0005553d) cale_week_scroll_pane_g15

0x000f,

0xf126,	// (0x00060cc6) cale_week_scroll_pane_g

0x39cd,	// (0x0005556d) cale_week_time_pane

0x39e2,	// (0x00055582) grid_cale_week_pane

0xc1bc,	// (0x0005dd5c) scroll_pane_cp08

0x3a01,	// (0x000555a1) cell_cale_week_pane_ParamLimits

0x3a01,	// (0x000555a1) cell_cale_week_pane

0x3a63,	// (0x00055603) cale_week_day_heading_pane_t1

0x3a7e,	// (0x0005561e) cale_week_day_heading_pane_t2

0x3a99,	// (0x00055639) cale_week_day_heading_pane_t3

0x3ab4,	// (0x00055654) cale_week_day_heading_pane_t4

0x3acf,	// (0x0005566f) cale_week_day_heading_pane_t5

0x3aea,	// (0x0005568a) cale_week_day_heading_pane_t6

0x3b05,	// (0x000556a5) cale_week_day_heading_pane_t7

0x0006,

0xf147,	// (0x00060ce7) cale_week_day_heading_pane_t

0xc1d9,	// (0x0005dd79) bg_cale_side_pane

0x3b20,	// (0x000556c0) cale_week_time_pane_t1

0x3b3a,	// (0x000556da) cale_week_time_pane_t2

0x3b54,	// (0x000556f4) cale_week_time_pane_t3

0x3b6e,	// (0x0005570e) cale_week_time_pane_t4

0x3b88,	// (0x00055728) cale_week_time_pane_t5

0x3ba2,	// (0x00055742) cale_week_time_pane_t6

0x3bc0,	// (0x00055760) cale_week_time_pane_t7

0x3be2,	// (0x00055782) cale_week_time_pane_t8

0x0007,

0xf156,	// (0x00060cf6) cale_week_time_pane_t

0x3c06,	// (0x000557a6) cell_cale_week_pane_g2

0x3c2a,	// (0x000557ca) cell_cale_week_pane_g3_ParamLimits

0x3c2a,	// (0x000557ca) cell_cale_week_pane_g3

0xc1e7,	// (0x0005dd87) grid_highlight_pane_cp07

0xc1ef,	// (0x0005dd8f) listscroll_gms_pane

0xc1f9,	// (0x0005dd99) grid_gms_pane

0xc202,	// (0x0005dda2) listscroll_gms_pane_g1

0xc20a,	// (0x0005ddaa) listscroll_gms_pane_g2

0x0001,

0xf167,	// (0x00060d07) listscroll_gms_pane_g

0x3c42,	// (0x000557e2) scroll_pane_cp010

0x3c4d,	// (0x000557ed) cell_gms_pane_ParamLimits

0x3c4d,	// (0x000557ed) cell_gms_pane

0x3c60,	// (0x00055800) cell_gms_pane_g1

0xc212,	// (0x0005ddb2) cell_gms_pane_g2

0xc16a,	// (0x0005dd0a) cell_gms_pane_g3

0xc21a,	// (0x0005ddba) cell_gms_pane_g4

0x0003,

0xf16c,	// (0x00060d0c) cell_gms_pane_g

0xc223,	// (0x0005ddc3) grid_highlight_pane_cp09

0x5caf,	// (0x0005784f) phob_pre_status_pane_g1

0x5cb7,	// (0x00057857) phob_pre_status_pane_g2

0x5cbf,	// (0x0005785f) phob_pre_status_pane_g3

0x5cc7,	// (0x00057867) phob_pre_status_pane_g4

0x0004,

0xf525,	// (0x000610c5) phob_pre_status_pane_g

0x5cd7,	// (0x00057877) phob_pre_status_pane_t1

0x5ce7,	// (0x00057887) phob_pre_status_pane_t2

0x5cf7,	// (0x00057897) phob_pre_status_pane_t3

0x0002,

0xf530,	// (0x000610d0) phob_pre_status_pane_t

0xc22b,	// (0x0005ddcb) bg_list_pane_cp05

0x3c70,	// (0x00055810) grid_vorec_pane

0x3c7a,	// (0x0005581a) vorec_t1

0x3c88,	// (0x00055828) vorec_t2

0x3c96,	// (0x00055836) vorec_t3

0x3ca4,	// (0x00055844) vorec_t4

0xabaf,	// (0x0005c74f) vorec_t5

0xabbd,	// (0x0005c75d) vorec_t6

0x0004,

0xf175,	// (0x00060d15) vorec_t

0xabcb,	// (0x0005c76b) wait_bar_pane_cp01

0x3cc0,	// (0x00055860) cell_vorec_pane_ParamLimits

0x3cc0,	// (0x00055860) cell_vorec_pane

0x3cd3,	// (0x00055873) cell_vorec_pane_g1

0xbcf9,	// (0x0005d899) grid_highlight_pane_cp05

0xbfcf,	// (0x0005db6f) cams_zoom_pane

0xbfcf,	// (0x0005db6f) image_vga_pane

0xbfeb,	// (0x0005db8b) main_camera_pane_g1

0xbfeb,	// (0x0005db8b) main_camera_pane_g2

0xbfeb,	// (0x0005db8b) main_camera_pane_g3

0xbfeb,	// (0x0005db8b) main_camera_pane_g4

0xbfeb,	// (0x0005db8b) main_camera_pane_g5

0xbfeb,	// (0x0005db8b) main_camera_pane_g6

0xbfeb,	// (0x0005db8b) main_camera_pane_g7

0x0007,

0xf180,	// (0x00060d20) main_camera_pane_g

0xc039,	// (0x0005dbd9) main_camera_pane_t1

0xc039,	// (0x0005dbd9) main_camera_pane_t2

0x0001,

0xf191,	// (0x00060d31) main_camera_pane_t

0x3cdd,	// (0x0005587d) cams_zoom_pane_cp_ParamLimits

0x3cdd,	// (0x0005587d) cams_zoom_pane_cp

0x3d0b,	// (0x000558ab) image_cif_pane_ParamLimits

0x3d0b,	// (0x000558ab) image_cif_pane

0xb8dc,	// (0x0005d47c) image_subqcif_pane

0x3d19,	// (0x000558b9) main_video_pane_g1_ParamLimits

0x3d19,	// (0x000558b9) main_video_pane_g1

0x3d41,	// (0x000558e1) main_video_pane_g2_ParamLimits

0x3d41,	// (0x000558e1) main_video_pane_g2

0x3d74,	// (0x00055914) main_video_pane_g3_ParamLimits

0x3d74,	// (0x00055914) main_video_pane_g3

0x3d74,	// (0x00055914) main_video_pane_g4_ParamLimits

0x3d74,	// (0x00055914) main_video_pane_g4

0x3da2,	// (0x00055942) main_video_pane_g5_ParamLimits

0x3da2,	// (0x00055942) main_video_pane_g5

0xc233,	// (0x0005ddd3) main_video_pane_g6_ParamLimits

0xc233,	// (0x0005ddd3) main_video_pane_g6

0x0006,

0xf196,	// (0x00060d36) main_video_pane_g_ParamLimits

0xf196,	// (0x00060d36) main_video_pane_g

0x3dbe,	// (0x0005595e) main_video_pane_t1_ParamLimits

0x3dbe,	// (0x0005595e) main_video_pane_t1

0xc01b,	// (0x0005dbbb) cams_zoom_pane_g1

0xc01b,	// (0x0005dbbb) cams_zoom_pane_g2

0xc01b,	// (0x0005dbbb) cams_zoom_pane_g3

0xc01b,	// (0x0005dbbb) cams_zoom_pane_g4

0x0003,

0xf1a5,	// (0x00060d45) cams_zoom_pane_g

0xbfcf,	// (0x0005db6f) grid_cams_pane

0xbfcf,	// (0x0005db6f) linegrid_cams_pane

0x3df8,	// (0x00055998) cell_cams_pane_ParamLimits

0x3df8,	// (0x00055998) cell_cams_pane

0xb8dc,	// (0x0005d47c) cams_burst_image_pane

0xc01b,	// (0x0005dbbb) cell_cams_pane_g1

0xb8dc,	// (0x0005d47c) grid_highlight_pane_cp03

0xbf6c,	// (0x0005db0c) mp_bg_pane_g1

0xb8dc,	// (0x0005d47c) bg_list_pane_cp03

0xb8dc,	// (0x0005d47c) bg_mp_pane

0xb8dc,	// (0x0005d47c) grid_mp_pane

0xc01b,	// (0x0005dbbb) media_player_g1

0xcd02,	// (0x0005e8a2) media_player_t1

0xcd02,	// (0x0005e8a2) media_player_t2

0xcd02,	// (0x0005e8a2) media_player_t3

0xcd02,	// (0x0005e8a2) media_player_t4

0xcd02,	// (0x0005e8a2) media_player_t5

0xcd02,	// (0x0005e8a2) media_player_t6

0xcd02,	// (0x0005e8a2) media_player_t7

0x0006,

0xf50f,	// (0x000610af) media_player_t

0xb8dc,	// (0x0005d47c) wait_bar_pane_cp02

0xf4f4,	// (0x00061094) main_usb_pane_t

0xcf7a,	// (0x0005eb1a) cell_mp_pane

0xbf6c,	// (0x0005db0c) cell_mp_pane_g1

0xbcf9,	// (0x0005d899) grid_highlight_pane_cp06

0xc24d,	// (0x0005dded) grid_skin_colour_pane

0xc255,	// (0x0005ddf5) list_highlight_pane_cp03

0x3e0d,	// (0x000559ad) skin_g1

0xc25d,	// (0x0005ddfd) skin_t1

0xc26c,	// (0x0005de0c) skin_t2

0x0001,

0xf1d3,	// (0x00060d73) skin_t

0x3e17,	// (0x000559b7) cell_skin_colour_pane_ParamLimits

0x3e17,	// (0x000559b7) cell_skin_colour_pane

0xc27a,	// (0x0005de1a) cell_skin_colour_pane_g1

0x3e9b,	// (0x00055a3b) call_video_g1_ParamLimits

0x3e9b,	// (0x00055a3b) call_video_g1

0x3eab,	// (0x00055a4b) call_video_g2_ParamLimits

0x3eab,	// (0x00055a4b) call_video_g2

0x0001,

0xf1d8,	// (0x00060d78) call_video_g_ParamLimits

0xf1d8,	// (0x00060d78) call_video_g

0x3f05,	// (0x00055aa5) call_video_uplink_pane_cp1_ParamLimits

0x3f05,	// (0x00055aa5) call_video_uplink_pane_cp1

0xc28c,	// (0x0005de2c) call_video_uplink_pane_cp2

0x3fd1,	// (0x00055b71) video_down_crop_pane_ParamLimits

0x3fd1,	// (0x00055b71) video_down_crop_pane

0x40cf,	// (0x00055c6f) video_down_pane_ParamLimits

0x40cf,	// (0x00055c6f) video_down_pane

0xc294,	// (0x0005de34) video_down_subqcif_pane_ParamLimits

0xc294,	// (0x0005de34) video_down_subqcif_pane

0xc2ac,	// (0x0005de4c) video_down_subqcif_pane_cp_ParamLimits

0xc2ac,	// (0x0005de4c) video_down_subqcif_pane_cp

0xc2d2,	// (0x0005de72) im_reading_pane_ParamLimits

0xc2d2,	// (0x0005de72) im_reading_pane

0x41ef,	// (0x00055d8f) im_writing_pane_ParamLimits

0x41ef,	// (0x00055d8f) im_writing_pane

0x420d,	// (0x00055dad) im_reading_pane_t1

0xc2ec,	// (0x0005de8c) list_im_pane

0xc2fd,	// (0x0005de9d) scroll_pane_cp07

0x4261,	// (0x00055e01) im_writing_pane_t1_ParamLimits

0x4261,	// (0x00055e01) im_writing_pane_t1

0xc316,	// (0x0005deb6) im_writing_pane_t2_ParamLimits

0xc316,	// (0x0005deb6) im_writing_pane_t2

0x0001,

0xf1e2,	// (0x00060d82) im_writing_pane_t_ParamLimits

0xf1e2,	// (0x00060d82) im_writing_pane_t

0xbcf9,	// (0x0005d899) input_focus_pane_cp04

0xbcf9,	// (0x0005d899) input_focus_pane_cp05

0x4276,	// (0x00055e16) list_im_single_pane_ParamLimits

0x4276,	// (0x00055e16) list_im_single_pane

0x429a,	// (0x00055e3a) list_single_im_pane_t1

0xc22b,	// (0x0005ddcb) blid_accuracy_pane

0xc22b,	// (0x0005ddcb) blid_compass_pane

0xe491,	// (0x00060031) main_location_t1

0xe491,	// (0x00060031) main_location_t2

0xe491,	// (0x00060031) main_location_t3

0x0002,

0xf51e,	// (0x000610be) main_location_t

0xbcf9,	// (0x0005d899) aid_levels_location

0xbf6c,	// (0x0005db0c) blid_accuracy_pane_g1

0xbf6c,	// (0x0005db0c) blid_accuracy_pane_g2

0x0001,

0xf236,	// (0x00060dd6) blid_accuracy_pane_g

0xc35e,	// (0x0005defe) wml_content_pane

0xc39c,	// (0x0005df3c) wml_button_pane_ParamLimits

0xc39c,	// (0x0005df3c) wml_button_pane

0x42a9,	// (0x00055e49) wml_list_single_large_pane_ParamLimits

0x42a9,	// (0x00055e49) wml_list_single_large_pane

0x42d3,	// (0x00055e73) wml_list_single_medium_pane_ParamLimits

0x42d3,	// (0x00055e73) wml_list_single_medium_pane

0x4304,	// (0x00055ea4) wml_list_single_small_pane_ParamLimits

0x4304,	// (0x00055ea4) wml_list_single_small_pane

0xc3b0,	// (0x0005df50) wml_selection_box_pane_ParamLimits

0xc3b0,	// (0x0005df50) wml_selection_box_pane

0xc3c3,	// (0x0005df63) wml_list_single_pane_t1

0xc3d2,	// (0x0005df72) wml_list_single_medium_pane_t1

0xc3e1,	// (0x0005df81) wml_list_single_large_pane_t1

0xc3f0,	// (0x0005df90) input_focus_pane_cp02_ParamLimits

0xc3f0,	// (0x0005df90) input_focus_pane_cp02

0xc403,	// (0x0005dfa3) wml_selection_box_pane_g1

0xc40c,	// (0x0005dfac) wml_selection_box_pane_t1_ParamLimits

0xc40c,	// (0x0005dfac) wml_selection_box_pane_t1

0xbf54,	// (0x0005daf4) bg_wml_button_pane_ParamLimits

0xbf54,	// (0x0005daf4) bg_wml_button_pane

0xc424,	// (0x0005dfc4) wml_button_pane_g1

0xc42c,	// (0x0005dfcc) wml_button_pane_t1

0xc424,	// (0x0005dfc4) wml_button_bg_pane_g1

0xc43c,	// (0x0005dfdc) wml_button_bg_pane_g2

0xc444,	// (0x0005dfe4) wml_button_bg_pane_g3

0xc44c,	// (0x0005dfec) wml_button_bg_pane_g4

0xc454,	// (0x0005dff4) wml_button_bg_pane_g5

0xc45c,	// (0x0005dffc) wml_button_bg_pane_g6

0xc464,	// (0x0005e004) wml_button_bg_pane_g7

0xc46c,	// (0x0005e00c) wml_button_bg_pane_g8

0xc474,	// (0x0005e014) wml_button_bg_pane_g9

0x0008,

0xf1e7,	// (0x00060d87) wml_button_bg_pane_g

0x433e,	// (0x00055ede) bg_list_pane_cp02

0xc47c,	// (0x0005e01c) mce_header_pane_ParamLimits

0xc47c,	// (0x0005e01c) mce_header_pane

0xc492,	// (0x0005e032) mce_icon_pane

0xc492,	// (0x0005e032) mce_image_pane

0xc49b,	// (0x0005e03b) mce_text_pane_ParamLimits

0xc49b,	// (0x0005e03b) mce_text_pane

0x4348,	// (0x00055ee8) scroll_pane_cp03

0xc394,	// (0x0005df34) scroll_pane_cp04

0xc4ae,	// (0x0005e04e) scroll_pane_cp05_ParamLimits

0xc4ae,	// (0x0005e04e) scroll_pane_cp05

0x4352,	// (0x00055ef2) mce_header_field_pane_ParamLimits

0x4352,	// (0x00055ef2) mce_header_field_pane

0x4372,	// (0x00055f12) mce_header_field_pane_2_ParamLimits

0x4372,	// (0x00055f12) mce_header_field_pane_2

0x4388,	// (0x00055f28) mce_header_field_pane_3

0x4390,	// (0x00055f30) list_single_mce_message_pane_ParamLimits

0x4390,	// (0x00055f30) list_single_mce_message_pane

0x43bb,	// (0x00055f5b) list_single_mce_smart_pane_ParamLimits

0x43bb,	// (0x00055f5b) list_single_mce_smart_pane

0xc4ba,	// (0x0005e05a) input_focus_pane_cp03

0xc4c3,	// (0x0005e063) list_header_data_pane

0x43f1,	// (0x00055f91) mce_header_field_pane_t1

0x43ff,	// (0x00055f9f) list_single_mce_header_pane_ParamLimits

0x43ff,	// (0x00055f9f) list_single_mce_header_pane

0xc4cb,	// (0x0005e06b) list_single_mce_header_pane_t1

0xc4da,	// (0x0005e07a) list_single_mce_message_pane_g1

0xc4e2,	// (0x0005e082) list_single_mce_message_pane_t1

0x4451,	// (0x00055ff1) bg_cale_heading_pane_cp01_ParamLimits

0x4451,	// (0x00055ff1) bg_cale_heading_pane_cp01

0xc4f0,	// (0x0005e090) bg_cale_pane_cp02_ParamLimits

0xc4f0,	// (0x0005e090) bg_cale_pane_cp02

0x449f,	// (0x0005603f) cale_month_corner_pane

0x44be,	// (0x0005605e) cale_month_day_heading_pane_ParamLimits

0x44be,	// (0x0005605e) cale_month_day_heading_pane

0x4524,	// (0x000560c4) cale_month_pane_g1_ParamLimits

0x4524,	// (0x000560c4) cale_month_pane_g1

0x4567,	// (0x00056107) cale_month_pane_g2_ParamLimits

0x4567,	// (0x00056107) cale_month_pane_g2

0x459f,	// (0x0005613f) cale_month_pane_g3_ParamLimits

0x459f,	// (0x0005613f) cale_month_pane_g3

0x45eb,	// (0x0005618b) cale_month_pane_g4_ParamLimits

0x45eb,	// (0x0005618b) cale_month_pane_g4

0x4637,	// (0x000561d7) cale_month_pane_g5_ParamLimits

0x4637,	// (0x000561d7) cale_month_pane_g5

0x4683,	// (0x00056223) cale_month_pane_g6_ParamLimits

0x4683,	// (0x00056223) cale_month_pane_g6

0x46cf,	// (0x0005626f) cale_month_pane_g7_ParamLimits

0x46cf,	// (0x0005626f) cale_month_pane_g7

0x4733,	// (0x000562d3) cale_month_pane_g8_ParamLimits

0x4733,	// (0x000562d3) cale_month_pane_g8

0x4797,	// (0x00056337) cale_month_pane_g9_ParamLimits

0x4797,	// (0x00056337) cale_month_pane_g9

0x47f5,	// (0x00056395) cale_month_pane_g10_ParamLimits

0x47f5,	// (0x00056395) cale_month_pane_g10

0x4851,	// (0x000563f1) cale_month_pane_g11_ParamLimits

0x4851,	// (0x000563f1) cale_month_pane_g11

0x48a5,	// (0x00056445) cale_month_pane_g12_ParamLimits

0x48a5,	// (0x00056445) cale_month_pane_g12

0x48fb,	// (0x0005649b) cale_month_pane_g13_ParamLimits

0x48fb,	// (0x0005649b) cale_month_pane_g13

0x000c,

0xf1fa,	// (0x00060d9a) cale_month_pane_g_ParamLimits

0xf1fa,	// (0x00060d9a) cale_month_pane_g

0x4951,	// (0x000564f1) cale_month_week_pane

0x4975,	// (0x00056515) grid_cale_month_pane_ParamLimits

0x4975,	// (0x00056515) grid_cale_month_pane

0x49ce,	// (0x0005656e) cale_month_day_heading_pane_t1

0x4a54,	// (0x000565f4) cale_month_day_heading_pane_t2

0x4acd,	// (0x0005666d) cale_month_day_heading_pane_t3

0x4b46,	// (0x000566e6) cale_month_day_heading_pane_t4

0x4bbf,	// (0x0005675f) cale_month_day_heading_pane_t5

0x4c38,	// (0x000567d8) cale_month_day_heading_pane_t6

0x4cb1,	// (0x00056851) cale_month_day_heading_pane_t7

0x0006,

0xf215,	// (0x00060db5) cale_month_day_heading_pane_t

0xc1d9,	// (0x0005dd79) bg_cale_side_pane_cp01

0x4d42,	// (0x000568e2) cale_month_week_pane_t1

0x4d5b,	// (0x000568fb) cale_month_week_pane_t2

0x4d74,	// (0x00056914) cale_month_week_pane_t3

0x4d8d,	// (0x0005692d) cale_month_week_pane_t4

0x4da6,	// (0x00056946) cale_month_week_pane_t5

0x4dc7,	// (0x00056967) cale_month_week_pane_t6

0x0005,

0xf224,	// (0x00060dc4) cale_month_week_pane_t

0x4de8,	// (0x00056988) cell_cale_month_pane_ParamLimits

0x4de8,	// (0x00056988) cell_cale_month_pane

0x4f0a,	// (0x00056aaa) cell_cale_month_pane_g1

0x4f16,	// (0x00056ab6) cell_cale_month_pane_t1_ParamLimits

0x4f16,	// (0x00056ab6) cell_cale_month_pane_t1

0xc1e7,	// (0x0005dd87) grid_highlight_pane_cp08

0xbf6c,	// (0x0005db0c) main_smil_g1

0x4f42,	// (0x00056ae2) smil_status_pane

0xc52f,	// (0x0005e0cf) smil_text_pane

0xe39b,	// (0x0005ff3b) bg_popup_call3_rect_pane_g8

0xe3a3,	// (0x0005ff43) bg_popup_call3_rect_pane_g9

0x0008,

0xf4b2,	// (0x00061052) bg_popup_call3_rect_pane_g

0xe55a,	// (0x000600fa) smil_status_volume_pane_g1

0xc539,	// (0x0005e0d9) smil_status_pane_t1

0x605c,	// (0x00057bfc) volume_smil_pane

0xc550,	// (0x0005e0f0) list_smil_text_pane

0x4f55,	// (0x00056af5) scroll_pane_cp011

0x4f60,	// (0x00056b00) smil_text_list_pane_t1_ParamLimits

0x4f60,	// (0x00056b00) smil_text_list_pane_t1

0x4fd8,	// (0x00056b78) aid_volume_smil_ParamLimits

0x4fd8,	// (0x00056b78) aid_volume_smil

0xbf6c,	// (0x0005db0c) smil_volume_pane_g1

0xbf6c,	// (0x0005db0c) smil_volume_pane_g2

0x0001,

0xf236,	// (0x00060dd6) smil_volume_pane_g

0x37f4,	// (0x00055394) listscroll_cale_day_pane

0xc55a,	// (0x0005e0fa) bg_cale_pane

0xc572,	// (0x0005e112) list_cale_pane

0xc595,	// (0x0005e135) scroll_pane_cp09

0xc5a6,	// (0x0005e146) cale_bg_pane_g1

0xc5ae,	// (0x0005e14e) cale_bg_pane_g2

0xc5b6,	// (0x0005e156) cale_bg_pane_g3

0xc5be,	// (0x0005e15e) cale_bg_pane_g4

0xc5c6,	// (0x0005e166) cale_bg_pane_g5

0xc5ce,	// (0x0005e16e) cale_bg_pane_g6

0xc5d6,	// (0x0005e176) cale_bg_pane_g7

0xc5de,	// (0x0005e17e) cale_bg_pane_g8

0xc5e6,	// (0x0005e186) cale_bg_pane_g9

0x0008,

0xf23b,	// (0x00060ddb) cale_bg_pane_g

0x4ffa,	// (0x00056b9a) list_cale_time_pane_ParamLimits

0x4ffa,	// (0x00056b9a) list_cale_time_pane

0xc5f6,	// (0x0005e196) list_cale_time_pane_g1_ParamLimits

0xc5f6,	// (0x0005e196) list_cale_time_pane_g1

0xc602,	// (0x0005e1a2) list_cale_time_pane_g2_ParamLimits

0xc602,	// (0x0005e1a2) list_cale_time_pane_g2

0x501c,	// (0x00056bbc) list_cale_time_pane_g3_ParamLimits

0x501c,	// (0x00056bbc) list_cale_time_pane_g3

0x502a,	// (0x00056bca) list_cale_time_pane_g4_ParamLimits

0x502a,	// (0x00056bca) list_cale_time_pane_g4

0x5038,	// (0x00056bd8) list_cale_time_pane_g5_ParamLimits

0x5038,	// (0x00056bd8) list_cale_time_pane_g5

0x0005,

0xf24e,	// (0x00060dee) list_cale_time_pane_g_ParamLimits

0xf24e,	// (0x00060dee) list_cale_time_pane_g

0xc61c,	// (0x0005e1bc) list_cale_time_pane_t1_ParamLimits

0xc61c,	// (0x0005e1bc) list_cale_time_pane_t1

0xc644,	// (0x0005e1e4) list_cale_time_pane_t2_ParamLimits

0xc644,	// (0x0005e1e4) list_cale_time_pane_t2

0x52db,	// (0x00056e7b) aid_blid_cardinal_pane

0x531d,	// (0x00056ebd) compass_pane_t4

0xc66c,	// (0x0005e20c) list_cale_time_pane_t4_ParamLimits

0xc66c,	// (0x0005e20c) list_cale_time_pane_t4

0x532b,	// (0x00056ecb) compass_pane_t5

0x533b,	// (0x00056edb) compass_pane_t6

0x5349,	// (0x00056ee9) compass_pane_t7

0xd0bf,	// (0x0005ec5f) navi_pane_cc_t1

0xd29c,	// (0x0005ee3c) aid_phob_thumbnail_center_pane

0x57f9,	// (0x00057399) main_postcard_pane_g4_ParamLimits

0x0002,

0xf25b,	// (0x00060dfb) list_cale_time_pane_t_ParamLimits

0xf25b,	// (0x00060dfb) list_cale_time_pane_t

0xb950,	// (0x0005d4f0) bg_popup_window_pane_cp02_ParamLimits

0xb950,	// (0x0005d4f0) bg_popup_window_pane_cp02

0xcc34,	// (0x0005e7d4) heading_pane_cp01_ParamLimits

0xcc34,	// (0x0005e7d4) heading_pane_cp01

0xcc40,	// (0x0005e7e0) loc_req_pane_ParamLimits

0xcc40,	// (0x0005e7e0) loc_req_pane

0xcc50,	// (0x0005e7f0) loc_type_pane_ParamLimits

0xcc50,	// (0x0005e7f0) loc_type_pane

0xcc62,	// (0x0005e802) loc_type_pane_t1_ParamLimits

0xcc62,	// (0x0005e802) loc_type_pane_t1

0xcc74,	// (0x0005e814) loc_type_pane_t2_ParamLimits

0xcc74,	// (0x0005e814) loc_type_pane_t2

0xcc86,	// (0x0005e826) loc_type_pane_t3_ParamLimits

0xcc86,	// (0x0005e826) loc_type_pane_t3

0x0002,

0xf262,	// (0x00060e02) loc_type_pane_t_ParamLimits

0xf262,	// (0x00060e02) loc_type_pane_t

0xcc98,	// (0x0005e838) list_loc_req_pane

0xcca2,	// (0x0005e842) scroll_pane_cp012

0x5046,	// (0x00056be6) list_single_loc_request_popup_menu_pane_ParamLimits

0x5046,	// (0x00056be6) list_single_loc_request_popup_menu_pane

0xccad,	// (0x0005e84d) list_single_loc_request_popup_menu_pane_g1_ParamLimits

0xccad,	// (0x0005e84d) list_single_loc_request_popup_menu_pane_g1

0xccb9,	// (0x0005e859) list_single_loc_request_popup_menu_pane_g2_ParamLimits

0xccb9,	// (0x0005e859) list_single_loc_request_popup_menu_pane_g2

0x0001,

0xf269,	// (0x00060e09) list_single_loc_request_popup_menu_pane_g_ParamLimits

0xf269,	// (0x00060e09) list_single_loc_request_popup_menu_pane_g

0xccc5,	// (0x0005e865) list_single_loc_request_popup_menu_pane_t1_ParamLimits

0xccc5,	// (0x0005e865) list_single_loc_request_popup_menu_pane_t1

0x5058,	// (0x00056bf8) bg_popup_window_pane_cp03_ParamLimits

0x5058,	// (0x00056bf8) bg_popup_window_pane_cp03

0x5066,	// (0x00056c06) heading_loc_req_pane_ParamLimits

0x5066,	// (0x00056c06) heading_loc_req_pane

0x5072,	// (0x00056c12) popup_dyc_status_message_window_g1_ParamLimits

0x5072,	// (0x00056c12) popup_dyc_status_message_window_g1

0x507e,	// (0x00056c1e) popup_dyc_status_message_window_t1_ParamLimits

0x507e,	// (0x00056c1e) popup_dyc_status_message_window_t1

0x5090,	// (0x00056c30) popup_dyc_status_message_window_t2_ParamLimits

0x5090,	// (0x00056c30) popup_dyc_status_message_window_t2

0x50a2,	// (0x00056c42) popup_dyc_status_message_window_t3_ParamLimits

0x50a2,	// (0x00056c42) popup_dyc_status_message_window_t3

0x0002,

0xf26e,	// (0x00060e0e) popup_dyc_status_message_window_t_ParamLimits

0xf26e,	// (0x00060e0e) popup_dyc_status_message_window_t

0xbcf9,	// (0x0005d899) bg_heading_pane_cp01

0xccdb,	// (0x0005e87b) heading_loc_req_pane_g1

0xcce3,	// (0x0005e883) heading_loc_req_pane_g2

0xcceb,	// (0x0005e88b) heading_loc_req_pane_g3

0x0002,

0xf275,	// (0x00060e15) heading_loc_req_pane_g

0xccf3,	// (0x0005e893) heading_loc_req_pane_t1

0xcd12,	// (0x0005e8b2) bg_popup_sub_pane_cp01_ParamLimits

0xcd12,	// (0x0005e8b2) bg_popup_sub_pane_cp01

0xcd20,	// (0x0005e8c0) popup_cale_events_window_g1_ParamLimits

0xcd20,	// (0x0005e8c0) popup_cale_events_window_g1

0xcd40,	// (0x0005e8e0) popup_cale_events_window_g2_ParamLimits

0xcd40,	// (0x0005e8e0) popup_cale_events_window_g2

0x0001,

0xf297,	// (0x00060e37) popup_cale_events_window_g_ParamLimits

0xf297,	// (0x00060e37) popup_cale_events_window_g

0xcd60,	// (0x0005e900) popup_cale_events_window_t1_ParamLimits

0xcd60,	// (0x0005e900) popup_cale_events_window_t1

0xcd72,	// (0x0005e912) popup_cale_events_window_t2_ParamLimits

0xcd72,	// (0x0005e912) popup_cale_events_window_t2

0xcdb0,	// (0x0005e950) popup_cale_events_window_t3_ParamLimits

0xcdb0,	// (0x0005e950) popup_cale_events_window_t3

0xcdea,	// (0x0005e98a) popup_cale_events_window_t4_ParamLimits

0xcdea,	// (0x0005e98a) popup_cale_events_window_t4

0x0003,

0xf29c,	// (0x00060e3c) popup_cale_events_window_t_ParamLimits

0xf29c,	// (0x00060e3c) popup_cale_events_window_t

0x50cc,	// (0x00056c6c) call_type_pane

0xdaec,	// (0x0005f68c) popup_call_status_window_g1

0x50d8,	// (0x00056c78) popup_call_status_window_g2

0x50e4,	// (0x00056c84) popup_call_status_window_g3

0x0002,

0xf2a5,	// (0x00060e45) popup_call_status_window_g

0xce20,	// (0x0005e9c0) call_type_pane_g1

0xce29,	// (0x0005e9c9) call_type_pane_g2

0x0001,

0xf2ac,	// (0x00060e4c) call_type_pane_g

0xbcf9,	// (0x0005d899) bg_popup_sub_pane_cp02

0xce32,	// (0x0005e9d2) listscroll_popup_wml_pane

0xce3a,	// (0x0005e9da) list_wml_pane

0xce44,	// (0x0005e9e4) scroll_pane_cp013

0xce4f,	// (0x0005e9ef) list_single_graphic_popup_wml_pane_ParamLimits

0xce4f,	// (0x0005e9ef) list_single_graphic_popup_wml_pane

0xbf6c,	// (0x0005db0c) list_single_graphic_popup_wml_pane_g1

0xce63,	// (0x0005ea03) list_single_graphic_popup_wml_pane_g2

0x0001,

0xf2b1,	// (0x00060e51) list_single_graphic_popup_wml_pane_g

0xce6b,	// (0x0005ea0b) list_single_graphic_popup_wml_pane_t1

0xce81,	// (0x0005ea21) aid_call_pane

0xbf4c,	// (0x0005daec) popup_clock_analogue_window_g1

0xbf4c,	// (0x0005daec) popup_clock_analogue_window_g2

0x50f0,	// (0x00056c90) popup_clock_analogue_window_g3

0x50f0,	// (0x00056c90) popup_clock_analogue_window_g4

0xbf6c,	// (0x0005db0c) popup_clock_analogue_window_g5

0x0004,

0xf2b6,	// (0x00060e56) popup_clock_analogue_window_g

0x50f8,	// (0x00056c98) popup_clock_analogue_window_t1

0x5106,	// (0x00056ca6) clock_digital_number_pane_ParamLimits

0x5106,	// (0x00056ca6) clock_digital_number_pane

0x5112,	// (0x00056cb2) clock_digital_number_pane_cp02_ParamLimits

0x5112,	// (0x00056cb2) clock_digital_number_pane_cp02

0x511e,	// (0x00056cbe) clock_digital_number_pane_cp03_ParamLimits

0x511e,	// (0x00056cbe) clock_digital_number_pane_cp03

0x512a,	// (0x00056cca) clock_digital_number_pane_cp04_ParamLimits

0x512a,	// (0x00056cca) clock_digital_number_pane_cp04

0x513a,	// (0x00056cda) clock_digital_separator_pane_ParamLimits

0x513a,	// (0x00056cda) clock_digital_separator_pane

0x5146,	// (0x00056ce6) popup_clock_digital_window_t1

0xbf6c,	// (0x0005db0c) clock_digital_number_pane_g1

0xbf6c,	// (0x0005db0c) clock_digital_number_pane_g2

0x0001,

0xf236,	// (0x00060dd6) clock_digital_number_pane_g

0xbf6c,	// (0x0005db0c) clock_digital_separator_pane_g1

0xbf6c,	// (0x0005db0c) clock_digital_separator_pane_g2

0x0001,

0xf236,	// (0x00060dd6) clock_digital_separator_pane_g

0xbcf9,	// (0x0005d899) bg_popup_window_pane_cp04

0xce89,	// (0x0005ea29) heading_pane_cp03

0xc22b,	// (0x0005ddcb) listscroll_popup_gms_pane

0xbcf9,	// (0x0005d899) grid_large_graphic_popup_pane

0xce92,	// (0x0005ea32) listscroll_popup_gms_pane_g1

0xce9b,	// (0x0005ea3b) listscroll_popup_gms_pane_g2

0x0001,

0xf2c1,	// (0x00060e61) listscroll_popup_gms_pane_g

0xcea4,	// (0x0005ea44) scroll_pane_cp014

0xbfcf,	// (0x0005db6f) cell_large_graphic_popup_pane_ParamLimits

0xbfcf,	// (0x0005db6f) cell_large_graphic_popup_pane

0xbfdd,	// (0x0005db7d) cell_large_graphic_popup_pane_g1_ParamLimits

0xbfdd,	// (0x0005db7d) cell_large_graphic_popup_pane_g1

0xcead,	// (0x0005ea4d) cell_large_graphic_popup_pane_g2_ParamLimits

0xcead,	// (0x0005ea4d) cell_large_graphic_popup_pane_g2

0xcec7,	// (0x0005ea67) cell_large_graphic_popup_pane_g3_ParamLimits

0xcec7,	// (0x0005ea67) cell_large_graphic_popup_pane_g3

0xced5,	// (0x0005ea75) cell_large_graphic_popup_pane_g4_ParamLimits

0xced5,	// (0x0005ea75) cell_large_graphic_popup_pane_g4

0x0003,

0xf2c6,	// (0x00060e66) cell_large_graphic_popup_pane_g_ParamLimits

0xf2c6,	// (0x00060e66) cell_large_graphic_popup_pane_g

0xbcf9,	// (0x0005d899) grid_highlight_pane_cp010

0xbf6c,	// (0x0005db0c) bg_popup_call_pane_g1

0xcee6,	// (0x0005ea86) list_single_graphic_popup_conf_pane_ParamLimits

0xcee6,	// (0x0005ea86) list_single_graphic_popup_conf_pane

0xcef9,	// (0x0005ea99) list_highlight_pane_cp01

0xcf02,	// (0x0005eaa2) list_single_graphic_popup_conf_pane_g1

0xcf0a,	// (0x0005eaaa) list_single_graphic_popup_conf_pane_g2

0x0001,

0xf2cf,	// (0x00060e6f) list_single_graphic_popup_conf_pane_g

0xcf12,	// (0x0005eab2) list_single_graphic_popup_conf_pane_t1

0xcf20,	// (0x0005eac0) linegrid_cams_pane_g1

0x5163,	// (0x00056d03) linegrid_cams_pane_g2

0xc16a,	// (0x0005dd0a) linegrid_cams_pane_g3

0xcf29,	// (0x0005eac9) linegrid_cams_pane_g4

0x516c,	// (0x00056d0c) linegrid_cams_pane_g5

0x5175,	// (0x00056d15) linegrid_cams_pane_g6

0xc21a,	// (0x0005ddba) linegrid_cams_pane_g7

0x0006,

0xf2d4,	// (0x00060e74) linegrid_cams_pane_g

0xcf32,	// (0x0005ead2) popup_clock_analogue_window

0xcf32,	// (0x0005ead2) popup_clock_digital_window

0xbcf9,	// (0x0005d899) popup_phob_thumbnail_window

0xbf6c,	// (0x0005db0c) call_video_uplink_pane_g1

0xcf3b,	// (0x0005eadb) call_video_uplink_pane_g2

0x0001,

0xf2e3,	// (0x00060e83) call_video_uplink_pane_g

0xcf43,	// (0x0005eae3) video_uplink_pane

0xcf4b,	// (0x0005eaeb) mce_image_pane_g1

0x517e,	// (0x00056d1e) mce_image_pane_g2

0x5188,	// (0x00056d28) mce_image_pane_g3

0x5190,	// (0x00056d30) mce_image_pane_g4

0x5198,	// (0x00056d38) mce_image_pane_g5

0x0004,

0xf2e8,	// (0x00060e88) mce_image_pane_g

0xcf55,	// (0x0005eaf5) control_top_pane_stacon_cp01_ParamLimits

0xcf55,	// (0x0005eaf5) control_top_pane_stacon_cp01

0xcf69,	// (0x0005eb09) uni_indicator_pane_stacon_cp01_ParamLimits

0xcf69,	// (0x0005eb09) uni_indicator_pane_stacon_cp01

0xcf7a,	// (0x0005eb1a) bg_popup_sub_pane_cp03

0xcf84,	// (0x0005eb24) chi_dic_find_pane

0x51a0,	// (0x00056d40) listscroll_chi_dic_pane

0xcf8c,	// (0x0005eb2c) main_pane_chidic_g1

0xcf94,	// (0x0005eb34) chi_dic_find_pane_t1

0xcfa2,	// (0x0005eb42) find_chidic_pane

0xcfab,	// (0x0005eb4b) chi_dic_list_pane_ParamLimits

0xcfab,	// (0x0005eb4b) chi_dic_list_pane

0xcfbc,	// (0x0005eb5c) scroll_pane_cp020

0xcfc4,	// (0x0005eb64) find_chidic_pane_t1

0xbcf9,	// (0x0005d899) input_focus_pane_cp06

0x51b4,	// (0x00056d54) list_chi_dic_pane_ParamLimits

0x51b4,	// (0x00056d54) list_chi_dic_pane

0x51ce,	// (0x00056d6e) list_chi_dic_pane_t1_ParamLimits

0x51ce,	// (0x00056d6e) list_chi_dic_pane_t1

0xbcf9,	// (0x0005d899) list_highlight_pane_cp020

0xcfd3,	// (0x0005eb73) bg_cale_heading_pane_g1

0x51e1,	// (0x00056d81) bg_cale_heading_pane_g2

0x51e9,	// (0x00056d89) bg_cale_heading_pane_g3

0x51f1,	// (0x00056d91) bg_cale_heading_pane_g4

0x51fb,	// (0x00056d9b) bg_cale_heading_pane_g5

0x5205,	// (0x00056da5) bg_cale_heading_pane_g6

0x520d,	// (0x00056dad) bg_cale_heading_pane_g7

0x5215,	// (0x00056db5) bg_cale_heading_pane_g8

0x521f,	// (0x00056dbf) bg_cale_heading_pane_g9

0x0008,

0xf2f3,	// (0x00060e93) bg_cale_heading_pane_g

0xcfd3,	// (0x0005eb73) bg_cale_side_pane_g1

0x5229,	// (0x00056dc9) bg_cale_side_pane_g2

0x5233,	// (0x00056dd3) bg_cale_side_pane_g3

0x523d,	// (0x00056ddd) bg_cale_side_pane_g4

0x5247,	// (0x00056de7) bg_cale_side_pane_g5

0x5251,	// (0x00056df1) bg_cale_side_pane_g6

0x525b,	// (0x00056dfb) bg_cale_side_pane_g7

0x5265,	// (0x00056e05) bg_cale_side_pane_g8

0x526d,	// (0x00056e0d) bg_cale_side_pane_g9

0x0008,

0xf306,	// (0x00060ea6) bg_cale_side_pane_g

0x5275,	// (0x00056e15) popup_call_status_window_ParamLimits

0x5275,	// (0x00056e15) popup_call_status_window

0xcfdb,	// (0x0005eb7b) stacon_top_pane

0xcfe3,	// (0x0005eb83) status_pane_ParamLimits

0xcfe3,	// (0x0005eb83) status_pane

0xcff8,	// (0x0005eb98) status_small_pane

0xd000,	// (0x0005eba0) control_pane

0xbcf9,	// (0x0005d899) stacon_bottom_pane

0xd008,	// (0x0005eba8) list_single_mce_smart_pane_t1_ParamLimits

0xd008,	// (0x0005eba8) list_single_mce_smart_pane_t1

0xd01b,	// (0x0005ebbb) list_single_mce_smart_pane_t2_ParamLimits

0xd01b,	// (0x0005ebbb) list_single_mce_smart_pane_t2

0x0001,

0xf319,	// (0x00060eb9) list_single_mce_smart_pane_t_ParamLimits

0xf319,	// (0x00060eb9) list_single_mce_smart_pane_t

0x5281,	// (0x00056e21) compass_pane

0x528d,	// (0x00056e2d) main_location2_pane_t1

0x52a1,	// (0x00056e41) main_location2_pane_t2

0x52b5,	// (0x00056e55) main_location2_pane_t3

0x0003,

0xf31e,	// (0x00060ebe) main_location2_pane_t

0xd03a,	// (0x0005ebda) compass_pane_g1_ParamLimits

0xd03a,	// (0x0005ebda) compass_pane_g1

0x52ff,	// (0x00056e9f) compass_pane_t1

0x530e,	// (0x00056eae) compass_pane_t2

0x0005,

0xf327,	// (0x00060ec7) compass_pane_t

0x5359,	// (0x00056ef9) text_secondary_cp61

0xd0b6,	// (0x0005ec56) navi_pane_cams_g5

0xd132,	// (0x0005ecd2) navi_pane_im_t1

0xd140,	// (0x0005ece0) navi_pane_mp_g1_ParamLimits

0xd140,	// (0x0005ece0) navi_pane_mp_g1

0xd154,	// (0x0005ecf4) navi_pane_mp_g2_ParamLimits

0xd154,	// (0x0005ecf4) navi_pane_mp_g2

0xd160,	// (0x0005ed00) navi_pane_mp_g3_ParamLimits

0xd160,	// (0x0005ed00) navi_pane_mp_g3

0x0002,

0xf33b,	// (0x00060edb) navi_pane_mp_g_ParamLimits

0xf33b,	// (0x00060edb) navi_pane_mp_g

0xd16c,	// (0x0005ed0c) navi_pane_mp_t1

0xd17a,	// (0x0005ed1a) navi_pane_mp_t2

0x0002,

0xf342,	// (0x00060ee2) navi_pane_mp_t

0xd1e5,	// (0x0005ed85) navi_pane_vt_g1

0xd16c,	// (0x0005ed0c) navi_pane_vt_t1

0xd1ed,	// (0x0005ed8d) navi_slider_pane

0xc22b,	// (0x0005ddcb) zooming_pane

0xd1fd,	// (0x0005ed9d) navi_slider_pane_g1

0x5394,	// (0x00056f34) navi_slider_pane_g2

0x0006,

0xf349,	// (0x00060ee9) navi_slider_pane_g

0xd221,	// (0x0005edc1) aid_levels_zoom

0xd229,	// (0x0005edc9) zooming_pane_g1

0xd231,	// (0x0005edd1) zooming_pane_g2

0xd231,	// (0x0005edd1) zooming_pane_g3

0x0002,

0xf358,	// (0x00060ef8) zooming_pane_g

0xd239,	// (0x0005edd9) level_10_zoom

0xd242,	// (0x0005ede2) level_11_zoom

0xd24b,	// (0x0005edeb) level_1_zoom

0xd254,	// (0x0005edf4) level_2_zoom

0xd25d,	// (0x0005edfd) level_3_zoom

0xd266,	// (0x0005ee06) level_4_zoom

0xd26f,	// (0x0005ee0f) level_5_zoom

0xd278,	// (0x0005ee18) level_6_zoom

0xd281,	// (0x0005ee21) level_7_zoom

0xd28a,	// (0x0005ee2a) level_8_zoom

0xd293,	// (0x0005ee33) level_9_zoom

0xd2a4,	// (0x0005ee44) popup_phob_thumbnail_window_g1

0xd2ac,	// (0x0005ee4c) popup_phob_thumbnail_window_g2

0x0001,

0xf35f,	// (0x00060eff) popup_phob_thumbnail_window_g

0x5d07,	// (0x000578a7) level_1_location

0x5d0f,	// (0x000578af) level_2_location

0x5d17,	// (0x000578b7) level_3_location

0x5d21,	// (0x000578c1) level_4_location

0xc22b,	// (0x0005ddcb) level_5_location

0x53a6,	// (0x00056f46) mce_icon_pane_g1

0x53ae,	// (0x00056f4e) mce_icon_pane_g2

0x0001,

0xf364,	// (0x00060f04) mce_icon_pane_g

0x53b6,	// (0x00056f56) main_mup_pane_g1_ParamLimits

0x53b6,	// (0x00056f56) main_mup_pane_g1

0xbff9,	// (0x0005db99) main_mup_pane_g2_ParamLimits

0xbff9,	// (0x0005db99) main_mup_pane_g2

0xbff9,	// (0x0005db99) main_mup_pane_g3_ParamLimits

0xbff9,	// (0x0005db99) main_mup_pane_g3

0xbff9,	// (0x0005db99) main_mup_pane_g4_ParamLimits

0xbff9,	// (0x0005db99) main_mup_pane_g4

0xbff9,	// (0x0005db99) main_mup_pane_g5_ParamLimits

0xbff9,	// (0x0005db99) main_mup_pane_g5

0xbff9,	// (0x0005db99) main_mup_pane_g6_ParamLimits

0xbff9,	// (0x0005db99) main_mup_pane_g6

0xbff9,	// (0x0005db99) main_mup_pane_g7_ParamLimits

0xbff9,	// (0x0005db99) main_mup_pane_g7

0xbff9,	// (0x0005db99) main_mup_pane_g8_ParamLimits

0xbff9,	// (0x0005db99) main_mup_pane_g8

0xbff9,	// (0x0005db99) main_mup_pane_g9_ParamLimits

0xbff9,	// (0x0005db99) main_mup_pane_g9

0xbff9,	// (0x0005db99) main_mup_pane_g10_ParamLimits

0xbff9,	// (0x0005db99) main_mup_pane_g10

0xbff9,	// (0x0005db99) main_mup_pane_g11_ParamLimits

0xbff9,	// (0x0005db99) main_mup_pane_g11

0xbfeb,	// (0x0005db8b) main_mup_pane_g12_ParamLimits

0xbfeb,	// (0x0005db8b) main_mup_pane_g12

0xbff9,	// (0x0005db99) main_mup_pane_g13_ParamLimits

0xbff9,	// (0x0005db99) main_mup_pane_g13

0x000c,

0xf369,	// (0x00060f09) main_mup_pane_g_ParamLimits

0xf369,	// (0x00060f09) main_mup_pane_g

0xc007,	// (0x0005dba7) main_mup_pane_t1_ParamLimits

0xc007,	// (0x0005dba7) main_mup_pane_t1

0xc007,	// (0x0005dba7) main_mup_pane_t2_ParamLimits

0xc007,	// (0x0005dba7) main_mup_pane_t2

0xc007,	// (0x0005dba7) main_mup_pane_t3_ParamLimits

0xc007,	// (0x0005dba7) main_mup_pane_t3

0xc039,	// (0x0005dbd9) main_mup_pane_t4_ParamLimits

0xc039,	// (0x0005dbd9) main_mup_pane_t4

0xc039,	// (0x0005dbd9) main_mup_pane_t5_ParamLimits

0xc039,	// (0x0005dbd9) main_mup_pane_t5

0xc025,	// (0x0005dbc5) main_mup_pane_t6_ParamLimits

0xc025,	// (0x0005dbc5) main_mup_pane_t6

0x0005,

0xf384,	// (0x00060f24) main_mup_pane_t_ParamLimits

0xf384,	// (0x00060f24) main_mup_pane_t

0xbf76,	// (0x0005db16) mup_progress_pane_ParamLimits

0xbf76,	// (0x0005db16) mup_progress_pane

0xe433,	// (0x0005ffd3) mup_visualizer_pane_ParamLimits

0xe433,	// (0x0005ffd3) mup_visualizer_pane

0xe433,	// (0x0005ffd3) mup_volume_pane_ParamLimits

0xe433,	// (0x0005ffd3) mup_volume_pane

0xbfeb,	// (0x0005db8b) mup_visualizer_pane_g1_ParamLimits

0xbfeb,	// (0x0005db8b) mup_visualizer_pane_g1

0xd2b4,	// (0x0005ee54) mup_visualizer_pane_g2_ParamLimits

0xd2b4,	// (0x0005ee54) mup_visualizer_pane_g2

0xbfdd,	// (0x0005db7d) mup_visualizer_pane_g3_ParamLimits

0xbfdd,	// (0x0005db7d) mup_visualizer_pane_g3

0x0002,

0xf391,	// (0x00060f31) mup_visualizer_pane_g_ParamLimits

0xf391,	// (0x00060f31) mup_visualizer_pane_g

0xc01b,	// (0x0005dbbb) mup_volume_pane_g1

0xc01b,	// (0x0005dbbb) mup_volume_pane_g2

0x0001,

0xf0af,	// (0x00060c4f) mup_volume_pane_g

0xc01b,	// (0x0005dbbb) mup_progress_pane_g1

0xc01b,	// (0x0005dbbb) mup_progress_pane_g2

0xc01b,	// (0x0005dbbb) mup_progress_pane_g3

0x0002,

0xf398,	// (0x00060f38) mup_progress_pane_g

0xbcf9,	// (0x0005d899) bg_popup_window_pane_cp05

0xd2c2,	// (0x0005ee62) heading_pane_cp02_ParamLimits

0xd2c2,	// (0x0005ee62) heading_pane_cp02

0xd2dc,	// (0x0005ee7c) list_popup_blid_pane

0xd2e4,	// (0x0005ee84) list_blid_sat_info_pane_ParamLimits

0xd2e4,	// (0x0005ee84) list_blid_sat_info_pane

0xd2f7,	// (0x0005ee97) list_blid_sat_info_pane_g1

0xd2ff,	// (0x0005ee9f) list_blid_sat_info_pane_t1

0x54b3,	// (0x00057053) mup_equalizer_pane_ParamLimits

0x54b3,	// (0x00057053) mup_equalizer_pane

0x54d4,	// (0x00057074) mup_equalizer_pane_cp1_ParamLimits

0x54d4,	// (0x00057074) mup_equalizer_pane_cp1

0x54f5,	// (0x00057095) mup_equalizer_pane_cp2_ParamLimits

0x54f5,	// (0x00057095) mup_equalizer_pane_cp2

0x5516,	// (0x000570b6) mup_equalizer_pane_cp3_ParamLimits

0x5516,	// (0x000570b6) mup_equalizer_pane_cp3

0x5537,	// (0x000570d7) mup_equalizer_pane_cp4_ParamLimits

0x5537,	// (0x000570d7) mup_equalizer_pane_cp4

0x5558,	// (0x000570f8) mup_equalizer_pane_cp5

0x556e,	// (0x0005710e) mup_equalizer_pane_cp6

0x5586,	// (0x00057126) mup_equalizer_pane_cp7

0xe41b,	// (0x0005ffbb) bg_popup_call_poc_act_pane_g9

0xe423,	// (0x0005ffc3) bg_popup_call_poc_act_pane_g10

0xe42b,	// (0x0005ffcb) bg_popup_call_poc_act_pane_g11

0x000a,

0xbf54,	// (0x0005daf4) mup_scale_pane

0xbf6c,	// (0x0005db0c) mup_scale_pane_g1

0xd30d,	// (0x0005eead) mup_scale_pane_g2

0x0006,

0xf3b4,	// (0x00060f54) mup_scale_pane_g

0xd331,	// (0x0005eed1) msg_data_pane

0xd339,	// (0x0005eed9) scroll_pane_cp017

0x55b0,	// (0x00057150) bg_list_pane_cp04_ParamLimits

0x55b0,	// (0x00057150) bg_list_pane_cp04

0xd341,	// (0x0005eee1) msg_data_pane_g1

0x55d4,	// (0x00057174) msg_data_pane_g2

0x55de,	// (0x0005717e) msg_data_pane_g3

0x55e6,	// (0x00057186) msg_data_pane_g4

0x55ee,	// (0x0005718e) msg_data_pane_g5

0x55f6,	// (0x00057196) msg_data_pane_g6

0x55fe,	// (0x0005719e) msg_data_pane_g7

0x0006,

0xf3c3,	// (0x00060f63) msg_data_pane_g

0x5606,	// (0x000571a6) msg_text_pane_ParamLimits

0x5606,	// (0x000571a6) msg_text_pane

0x5666,	// (0x00057206) qrid_highlight_pane_cp011_ParamLimits

0x5666,	// (0x00057206) qrid_highlight_pane_cp011

0xbcf9,	// (0x0005d899) msg_body_pane

0xbf54,	// (0x0005daf4) msg_header_pane

0xd35d,	// (0x0005eefd) input_focus_pane_cp07

0xd37e,	// (0x0005ef1e) msg_header_pane_t1_ParamLimits

0xd37e,	// (0x0005ef1e) msg_header_pane_t1

0x568e,	// (0x0005722e) msg_header_pane_t2_ParamLimits

0x568e,	// (0x0005722e) msg_header_pane_t2

0x0001,

0xf3d7,	// (0x00060f77) msg_header_pane_t_ParamLimits

0xf3d7,	// (0x00060f77) msg_header_pane_t

0xd39a,	// (0x0005ef3a) msg_body_pane_g1

0x56ae,	// (0x0005724e) msg_body_pane_t1_ParamLimits

0x56ae,	// (0x0005724e) msg_body_pane_t1

0x56df,	// (0x0005727f) msg_body_pane_t2_ParamLimits

0x56df,	// (0x0005727f) msg_body_pane_t2

0x56f1,	// (0x00057291) msg_body_pane_t3_ParamLimits

0x56f1,	// (0x00057291) msg_body_pane_t3

0x0002,

0xf3dc,	// (0x00060f7c) msg_body_pane_t_ParamLimits

0xf3dc,	// (0x00060f7c) msg_body_pane_t

0x5755,	// (0x000572f5) main_viewer_pane_g1_ParamLimits

0x5755,	// (0x000572f5) main_viewer_pane_g1

0x5761,	// (0x00057301) main_viewer_pane_g2_ParamLimits

0x5761,	// (0x00057301) main_viewer_pane_g2

0x576d,	// (0x0005730d) main_viewer_pane_g3_ParamLimits

0x576d,	// (0x0005730d) main_viewer_pane_g3

0x577e,	// (0x0005731e) main_viewer_pane_g4_ParamLimits

0x577e,	// (0x0005731e) main_viewer_pane_g4

0x578f,	// (0x0005732f) main_viewer_pane_g5_ParamLimits

0x578f,	// (0x0005732f) main_viewer_pane_g5

0x578f,	// (0x0005732f) main_viewer_pane_g7_ParamLimits

0x578f,	// (0x0005732f) main_viewer_pane_g7

0xccad,	// (0x0005e84d) main_viewer_pane_g8_ParamLimits

0xccad,	// (0x0005e84d) main_viewer_pane_g8

0x0007,

0xf3ec,	// (0x00060f8c) main_viewer_pane_g_ParamLimits

0xf3ec,	// (0x00060f8c) main_viewer_pane_g

0xd3d2,	// (0x0005ef72) viewer_content_pane_ParamLimits

0xd3d2,	// (0x0005ef72) viewer_content_pane

0x57cd,	// (0x0005736d) main_postcard_pane_g1_ParamLimits

0x57cd,	// (0x0005736d) main_postcard_pane_g1

0x57db,	// (0x0005737b) main_postcard_pane_g2_ParamLimits

0x57db,	// (0x0005737b) main_postcard_pane_g2

0x57e9,	// (0x00057389) main_postcard_pane_g3_ParamLimits

0x57e9,	// (0x00057389) main_postcard_pane_g3

0x0005,

0xf3fd,	// (0x00060f9d) main_postcard_pane_g_ParamLimits

0xf3fd,	// (0x00060f9d) main_postcard_pane_g

0x57f9,	// (0x00057399) main_postcard_pane_g4

0xe56d,	// (0x0006010d) smil_status_volume_pane_g2

0x5825,	// (0x000573c5) postcard_pane_ParamLimits

0x5825,	// (0x000573c5) postcard_pane

0xdaec,	// (0x0005f68c) postcard_pane_g1_ParamLimits

0xdaec,	// (0x0005f68c) postcard_pane_g1

0x5857,	// (0x000573f7) postcard_pane_g2_ParamLimits

0x5857,	// (0x000573f7) postcard_pane_g2

0x5863,	// (0x00057403) postcard_pane_g3_ParamLimits

0x5863,	// (0x00057403) postcard_pane_g3

0xd3e0,	// (0x0005ef80) postcard_pane_g4_ParamLimits

0xd3e0,	// (0x0005ef80) postcard_pane_g4

0x586f,	// (0x0005740f) postcard_pane_g5_ParamLimits

0x586f,	// (0x0005740f) postcard_pane_g5

0x587b,	// (0x0005741b) postcard_pane_g6_ParamLimits

0x587b,	// (0x0005741b) postcard_pane_g6

0xd3ee,	// (0x0005ef8e) postcard_pane_g7_ParamLimits

0xd3ee,	// (0x0005ef8e) postcard_pane_g7

0x0006,

0xf40a,	// (0x00060faa) postcard_pane_g_ParamLimits

0xf40a,	// (0x00060faa) postcard_pane_g

0x5887,	// (0x00057427) main_mp2_pane_g1_ParamLimits

0x5887,	// (0x00057427) main_mp2_pane_g1

0x5893,	// (0x00057433) main_mp2_pane_g2_ParamLimits

0x5893,	// (0x00057433) main_mp2_pane_g2

0x589f,	// (0x0005743f) main_mp2_pane_g3_ParamLimits

0x589f,	// (0x0005743f) main_mp2_pane_g3

0x0002,

0xf419,	// (0x00060fb9) main_mp2_pane_g_ParamLimits

0xf419,	// (0x00060fb9) main_mp2_pane_g

0x58ab,	// (0x0005744b) main_mp2_pane_t1_ParamLimits

0x58ab,	// (0x0005744b) main_mp2_pane_t1

0x58c2,	// (0x00057462) main_mp2_pane_t2_ParamLimits

0x58c2,	// (0x00057462) main_mp2_pane_t2

0x58d6,	// (0x00057476) main_mp2_pane_t3_ParamLimits

0x58d6,	// (0x00057476) main_mp2_pane_t3

0x0002,

0xf420,	// (0x00060fc0) main_mp2_pane_t_ParamLimits

0xf420,	// (0x00060fc0) main_mp2_pane_t

0xbf76,	// (0x0005db16) pec_content_pane_ParamLimits

0xbf76,	// (0x0005db16) pec_content_pane

0xb8dc,	// (0x0005d47c) scroll_pane_cp015

0xd3a2,	// (0x0005ef42) pec_attribute_pane_ParamLimits

0xd3a2,	// (0x0005ef42) pec_attribute_pane

0xbfdd,	// (0x0005db7d) pec_content_pane_g1_ParamLimits

0xbfdd,	// (0x0005db7d) pec_content_pane_g1

0xd3fc,	// (0x0005ef9c) pec_content_pane_t1_ParamLimits

0xd3fc,	// (0x0005ef9c) pec_content_pane_t1

0xd410,	// (0x0005efb0) pec_content_pane_t2_ParamLimits

0xd410,	// (0x0005efb0) pec_content_pane_t2

0x0001,

0xf427,	// (0x00060fc7) pec_content_pane_t_ParamLimits

0xf427,	// (0x00060fc7) pec_content_pane_t

0xbfcf,	// (0x0005db6f) list_single_graphic_pane_cp01_ParamLimits

0xbfcf,	// (0x0005db6f) list_single_graphic_pane_cp01

0xbf54,	// (0x0005daf4) bg_popup_sub_pane_cp04

0xd424,	// (0x0005efc4) popup_mup_playback_window_g1

0xd430,	// (0x0005efd0) popup_mup_playback_window_t1

0xd445,	// (0x0005efe5) popup_mup_playback_window_t2

0x0001,

0xf42c,	// (0x00060fcc) popup_mup_playback_window_t

0xd47c,	// (0x0005f01c) main_image_pane_g1_ParamLimits

0xd47c,	// (0x0005f01c) main_image_pane_g1

0xd4bf,	// (0x0005f05f) scroll_pane_cp018_ParamLimits

0xd4bf,	// (0x0005f05f) scroll_pane_cp018

0xd4d7,	// (0x0005f077) scroll_pane_cp016_ParamLimits

0xd4d7,	// (0x0005f077) scroll_pane_cp016

0x5959,	// (0x000574f9) smil2_image_pane_ParamLimits

0x5959,	// (0x000574f9) smil2_image_pane

0x5989,	// (0x00057529) smil2_root_pane_ParamLimits

0x5989,	// (0x00057529) smil2_root_pane

0x59b5,	// (0x00057555) smil2_text_pane_ParamLimits

0x59b5,	// (0x00057555) smil2_text_pane

0xb8dc,	// (0x0005d47c) bg_list_pane_cp06

0xb8dc,	// (0x0005d47c) grid_radio_pane

0xbcf9,	// (0x0005d899) bg_popup_window_pane_cp06

0xcd02,	// (0x0005e8a2) main_fmradio_pane_t1

0xe441,	// (0x0005ffe1) heading_pane_cp04

0xcd02,	// (0x0005e8a2) main_fmradio_pane_t2

0xe449,	// (0x0005ffe9) popup_cale_lunar_info_window_g1

0xcd02,	// (0x0005e8a2) main_fmradio_pane_t3

0xe451,	// (0x0005fff1) popup_cale_lunar_info_window_g2

0xcd02,	// (0x0005e8a2) main_fmradio_pane_t4

0x0001,

0xcd02,	// (0x0005e8a2) main_fmradio_pane_t5

0x0004,

0xf501,	// (0x000610a1) popup_cale_lunar_info_window_g

0xf28c,	// (0x00060e2c) main_fmradio_pane_t

0xb8dc,	// (0x0005d47c) wait_bar_pane_cp03

0xbfcf,	// (0x0005db6f) cell_fmradio_pane_ParamLimits

0xbfcf,	// (0x0005db6f) cell_fmradio_pane

0xbfdd,	// (0x0005db7d) cell_fmradio_pane_g1_ParamLimits

0xbfdd,	// (0x0005db7d) cell_fmradio_pane_g1

0xb8dc,	// (0x0005d47c) grid_highlight_pane_cp011

0xd50b,	// (0x0005f0ab) poc_content_pane_ParamLimits

0xd50b,	// (0x0005f0ab) poc_content_pane

0xd51d,	// (0x0005f0bd) scroll_pane_cp019

0x59f5,	// (0x00057595) popup_call_poc_act_window_ParamLimits

0x59f5,	// (0x00057595) popup_call_poc_act_window

0x5a02,	// (0x000575a2) popup_call_poc_inact_window_ParamLimits

0x5a02,	// (0x000575a2) popup_call_poc_inact_window

0xf4d8,	// (0x00061078) bg_popup_call_poc_act_pane_g

0xe3ab,	// (0x0005ff4b) bg_popup_call_poc_inact_pane_g1

0xe3b3,	// (0x0005ff53) bg_popup_call_poc_inact_pane_g2

0xd525,	// (0x0005f0c5) popup_call_poc_act_window_g2

0xe3bb,	// (0x0005ff5b) bg_popup_call_poc_inact_pane_g3

0xe3c3,	// (0x0005ff63) bg_popup_call_poc_inact_pane_g4

0xe3cb,	// (0x0005ff6b) bg_popup_call_poc_inact_pane_g5

0xd52d,	// (0x0005f0cd) popup_call_poc_act_window_t1_ParamLimits

0xd52d,	// (0x0005f0cd) popup_call_poc_act_window_t1

0xd555,	// (0x0005f0f5) popup_call_poc_act_window_t2_ParamLimits

0xd555,	// (0x0005f0f5) popup_call_poc_act_window_t2

0xd57d,	// (0x0005f11d) popup_call_poc_act_window_t3_ParamLimits

0xd57d,	// (0x0005f11d) popup_call_poc_act_window_t3

0xd5a5,	// (0x0005f145) popup_call_poc_act_window_t4_ParamLimits

0xd5a5,	// (0x0005f145) popup_call_poc_act_window_t4

0x0003,

0xf441,	// (0x00060fe1) popup_call_poc_act_window_t_ParamLimits

0xf441,	// (0x00060fe1) popup_call_poc_act_window_t

0xe3d3,	// (0x0005ff73) bg_popup_call_poc_inact_pane_g6

0xe3db,	// (0x0005ff7b) bg_popup_call_poc_inact_pane_g7

0xe3e3,	// (0x0005ff83) bg_popup_call_poc_inact_pane_g8

0xd5b7,	// (0x0005f157) popup_call_poc_inact_window_g2

0xe3eb,	// (0x0005ff8b) bg_popup_call_poc_inact_pane_g9

0x0008,

0xf4c5,	// (0x00061065) bg_popup_call_poc_inact_pane_g

0xd5bf,	// (0x0005f15f) popup_call_poc_inact_window_t1_ParamLimits

0xd5bf,	// (0x0005f15f) popup_call_poc_inact_window_t1

0xd5d4,	// (0x0005f174) popup_call_poc_inact_window_t2_ParamLimits

0xd5d4,	// (0x0005f174) popup_call_poc_inact_window_t2

0xd5e9,	// (0x0005f189) popup_call_poc_inact_window_t3_ParamLimits

0xd5e9,	// (0x0005f189) popup_call_poc_inact_window_t3

0x0002,

0xf44a,	// (0x00060fea) popup_call_poc_inact_window_t_ParamLimits

0xf44a,	// (0x00060fea) popup_call_poc_inact_window_t

0xe4e5,	// (0x00060085) context_pane_ParamLimits

0x6013,	// (0x00057bb3) signal_pane_ParamLimits

0xc22b,	// (0x0005ddcb) main_call2_pane

0x5f86,	// (0x00057b26) popup_phob_thumbnail2_window_ParamLimits

0x5f86,	// (0x00057b26) popup_phob_thumbnail2_window

0x5703,	// (0x000572a3) aid_hotspot_pointer_arrow_pane

0x570b,	// (0x000572ab) aid_hotspot_pointer_hand_pane

0x5ccf,	// (0x0005786f) phob_pre_status_pane_g5

0xbfcf,	// (0x0005db6f) cams_zoom_pane_ParamLimits

0xbfcf,	// (0x0005db6f) image_vga_pane_ParamLimits

0xbfeb,	// (0x0005db8b) main_camera_pane_g1_ParamLimits

0xbfeb,	// (0x0005db8b) main_camera_pane_g2_ParamLimits

0xbfeb,	// (0x0005db8b) main_camera_pane_g3_ParamLimits

0xbfeb,	// (0x0005db8b) main_camera_pane_g4_ParamLimits

0xbfeb,	// (0x0005db8b) main_camera_pane_g5_ParamLimits

0xbfeb,	// (0x0005db8b) main_camera_pane_g6_ParamLimits

0xbfeb,	// (0x0005db8b) main_camera_pane_g7_ParamLimits

0xf180,	// (0x00060d20) main_camera_pane_g_ParamLimits

0xc039,	// (0x0005dbd9) main_camera_pane_t1_ParamLimits

0xc039,	// (0x0005dbd9) main_camera_pane_t2_ParamLimits

0xf191,	// (0x00060d31) main_camera_pane_t_ParamLimits

0xbf54,	// (0x0005daf4) bg_popup_preview_window_pane_cp01_ParamLimits

0xbf54,	// (0x0005daf4) bg_popup_preview_window_pane_cp01

0xd5fe,	// (0x0005f19e) popup_phob_thumbnail2_window_g1_ParamLimits

0xd5fe,	// (0x0005f19e) popup_phob_thumbnail2_window_g1

0xbcf9,	// (0x0005d899) call2_cli_visual_pane

0x5a1e,	// (0x000575be) popup_call2_audio_conf_window_ParamLimits

0x5a1e,	// (0x000575be) popup_call2_audio_conf_window

0x5a33,	// (0x000575d3) popup_call2_audio_first_window_ParamLimits

0x5a33,	// (0x000575d3) popup_call2_audio_first_window

0x5ad1,	// (0x00057671) popup_call2_audio_in_window_ParamLimits

0x5ad1,	// (0x00057671) popup_call2_audio_in_window

0x5b13,	// (0x000576b3) popup_call2_audio_out_window_ParamLimits

0x5b13,	// (0x000576b3) popup_call2_audio_out_window

0x5b75,	// (0x00057715) popup_call2_audio_second_window_ParamLimits

0x5b75,	// (0x00057715) popup_call2_audio_second_window

0x5bd3,	// (0x00057773) popup_call2_audio_wait_window_ParamLimits

0x5bd3,	// (0x00057773) popup_call2_audio_wait_window

0xbcf9,	// (0x0005d899) bg_popup_call2_act_pane_cp03

0xbf36,	// (0x0005dad6) list_conf_pane_cp

0xd60a,	// (0x0005f1aa) popup_call2_audio_conf_window_t1

0xcee6,	// (0x0005ea86) list_single_graphic_popup_conf2_pane_ParamLimits

0xcee6,	// (0x0005ea86) list_single_graphic_popup_conf2_pane

0xcef9,	// (0x0005ea99) list_highlight_pane_cp04

0xd618,	// (0x0005f1b8) list_single_graphic_popup_conf2_pane_g1

0xcf0a,	// (0x0005eaaa) list_single_graphic_popup_conf2_pane_g2

0x0001,

0xf451,	// (0x00060ff1) list_single_graphic_popup_conf2_pane_g

0xd622,	// (0x0005f1c2) list_single_graphic_popup_conf2_pane_t1

0xd630,	// (0x0005f1d0) bg_popup_call2_act_pane_cp01_ParamLimits

0xd630,	// (0x0005f1d0) bg_popup_call2_act_pane_cp01

0xd6ba,	// (0x0005f25a) call_type_pane_cp05_ParamLimits

0xd6ba,	// (0x0005f25a) call_type_pane_cp05

0xd70e,	// (0x0005f2ae) popup_call2_audio_second_window_g1_ParamLimits

0xd70e,	// (0x0005f2ae) popup_call2_audio_second_window_g1

0xd762,	// (0x0005f302) popup_call2_audio_second_window_g2_ParamLimits

0xd762,	// (0x0005f302) popup_call2_audio_second_window_g2

0x0002,

0xf456,	// (0x00060ff6) popup_call2_audio_second_window_g_ParamLimits

0xf456,	// (0x00060ff6) popup_call2_audio_second_window_g

0xd7c7,	// (0x0005f367) popup_call2_audio_second_window_t1_ParamLimits

0xd7c7,	// (0x0005f367) popup_call2_audio_second_window_t1

0xd882,	// (0x0005f422) popup_call2_audio_second_window_t2_ParamLimits

0xd882,	// (0x0005f422) popup_call2_audio_second_window_t2

0xd8d5,	// (0x0005f475) popup_call2_audio_second_window_t3_ParamLimits

0xd8d5,	// (0x0005f475) popup_call2_audio_second_window_t3

0x0003,

0xf45d,	// (0x00060ffd) popup_call2_audio_second_window_t_ParamLimits

0xf45d,	// (0x00060ffd) popup_call2_audio_second_window_t

0xbcf9,	// (0x0005d899) bg_popup_call2_in_pane_cp02

0xbd03,	// (0x0005d8a3) call_type_pane_cp04

0x5c12,	// (0x000577b2) popup_call2_audio_wait_window_g1

0x5c1a,	// (0x000577ba) popup_call2_audio_wait_window_g2

0x0001,

0xf466,	// (0x00061006) popup_call2_audio_wait_window_g

0xbd1b,	// (0x0005d8bb) popup_call2_audio_wait_window_t3

0xd9c8,	// (0x0005f568) bg_popup_call2_act_pane_ParamLimits

0xd9c8,	// (0x0005f568) bg_popup_call2_act_pane

0xda88,	// (0x0005f628) call_type_pane_cp03_ParamLimits

0xda88,	// (0x0005f628) call_type_pane_cp03

0xdafa,	// (0x0005f69a) popup_call2_audio_first_window_g1_ParamLimits

0xdafa,	// (0x0005f69a) popup_call2_audio_first_window_g1

0xdb6a,	// (0x0005f70a) popup_call2_audio_first_window_g2_ParamLimits

0xdb6a,	// (0x0005f70a) popup_call2_audio_first_window_g2

0xdaec,	// (0x0005f68c) popup_call2_audio_first_window_g3_ParamLimits

0xdaec,	// (0x0005f68c) popup_call2_audio_first_window_g3

0x0004,

0xf46b,	// (0x0006100b) popup_call2_audio_first_window_g_ParamLimits

0xf46b,	// (0x0006100b) popup_call2_audio_first_window_g

0xdc48,	// (0x0005f7e8) popup_call2_audio_first_window_t1_ParamLimits

0xdc48,	// (0x0005f7e8) popup_call2_audio_first_window_t1

0xdd4b,	// (0x0005f8eb) popup_call2_audio_first_window_t4_ParamLimits

0xdd4b,	// (0x0005f8eb) popup_call2_audio_first_window_t4

0xde2e,	// (0x0005f9ce) popup_call2_audio_first_window_t5_ParamLimits

0xde2e,	// (0x0005f9ce) popup_call2_audio_first_window_t5

0x0003,

0xf476,	// (0x00061016) popup_call2_audio_first_window_t_ParamLimits

0xf476,	// (0x00061016) popup_call2_audio_first_window_t

0xbf4c,	// (0x0005daec) bg_popup_call2_act_pane_g1

0xe459,	// (0x0005fff9) popup_cale_lunar_info_window_t1

0xe467,	// (0x00060007) popup_cale_lunar_info_window_t2

0xe475,	// (0x00060015) popup_cale_lunar_info_window_t3

0xbcf9,	// (0x0005d899) bg_popup_call2_bubble_pane

0xdf2f,	// (0x0005facf) bg_popup_call2_in_pane_cp01_ParamLimits

0xdf2f,	// (0x0005facf) bg_popup_call2_in_pane_cp01

0xb9d5,	// (0x0005d575) call_type_pane_cp02

0x5c22,	// (0x000577c2) popup_call2_audio_out_window_g1_ParamLimits

0x5c22,	// (0x000577c2) popup_call2_audio_out_window_g1

0xdf77,	// (0x0005fb17) popup_call2_audio_out_window_g2_ParamLimits

0xdf77,	// (0x0005fb17) popup_call2_audio_out_window_g2

0x5c4e,	// (0x000577ee) popup_call2_audio_out_window_g3_ParamLimits

0x5c4e,	// (0x000577ee) popup_call2_audio_out_window_g3

0x0003,

0xf47f,	// (0x0006101f) popup_call2_audio_out_window_g_ParamLimits

0xf47f,	// (0x0006101f) popup_call2_audio_out_window_g

0xdfae,	// (0x0005fb4e) popup_call2_audio_out_window_t1_ParamLimits

0xdfae,	// (0x0005fb4e) popup_call2_audio_out_window_t1

0xe00d,	// (0x0005fbad) popup_call2_audio_out_window_t2_ParamLimits

0xe00d,	// (0x0005fbad) popup_call2_audio_out_window_t2

0xe061,	// (0x0005fc01) popup_call2_audio_out_window_t3_ParamLimits

0xe061,	// (0x0005fc01) popup_call2_audio_out_window_t3

0xe077,	// (0x0005fc17) popup_call2_audio_out_window_t4_ParamLimits

0xe077,	// (0x0005fc17) popup_call2_audio_out_window_t4

0xe08d,	// (0x0005fc2d) popup_call2_audio_out_window_t5_ParamLimits

0xe08d,	// (0x0005fc2d) popup_call2_audio_out_window_t5

0x0005,

0xf488,	// (0x00061028) popup_call2_audio_out_window_t_ParamLimits

0xf488,	// (0x00061028) popup_call2_audio_out_window_t

0xe0f1,	// (0x0005fc91) bg_popup_call2_in_pane_ParamLimits

0xe0f1,	// (0x0005fc91) bg_popup_call2_in_pane

0xe14d,	// (0x0005fced) popup_call2_audio_in_window_g1_ParamLimits

0xe14d,	// (0x0005fced) popup_call2_audio_in_window_g1

0xe185,	// (0x0005fd25) popup_call2_audio_in_window_g2_ParamLimits

0xe185,	// (0x0005fd25) popup_call2_audio_in_window_g2

0xe1bd,	// (0x0005fd5d) popup_call2_audio_in_window_g3_ParamLimits

0xe1bd,	// (0x0005fd5d) popup_call2_audio_in_window_g3

0x0003,

0xf495,	// (0x00061035) popup_call2_audio_in_window_g_ParamLimits

0xf495,	// (0x00061035) popup_call2_audio_in_window_g

0xe215,	// (0x0005fdb5) popup_call2_audio_in_window_t1_ParamLimits

0xe215,	// (0x0005fdb5) popup_call2_audio_in_window_t1

0xe295,	// (0x0005fe35) popup_call2_audio_in_window_t2_ParamLimits

0xe295,	// (0x0005fe35) popup_call2_audio_in_window_t2

0xe315,	// (0x0005feb5) popup_call2_audio_in_window_t3_ParamLimits

0xe315,	// (0x0005feb5) popup_call2_audio_in_window_t3

0xe32f,	// (0x0005fecf) popup_call2_audio_in_window_t4_ParamLimits

0xe32f,	// (0x0005fecf) popup_call2_audio_in_window_t4

0xe341,	// (0x0005fee1) popup_call2_audio_in_window_t5_ParamLimits

0xe341,	// (0x0005fee1) popup_call2_audio_in_window_t5

0xe356,	// (0x0005fef6) popup_call2_audio_in_window_t6_ParamLimits

0xe356,	// (0x0005fef6) popup_call2_audio_in_window_t6

0x0005,

0xf49e,	// (0x0006103e) popup_call2_audio_in_window_t_ParamLimits

0xf49e,	// (0x0006103e) popup_call2_audio_in_window_t

0xbf4c,	// (0x0005daec) bg_popup_call2_in_pane_g1

0xe483,	// (0x00060023) popup_cale_lunar_info_window_t4

0x0003,

0xf506,	// (0x000610a6) popup_cale_lunar_info_window_t

0xbf54,	// (0x0005daf4) bg_popup_call2_rect_pane_ParamLimits

0xbf54,	// (0x0005daf4) bg_popup_call2_rect_pane

0xbcf9,	// (0x0005d899) call2_cli_visual_graphic_pane

0xbcf9,	// (0x0005d899) call2_cli_visual_text_pane

0x604f,	// (0x00057bef) smil_status_volume_pane_g3

0x0002,

0xbf6c,	// (0x0005db0c) call2_cli_visual_graphic_pane_g1

0xbf6c,	// (0x0005db0c) call2_cli_visual_graphic_pane_g2

0xbf6c,	// (0x0005db0c) call2_cli_visual_graphic_pane_g3

0x0002,

0xf4ab,	// (0x0006104b) call2_cli_visual_graphic_pane_g

0xe36b,	// (0x0005ff0b) bg_popup_call2_rect_pane_g1

0xc150,	// (0x0005dcf0) bg_popup_call2_rect_pane_g2

0xe373,	// (0x0005ff13) bg_popup_call2_rect_pane_g3

0xe37b,	// (0x0005ff1b) bg_popup_call2_rect_pane_g4

0xe383,	// (0x0005ff23) bg_popup_call2_rect_pane_g5

0xe38b,	// (0x0005ff2b) bg_popup_call2_rect_pane_g6

0xe393,	// (0x0005ff33) bg_popup_call2_rect_pane_g7

0xe39b,	// (0x0005ff3b) bg_popup_call2_rect_pane_g8

0xe3a3,	// (0x0005ff43) bg_popup_call2_rect_pane_g9

0x0008,

0xf4b2,	// (0x00061052) bg_popup_call2_rect_pane_g

0xe3ab,	// (0x0005ff4b) bg_popup_call2_bubble_pane_g1

0xe3b3,	// (0x0005ff53) bg_popup_call2_bubble_pane_g2

0xe3bb,	// (0x0005ff5b) bg_popup_call2_bubble_pane_g3

0xe3c3,	// (0x0005ff63) bg_popup_call2_bubble_pane_g4

0xe3cb,	// (0x0005ff6b) bg_popup_call2_bubble_pane_g5

0xe3d3,	// (0x0005ff73) bg_popup_call2_bubble_pane_g6

0xe3db,	// (0x0005ff7b) bg_popup_call2_bubble_pane_g7

0xe3e3,	// (0x0005ff83) bg_popup_call2_bubble_pane_g8

0xe3eb,	// (0x0005ff8b) bg_popup_call2_bubble_pane_g9

0x0008,

0xf4c5,	// (0x00061065) bg_popup_call2_bubble_pane_g

0x3804,	// (0x000553a4) aid_cale_week_size_cell_pane

0xbf54,	// (0x0005daf4) aid_cams_cif_uncrop_pane_ParamLimits

0xbf54,	// (0x0005daf4) aid_cams_cif_uncrop_pane

0xbfcf,	// (0x0005db6f) aid_cams_size_cell_ParamLimits

0xbfcf,	// (0x0005db6f) aid_cams_size_cell

0xbfcf,	// (0x0005db6f) grid_cams_pane_ParamLimits

0xbfcf,	// (0x0005db6f) linegrid_cams_pane_ParamLimits

0x3ec3,	// (0x00055a63) call_video_pane_t1

0x3ee4,	// (0x00055a84) call_video_pane_t2

0x0001,

0xf1dd,	// (0x00060d7d) call_video_pane_t

0x442b,	// (0x00055fcb) aid_cale_month_size_cell_pane_ParamLimits

0x442b,	// (0x00055fcb) aid_cale_month_size_cell_pane

0xf54a,	// (0x000610ea) smil_status_volume_pane_g

0x605c,	// (0x00057bfc) volume_smil_pane_ParamLimits

0x3200,	// (0x00054da0) aid_popup2_width_pane

0x36f5,	// (0x00055295) cell_qdial_pane_g4_ParamLimits

0x36f5,	// (0x00055295) cell_qdial_pane_g4

0x52db,	// (0x00056e7b) aid_blid_cardinal_pane_ParamLimits

0x52eb,	// (0x00056e8b) aid_blid_destination_pane_ParamLimits

0x52eb,	// (0x00056e8b) aid_blid_destination_pane

0xbf54,	// (0x0005daf4) bg_popup_call_poc_act_pane_ParamLimits

0xbf54,	// (0x0005daf4) bg_popup_call_poc_act_pane

0xbf54,	// (0x0005daf4) bg_popup_call_poc_inact_pane_ParamLimits

0xbf54,	// (0x0005daf4) bg_popup_call_poc_inact_pane

0xe3f3,	// (0x0005ff93) bg_popup_call_poc_act_pane_g1

0xe3fb,	// (0x0005ff9b) bg_popup_call_poc_act_pane_g2

0xe403,	// (0x0005ffa3) bg_popup_call_poc_act_pane_g3

0xe3c3,	// (0x0005ff63) bg_popup_call_poc_act_pane_g4

0xe3cb,	// (0x0005ff6b) bg_popup_call_poc_act_pane_g5

0xe40b,	// (0x0005ffab) bg_popup_call_poc_act_pane_g6

0xe3db,	// (0x0005ff7b) bg_popup_call_poc_act_pane_g7

0xe413,	// (0x0005ffb3) bg_popup_call_poc_act_pane_g8

0xbcf9,	// (0x0005d899) main_usb_pane

0x5eb5,	// (0x00057a55) popup_cale_lunar_info_window

0x420d,	// (0x00055dad) im_reading_pane_t1_ParamLimits

0xc2ec,	// (0x0005de8c) list_im_pane_ParamLimits

0xc2fd,	// (0x0005de9d) scroll_pane_cp07_ParamLimits

0xbcf9,	// (0x0005d899) grid_highlight_pane_cp012

0xbf54,	// (0x0005daf4) mup_scale_pane_ParamLimits

0xbfeb,	// (0x0005db8b) main_usb_pane_g1_ParamLimits

0xbfeb,	// (0x0005db8b) main_usb_pane_g1

0xbfeb,	// (0x0005db8b) main_usb_pane_g2_ParamLimits

0xbfeb,	// (0x0005db8b) main_usb_pane_g2

0x0001,

0xf4ef,	// (0x0006108f) main_usb_pane_g_ParamLimits

0xf4ef,	// (0x0006108f) main_usb_pane_g

0xc039,	// (0x0005dbd9) main_usb_pane_t1_ParamLimits

0xc039,	// (0x0005dbd9) main_usb_pane_t1

0xc039,	// (0x0005dbd9) main_usb_pane_t2_ParamLimits

0xc039,	// (0x0005dbd9) main_usb_pane_t2

0xc039,	// (0x0005dbd9) main_usb_pane_t3_ParamLimits

0xc039,	// (0x0005dbd9) main_usb_pane_t3

0xc039,	// (0x0005dbd9) main_usb_pane_t4_ParamLimits

0xc039,	// (0x0005dbd9) main_usb_pane_t4

0xc039,	// (0x0005dbd9) main_usb_pane_t5_ParamLimits

0xc039,	// (0x0005dbd9) main_usb_pane_t5

0xc039,	// (0x0005dbd9) main_usb_pane_t6_ParamLimits

0xc039,	// (0x0005dbd9) main_usb_pane_t6

0x0005,

0xf4f4,	// (0x00061094) main_usb_pane_t_ParamLimits

0x5281,	// (0x00056e21) aid_text_placing

0x528d,	// (0x00056e2d) main_location2_pane_t1_ParamLimits

0x52a1,	// (0x00056e41) main_location2_pane_t2_ParamLimits

0x52b5,	// (0x00056e55) main_location2_pane_t3_ParamLimits

0x52c9,	// (0x00056e69) main_location2_pane_t4_ParamLimits

0x52c9,	// (0x00056e69) main_location2_pane_t4

0xf31e,	// (0x00060ebe) main_location2_pane_t_ParamLimits

0xbf90,	// (0x0005db30) find_pinb_pane_g2_ParamLimits

0xbf90,	// (0x0005db30) find_pinb_pane_g2

0x0001,

0xf095,	// (0x00060c35) find_pinb_pane_g_ParamLimits

0xf095,	// (0x00060c35) find_pinb_pane_g

0xbf9c,	// (0x0005db3c) find_pinb_pane_t1_ParamLimits

0xbfae,	// (0x0005db4e) find_pinb_pane_t2_ParamLimits

0xf09a,	// (0x00060c3a) find_pinb_pane_t_ParamLimits

0xbcf9,	// (0x0005d899) main_call3_pane

0x49ce,	// (0x0005656e) cale_month_day_heading_pane_t1_ParamLimits

0x4a54,	// (0x000565f4) cale_month_day_heading_pane_t2_ParamLimits

0x4acd,	// (0x0005666d) cale_month_day_heading_pane_t3_ParamLimits

0x4b46,	// (0x000566e6) cale_month_day_heading_pane_t4_ParamLimits

0x4bbf,	// (0x0005675f) cale_month_day_heading_pane_t5_ParamLimits

0x4c38,	// (0x000567d8) cale_month_day_heading_pane_t6_ParamLimits

0x4cb1,	// (0x00056851) cale_month_day_heading_pane_t7_ParamLimits

0xf215,	// (0x00060db5) cale_month_day_heading_pane_t_ParamLimits

0xc547,	// (0x0005e0e7) smil_status_volume_pane

0x583f,	// (0x000573df) postcard_address_pane_ParamLimits

0x583f,	// (0x000573df) postcard_address_pane

0x584b,	// (0x000573eb) postcard_message_pane_ParamLimits

0x584b,	// (0x000573eb) postcard_message_pane

0x5c7a,	// (0x0005781a) call2_cli_visual_pane_t1_ParamLimits

0x5c7a,	// (0x0005781a) call2_cli_visual_pane_t1

0xe598,	// (0x00060138) postcard_message_pane_t1_ParamLimits

0xe598,	// (0x00060138) postcard_message_pane_t1

0xe580,	// (0x00060120) postcard_address_pane_t1_ParamLimits

0xe580,	// (0x00060120) postcard_address_pane_t1

0x618d,	// (0x00057d2d) popup_call3_audio_in_window_ParamLimits

0x618d,	// (0x00057d2d) popup_call3_audio_in_window

0x6071,	// (0x00057c11) bg_popup_call3_in_pane_ParamLimits

0x6071,	// (0x00057c11) bg_popup_call3_in_pane

0x60d3,	// (0x00057c73) popup_call3_audio_in_window_g1_ParamLimits

0x60d3,	// (0x00057c73) popup_call3_audio_in_window_g1

0x60eb,	// (0x00057c8b) popup_call3_audio_in_window_g2_ParamLimits

0x60eb,	// (0x00057c8b) popup_call3_audio_in_window_g2

0x6103,	// (0x00057ca3) popup_call3_audio_in_window_g3_ParamLimits

0x6103,	// (0x00057ca3) popup_call3_audio_in_window_g3

0x0003,

0xf551,	// (0x000610f1) popup_call3_audio_in_window_g_ParamLimits

0xf551,	// (0x000610f1) popup_call3_audio_in_window_g

0x612b,	// (0x00057ccb) popup_call3_audio_in_window_t1_ParamLimits

0x612b,	// (0x00057ccb) popup_call3_audio_in_window_t1

0x6153,	// (0x00057cf3) popup_call3_audio_in_window_t2_ParamLimits

0x6153,	// (0x00057cf3) popup_call3_audio_in_window_t2

0x617b,	// (0x00057d1b) popup_call3_audio_in_window_t3_ParamLimits

0x617b,	// (0x00057d1b) popup_call3_audio_in_window_t3

0x0002,

0xf55a,	// (0x000610fa) popup_call3_audio_in_window_t_ParamLimits

0xf55a,	// (0x000610fa) popup_call3_audio_in_window_t

0xc22b,	// (0x0005ddcb) bg_popup_call3_rect_pane

0xe36b,	// (0x0005ff0b) bg_popup_call3_rect_pane_g1

0xc150,	// (0x0005dcf0) bg_popup_call3_rect_pane_g2

0xe373,	// (0x0005ff13) bg_popup_call3_rect_pane_g3

0xe37b,	// (0x0005ff1b) bg_popup_call3_rect_pane_g4

0xe383,	// (0x0005ff23) bg_popup_call3_rect_pane_g5

0xe38b,	// (0x0005ff2b) bg_popup_call3_rect_pane_g6

0xe393,	// (0x0005ff33) bg_popup_call3_rect_pane_g7

0xb8dc,	// (0x0005d47c) mup_visualizer_osc_pane

0xb8dc,	// (0x0005d47c) mup_visualizer_spec_pane

0x6091,	// (0x00057c31) call3_video_qcif_pane_ParamLimits

0x6091,	// (0x00057c31) call3_video_qcif_pane

0x60a3,	// (0x00057c43) call3_video_qcif_uncrop_pane_ParamLimits

0x60a3,	// (0x00057c43) call3_video_qcif_uncrop_pane

0x60b1,	// (0x00057c51) call3_video_subqcif_pane_ParamLimits

0x60b1,	// (0x00057c51) call3_video_subqcif_pane

0x60c3,	// (0x00057c63) call3_video_subqcif_uncrop_pane_ParamLimits

0x60c3,	// (0x00057c63) call3_video_subqcif_uncrop_pane

0x611b,	// (0x00057cbb) popup_call3_audio_in_window_g4_ParamLimits

0x611b,	// (0x00057cbb) popup_call3_audio_in_window_g4

0xb8dc,	// (0x0005d47c) mup_spec_half_pane

0xb8dc,	// (0x0005d47c) mup_spec_half_pane_cp

0xb8dc,	// (0x0005d47c) mup_osc_middle_pane

0xc01b,	// (0x0005dbbb) mup_visualizer_osc_pane_g1

0xe533,	// (0x000600d3) mup_spec_bar_pane_ParamLimits

0xe533,	// (0x000600d3) mup_spec_bar_pane

0xc01b,	// (0x0005dbbb) mup_spec_bar_pane_g1

0xc01b,	// (0x0005dbbb) mup_spec_bar_pane_g2

0x0001,

0xf0af,	// (0x00060c4f) mup_spec_bar_pane_g

0x3804,	// (0x000553a4) aid_cale_week_size_cell_pane_ParamLimits

0x3819,	// (0x000553b9) bg_cale_heading_pane_ParamLimits

0xc18d,	// (0x0005dd2d) bg_cale_pane_cp01_ParamLimits

0x3839,	// (0x000553d9) cale_week_corner_pane_ParamLimits

0x3853,	// (0x000553f3) cale_week_day_heading_pane_ParamLimits

0x3873,	// (0x00055413) cale_week_scroll_pane_g1_ParamLimits

0x388e,	// (0x0005542e) cale_week_scroll_pane_g2_ParamLimits

0x38a1,	// (0x00055441) cale_week_scroll_pane_g3_ParamLimits

0x38b4,	// (0x00055454) cale_week_scroll_pane_g4_ParamLimits

0x38c7,	// (0x00055467) cale_week_scroll_pane_g5_ParamLimits

0x38da,	// (0x0005547a) cale_week_scroll_pane_g6_ParamLimits

0x38ed,	// (0x0005548d) cale_week_scroll_pane_g7_ParamLimits

0x3902,	// (0x000554a2) cale_week_scroll_pane_g8_ParamLimits

0x3917,	// (0x000554b7) cale_week_scroll_pane_g9_ParamLimits

0x392a,	// (0x000554ca) cale_week_scroll_pane_g10_ParamLimits

0x393d,	// (0x000554dd) cale_week_scroll_pane_g11_ParamLimits

0x3950,	// (0x000554f0) cale_week_scroll_pane_g12_ParamLimits

0x3967,	// (0x00055507) cale_week_scroll_pane_g13_ParamLimits

0x3982,	// (0x00055522) cale_week_scroll_pane_g14_ParamLimits

0x399d,	// (0x0005553d) cale_week_scroll_pane_g15_ParamLimits

0xf126,	// (0x00060cc6) cale_week_scroll_pane_g_ParamLimits

0x39cd,	// (0x0005556d) cale_week_time_pane_ParamLimits

0x39e2,	// (0x00055582) grid_cale_week_pane_ParamLimits

0xc1aa,	// (0x0005dd4a) listscroll_cale_week_pane_t1

0xc1bc,	// (0x0005dd5c) scroll_pane_cp08_ParamLimits

0x449f,	// (0x0005603f) cale_month_corner_pane_ParamLimits

0xc51d,	// (0x0005e0bd) cale_month_pane_t1

0x4951,	// (0x000564f1) cale_month_week_pane_ParamLimits

0xdaec,	// (0x0005f68c) popup_call_status_window_g1_ParamLimits

0x50d8,	// (0x00056c78) popup_call_status_window_g2_ParamLimits

0x50e4,	// (0x00056c84) popup_call_status_window_g3_ParamLimits

0xf2a5,	// (0x00060e45) popup_call_status_window_g_ParamLimits

0xce79,	// (0x0005ea19) aid_call2_pane

0x5682,	// (0x00057222) msg_header_pane_g1

0x583f,	// (0x000573df) postcard_address2_pane_ParamLimits

0x583f,	// (0x000573df) postcard_address2_pane

0x584b,	// (0x000573eb) postcard_message2_pane_ParamLimits

0x584b,	// (0x000573eb) postcard_message2_pane

0x6021,	// (0x00057bc1) message2_row_pane_ParamLimits

0x6021,	// (0x00057bc1) message2_row_pane

0x603c,	// (0x00057bdc) address2_row_pane_ParamLimits

0x603c,	// (0x00057bdc) address2_row_pane

0xe500,	// (0x000600a0) postcard_message2_row_pane_g1

0xe508,	// (0x000600a8) postcard_message2_row_pane_t1

0xe500,	// (0x000600a0) address2_row_pane_g1

0xe508,	// (0x000600a8) address2_row_pane_t1

0x3c68,	// (0x00055808) aid_size_cell_vorec

0xbcf9,	// (0x0005d899) main_rss_pane

0xe516,	// (0x000600b6) rss_list_single_pane_ParamLimits

0xe516,	// (0x000600b6) rss_list_single_pane

0xe524,	// (0x000600c4) rss_list_single_pane_t1

0xe524,	// (0x000600c4) rss_list_single_pane_t2

0x0001,

0xf545,	// (0x000610e5) rss_list_single_pane_t

0xbcf9,	// (0x0005d899) main_camera2_pane

0xbcf9,	// (0x0005d899) main_video2_pane

0x340b,	// (0x00054fab) cams_zoom_pane_cp2_ParamLimits

0x340b,	// (0x00054fab) cams_zoom_pane_cp2

0x340b,	// (0x00054fab) image2_vga_pane_ParamLimits

0x340b,	// (0x00054fab) image2_vga_pane

0xcead,	// (0x0005ea4d) main_camera2_pane_g1_ParamLimits

0xcead,	// (0x0005ea4d) main_camera2_pane_g1

0xcead,	// (0x0005ea4d) main_camera2_pane_g2_ParamLimits

0xcead,	// (0x0005ea4d) main_camera2_pane_g2

0xcead,	// (0x0005ea4d) main_camera2_pane_g3_ParamLimits

0xcead,	// (0x0005ea4d) main_camera2_pane_g3

0xcead,	// (0x0005ea4d) main_camera2_pane_g4_ParamLimits

0xcead,	// (0x0005ea4d) main_camera2_pane_g4

0xcead,	// (0x0005ea4d) main_camera2_pane_g5_ParamLimits

0xcead,	// (0x0005ea4d) main_camera2_pane_g5

0xcead,	// (0x0005ea4d) main_camera2_pane_g6_ParamLimits

0xcead,	// (0x0005ea4d) main_camera2_pane_g6

0xcead,	// (0x0005ea4d) main_camera2_pane_g7_ParamLimits

0xcead,	// (0x0005ea4d) main_camera2_pane_g7

0xcead,	// (0x0005ea4d) main_camera2_pane_g8_ParamLimits

0xcead,	// (0x0005ea4d) main_camera2_pane_g8

0x0008,

0xf561,	// (0x00061101) main_camera2_pane_g_ParamLimits

0xf561,	// (0x00061101) main_camera2_pane_g

0x61aa,	// (0x00057d4a) main_camera2_pane_t1_ParamLimits

0x61aa,	// (0x00057d4a) main_camera2_pane_t1

0x61aa,	// (0x00057d4a) main_camera2_pane_t2_ParamLimits

0x61aa,	// (0x00057d4a) main_camera2_pane_t2

0x61aa,	// (0x00057d4a) main_camera2_pane_t3_ParamLimits

0x61aa,	// (0x00057d4a) main_camera2_pane_t3

0x61aa,	// (0x00057d4a) main_camera2_pane_t4_ParamLimits

0x61aa,	// (0x00057d4a) main_camera2_pane_t4

0x0006,

0xf574,	// (0x00061114) main_camera2_pane_t_ParamLimits

0xf574,	// (0x00061114) main_camera2_pane_t

0x61d2,	// (0x00057d72) cams_zoom_pane_cp4_ParamLimits

0x61d2,	// (0x00057d72) cams_zoom_pane_cp4

0x5e60,	// (0x00057a00) image2_cif_pane_ParamLimits

0x5e60,	// (0x00057a00) image2_cif_pane

0x340b,	// (0x00054fab) image2_subqcif_pane_ParamLimits

0x340b,	// (0x00054fab) image2_subqcif_pane

0x61e0,	// (0x00057d80) main_video2_pane_g1_ParamLimits

0x61e0,	// (0x00057d80) main_video2_pane_g1

0x61e0,	// (0x00057d80) main_video2_pane_g2_ParamLimits

0x61e0,	// (0x00057d80) main_video2_pane_g2

0x61e0,	// (0x00057d80) main_video2_pane_g3_ParamLimits

0x61e0,	// (0x00057d80) main_video2_pane_g3

0x61e0,	// (0x00057d80) main_video2_pane_g4_ParamLimits

0x61e0,	// (0x00057d80) main_video2_pane_g4

0x61e0,	// (0x00057d80) main_video2_pane_g5_ParamLimits

0x61e0,	// (0x00057d80) main_video2_pane_g5

0x61e0,	// (0x00057d80) main_video2_pane_g6_ParamLimits

0x61e0,	// (0x00057d80) main_video2_pane_g6

0x0005,

0xf583,	// (0x00061123) main_video2_pane_g_ParamLimits

0xf583,	// (0x00061123) main_video2_pane_g

0x61ee,	// (0x00057d8e) main_video2_pane_t1_ParamLimits

0x61ee,	// (0x00057d8e) main_video2_pane_t1

0x61ee,	// (0x00057d8e) main_video2_pane_t2_ParamLimits

0x61ee,	// (0x00057d8e) main_video2_pane_t2

0x61ee,	// (0x00057d8e) main_video2_pane_t3_ParamLimits

0x61ee,	// (0x00057d8e) main_video2_pane_t3

0x0002,

0xf590,	// (0x00061130) main_video2_pane_t_ParamLimits

0xf590,	// (0x00061130) main_video2_pane_t

0x5d33,	// (0x000578d3) call_muted_g2

0x0001,

0xf537,	// (0x000610d7) call_muted_g

0xbcf9,	// (0x0005d899) main_mup2_pane

0xbff9,	// (0x0005db99) main_mup2_pane_g1_ParamLimits

0xbff9,	// (0x0005db99) main_mup2_pane_g1

0xbff9,	// (0x0005db99) main_mup2_pane_g2_ParamLimits

0xbff9,	// (0x0005db99) main_mup2_pane_g2

0x0ee1,	// (0x00052a81) main_mup_pane_g13_cp1

0x3425,	// (0x00054fc5) mup_volume_pane_cp1

0xbff9,	// (0x0005db99) main_mup2_pane_g4_ParamLimits

0xbff9,	// (0x0005db99) main_mup2_pane_g4

0xbff9,	// (0x0005db99) main_mup2_pane_g5_ParamLimits

0xbff9,	// (0x0005db99) main_mup2_pane_g5

0xbff9,	// (0x0005db99) main_mup2_pane_g6_ParamLimits

0xbff9,	// (0x0005db99) main_mup2_pane_g6

0xbff9,	// (0x0005db99) main_mup2_pane_g7_ParamLimits

0xbff9,	// (0x0005db99) main_mup2_pane_g7

0x0006,

0xf597,	// (0x00061137) main_mup2_pane_g_ParamLimits

0xf597,	// (0x00061137) main_mup2_pane_g

0xc007,	// (0x0005dba7) main_mup2_pane_t1_ParamLimits

0xc007,	// (0x0005dba7) main_mup2_pane_t1

0xc007,	// (0x0005dba7) main_mup2_pane_t2_ParamLimits

0xc007,	// (0x0005dba7) main_mup2_pane_t2

0xc007,	// (0x0005dba7) main_mup2_pane_t3_ParamLimits

0xc007,	// (0x0005dba7) main_mup2_pane_t3

0xc007,	// (0x0005dba7) main_mup2_pane_t4_ParamLimits

0xc007,	// (0x0005dba7) main_mup2_pane_t4

0xc007,	// (0x0005dba7) main_mup2_pane_t5_ParamLimits

0xc007,	// (0x0005dba7) main_mup2_pane_t5

0xc007,	// (0x0005dba7) main_mup2_pane_t6_ParamLimits

0xc007,	// (0x0005dba7) main_mup2_pane_t6

0x0005,

0xf5a6,	// (0x00061146) main_mup2_pane_t_ParamLimits

0xf5a6,	// (0x00061146) main_mup2_pane_t

0xe433,	// (0x0005ffd3) mup2_visualizer_pane_ParamLimits

0xe433,	// (0x0005ffd3) mup2_visualizer_pane

0xe433,	// (0x0005ffd3) mup_progress_pane_cp_ParamLimits

0xe433,	// (0x0005ffd3) mup_progress_pane_cp

0x62b5,	// (0x00057e55) mup_volume_pane_cp_ParamLimits

0x62b5,	// (0x00057e55) mup_volume_pane_cp

0xbfdd,	// (0x0005db7d) mup2_visualizer_pane_g1_ParamLimits

0xbfdd,	// (0x0005db7d) mup2_visualizer_pane_g1

0xbfeb,	// (0x0005db8b) mup2_visualizer_pane_g2_ParamLimits

0xbfeb,	// (0x0005db8b) mup2_visualizer_pane_g2

0xbfeb,	// (0x0005db8b) mup2_visualizer_pane_g3_ParamLimits

0xbfeb,	// (0x0005db8b) mup2_visualizer_pane_g3

0x0002,

0xf09f,	// (0x00060c3f) mup2_visualizer_pane_g_ParamLimits

0xf09f,	// (0x00060c3f) mup2_visualizer_pane_g

0xb8dc,	// (0x0005d47c) aid_size_cell_fmradio

0x5e49,	// (0x000579e9) aid_height_parent_landcape

0xc37b,	// (0x0005df1b) wml_content_pane_cp

0xc383,	// (0x0005df23) wml_tabs_pane

0xc38c,	// (0x0005df2c) popup_wml_miniature_window

0xc394,	// (0x0005df34) scroll_pane_cp021

0xc3a8,	// (0x0005df48) wml_content_pane_comp8

0xbcf9,	// (0x0005d899) bg_popup_sub_pane_cp05

0xe5ec,	// (0x0006018c) popup_wml_miniature_window_g1

0xe5f4,	// (0x00060194) wml_miniature_view_pane

0x6202,	// (0x00057da2) aid_size_wml_view

0x620a,	// (0x00057daa) wml_miniature_view_pane_g1

0x6213,	// (0x00057db3) wml_miniature_view_pane_g2

0x621c,	// (0x00057dbc) wml_miniature_view_pane_g3

0x6224,	// (0x00057dc4) wml_miniature_view_pane_g4

0x622c,	// (0x00057dcc) wml_miniature_view_pane_g5

0x6234,	// (0x00057dd4) wml_miniature_view_pane_g6

0x623c,	// (0x00057ddc) wml_miniature_view_pane_g7

0x6244,	// (0x00057de4) wml_miniature_view_pane_g8

0x0007,

0xf5b3,	// (0x00061153) wml_miniature_view_pane_g

0xe5fc,	// (0x0006019c) background_graphic_ParamLimits

0xe5fc,	// (0x0006019c) background_graphic

0xe608,	// (0x000601a8) wml_tabs_2_pane

0xe611,	// (0x000601b1) wml_tabs_3_pane_ParamLimits

0xe611,	// (0x000601b1) wml_tabs_3_pane

0xe623,	// (0x000601c3) wml_tabs_4_pane_ParamLimits

0xe623,	// (0x000601c3) wml_tabs_4_pane

0xe639,	// (0x000601d9) wml_tabs_5_pane_ParamLimits

0xe639,	// (0x000601d9) wml_tabs_5_pane

0xe653,	// (0x000601f3) wml_tabs_pane_g2_ParamLimits

0xe653,	// (0x000601f3) wml_tabs_pane_g2

0xe668,	// (0x00060208) wml_tabs_pane_g3_ParamLimits

0xe668,	// (0x00060208) wml_tabs_pane_g3

0xe67d,	// (0x0006021d) wml_tabs_2_active_pane_ParamLimits

0xe67d,	// (0x0006021d) wml_tabs_2_active_pane

0xe67d,	// (0x0006021d) wml_tabs_2_passive_pane_ParamLimits

0xe67d,	// (0x0006021d) wml_tabs_2_passive_pane

0x624c,	// (0x00057dec) wml_tabs_3_active_pane_cp_ParamLimits

0x624c,	// (0x00057dec) wml_tabs_3_active_pane_cp

0x625d,	// (0x00057dfd) wml_tabs_3_passive_pane_ParamLimits

0x625d,	// (0x00057dfd) wml_tabs_3_passive_pane

0x626e,	// (0x00057e0e) wml_tabs_3_passive_pane_cp_ParamLimits

0x626e,	// (0x00057e0e) wml_tabs_3_passive_pane_cp

0x627f,	// (0x00057e1f) tabs_4_active_pane

0x6287,	// (0x00057e27) tabs_4_passive_pane

0x628f,	// (0x00057e2f) tabs_4_passive_pane_cp

0x6297,	// (0x00057e37) tabs_4_passive_pane_cp2

0x5ca7,	// (0x00057847) aid_height_text

0xe433,	// (0x0005ffd3) mup_volume_cont_pane_ParamLimits

0xe433,	// (0x0005ffd3) mup_volume_cont_pane

0xb8dc,	// (0x0005d47c) aid_size_cell_pinb

0xb8dc,	// (0x0005d47c) aid_size_list_pinb

0xe433,	// (0x0005ffd3) mup2_volume_cont_pane_ParamLimits

0xe433,	// (0x0005ffd3) mup2_volume_cont_pane

0x629f,	// (0x00057e3f) mup2_volume_cont_pane_g1_ParamLimits

0x629f,	// (0x00057e3f) mup2_volume_cont_pane_g1

0x320c,	// (0x00054dac) aid_size_cell_touch_ParamLimits

0x320c,	// (0x00054dac) aid_size_cell_touch

0x342f,	// (0x00054fcf) touch_pane_ParamLimits

0x342f,	// (0x00054fcf) touch_pane

0x3425,	// (0x00054fc5) main_rss2_pane

0xe694,	// (0x00060234) listscroll_rss2_pane

0xe69d,	// (0x0006023d) rss2_navigation_pane

0xe6a5,	// (0x00060245) list_rss2_pane

0xcfbc,	// (0x0005eb5c) scroll_pane_cp22

0xe6ad,	// (0x0006024d) rss2_navigation_pane_g1

0xe6b6,	// (0x00060256) rss2_navigation_pane_g2

0xe6be,	// (0x0006025e) rss2_navigation_pane_g3

0x0002,

0xf5c4,	// (0x00061164) rss2_navigation_pane_g

0xe6c6,	// (0x00060266) rss2_navigation_pane_t1

0x62cb,	// (0x00057e6b) rss2_list_single_pane_ParamLimits

0x62cb,	// (0x00057e6b) rss2_list_single_pane

0xe6d4,	// (0x00060274) rss2_list_single_pane_t2

0xe6e2,	// (0x00060282) rss2_list_single_pane_t3_ParamLimits

0xe6e2,	// (0x00060282) rss2_list_single_pane_t3

0xe6ff,	// (0x0006029f) rss2_list_single_pane_t4

0x4f4d,	// (0x00056aed) smil_status_pane_g1

0x5e60,	// (0x00057a00) main_image2_pane_ParamLimits

0x5e60,	// (0x00057a00) main_image2_pane

0xcead,	// (0x0005ea4d) main_camera2_pane_g9_ParamLimits

0xcead,	// (0x0005ea4d) main_camera2_pane_g9

0x61aa,	// (0x00057d4a) main_camera2_pane_t5_ParamLimits

0x61aa,	// (0x00057d4a) main_camera2_pane_t5

0x61be,	// (0x00057d5e) main_camera2_pane_t6_ParamLimits

0x61be,	// (0x00057d5e) main_camera2_pane_t6

0x62fc,	// (0x00057e9c) main_image2_pane_g1_ParamLimits

0x62fc,	// (0x00057e9c) main_image2_pane_g1

0x59df,	// (0x0005757f) smil2_video_pane_ParamLimits

0x59df,	// (0x0005757f) smil2_video_pane

0x3074,	// (0x00054c14) aid_zoom_text_primary_cp

0x33c0,	// (0x00054f60) popup_preview_fixed_window

0xc2e4,	// (0x0005de84) im_reading_pane_g1

0x619c,	// (0x00057d3c) cams2_bc_adjust_pane_cp_ParamLimits

0x619c,	// (0x00057d3c) cams2_bc_adjust_pane_cp

0x340b,	// (0x00054fab) cams2_bc_adjust_pane_ParamLimits

0x340b,	// (0x00054fab) cams2_bc_adjust_pane

0x0ee1,	// (0x00052a81) cams2_bc_adjust_pane_g1

0x3425,	// (0x00054fc5) cams2_slider_pane

0x0ee1,	// (0x00052a81) cams2_slider_pane_g1

0x0ee1,	// (0x00052a81) cams2_slider_pane_g2

0x0006,

0xf5cb,	// (0x0006116b) cams2_slider_pane_g

0x34fd,	// (0x0005509d) calc_display_pane_ParamLimits

0x351b,	// (0x000550bb) calc_paper_pane_ParamLimits

0x3537,	// (0x000550d7) grid_calc_pane_ParamLimits

0x5146,	// (0x00056ce6) popup_clock_digital_window_t1_ParamLimits

0xd4a8,	// (0x0005f048) main_image_pane_t1

0x34e3,	// (0x00055083) aid_size_cell_calc_ParamLimits

0x34e3,	// (0x00055083) aid_size_cell_calc

0x5e91,	// (0x00057a31) popup_blid_sat_info2_window_ParamLimits

0x5e91,	// (0x00057a31) popup_blid_sat_info2_window

0xe70d,	// (0x000602ad) aid_size_cell_blid

0xe433,	// (0x0005ffd3) bg_popup_window_pane_cp07

0xe72a,	// (0x000602ca) grid_popup_blid_pane

0xe734,	// (0x000602d4) heading_pane_cp05_ParamLimits

0xe734,	// (0x000602d4) heading_pane_cp05

0xe7fe,	// (0x0006039e) cell_popup_blid_pane_ParamLimits

0xe7fe,	// (0x0006039e) cell_popup_blid_pane

0xe822,	// (0x000603c2) cell_popup_blid_pane_g1

0xe82a,	// (0x000603ca) cell_popup_blid_pane_t1

0xe433,	// (0x0005ffd3) mup2_indicator_pane_ParamLimits

0xe433,	// (0x0005ffd3) mup2_indicator_pane

0xb8dc,	// (0x0005d47c) mup2_visualizer_osc_pane

0xe5b4,	// (0x00060154) mup2_visualizer_spec_pane_ParamLimits

0xe5b4,	// (0x00060154) mup2_visualizer_spec_pane

0xb8dc,	// (0x0005d47c) mup2_spec_half_pane

0xb8dc,	// (0x0005d47c) mup2_spec_half_pane_cp

0xe838,	// (0x000603d8) mup2_spec_bar_pane_ParamLimits

0xe838,	// (0x000603d8) mup2_spec_bar_pane

0xc01b,	// (0x0005dbbb) mup2_spec_bar_pane_g1

0xe857,	// (0x000603f7) mup2_spec_bar_pane_g2

0x0001,

0xf5f1,	// (0x00061191) mup2_spec_bar_pane_g

0xb8dc,	// (0x0005d47c) mup2_osc_middle_pane

0xc01b,	// (0x0005dbbb) mup2_visualizer_osc_pane_g1

0xb906,	// (0x0005d4a6) popup_number_entry_window_t1_ParamLimits

0xb919,	// (0x0005d4b9) popup_number_entry_window_t2_ParamLimits

0xb92b,	// (0x0005d4cb) popup_number_entry_window_t3_ParamLimits

0x3486,	// (0x00055026) popup_number_entry_window_t5_ParamLimits

0x3486,	// (0x00055026) popup_number_entry_window_t5

0xf040,	// (0x00060be0) popup_number_entry_window_t_ParamLimits

0xb93d,	// (0x0005d4dd) text_title_cp2_ParamLimits

0x5713,	// (0x000572b3) aid_hotspot_pointer_text2_pane

0x57a1,	// (0x00057341) main_viewer_pane_g9_ParamLimits

0x57a1,	// (0x00057341) main_viewer_pane_g9

0xc51d,	// (0x0005e0bd) cale_month_pane_t1_ParamLimits

0xc55a,	// (0x0005e0fa) bg_cale_pane_ParamLimits

0xc572,	// (0x0005e112) list_cale_pane_ParamLimits

0xc583,	// (0x0005e123) listscroll_cale_day_pane_t1

0xc595,	// (0x0005e135) scroll_pane_cp09_ParamLimits

0x53c9,	// (0x00056f69) main_mup_eq_pane_t1_ParamLimits

0x53c9,	// (0x00056f69) main_mup_eq_pane_t1

0x53e3,	// (0x00056f83) main_mup_eq_pane_t2_ParamLimits

0x53e3,	// (0x00056f83) main_mup_eq_pane_t2

0x53fd,	// (0x00056f9d) main_mup_eq_pane_t3_ParamLimits

0x53fd,	// (0x00056f9d) main_mup_eq_pane_t3

0x5415,	// (0x00056fb5) main_mup_eq_pane_t4_ParamLimits

0x5415,	// (0x00056fb5) main_mup_eq_pane_t4

0x542d,	// (0x00056fcd) main_mup_eq_pane_t5_ParamLimits

0x542d,	// (0x00056fcd) main_mup_eq_pane_t5

0x5445,	// (0x00056fe5) main_mup_eq_pane_t6_ParamLimits

0x5445,	// (0x00056fe5) main_mup_eq_pane_t6

0x5459,	// (0x00056ff9) main_mup_eq_pane_t7_ParamLimits

0x5459,	// (0x00056ff9) main_mup_eq_pane_t7

0x546d,	// (0x0005700d) main_mup_eq_pane_t8_ParamLimits

0x546d,	// (0x0005700d) main_mup_eq_pane_t8

0x5483,	// (0x00057023) main_mup_eq_pane_t9_ParamLimits

0x5483,	// (0x00057023) main_mup_eq_pane_t9

0x549b,	// (0x0005703b) main_mup_eq_pane_t10_ParamLimits

0x549b,	// (0x0005703b) main_mup_eq_pane_t10

0x0009,

0xf39f,	// (0x00060f3f) main_mup_eq_pane_t_ParamLimits

0xf39f,	// (0x00060f3f) main_mup_eq_pane_t

0x5558,	// (0x000570f8) mup_equalizer_pane_cp5_ParamLimits

0x556e,	// (0x0005710e) mup_equalizer_pane_cp6_ParamLimits

0x5586,	// (0x00057126) mup_equalizer_pane_cp7_ParamLimits

0x3425,	// (0x00054fc5) main_gallery_pane

0xe552,	// (0x000600f2) smil2_volume_pane

0xe55a,	// (0x000600fa) smil_status_volume_pane_g1_ParamLimits

0xe56d,	// (0x0006010d) smil_status_volume_pane_g2_ParamLimits

0x604f,	// (0x00057bef) smil_status_volume_pane_g3_ParamLimits

0xf54a,	// (0x000610ea) smil_status_volume_pane_g_ParamLimits

0xe433,	// (0x0005ffd3) bg_popup_window_pane_cp07_ParamLimits

0xe715,	// (0x000602b5) blid_firmament_pane

0xbfcf,	// (0x0005db6f) aid_size_cell_gallery_ParamLimits

0xbfcf,	// (0x0005db6f) aid_size_cell_gallery

0xbfcf,	// (0x0005db6f) grid_gallery_pane_ParamLimits

0xbfcf,	// (0x0005db6f) grid_gallery_pane

0xd3a2,	// (0x0005ef42) cell_gallery_pane_ParamLimits

0xd3a2,	// (0x0005ef42) cell_gallery_pane

0xbf76,	// (0x0005db16) bg_cell_gallery_focus_pane_ParamLimits

0xbf76,	// (0x0005db16) bg_cell_gallery_focus_pane

0xbfdd,	// (0x0005db7d) cell_gallery_pane_g1_ParamLimits

0xbfdd,	// (0x0005db7d) cell_gallery_pane_g1

0xbfdd,	// (0x0005db7d) cell_gallery_pane_g2_ParamLimits

0xbfdd,	// (0x0005db7d) cell_gallery_pane_g2

0xbfdd,	// (0x0005db7d) cell_gallery_pane_g3_ParamLimits

0xbfdd,	// (0x0005db7d) cell_gallery_pane_g3

0xbfeb,	// (0x0005db8b) cell_gallery_pane_g4_ParamLimits

0xbfeb,	// (0x0005db8b) cell_gallery_pane_g4

0x0003,

0xf5f6,	// (0x00061196) cell_gallery_pane_g_ParamLimits

0xf5f6,	// (0x00061196) cell_gallery_pane_g

0xe861,	// (0x00060401) bg_cell_gallery_focus_pane_g1

0xe869,	// (0x00060409) bg_cell_gallery_focus_pane_g2

0xe871,	// (0x00060411) bg_cell_gallery_focus_pane_g3

0xe879,	// (0x00060419) bg_cell_gallery_focus_pane_g4

0xe881,	// (0x00060421) bg_cell_gallery_focus_pane_g5

0xe889,	// (0x00060429) bg_cell_gallery_focus_pane_g6

0xe891,	// (0x00060431) bg_cell_gallery_focus_pane_g7

0xe899,	// (0x00060439) bg_cell_gallery_focus_pane_g8

0x0007,

0xf5ff,	// (0x0006119f) bg_cell_gallery_focus_pane_g

0xe8a1,	// (0x00060441) aid_firma_cardinal

0xe8b5,	// (0x00060455) blid_firmament_pane_t1

0xe8cc,	// (0x0006046c) blid_firmament_pane_t2

0xe8e3,	// (0x00060483) blid_firmament_pane_t3

0xe8fa,	// (0x0006049a) blid_firmament_pane_t4

0x0003,

0xf610,	// (0x000611b0) blid_firmament_pane_t

0xe911,	// (0x000604b1) blid_sat_info_pane

0xc01b,	// (0x0005dbbb) blid_sat_info_pane_g1

0xc01b,	// (0x0005dbbb) blid_sat_info_pane_g2

0x0001,

0xf0af,	// (0x00060c4f) blid_sat_info_pane_g

0xe921,	// (0x000604c1) blid_sat_info_pane_t1

0xe92f,	// (0x000604cf) smil2_volume_content_pane

0xe938,	// (0x000604d8) smil2_volume_pane_g1

0xc694,	// (0x0005e234) smil2_volume_content_pane_g1

0xe940,	// (0x000604e0) smil2_volume_content_pane_g2

0xe949,	// (0x000604e9) smil2_volume_content_pane_g3

0xe952,	// (0x000604f2) smil2_volume_content_pane_g4

0xe95b,	// (0x000604fb) smil2_volume_content_pane_g5

0xe964,	// (0x00060504) smil2_volume_content_pane_g6

0xe96d,	// (0x0006050d) smil2_volume_content_pane_g7

0xe976,	// (0x00060516) smil2_volume_content_pane_g8

0xe97f,	// (0x0006051f) smil2_volume_content_pane_g9

0xe988,	// (0x00060528) smil2_volume_content_pane_g10

0x0009,

0xf619,	// (0x000611b9) smil2_volume_content_pane_g

0x3a63,	// (0x00055603) cale_week_day_heading_pane_t1_ParamLimits

0x3a7e,	// (0x0005561e) cale_week_day_heading_pane_t2_ParamLimits

0x3a99,	// (0x00055639) cale_week_day_heading_pane_t3_ParamLimits

0x3ab4,	// (0x00055654) cale_week_day_heading_pane_t4_ParamLimits

0x3acf,	// (0x0005566f) cale_week_day_heading_pane_t5_ParamLimits

0x3aea,	// (0x0005568a) cale_week_day_heading_pane_t6_ParamLimits

0x3b05,	// (0x000556a5) cale_week_day_heading_pane_t7_ParamLimits

0xf147,	// (0x00060ce7) cale_week_day_heading_pane_t_ParamLimits

0xc1d9,	// (0x0005dd79) bg_cale_side_pane_ParamLimits

0x3b20,	// (0x000556c0) cale_week_time_pane_t1_ParamLimits

0x3b3a,	// (0x000556da) cale_week_time_pane_t2_ParamLimits

0x3b54,	// (0x000556f4) cale_week_time_pane_t3_ParamLimits

0x3b6e,	// (0x0005570e) cale_week_time_pane_t4_ParamLimits

0x3b88,	// (0x00055728) cale_week_time_pane_t5_ParamLimits

0x3ba2,	// (0x00055742) cale_week_time_pane_t6_ParamLimits

0x3bc0,	// (0x00055760) cale_week_time_pane_t7_ParamLimits

0x3be2,	// (0x00055782) cale_week_time_pane_t8_ParamLimits

0xf156,	// (0x00060cf6) cale_week_time_pane_t_ParamLimits

0x3c06,	// (0x000557a6) cell_cale_week_pane_g2_ParamLimits

0xc1d9,	// (0x0005dd79) bg_cale_side_pane_cp01_ParamLimits

0x4d42,	// (0x000568e2) cale_month_week_pane_t1_ParamLimits

0x4d5b,	// (0x000568fb) cale_month_week_pane_t2_ParamLimits

0x4d74,	// (0x00056914) cale_month_week_pane_t3_ParamLimits

0x4d8d,	// (0x0005692d) cale_month_week_pane_t4_ParamLimits

0x4da6,	// (0x00056946) cale_month_week_pane_t5_ParamLimits

0x4dc7,	// (0x00056967) cale_month_week_pane_t6_ParamLimits

0xf224,	// (0x00060dc4) cale_month_week_pane_t_ParamLimits

0x4f0a,	// (0x00056aaa) cell_cale_month_pane_g1_ParamLimits

0x3425,	// (0x00054fc5) main_cale_event_viewer_pane

0xb8dc,	// (0x0005d47c) listscroll_cale_event_viewer_pane

0xe991,	// (0x00060531) list_cale_ev_pane

0xe999,	// (0x00060539) scroll_pane_cp023

0xe9a5,	// (0x00060545) field_cale_ev_pane_ParamLimits

0xe9a5,	// (0x00060545) field_cale_ev_pane

0xe9c3,	// (0x00060563) field_cale_ev_content_pane_ParamLimits

0xe9c3,	// (0x00060563) field_cale_ev_content_pane

0xe9cf,	// (0x0006056f) field_cale_ev_pane_g1_ParamLimits

0xe9cf,	// (0x0006056f) field_cale_ev_pane_g1

0xe9db,	// (0x0006057b) field_cale_ev_pane_g2_ParamLimits

0xe9db,	// (0x0006057b) field_cale_ev_pane_g2

0xe9f3,	// (0x00060593) field_cale_ev_pane_g3_ParamLimits

0xe9f3,	// (0x00060593) field_cale_ev_pane_g3

0x0002,

0xf62e,	// (0x000611ce) field_cale_ev_pane_g_ParamLimits

0xf62e,	// (0x000611ce) field_cale_ev_pane_g

0xea0b,	// (0x000605ab) field_cale_ev_pane_t1_ParamLimits

0xea0b,	// (0x000605ab) field_cale_ev_pane_t1

0xc69d,	// (0x0005e23d) field_cale_ev_content_pane_t1_ParamLimits

0xc69d,	// (0x0005e23d) field_cale_ev_content_pane_t1

0xd349,	// (0x0005eee9) bg_button_pane_cp01

0x37f4,	// (0x00055394) listscroll_cale_week_pane_ParamLimits

0xc184,	// (0x0005dd24) popup_toolbar_window_cp01

0xc1aa,	// (0x0005dd4a) listscroll_cale_week_pane_t1_ParamLimits

0x37f4,	// (0x00055394) listscroll_cale_day_pane_ParamLimits

0xc184,	// (0x0005dd24) popup_toolbar_window_cp02

0xc583,	// (0x0005e123) listscroll_cale_day_pane_t1_ParamLimits

0x37f4,	// (0x00055394) main_cale_month_pane_ParamLimits

0x5f98,	// (0x00057b38) popup_toolbar_window_cp03_ParamLimits

0x5f98,	// (0x00057b38) popup_toolbar_window_cp03

0x58f5,	// (0x00057495) main_image_pane_g2_ParamLimits

0x58f5,	// (0x00057495) main_image_pane_g2

0x5901,	// (0x000574a1) main_image_pane_g3_ParamLimits

0x5901,	// (0x000574a1) main_image_pane_g3

0x0002,

0xf431,	// (0x00060fd1) main_image_pane_g_ParamLimits

0xf431,	// (0x00060fd1) main_image_pane_g

0xd4a8,	// (0x0005f048) main_image_pane_t1_ParamLimits

0x590d,	// (0x000574ad) main_image_pane_t2_ParamLimits

0x590d,	// (0x000574ad) main_image_pane_t2

0x591f,	// (0x000574bf) main_image_pane_t3_ParamLimits

0x591f,	// (0x000574bf) main_image_pane_t3

0x5931,	// (0x000574d1) main_image_pane_t4_ParamLimits

0x5931,	// (0x000574d1) main_image_pane_t4

0x0003,

0xf438,	// (0x00060fd8) main_image_pane_t_ParamLimits

0xf438,	// (0x00060fd8) main_image_pane_t

0x5943,	// (0x000574e3) popup_image_details_window_cp01

0x594d,	// (0x000574ed) popup_toobar_trans_pane_cp01_ParamLimits

0x594d,	// (0x000574ed) popup_toobar_trans_pane_cp01

0x5ee8,	// (0x00057a88) popup_image_details_window_ParamLimits

0x5ee8,	// (0x00057a88) popup_image_details_window

0x5ef6,	// (0x00057a96) popup_image_focus_window

0x340b,	// (0x00054fab) camera2_autofocus_pane_ParamLimits

0x340b,	// (0x00054fab) camera2_autofocus_pane

0xb8dc,	// (0x0005d47c) bg_popup_sub_pane_cp06

0xea22,	// (0x000605c2) popup_image_focus_window_g1

0xea2a,	// (0x000605ca) popup_image_focus_window_g2

0xea32,	// (0x000605d2) popup_image_focus_window_g3

0xea3a,	// (0x000605da) popup_image_focus_window_g4

0x0003,

0xf635,	// (0x000611d5) popup_image_focus_window_g

0xea42,	// (0x000605e2) popup_image_focus_window_t1

0xea50,	// (0x000605f0) popup_image_focus_window_t2

0xea60,	// (0x00060600) popup_image_focus_window_t3

0x0002,

0xf63e,	// (0x000611de) popup_image_focus_window_t

0xbfdd,	// (0x0005db7d) camera2_autofocus_pane_g1

0xbf76,	// (0x0005db16) bg_tb_trans_pane_cp01

0xea6e,	// (0x0006060e) popup_image_details_window_g1

0xea81,	// (0x00060621) popup_image_details_window_g2

0x0002,

0xf650,	// (0x000611f0) popup_image_details_window_g

0xeaaa,	// (0x0006064a) popup_image_details_window_t1

0xeabc,	// (0x0006065c) popup_image_details_window_t2

0xead5,	// (0x00060675) popup_image_details_window_t3

0xeae9,	// (0x00060689) popup_image_details_window_t4

0xeb04,	// (0x000606a4) popup_image_details_window_t5

0x0004,

0xf657,	// (0x000611f7) popup_image_details_window_t

0xc065,	// (0x0005dc05) bg_calc_paper_pane_ParamLimits

0x3425,	// (0x00054fc5) grid_highlight_pane_cp013

0x3572,	// (0x00055112) list_calc_pane_ParamLimits

0x3584,	// (0x00055124) scroll_pane_cp024

0xc079,	// (0x0005dc19) bg_calc_display_pane_ParamLimits

0x358c,	// (0x0005512c) calc_display_pane_t1_ParamLimits

0x35a1,	// (0x00055141) calc_display_pane_t2_ParamLimits

0x35b6,	// (0x00055156) calc_display_pane_t3_ParamLimits

0xf0c7,	// (0x00060c67) calc_display_pane_t_ParamLimits

0x368f,	// (0x0005522f) cell_calc_pane_g2

0x0001,

0xf0e4,	// (0x00060c84) cell_calc_pane_g

0x3698,	// (0x00055238) cell_calc_pane_t1

0xc0ce,	// (0x0005dc6e) grid_highlight_pane_cp02_ParamLimits

0xc0e4,	// (0x0005dc84) toolbar_button_pane_cp01_ParamLimits

0xc0e4,	// (0x0005dc84) toolbar_button_pane_cp01

0xd4ed,	// (0x0005f08d) temp_image_control_pane_ParamLimits

0xd4ed,	// (0x0005f08d) temp_image_control_pane

0x5e60,	// (0x00057a00) main_mp3_pane

0xeb1e,	// (0x000606be) temp_image_control_pane_g1_ParamLimits

0xeb1e,	// (0x000606be) temp_image_control_pane_g1

0xeb2c,	// (0x000606cc) temp_image_control_pane_g2_ParamLimits

0xeb2c,	// (0x000606cc) temp_image_control_pane_g2

0xeb3e,	// (0x000606de) temp_image_control_pane_g3_ParamLimits

0xeb3e,	// (0x000606de) temp_image_control_pane_g3

0x6308,	// (0x00057ea8) temp_image_control_pane_g4_ParamLimits

0x6308,	// (0x00057ea8) temp_image_control_pane_g4

0x0003,

0xf662,	// (0x00061202) temp_image_control_pane_g_ParamLimits

0xf662,	// (0x00061202) temp_image_control_pane_g

0xeb1e,	// (0x000606be) main_mp3_pane_g1

0x6319,	// (0x00057eb9) main_mp3_pane_g2

0x0007,

0xf66b,	// (0x0006120b) main_mp3_pane_g

0xeb73,	// (0x00060713) main_mp3_pane_t1

0xbfeb,	// (0x0005db8b) main_camera_pane_g8_ParamLimits

0xbfeb,	// (0x0005db8b) main_camera_pane_g8

0x3db0,	// (0x00055950) main_video_pane_g7_ParamLimits

0x3db0,	// (0x00055950) main_video_pane_g7

0x61aa,	// (0x00057d4a) main_camera2_pane_t7_ParamLimits

0x61aa,	// (0x00057d4a) main_camera2_pane_t7

0xc33b,	// (0x0005dedb) scroll_pane_cp025_ParamLimits

0xc33b,	// (0x0005dedb) scroll_pane_cp025

0xc34f,	// (0x0005deef) scroll_pane_cp026_ParamLimits

0xc34f,	// (0x0005deef) scroll_pane_cp026

0xc35e,	// (0x0005defe) wml_content_pane_ParamLimits

0x3425,	// (0x00054fc5) main_touch_calib_pane

0x63bd,	// (0x00057f5d) main_touch_calib_pane_g1

0x63c9,	// (0x00057f69) main_touch_calib_pane_g2

0x63d5,	// (0x00057f75) main_touch_calib_pane_g3

0x63e1,	// (0x00057f81) main_touch_calib_pane_g4

0x0003,

0xf689,	// (0x00061229) main_touch_calib_pane_g

0x63ed,	// (0x00057f8d) main_touch_calib_pane_t1

0x6406,	// (0x00057fa6) main_touch_calib_pane_t2

0x0004,

0xf692,	// (0x00061232) main_touch_calib_pane_t

0xd098,	// (0x0005ec38) mup_progress_pane_cp02

0xd0cd,	// (0x0005ec6d) navi_pane_g1

0xd188,	// (0x0005ed28) navi_pane_mp_t3

0x5e60,	// (0x00057a00) main_mp3_pane_ParamLimits

0x5fd5,	// (0x00057b75) navi_pane_ParamLimits

0xeb1e,	// (0x000606be) main_mp3_pane_g1_ParamLimits

0x6319,	// (0x00057eb9) main_mp3_pane_g2_ParamLimits

0x6325,	// (0x00057ec5) main_mp3_pane_g3_ParamLimits

0x6325,	// (0x00057ec5) main_mp3_pane_g3

0x6331,	// (0x00057ed1) main_mp3_pane_g4_ParamLimits

0x6331,	// (0x00057ed1) main_mp3_pane_g4

0xbfdd,	// (0x0005db7d) main_mp3_pane_g5_ParamLimits

0xbfdd,	// (0x0005db7d) main_mp3_pane_g5

0xeb4e,	// (0x000606ee) main_mp3_pane_g6_ParamLimits

0xeb4e,	// (0x000606ee) main_mp3_pane_g6

0xeb5b,	// (0x000606fb) main_mp3_pane_g7_ParamLimits

0xeb5b,	// (0x000606fb) main_mp3_pane_g7

0xeb67,	// (0x00060707) main_mp3_pane_g8_ParamLimits

0xeb67,	// (0x00060707) main_mp3_pane_g8

0xf66b,	// (0x0006120b) main_mp3_pane_g_ParamLimits

0x633d,	// (0x00057edd) main_mp3_pane_t2

0x634d,	// (0x00057eed) main_mp3_pane_t3

0xeb81,	// (0x00060721) main_mp3_pane_t4

0xeb8f,	// (0x0006072f) main_mp3_pane_t5

0x0005,

0xf67c,	// (0x0006121c) main_mp3_pane_t

0xeb9d,	// (0x0006073d) mup_progress_pane_cp01

0x3074,	// (0x00054c14) aid_zoom_text_secondary2

0xe991,	// (0x00060531) list_cale_ev2_pane

0xe999,	// (0x00060539) scroll_pane_cp023_ParamLimits

0x6461,	// (0x00058001) field_cale_ev2_pane_ParamLimits

0x6461,	// (0x00058001) field_cale_ev2_pane

0xeba5,	// (0x00060745) field_cale_ev2_pane_g1_ParamLimits

0xeba5,	// (0x00060745) field_cale_ev2_pane_g1

0xebb1,	// (0x00060751) field_cale_ev2_pane_g2_ParamLimits

0xebb1,	// (0x00060751) field_cale_ev2_pane_g2

0xebc9,	// (0x00060769) field_cale_ev2_pane_g3_ParamLimits

0xebc9,	// (0x00060769) field_cale_ev2_pane_g3

0x0003,

0xf69d,	// (0x0006123d) field_cale_ev2_pane_g_ParamLimits

0xf69d,	// (0x0006123d) field_cale_ev2_pane_g

0x648a,	// (0x0005802a) field_cale_ev2_pane_t1_ParamLimits

0x648a,	// (0x0005802a) field_cale_ev2_pane_t1

0x64a1,	// (0x00058041) field_cale_ev2_pane_t2_ParamLimits

0x64a1,	// (0x00058041) field_cale_ev2_pane_t2

0x0001,

0xf6a6,	// (0x00061246) field_cale_ev2_pane_t_ParamLimits

0xf6a6,	// (0x00061246) field_cale_ev2_pane_t

0x5809,	// (0x000573a9) main_postcard_pane_g5_ParamLimits

0x5809,	// (0x000573a9) main_postcard_pane_g5

0x5817,	// (0x000573b7) main_postcard_pane_g6_ParamLimits

0x5817,	// (0x000573b7) main_postcard_pane_g6

0xbfcf,	// (0x0005db6f) camera2_autofocus_pane_cp_ParamLimits

0xbfcf,	// (0x0005db6f) camera2_autofocus_pane_cp

0x5e60,	// (0x00057a00) main_mup3_pane

0x64f5,	// (0x00058095) main_mup3_pane_g1_ParamLimits

0x64f5,	// (0x00058095) main_mup3_pane_g1

0x6516,	// (0x000580b6) main_mup3_pane_g2_ParamLimits

0x6516,	// (0x000580b6) main_mup3_pane_g2

0x658e,	// (0x0005812e) main_mup3_pane_g3_ParamLimits

0x658e,	// (0x0005812e) main_mup3_pane_g3

0x65d1,	// (0x00058171) main_mup3_pane_g4_ParamLimits

0x65d1,	// (0x00058171) main_mup3_pane_g4

0x6614,	// (0x000581b4) main_mup3_pane_g5_ParamLimits

0x6614,	// (0x000581b4) main_mup3_pane_g5

0x6657,	// (0x000581f7) main_mup3_pane_g6_ParamLimits

0x6657,	// (0x000581f7) main_mup3_pane_g6

0xbfeb,	// (0x0005db8b) main_mup3_pane_g7_ParamLimits

0xbfeb,	// (0x0005db8b) main_mup3_pane_g7

0x0007,

0xf6b6,	// (0x00061256) main_mup3_pane_g_ParamLimits

0xf6b6,	// (0x00061256) main_mup3_pane_g

0x66cd,	// (0x0005826d) main_mup3_pane_t1_ParamLimits

0x66cd,	// (0x0005826d) main_mup3_pane_t1

0x673c,	// (0x000582dc) main_mup3_pane_t2_ParamLimits

0x673c,	// (0x000582dc) main_mup3_pane_t2

0x6805,	// (0x000583a5) main_mup3_pane_t4_ParamLimits

0x6805,	// (0x000583a5) main_mup3_pane_t4

0x6853,	// (0x000583f3) main_mup3_pane_t5_ParamLimits

0x6853,	// (0x000583f3) main_mup3_pane_t5

0x6903,	// (0x000584a3) main_mup3_pane_t6_ParamLimits

0x6903,	// (0x000584a3) main_mup3_pane_t6

0x0005,

0xf6c7,	// (0x00061267) main_mup3_pane_t_ParamLimits

0xf6c7,	// (0x00061267) main_mup3_pane_t

0x69af,	// (0x0005854f) mup3_progress_pane_ParamLimits

0x69af,	// (0x0005854f) mup3_progress_pane

0x6a2d,	// (0x000585cd) popup_mup3_control_window_ParamLimits

0x6a2d,	// (0x000585cd) popup_mup3_control_window

0xebed,	// (0x0006078d) popup_mup3_text_window

0x6a46,	// (0x000585e6) mup3_progress_pane_t1

0x6a65,	// (0x00058605) mup3_progress_pane_t2

0xebf5,	// (0x00060795) mup3_progress_pane_t3

0x0002,

0xf6d4,	// (0x00061274) mup3_progress_pane_t

0xec12,	// (0x000607b2) mup_progress_pane_cp03

0xb8dc,	// (0x0005d47c) bg_tb_trans_pane_cp04

0x6a84,	// (0x00058624) mup3_volume_pane

0x6a8c,	// (0x0005862c) popup_mup3_control_window_g1

0x6a95,	// (0x00058635) mup3_volume_pane_g1

0x6a9e,	// (0x0005863e) mup3_volume_pane_g2

0x6aa7,	// (0x00058647) mup3_volume_pane_g3

0x0002,

0xf6db,	// (0x0006127b) mup3_volume_pane_g

0xb8dc,	// (0x0005d47c) bg_tb_trans_pane_cp03

0xec22,	// (0x000607c2) popup_mup3_text_window_g1

0xec2a,	// (0x000607ca) popup_mup3_text_window_t1

0xc0c1,	// (0x0005dc61) list_calc_item_pane_g1_ParamLimits

0xe68b,	// (0x0006022b) mup_volume_pane_cp_g1

0x641f,	// (0x00057fbf) main_touch_calib_pane_t3

0x6435,	// (0x00057fd5) main_touch_calib_pane_t4

0x644b,	// (0x00057feb) main_touch_calib_pane_t5

0x31f8,	// (0x00054d98) aid_cell_size_toolbar2

0x3200,	// (0x00054da0) aid_popup3_width_pane

0x306c,	// (0x00054c0c) aid_zoom_text_msg_primary

0x3cb2,	// (0x00055852) vorec_t7

0xc085,	// (0x0005dc25) bg_calc_paper_pane_g1_ParamLimits

0xc091,	// (0x0005dc31) bg_calc_paper_pane_g2_ParamLimits

0xc09d,	// (0x0005dc3d) bg_calc_paper_pane_g3_ParamLimits

0xc0a9,	// (0x0005dc49) bg_calc_paper_pane_g4_ParamLimits

0xc0b5,	// (0x0005dc55) bg_calc_paper_pane_g5_ParamLimits

0x35f5,	// (0x00055195) bg_calc_paper_pane_g6_ParamLimits

0x3606,	// (0x000551a6) bg_calc_paper_pane_g7_ParamLimits

0x3617,	// (0x000551b7) bg_calc_paper_pane_g8_ParamLimits

0xf0ce,	// (0x00060c6e) bg_calc_paper_pane_g_ParamLimits

0x3628,	// (0x000551c8) calc_bg_paper_pane_g9_ParamLimits

0xbfcf,	// (0x0005db6f) image_qvga_pane_ParamLimits

0xbfcf,	// (0x0005db6f) image_qvga_pane

0xbf54,	// (0x0005daf4) bg_popup_sub_pane_cp04_ParamLimits

0xd424,	// (0x0005efc4) popup_mup_playback_window_g1_ParamLimits

0xd430,	// (0x0005efd0) popup_mup_playback_window_t1_ParamLimits

0xd445,	// (0x0005efe5) popup_mup_playback_window_t2_ParamLimits

0xf42c,	// (0x00060fcc) popup_mup_playback_window_t_ParamLimits

0xbfdd,	// (0x0005db7d) main_mup2_pane_g3_ParamLimits

0xbfdd,	// (0x0005db7d) main_mup2_pane_g3

0x3f71,	// (0x00055b11) popup_toolbar_window_cp04

0xd7b6,	// (0x0005f356) popup_call2_audio_second_window_g3_ParamLimits

0xd7b6,	// (0x0005f356) popup_call2_audio_second_window_g3

0xdbce,	// (0x0005f76e) popup_call2_audio_first_window_g4_ParamLimits

0xdbce,	// (0x0005f76e) popup_call2_audio_first_window_g4

0xe1f5,	// (0x0005fd95) popup_call2_audio_in_window_g4_ParamLimits

0xe1f5,	// (0x0005fd95) popup_call2_audio_in_window_g4

0x58e8,	// (0x00057488) aid_area_sk_bg_cut_ParamLimits

0x58e8,	// (0x00057488) aid_area_sk_bg_cut

0xd45a,	// (0x0005effa) aid_area_sk_bg_cut_2_ParamLimits

0xd45a,	// (0x0005effa) aid_area_sk_bg_cut_2

0xb8dc,	// (0x0005d47c) aid_placing_details_win

0xb8dc,	// (0x0005d47c) aid_placing_details_win_2

0xbfdd,	// (0x0005db7d) camera2_autofocus_pane_g1_ParamLimits

0x33b1,	// (0x00054f51) popup_fixed_preview_cale_window_ParamLimits

0x33b1,	// (0x00054f51) popup_fixed_preview_cale_window

0xd206,	// (0x0005eda6) navi_slider_pane_g3

0xd20f,	// (0x0005edaf) navi_slider_pane_g4

0xd218,	// (0x0005edb8) navi_slider_pane_g5

0xd206,	// (0x0005eda6) navi_slider_pane_g6

0x539d,	// (0x00056f3d) navi_slider_pane_g7

0xd316,	// (0x0005eeb6) mup_scale_pane_g3

0xd31f,	// (0x0005eebf) mup_scale_pane_g4

0xd328,	// (0x0005eec8) mup_scale_pane_g5

0x559e,	// (0x0005713e) mup_scale_pane_g6

0x55a7,	// (0x00057147) mup_scale_pane_g7

0x0ee1,	// (0x00052a81) cams2_slider_pane_g3

0x0ee1,	// (0x00052a81) cams2_slider_pane_g4

0x0ee1,	// (0x00052a81) cams2_slider_pane_g5

0x0ee1,	// (0x00052a81) cams2_slider_pane_g6

0x0ee1,	// (0x00052a81) cams2_slider_pane_g7

0xc01b,	// (0x0005dbbb) camera2_autofocus_pane_cp_g1

0xe4d9,	// (0x00060079) bg_popup_preview_window_pane_cp02_ParamLimits

0xe4d9,	// (0x00060079) bg_popup_preview_window_pane_cp02

0xec38,	// (0x000607d8) list_fp_cale_pane_ParamLimits

0xec38,	// (0x000607d8) list_fp_cale_pane

0xec44,	// (0x000607e4) popup_fixed_preview_cale_window_t1_ParamLimits

0xec44,	// (0x000607e4) popup_fixed_preview_cale_window_t1

0x6ab0,	// (0x00058650) popup_fixed_preview_cale_window_t2_ParamLimits

0x6ab0,	// (0x00058650) popup_fixed_preview_cale_window_t2

0x6ac5,	// (0x00058665) popup_fixed_preview_cale_window_t3_ParamLimits

0x6ac5,	// (0x00058665) popup_fixed_preview_cale_window_t3

0x0002,

0xf6e2,	// (0x00061282) popup_fixed_preview_cale_window_t_ParamLimits

0xf6e2,	// (0x00061282) popup_fixed_preview_cale_window_t

0x6ada,	// (0x0005867a) list_single_fp_cale_pane_ParamLimits

0x6ada,	// (0x0005867a) list_single_fp_cale_pane

0xec62,	// (0x00060802) list_single_fp_cale_pane_g1_ParamLimits

0xec62,	// (0x00060802) list_single_fp_cale_pane_g1

0xec6e,	// (0x0006080e) list_single_fp_cale_pane_g2_ParamLimits

0xec6e,	// (0x0006080e) list_single_fp_cale_pane_g2

0x0002,

0xf6e9,	// (0x00061289) list_single_fp_cale_pane_g_ParamLimits

0xf6e9,	// (0x00061289) list_single_fp_cale_pane_g

0xec87,	// (0x00060827) list_single_fp_cale_pane_t1_ParamLimits

0xec87,	// (0x00060827) list_single_fp_cale_pane_t1

0xec99,	// (0x00060839) list_single_fp_cale_pane_t2_ParamLimits

0xec99,	// (0x00060839) list_single_fp_cale_pane_t2

0x0001,

0xf6f0,	// (0x00061290) list_single_fp_cale_pane_t_ParamLimits

0xf6f0,	// (0x00061290) list_single_fp_cale_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0x3425,	// (0x00054fc5) main_dialer_pane

0xb8dc,	// (0x0005d47c) aid_cell_size_keypad

0xb8dc,	// (0x0005d47c) dialer_ne_pane

0xb8dc,	// (0x0005d47c) grid_dialer_command_1_pane

0xb8dc,	// (0x0005d47c) grid_dialer_command_2_pane

0xb8dc,	// (0x0005d47c) grid_dialer_keypad_pane

0xe433,	// (0x0005ffd3) bg_popup_call_pane_cp06_ParamLimits

0xe433,	// (0x0005ffd3) bg_popup_call_pane_cp06

0xe433,	// (0x0005ffd3) dialer_ne_clear_pane_ParamLimits

0xe433,	// (0x0005ffd3) dialer_ne_clear_pane

0xc01b,	// (0x0005dbbb) dialer_ne_pane_g1

0xc039,	// (0x0005dbd9) dialer_ne_pane_t1_ParamLimits

0xc039,	// (0x0005dbd9) dialer_ne_pane_t1

0xedf8,	// (0x00060998) dialer_ne_pane_t2_ParamLimits

0xedf8,	// (0x00060998) dialer_ne_pane_t2

0x6aed,	// (0x0005868d) dialer_ne_pane_t3_ParamLimits

0x6aed,	// (0x0005868d) dialer_ne_pane_t3

0x0002,

0xf6f5,	// (0x00061295) dialer_ne_pane_t_ParamLimits

0xf6f5,	// (0x00061295) dialer_ne_pane_t

0x6aed,	// (0x0005868d) dialer_ne_pane_t3_copy1_ParamLimits

0x6aed,	// (0x0005868d) dialer_ne_pane_t3_copy1

0xeccc,	// (0x0006086c) cell_dialer_keypad_pane_ParamLimits

0xeccc,	// (0x0006086c) cell_dialer_keypad_pane

0xbf76,	// (0x0005db16) cell_dialer_command_1_pane_ParamLimits

0xbf76,	// (0x0005db16) cell_dialer_command_1_pane

0xece3,	// (0x00060883) cell_dialer_command_2_pane_ParamLimits

0xece3,	// (0x00060883) cell_dialer_command_2_pane

0xbf76,	// (0x0005db16) bg_button_pane_cp02_ParamLimits

0xbf76,	// (0x0005db16) bg_button_pane_cp02

0xbfdd,	// (0x0005db7d) cell_dialer_keypad_pane_g1_ParamLimits

0xbfdd,	// (0x0005db7d) cell_dialer_keypad_pane_g1

0xbf76,	// (0x0005db16) bg_button_pane_cp03_ParamLimits

0xbf76,	// (0x0005db16) bg_button_pane_cp03

0xbfdd,	// (0x0005db7d) cell_dialer_command_1_pane_g1_ParamLimits

0xbfdd,	// (0x0005db7d) cell_dialer_command_1_pane_g1

0xb8dc,	// (0x0005d47c) bg_button_pane_cp04

0xc01b,	// (0x0005dbbb) cell_dialer_command_2_pane_g1

0xb8dc,	// (0x0005d47c) bg_button_pane_cp06

0xc01b,	// (0x0005dbbb) dialer_ne_clear_pane_g1

0xd0d9,	// (0x0005ec79) navi_pane_g2

0xd107,	// (0x0005eca7) navi_pane_g3

0x0002,

0xf334,	// (0x00060ed4) navi_pane_g

0xd196,	// (0x0005ed36) navi_pane_mv_g2

0xd1bd,	// (0x0005ed5d) navi_pane_mv_g5

0x5368,	// (0x00056f08) navi_pane_mv_t1

0xc079,	// (0x0005dc19) main_clock2_pane

0xbfcf,	// (0x0005db6f) main_clock2_list_pane_ParamLimits

0xbfcf,	// (0x0005db6f) main_clock2_list_pane

0x6b63,	// (0x00058703) main_clock2_pane_t1_ParamLimits

0x6b63,	// (0x00058703) main_clock2_pane_t1

0x6b91,	// (0x00058731) main_clock2_pane_t2_ParamLimits

0x6b91,	// (0x00058731) main_clock2_pane_t2

0x0004,

0xf701,	// (0x000612a1) main_clock2_pane_t_ParamLimits

0xf701,	// (0x000612a1) main_clock2_pane_t

0x6bf6,	// (0x00058796) popup_clock_analogue_window_cp03_ParamLimits

0x6bf6,	// (0x00058796) popup_clock_analogue_window_cp03

0x6c14,	// (0x000587b4) popup_clock_digital_window_cp02_ParamLimits

0x6c14,	// (0x000587b4) popup_clock_digital_window_cp02

0x6c89,	// (0x00058829) main_clock2_list_single_pane_ParamLimits

0x6c89,	// (0x00058829) main_clock2_list_single_pane

0xc22b,	// (0x0005ddcb) list_highlight_pane_cp05

0xed2a,	// (0x000608ca) main_clock2_list_single_pane_t1

0x3f71,	// (0x00055b11) popup_toolbar_window_cp04_ParamLimits

0xbfeb,	// (0x0005db8b) camera2_autofocus_pane_g2_ParamLimits

0xbfeb,	// (0x0005db8b) camera2_autofocus_pane_g2

0xbfeb,	// (0x0005db8b) camera2_autofocus_pane_g3_ParamLimits

0xbfeb,	// (0x0005db8b) camera2_autofocus_pane_g3

0xbfeb,	// (0x0005db8b) camera2_autofocus_pane_g4_ParamLimits

0xbfeb,	// (0x0005db8b) camera2_autofocus_pane_g4

0xbfeb,	// (0x0005db8b) camera2_autofocus_pane_g5_ParamLimits

0xbfeb,	// (0x0005db8b) camera2_autofocus_pane_g5

0x0004,

0xf645,	// (0x000611e5) camera2_autofocus_pane_g_ParamLimits

0xf645,	// (0x000611e5) camera2_autofocus_pane_g

0x64b6,	// (0x00058056) camera2_autofocus_pane_cp_g2

0x64be,	// (0x0005805e) camera2_autofocus_pane_cp_g3

0x64c6,	// (0x00058066) camera2_autofocus_pane_cp_g4

0x64ce,	// (0x0005806e) camera2_autofocus_pane_cp_g5

0x0004,

0xf6ab,	// (0x0006124b) camera2_autofocus_pane_cp_g

0xb8dc,	// (0x0005d47c) popup_dialer_spcha_window

0xb8dc,	// (0x0005d47c) bg_popup_sub_pane_cp07

0xb8dc,	// (0x0005d47c) list_spcha_pane

0xed38,	// (0x000608d8) list_single_spcha_pane_ParamLimits

0xed38,	// (0x000608d8) list_single_spcha_pane

0xb8dc,	// (0x0005d47c) list_highlight_pane_cp06

0xcd02,	// (0x0005e8a2) list_single_spcha_pane_t1

0xdf9f,	// (0x0005fb3f) popup_call2_audio_out_window_g4_ParamLimits

0xdf9f,	// (0x0005fb3f) popup_call2_audio_out_window_g4

0x3425,	// (0x00054fc5) main_imed2_pane

0x5efe,	// (0x00057a9e) popup_imed_adjust2_window

0x5f11,	// (0x00057ab1) popup_imed_trans_window_ParamLimits

0x5f11,	// (0x00057ab1) popup_imed_trans_window

0xe760,	// (0x00060300) popup_blid_sat_info2_window_t1

0xe76e,	// (0x0006030e) popup_blid_sat_info2_window_t2

0x000a,

0xf5da,	// (0x0006117a) popup_blid_sat_info2_window_t

0x6d3e,	// (0x000588de) aid_size_cell_colour_35

0x6d58,	// (0x000588f8) aid_size_cell_colour_112

0x6d6f,	// (0x0005890f) aid_size_cell_effect

0xbf76,	// (0x0005db16) bg_tb_trans_pane_cp02

0xcebb,	// (0x0005ea5b) heading_imed_pane

0x6d89,	// (0x00058929) listscroll_imed_pane

0xed4a,	// (0x000608ea) heading_imed_pane_g1

0xed52,	// (0x000608f2) heading_imed_pane_t1

0xed60,	// (0x00060900) grid_imed_colour_35_pane_ParamLimits

0xed60,	// (0x00060900) grid_imed_colour_35_pane

0x6d95,	// (0x00058935) grid_imed_effect_pane

0xed77,	// (0x00060917) list_imed_aspect_pane

0x6da5,	// (0x00058945) scroll_pane_cp027_ParamLimits

0x6da5,	// (0x00058945) scroll_pane_cp027

0x6db1,	// (0x00058951) cell_imed_effect_pane_ParamLimits

0x6db1,	// (0x00058951) cell_imed_effect_pane

0xed7f,	// (0x0006091f) cell_imed_colour_pane_ParamLimits

0xed7f,	// (0x0006091f) cell_imed_colour_pane

0xedc1,	// (0x00060961) cell_imed_colour_pane_g1_ParamLimits

0xedc1,	// (0x00060961) cell_imed_colour_pane_g1

0xedd2,	// (0x00060972) hgihlgiht_grid_pane_cp016_ParamLimits

0xedd2,	// (0x00060972) hgihlgiht_grid_pane_cp016

0x6dc9,	// (0x00058969) cell_imed_effect_pane_g1

0x6dd1,	// (0x00058971) grid_highlight_pane_cp017

0xede3,	// (0x00060983) list_imed_single_pane_ParamLimits

0xede3,	// (0x00060983) list_imed_single_pane

0xb8dc,	// (0x0005d47c) list_highlight_pane_cp07

0xee15,	// (0x000609b5) list_imed_aspect_pane_comp1_t1

0xd3a2,	// (0x0005ef42) bg_tb_trans_pane_cp05

0xee37,	// (0x000609d7) popup_imed_adjust2_window_g1

0xee5e,	// (0x000609fe) popup_imed_adjust2_window_t1

0xee76,	// (0x00060a16) slider_imed_adjust_pane

0xee8a,	// (0x00060a2a) slider_imed_adjust_pane_g1

0xee9a,	// (0x00060a3a) slider_imed_adjust_pane_g2

0xeeaa,	// (0x00060a4a) slider_imed_adjust_pane_g3

0xeebb,	// (0x00060a5b) slider_imed_adjust_pane_g4

0x0003,

0xf71e,	// (0x000612be) slider_imed_adjust_pane_g

0x6dda,	// (0x0005897a) aid_size_cell_clipart2

0x6de6,	// (0x00058986) grid_imed_clipart_pane

0xd339,	// (0x0005eed9) scroll_pane_cp031

0x6df0,	// (0x00058990) cell_imed_clipart_pane_ParamLimits

0x6df0,	// (0x00058990) cell_imed_clipart_pane

0x6e12,	// (0x000589b2) cell_imed_clipart_pane_g1

0xb8dc,	// (0x0005d47c) grid_highlight_pane_cp014

0x6b45,	// (0x000586e5) main_clock2_pane_g1_ParamLimits

0x6b45,	// (0x000586e5) main_clock2_pane_g1

0x6c30,	// (0x000587d0) aid_call2_pane_cp10

0x6c42,	// (0x000587e2) aid_call_pane_cp10

0xd03a,	// (0x0005ebda) popup_clock_analogue_window_cp10_g1

0xd03a,	// (0x0005ebda) popup_clock_analogue_window_cp10_g2

0x6c54,	// (0x000587f4) popup_clock_analogue_window_cp10_g3

0x6c54,	// (0x000587f4) popup_clock_analogue_window_cp10_g4

0xd03a,	// (0x0005ebda) popup_clock_analogue_window_cp10_g5

0x0004,

0xf70c,	// (0x000612ac) popup_clock_analogue_window_cp10_g

0x6c6a,	// (0x0005880a) popup_clock_analogue_window_cp10_t1

0x6c9b,	// (0x0005883b) clock_digital_number_pane_cp10_ParamLimits

0x6c9b,	// (0x0005883b) clock_digital_number_pane_cp10

0x6cb5,	// (0x00058855) clock_digital_number_pane_cp11_ParamLimits

0x6cb5,	// (0x00058855) clock_digital_number_pane_cp11

0x6ccf,	// (0x0005886f) clock_digital_number_pane_cp12_ParamLimits

0x6ccf,	// (0x0005886f) clock_digital_number_pane_cp12

0x6ce9,	// (0x00058889) clock_digital_number_pane_cp13_ParamLimits

0x6ce9,	// (0x00058889) clock_digital_number_pane_cp13

0x6d03,	// (0x000588a3) clock_digital_separator_pane_cp10_ParamLimits

0x6d03,	// (0x000588a3) clock_digital_separator_pane_cp10

0x6d1d,	// (0x000588bd) popup_clock_digital_window_cp02_t1_ParamLimits

0x6d1d,	// (0x000588bd) popup_clock_digital_window_cp02_t1

0xbf4c,	// (0x0005daec) clock_digital_number_pane_cp10_g1

0xbf4c,	// (0x0005daec) clock_digital_number_pane_cp10_g2

0x0001,

0xf727,	// (0x000612c7) clock_digital_number_pane_cp10_g

0xbf4c,	// (0x0005daec) clock_digital_separator_pane_cp10_g1

0xbf4c,	// (0x0005daec) clock_digital_separator_pane_g2_cp10

0xd1c5,	// (0x0005ed65) navi_pane_vded_g4

0xd1ce,	// (0x0005ed6e) navi_pane_vded_g5

0xd1d7,	// (0x0005ed77) navi_pane_vded_t1

0x3425,	// (0x00054fc5) main_vded_pane

0x6e1b,	// (0x000589bb) main_vded_pane_g1

0x6e27,	// (0x000589c7) main_vded_pane_g2

0x6e31,	// (0x000589d1) main_vded_pane_g3

0x0002,

0xf72c,	// (0x000612cc) main_vded_pane_g

0x6e3b,	// (0x000589db) main_vded_pane_t1

0x6e49,	// (0x000589e9) main_vded_pane_t2

0x0001,

0xf733,	// (0x000612d3) main_vded_pane_t

0x6e57,	// (0x000589f7) vded_slider_pane

0x6e61,	// (0x00058a01) vded_video_pane

0xeecc,	// (0x00060a6c) vded_video_pane_g1

0x6e6b,	// (0x00058a0b) vded_video_pane_g2

0xc01b,	// (0x0005dbbb) vded_video_pane_g3

0x0002,

0xf738,	// (0x000612d8) vded_video_pane_g

0xeed6,	// (0x00060a76) vded_slider_pane_g1

0xe68b,	// (0x0006022b) vded_slider_pane_g2

0xeedf,	// (0x00060a7f) vded_slider_pane_g3

0xeee8,	// (0x00060a88) vded_slider_pane_g4

0xeef1,	// (0x00060a91) vded_slider_pane_g5

0x0004,

0xf73f,	// (0x000612df) vded_slider_pane_g

0x6a1f,	// (0x000585bf) mup3_rocker_pane_ParamLimits

0x6a1f,	// (0x000585bf) mup3_rocker_pane

0x6e74,	// (0x00058a14) mup3_control_keys_pane_g1

0x6e7c,	// (0x00058a1c) mup3_control_keys_pane_g2

0x6e84,	// (0x00058a24) mup3_control_keys_pane_g3

0x6e8c,	// (0x00058a2c) mup3_control_keys_pane_g4

0x0003,

0xf74a,	// (0x000612ea) mup3_control_keys_pane_g

0x33d9,	// (0x00054f79) popup_toolbar2_fixed_window_cp01_ParamLimits

0x33d9,	// (0x00054f79) popup_toolbar2_fixed_window_cp01

0x6a39,	// (0x000585d9) popup_toolbar2_fixed_window_cp02_ParamLimits

0x6a39,	// (0x000585d9) popup_toolbar2_fixed_window_cp02

0xd928,	// (0x0005f4c8) popup_call2_audio_second_window_t4_ParamLimits

0xd928,	// (0x0005f4c8) popup_call2_audio_second_window_t4

0xde64,	// (0x0005fa04) popup_call2_audio_first_window_t6_ParamLimits

0xde64,	// (0x0005fa04) popup_call2_audio_first_window_t6

0xe0a2,	// (0x0005fc42) popup_call2_audio_out_window_t6_ParamLimits

0xe0a2,	// (0x0005fc42) popup_call2_audio_out_window_t6

0x3425,	// (0x00054fc5) main_vitu_pane

0xbfcf,	// (0x0005db6f) aid_size_cell_itu_ParamLimits

0xbfcf,	// (0x0005db6f) aid_size_cell_itu

0xbfcf,	// (0x0005db6f) bg_popup_window_pane_cp08_ParamLimits

0xbfcf,	// (0x0005db6f) bg_popup_window_pane_cp08

0xbfcf,	// (0x0005db6f) field_vitu_entry_pane_ParamLimits

0xbfcf,	// (0x0005db6f) field_vitu_entry_pane

0xbfcf,	// (0x0005db6f) grid_vitu_function_pane_ParamLimits

0xbfcf,	// (0x0005db6f) grid_vitu_function_pane

0xbfcf,	// (0x0005db6f) grid_vitu_itu_pane_ParamLimits

0xbfcf,	// (0x0005db6f) grid_vitu_itu_pane

0xbfcf,	// (0x0005db6f) cell_vitu_itu_pane_ParamLimits

0xbfcf,	// (0x0005db6f) cell_vitu_itu_pane

0xbfcf,	// (0x0005db6f) cell_vitu_function_pane_ParamLimits

0xbfcf,	// (0x0005db6f) cell_vitu_function_pane

0xbf76,	// (0x0005db16) bg_popup_sub_pane_cp08_ParamLimits

0xbf76,	// (0x0005db16) bg_popup_sub_pane_cp08

0xc025,	// (0x0005dbc5) field_vitu_entry_pane_t1_ParamLimits

0xc025,	// (0x0005dbc5) field_vitu_entry_pane_t1

0xedf8,	// (0x00060998) field_vitu_entry_pane_t2_ParamLimits

0xedf8,	// (0x00060998) field_vitu_entry_pane_t2

0x0001,

0xf753,	// (0x000612f3) field_vitu_entry_pane_t_ParamLimits

0xf753,	// (0x000612f3) field_vitu_entry_pane_t

0xe433,	// (0x0005ffd3) bg_button_pane_cp05_ParamLimits

0xe433,	// (0x0005ffd3) bg_button_pane_cp05

0xeefa,	// (0x00060a9a) cell_vitu_itu_pane_g1

0xd3b0,	// (0x0005ef50) cell_vitu_itu_pane_t1_ParamLimits

0xd3b0,	// (0x0005ef50) cell_vitu_itu_pane_t1

0xd3b0,	// (0x0005ef50) cell_vitu_itu_pane_t2_ParamLimits

0xd3b0,	// (0x0005ef50) cell_vitu_itu_pane_t2

0x0002,

0xf758,	// (0x000612f8) cell_vitu_itu_pane_t_ParamLimits

0xf758,	// (0x000612f8) cell_vitu_itu_pane_t

0xb8dc,	// (0x0005d47c) bg_button_pane_cp07

0xc01b,	// (0x0005dbbb) cell_vitu_function_pane_g1

0x355b,	// (0x000550fb) main_calc_pane_g1

0x3234,	// (0x00054dd4) aid_visual_content_pane

0x3425,	// (0x00054fc5) main_vradio_pane

0xbfeb,	// (0x0005db8b) main_vradio_pane_g1_ParamLimits

0xbfeb,	// (0x0005db8b) main_vradio_pane_g1

0xbfeb,	// (0x0005db8b) main_vradio_pane_g2_ParamLimits

0xbfeb,	// (0x0005db8b) main_vradio_pane_g2

0x0001,

0xf4ef,	// (0x0006108f) main_vradio_pane_g_ParamLimits

0xf4ef,	// (0x0006108f) main_vradio_pane_g

0xc039,	// (0x0005dbd9) main_vradio_pane_t1_ParamLimits

0xc039,	// (0x0005dbd9) main_vradio_pane_t1

0xc039,	// (0x0005dbd9) main_vradio_pane_t2_ParamLimits

0xc039,	// (0x0005dbd9) main_vradio_pane_t2

0xc039,	// (0x0005dbd9) main_vradio_pane_t3_ParamLimits

0xc039,	// (0x0005dbd9) main_vradio_pane_t3

0x0002,

0xf75f,	// (0x000612ff) main_vradio_pane_t_ParamLimits

0xf75f,	// (0x000612ff) main_vradio_pane_t

0xbfcf,	// (0x0005db6f) vradio_rocker_control_pane_ParamLimits

0xbfcf,	// (0x0005db6f) vradio_rocker_control_pane

0xbfcf,	// (0x0005db6f) vradio_station_info_pane_ParamLimits

0xbfcf,	// (0x0005db6f) vradio_station_info_pane

0xbf76,	// (0x0005db16) vradio_frequency_info_pane_ParamLimits

0xbf76,	// (0x0005db16) vradio_frequency_info_pane

0xc01b,	// (0x0005dbbb) vradio_station_info_pane_g1

0xd3b0,	// (0x0005ef50) vradio_station_info_pane_t1_ParamLimits

0xd3b0,	// (0x0005ef50) vradio_station_info_pane_t1

0xc039,	// (0x0005dbd9) vradio_station_info_pane_t2_ParamLimits

0xc039,	// (0x0005dbd9) vradio_station_info_pane_t2

0x0001,

0xf766,	// (0x00061306) vradio_station_info_pane_t_ParamLimits

0xf766,	// (0x00061306) vradio_station_info_pane_t

0xb8dc,	// (0x0005d47c) vradio_tuning_pane

0x6e9c,	// (0x00058a3c) vradio_rocker_control_pane_g1

0xef16,	// (0x00060ab6) vradio_rocker_control_pane_g2

0x6ea4,	// (0x00058a44) vradio_rocker_control_pane_g3

0x6eac,	// (0x00058a4c) vradio_rocker_control_pane_g4

0x6eb4,	// (0x00058a54) vradio_rocker_control_pane_g5

0x0004,

0xf76b,	// (0x0006130b) vradio_rocker_control_pane_g

0xc01b,	// (0x0005dbbb) vradio_frequency_info_pane_g1

0xc025,	// (0x0005dbc5) vradio_frequency_info_pane_t1_ParamLimits

0xc025,	// (0x0005dbc5) vradio_frequency_info_pane_t1

0x6ebc,	// (0x00058a5c) vradio_tuning_pane_g1

0x6ec9,	// (0x00058a69) vradio_tuning_pane_t1

0x327d,	// (0x00054e1d) area_side_right_pane_ParamLimits

0x327d,	// (0x00054e1d) area_side_right_pane

0xe4a0,	// (0x00060040) status_small_pane_g1

0xe4a8,	// (0x00060048) status_small_pane_g2

0xe4b1,	// (0x00060051) status_small_pane_g3

0xe4ba,	// (0x0006005a) status_small_pane_g4

0x0003,

0xf53c,	// (0x000610dc) status_small_pane_g

0xe4c3,	// (0x00060063) status_small_pane_t1

0x3425,	// (0x00054fc5) main_video3_pane

0xb8dc,	// (0x0005d47c) cams_zoom_vslider_pane

0xef1e,	// (0x00060abe) image3_wide_pane_ParamLimits

0xef1e,	// (0x00060abe) image3_wide_pane

0xb8dc,	// (0x0005d47c) image3_wide_small_pane

0xef38,	// (0x00060ad8) main_video3_pane_g1_ParamLimits

0xef38,	// (0x00060ad8) main_video3_pane_g1

0xef38,	// (0x00060ad8) main_video3_pane_g2_ParamLimits

0xef38,	// (0x00060ad8) main_video3_pane_g2

0x0001,

0xf776,	// (0x00061316) main_video3_pane_g_ParamLimits

0xf776,	// (0x00061316) main_video3_pane_g

0xef56,	// (0x00060af6) main_video3_pane_t1_ParamLimits

0xef56,	// (0x00060af6) main_video3_pane_t1

0xef56,	// (0x00060af6) main_video3_pane_t2_ParamLimits

0xef56,	// (0x00060af6) main_video3_pane_t2

0xef56,	// (0x00060af6) main_video3_pane_t3_ParamLimits

0xef56,	// (0x00060af6) main_video3_pane_t3

0x0002,

0xf77b,	// (0x0006131b) main_video3_pane_t_ParamLimits

0xf77b,	// (0x0006131b) main_video3_pane_t

0xc01b,	// (0x0005dbbb) cams_zoom_vslider_pane_g1

0xc01b,	// (0x0005dbbb) cams_zoom_vslider_pane_g2

0x0001,

0xf0af,	// (0x00060c4f) cams_zoom_vslider_pane_g

0xb8dc,	// (0x0005d47c) small_slider_vertical_pane

0xc01b,	// (0x0005dbbb) small_slider_vertical_pane_g1

0xc01b,	// (0x0005dbbb) small_slider_vertical_pane_g2

0xef7d,	// (0x00060b1d) small_slider_vertical_pane_g3

0x0002,

0xf782,	// (0x00061322) small_slider_vertical_pane_g

0x3425,	// (0x00054fc5) main_hwr_training_pane

0xef86,	// (0x00060b26) hwr_training_instruct_pane_ParamLimits

0xef86,	// (0x00060b26) hwr_training_instruct_pane

0x6ed8,	// (0x00058a78) hwr_training_navi_pane_ParamLimits

0x6ed8,	// (0x00058a78) hwr_training_navi_pane

0x6ef2,	// (0x00058a92) hwr_training_write_pane_ParamLimits

0x6ef2,	// (0x00058a92) hwr_training_write_pane

0xb8dc,	// (0x0005d47c) bg_frame_shadow_pane

0xefbd,	// (0x00060b5d) hwr_training_write_pane_g1

0xefc5,	// (0x00060b65) hwr_training_write_pane_g2

0xefcd,	// (0x00060b6d) hwr_training_write_pane_g3

0xefd5,	// (0x00060b75) hwr_training_write_pane_g4

0xefdd,	// (0x00060b7d) hwr_training_write_pane_g5

0xefe5,	// (0x00060b85) hwr_training_write_pane_g6

0xefed,	// (0x00060b8d) hwr_training_write_pane_g7

0x0006,

0xf789,	// (0x00061329) hwr_training_write_pane_g

0x6f2a,	// (0x00058aca) hwr_training_navi_pane_g1_ParamLimits

0x6f2a,	// (0x00058aca) hwr_training_navi_pane_g1

0x6f3c,	// (0x00058adc) hwr_training_navi_pane_g2_ParamLimits

0x6f3c,	// (0x00058adc) hwr_training_navi_pane_g2

0x6f4e,	// (0x00058aee) hwr_training_navi_pane_g3_ParamLimits

0x6f4e,	// (0x00058aee) hwr_training_navi_pane_g3

0x6f5e,	// (0x00058afe) hwr_training_navi_pane_g4_ParamLimits

0x6f5e,	// (0x00058afe) hwr_training_navi_pane_g4

0x0004,

0xf798,	// (0x00061338) hwr_training_navi_pane_g_ParamLimits

0xf798,	// (0x00061338) hwr_training_navi_pane_g

0x6f78,	// (0x00058b18) hwr_training_navi_pane_t1

0x6f86,	// (0x00058b26) list_single_hwr_training_instruct_pane_ParamLimits

0x6f86,	// (0x00058b26) list_single_hwr_training_instruct_pane

0xeff5,	// (0x00060b95) list_single_hwr_training_instruct_pane_t1

0xe861,	// (0x00060401) bg_frame_shadow_pane_g1

0xf004,	// (0x00060ba4) bg_frame_shadow_pane_g2

0xf00c,	// (0x00060bac) bg_frame_shadow_pane_g3

0xf014,	// (0x00060bb4) bg_frame_shadow_pane_g4

0xf01c,	// (0x00060bbc) bg_frame_shadow_pane_g5

0xf024,	// (0x00060bc4) bg_frame_shadow_pane_g6

0xf02c,	// (0x00060bcc) bg_frame_shadow_pane_g7

0xc128,	// (0x0005dcc8) bg_frame_shadow_pane_g8

0x0007,

0xf7a3,	// (0x00061343) bg_frame_shadow_pane_g

0x3425,	// (0x00054fc5) main_video_tele_dialer_pane

0x6fab,	// (0x00058b4b) aid_size_cell_video_keypad_ParamLimits

0x6fab,	// (0x00058b4b) aid_size_cell_video_keypad

0x6fbb,	// (0x00058b5b) grid_video_dialer_keypad_pane_ParamLimits

0x6fbb,	// (0x00058b5b) grid_video_dialer_keypad_pane

0x6fef,	// (0x00058b8f) video_down_pane_cp_ParamLimits

0x6fef,	// (0x00058b8f) video_down_pane_cp

0x7019,	// (0x00058bb9) cell_video_dialer_keypad_pane_ParamLimits

0x7019,	// (0x00058bb9) cell_video_dialer_keypad_pane

0xf034,	// (0x00060bd4) bg_button_pane_cp08_ParamLimits

0xf034,	// (0x00060bd4) bg_button_pane_cp08

0x702e,	// (0x00058bce) cell_video_dialer_keypad_pane_g1_ParamLimits

0x702e,	// (0x00058bce) cell_video_dialer_keypad_pane_g1

0x6a13,	// (0x000585b3) mup3_rocker2_pane_ParamLimits

0x6a13,	// (0x000585b3) mup3_rocker2_pane

0xc01b,	// (0x0005dbbb) mup3_rocker2_pane_g1

0x5e6e,	// (0x00057a0e) main_dialer2_pane

0x3425,	// (0x00054fc5) main_mp4_pane

0x7083,	// (0x00058c23) main_mp4_pane_g1_ParamLimits

0x7083,	// (0x00058c23) main_mp4_pane_g1

0x70a5,	// (0x00058c45) main_mp4_pane_g2_ParamLimits

0x70a5,	// (0x00058c45) main_mp4_pane_g2

0x70c3,	// (0x00058c63) main_mp4_pane_g3_ParamLimits

0x70c3,	// (0x00058c63) main_mp4_pane_g3

0x70fc,	// (0x00058c9c) main_mp4_pane_g4_ParamLimits

0x70fc,	// (0x00058c9c) main_mp4_pane_g4

0x7124,	// (0x00058cc4) main_mp4_pane_g5_ParamLimits

0x7124,	// (0x00058cc4) main_mp4_pane_g5

0x0007,

0xf7c3,	// (0x00061363) main_mp4_pane_g_ParamLimits

0xf7c3,	// (0x00061363) main_mp4_pane_g

0x718c,	// (0x00058d2c) main_mp4_pane_t1_ParamLimits

0x718c,	// (0x00058d2c) main_mp4_pane_t1

0x71ee,	// (0x00058d8e) main_mp4_pane_t2_ParamLimits

0x71ee,	// (0x00058d8e) main_mp4_pane_t2

0x7252,	// (0x00058df2) main_mp4_pane_t3_ParamLimits

0x7252,	// (0x00058df2) main_mp4_pane_t3

0x72b0,	// (0x00058e50) main_mp4_pane_t4_ParamLimits

0x72b0,	// (0x00058e50) main_mp4_pane_t4

0x0003,

0xf7d4,	// (0x00061374) main_mp4_pane_t_ParamLimits

0xf7d4,	// (0x00061374) main_mp4_pane_t

0x730e,	// (0x00058eae) mp4_progress_pane_ParamLimits

0x730e,	// (0x00058eae) mp4_progress_pane

0x7342,	// (0x00058ee2) mp4_rocker_pane_ParamLimits

0x7342,	// (0x00058ee2) mp4_rocker_pane

0x077d,	// (0x0005231d) mp4_progress_pane_t1

0x079f,	// (0x0005233f) mp4_progress_pane_t2

0x0001,

0xf7dd,	// (0x0006137d) mp4_progress_pane_t

0x07c1,	// (0x00052361) mup_progress_pane_cp04

0x0ee1,	// (0x00052a81) mp4_rocker_pane_g1

0x340b,	// (0x00054fab) aid_cell_size_keypad2_ParamLimits

0x340b,	// (0x00054fab) aid_cell_size_keypad2

0x340b,	// (0x00054fab) dialer2_ne_pane_ParamLimits

0x340b,	// (0x00054fab) dialer2_ne_pane

0x340b,	// (0x00054fab) grid_dialer2_keypad_pane_ParamLimits

0x340b,	// (0x00054fab) grid_dialer2_keypad_pane

0xe5ca,	// (0x0006016a) bg_popup_call_pane_cp07_ParamLimits

0xe5ca,	// (0x0006016a) bg_popup_call_pane_cp07

0x7356,	// (0x00058ef6) dialer2_ne_pane_t1_ParamLimits

0x7356,	// (0x00058ef6) dialer2_ne_pane_t1

0x737d,	// (0x00058f1d) cell_dialer2_keypad_pane_ParamLimits

0x737d,	// (0x00058f1d) cell_dialer2_keypad_pane

0xe433,	// (0x0005ffd3) bg_button_pane_pane_cp04_ParamLimits

0xe433,	// (0x0005ffd3) bg_button_pane_pane_cp04

0xbfdd,	// (0x0005db7d) cell_dialer2_keypad_pane_g1_ParamLimits

0xbfdd,	// (0x0005db7d) cell_dialer2_keypad_pane_g1

0x3e33,	// (0x000559d3) aid_placing_vt_set_content_ParamLimits

0x3e33,	// (0x000559d3) aid_placing_vt_set_content

0x3e5f,	// (0x000559ff) aid_placing_vt_set_title_ParamLimits

0x3e5f,	// (0x000559ff) aid_placing_vt_set_title

0x3425,	// (0x00054fc5) main_image3_pane

0x73c6,	// (0x00058f66) area_side_right_pane_cp01_ParamLimits

0x73c6,	// (0x00058f66) area_side_right_pane_cp01

0x73f3,	// (0x00058f93) main_image3_pane_g1_ParamLimits

0x73f3,	// (0x00058f93) main_image3_pane_g1

0x7401,	// (0x00058fa1) main_image3_pane_g2_ParamLimits

0x7401,	// (0x00058fa1) main_image3_pane_g2

0x741a,	// (0x00058fba) main_image3_pane_g3_ParamLimits

0x741a,	// (0x00058fba) main_image3_pane_g3

0x7433,	// (0x00058fd3) main_image3_pane_g4_ParamLimits

0x7433,	// (0x00058fd3) main_image3_pane_g4

0x0003,

0xf7ec,	// (0x0006138c) main_image3_pane_g_ParamLimits

0xf7ec,	// (0x0006138c) main_image3_pane_g

0x744c,	// (0x00058fec) main_image3_pane_t1_ParamLimits

0x744c,	// (0x00058fec) main_image3_pane_t1

0x7471,	// (0x00059011) main_image3_pane_t2_ParamLimits

0x7471,	// (0x00059011) main_image3_pane_t2

0x7490,	// (0x00059030) main_image3_pane_t3_ParamLimits

0x7490,	// (0x00059030) main_image3_pane_t3

0x0003,

0xf7f5,	// (0x00061395) main_image3_pane_t_ParamLimits

0xf7f5,	// (0x00061395) main_image3_pane_t

0xbfcf,	// (0x0005db6f) grid_sctrl_middle_pane_cp01_ParamLimits

0xbfcf,	// (0x0005db6f) grid_sctrl_middle_pane_cp01

0x74f1,	// (0x00059091) cell_sctrl_middle_pane_cp01_ParamLimits

0x74f1,	// (0x00059091) cell_sctrl_middle_pane_cp01

0x7502,	// (0x000590a2) cell_sctrl_middle_pane_cp01_g1_ParamLimits

0x7502,	// (0x000590a2) cell_sctrl_middle_pane_cp01_g1

0x3425,	// (0x00054fc5) main_call4_pane

0x750f,	// (0x000590af) aid_size_button_call4_ParamLimits

0x750f,	// (0x000590af) aid_size_button_call4

0x7545,	// (0x000590e5) call4_windows_pane_ParamLimits

0x7545,	// (0x000590e5) call4_windows_pane

0x755a,	// (0x000590fa) grid_call4_button_pane_ParamLimits

0x755a,	// (0x000590fa) grid_call4_button_pane

0x7588,	// (0x00059128) call4_windows_conf_pane

0x759f,	// (0x0005913f) popup_call4_audio_first_window_ParamLimits

0x759f,	// (0x0005913f) popup_call4_audio_first_window

0x75ef,	// (0x0005918f) popup_call4_audio_second_window_ParamLimits

0x75ef,	// (0x0005918f) popup_call4_audio_second_window

0x7608,	// (0x000591a8) popup_call4_audio_wait_window_ParamLimits

0x7608,	// (0x000591a8) popup_call4_audio_wait_window

0x7616,	// (0x000591b6) cell_call4_button_pane_ParamLimits

0x7616,	// (0x000591b6) cell_call4_button_pane

0x7639,	// (0x000591d9) bg_button_pane_cp09_ParamLimits

0x7639,	// (0x000591d9) bg_button_pane_cp09

0x7645,	// (0x000591e5) cell_call4_button_pane_g1_ParamLimits

0x7645,	// (0x000591e5) cell_call4_button_pane_g1

0x7652,	// (0x000591f2) cell_call4_button_pane_t1_ParamLimits

0x7652,	// (0x000591f2) cell_call4_button_pane_t1

0x080a,	// (0x000523aa) popup_call4_audio_conf_window_ParamLimits

0x080a,	// (0x000523aa) popup_call4_audio_conf_window

0x6a46,	// (0x000585e6) mup3_progress_pane_t1_ParamLimits

0x6a65,	// (0x00058605) mup3_progress_pane_t2_ParamLimits

0xebf5,	// (0x00060795) mup3_progress_pane_t3_ParamLimits

0xf6d4,	// (0x00061274) mup3_progress_pane_t_ParamLimits

0xec12,	// (0x000607b2) mup_progress_pane_cp03_ParamLimits

0x6e94,	// (0x00058a34) mup3_control_keys_pane_g4_copy1

0x7342,	// (0x00058ee2) mp4_rocker2_pane_ParamLimits

0x7342,	// (0x00058ee2) mp4_rocker2_pane

0x7696,	// (0x00059236) mp4_rocker2_pane_g1

0x7696,	// (0x00059236) mp4_rocker2_pane_g2

0x7696,	// (0x00059236) mp4_rocker2_pane_g3

0x7696,	// (0x00059236) mp4_rocker2_pane_g4

0x7696,	// (0x00059236) mp4_rocker2_pane_g5

0x0004,

0xf7fe,	// (0x0006139e) mp4_rocker2_pane_g

0x3425,	// (0x00054fc5) main_camera4_pane

0x3425,	// (0x00054fc5) main_video4_pane

0x6fcb,	// (0x00058b6b) main_video_tele_dialer_pane_t1_ParamLimits

0x6fcb,	// (0x00058b6b) main_video_tele_dialer_pane_t1

0x6fdd,	// (0x00058b7d) main_video_tele_dialer_pane_t2_ParamLimits

0x6fdd,	// (0x00058b7d) main_video_tele_dialer_pane_t2

0x0001,

0xf7b4,	// (0x00061354) main_video_tele_dialer_pane_t_ParamLimits

0xf7b4,	// (0x00061354) main_video_tele_dialer_pane_t

0x76b6,	// (0x00059256) cam4_autofocus_pane_ParamLimits

0x76b6,	// (0x00059256) cam4_autofocus_pane

0x76d0,	// (0x00059270) cam4_image_uncrop_pane_ParamLimits

0x76d0,	// (0x00059270) cam4_image_uncrop_pane

0x76e7,	// (0x00059287) cam4_indicators_pane_ParamLimits

0x76e7,	// (0x00059287) cam4_indicators_pane

0x7703,	// (0x000592a3) main_camera4_pane_g1_ParamLimits

0x7703,	// (0x000592a3) main_camera4_pane_g1

0x770f,	// (0x000592af) main_camera4_pane_g2_ParamLimits

0x770f,	// (0x000592af) main_camera4_pane_g2

0x770f,	// (0x000592af) main_camera4_pane_g3_ParamLimits

0x770f,	// (0x000592af) main_camera4_pane_g3

0x771b,	// (0x000592bb) main_camera4_pane_g4_ParamLimits

0x771b,	// (0x000592bb) main_camera4_pane_g4

0x7727,	// (0x000592c7) main_camera4_pane_g5_ParamLimits

0x7727,	// (0x000592c7) main_camera4_pane_g5

0x0005,

0xf809,	// (0x000613a9) main_camera4_pane_g_ParamLimits

0xf809,	// (0x000613a9) main_camera4_pane_g

0x7741,	// (0x000592e1) main_camera4_pane_t1_ParamLimits

0x7741,	// (0x000592e1) main_camera4_pane_t1

0x1946,	// (0x000534e6) bg_tb_trans_pane_cp06

0x7791,	// (0x00059331) cam4_indicators_pane_g1

0x77a2,	// (0x00059342) cam4_indicators_pane_g2

0x0002,

0xf824,	// (0x000613c4) cam4_indicators_pane_g

0x77c0,	// (0x00059360) cam4_indicators_pane_t1

0x77ea,	// (0x0005938a) main_video4_pane_g1_ParamLimits

0x77ea,	// (0x0005938a) main_video4_pane_g1

0x77f6,	// (0x00059396) main_video4_pane_g2_ParamLimits

0x77f6,	// (0x00059396) main_video4_pane_g2

0x7802,	// (0x000593a2) main_video4_pane_g3_ParamLimits

0x7802,	// (0x000593a2) main_video4_pane_g3

0x780e,	// (0x000593ae) main_video4_pane_g4_ParamLimits

0x780e,	// (0x000593ae) main_video4_pane_g4

0x0004,

0xf82b,	// (0x000613cb) main_video4_pane_g_ParamLimits

0xf82b,	// (0x000613cb) main_video4_pane_g

0x782e,	// (0x000593ce) vid4_indicators_pane_ParamLimits

0x782e,	// (0x000593ce) vid4_indicators_pane

0x784d,	// (0x000593ed) video4_image_uncrop_cif_pane_ParamLimits

0x784d,	// (0x000593ed) video4_image_uncrop_cif_pane

0x785c,	// (0x000593fc) video4_image_uncrop_nhd_pane_ParamLimits

0x785c,	// (0x000593fc) video4_image_uncrop_nhd_pane

0x76d0,	// (0x00059270) video4_image_uncrop_vga_pane_ParamLimits

0x76d0,	// (0x00059270) video4_image_uncrop_vga_pane

0x5e60,	// (0x00057a00) bg_tb_trans_pane_cp07

0x7873,	// (0x00059413) vid4_indicators_pane_g1

0x7887,	// (0x00059427) vid4_indicators_pane_g2

0x789b,	// (0x0005943b) vid4_indicators_pane_g3

0x0004,

0xf836,	// (0x000613d6) vid4_indicators_pane_g

0x78ca,	// (0x0005946a) vid4_indicators_pane_t1

0x78e1,	// (0x00059481) cam4_autofocus_pane_g1

0x78e9,	// (0x00059489) cam4_autofocus_pane_g2

0x78f1,	// (0x00059491) cam4_autofocus_pane_g3

0x0002,

0xf841,	// (0x000613e1) cam4_autofocus_pane_g

0x78f9,	// (0x00059499) cam4_autofocus_pane_g3_copy1

0x6ffd,	// (0x00058b9d) video_down_pane_cp_t1

0x700b,	// (0x00058bab) video_down_pane_cp_t2

0x0001,

0xf7b9,	// (0x00061359) video_down_pane_cp_t

0x340b,	// (0x00054fab) popup_vitu2_window_ParamLimits

0x340b,	// (0x00054fab) popup_vitu2_window

0x7901,	// (0x000594a1) aid_size_cell2_itu2_ParamLimits

0x7901,	// (0x000594a1) aid_size_cell2_itu2

0x7923,	// (0x000594c3) aid_size_cell_itu2_ParamLimits

0x7923,	// (0x000594c3) aid_size_cell_itu2

0x7967,	// (0x00059507) bg_popup_window_pane_cp09_ParamLimits

0x7967,	// (0x00059507) bg_popup_window_pane_cp09

0x7975,	// (0x00059515) field_vitu2_entry_pane_ParamLimits

0x7975,	// (0x00059515) field_vitu2_entry_pane

0x7995,	// (0x00059535) grid_vitu2_function_pane_ParamLimits

0x7995,	// (0x00059535) grid_vitu2_function_pane

0x79d9,	// (0x00059579) grid_vitu2_itu_pane_ParamLimits

0x79d9,	// (0x00059579) grid_vitu2_itu_pane

0x7a51,	// (0x000595f1) cell_vitu2_itu_pane_ParamLimits

0x7a51,	// (0x000595f1) cell_vitu2_itu_pane

0x7a6a,	// (0x0005960a) cell_vitu2_function_pane_ParamLimits

0x7a6a,	// (0x0005960a) cell_vitu2_function_pane

0x081e,	// (0x000523be) bg_popup_call_pane_cp08_ParamLimits

0x081e,	// (0x000523be) bg_popup_call_pane_cp08

0x0835,	// (0x000523d5) field_vitu2_entry_pane_g1

0x0841,	// (0x000523e1) field_vitu2_entry_pane_g2

0x0002,

0xf848,	// (0x000613e8) field_vitu2_entry_pane_g

0x7aab,	// (0x0005964b) field_vitu2_entry_pane_t1_ParamLimits

0x7aab,	// (0x0005964b) field_vitu2_entry_pane_t1

0x02a9,	// (0x00051e49) field_vitu2_entry_pane_t2_ParamLimits

0x02a9,	// (0x00051e49) field_vitu2_entry_pane_t2

0x0001,

0xf84f,	// (0x000613ef) field_vitu2_entry_pane_t_ParamLimits

0xf84f,	// (0x000613ef) field_vitu2_entry_pane_t

0x619c,	// (0x00057d3c) bg_button_pane_cp010_ParamLimits

0x619c,	// (0x00057d3c) bg_button_pane_cp010

0x7adf,	// (0x0005967f) cell_vitu2_itu_pane_g1

0x7b05,	// (0x000596a5) cell_vitu2_itu_pane_t1_ParamLimits

0x7b05,	// (0x000596a5) cell_vitu2_itu_pane_t1

0x3118,	// (0x00054cb8) cell_vitu2_itu_pane_t2_ParamLimits

0x3118,	// (0x00054cb8) cell_vitu2_itu_pane_t2

0x0002,

0xf859,	// (0x000613f9) cell_vitu2_itu_pane_t_ParamLimits

0xf859,	// (0x000613f9) cell_vitu2_itu_pane_t

0x5e60,	// (0x00057a00) bg_button_pane_cp011

0x7b51,	// (0x000596f1) cell_vitu2_function_pane_g1

0x3425,	// (0x00054fc5) main_myfav_hc_pane

0x74d2,	// (0x00059072) popup_image3_note_pane_ParamLimits

0x74d2,	// (0x00059072) popup_image3_note_pane

0x74e0,	// (0x00059080) popup_image3_tool_bar_pane_ParamLimits

0x74e0,	// (0x00059080) popup_image3_tool_bar_pane

0x318e,	// (0x00054d2e) cell_vitu2_itu_pane_t3_ParamLimits

0x318e,	// (0x00054d2e) cell_vitu2_itu_pane_t3

0xb8dc,	// (0x0005d47c) bg_popup_trans_pane

0x0855,	// (0x000523f5) grid_image3_tool_bar_pane

0x085f,	// (0x000523ff) bg_popup_trans_pane_g1

0xc444,	// (0x0005dfe4) bg_popup_trans_pane_g2

0x0867,	// (0x00052407) bg_popup_trans_pane_g3

0x086f,	// (0x0005240f) bg_popup_trans_pane_g4

0x0877,	// (0x00052417) bg_popup_trans_pane_g5

0x087f,	// (0x0005241f) bg_popup_trans_pane_g6

0x0887,	// (0x00052427) bg_popup_trans_pane_g7

0x088f,	// (0x0005242f) bg_popup_trans_pane_g8

0xc424,	// (0x0005dfc4) bg_popup_trans_pane_g9

0x0008,

0xf860,	// (0x00061400) bg_popup_trans_pane_g

0x0897,	// (0x00052437) cell_image3_tool_bar_pane_ParamLimits

0x0897,	// (0x00052437) cell_image3_tool_bar_pane

0xc01b,	// (0x0005dbbb) cell_image3_tool_bar_pane_g1

0xb8dc,	// (0x0005d47c) bg_popup_trans_pane_cp1

0x08ab,	// (0x0005244b) popup_image3_note_pane_t1

0x08b9,	// (0x00052459) popup_image3_note_pane_t2

0x08c7,	// (0x00052467) popup_image3_note_pane_t3

0x0002,

0xf873,	// (0x00061413) popup_image3_note_pane_t

0x08d5,	// (0x00052475) popup_image3_note_pane_t3_copy1

0x7b65,	// (0x00059705) bg_myfav_hc_instruction_pane_ParamLimits

0x7b65,	// (0x00059705) bg_myfav_hc_instruction_pane

0x7b7d,	// (0x0005971d) cell_myfav_contact_pane_ParamLimits

0x7b7d,	// (0x0005971d) cell_myfav_contact_pane

0x7b97,	// (0x00059737) cell_myfav_contact_pane_cp1_ParamLimits

0x7b97,	// (0x00059737) cell_myfav_contact_pane_cp1

0x7baf,	// (0x0005974f) cell_myfav_contact_pane_cp2_ParamLimits

0x7baf,	// (0x0005974f) cell_myfav_contact_pane_cp2

0x7bc7,	// (0x00059767) cell_myfav_contact_pane_cp3_ParamLimits

0x7bc7,	// (0x00059767) cell_myfav_contact_pane_cp3

0x7bde,	// (0x0005977e) cell_myfav_contact_pane_cp4_ParamLimits

0x7bde,	// (0x0005977e) cell_myfav_contact_pane_cp4

0x7bf4,	// (0x00059794) cell_myfav_contact_pane_cp5_ParamLimits

0x7bf4,	// (0x00059794) cell_myfav_contact_pane_cp5

0x7c08,	// (0x000597a8) cell_myfav_contact_pane_cp6_ParamLimits

0x7c08,	// (0x000597a8) cell_myfav_contact_pane_cp6

0x7c1c,	// (0x000597bc) cell_myfav_contact_pane_cp7_ParamLimits

0x7c1c,	// (0x000597bc) cell_myfav_contact_pane_cp7

0x08e3,	// (0x00052483) listscroll_gen_pane_cp05

0x7c34,	// (0x000597d4) main_myfav_hc_pane_g1_ParamLimits

0x7c34,	// (0x000597d4) main_myfav_hc_pane_g1

0x7c4a,	// (0x000597ea) main_myfav_hc_pane_g2_ParamLimits

0x7c4a,	// (0x000597ea) main_myfav_hc_pane_g2

0x0002,

0xf87a,	// (0x0006141a) main_myfav_hc_pane_g_ParamLimits

0xf87a,	// (0x0006141a) main_myfav_hc_pane_g

0x7c78,	// (0x00059818) main_myfav_hc_pane_t1_ParamLimits

0x7c78,	// (0x00059818) main_myfav_hc_pane_t1

0x08ec,	// (0x0005248c) main_myfav_hc_pane_t2_ParamLimits

0x08ec,	// (0x0005248c) main_myfav_hc_pane_t2

0x08fe,	// (0x0005249e) main_myfav_hc_pane_t3_ParamLimits

0x08fe,	// (0x0005249e) main_myfav_hc_pane_t3

0x7c8f,	// (0x0005982f) main_myfav_hc_pane_t4_ParamLimits

0x7c8f,	// (0x0005982f) main_myfav_hc_pane_t4

0x0004,

0xf881,	// (0x00061421) main_myfav_hc_pane_t_ParamLimits

0xf881,	// (0x00061421) main_myfav_hc_pane_t

0xc01b,	// (0x0005dbbb) bg_myfav_hc_instruction_pane_g1

0x0910,	// (0x000524b0) cell_myfav_contact_pane_g1_ParamLimits

0x0910,	// (0x000524b0) cell_myfav_contact_pane_g1

0x0910,	// (0x000524b0) cell_myfav_contact_pane_g2_ParamLimits

0x0910,	// (0x000524b0) cell_myfav_contact_pane_g2

0x091c,	// (0x000524bc) cell_myfav_contact_pane_g3_ParamLimits

0x091c,	// (0x000524bc) cell_myfav_contact_pane_g3

0xbfeb,	// (0x0005db8b) cell_myfav_contact_pane_g4_ParamLimits

0xbfeb,	// (0x0005db8b) cell_myfav_contact_pane_g4

0x0929,	// (0x000524c9) cell_myfav_contact_pane_g5_ParamLimits

0x0929,	// (0x000524c9) cell_myfav_contact_pane_g5

0x0004,

0xf88c,	// (0x0006142c) cell_myfav_contact_pane_g_ParamLimits

0xf88c,	// (0x0006142c) cell_myfav_contact_pane_g

0x7c60,	// (0x00059800) main_myfav_hc_pane_g3_ParamLimits

0x7c60,	// (0x00059800) main_myfav_hc_pane_g3

0x307c,	// (0x00054c1c) popup_adpt_find_window

0x7cb9,	// (0x00059859) afind_page_pane_ParamLimits

0x7cb9,	// (0x00059859) afind_page_pane

0x7cc6,	// (0x00059866) aid_size_cell_afind_ParamLimits

0x7cc6,	// (0x00059866) aid_size_cell_afind

0x7ce0,	// (0x00059880) bg_popup_sub_pane_cp09_ParamLimits

0x7ce0,	// (0x00059880) bg_popup_sub_pane_cp09

0x7ced,	// (0x0005988d) find_pane_cp01_ParamLimits

0x7ced,	// (0x0005988d) find_pane_cp01

0x0935,	// (0x000524d5) grid_afind_control_pane_ParamLimits

0x0935,	// (0x000524d5) grid_afind_control_pane

0x7cfa,	// (0x0005989a) grid_afind_pane_ParamLimits

0x7cfa,	// (0x0005989a) grid_afind_pane

0x7d16,	// (0x000598b6) cell_afind_pane_ParamLimits

0x7d16,	// (0x000598b6) cell_afind_pane

0xc01b,	// (0x0005dbbb) afind_page_pane_g1

0x7d5e,	// (0x000598fe) afind_page_pane_g2

0x7d66,	// (0x00059906) afind_page_pane_g3

0x0002,

0xf897,	// (0x00061437) afind_page_pane_g

0x7d6e,	// (0x0005990e) afind_page_pane_t1

0x095b,	// (0x000524fb) cell_afind_grid_control_pane_ParamLimits

0x095b,	// (0x000524fb) cell_afind_grid_control_pane

0x096a,	// (0x0005250a) bg_button_pane_cp69_ParamLimits

0x096a,	// (0x0005250a) bg_button_pane_cp69

0x7d7c,	// (0x0005991c) cell_afind_pane_g1_ParamLimits

0x7d7c,	// (0x0005991c) cell_afind_pane_g1

0x7d89,	// (0x00059929) cell_afind_pane_t1_ParamLimits

0x7d89,	// (0x00059929) cell_afind_pane_t1

0x0976,	// (0x00052516) bg_button_pane_cp72

0x097e,	// (0x0005251e) cell_afind_grid_control_pane_g1

0x5a0f,	// (0x000575af) aid_image_placing_area_ParamLimits

0x5a0f,	// (0x000575af) aid_image_placing_area

0xbfdd,	// (0x0005db7d) field_vitu_entry_pane_g1_ParamLimits

0xbfdd,	// (0x0005db7d) field_vitu_entry_pane_g1

0xbfdd,	// (0x0005db7d) field_vitu_entry_pane_g2_ParamLimits

0xbfdd,	// (0x0005db7d) field_vitu_entry_pane_g2

0x0001,

0xf1bc,	// (0x00060d5c) field_vitu_entry_pane_g_ParamLimits

0xf1bc,	// (0x00060d5c) field_vitu_entry_pane_g

0xeefa,	// (0x00060a9a) cell_vitu_itu_pane_g1_ParamLimits

0xedf8,	// (0x00060998) cell_vitu_itu_pane_t3_ParamLimits

0xedf8,	// (0x00060998) cell_vitu_itu_pane_t3

0x077d,	// (0x0005231d) mp4_progress_pane_t1_ParamLimits

0x079f,	// (0x0005233f) mp4_progress_pane_t2_ParamLimits

0xf7dd,	// (0x0006137d) mp4_progress_pane_t_ParamLimits

0x07c1,	// (0x00052361) mup_progress_pane_cp04_ParamLimits

0x7ca3,	// (0x00059843) main_myfav_hc_pane_t5_ParamLimits

0x7ca3,	// (0x00059843) main_myfav_hc_pane_t5

0x3240,	// (0x00054de0) aid_zoom_text_primary

0x307c,	// (0x00054c1c) popup_adpt_find_window_ParamLimits

0x5e60,	// (0x00057a00) main_cam_set_pane

0x76f5,	// (0x00059295) cam4_zoom_pane_ParamLimits

0x76f5,	// (0x00059295) cam4_zoom_pane

0x7d9b,	// (0x0005993b) main_cam_set_pane_g1_ParamLimits

0x7d9b,	// (0x0005993b) main_cam_set_pane_g1

0x7da9,	// (0x00059949) main_cam_set_pane_g2_ParamLimits

0x7da9,	// (0x00059949) main_cam_set_pane_g2

0x0001,

0xf89e,	// (0x0006143e) main_cam_set_pane_g_ParamLimits

0xf89e,	// (0x0006143e) main_cam_set_pane_g

0x7db5,	// (0x00059955) main_cam_set_pane_t1_ParamLimits

0x7db5,	// (0x00059955) main_cam_set_pane_t1

0x7dd1,	// (0x00059971) main_cset_listscroll_pane_ParamLimits

0x7dd1,	// (0x00059971) main_cset_listscroll_pane

0x7e03,	// (0x000599a3) main_cset_slider_pane_ParamLimits

0x7e03,	// (0x000599a3) main_cset_slider_pane

0x098f,	// (0x0005252f) main_cset_list_pane_ParamLimits

0x098f,	// (0x0005252f) main_cset_list_pane

0x099f,	// (0x0005253f) scroll_pane_cp028

0x7e22,	// (0x000599c2) aid_area_touch_slider

0x7e3e,	// (0x000599de) cset_slider_pane

0x7e61,	// (0x00059a01) main_cset_slider_pane_g1

0x7e76,	// (0x00059a16) main_cset_slider_pane_g2

0x0011,

0xf8a3,	// (0x00061443) main_cset_slider_pane_g

0x09d8,	// (0x00052578) main_cset_slider_pane_t1

0x7f38,	// (0x00059ad8) main_cset_slider_pane_t2

0x7f52,	// (0x00059af2) main_cset_slider_pane_t3

0x7f6c,	// (0x00059b0c) main_cset_slider_pane_t4

0x7f86,	// (0x00059b26) main_cset_slider_pane_t5

0x7fa4,	// (0x00059b44) main_cset_slider_pane_t6

0x7fbb,	// (0x00059b5b) main_cset_slider_pane_t7

0x000e,

0xf8c8,	// (0x00061468) main_cset_slider_pane_t

0x80c7,	// (0x00059c67) cset_list_set_pane_ParamLimits

0x80c7,	// (0x00059c67) cset_list_set_pane

0x0a72,	// (0x00052612) aid_position_infowindow_above

0x0a7a,	// (0x0005261a) aid_position_infowindow_below

0x02c6,	// (0x00051e66) cset_list_set_pane_g1_ParamLimits

0x02c6,	// (0x00051e66) cset_list_set_pane_g1

0x02d2,	// (0x00051e72) cset_list_set_pane_g3_ParamLimits

0x02d2,	// (0x00051e72) cset_list_set_pane_g3

0x0001,

0xf8e7,	// (0x00061487) cset_list_set_pane_g_ParamLimits

0xf8e7,	// (0x00061487) cset_list_set_pane_g

0x02e1,	// (0x00051e81) cset_list_set_pane_t1_ParamLimits

0x02e1,	// (0x00051e81) cset_list_set_pane_t1

0xbf76,	// (0x0005db16) list_highlight_pane_cp021_ParamLimits

0xbf76,	// (0x0005db16) list_highlight_pane_cp021

0xd316,	// (0x0005eeb6) cset_slider_pane_g1

0xd328,	// (0x0005eec8) cset_slider_pane_g2

0xd31f,	// (0x0005eebf) cset_slider_pane_g3

0x0002,

0xf8ec,	// (0x0006148c) cset_slider_pane_g

0x80dd,	// (0x00059c7d) aid_area_touch_cam4_zoom

0x80e5,	// (0x00059c85) cam4_zoom_cont_pane

0x80ed,	// (0x00059c8d) cam4_zoom_pane_g1

0x80f5,	// (0x00059c95) cam4_zoom_pane_g2

0x80fd,	// (0x00059c9d) cam4_zoom_pane_g3

0x0002,

0xf8f3,	// (0x00061493) cam4_zoom_pane_g

0x8105,	// (0x00059ca5) cam4_zoom_cont_pane_g1

0x810e,	// (0x00059cae) cam4_zoom_cont_pane_g2

0x8117,	// (0x00059cb7) cam4_zoom_cont_pane_g3

0x0002,

0xf8fa,	// (0x0006149a) cam4_zoom_cont_pane_g

0x7529,	// (0x000590c9) call4_image_pane_ParamLimits

0x7529,	// (0x000590c9) call4_image_pane

0x7588,	// (0x00059128) call4_windows_conf_pane_ParamLimits

0x75cd,	// (0x0005916d) popup_call4_audio_in_window_ParamLimits

0x75cd,	// (0x0005916d) popup_call4_audio_in_window

0xb8dc,	// (0x0005d47c) bg_popup_call2_act_pane_cp02

0x0802,	// (0x000523a2) call4_list_conf_pane

0xc01b,	// (0x0005dbbb) call4_image_pane_g1

0xc01b,	// (0x0005dbbb) call4_image_pane_g2

0x0001,

0xf0af,	// (0x00060c4f) call4_image_pane_g

0x0a9d,	// (0x0005263d) list_single_graphic_popup_conf4_pane_ParamLimits

0x0a9d,	// (0x0005263d) list_single_graphic_popup_conf4_pane

0xb8dc,	// (0x0005d47c) list_highlight_pane_cp022

0x0ab0,	// (0x00052650) list_single_graphic_popup_conf4_pane_g1

0xcf0a,	// (0x0005eaaa) list_single_graphic_popup_conf4_pane_g2

0x0001,

0xf901,	// (0x000614a1) list_single_graphic_popup_conf4_pane_g

0x0ab8,	// (0x00052658) list_single_graphic_popup_conf4_pane_t1

0x3fc3,	// (0x00055b63) popup_vtel_slider_window_ParamLimits

0x3fc3,	// (0x00055b63) popup_vtel_slider_window

0x07d4,	// (0x00052374) dialer2_ne_pane_t2_ParamLimits

0x07d4,	// (0x00052374) dialer2_ne_pane_t2

0x0001,

0xf7e2,	// (0x00061382) dialer2_ne_pane_t_ParamLimits

0xf7e2,	// (0x00061382) dialer2_ne_pane_t

0xbf76,	// (0x0005db16) bg_popup_sub_pane_cp010_ParamLimits

0xbf76,	// (0x0005db16) bg_popup_sub_pane_cp010

0x8120,	// (0x00059cc0) popup_vtel_slider_window_g1_ParamLimits

0x8120,	// (0x00059cc0) popup_vtel_slider_window_g1

0x812c,	// (0x00059ccc) popup_vtel_slider_window_g2_ParamLimits

0x812c,	// (0x00059ccc) popup_vtel_slider_window_g2

0x0003,

0xf906,	// (0x000614a6) popup_vtel_slider_window_g_ParamLimits

0xf906,	// (0x000614a6) popup_vtel_slider_window_g

0x8174,	// (0x00059d14) vtel_slider_pane_ParamLimits

0x8174,	// (0x00059d14) vtel_slider_pane

0x8183,	// (0x00059d23) vtel_slider_pane_g1_ParamLimits

0x8183,	// (0x00059d23) vtel_slider_pane_g1

0x8190,	// (0x00059d30) vtel_slider_pane_g2_ParamLimits

0x8190,	// (0x00059d30) vtel_slider_pane_g2

0x819d,	// (0x00059d3d) vtel_slider_pane_g3_ParamLimits

0x819d,	// (0x00059d3d) vtel_slider_pane_g3

0x8183,	// (0x00059d23) vtel_slider_pane_g4_ParamLimits

0x8183,	// (0x00059d23) vtel_slider_pane_g4

0x81aa,	// (0x00059d4a) vtel_slider_pane_g5_ParamLimits

0x81aa,	// (0x00059d4a) vtel_slider_pane_g5

0x0004,

0xf90f,	// (0x000614af) vtel_slider_pane_g_ParamLimits

0xf90f,	// (0x000614af) vtel_slider_pane_g

0x5e60,	// (0x00057a00) main_gallery2_pane

0x7949,	// (0x000594e9) aid_size_row_itut2_dropdow_list_ParamLimits

0x7949,	// (0x000594e9) aid_size_row_itut2_dropdow_list

0x79b7,	// (0x00059557) grid_vitu2_function_top_pane_ParamLimits

0x79b7,	// (0x00059557) grid_vitu2_function_top_pane

0x7a11,	// (0x000595b1) popup_vitu2_dropdown_list_window_ParamLimits

0x7a11,	// (0x000595b1) popup_vitu2_dropdown_list_window

0x7a2f,	// (0x000595cf) popup_vitu2_match_list_window

0x81b7,	// (0x00059d57) cell_vitu2_function_top_pane_ParamLimits

0x81b7,	// (0x00059d57) cell_vitu2_function_top_pane

0x81d1,	// (0x00059d71) cell_vitu2_function_top_pane_cp01_ParamLimits

0x81d1,	// (0x00059d71) cell_vitu2_function_top_pane_cp01

0x81ed,	// (0x00059d8d) cell_vitu2_function_top_wide_pane_ParamLimits

0x81ed,	// (0x00059d8d) cell_vitu2_function_top_wide_pane

0x5e60,	// (0x00057a00) bg_button_pane_cp012

0x820b,	// (0x00059dab) cell_vitu2_function_top_pane_g1

0x821f,	// (0x00059dbf) bg_button_pane_cp013_ParamLimits

0x821f,	// (0x00059dbf) bg_button_pane_cp013

0x823b,	// (0x00059ddb) cell_vitu2_function_top_wide_pane_g1_ParamLimits

0x823b,	// (0x00059ddb) cell_vitu2_function_top_wide_pane_g1

0x340b,	// (0x00054fab) bg_popup_sub_pane_cp20

0x8253,	// (0x00059df3) list_vitu2_match_list_pane

0x085f,	// (0x000523ff) bg_popup_sub_pane_cp20_g1

0x0867,	// (0x00052407) bg_popup_sub_pane_cp20_g2

0xc444,	// (0x0005dfe4) bg_popup_sub_pane_cp20_g3

0x086f,	// (0x0005240f) bg_popup_sub_pane_cp20_g4

0xc424,	// (0x0005dfc4) bg_popup_sub_pane_cp20_g5

0x0ace,	// (0x0005266e) bg_popup_sub_pane_cp20_g6

0x087f,	// (0x0005241f) bg_popup_sub_pane_cp20_g7

0x0887,	// (0x00052427) bg_popup_sub_pane_cp20_g8

0x088f,	// (0x0005242f) bg_popup_sub_pane_cp20_g9

0x0008,

0xf91a,	// (0x000614ba) bg_popup_sub_pane_cp20_g

0x826b,	// (0x00059e0b) list_vitu2_match_list_item_pane_ParamLimits

0x826b,	// (0x00059e0b) list_vitu2_match_list_item_pane

0x827d,	// (0x00059e1d) list_vitu2_match_list_item_pane_t1

0x3425,	// (0x00054fc5) bg_popup_sub_pane_cp21

0xc22b,	// (0x0005ddcb) grid_vitu2_dropdown_list_pane

0x828b,	// (0x00059e2b) cell_vitu2_dropdown_list_char_pane_ParamLimits

0x828b,	// (0x00059e2b) cell_vitu2_dropdown_list_char_pane

0x82ad,	// (0x00059e4d) cell_vitu2_dropdown_list_ctrl_pane_ParamLimits

0x82ad,	// (0x00059e4d) cell_vitu2_dropdown_list_ctrl_pane

0x0ae8,	// (0x00052688) cell_vitu2_dropdown_list_char_pane_g1

0x0adf,	// (0x0005267f) cell_vitu2_dropdown_list_char_pane_g2

0x0ad6,	// (0x00052676) cell_vitu2_dropdown_list_char_pane_g3

0x0002,

0xf92d,	// (0x000614cd) cell_vitu2_dropdown_list_char_pane_g

0x82d5,	// (0x00059e75) cell_vitu2_dropdown_list_char_pane_t1

0x82e3,	// (0x00059e83) cell_vitu2_dropdown_list_ctrl_pane_g1_ParamLimits

0x82e3,	// (0x00059e83) cell_vitu2_dropdown_list_ctrl_pane_g1

0x82f0,	// (0x00059e90) cell_vitu2_dropdown_list_ctrl_pane_g2_ParamLimits

0x82f0,	// (0x00059e90) cell_vitu2_dropdown_list_ctrl_pane_g2

0x82fd,	// (0x00059e9d) cell_vitu2_dropdown_list_ctrl_pane_g3_ParamLimits

0x82fd,	// (0x00059e9d) cell_vitu2_dropdown_list_ctrl_pane_g3

0x830a,	// (0x00059eaa) cell_vitu2_dropdown_list_ctrl_pane_g4_ParamLimits

0x830a,	// (0x00059eaa) cell_vitu2_dropdown_list_ctrl_pane_g4

0x1946,	// (0x000534e6) cell_vitu2_dropdown_list_ctrl_pane_g5_ParamLimits

0x1946,	// (0x000534e6) cell_vitu2_dropdown_list_ctrl_pane_g5

0x0004,

0xf934,	// (0x000614d4) cell_vitu2_dropdown_list_ctrl_pane_g_ParamLimits

0xf934,	// (0x000614d4) cell_vitu2_dropdown_list_ctrl_pane_g

0x8326,	// (0x00059ec6) aid_size_cell_gallery2_ParamLimits

0x8326,	// (0x00059ec6) aid_size_cell_gallery2

0x8340,	// (0x00059ee0) grid_gallery2_pane_ParamLimits

0x8340,	// (0x00059ee0) grid_gallery2_pane

0x8357,	// (0x00059ef7) scroll_pane_cp029_ParamLimits

0x8357,	// (0x00059ef7) scroll_pane_cp029

0x8367,	// (0x00059f07) cell_gallery2_pane_ParamLimits

0x8367,	// (0x00059f07) cell_gallery2_pane

0x0af1,	// (0x00052691) cell_gallery2_pane_g2

0x0dc2,	// (0x00052962) cell_gallery2_pane_g3

0x0af9,	// (0x00052699) cell_gallery2_pane_g4

0x0b01,	// (0x000526a1) cell_gallery2_pane_g5

0xc22b,	// (0x0005ddcb) grid_highlight_pane_cp10

0x7a2f,	// (0x000595cf) popup_vitu2_match_list_window_ParamLimits

0x7a41,	// (0x000595e1) popup_vitu2_query_window_ParamLimits

0x7a41,	// (0x000595e1) popup_vitu2_query_window

0x3425,	// (0x00054fc5) bg_vitu2_candi_button_pane

0x0ae8,	// (0x00052688) cell_vitu2_dropdown_list_char_pane_g1_copy1

0x0adf,	// (0x0005267f) cell_vitu2_dropdown_list_char_pane_g2_copy1

0x0ad6,	// (0x00052676) cell_vitu2_dropdown_list_char_pane_g2_copy2

0x83bc,	// (0x00059f5c) bg_button_pane_cp015

0x83d1,	// (0x00059f71) bg_button_pane_cp016

0x83dd,	// (0x00059f7d) bg_button_pane_cp017

0xd3a2,	// (0x0005ef42) bg_popup_sub_pane_cp22

0x0b09,	// (0x000526a9) popup_vitu2_query_window_g1

0x841d,	// (0x00059fbd) popup_vitu2_query_window_g2

0x0002,

0xf93f,	// (0x000614df) popup_vitu2_query_window_g

0x8441,	// (0x00059fe1) popup_vitu2_query_window_t1_ParamLimits

0x8441,	// (0x00059fe1) popup_vitu2_query_window_t1

0x8474,	// (0x0005a014) popup_vitu2_query_window_t2_ParamLimits

0x8474,	// (0x0005a014) popup_vitu2_query_window_t2

0x8486,	// (0x0005a026) popup_vitu2_query_window_t3_ParamLimits

0x8486,	// (0x0005a026) popup_vitu2_query_window_t3

0x84ae,	// (0x0005a04e) popup_vitu2_query_window_t4_ParamLimits

0x84ae,	// (0x0005a04e) popup_vitu2_query_window_t4

0x84c2,	// (0x0005a062) popup_vitu2_query_window_t5_ParamLimits

0x84c2,	// (0x0005a062) popup_vitu2_query_window_t5

0x0006,

0xf946,	// (0x000614e6) popup_vitu2_query_window_t_ParamLimits

0xf946,	// (0x000614e6) popup_vitu2_query_window_t

0x0987,	// (0x00052527) main_cset_text_pane

0x7e22,	// (0x000599c2) aid_area_touch_slider_ParamLimits

0x7e3e,	// (0x000599de) cset_slider_pane_ParamLimits

0x7e61,	// (0x00059a01) main_cset_slider_pane_g1_ParamLimits

0x7e76,	// (0x00059a16) main_cset_slider_pane_g2_ParamLimits

0x09a8,	// (0x00052548) main_cset_slider_pane_g3_ParamLimits

0x09a8,	// (0x00052548) main_cset_slider_pane_g3

0x7e8b,	// (0x00059a2b) main_cset_slider_pane_g4_ParamLimits

0x7e8b,	// (0x00059a2b) main_cset_slider_pane_g4

0x7e9a,	// (0x00059a3a) main_cset_slider_pane_g5_ParamLimits

0x7e9a,	// (0x00059a3a) main_cset_slider_pane_g5

0x7ea8,	// (0x00059a48) main_cset_slider_pane_g6_ParamLimits

0x7ea8,	// (0x00059a48) main_cset_slider_pane_g6

0xf8a3,	// (0x00061443) main_cset_slider_pane_g_ParamLimits

0x09d8,	// (0x00052578) main_cset_slider_pane_t1_ParamLimits

0x7f38,	// (0x00059ad8) main_cset_slider_pane_t2_ParamLimits

0x7f52,	// (0x00059af2) main_cset_slider_pane_t3_ParamLimits

0x7f6c,	// (0x00059b0c) main_cset_slider_pane_t4_ParamLimits

0x7f86,	// (0x00059b26) main_cset_slider_pane_t5_ParamLimits

0x7fa4,	// (0x00059b44) main_cset_slider_pane_t6_ParamLimits

0x7fbb,	// (0x00059b5b) main_cset_slider_pane_t7_ParamLimits

0x7fe9,	// (0x00059b89) main_cset_slider_pane_t8_ParamLimits

0x7fe9,	// (0x00059b89) main_cset_slider_pane_t8

0x8011,	// (0x00059bb1) main_cset_slider_pane_t9_ParamLimits

0x8011,	// (0x00059bb1) main_cset_slider_pane_t9

0x8039,	// (0x00059bd9) main_cset_slider_pane_t10_ParamLimits

0x8039,	// (0x00059bd9) main_cset_slider_pane_t10

0x8061,	// (0x00059c01) main_cset_slider_pane_t11_ParamLimits

0x8061,	// (0x00059c01) main_cset_slider_pane_t11

0x808b,	// (0x00059c2b) main_cset_slider_pane_t12_ParamLimits

0x808b,	// (0x00059c2b) main_cset_slider_pane_t12

0x80a8,	// (0x00059c48) main_cset_slider_pane_t13_ParamLimits

0x80a8,	// (0x00059c48) main_cset_slider_pane_t13

0xf8c8,	// (0x00061468) main_cset_slider_pane_t_ParamLimits

0xb8dc,	// (0x0005d47c) bg_popup_sub_pane_cp011

0x0b15,	// (0x000526b5) main_cset_text_pane_g1

0x0b1d,	// (0x000526bd) main_cset_text_pane_t1

0x0b2b,	// (0x000526cb) main_cset_text_pane_t2

0x0b39,	// (0x000526d9) main_cset_text_pane_t3

0x0b47,	// (0x000526e7) main_cset_text_pane_t4

0x0b55,	// (0x000526f5) main_cset_text_pane_t5

0x0b63,	// (0x00052703) main_cset_text_pane_t6

0x0b71,	// (0x00052711) main_cset_text_pane_t7

0x0006,

0xf955,	// (0x000614f5) main_cset_text_pane_t

0x3425,	// (0x00054fc5) main_cam4_burst_pane

0x3425,	// (0x00054fc5) main_cam5_pane

0x0949,	// (0x000524e9) bg_button_pane_cp019

0x0952,	// (0x000524f2) bg_button_pane_cp020

0x09b4,	// (0x00052554) main_cset_slider_pane_g7_ParamLimits

0x09b4,	// (0x00052554) main_cset_slider_pane_g7

0x09c0,	// (0x00052560) main_cset_slider_pane_g8_ParamLimits

0x09c0,	// (0x00052560) main_cset_slider_pane_g8

0x7ebc,	// (0x00059a5c) main_cset_slider_pane_g9_ParamLimits

0x7ebc,	// (0x00059a5c) main_cset_slider_pane_g9

0x7ec8,	// (0x00059a68) main_cset_slider_pane_g10_ParamLimits

0x7ec8,	// (0x00059a68) main_cset_slider_pane_g10

0x7ed4,	// (0x00059a74) main_cset_slider_pane_g11_ParamLimits

0x7ed4,	// (0x00059a74) main_cset_slider_pane_g11

0x7ee0,	// (0x00059a80) main_cset_slider_pane_g12_ParamLimits

0x7ee0,	// (0x00059a80) main_cset_slider_pane_g12

0x7eec,	// (0x00059a8c) main_cset_slider_pane_g13_ParamLimits

0x7eec,	// (0x00059a8c) main_cset_slider_pane_g13

0x7ef8,	// (0x00059a98) main_cset_slider_pane_g14_ParamLimits

0x7ef8,	// (0x00059a98) main_cset_slider_pane_g14

0x7f04,	// (0x00059aa4) main_cset_slider_pane_g15_ParamLimits

0x7f04,	// (0x00059aa4) main_cset_slider_pane_g15

0x0a00,	// (0x000525a0) main_cset_slider_pane_t14_ParamLimits

0x0a00,	// (0x000525a0) main_cset_slider_pane_t14

0x0a39,	// (0x000525d9) main_cset_slider_pane_t15_ParamLimits

0x0a39,	// (0x000525d9) main_cset_slider_pane_t15

0x852c,	// (0x0005a0cc) aid_cam4_burst_size_cell_ParamLimits

0x852c,	// (0x0005a0cc) aid_cam4_burst_size_cell

0x8548,	// (0x0005a0e8) grid_cam4_burst_pane_ParamLimits

0x8548,	// (0x0005a0e8) grid_cam4_burst_pane

0x8578,	// (0x0005a118) linegrid_cam4_burst_pane_ParamLimits

0x8578,	// (0x0005a118) linegrid_cam4_burst_pane

0x8598,	// (0x0005a138) scroll_pane_cp30_ParamLimits

0x8598,	// (0x0005a138) scroll_pane_cp30

0x85a4,	// (0x0005a144) cell_cam4_burst_pane_ParamLimits

0x85a4,	// (0x0005a144) cell_cam4_burst_pane

0x0b7f,	// (0x0005271f) linegrid_cam4_burst_pane_g1_ParamLimits

0x0b7f,	// (0x0005271f) linegrid_cam4_burst_pane_g1

0x85e0,	// (0x0005a180) linegrid_cam4_burst_pane_g2_ParamLimits

0x85e0,	// (0x0005a180) linegrid_cam4_burst_pane_g2

0x0b8c,	// (0x0005272c) linegrid_cam4_burst_pane_g3_ParamLimits

0x0b8c,	// (0x0005272c) linegrid_cam4_burst_pane_g3

0x0002,

0xf964,	// (0x00061504) linegrid_cam4_burst_pane_g_ParamLimits

0xf964,	// (0x00061504) linegrid_cam4_burst_pane_g

0x85f1,	// (0x0005a191) linegrid_cam4_burst_pane_g3_copy1_ParamLimits

0x85f1,	// (0x0005a191) linegrid_cam4_burst_pane_g3_copy1

0x0b99,	// (0x00052739) linegrid_cam4_burst_pane_g4_ParamLimits

0x0b99,	// (0x00052739) linegrid_cam4_burst_pane_g4

0x860b,	// (0x0005a1ab) linegrid_cam4_burst_pane_g5_ParamLimits

0x860b,	// (0x0005a1ab) linegrid_cam4_burst_pane_g5

0x861c,	// (0x0005a1bc) linegrid_cam4_burst_pane_g6_ParamLimits

0x861c,	// (0x0005a1bc) linegrid_cam4_burst_pane_g6

0x0ba6,	// (0x00052746) linegrid_cam4_burst_pane_g7_ParamLimits

0x0ba6,	// (0x00052746) linegrid_cam4_burst_pane_g7

0x862d,	// (0x0005a1cd) cell_cam4_burst_pane_g1

0x0bbf,	// (0x0005275f) main_cam5_pane_t1_ParamLimits

0x0bbf,	// (0x0005275f) main_cam5_pane_t1

0x0bd1,	// (0x00052771) main_cam5_pane_t2_ParamLimits

0x0bd1,	// (0x00052771) main_cam5_pane_t2

0x0be3,	// (0x00052783) main_cam5_pane_t3_ParamLimits

0x0be3,	// (0x00052783) main_cam5_pane_t3

0x0bf5,	// (0x00052795) main_cam5_pane_t4_ParamLimits

0x0bf5,	// (0x00052795) main_cam5_pane_t4

0x0c0d,	// (0x000527ad) main_cam5_pane_t5_ParamLimits

0x0c0d,	// (0x000527ad) main_cam5_pane_t5

0x0c21,	// (0x000527c1) main_cam5_pane_t6_ParamLimits

0x0c21,	// (0x000527c1) main_cam5_pane_t6

0x0c35,	// (0x000527d5) main_cam5_pane_t7_ParamLimits

0x0c35,	// (0x000527d5) main_cam5_pane_t7

0x0c47,	// (0x000527e7) main_cam5_pane_t8_ParamLimits

0x0c47,	// (0x000527e7) main_cam5_pane_t8

0x0c63,	// (0x00052803) main_cam5_pane_t9_ParamLimits

0x0c63,	// (0x00052803) main_cam5_pane_t9

0x0c75,	// (0x00052815) main_cam5_pane_t10_ParamLimits

0x0c75,	// (0x00052815) main_cam5_pane_t10

0x0c87,	// (0x00052827) main_cam5_pane_t11_ParamLimits

0x0c87,	// (0x00052827) main_cam5_pane_t11

0x0c99,	// (0x00052839) main_cam5_pane_t12_ParamLimits

0x0c99,	// (0x00052839) main_cam5_pane_t12

0x0cae,	// (0x0005284e) main_cam5_pane_t13_ParamLimits

0x0cae,	// (0x0005284e) main_cam5_pane_t13

0x000c,

0xf970,	// (0x00061510) main_cam5_pane_t_ParamLimits

0xf970,	// (0x00061510) main_cam5_pane_t

0x33ca,	// (0x00054f6a) popup_scut_keymap_window_ParamLimits

0x33ca,	// (0x00054f6a) popup_scut_keymap_window

0x8640,	// (0x0005a1e0) aid_size_cell_brow_shortcut

0xc22b,	// (0x0005ddcb) bg_popup_window_pane_cp010

0x864c,	// (0x0005a1ec) grid_scut_pane

0x8658,	// (0x0005a1f8) cell_scut_pane_ParamLimits

0x8658,	// (0x0005a1f8) cell_scut_pane

0x866f,	// (0x0005a20f) cell_scut_pane_g1

0x0ccb,	// (0x0005286b) cell_scut_pane_t1

0x0cda,	// (0x0005287a) cell_scut_pane_t2

0x8678,	// (0x0005a218) cell_scut_pane_t3

0x0002,

0xf98b,	// (0x0006152b) cell_scut_pane_t

0x6665,	// (0x00058205) main_mup3_pane_g8_ParamLimits

0x6665,	// (0x00058205) main_mup3_pane_g8

0x7957,	// (0x000594f7) area_vitu2_query_pane_ParamLimits

0x7957,	// (0x000594f7) area_vitu2_query_pane

0x83e9,	// (0x00059f89) input_focus_pane_cp08

0x0ce9,	// (0x00052889) area_vitu2_query_pane_g1

0x8686,	// (0x0005a226) area_vitu2_query_pane_g2

0x0001,

0xf992,	// (0x00061532) area_vitu2_query_pane_g

0x8697,	// (0x0005a237) area_vitu2_query_pane_t1_ParamLimits

0x8697,	// (0x0005a237) area_vitu2_query_pane_t1

0x86ab,	// (0x0005a24b) area_vitu2_query_pane_t2_ParamLimits

0x86ab,	// (0x0005a24b) area_vitu2_query_pane_t2

0x86bf,	// (0x0005a25f) area_vitu2_query_pane_t3_ParamLimits

0x86bf,	// (0x0005a25f) area_vitu2_query_pane_t3

0x0352,	// (0x00051ef2) area_vitu2_query_pane_t4_ParamLimits

0x0352,	// (0x00051ef2) area_vitu2_query_pane_t4

0x037a,	// (0x00051f1a) area_vitu2_query_pane_t5_ParamLimits

0x037a,	// (0x00051f1a) area_vitu2_query_pane_t5

0x03a2,	// (0x00051f42) area_vitu2_query_pane_t6_ParamLimits

0x03a2,	// (0x00051f42) area_vitu2_query_pane_t6

0x0006,

0xf997,	// (0x00061537) area_vitu2_query_pane_t_ParamLimits

0xf997,	// (0x00061537) area_vitu2_query_pane_t

0x83d1,	// (0x00059f71) bg_button_pane_cp018

0x86e7,	// (0x0005a287) bg_button_pane_cp021

0x86f3,	// (0x0005a293) bg_button_pane_cp022

0x8716,	// (0x0005a2b6) input_focus_pane_cp09

0xd046,	// (0x0005ebe6) aid_size_touch_mv_arrow_left

0xd06f,	// (0x0005ec0f) aid_size_touch_mv_arrow_right

0x7f1c,	// (0x00059abc) main_cset_slider_pane_g16_ParamLimits

0x7f1c,	// (0x00059abc) main_cset_slider_pane_g16

0x7f2a,	// (0x00059aca) main_cset_slider_pane_g17_ParamLimits

0x7f2a,	// (0x00059aca) main_cset_slider_pane_g17

0x862d,	// (0x0005a1cd) cell_cam4_burst_pane_g1_ParamLimits

0xb8dc,	// (0x0005d47c) compa_mode_pane

0x8138,	// (0x00059cd8) popup_vtel_slider_window_g3_ParamLimits

0x8138,	// (0x00059cd8) popup_vtel_slider_window_g3

0x814c,	// (0x00059cec) popup_vtel_slider_window_g4_ParamLimits

0x814c,	// (0x00059cec) popup_vtel_slider_window_g4

0x8160,	// (0x00059d00) popup_vtel_slider_window_t1_ParamLimits

0x8160,	// (0x00059d00) popup_vtel_slider_window_t1

0x3425,	// (0x00054fc5) main_cl_pane

0x5efe,	// (0x00057a9e) popup_imed_adjust2_window_ParamLimits

0xd3a2,	// (0x0005ef42) bg_tb_trans_pane_cp05_ParamLimits

0xee37,	// (0x000609d7) popup_imed_adjust2_window_g1_ParamLimits

0xee46,	// (0x000609e6) popup_imed_adjust2_window_g2_ParamLimits

0xee46,	// (0x000609e6) popup_imed_adjust2_window_g2

0xee52,	// (0x000609f2) popup_imed_adjust2_window_g3_ParamLimits

0xee52,	// (0x000609f2) popup_imed_adjust2_window_g3

0x0002,

0xf717,	// (0x000612b7) popup_imed_adjust2_window_g_ParamLimits

0xf717,	// (0x000612b7) popup_imed_adjust2_window_g

0xee5e,	// (0x000609fe) popup_imed_adjust2_window_t1_ParamLimits

0xee76,	// (0x00060a16) slider_imed_adjust_pane_ParamLimits

0xee8a,	// (0x00060a2a) slider_imed_adjust_pane_g1_ParamLimits

0xee9a,	// (0x00060a3a) slider_imed_adjust_pane_g2_ParamLimits

0xeeaa,	// (0x00060a4a) slider_imed_adjust_pane_g3_ParamLimits

0xeebb,	// (0x00060a5b) slider_imed_adjust_pane_g4_ParamLimits

0xf71e,	// (0x000612be) slider_imed_adjust_pane_g_ParamLimits

0x769e,	// (0x0005923e) aid_touch_area_cam4_ParamLimits

0x769e,	// (0x0005923e) aid_touch_area_cam4

0x76ae,	// (0x0005924e) battery_pane_cp01

0x7735,	// (0x000592d5) main_camera4_pane_g6_ParamLimits

0x7735,	// (0x000592d5) main_camera4_pane_g6

0x7753,	// (0x000592f3) main_camera4_pane_t2_ParamLimits

0x7753,	// (0x000592f3) main_camera4_pane_t2

0x0001,

0xf816,	// (0x000613b6) main_camera4_pane_t_ParamLimits

0xf816,	// (0x000613b6) main_camera4_pane_t

0x77da,	// (0x0005937a) aid_touch_area_vid4_ParamLimits

0x77da,	// (0x0005937a) aid_touch_area_vid4

0x781a,	// (0x000593ba) main_video4_pane_g5_ParamLimits

0x781a,	// (0x000593ba) main_video4_pane_g5

0x783e,	// (0x000593de) vid4_progress_pane_ParamLimits

0x783e,	// (0x000593de) vid4_progress_pane

0x09cc,	// (0x0005256c) main_cset_slider_pane_g18_ParamLimits

0x09cc,	// (0x0005256c) main_cset_slider_pane_g18

0x0bb3,	// (0x00052753) cell_cam4_burst_pane_g2_ParamLimits

0x0bb3,	// (0x00052753) cell_cam4_burst_pane_g2

0x0001,

0xf96b,	// (0x0006150b) cell_cam4_burst_pane_g_ParamLimits

0xf96b,	// (0x0006150b) cell_cam4_burst_pane_g

0x8726,	// (0x0005a2c6) bg_cl_pane_ParamLimits

0x8726,	// (0x0005a2c6) bg_cl_pane

0x8732,	// (0x0005a2d2) cl_header_pane_ParamLimits

0x8732,	// (0x0005a2d2) cl_header_pane

0x873e,	// (0x0005a2de) cl_listscroll_pane_ParamLimits

0x873e,	// (0x0005a2de) cl_listscroll_pane

0x0cf5,	// (0x00052895) bg_cl_pane_g1

0x0cfd,	// (0x0005289d) bg_cl_pane_g2

0x0d05,	// (0x000528a5) bg_cl_pane_g3

0x0d0d,	// (0x000528ad) bg_cl_pane_g4

0x0d15,	// (0x000528b5) bg_cl_pane_g5

0x0d1d,	// (0x000528bd) bg_cl_pane_g6

0x0d25,	// (0x000528c5) bg_cl_pane_g7

0x0d2d,	// (0x000528cd) bg_cl_pane_g8

0x0d35,	// (0x000528d5) bg_cl_pane_g9

0x0008,

0xf9a6,	// (0x00061546) bg_cl_pane_g

0x874a,	// (0x0005a2ea) aid_height_cl_leading_ParamLimits

0x874a,	// (0x0005a2ea) aid_height_cl_leading

0x8756,	// (0x0005a2f6) aid_height_cl_text_ParamLimits

0x8756,	// (0x0005a2f6) aid_height_cl_text

0xbfcf,	// (0x0005db6f) bg_cl_header_pane_ParamLimits

0xbfcf,	// (0x0005db6f) bg_cl_header_pane

0x876e,	// (0x0005a30e) cl_header_pane_g1_ParamLimits

0x876e,	// (0x0005a30e) cl_header_pane_g1

0x877b,	// (0x0005a31b) cl_header_pane_t1_ParamLimits

0x877b,	// (0x0005a31b) cl_header_pane_t1

0x0d3d,	// (0x000528dd) cl_list_pane

0x099f,	// (0x0005253f) hc_scroll_pane_cp01

0xc424,	// (0x0005dfc4) bg_cl_header_pane_g1

0x085f,	// (0x000523ff) bg_cl_header_pane_g2

0xc444,	// (0x0005dfe4) bg_cl_header_pane_g3

0x086f,	// (0x0005240f) bg_cl_header_pane_g4

0x0867,	// (0x00052407) bg_cl_header_pane_g5

0x0ace,	// (0x0005266e) bg_cl_header_pane_g6

0x0887,	// (0x00052427) bg_cl_header_pane_g7

0x088f,	// (0x0005242f) bg_cl_header_pane_g8

0x087f,	// (0x0005241f) bg_cl_header_pane_g9

0x0008,

0xf9b9,	// (0x00061559) bg_cl_header_pane_g

0x878d,	// (0x0005a32d) hc_cl_list_double_graphic_heading_pane_ParamLimits

0x878d,	// (0x0005a32d) hc_cl_list_double_graphic_heading_pane

0x879e,	// (0x0005a33e) hc_cl_list_single_graphic_pane_ParamLimits

0x879e,	// (0x0005a33e) hc_cl_list_single_graphic_pane

0x87b7,	// (0x0005a357) hc_cl_list_single_graphic_pane_g1_ParamLimits

0x87b7,	// (0x0005a357) hc_cl_list_single_graphic_pane_g1

0x87c3,	// (0x0005a363) hc_cl_list_single_graphic_pane_g2_ParamLimits

0x87c3,	// (0x0005a363) hc_cl_list_single_graphic_pane_g2

0x0001,

0xf9cc,	// (0x0006156c) hc_cl_list_single_graphic_pane_g_ParamLimits

0xf9cc,	// (0x0006156c) hc_cl_list_single_graphic_pane_g

0x87d7,	// (0x0005a377) hc_cl_list_single_graphic_pane_t1_ParamLimits

0x87d7,	// (0x0005a377) hc_cl_list_single_graphic_pane_t1

0x87b7,	// (0x0005a357) hc_cl_list_double_graphic_heading_pane_g1_ParamLimits

0x87b7,	// (0x0005a357) hc_cl_list_double_graphic_heading_pane_g1

0x87ec,	// (0x0005a38c) hc_cl_list_double_graphic_heading_pane_g2_ParamLimits

0x87ec,	// (0x0005a38c) hc_cl_list_double_graphic_heading_pane_g2

0x8800,	// (0x0005a3a0) hc_cl_list_double_graphic_heading_pane_g3_ParamLimits

0x8800,	// (0x0005a3a0) hc_cl_list_double_graphic_heading_pane_g3

0x0002,

0xf9d1,	// (0x00061571) hc_cl_list_double_graphic_heading_pane_g_ParamLimits

0xf9d1,	// (0x00061571) hc_cl_list_double_graphic_heading_pane_g

0x8814,	// (0x0005a3b4) hc_cl_list_double_graphic_heading_pane_t1_ParamLimits

0x8814,	// (0x0005a3b4) hc_cl_list_double_graphic_heading_pane_t1

0x8829,	// (0x0005a3c9) hc_cl_list_double_graphic_heading_pane_t2_ParamLimits

0x8829,	// (0x0005a3c9) hc_cl_list_double_graphic_heading_pane_t2

0x0001,

0xf9d8,	// (0x00061578) hc_cl_list_double_graphic_heading_pane_t_ParamLimits

0xf9d8,	// (0x00061578) hc_cl_list_double_graphic_heading_pane_t

0x8846,	// (0x0005a3e6) vid4_progress_pane_g1

0x8856,	// (0x0005a3f6) vid4_progress_pane_g2

0x8866,	// (0x0005a406) vid4_progress_pane_g3

0x8878,	// (0x0005a418) vid4_progress_pane_g4

0x0004,

0xf9dd,	// (0x0006157d) vid4_progress_pane_g

0x8890,	// (0x0005a430) vid4_progress_pane_t1

0x88a6,	// (0x0005a446) vid4_progress_pane_t2

0x0002,

0xf9e8,	// (0x00061588) vid4_progress_pane_t

0x88d0,	// (0x0005a470) wait_bar_pane_cp07

0xe715,	// (0x000602b5) blid_firmament_pane_ParamLimits

0xe758,	// (0x000602f8) popup_blid_sat_info2_window_g1

0xe77c,	// (0x0006031c) popup_blid_sat_info2_window_t3

0xe78a,	// (0x0006032a) popup_blid_sat_info2_window_t4

0xe798,	// (0x00060338) popup_blid_sat_info2_window_t5

0xe7a6,	// (0x00060346) popup_blid_sat_info2_window_t6

0xe7b6,	// (0x00060356) popup_blid_sat_info2_window_t7

0xe7c4,	// (0x00060364) popup_blid_sat_info2_window_t8

0xe7d2,	// (0x00060372) popup_blid_sat_info2_window_t9

0xe7e0,	// (0x00060380) popup_blid_sat_info2_window_t10

0xe8a1,	// (0x00060441) aid_firma_cardinal_ParamLimits

0xe8b5,	// (0x00060455) blid_firmament_pane_t1_ParamLimits

0xe8cc,	// (0x0006046c) blid_firmament_pane_t2_ParamLimits

0xe8e3,	// (0x00060483) blid_firmament_pane_t3_ParamLimits

0xe8fa,	// (0x0006049a) blid_firmament_pane_t4_ParamLimits

0xf610,	// (0x000611b0) blid_firmament_pane_t_ParamLimits

0xe911,	// (0x000604b1) blid_sat_info_pane_ParamLimits

0x5e60,	// (0x00057a00) main_cam_set_pane_ParamLimits

0x6d3e,	// (0x000588de) aid_size_cell_colour_35_ParamLimits

0x6d58,	// (0x000588f8) aid_size_cell_colour_112_ParamLimits

0x6d6f,	// (0x0005890f) aid_size_cell_effect_ParamLimits

0xbf76,	// (0x0005db16) bg_tb_trans_pane_cp02_ParamLimits

0xcebb,	// (0x0005ea5b) heading_imed_pane_ParamLimits

0x6d89,	// (0x00058929) listscroll_imed_pane_ParamLimits

0xdbe0,	// (0x0005f780) popup_call2_audio_first_window_g5_ParamLimits

0xdbe0,	// (0x0005f780) popup_call2_audio_first_window_g5

0x7394,	// (0x00058f34) aid_size_touch_image3_arrow_left_ParamLimits

0x7394,	// (0x00058f34) aid_size_touch_image3_arrow_left

0x73aa,	// (0x00058f4a) aid_size_touch_image3_arrow_right_ParamLimits

0x73aa,	// (0x00058f4a) aid_size_touch_image3_arrow_right

0x88bb,	// (0x0005a45b) vid4_progress_pane_t3

0x6f0a,	// (0x00058aaa) main_hwr_training_symbol_option_pane_ParamLimits

0x6f0a,	// (0x00058aaa) main_hwr_training_symbol_option_pane

0xefa8,	// (0x00060b48) popup_hwr_training_preview_window_ParamLimits

0xefa8,	// (0x00060b48) popup_hwr_training_preview_window

0x6f6b,	// (0x00058b0b) hwr_training_navi_pane_g5_ParamLimits

0x6f6b,	// (0x00058b0b) hwr_training_navi_pane_g5

0x084d,	// (0x000523ed) popup_char_count_window

0x340b,	// (0x00054fab) bg_popup_sub_pane_cp20_ParamLimits

0x8253,	// (0x00059df3) list_vitu2_match_list_pane_ParamLimits

0x825f,	// (0x00059dff) vitu2_page_scroll_pane_ParamLimits

0x825f,	// (0x00059dff) vitu2_page_scroll_pane

0x0d4f,	// (0x000528ef) list_single_hwr_training_symbol_option_pane_ParamLimits

0x0d4f,	// (0x000528ef) list_single_hwr_training_symbol_option_pane

0x0d62,	// (0x00052902) list_single_hwr_training_symbol_option_pane_g1

0x0d6a,	// (0x0005290a) list_single_hwr_training_symbol_option_pane_t1

0x0d78,	// (0x00052918) bg_button_pane_cp023

0x0d81,	// (0x00052921) bg_button_pane_cp024

0x0de4,	// (0x00052984) vitu2_page_scroll_pane_g1

0x0dec,	// (0x0005298c) vitu2_page_scroll_pane_g2

0x0001,

0xf9ef,	// (0x0006158f) vitu2_page_scroll_pane_g

0x0df4,	// (0x00052994) vitu2_page_scroll_pane_t1

0xe68b,	// (0x0006022b) popup_char_count_window_g1

0x0e03,	// (0x000529a3) popup_char_count_window_g2

0x0e0c,	// (0x000529ac) popup_char_count_window_g3

0x0002,

0xf9f4,	// (0x00061594) popup_char_count_window_g

0x0e15,	// (0x000529b5) popup_char_count_window_t1

0x3425,	// (0x00054fc5) main_vded2_pane

0xee23,	// (0x000609c3) aid_size_cell_imed_line

0xee2d,	// (0x000609cd) grid_imed_line_width_pane

0x78ac,	// (0x0005944c) vid4_indicators_pane_g4

0x0e23,	// (0x000529c3) cell_imed_line_width_pane_ParamLimits

0x0e23,	// (0x000529c3) cell_imed_line_width_pane

0x0e37,	// (0x000529d7) cell_imed_line_width_pane_g1

0x0e40,	// (0x000529e0) cell_imed_line_width_pane_g2

0x0001,

0xf9fb,	// (0x0006159b) cell_imed_line_width_pane_g

0x88f7,	// (0x0005a497) main_vded2_pane_g1_ParamLimits

0x88f7,	// (0x0005a497) main_vded2_pane_g1

0x8904,	// (0x0005a4a4) main_vded2_pane_g2_ParamLimits

0x8904,	// (0x0005a4a4) main_vded2_pane_g2

0x0001,

0xfa00,	// (0x000615a0) main_vded2_pane_g_ParamLimits

0xfa00,	// (0x000615a0) main_vded2_pane_g

0x8912,	// (0x0005a4b2) vded2_slider_pane_ParamLimits

0x8912,	// (0x0005a4b2) vded2_slider_pane

0x891f,	// (0x0005a4bf) aid_size_touch_vded2_end

0x8929,	// (0x0005a4c9) aid_size_touch_vded2_playhead

0x0e48,	// (0x000529e8) aid_size_touch_vded2_start

0x0e50,	// (0x000529f0) vded2_slider_bg_pane

0x0e59,	// (0x000529f9) vded2_slider_pane_g1

0x0e62,	// (0x00052a02) vded2_slider_pane_g2

0x8931,	// (0x0005a4d1) vded2_slider_pane_g3

0x0002,

0xfa05,	// (0x000615a5) vded2_slider_pane_g

0x0e6a,	// (0x00052a0a) vded2_slider_bg_pane_g1

0x0e73,	// (0x00052a13) vded2_slider_bg_pane_g2

0x0e7c,	// (0x00052a1c) vded2_slider_bg_pane_g3

0x0002,

0xfa0c,	// (0x000615ac) vded2_slider_bg_pane_g

0x57ad,	// (0x0005734d) aid_postcard_touch_down_pane_ParamLimits

0x57ad,	// (0x0005734d) aid_postcard_touch_down_pane

0x57bd,	// (0x0005735d) aid_postcard_touch_up_pane_ParamLimits

0x57bd,	// (0x0005735d) aid_postcard_touch_up_pane

0x3425,	// (0x00054fc5) main_blid2_pane

0x5e89,	// (0x00057a29) popup_blid2_search_window

0xb8dc,	// (0x0005d47c) blid2_gps_pane

0xb8dc,	// (0x0005d47c) blid2_navig_pane

0xb8dc,	// (0x0005d47c) blid2_search_pane

0xb8dc,	// (0x0005d47c) blid2_tripm_pane

0x893a,	// (0x0005a4da) blid2_search_pane_g1_ParamLimits

0x893a,	// (0x0005a4da) blid2_search_pane_g1

0x894a,	// (0x0005a4ea) blid2_search_pane_t1_ParamLimits

0x894a,	// (0x0005a4ea) blid2_search_pane_t1

0x895c,	// (0x0005a4fc) aid_size_cell_blid2_gps_ParamLimits

0x895c,	// (0x0005a4fc) aid_size_cell_blid2_gps

0x896c,	// (0x0005a50c) blid2_gps_pane_g1_ParamLimits

0x896c,	// (0x0005a50c) blid2_gps_pane_g1

0x8978,	// (0x0005a518) grid_blid2_satellite_pane_ParamLimits

0x8978,	// (0x0005a518) grid_blid2_satellite_pane

0x8988,	// (0x0005a528) blid2_navig_pane_g1_ParamLimits

0x8988,	// (0x0005a528) blid2_navig_pane_g1

0x8994,	// (0x0005a534) blid2_navig_pane_t1_ParamLimits

0x8994,	// (0x0005a534) blid2_navig_pane_t1

0x89a6,	// (0x0005a546) blid2_navig_pane_t2_ParamLimits

0x89a6,	// (0x0005a546) blid2_navig_pane_t2

0x0001,

0xfa13,	// (0x000615b3) blid2_navig_pane_t_ParamLimits

0xfa13,	// (0x000615b3) blid2_navig_pane_t

0x89b8,	// (0x0005a558) blid2_navig_ring_pane_ParamLimits

0x89b8,	// (0x0005a558) blid2_navig_ring_pane

0x89c8,	// (0x0005a568) blid2_speed_pane_ParamLimits

0x89c8,	// (0x0005a568) blid2_speed_pane

0x89d4,	// (0x0005a574) blid2_tripm_pane_g1_ParamLimits

0x89d4,	// (0x0005a574) blid2_tripm_pane_g1

0x89e4,	// (0x0005a584) blid2_tripm_pane_g2_ParamLimits

0x89e4,	// (0x0005a584) blid2_tripm_pane_g2

0x89f0,	// (0x0005a590) blid2_tripm_pane_g3_ParamLimits

0x89f0,	// (0x0005a590) blid2_tripm_pane_g3

0x89fc,	// (0x0005a59c) blid2_tripm_pane_g4_ParamLimits

0x89fc,	// (0x0005a59c) blid2_tripm_pane_g4

0x8a08,	// (0x0005a5a8) blid2_tripm_pane_g5_ParamLimits

0x8a08,	// (0x0005a5a8) blid2_tripm_pane_g5

0x0005,

0xfa18,	// (0x000615b8) blid2_tripm_pane_g_ParamLimits

0xfa18,	// (0x000615b8) blid2_tripm_pane_g

0x8a24,	// (0x0005a5c4) blid2_tripm_pane_t1_ParamLimits

0x8a24,	// (0x0005a5c4) blid2_tripm_pane_t1

0x8a38,	// (0x0005a5d8) blid2_tripm_pane_t2_ParamLimits

0x8a38,	// (0x0005a5d8) blid2_tripm_pane_t2

0x8a4a,	// (0x0005a5ea) blid2_tripm_pane_t3_ParamLimits

0x8a4a,	// (0x0005a5ea) blid2_tripm_pane_t3

0x0003,

0xfa25,	// (0x000615c5) blid2_tripm_pane_t_ParamLimits

0xfa25,	// (0x000615c5) blid2_tripm_pane_t

0x8a7c,	// (0x0005a61c) cell_blid2_satellite_pane_ParamLimits

0x8a7c,	// (0x0005a61c) cell_blid2_satellite_pane

0x8a96,	// (0x0005a636) cell_blid2_satellite_pane_g1

0x0e85,	// (0x00052a25) cell_blid2_satellite_pane_t1

0xc01b,	// (0x0005dbbb) blid2_speed_pane_g1

0x0e93,	// (0x00052a33) blid2_speed_pane_t1

0x0ea1,	// (0x00052a41) blid2_speed_pane_t2

0x0001,

0xfa2e,	// (0x000615ce) blid2_speed_pane_t

0xc01b,	// (0x0005dbbb) blid2_navig_ring_pane_g1

0x8a9f,	// (0x0005a63f) blid2_navig_ring_pane_g2

0x8aa7,	// (0x0005a647) blid2_navig_ring_pane_g3

0x8aaf,	// (0x0005a64f) blid2_navig_ring_pane_g4

0x8ab7,	// (0x0005a657) blid2_navig_ring_pane_g5

0x0004,

0xfa33,	// (0x000615d3) blid2_navig_ring_pane_g

0xb8dc,	// (0x0005d47c) bg_popup_window_pane_cp011

0x0eaf,	// (0x00052a4f) popup_blid2_search_window_g1

0x0eb7,	// (0x00052a57) popup_blid2_search_window_t1

0x0ec5,	// (0x00052a65) popup_blid2_search_window_t2

0x0001,

0xfa3e,	// (0x000615de) popup_blid2_search_window_t

0xc333,	// (0x0005ded3) main_browser_pane_g1

0xc079,	// (0x0005dc19) main_browser_pane_ParamLimits

0x5e60,	// (0x00057a00) bg_button_pane_cp011_ParamLimits

0x7b51,	// (0x000596f1) cell_vitu2_function_pane_g1_ParamLimits

0xd3a2,	// (0x0005ef42) bg_popup_sub_pane_cp22_ParamLimits

0x83e9,	// (0x00059f89) input_focus_pane_cp08_ParamLimits

0x8404,	// (0x00059fa4) popup_vitu2_query_button_pane_ParamLimits

0x8404,	// (0x00059fa4) popup_vitu2_query_button_pane

0x8413,	// (0x00059fb3) popup_vitu2_query_input_button_pane

0x0b09,	// (0x000526a9) popup_vitu2_query_window_g1_ParamLimits

0x841d,	// (0x00059fbd) popup_vitu2_query_window_g2_ParamLimits

0xf93f,	// (0x000614df) popup_vitu2_query_window_g_ParamLimits

0xb8dc,	// (0x0005d47c) bg_button_pane_cp026

0x8abf,	// (0x0005a65f) popup_vitu2_query_input_button_pane_g1

0xb8dc,	// (0x0005d47c) bg_button_pane_cp025

0x0ed3,	// (0x00052a73) popup_vitu2_query_button_pane_t1

0x635d,	// (0x00057efd) main_mp3_pane_t6

0x636d,	// (0x00057f0d) popup_slider_window_cp01

0x7789,	// (0x00059329) cam4_battery_pane

0x7869,	// (0x00059409) cam4_battery_pane_cp02

0x883e,	// (0x0005a3de) cam4_battery_pane_cp01

0x883e,	// (0x0005a3de) cam4_battery_pane_cp03

0x0ee1,	// (0x00052a81) cam4_battery_pane_g1

0xc01b,	// (0x0005dbbb) cam4_battery_pane_g2

0x0001,

0xfa43,	// (0x000615e3) cam4_battery_pane_g

0xe7ee,	// (0x0006038e) popup_blid_sat_info2_window_t11

0xd046,	// (0x0005ebe6) aid_size_touch_mv_arrow_left_ParamLimits

0xd06f,	// (0x0005ec0f) aid_size_touch_mv_arrow_right_ParamLimits

0xd0cd,	// (0x0005ec6d) navi_pane_g1_ParamLimits

0xd0d9,	// (0x0005ec79) navi_pane_g2_ParamLimits

0xd107,	// (0x0005eca7) navi_pane_g3_ParamLimits

0xf334,	// (0x00060ed4) navi_pane_g_ParamLimits

0x5368,	// (0x00056f08) navi_pane_mv_t1_ParamLimits

0x6d95,	// (0x00058935) grid_imed_effect_pane_ParamLimits

0x3e83,	// (0x00055a23) aid_placing_vt_slider_lsc

0xc282,	// (0x0005de22) aid_placing_vt_slider_prt

0xbf76,	// (0x0005db16) bg_tb_trans_pane_cp01_ParamLimits

0xea6e,	// (0x0006060e) popup_image_details_window_g1_ParamLimits

0xea81,	// (0x00060621) popup_image_details_window_g2_ParamLimits

0xea96,	// (0x00060636) popup_image_details_window_g3_ParamLimits

0xea96,	// (0x00060636) popup_image_details_window_g3

0xf650,	// (0x000611f0) popup_image_details_window_g_ParamLimits

0xeaaa,	// (0x0006064a) popup_image_details_window_t1_ParamLimits

0xeabc,	// (0x0006065c) popup_image_details_window_t2_ParamLimits

0xead5,	// (0x00060675) popup_image_details_window_t3_ParamLimits

0xeae9,	// (0x00060689) popup_image_details_window_t4_ParamLimits

0xeb04,	// (0x000606a4) popup_image_details_window_t5_ParamLimits

0xf657,	// (0x000611f7) popup_image_details_window_t_ParamLimits

0x8762,	// (0x0005a302) cl_header_name_pane_ParamLimits

0x8762,	// (0x0005a302) cl_header_name_pane

0x8ac7,	// (0x0005a667) cl_header_name_pane_t1_ParamLimits

0x8ac7,	// (0x0005a667) cl_header_name_pane_t1

0x8ade,	// (0x0005a67e) cl_header_name_pane_t2_ParamLimits

0x8ade,	// (0x0005a67e) cl_header_name_pane_t2

0x8b08,	// (0x0005a6a8) cl_header_name_pane_t3_ParamLimits

0x8b08,	// (0x0005a6a8) cl_header_name_pane_t3

0x0002,

0xfa48,	// (0x000615e8) cl_header_name_pane_t_ParamLimits

0xfa48,	// (0x000615e8) cl_header_name_pane_t

0xd196,	// (0x0005ed36) navi_pane_mv_g2_ParamLimits

0x0835,	// (0x000523d5) field_vitu2_entry_pane_g1_ParamLimits

0x0841,	// (0x000523e1) field_vitu2_entry_pane_g2_ParamLimits

0xd3c4,	// (0x0005ef64) field_vitu2_entry_pane_g3_ParamLimits

0xd3c4,	// (0x0005ef64) field_vitu2_entry_pane_g3

0xf848,	// (0x000613e8) field_vitu2_entry_pane_g_ParamLimits

0x7adf,	// (0x0005967f) cell_vitu2_itu_pane_g1_ParamLimits

0x7af7,	// (0x00059697) cell_vitu2_itu_pane_g2_ParamLimits

0x7af7,	// (0x00059697) cell_vitu2_itu_pane_g2

0x0001,

0xf854,	// (0x000613f4) cell_vitu2_itu_pane_g_ParamLimits

0xf854,	// (0x000613f4) cell_vitu2_itu_pane_g

0x5e60,	// (0x00057a00) bg_vkb2_func_pane_cp05_ParamLimits

0x5e60,	// (0x00057a00) bg_vkb2_func_pane_cp05

0x5e60,	// (0x00057a00) bg_vkb2_func_pane_cp03

0x5e60,	// (0x00057a00) bg_vkb2_func_pane_cp04

0x5e60,	// (0x00057a00) bg_vkb2_func_pane_cp10_ParamLimits

0x5e60,	// (0x00057a00) bg_vkb2_func_pane_cp10

0x8704,	// (0x0005a2a4) bg_vkb2_func_pane_cp08

0x83d1,	// (0x00059f71) bg_vkb2_func_pane_cp06

0x86e7,	// (0x0005a287) bg_vkb2_func_pane_cp07

0x0d8a,	// (0x0005292a) bg_vkb2_func_pane_cp11_ParamLimits

0x0d8a,	// (0x0005292a) bg_vkb2_func_pane_cp11

0x0d9f,	// (0x0005293f) bg_vkb2_func_pane_cp12_ParamLimits

0x0d9f,	// (0x0005293f) bg_vkb2_func_pane_cp12

0xb8dc,	// (0x0005d47c) bg_vkb2_func_pane_cp09

0x085f,	// (0x000523ff) bg_vkb2_func_pane_g1

0xc444,	// (0x0005dfe4) bg_vkb2_func_pane_g2

0x0867,	// (0x00052407) bg_vkb2_func_pane_g3

0x086f,	// (0x0005240f) bg_vkb2_func_pane_g4

0x0ace,	// (0x0005266e) bg_vkb2_func_pane_g5

0x0887,	// (0x00052427) bg_vkb2_func_pane_g6

0x088f,	// (0x0005242f) bg_vkb2_func_pane_g7

0x087f,	// (0x0005241f) bg_vkb2_func_pane_g8

0xc424,	// (0x0005dfc4) bg_vkb2_func_pane_g9

0x0008,

0xfa4f,	// (0x000615ef) bg_vkb2_func_pane_g

0x8a16,	// (0x0005a5b6) blid2_tripm_pane_g6_ParamLimits

0x8a16,	// (0x0005a5b6) blid2_tripm_pane_g6

0x0775,	// (0x00052315) mp4_progress_pane_g1

0x8a70,	// (0x0005a610) blid2_tripm_values_pane_ParamLimits

0x8a70,	// (0x0005a610) blid2_tripm_values_pane

0x8b2d,	// (0x0005a6cd) blid2_tripm_values_pane_t1

0x8b3b,	// (0x0005a6db) blid2_tripm_values_pane_t2

0x8b49,	// (0x0005a6e9) blid2_tripm_values_pane_t3

0x8b57,	// (0x0005a6f7) blid2_tripm_values_pane_t4

0x8b65,	// (0x0005a705) blid2_tripm_values_pane_t5

0x8b73,	// (0x0005a713) blid2_tripm_values_pane_t6

0x8b81,	// (0x0005a721) blid2_tripm_values_pane_t7

0x8b8f,	// (0x0005a72f) blid2_tripm_values_pane_t8

0x8b9d,	// (0x0005a73d) blid2_tripm_values_pane_t9

0x0008,

0xfa62,	// (0x00061602) blid2_tripm_values_pane_t

0x3ec3,	// (0x00055a63) call_video_pane_t1_ParamLimits

0x3ee4,	// (0x00055a84) call_video_pane_t2_ParamLimits

0xf1dd,	// (0x00060d7d) call_video_pane_t_ParamLimits

0x5682,	// (0x00057222) msg_header_pane_g1_ParamLimits

0xd372,	// (0x0005ef12) msg_header_pane_g2_ParamLimits

0xd372,	// (0x0005ef12) msg_header_pane_g2

0x0001,

0xf3d2,	// (0x00060f72) msg_header_pane_g_ParamLimits

0xf3d2,	// (0x00060f72) msg_header_pane_g

0xc079,	// (0x0005dc19) main_clock2_pane_ParamLimits

0x6b0f,	// (0x000586af) grid_clock2_toolbar_pane_ParamLimits

0x6b0f,	// (0x000586af) grid_clock2_toolbar_pane

0x6b0f,	// (0x000586af) listscroll_clock2_pane_ParamLimits

0x6b0f,	// (0x000586af) listscroll_clock2_pane

0x6bbf,	// (0x0005875f) main_clock2_pane_t3_ParamLimits

0x6bbf,	// (0x0005875f) main_clock2_pane_t3

0x6bd1,	// (0x00058771) main_clock2_pane_t4_ParamLimits

0x6bd1,	// (0x00058771) main_clock2_pane_t4

0x0eeb,	// (0x00052a8b) cell_clock2_toolbar_pane

0x0ef3,	// (0x00052a93) cell_clock2_toolbar_pane_cp01

0x0ef3,	// (0x00052a93) cell_clock2_toolbar_pane_cp02

0x0efb,	// (0x00052a9b) cell_clock2_toolbar_pane_cp03

0x0f03,	// (0x00052aa3) list_clock2_pane

0xcfbc,	// (0x0005eb5c) scroll_pane_cp10

0x0f0b,	// (0x00052aab) list_single_clock2_pane_ParamLimits

0x0f0b,	// (0x00052aab) list_single_clock2_pane

0xc22b,	// (0x0005ddcb) list_highlight_pane_cp08

0x0f18,	// (0x00052ab8) list_single_clock2_pane_t1

0x0f26,	// (0x00052ac6) list_single_clock2_pane_t2

0x0001,

0xfa75,	// (0x00061615) list_single_clock2_pane_t

0xb8dc,	// (0x0005d47c) bg_button_pane_cp10

0x0f34,	// (0x00052ad4) cell_clock2_toolbar_pane_g1

0x571b,	// (0x000572bb) aid_main_viewer_pane_g1_ParamLimits

0x571b,	// (0x000572bb) aid_main_viewer_pane_g1

0x5727,	// (0x000572c7) aid_main_viewer_pane_g2_ParamLimits

0x5727,	// (0x000572c7) aid_main_viewer_pane_g2

0x5733,	// (0x000572d3) aid_main_viewer_pane_g3_ParamLimits

0x5733,	// (0x000572d3) aid_main_viewer_pane_g3

0x5744,	// (0x000572e4) aid_main_viewer_pane_g4_ParamLimits

0x5744,	// (0x000572e4) aid_main_viewer_pane_g4

0x0003,

0xf3e3,	// (0x00060f83) aid_main_viewer_pane_g_ParamLimits

0xf3e3,	// (0x00060f83) aid_main_viewer_pane_g

0x5e53,	// (0x000579f3) main_calc_pane_ParamLimits

0x5e6e,	// (0x00057a0e) main_dialer2_pane_ParamLimits

0x3425,	// (0x00054fc5) main_cam6_pane

0x3425,	// (0x00054fc5) main_vid6_pane

0x6b1b,	// (0x000586bb) listscroll_gen_pane_cp06_ParamLimits

0x6b1b,	// (0x000586bb) listscroll_gen_pane_cp06

0x6be3,	// (0x00058783) main_clock2_pane_t5_ParamLimits

0x6be3,	// (0x00058783) main_clock2_pane_t5

0x6c30,	// (0x000587d0) aid_call2_pane_cp10_ParamLimits

0x6c42,	// (0x000587e2) aid_call_pane_cp10_ParamLimits

0xd03a,	// (0x0005ebda) popup_clock_analogue_window_cp10_g1_ParamLimits

0xd03a,	// (0x0005ebda) popup_clock_analogue_window_cp10_g2_ParamLimits

0x6c54,	// (0x000587f4) popup_clock_analogue_window_cp10_g3_ParamLimits

0x6c54,	// (0x000587f4) popup_clock_analogue_window_cp10_g4_ParamLimits

0xd03a,	// (0x0005ebda) popup_clock_analogue_window_cp10_g5_ParamLimits

0xf70c,	// (0x000612ac) popup_clock_analogue_window_cp10_g_ParamLimits

0x6c6a,	// (0x0005880a) popup_clock_analogue_window_cp10_t1_ParamLimits

0x07e6,	// (0x00052386) cell_dialer2_keypad_pane_g2_ParamLimits

0x07e6,	// (0x00052386) cell_dialer2_keypad_pane_g2

0x0001,

0xf7e7,	// (0x00061387) cell_dialer2_keypad_pane_g_ParamLimits

0xf7e7,	// (0x00061387) cell_dialer2_keypad_pane_g

0xc025,	// (0x0005dbc5) cell_dialer2_keypad_pane_t1

0x7e0f,	// (0x000599af) main_cset_text2_pane_ParamLimits

0x7e0f,	// (0x000599af) main_cset_text2_pane

0x0ce9,	// (0x00052889) area_vitu2_query_pane_g1_ParamLimits

0x8686,	// (0x0005a226) area_vitu2_query_pane_g2_ParamLimits

0xf992,	// (0x00061532) area_vitu2_query_pane_g_ParamLimits

0x03ca,	// (0x00051f6a) area_vitu2_query_pane_t7_ParamLimits

0x03ca,	// (0x00051f6a) area_vitu2_query_pane_t7

0x83d1,	// (0x00059f71) bg_button_pane_cp018_ParamLimits

0x86e7,	// (0x0005a287) bg_button_pane_cp021_ParamLimits

0x86f3,	// (0x0005a293) bg_button_pane_cp022_ParamLimits

0x8704,	// (0x0005a2a4) bg_vkb2_func_pane_cp08_ParamLimits

0x83d1,	// (0x00059f71) bg_vkb2_func_pane_cp06_ParamLimits

0x86e7,	// (0x0005a287) bg_vkb2_func_pane_cp07_ParamLimits

0x8716,	// (0x0005a2b6) input_focus_pane_cp09_ParamLimits

0x8bab,	// (0x0005a74b) cam6_autofocus_pane_ParamLimits

0x8bab,	// (0x0005a74b) cam6_autofocus_pane

0x8bc7,	// (0x0005a767) cam6_image_uncrop_pane_ParamLimits

0x8bc7,	// (0x0005a767) cam6_image_uncrop_pane

0x8c00,	// (0x0005a7a0) cam6_indi_pane_ParamLimits

0x8c00,	// (0x0005a7a0) cam6_indi_pane

0x8c1a,	// (0x0005a7ba) cam6_mode_pane_ParamLimits

0x8c1a,	// (0x0005a7ba) cam6_mode_pane

0x8c2e,	// (0x0005a7ce) cam6_timer_pane_ParamLimits

0x8c2e,	// (0x0005a7ce) cam6_timer_pane

0x8c42,	// (0x0005a7e2) cam6_zoom_pane_ParamLimits

0x8c42,	// (0x0005a7e2) cam6_zoom_pane

0x8c5d,	// (0x0005a7fd) cam6_mode_pane_g1_ParamLimits

0x8c5d,	// (0x0005a7fd) cam6_mode_pane_g1

0x8c69,	// (0x0005a809) cam6_mode_pane_g2_ParamLimits

0x8c69,	// (0x0005a809) cam6_mode_pane_g2

0x8c75,	// (0x0005a815) cam6_mode_pane_g3_ParamLimits

0x8c75,	// (0x0005a815) cam6_mode_pane_g3

0x8c81,	// (0x0005a821) cam6_mode_pane_g4_ParamLimits

0x8c81,	// (0x0005a821) cam6_mode_pane_g4

0x0003,

0xfa7a,	// (0x0006161a) cam6_mode_pane_g_ParamLimits

0xfa7a,	// (0x0006161a) cam6_mode_pane_g

0xe5ca,	// (0x0006016a) bg_tb_trans_pane_cp08_ParamLimits

0xe5ca,	// (0x0006016a) bg_tb_trans_pane_cp08

0x0f3c,	// (0x00052adc) cam6_battery_pane_ParamLimits

0x0f3c,	// (0x00052adc) cam6_battery_pane

0x0f52,	// (0x00052af2) cam6_indi_pane_g1_ParamLimits

0x0f52,	// (0x00052af2) cam6_indi_pane_g1

0x0f64,	// (0x00052b04) cam6_indi_pane_g2_ParamLimits

0x0f64,	// (0x00052b04) cam6_indi_pane_g2

0x0f76,	// (0x00052b16) cam6_indi_pane_g3_ParamLimits

0x0f76,	// (0x00052b16) cam6_indi_pane_g3

0x0002,

0xfa83,	// (0x00061623) cam6_indi_pane_g_ParamLimits

0xfa83,	// (0x00061623) cam6_indi_pane_g

0x0f88,	// (0x00052b28) cam6_indi_pane_t1_ParamLimits

0x0f88,	// (0x00052b28) cam6_indi_pane_t1

0x78e9,	// (0x00059489) cam6_autofocus_pane_g1

0x78e1,	// (0x00059481) cam6_autofocus_pane_g2

0x78f9,	// (0x00059499) cam6_autofocus_pane_g3

0x78f1,	// (0x00059491) cam6_autofocus_pane_g4

0x0003,

0xfa8a,	// (0x0006162a) cam6_autofocus_pane_g

0x0fae,	// (0x00052b4e) cam6_timer_pane_g1

0x0fb6,	// (0x00052b56) cam6_timer_pane_t1

0x0fc4,	// (0x00052b64) cam6_zoom_cont_pane

0x0fcc,	// (0x00052b6c) cam6_zoom_pane_g1

0x0fd5,	// (0x00052b75) cam6_zoom_pane_g2

0x8c8d,	// (0x0005a82d) cam6_zoom_pane_g3

0x0002,

0xfa93,	// (0x00061633) cam6_zoom_pane_g

0xc01b,	// (0x0005dbbb) cam6_battery_pane_g1

0xc01b,	// (0x0005dbbb) cam6_battery_pane_g2

0x0001,

0xf0af,	// (0x00060c4f) cam6_battery_pane_g

0x0fcc,	// (0x00052b6c) cam6_zoom_cont_pane_g1

0x0fd5,	// (0x00052b75) cam6_zoom_cont_pane_g2

0x0fde,	// (0x00052b7e) cam6_zoom_cont_pane_g3

0x0002,

0xfa9a,	// (0x0006163a) cam6_zoom_cont_pane_g

0x8cab,	// (0x0005a84b) cam6_mode_pane_cp_ParamLimits

0x8cab,	// (0x0005a84b) cam6_mode_pane_cp

0x8cbf,	// (0x0005a85f) cam6_zoom_pane_cp_ParamLimits

0x8cbf,	// (0x0005a85f) cam6_zoom_pane_cp

0x8cd7,	// (0x0005a877) vid6_image_uncrop_cif_pane_ParamLimits

0x8cd7,	// (0x0005a877) vid6_image_uncrop_cif_pane

0x8d03,	// (0x0005a8a3) vid6_image_uncrop_nhd_pane_ParamLimits

0x8d03,	// (0x0005a8a3) vid6_image_uncrop_nhd_pane

0x8d20,	// (0x0005a8c0) vid6_image_uncrop_vga_pane_ParamLimits

0x8d20,	// (0x0005a8c0) vid6_image_uncrop_vga_pane

0x8d3f,	// (0x0005a8df) vid6_image_uncrop_wvga_pane_ParamLimits

0x8d3f,	// (0x0005a8df) vid6_image_uncrop_wvga_pane

0x8d5c,	// (0x0005a8fc) vid6_indi_pane_ParamLimits

0x8d5c,	// (0x0005a8fc) vid6_indi_pane

0xe5ca,	// (0x0006016a) bg_tb_trans_pane_cp09_ParamLimits

0xe5ca,	// (0x0006016a) bg_tb_trans_pane_cp09

0x0ff6,	// (0x00052b96) cam6_battery_pane_cp_ParamLimits

0x0ff6,	// (0x00052b96) cam6_battery_pane_cp

0x1002,	// (0x00052ba2) vid6_indi_pane_g1_ParamLimits

0x1002,	// (0x00052ba2) vid6_indi_pane_g1

0x1014,	// (0x00052bb4) vid6_indi_pane_g2_ParamLimits

0x1014,	// (0x00052bb4) vid6_indi_pane_g2

0x1026,	// (0x00052bc6) vid6_indi_pane_g3_ParamLimits

0x1026,	// (0x00052bc6) vid6_indi_pane_g3

0x103b,	// (0x00052bdb) vid6_indi_pane_g4_ParamLimits

0x103b,	// (0x00052bdb) vid6_indi_pane_g4

0x1050,	// (0x00052bf0) vid6_indi_pane_g5_ParamLimits

0x1050,	// (0x00052bf0) vid6_indi_pane_g5

0x0004,

0xfaa1,	// (0x00061641) vid6_indi_pane_g_ParamLimits

0xfaa1,	// (0x00061641) vid6_indi_pane_g

0x106a,	// (0x00052c0a) vid6_indi_pane_t1_ParamLimits

0x106a,	// (0x00052c0a) vid6_indi_pane_t1

0x1080,	// (0x00052c20) vid6_indi_pane_t2_ParamLimits

0x1080,	// (0x00052c20) vid6_indi_pane_t2

0x10a8,	// (0x00052c48) vid6_indi_pane_t3_ParamLimits

0x10a8,	// (0x00052c48) vid6_indi_pane_t3

0x10d0,	// (0x00052c70) vid6_indi_pane_t4_ParamLimits

0x10d0,	// (0x00052c70) vid6_indi_pane_t4

0x0003,

0xfaac,	// (0x0006164c) vid6_indi_pane_t_ParamLimits

0xfaac,	// (0x0006164c) vid6_indi_pane_t

0x10f4,	// (0x00052c94) wait_bar_pane_cp08

0x8d81,	// (0x0005a921) main_cset_text2_pane_t1_ParamLimits

0x8d81,	// (0x0005a921) main_cset_text2_pane_t1

0x8c96,	// (0x0005a836) listscroll_gen_pane_cp06_t1_ParamLimits

0x8c96,	// (0x0005a836) listscroll_gen_pane_cp06_t1

0x3425,	// (0x00054fc5) main_cam6_set_pane

0x1946,	// (0x000534e6) bg_tb_trans_pane_cp06_ParamLimits

0x7791,	// (0x00059331) cam4_indicators_pane_g1_ParamLimits

0x77a2,	// (0x00059342) cam4_indicators_pane_g2_ParamLimits

0xf824,	// (0x000613c4) cam4_indicators_pane_g_ParamLimits

0x77c0,	// (0x00059360) cam4_indicators_pane_t1_ParamLimits

0x5e60,	// (0x00057a00) bg_tb_trans_pane_cp07_ParamLimits

0x7873,	// (0x00059413) vid4_indicators_pane_g1_ParamLimits

0x7887,	// (0x00059427) vid4_indicators_pane_g2_ParamLimits

0x789b,	// (0x0005943b) vid4_indicators_pane_g3_ParamLimits

0x78ac,	// (0x0005944c) vid4_indicators_pane_g4_ParamLimits

0xf836,	// (0x000613d6) vid4_indicators_pane_g_ParamLimits

0x78ca,	// (0x0005946a) vid4_indicators_pane_t1_ParamLimits

0x8846,	// (0x0005a3e6) vid4_progress_pane_g1_ParamLimits

0x8856,	// (0x0005a3f6) vid4_progress_pane_g2_ParamLimits

0x8866,	// (0x0005a406) vid4_progress_pane_g3_ParamLimits

0x8878,	// (0x0005a418) vid4_progress_pane_g4_ParamLimits

0xf9dd,	// (0x0006157d) vid4_progress_pane_g_ParamLimits

0x8890,	// (0x0005a430) vid4_progress_pane_t1_ParamLimits

0x88a6,	// (0x0005a446) vid4_progress_pane_t2_ParamLimits

0x88bb,	// (0x0005a45b) vid4_progress_pane_t3_ParamLimits

0xf9e8,	// (0x00061588) vid4_progress_pane_t_ParamLimits

0x88d0,	// (0x0005a470) wait_bar_pane_cp07_ParamLimits

0x8db4,	// (0x0005a954) main_cam6_set_pane_g2_ParamLimits

0x8db4,	// (0x0005a954) main_cam6_set_pane_g2

0x8dc0,	// (0x0005a960) main_cset6_listscroll_pane_ParamLimits

0x8dc0,	// (0x0005a960) main_cset6_listscroll_pane

0x8deb,	// (0x0005a98b) main_cset6_slider_pane_ParamLimits

0x8deb,	// (0x0005a98b) main_cset6_slider_pane

0x8df7,	// (0x0005a997) main_cset6_text2_pane_ParamLimits

0x8df7,	// (0x0005a997) main_cset6_text2_pane

0x1103,	// (0x00052ca3) main_cset6_text_pane

0x110b,	// (0x00052cab) main_cset_list_pane_copy1_ParamLimits

0x110b,	// (0x00052cab) main_cset_list_pane_copy1

0x111b,	// (0x00052cbb) scroll_pane_cp028_copy1

0x8e0a,	// (0x0005a9aa) cset_list_set_pane_copy1

0x8e1d,	// (0x0005a9bd) aid_position_infowindow_above_copy1

0x8e25,	// (0x0005a9c5) aid_position_infowindow_below_copy1

0x8e2d,	// (0x0005a9cd) cset_list_set_pane_g1_copy1

0x02d2,	// (0x00051e72) cset_list_set_pane_g3_copy1_ParamLimits

0x02d2,	// (0x00051e72) cset_list_set_pane_g3_copy1

0x02e1,	// (0x00051e81) cset_list_set_pane_t1_copy1_ParamLimits

0x02e1,	// (0x00051e81) cset_list_set_pane_t1_copy1

0xbf76,	// (0x0005db16) list_highlight_pane_cp021_copy1_ParamLimits

0xbf76,	// (0x0005db16) list_highlight_pane_cp021_copy1

0x1124,	// (0x00052cc4) cset6_slider_pane_ParamLimits

0x1124,	// (0x00052cc4) cset6_slider_pane

0x1150,	// (0x00052cf0) main_cset6_slider_pane_g1_ParamLimits

0x1150,	// (0x00052cf0) main_cset6_slider_pane_g1

0x8e35,	// (0x0005a9d5) main_cset6_slider_pane_g2_ParamLimits

0x8e35,	// (0x0005a9d5) main_cset6_slider_pane_g2

0x1178,	// (0x00052d18) main_cset6_slider_pane_g3_ParamLimits

0x1178,	// (0x00052d18) main_cset6_slider_pane_g3

0x8e5d,	// (0x0005a9fd) main_cset6_slider_pane_g4_ParamLimits

0x8e5d,	// (0x0005a9fd) main_cset6_slider_pane_g4

0x8e69,	// (0x0005aa09) main_cset6_slider_pane_g5_ParamLimits

0x8e69,	// (0x0005aa09) main_cset6_slider_pane_g5

0x09b4,	// (0x00052554) main_cset6_slider_pane_g7_ParamLimits

0x09b4,	// (0x00052554) main_cset6_slider_pane_g7

0x09c0,	// (0x00052560) main_cset6_slider_pane_g8_ParamLimits

0x09c0,	// (0x00052560) main_cset6_slider_pane_g8

0x8e77,	// (0x0005aa17) main_cset6_slider_pane_g9_ParamLimits

0x8e77,	// (0x0005aa17) main_cset6_slider_pane_g9

0x8e83,	// (0x0005aa23) main_cset6_slider_pane_g10_ParamLimits

0x8e83,	// (0x0005aa23) main_cset6_slider_pane_g10

0x8e8f,	// (0x0005aa2f) main_cset6_slider_pane_g11_ParamLimits

0x8e8f,	// (0x0005aa2f) main_cset6_slider_pane_g11

0x8e9b,	// (0x0005aa3b) main_cset6_slider_pane_g12_ParamLimits

0x8e9b,	// (0x0005aa3b) main_cset6_slider_pane_g12

0x8ea7,	// (0x0005aa47) main_cset6_slider_pane_g13_ParamLimits

0x8ea7,	// (0x0005aa47) main_cset6_slider_pane_g13

0x8eb3,	// (0x0005aa53) main_cset6_slider_pane_g14_ParamLimits

0x8eb3,	// (0x0005aa53) main_cset6_slider_pane_g14

0x8ebf,	// (0x0005aa5f) main_cset6_slider_pane_g15_ParamLimits

0x8ebf,	// (0x0005aa5f) main_cset6_slider_pane_g15

0x8ed7,	// (0x0005aa77) main_cset6_slider_pane_g16_ParamLimits

0x8ed7,	// (0x0005aa77) main_cset6_slider_pane_g16

0x8ee5,	// (0x0005aa85) main_cset6_slider_pane_g17_ParamLimits

0x8ee5,	// (0x0005aa85) main_cset6_slider_pane_g17

0x0011,

0xfab5,	// (0x00061655) main_cset6_slider_pane_g_ParamLimits

0xfab5,	// (0x00061655) main_cset6_slider_pane_g

0x1184,	// (0x00052d24) main_cset6_slider_pane_t1_ParamLimits

0x1184,	// (0x00052d24) main_cset6_slider_pane_t1

0x8f0b,	// (0x0005aaab) main_cset6_slider_pane_t2_ParamLimits

0x8f0b,	// (0x0005aaab) main_cset6_slider_pane_t2

0x8f36,	// (0x0005aad6) main_cset6_slider_pane_t3_ParamLimits

0x8f36,	// (0x0005aad6) main_cset6_slider_pane_t3

0x8f61,	// (0x0005ab01) main_cset6_slider_pane_t4_ParamLimits

0x8f61,	// (0x0005ab01) main_cset6_slider_pane_t4

0x8f8c,	// (0x0005ab2c) main_cset6_slider_pane_t5_ParamLimits

0x8f8c,	// (0x0005ab2c) main_cset6_slider_pane_t5

0x11c5,	// (0x00052d65) main_cset6_slider_pane_t7_ParamLimits

0x11c5,	// (0x00052d65) main_cset6_slider_pane_t7

0x8fb9,	// (0x0005ab59) main_cset6_slider_pane_t8_ParamLimits

0x8fb9,	// (0x0005ab59) main_cset6_slider_pane_t8

0x8fdd,	// (0x0005ab7d) main_cset6_slider_pane_t9_ParamLimits

0x8fdd,	// (0x0005ab7d) main_cset6_slider_pane_t9

0x9001,	// (0x0005aba1) main_cset6_slider_pane_t10_ParamLimits

0x9001,	// (0x0005aba1) main_cset6_slider_pane_t10

0x9025,	// (0x0005abc5) main_cset6_slider_pane_t11_ParamLimits

0x9025,	// (0x0005abc5) main_cset6_slider_pane_t11

0x11fb,	// (0x00052d9b) main_cset6_slider_pane_t14_ParamLimits

0x11fb,	// (0x00052d9b) main_cset6_slider_pane_t14

0x1234,	// (0x00052dd4) main_cset6_slider_pane_t15_ParamLimits

0x1234,	// (0x00052dd4) main_cset6_slider_pane_t15

0x000b,

0xfada,	// (0x0006167a) main_cset6_slider_pane_t_ParamLimits

0xfada,	// (0x0006167a) main_cset6_slider_pane_t

0x0a82,	// (0x00052622) cset_slider_pane_g1_copy1

0x0a8b,	// (0x0005262b) cset_slider_pane_g2_copy1

0x0a94,	// (0x00052634) cset_slider_pane_g3_copy1

0xb8dc,	// (0x0005d47c) bg_popup_sub_pane_cp011_copy1

0x126d,	// (0x00052e0d) main_cset_text_pane_g1_copy1

0x0b1d,	// (0x000526bd) main_cset_text_pane_t1_copy1

0x0b2b,	// (0x000526cb) main_cset_text_pane_t2_copy1

0x0b39,	// (0x000526d9) main_cset_text_pane_t3_copy1

0x0b47,	// (0x000526e7) main_cset_text_pane_t4_copy1

0x0b55,	// (0x000526f5) main_cset_text_pane_t5_copy1

0x1275,	// (0x00052e15) main_cset_text_pane_t6_copy1

0x1283,	// (0x00052e23) main_cset_text_pane_t7_copy1

0x9066,	// (0x0005ac06) main_cset_text2_pane_t1_copy1

0x5e60,	// (0x00057a00) main_ncimui_pane

0x5ebf,	// (0x00057a5f) popup_query_ncimui_window_ParamLimits

0x5ebf,	// (0x00057a5f) popup_query_ncimui_window

0xebe1,	// (0x00060781) field_cale_ev2_pane_g4_ParamLimits

0xebe1,	// (0x00060781) field_cale_ev2_pane_g4

0x703f,	// (0x00058bdf) cell_video_dialer_keypad_pane_g2_ParamLimits

0x703f,	// (0x00058bdf) cell_video_dialer_keypad_pane_g2

0x0001,

0xf7be,	// (0x0006135e) cell_video_dialer_keypad_pane_g_ParamLimits

0xf7be,	// (0x0006135e) cell_video_dialer_keypad_pane_g

0x7057,	// (0x00058bf7) cell_video_dialer_keypad_pane_t1

0xb8dc,	// (0x0005d47c) bg_popup_window_pane_cp012

0xe441,	// (0x0005ffe1) heading_pane_cp06

0x12af,	// (0x00052e4f) ncim_query_content_pane

0xb8dc,	// (0x0005d47c) bg_popup_heading_pane_cp01

0x12b7,	// (0x00052e57) ncim_heading_pane_t1

0x12c5,	// (0x00052e65) ncim_indicator_popup_pane

0x12d7,	// (0x00052e77) ncim_query_button_pane

0x12eb,	// (0x00052e8b) ncim_query_content_pane_t1

0x12fd,	// (0x00052e9d) ncim_query_content_pane_t2

0x0005,

0xfb1e,	// (0x000616be) ncim_query_content_pane_t

0x1337,	// (0x00052ed7) ncim_query_list_pane

0x1349,	// (0x00052ee9) ncim_query_popup_pane

0x12c5,	// (0x00052e65) ncim_indicator_popup_pane_ParamLimits

0x91b9,	// (0x0005ad59) ncim_query_content_pane_g1_ParamLimits

0x91b9,	// (0x0005ad59) ncim_query_content_pane_g1

0x12eb,	// (0x00052e8b) ncim_query_content_pane_t1_ParamLimits

0x12fd,	// (0x00052e9d) ncim_query_content_pane_t2_ParamLimits

0x91c5,	// (0x0005ad65) ncim_query_content_pane_t3_ParamLimits

0x91c5,	// (0x0005ad65) ncim_query_content_pane_t3

0x91e2,	// (0x0005ad82) ncim_query_content_pane_t4_ParamLimits

0x91e2,	// (0x0005ad82) ncim_query_content_pane_t4

0x91ff,	// (0x0005ad9f) ncim_query_content_pane_t5_ParamLimits

0x91ff,	// (0x0005ad9f) ncim_query_content_pane_t5

0x130f,	// (0x00052eaf) ncim_query_content_pane_t6_ParamLimits

0x130f,	// (0x00052eaf) ncim_query_content_pane_t6

0xfb1e,	// (0x000616be) ncim_query_content_pane_t_ParamLimits

0x1337,	// (0x00052ed7) ncim_query_list_pane_ParamLimits

0x1349,	// (0x00052ee9) ncim_query_popup_pane_ParamLimits

0x135d,	// (0x00052efd) wait_bar_pane_cp04

0xb8dc,	// (0x0005d47c) input_focus_pane_cp011

0x1365,	// (0x00052f05) ncim_query_popup_pane_t1

0x1373,	// (0x00052f13) ncim_list_query_list_pane_ParamLimits

0x1373,	// (0x00052f13) ncim_list_query_list_pane

0xb8dc,	// (0x0005d47c) bg_button_pane_cp027

0x1380,	// (0x00052f20) ncim_query_button_pane_g1

0xb8dc,	// (0x0005d47c) list_highlight_pane_cp012

0x138a,	// (0x00052f2a) ncim_list_query_list_pane_g1

0x1392,	// (0x00052f32) ncim_list_query_list_pane_t1

0x77b1,	// (0x00059351) cam4_indicators_pane_g3_ParamLimits

0x77b1,	// (0x00059351) cam4_indicators_pane_g3

0x78b8,	// (0x00059458) vid4_indicators_pane_g5_ParamLimits

0x78b8,	// (0x00059458) vid4_indicators_pane_g5

0x8884,	// (0x0005a424) vid4_progress_pane_g5_ParamLimits

0x8884,	// (0x0005a424) vid4_progress_pane_g5

0x90a5,	// (0x0005ac45) main_ncimui_pane_g1

0x910d,	// (0x0005acad) ncimui_group_query_pane_ParamLimits

0x910d,	// (0x0005acad) ncimui_group_query_pane

0x9155,	// (0x0005acf5) ncimui_list_pane_ParamLimits

0x9155,	// (0x0005acf5) ncimui_list_pane

0x917c,	// (0x0005ad1c) ncimui_text_pane_ParamLimits

0x917c,	// (0x0005ad1c) ncimui_text_pane

0x921c,	// (0x0005adbc) ncimui_text_pane_t1_ParamLimits

0x921c,	// (0x0005adbc) ncimui_text_pane_t1

0x13a0,	// (0x00052f40) ncimui_list_single_graphic_pane_ParamLimits

0x13a0,	// (0x00052f40) ncimui_list_single_graphic_pane

0x923b,	// (0x0005addb) ncimui_query_pane_ParamLimits

0x923b,	// (0x0005addb) ncimui_query_pane

0xb8dc,	// (0x0005d47c) list_highlight_pane_cp013

0x13b0,	// (0x00052f50) ncim_list_query_list_pane_t1_copy1

0x138a,	// (0x00052f2a) ncim_list_single_graphic_pane_g1

0x924e,	// (0x0005adee) ncim_query_button_pane_cp01

0x925a,	// (0x0005adfa) ncim_query_entry_pane_ParamLimits

0x925a,	// (0x0005adfa) ncim_query_entry_pane

0x926d,	// (0x0005ae0d) ncimui_query_pane_g1

0x9279,	// (0x0005ae19) ncimui_query_pane_t1_ParamLimits

0x9279,	// (0x0005ae19) ncimui_query_pane_t1

0xbf76,	// (0x0005db16) input_focus_pane_cp012

0x13be,	// (0x00052f5e) ncim_query_entry_pane_t1

0xc079,	// (0x0005dc19) main_im_pane_ParamLimits

0x5e60,	// (0x00057a00) main_mobtv_pane_ParamLimits

0x5e60,	// (0x00057a00) main_mobtv_pane

0x8ef3,	// (0x0005aa93) main_cset6_slider_pane_g18_ParamLimits

0x8ef3,	// (0x0005aa93) main_cset6_slider_pane_g18

0x8eff,	// (0x0005aa9f) main_cset6_slider_pane_g19_ParamLimits

0x8eff,	// (0x0005aa9f) main_cset6_slider_pane_g19

0xd3c4,	// (0x0005ef64) bg_main_mobtv_pane_ParamLimits

0xd3c4,	// (0x0005ef64) bg_main_mobtv_pane

0x9292,	// (0x0005ae32) main_mobtv_info_pane

0x929d,	// (0x0005ae3d) main_mobtv_loading_pane_ParamLimits

0x929d,	// (0x0005ae3d) main_mobtv_loading_pane

0x13d0,	// (0x00052f70) main_mobtv_pg_channel_list_pane

0x13da,	// (0x00052f7a) main_mobtv_pg_hdr_pane

0x92aa,	// (0x0005ae4a) main_mobtv_programe_curr_pane_ParamLimits

0x92aa,	// (0x0005ae4a) main_mobtv_programe_curr_pane

0x92b7,	// (0x0005ae57) main_mobtv_programe_next_pane_ParamLimits

0x92b7,	// (0x0005ae57) main_mobtv_programe_next_pane

0x13e3,	// (0x00052f83) popup_mobtv_noti_window

0xc01b,	// (0x0005dbbb) main_tv_pg_hdr_pane_g1

0x13eb,	// (0x00052f8b) main_tv_pg_hdr_pane_g2

0x13f3,	// (0x00052f93) main_tv_pg_hdr_pane_g3

0x13fb,	// (0x00052f9b) main_tv_pg_hdr_pane_g4

0x1403,	// (0x00052fa3) main_tv_pg_hdr_pane_g5

0x140d,	// (0x00052fad) main_tv_pg_hdr_pane_g6

0x1417,	// (0x00052fb7) main_tv_pg_hdr_pane_g7

0x1421,	// (0x00052fc1) main_tv_pg_hdr_pane_g8

0x1437,	// (0x00052fd7) main_tv_pg_hdr_pane_g9

0x1441,	// (0x00052fe1) main_tv_pg_hdr_pane_g10

0x144b,	// (0x00052feb) main_tv_pg_hdr_pane_g11

0x000a,

0xfb2b,	// (0x000616cb) main_tv_pg_hdr_pane_g

0x1455,	// (0x00052ff5) main_tv_pg_hdr_pane_t1

0x1463,	// (0x00053003) main_tv_pg_hdr_pane_t2

0x1471,	// (0x00053011) main_tv_pg_hdr_pane_t3

0x1481,	// (0x00053021) main_tv_pg_hdr_pane_t4

0x1491,	// (0x00053031) main_tv_pg_hdr_pane_t5

0x0004,

0xfb42,	// (0x000616e2) main_tv_pg_hdr_pane_t

0x14a1,	// (0x00053041) single_mobtv_pg_channel_pane_ParamLimits

0x14a1,	// (0x00053041) single_mobtv_pg_channel_pane

0x14b3,	// (0x00053053) single_mobtv_pg_channel_table_pane

0x14bc,	// (0x0005305c) single_mobtv_pg_channel_thumb_pane

0x14c5,	// (0x00053065) single_tv_pg_channel_pane_g1

0x14ce,	// (0x0005306e) single_tv_pg_channel_pane_g2

0x0001,

0xfb4d,	// (0x000616ed) single_tv_pg_channel_pane_g

0xbfdd,	// (0x0005db7d) bg_single_mobtv_pg_channel_thumb_pane_ParamLimits

0xbfdd,	// (0x0005db7d) bg_single_mobtv_pg_channel_thumb_pane

0x14d7,	// (0x00053077) single_mobtv_pg_channel_thumb_pane_g1_ParamLimits

0x14d7,	// (0x00053077) single_mobtv_pg_channel_thumb_pane_g1

0x14e5,	// (0x00053085) single_mobtv_pg_channel_thumb_pane_g2_ParamLimits

0x14e5,	// (0x00053085) single_mobtv_pg_channel_thumb_pane_g2

0x14f1,	// (0x00053091) single_mobtv_pg_channel_thumb_pane_g3_ParamLimits

0x14f1,	// (0x00053091) single_mobtv_pg_channel_thumb_pane_g3

0x0002,

0xfb52,	// (0x000616f2) single_mobtv_pg_channel_thumb_pane_g_ParamLimits

0xfb52,	// (0x000616f2) single_mobtv_pg_channel_thumb_pane_g

0x14fd,	// (0x0005309d) single_mobtv_pg_channel_thumb_pane_t1

0x150b,	// (0x000530ab) single_mobtv_pg_channel_thumb_pane_t2

0x0001,

0xfb59,	// (0x000616f9) single_mobtv_pg_channel_thumb_pane_t

0xc01b,	// (0x0005dbbb) bg_single_mobtv_pg_channel_table_pane_g1

0xc01b,	// (0x0005dbbb) bg_single_mobtv_pg_channel_table_pane_g2

0x0001,

0xf0af,	// (0x00060c4f) bg_single_mobtv_pg_channel_table_pane_g

0x1519,	// (0x000530b9) single_mobtv_pg_channel_table_pane_t1

0x1527,	// (0x000530c7) single_mobtv_pg_channel_table_pane_t2

0x0001,

0xfb5e,	// (0x000616fe) single_mobtv_pg_channel_table_pane_t

0x92cc,	// (0x0005ae6c) main_mobtv_info_pane_g1_ParamLimits

0x92cc,	// (0x0005ae6c) main_mobtv_info_pane_g1

0x92e8,	// (0x0005ae88) main_mobtv_info_pane_t1_ParamLimits

0x92e8,	// (0x0005ae88) main_mobtv_info_pane_t1

0x9360,	// (0x0005af00) main_mobtv_info_pane_t2_ParamLimits

0x9360,	// (0x0005af00) main_mobtv_info_pane_t2

0x0002,

0xfb68,	// (0x00061708) main_mobtv_info_pane_t_ParamLimits

0xfb68,	// (0x00061708) main_mobtv_info_pane_t

0x93ef,	// (0x0005af8f) wait_bar_pane_cp05

0x9401,	// (0x0005afa1) main_mobtv_loading_pane_g1_ParamLimits

0x9401,	// (0x0005afa1) main_mobtv_loading_pane_g1

0x940f,	// (0x0005afaf) main_mobtv_loading_pane_g2_ParamLimits

0x940f,	// (0x0005afaf) main_mobtv_loading_pane_g2

0x941b,	// (0x0005afbb) main_mobtv_loading_pane_g3_ParamLimits

0x941b,	// (0x0005afbb) main_mobtv_loading_pane_g3

0x0002,

0xfb6f,	// (0x0006170f) main_mobtv_loading_pane_g_ParamLimits

0xfb6f,	// (0x0006170f) main_mobtv_loading_pane_g

0x1535,	// (0x000530d5) main_mobtv_loading_pane_t1_ParamLimits

0x1535,	// (0x000530d5) main_mobtv_loading_pane_t1

0x154d,	// (0x000530ed) main_mobtv_loading_pane_t2_ParamLimits

0x154d,	// (0x000530ed) main_mobtv_loading_pane_t2

0x0001,

0xfb76,	// (0x00061716) main_mobtv_loading_pane_t_ParamLimits

0xfb76,	// (0x00061716) main_mobtv_loading_pane_t

0x9429,	// (0x0005afc9) wait_bar_pane_cp06_ParamLimits

0x9429,	// (0x0005afc9) wait_bar_pane_cp06

0x1571,	// (0x00053111) main_mobtv_programe_curr_pane_t1

0x157f,	// (0x0005311f) main_mobtv_programe_curr_pane_t2

0x0001,

0xfb7b,	// (0x0006171b) main_mobtv_programe_curr_pane_t

0x158d,	// (0x0005312d) main_mobtv_programe_next_pane_t1

0x159b,	// (0x0005313b) main_mobtv_programe_next_pane_t2

0x15a9,	// (0x00053149) main_mobtv_programe_next_pane_t3

0x0002,

0xfb80,	// (0x00061720) main_mobtv_programe_next_pane_t

0xb8dc,	// (0x0005d47c) bg_popup_mobtv_noti_window_pane

0x15b7,	// (0x00053157) popup_mobtv_noti_window_g1

0x15bf,	// (0x0005315f) popup_mobtv_noti_window_t1

0x15cd,	// (0x0005316d) popup_mobtv_noti_window_t2

0x0001,

0xfb87,	// (0x00061727) popup_mobtv_noti_window_t

0xc01b,	// (0x0005dbbb) bg_popup_mobtv_noti_window_pane_g1

0x3425,	// (0x00054fc5) sc_clock_pane

0x3425,	// (0x00054fc5) main_fs_bigclock_pane

0x8a5e,	// (0x0005a5fe) blid2_tripm_pane_t4_ParamLimits

0x8a5e,	// (0x0005a5fe) blid2_tripm_pane_t4

0xbfeb,	// (0x0005db8b) sc_clock_pane_g1_ParamLimits

0xbfeb,	// (0x0005db8b) sc_clock_pane_g1

0xc039,	// (0x0005dbd9) sc_clock_pane_t1_ParamLimits

0xc039,	// (0x0005dbd9) sc_clock_pane_t1

0xc039,	// (0x0005dbd9) sc_clock_pane_t2_ParamLimits

0xc039,	// (0x0005dbd9) sc_clock_pane_t2

0xc039,	// (0x0005dbd9) sc_clock_pane_t3_ParamLimits

0xc039,	// (0x0005dbd9) sc_clock_pane_t3

0x0004,

0xfb8c,	// (0x0006172c) sc_clock_pane_t_ParamLimits

0xfb8c,	// (0x0006172c) sc_clock_pane_t

0x9f39,	// (0x0005bad9) main_fs_bigclock_indicator_pane_ParamLimits

0x9f39,	// (0x0005bad9) main_fs_bigclock_indicator_pane

0x9470,	// (0x0005b010) main_fs_bigclock_pane_g1_ParamLimits

0x9470,	// (0x0005b010) main_fs_bigclock_pane_g1

0x9f45,	// (0x0005bae5) main_fs_bigclock_pane_t1_ParamLimits

0x9f45,	// (0x0005bae5) main_fs_bigclock_pane_t1

0x9f57,	// (0x0005baf7) main_fs_bigclock_pane_t2_ParamLimits

0x9f57,	// (0x0005baf7) main_fs_bigclock_pane_t2

0x9f6b,	// (0x0005bb0b) main_fs_bigclock_pane_t3_ParamLimits

0x9f6b,	// (0x0005bb0b) main_fs_bigclock_pane_t3

0x0002,

0xfd1d,	// (0x000618bd) main_fs_bigclock_pane_t_ParamLimits

0xfd1d,	// (0x000618bd) main_fs_bigclock_pane_t

0x1e26,	// (0x000539c6) main_fs_bigclock_indicator_pane_g1

0x12df,	// (0x00052e7f) ncim_query_content_pane_g2_ParamLimits

0x12df,	// (0x00052e7f) ncim_query_content_pane_g2

0x0001,

0xfb19,	// (0x000616b9) ncim_query_content_pane_g_ParamLimits

0xfb19,	// (0x000616b9) ncim_query_content_pane_g

0xc039,	// (0x0005dbd9) sc_clock_pane_t4_ParamLimits

0xc039,	// (0x0005dbd9) sc_clock_pane_t4

0x5e60,	// (0x00057a00) main_radioblah_pane

0x7664,	// (0x00059204) cell_call4_button_pane_t1_copy1_ParamLimits

0x7664,	// (0x00059204) cell_call4_button_pane_t1_copy1

0x90bf,	// (0x0005ac5f) main_ncimui_pane_t1_ParamLimits

0x90bf,	// (0x0005ac5f) main_ncimui_pane_t1

0x90d9,	// (0x0005ac79) main_ncimui_pane_t2_ParamLimits

0x90d9,	// (0x0005ac79) main_ncimui_pane_t2

0x0002,

0xfb12,	// (0x000616b2) main_ncimui_pane_t_ParamLimits

0xfb12,	// (0x000616b2) main_ncimui_pane_t

0xd3a2,	// (0x0005ef42) main_radioblah_anim_pane_ParamLimits

0xd3a2,	// (0x0005ef42) main_radioblah_anim_pane

0xd3a2,	// (0x0005ef42) main_radioblah_info_pane_ParamLimits

0xd3a2,	// (0x0005ef42) main_radioblah_info_pane

0xd3b0,	// (0x0005ef50) main_radioblah_pane_t1_ParamLimits

0xd3b0,	// (0x0005ef50) main_radioblah_pane_t1

0xd3b0,	// (0x0005ef50) main_radioblah_pane_t2_ParamLimits

0xd3b0,	// (0x0005ef50) main_radioblah_pane_t2

0x0003,

0xfbad,	// (0x0006174d) main_radioblah_pane_t_ParamLimits

0xfbad,	// (0x0006174d) main_radioblah_pane_t

0xbfcf,	// (0x0005db6f) main_radioblah_rocker_ctrl_pane_ParamLimits

0xbfcf,	// (0x0005db6f) main_radioblah_rocker_ctrl_pane

0xe5d8,	// (0x00060178) main_radioblah_info_pane_t1_ParamLimits

0xe5d8,	// (0x00060178) main_radioblah_info_pane_t1

0x1742,	// (0x000532e2) main_radioblah_info_pane_t2_ParamLimits

0x1742,	// (0x000532e2) main_radioblah_info_pane_t2

0x0003,

0xfbb6,	// (0x00061756) main_radioblah_info_pane_t_ParamLimits

0xfbb6,	// (0x00061756) main_radioblah_info_pane_t

0xc01b,	// (0x0005dbbb) main_radioblah_rocker_ctrl_pane_g1

0xc01b,	// (0x0005dbbb) main_radioblah_rocker_ctrl_pane_g2

0xc01b,	// (0x0005dbbb) main_radioblah_rocker_ctrl_pane_g3

0xc01b,	// (0x0005dbbb) main_radioblah_rocker_ctrl_pane_g4

0xc01b,	// (0x0005dbbb) main_radioblah_rocker_ctrl_pane_g5

0xc01b,	// (0x0005dbbb) main_radioblah_rocker_ctrl_pane_g6

0x0005,

0xfbbf,	// (0x0006175f) main_radioblah_rocker_ctrl_pane_g

0x9066,	// (0x0005ac06) main_cset_text2_pane_t1_copy1_ParamLimits

0x76df,	// (0x0005927f) cam4_image_uncrop_qvga_pane

0x7826,	// (0x000593c6) vid4_image_uncrop_qcif_pane

0x8bf2,	// (0x0005a792) cam6_image_uncrop_qvga_pane_ParamLimits

0x8bf2,	// (0x0005a792) cam6_image_uncrop_qvga_pane

0x0fe6,	// (0x00052b86) vid6_image_uncrop_qcif_pane_ParamLimits

0x0fe6,	// (0x00052b86) vid6_image_uncrop_qcif_pane

0xb8dc,	// (0x0005d47c) bg_popup_preview_window_pane_cp03

0x1291,	// (0x00052e31) list_cset_text2_pane

0x1299,	// (0x00052e39) main_cset6_text2_pane_g1

0x12a1,	// (0x00052e41) main_cset6_text2_pane_t1

0x94b4,	// (0x0005b054) list_cset_text2_pane_t1_ParamLimits

0x94b4,	// (0x0005b054) list_cset_text2_pane_t1

0x5e60,	// (0x00057a00) main_radioblah_pane_ParamLimits

0x93db,	// (0x0005af7b) main_mobtv_info_pane_t3_ParamLimits

0x93db,	// (0x0005af7b) main_mobtv_info_pane_t3

0xd3c4,	// (0x0005ef64) main_radioblah_pane_g1

0x1712,	// (0x000532b2) main_radioblah_info_pane_g1

0xc039,	// (0x0005dbd9) main_radioblah_info_pane_t3_ParamLimits

0xc039,	// (0x0005dbd9) main_radioblah_info_pane_t3

0x4ee4,	// (0x00056a84) highlight_cell_cale_month_pane_ParamLimits

0x4ee4,	// (0x00056a84) highlight_cell_cale_month_pane

0x3425,	// (0x00054fc5) main_phob_fisheye_pane

0xec56,	// (0x000607f6) scroll_pane_cp0031_ParamLimits

0xec56,	// (0x000607f6) scroll_pane_cp0031

0x10f4,	// (0x00052c94) wait_bar_pane_cp08_ParamLimits

0x8e0a,	// (0x0005a9aa) cset_list_set_pane_copy1_ParamLimits

0x1791,	// (0x00053331) highlight_cell_cale_month_pane_g1

0x94d1,	// (0x0005b071) highlight_cell_cale_month_pane_t1

0x0d3d,	// (0x000528dd) list_gen_pane_cp01

0x099f,	// (0x0005253f) scroll_pane_01

0x94df,	// (0x0005b07f) list_single_double_fisheye_pane

0x94e8,	// (0x0005b088) list_double_fisheye_pane_g1_ParamLimits

0x94e8,	// (0x0005b088) list_double_fisheye_pane_g1

0x94f4,	// (0x0005b094) list_double_fisheye_pane_g2_ParamLimits

0x94f4,	// (0x0005b094) list_double_fisheye_pane_g2

0x9508,	// (0x0005b0a8) list_double_fisheye_pane_g3_ParamLimits

0x9508,	// (0x0005b0a8) list_double_fisheye_pane_g3

0x0004,

0xfbcc,	// (0x0006176c) list_double_fisheye_pane_g_ParamLimits

0xfbcc,	// (0x0006176c) list_double_fisheye_pane_g

0x9531,	// (0x0005b0d1) list_double_fisheye_pane_t1_ParamLimits

0x9531,	// (0x0005b0d1) list_double_fisheye_pane_t1

0x954c,	// (0x0005b0ec) list_double_fisheye_pane_t2_ParamLimits

0x954c,	// (0x0005b0ec) list_double_fisheye_pane_t2

0x0001,

0xfbd7,	// (0x00061777) list_double_fisheye_pane_t_ParamLimits

0xfbd7,	// (0x00061777) list_double_fisheye_pane_t

0x3425,	// (0x00054fc5) main_call5_pane

0xbfcf,	// (0x0005db6f) sc_swipe_pane_ParamLimits

0xbfcf,	// (0x0005db6f) sc_swipe_pane

0x957a,	// (0x0005b11a) call5_image_pane_ParamLimits

0x957a,	// (0x0005b11a) call5_image_pane

0x958a,	// (0x0005b12a) call5_swipe_1_pane_ParamLimits

0x958a,	// (0x0005b12a) call5_swipe_1_pane

0x9596,	// (0x0005b136) call5_swipe_2_pane_ParamLimits

0x9596,	// (0x0005b136) call5_swipe_2_pane

0x95b0,	// (0x0005b150) popup_call5_audio_first_window_ParamLimits

0x95b0,	// (0x0005b150) popup_call5_audio_first_window

0xbfdd,	// (0x0005db7d) call5_swipe_1_pane_g1_ParamLimits

0xbfdd,	// (0x0005db7d) call5_swipe_1_pane_g1

0x1799,	// (0x00053339) call5_swipe_1_pane_g2_ParamLimits

0x1799,	// (0x00053339) call5_swipe_1_pane_g2

0x0001,

0xfbdc,	// (0x0006177c) call5_swipe_1_pane_g_ParamLimits

0xfbdc,	// (0x0006177c) call5_swipe_1_pane_g

0x17a5,	// (0x00053345) call5_swipe_1_pane_t1_ParamLimits

0x17a5,	// (0x00053345) call5_swipe_1_pane_t1

0xbfdd,	// (0x0005db7d) call5_swipe_2_pane_g1_ParamLimits

0xbfdd,	// (0x0005db7d) call5_swipe_2_pane_g1

0x17ba,	// (0x0005335a) call5_swipe_2_pane_g2_ParamLimits

0x17ba,	// (0x0005335a) call5_swipe_2_pane_g2

0x0001,

0xfbe1,	// (0x00061781) call5_swipe_2_pane_g_ParamLimits

0xfbe1,	// (0x00061781) call5_swipe_2_pane_g

0x17c6,	// (0x00053366) call5_swipe_2_pane_t1_ParamLimits

0x17c6,	// (0x00053366) call5_swipe_2_pane_t1

0xbfdd,	// (0x0005db7d) sc_swipe_pane_g1_ParamLimits

0xbfdd,	// (0x0005db7d) sc_swipe_pane_g1

0xbfeb,	// (0x0005db8b) sc_swipe_pane_g2_ParamLimits

0xbfeb,	// (0x0005db8b) sc_swipe_pane_g2

0x0001,

0xfbe6,	// (0x00061786) sc_swipe_pane_g_ParamLimits

0xfbe6,	// (0x00061786) sc_swipe_pane_g

0xc025,	// (0x0005dbc5) sc_swipe_pane_t1_ParamLimits

0xc025,	// (0x0005dbc5) sc_swipe_pane_t1

0x3425,	// (0x00054fc5) main_cmail_launcher_pane

0x95be,	// (0x0005b15e) aid_size_cell_cmail_l_ParamLimits

0x95be,	// (0x0005b15e) aid_size_cell_cmail_l

0x95cc,	// (0x0005b16c) grid_cmail_l_pane_ParamLimits

0x95cc,	// (0x0005b16c) grid_cmail_l_pane

0x95dc,	// (0x0005b17c) cell_cmail_l_pane_ParamLimits

0x95dc,	// (0x0005b17c) cell_cmail_l_pane

0x17db,	// (0x0005337b) cell_cmail_l_pane_g1_ParamLimits

0x17db,	// (0x0005337b) cell_cmail_l_pane_g1

0x17e7,	// (0x00053387) cell_cmail_l_pane_t1_ParamLimits

0x17e7,	// (0x00053387) cell_cmail_l_pane_t1

0x17fd,	// (0x0005339d) cell_cmail_l_pane_t2_ParamLimits

0x17fd,	// (0x0005339d) cell_cmail_l_pane_t2

0x0001,

0xfbeb,	// (0x0006178b) cell_cmail_l_pane_t_ParamLimits

0xfbeb,	// (0x0006178b) cell_cmail_l_pane_t

0xbf76,	// (0x0005db16) grid_highlight_pane_cp018_ParamLimits

0xbf76,	// (0x0005db16) grid_highlight_pane_cp018

0x3318,	// (0x00054eb8) main2_pane_ParamLimits

0x3318,	// (0x00054eb8) main2_pane

0xc108,	// (0x0005dca8) popup_sp_fs_action_menu_bg_pane_g1

0xc110,	// (0x0005dcb0) popup_sp_fs_action_menu_bg_pane_g2

0xc118,	// (0x0005dcb8) popup_sp_fs_action_menu_bg_pane_g3

0xc120,	// (0x0005dcc0) popup_sp_fs_action_menu_bg_pane_g4

0xc128,	// (0x0005dcc8) popup_sp_fs_action_menu_bg_pane_g5

0xc130,	// (0x0005dcd0) popup_sp_fs_action_menu_bg_pane_g6

0xc138,	// (0x0005dcd8) popup_sp_fs_action_menu_bg_pane_g7

0xc140,	// (0x0005dce0) popup_sp_fs_action_menu_bg_pane_g8

0xc148,	// (0x0005dce8) popup_sp_fs_action_menu_bg_pane_g9

0xc150,	// (0x0005dcf0) popup_sp_fs_action_menu_bg_pane_g10

0xc150,	// (0x0005dcf0) popup_sp_fs_action_menu_bg_pane_g11

0x000a,

0xf100,	// (0x00060ca0) popup_sp_fs_action_menu_bg_pane_g

0xbfdd,	// (0x0005db7d) list_medium_line_x2_t3_g3_g1_ParamLimits

0xbfdd,	// (0x0005db7d) list_medium_line_x2_t3_g3_g1

0xbfdd,	// (0x0005db7d) list_medium_line_x2_t3_g3_g2_ParamLimits

0xbfdd,	// (0x0005db7d) list_medium_line_x2_t3_g3_g2

0xbfdd,	// (0x0005db7d) list_medium_line_x2_t3_g3_g3_ParamLimits

0xbfdd,	// (0x0005db7d) list_medium_line_x2_t3_g3_g3

0x0002,

0xf1ae,	// (0x00060d4e) list_medium_line_x2_t3_g3_g_ParamLimits

0xf1ae,	// (0x00060d4e) list_medium_line_x2_t3_g3_g

0xc025,	// (0x0005dbc5) list_medium_line_x2_t3_g3_t1_ParamLimits

0xc025,	// (0x0005dbc5) list_medium_line_x2_t3_g3_t1

0xc025,	// (0x0005dbc5) list_medium_line_x2_t3_g3_t2_ParamLimits

0xc025,	// (0x0005dbc5) list_medium_line_x2_t3_g3_t2

0xc025,	// (0x0005dbc5) list_medium_line_x2_t3_g3_t3_ParamLimits

0xc025,	// (0x0005dbc5) list_medium_line_x2_t3_g3_t3

0x0002,

0xf1b5,	// (0x00060d55) list_medium_line_x2_t3_g3_t_ParamLimits

0xf1b5,	// (0x00060d55) list_medium_line_x2_t3_g3_t

0xbfdd,	// (0x0005db7d) list_medium_line_x2_t3_g2_g1_ParamLimits

0xbfdd,	// (0x0005db7d) list_medium_line_x2_t3_g2_g1

0xbfdd,	// (0x0005db7d) list_medium_line_x2_t3_g2_g2_ParamLimits

0xbfdd,	// (0x0005db7d) list_medium_line_x2_t3_g2_g2

0x0001,

0xf1bc,	// (0x00060d5c) list_medium_line_x2_t3_g2_g_ParamLimits

0xf1bc,	// (0x00060d5c) list_medium_line_x2_t3_g2_g

0xc025,	// (0x0005dbc5) list_medium_line_x2_t3_g2_t1_ParamLimits

0xc025,	// (0x0005dbc5) list_medium_line_x2_t3_g2_t1

0xc025,	// (0x0005dbc5) list_medium_line_x2_t3_g2_t2_ParamLimits

0xc025,	// (0x0005dbc5) list_medium_line_x2_t3_g2_t2

0xc025,	// (0x0005dbc5) list_medium_line_x2_t3_g2_t3_ParamLimits

0xc025,	// (0x0005dbc5) list_medium_line_x2_t3_g2_t3

0x0002,

0xf1b5,	// (0x00060d55) list_medium_line_x2_t3_g2_t_ParamLimits

0xf1b5,	// (0x00060d55) list_medium_line_x2_t3_g2_t

0xbfdd,	// (0x0005db7d) list_medium_line_x2_t4_g4_g1_ParamLimits

0xbfdd,	// (0x0005db7d) list_medium_line_x2_t4_g4_g1

0xbfdd,	// (0x0005db7d) list_medium_line_x2_t4_g4_g2_ParamLimits

0xbfdd,	// (0x0005db7d) list_medium_line_x2_t4_g4_g2

0xbfdd,	// (0x0005db7d) list_medium_line_x2_t4_g4_g3_ParamLimits

0xbfdd,	// (0x0005db7d) list_medium_line_x2_t4_g4_g3

0xbfdd,	// (0x0005db7d) list_medium_line_x2_t4_g4_g4_ParamLimits

0xbfdd,	// (0x0005db7d) list_medium_line_x2_t4_g4_g4

0x0003,

0xf1c1,	// (0x00060d61) list_medium_line_x2_t4_g4_g_ParamLimits

0xf1c1,	// (0x00060d61) list_medium_line_x2_t4_g4_g

0xc025,	// (0x0005dbc5) list_medium_line_x2_t4_g4_t1_ParamLimits

0xc025,	// (0x0005dbc5) list_medium_line_x2_t4_g4_t1

0xc025,	// (0x0005dbc5) list_medium_line_x2_t4_g4_t2_ParamLimits

0xc025,	// (0x0005dbc5) list_medium_line_x2_t4_g4_t2

0xc025,	// (0x0005dbc5) list_medium_line_x2_t4_g4_t3_ParamLimits

0xc025,	// (0x0005dbc5) list_medium_line_x2_t4_g4_t3

0xc025,	// (0x0005dbc5) list_medium_line_x2_t4_g4_t4_ParamLimits

0xc025,	// (0x0005dbc5) list_medium_line_x2_t4_g4_t4

0x0003,

0xf1ca,	// (0x00060d6a) list_medium_line_x2_t4_g4_t_ParamLimits

0xf1ca,	// (0x00060d6a) list_medium_line_x2_t4_g4_t

0xbfdd,	// (0x0005db7d) list_medium_line_x2_t2_g4_g1_ParamLimits

0xbfdd,	// (0x0005db7d) list_medium_line_x2_t2_g4_g1

0xbfdd,	// (0x0005db7d) list_medium_line_x2_t2_g4_g2_ParamLimits

0xbfdd,	// (0x0005db7d) list_medium_line_x2_t2_g4_g2

0xbfdd,	// (0x0005db7d) list_medium_line_x2_t2_g4_g3_ParamLimits

0xbfdd,	// (0x0005db7d) list_medium_line_x2_t2_g4_g3

0xbfdd,	// (0x0005db7d) list_medium_line_x2_t2_g4_g4_ParamLimits

0xbfdd,	// (0x0005db7d) list_medium_line_x2_t2_g4_g4

0x0003,

0xf1c1,	// (0x00060d61) list_medium_line_x2_t2_g4_g_ParamLimits

0xf1c1,	// (0x00060d61) list_medium_line_x2_t2_g4_g

0xc025,	// (0x0005dbc5) list_medium_line_x2_t2_g4_t1_ParamLimits

0xc025,	// (0x0005dbc5) list_medium_line_x2_t2_g4_t1

0xc025,	// (0x0005dbc5) list_medium_line_x2_t2_g4_t2_ParamLimits

0xc025,	// (0x0005dbc5) list_medium_line_x2_t2_g4_t2

0x0001,

0xf231,	// (0x00060dd1) list_medium_line_x2_t2_g4_t_ParamLimits

0xf231,	// (0x00060dd1) list_medium_line_x2_t2_g4_t

0xbfdd,	// (0x0005db7d) list_medium_line_x2_t2_g3_g1_ParamLimits

0xbfdd,	// (0x0005db7d) list_medium_line_x2_t2_g3_g1

0xbfdd,	// (0x0005db7d) list_medium_line_x2_t2_g3_g2_ParamLimits

0xbfdd,	// (0x0005db7d) list_medium_line_x2_t2_g3_g2

0xbfdd,	// (0x0005db7d) list_medium_line_x2_t2_g3_g3_ParamLimits

0xbfdd,	// (0x0005db7d) list_medium_line_x2_t2_g3_g3

0x0002,

0xf1ae,	// (0x00060d4e) list_medium_line_x2_t2_g3_g_ParamLimits

0xf1ae,	// (0x00060d4e) list_medium_line_x2_t2_g3_g

0xc025,	// (0x0005dbc5) list_medium_line_x2_t2_g3_t1_ParamLimits

0xc025,	// (0x0005dbc5) list_medium_line_x2_t2_g3_t1

0xc025,	// (0x0005dbc5) list_medium_line_x2_t2_g3_t2_ParamLimits

0xc025,	// (0x0005dbc5) list_medium_line_x2_t2_g3_t2

0x0001,

0xf231,	// (0x00060dd1) list_medium_line_x2_t2_g3_t_ParamLimits

0xf231,	// (0x00060dd1) list_medium_line_x2_t2_g3_t

0x50b4,	// (0x00056c54) main_sp_fs_list_pane_ParamLimits

0x50b4,	// (0x00056c54) main_sp_fs_list_pane

0x50c0,	// (0x00056c60) sp_fs_scroll_pane_ParamLimits

0x50c0,	// (0x00056c60) sp_fs_scroll_pane

0xcd02,	// (0x0005e8a2) list_medium_line_x2_t3_t1

0xcd02,	// (0x0005e8a2) list_medium_line_x2_t3_t2

0xcd02,	// (0x0005e8a2) list_medium_line_x2_t3_t3

0x0002,

0xf27c,	// (0x00060e1c) list_medium_line_x2_t3_t

0xcd02,	// (0x0005e8a2) list_medium_line_x3_t4_t1

0xcd02,	// (0x0005e8a2) list_medium_line_x3_t4_t2

0xcd02,	// (0x0005e8a2) list_medium_line_x3_t4_t3

0xcd02,	// (0x0005e8a2) list_medium_line_x3_t4_t4

0x0003,

0xf283,	// (0x00060e23) list_medium_line_x3_t4_t

0xcd02,	// (0x0005e8a2) list_medium_line_x4_t5_t1

0xcd02,	// (0x0005e8a2) list_medium_line_x4_t5_t2

0xcd02,	// (0x0005e8a2) list_medium_line_x4_t5_t3

0xcd02,	// (0x0005e8a2) list_medium_line_x4_t5_t4

0xcd02,	// (0x0005e8a2) list_medium_line_x4_t5_t5

0x0004,

0xf28c,	// (0x00060e2c) list_medium_line_x4_t5_t

0xbfdd,	// (0x0005db7d) list_medium_line_t4_g4_g1_ParamLimits

0xbfdd,	// (0x0005db7d) list_medium_line_t4_g4_g1

0xbfdd,	// (0x0005db7d) list_medium_line_t4_g4_g2_ParamLimits

0xbfdd,	// (0x0005db7d) list_medium_line_t4_g4_g2

0xbfdd,	// (0x0005db7d) list_medium_line_t4_g4_g3_ParamLimits

0xbfdd,	// (0x0005db7d) list_medium_line_t4_g4_g3

0xbfdd,	// (0x0005db7d) list_medium_line_t4_g4_g4_ParamLimits

0xbfdd,	// (0x0005db7d) list_medium_line_t4_g4_g4

0x0003,

0xf1c1,	// (0x00060d61) list_medium_line_t4_g4_g_ParamLimits

0xf1c1,	// (0x00060d61) list_medium_line_t4_g4_g

0xc025,	// (0x0005dbc5) list_medium_line_t4_g4_t1_ParamLimits

0xc025,	// (0x0005dbc5) list_medium_line_t4_g4_t1

0xc025,	// (0x0005dbc5) list_medium_line_t4_g4_t2_ParamLimits

0xc025,	// (0x0005dbc5) list_medium_line_t4_g4_t2

0xc025,	// (0x0005dbc5) list_medium_line_t4_g4_t3_ParamLimits

0xc025,	// (0x0005dbc5) list_medium_line_t4_g4_t3

0xc025,	// (0x0005dbc5) list_medium_line_t4_g4_t4_ParamLimits

0xc025,	// (0x0005dbc5) list_medium_line_t4_g4_t4

0x0003,

0xf1ca,	// (0x00060d6a) list_medium_line_t4_g4_t_ParamLimits

0xf1ca,	// (0x00060d6a) list_medium_line_t4_g4_t

0x51a9,	// (0x00056d49) chi_dic_find_pane_g1

0x5e7c,	// (0x00057a1c) main_tport_pane

0xcd02,	// (0x0005e8a2) list_medium_line_plain_t1

0xbfdd,	// (0x0005db7d) list_medium_line_t2_g2_g1_ParamLimits

0xbfdd,	// (0x0005db7d) list_medium_line_t2_g2_g1

0xbfdd,	// (0x0005db7d) list_medium_line_t2_g2_g2_ParamLimits

0xbfdd,	// (0x0005db7d) list_medium_line_t2_g2_g2

0x0001,

0xf1bc,	// (0x00060d5c) list_medium_line_t2_g2_g_ParamLimits

0xf1bc,	// (0x00060d5c) list_medium_line_t2_g2_g

0xc025,	// (0x0005dbc5) list_medium_line_t2_g2_t1_ParamLimits

0xc025,	// (0x0005dbc5) list_medium_line_t2_g2_t1

0xc025,	// (0x0005dbc5) list_medium_line_t2_g2_t2_ParamLimits

0xc025,	// (0x0005dbc5) list_medium_line_t2_g2_t2

0x0001,

0xf231,	// (0x00060dd1) list_medium_line_t2_g2_t_ParamLimits

0xf231,	// (0x00060dd1) list_medium_line_t2_g2_t

0x0458,	// (0x00051ff8) aid_sp_fs_list_icon_a_sm

0x0460,	// (0x00052000) aid_sp_fs_list_icon_d

0x0d46,	// (0x000528e6) aid_sp_fs_text_primary

0x0468,	// (0x00052008) aid_sp_fs_text_secondary

0xb8dc,	// (0x0005d47c) list_medium_line

0xb8dc,	// (0x0005d47c) list_medium_line_g2

0xb8dc,	// (0x0005d47c) list_medium_line_g3

0xb8dc,	// (0x0005d47c) list_medium_line_plain

0xb8dc,	// (0x0005d47c) list_medium_line_plain_t2

0xb8dc,	// (0x0005d47c) list_medium_line_plain_t3

0xb8dc,	// (0x0005d47c) list_medium_line_right_icon

0xb8dc,	// (0x0005d47c) list_medium_line_right_iconx2

0xb8dc,	// (0x0005d47c) list_medium_line_t2

0xb8dc,	// (0x0005d47c) list_medium_line_t2_g2

0xb8dc,	// (0x0005d47c) list_medium_line_t2_g3

0xb8dc,	// (0x0005d47c) list_medium_line_t2_right_icon

0xb8dc,	// (0x0005d47c) list_medium_line_t2_right_iconx2

0xb8dc,	// (0x0005d47c) list_medium_line_t3

0xb8dc,	// (0x0005d47c) list_medium_line_t3_g2

0xb8dc,	// (0x0005d47c) list_medium_line_t3_g3

0xb8dc,	// (0x0005d47c) list_medium_line_t3_right_iconx2

0xb8dc,	// (0x0005d47c) list_medium_line_t4_g4

0xb8dc,	// (0x0005d47c) list_medium_line_x2

0xb8dc,	// (0x0005d47c) list_medium_line_x2_t2_g2

0xb8dc,	// (0x0005d47c) list_medium_line_x2_t2_g3

0xb8dc,	// (0x0005d47c) list_medium_line_x2_t2_g4

0xb8dc,	// (0x0005d47c) list_medium_line_x2_t3

0xb8dc,	// (0x0005d47c) list_medium_line_x2_t3_g2

0xb8dc,	// (0x0005d47c) list_medium_line_x2_t3_g3

0xb8dc,	// (0x0005d47c) list_medium_line_x2_t3_g4

0xb8dc,	// (0x0005d47c) list_medium_line_x2_t4_g2

0xb8dc,	// (0x0005d47c) list_medium_line_x2_t4_g4

0xb8dc,	// (0x0005d47c) list_medium_line_x3

0xb8dc,	// (0x0005d47c) list_medium_line_x3_t4

0xb8dc,	// (0x0005d47c) list_medium_line_x3_t4_g4

0xb8dc,	// (0x0005d47c) list_medium_line_x4_t4

0xb8dc,	// (0x0005d47c) list_medium_line_x4_t4_g7

0xb8dc,	// (0x0005d47c) list_medium_line_x4_t5

0x88e3,	// (0x0005a483) list_single_fs_dyc_pane_ParamLimits

0x88e3,	// (0x0005a483) list_single_fs_dyc_pane

0xbfdd,	// (0x0005db7d) list_medium_line_x4_t4_g7_g1_ParamLimits

0xbfdd,	// (0x0005db7d) list_medium_line_x4_t4_g7_g1

0xbfdd,	// (0x0005db7d) list_medium_line_x4_t4_g7_g2_ParamLimits

0xbfdd,	// (0x0005db7d) list_medium_line_x4_t4_g7_g2

0xbfdd,	// (0x0005db7d) list_medium_line_x4_t4_g7_g3_ParamLimits

0xbfdd,	// (0x0005db7d) list_medium_line_x4_t4_g7_g3

0xbfdd,	// (0x0005db7d) list_medium_line_x4_t4_g7_g4_ParamLimits

0xbfdd,	// (0x0005db7d) list_medium_line_x4_t4_g7_g4

0xbfdd,	// (0x0005db7d) list_medium_line_x4_t4_g7_g5_ParamLimits

0xbfdd,	// (0x0005db7d) list_medium_line_x4_t4_g7_g5

0xbfdd,	// (0x0005db7d) list_medium_line_x4_t4_g7_g6_ParamLimits

0xbfdd,	// (0x0005db7d) list_medium_line_x4_t4_g7_g6

0xbfeb,	// (0x0005db8b) list_medium_line_x4_t4_g7_g7_ParamLimits

0xbfeb,	// (0x0005db8b) list_medium_line_x4_t4_g7_g7

0x0006,

0xfaf3,	// (0x00061693) list_medium_line_x4_t4_g7_g_ParamLimits

0xfaf3,	// (0x00061693) list_medium_line_x4_t4_g7_g

0xc025,	// (0x0005dbc5) list_medium_line_x4_t4_g7_t1_ParamLimits

0xc025,	// (0x0005dbc5) list_medium_line_x4_t4_g7_t1

0xc025,	// (0x0005dbc5) list_medium_line_x4_t4_g7_t2_ParamLimits

0xc025,	// (0x0005dbc5) list_medium_line_x4_t4_g7_t2

0xc025,	// (0x0005dbc5) list_medium_line_x4_t4_g7_t3_ParamLimits

0xc025,	// (0x0005dbc5) list_medium_line_x4_t4_g7_t3

0xc039,	// (0x0005dbd9) list_medium_line_x4_t4_g7_t4_ParamLimits

0xc039,	// (0x0005dbd9) list_medium_line_x4_t4_g7_t4

0xc039,	// (0x0005dbd9) list_medium_line_x4_t4_g7_t5_ParamLimits

0xc039,	// (0x0005dbd9) list_medium_line_x4_t4_g7_t5

0x0004,

0xfb02,	// (0x000616a2) list_medium_line_x4_t4_g7_t_ParamLimits

0xfb02,	// (0x000616a2) list_medium_line_x4_t4_g7_t

0x9049,	// (0x0005abe9) list_single_dyc_row_pane_ParamLimits

0x9049,	// (0x0005abe9) list_single_dyc_row_pane

0x956e,	// (0x0005b10e) call5_gesture_pane_ParamLimits

0x956e,	// (0x0005b10e) call5_gesture_pane

0x95a2,	// (0x0005b142) call5_windows_pane_ParamLimits

0x95a2,	// (0x0005b142) call5_windows_pane

0x95f5,	// (0x0005b195) call5_swipe_1_pane_cp_ParamLimits

0x95f5,	// (0x0005b195) call5_swipe_1_pane_cp

0x9601,	// (0x0005b1a1) call5_swipe_2_pane_cp_ParamLimits

0x9601,	// (0x0005b1a1) call5_swipe_2_pane_cp

0xc22b,	// (0x0005ddcb) call5_image_pane_cp

0x960d,	// (0x0005b1ad) popup_call5_audio_first_window_cp_ParamLimits

0x960d,	// (0x0005b1ad) popup_call5_audio_first_window_cp

0x181a,	// (0x000533ba) call5_swipe_1_pane_g1_cp_ParamLimits

0x181a,	// (0x000533ba) call5_swipe_1_pane_g1_cp

0x1827,	// (0x000533c7) call5_swipe_1_pane_g2_cp

0x182f,	// (0x000533cf) call5_swipe_1_pane_t1_cp_ParamLimits

0x182f,	// (0x000533cf) call5_swipe_1_pane_t1_cp

0x181a,	// (0x000533ba) call5_swipe_2_pane_g1_cp_ParamLimits

0x181a,	// (0x000533ba) call5_swipe_2_pane_g1_cp

0x1844,	// (0x000533e4) call5_swipe_2_pane_g2_cp

0x184c,	// (0x000533ec) call5_swipe_2_pane_t1_cp_ParamLimits

0x184c,	// (0x000533ec) call5_swipe_2_pane_t1_cp

0xbf76,	// (0x0005db16) main_sp_fs_email_pane

0x1861,	// (0x00053401) main_sp_fs_listscroll_pane_te

0x961b,	// (0x0005b1bb) popup_sp_fs_action_menu_pane_ParamLimits

0x961b,	// (0x0005b1bb) popup_sp_fs_action_menu_pane

0xc01b,	// (0x0005dbbb) bg_sp_fs_ctrlbar_pane_g1

0x186a,	// (0x0005340a) bg_sp_fs_ctrlbar_ddmenu_pane_g1

0x1873,	// (0x00053413) bg_sp_fs_ctrlbar_ddmenu_pane_g2

0x187c,	// (0x0005341c) bg_sp_fs_ctrlbar_ddmenu_pane_g3

0xc01b,	// (0x0005dbbb) bg_sp_fs_ctrlbar_ddmenu_pane_g4

0x0003,

0xfbf0,	// (0x00061790) bg_sp_fs_ctrlbar_ddmenu_pane_g

0xe433,	// (0x0005ffd3) bg_sp_fs_ctrlbar_ddmenu_pane_ParamLimits

0xe433,	// (0x0005ffd3) bg_sp_fs_ctrlbar_ddmenu_pane

0x1885,	// (0x00053425) main_sp_fs_ctrlbar_ddmenu_pane_g1_ParamLimits

0x1885,	// (0x00053425) main_sp_fs_ctrlbar_ddmenu_pane_g1

0x1891,	// (0x00053431) main_sp_fs_ctrlbar_ddmenu_pane_g2_ParamLimits

0x1891,	// (0x00053431) main_sp_fs_ctrlbar_ddmenu_pane_g2

0x0001,

0xfbf9,	// (0x00061799) main_sp_fs_ctrlbar_ddmenu_pane_g_ParamLimits

0xfbf9,	// (0x00061799) main_sp_fs_ctrlbar_ddmenu_pane_g

0x189d,	// (0x0005343d) main_sp_fs_ctrlbar_ddmenu_pane_t1_ParamLimits

0x189d,	// (0x0005343d) main_sp_fs_ctrlbar_ddmenu_pane_t1

0xc01b,	// (0x0005dbbb) list_medium_line_t2_right_icon_g1

0xcd02,	// (0x0005e8a2) list_medium_line_t2_right_icon_t1

0xcd02,	// (0x0005e8a2) list_medium_line_t2_right_icon_t2

0x0001,

0xf27e,	// (0x00060e1e) list_medium_line_t2_right_icon_t

0xd3a2,	// (0x0005ef42) bg_sp_fs_ctrlbar_pane_ParamLimits

0xd3a2,	// (0x0005ef42) bg_sp_fs_ctrlbar_pane

0x96b6,	// (0x0005b256) main_sp_fs_ctrlbar_button_pane_cp01

0x96be,	// (0x0005b25e) main_sp_fs_ctrlbar_ddmenu_pane

0x18ef,	// (0x0005348f) main_sp_fs_ctrlbar_pane_g1

0x18fb,	// (0x0005349b) main_sp_fs_ctrlbar_pane_g2

0x0003,

0xfbfe,	// (0x0006179e) main_sp_fs_ctrlbar_pane_g

0x96fa,	// (0x0005b29a) main_sp_fs_ctrlbar_pane_t1

0x9735,	// (0x0005b2d5) main_sp_fs_ctrlbar_pane

0x974b,	// (0x0005b2eb) main_sp_fs_listscroll_pane_te_cp01

0x9766,	// (0x0005b306) popup_sp_fs_action_menu_pane_cp01_ParamLimits

0x9766,	// (0x0005b306) popup_sp_fs_action_menu_pane_cp01

0xbf76,	// (0x0005db16) bg_sp_fs_highlight_list_pane_cp01_ParamLimits

0xbf76,	// (0x0005db16) bg_sp_fs_highlight_list_pane_cp01

0x0471,	// (0x00052011) sp_fs_action_menu_list_gene_pane_g1_ParamLimits

0x0471,	// (0x00052011) sp_fs_action_menu_list_gene_pane_g1

0x1922,	// (0x000534c2) sp_fs_action_menu_list_gene_pane_g2_ParamLimits

0x1922,	// (0x000534c2) sp_fs_action_menu_list_gene_pane_g2

0x0001,

0xfc0c,	// (0x000617ac) sp_fs_action_menu_list_gene_pane_g_ParamLimits

0xfc0c,	// (0x000617ac) sp_fs_action_menu_list_gene_pane_g

0x0480,	// (0x00052020) sp_fs_action_menu_list_gene_pane_t1_ParamLimits

0x0480,	// (0x00052020) sp_fs_action_menu_list_gene_pane_t1

0x0498,	// (0x00052038) sp_fs_action_menu_list_gene_pane_ParamLimits

0x0498,	// (0x00052038) sp_fs_action_menu_list_gene_pane

0x192f,	// (0x000534cf) popup_sp_fs_action_menu_bg_pane_ParamLimits

0x192f,	// (0x000534cf) popup_sp_fs_action_menu_bg_pane

0x04b7,	// (0x00052057) sp_fs_action_menu_list_pane_ParamLimits

0x04b7,	// (0x00052057) sp_fs_action_menu_list_pane

0x9786,	// (0x0005b326) sp_fs_scroll_pane_cp01_ParamLimits

0x9786,	// (0x0005b326) sp_fs_scroll_pane_cp01

0xcd02,	// (0x0005e8a2) list_medium_line_plain_t2_t1

0xcd02,	// (0x0005e8a2) list_medium_line_plain_t2_t2

0x0001,

0xf27e,	// (0x00060e1e) list_medium_line_plain_t2_t

0xcd02,	// (0x0005e8a2) list_medium_line_plain_t3_t1

0xcd02,	// (0x0005e8a2) list_medium_line_plain_t3_t2

0xcd02,	// (0x0005e8a2) list_medium_line_plain_t3_t3

0x0002,

0xf27c,	// (0x00060e1c) list_medium_line_plain_t3_t

0xbfdd,	// (0x0005db7d) list_medium_line_x2_t2_g2_g1_ParamLimits

0xbfdd,	// (0x0005db7d) list_medium_line_x2_t2_g2_g1

0xbfdd,	// (0x0005db7d) list_medium_line_x2_t2_g2_g2_ParamLimits

0xbfdd,	// (0x0005db7d) list_medium_line_x2_t2_g2_g2

0x0001,

0xf1bc,	// (0x00060d5c) list_medium_line_x2_t2_g2_g_ParamLimits

0xf1bc,	// (0x00060d5c) list_medium_line_x2_t2_g2_g

0xc025,	// (0x0005dbc5) list_medium_line_x2_t2_g2_t1_ParamLimits

0xc025,	// (0x0005dbc5) list_medium_line_x2_t2_g2_t1

0xc025,	// (0x0005dbc5) list_medium_line_x2_t2_g2_t2_ParamLimits

0xc025,	// (0x0005dbc5) list_medium_line_x2_t2_g2_t2

0x0001,

0xf231,	// (0x00060dd1) list_medium_line_x2_t2_g2_t_ParamLimits

0xf231,	// (0x00060dd1) list_medium_line_x2_t2_g2_t

0xbfdd,	// (0x0005db7d) list_medium_line_x2_t4_g2_g1_ParamLimits

0xbfdd,	// (0x0005db7d) list_medium_line_x2_t4_g2_g1

0xbfdd,	// (0x0005db7d) list_medium_line_x2_t4_g2_g2_ParamLimits

0xbfdd,	// (0x0005db7d) list_medium_line_x2_t4_g2_g2

0x0001,

0xf1bc,	// (0x00060d5c) list_medium_line_x2_t4_g2_g_ParamLimits

0xf1bc,	// (0x00060d5c) list_medium_line_x2_t4_g2_g

0xc025,	// (0x0005dbc5) list_medium_line_x2_t4_g2_t1_ParamLimits

0xc025,	// (0x0005dbc5) list_medium_line_x2_t4_g2_t1

0xc025,	// (0x0005dbc5) list_medium_line_x2_t4_g2_t2_ParamLimits

0xc025,	// (0x0005dbc5) list_medium_line_x2_t4_g2_t2

0xc025,	// (0x0005dbc5) list_medium_line_x2_t4_g2_t3_ParamLimits

0xc025,	// (0x0005dbc5) list_medium_line_x2_t4_g2_t3

0xc025,	// (0x0005dbc5) list_medium_line_x2_t4_g2_t4_ParamLimits

0xc025,	// (0x0005dbc5) list_medium_line_x2_t4_g2_t4

0x0003,

0xf1ca,	// (0x00060d6a) list_medium_line_x2_t4_g2_t_ParamLimits

0xf1ca,	// (0x00060d6a) list_medium_line_x2_t4_g2_t

0xc01b,	// (0x0005dbbb) list_medium_line_t3_right_iconx2_g1

0xc01b,	// (0x0005dbbb) list_medium_line_t3_right_iconx2_g2

0xc01b,	// (0x0005dbbb) list_medium_line_t3_right_iconx2_g3

0x0002,

0xf398,	// (0x00060f38) list_medium_line_t3_right_iconx2_g

0xcd02,	// (0x0005e8a2) list_medium_line_t3_right_iconx2_t1

0xcd02,	// (0x0005e8a2) list_medium_line_t3_right_iconx2_t2

0x0001,

0xf27e,	// (0x00060e1e) list_medium_line_t3_right_iconx2_t

0xbfdd,	// (0x0005db7d) list_medium_line_x3_t4_g4_g1_ParamLimits

0xbfdd,	// (0x0005db7d) list_medium_line_x3_t4_g4_g1

0xbfdd,	// (0x0005db7d) list_medium_line_x3_t4_g4_g2_ParamLimits

0xbfdd,	// (0x0005db7d) list_medium_line_x3_t4_g4_g2

0xbfdd,	// (0x0005db7d) list_medium_line_x3_t4_g4_g3_ParamLimits

0xbfdd,	// (0x0005db7d) list_medium_line_x3_t4_g4_g3

0xbfdd,	// (0x0005db7d) list_medium_line_x3_t4_g4_g4_ParamLimits

0xbfdd,	// (0x0005db7d) list_medium_line_x3_t4_g4_g4

0x0003,

0xf1c1,	// (0x00060d61) list_medium_line_x3_t4_g4_g_ParamLimits

0xf1c1,	// (0x00060d61) list_medium_line_x3_t4_g4_g

0xc025,	// (0x0005dbc5) list_medium_line_x3_t4_g4_t1_ParamLimits

0xc025,	// (0x0005dbc5) list_medium_line_x3_t4_g4_t1

0xc025,	// (0x0005dbc5) list_medium_line_x3_t4_g4_t2_ParamLimits

0xc025,	// (0x0005dbc5) list_medium_line_x3_t4_g4_t2

0xc025,	// (0x0005dbc5) list_medium_line_x3_t4_g4_t3_ParamLimits

0xc025,	// (0x0005dbc5) list_medium_line_x3_t4_g4_t3

0xc025,	// (0x0005dbc5) list_medium_line_x3_t4_g4_t4_ParamLimits

0xc025,	// (0x0005dbc5) list_medium_line_x3_t4_g4_t4

0x0003,

0xf1ca,	// (0x00060d6a) list_medium_line_x3_t4_g4_t_ParamLimits

0xf1ca,	// (0x00060d6a) list_medium_line_x3_t4_g4_t

0x97ac,	// (0x0005b34c) list_single_dyc_row_text_pane_t1_ParamLimits

0x97ac,	// (0x0005b34c) list_single_dyc_row_text_pane_t1

0x97e3,	// (0x0005b383) list_single_dyc_row_text_pane_t2_ParamLimits

0x97e3,	// (0x0005b383) list_single_dyc_row_text_pane_t2

0x04d7,	// (0x00052077) list_single_dyc_row_text_pane_t3_ParamLimits

0x04d7,	// (0x00052077) list_single_dyc_row_text_pane_t3

0x0005,

0xfc11,	// (0x000617b1) list_single_dyc_row_text_pane_t_ParamLimits

0xfc11,	// (0x000617b1) list_single_dyc_row_text_pane_t

0x04fb,	// (0x0005209b) list_single_dyc_row_pane_g1_ParamLimits

0x04fb,	// (0x0005209b) list_single_dyc_row_pane_g1

0x0507,	// (0x000520a7) list_single_dyc_row_pane_g2_ParamLimits

0x0507,	// (0x000520a7) list_single_dyc_row_pane_g2

0x0513,	// (0x000520b3) list_single_dyc_row_pane_g3_ParamLimits

0x0513,	// (0x000520b3) list_single_dyc_row_pane_g3

0x051f,	// (0x000520bf) list_single_dyc_row_pane_g4_ParamLimits

0x051f,	// (0x000520bf) list_single_dyc_row_pane_g4

0x0003,

0xfc1e,	// (0x000617be) list_single_dyc_row_pane_g_ParamLimits

0xfc1e,	// (0x000617be) list_single_dyc_row_pane_g

0x052b,	// (0x000520cb) list_single_dyc_row_text_pane_ParamLimits

0x052b,	// (0x000520cb) list_single_dyc_row_text_pane

0xb8dc,	// (0x0005d47c) bg_sp_fs_scroll_pane

0x193d,	// (0x000534dd) thumb_sp_fs_scroll_pane

0xbfdd,	// (0x0005db7d) list_medium_line_g1_ParamLimits

0xbfdd,	// (0x0005db7d) list_medium_line_g1

0xc025,	// (0x0005dbc5) list_medium_line_t1_ParamLimits

0xc025,	// (0x0005dbc5) list_medium_line_t1

0xbfdd,	// (0x0005db7d) list_medium_line_x2_g1_ParamLimits

0xbfdd,	// (0x0005db7d) list_medium_line_x2_g1

0xbfdd,	// (0x0005db7d) list_medium_line_x2_g2_ParamLimits

0xbfdd,	// (0x0005db7d) list_medium_line_x2_g2

0x0001,

0xf1bc,	// (0x00060d5c) list_medium_line_x2_g_ParamLimits

0xf1bc,	// (0x00060d5c) list_medium_line_x2_g

0xc025,	// (0x0005dbc5) list_medium_line_x2_t1_ParamLimits

0xc025,	// (0x0005dbc5) list_medium_line_x2_t1

0xbfdd,	// (0x0005db7d) list_medium_line_x3_g1_ParamLimits

0xbfdd,	// (0x0005db7d) list_medium_line_x3_g1

0x1946,	// (0x000534e6) list_medium_line_x3_g2_ParamLimits

0x1946,	// (0x000534e6) list_medium_line_x3_g2

0x0001,

0xfc27,	// (0x000617c7) list_medium_line_x3_g_ParamLimits

0xfc27,	// (0x000617c7) list_medium_line_x3_g

0x1954,	// (0x000534f4) list_medium_line_x3_t1_ParamLimits

0x1954,	// (0x000534f4) list_medium_line_x3_t1

0x1968,	// (0x00053508) thumb_sp_fs_scroll_pane_g1

0x1971,	// (0x00053511) thumb_sp_fs_scroll_pane_g2

0x197a,	// (0x0005351a) thumb_sp_fs_scroll_pane_g3

0x0002,

0xfc2c,	// (0x000617cc) thumb_sp_fs_scroll_pane_g

0x1968,	// (0x00053508) bg_sp_fs_scroll_pane_g1

0x1971,	// (0x00053511) bg_sp_fs_scroll_pane_g2

0x197a,	// (0x0005351a) bg_sp_fs_scroll_pane_g3

0x0002,

0xfc2c,	// (0x000617cc) bg_sp_fs_scroll_pane_g

0xbfdd,	// (0x0005db7d) list_medium_line_x2_t3_g4_g1_ParamLimits

0xbfdd,	// (0x0005db7d) list_medium_line_x2_t3_g4_g1

0xbfdd,	// (0x0005db7d) list_medium_line_x2_t3_g4_g2_ParamLimits

0xbfdd,	// (0x0005db7d) list_medium_line_x2_t3_g4_g2

0xbfdd,	// (0x0005db7d) list_medium_line_x2_t3_g4_g3_ParamLimits

0xbfdd,	// (0x0005db7d) list_medium_line_x2_t3_g4_g3

0xbfdd,	// (0x0005db7d) list_medium_line_x2_t3_g4_g4_ParamLimits

0xbfdd,	// (0x0005db7d) list_medium_line_x2_t3_g4_g4

0x0003,

0xf1c1,	// (0x00060d61) list_medium_line_x2_t3_g4_g_ParamLimits

0xf1c1,	// (0x00060d61) list_medium_line_x2_t3_g4_g

0xc025,	// (0x0005dbc5) list_medium_line_x2_t3_g4_t1_ParamLimits

0xc025,	// (0x0005dbc5) list_medium_line_x2_t3_g4_t1

0xc025,	// (0x0005dbc5) list_medium_line_x2_t3_g4_t2_ParamLimits

0xc025,	// (0x0005dbc5) list_medium_line_x2_t3_g4_t2

0xc025,	// (0x0005dbc5) list_medium_line_x2_t3_g4_t3_ParamLimits

0xc025,	// (0x0005dbc5) list_medium_line_x2_t3_g4_t3

0x0002,

0xf1b5,	// (0x00060d55) list_medium_line_x2_t3_g4_t_ParamLimits

0xf1b5,	// (0x00060d55) list_medium_line_x2_t3_g4_t

0xbfdd,	// (0x0005db7d) list_medium_line_g2_g1_ParamLimits

0xbfdd,	// (0x0005db7d) list_medium_line_g2_g1

0xbfdd,	// (0x0005db7d) list_medium_line_g2_g2_ParamLimits

0xbfdd,	// (0x0005db7d) list_medium_line_g2_g2

0x0001,

0xf1bc,	// (0x00060d5c) list_medium_line_g2_g_ParamLimits

0xf1bc,	// (0x00060d5c) list_medium_line_g2_g

0xc025,	// (0x0005dbc5) list_medium_line_g2_t1_ParamLimits

0xc025,	// (0x0005dbc5) list_medium_line_g2_t1

0xbfdd,	// (0x0005db7d) list_medium_line_t3_g2_g1_ParamLimits

0xbfdd,	// (0x0005db7d) list_medium_line_t3_g2_g1

0xbfdd,	// (0x0005db7d) list_medium_line_t3_g2_g2_ParamLimits

0xbfdd,	// (0x0005db7d) list_medium_line_t3_g2_g2

0x0001,

0xf1bc,	// (0x00060d5c) list_medium_line_t3_g2_g_ParamLimits

0xf1bc,	// (0x00060d5c) list_medium_line_t3_g2_g

0xc025,	// (0x0005dbc5) list_medium_line_t3_g2_t1_ParamLimits

0xc025,	// (0x0005dbc5) list_medium_line_t3_g2_t1

0xc025,	// (0x0005dbc5) list_medium_line_t3_g2_t2_ParamLimits

0xc025,	// (0x0005dbc5) list_medium_line_t3_g2_t2

0xc025,	// (0x0005dbc5) list_medium_line_t3_g2_t3_ParamLimits

0xc025,	// (0x0005dbc5) list_medium_line_t3_g2_t3

0x0002,

0xf1b5,	// (0x00060d55) list_medium_line_t3_g2_t_ParamLimits

0xf1b5,	// (0x00060d55) list_medium_line_t3_g2_t

0xc01b,	// (0x0005dbbb) list_medium_line_right_icon_g1

0xcd02,	// (0x0005e8a2) list_medium_line_right_icon_t1

0xbfdd,	// (0x0005db7d) list_medium_line_t2_g1_ParamLimits

0xbfdd,	// (0x0005db7d) list_medium_line_t2_g1

0xc025,	// (0x0005dbc5) list_medium_line_t2_t1_ParamLimits

0xc025,	// (0x0005dbc5) list_medium_line_t2_t1

0xc025,	// (0x0005dbc5) list_medium_line_t2_t2_ParamLimits

0xc025,	// (0x0005dbc5) list_medium_line_t2_t2

0x0001,

0xf231,	// (0x00060dd1) list_medium_line_t2_t_ParamLimits

0xf231,	// (0x00060dd1) list_medium_line_t2_t

0xbfdd,	// (0x0005db7d) list_medium_line_t3_g1_ParamLimits

0xbfdd,	// (0x0005db7d) list_medium_line_t3_g1

0xc025,	// (0x0005dbc5) list_medium_line_t3_t1_ParamLimits

0xc025,	// (0x0005dbc5) list_medium_line_t3_t1

0xc025,	// (0x0005dbc5) list_medium_line_t3_t2_ParamLimits

0xc025,	// (0x0005dbc5) list_medium_line_t3_t2

0xc025,	// (0x0005dbc5) list_medium_line_t3_t3_ParamLimits

0xc025,	// (0x0005dbc5) list_medium_line_t3_t3

0x0002,

0xf1b5,	// (0x00060d55) list_medium_line_t3_t_ParamLimits

0xf1b5,	// (0x00060d55) list_medium_line_t3_t

0xbfdd,	// (0x0005db7d) list_medium_line_g3_g1_ParamLimits

0xbfdd,	// (0x0005db7d) list_medium_line_g3_g1

0xbfdd,	// (0x0005db7d) list_medium_line_g3_g2_ParamLimits

0xbfdd,	// (0x0005db7d) list_medium_line_g3_g2

0xbfdd,	// (0x0005db7d) list_medium_line_g3_g3_ParamLimits

0xbfdd,	// (0x0005db7d) list_medium_line_g3_g3

0x0002,

0xf1ae,	// (0x00060d4e) list_medium_line_g3_g_ParamLimits

0xf1ae,	// (0x00060d4e) list_medium_line_g3_g

0xc025,	// (0x0005dbc5) list_medium_line_g3_t1_ParamLimits

0xc025,	// (0x0005dbc5) list_medium_line_g3_t1

0xbfdd,	// (0x0005db7d) list_medium_line_t2_g3_g1_ParamLimits

0xbfdd,	// (0x0005db7d) list_medium_line_t2_g3_g1

0xbfdd,	// (0x0005db7d) list_medium_line_t2_g3_g2_ParamLimits

0xbfdd,	// (0x0005db7d) list_medium_line_t2_g3_g2

0xbfdd,	// (0x0005db7d) list_medium_line_t2_g3_g3_ParamLimits

0xbfdd,	// (0x0005db7d) list_medium_line_t2_g3_g3

0x0002,

0xf1ae,	// (0x00060d4e) list_medium_line_t2_g3_g_ParamLimits

0xf1ae,	// (0x00060d4e) list_medium_line_t2_g3_g

0xc025,	// (0x0005dbc5) list_medium_line_t2_g3_t1_ParamLimits

0xc025,	// (0x0005dbc5) list_medium_line_t2_g3_t1

0xc025,	// (0x0005dbc5) list_medium_line_t2_g3_t2_ParamLimits

0xc025,	// (0x0005dbc5) list_medium_line_t2_g3_t2

0x0001,

0xf231,	// (0x00060dd1) list_medium_line_t2_g3_t_ParamLimits

0xf231,	// (0x00060dd1) list_medium_line_t2_g3_t

0xbfdd,	// (0x0005db7d) list_medium_line_t3_g3_g1_ParamLimits

0xbfdd,	// (0x0005db7d) list_medium_line_t3_g3_g1

0xbfdd,	// (0x0005db7d) list_medium_line_t3_g3_g2_ParamLimits

0xbfdd,	// (0x0005db7d) list_medium_line_t3_g3_g2

0xbfdd,	// (0x0005db7d) list_medium_line_t3_g3_g3_ParamLimits

0xbfdd,	// (0x0005db7d) list_medium_line_t3_g3_g3

0x0002,

0xf1ae,	// (0x00060d4e) list_medium_line_t3_g3_g_ParamLimits

0xf1ae,	// (0x00060d4e) list_medium_line_t3_g3_g

0xc025,	// (0x0005dbc5) list_medium_line_t3_g3_t1_ParamLimits

0xc025,	// (0x0005dbc5) list_medium_line_t3_g3_t1

0xc025,	// (0x0005dbc5) list_medium_line_t3_g3_t2_ParamLimits

0xc025,	// (0x0005dbc5) list_medium_line_t3_g3_t2

0xc025,	// (0x0005dbc5) list_medium_line_t3_g3_t3_ParamLimits

0xc025,	// (0x0005dbc5) list_medium_line_t3_g3_t3

0x0002,

0xf1b5,	// (0x00060d55) list_medium_line_t3_g3_t_ParamLimits

0xf1b5,	// (0x00060d55) list_medium_line_t3_g3_t

0xc01b,	// (0x0005dbbb) list_medium_line_right_iconx2_g1

0xc01b,	// (0x0005dbbb) list_medium_line_right_iconx2_g2

0x0001,

0xf0af,	// (0x00060c4f) list_medium_line_right_iconx2_g

0xcd02,	// (0x0005e8a2) list_medium_line_right_iconx2_t1

0xc01b,	// (0x0005dbbb) list_medium_line_t2_right_iconx2_g1

0xc01b,	// (0x0005dbbb) list_medium_line_t2_right_iconx2_g2

0x0001,

0xf0af,	// (0x00060c4f) list_medium_line_t2_right_iconx2_g

0xcd02,	// (0x0005e8a2) list_medium_line_t2_right_iconx2_t1

0xcd02,	// (0x0005e8a2) list_medium_line_t2_right_iconx2_t2

0x0001,

0xf27e,	// (0x00060e1e) list_medium_line_t2_right_iconx2_t

0xcd02,	// (0x0005e8a2) list_medium_line_x4_t4_t1

0xcd02,	// (0x0005e8a2) list_medium_line_x4_t4_t2

0xcd02,	// (0x0005e8a2) list_medium_line_x4_t4_t3

0xcd02,	// (0x0005e8a2) list_medium_line_x4_t4_t4

0x0003,

0xf283,	// (0x00060e23) list_medium_line_x4_t4_t

0x9930,	// (0x0005b4d0) tport_appsw_pane_ParamLimits

0x9930,	// (0x0005b4d0) tport_appsw_pane

0x993e,	// (0x0005b4de) tport_contact_pane_ParamLimits

0x993e,	// (0x0005b4de) tport_contact_pane

0x994e,	// (0x0005b4ee) tport_listscroll_pane_ParamLimits

0x994e,	// (0x0005b4ee) tport_listscroll_pane

0x995e,	// (0x0005b4fe) cell_tport_appsw_pane_ParamLimits

0x995e,	// (0x0005b4fe) cell_tport_appsw_pane

0xbfeb,	// (0x0005db8b) tport_appsw_pane_g1_ParamLimits

0xbfeb,	// (0x0005db8b) tport_appsw_pane_g1

0x1983,	// (0x00053523) tport_contact_pane_g1

0x1365,	// (0x00052f05) tport_contact_pane_t1

0x198c,	// (0x0005352c) tport_contact_pane_t2

0x0001,

0xfc33,	// (0x000617d3) tport_contact_pane_t

0x199a,	// (0x0005353a) list_tport_pane

0x19a3,	// (0x00053543) scroll_pane_cp_030

0x9991,	// (0x0005b531) cell_tport_appsw_pane_g1

0x99a1,	// (0x0005b541) cell_tport_appsw_pane_t1

0x99af,	// (0x0005b54f) grid_highlight_pane_cp019

0x99b7,	// (0x0005b557) list_tport_double_graphic_pane_ParamLimits

0x99b7,	// (0x0005b557) list_tport_double_graphic_pane

0xbf76,	// (0x0005db16) list_highlight_pane_cp023_ParamLimits

0xbf76,	// (0x0005db16) list_highlight_pane_cp023

0x99c8,	// (0x0005b568) list_tport_double_graphic_pane_g1_ParamLimits

0x99c8,	// (0x0005b568) list_tport_double_graphic_pane_g1

0x99d5,	// (0x0005b575) list_tport_double_graphic_pane_t1_ParamLimits

0x99d5,	// (0x0005b575) list_tport_double_graphic_pane_t1

0x99ea,	// (0x0005b58a) list_tport_double_graphic_pane_t2_ParamLimits

0x99ea,	// (0x0005b58a) list_tport_double_graphic_pane_t2

0x0001,

0xfc3f,	// (0x000617df) list_tport_double_graphic_pane_t_ParamLimits

0xfc3f,	// (0x000617df) list_tport_double_graphic_pane_t

0xb8dc,	// (0x0005d47c) main_cale_note_pane

0x7a91,	// (0x00059631) cell_vitu2_function_top_wide_pane_cp01_ParamLimits

0x7a91,	// (0x00059631) cell_vitu2_function_top_wide_pane_cp01

0x93ef,	// (0x0005af8f) wait_bar_pane_cp05_ParamLimits

0xbf76,	// (0x0005db16) listscroll_cmail_pane

0x19b4,	// (0x00053554) list_cmail_pane

0x99fc,	// (0x0005b59c) list_cmail_body_pane

0x9a23,	// (0x0005b5c3) list_single_cmail_header_caption_pane

0x9a4c,	// (0x0005b5ec) list_single_cmail_header_detail_pane_ParamLimits

0x9a4c,	// (0x0005b5ec) list_single_cmail_header_detail_pane

0x19cb,	// (0x0005356b) list_single_cmail_header_caption_pane_t1

0x9a86,	// (0x0005b626) list_single_cmail_header_detail_pane_g1_ParamLimits

0x9a86,	// (0x0005b626) list_single_cmail_header_detail_pane_g1

0x054a,	// (0x000520ea) list_single_cmail_header_detail_pane_g2_ParamLimits

0x054a,	// (0x000520ea) list_single_cmail_header_detail_pane_g2

0x0002,

0xfc44,	// (0x000617e4) list_single_cmail_header_detail_pane_g_ParamLimits

0xfc44,	// (0x000617e4) list_single_cmail_header_detail_pane_g

0x9a9c,	// (0x0005b63c) list_single_cmail_header_detail_pane_t1_ParamLimits

0x9a9c,	// (0x0005b63c) list_single_cmail_header_detail_pane_t1

0x9ad8,	// (0x0005b678) list_single_cmail_header_editor_pane_bg_ParamLimits

0x9ad8,	// (0x0005b678) list_single_cmail_header_editor_pane_bg

0x14ce,	// (0x0005306e) list_cmail_body_pane_g1

0x19ef,	// (0x0005358f) list_cmail_body_pane_t1

0x085f,	// (0x000523ff) list_single_cmail_header_editor_pane_bg_g1

0xc444,	// (0x0005dfe4) list_single_cmail_header_editor_pane_bg_g1_copy1

0x086f,	// (0x0005240f) list_single_cmail_header_editor_pane_bg_g1_copy2

0x0867,	// (0x00052407) list_single_cmail_header_editor_pane_bg_g1_copy3

0x0ace,	// (0x0005266e) list_single_cmail_header_editor_pane_bg_g1_copy4

0x088f,	// (0x0005242f) list_single_cmail_header_editor_pane_bg_g1_copy4_copy1

0x087f,	// (0x0005241f) list_single_cmail_header_editor_pane_bg_g1_copy4_copy2

0x0887,	// (0x00052427) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3

0xc424,	// (0x0005dfc4) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3_copy1

0x9aef,	// (0x0005b68f) calenote_gesture_pane_ParamLimits

0x9aef,	// (0x0005b68f) calenote_gesture_pane

0x9b09,	// (0x0005b6a9) calenote_window_pane_ParamLimits

0x9b09,	// (0x0005b6a9) calenote_window_pane

0x19fd,	// (0x0005359d) popup_note_window_cp01

0x9b21,	// (0x0005b6c1) calenote_swipe_1_pane_ParamLimits

0x9b21,	// (0x0005b6c1) calenote_swipe_1_pane

0x9601,	// (0x0005b1a1) calenote_swipe_2_pane_ParamLimits

0x9601,	// (0x0005b1a1) calenote_swipe_2_pane

0x181a,	// (0x000533ba) calenote_swipe_1_pane_g1_ParamLimits

0x181a,	// (0x000533ba) calenote_swipe_1_pane_g1

0x1a0f,	// (0x000535af) calenote_swipe_1_pane_g2_ParamLimits

0x1a0f,	// (0x000535af) calenote_swipe_1_pane_g2

0x0001,

0xfc50,	// (0x000617f0) calenote_swipe_1_pane_g_ParamLimits

0xfc50,	// (0x000617f0) calenote_swipe_1_pane_g

0x1a1b,	// (0x000535bb) calenote_swipe_1_pane_t1_ParamLimits

0x1a1b,	// (0x000535bb) calenote_swipe_1_pane_t1

0x181a,	// (0x000533ba) calenote_swipe_2_pane_g1_ParamLimits

0x181a,	// (0x000533ba) calenote_swipe_2_pane_g1

0x1a3a,	// (0x000535da) calenote_swipe_2_pane_g2_ParamLimits

0x1a3a,	// (0x000535da) calenote_swipe_2_pane_g2

0x0001,

0xfc55,	// (0x000617f5) calenote_swipe_2_pane_g_ParamLimits

0xfc55,	// (0x000617f5) calenote_swipe_2_pane_g

0x1a46,	// (0x000535e6) calenote_swipe_2_pane_t1_ParamLimits

0x1a46,	// (0x000535e6) calenote_swipe_2_pane_t1

0xb8dc,	// (0x0005d47c) main_mup_navstr_pane

0x6915,	// (0x000584b5) main_mup3_pane_t7_ParamLimits

0x6915,	// (0x000584b5) main_mup3_pane_t7

0x714c,	// (0x00058cec) main_mp4_pane_g6_ParamLimits

0x714c,	// (0x00058cec) main_mp4_pane_g6

0x74c0,	// (0x00059060) main_image3_pane_t4_ParamLimits

0x74c0,	// (0x00059060) main_image3_pane_t4

0x9b34,	// (0x0005b6d4) popup_navstr_preview_pane_ParamLimits

0x9b34,	// (0x0005b6d4) popup_navstr_preview_pane

0x9b40,	// (0x0005b6e0) scroll_navstr_pane_ParamLimits

0x9b40,	// (0x0005b6e0) scroll_navstr_pane

0xb8dc,	// (0x0005d47c) bg_popup_preview_window_pane_cp04

0x1a6d,	// (0x0005360d) popup_navstr_preview_pane_t1

0x9b4c,	// (0x0005b6ec) scroll_navstr_pane_g1_ParamLimits

0x9b4c,	// (0x0005b6ec) scroll_navstr_pane_g1

0x9b59,	// (0x0005b6f9) scroll_navstr_pane_t1_ParamLimits

0x9b59,	// (0x0005b6f9) scroll_navstr_pane_t1

0x1a06,	// (0x000535a6) bg_button_pane_cp014

0x1a06,	// (0x000535a6) bg_button_pane_cp030

0x9514,	// (0x0005b0b4) list_double_fisheye_pane_g4_ParamLimits

0x9514,	// (0x0005b0b4) list_double_fisheye_pane_g4

0x9520,	// (0x0005b0c0) list_double_fisheye_pane_g5_ParamLimits

0x9520,	// (0x0005b0c0) list_double_fisheye_pane_g5

0x142b,	// (0x00052fcb) sp_fs_scroll_pane_cp03

0x18ef,	// (0x0005348f) main_sp_fs_ctrlbar_pane_g1_ParamLimits

0x18fb,	// (0x0005349b) main_sp_fs_ctrlbar_pane_g2_ParamLimits

0xfbfe,	// (0x0006179e) main_sp_fs_ctrlbar_pane_g_ParamLimits

0x96fa,	// (0x0005b29a) main_sp_fs_ctrlbar_pane_t1_ParamLimits

0x19c3,	// (0x00053563) sp_fs_scroll_pane_cp02

0xc173,	// (0x0005dd13) popup_sp_fs_calendar_preview_list_single_pane_ParamLimits

0xc173,	// (0x0005dd13) popup_sp_fs_calendar_preview_list_single_pane

0xb8dc,	// (0x0005d47c) main_cam6_pano_pane

0x5e60,	// (0x00057a00) main_mup3_pane_ParamLimits

0xb8dc,	// (0x0005d47c) main_phacti_pane

0x92c4,	// (0x0005ae64) bg_button_pane_cp11

0x92dc,	// (0x0005ae7c) main_mobtv_info_pane_g2_ParamLimits

0x92dc,	// (0x0005ae7c) main_mobtv_info_pane_g2

0x0001,

0xfb63,	// (0x00061703) main_mobtv_info_pane_g_ParamLimits

0xfb63,	// (0x00061703) main_mobtv_info_pane_g

0xc039,	// (0x0005dbd9) sc_clock_pane_t5_ParamLimits

0xc039,	// (0x0005dbd9) sc_clock_pane_t5

0xd3c4,	// (0x0005ef64) main_radioblah_pane_g1_ParamLimits

0xd3b0,	// (0x0005ef50) main_radioblah_pane_t3_ParamLimits

0xd3b0,	// (0x0005ef50) main_radioblah_pane_t3

0xd3b0,	// (0x0005ef50) main_radioblah_pane_t4_ParamLimits

0xd3b0,	// (0x0005ef50) main_radioblah_pane_t4

0xbfcf,	// (0x0005db6f) main_radioblah_text_pane_ParamLimits

0xbfcf,	// (0x0005db6f) main_radioblah_text_pane

0x1712,	// (0x000532b2) main_radioblah_info_pane_g1_ParamLimits

0x1756,	// (0x000532f6) main_radioblah_info_pane_t4_ParamLimits

0x1756,	// (0x000532f6) main_radioblah_info_pane_t4

0xbf76,	// (0x0005db16) main_sp_fs_calendar_pane

0x9b6b,	// (0x0005b70b) main_phacti_pane_g1

0x9b73,	// (0x0005b713) phacti_note_pane_ParamLimits

0x9b73,	// (0x0005b713) phacti_note_pane

0x1a96,	// (0x00053636) phacti_term_pane_ParamLimits

0x1a96,	// (0x00053636) phacti_term_pane

0x1aab,	// (0x0005364b) phacti_note_pane_t1_ParamLimits

0x1aab,	// (0x0005364b) phacti_note_pane_t1

0x057a,	// (0x0005211a) phacti_term_pane_g1

0x0582,	// (0x00052122) phacti_term_pane_t1_ParamLimits

0x0582,	// (0x00052122) phacti_term_pane_t1

0x1ac2,	// (0x00053662) popup_sp_fs_calendar_preview_list_single_pane_g1

0xc212,	// (0x0005ddb2) popup_sp_fs_calendar_preview_list_single_pane_g2

0x0001,

0xfc5f,	// (0x000617ff) popup_sp_fs_calendar_preview_list_single_pane_g

0x1aca,	// (0x0005366a) popup_sp_fs_calendar_preview_list_single_pane_t1_ParamLimits

0x1aca,	// (0x0005366a) popup_sp_fs_calendar_preview_list_single_pane_t1

0x1ae0,	// (0x00053680) aid_popup_sp_fs_bg_corner_pane

0xc01b,	// (0x0005dbbb) popup_sp_fs_calendar_preview_bg_pane_g1

0xb8dc,	// (0x0005d47c) popup_sp_fs_calendar_preview_bg_pane

0x1ae8,	// (0x00053688) popup_sp_fs_calendar_preview_list_pane

0xd3a2,	// (0x0005ef42) bg_main_sp_fs_cale_pane_ParamLimits

0xd3a2,	// (0x0005ef42) bg_main_sp_fs_cale_pane

0x05b5,	// (0x00052155) listscroll_cale_mrui_pane_ParamLimits

0x05b5,	// (0x00052155) listscroll_cale_mrui_pane

0x05ca,	// (0x0005216a) listscroll_sp_fs_schedule_track_pane

0x05d3,	// (0x00052173) main_sp_fs_ctrlbar_pane_cp01_ParamLimits

0x05d3,	// (0x00052173) main_sp_fs_ctrlbar_pane_cp01

0x1af0,	// (0x00053690) main_sp_fs_ribbon_pane

0x05e6,	// (0x00052186) popup_sp_fs_cale_preview_window

0x9bd6,	// (0x0005b776) list_single_sp_fs_schedule_track_pane_ParamLimits

0x9bd6,	// (0x0005b776) list_single_sp_fs_schedule_track_pane

0xbfcf,	// (0x0005db6f) bg_sp_fs_highlight_list_pane_cp03_ParamLimits

0xbfcf,	// (0x0005db6f) bg_sp_fs_highlight_list_pane_cp03

0x9bf6,	// (0x0005b796) list_single_sp_fs_schedule_track_pane_g1_ParamLimits

0x9bf6,	// (0x0005b796) list_single_sp_fs_schedule_track_pane_g1

0x9c02,	// (0x0005b7a2) list_single_sp_fs_schedule_track_pane_g2_ParamLimits

0x9c02,	// (0x0005b7a2) list_single_sp_fs_schedule_track_pane_g2

0x0001,

0xfc64,	// (0x00061804) list_single_sp_fs_schedule_track_pane_g_ParamLimits

0xfc64,	// (0x00061804) list_single_sp_fs_schedule_track_pane_g

0x9c0e,	// (0x0005b7ae) list_single_sp_fs_schedule_track_pane_t1_ParamLimits

0x9c0e,	// (0x0005b7ae) list_single_sp_fs_schedule_track_pane_t1

0x9c26,	// (0x0005b7c6) sp_fs_schedule_track_pane_ParamLimits

0x9c26,	// (0x0005b7c6) sp_fs_schedule_track_pane

0x1af8,	// (0x00053698) sp_fs_schedule_track_pane_g1

0x1b00,	// (0x000536a0) sp_fs_schedule_track_pane_g2

0x1b08,	// (0x000536a8) sp_fs_schedule_track_pane_g3

0x1b10,	// (0x000536b0) sp_fs_schedule_track_pane_g4

0x1b18,	// (0x000536b8) sp_fs_schedule_track_pane_g5

0x0004,

0xfc69,	// (0x00061809) sp_fs_schedule_track_pane_g

0x085f,	// (0x000523ff) bg_sp_fs_schedule_viewer_highlight_g1

0xc444,	// (0x0005dfe4) bg_sp_fs_schedule_viewer_highlight_g2

0x0867,	// (0x00052407) bg_sp_fs_schedule_viewer_highlight_g3

0x086f,	// (0x0005240f) bg_sp_fs_schedule_viewer_highlight_g4

0x0ace,	// (0x0005266e) bg_sp_fs_schedule_viewer_highlight_g5

0x087f,	// (0x0005241f) bg_sp_fs_schedule_viewer_highlight_g6

0x0887,	// (0x00052427) bg_sp_fs_schedule_viewer_highlight_g7

0x088f,	// (0x0005242f) bg_sp_fs_schedule_viewer_highlight_g8

0xc424,	// (0x0005dfc4) bg_sp_fs_schedule_viewer_highlight_g9

0x0008,

0xfc74,	// (0x00061814) bg_sp_fs_schedule_viewer_highlight_g

0xb8dc,	// (0x0005d47c) bg_main_sp_fs_ribbon_pane

0x9c36,	// (0x0005b7d6) main_sp_fs_ribbon_pane_g1

0x1b20,	// (0x000536c0) main_sp_fs_ribbon_pane_t1

0x9c3f,	// (0x0005b7df) main_sp_fs_ribbon_pane_t2

0x1b2f,	// (0x000536cf) main_sp_fs_ribbon_pane_t3

0x0002,

0xfc87,	// (0x00061827) main_sp_fs_ribbon_pane_t

0x1b3e,	// (0x000536de) main_sp_fs_ribbon_scheduler_pane

0x1b46,	// (0x000536e6) bg_main_sp_fs_ribbon_pane_g1

0x1b4f,	// (0x000536ef) bg_main_sp_fs_ribbon_pane_g2

0x1b58,	// (0x000536f8) bg_main_sp_fs_ribbon_pane_g3

0x0002,

0xfc8e,	// (0x0006182e) bg_main_sp_fs_ribbon_pane_g

0x1b60,	// (0x00053700) main_sp_fs_ribbon_scheduler_pane_g1

0x1b69,	// (0x00053709) main_sp_fs_ribbon_scheduler_pane_g2

0x1b72,	// (0x00053712) main_sp_fs_ribbon_scheduler_pane_g3

0x0002,

0xfc95,	// (0x00061835) main_sp_fs_ribbon_scheduler_pane_g

0x1b7b,	// (0x0005371b) list_cale_mrui_pane

0x9c4e,	// (0x0005b7ee) sp_fs_scroll_pane_cp07_ParamLimits

0x9c4e,	// (0x0005b7ee) sp_fs_scroll_pane_cp07

0x9c6a,	// (0x0005b80a) bg_sp_fs_schedule_viewer_highlight_ParamLimits

0x9c6a,	// (0x0005b80a) bg_sp_fs_schedule_viewer_highlight

0x1b88,	// (0x00053728) list_single_sp_fs_schedule_track_pane_cp01

0x1b90,	// (0x00053730) list_sp_fs_schedule_track_pane

0x1b98,	// (0x00053738) sp_fs_scroll_pane_cp06_ParamLimits

0x1b98,	// (0x00053738) sp_fs_scroll_pane_cp06

0xc01b,	// (0x0005dbbb) bgmain_sp_fs_calendar_pane_g1

0x9c77,	// (0x0005b817) list_single_cale_mrui_pane_ParamLimits

0x9c77,	// (0x0005b817) list_single_cale_mrui_pane

0x05f8,	// (0x00052198) list_single_cale_mrui_row_pane_ParamLimits

0x05f8,	// (0x00052198) list_single_cale_mrui_row_pane

0x0605,	// (0x000521a5) list_single_cale_mrui_row_pane_g1_ParamLimits

0x0605,	// (0x000521a5) list_single_cale_mrui_row_pane_g1

0x063d,	// (0x000521dd) list_single_cale_mrui_row_pane_t1_ParamLimits

0x063d,	// (0x000521dd) list_single_cale_mrui_row_pane_t1

0x9ca5,	// (0x0005b845) list_single_cale_mrui_row_pane_t2_ParamLimits

0x9ca5,	// (0x0005b845) list_single_cale_mrui_row_pane_t2

0x064f,	// (0x000521ef) list_single_cale_mrui_row_pane_t3_ParamLimits

0x064f,	// (0x000521ef) list_single_cale_mrui_row_pane_t3

0x067e,	// (0x0005221e) list_single_cale_mrui_row_pane_t4_ParamLimits

0x067e,	// (0x0005221e) list_single_cale_mrui_row_pane_t4

0x0003,

0xfca3,	// (0x00061843) list_single_cale_mrui_row_pane_t_ParamLimits

0xfca3,	// (0x00061843) list_single_cale_mrui_row_pane_t

0x9d0b,	// (0x0005b8ab) list_single_cmail_header_editor_pane_bg_cp01_ParamLimits

0x9d0b,	// (0x0005b8ab) list_single_cmail_header_editor_pane_bg_cp01

0x9d33,	// (0x0005b8d3) list_single_cmail_header_editor_pane_bg_cp02_ParamLimits

0x9d33,	// (0x0005b8d3) list_single_cmail_header_editor_pane_bg_cp02

0x1bb7,	// (0x00053757) main_radioblah_text_pane_t1_ParamLimits

0x1bb7,	// (0x00053757) main_radioblah_text_pane_t1

0x1bd1,	// (0x00053771) cam6_indi_pane_cp01

0x1bd9,	// (0x00053779) cam6_mode_pane_cp01

0x1be1,	// (0x00053781) cam6_pano_pane

0x1bea,	// (0x0005378a) cam6_zoom_pane_cp01

0x1bf2,	// (0x00053792) cam6_pano_image_pane

0x1bfd,	// (0x0005379d) cam6_pano_pane_g1

0x14ce,	// (0x0005306e) cam6_pano_pane_g2

0x1c06,	// (0x000537a6) cam6_pano_pane_g3

0x1c0f,	// (0x000537af) cam6_pano_pane_g4

0xeecc,	// (0x00060a6c) cam6_pano_pane_g5

0x1c18,	// (0x000537b8) cam6_pano_pane_g6

0x0dc2,	// (0x00052962) cam6_pano_pane_g7

0x1c22,	// (0x000537c2) cam6_pano_pane_g8

0x1c2b,	// (0x000537cb) cam6_pano_pane_g9

0x0008,

0xfcac,	// (0x0006184c) cam6_pano_pane_g

0xb8dc,	// (0x0005d47c) main_browser_tag_pane

0x1a65,	// (0x00053605) grid_navstr_albumart_pane

0x1c36,	// (0x000537d6) cell_navstr_albumart_pane_ParamLimits

0x1c36,	// (0x000537d6) cell_navstr_albumart_pane

0x1c56,	// (0x000537f6) cell_navstr_albumart_pane_g1

0xe373,	// (0x0005ff13) cell_navstr_albumart_pane_g2

0xe383,	// (0x0005ff23) cell_navstr_albumart_pane_g3

0xe37b,	// (0x0005ff1b) cell_navstr_albumart_pane_g4

0x0003,

0xfcbf,	// (0x0006185f) cell_navstr_albumart_pane_g

0x9d4f,	// (0x0005b8ef) bt_list_pane_ParamLimits

0x9d4f,	// (0x0005b8ef) bt_list_pane

0x9d6f,	// (0x0005b90f) bt_list_pane_t1

0x9d7e,	// (0x0005b91e) bt_list_pane_t2

0x0001,

0xfcc8,	// (0x00061868) bt_list_pane_t

0xb8dc,	// (0x0005d47c) main_cale_prevew_pane

0x9d8d,	// (0x0005b92d) popup_cale_preview_window_ParamLimits

0x9d8d,	// (0x0005b92d) popup_cale_preview_window

0xbf76,	// (0x0005db16) bg_popup_preview_window_pane_cp05_ParamLimits

0xbf76,	// (0x0005db16) bg_popup_preview_window_pane_cp05

0x1c5e,	// (0x000537fe) list_cale_preview_pane_ParamLimits

0x1c5e,	// (0x000537fe) list_cale_preview_pane

0x9da6,	// (0x0005b946) list_double_cale_preview_pane_ParamLimits

0x9da6,	// (0x0005b946) list_double_cale_preview_pane

0x9db8,	// (0x0005b958) list_single_cale_preview_pane_ParamLimits

0x9db8,	// (0x0005b958) list_single_cale_preview_pane

0x9dce,	// (0x0005b96e) list_single_cale_preview_pane_g1

0x9dd6,	// (0x0005b976) list_single_cale_preview_pane_t1_ParamLimits

0x9dd6,	// (0x0005b976) list_single_cale_preview_pane_t1

0x9deb,	// (0x0005b98b) list_double_cale_preview_pane_g1

0x9df3,	// (0x0005b993) list_double_cale_preview_pane_t1_ParamLimits

0x9df3,	// (0x0005b993) list_double_cale_preview_pane_t1

0x9e08,	// (0x0005b9a8) list_double_cale_preview_pane_t2_ParamLimits

0x9e08,	// (0x0005b9a8) list_double_cale_preview_pane_t2

0x0001,

0xfccd,	// (0x0006186d) list_double_cale_preview_pane_t_ParamLimits

0xfccd,	// (0x0006186d) list_double_cale_preview_pane_t

0xb8dc,	// (0x0005d47c) main_ezdial_pane

0xbf76,	// (0x0005db16) main_sp_fs_email_pane_ParamLimits

0x965f,	// (0x0005b1ff) cmail_ddmenu_btn01_pane_ParamLimits

0x965f,	// (0x0005b1ff) cmail_ddmenu_btn01_pane

0x967c,	// (0x0005b21c) cmail_ddmenu_btn02_pane_ParamLimits

0x967c,	// (0x0005b21c) cmail_ddmenu_btn02_pane

0x969a,	// (0x0005b23a) cmail_ddmenu_btn03_pane_ParamLimits

0x969a,	// (0x0005b23a) cmail_ddmenu_btn03_pane

0x9735,	// (0x0005b2d5) main_sp_fs_ctrlbar_pane_ParamLimits

0x974b,	// (0x0005b2eb) main_sp_fs_listscroll_pane_te_cp01_ParamLimits

0x99fc,	// (0x0005b59c) list_cmail_body_pane_ParamLimits

0x19d9,	// (0x00053579) bg_button_pane_cp12

0x19e2,	// (0x00053582) list_single_cmail_header_detail_pane_g3_ParamLimits

0x19e2,	// (0x00053582) list_single_cmail_header_detail_pane_g3

0x0556,	// (0x000520f6) list_single_cmail_header_detail_pane_t2_ParamLimits

0x0556,	// (0x000520f6) list_single_cmail_header_detail_pane_t2

0x0001,

0xfc4b,	// (0x000617eb) list_single_cmail_header_detail_pane_t_ParamLimits

0xfc4b,	// (0x000617eb) list_single_cmail_header_detail_pane_t

0x0597,	// (0x00052137) phacti_term_pane_t2_ParamLimits

0x0597,	// (0x00052137) phacti_term_pane_t2

0x0001,

0xfc5a,	// (0x000617fa) phacti_term_pane_t_ParamLimits

0xfc5a,	// (0x000617fa) phacti_term_pane_t

0x1c6a,	// (0x0005380a) aid_size_list_single_double

0x9e20,	// (0x0005b9c0) popup_ezdial_listscroll_window

0x1c76,	// (0x00053816) popup_number_entry_window_cp01

0xc22b,	// (0x0005ddcb) bg_popup_call_pane_cp09

0x1c83,	// (0x00053823) ezdial_list_pane

0x1c8b,	// (0x0005382b) scroll_pane_cp23

0xe433,	// (0x0005ffd3) bg_button_pane_cp028_ParamLimits

0xe433,	// (0x0005ffd3) bg_button_pane_cp028

0x9e39,	// (0x0005b9d9) cmail_ddmenu_btn01_pane_g1_ParamLimits

0x9e39,	// (0x0005b9d9) cmail_ddmenu_btn01_pane_g1

0x9e49,	// (0x0005b9e9) cmail_ddmenu_btn01_pane_g2_ParamLimits

0x9e49,	// (0x0005b9e9) cmail_ddmenu_btn01_pane_g2

0x0001,

0xfcd2,	// (0x00061872) cmail_ddmenu_btn01_pane_g_ParamLimits

0xfcd2,	// (0x00061872) cmail_ddmenu_btn01_pane_g

0x1c93,	// (0x00053833) cmail_ddmenu_btn01_pane_t1_ParamLimits

0x1c93,	// (0x00053833) cmail_ddmenu_btn01_pane_t1

0xd3a2,	// (0x0005ef42) bg_button_pane_cp029_ParamLimits

0xd3a2,	// (0x0005ef42) bg_button_pane_cp029

0x9e55,	// (0x0005b9f5) cmail_ddmenu_btn02_pane_g1_ParamLimits

0x9e55,	// (0x0005b9f5) cmail_ddmenu_btn02_pane_g1

0x9e6d,	// (0x0005ba0d) cmail_ddmenu_btn02_pane_t1_ParamLimits

0x9e6d,	// (0x0005ba0d) cmail_ddmenu_btn02_pane_t1

0xbfcf,	// (0x0005db6f) bg_button_pane_cp031_ParamLimits

0xbfcf,	// (0x0005db6f) bg_button_pane_cp031

0x9e55,	// (0x0005b9f5) cmail_ddmenu_btn03_pane_g1_ParamLimits

0x9e55,	// (0x0005b9f5) cmail_ddmenu_btn03_pane_g1

0x9e6d,	// (0x0005ba0d) cmail_ddmenu_btn03_pane_t1_ParamLimits

0x9e6d,	// (0x0005ba0d) cmail_ddmenu_btn03_pane_t1

0xc025,	// (0x0005dbc5) cell_dialer2_keypad_pane_t1_ParamLimits

0xedf8,	// (0x00060998) cell_dialer2_keypad_pane_t1_copy1_ParamLimits

0xedf8,	// (0x00060998) cell_dialer2_keypad_pane_t1_copy1

0x9105,	// (0x0005aca5) ncimui_group_button_pane

0xbf76,	// (0x0005db16) main_sp_fs_calendar_pane_ParamLimits

0x9a23,	// (0x0005b5c3) list_single_cmail_header_caption_pane_ParamLimits

0x05ac,	// (0x0005214c) aid_recal_txt_sm_pane

0xb8dc,	// (0x0005d47c) mian_recal_day_pane

0x05e6,	// (0x00052186) popup_sp_fs_cale_preview_window_ParamLimits

0x1ca9,	// (0x00053849) list_recal_day_pane

0x06c8,	// (0x00052268) list_single_recal_day_pane_ParamLimits

0x06c8,	// (0x00052268) list_single_recal_day_pane

0x1cd0,	// (0x00053870) list_single_recal_day_pane_g1_ParamLimits

0x1cd0,	// (0x00053870) list_single_recal_day_pane_g1

0x06da,	// (0x0005227a) list_single_recal_day_pane_g2_ParamLimits

0x06da,	// (0x0005227a) list_single_recal_day_pane_g2

0x06e6,	// (0x00052286) list_single_recal_day_pane_g3_ParamLimits

0x06e6,	// (0x00052286) list_single_recal_day_pane_g3

0x9e91,	// (0x0005ba31) list_single_recal_day_pane_g4_ParamLimits

0x9e91,	// (0x0005ba31) list_single_recal_day_pane_g4

0x06f2,	// (0x00052292) list_single_recal_day_pane_g5_ParamLimits

0x06f2,	// (0x00052292) list_single_recal_day_pane_g5

0x06fe,	// (0x0005229e) list_single_recal_day_pane_g6_ParamLimits

0x06fe,	// (0x0005229e) list_single_recal_day_pane_g6

0x0004,

0xfce1,	// (0x00061881) list_single_recal_day_pane_g_ParamLimits

0xfce1,	// (0x00061881) list_single_recal_day_pane_g

0x0712,	// (0x000522b2) list_single_recal_day_pane_t1

0x0724,	// (0x000522c4) list_single_recal_day_pane_t2

0x0001,

0xfcec,	// (0x0006188c) list_single_recal_day_pane_t

0x9ea9,	// (0x0005ba49) ncimui_query_button_pane_ParamLimits

0x9ea9,	// (0x0005ba49) ncimui_query_button_pane

0x9eb9,	// (0x0005ba59) ncimui_query_button_pane_t1_ParamLimits

0x9eb9,	// (0x0005ba59) ncimui_query_button_pane_t1

0x1cdc,	// (0x0005387c) ncimui_query_button_pane_t2_ParamLimits

0x1cdc,	// (0x0005387c) ncimui_query_button_pane_t2

0x0001,

0xfcf1,	// (0x00061891) ncimui_query_button_pane_t_ParamLimits

0xfcf1,	// (0x00061891) ncimui_query_button_pane_t

0x9ecc,	// (0x0005ba6c) query_button_pane_ParamLimits

0x9ecc,	// (0x0005ba6c) query_button_pane

0xb8dc,	// (0x0005d47c) bg_button_pane_cp0028

0x1cef,	// (0x0005388f) query_button_pane_t1

0x5e7c,	// (0x00057a1c) main_tport_pane_ParamLimits

0x9906,	// (0x0005b4a6) bg_popup_window_pane_cp01_ParamLimits

0x9906,	// (0x0005b4a6) bg_popup_window_pane_cp01

0x9914,	// (0x0005b4b4) heading_pane_cp08_ParamLimits

0x9914,	// (0x0005b4b4) heading_pane_cp08

0x9922,	// (0x0005b4c2) heading_pane_cp07_ParamLimits

0x9922,	// (0x0005b4c2) heading_pane_cp07

0x9991,	// (0x0005b531) cell_tport_appsw_pane_g2

0x0002,

0xfc38,	// (0x000617d8) cell_tport_appsw_pane_g

0x55cc,	// (0x0005716c) input_candi_list_open_g1

0xc60f,	// (0x0005e1af) list_cale_time_pane_g6_ParamLimits

0xc60f,	// (0x0005e1af) list_cale_time_pane_g6

0x6377,	// (0x00057f17) aid_size_touch_calib_1_ParamLimits

0x6377,	// (0x00057f17) aid_size_touch_calib_1

0x6383,	// (0x00057f23) aid_size_touch_calib_2_ParamLimits

0x6383,	// (0x00057f23) aid_size_touch_calib_2

0x6391,	// (0x00057f31) aid_size_touch_calib_3_ParamLimits

0x6391,	// (0x00057f31) aid_size_touch_calib_3

0x63a1,	// (0x00057f41) aid_size_touch_calib_4_ParamLimits

0x63a1,	// (0x00057f41) aid_size_touch_calib_4

0x63af,	// (0x00057f4f) main_touch_calib_button_group_pane_ParamLimits

0x63af,	// (0x00057f4f) main_touch_calib_button_group_pane

0x63bd,	// (0x00057f5d) main_touch_calib_pane_g1_ParamLimits

0x63c9,	// (0x00057f69) main_touch_calib_pane_g2_ParamLimits

0x63d5,	// (0x00057f75) main_touch_calib_pane_g3_ParamLimits

0x63e1,	// (0x00057f81) main_touch_calib_pane_g4_ParamLimits

0xf689,	// (0x00061229) main_touch_calib_pane_g_ParamLimits

0x63ed,	// (0x00057f8d) main_touch_calib_pane_t1_ParamLimits

0x6406,	// (0x00057fa6) main_touch_calib_pane_t2_ParamLimits

0x641f,	// (0x00057fbf) main_touch_calib_pane_t3_ParamLimits

0x6435,	// (0x00057fd5) main_touch_calib_pane_t4_ParamLimits

0x644b,	// (0x00057feb) main_touch_calib_pane_t5_ParamLimits

0xf692,	// (0x00061232) main_touch_calib_pane_t_ParamLimits

0xec7a,	// (0x0006081a) list_single_fp_cale_pane_g3_ParamLimits

0xec7a,	// (0x0006081a) list_single_fp_cale_pane_g3

0x5e60,	// (0x00057a00) bg_button_pane_cp012_ParamLimits

0x5e60,	// (0x00057a00) bg_vkb2_func_pane_cp03_ParamLimits

0x820b,	// (0x00059dab) cell_vitu2_function_top_pane_g1_ParamLimits

0x5e60,	// (0x00057a00) bg_vkb2_func_pane_cp04_ParamLimits

0x908d,	// (0x0005ac2d) main_ncimui_button_group_pane_ParamLimits

0x908d,	// (0x0005ac2d) main_ncimui_button_group_pane

0x90f3,	// (0x0005ac93) main_ncimui_pane_t3_ParamLimits

0x90f3,	// (0x0005ac93) main_ncimui_pane_t3

0x1a7b,	// (0x0005361b) phacti_button_group_pane

0x1c6a,	// (0x0005380a) aid_size_list_single_double_ParamLimits

0x9e20,	// (0x0005b9c0) popup_ezdial_listscroll_window_ParamLimits

0x1c76,	// (0x00053816) popup_number_entry_window_cp01_ParamLimits

0x9ed9,	// (0x0005ba79) phacti_button_pane_ParamLimits

0x9ed9,	// (0x0005ba79) phacti_button_pane

0xb8dc,	// (0x0005d47c) bg_button_pane_cp14

0x1cfd,	// (0x0005389d) phacti_button_pane_t1

0x9eea,	// (0x0005ba8a) main_touch_calib_button_pane_ParamLimits

0x9eea,	// (0x0005ba8a) main_touch_calib_button_pane

0xc079,	// (0x0005dc19) bg_button_pane_cp18_ParamLimits

0xc079,	// (0x0005dc19) bg_button_pane_cp18

0x1d0b,	// (0x000538ab) main_touch_calib_button_pane_t1_ParamLimits

0x1d0b,	// (0x000538ab) main_touch_calib_button_pane_t1

0x1d21,	// (0x000538c1) main_touch_calib_button_pane_t2_ParamLimits

0x1d21,	// (0x000538c1) main_touch_calib_button_pane_t2

0x0001,

0xfcf6,	// (0x00061896) main_touch_calib_button_pane_t_ParamLimits

0xfcf6,	// (0x00061896) main_touch_calib_button_pane_t

0xb8dc,	// (0x0005d47c) cell_ncimui_button_pane

0xb8dc,	// (0x0005d47c) bg_button_pane_cp032

0x1d3f,	// (0x000538df) cell_ncimui_button_pane_t1

0x73d3,	// (0x00058f73) image3_infobar_pane_ParamLimits

0x73d3,	// (0x00058f73) image3_infobar_pane

0x9435,	// (0x0005afd5) fs_bigclock_status_pane_ParamLimits

0x9435,	// (0x0005afd5) fs_bigclock_status_pane

0x9442,	// (0x0005afe2) main_fs_bigclock_clock_pane_ParamLimits

0x9442,	// (0x0005afe2) main_fs_bigclock_clock_pane

0x9456,	// (0x0005aff6) main_fs_bigclock_indi_pane_ParamLimits

0x9456,	// (0x0005aff6) main_fs_bigclock_indi_pane

0x947e,	// (0x0005b01e) main_fs_bigclock_swipe_pane_ParamLimits

0x947e,	// (0x0005b01e) main_fs_bigclock_swipe_pane

0xb8dc,	// (0x0005d47c) main_fs_clock_dumped_data

0x15db,	// (0x0005317b) list_single_fs_bigclock_indicator_pane_g1_ParamLimits

0x15db,	// (0x0005317b) list_single_fs_bigclock_indicator_pane_g1

0x15f6,	// (0x00053196) list_single_fs_bigclock_indicator_pane_g2_ParamLimits

0x15f6,	// (0x00053196) list_single_fs_bigclock_indicator_pane_g2

0x1610,	// (0x000531b0) list_single_fs_bigclock_indicator_pane_g3_ParamLimits

0x1610,	// (0x000531b0) list_single_fs_bigclock_indicator_pane_g3

0x162a,	// (0x000531ca) list_single_fs_bigclock_indicator_pane_g4_ParamLimits

0x162a,	// (0x000531ca) list_single_fs_bigclock_indicator_pane_g4

0x0004,

0xfb97,	// (0x00061737) list_single_fs_bigclock_indicator_pane_g_ParamLimits

0xfb97,	// (0x00061737) list_single_fs_bigclock_indicator_pane_g

0x1655,	// (0x000531f5) list_single_fs_bigclock_indicator_pane_t1_ParamLimits

0x1655,	// (0x000531f5) list_single_fs_bigclock_indicator_pane_t1

0x167d,	// (0x0005321d) list_single_fs_bigclock_indicator_pane_t2_ParamLimits

0x167d,	// (0x0005321d) list_single_fs_bigclock_indicator_pane_t2

0x16a5,	// (0x00053245) list_single_fs_bigclock_indicator_pane_t3_ParamLimits

0x16a5,	// (0x00053245) list_single_fs_bigclock_indicator_pane_t3

0x16cd,	// (0x0005326d) list_single_fs_bigclock_indicator_pane_t4_ParamLimits

0x16cd,	// (0x0005326d) list_single_fs_bigclock_indicator_pane_t4

0x0004,

0xfba2,	// (0x00061742) list_single_fs_bigclock_indicator_pane_t_ParamLimits

0xfba2,	// (0x00061742) list_single_fs_bigclock_indicator_pane_t

0x1d4d,	// (0x000538ed) image3_infobar_fav_pane_ParamLimits

0x1d4d,	// (0x000538ed) image3_infobar_fav_pane

0x1d5d,	// (0x000538fd) image3_infobar_loc_pane_ParamLimits

0x1d5d,	// (0x000538fd) image3_infobar_loc_pane

0x1d71,	// (0x00053911) image3_infobar_time_pane_ParamLimits

0x1d71,	// (0x00053911) image3_infobar_time_pane

0xc01b,	// (0x0005dbbb) image3_infobar_time_pane_g1

0x1d81,	// (0x00053921) image3_infobar_time_pane_t1

0xc01b,	// (0x0005dbbb) image3_infobar_loc_pane_g1

0x1d8f,	// (0x0005392f) image3_infobar_loc_pane_g2

0x0001,

0xfcfb,	// (0x0006189b) image3_infobar_loc_pane_g

0x1d97,	// (0x00053937) image3_infobar_loc_pane_t1

0xc01b,	// (0x0005dbbb) image3_infobar_fav_pane_g1

0x1da5,	// (0x00053945) image3_infobar_fav_pane_g2

0x0001,

0xfd00,	// (0x000618a0) image3_infobar_fav_pane_g

0x1dad,	// (0x0005394d) fs_bigclock_status_battery_pane

0x1db6,	// (0x00053956) fs_bigclock_status_signal_pane

0x1dbf,	// (0x0005395f) fs_bigclock_status_title_pane

0x1dc8,	// (0x00053968) fs_bigclock_status_signal_pane_g1

0x1dd1,	// (0x00053971) fs_bigclock_status_signal_pane_g2

0x0001,

0xfd05,	// (0x000618a5) fs_bigclock_status_signal_pane_g

0x1dd9,	// (0x00053979) fs_bigclock_status_battery_pane_g1

0x1de2,	// (0x00053982) fs_bigclock_status_battery_pane_g2

0x0001,

0xfd0a,	// (0x000618aa) fs_bigclock_status_battery_pane_g

0x1dea,	// (0x0005398a) fs_bigclock_status_title_pane_t1

0x9efa,	// (0x0005ba9a) main_fs_bigclock_clock_pane_g1

0x9efa,	// (0x0005ba9a) main_fs_bigclock_clock_pane_g2

0x9f07,	// (0x0005baa7) main_fs_bigclock_clock_pane_g3

0x9f07,	// (0x0005baa7) main_fs_bigclock_clock_pane_g4

0x0003,

0xfd0f,	// (0x000618af) main_fs_bigclock_clock_pane_g

0x9f13,	// (0x0005bab3) main_fs_bigclock_clock_pane_t1

0x9f26,	// (0x0005bac6) main_fs_bigclock_clock_pane_t2

0x0001,

0xfd18,	// (0x000618b8) main_fs_bigclock_clock_pane_t

0x1df8,	// (0x00053998) list_single_fs_bigclock_indicator_pane_ParamLimits

0x1df8,	// (0x00053998) list_single_fs_bigclock_indicator_pane

0x1e09,	// (0x000539a9) list_single_fs_bigclock_pane_ParamLimits

0x1e09,	// (0x000539a9) list_single_fs_bigclock_pane

0x1e2f,	// (0x000539cf) main_fs_bigclock_indicator_pane_t1

0x1e3e,	// (0x000539de) list_single_fs_bigclock_pane_g1

0x1e46,	// (0x000539e6) list_single_fs_bigclock_pane_t1

0xc01b,	// (0x0005dbbb) main_fs_bigclock_swipe_pane_g1

0x1e89,	// (0x00053a29) main_fs_bigclock_swipe_pane_g2

0x0001,

0xfd29,	// (0x000618c9) main_fs_bigclock_swipe_pane_g

0x1e91,	// (0x00053a31) main_fs_bigclock_swipe_pane_t1_ParamLimits

0x1e91,	// (0x00053a31) main_fs_bigclock_swipe_pane_t1

0x50cc,	// (0x00056c6c) call_type_pane_ParamLimits

0xb8dc,	// (0x0005d47c) main_btmg_pane

0x0631,	// (0x000521d1) list_single_cale_mrui_row_pane_g2_ParamLimits

0x0631,	// (0x000521d1) list_single_cale_mrui_row_pane_g2

0x0002,

0xfc9c,	// (0x0006183c) list_single_cale_mrui_row_pane_g_ParamLimits

0xfc9c,	// (0x0006183c) list_single_cale_mrui_row_pane_g

0x06b7,	// (0x00052257) list_recal_vselct_arw_lo_pane

0x1cc8,	// (0x00053868) list_recal_vselct_arw_up_pane

0x06bf,	// (0x0005225f) list_recal_vselct_pane

0x9f7d,	// (0x0005bb1d) btmg_button_pane

0x9f89,	// (0x0005bb29) main_btmg_pane_g1

0xb8dc,	// (0x0005d47c) bg_button_pane_cp044

0x1eae,	// (0x00053a4e) btmg_button_pane_t1

0xe4d1,	// (0x00060071) aid_listscroll_gen

0xbf76,	// (0x0005db16) main_cntbar_detail_pane

0x19ac,	// (0x0005354c) list_cmail_folder_pane

0x142b,	// (0x00052fcb) sp_fs_scroll_pane_cp03_ParamLimits

0x9f91,	// (0x0005bb31) list_single_fs_dyc_pane_cp01_ParamLimits

0x9f91,	// (0x0005bb31) list_single_fs_dyc_pane_cp01

0x1ebc,	// (0x00053a5c) aid_size_cmail_indent

0x0736,	// (0x000522d6) list_single_dyc_row_pane_cp01

0x9fdd,	// (0x0005bb7d) cntbar_detail_list_pane_ParamLimits

0x9fdd,	// (0x0005bb7d) cntbar_detail_list_pane

0xa017,	// (0x0005bbb7) main_cntbar_detail_cont_pane_ParamLimits

0xa017,	// (0x0005bbb7) main_cntbar_detail_cont_pane

0x50c0,	// (0x00056c60) scroll_pane_cp032_ParamLimits

0x50c0,	// (0x00056c60) scroll_pane_cp032

0xa023,	// (0x0005bbc3) cntbar_detail_list_event_pane_ParamLimits

0xa023,	// (0x0005bbc3) cntbar_detail_list_event_pane

0x9fe9,	// (0x0005bb89) cntbar_detail_list_shct_pane

0xc492,	// (0x0005e032) aid_list_gen

0x1ec5,	// (0x00053a65) aid_scroll

0x1ece,	// (0x00053a6e) aid_size_touch_scroll_bar

0xa037,	// (0x0005bbd7) aid_list_double

0xa040,	// (0x0005bbe0) aid_list_single

0x1ed7,	// (0x00053a77) aid_list_single_lg

0xa049,	// (0x0005bbe9) aid_list_z_g_a_sm

0xa051,	// (0x0005bbf1) aid_list_z_g_d

0xa059,	// (0x0005bbf9) aid_txt_z_prm

0xa067,	// (0x0005bc07) aid_txt_z_prm_cp01

0xa075,	// (0x0005bc15) aid_txt_z_sec

0xa083,	// (0x0005bc23) main_cntbar_detail_cont_pane_g1_ParamLimits

0xa083,	// (0x0005bc23) main_cntbar_detail_cont_pane_g1

0xa090,	// (0x0005bc30) main_cntbar_detail_cont_pane_g2_ParamLimits

0xa090,	// (0x0005bc30) main_cntbar_detail_cont_pane_g2

0x0001,

0xfd2e,	// (0x000618ce) main_cntbar_detail_cont_pane_g_ParamLimits

0xfd2e,	// (0x000618ce) main_cntbar_detail_cont_pane_g

0x1ee0,	// (0x00053a80) main_cntbar_detail_cont_pane_t1

0x1eee,	// (0x00053a8e) main_cntbar_detail_cont_pane_t2

0x1efc,	// (0x00053a9c) main_cntbar_detail_cont_pane_t3

0x0002,

0xfd33,	// (0x000618d3) main_cntbar_detail_cont_pane_t

0xa09c,	// (0x0005bc3c) cell_cntbar_detail_list_shct_pane_ParamLimits

0xa09c,	// (0x0005bc3c) cell_cntbar_detail_list_shct_pane

0x1f0a,	// (0x00053aaa) cntbar_detail_list_shct_pane_g1

0x1f13,	// (0x00053ab3) cntbar_detail_list_shct_pane_g2

0x0001,

0xfd3a,	// (0x000618da) cntbar_detail_list_shct_pane_g

0xa0b0,	// (0x0005bc50) cntbar_detail_list_event_pane_g1_ParamLimits

0xa0b0,	// (0x0005bc50) cntbar_detail_list_event_pane_g1

0xa0bc,	// (0x0005bc5c) cntbar_detail_list_event_pane_g2_ParamLimits

0xa0bc,	// (0x0005bc5c) cntbar_detail_list_event_pane_g2

0x0005,

0xfd3f,	// (0x000618df) cntbar_detail_list_event_pane_g_ParamLimits

0xfd3f,	// (0x000618df) cntbar_detail_list_event_pane_g

0xa128,	// (0x0005bcc8) cntbar_detail_list_event_pane_t1_ParamLimits

0xa128,	// (0x0005bcc8) cntbar_detail_list_event_pane_t1

0xa13d,	// (0x0005bcdd) cntbar_detail_list_event_pane_t2_ParamLimits

0xa13d,	// (0x0005bcdd) cntbar_detail_list_event_pane_t2

0x0002,

0xfd4c,	// (0x000618ec) cntbar_detail_list_event_pane_t_ParamLimits

0xfd4c,	// (0x000618ec) cntbar_detail_list_event_pane_t

0xc01b,	// (0x0005dbbb) cell_cntbar_detail_list_shct_pane_g1

0xd1b5,	// (0x0005ed55) navi_pane_mv_g3

0xbf76,	// (0x0005db16) main_cntbar_detail_pane_ParamLimits

0xb8dc,	// (0x0005d47c) main_notif_wgt_pane

0x707b,	// (0x00058c1b) aid_tch_main_mp4_pane_g4

0x734e,	// (0x00058eee) popup_slider_window_cp02

0x06ad,	// (0x0005224d) list_recal_day_event_pane

0x9fbd,	// (0x0005bb5d) cntbar_detail_btn_pane_ParamLimits

0x9fbd,	// (0x0005bb5d) cntbar_detail_btn_pane

0x9fcd,	// (0x0005bb6d) cntbar_detail_btn_pane_cp01_ParamLimits

0x9fcd,	// (0x0005bb6d) cntbar_detail_btn_pane_cp01

0x9fe9,	// (0x0005bb89) cntbar_detail_list_shct_pane_ParamLimits

0x9ff5,	// (0x0005bb95) cntbar_detail_pane_g1_ParamLimits

0x9ff5,	// (0x0005bb95) cntbar_detail_pane_g1

0xa001,	// (0x0005bba1) cntbar_detail_pane_t1_ParamLimits

0xa001,	// (0x0005bba1) cntbar_detail_pane_t1

0xa0c8,	// (0x0005bc68) cntbar_detail_list_event_pane_g3_ParamLimits

0xa0c8,	// (0x0005bc68) cntbar_detail_list_event_pane_g3

0xa0e0,	// (0x0005bc80) cntbar_detail_list_event_pane_g4_ParamLimits

0xa0e0,	// (0x0005bc80) cntbar_detail_list_event_pane_g4

0xa0f8,	// (0x0005bc98) cntbar_detail_list_event_pane_g5_ParamLimits

0xa0f8,	// (0x0005bc98) cntbar_detail_list_event_pane_g5

0xa110,	// (0x0005bcb0) cntbar_detail_list_event_pane_g6_ParamLimits

0xa110,	// (0x0005bcb0) cntbar_detail_list_event_pane_g6

0xa152,	// (0x0005bcf2) cntbar_detail_list_event_pane_t3_ParamLimits

0xa152,	// (0x0005bcf2) cntbar_detail_list_event_pane_t3

0xa164,	// (0x0005bd04) popup_notif_wgt_window_ParamLimits

0xa164,	// (0x0005bd04) popup_notif_wgt_window

0xa174,	// (0x0005bd14) popup_submenu_window_cp01_ParamLimits

0xa174,	// (0x0005bd14) popup_submenu_window_cp01

0xc22b,	// (0x0005ddcb) bg_popup_window_pane_cp10

0x1f1c,	// (0x00053abc) listscroll_notif_wgt_pane

0x1f2e,	// (0x00053ace) list_notif_wgt_window

0x1f37,	// (0x00053ad7) scroll_pane_cp033

0xa186,	// (0x0005bd26) list_notif_wgt_row_pane_ParamLimits

0xa186,	// (0x0005bd26) list_notif_wgt_row_pane

0x1f40,	// (0x00053ae0) aid_size_list_notif_wgt_del

0x1f4d,	// (0x00053aed) list_notif_wgt_row_pane_g1

0x1f59,	// (0x00053af9) list_notif_wgt_row_pane_g2

0x1f68,	// (0x00053b08) list_notif_wgt_row_pane_g3

0x0002,

0xfd53,	// (0x000618f3) list_notif_wgt_row_pane_g

0x1f75,	// (0x00053b15) list_notif_wgt_row_pane_t1

0x1f8b,	// (0x00053b2b) list_notif_wgt_row_pane_t2

0x1f9d,	// (0x00053b3d) list_notif_wgt_row_pane_t3

0x0002,

0xfd5a,	// (0x000618fa) list_notif_wgt_row_pane_t

0x0ad6,	// (0x00052676) list_recal_day_event_pane_g1

0x1faf,	// (0x00053b4f) list_recal_day_event_pane_t1

0xb8dc,	// (0x0005d47c) bg_button_pane_cp045

0x1fbe,	// (0x00053b5e) cntbar_detail_btn_pane_t1

0xd3a2,	// (0x0005ef42) main_callh_pane_ParamLimits

0xd3a2,	// (0x0005ef42) main_callh_pane

0xb8dc,	// (0x0005d47c) main_coverflow0_pane

0xb8dc,	// (0x0005d47c) main_wgtman_pane

0x9496,	// (0x0005b036) main_fs_bigclock_unlock_btn_pane_ParamLimits

0x9496,	// (0x0005b036) main_fs_bigclock_unlock_btn_pane

0x9989,	// (0x0005b529) bg_button_pane_cp16

0x9999,	// (0x0005b539) cell_tport_appsw_pane_g3

0xa198,	// (0x0005bd38) cf0_flow_pane_ParamLimits

0xa198,	// (0x0005bd38) cf0_flow_pane

0x1fcc,	// (0x00053b6c) listscroll_cf0_pane

0x1fd7,	// (0x00053b77) main_cf0_pane_g1

0xa1a7,	// (0x0005bd47) main_cf0_pane_t1_ParamLimits

0xa1a7,	// (0x0005bd47) main_cf0_pane_t1

0xa1bb,	// (0x0005bd5b) main_cf0_pane_t2_ParamLimits

0xa1bb,	// (0x0005bd5b) main_cf0_pane_t2

0x0001,

0xfd66,	// (0x00061906) main_cf0_pane_t_ParamLimits

0xfd66,	// (0x00061906) main_cf0_pane_t

0x1fe9,	// (0x00053b89) scroll_pane_cp11

0xa1cf,	// (0x0005bd6f) cf0_flow_pane_g1

0xa1d7,	// (0x0005bd77) cf0_flow_pane_g2

0x0001,

0xfd6b,	// (0x0006190b) cf0_flow_pane_g

0xa1df,	// (0x0005bd7f) cf0_flow_pane_t1

0xb8dc,	// (0x0005d47c) main_call6_pane

0xb8dc,	// (0x0005d47c) main_calllock_pane

0xa1ed,	// (0x0005bd8d) call6_btn_grp_pane_ParamLimits

0xa1ed,	// (0x0005bd8d) call6_btn_grp_pane

0xa1fc,	// (0x0005bd9c) call6_pane_g1_ParamLimits

0xa1fc,	// (0x0005bd9c) call6_pane_g1

0xa20c,	// (0x0005bdac) popup_call6_1st_window_ParamLimits

0xa20c,	// (0x0005bdac) popup_call6_1st_window

0xa21a,	// (0x0005bdba) popup_call6_2nd_window_ParamLimits

0xa21a,	// (0x0005bdba) popup_call6_2nd_window

0xa228,	// (0x0005bdc8) cell_call6_btn_pane_ParamLimits

0xa228,	// (0x0005bdc8) cell_call6_btn_pane

0xc22b,	// (0x0005ddcb) bg_popup_call2_in_pane_cp03

0x1ff4,	// (0x00053b94) popup_call6_1st_window_g1

0x1ffc,	// (0x00053b9c) popup_call6_1st_window_g2

0x2004,	// (0x00053ba4) popup_call6_1st_window_g3

0x0002,

0xfd70,	// (0x00061910) popup_call6_1st_window_g

0x200c,	// (0x00053bac) popup_call6_1st_window_t1

0x201b,	// (0x00053bbb) popup_call6_1st_window_t2

0x2029,	// (0x00053bc9) popup_call6_1st_window_t3

0x0002,

0xfd77,	// (0x00061917) popup_call6_1st_window_t

0xc22b,	// (0x0005ddcb) bg_popup_call2_in_pane_cp04

0x2037,	// (0x00053bd7) popup_call6_2nd_window_g1

0x203f,	// (0x00053bdf) popup_call6_2nd_window_g2

0x2047,	// (0x00053be7) popup_call6_2nd_window_g3

0x0002,

0xfd7e,	// (0x0006191e) popup_call6_2nd_window_g

0x204f,	// (0x00053bef) popup_call6_2nd_window_t1

0x3425,	// (0x00054fc5) bg_button_pane_cp15

0xa237,	// (0x0005bdd7) cell_call6_btn_pane_g1

0xa240,	// (0x0005bde0) cell_call6_btn_pane_t1

0xa24f,	// (0x0005bdef) listscroll_wgtman_pane_ParamLimits

0xa24f,	// (0x0005bdef) listscroll_wgtman_pane

0xa26b,	// (0x0005be0b) wgtman_btn_pane_ParamLimits

0xa26b,	// (0x0005be0b) wgtman_btn_pane

0xcfbc,	// (0x0005eb5c) aid_scroll_copy1

0x2076,	// (0x00053c16) list_wgtman_pane

0xa2a0,	// (0x0005be40) wgtman_btn_pane_g1_ParamLimits

0xa2a0,	// (0x0005be40) wgtman_btn_pane_g1

0xa2c8,	// (0x0005be68) wgtman_btn_pane_t1_ParamLimits

0xa2c8,	// (0x0005be68) wgtman_btn_pane_t1

0x2080,	// (0x00053c20) wgtman_btn_pane_t2_ParamLimits

0x2080,	// (0x00053c20) wgtman_btn_pane_t2

0x0001,

0xfd85,	// (0x00061925) wgtman_btn_pane_t_ParamLimits

0xfd85,	// (0x00061925) wgtman_btn_pane_t

0xa2ff,	// (0x0005be9f) listrow_wgtman_pane_ParamLimits

0xa2ff,	// (0x0005be9f) listrow_wgtman_pane

0xa31a,	// (0x0005beba) listrow_wgtman_pane_g1

0xa327,	// (0x0005bec7) listrow_wgtman_pane_g2

0x0001,

0xfd8a,	// (0x0006192a) listrow_wgtman_pane_g

0xa345,	// (0x0005bee5) listrow_wgtman_pane_t1

0xa35d,	// (0x0005befd) listrow_wgtman_pane_t2

0x0001,

0xfd8f,	// (0x0006192f) listrow_wgtman_pane_t

0xa383,	// (0x0005bf23) wait_bar_pane_cp09

0x2097,	// (0x00053c37) main_calllock_btn_pane

0x20a1,	// (0x00053c41) main_calllock_pane_g1

0xb8dc,	// (0x0005d47c) bg_button_pane_cp17

0x205e,	// (0x00053bfe) main_calllock_btn_pane_g1

0x20a9,	// (0x00053c49) main_calllock_btn_pane_t1

0xb8dc,	// (0x0005d47c) main_dialer3_pane

0xb8dc,	// (0x0005d47c) main_fmrd2_pane

0xc01b,	// (0x0005dbbb) main_fs_bigclock_unlock_btn_pane_g1

0xa39d,	// (0x0005bf3d) main_fs_bigclock_unlock_btn_pane_t1

0xa3ab,	// (0x0005bf4b) area_fmrd2_info_pane_ParamLimits

0xa3ab,	// (0x0005bf4b) area_fmrd2_info_pane

0xa3b9,	// (0x0005bf59) area_fmrd2_visual_pane_ParamLimits

0xa3b9,	// (0x0005bf59) area_fmrd2_visual_pane

0xa3c7,	// (0x0005bf67) fmrd2_indi_pane_ParamLimits

0xa3c7,	// (0x0005bf67) fmrd2_indi_pane

0xa3d4,	// (0x0005bf74) area_fmrd2_visual_pane_g1

0xa3dc,	// (0x0005bf7c) area_fmrd2_visual_pane_t1

0xa3ec,	// (0x0005bf8c) area_fmrd2_visual_pane_t2

0xa3fc,	// (0x0005bf9c) area_fmrd2_visual_pane_t3

0x0002,

0xfd99,	// (0x00061939) area_fmrd2_visual_pane_t

0xa40c,	// (0x0005bfac) area_fmrd2_info_pane_g1

0xa414,	// (0x0005bfb4) area_fmrd2_info_pane_t1

0xa424,	// (0x0005bfc4) area_fmrd2_info_pane_t2

0xa434,	// (0x0005bfd4) area_fmrd2_info_pane_t3

0xa444,	// (0x0005bfe4) area_fmrd2_info_pane_t4

0x0003,

0xfda0,	// (0x00061940) area_fmrd2_info_pane_t

0xa452,	// (0x0005bff2) fmrd2_indi_pane_t1

0xa462,	// (0x0005c002) fmrd2_indi_pane_t2

0xa472,	// (0x0005c012) fmrd2_indi_pane_t3

0x0002,

0xfda9,	// (0x00061949) fmrd2_indi_pane_t

0x1639,	// (0x000531d9) list_single_fs_bigclock_indicator_pane_g5_ParamLimits

0x1639,	// (0x000531d9) list_single_fs_bigclock_indicator_pane_g5

0x16ea,	// (0x0005328a) list_single_fs_bigclock_indicator_pane_t5_ParamLimits

0x16ea,	// (0x0005328a) list_single_fs_bigclock_indicator_pane_t5

0x9b89,	// (0x0005b729) aid_cell_bcale_month_pane_ParamLimits

0x9b89,	// (0x0005b729) aid_cell_bcale_month_pane

0x9ba7,	// (0x0005b747) bcale_month_pane_ParamLimits

0x9ba7,	// (0x0005b747) bcale_month_pane

0x9bc5,	// (0x0005b765) bcale_preview_pane_ParamLimits

0x9bc5,	// (0x0005b765) bcale_preview_pane

0x1e46,	// (0x000539e6) list_single_fs_bigclock_pane_t1_ParamLimits

0x1e65,	// (0x00053a05) list_single_fs_bigclock_pane_t2_ParamLimits

0x1e65,	// (0x00053a05) list_single_fs_bigclock_pane_t2

0x0001,

0xfd24,	// (0x000618c4) list_single_fs_bigclock_pane_t_ParamLimits

0xfd24,	// (0x000618c4) list_single_fs_bigclock_pane_t

0xa395,	// (0x0005bf35) main_fs_bigclock_unlock_btn_pane_g2

0x0001,

0xfd94,	// (0x00061934) main_fs_bigclock_unlock_btn_pane_g

0xa480,	// (0x0005c020) aid_dia3_key_size_ParamLimits

0xa480,	// (0x0005c020) aid_dia3_key_size

0xa48c,	// (0x0005c02c) aid_dia3_listrow_size_ParamLimits

0xa48c,	// (0x0005c02c) aid_dia3_listrow_size

0xa49c,	// (0x0005c03c) dia3_keypad_fun_pane_ParamLimits

0xa49c,	// (0x0005c03c) dia3_keypad_fun_pane

0xa4ae,	// (0x0005c04e) dia3_keypad_num_pane_ParamLimits

0xa4ae,	// (0x0005c04e) dia3_keypad_num_pane

0xa4c0,	// (0x0005c060) dia3_listscroll_pane_ParamLimits

0xa4c0,	// (0x0005c060) dia3_listscroll_pane

0xa4ce,	// (0x0005c06e) dia3_numentry_pane_ParamLimits

0xa4ce,	// (0x0005c06e) dia3_numentry_pane

0x20b8,	// (0x00053c58) dia3_list_pane

0x20c3,	// (0x00053c63) scroll_pane_cp12

0xb8dc,	// (0x0005d47c) bg_dia3_numentry_pane

0xa4dc,	// (0x0005c07c) dia3_numentry_pane_t1

0xa4eb,	// (0x0005c08b) cell_dia3_key_num_pane

0xa4f3,	// (0x0005c093) cell_dia3_key0_fun_pane_ParamLimits

0xa4f3,	// (0x0005c093) cell_dia3_key0_fun_pane

0xa500,	// (0x0005c0a0) cell_dia3_key1_fun_pane_ParamLimits

0xa500,	// (0x0005c0a0) cell_dia3_key1_fun_pane

0xa50d,	// (0x0005c0ad) dia3_listrow_pane

0x1380,	// (0x00052f20) bg_dia3_numentry_pane_g1

0xb8dc,	// (0x0005d47c) bg_button_pane_cp21

0x20ce,	// (0x00053c6e) cell_dia3_key_num_pane_t1

0x20dc,	// (0x00053c7c) cell_dia3_key_num_pane_t2

0x20eb,	// (0x00053c8b) cell_dia3_key_num_pane_t3

0x20fa,	// (0x00053c9a) cell_dia3_key_num_pane_t4

0x0003,

0xfdb0,	// (0x00061950) cell_dia3_key_num_pane_t

0xb8dc,	// (0x0005d47c) bg_button_pane_cp19

0xa51a,	// (0x0005c0ba) cell_dia3_key0_fun_pane_g1

0xb8dc,	// (0x0005d47c) bg_button_pane_cp20

0xa522,	// (0x0005c0c2) cell_dia3_key1_fun_pane_g1

0xa52a,	// (0x0005c0ca) area_left_week_number_pane

0xa53d,	// (0x0005c0dd) area_top_day_name_pane

0xa54b,	// (0x0005c0eb) frame_month_view_pane

0x2109,	// (0x00053ca9) grid_month_view_pane

0xa560,	// (0x0005c100) cell_top_day_name_pane_ParamLimits

0xa560,	// (0x0005c100) cell_top_day_name_pane

0xa57a,	// (0x0005c11a) cell_area_left_week_number_pane_ParamLimits

0xa57a,	// (0x0005c11a) cell_area_left_week_number_pane

0xa59d,	// (0x0005c13d) cell_month_view_pane_ParamLimits

0xa59d,	// (0x0005c13d) cell_month_view_pane

0x2117,	// (0x00053cb7) frm_month_g1

0xa5c9,	// (0x0005c169) frm_month_g2

0xa5da,	// (0x0005c17a) frm_month_g3

0xa5eb,	// (0x0005c18b) frm_month_g4

0xa5fc,	// (0x0005c19c) frm_month_g5

0xa60f,	// (0x0005c1af) frm_month_g6

0xa622,	// (0x0005c1c2) frm_month_g7

0x2124,	// (0x00053cc4) frm_month_g8

0xa635,	// (0x0005c1d5) frm_month_g9

0xa642,	// (0x0005c1e2) frm_month_g10

0xa64f,	// (0x0005c1ef) frm_month_g11

0xa65c,	// (0x0005c1fc) frm_month_g12

0xa669,	// (0x0005c209) frm_month_g13

0xa676,	// (0x0005c216) frm_month_g14

0xa685,	// (0x0005c225) frm_month_g15

0xa694,	// (0x0005c234) frm_month_g16

0x000f,

0xfdb9,	// (0x00061959) frm_month_g

0x2131,	// (0x00053cd1) cell_top_day_name_pane_t1

0xa6a3,	// (0x0005c243) cell_area_left_week_number_pane_g1

0xa6b2,	// (0x0005c252) cell_area_left_week_number_pane_t1

0xbfdd,	// (0x0005db7d) cell_month_view_pane_g1

0xa6c8,	// (0x0005c268) cell_month_view_pane_t1

0xb8dc,	// (0x0005d47c) main_fps_pane

0x18b7,	// (0x00053457) cmail_ddmenu_btn02_pane_cp1_ParamLimits

0x18b7,	// (0x00053457) cmail_ddmenu_btn02_pane_cp1

0x18d3,	// (0x00053473) cmail_ddmenu_btn02_pane_cp2_ParamLimits

0x18d3,	// (0x00053473) cmail_ddmenu_btn02_pane_cp2

0x9e61,	// (0x0005ba01) cmail_ddmenu_btn02_pane_g2_ParamLimits

0x9e61,	// (0x0005ba01) cmail_ddmenu_btn02_pane_g2

0x0001,

0xfcd7,	// (0x00061877) cmail_ddmenu_btn02_pane_g_ParamLimits

0xfcd7,	// (0x00061877) cmail_ddmenu_btn02_pane_g

0x9e7f,	// (0x0005ba1f) cmail_ddmenu_btn02_pane_t2_ParamLimits

0x9e7f,	// (0x0005ba1f) cmail_ddmenu_btn02_pane_t2

0x0001,

0xfcdc,	// (0x0006187c) cmail_ddmenu_btn02_pane_t_ParamLimits

0xfcdc,	// (0x0006187c) cmail_ddmenu_btn02_pane_t

0xa6de,	// (0x0005c27e) fps_text_pane_ParamLimits

0xa6de,	// (0x0005c27e) fps_text_pane

0xa6eb,	// (0x0005c28b) main_fps_pane_g1_ParamLimits

0xa6eb,	// (0x0005c28b) main_fps_pane_g1

0xa6f9,	// (0x0005c299) wait_bar_pane_cp010_ParamLimits

0xa6f9,	// (0x0005c299) wait_bar_pane_cp010

0xa705,	// (0x0005c2a5) fps_text_pane_t1_ParamLimits

0xa705,	// (0x0005c2a5) fps_text_pane_t1

0x7765,	// (0x00059305) cam4_image_uncrop_pane_g1

0x776e,	// (0x0005930e) cam4_image_uncrop_pane_g2

0x7777,	// (0x00059317) cam4_image_uncrop_pane_g3

0x7780,	// (0x00059320) cam4_image_uncrop_pane_g4

0x0003,

0xf81b,	// (0x000613bb) cam4_image_uncrop_pane_g

0xa50d,	// (0x0005c0ad) dia3_listrow_pane_ParamLimits

0xb8dc,	// (0x0005d47c) main_phob2_pane

0x996b,	// (0x0005b50b) cell_tport_appsw_pane_cp02_ParamLimits

0x996b,	// (0x0005b50b) cell_tport_appsw_pane_cp02

0x997a,	// (0x0005b51a) cell_tport_appsw_pane_cp03_ParamLimits

0x997a,	// (0x0005b51a) cell_tport_appsw_pane_cp03

0xb8dc,	// (0x0005d47c) phob2_contact_card_pane

0xb8dc,	// (0x0005d47c) phob2_listscroll_pane

0x2144,	// (0x00053ce4) phob2_list_pane

0x1c8b,	// (0x0005382b) scroll_pane_cp034

0xa71e,	// (0x0005c2be) phob2_cc_data_pane_ParamLimits

0xa71e,	// (0x0005c2be) phob2_cc_data_pane

0xa738,	// (0x0005c2d8) phob2_cc_listscroll_pane_ParamLimits

0xa738,	// (0x0005c2d8) phob2_cc_listscroll_pane

0xa2ff,	// (0x0005be9f) list_double_large_graphic_phob2_pane_ParamLimits

0xa2ff,	// (0x0005be9f) list_double_large_graphic_phob2_pane

0xa752,	// (0x0005c2f2) list_double_large_graphic_phob2_pane_g1_ParamLimits

0xa752,	// (0x0005c2f2) list_double_large_graphic_phob2_pane_g1

0xa75f,	// (0x0005c2ff) list_double_large_graphic_phob2_pane_g2_ParamLimits

0xa75f,	// (0x0005c2ff) list_double_large_graphic_phob2_pane_g2

0x0003,

0xfdda,	// (0x0006197a) list_double_large_graphic_phob2_pane_g_ParamLimits

0xfdda,	// (0x0006197a) list_double_large_graphic_phob2_pane_g

0xa785,	// (0x0005c325) list_double_large_graphic_phob2_pane_t1_ParamLimits

0xa785,	// (0x0005c325) list_double_large_graphic_phob2_pane_t1

0xa79a,	// (0x0005c33a) list_double_large_graphic_phob2_pane_t2_ParamLimits

0xa79a,	// (0x0005c33a) list_double_large_graphic_phob2_pane_t2

0x0001,

0xfde3,	// (0x00061983) list_double_large_graphic_phob2_pane_t_ParamLimits

0xfde3,	// (0x00061983) list_double_large_graphic_phob2_pane_t

0xb8dc,	// (0x0005d47c) list_highlight_pane_cp024

0x214c,	// (0x00053cec) phob2_cc_button_pane

0xa7af,	// (0x0005c34f) phob2_cc_data_pane_g1_ParamLimits

0xa7af,	// (0x0005c34f) phob2_cc_data_pane_g1

0xa7be,	// (0x0005c35e) phob2_cc_data_pane_g2_ParamLimits

0xa7be,	// (0x0005c35e) phob2_cc_data_pane_g2

0x0001,

0xfde8,	// (0x00061988) phob2_cc_data_pane_g_ParamLimits

0xfde8,	// (0x00061988) phob2_cc_data_pane_g

0xa7cd,	// (0x0005c36d) phob2_cc_data_pane_t1_ParamLimits

0xa7cd,	// (0x0005c36d) phob2_cc_data_pane_t1

0xa7e2,	// (0x0005c382) phob2_cc_data_pane_t2_ParamLimits

0xa7e2,	// (0x0005c382) phob2_cc_data_pane_t2

0xa7f7,	// (0x0005c397) phob2_cc_data_pane_t3_ParamLimits

0xa7f7,	// (0x0005c397) phob2_cc_data_pane_t3

0x0002,

0xfded,	// (0x0006198d) phob2_cc_data_pane_t_ParamLimits

0xfded,	// (0x0006198d) phob2_cc_data_pane_t

0x2154,	// (0x00053cf4) phob2_cc_list_pane_ParamLimits

0x2154,	// (0x00053cf4) phob2_cc_list_pane

0x0dd8,	// (0x00052978) scroll_pane_cp035_ParamLimits

0x0dd8,	// (0x00052978) scroll_pane_cp035

0xbf76,	// (0x0005db16) bg_button_pane_cp033

0x2160,	// (0x00053d00) phob2_cc_button_pane_g1

0x216c,	// (0x00053d0c) phob2_cc_button_pane_t1

0x2181,	// (0x00053d21) phob2_cc_button_pane_t2

0x0001,

0xfdf4,	// (0x00061994) phob2_cc_button_pane_t

0xa80c,	// (0x0005c3ac) list_double_large_graphic_phob2_cc_pane_ParamLimits

0xa80c,	// (0x0005c3ac) list_double_large_graphic_phob2_cc_pane

0xa87a,	// (0x0005c41a) list_double_large_graphic_phob2_cc_pane_g1_ParamLimits

0xa87a,	// (0x0005c41a) list_double_large_graphic_phob2_cc_pane_g1

0x073f,	// (0x000522df) list_double_large_graphic_phob2_cc_pane_g2_ParamLimits

0x073f,	// (0x000522df) list_double_large_graphic_phob2_cc_pane_g2

0xa88b,	// (0x0005c42b) list_double_large_graphic_phob2_cc_pane_g3_ParamLimits

0xa88b,	// (0x0005c42b) list_double_large_graphic_phob2_cc_pane_g3

0xa897,	// (0x0005c437) list_double_large_graphic_phob2_cc_pane_g4_ParamLimits

0xa897,	// (0x0005c437) list_double_large_graphic_phob2_cc_pane_g4

0xa8a3,	// (0x0005c443) list_double_large_graphic_phob2_cc_pane_g5_ParamLimits

0xa8a3,	// (0x0005c443) list_double_large_graphic_phob2_cc_pane_g5

0x0004,

0xfdf9,	// (0x00061999) list_double_large_graphic_phob2_cc_pane_g_ParamLimits

0xfdf9,	// (0x00061999) list_double_large_graphic_phob2_cc_pane_g

0xa8af,	// (0x0005c44f) list_double_large_graphic_phob2_cc_pane_t1_ParamLimits

0xa8af,	// (0x0005c44f) list_double_large_graphic_phob2_cc_pane_t1

0xa8d8,	// (0x0005c478) list_double_large_graphic_phob2_cc_pane_t2_ParamLimits

0xa8d8,	// (0x0005c478) list_double_large_graphic_phob2_cc_pane_t2

0x0001,

0xfe04,	// (0x000619a4) list_double_large_graphic_phob2_cc_pane_t_ParamLimits

0xfe04,	// (0x000619a4) list_double_large_graphic_phob2_cc_pane_t

0x2193,	// (0x00053d33) list_highlight_pane_cp025_ParamLimits

0x2193,	// (0x00053d33) list_highlight_pane_cp025

0xbf76,	// (0x0005db16) bg_button_pane_cp033_ParamLimits

0x2160,	// (0x00053d00) phob2_cc_button_pane_g1_ParamLimits

0x216c,	// (0x00053d0c) phob2_cc_button_pane_t1_ParamLimits

0x2181,	// (0x00053d21) phob2_cc_button_pane_t2_ParamLimits

0xfdf4,	// (0x00061994) phob2_cc_button_pane_t_ParamLimits

0x3419,	// (0x00054fb9) popup_wgtman_window

0x099f,	// (0x0005253f) scroll_pane_cp038

0xa288,	// (0x0005be28) wgtman_btn_pane_cp_01_ParamLimits

0xa288,	// (0x0005be28) wgtman_btn_pane_cp_01

0x21a1,	// (0x00053d41) wgtman_content_pane

0x21aa,	// (0x00053d4a) wgtman_heading_pane

0xb8dc,	// (0x0005d47c) bg_heading_pane_cp02

0x21b3,	// (0x00053d53) wgtman_heading_pane_g1

0x21bb,	// (0x00053d5b) wgtman_heading_pane_t1

0x21c9,	// (0x00053d69) scroll_pane_cp036

0x21d1,	// (0x00053d71) wgtman_list_pane

0x21d9,	// (0x00053d79) wgtman_list_pane_t1_ParamLimits

0x21d9,	// (0x00053d79) wgtman_list_pane_t1

0x76c4,	// (0x00059264) cam4_grid_pane

0x83bc,	// (0x00059f5c) bg_button_pane_cp015_ParamLimits

0x83d1,	// (0x00059f71) bg_button_pane_cp016_ParamLimits

0x83dd,	// (0x00059f7d) bg_button_pane_cp017_ParamLimits

0x8435,	// (0x00059fd5) popup_vitu2_query_window_g3_ParamLimits

0x8435,	// (0x00059fd5) popup_vitu2_query_window_g3

0x84d6,	// (0x0005a076) popup_vitu2_query_window_t6_ParamLimits

0x84d6,	// (0x0005a076) popup_vitu2_query_window_t6

0x8501,	// (0x0005a0a1) popup_vitu2_query_window_t7_ParamLimits

0x8501,	// (0x0005a0a1) popup_vitu2_query_window_t7

0x1a84,	// (0x00053624) cam4_grid_pane_g1

0x1a8d,	// (0x0005362d) cam4_grid_pane_g2

0x21f3,	// (0x00053d93) cam4_grid_pane_g3

0x21fc,	// (0x00053d9c) cam4_grid_pane_g4

0x0003,

0xfe09,	// (0x000619a9) cam4_grid_pane_g

0x3e83,	// (0x00055a23) aid_placing_vt_slider_lsc_ParamLimits

0x41cf,	// (0x00055d6f) vidtel_button_pane_ParamLimits

0x41cf,	// (0x00055d6f) vidtel_button_pane

0xb8dc,	// (0x0005d47c) bg_button_pane_cp034

0x2207,	// (0x00053da7) vidtel_button_pane_g1

0x220f,	// (0x00053daf) vidtel_button_pane_t1

0x0ac6,	// (0x00052666) aid_size_vtel_slider_touch

0x0dd8,	// (0x00052978) scroll_pane_cp039

0x924e,	// (0x0005adee) ncim_query_button_pane_cp01_ParamLimits

0x926d,	// (0x0005ae0d) ncimui_query_pane_g1_ParamLimits

0xbf76,	// (0x0005db16) input_focus_pane_cp012_ParamLimits

0x13be,	// (0x00052f5e) ncim_query_entry_pane_t1_ParamLimits

0x0dd8,	// (0x00052978) scroll_pane_cp039_ParamLimits

0xd0a0,	// (0x0005ec40) navi_pane_bcale_mc_g1

0xd0a8,	// (0x0005ec48) navi_pane_bcale_mc_t1

0x1907,	// (0x000534a7) main_sp_fs_email_pane_g1

0x1913,	// (0x000534b3) main_sp_fs_email_pane_g2

0x0001,

0xfc07,	// (0x000617a7) main_sp_fs_email_pane_g

0x1baa,	// (0x0005374a) list_single_cale_mrui_row_pane_g3_ParamLimits

0x1baa,	// (0x0005374a) list_single_cale_mrui_row_pane_g3

0x9e9f,	// (0x0005ba3f) list_single_recal_day_pane_g5_event_pane

0x070a,	// (0x000522aa) list_single_recal_day_pane_g7

0xc6bb,	// (0x0005e25b) list_recal_day_event_pane_cp01

0xc6c4,	// (0x0005e264) list_recal_vselct_arw_lo_pane_cp01

0xc6cc,	// (0x0005e26c) list_recal_vselct_arw_up_pane_cp01

0xc6d4,	// (0x0005e274) list_recal_vselct_pane_cp01

0x0ad6,	// (0x00052676) list_recal_day_event_pane_cp01_g1

0x074b,	// (0x000522eb) list_recal_day_event_pane_cp01_t1

0x0712,	// (0x000522b2) list_single_recal_day_pane_t1_ParamLimits

0x0724,	// (0x000522c4) list_single_recal_day_pane_t2_ParamLimits

0xfcec,	// (0x0006188c) list_single_recal_day_pane_t_ParamLimits

0xbf54,	// (0x0005daf4) bg_notes_pane_ParamLimits

0xc057,	// (0x0005dbf7) list_notes_pane_ParamLimits

0x3563,	// (0x00055103) scroll_pane_cp06_ParamLimits

0xc079,	// (0x0005dc19) main_notes_pane_ParamLimits

0xbf76,	// (0x0005db16) main_welc_pane

0xa923,	// (0x0005c4c3) main_welc_body_pane_ParamLimits

0xa923,	// (0x0005c4c3) main_welc_body_pane

0xa93d,	// (0x0005c4dd) main_welc_opti_pane_ParamLimits

0xa93d,	// (0x0005c4dd) main_welc_opti_pane

0xa99c,	// (0x0005c53c) main_welc_pane_t1_ParamLimits

0xa99c,	// (0x0005c53c) main_welc_pane_t1

0xab32,	// (0x0005c6d2) main_welc_body_row_pane_ParamLimits

0xab32,	// (0x0005c6d2) main_welc_body_row_pane

0xbfcf,	// (0x0005db6f) main_welc_opti_row_pane_ParamLimits

0xbfcf,	// (0x0005db6f) main_welc_opti_row_pane

0xc6ee,	// (0x0005e28e) main_welc_opti_row_pane_g1

0xab57,	// (0x0005c6f7) main_welc_opti_row_pane_t1

0xc6f6,	// (0x0005e296) main_welc_body_row_pane_t1

0x1f26,	// (0x00053ac6) popup_notif_wgt_heading_pane

0x1f40,	// (0x00053ae0) aid_size_list_notif_wgt_del_ParamLimits

0x1f4d,	// (0x00053aed) list_notif_wgt_row_pane_g1_ParamLimits

0x1f59,	// (0x00053af9) list_notif_wgt_row_pane_g2_ParamLimits

0x1f68,	// (0x00053b08) list_notif_wgt_row_pane_g3_ParamLimits

0xfd53,	// (0x000618f3) list_notif_wgt_row_pane_g_ParamLimits

0x1f75,	// (0x00053b15) list_notif_wgt_row_pane_t1_ParamLimits

0x1f8b,	// (0x00053b2b) list_notif_wgt_row_pane_t2_ParamLimits

0x1f9d,	// (0x00053b3d) list_notif_wgt_row_pane_t3_ParamLimits

0xfd5a,	// (0x000618fa) list_notif_wgt_row_pane_t_ParamLimits

0xa31a,	// (0x0005beba) listrow_wgtman_pane_g1_ParamLimits

0xa327,	// (0x0005bec7) listrow_wgtman_pane_g2_ParamLimits

0xfd8a,	// (0x0006192a) listrow_wgtman_pane_g_ParamLimits

0xa345,	// (0x0005bee5) listrow_wgtman_pane_t1_ParamLimits

0xa35d,	// (0x0005befd) listrow_wgtman_pane_t2_ParamLimits

0xfd8f,	// (0x0006192f) listrow_wgtman_pane_t_ParamLimits

0xa383,	// (0x0005bf23) wait_bar_pane_cp09_ParamLimits

0xb8dc,	// (0x0005d47c) bg_popup_heading_pane_cp02

0xc705,	// (0x0005e2a5) popup_notif_wgt_heading_pane_g1

0xc70d,	// (0x0005e2ad) popup_notif_wgt_heading_pane_t1

0xb8dc,	// (0x0005d47c) main_vids_pane

0xb8dc,	// (0x0005d47c) vids_listscroll_pane

0xab66,	// (0x0005c706) scroll_pane_cp040

0xb8dc,	// (0x0005d47c) vids_list_pane

0xab71,	// (0x0005c711) vids_list_double_pane_ParamLimits

0xab71,	// (0x0005c711) vids_list_double_pane

0xab88,	// (0x0005c728) vids_list_double_pane_g1

0xab91,	// (0x0005c731) vids_list_double_pane_t1

0xaba1,	// (0x0005c741) vids_list_double_pane_t2

0x0001,

0xfe28,	// (0x000619c8) vids_list_double_pane_t

0x5e60,	// (0x00057a00) main_ncimui_pane_ParamLimits

0x90a5,	// (0x0005ac45) main_ncimui_pane_g1_ParamLimits

0x90b1,	// (0x0005ac51) main_ncimui_pane_g2_ParamLimits

0x90b1,	// (0x0005ac51) main_ncimui_pane_g2

0x0001,

0xfb0d,	// (0x000616ad) main_ncimui_pane_g_ParamLimits

0xfb0d,	// (0x000616ad) main_ncimui_pane_g

0xa956,	// (0x0005c4f6) main_welc_pane_g1_ParamLimits

0xa956,	// (0x0005c4f6) main_welc_pane_g1

0xa962,	// (0x0005c502) main_welc_pane_g2_ParamLimits

0xa962,	// (0x0005c502) main_welc_pane_g2

0x0003,

0xfe12,	// (0x000619b2) main_welc_pane_g_ParamLimits

0xfe12,	// (0x000619b2) main_welc_pane_g

0xbf54,	// (0x0005daf4) listscroll_mce_pane_ParamLimits

0xd1f5,	// (0x0005ed95) wait_bar_pane_cp10

0xe4d9,	// (0x00060079) main_cale_day_pane_ParamLimits

0xe4d9,	// (0x00060079) main_cale_week_pane_ParamLimits

0xbf54,	// (0x0005daf4) main_messa_pane_ParamLimits

0x6b39,	// (0x000586d9) main_clock2_btn_pane_ParamLimits

0x6b39,	// (0x000586d9) main_clock2_btn_pane

0xecf4,	// (0x00060894) main_clock2_btn_pane_cp01_ParamLimits

0xecf4,	// (0x00060894) main_clock2_btn_pane_cp01

0x1b7b,	// (0x0005371b) list_cale_mrui_pane_ParamLimits

0x1fe1,	// (0x00053b81) main_cf0_pane_g2

0x0001,

0xfd61,	// (0x00061901) main_cf0_pane_g

0xa52a,	// (0x0005c0ca) area_left_week_number_pane_ParamLimits

0xa53d,	// (0x0005c0dd) area_top_day_name_pane_ParamLimits

0xa54b,	// (0x0005c0eb) frame_month_view_pane_ParamLimits

0x2109,	// (0x00053ca9) grid_month_view_pane_ParamLimits

0x2117,	// (0x00053cb7) frm_month_g1_ParamLimits

0xa5c9,	// (0x0005c169) frm_month_g2_ParamLimits

0xa5da,	// (0x0005c17a) frm_month_g3_ParamLimits

0xa5eb,	// (0x0005c18b) frm_month_g4_ParamLimits

0xa5fc,	// (0x0005c19c) frm_month_g5_ParamLimits

0xa60f,	// (0x0005c1af) frm_month_g6_ParamLimits

0xa622,	// (0x0005c1c2) frm_month_g7_ParamLimits

0x2124,	// (0x00053cc4) frm_month_g8_ParamLimits

0xa635,	// (0x0005c1d5) frm_month_g9_ParamLimits

0xa642,	// (0x0005c1e2) frm_month_g10_ParamLimits

0xa64f,	// (0x0005c1ef) frm_month_g11_ParamLimits

0xa65c,	// (0x0005c1fc) frm_month_g12_ParamLimits

0xa669,	// (0x0005c209) frm_month_g13_ParamLimits

0xa676,	// (0x0005c216) frm_month_g14_ParamLimits

0xa685,	// (0x0005c225) frm_month_g15_ParamLimits

0xa694,	// (0x0005c234) frm_month_g16_ParamLimits

0xfdb9,	// (0x00061959) frm_month_g_ParamLimits

0x2131,	// (0x00053cd1) cell_top_day_name_pane_t1_ParamLimits

0xa6a3,	// (0x0005c243) cell_area_left_week_number_pane_g1_ParamLimits

0xa6b2,	// (0x0005c252) cell_area_left_week_number_pane_t1_ParamLimits

0xbfdd,	// (0x0005db7d) cell_month_view_pane_g1_ParamLimits

0xa6c8,	// (0x0005c268) cell_month_view_pane_t1_ParamLimits

0xbf4c,	// (0x0005daec) main_clock2_btn_pane_g1

0xc71b,	// (0x0005e2bb) main_clock2_btn_pane_t1

0xbf76,	// (0x0005db16) listscroll_cmail_pane_ParamLimits

0x1907,	// (0x000534a7) main_sp_fs_email_pane_g1_ParamLimits

0x1913,	// (0x000534b3) main_sp_fs_email_pane_g2_ParamLimits

0xfc07,	// (0x000617a7) main_sp_fs_email_pane_g_ParamLimits

0x1ca9,	// (0x00053849) list_recal_day_pane_ParamLimits

0x1cba,	// (0x0005385a) mian_recal_day_pane_t1

0x9859,	// (0x0005b3f9) list_single_dyc_row_text_pane_t4_ParamLimits

0x9859,	// (0x0005b3f9) list_single_dyc_row_text_pane_t4

0x9890,	// (0x0005b430) list_single_dyc_row_text_pane_t5_ParamLimits

0x9890,	// (0x0005b430) list_single_dyc_row_text_pane_t5

0x04e9,	// (0x00052089) list_single_dyc_row_text_pane_t6_ParamLimits

0x04e9,	// (0x00052089) list_single_dyc_row_text_pane_t6

0xc5ee,	// (0x0005e18e) aid_mgn_list_cale_time_pane

0x5e60,	// (0x00057a00) main_gallery2_pane_ParamLimits

0xed0a,	// (0x000608aa) main_clock2_pane_cp01_t1

0xed1a,	// (0x000608ba) main_clock2_pane_cp01_t3

0x0001,

0xf6fc,	// (0x0006129c) main_clock2_pane_cp01_t

0x39b8,	// (0x00055558) cale_week_scroll_pane_g16_ParamLimits

0x39b8,	// (0x00055558) cale_week_scroll_pane_g16

0xc22b,	// (0x0005ddcb) vorec_slider_pane

0x220f,	// (0x00053daf) vidtel_button_pane_t1_ParamLimits

0x9efa,	// (0x0005ba9a) main_fs_bigclock_clock_pane_g1_ParamLimits

0x9efa,	// (0x0005ba9a) main_fs_bigclock_clock_pane_g2_ParamLimits

0x9f07,	// (0x0005baa7) main_fs_bigclock_clock_pane_g3_ParamLimits

0x9f07,	// (0x0005baa7) main_fs_bigclock_clock_pane_g4_ParamLimits

0xfd0f,	// (0x000618af) main_fs_bigclock_clock_pane_g_ParamLimits

0x9f13,	// (0x0005bab3) main_fs_bigclock_clock_pane_t1_ParamLimits

0x9f26,	// (0x0005bac6) main_fs_bigclock_clock_pane_t2_ParamLimits

0xfd18,	// (0x000618b8) main_fs_bigclock_clock_pane_t_ParamLimits

0x64d6,	// (0x00058076) main_mup3_lyrics_pane_ParamLimits

0x64d6,	// (0x00058076) main_mup3_lyrics_pane

0xabd4,	// (0x0005c774) main_mup3_lyrics_pane_t1_ParamLimits

0xabd4,	// (0x0005c774) main_mup3_lyrics_pane_t1

0x7065,	// (0x00058c05) aid_main_mp4_pane_t1_area

0x706f,	// (0x00058c0f) aid_main_mp4_pane_t2_area

0x7174,	// (0x00058d14) main_mp4_pane_g7_ParamLimits

0x7174,	// (0x00058d14) main_mp4_pane_g7

0x7180,	// (0x00058d20) main_mp4_pane_g8_ParamLimits

0x7180,	// (0x00058d20) main_mp4_pane_g8

0x757c,	// (0x0005911c) aid_call6_pane_g1_size

0xa84e,	// (0x0005c3ee) list_double_large_graphic_phob2_other_pane_ParamLimits

0xa84e,	// (0x0005c3ee) list_double_large_graphic_phob2_other_pane

0xc5a6,	// (0x0005e146) list_double_large_graphic_phob2_other_pane_g1

0xb8dc,	// (0x0005d47c) list_highlight_pane_cp026

0xbf76,	// (0x0005db16) main_welc_pane_ParamLimits

0x96c8,	// (0x0005b268) main_sp_fs_ctrlbar_pane_g3_ParamLimits

0x96c8,	// (0x0005b268) main_sp_fs_ctrlbar_pane_g3

0x96e0,	// (0x0005b280) main_sp_fs_ctrlbar_pane_g4_ParamLimits

0x96e0,	// (0x0005b280) main_sp_fs_ctrlbar_pane_g4

0x9712,	// (0x0005b2b2) toolbar2_fixed_button_pane_cp01

0x971d,	// (0x0005b2bd) toolbar2_fixed_button_pane_cp02

0x9728,	// (0x0005b2c8) toolbar2_fixed_button_pane_cp03

0xa913,	// (0x0005c4b3) list_welc_entry_pane_ParamLimits

0xa913,	// (0x0005c4b3) list_welc_entry_pane

0xa970,	// (0x0005c510) main_welc_pane_g3_ParamLimits

0xa970,	// (0x0005c510) main_welc_pane_g3

0xa9b6,	// (0x0005c556) main_welc_pane_t2_ParamLimits

0xa9b6,	// (0x0005c556) main_welc_pane_t2

0xa9ca,	// (0x0005c56a) main_welc_pane_t3_ParamLimits

0xa9ca,	// (0x0005c56a) main_welc_pane_t3

0x0005,

0xfe1b,	// (0x000619bb) main_welc_pane_t_ParamLimits

0xfe1b,	// (0x000619bb) main_welc_pane_t

0xaac6,	// (0x0005c666) welc_button_pane_ParamLimits

0xaac6,	// (0x0005c666) welc_button_pane

0xab24,	// (0x0005c6c4) welc_service_logo_pane_ParamLimits

0xab24,	// (0x0005c6c4) welc_service_logo_pane

0xac06,	// (0x0005c7a6) list_single_welc_entry_pane_ParamLimits

0xac06,	// (0x0005c7a6) list_single_welc_entry_pane

0xac17,	// (0x0005c7b7) list_single_welc_entry_pane_g1

0xac1f,	// (0x0005c7bf) list_single_welc_entry_pane_t1

0xac2d,	// (0x0005c7cd) list_single_welc_entry_pane_t2

0x0001,

0xfe2d,	// (0x000619cd) list_single_welc_entry_pane_t

0xb8dc,	// (0x0005d47c) bg_button_pane_cp035

0xac3b,	// (0x0005c7db) welc_button_pane_t1

0xc729,	// (0x0005e2c9) welc_service_logo_pane_g1

0xc732,	// (0x0005e2d2) welc_service_logo_pane_g2

0x0001,

0xfe32,	// (0x000619d2) welc_service_logo_pane_g

0x3425,	// (0x00054fc5) main_int_radio_pane

0xc694,	// (0x0005e234) list_single_fs_dyc_pane_g1

0xa76b,	// (0x0005c30b) list_double_large_graphic_phob2_pane_g3_ParamLimits

0xa76b,	// (0x0005c30b) list_double_large_graphic_phob2_pane_g3

0xa777,	// (0x0005c317) list_double_large_graphic_phob2_pane_g4_ParamLimits

0xa777,	// (0x0005c317) list_double_large_graphic_phob2_pane_g4

0xac49,	// (0x0005c7e9) main_int_radio1_pane_ParamLimits

0xac49,	// (0x0005c7e9) main_int_radio1_pane

0xc73b,	// (0x0005e2db) find_pane_cp02

0xac5b,	// (0x0005c7fb) input_focus_pane_cp12_ParamLimits

0xac5b,	// (0x0005c7fb) input_focus_pane_cp12

0xac67,	// (0x0005c807) input_focus_pane_cp13_ParamLimits

0xac67,	// (0x0005c807) input_focus_pane_cp13

0xac7f,	// (0x0005c81f) input_focus_pane_cp14_ParamLimits

0xac7f,	// (0x0005c81f) input_focus_pane_cp14

0xc744,	// (0x0005e2e4) int_radio1_listscroll_pane

0xac97,	// (0x0005c837) main_int_radio1_pane_g1_ParamLimits

0xac97,	// (0x0005c837) main_int_radio1_pane_g1

0xaca7,	// (0x0005c847) main_int_radio1_pane_t1_ParamLimits

0xaca7,	// (0x0005c847) main_int_radio1_pane_t1

0xacbb,	// (0x0005c85b) main_int_radio1_pane_t2_ParamLimits

0xacbb,	// (0x0005c85b) main_int_radio1_pane_t2

0xaccf,	// (0x0005c86f) main_int_radio1_pane_t3_ParamLimits

0xaccf,	// (0x0005c86f) main_int_radio1_pane_t3

0xace3,	// (0x0005c883) main_int_radio1_pane_t4_ParamLimits

0xace3,	// (0x0005c883) main_int_radio1_pane_t4

0xc74e,	// (0x0005e2ee) main_int_radio1_pane_t5_ParamLimits

0xc74e,	// (0x0005e2ee) main_int_radio1_pane_t5

0xacfa,	// (0x0005c89a) main_int_radio1_pane_t6_ParamLimits

0xacfa,	// (0x0005c89a) main_int_radio1_pane_t6

0xad0c,	// (0x0005c8ac) main_int_radio1_pane_t7_ParamLimits

0xad0c,	// (0x0005c8ac) main_int_radio1_pane_t7

0xad1e,	// (0x0005c8be) main_int_radio1_pane_t8_ParamLimits

0xad1e,	// (0x0005c8be) main_int_radio1_pane_t8

0xad32,	// (0x0005c8d2) main_int_radio1_pane_t9_ParamLimits

0xad32,	// (0x0005c8d2) main_int_radio1_pane_t9

0xad44,	// (0x0005c8e4) main_int_radio1_pane_t10_ParamLimits

0xad44,	// (0x0005c8e4) main_int_radio1_pane_t10

0xad75,	// (0x0005c915) main_int_radio1_pane_t11_ParamLimits

0xad75,	// (0x0005c915) main_int_radio1_pane_t11

0xada6,	// (0x0005c946) main_int_radio1_pane_t12_ParamLimits

0xada6,	// (0x0005c946) main_int_radio1_pane_t12

0x000b,

0xfe37,	// (0x000619d7) main_int_radio1_pane_t_ParamLimits

0xfe37,	// (0x000619d7) main_int_radio1_pane_t

0xc760,	// (0x0005e300) int_radio_list_pane

0x1c8b,	// (0x0005382b) scroll_pane_cp037

0xc768,	// (0x0005e308) list_double_large_graphic_int_radio_pane_ParamLimits

0xc768,	// (0x0005e308) list_double_large_graphic_int_radio_pane

0xc780,	// (0x0005e320) list_double_large_graphic_int_radio_pane_g1

0x0759,	// (0x000522f9) list_double_large_graphic_int_radio_pane_t1

0x0767,	// (0x00052307) list_double_large_graphic_int_radio_pane_t2

0x0001,

0xfe50,	// (0x000619f0) list_double_large_graphic_int_radio_pane_t

0xb8dc,	// (0x0005d47c) list_highlight_pane_cp027

0xc6de,	// (0x0005e27e) main_button_pane_4

0xa97c,	// (0x0005c51c) main_welc_pane_g4_ParamLimits

0xa97c,	// (0x0005c51c) main_welc_pane_g4

0xa9dc,	// (0x0005c57c) main_welc_pane_t4_ParamLimits

0xa9dc,	// (0x0005c57c) main_welc_pane_t4

0xa9ee,	// (0x0005c58e) main_welc_pane_t5_ParamLimits

0xa9ee,	// (0x0005c58e) main_welc_pane_t5

0xaa1e,	// (0x0005c5be) main_welc_pane_t6_ParamLimits

0xaa1e,	// (0x0005c5be) main_welc_pane_t6

0xaad4,	// (0x0005c674) welc_button_pane_2_ParamLimits

0xaad4,	// (0x0005c674) welc_button_pane_2

0xaaec,	// (0x0005c68c) welc_button_pane_3_ParamLimits

0xaaec,	// (0x0005c68c) welc_button_pane_3

0xc6e6,	// (0x0005e286) welc_button_pane_4

0xab06,	// (0x0005c6a6) welc_button_pane_5_ParamLimits

0xab06,	// (0x0005c6a6) welc_button_pane_5

0x3234,	// (0x00054dd4) main_popup_welc_pane

0xc7a1,	// (0x0005e341) main_welc_sk_g3

0xc7ab,	// (0x0005e34b) main_welc_sk_g4

0xc7b5,	// (0x0005e355) main_welc_sk_t3

0xc7c5,	// (0x0005e365) main_welc_sk_t4

0xc7d5,	// (0x0005e375) popup_welc_pane_t4

0xc7e3,	// (0x0005e383) popup_welc_pane_t5

0xc7f1,	// (0x0005e391) popup_welc_pane_t6

0x3425,	// (0x00054fc5) main_acti_pane

0xb8dc,	// (0x0005d47c) main_sso_pane

0xadbd,	// (0x0005c95d) sso_body_pane_ParamLimits

0xadbd,	// (0x0005c95d) sso_body_pane

0xadcb,	// (0x0005c96b) sso_logo_pane_ParamLimits

0xadcb,	// (0x0005c96b) sso_logo_pane

0xadfc,	// (0x0005c99c) sso_sk_pane_ParamLimits

0xadfc,	// (0x0005c99c) sso_sk_pane

0xc82f,	// (0x0005e3cf) main_sso_logo_pane_g1

0xae09,	// (0x0005c9a9) sso_sk_pane_t1_ParamLimits

0xae09,	// (0x0005c9a9) sso_sk_pane_t1

0xae1d,	// (0x0005c9bd) sso_sk_pane_t2_ParamLimits

0xae1d,	// (0x0005c9bd) sso_sk_pane_t2

0x0001,

0xfe55,	// (0x000619f5) sso_sk_pane_t_ParamLimits

0xfe55,	// (0x000619f5) sso_sk_pane_t

0xc83a,	// (0x0005e3da) aid_sso_gap

0xc843,	// (0x0005e3e3) aid_sso_txt1

0xc84d,	// (0x0005e3ed) aid_sso_txt2

0xc857,	// (0x0005e3f7) aid_sso_txt3

0x0002,

0xfe5a,	// (0x000619fa) aid_sso_txt

0xc861,	// (0x0005e401) aid_sso_widget

0xae7a,	// (0x0005ca1a) sso_btn_pane_ParamLimits

0xae7a,	// (0x0005ca1a) sso_btn_pane

0xaeee,	// (0x0005ca8e) sso_option_pane_ParamLimits

0xaeee,	// (0x0005ca8e) sso_option_pane

0xaf9a,	// (0x0005cb3a) sso_query_pane_ParamLimits

0xaf9a,	// (0x0005cb3a) sso_query_pane

0xafea,	// (0x0005cb8a) sso_query_pane_cp01_ParamLimits

0xafea,	// (0x0005cb8a) sso_query_pane_cp01

0xb03c,	// (0x0005cbdc) sso_t_hdr_pane_ParamLimits

0xb03c,	// (0x0005cbdc) sso_t_hdr_pane

0xb060,	// (0x0005cc00) sso_t_nml_pane_ParamLimits

0xb060,	// (0x0005cc00) sso_t_nml_pane

0xc86b,	// (0x0005e40b) sso_t_sub_pane

0xadd8,	// (0x0005c978) sso_popup_window_ParamLimits

0xadd8,	// (0x0005c978) sso_popup_window

0xae2f,	// (0x0005c9cf) sso_apps_pane_ParamLimits

0xae2f,	// (0x0005c9cf) sso_apps_pane

0xae52,	// (0x0005c9f2) sso_body_pane_g1

0xae5a,	// (0x0005c9fa) sso_body_pane_t1

0xae6a,	// (0x0005ca0a) sso_body_pane_t2

0x0001,

0xfe61,	// (0x00061a01) sso_body_pane_t

0xaebe,	// (0x0005ca5e) sso_btn_pane_cp01_ParamLimits

0xaebe,	// (0x0005ca5e) sso_btn_pane_cp01

0xaf6c,	// (0x0005cb0c) sso_prog_pane_ParamLimits

0xaf6c,	// (0x0005cb0c) sso_prog_pane

0xb0b0,	// (0x0005cc50) sso_t_hdr_pane_t1_ParamLimits

0xb0b0,	// (0x0005cc50) sso_t_hdr_pane_t1

0xc880,	// (0x0005e420) input_focus_pane_cp10_ParamLimits

0xc880,	// (0x0005e420) input_focus_pane_cp10

0xc894,	// (0x0005e434) sso_query_pane_t1_ParamLimits

0xc894,	// (0x0005e434) sso_query_pane_t1

0xc8a7,	// (0x0005e447) sso_query_pane_t2_ParamLimits

0xc8a7,	// (0x0005e447) sso_query_pane_t2

0xc8c0,	// (0x0005e460) sso_query_pane_t3_ParamLimits

0xc8c0,	// (0x0005e460) sso_query_pane_t3

0xc8ea,	// (0x0005e48a) sso_query_pane_t4_ParamLimits

0xc8ea,	// (0x0005e48a) sso_query_pane_t4

0x0003,

0xfe66,	// (0x00061a06) sso_query_pane_t_ParamLimits

0xfe66,	// (0x00061a06) sso_query_pane_t

0xc798,	// (0x0005e338) bg_button_pane_cp22

0xc789,	// (0x0005e329) sso_btn_pane_t1

0xb0c9,	// (0x0005cc69) sso_t_nml_pane_t1_ParamLimits

0xb0c9,	// (0x0005cc69) sso_t_nml_pane_t1

0xc90e,	// (0x0005e4ae) sso_option_row_pane_ParamLimits

0xc90e,	// (0x0005e4ae) sso_option_row_pane

0xc91b,	// (0x0005e4bb) sso_t_sub_pane_t1_ParamLimits

0xc91b,	// (0x0005e4bb) sso_t_sub_pane_t1

0xbf76,	// (0x0005db16) bg_popup_window_pane_cp11_ParamLimits

0xbf76,	// (0x0005db16) bg_popup_window_pane_cp11

0xc938,	// (0x0005e4d8) popup_sk_window_cp01_ParamLimits

0xc938,	// (0x0005e4d8) popup_sk_window_cp01

0xc945,	// (0x0005e4e5) sso_popup_body_pane_ParamLimits

0xc945,	// (0x0005e4e5) sso_popup_body_pane

0xc952,	// (0x0005e4f2) scroll_pane_cp21_ParamLimits

0xc952,	// (0x0005e4f2) scroll_pane_cp21

0xc95f,	// (0x0005e4ff) sso_popup_body_t_pane_ParamLimits

0xc95f,	// (0x0005e4ff) sso_popup_body_t_pane

0xc96c,	// (0x0005e50c) sso_popup_body_t_hdr_pane_ParamLimits

0xc96c,	// (0x0005e50c) sso_popup_body_t_hdr_pane

0xb0e6,	// (0x0005cc86) sso_popup_body_t_nml_pane_ParamLimits

0xb0e6,	// (0x0005cc86) sso_popup_body_t_nml_pane

0xb104,	// (0x0005cca4) sso_popup_body_t_sub_pane_ParamLimits

0xb104,	// (0x0005cca4) sso_popup_body_t_sub_pane

0xc97e,	// (0x0005e51e) sso_popup_body_t_hdr_pane_t1

0xb127,	// (0x0005ccc7) sso_popup_body_t_nml_pane_t1_ParamLimits

0xb127,	// (0x0005ccc7) sso_popup_body_t_nml_pane_t1

0xc98e,	// (0x0005e52e) sso_popup_body_t_sub_pane_t1_ParamLimits

0xc98e,	// (0x0005e52e) sso_popup_body_t_sub_pane_t1

0xc01b,	// (0x0005dbbb) sso_prog_pane_g1

0xb16b,	// (0x0005cd0b) sso_apps_pane_comp1_ParamLimits

0xb16b,	// (0x0005cd0b) sso_apps_pane_comp1

0xc9b3,	// (0x0005e553) sso_apps_pane_comp1_g1

0xc9bb,	// (0x0005e55b) sso_apps_pane_comp1_t1

0xc9d7,	// (0x0005e577) sso_option_row_pane_g1

0xc9df,	// (0x0005e57f) sso_option_row_pane_t1

0x19b4,	// (0x00053554) list_cmail_pane_ParamLimits

0xb8dc,	// (0x0005d47c) main_call7_pane

0xa901,	// (0x0005c4a1) bg_welc_area_ParamLimits

0xa901,	// (0x0005c4a1) bg_welc_area

0xaa54,	// (0x0005c5f4) sso_t_hdr_pane_a_t1_ParamLimits

0xaa54,	// (0x0005c5f4) sso_t_hdr_pane_a_t1

0xaa68,	// (0x0005c608) sso_t_nml_pane_a_t1_ParamLimits

0xaa68,	// (0x0005c608) sso_t_nml_pane_a_t1

0xaa92,	// (0x0005c632) sso_t_sub_pane_a_t1_ParamLimits

0xaa92,	// (0x0005c632) sso_t_sub_pane_a_t1

0xab16,	// (0x0005c6b6) welc_button_pane_cp01_ParamLimits

0xab16,	// (0x0005c6b6) welc_button_pane_cp01

0xc789,	// (0x0005e329) sso_btn_pane_t1_copy1

0xc798,	// (0x0005e338) welc_button_pane_2_comp1

0xc7ff,	// (0x0005e39f) sso_t_hdr_pane_p_t1

0xc80f,	// (0x0005e3af) sso_t_nml_pane_p_t1

0xc81f,	// (0x0005e3bf) sso_t_sub_pane_p_t1

0xb8dc,	// (0x0005d47c) main_att_pane

0xb8dc,	// (0x0005d47c) main_vod_pane

0xc86b,	// (0x0005e40b) sso_t_sub_pane_ParamLimits

0xc9c9,	// (0x0005e569) input_focus_pane_cp10_t1

0xc9df,	// (0x0005e57f) sso_option_row_pane_t1_ParamLimits

0xb182,	// (0x0005cd22) main_att_body_pane_ParamLimits

0xb182,	// (0x0005cd22) main_att_body_pane

0xb196,	// (0x0005cd36) att_btn_emg_pane_ParamLimits

0xb196,	// (0x0005cd36) att_btn_emg_pane

0xb1ae,	// (0x0005cd4e) att_btn_pane_ParamLimits

0xb1ae,	// (0x0005cd4e) att_btn_pane

0xb216,	// (0x0005cdb6) att_btn_pane_cp01_ParamLimits

0xb216,	// (0x0005cdb6) att_btn_pane_cp01

0xb230,	// (0x0005cdd0) att_li_srv_pane_ParamLimits

0xb230,	// (0x0005cdd0) att_li_srv_pane

0xb242,	// (0x0005cde2) att_opt_pane_ParamLimits

0xb242,	// (0x0005cde2) att_opt_pane

0xb286,	// (0x0005ce26) att_query_pane_ParamLimits

0xb286,	// (0x0005ce26) att_query_pane

0xb2f6,	// (0x0005ce96) att_query_pane_cp01_ParamLimits

0xb2f6,	// (0x0005ce96) att_query_pane_cp01

0xb33a,	// (0x0005ceda) att_t_hdr_pane_ParamLimits

0xb33a,	// (0x0005ceda) att_t_hdr_pane

0xb3a0,	// (0x0005cf40) att_t_nml_pane_ParamLimits

0xb3a0,	// (0x0005cf40) att_t_nml_pane

0xb408,	// (0x0005cfa8) att_t_nml_pane_cp01_ParamLimits

0xb408,	// (0x0005cfa8) att_t_nml_pane_cp01

0xb42c,	// (0x0005cfcc) att_t_nmlb_pane_ParamLimits

0xb42c,	// (0x0005cfcc) att_t_nmlb_pane

0xb490,	// (0x0005d030) att_term_pane_ParamLimits

0xb490,	// (0x0005d030) att_term_pane

0xb4d2,	// (0x0005d072) main_att_body_pane_g1_ParamLimits

0xb4d2,	// (0x0005d072) main_att_body_pane_g1

0xc9f8,	// (0x0005e598) att_t_hdr_pane_t1_ParamLimits

0xc9f8,	// (0x0005e598) att_t_hdr_pane_t1

0xca11,	// (0x0005e5b1) att_t_nml_pane_t1_ParamLimits

0xca11,	// (0x0005e5b1) att_t_nml_pane_t1

0xca36,	// (0x0005e5d6) att_btn_pane_t1

0xc798,	// (0x0005e338) bg_button_pane_cp23

0xb4fc,	// (0x0005d09c) att_li_srv_row_pane_ParamLimits

0xb4fc,	// (0x0005d09c) att_li_srv_row_pane

0xca46,	// (0x0005e5e6) att_t_nmlb_pane_t1_ParamLimits

0xca46,	// (0x0005e5e6) att_t_nmlb_pane_t1

0xca64,	// (0x0005e604) att_query_pane_t1

0xca73,	// (0x0005e613) att_query_pane_t2

0xca82,	// (0x0005e622) att_query_pane_t3

0x0002,

0xfe6f,	// (0x00061a0f) att_query_pane_t

0xca91,	// (0x0005e631) input_focus_pane_cp11

0xca9a,	// (0x0005e63a) att_term_pane_t1_ParamLimits

0xca9a,	// (0x0005e63a) att_term_pane_t1

0xb8dc,	// (0x0005d47c) att_opt_row_pane

0xc9d7,	// (0x0005e577) att_opt_row_pane_g1

0xcab7,	// (0x0005e657) att_opt_row_pane_t1_ParamLimits

0xcab7,	// (0x0005e657) att_opt_row_pane_t1

0xb50c,	// (0x0005d0ac) att_li_srv_row_pane_g1

0xb514,	// (0x0005d0b4) att_li_srv_row_pane_t1_ParamLimits

0xb514,	// (0x0005d0b4) att_li_srv_row_pane_t1

0xb529,	// (0x0005d0c9) att_li_srv_row_pane_t2_ParamLimits

0xb529,	// (0x0005d0c9) att_li_srv_row_pane_t2

0x0001,

0xfe76,	// (0x00061a16) att_li_srv_row_pane_t_ParamLimits

0xfe76,	// (0x00061a16) att_li_srv_row_pane_t

0xcad0,	// (0x0005e670) att_btn_close_pane_g1

0xb8dc,	// (0x0005d47c) bg_button_pane_cp24

0xb53e,	// (0x0005d0de) main_vod_body_pane_ParamLimits

0xb53e,	// (0x0005d0de) main_vod_body_pane

0xb54c,	// (0x0005d0ec) main_vod_body_pane_g1_ParamLimits

0xb54c,	// (0x0005d0ec) main_vod_body_pane_g1

0xb57c,	// (0x0005d11c) scroll_pane_cp24_ParamLimits

0xb57c,	// (0x0005d11c) scroll_pane_cp24

0xb5c4,	// (0x0005d164) vod_btn_pane_ParamLimits

0xb5c4,	// (0x0005d164) vod_btn_pane

0xb602,	// (0x0005d1a2) vod_det_pane_ParamLimits

0xb602,	// (0x0005d1a2) vod_det_pane

0xb62e,	// (0x0005d1ce) vod_logo_g1_ParamLimits

0xb62e,	// (0x0005d1ce) vod_logo_g1

0xb668,	// (0x0005d208) vod_opt_pane_ParamLimits

0xb668,	// (0x0005d208) vod_opt_pane

0xb698,	// (0x0005d238) vod_opt_pane_cp01_ParamLimits

0xb698,	// (0x0005d238) vod_opt_pane_cp01

0xb6c0,	// (0x0005d260) vod_query_pane_ParamLimits

0xb6c0,	// (0x0005d260) vod_query_pane

0xb6e8,	// (0x0005d288) vod_query_pane_cp01_ParamLimits

0xb6e8,	// (0x0005d288) vod_query_pane_cp01

0xb6f4,	// (0x0005d294) vod_t_nml_pane_ParamLimits

0xb6f4,	// (0x0005d294) vod_t_nml_pane

0xb79a,	// (0x0005d33a) vod_t_nml_pane_cp01_ParamLimits

0xb79a,	// (0x0005d33a) vod_t_nml_pane_cp01

0xb7d2,	// (0x0005d372) vod_t_sub_pane_ParamLimits

0xb7d2,	// (0x0005d372) vod_t_sub_pane

0xb7fe,	// (0x0005d39e) vod_t_sub_pane_cp01_ParamLimits

0xb7fe,	// (0x0005d39e) vod_t_sub_pane_cp01

0xca91,	// (0x0005e631) vod_query_field_pane

0xcad8,	// (0x0005e678) vod_query_pane_t1

0xc798,	// (0x0005e338) bg_button_pane_cp25

0xc789,	// (0x0005e329) sso_btn_pane_t1_copy2

0xb826,	// (0x0005d3c6) vod_t_nml_pane_t1_ParamLimits

0xb826,	// (0x0005d3c6) vod_t_nml_pane_t1

0xcae7,	// (0x0005e687) vod_opt_row_pane_ParamLimits

0xcae7,	// (0x0005e687) vod_opt_row_pane

0xcaf9,	// (0x0005e699) vod_t_sub_pane_t1_ParamLimits

0xcaf9,	// (0x0005e699) vod_t_sub_pane_t1

0xcb12,	// (0x0005e6b2) vod_det_cell_pane_ParamLimits

0xcb12,	// (0x0005e6b2) vod_det_cell_pane

0xb8dc,	// (0x0005d47c) input_focus_pane_cp15

0xcb23,	// (0x0005e6c3) vod_query_field_pane_t1

0xcb31,	// (0x0005e6d1) vod_opt_row_pane_g1_ParamLimits

0xcb31,	// (0x0005e6d1) vod_opt_row_pane_g1

0xcb3d,	// (0x0005e6dd) vod_opt_row_pane_t1_ParamLimits

0xcb3d,	// (0x0005e6dd) vod_opt_row_pane_t1

0xcb5c,	// (0x0005e6fc) vod_det_cell_field_pane

0xcb65,	// (0x0005e705) vod_det_cell_pane_g1

0xcb6d,	// (0x0005e70d) vod_det_cell_pane_t1

0xb8dc,	// (0x0005d47c) input_focus_pane_cp16

0xcb7c,	// (0x0005e71c) vod_det_cell_field_pane_t1

0xb85d,	// (0x0005d3fd) call7_btn_grp_pane_ParamLimits

0xb85d,	// (0x0005d3fd) call7_btn_grp_pane

0xb86c,	// (0x0005d40c) call7_bubble_pane_ParamLimits

0xb86c,	// (0x0005d40c) call7_bubble_pane

0xb87a,	// (0x0005d41a) cell_call7_btn_pane_ParamLimits

0xb87a,	// (0x0005d41a) cell_call7_btn_pane

0xb889,	// (0x0005d429) call7_pane_g1_ParamLimits

0xb889,	// (0x0005d429) call7_pane_g1

0xb898,	// (0x0005d438) call7_windows_conf_pane_ParamLimits

0xb898,	// (0x0005d438) call7_windows_conf_pane

0xb8b2,	// (0x0005d452) popup_call7_1st_window_ParamLimits

0xb8b2,	// (0x0005d452) popup_call7_1st_window

0xb8c0,	// (0x0005d460) popup_call7_2nd_window_ParamLimits

0xb8c0,	// (0x0005d460) popup_call7_2nd_window

0xb8ce,	// (0x0005d46e) popup_call7_3rd_window_ParamLimits

0xb8ce,	// (0x0005d46e) popup_call7_3rd_window

0xb8dc,	// (0x0005d47c) bg_button_pane_cp26

0x205e,	// (0x00053bfe) cell_call7_btn_pane_g1

0x2067,	// (0x00053c07) cell_call7_btn_pane_t1

0xb8dc,	// (0x0005d47c) bg_popup_window_pane_cp12

0xcb8a,	// (0x0005e72a) popup_call7_1st_window_g1

0xcb92,	// (0x0005e732) popup_call7_1st_window_g2

0xcb9a,	// (0x0005e73a) popup_call7_1st_window_g3

0x0002,

0xfe7b,	// (0x00061a1b) popup_call7_1st_window_g

0xcba2,	// (0x0005e742) popup_call7_1st_window_t1

0xcbb1,	// (0x0005e751) popup_call7_1st_window_t2

0xcbbf,	// (0x0005e75f) popup_call7_1st_window_t3

0x0002,

0xfe82,	// (0x00061a22) popup_call7_1st_window_t

0xb8dc,	// (0x0005d47c) bg_popup_window_pane_cp13

0xcbcd,	// (0x0005e76d) popup_call7_2nd_window_g1

0xcbd5,	// (0x0005e775) popup_call7_2nd_window_g2

0xcbdd,	// (0x0005e77d) popup_call7_2nd_window_g3

0x0002,

0xfe89,	// (0x00061a29) popup_call7_2nd_window_g

0xcba2,	// (0x0005e742) popup_call7_2nd_window_t1

0xb8dc,	// (0x0005d47c) bg_popup_window_pane_cp14

0xcbe5,	// (0x0005e785) call7_list_conf_pane

0xcbed,	// (0x0005e78d) call7_list_conf_row_pane_ParamLimits

0xcbed,	// (0x0005e78d) call7_list_conf_row_pane

0xcc00,	// (0x0005e7a0) call7_list_conf_row_pane_g1

0xcc08,	// (0x0005e7a8) call7_list_conf_row_pane_g2

0x0001,

0xfe90,	// (0x00061a30) call7_list_conf_row_pane_g

0xcc10,	// (0x0005e7b0) call7_list_conf_row_pane_t1

0xb8dc,	// (0x0005d47c) list_highlight_pane_cp22

0xaf3e,	// (0x0005cade) sso_option_pane_cp01_ParamLimits

0xaf3e,	// (0x0005cade) sso_option_pane_cp01

0xbf54,	// (0x0005daf4) msg_header_pane_ParamLimits

0xd349,	// (0x0005eee9) bg_button_pane_cp01_ParamLimits

0xd35d,	// (0x0005eefd) input_focus_pane_cp07_ParamLimits

0x975c,	// (0x0005b2fc) popup_email_progress_window

0xc01b,	// (0x0005dbbb) popup_email_progress_window_g1

0xcc1e,	// (0x0005e7be) popup_email_progress_window_g2

0x0001,

0xfe95,	// (0x00061a35) popup_email_progress_window_g

0xcc26,	// (0x0005e7c6) popup_email_progress_window_t1
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

} // end of namespace AknLayoutScalable_Abrw_php_apps_qhd_prt_tch_Small
