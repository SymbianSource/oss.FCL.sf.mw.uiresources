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

#include "aknlayoutscalable_abrw_pnp4_apps_nhd4_prt_tch_small.h"
#include "AknLayout2ScalableDecode.h"
namespace AknLayoutScalable_Apps { extern const TUint8 KByteCodedData_AknLayoutScalable_Elaf_pnp4_apps_nhd4_prt_tch[]; }

namespace AknLayoutScalable_Abrw_pnp4_apps_nhd4_prt_tch_Small
{

extern const TUint16 KDataLookup[AknLayoutScalable_Apps::E_TApiId_TableSize];
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Apps::KByteCodedData_AknLayoutScalable_Elaf_pnp4_apps_nhd4_prt_tch + 0x0005c491 };

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
0x0d98,	// (0x0005d229) Screen

0x0da4,	// (0x0005d235) application_window

0x0e00,	// (0x0005d291) area_bottom_pane_ParamLimits

0x0e00,	// (0x0005d291) area_bottom_pane

0x0e59,	// (0x0005d2ea) area_top_pane_ParamLimits

0x0e59,	// (0x0005d2ea) area_top_pane

0x0ebd,	// (0x0005d34e) call_video_uplink_pane_ParamLimits

0x0ebd,	// (0x0005d34e) call_video_uplink_pane

0x0efc,	// (0x0005d38d) main_pane_ParamLimits

0x0efc,	// (0x0005d38d) main_pane

0xc85e,	// (0x00068cef) context_pane

0x4543,	// (0x000609d4) navi_pane

0x4569,	// (0x000609fa) popup_cale_events_window_ParamLimits

0x4569,	// (0x000609fa) popup_cale_events_window

0xc871,	// (0x00068d02) popup_mup_playback_window

0x4581,	// (0x00060a12) signal_pane

0xa7cf,	// (0x00066c60) main_browser_pane

0xa9c4,	// (0x00066e55) main_burst_pane

0x43c5,	// (0x00060856) main_calc_pane

0xc844,	// (0x00068cd5) main_cale_day_pane

0x165b,	// (0x0005daec) main_cale_month_pane

0xc844,	// (0x00068cd5) main_cale_week_pane

0xa9c4,	// (0x00066e55) main_call_pane

0x9eea,	// (0x0006637b) main_call_poc_pane

0xa9c4,	// (0x00066e55) main_camera_pane

0xa9c4,	// (0x00066e55) main_chi_dic_pane

0xb19b,	// (0x0006762c) main_clock_pane

0x9eea,	// (0x0006637b) main_fmradio_pane

0xa9c4,	// (0x00066e55) main_graph_messa_pane

0x9eea,	// (0x0006637b) main_help_pane

0xa7cf,	// (0x00066c60) main_im_pane

0xa6e2,	// (0x00066b73) main_image_pane_ParamLimits

0xa6e2,	// (0x00066b73) main_image_pane

0x9eea,	// (0x0006637b) main_location2_pane

0xa9c4,	// (0x00066e55) main_location_pane

0xa6e2,	// (0x00066b73) main_messa_pane

0x9eea,	// (0x0006637b) main_mp2_pane

0xa9c4,	// (0x00066e55) main_mp_pane

0x9eea,	// (0x0006637b) main_msg_pane

0x9eea,	// (0x0006637b) main_mup_eq_pane

0x9eea,	// (0x0006637b) main_mup_pane

0xa7cf,	// (0x00066c60) main_notes_pane

0x9eea,	// (0x0006637b) main_pec_pane

0x9eea,	// (0x0006637b) main_phob_pane

0x9eea,	// (0x0006637b) main_pinb_pane

0x9eea,	// (0x0006637b) main_postcard_pane

0x9eea,	// (0x0006637b) main_qdial_pane

0xa9c4,	// (0x00066e55) main_skin_pane

0x9eea,	// (0x0006637b) main_smil2_pane

0xa9c4,	// (0x00066e55) main_smil_pane

0xa9c4,	// (0x00066e55) main_video_pane

0xa9c4,	// (0x00066e55) main_video_tele_pane

0xa6e2,	// (0x00066b73) main_viewer_pane_ParamLimits

0xa6e2,	// (0x00066b73) main_viewer_pane

0xa9c4,	// (0x00066e55) main_vorec_pane

0x4411,	// (0x000608a2) popup_blid_sat_info_window_ParamLimits

0x4411,	// (0x000608a2) popup_blid_sat_info_window

0x4431,	// (0x000608c2) popup_dyc_status_message_window_ParamLimits

0x4431,	// (0x000608c2) popup_dyc_status_message_window

0x443f,	// (0x000608d0) popup_grid_large_graphic_window_ParamLimits

0x443f,	// (0x000608d0) popup_grid_large_graphic_window

0x44ce,	// (0x0006095f) popup_loc_request_window_ParamLimits

0x44ce,	// (0x0006095f) popup_loc_request_window

0x451b,	// (0x000609ac) popup_wml_address_window_ParamLimits

0x451b,	// (0x000609ac) popup_wml_address_window

0x429d,	// (0x0006072e) call_muted_g1

0x3f59,	// (0x000603ea) popup_call_audio_conf_window_ParamLimits

0x3f59,	// (0x000603ea) popup_call_audio_conf_window

0x42ad,	// (0x0006073e) popup_call_audio_first_window_ParamLimits

0x42ad,	// (0x0006073e) popup_call_audio_first_window

0x42ed,	// (0x0006077e) popup_call_audio_in_window_ParamLimits

0x42ed,	// (0x0006077e) popup_call_audio_in_window

0x4311,	// (0x000607a2) popup_call_audio_out_window_ParamLimits

0x4311,	// (0x000607a2) popup_call_audio_out_window

0x4333,	// (0x000607c4) popup_call_audio_second_window_ParamLimits

0x4333,	// (0x000607c4) popup_call_audio_second_window

0x4363,	// (0x000607f4) popup_call_audio_wait_window_ParamLimits

0x4363,	// (0x000607f4) popup_call_audio_wait_window

0x4384,	// (0x00060815) popup_number_entry_window_ParamLimits

0x4384,	// (0x00060815) popup_number_entry_window

0x9ad7,	// (0x00065f68) bg_popup_call_pane_cp05_ParamLimits

0x9ad7,	// (0x00065f68) bg_popup_call_pane_cp05

0x9af7,	// (0x00065f88) popup_number_entry_window_t1

0x9b0a,	// (0x00065f9b) popup_number_entry_window_t2

0x9b1c,	// (0x00065fad) popup_number_entry_window_t3

0x0003,

0xf0ca,	// (0x0006b55b) popup_number_entry_window_t

0x9b2e,	// (0x00065fbf) text_title_cp2

0x9b41,	// (0x00065fd2) bg_popup_call_pane_cp_ParamLimits

0x9b41,	// (0x00065fd2) bg_popup_call_pane_cp

0x9b4f,	// (0x00065fe0) call_thumbnail_pane

0x9b57,	// (0x00065fe8) popup_call_audio_in_window_g1_ParamLimits

0x9b57,	// (0x00065fe8) popup_call_audio_in_window_g1

0x9b63,	// (0x00065ff4) popup_call_audio_in_window_g2_ParamLimits

0x9b63,	// (0x00065ff4) popup_call_audio_in_window_g2

0x9b6f,	// (0x00066000) popup_call_audio_in_window_g3_ParamLimits

0x9b6f,	// (0x00066000) popup_call_audio_in_window_g3

0x0002,

0xf0d3,	// (0x0006b564) popup_call_audio_in_window_g_ParamLimits

0xf0d3,	// (0x0006b564) popup_call_audio_in_window_g

0x9b7b,	// (0x0006600c) popup_call_audio_in_window_t1_ParamLimits

0x9b7b,	// (0x0006600c) popup_call_audio_in_window_t1

0x9b97,	// (0x00066028) popup_call_audio_in_window_t2_ParamLimits

0x9b97,	// (0x00066028) popup_call_audio_in_window_t2

0x9bb3,	// (0x00066044) popup_call_audio_in_window_t3_ParamLimits

0x9bb3,	// (0x00066044) popup_call_audio_in_window_t3

0x0002,

0xf0da,	// (0x0006b56b) popup_call_audio_in_window_t_ParamLimits

0xf0da,	// (0x0006b56b) popup_call_audio_in_window_t

0x9b41,	// (0x00065fd2) bg_popup_call_pane_cp01_ParamLimits

0x9b41,	// (0x00065fd2) bg_popup_call_pane_cp01

0x9b4f,	// (0x00065fe0) call_thumbnail_pane_cp02

0x9bc6,	// (0x00066057) call_type_pane_cp022

0x9bce,	// (0x0006605f) popup_call_audio_out_window_g1_ParamLimits

0x9bce,	// (0x0006605f) popup_call_audio_out_window_g1

0x9be0,	// (0x00066071) popup_call_audio_out_window_g2_ParamLimits

0x9be0,	// (0x00066071) popup_call_audio_out_window_g2

0x9bec,	// (0x0006607d) popup_call_audio_out_window_g3_ParamLimits

0x9bec,	// (0x0006607d) popup_call_audio_out_window_g3

0x0002,

0xf0e1,	// (0x0006b572) popup_call_audio_out_window_g_ParamLimits

0xf0e1,	// (0x0006b572) popup_call_audio_out_window_g

0x9bfe,	// (0x0006608f) popup_call_audio_out_window_t1_ParamLimits

0x9bfe,	// (0x0006608f) popup_call_audio_out_window_t1

0x9c16,	// (0x000660a7) popup_call_audio_out_window_t2_ParamLimits

0x9c16,	// (0x000660a7) popup_call_audio_out_window_t2

0x0001,

0xf0e8,	// (0x0006b579) popup_call_audio_out_window_t_ParamLimits

0xf0e8,	// (0x0006b579) popup_call_audio_out_window_t

0x9c2b,	// (0x000660bc) bg_popup_call_pane_ParamLimits

0x9c2b,	// (0x000660bc) bg_popup_call_pane

0x1118,	// (0x0005d5a9) call_thumbnail_pane_cp_ParamLimits

0x1118,	// (0x0005d5a9) call_thumbnail_pane_cp

0x9caf,	// (0x00066140) call_type_pane_cp01_ParamLimits

0x9caf,	// (0x00066140) call_type_pane_cp01

0x9cf3,	// (0x00066184) popup_call_audio_first_window_g1_ParamLimits

0x9cf3,	// (0x00066184) popup_call_audio_first_window_g1

0x9d3f,	// (0x000661d0) popup_call_audio_first_window_g2_ParamLimits

0x9d3f,	// (0x000661d0) popup_call_audio_first_window_g2

0x0001,

0xf0ed,	// (0x0006b57e) popup_call_audio_first_window_g_ParamLimits

0xf0ed,	// (0x0006b57e) popup_call_audio_first_window_g

0x9d83,	// (0x00066214) popup_call_audio_first_window_t1_ParamLimits

0x9d83,	// (0x00066214) popup_call_audio_first_window_t1

0x9e2f,	// (0x000662c0) popup_call_audio_first_window_t4_ParamLimits

0x9e2f,	// (0x000662c0) popup_call_audio_first_window_t4

0x9ebb,	// (0x0006634c) popup_call_audio_first_window_t5_ParamLimits

0x9ebb,	// (0x0006634c) popup_call_audio_first_window_t5

0x0002,

0xf0f2,	// (0x0006b583) popup_call_audio_first_window_t_ParamLimits

0xf0f2,	// (0x0006b583) popup_call_audio_first_window_t

0x9eea,	// (0x0006637b) bg_popup_call_pane_cp02

0x9ef4,	// (0x00066385) call_type_pane_cp023

0x9efc,	// (0x0006638d) popup_call_audio_wait_window_g1

0x9f04,	// (0x00066395) popup_call_audio_wait_window_g2

0x0001,

0xf0f9,	// (0x0006b58a) popup_call_audio_wait_window_g

0x9f0c,	// (0x0006639d) popup_call_audio_wait_window_t3

0x9f1a,	// (0x000663ab) bg_popup_call_pane_cp03_ParamLimits

0x9f1a,	// (0x000663ab) bg_popup_call_pane_cp03

0x9f7a,	// (0x0006640b) call_thumbnail_pane_cp011_ParamLimits

0x9f7a,	// (0x0006640b) call_thumbnail_pane_cp011

0xa39b,	// (0x0006682c) call_type_pane_cp034_ParamLimits

0xa39b,	// (0x0006682c) call_type_pane_cp034

0xa55f,	// (0x000669f0) popup_call_audio_second_window_g1_ParamLimits

0xa55f,	// (0x000669f0) popup_call_audio_second_window_g1

0xa59b,	// (0x00066a2c) popup_call_audio_second_window_g2_ParamLimits

0xa59b,	// (0x00066a2c) popup_call_audio_second_window_g2

0x0001,

0xf0fe,	// (0x0006b58f) popup_call_audio_second_window_g_ParamLimits

0xf0fe,	// (0x0006b58f) popup_call_audio_second_window_g

0xa5d7,	// (0x00066a68) popup_call_audio_second_window_t1_ParamLimits

0xa5d7,	// (0x00066a68) popup_call_audio_second_window_t1

0xa658,	// (0x00066ae9) popup_call_audio_second_window_t2_ParamLimits

0xa658,	// (0x00066ae9) popup_call_audio_second_window_t2

0xa68e,	// (0x00066b1f) popup_call_audio_second_window_t3_ParamLimits

0xa68e,	// (0x00066b1f) popup_call_audio_second_window_t3

0x0002,

0xf103,	// (0x0006b594) popup_call_audio_second_window_t_ParamLimits

0xf103,	// (0x0006b594) popup_call_audio_second_window_t

0x9eea,	// (0x0006637b) bg_popup_call_pane_cp04

0xa6c4,	// (0x00066b55) list_conf_pane

0xa6cc,	// (0x00066b5d) popup_call_audio_conf_window_t1

0xa6da,	// (0x00066b6b) call_thumbnail_pane_g1

0xa6e2,	// (0x00066b73) bg_pinb_pane_ParamLimits

0xa6e2,	// (0x00066b73) bg_pinb_pane

0xa6f0,	// (0x00066b81) find_pinb_pane

0xa6f9,	// (0x00066b8a) listscroll_pinb_pane_ParamLimits

0xa6f9,	// (0x00066b8a) listscroll_pinb_pane

0xa724,	// (0x00066bb5) pinb_bg_pane_g1

0x113c,	// (0x0005d5cd) pinb_bg_pane_g2

0x1148,	// (0x0005d5d9) pinb_bg_pane_g3

0x1154,	// (0x0005d5e5) pinb_bg_pane_g4

0x1160,	// (0x0005d5f1) pinb_bg_pane_g5

0x116c,	// (0x0005d5fd) pinb_bg_pane_g6

0x1177,	// (0x0005d608) pinb_bg_pane_g7

0x1182,	// (0x0005d613) pinb_bg_pane_g8

0x118d,	// (0x0005d61e) pinb_bg_pane_g9

0x1197,	// (0x0005d628) pinb_bg_pane_g10

0x0009,

0xf10a,	// (0x0006b59b) pinb_bg_pane_g

0x11b4,	// (0x0005d645) grid_pinb_pane

0x11bf,	// (0x0005d650) list_pinb_pane

0x11ca,	// (0x0005d65b) scroll_pane_cp01_ParamLimits

0x11ca,	// (0x0005d65b) scroll_pane_cp01

0xa72e,	// (0x00066bbf) find_pinb_pane_g1_ParamLimits

0xa72e,	// (0x00066bbf) find_pinb_pane_g1

0xa746,	// (0x00066bd7) find_pinb_pane_t1

0xa758,	// (0x00066be9) find_pinb_pane_t2

0x0001,

0xf124,	// (0x0006b5b5) find_pinb_pane_t

0xa76d,	// (0x00066bfe) input_focus_pane_cp01_ParamLimits

0xa76d,	// (0x00066bfe) input_focus_pane_cp01

0x11dc,	// (0x0005d66d) cell_pinb_pane_ParamLimits

0x11dc,	// (0x0005d66d) cell_pinb_pane

0x1207,	// (0x0005d698) cell_pinb_pane_g1_ParamLimits

0x1207,	// (0x0005d698) cell_pinb_pane_g1

0xa779,	// (0x00066c0a) cell_pinb_pane_g2_ParamLimits

0xa779,	// (0x00066c0a) cell_pinb_pane_g2

0xa785,	// (0x00066c16) cell_pinb_pane_g3_ParamLimits

0xa785,	// (0x00066c16) cell_pinb_pane_g3

0x0002,

0xf129,	// (0x0006b5ba) cell_pinb_pane_g_ParamLimits

0xf129,	// (0x0006b5ba) cell_pinb_pane_g

0x9eea,	// (0x0006637b) grid_highlight_pane_cp01

0x121c,	// (0x0005d6ad) list_pinb_item_pane_ParamLimits

0x121c,	// (0x0005d6ad) list_pinb_item_pane

0x9eea,	// (0x0006637b) list_highlight_pane_cp02

0x1245,	// (0x0005d6d6) list_pinb_item_pane_g1_ParamLimits

0x1245,	// (0x0005d6d6) list_pinb_item_pane_g1

0x1252,	// (0x0005d6e3) list_pinb_item_pane_g2_ParamLimits

0x1252,	// (0x0005d6e3) list_pinb_item_pane_g2

0x125e,	// (0x0005d6ef) list_pinb_item_pane_g3_ParamLimits

0x125e,	// (0x0005d6ef) list_pinb_item_pane_g3

0x126f,	// (0x0005d700) list_pinb_item_pane_g4_ParamLimits

0x126f,	// (0x0005d700) list_pinb_item_pane_g4

0x0003,

0xf130,	// (0x0006b5c1) list_pinb_item_pane_g_ParamLimits

0xf130,	// (0x0006b5c1) list_pinb_item_pane_g

0x127b,	// (0x0005d70c) list_pinb_item_pane_t1_ParamLimits

0x127b,	// (0x0005d70c) list_pinb_item_pane_t1

0x12ac,	// (0x0005d73d) calc_display_pane

0x12ca,	// (0x0005d75b) calc_paper_pane

0x12e6,	// (0x0005d777) grid_calc_pane

0x9eea,	// (0x0006637b) bg_list_pane_cp01

0x1312,	// (0x0005d7a3) clock_g1

0x131a,	// (0x0005d7ab) clock_g2

0x0001,

0xf139,	// (0x0006b5ca) clock_g

0x1324,	// (0x0005d7b5) clock_t1_ParamLimits

0x1324,	// (0x0005d7b5) clock_t1

0x1339,	// (0x0005d7ca) clock_t2_ParamLimits

0x1339,	// (0x0005d7ca) clock_t2

0x134b,	// (0x0005d7dc) clock_t3_ParamLimits

0x134b,	// (0x0005d7dc) clock_t3

0x135d,	// (0x0005d7ee) clock_t4_ParamLimits

0x135d,	// (0x0005d7ee) clock_t4

0x136f,	// (0x0005d800) clock_t5_ParamLimits

0x136f,	// (0x0005d800) clock_t5

0x1384,	// (0x0005d815) clock_t6_ParamLimits

0x1384,	// (0x0005d815) clock_t6

0x1396,	// (0x0005d827) clock_t7_ParamLimits

0x1396,	// (0x0005d827) clock_t7

0x13a8,	// (0x0005d839) clock_t8_ParamLimits

0x13a8,	// (0x0005d839) clock_t8

0x13be,	// (0x0005d84f) clock_t9_ParamLimits

0x13be,	// (0x0005d84f) clock_t9

0x0008,

0xf13e,	// (0x0006b5cf) clock_t_ParamLimits

0xf13e,	// (0x0006b5cf) clock_t

0xa791,	// (0x00066c22) popup_clock_analogue_window_cp02

0xa791,	// (0x00066c22) popup_clock_digital_window_cp01

0xa799,	// (0x00066c2a) listscroll_help_pane

0x9eea,	// (0x0006637b) phob_pre_status_pane

0xa7a3,	// (0x00066c34) grid_qdial_pane

0xa6e2,	// (0x00066b73) listscroll_mce_pane

0xa6e2,	// (0x00066b73) bg_notes_pane

0xa7ad,	// (0x00066c3e) list_notes_pane

0x13d4,	// (0x0005d865) scroll_pane_cp06

0xa7bb,	// (0x00066c4c) bg_calc_paper_pane

0x13e3,	// (0x0005d874) list_calc_pane

0xa7cf,	// (0x00066c60) bg_calc_display_pane

0x13fd,	// (0x0005d88e) calc_display_pane_t1

0x1412,	// (0x0005d8a3) calc_display_pane_t2

0x1427,	// (0x0005d8b8) calc_display_pane_t3

0x0002,

0xf151,	// (0x0006b5e2) calc_display_pane_t

0x1439,	// (0x0005d8ca) cell_calc_pane_ParamLimits

0x1439,	// (0x0005d8ca) cell_calc_pane

0xa7db,	// (0x00066c6c) bg_calc_paper_pane_g1

0xa7e7,	// (0x00066c78) bg_calc_paper_pane_g2

0xa7f3,	// (0x00066c84) bg_calc_paper_pane_g3

0xa7ff,	// (0x00066c90) bg_calc_paper_pane_g4

0xa80b,	// (0x00066c9c) bg_calc_paper_pane_g5

0x1466,	// (0x0005d8f7) bg_calc_paper_pane_g6

0x1477,	// (0x0005d908) bg_calc_paper_pane_g7

0x1488,	// (0x0005d919) bg_calc_paper_pane_g8

0x0007,

0xf158,	// (0x0006b5e9) bg_calc_paper_pane_g

0x1499,	// (0x0005d92a) calc_bg_paper_pane_g9

0x14aa,	// (0x0005d93b) list_calc_item_pane_ParamLimits

0x14aa,	// (0x0005d93b) list_calc_item_pane

0xa817,	// (0x00066ca8) list_calc_item_pane_g1

0x14da,	// (0x0005d96b) list_calc_item_pane_t1_ParamLimits

0x14da,	// (0x0005d96b) list_calc_item_pane_t1

0x14ec,	// (0x0005d97d) list_calc_item_pane_t2_ParamLimits

0x14ec,	// (0x0005d97d) list_calc_item_pane_t2

0x0001,

0xf169,	// (0x0006b5fa) list_calc_item_pane_t_ParamLimits

0xf169,	// (0x0006b5fa) list_calc_item_pane_t

0xa824,	// (0x00066cb5) cell_calc_pane_g1

0xa82e,	// (0x00066cbf) grid_highlight_pane_cp02

0xa850,	// (0x00066ce1) bg_calc_display_pane_g1

0x151c,	// (0x0005d9ad) bg_calc_display_pane_g2

0xa859,	// (0x00066cea) bg_calc_display_pane_g3

0x0002,

0xf173,	// (0x0006b604) bg_calc_display_pane_g

0x1526,	// (0x0005d9b7) cell_qdial_pane_ParamLimits

0x1526,	// (0x0005d9b7) cell_qdial_pane

0x153a,	// (0x0005d9cb) cell_qdial_pane_g1_ParamLimits

0x153a,	// (0x0005d9cb) cell_qdial_pane_g1

0x1547,	// (0x0005d9d8) cell_qdial_pane_g2_ParamLimits

0x1547,	// (0x0005d9d8) cell_qdial_pane_g2

0xa862,	// (0x00066cf3) cell_qdial_pane_g3_ParamLimits

0xa862,	// (0x00066cf3) cell_qdial_pane_g3

0x0003,

0xf17a,	// (0x0006b60b) cell_qdial_pane_g_ParamLimits

0xf17a,	// (0x0006b60b) cell_qdial_pane_g

0x1564,	// (0x0005d9f5) cell_qdial_pane_t1_ParamLimits

0x1564,	// (0x0005d9f5) cell_qdial_pane_t1

0x157c,	// (0x0005da0d) cell_qdial_pane_t2_ParamLimits

0x157c,	// (0x0005da0d) cell_qdial_pane_t2

0x158f,	// (0x0005da20) cell_qdial_pane_t3_ParamLimits

0x158f,	// (0x0005da20) cell_qdial_pane_t3

0x0002,

0xf183,	// (0x0006b614) cell_qdial_pane_t_ParamLimits

0xf183,	// (0x0006b614) cell_qdial_pane_t

0x9eea,	// (0x0006637b) grid_highlight_pane_cp04

0xa86e,	// (0x00066cff) thumbnail_qdial_pane_ParamLimits

0xa86e,	// (0x00066cff) thumbnail_qdial_pane

0xa8ca,	// (0x00066d5b) list_help_pane

0xa8d3,	// (0x00066d64) scroll_pane_cp02

0x15a2,	// (0x0005da33) help_list_pane_t1_ParamLimits

0x15a2,	// (0x0005da33) help_list_pane_t1

0x15d9,	// (0x0005da6a) bg_notes_pane_g2

0x15e1,	// (0x0005da72) bg_notes_pane_g3

0x15e9,	// (0x0005da7a) notes_bg_pane_g1

0x15f1,	// (0x0005da82) notes_bg_pane_g4

0x15f9,	// (0x0005da8a) notes_bg_pane_g5

0x1601,	// (0x0005da92) notes_bg_pane_g6

0x1609,	// (0x0005da9a) notes_bg_pane_g7

0x1611,	// (0x0005daa2) notes_bg_pane_g8

0x1619,	// (0x0005daaa) notes_bg_pane_g9

0x0006,

0xf1a1,	// (0x0006b632) notes_bg_pane_g

0x1621,	// (0x0005dab2) list_notes_text_pane_ParamLimits

0x1621,	// (0x0005dab2) list_notes_text_pane

0xa8fa,	// (0x00066d8b) list_notes_text_pane_g1

0x164d,	// (0x0005dade) list_notes_text_pane_t1

0x165b,	// (0x0005daec) listscroll_cale_week_pane

0x1680,	// (0x0005db11) bg_cale_heading_pane

0xa91d,	// (0x00066dae) bg_cale_pane_cp01

0x16a2,	// (0x0005db33) cale_week_corner_pane

0x16bc,	// (0x0005db4d) cale_week_day_heading_pane

0x16de,	// (0x0005db6f) cale_week_scroll_pane_g1

0x16fb,	// (0x0005db8c) cale_week_scroll_pane_g2

0x170e,	// (0x0005db9f) cale_week_scroll_pane_g3

0x1721,	// (0x0005dbb2) cale_week_scroll_pane_g4

0x1734,	// (0x0005dbc5) cale_week_scroll_pane_g5

0x1747,	// (0x0005dbd8) cale_week_scroll_pane_g6

0x175a,	// (0x0005dbeb) cale_week_scroll_pane_g7

0x176d,	// (0x0005dbfe) cale_week_scroll_pane_g8

0x1782,	// (0x0005dc13) cale_week_scroll_pane_g9

0x1795,	// (0x0005dc26) cale_week_scroll_pane_g10

0x17a8,	// (0x0005dc39) cale_week_scroll_pane_g11

0x17bb,	// (0x0005dc4c) cale_week_scroll_pane_g12

0x17d2,	// (0x0005dc63) cale_week_scroll_pane_g13

0x17ed,	// (0x0005dc7e) cale_week_scroll_pane_g14

0x1808,	// (0x0005dc99) cale_week_scroll_pane_g15

0x000f,

0xf1b0,	// (0x0006b641) cale_week_scroll_pane_g

0x1838,	// (0x0005dcc9) cale_week_time_pane

0x184d,	// (0x0005dcde) grid_cale_week_pane

0xa94c,	// (0x00066ddd) scroll_pane_cp08

0x186e,	// (0x0005dcff) cell_cale_week_pane_ParamLimits

0x186e,	// (0x0005dcff) cell_cale_week_pane

0x18d2,	// (0x0005dd63) cale_week_day_heading_pane_t1

0x190d,	// (0x0005dd9e) cale_week_day_heading_pane_t2

0x1948,	// (0x0005ddd9) cale_week_day_heading_pane_t3

0x1983,	// (0x0005de14) cale_week_day_heading_pane_t4

0x19be,	// (0x0005de4f) cale_week_day_heading_pane_t5

0x19f9,	// (0x0005de8a) cale_week_day_heading_pane_t6

0x1a34,	// (0x0005dec5) cale_week_day_heading_pane_t7

0x0006,

0xf1d1,	// (0x0006b662) cale_week_day_heading_pane_t

0xa969,	// (0x00066dfa) bg_cale_side_pane

0x1a6f,	// (0x0005df00) cale_week_time_pane_t1

0x1a89,	// (0x0005df1a) cale_week_time_pane_t2

0x1aa3,	// (0x0005df34) cale_week_time_pane_t3

0x1abd,	// (0x0005df4e) cale_week_time_pane_t4

0x1ad7,	// (0x0005df68) cale_week_time_pane_t5

0x1af1,	// (0x0005df82) cale_week_time_pane_t6

0x1b11,	// (0x0005dfa2) cale_week_time_pane_t7

0x1b35,	// (0x0005dfc6) cale_week_time_pane_t8

0x0007,

0xf1e0,	// (0x0006b671) cale_week_time_pane_t

0x1b59,	// (0x0005dfea) cell_cale_week_pane_g2

0x1b7d,	// (0x0005e00e) cell_cale_week_pane_g3_ParamLimits

0x1b7d,	// (0x0005e00e) cell_cale_week_pane_g3

0xa977,	// (0x00066e08) grid_highlight_pane_cp07

0xa97f,	// (0x00066e10) listscroll_gms_pane

0xa989,	// (0x00066e1a) grid_gms_pane

0xa992,	// (0x00066e23) listscroll_gms_pane_g1

0xa99a,	// (0x00066e2b) listscroll_gms_pane_g2

0x0001,

0xf1f1,	// (0x0006b682) listscroll_gms_pane_g

0x1b95,	// (0x0005e026) scroll_pane_cp010

0x1ba0,	// (0x0005e031) cell_gms_pane_ParamLimits

0x1ba0,	// (0x0005e031) cell_gms_pane

0x1bb0,	// (0x0005e041) cell_gms_pane_g1

0xa9a2,	// (0x00066e33) cell_gms_pane_g2

0xa9aa,	// (0x00066e3b) cell_gms_pane_g3

0xa9b3,	// (0x00066e44) cell_gms_pane_g4

0x0003,

0xf1f6,	// (0x0006b687) cell_gms_pane_g

0xa9bc,	// (0x00066e4d) grid_highlight_pane_cp09

0x4245,	// (0x000606d6) phob_pre_status_pane_g1

0x424d,	// (0x000606de) phob_pre_status_pane_g2

0x4255,	// (0x000606e6) phob_pre_status_pane_g3

0x425d,	// (0x000606ee) phob_pre_status_pane_g4

0x0004,

0xf530,	// (0x0006b9c1) phob_pre_status_pane_g

0x426d,	// (0x000606fe) phob_pre_status_pane_t1

0x427d,	// (0x0006070e) phob_pre_status_pane_t2

0x428d,	// (0x0006071e) phob_pre_status_pane_t3

0x0002,

0xf53b,	// (0x0006b9cc) phob_pre_status_pane_t

0xa9c4,	// (0x00066e55) bg_list_pane_cp05

0x1bc0,	// (0x0005e051) grid_vorec_pane

0x1bca,	// (0x0005e05b) vorec_t1

0x1bd8,	// (0x0005e069) vorec_t2

0x1be6,	// (0x0005e077) vorec_t3

0x1bf4,	// (0x0005e085) vorec_t4

0x9aa7,	// (0x00065f38) vorec_t5

0x9ab5,	// (0x00065f46) vorec_t6

0x0004,

0xf1ff,	// (0x0006b690) vorec_t

0x9ac3,	// (0x00065f54) wait_bar_pane_cp01

0x1c10,	// (0x0005e0a1) cell_vorec_pane_ParamLimits

0x1c10,	// (0x0005e0a1) cell_vorec_pane

0x1c23,	// (0x0005e0b4) cell_vorec_pane_g1

0x9eea,	// (0x0006637b) grid_highlight_pane_cp05

0x1c3d,	// (0x0005e0ce) cams_zoom_pane

0x1c49,	// (0x0005e0da) image_vga_pane

0x1c58,	// (0x0005e0e9) main_camera_pane_g1

0x1c66,	// (0x0005e0f7) main_camera_pane_g2

0x1c72,	// (0x0005e103) main_camera_pane_g3

0x1c7e,	// (0x0005e10f) main_camera_pane_g4

0x1c8a,	// (0x0005e11b) main_camera_pane_g5

0x1c96,	// (0x0005e127) main_camera_pane_g6

0x1ca2,	// (0x0005e133) main_camera_pane_g7

0x0007,

0xf20a,	// (0x0006b69b) main_camera_pane_g

0x1cae,	// (0x0005e13f) main_camera_pane_t1

0x1cc0,	// (0x0005e151) main_camera_pane_t2

0x0001,

0xf21b,	// (0x0006b6ac) main_camera_pane_t

0x1ce1,	// (0x0005e172) cams_zoom_pane_cp_ParamLimits

0x1ce1,	// (0x0005e172) cams_zoom_pane_cp

0x1d05,	// (0x0005e196) image_cif_pane_ParamLimits

0x1d05,	// (0x0005e196) image_cif_pane

0x1d23,	// (0x0005e1b4) image_subqcif_pane

0x1d2b,	// (0x0005e1bc) main_video_pane_g1_ParamLimits

0x1d2b,	// (0x0005e1bc) main_video_pane_g1

0x1d4b,	// (0x0005e1dc) main_video_pane_g2_ParamLimits

0x1d4b,	// (0x0005e1dc) main_video_pane_g2

0x1d7b,	// (0x0005e20c) main_video_pane_g3_ParamLimits

0x1d7b,	// (0x0005e20c) main_video_pane_g3

0x1da4,	// (0x0005e235) main_video_pane_g4_ParamLimits

0x1da4,	// (0x0005e235) main_video_pane_g4

0x1dcd,	// (0x0005e25e) main_video_pane_g5_ParamLimits

0x1dcd,	// (0x0005e25e) main_video_pane_g5

0xa9d8,	// (0x00066e69) main_video_pane_g6_ParamLimits

0xa9d8,	// (0x00066e69) main_video_pane_g6

0x0006,

0xf220,	// (0x0006b6b1) main_video_pane_g_ParamLimits

0xf220,	// (0x0006b6b1) main_video_pane_g

0x1def,	// (0x0005e280) main_video_pane_t1_ParamLimits

0x1def,	// (0x0005e280) main_video_pane_t1

0xa9f2,	// (0x00066e83) cams_zoom_pane_g1

0xa9fb,	// (0x00066e8c) cams_zoom_pane_g2

0xaa04,	// (0x00066e95) cams_zoom_pane_g3

0xaa0d,	// (0x00066e9e) cams_zoom_pane_g4

0x0003,

0xf22f,	// (0x0006b6c0) cams_zoom_pane_g

0x1e39,	// (0x0005e2ca) grid_cams_pane

0x1e47,	// (0x0005e2d8) linegrid_cams_pane

0x1e55,	// (0x0005e2e6) cell_cams_pane_ParamLimits

0x1e55,	// (0x0005e2e6) cell_cams_pane

0xaa16,	// (0x00066ea7) cams_burst_image_pane

0xaa1e,	// (0x00066eaf) cell_cams_pane_g1

0x9eea,	// (0x0006637b) grid_highlight_pane_cp03

0xa824,	// (0x00066cb5) mp_bg_pane_g1

0x9eea,	// (0x0006637b) bg_list_pane_cp03

0xc769,	// (0x00068bfa) bg_mp_pane

0xc771,	// (0x00068c02) grid_mp_pane

0xc779,	// (0x00068c0a) media_player_g1

0xc781,	// (0x00068c12) media_player_t1

0xc78f,	// (0x00068c20) media_player_t2

0xc79d,	// (0x00068c2e) media_player_t3

0xc7ab,	// (0x00068c3c) media_player_t4

0xc7b9,	// (0x00068c4a) media_player_t5

0xc7c7,	// (0x00068c58) media_player_t6

0xc7d5,	// (0x00068c66) media_player_t7

0x0006,

0x0369,	// (0x0005c7fa) media_player_t

0xc7e3,	// (0x00068c74) wait_bar_pane_cp02

0xf51c,	// (0x0006b9ad) main_usb_pane_t

0x423c,	// (0x000606cd) cell_mp_pane

0xa824,	// (0x00066cb5) cell_mp_pane_g1

0x9eea,	// (0x0006637b) grid_highlight_pane_cp06

0xaa26,	// (0x00066eb7) grid_skin_colour_pane

0xaa2e,	// (0x00066ebf) list_highlight_pane_cp03

0x1f7d,	// (0x0005e40e) skin_g1

0xaa36,	// (0x00066ec7) skin_t1

0xaa45,	// (0x00066ed6) skin_t2

0x0001,

0xf264,	// (0x0006b6f5) skin_t

0x1f87,	// (0x0005e418) cell_skin_colour_pane_ParamLimits

0x1f87,	// (0x0005e418) cell_skin_colour_pane

0xaa53,	// (0x00066ee4) cell_skin_colour_pane_g1

0x200b,	// (0x0005e49c) call_video_g1_ParamLimits

0x200b,	// (0x0005e49c) call_video_g1

0x201b,	// (0x0005e4ac) call_video_g2_ParamLimits

0x201b,	// (0x0005e4ac) call_video_g2

0x0001,

0xf269,	// (0x0006b6fa) call_video_g_ParamLimits

0xf269,	// (0x0006b6fa) call_video_g

0x2075,	// (0x0005e506) call_video_uplink_pane_cp1_ParamLimits

0x2075,	// (0x0005e506) call_video_uplink_pane_cp1

0xaa65,	// (0x00066ef6) call_video_uplink_pane_cp2

0x2141,	// (0x0005e5d2) video_down_crop_pane_ParamLimits

0x2141,	// (0x0005e5d2) video_down_crop_pane

0x2233,	// (0x0005e6c4) video_down_pane_ParamLimits

0x2233,	// (0x0005e6c4) video_down_pane

0xaa6d,	// (0x00066efe) video_down_subqcif_pane_ParamLimits

0xaa6d,	// (0x00066efe) video_down_subqcif_pane

0xaa85,	// (0x00066f16) video_down_subqcif_pane_cp_ParamLimits

0xaa85,	// (0x00066f16) video_down_subqcif_pane_cp

0xaaab,	// (0x00066f3c) im_reading_pane_ParamLimits

0xaaab,	// (0x00066f3c) im_reading_pane

0x2353,	// (0x0005e7e4) im_writing_pane_ParamLimits

0x2353,	// (0x0005e7e4) im_writing_pane

0x2371,	// (0x0005e802) im_reading_pane_t1

0xaac5,	// (0x00066f56) list_im_pane

0xaad6,	// (0x00066f67) scroll_pane_cp07

0x23c9,	// (0x0005e85a) im_writing_pane_t1_ParamLimits

0x23c9,	// (0x0005e85a) im_writing_pane_t1

0xaaef,	// (0x00066f80) im_writing_pane_t2_ParamLimits

0xaaef,	// (0x00066f80) im_writing_pane_t2

0x0001,

0xf273,	// (0x0006b704) im_writing_pane_t_ParamLimits

0xf273,	// (0x0006b704) im_writing_pane_t

0x9eea,	// (0x0006637b) input_focus_pane_cp04

0x9eea,	// (0x0006637b) input_focus_pane_cp05

0x23db,	// (0x0005e86c) list_im_single_pane_ParamLimits

0x23db,	// (0x0005e86c) list_im_single_pane

0x2402,	// (0x0005e893) list_single_im_pane_t1

0x4200,	// (0x00060691) blid_accuracy_pane

0x4208,	// (0x00060699) blid_compass_pane

0x4212,	// (0x000606a3) main_location_t1

0x4220,	// (0x000606b1) main_location_t2

0x422e,	// (0x000606bf) main_location_t3

0x0002,

0xf529,	// (0x0006b9ba) main_location_t

0x9eea,	// (0x0006637b) aid_levels_location

0xa824,	// (0x00066cb5) blid_accuracy_pane_g1

0xa824,	// (0x00066cb5) blid_accuracy_pane_g2

0x0001,

0xf2d5,	// (0x0006b766) blid_accuracy_pane_g

0xab37,	// (0x00066fc8) wml_content_pane

0xab75,	// (0x00067006) wml_button_pane_ParamLimits

0xab75,	// (0x00067006) wml_button_pane

0x2411,	// (0x0005e8a2) wml_list_single_large_pane_ParamLimits

0x2411,	// (0x0005e8a2) wml_list_single_large_pane

0x243c,	// (0x0005e8cd) wml_list_single_medium_pane_ParamLimits

0x243c,	// (0x0005e8cd) wml_list_single_medium_pane

0x246e,	// (0x0005e8ff) wml_list_single_small_pane_ParamLimits

0x246e,	// (0x0005e8ff) wml_list_single_small_pane

0xab89,	// (0x0006701a) wml_selection_box_pane_ParamLimits

0xab89,	// (0x0006701a) wml_selection_box_pane

0xab9c,	// (0x0006702d) wml_list_single_pane_t1

0xabab,	// (0x0006703c) wml_list_single_medium_pane_t1

0xabba,	// (0x0006704b) wml_list_single_large_pane_t1

0xabc9,	// (0x0006705a) input_focus_pane_cp02_ParamLimits

0xabc9,	// (0x0006705a) input_focus_pane_cp02

0xabdc,	// (0x0006706d) wml_selection_box_pane_g1

0xabe5,	// (0x00067076) wml_selection_box_pane_t1_ParamLimits

0xabe5,	// (0x00067076) wml_selection_box_pane_t1

0xa6e2,	// (0x00066b73) bg_wml_button_pane_ParamLimits

0xa6e2,	// (0x00066b73) bg_wml_button_pane

0xabfd,	// (0x0006708e) wml_button_pane_g1

0xac05,	// (0x00067096) wml_button_pane_t1

0xabfd,	// (0x0006708e) wml_button_bg_pane_g1

0xac15,	// (0x000670a6) wml_button_bg_pane_g2

0xac1d,	// (0x000670ae) wml_button_bg_pane_g3

0xac25,	// (0x000670b6) wml_button_bg_pane_g4

0xac2d,	// (0x000670be) wml_button_bg_pane_g5

0xac35,	// (0x000670c6) wml_button_bg_pane_g6

0xac3d,	// (0x000670ce) wml_button_bg_pane_g7

0xac45,	// (0x000670d6) wml_button_bg_pane_g8

0xac4d,	// (0x000670de) wml_button_bg_pane_g9

0x0008,

0xf278,	// (0x0006b709) wml_button_bg_pane_g

0x24ab,	// (0x0005e93c) bg_list_pane_cp02

0xac55,	// (0x000670e6) mce_header_pane_ParamLimits

0xac55,	// (0x000670e6) mce_header_pane

0xac6b,	// (0x000670fc) mce_icon_pane

0xac6b,	// (0x000670fc) mce_image_pane

0xac74,	// (0x00067105) mce_text_pane_ParamLimits

0xac74,	// (0x00067105) mce_text_pane

0x24b5,	// (0x0005e946) scroll_pane_cp03

0xab6d,	// (0x00066ffe) scroll_pane_cp04

0xac87,	// (0x00067118) scroll_pane_cp05_ParamLimits

0xac87,	// (0x00067118) scroll_pane_cp05

0x24bf,	// (0x0005e950) mce_header_field_pane_ParamLimits

0x24bf,	// (0x0005e950) mce_header_field_pane

0x24df,	// (0x0005e970) mce_header_field_pane_2_ParamLimits

0x24df,	// (0x0005e970) mce_header_field_pane_2

0x24f5,	// (0x0005e986) mce_header_field_pane_3

0x24fd,	// (0x0005e98e) list_single_mce_message_pane_ParamLimits

0x24fd,	// (0x0005e98e) list_single_mce_message_pane

0x252b,	// (0x0005e9bc) list_single_mce_smart_pane_ParamLimits

0x252b,	// (0x0005e9bc) list_single_mce_smart_pane

0xac93,	// (0x00067124) input_focus_pane_cp03

0xac9c,	// (0x0006712d) list_header_data_pane

0x2564,	// (0x0005e9f5) mce_header_field_pane_t1

0x2572,	// (0x0005ea03) list_single_mce_header_pane_ParamLimits

0x2572,	// (0x0005ea03) list_single_mce_header_pane

0xaca4,	// (0x00067135) list_single_mce_header_pane_t1

0xacb3,	// (0x00067144) list_single_mce_message_pane_g1

0xacbb,	// (0x0006714c) list_single_mce_message_pane_t1

0x25c8,	// (0x0005ea59) bg_cale_heading_pane_cp01_ParamLimits

0x25c8,	// (0x0005ea59) bg_cale_heading_pane_cp01

0xacc9,	// (0x0006715a) bg_cale_pane_cp02_ParamLimits

0xacc9,	// (0x0006715a) bg_cale_pane_cp02

0x260b,	// (0x0005ea9c) cale_month_corner_pane

0x2625,	// (0x0005eab6) cale_month_day_heading_pane_ParamLimits

0x2625,	// (0x0005eab6) cale_month_day_heading_pane

0x2680,	// (0x0005eb11) cale_month_pane_g1_ParamLimits

0x2680,	// (0x0005eb11) cale_month_pane_g1

0x26b8,	// (0x0005eb49) cale_month_pane_g2_ParamLimits

0x26b8,	// (0x0005eb49) cale_month_pane_g2

0x26e3,	// (0x0005eb74) cale_month_pane_g3_ParamLimits

0x26e3,	// (0x0005eb74) cale_month_pane_g3

0x2733,	// (0x0005ebc4) cale_month_pane_g4_ParamLimits

0x2733,	// (0x0005ebc4) cale_month_pane_g4

0x2783,	// (0x0005ec14) cale_month_pane_g5_ParamLimits

0x2783,	// (0x0005ec14) cale_month_pane_g5

0x27d3,	// (0x0005ec64) cale_month_pane_g6_ParamLimits

0x27d3,	// (0x0005ec64) cale_month_pane_g6

0x2823,	// (0x0005ecb4) cale_month_pane_g7_ParamLimits

0x2823,	// (0x0005ecb4) cale_month_pane_g7

0x288b,	// (0x0005ed1c) cale_month_pane_g8_ParamLimits

0x288b,	// (0x0005ed1c) cale_month_pane_g8

0x28f3,	// (0x0005ed84) cale_month_pane_g9_ParamLimits

0x28f3,	// (0x0005ed84) cale_month_pane_g9

0x2951,	// (0x0005ede2) cale_month_pane_g10_ParamLimits

0x2951,	// (0x0005ede2) cale_month_pane_g10

0x29af,	// (0x0005ee40) cale_month_pane_g11_ParamLimits

0x29af,	// (0x0005ee40) cale_month_pane_g11

0x2a03,	// (0x0005ee94) cale_month_pane_g12_ParamLimits

0x2a03,	// (0x0005ee94) cale_month_pane_g12

0x2a59,	// (0x0005eeea) cale_month_pane_g13_ParamLimits

0x2a59,	// (0x0005eeea) cale_month_pane_g13

0x000c,

0xf28b,	// (0x0006b71c) cale_month_pane_g_ParamLimits

0xf28b,	// (0x0006b71c) cale_month_pane_g

0x2aaf,	// (0x0005ef40) cale_month_week_pane

0x2ac4,	// (0x0005ef55) grid_cale_month_pane_ParamLimits

0x2ac4,	// (0x0005ef55) grid_cale_month_pane

0x2b16,	// (0x0005efa7) cale_month_day_heading_pane_t1

0x2b9c,	// (0x0005f02d) cale_month_day_heading_pane_t2

0x2c2d,	// (0x0005f0be) cale_month_day_heading_pane_t3

0x2cbe,	// (0x0005f14f) cale_month_day_heading_pane_t4

0x2d4f,	// (0x0005f1e0) cale_month_day_heading_pane_t5

0x2de0,	// (0x0005f271) cale_month_day_heading_pane_t6

0x2e7d,	// (0x0005f30e) cale_month_day_heading_pane_t7

0x0006,

0xf2a6,	// (0x0006b737) cale_month_day_heading_pane_t

0xa969,	// (0x00066dfa) bg_cale_side_pane_cp01

0x2f26,	// (0x0005f3b7) cale_month_week_pane_t1

0x2f3f,	// (0x0005f3d0) cale_month_week_pane_t2

0x2f58,	// (0x0005f3e9) cale_month_week_pane_t3

0x2f71,	// (0x0005f402) cale_month_week_pane_t4

0x2f8c,	// (0x0005f41d) cale_month_week_pane_t5

0x2fad,	// (0x0005f43e) cale_month_week_pane_t6

0x0005,

0xf2b5,	// (0x0006b746) cale_month_week_pane_t

0x2fce,	// (0x0005f45f) cell_cale_month_pane_ParamLimits

0x2fce,	// (0x0005f45f) cell_cale_month_pane

0x311e,	// (0x0005f5af) cell_cale_month_pane_g1

0x3144,	// (0x0005f5d5) cell_cale_month_pane_t1_ParamLimits

0x3144,	// (0x0005f5d5) cell_cale_month_pane_t1

0xa977,	// (0x00066e08) grid_highlight_pane_cp08

0xa824,	// (0x00066cb5) main_smil_g1

0x3170,	// (0x0005f601) smil_status_pane

0xad08,	// (0x00067199) smil_text_pane

0xc649,	// (0x00068ada) bg_popup_call3_rect_pane_g8

0xc651,	// (0x00068ae2) bg_popup_call3_rect_pane_g9

0x0008,

0xf504,	// (0x0006b995) bg_popup_call3_rect_pane_g

0xc8d8,	// (0x00068d69) smil_status_volume_pane_g1

0xad12,	// (0x000671a3) smil_status_pane_t1

0x4637,	// (0x00060ac8) volume_smil_pane

0xad29,	// (0x000671ba) list_smil_text_pane

0x3183,	// (0x0005f614) scroll_pane_cp011

0x318e,	// (0x0005f61f) smil_text_list_pane_t1_ParamLimits

0x318e,	// (0x0005f61f) smil_text_list_pane_t1

0x321b,	// (0x0005f6ac) aid_volume_smil_ParamLimits

0x321b,	// (0x0005f6ac) aid_volume_smil

0xa824,	// (0x00066cb5) smil_volume_pane_g1

0xa824,	// (0x00066cb5) smil_volume_pane_g2

0x0001,

0xf2d5,	// (0x0006b766) smil_volume_pane_g

0x165b,	// (0x0005daec) listscroll_cale_day_pane

0xad33,	// (0x000671c4) bg_cale_pane

0xad4b,	// (0x000671dc) list_cale_pane

0xad6e,	// (0x000671ff) scroll_pane_cp09

0xad7f,	// (0x00067210) cale_bg_pane_g1

0xad87,	// (0x00067218) cale_bg_pane_g2

0xad8f,	// (0x00067220) cale_bg_pane_g3

0xad97,	// (0x00067228) cale_bg_pane_g4

0xad9f,	// (0x00067230) cale_bg_pane_g5

0xada7,	// (0x00067238) cale_bg_pane_g6

0xadaf,	// (0x00067240) cale_bg_pane_g7

0xadb7,	// (0x00067248) cale_bg_pane_g8

0xadbf,	// (0x00067250) cale_bg_pane_g9

0x0008,

0xf2da,	// (0x0006b76b) cale_bg_pane_g

0x3245,	// (0x0005f6d6) list_cale_time_pane_ParamLimits

0x3245,	// (0x0005f6d6) list_cale_time_pane

0xadc7,	// (0x00067258) list_cale_time_pane_g1_ParamLimits

0xadc7,	// (0x00067258) list_cale_time_pane_g1

0xadd3,	// (0x00067264) list_cale_time_pane_g2_ParamLimits

0xadd3,	// (0x00067264) list_cale_time_pane_g2

0x326d,	// (0x0005f6fe) list_cale_time_pane_g3_ParamLimits

0x326d,	// (0x0005f6fe) list_cale_time_pane_g3

0x327b,	// (0x0005f70c) list_cale_time_pane_g4_ParamLimits

0x327b,	// (0x0005f70c) list_cale_time_pane_g4

0x3289,	// (0x0005f71a) list_cale_time_pane_g5_ParamLimits

0x3289,	// (0x0005f71a) list_cale_time_pane_g5

0x0005,

0xf2ed,	// (0x0006b77e) list_cale_time_pane_g_ParamLimits

0xf2ed,	// (0x0006b77e) list_cale_time_pane_g

0xaded,	// (0x0006727e) list_cale_time_pane_t1_ParamLimits

0xaded,	// (0x0006727e) list_cale_time_pane_t1

0xae15,	// (0x000672a6) list_cale_time_pane_t2_ParamLimits

0xae15,	// (0x000672a6) list_cale_time_pane_t2

0x3652,	// (0x0005fae3) aid_blid_cardinal_pane

0x3694,	// (0x0005fb25) compass_pane_t4

0xae3d,	// (0x000672ce) list_cale_time_pane_t4_ParamLimits

0xae3d,	// (0x000672ce) list_cale_time_pane_t4

0x36a2,	// (0x0005fb33) compass_pane_t5

0x36b2,	// (0x0005fb43) compass_pane_t6

0x36c0,	// (0x0005fb51) compass_pane_t7

0xb2b5,	// (0x00067746) navi_pane_cc_t1

0xb4ac,	// (0x0006793d) aid_phob_thumbnail_center_pane

0x3d01,	// (0x00060192) main_postcard_pane_g4_ParamLimits

0x0002,

0xf2fa,	// (0x0006b78b) list_cale_time_pane_t_ParamLimits

0xf2fa,	// (0x0006b78b) list_cale_time_pane_t

0x9b41,	// (0x00065fd2) bg_popup_window_pane_cp02_ParamLimits

0x9b41,	// (0x00065fd2) bg_popup_window_pane_cp02

0xae65,	// (0x000672f6) heading_pane_cp01_ParamLimits

0xae65,	// (0x000672f6) heading_pane_cp01

0xae71,	// (0x00067302) loc_req_pane_ParamLimits

0xae71,	// (0x00067302) loc_req_pane

0xae81,	// (0x00067312) loc_type_pane_ParamLimits

0xae81,	// (0x00067312) loc_type_pane

0xae93,	// (0x00067324) loc_type_pane_t1_ParamLimits

0xae93,	// (0x00067324) loc_type_pane_t1

0xaea5,	// (0x00067336) loc_type_pane_t2_ParamLimits

0xaea5,	// (0x00067336) loc_type_pane_t2

0xaeb7,	// (0x00067348) loc_type_pane_t3_ParamLimits

0xaeb7,	// (0x00067348) loc_type_pane_t3

0x0002,

0xf301,	// (0x0006b792) loc_type_pane_t_ParamLimits

0xf301,	// (0x0006b792) loc_type_pane_t

0xaec9,	// (0x0006735a) list_loc_req_pane

0xaed3,	// (0x00067364) scroll_pane_cp012

0x3297,	// (0x0005f728) list_single_loc_request_popup_menu_pane_ParamLimits

0x3297,	// (0x0005f728) list_single_loc_request_popup_menu_pane

0xaede,	// (0x0006736f) list_single_loc_request_popup_menu_pane_g1_ParamLimits

0xaede,	// (0x0006736f) list_single_loc_request_popup_menu_pane_g1

0xaeea,	// (0x0006737b) list_single_loc_request_popup_menu_pane_g2_ParamLimits

0xaeea,	// (0x0006737b) list_single_loc_request_popup_menu_pane_g2

0x0001,

0xf308,	// (0x0006b799) list_single_loc_request_popup_menu_pane_g_ParamLimits

0xf308,	// (0x0006b799) list_single_loc_request_popup_menu_pane_g

0xaef6,	// (0x00067387) list_single_loc_request_popup_menu_pane_t1_ParamLimits

0xaef6,	// (0x00067387) list_single_loc_request_popup_menu_pane_t1

0x32b0,	// (0x0005f741) bg_popup_window_pane_cp03_ParamLimits

0x32b0,	// (0x0005f741) bg_popup_window_pane_cp03

0x32be,	// (0x0005f74f) heading_loc_req_pane_ParamLimits

0x32be,	// (0x0005f74f) heading_loc_req_pane

0x32ca,	// (0x0005f75b) popup_dyc_status_message_window_g1_ParamLimits

0x32ca,	// (0x0005f75b) popup_dyc_status_message_window_g1

0x32d6,	// (0x0005f767) popup_dyc_status_message_window_t1_ParamLimits

0x32d6,	// (0x0005f767) popup_dyc_status_message_window_t1

0x32e8,	// (0x0005f779) popup_dyc_status_message_window_t2_ParamLimits

0x32e8,	// (0x0005f779) popup_dyc_status_message_window_t2

0x32fa,	// (0x0005f78b) popup_dyc_status_message_window_t3_ParamLimits

0x32fa,	// (0x0005f78b) popup_dyc_status_message_window_t3

0x0002,

0xf30d,	// (0x0006b79e) popup_dyc_status_message_window_t_ParamLimits

0xf30d,	// (0x0006b79e) popup_dyc_status_message_window_t

0x9eea,	// (0x0006637b) bg_heading_pane_cp01

0xaf0c,	// (0x0006739d) heading_loc_req_pane_g1

0xaf14,	// (0x000673a5) heading_loc_req_pane_g2

0xaf1c,	// (0x000673ad) heading_loc_req_pane_g3

0x0002,

0xf314,	// (0x0006b7a5) heading_loc_req_pane_g

0xaf24,	// (0x000673b5) heading_loc_req_pane_t1

0xaf33,	// (0x000673c4) bg_popup_sub_pane_cp01_ParamLimits

0xaf33,	// (0x000673c4) bg_popup_sub_pane_cp01

0xaf41,	// (0x000673d2) popup_cale_events_window_g1_ParamLimits

0xaf41,	// (0x000673d2) popup_cale_events_window_g1

0xaf61,	// (0x000673f2) popup_cale_events_window_g2_ParamLimits

0xaf61,	// (0x000673f2) popup_cale_events_window_g2

0x0001,

0xf348,	// (0x0006b7d9) popup_cale_events_window_g_ParamLimits

0xf348,	// (0x0006b7d9) popup_cale_events_window_g

0xaf81,	// (0x00067412) popup_cale_events_window_t1_ParamLimits

0xaf81,	// (0x00067412) popup_cale_events_window_t1

0xaf93,	// (0x00067424) popup_cale_events_window_t2_ParamLimits

0xaf93,	// (0x00067424) popup_cale_events_window_t2

0xafd1,	// (0x00067462) popup_cale_events_window_t3_ParamLimits

0xafd1,	// (0x00067462) popup_cale_events_window_t3

0xb00b,	// (0x0006749c) popup_cale_events_window_t4_ParamLimits

0xb00b,	// (0x0006749c) popup_cale_events_window_t4

0x0003,

0xf34d,	// (0x0006b7de) popup_cale_events_window_t_ParamLimits

0xf34d,	// (0x0006b7de) popup_cale_events_window_t

0x33f5,	// (0x0005f886) call_type_pane

0xb3b7,	// (0x00067848) popup_call_status_window_g1

0x3401,	// (0x0005f892) popup_call_status_window_g2

0x340d,	// (0x0005f89e) popup_call_status_window_g3

0x0002,

0xf356,	// (0x0006b7e7) popup_call_status_window_g

0xb041,	// (0x000674d2) call_type_pane_g1

0xb04a,	// (0x000674db) call_type_pane_g2

0x0001,

0xf35d,	// (0x0006b7ee) call_type_pane_g

0x9eea,	// (0x0006637b) bg_popup_sub_pane_cp02

0xb053,	// (0x000674e4) listscroll_popup_wml_pane

0xb05b,	// (0x000674ec) list_wml_pane

0xb065,	// (0x000674f6) scroll_pane_cp013

0xb070,	// (0x00067501) list_single_graphic_popup_wml_pane_ParamLimits

0xb070,	// (0x00067501) list_single_graphic_popup_wml_pane

0xa824,	// (0x00066cb5) list_single_graphic_popup_wml_pane_g1

0xb084,	// (0x00067515) list_single_graphic_popup_wml_pane_g2

0x0001,

0xf362,	// (0x0006b7f3) list_single_graphic_popup_wml_pane_g

0xb08c,	// (0x0006751d) list_single_graphic_popup_wml_pane_t1

0xb0a2,	// (0x00067533) aid_call_pane

0xa6da,	// (0x00066b6b) popup_clock_analogue_window_g1

0xa6da,	// (0x00066b6b) popup_clock_analogue_window_g2

0x3419,	// (0x0005f8aa) popup_clock_analogue_window_g3

0x3419,	// (0x0005f8aa) popup_clock_analogue_window_g4

0xa824,	// (0x00066cb5) popup_clock_analogue_window_g5

0x0004,

0xf367,	// (0x0006b7f8) popup_clock_analogue_window_g

0x3421,	// (0x0005f8b2) popup_clock_analogue_window_t1

0x342f,	// (0x0005f8c0) clock_digital_number_pane_ParamLimits

0x342f,	// (0x0005f8c0) clock_digital_number_pane

0x343b,	// (0x0005f8cc) clock_digital_number_pane_cp02_ParamLimits

0x343b,	// (0x0005f8cc) clock_digital_number_pane_cp02

0x3447,	// (0x0005f8d8) clock_digital_number_pane_cp03_ParamLimits

0x3447,	// (0x0005f8d8) clock_digital_number_pane_cp03

0x3453,	// (0x0005f8e4) clock_digital_number_pane_cp04_ParamLimits

0x3453,	// (0x0005f8e4) clock_digital_number_pane_cp04

0x345f,	// (0x0005f8f0) clock_digital_separator_pane_ParamLimits

0x345f,	// (0x0005f8f0) clock_digital_separator_pane

0x346b,	// (0x0005f8fc) popup_clock_digital_window_t1

0xa824,	// (0x00066cb5) clock_digital_number_pane_g1

0xa824,	// (0x00066cb5) clock_digital_number_pane_g2

0x0001,

0xf2d5,	// (0x0006b766) clock_digital_number_pane_g

0xa824,	// (0x00066cb5) clock_digital_separator_pane_g1

0xa824,	// (0x00066cb5) clock_digital_separator_pane_g2

0x0001,

0xf2d5,	// (0x0006b766) clock_digital_separator_pane_g

0x9eea,	// (0x0006637b) bg_popup_window_pane_cp04

0xb0aa,	// (0x0006753b) heading_pane_cp03

0xb0b2,	// (0x00067543) listscroll_popup_gms_pane

0xb0ba,	// (0x0006754b) grid_large_graphic_popup_pane

0xb0c4,	// (0x00067555) listscroll_popup_gms_pane_g1

0xb0cc,	// (0x0006755d) listscroll_popup_gms_pane_g2

0x0001,

0xf372,	// (0x0006b803) listscroll_popup_gms_pane_g

0xab6d,	// (0x00066ffe) scroll_pane_cp014

0x3488,	// (0x0005f919) cell_large_graphic_popup_pane_ParamLimits

0x3488,	// (0x0005f919) cell_large_graphic_popup_pane

0x34a0,	// (0x0005f931) cell_large_graphic_popup_pane_g1_ParamLimits

0x34a0,	// (0x0005f931) cell_large_graphic_popup_pane_g1

0xb0d4,	// (0x00067565) cell_large_graphic_popup_pane_g2_ParamLimits

0xb0d4,	// (0x00067565) cell_large_graphic_popup_pane_g2

0xb0e0,	// (0x00067571) cell_large_graphic_popup_pane_g3_ParamLimits

0xb0e0,	// (0x00067571) cell_large_graphic_popup_pane_g3

0xb0ed,	// (0x0006757e) cell_large_graphic_popup_pane_g4_ParamLimits

0xb0ed,	// (0x0006757e) cell_large_graphic_popup_pane_g4

0x0003,

0xf377,	// (0x0006b808) cell_large_graphic_popup_pane_g_ParamLimits

0xf377,	// (0x0006b808) cell_large_graphic_popup_pane_g

0xb0fd,	// (0x0006758e) grid_highlight_pane_cp010

0xa824,	// (0x00066cb5) bg_popup_call_pane_g1

0xb107,	// (0x00067598) list_single_graphic_popup_conf_pane_ParamLimits

0xb107,	// (0x00067598) list_single_graphic_popup_conf_pane

0xb11a,	// (0x000675ab) list_highlight_pane_cp01

0xb123,	// (0x000675b4) list_single_graphic_popup_conf_pane_g1

0xb12b,	// (0x000675bc) list_single_graphic_popup_conf_pane_g2

0x0001,

0xf380,	// (0x0006b811) list_single_graphic_popup_conf_pane_g

0xb133,	// (0x000675c4) list_single_graphic_popup_conf_pane_t1

0xb141,	// (0x000675d2) linegrid_cams_pane_g1

0x34ac,	// (0x0005f93d) linegrid_cams_pane_g2

0xa9aa,	// (0x00066e3b) linegrid_cams_pane_g3

0xb14a,	// (0x000675db) linegrid_cams_pane_g4

0x34b5,	// (0x0005f946) linegrid_cams_pane_g5

0x34be,	// (0x0005f94f) linegrid_cams_pane_g6

0xa9b3,	// (0x00066e44) linegrid_cams_pane_g7

0x0006,

0xf385,	// (0x0006b816) linegrid_cams_pane_g

0xb153,	// (0x000675e4) popup_clock_analogue_window

0xb153,	// (0x000675e4) popup_clock_digital_window

0x9eea,	// (0x0006637b) popup_phob_thumbnail_window

0xa824,	// (0x00066cb5) call_video_uplink_pane_g1

0xb15c,	// (0x000675ed) call_video_uplink_pane_g2

0x0001,

0xf394,	// (0x0006b825) call_video_uplink_pane_g

0xb164,	// (0x000675f5) video_uplink_pane

0xb16c,	// (0x000675fd) mce_image_pane_g1

0x34c7,	// (0x0005f958) mce_image_pane_g2

0x34cf,	// (0x0005f960) mce_image_pane_g3

0x34d7,	// (0x0005f968) mce_image_pane_g4

0x34df,	// (0x0005f970) mce_image_pane_g5

0x0004,

0xf399,	// (0x0006b82a) mce_image_pane_g

0xb176,	// (0x00067607) control_top_pane_stacon_cp01_ParamLimits

0xb176,	// (0x00067607) control_top_pane_stacon_cp01

0xb18a,	// (0x0006761b) uni_indicator_pane_stacon_cp01_ParamLimits

0xb18a,	// (0x0006761b) uni_indicator_pane_stacon_cp01

0xb19b,	// (0x0006762c) bg_popup_sub_pane_cp03

0x34e7,	// (0x0005f978) chi_dic_find_pane

0x34ef,	// (0x0005f980) listscroll_chi_dic_pane

0x34f8,	// (0x0005f989) main_pane_chidic_g1

0x350b,	// (0x0005f99c) chi_dic_find_pane_t1

0xb1a5,	// (0x00067636) find_chidic_pane

0xb1ae,	// (0x0006763f) chi_dic_list_pane_ParamLimits

0xb1ae,	// (0x0006763f) chi_dic_list_pane

0xb1bf,	// (0x00067650) scroll_pane_cp020

0x3519,	// (0x0005f9aa) find_chidic_pane_t1

0x9eea,	// (0x0006637b) input_focus_pane_cp06

0x3528,	// (0x0005f9b9) list_chi_dic_pane_ParamLimits

0x3528,	// (0x0005f9b9) list_chi_dic_pane

0x3545,	// (0x0005f9d6) list_chi_dic_pane_t1_ParamLimits

0x3545,	// (0x0005f9d6) list_chi_dic_pane_t1

0x9eea,	// (0x0006637b) list_highlight_pane_cp020

0xb1c7,	// (0x00067658) bg_cale_heading_pane_g1

0x3558,	// (0x0005f9e9) bg_cale_heading_pane_g2

0x3560,	// (0x0005f9f1) bg_cale_heading_pane_g3

0x3568,	// (0x0005f9f9) bg_cale_heading_pane_g4

0x3572,	// (0x0005fa03) bg_cale_heading_pane_g5

0x357c,	// (0x0005fa0d) bg_cale_heading_pane_g6

0x3584,	// (0x0005fa15) bg_cale_heading_pane_g7

0x358c,	// (0x0005fa1d) bg_cale_heading_pane_g8

0x3596,	// (0x0005fa27) bg_cale_heading_pane_g9

0x0008,

0xf3a4,	// (0x0006b835) bg_cale_heading_pane_g

0xb1c7,	// (0x00067658) bg_cale_side_pane_g1

0x35a0,	// (0x0005fa31) bg_cale_side_pane_g2

0x35aa,	// (0x0005fa3b) bg_cale_side_pane_g3

0x35b4,	// (0x0005fa45) bg_cale_side_pane_g4

0x35be,	// (0x0005fa4f) bg_cale_side_pane_g5

0x35c8,	// (0x0005fa59) bg_cale_side_pane_g6

0x35d2,	// (0x0005fa63) bg_cale_side_pane_g7

0x35dc,	// (0x0005fa6d) bg_cale_side_pane_g8

0x35e4,	// (0x0005fa75) bg_cale_side_pane_g9

0x0008,

0xf3b7,	// (0x0006b848) bg_cale_side_pane_g

0x35ec,	// (0x0005fa7d) popup_call_status_window_ParamLimits

0x35ec,	// (0x0005fa7d) popup_call_status_window

0xb1cf,	// (0x00067660) stacon_top_pane

0xb1d7,	// (0x00067668) status_pane_ParamLimits

0xb1d7,	// (0x00067668) status_pane

0xb1ec,	// (0x0006767d) status_small_pane

0xb1f4,	// (0x00067685) control_pane

0x9eea,	// (0x0006637b) stacon_bottom_pane

0xb1fc,	// (0x0006768d) list_single_mce_smart_pane_t1_ParamLimits

0xb1fc,	// (0x0006768d) list_single_mce_smart_pane_t1

0xb20f,	// (0x000676a0) list_single_mce_smart_pane_t2_ParamLimits

0xb20f,	// (0x000676a0) list_single_mce_smart_pane_t2

0x0001,

0xf3ca,	// (0x0006b85b) list_single_mce_smart_pane_t_ParamLimits

0xf3ca,	// (0x0006b85b) list_single_mce_smart_pane_t

0x35f8,	// (0x0005fa89) compass_pane

0x3604,	// (0x0005fa95) main_location2_pane_t1

0x3618,	// (0x0005faa9) main_location2_pane_t2

0x362c,	// (0x0005fabd) main_location2_pane_t3

0x0003,

0xf3cf,	// (0x0006b860) main_location2_pane_t

0xb22e,	// (0x000676bf) compass_pane_g1_ParamLimits

0xb22e,	// (0x000676bf) compass_pane_g1

0x3676,	// (0x0005fb07) compass_pane_t1

0x3685,	// (0x0005fb16) compass_pane_t2

0x0005,

0xf3d8,	// (0x0006b869) compass_pane_t

0x36d0,	// (0x0005fb61) text_secondary_cp61

0xb2ac,	// (0x0006773d) navi_pane_cams_g5

0xb328,	// (0x000677b9) navi_pane_im_t1

0xb336,	// (0x000677c7) navi_pane_mp_g1_ParamLimits

0xb336,	// (0x000677c7) navi_pane_mp_g1

0xb34a,	// (0x000677db) navi_pane_mp_g2_ParamLimits

0xb34a,	// (0x000677db) navi_pane_mp_g2

0xb356,	// (0x000677e7) navi_pane_mp_g3_ParamLimits

0xb356,	// (0x000677e7) navi_pane_mp_g3

0x0002,

0xf3ec,	// (0x0006b87d) navi_pane_mp_g_ParamLimits

0xf3ec,	// (0x0006b87d) navi_pane_mp_g

0xb362,	// (0x000677f3) navi_pane_mp_t1

0xb370,	// (0x00067801) navi_pane_mp_t2

0x0002,

0xf3f3,	// (0x0006b884) navi_pane_mp_t

0xb3f5,	// (0x00067886) navi_pane_vt_g1

0xb362,	// (0x000677f3) navi_pane_vt_t1

0xb3fd,	// (0x0006788e) navi_slider_pane

0xa9c4,	// (0x00066e55) zooming_pane

0xb40d,	// (0x0006789e) navi_slider_pane_g1

0x370b,	// (0x0005fb9c) navi_slider_pane_g2

0x0006,

0xf3fa,	// (0x0006b88b) navi_slider_pane_g

0xb431,	// (0x000678c2) aid_levels_zoom

0xb439,	// (0x000678ca) zooming_pane_g1

0xb441,	// (0x000678d2) zooming_pane_g2

0xb441,	// (0x000678d2) zooming_pane_g3

0x0002,

0xf409,	// (0x0006b89a) zooming_pane_g

0xb449,	// (0x000678da) level_10_zoom

0xb452,	// (0x000678e3) level_11_zoom

0xb45b,	// (0x000678ec) level_1_zoom

0xb464,	// (0x000678f5) level_2_zoom

0xb46d,	// (0x000678fe) level_3_zoom

0xb476,	// (0x00067907) level_4_zoom

0xb47f,	// (0x00067910) level_5_zoom

0xb488,	// (0x00067919) level_6_zoom

0xb491,	// (0x00067922) level_7_zoom

0xb49a,	// (0x0006792b) level_8_zoom

0xb4a3,	// (0x00067934) level_9_zoom

0xb4b4,	// (0x00067945) popup_phob_thumbnail_window_g1

0xb4bc,	// (0x0006794d) popup_phob_thumbnail_window_g2

0x0001,

0xf410,	// (0x0006b8a1) popup_phob_thumbnail_window_g

0xc7eb,	// (0x00068c7c) level_1_location

0xc7f3,	// (0x00068c84) level_2_location

0xc7fb,	// (0x00068c8c) level_3_location

0xc803,	// (0x00068c94) level_4_location

0xa9c4,	// (0x00066e55) level_5_location

0x371d,	// (0x0005fbae) mce_icon_pane_g1

0x3725,	// (0x0005fbb6) mce_icon_pane_g2

0x0001,

0xf415,	// (0x0006b8a6) mce_icon_pane_g

0x372d,	// (0x0005fbbe) main_mup_pane_g1_ParamLimits

0x372d,	// (0x0005fbbe) main_mup_pane_g1

0x3745,	// (0x0005fbd6) main_mup_pane_g2_ParamLimits

0x3745,	// (0x0005fbd6) main_mup_pane_g2

0x3759,	// (0x0005fbea) main_mup_pane_g3_ParamLimits

0x3759,	// (0x0005fbea) main_mup_pane_g3

0x376d,	// (0x0005fbfe) main_mup_pane_g4_ParamLimits

0x376d,	// (0x0005fbfe) main_mup_pane_g4

0x3789,	// (0x0005fc1a) main_mup_pane_g5_ParamLimits

0x3789,	// (0x0005fc1a) main_mup_pane_g5

0x37aa,	// (0x0005fc3b) main_mup_pane_g6_ParamLimits

0x37aa,	// (0x0005fc3b) main_mup_pane_g6

0x37c6,	// (0x0005fc57) main_mup_pane_g7_ParamLimits

0x37c6,	// (0x0005fc57) main_mup_pane_g7

0x37e2,	// (0x0005fc73) main_mup_pane_g8_ParamLimits

0x37e2,	// (0x0005fc73) main_mup_pane_g8

0x37fe,	// (0x0005fc8f) main_mup_pane_g9_ParamLimits

0x37fe,	// (0x0005fc8f) main_mup_pane_g9

0x381d,	// (0x0005fcae) main_mup_pane_g10_ParamLimits

0x381d,	// (0x0005fcae) main_mup_pane_g10

0x383c,	// (0x0005fccd) main_mup_pane_g11_ParamLimits

0x383c,	// (0x0005fccd) main_mup_pane_g11

0x3854,	// (0x0005fce5) main_mup_pane_g12_ParamLimits

0x3854,	// (0x0005fce5) main_mup_pane_g12

0x3862,	// (0x0005fcf3) main_mup_pane_g13_ParamLimits

0x3862,	// (0x0005fcf3) main_mup_pane_g13

0x000c,

0xf41a,	// (0x0006b8ab) main_mup_pane_g_ParamLimits

0xf41a,	// (0x0006b8ab) main_mup_pane_g

0x3878,	// (0x0005fd09) main_mup_pane_t1_ParamLimits

0x3878,	// (0x0005fd09) main_mup_pane_t1

0x3895,	// (0x0005fd26) main_mup_pane_t2_ParamLimits

0x3895,	// (0x0005fd26) main_mup_pane_t2

0x38af,	// (0x0005fd40) main_mup_pane_t3_ParamLimits

0x38af,	// (0x0005fd40) main_mup_pane_t3

0x38c9,	// (0x0005fd5a) main_mup_pane_t4_ParamLimits

0x38c9,	// (0x0005fd5a) main_mup_pane_t4

0x38db,	// (0x0005fd6c) main_mup_pane_t5_ParamLimits

0x38db,	// (0x0005fd6c) main_mup_pane_t5

0x38ed,	// (0x0005fd7e) main_mup_pane_t6_ParamLimits

0x38ed,	// (0x0005fd7e) main_mup_pane_t6

0x0005,

0xf435,	// (0x0006b8c6) main_mup_pane_t_ParamLimits

0xf435,	// (0x0006b8c6) main_mup_pane_t

0x3903,	// (0x0005fd94) mup_progress_pane_ParamLimits

0x3903,	// (0x0005fd94) mup_progress_pane

0x390f,	// (0x0005fda0) mup_visualizer_pane_ParamLimits

0x390f,	// (0x0005fda0) mup_visualizer_pane

0x394d,	// (0x0005fdde) mup_volume_pane_ParamLimits

0x394d,	// (0x0005fdde) mup_volume_pane

0xb3b7,	// (0x00067848) mup_visualizer_pane_g1_ParamLimits

0xb3b7,	// (0x00067848) mup_visualizer_pane_g1

0xb3b7,	// (0x00067848) mup_visualizer_pane_g2_ParamLimits

0xb3b7,	// (0x00067848) mup_visualizer_pane_g2

0xb22e,	// (0x000676bf) mup_visualizer_pane_g3_ParamLimits

0xb22e,	// (0x000676bf) mup_visualizer_pane_g3

0x0002,

0xf442,	// (0x0006b8d3) mup_visualizer_pane_g_ParamLimits

0xf442,	// (0x0006b8d3) mup_visualizer_pane_g

0xa824,	// (0x00066cb5) mup_volume_pane_g1

0xb4cc,	// (0x0006795d) mup_volume_pane_g2

0x0001,

0xf449,	// (0x0006b8da) mup_volume_pane_g

0xa824,	// (0x00066cb5) mup_progress_pane_g1

0xb4d5,	// (0x00067966) mup_progress_pane_g2

0xb4de,	// (0x0006796f) mup_progress_pane_g3

0x0002,

0xf44e,	// (0x0006b8df) mup_progress_pane_g

0x9eea,	// (0x0006637b) bg_popup_window_pane_cp05

0xb4e7,	// (0x00067978) heading_pane_cp02_ParamLimits

0xb4e7,	// (0x00067978) heading_pane_cp02

0xb501,	// (0x00067992) list_popup_blid_pane

0xb509,	// (0x0006799a) list_blid_sat_info_pane_ParamLimits

0xb509,	// (0x0006799a) list_blid_sat_info_pane

0xb51c,	// (0x000679ad) list_blid_sat_info_pane_g1

0xb524,	// (0x000679b5) list_blid_sat_info_pane_t1

0x3a58,	// (0x0005fee9) mup_equalizer_pane_ParamLimits

0x3a58,	// (0x0005fee9) mup_equalizer_pane

0x3a79,	// (0x0005ff0a) mup_equalizer_pane_cp1_ParamLimits

0x3a79,	// (0x0005ff0a) mup_equalizer_pane_cp1

0x3a9a,	// (0x0005ff2b) mup_equalizer_pane_cp2_ParamLimits

0x3a9a,	// (0x0005ff2b) mup_equalizer_pane_cp2

0x3abb,	// (0x0005ff4c) mup_equalizer_pane_cp3_ParamLimits

0x3abb,	// (0x0005ff4c) mup_equalizer_pane_cp3

0x3adc,	// (0x0005ff6d) mup_equalizer_pane_cp4_ParamLimits

0x3adc,	// (0x0005ff6d) mup_equalizer_pane_cp4

0x3afd,	// (0x0005ff8e) mup_equalizer_pane_cp5

0x3b13,	// (0x0005ffa4) mup_equalizer_pane_cp6

0x3b2b,	// (0x0005ffbc) mup_equalizer_pane_cp7

0xc6c9,	// (0x00068b5a) bg_popup_call_poc_act_pane_g9

0xc6d1,	// (0x00068b62) bg_popup_call_poc_act_pane_g10

0xc6d9,	// (0x00068b6a) bg_popup_call_poc_act_pane_g11

0x000a,

0xa6e2,	// (0x00066b73) mup_scale_pane

0xa824,	// (0x00066cb5) mup_scale_pane_g1

0xb532,	// (0x000679c3) mup_scale_pane_g2

0x0006,

0xf46a,	// (0x0006b8fb) mup_scale_pane_g

0xb556,	// (0x000679e7) msg_data_pane

0xb55e,	// (0x000679ef) scroll_pane_cp017

0x3b55,	// (0x0005ffe6) bg_list_pane_cp04_ParamLimits

0x3b55,	// (0x0005ffe6) bg_list_pane_cp04

0xb566,	// (0x000679f7) msg_data_pane_g1

0x3b6d,	// (0x0005fffe) msg_data_pane_g2

0x3b75,	// (0x00060006) msg_data_pane_g3

0x3b7d,	// (0x0006000e) msg_data_pane_g4

0x3b85,	// (0x00060016) msg_data_pane_g5

0x3b8d,	// (0x0006001e) msg_data_pane_g6

0x3b95,	// (0x00060026) msg_data_pane_g7

0x0006,

0xf479,	// (0x0006b90a) msg_data_pane_g

0x3b9d,	// (0x0006002e) msg_text_pane_ParamLimits

0x3b9d,	// (0x0006002e) msg_text_pane

0x3be3,	// (0x00060074) qrid_highlight_pane_cp011_ParamLimits

0x3be3,	// (0x00060074) qrid_highlight_pane_cp011

0x9eea,	// (0x0006637b) msg_body_pane

0x9eea,	// (0x0006637b) msg_header_pane

0xb577,	// (0x00067a08) input_focus_pane_cp07

0x9f8e,	// (0x0006641f) msg_header_pane_t1_ParamLimits

0x9f8e,	// (0x0006641f) msg_header_pane_t1

0x9fa0,	// (0x00066431) msg_header_pane_t2_ParamLimits

0x9fa0,	// (0x00066431) msg_header_pane_t2

0x0001,

0xf48d,	// (0x0006b91e) msg_header_pane_t_ParamLimits

0xf48d,	// (0x0006b91e) msg_header_pane_t

0xb58c,	// (0x00067a1d) msg_body_pane_g1

0x9fb2,	// (0x00066443) msg_body_pane_t1_ParamLimits

0x9fb2,	// (0x00066443) msg_body_pane_t1

0x9fe3,	// (0x00066474) msg_body_pane_t2_ParamLimits

0x9fe3,	// (0x00066474) msg_body_pane_t2

0x9ff5,	// (0x00066486) msg_body_pane_t3_ParamLimits

0x9ff5,	// (0x00066486) msg_body_pane_t3

0x0002,

0xf492,	// (0x0006b923) msg_body_pane_t_ParamLimits

0xf492,	// (0x0006b923) msg_body_pane_t

0x3c5d,	// (0x000600ee) main_viewer_pane_g1_ParamLimits

0x3c5d,	// (0x000600ee) main_viewer_pane_g1

0x3c69,	// (0x000600fa) main_viewer_pane_g2_ParamLimits

0x3c69,	// (0x000600fa) main_viewer_pane_g2

0x3c75,	// (0x00060106) main_viewer_pane_g3_ParamLimits

0x3c75,	// (0x00060106) main_viewer_pane_g3

0x3c86,	// (0x00060117) main_viewer_pane_g4_ParamLimits

0x3c86,	// (0x00060117) main_viewer_pane_g4

0x3c97,	// (0x00060128) main_viewer_pane_g5_ParamLimits

0x3c97,	// (0x00060128) main_viewer_pane_g5

0x3c97,	// (0x00060128) main_viewer_pane_g7_ParamLimits

0x3c97,	// (0x00060128) main_viewer_pane_g7

0xaede,	// (0x0006736f) main_viewer_pane_g8_ParamLimits

0xaede,	// (0x0006736f) main_viewer_pane_g8

0x0007,

0xf4a2,	// (0x0006b933) main_viewer_pane_g_ParamLimits

0xf4a2,	// (0x0006b933) main_viewer_pane_g

0xb594,	// (0x00067a25) viewer_content_pane_ParamLimits

0xb594,	// (0x00067a25) viewer_content_pane

0x3cd5,	// (0x00060166) main_postcard_pane_g1_ParamLimits

0x3cd5,	// (0x00060166) main_postcard_pane_g1

0x3ce3,	// (0x00060174) main_postcard_pane_g2_ParamLimits

0x3ce3,	// (0x00060174) main_postcard_pane_g2

0x3cf1,	// (0x00060182) main_postcard_pane_g3_ParamLimits

0x3cf1,	// (0x00060182) main_postcard_pane_g3

0x0005,

0xf4b3,	// (0x0006b944) main_postcard_pane_g_ParamLimits

0xf4b3,	// (0x0006b944) main_postcard_pane_g

0x3d01,	// (0x00060192) main_postcard_pane_g4

0xc8eb,	// (0x00068d7c) smil_status_volume_pane_g2

0x3d2d,	// (0x000601be) postcard_pane_ParamLimits

0x3d2d,	// (0x000601be) postcard_pane

0xb3b7,	// (0x00067848) postcard_pane_g1_ParamLimits

0xb3b7,	// (0x00067848) postcard_pane_g1

0x3d5f,	// (0x000601f0) postcard_pane_g2_ParamLimits

0x3d5f,	// (0x000601f0) postcard_pane_g2

0x3d6b,	// (0x000601fc) postcard_pane_g3_ParamLimits

0x3d6b,	// (0x000601fc) postcard_pane_g3

0xb5a2,	// (0x00067a33) postcard_pane_g4_ParamLimits

0xb5a2,	// (0x00067a33) postcard_pane_g4

0x3d77,	// (0x00060208) postcard_pane_g5_ParamLimits

0x3d77,	// (0x00060208) postcard_pane_g5

0x3d83,	// (0x00060214) postcard_pane_g6_ParamLimits

0x3d83,	// (0x00060214) postcard_pane_g6

0xb5b0,	// (0x00067a41) postcard_pane_g7_ParamLimits

0xb5b0,	// (0x00067a41) postcard_pane_g7

0x0006,

0xf4c0,	// (0x0006b951) postcard_pane_g_ParamLimits

0xf4c0,	// (0x0006b951) postcard_pane_g

0x3d8f,	// (0x00060220) main_mp2_pane_g1_ParamLimits

0x3d8f,	// (0x00060220) main_mp2_pane_g1

0x3d9b,	// (0x0006022c) main_mp2_pane_g2_ParamLimits

0x3d9b,	// (0x0006022c) main_mp2_pane_g2

0x3da7,	// (0x00060238) main_mp2_pane_g3_ParamLimits

0x3da7,	// (0x00060238) main_mp2_pane_g3

0x0002,

0xf4cf,	// (0x0006b960) main_mp2_pane_g_ParamLimits

0xf4cf,	// (0x0006b960) main_mp2_pane_g

0x3db3,	// (0x00060244) main_mp2_pane_t1_ParamLimits

0x3db3,	// (0x00060244) main_mp2_pane_t1

0x3dca,	// (0x0006025b) main_mp2_pane_t2_ParamLimits

0x3dca,	// (0x0006025b) main_mp2_pane_t2

0x3ddc,	// (0x0006026d) main_mp2_pane_t3_ParamLimits

0x3ddc,	// (0x0006026d) main_mp2_pane_t3

0x0002,

0xf4d6,	// (0x0006b967) main_mp2_pane_t_ParamLimits

0xf4d6,	// (0x0006b967) main_mp2_pane_t

0xb5be,	// (0x00067a4f) pec_content_pane_ParamLimits

0xb5be,	// (0x00067a4f) pec_content_pane

0xab6d,	// (0x00066ffe) scroll_pane_cp015

0xb5d0,	// (0x00067a61) pec_attribute_pane_ParamLimits

0xb5d0,	// (0x00067a61) pec_attribute_pane

0x3dee,	// (0x0006027f) pec_content_pane_g1_ParamLimits

0x3dee,	// (0x0006027f) pec_content_pane_g1

0xb5e0,	// (0x00067a71) pec_content_pane_t1_ParamLimits

0xb5e0,	// (0x00067a71) pec_content_pane_t1

0xb5f2,	// (0x00067a83) pec_content_pane_t2_ParamLimits

0xb5f2,	// (0x00067a83) pec_content_pane_t2

0x0001,

0x0268,	// (0x0005c6f9) pec_content_pane_t_ParamLimits

0x0268,	// (0x0005c6f9) pec_content_pane_t

0x3dfa,	// (0x0006028b) list_single_graphic_pane_cp01_ParamLimits

0x3dfa,	// (0x0006028b) list_single_graphic_pane_cp01

0xa6e2,	// (0x00066b73) bg_popup_sub_pane_cp04

0xb604,	// (0x00067a95) popup_mup_playback_window_g1

0xb610,	// (0x00067aa1) popup_mup_playback_window_t1

0xb625,	// (0x00067ab6) popup_mup_playback_window_t2

0x0001,

0x026d,	// (0x0005c6fe) popup_mup_playback_window_t

0xb65c,	// (0x00067aed) main_image_pane_g1_ParamLimits

0xb65c,	// (0x00067aed) main_image_pane_g1

0xb69f,	// (0x00067b30) scroll_pane_cp018_ParamLimits

0xb69f,	// (0x00067b30) scroll_pane_cp018

0xb6b7,	// (0x00067b48) scroll_pane_cp016_ParamLimits

0xb6b7,	// (0x00067b48) scroll_pane_cp016

0x3e94,	// (0x00060325) smil2_image_pane_ParamLimits

0x3e94,	// (0x00060325) smil2_image_pane

0x3ec4,	// (0x00060355) smil2_root_pane_ParamLimits

0x3ec4,	// (0x00060355) smil2_root_pane

0x3ef0,	// (0x00060381) smil2_text_pane_ParamLimits

0x3ef0,	// (0x00060381) smil2_text_pane

0x9eea,	// (0x0006637b) bg_list_pane_cp06

0xb6f3,	// (0x00067b84) grid_radio_pane

0x9eea,	// (0x0006637b) bg_popup_window_pane_cp06

0xb6fb,	// (0x00067b8c) main_fmradio_pane_t1

0xb0aa,	// (0x0006753b) heading_pane_cp04

0xb709,	// (0x00067b9a) main_fmradio_pane_t2

0xc721,	// (0x00068bb2) popup_cale_lunar_info_window_g1

0xb717,	// (0x00067ba8) main_fmradio_pane_t3

0xc729,	// (0x00068bba) popup_cale_lunar_info_window_g2

0xb725,	// (0x00067bb6) main_fmradio_pane_t4

0x0001,

0xb733,	// (0x00067bc4) main_fmradio_pane_t5

0x0004,

0x035b,	// (0x0005c7ec) popup_cale_lunar_info_window_g

0x0282,	// (0x0005c713) main_fmradio_pane_t

0xb741,	// (0x00067bd2) wait_bar_pane_cp03

0xb749,	// (0x00067bda) cell_fmradio_pane_ParamLimits

0xb749,	// (0x00067bda) cell_fmradio_pane

0xb5b0,	// (0x00067a41) cell_fmradio_pane_g1_ParamLimits

0xb5b0,	// (0x00067a41) cell_fmradio_pane_g1

0x9eea,	// (0x0006637b) grid_highlight_pane_cp011

0xb75c,	// (0x00067bed) poc_content_pane_ParamLimits

0xb75c,	// (0x00067bed) poc_content_pane

0xb76e,	// (0x00067bff) scroll_pane_cp019

0x3f30,	// (0x000603c1) popup_call_poc_act_window_ParamLimits

0x3f30,	// (0x000603c1) popup_call_poc_act_window

0x3f3d,	// (0x000603ce) popup_call_poc_inact_window_ParamLimits

0x3f3d,	// (0x000603ce) popup_call_poc_inact_window

0x031f,	// (0x0005c7b0) bg_popup_call_poc_act_pane_g

0xc6e1,	// (0x00068b72) bg_popup_call_poc_inact_pane_g1

0xc6e9,	// (0x00068b7a) bg_popup_call_poc_inact_pane_g2

0xb776,	// (0x00067c07) popup_call_poc_act_window_g2

0xc6f1,	// (0x00068b82) bg_popup_call_poc_inact_pane_g3

0xc671,	// (0x00068b02) bg_popup_call_poc_inact_pane_g4

0xc6f9,	// (0x00068b8a) bg_popup_call_poc_inact_pane_g5

0xb77e,	// (0x00067c0f) popup_call_poc_act_window_t1_ParamLimits

0xb77e,	// (0x00067c0f) popup_call_poc_act_window_t1

0xb7a6,	// (0x00067c37) popup_call_poc_act_window_t2_ParamLimits

0xb7a6,	// (0x00067c37) popup_call_poc_act_window_t2

0xb7ce,	// (0x00067c5f) popup_call_poc_act_window_t3_ParamLimits

0xb7ce,	// (0x00067c5f) popup_call_poc_act_window_t3

0xb7f6,	// (0x00067c87) popup_call_poc_act_window_t4_ParamLimits

0xb7f6,	// (0x00067c87) popup_call_poc_act_window_t4

0x0003,

0x028d,	// (0x0005c71e) popup_call_poc_act_window_t_ParamLimits

0x028d,	// (0x0005c71e) popup_call_poc_act_window_t

0xc701,	// (0x00068b92) bg_popup_call_poc_inact_pane_g6

0xc709,	// (0x00068b9a) bg_popup_call_poc_inact_pane_g7

0xc711,	// (0x00068ba2) bg_popup_call_poc_inact_pane_g8

0xb808,	// (0x00067c99) popup_call_poc_inact_window_g2

0xc719,	// (0x00068baa) bg_popup_call_poc_inact_pane_g9

0x0008,

0x0336,	// (0x0005c7c7) bg_popup_call_poc_inact_pane_g

0xb810,	// (0x00067ca1) popup_call_poc_inact_window_t1_ParamLimits

0xb810,	// (0x00067ca1) popup_call_poc_inact_window_t1

0xb825,	// (0x00067cb6) popup_call_poc_inact_window_t2_ParamLimits

0xb825,	// (0x00067cb6) popup_call_poc_inact_window_t2

0xb83a,	// (0x00067ccb) popup_call_poc_inact_window_t3_ParamLimits

0xb83a,	// (0x00067ccb) popup_call_poc_inact_window_t3

0x0002,

0x0296,	// (0x0005c727) popup_call_poc_inact_window_t_ParamLimits

0x0296,	// (0x0005c727) popup_call_poc_inact_window_t

0xc85e,	// (0x00068cef) context_pane_ParamLimits

0x4581,	// (0x00060a12) signal_pane_ParamLimits

0xa9c4,	// (0x00066e55) main_call2_pane

0x44f4,	// (0x00060985) popup_phob_thumbnail2_window_ParamLimits

0x44f4,	// (0x00060985) popup_phob_thumbnail2_window

0x3c0b,	// (0x0006009c) aid_hotspot_pointer_arrow_pane

0x3c13,	// (0x000600a4) aid_hotspot_pointer_hand_pane

0x4265,	// (0x000606f6) phob_pre_status_pane_g5

0x1c3d,	// (0x0005e0ce) cams_zoom_pane_ParamLimits

0x1c49,	// (0x0005e0da) image_vga_pane_ParamLimits

0x1c58,	// (0x0005e0e9) main_camera_pane_g1_ParamLimits

0x1c66,	// (0x0005e0f7) main_camera_pane_g2_ParamLimits

0x1c72,	// (0x0005e103) main_camera_pane_g3_ParamLimits

0x1c7e,	// (0x0005e10f) main_camera_pane_g4_ParamLimits

0x1c8a,	// (0x0005e11b) main_camera_pane_g5_ParamLimits

0x1c96,	// (0x0005e127) main_camera_pane_g6_ParamLimits

0x1ca2,	// (0x0005e133) main_camera_pane_g7_ParamLimits

0xf20a,	// (0x0006b69b) main_camera_pane_g_ParamLimits

0x1cae,	// (0x0005e13f) main_camera_pane_t1_ParamLimits

0x1cc0,	// (0x0005e151) main_camera_pane_t2_ParamLimits

0xf21b,	// (0x0006b6ac) main_camera_pane_t_ParamLimits

0xa6e2,	// (0x00066b73) bg_popup_preview_window_pane_cp01_ParamLimits

0xa6e2,	// (0x00066b73) bg_popup_preview_window_pane_cp01

0xb84f,	// (0x00067ce0) popup_phob_thumbnail2_window_g1_ParamLimits

0xb84f,	// (0x00067ce0) popup_phob_thumbnail2_window_g1

0x9eea,	// (0x0006637b) call2_cli_visual_pane

0x3f59,	// (0x000603ea) popup_call2_audio_conf_window_ParamLimits

0x3f59,	// (0x000603ea) popup_call2_audio_conf_window

0x3f6e,	// (0x000603ff) popup_call2_audio_first_window_ParamLimits

0x3f6e,	// (0x000603ff) popup_call2_audio_first_window

0x400c,	// (0x0006049d) popup_call2_audio_in_window_ParamLimits

0x400c,	// (0x0006049d) popup_call2_audio_in_window

0x404e,	// (0x000604df) popup_call2_audio_out_window_ParamLimits

0x404e,	// (0x000604df) popup_call2_audio_out_window

0x40b0,	// (0x00060541) popup_call2_audio_second_window_ParamLimits

0x40b0,	// (0x00060541) popup_call2_audio_second_window

0x410e,	// (0x0006059f) popup_call2_audio_wait_window_ParamLimits

0x410e,	// (0x0006059f) popup_call2_audio_wait_window

0x9eea,	// (0x0006637b) bg_popup_call2_act_pane_cp03

0xa6c4,	// (0x00066b55) list_conf_pane_cp

0xb85b,	// (0x00067cec) popup_call2_audio_conf_window_t1

0xb869,	// (0x00067cfa) list_single_graphic_popup_conf2_pane_ParamLimits

0xb869,	// (0x00067cfa) list_single_graphic_popup_conf2_pane

0xb11a,	// (0x000675ab) list_highlight_pane_cp04

0xb87c,	// (0x00067d0d) list_single_graphic_popup_conf2_pane_g1

0xb12b,	// (0x000675bc) list_single_graphic_popup_conf2_pane_g2

0x0001,

0xf4ed,	// (0x0006b97e) list_single_graphic_popup_conf2_pane_g

0xb886,	// (0x00067d17) list_single_graphic_popup_conf2_pane_t1

0xb894,	// (0x00067d25) bg_popup_call2_act_pane_cp01_ParamLimits

0xb894,	// (0x00067d25) bg_popup_call2_act_pane_cp01

0xb91e,	// (0x00067daf) call_type_pane_cp05_ParamLimits

0xb91e,	// (0x00067daf) call_type_pane_cp05

0xb972,	// (0x00067e03) popup_call2_audio_second_window_g1_ParamLimits

0xb972,	// (0x00067e03) popup_call2_audio_second_window_g1

0xb9c6,	// (0x00067e57) popup_call2_audio_second_window_g2_ParamLimits

0xb9c6,	// (0x00067e57) popup_call2_audio_second_window_g2

0x0002,

0x02a2,	// (0x0005c733) popup_call2_audio_second_window_g_ParamLimits

0x02a2,	// (0x0005c733) popup_call2_audio_second_window_g

0xba2b,	// (0x00067ebc) popup_call2_audio_second_window_t1_ParamLimits

0xba2b,	// (0x00067ebc) popup_call2_audio_second_window_t1

0xbae6,	// (0x00067f77) popup_call2_audio_second_window_t2_ParamLimits

0xbae6,	// (0x00067f77) popup_call2_audio_second_window_t2

0xbb39,	// (0x00067fca) popup_call2_audio_second_window_t3_ParamLimits

0xbb39,	// (0x00067fca) popup_call2_audio_second_window_t3

0x0003,

0x02a9,	// (0x0005c73a) popup_call2_audio_second_window_t_ParamLimits

0x02a9,	// (0x0005c73a) popup_call2_audio_second_window_t

0x9eea,	// (0x0006637b) bg_popup_call2_in_pane_cp02

0x9ef4,	// (0x00066385) call_type_pane_cp04

0x9efc,	// (0x0006638d) popup_call2_audio_wait_window_g1

0x9f04,	// (0x00066395) popup_call2_audio_wait_window_g2

0x0001,

0xf0f9,	// (0x0006b58a) popup_call2_audio_wait_window_g

0x9f0c,	// (0x0006639d) popup_call2_audio_wait_window_t3

0xbc2c,	// (0x000680bd) bg_popup_call2_act_pane_ParamLimits

0xbc2c,	// (0x000680bd) bg_popup_call2_act_pane

0xbcec,	// (0x0006817d) call_type_pane_cp03_ParamLimits

0xbcec,	// (0x0006817d) call_type_pane_cp03

0xbd50,	// (0x000681e1) popup_call2_audio_first_window_g1_ParamLimits

0xbd50,	// (0x000681e1) popup_call2_audio_first_window_g1

0xbdc0,	// (0x00068251) popup_call2_audio_first_window_g2_ParamLimits

0xbdc0,	// (0x00068251) popup_call2_audio_first_window_g2

0xb3b7,	// (0x00067848) popup_call2_audio_first_window_g3_ParamLimits

0xb3b7,	// (0x00067848) popup_call2_audio_first_window_g3

0x0004,

0xf4f2,	// (0x0006b983) popup_call2_audio_first_window_g_ParamLimits

0xf4f2,	// (0x0006b983) popup_call2_audio_first_window_g

0xbe9e,	// (0x0006832f) popup_call2_audio_first_window_t1_ParamLimits

0xbe9e,	// (0x0006832f) popup_call2_audio_first_window_t1

0xbfa1,	// (0x00068432) popup_call2_audio_first_window_t4_ParamLimits

0xbfa1,	// (0x00068432) popup_call2_audio_first_window_t4

0xc084,	// (0x00068515) popup_call2_audio_first_window_t5_ParamLimits

0xc084,	// (0x00068515) popup_call2_audio_first_window_t5

0x0003,

0x02bd,	// (0x0005c74e) popup_call2_audio_first_window_t_ParamLimits

0x02bd,	// (0x0005c74e) popup_call2_audio_first_window_t

0xa6da,	// (0x00066b6b) bg_popup_call2_act_pane_g1

0xc731,	// (0x00068bc2) popup_cale_lunar_info_window_t1

0xc73f,	// (0x00068bd0) popup_cale_lunar_info_window_t2

0xc74d,	// (0x00068bde) popup_cale_lunar_info_window_t3

0x9eea,	// (0x0006637b) bg_popup_call2_bubble_pane

0xc185,	// (0x00068616) bg_popup_call2_in_pane_cp01_ParamLimits

0xc185,	// (0x00068616) bg_popup_call2_in_pane_cp01

0x9bc6,	// (0x00066057) call_type_pane_cp02

0xc1cd,	// (0x0006865e) popup_call2_audio_out_window_g1_ParamLimits

0xc1cd,	// (0x0006865e) popup_call2_audio_out_window_g1

0xc1f9,	// (0x0006868a) popup_call2_audio_out_window_g2_ParamLimits

0xc1f9,	// (0x0006868a) popup_call2_audio_out_window_g2

0xc221,	// (0x000686b2) popup_call2_audio_out_window_g3_ParamLimits

0xc221,	// (0x000686b2) popup_call2_audio_out_window_g3

0x0003,

0x02c6,	// (0x0005c757) popup_call2_audio_out_window_g_ParamLimits

0x02c6,	// (0x0005c757) popup_call2_audio_out_window_g

0xc25c,	// (0x000686ed) popup_call2_audio_out_window_t1_ParamLimits

0xc25c,	// (0x000686ed) popup_call2_audio_out_window_t1

0xc2bb,	// (0x0006874c) popup_call2_audio_out_window_t2_ParamLimits

0xc2bb,	// (0x0006874c) popup_call2_audio_out_window_t2

0xc30f,	// (0x000687a0) popup_call2_audio_out_window_t3_ParamLimits

0xc30f,	// (0x000687a0) popup_call2_audio_out_window_t3

0xc325,	// (0x000687b6) popup_call2_audio_out_window_t4_ParamLimits

0xc325,	// (0x000687b6) popup_call2_audio_out_window_t4

0xc33b,	// (0x000687cc) popup_call2_audio_out_window_t5_ParamLimits

0xc33b,	// (0x000687cc) popup_call2_audio_out_window_t5

0x0005,

0x02cf,	// (0x0005c760) popup_call2_audio_out_window_t_ParamLimits

0x02cf,	// (0x0005c760) popup_call2_audio_out_window_t

0xc39f,	// (0x00068830) bg_popup_call2_in_pane_ParamLimits

0xc39f,	// (0x00068830) bg_popup_call2_in_pane

0xc3fb,	// (0x0006888c) popup_call2_audio_in_window_g1_ParamLimits

0xc3fb,	// (0x0006888c) popup_call2_audio_in_window_g1

0xc433,	// (0x000688c4) popup_call2_audio_in_window_g2_ParamLimits

0xc433,	// (0x000688c4) popup_call2_audio_in_window_g2

0xc46b,	// (0x000688fc) popup_call2_audio_in_window_g3_ParamLimits

0xc46b,	// (0x000688fc) popup_call2_audio_in_window_g3

0x0003,

0x02dc,	// (0x0005c76d) popup_call2_audio_in_window_g_ParamLimits

0x02dc,	// (0x0005c76d) popup_call2_audio_in_window_g

0xc4c3,	// (0x00068954) popup_call2_audio_in_window_t1_ParamLimits

0xc4c3,	// (0x00068954) popup_call2_audio_in_window_t1

0xc543,	// (0x000689d4) popup_call2_audio_in_window_t2_ParamLimits

0xc543,	// (0x000689d4) popup_call2_audio_in_window_t2

0xc5c3,	// (0x00068a54) popup_call2_audio_in_window_t3_ParamLimits

0xc5c3,	// (0x00068a54) popup_call2_audio_in_window_t3

0xc5dd,	// (0x00068a6e) popup_call2_audio_in_window_t4_ParamLimits

0xc5dd,	// (0x00068a6e) popup_call2_audio_in_window_t4

0xc5ef,	// (0x00068a80) popup_call2_audio_in_window_t5_ParamLimits

0xc5ef,	// (0x00068a80) popup_call2_audio_in_window_t5

0xc604,	// (0x00068a95) popup_call2_audio_in_window_t6_ParamLimits

0xc604,	// (0x00068a95) popup_call2_audio_in_window_t6

0x0005,

0x02e5,	// (0x0005c776) popup_call2_audio_in_window_t_ParamLimits

0x02e5,	// (0x0005c776) popup_call2_audio_in_window_t

0xa6da,	// (0x00066b6b) bg_popup_call2_in_pane_g1

0xc75b,	// (0x00068bec) popup_cale_lunar_info_window_t4

0x0003,

0x0360,	// (0x0005c7f1) popup_cale_lunar_info_window_t

0xa6e2,	// (0x00066b73) bg_popup_call2_rect_pane_ParamLimits

0xa6e2,	// (0x00066b73) bg_popup_call2_rect_pane

0x9eea,	// (0x0006637b) call2_cli_visual_graphic_pane

0x9eea,	// (0x0006637b) call2_cli_visual_text_pane

0x462a,	// (0x00060abb) smil_status_volume_pane_g3

0x0002,

0xa824,	// (0x00066cb5) call2_cli_visual_graphic_pane_g1

0xa824,	// (0x00066cb5) call2_cli_visual_graphic_pane_g2

0xa824,	// (0x00066cb5) call2_cli_visual_graphic_pane_g3

0x0002,

0xf4fd,	// (0x0006b98e) call2_cli_visual_graphic_pane_g

0xc619,	// (0x00068aaa) bg_popup_call2_rect_pane_g1

0xa8c2,	// (0x00066d53) bg_popup_call2_rect_pane_g2

0xc621,	// (0x00068ab2) bg_popup_call2_rect_pane_g3

0xc629,	// (0x00068aba) bg_popup_call2_rect_pane_g4

0xc631,	// (0x00068ac2) bg_popup_call2_rect_pane_g5

0xc639,	// (0x00068aca) bg_popup_call2_rect_pane_g6

0xc641,	// (0x00068ad2) bg_popup_call2_rect_pane_g7

0xc649,	// (0x00068ada) bg_popup_call2_rect_pane_g8

0xc651,	// (0x00068ae2) bg_popup_call2_rect_pane_g9

0x0008,

0xf504,	// (0x0006b995) bg_popup_call2_rect_pane_g

0xc659,	// (0x00068aea) bg_popup_call2_bubble_pane_g1

0xc661,	// (0x00068af2) bg_popup_call2_bubble_pane_g2

0xc669,	// (0x00068afa) bg_popup_call2_bubble_pane_g3

0xc671,	// (0x00068b02) bg_popup_call2_bubble_pane_g4

0xc679,	// (0x00068b0a) bg_popup_call2_bubble_pane_g5

0xc681,	// (0x00068b12) bg_popup_call2_bubble_pane_g6

0xc689,	// (0x00068b1a) bg_popup_call2_bubble_pane_g7

0xc691,	// (0x00068b22) bg_popup_call2_bubble_pane_g8

0xc699,	// (0x00068b2a) bg_popup_call2_bubble_pane_g9

0x0008,

0x030c,	// (0x0005c79d) bg_popup_call2_bubble_pane_g

0x166b,	// (0x0005dafc) aid_cale_week_size_cell_pane

0x1cd2,	// (0x0005e163) aid_cams_cif_uncrop_pane_ParamLimits

0x1cd2,	// (0x0005e163) aid_cams_cif_uncrop_pane

0x1e2d,	// (0x0005e2be) aid_cams_size_cell_ParamLimits

0x1e2d,	// (0x0005e2be) aid_cams_size_cell

0x1e39,	// (0x0005e2ca) grid_cams_pane_ParamLimits

0x1e47,	// (0x0005e2d8) linegrid_cams_pane_ParamLimits

0x2033,	// (0x0005e4c4) call_video_pane_t1

0x2054,	// (0x0005e4e5) call_video_pane_t2

0x0001,

0xf26e,	// (0x0006b6ff) call_video_pane_t

0x25a2,	// (0x0005ea33) aid_cale_month_size_cell_pane_ParamLimits

0x25a2,	// (0x0005ea33) aid_cale_month_size_cell_pane

0xf547,	// (0x0006b9d8) smil_status_volume_pane_g

0x4637,	// (0x00060ac8) volume_smil_pane_ParamLimits

0x0db8,	// (0x0005d249) aid_popup2_width_pane

0x1557,	// (0x0005d9e8) cell_qdial_pane_g4_ParamLimits

0x1557,	// (0x0005d9e8) cell_qdial_pane_g4

0x3652,	// (0x0005fae3) aid_blid_cardinal_pane_ParamLimits

0x3662,	// (0x0005faf3) aid_blid_destination_pane_ParamLimits

0x3662,	// (0x0005faf3) aid_blid_destination_pane

0xa6e2,	// (0x00066b73) bg_popup_call_poc_act_pane_ParamLimits

0xa6e2,	// (0x00066b73) bg_popup_call_poc_act_pane

0xa6e2,	// (0x00066b73) bg_popup_call_poc_inact_pane_ParamLimits

0xa6e2,	// (0x00066b73) bg_popup_call_poc_inact_pane

0xc6a1,	// (0x00068b32) bg_popup_call_poc_act_pane_g1

0xc6a9,	// (0x00068b3a) bg_popup_call_poc_act_pane_g2

0xc6b1,	// (0x00068b42) bg_popup_call_poc_act_pane_g3

0xc671,	// (0x00068b02) bg_popup_call_poc_act_pane_g4

0xc679,	// (0x00068b0a) bg_popup_call_poc_act_pane_g5

0xc6b9,	// (0x00068b4a) bg_popup_call_poc_act_pane_g6

0xc689,	// (0x00068b1a) bg_popup_call_poc_act_pane_g7

0xc6c1,	// (0x00068b52) bg_popup_call_poc_act_pane_g8

0x9eea,	// (0x0006637b) main_usb_pane

0x4427,	// (0x000608b8) popup_cale_lunar_info_window

0x2371,	// (0x0005e802) im_reading_pane_t1_ParamLimits

0xaac5,	// (0x00066f56) list_im_pane_ParamLimits

0xaad6,	// (0x00066f67) scroll_pane_cp07_ParamLimits

0x9eea,	// (0x0006637b) grid_highlight_pane_cp012

0xa6e2,	// (0x00066b73) mup_scale_pane_ParamLimits

0xb3b7,	// (0x00067848) main_usb_pane_g1_ParamLimits

0xb3b7,	// (0x00067848) main_usb_pane_g1

0x4188,	// (0x00060619) main_usb_pane_g2_ParamLimits

0x4188,	// (0x00060619) main_usb_pane_g2

0x0001,

0xf517,	// (0x0006b9a8) main_usb_pane_g_ParamLimits

0xf517,	// (0x0006b9a8) main_usb_pane_g

0x4194,	// (0x00060625) main_usb_pane_t1_ParamLimits

0x4194,	// (0x00060625) main_usb_pane_t1

0x41a6,	// (0x00060637) main_usb_pane_t2_ParamLimits

0x41a6,	// (0x00060637) main_usb_pane_t2

0x41b8,	// (0x00060649) main_usb_pane_t3_ParamLimits

0x41b8,	// (0x00060649) main_usb_pane_t3

0x41ca,	// (0x0006065b) main_usb_pane_t4_ParamLimits

0x41ca,	// (0x0006065b) main_usb_pane_t4

0x41dc,	// (0x0006066d) main_usb_pane_t5_ParamLimits

0x41dc,	// (0x0006066d) main_usb_pane_t5

0x41ee,	// (0x0006067f) main_usb_pane_t6_ParamLimits

0x41ee,	// (0x0006067f) main_usb_pane_t6

0x0005,

0xf51c,	// (0x0006b9ad) main_usb_pane_t_ParamLimits

0x35f8,	// (0x0005fa89) aid_text_placing

0x3604,	// (0x0005fa95) main_location2_pane_t1_ParamLimits

0x3618,	// (0x0005faa9) main_location2_pane_t2_ParamLimits

0x362c,	// (0x0005fabd) main_location2_pane_t3_ParamLimits

0x3640,	// (0x0005fad1) main_location2_pane_t4_ParamLimits

0x3640,	// (0x0005fad1) main_location2_pane_t4

0xf3cf,	// (0x0006b860) main_location2_pane_t_ParamLimits

0xa73a,	// (0x00066bcb) find_pinb_pane_g2_ParamLimits

0xa73a,	// (0x00066bcb) find_pinb_pane_g2

0x0001,

0xf11f,	// (0x0006b5b0) find_pinb_pane_g_ParamLimits

0xf11f,	// (0x0006b5b0) find_pinb_pane_g

0xa746,	// (0x00066bd7) find_pinb_pane_t1_ParamLimits

0xa758,	// (0x00066be9) find_pinb_pane_t2_ParamLimits

0xf124,	// (0x0006b5b5) find_pinb_pane_t_ParamLimits

0x9eea,	// (0x0006637b) main_call3_pane

0x2b16,	// (0x0005efa7) cale_month_day_heading_pane_t1_ParamLimits

0x2b9c,	// (0x0005f02d) cale_month_day_heading_pane_t2_ParamLimits

0x2c2d,	// (0x0005f0be) cale_month_day_heading_pane_t3_ParamLimits

0x2cbe,	// (0x0005f14f) cale_month_day_heading_pane_t4_ParamLimits

0x2d4f,	// (0x0005f1e0) cale_month_day_heading_pane_t5_ParamLimits

0x2de0,	// (0x0005f271) cale_month_day_heading_pane_t6_ParamLimits

0x2e7d,	// (0x0005f30e) cale_month_day_heading_pane_t7_ParamLimits

0xf2a6,	// (0x0006b737) cale_month_day_heading_pane_t_ParamLimits

0xad20,	// (0x000671b1) smil_status_volume_pane

0x3d47,	// (0x000601d8) postcard_address_pane_ParamLimits

0x3d47,	// (0x000601d8) postcard_address_pane

0x3d53,	// (0x000601e4) postcard_message_pane_ParamLimits

0x3d53,	// (0x000601e4) postcard_message_pane

0x414d,	// (0x000605de) call2_cli_visual_pane_t1_ParamLimits

0x414d,	// (0x000605de) call2_cli_visual_pane_t1

0x478e,	// (0x00060c1f) postcard_message_pane_t1_ParamLimits

0x478e,	// (0x00060c1f) postcard_message_pane_t1

0x4777,	// (0x00060c08) postcard_address_pane_t1_ParamLimits

0x4777,	// (0x00060c08) postcard_address_pane_t1

0x4768,	// (0x00060bf9) popup_call3_audio_in_window_ParamLimits

0x4768,	// (0x00060bf9) popup_call3_audio_in_window

0x464c,	// (0x00060add) bg_popup_call3_in_pane_ParamLimits

0x464c,	// (0x00060add) bg_popup_call3_in_pane

0x46ae,	// (0x00060b3f) popup_call3_audio_in_window_g1_ParamLimits

0x46ae,	// (0x00060b3f) popup_call3_audio_in_window_g1

0x46c6,	// (0x00060b57) popup_call3_audio_in_window_g2_ParamLimits

0x46c6,	// (0x00060b57) popup_call3_audio_in_window_g2

0x46de,	// (0x00060b6f) popup_call3_audio_in_window_g3_ParamLimits

0x46de,	// (0x00060b6f) popup_call3_audio_in_window_g3

0x0003,

0xf54e,	// (0x0006b9df) popup_call3_audio_in_window_g_ParamLimits

0xf54e,	// (0x0006b9df) popup_call3_audio_in_window_g

0x4706,	// (0x00060b97) popup_call3_audio_in_window_t1_ParamLimits

0x4706,	// (0x00060b97) popup_call3_audio_in_window_t1

0x472e,	// (0x00060bbf) popup_call3_audio_in_window_t2_ParamLimits

0x472e,	// (0x00060bbf) popup_call3_audio_in_window_t2

0x4756,	// (0x00060be7) popup_call3_audio_in_window_t3_ParamLimits

0x4756,	// (0x00060be7) popup_call3_audio_in_window_t3

0x0002,

0xf557,	// (0x0006b9e8) popup_call3_audio_in_window_t_ParamLimits

0xf557,	// (0x0006b9e8) popup_call3_audio_in_window_t

0xa9c4,	// (0x00066e55) bg_popup_call3_rect_pane

0xc619,	// (0x00068aaa) bg_popup_call3_rect_pane_g1

0xa8c2,	// (0x00066d53) bg_popup_call3_rect_pane_g2

0xc621,	// (0x00068ab2) bg_popup_call3_rect_pane_g3

0xc629,	// (0x00068aba) bg_popup_call3_rect_pane_g4

0xc631,	// (0x00068ac2) bg_popup_call3_rect_pane_g5

0xc639,	// (0x00068aca) bg_popup_call3_rect_pane_g6

0xc641,	// (0x00068ad2) bg_popup_call3_rect_pane_g7

0x3968,	// (0x0005fdf9) mup_visualizer_osc_pane

0xb4c4,	// (0x00067955) mup_visualizer_spec_pane

0x466c,	// (0x00060afd) call3_video_qcif_pane_ParamLimits

0x466c,	// (0x00060afd) call3_video_qcif_pane

0x467e,	// (0x00060b0f) call3_video_qcif_uncrop_pane_ParamLimits

0x467e,	// (0x00060b0f) call3_video_qcif_uncrop_pane

0x468c,	// (0x00060b1d) call3_video_subqcif_pane_ParamLimits

0x468c,	// (0x00060b1d) call3_video_subqcif_pane

0x469e,	// (0x00060b2f) call3_video_subqcif_uncrop_pane_ParamLimits

0x469e,	// (0x00060b2f) call3_video_subqcif_uncrop_pane

0x46f6,	// (0x00060b87) popup_call3_audio_in_window_g4_ParamLimits

0x46f6,	// (0x00060b87) popup_call3_audio_in_window_g4

0x4617,	// (0x00060aa8) mup_spec_half_pane

0x4620,	// (0x00060ab1) mup_spec_half_pane_cp

0xc8be,	// (0x00068d4f) mup_osc_middle_pane

0xc8c7,	// (0x00068d58) mup_visualizer_osc_pane_g1

0x45f8,	// (0x00060a89) mup_spec_bar_pane_ParamLimits

0x45f8,	// (0x00060a89) mup_spec_bar_pane

0xc8ab,	// (0x00068d3c) mup_spec_bar_pane_g1

0xc8b5,	// (0x00068d46) mup_spec_bar_pane_g2

0x0001,

0x03a4,	// (0x0005c835) mup_spec_bar_pane_g

0x166b,	// (0x0005dafc) aid_cale_week_size_cell_pane_ParamLimits

0x1680,	// (0x0005db11) bg_cale_heading_pane_ParamLimits

0xa91d,	// (0x00066dae) bg_cale_pane_cp01_ParamLimits

0x16a2,	// (0x0005db33) cale_week_corner_pane_ParamLimits

0x16bc,	// (0x0005db4d) cale_week_day_heading_pane_ParamLimits

0x16de,	// (0x0005db6f) cale_week_scroll_pane_g1_ParamLimits

0x16fb,	// (0x0005db8c) cale_week_scroll_pane_g2_ParamLimits

0x170e,	// (0x0005db9f) cale_week_scroll_pane_g3_ParamLimits

0x1721,	// (0x0005dbb2) cale_week_scroll_pane_g4_ParamLimits

0x1734,	// (0x0005dbc5) cale_week_scroll_pane_g5_ParamLimits

0x1747,	// (0x0005dbd8) cale_week_scroll_pane_g6_ParamLimits

0x175a,	// (0x0005dbeb) cale_week_scroll_pane_g7_ParamLimits

0x176d,	// (0x0005dbfe) cale_week_scroll_pane_g8_ParamLimits

0x1782,	// (0x0005dc13) cale_week_scroll_pane_g9_ParamLimits

0x1795,	// (0x0005dc26) cale_week_scroll_pane_g10_ParamLimits

0x17a8,	// (0x0005dc39) cale_week_scroll_pane_g11_ParamLimits

0x17bb,	// (0x0005dc4c) cale_week_scroll_pane_g12_ParamLimits

0x17d2,	// (0x0005dc63) cale_week_scroll_pane_g13_ParamLimits

0x17ed,	// (0x0005dc7e) cale_week_scroll_pane_g14_ParamLimits

0x1808,	// (0x0005dc99) cale_week_scroll_pane_g15_ParamLimits

0xf1b0,	// (0x0006b641) cale_week_scroll_pane_g_ParamLimits

0x1838,	// (0x0005dcc9) cale_week_time_pane_ParamLimits

0x184d,	// (0x0005dcde) grid_cale_week_pane_ParamLimits

0xa93a,	// (0x00066dcb) listscroll_cale_week_pane_t1

0xa94c,	// (0x00066ddd) scroll_pane_cp08_ParamLimits

0x260b,	// (0x0005ea9c) cale_month_corner_pane_ParamLimits

0xacf6,	// (0x00067187) cale_month_pane_t1

0x2aaf,	// (0x0005ef40) cale_month_week_pane_ParamLimits

0xb3b7,	// (0x00067848) popup_call_status_window_g1_ParamLimits

0x3401,	// (0x0005f892) popup_call_status_window_g2_ParamLimits

0x340d,	// (0x0005f89e) popup_call_status_window_g3_ParamLimits

0xf356,	// (0x0006b7e7) popup_call_status_window_g_ParamLimits

0xb09a,	// (0x0006752b) aid_call2_pane

0x3bff,	// (0x00060090) msg_header_pane_g1

0x3d47,	// (0x000601d8) postcard_address2_pane_ParamLimits

0x3d47,	// (0x000601d8) postcard_address2_pane

0x3d53,	// (0x000601e4) postcard_message2_pane_ParamLimits

0x3d53,	// (0x000601e4) postcard_message2_pane

0x458f,	// (0x00060a20) message2_row_pane_ParamLimits

0x458f,	// (0x00060a20) message2_row_pane

0x45aa,	// (0x00060a3b) address2_row_pane_ParamLimits

0x45aa,	// (0x00060a3b) address2_row_pane

0xc879,	// (0x00068d0a) postcard_message2_row_pane_g1

0xc881,	// (0x00068d12) postcard_message2_row_pane_t1

0xc879,	// (0x00068d0a) address2_row_pane_g1

0xc881,	// (0x00068d12) address2_row_pane_t1

0x1bb8,	// (0x0005e049) aid_size_cell_vorec

0x9eea,	// (0x0006637b) main_rss_pane

0x45bd,	// (0x00060a4e) rss_list_single_pane_ParamLimits

0x45bd,	// (0x00060a4e) rss_list_single_pane

0xc88f,	// (0x00068d20) rss_list_single_pane_t1

0xc89d,	// (0x00068d2e) rss_list_single_pane_t2

0x0001,

0x039f,	// (0x0005c830) rss_list_single_pane_t

0x9eea,	// (0x0006637b) main_camera2_pane

0x9eea,	// (0x0006637b) main_video2_pane

0x47f2,	// (0x00060c83) cams_zoom_pane_cp2_ParamLimits

0x47f2,	// (0x00060c83) cams_zoom_pane_cp2

0x47fe,	// (0x00060c8f) image2_vga_pane_ParamLimits

0x47fe,	// (0x00060c8f) image2_vga_pane

0x480d,	// (0x00060c9e) main_camera2_pane_g1_ParamLimits

0x480d,	// (0x00060c9e) main_camera2_pane_g1

0x4819,	// (0x00060caa) main_camera2_pane_g2_ParamLimits

0x4819,	// (0x00060caa) main_camera2_pane_g2

0x4825,	// (0x00060cb6) main_camera2_pane_g3_ParamLimits

0x4825,	// (0x00060cb6) main_camera2_pane_g3

0x4831,	// (0x00060cc2) main_camera2_pane_g4_ParamLimits

0x4831,	// (0x00060cc2) main_camera2_pane_g4

0x483d,	// (0x00060cce) main_camera2_pane_g5_ParamLimits

0x483d,	// (0x00060cce) main_camera2_pane_g5

0x4849,	// (0x00060cda) main_camera2_pane_g6_ParamLimits

0x4849,	// (0x00060cda) main_camera2_pane_g6

0x4855,	// (0x00060ce6) main_camera2_pane_g7_ParamLimits

0x4855,	// (0x00060ce6) main_camera2_pane_g7

0x4861,	// (0x00060cf2) main_camera2_pane_g8_ParamLimits

0x4861,	// (0x00060cf2) main_camera2_pane_g8

0x0008,

0xf55e,	// (0x0006b9ef) main_camera2_pane_g_ParamLimits

0xf55e,	// (0x0006b9ef) main_camera2_pane_g

0x4879,	// (0x00060d0a) main_camera2_pane_t1_ParamLimits

0x4879,	// (0x00060d0a) main_camera2_pane_t1

0x488b,	// (0x00060d1c) main_camera2_pane_t2_ParamLimits

0x488b,	// (0x00060d1c) main_camera2_pane_t2

0x489d,	// (0x00060d2e) main_camera2_pane_t3_ParamLimits

0x489d,	// (0x00060d2e) main_camera2_pane_t3

0x48af,	// (0x00060d40) main_camera2_pane_t4_ParamLimits

0x48af,	// (0x00060d40) main_camera2_pane_t4

0x0006,

0xf571,	// (0x0006ba02) main_camera2_pane_t_ParamLimits

0xf571,	// (0x0006ba02) main_camera2_pane_t

0x4911,	// (0x00060da2) cams_zoom_pane_cp4_ParamLimits

0x4911,	// (0x00060da2) cams_zoom_pane_cp4

0x4921,	// (0x00060db2) image2_cif_pane_ParamLimits

0x4921,	// (0x00060db2) image2_cif_pane

0x4936,	// (0x00060dc7) image2_subqcif_pane_ParamLimits

0x4936,	// (0x00060dc7) image2_subqcif_pane

0x4945,	// (0x00060dd6) main_video2_pane_g1_ParamLimits

0x4945,	// (0x00060dd6) main_video2_pane_g1

0x4957,	// (0x00060de8) main_video2_pane_g2_ParamLimits

0x4957,	// (0x00060de8) main_video2_pane_g2

0x4967,	// (0x00060df8) main_video2_pane_g3_ParamLimits

0x4967,	// (0x00060df8) main_video2_pane_g3

0x4977,	// (0x00060e08) main_video2_pane_g4_ParamLimits

0x4977,	// (0x00060e08) main_video2_pane_g4

0x4987,	// (0x00060e18) main_video2_pane_g5_ParamLimits

0x4987,	// (0x00060e18) main_video2_pane_g5

0x4997,	// (0x00060e28) main_video2_pane_g6_ParamLimits

0x4997,	// (0x00060e28) main_video2_pane_g6

0x0005,

0xf580,	// (0x0006ba11) main_video2_pane_g_ParamLimits

0xf580,	// (0x0006ba11) main_video2_pane_g

0x49a9,	// (0x00060e3a) main_video2_pane_t1_ParamLimits

0x49a9,	// (0x00060e3a) main_video2_pane_t1

0x49c3,	// (0x00060e54) main_video2_pane_t2_ParamLimits

0x49c3,	// (0x00060e54) main_video2_pane_t2

0x49e9,	// (0x00060e7a) main_video2_pane_t3_ParamLimits

0x49e9,	// (0x00060e7a) main_video2_pane_t3

0x0002,

0xf58d,	// (0x0006ba1e) main_video2_pane_t_ParamLimits

0xf58d,	// (0x0006ba1e) main_video2_pane_t

0x42a5,	// (0x00060736) call_muted_g2

0x0001,

0xf542,	// (0x0006b9d3) call_muted_g

0x9eea,	// (0x0006637b) main_mup2_pane

0xc91c,	// (0x00068dad) main_mup2_pane_g1_ParamLimits

0xc91c,	// (0x00068dad) main_mup2_pane_g1

0x4a0f,	// (0x00060ea0) main_mup2_pane_g2_ParamLimits

0x4a0f,	// (0x00060ea0) main_mup2_pane_g2

0x4c91,	// (0x00061122) main_mup_pane_g13_cp1

0x4c99,	// (0x0006112a) mup_volume_pane_cp1

0x4a2f,	// (0x00060ec0) main_mup2_pane_g4_ParamLimits

0x4a2f,	// (0x00060ec0) main_mup2_pane_g4

0x4a44,	// (0x00060ed5) main_mup2_pane_g5_ParamLimits

0x4a44,	// (0x00060ed5) main_mup2_pane_g5

0x4a59,	// (0x00060eea) main_mup2_pane_g6_ParamLimits

0x4a59,	// (0x00060eea) main_mup2_pane_g6

0x4a6e,	// (0x00060eff) main_mup2_pane_g7_ParamLimits

0x4a6e,	// (0x00060eff) main_mup2_pane_g7

0x0006,

0xf594,	// (0x0006ba25) main_mup2_pane_g_ParamLimits

0xf594,	// (0x0006ba25) main_mup2_pane_g

0x4a8a,	// (0x00060f1b) main_mup2_pane_t1_ParamLimits

0x4a8a,	// (0x00060f1b) main_mup2_pane_t1

0x4aa1,	// (0x00060f32) main_mup2_pane_t2_ParamLimits

0x4aa1,	// (0x00060f32) main_mup2_pane_t2

0x4ab8,	// (0x00060f49) main_mup2_pane_t3_ParamLimits

0x4ab8,	// (0x00060f49) main_mup2_pane_t3

0x4acf,	// (0x00060f60) main_mup2_pane_t4_ParamLimits

0x4acf,	// (0x00060f60) main_mup2_pane_t4

0x4ae9,	// (0x00060f7a) main_mup2_pane_t5_ParamLimits

0x4ae9,	// (0x00060f7a) main_mup2_pane_t5

0x4b03,	// (0x00060f94) main_mup2_pane_t6_ParamLimits

0x4b03,	// (0x00060f94) main_mup2_pane_t6

0x0005,

0xf5a3,	// (0x0006ba34) main_mup2_pane_t_ParamLimits

0xf5a3,	// (0x0006ba34) main_mup2_pane_t

0x4b3b,	// (0x00060fcc) mup2_visualizer_pane_ParamLimits

0x4b3b,	// (0x00060fcc) mup2_visualizer_pane

0x4b71,	// (0x00061002) mup_progress_pane_cp_ParamLimits

0x4b71,	// (0x00061002) mup_progress_pane_cp

0x4c7c,	// (0x0006110d) mup_volume_pane_cp_ParamLimits

0x4c7c,	// (0x0006110d) mup_volume_pane_cp

0x4b88,	// (0x00061019) mup2_visualizer_pane_g1_ParamLimits

0x4b88,	// (0x00061019) mup2_visualizer_pane_g1

0xc8fe,	// (0x00068d8f) mup2_visualizer_pane_g2_ParamLimits

0xc8fe,	// (0x00068d8f) mup2_visualizer_pane_g2

0x4b9d,	// (0x0006102e) mup2_visualizer_pane_g3_ParamLimits

0x4b9d,	// (0x0006102e) mup2_visualizer_pane_g3

0x0002,

0xf5b0,	// (0x0006ba41) mup2_visualizer_pane_g_ParamLimits

0xf5b0,	// (0x0006ba41) mup2_visualizer_pane_g

0xb6eb,	// (0x00067b7c) aid_size_cell_fmradio

0x43bb,	// (0x0006084c) aid_height_parent_landcape

0xab54,	// (0x00066fe5) wml_content_pane_cp

0xab5c,	// (0x00066fed) wml_tabs_pane

0xab65,	// (0x00066ff6) popup_wml_miniature_window

0xab6d,	// (0x00066ffe) scroll_pane_cp021

0xab81,	// (0x00067012) wml_content_pane_comp8

0x9eea,	// (0x0006637b) bg_popup_sub_pane_cp05

0xc928,	// (0x00068db9) popup_wml_miniature_window_g1

0xc930,	// (0x00068dc1) wml_miniature_view_pane

0x4bab,	// (0x0006103c) aid_size_wml_view

0x4bb3,	// (0x00061044) wml_miniature_view_pane_g1

0x4bbc,	// (0x0006104d) wml_miniature_view_pane_g2

0x4bc5,	// (0x00061056) wml_miniature_view_pane_g3

0x4bcd,	// (0x0006105e) wml_miniature_view_pane_g4

0x4bd5,	// (0x00061066) wml_miniature_view_pane_g5

0x4bdd,	// (0x0006106e) wml_miniature_view_pane_g6

0x4be5,	// (0x00061076) wml_miniature_view_pane_g7

0x4bed,	// (0x0006107e) wml_miniature_view_pane_g8

0x0007,

0xf5b7,	// (0x0006ba48) wml_miniature_view_pane_g

0xc91c,	// (0x00068dad) background_graphic_ParamLimits

0xc91c,	// (0x00068dad) background_graphic

0xc938,	// (0x00068dc9) wml_tabs_2_pane

0xc941,	// (0x00068dd2) wml_tabs_3_pane_ParamLimits

0xc941,	// (0x00068dd2) wml_tabs_3_pane

0xc953,	// (0x00068de4) wml_tabs_4_pane_ParamLimits

0xc953,	// (0x00068de4) wml_tabs_4_pane

0xc969,	// (0x00068dfa) wml_tabs_5_pane_ParamLimits

0xc969,	// (0x00068dfa) wml_tabs_5_pane

0xc983,	// (0x00068e14) wml_tabs_pane_g2_ParamLimits

0xc983,	// (0x00068e14) wml_tabs_pane_g2

0xc997,	// (0x00068e28) wml_tabs_pane_g3_ParamLimits

0xc997,	// (0x00068e28) wml_tabs_pane_g3

0x4bf5,	// (0x00061086) wml_tabs_2_active_pane_ParamLimits

0x4bf5,	// (0x00061086) wml_tabs_2_active_pane

0x4c05,	// (0x00061096) wml_tabs_2_passive_pane_ParamLimits

0x4c05,	// (0x00061096) wml_tabs_2_passive_pane

0x4c15,	// (0x000610a6) wml_tabs_3_active_pane_cp_ParamLimits

0x4c15,	// (0x000610a6) wml_tabs_3_active_pane_cp

0x4c26,	// (0x000610b7) wml_tabs_3_passive_pane_ParamLimits

0x4c26,	// (0x000610b7) wml_tabs_3_passive_pane

0x4c37,	// (0x000610c8) wml_tabs_3_passive_pane_cp_ParamLimits

0x4c37,	// (0x000610c8) wml_tabs_3_passive_pane_cp

0x4c48,	// (0x000610d9) tabs_4_active_pane

0x4c50,	// (0x000610e1) tabs_4_passive_pane

0x4c58,	// (0x000610e9) tabs_4_passive_pane_cp

0x4c60,	// (0x000610f1) tabs_4_passive_pane_cp2

0x4180,	// (0x00060611) aid_height_text

0x3931,	// (0x0005fdc2) mup_volume_cont_pane_ParamLimits

0x3931,	// (0x0005fdc2) mup_volume_cont_pane

0x11a2,	// (0x0005d633) aid_size_cell_pinb

0x11ac,	// (0x0005d63d) aid_size_list_pinb

0x4b5a,	// (0x00060feb) mup2_volume_cont_pane_ParamLimits

0x4b5a,	// (0x00060feb) mup2_volume_cont_pane

0x4c68,	// (0x000610f9) mup2_volume_cont_pane_g1_ParamLimits

0x4c68,	// (0x000610f9) mup2_volume_cont_pane_g1

0x0dc4,	// (0x0005d255) aid_size_cell_touch_ParamLimits

0x0dc4,	// (0x0005d255) aid_size_cell_touch

0x1085,	// (0x0005d516) touch_pane_ParamLimits

0x1085,	// (0x0005d516) touch_pane

0x107b,	// (0x0005d50c) main_rss2_pane

0xc9b4,	// (0x00068e45) listscroll_rss2_pane

0xc9bd,	// (0x00068e4e) rss2_navigation_pane

0xc9c5,	// (0x00068e56) list_rss2_pane

0xb1bf,	// (0x00067650) scroll_pane_cp22

0xc9cd,	// (0x00068e5e) rss2_navigation_pane_g1

0xc9d6,	// (0x00068e67) rss2_navigation_pane_g2

0xc9de,	// (0x00068e6f) rss2_navigation_pane_g3

0x0002,

0x042a,	// (0x0005c8bb) rss2_navigation_pane_g

0xc9e6,	// (0x00068e77) rss2_navigation_pane_t1

0x4ca1,	// (0x00061132) rss2_list_single_pane_ParamLimits

0x4ca1,	// (0x00061132) rss2_list_single_pane

0xc9f4,	// (0x00068e85) rss2_list_single_pane_t2

0xca02,	// (0x00068e93) rss2_list_single_pane_t3_ParamLimits

0xca02,	// (0x00068e93) rss2_list_single_pane_t3

0xca1f,	// (0x00068eb0) rss2_list_single_pane_t4

0x317b,	// (0x0005f60c) smil_status_pane_g1

0x43d2,	// (0x00060863) main_image2_pane_ParamLimits

0x43d2,	// (0x00060863) main_image2_pane

0x486d,	// (0x00060cfe) main_camera2_pane_g9_ParamLimits

0x486d,	// (0x00060cfe) main_camera2_pane_g9

0x48c1,	// (0x00060d52) main_camera2_pane_t5_ParamLimits

0x48c1,	// (0x00060d52) main_camera2_pane_t5

0x48d3,	// (0x00060d64) main_camera2_pane_t6_ParamLimits

0x48d3,	// (0x00060d64) main_camera2_pane_t6

0x4cd5,	// (0x00061166) main_image2_pane_g1_ParamLimits

0x4cd5,	// (0x00061166) main_image2_pane_g1

0x3f1a,	// (0x000603ab) smil2_video_pane_ParamLimits

0x3f1a,	// (0x000603ab) smil2_video_pane

0x0cc8,	// (0x0005d159) aid_zoom_text_primary_cp

0x1016,	// (0x0005d4a7) popup_preview_fixed_window

0xaabd,	// (0x00066f4e) im_reading_pane_g1

0x47b7,	// (0x00060c48) cams2_bc_adjust_pane_cp_ParamLimits

0x47b7,	// (0x00060c48) cams2_bc_adjust_pane_cp

0x4903,	// (0x00060d94) cams2_bc_adjust_pane_ParamLimits

0x4903,	// (0x00060d94) cams2_bc_adjust_pane

0xdbed,	// (0x0006a07e) cams2_bc_adjust_pane_g1

0x4ce1,	// (0x00061172) cams2_slider_pane

0x4cea,	// (0x0006117b) cams2_slider_pane_g1

0x4cf3,	// (0x00061184) cams2_slider_pane_g2

0x0006,

0xf5c8,	// (0x0006ba59) cams2_slider_pane_g

0x12ac,	// (0x0005d73d) calc_display_pane_ParamLimits

0x12ca,	// (0x0005d75b) calc_paper_pane_ParamLimits

0x12e6,	// (0x0005d777) grid_calc_pane_ParamLimits

0x346b,	// (0x0005f8fc) popup_clock_digital_window_t1_ParamLimits

0xb688,	// (0x00067b19) main_image_pane_t1

0x1292,	// (0x0005d723) aid_size_cell_calc_ParamLimits

0x1292,	// (0x0005d723) aid_size_cell_calc

0x4403,	// (0x00060894) popup_blid_sat_info2_window_ParamLimits

0x4403,	// (0x00060894) popup_blid_sat_info2_window

0xca35,	// (0x00068ec6) aid_size_cell_blid

0xca3d,	// (0x00068ece) bg_popup_window_pane_cp07

0xca60,	// (0x00068ef1) grid_popup_blid_pane

0xca6a,	// (0x00068efb) heading_pane_cp05_ParamLimits

0xca6a,	// (0x00068efb) heading_pane_cp05

0xcb34,	// (0x00068fc5) cell_popup_blid_pane_ParamLimits

0xcb34,	// (0x00068fc5) cell_popup_blid_pane

0xcb58,	// (0x00068fe9) cell_popup_blid_pane_g1

0xcb60,	// (0x00068ff1) cell_popup_blid_pane_t1

0x4b20,	// (0x00060fb1) mup2_indicator_pane_ParamLimits

0x4b20,	// (0x00060fb1) mup2_indicator_pane

0xa9c4,	// (0x00066e55) mup2_visualizer_osc_pane

0xc90a,	// (0x00068d9b) mup2_visualizer_spec_pane_ParamLimits

0xc90a,	// (0x00068d9b) mup2_visualizer_spec_pane

0x4d0d,	// (0x0006119e) mup2_spec_half_pane

0x4d16,	// (0x000611a7) mup2_spec_half_pane_cp

0x4d20,	// (0x000611b1) mup2_spec_bar_pane_ParamLimits

0x4d20,	// (0x000611b1) mup2_spec_bar_pane

0xc8ab,	// (0x00068d3c) mup2_spec_bar_pane_g1

0xc8b5,	// (0x00068d46) mup2_spec_bar_pane_g2

0x0001,

0x03a4,	// (0x0005c835) mup2_spec_bar_pane_g

0x4d3f,	// (0x000611d0) mup2_osc_middle_pane

0xc8c7,	// (0x00068d58) mup2_visualizer_osc_pane_g1

0x9af7,	// (0x00065f88) popup_number_entry_window_t1_ParamLimits

0x9b0a,	// (0x00065f9b) popup_number_entry_window_t2_ParamLimits

0x9b1c,	// (0x00065fad) popup_number_entry_window_t3_ParamLimits

0x10dc,	// (0x0005d56d) popup_number_entry_window_t5_ParamLimits

0x10dc,	// (0x0005d56d) popup_number_entry_window_t5

0xf0ca,	// (0x0006b55b) popup_number_entry_window_t_ParamLimits

0x9b2e,	// (0x00065fbf) text_title_cp2_ParamLimits

0x3c1b,	// (0x000600ac) aid_hotspot_pointer_text2_pane

0x3ca9,	// (0x0006013a) main_viewer_pane_g9_ParamLimits

0x3ca9,	// (0x0006013a) main_viewer_pane_g9

0xacf6,	// (0x00067187) cale_month_pane_t1_ParamLimits

0xad33,	// (0x000671c4) bg_cale_pane_ParamLimits

0xad4b,	// (0x000671dc) list_cale_pane_ParamLimits

0xad5c,	// (0x000671ed) listscroll_cale_day_pane_t1

0xad6e,	// (0x000671ff) scroll_pane_cp09_ParamLimits

0x3970,	// (0x0005fe01) main_mup_eq_pane_t1_ParamLimits

0x3970,	// (0x0005fe01) main_mup_eq_pane_t1

0x398a,	// (0x0005fe1b) main_mup_eq_pane_t2_ParamLimits

0x398a,	// (0x0005fe1b) main_mup_eq_pane_t2

0x39a2,	// (0x0005fe33) main_mup_eq_pane_t3_ParamLimits

0x39a2,	// (0x0005fe33) main_mup_eq_pane_t3

0x39ba,	// (0x0005fe4b) main_mup_eq_pane_t4_ParamLimits

0x39ba,	// (0x0005fe4b) main_mup_eq_pane_t4

0x39d2,	// (0x0005fe63) main_mup_eq_pane_t5_ParamLimits

0x39d2,	// (0x0005fe63) main_mup_eq_pane_t5

0x39ea,	// (0x0005fe7b) main_mup_eq_pane_t6_ParamLimits

0x39ea,	// (0x0005fe7b) main_mup_eq_pane_t6

0x39fe,	// (0x0005fe8f) main_mup_eq_pane_t7_ParamLimits

0x39fe,	// (0x0005fe8f) main_mup_eq_pane_t7

0x3a12,	// (0x0005fea3) main_mup_eq_pane_t8_ParamLimits

0x3a12,	// (0x0005fea3) main_mup_eq_pane_t8

0x3a28,	// (0x0005feb9) main_mup_eq_pane_t9_ParamLimits

0x3a28,	// (0x0005feb9) main_mup_eq_pane_t9

0x3a40,	// (0x0005fed1) main_mup_eq_pane_t10_ParamLimits

0x3a40,	// (0x0005fed1) main_mup_eq_pane_t10

0x0009,

0xf455,	// (0x0006b8e6) main_mup_eq_pane_t_ParamLimits

0xf455,	// (0x0006b8e6) main_mup_eq_pane_t

0x3afd,	// (0x0005ff8e) mup_equalizer_pane_cp5_ParamLimits

0x3b13,	// (0x0005ffa4) mup_equalizer_pane_cp6_ParamLimits

0x3b2b,	// (0x0005ffbc) mup_equalizer_pane_cp7_ParamLimits

0x107b,	// (0x0005d50c) main_gallery_pane

0xc8d0,	// (0x00068d61) smil2_volume_pane

0xc8d8,	// (0x00068d69) smil_status_volume_pane_g1_ParamLimits

0xc8eb,	// (0x00068d7c) smil_status_volume_pane_g2_ParamLimits

0x462a,	// (0x00060abb) smil_status_volume_pane_g3_ParamLimits

0xf547,	// (0x0006b9d8) smil_status_volume_pane_g_ParamLimits

0xca3d,	// (0x00068ece) bg_popup_window_pane_cp07_ParamLimits

0xca4b,	// (0x00068edc) blid_firmament_pane

0x4d48,	// (0x000611d9) aid_size_cell_gallery_ParamLimits

0x4d48,	// (0x000611d9) aid_size_cell_gallery

0x4d56,	// (0x000611e7) grid_gallery_pane_ParamLimits

0x4d56,	// (0x000611e7) grid_gallery_pane

0x4d66,	// (0x000611f7) cell_gallery_pane_ParamLimits

0x4d66,	// (0x000611f7) cell_gallery_pane

0xcb6e,	// (0x00068fff) bg_cell_gallery_focus_pane_ParamLimits

0xcb6e,	// (0x00068fff) bg_cell_gallery_focus_pane

0xcb80,	// (0x00069011) cell_gallery_pane_g1_ParamLimits

0xcb80,	// (0x00069011) cell_gallery_pane_g1

0x4db4,	// (0x00061245) cell_gallery_pane_g2_ParamLimits

0x4db4,	// (0x00061245) cell_gallery_pane_g2

0x4dc1,	// (0x00061252) cell_gallery_pane_g3_ParamLimits

0x4dc1,	// (0x00061252) cell_gallery_pane_g3

0xcb8c,	// (0x0006901d) cell_gallery_pane_g4_ParamLimits

0xcb8c,	// (0x0006901d) cell_gallery_pane_g4

0x0003,

0xf5d7,	// (0x0006ba68) cell_gallery_pane_g_ParamLimits

0xf5d7,	// (0x0006ba68) cell_gallery_pane_g

0xcb98,	// (0x00069029) bg_cell_gallery_focus_pane_g1

0xcba0,	// (0x00069031) bg_cell_gallery_focus_pane_g2

0xcba8,	// (0x00069039) bg_cell_gallery_focus_pane_g3

0xcbb0,	// (0x00069041) bg_cell_gallery_focus_pane_g4

0xcbb8,	// (0x00069049) bg_cell_gallery_focus_pane_g5

0xcbc0,	// (0x00069051) bg_cell_gallery_focus_pane_g6

0xcbc8,	// (0x00069059) bg_cell_gallery_focus_pane_g7

0xcbd0,	// (0x00069061) bg_cell_gallery_focus_pane_g8

0x0007,

0x0460,	// (0x0005c8f1) bg_cell_gallery_focus_pane_g

0xcbd8,	// (0x00069069) aid_firma_cardinal

0xcbec,	// (0x0006907d) blid_firmament_pane_t1

0xcc03,	// (0x00069094) blid_firmament_pane_t2

0xcc1a,	// (0x000690ab) blid_firmament_pane_t3

0xcc31,	// (0x000690c2) blid_firmament_pane_t4

0x0003,

0x0471,	// (0x0005c902) blid_firmament_pane_t

0xcc48,	// (0x000690d9) blid_sat_info_pane

0xcc58,	// (0x000690e9) blid_sat_info_pane_g1

0xcc58,	// (0x000690e9) blid_sat_info_pane_g2

0x0001,

0x047a,	// (0x0005c90b) blid_sat_info_pane_g

0xcc62,	// (0x000690f3) blid_sat_info_pane_t1

0xcc70,	// (0x00069101) smil2_volume_content_pane

0xcc79,	// (0x0006910a) smil2_volume_pane_g1

0xcc81,	// (0x00069112) smil2_volume_content_pane_g1

0xcc8a,	// (0x0006911b) smil2_volume_content_pane_g2

0xcc93,	// (0x00069124) smil2_volume_content_pane_g3

0xcc9c,	// (0x0006912d) smil2_volume_content_pane_g4

0xcca5,	// (0x00069136) smil2_volume_content_pane_g5

0xccae,	// (0x0006913f) smil2_volume_content_pane_g6

0xccb7,	// (0x00069148) smil2_volume_content_pane_g7

0xccc0,	// (0x00069151) smil2_volume_content_pane_g8

0xccc9,	// (0x0006915a) smil2_volume_content_pane_g9

0xccd2,	// (0x00069163) smil2_volume_content_pane_g10

0x0009,

0x047f,	// (0x0005c910) smil2_volume_content_pane_g

0x18d2,	// (0x0005dd63) cale_week_day_heading_pane_t1_ParamLimits

0x190d,	// (0x0005dd9e) cale_week_day_heading_pane_t2_ParamLimits

0x1948,	// (0x0005ddd9) cale_week_day_heading_pane_t3_ParamLimits

0x1983,	// (0x0005de14) cale_week_day_heading_pane_t4_ParamLimits

0x19be,	// (0x0005de4f) cale_week_day_heading_pane_t5_ParamLimits

0x19f9,	// (0x0005de8a) cale_week_day_heading_pane_t6_ParamLimits

0x1a34,	// (0x0005dec5) cale_week_day_heading_pane_t7_ParamLimits

0xf1d1,	// (0x0006b662) cale_week_day_heading_pane_t_ParamLimits

0xa969,	// (0x00066dfa) bg_cale_side_pane_ParamLimits

0x1a6f,	// (0x0005df00) cale_week_time_pane_t1_ParamLimits

0x1a89,	// (0x0005df1a) cale_week_time_pane_t2_ParamLimits

0x1aa3,	// (0x0005df34) cale_week_time_pane_t3_ParamLimits

0x1abd,	// (0x0005df4e) cale_week_time_pane_t4_ParamLimits

0x1ad7,	// (0x0005df68) cale_week_time_pane_t5_ParamLimits

0x1af1,	// (0x0005df82) cale_week_time_pane_t6_ParamLimits

0x1b11,	// (0x0005dfa2) cale_week_time_pane_t7_ParamLimits

0x1b35,	// (0x0005dfc6) cale_week_time_pane_t8_ParamLimits

0xf1e0,	// (0x0006b671) cale_week_time_pane_t_ParamLimits

0x1b59,	// (0x0005dfea) cell_cale_week_pane_g2_ParamLimits

0xa969,	// (0x00066dfa) bg_cale_side_pane_cp01_ParamLimits

0x2f26,	// (0x0005f3b7) cale_month_week_pane_t1_ParamLimits

0x2f3f,	// (0x0005f3d0) cale_month_week_pane_t2_ParamLimits

0x2f58,	// (0x0005f3e9) cale_month_week_pane_t3_ParamLimits

0x2f71,	// (0x0005f402) cale_month_week_pane_t4_ParamLimits

0x2f8c,	// (0x0005f41d) cale_month_week_pane_t5_ParamLimits

0x2fad,	// (0x0005f43e) cale_month_week_pane_t6_ParamLimits

0xf2b5,	// (0x0006b746) cale_month_week_pane_t_ParamLimits

0x311e,	// (0x0005f5af) cell_cale_month_pane_g1_ParamLimits

0x107b,	// (0x0005d50c) main_cale_event_viewer_pane

0x9acd,	// (0x00065f5e) listscroll_cale_event_viewer_pane

0xccdb,	// (0x0006916c) list_cale_ev_pane

0xcce3,	// (0x00069174) scroll_pane_cp023

0xccef,	// (0x00069180) field_cale_ev_pane_ParamLimits

0xccef,	// (0x00069180) field_cale_ev_pane

0xcd0d,	// (0x0006919e) field_cale_ev_content_pane_ParamLimits

0xcd0d,	// (0x0006919e) field_cale_ev_content_pane

0xcd19,	// (0x000691aa) field_cale_ev_pane_g1_ParamLimits

0xcd19,	// (0x000691aa) field_cale_ev_pane_g1

0xcd25,	// (0x000691b6) field_cale_ev_pane_g2_ParamLimits

0xcd25,	// (0x000691b6) field_cale_ev_pane_g2

0xcd3d,	// (0x000691ce) field_cale_ev_pane_g3_ParamLimits

0xcd3d,	// (0x000691ce) field_cale_ev_pane_g3

0x0002,

0x0494,	// (0x0005c925) field_cale_ev_pane_g_ParamLimits

0x0494,	// (0x0005c925) field_cale_ev_pane_g

0xcd55,	// (0x000691e6) field_cale_ev_pane_t1_ParamLimits

0xcd55,	// (0x000691e6) field_cale_ev_pane_t1

0xa8dc,	// (0x00066d6d) field_cale_ev_content_pane_t1_ParamLimits

0xa8dc,	// (0x00066d6d) field_cale_ev_content_pane_t1

0xb56e,	// (0x000679ff) bg_button_pane_cp01

0x165b,	// (0x0005daec) listscroll_cale_week_pane_ParamLimits

0xa914,	// (0x00066da5) popup_toolbar_window_cp01

0xa93a,	// (0x00066dcb) listscroll_cale_week_pane_t1_ParamLimits

0x165b,	// (0x0005daec) listscroll_cale_day_pane_ParamLimits

0xa914,	// (0x00066da5) popup_toolbar_window_cp02

0xad5c,	// (0x000671ed) listscroll_cale_day_pane_t1_ParamLimits

0x165b,	// (0x0005daec) main_cale_month_pane_ParamLimits

0x4506,	// (0x00060997) popup_toolbar_window_cp03_ParamLimits

0x4506,	// (0x00060997) popup_toolbar_window_cp03

0x3e30,	// (0x000602c1) main_image_pane_g2_ParamLimits

0x3e30,	// (0x000602c1) main_image_pane_g2

0x3e3c,	// (0x000602cd) main_image_pane_g3_ParamLimits

0x3e3c,	// (0x000602cd) main_image_pane_g3

0x0002,

0xf4dd,	// (0x0006b96e) main_image_pane_g_ParamLimits

0xf4dd,	// (0x0006b96e) main_image_pane_g

0xb688,	// (0x00067b19) main_image_pane_t1_ParamLimits

0x3e48,	// (0x000602d9) main_image_pane_t2_ParamLimits

0x3e48,	// (0x000602d9) main_image_pane_t2

0x3e5a,	// (0x000602eb) main_image_pane_t3_ParamLimits

0x3e5a,	// (0x000602eb) main_image_pane_t3

0x3e6c,	// (0x000602fd) main_image_pane_t4_ParamLimits

0x3e6c,	// (0x000602fd) main_image_pane_t4

0x0003,

0xf4e4,	// (0x0006b975) main_image_pane_t_ParamLimits

0xf4e4,	// (0x0006b975) main_image_pane_t

0x3e7e,	// (0x0006030f) popup_image_details_window_cp01

0x3e88,	// (0x00060319) popup_toobar_trans_pane_cp01_ParamLimits

0x3e88,	// (0x00060319) popup_toobar_trans_pane_cp01

0x4456,	// (0x000608e7) popup_image_details_window_ParamLimits

0x4456,	// (0x000608e7) popup_image_details_window

0x4464,	// (0x000608f5) popup_image_focus_window

0x47a9,	// (0x00060c3a) camera2_autofocus_pane_ParamLimits

0x47a9,	// (0x00060c3a) camera2_autofocus_pane

0x9acd,	// (0x00065f5e) bg_popup_sub_pane_cp06

0xcd6c,	// (0x000691fd) popup_image_focus_window_g1

0xcd74,	// (0x00069205) popup_image_focus_window_g2

0xcd7c,	// (0x0006920d) popup_image_focus_window_g3

0xcd84,	// (0x00069215) popup_image_focus_window_g4

0x0003,

0x049b,	// (0x0005c92c) popup_image_focus_window_g

0xcd8c,	// (0x0006921d) popup_image_focus_window_t1

0xcd9a,	// (0x0006922b) popup_image_focus_window_t2

0xcdaa,	// (0x0006923b) popup_image_focus_window_t3

0x0002,

0x04a4,	// (0x0005c935) popup_image_focus_window_t

0xcdb8,	// (0x00069249) camera2_autofocus_pane_g1

0xa708,	// (0x00066b99) bg_tb_trans_pane_cp01

0xcdc6,	// (0x00069257) popup_image_details_window_g1

0xcdd9,	// (0x0006926a) popup_image_details_window_g2

0x0002,

0x04b6,	// (0x0005c947) popup_image_details_window_g

0xce02,	// (0x00069293) popup_image_details_window_t1

0xce14,	// (0x000692a5) popup_image_details_window_t2

0xce2d,	// (0x000692be) popup_image_details_window_t3

0xce41,	// (0x000692d2) popup_image_details_window_t4

0xce5c,	// (0x000692ed) popup_image_details_window_t5

0x0004,

0x04bd,	// (0x0005c94e) popup_image_details_window_t

0xa7bb,	// (0x00066c4c) bg_calc_paper_pane_ParamLimits

0x107b,	// (0x0005d50c) grid_highlight_pane_cp013

0x13e3,	// (0x0005d874) list_calc_pane_ParamLimits

0x13f5,	// (0x0005d886) scroll_pane_cp024

0xa7cf,	// (0x00066c60) bg_calc_display_pane_ParamLimits

0x13fd,	// (0x0005d88e) calc_display_pane_t1_ParamLimits

0x1412,	// (0x0005d8a3) calc_display_pane_t2_ParamLimits

0x1427,	// (0x0005d8b8) calc_display_pane_t3_ParamLimits

0xf151,	// (0x0006b5e2) calc_display_pane_t_ParamLimits

0x1504,	// (0x0005d995) cell_calc_pane_g2

0x0001,

0xf16e,	// (0x0006b5ff) cell_calc_pane_g

0x150d,	// (0x0005d99e) cell_calc_pane_t1

0xa82e,	// (0x00066cbf) grid_highlight_pane_cp02_ParamLimits

0xa844,	// (0x00066cd5) toolbar_button_pane_cp01_ParamLimits

0xa844,	// (0x00066cd5) toolbar_button_pane_cp01

0xb6cd,	// (0x00067b5e) temp_image_control_pane_ParamLimits

0xb6cd,	// (0x00067b5e) temp_image_control_pane

0x43d2,	// (0x00060863) main_mp3_pane

0xce76,	// (0x00069307) temp_image_control_pane_g1_ParamLimits

0xce76,	// (0x00069307) temp_image_control_pane_g1

0xce84,	// (0x00069315) temp_image_control_pane_g2_ParamLimits

0xce84,	// (0x00069315) temp_image_control_pane_g2

0xce96,	// (0x00069327) temp_image_control_pane_g3_ParamLimits

0xce96,	// (0x00069327) temp_image_control_pane_g3

0x4dfe,	// (0x0006128f) temp_image_control_pane_g4_ParamLimits

0x4dfe,	// (0x0006128f) temp_image_control_pane_g4

0x0003,

0xf5eb,	// (0x0006ba7c) temp_image_control_pane_g_ParamLimits

0xf5eb,	// (0x0006ba7c) temp_image_control_pane_g

0xce76,	// (0x00069307) main_mp3_pane_g1

0x4e0f,	// (0x000612a0) main_mp3_pane_g2

0x0007,

0xf5f4,	// (0x0006ba85) main_mp3_pane_g

0xced9,	// (0x0006936a) main_mp3_pane_t1

0xa9cc,	// (0x00066e5d) main_camera_pane_g8_ParamLimits

0xa9cc,	// (0x00066e5d) main_camera_pane_g8

0x1de3,	// (0x0005e274) main_video_pane_g7_ParamLimits

0x1de3,	// (0x0005e274) main_video_pane_g7

0x48f1,	// (0x00060d82) main_camera2_pane_t7_ParamLimits

0x48f1,	// (0x00060d82) main_camera2_pane_t7

0xab14,	// (0x00066fa5) scroll_pane_cp025_ParamLimits

0xab14,	// (0x00066fa5) scroll_pane_cp025

0xab28,	// (0x00066fb9) scroll_pane_cp026_ParamLimits

0xab28,	// (0x00066fb9) scroll_pane_cp026

0xab37,	// (0x00066fc8) wml_content_pane_ParamLimits

0x107b,	// (0x0005d50c) main_touch_calib_pane

0x4eb3,	// (0x00061344) main_touch_calib_pane_g1

0x4ebf,	// (0x00061350) main_touch_calib_pane_g2

0x4ecb,	// (0x0006135c) main_touch_calib_pane_g3

0x4ed7,	// (0x00061368) main_touch_calib_pane_g4

0x0003,

0xf612,	// (0x0006baa3) main_touch_calib_pane_g

0x4ee3,	// (0x00061374) main_touch_calib_pane_t1

0x4efc,	// (0x0006138d) main_touch_calib_pane_t2

0x0004,

0xf61b,	// (0x0006baac) main_touch_calib_pane_t

0xb28e,	// (0x0006771f) mup_progress_pane_cp02

0xb2c3,	// (0x00067754) navi_pane_g1

0xb37e,	// (0x0006780f) navi_pane_mp_t3

0x43d2,	// (0x00060863) main_mp3_pane_ParamLimits

0x4543,	// (0x000609d4) navi_pane_ParamLimits

0xce76,	// (0x00069307) main_mp3_pane_g1_ParamLimits

0x4e0f,	// (0x000612a0) main_mp3_pane_g2_ParamLimits

0x4e1b,	// (0x000612ac) main_mp3_pane_g3_ParamLimits

0x4e1b,	// (0x000612ac) main_mp3_pane_g3

0x4e27,	// (0x000612b8) main_mp3_pane_g4_ParamLimits

0x4e27,	// (0x000612b8) main_mp3_pane_g4

0xcea6,	// (0x00069337) main_mp3_pane_g5_ParamLimits

0xcea6,	// (0x00069337) main_mp3_pane_g5

0xceb4,	// (0x00069345) main_mp3_pane_g6_ParamLimits

0xceb4,	// (0x00069345) main_mp3_pane_g6

0xcec1,	// (0x00069352) main_mp3_pane_g7_ParamLimits

0xcec1,	// (0x00069352) main_mp3_pane_g7

0xcecd,	// (0x0006935e) main_mp3_pane_g8_ParamLimits

0xcecd,	// (0x0006935e) main_mp3_pane_g8

0xf5f4,	// (0x0006ba85) main_mp3_pane_g_ParamLimits

0x4e33,	// (0x000612c4) main_mp3_pane_t2

0x4e43,	// (0x000612d4) main_mp3_pane_t3

0xcee7,	// (0x00069378) main_mp3_pane_t4

0xcef5,	// (0x00069386) main_mp3_pane_t5

0x0005,

0xf605,	// (0x0006ba96) main_mp3_pane_t

0xcf03,	// (0x00069394) mup_progress_pane_cp01

0x0cc8,	// (0x0005d159) aid_zoom_text_secondary2

0xccdb,	// (0x0006916c) list_cale_ev2_pane

0xcce3,	// (0x00069174) scroll_pane_cp023_ParamLimits

0x4f57,	// (0x000613e8) field_cale_ev2_pane_ParamLimits

0x4f57,	// (0x000613e8) field_cale_ev2_pane

0xa007,	// (0x00066498) field_cale_ev2_pane_g1_ParamLimits

0xa007,	// (0x00066498) field_cale_ev2_pane_g1

0xa013,	// (0x000664a4) field_cale_ev2_pane_g2_ParamLimits

0xa013,	// (0x000664a4) field_cale_ev2_pane_g2

0xa02b,	// (0x000664bc) field_cale_ev2_pane_g3_ParamLimits

0xa02b,	// (0x000664bc) field_cale_ev2_pane_g3

0x0003,

0xf626,	// (0x0006bab7) field_cale_ev2_pane_g_ParamLimits

0xf626,	// (0x0006bab7) field_cale_ev2_pane_g

0xa04f,	// (0x000664e0) field_cale_ev2_pane_t1_ParamLimits

0xa04f,	// (0x000664e0) field_cale_ev2_pane_t1

0xa066,	// (0x000664f7) field_cale_ev2_pane_t2_ParamLimits

0xa066,	// (0x000664f7) field_cale_ev2_pane_t2

0x0001,

0xf62f,	// (0x0006bac0) field_cale_ev2_pane_t_ParamLimits

0xf62f,	// (0x0006bac0) field_cale_ev2_pane_t

0x3d11,	// (0x000601a2) main_postcard_pane_g5_ParamLimits

0x3d11,	// (0x000601a2) main_postcard_pane_g5

0x3d1f,	// (0x000601b0) main_postcard_pane_g6_ParamLimits

0x3d1f,	// (0x000601b0) main_postcard_pane_g6

0x1c2d,	// (0x0005e0be) camera2_autofocus_pane_cp_ParamLimits

0x1c2d,	// (0x0005e0be) camera2_autofocus_pane_cp

0x43d2,	// (0x00060863) main_mup3_pane

0x4fa1,	// (0x00061432) main_mup3_pane_g1_ParamLimits

0x4fa1,	// (0x00061432) main_mup3_pane_g1

0x4fc2,	// (0x00061453) main_mup3_pane_g2_ParamLimits

0x4fc2,	// (0x00061453) main_mup3_pane_g2

0x503c,	// (0x000614cd) main_mup3_pane_g3_ParamLimits

0x503c,	// (0x000614cd) main_mup3_pane_g3

0x507f,	// (0x00061510) main_mup3_pane_g4_ParamLimits

0x507f,	// (0x00061510) main_mup3_pane_g4

0x50c2,	// (0x00061553) main_mup3_pane_g5_ParamLimits

0x50c2,	// (0x00061553) main_mup3_pane_g5

0x5105,	// (0x00061596) main_mup3_pane_g6_ParamLimits

0x5105,	// (0x00061596) main_mup3_pane_g6

0xcf0b,	// (0x0006939c) main_mup3_pane_g7_ParamLimits

0xcf0b,	// (0x0006939c) main_mup3_pane_g7

0x0007,

0xf63f,	// (0x0006bad0) main_mup3_pane_g_ParamLimits

0xf63f,	// (0x0006bad0) main_mup3_pane_g

0x517b,	// (0x0006160c) main_mup3_pane_t1_ParamLimits

0x517b,	// (0x0006160c) main_mup3_pane_t1

0x51ea,	// (0x0006167b) main_mup3_pane_t2_ParamLimits

0x51ea,	// (0x0006167b) main_mup3_pane_t2

0x52b3,	// (0x00061744) main_mup3_pane_t4_ParamLimits

0x52b3,	// (0x00061744) main_mup3_pane_t4

0x5301,	// (0x00061792) main_mup3_pane_t5_ParamLimits

0x5301,	// (0x00061792) main_mup3_pane_t5

0x53b1,	// (0x00061842) main_mup3_pane_t6_ParamLimits

0x53b1,	// (0x00061842) main_mup3_pane_t6

0x0005,

0xf650,	// (0x0006bae1) main_mup3_pane_t_ParamLimits

0xf650,	// (0x0006bae1) main_mup3_pane_t

0x545d,	// (0x000618ee) mup3_progress_pane_ParamLimits

0x545d,	// (0x000618ee) mup3_progress_pane

0x54d1,	// (0x00061962) popup_mup3_control_window_ParamLimits

0x54d1,	// (0x00061962) popup_mup3_control_window

0xcf19,	// (0x000693aa) popup_mup3_text_window

0x54ea,	// (0x0006197b) mup3_progress_pane_t1

0x5509,	// (0x0006199a) mup3_progress_pane_t2

0xcf21,	// (0x000693b2) mup3_progress_pane_t3

0x0002,

0xf65d,	// (0x0006baee) mup3_progress_pane_t

0xcf3e,	// (0x000693cf) mup_progress_pane_cp03

0x9acd,	// (0x00065f5e) bg_tb_trans_pane_cp04

0x5528,	// (0x000619b9) mup3_volume_pane

0x5530,	// (0x000619c1) popup_mup3_control_window_g1

0x5539,	// (0x000619ca) mup3_volume_pane_g1

0x5542,	// (0x000619d3) mup3_volume_pane_g2

0x554b,	// (0x000619dc) mup3_volume_pane_g3

0x0002,

0xf664,	// (0x0006baf5) mup3_volume_pane_g

0x9acd,	// (0x00065f5e) bg_tb_trans_pane_cp03

0xcf4e,	// (0x000693df) popup_mup3_text_window_g1

0xcf56,	// (0x000693e7) popup_mup3_text_window_t1

0xa817,	// (0x00066ca8) list_calc_item_pane_g1_ParamLimits

0xc9ab,	// (0x00068e3c) mup_volume_pane_cp_g1

0x4f15,	// (0x000613a6) main_touch_calib_pane_t3

0x4f2b,	// (0x000613bc) main_touch_calib_pane_t4

0x4f41,	// (0x000613d2) main_touch_calib_pane_t5

0x0db0,	// (0x0005d241) aid_cell_size_toolbar2

0x0db8,	// (0x0005d249) aid_popup3_width_pane

0x0cc0,	// (0x0005d151) aid_zoom_text_msg_primary

0x1c02,	// (0x0005e093) vorec_t7

0xa7db,	// (0x00066c6c) bg_calc_paper_pane_g1_ParamLimits

0xa7e7,	// (0x00066c78) bg_calc_paper_pane_g2_ParamLimits

0xa7f3,	// (0x00066c84) bg_calc_paper_pane_g3_ParamLimits

0xa7ff,	// (0x00066c90) bg_calc_paper_pane_g4_ParamLimits

0xa80b,	// (0x00066c9c) bg_calc_paper_pane_g5_ParamLimits

0x1466,	// (0x0005d8f7) bg_calc_paper_pane_g6_ParamLimits

0x1477,	// (0x0005d908) bg_calc_paper_pane_g7_ParamLimits

0x1488,	// (0x0005d919) bg_calc_paper_pane_g8_ParamLimits

0xf158,	// (0x0006b5e9) bg_calc_paper_pane_g_ParamLimits

0x1499,	// (0x0005d92a) calc_bg_paper_pane_g9_ParamLimits

0x1d14,	// (0x0005e1a5) image_qvga_pane_ParamLimits

0x1d14,	// (0x0005e1a5) image_qvga_pane

0xa6e2,	// (0x00066b73) bg_popup_sub_pane_cp04_ParamLimits

0xb604,	// (0x00067a95) popup_mup_playback_window_g1_ParamLimits

0xb610,	// (0x00067aa1) popup_mup_playback_window_t1_ParamLimits

0xb625,	// (0x00067ab6) popup_mup_playback_window_t2_ParamLimits

0x026d,	// (0x0005c6fe) popup_mup_playback_window_t_ParamLimits

0x4a20,	// (0x00060eb1) main_mup2_pane_g3_ParamLimits

0x4a20,	// (0x00060eb1) main_mup2_pane_g3

0x20e1,	// (0x0005e572) popup_toolbar_window_cp04

0xba1a,	// (0x00067eab) popup_call2_audio_second_window_g3_ParamLimits

0xba1a,	// (0x00067eab) popup_call2_audio_second_window_g3

0xbe24,	// (0x000682b5) popup_call2_audio_first_window_g4_ParamLimits

0xbe24,	// (0x000682b5) popup_call2_audio_first_window_g4

0xc4a3,	// (0x00068934) popup_call2_audio_in_window_g4_ParamLimits

0xc4a3,	// (0x00068934) popup_call2_audio_in_window_g4

0x3e23,	// (0x000602b4) aid_area_sk_bg_cut_ParamLimits

0x3e23,	// (0x000602b4) aid_area_sk_bg_cut

0xb63a,	// (0x00067acb) aid_area_sk_bg_cut_2_ParamLimits

0xb63a,	// (0x00067acb) aid_area_sk_bg_cut_2

0x4da4,	// (0x00061235) aid_placing_details_win

0x4dac,	// (0x0006123d) aid_placing_details_win_2

0xcdb8,	// (0x00069249) camera2_autofocus_pane_g1_ParamLimits

0x1007,	// (0x0005d498) popup_fixed_preview_cale_window_ParamLimits

0x1007,	// (0x0005d498) popup_fixed_preview_cale_window

0xb416,	// (0x000678a7) navi_slider_pane_g3

0xb41f,	// (0x000678b0) navi_slider_pane_g4

0xb428,	// (0x000678b9) navi_slider_pane_g5

0xb416,	// (0x000678a7) navi_slider_pane_g6

0x3714,	// (0x0005fba5) navi_slider_pane_g7

0xb53b,	// (0x000679cc) mup_scale_pane_g3

0xb544,	// (0x000679d5) mup_scale_pane_g4

0xb54d,	// (0x000679de) mup_scale_pane_g5

0x3b43,	// (0x0005ffd4) mup_scale_pane_g6

0x3b4c,	// (0x0005ffdd) mup_scale_pane_g7

0xb416,	// (0x000678a7) cams2_slider_pane_g3

0xca2d,	// (0x00068ebe) cams2_slider_pane_g4

0x4cfc,	// (0x0006118d) cams2_slider_pane_g5

0xb416,	// (0x000678a7) cams2_slider_pane_g6

0x4d04,	// (0x00061195) cams2_slider_pane_g7

0xcc58,	// (0x000690e9) camera2_autofocus_pane_cp_g1

0xc844,	// (0x00068cd5) bg_popup_preview_window_pane_cp02_ParamLimits

0xc844,	// (0x00068cd5) bg_popup_preview_window_pane_cp02

0xcf64,	// (0x000693f5) list_fp_cale_pane_ParamLimits

0xcf64,	// (0x000693f5) list_fp_cale_pane

0xcf70,	// (0x00069401) popup_fixed_preview_cale_window_t1_ParamLimits

0xcf70,	// (0x00069401) popup_fixed_preview_cale_window_t1

0x5554,	// (0x000619e5) popup_fixed_preview_cale_window_t2_ParamLimits

0x5554,	// (0x000619e5) popup_fixed_preview_cale_window_t2

0x5569,	// (0x000619fa) popup_fixed_preview_cale_window_t3_ParamLimits

0x5569,	// (0x000619fa) popup_fixed_preview_cale_window_t3

0x0002,

0xf66b,	// (0x0006bafc) popup_fixed_preview_cale_window_t_ParamLimits

0xf66b,	// (0x0006bafc) popup_fixed_preview_cale_window_t

0x557e,	// (0x00061a0f) list_single_fp_cale_pane_ParamLimits

0x557e,	// (0x00061a0f) list_single_fp_cale_pane

0xcf8e,	// (0x0006941f) list_single_fp_cale_pane_g1_ParamLimits

0xcf8e,	// (0x0006941f) list_single_fp_cale_pane_g1

0xcf9a,	// (0x0006942b) list_single_fp_cale_pane_g2_ParamLimits

0xcf9a,	// (0x0006942b) list_single_fp_cale_pane_g2

0x0002,

0xf672,	// (0x0006bb03) list_single_fp_cale_pane_g_ParamLimits

0xf672,	// (0x0006bb03) list_single_fp_cale_pane_g

0xcfb3,	// (0x00069444) list_single_fp_cale_pane_t1_ParamLimits

0xcfb3,	// (0x00069444) list_single_fp_cale_pane_t1

0xcfc5,	// (0x00069456) list_single_fp_cale_pane_t2_ParamLimits

0xcfc5,	// (0x00069456) list_single_fp_cale_pane_t2

0x0001,

0xf679,	// (0x0006bb0a) list_single_fp_cale_pane_t_ParamLimits

0xf679,	// (0x0006bb0a) list_single_fp_cale_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0x107b,	// (0x0005d50c) main_dialer_pane

0x5591,	// (0x00061a22) aid_cell_size_keypad

0x559b,	// (0x00061a2c) dialer_ne_pane

0x55a5,	// (0x00061a36) grid_dialer_command_1_pane

0x55ad,	// (0x00061a3e) grid_dialer_command_2_pane

0x55b5,	// (0x00061a46) grid_dialer_keypad_pane

0x55c9,	// (0x00061a5a) bg_popup_call_pane_cp06_ParamLimits

0x55c9,	// (0x00061a5a) bg_popup_call_pane_cp06

0x55d5,	// (0x00061a66) dialer_ne_clear_pane_ParamLimits

0x55d5,	// (0x00061a66) dialer_ne_clear_pane

0xd004,	// (0x00069495) dialer_ne_pane_g1

0xd00c,	// (0x0006949d) dialer_ne_pane_t1_ParamLimits

0xd00c,	// (0x0006949d) dialer_ne_pane_t1

0x55e1,	// (0x00061a72) dialer_ne_pane_t2_ParamLimits

0x55e1,	// (0x00061a72) dialer_ne_pane_t2

0x55fe,	// (0x00061a8f) dialer_ne_pane_t3_ParamLimits

0x55fe,	// (0x00061a8f) dialer_ne_pane_t3

0x0002,

0xf67e,	// (0x0006bb0f) dialer_ne_pane_t_ParamLimits

0xf67e,	// (0x0006bb0f) dialer_ne_pane_t

0x5622,	// (0x00061ab3) dialer_ne_pane_t3_copy1_ParamLimits

0x5622,	// (0x00061ab3) dialer_ne_pane_t3_copy1

0x5646,	// (0x00061ad7) cell_dialer_keypad_pane_ParamLimits

0x5646,	// (0x00061ad7) cell_dialer_keypad_pane

0x565d,	// (0x00061aee) cell_dialer_command_1_pane_ParamLimits

0x565d,	// (0x00061aee) cell_dialer_command_1_pane

0x5673,	// (0x00061b04) cell_dialer_command_2_pane_ParamLimits

0x5673,	// (0x00061b04) cell_dialer_command_2_pane

0xd01e,	// (0x000694af) bg_button_pane_cp02_ParamLimits

0xd01e,	// (0x000694af) bg_button_pane_cp02

0x5682,	// (0x00061b13) cell_dialer_keypad_pane_g1_ParamLimits

0x5682,	// (0x00061b13) cell_dialer_keypad_pane_g1

0xd01e,	// (0x000694af) bg_button_pane_cp03_ParamLimits

0xd01e,	// (0x000694af) bg_button_pane_cp03

0x5697,	// (0x00061b28) cell_dialer_command_1_pane_g1_ParamLimits

0x5697,	// (0x00061b28) cell_dialer_command_1_pane_g1

0xd02a,	// (0x000694bb) bg_button_pane_cp04

0x56ab,	// (0x00061b3c) cell_dialer_command_2_pane_g1

0xa9c4,	// (0x00066e55) bg_button_pane_cp06

0xd032,	// (0x000694c3) dialer_ne_clear_pane_g1

0xb2cf,	// (0x00067760) navi_pane_g2

0xb2fd,	// (0x0006778e) navi_pane_g3

0x0002,

0xf3e5,	// (0x0006b876) navi_pane_g

0xb38c,	// (0x0006781d) navi_pane_mv_g2

0xb3cd,	// (0x0006785e) navi_pane_mv_g5

0x36df,	// (0x0005fb70) navi_pane_mv_t1

0xa7cf,	// (0x00066c60) main_clock2_pane

0x56e9,	// (0x00061b7a) main_clock2_list_pane_ParamLimits

0x56e9,	// (0x00061b7a) main_clock2_list_pane

0x5713,	// (0x00061ba4) main_clock2_pane_t1_ParamLimits

0x5713,	// (0x00061ba4) main_clock2_pane_t1

0x5737,	// (0x00061bc8) main_clock2_pane_t2_ParamLimits

0x5737,	// (0x00061bc8) main_clock2_pane_t2

0x0004,

0xf685,	// (0x0006bb16) main_clock2_pane_t_ParamLimits

0xf685,	// (0x0006bb16) main_clock2_pane_t

0x5792,	// (0x00061c23) popup_clock_analogue_window_cp03_ParamLimits

0x5792,	// (0x00061c23) popup_clock_analogue_window_cp03

0x57b0,	// (0x00061c41) popup_clock_digital_window_cp02_ParamLimits

0x57b0,	// (0x00061c41) popup_clock_digital_window_cp02

0x581d,	// (0x00061cae) main_clock2_list_single_pane_ParamLimits

0x581d,	// (0x00061cae) main_clock2_list_single_pane

0xa9c4,	// (0x00066e55) list_highlight_pane_cp05

0xd06c,	// (0x000694fd) main_clock2_list_single_pane_t1

0x20e1,	// (0x0005e572) popup_toolbar_window_cp04_ParamLimits

0x4dce,	// (0x0006125f) camera2_autofocus_pane_g2_ParamLimits

0x4dce,	// (0x0006125f) camera2_autofocus_pane_g2

0x4dda,	// (0x0006126b) camera2_autofocus_pane_g3_ParamLimits

0x4dda,	// (0x0006126b) camera2_autofocus_pane_g3

0x4de6,	// (0x00061277) camera2_autofocus_pane_g4_ParamLimits

0x4de6,	// (0x00061277) camera2_autofocus_pane_g4

0x4df2,	// (0x00061283) camera2_autofocus_pane_g5_ParamLimits

0x4df2,	// (0x00061283) camera2_autofocus_pane_g5

0x0004,

0xf5e0,	// (0x0006ba71) camera2_autofocus_pane_g_ParamLimits

0xf5e0,	// (0x0006ba71) camera2_autofocus_pane_g

0x4f81,	// (0x00061412) camera2_autofocus_pane_cp_g2

0x4f89,	// (0x0006141a) camera2_autofocus_pane_cp_g3

0x4f91,	// (0x00061422) camera2_autofocus_pane_cp_g4

0x4f99,	// (0x0006142a) camera2_autofocus_pane_cp_g5

0x0004,

0xf634,	// (0x0006bac5) camera2_autofocus_pane_cp_g

0x55c1,	// (0x00061a52) popup_dialer_spcha_window

0x9acd,	// (0x00065f5e) bg_popup_sub_pane_cp07

0xd07a,	// (0x0006950b) list_spcha_pane

0xd082,	// (0x00069513) list_single_spcha_pane_ParamLimits

0xd082,	// (0x00069513) list_single_spcha_pane

0x9acd,	// (0x00065f5e) list_highlight_pane_cp06

0xd093,	// (0x00069524) list_single_spcha_pane_t1

0xc24d,	// (0x000686de) popup_call2_audio_out_window_g4_ParamLimits

0xc24d,	// (0x000686de) popup_call2_audio_out_window_g4

0x107b,	// (0x0005d50c) main_imed2_pane

0x446c,	// (0x000608fd) popup_imed_adjust2_window

0x447f,	// (0x00060910) popup_imed_trans_window_ParamLimits

0x447f,	// (0x00060910) popup_imed_trans_window

0xca96,	// (0x00068f27) popup_blid_sat_info2_window_t1

0xcaa4,	// (0x00068f35) popup_blid_sat_info2_window_t2

0x000a,

0x0440,	// (0x0005c8d1) popup_blid_sat_info2_window_t

0x58c7,	// (0x00061d58) aid_size_cell_colour_35

0x58e1,	// (0x00061d72) aid_size_cell_colour_112

0x58f8,	// (0x00061d89) aid_size_cell_effect

0xa708,	// (0x00066b99) bg_tb_trans_pane_cp02

0xb3ab,	// (0x0006783c) heading_imed_pane

0x5912,	// (0x00061da3) listscroll_imed_pane

0xd0a1,	// (0x00069532) heading_imed_pane_g1

0xd0a9,	// (0x0006953a) heading_imed_pane_t1

0xd0b7,	// (0x00069548) grid_imed_colour_35_pane_ParamLimits

0xd0b7,	// (0x00069548) grid_imed_colour_35_pane

0x591e,	// (0x00061daf) grid_imed_effect_pane

0xd0cf,	// (0x00069560) list_imed_aspect_pane

0x592e,	// (0x00061dbf) scroll_pane_cp027_ParamLimits

0x592e,	// (0x00061dbf) scroll_pane_cp027

0x593a,	// (0x00061dcb) cell_imed_effect_pane_ParamLimits

0x593a,	// (0x00061dcb) cell_imed_effect_pane

0xd0d7,	// (0x00069568) cell_imed_colour_pane_ParamLimits

0xd0d7,	// (0x00069568) cell_imed_colour_pane

0xd119,	// (0x000695aa) cell_imed_colour_pane_g1_ParamLimits

0xd119,	// (0x000695aa) cell_imed_colour_pane_g1

0xd12a,	// (0x000695bb) hgihlgiht_grid_pane_cp016_ParamLimits

0xd12a,	// (0x000695bb) hgihlgiht_grid_pane_cp016

0x5952,	// (0x00061de3) cell_imed_effect_pane_g1

0x595a,	// (0x00061deb) grid_highlight_pane_cp017

0xd13b,	// (0x000695cc) list_imed_single_pane_ParamLimits

0xd13b,	// (0x000695cc) list_imed_single_pane

0x9acd,	// (0x00065f5e) list_highlight_pane_cp07

0xd150,	// (0x000695e1) list_imed_aspect_pane_comp1_t1

0xc850,	// (0x00068ce1) bg_tb_trans_pane_cp05

0xd172,	// (0x00069603) popup_imed_adjust2_window_g1

0xd199,	// (0x0006962a) popup_imed_adjust2_window_t1

0xd1b1,	// (0x00069642) slider_imed_adjust_pane

0xd1c5,	// (0x00069656) slider_imed_adjust_pane_g1

0xd1d5,	// (0x00069666) slider_imed_adjust_pane_g2

0xd1e5,	// (0x00069676) slider_imed_adjust_pane_g3

0xd1f6,	// (0x00069687) slider_imed_adjust_pane_g4

0x0003,

0x0584,	// (0x0005ca15) slider_imed_adjust_pane_g

0x5963,	// (0x00061df4) aid_size_cell_clipart2

0x596f,	// (0x00061e00) grid_imed_clipart_pane

0xd207,	// (0x00069698) scroll_pane_cp031

0x5979,	// (0x00061e0a) cell_imed_clipart_pane_ParamLimits

0x5979,	// (0x00061e0a) cell_imed_clipart_pane

0x599c,	// (0x00061e2d) cell_imed_clipart_pane_g1

0x9acd,	// (0x00065f5e) grid_highlight_pane_cp014

0x56f5,	// (0x00061b86) main_clock2_pane_g1_ParamLimits

0x56f5,	// (0x00061b86) main_clock2_pane_g1

0x57c8,	// (0x00061c59) aid_call2_pane_cp10

0x57da,	// (0x00061c6b) aid_call_pane_cp10

0xb22e,	// (0x000676bf) popup_clock_analogue_window_cp10_g1

0xb22e,	// (0x000676bf) popup_clock_analogue_window_cp10_g2

0x57ec,	// (0x00061c7d) popup_clock_analogue_window_cp10_g3

0x57ec,	// (0x00061c7d) popup_clock_analogue_window_cp10_g4

0xb22e,	// (0x000676bf) popup_clock_analogue_window_cp10_g5

0x0004,

0xf690,	// (0x0006bb21) popup_clock_analogue_window_cp10_g

0x57fe,	// (0x00061c8f) popup_clock_analogue_window_cp10_t1

0x582f,	// (0x00061cc0) clock_digital_number_pane_cp10_ParamLimits

0x582f,	// (0x00061cc0) clock_digital_number_pane_cp10

0x5847,	// (0x00061cd8) clock_digital_number_pane_cp11_ParamLimits

0x5847,	// (0x00061cd8) clock_digital_number_pane_cp11

0x585f,	// (0x00061cf0) clock_digital_number_pane_cp12_ParamLimits

0x585f,	// (0x00061cf0) clock_digital_number_pane_cp12

0x5877,	// (0x00061d08) clock_digital_number_pane_cp13_ParamLimits

0x5877,	// (0x00061d08) clock_digital_number_pane_cp13

0x588f,	// (0x00061d20) clock_digital_separator_pane_cp10_ParamLimits

0x588f,	// (0x00061d20) clock_digital_separator_pane_cp10

0x58a7,	// (0x00061d38) popup_clock_digital_window_cp02_t1_ParamLimits

0x58a7,	// (0x00061d38) popup_clock_digital_window_cp02_t1

0xa6da,	// (0x00066b6b) clock_digital_number_pane_cp10_g1

0xa6da,	// (0x00066b6b) clock_digital_number_pane_cp10_g2

0x0001,

0xf69b,	// (0x0006bb2c) clock_digital_number_pane_cp10_g

0xa6da,	// (0x00066b6b) clock_digital_separator_pane_cp10_g1

0xa6da,	// (0x00066b6b) clock_digital_separator_pane_g2_cp10

0xb3d5,	// (0x00067866) navi_pane_vded_g4

0xb3de,	// (0x0006786f) navi_pane_vded_g5

0xb3e7,	// (0x00067878) navi_pane_vded_t1

0x107b,	// (0x0005d50c) main_vded_pane

0x59a5,	// (0x00061e36) main_vded_pane_g1

0x59b1,	// (0x00061e42) main_vded_pane_g2

0x59bb,	// (0x00061e4c) main_vded_pane_g3

0x0002,

0xf6a0,	// (0x0006bb31) main_vded_pane_g

0x59c5,	// (0x00061e56) main_vded_pane_t1

0x59d3,	// (0x00061e64) main_vded_pane_t2

0x0001,

0xf6a7,	// (0x0006bb38) main_vded_pane_t

0x59e1,	// (0x00061e72) vded_slider_pane

0x59eb,	// (0x00061e7c) vded_video_pane

0xd20f,	// (0x000696a0) vded_video_pane_g1

0x59f5,	// (0x00061e86) vded_video_pane_g2

0xcc58,	// (0x000690e9) vded_video_pane_g3

0x0002,

0xf6ac,	// (0x0006bb3d) vded_video_pane_g

0xd219,	// (0x000696aa) vded_slider_pane_g1

0xc9ab,	// (0x00068e3c) vded_slider_pane_g2

0xd222,	// (0x000696b3) vded_slider_pane_g3

0xd22b,	// (0x000696bc) vded_slider_pane_g4

0xd234,	// (0x000696c5) vded_slider_pane_g5

0x0004,

0x05a5,	// (0x0005ca36) vded_slider_pane_g

0x54c3,	// (0x00061954) mup3_rocker_pane_ParamLimits

0x54c3,	// (0x00061954) mup3_rocker_pane

0x59fe,	// (0x00061e8f) mup3_control_keys_pane_g1

0x5a06,	// (0x00061e97) mup3_control_keys_pane_g2

0x5a0e,	// (0x00061e9f) mup3_control_keys_pane_g3

0x5a16,	// (0x00061ea7) mup3_control_keys_pane_g4

0x0003,

0xf6b3,	// (0x0006bb44) mup3_control_keys_pane_g

0x102f,	// (0x0005d4c0) popup_toolbar2_fixed_window_cp01_ParamLimits

0x102f,	// (0x0005d4c0) popup_toolbar2_fixed_window_cp01

0x54dd,	// (0x0006196e) popup_toolbar2_fixed_window_cp02_ParamLimits

0x54dd,	// (0x0006196e) popup_toolbar2_fixed_window_cp02

0xbb8c,	// (0x0006801d) popup_call2_audio_second_window_t4_ParamLimits

0xbb8c,	// (0x0006801d) popup_call2_audio_second_window_t4

0xc0ba,	// (0x0006854b) popup_call2_audio_first_window_t6_ParamLimits

0xc0ba,	// (0x0006854b) popup_call2_audio_first_window_t6

0xc350,	// (0x000687e1) popup_call2_audio_out_window_t6_ParamLimits

0xc350,	// (0x000687e1) popup_call2_audio_out_window_t6

0x107b,	// (0x0005d50c) main_vitu_pane

0x5a26,	// (0x00061eb7) aid_size_cell_itu_ParamLimits

0x5a26,	// (0x00061eb7) aid_size_cell_itu

0xe9ad,	// (0x0006ae3e) bg_popup_window_pane_cp08_ParamLimits

0xe9ad,	// (0x0006ae3e) bg_popup_window_pane_cp08

0x5a34,	// (0x00061ec5) field_vitu_entry_pane_ParamLimits

0x5a34,	// (0x00061ec5) field_vitu_entry_pane

0x5a43,	// (0x00061ed4) grid_vitu_function_pane_ParamLimits

0x5a43,	// (0x00061ed4) grid_vitu_function_pane

0x5a53,	// (0x00061ee4) grid_vitu_itu_pane_ParamLimits

0x5a53,	// (0x00061ee4) grid_vitu_itu_pane

0x5a63,	// (0x00061ef4) cell_vitu_itu_pane_ParamLimits

0x5a63,	// (0x00061ef4) cell_vitu_itu_pane

0x5a78,	// (0x00061f09) cell_vitu_function_pane_ParamLimits

0x5a78,	// (0x00061f09) cell_vitu_function_pane

0xa708,	// (0x00066b99) bg_popup_sub_pane_cp08_ParamLimits

0xa708,	// (0x00066b99) bg_popup_sub_pane_cp08

0x5a8a,	// (0x00061f1b) field_vitu_entry_pane_t1_ParamLimits

0x5a8a,	// (0x00061f1b) field_vitu_entry_pane_t1

0xd255,	// (0x000696e6) field_vitu_entry_pane_t2_ParamLimits

0xd255,	// (0x000696e6) field_vitu_entry_pane_t2

0x0001,

0xf6bc,	// (0x0006bb4d) field_vitu_entry_pane_t_ParamLimits

0xf6bc,	// (0x0006bb4d) field_vitu_entry_pane_t

0xd272,	// (0x00069703) bg_button_pane_cp05_ParamLimits

0xd272,	// (0x00069703) bg_button_pane_cp05

0x5aa7,	// (0x00061f38) cell_vitu_itu_pane_g1

0x5abf,	// (0x00061f50) cell_vitu_itu_pane_t1_ParamLimits

0x5abf,	// (0x00061f50) cell_vitu_itu_pane_t1

0x5ad1,	// (0x00061f62) cell_vitu_itu_pane_t2_ParamLimits

0x5ad1,	// (0x00061f62) cell_vitu_itu_pane_t2

0x0002,

0xf6c1,	// (0x0006bb52) cell_vitu_itu_pane_t_ParamLimits

0xf6c1,	// (0x0006bb52) cell_vitu_itu_pane_t

0xd280,	// (0x00069711) bg_button_pane_cp07

0x5b06,	// (0x00061f97) cell_vitu_function_pane_g1

0x130a,	// (0x0005d79b) main_calc_pane_g1

0x0dec,	// (0x0005d27d) aid_visual_content_pane

0x107b,	// (0x0005d50c) main_vradio_pane

0x5b0f,	// (0x00061fa0) main_vradio_pane_g1_ParamLimits

0x5b0f,	// (0x00061fa0) main_vradio_pane_g1

0xd28a,	// (0x0006971b) main_vradio_pane_g2_ParamLimits

0xd28a,	// (0x0006971b) main_vradio_pane_g2

0x0001,

0xf6c8,	// (0x0006bb59) main_vradio_pane_g_ParamLimits

0xf6c8,	// (0x0006bb59) main_vradio_pane_g

0x5b1f,	// (0x00061fb0) main_vradio_pane_t1_ParamLimits

0x5b1f,	// (0x00061fb0) main_vradio_pane_t1

0x5b31,	// (0x00061fc2) main_vradio_pane_t2_ParamLimits

0x5b31,	// (0x00061fc2) main_vradio_pane_t2

0xd297,	// (0x00069728) main_vradio_pane_t3_ParamLimits

0xd297,	// (0x00069728) main_vradio_pane_t3

0x0002,

0xf6cd,	// (0x0006bb5e) main_vradio_pane_t_ParamLimits

0xf6cd,	// (0x0006bb5e) main_vradio_pane_t

0x5b43,	// (0x00061fd4) vradio_rocker_control_pane_ParamLimits

0x5b43,	// (0x00061fd4) vradio_rocker_control_pane

0x5b4f,	// (0x00061fe0) vradio_station_info_pane_ParamLimits

0x5b4f,	// (0x00061fe0) vradio_station_info_pane

0xd2ab,	// (0x0006973c) vradio_frequency_info_pane_ParamLimits

0xd2ab,	// (0x0006973c) vradio_frequency_info_pane

0xcc58,	// (0x000690e9) vradio_station_info_pane_g1

0xd2ba,	// (0x0006974b) vradio_station_info_pane_t1_ParamLimits

0xd2ba,	// (0x0006974b) vradio_station_info_pane_t1

0xd2dc,	// (0x0006976d) vradio_station_info_pane_t2_ParamLimits

0xd2dc,	// (0x0006976d) vradio_station_info_pane_t2

0x0001,

0x05d6,	// (0x0005ca67) vradio_station_info_pane_t_ParamLimits

0x05d6,	// (0x0005ca67) vradio_station_info_pane_t

0xd2ee,	// (0x0006977f) vradio_tuning_pane

0xd2f6,	// (0x00069787) vradio_rocker_control_pane_g1

0xd2fe,	// (0x0006978f) vradio_rocker_control_pane_g2

0xd306,	// (0x00069797) vradio_rocker_control_pane_g3

0xd30e,	// (0x0006979f) vradio_rocker_control_pane_g4

0xd316,	// (0x000697a7) vradio_rocker_control_pane_g5

0x0004,

0x05db,	// (0x0005ca6c) vradio_rocker_control_pane_g

0x5b5e,	// (0x00061fef) vradio_frequency_info_pane_g1

0xd31e,	// (0x000697af) vradio_frequency_info_pane_t1_ParamLimits

0xd31e,	// (0x000697af) vradio_frequency_info_pane_t1

0x5b68,	// (0x00061ff9) vradio_tuning_pane_g1

0x5b71,	// (0x00062002) vradio_tuning_pane_t1

0x0e35,	// (0x0005d2c6) area_side_right_pane_ParamLimits

0x0e35,	// (0x0005d2c6) area_side_right_pane

0xc80b,	// (0x00068c9c) status_small_pane_g1

0xc813,	// (0x00068ca4) status_small_pane_g2

0xc81c,	// (0x00068cad) status_small_pane_g3

0xc825,	// (0x00068cb6) status_small_pane_g4

0x0003,

0x0396,	// (0x0005c827) status_small_pane_g

0xc82e,	// (0x00068cbf) status_small_pane_t1

0x107b,	// (0x0005d50c) main_video3_pane

0xd332,	// (0x000697c3) cams_zoom_vslider_pane

0xd33a,	// (0x000697cb) image3_wide_pane_ParamLimits

0xd33a,	// (0x000697cb) image3_wide_pane

0xd354,	// (0x000697e5) image3_wide_small_pane

0xd360,	// (0x000697f1) main_video3_pane_g1_ParamLimits

0xd360,	// (0x000697f1) main_video3_pane_g1

0xd37c,	// (0x0006980d) main_video3_pane_g2_ParamLimits

0xd37c,	// (0x0006980d) main_video3_pane_g2

0x0001,

0x05e6,	// (0x0005ca77) main_video3_pane_g_ParamLimits

0x05e6,	// (0x0005ca77) main_video3_pane_g

0xd398,	// (0x00069829) main_video3_pane_t1_ParamLimits

0xd398,	// (0x00069829) main_video3_pane_t1

0xd3c3,	// (0x00069854) main_video3_pane_t2_ParamLimits

0xd3c3,	// (0x00069854) main_video3_pane_t2

0xd3ee,	// (0x0006987f) main_video3_pane_t3_ParamLimits

0xd3ee,	// (0x0006987f) main_video3_pane_t3

0x0002,

0x05eb,	// (0x0005ca7c) main_video3_pane_t_ParamLimits

0x05eb,	// (0x0005ca7c) main_video3_pane_t

0xd41b,	// (0x000698ac) cams_zoom_vslider_pane_g1

0xd424,	// (0x000698b5) cams_zoom_vslider_pane_g2

0x0001,

0x05f2,	// (0x0005ca83) cams_zoom_vslider_pane_g

0xd42c,	// (0x000698bd) small_slider_vertical_pane

0xcc58,	// (0x000690e9) small_slider_vertical_pane_g1

0xcc58,	// (0x000690e9) small_slider_vertical_pane_g2

0xd434,	// (0x000698c5) small_slider_vertical_pane_g3

0x0002,

0x05f7,	// (0x0005ca88) small_slider_vertical_pane_g

0x107b,	// (0x0005d50c) main_hwr_training_pane

0xd43d,	// (0x000698ce) hwr_training_instruct_pane_ParamLimits

0xd43d,	// (0x000698ce) hwr_training_instruct_pane

0x5b80,	// (0x00062011) hwr_training_navi_pane_ParamLimits

0x5b80,	// (0x00062011) hwr_training_navi_pane

0x5b9a,	// (0x0006202b) hwr_training_write_pane_ParamLimits

0x5b9a,	// (0x0006202b) hwr_training_write_pane

0x9acd,	// (0x00065f5e) bg_frame_shadow_pane

0xd474,	// (0x00069905) hwr_training_write_pane_g1

0xd47c,	// (0x0006990d) hwr_training_write_pane_g2

0xd484,	// (0x00069915) hwr_training_write_pane_g3

0xd48c,	// (0x0006991d) hwr_training_write_pane_g4

0xd494,	// (0x00069925) hwr_training_write_pane_g5

0xd49c,	// (0x0006992d) hwr_training_write_pane_g6

0xd4a4,	// (0x00069935) hwr_training_write_pane_g7

0x0006,

0x05fe,	// (0x0005ca8f) hwr_training_write_pane_g

0x5bd2,	// (0x00062063) hwr_training_navi_pane_g1_ParamLimits

0x5bd2,	// (0x00062063) hwr_training_navi_pane_g1

0x5be4,	// (0x00062075) hwr_training_navi_pane_g2_ParamLimits

0x5be4,	// (0x00062075) hwr_training_navi_pane_g2

0x5bf6,	// (0x00062087) hwr_training_navi_pane_g3_ParamLimits

0x5bf6,	// (0x00062087) hwr_training_navi_pane_g3

0x5c06,	// (0x00062097) hwr_training_navi_pane_g4_ParamLimits

0x5c06,	// (0x00062097) hwr_training_navi_pane_g4

0x0004,

0xf6d4,	// (0x0006bb65) hwr_training_navi_pane_g_ParamLimits

0xf6d4,	// (0x0006bb65) hwr_training_navi_pane_g

0x5c20,	// (0x000620b1) hwr_training_navi_pane_t1

0x5c2e,	// (0x000620bf) list_single_hwr_training_instruct_pane_ParamLimits

0x5c2e,	// (0x000620bf) list_single_hwr_training_instruct_pane

0xd4ac,	// (0x0006993d) list_single_hwr_training_instruct_pane_t1

0xcb98,	// (0x00069029) bg_frame_shadow_pane_g1

0xd4bb,	// (0x0006994c) bg_frame_shadow_pane_g2

0xd4c3,	// (0x00069954) bg_frame_shadow_pane_g3

0xd4cb,	// (0x0006995c) bg_frame_shadow_pane_g4

0xd4d3,	// (0x00069964) bg_frame_shadow_pane_g5

0xd4db,	// (0x0006996c) bg_frame_shadow_pane_g6

0xd4e3,	// (0x00069974) bg_frame_shadow_pane_g7

0xa89a,	// (0x00066d2b) bg_frame_shadow_pane_g8

0x0007,

0xf6df,	// (0x0006bb70) bg_frame_shadow_pane_g

0x107b,	// (0x0005d50c) main_video_tele_dialer_pane

0x5c57,	// (0x000620e8) aid_size_cell_video_keypad_ParamLimits

0x5c57,	// (0x000620e8) aid_size_cell_video_keypad

0x5c67,	// (0x000620f8) grid_video_dialer_keypad_pane_ParamLimits

0x5c67,	// (0x000620f8) grid_video_dialer_keypad_pane

0x5c9b,	// (0x0006212c) video_down_pane_cp_ParamLimits

0x5c9b,	// (0x0006212c) video_down_pane_cp

0x5cc5,	// (0x00062156) cell_video_dialer_keypad_pane_ParamLimits

0x5cc5,	// (0x00062156) cell_video_dialer_keypad_pane

0xd4eb,	// (0x0006997c) bg_button_pane_cp08_ParamLimits

0xd4eb,	// (0x0006997c) bg_button_pane_cp08

0x5cda,	// (0x0006216b) cell_video_dialer_keypad_pane_g1_ParamLimits

0x5cda,	// (0x0006216b) cell_video_dialer_keypad_pane_g1

0x54b7,	// (0x00061948) mup3_rocker2_pane_ParamLimits

0x54b7,	// (0x00061948) mup3_rocker2_pane

0xcc58,	// (0x000690e9) mup3_rocker2_pane_g1

0x43e0,	// (0x00060871) main_dialer2_pane

0x107b,	// (0x0005d50c) main_mp4_pane

0x5d1c,	// (0x000621ad) main_mp4_pane_g1_ParamLimits

0x5d1c,	// (0x000621ad) main_mp4_pane_g1

0x5d2a,	// (0x000621bb) main_mp4_pane_g2_ParamLimits

0x5d2a,	// (0x000621bb) main_mp4_pane_g2

0x5d38,	// (0x000621c9) main_mp4_pane_g3_ParamLimits

0x5d38,	// (0x000621c9) main_mp4_pane_g3

0x5d7d,	// (0x0006220e) main_mp4_pane_g4_ParamLimits

0x5d7d,	// (0x0006220e) main_mp4_pane_g4

0x5da5,	// (0x00062236) main_mp4_pane_g5_ParamLimits

0x5da5,	// (0x00062236) main_mp4_pane_g5

0x0005,

0xf6ff,	// (0x0006bb90) main_mp4_pane_g_ParamLimits

0xf6ff,	// (0x0006bb90) main_mp4_pane_g

0x5df5,	// (0x00062286) main_mp4_pane_t1_ParamLimits

0x5df5,	// (0x00062286) main_mp4_pane_t1

0x5e51,	// (0x000622e2) main_mp4_pane_t2_ParamLimits

0x5e51,	// (0x000622e2) main_mp4_pane_t2

0xd4f7,	// (0x00069988) main_mp4_pane_t3_ParamLimits

0xd4f7,	// (0x00069988) main_mp4_pane_t3

0x5ea3,	// (0x00062334) main_mp4_pane_t4_ParamLimits

0x5ea3,	// (0x00062334) main_mp4_pane_t4

0x0003,

0xf70c,	// (0x0006bb9d) main_mp4_pane_t_ParamLimits

0xf70c,	// (0x0006bb9d) main_mp4_pane_t

0x5ee7,	// (0x00062378) mp4_progress_pane_ParamLimits

0x5ee7,	// (0x00062378) mp4_progress_pane

0x5f31,	// (0x000623c2) mp4_rocker_pane_ParamLimits

0x5f31,	// (0x000623c2) mp4_rocker_pane

0xd51f,	// (0x000699b0) mp4_progress_pane_t1

0xd538,	// (0x000699c9) mp4_progress_pane_t2

0x0001,

0x064e,	// (0x0005cadf) mp4_progress_pane_t

0xd551,	// (0x000699e2) mup_progress_pane_cp04

0xdbf5,	// (0x0006a086) mp4_rocker_pane_g1

0x5f51,	// (0x000623e2) aid_cell_size_keypad2_ParamLimits

0x5f51,	// (0x000623e2) aid_cell_size_keypad2

0x5f61,	// (0x000623f2) dialer2_ne_pane_ParamLimits

0x5f61,	// (0x000623f2) dialer2_ne_pane

0x5f6f,	// (0x00062400) grid_dialer2_keypad_pane_ParamLimits

0x5f6f,	// (0x00062400) grid_dialer2_keypad_pane

0xdbff,	// (0x0006a090) bg_popup_call_pane_cp07_ParamLimits

0xdbff,	// (0x0006a090) bg_popup_call_pane_cp07

0x5f7f,	// (0x00062410) dialer2_ne_pane_t1_ParamLimits

0x5f7f,	// (0x00062410) dialer2_ne_pane_t1

0x5fa4,	// (0x00062435) cell_dialer2_keypad_pane_ParamLimits

0x5fa4,	// (0x00062435) cell_dialer2_keypad_pane

0xd56f,	// (0x00069a00) bg_button_pane_pane_cp04_ParamLimits

0xd56f,	// (0x00069a00) bg_button_pane_pane_cp04

0x5fb9,	// (0x0006244a) cell_dialer2_keypad_pane_g1_ParamLimits

0x5fb9,	// (0x0006244a) cell_dialer2_keypad_pane_g1

0x1fa3,	// (0x0005e434) aid_placing_vt_set_content_ParamLimits

0x1fa3,	// (0x0005e434) aid_placing_vt_set_content

0x1fcf,	// (0x0005e460) aid_placing_vt_set_title_ParamLimits

0x1fcf,	// (0x0005e460) aid_placing_vt_set_title

0x107b,	// (0x0005d50c) main_image3_pane

0x6053,	// (0x000624e4) area_side_right_pane_cp01_ParamLimits

0x6053,	// (0x000624e4) area_side_right_pane_cp01

0x6080,	// (0x00062511) main_image3_pane_g1_ParamLimits

0x6080,	// (0x00062511) main_image3_pane_g1

0x608e,	// (0x0006251f) main_image3_pane_g2_ParamLimits

0x608e,	// (0x0006251f) main_image3_pane_g2

0x60a7,	// (0x00062538) main_image3_pane_g3_ParamLimits

0x60a7,	// (0x00062538) main_image3_pane_g3

0x60c0,	// (0x00062551) main_image3_pane_g4_ParamLimits

0x60c0,	// (0x00062551) main_image3_pane_g4

0x0003,

0xf71f,	// (0x0006bbb0) main_image3_pane_g_ParamLimits

0xf71f,	// (0x0006bbb0) main_image3_pane_g

0x60d9,	// (0x0006256a) main_image3_pane_t1_ParamLimits

0x60d9,	// (0x0006256a) main_image3_pane_t1

0x60fe,	// (0x0006258f) main_image3_pane_t2_ParamLimits

0x60fe,	// (0x0006258f) main_image3_pane_t2

0x611d,	// (0x000625ae) main_image3_pane_t3_ParamLimits

0x611d,	// (0x000625ae) main_image3_pane_t3

0x0003,

0xf728,	// (0x0006bbb9) main_image3_pane_t_ParamLimits

0xf728,	// (0x0006bbb9) main_image3_pane_t

0xe9ad,	// (0x0006ae3e) grid_sctrl_middle_pane_cp01_ParamLimits

0xe9ad,	// (0x0006ae3e) grid_sctrl_middle_pane_cp01

0x617e,	// (0x0006260f) cell_sctrl_middle_pane_cp01_ParamLimits

0x617e,	// (0x0006260f) cell_sctrl_middle_pane_cp01

0x618f,	// (0x00062620) cell_sctrl_middle_pane_cp01_g1_ParamLimits

0x618f,	// (0x00062620) cell_sctrl_middle_pane_cp01_g1

0x107b,	// (0x0005d50c) main_call4_pane

0x619c,	// (0x0006262d) aid_size_button_call4_ParamLimits

0x619c,	// (0x0006262d) aid_size_button_call4

0x61cc,	// (0x0006265d) call4_windows_pane_ParamLimits

0x61cc,	// (0x0006265d) call4_windows_pane

0x61e6,	// (0x00062677) grid_call4_button_pane_ParamLimits

0x61e6,	// (0x00062677) grid_call4_button_pane

0xd57b,	// (0x00069a0c) call4_windows_conf_pane

0xd592,	// (0x00069a23) popup_call4_audio_first_window_ParamLimits

0xd592,	// (0x00069a23) popup_call4_audio_first_window

0xd5de,	// (0x00069a6f) popup_call4_audio_second_window_ParamLimits

0xd5de,	// (0x00069a6f) popup_call4_audio_second_window

0xd5f2,	// (0x00069a83) popup_call4_audio_wait_window_ParamLimits

0xd5f2,	// (0x00069a83) popup_call4_audio_wait_window

0x620a,	// (0x0006269b) cell_call4_button_pane_ParamLimits

0x620a,	// (0x0006269b) cell_call4_button_pane

0x622f,	// (0x000626c0) bg_button_pane_cp09_ParamLimits

0x622f,	// (0x000626c0) bg_button_pane_cp09

0x623b,	// (0x000626cc) cell_call4_button_pane_g1_ParamLimits

0x623b,	// (0x000626cc) cell_call4_button_pane_g1

0x6248,	// (0x000626d9) cell_call4_button_pane_t1_ParamLimits

0x6248,	// (0x000626d9) cell_call4_button_pane_t1

0xd63a,	// (0x00069acb) popup_call4_audio_conf_window_ParamLimits

0xd63a,	// (0x00069acb) popup_call4_audio_conf_window

0x54ea,	// (0x0006197b) mup3_progress_pane_t1_ParamLimits

0x5509,	// (0x0006199a) mup3_progress_pane_t2_ParamLimits

0xcf21,	// (0x000693b2) mup3_progress_pane_t3_ParamLimits

0xf65d,	// (0x0006baee) mup3_progress_pane_t_ParamLimits

0xcf3e,	// (0x000693cf) mup_progress_pane_cp03_ParamLimits

0x5a1e,	// (0x00061eaf) mup3_control_keys_pane_g4_copy1

0x5f15,	// (0x000623a6) mp4_rocker2_pane_ParamLimits

0x5f15,	// (0x000623a6) mp4_rocker2_pane

0xd64e,	// (0x00069adf) mp4_rocker2_pane_g1

0xd656,	// (0x00069ae7) mp4_rocker2_pane_g2

0x625a,	// (0x000626eb) mp4_rocker2_pane_g3

0x6262,	// (0x000626f3) mp4_rocker2_pane_g4

0x626a,	// (0x000626fb) mp4_rocker2_pane_g5

0x0004,

0xf731,	// (0x0006bbc2) mp4_rocker2_pane_g

0x107b,	// (0x0005d50c) main_camera4_pane

0x107b,	// (0x0005d50c) main_video4_pane

0x5c77,	// (0x00062108) main_video_tele_dialer_pane_t1_ParamLimits

0x5c77,	// (0x00062108) main_video_tele_dialer_pane_t1

0x5c89,	// (0x0006211a) main_video_tele_dialer_pane_t2_ParamLimits

0x5c89,	// (0x0006211a) main_video_tele_dialer_pane_t2

0x0001,

0xf6f0,	// (0x0006bb81) main_video_tele_dialer_pane_t_ParamLimits

0xf6f0,	// (0x0006bb81) main_video_tele_dialer_pane_t

0x628a,	// (0x0006271b) cam4_autofocus_pane_ParamLimits

0x628a,	// (0x0006271b) cam4_autofocus_pane

0x62a4,	// (0x00062735) cam4_image_uncrop_pane_ParamLimits

0x62a4,	// (0x00062735) cam4_image_uncrop_pane

0x62bb,	// (0x0006274c) cam4_indicators_pane_ParamLimits

0x62bb,	// (0x0006274c) cam4_indicators_pane

0x62d7,	// (0x00062768) main_camera4_pane_g1_ParamLimits

0x62d7,	// (0x00062768) main_camera4_pane_g1

0x62e3,	// (0x00062774) main_camera4_pane_g2_ParamLimits

0x62e3,	// (0x00062774) main_camera4_pane_g2

0x62e3,	// (0x00062774) main_camera4_pane_g3_ParamLimits

0x62e3,	// (0x00062774) main_camera4_pane_g3

0x62ef,	// (0x00062780) main_camera4_pane_g4_ParamLimits

0x62ef,	// (0x00062780) main_camera4_pane_g4

0x62fb,	// (0x0006278c) main_camera4_pane_g5_ParamLimits

0x62fb,	// (0x0006278c) main_camera4_pane_g5

0x0005,

0xf73c,	// (0x0006bbcd) main_camera4_pane_g_ParamLimits

0xf73c,	// (0x0006bbcd) main_camera4_pane_g

0x6315,	// (0x000627a6) main_camera4_pane_t1_ParamLimits

0x6315,	// (0x000627a6) main_camera4_pane_t1

0x635d,	// (0x000627ee) bg_tb_trans_pane_cp06

0x6373,	// (0x00062804) cam4_indicators_pane_g1

0x6384,	// (0x00062815) cam4_indicators_pane_g2

0x0002,

0xf757,	// (0x0006bbe8) cam4_indicators_pane_g

0x639c,	// (0x0006282d) cam4_indicators_pane_t1

0x63c6,	// (0x00062857) main_video4_pane_g1_ParamLimits

0x63c6,	// (0x00062857) main_video4_pane_g1

0x63d2,	// (0x00062863) main_video4_pane_g2_ParamLimits

0x63d2,	// (0x00062863) main_video4_pane_g2

0x63de,	// (0x0006286f) main_video4_pane_g3_ParamLimits

0x63de,	// (0x0006286f) main_video4_pane_g3

0x63ea,	// (0x0006287b) main_video4_pane_g4_ParamLimits

0x63ea,	// (0x0006287b) main_video4_pane_g4

0x0004,

0xf75e,	// (0x0006bbef) main_video4_pane_g_ParamLimits

0xf75e,	// (0x0006bbef) main_video4_pane_g

0x640a,	// (0x0006289b) vid4_indicators_pane_ParamLimits

0x640a,	// (0x0006289b) vid4_indicators_pane

0x6429,	// (0x000628ba) video4_image_uncrop_cif_pane_ParamLimits

0x6429,	// (0x000628ba) video4_image_uncrop_cif_pane

0x6438,	// (0x000628c9) video4_image_uncrop_nhd_pane_ParamLimits

0x6438,	// (0x000628c9) video4_image_uncrop_nhd_pane

0x62a4,	// (0x00062735) video4_image_uncrop_vga_pane_ParamLimits

0x62a4,	// (0x00062735) video4_image_uncrop_vga_pane

0x43d2,	// (0x00060863) bg_tb_trans_pane_cp07

0x644d,	// (0x000628de) vid4_indicators_pane_g1

0x6461,	// (0x000628f2) vid4_indicators_pane_g2

0x6475,	// (0x00062906) vid4_indicators_pane_g3

0x0004,

0xf769,	// (0x0006bbfa) vid4_indicators_pane_g

0x64a2,	// (0x00062933) vid4_indicators_pane_t1

0x64b9,	// (0x0006294a) cam4_autofocus_pane_g1

0x64c1,	// (0x00062952) cam4_autofocus_pane_g2

0x64c9,	// (0x0006295a) cam4_autofocus_pane_g3

0x0002,

0xf774,	// (0x0006bc05) cam4_autofocus_pane_g

0x64d1,	// (0x00062962) cam4_autofocus_pane_g3_copy1

0x5ca9,	// (0x0006213a) video_down_pane_cp_t1

0x5cb7,	// (0x00062148) video_down_pane_cp_t2

0x0001,

0xf6f5,	// (0x0006bb86) video_down_pane_cp_t

0x1061,	// (0x0005d4f2) popup_vitu2_window_ParamLimits

0x1061,	// (0x0005d4f2) popup_vitu2_window

0x64d9,	// (0x0006296a) aid_size_cell2_itu2_ParamLimits

0x64d9,	// (0x0006296a) aid_size_cell2_itu2

0x64fb,	// (0x0006298c) aid_size_cell_itu2_ParamLimits

0x64fb,	// (0x0006298c) aid_size_cell_itu2

0x653f,	// (0x000629d0) bg_popup_window_pane_cp09_ParamLimits

0x653f,	// (0x000629d0) bg_popup_window_pane_cp09

0x654d,	// (0x000629de) field_vitu2_entry_pane_ParamLimits

0x654d,	// (0x000629de) field_vitu2_entry_pane

0x656d,	// (0x000629fe) grid_vitu2_function_pane_ParamLimits

0x656d,	// (0x000629fe) grid_vitu2_function_pane

0x65b1,	// (0x00062a42) grid_vitu2_itu_pane_ParamLimits

0x65b1,	// (0x00062a42) grid_vitu2_itu_pane

0x662b,	// (0x00062abc) cell_vitu2_itu_pane_ParamLimits

0x662b,	// (0x00062abc) cell_vitu2_itu_pane

0x6644,	// (0x00062ad5) cell_vitu2_function_pane_ParamLimits

0x6644,	// (0x00062ad5) cell_vitu2_function_pane

0xd65e,	// (0x00069aef) bg_popup_call_pane_cp08_ParamLimits

0xd65e,	// (0x00069aef) bg_popup_call_pane_cp08

0xd675,	// (0x00069b06) field_vitu2_entry_pane_g1

0xd681,	// (0x00069b12) field_vitu2_entry_pane_g2

0x0002,

0x06b9,	// (0x0005cb4a) field_vitu2_entry_pane_g

0x6685,	// (0x00062b16) field_vitu2_entry_pane_t1_ParamLimits

0x6685,	// (0x00062b16) field_vitu2_entry_pane_t1

0xa07b,	// (0x0006650c) field_vitu2_entry_pane_t2_ParamLimits

0xa07b,	// (0x0006650c) field_vitu2_entry_pane_t2

0x0001,

0xf77b,	// (0x0006bc0c) field_vitu2_entry_pane_t_ParamLimits

0xf77b,	// (0x0006bc0c) field_vitu2_entry_pane_t

0x66b7,	// (0x00062b48) bg_button_pane_cp010_ParamLimits

0x66b7,	// (0x00062b48) bg_button_pane_cp010

0x66c5,	// (0x00062b56) cell_vitu2_itu_pane_g1

0x66e5,	// (0x00062b76) cell_vitu2_itu_pane_t1_ParamLimits

0x66e5,	// (0x00062b76) cell_vitu2_itu_pane_t1

0x0cd0,	// (0x0005d161) cell_vitu2_itu_pane_t2_ParamLimits

0x0cd0,	// (0x0005d161) cell_vitu2_itu_pane_t2

0x0002,

0xf785,	// (0x0006bc16) cell_vitu2_itu_pane_t_ParamLimits

0xf785,	// (0x0006bc16) cell_vitu2_itu_pane_t

0x43d2,	// (0x00060863) bg_button_pane_cp011

0x6731,	// (0x00062bc2) cell_vitu2_function_pane_g1

0x107b,	// (0x0005d50c) main_myfav_hc_pane

0x615f,	// (0x000625f0) popup_image3_note_pane_ParamLimits

0x615f,	// (0x000625f0) popup_image3_note_pane

0x616d,	// (0x000625fe) popup_image3_tool_bar_pane_ParamLimits

0x616d,	// (0x000625fe) popup_image3_tool_bar_pane

0x0d46,	// (0x0005d1d7) cell_vitu2_itu_pane_t3_ParamLimits

0x0d46,	// (0x0005d1d7) cell_vitu2_itu_pane_t3

0x9acd,	// (0x00065f5e) bg_popup_trans_pane

0xd6a3,	// (0x00069b34) grid_image3_tool_bar_pane

0xd6ad,	// (0x00069b3e) bg_popup_trans_pane_g1

0xac1d,	// (0x000670ae) bg_popup_trans_pane_g2

0xd6b5,	// (0x00069b46) bg_popup_trans_pane_g3

0xd6bd,	// (0x00069b4e) bg_popup_trans_pane_g4

0xd6c5,	// (0x00069b56) bg_popup_trans_pane_g5

0xd6cd,	// (0x00069b5e) bg_popup_trans_pane_g6

0xd6d5,	// (0x00069b66) bg_popup_trans_pane_g7

0xd6dd,	// (0x00069b6e) bg_popup_trans_pane_g8

0xabfd,	// (0x0006708e) bg_popup_trans_pane_g9

0x0008,

0xf78c,	// (0x0006bc1d) bg_popup_trans_pane_g

0xd6e5,	// (0x00069b76) cell_image3_tool_bar_pane_ParamLimits

0xd6e5,	// (0x00069b76) cell_image3_tool_bar_pane

0xcc58,	// (0x000690e9) cell_image3_tool_bar_pane_g1

0x9acd,	// (0x00065f5e) bg_popup_trans_pane_cp1

0xd6f9,	// (0x00069b8a) popup_image3_note_pane_t1

0xd707,	// (0x00069b98) popup_image3_note_pane_t2

0xd715,	// (0x00069ba6) popup_image3_note_pane_t3

0x0002,

0x06e4,	// (0x0005cb75) popup_image3_note_pane_t

0xd723,	// (0x00069bb4) popup_image3_note_pane_t3_copy1

0x6745,	// (0x00062bd6) bg_myfav_hc_instruction_pane_ParamLimits

0x6745,	// (0x00062bd6) bg_myfav_hc_instruction_pane

0x675d,	// (0x00062bee) cell_myfav_contact_pane_ParamLimits

0x675d,	// (0x00062bee) cell_myfav_contact_pane

0x6777,	// (0x00062c08) cell_myfav_contact_pane_cp1_ParamLimits

0x6777,	// (0x00062c08) cell_myfav_contact_pane_cp1

0x678f,	// (0x00062c20) cell_myfav_contact_pane_cp2_ParamLimits

0x678f,	// (0x00062c20) cell_myfav_contact_pane_cp2

0x67a7,	// (0x00062c38) cell_myfav_contact_pane_cp3_ParamLimits

0x67a7,	// (0x00062c38) cell_myfav_contact_pane_cp3

0x67be,	// (0x00062c4f) cell_myfav_contact_pane_cp4_ParamLimits

0x67be,	// (0x00062c4f) cell_myfav_contact_pane_cp4

0x67d4,	// (0x00062c65) cell_myfav_contact_pane_cp5_ParamLimits

0x67d4,	// (0x00062c65) cell_myfav_contact_pane_cp5

0x67e8,	// (0x00062c79) cell_myfav_contact_pane_cp6_ParamLimits

0x67e8,	// (0x00062c79) cell_myfav_contact_pane_cp6

0x67fc,	// (0x00062c8d) cell_myfav_contact_pane_cp7_ParamLimits

0x67fc,	// (0x00062c8d) cell_myfav_contact_pane_cp7

0xd731,	// (0x00069bc2) listscroll_gen_pane_cp05

0x6814,	// (0x00062ca5) main_myfav_hc_pane_g1_ParamLimits

0x6814,	// (0x00062ca5) main_myfav_hc_pane_g1

0x682a,	// (0x00062cbb) main_myfav_hc_pane_g2_ParamLimits

0x682a,	// (0x00062cbb) main_myfav_hc_pane_g2

0x0002,

0xf79f,	// (0x0006bc30) main_myfav_hc_pane_g_ParamLimits

0xf79f,	// (0x0006bc30) main_myfav_hc_pane_g

0x685a,	// (0x00062ceb) main_myfav_hc_pane_t1_ParamLimits

0x685a,	// (0x00062ceb) main_myfav_hc_pane_t1

0xd73a,	// (0x00069bcb) main_myfav_hc_pane_t2_ParamLimits

0xd73a,	// (0x00069bcb) main_myfav_hc_pane_t2

0xd74c,	// (0x00069bdd) main_myfav_hc_pane_t3_ParamLimits

0xd74c,	// (0x00069bdd) main_myfav_hc_pane_t3

0x6871,	// (0x00062d02) main_myfav_hc_pane_t4_ParamLimits

0x6871,	// (0x00062d02) main_myfav_hc_pane_t4

0x0004,

0xf7a6,	// (0x0006bc37) main_myfav_hc_pane_t_ParamLimits

0xf7a6,	// (0x0006bc37) main_myfav_hc_pane_t

0xcc58,	// (0x000690e9) bg_myfav_hc_instruction_pane_g1

0xd75e,	// (0x00069bef) cell_myfav_contact_pane_g1_ParamLimits

0xd75e,	// (0x00069bef) cell_myfav_contact_pane_g1

0xd75e,	// (0x00069bef) cell_myfav_contact_pane_g2_ParamLimits

0xd75e,	// (0x00069bef) cell_myfav_contact_pane_g2

0xd76a,	// (0x00069bfb) cell_myfav_contact_pane_g3_ParamLimits

0xd76a,	// (0x00069bfb) cell_myfav_contact_pane_g3

0xcf0b,	// (0x0006939c) cell_myfav_contact_pane_g4_ParamLimits

0xcf0b,	// (0x0006939c) cell_myfav_contact_pane_g4

0xd777,	// (0x00069c08) cell_myfav_contact_pane_g5_ParamLimits

0xd777,	// (0x00069c08) cell_myfav_contact_pane_g5

0x0004,

0x06fd,	// (0x0005cb8e) cell_myfav_contact_pane_g_ParamLimits

0x06fd,	// (0x0005cb8e) cell_myfav_contact_pane_g

0x6842,	// (0x00062cd3) main_myfav_hc_pane_g3_ParamLimits

0x6842,	// (0x00062cd3) main_myfav_hc_pane_g3

0x0f6a,	// (0x0005d3fb) popup_adpt_find_window

0x689b,	// (0x00062d2c) afind_page_pane_ParamLimits

0x689b,	// (0x00062d2c) afind_page_pane

0x68a8,	// (0x00062d39) aid_size_cell_afind_ParamLimits

0x68a8,	// (0x00062d39) aid_size_cell_afind

0x68c2,	// (0x00062d53) bg_popup_sub_pane_cp09_ParamLimits

0x68c2,	// (0x00062d53) bg_popup_sub_pane_cp09

0x68cf,	// (0x00062d60) find_pane_cp01_ParamLimits

0x68cf,	// (0x00062d60) find_pane_cp01

0xd783,	// (0x00069c14) grid_afind_control_pane_ParamLimits

0xd783,	// (0x00069c14) grid_afind_control_pane

0x68dc,	// (0x00062d6d) grid_afind_pane_ParamLimits

0x68dc,	// (0x00062d6d) grid_afind_pane

0x68f6,	// (0x00062d87) cell_afind_pane_ParamLimits

0x68f6,	// (0x00062d87) cell_afind_pane

0xcc58,	// (0x000690e9) afind_page_pane_g1

0x693e,	// (0x00062dcf) afind_page_pane_g2

0x6947,	// (0x00062dd8) afind_page_pane_g3

0x0002,

0xf7b1,	// (0x0006bc42) afind_page_pane_g

0x6950,	// (0x00062de1) afind_page_pane_t1

0xd797,	// (0x00069c28) cell_afind_grid_control_pane_ParamLimits

0xd797,	// (0x00069c28) cell_afind_grid_control_pane

0xd56f,	// (0x00069a00) bg_button_pane_cp69_ParamLimits

0xd56f,	// (0x00069a00) bg_button_pane_cp69

0x6970,	// (0x00062e01) cell_afind_pane_g1_ParamLimits

0x6970,	// (0x00062e01) cell_afind_pane_g1

0x697d,	// (0x00062e0e) cell_afind_pane_t1_ParamLimits

0x697d,	// (0x00062e0e) cell_afind_pane_t1

0xaa16,	// (0x00066ea7) bg_button_pane_cp72

0xd7a6,	// (0x00069c37) cell_afind_grid_control_pane_g1

0x3f4a,	// (0x000603db) aid_image_placing_area_ParamLimits

0x3f4a,	// (0x000603db) aid_image_placing_area

0xd23d,	// (0x000696ce) field_vitu_entry_pane_g1_ParamLimits

0xd23d,	// (0x000696ce) field_vitu_entry_pane_g1

0xd249,	// (0x000696da) field_vitu_entry_pane_g2_ParamLimits

0xd249,	// (0x000696da) field_vitu_entry_pane_g2

0x0001,

0x05b9,	// (0x0005ca4a) field_vitu_entry_pane_g_ParamLimits

0x05b9,	// (0x0005ca4a) field_vitu_entry_pane_g

0x5aa7,	// (0x00061f38) cell_vitu_itu_pane_g1_ParamLimits

0x5ae9,	// (0x00061f7a) cell_vitu_itu_pane_t3_ParamLimits

0x5ae9,	// (0x00061f7a) cell_vitu_itu_pane_t3

0xd51f,	// (0x000699b0) mp4_progress_pane_t1_ParamLimits

0xd538,	// (0x000699c9) mp4_progress_pane_t2_ParamLimits

0x064e,	// (0x0005cadf) mp4_progress_pane_t_ParamLimits

0xd551,	// (0x000699e2) mup_progress_pane_cp04_ParamLimits

0x6885,	// (0x00062d16) main_myfav_hc_pane_t5_ParamLimits

0x6885,	// (0x00062d16) main_myfav_hc_pane_t5

0x0df8,	// (0x0005d289) aid_zoom_text_primary

0x0f6a,	// (0x0005d3fb) popup_adpt_find_window_ParamLimits

0x43d2,	// (0x00060863) main_cam_set_pane

0x62c9,	// (0x0006275a) cam4_zoom_pane_ParamLimits

0x62c9,	// (0x0006275a) cam4_zoom_pane

0x698f,	// (0x00062e20) main_cam_set_pane_g1_ParamLimits

0x698f,	// (0x00062e20) main_cam_set_pane_g1

0x699d,	// (0x00062e2e) main_cam_set_pane_g2_ParamLimits

0x699d,	// (0x00062e2e) main_cam_set_pane_g2

0x0001,

0xf7b8,	// (0x0006bc49) main_cam_set_pane_g_ParamLimits

0xf7b8,	// (0x0006bc49) main_cam_set_pane_g

0x69a9,	// (0x00062e3a) main_cam_set_pane_t1_ParamLimits

0x69a9,	// (0x00062e3a) main_cam_set_pane_t1

0x69c5,	// (0x00062e56) main_cset_listscroll_pane_ParamLimits

0x69c5,	// (0x00062e56) main_cset_listscroll_pane

0x69f0,	// (0x00062e81) main_cset_slider_pane_ParamLimits

0x69f0,	// (0x00062e81) main_cset_slider_pane

0xd7b7,	// (0x00069c48) main_cset_list_pane_ParamLimits

0xd7b7,	// (0x00069c48) main_cset_list_pane

0xd7c7,	// (0x00069c58) scroll_pane_cp028

0x6a0f,	// (0x00062ea0) aid_area_touch_slider

0x6a2b,	// (0x00062ebc) cset_slider_pane

0x6a55,	// (0x00062ee6) main_cset_slider_pane_g1

0x6a6a,	// (0x00062efb) main_cset_slider_pane_g2

0x0011,

0xf7bd,	// (0x0006bc4e) main_cset_slider_pane_g

0xd800,	// (0x00069c91) main_cset_slider_pane_t1

0x6b30,	// (0x00062fc1) main_cset_slider_pane_t2

0x6b4a,	// (0x00062fdb) main_cset_slider_pane_t3

0x6b64,	// (0x00062ff5) main_cset_slider_pane_t4

0x6b82,	// (0x00063013) main_cset_slider_pane_t5

0x6ba0,	// (0x00063031) main_cset_slider_pane_t6

0x6bb7,	// (0x00063048) main_cset_slider_pane_t7

0x000e,

0xf7e2,	// (0x0006bc73) main_cset_slider_pane_t

0x6cc5,	// (0x00063156) cset_list_set_pane_ParamLimits

0x6cc5,	// (0x00063156) cset_list_set_pane

0x6cde,	// (0x0006316f) aid_position_infowindow_above

0x6ce6,	// (0x00063177) aid_position_infowindow_below

0x6cee,	// (0x0006317f) cset_list_set_pane_g1_ParamLimits

0x6cee,	// (0x0006317f) cset_list_set_pane_g1

0x6cfa,	// (0x0006318b) cset_list_set_pane_g3_ParamLimits

0x6cfa,	// (0x0006318b) cset_list_set_pane_g3

0x0001,

0xf801,	// (0x0006bc92) cset_list_set_pane_g_ParamLimits

0xf801,	// (0x0006bc92) cset_list_set_pane_g

0x6d09,	// (0x0006319a) cset_list_set_pane_t1_ParamLimits

0x6d09,	// (0x0006319a) cset_list_set_pane_t1

0xa708,	// (0x00066b99) list_highlight_pane_cp021_ParamLimits

0xa708,	// (0x00066b99) list_highlight_pane_cp021

0xb53b,	// (0x000679cc) cset_slider_pane_g1

0xb54d,	// (0x000679de) cset_slider_pane_g2

0xb544,	// (0x000679d5) cset_slider_pane_g3

0x0002,

0x075d,	// (0x0005cbee) cset_slider_pane_g

0x6d1e,	// (0x000631af) aid_area_touch_cam4_zoom

0x6d26,	// (0x000631b7) cam4_zoom_cont_pane

0x6d2e,	// (0x000631bf) cam4_zoom_pane_g1

0x6d36,	// (0x000631c7) cam4_zoom_pane_g2

0x6d3e,	// (0x000631cf) cam4_zoom_pane_g3

0x0002,

0xf806,	// (0x0006bc97) cam4_zoom_pane_g

0x6d46,	// (0x000631d7) cam4_zoom_cont_pane_g1

0x6d4f,	// (0x000631e0) cam4_zoom_cont_pane_g2

0x6d58,	// (0x000631e9) cam4_zoom_cont_pane_g3

0x0002,

0xf80d,	// (0x0006bc9e) cam4_zoom_cont_pane_g

0x61b6,	// (0x00062647) call4_image_pane_ParamLimits

0x61b6,	// (0x00062647) call4_image_pane

0xd57b,	// (0x00069a0c) call4_windows_conf_pane_ParamLimits

0xd5bc,	// (0x00069a4d) popup_call4_audio_in_window_ParamLimits

0xd5bc,	// (0x00069a4d) popup_call4_audio_in_window

0x9acd,	// (0x00065f5e) bg_popup_call2_act_pane_cp02

0xd632,	// (0x00069ac3) call4_list_conf_pane

0xcc58,	// (0x000690e9) call4_image_pane_g1

0xcc58,	// (0x000690e9) call4_image_pane_g2

0x0001,

0x047a,	// (0x0005c90b) call4_image_pane_g

0xd8b8,	// (0x00069d49) list_single_graphic_popup_conf4_pane_ParamLimits

0xd8b8,	// (0x00069d49) list_single_graphic_popup_conf4_pane

0x9acd,	// (0x00065f5e) list_highlight_pane_cp022

0xd8cb,	// (0x00069d5c) list_single_graphic_popup_conf4_pane_g1

0xb12b,	// (0x000675bc) list_single_graphic_popup_conf4_pane_g2

0x0001,

0xf814,	// (0x0006bca5) list_single_graphic_popup_conf4_pane_g

0xd8d3,	// (0x00069d64) list_single_graphic_popup_conf4_pane_t1

0x2133,	// (0x0005e5c4) popup_vtel_slider_window_ParamLimits

0x2133,	// (0x0005e5c4) popup_vtel_slider_window

0xd55d,	// (0x000699ee) dialer2_ne_pane_t2_ParamLimits

0xd55d,	// (0x000699ee) dialer2_ne_pane_t2

0x0001,

0xf715,	// (0x0006bba6) dialer2_ne_pane_t_ParamLimits

0xf715,	// (0x0006bba6) dialer2_ne_pane_t

0xa708,	// (0x00066b99) bg_popup_sub_pane_cp010_ParamLimits

0xa708,	// (0x00066b99) bg_popup_sub_pane_cp010

0x6d61,	// (0x000631f2) popup_vtel_slider_window_g1_ParamLimits

0x6d61,	// (0x000631f2) popup_vtel_slider_window_g1

0x6d6d,	// (0x000631fe) popup_vtel_slider_window_g2_ParamLimits

0x6d6d,	// (0x000631fe) popup_vtel_slider_window_g2

0x0003,

0xf819,	// (0x0006bcaa) popup_vtel_slider_window_g_ParamLimits

0xf819,	// (0x0006bcaa) popup_vtel_slider_window_g

0x6db5,	// (0x00063246) vtel_slider_pane_ParamLimits

0x6db5,	// (0x00063246) vtel_slider_pane

0x6dc4,	// (0x00063255) vtel_slider_pane_g1_ParamLimits

0x6dc4,	// (0x00063255) vtel_slider_pane_g1

0x6dd1,	// (0x00063262) vtel_slider_pane_g2_ParamLimits

0x6dd1,	// (0x00063262) vtel_slider_pane_g2

0x6dde,	// (0x0006326f) vtel_slider_pane_g3_ParamLimits

0x6dde,	// (0x0006326f) vtel_slider_pane_g3

0x6dc4,	// (0x00063255) vtel_slider_pane_g4_ParamLimits

0x6dc4,	// (0x00063255) vtel_slider_pane_g4

0x6deb,	// (0x0006327c) vtel_slider_pane_g5_ParamLimits

0x6deb,	// (0x0006327c) vtel_slider_pane_g5

0x0004,

0xf822,	// (0x0006bcb3) vtel_slider_pane_g_ParamLimits

0xf822,	// (0x0006bcb3) vtel_slider_pane_g

0x43d2,	// (0x00060863) main_gallery2_pane

0x6521,	// (0x000629b2) aid_size_row_itut2_dropdow_list_ParamLimits

0x6521,	// (0x000629b2) aid_size_row_itut2_dropdow_list

0x658f,	// (0x00062a20) grid_vitu2_function_top_pane_ParamLimits

0x658f,	// (0x00062a20) grid_vitu2_function_top_pane

0x65e9,	// (0x00062a7a) popup_vitu2_dropdown_list_window_ParamLimits

0x65e9,	// (0x00062a7a) popup_vitu2_dropdown_list_window

0x6609,	// (0x00062a9a) popup_vitu2_match_list_window

0x6e06,	// (0x00063297) cell_vitu2_function_top_pane_ParamLimits

0x6e06,	// (0x00063297) cell_vitu2_function_top_pane

0x6e20,	// (0x000632b1) cell_vitu2_function_top_pane_cp01_ParamLimits

0x6e20,	// (0x000632b1) cell_vitu2_function_top_pane_cp01

0x6e3c,	// (0x000632cd) cell_vitu2_function_top_wide_pane_ParamLimits

0x6e3c,	// (0x000632cd) cell_vitu2_function_top_wide_pane

0x43d2,	// (0x00060863) bg_button_pane_cp012

0x6e58,	// (0x000632e9) cell_vitu2_function_top_pane_g1

0x6e6c,	// (0x000632fd) bg_button_pane_cp013_ParamLimits

0x6e6c,	// (0x000632fd) bg_button_pane_cp013

0x6e88,	// (0x00063319) cell_vitu2_function_top_wide_pane_g1_ParamLimits

0x6e88,	// (0x00063319) cell_vitu2_function_top_wide_pane_g1

0x1061,	// (0x0005d4f2) bg_popup_sub_pane_cp20

0x6ea0,	// (0x00063331) list_vitu2_match_list_pane

0xd6ad,	// (0x00069b3e) bg_popup_sub_pane_cp20_g1

0xd6b5,	// (0x00069b46) bg_popup_sub_pane_cp20_g2

0xac1d,	// (0x000670ae) bg_popup_sub_pane_cp20_g3

0xd6bd,	// (0x00069b4e) bg_popup_sub_pane_cp20_g4

0xabfd,	// (0x0006708e) bg_popup_sub_pane_cp20_g5

0xd8e9,	// (0x00069d7a) bg_popup_sub_pane_cp20_g6

0xd6cd,	// (0x00069b5e) bg_popup_sub_pane_cp20_g7

0xd6d5,	// (0x00069b66) bg_popup_sub_pane_cp20_g8

0xd6dd,	// (0x00069b6e) bg_popup_sub_pane_cp20_g9

0x0008,

0xf82d,	// (0x0006bcbe) bg_popup_sub_pane_cp20_g

0x6eb8,	// (0x00063349) list_vitu2_match_list_item_pane_ParamLimits

0x6eb8,	// (0x00063349) list_vitu2_match_list_item_pane

0x6eca,	// (0x0006335b) list_vitu2_match_list_item_pane_t1

0x107b,	// (0x0005d50c) bg_popup_sub_pane_cp21

0x6f20,	// (0x000633b1) grid_vitu2_dropdown_list_pane

0x6f28,	// (0x000633b9) cell_vitu2_dropdown_list_char_pane_ParamLimits

0x6f28,	// (0x000633b9) cell_vitu2_dropdown_list_char_pane

0x6f49,	// (0x000633da) cell_vitu2_dropdown_list_ctrl_pane_ParamLimits

0x6f49,	// (0x000633da) cell_vitu2_dropdown_list_ctrl_pane

0xd8f1,	// (0x00069d82) cell_vitu2_dropdown_list_char_pane_g1

0xd8fa,	// (0x00069d8b) cell_vitu2_dropdown_list_char_pane_g2

0xd903,	// (0x00069d94) cell_vitu2_dropdown_list_char_pane_g3

0x0002,

0xf84a,	// (0x0006bcdb) cell_vitu2_dropdown_list_char_pane_g

0x6f75,	// (0x00063406) cell_vitu2_dropdown_list_char_pane_t1

0x6f83,	// (0x00063414) cell_vitu2_dropdown_list_ctrl_pane_g1_ParamLimits

0x6f83,	// (0x00063414) cell_vitu2_dropdown_list_ctrl_pane_g1

0x6f93,	// (0x00063424) cell_vitu2_dropdown_list_ctrl_pane_g2_ParamLimits

0x6f93,	// (0x00063424) cell_vitu2_dropdown_list_ctrl_pane_g2

0x6fa4,	// (0x00063435) cell_vitu2_dropdown_list_ctrl_pane_g3_ParamLimits

0x6fa4,	// (0x00063435) cell_vitu2_dropdown_list_ctrl_pane_g3

0x6fb4,	// (0x00063445) cell_vitu2_dropdown_list_ctrl_pane_g4_ParamLimits

0x6fb4,	// (0x00063445) cell_vitu2_dropdown_list_ctrl_pane_g4

0x635d,	// (0x000627ee) cell_vitu2_dropdown_list_ctrl_pane_g5_ParamLimits

0x635d,	// (0x000627ee) cell_vitu2_dropdown_list_ctrl_pane_g5

0x0004,

0xf851,	// (0x0006bce2) cell_vitu2_dropdown_list_ctrl_pane_g_ParamLimits

0xf851,	// (0x0006bce2) cell_vitu2_dropdown_list_ctrl_pane_g

0x6fd0,	// (0x00063461) aid_size_cell_gallery2_ParamLimits

0x6fd0,	// (0x00063461) aid_size_cell_gallery2

0x6fea,	// (0x0006347b) grid_gallery2_pane_ParamLimits

0x6fea,	// (0x0006347b) grid_gallery2_pane

0x592e,	// (0x00061dbf) scroll_pane_cp029_ParamLimits

0x592e,	// (0x00061dbf) scroll_pane_cp029

0x7001,	// (0x00063492) cell_gallery2_pane_ParamLimits

0x7001,	// (0x00063492) cell_gallery2_pane

0xd90c,	// (0x00069d9d) cell_gallery2_pane_g2

0x7053,	// (0x000634e4) cell_gallery2_pane_g3

0xd914,	// (0x00069da5) cell_gallery2_pane_g4

0xd91c,	// (0x00069dad) cell_gallery2_pane_g5

0xa9c4,	// (0x00066e55) grid_highlight_pane_cp10

0x6609,	// (0x00062a9a) popup_vitu2_match_list_window_ParamLimits

0x661b,	// (0x00062aac) popup_vitu2_query_window_ParamLimits

0x661b,	// (0x00062aac) popup_vitu2_query_window

0x107b,	// (0x0005d50c) bg_vitu2_candi_button_pane

0xd8f1,	// (0x00069d82) cell_vitu2_dropdown_list_char_pane_g1_copy1

0xd8fa,	// (0x00069d8b) cell_vitu2_dropdown_list_char_pane_g2_copy1

0xd903,	// (0x00069d94) cell_vitu2_dropdown_list_char_pane_g2_copy2

0x705b,	// (0x000634ec) bg_button_pane_cp015

0x706d,	// (0x000634fe) bg_button_pane_cp016

0x7080,	// (0x00063511) bg_button_pane_cp017

0xc850,	// (0x00068ce1) bg_popup_sub_pane_cp22

0xd924,	// (0x00069db5) popup_vitu2_query_window_g1

0x70c5,	// (0x00063556) popup_vitu2_query_window_g2

0x0002,

0xf85c,	// (0x0006bced) popup_vitu2_query_window_g

0x70e2,	// (0x00063573) popup_vitu2_query_window_t1_ParamLimits

0x70e2,	// (0x00063573) popup_vitu2_query_window_t1

0x7115,	// (0x000635a6) popup_vitu2_query_window_t2_ParamLimits

0x7115,	// (0x000635a6) popup_vitu2_query_window_t2

0x7127,	// (0x000635b8) popup_vitu2_query_window_t3_ParamLimits

0x7127,	// (0x000635b8) popup_vitu2_query_window_t3

0x714f,	// (0x000635e0) popup_vitu2_query_window_t4_ParamLimits

0x714f,	// (0x000635e0) popup_vitu2_query_window_t4

0x7170,	// (0x00063601) popup_vitu2_query_window_t5_ParamLimits

0x7170,	// (0x00063601) popup_vitu2_query_window_t5

0x0006,

0xf863,	// (0x0006bcf4) popup_vitu2_query_window_t_ParamLimits

0xf863,	// (0x0006bcf4) popup_vitu2_query_window_t

0xd7af,	// (0x00069c40) main_cset_text_pane

0x6a0f,	// (0x00062ea0) aid_area_touch_slider_ParamLimits

0x6a2b,	// (0x00062ebc) cset_slider_pane_ParamLimits

0x6a55,	// (0x00062ee6) main_cset_slider_pane_g1_ParamLimits

0x6a6a,	// (0x00062efb) main_cset_slider_pane_g2_ParamLimits

0xd7d0,	// (0x00069c61) main_cset_slider_pane_g3_ParamLimits

0xd7d0,	// (0x00069c61) main_cset_slider_pane_g3

0x6a7f,	// (0x00062f10) main_cset_slider_pane_g4_ParamLimits

0x6a7f,	// (0x00062f10) main_cset_slider_pane_g4

0x6a8e,	// (0x00062f1f) main_cset_slider_pane_g5_ParamLimits

0x6a8e,	// (0x00062f1f) main_cset_slider_pane_g5

0x6a9c,	// (0x00062f2d) main_cset_slider_pane_g6_ParamLimits

0x6a9c,	// (0x00062f2d) main_cset_slider_pane_g6

0xf7bd,	// (0x0006bc4e) main_cset_slider_pane_g_ParamLimits

0xd800,	// (0x00069c91) main_cset_slider_pane_t1_ParamLimits

0x6b30,	// (0x00062fc1) main_cset_slider_pane_t2_ParamLimits

0x6b4a,	// (0x00062fdb) main_cset_slider_pane_t3_ParamLimits

0x6b64,	// (0x00062ff5) main_cset_slider_pane_t4_ParamLimits

0x6b82,	// (0x00063013) main_cset_slider_pane_t5_ParamLimits

0x6ba0,	// (0x00063031) main_cset_slider_pane_t6_ParamLimits

0x6bb7,	// (0x00063048) main_cset_slider_pane_t7_ParamLimits

0x6be5,	// (0x00063076) main_cset_slider_pane_t8_ParamLimits

0x6be5,	// (0x00063076) main_cset_slider_pane_t8

0x6c0d,	// (0x0006309e) main_cset_slider_pane_t9_ParamLimits

0x6c0d,	// (0x0006309e) main_cset_slider_pane_t9

0x6c35,	// (0x000630c6) main_cset_slider_pane_t10_ParamLimits

0x6c35,	// (0x000630c6) main_cset_slider_pane_t10

0x6c5d,	// (0x000630ee) main_cset_slider_pane_t11_ParamLimits

0x6c5d,	// (0x000630ee) main_cset_slider_pane_t11

0x6c87,	// (0x00063118) main_cset_slider_pane_t12_ParamLimits

0x6c87,	// (0x00063118) main_cset_slider_pane_t12

0x6ca6,	// (0x00063137) main_cset_slider_pane_t13_ParamLimits

0x6ca6,	// (0x00063137) main_cset_slider_pane_t13

0xf7e2,	// (0x0006bc73) main_cset_slider_pane_t_ParamLimits

0x9acd,	// (0x00065f5e) bg_popup_sub_pane_cp011

0xd930,	// (0x00069dc1) main_cset_text_pane_g1

0xd938,	// (0x00069dc9) main_cset_text_pane_t1

0xd946,	// (0x00069dd7) main_cset_text_pane_t2

0xd954,	// (0x00069de5) main_cset_text_pane_t3

0xd962,	// (0x00069df3) main_cset_text_pane_t4

0xd970,	// (0x00069e01) main_cset_text_pane_t5

0xd97e,	// (0x00069e0f) main_cset_text_pane_t6

0xd98c,	// (0x00069e1d) main_cset_text_pane_t7

0x0006,

0xf872,	// (0x0006bd03) main_cset_text_pane_t

0x107b,	// (0x0005d50c) main_cam4_burst_pane

0x107b,	// (0x0005d50c) main_cam5_pane

0x695e,	// (0x00062def) bg_button_pane_cp019

0x6967,	// (0x00062df8) bg_button_pane_cp020

0xd7dc,	// (0x00069c6d) main_cset_slider_pane_g7_ParamLimits

0xd7dc,	// (0x00069c6d) main_cset_slider_pane_g7

0xd7e8,	// (0x00069c79) main_cset_slider_pane_g8_ParamLimits

0xd7e8,	// (0x00069c79) main_cset_slider_pane_g8

0x6ab0,	// (0x00062f41) main_cset_slider_pane_g9_ParamLimits

0x6ab0,	// (0x00062f41) main_cset_slider_pane_g9

0x6abc,	// (0x00062f4d) main_cset_slider_pane_g10_ParamLimits

0x6abc,	// (0x00062f4d) main_cset_slider_pane_g10

0x6ac8,	// (0x00062f59) main_cset_slider_pane_g11_ParamLimits

0x6ac8,	// (0x00062f59) main_cset_slider_pane_g11

0x6ad4,	// (0x00062f65) main_cset_slider_pane_g12_ParamLimits

0x6ad4,	// (0x00062f65) main_cset_slider_pane_g12

0x6ae0,	// (0x00062f71) main_cset_slider_pane_g13_ParamLimits

0x6ae0,	// (0x00062f71) main_cset_slider_pane_g13

0x6aee,	// (0x00062f7f) main_cset_slider_pane_g14_ParamLimits

0x6aee,	// (0x00062f7f) main_cset_slider_pane_g14

0x6afc,	// (0x00062f8d) main_cset_slider_pane_g15_ParamLimits

0x6afc,	// (0x00062f8d) main_cset_slider_pane_g15

0xd82e,	// (0x00069cbf) main_cset_slider_pane_t14_ParamLimits

0xd82e,	// (0x00069cbf) main_cset_slider_pane_t14

0xd87f,	// (0x00069d10) main_cset_slider_pane_t15_ParamLimits

0xd87f,	// (0x00069d10) main_cset_slider_pane_t15

0x71e7,	// (0x00063678) aid_cam4_burst_size_cell_ParamLimits

0x71e7,	// (0x00063678) aid_cam4_burst_size_cell

0x7203,	// (0x00063694) grid_cam4_burst_pane_ParamLimits

0x7203,	// (0x00063694) grid_cam4_burst_pane

0x7233,	// (0x000636c4) linegrid_cam4_burst_pane_ParamLimits

0x7233,	// (0x000636c4) linegrid_cam4_burst_pane

0x7253,	// (0x000636e4) scroll_pane_cp30_ParamLimits

0x7253,	// (0x000636e4) scroll_pane_cp30

0x725f,	// (0x000636f0) cell_cam4_burst_pane_ParamLimits

0x725f,	// (0x000636f0) cell_cam4_burst_pane

0xd99a,	// (0x00069e2b) linegrid_cam4_burst_pane_g1_ParamLimits

0xd99a,	// (0x00069e2b) linegrid_cam4_burst_pane_g1

0x729b,	// (0x0006372c) linegrid_cam4_burst_pane_g2_ParamLimits

0x729b,	// (0x0006372c) linegrid_cam4_burst_pane_g2

0xd9a7,	// (0x00069e38) linegrid_cam4_burst_pane_g3_ParamLimits

0xd9a7,	// (0x00069e38) linegrid_cam4_burst_pane_g3

0x0002,

0xf881,	// (0x0006bd12) linegrid_cam4_burst_pane_g_ParamLimits

0xf881,	// (0x0006bd12) linegrid_cam4_burst_pane_g

0x72ac,	// (0x0006373d) linegrid_cam4_burst_pane_g3_copy1_ParamLimits

0x72ac,	// (0x0006373d) linegrid_cam4_burst_pane_g3_copy1

0xd9b4,	// (0x00069e45) linegrid_cam4_burst_pane_g4_ParamLimits

0xd9b4,	// (0x00069e45) linegrid_cam4_burst_pane_g4

0x72c6,	// (0x00063757) linegrid_cam4_burst_pane_g5_ParamLimits

0x72c6,	// (0x00063757) linegrid_cam4_burst_pane_g5

0x72d7,	// (0x00063768) linegrid_cam4_burst_pane_g6_ParamLimits

0x72d7,	// (0x00063768) linegrid_cam4_burst_pane_g6

0xd9c1,	// (0x00069e52) linegrid_cam4_burst_pane_g7_ParamLimits

0xd9c1,	// (0x00069e52) linegrid_cam4_burst_pane_g7

0x72e8,	// (0x00063779) cell_cam4_burst_pane_g1

0xd9da,	// (0x00069e6b) main_cam5_pane_t1_ParamLimits

0xd9da,	// (0x00069e6b) main_cam5_pane_t1

0xd9ec,	// (0x00069e7d) main_cam5_pane_t2_ParamLimits

0xd9ec,	// (0x00069e7d) main_cam5_pane_t2

0xd9fe,	// (0x00069e8f) main_cam5_pane_t3_ParamLimits

0xd9fe,	// (0x00069e8f) main_cam5_pane_t3

0xda10,	// (0x00069ea1) main_cam5_pane_t4_ParamLimits

0xda10,	// (0x00069ea1) main_cam5_pane_t4

0xda3d,	// (0x00069ece) main_cam5_pane_t5_ParamLimits

0xda3d,	// (0x00069ece) main_cam5_pane_t5

0xda51,	// (0x00069ee2) main_cam5_pane_t6_ParamLimits

0xda51,	// (0x00069ee2) main_cam5_pane_t6

0xda65,	// (0x00069ef6) main_cam5_pane_t7_ParamLimits

0xda65,	// (0x00069ef6) main_cam5_pane_t7

0xda77,	// (0x00069f08) main_cam5_pane_t8_ParamLimits

0xda77,	// (0x00069f08) main_cam5_pane_t8

0xda93,	// (0x00069f24) main_cam5_pane_t9_ParamLimits

0xda93,	// (0x00069f24) main_cam5_pane_t9

0xdaa5,	// (0x00069f36) main_cam5_pane_t10_ParamLimits

0xdaa5,	// (0x00069f36) main_cam5_pane_t10

0xdab7,	// (0x00069f48) main_cam5_pane_t11_ParamLimits

0xdab7,	// (0x00069f48) main_cam5_pane_t11

0xdac9,	// (0x00069f5a) main_cam5_pane_t12_ParamLimits

0xdac9,	// (0x00069f5a) main_cam5_pane_t12

0xdade,	// (0x00069f6f) main_cam5_pane_t13_ParamLimits

0xdade,	// (0x00069f6f) main_cam5_pane_t13

0x000c,

0xf88d,	// (0x0006bd1e) main_cam5_pane_t_ParamLimits

0xf88d,	// (0x0006bd1e) main_cam5_pane_t

0x1020,	// (0x0005d4b1) popup_scut_keymap_window_ParamLimits

0x1020,	// (0x0005d4b1) popup_scut_keymap_window

0x72fb,	// (0x0006378c) aid_size_cell_brow_shortcut

0xa9c4,	// (0x00066e55) bg_popup_window_pane_cp010

0x7307,	// (0x00063798) grid_scut_pane

0x7313,	// (0x000637a4) cell_scut_pane_ParamLimits

0x7313,	// (0x000637a4) cell_scut_pane

0x732a,	// (0x000637bb) cell_scut_pane_g1

0xdafb,	// (0x00069f8c) cell_scut_pane_t1

0xdb0a,	// (0x00069f9b) cell_scut_pane_t2

0x7333,	// (0x000637c4) cell_scut_pane_t3

0x0002,

0xf8a8,	// (0x0006bd39) cell_scut_pane_t

0x5113,	// (0x000615a4) main_mup3_pane_g8_ParamLimits

0x5113,	// (0x000615a4) main_mup3_pane_g8

0x652f,	// (0x000629c0) area_vitu2_query_pane_ParamLimits

0x652f,	// (0x000629c0) area_vitu2_query_pane

0x7093,	// (0x00063524) input_focus_pane_cp08

0xdb19,	// (0x00069faa) area_vitu2_query_pane_g1

0x7341,	// (0x000637d2) area_vitu2_query_pane_g2

0x0001,

0xf8af,	// (0x0006bd40) area_vitu2_query_pane_g

0x7352,	// (0x000637e3) area_vitu2_query_pane_t1_ParamLimits

0x7352,	// (0x000637e3) area_vitu2_query_pane_t1

0x7366,	// (0x000637f7) area_vitu2_query_pane_t2_ParamLimits

0x7366,	// (0x000637f7) area_vitu2_query_pane_t2

0x737a,	// (0x0006380b) area_vitu2_query_pane_t3_ParamLimits

0x737a,	// (0x0006380b) area_vitu2_query_pane_t3

0xa098,	// (0x00066529) area_vitu2_query_pane_t4_ParamLimits

0xa098,	// (0x00066529) area_vitu2_query_pane_t4

0xa0c0,	// (0x00066551) area_vitu2_query_pane_t5_ParamLimits

0xa0c0,	// (0x00066551) area_vitu2_query_pane_t5

0xa0e8,	// (0x00066579) area_vitu2_query_pane_t6_ParamLimits

0xa0e8,	// (0x00066579) area_vitu2_query_pane_t6

0x0006,

0xf8b4,	// (0x0006bd45) area_vitu2_query_pane_t_ParamLimits

0xf8b4,	// (0x0006bd45) area_vitu2_query_pane_t

0x73a2,	// (0x00063833) bg_button_pane_cp018

0x73b0,	// (0x00063841) bg_button_pane_cp021

0x73bc,	// (0x0006384d) bg_button_pane_cp022

0x73cd,	// (0x0006385e) input_focus_pane_cp09

0xb23a,	// (0x000676cb) aid_size_touch_mv_arrow_left

0xb265,	// (0x000676f6) aid_size_touch_mv_arrow_right

0x6b14,	// (0x00062fa5) main_cset_slider_pane_g16_ParamLimits

0x6b14,	// (0x00062fa5) main_cset_slider_pane_g16

0x6b22,	// (0x00062fb3) main_cset_slider_pane_g17_ParamLimits

0x6b22,	// (0x00062fb3) main_cset_slider_pane_g17

0x72e8,	// (0x00063779) cell_cam4_burst_pane_g1_ParamLimits

0x9acd,	// (0x00065f5e) compa_mode_pane

0x6d79,	// (0x0006320a) popup_vtel_slider_window_g3_ParamLimits

0x6d79,	// (0x0006320a) popup_vtel_slider_window_g3

0x6d8d,	// (0x0006321e) popup_vtel_slider_window_g4_ParamLimits

0x6d8d,	// (0x0006321e) popup_vtel_slider_window_g4

0x6da1,	// (0x00063232) popup_vtel_slider_window_t1_ParamLimits

0x6da1,	// (0x00063232) popup_vtel_slider_window_t1

0x107b,	// (0x0005d50c) main_cl_pane

0x446c,	// (0x000608fd) popup_imed_adjust2_window_ParamLimits

0xc850,	// (0x00068ce1) bg_tb_trans_pane_cp05_ParamLimits

0xd172,	// (0x00069603) popup_imed_adjust2_window_g1_ParamLimits

0xd181,	// (0x00069612) popup_imed_adjust2_window_g2_ParamLimits

0xd181,	// (0x00069612) popup_imed_adjust2_window_g2

0xd18d,	// (0x0006961e) popup_imed_adjust2_window_g3_ParamLimits

0xd18d,	// (0x0006961e) popup_imed_adjust2_window_g3

0x0002,

0x057d,	// (0x0005ca0e) popup_imed_adjust2_window_g_ParamLimits

0x057d,	// (0x0005ca0e) popup_imed_adjust2_window_g

0xd199,	// (0x0006962a) popup_imed_adjust2_window_t1_ParamLimits

0xd1b1,	// (0x00069642) slider_imed_adjust_pane_ParamLimits

0xd1c5,	// (0x00069656) slider_imed_adjust_pane_g1_ParamLimits

0xd1d5,	// (0x00069666) slider_imed_adjust_pane_g2_ParamLimits

0xd1e5,	// (0x00069676) slider_imed_adjust_pane_g3_ParamLimits

0xd1f6,	// (0x00069687) slider_imed_adjust_pane_g4_ParamLimits

0x0584,	// (0x0005ca15) slider_imed_adjust_pane_g_ParamLimits

0x6272,	// (0x00062703) aid_touch_area_cam4_ParamLimits

0x6272,	// (0x00062703) aid_touch_area_cam4

0x6282,	// (0x00062713) battery_pane_cp01

0x6309,	// (0x0006279a) main_camera4_pane_g6_ParamLimits

0x6309,	// (0x0006279a) main_camera4_pane_g6

0x6327,	// (0x000627b8) main_camera4_pane_t2_ParamLimits

0x6327,	// (0x000627b8) main_camera4_pane_t2

0x0001,

0xf749,	// (0x0006bbda) main_camera4_pane_t_ParamLimits

0xf749,	// (0x0006bbda) main_camera4_pane_t

0x63b6,	// (0x00062847) aid_touch_area_vid4_ParamLimits

0x63b6,	// (0x00062847) aid_touch_area_vid4

0x63f6,	// (0x00062887) main_video4_pane_g5_ParamLimits

0x63f6,	// (0x00062887) main_video4_pane_g5

0x641a,	// (0x000628ab) vid4_progress_pane_ParamLimits

0x641a,	// (0x000628ab) vid4_progress_pane

0xd7f4,	// (0x00069c85) main_cset_slider_pane_g18_ParamLimits

0xd7f4,	// (0x00069c85) main_cset_slider_pane_g18

0xd9ce,	// (0x00069e5f) cell_cam4_burst_pane_g2_ParamLimits

0xd9ce,	// (0x00069e5f) cell_cam4_burst_pane_g2

0x0001,

0xf888,	// (0x0006bd19) cell_cam4_burst_pane_g_ParamLimits

0xf888,	// (0x0006bd19) cell_cam4_burst_pane_g

0x73de,	// (0x0006386f) bg_cl_pane_ParamLimits

0x73de,	// (0x0006386f) bg_cl_pane

0x73ea,	// (0x0006387b) cl_header_pane_ParamLimits

0x73ea,	// (0x0006387b) cl_header_pane

0x73f6,	// (0x00063887) cl_listscroll_pane_ParamLimits

0x73f6,	// (0x00063887) cl_listscroll_pane

0xdb25,	// (0x00069fb6) bg_cl_pane_g1

0xdb2d,	// (0x00069fbe) bg_cl_pane_g2

0xdb35,	// (0x00069fc6) bg_cl_pane_g3

0xdb3d,	// (0x00069fce) bg_cl_pane_g4

0xdb45,	// (0x00069fd6) bg_cl_pane_g5

0xdb4d,	// (0x00069fde) bg_cl_pane_g6

0xdb55,	// (0x00069fe6) bg_cl_pane_g7

0xdb5d,	// (0x00069fee) bg_cl_pane_g8

0xdb65,	// (0x00069ff6) bg_cl_pane_g9

0x0008,

0x0821,	// (0x0005ccb2) bg_cl_pane_g

0x7402,	// (0x00063893) aid_height_cl_leading_ParamLimits

0x7402,	// (0x00063893) aid_height_cl_leading

0x740e,	// (0x0006389f) aid_height_cl_text_ParamLimits

0x740e,	// (0x0006389f) aid_height_cl_text

0xe9ad,	// (0x0006ae3e) bg_cl_header_pane_ParamLimits

0xe9ad,	// (0x0006ae3e) bg_cl_header_pane

0x7426,	// (0x000638b7) cl_header_pane_g1_ParamLimits

0x7426,	// (0x000638b7) cl_header_pane_g1

0x7433,	// (0x000638c4) cl_header_pane_t1_ParamLimits

0x7433,	// (0x000638c4) cl_header_pane_t1

0xdb6d,	// (0x00069ffe) cl_list_pane

0xd7c7,	// (0x00069c58) hc_scroll_pane_cp01

0xabfd,	// (0x0006708e) bg_cl_header_pane_g1

0xd6ad,	// (0x00069b3e) bg_cl_header_pane_g2

0xac1d,	// (0x000670ae) bg_cl_header_pane_g3

0xd6bd,	// (0x00069b4e) bg_cl_header_pane_g4

0xd6b5,	// (0x00069b46) bg_cl_header_pane_g5

0xd8e9,	// (0x00069d7a) bg_cl_header_pane_g6

0xd6d5,	// (0x00069b66) bg_cl_header_pane_g7

0xd6dd,	// (0x00069b6e) bg_cl_header_pane_g8

0xd6cd,	// (0x00069b5e) bg_cl_header_pane_g9

0x0008,

0xf8c3,	// (0x0006bd54) bg_cl_header_pane_g

0x7445,	// (0x000638d6) hc_cl_list_double_graphic_heading_pane_ParamLimits

0x7445,	// (0x000638d6) hc_cl_list_double_graphic_heading_pane

0x7459,	// (0x000638ea) hc_cl_list_single_graphic_pane_ParamLimits

0x7459,	// (0x000638ea) hc_cl_list_single_graphic_pane

0x7473,	// (0x00063904) hc_cl_list_single_graphic_pane_g1_ParamLimits

0x7473,	// (0x00063904) hc_cl_list_single_graphic_pane_g1

0x747f,	// (0x00063910) hc_cl_list_single_graphic_pane_g2_ParamLimits

0x747f,	// (0x00063910) hc_cl_list_single_graphic_pane_g2

0x0001,

0xf8d6,	// (0x0006bd67) hc_cl_list_single_graphic_pane_g_ParamLimits

0xf8d6,	// (0x0006bd67) hc_cl_list_single_graphic_pane_g

0x7493,	// (0x00063924) hc_cl_list_single_graphic_pane_t1_ParamLimits

0x7493,	// (0x00063924) hc_cl_list_single_graphic_pane_t1

0x7473,	// (0x00063904) hc_cl_list_double_graphic_heading_pane_g1_ParamLimits

0x7473,	// (0x00063904) hc_cl_list_double_graphic_heading_pane_g1

0x74a8,	// (0x00063939) hc_cl_list_double_graphic_heading_pane_g2_ParamLimits

0x74a8,	// (0x00063939) hc_cl_list_double_graphic_heading_pane_g2

0x74bc,	// (0x0006394d) hc_cl_list_double_graphic_heading_pane_g3_ParamLimits

0x74bc,	// (0x0006394d) hc_cl_list_double_graphic_heading_pane_g3

0x0002,

0xf8db,	// (0x0006bd6c) hc_cl_list_double_graphic_heading_pane_g_ParamLimits

0xf8db,	// (0x0006bd6c) hc_cl_list_double_graphic_heading_pane_g

0x74d0,	// (0x00063961) hc_cl_list_double_graphic_heading_pane_t1_ParamLimits

0x74d0,	// (0x00063961) hc_cl_list_double_graphic_heading_pane_t1

0x74e5,	// (0x00063976) hc_cl_list_double_graphic_heading_pane_t2_ParamLimits

0x74e5,	// (0x00063976) hc_cl_list_double_graphic_heading_pane_t2

0x0001,

0xf8e2,	// (0x0006bd73) hc_cl_list_double_graphic_heading_pane_t_ParamLimits

0xf8e2,	// (0x0006bd73) hc_cl_list_double_graphic_heading_pane_t

0x7502,	// (0x00063993) vid4_progress_pane_g1

0x7512,	// (0x000639a3) vid4_progress_pane_g2

0x7522,	// (0x000639b3) vid4_progress_pane_g3

0x7534,	// (0x000639c5) vid4_progress_pane_g4

0x0004,

0xf8e7,	// (0x0006bd78) vid4_progress_pane_g

0x754c,	// (0x000639dd) vid4_progress_pane_t1

0x7562,	// (0x000639f3) vid4_progress_pane_t2

0x0002,

0xf8f2,	// (0x0006bd83) vid4_progress_pane_t

0x758d,	// (0x00063a1e) wait_bar_pane_cp07

0xca4b,	// (0x00068edc) blid_firmament_pane_ParamLimits

0xca8e,	// (0x00068f1f) popup_blid_sat_info2_window_g1

0xcab2,	// (0x00068f43) popup_blid_sat_info2_window_t3

0xcac0,	// (0x00068f51) popup_blid_sat_info2_window_t4

0xcace,	// (0x00068f5f) popup_blid_sat_info2_window_t5

0xcadc,	// (0x00068f6d) popup_blid_sat_info2_window_t6

0xcaec,	// (0x00068f7d) popup_blid_sat_info2_window_t7

0xcafa,	// (0x00068f8b) popup_blid_sat_info2_window_t8

0xcb08,	// (0x00068f99) popup_blid_sat_info2_window_t9

0xcb16,	// (0x00068fa7) popup_blid_sat_info2_window_t10

0xcbd8,	// (0x00069069) aid_firma_cardinal_ParamLimits

0xcbec,	// (0x0006907d) blid_firmament_pane_t1_ParamLimits

0xcc03,	// (0x00069094) blid_firmament_pane_t2_ParamLimits

0xcc1a,	// (0x000690ab) blid_firmament_pane_t3_ParamLimits

0xcc31,	// (0x000690c2) blid_firmament_pane_t4_ParamLimits

0x0471,	// (0x0005c902) blid_firmament_pane_t_ParamLimits

0xcc48,	// (0x000690d9) blid_sat_info_pane_ParamLimits

0x43d2,	// (0x00060863) main_cam_set_pane_ParamLimits

0x58c7,	// (0x00061d58) aid_size_cell_colour_35_ParamLimits

0x58e1,	// (0x00061d72) aid_size_cell_colour_112_ParamLimits

0x58f8,	// (0x00061d89) aid_size_cell_effect_ParamLimits

0xa708,	// (0x00066b99) bg_tb_trans_pane_cp02_ParamLimits

0xb3ab,	// (0x0006783c) heading_imed_pane_ParamLimits

0x5912,	// (0x00061da3) listscroll_imed_pane_ParamLimits

0xbe36,	// (0x000682c7) popup_call2_audio_first_window_g5_ParamLimits

0xbe36,	// (0x000682c7) popup_call2_audio_first_window_g5

0x6021,	// (0x000624b2) aid_size_touch_image3_arrow_left_ParamLimits

0x6021,	// (0x000624b2) aid_size_touch_image3_arrow_left

0x6037,	// (0x000624c8) aid_size_touch_image3_arrow_right_ParamLimits

0x6037,	// (0x000624c8) aid_size_touch_image3_arrow_right

0x7577,	// (0x00063a08) vid4_progress_pane_t3

0x5bb2,	// (0x00062043) main_hwr_training_symbol_option_pane_ParamLimits

0x5bb2,	// (0x00062043) main_hwr_training_symbol_option_pane

0xd45f,	// (0x000698f0) popup_hwr_training_preview_window_ParamLimits

0xd45f,	// (0x000698f0) popup_hwr_training_preview_window

0x5c13,	// (0x000620a4) hwr_training_navi_pane_g5_ParamLimits

0x5c13,	// (0x000620a4) hwr_training_navi_pane_g5

0xd69b,	// (0x00069b2c) popup_char_count_window

0x1061,	// (0x0005d4f2) bg_popup_sub_pane_cp20_ParamLimits

0x6ea0,	// (0x00063331) list_vitu2_match_list_pane_ParamLimits

0x6eac,	// (0x0006333d) vitu2_page_scroll_pane_ParamLimits

0x6eac,	// (0x0006333d) vitu2_page_scroll_pane

0xdb76,	// (0x0006a007) list_single_hwr_training_symbol_option_pane_ParamLimits

0xdb76,	// (0x0006a007) list_single_hwr_training_symbol_option_pane

0xdb89,	// (0x0006a01a) list_single_hwr_training_symbol_option_pane_g1

0xdb91,	// (0x0006a022) list_single_hwr_training_symbol_option_pane_t1

0xdb9f,	// (0x0006a030) bg_button_pane_cp023

0xdba8,	// (0x0006a039) bg_button_pane_cp024

0x75d6,	// (0x00063a67) vitu2_page_scroll_pane_g1

0x75de,	// (0x00063a6f) vitu2_page_scroll_pane_g2

0x0001,

0xf8f9,	// (0x0006bd8a) vitu2_page_scroll_pane_g

0x75e6,	// (0x00063a77) vitu2_page_scroll_pane_t1

0xcc81,	// (0x00069112) popup_char_count_window_g1

0xdbdb,	// (0x0006a06c) popup_char_count_window_g2

0xdbe4,	// (0x0006a075) popup_char_count_window_g3

0x0002,

0x086f,	// (0x0005cd00) popup_char_count_window_g

0xdc16,	// (0x0006a0a7) popup_char_count_window_t1

0x107b,	// (0x0005d50c) main_vded2_pane

0xd15e,	// (0x000695ef) aid_size_cell_imed_line

0xd168,	// (0x000695f9) grid_imed_line_width_pane

0x6486,	// (0x00062917) vid4_indicators_pane_g4

0xdc24,	// (0x0006a0b5) cell_imed_line_width_pane_ParamLimits

0xdc24,	// (0x0006a0b5) cell_imed_line_width_pane

0xdc38,	// (0x0006a0c9) cell_imed_line_width_pane_g1

0xdbed,	// (0x0006a07e) cell_imed_line_width_pane_g2

0x0001,

0xf8fe,	// (0x0006bd8f) cell_imed_line_width_pane_g

0x75f5,	// (0x00063a86) main_vded2_pane_g1_ParamLimits

0x75f5,	// (0x00063a86) main_vded2_pane_g1

0x7602,	// (0x00063a93) main_vded2_pane_g2_ParamLimits

0x7602,	// (0x00063a93) main_vded2_pane_g2

0x0001,

0xf903,	// (0x0006bd94) main_vded2_pane_g_ParamLimits

0xf903,	// (0x0006bd94) main_vded2_pane_g

0x7610,	// (0x00063aa1) vded2_slider_pane_ParamLimits

0x7610,	// (0x00063aa1) vded2_slider_pane

0x761d,	// (0x00063aae) aid_size_touch_vded2_end

0x7627,	// (0x00063ab8) aid_size_touch_vded2_playhead

0xdc41,	// (0x0006a0d2) aid_size_touch_vded2_start

0xdc49,	// (0x0006a0da) vded2_slider_bg_pane

0xdc52,	// (0x0006a0e3) vded2_slider_pane_g1

0xdc5b,	// (0x0006a0ec) vded2_slider_pane_g2

0x762f,	// (0x00063ac0) vded2_slider_pane_g3

0x0002,

0xf908,	// (0x0006bd99) vded2_slider_pane_g

0xdc63,	// (0x0006a0f4) vded2_slider_bg_pane_g1

0xdc6c,	// (0x0006a0fd) vded2_slider_bg_pane_g2

0xdc75,	// (0x0006a106) vded2_slider_bg_pane_g3

0x0002,

0xf90f,	// (0x0006bda0) vded2_slider_bg_pane_g

0x3cb5,	// (0x00060146) aid_postcard_touch_down_pane_ParamLimits

0x3cb5,	// (0x00060146) aid_postcard_touch_down_pane

0x3cc5,	// (0x00060156) aid_postcard_touch_up_pane_ParamLimits

0x3cc5,	// (0x00060156) aid_postcard_touch_up_pane

0x107b,	// (0x0005d50c) main_blid2_pane

0x43fb,	// (0x0006088c) popup_blid2_search_window

0x9acd,	// (0x00065f5e) blid2_gps_pane

0x9acd,	// (0x00065f5e) blid2_navig_pane

0x9acd,	// (0x00065f5e) blid2_search_pane

0x9acd,	// (0x00065f5e) blid2_tripm_pane

0x7638,	// (0x00063ac9) blid2_search_pane_g1_ParamLimits

0x7638,	// (0x00063ac9) blid2_search_pane_g1

0x7648,	// (0x00063ad9) blid2_search_pane_t1_ParamLimits

0x7648,	// (0x00063ad9) blid2_search_pane_t1

0x765a,	// (0x00063aeb) aid_size_cell_blid2_gps_ParamLimits

0x765a,	// (0x00063aeb) aid_size_cell_blid2_gps

0x766a,	// (0x00063afb) blid2_gps_pane_g1_ParamLimits

0x766a,	// (0x00063afb) blid2_gps_pane_g1

0x7676,	// (0x00063b07) grid_blid2_satellite_pane_ParamLimits

0x7676,	// (0x00063b07) grid_blid2_satellite_pane

0x7686,	// (0x00063b17) blid2_navig_pane_g1_ParamLimits

0x7686,	// (0x00063b17) blid2_navig_pane_g1

0x7692,	// (0x00063b23) blid2_navig_pane_t1_ParamLimits

0x7692,	// (0x00063b23) blid2_navig_pane_t1

0x76a4,	// (0x00063b35) blid2_navig_pane_t2_ParamLimits

0x76a4,	// (0x00063b35) blid2_navig_pane_t2

0x0001,

0xf916,	// (0x0006bda7) blid2_navig_pane_t_ParamLimits

0xf916,	// (0x0006bda7) blid2_navig_pane_t

0x76b6,	// (0x00063b47) blid2_navig_ring_pane_ParamLimits

0x76b6,	// (0x00063b47) blid2_navig_ring_pane

0x76c6,	// (0x00063b57) blid2_speed_pane_ParamLimits

0x76c6,	// (0x00063b57) blid2_speed_pane

0x76d2,	// (0x00063b63) blid2_tripm_pane_g1_ParamLimits

0x76d2,	// (0x00063b63) blid2_tripm_pane_g1

0x76e2,	// (0x00063b73) blid2_tripm_pane_g2_ParamLimits

0x76e2,	// (0x00063b73) blid2_tripm_pane_g2

0x76ee,	// (0x00063b7f) blid2_tripm_pane_g3_ParamLimits

0x76ee,	// (0x00063b7f) blid2_tripm_pane_g3

0x76fa,	// (0x00063b8b) blid2_tripm_pane_g4_ParamLimits

0x76fa,	// (0x00063b8b) blid2_tripm_pane_g4

0x7706,	// (0x00063b97) blid2_tripm_pane_g5_ParamLimits

0x7706,	// (0x00063b97) blid2_tripm_pane_g5

0x0005,

0xf91b,	// (0x0006bdac) blid2_tripm_pane_g_ParamLimits

0xf91b,	// (0x0006bdac) blid2_tripm_pane_g

0x7722,	// (0x00063bb3) blid2_tripm_pane_t1_ParamLimits

0x7722,	// (0x00063bb3) blid2_tripm_pane_t1

0x7736,	// (0x00063bc7) blid2_tripm_pane_t2_ParamLimits

0x7736,	// (0x00063bc7) blid2_tripm_pane_t2

0x7748,	// (0x00063bd9) blid2_tripm_pane_t3_ParamLimits

0x7748,	// (0x00063bd9) blid2_tripm_pane_t3

0x0003,

0xf928,	// (0x0006bdb9) blid2_tripm_pane_t_ParamLimits

0xf928,	// (0x0006bdb9) blid2_tripm_pane_t

0x777a,	// (0x00063c0b) cell_blid2_satellite_pane_ParamLimits

0x777a,	// (0x00063c0b) cell_blid2_satellite_pane

0x7794,	// (0x00063c25) cell_blid2_satellite_pane_g1

0xdc7e,	// (0x0006a10f) cell_blid2_satellite_pane_t1

0xcc58,	// (0x000690e9) blid2_speed_pane_g1

0xdc8c,	// (0x0006a11d) blid2_speed_pane_t1

0xdc9a,	// (0x0006a12b) blid2_speed_pane_t2

0x0001,

0xf931,	// (0x0006bdc2) blid2_speed_pane_t

0xcc58,	// (0x000690e9) blid2_navig_ring_pane_g1

0x779d,	// (0x00063c2e) blid2_navig_ring_pane_g2

0x77a5,	// (0x00063c36) blid2_navig_ring_pane_g3

0x77ad,	// (0x00063c3e) blid2_navig_ring_pane_g4

0x77b5,	// (0x00063c46) blid2_navig_ring_pane_g5

0x0004,

0xf936,	// (0x0006bdc7) blid2_navig_ring_pane_g

0x9acd,	// (0x00065f5e) bg_popup_window_pane_cp011

0xdca8,	// (0x0006a139) popup_blid2_search_window_g1

0xdcb0,	// (0x0006a141) popup_blid2_search_window_t1

0xdcbe,	// (0x0006a14f) popup_blid2_search_window_t2

0x0001,

0xf941,	// (0x0006bdd2) popup_blid2_search_window_t

0xab0c,	// (0x00066f9d) main_browser_pane_g1

0xa7cf,	// (0x00066c60) main_browser_pane_ParamLimits

0x43d2,	// (0x00060863) bg_button_pane_cp011_ParamLimits

0x6731,	// (0x00062bc2) cell_vitu2_function_pane_g1_ParamLimits

0xc850,	// (0x00068ce1) bg_popup_sub_pane_cp22_ParamLimits

0x7093,	// (0x00063524) input_focus_pane_cp08_ParamLimits

0x70aa,	// (0x0006353b) popup_vitu2_query_button_pane_ParamLimits

0x70aa,	// (0x0006353b) popup_vitu2_query_button_pane

0x70bb,	// (0x0006354c) popup_vitu2_query_input_button_pane

0xd924,	// (0x00069db5) popup_vitu2_query_window_g1_ParamLimits

0x70c5,	// (0x00063556) popup_vitu2_query_window_g2_ParamLimits

0xf85c,	// (0x0006bced) popup_vitu2_query_window_g_ParamLimits

0x9acd,	// (0x00065f5e) bg_button_pane_cp026

0x77bd,	// (0x00063c4e) popup_vitu2_query_input_button_pane_g1

0x9acd,	// (0x00065f5e) bg_button_pane_cp025

0xdccc,	// (0x0006a15d) popup_vitu2_query_button_pane_t1

0x4e53,	// (0x000612e4) main_mp3_pane_t6

0x4e63,	// (0x000612f4) popup_slider_window_cp01

0x636b,	// (0x000627fc) cam4_battery_pane

0x6445,	// (0x000628d6) cam4_battery_pane_cp02

0x74fa,	// (0x0006398b) cam4_battery_pane_cp01

0x74fa,	// (0x0006398b) cam4_battery_pane_cp03

0xdbf5,	// (0x0006a086) cam4_battery_pane_g1

0xcc58,	// (0x000690e9) cam4_battery_pane_g2

0x0001,

0xf946,	// (0x0006bdd7) cam4_battery_pane_g

0xcb24,	// (0x00068fb5) popup_blid_sat_info2_window_t11

0xb23a,	// (0x000676cb) aid_size_touch_mv_arrow_left_ParamLimits

0xb265,	// (0x000676f6) aid_size_touch_mv_arrow_right_ParamLimits

0xb2c3,	// (0x00067754) navi_pane_g1_ParamLimits

0xb2cf,	// (0x00067760) navi_pane_g2_ParamLimits

0xb2fd,	// (0x0006778e) navi_pane_g3_ParamLimits

0xf3e5,	// (0x0006b876) navi_pane_g_ParamLimits

0x36df,	// (0x0005fb70) navi_pane_mv_t1_ParamLimits

0x591e,	// (0x00061daf) grid_imed_effect_pane_ParamLimits

0x1ff3,	// (0x0005e484) aid_placing_vt_slider_lsc

0xaa5b,	// (0x00066eec) aid_placing_vt_slider_prt

0xa708,	// (0x00066b99) bg_tb_trans_pane_cp01_ParamLimits

0xcdc6,	// (0x00069257) popup_image_details_window_g1_ParamLimits

0xcdd9,	// (0x0006926a) popup_image_details_window_g2_ParamLimits

0xcdee,	// (0x0006927f) popup_image_details_window_g3_ParamLimits

0xcdee,	// (0x0006927f) popup_image_details_window_g3

0x04b6,	// (0x0005c947) popup_image_details_window_g_ParamLimits

0xce02,	// (0x00069293) popup_image_details_window_t1_ParamLimits

0xce14,	// (0x000692a5) popup_image_details_window_t2_ParamLimits

0xce2d,	// (0x000692be) popup_image_details_window_t3_ParamLimits

0xce41,	// (0x000692d2) popup_image_details_window_t4_ParamLimits

0xce5c,	// (0x000692ed) popup_image_details_window_t5_ParamLimits

0x04bd,	// (0x0005c94e) popup_image_details_window_t_ParamLimits

0x741a,	// (0x000638ab) cl_header_name_pane_ParamLimits

0x741a,	// (0x000638ab) cl_header_name_pane

0x77c5,	// (0x00063c56) cl_header_name_pane_t1_ParamLimits

0x77c5,	// (0x00063c56) cl_header_name_pane_t1

0x77dc,	// (0x00063c6d) cl_header_name_pane_t2_ParamLimits

0x77dc,	// (0x00063c6d) cl_header_name_pane_t2

0x7806,	// (0x00063c97) cl_header_name_pane_t3_ParamLimits

0x7806,	// (0x00063c97) cl_header_name_pane_t3

0x0002,

0xf94b,	// (0x0006bddc) cl_header_name_pane_t_ParamLimits

0xf94b,	// (0x0006bddc) cl_header_name_pane_t

0xb38c,	// (0x0006781d) navi_pane_mv_g2_ParamLimits

0xd675,	// (0x00069b06) field_vitu2_entry_pane_g1_ParamLimits

0xd681,	// (0x00069b12) field_vitu2_entry_pane_g2_ParamLimits

0xd68d,	// (0x00069b1e) field_vitu2_entry_pane_g3_ParamLimits

0xd68d,	// (0x00069b1e) field_vitu2_entry_pane_g3

0x06b9,	// (0x0005cb4a) field_vitu2_entry_pane_g_ParamLimits

0x66c5,	// (0x00062b56) cell_vitu2_itu_pane_g1_ParamLimits

0x66d7,	// (0x00062b68) cell_vitu2_itu_pane_g2_ParamLimits

0x66d7,	// (0x00062b68) cell_vitu2_itu_pane_g2

0x0001,

0xf780,	// (0x0006bc11) cell_vitu2_itu_pane_g_ParamLimits

0xf780,	// (0x0006bc11) cell_vitu2_itu_pane_g

0x43d2,	// (0x00060863) bg_vkb2_func_pane_cp05_ParamLimits

0x43d2,	// (0x00060863) bg_vkb2_func_pane_cp05

0x43d2,	// (0x00060863) bg_vkb2_func_pane_cp03

0x43d2,	// (0x00060863) bg_vkb2_func_pane_cp04

0x43d2,	// (0x00060863) bg_vkb2_func_pane_cp10_ParamLimits

0x43d2,	// (0x00060863) bg_vkb2_func_pane_cp10

0x73bc,	// (0x0006384d) bg_vkb2_func_pane_cp08

0x73a2,	// (0x00063833) bg_vkb2_func_pane_cp06

0x73b0,	// (0x00063841) bg_vkb2_func_pane_cp07

0xdbb1,	// (0x0006a042) bg_vkb2_func_pane_cp11_ParamLimits

0xdbb1,	// (0x0006a042) bg_vkb2_func_pane_cp11

0xdbc6,	// (0x0006a057) bg_vkb2_func_pane_cp12_ParamLimits

0xdbc6,	// (0x0006a057) bg_vkb2_func_pane_cp12

0x9acd,	// (0x00065f5e) bg_vkb2_func_pane_cp09

0xd6ad,	// (0x00069b3e) bg_vkb2_func_pane_g1

0xac1d,	// (0x000670ae) bg_vkb2_func_pane_g2

0xd6b5,	// (0x00069b46) bg_vkb2_func_pane_g3

0xd6bd,	// (0x00069b4e) bg_vkb2_func_pane_g4

0xd8e9,	// (0x00069d7a) bg_vkb2_func_pane_g5

0xd6d5,	// (0x00069b66) bg_vkb2_func_pane_g6

0xd6dd,	// (0x00069b6e) bg_vkb2_func_pane_g7

0xd6cd,	// (0x00069b5e) bg_vkb2_func_pane_g8

0xabfd,	// (0x0006708e) bg_vkb2_func_pane_g9

0x0008,

0xf952,	// (0x0006bde3) bg_vkb2_func_pane_g

0x7714,	// (0x00063ba5) blid2_tripm_pane_g6_ParamLimits

0x7714,	// (0x00063ba5) blid2_tripm_pane_g6

0xd517,	// (0x000699a8) mp4_progress_pane_g1

0x776e,	// (0x00063bff) blid2_tripm_values_pane_ParamLimits

0x776e,	// (0x00063bff) blid2_tripm_values_pane

0x782b,	// (0x00063cbc) blid2_tripm_values_pane_t1

0x7839,	// (0x00063cca) blid2_tripm_values_pane_t2

0x7847,	// (0x00063cd8) blid2_tripm_values_pane_t3

0x7855,	// (0x00063ce6) blid2_tripm_values_pane_t4

0x7863,	// (0x00063cf4) blid2_tripm_values_pane_t5

0x7871,	// (0x00063d02) blid2_tripm_values_pane_t6

0x787f,	// (0x00063d10) blid2_tripm_values_pane_t7

0x788d,	// (0x00063d1e) blid2_tripm_values_pane_t8

0x789b,	// (0x00063d2c) blid2_tripm_values_pane_t9

0x0008,

0xf965,	// (0x0006bdf6) blid2_tripm_values_pane_t

0x2033,	// (0x0005e4c4) call_video_pane_t1_ParamLimits

0x2054,	// (0x0005e4e5) call_video_pane_t2_ParamLimits

0xf26e,	// (0x0006b6ff) call_video_pane_t_ParamLimits

0x3bff,	// (0x00060090) msg_header_pane_g1_ParamLimits

0xb580,	// (0x00067a11) msg_header_pane_g2_ParamLimits

0xb580,	// (0x00067a11) msg_header_pane_g2

0x0001,

0xf488,	// (0x0006b919) msg_header_pane_g_ParamLimits

0xf488,	// (0x0006b919) msg_header_pane_g

0xa7cf,	// (0x00066c60) main_clock2_pane_ParamLimits

0x56b3,	// (0x00061b44) grid_clock2_toolbar_pane_ParamLimits

0x56b3,	// (0x00061b44) grid_clock2_toolbar_pane

0x56b3,	// (0x00061b44) listscroll_clock2_pane_ParamLimits

0x56b3,	// (0x00061b44) listscroll_clock2_pane

0x575b,	// (0x00061bec) main_clock2_pane_t3_ParamLimits

0x575b,	// (0x00061bec) main_clock2_pane_t3

0x576d,	// (0x00061bfe) main_clock2_pane_t4_ParamLimits

0x576d,	// (0x00061bfe) main_clock2_pane_t4

0xdcda,	// (0x0006a16b) cell_clock2_toolbar_pane

0xdce2,	// (0x0006a173) cell_clock2_toolbar_pane_cp01

0xdce2,	// (0x0006a173) cell_clock2_toolbar_pane_cp02

0xdcea,	// (0x0006a17b) cell_clock2_toolbar_pane_cp03

0xdcf2,	// (0x0006a183) list_clock2_pane

0xb1bf,	// (0x00067650) scroll_pane_cp10

0xdcfa,	// (0x0006a18b) list_single_clock2_pane_ParamLimits

0xdcfa,	// (0x0006a18b) list_single_clock2_pane

0xa9c4,	// (0x00066e55) list_highlight_pane_cp08

0xdd07,	// (0x0006a198) list_single_clock2_pane_t1

0xdd15,	// (0x0006a1a6) list_single_clock2_pane_t2

0x0001,

0xf978,	// (0x0006be09) list_single_clock2_pane_t

0x9acd,	// (0x00065f5e) bg_button_pane_cp10

0xdd23,	// (0x0006a1b4) cell_clock2_toolbar_pane_g1

0x3c23,	// (0x000600b4) aid_main_viewer_pane_g1_ParamLimits

0x3c23,	// (0x000600b4) aid_main_viewer_pane_g1

0x3c2f,	// (0x000600c0) aid_main_viewer_pane_g2_ParamLimits

0x3c2f,	// (0x000600c0) aid_main_viewer_pane_g2

0x3c3b,	// (0x000600cc) aid_main_viewer_pane_g3_ParamLimits

0x3c3b,	// (0x000600cc) aid_main_viewer_pane_g3

0x3c4c,	// (0x000600dd) aid_main_viewer_pane_g4_ParamLimits

0x3c4c,	// (0x000600dd) aid_main_viewer_pane_g4

0x0003,

0xf499,	// (0x0006b92a) aid_main_viewer_pane_g_ParamLimits

0xf499,	// (0x0006b92a) aid_main_viewer_pane_g

0x43c5,	// (0x00060856) main_calc_pane_ParamLimits

0x43e0,	// (0x00060871) main_dialer2_pane_ParamLimits

0x107b,	// (0x0005d50c) main_cam6_pane

0x107b,	// (0x0005d50c) main_vid6_pane

0x56bf,	// (0x00061b50) listscroll_gen_pane_cp06_ParamLimits

0x56bf,	// (0x00061b50) listscroll_gen_pane_cp06

0x577f,	// (0x00061c10) main_clock2_pane_t5_ParamLimits

0x577f,	// (0x00061c10) main_clock2_pane_t5

0x57c8,	// (0x00061c59) aid_call2_pane_cp10_ParamLimits

0x57da,	// (0x00061c6b) aid_call_pane_cp10_ParamLimits

0xb22e,	// (0x000676bf) popup_clock_analogue_window_cp10_g1_ParamLimits

0xb22e,	// (0x000676bf) popup_clock_analogue_window_cp10_g2_ParamLimits

0x57ec,	// (0x00061c7d) popup_clock_analogue_window_cp10_g3_ParamLimits

0x57ec,	// (0x00061c7d) popup_clock_analogue_window_cp10_g4_ParamLimits

0xb22e,	// (0x000676bf) popup_clock_analogue_window_cp10_g5_ParamLimits

0xf690,	// (0x0006bb21) popup_clock_analogue_window_cp10_g_ParamLimits

0x57fe,	// (0x00061c8f) popup_clock_analogue_window_cp10_t1_ParamLimits

0x5fce,	// (0x0006245f) cell_dialer2_keypad_pane_g2_ParamLimits

0x5fce,	// (0x0006245f) cell_dialer2_keypad_pane_g2

0x0001,

0xf71a,	// (0x0006bbab) cell_dialer2_keypad_pane_g_ParamLimits

0xf71a,	// (0x0006bbab) cell_dialer2_keypad_pane_g

0x5fea,	// (0x0006247b) cell_dialer2_keypad_pane_t1

0x69fc,	// (0x00062e8d) main_cset_text2_pane_ParamLimits

0x69fc,	// (0x00062e8d) main_cset_text2_pane

0xdb19,	// (0x00069faa) area_vitu2_query_pane_g1_ParamLimits

0x7341,	// (0x000637d2) area_vitu2_query_pane_g2_ParamLimits

0xf8af,	// (0x0006bd40) area_vitu2_query_pane_g_ParamLimits

0xa110,	// (0x000665a1) area_vitu2_query_pane_t7_ParamLimits

0xa110,	// (0x000665a1) area_vitu2_query_pane_t7

0x73a2,	// (0x00063833) bg_button_pane_cp018_ParamLimits

0x73b0,	// (0x00063841) bg_button_pane_cp021_ParamLimits

0x73bc,	// (0x0006384d) bg_button_pane_cp022_ParamLimits

0x73bc,	// (0x0006384d) bg_vkb2_func_pane_cp08_ParamLimits

0x73a2,	// (0x00063833) bg_vkb2_func_pane_cp06_ParamLimits

0x73b0,	// (0x00063841) bg_vkb2_func_pane_cp07_ParamLimits

0x73cd,	// (0x0006385e) input_focus_pane_cp09_ParamLimits

0x78a9,	// (0x00063d3a) cam6_autofocus_pane_ParamLimits

0x78a9,	// (0x00063d3a) cam6_autofocus_pane

0x78cb,	// (0x00063d5c) cam6_image_uncrop_pane_ParamLimits

0x78cb,	// (0x00063d5c) cam6_image_uncrop_pane

0x78f8,	// (0x00063d89) cam6_indi_pane_ParamLimits

0x78f8,	// (0x00063d89) cam6_indi_pane

0x7912,	// (0x00063da3) cam6_mode_pane_ParamLimits

0x7912,	// (0x00063da3) cam6_mode_pane

0x7926,	// (0x00063db7) cam6_timer_pane_ParamLimits

0x7926,	// (0x00063db7) cam6_timer_pane

0x7937,	// (0x00063dc8) cam6_zoom_pane_ParamLimits

0x7937,	// (0x00063dc8) cam6_zoom_pane

0x794f,	// (0x00063de0) cam6_mode_pane_g1_ParamLimits

0x794f,	// (0x00063de0) cam6_mode_pane_g1

0x795b,	// (0x00063dec) cam6_mode_pane_g2_ParamLimits

0x795b,	// (0x00063dec) cam6_mode_pane_g2

0x7967,	// (0x00063df8) cam6_mode_pane_g3_ParamLimits

0x7967,	// (0x00063df8) cam6_mode_pane_g3

0x7973,	// (0x00063e04) cam6_mode_pane_g4_ParamLimits

0x7973,	// (0x00063e04) cam6_mode_pane_g4

0x0003,

0xf97d,	// (0x0006be0e) cam6_mode_pane_g_ParamLimits

0xf97d,	// (0x0006be0e) cam6_mode_pane_g

0xdbff,	// (0x0006a090) bg_tb_trans_pane_cp08_ParamLimits

0xdbff,	// (0x0006a090) bg_tb_trans_pane_cp08

0xdd2b,	// (0x0006a1bc) cam6_battery_pane_ParamLimits

0xdd2b,	// (0x0006a1bc) cam6_battery_pane

0xdd41,	// (0x0006a1d2) cam6_indi_pane_g1_ParamLimits

0xdd41,	// (0x0006a1d2) cam6_indi_pane_g1

0xdd53,	// (0x0006a1e4) cam6_indi_pane_g2_ParamLimits

0xdd53,	// (0x0006a1e4) cam6_indi_pane_g2

0xdd65,	// (0x0006a1f6) cam6_indi_pane_g3_ParamLimits

0xdd65,	// (0x0006a1f6) cam6_indi_pane_g3

0x0002,

0xf986,	// (0x0006be17) cam6_indi_pane_g_ParamLimits

0xf986,	// (0x0006be17) cam6_indi_pane_g

0xdd77,	// (0x0006a208) cam6_indi_pane_t1_ParamLimits

0xdd77,	// (0x0006a208) cam6_indi_pane_t1

0x64c1,	// (0x00062952) cam6_autofocus_pane_g1

0x64b9,	// (0x0006294a) cam6_autofocus_pane_g2

0x64d1,	// (0x00062962) cam6_autofocus_pane_g3

0x64c9,	// (0x0006295a) cam6_autofocus_pane_g4

0x0003,

0xf98d,	// (0x0006be1e) cam6_autofocus_pane_g

0xddb8,	// (0x0006a249) cam6_timer_pane_g1

0xddc0,	// (0x0006a251) cam6_timer_pane_t1

0xddce,	// (0x0006a25f) cam6_zoom_cont_pane

0xddd6,	// (0x0006a267) cam6_zoom_pane_g1

0xddde,	// (0x0006a26f) cam6_zoom_pane_g2

0x797f,	// (0x00063e10) cam6_zoom_pane_g3

0x0002,

0xf996,	// (0x0006be27) cam6_zoom_pane_g

0xcc58,	// (0x000690e9) cam6_battery_pane_g1

0xcc58,	// (0x000690e9) cam6_battery_pane_g2

0x0001,

0x047a,	// (0x0005c90b) cam6_battery_pane_g

0xdde6,	// (0x0006a277) cam6_zoom_cont_pane_g1

0xddef,	// (0x0006a280) cam6_zoom_cont_pane_g2

0xddf8,	// (0x0006a289) cam6_zoom_cont_pane_g3

0x0002,

0x0915,	// (0x0005cda6) cam6_zoom_cont_pane_g

0x799c,	// (0x00063e2d) cam6_mode_pane_cp_ParamLimits

0x799c,	// (0x00063e2d) cam6_mode_pane_cp

0x79b0,	// (0x00063e41) cam6_zoom_pane_cp_ParamLimits

0x79b0,	// (0x00063e41) cam6_zoom_pane_cp

0x79c8,	// (0x00063e59) vid6_image_uncrop_cif_pane_ParamLimits

0x79c8,	// (0x00063e59) vid6_image_uncrop_cif_pane

0x79f4,	// (0x00063e85) vid6_image_uncrop_nhd_pane_ParamLimits

0x79f4,	// (0x00063e85) vid6_image_uncrop_nhd_pane

0x7a11,	// (0x00063ea2) vid6_image_uncrop_vga_pane_ParamLimits

0x7a11,	// (0x00063ea2) vid6_image_uncrop_vga_pane

0x7a30,	// (0x00063ec1) vid6_image_uncrop_wvga_pane_ParamLimits

0x7a30,	// (0x00063ec1) vid6_image_uncrop_wvga_pane

0x7a4d,	// (0x00063ede) vid6_indi_pane_ParamLimits

0x7a4d,	// (0x00063ede) vid6_indi_pane

0xdbff,	// (0x0006a090) bg_tb_trans_pane_cp09_ParamLimits

0xdbff,	// (0x0006a090) bg_tb_trans_pane_cp09

0xde10,	// (0x0006a2a1) cam6_battery_pane_cp_ParamLimits

0xde10,	// (0x0006a2a1) cam6_battery_pane_cp

0xde1c,	// (0x0006a2ad) vid6_indi_pane_g1_ParamLimits

0xde1c,	// (0x0006a2ad) vid6_indi_pane_g1

0xde2e,	// (0x0006a2bf) vid6_indi_pane_g2_ParamLimits

0xde2e,	// (0x0006a2bf) vid6_indi_pane_g2

0xde40,	// (0x0006a2d1) vid6_indi_pane_g3_ParamLimits

0xde40,	// (0x0006a2d1) vid6_indi_pane_g3

0xde55,	// (0x0006a2e6) vid6_indi_pane_g4_ParamLimits

0xde55,	// (0x0006a2e6) vid6_indi_pane_g4

0xde6a,	// (0x0006a2fb) vid6_indi_pane_g5_ParamLimits

0xde6a,	// (0x0006a2fb) vid6_indi_pane_g5

0x0004,

0x091c,	// (0x0005cdad) vid6_indi_pane_g_ParamLimits

0x091c,	// (0x0005cdad) vid6_indi_pane_g

0xde84,	// (0x0006a315) vid6_indi_pane_t1_ParamLimits

0xde84,	// (0x0006a315) vid6_indi_pane_t1

0xde9a,	// (0x0006a32b) vid6_indi_pane_t2_ParamLimits

0xde9a,	// (0x0006a32b) vid6_indi_pane_t2

0xdec2,	// (0x0006a353) vid6_indi_pane_t3_ParamLimits

0xdec2,	// (0x0006a353) vid6_indi_pane_t3

0xdeea,	// (0x0006a37b) vid6_indi_pane_t4_ParamLimits

0xdeea,	// (0x0006a37b) vid6_indi_pane_t4

0x0003,

0x0927,	// (0x0005cdb8) vid6_indi_pane_t_ParamLimits

0x0927,	// (0x0005cdb8) vid6_indi_pane_t

0xdf0e,	// (0x0006a39f) wait_bar_pane_cp08

0x7a70,	// (0x00063f01) main_cset_text2_pane_t1_ParamLimits

0x7a70,	// (0x00063f01) main_cset_text2_pane_t1

0x7987,	// (0x00063e18) listscroll_gen_pane_cp06_t1_ParamLimits

0x7987,	// (0x00063e18) listscroll_gen_pane_cp06_t1

0x107b,	// (0x0005d50c) main_cam6_set_pane

0x635d,	// (0x000627ee) bg_tb_trans_pane_cp06_ParamLimits

0x6373,	// (0x00062804) cam4_indicators_pane_g1_ParamLimits

0x6384,	// (0x00062815) cam4_indicators_pane_g2_ParamLimits

0xf757,	// (0x0006bbe8) cam4_indicators_pane_g_ParamLimits

0x639c,	// (0x0006282d) cam4_indicators_pane_t1_ParamLimits

0x43d2,	// (0x00060863) bg_tb_trans_pane_cp07_ParamLimits

0x644d,	// (0x000628de) vid4_indicators_pane_g1_ParamLimits

0x6461,	// (0x000628f2) vid4_indicators_pane_g2_ParamLimits

0x6475,	// (0x00062906) vid4_indicators_pane_g3_ParamLimits

0x6486,	// (0x00062917) vid4_indicators_pane_g4_ParamLimits

0xf769,	// (0x0006bbfa) vid4_indicators_pane_g_ParamLimits

0x64a2,	// (0x00062933) vid4_indicators_pane_t1_ParamLimits

0x7502,	// (0x00063993) vid4_progress_pane_g1_ParamLimits

0x7512,	// (0x000639a3) vid4_progress_pane_g2_ParamLimits

0x7522,	// (0x000639b3) vid4_progress_pane_g3_ParamLimits

0x7534,	// (0x000639c5) vid4_progress_pane_g4_ParamLimits

0xf8e7,	// (0x0006bd78) vid4_progress_pane_g_ParamLimits

0x754c,	// (0x000639dd) vid4_progress_pane_t1_ParamLimits

0x7562,	// (0x000639f3) vid4_progress_pane_t2_ParamLimits

0x7577,	// (0x00063a08) vid4_progress_pane_t3_ParamLimits

0xf8f2,	// (0x0006bd83) vid4_progress_pane_t_ParamLimits

0x758d,	// (0x00063a1e) wait_bar_pane_cp07_ParamLimits

0x7aa7,	// (0x00063f38) main_cam6_set_pane_g2_ParamLimits

0x7aa7,	// (0x00063f38) main_cam6_set_pane_g2

0x7ab3,	// (0x00063f44) main_cset6_listscroll_pane_ParamLimits

0x7ab3,	// (0x00063f44) main_cset6_listscroll_pane

0x7ade,	// (0x00063f6f) main_cset6_slider_pane_ParamLimits

0x7ade,	// (0x00063f6f) main_cset6_slider_pane

0x7aea,	// (0x00063f7b) main_cset6_text2_pane_ParamLimits

0x7aea,	// (0x00063f7b) main_cset6_text2_pane

0xdf1d,	// (0x0006a3ae) main_cset6_text_pane

0xdf25,	// (0x0006a3b6) main_cset_list_pane_copy1_ParamLimits

0xdf25,	// (0x0006a3b6) main_cset_list_pane_copy1

0xdf35,	// (0x0006a3c6) scroll_pane_cp028_copy1

0x7afd,	// (0x00063f8e) cset_list_set_pane_copy1

0x7b13,	// (0x00063fa4) aid_position_infowindow_above_copy1

0x7b1b,	// (0x00063fac) aid_position_infowindow_below_copy1

0x7b23,	// (0x00063fb4) cset_list_set_pane_g1_copy1

0x6cfa,	// (0x0006318b) cset_list_set_pane_g3_copy1_ParamLimits

0x6cfa,	// (0x0006318b) cset_list_set_pane_g3_copy1

0x6d09,	// (0x0006319a) cset_list_set_pane_t1_copy1_ParamLimits

0x6d09,	// (0x0006319a) cset_list_set_pane_t1_copy1

0xa708,	// (0x00066b99) list_highlight_pane_cp021_copy1_ParamLimits

0xa708,	// (0x00066b99) list_highlight_pane_cp021_copy1

0xdf3e,	// (0x0006a3cf) cset6_slider_pane_ParamLimits

0xdf3e,	// (0x0006a3cf) cset6_slider_pane

0xdf6a,	// (0x0006a3fb) main_cset6_slider_pane_g1_ParamLimits

0xdf6a,	// (0x0006a3fb) main_cset6_slider_pane_g1

0x7b2b,	// (0x00063fbc) main_cset6_slider_pane_g2_ParamLimits

0x7b2b,	// (0x00063fbc) main_cset6_slider_pane_g2

0xdf92,	// (0x0006a423) main_cset6_slider_pane_g3_ParamLimits

0xdf92,	// (0x0006a423) main_cset6_slider_pane_g3

0x7b53,	// (0x00063fe4) main_cset6_slider_pane_g4_ParamLimits

0x7b53,	// (0x00063fe4) main_cset6_slider_pane_g4

0x7b5f,	// (0x00063ff0) main_cset6_slider_pane_g5_ParamLimits

0x7b5f,	// (0x00063ff0) main_cset6_slider_pane_g5

0xd7dc,	// (0x00069c6d) main_cset6_slider_pane_g7_ParamLimits

0xd7dc,	// (0x00069c6d) main_cset6_slider_pane_g7

0xd7e8,	// (0x00069c79) main_cset6_slider_pane_g8_ParamLimits

0xd7e8,	// (0x00069c79) main_cset6_slider_pane_g8

0x7b6d,	// (0x00063ffe) main_cset6_slider_pane_g9_ParamLimits

0x7b6d,	// (0x00063ffe) main_cset6_slider_pane_g9

0x7b79,	// (0x0006400a) main_cset6_slider_pane_g10_ParamLimits

0x7b79,	// (0x0006400a) main_cset6_slider_pane_g10

0x7b85,	// (0x00064016) main_cset6_slider_pane_g11_ParamLimits

0x7b85,	// (0x00064016) main_cset6_slider_pane_g11

0x7b91,	// (0x00064022) main_cset6_slider_pane_g12_ParamLimits

0x7b91,	// (0x00064022) main_cset6_slider_pane_g12

0xd867,	// (0x00069cf8) main_cset6_slider_pane_g13_ParamLimits

0xd867,	// (0x00069cf8) main_cset6_slider_pane_g13

0xd873,	// (0x00069d04) main_cset6_slider_pane_g14_ParamLimits

0xd873,	// (0x00069d04) main_cset6_slider_pane_g14

0x7b9d,	// (0x0006402e) main_cset6_slider_pane_g15_ParamLimits

0x7b9d,	// (0x0006402e) main_cset6_slider_pane_g15

0x7bb5,	// (0x00064046) main_cset6_slider_pane_g16_ParamLimits

0x7bb5,	// (0x00064046) main_cset6_slider_pane_g16

0x7bc3,	// (0x00064054) main_cset6_slider_pane_g17_ParamLimits

0x7bc3,	// (0x00064054) main_cset6_slider_pane_g17

0x0011,

0xf99d,	// (0x0006be2e) main_cset6_slider_pane_g_ParamLimits

0xf99d,	// (0x0006be2e) main_cset6_slider_pane_g

0xdfaa,	// (0x0006a43b) main_cset6_slider_pane_t1_ParamLimits

0xdfaa,	// (0x0006a43b) main_cset6_slider_pane_t1

0x7bdd,	// (0x0006406e) main_cset6_slider_pane_t2_ParamLimits

0x7bdd,	// (0x0006406e) main_cset6_slider_pane_t2

0x7c08,	// (0x00064099) main_cset6_slider_pane_t3_ParamLimits

0x7c08,	// (0x00064099) main_cset6_slider_pane_t3

0x7c33,	// (0x000640c4) main_cset6_slider_pane_t4_ParamLimits

0x7c33,	// (0x000640c4) main_cset6_slider_pane_t4

0x7c5e,	// (0x000640ef) main_cset6_slider_pane_t5_ParamLimits

0x7c5e,	// (0x000640ef) main_cset6_slider_pane_t5

0xdfeb,	// (0x0006a47c) main_cset6_slider_pane_t7_ParamLimits

0xdfeb,	// (0x0006a47c) main_cset6_slider_pane_t7

0x7c8b,	// (0x0006411c) main_cset6_slider_pane_t8_ParamLimits

0x7c8b,	// (0x0006411c) main_cset6_slider_pane_t8

0x7caf,	// (0x00064140) main_cset6_slider_pane_t9_ParamLimits

0x7caf,	// (0x00064140) main_cset6_slider_pane_t9

0x7cd3,	// (0x00064164) main_cset6_slider_pane_t10_ParamLimits

0x7cd3,	// (0x00064164) main_cset6_slider_pane_t10

0x7cf7,	// (0x00064188) main_cset6_slider_pane_t11_ParamLimits

0x7cf7,	// (0x00064188) main_cset6_slider_pane_t11

0xe021,	// (0x0006a4b2) main_cset6_slider_pane_t14_ParamLimits

0xe021,	// (0x0006a4b2) main_cset6_slider_pane_t14

0xe05a,	// (0x0006a4eb) main_cset6_slider_pane_t15_ParamLimits

0xe05a,	// (0x0006a4eb) main_cset6_slider_pane_t15

0x000b,

0xf9c2,	// (0x0006be53) main_cset6_slider_pane_t_ParamLimits

0xf9c2,	// (0x0006be53) main_cset6_slider_pane_t

0xd434,	// (0x000698c5) cset_slider_pane_g1_copy1

0xda28,	// (0x00069eb9) cset_slider_pane_g2_copy1

0xdd9d,	// (0x0006a22e) cset_slider_pane_g3_copy1

0x9acd,	// (0x00065f5e) bg_popup_sub_pane_cp011_copy1

0xe093,	// (0x0006a524) main_cset_text_pane_g1_copy1

0xd938,	// (0x00069dc9) main_cset_text_pane_t1_copy1

0xd946,	// (0x00069dd7) main_cset_text_pane_t2_copy1

0xd954,	// (0x00069de5) main_cset_text_pane_t3_copy1

0xd962,	// (0x00069df3) main_cset_text_pane_t4_copy1

0xd970,	// (0x00069e01) main_cset_text_pane_t5_copy1

0xe09b,	// (0x0006a52c) main_cset_text_pane_t6_copy1

0xe0a9,	// (0x0006a53a) main_cset_text_pane_t7_copy1

0x7dec,	// (0x0006427d) main_cset_text2_pane_t1_copy1

0x43d2,	// (0x00060863) main_ncimui_pane

0x4431,	// (0x000608c2) popup_query_ncimui_window_ParamLimits

0x4431,	// (0x000608c2) popup_query_ncimui_window

0xa043,	// (0x000664d4) field_cale_ev2_pane_g4_ParamLimits

0xa043,	// (0x000664d4) field_cale_ev2_pane_g4

0x5cee,	// (0x0006217f) cell_video_dialer_keypad_pane_g2_ParamLimits

0x5cee,	// (0x0006217f) cell_video_dialer_keypad_pane_g2

0x0001,

0xf6fa,	// (0x0006bb8b) cell_video_dialer_keypad_pane_g_ParamLimits

0xf6fa,	// (0x0006bb8b) cell_video_dialer_keypad_pane_g

0x5d06,	// (0x00062197) cell_video_dialer_keypad_pane_t1

0x9acd,	// (0x00065f5e) bg_popup_window_pane_cp012

0xb0aa,	// (0x0006753b) heading_pane_cp06

0xe0d5,	// (0x0006a566) ncim_query_content_pane

0x9acd,	// (0x00065f5e) bg_popup_heading_pane_cp01

0xe0dd,	// (0x0006a56e) ncim_heading_pane_t1

0xe0eb,	// (0x0006a57c) ncim_indicator_popup_pane

0xe0fd,	// (0x0006a58e) ncim_query_button_pane

0xe111,	// (0x0006a5a2) ncim_query_content_pane_t1

0xe123,	// (0x0006a5b4) ncim_query_content_pane_t2

0x0005,

0xfa06,	// (0x0006be97) ncim_query_content_pane_t

0xe15d,	// (0x0006a5ee) ncim_query_list_pane

0xe16f,	// (0x0006a600) ncim_query_popup_pane

0xe0eb,	// (0x0006a57c) ncim_indicator_popup_pane_ParamLimits

0x7f40,	// (0x000643d1) ncim_query_content_pane_g1_ParamLimits

0x7f40,	// (0x000643d1) ncim_query_content_pane_g1

0xe111,	// (0x0006a5a2) ncim_query_content_pane_t1_ParamLimits

0xe123,	// (0x0006a5b4) ncim_query_content_pane_t2_ParamLimits

0x7f4c,	// (0x000643dd) ncim_query_content_pane_t3_ParamLimits

0x7f4c,	// (0x000643dd) ncim_query_content_pane_t3

0x7f69,	// (0x000643fa) ncim_query_content_pane_t4_ParamLimits

0x7f69,	// (0x000643fa) ncim_query_content_pane_t4

0x7f86,	// (0x00064417) ncim_query_content_pane_t5_ParamLimits

0x7f86,	// (0x00064417) ncim_query_content_pane_t5

0xe135,	// (0x0006a5c6) ncim_query_content_pane_t6_ParamLimits

0xe135,	// (0x0006a5c6) ncim_query_content_pane_t6

0xfa06,	// (0x0006be97) ncim_query_content_pane_t_ParamLimits

0xe15d,	// (0x0006a5ee) ncim_query_list_pane_ParamLimits

0xe16f,	// (0x0006a600) ncim_query_popup_pane_ParamLimits

0xe183,	// (0x0006a614) wait_bar_pane_cp04

0x9acd,	// (0x00065f5e) input_focus_pane_cp011

0xe18b,	// (0x0006a61c) ncim_query_popup_pane_t1

0xe199,	// (0x0006a62a) ncim_list_query_list_pane_ParamLimits

0xe199,	// (0x0006a62a) ncim_list_query_list_pane

0x9acd,	// (0x00065f5e) bg_button_pane_cp027

0xe1a6,	// (0x0006a637) ncim_query_button_pane_g1

0x9acd,	// (0x00065f5e) list_highlight_pane_cp012

0xe1b0,	// (0x0006a641) ncim_list_query_list_pane_g1

0xe1b8,	// (0x0006a649) ncim_list_query_list_pane_t1

0x6390,	// (0x00062821) cam4_indicators_pane_g3_ParamLimits

0x6390,	// (0x00062821) cam4_indicators_pane_g3

0x6492,	// (0x00062923) vid4_indicators_pane_g5_ParamLimits

0x6492,	// (0x00062923) vid4_indicators_pane_g5

0x7540,	// (0x000639d1) vid4_progress_pane_g5_ParamLimits

0x7540,	// (0x000639d1) vid4_progress_pane_g5

0x7e2c,	// (0x000642bd) main_ncimui_pane_g1

0x7e94,	// (0x00064325) ncimui_group_query_pane_ParamLimits

0x7e94,	// (0x00064325) ncimui_group_query_pane

0x7edc,	// (0x0006436d) ncimui_list_pane_ParamLimits

0x7edc,	// (0x0006436d) ncimui_list_pane

0x7f03,	// (0x00064394) ncimui_text_pane_ParamLimits

0x7f03,	// (0x00064394) ncimui_text_pane

0x7fa3,	// (0x00064434) ncimui_text_pane_t1_ParamLimits

0x7fa3,	// (0x00064434) ncimui_text_pane_t1

0xe1c6,	// (0x0006a657) ncimui_list_single_graphic_pane_ParamLimits

0xe1c6,	// (0x0006a657) ncimui_list_single_graphic_pane

0x7fc2,	// (0x00064453) ncimui_query_pane_ParamLimits

0x7fc2,	// (0x00064453) ncimui_query_pane

0x9acd,	// (0x00065f5e) list_highlight_pane_cp013

0xe1d6,	// (0x0006a667) ncim_list_query_list_pane_t1_copy1

0xe1e4,	// (0x0006a675) ncim_list_single_graphic_pane_g1

0xe1ec,	// (0x0006a67d) ncim_query_button_pane_cp01

0xe1f8,	// (0x0006a689) ncim_query_entry_pane_ParamLimits

0xe1f8,	// (0x0006a689) ncim_query_entry_pane

0xe20b,	// (0x0006a69c) ncimui_query_pane_g1

0xe217,	// (0x0006a6a8) ncimui_query_pane_t1_ParamLimits

0xe217,	// (0x0006a6a8) ncimui_query_pane_t1

0xa708,	// (0x00066b99) input_focus_pane_cp012

0xe230,	// (0x0006a6c1) ncim_query_entry_pane_t1

0xa7cf,	// (0x00066c60) main_im_pane_ParamLimits

0x43d2,	// (0x00060863) main_mobtv_pane_ParamLimits

0x43d2,	// (0x00060863) main_mobtv_pane

0x7bd1,	// (0x00064062) main_cset6_slider_pane_g18_ParamLimits

0x7bd1,	// (0x00064062) main_cset6_slider_pane_g18

0xdf9e,	// (0x0006a42f) main_cset6_slider_pane_g19_ParamLimits

0xdf9e,	// (0x0006a42f) main_cset6_slider_pane_g19

0xd68d,	// (0x00069b1e) bg_main_mobtv_pane_ParamLimits

0xd68d,	// (0x00069b1e) bg_main_mobtv_pane

0x7fd5,	// (0x00064466) main_mobtv_info_pane

0x7fe0,	// (0x00064471) main_mobtv_loading_pane_ParamLimits

0x7fe0,	// (0x00064471) main_mobtv_loading_pane

0xe242,	// (0x0006a6d3) main_mobtv_pg_channel_list_pane

0xe24c,	// (0x0006a6dd) main_mobtv_pg_hdr_pane

0x7fed,	// (0x0006447e) main_mobtv_programe_curr_pane_ParamLimits

0x7fed,	// (0x0006447e) main_mobtv_programe_curr_pane

0x7ffa,	// (0x0006448b) main_mobtv_programe_next_pane_ParamLimits

0x7ffa,	// (0x0006448b) main_mobtv_programe_next_pane

0xe255,	// (0x0006a6e6) popup_mobtv_noti_window

0xcc58,	// (0x000690e9) main_tv_pg_hdr_pane_g1

0xe25d,	// (0x0006a6ee) main_tv_pg_hdr_pane_g2

0xe265,	// (0x0006a6f6) main_tv_pg_hdr_pane_g3

0xe26d,	// (0x0006a6fe) main_tv_pg_hdr_pane_g4

0xe275,	// (0x0006a706) main_tv_pg_hdr_pane_g5

0xe27f,	// (0x0006a710) main_tv_pg_hdr_pane_g6

0xe289,	// (0x0006a71a) main_tv_pg_hdr_pane_g7

0xe293,	// (0x0006a724) main_tv_pg_hdr_pane_g8

0xe29d,	// (0x0006a72e) main_tv_pg_hdr_pane_g9

0xe2a7,	// (0x0006a738) main_tv_pg_hdr_pane_g10

0xe2b1,	// (0x0006a742) main_tv_pg_hdr_pane_g11

0x000a,

0x09a6,	// (0x0005ce37) main_tv_pg_hdr_pane_g

0xe2bb,	// (0x0006a74c) main_tv_pg_hdr_pane_t1

0xe2c9,	// (0x0006a75a) main_tv_pg_hdr_pane_t2

0xe2d7,	// (0x0006a768) main_tv_pg_hdr_pane_t3

0xe2e7,	// (0x0006a778) main_tv_pg_hdr_pane_t4

0xe2f7,	// (0x0006a788) main_tv_pg_hdr_pane_t5

0x0004,

0x09bd,	// (0x0005ce4e) main_tv_pg_hdr_pane_t

0xe307,	// (0x0006a798) single_mobtv_pg_channel_pane_ParamLimits

0xe307,	// (0x0006a798) single_mobtv_pg_channel_pane

0xe319,	// (0x0006a7aa) single_mobtv_pg_channel_table_pane

0xad20,	// (0x000671b1) single_mobtv_pg_channel_thumb_pane

0xe322,	// (0x0006a7b3) single_tv_pg_channel_pane_g1

0xe32b,	// (0x0006a7bc) single_tv_pg_channel_pane_g2

0x0001,

0x09c8,	// (0x0005ce59) single_tv_pg_channel_pane_g

0xcea6,	// (0x00069337) bg_single_mobtv_pg_channel_thumb_pane_ParamLimits

0xcea6,	// (0x00069337) bg_single_mobtv_pg_channel_thumb_pane

0xe334,	// (0x0006a7c5) single_mobtv_pg_channel_thumb_pane_g1_ParamLimits

0xe334,	// (0x0006a7c5) single_mobtv_pg_channel_thumb_pane_g1

0xe342,	// (0x0006a7d3) single_mobtv_pg_channel_thumb_pane_g2_ParamLimits

0xe342,	// (0x0006a7d3) single_mobtv_pg_channel_thumb_pane_g2

0xe34e,	// (0x0006a7df) single_mobtv_pg_channel_thumb_pane_g3_ParamLimits

0xe34e,	// (0x0006a7df) single_mobtv_pg_channel_thumb_pane_g3

0x0002,

0x09cd,	// (0x0005ce5e) single_mobtv_pg_channel_thumb_pane_g_ParamLimits

0x09cd,	// (0x0005ce5e) single_mobtv_pg_channel_thumb_pane_g

0xe35a,	// (0x0006a7eb) single_mobtv_pg_channel_thumb_pane_t1

0xe368,	// (0x0006a7f9) single_mobtv_pg_channel_thumb_pane_t2

0x0001,

0x09d4,	// (0x0005ce65) single_mobtv_pg_channel_thumb_pane_t

0xcc58,	// (0x000690e9) bg_single_mobtv_pg_channel_table_pane_g1

0xcc58,	// (0x000690e9) bg_single_mobtv_pg_channel_table_pane_g2

0x0001,

0x047a,	// (0x0005c90b) bg_single_mobtv_pg_channel_table_pane_g

0xe376,	// (0x0006a807) single_mobtv_pg_channel_table_pane_t1

0xe384,	// (0x0006a815) single_mobtv_pg_channel_table_pane_t2

0x0001,

0x09d9,	// (0x0005ce6a) single_mobtv_pg_channel_table_pane_t

0x800f,	// (0x000644a0) main_mobtv_info_pane_g1_ParamLimits

0x800f,	// (0x000644a0) main_mobtv_info_pane_g1

0x802b,	// (0x000644bc) main_mobtv_info_pane_t1_ParamLimits

0x802b,	// (0x000644bc) main_mobtv_info_pane_t1

0x80a3,	// (0x00064534) main_mobtv_info_pane_t2_ParamLimits

0x80a3,	// (0x00064534) main_mobtv_info_pane_t2

0x0002,

0xfa18,	// (0x0006bea9) main_mobtv_info_pane_t_ParamLimits

0xfa18,	// (0x0006bea9) main_mobtv_info_pane_t

0x8132,	// (0x000645c3) wait_bar_pane_cp05

0x8144,	// (0x000645d5) main_mobtv_loading_pane_g1_ParamLimits

0x8144,	// (0x000645d5) main_mobtv_loading_pane_g1

0x8152,	// (0x000645e3) main_mobtv_loading_pane_g2_ParamLimits

0x8152,	// (0x000645e3) main_mobtv_loading_pane_g2

0x815e,	// (0x000645ef) main_mobtv_loading_pane_g3_ParamLimits

0x815e,	// (0x000645ef) main_mobtv_loading_pane_g3

0x0002,

0xfa1f,	// (0x0006beb0) main_mobtv_loading_pane_g_ParamLimits

0xfa1f,	// (0x0006beb0) main_mobtv_loading_pane_g

0xe392,	// (0x0006a823) main_mobtv_loading_pane_t1_ParamLimits

0xe392,	// (0x0006a823) main_mobtv_loading_pane_t1

0xe3aa,	// (0x0006a83b) main_mobtv_loading_pane_t2_ParamLimits

0xe3aa,	// (0x0006a83b) main_mobtv_loading_pane_t2

0x0001,

0x09f1,	// (0x0005ce82) main_mobtv_loading_pane_t_ParamLimits

0x09f1,	// (0x0005ce82) main_mobtv_loading_pane_t

0x816c,	// (0x000645fd) wait_bar_pane_cp06_ParamLimits

0x816c,	// (0x000645fd) wait_bar_pane_cp06

0xe3ce,	// (0x0006a85f) main_mobtv_programe_curr_pane_t1

0xe3dc,	// (0x0006a86d) main_mobtv_programe_curr_pane_t2

0x0001,

0x09f6,	// (0x0005ce87) main_mobtv_programe_curr_pane_t

0xe3ea,	// (0x0006a87b) main_mobtv_programe_next_pane_t1

0xe3f8,	// (0x0006a889) main_mobtv_programe_next_pane_t2

0xe406,	// (0x0006a897) main_mobtv_programe_next_pane_t3

0x0002,

0x09fb,	// (0x0005ce8c) main_mobtv_programe_next_pane_t

0x9acd,	// (0x00065f5e) bg_popup_mobtv_noti_window_pane

0xe414,	// (0x0006a8a5) popup_mobtv_noti_window_g1

0xe41c,	// (0x0006a8ad) popup_mobtv_noti_window_t1

0xe42a,	// (0x0006a8bb) popup_mobtv_noti_window_t2

0x0001,

0x0a02,	// (0x0005ce93) popup_mobtv_noti_window_t

0xcc58,	// (0x000690e9) bg_popup_mobtv_noti_window_pane_g1

0x107b,	// (0x0005d50c) sc_clock_pane

0x107b,	// (0x0005d50c) main_fs_bigclock_pane

0x775c,	// (0x00063bed) blid2_tripm_pane_t4_ParamLimits

0x775c,	// (0x00063bed) blid2_tripm_pane_t4

0x8178,	// (0x00064609) sc_clock_pane_g1_ParamLimits

0x8178,	// (0x00064609) sc_clock_pane_g1

0x8186,	// (0x00064617) sc_clock_pane_t1_ParamLimits

0x8186,	// (0x00064617) sc_clock_pane_t1

0x8199,	// (0x0006462a) sc_clock_pane_t2_ParamLimits

0x8199,	// (0x0006462a) sc_clock_pane_t2

0x81ab,	// (0x0006463c) sc_clock_pane_t3_ParamLimits

0x81ab,	// (0x0006463c) sc_clock_pane_t3

0x0004,

0xfa26,	// (0x0006beb7) sc_clock_pane_t_ParamLimits

0xfa26,	// (0x0006beb7) sc_clock_pane_t

0x9071,	// (0x00065502) main_fs_bigclock_indicator_pane_ParamLimits

0x9071,	// (0x00065502) main_fs_bigclock_indicator_pane

0x8234,	// (0x000646c5) main_fs_bigclock_pane_g1_ParamLimits

0x8234,	// (0x000646c5) main_fs_bigclock_pane_g1

0x907d,	// (0x0006550e) main_fs_bigclock_pane_t1_ParamLimits

0x907d,	// (0x0006550e) main_fs_bigclock_pane_t1

0x908f,	// (0x00065520) main_fs_bigclock_pane_t2_ParamLimits

0x908f,	// (0x00065520) main_fs_bigclock_pane_t2

0x90a3,	// (0x00065534) main_fs_bigclock_pane_t3_ParamLimits

0x90a3,	// (0x00065534) main_fs_bigclock_pane_t3

0x0002,

0xfba7,	// (0x0006c038) main_fs_bigclock_pane_t_ParamLimits

0xfba7,	// (0x0006c038) main_fs_bigclock_pane_t

0xeca2,	// (0x0006b133) main_fs_bigclock_indicator_pane_g1

0xe105,	// (0x0006a596) ncim_query_content_pane_g2_ParamLimits

0xe105,	// (0x0006a596) ncim_query_content_pane_g2

0x0001,

0xfa01,	// (0x0006be92) ncim_query_content_pane_g_ParamLimits

0xfa01,	// (0x0006be92) ncim_query_content_pane_g

0x81bf,	// (0x00064650) sc_clock_pane_t4_ParamLimits

0x81bf,	// (0x00064650) sc_clock_pane_t4

0x43d2,	// (0x00060863) main_radioblah_pane

0xd600,	// (0x00069a91) cell_call4_button_pane_t1_copy1_ParamLimits

0xd600,	// (0x00069a91) cell_call4_button_pane_t1_copy1

0x7e46,	// (0x000642d7) main_ncimui_pane_t1_ParamLimits

0x7e46,	// (0x000642d7) main_ncimui_pane_t1

0x7e60,	// (0x000642f1) main_ncimui_pane_t2_ParamLimits

0x7e60,	// (0x000642f1) main_ncimui_pane_t2

0x0002,

0xf9fa,	// (0x0006be8b) main_ncimui_pane_t_ParamLimits

0xf9fa,	// (0x0006be8b) main_ncimui_pane_t

0xe56f,	// (0x0006aa00) main_radioblah_anim_pane_ParamLimits

0xe56f,	// (0x0006aa00) main_radioblah_anim_pane

0xe580,	// (0x0006aa11) main_radioblah_info_pane_ParamLimits

0xe580,	// (0x0006aa11) main_radioblah_info_pane

0xe594,	// (0x0006aa25) main_radioblah_pane_t1_ParamLimits

0xe594,	// (0x0006aa25) main_radioblah_pane_t1

0xe5b0,	// (0x0006aa41) main_radioblah_pane_t2_ParamLimits

0xe5b0,	// (0x0006aa41) main_radioblah_pane_t2

0x0003,

0x0a28,	// (0x0005ceb9) main_radioblah_pane_t_ParamLimits

0x0a28,	// (0x0005ceb9) main_radioblah_pane_t

0x8286,	// (0x00064717) main_radioblah_rocker_ctrl_pane_ParamLimits

0x8286,	// (0x00064717) main_radioblah_rocker_ctrl_pane

0xe5f8,	// (0x0006aa89) main_radioblah_info_pane_t1_ParamLimits

0xe5f8,	// (0x0006aa89) main_radioblah_info_pane_t1

0x82cb,	// (0x0006475c) main_radioblah_info_pane_t2_ParamLimits

0x82cb,	// (0x0006475c) main_radioblah_info_pane_t2

0x0003,

0xfa31,	// (0x0006bec2) main_radioblah_info_pane_t_ParamLimits

0xfa31,	// (0x0006bec2) main_radioblah_info_pane_t

0xcc58,	// (0x000690e9) main_radioblah_rocker_ctrl_pane_g1

0x837b,	// (0x0006480c) main_radioblah_rocker_ctrl_pane_g2

0x8383,	// (0x00064814) main_radioblah_rocker_ctrl_pane_g3

0x838b,	// (0x0006481c) main_radioblah_rocker_ctrl_pane_g4

0x8393,	// (0x00064824) main_radioblah_rocker_ctrl_pane_g5

0x839b,	// (0x0006482c) main_radioblah_rocker_ctrl_pane_g6

0x0005,

0xfa3a,	// (0x0006becb) main_radioblah_rocker_ctrl_pane_g

0x7dec,	// (0x0006427d) main_cset_text2_pane_t1_copy1_ParamLimits

0x62b3,	// (0x00062744) cam4_image_uncrop_qvga_pane

0x6402,	// (0x00062893) vid4_image_uncrop_qcif_pane

0x78ea,	// (0x00063d7b) cam6_image_uncrop_qvga_pane_ParamLimits

0x78ea,	// (0x00063d7b) cam6_image_uncrop_qvga_pane

0xde00,	// (0x0006a291) vid6_image_uncrop_qcif_pane_ParamLimits

0xde00,	// (0x0006a291) vid6_image_uncrop_qcif_pane

0x9acd,	// (0x00065f5e) bg_popup_preview_window_pane_cp03

0xe0b7,	// (0x0006a548) list_cset_text2_pane

0xe0bf,	// (0x0006a550) main_cset6_text2_pane_g1

0xe0c7,	// (0x0006a558) main_cset6_text2_pane_t1

0x83a3,	// (0x00064834) list_cset_text2_pane_t1_ParamLimits

0x83a3,	// (0x00064834) list_cset_text2_pane_t1

0x43d2,	// (0x00060863) main_radioblah_pane_ParamLimits

0x811e,	// (0x000645af) main_mobtv_info_pane_t3_ParamLimits

0x811e,	// (0x000645af) main_mobtv_info_pane_t3

0x8274,	// (0x00064705) main_radioblah_pane_g1

0x829f,	// (0x00064730) main_radioblah_info_pane_g1

0x8320,	// (0x000647b1) main_radioblah_info_pane_t3_ParamLimits

0x8320,	// (0x000647b1) main_radioblah_info_pane_t3

0x30ce,	// (0x0005f55f) highlight_cell_cale_month_pane_ParamLimits

0x30ce,	// (0x0005f55f) highlight_cell_cale_month_pane

0x107b,	// (0x0005d50c) main_phob_fisheye_pane

0xcf82,	// (0x00069413) scroll_pane_cp0031_ParamLimits

0xcf82,	// (0x00069413) scroll_pane_cp0031

0xdf0e,	// (0x0006a39f) wait_bar_pane_cp08_ParamLimits

0x7afd,	// (0x00063f8e) cset_list_set_pane_copy1_ParamLimits

0xe64d,	// (0x0006aade) highlight_cell_cale_month_pane_g1

0x83c4,	// (0x00064855) highlight_cell_cale_month_pane_t1

0xdb6d,	// (0x00069ffe) list_gen_pane_cp01

0xd7c7,	// (0x00069c58) scroll_pane_01

0x83d2,	// (0x00064863) list_single_double_fisheye_pane

0x83db,	// (0x0006486c) list_double_fisheye_pane_g1_ParamLimits

0x83db,	// (0x0006486c) list_double_fisheye_pane_g1

0x83e7,	// (0x00064878) list_double_fisheye_pane_g2_ParamLimits

0x83e7,	// (0x00064878) list_double_fisheye_pane_g2

0x83fb,	// (0x0006488c) list_double_fisheye_pane_g3_ParamLimits

0x83fb,	// (0x0006488c) list_double_fisheye_pane_g3

0x0004,

0xfa47,	// (0x0006bed8) list_double_fisheye_pane_g_ParamLimits

0xfa47,	// (0x0006bed8) list_double_fisheye_pane_g

0x8424,	// (0x000648b5) list_double_fisheye_pane_t1_ParamLimits

0x8424,	// (0x000648b5) list_double_fisheye_pane_t1

0x843f,	// (0x000648d0) list_double_fisheye_pane_t2_ParamLimits

0x843f,	// (0x000648d0) list_double_fisheye_pane_t2

0x0001,

0xfa52,	// (0x0006bee3) list_double_fisheye_pane_t_ParamLimits

0xfa52,	// (0x0006bee3) list_double_fisheye_pane_t

0x107b,	// (0x0005d50c) main_call5_pane

0x81e5,	// (0x00064676) sc_swipe_pane_ParamLimits

0x81e5,	// (0x00064676) sc_swipe_pane

0x846d,	// (0x000648fe) call5_image_pane_ParamLimits

0x846d,	// (0x000648fe) call5_image_pane

0x847d,	// (0x0006490e) call5_swipe_1_pane_ParamLimits

0x847d,	// (0x0006490e) call5_swipe_1_pane

0x8489,	// (0x0006491a) call5_swipe_2_pane_ParamLimits

0x8489,	// (0x0006491a) call5_swipe_2_pane

0x84a3,	// (0x00064934) popup_call5_audio_first_window_ParamLimits

0x84a3,	// (0x00064934) popup_call5_audio_first_window

0xcea6,	// (0x00069337) call5_swipe_1_pane_g1_ParamLimits

0xcea6,	// (0x00069337) call5_swipe_1_pane_g1

0xe655,	// (0x0006aae6) call5_swipe_1_pane_g2_ParamLimits

0xe655,	// (0x0006aae6) call5_swipe_1_pane_g2

0x0001,

0x0a57,	// (0x0005cee8) call5_swipe_1_pane_g_ParamLimits

0x0a57,	// (0x0005cee8) call5_swipe_1_pane_g

0xe661,	// (0x0006aaf2) call5_swipe_1_pane_t1_ParamLimits

0xe661,	// (0x0006aaf2) call5_swipe_1_pane_t1

0xcea6,	// (0x00069337) call5_swipe_2_pane_g1_ParamLimits

0xcea6,	// (0x00069337) call5_swipe_2_pane_g1

0xe676,	// (0x0006ab07) call5_swipe_2_pane_g2_ParamLimits

0xe676,	// (0x0006ab07) call5_swipe_2_pane_g2

0x0001,

0x0a5c,	// (0x0005ceed) call5_swipe_2_pane_g_ParamLimits

0x0a5c,	// (0x0005ceed) call5_swipe_2_pane_g

0xe682,	// (0x0006ab13) call5_swipe_2_pane_t1_ParamLimits

0xe682,	// (0x0006ab13) call5_swipe_2_pane_t1

0xe697,	// (0x0006ab28) sc_swipe_pane_g1_ParamLimits

0xe697,	// (0x0006ab28) sc_swipe_pane_g1

0xe6a4,	// (0x0006ab35) sc_swipe_pane_g2_ParamLimits

0xe6a4,	// (0x0006ab35) sc_swipe_pane_g2

0x0001,

0x0a61,	// (0x0005cef2) sc_swipe_pane_g_ParamLimits

0x0a61,	// (0x0005cef2) sc_swipe_pane_g

0xe6b0,	// (0x0006ab41) sc_swipe_pane_t1_ParamLimits

0xe6b0,	// (0x0006ab41) sc_swipe_pane_t1

0x107b,	// (0x0005d50c) main_cmail_launcher_pane

0x84b1,	// (0x00064942) aid_size_cell_cmail_l_ParamLimits

0x84b1,	// (0x00064942) aid_size_cell_cmail_l

0x84c1,	// (0x00064952) grid_cmail_l_pane_ParamLimits

0x84c1,	// (0x00064952) grid_cmail_l_pane

0x84d1,	// (0x00064962) cell_cmail_l_pane_ParamLimits

0x84d1,	// (0x00064962) cell_cmail_l_pane

0x84e5,	// (0x00064976) cell_cmail_l_pane_g1_ParamLimits

0x84e5,	// (0x00064976) cell_cmail_l_pane_g1

0x84f6,	// (0x00064987) cell_cmail_l_pane_t1_ParamLimits

0x84f6,	// (0x00064987) cell_cmail_l_pane_t1

0xe6c5,	// (0x0006ab56) cell_cmail_l_pane_t2_ParamLimits

0xe6c5,	// (0x0006ab56) cell_cmail_l_pane_t2

0x0001,

0xfa57,	// (0x0006bee8) cell_cmail_l_pane_t_ParamLimits

0xfa57,	// (0x0006bee8) cell_cmail_l_pane_t

0xa708,	// (0x00066b99) grid_highlight_pane_cp018_ParamLimits

0xa708,	// (0x00066b99) grid_highlight_pane_cp018

0x0ed1,	// (0x0005d362) main2_pane_ParamLimits

0x0ed1,	// (0x0005d362) main2_pane

0xa87a,	// (0x00066d0b) popup_sp_fs_action_menu_bg_pane_g1

0xa882,	// (0x00066d13) popup_sp_fs_action_menu_bg_pane_g2

0xa88a,	// (0x00066d1b) popup_sp_fs_action_menu_bg_pane_g3

0xa892,	// (0x00066d23) popup_sp_fs_action_menu_bg_pane_g4

0xa89a,	// (0x00066d2b) popup_sp_fs_action_menu_bg_pane_g5

0xa8a2,	// (0x00066d33) popup_sp_fs_action_menu_bg_pane_g6

0xa8aa,	// (0x00066d3b) popup_sp_fs_action_menu_bg_pane_g7

0xa8b2,	// (0x00066d43) popup_sp_fs_action_menu_bg_pane_g8

0xa8ba,	// (0x00066d4b) popup_sp_fs_action_menu_bg_pane_g9

0xa8c2,	// (0x00066d53) popup_sp_fs_action_menu_bg_pane_g10

0xa8c2,	// (0x00066d53) popup_sp_fs_action_menu_bg_pane_g11

0x000a,

0xf18a,	// (0x0006b61b) popup_sp_fs_action_menu_bg_pane_g

0x1e68,	// (0x0005e2f9) list_medium_line_x2_t3_g3_g1_ParamLimits

0x1e68,	// (0x0005e2f9) list_medium_line_x2_t3_g3_g1

0x1e74,	// (0x0005e305) list_medium_line_x2_t3_g3_g2_ParamLimits

0x1e74,	// (0x0005e305) list_medium_line_x2_t3_g3_g2

0x1e80,	// (0x0005e311) list_medium_line_x2_t3_g3_g3_ParamLimits

0x1e80,	// (0x0005e311) list_medium_line_x2_t3_g3_g3

0x0002,

0xf238,	// (0x0006b6c9) list_medium_line_x2_t3_g3_g_ParamLimits

0xf238,	// (0x0006b6c9) list_medium_line_x2_t3_g3_g

0x1e8c,	// (0x0005e31d) list_medium_line_x2_t3_g3_t1_ParamLimits

0x1e8c,	// (0x0005e31d) list_medium_line_x2_t3_g3_t1

0x1ea1,	// (0x0005e332) list_medium_line_x2_t3_g3_t2_ParamLimits

0x1ea1,	// (0x0005e332) list_medium_line_x2_t3_g3_t2

0x1eb3,	// (0x0005e344) list_medium_line_x2_t3_g3_t3_ParamLimits

0x1eb3,	// (0x0005e344) list_medium_line_x2_t3_g3_t3

0x0002,

0xf23f,	// (0x0006b6d0) list_medium_line_x2_t3_g3_t_ParamLimits

0xf23f,	// (0x0006b6d0) list_medium_line_x2_t3_g3_t

0x1e68,	// (0x0005e2f9) list_medium_line_x2_t3_g2_g1_ParamLimits

0x1e68,	// (0x0005e2f9) list_medium_line_x2_t3_g2_g1

0x1e80,	// (0x0005e311) list_medium_line_x2_t3_g2_g2_ParamLimits

0x1e80,	// (0x0005e311) list_medium_line_x2_t3_g2_g2

0x0001,

0xf246,	// (0x0006b6d7) list_medium_line_x2_t3_g2_g_ParamLimits

0xf246,	// (0x0006b6d7) list_medium_line_x2_t3_g2_g

0x1ec8,	// (0x0005e359) list_medium_line_x2_t3_g2_t1_ParamLimits

0x1ec8,	// (0x0005e359) list_medium_line_x2_t3_g2_t1

0x1ede,	// (0x0005e36f) list_medium_line_x2_t3_g2_t2_ParamLimits

0x1ede,	// (0x0005e36f) list_medium_line_x2_t3_g2_t2

0x1ef0,	// (0x0005e381) list_medium_line_x2_t3_g2_t3_ParamLimits

0x1ef0,	// (0x0005e381) list_medium_line_x2_t3_g2_t3

0x0002,

0xf24b,	// (0x0006b6dc) list_medium_line_x2_t3_g2_t_ParamLimits

0xf24b,	// (0x0006b6dc) list_medium_line_x2_t3_g2_t

0x1e68,	// (0x0005e2f9) list_medium_line_x2_t4_g4_g1_ParamLimits

0x1e68,	// (0x0005e2f9) list_medium_line_x2_t4_g4_g1

0x1f0e,	// (0x0005e39f) list_medium_line_x2_t4_g4_g2_ParamLimits

0x1f0e,	// (0x0005e39f) list_medium_line_x2_t4_g4_g2

0x1e74,	// (0x0005e305) list_medium_line_x2_t4_g4_g3_ParamLimits

0x1e74,	// (0x0005e305) list_medium_line_x2_t4_g4_g3

0x1f1a,	// (0x0005e3ab) list_medium_line_x2_t4_g4_g4_ParamLimits

0x1f1a,	// (0x0005e3ab) list_medium_line_x2_t4_g4_g4

0x0003,

0xf252,	// (0x0006b6e3) list_medium_line_x2_t4_g4_g_ParamLimits

0xf252,	// (0x0006b6e3) list_medium_line_x2_t4_g4_g

0x1f26,	// (0x0005e3b7) list_medium_line_x2_t4_g4_t1_ParamLimits

0x1f26,	// (0x0005e3b7) list_medium_line_x2_t4_g4_t1

0x1f40,	// (0x0005e3d1) list_medium_line_x2_t4_g4_t2_ParamLimits

0x1f40,	// (0x0005e3d1) list_medium_line_x2_t4_g4_t2

0x1f56,	// (0x0005e3e7) list_medium_line_x2_t4_g4_t3_ParamLimits

0x1f56,	// (0x0005e3e7) list_medium_line_x2_t4_g4_t3

0x1f6b,	// (0x0005e3fc) list_medium_line_x2_t4_g4_t4_ParamLimits

0x1f6b,	// (0x0005e3fc) list_medium_line_x2_t4_g4_t4

0x0003,

0xf25b,	// (0x0006b6ec) list_medium_line_x2_t4_g4_t_ParamLimits

0xf25b,	// (0x0006b6ec) list_medium_line_x2_t4_g4_t

0x1e68,	// (0x0005e2f9) list_medium_line_x2_t2_g4_g1_ParamLimits

0x1e68,	// (0x0005e2f9) list_medium_line_x2_t2_g4_g1

0x1f0e,	// (0x0005e39f) list_medium_line_x2_t2_g4_g2_ParamLimits

0x1f0e,	// (0x0005e39f) list_medium_line_x2_t2_g4_g2

0x1e74,	// (0x0005e305) list_medium_line_x2_t2_g4_g3_ParamLimits

0x1e74,	// (0x0005e305) list_medium_line_x2_t2_g4_g3

0x1e80,	// (0x0005e311) list_medium_line_x2_t2_g4_g4_ParamLimits

0x1e80,	// (0x0005e311) list_medium_line_x2_t2_g4_g4

0x0003,

0xf2c2,	// (0x0006b753) list_medium_line_x2_t2_g4_g_ParamLimits

0xf2c2,	// (0x0006b753) list_medium_line_x2_t2_g4_g

0x30f4,	// (0x0005f585) list_medium_line_x2_t2_g4_t1_ParamLimits

0x30f4,	// (0x0005f585) list_medium_line_x2_t2_g4_t1

0x1eb3,	// (0x0005e344) list_medium_line_x2_t2_g4_t2_ParamLimits

0x1eb3,	// (0x0005e344) list_medium_line_x2_t2_g4_t2

0x0001,

0xf2cb,	// (0x0006b75c) list_medium_line_x2_t2_g4_t_ParamLimits

0xf2cb,	// (0x0006b75c) list_medium_line_x2_t2_g4_t

0x1e68,	// (0x0005e2f9) list_medium_line_x2_t2_g3_g1_ParamLimits

0x1e68,	// (0x0005e2f9) list_medium_line_x2_t2_g3_g1

0x1e74,	// (0x0005e305) list_medium_line_x2_t2_g3_g2_ParamLimits

0x1e74,	// (0x0005e305) list_medium_line_x2_t2_g3_g2

0x1e80,	// (0x0005e311) list_medium_line_x2_t2_g3_g3_ParamLimits

0x1e80,	// (0x0005e311) list_medium_line_x2_t2_g3_g3

0x0002,

0xf238,	// (0x0006b6c9) list_medium_line_x2_t2_g3_g_ParamLimits

0xf238,	// (0x0006b6c9) list_medium_line_x2_t2_g3_g

0x3109,	// (0x0005f59a) list_medium_line_x2_t2_g3_t1_ParamLimits

0x3109,	// (0x0005f59a) list_medium_line_x2_t2_g3_t1

0x1eb3,	// (0x0005e344) list_medium_line_x2_t2_g3_t2_ParamLimits

0x1eb3,	// (0x0005e344) list_medium_line_x2_t2_g3_t2

0x0001,

0xf2d0,	// (0x0006b761) list_medium_line_x2_t2_g3_t_ParamLimits

0xf2d0,	// (0x0006b761) list_medium_line_x2_t2_g3_t

0x330c,	// (0x0005f79d) main_sp_fs_list_pane_ParamLimits

0x330c,	// (0x0005f79d) main_sp_fs_list_pane

0x3318,	// (0x0005f7a9) sp_fs_scroll_pane_ParamLimits

0x3318,	// (0x0005f7a9) sp_fs_scroll_pane

0x3324,	// (0x0005f7b5) list_medium_line_x2_t3_t1

0x3334,	// (0x0005f7c5) list_medium_line_x2_t3_t2

0x3342,	// (0x0005f7d3) list_medium_line_x2_t3_t3

0x0002,

0xf31b,	// (0x0006b7ac) list_medium_line_x2_t3_t

0x3350,	// (0x0005f7e1) list_medium_line_x3_t4_t1

0x3360,	// (0x0005f7f1) list_medium_line_x3_t4_t2

0x336e,	// (0x0005f7ff) list_medium_line_x3_t4_t3

0x3342,	// (0x0005f7d3) list_medium_line_x3_t4_t4

0x0003,

0xf322,	// (0x0006b7b3) list_medium_line_x3_t4_t

0x337c,	// (0x0005f80d) list_medium_line_x4_t5_t1

0x338c,	// (0x0005f81d) list_medium_line_x4_t5_t2

0x336e,	// (0x0005f7ff) list_medium_line_x4_t5_t3

0x339a,	// (0x0005f82b) list_medium_line_x4_t5_t4

0x3342,	// (0x0005f7d3) list_medium_line_x4_t5_t5

0x0004,

0xf32b,	// (0x0006b7bc) list_medium_line_x4_t5_t

0x1e68,	// (0x0005e2f9) list_medium_line_t4_g4_g1_ParamLimits

0x1e68,	// (0x0005e2f9) list_medium_line_t4_g4_g1

0x1f1a,	// (0x0005e3ab) list_medium_line_t4_g4_g2_ParamLimits

0x1f1a,	// (0x0005e3ab) list_medium_line_t4_g4_g2

0x33a8,	// (0x0005f839) list_medium_line_t4_g4_g3_ParamLimits

0x33a8,	// (0x0005f839) list_medium_line_t4_g4_g3

0x1e80,	// (0x0005e311) list_medium_line_t4_g4_g4_ParamLimits

0x1e80,	// (0x0005e311) list_medium_line_t4_g4_g4

0x0003,

0xf336,	// (0x0006b7c7) list_medium_line_t4_g4_g_ParamLimits

0xf336,	// (0x0006b7c7) list_medium_line_t4_g4_g

0x33b4,	// (0x0005f845) list_medium_line_t4_g4_t1_ParamLimits

0x33b4,	// (0x0005f845) list_medium_line_t4_g4_t1

0x33c9,	// (0x0005f85a) list_medium_line_t4_g4_t2_ParamLimits

0x33c9,	// (0x0005f85a) list_medium_line_t4_g4_t2

0x33df,	// (0x0005f870) list_medium_line_t4_g4_t3_ParamLimits

0x33df,	// (0x0005f870) list_medium_line_t4_g4_t3

0x1eb3,	// (0x0005e344) list_medium_line_t4_g4_t4_ParamLimits

0x1eb3,	// (0x0005e344) list_medium_line_t4_g4_t4

0x0003,

0xf33f,	// (0x0006b7d0) list_medium_line_t4_g4_t_ParamLimits

0xf33f,	// (0x0006b7d0) list_medium_line_t4_g4_t

0x3500,	// (0x0005f991) chi_dic_find_pane_g1

0x43ee,	// (0x0006087f) main_tport_pane

0x6df8,	// (0x00063289) list_medium_line_plain_t1

0x6ed8,	// (0x00063369) list_medium_line_t2_g2_g1_ParamLimits

0x6ed8,	// (0x00063369) list_medium_line_t2_g2_g1

0x6ee4,	// (0x00063375) list_medium_line_t2_g2_g2_ParamLimits

0x6ee4,	// (0x00063375) list_medium_line_t2_g2_g2

0x0001,

0xf840,	// (0x0006bcd1) list_medium_line_t2_g2_g_ParamLimits

0xf840,	// (0x0006bcd1) list_medium_line_t2_g2_g

0x6ef0,	// (0x00063381) list_medium_line_t2_g2_t1_ParamLimits

0x6ef0,	// (0x00063381) list_medium_line_t2_g2_t1

0x6f0a,	// (0x0006339b) list_medium_line_t2_g2_t2_ParamLimits

0x6f0a,	// (0x0006339b) list_medium_line_t2_g2_t2

0x0001,

0xf845,	// (0x0006bcd6) list_medium_line_t2_g2_t_ParamLimits

0xf845,	// (0x0006bcd6) list_medium_line_t2_g2_t

0xa134,	// (0x000665c5) aid_sp_fs_list_icon_a_sm

0xa13c,	// (0x000665cd) aid_sp_fs_list_icon_d

0xa144,	// (0x000665d5) aid_sp_fs_text_primary

0xdc0d,	// (0x0006a09e) aid_sp_fs_text_secondary

0x759e,	// (0x00063a2f) list_medium_line

0x759e,	// (0x00063a2f) list_medium_line_g2

0x759e,	// (0x00063a2f) list_medium_line_g3

0x759e,	// (0x00063a2f) list_medium_line_plain

0x759e,	// (0x00063a2f) list_medium_line_plain_t2

0x759e,	// (0x00063a2f) list_medium_line_plain_t3

0x759e,	// (0x00063a2f) list_medium_line_right_icon

0x759e,	// (0x00063a2f) list_medium_line_right_iconx2

0x759e,	// (0x00063a2f) list_medium_line_t2

0x759e,	// (0x00063a2f) list_medium_line_t2_g2

0x759e,	// (0x00063a2f) list_medium_line_t2_g3

0x759e,	// (0x00063a2f) list_medium_line_t2_right_icon

0x759e,	// (0x00063a2f) list_medium_line_t2_right_iconx2

0x759e,	// (0x00063a2f) list_medium_line_t3

0x759e,	// (0x00063a2f) list_medium_line_t3_g2

0x759e,	// (0x00063a2f) list_medium_line_t3_g3

0x759e,	// (0x00063a2f) list_medium_line_t3_right_iconx2

0x75a7,	// (0x00063a38) list_medium_line_t4_g4

0x75b0,	// (0x00063a41) list_medium_line_x2

0x75b0,	// (0x00063a41) list_medium_line_x2_t2_g2

0x75b0,	// (0x00063a41) list_medium_line_x2_t2_g3

0x75b0,	// (0x00063a41) list_medium_line_x2_t2_g4

0x75b0,	// (0x00063a41) list_medium_line_x2_t3

0x75b0,	// (0x00063a41) list_medium_line_x2_t3_g2

0x75b0,	// (0x00063a41) list_medium_line_x2_t3_g3

0x75b0,	// (0x00063a41) list_medium_line_x2_t3_g4

0x75b0,	// (0x00063a41) list_medium_line_x2_t4_g2

0x75b0,	// (0x00063a41) list_medium_line_x2_t4_g4

0x75b9,	// (0x00063a4a) list_medium_line_x3

0x75b9,	// (0x00063a4a) list_medium_line_x3_t4

0x75b9,	// (0x00063a4a) list_medium_line_x3_t4_g4

0x75a7,	// (0x00063a38) list_medium_line_x4_t4

0x75a7,	// (0x00063a38) list_medium_line_x4_t4_g7

0x75a7,	// (0x00063a38) list_medium_line_x4_t5

0x75c2,	// (0x00063a53) list_single_fs_dyc_pane_ParamLimits

0x75c2,	// (0x00063a53) list_single_fs_dyc_pane

0x1e68,	// (0x0005e2f9) list_medium_line_x4_t4_g7_g1_ParamLimits

0x1e68,	// (0x0005e2f9) list_medium_line_x4_t4_g7_g1

0x7d1d,	// (0x000641ae) list_medium_line_x4_t4_g7_g2_ParamLimits

0x7d1d,	// (0x000641ae) list_medium_line_x4_t4_g7_g2

0x7d29,	// (0x000641ba) list_medium_line_x4_t4_g7_g3_ParamLimits

0x7d29,	// (0x000641ba) list_medium_line_x4_t4_g7_g3

0x7d38,	// (0x000641c9) list_medium_line_x4_t4_g7_g4_ParamLimits

0x7d38,	// (0x000641c9) list_medium_line_x4_t4_g7_g4

0x7d44,	// (0x000641d5) list_medium_line_x4_t4_g7_g5_ParamLimits

0x7d44,	// (0x000641d5) list_medium_line_x4_t4_g7_g5

0x7d53,	// (0x000641e4) list_medium_line_x4_t4_g7_g6_ParamLimits

0x7d53,	// (0x000641e4) list_medium_line_x4_t4_g7_g6

0x7d62,	// (0x000641f3) list_medium_line_x4_t4_g7_g7_ParamLimits

0x7d62,	// (0x000641f3) list_medium_line_x4_t4_g7_g7

0x0006,

0xf9db,	// (0x0006be6c) list_medium_line_x4_t4_g7_g_ParamLimits

0xf9db,	// (0x0006be6c) list_medium_line_x4_t4_g7_g

0x7d6e,	// (0x000641ff) list_medium_line_x4_t4_g7_t1_ParamLimits

0x7d6e,	// (0x000641ff) list_medium_line_x4_t4_g7_t1

0x7d83,	// (0x00064214) list_medium_line_x4_t4_g7_t2_ParamLimits

0x7d83,	// (0x00064214) list_medium_line_x4_t4_g7_t2

0x7d98,	// (0x00064229) list_medium_line_x4_t4_g7_t3_ParamLimits

0x7d98,	// (0x00064229) list_medium_line_x4_t4_g7_t3

0x7dad,	// (0x0006423e) list_medium_line_x4_t4_g7_t4_ParamLimits

0x7dad,	// (0x0006423e) list_medium_line_x4_t4_g7_t4

0x7dbf,	// (0x00064250) list_medium_line_x4_t4_g7_t5_ParamLimits

0x7dbf,	// (0x00064250) list_medium_line_x4_t4_g7_t5

0x0004,

0xf9ea,	// (0x0006be7b) list_medium_line_x4_t4_g7_t_ParamLimits

0xf9ea,	// (0x0006be7b) list_medium_line_x4_t4_g7_t

0x7dd1,	// (0x00064262) list_single_dyc_row_pane_ParamLimits

0x7dd1,	// (0x00064262) list_single_dyc_row_pane

0x8461,	// (0x000648f2) call5_gesture_pane_ParamLimits

0x8461,	// (0x000648f2) call5_gesture_pane

0x8495,	// (0x00064926) call5_windows_pane_ParamLimits

0x8495,	// (0x00064926) call5_windows_pane

0x850c,	// (0x0006499d) call5_swipe_1_pane_cp_ParamLimits

0x850c,	// (0x0006499d) call5_swipe_1_pane_cp

0x8518,	// (0x000649a9) call5_swipe_2_pane_cp_ParamLimits

0x8518,	// (0x000649a9) call5_swipe_2_pane_cp

0xa9c4,	// (0x00066e55) call5_image_pane_cp

0x8524,	// (0x000649b5) popup_call5_audio_first_window_cp_ParamLimits

0x8524,	// (0x000649b5) popup_call5_audio_first_window_cp

0xe697,	// (0x0006ab28) call5_swipe_1_pane_g1_cp_ParamLimits

0xe697,	// (0x0006ab28) call5_swipe_1_pane_g1_cp

0xe6d7,	// (0x0006ab68) call5_swipe_1_pane_g2_cp

0xe6b0,	// (0x0006ab41) call5_swipe_1_pane_t1_cp_ParamLimits

0xe6b0,	// (0x0006ab41) call5_swipe_1_pane_t1_cp

0xe697,	// (0x0006ab28) call5_swipe_2_pane_g1_cp_ParamLimits

0xe697,	// (0x0006ab28) call5_swipe_2_pane_g1_cp

0xe6df,	// (0x0006ab70) call5_swipe_2_pane_g2_cp

0xe6e7,	// (0x0006ab78) call5_swipe_2_pane_t1_cp_ParamLimits

0xe6e7,	// (0x0006ab78) call5_swipe_2_pane_t1_cp

0xa708,	// (0x00066b99) main_sp_fs_email_pane

0xe6fc,	// (0x0006ab8d) main_sp_fs_listscroll_pane_te

0xa14d,	// (0x000665de) popup_sp_fs_action_menu_pane_ParamLimits

0xa14d,	// (0x000665de) popup_sp_fs_action_menu_pane

0xcc58,	// (0x000690e9) bg_sp_fs_ctrlbar_pane_g1

0xe705,	// (0x0006ab96) bg_sp_fs_ctrlbar_ddmenu_pane_g1

0xe70e,	// (0x0006ab9f) bg_sp_fs_ctrlbar_ddmenu_pane_g2

0xe717,	// (0x0006aba8) bg_sp_fs_ctrlbar_ddmenu_pane_g3

0xcc58,	// (0x000690e9) bg_sp_fs_ctrlbar_ddmenu_pane_g4

0x0003,

0x0a6b,	// (0x0005cefc) bg_sp_fs_ctrlbar_ddmenu_pane_g

0xca3d,	// (0x00068ece) bg_sp_fs_ctrlbar_ddmenu_pane_ParamLimits

0xca3d,	// (0x00068ece) bg_sp_fs_ctrlbar_ddmenu_pane

0xe720,	// (0x0006abb1) main_sp_fs_ctrlbar_ddmenu_pane_g1_ParamLimits

0xe720,	// (0x0006abb1) main_sp_fs_ctrlbar_ddmenu_pane_g1

0xe72c,	// (0x0006abbd) main_sp_fs_ctrlbar_ddmenu_pane_g2_ParamLimits

0xe72c,	// (0x0006abbd) main_sp_fs_ctrlbar_ddmenu_pane_g2

0x0001,

0x0a74,	// (0x0005cf05) main_sp_fs_ctrlbar_ddmenu_pane_g_ParamLimits

0x0a74,	// (0x0005cf05) main_sp_fs_ctrlbar_ddmenu_pane_g

0xe738,	// (0x0006abc9) main_sp_fs_ctrlbar_ddmenu_pane_t1_ParamLimits

0xe738,	// (0x0006abc9) main_sp_fs_ctrlbar_ddmenu_pane_t1

0x8532,	// (0x000649c3) list_medium_line_t2_right_icon_g1

0x853a,	// (0x000649cb) list_medium_line_t2_right_icon_t1

0x854a,	// (0x000649db) list_medium_line_t2_right_icon_t2

0x0001,

0xfa5c,	// (0x0006beed) list_medium_line_t2_right_icon_t

0xc850,	// (0x00068ce1) bg_sp_fs_ctrlbar_pane_ParamLimits

0xc850,	// (0x00068ce1) bg_sp_fs_ctrlbar_pane

0x859b,	// (0x00064a2c) main_sp_fs_ctrlbar_button_pane_cp01

0x85a3,	// (0x00064a34) main_sp_fs_ctrlbar_ddmenu_pane

0xe78a,	// (0x0006ac1b) main_sp_fs_ctrlbar_pane_g1

0xe796,	// (0x0006ac27) main_sp_fs_ctrlbar_pane_g2

0x0001,

0x0a7e,	// (0x0005cf0f) main_sp_fs_ctrlbar_pane_g

0xe7a2,	// (0x0006ac33) main_sp_fs_ctrlbar_pane_t1

0x85ad,	// (0x00064a3e) main_sp_fs_ctrlbar_pane

0x85c3,	// (0x00064a54) main_sp_fs_listscroll_pane_te_cp01

0x85d4,	// (0x00064a65) popup_sp_fs_action_menu_pane_cp01_ParamLimits

0x85d4,	// (0x00064a65) popup_sp_fs_action_menu_pane_cp01

0xa708,	// (0x00066b99) bg_sp_fs_highlight_list_pane_cp01_ParamLimits

0xa708,	// (0x00066b99) bg_sp_fs_highlight_list_pane_cp01

0xa18f,	// (0x00066620) sp_fs_action_menu_list_gene_pane_g1_ParamLimits

0xa18f,	// (0x00066620) sp_fs_action_menu_list_gene_pane_g1

0xe7d2,	// (0x0006ac63) sp_fs_action_menu_list_gene_pane_g2_ParamLimits

0xe7d2,	// (0x0006ac63) sp_fs_action_menu_list_gene_pane_g2

0x0001,

0xfa61,	// (0x0006bef2) sp_fs_action_menu_list_gene_pane_g_ParamLimits

0xfa61,	// (0x0006bef2) sp_fs_action_menu_list_gene_pane_g

0xa19e,	// (0x0006662f) sp_fs_action_menu_list_gene_pane_t1_ParamLimits

0xa19e,	// (0x0006662f) sp_fs_action_menu_list_gene_pane_t1

0xa1b6,	// (0x00066647) sp_fs_action_menu_list_gene_pane_ParamLimits

0xa1b6,	// (0x00066647) sp_fs_action_menu_list_gene_pane

0xe7df,	// (0x0006ac70) popup_sp_fs_action_menu_bg_pane_ParamLimits

0xe7df,	// (0x0006ac70) popup_sp_fs_action_menu_bg_pane

0xa1d5,	// (0x00066666) sp_fs_action_menu_list_pane_ParamLimits

0xa1d5,	// (0x00066666) sp_fs_action_menu_list_pane

0xa1f5,	// (0x00066686) sp_fs_scroll_pane_cp01_ParamLimits

0xa1f5,	// (0x00066686) sp_fs_scroll_pane_cp01

0x85fe,	// (0x00064a8f) list_medium_line_plain_t2_t1

0x860e,	// (0x00064a9f) list_medium_line_plain_t2_t2

0x0001,

0xfa66,	// (0x0006bef7) list_medium_line_plain_t2_t

0x861c,	// (0x00064aad) list_medium_line_plain_t3_t1

0x862c,	// (0x00064abd) list_medium_line_plain_t3_t2

0x863a,	// (0x00064acb) list_medium_line_plain_t3_t3

0x0002,

0xfa6b,	// (0x0006befc) list_medium_line_plain_t3_t

0x1e68,	// (0x0005e2f9) list_medium_line_x2_t2_g2_g1_ParamLimits

0x1e68,	// (0x0005e2f9) list_medium_line_x2_t2_g2_g1

0x1e80,	// (0x0005e311) list_medium_line_x2_t2_g2_g2_ParamLimits

0x1e80,	// (0x0005e311) list_medium_line_x2_t2_g2_g2

0x0001,

0xf246,	// (0x0006b6d7) list_medium_line_x2_t2_g2_g_ParamLimits

0xf246,	// (0x0006b6d7) list_medium_line_x2_t2_g2_g

0x33b4,	// (0x0005f845) list_medium_line_x2_t2_g2_t1_ParamLimits

0x33b4,	// (0x0005f845) list_medium_line_x2_t2_g2_t1

0x1eb3,	// (0x0005e344) list_medium_line_x2_t2_g2_t2_ParamLimits

0x1eb3,	// (0x0005e344) list_medium_line_x2_t2_g2_t2

0x0001,

0xfa72,	// (0x0006bf03) list_medium_line_x2_t2_g2_t_ParamLimits

0xfa72,	// (0x0006bf03) list_medium_line_x2_t2_g2_t

0x1e68,	// (0x0005e2f9) list_medium_line_x2_t4_g2_g1_ParamLimits

0x1e68,	// (0x0005e2f9) list_medium_line_x2_t4_g2_g1

0x8648,	// (0x00064ad9) list_medium_line_x2_t4_g2_g2_ParamLimits

0x8648,	// (0x00064ad9) list_medium_line_x2_t4_g2_g2

0x0001,

0xfa77,	// (0x0006bf08) list_medium_line_x2_t4_g2_g_ParamLimits

0xfa77,	// (0x0006bf08) list_medium_line_x2_t4_g2_g

0x865a,	// (0x00064aeb) list_medium_line_x2_t4_g2_t1_ParamLimits

0x865a,	// (0x00064aeb) list_medium_line_x2_t4_g2_t1

0x8671,	// (0x00064b02) list_medium_line_x2_t4_g2_t2_ParamLimits

0x8671,	// (0x00064b02) list_medium_line_x2_t4_g2_t2

0x8686,	// (0x00064b17) list_medium_line_x2_t4_g2_t3_ParamLimits

0x8686,	// (0x00064b17) list_medium_line_x2_t4_g2_t3

0x1eb3,	// (0x0005e344) list_medium_line_x2_t4_g2_t4_ParamLimits

0x1eb3,	// (0x0005e344) list_medium_line_x2_t4_g2_t4

0x0003,

0xfa7c,	// (0x0006bf0d) list_medium_line_x2_t4_g2_t_ParamLimits

0xfa7c,	// (0x0006bf0d) list_medium_line_x2_t4_g2_t

0x8698,	// (0x00064b29) list_medium_line_t3_right_iconx2_g1

0x8532,	// (0x000649c3) list_medium_line_t3_right_iconx2_g2

0x86a0,	// (0x00064b31) list_medium_line_t3_right_iconx2_g3

0x0002,

0xfa85,	// (0x0006bf16) list_medium_line_t3_right_iconx2_g

0x86a8,	// (0x00064b39) list_medium_line_t3_right_iconx2_t1

0x86b8,	// (0x00064b49) list_medium_line_t3_right_iconx2_t2

0x0001,

0xfa8c,	// (0x0006bf1d) list_medium_line_t3_right_iconx2_t

0x1e68,	// (0x0005e2f9) list_medium_line_x3_t4_g4_g1_ParamLimits

0x1e68,	// (0x0005e2f9) list_medium_line_x3_t4_g4_g1

0x1e74,	// (0x0005e305) list_medium_line_x3_t4_g4_g2_ParamLimits

0x1e74,	// (0x0005e305) list_medium_line_x3_t4_g4_g2

0x1f1a,	// (0x0005e3ab) list_medium_line_x3_t4_g4_g3_ParamLimits

0x1f1a,	// (0x0005e3ab) list_medium_line_x3_t4_g4_g3

0x86c6,	// (0x00064b57) list_medium_line_x3_t4_g4_g4_ParamLimits

0x86c6,	// (0x00064b57) list_medium_line_x3_t4_g4_g4

0x0003,

0xfa91,	// (0x0006bf22) list_medium_line_x3_t4_g4_g_ParamLimits

0xfa91,	// (0x0006bf22) list_medium_line_x3_t4_g4_g

0x86d2,	// (0x00064b63) list_medium_line_x3_t4_g4_t1_ParamLimits

0x86d2,	// (0x00064b63) list_medium_line_x3_t4_g4_t1

0x86e9,	// (0x00064b7a) list_medium_line_x3_t4_g4_t2_ParamLimits

0x86e9,	// (0x00064b7a) list_medium_line_x3_t4_g4_t2

0x86fe,	// (0x00064b8f) list_medium_line_x3_t4_g4_t3_ParamLimits

0x86fe,	// (0x00064b8f) list_medium_line_x3_t4_g4_t3

0x8713,	// (0x00064ba4) list_medium_line_x3_t4_g4_t4_ParamLimits

0x8713,	// (0x00064ba4) list_medium_line_x3_t4_g4_t4

0x0003,

0xfa9a,	// (0x0006bf2b) list_medium_line_x3_t4_g4_t_ParamLimits

0xfa9a,	// (0x0006bf2b) list_medium_line_x3_t4_g4_t

0x8730,	// (0x00064bc1) list_single_dyc_row_text_pane_t1_ParamLimits

0x8730,	// (0x00064bc1) list_single_dyc_row_text_pane_t1

0x8767,	// (0x00064bf8) list_single_dyc_row_text_pane_t2_ParamLimits

0x8767,	// (0x00064bf8) list_single_dyc_row_text_pane_t2

0xa21b,	// (0x000666ac) list_single_dyc_row_text_pane_t3_ParamLimits

0xa21b,	// (0x000666ac) list_single_dyc_row_text_pane_t3

0x0005,

0xfaa3,	// (0x0006bf34) list_single_dyc_row_text_pane_t_ParamLimits

0xfaa3,	// (0x0006bf34) list_single_dyc_row_text_pane_t

0xa23f,	// (0x000666d0) list_single_dyc_row_pane_g1_ParamLimits

0xa23f,	// (0x000666d0) list_single_dyc_row_pane_g1

0xa24b,	// (0x000666dc) list_single_dyc_row_pane_g2_ParamLimits

0xa24b,	// (0x000666dc) list_single_dyc_row_pane_g2

0xa257,	// (0x000666e8) list_single_dyc_row_pane_g3_ParamLimits

0xa257,	// (0x000666e8) list_single_dyc_row_pane_g3

0xa263,	// (0x000666f4) list_single_dyc_row_pane_g4_ParamLimits

0xa263,	// (0x000666f4) list_single_dyc_row_pane_g4

0x0003,

0xfab0,	// (0x0006bf41) list_single_dyc_row_pane_g_ParamLimits

0xfab0,	// (0x0006bf41) list_single_dyc_row_pane_g

0xa26f,	// (0x00066700) list_single_dyc_row_text_pane_ParamLimits

0xa26f,	// (0x00066700) list_single_dyc_row_text_pane

0x9acd,	// (0x00065f5e) bg_sp_fs_scroll_pane

0xe7ed,	// (0x0006ac7e) thumb_sp_fs_scroll_pane

0x6ed8,	// (0x00063369) list_medium_line_g1_ParamLimits

0x6ed8,	// (0x00063369) list_medium_line_g1

0x888a,	// (0x00064d1b) list_medium_line_t1_ParamLimits

0x888a,	// (0x00064d1b) list_medium_line_t1

0x1e68,	// (0x0005e2f9) list_medium_line_x2_g1_ParamLimits

0x1e68,	// (0x0005e2f9) list_medium_line_x2_g1

0x1e74,	// (0x0005e305) list_medium_line_x2_g2_ParamLimits

0x1e74,	// (0x0005e305) list_medium_line_x2_g2

0x0001,

0xfab9,	// (0x0006bf4a) list_medium_line_x2_g_ParamLimits

0xfab9,	// (0x0006bf4a) list_medium_line_x2_g

0xa28e,	// (0x0006671f) list_medium_line_x2_t1_ParamLimits

0xa28e,	// (0x0006671f) list_medium_line_x2_t1

0x1e68,	// (0x0005e2f9) list_medium_line_x3_g1_ParamLimits

0x1e68,	// (0x0005e2f9) list_medium_line_x3_g1

0x1e74,	// (0x0005e305) list_medium_line_x3_g2_ParamLimits

0x1e74,	// (0x0005e305) list_medium_line_x3_g2

0x0001,

0xfab9,	// (0x0006bf4a) list_medium_line_x3_g_ParamLimits

0xfab9,	// (0x0006bf4a) list_medium_line_x3_g

0xa28e,	// (0x0006671f) list_medium_line_x3_t1_ParamLimits

0xa28e,	// (0x0006671f) list_medium_line_x3_t1

0xe7f6,	// (0x0006ac87) thumb_sp_fs_scroll_pane_g1

0xe7ff,	// (0x0006ac90) thumb_sp_fs_scroll_pane_g2

0xe808,	// (0x0006ac99) thumb_sp_fs_scroll_pane_g3

0x0002,

0x0ae5,	// (0x0005cf76) thumb_sp_fs_scroll_pane_g

0xe7f6,	// (0x0006ac87) bg_sp_fs_scroll_pane_g1

0xe7ff,	// (0x0006ac90) bg_sp_fs_scroll_pane_g2

0xe808,	// (0x0006ac99) bg_sp_fs_scroll_pane_g3

0x0002,

0x0ae5,	// (0x0005cf76) bg_sp_fs_scroll_pane_g

0x1e68,	// (0x0005e2f9) list_medium_line_x2_t3_g4_g1_ParamLimits

0x1e68,	// (0x0005e2f9) list_medium_line_x2_t3_g4_g1

0x1f0e,	// (0x0005e39f) list_medium_line_x2_t3_g4_g2_ParamLimits

0x1f0e,	// (0x0005e39f) list_medium_line_x2_t3_g4_g2

0x1e74,	// (0x0005e305) list_medium_line_x2_t3_g4_g3_ParamLimits

0x1e74,	// (0x0005e305) list_medium_line_x2_t3_g4_g3

0x1e80,	// (0x0005e311) list_medium_line_x2_t3_g4_g4_ParamLimits

0x1e80,	// (0x0005e311) list_medium_line_x2_t3_g4_g4

0x0003,

0xf2c2,	// (0x0006b753) list_medium_line_x2_t3_g4_g_ParamLimits

0xf2c2,	// (0x0006b753) list_medium_line_x2_t3_g4_g

0x889f,	// (0x00064d30) list_medium_line_x2_t3_g4_t1_ParamLimits

0x889f,	// (0x00064d30) list_medium_line_x2_t3_g4_t1

0x88b5,	// (0x00064d46) list_medium_line_x2_t3_g4_t2_ParamLimits

0x88b5,	// (0x00064d46) list_medium_line_x2_t3_g4_t2

0x1eb3,	// (0x0005e344) list_medium_line_x2_t3_g4_t3_ParamLimits

0x1eb3,	// (0x0005e344) list_medium_line_x2_t3_g4_t3

0x0002,

0xfabe,	// (0x0006bf4f) list_medium_line_x2_t3_g4_t_ParamLimits

0xfabe,	// (0x0006bf4f) list_medium_line_x2_t3_g4_t

0x6ed8,	// (0x00063369) list_medium_line_g2_g1_ParamLimits

0x6ed8,	// (0x00063369) list_medium_line_g2_g1

0x6ee4,	// (0x00063375) list_medium_line_g2_g2_ParamLimits

0x6ee4,	// (0x00063375) list_medium_line_g2_g2

0x0001,

0xf840,	// (0x0006bcd1) list_medium_line_g2_g_ParamLimits

0xf840,	// (0x0006bcd1) list_medium_line_g2_g

0x88ce,	// (0x00064d5f) list_medium_line_g2_t1_ParamLimits

0x88ce,	// (0x00064d5f) list_medium_line_g2_t1

0x6ed8,	// (0x00063369) list_medium_line_t3_g2_g1_ParamLimits

0x6ed8,	// (0x00063369) list_medium_line_t3_g2_g1

0x6ee4,	// (0x00063375) list_medium_line_t3_g2_g2_ParamLimits

0x6ee4,	// (0x00063375) list_medium_line_t3_g2_g2

0x0001,

0xf840,	// (0x0006bcd1) list_medium_line_t3_g2_g_ParamLimits

0xf840,	// (0x0006bcd1) list_medium_line_t3_g2_g

0x88e3,	// (0x00064d74) list_medium_line_t3_g2_t1_ParamLimits

0x88e3,	// (0x00064d74) list_medium_line_t3_g2_t1

0x88fa,	// (0x00064d8b) list_medium_line_t3_g2_t2_ParamLimits

0x88fa,	// (0x00064d8b) list_medium_line_t3_g2_t2

0x890f,	// (0x00064da0) list_medium_line_t3_g2_t3_ParamLimits

0x890f,	// (0x00064da0) list_medium_line_t3_g2_t3

0x0002,

0xfac5,	// (0x0006bf56) list_medium_line_t3_g2_t_ParamLimits

0xfac5,	// (0x0006bf56) list_medium_line_t3_g2_t

0x8532,	// (0x000649c3) list_medium_line_right_icon_g1

0x8924,	// (0x00064db5) list_medium_line_right_icon_t1

0x6ed8,	// (0x00063369) list_medium_line_t2_g1_ParamLimits

0x6ed8,	// (0x00063369) list_medium_line_t2_g1

0x8932,	// (0x00064dc3) list_medium_line_t2_t1_ParamLimits

0x8932,	// (0x00064dc3) list_medium_line_t2_t1

0x894c,	// (0x00064ddd) list_medium_line_t2_t2_ParamLimits

0x894c,	// (0x00064ddd) list_medium_line_t2_t2

0x0001,

0xfacc,	// (0x0006bf5d) list_medium_line_t2_t_ParamLimits

0xfacc,	// (0x0006bf5d) list_medium_line_t2_t

0x6ed8,	// (0x00063369) list_medium_line_t3_g1_ParamLimits

0x6ed8,	// (0x00063369) list_medium_line_t3_g1

0x8961,	// (0x00064df2) list_medium_line_t3_t1_ParamLimits

0x8961,	// (0x00064df2) list_medium_line_t3_t1

0x897b,	// (0x00064e0c) list_medium_line_t3_t2_ParamLimits

0x897b,	// (0x00064e0c) list_medium_line_t3_t2

0x8991,	// (0x00064e22) list_medium_line_t3_t3_ParamLimits

0x8991,	// (0x00064e22) list_medium_line_t3_t3

0x0002,

0xfad1,	// (0x0006bf62) list_medium_line_t3_t_ParamLimits

0xfad1,	// (0x0006bf62) list_medium_line_t3_t

0x6ed8,	// (0x00063369) list_medium_line_g3_g1_ParamLimits

0x6ed8,	// (0x00063369) list_medium_line_g3_g1

0x89a6,	// (0x00064e37) list_medium_line_g3_g2_ParamLimits

0x89a6,	// (0x00064e37) list_medium_line_g3_g2

0x6ee4,	// (0x00063375) list_medium_line_g3_g3_ParamLimits

0x6ee4,	// (0x00063375) list_medium_line_g3_g3

0x0002,

0xfad8,	// (0x0006bf69) list_medium_line_g3_g_ParamLimits

0xfad8,	// (0x0006bf69) list_medium_line_g3_g

0x89b2,	// (0x00064e43) list_medium_line_g3_t1_ParamLimits

0x89b2,	// (0x00064e43) list_medium_line_g3_t1

0x6ed8,	// (0x00063369) list_medium_line_t2_g3_g1_ParamLimits

0x6ed8,	// (0x00063369) list_medium_line_t2_g3_g1

0x89a6,	// (0x00064e37) list_medium_line_t2_g3_g2_ParamLimits

0x89a6,	// (0x00064e37) list_medium_line_t2_g3_g2

0x6ee4,	// (0x00063375) list_medium_line_t2_g3_g3_ParamLimits

0x6ee4,	// (0x00063375) list_medium_line_t2_g3_g3

0x0002,

0xfad8,	// (0x0006bf69) list_medium_line_t2_g3_g_ParamLimits

0xfad8,	// (0x0006bf69) list_medium_line_t2_g3_g

0x89c7,	// (0x00064e58) list_medium_line_t2_g3_t1_ParamLimits

0x89c7,	// (0x00064e58) list_medium_line_t2_g3_t1

0x89de,	// (0x00064e6f) list_medium_line_t2_g3_t2_ParamLimits

0x89de,	// (0x00064e6f) list_medium_line_t2_g3_t2

0x0001,

0xfadf,	// (0x0006bf70) list_medium_line_t2_g3_t_ParamLimits

0xfadf,	// (0x0006bf70) list_medium_line_t2_g3_t

0x6ed8,	// (0x00063369) list_medium_line_t3_g3_g1_ParamLimits

0x6ed8,	// (0x00063369) list_medium_line_t3_g3_g1

0x89a6,	// (0x00064e37) list_medium_line_t3_g3_g2_ParamLimits

0x89a6,	// (0x00064e37) list_medium_line_t3_g3_g2

0x6ee4,	// (0x00063375) list_medium_line_t3_g3_g3_ParamLimits

0x6ee4,	// (0x00063375) list_medium_line_t3_g3_g3

0x0002,

0xfad8,	// (0x0006bf69) list_medium_line_t3_g3_g_ParamLimits

0xfad8,	// (0x0006bf69) list_medium_line_t3_g3_g

0x89f3,	// (0x00064e84) list_medium_line_t3_g3_t1_ParamLimits

0x89f3,	// (0x00064e84) list_medium_line_t3_g3_t1

0x8a07,	// (0x00064e98) list_medium_line_t3_g3_t2_ParamLimits

0x8a07,	// (0x00064e98) list_medium_line_t3_g3_t2

0x8a19,	// (0x00064eaa) list_medium_line_t3_g3_t3_ParamLimits

0x8a19,	// (0x00064eaa) list_medium_line_t3_g3_t3

0x0002,

0xfae4,	// (0x0006bf75) list_medium_line_t3_g3_t_ParamLimits

0xfae4,	// (0x0006bf75) list_medium_line_t3_g3_t

0x8698,	// (0x00064b29) list_medium_line_right_iconx2_g1

0x8532,	// (0x000649c3) list_medium_line_right_iconx2_g2

0x0001,

0xfaeb,	// (0x0006bf7c) list_medium_line_right_iconx2_g

0x8a2b,	// (0x00064ebc) list_medium_line_right_iconx2_t1

0x8698,	// (0x00064b29) list_medium_line_t2_right_iconx2_g1

0x8532,	// (0x000649c3) list_medium_line_t2_right_iconx2_g2

0x0001,

0xfaeb,	// (0x0006bf7c) list_medium_line_t2_right_iconx2_g

0x8a39,	// (0x00064eca) list_medium_line_t2_right_iconx2_t1

0x8a49,	// (0x00064eda) list_medium_line_t2_right_iconx2_t2

0x0001,

0xfaf0,	// (0x0006bf81) list_medium_line_t2_right_iconx2_t

0x8a57,	// (0x00064ee8) list_medium_line_x4_t4_t1

0x8a65,	// (0x00064ef6) list_medium_line_x4_t4_t2

0x8a75,	// (0x00064f06) list_medium_line_x4_t4_t3

0x8a85,	// (0x00064f16) list_medium_line_x4_t4_t4

0x0003,

0xfaf5,	// (0x0006bf86) list_medium_line_x4_t4_t

0x8abf,	// (0x00064f50) tport_appsw_pane_ParamLimits

0x8abf,	// (0x00064f50) tport_appsw_pane

0x8acd,	// (0x00064f5e) tport_contact_pane_ParamLimits

0x8acd,	// (0x00064f5e) tport_contact_pane

0x8add,	// (0x00064f6e) tport_listscroll_pane_ParamLimits

0x8add,	// (0x00064f6e) tport_listscroll_pane

0x8aed,	// (0x00064f7e) cell_tport_appsw_pane_ParamLimits

0x8aed,	// (0x00064f7e) cell_tport_appsw_pane

0xcf0b,	// (0x0006939c) tport_appsw_pane_g1_ParamLimits

0xcf0b,	// (0x0006939c) tport_appsw_pane_g1

0xe811,	// (0x0006aca2) tport_contact_pane_g1

0xe81a,	// (0x0006acab) tport_contact_pane_t1

0xe828,	// (0x0006acb9) tport_contact_pane_t2

0x0001,

0x0b2c,	// (0x0005cfbd) tport_contact_pane_t

0xe836,	// (0x0006acc7) list_tport_pane

0xe83f,	// (0x0006acd0) scroll_pane_cp_030

0x8b20,	// (0x00064fb1) cell_tport_appsw_pane_g1

0x8b30,	// (0x00064fc1) cell_tport_appsw_pane_t1

0x8b3e,	// (0x00064fcf) grid_highlight_pane_cp019

0x8b46,	// (0x00064fd7) list_tport_double_graphic_pane_ParamLimits

0x8b46,	// (0x00064fd7) list_tport_double_graphic_pane

0xa708,	// (0x00066b99) list_highlight_pane_cp023_ParamLimits

0xa708,	// (0x00066b99) list_highlight_pane_cp023

0x8b57,	// (0x00064fe8) list_tport_double_graphic_pane_g1_ParamLimits

0x8b57,	// (0x00064fe8) list_tport_double_graphic_pane_g1

0x8b64,	// (0x00064ff5) list_tport_double_graphic_pane_t1_ParamLimits

0x8b64,	// (0x00064ff5) list_tport_double_graphic_pane_t1

0x8b79,	// (0x0006500a) list_tport_double_graphic_pane_t2_ParamLimits

0x8b79,	// (0x0006500a) list_tport_double_graphic_pane_t2

0x0001,

0xfb05,	// (0x0006bf96) list_tport_double_graphic_pane_t_ParamLimits

0xfb05,	// (0x0006bf96) list_tport_double_graphic_pane_t

0x9acd,	// (0x00065f5e) main_cale_note_pane

0x666b,	// (0x00062afc) cell_vitu2_function_top_wide_pane_cp01_ParamLimits

0x666b,	// (0x00062afc) cell_vitu2_function_top_wide_pane_cp01

0x8132,	// (0x000645c3) wait_bar_pane_cp05_ParamLimits

0xa708,	// (0x00066b99) listscroll_cmail_pane

0xe848,	// (0x0006acd9) list_cmail_pane

0x8b8b,	// (0x0006501c) list_cmail_body_pane

0x8bae,	// (0x0006503f) list_single_cmail_header_caption_pane

0x8bda,	// (0x0006506b) list_single_cmail_header_detail_pane_ParamLimits

0x8bda,	// (0x0006506b) list_single_cmail_header_detail_pane

0xe858,	// (0x0006ace9) list_single_cmail_header_caption_pane_t1

0x8c13,	// (0x000650a4) list_single_cmail_header_detail_pane_g1_ParamLimits

0x8c13,	// (0x000650a4) list_single_cmail_header_detail_pane_g1

0xa2a4,	// (0x00066735) list_single_cmail_header_detail_pane_g2_ParamLimits

0xa2a4,	// (0x00066735) list_single_cmail_header_detail_pane_g2

0x0002,

0xfb0a,	// (0x0006bf9b) list_single_cmail_header_detail_pane_g_ParamLimits

0xfb0a,	// (0x0006bf9b) list_single_cmail_header_detail_pane_g

0xa2b0,	// (0x00066741) list_single_cmail_header_detail_pane_t1_ParamLimits

0xa2b0,	// (0x00066741) list_single_cmail_header_detail_pane_t1

0xa310,	// (0x000667a1) list_single_cmail_header_editor_pane_bg_ParamLimits

0xa310,	// (0x000667a1) list_single_cmail_header_editor_pane_bg

0xe32b,	// (0x0006a7bc) list_cmail_body_pane_g1

0xe87c,	// (0x0006ad0d) list_cmail_body_pane_t1

0xd6ad,	// (0x00069b3e) list_single_cmail_header_editor_pane_bg_g1

0xac1d,	// (0x000670ae) list_single_cmail_header_editor_pane_bg_g1_copy1

0xd6bd,	// (0x00069b4e) list_single_cmail_header_editor_pane_bg_g1_copy2

0xd6b5,	// (0x00069b46) list_single_cmail_header_editor_pane_bg_g1_copy3

0xd8e9,	// (0x00069d7a) list_single_cmail_header_editor_pane_bg_g1_copy4

0xd6dd,	// (0x00069b6e) list_single_cmail_header_editor_pane_bg_g1_copy4_copy1

0xd6cd,	// (0x00069b5e) list_single_cmail_header_editor_pane_bg_g1_copy4_copy2

0xd6d5,	// (0x00069b66) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3

0xabfd,	// (0x0006708e) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3_copy1

0x8c29,	// (0x000650ba) calenote_gesture_pane_ParamLimits

0x8c29,	// (0x000650ba) calenote_gesture_pane

0x8c43,	// (0x000650d4) calenote_window_pane_ParamLimits

0x8c43,	// (0x000650d4) calenote_window_pane

0xe88a,	// (0x0006ad1b) popup_note_window_cp01

0x8c5b,	// (0x000650ec) calenote_swipe_1_pane_ParamLimits

0x8c5b,	// (0x000650ec) calenote_swipe_1_pane

0x8518,	// (0x000649a9) calenote_swipe_2_pane_ParamLimits

0x8518,	// (0x000649a9) calenote_swipe_2_pane

0xe697,	// (0x0006ab28) calenote_swipe_1_pane_g1_ParamLimits

0xe697,	// (0x0006ab28) calenote_swipe_1_pane_g1

0xe6a4,	// (0x0006ab35) calenote_swipe_1_pane_g2_ParamLimits

0xe6a4,	// (0x0006ab35) calenote_swipe_1_pane_g2

0x0001,

0x0a61,	// (0x0005cef2) calenote_swipe_1_pane_g_ParamLimits

0x0a61,	// (0x0005cef2) calenote_swipe_1_pane_g

0xe89c,	// (0x0006ad2d) calenote_swipe_1_pane_t1_ParamLimits

0xe89c,	// (0x0006ad2d) calenote_swipe_1_pane_t1

0xe697,	// (0x0006ab28) calenote_swipe_2_pane_g1_ParamLimits

0xe697,	// (0x0006ab28) calenote_swipe_2_pane_g1

0xe8bb,	// (0x0006ad4c) calenote_swipe_2_pane_g2_ParamLimits

0xe8bb,	// (0x0006ad4c) calenote_swipe_2_pane_g2

0x0001,

0x0b49,	// (0x0005cfda) calenote_swipe_2_pane_g_ParamLimits

0x0b49,	// (0x0005cfda) calenote_swipe_2_pane_g

0xe8c7,	// (0x0006ad58) calenote_swipe_2_pane_t1_ParamLimits

0xe8c7,	// (0x0006ad58) calenote_swipe_2_pane_t1

0x9acd,	// (0x00065f5e) main_mup_navstr_pane

0x53c3,	// (0x00061854) main_mup3_pane_t7_ParamLimits

0x53c3,	// (0x00061854) main_mup3_pane_t7

0x5dcd,	// (0x0006225e) main_mp4_pane_g6_ParamLimits

0x5dcd,	// (0x0006225e) main_mp4_pane_g6

0x614d,	// (0x000625de) main_image3_pane_t4_ParamLimits

0x614d,	// (0x000625de) main_image3_pane_t4

0x8c6e,	// (0x000650ff) popup_navstr_preview_pane_ParamLimits

0x8c6e,	// (0x000650ff) popup_navstr_preview_pane

0x8c7a,	// (0x0006510b) scroll_navstr_pane_ParamLimits

0x8c7a,	// (0x0006510b) scroll_navstr_pane

0x9acd,	// (0x00065f5e) bg_popup_preview_window_pane_cp04

0xe8ee,	// (0x0006ad7f) popup_navstr_preview_pane_t1

0x8c86,	// (0x00065117) scroll_navstr_pane_g1_ParamLimits

0x8c86,	// (0x00065117) scroll_navstr_pane_g1

0x8c93,	// (0x00065124) scroll_navstr_pane_t1_ParamLimits

0x8c93,	// (0x00065124) scroll_navstr_pane_t1

0xe893,	// (0x0006ad24) bg_button_pane_cp014

0xe893,	// (0x0006ad24) bg_button_pane_cp030

0x8407,	// (0x00064898) list_double_fisheye_pane_g4_ParamLimits

0x8407,	// (0x00064898) list_double_fisheye_pane_g4

0x8413,	// (0x000648a4) list_double_fisheye_pane_g5_ParamLimits

0x8413,	// (0x000648a4) list_double_fisheye_pane_g5

0xcff8,	// (0x00069489) sp_fs_scroll_pane_cp03

0xe78a,	// (0x0006ac1b) main_sp_fs_ctrlbar_pane_g1_ParamLimits

0xe796,	// (0x0006ac27) main_sp_fs_ctrlbar_pane_g2_ParamLimits

0x0a7e,	// (0x0005cf0f) main_sp_fs_ctrlbar_pane_g_ParamLimits

0xe7a2,	// (0x0006ac33) main_sp_fs_ctrlbar_pane_t1_ParamLimits

0xe850,	// (0x0006ace1) sp_fs_scroll_pane_cp02

0xa903,	// (0x00066d94) popup_sp_fs_calendar_preview_list_single_pane_ParamLimits

0xa903,	// (0x00066d94) popup_sp_fs_calendar_preview_list_single_pane

0x9acd,	// (0x00065f5e) main_cam6_pano_pane

0x43d2,	// (0x00060863) main_mup3_pane_ParamLimits

0x9acd,	// (0x00065f5e) main_phacti_pane

0x8007,	// (0x00064498) bg_button_pane_cp11

0x801f,	// (0x000644b0) main_mobtv_info_pane_g2_ParamLimits

0x801f,	// (0x000644b0) main_mobtv_info_pane_g2

0x0001,

0xfa13,	// (0x0006bea4) main_mobtv_info_pane_g_ParamLimits

0xfa13,	// (0x0006bea4) main_mobtv_info_pane_g

0x81d1,	// (0x00064662) sc_clock_pane_t5_ParamLimits

0x81d1,	// (0x00064662) sc_clock_pane_t5

0x8274,	// (0x00064705) main_radioblah_pane_g1_ParamLimits

0xe5c8,	// (0x0006aa59) main_radioblah_pane_t3_ParamLimits

0xe5c8,	// (0x0006aa59) main_radioblah_pane_t3

0xe5e0,	// (0x0006aa71) main_radioblah_pane_t4_ParamLimits

0xe5e0,	// (0x0006aa71) main_radioblah_pane_t4

0x8292,	// (0x00064723) main_radioblah_text_pane_ParamLimits

0x8292,	// (0x00064723) main_radioblah_text_pane

0x829f,	// (0x00064730) main_radioblah_info_pane_g1_ParamLimits

0x8334,	// (0x000647c5) main_radioblah_info_pane_t4_ParamLimits

0x8334,	// (0x000647c5) main_radioblah_info_pane_t4

0xa708,	// (0x00066b99) main_sp_fs_calendar_pane

0x8ca5,	// (0x00065136) main_phacti_pane_g1

0x8cad,	// (0x0006513e) phacti_note_pane_ParamLimits

0x8cad,	// (0x0006513e) phacti_note_pane

0xe905,	// (0x0006ad96) phacti_term_pane_ParamLimits

0xe905,	// (0x0006ad96) phacti_term_pane

0xe91a,	// (0x0006adab) phacti_note_pane_t1_ParamLimits

0xe91a,	// (0x0006adab) phacti_note_pane_t1

0xa327,	// (0x000667b8) phacti_term_pane_g1

0xa32f,	// (0x000667c0) phacti_term_pane_t1_ParamLimits

0xa32f,	// (0x000667c0) phacti_term_pane_t1

0xe931,	// (0x0006adc2) popup_sp_fs_calendar_preview_list_single_pane_g1

0xe939,	// (0x0006adca) popup_sp_fs_calendar_preview_list_single_pane_g2

0x0001,

0x0b53,	// (0x0005cfe4) popup_sp_fs_calendar_preview_list_single_pane_g

0xe941,	// (0x0006add2) popup_sp_fs_calendar_preview_list_single_pane_t1_ParamLimits

0xe941,	// (0x0006add2) popup_sp_fs_calendar_preview_list_single_pane_t1

0xe957,	// (0x0006ade8) aid_popup_sp_fs_bg_corner_pane

0xcc58,	// (0x000690e9) popup_sp_fs_calendar_preview_bg_pane_g1

0x9acd,	// (0x00065f5e) popup_sp_fs_calendar_preview_bg_pane

0xa359,	// (0x000667ea) popup_sp_fs_calendar_preview_list_pane

0xc850,	// (0x00068ce1) bg_main_sp_fs_cale_pane_ParamLimits

0xc850,	// (0x00068ce1) bg_main_sp_fs_cale_pane

0xa36a,	// (0x000667fb) listscroll_cale_mrui_pane_ParamLimits

0xa36a,	// (0x000667fb) listscroll_cale_mrui_pane

0xa37f,	// (0x00066810) listscroll_sp_fs_schedule_track_pane

0xa388,	// (0x00066819) main_sp_fs_ctrlbar_pane_cp01_ParamLimits

0xa388,	// (0x00066819) main_sp_fs_ctrlbar_pane_cp01

0xe95f,	// (0x0006adf0) main_sp_fs_ribbon_pane

0xa3d7,	// (0x00066868) popup_sp_fs_cale_preview_window

0x8d10,	// (0x000651a1) list_single_sp_fs_schedule_track_pane_ParamLimits

0x8d10,	// (0x000651a1) list_single_sp_fs_schedule_track_pane

0xe9ad,	// (0x0006ae3e) bg_sp_fs_highlight_list_pane_cp03_ParamLimits

0xe9ad,	// (0x0006ae3e) bg_sp_fs_highlight_list_pane_cp03

0x8d33,	// (0x000651c4) list_single_sp_fs_schedule_track_pane_g1_ParamLimits

0x8d33,	// (0x000651c4) list_single_sp_fs_schedule_track_pane_g1

0x8d3f,	// (0x000651d0) list_single_sp_fs_schedule_track_pane_g2_ParamLimits

0x8d3f,	// (0x000651d0) list_single_sp_fs_schedule_track_pane_g2

0x0001,

0xfb1b,	// (0x0006bfac) list_single_sp_fs_schedule_track_pane_g_ParamLimits

0xfb1b,	// (0x0006bfac) list_single_sp_fs_schedule_track_pane_g

0x8d4b,	// (0x000651dc) list_single_sp_fs_schedule_track_pane_t1_ParamLimits

0x8d4b,	// (0x000651dc) list_single_sp_fs_schedule_track_pane_t1

0x8d63,	// (0x000651f4) sp_fs_schedule_track_pane_ParamLimits

0x8d63,	// (0x000651f4) sp_fs_schedule_track_pane

0xe967,	// (0x0006adf8) sp_fs_schedule_track_pane_g1

0xe96f,	// (0x0006ae00) sp_fs_schedule_track_pane_g2

0xe977,	// (0x0006ae08) sp_fs_schedule_track_pane_g3

0xe97f,	// (0x0006ae10) sp_fs_schedule_track_pane_g4

0xe987,	// (0x0006ae18) sp_fs_schedule_track_pane_g5

0x0004,

0x0b5d,	// (0x0005cfee) sp_fs_schedule_track_pane_g

0xd6ad,	// (0x00069b3e) bg_sp_fs_schedule_viewer_highlight_g1

0xac1d,	// (0x000670ae) bg_sp_fs_schedule_viewer_highlight_g2

0xd6b5,	// (0x00069b46) bg_sp_fs_schedule_viewer_highlight_g3

0xd6bd,	// (0x00069b4e) bg_sp_fs_schedule_viewer_highlight_g4

0xd8e9,	// (0x00069d7a) bg_sp_fs_schedule_viewer_highlight_g5

0xd6cd,	// (0x00069b5e) bg_sp_fs_schedule_viewer_highlight_g6

0xd6d5,	// (0x00069b66) bg_sp_fs_schedule_viewer_highlight_g7

0xd6dd,	// (0x00069b6e) bg_sp_fs_schedule_viewer_highlight_g8

0xabfd,	// (0x0006708e) bg_sp_fs_schedule_viewer_highlight_g9

0x0008,

0xfb20,	// (0x0006bfb1) bg_sp_fs_schedule_viewer_highlight_g

0x9acd,	// (0x00065f5e) bg_main_sp_fs_ribbon_pane

0x8d73,	// (0x00065204) main_sp_fs_ribbon_pane_g1

0xe98f,	// (0x0006ae20) main_sp_fs_ribbon_pane_t1

0x8d7c,	// (0x0006520d) main_sp_fs_ribbon_pane_t2

0xe99e,	// (0x0006ae2f) main_sp_fs_ribbon_pane_t3

0x0002,

0xfb33,	// (0x0006bfc4) main_sp_fs_ribbon_pane_t

0xe9bb,	// (0x0006ae4c) main_sp_fs_ribbon_scheduler_pane

0xe9c3,	// (0x0006ae54) bg_main_sp_fs_ribbon_pane_g1

0xe9cc,	// (0x0006ae5d) bg_main_sp_fs_ribbon_pane_g2

0xe9d5,	// (0x0006ae66) bg_main_sp_fs_ribbon_pane_g3

0x0002,

0xfb3a,	// (0x0006bfcb) bg_main_sp_fs_ribbon_pane_g

0xe9dd,	// (0x0006ae6e) main_sp_fs_ribbon_scheduler_pane_g1

0xe9e6,	// (0x0006ae77) main_sp_fs_ribbon_scheduler_pane_g2

0xe9ef,	// (0x0006ae80) main_sp_fs_ribbon_scheduler_pane_g3

0x0002,

0xfb41,	// (0x0006bfd2) main_sp_fs_ribbon_scheduler_pane_g

0xe9f8,	// (0x0006ae89) list_cale_mrui_pane

0x8d8b,	// (0x0006521c) sp_fs_scroll_pane_cp07_ParamLimits

0x8d8b,	// (0x0006521c) sp_fs_scroll_pane_cp07

0x8da7,	// (0x00065238) bg_sp_fs_schedule_viewer_highlight_ParamLimits

0x8da7,	// (0x00065238) bg_sp_fs_schedule_viewer_highlight

0xea05,	// (0x0006ae96) list_single_sp_fs_schedule_track_pane_cp01

0xea0d,	// (0x0006ae9e) list_sp_fs_schedule_track_pane

0xea15,	// (0x0006aea6) sp_fs_scroll_pane_cp06_ParamLimits

0xea15,	// (0x0006aea6) sp_fs_scroll_pane_cp06

0xcc58,	// (0x000690e9) bgmain_sp_fs_calendar_pane_g1

0x8db4,	// (0x00065245) list_single_cale_mrui_pane_ParamLimits

0x8db4,	// (0x00065245) list_single_cale_mrui_pane

0xa3e9,	// (0x0006687a) list_single_cale_mrui_row_pane_ParamLimits

0xa3e9,	// (0x0006687a) list_single_cale_mrui_row_pane

0xa3f6,	// (0x00066887) list_single_cale_mrui_row_pane_g1_ParamLimits

0xa3f6,	// (0x00066887) list_single_cale_mrui_row_pane_g1

0xa42e,	// (0x000668bf) list_single_cale_mrui_row_pane_t1_ParamLimits

0xa42e,	// (0x000668bf) list_single_cale_mrui_row_pane_t1

0x8de5,	// (0x00065276) list_single_cale_mrui_row_pane_t2_ParamLimits

0x8de5,	// (0x00065276) list_single_cale_mrui_row_pane_t2

0xa440,	// (0x000668d1) list_single_cale_mrui_row_pane_t3_ParamLimits

0xa440,	// (0x000668d1) list_single_cale_mrui_row_pane_t3

0xa46f,	// (0x00066900) list_single_cale_mrui_row_pane_t4_ParamLimits

0xa46f,	// (0x00066900) list_single_cale_mrui_row_pane_t4

0x0003,

0xfb4f,	// (0x0006bfe0) list_single_cale_mrui_row_pane_t_ParamLimits

0xfb4f,	// (0x0006bfe0) list_single_cale_mrui_row_pane_t

0x8e4b,	// (0x000652dc) list_single_cmail_header_editor_pane_bg_cp01_ParamLimits

0x8e4b,	// (0x000652dc) list_single_cmail_header_editor_pane_bg_cp01

0x8e6b,	// (0x000652fc) list_single_cmail_header_editor_pane_bg_cp02_ParamLimits

0x8e6b,	// (0x000652fc) list_single_cmail_header_editor_pane_bg_cp02

0x8e87,	// (0x00065318) main_radioblah_text_pane_t1_ParamLimits

0x8e87,	// (0x00065318) main_radioblah_text_pane_t1

0xea34,	// (0x0006aec5) cam6_indi_pane_cp01

0xea3c,	// (0x0006aecd) cam6_mode_pane_cp01

0xea44,	// (0x0006aed5) cam6_pano_pane

0xea4d,	// (0x0006aede) cam6_zoom_pane_cp01

0xea55,	// (0x0006aee6) cam6_pano_image_pane

0xea60,	// (0x0006aef1) cam6_pano_pane_g1

0xe32b,	// (0x0006a7bc) cam6_pano_pane_g2

0xea69,	// (0x0006aefa) cam6_pano_pane_g3

0xea72,	// (0x0006af03) cam6_pano_pane_g4

0xd20f,	// (0x000696a0) cam6_pano_pane_g5

0xea7b,	// (0x0006af0c) cam6_pano_pane_g6

0xea85,	// (0x0006af16) cam6_pano_pane_g7

0xea8d,	// (0x0006af1e) cam6_pano_pane_g8

0xea96,	// (0x0006af27) cam6_pano_pane_g9

0x0008,

0xfb58,	// (0x0006bfe9) cam6_pano_pane_g

0x9acd,	// (0x00065f5e) main_browser_tag_pane

0xe8e6,	// (0x0006ad77) grid_navstr_albumart_pane

0xeaa1,	// (0x0006af32) cell_navstr_albumart_pane_ParamLimits

0xeaa1,	// (0x0006af32) cell_navstr_albumart_pane

0xeac1,	// (0x0006af52) cell_navstr_albumart_pane_g1

0xc621,	// (0x00068ab2) cell_navstr_albumart_pane_g2

0xc631,	// (0x00068ac2) cell_navstr_albumart_pane_g3

0xc629,	// (0x00068aba) cell_navstr_albumart_pane_g4

0x0003,

0xfb6b,	// (0x0006bffc) cell_navstr_albumart_pane_g

0x8ea2,	// (0x00065333) bt_list_pane_ParamLimits

0x8ea2,	// (0x00065333) bt_list_pane

0x8ec3,	// (0x00065354) bt_list_pane_t1

0x8ed2,	// (0x00065363) bt_list_pane_t2

0x0001,

0xfb74,	// (0x0006c005) bt_list_pane_t

0x9acd,	// (0x00065f5e) main_cale_prevew_pane

0x8ee1,	// (0x00065372) popup_cale_preview_window_ParamLimits

0x8ee1,	// (0x00065372) popup_cale_preview_window

0xa708,	// (0x00066b99) bg_popup_preview_window_pane_cp05_ParamLimits

0xa708,	// (0x00066b99) bg_popup_preview_window_pane_cp05

0xeac9,	// (0x0006af5a) list_cale_preview_pane_ParamLimits

0xeac9,	// (0x0006af5a) list_cale_preview_pane

0x8efa,	// (0x0006538b) list_double_cale_preview_pane_ParamLimits

0x8efa,	// (0x0006538b) list_double_cale_preview_pane

0x8f0c,	// (0x0006539d) list_single_cale_preview_pane_ParamLimits

0x8f0c,	// (0x0006539d) list_single_cale_preview_pane

0x8f20,	// (0x000653b1) list_single_cale_preview_pane_g1

0x8f28,	// (0x000653b9) list_single_cale_preview_pane_t1_ParamLimits

0x8f28,	// (0x000653b9) list_single_cale_preview_pane_t1

0x8f3d,	// (0x000653ce) list_double_cale_preview_pane_g1

0x8f45,	// (0x000653d6) list_double_cale_preview_pane_t1_ParamLimits

0x8f45,	// (0x000653d6) list_double_cale_preview_pane_t1

0x8f5a,	// (0x000653eb) list_double_cale_preview_pane_t2_ParamLimits

0x8f5a,	// (0x000653eb) list_double_cale_preview_pane_t2

0x0001,

0xfb79,	// (0x0006c00a) list_double_cale_preview_pane_t_ParamLimits

0xfb79,	// (0x0006c00a) list_double_cale_preview_pane_t

0x9acd,	// (0x00065f5e) main_ezdial_pane

0xa708,	// (0x00066b99) main_sp_fs_email_pane_ParamLimits

0x8558,	// (0x000649e9) cmail_ddmenu_btn01_pane_ParamLimits

0x8558,	// (0x000649e9) cmail_ddmenu_btn01_pane

0x856d,	// (0x000649fe) cmail_ddmenu_btn02_pane_ParamLimits

0x856d,	// (0x000649fe) cmail_ddmenu_btn02_pane

0x8585,	// (0x00064a16) cmail_ddmenu_btn03_pane_ParamLimits

0x8585,	// (0x00064a16) cmail_ddmenu_btn03_pane

0x85ad,	// (0x00064a3e) main_sp_fs_ctrlbar_pane_ParamLimits

0x85c3,	// (0x00064a54) main_sp_fs_listscroll_pane_te_cp01_ParamLimits

0x8b8b,	// (0x0006501c) list_cmail_body_pane_ParamLimits

0xe866,	// (0x0006acf7) bg_button_pane_cp12

0xe86f,	// (0x0006ad00) list_single_cmail_header_detail_pane_g3_ParamLimits

0xe86f,	// (0x0006ad00) list_single_cmail_header_detail_pane_g3

0xa2ec,	// (0x0006677d) list_single_cmail_header_detail_pane_t2_ParamLimits

0xa2ec,	// (0x0006677d) list_single_cmail_header_detail_pane_t2

0x0001,

0xfb11,	// (0x0006bfa2) list_single_cmail_header_detail_pane_t_ParamLimits

0xfb11,	// (0x0006bfa2) list_single_cmail_header_detail_pane_t

0xa344,	// (0x000667d5) phacti_term_pane_t2_ParamLimits

0xa344,	// (0x000667d5) phacti_term_pane_t2

0x0001,

0xfb16,	// (0x0006bfa7) phacti_term_pane_t_ParamLimits

0xfb16,	// (0x0006bfa7) phacti_term_pane_t

0xead5,	// (0x0006af66) aid_size_list_single_double

0x8f72,	// (0x00065403) popup_ezdial_listscroll_window

0x8f96,	// (0x00065427) popup_number_entry_window_cp01

0xa9c4,	// (0x00066e55) bg_popup_call_pane_cp09

0xeae1,	// (0x0006af72) ezdial_list_pane

0xeae9,	// (0x0006af7a) scroll_pane_cp23

0xca3d,	// (0x00068ece) bg_button_pane_cp028_ParamLimits

0xca3d,	// (0x00068ece) bg_button_pane_cp028

0x8fa4,	// (0x00065435) cmail_ddmenu_btn01_pane_g1_ParamLimits

0x8fa4,	// (0x00065435) cmail_ddmenu_btn01_pane_g1

0x8fb4,	// (0x00065445) cmail_ddmenu_btn01_pane_g2_ParamLimits

0x8fb4,	// (0x00065445) cmail_ddmenu_btn01_pane_g2

0x0001,

0xfb7e,	// (0x0006c00f) cmail_ddmenu_btn01_pane_g_ParamLimits

0xfb7e,	// (0x0006c00f) cmail_ddmenu_btn01_pane_g

0xeaf1,	// (0x0006af82) cmail_ddmenu_btn01_pane_t1_ParamLimits

0xeaf1,	// (0x0006af82) cmail_ddmenu_btn01_pane_t1

0xc850,	// (0x00068ce1) bg_button_pane_cp029_ParamLimits

0xc850,	// (0x00068ce1) bg_button_pane_cp029

0x8fb4,	// (0x00065445) cmail_ddmenu_btn02_pane_g1_ParamLimits

0x8fb4,	// (0x00065445) cmail_ddmenu_btn02_pane_g1

0x8fcd,	// (0x0006545e) cmail_ddmenu_btn02_pane_t1_ParamLimits

0x8fcd,	// (0x0006545e) cmail_ddmenu_btn02_pane_t1

0xe9ad,	// (0x0006ae3e) bg_button_pane_cp031_ParamLimits

0xe9ad,	// (0x0006ae3e) bg_button_pane_cp031

0x8fb4,	// (0x00065445) cmail_ddmenu_btn03_pane_g1_ParamLimits

0x8fb4,	// (0x00065445) cmail_ddmenu_btn03_pane_g1

0x8fcd,	// (0x0006545e) cmail_ddmenu_btn03_pane_t1_ParamLimits

0x8fcd,	// (0x0006545e) cmail_ddmenu_btn03_pane_t1

0x5fea,	// (0x0006247b) cell_dialer2_keypad_pane_t1_ParamLimits

0x6004,	// (0x00062495) cell_dialer2_keypad_pane_t1_copy1_ParamLimits

0x6004,	// (0x00062495) cell_dialer2_keypad_pane_t1_copy1

0x7e8c,	// (0x0006431d) ncimui_group_button_pane

0xa708,	// (0x00066b99) main_sp_fs_calendar_pane_ParamLimits

0x8bae,	// (0x0006503f) list_single_cmail_header_caption_pane_ParamLimits

0xa361,	// (0x000667f2) aid_recal_txt_sm_pane

0x9acd,	// (0x00065f5e) mian_recal_day_pane

0xa3d7,	// (0x00066868) popup_sp_fs_cale_preview_window_ParamLimits

0xeb06,	// (0x0006af97) list_recal_day_pane

0xa4b9,	// (0x0006694a) list_single_recal_day_pane_ParamLimits

0xa4b9,	// (0x0006694a) list_single_recal_day_pane

0xeb2d,	// (0x0006afbe) list_single_recal_day_pane_g1_ParamLimits

0xeb2d,	// (0x0006afbe) list_single_recal_day_pane_g1

0xa4cb,	// (0x0006695c) list_single_recal_day_pane_g2_ParamLimits

0xa4cb,	// (0x0006695c) list_single_recal_day_pane_g2

0xa4db,	// (0x0006696c) list_single_recal_day_pane_g3_ParamLimits

0xa4db,	// (0x0006696c) list_single_recal_day_pane_g3

0x8ff1,	// (0x00065482) list_single_recal_day_pane_g4_ParamLimits

0x8ff1,	// (0x00065482) list_single_recal_day_pane_g4

0xa4e7,	// (0x00066978) list_single_recal_day_pane_g5_ParamLimits

0xa4e7,	// (0x00066978) list_single_recal_day_pane_g5

0xa4f7,	// (0x00066988) list_single_recal_day_pane_g6_ParamLimits

0xa4f7,	// (0x00066988) list_single_recal_day_pane_g6

0x0004,

0xfb8d,	// (0x0006c01e) list_single_recal_day_pane_g_ParamLimits

0xfb8d,	// (0x0006c01e) list_single_recal_day_pane_g

0xa50b,	// (0x0006699c) list_single_recal_day_pane_t1

0xa51d,	// (0x000669ae) list_single_recal_day_pane_t2

0x0001,

0xfb98,	// (0x0006c029) list_single_recal_day_pane_t

0x9011,	// (0x000654a2) ncimui_query_button_pane_ParamLimits

0x9011,	// (0x000654a2) ncimui_query_button_pane

0x9021,	// (0x000654b2) ncimui_query_button_pane_t1_ParamLimits

0x9021,	// (0x000654b2) ncimui_query_button_pane_t1

0xeb39,	// (0x0006afca) ncimui_query_button_pane_t2_ParamLimits

0xeb39,	// (0x0006afca) ncimui_query_button_pane_t2

0x0001,

0xfb9d,	// (0x0006c02e) ncimui_query_button_pane_t_ParamLimits

0xfb9d,	// (0x0006c02e) ncimui_query_button_pane_t

0x9034,	// (0x000654c5) query_button_pane_ParamLimits

0x9034,	// (0x000654c5) query_button_pane

0x9acd,	// (0x00065f5e) bg_button_pane_cp0028

0xeb4c,	// (0x0006afdd) query_button_pane_t1

0x43ee,	// (0x0006087f) main_tport_pane_ParamLimits

0x8a95,	// (0x00064f26) bg_popup_window_pane_cp01_ParamLimits

0x8a95,	// (0x00064f26) bg_popup_window_pane_cp01

0x8aa3,	// (0x00064f34) heading_pane_cp08_ParamLimits

0x8aa3,	// (0x00064f34) heading_pane_cp08

0x8ab1,	// (0x00064f42) heading_pane_cp07_ParamLimits

0x8ab1,	// (0x00064f42) heading_pane_cp07

0x8b20,	// (0x00064fb1) cell_tport_appsw_pane_g2

0x0002,

0xfafe,	// (0x0006bf8f) cell_tport_appsw_pane_g

0x9f86,	// (0x00066417) input_candi_list_open_g1

0xade0,	// (0x00067271) list_cale_time_pane_g6_ParamLimits

0xade0,	// (0x00067271) list_cale_time_pane_g6

0x4e6d,	// (0x000612fe) aid_size_touch_calib_1_ParamLimits

0x4e6d,	// (0x000612fe) aid_size_touch_calib_1

0x4e79,	// (0x0006130a) aid_size_touch_calib_2_ParamLimits

0x4e79,	// (0x0006130a) aid_size_touch_calib_2

0x4e87,	// (0x00061318) aid_size_touch_calib_3_ParamLimits

0x4e87,	// (0x00061318) aid_size_touch_calib_3

0x4e97,	// (0x00061328) aid_size_touch_calib_4_ParamLimits

0x4e97,	// (0x00061328) aid_size_touch_calib_4

0x4ea5,	// (0x00061336) main_touch_calib_button_group_pane_ParamLimits

0x4ea5,	// (0x00061336) main_touch_calib_button_group_pane

0x4eb3,	// (0x00061344) main_touch_calib_pane_g1_ParamLimits

0x4ebf,	// (0x00061350) main_touch_calib_pane_g2_ParamLimits

0x4ecb,	// (0x0006135c) main_touch_calib_pane_g3_ParamLimits

0x4ed7,	// (0x00061368) main_touch_calib_pane_g4_ParamLimits

0xf612,	// (0x0006baa3) main_touch_calib_pane_g_ParamLimits

0x4ee3,	// (0x00061374) main_touch_calib_pane_t1_ParamLimits

0x4efc,	// (0x0006138d) main_touch_calib_pane_t2_ParamLimits

0x4f15,	// (0x000613a6) main_touch_calib_pane_t3_ParamLimits

0x4f2b,	// (0x000613bc) main_touch_calib_pane_t4_ParamLimits

0x4f41,	// (0x000613d2) main_touch_calib_pane_t5_ParamLimits

0xf61b,	// (0x0006baac) main_touch_calib_pane_t_ParamLimits

0xcfa6,	// (0x00069437) list_single_fp_cale_pane_g3_ParamLimits

0xcfa6,	// (0x00069437) list_single_fp_cale_pane_g3

0x43d2,	// (0x00060863) bg_button_pane_cp012_ParamLimits

0x43d2,	// (0x00060863) bg_vkb2_func_pane_cp03_ParamLimits

0x6e58,	// (0x000632e9) cell_vitu2_function_top_pane_g1_ParamLimits

0x43d2,	// (0x00060863) bg_vkb2_func_pane_cp04_ParamLimits

0x7e14,	// (0x000642a5) main_ncimui_button_group_pane_ParamLimits

0x7e14,	// (0x000642a5) main_ncimui_button_group_pane

0x7e7a,	// (0x0006430b) main_ncimui_pane_t3_ParamLimits

0x7e7a,	// (0x0006430b) main_ncimui_pane_t3

0xe8fc,	// (0x0006ad8d) phacti_button_group_pane

0xead5,	// (0x0006af66) aid_size_list_single_double_ParamLimits

0x8f72,	// (0x00065403) popup_ezdial_listscroll_window_ParamLimits

0x8f96,	// (0x00065427) popup_number_entry_window_cp01_ParamLimits

0x9041,	// (0x000654d2) phacti_button_pane_ParamLimits

0x9041,	// (0x000654d2) phacti_button_pane

0x9acd,	// (0x00065f5e) bg_button_pane_cp14

0xeb5a,	// (0x0006afeb) phacti_button_pane_t1

0x9052,	// (0x000654e3) main_touch_calib_button_pane_ParamLimits

0x9052,	// (0x000654e3) main_touch_calib_button_pane

0xa7cf,	// (0x00066c60) bg_button_pane_cp18_ParamLimits

0xa7cf,	// (0x00066c60) bg_button_pane_cp18

0xeb68,	// (0x0006aff9) main_touch_calib_button_pane_t1_ParamLimits

0xeb68,	// (0x0006aff9) main_touch_calib_button_pane_t1

0xeb7e,	// (0x0006b00f) main_touch_calib_button_pane_t2_ParamLimits

0xeb7e,	// (0x0006b00f) main_touch_calib_button_pane_t2

0x0001,

0x0bea,	// (0x0005d07b) main_touch_calib_button_pane_t_ParamLimits

0x0bea,	// (0x0005d07b) main_touch_calib_button_pane_t

0x9acd,	// (0x00065f5e) cell_ncimui_button_pane

0x9acd,	// (0x00065f5e) bg_button_pane_cp032

0xeb9c,	// (0x0006b02d) cell_ncimui_button_pane_t1

0x6060,	// (0x000624f1) image3_infobar_pane_ParamLimits

0x6060,	// (0x000624f1) image3_infobar_pane

0x81f3,	// (0x00064684) fs_bigclock_status_pane_ParamLimits

0x81f3,	// (0x00064684) fs_bigclock_status_pane

0x8200,	// (0x00064691) main_fs_bigclock_clock_pane_ParamLimits

0x8200,	// (0x00064691) main_fs_bigclock_clock_pane

0x821a,	// (0x000646ab) main_fs_bigclock_indi_pane_ParamLimits

0x821a,	// (0x000646ab) main_fs_bigclock_indi_pane

0x8242,	// (0x000646d3) main_fs_bigclock_swipe_pane_ParamLimits

0x8242,	// (0x000646d3) main_fs_bigclock_swipe_pane

0x9acd,	// (0x00065f5e) main_fs_clock_dumped_data

0xe438,	// (0x0006a8c9) list_single_fs_bigclock_indicator_pane_g1_ParamLimits

0xe438,	// (0x0006a8c9) list_single_fs_bigclock_indicator_pane_g1

0xe454,	// (0x0006a8e5) list_single_fs_bigclock_indicator_pane_g2_ParamLimits

0xe454,	// (0x0006a8e5) list_single_fs_bigclock_indicator_pane_g2

0xe46e,	// (0x0006a8ff) list_single_fs_bigclock_indicator_pane_g3_ParamLimits

0xe46e,	// (0x0006a8ff) list_single_fs_bigclock_indicator_pane_g3

0xe488,	// (0x0006a919) list_single_fs_bigclock_indicator_pane_g4_ParamLimits

0xe488,	// (0x0006a919) list_single_fs_bigclock_indicator_pane_g4

0x0004,

0x0a12,	// (0x0005cea3) list_single_fs_bigclock_indicator_pane_g_ParamLimits

0x0a12,	// (0x0005cea3) list_single_fs_bigclock_indicator_pane_g

0xe4b3,	// (0x0006a944) list_single_fs_bigclock_indicator_pane_t1_ParamLimits

0xe4b3,	// (0x0006a944) list_single_fs_bigclock_indicator_pane_t1

0xe4db,	// (0x0006a96c) list_single_fs_bigclock_indicator_pane_t2_ParamLimits

0xe4db,	// (0x0006a96c) list_single_fs_bigclock_indicator_pane_t2

0xe503,	// (0x0006a994) list_single_fs_bigclock_indicator_pane_t3_ParamLimits

0xe503,	// (0x0006a994) list_single_fs_bigclock_indicator_pane_t3

0xe52b,	// (0x0006a9bc) list_single_fs_bigclock_indicator_pane_t4_ParamLimits

0xe52b,	// (0x0006a9bc) list_single_fs_bigclock_indicator_pane_t4

0x0004,

0x0a1d,	// (0x0005ceae) list_single_fs_bigclock_indicator_pane_t_ParamLimits

0x0a1d,	// (0x0005ceae) list_single_fs_bigclock_indicator_pane_t

0xebaa,	// (0x0006b03b) image3_infobar_fav_pane_ParamLimits

0xebaa,	// (0x0006b03b) image3_infobar_fav_pane

0xebba,	// (0x0006b04b) image3_infobar_loc_pane_ParamLimits

0xebba,	// (0x0006b04b) image3_infobar_loc_pane

0xebce,	// (0x0006b05f) image3_infobar_time_pane_ParamLimits

0xebce,	// (0x0006b05f) image3_infobar_time_pane

0xcc58,	// (0x000690e9) image3_infobar_time_pane_g1

0xebde,	// (0x0006b06f) image3_infobar_time_pane_t1

0xcc58,	// (0x000690e9) image3_infobar_loc_pane_g1

0xebec,	// (0x0006b07d) image3_infobar_loc_pane_g2

0x0001,

0x0bef,	// (0x0005d080) image3_infobar_loc_pane_g

0xebf4,	// (0x0006b085) image3_infobar_loc_pane_t1

0xcc58,	// (0x000690e9) image3_infobar_fav_pane_g1

0xec02,	// (0x0006b093) image3_infobar_fav_pane_g2

0x0001,

0x0bf4,	// (0x0005d085) image3_infobar_fav_pane_g

0xec0a,	// (0x0006b09b) fs_bigclock_status_battery_pane

0xec13,	// (0x0006b0a4) fs_bigclock_status_signal_pane

0xec1c,	// (0x0006b0ad) fs_bigclock_status_title_pane

0xec25,	// (0x0006b0b6) fs_bigclock_status_signal_pane_g1

0xec2e,	// (0x0006b0bf) fs_bigclock_status_signal_pane_g2

0x0001,

0x0bf9,	// (0x0005d08a) fs_bigclock_status_signal_pane_g

0xec36,	// (0x0006b0c7) fs_bigclock_status_battery_pane_g1

0xec3f,	// (0x0006b0d0) fs_bigclock_status_battery_pane_g2

0x0001,

0x0bfe,	// (0x0005d08f) fs_bigclock_status_battery_pane_g

0xec47,	// (0x0006b0d8) fs_bigclock_status_title_pane_t1

0xcc58,	// (0x000690e9) main_fs_bigclock_clock_pane_g1

0xec55,	// (0x0006b0e6) main_fs_bigclock_clock_pane_g2

0xec5e,	// (0x0006b0ef) main_fs_bigclock_clock_pane_g3

0xec5e,	// (0x0006b0ef) main_fs_bigclock_clock_pane_g4

0x0003,

0x0c03,	// (0x0005d094) main_fs_bigclock_clock_pane_g

0xec66,	// (0x0006b0f7) main_fs_bigclock_clock_pane_t1

0x9062,	// (0x000654f3) main_fs_bigclock_clock_pane_t2

0x0001,

0xfba2,	// (0x0006c033) main_fs_bigclock_clock_pane_t

0xec74,	// (0x0006b105) list_single_fs_bigclock_indicator_pane_ParamLimits

0xec74,	// (0x0006b105) list_single_fs_bigclock_indicator_pane

0xec85,	// (0x0006b116) list_single_fs_bigclock_pane_ParamLimits

0xec85,	// (0x0006b116) list_single_fs_bigclock_pane

0xecab,	// (0x0006b13c) main_fs_bigclock_indicator_pane_t1

0xecba,	// (0x0006b14b) list_single_fs_bigclock_pane_g1

0xecc2,	// (0x0006b153) list_single_fs_bigclock_pane_t1

0xcc58,	// (0x000690e9) main_fs_bigclock_swipe_pane_g1

0xed05,	// (0x0006b196) main_fs_bigclock_swipe_pane_g2

0x0001,

0xfbae,	// (0x0006c03f) main_fs_bigclock_swipe_pane_g

0xed0d,	// (0x0006b19e) main_fs_bigclock_swipe_pane_t1_ParamLimits

0xed0d,	// (0x0006b19e) main_fs_bigclock_swipe_pane_t1

0x33f5,	// (0x0005f886) call_type_pane_ParamLimits

0x9acd,	// (0x00065f5e) main_btmg_pane

0xa422,	// (0x000668b3) list_single_cale_mrui_row_pane_g2_ParamLimits

0xa422,	// (0x000668b3) list_single_cale_mrui_row_pane_g2

0x0002,

0xfb48,	// (0x0006bfd9) list_single_cale_mrui_row_pane_g_ParamLimits

0xfb48,	// (0x0006bfd9) list_single_cale_mrui_row_pane_g

0xa4a8,	// (0x00066939) list_recal_vselct_arw_lo_pane

0xeb25,	// (0x0006afb6) list_recal_vselct_arw_up_pane

0xa4b0,	// (0x00066941) list_recal_vselct_pane

0x90b5,	// (0x00065546) btmg_button_pane

0x90c1,	// (0x00065552) main_btmg_pane_g1

0x9acd,	// (0x00065f5e) bg_button_pane_cp044

0xed2a,	// (0x0006b1bb) btmg_button_pane_t1

0xc83c,	// (0x00068ccd) aid_listscroll_gen

0xa708,	// (0x00066b99) main_cntbar_detail_pane

0xe848,	// (0x0006acd9) list_cmail_folder_pane

0xcff8,	// (0x00069489) sp_fs_scroll_pane_cp03_ParamLimits

0x90c9,	// (0x0006555a) list_single_fs_dyc_pane_cp01_ParamLimits

0x90c9,	// (0x0006555a) list_single_fs_dyc_pane_cp01

0xed38,	// (0x0006b1c9) aid_size_cmail_indent

0xa52f,	// (0x000669c0) list_single_dyc_row_pane_cp01

0x9118,	// (0x000655a9) cntbar_detail_list_pane_ParamLimits

0x9118,	// (0x000655a9) cntbar_detail_list_pane

0x9152,	// (0x000655e3) main_cntbar_detail_cont_pane_ParamLimits

0x9152,	// (0x000655e3) main_cntbar_detail_cont_pane

0x3318,	// (0x0005f7a9) scroll_pane_cp032_ParamLimits

0x3318,	// (0x0005f7a9) scroll_pane_cp032

0x915e,	// (0x000655ef) cntbar_detail_list_event_pane_ParamLimits

0x915e,	// (0x000655ef) cntbar_detail_list_event_pane

0x9124,	// (0x000655b5) cntbar_detail_list_shct_pane

0xac6b,	// (0x000670fc) aid_list_gen

0xed41,	// (0x0006b1d2) aid_scroll

0xed4a,	// (0x0006b1db) aid_size_touch_scroll_bar

0x75b0,	// (0x00063a41) aid_list_double

0xa538,	// (0x000669c9) aid_list_single

0x759e,	// (0x00063a2f) aid_list_single_lg

0xa541,	// (0x000669d2) aid_list_z_g_a_sm

0xa549,	// (0x000669da) aid_list_z_g_d

0xa551,	// (0x000669e2) aid_txt_z_prm

0x9172,	// (0x00065603) aid_txt_z_prm_cp01

0x9180,	// (0x00065611) aid_txt_z_sec

0x918e,	// (0x0006561f) main_cntbar_detail_cont_pane_g1_ParamLimits

0x918e,	// (0x0006561f) main_cntbar_detail_cont_pane_g1

0x919b,	// (0x0006562c) main_cntbar_detail_cont_pane_g2_ParamLimits

0x919b,	// (0x0006562c) main_cntbar_detail_cont_pane_g2

0x0001,

0xfbb3,	// (0x0006c044) main_cntbar_detail_cont_pane_g_ParamLimits

0xfbb3,	// (0x0006c044) main_cntbar_detail_cont_pane_g

0xed53,	// (0x0006b1e4) main_cntbar_detail_cont_pane_t1

0xed61,	// (0x0006b1f2) main_cntbar_detail_cont_pane_t2

0xed6f,	// (0x0006b200) main_cntbar_detail_cont_pane_t3

0x0002,

0xfbb8,	// (0x0006c049) main_cntbar_detail_cont_pane_t

0x91a7,	// (0x00065638) cell_cntbar_detail_list_shct_pane_ParamLimits

0x91a7,	// (0x00065638) cell_cntbar_detail_list_shct_pane

0xed7d,	// (0x0006b20e) cntbar_detail_list_shct_pane_g1

0xed86,	// (0x0006b217) cntbar_detail_list_shct_pane_g2

0x0001,

0xfbbf,	// (0x0006c050) cntbar_detail_list_shct_pane_g

0x91bb,	// (0x0006564c) cntbar_detail_list_event_pane_g1_ParamLimits

0x91bb,	// (0x0006564c) cntbar_detail_list_event_pane_g1

0x91c7,	// (0x00065658) cntbar_detail_list_event_pane_g2_ParamLimits

0x91c7,	// (0x00065658) cntbar_detail_list_event_pane_g2

0x0005,

0xfbc4,	// (0x0006c055) cntbar_detail_list_event_pane_g_ParamLimits

0xfbc4,	// (0x0006c055) cntbar_detail_list_event_pane_g

0x9233,	// (0x000656c4) cntbar_detail_list_event_pane_t1_ParamLimits

0x9233,	// (0x000656c4) cntbar_detail_list_event_pane_t1

0x9248,	// (0x000656d9) cntbar_detail_list_event_pane_t2_ParamLimits

0x9248,	// (0x000656d9) cntbar_detail_list_event_pane_t2

0x0002,

0xfbd1,	// (0x0006c062) cntbar_detail_list_event_pane_t_ParamLimits

0xfbd1,	// (0x0006c062) cntbar_detail_list_event_pane_t

0xcc58,	// (0x000690e9) cell_cntbar_detail_list_shct_pane_g1

0xb3c5,	// (0x00067856) navi_pane_mv_g3

0xa708,	// (0x00066b99) main_cntbar_detail_pane_ParamLimits

0x9acd,	// (0x00065f5e) main_notif_wgt_pane

0x5d14,	// (0x000621a5) aid_tch_main_mp4_pane_g4

0x5f49,	// (0x000623da) popup_slider_window_cp02

0xa49e,	// (0x0006692f) list_recal_day_event_pane

0x90f8,	// (0x00065589) cntbar_detail_btn_pane_ParamLimits

0x90f8,	// (0x00065589) cntbar_detail_btn_pane

0x9108,	// (0x00065599) cntbar_detail_btn_pane_cp01_ParamLimits

0x9108,	// (0x00065599) cntbar_detail_btn_pane_cp01

0x9124,	// (0x000655b5) cntbar_detail_list_shct_pane_ParamLimits

0x9130,	// (0x000655c1) cntbar_detail_pane_g1_ParamLimits

0x9130,	// (0x000655c1) cntbar_detail_pane_g1

0x913c,	// (0x000655cd) cntbar_detail_pane_t1_ParamLimits

0x913c,	// (0x000655cd) cntbar_detail_pane_t1

0x91d3,	// (0x00065664) cntbar_detail_list_event_pane_g3_ParamLimits

0x91d3,	// (0x00065664) cntbar_detail_list_event_pane_g3

0x91eb,	// (0x0006567c) cntbar_detail_list_event_pane_g4_ParamLimits

0x91eb,	// (0x0006567c) cntbar_detail_list_event_pane_g4

0x9203,	// (0x00065694) cntbar_detail_list_event_pane_g5_ParamLimits

0x9203,	// (0x00065694) cntbar_detail_list_event_pane_g5

0x921b,	// (0x000656ac) cntbar_detail_list_event_pane_g6_ParamLimits

0x921b,	// (0x000656ac) cntbar_detail_list_event_pane_g6

0x925d,	// (0x000656ee) cntbar_detail_list_event_pane_t3_ParamLimits

0x925d,	// (0x000656ee) cntbar_detail_list_event_pane_t3

0x926f,	// (0x00065700) popup_notif_wgt_window_ParamLimits

0x926f,	// (0x00065700) popup_notif_wgt_window

0x927f,	// (0x00065710) popup_submenu_window_cp01_ParamLimits

0x927f,	// (0x00065710) popup_submenu_window_cp01

0xa9c4,	// (0x00066e55) bg_popup_window_pane_cp10

0xed8f,	// (0x0006b220) listscroll_notif_wgt_pane

0xeda1,	// (0x0006b232) list_notif_wgt_window

0xedaa,	// (0x0006b23b) scroll_pane_cp033

0x928d,	// (0x0006571e) list_notif_wgt_row_pane_ParamLimits

0x928d,	// (0x0006571e) list_notif_wgt_row_pane

0xedb3,	// (0x0006b244) aid_size_list_notif_wgt_del

0xedc0,	// (0x0006b251) list_notif_wgt_row_pane_g1

0xedcc,	// (0x0006b25d) list_notif_wgt_row_pane_g2

0xede0,	// (0x0006b271) list_notif_wgt_row_pane_g3

0x0002,

0xfbd8,	// (0x0006c069) list_notif_wgt_row_pane_g

0xeded,	// (0x0006b27e) list_notif_wgt_row_pane_t1

0xee03,	// (0x0006b294) list_notif_wgt_row_pane_t2

0xee15,	// (0x0006b2a6) list_notif_wgt_row_pane_t3

0x0002,

0xfbdf,	// (0x0006c070) list_notif_wgt_row_pane_t

0xd903,	// (0x00069d94) list_recal_day_event_pane_g1

0xee27,	// (0x0006b2b8) list_recal_day_event_pane_t1

0x9acd,	// (0x00065f5e) bg_button_pane_cp045

0x929f,	// (0x00065730) cntbar_detail_btn_pane_t1

0xc850,	// (0x00068ce1) main_callh_pane_ParamLimits

0xc850,	// (0x00068ce1) main_callh_pane

0x9acd,	// (0x00065f5e) main_coverflow0_pane

0x9acd,	// (0x00065f5e) main_wgtman_pane

0x825a,	// (0x000646eb) main_fs_bigclock_unlock_btn_pane_ParamLimits

0x825a,	// (0x000646eb) main_fs_bigclock_unlock_btn_pane

0x8b18,	// (0x00064fa9) bg_button_pane_cp16

0x8b28,	// (0x00064fb9) cell_tport_appsw_pane_g3

0x92ad,	// (0x0006573e) cf0_flow_pane_ParamLimits

0x92ad,	// (0x0006573e) cf0_flow_pane

0xee36,	// (0x0006b2c7) listscroll_cf0_pane

0xee41,	// (0x0006b2d2) main_cf0_pane_g1

0x92bc,	// (0x0006574d) main_cf0_pane_t1_ParamLimits

0x92bc,	// (0x0006574d) main_cf0_pane_t1

0x92d0,	// (0x00065761) main_cf0_pane_t2_ParamLimits

0x92d0,	// (0x00065761) main_cf0_pane_t2

0x0001,

0xfbeb,	// (0x0006c07c) main_cf0_pane_t_ParamLimits

0xfbeb,	// (0x0006c07c) main_cf0_pane_t

0xee53,	// (0x0006b2e4) scroll_pane_cp11

0x92e4,	// (0x00065775) cf0_flow_pane_g1

0x92ec,	// (0x0006577d) cf0_flow_pane_g2

0x0001,

0xfbf0,	// (0x0006c081) cf0_flow_pane_g

0x92f4,	// (0x00065785) cf0_flow_pane_t1

0x9acd,	// (0x00065f5e) main_call6_pane

0x9acd,	// (0x00065f5e) main_calllock_pane

0x9302,	// (0x00065793) call6_btn_grp_pane_ParamLimits

0x9302,	// (0x00065793) call6_btn_grp_pane

0x9311,	// (0x000657a2) call6_pane_g1_ParamLimits

0x9311,	// (0x000657a2) call6_pane_g1

0x9320,	// (0x000657b1) popup_call6_1st_window_ParamLimits

0x9320,	// (0x000657b1) popup_call6_1st_window

0x932e,	// (0x000657bf) popup_call6_2nd_window_ParamLimits

0x932e,	// (0x000657bf) popup_call6_2nd_window

0x933c,	// (0x000657cd) cell_call6_btn_pane_ParamLimits

0x933c,	// (0x000657cd) cell_call6_btn_pane

0xa9c4,	// (0x00066e55) bg_popup_call2_in_pane_cp03

0xee5e,	// (0x0006b2ef) popup_call6_1st_window_g1

0xee66,	// (0x0006b2f7) popup_call6_1st_window_g2

0xee6e,	// (0x0006b2ff) popup_call6_1st_window_g3

0x0002,

0xfbf5,	// (0x0006c086) popup_call6_1st_window_g

0xee76,	// (0x0006b307) popup_call6_1st_window_t1

0xee85,	// (0x0006b316) popup_call6_1st_window_t2

0xee95,	// (0x0006b326) popup_call6_1st_window_t3

0x0002,

0xfbfc,	// (0x0006c08d) popup_call6_1st_window_t

0xa9c4,	// (0x00066e55) bg_popup_call2_in_pane_cp04

0xee5e,	// (0x0006b2ef) popup_call6_2nd_window_g1

0xee66,	// (0x0006b2f7) popup_call6_2nd_window_g2

0xee6e,	// (0x0006b2ff) popup_call6_2nd_window_g3

0x0002,

0xfbf5,	// (0x0006c086) popup_call6_2nd_window_g

0xee76,	// (0x0006b307) popup_call6_2nd_window_t1

0x9acd,	// (0x00065f5e) bg_button_pane_cp15

0xeea5,	// (0x0006b336) cell_call6_btn_pane_g1

0xeeae,	// (0x0006b33f) cell_call6_btn_pane_t1

0x934b,	// (0x000657dc) listscroll_wgtman_pane_ParamLimits

0x934b,	// (0x000657dc) listscroll_wgtman_pane

0x9367,	// (0x000657f8) wgtman_btn_pane_ParamLimits

0x9367,	// (0x000657f8) wgtman_btn_pane

0xb1bf,	// (0x00067650) aid_scroll_copy1

0xeebd,	// (0x0006b34e) list_wgtman_pane

0x939c,	// (0x0006582d) wgtman_btn_pane_g1_ParamLimits

0x939c,	// (0x0006582d) wgtman_btn_pane_g1

0x93c4,	// (0x00065855) wgtman_btn_pane_t1_ParamLimits

0x93c4,	// (0x00065855) wgtman_btn_pane_t1

0xeec7,	// (0x0006b358) wgtman_btn_pane_t2_ParamLimits

0xeec7,	// (0x0006b358) wgtman_btn_pane_t2

0x0001,

0xfc03,	// (0x0006c094) wgtman_btn_pane_t_ParamLimits

0xfc03,	// (0x0006c094) wgtman_btn_pane_t

0x93fb,	// (0x0006588c) listrow_wgtman_pane_ParamLimits

0x93fb,	// (0x0006588c) listrow_wgtman_pane

0x9417,	// (0x000658a8) listrow_wgtman_pane_g1

0x9424,	// (0x000658b5) listrow_wgtman_pane_g2

0x0001,

0xfc08,	// (0x0006c099) listrow_wgtman_pane_g

0x9442,	// (0x000658d3) listrow_wgtman_pane_t1

0x945a,	// (0x000658eb) listrow_wgtman_pane_t2

0x0001,

0xfc0d,	// (0x0006c09e) listrow_wgtman_pane_t

0x9480,	// (0x00065911) wait_bar_pane_cp09

0xeede,	// (0x0006b36f) main_calllock_btn_pane

0xeee8,	// (0x0006b379) main_calllock_pane_g1

0x9acd,	// (0x00065f5e) bg_button_pane_cp17

0xeef3,	// (0x0006b384) main_calllock_btn_pane_g1

0xeefc,	// (0x0006b38d) main_calllock_btn_pane_t1

0x9acd,	// (0x00065f5e) main_dialer3_pane

0x9acd,	// (0x00065f5e) main_fmrd2_pane

0xcc58,	// (0x000690e9) main_fs_bigclock_unlock_btn_pane_g1

0xef13,	// (0x0006b3a4) main_fs_bigclock_unlock_btn_pane_t1

0x9492,	// (0x00065923) area_fmrd2_info_pane_ParamLimits

0x9492,	// (0x00065923) area_fmrd2_info_pane

0x94a0,	// (0x00065931) area_fmrd2_visual_pane_ParamLimits

0x94a0,	// (0x00065931) area_fmrd2_visual_pane

0x94ae,	// (0x0006593f) fmrd2_indi_pane_ParamLimits

0x94ae,	// (0x0006593f) fmrd2_indi_pane

0x94bb,	// (0x0006594c) area_fmrd2_visual_pane_g1

0x94c3,	// (0x00065954) area_fmrd2_visual_pane_t1

0x94d3,	// (0x00065964) area_fmrd2_visual_pane_t2

0x94e3,	// (0x00065974) area_fmrd2_visual_pane_t3

0x0002,

0xfc17,	// (0x0006c0a8) area_fmrd2_visual_pane_t

0x94f3,	// (0x00065984) area_fmrd2_info_pane_g1

0x94fb,	// (0x0006598c) area_fmrd2_info_pane_t1

0x950b,	// (0x0006599c) area_fmrd2_info_pane_t2

0x951b,	// (0x000659ac) area_fmrd2_info_pane_t3

0x952b,	// (0x000659bc) area_fmrd2_info_pane_t4

0x0003,

0xfc1e,	// (0x0006c0af) area_fmrd2_info_pane_t

0x9539,	// (0x000659ca) fmrd2_indi_pane_t1

0x9549,	// (0x000659da) fmrd2_indi_pane_t2

0x9559,	// (0x000659ea) fmrd2_indi_pane_t3

0x0002,

0xfc27,	// (0x0006c0b8) fmrd2_indi_pane_t

0xe497,	// (0x0006a928) list_single_fs_bigclock_indicator_pane_g5_ParamLimits

0xe497,	// (0x0006a928) list_single_fs_bigclock_indicator_pane_g5

0xe547,	// (0x0006a9d8) list_single_fs_bigclock_indicator_pane_t5_ParamLimits

0xe547,	// (0x0006a9d8) list_single_fs_bigclock_indicator_pane_t5

0x8cc3,	// (0x00065154) aid_cell_bcale_month_pane_ParamLimits

0x8cc3,	// (0x00065154) aid_cell_bcale_month_pane

0x8ce1,	// (0x00065172) bcale_month_pane_ParamLimits

0x8ce1,	// (0x00065172) bcale_month_pane

0x8cff,	// (0x00065190) bcale_preview_pane_ParamLimits

0x8cff,	// (0x00065190) bcale_preview_pane

0xecc2,	// (0x0006b153) list_single_fs_bigclock_pane_t1_ParamLimits

0xece1,	// (0x0006b172) list_single_fs_bigclock_pane_t2_ParamLimits

0xece1,	// (0x0006b172) list_single_fs_bigclock_pane_t2

0x0001,

0x0c18,	// (0x0005d0a9) list_single_fs_bigclock_pane_t_ParamLimits

0x0c18,	// (0x0005d0a9) list_single_fs_bigclock_pane_t

0xef0b,	// (0x0006b39c) main_fs_bigclock_unlock_btn_pane_g2

0x0001,

0xfc12,	// (0x0006c0a3) main_fs_bigclock_unlock_btn_pane_g

0x9567,	// (0x000659f8) aid_dia3_key_size_ParamLimits

0x9567,	// (0x000659f8) aid_dia3_key_size

0x9573,	// (0x00065a04) aid_dia3_listrow_size_ParamLimits

0x9573,	// (0x00065a04) aid_dia3_listrow_size

0x9583,	// (0x00065a14) dia3_keypad_fun_pane_ParamLimits

0x9583,	// (0x00065a14) dia3_keypad_fun_pane

0x9595,	// (0x00065a26) dia3_keypad_num_pane_ParamLimits

0x9595,	// (0x00065a26) dia3_keypad_num_pane

0x95a7,	// (0x00065a38) dia3_listscroll_pane_ParamLimits

0x95a7,	// (0x00065a38) dia3_listscroll_pane

0x95b5,	// (0x00065a46) dia3_numentry_pane_ParamLimits

0x95b5,	// (0x00065a46) dia3_numentry_pane

0xef21,	// (0x0006b3b2) dia3_list_pane

0xef2c,	// (0x0006b3bd) scroll_pane_cp12

0x9acd,	// (0x00065f5e) bg_dia3_numentry_pane

0x95c3,	// (0x00065a54) dia3_numentry_pane_t1

0x95d2,	// (0x00065a63) cell_dia3_key_num_pane

0x95da,	// (0x00065a6b) cell_dia3_key0_fun_pane_ParamLimits

0x95da,	// (0x00065a6b) cell_dia3_key0_fun_pane

0x95e7,	// (0x00065a78) cell_dia3_key1_fun_pane_ParamLimits

0x95e7,	// (0x00065a78) cell_dia3_key1_fun_pane

0x95f4,	// (0x00065a85) dia3_listrow_pane

0xe1a6,	// (0x0006a637) bg_dia3_numentry_pane_g1

0x9acd,	// (0x00065f5e) bg_button_pane_cp21

0xef37,	// (0x0006b3c8) cell_dia3_key_num_pane_t1

0xef45,	// (0x0006b3d6) cell_dia3_key_num_pane_t2

0xef54,	// (0x0006b3e5) cell_dia3_key_num_pane_t3

0xef63,	// (0x0006b3f4) cell_dia3_key_num_pane_t4

0x0003,

0xfc2e,	// (0x0006c0bf) cell_dia3_key_num_pane_t

0x9acd,	// (0x00065f5e) bg_button_pane_cp19

0x9601,	// (0x00065a92) cell_dia3_key0_fun_pane_g1

0x9acd,	// (0x00065f5e) bg_button_pane_cp20

0x9609,	// (0x00065a9a) cell_dia3_key1_fun_pane_g1

0x9611,	// (0x00065aa2) area_left_week_number_pane

0x9624,	// (0x00065ab5) area_top_day_name_pane

0x9632,	// (0x00065ac3) frame_month_view_pane

0xef72,	// (0x0006b403) grid_month_view_pane

0x9647,	// (0x00065ad8) cell_top_day_name_pane_ParamLimits

0x9647,	// (0x00065ad8) cell_top_day_name_pane

0x9661,	// (0x00065af2) cell_area_left_week_number_pane_ParamLimits

0x9661,	// (0x00065af2) cell_area_left_week_number_pane

0x9684,	// (0x00065b15) cell_month_view_pane_ParamLimits

0x9684,	// (0x00065b15) cell_month_view_pane

0xef80,	// (0x0006b411) frm_month_g1

0x96b0,	// (0x00065b41) frm_month_g2

0x96c1,	// (0x00065b52) frm_month_g3

0x96d2,	// (0x00065b63) frm_month_g4

0x96e3,	// (0x00065b74) frm_month_g5

0x96f6,	// (0x00065b87) frm_month_g6

0x9709,	// (0x00065b9a) frm_month_g7

0xef8d,	// (0x0006b41e) frm_month_g8

0x971c,	// (0x00065bad) frm_month_g9

0x9729,	// (0x00065bba) frm_month_g10

0x9736,	// (0x00065bc7) frm_month_g11

0x9743,	// (0x00065bd4) frm_month_g12

0x9750,	// (0x00065be1) frm_month_g13

0x975d,	// (0x00065bee) frm_month_g14

0x976c,	// (0x00065bfd) frm_month_g15

0x977b,	// (0x00065c0c) frm_month_g16

0x000f,

0xfc37,	// (0x0006c0c8) frm_month_g

0xef9a,	// (0x0006b42b) cell_top_day_name_pane_t1

0x978a,	// (0x00065c1b) cell_area_left_week_number_pane_g1

0x9799,	// (0x00065c2a) cell_area_left_week_number_pane_t1

0xcea6,	// (0x00069337) cell_month_view_pane_g1

0x97af,	// (0x00065c40) cell_month_view_pane_t1

0x9acd,	// (0x00065f5e) main_fps_pane

0xe752,	// (0x0006abe3) cmail_ddmenu_btn02_pane_cp1_ParamLimits

0xe752,	// (0x0006abe3) cmail_ddmenu_btn02_pane_cp1

0xe76e,	// (0x0006abff) cmail_ddmenu_btn02_pane_cp2_ParamLimits

0xe76e,	// (0x0006abff) cmail_ddmenu_btn02_pane_cp2

0x8fc0,	// (0x00065451) cmail_ddmenu_btn02_pane_g2_ParamLimits

0x8fc0,	// (0x00065451) cmail_ddmenu_btn02_pane_g2

0x0001,

0xfb83,	// (0x0006c014) cmail_ddmenu_btn02_pane_g_ParamLimits

0xfb83,	// (0x0006c014) cmail_ddmenu_btn02_pane_g

0x8fdf,	// (0x00065470) cmail_ddmenu_btn02_pane_t2_ParamLimits

0x8fdf,	// (0x00065470) cmail_ddmenu_btn02_pane_t2

0x0001,

0xfb88,	// (0x0006c019) cmail_ddmenu_btn02_pane_t_ParamLimits

0xfb88,	// (0x0006c019) cmail_ddmenu_btn02_pane_t

0x97c5,	// (0x00065c56) fps_text_pane_ParamLimits

0x97c5,	// (0x00065c56) fps_text_pane

0x97d2,	// (0x00065c63) main_fps_pane_g1_ParamLimits

0x97d2,	// (0x00065c63) main_fps_pane_g1

0x97e0,	// (0x00065c71) wait_bar_pane_cp010_ParamLimits

0x97e0,	// (0x00065c71) wait_bar_pane_cp010

0x97ec,	// (0x00065c7d) fps_text_pane_t1_ParamLimits

0x97ec,	// (0x00065c7d) fps_text_pane_t1

0x6339,	// (0x000627ca) cam4_image_uncrop_pane_g1

0x6342,	// (0x000627d3) cam4_image_uncrop_pane_g2

0x634b,	// (0x000627dc) cam4_image_uncrop_pane_g3

0x6354,	// (0x000627e5) cam4_image_uncrop_pane_g4

0x0003,

0xf74e,	// (0x0006bbdf) cam4_image_uncrop_pane_g

0x95f4,	// (0x00065a85) dia3_listrow_pane_ParamLimits

0x9acd,	// (0x00065f5e) main_phob2_pane

0x8afa,	// (0x00064f8b) cell_tport_appsw_pane_cp02_ParamLimits

0x8afa,	// (0x00064f8b) cell_tport_appsw_pane_cp02

0x8b09,	// (0x00064f9a) cell_tport_appsw_pane_cp03_ParamLimits

0x8b09,	// (0x00064f9a) cell_tport_appsw_pane_cp03

0x9acd,	// (0x00065f5e) phob2_contact_card_pane

0x9acd,	// (0x00065f5e) phob2_listscroll_pane

0xefad,	// (0x0006b43e) phob2_list_pane

0xefb5,	// (0x0006b446) scroll_pane_cp034

0x9805,	// (0x00065c96) phob2_cc_data_pane_ParamLimits

0x9805,	// (0x00065c96) phob2_cc_data_pane

0x981f,	// (0x00065cb0) phob2_cc_listscroll_pane_ParamLimits

0x981f,	// (0x00065cb0) phob2_cc_listscroll_pane

0x9839,	// (0x00065cca) list_double_large_graphic_phob2_pane_ParamLimits

0x9839,	// (0x00065cca) list_double_large_graphic_phob2_pane

0x9858,	// (0x00065ce9) list_double_large_graphic_phob2_pane_g1_ParamLimits

0x9858,	// (0x00065ce9) list_double_large_graphic_phob2_pane_g1

0x986e,	// (0x00065cff) list_double_large_graphic_phob2_pane_g2_ParamLimits

0x986e,	// (0x00065cff) list_double_large_graphic_phob2_pane_g2

0x0001,

0xfc58,	// (0x0006c0e9) list_double_large_graphic_phob2_pane_g_ParamLimits

0xfc58,	// (0x0006c0e9) list_double_large_graphic_phob2_pane_g

0x987a,	// (0x00065d0b) list_double_large_graphic_phob2_pane_t1_ParamLimits

0x987a,	// (0x00065d0b) list_double_large_graphic_phob2_pane_t1

0x9890,	// (0x00065d21) list_double_large_graphic_phob2_pane_t2_ParamLimits

0x9890,	// (0x00065d21) list_double_large_graphic_phob2_pane_t2

0x0001,

0xfc5d,	// (0x0006c0ee) list_double_large_graphic_phob2_pane_t_ParamLimits

0xfc5d,	// (0x0006c0ee) list_double_large_graphic_phob2_pane_t

0x9acd,	// (0x00065f5e) list_highlight_pane_cp024

0x98a5,	// (0x00065d36) phob2_cc_button_pane

0x98ad,	// (0x00065d3e) phob2_cc_data_pane_g1_ParamLimits

0x98ad,	// (0x00065d3e) phob2_cc_data_pane_g1

0x98b9,	// (0x00065d4a) phob2_cc_data_pane_g2_ParamLimits

0x98b9,	// (0x00065d4a) phob2_cc_data_pane_g2

0x0001,

0xfc62,	// (0x0006c0f3) phob2_cc_data_pane_g_ParamLimits

0xfc62,	// (0x0006c0f3) phob2_cc_data_pane_g

0x98c5,	// (0x00065d56) phob2_cc_data_pane_t1_ParamLimits

0x98c5,	// (0x00065d56) phob2_cc_data_pane_t1

0x98d7,	// (0x00065d68) phob2_cc_data_pane_t2_ParamLimits

0x98d7,	// (0x00065d68) phob2_cc_data_pane_t2

0x98e9,	// (0x00065d7a) phob2_cc_data_pane_t3_ParamLimits

0x98e9,	// (0x00065d7a) phob2_cc_data_pane_t3

0x0002,

0xfc67,	// (0x0006c0f8) phob2_cc_data_pane_t_ParamLimits

0xfc67,	// (0x0006c0f8) phob2_cc_data_pane_t

0xefbd,	// (0x0006b44e) phob2_cc_list_pane_ParamLimits

0xefbd,	// (0x0006b44e) phob2_cc_list_pane

0xda31,	// (0x00069ec2) scroll_pane_cp035_ParamLimits

0xda31,	// (0x00069ec2) scroll_pane_cp035

0xa708,	// (0x00066b99) bg_button_pane_cp033

0xefc9,	// (0x0006b45a) phob2_cc_button_pane_g1

0xefd5,	// (0x0006b466) phob2_cc_button_pane_t1

0xefea,	// (0x0006b47b) phob2_cc_button_pane_t2

0x0001,

0xfc6e,	// (0x0006c0ff) phob2_cc_button_pane_t

0x98fb,	// (0x00065d8c) list_double_large_graphic_phob2_cc_pane_ParamLimits

0x98fb,	// (0x00065d8c) list_double_large_graphic_phob2_cc_pane

0x9924,	// (0x00065db5) list_double_large_graphic_phob2_cc_pane_g1_ParamLimits

0x9924,	// (0x00065db5) list_double_large_graphic_phob2_cc_pane_g1

0x9935,	// (0x00065dc6) list_double_large_graphic_phob2_cc_pane_g2_ParamLimits

0x9935,	// (0x00065dc6) list_double_large_graphic_phob2_cc_pane_g2

0x9941,	// (0x00065dd2) list_double_large_graphic_phob2_cc_pane_g3_ParamLimits

0x9941,	// (0x00065dd2) list_double_large_graphic_phob2_cc_pane_g3

0x994d,	// (0x00065dde) list_double_large_graphic_phob2_cc_pane_g4_ParamLimits

0x994d,	// (0x00065dde) list_double_large_graphic_phob2_cc_pane_g4

0x9959,	// (0x00065dea) list_double_large_graphic_phob2_cc_pane_g5_ParamLimits

0x9959,	// (0x00065dea) list_double_large_graphic_phob2_cc_pane_g5

0x0004,

0xfc73,	// (0x0006c104) list_double_large_graphic_phob2_cc_pane_g_ParamLimits

0xfc73,	// (0x0006c104) list_double_large_graphic_phob2_cc_pane_g

0x9965,	// (0x00065df6) list_double_large_graphic_phob2_cc_pane_t1_ParamLimits

0x9965,	// (0x00065df6) list_double_large_graphic_phob2_cc_pane_t1

0x998e,	// (0x00065e1f) list_double_large_graphic_phob2_cc_pane_t2_ParamLimits

0x998e,	// (0x00065e1f) list_double_large_graphic_phob2_cc_pane_t2

0x0001,

0xfc7e,	// (0x0006c10f) list_double_large_graphic_phob2_cc_pane_t_ParamLimits

0xfc7e,	// (0x0006c10f) list_double_large_graphic_phob2_cc_pane_t

0xeffc,	// (0x0006b48d) list_highlight_pane_cp025_ParamLimits

0xeffc,	// (0x0006b48d) list_highlight_pane_cp025

0xa708,	// (0x00066b99) bg_button_pane_cp033_ParamLimits

0xefc9,	// (0x0006b45a) phob2_cc_button_pane_g1_ParamLimits

0xefd5,	// (0x0006b466) phob2_cc_button_pane_t1_ParamLimits

0xefea,	// (0x0006b47b) phob2_cc_button_pane_t2_ParamLimits

0xfc6e,	// (0x0006c0ff) phob2_cc_button_pane_t_ParamLimits

0x106f,	// (0x0005d500) popup_wgtman_window

0xd7c7,	// (0x00069c58) scroll_pane_cp038

0x9384,	// (0x00065815) wgtman_btn_pane_cp_01_ParamLimits

0x9384,	// (0x00065815) wgtman_btn_pane_cp_01

0xf00a,	// (0x0006b49b) wgtman_content_pane

0xf013,	// (0x0006b4a4) wgtman_heading_pane

0x9acd,	// (0x00065f5e) bg_heading_pane_cp02

0xf01c,	// (0x0006b4ad) wgtman_heading_pane_g1

0xf024,	// (0x0006b4b5) wgtman_heading_pane_t1

0xf032,	// (0x0006b4c3) scroll_pane_cp036

0xf03a,	// (0x0006b4cb) wgtman_list_pane

0xe632,	// (0x0006aac3) wgtman_list_pane_t1_ParamLimits

0xe632,	// (0x0006aac3) wgtman_list_pane_t1

0x6298,	// (0x00062729) cam4_grid_pane

0x705b,	// (0x000634ec) bg_button_pane_cp015_ParamLimits

0x706d,	// (0x000634fe) bg_button_pane_cp016_ParamLimits

0x7080,	// (0x00063511) bg_button_pane_cp017_ParamLimits

0x70d6,	// (0x00063567) popup_vitu2_query_window_g3_ParamLimits

0x70d6,	// (0x00063567) popup_vitu2_query_window_g3

0x7191,	// (0x00063622) popup_vitu2_query_window_t6_ParamLimits

0x7191,	// (0x00063622) popup_vitu2_query_window_t6

0x71bc,	// (0x0006364d) popup_vitu2_query_window_t7_ParamLimits

0x71bc,	// (0x0006364d) popup_vitu2_query_window_t7

0xdda6,	// (0x0006a237) cam4_grid_pane_g1

0xddaf,	// (0x0006a240) cam4_grid_pane_g2

0xf042,	// (0x0006b4d3) cam4_grid_pane_g3

0xf04b,	// (0x0006b4dc) cam4_grid_pane_g4

0x0003,

0xfc83,	// (0x0006c114) cam4_grid_pane_g

0x1ff3,	// (0x0005e484) aid_placing_vt_slider_lsc_ParamLimits

0x2333,	// (0x0005e7c4) vidtel_button_pane_ParamLimits

0x2333,	// (0x0005e7c4) vidtel_button_pane

0x9acd,	// (0x00065f5e) bg_button_pane_cp034

0x99b7,	// (0x00065e48) vidtel_button_pane_g1

0xf056,	// (0x0006b4e7) vidtel_button_pane_t1

0xd8e1,	// (0x00069d72) aid_size_vtel_slider_touch

0xda31,	// (0x00069ec2) scroll_pane_cp039

0xe1ec,	// (0x0006a67d) ncim_query_button_pane_cp01_ParamLimits

0xe20b,	// (0x0006a69c) ncimui_query_pane_g1_ParamLimits

0xa708,	// (0x00066b99) input_focus_pane_cp012_ParamLimits

0xe230,	// (0x0006a6c1) ncim_query_entry_pane_t1_ParamLimits

0xda31,	// (0x00069ec2) scroll_pane_cp039_ParamLimits

0xb296,	// (0x00067727) navi_pane_bcale_mc_g1

0xb29e,	// (0x0006772f) navi_pane_bcale_mc_t1

0xe7b7,	// (0x0006ac48) main_sp_fs_email_pane_g1

0xe7c3,	// (0x0006ac54) main_sp_fs_email_pane_g2

0x0001,

0x0a83,	// (0x0005cf14) main_sp_fs_email_pane_g

0xea27,	// (0x0006aeb8) list_single_cale_mrui_row_pane_g3_ParamLimits

0xea27,	// (0x0006aeb8) list_single_cale_mrui_row_pane_g3

0x9007,	// (0x00065498) list_single_recal_day_pane_g5_event_pane

0xa503,	// (0x00066994) list_single_recal_day_pane_g7

0xf06c,	// (0x0006b4fd) list_recal_day_event_pane_cp01

0xf075,	// (0x0006b506) list_recal_vselct_arw_lo_pane_cp01

0xf07d,	// (0x0006b50e) list_recal_vselct_arw_up_pane_cp01

0xf085,	// (0x0006b516) list_recal_vselct_pane_cp01

0xd903,	// (0x00069d94) list_recal_day_event_pane_cp01_g1

0xa716,	// (0x00066ba7) list_recal_day_event_pane_cp01_t1

0xa50b,	// (0x0006699c) list_single_recal_day_pane_t1_ParamLimits

0xa51d,	// (0x000669ae) list_single_recal_day_pane_t2_ParamLimits

0xfb98,	// (0x0006c029) list_single_recal_day_pane_t_ParamLimits

0xa6e2,	// (0x00066b73) bg_notes_pane_ParamLimits

0xa7ad,	// (0x00066c3e) list_notes_pane_ParamLimits

0x13d4,	// (0x0005d865) scroll_pane_cp06_ParamLimits

0xa7cf,	// (0x00066c60) main_notes_pane_ParamLimits

0x9acd,	// (0x00065f5e) main_welc_pane

0x99bf,	// (0x00065e50) main_welc_body_pane_ParamLimits

0x99bf,	// (0x00065e50) main_welc_body_pane

0x99d8,	// (0x00065e69) main_welc_opti_pane_ParamLimits

0x99d8,	// (0x00065e69) main_welc_opti_pane

0x9a0b,	// (0x00065e9c) main_welc_pane_t1_ParamLimits

0x9a0b,	// (0x00065e9c) main_welc_pane_t1

0x9a25,	// (0x00065eb6) main_welc_body_row_pane_ParamLimits

0x9a25,	// (0x00065eb6) main_welc_body_row_pane

0xe9ad,	// (0x0006ae3e) main_welc_opti_row_pane_ParamLimits

0xe9ad,	// (0x0006ae3e) main_welc_opti_row_pane

0xf08f,	// (0x0006b520) main_welc_opti_row_pane_g1

0x9a4e,	// (0x00065edf) main_welc_opti_row_pane_t1

0xf097,	// (0x0006b528) main_welc_body_row_pane_t1

0xed99,	// (0x0006b22a) popup_notif_wgt_heading_pane

0xedb3,	// (0x0006b244) aid_size_list_notif_wgt_del_ParamLimits

0xedc0,	// (0x0006b251) list_notif_wgt_row_pane_g1_ParamLimits

0xedcc,	// (0x0006b25d) list_notif_wgt_row_pane_g2_ParamLimits

0xede0,	// (0x0006b271) list_notif_wgt_row_pane_g3_ParamLimits

0xfbd8,	// (0x0006c069) list_notif_wgt_row_pane_g_ParamLimits

0xeded,	// (0x0006b27e) list_notif_wgt_row_pane_t1_ParamLimits

0xee03,	// (0x0006b294) list_notif_wgt_row_pane_t2_ParamLimits

0xee15,	// (0x0006b2a6) list_notif_wgt_row_pane_t3_ParamLimits

0xfbdf,	// (0x0006c070) list_notif_wgt_row_pane_t_ParamLimits

0x9417,	// (0x000658a8) listrow_wgtman_pane_g1_ParamLimits

0x9424,	// (0x000658b5) listrow_wgtman_pane_g2_ParamLimits

0xfc08,	// (0x0006c099) listrow_wgtman_pane_g_ParamLimits

0x9442,	// (0x000658d3) listrow_wgtman_pane_t1_ParamLimits

0x945a,	// (0x000658eb) listrow_wgtman_pane_t2_ParamLimits

0xfc0d,	// (0x0006c09e) listrow_wgtman_pane_t_ParamLimits

0x9480,	// (0x00065911) wait_bar_pane_cp09_ParamLimits

0x9acd,	// (0x00065f5e) bg_popup_heading_pane_cp02

0xf0a6,	// (0x0006b537) popup_notif_wgt_heading_pane_g1

0xf0ae,	// (0x0006b53f) popup_notif_wgt_heading_pane_t1

0x9acd,	// (0x00065f5e) main_vids_pane

0x9acd,	// (0x00065f5e) vids_listscroll_pane

0x9a5d,	// (0x00065eee) scroll_pane_cp040

0x9acd,	// (0x00065f5e) vids_list_pane

0x9a68,	// (0x00065ef9) vids_list_double_pane_ParamLimits

0x9a68,	// (0x00065ef9) vids_list_double_pane

0x9a80,	// (0x00065f11) vids_list_double_pane_g1

0x9a89,	// (0x00065f1a) vids_list_double_pane_t1

0x9a99,	// (0x00065f2a) vids_list_double_pane_t2

0x0001,

0xfc91,	// (0x0006c122) vids_list_double_pane_t

0x43d2,	// (0x00060863) main_ncimui_pane_ParamLimits

0x7e2c,	// (0x000642bd) main_ncimui_pane_g1_ParamLimits

0x7e38,	// (0x000642c9) main_ncimui_pane_g2_ParamLimits

0x7e38,	// (0x000642c9) main_ncimui_pane_g2

0x0001,

0xf9f5,	// (0x0006be86) main_ncimui_pane_g_ParamLimits

0xf9f5,	// (0x0006be86) main_ncimui_pane_g

0x99f1,	// (0x00065e82) main_welc_pane_g1_ParamLimits

0x99f1,	// (0x00065e82) main_welc_pane_g1

0x99fd,	// (0x00065e8e) main_welc_pane_g2_ParamLimits

0x99fd,	// (0x00065e8e) main_welc_pane_g2

0x0001,

0xfc8c,	// (0x0006c11d) main_welc_pane_g_ParamLimits

0xfc8c,	// (0x0006c11d) main_welc_pane_g

0xa6e2,	// (0x00066b73) listscroll_mce_pane_ParamLimits

0xb405,	// (0x00067896) wait_bar_pane_cp10

0xc844,	// (0x00068cd5) main_cale_day_pane_ParamLimits

0xc844,	// (0x00068cd5) main_cale_week_pane_ParamLimits

0xa6e2,	// (0x00066b73) main_messa_pane_ParamLimits

0x56dd,	// (0x00061b6e) main_clock2_btn_pane_ParamLimits

0x56dd,	// (0x00061b6e) main_clock2_btn_pane

0xd03a,	// (0x000694cb) main_clock2_btn_pane_cp01_ParamLimits

0xd03a,	// (0x000694cb) main_clock2_btn_pane_cp01

0xe9f8,	// (0x0006ae89) list_cale_mrui_pane_ParamLimits

0xee4b,	// (0x0006b2dc) main_cf0_pane_g2

0x0001,

0xfbe6,	// (0x0006c077) main_cf0_pane_g

0x9611,	// (0x00065aa2) area_left_week_number_pane_ParamLimits

0x9624,	// (0x00065ab5) area_top_day_name_pane_ParamLimits

0x9632,	// (0x00065ac3) frame_month_view_pane_ParamLimits

0xef72,	// (0x0006b403) grid_month_view_pane_ParamLimits

0xef80,	// (0x0006b411) frm_month_g1_ParamLimits

0x96b0,	// (0x00065b41) frm_month_g2_ParamLimits

0x96c1,	// (0x00065b52) frm_month_g3_ParamLimits

0x96d2,	// (0x00065b63) frm_month_g4_ParamLimits

0x96e3,	// (0x00065b74) frm_month_g5_ParamLimits

0x96f6,	// (0x00065b87) frm_month_g6_ParamLimits

0x9709,	// (0x00065b9a) frm_month_g7_ParamLimits

0xef8d,	// (0x0006b41e) frm_month_g8_ParamLimits

0x971c,	// (0x00065bad) frm_month_g9_ParamLimits

0x9729,	// (0x00065bba) frm_month_g10_ParamLimits

0x9736,	// (0x00065bc7) frm_month_g11_ParamLimits

0x9743,	// (0x00065bd4) frm_month_g12_ParamLimits

0x9750,	// (0x00065be1) frm_month_g13_ParamLimits

0x975d,	// (0x00065bee) frm_month_g14_ParamLimits

0x976c,	// (0x00065bfd) frm_month_g15_ParamLimits

0x977b,	// (0x00065c0c) frm_month_g16_ParamLimits

0xfc37,	// (0x0006c0c8) frm_month_g_ParamLimits

0xef9a,	// (0x0006b42b) cell_top_day_name_pane_t1_ParamLimits

0x978a,	// (0x00065c1b) cell_area_left_week_number_pane_g1_ParamLimits

0x9799,	// (0x00065c2a) cell_area_left_week_number_pane_t1_ParamLimits

0xcea6,	// (0x00069337) cell_month_view_pane_g1_ParamLimits

0x97af,	// (0x00065c40) cell_month_view_pane_t1_ParamLimits

0xa6da,	// (0x00066b6b) main_clock2_btn_pane_g1

0xf0bc,	// (0x0006b54d) main_clock2_btn_pane_t1

0xa708,	// (0x00066b99) listscroll_cmail_pane_ParamLimits

0xe7b7,	// (0x0006ac48) main_sp_fs_email_pane_g1_ParamLimits

0xe7c3,	// (0x0006ac54) main_sp_fs_email_pane_g2_ParamLimits

0x0a83,	// (0x0005cf14) main_sp_fs_email_pane_g_ParamLimits

0xeb06,	// (0x0006af97) list_recal_day_pane_ParamLimits

0xeb17,	// (0x0006afa8) mian_recal_day_pane_t1

0x87dd,	// (0x00064c6e) list_single_dyc_row_text_pane_t4_ParamLimits

0x87dd,	// (0x00064c6e) list_single_dyc_row_text_pane_t4

0x8814,	// (0x00064ca5) list_single_dyc_row_text_pane_t5_ParamLimits

0x8814,	// (0x00064ca5) list_single_dyc_row_text_pane_t5

0xa22d,	// (0x000666be) list_single_dyc_row_text_pane_t6_ParamLimits

0xa22d,	// (0x000666be) list_single_dyc_row_text_pane_t6

0x323d,	// (0x0005f6ce) aid_mgn_list_cale_time_pane

0x43d2,	// (0x00060863) main_gallery2_pane_ParamLimits

0xd050,	// (0x000694e1) main_clock2_pane_cp01_t1

0xd05e,	// (0x000694ef) main_clock2_pane_cp01_t3

0x0001,

0x0562,	// (0x0005c9f3) main_clock2_pane_cp01_t

0x1823,	// (0x0005dcb4) cale_week_scroll_pane_g16_ParamLimits

0x1823,	// (0x0005dcb4) cale_week_scroll_pane_g16

0xa9c4,	// (0x00066e55) vorec_slider_pane

0xf056,	// (0x0006b4e7) vidtel_button_pane_t1_ParamLimits
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
	};

} // end of namespace AknLayoutScalable_Abrw_pnp4_apps_nhd4_prt_tch_Small
