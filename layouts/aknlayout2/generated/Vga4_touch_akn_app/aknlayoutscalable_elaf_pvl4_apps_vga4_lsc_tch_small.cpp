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

#include "aknlayoutscalable_elaf_pvl4_apps_vga4_lsc_tch_small.h"
#include "AknLayout2ScalableDecode.h"
namespace AknLayoutScalable_Apps { extern const TUint8 KByteCodedData_AknLayoutScalable_Elaf_pvp4_apps_vga4_prt_tch[]; }

namespace AknLayoutScalable_Elaf_pvl4_apps_vga4_lsc_tch_Small
{

extern const TUint16 KDataLookup[AknLayoutScalable_Apps::E_TApiId_TableSize];
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Apps::KByteCodedData_AknLayoutScalable_Elaf_pvp4_apps_vga4_prt_tch + 0x00042532 };

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
0x154f,	// (0x00043a81) Screen

0x155b,	// (0x00043a8d) application_window

0x1597,	// (0x00043ac9) area_bottom_pane_ParamLimits

0x1597,	// (0x00043ac9) area_bottom_pane

0x15d0,	// (0x00043b02) area_top_pane_ParamLimits

0x15d0,	// (0x00043b02) area_top_pane

0xa6d9,	// (0x0004cc0b) call_video_uplink_pane_ParamLimits

0xa6d9,	// (0x0004cc0b) call_video_uplink_pane

0x1645,	// (0x00043b77) main_pane_ParamLimits

0x1645,	// (0x00043b77) main_pane

0xe464,	// (0x00050996) context_pane

0x46ed,	// (0x00046c1f) navi_pane

0x471d,	// (0x00046c4f) popup_cale_events_window_ParamLimits

0x471d,	// (0x00046c4f) popup_cale_events_window

0xe477,	// (0x000509a9) popup_mup_playback_window

0x4735,	// (0x00046c67) signal_pane

0xc590,	// (0x0004eac2) main_browser_pane

0xcfe4,	// (0x0004f516) main_burst_pane

0x43ef,	// (0x00046921) main_calc_pane

0xcfe4,	// (0x0004f516) main_cale_day_pane

0xc590,	// (0x0004eac2) main_cale_month_pane

0xcfe4,	// (0x0004f516) main_cale_week_pane

0xcfe4,	// (0x0004f516) main_call_pane

0xc26a,	// (0x0004e79c) main_call_poc_pane

0xcfe4,	// (0x0004f516) main_camera_pane

0xcfe4,	// (0x0004f516) main_chi_dic_pane

0xce86,	// (0x0004f3b8) main_clock_pane

0xc26a,	// (0x0004e79c) main_fmradio_pane

0xcfe4,	// (0x0004f516) main_graph_messa_pane

0xc26a,	// (0x0004e79c) main_help_pane

0xc590,	// (0x0004eac2) main_im_pane

0xc4c5,	// (0x0004e9f7) main_image_pane_ParamLimits

0xc4c5,	// (0x0004e9f7) main_image_pane

0xc26a,	// (0x0004e79c) main_location2_pane

0xcfe4,	// (0x0004f516) main_location_pane

0xc26a,	// (0x0004e79c) main_messa_pane

0xc26a,	// (0x0004e79c) main_mp2_pane

0xcfe4,	// (0x0004f516) main_mp_pane

0xc26a,	// (0x0004e79c) main_msg_pane

0xc26a,	// (0x0004e79c) main_mup_eq_pane

0xc26a,	// (0x0004e79c) main_mup_pane

0xcfe4,	// (0x0004f516) main_notes_pane

0xc26a,	// (0x0004e79c) main_pec_pane

0xc26a,	// (0x0004e79c) main_phob_pane

0xc26a,	// (0x0004e79c) main_pinb_pane

0xc26a,	// (0x0004e79c) main_postcard_pane

0xc26a,	// (0x0004e79c) main_qdial_pane

0xcfe4,	// (0x0004f516) main_skin_pane

0xc26a,	// (0x0004e79c) main_smil2_pane

0xcfe4,	// (0x0004f516) main_smil_pane

0xcfe4,	// (0x0004f516) main_video_pane

0xcfe4,	// (0x0004f516) main_video_tele_pane

0xc4c5,	// (0x0004e9f7) main_viewer_pane_ParamLimits

0xc4c5,	// (0x0004e9f7) main_viewer_pane

0xcfe4,	// (0x0004f516) main_vorec_pane

0x4445,	// (0x00046977) popup_blid_sat_info_window_ParamLimits

0x4445,	// (0x00046977) popup_blid_sat_info_window

0x44a9,	// (0x000469db) popup_dyc_status_message_window_ParamLimits

0x44a9,	// (0x000469db) popup_dyc_status_message_window

0x44c3,	// (0x000469f5) popup_grid_large_graphic_window_ParamLimits

0x44c3,	// (0x000469f5) popup_grid_large_graphic_window

0x4585,	// (0x00046ab7) popup_loc_request_window_ParamLimits

0x4585,	// (0x00046ab7) popup_loc_request_window

0x46c1,	// (0x00046bf3) popup_wml_address_window_ParamLimits

0x46c1,	// (0x00046bf3) popup_wml_address_window

0x422d,	// (0x0004675f) call_muted_g1

0x3ebe,	// (0x000463f0) popup_call_audio_conf_window_ParamLimits

0x3ebe,	// (0x000463f0) popup_call_audio_conf_window

0x423d,	// (0x0004676f) popup_call_audio_first_window_ParamLimits

0x423d,	// (0x0004676f) popup_call_audio_first_window

0x42b3,	// (0x000467e5) popup_call_audio_in_window_ParamLimits

0x42b3,	// (0x000467e5) popup_call_audio_in_window

0x42ef,	// (0x00046821) popup_call_audio_out_window_ParamLimits

0x42ef,	// (0x00046821) popup_call_audio_out_window

0x4329,	// (0x0004685b) popup_call_audio_second_window_ParamLimits

0x4329,	// (0x0004685b) popup_call_audio_second_window

0x437f,	// (0x000468b1) popup_call_audio_wait_window_ParamLimits

0x437f,	// (0x000468b1) popup_call_audio_wait_window

0x43b4,	// (0x000468e6) popup_number_entry_window_ParamLimits

0x43b4,	// (0x000468e6) popup_number_entry_window

0xa705,	// (0x0004cc37) bg_popup_call_pane_cp05_ParamLimits

0xa705,	// (0x0004cc37) bg_popup_call_pane_cp05

0xa725,	// (0x0004cc57) popup_number_entry_window_t1

0xa738,	// (0x0004cc6a) popup_number_entry_window_t2

0xa74a,	// (0x0004cc7c) popup_number_entry_window_t3

0x0003,

0xf0ec,	// (0x0005161e) popup_number_entry_window_t

0xa75c,	// (0x0004cc8e) text_title_cp2

0xa76f,	// (0x0004cca1) bg_popup_call_pane_cp_ParamLimits

0xa76f,	// (0x0004cca1) bg_popup_call_pane_cp

0xa77d,	// (0x0004ccaf) call_thumbnail_pane

0xa785,	// (0x0004ccb7) popup_call_audio_in_window_g1_ParamLimits

0xa785,	// (0x0004ccb7) popup_call_audio_in_window_g1

0xa791,	// (0x0004ccc3) popup_call_audio_in_window_g2_ParamLimits

0xa791,	// (0x0004ccc3) popup_call_audio_in_window_g2

0xa79d,	// (0x0004cccf) popup_call_audio_in_window_g3_ParamLimits

0xa79d,	// (0x0004cccf) popup_call_audio_in_window_g3

0x0002,

0xf0f5,	// (0x00051627) popup_call_audio_in_window_g_ParamLimits

0xf0f5,	// (0x00051627) popup_call_audio_in_window_g

0xa7a9,	// (0x0004ccdb) popup_call_audio_in_window_t1_ParamLimits

0xa7a9,	// (0x0004ccdb) popup_call_audio_in_window_t1

0xa7c5,	// (0x0004ccf7) popup_call_audio_in_window_t2_ParamLimits

0xa7c5,	// (0x0004ccf7) popup_call_audio_in_window_t2

0xbf33,	// (0x0004e465) popup_call_audio_in_window_t3_ParamLimits

0xbf33,	// (0x0004e465) popup_call_audio_in_window_t3

0x0002,

0xf0fc,	// (0x0005162e) popup_call_audio_in_window_t_ParamLimits

0xf0fc,	// (0x0005162e) popup_call_audio_in_window_t

0xa76f,	// (0x0004cca1) bg_popup_call_pane_cp01_ParamLimits

0xa76f,	// (0x0004cca1) bg_popup_call_pane_cp01

0xa77d,	// (0x0004ccaf) call_thumbnail_pane_cp02

0xbf46,	// (0x0004e478) call_type_pane_cp022

0xbf4e,	// (0x0004e480) popup_call_audio_out_window_g1_ParamLimits

0xbf4e,	// (0x0004e480) popup_call_audio_out_window_g1

0xbf60,	// (0x0004e492) popup_call_audio_out_window_g2_ParamLimits

0xbf60,	// (0x0004e492) popup_call_audio_out_window_g2

0xbf6c,	// (0x0004e49e) popup_call_audio_out_window_g3_ParamLimits

0xbf6c,	// (0x0004e49e) popup_call_audio_out_window_g3

0x0002,

0xf103,	// (0x00051635) popup_call_audio_out_window_g_ParamLimits

0xf103,	// (0x00051635) popup_call_audio_out_window_g

0xbf7e,	// (0x0004e4b0) popup_call_audio_out_window_t1_ParamLimits

0xbf7e,	// (0x0004e4b0) popup_call_audio_out_window_t1

0xbf96,	// (0x0004e4c8) popup_call_audio_out_window_t2_ParamLimits

0xbf96,	// (0x0004e4c8) popup_call_audio_out_window_t2

0x0001,

0xf10a,	// (0x0005163c) popup_call_audio_out_window_t_ParamLimits

0xf10a,	// (0x0005163c) popup_call_audio_out_window_t

0xbfab,	// (0x0004e4dd) bg_popup_call_pane_ParamLimits

0xbfab,	// (0x0004e4dd) bg_popup_call_pane

0x17f8,	// (0x00043d2a) call_thumbnail_pane_cp_ParamLimits

0x17f8,	// (0x00043d2a) call_thumbnail_pane_cp

0xc02f,	// (0x0004e561) call_type_pane_cp01_ParamLimits

0xc02f,	// (0x0004e561) call_type_pane_cp01

0xc073,	// (0x0004e5a5) popup_call_audio_first_window_g1_ParamLimits

0xc073,	// (0x0004e5a5) popup_call_audio_first_window_g1

0xc0bf,	// (0x0004e5f1) popup_call_audio_first_window_g2_ParamLimits

0xc0bf,	// (0x0004e5f1) popup_call_audio_first_window_g2

0x0001,

0xf10f,	// (0x00051641) popup_call_audio_first_window_g_ParamLimits

0xf10f,	// (0x00051641) popup_call_audio_first_window_g

0xc103,	// (0x0004e635) popup_call_audio_first_window_t1_ParamLimits

0xc103,	// (0x0004e635) popup_call_audio_first_window_t1

0xc1af,	// (0x0004e6e1) popup_call_audio_first_window_t4_ParamLimits

0xc1af,	// (0x0004e6e1) popup_call_audio_first_window_t4

0xc23b,	// (0x0004e76d) popup_call_audio_first_window_t5_ParamLimits

0xc23b,	// (0x0004e76d) popup_call_audio_first_window_t5

0x0002,

0xf114,	// (0x00051646) popup_call_audio_first_window_t_ParamLimits

0xf114,	// (0x00051646) popup_call_audio_first_window_t

0xc26a,	// (0x0004e79c) bg_popup_call_pane_cp02

0xc274,	// (0x0004e7a6) call_type_pane_cp023

0xc27c,	// (0x0004e7ae) popup_call_audio_wait_window_g1

0xc284,	// (0x0004e7b6) popup_call_audio_wait_window_g2

0x0001,

0xf11b,	// (0x0005164d) popup_call_audio_wait_window_g

0xc28c,	// (0x0004e7be) popup_call_audio_wait_window_t3

0xc29a,	// (0x0004e7cc) bg_popup_call_pane_cp03_ParamLimits

0xc29a,	// (0x0004e7cc) bg_popup_call_pane_cp03

0xc2fa,	// (0x0004e82c) call_thumbnail_pane_cp011_ParamLimits

0xc2fa,	// (0x0004e82c) call_thumbnail_pane_cp011

0xc306,	// (0x0004e838) call_type_pane_cp034_ParamLimits

0xc306,	// (0x0004e838) call_type_pane_cp034

0xc342,	// (0x0004e874) popup_call_audio_second_window_g1_ParamLimits

0xc342,	// (0x0004e874) popup_call_audio_second_window_g1

0xc37e,	// (0x0004e8b0) popup_call_audio_second_window_g2_ParamLimits

0xc37e,	// (0x0004e8b0) popup_call_audio_second_window_g2

0x0001,

0xf120,	// (0x00051652) popup_call_audio_second_window_g_ParamLimits

0xf120,	// (0x00051652) popup_call_audio_second_window_g

0xc3ba,	// (0x0004e8ec) popup_call_audio_second_window_t1_ParamLimits

0xc3ba,	// (0x0004e8ec) popup_call_audio_second_window_t1

0xc43b,	// (0x0004e96d) popup_call_audio_second_window_t2_ParamLimits

0xc43b,	// (0x0004e96d) popup_call_audio_second_window_t2

0xc471,	// (0x0004e9a3) popup_call_audio_second_window_t3_ParamLimits

0xc471,	// (0x0004e9a3) popup_call_audio_second_window_t3

0x0002,

0xf125,	// (0x00051657) popup_call_audio_second_window_t_ParamLimits

0xf125,	// (0x00051657) popup_call_audio_second_window_t

0xc26a,	// (0x0004e79c) bg_popup_call_pane_cp04

0xc4a7,	// (0x0004e9d9) list_conf_pane

0xc4af,	// (0x0004e9e1) popup_call_audio_conf_window_t1

0xc4bd,	// (0x0004e9ef) call_thumbnail_pane_g1

0xc4c5,	// (0x0004e9f7) bg_pinb_pane_ParamLimits

0xc4c5,	// (0x0004e9f7) bg_pinb_pane

0xc4d3,	// (0x0004ea05) find_pinb_pane

0xc4dc,	// (0x0004ea0e) listscroll_pinb_pane_ParamLimits

0xc4dc,	// (0x0004ea0e) listscroll_pinb_pane

0xc4eb,	// (0x0004ea1d) pinb_bg_pane_g1

0x181c,	// (0x00043d4e) pinb_bg_pane_g2

0x1828,	// (0x00043d5a) pinb_bg_pane_g3

0x1834,	// (0x00043d66) pinb_bg_pane_g4

0x1840,	// (0x00043d72) pinb_bg_pane_g5

0x184c,	// (0x00043d7e) pinb_bg_pane_g6

0x1857,	// (0x00043d89) pinb_bg_pane_g7

0x1862,	// (0x00043d94) pinb_bg_pane_g8

0x186d,	// (0x00043d9f) pinb_bg_pane_g9

0x1877,	// (0x00043da9) pinb_bg_pane_g10

0x0009,

0xf12c,	// (0x0005165e) pinb_bg_pane_g

0x1894,	// (0x00043dc6) grid_pinb_pane

0x189f,	// (0x00043dd1) list_pinb_pane

0x18aa,	// (0x00043ddc) scroll_pane_cp01_ParamLimits

0x18aa,	// (0x00043ddc) scroll_pane_cp01

0xc4f5,	// (0x0004ea27) find_pinb_pane_g1_ParamLimits

0xc4f5,	// (0x0004ea27) find_pinb_pane_g1

0xc50d,	// (0x0004ea3f) find_pinb_pane_t1

0xc51f,	// (0x0004ea51) find_pinb_pane_t2

0x0001,

0xf146,	// (0x00051678) find_pinb_pane_t

0xc534,	// (0x0004ea66) input_focus_pane_cp01_ParamLimits

0xc534,	// (0x0004ea66) input_focus_pane_cp01

0x18bc,	// (0x00043dee) cell_pinb_pane_ParamLimits

0x18bc,	// (0x00043dee) cell_pinb_pane

0x18de,	// (0x00043e10) cell_pinb_pane_g1_ParamLimits

0x18de,	// (0x00043e10) cell_pinb_pane_g1

0x18f2,	// (0x00043e24) cell_pinb_pane_g2_ParamLimits

0x18f2,	// (0x00043e24) cell_pinb_pane_g2

0xc540,	// (0x0004ea72) cell_pinb_pane_g3_ParamLimits

0xc540,	// (0x0004ea72) cell_pinb_pane_g3

0x0002,

0xf14b,	// (0x0005167d) cell_pinb_pane_g_ParamLimits

0xf14b,	// (0x0005167d) cell_pinb_pane_g

0xc26a,	// (0x0004e79c) grid_highlight_pane_cp01

0x18fe,	// (0x00043e30) list_pinb_item_pane_ParamLimits

0x18fe,	// (0x00043e30) list_pinb_item_pane

0xc26a,	// (0x0004e79c) list_highlight_pane_cp02

0x1911,	// (0x00043e43) list_pinb_item_pane_g1_ParamLimits

0x1911,	// (0x00043e43) list_pinb_item_pane_g1

0x191e,	// (0x00043e50) list_pinb_item_pane_g2_ParamLimits

0x191e,	// (0x00043e50) list_pinb_item_pane_g2

0x192a,	// (0x00043e5c) list_pinb_item_pane_g3_ParamLimits

0x192a,	// (0x00043e5c) list_pinb_item_pane_g3

0x193b,	// (0x00043e6d) list_pinb_item_pane_g4_ParamLimits

0x193b,	// (0x00043e6d) list_pinb_item_pane_g4

0x0003,

0xf152,	// (0x00051684) list_pinb_item_pane_g_ParamLimits

0xf152,	// (0x00051684) list_pinb_item_pane_g

0x1947,	// (0x00043e79) list_pinb_item_pane_t1_ParamLimits

0x1947,	// (0x00043e79) list_pinb_item_pane_t1

0x197c,	// (0x00043eae) calc_display_pane

0x19a2,	// (0x00043ed4) calc_paper_pane

0x19c5,	// (0x00043ef7) grid_calc_pane

0xc26a,	// (0x0004e79c) bg_list_pane_cp01

0x19f3,	// (0x00043f25) clock_g1

0x19fb,	// (0x00043f2d) clock_g2

0x0001,

0xf15b,	// (0x0005168d) clock_g

0x1a03,	// (0x00043f35) clock_t1_ParamLimits

0x1a03,	// (0x00043f35) clock_t1

0x1a18,	// (0x00043f4a) clock_t2_ParamLimits

0x1a18,	// (0x00043f4a) clock_t2

0x1a2a,	// (0x00043f5c) clock_t3_ParamLimits

0x1a2a,	// (0x00043f5c) clock_t3

0x1a3c,	// (0x00043f6e) clock_t4_ParamLimits

0x1a3c,	// (0x00043f6e) clock_t4

0x1a4e,	// (0x00043f80) clock_t5_ParamLimits

0x1a4e,	// (0x00043f80) clock_t5

0x1a63,	// (0x00043f95) clock_t6_ParamLimits

0x1a63,	// (0x00043f95) clock_t6

0x1a75,	// (0x00043fa7) clock_t7_ParamLimits

0x1a75,	// (0x00043fa7) clock_t7

0x1a87,	// (0x00043fb9) clock_t8_ParamLimits

0x1a87,	// (0x00043fb9) clock_t8

0x1a9b,	// (0x00043fcd) clock_t9_ParamLimits

0x1a9b,	// (0x00043fcd) clock_t9

0x0008,

0xf160,	// (0x00051692) clock_t_ParamLimits

0xf160,	// (0x00051692) clock_t

0xc54c,	// (0x0004ea7e) popup_clock_analogue_window_cp02

0xc54c,	// (0x0004ea7e) popup_clock_digital_window_cp01

0xc554,	// (0x0004ea86) listscroll_help_pane

0xc26a,	// (0x0004e79c) phob_pre_status_pane

0xc55e,	// (0x0004ea90) grid_qdial_pane

0xc26a,	// (0x0004e79c) listscroll_mce_pane

0xc568,	// (0x0004ea9a) bg_notes_pane

0xc572,	// (0x0004eaa4) list_notes_pane

0x1ab1,	// (0x00043fe3) scroll_pane_cp06

0xc57c,	// (0x0004eaae) bg_calc_paper_pane

0xa7e9,	// (0x0004cd1b) list_calc_pane

0xc590,	// (0x0004eac2) bg_calc_display_pane

0x1abc,	// (0x00043fee) calc_display_pane_t1

0x1ace,	// (0x00044000) calc_display_pane_t2

0xa803,	// (0x0004cd35) calc_display_pane_t3

0x0002,

0xf173,	// (0x000516a5) calc_display_pane_t

0x1ae0,	// (0x00044012) cell_calc_pane_ParamLimits

0x1ae0,	// (0x00044012) cell_calc_pane

0xc59c,	// (0x0004eace) bg_calc_paper_pane_g1

0xc5a8,	// (0x0004eada) bg_calc_paper_pane_g2

0xc5b4,	// (0x0004eae6) bg_calc_paper_pane_g3

0xc5c0,	// (0x0004eaf2) bg_calc_paper_pane_g4

0xc5cc,	// (0x0004eafe) bg_calc_paper_pane_g5

0x1b1b,	// (0x0004404d) bg_calc_paper_pane_g6

0x1b2e,	// (0x00044060) bg_calc_paper_pane_g7

0x1b41,	// (0x00044073) bg_calc_paper_pane_g8

0x0007,

0xf17a,	// (0x000516ac) bg_calc_paper_pane_g

0x1b52,	// (0x00044084) calc_bg_paper_pane_g9

0x1b63,	// (0x00044095) list_calc_item_pane_ParamLimits

0x1b63,	// (0x00044095) list_calc_item_pane

0xc5d8,	// (0x0004eb0a) list_calc_item_pane_g1

0xa815,	// (0x0004cd47) list_calc_item_pane_t1_ParamLimits

0xa815,	// (0x0004cd47) list_calc_item_pane_t1

0x1b77,	// (0x000440a9) list_calc_item_pane_t2_ParamLimits

0x1b77,	// (0x000440a9) list_calc_item_pane_t2

0x0001,

0xf18b,	// (0x000516bd) list_calc_item_pane_t_ParamLimits

0xf18b,	// (0x000516bd) list_calc_item_pane_t

0xc5e5,	// (0x0004eb17) cell_calc_pane_g1

0xc5ef,	// (0x0004eb21) grid_highlight_pane_cp02

0xc611,	// (0x0004eb43) bg_calc_display_pane_g1

0xa827,	// (0x0004cd59) bg_calc_display_pane_g2

0xc61a,	// (0x0004eb4c) bg_calc_display_pane_g3

0x0002,

0xf195,	// (0x000516c7) bg_calc_display_pane_g

0x1ba9,	// (0x000440db) cell_qdial_pane_ParamLimits

0x1ba9,	// (0x000440db) cell_qdial_pane

0x1bbf,	// (0x000440f1) cell_qdial_pane_g1_ParamLimits

0x1bbf,	// (0x000440f1) cell_qdial_pane_g1

0x1bd5,	// (0x00044107) cell_qdial_pane_g2_ParamLimits

0x1bd5,	// (0x00044107) cell_qdial_pane_g2

0xc623,	// (0x0004eb55) cell_qdial_pane_g3_ParamLimits

0xc623,	// (0x0004eb55) cell_qdial_pane_g3

0x0003,

0xf19c,	// (0x000516ce) cell_qdial_pane_g_ParamLimits

0xf19c,	// (0x000516ce) cell_qdial_pane_g

0x1bfb,	// (0x0004412d) cell_qdial_pane_t1_ParamLimits

0x1bfb,	// (0x0004412d) cell_qdial_pane_t1

0x1c13,	// (0x00044145) cell_qdial_pane_t2_ParamLimits

0x1c13,	// (0x00044145) cell_qdial_pane_t2

0x1c26,	// (0x00044158) cell_qdial_pane_t3_ParamLimits

0x1c26,	// (0x00044158) cell_qdial_pane_t3

0x0002,

0xf1a5,	// (0x000516d7) cell_qdial_pane_t_ParamLimits

0xf1a5,	// (0x000516d7) cell_qdial_pane_t

0xc26a,	// (0x0004e79c) grid_highlight_pane_cp04

0xc62f,	// (0x0004eb61) thumbnail_qdial_pane_ParamLimits

0xc62f,	// (0x0004eb61) thumbnail_qdial_pane

0xc68b,	// (0x0004ebbd) list_help_pane

0xc694,	// (0x0004ebc6) scroll_pane_cp02

0x1c39,	// (0x0004416b) help_list_pane_t1_ParamLimits

0x1c39,	// (0x0004416b) help_list_pane_t1

0xa831,	// (0x0004cd63) bg_notes_pane_g2

0xa839,	// (0x0004cd6b) bg_notes_pane_g3

0xa841,	// (0x0004cd73) notes_bg_pane_g1

0xa849,	// (0x0004cd7b) notes_bg_pane_g4

0xa851,	// (0x0004cd83) notes_bg_pane_g5

0xa859,	// (0x0004cd8b) notes_bg_pane_g6

0xa861,	// (0x0004cd93) notes_bg_pane_g7

0xa869,	// (0x0004cd9b) notes_bg_pane_g8

0xa871,	// (0x0004cda3) notes_bg_pane_g9

0x0006,

0xf1c3,	// (0x000516f5) notes_bg_pane_g

0x1c5d,	// (0x0004418f) list_notes_text_pane_ParamLimits

0x1c5d,	// (0x0004418f) list_notes_text_pane

0xc69d,	// (0x0004ebcf) list_notes_text_pane_g1

0xa879,	// (0x0004cdab) list_notes_text_pane_t1

0xc590,	// (0x0004eac2) listscroll_cale_week_pane

0x1c91,	// (0x000441c3) bg_cale_heading_pane

0xc6b7,	// (0x0004ebe9) bg_cale_pane_cp01

0x1cad,	// (0x000441df) cale_week_corner_pane

0x1cc3,	// (0x000441f5) cale_week_day_heading_pane

0x1cdf,	// (0x00044211) cale_week_scroll_pane_g1

0x1cf8,	// (0x0004422a) cale_week_scroll_pane_g2

0x1d09,	// (0x0004423b) cale_week_scroll_pane_g3

0x1d1a,	// (0x0004424c) cale_week_scroll_pane_g4

0x1d2b,	// (0x0004425d) cale_week_scroll_pane_g5

0x1d3c,	// (0x0004426e) cale_week_scroll_pane_g6

0x1d4d,	// (0x0004427f) cale_week_scroll_pane_g7

0x1d5e,	// (0x00044290) cale_week_scroll_pane_g8

0x1d6f,	// (0x000442a1) cale_week_scroll_pane_g9

0x1d80,	// (0x000442b2) cale_week_scroll_pane_g10

0x1d91,	// (0x000442c3) cale_week_scroll_pane_g11

0x1da2,	// (0x000442d4) cale_week_scroll_pane_g12

0x1db3,	// (0x000442e5) cale_week_scroll_pane_g13

0x1dcc,	// (0x000442fe) cale_week_scroll_pane_g14

0x1de5,	// (0x00044317) cale_week_scroll_pane_g15

0x000e,

0xf1d2,	// (0x00051704) cale_week_scroll_pane_g

0x1dfe,	// (0x00044330) cale_week_time_pane

0x1e0f,	// (0x00044341) grid_cale_week_pane

0x1e2a,	// (0x0004435c) scroll_pane_cp08

0x1e42,	// (0x00044374) cell_cale_week_pane_ParamLimits

0x1e42,	// (0x00044374) cell_cale_week_pane

0x1e8a,	// (0x000443bc) cale_week_day_heading_pane_t1

0x1e9e,	// (0x000443d0) cale_week_day_heading_pane_t2

0x1eb2,	// (0x000443e4) cale_week_day_heading_pane_t3

0x1ec6,	// (0x000443f8) cale_week_day_heading_pane_t4

0x1eda,	// (0x0004440c) cale_week_day_heading_pane_t5

0x1eee,	// (0x00044420) cale_week_day_heading_pane_t6

0x1f02,	// (0x00044434) cale_week_day_heading_pane_t7

0x0006,

0xf1f1,	// (0x00051723) cale_week_day_heading_pane_t

0xc6e2,	// (0x0004ec14) bg_cale_side_pane

0x1f16,	// (0x00044448) cale_week_time_pane_t1

0x1f2e,	// (0x00044460) cale_week_time_pane_t2

0x1f46,	// (0x00044478) cale_week_time_pane_t3

0x1f5e,	// (0x00044490) cale_week_time_pane_t4

0x1f76,	// (0x000444a8) cale_week_time_pane_t5

0x1f8e,	// (0x000444c0) cale_week_time_pane_t6

0x1fa6,	// (0x000444d8) cale_week_time_pane_t7

0x1fc2,	// (0x000444f4) cale_week_time_pane_t8

0x0007,

0xf200,	// (0x00051732) cale_week_time_pane_t

0x1fe2,	// (0x00044514) cell_cale_week_pane_g2

0x1ff3,	// (0x00044525) cell_cale_week_pane_g3_ParamLimits

0x1ff3,	// (0x00044525) cell_cale_week_pane_g3

0xc6f0,	// (0x0004ec22) grid_highlight_pane_cp07

0xc6f8,	// (0x0004ec2a) listscroll_gms_pane

0xc702,	// (0x0004ec34) grid_gms_pane

0xc70b,	// (0x0004ec3d) listscroll_gms_pane_g1

0xc713,	// (0x0004ec45) listscroll_gms_pane_g2

0x0001,

0xf211,	// (0x00051743) listscroll_gms_pane_g

0x200b,	// (0x0004453d) scroll_pane_cp010

0x2016,	// (0x00044548) cell_gms_pane_ParamLimits

0x2016,	// (0x00044548) cell_gms_pane

0x2030,	// (0x00044562) cell_gms_pane_g1

0xc71b,	// (0x0004ec4d) cell_gms_pane_g2

0xc723,	// (0x0004ec55) cell_gms_pane_g3

0xc72c,	// (0x0004ec5e) cell_gms_pane_g4

0x0003,

0xf216,	// (0x00051748) cell_gms_pane_g

0xc735,	// (0x0004ec67) grid_highlight_pane_cp09

0x41d5,	// (0x00046707) phob_pre_status_pane_g1

0x41dd,	// (0x0004670f) phob_pre_status_pane_g2

0x41e5,	// (0x00046717) phob_pre_status_pane_g3

0x41ed,	// (0x0004671f) phob_pre_status_pane_g4

0x0004,

0xf545,	// (0x00051a77) phob_pre_status_pane_g

0x41fd,	// (0x0004672f) phob_pre_status_pane_t1

0x420d,	// (0x0004673f) phob_pre_status_pane_t2

0x421d,	// (0x0004674f) phob_pre_status_pane_t3

0x0002,

0xf550,	// (0x00051a82) phob_pre_status_pane_t

0xc26a,	// (0x0004e79c) bg_list_pane_cp05

0x2040,	// (0x00044572) grid_vorec_pane

0xa887,	// (0x0004cdb9) vorec_t1

0xa895,	// (0x0004cdc7) vorec_t2

0xa8a3,	// (0x0004cdd5) vorec_t3

0xa8b1,	// (0x0004cde3) vorec_t4

0xa8bf,	// (0x0004cdf1) vorec_t5

0xa8cd,	// (0x0004cdff) vorec_t6

0x0006,

0xf21f,	// (0x00051751) vorec_t

0xa8e9,	// (0x0004ce1b) wait_bar_pane_cp01

0x204a,	// (0x0004457c) cell_vorec_pane_ParamLimits

0x204a,	// (0x0004457c) cell_vorec_pane

0xc73d,	// (0x0004ec6f) cell_vorec_pane_g1

0xc26a,	// (0x0004e79c) grid_highlight_pane_cp05

0x2075,	// (0x000445a7) cams_zoom_pane

0x2084,	// (0x000445b6) image_vga_pane

0x209e,	// (0x000445d0) main_camera_pane_g1

0x20b0,	// (0x000445e2) main_camera_pane_g2

0x20c0,	// (0x000445f2) main_camera_pane_g3

0x20d4,	// (0x00044606) main_camera_pane_g4

0x20e8,	// (0x0004461a) main_camera_pane_g5

0x20fc,	// (0x0004462e) main_camera_pane_g6

0x2110,	// (0x00044642) main_camera_pane_g7

0x0007,

0xf22e,	// (0x00051760) main_camera_pane_g

0x2124,	// (0x00044656) main_camera_pane_t1

0x213a,	// (0x0004466c) main_camera_pane_t2

0x0001,

0xf23f,	// (0x00051771) main_camera_pane_t

0x2178,	// (0x000446aa) cams_zoom_pane_cp_ParamLimits

0x2178,	// (0x000446aa) cams_zoom_pane_cp

0x21a0,	// (0x000446d2) image_cif_pane_ParamLimits

0x21a0,	// (0x000446d2) image_cif_pane

0x21db,	// (0x0004470d) image_subqcif_pane

0x21e5,	// (0x00044717) main_video_pane_g1_ParamLimits

0x21e5,	// (0x00044717) main_video_pane_g1

0x2209,	// (0x0004473b) main_video_pane_g2_ParamLimits

0x2209,	// (0x0004473b) main_video_pane_g2

0x223f,	// (0x00044771) main_video_pane_g3_ParamLimits

0x223f,	// (0x00044771) main_video_pane_g3

0x226d,	// (0x0004479f) main_video_pane_g4_ParamLimits

0x226d,	// (0x0004479f) main_video_pane_g4

0x229b,	// (0x000447cd) main_video_pane_g5_ParamLimits

0x229b,	// (0x000447cd) main_video_pane_g5

0xc753,	// (0x0004ec85) main_video_pane_g6_ParamLimits

0xc753,	// (0x0004ec85) main_video_pane_g6

0x0006,

0xf244,	// (0x00051776) main_video_pane_g_ParamLimits

0xf244,	// (0x00051776) main_video_pane_g

0x22c4,	// (0x000447f6) main_video_pane_t1_ParamLimits

0x22c4,	// (0x000447f6) main_video_pane_t1

0xc76d,	// (0x0004ec9f) cams_zoom_pane_g1

0xc776,	// (0x0004eca8) cams_zoom_pane_g2

0xc77f,	// (0x0004ecb1) cams_zoom_pane_g3

0xc788,	// (0x0004ecba) cams_zoom_pane_g4

0x0003,

0xf253,	// (0x00051785) cams_zoom_pane_g

0x2321,	// (0x00044853) grid_cams_pane

0x233b,	// (0x0004486d) linegrid_cams_pane

0x234f,	// (0x00044881) cell_cams_pane_ParamLimits

0x234f,	// (0x00044881) cell_cams_pane

0xc791,	// (0x0004ecc3) cams_burst_image_pane

0xc799,	// (0x0004eccb) cell_cams_pane_g1

0xc26a,	// (0x0004e79c) grid_highlight_pane_cp03

0xc5e5,	// (0x0004eb17) mp_bg_pane_g1

0xc26a,	// (0x0004e79c) bg_list_pane_cp03

0xe336,	// (0x00050868) bg_mp_pane

0xe33e,	// (0x00050870) grid_mp_pane

0xe346,	// (0x00050878) media_player_g1

0xe350,	// (0x00050882) media_player_t1

0xe35e,	// (0x00050890) media_player_t2

0xe36c,	// (0x0005089e) media_player_t3

0xe37a,	// (0x000508ac) media_player_t4

0xe388,	// (0x000508ba) media_player_t5

0xe396,	// (0x000508c8) media_player_t6

0xe3a4,	// (0x000508d6) media_player_t7

0x0006,

0x0166,	// (0x00042698) media_player_t

0xe3b2,	// (0x000508e4) wait_bar_pane_cp02

0xf531,	// (0x00051a63) main_usb_pane_t

0x41cc,	// (0x000466fe) cell_mp_pane

0xc5e5,	// (0x0004eb17) cell_mp_pane_g1

0xc26a,	// (0x0004e79c) grid_highlight_pane_cp06

0xc7a1,	// (0x0004ecd3) grid_skin_colour_pane

0xc7a9,	// (0x0004ecdb) list_highlight_pane_cp03

0x2371,	// (0x000448a3) skin_g1

0xc7b1,	// (0x0004ece3) skin_t1

0xc7c0,	// (0x0004ecf2) skin_t2

0x0001,

0xf288,	// (0x000517ba) skin_t

0x237b,	// (0x000448ad) cell_skin_colour_pane_ParamLimits

0x237b,	// (0x000448ad) cell_skin_colour_pane

0xc7ce,	// (0x0004ed00) cell_skin_colour_pane_g1

0x23ee,	// (0x00044920) call_video_g1_ParamLimits

0x23ee,	// (0x00044920) call_video_g1

0x240a,	// (0x0004493c) call_video_g2_ParamLimits

0x240a,	// (0x0004493c) call_video_g2

0x0001,

0xf28d,	// (0x000517bf) call_video_g_ParamLimits

0xf28d,	// (0x000517bf) call_video_g

0x2452,	// (0x00044984) call_video_uplink_pane_cp1_ParamLimits

0x2452,	// (0x00044984) call_video_uplink_pane_cp1

0xc7e0,	// (0x0004ed12) call_video_uplink_pane_cp2

0x24f3,	// (0x00044a25) video_down_crop_pane_ParamLimits

0x24f3,	// (0x00044a25) video_down_crop_pane

0x25dc,	// (0x00044b0e) video_down_pane_ParamLimits

0x25dc,	// (0x00044b0e) video_down_pane

0xc7e8,	// (0x0004ed1a) video_down_subqcif_pane_ParamLimits

0xc7e8,	// (0x0004ed1a) video_down_subqcif_pane

0xc802,	// (0x0004ed34) video_down_subqcif_pane_cp_ParamLimits

0xc802,	// (0x0004ed34) video_down_subqcif_pane_cp

0xc828,	// (0x0004ed5a) im_reading_pane_ParamLimits

0xc828,	// (0x0004ed5a) im_reading_pane

0x26e5,	// (0x00044c17) im_writing_pane_ParamLimits

0x26e5,	// (0x00044c17) im_writing_pane

0x2703,	// (0x00044c35) im_reading_pane_t1

0xc842,	// (0x0004ed74) list_im_pane

0xc853,	// (0x0004ed85) scroll_pane_cp07

0x2742,	// (0x00044c74) im_writing_pane_t1_ParamLimits

0x2742,	// (0x00044c74) im_writing_pane_t1

0xc86c,	// (0x0004ed9e) im_writing_pane_t2_ParamLimits

0xc86c,	// (0x0004ed9e) im_writing_pane_t2

0x0001,

0xf297,	// (0x000517c9) im_writing_pane_t_ParamLimits

0xf297,	// (0x000517c9) im_writing_pane_t

0xc26a,	// (0x0004e79c) input_focus_pane_cp04

0xc26a,	// (0x0004e79c) input_focus_pane_cp05

0x2757,	// (0x00044c89) list_im_single_pane_ParamLimits

0x2757,	// (0x00044c89) list_im_single_pane

0x2770,	// (0x00044ca2) list_single_im_pane_t1

0x418c,	// (0x000466be) blid_accuracy_pane

0x4194,	// (0x000466c6) blid_compass_pane

0x419e,	// (0x000466d0) main_location_t1

0x41ae,	// (0x000466e0) main_location_t2

0x41be,	// (0x000466f0) main_location_t3

0x0002,

0xf53e,	// (0x00051a70) main_location_t

0xc26a,	// (0x0004e79c) aid_levels_location

0xc5e5,	// (0x0004eb17) blid_accuracy_pane_g1

0xc5e5,	// (0x0004eb17) blid_accuracy_pane_g2

0x0001,

0xf2f9,	// (0x0005182b) blid_accuracy_pane_g

0xc8b4,	// (0x0004ede6) wml_content_pane

0xc8f2,	// (0x0004ee24) wml_button_pane_ParamLimits

0xc8f2,	// (0x0004ee24) wml_button_pane

0x277f,	// (0x00044cb1) wml_list_single_large_pane_ParamLimits

0x277f,	// (0x00044cb1) wml_list_single_large_pane

0x2798,	// (0x00044cca) wml_list_single_medium_pane_ParamLimits

0x2798,	// (0x00044cca) wml_list_single_medium_pane

0x27b2,	// (0x00044ce4) wml_list_single_small_pane_ParamLimits

0x27b2,	// (0x00044ce4) wml_list_single_small_pane

0xc906,	// (0x0004ee38) wml_selection_box_pane_ParamLimits

0xc906,	// (0x0004ee38) wml_selection_box_pane

0xc919,	// (0x0004ee4b) wml_list_single_pane_t1

0xc928,	// (0x0004ee5a) wml_list_single_medium_pane_t1

0xc937,	// (0x0004ee69) wml_list_single_large_pane_t1

0xc946,	// (0x0004ee78) input_focus_pane_cp02_ParamLimits

0xc946,	// (0x0004ee78) input_focus_pane_cp02

0xc959,	// (0x0004ee8b) wml_selection_box_pane_g1

0xc962,	// (0x0004ee94) wml_selection_box_pane_t1_ParamLimits

0xc962,	// (0x0004ee94) wml_selection_box_pane_t1

0xc4c5,	// (0x0004e9f7) bg_wml_button_pane_ParamLimits

0xc4c5,	// (0x0004e9f7) bg_wml_button_pane

0xc97a,	// (0x0004eeac) wml_button_pane_g1

0xc982,	// (0x0004eeb4) wml_button_pane_t1

0xc97a,	// (0x0004eeac) wml_button_bg_pane_g1

0xc992,	// (0x0004eec4) wml_button_bg_pane_g2

0xc99a,	// (0x0004eecc) wml_button_bg_pane_g3

0xc9a2,	// (0x0004eed4) wml_button_bg_pane_g4

0xc9aa,	// (0x0004eedc) wml_button_bg_pane_g5

0xc9b2,	// (0x0004eee4) wml_button_bg_pane_g6

0xc9ba,	// (0x0004eeec) wml_button_bg_pane_g7

0xc9c2,	// (0x0004eef4) wml_button_bg_pane_g8

0xc9ca,	// (0x0004eefc) wml_button_bg_pane_g9

0x0008,

0xf29c,	// (0x000517ce) wml_button_bg_pane_g

0x27d1,	// (0x00044d03) bg_list_pane_cp02

0xc9d2,	// (0x0004ef04) mce_header_pane_ParamLimits

0xc9d2,	// (0x0004ef04) mce_header_pane

0xc9e8,	// (0x0004ef1a) mce_icon_pane

0xc9e8,	// (0x0004ef1a) mce_image_pane

0xc9f1,	// (0x0004ef23) mce_text_pane_ParamLimits

0xc9f1,	// (0x0004ef23) mce_text_pane

0x27db,	// (0x00044d0d) scroll_pane_cp03

0xc8ea,	// (0x0004ee1c) scroll_pane_cp04

0xca04,	// (0x0004ef36) scroll_pane_cp05_ParamLimits

0xca04,	// (0x0004ef36) scroll_pane_cp05

0x27e5,	// (0x00044d17) mce_header_field_pane_ParamLimits

0x27e5,	// (0x00044d17) mce_header_field_pane

0x27fe,	// (0x00044d30) mce_header_field_pane_2_ParamLimits

0x27fe,	// (0x00044d30) mce_header_field_pane_2

0x2814,	// (0x00044d46) mce_header_field_pane_3

0x281c,	// (0x00044d4e) list_single_mce_message_pane_ParamLimits

0x281c,	// (0x00044d4e) list_single_mce_message_pane

0x2838,	// (0x00044d6a) list_single_mce_smart_pane_ParamLimits

0x2838,	// (0x00044d6a) list_single_mce_smart_pane

0xca10,	// (0x0004ef42) input_focus_pane_cp03

0xca19,	// (0x0004ef4b) list_header_data_pane

0x285f,	// (0x00044d91) mce_header_field_pane_t1

0x286f,	// (0x00044da1) list_single_mce_header_pane_ParamLimits

0x286f,	// (0x00044da1) list_single_mce_header_pane

0xca21,	// (0x0004ef53) list_single_mce_header_pane_t1

0xca30,	// (0x0004ef62) list_single_mce_message_pane_g1

0xca38,	// (0x0004ef6a) list_single_mce_message_pane_t1

0x28a1,	// (0x00044dd3) bg_cale_heading_pane_cp01_ParamLimits

0x28a1,	// (0x00044dd3) bg_cale_heading_pane_cp01

0xca46,	// (0x0004ef78) bg_cale_pane_cp02_ParamLimits

0xca46,	// (0x0004ef78) bg_cale_pane_cp02

0x28d4,	// (0x00044e06) cale_month_corner_pane

0x28ea,	// (0x00044e1c) cale_month_day_heading_pane_ParamLimits

0x28ea,	// (0x00044e1c) cale_month_day_heading_pane

0x291d,	// (0x00044e4f) cale_month_pane_g1_ParamLimits

0x291d,	// (0x00044e4f) cale_month_pane_g1

0x2949,	// (0x00044e7b) cale_month_pane_g2_ParamLimits

0x2949,	// (0x00044e7b) cale_month_pane_g2

0x296a,	// (0x00044e9c) cale_month_pane_g3_ParamLimits

0x296a,	// (0x00044e9c) cale_month_pane_g3

0x29a6,	// (0x00044ed8) cale_month_pane_g4_ParamLimits

0x29a6,	// (0x00044ed8) cale_month_pane_g4

0x29e2,	// (0x00044f14) cale_month_pane_g5_ParamLimits

0x29e2,	// (0x00044f14) cale_month_pane_g5

0x2a1e,	// (0x00044f50) cale_month_pane_g6_ParamLimits

0x2a1e,	// (0x00044f50) cale_month_pane_g6

0x2a5a,	// (0x00044f8c) cale_month_pane_g7_ParamLimits

0x2a5a,	// (0x00044f8c) cale_month_pane_g7

0x2a96,	// (0x00044fc8) cale_month_pane_g8_ParamLimits

0x2a96,	// (0x00044fc8) cale_month_pane_g8

0x2ad2,	// (0x00045004) cale_month_pane_g9_ParamLimits

0x2ad2,	// (0x00045004) cale_month_pane_g9

0x2b08,	// (0x0004503a) cale_month_pane_g10_ParamLimits

0x2b08,	// (0x0004503a) cale_month_pane_g10

0x2b32,	// (0x00045064) cale_month_pane_g11_ParamLimits

0x2b32,	// (0x00045064) cale_month_pane_g11

0x2b5c,	// (0x0004508e) cale_month_pane_g12_ParamLimits

0x2b5c,	// (0x0004508e) cale_month_pane_g12

0x2b8a,	// (0x000450bc) cale_month_pane_g13_ParamLimits

0x2b8a,	// (0x000450bc) cale_month_pane_g13

0x000c,

0xf2af,	// (0x000517e1) cale_month_pane_g_ParamLimits

0xf2af,	// (0x000517e1) cale_month_pane_g

0x2bb8,	// (0x000450ea) cale_month_week_pane

0x2bc9,	// (0x000450fb) grid_cale_month_pane_ParamLimits

0x2bc9,	// (0x000450fb) grid_cale_month_pane

0x2bf7,	// (0x00045129) cale_month_day_heading_pane_t1

0x2c55,	// (0x00045187) cale_month_day_heading_pane_t2

0x2cba,	// (0x000451ec) cale_month_day_heading_pane_t3

0x2d1f,	// (0x00045251) cale_month_day_heading_pane_t4

0x2d84,	// (0x000452b6) cale_month_day_heading_pane_t5

0x2de9,	// (0x0004531b) cale_month_day_heading_pane_t6

0x2e4e,	// (0x00045380) cale_month_day_heading_pane_t7

0x0006,

0xf2ca,	// (0x000517fc) cale_month_day_heading_pane_t

0xc6e2,	// (0x0004ec14) bg_cale_side_pane_cp01

0x2eb3,	// (0x000453e5) cale_month_week_pane_t1

0x2eca,	// (0x000453fc) cale_month_week_pane_t2

0x2ee1,	// (0x00045413) cale_month_week_pane_t3

0x2ef8,	// (0x0004542a) cale_month_week_pane_t4

0x2f0f,	// (0x00045441) cale_month_week_pane_t5

0x2f26,	// (0x00045458) cale_month_week_pane_t6

0x0005,

0xf2d9,	// (0x0005180b) cale_month_week_pane_t

0x2f45,	// (0x00045477) cell_cale_month_pane_ParamLimits

0x2f45,	// (0x00045477) cell_cale_month_pane

0xa9d9,	// (0x0004cf0b) cell_cale_month_pane_g1

0x2ff3,	// (0x00045525) cell_cale_month_pane_t1_ParamLimits

0x2ff3,	// (0x00045525) cell_cale_month_pane_t1

0xc6f0,	// (0x0004ec22) grid_highlight_pane_cp08

0xc5e5,	// (0x0004eb17) main_smil_g1

0x300f,	// (0x00045541) smil_status_pane

0xca7b,	// (0x0004efad) smil_text_pane

0xe254,	// (0x00050786) bg_popup_call3_rect_pane_g8

0xe25c,	// (0x0005078e) bg_popup_call3_rect_pane_g9

0x0008,

0x0109,	// (0x0004263b) bg_popup_call3_rect_pane_g

0xe4f1,	// (0x00050a23) smil_status_volume_pane_g1

0xca85,	// (0x0004efb7) smil_status_pane_t1

0xab4e,	// (0x0004d080) volume_smil_pane

0xca9c,	// (0x0004efce) list_smil_text_pane

0x3024,	// (0x00045556) scroll_pane_cp011

0x302f,	// (0x00045561) smil_text_list_pane_t1_ParamLimits

0x302f,	// (0x00045561) smil_text_list_pane_t1

0xa9e5,	// (0x0004cf17) aid_volume_smil_ParamLimits

0xa9e5,	// (0x0004cf17) aid_volume_smil

0xc5e5,	// (0x0004eb17) smil_volume_pane_g1

0xc5e5,	// (0x0004eb17) smil_volume_pane_g2

0x0001,

0xf2f9,	// (0x0005182b) smil_volume_pane_g

0xc590,	// (0x0004eac2) listscroll_cale_day_pane

0xcaa6,	// (0x0004efd8) bg_cale_pane

0xcabe,	// (0x0004eff0) list_cale_pane

0xcacf,	// (0x0004f001) scroll_pane_cp09

0xcae0,	// (0x0004f012) cale_bg_pane_g1

0xcae8,	// (0x0004f01a) cale_bg_pane_g2

0xcaf0,	// (0x0004f022) cale_bg_pane_g3

0xcaf8,	// (0x0004f02a) cale_bg_pane_g4

0xcb00,	// (0x0004f032) cale_bg_pane_g5

0xcb08,	// (0x0004f03a) cale_bg_pane_g6

0xcb10,	// (0x0004f042) cale_bg_pane_g7

0xcb18,	// (0x0004f04a) cale_bg_pane_g8

0xcb20,	// (0x0004f052) cale_bg_pane_g9

0x0008,

0xf2fe,	// (0x00051830) cale_bg_pane_g

0x3084,	// (0x000455b6) list_cale_time_pane_ParamLimits

0x3084,	// (0x000455b6) list_cale_time_pane

0x3099,	// (0x000455cb) list_cale_time_pane_g1_ParamLimits

0x3099,	// (0x000455cb) list_cale_time_pane_g1

0xcb28,	// (0x0004f05a) list_cale_time_pane_g2_ParamLimits

0xcb28,	// (0x0004f05a) list_cale_time_pane_g2

0x30a5,	// (0x000455d7) list_cale_time_pane_g3_ParamLimits

0x30a5,	// (0x000455d7) list_cale_time_pane_g3

0x30b3,	// (0x000455e5) list_cale_time_pane_g4_ParamLimits

0x30b3,	// (0x000455e5) list_cale_time_pane_g4

0x30c1,	// (0x000455f3) list_cale_time_pane_g5_ParamLimits

0x30c1,	// (0x000455f3) list_cale_time_pane_g5

0x0005,

0xf311,	// (0x00051843) list_cale_time_pane_g_ParamLimits

0xf311,	// (0x00051843) list_cale_time_pane_g

0x30cf,	// (0x00045601) list_cale_time_pane_t1_ParamLimits

0x30cf,	// (0x00045601) list_cale_time_pane_t1

0x30f7,	// (0x00045629) list_cale_time_pane_t2_ParamLimits

0x30f7,	// (0x00045629) list_cale_time_pane_t2

0x3413,	// (0x00045945) aid_blid_cardinal_pane

0x3455,	// (0x00045987) compass_pane_t4

0x311f,	// (0x00045651) list_cale_time_pane_t4_ParamLimits

0x311f,	// (0x00045651) list_cale_time_pane_t4

0x3463,	// (0x00045995) compass_pane_t5

0x3473,	// (0x000459a5) compass_pane_t6

0x3481,	// (0x000459b3) compass_pane_t7

0xcf36,	// (0x0004f468) navi_pane_cc_t1

0xd08b,	// (0x0004f5bd) aid_phob_thumbnail_center_pane

0x3b52,	// (0x00046084) main_postcard_pane_g4_ParamLimits

0x0002,

0xf31e,	// (0x00051850) list_cale_time_pane_t_ParamLimits

0xf31e,	// (0x00051850) list_cale_time_pane_t

0xa76f,	// (0x0004cca1) bg_popup_window_pane_cp02_ParamLimits

0xa76f,	// (0x0004cca1) bg_popup_window_pane_cp02

0xcb42,	// (0x0004f074) heading_pane_cp01_ParamLimits

0xcb42,	// (0x0004f074) heading_pane_cp01

0xcb4e,	// (0x0004f080) loc_req_pane_ParamLimits

0xcb4e,	// (0x0004f080) loc_req_pane

0xcb5e,	// (0x0004f090) loc_type_pane_ParamLimits

0xcb5e,	// (0x0004f090) loc_type_pane

0xcb70,	// (0x0004f0a2) loc_type_pane_t1_ParamLimits

0xcb70,	// (0x0004f0a2) loc_type_pane_t1

0xcb82,	// (0x0004f0b4) loc_type_pane_t2_ParamLimits

0xcb82,	// (0x0004f0b4) loc_type_pane_t2

0xcb94,	// (0x0004f0c6) loc_type_pane_t3_ParamLimits

0xcb94,	// (0x0004f0c6) loc_type_pane_t3

0x0002,

0xf325,	// (0x00051857) loc_type_pane_t_ParamLimits

0xf325,	// (0x00051857) loc_type_pane_t

0xcba6,	// (0x0004f0d8) list_loc_req_pane

0xcbb0,	// (0x0004f0e2) scroll_pane_cp012

0x3147,	// (0x00045679) list_single_loc_request_popup_menu_pane_ParamLimits

0x3147,	// (0x00045679) list_single_loc_request_popup_menu_pane

0xcbbb,	// (0x0004f0ed) list_single_loc_request_popup_menu_pane_g1_ParamLimits

0xcbbb,	// (0x0004f0ed) list_single_loc_request_popup_menu_pane_g1

0xcbc7,	// (0x0004f0f9) list_single_loc_request_popup_menu_pane_g2_ParamLimits

0xcbc7,	// (0x0004f0f9) list_single_loc_request_popup_menu_pane_g2

0x0001,

0xf32c,	// (0x0005185e) list_single_loc_request_popup_menu_pane_g_ParamLimits

0xf32c,	// (0x0005185e) list_single_loc_request_popup_menu_pane_g

0xcbd3,	// (0x0004f105) list_single_loc_request_popup_menu_pane_t1_ParamLimits

0xcbd3,	// (0x0004f105) list_single_loc_request_popup_menu_pane_t1

0xc4c5,	// (0x0004e9f7) bg_popup_window_pane_cp03_ParamLimits

0xc4c5,	// (0x0004e9f7) bg_popup_window_pane_cp03

0xd559,	// (0x0004fa8b) heading_loc_req_pane_ParamLimits

0xd559,	// (0x0004fa8b) heading_loc_req_pane

0x3154,	// (0x00045686) popup_dyc_status_message_window_g1_ParamLimits

0x3154,	// (0x00045686) popup_dyc_status_message_window_g1

0x3168,	// (0x0004569a) popup_dyc_status_message_window_t1_ParamLimits

0x3168,	// (0x0004569a) popup_dyc_status_message_window_t1

0x317d,	// (0x000456af) popup_dyc_status_message_window_t2_ParamLimits

0x317d,	// (0x000456af) popup_dyc_status_message_window_t2

0x3192,	// (0x000456c4) popup_dyc_status_message_window_t3_ParamLimits

0x3192,	// (0x000456c4) popup_dyc_status_message_window_t3

0x0002,

0xf331,	// (0x00051863) popup_dyc_status_message_window_t_ParamLimits

0xf331,	// (0x00051863) popup_dyc_status_message_window_t

0xc26a,	// (0x0004e79c) bg_heading_pane_cp01

0xcbe9,	// (0x0004f11b) heading_loc_req_pane_g1

0xcbf1,	// (0x0004f123) heading_loc_req_pane_g2

0xcbf9,	// (0x0004f12b) heading_loc_req_pane_g3

0x0002,

0xf338,	// (0x0005186a) heading_loc_req_pane_g

0xcc01,	// (0x0004f133) heading_loc_req_pane_t1

0xcc11,	// (0x0004f143) bg_popup_sub_pane_cp01_ParamLimits

0xcc11,	// (0x0004f143) bg_popup_sub_pane_cp01

0xcc1f,	// (0x0004f151) popup_cale_events_window_g1_ParamLimits

0xcc1f,	// (0x0004f151) popup_cale_events_window_g1

0xcc3f,	// (0x0004f171) popup_cale_events_window_g2_ParamLimits

0xcc3f,	// (0x0004f171) popup_cale_events_window_g2

0x0001,

0xf36c,	// (0x0005189e) popup_cale_events_window_g_ParamLimits

0xf36c,	// (0x0005189e) popup_cale_events_window_g

0xcc5f,	// (0x0004f191) popup_cale_events_window_t1_ParamLimits

0xcc5f,	// (0x0004f191) popup_cale_events_window_t1

0xcc71,	// (0x0004f1a3) popup_cale_events_window_t2_ParamLimits

0xcc71,	// (0x0004f1a3) popup_cale_events_window_t2

0xccaf,	// (0x0004f1e1) popup_cale_events_window_t3_ParamLimits

0xccaf,	// (0x0004f1e1) popup_cale_events_window_t3

0xcce9,	// (0x0004f21b) popup_cale_events_window_t4_ParamLimits

0xcce9,	// (0x0004f21b) popup_cale_events_window_t4

0x0003,

0xf371,	// (0x000518a3) popup_cale_events_window_t_ParamLimits

0xf371,	// (0x000518a3) popup_cale_events_window_t

0x31c6,	// (0x000456f8) call_type_pane

0x31d6,	// (0x00045708) popup_call_status_window_g1

0x31ea,	// (0x0004571c) popup_call_status_window_g2

0x31fe,	// (0x00045730) popup_call_status_window_g3

0x0002,

0xf37a,	// (0x000518ac) popup_call_status_window_g

0xcd1f,	// (0x0004f251) call_type_pane_g1

0xcd28,	// (0x0004f25a) call_type_pane_g2

0x0001,

0xf381,	// (0x000518b3) call_type_pane_g

0xc26a,	// (0x0004e79c) bg_popup_sub_pane_cp02

0xcd31,	// (0x0004f263) listscroll_popup_wml_pane

0xcd39,	// (0x0004f26b) list_wml_pane

0xcd43,	// (0x0004f275) scroll_pane_cp013

0xcd4e,	// (0x0004f280) list_single_graphic_popup_wml_pane_ParamLimits

0xcd4e,	// (0x0004f280) list_single_graphic_popup_wml_pane

0xc5e5,	// (0x0004eb17) list_single_graphic_popup_wml_pane_g1

0xcd62,	// (0x0004f294) list_single_graphic_popup_wml_pane_g2

0x0001,

0xf386,	// (0x000518b8) list_single_graphic_popup_wml_pane_g

0xcd6a,	// (0x0004f29c) list_single_graphic_popup_wml_pane_t1

0xcd80,	// (0x0004f2b2) aid_call_pane

0xc4bd,	// (0x0004e9ef) popup_clock_analogue_window_g1

0xc4bd,	// (0x0004e9ef) popup_clock_analogue_window_g2

0xaa7e,	// (0x0004cfb0) popup_clock_analogue_window_g3

0xaa7e,	// (0x0004cfb0) popup_clock_analogue_window_g4

0xc5e5,	// (0x0004eb17) popup_clock_analogue_window_g5

0x0004,

0xf38b,	// (0x000518bd) popup_clock_analogue_window_g

0xaa86,	// (0x0004cfb8) popup_clock_analogue_window_t1

0xaa94,	// (0x0004cfc6) clock_digital_number_pane_ParamLimits

0xaa94,	// (0x0004cfc6) clock_digital_number_pane

0xaaa0,	// (0x0004cfd2) clock_digital_number_pane_cp02_ParamLimits

0xaaa0,	// (0x0004cfd2) clock_digital_number_pane_cp02

0xaaac,	// (0x0004cfde) clock_digital_number_pane_cp03_ParamLimits

0xaaac,	// (0x0004cfde) clock_digital_number_pane_cp03

0xaab8,	// (0x0004cfea) clock_digital_number_pane_cp04_ParamLimits

0xaab8,	// (0x0004cfea) clock_digital_number_pane_cp04

0xaac4,	// (0x0004cff6) clock_digital_separator_pane_ParamLimits

0xaac4,	// (0x0004cff6) clock_digital_separator_pane

0xaad0,	// (0x0004d002) popup_clock_digital_window_t1

0xc5e5,	// (0x0004eb17) clock_digital_number_pane_g1

0xc5e5,	// (0x0004eb17) clock_digital_number_pane_g2

0x0001,

0xf2f9,	// (0x0005182b) clock_digital_number_pane_g

0xc5e5,	// (0x0004eb17) clock_digital_separator_pane_g1

0xc5e5,	// (0x0004eb17) clock_digital_separator_pane_g2

0x0001,

0xf2f9,	// (0x0005182b) clock_digital_separator_pane_g

0xc26a,	// (0x0004e79c) bg_popup_window_pane_cp04

0xcd88,	// (0x0004f2ba) heading_pane_cp03

0xcd90,	// (0x0004f2c2) listscroll_popup_gms_pane

0xcd98,	// (0x0004f2ca) grid_large_graphic_popup_pane

0xcda2,	// (0x0004f2d4) listscroll_popup_gms_pane_g1

0xcdaa,	// (0x0004f2dc) listscroll_popup_gms_pane_g2

0x0001,

0xf396,	// (0x000518c8) listscroll_popup_gms_pane_g

0xc8ea,	// (0x0004ee1c) scroll_pane_cp014

0x320e,	// (0x00045740) cell_large_graphic_popup_pane_ParamLimits

0x320e,	// (0x00045740) cell_large_graphic_popup_pane

0x3226,	// (0x00045758) cell_large_graphic_popup_pane_g1_ParamLimits

0x3226,	// (0x00045758) cell_large_graphic_popup_pane_g1

0xcdb2,	// (0x0004f2e4) cell_large_graphic_popup_pane_g2_ParamLimits

0xcdb2,	// (0x0004f2e4) cell_large_graphic_popup_pane_g2

0xcdbe,	// (0x0004f2f0) cell_large_graphic_popup_pane_g3_ParamLimits

0xcdbe,	// (0x0004f2f0) cell_large_graphic_popup_pane_g3

0xcdcb,	// (0x0004f2fd) cell_large_graphic_popup_pane_g4_ParamLimits

0xcdcb,	// (0x0004f2fd) cell_large_graphic_popup_pane_g4

0x0003,

0xf39b,	// (0x000518cd) cell_large_graphic_popup_pane_g_ParamLimits

0xf39b,	// (0x000518cd) cell_large_graphic_popup_pane_g

0xcde9,	// (0x0004f31b) grid_highlight_pane_cp010

0xc5e5,	// (0x0004eb17) bg_popup_call_pane_g1

0xcdf3,	// (0x0004f325) list_single_graphic_popup_conf_pane_ParamLimits

0xcdf3,	// (0x0004f325) list_single_graphic_popup_conf_pane

0xce05,	// (0x0004f337) list_highlight_pane_cp01

0xce0e,	// (0x0004f340) list_single_graphic_popup_conf_pane_g1

0xce16,	// (0x0004f348) list_single_graphic_popup_conf_pane_g2

0x0001,

0xf3a4,	// (0x000518d6) list_single_graphic_popup_conf_pane_g

0xce1e,	// (0x0004f350) list_single_graphic_popup_conf_pane_t1

0xce2c,	// (0x0004f35e) linegrid_cams_pane_g1

0x3232,	// (0x00045764) linegrid_cams_pane_g2

0xc723,	// (0x0004ec55) linegrid_cams_pane_g3

0xce35,	// (0x0004f367) linegrid_cams_pane_g4

0x323b,	// (0x0004576d) linegrid_cams_pane_g5

0x3244,	// (0x00045776) linegrid_cams_pane_g6

0xc72c,	// (0x0004ec5e) linegrid_cams_pane_g7

0x0006,

0xf3a9,	// (0x000518db) linegrid_cams_pane_g

0xce3e,	// (0x0004f370) popup_clock_analogue_window

0xce3e,	// (0x0004f370) popup_clock_digital_window

0xc26a,	// (0x0004e79c) popup_phob_thumbnail_window

0xc5e5,	// (0x0004eb17) call_video_uplink_pane_g1

0xce47,	// (0x0004f379) call_video_uplink_pane_g2

0x0001,

0xf3b8,	// (0x000518ea) call_video_uplink_pane_g

0xce4f,	// (0x0004f381) video_uplink_pane

0xce57,	// (0x0004f389) mce_image_pane_g1

0x324f,	// (0x00045781) mce_image_pane_g2

0x3259,	// (0x0004578b) mce_image_pane_g3

0x3263,	// (0x00045795) mce_image_pane_g4

0x326b,	// (0x0004579d) mce_image_pane_g5

0x0004,

0xf3bd,	// (0x000518ef) mce_image_pane_g

0xce61,	// (0x0004f393) control_top_pane_stacon_cp01_ParamLimits

0xce61,	// (0x0004f393) control_top_pane_stacon_cp01

0xce75,	// (0x0004f3a7) uni_indicator_pane_stacon_cp01_ParamLimits

0xce75,	// (0x0004f3a7) uni_indicator_pane_stacon_cp01

0xce86,	// (0x0004f3b8) bg_popup_sub_pane_cp03

0x3273,	// (0x000457a5) chi_dic_find_pane

0x327b,	// (0x000457ad) listscroll_chi_dic_pane

0x3284,	// (0x000457b6) main_pane_chidic_g1

0x3297,	// (0x000457c9) chi_dic_find_pane_t1

0xce90,	// (0x0004f3c2) find_chidic_pane

0xce99,	// (0x0004f3cb) chi_dic_list_pane_ParamLimits

0xce99,	// (0x0004f3cb) chi_dic_list_pane

0xceaa,	// (0x0004f3dc) scroll_pane_cp020

0x32a5,	// (0x000457d7) find_chidic_pane_t1

0xc26a,	// (0x0004e79c) input_focus_pane_cp06

0x32b4,	// (0x000457e6) list_chi_dic_pane_ParamLimits

0x32b4,	// (0x000457e6) list_chi_dic_pane

0x32c6,	// (0x000457f8) list_chi_dic_pane_t1_ParamLimits

0x32c6,	// (0x000457f8) list_chi_dic_pane_t1

0xc26a,	// (0x0004e79c) list_highlight_pane_cp020

0xceb2,	// (0x0004f3e4) bg_cale_heading_pane_g1

0x32d9,	// (0x0004580b) bg_cale_heading_pane_g2

0x32e1,	// (0x00045813) bg_cale_heading_pane_g3

0x32e9,	// (0x0004581b) bg_cale_heading_pane_g4

0x32f1,	// (0x00045823) bg_cale_heading_pane_g5

0x32f9,	// (0x0004582b) bg_cale_heading_pane_g6

0x3301,	// (0x00045833) bg_cale_heading_pane_g7

0x3309,	// (0x0004583b) bg_cale_heading_pane_g8

0x3311,	// (0x00045843) bg_cale_heading_pane_g9

0x0008,

0xf3c8,	// (0x000518fa) bg_cale_heading_pane_g

0xceb2,	// (0x0004f3e4) bg_cale_side_pane_g1

0x3319,	// (0x0004584b) bg_cale_side_pane_g2

0x3323,	// (0x00045855) bg_cale_side_pane_g3

0x332d,	// (0x0004585f) bg_cale_side_pane_g4

0x3337,	// (0x00045869) bg_cale_side_pane_g5

0x3341,	// (0x00045873) bg_cale_side_pane_g6

0x334b,	// (0x0004587d) bg_cale_side_pane_g7

0x3355,	// (0x00045887) bg_cale_side_pane_g8

0x335d,	// (0x0004588f) bg_cale_side_pane_g9

0x0008,

0xf3db,	// (0x0005190d) bg_cale_side_pane_g

0x3365,	// (0x00045897) popup_call_status_window_ParamLimits

0x3365,	// (0x00045897) popup_call_status_window

0xceba,	// (0x0004f3ec) stacon_top_pane

0xcec2,	// (0x0004f3f4) status_pane_ParamLimits

0xcec2,	// (0x0004f3f4) status_pane

0xced7,	// (0x0004f409) status_small_pane

0xcedf,	// (0x0004f411) control_pane

0xc26a,	// (0x0004e79c) stacon_bottom_pane

0xcee7,	// (0x0004f419) list_single_mce_smart_pane_t1_ParamLimits

0xcee7,	// (0x0004f419) list_single_mce_smart_pane_t1

0xcefa,	// (0x0004f42c) list_single_mce_smart_pane_t2_ParamLimits

0xcefa,	// (0x0004f42c) list_single_mce_smart_pane_t2

0x0001,

0xf3ee,	// (0x00051920) list_single_mce_smart_pane_t_ParamLimits

0xf3ee,	// (0x00051920) list_single_mce_smart_pane_t

0x33b2,	// (0x000458e4) compass_pane

0x33bd,	// (0x000458ef) main_location2_pane_t1

0x33d3,	// (0x00045905) main_location2_pane_t2

0x33e9,	// (0x0004591b) main_location2_pane_t3

0x0003,

0xf3f3,	// (0x00051925) main_location2_pane_t

0xcf19,	// (0x0004f44b) compass_pane_g1_ParamLimits

0xcf19,	// (0x0004f44b) compass_pane_g1

0x3437,	// (0x00045969) compass_pane_t1

0x3446,	// (0x00045978) compass_pane_t2

0x0005,

0xf3fc,	// (0x0005192e) compass_pane_t

0x3491,	// (0x000459c3) text_secondary_cp61

0xcf2d,	// (0x0004f45f) navi_pane_cams_g5

0xcf50,	// (0x0004f482) navi_pane_im_t1

0xcf5e,	// (0x0004f490) navi_pane_mp_g1_ParamLimits

0xcf5e,	// (0x0004f490) navi_pane_mp_g1

0xcf72,	// (0x0004f4a4) navi_pane_mp_g2_ParamLimits

0xcf72,	// (0x0004f4a4) navi_pane_mp_g2

0xcf7e,	// (0x0004f4b0) navi_pane_mp_g3_ParamLimits

0xcf7e,	// (0x0004f4b0) navi_pane_mp_g3

0x0002,

0xf410,	// (0x00051942) navi_pane_mp_g_ParamLimits

0xf410,	// (0x00051942) navi_pane_mp_g

0xcf8a,	// (0x0004f4bc) navi_pane_mp_t1

0xcf98,	// (0x0004f4ca) navi_pane_mp_t2

0x0002,

0xf417,	// (0x00051949) navi_pane_mp_t

0xcfd4,	// (0x0004f506) navi_pane_vt_g1

0xcf8a,	// (0x0004f4bc) navi_pane_vt_t1

0xcfdc,	// (0x0004f50e) navi_slider_pane

0xcfe4,	// (0x0004f516) zooming_pane

0xcfec,	// (0x0004f51e) navi_slider_pane_g1

0xaaed,	// (0x0004d01f) navi_slider_pane_g2

0x0006,

0xf41e,	// (0x00051950) navi_slider_pane_g

0xd010,	// (0x0004f542) aid_levels_zoom

0xd018,	// (0x0004f54a) zooming_pane_g1

0xd020,	// (0x0004f552) zooming_pane_g2

0xd020,	// (0x0004f552) zooming_pane_g3

0x0002,

0xf42d,	// (0x0005195f) zooming_pane_g

0xd028,	// (0x0004f55a) level_10_zoom

0xd031,	// (0x0004f563) level_11_zoom

0xd03a,	// (0x0004f56c) level_1_zoom

0xd043,	// (0x0004f575) level_2_zoom

0xd04c,	// (0x0004f57e) level_3_zoom

0xd055,	// (0x0004f587) level_4_zoom

0xd05e,	// (0x0004f590) level_5_zoom

0xd067,	// (0x0004f599) level_6_zoom

0xd070,	// (0x0004f5a2) level_7_zoom

0xd079,	// (0x0004f5ab) level_8_zoom

0xd082,	// (0x0004f5b4) level_9_zoom

0xd093,	// (0x0004f5c5) popup_phob_thumbnail_window_g1

0xd09b,	// (0x0004f5cd) popup_phob_thumbnail_window_g2

0x0001,

0xf434,	// (0x00051966) popup_phob_thumbnail_window_g

0xe3ba,	// (0x000508ec) level_1_location

0xe3c2,	// (0x000508f4) level_2_location

0xe3ca,	// (0x000508fc) level_3_location

0xe3d2,	// (0x00050904) level_4_location

0xcfe4,	// (0x0004f516) level_5_location

0x35bc,	// (0x00045aee) mce_icon_pane_g1

0x35c4,	// (0x00045af6) mce_icon_pane_g2

0x0001,

0xf439,	// (0x0005196b) mce_icon_pane_g

0x35cc,	// (0x00045afe) main_mup_pane_g1_ParamLimits

0x35cc,	// (0x00045afe) main_mup_pane_g1

0x35e2,	// (0x00045b14) main_mup_pane_g2_ParamLimits

0x35e2,	// (0x00045b14) main_mup_pane_g2

0x35fa,	// (0x00045b2c) main_mup_pane_g3_ParamLimits

0x35fa,	// (0x00045b2c) main_mup_pane_g3

0x3612,	// (0x00045b44) main_mup_pane_g4_ParamLimits

0x3612,	// (0x00045b44) main_mup_pane_g4

0x3624,	// (0x00045b56) main_mup_pane_g5_ParamLimits

0x3624,	// (0x00045b56) main_mup_pane_g5

0x3640,	// (0x00045b72) main_mup_pane_g6_ParamLimits

0x3640,	// (0x00045b72) main_mup_pane_g6

0x365a,	// (0x00045b8c) main_mup_pane_g7_ParamLimits

0x365a,	// (0x00045b8c) main_mup_pane_g7

0x3678,	// (0x00045baa) main_mup_pane_g8_ParamLimits

0x3678,	// (0x00045baa) main_mup_pane_g8

0x3696,	// (0x00045bc8) main_mup_pane_g9_ParamLimits

0x3696,	// (0x00045bc8) main_mup_pane_g9

0x36b2,	// (0x00045be4) main_mup_pane_g10_ParamLimits

0x36b2,	// (0x00045be4) main_mup_pane_g10

0x36d0,	// (0x00045c02) main_mup_pane_g11_ParamLimits

0x36d0,	// (0x00045c02) main_mup_pane_g11

0x36ea,	// (0x00045c1c) main_mup_pane_g12_ParamLimits

0x36ea,	// (0x00045c1c) main_mup_pane_g12

0x3700,	// (0x00045c32) main_mup_pane_g13_ParamLimits

0x3700,	// (0x00045c32) main_mup_pane_g13

0x000c,

0xf43e,	// (0x00051970) main_mup_pane_g_ParamLimits

0xf43e,	// (0x00051970) main_mup_pane_g

0x3714,	// (0x00045c46) main_mup_pane_t1_ParamLimits

0x3714,	// (0x00045c46) main_mup_pane_t1

0x3730,	// (0x00045c62) main_mup_pane_t2_ParamLimits

0x3730,	// (0x00045c62) main_mup_pane_t2

0x3748,	// (0x00045c7a) main_mup_pane_t3_ParamLimits

0x3748,	// (0x00045c7a) main_mup_pane_t3

0x3760,	// (0x00045c92) main_mup_pane_t4_ParamLimits

0x3760,	// (0x00045c92) main_mup_pane_t4

0x377e,	// (0x00045cb0) main_mup_pane_t5_ParamLimits

0x377e,	// (0x00045cb0) main_mup_pane_t5

0x3793,	// (0x00045cc5) main_mup_pane_t6_ParamLimits

0x3793,	// (0x00045cc5) main_mup_pane_t6

0x0005,

0xf459,	// (0x0005198b) main_mup_pane_t_ParamLimits

0xf459,	// (0x0005198b) main_mup_pane_t

0x37a5,	// (0x00045cd7) mup_progress_pane_ParamLimits

0x37a5,	// (0x00045cd7) mup_progress_pane

0x37b1,	// (0x00045ce3) mup_visualizer_pane_ParamLimits

0x37b1,	// (0x00045ce3) mup_visualizer_pane

0x37e5,	// (0x00045d17) mup_volume_pane_ParamLimits

0x37e5,	// (0x00045d17) mup_volume_pane

0xcddb,	// (0x0004f30d) mup_visualizer_pane_g1_ParamLimits

0xcddb,	// (0x0004f30d) mup_visualizer_pane_g1

0xcddb,	// (0x0004f30d) mup_visualizer_pane_g2_ParamLimits

0xcddb,	// (0x0004f30d) mup_visualizer_pane_g2

0xcf19,	// (0x0004f44b) mup_visualizer_pane_g3_ParamLimits

0xcf19,	// (0x0004f44b) mup_visualizer_pane_g3

0x0002,

0xf466,	// (0x00051998) mup_visualizer_pane_g_ParamLimits

0xf466,	// (0x00051998) mup_visualizer_pane_g

0xc5e5,	// (0x0004eb17) mup_volume_pane_g1

0xd0ab,	// (0x0004f5dd) mup_volume_pane_g2

0x0001,

0xf46d,	// (0x0005199f) mup_volume_pane_g

0xc5e5,	// (0x0004eb17) mup_progress_pane_g1

0xd0b4,	// (0x0004f5e6) mup_progress_pane_g2

0xd0bd,	// (0x0004f5ef) mup_progress_pane_g3

0x0002,

0xf472,	// (0x000519a4) mup_progress_pane_g

0xc26a,	// (0x0004e79c) bg_popup_window_pane_cp05

0xd0c6,	// (0x0004f5f8) heading_pane_cp02_ParamLimits

0xd0c6,	// (0x0004f5f8) heading_pane_cp02

0xd0e2,	// (0x0004f614) list_popup_blid_pane

0xd0ea,	// (0x0004f61c) list_blid_sat_info_pane_ParamLimits

0xd0ea,	// (0x0004f61c) list_blid_sat_info_pane

0xd0fd,	// (0x0004f62f) list_blid_sat_info_pane_g1

0xd105,	// (0x0004f637) list_blid_sat_info_pane_t1

0x390f,	// (0x00045e41) mup_equalizer_pane_ParamLimits

0x390f,	// (0x00045e41) mup_equalizer_pane

0x3930,	// (0x00045e62) mup_equalizer_pane_cp1_ParamLimits

0x3930,	// (0x00045e62) mup_equalizer_pane_cp1

0x3951,	// (0x00045e83) mup_equalizer_pane_cp2_ParamLimits

0x3951,	// (0x00045e83) mup_equalizer_pane_cp2

0x3976,	// (0x00045ea8) mup_equalizer_pane_cp3_ParamLimits

0x3976,	// (0x00045ea8) mup_equalizer_pane_cp3

0x399f,	// (0x00045ed1) mup_equalizer_pane_cp4_ParamLimits

0x399f,	// (0x00045ed1) mup_equalizer_pane_cp4

0x39c8,	// (0x00045efa) mup_equalizer_pane_cp5

0x39e0,	// (0x00045f12) mup_equalizer_pane_cp6

0x39f8,	// (0x00045f2a) mup_equalizer_pane_cp7

0xe2d4,	// (0x00050806) bg_popup_call_poc_act_pane_g9

0xe2dc,	// (0x0005080e) bg_popup_call_poc_act_pane_g10

0xe2e4,	// (0x00050816) bg_popup_call_poc_act_pane_g11

0x000a,

0xc4c5,	// (0x0004e9f7) mup_scale_pane

0xc5e5,	// (0x0004eb17) mup_scale_pane_g1

0xd113,	// (0x0004f645) mup_scale_pane_g2

0x0006,

0xf48e,	// (0x000519c0) mup_scale_pane_g

0xd137,	// (0x0004f669) msg_data_pane

0xd13f,	// (0x0004f671) scroll_pane_cp017

0x0b8a,	// (0x000430bc) bg_list_pane_cp04_ParamLimits

0x0b8a,	// (0x000430bc) bg_list_pane_cp04

0xd147,	// (0x0004f679) msg_data_pane_g1

0x3a22,	// (0x00045f54) msg_data_pane_g2

0x3a2c,	// (0x00045f5e) msg_data_pane_g3

0x3a36,	// (0x00045f68) msg_data_pane_g4

0x3a3e,	// (0x00045f70) msg_data_pane_g5

0x3a46,	// (0x00045f78) msg_data_pane_g6

0x3a4e,	// (0x00045f80) msg_data_pane_g7

0x0006,

0xf49d,	// (0x000519cf) msg_data_pane_g

0x0bb0,	// (0x000430e2) msg_text_pane_ParamLimits

0x0bb0,	// (0x000430e2) msg_text_pane

0x3a56,	// (0x00045f88) qrid_highlight_pane_cp011_ParamLimits

0x3a56,	// (0x00045f88) qrid_highlight_pane_cp011

0xc26a,	// (0x0004e79c) msg_body_pane

0xc26a,	// (0x0004e79c) msg_header_pane

0xd158,	// (0x0004f68a) input_focus_pane_cp07

0x0bef,	// (0x00043121) msg_header_pane_t1_ParamLimits

0x0bef,	// (0x00043121) msg_header_pane_t1

0x0c03,	// (0x00043135) msg_header_pane_t2_ParamLimits

0x0c03,	// (0x00043135) msg_header_pane_t2

0x0001,

0xf4b1,	// (0x000519e3) msg_header_pane_t_ParamLimits

0xf4b1,	// (0x000519e3) msg_header_pane_t

0xd16d,	// (0x0004f69f) msg_body_pane_g1

0x0c15,	// (0x00043147) msg_body_pane_t1_ParamLimits

0x0c15,	// (0x00043147) msg_body_pane_t1

0x0c46,	// (0x00043178) msg_body_pane_t2_ParamLimits

0x0c46,	// (0x00043178) msg_body_pane_t2

0x0c58,	// (0x0004318a) msg_body_pane_t3_ParamLimits

0x0c58,	// (0x0004318a) msg_body_pane_t3

0x0002,

0xf4b6,	// (0x000519e8) msg_body_pane_t_ParamLimits

0xf4b6,	// (0x000519e8) msg_body_pane_t

0x3aa6,	// (0x00045fd8) main_viewer_pane_g1_ParamLimits

0x3aa6,	// (0x00045fd8) main_viewer_pane_g1

0x3ab4,	// (0x00045fe6) main_viewer_pane_g2_ParamLimits

0x3ab4,	// (0x00045fe6) main_viewer_pane_g2

0x3ac2,	// (0x00045ff4) main_viewer_pane_g3_ParamLimits

0x3ac2,	// (0x00045ff4) main_viewer_pane_g3

0x3ad1,	// (0x00046003) main_viewer_pane_g4_ParamLimits

0x3ad1,	// (0x00046003) main_viewer_pane_g4

0xab17,	// (0x0004d049) main_viewer_pane_g5_ParamLimits

0xab17,	// (0x0004d049) main_viewer_pane_g5

0xab17,	// (0x0004d049) main_viewer_pane_g7_ParamLimits

0xab17,	// (0x0004d049) main_viewer_pane_g7

0xab29,	// (0x0004d05b) main_viewer_pane_g8_ParamLimits

0xab29,	// (0x0004d05b) main_viewer_pane_g8

0x0007,

0xf4c6,	// (0x000519f8) main_viewer_pane_g_ParamLimits

0xf4c6,	// (0x000519f8) main_viewer_pane_g

0xd175,	// (0x0004f6a7) viewer_content_pane_ParamLimits

0xd175,	// (0x0004f6a7) viewer_content_pane

0x3b0f,	// (0x00046041) main_postcard_pane_g1_ParamLimits

0x3b0f,	// (0x00046041) main_postcard_pane_g1

0x3b25,	// (0x00046057) main_postcard_pane_g2_ParamLimits

0x3b25,	// (0x00046057) main_postcard_pane_g2

0x3b3b,	// (0x0004606d) main_postcard_pane_g3_ParamLimits

0x3b3b,	// (0x0004606d) main_postcard_pane_g3

0x0005,

0xf4d7,	// (0x00051a09) main_postcard_pane_g_ParamLimits

0xf4d7,	// (0x00051a09) main_postcard_pane_g

0x3b52,	// (0x00046084) main_postcard_pane_g4

0xe504,	// (0x00050a36) smil_status_volume_pane_g2

0x3b95,	// (0x000460c7) postcard_pane_ParamLimits

0x3b95,	// (0x000460c7) postcard_pane

0xd191,	// (0x0004f6c3) postcard_pane_g1_ParamLimits

0xd191,	// (0x0004f6c3) postcard_pane_g1

0x3be5,	// (0x00046117) postcard_pane_g2_ParamLimits

0x3be5,	// (0x00046117) postcard_pane_g2

0x3bf1,	// (0x00046123) postcard_pane_g3_ParamLimits

0x3bf1,	// (0x00046123) postcard_pane_g3

0xd183,	// (0x0004f6b5) postcard_pane_g4_ParamLimits

0xd183,	// (0x0004f6b5) postcard_pane_g4

0x3bfd,	// (0x0004612f) postcard_pane_g5_ParamLimits

0x3bfd,	// (0x0004612f) postcard_pane_g5

0x3c0f,	// (0x00046141) postcard_pane_g6_ParamLimits

0x3c0f,	// (0x00046141) postcard_pane_g6

0xd191,	// (0x0004f6c3) postcard_pane_g7_ParamLimits

0xd191,	// (0x0004f6c3) postcard_pane_g7

0x0006,

0xf4e4,	// (0x00051a16) postcard_pane_g_ParamLimits

0xf4e4,	// (0x00051a16) postcard_pane_g

0x3c27,	// (0x00046159) main_mp2_pane_g1_ParamLimits

0x3c27,	// (0x00046159) main_mp2_pane_g1

0x3c35,	// (0x00046167) main_mp2_pane_g2_ParamLimits

0x3c35,	// (0x00046167) main_mp2_pane_g2

0x3c41,	// (0x00046173) main_mp2_pane_g3_ParamLimits

0x3c41,	// (0x00046173) main_mp2_pane_g3

0x0002,

0xf4f3,	// (0x00051a25) main_mp2_pane_g_ParamLimits

0xf4f3,	// (0x00051a25) main_mp2_pane_g

0x3c4d,	// (0x0004617f) main_mp2_pane_t1_ParamLimits

0x3c4d,	// (0x0004617f) main_mp2_pane_t1

0x3c64,	// (0x00046196) main_mp2_pane_t2_ParamLimits

0x3c64,	// (0x00046196) main_mp2_pane_t2

0x3c78,	// (0x000461aa) main_mp2_pane_t3_ParamLimits

0x3c78,	// (0x000461aa) main_mp2_pane_t3

0x0002,

0xf4fa,	// (0x00051a2c) main_mp2_pane_t_ParamLimits

0xf4fa,	// (0x00051a2c) main_mp2_pane_t

0xd19f,	// (0x0004f6d1) pec_content_pane_ParamLimits

0xd19f,	// (0x0004f6d1) pec_content_pane

0xc8ea,	// (0x0004ee1c) scroll_pane_cp015

0xd1b1,	// (0x0004f6e3) pec_attribute_pane_ParamLimits

0xd1b1,	// (0x0004f6e3) pec_attribute_pane

0x3c8a,	// (0x000461bc) pec_content_pane_g1_ParamLimits

0x3c8a,	// (0x000461bc) pec_content_pane_g1

0xd1c1,	// (0x0004f6f3) pec_content_pane_t1_ParamLimits

0xd1c1,	// (0x0004f6f3) pec_content_pane_t1

0xd1d3,	// (0x0004f705) pec_content_pane_t2_ParamLimits

0xd1d3,	// (0x0004f705) pec_content_pane_t2

0x0001,

0x0078,	// (0x000425aa) pec_content_pane_t_ParamLimits

0x0078,	// (0x000425aa) pec_content_pane_t

0x3c96,	// (0x000461c8) list_single_graphic_pane_cp01_ParamLimits

0x3c96,	// (0x000461c8) list_single_graphic_pane_cp01

0xc4c5,	// (0x0004e9f7) bg_popup_sub_pane_cp04

0xd1e5,	// (0x0004f717) popup_mup_playback_window_g1

0xd1f1,	// (0x0004f723) popup_mup_playback_window_t1

0xd206,	// (0x0004f738) popup_mup_playback_window_t2

0x0001,

0x007d,	// (0x000425af) popup_mup_playback_window_t

0xd23d,	// (0x0004f76f) main_image_pane_g1_ParamLimits

0xd23d,	// (0x0004f76f) main_image_pane_g1

0xd280,	// (0x0004f7b2) scroll_pane_cp018_ParamLimits

0xd280,	// (0x0004f7b2) scroll_pane_cp018

0xd298,	// (0x0004f7ca) scroll_pane_cp016_ParamLimits

0xd298,	// (0x0004f7ca) scroll_pane_cp016

0x3d68,	// (0x0004629a) smil2_image_pane_ParamLimits

0x3d68,	// (0x0004629a) smil2_image_pane

0x3d9e,	// (0x000462d0) smil2_root_pane_ParamLimits

0x3d9e,	// (0x000462d0) smil2_root_pane

0x3dd6,	// (0x00046308) smil2_text_pane_ParamLimits

0x3dd6,	// (0x00046308) smil2_text_pane

0xc26a,	// (0x0004e79c) bg_list_pane_cp06

0xd2d4,	// (0x0004f806) grid_radio_pane

0xc26a,	// (0x0004e79c) bg_popup_window_pane_cp06

0xd2de,	// (0x0004f810) main_fmradio_pane_t1

0xcd88,	// (0x0004f2ba) heading_pane_cp04

0xd2ec,	// (0x0004f81e) main_fmradio_pane_t2

0xe2ec,	// (0x0005081e) popup_cale_lunar_info_window_g1

0xd2fa,	// (0x0004f82c) main_fmradio_pane_t3

0xe2f4,	// (0x00050826) popup_cale_lunar_info_window_g2

0xd30a,	// (0x0004f83c) main_fmradio_pane_t4

0x0001,

0xd318,	// (0x0004f84a) main_fmradio_pane_t5

0x0004,

0x0158,	// (0x0004268a) popup_cale_lunar_info_window_g

0x0092,	// (0x000425c4) main_fmradio_pane_t

0xd326,	// (0x0004f858) wait_bar_pane_cp03

0xd32e,	// (0x0004f860) cell_fmradio_pane_ParamLimits

0xd32e,	// (0x0004f860) cell_fmradio_pane

0xd191,	// (0x0004f6c3) cell_fmradio_pane_g1_ParamLimits

0xd191,	// (0x0004f6c3) cell_fmradio_pane_g1

0xc26a,	// (0x0004e79c) grid_highlight_pane_cp011

0xd343,	// (0x0004f875) poc_content_pane_ParamLimits

0xd343,	// (0x0004f875) poc_content_pane

0xd355,	// (0x0004f887) scroll_pane_cp019

0x3e66,	// (0x00046398) popup_call_poc_act_window_ParamLimits

0x3e66,	// (0x00046398) popup_call_poc_act_window

0x3e8a,	// (0x000463bc) popup_call_poc_inact_window_ParamLimits

0x3e8a,	// (0x000463bc) popup_call_poc_inact_window

0x012f,	// (0x00042661) bg_popup_call_poc_act_pane_g

0xe264,	// (0x00050796) bg_popup_call_poc_inact_pane_g1

0xe26c,	// (0x0005079e) bg_popup_call_poc_inact_pane_g2

0xd35d,	// (0x0004f88f) popup_call_poc_act_window_g2

0xe274,	// (0x000507a6) bg_popup_call_poc_inact_pane_g3

0xe27c,	// (0x000507ae) bg_popup_call_poc_inact_pane_g4

0xe284,	// (0x000507b6) bg_popup_call_poc_inact_pane_g5

0xd365,	// (0x0004f897) popup_call_poc_act_window_t1_ParamLimits

0xd365,	// (0x0004f897) popup_call_poc_act_window_t1

0xd38d,	// (0x0004f8bf) popup_call_poc_act_window_t2_ParamLimits

0xd38d,	// (0x0004f8bf) popup_call_poc_act_window_t2

0xd3b5,	// (0x0004f8e7) popup_call_poc_act_window_t3_ParamLimits

0xd3b5,	// (0x0004f8e7) popup_call_poc_act_window_t3

0xd3dd,	// (0x0004f90f) popup_call_poc_act_window_t4_ParamLimits

0xd3dd,	// (0x0004f90f) popup_call_poc_act_window_t4

0x0003,

0x009d,	// (0x000425cf) popup_call_poc_act_window_t_ParamLimits

0x009d,	// (0x000425cf) popup_call_poc_act_window_t

0xe28c,	// (0x000507be) bg_popup_call_poc_inact_pane_g6

0xe294,	// (0x000507c6) bg_popup_call_poc_inact_pane_g7

0xe29c,	// (0x000507ce) bg_popup_call_poc_inact_pane_g8

0xd3ef,	// (0x0004f921) popup_call_poc_inact_window_g2

0xe2a4,	// (0x000507d6) bg_popup_call_poc_inact_pane_g9

0x0008,

0x011c,	// (0x0004264e) bg_popup_call_poc_inact_pane_g

0xd3f7,	// (0x0004f929) popup_call_poc_inact_window_t1_ParamLimits

0xd3f7,	// (0x0004f929) popup_call_poc_inact_window_t1

0xd40c,	// (0x0004f93e) popup_call_poc_inact_window_t2_ParamLimits

0xd40c,	// (0x0004f93e) popup_call_poc_inact_window_t2

0xd421,	// (0x0004f953) popup_call_poc_inact_window_t3_ParamLimits

0xd421,	// (0x0004f953) popup_call_poc_inact_window_t3

0x0002,

0x00a6,	// (0x000425d8) popup_call_poc_inact_window_t_ParamLimits

0x00a6,	// (0x000425d8) popup_call_poc_inact_window_t

0xe464,	// (0x00050996) context_pane_ParamLimits

0x4735,	// (0x00046c67) signal_pane_ParamLimits

0xcfe4,	// (0x0004f516) main_call2_pane

0xe452,	// (0x00050984) popup_phob_thumbnail2_window_ParamLimits

0xe452,	// (0x00050984) popup_phob_thumbnail2_window

0xaaff,	// (0x0004d031) aid_hotspot_pointer_arrow_pane

0xab07,	// (0x0004d039) aid_hotspot_pointer_hand_pane

0x41f5,	// (0x00046727) phob_pre_status_pane_g5

0x2075,	// (0x000445a7) cams_zoom_pane_ParamLimits

0x2084,	// (0x000445b6) image_vga_pane_ParamLimits

0x209e,	// (0x000445d0) main_camera_pane_g1_ParamLimits

0x20b0,	// (0x000445e2) main_camera_pane_g2_ParamLimits

0x20c0,	// (0x000445f2) main_camera_pane_g3_ParamLimits

0x20d4,	// (0x00044606) main_camera_pane_g4_ParamLimits

0x20e8,	// (0x0004461a) main_camera_pane_g5_ParamLimits

0x20fc,	// (0x0004462e) main_camera_pane_g6_ParamLimits

0x2110,	// (0x00044642) main_camera_pane_g7_ParamLimits

0xf22e,	// (0x00051760) main_camera_pane_g_ParamLimits

0x2124,	// (0x00044656) main_camera_pane_t1_ParamLimits

0x213a,	// (0x0004466c) main_camera_pane_t2_ParamLimits

0xf23f,	// (0x00051771) main_camera_pane_t_ParamLimits

0xc4c5,	// (0x0004e9f7) bg_popup_preview_window_pane_cp01_ParamLimits

0xc4c5,	// (0x0004e9f7) bg_popup_preview_window_pane_cp01

0xd436,	// (0x0004f968) popup_phob_thumbnail2_window_g1_ParamLimits

0xd436,	// (0x0004f968) popup_phob_thumbnail2_window_g1

0xc26a,	// (0x0004e79c) call2_cli_visual_pane

0x3ebe,	// (0x000463f0) popup_call2_audio_conf_window_ParamLimits

0x3ebe,	// (0x000463f0) popup_call2_audio_conf_window

0x3ee6,	// (0x00046418) popup_call2_audio_first_window_ParamLimits

0x3ee6,	// (0x00046418) popup_call2_audio_first_window

0x3f7c,	// (0x000464ae) popup_call2_audio_in_window_ParamLimits

0x3f7c,	// (0x000464ae) popup_call2_audio_in_window

0x3fc8,	// (0x000464fa) popup_call2_audio_out_window_ParamLimits

0x3fc8,	// (0x000464fa) popup_call2_audio_out_window

0x403a,	// (0x0004656c) popup_call2_audio_second_window_ParamLimits

0x403a,	// (0x0004656c) popup_call2_audio_second_window

0x40a0,	// (0x000465d2) popup_call2_audio_wait_window_ParamLimits

0x40a0,	// (0x000465d2) popup_call2_audio_wait_window

0xc26a,	// (0x0004e79c) bg_popup_call2_act_pane_cp03

0xc4a7,	// (0x0004e9d9) list_conf_pane_cp

0xd442,	// (0x0004f974) popup_call2_audio_conf_window_t1

0xd450,	// (0x0004f982) list_single_graphic_popup_conf2_pane_ParamLimits

0xd450,	// (0x0004f982) list_single_graphic_popup_conf2_pane

0xce05,	// (0x0004f337) list_highlight_pane_cp04

0xd463,	// (0x0004f995) list_single_graphic_popup_conf2_pane_g1

0xce16,	// (0x0004f348) list_single_graphic_popup_conf2_pane_g2

0x0001,

0x00ad,	// (0x000425df) list_single_graphic_popup_conf2_pane_g

0xd46d,	// (0x0004f99f) list_single_graphic_popup_conf2_pane_t1

0xd47b,	// (0x0004f9ad) bg_popup_call2_act_pane_cp01_ParamLimits

0xd47b,	// (0x0004f9ad) bg_popup_call2_act_pane_cp01

0xd505,	// (0x0004fa37) call_type_pane_cp05_ParamLimits

0xd505,	// (0x0004fa37) call_type_pane_cp05

0xd565,	// (0x0004fa97) popup_call2_audio_second_window_g1_ParamLimits

0xd565,	// (0x0004fa97) popup_call2_audio_second_window_g1

0xd5b9,	// (0x0004faeb) popup_call2_audio_second_window_g2_ParamLimits

0xd5b9,	// (0x0004faeb) popup_call2_audio_second_window_g2

0x0002,

0xf511,	// (0x00051a43) popup_call2_audio_second_window_g_ParamLimits

0xf511,	// (0x00051a43) popup_call2_audio_second_window_g

0xd61e,	// (0x0004fb50) popup_call2_audio_second_window_t1_ParamLimits

0xd61e,	// (0x0004fb50) popup_call2_audio_second_window_t1

0xd6d9,	// (0x0004fc0b) popup_call2_audio_second_window_t2_ParamLimits

0xd6d9,	// (0x0004fc0b) popup_call2_audio_second_window_t2

0xd72c,	// (0x0004fc5e) popup_call2_audio_second_window_t3_ParamLimits

0xd72c,	// (0x0004fc5e) popup_call2_audio_second_window_t3

0x0003,

0xf518,	// (0x00051a4a) popup_call2_audio_second_window_t_ParamLimits

0xf518,	// (0x00051a4a) popup_call2_audio_second_window_t

0xc26a,	// (0x0004e79c) bg_popup_call2_in_pane_cp02

0xc274,	// (0x0004e7a6) call_type_pane_cp04

0xc27c,	// (0x0004e7ae) popup_call2_audio_wait_window_g1

0xc284,	// (0x0004e7b6) popup_call2_audio_wait_window_g2

0x0001,

0xf11b,	// (0x0005164d) popup_call2_audio_wait_window_g

0xc28c,	// (0x0004e7be) popup_call2_audio_wait_window_t3

0xd81f,	// (0x0004fd51) bg_popup_call2_act_pane_ParamLimits

0xd81f,	// (0x0004fd51) bg_popup_call2_act_pane

0xd8f7,	// (0x0004fe29) call_type_pane_cp03_ParamLimits

0xd8f7,	// (0x0004fe29) call_type_pane_cp03

0xd95b,	// (0x0004fe8d) popup_call2_audio_first_window_g1_ParamLimits

0xd95b,	// (0x0004fe8d) popup_call2_audio_first_window_g1

0xd9cb,	// (0x0004fefd) popup_call2_audio_first_window_g2_ParamLimits

0xd9cb,	// (0x0004fefd) popup_call2_audio_first_window_g2

0xcddb,	// (0x0004f30d) popup_call2_audio_first_window_g3_ParamLimits

0xcddb,	// (0x0004f30d) popup_call2_audio_first_window_g3

0x0004,

0xf521,	// (0x00051a53) popup_call2_audio_first_window_g_ParamLimits

0xf521,	// (0x00051a53) popup_call2_audio_first_window_g

0xdaa9,	// (0x0004ffdb) popup_call2_audio_first_window_t1_ParamLimits

0xdaa9,	// (0x0004ffdb) popup_call2_audio_first_window_t1

0xdbac,	// (0x000500de) popup_call2_audio_first_window_t4_ParamLimits

0xdbac,	// (0x000500de) popup_call2_audio_first_window_t4

0xdc8f,	// (0x000501c1) popup_call2_audio_first_window_t5_ParamLimits

0xdc8f,	// (0x000501c1) popup_call2_audio_first_window_t5

0x0003,

0x00cd,	// (0x000425ff) popup_call2_audio_first_window_t_ParamLimits

0x00cd,	// (0x000425ff) popup_call2_audio_first_window_t

0xc4bd,	// (0x0004e9ef) bg_popup_call2_act_pane_g1

0xe2fe,	// (0x00050830) popup_cale_lunar_info_window_t1

0xe30c,	// (0x0005083e) popup_cale_lunar_info_window_t2

0xe31a,	// (0x0005084c) popup_cale_lunar_info_window_t3

0xc26a,	// (0x0004e79c) bg_popup_call2_bubble_pane

0xdd90,	// (0x000502c2) bg_popup_call2_in_pane_cp01_ParamLimits

0xdd90,	// (0x000502c2) bg_popup_call2_in_pane_cp01

0xbf46,	// (0x0004e478) call_type_pane_cp02

0xddd8,	// (0x0005030a) popup_call2_audio_out_window_g1_ParamLimits

0xddd8,	// (0x0005030a) popup_call2_audio_out_window_g1

0xde04,	// (0x00050336) popup_call2_audio_out_window_g2_ParamLimits

0xde04,	// (0x00050336) popup_call2_audio_out_window_g2

0xde2c,	// (0x0005035e) popup_call2_audio_out_window_g3_ParamLimits

0xde2c,	// (0x0005035e) popup_call2_audio_out_window_g3

0x0003,

0x00d6,	// (0x00042608) popup_call2_audio_out_window_g_ParamLimits

0x00d6,	// (0x00042608) popup_call2_audio_out_window_g

0xde67,	// (0x00050399) popup_call2_audio_out_window_t1_ParamLimits

0xde67,	// (0x00050399) popup_call2_audio_out_window_t1

0xdec6,	// (0x000503f8) popup_call2_audio_out_window_t2_ParamLimits

0xdec6,	// (0x000503f8) popup_call2_audio_out_window_t2

0xdf1a,	// (0x0005044c) popup_call2_audio_out_window_t3_ParamLimits

0xdf1a,	// (0x0005044c) popup_call2_audio_out_window_t3

0xdf30,	// (0x00050462) popup_call2_audio_out_window_t4_ParamLimits

0xdf30,	// (0x00050462) popup_call2_audio_out_window_t4

0xdf46,	// (0x00050478) popup_call2_audio_out_window_t5_ParamLimits

0xdf46,	// (0x00050478) popup_call2_audio_out_window_t5

0x0005,

0x00df,	// (0x00042611) popup_call2_audio_out_window_t_ParamLimits

0x00df,	// (0x00042611) popup_call2_audio_out_window_t

0xdfaa,	// (0x000504dc) bg_popup_call2_in_pane_ParamLimits

0xdfaa,	// (0x000504dc) bg_popup_call2_in_pane

0xe006,	// (0x00050538) popup_call2_audio_in_window_g1_ParamLimits

0xe006,	// (0x00050538) popup_call2_audio_in_window_g1

0xe03e,	// (0x00050570) popup_call2_audio_in_window_g2_ParamLimits

0xe03e,	// (0x00050570) popup_call2_audio_in_window_g2

0xe076,	// (0x000505a8) popup_call2_audio_in_window_g3_ParamLimits

0xe076,	// (0x000505a8) popup_call2_audio_in_window_g3

0x0003,

0x00ec,	// (0x0004261e) popup_call2_audio_in_window_g_ParamLimits

0x00ec,	// (0x0004261e) popup_call2_audio_in_window_g

0xe0ce,	// (0x00050600) popup_call2_audio_in_window_t1_ParamLimits

0xe0ce,	// (0x00050600) popup_call2_audio_in_window_t1

0xe14e,	// (0x00050680) popup_call2_audio_in_window_t2_ParamLimits

0xe14e,	// (0x00050680) popup_call2_audio_in_window_t2

0xe1ce,	// (0x00050700) popup_call2_audio_in_window_t3_ParamLimits

0xe1ce,	// (0x00050700) popup_call2_audio_in_window_t3

0xe1e8,	// (0x0005071a) popup_call2_audio_in_window_t4_ParamLimits

0xe1e8,	// (0x0005071a) popup_call2_audio_in_window_t4

0xe1fa,	// (0x0005072c) popup_call2_audio_in_window_t5_ParamLimits

0xe1fa,	// (0x0005072c) popup_call2_audio_in_window_t5

0xe20f,	// (0x00050741) popup_call2_audio_in_window_t6_ParamLimits

0xe20f,	// (0x00050741) popup_call2_audio_in_window_t6

0x0005,

0x00f5,	// (0x00042627) popup_call2_audio_in_window_t_ParamLimits

0x00f5,	// (0x00042627) popup_call2_audio_in_window_t

0xc4bd,	// (0x0004e9ef) bg_popup_call2_in_pane_g1

0xe328,	// (0x0005085a) popup_cale_lunar_info_window_t4

0x0003,

0x015d,	// (0x0004268f) popup_cale_lunar_info_window_t

0xc4c5,	// (0x0004e9f7) bg_popup_call2_rect_pane_ParamLimits

0xc4c5,	// (0x0004e9f7) bg_popup_call2_rect_pane

0xc26a,	// (0x0004e79c) call2_cli_visual_graphic_pane

0xc26a,	// (0x0004e79c) call2_cli_visual_text_pane

0xab41,	// (0x0004d073) smil_status_volume_pane_g3

0x0002,

0xc5e5,	// (0x0004eb17) call2_cli_visual_graphic_pane_g1

0xc5e5,	// (0x0004eb17) call2_cli_visual_graphic_pane_g2

0xc5e5,	// (0x0004eb17) call2_cli_visual_graphic_pane_g3

0x0002,

0x0102,	// (0x00042634) call2_cli_visual_graphic_pane_g

0xe224,	// (0x00050756) bg_popup_call2_rect_pane_g1

0xc683,	// (0x0004ebb5) bg_popup_call2_rect_pane_g2

0xe22c,	// (0x0005075e) bg_popup_call2_rect_pane_g3

0xe234,	// (0x00050766) bg_popup_call2_rect_pane_g4

0xe23c,	// (0x0005076e) bg_popup_call2_rect_pane_g5

0xe244,	// (0x00050776) bg_popup_call2_rect_pane_g6

0xe24c,	// (0x0005077e) bg_popup_call2_rect_pane_g7

0xe254,	// (0x00050786) bg_popup_call2_rect_pane_g8

0xe25c,	// (0x0005078e) bg_popup_call2_rect_pane_g9

0x0008,

0x0109,	// (0x0004263b) bg_popup_call2_rect_pane_g

0xe264,	// (0x00050796) bg_popup_call2_bubble_pane_g1

0xe26c,	// (0x0005079e) bg_popup_call2_bubble_pane_g2

0xe274,	// (0x000507a6) bg_popup_call2_bubble_pane_g3

0xe27c,	// (0x000507ae) bg_popup_call2_bubble_pane_g4

0xe284,	// (0x000507b6) bg_popup_call2_bubble_pane_g5

0xe28c,	// (0x000507be) bg_popup_call2_bubble_pane_g6

0xe294,	// (0x000507c6) bg_popup_call2_bubble_pane_g7

0xe29c,	// (0x000507ce) bg_popup_call2_bubble_pane_g8

0xe2a4,	// (0x000507d6) bg_popup_call2_bubble_pane_g9

0x0008,

0x011c,	// (0x0004264e) bg_popup_call2_bubble_pane_g

0x1c7e,	// (0x000441b0) aid_cale_week_size_cell_pane

0x2154,	// (0x00044686) aid_cams_cif_uncrop_pane_ParamLimits

0x2154,	// (0x00044686) aid_cams_cif_uncrop_pane

0x230d,	// (0x0004483f) aid_cams_size_cell_ParamLimits

0x230d,	// (0x0004483f) aid_cams_size_cell

0x2321,	// (0x00044853) grid_cams_pane_ParamLimits

0x233b,	// (0x0004486d) linegrid_cams_pane_ParamLimits

0x241e,	// (0x00044950) call_video_pane_t1

0x2438,	// (0x0004496a) call_video_pane_t2

0x0001,

0xf292,	// (0x000517c4) call_video_pane_t

0x2883,	// (0x00044db5) aid_cale_month_size_cell_pane_ParamLimits

0x2883,	// (0x00044db5) aid_cale_month_size_cell_pane

0xf55c,	// (0x00051a8e) smil_status_volume_pane_g

0xab4e,	// (0x0004d080) volume_smil_pane_ParamLimits

0xa690,	// (0x0004cbc2) aid_popup2_width_pane

0x1be6,	// (0x00044118) cell_qdial_pane_g4_ParamLimits

0x1be6,	// (0x00044118) cell_qdial_pane_g4

0x3413,	// (0x00045945) aid_blid_cardinal_pane_ParamLimits

0x3423,	// (0x00045955) aid_blid_destination_pane_ParamLimits

0x3423,	// (0x00045955) aid_blid_destination_pane

0xc4c5,	// (0x0004e9f7) bg_popup_call_poc_act_pane_ParamLimits

0xc4c5,	// (0x0004e9f7) bg_popup_call_poc_act_pane

0xc4c5,	// (0x0004e9f7) bg_popup_call_poc_inact_pane_ParamLimits

0xc4c5,	// (0x0004e9f7) bg_popup_call_poc_inact_pane

0xe2ac,	// (0x000507de) bg_popup_call_poc_act_pane_g1

0xe2b4,	// (0x000507e6) bg_popup_call_poc_act_pane_g2

0xe2bc,	// (0x000507ee) bg_popup_call_poc_act_pane_g3

0xe27c,	// (0x000507ae) bg_popup_call_poc_act_pane_g4

0xe284,	// (0x000507b6) bg_popup_call_poc_act_pane_g5

0xe2c4,	// (0x000507f6) bg_popup_call_poc_act_pane_g6

0xe294,	// (0x000507c6) bg_popup_call_poc_act_pane_g7

0xe2cc,	// (0x000507fe) bg_popup_call_poc_act_pane_g8

0xc26a,	// (0x0004e79c) main_usb_pane

0xe429,	// (0x0005095b) popup_cale_lunar_info_window

0x2703,	// (0x00044c35) im_reading_pane_t1_ParamLimits

0xc842,	// (0x0004ed74) list_im_pane_ParamLimits

0xc853,	// (0x0004ed85) scroll_pane_cp07_ParamLimits

0xc26a,	// (0x0004e79c) grid_highlight_pane_cp012

0xc4c5,	// (0x0004e9f7) mup_scale_pane_ParamLimits

0xd191,	// (0x0004f6c3) main_usb_pane_g1_ParamLimits

0xd191,	// (0x0004f6c3) main_usb_pane_g1

0x4101,	// (0x00046633) main_usb_pane_g2_ParamLimits

0x4101,	// (0x00046633) main_usb_pane_g2

0x0001,

0xf52c,	// (0x00051a5e) main_usb_pane_g_ParamLimits

0xf52c,	// (0x00051a5e) main_usb_pane_g

0x4117,	// (0x00046649) main_usb_pane_t1_ParamLimits

0x4117,	// (0x00046649) main_usb_pane_t1

0x4129,	// (0x0004665b) main_usb_pane_t2_ParamLimits

0x4129,	// (0x0004665b) main_usb_pane_t2

0x413b,	// (0x0004666d) main_usb_pane_t3_ParamLimits

0x413b,	// (0x0004666d) main_usb_pane_t3

0x414d,	// (0x0004667f) main_usb_pane_t4_ParamLimits

0x414d,	// (0x0004667f) main_usb_pane_t4

0x4162,	// (0x00046694) main_usb_pane_t5_ParamLimits

0x4162,	// (0x00046694) main_usb_pane_t5

0x4177,	// (0x000466a9) main_usb_pane_t6_ParamLimits

0x4177,	// (0x000466a9) main_usb_pane_t6

0x0005,

0xf531,	// (0x00051a63) main_usb_pane_t_ParamLimits

0x33b2,	// (0x000458e4) aid_text_placing

0x33bd,	// (0x000458ef) main_location2_pane_t1_ParamLimits

0x33d3,	// (0x00045905) main_location2_pane_t2_ParamLimits

0x33e9,	// (0x0004591b) main_location2_pane_t3_ParamLimits

0x33ff,	// (0x00045931) main_location2_pane_t4_ParamLimits

0x33ff,	// (0x00045931) main_location2_pane_t4

0xf3f3,	// (0x00051925) main_location2_pane_t_ParamLimits

0xc501,	// (0x0004ea33) find_pinb_pane_g2_ParamLimits

0xc501,	// (0x0004ea33) find_pinb_pane_g2

0x0001,

0xf141,	// (0x00051673) find_pinb_pane_g_ParamLimits

0xf141,	// (0x00051673) find_pinb_pane_g

0xc50d,	// (0x0004ea3f) find_pinb_pane_t1_ParamLimits

0xc51f,	// (0x0004ea51) find_pinb_pane_t2_ParamLimits

0xf146,	// (0x00051678) find_pinb_pane_t_ParamLimits

0xc26a,	// (0x0004e79c) main_call3_pane

0x2bf7,	// (0x00045129) cale_month_day_heading_pane_t1_ParamLimits

0x2c55,	// (0x00045187) cale_month_day_heading_pane_t2_ParamLimits

0x2cba,	// (0x000451ec) cale_month_day_heading_pane_t3_ParamLimits

0x2d1f,	// (0x00045251) cale_month_day_heading_pane_t4_ParamLimits

0x2d84,	// (0x000452b6) cale_month_day_heading_pane_t5_ParamLimits

0x2de9,	// (0x0004531b) cale_month_day_heading_pane_t6_ParamLimits

0x2e4e,	// (0x00045380) cale_month_day_heading_pane_t7_ParamLimits

0xf2ca,	// (0x000517fc) cale_month_day_heading_pane_t_ParamLimits

0xca93,	// (0x0004efc5) smil_status_volume_pane

0x3bb9,	// (0x000460eb) postcard_address_pane_ParamLimits

0x3bb9,	// (0x000460eb) postcard_address_pane

0x3bcf,	// (0x00046101) postcard_message_pane_ParamLimits

0x3bcf,	// (0x00046101) postcard_message_pane

0x40da,	// (0x0004660c) call2_cli_visual_pane_t1_ParamLimits

0x40da,	// (0x0004660c) call2_cli_visual_pane_t1

0x4946,	// (0x00046e78) postcard_message_pane_t1_ParamLimits

0x4946,	// (0x00046e78) postcard_message_pane_t1

0xe517,	// (0x00050a49) postcard_address_pane_t1_ParamLimits

0xe517,	// (0x00050a49) postcard_address_pane_t1

0x4932,	// (0x00046e64) popup_call3_audio_in_window_ParamLimits

0x4932,	// (0x00046e64) popup_call3_audio_in_window

0x47b7,	// (0x00046ce9) bg_popup_call3_in_pane_ParamLimits

0x47b7,	// (0x00046ce9) bg_popup_call3_in_pane

0x4833,	// (0x00046d65) popup_call3_audio_in_window_g1_ParamLimits

0x4833,	// (0x00046d65) popup_call3_audio_in_window_g1

0x4853,	// (0x00046d85) popup_call3_audio_in_window_g2_ParamLimits

0x4853,	// (0x00046d85) popup_call3_audio_in_window_g2

0x4873,	// (0x00046da5) popup_call3_audio_in_window_g3_ParamLimits

0x4873,	// (0x00046da5) popup_call3_audio_in_window_g3

0x0003,

0xf563,	// (0x00051a95) popup_call3_audio_in_window_g_ParamLimits

0xf563,	// (0x00051a95) popup_call3_audio_in_window_g

0x48a4,	// (0x00046dd6) popup_call3_audio_in_window_t1_ParamLimits

0x48a4,	// (0x00046dd6) popup_call3_audio_in_window_t1

0x48e2,	// (0x00046e14) popup_call3_audio_in_window_t2_ParamLimits

0x48e2,	// (0x00046e14) popup_call3_audio_in_window_t2

0x4920,	// (0x00046e52) popup_call3_audio_in_window_t3_ParamLimits

0x4920,	// (0x00046e52) popup_call3_audio_in_window_t3

0x0002,

0xf56c,	// (0x00051a9e) popup_call3_audio_in_window_t_ParamLimits

0xf56c,	// (0x00051a9e) popup_call3_audio_in_window_t

0xcfe4,	// (0x0004f516) bg_popup_call3_rect_pane

0xe224,	// (0x00050756) bg_popup_call3_rect_pane_g1

0xc683,	// (0x0004ebb5) bg_popup_call3_rect_pane_g2

0xe22c,	// (0x0005075e) bg_popup_call3_rect_pane_g3

0xe234,	// (0x00050766) bg_popup_call3_rect_pane_g4

0xe23c,	// (0x0005076e) bg_popup_call3_rect_pane_g5

0xe244,	// (0x00050776) bg_popup_call3_rect_pane_g6

0xe24c,	// (0x0005077e) bg_popup_call3_rect_pane_g7

0x37fb,	// (0x00045d2d) mup_visualizer_osc_pane

0xd0a3,	// (0x0004f5d5) mup_visualizer_spec_pane

0x47e7,	// (0x00046d19) call3_video_qcif_pane_ParamLimits

0x47e7,	// (0x00046d19) call3_video_qcif_pane

0x47fa,	// (0x00046d2c) call3_video_qcif_uncrop_pane_ParamLimits

0x47fa,	// (0x00046d2c) call3_video_qcif_uncrop_pane

0x480a,	// (0x00046d3c) call3_video_subqcif_pane_ParamLimits

0x480a,	// (0x00046d3c) call3_video_subqcif_pane

0x4820,	// (0x00046d52) call3_video_subqcif_uncrop_pane_ParamLimits

0x4820,	// (0x00046d52) call3_video_subqcif_uncrop_pane

0x4893,	// (0x00046dc5) popup_call3_audio_in_window_g4_ParamLimits

0x4893,	// (0x00046dc5) popup_call3_audio_in_window_g4

0x47a6,	// (0x00046cd8) mup_spec_half_pane

0x47af,	// (0x00046ce1) mup_spec_half_pane_cp

0xe4d7,	// (0x00050a09) mup_osc_middle_pane

0xe4e0,	// (0x00050a12) mup_visualizer_osc_pane_g1

0x4786,	// (0x00046cb8) mup_spec_bar_pane_ParamLimits

0x4786,	// (0x00046cb8) mup_spec_bar_pane

0xe4c4,	// (0x000509f6) mup_spec_bar_pane_g1

0xe4ce,	// (0x00050a00) mup_spec_bar_pane_g2

0x0001,

0x01a1,	// (0x000426d3) mup_spec_bar_pane_g

0x1c7e,	// (0x000441b0) aid_cale_week_size_cell_pane_ParamLimits

0x1c91,	// (0x000441c3) bg_cale_heading_pane_ParamLimits

0xc6b7,	// (0x0004ebe9) bg_cale_pane_cp01_ParamLimits

0x1cad,	// (0x000441df) cale_week_corner_pane_ParamLimits

0x1cc3,	// (0x000441f5) cale_week_day_heading_pane_ParamLimits

0x1cdf,	// (0x00044211) cale_week_scroll_pane_g1_ParamLimits

0x1cf8,	// (0x0004422a) cale_week_scroll_pane_g2_ParamLimits

0x1d09,	// (0x0004423b) cale_week_scroll_pane_g3_ParamLimits

0x1d1a,	// (0x0004424c) cale_week_scroll_pane_g4_ParamLimits

0x1d2b,	// (0x0004425d) cale_week_scroll_pane_g5_ParamLimits

0x1d3c,	// (0x0004426e) cale_week_scroll_pane_g6_ParamLimits

0x1d4d,	// (0x0004427f) cale_week_scroll_pane_g7_ParamLimits

0x1d5e,	// (0x00044290) cale_week_scroll_pane_g8_ParamLimits

0x1d6f,	// (0x000442a1) cale_week_scroll_pane_g9_ParamLimits

0x1d80,	// (0x000442b2) cale_week_scroll_pane_g10_ParamLimits

0x1d91,	// (0x000442c3) cale_week_scroll_pane_g11_ParamLimits

0x1da2,	// (0x000442d4) cale_week_scroll_pane_g12_ParamLimits

0x1db3,	// (0x000442e5) cale_week_scroll_pane_g13_ParamLimits

0x1dcc,	// (0x000442fe) cale_week_scroll_pane_g14_ParamLimits

0x1de5,	// (0x00044317) cale_week_scroll_pane_g15_ParamLimits

0xf1d2,	// (0x00051704) cale_week_scroll_pane_g_ParamLimits

0x1dfe,	// (0x00044330) cale_week_time_pane_ParamLimits

0x1e0f,	// (0x00044341) grid_cale_week_pane_ParamLimits

0xc6d0,	// (0x0004ec02) listscroll_cale_week_pane_t1

0x1e2a,	// (0x0004435c) scroll_pane_cp08_ParamLimits

0x28d4,	// (0x00044e06) cale_month_corner_pane_ParamLimits

0xca69,	// (0x0004ef9b) cale_month_pane_t1

0x2bb8,	// (0x000450ea) cale_month_week_pane_ParamLimits

0x31d6,	// (0x00045708) popup_call_status_window_g1_ParamLimits

0x31ea,	// (0x0004571c) popup_call_status_window_g2_ParamLimits

0x31fe,	// (0x00045730) popup_call_status_window_g3_ParamLimits

0xf37a,	// (0x000518ac) popup_call_status_window_g_ParamLimits

0xcd78,	// (0x0004f2aa) aid_call2_pane

0x0be1,	// (0x00043113) msg_header_pane_g1

0x3bb9,	// (0x000460eb) postcard_address2_pane_ParamLimits

0x3bb9,	// (0x000460eb) postcard_address2_pane

0x3bcf,	// (0x00046101) postcard_message2_pane_ParamLimits

0x3bcf,	// (0x00046101) postcard_message2_pane

0x4743,	// (0x00046c75) message2_row_pane_ParamLimits

0x4743,	// (0x00046c75) message2_row_pane

0xe47f,	// (0x000509b1) address2_row_pane_ParamLimits

0xe47f,	// (0x000509b1) address2_row_pane

0xe492,	// (0x000509c4) postcard_message2_row_pane_g1

0xe49a,	// (0x000509cc) postcard_message2_row_pane_t1

0xe492,	// (0x000509c4) address2_row_pane_g1

0xe49a,	// (0x000509cc) address2_row_pane_t1

0x2038,	// (0x0004456a) aid_size_cell_vorec

0xc26a,	// (0x0004e79c) main_rss_pane

0x4766,	// (0x00046c98) rss_list_single_pane_ParamLimits

0x4766,	// (0x00046c98) rss_list_single_pane

0xe4a8,	// (0x000509da) rss_list_single_pane_t1

0xe4b6,	// (0x000509e8) rss_list_single_pane_t2

0x0001,

0x019c,	// (0x000426ce) rss_list_single_pane_t

0xc26a,	// (0x0004e79c) main_camera2_pane

0xc26a,	// (0x0004e79c) main_video2_pane

0x49b5,	// (0x00046ee7) cams_zoom_pane_cp2_ParamLimits

0x49b5,	// (0x00046ee7) cams_zoom_pane_cp2

0x49cc,	// (0x00046efe) image2_vga_pane_ParamLimits

0x49cc,	// (0x00046efe) image2_vga_pane

0x4a14,	// (0x00046f46) main_camera2_pane_g1_ParamLimits

0x4a14,	// (0x00046f46) main_camera2_pane_g1

0x4a34,	// (0x00046f66) main_camera2_pane_g2_ParamLimits

0x4a34,	// (0x00046f66) main_camera2_pane_g2

0x4a4b,	// (0x00046f7d) main_camera2_pane_g3_ParamLimits

0x4a4b,	// (0x00046f7d) main_camera2_pane_g3

0x4a62,	// (0x00046f94) main_camera2_pane_g4_ParamLimits

0x4a62,	// (0x00046f94) main_camera2_pane_g4

0x4a79,	// (0x00046fab) main_camera2_pane_g5_ParamLimits

0x4a79,	// (0x00046fab) main_camera2_pane_g5

0x4a90,	// (0x00046fc2) main_camera2_pane_g6_ParamLimits

0x4a90,	// (0x00046fc2) main_camera2_pane_g6

0x4aa7,	// (0x00046fd9) main_camera2_pane_g7_ParamLimits

0x4aa7,	// (0x00046fd9) main_camera2_pane_g7

0x4abe,	// (0x00046ff0) main_camera2_pane_g8_ParamLimits

0x4abe,	// (0x00046ff0) main_camera2_pane_g8

0x0008,

0xf573,	// (0x00051aa5) main_camera2_pane_g_ParamLimits

0xf573,	// (0x00051aa5) main_camera2_pane_g

0x4aec,	// (0x0004701e) main_camera2_pane_t1_ParamLimits

0x4aec,	// (0x0004701e) main_camera2_pane_t1

0x4b21,	// (0x00047053) main_camera2_pane_t2_ParamLimits

0x4b21,	// (0x00047053) main_camera2_pane_t2

0x4b3e,	// (0x00047070) main_camera2_pane_t3_ParamLimits

0x4b3e,	// (0x00047070) main_camera2_pane_t3

0x4b9c,	// (0x000470ce) main_camera2_pane_t4_ParamLimits

0x4b9c,	// (0x000470ce) main_camera2_pane_t4

0x0006,

0xf586,	// (0x00051ab8) main_camera2_pane_t_ParamLimits

0xf586,	// (0x00051ab8) main_camera2_pane_t

0x4c25,	// (0x00047157) cams_zoom_pane_cp4_ParamLimits

0x4c25,	// (0x00047157) cams_zoom_pane_cp4

0x4c3b,	// (0x0004716d) image2_cif_pane_ParamLimits

0x4c3b,	// (0x0004716d) image2_cif_pane

0x4c66,	// (0x00047198) image2_subqcif_pane_ParamLimits

0x4c66,	// (0x00047198) image2_subqcif_pane

0x4c81,	// (0x000471b3) main_video2_pane_g1_ParamLimits

0x4c81,	// (0x000471b3) main_video2_pane_g1

0x4c9b,	// (0x000471cd) main_video2_pane_g2_ParamLimits

0x4c9b,	// (0x000471cd) main_video2_pane_g2

0x4cb1,	// (0x000471e3) main_video2_pane_g3_ParamLimits

0x4cb1,	// (0x000471e3) main_video2_pane_g3

0x4cc7,	// (0x000471f9) main_video2_pane_g4_ParamLimits

0x4cc7,	// (0x000471f9) main_video2_pane_g4

0x4cdd,	// (0x0004720f) main_video2_pane_g5_ParamLimits

0x4cdd,	// (0x0004720f) main_video2_pane_g5

0x4cf3,	// (0x00047225) main_video2_pane_g6_ParamLimits

0x4cf3,	// (0x00047225) main_video2_pane_g6

0x0005,

0xf595,	// (0x00051ac7) main_video2_pane_g_ParamLimits

0xf595,	// (0x00051ac7) main_video2_pane_g

0x4d0d,	// (0x0004723f) main_video2_pane_t1_ParamLimits

0x4d0d,	// (0x0004723f) main_video2_pane_t1

0x4d31,	// (0x00047263) main_video2_pane_t2_ParamLimits

0x4d31,	// (0x00047263) main_video2_pane_t2

0x4d81,	// (0x000472b3) main_video2_pane_t3_ParamLimits

0x4d81,	// (0x000472b3) main_video2_pane_t3

0x0002,

0xf5a2,	// (0x00051ad4) main_video2_pane_t_ParamLimits

0xf5a2,	// (0x00051ad4) main_video2_pane_t

0x4235,	// (0x00046767) call_muted_g2

0x0001,

0xf557,	// (0x00051a89) call_muted_g

0xc26a,	// (0x0004e79c) main_mup2_pane

0x4dc9,	// (0x000472fb) main_mup2_pane_g1_ParamLimits

0x4dc9,	// (0x000472fb) main_mup2_pane_g1

0x4dd5,	// (0x00047307) main_mup2_pane_g2_ParamLimits

0x4dd5,	// (0x00047307) main_mup2_pane_g2

0xabb7,	// (0x0004d0e9) main_mup_pane_g13_cp1

0xabbf,	// (0x0004d0f1) mup_volume_pane_cp1

0x4df3,	// (0x00047325) main_mup2_pane_g4_ParamLimits

0x4df3,	// (0x00047325) main_mup2_pane_g4

0x4e05,	// (0x00047337) main_mup2_pane_g5_ParamLimits

0x4e05,	// (0x00047337) main_mup2_pane_g5

0x4e17,	// (0x00047349) main_mup2_pane_g6_ParamLimits

0x4e17,	// (0x00047349) main_mup2_pane_g6

0x4e29,	// (0x0004735b) main_mup2_pane_g7_ParamLimits

0x4e29,	// (0x0004735b) main_mup2_pane_g7

0x0006,

0xf5a9,	// (0x00051adb) main_mup2_pane_g_ParamLimits

0xf5a9,	// (0x00051adb) main_mup2_pane_g

0x4e41,	// (0x00047373) main_mup2_pane_t1_ParamLimits

0x4e41,	// (0x00047373) main_mup2_pane_t1

0x4e57,	// (0x00047389) main_mup2_pane_t2_ParamLimits

0x4e57,	// (0x00047389) main_mup2_pane_t2

0x4e6d,	// (0x0004739f) main_mup2_pane_t3_ParamLimits

0x4e6d,	// (0x0004739f) main_mup2_pane_t3

0x4e83,	// (0x000473b5) main_mup2_pane_t4_ParamLimits

0x4e83,	// (0x000473b5) main_mup2_pane_t4

0x4e9b,	// (0x000473cd) main_mup2_pane_t5_ParamLimits

0x4e9b,	// (0x000473cd) main_mup2_pane_t5

0x4eb3,	// (0x000473e5) main_mup2_pane_t6_ParamLimits

0x4eb3,	// (0x000473e5) main_mup2_pane_t6

0x0005,

0xf5b8,	// (0x00051aea) main_mup2_pane_t_ParamLimits

0xf5b8,	// (0x00051aea) main_mup2_pane_t

0x4ee3,	// (0x00047415) mup2_visualizer_pane_ParamLimits

0x4ee3,	// (0x00047415) mup2_visualizer_pane

0x4f11,	// (0x00047443) mup_progress_pane_cp_ParamLimits

0x4f11,	// (0x00047443) mup_progress_pane_cp

0xaba2,	// (0x0004d0d4) mup_volume_pane_cp_ParamLimits

0xaba2,	// (0x0004d0d4) mup_volume_pane_cp

0x4f27,	// (0x00047459) mup2_visualizer_pane_g1_ParamLimits

0x4f27,	// (0x00047459) mup2_visualizer_pane_g1

0xe52e,	// (0x00050a60) mup2_visualizer_pane_g2_ParamLimits

0xe52e,	// (0x00050a60) mup2_visualizer_pane_g2

0x4f3c,	// (0x0004746e) mup2_visualizer_pane_g3_ParamLimits

0x4f3c,	// (0x0004746e) mup2_visualizer_pane_g3

0x0002,

0xf5c5,	// (0x00051af7) mup2_visualizer_pane_g_ParamLimits

0xf5c5,	// (0x00051af7) mup2_visualizer_pane_g

0xd2cc,	// (0x0004f7fe) aid_size_cell_fmradio

0x43e5,	// (0x00046917) aid_height_parent_landcape

0xc8d1,	// (0x0004ee03) wml_content_pane_cp

0xc8d9,	// (0x0004ee0b) wml_tabs_pane

0xc8e2,	// (0x0004ee14) popup_wml_miniature_window

0xc8ea,	// (0x0004ee1c) scroll_pane_cp021

0xc8fe,	// (0x0004ee30) wml_content_pane_comp8

0xc26a,	// (0x0004e79c) bg_popup_sub_pane_cp05

0xe54c,	// (0x00050a7e) popup_wml_miniature_window_g1

0xe554,	// (0x00050a86) wml_miniature_view_pane

0x4f48,	// (0x0004747a) aid_size_wml_view

0x4f50,	// (0x00047482) wml_miniature_view_pane_g1

0x4f59,	// (0x0004748b) wml_miniature_view_pane_g2

0x4f62,	// (0x00047494) wml_miniature_view_pane_g3

0x4f6a,	// (0x0004749c) wml_miniature_view_pane_g4

0x4f72,	// (0x000474a4) wml_miniature_view_pane_g5

0x4f7a,	// (0x000474ac) wml_miniature_view_pane_g6

0x4f82,	// (0x000474b4) wml_miniature_view_pane_g7

0x4f8a,	// (0x000474bc) wml_miniature_view_pane_g8

0x0007,

0xf5cc,	// (0x00051afe) wml_miniature_view_pane_g

0xe55c,	// (0x00050a8e) background_graphic_ParamLimits

0xe55c,	// (0x00050a8e) background_graphic

0xe568,	// (0x00050a9a) wml_tabs_2_pane

0xe571,	// (0x00050aa3) wml_tabs_3_pane_ParamLimits

0xe571,	// (0x00050aa3) wml_tabs_3_pane

0xe583,	// (0x00050ab5) wml_tabs_4_pane_ParamLimits

0xe583,	// (0x00050ab5) wml_tabs_4_pane

0xe599,	// (0x00050acb) wml_tabs_5_pane_ParamLimits

0xe599,	// (0x00050acb) wml_tabs_5_pane

0xe5b3,	// (0x00050ae5) wml_tabs_pane_g2_ParamLimits

0xe5b3,	// (0x00050ae5) wml_tabs_pane_g2

0xe5c7,	// (0x00050af9) wml_tabs_pane_g3_ParamLimits

0xe5c7,	// (0x00050af9) wml_tabs_pane_g3

0x4f92,	// (0x000474c4) wml_tabs_2_active_pane_ParamLimits

0x4f92,	// (0x000474c4) wml_tabs_2_active_pane

0x4fa6,	// (0x000474d8) wml_tabs_2_passive_pane_ParamLimits

0x4fa6,	// (0x000474d8) wml_tabs_2_passive_pane

0x4fba,	// (0x000474ec) wml_tabs_3_active_pane_cp_ParamLimits

0x4fba,	// (0x000474ec) wml_tabs_3_active_pane_cp

0x4fcf,	// (0x00047501) wml_tabs_3_passive_pane_ParamLimits

0x4fcf,	// (0x00047501) wml_tabs_3_passive_pane

0x4fe2,	// (0x00047514) wml_tabs_3_passive_pane_cp_ParamLimits

0x4fe2,	// (0x00047514) wml_tabs_3_passive_pane_cp

0x4ff9,	// (0x0004752b) tabs_4_active_pane

0x5001,	// (0x00047533) tabs_4_passive_pane

0x500b,	// (0x0004753d) tabs_4_passive_pane_cp

0x5013,	// (0x00047545) tabs_4_passive_pane_cp2

0x40f9,	// (0x0004662b) aid_height_text

0x37cd,	// (0x00045cff) mup_volume_cont_pane_ParamLimits

0x37cd,	// (0x00045cff) mup_volume_cont_pane

0x1882,	// (0x00043db4) aid_size_cell_pinb

0x188c,	// (0x00043dbe) aid_size_list_pinb

0x4efd,	// (0x0004742f) mup2_volume_cont_pane_ParamLimits

0x4efd,	// (0x0004742f) mup2_volume_cont_pane

0xab8e,	// (0x0004d0c0) mup2_volume_cont_pane_g1_ParamLimits

0xab8e,	// (0x0004d0c0) mup2_volume_cont_pane_g1

0x1567,	// (0x00043a99) aid_size_cell_touch_ParamLimits

0x1567,	// (0x00043a99) aid_size_cell_touch

0x1771,	// (0x00043ca3) touch_pane_ParamLimits

0x1771,	// (0x00043ca3) touch_pane

0xa67e,	// (0x0004cbb0) main_rss2_pane

0xe5e4,	// (0x00050b16) listscroll_rss2_pane

0xe5ed,	// (0x00050b1f) rss2_navigation_pane

0xe5f5,	// (0x00050b27) list_rss2_pane

0xceaa,	// (0x0004f3dc) scroll_pane_cp22

0xe5fd,	// (0x00050b2f) rss2_navigation_pane_g1

0xe606,	// (0x00050b38) rss2_navigation_pane_g2

0xe60e,	// (0x00050b40) rss2_navigation_pane_g3

0x0002,

0x0227,	// (0x00042759) rss2_navigation_pane_g

0xe616,	// (0x00050b48) rss2_navigation_pane_t1

0x501d,	// (0x0004754f) rss2_list_single_pane_ParamLimits

0x501d,	// (0x0004754f) rss2_list_single_pane

0xe624,	// (0x00050b56) rss2_list_single_pane_t2

0xe632,	// (0x00050b64) rss2_list_single_pane_t3_ParamLimits

0xe632,	// (0x00050b64) rss2_list_single_pane_t3

0xe64f,	// (0x00050b81) rss2_list_single_pane_t4

0x301a,	// (0x0004554c) smil_status_pane_g1

0xa6f7,	// (0x0004cc29) main_image2_pane_ParamLimits

0xa6f7,	// (0x0004cc29) main_image2_pane

0x4ad5,	// (0x00047007) main_camera2_pane_g9_ParamLimits

0x4ad5,	// (0x00047007) main_camera2_pane_g9

0x4bf1,	// (0x00047123) main_camera2_pane_t5_ParamLimits

0x4bf1,	// (0x00047123) main_camera2_pane_t5

0xab63,	// (0x0004d095) main_camera2_pane_t6_ParamLimits

0xab63,	// (0x0004d095) main_camera2_pane_t6

0x5037,	// (0x00047569) main_image2_pane_g1_ParamLimits

0x5037,	// (0x00047569) main_image2_pane_g1

0x3e10,	// (0x00046342) smil2_video_pane_ParamLimits

0x3e10,	// (0x00046342) smil2_video_pane

0xa6ac,	// (0x0004cbde) aid_zoom_text_primary_cp

0xa6ed,	// (0x0004cc1f) popup_preview_fixed_window

0xc83a,	// (0x0004ed6c) im_reading_pane_g1

0x49a7,	// (0x00046ed9) cams2_bc_adjust_pane_cp_ParamLimits

0x49a7,	// (0x00046ed9) cams2_bc_adjust_pane_cp

0x4c17,	// (0x00047149) cams2_bc_adjust_pane_ParamLimits

0x4c17,	// (0x00047149) cams2_bc_adjust_pane

0xabc7,	// (0x0004d0f9) cams2_bc_adjust_pane_g1

0xabcf,	// (0x0004d101) cams2_slider_pane

0xabd8,	// (0x0004d10a) cams2_slider_pane_g1

0xabe1,	// (0x0004d113) cams2_slider_pane_g2

0x0006,

0xf5dd,	// (0x00051b0f) cams2_slider_pane_g

0x197c,	// (0x00043eae) calc_display_pane_ParamLimits

0x19a2,	// (0x00043ed4) calc_paper_pane_ParamLimits

0x19c5,	// (0x00043ef7) grid_calc_pane_ParamLimits

0xaad0,	// (0x0004d002) popup_clock_digital_window_t1_ParamLimits

0xd269,	// (0x0004f79b) main_image_pane_t1

0x195e,	// (0x00043e90) aid_size_cell_calc_ParamLimits

0x195e,	// (0x00043e90) aid_size_cell_calc

0x442b,	// (0x0004695d) popup_blid_sat_info2_window_ParamLimits

0x442b,	// (0x0004695d) popup_blid_sat_info2_window

0xe665,	// (0x00050b97) aid_size_cell_blid

0xe66d,	// (0x00050b9f) bg_popup_window_pane_cp07

0xe690,	// (0x00050bc2) grid_popup_blid_pane

0xe69a,	// (0x00050bcc) heading_pane_cp05_ParamLimits

0xe69a,	// (0x00050bcc) heading_pane_cp05

0xe764,	// (0x00050c96) cell_popup_blid_pane_ParamLimits

0xe764,	// (0x00050c96) cell_popup_blid_pane

0xe78e,	// (0x00050cc0) cell_popup_blid_pane_g1

0xe796,	// (0x00050cc8) cell_popup_blid_pane_t1

0x4ecd,	// (0x000473ff) mup2_indicator_pane_ParamLimits

0x4ecd,	// (0x000473ff) mup2_indicator_pane

0xcfe4,	// (0x0004f516) mup2_visualizer_osc_pane

0xe53a,	// (0x00050a6c) mup2_visualizer_spec_pane_ParamLimits

0xe53a,	// (0x00050a6c) mup2_visualizer_spec_pane

0x504d,	// (0x0004757f) mup2_spec_half_pane

0x5056,	// (0x00047588) mup2_spec_half_pane_cp

0x505e,	// (0x00047590) mup2_spec_bar_pane_ParamLimits

0x505e,	// (0x00047590) mup2_spec_bar_pane

0xe4c4,	// (0x000509f6) mup2_spec_bar_pane_g1

0xe4ce,	// (0x00050a00) mup2_spec_bar_pane_g2

0x0001,

0x01a1,	// (0x000426d3) mup2_spec_bar_pane_g

0x507e,	// (0x000475b0) mup2_osc_middle_pane

0xe4e0,	// (0x00050a12) mup2_visualizer_osc_pane_g1

0xa725,	// (0x0004cc57) popup_number_entry_window_t1_ParamLimits

0xa738,	// (0x0004cc6a) popup_number_entry_window_t2_ParamLimits

0xa74a,	// (0x0004cc7c) popup_number_entry_window_t3_ParamLimits

0x17c3,	// (0x00043cf5) popup_number_entry_window_t5_ParamLimits

0x17c3,	// (0x00043cf5) popup_number_entry_window_t5

0xf0ec,	// (0x0005161e) popup_number_entry_window_t_ParamLimits

0xa75c,	// (0x0004cc8e) text_title_cp2_ParamLimits

0xab0f,	// (0x0004d041) aid_hotspot_pointer_text2_pane

0xab35,	// (0x0004d067) main_viewer_pane_g9_ParamLimits

0xab35,	// (0x0004d067) main_viewer_pane_g9

0xca69,	// (0x0004ef9b) cale_month_pane_t1_ParamLimits

0xcaa6,	// (0x0004efd8) bg_cale_pane_ParamLimits

0xcabe,	// (0x0004eff0) list_cale_pane_ParamLimits

0xc6d0,	// (0x0004ec02) listscroll_cale_day_pane_t1

0xcacf,	// (0x0004f001) scroll_pane_cp09_ParamLimits

0x3803,	// (0x00045d35) main_mup_eq_pane_t1_ParamLimits

0x3803,	// (0x00045d35) main_mup_eq_pane_t1

0x381f,	// (0x00045d51) main_mup_eq_pane_t2_ParamLimits

0x381f,	// (0x00045d51) main_mup_eq_pane_t2

0x383b,	// (0x00045d6d) main_mup_eq_pane_t3_ParamLimits

0x383b,	// (0x00045d6d) main_mup_eq_pane_t3

0x3859,	// (0x00045d8b) main_mup_eq_pane_t4_ParamLimits

0x3859,	// (0x00045d8b) main_mup_eq_pane_t4

0x3877,	// (0x00045da9) main_mup_eq_pane_t5_ParamLimits

0x3877,	// (0x00045da9) main_mup_eq_pane_t5

0x3895,	// (0x00045dc7) main_mup_eq_pane_t6_ParamLimits

0x3895,	// (0x00045dc7) main_mup_eq_pane_t6

0x38ab,	// (0x00045ddd) main_mup_eq_pane_t7_ParamLimits

0x38ab,	// (0x00045ddd) main_mup_eq_pane_t7

0x38c1,	// (0x00045df3) main_mup_eq_pane_t8_ParamLimits

0x38c1,	// (0x00045df3) main_mup_eq_pane_t8

0x38d7,	// (0x00045e09) main_mup_eq_pane_t9_ParamLimits

0x38d7,	// (0x00045e09) main_mup_eq_pane_t9

0x38f3,	// (0x00045e25) main_mup_eq_pane_t10_ParamLimits

0x38f3,	// (0x00045e25) main_mup_eq_pane_t10

0x0009,

0xf479,	// (0x000519ab) main_mup_eq_pane_t_ParamLimits

0xf479,	// (0x000519ab) main_mup_eq_pane_t

0x39c8,	// (0x00045efa) mup_equalizer_pane_cp5_ParamLimits

0x39e0,	// (0x00045f12) mup_equalizer_pane_cp6_ParamLimits

0x39f8,	// (0x00045f2a) mup_equalizer_pane_cp7_ParamLimits

0xa67e,	// (0x0004cbb0) main_gallery_pane

0xe4e9,	// (0x00050a1b) smil2_volume_pane

0xe4f1,	// (0x00050a23) smil_status_volume_pane_g1_ParamLimits

0xe504,	// (0x00050a36) smil_status_volume_pane_g2_ParamLimits

0xab41,	// (0x0004d073) smil_status_volume_pane_g3_ParamLimits

0xf55c,	// (0x00051a8e) smil_status_volume_pane_g_ParamLimits

0xe66d,	// (0x00050b9f) bg_popup_window_pane_cp07_ParamLimits

0xe67b,	// (0x00050bad) blid_firmament_pane

0x5087,	// (0x000475b9) aid_size_cell_gallery_ParamLimits

0x5087,	// (0x000475b9) aid_size_cell_gallery

0x509d,	// (0x000475cf) grid_gallery_pane_ParamLimits

0x509d,	// (0x000475cf) grid_gallery_pane

0x50b8,	// (0x000475ea) cell_gallery_pane_ParamLimits

0x50b8,	// (0x000475ea) cell_gallery_pane

0xe7a4,	// (0x00050cd6) bg_cell_gallery_focus_pane_ParamLimits

0xe7a4,	// (0x00050cd6) bg_cell_gallery_focus_pane

0xe7be,	// (0x00050cf0) cell_gallery_pane_g1_ParamLimits

0xe7be,	// (0x00050cf0) cell_gallery_pane_g1

0x5109,	// (0x0004763b) cell_gallery_pane_g2_ParamLimits

0x5109,	// (0x0004763b) cell_gallery_pane_g2

0x5116,	// (0x00047648) cell_gallery_pane_g3_ParamLimits

0x5116,	// (0x00047648) cell_gallery_pane_g3

0xe7ca,	// (0x00050cfc) cell_gallery_pane_g4_ParamLimits

0xe7ca,	// (0x00050cfc) cell_gallery_pane_g4

0x0003,

0xf603,	// (0x00051b35) cell_gallery_pane_g_ParamLimits

0xf603,	// (0x00051b35) cell_gallery_pane_g

0xe7d6,	// (0x00050d08) bg_cell_gallery_focus_pane_g1

0xe7de,	// (0x00050d10) bg_cell_gallery_focus_pane_g2

0xe7e6,	// (0x00050d18) bg_cell_gallery_focus_pane_g3

0xe7ee,	// (0x00050d20) bg_cell_gallery_focus_pane_g4

0xe7f6,	// (0x00050d28) bg_cell_gallery_focus_pane_g5

0xe7fe,	// (0x00050d30) bg_cell_gallery_focus_pane_g6

0xe806,	// (0x00050d38) bg_cell_gallery_focus_pane_g7

0xe80e,	// (0x00050d40) bg_cell_gallery_focus_pane_g8

0x0007,

0x025d,	// (0x0004278f) bg_cell_gallery_focus_pane_g

0xe816,	// (0x00050d48) aid_firma_cardinal

0xe82a,	// (0x00050d5c) blid_firmament_pane_t1

0xe841,	// (0x00050d73) blid_firmament_pane_t2

0xe858,	// (0x00050d8a) blid_firmament_pane_t3

0xe86f,	// (0x00050da1) blid_firmament_pane_t4

0x0003,

0x026e,	// (0x000427a0) blid_firmament_pane_t

0xe886,	// (0x00050db8) blid_sat_info_pane

0xe896,	// (0x00050dc8) blid_sat_info_pane_g1

0xe896,	// (0x00050dc8) blid_sat_info_pane_g2

0x0001,

0x0277,	// (0x000427a9) blid_sat_info_pane_g

0xe8a0,	// (0x00050dd2) blid_sat_info_pane_t1

0xe8ae,	// (0x00050de0) smil2_volume_content_pane

0xe8b7,	// (0x00050de9) smil2_volume_pane_g1

0xe8bf,	// (0x00050df1) smil2_volume_content_pane_g1

0xe8c8,	// (0x00050dfa) smil2_volume_content_pane_g2

0xe8d1,	// (0x00050e03) smil2_volume_content_pane_g3

0xe8da,	// (0x00050e0c) smil2_volume_content_pane_g4

0xe8e3,	// (0x00050e15) smil2_volume_content_pane_g5

0xe8ec,	// (0x00050e1e) smil2_volume_content_pane_g6

0xe8f5,	// (0x00050e27) smil2_volume_content_pane_g7

0xe8fe,	// (0x00050e30) smil2_volume_content_pane_g8

0xe907,	// (0x00050e39) smil2_volume_content_pane_g9

0xe910,	// (0x00050e42) smil2_volume_content_pane_g10

0x0009,

0x027c,	// (0x000427ae) smil2_volume_content_pane_g

0x1e8a,	// (0x000443bc) cale_week_day_heading_pane_t1_ParamLimits

0x1e9e,	// (0x000443d0) cale_week_day_heading_pane_t2_ParamLimits

0x1eb2,	// (0x000443e4) cale_week_day_heading_pane_t3_ParamLimits

0x1ec6,	// (0x000443f8) cale_week_day_heading_pane_t4_ParamLimits

0x1eda,	// (0x0004440c) cale_week_day_heading_pane_t5_ParamLimits

0x1eee,	// (0x00044420) cale_week_day_heading_pane_t6_ParamLimits

0x1f02,	// (0x00044434) cale_week_day_heading_pane_t7_ParamLimits

0xf1f1,	// (0x00051723) cale_week_day_heading_pane_t_ParamLimits

0xc6e2,	// (0x0004ec14) bg_cale_side_pane_ParamLimits

0x1f16,	// (0x00044448) cale_week_time_pane_t1_ParamLimits

0x1f2e,	// (0x00044460) cale_week_time_pane_t2_ParamLimits

0x1f46,	// (0x00044478) cale_week_time_pane_t3_ParamLimits

0x1f5e,	// (0x00044490) cale_week_time_pane_t4_ParamLimits

0x1f76,	// (0x000444a8) cale_week_time_pane_t5_ParamLimits

0x1f8e,	// (0x000444c0) cale_week_time_pane_t6_ParamLimits

0x1fa6,	// (0x000444d8) cale_week_time_pane_t7_ParamLimits

0x1fc2,	// (0x000444f4) cale_week_time_pane_t8_ParamLimits

0xf200,	// (0x00051732) cale_week_time_pane_t_ParamLimits

0x1fe2,	// (0x00044514) cell_cale_week_pane_g2_ParamLimits

0xc6e2,	// (0x0004ec14) bg_cale_side_pane_cp01_ParamLimits

0x2eb3,	// (0x000453e5) cale_month_week_pane_t1_ParamLimits

0x2eca,	// (0x000453fc) cale_month_week_pane_t2_ParamLimits

0x2ee1,	// (0x00045413) cale_month_week_pane_t3_ParamLimits

0x2ef8,	// (0x0004542a) cale_month_week_pane_t4_ParamLimits

0x2f0f,	// (0x00045441) cale_month_week_pane_t5_ParamLimits

0x2f26,	// (0x00045458) cale_month_week_pane_t6_ParamLimits

0xf2d9,	// (0x0005180b) cale_month_week_pane_t_ParamLimits

0xa9d9,	// (0x0004cf0b) cell_cale_month_pane_g1_ParamLimits

0xa67e,	// (0x0004cbb0) main_cale_event_viewer_pane

0xa67e,	// (0x0004cbb0) listscroll_cale_event_viewer_pane

0xe919,	// (0x00050e4b) list_cale_ev_pane

0xe921,	// (0x00050e53) scroll_pane_cp023

0x5123,	// (0x00047655) field_cale_ev_pane_ParamLimits

0x5123,	// (0x00047655) field_cale_ev_pane

0xe92d,	// (0x00050e5f) field_cale_ev_content_pane_ParamLimits

0xe92d,	// (0x00050e5f) field_cale_ev_content_pane

0xe939,	// (0x00050e6b) field_cale_ev_pane_g1_ParamLimits

0xe939,	// (0x00050e6b) field_cale_ev_pane_g1

0xe945,	// (0x00050e77) field_cale_ev_pane_g2_ParamLimits

0xe945,	// (0x00050e77) field_cale_ev_pane_g2

0xe95d,	// (0x00050e8f) field_cale_ev_pane_g3_ParamLimits

0xe95d,	// (0x00050e8f) field_cale_ev_pane_g3

0x0002,

0x0291,	// (0x000427c3) field_cale_ev_pane_g_ParamLimits

0x0291,	// (0x000427c3) field_cale_ev_pane_g

0xe975,	// (0x00050ea7) field_cale_ev_pane_t1_ParamLimits

0xe975,	// (0x00050ea7) field_cale_ev_pane_t1

0x5147,	// (0x00047679) field_cale_ev_content_pane_t1_ParamLimits

0x5147,	// (0x00047679) field_cale_ev_content_pane_t1

0xd14f,	// (0x0004f681) bg_button_pane_cp01

0xc590,	// (0x0004eac2) listscroll_cale_week_pane_ParamLimits

0x1c74,	// (0x000441a6) popup_toolbar_window_cp01

0xc6d0,	// (0x0004ec02) listscroll_cale_week_pane_t1_ParamLimits

0xc590,	// (0x0004eac2) listscroll_cale_day_pane_ParamLimits

0x307a,	// (0x000455ac) popup_toolbar_window_cp02

0xc6d0,	// (0x0004ec02) listscroll_cale_day_pane_t1_ParamLimits

0xc590,	// (0x0004eac2) main_cale_month_pane_ParamLimits

0x46ab,	// (0x00046bdd) popup_toolbar_window_cp03_ParamLimits

0x46ab,	// (0x00046bdd) popup_toolbar_window_cp03

0x3cce,	// (0x00046200) main_image_pane_g2_ParamLimits

0x3cce,	// (0x00046200) main_image_pane_g2

0x3cdf,	// (0x00046211) main_image_pane_g3_ParamLimits

0x3cdf,	// (0x00046211) main_image_pane_g3

0x0002,

0xf501,	// (0x00051a33) main_image_pane_g_ParamLimits

0xf501,	// (0x00051a33) main_image_pane_g

0xd269,	// (0x0004f79b) main_image_pane_t1_ParamLimits

0x3cf0,	// (0x00046222) main_image_pane_t2_ParamLimits

0x3cf0,	// (0x00046222) main_image_pane_t2

0x3d02,	// (0x00046234) main_image_pane_t3_ParamLimits

0x3d02,	// (0x00046234) main_image_pane_t3

0x3d2a,	// (0x0004625c) main_image_pane_t4_ParamLimits

0x3d2a,	// (0x0004625c) main_image_pane_t4

0x0003,

0xf508,	// (0x00051a3a) main_image_pane_t_ParamLimits

0xf508,	// (0x00051a3a) main_image_pane_t

0x3d4a,	// (0x0004627c) popup_image_details_window_cp01

0x3d54,	// (0x00046286) popup_toobar_trans_pane_cp01_ParamLimits

0x3d54,	// (0x00046286) popup_toobar_trans_pane_cp01

0x451e,	// (0x00046a50) popup_image_details_window_ParamLimits

0x451e,	// (0x00046a50) popup_image_details_window

0xe435,	// (0x00050967) popup_image_focus_window

0x4961,	// (0x00046e93) camera2_autofocus_pane_ParamLimits

0x4961,	// (0x00046e93) camera2_autofocus_pane

0xa67e,	// (0x0004cbb0) bg_popup_sub_pane_cp06

0xe98c,	// (0x00050ebe) popup_image_focus_window_g1

0xe994,	// (0x00050ec6) popup_image_focus_window_g2

0xe99c,	// (0x00050ece) popup_image_focus_window_g3

0xe9a4,	// (0x00050ed6) popup_image_focus_window_g4

0x0003,

0x0298,	// (0x000427ca) popup_image_focus_window_g

0xe9ac,	// (0x00050ede) popup_image_focus_window_t1

0xe9ba,	// (0x00050eec) popup_image_focus_window_t2

0xe9ca,	// (0x00050efc) popup_image_focus_window_t3

0x0002,

0x02a1,	// (0x000427d3) popup_image_focus_window_t

0xe9d8,	// (0x00050f0a) camera2_autofocus_pane_g1

0xa6f7,	// (0x0004cc29) bg_tb_trans_pane_cp01

0xe9e6,	// (0x00050f18) popup_image_details_window_g1

0xe9f9,	// (0x00050f2b) popup_image_details_window_g2

0x0002,

0x02b3,	// (0x000427e5) popup_image_details_window_g

0xea22,	// (0x00050f54) popup_image_details_window_t1

0xea34,	// (0x00050f66) popup_image_details_window_t2

0xea4d,	// (0x00050f7f) popup_image_details_window_t3

0xea61,	// (0x00050f93) popup_image_details_window_t4

0xea7c,	// (0x00050fae) popup_image_details_window_t5

0x0004,

0x02ba,	// (0x000427ec) popup_image_details_window_t

0xc57c,	// (0x0004eaae) bg_calc_paper_pane_ParamLimits

0xa67e,	// (0x0004cbb0) grid_highlight_pane_cp013

0xa7e9,	// (0x0004cd1b) list_calc_pane_ParamLimits

0xa7fb,	// (0x0004cd2d) scroll_pane_cp024

0xc590,	// (0x0004eac2) bg_calc_display_pane_ParamLimits

0x1abc,	// (0x00043fee) calc_display_pane_t1_ParamLimits

0x1ace,	// (0x00044000) calc_display_pane_t2_ParamLimits

0xa803,	// (0x0004cd35) calc_display_pane_t3_ParamLimits

0xf173,	// (0x000516a5) calc_display_pane_t_ParamLimits

0x1b91,	// (0x000440c3) cell_calc_pane_g2

0x0001,

0xf190,	// (0x000516c2) cell_calc_pane_g

0x1b9a,	// (0x000440cc) cell_calc_pane_t1

0xc5ef,	// (0x0004eb21) grid_highlight_pane_cp02_ParamLimits

0xc605,	// (0x0004eb37) toolbar_button_pane_cp01_ParamLimits

0xc605,	// (0x0004eb37) toolbar_button_pane_cp01

0xd2ae,	// (0x0004f7e0) temp_image_control_pane_ParamLimits

0xd2ae,	// (0x0004f7e0) temp_image_control_pane

0xa6f7,	// (0x0004cc29) main_mp3_pane

0xea96,	// (0x00050fc8) temp_image_control_pane_g1_ParamLimits

0xea96,	// (0x00050fc8) temp_image_control_pane_g1

0xeaa4,	// (0x00050fd6) temp_image_control_pane_g2_ParamLimits

0xeaa4,	// (0x00050fd6) temp_image_control_pane_g2

0xeab6,	// (0x00050fe8) temp_image_control_pane_g3_ParamLimits

0xeab6,	// (0x00050fe8) temp_image_control_pane_g3

0x5198,	// (0x000476ca) temp_image_control_pane_g4_ParamLimits

0x5198,	// (0x000476ca) temp_image_control_pane_g4

0x0003,

0xf617,	// (0x00051b49) temp_image_control_pane_g_ParamLimits

0xf617,	// (0x00051b49) temp_image_control_pane_g

0xea96,	// (0x00050fc8) main_mp3_pane_g1

0x51ab,	// (0x000476dd) main_mp3_pane_g2

0x0007,

0xf620,	// (0x00051b52) main_mp3_pane_g

0xeaf9,	// (0x0005102b) main_mp3_pane_t1

0xc747,	// (0x0004ec79) main_camera_pane_g8_ParamLimits

0xc747,	// (0x0004ec79) main_camera_pane_g8

0x22b3,	// (0x000447e5) main_video_pane_g7_ParamLimits

0x22b3,	// (0x000447e5) main_video_pane_g7

0xab7c,	// (0x0004d0ae) main_camera2_pane_t7_ParamLimits

0xab7c,	// (0x0004d0ae) main_camera2_pane_t7

0xc891,	// (0x0004edc3) scroll_pane_cp025_ParamLimits

0xc891,	// (0x0004edc3) scroll_pane_cp025

0xc8a5,	// (0x0004edd7) scroll_pane_cp026_ParamLimits

0xc8a5,	// (0x0004edd7) scroll_pane_cp026

0xc8b4,	// (0x0004ede6) wml_content_pane_ParamLimits

0xa67e,	// (0x0004cbb0) main_touch_calib_pane

0x5273,	// (0x000477a5) main_touch_calib_pane_g1

0x527f,	// (0x000477b1) main_touch_calib_pane_g2

0x528b,	// (0x000477bd) main_touch_calib_pane_g3

0x5297,	// (0x000477c9) main_touch_calib_pane_g4

0x0003,

0xf63e,	// (0x00051b70) main_touch_calib_pane_g

0x52a3,	// (0x000477d5) main_touch_calib_pane_t1

0x52bd,	// (0x000477ef) main_touch_calib_pane_t2

0x0004,

0xf647,	// (0x00051b79) main_touch_calib_pane_t

0xcf25,	// (0x0004f457) mup_progress_pane_cp02

0xcf44,	// (0x0004f476) navi_pane_g1

0xcfa6,	// (0x0004f4d8) navi_pane_mp_t3

0xa6f7,	// (0x0004cc29) main_mp3_pane_ParamLimits

0x46ed,	// (0x00046c1f) navi_pane_ParamLimits

0xea96,	// (0x00050fc8) main_mp3_pane_g1_ParamLimits

0x51ab,	// (0x000476dd) main_mp3_pane_g2_ParamLimits

0x51b7,	// (0x000476e9) main_mp3_pane_g3_ParamLimits

0x51b7,	// (0x000476e9) main_mp3_pane_g3

0x51c5,	// (0x000476f7) main_mp3_pane_g4_ParamLimits

0x51c5,	// (0x000476f7) main_mp3_pane_g4

0xeac6,	// (0x00050ff8) main_mp3_pane_g5_ParamLimits

0xeac6,	// (0x00050ff8) main_mp3_pane_g5

0xead4,	// (0x00051006) main_mp3_pane_g6_ParamLimits

0xead4,	// (0x00051006) main_mp3_pane_g6

0xeae1,	// (0x00051013) main_mp3_pane_g7_ParamLimits

0xeae1,	// (0x00051013) main_mp3_pane_g7

0xeaed,	// (0x0005101f) main_mp3_pane_g8_ParamLimits

0xeaed,	// (0x0005101f) main_mp3_pane_g8

0xf620,	// (0x00051b52) main_mp3_pane_g_ParamLimits

0x51d1,	// (0x00047703) main_mp3_pane_t2

0x51df,	// (0x00047711) main_mp3_pane_t3

0xeb07,	// (0x00051039) main_mp3_pane_t4

0xeb15,	// (0x00051047) main_mp3_pane_t5

0x0005,

0xf631,	// (0x00051b63) main_mp3_pane_t

0xeb23,	// (0x00051055) mup_progress_pane_cp01

0xa6ac,	// (0x0004cbde) aid_zoom_text_secondary2

0xe919,	// (0x00050e4b) list_cale_ev2_pane

0xe921,	// (0x00050e53) scroll_pane_cp023_ParamLimits

0x5315,	// (0x00047847) field_cale_ev2_pane_ParamLimits

0x5315,	// (0x00047847) field_cale_ev2_pane

0xabfb,	// (0x0004d12d) field_cale_ev2_pane_g1_ParamLimits

0xabfb,	// (0x0004d12d) field_cale_ev2_pane_g1

0xac07,	// (0x0004d139) field_cale_ev2_pane_g2_ParamLimits

0xac07,	// (0x0004d139) field_cale_ev2_pane_g2

0xac1f,	// (0x0004d151) field_cale_ev2_pane_g3_ParamLimits

0xac1f,	// (0x0004d151) field_cale_ev2_pane_g3

0x0003,

0xf652,	// (0x00051b84) field_cale_ev2_pane_g_ParamLimits

0xf652,	// (0x00051b84) field_cale_ev2_pane_g

0xac43,	// (0x0004d175) field_cale_ev2_pane_t1_ParamLimits

0xac43,	// (0x0004d175) field_cale_ev2_pane_t1

0xac5a,	// (0x0004d18c) field_cale_ev2_pane_t2_ParamLimits

0xac5a,	// (0x0004d18c) field_cale_ev2_pane_t2

0x0001,

0xf65b,	// (0x00051b8d) field_cale_ev2_pane_t_ParamLimits

0xf65b,	// (0x00051b8d) field_cale_ev2_pane_t

0x3b69,	// (0x0004609b) main_postcard_pane_g5_ParamLimits

0x3b69,	// (0x0004609b) main_postcard_pane_g5

0x3b7f,	// (0x000460b1) main_postcard_pane_g6_ParamLimits

0x3b7f,	// (0x000460b1) main_postcard_pane_g6

0x205f,	// (0x00044591) camera2_autofocus_pane_cp_ParamLimits

0x205f,	// (0x00044591) camera2_autofocus_pane_cp

0xa6f7,	// (0x0004cc29) main_mup3_pane

0x5359,	// (0x0004788b) main_mup3_pane_g1_ParamLimits

0x5359,	// (0x0004788b) main_mup3_pane_g1

0x537b,	// (0x000478ad) main_mup3_pane_g2_ParamLimits

0x537b,	// (0x000478ad) main_mup3_pane_g2

0x53fe,	// (0x00047930) main_mup3_pane_g3_ParamLimits

0x53fe,	// (0x00047930) main_mup3_pane_g3

0x5442,	// (0x00047974) main_mup3_pane_g4_ParamLimits

0x5442,	// (0x00047974) main_mup3_pane_g4

0x5486,	// (0x000479b8) main_mup3_pane_g5_ParamLimits

0x5486,	// (0x000479b8) main_mup3_pane_g5

0x54ca,	// (0x000479fc) main_mup3_pane_g6_ParamLimits

0x54ca,	// (0x000479fc) main_mup3_pane_g6

0xeb2b,	// (0x0005105d) main_mup3_pane_g7_ParamLimits

0xeb2b,	// (0x0005105d) main_mup3_pane_g7

0x0007,

0xf66b,	// (0x00051b9d) main_mup3_pane_g_ParamLimits

0xf66b,	// (0x00051b9d) main_mup3_pane_g

0x5546,	// (0x00047a78) main_mup3_pane_t1_ParamLimits

0x5546,	// (0x00047a78) main_mup3_pane_t1

0x55c0,	// (0x00047af2) main_mup3_pane_t2_ParamLimits

0x55c0,	// (0x00047af2) main_mup3_pane_t2

0x569a,	// (0x00047bcc) main_mup3_pane_t4_ParamLimits

0x569a,	// (0x00047bcc) main_mup3_pane_t4

0x56f8,	// (0x00047c2a) main_mup3_pane_t5_ParamLimits

0x56f8,	// (0x00047c2a) main_mup3_pane_t5

0x57b0,	// (0x00047ce2) main_mup3_pane_t6_ParamLimits

0x57b0,	// (0x00047ce2) main_mup3_pane_t6

0x0005,

0xf67c,	// (0x00051bae) main_mup3_pane_t_ParamLimits

0xf67c,	// (0x00051bae) main_mup3_pane_t

0x5866,	// (0x00047d98) mup3_progress_pane_ParamLimits

0x5866,	// (0x00047d98) mup3_progress_pane

0x58ea,	// (0x00047e1c) popup_mup3_control_window_ParamLimits

0x58ea,	// (0x00047e1c) popup_mup3_control_window

0xeb39,	// (0x0005106b) popup_mup3_text_window

0x5920,	// (0x00047e52) mup3_progress_pane_t1

0x5937,	// (0x00047e69) mup3_progress_pane_t2

0xeb41,	// (0x00051073) mup3_progress_pane_t3

0x0002,

0xf689,	// (0x00051bbb) mup3_progress_pane_t

0xeb58,	// (0x0005108a) mup_progress_pane_cp03

0xa67e,	// (0x0004cbb0) bg_tb_trans_pane_cp04

0x594e,	// (0x00047e80) mup3_volume_pane

0x5956,	// (0x00047e88) popup_mup3_control_window_g1

0x595f,	// (0x00047e91) mup3_volume_pane_g1

0x5968,	// (0x00047e9a) mup3_volume_pane_g2

0x5971,	// (0x00047ea3) mup3_volume_pane_g3

0x0002,

0xf690,	// (0x00051bc2) mup3_volume_pane_g

0xa67e,	// (0x0004cbb0) bg_tb_trans_pane_cp03

0xeb68,	// (0x0005109a) popup_mup3_text_window_g1

0xeb70,	// (0x000510a2) popup_mup3_text_window_t1

0xc5d8,	// (0x0004eb0a) list_calc_item_pane_g1_ParamLimits

0xe5db,	// (0x00050b0d) mup_volume_pane_cp_g1

0x52d7,	// (0x00047809) main_touch_calib_pane_t3

0x52eb,	// (0x0004781d) main_touch_calib_pane_t4

0x52ff,	// (0x00047831) main_touch_calib_pane_t5

0xa688,	// (0x0004cbba) aid_cell_size_toolbar2

0xa690,	// (0x0004cbc2) aid_popup3_width_pane

0xa69c,	// (0x0004cbce) aid_zoom_text_msg_primary

0xa8db,	// (0x0004ce0d) vorec_t7

0xc59c,	// (0x0004eace) bg_calc_paper_pane_g1_ParamLimits

0xc5a8,	// (0x0004eada) bg_calc_paper_pane_g2_ParamLimits

0xc5b4,	// (0x0004eae6) bg_calc_paper_pane_g3_ParamLimits

0xc5c0,	// (0x0004eaf2) bg_calc_paper_pane_g4_ParamLimits

0xc5cc,	// (0x0004eafe) bg_calc_paper_pane_g5_ParamLimits

0x1b1b,	// (0x0004404d) bg_calc_paper_pane_g6_ParamLimits

0x1b2e,	// (0x00044060) bg_calc_paper_pane_g7_ParamLimits

0x1b41,	// (0x00044073) bg_calc_paper_pane_g8_ParamLimits

0xf17a,	// (0x000516ac) bg_calc_paper_pane_g_ParamLimits

0x1b52,	// (0x00044084) calc_bg_paper_pane_g9_ParamLimits

0x21c1,	// (0x000446f3) image_qvga_pane_ParamLimits

0x21c1,	// (0x000446f3) image_qvga_pane

0xc4c5,	// (0x0004e9f7) bg_popup_sub_pane_cp04_ParamLimits

0xd1e5,	// (0x0004f717) popup_mup_playback_window_g1_ParamLimits

0xd1f1,	// (0x0004f723) popup_mup_playback_window_t1_ParamLimits

0xd206,	// (0x0004f738) popup_mup_playback_window_t2_ParamLimits

0x007d,	// (0x000425af) popup_mup_playback_window_t_ParamLimits

0x4de5,	// (0x00047317) main_mup2_pane_g3_ParamLimits

0x4de5,	// (0x00047317) main_mup2_pane_g3

0x24b7,	// (0x000449e9) popup_toolbar_window_cp04

0xd60d,	// (0x0004fb3f) popup_call2_audio_second_window_g3_ParamLimits

0xd60d,	// (0x0004fb3f) popup_call2_audio_second_window_g3

0xda2f,	// (0x0004ff61) popup_call2_audio_first_window_g4_ParamLimits

0xda2f,	// (0x0004ff61) popup_call2_audio_first_window_g4

0xe0ae,	// (0x000505e0) popup_call2_audio_in_window_g4_ParamLimits

0xe0ae,	// (0x000505e0) popup_call2_audio_in_window_g4

0x3cb0,	// (0x000461e2) aid_area_sk_bg_cut_ParamLimits

0x3cb0,	// (0x000461e2) aid_area_sk_bg_cut

0xd21b,	// (0x0004f74d) aid_area_sk_bg_cut_2_ParamLimits

0xd21b,	// (0x0004f74d) aid_area_sk_bg_cut_2

0x50f9,	// (0x0004762b) aid_placing_details_win

0x5101,	// (0x00047633) aid_placing_details_win_2

0xe9d8,	// (0x00050f0a) camera2_autofocus_pane_g1_ParamLimits

0x171c,	// (0x00043c4e) popup_fixed_preview_cale_window_ParamLimits

0x171c,	// (0x00043c4e) popup_fixed_preview_cale_window

0xcff5,	// (0x0004f527) navi_slider_pane_g3

0xcffe,	// (0x0004f530) navi_slider_pane_g4

0xd007,	// (0x0004f539) navi_slider_pane_g5

0xcff5,	// (0x0004f527) navi_slider_pane_g6

0xaaf6,	// (0x0004d028) navi_slider_pane_g7

0xd11c,	// (0x0004f64e) mup_scale_pane_g3

0xd125,	// (0x0004f657) mup_scale_pane_g4

0xd12e,	// (0x0004f660) mup_scale_pane_g5

0x3a10,	// (0x00045f42) mup_scale_pane_g6

0x3a19,	// (0x00045f4b) mup_scale_pane_g7

0xcff5,	// (0x0004f527) cams2_slider_pane_g3

0xe65d,	// (0x00050b8f) cams2_slider_pane_g4

0xabea,	// (0x0004d11c) cams2_slider_pane_g5

0xcff5,	// (0x0004f527) cams2_slider_pane_g6

0xabf2,	// (0x0004d124) cams2_slider_pane_g7

0xe896,	// (0x00050dc8) camera2_autofocus_pane_cp_g1

0xeb7e,	// (0x000510b0) bg_popup_preview_window_pane_cp02_ParamLimits

0xeb7e,	// (0x000510b0) bg_popup_preview_window_pane_cp02

0xeb8a,	// (0x000510bc) list_fp_cale_pane_ParamLimits

0xeb8a,	// (0x000510bc) list_fp_cale_pane

0xeb96,	// (0x000510c8) popup_fixed_preview_cale_window_t1_ParamLimits

0xeb96,	// (0x000510c8) popup_fixed_preview_cale_window_t1

0x597a,	// (0x00047eac) popup_fixed_preview_cale_window_t2_ParamLimits

0x597a,	// (0x00047eac) popup_fixed_preview_cale_window_t2

0x598f,	// (0x00047ec1) popup_fixed_preview_cale_window_t3_ParamLimits

0x598f,	// (0x00047ec1) popup_fixed_preview_cale_window_t3

0x0002,

0xf697,	// (0x00051bc9) popup_fixed_preview_cale_window_t_ParamLimits

0xf697,	// (0x00051bc9) popup_fixed_preview_cale_window_t

0xd8df,	// (0x0004fe11) list_single_fp_cale_pane_ParamLimits

0xd8df,	// (0x0004fe11) list_single_fp_cale_pane

0xebb4,	// (0x000510e6) list_single_fp_cale_pane_g1_ParamLimits

0xebb4,	// (0x000510e6) list_single_fp_cale_pane_g1

0xebc0,	// (0x000510f2) list_single_fp_cale_pane_g2_ParamLimits

0xebc0,	// (0x000510f2) list_single_fp_cale_pane_g2

0x0002,

0x034c,	// (0x0004287e) list_single_fp_cale_pane_g_ParamLimits

0x034c,	// (0x0004287e) list_single_fp_cale_pane_g

0xebd9,	// (0x0005110b) list_single_fp_cale_pane_t1_ParamLimits

0xebd9,	// (0x0005110b) list_single_fp_cale_pane_t1

0xebeb,	// (0x0005111d) list_single_fp_cale_pane_t2_ParamLimits

0xebeb,	// (0x0005111d) list_single_fp_cale_pane_t2

0x0001,

0x0353,	// (0x00042885) list_single_fp_cale_pane_t_ParamLimits

0x0353,	// (0x00042885) list_single_fp_cale_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0xa67e,	// (0x0004cbb0) main_dialer_pane

0x59a6,	// (0x00047ed8) aid_cell_size_keypad

0x59b0,	// (0x00047ee2) dialer_ne_pane

0x59ba,	// (0x00047eec) grid_dialer_command_1_pane

0x59c2,	// (0x00047ef4) grid_dialer_command_2_pane

0x59ca,	// (0x00047efc) grid_dialer_keypad_pane

0x59de,	// (0x00047f10) bg_popup_call_pane_cp06_ParamLimits

0x59de,	// (0x00047f10) bg_popup_call_pane_cp06

0x59ea,	// (0x00047f1c) dialer_ne_clear_pane_ParamLimits

0x59ea,	// (0x00047f1c) dialer_ne_clear_pane

0xec1e,	// (0x00051150) dialer_ne_pane_g1

0xec26,	// (0x00051158) dialer_ne_pane_t1_ParamLimits

0xec26,	// (0x00051158) dialer_ne_pane_t1

0x59f6,	// (0x00047f28) dialer_ne_pane_t2_ParamLimits

0x59f6,	// (0x00047f28) dialer_ne_pane_t2

0x5a20,	// (0x00047f52) dialer_ne_pane_t3_ParamLimits

0x5a20,	// (0x00047f52) dialer_ne_pane_t3

0x0002,

0xf69e,	// (0x00051bd0) dialer_ne_pane_t_ParamLimits

0xf69e,	// (0x00051bd0) dialer_ne_pane_t

0x5a50,	// (0x00047f82) dialer_ne_pane_t3_copy1_ParamLimits

0x5a50,	// (0x00047f82) dialer_ne_pane_t3_copy1

0x5a7f,	// (0x00047fb1) cell_dialer_keypad_pane_ParamLimits

0x5a7f,	// (0x00047fb1) cell_dialer_keypad_pane

0x5a96,	// (0x00047fc8) cell_dialer_command_1_pane_ParamLimits

0x5a96,	// (0x00047fc8) cell_dialer_command_1_pane

0x5aac,	// (0x00047fde) cell_dialer_command_2_pane_ParamLimits

0x5aac,	// (0x00047fde) cell_dialer_command_2_pane

0xec38,	// (0x0005116a) bg_button_pane_cp02_ParamLimits

0xec38,	// (0x0005116a) bg_button_pane_cp02

0x5abb,	// (0x00047fed) cell_dialer_keypad_pane_g1_ParamLimits

0x5abb,	// (0x00047fed) cell_dialer_keypad_pane_g1

0xec38,	// (0x0005116a) bg_button_pane_cp03_ParamLimits

0xec38,	// (0x0005116a) bg_button_pane_cp03

0x5ad0,	// (0x00048002) cell_dialer_command_1_pane_g1_ParamLimits

0x5ad0,	// (0x00048002) cell_dialer_command_1_pane_g1

0xec44,	// (0x00051176) bg_button_pane_cp04

0x5ae4,	// (0x00048016) cell_dialer_command_2_pane_g1

0xcfe4,	// (0x0004f516) bg_button_pane_cp06

0xec4c,	// (0x0005117e) dialer_ne_clear_pane_g1

0x34f2,	// (0x00045a24) navi_pane_g2

0x3520,	// (0x00045a52) navi_pane_g3

0x0002,

0xf409,	// (0x0005193b) navi_pane_g

0x354b,	// (0x00045a7d) navi_pane_mv_g2

0x3572,	// (0x00045aa4) navi_pane_mv_g5

0x357a,	// (0x00045aac) navi_pane_mv_t1

0xc590,	// (0x0004eac2) main_clock2_pane

0x5b21,	// (0x00048053) main_clock2_list_pane_ParamLimits

0x5b21,	// (0x00048053) main_clock2_list_pane

0x5b59,	// (0x0004808b) main_clock2_pane_t1_ParamLimits

0x5b59,	// (0x0004808b) main_clock2_pane_t1

0x5b95,	// (0x000480c7) main_clock2_pane_t2_ParamLimits

0x5b95,	// (0x000480c7) main_clock2_pane_t2

0x0004,

0xf6a5,	// (0x00051bd7) main_clock2_pane_t_ParamLimits

0xf6a5,	// (0x00051bd7) main_clock2_pane_t

0x5c21,	// (0x00048153) popup_clock_analogue_window_cp03_ParamLimits

0x5c21,	// (0x00048153) popup_clock_analogue_window_cp03

0x5c48,	// (0x0004817a) popup_clock_digital_window_cp02_ParamLimits

0x5c48,	// (0x0004817a) popup_clock_digital_window_cp02

0x5cc1,	// (0x000481f3) main_clock2_list_single_pane_ParamLimits

0x5cc1,	// (0x000481f3) main_clock2_list_single_pane

0xcfe4,	// (0x0004f516) list_highlight_pane_cp05

0xec54,	// (0x00051186) main_clock2_list_single_pane_t1

0x24b7,	// (0x000449e9) popup_toolbar_window_cp04_ParamLimits

0x5168,	// (0x0004769a) camera2_autofocus_pane_g2_ParamLimits

0x5168,	// (0x0004769a) camera2_autofocus_pane_g2

0x5174,	// (0x000476a6) camera2_autofocus_pane_g3_ParamLimits

0x5174,	// (0x000476a6) camera2_autofocus_pane_g3

0x5180,	// (0x000476b2) camera2_autofocus_pane_g4_ParamLimits

0x5180,	// (0x000476b2) camera2_autofocus_pane_g4

0x518c,	// (0x000476be) camera2_autofocus_pane_g5_ParamLimits

0x518c,	// (0x000476be) camera2_autofocus_pane_g5

0x0004,

0xf60c,	// (0x00051b3e) camera2_autofocus_pane_g_ParamLimits

0xf60c,	// (0x00051b3e) camera2_autofocus_pane_g

0x5339,	// (0x0004786b) camera2_autofocus_pane_cp_g2

0x5341,	// (0x00047873) camera2_autofocus_pane_cp_g3

0x5349,	// (0x0004787b) camera2_autofocus_pane_cp_g4

0x5351,	// (0x00047883) camera2_autofocus_pane_cp_g5

0x0004,

0xf660,	// (0x00051b92) camera2_autofocus_pane_cp_g

0x59d6,	// (0x00047f08) popup_dialer_spcha_window

0xa67e,	// (0x0004cbb0) bg_popup_sub_pane_cp07

0xec62,	// (0x00051194) list_spcha_pane

0xec6a,	// (0x0005119c) list_single_spcha_pane_ParamLimits

0xec6a,	// (0x0005119c) list_single_spcha_pane

0xa67e,	// (0x0004cbb0) list_highlight_pane_cp06

0xec7b,	// (0x000511ad) list_single_spcha_pane_t1

0xde58,	// (0x0005038a) popup_call2_audio_out_window_g4_ParamLimits

0xde58,	// (0x0005038a) popup_call2_audio_out_window_g4

0xa67e,	// (0x0004cbb0) main_imed2_pane

0xe43f,	// (0x00050971) popup_imed_adjust2_window

0x4536,	// (0x00046a68) popup_imed_trans_window_ParamLimits

0x4536,	// (0x00046a68) popup_imed_trans_window

0xe6c6,	// (0x00050bf8) popup_blid_sat_info2_window_t1

0xe6d4,	// (0x00050c06) popup_blid_sat_info2_window_t2

0x000a,

0xf5ec,	// (0x00051b1e) popup_blid_sat_info2_window_t

0x5d77,	// (0x000482a9) aid_size_cell_colour_35

0x5d97,	// (0x000482c9) aid_size_cell_colour_112

0x5db7,	// (0x000482e9) aid_size_cell_effect

0xe413,	// (0x00050945) bg_tb_trans_pane_cp02

0xcb42,	// (0x0004f074) heading_imed_pane

0x5dd7,	// (0x00048309) listscroll_imed_pane

0xec89,	// (0x000511bb) heading_imed_pane_g1

0xec91,	// (0x000511c3) heading_imed_pane_t1

0xec9f,	// (0x000511d1) grid_imed_colour_35_pane_ParamLimits

0xec9f,	// (0x000511d1) grid_imed_colour_35_pane

0x5de3,	// (0x00048315) grid_imed_effect_pane

0xecbb,	// (0x000511ed) list_imed_aspect_pane

0x5dfa,	// (0x0004832c) scroll_pane_cp027_ParamLimits

0x5dfa,	// (0x0004832c) scroll_pane_cp027

0x5e0b,	// (0x0004833d) cell_imed_effect_pane_ParamLimits

0x5e0b,	// (0x0004833d) cell_imed_effect_pane

0xecc3,	// (0x000511f5) cell_imed_colour_pane_ParamLimits

0xecc3,	// (0x000511f5) cell_imed_colour_pane

0xed0d,	// (0x0005123f) cell_imed_colour_pane_g1_ParamLimits

0xed0d,	// (0x0005123f) cell_imed_colour_pane_g1

0xed1e,	// (0x00051250) hgihlgiht_grid_pane_cp016_ParamLimits

0xed1e,	// (0x00051250) hgihlgiht_grid_pane_cp016

0x5e30,	// (0x00048362) cell_imed_effect_pane_g1

0x5e38,	// (0x0004836a) grid_highlight_pane_cp017

0xed2f,	// (0x00051261) list_imed_single_pane_ParamLimits

0xed2f,	// (0x00051261) list_imed_single_pane

0xa67e,	// (0x0004cbb0) list_highlight_pane_cp07

0xed43,	// (0x00051275) list_imed_aspect_pane_comp1_t1

0xe413,	// (0x00050945) bg_tb_trans_pane_cp05

0xed65,	// (0x00051297) popup_imed_adjust2_window_g1

0xed8c,	// (0x000512be) popup_imed_adjust2_window_t1

0xeda4,	// (0x000512d6) slider_imed_adjust_pane

0xedb8,	// (0x000512ea) slider_imed_adjust_pane_g1

0xedc8,	// (0x000512fa) slider_imed_adjust_pane_g2

0xedd8,	// (0x0005130a) slider_imed_adjust_pane_g3

0xede9,	// (0x0005131b) slider_imed_adjust_pane_g4

0x0003,

0x037c,	// (0x000428ae) slider_imed_adjust_pane_g

0x5e41,	// (0x00048373) aid_size_cell_clipart2

0x5e4d,	// (0x0004837f) grid_imed_clipart_pane

0xedfa,	// (0x0005132c) scroll_pane_cp031

0x5e57,	// (0x00048389) cell_imed_clipart_pane_ParamLimits

0x5e57,	// (0x00048389) cell_imed_clipart_pane

0x5e74,	// (0x000483a6) cell_imed_clipart_pane_g1

0xa67e,	// (0x0004cbb0) grid_highlight_pane_cp014

0x5b36,	// (0x00048068) main_clock2_pane_g1_ParamLimits

0x5b36,	// (0x00048068) main_clock2_pane_g1

0x5c68,	// (0x0004819a) aid_call2_pane_cp10

0x5c7a,	// (0x000481ac) aid_call_pane_cp10

0xcf19,	// (0x0004f44b) popup_clock_analogue_window_cp10_g1

0xcf19,	// (0x0004f44b) popup_clock_analogue_window_cp10_g2

0x5c8c,	// (0x000481be) popup_clock_analogue_window_cp10_g3

0x5c8c,	// (0x000481be) popup_clock_analogue_window_cp10_g4

0xcf19,	// (0x0004f44b) popup_clock_analogue_window_cp10_g5

0x0004,

0xf6b0,	// (0x00051be2) popup_clock_analogue_window_cp10_g

0x5ca2,	// (0x000481d4) popup_clock_analogue_window_cp10_t1

0x5cd3,	// (0x00048205) clock_digital_number_pane_cp10_ParamLimits

0x5cd3,	// (0x00048205) clock_digital_number_pane_cp10

0x5ced,	// (0x0004821f) clock_digital_number_pane_cp11_ParamLimits

0x5ced,	// (0x0004821f) clock_digital_number_pane_cp11

0x5d07,	// (0x00048239) clock_digital_number_pane_cp12_ParamLimits

0x5d07,	// (0x00048239) clock_digital_number_pane_cp12

0x5d21,	// (0x00048253) clock_digital_number_pane_cp13_ParamLimits

0x5d21,	// (0x00048253) clock_digital_number_pane_cp13

0x5d3b,	// (0x0004826d) clock_digital_separator_pane_cp10_ParamLimits

0x5d3b,	// (0x0004826d) clock_digital_separator_pane_cp10

0x5d55,	// (0x00048287) popup_clock_digital_window_cp02_t1_ParamLimits

0x5d55,	// (0x00048287) popup_clock_digital_window_cp02_t1

0xc4bd,	// (0x0004e9ef) clock_digital_number_pane_cp10_g1

0xc4bd,	// (0x0004e9ef) clock_digital_number_pane_cp10_g2

0x0001,

0x0385,	// (0x000428b7) clock_digital_number_pane_cp10_g

0xc4bd,	// (0x0004e9ef) clock_digital_separator_pane_cp10_g1

0xc4bd,	// (0x0004e9ef) clock_digital_separator_pane_g2_cp10

0xcfb4,	// (0x0004f4e6) navi_pane_vded_g4

0xcfbd,	// (0x0004f4ef) navi_pane_vded_g5

0xcfc6,	// (0x0004f4f8) navi_pane_vded_t1

0xa67e,	// (0x0004cbb0) main_vded_pane

0x5e7d,	// (0x000483af) main_vded_pane_g1

0x5e89,	// (0x000483bb) main_vded_pane_g2

0x5e95,	// (0x000483c7) main_vded_pane_g3

0x0002,

0xf6bb,	// (0x00051bed) main_vded_pane_g

0x5ea1,	// (0x000483d3) main_vded_pane_t1

0x5eaf,	// (0x000483e1) main_vded_pane_t2

0x0001,

0xf6c2,	// (0x00051bf4) main_vded_pane_t

0x5ebd,	// (0x000483ef) vded_slider_pane

0x5ec7,	// (0x000483f9) vded_video_pane

0xee02,	// (0x00051334) vded_video_pane_g1

0x5ed3,	// (0x00048405) vded_video_pane_g2

0xe896,	// (0x00050dc8) vded_video_pane_g3

0x0002,

0xf6c7,	// (0x00051bf9) vded_video_pane_g

0xee0c,	// (0x0005133e) vded_slider_pane_g1

0xe5db,	// (0x00050b0d) vded_slider_pane_g2

0xee15,	// (0x00051347) vded_slider_pane_g3

0xee1e,	// (0x00051350) vded_slider_pane_g4

0xee27,	// (0x00051359) vded_slider_pane_g5

0x0004,

0x039d,	// (0x000428cf) vded_slider_pane_g

0x58d4,	// (0x00047e06) mup3_rocker_pane_ParamLimits

0x58d4,	// (0x00047e06) mup3_rocker_pane

0x5edc,	// (0x0004840e) mup3_control_keys_pane_g1

0x5ee4,	// (0x00048416) mup3_control_keys_pane_g2

0x5eec,	// (0x0004841e) mup3_control_keys_pane_g3

0x5ef4,	// (0x00048426) mup3_control_keys_pane_g4

0x0003,

0xf6ce,	// (0x00051c00) mup3_control_keys_pane_g

0x1753,	// (0x00043c85) popup_toolbar2_fixed_window_cp01_ParamLimits

0x1753,	// (0x00043c85) popup_toolbar2_fixed_window_cp01

0x590a,	// (0x00047e3c) popup_toolbar2_fixed_window_cp02_ParamLimits

0x590a,	// (0x00047e3c) popup_toolbar2_fixed_window_cp02

0xd77f,	// (0x0004fcb1) popup_call2_audio_second_window_t4_ParamLimits

0xd77f,	// (0x0004fcb1) popup_call2_audio_second_window_t4

0xdcc5,	// (0x000501f7) popup_call2_audio_first_window_t6_ParamLimits

0xdcc5,	// (0x000501f7) popup_call2_audio_first_window_t6

0xdf5b,	// (0x0005048d) popup_call2_audio_out_window_t6_ParamLimits

0xdf5b,	// (0x0005048d) popup_call2_audio_out_window_t6

0xa67e,	// (0x0004cbb0) main_vitu_pane

0x5f04,	// (0x00048436) aid_size_cell_itu_ParamLimits

0x5f04,	// (0x00048436) aid_size_cell_itu

0xa6f7,	// (0x0004cc29) bg_popup_window_pane_cp08_ParamLimits

0xa6f7,	// (0x0004cc29) bg_popup_window_pane_cp08

0x5f1a,	// (0x0004844c) field_vitu_entry_pane_ParamLimits

0x5f1a,	// (0x0004844c) field_vitu_entry_pane

0x5f31,	// (0x00048463) grid_vitu_function_pane_ParamLimits

0x5f31,	// (0x00048463) grid_vitu_function_pane

0x5f4c,	// (0x0004847e) grid_vitu_itu_pane_ParamLimits

0x5f4c,	// (0x0004847e) grid_vitu_itu_pane

0x5f6a,	// (0x0004849c) cell_vitu_itu_pane_ParamLimits

0x5f6a,	// (0x0004849c) cell_vitu_itu_pane

0x5f90,	// (0x000484c2) cell_vitu_function_pane_ParamLimits

0x5f90,	// (0x000484c2) cell_vitu_function_pane

0xa6f7,	// (0x0004cc29) bg_popup_sub_pane_cp08_ParamLimits

0xa6f7,	// (0x0004cc29) bg_popup_sub_pane_cp08

0x5fab,	// (0x000484dd) field_vitu_entry_pane_t1_ParamLimits

0x5fab,	// (0x000484dd) field_vitu_entry_pane_t1

0xee48,	// (0x0005137a) field_vitu_entry_pane_t2_ParamLimits

0xee48,	// (0x0005137a) field_vitu_entry_pane_t2

0x0001,

0xf6d7,	// (0x00051c09) field_vitu_entry_pane_t_ParamLimits

0xf6d7,	// (0x00051c09) field_vitu_entry_pane_t

0xee65,	// (0x00051397) bg_button_pane_cp05_ParamLimits

0xee65,	// (0x00051397) bg_button_pane_cp05

0x5fcb,	// (0x000484fd) cell_vitu_itu_pane_g1

0x5fe3,	// (0x00048515) cell_vitu_itu_pane_t1_ParamLimits

0x5fe3,	// (0x00048515) cell_vitu_itu_pane_t1

0x5ff5,	// (0x00048527) cell_vitu_itu_pane_t2_ParamLimits

0x5ff5,	// (0x00048527) cell_vitu_itu_pane_t2

0x0002,

0xf6dc,	// (0x00051c0e) cell_vitu_itu_pane_t_ParamLimits

0xf6dc,	// (0x00051c0e) cell_vitu_itu_pane_t

0xee73,	// (0x000513a5) bg_button_pane_cp07

0x602a,	// (0x0004855c) cell_vitu_function_pane_g1

0xa7e1,	// (0x0004cd13) main_calc_pane_g1

0x158b,	// (0x00043abd) aid_visual_content_pane

0xa67e,	// (0x0004cbb0) main_vradio_pane

0x6033,	// (0x00048565) main_vradio_pane_g1_ParamLimits

0x6033,	// (0x00048565) main_vradio_pane_g1

0xee7d,	// (0x000513af) main_vradio_pane_g2_ParamLimits

0xee7d,	// (0x000513af) main_vradio_pane_g2

0x0001,

0xf6e3,	// (0x00051c15) main_vradio_pane_g_ParamLimits

0xf6e3,	// (0x00051c15) main_vradio_pane_g

0x604a,	// (0x0004857c) main_vradio_pane_t1_ParamLimits

0x604a,	// (0x0004857c) main_vradio_pane_t1

0x605f,	// (0x00048591) main_vradio_pane_t2_ParamLimits

0x605f,	// (0x00048591) main_vradio_pane_t2

0xee8a,	// (0x000513bc) main_vradio_pane_t3_ParamLimits

0xee8a,	// (0x000513bc) main_vradio_pane_t3

0x0002,

0xf6e8,	// (0x00051c1a) main_vradio_pane_t_ParamLimits

0xf6e8,	// (0x00051c1a) main_vradio_pane_t

0x6074,	// (0x000485a6) vradio_rocker_control_pane_ParamLimits

0x6074,	// (0x000485a6) vradio_rocker_control_pane

0x6086,	// (0x000485b8) vradio_station_info_pane_ParamLimits

0x6086,	// (0x000485b8) vradio_station_info_pane

0xee9e,	// (0x000513d0) vradio_frequency_info_pane_ParamLimits

0xee9e,	// (0x000513d0) vradio_frequency_info_pane

0xe896,	// (0x00050dc8) vradio_station_info_pane_g1

0xeead,	// (0x000513df) vradio_station_info_pane_t1_ParamLimits

0xeead,	// (0x000513df) vradio_station_info_pane_t1

0xeecf,	// (0x00051401) vradio_station_info_pane_t2_ParamLimits

0xeecf,	// (0x00051401) vradio_station_info_pane_t2

0x0001,

0x03ce,	// (0x00042900) vradio_station_info_pane_t_ParamLimits

0x03ce,	// (0x00042900) vradio_station_info_pane_t

0xeee1,	// (0x00051413) vradio_tuning_pane

0xeee9,	// (0x0005141b) vradio_rocker_control_pane_g1

0xeef1,	// (0x00051423) vradio_rocker_control_pane_g2

0xeef9,	// (0x0005142b) vradio_rocker_control_pane_g3

0xef01,	// (0x00051433) vradio_rocker_control_pane_g4

0xef09,	// (0x0005143b) vradio_rocker_control_pane_g5

0x0004,

0x03d3,	// (0x00042905) vradio_rocker_control_pane_g

0x6096,	// (0x000485c8) vradio_frequency_info_pane_g1

0xef11,	// (0x00051443) vradio_frequency_info_pane_t1_ParamLimits

0xef11,	// (0x00051443) vradio_frequency_info_pane_t1

0x60a0,	// (0x000485d2) vradio_tuning_pane_g1

0x60ab,	// (0x000485dd) vradio_tuning_pane_t1

0xa6b4,	// (0x0004cbe6) area_side_right_pane_ParamLimits

0xa6b4,	// (0x0004cbe6) area_side_right_pane

0xe3da,	// (0x0005090c) status_small_pane_g1

0xe3e2,	// (0x00050914) status_small_pane_g2

0xe3eb,	// (0x0005091d) status_small_pane_g3

0xe3f4,	// (0x00050926) status_small_pane_g4

0x0003,

0x0193,	// (0x000426c5) status_small_pane_g

0xe3fd,	// (0x0005092f) status_small_pane_t1

0xa67e,	// (0x0004cbb0) main_video3_pane

0xef25,	// (0x00051457) cams_zoom_vslider_pane

0xef2d,	// (0x0005145f) image3_wide_pane_ParamLimits

0xef2d,	// (0x0005145f) image3_wide_pane

0xef47,	// (0x00051479) image3_wide_small_pane

0xef53,	// (0x00051485) main_video3_pane_g1_ParamLimits

0xef53,	// (0x00051485) main_video3_pane_g1

0xef6f,	// (0x000514a1) main_video3_pane_g2_ParamLimits

0xef6f,	// (0x000514a1) main_video3_pane_g2

0x0001,

0x03de,	// (0x00042910) main_video3_pane_g_ParamLimits

0x03de,	// (0x00042910) main_video3_pane_g

0xef8b,	// (0x000514bd) main_video3_pane_t1_ParamLimits

0xef8b,	// (0x000514bd) main_video3_pane_t1

0xefb6,	// (0x000514e8) main_video3_pane_t2_ParamLimits

0xefb6,	// (0x000514e8) main_video3_pane_t2

0xefe3,	// (0x00051515) main_video3_pane_t3_ParamLimits

0xefe3,	// (0x00051515) main_video3_pane_t3

0x0002,

0x03e3,	// (0x00042915) main_video3_pane_t_ParamLimits

0x03e3,	// (0x00042915) main_video3_pane_t

0xf010,	// (0x00051542) cams_zoom_vslider_pane_g1

0xf019,	// (0x0005154b) cams_zoom_vslider_pane_g2

0x0001,

0x03ea,	// (0x0004291c) cams_zoom_vslider_pane_g

0xf021,	// (0x00051553) small_slider_vertical_pane

0xe896,	// (0x00050dc8) small_slider_vertical_pane_g1

0xe896,	// (0x00050dc8) small_slider_vertical_pane_g2

0xf029,	// (0x0005155b) small_slider_vertical_pane_g3

0x0002,

0x03ef,	// (0x00042921) small_slider_vertical_pane_g

0xa67e,	// (0x0004cbb0) main_hwr_training_pane

0xf032,	// (0x00051564) hwr_training_instruct_pane_ParamLimits

0xf032,	// (0x00051564) hwr_training_instruct_pane

0x60ba,	// (0x000485ec) hwr_training_navi_pane_ParamLimits

0x60ba,	// (0x000485ec) hwr_training_navi_pane

0x60d9,	// (0x0004860b) hwr_training_write_pane_ParamLimits

0x60d9,	// (0x0004860b) hwr_training_write_pane

0xa67e,	// (0x0004cbb0) bg_frame_shadow_pane

0xf069,	// (0x0005159b) hwr_training_write_pane_g1

0xf071,	// (0x000515a3) hwr_training_write_pane_g2

0xf079,	// (0x000515ab) hwr_training_write_pane_g3

0xf081,	// (0x000515b3) hwr_training_write_pane_g4

0xf089,	// (0x000515bb) hwr_training_write_pane_g5

0xf091,	// (0x000515c3) hwr_training_write_pane_g6

0xf099,	// (0x000515cb) hwr_training_write_pane_g7

0x0006,

0x03f6,	// (0x00042928) hwr_training_write_pane_g

0xac6f,	// (0x0004d1a1) hwr_training_navi_pane_g1_ParamLimits

0xac6f,	// (0x0004d1a1) hwr_training_navi_pane_g1

0xac81,	// (0x0004d1b3) hwr_training_navi_pane_g2_ParamLimits

0xac81,	// (0x0004d1b3) hwr_training_navi_pane_g2

0xac93,	// (0x0004d1c5) hwr_training_navi_pane_g3_ParamLimits

0xac93,	// (0x0004d1c5) hwr_training_navi_pane_g3

0xaca3,	// (0x0004d1d5) hwr_training_navi_pane_g4_ParamLimits

0xaca3,	// (0x0004d1d5) hwr_training_navi_pane_g4

0x0004,

0xf6ef,	// (0x00051c21) hwr_training_navi_pane_g_ParamLimits

0xf6ef,	// (0x00051c21) hwr_training_navi_pane_g

0xacb0,	// (0x0004d1e2) hwr_training_navi_pane_t1

0x6121,	// (0x00048653) list_single_hwr_training_instruct_pane_ParamLimits

0x6121,	// (0x00048653) list_single_hwr_training_instruct_pane

0xf0a1,	// (0x000515d3) list_single_hwr_training_instruct_pane_t1

0xe7d6,	// (0x00050d08) bg_frame_shadow_pane_g1

0xf0b0,	// (0x000515e2) bg_frame_shadow_pane_g2

0xf0b8,	// (0x000515ea) bg_frame_shadow_pane_g3

0xf0c0,	// (0x000515f2) bg_frame_shadow_pane_g4

0xf0c8,	// (0x000515fa) bg_frame_shadow_pane_g5

0xf0d0,	// (0x00051602) bg_frame_shadow_pane_g6

0xf0d8,	// (0x0005160a) bg_frame_shadow_pane_g7

0xc65b,	// (0x0004eb8d) bg_frame_shadow_pane_g8

0x0007,

0x0410,	// (0x00042942) bg_frame_shadow_pane_g

0xa67e,	// (0x0004cbb0) main_video_tele_dialer_pane

0x613d,	// (0x0004866f) aid_size_cell_video_keypad_ParamLimits

0x613d,	// (0x0004866f) aid_size_cell_video_keypad

0x6157,	// (0x00048689) grid_video_dialer_keypad_pane_ParamLimits

0x6157,	// (0x00048689) grid_video_dialer_keypad_pane

0x61a5,	// (0x000486d7) video_down_pane_cp_ParamLimits

0x61a5,	// (0x000486d7) video_down_pane_cp

0x61d9,	// (0x0004870b) cell_video_dialer_keypad_pane_ParamLimits

0x61d9,	// (0x0004870b) cell_video_dialer_keypad_pane

0xf0e0,	// (0x00051612) bg_button_pane_cp08_ParamLimits

0xf0e0,	// (0x00051612) bg_button_pane_cp08

0x61ff,	// (0x00048731) cell_video_dialer_keypad_pane_g1_ParamLimits

0x61ff,	// (0x00048731) cell_video_dialer_keypad_pane_g1

0x58be,	// (0x00047df0) mup3_rocker2_pane_ParamLimits

0x58be,	// (0x00047df0) mup3_rocker2_pane

0xe896,	// (0x00050dc8) mup3_rocker2_pane_g1

0x4403,	// (0x00046935) main_dialer2_pane

0xa67e,	// (0x0004cbb0) main_mp4_pane

0xacc6,	// (0x0004d1f8) main_mp4_pane_g1_ParamLimits

0xacc6,	// (0x0004d1f8) main_mp4_pane_g1

0xacc6,	// (0x0004d1f8) main_mp4_pane_g2_ParamLimits

0xacc6,	// (0x0004d1f8) main_mp4_pane_g2

0x623a,	// (0x0004876c) main_mp4_pane_g3_ParamLimits

0x623a,	// (0x0004876c) main_mp4_pane_g3

0xacd4,	// (0x0004d206) main_mp4_pane_g4_ParamLimits

0xacd4,	// (0x0004d206) main_mp4_pane_g4

0xacee,	// (0x0004d220) main_mp4_pane_g5_ParamLimits

0xacee,	// (0x0004d220) main_mp4_pane_g5

0x0005,

0xf709,	// (0x00051c3b) main_mp4_pane_g_ParamLimits

0xf709,	// (0x00051c3b) main_mp4_pane_g

0xad22,	// (0x0004d254) main_mp4_pane_t1_ParamLimits

0xad22,	// (0x0004d254) main_mp4_pane_t1

0xad7e,	// (0x0004d2b0) main_mp4_pane_t2_ParamLimits

0xad7e,	// (0x0004d2b0) main_mp4_pane_t2

0x6284,	// (0x000487b6) main_mp4_pane_t3_ParamLimits

0x6284,	// (0x000487b6) main_mp4_pane_t3

0xadd0,	// (0x0004d302) main_mp4_pane_t4_ParamLimits

0xadd0,	// (0x0004d302) main_mp4_pane_t4

0x0003,

0xf716,	// (0x00051c48) main_mp4_pane_t_ParamLimits

0xf716,	// (0x00051c48) main_mp4_pane_t

0xae10,	// (0x0004d342) mp4_progress_pane_ParamLimits

0xae10,	// (0x0004d342) mp4_progress_pane

0xae5a,	// (0x0004d38c) mp4_rocker_pane_ParamLimits

0xae5a,	// (0x0004d38c) mp4_rocker_pane

0x62ac,	// (0x000487de) mp4_progress_pane_t1

0x62c5,	// (0x000487f7) mp4_progress_pane_t2

0x0001,

0xf71f,	// (0x00051c51) mp4_progress_pane_t

0x62de,	// (0x00048810) mup_progress_pane_cp04

0xe896,	// (0x00050dc8) mp4_rocker_pane_g1

0x62ea,	// (0x0004881c) aid_cell_size_keypad2_ParamLimits

0x62ea,	// (0x0004881c) aid_cell_size_keypad2

0x6300,	// (0x00048832) dialer2_ne_pane_ParamLimits

0x6300,	// (0x00048832) dialer2_ne_pane

0x6318,	// (0x0004884a) grid_dialer2_keypad_pane_ParamLimits

0x6318,	// (0x0004884a) grid_dialer2_keypad_pane

0xe66d,	// (0x00050b9f) bg_popup_call_pane_cp07_ParamLimits

0xe66d,	// (0x00050b9f) bg_popup_call_pane_cp07

0x6334,	// (0x00048866) dialer2_ne_pane_t1_ParamLimits

0x6334,	// (0x00048866) dialer2_ne_pane_t1

0x6386,	// (0x000488b8) cell_dialer2_keypad_pane_ParamLimits

0x6386,	// (0x000488b8) cell_dialer2_keypad_pane

0x63ac,	// (0x000488de) bg_button_pane_pane_cp04_ParamLimits

0x63ac,	// (0x000488de) bg_button_pane_pane_cp04

0x63b8,	// (0x000488ea) cell_dialer2_keypad_pane_g1_ParamLimits

0x63b8,	// (0x000488ea) cell_dialer2_keypad_pane_g1

0x239b,	// (0x000448cd) aid_placing_vt_set_content_ParamLimits

0x239b,	// (0x000448cd) aid_placing_vt_set_content

0x23bf,	// (0x000448f1) aid_placing_vt_set_title_ParamLimits

0x23bf,	// (0x000448f1) aid_placing_vt_set_title

0xa67e,	// (0x0004cbb0) main_image3_pane

0x647e,	// (0x000489b0) area_side_right_pane_cp01_ParamLimits

0x647e,	// (0x000489b0) area_side_right_pane_cp01

0xacc6,	// (0x0004d1f8) main_image3_pane_g1_ParamLimits

0xacc6,	// (0x0004d1f8) main_image3_pane_g1

0x6497,	// (0x000489c9) main_image3_pane_g2_ParamLimits

0x6497,	// (0x000489c9) main_image3_pane_g2

0x64bf,	// (0x000489f1) main_image3_pane_g3_ParamLimits

0x64bf,	// (0x000489f1) main_image3_pane_g3

0x64e9,	// (0x00048a1b) main_image3_pane_g4_ParamLimits

0x64e9,	// (0x00048a1b) main_image3_pane_g4

0x0003,

0xf72e,	// (0x00051c60) main_image3_pane_g_ParamLimits

0xf72e,	// (0x00051c60) main_image3_pane_g

0x6513,	// (0x00048a45) main_image3_pane_t1_ParamLimits

0x6513,	// (0x00048a45) main_image3_pane_t1

0x656b,	// (0x00048a9d) main_image3_pane_t2_ParamLimits

0x656b,	// (0x00048a9d) main_image3_pane_t2

0x65bd,	// (0x00048aef) main_image3_pane_t3_ParamLimits

0x65bd,	// (0x00048aef) main_image3_pane_t3

0x0003,

0xf737,	// (0x00051c69) main_image3_pane_t_ParamLimits

0xf737,	// (0x00051c69) main_image3_pane_t

0xa6f7,	// (0x0004cc29) grid_sctrl_middle_pane_cp01_ParamLimits

0xa6f7,	// (0x0004cc29) grid_sctrl_middle_pane_cp01

0x6645,	// (0x00048b77) cell_sctrl_middle_pane_cp01_ParamLimits

0x6645,	// (0x00048b77) cell_sctrl_middle_pane_cp01

0x6662,	// (0x00048b94) cell_sctrl_middle_pane_cp01_g1_ParamLimits

0x6662,	// (0x00048b94) cell_sctrl_middle_pane_cp01_g1

0xa67e,	// (0x0004cbb0) main_call4_pane

0x6677,	// (0x00048ba9) aid_size_button_call4_ParamLimits

0x6677,	// (0x00048ba9) aid_size_button_call4

0x66aa,	// (0x00048bdc) call4_windows_pane_ParamLimits

0x66aa,	// (0x00048bdc) call4_windows_pane

0x66cc,	// (0x00048bfe) grid_call4_button_pane_ParamLimits

0x66cc,	// (0x00048bfe) grid_call4_button_pane

0x66f7,	// (0x00048c29) call4_windows_conf_pane

0x6712,	// (0x00048c44) popup_call4_audio_first_window_ParamLimits

0x6712,	// (0x00048c44) popup_call4_audio_first_window

0x6760,	// (0x00048c92) popup_call4_audio_second_window_ParamLimits

0x6760,	// (0x00048c92) popup_call4_audio_second_window

0x6776,	// (0x00048ca8) popup_call4_audio_wait_window_ParamLimits

0x6776,	// (0x00048ca8) popup_call4_audio_wait_window

0x6784,	// (0x00048cb6) cell_call4_button_pane_ParamLimits

0x6784,	// (0x00048cb6) cell_call4_button_pane

0x67ab,	// (0x00048cdd) bg_button_pane_cp09_ParamLimits

0x67ab,	// (0x00048cdd) bg_button_pane_cp09

0x67b7,	// (0x00048ce9) cell_call4_button_pane_g1_ParamLimits

0x67b7,	// (0x00048ce9) cell_call4_button_pane_g1

0x67dd,	// (0x00048d0f) cell_call4_button_pane_t1_ParamLimits

0x67dd,	// (0x00048d0f) cell_call4_button_pane_t1

0x683d,	// (0x00048d6f) popup_call4_audio_conf_window_ParamLimits

0x683d,	// (0x00048d6f) popup_call4_audio_conf_window

0x5920,	// (0x00047e52) mup3_progress_pane_t1_ParamLimits

0x5937,	// (0x00047e69) mup3_progress_pane_t2_ParamLimits

0xeb41,	// (0x00051073) mup3_progress_pane_t3_ParamLimits

0xf689,	// (0x00051bbb) mup3_progress_pane_t_ParamLimits

0xeb58,	// (0x0005108a) mup_progress_pane_cp03_ParamLimits

0x5efc,	// (0x0004842e) mup3_control_keys_pane_g4_copy1

0xae3e,	// (0x0004d370) mp4_rocker2_pane_ParamLimits

0xae3e,	// (0x0004d370) mp4_rocker2_pane

0x6857,	// (0x00048d89) mp4_rocker2_pane_g1

0x685f,	// (0x00048d91) mp4_rocker2_pane_g2

0xaeb0,	// (0x0004d3e2) mp4_rocker2_pane_g3

0xaeb8,	// (0x0004d3ea) mp4_rocker2_pane_g4

0xaec0,	// (0x0004d3f2) mp4_rocker2_pane_g5

0x0004,

0xf740,	// (0x00051c72) mp4_rocker2_pane_g

0xa67e,	// (0x0004cbb0) main_camera4_pane

0xa67e,	// (0x0004cbb0) main_video4_pane

0x6173,	// (0x000486a5) main_video_tele_dialer_pane_t1_ParamLimits

0x6173,	// (0x000486a5) main_video_tele_dialer_pane_t1

0x618c,	// (0x000486be) main_video_tele_dialer_pane_t2_ParamLimits

0x618c,	// (0x000486be) main_video_tele_dialer_pane_t2

0x0001,

0xf6fa,	// (0x00051c2c) main_video_tele_dialer_pane_t_ParamLimits

0xf6fa,	// (0x00051c2c) main_video_tele_dialer_pane_t

0x687f,	// (0x00048db1) cam4_autofocus_pane_ParamLimits

0x687f,	// (0x00048db1) cam4_autofocus_pane

0x6895,	// (0x00048dc7) cam4_image_uncrop_pane_ParamLimits

0x6895,	// (0x00048dc7) cam4_image_uncrop_pane

0x68ae,	// (0x00048de0) cam4_indicators_pane_ParamLimits

0x68ae,	// (0x00048de0) cam4_indicators_pane

0x68dd,	// (0x00048e0f) main_camera4_pane_g1_ParamLimits

0x68dd,	// (0x00048e0f) main_camera4_pane_g1

0x68e9,	// (0x00048e1b) main_camera4_pane_g2_ParamLimits

0x68e9,	// (0x00048e1b) main_camera4_pane_g2

0x68e9,	// (0x00048e1b) main_camera4_pane_g3_ParamLimits

0x68e9,	// (0x00048e1b) main_camera4_pane_g3

0x68f5,	// (0x00048e27) main_camera4_pane_g4_ParamLimits

0x68f5,	// (0x00048e27) main_camera4_pane_g4

0x6901,	// (0x00048e33) main_camera4_pane_g5_ParamLimits

0x6901,	// (0x00048e33) main_camera4_pane_g5

0x0005,

0xf74b,	// (0x00051c7d) main_camera4_pane_g_ParamLimits

0xf74b,	// (0x00051c7d) main_camera4_pane_g

0x691e,	// (0x00048e50) main_camera4_pane_t1_ParamLimits

0x691e,	// (0x00048e50) main_camera4_pane_t1

0xeac6,	// (0x00050ff8) bg_tb_trans_pane_cp06

0xaeee,	// (0x0004d420) cam4_indicators_pane_g1

0xaefb,	// (0x0004d42d) cam4_indicators_pane_g2

0x0002,

0xf766,	// (0x00051c98) cam4_indicators_pane_g

0xaf1b,	// (0x0004d44d) cam4_indicators_pane_t1

0x6996,	// (0x00048ec8) main_video4_pane_g1_ParamLimits

0x6996,	// (0x00048ec8) main_video4_pane_g1

0x69a8,	// (0x00048eda) main_video4_pane_g2_ParamLimits

0x69a8,	// (0x00048eda) main_video4_pane_g2

0x69bc,	// (0x00048eee) main_video4_pane_g3_ParamLimits

0x69bc,	// (0x00048eee) main_video4_pane_g3

0x69cc,	// (0x00048efe) main_video4_pane_g4_ParamLimits

0x69cc,	// (0x00048efe) main_video4_pane_g4

0x0004,

0xf76d,	// (0x00051c9f) main_video4_pane_g_ParamLimits

0xf76d,	// (0x00051c9f) main_video4_pane_g

0x69ec,	// (0x00048f1e) vid4_indicators_pane_ParamLimits

0x69ec,	// (0x00048f1e) vid4_indicators_pane

0x6a1c,	// (0x00048f4e) video4_image_uncrop_cif_pane_ParamLimits

0x6a1c,	// (0x00048f4e) video4_image_uncrop_cif_pane

0x6a36,	// (0x00048f68) video4_image_uncrop_nhd_pane_ParamLimits

0x6a36,	// (0x00048f68) video4_image_uncrop_nhd_pane

0x6895,	// (0x00048dc7) video4_image_uncrop_vga_pane_ParamLimits

0x6895,	// (0x00048dc7) video4_image_uncrop_vga_pane

0xaf3f,	// (0x0004d471) bg_tb_trans_pane_cp07

0x6a4c,	// (0x00048f7e) vid4_indicators_pane_g1

0x6a59,	// (0x00048f8b) vid4_indicators_pane_g2

0x6a66,	// (0x00048f98) vid4_indicators_pane_g3

0x0004,

0xf778,	// (0x00051caa) vid4_indicators_pane_g

0x6a8b,	// (0x00048fbd) vid4_indicators_pane_t1

0x6a9d,	// (0x00048fcf) cam4_autofocus_pane_g1

0x6aa5,	// (0x00048fd7) cam4_autofocus_pane_g2

0x6aad,	// (0x00048fdf) cam4_autofocus_pane_g3

0x0002,

0xf783,	// (0x00051cb5) cam4_autofocus_pane_g

0x6ab5,	// (0x00048fe7) cam4_autofocus_pane_g3_copy1

0x61bd,	// (0x000486ef) video_down_pane_cp_t1

0x61cb,	// (0x000486fd) video_down_pane_cp_t2

0x0001,

0xf6ff,	// (0x00051c31) video_down_pane_cp_t

0xa6f7,	// (0x0004cc29) popup_vitu2_window_ParamLimits

0xa6f7,	// (0x0004cc29) popup_vitu2_window

0x6abd,	// (0x00048fef) aid_size_cell2_itu2_ParamLimits

0x6abd,	// (0x00048fef) aid_size_cell2_itu2

0x6ae3,	// (0x00049015) aid_size_cell_itu2_ParamLimits

0x6ae3,	// (0x00049015) aid_size_cell_itu2

0x6b41,	// (0x00049073) bg_popup_window_pane_cp09_ParamLimits

0x6b41,	// (0x00049073) bg_popup_window_pane_cp09

0x6b4f,	// (0x00049081) field_vitu2_entry_pane_ParamLimits

0x6b4f,	// (0x00049081) field_vitu2_entry_pane

0x6b77,	// (0x000490a9) grid_vitu2_function_pane_ParamLimits

0x6b77,	// (0x000490a9) grid_vitu2_function_pane

0x6bc8,	// (0x000490fa) grid_vitu2_itu_pane_ParamLimits

0x6bc8,	// (0x000490fa) grid_vitu2_itu_pane

0x6c53,	// (0x00049185) cell_vitu2_itu_pane_ParamLimits

0x6c53,	// (0x00049185) cell_vitu2_itu_pane

0x6c79,	// (0x000491ab) cell_vitu2_function_pane_ParamLimits

0x6c79,	// (0x000491ab) cell_vitu2_function_pane

0x6cbd,	// (0x000491ef) bg_popup_call_pane_cp08_ParamLimits

0x6cbd,	// (0x000491ef) bg_popup_call_pane_cp08

0x6cd6,	// (0x00049208) field_vitu2_entry_pane_g1

0x6ce2,	// (0x00049214) field_vitu2_entry_pane_g2

0x0002,

0xf78a,	// (0x00051cbc) field_vitu2_entry_pane_g

0xaf57,	// (0x0004d489) field_vitu2_entry_pane_t1_ParamLimits

0xaf57,	// (0x0004d489) field_vitu2_entry_pane_t1

0xaf74,	// (0x0004d4a6) field_vitu2_entry_pane_t2_ParamLimits

0xaf74,	// (0x0004d4a6) field_vitu2_entry_pane_t2

0x0001,

0xf791,	// (0x00051cc3) field_vitu2_entry_pane_t_ParamLimits

0xf791,	// (0x00051cc3) field_vitu2_entry_pane_t

0x6d04,	// (0x00049236) bg_button_pane_cp010_ParamLimits

0x6d04,	// (0x00049236) bg_button_pane_cp010

0x6d12,	// (0x00049244) cell_vitu2_itu_pane_g1

0x6d30,	// (0x00049262) cell_vitu2_itu_pane_t1_ParamLimits

0x6d30,	// (0x00049262) cell_vitu2_itu_pane_t1

0x0c6a,	// (0x0004319c) cell_vitu2_itu_pane_t2_ParamLimits

0x0c6a,	// (0x0004319c) cell_vitu2_itu_pane_t2

0x0002,

0xf79b,	// (0x00051ccd) cell_vitu2_itu_pane_t_ParamLimits

0xf79b,	// (0x00051ccd) cell_vitu2_itu_pane_t

0xa6f7,	// (0x0004cc29) bg_button_pane_cp011

0x6d96,	// (0x000492c8) cell_vitu2_function_pane_g1

0xa67e,	// (0x0004cbb0) main_myfav_hc_pane

0x660d,	// (0x00048b3f) popup_image3_note_pane_ParamLimits

0x660d,	// (0x00048b3f) popup_image3_note_pane

0x6629,	// (0x00048b5b) popup_image3_tool_bar_pane_ParamLimits

0x6629,	// (0x00048b5b) popup_image3_tool_bar_pane

0x0cee,	// (0x00043220) cell_vitu2_itu_pane_t3_ParamLimits

0x0cee,	// (0x00043220) cell_vitu2_itu_pane_t3

0xa67e,	// (0x0004cbb0) bg_popup_trans_pane

0x6daa,	// (0x000492dc) grid_image3_tool_bar_pane

0x6db4,	// (0x000492e6) bg_popup_trans_pane_g1

0xc99a,	// (0x0004eecc) bg_popup_trans_pane_g2

0x6dbc,	// (0x000492ee) bg_popup_trans_pane_g3

0x6dc4,	// (0x000492f6) bg_popup_trans_pane_g4

0x6dcc,	// (0x000492fe) bg_popup_trans_pane_g5

0x6dd4,	// (0x00049306) bg_popup_trans_pane_g6

0x6ddc,	// (0x0004930e) bg_popup_trans_pane_g7

0x6de4,	// (0x00049316) bg_popup_trans_pane_g8

0xc97a,	// (0x0004eeac) bg_popup_trans_pane_g9

0x0008,

0xf7a2,	// (0x00051cd4) bg_popup_trans_pane_g

0x6dec,	// (0x0004931e) cell_image3_tool_bar_pane_ParamLimits

0x6dec,	// (0x0004931e) cell_image3_tool_bar_pane

0xe896,	// (0x00050dc8) cell_image3_tool_bar_pane_g1

0xa67e,	// (0x0004cbb0) bg_popup_trans_pane_cp1

0x6e02,	// (0x00049334) popup_image3_note_pane_t1

0x6e10,	// (0x00049342) popup_image3_note_pane_t2

0x6e1e,	// (0x00049350) popup_image3_note_pane_t3

0x0002,

0xf7b5,	// (0x00051ce7) popup_image3_note_pane_t

0x6e2e,	// (0x00049360) popup_image3_note_pane_t3_copy1

0x6e3c,	// (0x0004936e) bg_myfav_hc_instruction_pane_ParamLimits

0x6e3c,	// (0x0004936e) bg_myfav_hc_instruction_pane

0x6e54,	// (0x00049386) cell_myfav_contact_pane_ParamLimits

0x6e54,	// (0x00049386) cell_myfav_contact_pane

0x6e70,	// (0x000493a2) cell_myfav_contact_pane_cp1_ParamLimits

0x6e70,	// (0x000493a2) cell_myfav_contact_pane_cp1

0x6e88,	// (0x000493ba) cell_myfav_contact_pane_cp2_ParamLimits

0x6e88,	// (0x000493ba) cell_myfav_contact_pane_cp2

0x6ea0,	// (0x000493d2) cell_myfav_contact_pane_cp3_ParamLimits

0x6ea0,	// (0x000493d2) cell_myfav_contact_pane_cp3

0x6eb7,	// (0x000493e9) cell_myfav_contact_pane_cp4_ParamLimits

0x6eb7,	// (0x000493e9) cell_myfav_contact_pane_cp4

0x6ecf,	// (0x00049401) cell_myfav_contact_pane_cp5_ParamLimits

0x6ecf,	// (0x00049401) cell_myfav_contact_pane_cp5

0x6ee3,	// (0x00049415) cell_myfav_contact_pane_cp6_ParamLimits

0x6ee3,	// (0x00049415) cell_myfav_contact_pane_cp6

0x6ef9,	// (0x0004942b) cell_myfav_contact_pane_cp7_ParamLimits

0x6ef9,	// (0x0004942b) cell_myfav_contact_pane_cp7

0x6f11,	// (0x00049443) listscroll_gen_pane_cp05

0x6f1a,	// (0x0004944c) main_myfav_hc_pane_g1_ParamLimits

0x6f1a,	// (0x0004944c) main_myfav_hc_pane_g1

0x6f34,	// (0x00049466) main_myfav_hc_pane_g2_ParamLimits

0x6f34,	// (0x00049466) main_myfav_hc_pane_g2

0x0002,

0xf7bc,	// (0x00051cee) main_myfav_hc_pane_g_ParamLimits

0xf7bc,	// (0x00051cee) main_myfav_hc_pane_g

0x6f68,	// (0x0004949a) main_myfav_hc_pane_t1_ParamLimits

0x6f68,	// (0x0004949a) main_myfav_hc_pane_t1

0x6f7f,	// (0x000494b1) main_myfav_hc_pane_t2_ParamLimits

0x6f7f,	// (0x000494b1) main_myfav_hc_pane_t2

0x6f91,	// (0x000494c3) main_myfav_hc_pane_t3_ParamLimits

0x6f91,	// (0x000494c3) main_myfav_hc_pane_t3

0x6fa3,	// (0x000494d5) main_myfav_hc_pane_t4_ParamLimits

0x6fa3,	// (0x000494d5) main_myfav_hc_pane_t4

0x0004,

0xf7c3,	// (0x00051cf5) main_myfav_hc_pane_t_ParamLimits

0xf7c3,	// (0x00051cf5) main_myfav_hc_pane_t

0xe896,	// (0x00050dc8) bg_myfav_hc_instruction_pane_g1

0x6fcd,	// (0x000494ff) cell_myfav_contact_pane_g1_ParamLimits

0x6fcd,	// (0x000494ff) cell_myfav_contact_pane_g1

0x6fcd,	// (0x000494ff) cell_myfav_contact_pane_g2_ParamLimits

0x6fcd,	// (0x000494ff) cell_myfav_contact_pane_g2

0x6fd9,	// (0x0004950b) cell_myfav_contact_pane_g3_ParamLimits

0x6fd9,	// (0x0004950b) cell_myfav_contact_pane_g3

0xeb2b,	// (0x0005105d) cell_myfav_contact_pane_g4_ParamLimits

0xeb2b,	// (0x0005105d) cell_myfav_contact_pane_g4

0x6fe6,	// (0x00049518) cell_myfav_contact_pane_g5_ParamLimits

0x6fe6,	// (0x00049518) cell_myfav_contact_pane_g5

0x0004,

0xf7ce,	// (0x00051d00) cell_myfav_contact_pane_g_ParamLimits

0xf7ce,	// (0x00051d00) cell_myfav_contact_pane_g

0x6f4e,	// (0x00049480) main_myfav_hc_pane_g3_ParamLimits

0x6f4e,	// (0x00049480) main_myfav_hc_pane_g3

0x16b3,	// (0x00043be5) popup_adpt_find_window

0x6ff2,	// (0x00049524) afind_page_pane_ParamLimits

0x6ff2,	// (0x00049524) afind_page_pane

0x7007,	// (0x00049539) aid_size_cell_afind_ParamLimits

0x7007,	// (0x00049539) aid_size_cell_afind

0x7025,	// (0x00049557) bg_popup_sub_pane_cp09_ParamLimits

0x7025,	// (0x00049557) bg_popup_sub_pane_cp09

0x7032,	// (0x00049564) find_pane_cp01_ParamLimits

0x7032,	// (0x00049564) find_pane_cp01

0x703f,	// (0x00049571) grid_afind_control_pane_ParamLimits

0x703f,	// (0x00049571) grid_afind_control_pane

0x7053,	// (0x00049585) grid_afind_pane_ParamLimits

0x7053,	// (0x00049585) grid_afind_pane

0x7075,	// (0x000495a7) cell_afind_pane_ParamLimits

0x7075,	// (0x000495a7) cell_afind_pane

0xe896,	// (0x00050dc8) afind_page_pane_g1

0x70dc,	// (0x0004960e) afind_page_pane_g2

0x70e5,	// (0x00049617) afind_page_pane_g3

0x0002,

0xf7d9,	// (0x00051d0b) afind_page_pane_g

0x70ee,	// (0x00049620) afind_page_pane_t1

0x710e,	// (0x00049640) cell_afind_grid_control_pane_ParamLimits

0x710e,	// (0x00049640) cell_afind_grid_control_pane

0x63ac,	// (0x000488de) bg_button_pane_cp69_ParamLimits

0x63ac,	// (0x000488de) bg_button_pane_cp69

0x711d,	// (0x0004964f) cell_afind_pane_g1_ParamLimits

0x711d,	// (0x0004964f) cell_afind_pane_g1

0x712a,	// (0x0004965c) cell_afind_pane_t1_ParamLimits

0x712a,	// (0x0004965c) cell_afind_pane_t1

0xc791,	// (0x0004ecc3) bg_button_pane_cp72

0x713c,	// (0x0004966e) cell_afind_grid_control_pane_g1

0x3ea3,	// (0x000463d5) aid_image_placing_area_ParamLimits

0x3ea3,	// (0x000463d5) aid_image_placing_area

0xee30,	// (0x00051362) field_vitu_entry_pane_g1_ParamLimits

0xee30,	// (0x00051362) field_vitu_entry_pane_g1

0xee3c,	// (0x0005136e) field_vitu_entry_pane_g2_ParamLimits

0xee3c,	// (0x0005136e) field_vitu_entry_pane_g2

0x0001,

0x03b1,	// (0x000428e3) field_vitu_entry_pane_g_ParamLimits

0x03b1,	// (0x000428e3) field_vitu_entry_pane_g

0x5fcb,	// (0x000484fd) cell_vitu_itu_pane_g1_ParamLimits

0x600d,	// (0x0004853f) cell_vitu_itu_pane_t3_ParamLimits

0x600d,	// (0x0004853f) cell_vitu_itu_pane_t3

0x62ac,	// (0x000487de) mp4_progress_pane_t1_ParamLimits

0x62c5,	// (0x000487f7) mp4_progress_pane_t2_ParamLimits

0xf71f,	// (0x00051c51) mp4_progress_pane_t_ParamLimits

0x62de,	// (0x00048810) mup_progress_pane_cp04_ParamLimits

0x6fb7,	// (0x000494e9) main_myfav_hc_pane_t5_ParamLimits

0x6fb7,	// (0x000494e9) main_myfav_hc_pane_t5

0xa6a4,	// (0x0004cbd6) aid_zoom_text_primary

0x16b3,	// (0x00043be5) popup_adpt_find_window_ParamLimits

0xa6f7,	// (0x0004cc29) main_cam_set_pane

0x68c7,	// (0x00048df9) cam4_zoom_pane_ParamLimits

0x68c7,	// (0x00048df9) cam4_zoom_pane

0x7145,	// (0x00049677) main_cam_set_pane_g1_ParamLimits

0x7145,	// (0x00049677) main_cam_set_pane_g1

0x7153,	// (0x00049685) main_cam_set_pane_g2_ParamLimits

0x7153,	// (0x00049685) main_cam_set_pane_g2

0x0001,

0xf7e0,	// (0x00051d12) main_cam_set_pane_g_ParamLimits

0xf7e0,	// (0x00051d12) main_cam_set_pane_g

0x7176,	// (0x000496a8) main_cam_set_pane_t1_ParamLimits

0x7176,	// (0x000496a8) main_cam_set_pane_t1

0x7191,	// (0x000496c3) main_cset_listscroll_pane_ParamLimits

0x7191,	// (0x000496c3) main_cset_listscroll_pane

0x71b5,	// (0x000496e7) main_cset_slider_pane_ParamLimits

0x71b5,	// (0x000496e7) main_cset_slider_pane

0x71e7,	// (0x00049719) main_cset_list_pane_ParamLimits

0x71e7,	// (0x00049719) main_cset_list_pane

0x71f7,	// (0x00049729) scroll_pane_cp028

0x7200,	// (0x00049732) aid_area_touch_slider

0x721c,	// (0x0004974e) cset_slider_pane

0x7246,	// (0x00049778) main_cset_slider_pane_g1

0x725b,	// (0x0004978d) main_cset_slider_pane_g2

0x0011,

0xf7e5,	// (0x00051d17) main_cset_slider_pane_g

0x734d,	// (0x0004987f) main_cset_slider_pane_t1

0x737b,	// (0x000498ad) main_cset_slider_pane_t2

0x7395,	// (0x000498c7) main_cset_slider_pane_t3

0x73af,	// (0x000498e1) main_cset_slider_pane_t4

0x73c9,	// (0x000498fb) main_cset_slider_pane_t5

0x73e7,	// (0x00049919) main_cset_slider_pane_t6

0x73fe,	// (0x00049930) main_cset_slider_pane_t7

0x000e,

0xf80a,	// (0x00051d3c) main_cset_slider_pane_t

0x757c,	// (0x00049aae) cset_list_set_pane_ParamLimits

0x757c,	// (0x00049aae) cset_list_set_pane

0x7590,	// (0x00049ac2) aid_position_infowindow_above

0x7598,	// (0x00049aca) aid_position_infowindow_below

0xaf91,	// (0x0004d4c3) cset_list_set_pane_g1_ParamLimits

0xaf91,	// (0x0004d4c3) cset_list_set_pane_g1

0x0d46,	// (0x00043278) cset_list_set_pane_g3_ParamLimits

0x0d46,	// (0x00043278) cset_list_set_pane_g3

0x0001,

0xf829,	// (0x00051d5b) cset_list_set_pane_g_ParamLimits

0xf829,	// (0x00051d5b) cset_list_set_pane_g

0xaf9d,	// (0x0004d4cf) cset_list_set_pane_t1_ParamLimits

0xaf9d,	// (0x0004d4cf) cset_list_set_pane_t1

0xa6f7,	// (0x0004cc29) list_highlight_pane_cp021_ParamLimits

0xa6f7,	// (0x0004cc29) list_highlight_pane_cp021

0xd11c,	// (0x0004f64e) cset_slider_pane_g1

0xd12e,	// (0x0004f660) cset_slider_pane_g2

0xd125,	// (0x0004f657) cset_slider_pane_g3

0x0002,

0x0555,	// (0x00042a87) cset_slider_pane_g

0xafb2,	// (0x0004d4e4) aid_area_touch_cam4_zoom

0xafba,	// (0x0004d4ec) cam4_zoom_cont_pane

0xafc2,	// (0x0004d4f4) cam4_zoom_pane_g1

0xafca,	// (0x0004d4fc) cam4_zoom_pane_g2

0x75a0,	// (0x00049ad2) cam4_zoom_pane_g3

0x0002,

0xf82e,	// (0x00051d60) cam4_zoom_pane_g

0x75a8,	// (0x00049ada) cam4_zoom_cont_pane_g1

0x75b1,	// (0x00049ae3) cam4_zoom_cont_pane_g2

0x75ba,	// (0x00049aec) cam4_zoom_cont_pane_g3

0x0002,

0xf835,	// (0x00051d67) cam4_zoom_cont_pane_g

0x6695,	// (0x00048bc7) call4_image_pane_ParamLimits

0x6695,	// (0x00048bc7) call4_image_pane

0x66f7,	// (0x00048c29) call4_windows_conf_pane_ParamLimits

0x673e,	// (0x00048c70) popup_call4_audio_in_window_ParamLimits

0x673e,	// (0x00048c70) popup_call4_audio_in_window

0xa67e,	// (0x0004cbb0) bg_popup_call2_act_pane_cp02

0x6835,	// (0x00048d67) call4_list_conf_pane

0xe896,	// (0x00050dc8) call4_image_pane_g1

0xe896,	// (0x00050dc8) call4_image_pane_g2

0x0001,

0x0277,	// (0x000427a9) call4_image_pane_g

0x75c3,	// (0x00049af5) list_single_graphic_popup_conf4_pane_ParamLimits

0x75c3,	// (0x00049af5) list_single_graphic_popup_conf4_pane

0xa67e,	// (0x0004cbb0) list_highlight_pane_cp022

0x75d8,	// (0x00049b0a) list_single_graphic_popup_conf4_pane_g1

0xce16,	// (0x0004f348) list_single_graphic_popup_conf4_pane_g2

0x0001,

0xf83c,	// (0x00051d6e) list_single_graphic_popup_conf4_pane_g

0x75e0,	// (0x00049b12) list_single_graphic_popup_conf4_pane_t1

0x24d9,	// (0x00044a0b) popup_vtel_slider_window_ParamLimits

0x24d9,	// (0x00044a0b) popup_vtel_slider_window

0x6374,	// (0x000488a6) dialer2_ne_pane_t2_ParamLimits

0x6374,	// (0x000488a6) dialer2_ne_pane_t2

0x0001,

0xf724,	// (0x00051c56) dialer2_ne_pane_t_ParamLimits

0xf724,	// (0x00051c56) dialer2_ne_pane_t

0xe66d,	// (0x00050b9f) bg_popup_sub_pane_cp010_ParamLimits

0xe66d,	// (0x00050b9f) bg_popup_sub_pane_cp010

0x75f6,	// (0x00049b28) popup_vtel_slider_window_g1_ParamLimits

0x75f6,	// (0x00049b28) popup_vtel_slider_window_g1

0x7609,	// (0x00049b3b) popup_vtel_slider_window_g2_ParamLimits

0x7609,	// (0x00049b3b) popup_vtel_slider_window_g2

0x0003,

0xf841,	// (0x00051d73) popup_vtel_slider_window_g_ParamLimits

0xf841,	// (0x00051d73) popup_vtel_slider_window_g

0x765f,	// (0x00049b91) vtel_slider_pane_ParamLimits

0x765f,	// (0x00049b91) vtel_slider_pane

0x7681,	// (0x00049bb3) vtel_slider_pane_g1_ParamLimits

0x7681,	// (0x00049bb3) vtel_slider_pane_g1

0x7695,	// (0x00049bc7) vtel_slider_pane_g2_ParamLimits

0x7695,	// (0x00049bc7) vtel_slider_pane_g2

0x76ad,	// (0x00049bdf) vtel_slider_pane_g3_ParamLimits

0x76ad,	// (0x00049bdf) vtel_slider_pane_g3

0x7681,	// (0x00049bb3) vtel_slider_pane_g4_ParamLimits

0x7681,	// (0x00049bb3) vtel_slider_pane_g4

0x76c3,	// (0x00049bf5) vtel_slider_pane_g5_ParamLimits

0x76c3,	// (0x00049bf5) vtel_slider_pane_g5

0x0004,

0xf84a,	// (0x00051d7c) vtel_slider_pane_g_ParamLimits

0xf84a,	// (0x00051d7c) vtel_slider_pane_g

0xa67e,	// (0x0004cbb0) main_gallery2_pane

0x6b0f,	// (0x00049041) aid_size_row_itut2_dropdow_list_ParamLimits

0x6b0f,	// (0x00049041) aid_size_row_itut2_dropdow_list

0x6b9f,	// (0x000490d1) grid_vitu2_function_top_pane_ParamLimits

0x6b9f,	// (0x000490d1) grid_vitu2_function_top_pane

0x6bfe,	// (0x00049130) popup_vitu2_dropdown_list_window_ParamLimits

0x6bfe,	// (0x00049130) popup_vitu2_dropdown_list_window

0x6c27,	// (0x00049159) popup_vitu2_match_list_window

0x76d9,	// (0x00049c0b) cell_vitu2_function_top_pane_ParamLimits

0x76d9,	// (0x00049c0b) cell_vitu2_function_top_pane

0x76f9,	// (0x00049c2b) cell_vitu2_function_top_pane_cp01_ParamLimits

0x76f9,	// (0x00049c2b) cell_vitu2_function_top_pane_cp01

0x7717,	// (0x00049c49) cell_vitu2_function_top_wide_pane_ParamLimits

0x7717,	// (0x00049c49) cell_vitu2_function_top_wide_pane

0xa6f7,	// (0x0004cc29) bg_button_pane_cp012

0x7735,	// (0x00049c67) cell_vitu2_function_top_pane_g1

0xafe0,	// (0x0004d512) bg_button_pane_cp013_ParamLimits

0xafe0,	// (0x0004d512) bg_button_pane_cp013

0x7749,	// (0x00049c7b) cell_vitu2_function_top_wide_pane_g1_ParamLimits

0x7749,	// (0x00049c7b) cell_vitu2_function_top_wide_pane_g1

0xa6f7,	// (0x0004cc29) bg_popup_sub_pane_cp20

0x7761,	// (0x00049c93) list_vitu2_match_list_pane

0x6db4,	// (0x000492e6) bg_popup_sub_pane_cp20_g1

0x6dbc,	// (0x000492ee) bg_popup_sub_pane_cp20_g2

0xc99a,	// (0x0004eecc) bg_popup_sub_pane_cp20_g3

0x6dc4,	// (0x000492f6) bg_popup_sub_pane_cp20_g4

0xc97a,	// (0x0004eeac) bg_popup_sub_pane_cp20_g5

0x777f,	// (0x00049cb1) bg_popup_sub_pane_cp20_g6

0x6dd4,	// (0x00049306) bg_popup_sub_pane_cp20_g7

0x6ddc,	// (0x0004930e) bg_popup_sub_pane_cp20_g8

0x6de4,	// (0x00049316) bg_popup_sub_pane_cp20_g9

0x0008,

0xf855,	// (0x00051d87) bg_popup_sub_pane_cp20_g

0xaffc,	// (0x0004d52e) list_vitu2_match_list_item_pane_ParamLimits

0xaffc,	// (0x0004d52e) list_vitu2_match_list_item_pane

0xb00e,	// (0x0004d540) list_vitu2_match_list_item_pane_t1

0xa67e,	// (0x0004cbb0) bg_popup_sub_pane_cp21

0xcd31,	// (0x0004f263) grid_vitu2_dropdown_list_pane

0x7787,	// (0x00049cb9) cell_vitu2_dropdown_list_char_pane_ParamLimits

0x7787,	// (0x00049cb9) cell_vitu2_dropdown_list_char_pane

0x77aa,	// (0x00049cdc) cell_vitu2_dropdown_list_ctrl_pane_ParamLimits

0x77aa,	// (0x00049cdc) cell_vitu2_dropdown_list_ctrl_pane

0x77d8,	// (0x00049d0a) cell_vitu2_dropdown_list_char_pane_g1

0x77e1,	// (0x00049d13) cell_vitu2_dropdown_list_char_pane_g2

0x77ea,	// (0x00049d1c) cell_vitu2_dropdown_list_char_pane_g3

0x0002,

0xf872,	// (0x00051da4) cell_vitu2_dropdown_list_char_pane_g

0x77f3,	// (0x00049d25) cell_vitu2_dropdown_list_char_pane_t1

0x7801,	// (0x00049d33) cell_vitu2_dropdown_list_ctrl_pane_g1_ParamLimits

0x7801,	// (0x00049d33) cell_vitu2_dropdown_list_ctrl_pane_g1

0x7811,	// (0x00049d43) cell_vitu2_dropdown_list_ctrl_pane_g2_ParamLimits

0x7811,	// (0x00049d43) cell_vitu2_dropdown_list_ctrl_pane_g2

0x7822,	// (0x00049d54) cell_vitu2_dropdown_list_ctrl_pane_g3_ParamLimits

0x7822,	// (0x00049d54) cell_vitu2_dropdown_list_ctrl_pane_g3

0x7832,	// (0x00049d64) cell_vitu2_dropdown_list_ctrl_pane_g4_ParamLimits

0x7832,	// (0x00049d64) cell_vitu2_dropdown_list_ctrl_pane_g4

0xeac6,	// (0x00050ff8) cell_vitu2_dropdown_list_ctrl_pane_g5_ParamLimits

0xeac6,	// (0x00050ff8) cell_vitu2_dropdown_list_ctrl_pane_g5

0x0004,

0xf879,	// (0x00051dab) cell_vitu2_dropdown_list_ctrl_pane_g_ParamLimits

0xf879,	// (0x00051dab) cell_vitu2_dropdown_list_ctrl_pane_g

0x784e,	// (0x00049d80) aid_size_cell_gallery2_ParamLimits

0x784e,	// (0x00049d80) aid_size_cell_gallery2

0x7864,	// (0x00049d96) grid_gallery2_pane_ParamLimits

0x7864,	// (0x00049d96) grid_gallery2_pane

0x7878,	// (0x00049daa) scroll_pane_cp029_ParamLimits

0x7878,	// (0x00049daa) scroll_pane_cp029

0x7884,	// (0x00049db6) cell_gallery2_pane_ParamLimits

0x7884,	// (0x00049db6) cell_gallery2_pane

0x78be,	// (0x00049df0) cell_gallery2_pane_g2

0x78c8,	// (0x00049dfa) cell_gallery2_pane_g3

0x78d0,	// (0x00049e02) cell_gallery2_pane_g4

0x78d8,	// (0x00049e0a) cell_gallery2_pane_g5

0xcfe4,	// (0x0004f516) grid_highlight_pane_cp10

0x6c27,	// (0x00049159) popup_vitu2_match_list_window_ParamLimits

0x6c3e,	// (0x00049170) popup_vitu2_query_window_ParamLimits

0x6c3e,	// (0x00049170) popup_vitu2_query_window

0xa67e,	// (0x0004cbb0) bg_vitu2_candi_button_pane

0x77d8,	// (0x00049d0a) cell_vitu2_dropdown_list_char_pane_g1_copy1

0x77e1,	// (0x00049d13) cell_vitu2_dropdown_list_char_pane_g2_copy1

0x77ea,	// (0x00049d1c) cell_vitu2_dropdown_list_char_pane_g2_copy2

0x0d87,	// (0x000432b9) bg_button_pane_cp015

0x78e0,	// (0x00049e12) bg_button_pane_cp016

0x78f3,	// (0x00049e25) bg_button_pane_cp017

0xe413,	// (0x00050945) bg_popup_sub_pane_cp22

0x7917,	// (0x00049e49) popup_vitu2_query_window_g1

0x0dbc,	// (0x000432ee) popup_vitu2_query_window_g2

0x0002,

0xf884,	// (0x00051db6) popup_vitu2_query_window_g

0x0ddb,	// (0x0004330d) popup_vitu2_query_window_t1_ParamLimits

0x0ddb,	// (0x0004330d) popup_vitu2_query_window_t1

0x0e10,	// (0x00043342) popup_vitu2_query_window_t2_ParamLimits

0x0e10,	// (0x00043342) popup_vitu2_query_window_t2

0x0e22,	// (0x00043354) popup_vitu2_query_window_t3_ParamLimits

0x0e22,	// (0x00043354) popup_vitu2_query_window_t3

0x7923,	// (0x00049e55) popup_vitu2_query_window_t4_ParamLimits

0x7923,	// (0x00049e55) popup_vitu2_query_window_t4

0x7944,	// (0x00049e76) popup_vitu2_query_window_t5_ParamLimits

0x7944,	// (0x00049e76) popup_vitu2_query_window_t5

0x0006,

0xf88b,	// (0x00051dbd) popup_vitu2_query_window_t_ParamLimits

0xf88b,	// (0x00051dbd) popup_vitu2_query_window_t

0x71df,	// (0x00049711) main_cset_text_pane

0x7200,	// (0x00049732) aid_area_touch_slider_ParamLimits

0x721c,	// (0x0004974e) cset_slider_pane_ParamLimits

0x7246,	// (0x00049778) main_cset_slider_pane_g1_ParamLimits

0x725b,	// (0x0004978d) main_cset_slider_pane_g2_ParamLimits

0x7270,	// (0x000497a2) main_cset_slider_pane_g3_ParamLimits

0x7270,	// (0x000497a2) main_cset_slider_pane_g3

0x727c,	// (0x000497ae) main_cset_slider_pane_g4_ParamLimits

0x727c,	// (0x000497ae) main_cset_slider_pane_g4

0x728b,	// (0x000497bd) main_cset_slider_pane_g5_ParamLimits

0x728b,	// (0x000497bd) main_cset_slider_pane_g5

0x7299,	// (0x000497cb) main_cset_slider_pane_g6_ParamLimits

0x7299,	// (0x000497cb) main_cset_slider_pane_g6

0xf7e5,	// (0x00051d17) main_cset_slider_pane_g_ParamLimits

0x734d,	// (0x0004987f) main_cset_slider_pane_t1_ParamLimits

0x737b,	// (0x000498ad) main_cset_slider_pane_t2_ParamLimits

0x7395,	// (0x000498c7) main_cset_slider_pane_t3_ParamLimits

0x73af,	// (0x000498e1) main_cset_slider_pane_t4_ParamLimits

0x73c9,	// (0x000498fb) main_cset_slider_pane_t5_ParamLimits

0x73e7,	// (0x00049919) main_cset_slider_pane_t6_ParamLimits

0x73fe,	// (0x00049930) main_cset_slider_pane_t7_ParamLimits

0x742c,	// (0x0004995e) main_cset_slider_pane_t8_ParamLimits

0x742c,	// (0x0004995e) main_cset_slider_pane_t8

0x7454,	// (0x00049986) main_cset_slider_pane_t9_ParamLimits

0x7454,	// (0x00049986) main_cset_slider_pane_t9

0x747c,	// (0x000499ae) main_cset_slider_pane_t10_ParamLimits

0x747c,	// (0x000499ae) main_cset_slider_pane_t10

0x74a4,	// (0x000499d6) main_cset_slider_pane_t11_ParamLimits

0x74a4,	// (0x000499d6) main_cset_slider_pane_t11

0x74ce,	// (0x00049a00) main_cset_slider_pane_t12_ParamLimits

0x74ce,	// (0x00049a00) main_cset_slider_pane_t12

0x74eb,	// (0x00049a1d) main_cset_slider_pane_t13_ParamLimits

0x74eb,	// (0x00049a1d) main_cset_slider_pane_t13

0xf80a,	// (0x00051d3c) main_cset_slider_pane_t_ParamLimits

0xa67e,	// (0x0004cbb0) bg_popup_sub_pane_cp011

0x7965,	// (0x00049e97) main_cset_text_pane_g1

0x796d,	// (0x00049e9f) main_cset_text_pane_t1

0x797b,	// (0x00049ead) main_cset_text_pane_t2

0x7989,	// (0x00049ebb) main_cset_text_pane_t3

0x7997,	// (0x00049ec9) main_cset_text_pane_t4

0x79a5,	// (0x00049ed7) main_cset_text_pane_t5

0x79b3,	// (0x00049ee5) main_cset_text_pane_t6

0x79c1,	// (0x00049ef3) main_cset_text_pane_t7

0x0006,

0xf89a,	// (0x00051dcc) main_cset_text_pane_t

0xa67e,	// (0x0004cbb0) main_cam4_burst_pane

0xa67e,	// (0x0004cbb0) main_cam5_pane

0x70fc,	// (0x0004962e) bg_button_pane_cp019

0x7105,	// (0x00049637) bg_button_pane_cp020

0x72ad,	// (0x000497df) main_cset_slider_pane_g7_ParamLimits

0x72ad,	// (0x000497df) main_cset_slider_pane_g7

0x72b9,	// (0x000497eb) main_cset_slider_pane_g8_ParamLimits

0x72b9,	// (0x000497eb) main_cset_slider_pane_g8

0x72c5,	// (0x000497f7) main_cset_slider_pane_g9_ParamLimits

0x72c5,	// (0x000497f7) main_cset_slider_pane_g9

0x72d1,	// (0x00049803) main_cset_slider_pane_g10_ParamLimits

0x72d1,	// (0x00049803) main_cset_slider_pane_g10

0x72dd,	// (0x0004980f) main_cset_slider_pane_g11_ParamLimits

0x72dd,	// (0x0004980f) main_cset_slider_pane_g11

0x72e9,	// (0x0004981b) main_cset_slider_pane_g12_ParamLimits

0x72e9,	// (0x0004981b) main_cset_slider_pane_g12

0x72f5,	// (0x00049827) main_cset_slider_pane_g13_ParamLimits

0x72f5,	// (0x00049827) main_cset_slider_pane_g13

0x7301,	// (0x00049833) main_cset_slider_pane_g14_ParamLimits

0x7301,	// (0x00049833) main_cset_slider_pane_g14

0x730d,	// (0x0004983f) main_cset_slider_pane_g15_ParamLimits

0x730d,	// (0x0004983f) main_cset_slider_pane_g15

0x750a,	// (0x00049a3c) main_cset_slider_pane_t14_ParamLimits

0x750a,	// (0x00049a3c) main_cset_slider_pane_t14

0x7543,	// (0x00049a75) main_cset_slider_pane_t15_ParamLimits

0x7543,	// (0x00049a75) main_cset_slider_pane_t15

0x79cf,	// (0x00049f01) aid_cam4_burst_size_cell_ParamLimits

0x79cf,	// (0x00049f01) aid_cam4_burst_size_cell

0x79ef,	// (0x00049f21) grid_cam4_burst_pane_ParamLimits

0x79ef,	// (0x00049f21) grid_cam4_burst_pane

0x7a29,	// (0x00049f5b) linegrid_cam4_burst_pane_ParamLimits

0x7a29,	// (0x00049f5b) linegrid_cam4_burst_pane

0x7a4d,	// (0x00049f7f) scroll_pane_cp30_ParamLimits

0x7a4d,	// (0x00049f7f) scroll_pane_cp30

0x7a59,	// (0x00049f8b) cell_cam4_burst_pane_ParamLimits

0x7a59,	// (0x00049f8b) cell_cam4_burst_pane

0x7aae,	// (0x00049fe0) linegrid_cam4_burst_pane_g1_ParamLimits

0x7aae,	// (0x00049fe0) linegrid_cam4_burst_pane_g1

0x7abb,	// (0x00049fed) linegrid_cam4_burst_pane_g2_ParamLimits

0x7abb,	// (0x00049fed) linegrid_cam4_burst_pane_g2

0x7acc,	// (0x00049ffe) linegrid_cam4_burst_pane_g3_ParamLimits

0x7acc,	// (0x00049ffe) linegrid_cam4_burst_pane_g3

0x0002,

0xf8a9,	// (0x00051ddb) linegrid_cam4_burst_pane_g_ParamLimits

0xf8a9,	// (0x00051ddb) linegrid_cam4_burst_pane_g

0x7ad9,	// (0x0004a00b) linegrid_cam4_burst_pane_g3_copy1_ParamLimits

0x7ad9,	// (0x0004a00b) linegrid_cam4_burst_pane_g3_copy1

0x7af7,	// (0x0004a029) linegrid_cam4_burst_pane_g4_ParamLimits

0x7af7,	// (0x0004a029) linegrid_cam4_burst_pane_g4

0x7b04,	// (0x0004a036) linegrid_cam4_burst_pane_g5_ParamLimits

0x7b04,	// (0x0004a036) linegrid_cam4_burst_pane_g5

0x7b15,	// (0x0004a047) linegrid_cam4_burst_pane_g6_ParamLimits

0x7b15,	// (0x0004a047) linegrid_cam4_burst_pane_g6

0x7b2c,	// (0x0004a05e) linegrid_cam4_burst_pane_g7_ParamLimits

0x7b2c,	// (0x0004a05e) linegrid_cam4_burst_pane_g7

0x7b39,	// (0x0004a06b) cell_cam4_burst_pane_g1

0x7b58,	// (0x0004a08a) main_cam5_pane_t1_ParamLimits

0x7b58,	// (0x0004a08a) main_cam5_pane_t1

0x7b6a,	// (0x0004a09c) main_cam5_pane_t2_ParamLimits

0x7b6a,	// (0x0004a09c) main_cam5_pane_t2

0x7b7c,	// (0x0004a0ae) main_cam5_pane_t3_ParamLimits

0x7b7c,	// (0x0004a0ae) main_cam5_pane_t3

0x7b8e,	// (0x0004a0c0) main_cam5_pane_t4_ParamLimits

0x7b8e,	// (0x0004a0c0) main_cam5_pane_t4

0x7ba6,	// (0x0004a0d8) main_cam5_pane_t5_ParamLimits

0x7ba6,	// (0x0004a0d8) main_cam5_pane_t5

0x7bba,	// (0x0004a0ec) main_cam5_pane_t6_ParamLimits

0x7bba,	// (0x0004a0ec) main_cam5_pane_t6

0x7bce,	// (0x0004a100) main_cam5_pane_t7_ParamLimits

0x7bce,	// (0x0004a100) main_cam5_pane_t7

0x7be0,	// (0x0004a112) main_cam5_pane_t8_ParamLimits

0x7be0,	// (0x0004a112) main_cam5_pane_t8

0x7bfe,	// (0x0004a130) main_cam5_pane_t9_ParamLimits

0x7bfe,	// (0x0004a130) main_cam5_pane_t9

0x7c10,	// (0x0004a142) main_cam5_pane_t10_ParamLimits

0x7c10,	// (0x0004a142) main_cam5_pane_t10

0x7c22,	// (0x0004a154) main_cam5_pane_t11_ParamLimits

0x7c22,	// (0x0004a154) main_cam5_pane_t11

0x7c36,	// (0x0004a168) main_cam5_pane_t12_ParamLimits

0x7c36,	// (0x0004a168) main_cam5_pane_t12

0x7c4d,	// (0x0004a17f) main_cam5_pane_t13_ParamLimits

0x7c4d,	// (0x0004a17f) main_cam5_pane_t13

0x000c,

0xf8b5,	// (0x00051de7) main_cam5_pane_t_ParamLimits

0xf8b5,	// (0x00051de7) main_cam5_pane_t

0x1737,	// (0x00043c69) popup_scut_keymap_window_ParamLimits

0x1737,	// (0x00043c69) popup_scut_keymap_window

0x7c70,	// (0x0004a1a2) aid_size_cell_brow_shortcut

0xcfe4,	// (0x0004f516) bg_popup_window_pane_cp010

0x7c7c,	// (0x0004a1ae) grid_scut_pane

0x7c88,	// (0x0004a1ba) cell_scut_pane_ParamLimits

0x7c88,	// (0x0004a1ba) cell_scut_pane

0x7ca1,	// (0x0004a1d3) cell_scut_pane_g1

0x7caa,	// (0x0004a1dc) cell_scut_pane_t1

0x7cb9,	// (0x0004a1eb) cell_scut_pane_t2

0x7cc8,	// (0x0004a1fa) cell_scut_pane_t3

0x0002,

0xf8d0,	// (0x00051e02) cell_scut_pane_t

0x54dd,	// (0x00047a0f) main_mup3_pane_g8_ParamLimits

0x54dd,	// (0x00047a0f) main_mup3_pane_g8

0x6b29,	// (0x0004905b) area_vitu2_query_pane_ParamLimits

0x6b29,	// (0x0004905b) area_vitu2_query_pane

0x0d9b,	// (0x000432cd) input_focus_pane_cp08

0x7cd6,	// (0x0004a208) area_vitu2_query_pane_g1

0x0ea0,	// (0x000433d2) area_vitu2_query_pane_g2

0x0001,

0xf8d7,	// (0x00051e09) area_vitu2_query_pane_g

0x7ce2,	// (0x0004a214) area_vitu2_query_pane_t1_ParamLimits

0x7ce2,	// (0x0004a214) area_vitu2_query_pane_t1

0x7cf6,	// (0x0004a228) area_vitu2_query_pane_t2_ParamLimits

0x7cf6,	// (0x0004a228) area_vitu2_query_pane_t2

0x0eb1,	// (0x000433e3) area_vitu2_query_pane_t3_ParamLimits

0x0eb1,	// (0x000433e3) area_vitu2_query_pane_t3

0xb034,	// (0x0004d566) area_vitu2_query_pane_t4_ParamLimits

0xb034,	// (0x0004d566) area_vitu2_query_pane_t4

0xb05c,	// (0x0004d58e) area_vitu2_query_pane_t5_ParamLimits

0xb05c,	// (0x0004d58e) area_vitu2_query_pane_t5

0xb084,	// (0x0004d5b6) area_vitu2_query_pane_t6_ParamLimits

0xb084,	// (0x0004d5b6) area_vitu2_query_pane_t6

0x0006,

0xf8dc,	// (0x00051e0e) area_vitu2_query_pane_t_ParamLimits

0xf8dc,	// (0x00051e0e) area_vitu2_query_pane_t

0x7d0a,	// (0x0004a23c) bg_button_pane_cp018

0x7d18,	// (0x0004a24a) bg_button_pane_cp021

0x0ed9,	// (0x0004340b) bg_button_pane_cp022

0x0eea,	// (0x0004341c) input_focus_pane_cp09

0x34a0,	// (0x000459d2) aid_size_touch_mv_arrow_left

0x34c9,	// (0x000459fb) aid_size_touch_mv_arrow_right

0x7325,	// (0x00049857) main_cset_slider_pane_g16_ParamLimits

0x7325,	// (0x00049857) main_cset_slider_pane_g16

0x7333,	// (0x00049865) main_cset_slider_pane_g17_ParamLimits

0x7333,	// (0x00049865) main_cset_slider_pane_g17

0x7b39,	// (0x0004a06b) cell_cam4_burst_pane_g1_ParamLimits

0xa67e,	// (0x0004cbb0) compa_mode_pane

0x7619,	// (0x00049b4b) popup_vtel_slider_window_g3_ParamLimits

0x7619,	// (0x00049b4b) popup_vtel_slider_window_g3

0x7630,	// (0x00049b62) popup_vtel_slider_window_g4_ParamLimits

0x7630,	// (0x00049b62) popup_vtel_slider_window_g4

0x7647,	// (0x00049b79) popup_vtel_slider_window_t1_ParamLimits

0x7647,	// (0x00049b79) popup_vtel_slider_window_t1

0xa67e,	// (0x0004cbb0) main_cl_pane

0xe43f,	// (0x00050971) popup_imed_adjust2_window_ParamLimits

0xe413,	// (0x00050945) bg_tb_trans_pane_cp05_ParamLimits

0xed65,	// (0x00051297) popup_imed_adjust2_window_g1_ParamLimits

0xed74,	// (0x000512a6) popup_imed_adjust2_window_g2_ParamLimits

0xed74,	// (0x000512a6) popup_imed_adjust2_window_g2

0xed80,	// (0x000512b2) popup_imed_adjust2_window_g3_ParamLimits

0xed80,	// (0x000512b2) popup_imed_adjust2_window_g3

0x0002,

0x0375,	// (0x000428a7) popup_imed_adjust2_window_g_ParamLimits

0x0375,	// (0x000428a7) popup_imed_adjust2_window_g

0xed8c,	// (0x000512be) popup_imed_adjust2_window_t1_ParamLimits

0xeda4,	// (0x000512d6) slider_imed_adjust_pane_ParamLimits

0xedb8,	// (0x000512ea) slider_imed_adjust_pane_g1_ParamLimits

0xedc8,	// (0x000512fa) slider_imed_adjust_pane_g2_ParamLimits

0xedd8,	// (0x0005130a) slider_imed_adjust_pane_g3_ParamLimits

0xede9,	// (0x0005131b) slider_imed_adjust_pane_g4_ParamLimits

0x037c,	// (0x000428ae) slider_imed_adjust_pane_g_ParamLimits

0x6867,	// (0x00048d99) aid_touch_area_cam4_ParamLimits

0x6867,	// (0x00048d99) aid_touch_area_cam4

0xaec8,	// (0x0004d3fa) battery_pane_cp01

0x6912,	// (0x00048e44) main_camera4_pane_g6_ParamLimits

0x6912,	// (0x00048e44) main_camera4_pane_g6

0x6935,	// (0x00048e67) main_camera4_pane_t2_ParamLimits

0x6935,	// (0x00048e67) main_camera4_pane_t2

0x0001,

0xf758,	// (0x00051c8a) main_camera4_pane_t_ParamLimits

0xf758,	// (0x00051c8a) main_camera4_pane_t

0x697e,	// (0x00048eb0) aid_touch_area_vid4_ParamLimits

0x697e,	// (0x00048eb0) aid_touch_area_vid4

0x69dc,	// (0x00048f0e) main_video4_pane_g5_ParamLimits

0x69dc,	// (0x00048f0e) main_video4_pane_g5

0x6a03,	// (0x00048f35) vid4_progress_pane_ParamLimits

0x6a03,	// (0x00048f35) vid4_progress_pane

0x7341,	// (0x00049873) main_cset_slider_pane_g18_ParamLimits

0x7341,	// (0x00049873) main_cset_slider_pane_g18

0x7b4c,	// (0x0004a07e) cell_cam4_burst_pane_g2_ParamLimits

0x7b4c,	// (0x0004a07e) cell_cam4_burst_pane_g2

0x0001,

0xf8b0,	// (0x00051de2) cell_cam4_burst_pane_g_ParamLimits

0xf8b0,	// (0x00051de2) cell_cam4_burst_pane_g

0xc590,	// (0x0004eac2) bg_cl_pane_ParamLimits

0xc590,	// (0x0004eac2) bg_cl_pane

0x7d24,	// (0x0004a256) cl_header_pane_ParamLimits

0x7d24,	// (0x0004a256) cl_header_pane

0x7d38,	// (0x0004a26a) cl_listscroll_pane_ParamLimits

0x7d38,	// (0x0004a26a) cl_listscroll_pane

0x7d48,	// (0x0004a27a) bg_cl_pane_g1

0x7d50,	// (0x0004a282) bg_cl_pane_g2

0x7d58,	// (0x0004a28a) bg_cl_pane_g3

0x7d60,	// (0x0004a292) bg_cl_pane_g4

0x7d68,	// (0x0004a29a) bg_cl_pane_g5

0x7d70,	// (0x0004a2a2) bg_cl_pane_g6

0x7d78,	// (0x0004a2aa) bg_cl_pane_g7

0x7d80,	// (0x0004a2b2) bg_cl_pane_g8

0x7d88,	// (0x0004a2ba) bg_cl_pane_g9

0x0008,

0xf8eb,	// (0x00051e1d) bg_cl_pane_g

0x7d90,	// (0x0004a2c2) aid_height_cl_leading_ParamLimits

0x7d90,	// (0x0004a2c2) aid_height_cl_leading

0x7d9c,	// (0x0004a2ce) aid_height_cl_text_ParamLimits

0x7d9c,	// (0x0004a2ce) aid_height_cl_text

0xa6f7,	// (0x0004cc29) bg_cl_header_pane_ParamLimits

0xa6f7,	// (0x0004cc29) bg_cl_header_pane

0x7dbb,	// (0x0004a2ed) cl_header_pane_g1_ParamLimits

0x7dbb,	// (0x0004a2ed) cl_header_pane_g1

0x7dd1,	// (0x0004a303) cl_header_pane_t1_ParamLimits

0x7dd1,	// (0x0004a303) cl_header_pane_t1

0x7dea,	// (0x0004a31c) cl_list_pane

0x71f7,	// (0x00049729) hc_scroll_pane_cp01

0xc97a,	// (0x0004eeac) bg_cl_header_pane_g1

0x6db4,	// (0x000492e6) bg_cl_header_pane_g2

0xc99a,	// (0x0004eecc) bg_cl_header_pane_g3

0x6dc4,	// (0x000492f6) bg_cl_header_pane_g4

0x6dbc,	// (0x000492ee) bg_cl_header_pane_g5

0x777f,	// (0x00049cb1) bg_cl_header_pane_g6

0x6ddc,	// (0x0004930e) bg_cl_header_pane_g7

0x6de4,	// (0x00049316) bg_cl_header_pane_g8

0x6dd4,	// (0x00049306) bg_cl_header_pane_g9

0x0008,

0xf8fe,	// (0x00051e30) bg_cl_header_pane_g

0x7df3,	// (0x0004a325) hc_cl_list_double_graphic_heading_pane_ParamLimits

0x7df3,	// (0x0004a325) hc_cl_list_double_graphic_heading_pane

0x7e06,	// (0x0004a338) hc_cl_list_single_graphic_pane_ParamLimits

0x7e06,	// (0x0004a338) hc_cl_list_single_graphic_pane

0x7e1e,	// (0x0004a350) hc_cl_list_single_graphic_pane_g1_ParamLimits

0x7e1e,	// (0x0004a350) hc_cl_list_single_graphic_pane_g1

0x7e2a,	// (0x0004a35c) hc_cl_list_single_graphic_pane_g2_ParamLimits

0x7e2a,	// (0x0004a35c) hc_cl_list_single_graphic_pane_g2

0x0001,

0xf911,	// (0x00051e43) hc_cl_list_single_graphic_pane_g_ParamLimits

0xf911,	// (0x00051e43) hc_cl_list_single_graphic_pane_g

0x7e3e,	// (0x0004a370) hc_cl_list_single_graphic_pane_t1_ParamLimits

0x7e3e,	// (0x0004a370) hc_cl_list_single_graphic_pane_t1

0x7e1e,	// (0x0004a350) hc_cl_list_double_graphic_heading_pane_g1_ParamLimits

0x7e1e,	// (0x0004a350) hc_cl_list_double_graphic_heading_pane_g1

0x7e53,	// (0x0004a385) hc_cl_list_double_graphic_heading_pane_g2_ParamLimits

0x7e53,	// (0x0004a385) hc_cl_list_double_graphic_heading_pane_g2

0x7e67,	// (0x0004a399) hc_cl_list_double_graphic_heading_pane_g3_ParamLimits

0x7e67,	// (0x0004a399) hc_cl_list_double_graphic_heading_pane_g3

0x0002,

0xf916,	// (0x00051e48) hc_cl_list_double_graphic_heading_pane_g_ParamLimits

0xf916,	// (0x00051e48) hc_cl_list_double_graphic_heading_pane_g

0x7e7b,	// (0x0004a3ad) hc_cl_list_double_graphic_heading_pane_t1_ParamLimits

0x7e7b,	// (0x0004a3ad) hc_cl_list_double_graphic_heading_pane_t1

0x7e90,	// (0x0004a3c2) hc_cl_list_double_graphic_heading_pane_t2_ParamLimits

0x7e90,	// (0x0004a3c2) hc_cl_list_double_graphic_heading_pane_t2

0x0001,

0xf91d,	// (0x00051e4f) hc_cl_list_double_graphic_heading_pane_t_ParamLimits

0xf91d,	// (0x00051e4f) hc_cl_list_double_graphic_heading_pane_t

0xb0d8,	// (0x0004d60a) vid4_progress_pane_g1

0xb0e4,	// (0x0004d616) vid4_progress_pane_g2

0xb0f0,	// (0x0004d622) vid4_progress_pane_g3

0xb0ff,	// (0x0004d631) vid4_progress_pane_g4

0x0004,

0xf922,	// (0x00051e54) vid4_progress_pane_g

0xb11d,	// (0x0004d64f) vid4_progress_pane_t1

0xb133,	// (0x0004d665) vid4_progress_pane_t2

0x0002,

0xf92d,	// (0x00051e5f) vid4_progress_pane_t

0xb15e,	// (0x0004d690) wait_bar_pane_cp07

0xe67b,	// (0x00050bad) blid_firmament_pane_ParamLimits

0xe6be,	// (0x00050bf0) popup_blid_sat_info2_window_g1

0xe6e2,	// (0x00050c14) popup_blid_sat_info2_window_t3

0xe6f0,	// (0x00050c22) popup_blid_sat_info2_window_t4

0xe6fe,	// (0x00050c30) popup_blid_sat_info2_window_t5

0xe70c,	// (0x00050c3e) popup_blid_sat_info2_window_t6

0xe71c,	// (0x00050c4e) popup_blid_sat_info2_window_t7

0xe72a,	// (0x00050c5c) popup_blid_sat_info2_window_t8

0xe738,	// (0x00050c6a) popup_blid_sat_info2_window_t9

0xe746,	// (0x00050c78) popup_blid_sat_info2_window_t10

0xe816,	// (0x00050d48) aid_firma_cardinal_ParamLimits

0xe82a,	// (0x00050d5c) blid_firmament_pane_t1_ParamLimits

0xe841,	// (0x00050d73) blid_firmament_pane_t2_ParamLimits

0xe858,	// (0x00050d8a) blid_firmament_pane_t3_ParamLimits

0xe86f,	// (0x00050da1) blid_firmament_pane_t4_ParamLimits

0x026e,	// (0x000427a0) blid_firmament_pane_t_ParamLimits

0xe886,	// (0x00050db8) blid_sat_info_pane_ParamLimits

0xa6f7,	// (0x0004cc29) main_cam_set_pane_ParamLimits

0x5d77,	// (0x000482a9) aid_size_cell_colour_35_ParamLimits

0x5d97,	// (0x000482c9) aid_size_cell_colour_112_ParamLimits

0x5db7,	// (0x000482e9) aid_size_cell_effect_ParamLimits

0xe413,	// (0x00050945) bg_tb_trans_pane_cp02_ParamLimits

0xcb42,	// (0x0004f074) heading_imed_pane_ParamLimits

0x5dd7,	// (0x00048309) listscroll_imed_pane_ParamLimits

0xda41,	// (0x0004ff73) popup_call2_audio_first_window_g5_ParamLimits

0xda41,	// (0x0004ff73) popup_call2_audio_first_window_g5

0x6420,	// (0x00048952) aid_size_touch_image3_arrow_left_ParamLimits

0x6420,	// (0x00048952) aid_size_touch_image3_arrow_left

0x644c,	// (0x0004897e) aid_size_touch_image3_arrow_right_ParamLimits

0x644c,	// (0x0004897e) aid_size_touch_image3_arrow_right

0xb149,	// (0x0004d67b) vid4_progress_pane_t3

0x60f4,	// (0x00048626) main_hwr_training_symbol_option_pane_ParamLimits

0x60f4,	// (0x00048626) main_hwr_training_symbol_option_pane

0xf054,	// (0x00051586) popup_hwr_training_preview_window_ParamLimits

0xf054,	// (0x00051586) popup_hwr_training_preview_window

0x6114,	// (0x00048646) hwr_training_navi_pane_g5_ParamLimits

0x6114,	// (0x00048646) hwr_training_navi_pane_g5

0x6cfc,	// (0x0004922e) popup_char_count_window

0xa6f7,	// (0x0004cc29) bg_popup_sub_pane_cp20_ParamLimits

0x7761,	// (0x00049c93) list_vitu2_match_list_pane_ParamLimits

0x7770,	// (0x00049ca2) vitu2_page_scroll_pane_ParamLimits

0x7770,	// (0x00049ca2) vitu2_page_scroll_pane

0x7eaf,	// (0x0004a3e1) list_single_hwr_training_symbol_option_pane_ParamLimits

0x7eaf,	// (0x0004a3e1) list_single_hwr_training_symbol_option_pane

0x7ec2,	// (0x0004a3f4) list_single_hwr_training_symbol_option_pane_g1

0x7eca,	// (0x0004a3fc) list_single_hwr_training_symbol_option_pane_t1

0x7ed8,	// (0x0004a40a) bg_button_pane_cp023

0x7ee1,	// (0x0004a413) bg_button_pane_cp024

0x7f14,	// (0x0004a446) vitu2_page_scroll_pane_g1

0x7f1c,	// (0x0004a44e) vitu2_page_scroll_pane_g2

0x0001,

0xf934,	// (0x00051e66) vitu2_page_scroll_pane_g

0x7f26,	// (0x0004a458) vitu2_page_scroll_pane_t1

0xe5db,	// (0x00050b0d) popup_char_count_window_g1

0x7f35,	// (0x0004a467) popup_char_count_window_g2

0x7f3e,	// (0x0004a470) popup_char_count_window_g3

0x0002,

0xf939,	// (0x00051e6b) popup_char_count_window_g

0x7f47,	// (0x0004a479) popup_char_count_window_t1

0xa67e,	// (0x0004cbb0) main_vded2_pane

0xed51,	// (0x00051283) aid_size_cell_imed_line

0xed5b,	// (0x0005128d) grid_imed_line_width_pane

0x6a73,	// (0x00048fa5) vid4_indicators_pane_g4

0x7f55,	// (0x0004a487) cell_imed_line_width_pane_ParamLimits

0x7f55,	// (0x0004a487) cell_imed_line_width_pane

0x7f6b,	// (0x0004a49d) cell_imed_line_width_pane_g1

0xe7b6,	// (0x00050ce8) cell_imed_line_width_pane_g2

0x0001,

0xf940,	// (0x00051e72) cell_imed_line_width_pane_g

0x7f74,	// (0x0004a4a6) main_vded2_pane_g1_ParamLimits

0x7f74,	// (0x0004a4a6) main_vded2_pane_g1

0x7f8f,	// (0x0004a4c1) main_vded2_pane_g2_ParamLimits

0x7f8f,	// (0x0004a4c1) main_vded2_pane_g2

0x0001,

0xf945,	// (0x00051e77) main_vded2_pane_g_ParamLimits

0xf945,	// (0x00051e77) main_vded2_pane_g

0x7fa1,	// (0x0004a4d3) vded2_slider_pane_ParamLimits

0x7fa1,	// (0x0004a4d3) vded2_slider_pane

0x7fb1,	// (0x0004a4e3) aid_size_touch_vded2_end

0x7fbb,	// (0x0004a4ed) aid_size_touch_vded2_playhead

0x7fc5,	// (0x0004a4f7) aid_size_touch_vded2_start

0x7fcd,	// (0x0004a4ff) vded2_slider_bg_pane

0x7fd6,	// (0x0004a508) vded2_slider_pane_g1

0x7fdf,	// (0x0004a511) vded2_slider_pane_g2

0x7fe7,	// (0x0004a519) vded2_slider_pane_g3

0x0002,

0xf94a,	// (0x00051e7c) vded2_slider_pane_g

0x7ff2,	// (0x0004a524) vded2_slider_bg_pane_g1

0x7ffb,	// (0x0004a52d) vded2_slider_bg_pane_g2

0x8004,	// (0x0004a536) vded2_slider_bg_pane_g3

0x0002,

0xf951,	// (0x00051e83) vded2_slider_bg_pane_g

0x3ae0,	// (0x00046012) aid_postcard_touch_down_pane_ParamLimits

0x3ae0,	// (0x00046012) aid_postcard_touch_down_pane

0x3af8,	// (0x0004602a) aid_postcard_touch_up_pane_ParamLimits

0x3af8,	// (0x0004602a) aid_postcard_touch_up_pane

0xa67e,	// (0x0004cbb0) main_blid2_pane

0xe421,	// (0x00050953) popup_blid2_search_window

0xa67e,	// (0x0004cbb0) blid2_gps_pane

0xa67e,	// (0x0004cbb0) blid2_navig_pane

0xa67e,	// (0x0004cbb0) blid2_search_pane

0xa67e,	// (0x0004cbb0) blid2_tripm_pane

0x800d,	// (0x0004a53f) blid2_search_pane_g1_ParamLimits

0x800d,	// (0x0004a53f) blid2_search_pane_g1

0x8025,	// (0x0004a557) blid2_search_pane_t1_ParamLimits

0x8025,	// (0x0004a557) blid2_search_pane_t1

0x8037,	// (0x0004a569) aid_size_cell_blid2_gps_ParamLimits

0x8037,	// (0x0004a569) aid_size_cell_blid2_gps

0x804f,	// (0x0004a581) blid2_gps_pane_g1_ParamLimits

0x804f,	// (0x0004a581) blid2_gps_pane_g1

0x8063,	// (0x0004a595) grid_blid2_satellite_pane_ParamLimits

0x8063,	// (0x0004a595) grid_blid2_satellite_pane

0x807b,	// (0x0004a5ad) blid2_navig_pane_g1_ParamLimits

0x807b,	// (0x0004a5ad) blid2_navig_pane_g1

0x8087,	// (0x0004a5b9) blid2_navig_pane_t1_ParamLimits

0x8087,	// (0x0004a5b9) blid2_navig_pane_t1

0x80a2,	// (0x0004a5d4) blid2_navig_pane_t2_ParamLimits

0x80a2,	// (0x0004a5d4) blid2_navig_pane_t2

0x0001,

0xf958,	// (0x00051e8a) blid2_navig_pane_t_ParamLimits

0xf958,	// (0x00051e8a) blid2_navig_pane_t

0x80bd,	// (0x0004a5ef) blid2_navig_ring_pane_ParamLimits

0x80bd,	// (0x0004a5ef) blid2_navig_ring_pane

0x80d8,	// (0x0004a60a) blid2_speed_pane_ParamLimits

0x80d8,	// (0x0004a60a) blid2_speed_pane

0x80e4,	// (0x0004a616) blid2_tripm_pane_g1_ParamLimits

0x80e4,	// (0x0004a616) blid2_tripm_pane_g1

0x80ff,	// (0x0004a631) blid2_tripm_pane_g2_ParamLimits

0x80ff,	// (0x0004a631) blid2_tripm_pane_g2

0x8113,	// (0x0004a645) blid2_tripm_pane_g3_ParamLimits

0x8113,	// (0x0004a645) blid2_tripm_pane_g3

0x8127,	// (0x0004a659) blid2_tripm_pane_g4_ParamLimits

0x8127,	// (0x0004a659) blid2_tripm_pane_g4

0x813b,	// (0x0004a66d) blid2_tripm_pane_g5_ParamLimits

0x813b,	// (0x0004a66d) blid2_tripm_pane_g5

0x0005,

0xf95d,	// (0x00051e8f) blid2_tripm_pane_g_ParamLimits

0xf95d,	// (0x00051e8f) blid2_tripm_pane_g

0x8161,	// (0x0004a693) blid2_tripm_pane_t1_ParamLimits

0x8161,	// (0x0004a693) blid2_tripm_pane_t1

0x817c,	// (0x0004a6ae) blid2_tripm_pane_t2_ParamLimits

0x817c,	// (0x0004a6ae) blid2_tripm_pane_t2

0x8195,	// (0x0004a6c7) blid2_tripm_pane_t3_ParamLimits

0x8195,	// (0x0004a6c7) blid2_tripm_pane_t3

0x0003,

0xf96a,	// (0x00051e9c) blid2_tripm_pane_t_ParamLimits

0xf96a,	// (0x00051e9c) blid2_tripm_pane_t

0x81dc,	// (0x0004a70e) cell_blid2_satellite_pane_ParamLimits

0x81dc,	// (0x0004a70e) cell_blid2_satellite_pane

0x81f8,	// (0x0004a72a) cell_blid2_satellite_pane_g1

0x8201,	// (0x0004a733) cell_blid2_satellite_pane_t1

0xe896,	// (0x00050dc8) blid2_speed_pane_g1

0x820f,	// (0x0004a741) blid2_speed_pane_t1

0x821d,	// (0x0004a74f) blid2_speed_pane_t2

0x0001,

0xf973,	// (0x00051ea5) blid2_speed_pane_t

0xe896,	// (0x00050dc8) blid2_navig_ring_pane_g1

0x822b,	// (0x0004a75d) blid2_navig_ring_pane_g2

0x8233,	// (0x0004a765) blid2_navig_ring_pane_g3

0x823b,	// (0x0004a76d) blid2_navig_ring_pane_g4

0x8243,	// (0x0004a775) blid2_navig_ring_pane_g5

0x0004,

0xf978,	// (0x00051eaa) blid2_navig_ring_pane_g

0xa67e,	// (0x0004cbb0) bg_popup_window_pane_cp011

0x824b,	// (0x0004a77d) popup_blid2_search_window_g1

0x8253,	// (0x0004a785) popup_blid2_search_window_t1

0x8261,	// (0x0004a793) popup_blid2_search_window_t2

0x0001,

0xf983,	// (0x00051eb5) popup_blid2_search_window_t

0xc889,	// (0x0004edbb) main_browser_pane_g1

0xc590,	// (0x0004eac2) main_browser_pane_ParamLimits

0xa6f7,	// (0x0004cc29) bg_button_pane_cp011_ParamLimits

0x6d96,	// (0x000492c8) cell_vitu2_function_pane_g1_ParamLimits

0xe413,	// (0x00050945) bg_popup_sub_pane_cp22_ParamLimits

0x0d9b,	// (0x000432cd) input_focus_pane_cp08_ParamLimits

0x7906,	// (0x00049e38) popup_vitu2_query_button_pane_ParamLimits

0x7906,	// (0x00049e38) popup_vitu2_query_button_pane

0x0db2,	// (0x000432e4) popup_vitu2_query_input_button_pane

0x7917,	// (0x00049e49) popup_vitu2_query_window_g1_ParamLimits

0x0dbc,	// (0x000432ee) popup_vitu2_query_window_g2_ParamLimits

0xf884,	// (0x00051db6) popup_vitu2_query_window_g_ParamLimits

0xa67e,	// (0x0004cbb0) bg_button_pane_cp026

0x826f,	// (0x0004a7a1) popup_vitu2_query_input_button_pane_g1

0xa67e,	// (0x0004cbb0) bg_button_pane_cp025

0x8277,	// (0x0004a7a9) popup_vitu2_query_button_pane_t1

0x51ed,	// (0x0004771f) main_mp3_pane_t6

0x51fb,	// (0x0004772d) popup_slider_window_cp01

0xaee6,	// (0x0004d418) cam4_battery_pane

0xaf4d,	// (0x0004d47f) cam4_battery_pane_cp02

0x7ea5,	// (0x0004a3d7) cam4_battery_pane_cp01

0xb0d0,	// (0x0004d602) cam4_battery_pane_cp03

0xe896,	// (0x00050dc8) cam4_battery_pane_g1

0x8285,	// (0x0004a7b7) cam4_battery_pane_g2

0x0001,

0xf988,	// (0x00051eba) cam4_battery_pane_g

0xe754,	// (0x00050c86) popup_blid_sat_info2_window_t11

0x34a0,	// (0x000459d2) aid_size_touch_mv_arrow_left_ParamLimits

0x34c9,	// (0x000459fb) aid_size_touch_mv_arrow_right_ParamLimits

0xcf44,	// (0x0004f476) navi_pane_g1_ParamLimits

0x34f2,	// (0x00045a24) navi_pane_g2_ParamLimits

0x3520,	// (0x00045a52) navi_pane_g3_ParamLimits

0xf409,	// (0x0005193b) navi_pane_g_ParamLimits

0x357a,	// (0x00045aac) navi_pane_mv_t1_ParamLimits

0x5de3,	// (0x00048315) grid_imed_effect_pane_ParamLimits

0x23de,	// (0x00044910) aid_placing_vt_slider_lsc

0xc7d6,	// (0x0004ed08) aid_placing_vt_slider_prt

0xa6f7,	// (0x0004cc29) bg_tb_trans_pane_cp01_ParamLimits

0xe9e6,	// (0x00050f18) popup_image_details_window_g1_ParamLimits

0xe9f9,	// (0x00050f2b) popup_image_details_window_g2_ParamLimits

0xea0e,	// (0x00050f40) popup_image_details_window_g3_ParamLimits

0xea0e,	// (0x00050f40) popup_image_details_window_g3

0x02b3,	// (0x000427e5) popup_image_details_window_g_ParamLimits

0xea22,	// (0x00050f54) popup_image_details_window_t1_ParamLimits

0xea34,	// (0x00050f66) popup_image_details_window_t2_ParamLimits

0xea4d,	// (0x00050f7f) popup_image_details_window_t3_ParamLimits

0xea61,	// (0x00050f93) popup_image_details_window_t4_ParamLimits

0xea7c,	// (0x00050fae) popup_image_details_window_t5_ParamLimits

0x02ba,	// (0x000427ec) popup_image_details_window_t_ParamLimits

0x7da8,	// (0x0004a2da) cl_header_name_pane_ParamLimits

0x7da8,	// (0x0004a2da) cl_header_name_pane

0x828f,	// (0x0004a7c1) cl_header_name_pane_t1_ParamLimits

0x828f,	// (0x0004a7c1) cl_header_name_pane_t1

0x82b0,	// (0x0004a7e2) cl_header_name_pane_t2_ParamLimits

0x82b0,	// (0x0004a7e2) cl_header_name_pane_t2

0x82f2,	// (0x0004a824) cl_header_name_pane_t3_ParamLimits

0x82f2,	// (0x0004a824) cl_header_name_pane_t3

0x0002,

0xf98d,	// (0x00051ebf) cl_header_name_pane_t_ParamLimits

0xf98d,	// (0x00051ebf) cl_header_name_pane_t

0x354b,	// (0x00045a7d) navi_pane_mv_g2_ParamLimits

0x6cd6,	// (0x00049208) field_vitu2_entry_pane_g1_ParamLimits

0x6ce2,	// (0x00049214) field_vitu2_entry_pane_g2_ParamLimits

0x6cee,	// (0x00049220) field_vitu2_entry_pane_g3_ParamLimits

0x6cee,	// (0x00049220) field_vitu2_entry_pane_g3

0xf78a,	// (0x00051cbc) field_vitu2_entry_pane_g_ParamLimits

0x6d12,	// (0x00049244) cell_vitu2_itu_pane_g1_ParamLimits

0x6d22,	// (0x00049254) cell_vitu2_itu_pane_g2_ParamLimits

0x6d22,	// (0x00049254) cell_vitu2_itu_pane_g2

0x0001,

0xf796,	// (0x00051cc8) cell_vitu2_itu_pane_g_ParamLimits

0xf796,	// (0x00051cc8) cell_vitu2_itu_pane_g

0xa6f7,	// (0x0004cc29) bg_vkb2_func_pane_cp05_ParamLimits

0xa6f7,	// (0x0004cc29) bg_vkb2_func_pane_cp05

0xa6f7,	// (0x0004cc29) bg_vkb2_func_pane_cp03

0xa6f7,	// (0x0004cc29) bg_vkb2_func_pane_cp04

0xa6f7,	// (0x0004cc29) bg_vkb2_func_pane_cp10_ParamLimits

0xa6f7,	// (0x0004cc29) bg_vkb2_func_pane_cp10

0x0ed9,	// (0x0004340b) bg_vkb2_func_pane_cp08

0x7d0a,	// (0x0004a23c) bg_vkb2_func_pane_cp06

0x7d18,	// (0x0004a24a) bg_vkb2_func_pane_cp07

0x7eea,	// (0x0004a41c) bg_vkb2_func_pane_cp11_ParamLimits

0x7eea,	// (0x0004a41c) bg_vkb2_func_pane_cp11

0x7eff,	// (0x0004a431) bg_vkb2_func_pane_cp12_ParamLimits

0x7eff,	// (0x0004a431) bg_vkb2_func_pane_cp12

0xa67e,	// (0x0004cbb0) bg_vkb2_func_pane_cp09

0x6db4,	// (0x000492e6) bg_vkb2_func_pane_g1

0xc99a,	// (0x0004eecc) bg_vkb2_func_pane_g2

0x6dbc,	// (0x000492ee) bg_vkb2_func_pane_g3

0x6dc4,	// (0x000492f6) bg_vkb2_func_pane_g4

0x777f,	// (0x00049cb1) bg_vkb2_func_pane_g5

0x6ddc,	// (0x0004930e) bg_vkb2_func_pane_g6

0x6de4,	// (0x00049316) bg_vkb2_func_pane_g7

0x6dd4,	// (0x00049306) bg_vkb2_func_pane_g8

0xc97a,	// (0x0004eeac) bg_vkb2_func_pane_g9

0x0008,

0xf994,	// (0x00051ec6) bg_vkb2_func_pane_g

0x814f,	// (0x0004a681) blid2_tripm_pane_g6_ParamLimits

0x814f,	// (0x0004a681) blid2_tripm_pane_g6

0x62a4,	// (0x000487d6) mp4_progress_pane_g1

0x81c8,	// (0x0004a6fa) blid2_tripm_values_pane_ParamLimits

0x81c8,	// (0x0004a6fa) blid2_tripm_values_pane

0x8323,	// (0x0004a855) blid2_tripm_values_pane_t1

0x8331,	// (0x0004a863) blid2_tripm_values_pane_t2

0x833f,	// (0x0004a871) blid2_tripm_values_pane_t3

0x834d,	// (0x0004a87f) blid2_tripm_values_pane_t4

0x835b,	// (0x0004a88d) blid2_tripm_values_pane_t5

0x8369,	// (0x0004a89b) blid2_tripm_values_pane_t6

0x8377,	// (0x0004a8a9) blid2_tripm_values_pane_t7

0x8385,	// (0x0004a8b7) blid2_tripm_values_pane_t8

0x8393,	// (0x0004a8c5) blid2_tripm_values_pane_t9

0x0008,

0xf9a7,	// (0x00051ed9) blid2_tripm_values_pane_t

0x241e,	// (0x00044950) call_video_pane_t1_ParamLimits

0x2438,	// (0x0004496a) call_video_pane_t2_ParamLimits

0xf292,	// (0x000517c4) call_video_pane_t_ParamLimits

0x0be1,	// (0x00043113) msg_header_pane_g1_ParamLimits

0xd161,	// (0x0004f693) msg_header_pane_g2_ParamLimits

0xd161,	// (0x0004f693) msg_header_pane_g2

0x0001,

0xf4ac,	// (0x000519de) msg_header_pane_g_ParamLimits

0xf4ac,	// (0x000519de) msg_header_pane_g

0xc590,	// (0x0004eac2) main_clock2_pane_ParamLimits

0x5aec,	// (0x0004801e) grid_clock2_toolbar_pane_ParamLimits

0x5aec,	// (0x0004801e) grid_clock2_toolbar_pane

0x5aec,	// (0x0004801e) listscroll_clock2_pane_ParamLimits

0x5aec,	// (0x0004801e) listscroll_clock2_pane

0x5bd5,	// (0x00048107) main_clock2_pane_t3_ParamLimits

0x5bd5,	// (0x00048107) main_clock2_pane_t3

0x5bf0,	// (0x00048122) main_clock2_pane_t4_ParamLimits

0x5bf0,	// (0x00048122) main_clock2_pane_t4

0x83a1,	// (0x0004a8d3) cell_clock2_toolbar_pane

0x83a9,	// (0x0004a8db) cell_clock2_toolbar_pane_cp01

0x83a9,	// (0x0004a8db) cell_clock2_toolbar_pane_cp02

0x83b1,	// (0x0004a8e3) cell_clock2_toolbar_pane_cp03

0x83b9,	// (0x0004a8eb) list_clock2_pane

0xceaa,	// (0x0004f3dc) scroll_pane_cp10

0x83c1,	// (0x0004a8f3) list_single_clock2_pane_ParamLimits

0x83c1,	// (0x0004a8f3) list_single_clock2_pane

0xcfe4,	// (0x0004f516) list_highlight_pane_cp08

0x83ce,	// (0x0004a900) list_single_clock2_pane_t1

0x83dc,	// (0x0004a90e) list_single_clock2_pane_t2

0x0001,

0xf9ba,	// (0x00051eec) list_single_clock2_pane_t

0xa67e,	// (0x0004cbb0) bg_button_pane_cp10

0x83ea,	// (0x0004a91c) cell_clock2_toolbar_pane_g1

0x3a6c,	// (0x00045f9e) aid_main_viewer_pane_g1_ParamLimits

0x3a6c,	// (0x00045f9e) aid_main_viewer_pane_g1

0x3a7a,	// (0x00045fac) aid_main_viewer_pane_g2_ParamLimits

0x3a7a,	// (0x00045fac) aid_main_viewer_pane_g2

0x3a88,	// (0x00045fba) aid_main_viewer_pane_g3_ParamLimits

0x3a88,	// (0x00045fba) aid_main_viewer_pane_g3

0x3a97,	// (0x00045fc9) aid_main_viewer_pane_g4_ParamLimits

0x3a97,	// (0x00045fc9) aid_main_viewer_pane_g4

0x0003,

0xf4bd,	// (0x000519ef) aid_main_viewer_pane_g_ParamLimits

0xf4bd,	// (0x000519ef) aid_main_viewer_pane_g

0x43ef,	// (0x00046921) main_calc_pane_ParamLimits

0x4403,	// (0x00046935) main_dialer2_pane_ParamLimits

0xa67e,	// (0x0004cbb0) main_cam6_pane

0xa67e,	// (0x0004cbb0) main_vid6_pane

0x5af8,	// (0x0004802a) listscroll_gen_pane_cp06_ParamLimits

0x5af8,	// (0x0004802a) listscroll_gen_pane_cp06

0x5c0b,	// (0x0004813d) main_clock2_pane_t5_ParamLimits

0x5c0b,	// (0x0004813d) main_clock2_pane_t5

0x5c68,	// (0x0004819a) aid_call2_pane_cp10_ParamLimits

0x5c7a,	// (0x000481ac) aid_call_pane_cp10_ParamLimits

0xcf19,	// (0x0004f44b) popup_clock_analogue_window_cp10_g1_ParamLimits

0xcf19,	// (0x0004f44b) popup_clock_analogue_window_cp10_g2_ParamLimits

0x5c8c,	// (0x000481be) popup_clock_analogue_window_cp10_g3_ParamLimits

0x5c8c,	// (0x000481be) popup_clock_analogue_window_cp10_g4_ParamLimits

0xcf19,	// (0x0004f44b) popup_clock_analogue_window_cp10_g5_ParamLimits

0xf6b0,	// (0x00051be2) popup_clock_analogue_window_cp10_g_ParamLimits

0x5ca2,	// (0x000481d4) popup_clock_analogue_window_cp10_t1_ParamLimits

0x63cd,	// (0x000488ff) cell_dialer2_keypad_pane_g2_ParamLimits

0x63cd,	// (0x000488ff) cell_dialer2_keypad_pane_g2

0x0001,

0xf729,	// (0x00051c5b) cell_dialer2_keypad_pane_g_ParamLimits

0xf729,	// (0x00051c5b) cell_dialer2_keypad_pane_g

0x63e9,	// (0x0004891b) cell_dialer2_keypad_pane_t1

0x71d1,	// (0x00049703) main_cset_text2_pane_ParamLimits

0x71d1,	// (0x00049703) main_cset_text2_pane

0x7cd6,	// (0x0004a208) area_vitu2_query_pane_g1_ParamLimits

0x0ea0,	// (0x000433d2) area_vitu2_query_pane_g2_ParamLimits

0xf8d7,	// (0x00051e09) area_vitu2_query_pane_g_ParamLimits

0xb0ac,	// (0x0004d5de) area_vitu2_query_pane_t7_ParamLimits

0xb0ac,	// (0x0004d5de) area_vitu2_query_pane_t7

0x7d0a,	// (0x0004a23c) bg_button_pane_cp018_ParamLimits

0x7d18,	// (0x0004a24a) bg_button_pane_cp021_ParamLimits

0x0ed9,	// (0x0004340b) bg_button_pane_cp022_ParamLimits

0x0ed9,	// (0x0004340b) bg_vkb2_func_pane_cp08_ParamLimits

0x7d0a,	// (0x0004a23c) bg_vkb2_func_pane_cp06_ParamLimits

0x7d18,	// (0x0004a24a) bg_vkb2_func_pane_cp07_ParamLimits

0x0eea,	// (0x0004341c) input_focus_pane_cp09_ParamLimits

0xb1ca,	// (0x0004d6fc) cam6_autofocus_pane_ParamLimits

0xb1ca,	// (0x0004d6fc) cam6_autofocus_pane

0x83f2,	// (0x0004a924) cam6_image_uncrop_pane_ParamLimits

0x83f2,	// (0x0004a924) cam6_image_uncrop_pane

0x8401,	// (0x0004a933) cam6_indi_pane_ParamLimits

0x8401,	// (0x0004a933) cam6_indi_pane

0x8417,	// (0x0004a949) cam6_mode_pane_ParamLimits

0x8417,	// (0x0004a949) cam6_mode_pane

0x8429,	// (0x0004a95b) cam6_timer_pane_ParamLimits

0x8429,	// (0x0004a95b) cam6_timer_pane

0x8435,	// (0x0004a967) cam6_zoom_pane_ParamLimits

0x8435,	// (0x0004a967) cam6_zoom_pane

0x8443,	// (0x0004a975) cam6_mode_pane_g1_ParamLimits

0x8443,	// (0x0004a975) cam6_mode_pane_g1

0x8453,	// (0x0004a985) cam6_mode_pane_g2_ParamLimits

0x8453,	// (0x0004a985) cam6_mode_pane_g2

0x8463,	// (0x0004a995) cam6_mode_pane_g3_ParamLimits

0x8463,	// (0x0004a995) cam6_mode_pane_g3

0x8473,	// (0x0004a9a5) cam6_mode_pane_g4_ParamLimits

0x8473,	// (0x0004a9a5) cam6_mode_pane_g4

0x0003,

0xf9bf,	// (0x00051ef1) cam6_mode_pane_g_ParamLimits

0xf9bf,	// (0x00051ef1) cam6_mode_pane_g

0x8483,	// (0x0004a9b5) bg_tb_trans_pane_cp08_ParamLimits

0x8483,	// (0x0004a9b5) bg_tb_trans_pane_cp08

0x8491,	// (0x0004a9c3) cam6_battery_pane_ParamLimits

0x8491,	// (0x0004a9c3) cam6_battery_pane

0x84a7,	// (0x0004a9d9) cam6_indi_pane_g1_ParamLimits

0x84a7,	// (0x0004a9d9) cam6_indi_pane_g1

0x84b9,	// (0x0004a9eb) cam6_indi_pane_g2_ParamLimits

0x84b9,	// (0x0004a9eb) cam6_indi_pane_g2

0x84cb,	// (0x0004a9fd) cam6_indi_pane_g3_ParamLimits

0x84cb,	// (0x0004a9fd) cam6_indi_pane_g3

0x0002,

0xf9c8,	// (0x00051efa) cam6_indi_pane_g_ParamLimits

0xf9c8,	// (0x00051efa) cam6_indi_pane_g

0x84dd,	// (0x0004aa0f) cam6_indi_pane_t1_ParamLimits

0x84dd,	// (0x0004aa0f) cam6_indi_pane_t1

0x6a9d,	// (0x00048fcf) cam6_autofocus_pane_g1

0x6aa5,	// (0x00048fd7) cam6_autofocus_pane_g2

0x6aad,	// (0x00048fdf) cam6_autofocus_pane_g3

0x6ab5,	// (0x00048fe7) cam6_autofocus_pane_g4

0x0003,

0xf9cf,	// (0x00051f01) cam6_autofocus_pane_g

0x8503,	// (0x0004aa35) cam6_timer_pane_g1

0x850b,	// (0x0004aa3d) cam6_timer_pane_t1

0x8519,	// (0x0004aa4b) cam6_zoom_cont_pane

0x8521,	// (0x0004aa53) cam6_zoom_pane_g1

0x8529,	// (0x0004aa5b) cam6_zoom_pane_g2

0x8531,	// (0x0004aa63) cam6_zoom_pane_g3

0x0002,

0xf9d8,	// (0x00051f0a) cam6_zoom_pane_g

0xe896,	// (0x00050dc8) cam6_battery_pane_g1

0xe896,	// (0x00050dc8) cam6_battery_pane_g2

0x0001,

0x0277,	// (0x000427a9) cam6_battery_pane_g

0x8539,	// (0x0004aa6b) cam6_zoom_cont_pane_g1

0x8542,	// (0x0004aa74) cam6_zoom_cont_pane_g2

0x854b,	// (0x0004aa7d) cam6_zoom_cont_pane_g3

0x0002,

0xf9df,	// (0x00051f11) cam6_zoom_cont_pane_g

0x8568,	// (0x0004aa9a) cam6_mode_pane_cp_ParamLimits

0x8568,	// (0x0004aa9a) cam6_mode_pane_cp

0x8435,	// (0x0004a967) cam6_zoom_pane_cp_ParamLimits

0x8435,	// (0x0004a967) cam6_zoom_pane_cp

0x857a,	// (0x0004aaac) vid6_image_uncrop_cif_pane_ParamLimits

0x857a,	// (0x0004aaac) vid6_image_uncrop_cif_pane

0x858a,	// (0x0004aabc) vid6_image_uncrop_nhd_pane_ParamLimits

0x858a,	// (0x0004aabc) vid6_image_uncrop_nhd_pane

0x83f2,	// (0x0004a924) vid6_image_uncrop_vga_pane_ParamLimits

0x83f2,	// (0x0004a924) vid6_image_uncrop_vga_pane

0x85a9,	// (0x0004aadb) vid6_image_uncrop_wvga_pane_ParamLimits

0x85a9,	// (0x0004aadb) vid6_image_uncrop_wvga_pane

0x85b8,	// (0x0004aaea) vid6_indi_pane_ParamLimits

0x85b8,	// (0x0004aaea) vid6_indi_pane

0x8483,	// (0x0004a9b5) bg_tb_trans_pane_cp09_ParamLimits

0x8483,	// (0x0004a9b5) bg_tb_trans_pane_cp09

0x85d0,	// (0x0004ab02) cam6_battery_pane_cp_ParamLimits

0x85d0,	// (0x0004ab02) cam6_battery_pane_cp

0x85dc,	// (0x0004ab0e) vid6_indi_pane_g1_ParamLimits

0x85dc,	// (0x0004ab0e) vid6_indi_pane_g1

0x85ee,	// (0x0004ab20) vid6_indi_pane_g2_ParamLimits

0x85ee,	// (0x0004ab20) vid6_indi_pane_g2

0x8600,	// (0x0004ab32) vid6_indi_pane_g3_ParamLimits

0x8600,	// (0x0004ab32) vid6_indi_pane_g3

0x8617,	// (0x0004ab49) vid6_indi_pane_g4_ParamLimits

0x8617,	// (0x0004ab49) vid6_indi_pane_g4

0x862e,	// (0x0004ab60) vid6_indi_pane_g5_ParamLimits

0x862e,	// (0x0004ab60) vid6_indi_pane_g5

0x0004,

0xf9e6,	// (0x00051f18) vid6_indi_pane_g_ParamLimits

0xf9e6,	// (0x00051f18) vid6_indi_pane_g

0x8648,	// (0x0004ab7a) vid6_indi_pane_t1_ParamLimits

0x8648,	// (0x0004ab7a) vid6_indi_pane_t1

0x865e,	// (0x0004ab90) vid6_indi_pane_t2_ParamLimits

0x865e,	// (0x0004ab90) vid6_indi_pane_t2

0x8686,	// (0x0004abb8) vid6_indi_pane_t3_ParamLimits

0x8686,	// (0x0004abb8) vid6_indi_pane_t3

0x86ae,	// (0x0004abe0) vid6_indi_pane_t4_ParamLimits

0x86ae,	// (0x0004abe0) vid6_indi_pane_t4

0x0003,

0xf9f1,	// (0x00051f23) vid6_indi_pane_t_ParamLimits

0xf9f1,	// (0x00051f23) vid6_indi_pane_t

0x86d2,	// (0x0004ac04) wait_bar_pane_cp08

0x86e1,	// (0x0004ac13) main_cset_text2_pane_t1_ParamLimits

0x86e1,	// (0x0004ac13) main_cset_text2_pane_t1

0x8553,	// (0x0004aa85) listscroll_gen_pane_cp06_t1_ParamLimits

0x8553,	// (0x0004aa85) listscroll_gen_pane_cp06_t1

0xa67e,	// (0x0004cbb0) main_cam6_set_pane

0xeac6,	// (0x00050ff8) bg_tb_trans_pane_cp06_ParamLimits

0xaeee,	// (0x0004d420) cam4_indicators_pane_g1_ParamLimits

0xaefb,	// (0x0004d42d) cam4_indicators_pane_g2_ParamLimits

0xf766,	// (0x00051c98) cam4_indicators_pane_g_ParamLimits

0xaf1b,	// (0x0004d44d) cam4_indicators_pane_t1_ParamLimits

0xaf3f,	// (0x0004d471) bg_tb_trans_pane_cp07_ParamLimits

0x6a4c,	// (0x00048f7e) vid4_indicators_pane_g1_ParamLimits

0x6a59,	// (0x00048f8b) vid4_indicators_pane_g2_ParamLimits

0x6a66,	// (0x00048f98) vid4_indicators_pane_g3_ParamLimits

0x6a73,	// (0x00048fa5) vid4_indicators_pane_g4_ParamLimits

0xf778,	// (0x00051caa) vid4_indicators_pane_g_ParamLimits

0x6a8b,	// (0x00048fbd) vid4_indicators_pane_t1_ParamLimits

0xb0d8,	// (0x0004d60a) vid4_progress_pane_g1_ParamLimits

0xb0e4,	// (0x0004d616) vid4_progress_pane_g2_ParamLimits

0xb0f0,	// (0x0004d622) vid4_progress_pane_g3_ParamLimits

0xb0ff,	// (0x0004d631) vid4_progress_pane_g4_ParamLimits

0xf922,	// (0x00051e54) vid4_progress_pane_g_ParamLimits

0xb11d,	// (0x0004d64f) vid4_progress_pane_t1_ParamLimits

0xb133,	// (0x0004d665) vid4_progress_pane_t2_ParamLimits

0xb149,	// (0x0004d67b) vid4_progress_pane_t3_ParamLimits

0xf92d,	// (0x00051e5f) vid4_progress_pane_t_ParamLimits

0xb15e,	// (0x0004d690) wait_bar_pane_cp07_ParamLimits

0x8702,	// (0x0004ac34) main_cam6_set_pane_g2_ParamLimits

0x8702,	// (0x0004ac34) main_cam6_set_pane_g2

0x8728,	// (0x0004ac5a) main_cset6_listscroll_pane_ParamLimits

0x8728,	// (0x0004ac5a) main_cset6_listscroll_pane

0x8746,	// (0x0004ac78) main_cset6_slider_pane_ParamLimits

0x8746,	// (0x0004ac78) main_cset6_slider_pane

0x875c,	// (0x0004ac8e) main_cset6_text2_pane_ParamLimits

0x875c,	// (0x0004ac8e) main_cset6_text2_pane

0x876a,	// (0x0004ac9c) main_cset6_text_pane

0x8772,	// (0x0004aca4) main_cset_list_pane_copy1_ParamLimits

0x8772,	// (0x0004aca4) main_cset_list_pane_copy1

0x8782,	// (0x0004acb4) scroll_pane_cp028_copy1

0x878b,	// (0x0004acbd) cset_list_set_pane_copy1

0x879f,	// (0x0004acd1) aid_position_infowindow_above_copy1

0x87a7,	// (0x0004acd9) aid_position_infowindow_below_copy1

0x0efb,	// (0x0004342d) cset_list_set_pane_g1_copy1

0xb1d8,	// (0x0004d70a) cset_list_set_pane_g3_copy1_ParamLimits

0xb1d8,	// (0x0004d70a) cset_list_set_pane_g3_copy1

0x0f03,	// (0x00043435) cset_list_set_pane_t1_copy1_ParamLimits

0x0f03,	// (0x00043435) cset_list_set_pane_t1_copy1

0xa6f7,	// (0x0004cc29) list_highlight_pane_cp021_copy1_ParamLimits

0xa6f7,	// (0x0004cc29) list_highlight_pane_cp021_copy1

0x87af,	// (0x0004ace1) cset6_slider_pane_ParamLimits

0x87af,	// (0x0004ace1) cset6_slider_pane

0x87db,	// (0x0004ad0d) main_cset6_slider_pane_g1_ParamLimits

0x87db,	// (0x0004ad0d) main_cset6_slider_pane_g1

0x8803,	// (0x0004ad35) main_cset6_slider_pane_g2_ParamLimits

0x8803,	// (0x0004ad35) main_cset6_slider_pane_g2

0x882b,	// (0x0004ad5d) main_cset6_slider_pane_g3_ParamLimits

0x882b,	// (0x0004ad5d) main_cset6_slider_pane_g3

0x8837,	// (0x0004ad69) main_cset6_slider_pane_g4_ParamLimits

0x8837,	// (0x0004ad69) main_cset6_slider_pane_g4

0x8843,	// (0x0004ad75) main_cset6_slider_pane_g5_ParamLimits

0x8843,	// (0x0004ad75) main_cset6_slider_pane_g5

0x72ad,	// (0x000497df) main_cset6_slider_pane_g7_ParamLimits

0x72ad,	// (0x000497df) main_cset6_slider_pane_g7

0x72b9,	// (0x000497eb) main_cset6_slider_pane_g8_ParamLimits

0x72b9,	// (0x000497eb) main_cset6_slider_pane_g8

0x72c5,	// (0x000497f7) main_cset6_slider_pane_g9_ParamLimits

0x72c5,	// (0x000497f7) main_cset6_slider_pane_g9

0x72d1,	// (0x00049803) main_cset6_slider_pane_g10_ParamLimits

0x72d1,	// (0x00049803) main_cset6_slider_pane_g10

0x72dd,	// (0x0004980f) main_cset6_slider_pane_g11_ParamLimits

0x72dd,	// (0x0004980f) main_cset6_slider_pane_g11

0x72e9,	// (0x0004981b) main_cset6_slider_pane_g12_ParamLimits

0x72e9,	// (0x0004981b) main_cset6_slider_pane_g12

0x72f5,	// (0x00049827) main_cset6_slider_pane_g13_ParamLimits

0x72f5,	// (0x00049827) main_cset6_slider_pane_g13

0x7301,	// (0x00049833) main_cset6_slider_pane_g14_ParamLimits

0x7301,	// (0x00049833) main_cset6_slider_pane_g14

0x8851,	// (0x0004ad83) main_cset6_slider_pane_g15_ParamLimits

0x8851,	// (0x0004ad83) main_cset6_slider_pane_g15

0x7325,	// (0x00049857) main_cset6_slider_pane_g16_ParamLimits

0x7325,	// (0x00049857) main_cset6_slider_pane_g16

0x7333,	// (0x00049865) main_cset6_slider_pane_g17_ParamLimits

0x7333,	// (0x00049865) main_cset6_slider_pane_g17

0x0011,

0xf9fa,	// (0x00051f2c) main_cset6_slider_pane_g_ParamLimits

0xf9fa,	// (0x00051f2c) main_cset6_slider_pane_g

0x8881,	// (0x0004adb3) main_cset6_slider_pane_t1_ParamLimits

0x8881,	// (0x0004adb3) main_cset6_slider_pane_t1

0x88c2,	// (0x0004adf4) main_cset6_slider_pane_t2_ParamLimits

0x88c2,	// (0x0004adf4) main_cset6_slider_pane_t2

0x88ed,	// (0x0004ae1f) main_cset6_slider_pane_t3_ParamLimits

0x88ed,	// (0x0004ae1f) main_cset6_slider_pane_t3

0x8918,	// (0x0004ae4a) main_cset6_slider_pane_t4_ParamLimits

0x8918,	// (0x0004ae4a) main_cset6_slider_pane_t4

0x8945,	// (0x0004ae77) main_cset6_slider_pane_t5_ParamLimits

0x8945,	// (0x0004ae77) main_cset6_slider_pane_t5

0x8972,	// (0x0004aea4) main_cset6_slider_pane_t7_ParamLimits

0x8972,	// (0x0004aea4) main_cset6_slider_pane_t7

0x89a8,	// (0x0004aeda) main_cset6_slider_pane_t8_ParamLimits

0x89a8,	// (0x0004aeda) main_cset6_slider_pane_t8

0x89cc,	// (0x0004aefe) main_cset6_slider_pane_t9_ParamLimits

0x89cc,	// (0x0004aefe) main_cset6_slider_pane_t9

0x89f0,	// (0x0004af22) main_cset6_slider_pane_t10_ParamLimits

0x89f0,	// (0x0004af22) main_cset6_slider_pane_t10

0x8a14,	// (0x0004af46) main_cset6_slider_pane_t11_ParamLimits

0x8a14,	// (0x0004af46) main_cset6_slider_pane_t11

0x8a3a,	// (0x0004af6c) main_cset6_slider_pane_t14_ParamLimits

0x8a3a,	// (0x0004af6c) main_cset6_slider_pane_t14

0x8a73,	// (0x0004afa5) main_cset6_slider_pane_t15_ParamLimits

0x8a73,	// (0x0004afa5) main_cset6_slider_pane_t15

0x000b,

0xfa1f,	// (0x00051f51) main_cset6_slider_pane_t_ParamLimits

0xfa1f,	// (0x00051f51) main_cset6_slider_pane_t

0x75a8,	// (0x00049ada) cset_slider_pane_g1_copy1

0x75b1,	// (0x00049ae3) cset_slider_pane_g2_copy1

0x75ba,	// (0x00049aec) cset_slider_pane_g3_copy1

0xa67e,	// (0x0004cbb0) bg_popup_sub_pane_cp011_copy1

0x7965,	// (0x00049e97) main_cset_text_pane_g1_copy1

0x796d,	// (0x00049e9f) main_cset_text_pane_t1_copy1

0x797b,	// (0x00049ead) main_cset_text_pane_t2_copy1

0x7989,	// (0x00049ebb) main_cset_text_pane_t3_copy1

0x7997,	// (0x00049ec9) main_cset_text_pane_t4_copy1

0x79a5,	// (0x00049ed7) main_cset_text_pane_t5_copy1

0x79b3,	// (0x00049ee5) main_cset_text_pane_t6_copy1

0x79c1,	// (0x00049ef3) main_cset_text_pane_t7_copy1

0x86e1,	// (0x0004ac13) main_cset_text2_pane_t1_copy1

0xa67e,	// (0x0004cbb0) main_ncimui_pane

0x4691,	// (0x00046bc3) popup_query_ncimui_window_ParamLimits

0x4691,	// (0x00046bc3) popup_query_ncimui_window

0xac37,	// (0x0004d169) field_cale_ev2_pane_g4_ParamLimits

0xac37,	// (0x0004d169) field_cale_ev2_pane_g4

0x6214,	// (0x00048746) cell_video_dialer_keypad_pane_g2_ParamLimits

0x6214,	// (0x00048746) cell_video_dialer_keypad_pane_g2

0x0001,

0xf704,	// (0x00051c36) cell_video_dialer_keypad_pane_g_ParamLimits

0xf704,	// (0x00051c36) cell_video_dialer_keypad_pane_g

0x622c,	// (0x0004875e) cell_video_dialer_keypad_pane_t1

0xa67e,	// (0x0004cbb0) bg_popup_window_pane_cp012

0xcd88,	// (0x0004f2ba) heading_pane_cp06

0x8bc3,	// (0x0004b0f5) ncim_query_content_pane

0xa67e,	// (0x0004cbb0) bg_popup_heading_pane_cp01

0x8bcb,	// (0x0004b0fd) ncim_heading_pane_t1

0x8bd9,	// (0x0004b10b) ncim_indicator_popup_pane

0x8beb,	// (0x0004b11d) ncim_query_button_pane

0x8c0d,	// (0x0004b13f) ncim_query_content_pane_t1

0x8c1f,	// (0x0004b151) ncim_query_content_pane_t2

0x0005,

0xfa5e,	// (0x00051f90) ncim_query_content_pane_t

0x8cd1,	// (0x0004b203) ncim_query_list_pane

0x8ce3,	// (0x0004b215) ncim_query_popup_pane

0x8bd9,	// (0x0004b10b) ncim_indicator_popup_pane_ParamLimits

0x8bf3,	// (0x0004b125) ncim_query_content_pane_g1_ParamLimits

0x8bf3,	// (0x0004b125) ncim_query_content_pane_g1

0x8c0d,	// (0x0004b13f) ncim_query_content_pane_t1_ParamLimits

0x8c1f,	// (0x0004b151) ncim_query_content_pane_t2_ParamLimits

0x8c31,	// (0x0004b163) ncim_query_content_pane_t3_ParamLimits

0x8c31,	// (0x0004b163) ncim_query_content_pane_t3

0x8c59,	// (0x0004b18b) ncim_query_content_pane_t4_ParamLimits

0x8c59,	// (0x0004b18b) ncim_query_content_pane_t4

0x8c81,	// (0x0004b1b3) ncim_query_content_pane_t5_ParamLimits

0x8c81,	// (0x0004b1b3) ncim_query_content_pane_t5

0x8ca9,	// (0x0004b1db) ncim_query_content_pane_t6_ParamLimits

0x8ca9,	// (0x0004b1db) ncim_query_content_pane_t6

0xfa5e,	// (0x00051f90) ncim_query_content_pane_t_ParamLimits

0x8cd1,	// (0x0004b203) ncim_query_list_pane_ParamLimits

0x8ce3,	// (0x0004b215) ncim_query_popup_pane_ParamLimits

0x8cf7,	// (0x0004b229) wait_bar_pane_cp04

0xa67e,	// (0x0004cbb0) input_focus_pane_cp011

0x8cff,	// (0x0004b231) ncim_query_popup_pane_t1

0x8d0d,	// (0x0004b23f) ncim_list_query_list_pane_ParamLimits

0x8d0d,	// (0x0004b23f) ncim_list_query_list_pane

0xa67e,	// (0x0004cbb0) bg_button_pane_cp027

0x8d20,	// (0x0004b252) ncim_query_button_pane_g1

0xa67e,	// (0x0004cbb0) list_highlight_pane_cp012

0x8d2a,	// (0x0004b25c) ncim_list_query_list_pane_g1

0x8d32,	// (0x0004b264) ncim_list_query_list_pane_t1

0xaf0b,	// (0x0004d43d) cam4_indicators_pane_g3_ParamLimits

0xaf0b,	// (0x0004d43d) cam4_indicators_pane_g3

0x6a7f,	// (0x00048fb1) vid4_indicators_pane_g5_ParamLimits

0x6a7f,	// (0x00048fb1) vid4_indicators_pane_g5

0xb10e,	// (0x0004d640) vid4_progress_pane_g5_ParamLimits

0xb10e,	// (0x0004d640) vid4_progress_pane_g5

0x8adc,	// (0x0004b00e) main_ncimui_pane_g1

0x8b32,	// (0x0004b064) ncimui_group_query_pane_ParamLimits

0x8b32,	// (0x0004b064) ncimui_group_query_pane

0x8b6e,	// (0x0004b0a0) ncimui_list_pane_ParamLimits

0x8b6e,	// (0x0004b0a0) ncimui_list_pane

0x8b8f,	// (0x0004b0c1) ncimui_text_pane_ParamLimits

0x8b8f,	// (0x0004b0c1) ncimui_text_pane

0x8d40,	// (0x0004b272) ncimui_text_pane_t1_ParamLimits

0x8d40,	// (0x0004b272) ncimui_text_pane_t1

0x8d5e,	// (0x0004b290) ncimui_list_single_graphic_pane_ParamLimits

0x8d5e,	// (0x0004b290) ncimui_list_single_graphic_pane

0x8d6e,	// (0x0004b2a0) ncimui_query_pane_ParamLimits

0x8d6e,	// (0x0004b2a0) ncimui_query_pane

0xa67e,	// (0x0004cbb0) list_highlight_pane_cp013

0x8d81,	// (0x0004b2b3) ncim_list_query_list_pane_t1_copy1

0x8d2a,	// (0x0004b25c) ncim_list_single_graphic_pane_g1

0x8d8f,	// (0x0004b2c1) ncim_query_button_pane_cp01

0x8d9b,	// (0x0004b2cd) ncim_query_entry_pane_ParamLimits

0x8d9b,	// (0x0004b2cd) ncim_query_entry_pane

0x8dae,	// (0x0004b2e0) ncimui_query_pane_g1

0x8dba,	// (0x0004b2ec) ncimui_query_pane_t1_ParamLimits

0x8dba,	// (0x0004b2ec) ncimui_query_pane_t1

0xa6f7,	// (0x0004cc29) input_focus_pane_cp012

0x8dd3,	// (0x0004b305) ncim_query_entry_pane_t1

0xc590,	// (0x0004eac2) main_im_pane_ParamLimits

0xa6f7,	// (0x0004cc29) main_mobtv_pane_ParamLimits

0xa6f7,	// (0x0004cc29) main_mobtv_pane

0x8869,	// (0x0004ad9b) main_cset6_slider_pane_g18_ParamLimits

0x8869,	// (0x0004ad9b) main_cset6_slider_pane_g18

0x8875,	// (0x0004ada7) main_cset6_slider_pane_g19_ParamLimits

0x8875,	// (0x0004ada7) main_cset6_slider_pane_g19

0x8de5,	// (0x0004b317) bg_main_mobtv_pane_ParamLimits

0x8de5,	// (0x0004b317) bg_main_mobtv_pane

0x8df3,	// (0x0004b325) main_mobtv_info_pane

0x8dfe,	// (0x0004b330) main_mobtv_loading_pane_ParamLimits

0x8dfe,	// (0x0004b330) main_mobtv_loading_pane

0x8e0b,	// (0x0004b33d) main_mobtv_pg_channel_list_pane

0x8e15,	// (0x0004b347) main_mobtv_pg_hdr_pane

0x8e1e,	// (0x0004b350) main_mobtv_programe_curr_pane_ParamLimits

0x8e1e,	// (0x0004b350) main_mobtv_programe_curr_pane

0x8e2b,	// (0x0004b35d) main_mobtv_programe_next_pane_ParamLimits

0x8e2b,	// (0x0004b35d) main_mobtv_programe_next_pane

0x8e38,	// (0x0004b36a) popup_mobtv_noti_window

0xe896,	// (0x00050dc8) main_tv_pg_hdr_pane_g1

0x8e42,	// (0x0004b374) main_tv_pg_hdr_pane_g2

0x8e4a,	// (0x0004b37c) main_tv_pg_hdr_pane_g3

0x8e52,	// (0x0004b384) main_tv_pg_hdr_pane_g4

0x8e5a,	// (0x0004b38c) main_tv_pg_hdr_pane_g5

0x8e64,	// (0x0004b396) main_tv_pg_hdr_pane_g6

0x8e6e,	// (0x0004b3a0) main_tv_pg_hdr_pane_g7

0x8e78,	// (0x0004b3aa) main_tv_pg_hdr_pane_g8

0x8e82,	// (0x0004b3b4) main_tv_pg_hdr_pane_g9

0x8e8c,	// (0x0004b3be) main_tv_pg_hdr_pane_g10

0x8e96,	// (0x0004b3c8) main_tv_pg_hdr_pane_g11

0x000a,

0xfa6b,	// (0x00051f9d) main_tv_pg_hdr_pane_g

0x8ea0,	// (0x0004b3d2) main_tv_pg_hdr_pane_t1

0x8eae,	// (0x0004b3e0) main_tv_pg_hdr_pane_t2

0x8ebc,	// (0x0004b3ee) main_tv_pg_hdr_pane_t3

0x8ecc,	// (0x0004b3fe) main_tv_pg_hdr_pane_t4

0x8edc,	// (0x0004b40e) main_tv_pg_hdr_pane_t5

0x0004,

0xfa82,	// (0x00051fb4) main_tv_pg_hdr_pane_t

0x8eec,	// (0x0004b41e) single_mobtv_pg_channel_pane_ParamLimits

0x8eec,	// (0x0004b41e) single_mobtv_pg_channel_pane

0x8efe,	// (0x0004b430) single_mobtv_pg_channel_table_pane

0x8f07,	// (0x0004b439) single_mobtv_pg_channel_thumb_pane

0x8f10,	// (0x0004b442) single_tv_pg_channel_pane_g1

0x8f19,	// (0x0004b44b) single_tv_pg_channel_pane_g2

0x0001,

0xfa8d,	// (0x00051fbf) single_tv_pg_channel_pane_g

0xeac6,	// (0x00050ff8) bg_single_mobtv_pg_channel_thumb_pane_ParamLimits

0xeac6,	// (0x00050ff8) bg_single_mobtv_pg_channel_thumb_pane

0x8f22,	// (0x0004b454) single_mobtv_pg_channel_thumb_pane_g1_ParamLimits

0x8f22,	// (0x0004b454) single_mobtv_pg_channel_thumb_pane_g1

0x8f30,	// (0x0004b462) single_mobtv_pg_channel_thumb_pane_g2_ParamLimits

0x8f30,	// (0x0004b462) single_mobtv_pg_channel_thumb_pane_g2

0x8f3c,	// (0x0004b46e) single_mobtv_pg_channel_thumb_pane_g3_ParamLimits

0x8f3c,	// (0x0004b46e) single_mobtv_pg_channel_thumb_pane_g3

0x0002,

0xfa92,	// (0x00051fc4) single_mobtv_pg_channel_thumb_pane_g_ParamLimits

0xfa92,	// (0x00051fc4) single_mobtv_pg_channel_thumb_pane_g

0x8f48,	// (0x0004b47a) single_mobtv_pg_channel_thumb_pane_t1

0x8f56,	// (0x0004b488) single_mobtv_pg_channel_thumb_pane_t2

0x0001,

0xfa99,	// (0x00051fcb) single_mobtv_pg_channel_thumb_pane_t

0xe896,	// (0x00050dc8) bg_single_mobtv_pg_channel_table_pane_g1

0xe896,	// (0x00050dc8) bg_single_mobtv_pg_channel_table_pane_g2

0x0001,

0x0277,	// (0x000427a9) bg_single_mobtv_pg_channel_table_pane_g

0x8f64,	// (0x0004b496) single_mobtv_pg_channel_table_pane_t1

0x8f72,	// (0x0004b4a4) single_mobtv_pg_channel_table_pane_t2

0x0001,

0xfa9e,	// (0x00051fd0) single_mobtv_pg_channel_table_pane_t

0x8f88,	// (0x0004b4ba) main_mobtv_info_pane_g1_ParamLimits

0x8f88,	// (0x0004b4ba) main_mobtv_info_pane_g1

0x8fa6,	// (0x0004b4d8) main_mobtv_info_pane_t1_ParamLimits

0x8fa6,	// (0x0004b4d8) main_mobtv_info_pane_t1

0x901e,	// (0x0004b550) main_mobtv_info_pane_t2_ParamLimits

0x901e,	// (0x0004b550) main_mobtv_info_pane_t2

0x0002,

0xfaa8,	// (0x00051fda) main_mobtv_info_pane_t_ParamLimits

0xfaa8,	// (0x00051fda) main_mobtv_info_pane_t

0x90af,	// (0x0004b5e1) wait_bar_pane_cp05

0x90c1,	// (0x0004b5f3) main_mobtv_loading_pane_g1_ParamLimits

0x90c1,	// (0x0004b5f3) main_mobtv_loading_pane_g1

0x90d2,	// (0x0004b604) main_mobtv_loading_pane_g2_ParamLimits

0x90d2,	// (0x0004b604) main_mobtv_loading_pane_g2

0x90de,	// (0x0004b610) main_mobtv_loading_pane_g3_ParamLimits

0x90de,	// (0x0004b610) main_mobtv_loading_pane_g3

0x0002,

0xfaaf,	// (0x00051fe1) main_mobtv_loading_pane_g_ParamLimits

0xfaaf,	// (0x00051fe1) main_mobtv_loading_pane_g

0x90f1,	// (0x0004b623) main_mobtv_loading_pane_t1_ParamLimits

0x90f1,	// (0x0004b623) main_mobtv_loading_pane_t1

0x9109,	// (0x0004b63b) main_mobtv_loading_pane_t2_ParamLimits

0x9109,	// (0x0004b63b) main_mobtv_loading_pane_t2

0x0001,

0xfab6,	// (0x00051fe8) main_mobtv_loading_pane_t_ParamLimits

0xfab6,	// (0x00051fe8) main_mobtv_loading_pane_t

0x912d,	// (0x0004b65f) wait_bar_pane_cp06_ParamLimits

0x912d,	// (0x0004b65f) wait_bar_pane_cp06

0x913c,	// (0x0004b66e) main_mobtv_programe_curr_pane_t1

0x914a,	// (0x0004b67c) main_mobtv_programe_curr_pane_t2

0x0001,

0xfabb,	// (0x00051fed) main_mobtv_programe_curr_pane_t

0x9158,	// (0x0004b68a) main_mobtv_programe_next_pane_t1

0x9166,	// (0x0004b698) main_mobtv_programe_next_pane_t2

0x9174,	// (0x0004b6a6) main_mobtv_programe_next_pane_t3

0x0002,

0xfac0,	// (0x00051ff2) main_mobtv_programe_next_pane_t

0xa67e,	// (0x0004cbb0) bg_popup_mobtv_noti_window_pane

0x9182,	// (0x0004b6b4) popup_mobtv_noti_window_g1

0x918a,	// (0x0004b6bc) popup_mobtv_noti_window_t1

0x9198,	// (0x0004b6ca) popup_mobtv_noti_window_t2

0x0001,

0xfac7,	// (0x00051ff9) popup_mobtv_noti_window_t

0xe896,	// (0x00050dc8) bg_popup_mobtv_noti_window_pane_g1

0xa67e,	// (0x0004cbb0) sc_clock_pane

0xa67e,	// (0x0004cbb0) main_fs_bigclock_pane

0x81b2,	// (0x0004a6e4) blid2_tripm_pane_t4_ParamLimits

0x81b2,	// (0x0004a6e4) blid2_tripm_pane_t4

0x91a6,	// (0x0004b6d8) sc_clock_pane_g1_ParamLimits

0x91a6,	// (0x0004b6d8) sc_clock_pane_g1

0x91b8,	// (0x0004b6ea) sc_clock_pane_t1_ParamLimits

0x91b8,	// (0x0004b6ea) sc_clock_pane_t1

0x91dc,	// (0x0004b70e) sc_clock_pane_t2_ParamLimits

0x91dc,	// (0x0004b70e) sc_clock_pane_t2

0x91f4,	// (0x0004b726) sc_clock_pane_t3_ParamLimits

0x91f4,	// (0x0004b726) sc_clock_pane_t3

0x0004,

0xfacc,	// (0x00051ffe) sc_clock_pane_t_ParamLimits

0xfacc,	// (0x00051ffe) sc_clock_pane_t

0x9e85,	// (0x0004c3b7) main_fs_bigclock_indicator_pane_ParamLimits

0x9e85,	// (0x0004c3b7) main_fs_bigclock_indicator_pane

0xea96,	// (0x00050fc8) main_fs_bigclock_pane_g1_ParamLimits

0xea96,	// (0x00050fc8) main_fs_bigclock_pane_g1

0x9e91,	// (0x0004c3c3) main_fs_bigclock_pane_t1_ParamLimits

0x9e91,	// (0x0004c3c3) main_fs_bigclock_pane_t1

0x9ea3,	// (0x0004c3d5) main_fs_bigclock_pane_t2_ParamLimits

0x9ea3,	// (0x0004c3d5) main_fs_bigclock_pane_t2

0x9eb7,	// (0x0004c3e9) main_fs_bigclock_pane_t3_ParamLimits

0x9eb7,	// (0x0004c3e9) main_fs_bigclock_pane_t3

0x0002,

0xfccb,	// (0x000521fd) main_fs_bigclock_pane_t_ParamLimits

0xfccb,	// (0x000521fd) main_fs_bigclock_pane_t

0xbb19,	// (0x0004e04b) main_fs_bigclock_indicator_pane_g1

0x8bff,	// (0x0004b131) ncim_query_content_pane_g2_ParamLimits

0x8bff,	// (0x0004b131) ncim_query_content_pane_g2

0x0001,

0xfa59,	// (0x00051f8b) ncim_query_content_pane_g_ParamLimits

0xfa59,	// (0x00051f8b) ncim_query_content_pane_g

0x920b,	// (0x0004b73d) sc_clock_pane_t4_ParamLimits

0x920b,	// (0x0004b73d) sc_clock_pane_t4

0xa6f7,	// (0x0004cc29) main_radioblah_pane

0x6803,	// (0x00048d35) cell_call4_button_pane_t1_copy1_ParamLimits

0x6803,	// (0x00048d35) cell_call4_button_pane_t1_copy1

0x8ae4,	// (0x0004b016) main_ncimui_pane_t1_ParamLimits

0x8ae4,	// (0x0004b016) main_ncimui_pane_t1

0x8afe,	// (0x0004b030) main_ncimui_pane_t2_ParamLimits

0x8afe,	// (0x0004b030) main_ncimui_pane_t2

0x0002,

0xfa52,	// (0x00051f84) main_ncimui_pane_t_ParamLimits

0xfa52,	// (0x00051f84) main_ncimui_pane_t

0x93d2,	// (0x0004b904) main_radioblah_anim_pane_ParamLimits

0x93d2,	// (0x0004b904) main_radioblah_anim_pane

0x93e3,	// (0x0004b915) main_radioblah_info_pane_ParamLimits

0x93e3,	// (0x0004b915) main_radioblah_info_pane

0x9409,	// (0x0004b93b) main_radioblah_pane_t1_ParamLimits

0x9409,	// (0x0004b93b) main_radioblah_pane_t1

0x9425,	// (0x0004b957) main_radioblah_pane_t2_ParamLimits

0x9425,	// (0x0004b957) main_radioblah_pane_t2

0x0003,

0xfaed,	// (0x0005201f) main_radioblah_pane_t_ParamLimits

0xfaed,	// (0x0005201f) main_radioblah_pane_t

0x946d,	// (0x0004b99f) main_radioblah_rocker_ctrl_pane_ParamLimits

0x946d,	// (0x0004b99f) main_radioblah_rocker_ctrl_pane

0x94c5,	// (0x0004b9f7) main_radioblah_info_pane_t1_ParamLimits

0x94c5,	// (0x0004b9f7) main_radioblah_info_pane_t1

0x94ff,	// (0x0004ba31) main_radioblah_info_pane_t2_ParamLimits

0x94ff,	// (0x0004ba31) main_radioblah_info_pane_t2

0x0003,

0xfaf6,	// (0x00052028) main_radioblah_info_pane_t_ParamLimits

0xfaf6,	// (0x00052028) main_radioblah_info_pane_t

0xe896,	// (0x00050dc8) main_radioblah_rocker_ctrl_pane_g1

0x95af,	// (0x0004bae1) main_radioblah_rocker_ctrl_pane_g2

0x95b7,	// (0x0004bae9) main_radioblah_rocker_ctrl_pane_g3

0x95bf,	// (0x0004baf1) main_radioblah_rocker_ctrl_pane_g4

0x95c7,	// (0x0004baf9) main_radioblah_rocker_ctrl_pane_g5

0x95cf,	// (0x0004bb01) main_radioblah_rocker_ctrl_pane_g6

0x0005,

0xfaff,	// (0x00052031) main_radioblah_rocker_ctrl_pane_g

0x86e1,	// (0x0004ac13) main_cset_text2_pane_t1_copy1_ParamLimits

0xaedc,	// (0x0004d40e) cam4_image_uncrop_qvga_pane

0xaf35,	// (0x0004d467) vid4_image_uncrop_qcif_pane

0xb1ca,	// (0x0004d6fc) cam6_image_uncrop_qvga_pane_ParamLimits

0xb1ca,	// (0x0004d6fc) cam6_image_uncrop_qvga_pane

0x8599,	// (0x0004aacb) vid6_image_uncrop_qcif_pane_ParamLimits

0x8599,	// (0x0004aacb) vid6_image_uncrop_qcif_pane

0xa67e,	// (0x0004cbb0) bg_popup_preview_window_pane_cp03

0x8aac,	// (0x0004afde) list_cset_text2_pane

0x8ab4,	// (0x0004afe6) main_cset6_text2_pane_g1

0x8abc,	// (0x0004afee) main_cset6_text2_pane_t1

0x95d7,	// (0x0004bb09) list_cset_text2_pane_t1_ParamLimits

0x95d7,	// (0x0004bb09) list_cset_text2_pane_t1

0xa6f7,	// (0x0004cc29) main_radioblah_pane_ParamLimits

0x909b,	// (0x0004b5cd) main_mobtv_info_pane_t3_ParamLimits

0x909b,	// (0x0004b5cd) main_mobtv_info_pane_t3

0x93f7,	// (0x0004b929) main_radioblah_pane_g1

0x9495,	// (0x0004b9c7) main_radioblah_info_pane_g1

0x9554,	// (0x0004ba86) main_radioblah_info_pane_t3_ParamLimits

0x9554,	// (0x0004ba86) main_radioblah_info_pane_t3

0x2fd5,	// (0x00045507) highlight_cell_cale_month_pane_ParamLimits

0x2fd5,	// (0x00045507) highlight_cell_cale_month_pane

0xa67e,	// (0x0004cbb0) main_phob_fisheye_pane

0xeba8,	// (0x000510da) scroll_pane_cp0031_ParamLimits

0xeba8,	// (0x000510da) scroll_pane_cp0031

0x86d2,	// (0x0004ac04) wait_bar_pane_cp08_ParamLimits

0x878b,	// (0x0004acbd) cset_list_set_pane_copy1_ParamLimits

0x95f1,	// (0x0004bb23) highlight_cell_cale_month_pane_g1

0x95f9,	// (0x0004bb2b) highlight_cell_cale_month_pane_t1

0x7dea,	// (0x0004a31c) list_gen_pane_cp01

0x71f7,	// (0x00049729) scroll_pane_01

0x9607,	// (0x0004bb39) list_single_double_fisheye_pane

0x0f18,	// (0x0004344a) list_double_fisheye_pane_g1_ParamLimits

0x0f18,	// (0x0004344a) list_double_fisheye_pane_g1

0x0f24,	// (0x00043456) list_double_fisheye_pane_g2_ParamLimits

0x0f24,	// (0x00043456) list_double_fisheye_pane_g2

0x9610,	// (0x0004bb42) list_double_fisheye_pane_g3_ParamLimits

0x9610,	// (0x0004bb42) list_double_fisheye_pane_g3

0x0004,

0xfb0c,	// (0x0005203e) list_double_fisheye_pane_g_ParamLimits

0xfb0c,	// (0x0005203e) list_double_fisheye_pane_g

0x0f55,	// (0x00043487) list_double_fisheye_pane_t1_ParamLimits

0x0f55,	// (0x00043487) list_double_fisheye_pane_t1

0x0f70,	// (0x000434a2) list_double_fisheye_pane_t2_ParamLimits

0x0f70,	// (0x000434a2) list_double_fisheye_pane_t2

0x0001,

0xfb17,	// (0x00052049) list_double_fisheye_pane_t_ParamLimits

0xfb17,	// (0x00052049) list_double_fisheye_pane_t

0xa67e,	// (0x0004cbb0) main_call5_pane

0x9236,	// (0x0004b768) sc_swipe_pane_ParamLimits

0x9236,	// (0x0004b768) sc_swipe_pane

0x962f,	// (0x0004bb61) call5_image_pane_ParamLimits

0x962f,	// (0x0004bb61) call5_image_pane

0x964c,	// (0x0004bb7e) call5_swipe_1_pane_ParamLimits

0x964c,	// (0x0004bb7e) call5_swipe_1_pane

0x965f,	// (0x0004bb91) call5_swipe_2_pane_ParamLimits

0x965f,	// (0x0004bb91) call5_swipe_2_pane

0x968c,	// (0x0004bbbe) popup_call5_audio_first_window_ParamLimits

0x968c,	// (0x0004bbbe) popup_call5_audio_first_window

0xeac6,	// (0x00050ff8) call5_swipe_1_pane_g1_ParamLimits

0xeac6,	// (0x00050ff8) call5_swipe_1_pane_g1

0x96a1,	// (0x0004bbd3) call5_swipe_1_pane_g2_ParamLimits

0x96a1,	// (0x0004bbd3) call5_swipe_1_pane_g2

0x0001,

0xfb1c,	// (0x0005204e) call5_swipe_1_pane_g_ParamLimits

0xfb1c,	// (0x0005204e) call5_swipe_1_pane_g

0x96ad,	// (0x0004bbdf) call5_swipe_1_pane_t1_ParamLimits

0x96ad,	// (0x0004bbdf) call5_swipe_1_pane_t1

0xeac6,	// (0x00050ff8) call5_swipe_2_pane_g1_ParamLimits

0xeac6,	// (0x00050ff8) call5_swipe_2_pane_g1

0x96c2,	// (0x0004bbf4) call5_swipe_2_pane_g2_ParamLimits

0x96c2,	// (0x0004bbf4) call5_swipe_2_pane_g2

0x0001,

0xfb21,	// (0x00052053) call5_swipe_2_pane_g_ParamLimits

0xfb21,	// (0x00052053) call5_swipe_2_pane_g

0x96ce,	// (0x0004bc00) call5_swipe_2_pane_t1_ParamLimits

0x96ce,	// (0x0004bc00) call5_swipe_2_pane_t1

0x96e3,	// (0x0004bc15) sc_swipe_pane_g1_ParamLimits

0x96e3,	// (0x0004bc15) sc_swipe_pane_g1

0x96f0,	// (0x0004bc22) sc_swipe_pane_g2_ParamLimits

0x96f0,	// (0x0004bc22) sc_swipe_pane_g2

0x0001,

0xfb26,	// (0x00052058) sc_swipe_pane_g_ParamLimits

0xfb26,	// (0x00052058) sc_swipe_pane_g

0x96fc,	// (0x0004bc2e) sc_swipe_pane_t1_ParamLimits

0x96fc,	// (0x0004bc2e) sc_swipe_pane_t1

0xa67e,	// (0x0004cbb0) main_cmail_launcher_pane

0x9711,	// (0x0004bc43) aid_size_cell_cmail_l_ParamLimits

0x9711,	// (0x0004bc43) aid_size_cell_cmail_l

0x972b,	// (0x0004bc5d) grid_cmail_l_pane_ParamLimits

0x972b,	// (0x0004bc5d) grid_cmail_l_pane

0x9747,	// (0x0004bc79) cell_cmail_l_pane_ParamLimits

0x9747,	// (0x0004bc79) cell_cmail_l_pane

0x976f,	// (0x0004bca1) cell_cmail_l_pane_g1_ParamLimits

0x976f,	// (0x0004bca1) cell_cmail_l_pane_g1

0x977b,	// (0x0004bcad) cell_cmail_l_pane_t1_ParamLimits

0x977b,	// (0x0004bcad) cell_cmail_l_pane_t1

0x9791,	// (0x0004bcc3) cell_cmail_l_pane_t2_ParamLimits

0x9791,	// (0x0004bcc3) cell_cmail_l_pane_t2

0x0001,

0xfb2b,	// (0x0005205d) cell_cmail_l_pane_t_ParamLimits

0xfb2b,	// (0x0005205d) cell_cmail_l_pane_t

0xa6f7,	// (0x0004cc29) grid_highlight_pane_cp018_ParamLimits

0xa6f7,	// (0x0004cc29) grid_highlight_pane_cp018

0x162d,	// (0x00043b5f) main2_pane_ParamLimits

0x162d,	// (0x00043b5f) main2_pane

0xc63b,	// (0x0004eb6d) popup_sp_fs_action_menu_bg_pane_g1

0xc643,	// (0x0004eb75) popup_sp_fs_action_menu_bg_pane_g2

0xc64b,	// (0x0004eb7d) popup_sp_fs_action_menu_bg_pane_g3

0xc653,	// (0x0004eb85) popup_sp_fs_action_menu_bg_pane_g4

0xc65b,	// (0x0004eb8d) popup_sp_fs_action_menu_bg_pane_g5

0xc663,	// (0x0004eb95) popup_sp_fs_action_menu_bg_pane_g6

0xc66b,	// (0x0004eb9d) popup_sp_fs_action_menu_bg_pane_g7

0xc673,	// (0x0004eba5) popup_sp_fs_action_menu_bg_pane_g8

0xc67b,	// (0x0004ebad) popup_sp_fs_action_menu_bg_pane_g9

0xc683,	// (0x0004ebb5) popup_sp_fs_action_menu_bg_pane_g10

0xc683,	// (0x0004ebb5) popup_sp_fs_action_menu_bg_pane_g11

0x000a,

0xf1ac,	// (0x000516de) popup_sp_fs_action_menu_bg_pane_g

0xa8f1,	// (0x0004ce23) list_medium_line_x2_t3_g3_g1_ParamLimits

0xa8f1,	// (0x0004ce23) list_medium_line_x2_t3_g3_g1

0xa8fd,	// (0x0004ce2f) list_medium_line_x2_t3_g3_g2_ParamLimits

0xa8fd,	// (0x0004ce2f) list_medium_line_x2_t3_g3_g2

0xa909,	// (0x0004ce3b) list_medium_line_x2_t3_g3_g3_ParamLimits

0xa909,	// (0x0004ce3b) list_medium_line_x2_t3_g3_g3

0x0002,

0xf25c,	// (0x0005178e) list_medium_line_x2_t3_g3_g_ParamLimits

0xf25c,	// (0x0005178e) list_medium_line_x2_t3_g3_g

0xa915,	// (0x0004ce47) list_medium_line_x2_t3_g3_t1_ParamLimits

0xa915,	// (0x0004ce47) list_medium_line_x2_t3_g3_t1

0x0ad7,	// (0x00043009) list_medium_line_x2_t3_g3_t2_ParamLimits

0x0ad7,	// (0x00043009) list_medium_line_x2_t3_g3_t2

0xa92a,	// (0x0004ce5c) list_medium_line_x2_t3_g3_t3_ParamLimits

0xa92a,	// (0x0004ce5c) list_medium_line_x2_t3_g3_t3

0x0002,

0xf263,	// (0x00051795) list_medium_line_x2_t3_g3_t_ParamLimits

0xf263,	// (0x00051795) list_medium_line_x2_t3_g3_t

0xa8f1,	// (0x0004ce23) list_medium_line_x2_t3_g2_g1_ParamLimits

0xa8f1,	// (0x0004ce23) list_medium_line_x2_t3_g2_g1

0xa909,	// (0x0004ce3b) list_medium_line_x2_t3_g2_g2_ParamLimits

0xa909,	// (0x0004ce3b) list_medium_line_x2_t3_g2_g2

0x0001,

0xf26a,	// (0x0005179c) list_medium_line_x2_t3_g2_g_ParamLimits

0xf26a,	// (0x0005179c) list_medium_line_x2_t3_g2_g

0xa93f,	// (0x0004ce71) list_medium_line_x2_t3_g2_t1_ParamLimits

0xa93f,	// (0x0004ce71) list_medium_line_x2_t3_g2_t1

0xa955,	// (0x0004ce87) list_medium_line_x2_t3_g2_t2_ParamLimits

0xa955,	// (0x0004ce87) list_medium_line_x2_t3_g2_t2

0xa967,	// (0x0004ce99) list_medium_line_x2_t3_g2_t3_ParamLimits

0xa967,	// (0x0004ce99) list_medium_line_x2_t3_g2_t3

0x0002,

0xf26f,	// (0x000517a1) list_medium_line_x2_t3_g2_t_ParamLimits

0xf26f,	// (0x000517a1) list_medium_line_x2_t3_g2_t

0xa8f1,	// (0x0004ce23) list_medium_line_x2_t4_g4_g1_ParamLimits

0xa8f1,	// (0x0004ce23) list_medium_line_x2_t4_g4_g1

0xa985,	// (0x0004ceb7) list_medium_line_x2_t4_g4_g2_ParamLimits

0xa985,	// (0x0004ceb7) list_medium_line_x2_t4_g4_g2

0xa8fd,	// (0x0004ce2f) list_medium_line_x2_t4_g4_g3_ParamLimits

0xa8fd,	// (0x0004ce2f) list_medium_line_x2_t4_g4_g3

0xa991,	// (0x0004cec3) list_medium_line_x2_t4_g4_g4_ParamLimits

0xa991,	// (0x0004cec3) list_medium_line_x2_t4_g4_g4

0x0003,

0xf276,	// (0x000517a8) list_medium_line_x2_t4_g4_g_ParamLimits

0xf276,	// (0x000517a8) list_medium_line_x2_t4_g4_g

0x0aeb,	// (0x0004301d) list_medium_line_x2_t4_g4_t1_ParamLimits

0x0aeb,	// (0x0004301d) list_medium_line_x2_t4_g4_t1

0x0b05,	// (0x00043037) list_medium_line_x2_t4_g4_t2_ParamLimits

0x0b05,	// (0x00043037) list_medium_line_x2_t4_g4_t2

0x0b1b,	// (0x0004304d) list_medium_line_x2_t4_g4_t3_ParamLimits

0x0b1b,	// (0x0004304d) list_medium_line_x2_t4_g4_t3

0xa99d,	// (0x0004cecf) list_medium_line_x2_t4_g4_t4_ParamLimits

0xa99d,	// (0x0004cecf) list_medium_line_x2_t4_g4_t4

0x0003,

0xf27f,	// (0x000517b1) list_medium_line_x2_t4_g4_t_ParamLimits

0xf27f,	// (0x000517b1) list_medium_line_x2_t4_g4_t

0xa8f1,	// (0x0004ce23) list_medium_line_x2_t2_g4_g1_ParamLimits

0xa8f1,	// (0x0004ce23) list_medium_line_x2_t2_g4_g1

0xa985,	// (0x0004ceb7) list_medium_line_x2_t2_g4_g2_ParamLimits

0xa985,	// (0x0004ceb7) list_medium_line_x2_t2_g4_g2

0xa8fd,	// (0x0004ce2f) list_medium_line_x2_t2_g4_g3_ParamLimits

0xa8fd,	// (0x0004ce2f) list_medium_line_x2_t2_g4_g3

0xa909,	// (0x0004ce3b) list_medium_line_x2_t2_g4_g4_ParamLimits

0xa909,	// (0x0004ce3b) list_medium_line_x2_t2_g4_g4

0x0003,

0xf2e6,	// (0x00051818) list_medium_line_x2_t2_g4_g_ParamLimits

0xf2e6,	// (0x00051818) list_medium_line_x2_t2_g4_g

0xa9af,	// (0x0004cee1) list_medium_line_x2_t2_g4_t1_ParamLimits

0xa9af,	// (0x0004cee1) list_medium_line_x2_t2_g4_t1

0xa92a,	// (0x0004ce5c) list_medium_line_x2_t2_g4_t2_ParamLimits

0xa92a,	// (0x0004ce5c) list_medium_line_x2_t2_g4_t2

0x0001,

0xf2ef,	// (0x00051821) list_medium_line_x2_t2_g4_t_ParamLimits

0xf2ef,	// (0x00051821) list_medium_line_x2_t2_g4_t

0xa8f1,	// (0x0004ce23) list_medium_line_x2_t2_g3_g1_ParamLimits

0xa8f1,	// (0x0004ce23) list_medium_line_x2_t2_g3_g1

0xa8fd,	// (0x0004ce2f) list_medium_line_x2_t2_g3_g2_ParamLimits

0xa8fd,	// (0x0004ce2f) list_medium_line_x2_t2_g3_g2

0xa909,	// (0x0004ce3b) list_medium_line_x2_t2_g3_g3_ParamLimits

0xa909,	// (0x0004ce3b) list_medium_line_x2_t2_g3_g3

0x0002,

0xf25c,	// (0x0005178e) list_medium_line_x2_t2_g3_g_ParamLimits

0xf25c,	// (0x0005178e) list_medium_line_x2_t2_g3_g

0xa9c4,	// (0x0004cef6) list_medium_line_x2_t2_g3_t1_ParamLimits

0xa9c4,	// (0x0004cef6) list_medium_line_x2_t2_g3_t1

0xa92a,	// (0x0004ce5c) list_medium_line_x2_t2_g3_t2_ParamLimits

0xa92a,	// (0x0004ce5c) list_medium_line_x2_t2_g3_t2

0x0001,

0xf2f4,	// (0x00051826) list_medium_line_x2_t2_g3_t_ParamLimits

0xf2f4,	// (0x00051826) list_medium_line_x2_t2_g3_t

0x31ae,	// (0x000456e0) main_sp_fs_list_pane_ParamLimits

0x31ae,	// (0x000456e0) main_sp_fs_list_pane

0x31ba,	// (0x000456ec) sp_fs_scroll_pane_ParamLimits

0x31ba,	// (0x000456ec) sp_fs_scroll_pane

0x0b30,	// (0x00043062) list_medium_line_x2_t3_t1

0x0b40,	// (0x00043072) list_medium_line_x2_t3_t2

0xaa07,	// (0x0004cf39) list_medium_line_x2_t3_t3

0x0002,

0xf33f,	// (0x00051871) list_medium_line_x2_t3_t

0x0b4e,	// (0x00043080) list_medium_line_x3_t4_t1

0x0b5e,	// (0x00043090) list_medium_line_x3_t4_t2

0xaa15,	// (0x0004cf47) list_medium_line_x3_t4_t3

0xaa07,	// (0x0004cf39) list_medium_line_x3_t4_t4

0x0003,

0xf346,	// (0x00051878) list_medium_line_x3_t4_t

0x0b6c,	// (0x0004309e) list_medium_line_x4_t5_t1

0x0b7c,	// (0x000430ae) list_medium_line_x4_t5_t2

0xaa15,	// (0x0004cf47) list_medium_line_x4_t5_t3

0xaa23,	// (0x0004cf55) list_medium_line_x4_t5_t4

0xaa07,	// (0x0004cf39) list_medium_line_x4_t5_t5

0x0004,

0xf34f,	// (0x00051881) list_medium_line_x4_t5_t

0xa8f1,	// (0x0004ce23) list_medium_line_t4_g4_g1_ParamLimits

0xa8f1,	// (0x0004ce23) list_medium_line_t4_g4_g1

0xa991,	// (0x0004cec3) list_medium_line_t4_g4_g2_ParamLimits

0xa991,	// (0x0004cec3) list_medium_line_t4_g4_g2

0xaa31,	// (0x0004cf63) list_medium_line_t4_g4_g3_ParamLimits

0xaa31,	// (0x0004cf63) list_medium_line_t4_g4_g3

0xa909,	// (0x0004ce3b) list_medium_line_t4_g4_g4_ParamLimits

0xa909,	// (0x0004ce3b) list_medium_line_t4_g4_g4

0x0003,

0xf35a,	// (0x0005188c) list_medium_line_t4_g4_g_ParamLimits

0xf35a,	// (0x0005188c) list_medium_line_t4_g4_g

0xaa3d,	// (0x0004cf6f) list_medium_line_t4_g4_t1_ParamLimits

0xaa3d,	// (0x0004cf6f) list_medium_line_t4_g4_t1

0xaa52,	// (0x0004cf84) list_medium_line_t4_g4_t2_ParamLimits

0xaa52,	// (0x0004cf84) list_medium_line_t4_g4_t2

0xaa68,	// (0x0004cf9a) list_medium_line_t4_g4_t3_ParamLimits

0xaa68,	// (0x0004cf9a) list_medium_line_t4_g4_t3

0xa92a,	// (0x0004ce5c) list_medium_line_t4_g4_t4_ParamLimits

0xa92a,	// (0x0004ce5c) list_medium_line_t4_g4_t4

0x0003,

0xf363,	// (0x00051895) list_medium_line_t4_g4_t_ParamLimits

0xf363,	// (0x00051895) list_medium_line_t4_g4_t

0x328c,	// (0x000457be) chi_dic_find_pane_g1

0x4417,	// (0x00046949) main_tport_pane

0xafd2,	// (0x0004d504) list_medium_line_plain_t1

0xb01c,	// (0x0004d54e) list_medium_line_t2_g2_g1_ParamLimits

0xb01c,	// (0x0004d54e) list_medium_line_t2_g2_g1

0xb028,	// (0x0004d55a) list_medium_line_t2_g2_g2_ParamLimits

0xb028,	// (0x0004d55a) list_medium_line_t2_g2_g2

0x0001,

0xf868,	// (0x00051d9a) list_medium_line_t2_g2_g_ParamLimits

0xf868,	// (0x00051d9a) list_medium_line_t2_g2_g

0x0d55,	// (0x00043287) list_medium_line_t2_g2_t1_ParamLimits

0x0d55,	// (0x00043287) list_medium_line_t2_g2_t1

0x0d6c,	// (0x0004329e) list_medium_line_t2_g2_t2_ParamLimits

0x0d6c,	// (0x0004329e) list_medium_line_t2_g2_t2

0x0001,

0xf86d,	// (0x00051d9f) list_medium_line_t2_g2_t_ParamLimits

0xf86d,	// (0x00051d9f) list_medium_line_t2_g2_t

0xb170,	// (0x0004d6a2) aid_sp_fs_list_icon_a_sm

0xb178,	// (0x0004d6aa) aid_sp_fs_list_icon_d

0xb180,	// (0x0004d6b2) aid_sp_fs_text_primary

0xb189,	// (0x0004d6bb) aid_sp_fs_text_secondary

0xb192,	// (0x0004d6c4) list_medium_line

0xb192,	// (0x0004d6c4) list_medium_line_g2

0xb192,	// (0x0004d6c4) list_medium_line_g3

0xb192,	// (0x0004d6c4) list_medium_line_plain

0xb192,	// (0x0004d6c4) list_medium_line_plain_t2

0xb192,	// (0x0004d6c4) list_medium_line_plain_t3

0xb192,	// (0x0004d6c4) list_medium_line_right_icon

0xb192,	// (0x0004d6c4) list_medium_line_right_iconx2

0xb192,	// (0x0004d6c4) list_medium_line_t2

0xb192,	// (0x0004d6c4) list_medium_line_t2_g2

0xb192,	// (0x0004d6c4) list_medium_line_t2_g3

0xb192,	// (0x0004d6c4) list_medium_line_t2_right_icon

0xb192,	// (0x0004d6c4) list_medium_line_t2_right_iconx2

0xb192,	// (0x0004d6c4) list_medium_line_t3

0xb192,	// (0x0004d6c4) list_medium_line_t3_g2

0xb192,	// (0x0004d6c4) list_medium_line_t3_g3

0xb192,	// (0x0004d6c4) list_medium_line_t3_right_iconx2

0xb19b,	// (0x0004d6cd) list_medium_line_t4_g4

0xb1a4,	// (0x0004d6d6) list_medium_line_x2

0xb1a4,	// (0x0004d6d6) list_medium_line_x2_t2_g2

0xb1a4,	// (0x0004d6d6) list_medium_line_x2_t2_g3

0xb1a4,	// (0x0004d6d6) list_medium_line_x2_t2_g4

0xb1a4,	// (0x0004d6d6) list_medium_line_x2_t3

0xb1a4,	// (0x0004d6d6) list_medium_line_x2_t3_g2

0xb1a4,	// (0x0004d6d6) list_medium_line_x2_t3_g3

0xb1a4,	// (0x0004d6d6) list_medium_line_x2_t3_g4

0xb1a4,	// (0x0004d6d6) list_medium_line_x2_t4_g2

0xb1a4,	// (0x0004d6d6) list_medium_line_x2_t4_g4

0xb1ad,	// (0x0004d6df) list_medium_line_x3

0xb1ad,	// (0x0004d6df) list_medium_line_x3_t4

0xb1ad,	// (0x0004d6df) list_medium_line_x3_t4_g4

0xb19b,	// (0x0004d6cd) list_medium_line_x4_t4

0xb19b,	// (0x0004d6cd) list_medium_line_x4_t4_g7

0xb19b,	// (0x0004d6cd) list_medium_line_x4_t5

0xb1b6,	// (0x0004d6e8) list_single_fs_dyc_pane_ParamLimits

0xb1b6,	// (0x0004d6e8) list_single_fs_dyc_pane

0xa8f1,	// (0x0004ce23) list_medium_line_x4_t4_g7_g1_ParamLimits

0xa8f1,	// (0x0004ce23) list_medium_line_x4_t4_g7_g1

0xb1e7,	// (0x0004d719) list_medium_line_x4_t4_g7_g2_ParamLimits

0xb1e7,	// (0x0004d719) list_medium_line_x4_t4_g7_g2

0xb1f3,	// (0x0004d725) list_medium_line_x4_t4_g7_g3_ParamLimits

0xb1f3,	// (0x0004d725) list_medium_line_x4_t4_g7_g3

0xb202,	// (0x0004d734) list_medium_line_x4_t4_g7_g4_ParamLimits

0xb202,	// (0x0004d734) list_medium_line_x4_t4_g7_g4

0xb20e,	// (0x0004d740) list_medium_line_x4_t4_g7_g5_ParamLimits

0xb20e,	// (0x0004d740) list_medium_line_x4_t4_g7_g5

0xb21d,	// (0x0004d74f) list_medium_line_x4_t4_g7_g6_ParamLimits

0xb21d,	// (0x0004d74f) list_medium_line_x4_t4_g7_g6

0xb22c,	// (0x0004d75e) list_medium_line_x4_t4_g7_g7_ParamLimits

0xb22c,	// (0x0004d75e) list_medium_line_x4_t4_g7_g7

0x0006,

0xfa38,	// (0x00051f6a) list_medium_line_x4_t4_g7_g_ParamLimits

0xfa38,	// (0x00051f6a) list_medium_line_x4_t4_g7_g

0xb238,	// (0x0004d76a) list_medium_line_x4_t4_g7_t1_ParamLimits

0xb238,	// (0x0004d76a) list_medium_line_x4_t4_g7_t1

0xb24d,	// (0x0004d77f) list_medium_line_x4_t4_g7_t2_ParamLimits

0xb24d,	// (0x0004d77f) list_medium_line_x4_t4_g7_t2

0xb262,	// (0x0004d794) list_medium_line_x4_t4_g7_t3_ParamLimits

0xb262,	// (0x0004d794) list_medium_line_x4_t4_g7_t3

0xb277,	// (0x0004d7a9) list_medium_line_x4_t4_g7_t4_ParamLimits

0xb277,	// (0x0004d7a9) list_medium_line_x4_t4_g7_t4

0xb289,	// (0x0004d7bb) list_medium_line_x4_t4_g7_t5_ParamLimits

0xb289,	// (0x0004d7bb) list_medium_line_x4_t4_g7_t5

0x0004,

0xfa47,	// (0x00051f79) list_medium_line_x4_t4_g7_t_ParamLimits

0xfa47,	// (0x00051f79) list_medium_line_x4_t4_g7_t

0xb29b,	// (0x0004d7cd) list_single_dyc_row_pane_ParamLimits

0xb29b,	// (0x0004d7cd) list_single_dyc_row_pane

0x961c,	// (0x0004bb4e) call5_gesture_pane_ParamLimits

0x961c,	// (0x0004bb4e) call5_gesture_pane

0x9672,	// (0x0004bba4) call5_windows_pane_ParamLimits

0x9672,	// (0x0004bba4) call5_windows_pane

0x97a3,	// (0x0004bcd5) call5_swipe_1_pane_cp_ParamLimits

0x97a3,	// (0x0004bcd5) call5_swipe_1_pane_cp

0x97af,	// (0x0004bce1) call5_swipe_2_pane_cp_ParamLimits

0x97af,	// (0x0004bce1) call5_swipe_2_pane_cp

0xcfe4,	// (0x0004f516) call5_image_pane_cp

0x97bb,	// (0x0004bced) popup_call5_audio_first_window_cp_ParamLimits

0x97bb,	// (0x0004bced) popup_call5_audio_first_window_cp

0x96e3,	// (0x0004bc15) call5_swipe_1_pane_g1_cp_ParamLimits

0x96e3,	// (0x0004bc15) call5_swipe_1_pane_g1_cp

0x97c9,	// (0x0004bcfb) call5_swipe_1_pane_g2_cp

0x96fc,	// (0x0004bc2e) call5_swipe_1_pane_t1_cp_ParamLimits

0x96fc,	// (0x0004bc2e) call5_swipe_1_pane_t1_cp

0x96e3,	// (0x0004bc15) call5_swipe_2_pane_g1_cp_ParamLimits

0x96e3,	// (0x0004bc15) call5_swipe_2_pane_g1_cp

0x97d1,	// (0x0004bd03) call5_swipe_2_pane_g2_cp

0x97d9,	// (0x0004bd0b) call5_swipe_2_pane_t1_cp_ParamLimits

0x97d9,	// (0x0004bd0b) call5_swipe_2_pane_t1_cp

0xa6f7,	// (0x0004cc29) main_sp_fs_email_pane

0x97ee,	// (0x0004bd20) main_sp_fs_listscroll_pane_te

0xb2b8,	// (0x0004d7ea) popup_sp_fs_action_menu_pane_ParamLimits

0xb2b8,	// (0x0004d7ea) popup_sp_fs_action_menu_pane

0xe896,	// (0x00050dc8) bg_sp_fs_ctrlbar_pane_g1

0x97f7,	// (0x0004bd29) bg_sp_fs_ctrlbar_ddmenu_pane_g1

0x9800,	// (0x0004bd32) bg_sp_fs_ctrlbar_ddmenu_pane_g2

0x9809,	// (0x0004bd3b) bg_sp_fs_ctrlbar_ddmenu_pane_g3

0xe896,	// (0x00050dc8) bg_sp_fs_ctrlbar_ddmenu_pane_g4

0x0003,

0xfb30,	// (0x00052062) bg_sp_fs_ctrlbar_ddmenu_pane_g

0xe66d,	// (0x00050b9f) bg_sp_fs_ctrlbar_ddmenu_pane_ParamLimits

0xe66d,	// (0x00050b9f) bg_sp_fs_ctrlbar_ddmenu_pane

0x9812,	// (0x0004bd44) main_sp_fs_ctrlbar_ddmenu_pane_g1_ParamLimits

0x9812,	// (0x0004bd44) main_sp_fs_ctrlbar_ddmenu_pane_g1

0x981e,	// (0x0004bd50) main_sp_fs_ctrlbar_ddmenu_pane_g2_ParamLimits

0x981e,	// (0x0004bd50) main_sp_fs_ctrlbar_ddmenu_pane_g2

0x0001,

0xfb39,	// (0x0005206b) main_sp_fs_ctrlbar_ddmenu_pane_g_ParamLimits

0xfb39,	// (0x0005206b) main_sp_fs_ctrlbar_ddmenu_pane_g

0x982a,	// (0x0004bd5c) main_sp_fs_ctrlbar_ddmenu_pane_t1_ParamLimits

0x982a,	// (0x0004bd5c) main_sp_fs_ctrlbar_ddmenu_pane_t1

0xb2fe,	// (0x0004d830) list_medium_line_t2_right_icon_g1

0x0f92,	// (0x000434c4) list_medium_line_t2_right_icon_t1

0x0fa2,	// (0x000434d4) list_medium_line_t2_right_icon_t2

0x0001,

0xfb3e,	// (0x00052070) list_medium_line_t2_right_icon_t

0xe413,	// (0x00050945) bg_sp_fs_ctrlbar_pane_ParamLimits

0xe413,	// (0x00050945) bg_sp_fs_ctrlbar_pane

0x98c6,	// (0x0004bdf8) main_sp_fs_ctrlbar_button_pane_cp01

0x98d0,	// (0x0004be02) main_sp_fs_ctrlbar_ddmenu_pane

0x98da,	// (0x0004be0c) main_sp_fs_ctrlbar_pane_g1

0x98e6,	// (0x0004be18) main_sp_fs_ctrlbar_pane_g2

0x0001,

0xfb43,	// (0x00052075) main_sp_fs_ctrlbar_pane_g

0x98f2,	// (0x0004be24) main_sp_fs_ctrlbar_pane_t1

0x0fb4,	// (0x000434e6) main_sp_fs_ctrlbar_pane

0x0fd8,	// (0x0004350a) main_sp_fs_listscroll_pane_te_cp01

0x0ff8,	// (0x0004352a) popup_sp_fs_action_menu_pane_cp01_ParamLimits

0x0ff8,	// (0x0004352a) popup_sp_fs_action_menu_pane_cp01

0xa6f7,	// (0x0004cc29) bg_sp_fs_highlight_list_pane_cp01_ParamLimits

0xa6f7,	// (0x0004cc29) bg_sp_fs_highlight_list_pane_cp01

0xb306,	// (0x0004d838) sp_fs_action_menu_list_gene_pane_g1_ParamLimits

0xb306,	// (0x0004d838) sp_fs_action_menu_list_gene_pane_g1

0x9907,	// (0x0004be39) sp_fs_action_menu_list_gene_pane_g2_ParamLimits

0x9907,	// (0x0004be39) sp_fs_action_menu_list_gene_pane_g2

0x0001,

0xfb48,	// (0x0005207a) sp_fs_action_menu_list_gene_pane_g_ParamLimits

0xfb48,	// (0x0005207a) sp_fs_action_menu_list_gene_pane_g

0xb315,	// (0x0004d847) sp_fs_action_menu_list_gene_pane_t1_ParamLimits

0xb315,	// (0x0004d847) sp_fs_action_menu_list_gene_pane_t1

0xb32d,	// (0x0004d85f) sp_fs_action_menu_list_gene_pane_ParamLimits

0xb32d,	// (0x0004d85f) sp_fs_action_menu_list_gene_pane

0x9914,	// (0x0004be46) popup_sp_fs_action_menu_bg_pane_ParamLimits

0x9914,	// (0x0004be46) popup_sp_fs_action_menu_bg_pane

0xb350,	// (0x0004d882) sp_fs_action_menu_list_pane_ParamLimits

0xb350,	// (0x0004d882) sp_fs_action_menu_list_pane

0x9922,	// (0x0004be54) sp_fs_scroll_pane_cp01_ParamLimits

0x9922,	// (0x0004be54) sp_fs_scroll_pane_cp01

0x1014,	// (0x00043546) list_medium_line_plain_t2_t1

0x1024,	// (0x00043556) list_medium_line_plain_t2_t2

0x0001,

0xfb4d,	// (0x0005207f) list_medium_line_plain_t2_t

0x1034,	// (0x00043566) list_medium_line_plain_t3_t1

0x1044,	// (0x00043576) list_medium_line_plain_t3_t2

0x1052,	// (0x00043584) list_medium_line_plain_t3_t3

0x0002,

0xfb52,	// (0x00052084) list_medium_line_plain_t3_t

0xa8f1,	// (0x0004ce23) list_medium_line_x2_t2_g2_g1_ParamLimits

0xa8f1,	// (0x0004ce23) list_medium_line_x2_t2_g2_g1

0xa909,	// (0x0004ce3b) list_medium_line_x2_t2_g2_g2_ParamLimits

0xa909,	// (0x0004ce3b) list_medium_line_x2_t2_g2_g2

0x0001,

0xf26a,	// (0x0005179c) list_medium_line_x2_t2_g2_g_ParamLimits

0xf26a,	// (0x0005179c) list_medium_line_x2_t2_g2_g

0xaa3d,	// (0x0004cf6f) list_medium_line_x2_t2_g2_t1_ParamLimits

0xaa3d,	// (0x0004cf6f) list_medium_line_x2_t2_g2_t1

0xa92a,	// (0x0004ce5c) list_medium_line_x2_t2_g2_t2_ParamLimits

0xa92a,	// (0x0004ce5c) list_medium_line_x2_t2_g2_t2

0x0001,

0xfb59,	// (0x0005208b) list_medium_line_x2_t2_g2_t_ParamLimits

0xfb59,	// (0x0005208b) list_medium_line_x2_t2_g2_t

0xa8f1,	// (0x0004ce23) list_medium_line_x2_t4_g2_g1_ParamLimits

0xa8f1,	// (0x0004ce23) list_medium_line_x2_t4_g2_g1

0xb374,	// (0x0004d8a6) list_medium_line_x2_t4_g2_g2_ParamLimits

0xb374,	// (0x0004d8a6) list_medium_line_x2_t4_g2_g2

0x0001,

0xfb5e,	// (0x00052090) list_medium_line_x2_t4_g2_g_ParamLimits

0xfb5e,	// (0x00052090) list_medium_line_x2_t4_g2_g

0x1060,	// (0x00043592) list_medium_line_x2_t4_g2_t1_ParamLimits

0x1060,	// (0x00043592) list_medium_line_x2_t4_g2_t1

0x107a,	// (0x000435ac) list_medium_line_x2_t4_g2_t2_ParamLimits

0x107a,	// (0x000435ac) list_medium_line_x2_t4_g2_t2

0x1090,	// (0x000435c2) list_medium_line_x2_t4_g2_t3_ParamLimits

0x1090,	// (0x000435c2) list_medium_line_x2_t4_g2_t3

0xa92a,	// (0x0004ce5c) list_medium_line_x2_t4_g2_t4_ParamLimits

0xa92a,	// (0x0004ce5c) list_medium_line_x2_t4_g2_t4

0x0003,

0xfb63,	// (0x00052095) list_medium_line_x2_t4_g2_t_ParamLimits

0xfb63,	// (0x00052095) list_medium_line_x2_t4_g2_t

0xb386,	// (0x0004d8b8) list_medium_line_t3_right_iconx2_g1

0xb2fe,	// (0x0004d830) list_medium_line_t3_right_iconx2_g2

0x10a5,	// (0x000435d7) list_medium_line_t3_right_iconx2_g3

0x0002,

0xfb6c,	// (0x0005209e) list_medium_line_t3_right_iconx2_g

0x10af,	// (0x000435e1) list_medium_line_t3_right_iconx2_t1

0x10bf,	// (0x000435f1) list_medium_line_t3_right_iconx2_t2

0x0001,

0xfb73,	// (0x000520a5) list_medium_line_t3_right_iconx2_t

0xa8f1,	// (0x0004ce23) list_medium_line_x3_t4_g4_g1_ParamLimits

0xa8f1,	// (0x0004ce23) list_medium_line_x3_t4_g4_g1

0xa8fd,	// (0x0004ce2f) list_medium_line_x3_t4_g4_g2_ParamLimits

0xa8fd,	// (0x0004ce2f) list_medium_line_x3_t4_g4_g2

0xa991,	// (0x0004cec3) list_medium_line_x3_t4_g4_g3_ParamLimits

0xa991,	// (0x0004cec3) list_medium_line_x3_t4_g4_g3

0xb38e,	// (0x0004d8c0) list_medium_line_x3_t4_g4_g4_ParamLimits

0xb38e,	// (0x0004d8c0) list_medium_line_x3_t4_g4_g4

0x0003,

0xfb78,	// (0x000520aa) list_medium_line_x3_t4_g4_g_ParamLimits

0xfb78,	// (0x000520aa) list_medium_line_x3_t4_g4_g

0x10cd,	// (0x000435ff) list_medium_line_x3_t4_g4_t1_ParamLimits

0x10cd,	// (0x000435ff) list_medium_line_x3_t4_g4_t1

0x10e4,	// (0x00043616) list_medium_line_x3_t4_g4_t2_ParamLimits

0x10e4,	// (0x00043616) list_medium_line_x3_t4_g4_t2

0xb39a,	// (0x0004d8cc) list_medium_line_x3_t4_g4_t3_ParamLimits

0xb39a,	// (0x0004d8cc) list_medium_line_x3_t4_g4_t3

0xb3af,	// (0x0004d8e1) list_medium_line_x3_t4_g4_t4_ParamLimits

0xb3af,	// (0x0004d8e1) list_medium_line_x3_t4_g4_t4

0x0003,

0xfb81,	// (0x000520b3) list_medium_line_x3_t4_g4_t_ParamLimits

0xfb81,	// (0x000520b3) list_medium_line_x3_t4_g4_t

0x10ff,	// (0x00043631) list_single_dyc_row_text_pane_t1_ParamLimits

0x10ff,	// (0x00043631) list_single_dyc_row_text_pane_t1

0x1148,	// (0x0004367a) list_single_dyc_row_text_pane_t2_ParamLimits

0x1148,	// (0x0004367a) list_single_dyc_row_text_pane_t2

0xb3cc,	// (0x0004d8fe) list_single_dyc_row_text_pane_t3_ParamLimits

0xb3cc,	// (0x0004d8fe) list_single_dyc_row_text_pane_t3

0x0002,

0xfb8a,	// (0x000520bc) list_single_dyc_row_text_pane_t_ParamLimits

0xfb8a,	// (0x000520bc) list_single_dyc_row_text_pane_t

0xb3de,	// (0x0004d910) list_single_dyc_row_pane_g1_ParamLimits

0xb3de,	// (0x0004d910) list_single_dyc_row_pane_g1

0xb3ea,	// (0x0004d91c) list_single_dyc_row_pane_g2_ParamLimits

0xb3ea,	// (0x0004d91c) list_single_dyc_row_pane_g2

0xb3f6,	// (0x0004d928) list_single_dyc_row_pane_g3_ParamLimits

0xb3f6,	// (0x0004d928) list_single_dyc_row_pane_g3

0xb402,	// (0x0004d934) list_single_dyc_row_pane_g4_ParamLimits

0xb402,	// (0x0004d934) list_single_dyc_row_pane_g4

0x0003,

0xfb91,	// (0x000520c3) list_single_dyc_row_pane_g_ParamLimits

0xfb91,	// (0x000520c3) list_single_dyc_row_pane_g

0xb40e,	// (0x0004d940) list_single_dyc_row_text_pane_ParamLimits

0xb40e,	// (0x0004d940) list_single_dyc_row_text_pane

0xa67e,	// (0x0004cbb0) bg_sp_fs_scroll_pane

0x9948,	// (0x0004be7a) thumb_sp_fs_scroll_pane

0xb01c,	// (0x0004d54e) list_medium_line_g1_ParamLimits

0xb01c,	// (0x0004d54e) list_medium_line_g1

0xb42d,	// (0x0004d95f) list_medium_line_t1_ParamLimits

0xb42d,	// (0x0004d95f) list_medium_line_t1

0xa8f1,	// (0x0004ce23) list_medium_line_x2_g1_ParamLimits

0xa8f1,	// (0x0004ce23) list_medium_line_x2_g1

0xa8fd,	// (0x0004ce2f) list_medium_line_x2_g2_ParamLimits

0xa8fd,	// (0x0004ce2f) list_medium_line_x2_g2

0x0001,

0xfb9a,	// (0x000520cc) list_medium_line_x2_g_ParamLimits

0xfb9a,	// (0x000520cc) list_medium_line_x2_g

0xb442,	// (0x0004d974) list_medium_line_x2_t1_ParamLimits

0xb442,	// (0x0004d974) list_medium_line_x2_t1

0xa8f1,	// (0x0004ce23) list_medium_line_x3_g1_ParamLimits

0xa8f1,	// (0x0004ce23) list_medium_line_x3_g1

0xa8fd,	// (0x0004ce2f) list_medium_line_x3_g2_ParamLimits

0xa8fd,	// (0x0004ce2f) list_medium_line_x3_g2

0x0001,

0xfb9a,	// (0x000520cc) list_medium_line_x3_g_ParamLimits

0xfb9a,	// (0x000520cc) list_medium_line_x3_g

0xb442,	// (0x0004d974) list_medium_line_x3_t1_ParamLimits

0xb442,	// (0x0004d974) list_medium_line_x3_t1

0xb458,	// (0x0004d98a) thumb_sp_fs_scroll_pane_g1

0xb461,	// (0x0004d993) thumb_sp_fs_scroll_pane_g2

0xb46a,	// (0x0004d99c) thumb_sp_fs_scroll_pane_g3

0x0002,

0xfb9f,	// (0x000520d1) thumb_sp_fs_scroll_pane_g

0xb458,	// (0x0004d98a) bg_sp_fs_scroll_pane_g1

0xb461,	// (0x0004d993) bg_sp_fs_scroll_pane_g2

0xb46a,	// (0x0004d99c) bg_sp_fs_scroll_pane_g3

0x0002,

0xfb9f,	// (0x000520d1) bg_sp_fs_scroll_pane_g

0xa8f1,	// (0x0004ce23) list_medium_line_x2_t3_g4_g1_ParamLimits

0xa8f1,	// (0x0004ce23) list_medium_line_x2_t3_g4_g1

0xa985,	// (0x0004ceb7) list_medium_line_x2_t3_g4_g2_ParamLimits

0xa985,	// (0x0004ceb7) list_medium_line_x2_t3_g4_g2

0xa8fd,	// (0x0004ce2f) list_medium_line_x2_t3_g4_g3_ParamLimits

0xa8fd,	// (0x0004ce2f) list_medium_line_x2_t3_g4_g3

0xa909,	// (0x0004ce3b) list_medium_line_x2_t3_g4_g4_ParamLimits

0xa909,	// (0x0004ce3b) list_medium_line_x2_t3_g4_g4

0x0003,

0xf2e6,	// (0x00051818) list_medium_line_x2_t3_g4_g_ParamLimits

0xf2e6,	// (0x00051818) list_medium_line_x2_t3_g4_g

0x11a2,	// (0x000436d4) list_medium_line_x2_t3_g4_t1_ParamLimits

0x11a2,	// (0x000436d4) list_medium_line_x2_t3_g4_t1

0x11b8,	// (0x000436ea) list_medium_line_x2_t3_g4_t2_ParamLimits

0x11b8,	// (0x000436ea) list_medium_line_x2_t3_g4_t2

0xa92a,	// (0x0004ce5c) list_medium_line_x2_t3_g4_t3_ParamLimits

0xa92a,	// (0x0004ce5c) list_medium_line_x2_t3_g4_t3

0x0002,

0xfba6,	// (0x000520d8) list_medium_line_x2_t3_g4_t_ParamLimits

0xfba6,	// (0x000520d8) list_medium_line_x2_t3_g4_t

0xb01c,	// (0x0004d54e) list_medium_line_g2_g1_ParamLimits

0xb01c,	// (0x0004d54e) list_medium_line_g2_g1

0xb028,	// (0x0004d55a) list_medium_line_g2_g2_ParamLimits

0xb028,	// (0x0004d55a) list_medium_line_g2_g2

0x0001,

0xf868,	// (0x00051d9a) list_medium_line_g2_g_ParamLimits

0xf868,	// (0x00051d9a) list_medium_line_g2_g

0xb473,	// (0x0004d9a5) list_medium_line_g2_t1_ParamLimits

0xb473,	// (0x0004d9a5) list_medium_line_g2_t1

0xb01c,	// (0x0004d54e) list_medium_line_t3_g2_g1_ParamLimits

0xb01c,	// (0x0004d54e) list_medium_line_t3_g2_g1

0xb028,	// (0x0004d55a) list_medium_line_t3_g2_g2_ParamLimits

0xb028,	// (0x0004d55a) list_medium_line_t3_g2_g2

0x0001,

0xf868,	// (0x00051d9a) list_medium_line_t3_g2_g_ParamLimits

0xf868,	// (0x00051d9a) list_medium_line_t3_g2_g

0x11d1,	// (0x00043703) list_medium_line_t3_g2_t1_ParamLimits

0x11d1,	// (0x00043703) list_medium_line_t3_g2_t1

0x11eb,	// (0x0004371d) list_medium_line_t3_g2_t2_ParamLimits

0x11eb,	// (0x0004371d) list_medium_line_t3_g2_t2

0x1201,	// (0x00043733) list_medium_line_t3_g2_t3_ParamLimits

0x1201,	// (0x00043733) list_medium_line_t3_g2_t3

0x0002,

0xfbad,	// (0x000520df) list_medium_line_t3_g2_t_ParamLimits

0xfbad,	// (0x000520df) list_medium_line_t3_g2_t

0xb2fe,	// (0x0004d830) list_medium_line_right_icon_g1

0xb488,	// (0x0004d9ba) list_medium_line_right_icon_t1

0xb01c,	// (0x0004d54e) list_medium_line_t2_g1_ParamLimits

0xb01c,	// (0x0004d54e) list_medium_line_t2_g1

0x1218,	// (0x0004374a) list_medium_line_t2_t1_ParamLimits

0x1218,	// (0x0004374a) list_medium_line_t2_t1

0x1232,	// (0x00043764) list_medium_line_t2_t2_ParamLimits

0x1232,	// (0x00043764) list_medium_line_t2_t2

0x0001,

0xfbb4,	// (0x000520e6) list_medium_line_t2_t_ParamLimits

0xfbb4,	// (0x000520e6) list_medium_line_t2_t

0xb01c,	// (0x0004d54e) list_medium_line_t3_g1_ParamLimits

0xb01c,	// (0x0004d54e) list_medium_line_t3_g1

0x124b,	// (0x0004377d) list_medium_line_t3_t1_ParamLimits

0x124b,	// (0x0004377d) list_medium_line_t3_t1

0x1262,	// (0x00043794) list_medium_line_t3_t2_ParamLimits

0x1262,	// (0x00043794) list_medium_line_t3_t2

0x1277,	// (0x000437a9) list_medium_line_t3_t3_ParamLimits

0x1277,	// (0x000437a9) list_medium_line_t3_t3

0x0002,

0xfbb9,	// (0x000520eb) list_medium_line_t3_t_ParamLimits

0xfbb9,	// (0x000520eb) list_medium_line_t3_t

0xb01c,	// (0x0004d54e) list_medium_line_g3_g1_ParamLimits

0xb01c,	// (0x0004d54e) list_medium_line_g3_g1

0xb496,	// (0x0004d9c8) list_medium_line_g3_g2_ParamLimits

0xb496,	// (0x0004d9c8) list_medium_line_g3_g2

0xb028,	// (0x0004d55a) list_medium_line_g3_g3_ParamLimits

0xb028,	// (0x0004d55a) list_medium_line_g3_g3

0x0002,

0xfbc0,	// (0x000520f2) list_medium_line_g3_g_ParamLimits

0xfbc0,	// (0x000520f2) list_medium_line_g3_g

0xb4a2,	// (0x0004d9d4) list_medium_line_g3_t1_ParamLimits

0xb4a2,	// (0x0004d9d4) list_medium_line_g3_t1

0xb01c,	// (0x0004d54e) list_medium_line_t2_g3_g1_ParamLimits

0xb01c,	// (0x0004d54e) list_medium_line_t2_g3_g1

0xb496,	// (0x0004d9c8) list_medium_line_t2_g3_g2_ParamLimits

0xb496,	// (0x0004d9c8) list_medium_line_t2_g3_g2

0xb028,	// (0x0004d55a) list_medium_line_t2_g3_g3_ParamLimits

0xb028,	// (0x0004d55a) list_medium_line_t2_g3_g3

0x0002,

0xfbc0,	// (0x000520f2) list_medium_line_t2_g3_g_ParamLimits

0xfbc0,	// (0x000520f2) list_medium_line_t2_g3_g

0x1289,	// (0x000437bb) list_medium_line_t2_g3_t1_ParamLimits

0x1289,	// (0x000437bb) list_medium_line_t2_g3_t1

0x12a0,	// (0x000437d2) list_medium_line_t2_g3_t2_ParamLimits

0x12a0,	// (0x000437d2) list_medium_line_t2_g3_t2

0x0001,

0xfbc7,	// (0x000520f9) list_medium_line_t2_g3_t_ParamLimits

0xfbc7,	// (0x000520f9) list_medium_line_t2_g3_t

0xb01c,	// (0x0004d54e) list_medium_line_t3_g3_g1_ParamLimits

0xb01c,	// (0x0004d54e) list_medium_line_t3_g3_g1

0xb496,	// (0x0004d9c8) list_medium_line_t3_g3_g2_ParamLimits

0xb496,	// (0x0004d9c8) list_medium_line_t3_g3_g2

0xb028,	// (0x0004d55a) list_medium_line_t3_g3_g3_ParamLimits

0xb028,	// (0x0004d55a) list_medium_line_t3_g3_g3

0x0002,

0xfbc0,	// (0x000520f2) list_medium_line_t3_g3_g_ParamLimits

0xfbc0,	// (0x000520f2) list_medium_line_t3_g3_g

0x12b9,	// (0x000437eb) list_medium_line_t3_g3_t1_ParamLimits

0x12b9,	// (0x000437eb) list_medium_line_t3_g3_t1

0x12d2,	// (0x00043804) list_medium_line_t3_g3_t2_ParamLimits

0x12d2,	// (0x00043804) list_medium_line_t3_g3_t2

0x12e8,	// (0x0004381a) list_medium_line_t3_g3_t3_ParamLimits

0x12e8,	// (0x0004381a) list_medium_line_t3_g3_t3

0x0002,

0xfbcc,	// (0x000520fe) list_medium_line_t3_g3_t_ParamLimits

0xfbcc,	// (0x000520fe) list_medium_line_t3_g3_t

0xb386,	// (0x0004d8b8) list_medium_line_right_iconx2_g1

0xb2fe,	// (0x0004d830) list_medium_line_right_iconx2_g2

0x0001,

0xfbd3,	// (0x00052105) list_medium_line_right_iconx2_g

0xb4b7,	// (0x0004d9e9) list_medium_line_right_iconx2_t1

0xb386,	// (0x0004d8b8) list_medium_line_t2_right_iconx2_g1

0xb2fe,	// (0x0004d830) list_medium_line_t2_right_iconx2_g2

0x0001,

0xfbd3,	// (0x00052105) list_medium_line_t2_right_iconx2_g

0x1302,	// (0x00043834) list_medium_line_t2_right_iconx2_t1

0x1312,	// (0x00043844) list_medium_line_t2_right_iconx2_t2

0x0001,

0xfbd8,	// (0x0005210a) list_medium_line_t2_right_iconx2_t

0xb4c5,	// (0x0004d9f7) list_medium_line_x4_t4_t1

0x1324,	// (0x00043856) list_medium_line_x4_t4_t2

0x1334,	// (0x00043866) list_medium_line_x4_t4_t3

0x1344,	// (0x00043876) list_medium_line_x4_t4_t4

0x0003,

0xfbdd,	// (0x0005210f) list_medium_line_x4_t4_t

0x998b,	// (0x0004bebd) tport_appsw_pane_ParamLimits

0x998b,	// (0x0004bebd) tport_appsw_pane

0x999e,	// (0x0004bed0) tport_contact_pane_ParamLimits

0x999e,	// (0x0004bed0) tport_contact_pane

0x99b1,	// (0x0004bee3) tport_listscroll_pane_ParamLimits

0x99b1,	// (0x0004bee3) tport_listscroll_pane

0x99c7,	// (0x0004bef9) cell_tport_appsw_pane_ParamLimits

0x99c7,	// (0x0004bef9) cell_tport_appsw_pane

0x6cee,	// (0x00049220) tport_appsw_pane_g1_ParamLimits

0x6cee,	// (0x00049220) tport_appsw_pane_g1

0xb4d3,	// (0x0004da05) tport_contact_pane_g1

0xb4dc,	// (0x0004da0e) tport_contact_pane_t1

0xb4ea,	// (0x0004da1c) tport_contact_pane_t2

0x0001,

0xfbe6,	// (0x00052118) tport_contact_pane_t

0xb4f8,	// (0x0004da2a) list_tport_pane

0xb501,	// (0x0004da33) scroll_pane_cp_030

0x9a0d,	// (0x0004bf3f) cell_tport_appsw_pane_g1

0xb51a,	// (0x0004da4c) cell_tport_appsw_pane_t1

0xa67e,	// (0x0004cbb0) grid_highlight_pane_cp019

0x9a1d,	// (0x0004bf4f) list_tport_double_graphic_pane_ParamLimits

0x9a1d,	// (0x0004bf4f) list_tport_double_graphic_pane

0xa6f7,	// (0x0004cc29) list_highlight_pane_cp023_ParamLimits

0xa6f7,	// (0x0004cc29) list_highlight_pane_cp023

0x9a2d,	// (0x0004bf5f) list_tport_double_graphic_pane_g1_ParamLimits

0x9a2d,	// (0x0004bf5f) list_tport_double_graphic_pane_g1

0x9a3a,	// (0x0004bf6c) list_tport_double_graphic_pane_t1_ParamLimits

0x9a3a,	// (0x0004bf6c) list_tport_double_graphic_pane_t1

0x9a4f,	// (0x0004bf81) list_tport_double_graphic_pane_t2_ParamLimits

0x9a4f,	// (0x0004bf81) list_tport_double_graphic_pane_t2

0x0001,

0xfbf2,	// (0x00052124) list_tport_double_graphic_pane_t_ParamLimits

0xfbf2,	// (0x00052124) list_tport_double_graphic_pane_t

0xa67e,	// (0x0004cbb0) main_cale_note_pane

0x6ca2,	// (0x000491d4) cell_vitu2_function_top_wide_pane_cp01_ParamLimits

0x6ca2,	// (0x000491d4) cell_vitu2_function_top_wide_pane_cp01

0x90af,	// (0x0004b5e1) wait_bar_pane_cp05_ParamLimits

0xa67e,	// (0x0004cbb0) listscroll_cmail_pane

0xb530,	// (0x0004da62) list_cmail_pane

0x9a6b,	// (0x0004bf9d) list_cmail_body_pane

0x9a83,	// (0x0004bfb5) list_single_cmail_header_caption_pane

0x9aa0,	// (0x0004bfd2) list_single_cmail_header_detail_pane_ParamLimits

0x9aa0,	// (0x0004bfd2) list_single_cmail_header_detail_pane

0x9ad2,	// (0x0004c004) list_single_cmail_header_caption_pane_t1

0x1354,	// (0x00043886) list_single_cmail_header_detail_pane_g1_ParamLimits

0x1354,	// (0x00043886) list_single_cmail_header_detail_pane_g1

0xb550,	// (0x0004da82) list_single_cmail_header_detail_pane_g2_ParamLimits

0xb550,	// (0x0004da82) list_single_cmail_header_detail_pane_g2

0x0002,

0xfbf7,	// (0x00052129) list_single_cmail_header_detail_pane_g_ParamLimits

0xfbf7,	// (0x00052129) list_single_cmail_header_detail_pane_g

0xb569,	// (0x0004da9b) list_single_cmail_header_detail_pane_t1_ParamLimits

0xb569,	// (0x0004da9b) list_single_cmail_header_detail_pane_t1

0xb5a7,	// (0x0004dad9) list_single_cmail_header_editor_pane_bg_ParamLimits

0xb5a7,	// (0x0004dad9) list_single_cmail_header_editor_pane_bg

0x8f19,	// (0x0004b44b) list_cmail_body_pane_g1

0xb5b9,	// (0x0004daeb) list_cmail_body_pane_t1

0x6db4,	// (0x000492e6) list_single_cmail_header_editor_pane_bg_g1

0xc99a,	// (0x0004eecc) list_single_cmail_header_editor_pane_bg_g1_copy1

0x6dc4,	// (0x000492f6) list_single_cmail_header_editor_pane_bg_g1_copy2

0x6dbc,	// (0x000492ee) list_single_cmail_header_editor_pane_bg_g1_copy3

0x777f,	// (0x00049cb1) list_single_cmail_header_editor_pane_bg_g1_copy4

0x6de4,	// (0x00049316) list_single_cmail_header_editor_pane_bg_g1_copy4_copy1

0x6dd4,	// (0x00049306) list_single_cmail_header_editor_pane_bg_g1_copy4_copy2

0x6ddc,	// (0x0004930e) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3

0xc97a,	// (0x0004eeac) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3_copy1

0x9ae2,	// (0x0004c014) calenote_gesture_pane_ParamLimits

0x9ae2,	// (0x0004c014) calenote_gesture_pane

0x9b02,	// (0x0004c034) calenote_window_pane_ParamLimits

0x9b02,	// (0x0004c034) calenote_window_pane

0xb5c7,	// (0x0004daf9) popup_note_window_cp01

0x9b1e,	// (0x0004c050) calenote_swipe_1_pane_ParamLimits

0x9b1e,	// (0x0004c050) calenote_swipe_1_pane

0x97af,	// (0x0004bce1) calenote_swipe_2_pane_ParamLimits

0x97af,	// (0x0004bce1) calenote_swipe_2_pane

0x96e3,	// (0x0004bc15) calenote_swipe_1_pane_g1_ParamLimits

0x96e3,	// (0x0004bc15) calenote_swipe_1_pane_g1

0x96f0,	// (0x0004bc22) calenote_swipe_1_pane_g2_ParamLimits

0x96f0,	// (0x0004bc22) calenote_swipe_1_pane_g2

0x0001,

0xfb26,	// (0x00052058) calenote_swipe_1_pane_g_ParamLimits

0xfb26,	// (0x00052058) calenote_swipe_1_pane_g

0xb5d9,	// (0x0004db0b) calenote_swipe_1_pane_t1_ParamLimits

0xb5d9,	// (0x0004db0b) calenote_swipe_1_pane_t1

0x96e3,	// (0x0004bc15) calenote_swipe_2_pane_g1_ParamLimits

0x96e3,	// (0x0004bc15) calenote_swipe_2_pane_g1

0xb5f8,	// (0x0004db2a) calenote_swipe_2_pane_g2_ParamLimits

0xb5f8,	// (0x0004db2a) calenote_swipe_2_pane_g2

0x0001,

0xfc03,	// (0x00052135) calenote_swipe_2_pane_g_ParamLimits

0xfc03,	// (0x00052135) calenote_swipe_2_pane_g

0xb604,	// (0x0004db36) calenote_swipe_2_pane_t1_ParamLimits

0xb604,	// (0x0004db36) calenote_swipe_2_pane_t1

0xa67e,	// (0x0004cbb0) main_mup_navstr_pane

0x57c2,	// (0x00047cf4) main_mup3_pane_t7_ParamLimits

0x57c2,	// (0x00047cf4) main_mup3_pane_t7

0xad08,	// (0x0004d23a) main_mp4_pane_g6_ParamLimits

0xad08,	// (0x0004d23a) main_mp4_pane_g6

0xae9e,	// (0x0004d3d0) main_image3_pane_t4_ParamLimits

0xae9e,	// (0x0004d3d0) main_image3_pane_t4

0x9b33,	// (0x0004c065) popup_navstr_preview_pane_ParamLimits

0x9b33,	// (0x0004c065) popup_navstr_preview_pane

0x9b43,	// (0x0004c075) scroll_navstr_pane_ParamLimits

0x9b43,	// (0x0004c075) scroll_navstr_pane

0xa67e,	// (0x0004cbb0) bg_popup_preview_window_pane_cp04

0xb62b,	// (0x0004db5d) popup_navstr_preview_pane_t1

0x9b57,	// (0x0004c089) scroll_navstr_pane_g1_ParamLimits

0x9b57,	// (0x0004c089) scroll_navstr_pane_g1

0x9b6b,	// (0x0004c09d) scroll_navstr_pane_t1_ParamLimits

0x9b6b,	// (0x0004c09d) scroll_navstr_pane_t1

0xb5d0,	// (0x0004db02) bg_button_pane_cp014

0xb5d0,	// (0x0004db02) bg_button_pane_cp030

0x0f38,	// (0x0004346a) list_double_fisheye_pane_g4_ParamLimits

0x0f38,	// (0x0004346a) list_double_fisheye_pane_g4

0x0f44,	// (0x00043476) list_double_fisheye_pane_g5_ParamLimits

0x0f44,	// (0x00043476) list_double_fisheye_pane_g5

0xb538,	// (0x0004da6a) sp_fs_scroll_pane_cp03

0x98da,	// (0x0004be0c) main_sp_fs_ctrlbar_pane_g1_ParamLimits

0x98e6,	// (0x0004be18) main_sp_fs_ctrlbar_pane_g2_ParamLimits

0xfb43,	// (0x00052075) main_sp_fs_ctrlbar_pane_g_ParamLimits

0x98f2,	// (0x0004be24) main_sp_fs_ctrlbar_pane_t1_ParamLimits

0x9a61,	// (0x0004bf93) sp_fs_scroll_pane_cp02

0xc6a6,	// (0x0004ebd8) popup_sp_fs_calendar_preview_list_single_pane_ParamLimits

0xc6a6,	// (0x0004ebd8) popup_sp_fs_calendar_preview_list_single_pane

0xa67e,	// (0x0004cbb0) main_cam6_pano_pane

0xa6f7,	// (0x0004cc29) main_mup3_pane_ParamLimits

0xa67e,	// (0x0004cbb0) main_phacti_pane

0x8f80,	// (0x0004b4b2) bg_button_pane_cp11

0x8f9a,	// (0x0004b4cc) main_mobtv_info_pane_g2_ParamLimits

0x8f9a,	// (0x0004b4cc) main_mobtv_info_pane_g2

0x0001,

0xfaa3,	// (0x00051fd5) main_mobtv_info_pane_g_ParamLimits

0xfaa3,	// (0x00051fd5) main_mobtv_info_pane_g

0x921d,	// (0x0004b74f) sc_clock_pane_t5_ParamLimits

0x921d,	// (0x0004b74f) sc_clock_pane_t5

0x93f7,	// (0x0004b929) main_radioblah_pane_g1_ParamLimits

0x943d,	// (0x0004b96f) main_radioblah_pane_t3_ParamLimits

0x943d,	// (0x0004b96f) main_radioblah_pane_t3

0x9455,	// (0x0004b987) main_radioblah_pane_t4_ParamLimits

0x9455,	// (0x0004b987) main_radioblah_pane_t4

0x9483,	// (0x0004b9b5) main_radioblah_text_pane_ParamLimits

0x9483,	// (0x0004b9b5) main_radioblah_text_pane

0x9495,	// (0x0004b9c7) main_radioblah_info_pane_g1_ParamLimits

0x9568,	// (0x0004ba9a) main_radioblah_info_pane_t4_ParamLimits

0x9568,	// (0x0004ba9a) main_radioblah_info_pane_t4

0xa6f7,	// (0x0004cc29) main_sp_fs_calendar_pane

0x9b82,	// (0x0004c0b4) main_phacti_pane_g1

0x9b8a,	// (0x0004c0bc) phacti_note_pane_ParamLimits

0x9b8a,	// (0x0004c0bc) phacti_note_pane

0xb642,	// (0x0004db74) phacti_term_pane_ParamLimits

0xb642,	// (0x0004db74) phacti_term_pane

0xb657,	// (0x0004db89) phacti_note_pane_t1_ParamLimits

0xb657,	// (0x0004db89) phacti_note_pane_t1

0xb66e,	// (0x0004dba0) phacti_term_pane_g1

0xb676,	// (0x0004dba8) phacti_term_pane_t1_ParamLimits

0xb676,	// (0x0004dba8) phacti_term_pane_t1

0xb6a0,	// (0x0004dbd2) popup_sp_fs_calendar_preview_list_single_pane_g1

0xb6a8,	// (0x0004dbda) popup_sp_fs_calendar_preview_list_single_pane_g2

0x0001,

0xfc0d,	// (0x0005213f) popup_sp_fs_calendar_preview_list_single_pane_g

0xb6b0,	// (0x0004dbe2) popup_sp_fs_calendar_preview_list_single_pane_t1_ParamLimits

0xb6b0,	// (0x0004dbe2) popup_sp_fs_calendar_preview_list_single_pane_t1

0xb6c6,	// (0x0004dbf8) aid_popup_sp_fs_bg_corner_pane

0xe896,	// (0x00050dc8) popup_sp_fs_calendar_preview_bg_pane_g1

0xa67e,	// (0x0004cbb0) popup_sp_fs_calendar_preview_bg_pane

0xb6ce,	// (0x0004dc00) popup_sp_fs_calendar_preview_list_pane

0xa6f7,	// (0x0004cc29) bg_main_sp_fs_cale_pane_ParamLimits

0xa6f7,	// (0x0004cc29) bg_main_sp_fs_cale_pane

0xb6d6,	// (0x0004dc08) listscroll_cale_mrui_pane_ParamLimits

0xb6d6,	// (0x0004dc08) listscroll_cale_mrui_pane

0xb6ea,	// (0x0004dc1c) listscroll_sp_fs_schedule_track_pane

0xb6f3,	// (0x0004dc25) main_sp_fs_ctrlbar_pane_cp01_ParamLimits

0xb6f3,	// (0x0004dc25) main_sp_fs_ctrlbar_pane_cp01

0xb704,	// (0x0004dc36) main_sp_fs_ribbon_pane

0xb70c,	// (0x0004dc3e) popup_sp_fs_cale_preview_window

0x9be1,	// (0x0004c113) list_single_sp_fs_schedule_track_pane_ParamLimits

0x9be1,	// (0x0004c113) list_single_sp_fs_schedule_track_pane

0xa6f7,	// (0x0004cc29) bg_sp_fs_highlight_list_pane_cp03_ParamLimits

0xa6f7,	// (0x0004cc29) bg_sp_fs_highlight_list_pane_cp03

0x9bf4,	// (0x0004c126) list_single_sp_fs_schedule_track_pane_g1_ParamLimits

0x9bf4,	// (0x0004c126) list_single_sp_fs_schedule_track_pane_g1

0x9c00,	// (0x0004c132) list_single_sp_fs_schedule_track_pane_g2_ParamLimits

0x9c00,	// (0x0004c132) list_single_sp_fs_schedule_track_pane_g2

0x0001,

0xfc12,	// (0x00052144) list_single_sp_fs_schedule_track_pane_g_ParamLimits

0xfc12,	// (0x00052144) list_single_sp_fs_schedule_track_pane_g

0x9c0c,	// (0x0004c13e) list_single_sp_fs_schedule_track_pane_t1_ParamLimits

0x9c0c,	// (0x0004c13e) list_single_sp_fs_schedule_track_pane_t1

0x9c2e,	// (0x0004c160) sp_fs_schedule_track_pane_ParamLimits

0x9c2e,	// (0x0004c160) sp_fs_schedule_track_pane

0xb71e,	// (0x0004dc50) sp_fs_schedule_track_pane_g1

0xb726,	// (0x0004dc58) sp_fs_schedule_track_pane_g2

0xb72e,	// (0x0004dc60) sp_fs_schedule_track_pane_g3

0xb736,	// (0x0004dc68) sp_fs_schedule_track_pane_g4

0xb73e,	// (0x0004dc70) sp_fs_schedule_track_pane_g5

0x0004,

0xfc17,	// (0x00052149) sp_fs_schedule_track_pane_g

0x6db4,	// (0x000492e6) bg_sp_fs_schedule_viewer_highlight_g1

0xc99a,	// (0x0004eecc) bg_sp_fs_schedule_viewer_highlight_g2

0x6dbc,	// (0x000492ee) bg_sp_fs_schedule_viewer_highlight_g3

0x6dc4,	// (0x000492f6) bg_sp_fs_schedule_viewer_highlight_g4

0x777f,	// (0x00049cb1) bg_sp_fs_schedule_viewer_highlight_g5

0x6dd4,	// (0x00049306) bg_sp_fs_schedule_viewer_highlight_g6

0x6ddc,	// (0x0004930e) bg_sp_fs_schedule_viewer_highlight_g7

0x6de4,	// (0x00049316) bg_sp_fs_schedule_viewer_highlight_g8

0xc97a,	// (0x0004eeac) bg_sp_fs_schedule_viewer_highlight_g9

0x0008,

0xfc22,	// (0x00052154) bg_sp_fs_schedule_viewer_highlight_g

0xa67e,	// (0x0004cbb0) bg_main_sp_fs_ribbon_pane

0x9c43,	// (0x0004c175) main_sp_fs_ribbon_pane_g1

0xb746,	// (0x0004dc78) main_sp_fs_ribbon_pane_t1

0x9c4c,	// (0x0004c17e) main_sp_fs_ribbon_pane_t2

0xb755,	// (0x0004dc87) main_sp_fs_ribbon_pane_t3

0x0002,

0xfc35,	// (0x00052167) main_sp_fs_ribbon_pane_t

0xb764,	// (0x0004dc96) main_sp_fs_ribbon_scheduler_pane

0xb76c,	// (0x0004dc9e) bg_main_sp_fs_ribbon_pane_g1

0xb775,	// (0x0004dca7) bg_main_sp_fs_ribbon_pane_g2

0xb77e,	// (0x0004dcb0) bg_main_sp_fs_ribbon_pane_g3

0x0002,

0xfc3c,	// (0x0005216e) bg_main_sp_fs_ribbon_pane_g

0xb786,	// (0x0004dcb8) main_sp_fs_ribbon_scheduler_pane_g1

0xb78f,	// (0x0004dcc1) main_sp_fs_ribbon_scheduler_pane_g2

0xb798,	// (0x0004dcca) main_sp_fs_ribbon_scheduler_pane_g3

0x0002,

0xfc43,	// (0x00052175) main_sp_fs_ribbon_scheduler_pane_g

0xb7a1,	// (0x0004dcd3) list_cale_mrui_pane

0x9c5b,	// (0x0004c18d) sp_fs_scroll_pane_cp07_ParamLimits

0x9c5b,	// (0x0004c18d) sp_fs_scroll_pane_cp07

0x9c71,	// (0x0004c1a3) bg_sp_fs_schedule_viewer_highlight_ParamLimits

0x9c71,	// (0x0004c1a3) bg_sp_fs_schedule_viewer_highlight

0xb7aa,	// (0x0004dcdc) list_single_sp_fs_schedule_track_pane_cp01

0xb7b2,	// (0x0004dce4) list_sp_fs_schedule_track_pane

0xb7ba,	// (0x0004dcec) sp_fs_scroll_pane_cp06_ParamLimits

0xb7ba,	// (0x0004dcec) sp_fs_scroll_pane_cp06

0xe896,	// (0x00050dc8) bgmain_sp_fs_calendar_pane_g1

0x1392,	// (0x000438c4) list_single_cale_mrui_pane_ParamLimits

0x1392,	// (0x000438c4) list_single_cale_mrui_pane

0xb7cc,	// (0x0004dcfe) list_single_cale_mrui_row_pane_ParamLimits

0xb7cc,	// (0x0004dcfe) list_single_cale_mrui_row_pane

0xb7d9,	// (0x0004dd0b) list_single_cale_mrui_row_pane_g1_ParamLimits

0xb7d9,	// (0x0004dd0b) list_single_cale_mrui_row_pane_g1

0xb811,	// (0x0004dd43) list_single_cale_mrui_row_pane_t1_ParamLimits

0xb811,	// (0x0004dd43) list_single_cale_mrui_row_pane_t1

0x13b5,	// (0x000438e7) list_single_cale_mrui_row_pane_t2_ParamLimits

0x13b5,	// (0x000438e7) list_single_cale_mrui_row_pane_t2

0xb823,	// (0x0004dd55) list_single_cale_mrui_row_pane_t3_ParamLimits

0xb823,	// (0x0004dd55) list_single_cale_mrui_row_pane_t3

0xb852,	// (0x0004dd84) list_single_cale_mrui_row_pane_t4_ParamLimits

0xb852,	// (0x0004dd84) list_single_cale_mrui_row_pane_t4

0x0003,

0xfc4f,	// (0x00052181) list_single_cale_mrui_row_pane_t_ParamLimits

0xfc4f,	// (0x00052181) list_single_cale_mrui_row_pane_t

0x141d,	// (0x0004394f) list_single_cmail_header_editor_pane_bg_cp01_ParamLimits

0x141d,	// (0x0004394f) list_single_cmail_header_editor_pane_bg_cp01

0x1443,	// (0x00043975) list_single_cmail_header_editor_pane_bg_cp02_ParamLimits

0x1443,	// (0x00043975) list_single_cmail_header_editor_pane_bg_cp02

0x9c83,	// (0x0004c1b5) main_radioblah_text_pane_t1_ParamLimits

0x9c83,	// (0x0004c1b5) main_radioblah_text_pane_t1

0xb881,	// (0x0004ddb3) cam6_indi_pane_cp01

0xb889,	// (0x0004ddbb) cam6_mode_pane_cp01

0xb891,	// (0x0004ddc3) cam6_pano_pane

0xb89a,	// (0x0004ddcc) cam6_zoom_pane_cp01

0xb8a4,	// (0x0004ddd6) cam6_pano_image_pane

0xb8ad,	// (0x0004dddf) cam6_pano_pane_g1

0x8f19,	// (0x0004b44b) cam6_pano_pane_g2

0xb8b6,	// (0x0004dde8) cam6_pano_pane_g3

0xb8bf,	// (0x0004ddf1) cam6_pano_pane_g4

0xee02,	// (0x00051334) cam6_pano_pane_g5

0xb8c8,	// (0x0004ddfa) cam6_pano_pane_g6

0xb8d0,	// (0x0004de02) cam6_pano_pane_g7

0xb8d8,	// (0x0004de0a) cam6_pano_pane_g8

0xb8e1,	// (0x0004de13) cam6_pano_pane_g9

0x0008,

0xfc58,	// (0x0005218a) cam6_pano_pane_g

0xa67e,	// (0x0004cbb0) main_browser_tag_pane

0xb623,	// (0x0004db55) grid_navstr_albumart_pane

0xb8ec,	// (0x0004de1e) cell_navstr_albumart_pane_ParamLimits

0xb8ec,	// (0x0004de1e) cell_navstr_albumart_pane

0xb908,	// (0x0004de3a) cell_navstr_albumart_pane_g1

0xe22c,	// (0x0005075e) cell_navstr_albumart_pane_g2

0xe23c,	// (0x0005076e) cell_navstr_albumart_pane_g3

0xe234,	// (0x00050766) cell_navstr_albumart_pane_g4

0x0003,

0xfc6b,	// (0x0005219d) cell_navstr_albumart_pane_g

0x9c9e,	// (0x0004c1d0) bt_list_pane_ParamLimits

0x9c9e,	// (0x0004c1d0) bt_list_pane

0x9cb4,	// (0x0004c1e6) bt_list_pane_t1

0x9cc3,	// (0x0004c1f5) bt_list_pane_t2

0x0001,

0xfc74,	// (0x000521a6) bt_list_pane_t

0xa67e,	// (0x0004cbb0) main_cale_prevew_pane

0x9cd2,	// (0x0004c204) popup_cale_preview_window_ParamLimits

0x9cd2,	// (0x0004c204) popup_cale_preview_window

0xa6f7,	// (0x0004cc29) bg_popup_preview_window_pane_cp05_ParamLimits

0xa6f7,	// (0x0004cc29) bg_popup_preview_window_pane_cp05

0xb910,	// (0x0004de42) list_cale_preview_pane_ParamLimits

0xb910,	// (0x0004de42) list_cale_preview_pane

0x9ced,	// (0x0004c21f) list_double_cale_preview_pane_ParamLimits

0x9ced,	// (0x0004c21f) list_double_cale_preview_pane

0x9d01,	// (0x0004c233) list_single_cale_preview_pane_ParamLimits

0x9d01,	// (0x0004c233) list_single_cale_preview_pane

0x9d19,	// (0x0004c24b) list_single_cale_preview_pane_g1

0x9d21,	// (0x0004c253) list_single_cale_preview_pane_t1_ParamLimits

0x9d21,	// (0x0004c253) list_single_cale_preview_pane_t1

0x9d36,	// (0x0004c268) list_double_cale_preview_pane_g1

0x9d3e,	// (0x0004c270) list_double_cale_preview_pane_t1_ParamLimits

0x9d3e,	// (0x0004c270) list_double_cale_preview_pane_t1

0x9d53,	// (0x0004c285) list_double_cale_preview_pane_t2_ParamLimits

0x9d53,	// (0x0004c285) list_double_cale_preview_pane_t2

0x0001,

0xfc79,	// (0x000521ab) list_double_cale_preview_pane_t_ParamLimits

0xfc79,	// (0x000521ab) list_double_cale_preview_pane_t

0xa67e,	// (0x0004cbb0) main_ezdial_pane

0xa6f7,	// (0x0004cc29) main_sp_fs_email_pane_ParamLimits

0x9844,	// (0x0004bd76) cmail_ddmenu_btn01_pane_ParamLimits

0x9844,	// (0x0004bd76) cmail_ddmenu_btn01_pane

0x9857,	// (0x0004bd89) cmail_ddmenu_btn02_pane_ParamLimits

0x9857,	// (0x0004bd89) cmail_ddmenu_btn02_pane

0x98b4,	// (0x0004bde6) cmail_ddmenu_btn03_pane_ParamLimits

0x98b4,	// (0x0004bde6) cmail_ddmenu_btn03_pane

0x0fb4,	// (0x000434e6) main_sp_fs_ctrlbar_pane_ParamLimits

0x0fd8,	// (0x0004350a) main_sp_fs_listscroll_pane_te_cp01_ParamLimits

0x9a6b,	// (0x0004bf9d) list_cmail_body_pane_ParamLimits

0xb547,	// (0x0004da79) bg_button_pane_cp12

0xb55c,	// (0x0004da8e) list_single_cmail_header_detail_pane_g3_ParamLimits

0xb55c,	// (0x0004da8e) list_single_cmail_header_detail_pane_g3

0x136c,	// (0x0004389e) list_single_cmail_header_detail_pane_t2_ParamLimits

0x136c,	// (0x0004389e) list_single_cmail_header_detail_pane_t2

0x0001,

0xfbfe,	// (0x00052130) list_single_cmail_header_detail_pane_t_ParamLimits

0xfbfe,	// (0x00052130) list_single_cmail_header_detail_pane_t

0xb68b,	// (0x0004dbbd) phacti_term_pane_t2_ParamLimits

0xb68b,	// (0x0004dbbd) phacti_term_pane_t2

0x0001,

0xfc08,	// (0x0005213a) phacti_term_pane_t_ParamLimits

0xfc08,	// (0x0005213a) phacti_term_pane_t

0xb91c,	// (0x0004de4e) aid_size_list_single_double

0x9d6b,	// (0x0004c29d) popup_ezdial_listscroll_window

0x9d87,	// (0x0004c2b9) popup_number_entry_window_cp01

0xcfe4,	// (0x0004f516) bg_popup_call_pane_cp09

0xb928,	// (0x0004de5a) ezdial_list_pane

0xb930,	// (0x0004de62) scroll_pane_cp23

0xe413,	// (0x00050945) bg_button_pane_cp028_ParamLimits

0xe413,	// (0x00050945) bg_button_pane_cp028

0x9d95,	// (0x0004c2c7) cmail_ddmenu_btn01_pane_g1_ParamLimits

0x9d95,	// (0x0004c2c7) cmail_ddmenu_btn01_pane_g1

0x9da1,	// (0x0004c2d3) cmail_ddmenu_btn01_pane_g2_ParamLimits

0x9da1,	// (0x0004c2d3) cmail_ddmenu_btn01_pane_g2

0x0001,

0xfc7e,	// (0x000521b0) cmail_ddmenu_btn01_pane_g_ParamLimits

0xfc7e,	// (0x000521b0) cmail_ddmenu_btn01_pane_g

0xb938,	// (0x0004de6a) cmail_ddmenu_btn01_pane_t1_ParamLimits

0xb938,	// (0x0004de6a) cmail_ddmenu_btn01_pane_t1

0xe413,	// (0x00050945) bg_button_pane_cp029_ParamLimits

0xe413,	// (0x00050945) bg_button_pane_cp029

0x9dad,	// (0x0004c2df) cmail_ddmenu_btn02_pane_g1_ParamLimits

0x9dad,	// (0x0004c2df) cmail_ddmenu_btn02_pane_g1

0x9dc5,	// (0x0004c2f7) cmail_ddmenu_btn02_pane_t1_ParamLimits

0x9dc5,	// (0x0004c2f7) cmail_ddmenu_btn02_pane_t1

0xa6f7,	// (0x0004cc29) bg_button_pane_cp031_ParamLimits

0xa6f7,	// (0x0004cc29) bg_button_pane_cp031

0x9dad,	// (0x0004c2df) cmail_ddmenu_btn03_pane_g1_ParamLimits

0x9dad,	// (0x0004c2df) cmail_ddmenu_btn03_pane_g1

0x9dc5,	// (0x0004c2f7) cmail_ddmenu_btn03_pane_t1_ParamLimits

0x9dc5,	// (0x0004c2f7) cmail_ddmenu_btn03_pane_t1

0x63e9,	// (0x0004891b) cell_dialer2_keypad_pane_t1_ParamLimits

0x6403,	// (0x00048935) cell_dialer2_keypad_pane_t1_copy1_ParamLimits

0x6403,	// (0x00048935) cell_dialer2_keypad_pane_t1_copy1

0x8b2a,	// (0x0004b05c) ncimui_group_button_pane

0xa6f7,	// (0x0004cc29) main_sp_fs_calendar_pane_ParamLimits

0x9a83,	// (0x0004bfb5) list_single_cmail_header_caption_pane_ParamLimits

0xb189,	// (0x0004d6bb) aid_recal_txt_sm_pane

0xa67e,	// (0x0004cbb0) mian_recal_day_pane

0xb70c,	// (0x0004dc3e) popup_sp_fs_cale_preview_window_ParamLimits

0xa67e,	// (0x0004cbb0) list_recal_day_pane

0xb966,	// (0x0004de98) list_single_recal_day_pane_ParamLimits

0xb966,	// (0x0004de98) list_single_recal_day_pane

0xb978,	// (0x0004deaa) list_single_recal_day_pane_g1_ParamLimits

0xb978,	// (0x0004deaa) list_single_recal_day_pane_g1

0xb984,	// (0x0004deb6) list_single_recal_day_pane_g2_ParamLimits

0xb984,	// (0x0004deb6) list_single_recal_day_pane_g2

0xb990,	// (0x0004dec2) list_single_recal_day_pane_g3_ParamLimits

0xb990,	// (0x0004dec2) list_single_recal_day_pane_g3

0x9de9,	// (0x0004c31b) list_single_recal_day_pane_g4_ParamLimits

0x9de9,	// (0x0004c31b) list_single_recal_day_pane_g4

0xb99c,	// (0x0004dece) list_single_recal_day_pane_g5_ParamLimits

0xb99c,	// (0x0004dece) list_single_recal_day_pane_g5

0xb9a8,	// (0x0004deda) list_single_recal_day_pane_g6_ParamLimits

0xb9a8,	// (0x0004deda) list_single_recal_day_pane_g6

0x0005,

0xfc8d,	// (0x000521bf) list_single_recal_day_pane_g_ParamLimits

0xfc8d,	// (0x000521bf) list_single_recal_day_pane_g

0xb9b4,	// (0x0004dee6) list_single_recal_day_pane_t1

0xb9c2,	// (0x0004def4) list_single_recal_day_pane_t2

0x0001,

0xfc9a,	// (0x000521cc) list_single_recal_day_pane_t

0x9df7,	// (0x0004c329) ncimui_query_button_pane_ParamLimits

0x9df7,	// (0x0004c329) ncimui_query_button_pane

0x9e07,	// (0x0004c339) ncimui_query_button_pane_t1_ParamLimits

0x9e07,	// (0x0004c339) ncimui_query_button_pane_t1

0xb9d0,	// (0x0004df02) ncimui_query_button_pane_t2_ParamLimits

0xb9d0,	// (0x0004df02) ncimui_query_button_pane_t2

0x0001,

0xfc9f,	// (0x000521d1) ncimui_query_button_pane_t_ParamLimits

0xfc9f,	// (0x000521d1) ncimui_query_button_pane_t

0x9e1a,	// (0x0004c34c) query_button_pane_ParamLimits

0x9e1a,	// (0x0004c34c) query_button_pane

0xa67e,	// (0x0004cbb0) bg_button_pane_cp0028

0xb9e3,	// (0x0004df15) query_button_pane_t1

0x4417,	// (0x00046949) main_tport_pane_ParamLimits

0x9951,	// (0x0004be83) bg_popup_window_pane_cp01_ParamLimits

0x9951,	// (0x0004be83) bg_popup_window_pane_cp01

0x9967,	// (0x0004be99) heading_pane_cp08_ParamLimits

0x9967,	// (0x0004be99) heading_pane_cp08

0x9978,	// (0x0004beaa) heading_pane_cp07_ParamLimits

0x9978,	// (0x0004beaa) heading_pane_cp07

0xb512,	// (0x0004da44) cell_tport_appsw_pane_g2

0x0002,

0xfbeb,	// (0x0005211d) cell_tport_appsw_pane_g

0x0ba8,	// (0x000430da) input_candi_list_open_g1

0xcb35,	// (0x0004f067) list_cale_time_pane_g6_ParamLimits

0xcb35,	// (0x0004f067) list_cale_time_pane_g6

0x5205,	// (0x00047737) aid_size_touch_calib_1_ParamLimits

0x5205,	// (0x00047737) aid_size_touch_calib_1

0x5211,	// (0x00047743) aid_size_touch_calib_2_ParamLimits

0x5211,	// (0x00047743) aid_size_touch_calib_2

0x5227,	// (0x00047759) aid_size_touch_calib_3_ParamLimits

0x5227,	// (0x00047759) aid_size_touch_calib_3

0x5245,	// (0x00047777) aid_size_touch_calib_4_ParamLimits

0x5245,	// (0x00047777) aid_size_touch_calib_4

0x525b,	// (0x0004778d) main_touch_calib_button_group_pane_ParamLimits

0x525b,	// (0x0004778d) main_touch_calib_button_group_pane

0x5273,	// (0x000477a5) main_touch_calib_pane_g1_ParamLimits

0x527f,	// (0x000477b1) main_touch_calib_pane_g2_ParamLimits

0x528b,	// (0x000477bd) main_touch_calib_pane_g3_ParamLimits

0x5297,	// (0x000477c9) main_touch_calib_pane_g4_ParamLimits

0xf63e,	// (0x00051b70) main_touch_calib_pane_g_ParamLimits

0x52a3,	// (0x000477d5) main_touch_calib_pane_t1_ParamLimits

0x52bd,	// (0x000477ef) main_touch_calib_pane_t2_ParamLimits

0x52d7,	// (0x00047809) main_touch_calib_pane_t3_ParamLimits

0x52eb,	// (0x0004781d) main_touch_calib_pane_t4_ParamLimits

0x52ff,	// (0x00047831) main_touch_calib_pane_t5_ParamLimits

0xf647,	// (0x00051b79) main_touch_calib_pane_t_ParamLimits

0xebcc,	// (0x000510fe) list_single_fp_cale_pane_g3_ParamLimits

0xebcc,	// (0x000510fe) list_single_fp_cale_pane_g3

0xa6f7,	// (0x0004cc29) bg_button_pane_cp012_ParamLimits

0xa6f7,	// (0x0004cc29) bg_vkb2_func_pane_cp03_ParamLimits

0x7735,	// (0x00049c67) cell_vitu2_function_top_pane_g1_ParamLimits

0xa6f7,	// (0x0004cc29) bg_vkb2_func_pane_cp04_ParamLimits

0x8aca,	// (0x0004affc) main_ncimui_button_group_pane_ParamLimits

0x8aca,	// (0x0004affc) main_ncimui_button_group_pane

0x8b18,	// (0x0004b04a) main_ncimui_pane_t3_ParamLimits

0x8b18,	// (0x0004b04a) main_ncimui_pane_t3

0xb639,	// (0x0004db6b) phacti_button_group_pane

0xb91c,	// (0x0004de4e) aid_size_list_single_double_ParamLimits

0x9d6b,	// (0x0004c29d) popup_ezdial_listscroll_window_ParamLimits

0x9d87,	// (0x0004c2b9) popup_number_entry_window_cp01_ParamLimits

0x9e2d,	// (0x0004c35f) phacti_button_pane_ParamLimits

0x9e2d,	// (0x0004c35f) phacti_button_pane

0xa67e,	// (0x0004cbb0) bg_button_pane_cp14

0xb9f1,	// (0x0004df23) phacti_button_pane_t1

0x9e3e,	// (0x0004c370) main_touch_calib_button_pane_ParamLimits

0x9e3e,	// (0x0004c370) main_touch_calib_button_pane

0xc590,	// (0x0004eac2) bg_button_pane_cp18_ParamLimits

0xc590,	// (0x0004eac2) bg_button_pane_cp18

0xb9ff,	// (0x0004df31) main_touch_calib_button_pane_t1_ParamLimits

0xb9ff,	// (0x0004df31) main_touch_calib_button_pane_t1

0xba15,	// (0x0004df47) main_touch_calib_button_pane_t2_ParamLimits

0xba15,	// (0x0004df47) main_touch_calib_button_pane_t2

0x0001,

0xfca4,	// (0x000521d6) main_touch_calib_button_pane_t_ParamLimits

0xfca4,	// (0x000521d6) main_touch_calib_button_pane_t

0xa67e,	// (0x0004cbb0) cell_ncimui_button_pane

0xa67e,	// (0x0004cbb0) bg_button_pane_cp032

0xba33,	// (0x0004df65) cell_ncimui_button_pane_t1

0xae7c,	// (0x0004d3ae) image3_infobar_pane_ParamLimits

0xae7c,	// (0x0004d3ae) image3_infobar_pane

0x9249,	// (0x0004b77b) fs_bigclock_status_pane_ParamLimits

0x9249,	// (0x0004b77b) fs_bigclock_status_pane

0x9256,	// (0x0004b788) main_fs_bigclock_clock_pane_ParamLimits

0x9256,	// (0x0004b788) main_fs_bigclock_clock_pane

0x9269,	// (0x0004b79b) main_fs_bigclock_indi_pane_ParamLimits

0x9269,	// (0x0004b79b) main_fs_bigclock_indi_pane

0x9287,	// (0x0004b7b9) main_fs_bigclock_swipe_pane_ParamLimits

0x9287,	// (0x0004b7b9) main_fs_bigclock_swipe_pane

0xa67e,	// (0x0004cbb0) main_fs_clock_dumped_data

0x92a8,	// (0x0004b7da) list_single_fs_bigclock_indicator_pane_g1_ParamLimits

0x92a8,	// (0x0004b7da) list_single_fs_bigclock_indicator_pane_g1

0x92c8,	// (0x0004b7fa) list_single_fs_bigclock_indicator_pane_g2_ParamLimits

0x92c8,	// (0x0004b7fa) list_single_fs_bigclock_indicator_pane_g2

0x92e2,	// (0x0004b814) list_single_fs_bigclock_indicator_pane_g3_ParamLimits

0x92e2,	// (0x0004b814) list_single_fs_bigclock_indicator_pane_g3

0x92fe,	// (0x0004b830) list_single_fs_bigclock_indicator_pane_g4_ParamLimits

0x92fe,	// (0x0004b830) list_single_fs_bigclock_indicator_pane_g4

0x0004,

0xfad7,	// (0x00052009) list_single_fs_bigclock_indicator_pane_g_ParamLimits

0xfad7,	// (0x00052009) list_single_fs_bigclock_indicator_pane_g

0x9324,	// (0x0004b856) list_single_fs_bigclock_indicator_pane_t1_ParamLimits

0x9324,	// (0x0004b856) list_single_fs_bigclock_indicator_pane_t1

0x934c,	// (0x0004b87e) list_single_fs_bigclock_indicator_pane_t2_ParamLimits

0x934c,	// (0x0004b87e) list_single_fs_bigclock_indicator_pane_t2

0x9374,	// (0x0004b8a6) list_single_fs_bigclock_indicator_pane_t3_ParamLimits

0x9374,	// (0x0004b8a6) list_single_fs_bigclock_indicator_pane_t3

0x939e,	// (0x0004b8d0) list_single_fs_bigclock_indicator_pane_t4_ParamLimits

0x939e,	// (0x0004b8d0) list_single_fs_bigclock_indicator_pane_t4

0x0004,

0xfae2,	// (0x00052014) list_single_fs_bigclock_indicator_pane_t_ParamLimits

0xfae2,	// (0x00052014) list_single_fs_bigclock_indicator_pane_t

0xba41,	// (0x0004df73) image3_infobar_fav_pane_ParamLimits

0xba41,	// (0x0004df73) image3_infobar_fav_pane

0xba51,	// (0x0004df83) image3_infobar_loc_pane_ParamLimits

0xba51,	// (0x0004df83) image3_infobar_loc_pane

0xba67,	// (0x0004df99) image3_infobar_time_pane_ParamLimits

0xba67,	// (0x0004df99) image3_infobar_time_pane

0xe896,	// (0x00050dc8) image3_infobar_time_pane_g1

0xba77,	// (0x0004dfa9) image3_infobar_time_pane_t1

0xe896,	// (0x00050dc8) image3_infobar_loc_pane_g1

0xba85,	// (0x0004dfb7) image3_infobar_loc_pane_g2

0x0001,

0xfca9,	// (0x000521db) image3_infobar_loc_pane_g

0xba8d,	// (0x0004dfbf) image3_infobar_loc_pane_t1

0xe896,	// (0x00050dc8) image3_infobar_fav_pane_g1

0xba9b,	// (0x0004dfcd) image3_infobar_fav_pane_g2

0x0001,

0xfcae,	// (0x000521e0) image3_infobar_fav_pane_g

0xbaa3,	// (0x0004dfd5) fs_bigclock_status_battery_pane

0xbaac,	// (0x0004dfde) fs_bigclock_status_signal_pane

0xbab5,	// (0x0004dfe7) fs_bigclock_status_title_pane

0xbabe,	// (0x0004dff0) fs_bigclock_status_signal_pane_g1

0xbac7,	// (0x0004dff9) fs_bigclock_status_signal_pane_g2

0x0001,

0xfcb3,	// (0x000521e5) fs_bigclock_status_signal_pane_g

0xbacf,	// (0x0004e001) fs_bigclock_status_battery_pane_g1

0xbad8,	// (0x0004e00a) fs_bigclock_status_battery_pane_g2

0x0001,

0xfcb8,	// (0x000521ea) fs_bigclock_status_battery_pane_g

0xbae0,	// (0x0004e012) fs_bigclock_status_title_pane_t1

0xe896,	// (0x00050dc8) main_fs_bigclock_clock_pane_g1

0xbaee,	// (0x0004e020) main_fs_bigclock_clock_pane_g2

0xbaee,	// (0x0004e020) main_fs_bigclock_clock_pane_g3

0xbaee,	// (0x0004e020) main_fs_bigclock_clock_pane_g4

0x0003,

0xfcbd,	// (0x000521ef) main_fs_bigclock_clock_pane_g

0xbafa,	// (0x0004e02c) main_fs_bigclock_clock_pane_t1

0x9e53,	// (0x0004c385) main_fs_bigclock_clock_pane_t2

0x0001,

0xfcc6,	// (0x000521f8) main_fs_bigclock_clock_pane_t

0xbb08,	// (0x0004e03a) list_single_fs_bigclock_indicator_pane_ParamLimits

0xbb08,	// (0x0004e03a) list_single_fs_bigclock_indicator_pane

0x9e62,	// (0x0004c394) list_single_fs_bigclock_pane_ParamLimits

0x9e62,	// (0x0004c394) list_single_fs_bigclock_pane

0xbb22,	// (0x0004e054) main_fs_bigclock_indicator_pane_t1

0xbb31,	// (0x0004e063) list_single_fs_bigclock_pane_g1

0xbb39,	// (0x0004e06b) list_single_fs_bigclock_pane_t1

0xe896,	// (0x00050dc8) main_fs_bigclock_swipe_pane_g1

0xbb79,	// (0x0004e0ab) main_fs_bigclock_swipe_pane_g2

0x0001,

0xfcd7,	// (0x00052209) main_fs_bigclock_swipe_pane_g

0xbb81,	// (0x0004e0b3) main_fs_bigclock_swipe_pane_t1_ParamLimits

0xbb81,	// (0x0004e0b3) main_fs_bigclock_swipe_pane_t1

0x31c6,	// (0x000456f8) call_type_pane_ParamLimits

0xa67e,	// (0x0004cbb0) main_btmg_pane

0xb805,	// (0x0004dd37) list_single_cale_mrui_row_pane_g2_ParamLimits

0xb805,	// (0x0004dd37) list_single_cale_mrui_row_pane_g2

0x0001,

0xfc4a,	// (0x0005217c) list_single_cale_mrui_row_pane_g_ParamLimits

0xfc4a,	// (0x0005217c) list_single_cale_mrui_row_pane_g

0xb956,	// (0x0004de88) list_recal_vselct_arw_lo_pane

0xb95e,	// (0x0004de90) list_recal_vselct_arw_up_pane

0xb180,	// (0x0004d6b2) list_recal_vselct_pane

0xbb9e,	// (0x0004e0d0) btmg_button_pane

0x9ec9,	// (0x0004c3fb) main_btmg_pane_g1

0xa67e,	// (0x0004cbb0) bg_button_pane_cp044

0xbba8,	// (0x0004e0da) btmg_button_pane_t1

0xe40b,	// (0x0005093d) aid_listscroll_gen

0xa6f7,	// (0x0004cc29) main_cntbar_detail_pane

0xb528,	// (0x0004da5a) list_cmail_folder_pane

0xb538,	// (0x0004da6a) sp_fs_scroll_pane_cp03_ParamLimits

0x1463,	// (0x00043995) list_single_fs_dyc_pane_cp01_ParamLimits

0x1463,	// (0x00043995) list_single_fs_dyc_pane_cp01

0xbbb6,	// (0x0004e0e8) aid_size_cmail_indent

0xbbbf,	// (0x0004e0f1) list_single_dyc_row_pane_cp01

0x9f03,	// (0x0004c435) cntbar_detail_list_pane_ParamLimits

0x9f03,	// (0x0004c435) cntbar_detail_list_pane

0x9f55,	// (0x0004c487) main_cntbar_detail_cont_pane_ParamLimits

0x9f55,	// (0x0004c487) main_cntbar_detail_cont_pane

0x31ba,	// (0x000456ec) scroll_pane_cp032_ParamLimits

0x31ba,	// (0x000456ec) scroll_pane_cp032

0x9f69,	// (0x0004c49b) cntbar_detail_list_event_pane_ParamLimits

0x9f69,	// (0x0004c49b) cntbar_detail_list_event_pane

0x9f15,	// (0x0004c447) cntbar_detail_list_shct_pane

0xc9e8,	// (0x0004ef1a) aid_list_gen

0xbbc8,	// (0x0004e0fa) aid_scroll

0xbbd1,	// (0x0004e103) aid_size_touch_scroll_bar

0xbbda,	// (0x0004e10c) aid_list_double

0xbbe3,	// (0x0004e115) aid_list_single

0x9f79,	// (0x0004c4ab) aid_list_single_lg

0xbbec,	// (0x0004e11e) aid_list_z_g_a_sm

0xbbf4,	// (0x0004e126) aid_list_z_g_d

0xbbfc,	// (0x0004e12e) aid_txt_z_prm

0x147e,	// (0x000439b0) aid_txt_z_prm_cp01

0x148c,	// (0x000439be) aid_txt_z_sec

0x9f82,	// (0x0004c4b4) main_cntbar_detail_cont_pane_g1_ParamLimits

0x9f82,	// (0x0004c4b4) main_cntbar_detail_cont_pane_g1

0x9f96,	// (0x0004c4c8) main_cntbar_detail_cont_pane_g2_ParamLimits

0x9f96,	// (0x0004c4c8) main_cntbar_detail_cont_pane_g2

0x0001,

0xfcdc,	// (0x0005220e) main_cntbar_detail_cont_pane_g_ParamLimits

0xfcdc,	// (0x0005220e) main_cntbar_detail_cont_pane_g

0xbc0a,	// (0x0004e13c) main_cntbar_detail_cont_pane_t1

0xbc18,	// (0x0004e14a) main_cntbar_detail_cont_pane_t2

0xbc26,	// (0x0004e158) main_cntbar_detail_cont_pane_t3

0x0002,

0xfce1,	// (0x00052213) main_cntbar_detail_cont_pane_t

0x9fa6,	// (0x0004c4d8) cell_cntbar_detail_list_shct_pane_ParamLimits

0x9fa6,	// (0x0004c4d8) cell_cntbar_detail_list_shct_pane

0xbc34,	// (0x0004e166) cntbar_detail_list_shct_pane_g1

0xbc3d,	// (0x0004e16f) cntbar_detail_list_shct_pane_g2

0x0001,

0xfce8,	// (0x0005221a) cntbar_detail_list_shct_pane_g

0x9fb8,	// (0x0004c4ea) cntbar_detail_list_event_pane_g1_ParamLimits

0x9fb8,	// (0x0004c4ea) cntbar_detail_list_event_pane_g1

0x9fc4,	// (0x0004c4f6) cntbar_detail_list_event_pane_g2_ParamLimits

0x9fc4,	// (0x0004c4f6) cntbar_detail_list_event_pane_g2

0x0005,

0xfced,	// (0x0005221f) cntbar_detail_list_event_pane_g_ParamLimits

0xfced,	// (0x0005221f) cntbar_detail_list_event_pane_g

0xa032,	// (0x0004c564) cntbar_detail_list_event_pane_t1_ParamLimits

0xa032,	// (0x0004c564) cntbar_detail_list_event_pane_t1

0xa047,	// (0x0004c579) cntbar_detail_list_event_pane_t2_ParamLimits

0xa047,	// (0x0004c579) cntbar_detail_list_event_pane_t2

0x0002,

0xfcfa,	// (0x0005222c) cntbar_detail_list_event_pane_t_ParamLimits

0xfcfa,	// (0x0005222c) cntbar_detail_list_event_pane_t

0xe896,	// (0x00050dc8) cell_cntbar_detail_list_shct_pane_g1

0x356a,	// (0x00045a9c) navi_pane_mv_g3

0xa6f7,	// (0x0004cc29) main_cntbar_detail_pane_ParamLimits

0xa67e,	// (0x0004cbb0) main_notif_wgt_pane

0xacbe,	// (0x0004d1f0) aid_tch_main_mp4_pane_g4

0xae72,	// (0x0004d3a4) popup_slider_window_cp02

0xb94d,	// (0x0004de7f) list_recal_day_event_pane

0x9ed3,	// (0x0004c405) cntbar_detail_btn_pane_ParamLimits

0x9ed3,	// (0x0004c405) cntbar_detail_btn_pane

0x9eeb,	// (0x0004c41d) cntbar_detail_btn_pane_cp01_ParamLimits

0x9eeb,	// (0x0004c41d) cntbar_detail_btn_pane_cp01

0x9f15,	// (0x0004c447) cntbar_detail_list_shct_pane_ParamLimits

0x9f25,	// (0x0004c457) cntbar_detail_pane_g1_ParamLimits

0x9f25,	// (0x0004c457) cntbar_detail_pane_g1

0x9f39,	// (0x0004c46b) cntbar_detail_pane_t1_ParamLimits

0x9f39,	// (0x0004c46b) cntbar_detail_pane_t1

0x9fd0,	// (0x0004c502) cntbar_detail_list_event_pane_g3_ParamLimits

0x9fd0,	// (0x0004c502) cntbar_detail_list_event_pane_g3

0x9fe8,	// (0x0004c51a) cntbar_detail_list_event_pane_g4_ParamLimits

0x9fe8,	// (0x0004c51a) cntbar_detail_list_event_pane_g4

0xa000,	// (0x0004c532) cntbar_detail_list_event_pane_g5_ParamLimits

0xa000,	// (0x0004c532) cntbar_detail_list_event_pane_g5

0xa018,	// (0x0004c54a) cntbar_detail_list_event_pane_g6_ParamLimits

0xa018,	// (0x0004c54a) cntbar_detail_list_event_pane_g6

0xa05c,	// (0x0004c58e) cntbar_detail_list_event_pane_t3_ParamLimits

0xa05c,	// (0x0004c58e) cntbar_detail_list_event_pane_t3

0xa06e,	// (0x0004c5a0) popup_notif_wgt_window_ParamLimits

0xa06e,	// (0x0004c5a0) popup_notif_wgt_window

0xa087,	// (0x0004c5b9) popup_submenu_window_cp01_ParamLimits

0xa087,	// (0x0004c5b9) popup_submenu_window_cp01

0xcfe4,	// (0x0004f516) bg_popup_window_pane_cp10

0xbc46,	// (0x0004e178) listscroll_notif_wgt_pane

0xbc50,	// (0x0004e182) list_notif_wgt_window

0xbc59,	// (0x0004e18b) scroll_pane_cp033

0xbc62,	// (0x0004e194) list_notif_wgt_row_pane_ParamLimits

0xbc62,	// (0x0004e194) list_notif_wgt_row_pane

0xbc76,	// (0x0004e1a8) aid_size_list_notif_wgt_del

0xbc7f,	// (0x0004e1b1) list_notif_wgt_row_pane_g1

0xbc87,	// (0x0004e1b9) list_notif_wgt_row_pane_g2

0xbc8f,	// (0x0004e1c1) list_notif_wgt_row_pane_g3

0x0002,

0xfd01,	// (0x00052233) list_notif_wgt_row_pane_g

0xbc98,	// (0x0004e1ca) list_notif_wgt_row_pane_t1

0xbca6,	// (0x0004e1d8) list_notif_wgt_row_pane_t2

0xbcb4,	// (0x0004e1e6) list_notif_wgt_row_pane_t3

0x0002,

0xfd08,	// (0x0005223a) list_notif_wgt_row_pane_t

0x77d8,	// (0x00049d0a) list_recal_day_event_pane_g1

0xbcc2,	// (0x0004e1f4) list_recal_day_event_pane_t1

0xa67e,	// (0x0004cbb0) bg_button_pane_cp045

0xbcd1,	// (0x0004e203) cntbar_detail_btn_pane_t1

0xe413,	// (0x00050945) main_callh_pane_ParamLimits

0xe413,	// (0x00050945) main_callh_pane

0xa67e,	// (0x0004cbb0) main_coverflow0_pane

0xa67e,	// (0x0004cbb0) main_wgtman_pane

0x9295,	// (0x0004b7c7) main_fs_bigclock_unlock_btn_pane_ParamLimits

0x9295,	// (0x0004b7c7) main_fs_bigclock_unlock_btn_pane

0xb50a,	// (0x0004da3c) bg_button_pane_cp16

0x9a15,	// (0x0004bf47) cell_tport_appsw_pane_g3

0xa099,	// (0x0004c5cb) cf0_flow_pane_ParamLimits

0xa099,	// (0x0004c5cb) cf0_flow_pane

0xbcdf,	// (0x0004e211) listscroll_cf0_pane

0xbce8,	// (0x0004e21a) main_cf0_pane_g1

0xa0ae,	// (0x0004c5e0) main_cf0_pane_t1_ParamLimits

0xa0ae,	// (0x0004c5e0) main_cf0_pane_t1

0xa0c5,	// (0x0004c5f7) main_cf0_pane_t2_ParamLimits

0xa0c5,	// (0x0004c5f7) main_cf0_pane_t2

0x0001,

0xfd0f,	// (0x00052241) main_cf0_pane_t_ParamLimits

0xfd0f,	// (0x00052241) main_cf0_pane_t

0xbcf2,	// (0x0004e224) scroll_pane_cp11

0xa0dc,	// (0x0004c60e) cf0_flow_pane_g1

0xa0e8,	// (0x0004c61a) cf0_flow_pane_g2

0x0001,

0xfd14,	// (0x00052246) cf0_flow_pane_g

0xa0f4,	// (0x0004c626) cf0_flow_pane_t1

0xa67e,	// (0x0004cbb0) main_call6_pane

0xa67e,	// (0x0004cbb0) main_calllock_pane

0xa106,	// (0x0004c638) call6_btn_grp_pane_ParamLimits

0xa106,	// (0x0004c638) call6_btn_grp_pane

0xa122,	// (0x0004c654) call6_pane_g1_ParamLimits

0xa122,	// (0x0004c654) call6_pane_g1

0xa138,	// (0x0004c66a) popup_call6_1st_window_ParamLimits

0xa138,	// (0x0004c66a) popup_call6_1st_window

0xa149,	// (0x0004c67b) popup_call6_2nd_window_ParamLimits

0xa149,	// (0x0004c67b) popup_call6_2nd_window

0xa15a,	// (0x0004c68c) cell_call6_btn_pane_ParamLimits

0xa15a,	// (0x0004c68c) cell_call6_btn_pane

0xcfe4,	// (0x0004f516) bg_popup_call2_in_pane_cp03

0xbcfd,	// (0x0004e22f) popup_call6_1st_window_g1

0xbd05,	// (0x0004e237) popup_call6_1st_window_g2

0xbd0d,	// (0x0004e23f) popup_call6_1st_window_g3

0x0002,

0xfd19,	// (0x0005224b) popup_call6_1st_window_g

0xbd15,	// (0x0004e247) popup_call6_1st_window_t1

0xbd24,	// (0x0004e256) popup_call6_1st_window_t2

0xbd34,	// (0x0004e266) popup_call6_1st_window_t3

0x0002,

0xfd20,	// (0x00052252) popup_call6_1st_window_t

0xcfe4,	// (0x0004f516) bg_popup_call2_in_pane_cp04

0xbcfd,	// (0x0004e22f) popup_call6_2nd_window_g1

0xbd05,	// (0x0004e237) popup_call6_2nd_window_g2

0xbd0d,	// (0x0004e23f) popup_call6_2nd_window_g3

0x0002,

0xfd19,	// (0x0005224b) popup_call6_2nd_window_g

0xbd15,	// (0x0004e247) popup_call6_2nd_window_t1

0xa67e,	// (0x0004cbb0) bg_button_pane_cp15

0xbd44,	// (0x0004e276) cell_call6_btn_pane_g1

0xbd4d,	// (0x0004e27f) cell_call6_btn_pane_t1

0xa16e,	// (0x0004c6a0) listscroll_wgtman_pane_ParamLimits

0xa16e,	// (0x0004c6a0) listscroll_wgtman_pane

0xa191,	// (0x0004c6c3) wgtman_btn_pane_ParamLimits

0xa191,	// (0x0004c6c3) wgtman_btn_pane

0xceaa,	// (0x0004f3dc) aid_scroll_copy1

0xbd5c,	// (0x0004e28e) list_wgtman_pane

0xa1d4,	// (0x0004c706) wgtman_btn_pane_g1_ParamLimits

0xa1d4,	// (0x0004c706) wgtman_btn_pane_g1

0xa200,	// (0x0004c732) wgtman_btn_pane_t1_ParamLimits

0xa200,	// (0x0004c732) wgtman_btn_pane_t1

0xbd66,	// (0x0004e298) wgtman_btn_pane_t2_ParamLimits

0xbd66,	// (0x0004e298) wgtman_btn_pane_t2

0x0001,

0xfd27,	// (0x00052259) wgtman_btn_pane_t_ParamLimits

0xfd27,	// (0x00052259) wgtman_btn_pane_t

0xbd7d,	// (0x0004e2af) listrow_wgtman_pane_ParamLimits

0xbd7d,	// (0x0004e2af) listrow_wgtman_pane

0xbd91,	// (0x0004e2c3) listrow_wgtman_pane_g1

0xa23d,	// (0x0004c76f) listrow_wgtman_pane_g2

0x0001,

0xfd2c,	// (0x0005225e) listrow_wgtman_pane_g

0xbd9a,	// (0x0004e2cc) listrow_wgtman_pane_t1

0xbda8,	// (0x0004e2da) listrow_wgtman_pane_t2

0x0001,

0xfd31,	// (0x00052263) listrow_wgtman_pane_t

0xbdb6,	// (0x0004e2e8) wait_bar_pane_cp09

0xbdbe,	// (0x0004e2f0) main_calllock_btn_pane

0xbdc8,	// (0x0004e2fa) main_calllock_pane_g1

0xa67e,	// (0x0004cbb0) bg_button_pane_cp17

0xbdd4,	// (0x0004e306) main_calllock_btn_pane_g1

0xbddd,	// (0x0004e30f) main_calllock_btn_pane_t1

0xa67e,	// (0x0004cbb0) main_dialer3_pane

0xa67e,	// (0x0004cbb0) main_fmrd2_pane

0xe896,	// (0x00050dc8) main_fs_bigclock_unlock_btn_pane_g1

0xbdf4,	// (0x0004e326) main_fs_bigclock_unlock_btn_pane_t1

0xa247,	// (0x0004c779) area_fmrd2_info_pane_ParamLimits

0xa247,	// (0x0004c779) area_fmrd2_info_pane

0xa25a,	// (0x0004c78c) area_fmrd2_visual_pane_ParamLimits

0xa25a,	// (0x0004c78c) area_fmrd2_visual_pane

0xa268,	// (0x0004c79a) fmrd2_indi_pane_ParamLimits

0xa268,	// (0x0004c79a) fmrd2_indi_pane

0xa275,	// (0x0004c7a7) area_fmrd2_visual_pane_g1

0xa27d,	// (0x0004c7af) area_fmrd2_visual_pane_t1

0xa28d,	// (0x0004c7bf) area_fmrd2_visual_pane_t2

0xa29d,	// (0x0004c7cf) area_fmrd2_visual_pane_t3

0x0002,

0xfd3b,	// (0x0005226d) area_fmrd2_visual_pane_t

0xa2ad,	// (0x0004c7df) area_fmrd2_info_pane_g1

0xa2b5,	// (0x0004c7e7) area_fmrd2_info_pane_t1

0xa2c5,	// (0x0004c7f7) area_fmrd2_info_pane_t2

0xa2d5,	// (0x0004c807) area_fmrd2_info_pane_t3

0xa2e5,	// (0x0004c817) area_fmrd2_info_pane_t4

0x0003,

0xfd42,	// (0x00052274) area_fmrd2_info_pane_t

0xa2f5,	// (0x0004c827) fmrd2_indi_pane_t1

0xa305,	// (0x0004c837) fmrd2_indi_pane_t2

0xa315,	// (0x0004c847) fmrd2_indi_pane_t3

0x0002,

0xfd4b,	// (0x0005227d) fmrd2_indi_pane_t

0x930d,	// (0x0004b83f) list_single_fs_bigclock_indicator_pane_g5_ParamLimits

0x930d,	// (0x0004b83f) list_single_fs_bigclock_indicator_pane_g5

0x93b3,	// (0x0004b8e5) list_single_fs_bigclock_indicator_pane_t5_ParamLimits

0x93b3,	// (0x0004b8e5) list_single_fs_bigclock_indicator_pane_t5

0x9b9e,	// (0x0004c0d0) aid_cell_bcale_month_pane_ParamLimits

0x9b9e,	// (0x0004c0d0) aid_cell_bcale_month_pane

0x9bb0,	// (0x0004c0e2) bcale_month_pane_ParamLimits

0x9bb0,	// (0x0004c0e2) bcale_month_pane

0x9bc8,	// (0x0004c0fa) bcale_preview_pane_ParamLimits

0x9bc8,	// (0x0004c0fa) bcale_preview_pane

0xbb39,	// (0x0004e06b) list_single_fs_bigclock_pane_t1_ParamLimits

0xbb55,	// (0x0004e087) list_single_fs_bigclock_pane_t2_ParamLimits

0xbb55,	// (0x0004e087) list_single_fs_bigclock_pane_t2

0x0001,

0xfcd2,	// (0x00052204) list_single_fs_bigclock_pane_t_ParamLimits

0xfcd2,	// (0x00052204) list_single_fs_bigclock_pane_t

0xbdec,	// (0x0004e31e) main_fs_bigclock_unlock_btn_pane_g2

0x0001,

0xfd36,	// (0x00052268) main_fs_bigclock_unlock_btn_pane_g

0xa325,	// (0x0004c857) aid_dia3_key_size_ParamLimits

0xa325,	// (0x0004c857) aid_dia3_key_size

0xa334,	// (0x0004c866) aid_dia3_listrow_size_ParamLimits

0xa334,	// (0x0004c866) aid_dia3_listrow_size

0xa342,	// (0x0004c874) dia3_keypad_fun_pane_ParamLimits

0xa342,	// (0x0004c874) dia3_keypad_fun_pane

0xa35e,	// (0x0004c890) dia3_keypad_num_pane_ParamLimits

0xa35e,	// (0x0004c890) dia3_keypad_num_pane

0xa377,	// (0x0004c8a9) dia3_listscroll_pane_ParamLimits

0xa377,	// (0x0004c8a9) dia3_listscroll_pane

0xa38c,	// (0x0004c8be) dia3_numentry_pane_ParamLimits

0xa38c,	// (0x0004c8be) dia3_numentry_pane

0xbe02,	// (0x0004e334) dia3_list_pane

0xbe0d,	// (0x0004e33f) scroll_pane_cp12

0xa67e,	// (0x0004cbb0) bg_dia3_numentry_pane

0xbe18,	// (0x0004e34a) dia3_numentry_pane_t1

0xa39f,	// (0x0004c8d1) cell_dia3_key_num_pane

0xa3a7,	// (0x0004c8d9) cell_dia3_key0_fun_pane_ParamLimits

0xa3a7,	// (0x0004c8d9) cell_dia3_key0_fun_pane

0xa3bb,	// (0x0004c8ed) cell_dia3_key1_fun_pane_ParamLimits

0xa3bb,	// (0x0004c8ed) cell_dia3_key1_fun_pane

0xa3d3,	// (0x0004c905) dia3_listrow_pane

0x8d20,	// (0x0004b252) bg_dia3_numentry_pane_g1

0xa67e,	// (0x0004cbb0) bg_button_pane_cp21

0xbe27,	// (0x0004e359) cell_dia3_key_num_pane_t1

0xbe35,	// (0x0004e367) cell_dia3_key_num_pane_t2

0xbe44,	// (0x0004e376) cell_dia3_key_num_pane_t3

0xbe53,	// (0x0004e385) cell_dia3_key_num_pane_t4

0x0003,

0xfd52,	// (0x00052284) cell_dia3_key_num_pane_t

0xa67e,	// (0x0004cbb0) bg_button_pane_cp19

0xa3e5,	// (0x0004c917) cell_dia3_key0_fun_pane_g1

0xa67e,	// (0x0004cbb0) bg_button_pane_cp20

0xa3ed,	// (0x0004c91f) cell_dia3_key1_fun_pane_g1

0xa3f5,	// (0x0004c927) area_left_week_number_pane

0xa3fe,	// (0x0004c930) area_top_day_name_pane

0xa407,	// (0x0004c939) frame_month_view_pane

0xa413,	// (0x0004c945) grid_month_view_pane

0xa41d,	// (0x0004c94f) cell_top_day_name_pane_ParamLimits

0xa41d,	// (0x0004c94f) cell_top_day_name_pane

0xa437,	// (0x0004c969) cell_area_left_week_number_pane_ParamLimits

0xa437,	// (0x0004c969) cell_area_left_week_number_pane

0xa44d,	// (0x0004c97f) cell_month_view_pane_ParamLimits

0xa44d,	// (0x0004c97f) cell_month_view_pane

0xbe62,	// (0x0004e394) frm_month_g1

0xa46c,	// (0x0004c99e) frm_month_g2

0xa476,	// (0x0004c9a8) frm_month_g3

0xa480,	// (0x0004c9b2) frm_month_g4

0xa48a,	// (0x0004c9bc) frm_month_g5

0xa494,	// (0x0004c9c6) frm_month_g6

0xa4a0,	// (0x0004c9d2) frm_month_g7

0xbe6b,	// (0x0004e39d) frm_month_g8

0xa4ac,	// (0x0004c9de) frm_month_g9

0xa4b5,	// (0x0004c9e7) frm_month_g10

0xa4be,	// (0x0004c9f0) frm_month_g11

0xa4c7,	// (0x0004c9f9) frm_month_g12

0xa4d0,	// (0x0004ca02) frm_month_g13

0xa4d9,	// (0x0004ca0b) frm_month_g14

0xa4e2,	// (0x0004ca14) frm_month_g15

0xa4ed,	// (0x0004ca1f) frm_month_g16

0x000f,

0xfd5b,	// (0x0005228d) frm_month_g

0xa4f8,	// (0x0004ca2a) cell_top_day_name_pane_t1

0xa507,	// (0x0004ca39) cell_area_left_week_number_pane_g1

0xa4f8,	// (0x0004ca2a) cell_area_left_week_number_pane_t1

0xe896,	// (0x00050dc8) cell_month_view_pane_g1

0xa50f,	// (0x0004ca41) cell_month_view_pane_t1

0xa67e,	// (0x0004cbb0) main_fps_pane

0x987a,	// (0x0004bdac) cmail_ddmenu_btn02_pane_cp1_ParamLimits

0x987a,	// (0x0004bdac) cmail_ddmenu_btn02_pane_cp1

0x9896,	// (0x0004bdc8) cmail_ddmenu_btn02_pane_cp2_ParamLimits

0x9896,	// (0x0004bdc8) cmail_ddmenu_btn02_pane_cp2

0x9db9,	// (0x0004c2eb) cmail_ddmenu_btn02_pane_g2_ParamLimits

0x9db9,	// (0x0004c2eb) cmail_ddmenu_btn02_pane_g2

0x0001,

0xfc83,	// (0x000521b5) cmail_ddmenu_btn02_pane_g_ParamLimits

0xfc83,	// (0x000521b5) cmail_ddmenu_btn02_pane_g

0x9dd7,	// (0x0004c309) cmail_ddmenu_btn02_pane_t2_ParamLimits

0x9dd7,	// (0x0004c309) cmail_ddmenu_btn02_pane_t2

0x0001,

0xfc88,	// (0x000521ba) cmail_ddmenu_btn02_pane_t_ParamLimits

0xfc88,	// (0x000521ba) cmail_ddmenu_btn02_pane_t

0xa51e,	// (0x0004ca50) fps_text_pane_ParamLimits

0xa51e,	// (0x0004ca50) fps_text_pane

0xa535,	// (0x0004ca67) main_fps_pane_g1_ParamLimits

0xa535,	// (0x0004ca67) main_fps_pane_g1

0xa54d,	// (0x0004ca7f) wait_bar_pane_cp010_ParamLimits

0xa54d,	// (0x0004ca7f) wait_bar_pane_cp010

0xa560,	// (0x0004ca92) fps_text_pane_t1_ParamLimits

0xa560,	// (0x0004ca92) fps_text_pane_t1

0x6956,	// (0x00048e88) cam4_image_uncrop_pane_g1

0x695f,	// (0x00048e91) cam4_image_uncrop_pane_g2

0x696a,	// (0x00048e9c) cam4_image_uncrop_pane_g3

0x6973,	// (0x00048ea5) cam4_image_uncrop_pane_g4

0x0003,

0xf75d,	// (0x00051c8f) cam4_image_uncrop_pane_g

0xa3d3,	// (0x0004c905) dia3_listrow_pane_ParamLimits

0xa67e,	// (0x0004cbb0) main_phob2_pane

0x99dc,	// (0x0004bf0e) cell_tport_appsw_pane_cp02_ParamLimits

0x99dc,	// (0x0004bf0e) cell_tport_appsw_pane_cp02

0x99f0,	// (0x0004bf22) cell_tport_appsw_pane_cp03_ParamLimits

0x99f0,	// (0x0004bf22) cell_tport_appsw_pane_cp03

0xa67e,	// (0x0004cbb0) phob2_contact_card_pane

0xa67e,	// (0x0004cbb0) phob2_listscroll_pane

0xbe74,	// (0x0004e3a6) phob2_list_pane

0xbe7c,	// (0x0004e3ae) scroll_pane_cp034

0xa578,	// (0x0004caaa) phob2_cc_data_pane_ParamLimits

0xa578,	// (0x0004caaa) phob2_cc_data_pane

0xa599,	// (0x0004cacb) phob2_cc_listscroll_pane_ParamLimits

0xa599,	// (0x0004cacb) phob2_cc_listscroll_pane

0xa5bb,	// (0x0004caed) list_double_large_graphic_phob2_pane_ParamLimits

0xa5bb,	// (0x0004caed) list_double_large_graphic_phob2_pane

0xa5d0,	// (0x0004cb02) list_double_large_graphic_phob2_pane_g1_ParamLimits

0xa5d0,	// (0x0004cb02) list_double_large_graphic_phob2_pane_g1

0x149a,	// (0x000439cc) list_double_large_graphic_phob2_pane_g2_ParamLimits

0x149a,	// (0x000439cc) list_double_large_graphic_phob2_pane_g2

0x0001,

0xfd7c,	// (0x000522ae) list_double_large_graphic_phob2_pane_g_ParamLimits

0xfd7c,	// (0x000522ae) list_double_large_graphic_phob2_pane_g

0x14a6,	// (0x000439d8) list_double_large_graphic_phob2_pane_t1_ParamLimits

0x14a6,	// (0x000439d8) list_double_large_graphic_phob2_pane_t1

0x14bb,	// (0x000439ed) list_double_large_graphic_phob2_pane_t2_ParamLimits

0x14bb,	// (0x000439ed) list_double_large_graphic_phob2_pane_t2

0x0001,

0xfd81,	// (0x000522b3) list_double_large_graphic_phob2_pane_t_ParamLimits

0xfd81,	// (0x000522b3) list_double_large_graphic_phob2_pane_t

0xa67e,	// (0x0004cbb0) list_highlight_pane_cp024

0xbe84,	// (0x0004e3b6) phob2_cc_button_pane

0xa5dd,	// (0x0004cb0f) phob2_cc_data_pane_g1_ParamLimits

0xa5dd,	// (0x0004cb0f) phob2_cc_data_pane_g1

0xa5f3,	// (0x0004cb25) phob2_cc_data_pane_g2_ParamLimits

0xa5f3,	// (0x0004cb25) phob2_cc_data_pane_g2

0x0001,

0xfd86,	// (0x000522b8) phob2_cc_data_pane_g_ParamLimits

0xfd86,	// (0x000522b8) phob2_cc_data_pane_g

0xa607,	// (0x0004cb39) phob2_cc_data_pane_t1_ParamLimits

0xa607,	// (0x0004cb39) phob2_cc_data_pane_t1

0xa621,	// (0x0004cb53) phob2_cc_data_pane_t2_ParamLimits

0xa621,	// (0x0004cb53) phob2_cc_data_pane_t2

0xa63b,	// (0x0004cb6d) phob2_cc_data_pane_t3_ParamLimits

0xa63b,	// (0x0004cb6d) phob2_cc_data_pane_t3

0x0002,

0xfd8b,	// (0x000522bd) phob2_cc_data_pane_t_ParamLimits

0xfd8b,	// (0x000522bd) phob2_cc_data_pane_t

0xbe8c,	// (0x0004e3be) phob2_cc_list_pane_ParamLimits

0xbe8c,	// (0x0004e3be) phob2_cc_list_pane

0x7a4d,	// (0x00049f7f) scroll_pane_cp035_ParamLimits

0x7a4d,	// (0x00049f7f) scroll_pane_cp035

0xa6f7,	// (0x0004cc29) bg_button_pane_cp033

0xbe98,	// (0x0004e3ca) phob2_cc_button_pane_g1

0xbea4,	// (0x0004e3d6) phob2_cc_button_pane_t1

0xbeb9,	// (0x0004e3eb) phob2_cc_button_pane_t2

0x0001,

0xfd92,	// (0x000522c4) phob2_cc_button_pane_t

0xa655,	// (0x0004cb87) list_double_large_graphic_phob2_cc_pane_ParamLimits

0xa655,	// (0x0004cb87) list_double_large_graphic_phob2_cc_pane

0xa66a,	// (0x0004cb9c) list_double_large_graphic_phob2_cc_pane_g1_ParamLimits

0xa66a,	// (0x0004cb9c) list_double_large_graphic_phob2_cc_pane_g1

0x14cd,	// (0x000439ff) list_double_large_graphic_phob2_cc_pane_g2_ParamLimits

0x14cd,	// (0x000439ff) list_double_large_graphic_phob2_cc_pane_g2

0x14d9,	// (0x00043a0b) list_double_large_graphic_phob2_cc_pane_g3_ParamLimits

0x14d9,	// (0x00043a0b) list_double_large_graphic_phob2_cc_pane_g3

0x14e5,	// (0x00043a17) list_double_large_graphic_phob2_cc_pane_g4_ParamLimits

0x14e5,	// (0x00043a17) list_double_large_graphic_phob2_cc_pane_g4

0x14f1,	// (0x00043a23) list_double_large_graphic_phob2_cc_pane_g5_ParamLimits

0x14f1,	// (0x00043a23) list_double_large_graphic_phob2_cc_pane_g5

0x0004,

0xfd97,	// (0x000522c9) list_double_large_graphic_phob2_cc_pane_g_ParamLimits

0xfd97,	// (0x000522c9) list_double_large_graphic_phob2_cc_pane_g

0x14fd,	// (0x00043a2f) list_double_large_graphic_phob2_cc_pane_t1_ParamLimits

0x14fd,	// (0x00043a2f) list_double_large_graphic_phob2_cc_pane_t1

0x1526,	// (0x00043a58) list_double_large_graphic_phob2_cc_pane_t2_ParamLimits

0x1526,	// (0x00043a58) list_double_large_graphic_phob2_cc_pane_t2

0x0001,

0xfda2,	// (0x000522d4) list_double_large_graphic_phob2_cc_pane_t_ParamLimits

0xfda2,	// (0x000522d4) list_double_large_graphic_phob2_cc_pane_t

0xbecb,	// (0x0004e3fd) list_highlight_pane_cp025_ParamLimits

0xbecb,	// (0x0004e3fd) list_highlight_pane_cp025

0xa6f7,	// (0x0004cc29) bg_button_pane_cp033_ParamLimits

0xbe98,	// (0x0004e3ca) phob2_cc_button_pane_g1_ParamLimits

0xbea4,	// (0x0004e3d6) phob2_cc_button_pane_t1_ParamLimits

0xbeb9,	// (0x0004e3eb) phob2_cc_button_pane_t2_ParamLimits

0xfd92,	// (0x000522c4) phob2_cc_button_pane_t_ParamLimits

0x158b,	// (0x00043abd) popup_wgtman_window

0x71f7,	// (0x00049729) scroll_pane_cp038

0xa1b6,	// (0x0004c6e8) wgtman_btn_pane_cp_01_ParamLimits

0xa1b6,	// (0x0004c6e8) wgtman_btn_pane_cp_01

0xbed9,	// (0x0004e40b) wgtman_content_pane

0xbee2,	// (0x0004e414) wgtman_heading_pane

0xa67e,	// (0x0004cbb0) bg_heading_pane_cp02

0xbeeb,	// (0x0004e41d) wgtman_heading_pane_g1

0xbef3,	// (0x0004e425) wgtman_heading_pane_t1

0xbf01,	// (0x0004e433) scroll_pane_cp036

0xbf09,	// (0x0004e43b) wgtman_list_pane

0x95d7,	// (0x0004bb09) wgtman_list_pane_t1_ParamLimits

0x95d7,	// (0x0004bb09) wgtman_list_pane_t1

0xaed0,	// (0x0004d402) cam4_grid_pane

0x0d87,	// (0x000432b9) bg_button_pane_cp015_ParamLimits

0x78e0,	// (0x00049e12) bg_button_pane_cp016_ParamLimits

0x78f3,	// (0x00049e25) bg_button_pane_cp017_ParamLimits

0x0dcf,	// (0x00043301) popup_vitu2_query_window_g3_ParamLimits

0x0dcf,	// (0x00043301) popup_vitu2_query_window_g3

0x0e4a,	// (0x0004337c) popup_vitu2_query_window_t6_ParamLimits

0x0e4a,	// (0x0004337c) popup_vitu2_query_window_t6

0x0e75,	// (0x000433a7) popup_vitu2_query_window_t7_ParamLimits

0x0e75,	// (0x000433a7) popup_vitu2_query_window_t7

0x6956,	// (0x00048e88) cam4_grid_pane_g1

0x695f,	// (0x00048e91) cam4_grid_pane_g2

0xbf11,	// (0x0004e443) cam4_grid_pane_g3

0xbf1a,	// (0x0004e44c) cam4_grid_pane_g4

0x0003,

0xfda7,	// (0x000522d9) cam4_grid_pane_g

0x23de,	// (0x00044910) aid_placing_vt_slider_lsc_ParamLimits

0x26ce,	// (0x00044c00) vidtel_button_pane_ParamLimits

0x26ce,	// (0x00044c00) vidtel_button_pane

0xa67e,	// (0x0004cbb0) bg_button_pane_cp034

0xa676,	// (0x0004cba8) vidtel_button_pane_g1

0xbf25,	// (0x0004e457) vidtel_button_pane_t1

0x75ee,	// (0x00049b20) aid_size_vtel_slider_touch

0x7a4d,	// (0x00049f7f) scroll_pane_cp039

0x8d8f,	// (0x0004b2c1) ncim_query_button_pane_cp01_ParamLimits

0x8dae,	// (0x0004b2e0) ncimui_query_pane_g1_ParamLimits

0xa6f7,	// (0x0004cc29) input_focus_pane_cp012_ParamLimits

0x8dd3,	// (0x0004b305) ncim_query_entry_pane_t1_ParamLimits

0x7a4d,	// (0x00049f7f) scroll_pane_cp039_ParamLimits
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
	};

} // end of namespace AknLayoutScalable_Elaf_pvl4_apps_vga4_lsc_tch_Small
